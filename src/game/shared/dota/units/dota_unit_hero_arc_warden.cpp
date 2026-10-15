// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/units/dota_unit_hero_arc_warden.cpp:39
class CDOTA_Unit_Hero_ArcWarden : public CDOTA_BaseNPC_Hero {
public:

private:

	int m_nTalkFXIndex;  // +0x16ec
	int m_nFXDeath;  // +0x16f0
	int m_nTempestFX;  // +0x16f4
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
	CDOTA_Unit_Hero_ArcWarden(CDOTA_Unit_Hero_ArcWarden &);
	CDOTA_Unit_Hero_ArcWarden(CDOTA_Unit_Hero_ArcWarden &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void Spawn(const CEntityKeyValues *);
	void CreateAmbientEffects();
	void DestroyAmbientEffects();
	virtual void OnAlive();
	virtual void OnDying();
	virtual void OnDeath();
	virtual void CalculateActivityModifiers(Activity);
	CDOTA_Unit_Hero_ArcWarden();
	virtual ~CDOTA_Unit_Hero_ArcWarden();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[8] Spawn
	// vtable[471] OnAlive
	// vtable[469] OnDying
	// vtable[470] OnDeath
	// vtable[442] CalculateActivityModifiers
	// sizeof = 5880
};

// src/game/shared/dota/units/dota_unit_hero_arc_warden.cpp:111
class C_CDOTA_Unit_Hero_ArcWarden_MapInstall {
	C_CDOTA_Unit_Hero_ArcWarden_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_arc_warden.cpp:245
class CDOTA_Ability_ArcWarden_Flux : public CDOTABaseAbility {
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
	CDOTA_Ability_ArcWarden_Flux(CDOTA_Ability_ArcWarden_Flux &);
	CDOTA_Ability_ArcWarden_Flux(CDOTA_Ability_ArcWarden_Flux &);
	CDOTA_Ability_ArcWarden_Flux();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void OnSpellStart();
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual ~CDOTA_Ability_ArcWarden_Flux();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[266] OnSpellStart
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_arc_warden.cpp:297
class CDOTA_Modifier_ArcWarden_Flux : public CDOTA_Buff {
public:

private:

	int m_nCasterTeam;  // +0xba8
	int damage_per_second;  // +0xbac
	int search_radius;  // +0xbb0
	int move_speed_slow_pct;  // +0xbb4
	float think_interval;  // +0xbb8
	int m_nCurrentSlow;  // +0xbbc
	bool m_bAlone;  // +0xbc0

	int m_nFXIndex;  // +0xbc4
	CDOTA_Modifier_ArcWarden_Flux();
	virtual bool IsDebuff();
	virtual int GetAttributes();
	virtual void OnCreated(KeyValues *);
	virtual void OnIntervalThink();
	virtual void OnDestroy();
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierMoveSpeedBonus_Percentage(const CModifierParams &);
	int GetCurrentMovementSlow();
	virtual void AddCustomTransmiterData(CDOTAModifierBuffTableEntry &);
	virtual ~CDOTA_Modifier_ArcWarden_Flux();

	// vtable[12] IsDebuff
	// vtable[7] GetAttributes
	// vtable[57] OnCreated
	// vtable[56] OnIntervalThink
	// vtable[60] OnDestroy
	// vtable[65] DeclareFunctions
	// vtable[10] AddCustomTransmiterData
	// sizeof = 3016
};

// src/game/shared/dota/units/dota_unit_hero_arc_warden.cpp:458
class CDOTA_Ability_ArcWarden_MagneticField : public CDOTABaseAbility {
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
	CDOTA_Ability_ArcWarden_MagneticField(CDOTA_Ability_ArcWarden_MagneticField &);
	CDOTA_Ability_ArcWarden_MagneticField(CDOTA_Ability_ArcWarden_MagneticField &);
	CDOTA_Ability_ArcWarden_MagneticField();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual Activity GetGestureBasedActivity();
	virtual void OnSpellStart();
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual ~CDOTA_Ability_ArcWarden_MagneticField();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[211] GetGestureBasedActivity
	// vtable[266] OnSpellStart
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_arc_warden.cpp:485
class C_CDOTA_Ability_ArcWarden_MagneticField_MapInstall {
	C_CDOTA_Ability_ArcWarden_MagneticField_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_arc_warden.cpp:539
class CDOTA_Modifier_ArcWarden_MagneticField_Thinker : public CDOTA_Buff {
public:

private:

	int radius;  // +0xbb0
	CDOTA_Modifier_ArcWarden_MagneticField_Thinker();
	virtual void OnCreated(KeyValues *);
	virtual bool IsHidden();
	virtual bool IsAura();
	virtual const char * GetModifierAura();
	virtual int GetAuraSearchTeam();
	virtual int GetAuraSearchType();
	virtual int GetAuraRadius();
	virtual float GetAuraDuration();
	virtual void OnDestroy();
	virtual ~CDOTA_Modifier_ArcWarden_MagneticField_Thinker();

	// vtable[57] OnCreated
	// vtable[11] IsHidden
	// vtable[35] IsAura
	// vtable[37] GetModifierAura
	// vtable[38] GetAuraSearchTeam
	// vtable[39] GetAuraSearchType
	// vtable[41] GetAuraRadius
	// vtable[83] GetAuraDuration
	// vtable[60] OnDestroy
	// sizeof = 3000
};

// src/game/shared/dota/units/dota_unit_hero_arc_warden.cpp:608
class CDOTA_Modifier_ArcWarden_MagneticField : public CDOTA_Buff {
public:

private:

	int attack_speed_bonus;  // +0xba8
	int evasion_chance;  // +0xbac
	int radius;  // +0xbb0
	float aura_origin_x;  // +0xbb4
	float aura_origin_y;  // +0xbb8
	CDOTA_Modifier_ArcWarden_MagneticField();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierEvasion_Constant(const CModifierParams &);
	ModifierVariant_t GetModifierAttackSpeedBonus_Constant(const CModifierParams &);
	virtual ~CDOTA_Modifier_ArcWarden_MagneticField();

	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[65] DeclareFunctions
	// sizeof = 3008
};

// src/game/shared/dota/units/dota_unit_hero_arc_warden.cpp:699
class CDOTA_Ability_ArcWarden_SparkWraith : public CDOTABaseAbility {
public:

private:

	float duration;  // +0x390
	float activation_delay;  // +0x394
	float wraith_vision_duration;  // +0x398
	int wraith_vision_radius;  // +0x39c
	int spark_damage;  // +0x3a0
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
	CDOTA_Ability_ArcWarden_SparkWraith(CDOTA_Ability_ArcWarden_SparkWraith &);
	CDOTA_Ability_ArcWarden_SparkWraith(CDOTA_Ability_ArcWarden_SparkWraith &);
	CDOTA_Ability_ArcWarden_SparkWraith();
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
	virtual bool OnProjectileHit_ExtraData(EHANDLE, const Vector &, KeyValues *);
	virtual float GetAOERadius();
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual ~CDOTA_Ability_ArcWarden_SparkWraith();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[264] OnAbilityPhaseStart
	// vtable[266] OnSpellStart
	// vtable[290] OnProjectileHit_ExtraData
	// vtable[333] GetAOERadius
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// sizeof = 936
};

// src/game/shared/dota/units/dota_unit_hero_arc_warden.cpp:722
class C_CDOTA_Ability_ArcWarden_SparkWraith_MapInstall {
	C_CDOTA_Ability_ArcWarden_SparkWraith_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_arc_warden.cpp:824
class CDOTA_Modifier_ArcWarden_SparkWraith_Thinker : public CDOTA_Buff {
public:

private:

	int radius;  // +0xba8
	int wraith_vision_radius;  // +0xbac
	int wraith_speed;  // +0xbb0
	float activation_delay;  // +0xbbc
	float think_interval;  // +0xbc0
	int m_nSparkDamage;  // +0xbc4
	int m_nViewerID;  // +0xbc8
	bool m_bActive;  // +0xbcc
	CDOTA_Modifier_ArcWarden_SparkWraith_Thinker();
	virtual void OnCreated(KeyValues *);
	virtual bool IsHidden();
	virtual void OnIntervalThink();
	virtual void OnDestroy();
	virtual ~CDOTA_Modifier_ArcWarden_SparkWraith_Thinker();

	// vtable[57] OnCreated
	// vtable[11] IsHidden
	// vtable[56] OnIntervalThink
	// vtable[60] OnDestroy
	// sizeof = 3024
};

// src/game/shared/dota/units/dota_unit_hero_arc_warden.cpp:957
class CDOTA_Ability_ArcWarden_TempestDouble : public CDOTABaseAbility {
	class NetworkVar_m_hDoubles {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

public:

private:

	typedef CDOTA_Ability_ArcWarden_TempestDouble ThisClass;

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
	CDOTA_Ability_ArcWarden_TempestDouble(CDOTA_Ability_ArcWarden_TempestDouble &);
	CDOTA_Ability_ArcWarden_TempestDouble(CDOTA_Ability_ArcWarden_TempestDouble &);
	CDOTA_Ability_ArcWarden_TempestDouble();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void OnSpellStart();
	virtual void GetAdditionalOwnedUnits(CUtlVector<CDOTA_BaseNPC*, CUtlMemory<CDOTA_BaseNPC*, int> > *);
	virtual ~CDOTA_Ability_ArcWarden_TempestDouble();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// vtable[287] GetAdditionalOwnedUnits
	// sizeof = 920
};

// src/game/shared/dota/units/dota_unit_hero_arc_warden.cpp:971
class C_CDOTA_Ability_ArcWarden_TempestDouble_MapInstall {
	C_CDOTA_Ability_ArcWarden_TempestDouble_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_arc_warden.cpp:1167
class CDOTA_Modifier_ArcWarden_TempestDouble : public CDOTA_Buff {
public:

	CDOTA_Modifier_ArcWarden_TempestDouble();
	virtual void DeclareFunctions();
	virtual bool IsPurgable();
	virtual bool IsPermanent();
	virtual bool RemoveOnDeath();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	ModifierVariant_t GetModifierTempestDouble(const CModifierParams &);
	ModifierVariant_t OnDeath(const CModifierParams &);
	virtual const char * GetStatusEffectName();
	virtual int StatusEffectPriority();
	virtual ~CDOTA_Modifier_ArcWarden_TempestDouble();

	// vtable[65] DeclareFunctions
	// vtable[14] IsPurgable
	// vtable[23] IsPermanent
	// vtable[54] RemoveOnDeath
	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[70] GetStatusEffectName
	// vtable[71] StatusEffectPriority
	// sizeof = 2984
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Unit_Hero_ArcWarden::~CDOTA_Unit_Hero_ArcWarden  (line 39, @0x0000000002c99af0, libserver.so)
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero
void __fastcall CDOTA_Unit_Hero_ArcWarden::~CDOTA_Unit_Hero_ArcWarden(CDOTA_Unit_Hero_ArcWarden *const this)
{
  this->_vptr_IHandleEntity = &off_45856F0;
  this->_vptr_INextBotEventResponder = &off_45866D0;
  this->_vptr_CObstructionObject = &off_4586A00;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
}


// CDOTA_Unit_Hero_ArcWarden::~CDOTA_Unit_Hero_ArcWarden  (line 39, @0x0000000002c99b30, libserver.so)  // inlines: ~CDOTA_Unit_Hero_ArcWarden
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero, CBaseEntity::operator delete
void __fastcall CDOTA_Unit_Hero_ArcWarden::~CDOTA_Unit_Hero_ArcWarden(CDOTA_Unit_Hero_ArcWarden *const this)
{
  this->_vptr_IHandleEntity = &off_45856F0;
  this->_vptr_INextBotEventResponder = &off_45866D0;
  this->_vptr_CObstructionObject = &off_4586A00;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Unit_Hero_ArcWarden::Schema_DynamicBinding  (line 41, @0x0000000002c86c30, libserver.so)
// globals: CDOTA_Unit_Hero_ArcWarden::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_ArcWarden::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_ArcWarden *const this)
{
  return CDOTA_Unit_Hero_ArcWarden::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_ArcWarden::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 41, @0x0000000002c86c60, libserver.so)
// globals: CDOTA_Unit_Hero_ArcWarden::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_ArcWarden::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_ArcWarden::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_ArcWarden::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_ArcWarden::CEntityInstanceEntityClass::DestructInstance  (line 41, @0x0000000002c86c70, libserver.so)  // inlines: Destruct<CDOTA_Unit_Hero_ArcWarden>
void __fastcall CDOTA_Unit_Hero_ArcWarden::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Unit_Hero_ArcWarden::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Unit_Hero_ArcWarden::CEntityInstanceEntityClass::FreeInstance  (line 41, @0x0000000002c86c90, libserver.so)
void __fastcall CDOTA_Unit_Hero_ArcWarden::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Unit_Hero_ArcWarden::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Unit_Hero_ArcWarden::CEntityInstanceEntityClass::CanAllocate  (line 41, @0x0000000002c86cb0, libserver.so)
bool __fastcall CDOTA_Unit_Hero_ArcWarden::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Unit_Hero_ArcWarden::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Unit_Hero_ArcWarden::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 41, @0x0000000002c86cc0, libserver.so)
// globals: CDOTA_Unit_Hero_ArcWarden::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Unit_Hero_ArcWarden::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Unit_Hero_ArcWarden::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_ArcWarden::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_ArcWarden::CEntityInstanceEntityClass::AllocateInstance  (line 41, @0x0000000002c8f120, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Unit_Hero_ArcWarden::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Unit_Hero_ArcWarden::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 5880);
  memset(v1, 0, 0x16F8u);
  return v1;
}


// CDOTA_Unit_Hero_ArcWarden::CEntityInstanceEntityClass::ConstructInstance  (line 41, @0x0000000002c93db0, libserver.so)  // inlines: CDOTA_Unit_Hero_ArcWarden, Construct<CDOTA_Unit_Hero_ArcWarden>
// calls: CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero
CEntityInstance *__fastcall CDOTA_Unit_Hero_ArcWarden::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Unit_Hero_ArcWarden::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero(p);
    *(p + 1467) = -1;
    *p = &off_45856F0;
    *(p + 236) = &off_45866D0;
    *(p + 257) = &off_4586A00;
    *(p + 1468) = -1;
  }
  return p;
}


// CDOTA_Unit_Hero_ArcWarden::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 41, @0x0000000002ca3550, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Unit_Hero_ArcWarden::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_ArcWarden::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Unit_Hero_ArcWarden::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 41, @0x0000000002ca3870, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Unit_Hero_ArcWarden::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_ArcWarden::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Unit_Hero_ArcWarden::GetEntityClassInternal  (line 41, @0x0000000002cbd440, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_BaseNPC_Hero::InitScriptDesc, CDOTA_BaseNPC_Hero::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_01.cpp
// strings: "npc_dota_hero_arc_warden", "CDOTA_Unit_Hero_ArcWarden"
// globals: `guard variable for'CDOTA_Unit_Hero_ArcWarden::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_ArcWardenClass, CDOTA_Unit_Hero_ArcWarden::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_ArcWardenClass, __dso_handle, CDOTA_Unit_Hero_ArcWarden::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Unit_Hero_ArcWarden::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_ArcWardenClassInfo, CDOTA_Unit_Hero_ArcWarden::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_ArcWardenClassInfo
CEntityClass *__cdecl CDOTA_Unit_Hero_ArcWarden::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Unit_Hero_ArcWarden::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_ArcWardenClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_ArcWarden::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_ArcWardenClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Unit_Hero_ArcWarden::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_ArcWardenClass);
    CDOTA_Unit_Hero_ArcWarden::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_ArcWardenClass._vptr_CEntityClass = off_4585670;
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_ArcWarden::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_ArcWardenClass);
    __cxa_atexit(
      CDOTA_Unit_Hero_ArcWarden::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Unit_Hero_ArcWarden::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_ArcWardenClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Unit_Hero_ArcWardenClass != 0 )
    return &CDOTA_Unit_Hero_ArcWarden::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_ArcWardenClass;
  if ( `guard variable for'CDOTA_Unit_Hero_ArcWarden::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_ArcWardenClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_ArcWarden::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_ArcWardenClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_BaseNPC_Hero::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Unit_Hero_ArcWarden::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_ArcWardenClassInfo,
      "CDOTA_Unit_Hero_ArcWarden",
      "npc_dota_hero_arc_warden",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_ArcWarden::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_ArcWardenClassInfo);
  }
  CDOTA_Unit_Hero_ArcWarden::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_ArcWardenClass.m_pClassInfo = &CDOTA_Unit_Hero_ArcWarden::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_ArcWardenClassInfo;
  CDOTA_Unit_Hero_ArcWarden::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_ArcWardenClass.m_pBaseClassInfo = CDOTA_Unit_Hero_ArcWarden::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_ArcWardenClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Unit_Hero_ArcWardenClass = &CDOTA_Unit_Hero_ArcWarden::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_ArcWardenClass;
  CDOTA_Unit_Hero_ArcWarden::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_ArcWardenClassInfo.m_pClass = &CDOTA_Unit_Hero_ArcWarden::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_ArcWardenClass;
  CDOTA_Unit_Hero_ArcWarden::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_ArcWardenClass.m_pScriptClassDesc = CDOTA_BaseNPC_Hero::InitScriptDesc();
  g_pEntityCDOTA_Unit_Hero_ArcWardenClass->m_pComponentOverrides = 0;
  return &CDOTA_Unit_Hero_ArcWarden::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_ArcWardenClass;
}


// CDOTA_Unit_Hero_ArcWarden::CalculateActivityModifiers  (line 57, @0x0000000002c977d0, libserver.so)
// calls: CDOTA_BaseNPC::CalculateActivityModifiers, CDOTA_BaseNPC::GetAttackSpeed, CDOTA_BaseNPC::AddActivityModifier
// strings: "fastest", "faster"
void __fastcall CDOTA_Unit_Hero_ArcWarden::CalculateActivityModifiers(
        CDOTA_Unit_Hero_ArcWarden *const this,
        Activity iActivity)
{
  float v3; // xmm0_4
  UtlSymId_t v4[16]; // [rsp+0h] [rbp-20h] BYREF

  CDOTA_BaseNPC::CalculateActivityModifiers(this, iActivity);
  v3 = CDOTA_BaseNPC::GetAttackSpeed(this) * 100.0;
  if ( v3 > 351.0 )
  {
    CDOTA_BaseNPC::AddActivityModifier(v4, this, "fastest");
  }
  else if ( v3 >= 275.0 && v3 <= 350.0 )
  {
    CDOTA_BaseNPC::AddActivityModifier(v4, this, "faster");
  }
  else if ( v3 >= 169.0 )
  {
    CDOTA_BaseNPC::AddActivityModifier(v4, this, "fast");
  }
  if ( (*(this->_vptr_IHandleEntity + 386))(this) <= 339 )
    CDOTA_BaseNPC::AddActivityModifier(v4, this, "walk");
  else
    CDOTA_BaseNPC::AddActivityModifier(v4, this, "run");
}


// CDOTA_Unit_Hero_ArcWarden::YouForgotToImplementOrDeclareServerClass  (line 111, @0x0000000002c1b730, libserver.so)
int __fastcall CDOTA_Unit_Hero_ArcWarden::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Unit_Hero_ArcWarden *const this)
{
  return 0;
}


// CDOTA_Unit_Hero_ArcWarden::GetServerClass  (line 111, @0x0000000002c359f0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Unit_Hero_ArcWarden::GetServerClass(CDOTA_Unit_Hero_ArcWarden *const this)
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


// CDOTA_Unit_Hero_ArcWarden::Spawn  (line 121, @0x0000000002c1e7b0, libserver.so)
// calls: CDOTA_BaseNPC_Hero::Spawn
void __fastcall CDOTA_Unit_Hero_ArcWarden::Spawn(
        CDOTA_Unit_Hero_ArcWarden *const this,
        const CEntityKeyValues *pKeyValues)
{
  CDOTA_BaseNPC_Hero::Spawn(this, pKeyValues);
}


// CDOTA_Unit_Hero_ArcWarden::CreateAmbientEffects  (line 129, @0x0000000002c3a380, libserver.so)
void __fastcall CDOTA_Unit_Hero_ArcWarden::CreateAmbientEffects(CDOTA_Unit_Hero_ArcWarden *const this)
{
  ;
}


// CDOTA_Unit_Hero_ArcWarden::DestroyAmbientEffects  (line 162, @0x0000000002c3a390, libserver.so)
void __fastcall CDOTA_Unit_Hero_ArcWarden::DestroyAmbientEffects(CDOTA_Unit_Hero_ArcWarden *const this)
{
  ;
}


// CDOTA_Unit_Hero_ArcWarden::OnAlive  (line 179, @0x0000000002c1b740, libserver.so)
void __fastcall CDOTA_Unit_Hero_ArcWarden::OnAlive(CDOTA_Unit_Hero_ArcWarden *const this)
{
  ;
}


// CDOTA_Unit_Hero_ArcWarden::OnDying  (line 188, @0x0000000002c1b750, libserver.so)
void __fastcall CDOTA_Unit_Hero_ArcWarden::OnDying(CDOTA_Unit_Hero_ArcWarden *const this)
{
  ;
}


// CDOTA_Unit_Hero_ArcWarden::OnDeath  (line 220, @0x0000000002c1e8a0, libserver.so)
// calls: CBaseEntity::AddEffects
void __fastcall CDOTA_Unit_Hero_ArcWarden::OnDeath(CDOTA_Unit_Hero_ArcWarden *const this)
{
  if ( !this->m_bCustomKillEffect.m_Value )
    CBaseEntity::AddEffects(this, 32);
}


// CDOTA_Ability_ArcWarden_Flux::~CDOTA_Ability_ArcWarden_Flux  (line 245, @0x0000000002c97ca0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_ArcWarden_Flux::~CDOTA_Ability_ArcWarden_Flux(CDOTA_Ability_ArcWarden_Flux *const this)
{
  this->_vptr_IHandleEntity = &off_4586AD0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_ArcWarden_Flux::~CDOTA_Ability_ArcWarden_Flux  (line 245, @0x0000000002c97cc0, libserver.so)  // inlines: ~CDOTA_Ability_ArcWarden_Flux
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_ArcWarden_Flux::~CDOTA_Ability_ArcWarden_Flux(CDOTA_Ability_ArcWarden_Flux *const this)
{
  this->_vptr_IHandleEntity = &off_4586AD0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_ArcWarden_Flux::Schema_DynamicBinding  (line 247, @0x0000000002c86cd0, libserver.so)
// globals: CDOTA_Ability_ArcWarden_Flux::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_ArcWarden_Flux::Schema_DynamicBinding(
        const CDOTA_Ability_ArcWarden_Flux *const this)
{
  return CDOTA_Ability_ArcWarden_Flux::s_pSchemaBinding;
}


// CDOTA_Ability_ArcWarden_Flux::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 247, @0x0000000002c86ce0, libserver.so)
// globals: CDOTA_Ability_ArcWarden_Flux::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_ArcWarden_Flux::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_ArcWarden_Flux::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_ArcWarden_Flux::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_ArcWarden_Flux::CEntityInstanceEntityClass::DestructInstance  (line 247, @0x0000000002c86cf0, libserver.so)  // inlines: Destruct<CDOTA_Ability_ArcWarden_Flux>
void __fastcall CDOTA_Ability_ArcWarden_Flux::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_ArcWarden_Flux::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_ArcWarden_Flux::CEntityInstanceEntityClass::FreeInstance  (line 247, @0x0000000002c86d10, libserver.so)
void __fastcall CDOTA_Ability_ArcWarden_Flux::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_ArcWarden_Flux::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_ArcWarden_Flux::CEntityInstanceEntityClass::CanAllocate  (line 247, @0x0000000002c86d30, libserver.so)
bool __fastcall CDOTA_Ability_ArcWarden_Flux::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_ArcWarden_Flux::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_ArcWarden_Flux::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 247, @0x0000000002c86d40, libserver.so)
// globals: CDOTA_Ability_ArcWarden_Flux::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_ArcWarden_Flux::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_ArcWarden_Flux::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_ArcWarden_Flux::s_pSchemaBinding;
}


// CDOTA_Ability_ArcWarden_Flux::CEntityInstanceEntityClass::AllocateInstance  (line 247, @0x0000000002c8f160, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_ArcWarden_Flux::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_ArcWarden_Flux::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_ArcWarden_Flux::CEntityInstanceEntityClass::ConstructInstance  (line 247, @0x0000000002c94580, libserver.so)  // inlines: CDOTA_Ability_ArcWarden_Flux, Construct<CDOTA_Ability_ArcWarden_Flux>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_ArcWarden_Flux::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_ArcWarden_Flux::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_4586AD0;
  }
  return p;
}


// CDOTA_Ability_ArcWarden_Flux::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 247, @0x0000000002ca1710, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_ArcWarden_Flux::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_ArcWarden_Flux::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_ArcWarden_Flux::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 247, @0x0000000002ca1730, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_ArcWarden_Flux::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_ArcWarden_Flux::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_ArcWarden_Flux::GetEntityClassInternal  (line 247, @0x0000000002cb86d0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_01.cpp
// strings: "CDOTA_Ability_ArcWarden_Flux"
// globals: `guard variable for'CDOTA_Ability_ArcWarden_Flux::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ArcWarden_FluxClass, CDOTA_Ability_ArcWarden_Flux::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ArcWarden_FluxClass, __dso_handle, CDOTA_Ability_ArcWarden_Flux::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_ArcWarden_Flux::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_ArcWarden_FluxClassInfo, CDOTA_Ability_ArcWarden_Flux::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_ArcWarden_FluxClassInfo
CEntityClass *__cdecl CDOTA_Ability_ArcWarden_Flux::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_ArcWarden_Flux::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ArcWarden_FluxClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_ArcWarden_Flux::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ArcWarden_FluxClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_ArcWarden_Flux::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ArcWarden_FluxClass);
    CDOTA_Ability_ArcWarden_Flux::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ArcWarden_FluxClass._vptr_CEntityClass = off_4586A50;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_ArcWarden_Flux::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ArcWarden_FluxClass);
    __cxa_atexit(
      CDOTA_Ability_ArcWarden_Flux::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_ArcWarden_Flux::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ArcWarden_FluxClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_ArcWarden_FluxClass != 0 )
    return &CDOTA_Ability_ArcWarden_Flux::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ArcWarden_FluxClass;
  if ( `guard variable for'CDOTA_Ability_ArcWarden_Flux::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_ArcWarden_FluxClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_ArcWarden_Flux::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_ArcWarden_FluxClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_ArcWarden_Flux::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_ArcWarden_FluxClassInfo,
      "CDOTA_Ability_ArcWarden_Flux",
      "arc_warden_flux",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_ArcWarden_Flux::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_ArcWarden_FluxClassInfo);
  }
  CDOTA_Ability_ArcWarden_Flux::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ArcWarden_FluxClass.m_pClassInfo = &CDOTA_Ability_ArcWarden_Flux::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_ArcWarden_FluxClassInfo;
  CDOTA_Ability_ArcWarden_Flux::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ArcWarden_FluxClass.m_pBaseClassInfo = CDOTA_Ability_ArcWarden_Flux::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_ArcWarden_FluxClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_ArcWarden_FluxClass = &CDOTA_Ability_ArcWarden_Flux::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ArcWarden_FluxClass;
  CDOTA_Ability_ArcWarden_Flux::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_ArcWarden_FluxClassInfo.m_pClass = &CDOTA_Ability_ArcWarden_Flux::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ArcWarden_FluxClass;
  CDOTA_Ability_ArcWarden_Flux::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ArcWarden_FluxClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_ArcWarden_FluxClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_ArcWarden_Flux::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ArcWarden_FluxClass;
}


// CDOTA_Ability_ArcWarden_Flux::OnSpellStart  (line 258, @0x0000000002c53800, libserver.so)  // inlines: GetLevelSpecialValueFor<float>, GetParent, InState, IsInvulnerable, ToDOTABaseNPC
// calls: CDOTABaseAbility::GetCursorTarget, CDOTA_BaseNPC::TriggerSpellAbsorb, CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::KeyValues, KeyValues::SetFloat, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, CGameSceneNode::GetOwnerEntity, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CBaseEntity::GetAbsOrigin, CDOTA_ParticleManager::SetParticleControlEnt (17 total)
// strings: "modifier_arc_warden_flux", "particles/units/heroes/hero_arc_warden/arc_warden_flux_cast.vpcf", "attach_attack1", "attach_hitloc", "Hero_ArcWarden.Flux.Cast", "Hero_ArcWarden.Flux.Target"
void __fastcall CDOTA_Ability_ArcWarden_Flux::OnSpellStart(CDOTA_Ability_ArcWarden_Flux *const this)
{
  CBaseEntity *CursorTarget; // rax
  CDOTA_BaseNPC *v3; // rbx
  __int64 v4; // rax
  float v5; // xmm1_4
  CDOTA_BaseNPC *Caster; // rax
  CGameSceneNode *m_pParent; // rdi
  CBaseEntity *OwnerEntity; // r13
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // r13d
  CDOTA_BaseNPC *v11; // rax
  const Vector *AbsOrigin; // r14
  CDOTA_ParticleManager *v13; // rax
  const Vector *v14; // r14
  CDOTA_ParticleManager *v15; // rax
  CDOTA_BaseNPC *v16; // r14
  CDOTA_ParticleManager *v17; // rax
  CDOTA_ParticleManager *v18; // rax
  CDOTA_BaseNPC *v19; // rax
  CDOTA_BaseNPC *duration; // [rsp+8h] [rbp-58h]
  KeyValues kv; // [rsp+10h] [rbp-50h] BYREF
  unsigned __int64 v22; // [rsp+28h] [rbp-38h]

  v22 = __readfsqword(0x28u);
  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  v3 = CursorTarget;
  if ( CursorTarget != 0 && CursorTarget->m_bIsDOTANPC && LOBYTE(CursorTarget[4].m_pfnMoveDone.__pfn) == 0 )
  {
    v4 = *&CursorTarget[3].m_vecVelocity.m_Value.x;
    if ( (v4 & 0x100) == 0 && (v4 & 0x200) == 0 && !CDOTA_BaseNPC::TriggerSpellAbsorb(v3, this, 1) )
    {
      CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0);
      KeyValues::KeyValues(&kv, "modifier_arc_warden_flux");
      KeyValues::SetFloat(&kv, "duration", v5);
      Caster = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::AddNewModifier(v3, Caster, this, "modifier_arc_warden_flux", &kv, 0);
      m_pParent = this->m_pGameSceneNode->m_pParent;
      if ( m_pParent != 0 )
        OwnerEntity = CGameSceneNode::GetOwnerEntity(m_pParent);
      else
        OwnerEntity = 0;
      ParticleManager = GetParticleManager();
      Particle = CDOTA_ParticleManager::CreateParticle(
                   ParticleManager,
                   "particles/units/heroes/hero_arc_warden/arc_warden_flux_cast.vpcf",
                   2,
                   OwnerEntity,
                   0,
                   0);
      v11 = CDOTABaseAbility::GetCaster(this);
      AbsOrigin = CBaseEntity::GetAbsOrigin(v11);
      duration = CDOTABaseAbility::GetCaster(this);
      v13 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControlEnt(v13, Particle, 0, duration, 5, "attach_attack1", *AbsOrigin, 1);
      v14 = CBaseEntity::GetAbsOrigin(v3);
      v15 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControlEnt(v15, Particle, 1, v3, 5, "attach_hitloc", *v14, 1);
      v16 = CDOTABaseAbility::GetCaster(this);
      v17 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControlEnt(v17, Particle, 2, v16, 0, 0, vec3_invalid, 1);
      v18 = GetParticleManager();
      CDOTA_ParticleManager::ReleaseParticleIndex(v18, Particle);
      v19 = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::UnitEmitSound(v19, "Hero_ArcWarden.Flux.Cast", 0.0, 0, 0);
      CDOTA_BaseNPC::UnitEmitSound(v3, "Hero_ArcWarden.Flux.Target", 0.0, 0, 0);
      KeyValues::~KeyValues(&kv);
    }
  }
}


// CDOTA_Ability_ArcWarden_Flux::GetAbilityDamageToTargetOverInterval  (line 285, @0x0000000002c6b010, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_BaseNPC::GetArmorReductionForDamageType
__int64 __fastcall CDOTA_Ability_ArcWarden_Flux::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_ArcWarden_Flux *const this,
        CDOTA_BaseNPC *pTarget,
        float fInterval,
        DAMAGE_TYPES eDamageType)
{
  __int64 result; // rax
  int LevelSpecialValue; // r13d
  float v8; // [rsp-2Ch] [rbp-2Ch]

  result = 0;
  if ( eDamageType == DAMAGE_TYPES::DAMAGE_TYPE_MAGICAL )
  {
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "damage_per_second", -1, 0);
    v8 = LevelSpecialValue * CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0);
    return ((1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(pTarget, 2)) * v8);
  }
  return result;
}


// CDOTA_Modifier_ArcWarden_Flux::~CDOTA_Modifier_ArcWarden_Flux  (line 297, @0x0000000002c93550, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_ArcWarden_Flux::~CDOTA_Modifier_ArcWarden_Flux(
        CDOTA_Modifier_ArcWarden_Flux *const this)
{
  this->_vptr_CDOTA_Buff = &off_4587590;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_ArcWarden_Flux::~CDOTA_Modifier_ArcWarden_Flux  (line 297, @0x0000000002c93570, libserver.so)  // inlines: ~CDOTA_Modifier_ArcWarden_Flux
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_ArcWarden_Flux::~CDOTA_Modifier_ArcWarden_Flux(
        CDOTA_Modifier_ArcWarden_Flux *const this)
{
  this->_vptr_CDOTA_Buff = &off_4587590;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_ArcWarden_Flux::IsDebuff  (line 302, @0x0000000002c86d50, libserver.so)
bool __fastcall CDOTA_Modifier_ArcWarden_Flux::IsDebuff(CDOTA_Modifier_ArcWarden_Flux *const this)
{
  return 1;
}


// CDOTA_Modifier_ArcWarden_Flux::GetAttributes  (line 304, @0x0000000002c86d60, libserver.so)
int __fastcall CDOTA_Modifier_ArcWarden_Flux::GetAttributes(CDOTA_Modifier_ArcWarden_Flux *const this)
{
  return 2;
}


// CDOTA_Modifier_ArcWarden_Flux::OnCreated  (line 341, @0x0000000002c5b9d0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, GetLevelSpecialValueFor<float>, GetTeamNumber, Vector
// calls: CDOTA_Buff::GetAbility, DotaRetrieveAbilityValue<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_Buff::GetCaster, CDOTA_Buff::GetParent, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CBaseEntity::GetAbsOrigin, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::SetParticleControl, CDOTA_Buff::StartIntervalThink
// strings: "move_speed_slow_pct", "particles/units/heroes/hero_arc_warden/arc_warden_flux_tgt.vpcf", "attach_hitloc"
void __fastcall CDOTA_Modifier_ArcWarden_Flux::OnCreated(CDOTA_Modifier_ArcWarden_Flux *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax
  CDOTA_BaseNPC *Caster; // r13
  CDOTA_BaseNPC *Parent; // r12
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v10; // rax
  const Vector *AbsOrigin; // r12
  CDOTA_BaseNPC *v12; // rax
  const CBaseAnimating *v13; // r14
  CDOTA_ParticleManager *v14; // rax
  CDOTA_BaseNPC *v15; // rax
  const Vector *v16; // r12
  CDOTA_BaseNPC *v17; // rax
  const CBaseAnimating *v18; // r14
  CDOTA_ParticleManager *v19; // rax
  CDOTA_BaseNPC *v20; // rax
  const CBaseAnimating *v21; // r14
  CDOTA_ParticleManager *v22; // rax
  __int64 v23; // r12
  CDOTA_BaseNPC *v24; // rax
  const CBaseAnimating *v25; // r14
  CDOTA_ParticleManager *v26; // rax
  CDOTA_ParticleManager *v27; // rax
  float v28; // xmm1_4
  vec_t vecFallbackPosition; // [rsp+Ch] [rbp-34h]
  Vector v30; // 0:xmm0_8.8,8:xmm1_4.4

  Ability = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(Ability, &this->damage_per_second, "damage_per_second");
  v4 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v4, &this->search_radius, "search_radius");
  v5 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v5, &this->move_speed_slow_pct, "move_speed_slow_pct");
  v6 = CDOTA_Buff::GetAbility(this);
  if ( v6 != 0 )
    this->think_interval = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v6, "think_interval", -1, 0);
  else
    this->think_interval = 0.0;
  this->m_bAlone = 1;
  this->m_nFXIndex = -1;
  this->m_nCasterTeam = CDOTA_Buff::GetCaster(this)->m_iTeamNum.m_Value;
  Caster = CDOTA_Buff::GetCaster(this);
  Parent = CDOTA_Buff::GetParent(this);
  ParticleManager = GetParticleManager();
  this->m_nFXIndex = CDOTA_ParticleManager::CreateParticle(
                       ParticleManager,
                       "particles/units/heroes/hero_arc_warden/arc_warden_flux_tgt.vpcf",
                       2,
                       Parent,
                       0,
                       Caster);
  v10 = CDOTA_Buff::GetParent(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v10);
  v12 = CDOTA_Buff::GetParent(this);
  LODWORD(Caster) = this->m_nFXIndex;
  v13 = v12;
  v14 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v14, Caster, 0, v13, 5, "attach_hitloc", *AbsOrigin, 1);
  v15 = CDOTA_Buff::GetCaster(this);
  v16 = CBaseEntity::GetAbsOrigin(v15);
  v17 = CDOTA_Buff::GetCaster(this);
  LODWORD(Caster) = this->m_nFXIndex;
  v18 = v17;
  v19 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v19, Caster, 1, v18, 5, "attach_hitloc", *v16, 1);
  v20 = CDOTA_Buff::GetParent(this);
  LODWORD(Caster) = this->m_nFXIndex;
  v21 = v20;
  v22 = GetParticleManager();
  v23 = *&vec3_invalid.x;
  vecFallbackPosition = vec3_invalid.z;
  CDOTA_ParticleManager::SetParticleControlEnt(v22, Caster, 2, v21, 1, 0, vec3_invalid, 1);
  v24 = CDOTA_Buff::GetCaster(this);
  LODWORD(Caster) = this->m_nFXIndex;
  v25 = v24;
  v26 = GetParticleManager();
  *&v30.x = v23;
  v30.z = vecFallbackPosition;
  CDOTA_ParticleManager::SetParticleControlEnt(v26, Caster, 3, v25, 1, 0, v30, 1);
  LODWORD(v23) = this->m_nFXIndex;
  v27 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v27, v23, 4, COERCE_DOUBLE(1065353216), 0.0);
  (*(this->_vptr_CDOTA_Buff + 56))(this);
  CDOTA_Buff::StartIntervalThink(this, this->think_interval, v28);
}


// CDOTA_Modifier_ArcWarden_Flux::OnIntervalThink  (line 370, @0x0000000002c50b20, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Purge, Vector, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, GetParticleManager, CDOTA_ParticleManager::SetParticleControl, CDOTA_Buff::SendBuffRefreshToClients, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CUtlMemory<CHandle<CBaseEntity>, int>::Purge, CDOTA_Buff::GetAbility, CDOTA_Buff::GetCaster, ApplyDamage, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase (13 total)
void __fastcall CDOTA_Modifier_ArcWarden_Flux::OnIntervalThink(CDOTA_Modifier_ArcWarden_Flux *const this)
{
  float search_radius; // xmm2_4
  CDOTA_BaseNPC *Parent; // r13
  CDOTA_BaseNPC *v4; // rax
  const Vector *AbsOrigin; // rax
  __m128i v6; // xmm4
  int m_nFXIndex; // r13d
  CDOTA_ParticleManager *ParticleManager; // rax
  int v9; // eax
  __m128i v10; // xmm3
  float v11; // r13d
  CDOTABaseAbility *Ability; // r15
  CDOTA_BaseNPC *v13; // r14
  CDOTA_BaseNPC *Caster; // rax
  float flRadius; // [rsp+1Ch] [rbp-64h]
  __int64 v16; // [rsp+20h] [rbp-60h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > vecEnemiesOfCaster; // [rsp+30h] [rbp-50h] BYREF

  if ( CDOTA_Buff::GetParent(this) == 0 )
    return;
  vecEnemiesOfCaster.m_Size = 0;
  search_radius = this->search_radius;
  vecEnemiesOfCaster.m_Memory.m_pMemory = 0;
  vecEnemiesOfCaster.m_Memory.m_nAllocationCount = 0;
  vecEnemiesOfCaster.m_Memory.m_nGrowSize = 0;
  flRadius = search_radius;
  Parent = CDOTA_Buff::GetParent(this);
  v4 = CDOTA_Buff::GetParent(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v4);
  FindUnitsInRadius(this->m_nCasterTeam, AbsOrigin, Parent, flRadius, &vecEnemiesOfCaster, 2, 3, 80, 0, 0);
  if ( vecEnemiesOfCaster.m_Size <= 1 )
  {
    *v6.m128i_i32 = this->damage_per_second;
    v10 = v6;
    *v10.m128i_i32 = *v6.m128i_i32 * this->think_interval;
    v11 = COERCE_FLOAT(_mm_cvtsi128_si32(v10));
    Ability = CDOTA_Buff::GetAbility(this);
    v13 = CDOTA_Buff::GetParent(this);
    Caster = CDOTA_Buff::GetCaster(this);
    ApplyDamage(Caster, v13, Ability, v11, 2, 0);
    m_nFXIndex = this->m_nFXIndex;
    this->m_bAlone = 1;
    if ( m_nFXIndex == -1 )
      goto LABEL_6;
    v16 = 1065353216;
    ParticleManager = GetParticleManager();
  }
  else
  {
    m_nFXIndex = this->m_nFXIndex;
    this->m_bAlone = 0;
    if ( m_nFXIndex == -1 )
    {
LABEL_13:
      v9 = 0;
      goto LABEL_7;
    }
    v16 = 0x3F80000000000000LL;
    ParticleManager = GetParticleManager();
  }
  CDOTA_ParticleManager::SetParticleControl(ParticleManager, m_nFXIndex, 4, *&v16, 0.0);
  if ( !this->m_bAlone )
    goto LABEL_13;
LABEL_6:
  v9 = -this->move_speed_slow_pct;
LABEL_7:
  if ( v9 != this->m_nCurrentSlow )
  {
    this->m_nCurrentSlow = v9;
    CDOTA_Buff::SendBuffRefreshToClients(this);
  }
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&vecEnemiesOfCaster);
  if ( (vecEnemiesOfCaster.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&vecEnemiesOfCaster.m_Memory);
    if ( (vecEnemiesOfCaster.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&vecEnemiesOfCaster.m_Memory);
  }
}


// CDOTA_Modifier_ArcWarden_Flux::OnDestroy  (line 411, @0x0000000002c200b0, libserver.so)
// calls: GetParticleManager, CDOTA_ParticleManager::DestroyParticleEffect
void __fastcall CDOTA_Modifier_ArcWarden_Flux::OnDestroy(CDOTA_Modifier_ArcWarden_Flux *const this)
{
  int m_nFXIndex; // r12d
  CDOTA_ParticleManager *ParticleManager; // rax

  m_nFXIndex = this->m_nFXIndex;
  if ( m_nFXIndex != -1 )
  {
    ParticleManager = GetParticleManager();
    CDOTA_ParticleManager::DestroyParticleEffect(ParticleManager, m_nFXIndex, 0);
    this->m_nFXIndex = -1;
  }
}


// CDOTA_Modifier_ArcWarden_Flux::DeclareFunctions  (line 423, @0x0000000002c1b760, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_ArcWarden_Flux::GetModifierMoveSpeedBonus_Percentage(CModifierParams const&)
void __fastcall CDOTA_Modifier_ArcWarden_Flux::DeclareFunctions(CDOTA_Modifier_ArcWarden_Flux *const this)
{
  this->m_Functions[13].__pfn = CDOTA_Modifier_ArcWarden_Flux::GetModifierMoveSpeedBonus_Percentage;
  this->m_Functions[13].__delta = 0;
}


// CDOTA_Modifier_ArcWarden_Flux::GetModifierMoveSpeedBonus_Percentage  (line 430, @0x0000000002c1b780, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_ArcWarden_Flux::GetModifierMoveSpeedBonus_Percentage(
        CDOTA_Modifier_ArcWarden_Flux *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->m_nCurrentSlow;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_ArcWarden_Flux::AddCustomTransmiterData  (line 437, @0x0000000002c21f60, libserver.so)  // inlines: set_damage, set_has_damage
// calls: CDOTA_Buff::AddCustomTransmiterData
void __fastcall CDOTA_Modifier_ArcWarden_Flux::AddCustomTransmiterData(
        CDOTA_Modifier_ArcWarden_Flux *const this,
        CDOTAModifierBuffTableEntry *const entry)
{
  int m_nCurrentSlow; // eax

  m_nCurrentSlow = this->m_nCurrentSlow;
  *(entry + 4) |= 0x1000000u;
  *(entry + 35) = m_nCurrentSlow;
  CDOTA_Buff::AddCustomTransmiterData(this, entry);
}


// CDOTA_Ability_ArcWarden_MagneticField::~CDOTA_Ability_ArcWarden_MagneticField  (line 458, @0x0000000002c97cf0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_ArcWarden_MagneticField::~CDOTA_Ability_ArcWarden_MagneticField(
        CDOTA_Ability_ArcWarden_MagneticField *const this)
{
  this->_vptr_IHandleEntity = &off_45878F0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_ArcWarden_MagneticField::~CDOTA_Ability_ArcWarden_MagneticField  (line 458, @0x0000000002c97d10, libserver.so)  // inlines: ~CDOTA_Ability_ArcWarden_MagneticField
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_ArcWarden_MagneticField::~CDOTA_Ability_ArcWarden_MagneticField(
        CDOTA_Ability_ArcWarden_MagneticField *const this)
{
  this->_vptr_IHandleEntity = &off_45878F0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_ArcWarden_MagneticField::Schema_DynamicBinding  (line 460, @0x0000000002c86d70, libserver.so)
// globals: CDOTA_Ability_ArcWarden_MagneticField::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_ArcWarden_MagneticField::Schema_DynamicBinding(
        const CDOTA_Ability_ArcWarden_MagneticField *const this)
{
  return CDOTA_Ability_ArcWarden_MagneticField::s_pSchemaBinding;
}


// CDOTA_Ability_ArcWarden_MagneticField::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 460, @0x0000000002c86d80, libserver.so)
// globals: CDOTA_Ability_ArcWarden_MagneticField::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_ArcWarden_MagneticField::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_ArcWarden_MagneticField::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_ArcWarden_MagneticField::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_ArcWarden_MagneticField::CEntityInstanceEntityClass::DestructInstance  (line 460, @0x0000000002c86d90, libserver.so)  // inlines: Destruct<CDOTA_Ability_ArcWarden_MagneticField>
void __fastcall CDOTA_Ability_ArcWarden_MagneticField::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_ArcWarden_MagneticField::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_ArcWarden_MagneticField::CEntityInstanceEntityClass::FreeInstance  (line 460, @0x0000000002c86db0, libserver.so)
void __fastcall CDOTA_Ability_ArcWarden_MagneticField::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_ArcWarden_MagneticField::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_ArcWarden_MagneticField::CEntityInstanceEntityClass::CanAllocate  (line 460, @0x0000000002c86dd0, libserver.so)
bool __fastcall CDOTA_Ability_ArcWarden_MagneticField::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_ArcWarden_MagneticField::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_ArcWarden_MagneticField::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 460, @0x0000000002c86de0, libserver.so)
// globals: CDOTA_Ability_ArcWarden_MagneticField::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_ArcWarden_MagneticField::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_ArcWarden_MagneticField::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_ArcWarden_MagneticField::s_pSchemaBinding;
}


// CDOTA_Ability_ArcWarden_MagneticField::CEntityInstanceEntityClass::AllocateInstance  (line 460, @0x0000000002c8f1a0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_ArcWarden_MagneticField::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_ArcWarden_MagneticField::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_ArcWarden_MagneticField::CEntityInstanceEntityClass::ConstructInstance  (line 460, @0x0000000002c945b0, libserver.so)  // inlines: CDOTA_Ability_ArcWarden_MagneticField, Construct<CDOTA_Ability_ArcWarden_MagneticField>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_ArcWarden_MagneticField::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_ArcWarden_MagneticField::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_45878F0;
  }
  return p;
}


// CDOTA_Ability_ArcWarden_MagneticField::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 460, @0x0000000002ca1760, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_ArcWarden_MagneticField::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_ArcWarden_MagneticField::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_ArcWarden_MagneticField::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 460, @0x0000000002ca1780, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_ArcWarden_MagneticField::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_ArcWarden_MagneticField::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_ArcWarden_MagneticField::GetEntityClassInternal  (line 460, @0x0000000002cbeca0, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_01.cpp
// strings: "arc_warden_magnetic_field", "CDOTA_Ability_ArcWarden_MagneticField"
// globals: `guard variable for'CDOTA_Ability_ArcWarden_MagneticField::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ArcWarden_MagneticFieldClass, CDOTA_Ability_ArcWarden_MagneticField::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ArcWarden_MagneticFieldClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTA_Ability_ArcWarden_MagneticField::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_ArcWarden_MagneticField::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_ArcWarden_MagneticFieldClassInfo, CDOTA_Ability_ArcWarden_MagneticField::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_ArcWarden_MagneticFieldClassInfo
CEntityClass *__cdecl CDOTA_Ability_ArcWarden_MagneticField::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_ArcWarden_MagneticField::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ArcWarden_MagneticFieldClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_ArcWarden_MagneticField::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ArcWarden_MagneticFieldClass) != 0 )
  {
    CDOTA_Ability_ArcWarden_MagneticField::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ArcWarden_MagneticFieldClass.m_designerName.u.m_Id = 0;
    CDOTA_Ability_ArcWarden_MagneticField::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ArcWarden_MagneticFieldClass._vptr_CEntityClass = off_3F79390;
    CDOTA_Ability_ArcWarden_MagneticField::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ArcWarden_MagneticFieldClass.m_ComponentOffsets.m_Size = 0;
    CDOTA_Ability_ArcWarden_MagneticField::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ArcWarden_MagneticFieldClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTA_Ability_ArcWarden_MagneticField::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ArcWarden_MagneticFieldClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_ArcWarden_MagneticField::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ArcWarden_MagneticFieldClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_ArcWarden_MagneticField::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ArcWarden_MagneticFieldClass.m_AllHelpers.m_Size = 0;
    CDOTA_Ability_ArcWarden_MagneticField::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ArcWarden_MagneticFieldClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_ArcWarden_MagneticField::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ArcWarden_MagneticFieldClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_ArcWarden_MagneticField::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ArcWarden_MagneticFieldClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_ArcWarden_MagneticField::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ArcWarden_MagneticFieldClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTA_Ability_ArcWarden_MagneticField::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ArcWarden_MagneticFieldClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTA_Ability_ArcWarden_MagneticField::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ArcWarden_MagneticFieldClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTA_Ability_ArcWarden_MagneticField::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ArcWarden_MagneticFieldClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_ArcWarden_MagneticField::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ArcWarden_MagneticFieldClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_ArcWarden_MagneticField::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ArcWarden_MagneticFieldClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_ArcWarden_MagneticField::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ArcWarden_MagneticFieldClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTA_Ability_ArcWarden_MagneticField::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ArcWarden_MagneticFieldClass;
    CDOTA_Ability_ArcWarden_MagneticField::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ArcWarden_MagneticFieldClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTA_Ability_ArcWarden_MagneticField::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ArcWarden_MagneticFieldClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_ArcWarden_MagneticField::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ArcWarden_MagneticFieldClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_ArcWarden_MagneticField::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ArcWarden_MagneticFieldClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_ArcWarden_MagneticField::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ArcWarden_MagneticFieldClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTA_Ability_ArcWarden_MagneticField::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ArcWarden_MagneticFieldClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_ArcWarden_MagneticField::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ArcWarden_MagneticFieldClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_ArcWarden_MagneticField::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ArcWarden_MagneticFieldClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_ArcWarden_MagneticField::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ArcWarden_MagneticFieldClass.m_classInputs.m_Size = 0;
    CDOTA_Ability_ArcWarden_MagneticField::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ArcWarden_MagneticFieldClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_ArcWarden_MagneticField::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ArcWarden_MagneticFieldClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_ArcWarden_MagneticField::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ArcWarden_MagneticFieldClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_ArcWarden_MagneticField::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ArcWarden_MagneticFieldClass.m_classOutputs.m_Size = 0;
    CDOTA_Ability_ArcWarden_MagneticField::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ArcWarden_MagneticFieldClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_ArcWarden_MagneticField::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ArcWarden_MagneticFieldClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_ArcWarden_MagneticField::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ArcWarden_MagneticFieldClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_ArcWarden_MagneticField::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ArcWarden_MagneticFieldClass.m_requiredEHandle.m_Index = -1;
    CDOTA_Ability_ArcWarden_MagneticField::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ArcWarden_MagneticFieldClass.m_hNetworkSerializer = 0;
    CDOTA_Ability_ArcWarden_MagneticField::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ArcWarden_MagneticFieldClass.m_pBaseClassInfo = 0;
    CDOTA_Ability_ArcWarden_MagneticField::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ArcWarden_MagneticFieldClass.m_pClassInfo = 0;
    CDOTA_Ability_ArcWarden_MagneticField::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ArcWarden_MagneticFieldClass.m_flags = 0;
    CDOTA_Ability_ArcWarden_MagneticField::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ArcWarden_MagneticFieldClass.m_nAllHelpersFlags = 0;
    CDOTA_Ability_ArcWarden_MagneticField::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ArcWarden_MagneticFieldClass.m_pScriptClassDesc = 0;
    CDOTA_Ability_ArcWarden_MagneticField::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ArcWarden_MagneticFieldClass.m_pInputs = 0;
    CDOTA_Ability_ArcWarden_MagneticField::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ArcWarden_MagneticFieldClass.m_nInputCount = 0;
    CDOTA_Ability_ArcWarden_MagneticField::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ArcWarden_MagneticFieldClass.m_pOutputs = 0;
    CDOTA_Ability_ArcWarden_MagneticField::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ArcWarden_MagneticFieldClass.m_nOutputCount = 0;
    CDOTA_Ability_ArcWarden_MagneticField::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ArcWarden_MagneticFieldClass.m_pGameClass = 0;
    CDOTA_Ability_ArcWarden_MagneticField::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ArcWarden_MagneticFieldClass._vptr_CEntityClass = off_4587870;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_ArcWarden_MagneticField::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ArcWarden_MagneticFieldClass);
    __cxa_atexit(
      CDOTA_Ability_ArcWarden_MagneticField::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_ArcWarden_MagneticField::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ArcWarden_MagneticFieldClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_ArcWarden_MagneticFieldClass != 0 )
    return &CDOTA_Ability_ArcWarden_MagneticField::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ArcWarden_MagneticFieldClass;
  if ( `guard variable for'CDOTA_Ability_ArcWarden_MagneticField::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_ArcWarden_MagneticFieldClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_ArcWarden_MagneticField::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_ArcWarden_MagneticFieldClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_ArcWarden_MagneticField::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_ArcWarden_MagneticFieldClassInfo,
      "CDOTA_Ability_ArcWarden_MagneticField",
      "arc_warden_magnetic_field",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_ArcWarden_MagneticField::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_ArcWarden_MagneticFieldClassInfo);
  }
  CDOTA_Ability_ArcWarden_MagneticField::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ArcWarden_MagneticFieldClass.m_pClassInfo = &CDOTA_Ability_ArcWarden_MagneticField::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_ArcWarden_MagneticFieldClassInfo;
  CDOTA_Ability_ArcWarden_MagneticField::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ArcWarden_MagneticFieldClass.m_pBaseClassInfo = CDOTA_Ability_ArcWarden_MagneticField::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_ArcWarden_MagneticFieldClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_ArcWarden_MagneticFieldClass = &CDOTA_Ability_ArcWarden_MagneticField::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ArcWarden_MagneticFieldClass;
  CDOTA_Ability_ArcWarden_MagneticField::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_ArcWarden_MagneticFieldClassInfo.m_pClass = &CDOTA_Ability_ArcWarden_MagneticField::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ArcWarden_MagneticFieldClass;
  CDOTA_Ability_ArcWarden_MagneticField::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ArcWarden_MagneticFieldClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_ArcWarden_MagneticFieldClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_ArcWarden_MagneticField::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ArcWarden_MagneticFieldClass;
}


// CDOTA_Ability_ArcWarden_MagneticField::GetGestureBasedActivity  (line 465, @0x0000000002c86df0, libserver.so)
Activity __fastcall CDOTA_Ability_ArcWarden_MagneticField::GetGestureBasedActivity(
        CDOTA_Ability_ArcWarden_MagneticField *const this)
{
  return 1707;
}


// CDOTA_Ability_ArcWarden_MagneticField::YouForgotToImplementOrDeclareServerClass  (line 485, @0x0000000002c1b7a0, libserver.so)
int __fastcall CDOTA_Ability_ArcWarden_MagneticField::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_ArcWarden_MagneticField *const this)
{
  return 0;
}


// CDOTA_Ability_ArcWarden_MagneticField::GetServerClass  (line 485, @0x0000000002c34ff0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_ArcWarden_MagneticField::GetServerClass(
        CDOTA_Ability_ArcWarden_MagneticField *const this)
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


// CDOTA_Ability_ArcWarden_MagneticField::OnSpellStart  (line 495, @0x0000000002c53a90, libserver.so)  // inlines: GetLevelSpecialValueFor<float>, GetTeamNumber
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::KeyValues, KeyValues::SetFloat, CDOTABaseAbility::GetCaster, CDOTABaseAbility::GetCursorPosition, Thinker_Create, CDOTA_BaseNPC::UnitEmitSound, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControlEnt, CBaseEntity::GetAbsOrigin, CDOTA_ParticleManager::ReleaseParticleIndex (15 total)
// strings: "modifier_arc_warden_magnetic_field_thinker", "Hero_ArcWarden.MagneticField.Cast", "particles/units/heroes/hero_arc_warden/arc_warden_magnetic_cast.vpcf", "attach_attack1", "attach_attack2"
void __fastcall CDOTA_Ability_ArcWarden_MagneticField::OnSpellStart(CDOTA_Ability_ArcWarden_MagneticField *const this)
{
  float v2; // xmm1_4
  int m_Value; // r13d
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v5; // rax
  CDOTA_BaseNPC *v6; // r13
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v8; // r14
  CDOTA_ParticleManager *v9; // rax
  CDOTA_BaseNPC *v10; // rax
  const Vector *AbsOrigin; // r14
  CDOTA_BaseNPC *v12; // r15
  CDOTA_ParticleManager *v13; // rax
  CDOTA_BaseNPC *v14; // rax
  const Vector *v15; // r14
  CDOTA_BaseNPC *v16; // rbx
  CDOTA_ParticleManager *v17; // rax
  CDOTA_ParticleManager *v18; // rax
  KeyValues kv; // [rsp+30h] [rbp-50h] BYREF
  unsigned __int64 v20; // [rsp+48h] [rbp-38h]
  Vector CursorPosition; // 0:kr00_12.12

  v20 = __readfsqword(0x28u);
  CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0);
  KeyValues::KeyValues(&kv, "modifier_arc_warden_magnetic_field_thinker");
  KeyValues::SetFloat(&kv, "duration", v2);
  m_Value = CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value;
  CursorPosition = CDOTABaseAbility::GetCursorPosition(this);
  Caster = CDOTABaseAbility::GetCaster(this);
  Thinker_Create(Caster, this, "modifier_arc_warden_magnetic_field_thinker", &kv, CursorPosition, m_Value, 0, 1, 0);
  v5 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::UnitEmitSound(v5, "Hero_ArcWarden.MagneticField.Cast", 0.0, 0, 0);
  v6 = CDOTABaseAbility::GetCaster(this);
  ParticleManager = GetParticleManager();
  LODWORD(v6) = CDOTA_ParticleManager::CreateParticle(
                  ParticleManager,
                  "particles/units/heroes/hero_arc_warden/arc_warden_magnetic_cast.vpcf",
                  2,
                  v6,
                  0,
                  0);
  v8 = CDOTABaseAbility::GetCaster(this);
  v9 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v9, v6, 0, v8, 0, 0, vec3_invalid, 1);
  v10 = CDOTABaseAbility::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v10);
  v12 = CDOTABaseAbility::GetCaster(this);
  v13 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v13, v6, 1, v12, 5, "attach_attack1", *AbsOrigin, 1);
  v14 = CDOTABaseAbility::GetCaster(this);
  v15 = CBaseEntity::GetAbsOrigin(v14);
  v16 = CDOTABaseAbility::GetCaster(this);
  v17 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v17, v6, 2, v16, 5, "attach_attack2", *v15, 1);
  v18 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v18, v6);
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Ability_ArcWarden_MagneticField::GetAbilityDamageToTargetOverInterval  (line 516, @0x0000000002c6b0a0, libserver.so)  // inlines: Min<float>, RemapVal
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::GetAttackSpeed, CDOTA_BaseNPC::GetAttacksPerSecond, CDOTA_BaseNPC::GetAverageTrueAttackDamage
__int64 __fastcall CDOTA_Ability_ArcWarden_MagneticField::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_ArcWarden_MagneticField *const this,
        CDOTA_BaseNPC *pTarget,
        float fInterval,
        DAMAGE_TYPES eDamageType)
{
  __int64 result; // rax
  int LevelSpecialValue; // r13d
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v9; // rax
  float v10; // xmm2_4
  float v11; // xmm2_4
  CDOTA_BaseNPC *v12; // rax
  __m128 v13; // xmm2
  float v14; // [rsp-Ch] [rbp-34h]
  float AttackSpeed; // [rsp-8h] [rbp-30h]
  float v17; // [rsp-4h] [rbp-2Ch]
  float AttacksPerSecond; // [rsp-4h] [rbp-2Ch]
  float v19; // [rsp-4h] [rbp-2Ch]

  result = 0;
  if ( eDamageType == DAMAGE_TYPES::DAMAGE_TYPE_PHYSICAL )
  {
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "radius", -1, 0);
    v17 = fminf(LevelSpecialValue / (*(pTarget->_vptr_IHandleEntity + 386))(pTarget), fInterval);
    v14 = fminf(v17, CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0));
    Caster = CDOTABaseAbility::GetCaster(this);
    AttackSpeed = CDOTA_BaseNPC::GetAttackSpeed(Caster);
    v9 = CDOTABaseAbility::GetCaster(this);
    AttacksPerSecond = CDOTA_BaseNPC::GetAttacksPerSecond(v9);
    v10 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "attack_speed_bonus", -1, 0) + AttackSpeed;
    if ( AttackSpeed == 0.0 )
    {
      v13.m128_f32[0] = v10 - AttackSpeed;
      LODWORD(v11) = _mm_cmple_ss(0LL, v13).m128_u32[0] & LODWORD(AttacksPerSecond);
    }
    else
    {
      v11 = ((v10 * AttacksPerSecond) / AttackSpeed) + 0.0;
    }
    v19 = (v11 - AttacksPerSecond) * v14;
    v12 = CDOTABaseAbility::GetCaster(this);
    return (CDOTA_BaseNPC::GetAverageTrueAttackDamage(v12, 0) * v19);
  }
  return result;
}


// CDOTA_Modifier_ArcWarden_MagneticField_Thinker::~CDOTA_Modifier_ArcWarden_MagneticField_Thinker  (line 539, @0x0000000002c93500, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_ArcWarden_MagneticField_Thinker::~CDOTA_Modifier_ArcWarden_MagneticField_Thinker(
        CDOTA_Modifier_ArcWarden_MagneticField_Thinker *const this)
{
  this->_vptr_CDOTA_Buff = &off_45883B0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_ArcWarden_MagneticField_Thinker::~CDOTA_Modifier_ArcWarden_MagneticField_Thinker  (line 539, @0x0000000002c93520, libserver.so)  // inlines: ~CDOTA_Modifier_ArcWarden_MagneticField_Thinker
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_ArcWarden_MagneticField_Thinker::~CDOTA_Modifier_ArcWarden_MagneticField_Thinker(
        CDOTA_Modifier_ArcWarden_MagneticField_Thinker *const this)
{
  this->_vptr_CDOTA_Buff = &off_45883B0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_ArcWarden_MagneticField_Thinker::IsHidden  (line 546, @0x0000000002c86e00, libserver.so)
bool __fastcall CDOTA_Modifier_ArcWarden_MagneticField_Thinker::IsHidden(
        CDOTA_Modifier_ArcWarden_MagneticField_Thinker *const this)
{
  return 1;
}


// CDOTA_Modifier_ArcWarden_MagneticField_Thinker::IsAura  (line 548, @0x0000000002c86e10, libserver.so)
bool __fastcall CDOTA_Modifier_ArcWarden_MagneticField_Thinker::IsAura(
        CDOTA_Modifier_ArcWarden_MagneticField_Thinker *const this)
{
  return 1;
}


// CDOTA_Modifier_ArcWarden_MagneticField_Thinker::GetModifierAura  (line 549, @0x0000000002c86e20, libserver.so)
// strings: "modifier_arc_warden_magnetic_field"
const char *__fastcall CDOTA_Modifier_ArcWarden_MagneticField_Thinker::GetModifierAura(
        CDOTA_Modifier_ArcWarden_MagneticField_Thinker *const this)
{
  return "modifier_arc_warden_magnetic_field";
}


// CDOTA_Modifier_ArcWarden_MagneticField_Thinker::GetAuraSearchTeam  (line 550, @0x0000000002c86e30, libserver.so)
int __fastcall CDOTA_Modifier_ArcWarden_MagneticField_Thinker::GetAuraSearchTeam(
        CDOTA_Modifier_ArcWarden_MagneticField_Thinker *const this)
{
  return 1;
}


// CDOTA_Modifier_ArcWarden_MagneticField_Thinker::GetAuraSearchType  (line 551, @0x0000000002c86e40, libserver.so)
int __fastcall CDOTA_Modifier_ArcWarden_MagneticField_Thinker::GetAuraSearchType(
        CDOTA_Modifier_ArcWarden_MagneticField_Thinker *const this)
{
  return 5;
}


// CDOTA_Modifier_ArcWarden_MagneticField_Thinker::GetAuraRadius  (line 552, @0x0000000002c86e50, libserver.so)
int __fastcall CDOTA_Modifier_ArcWarden_MagneticField_Thinker::GetAuraRadius(
        CDOTA_Modifier_ArcWarden_MagneticField_Thinker *const this)
{
  return this->radius;
}


// CDOTA_Modifier_ArcWarden_MagneticField_Thinker::GetAuraDuration  (line 553, @0x0000000002c86e60, libserver.so)
float __fastcall CDOTA_Modifier_ArcWarden_MagneticField_Thinker::GetAuraDuration(
        CDOTA_Modifier_ArcWarden_MagneticField_Thinker *const this)
{
  return 0.1;
}


// CDOTA_Modifier_ArcWarden_MagneticField_Thinker::OnCreated  (line 568, @0x0000000002c5bca0, libserver.so)  // inlines: DotaRetrieveAbilityValue<float>, GetLevelSpecialValueFor<float>, Vector, VectorAdd, operator+
// calls: CDOTA_Buff::GetAbility, DotaRetrieveAbilityValue<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControl, CDOTA_ParticleManager::SetParticleFoWProperties, CDOTA_Buff::AddParticle, CDOTA_Buff::GetCaster, DOTA_EmitSoundLocationWithCaster (13 total)
// strings: "particles/units/heroes/hero_arc_warden/arc_warden_magnetic.vpcf", "Hero_ArcWarden.MagneticField", "Hero_ArcWarden.MagneticField.Cast"
void __fastcall CDOTA_Modifier_ArcWarden_MagneticField_Thinker::OnCreated(
        CDOTA_Modifier_ArcWarden_MagneticField_Thinker *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  float LevelSpecialValue; // xmm2_4
  CDOTA_BaseNPC *Parent; // rax
  const Vector *AbsOrigin; // rax
  vec_t v8; // xmm1_4
  vec_t v9; // xmm0_4
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // r12d
  CDOTA_ParticleManager *v12; // rax
  CDOTA_ParticleManager *v13; // rax
  CDOTA_ParticleManager *v14; // rax
  CDOTA_ParticleManager *v15; // rax
  CDOTA_BaseNPC *Caster; // r12
  CDOTA_BaseNPC *v17; // rax
  const Vector *v18; // rax
  float duration; // [rsp+Ch] [rbp-34h]
  float durationa; // [rsp+Ch] [rbp-34h]
  Vector vPos; // [rsp+10h] [rbp-30h] BYREF
  double v22; // [rsp+20h] [rbp-20h]
  float v23; // [rsp+28h] [rbp-18h]

  Ability = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(Ability, &this->radius, "radius");
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 != 0 )
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v4, "duration", -1, 0);
  else
    LevelSpecialValue = 0.0;
  duration = LevelSpecialValue;
  Parent = CDOTA_Buff::GetParent(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(Parent);
  v8 = AbsOrigin->z + 10.0;
  v9 = AbsOrigin->x + 0.0;
  vPos.y = AbsOrigin->y + 0.0;
  vPos.z = v8;
  vPos.x = v9;
  ParticleManager = GetParticleManager();
  Particle = CDOTA_ParticleManager::CreateParticle(
               ParticleManager,
               "particles/units/heroes/hero_arc_warden/arc_warden_magnetic.vpcf",
               8,
               0,
               0,
               0);
  v12 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v12, Particle, 0, *&vPos.x, vPos.z);
  *&v22 = this->radius;
  HIDWORD(v22) = LODWORD(v22);
  v13 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v13, Particle, 1, v22, *&v22);
  *&v22 = duration;
  *(&v22 + 1) = duration;
  v23 = duration;
  v14 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v14, Particle, 2, v22, duration);
  durationa = this->radius;
  v15 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleFoWProperties(v15, Particle, 0, -1, durationa);
  CDOTA_Buff::AddParticle(this, Particle, 0, 0, -1, 0, 0);
  Caster = CDOTA_Buff::GetCaster(this);
  v17 = CDOTA_Buff::GetParent(this);
  v18 = CBaseEntity::GetAbsOrigin(v17);
  this->m_nMagneticField = DOTA_EmitSoundLocationWithCaster(v18, "Hero_ArcWarden.MagneticField", Caster);
  DOTA_EmitSoundLocation(&vPos, "Hero_ArcWarden.MagneticField.Cast", 1);
}


// CDOTA_Modifier_ArcWarden_MagneticField_Thinker::OnDestroy  (line 592, @0x0000000002c394f0, libserver.so)
// calls: CSoundOpGameSystem::StopSoundEvent, CDOTA_Buff::GetParent, UTIL_Remove
void __fastcall CDOTA_Modifier_ArcWarden_MagneticField_Thinker::OnDestroy(
        CDOTA_Modifier_ArcWarden_MagneticField_Thinker *const this)
{
  CDOTA_BaseNPC *Parent; // rax

  CSoundOpGameSystem::StopSoundEvent(g_pSoundOpGameSystem, &this->m_nMagneticField);
  if ( CDOTA_Buff::GetParent(this) != 0 )
  {
    Parent = CDOTA_Buff::GetParent(this);
    UTIL_Remove(Parent);
  }
}


// CDOTA_Modifier_ArcWarden_MagneticField::~CDOTA_Modifier_ArcWarden_MagneticField  (line 608, @0x0000000002c934b0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_ArcWarden_MagneticField::~CDOTA_Modifier_ArcWarden_MagneticField(
        CDOTA_Modifier_ArcWarden_MagneticField *const this)
{
  this->_vptr_CDOTA_Buff = &off_45886D0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_ArcWarden_MagneticField::~CDOTA_Modifier_ArcWarden_MagneticField  (line 608, @0x0000000002c934d0, libserver.so)  // inlines: ~CDOTA_Modifier_ArcWarden_MagneticField
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_ArcWarden_MagneticField::~CDOTA_Modifier_ArcWarden_MagneticField(
        CDOTA_Modifier_ArcWarden_MagneticField *const this)
{
  this->_vptr_CDOTA_Buff = &off_45886D0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_ArcWarden_MagneticField::OnCreated  (line 634, @0x0000000002c72930, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, KeyValues::GetFloat
// strings: "evasion_chance", "aura_origin_x", "aura_origin_y"
void __fastcall CDOTA_Modifier_ArcWarden_MagneticField::OnCreated(
        CDOTA_Modifier_ArcWarden_MagneticField *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax
  float v7; // xmm1_4
  float v8; // xmm1_4

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->attack_speed_bonus = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "attack_speed_bonus", -1, 0);
    v5 = CDOTA_Buff::GetAbility(this);
    if ( v5 != 0 )
      goto LABEL_3;
LABEL_7:
    this->evasion_chance = 0;
    v6 = CDOTA_Buff::GetAbility(this);
    if ( v6 != 0 )
      goto LABEL_4;
LABEL_8:
    this->radius = 0;
    goto LABEL_5;
  }
  this->attack_speed_bonus = 0;
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 == 0 )
    goto LABEL_7;
LABEL_3:
  this->evasion_chance = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "evasion_chance", -1, 0);
  v6 = CDOTA_Buff::GetAbility(this);
  if ( v6 == 0 )
    goto LABEL_8;
LABEL_4:
  this->radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v6, "radius", -1, 0);
LABEL_5:
  this->aura_origin_x = KeyValues::GetFloat(pKV, "aura_origin_x", v7);
  this->aura_origin_y = KeyValues::GetFloat(pKV, "aura_origin_y", v8);
}


// CDOTA_Modifier_ArcWarden_MagneticField::OnRefresh  (line 646, @0x0000000002c725a0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, KeyValues::GetFloat
// strings: "evasion_chance", "aura_origin_x", "aura_origin_y"
void __fastcall CDOTA_Modifier_ArcWarden_MagneticField::OnRefresh(
        CDOTA_Modifier_ArcWarden_MagneticField *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax
  float v7; // xmm1_4
  float v8; // xmm1_4

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->attack_speed_bonus = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "attack_speed_bonus", -1, 0);
    v5 = CDOTA_Buff::GetAbility(this);
    if ( v5 != 0 )
      goto LABEL_3;
LABEL_7:
    this->evasion_chance = 0;
    v6 = CDOTA_Buff::GetAbility(this);
    if ( v6 != 0 )
      goto LABEL_4;
LABEL_8:
    this->radius = 0;
    goto LABEL_5;
  }
  this->attack_speed_bonus = 0;
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 == 0 )
    goto LABEL_7;
LABEL_3:
  this->evasion_chance = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "evasion_chance", -1, 0);
  v6 = CDOTA_Buff::GetAbility(this);
  if ( v6 == 0 )
    goto LABEL_8;
LABEL_4:
  this->radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v6, "radius", -1, 0);
LABEL_5:
  this->aura_origin_x = KeyValues::GetFloat(pKV, "aura_origin_x", v7);
  this->aura_origin_y = KeyValues::GetFloat(pKV, "aura_origin_y", v8);
}


// CDOTA_Modifier_ArcWarden_MagneticField::DeclareFunctions  (line 658, @0x0000000002c1b7b0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_ArcWarden_MagneticField::GetModifierEvasion_Constant(CModifierParams const&), CDOTA_Modifier_ArcWarden_MagneticField::GetModifierAttackSpeedBonus_Constant(CModifierParams const&)
void __fastcall CDOTA_Modifier_ArcWarden_MagneticField::DeclareFunctions(
        CDOTA_Modifier_ArcWarden_MagneticField *const this)
{
  this->m_Functions[40].__pfn = CDOTA_Modifier_ArcWarden_MagneticField::GetModifierEvasion_Constant;
  this->m_Functions[40].__delta = 0;
  this->m_Functions[24].__delta = 0;
  this->m_Functions[24].__pfn = CDOTA_Modifier_ArcWarden_MagneticField::GetModifierAttackSpeedBonus_Constant;
}


// CDOTA_Modifier_ArcWarden_MagneticField::GetModifierEvasion_Constant  (line 666, @0x0000000002c2d530, libserver.so)  // inlines: AttackerNPC, FastSqrt, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, Length2D, LookupEntity, ToDOTABaseNPC, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CBaseEntity*, operator CEntityInstance*, operator-
// calls: CBaseEntity::GetAbsOrigin
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_ArcWarden_MagneticField::GetModifierEvasion_Constant(
        CDOTA_Modifier_ArcWarden_MagneticField *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  const CBaseEntity *m_pInstance; // rdi
  const Vector *AbsOrigin; // rax
  __m128i v9; // xmm2
  float aura_origin_y; // [rsp+8h] [rbp-18h]
  float aura_origin_x; // [rsp+Ch] [rbp-14h]
  ModifierVariant_t result; // 0:rax.16

  m_Index = params->hattacker.m_Index;
  if ( m_Index + 2 <= 1 )
    return 1uLL;
  v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F];
  if ( v4 == 0 )
    return 1uLL;
  v5 = &v4[params->hattacker.m_Index & 0x1FF];
  if ( v5 == 0 )
    return 1uLL;
  if ( m_Index != v5->m_EHandle.m_Index )
    return 1uLL;
  m_pInstance = v5->m_pInstance;
  if ( v5->m_pInstance == 0 )
    return 1uLL;
  if ( !m_pInstance->m_bIsDOTANPC )
    return 1uLL;
  aura_origin_y = this->aura_origin_y;
  aura_origin_x = this->aura_origin_x;
  AbsOrigin = CBaseEntity::GetAbsOrigin(m_pInstance);
  if ( fsqrt(
         ((aura_origin_x - AbsOrigin->x) * (aura_origin_x - AbsOrigin->x))
       + ((aura_origin_y - AbsOrigin->y) * (aura_origin_y - AbsOrigin->y))) <= this->radius )
    return 1uLL;
  *v9.m128i_i32 = this->evasion_chance;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v9) << 32) | 1;
  return result;
}


// CDOTA_Modifier_ArcWarden_MagneticField::GetModifierAttackSpeedBonus_Constant  (line 686, @0x0000000002c1b7f0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_ArcWarden_MagneticField::GetModifierAttackSpeedBonus_Constant(
        CDOTA_Modifier_ArcWarden_MagneticField *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->attack_speed_bonus;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Ability_ArcWarden_SparkWraith::~CDOTA_Ability_ArcWarden_SparkWraith  (line 699, @0x0000000002c97d40, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_ArcWarden_SparkWraith::~CDOTA_Ability_ArcWarden_SparkWraith(
        CDOTA_Ability_ArcWarden_SparkWraith *const this)
{
  this->_vptr_IHandleEntity = &off_4588A30;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_ArcWarden_SparkWraith::~CDOTA_Ability_ArcWarden_SparkWraith  (line 699, @0x0000000002c97d60, libserver.so)  // inlines: ~CDOTA_Ability_ArcWarden_SparkWraith
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_ArcWarden_SparkWraith::~CDOTA_Ability_ArcWarden_SparkWraith(
        CDOTA_Ability_ArcWarden_SparkWraith *const this)
{
  this->_vptr_IHandleEntity = &off_4588A30;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_ArcWarden_SparkWraith::Schema_DynamicBinding  (line 701, @0x0000000002c86e70, libserver.so)
// globals: CDOTA_Ability_ArcWarden_SparkWraith::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_ArcWarden_SparkWraith::Schema_DynamicBinding(
        const CDOTA_Ability_ArcWarden_SparkWraith *const this)
{
  return CDOTA_Ability_ArcWarden_SparkWraith::s_pSchemaBinding;
}


// CDOTA_Ability_ArcWarden_SparkWraith::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 701, @0x0000000002c86e80, libserver.so)
// globals: CDOTA_Ability_ArcWarden_SparkWraith::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_ArcWarden_SparkWraith::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_ArcWarden_SparkWraith::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_ArcWarden_SparkWraith::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_ArcWarden_SparkWraith::CEntityInstanceEntityClass::DestructInstance  (line 701, @0x0000000002c86e90, libserver.so)  // inlines: Destruct<CDOTA_Ability_ArcWarden_SparkWraith>
void __fastcall CDOTA_Ability_ArcWarden_SparkWraith::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_ArcWarden_SparkWraith::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_ArcWarden_SparkWraith::CEntityInstanceEntityClass::FreeInstance  (line 701, @0x0000000002c86eb0, libserver.so)
void __fastcall CDOTA_Ability_ArcWarden_SparkWraith::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_ArcWarden_SparkWraith::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_ArcWarden_SparkWraith::CEntityInstanceEntityClass::CanAllocate  (line 701, @0x0000000002c86ed0, libserver.so)
bool __fastcall CDOTA_Ability_ArcWarden_SparkWraith::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_ArcWarden_SparkWraith::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_ArcWarden_SparkWraith::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 701, @0x0000000002c86ee0, libserver.so)
// globals: CDOTA_Ability_ArcWarden_SparkWraith::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_ArcWarden_SparkWraith::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_ArcWarden_SparkWraith::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_ArcWarden_SparkWraith::s_pSchemaBinding;
}


// CDOTA_Ability_ArcWarden_SparkWraith::CEntityInstanceEntityClass::AllocateInstance  (line 701, @0x0000000002c8f1e0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_ArcWarden_SparkWraith::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_ArcWarden_SparkWraith::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 936);
  memset(v1, 0, 0x3A8u);
  return v1;
}


// CDOTA_Ability_ArcWarden_SparkWraith::CEntityInstanceEntityClass::ConstructInstance  (line 701, @0x0000000002c945e0, libserver.so)  // inlines: CDOTA_Ability_ArcWarden_SparkWraith, Construct<CDOTA_Ability_ArcWarden_SparkWraith>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_ArcWarden_SparkWraith::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_ArcWarden_SparkWraith::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_4588A30;
  }
  return p;
}


// CDOTA_Ability_ArcWarden_SparkWraith::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 701, @0x0000000002ca17b0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_ArcWarden_SparkWraith::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_ArcWarden_SparkWraith::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_ArcWarden_SparkWraith::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 701, @0x0000000002ca17d0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_ArcWarden_SparkWraith::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_ArcWarden_SparkWraith::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_ArcWarden_SparkWraith::GetEntityClassInternal  (line 701, @0x0000000002cc7120, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_01.cpp
// strings: "arc_warden_spark_wraith", "CDOTA_Ability_ArcWarden_SparkWraith"
// globals: `guard variable for'CDOTA_Ability_ArcWarden_SparkWraith::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ArcWarden_SparkWraithClass, CDOTA_Ability_ArcWarden_SparkWraith::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ArcWarden_SparkWraithClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTA_Ability_ArcWarden_SparkWraith::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_ArcWarden_SparkWraith::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_ArcWarden_SparkWraithClassInfo, CDOTA_Ability_ArcWarden_SparkWraith::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_ArcWarden_SparkWraithClassInfo
CEntityClass *__cdecl CDOTA_Ability_ArcWarden_SparkWraith::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_ArcWarden_SparkWraith::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ArcWarden_SparkWraithClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_ArcWarden_SparkWraith::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ArcWarden_SparkWraithClass) != 0 )
  {
    CDOTA_Ability_ArcWarden_SparkWraith::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ArcWarden_SparkWraithClass.m_designerName.u.m_Id = 0;
    CDOTA_Ability_ArcWarden_SparkWraith::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ArcWarden_SparkWraithClass._vptr_CEntityClass = off_3F79390;
    CDOTA_Ability_ArcWarden_SparkWraith::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ArcWarden_SparkWraithClass.m_ComponentOffsets.m_Size = 0;
    CDOTA_Ability_ArcWarden_SparkWraith::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ArcWarden_SparkWraithClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTA_Ability_ArcWarden_SparkWraith::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ArcWarden_SparkWraithClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_ArcWarden_SparkWraith::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ArcWarden_SparkWraithClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_ArcWarden_SparkWraith::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ArcWarden_SparkWraithClass.m_AllHelpers.m_Size = 0;
    CDOTA_Ability_ArcWarden_SparkWraith::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ArcWarden_SparkWraithClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_ArcWarden_SparkWraith::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ArcWarden_SparkWraithClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_ArcWarden_SparkWraith::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ArcWarden_SparkWraithClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_ArcWarden_SparkWraith::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ArcWarden_SparkWraithClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTA_Ability_ArcWarden_SparkWraith::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ArcWarden_SparkWraithClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTA_Ability_ArcWarden_SparkWraith::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ArcWarden_SparkWraithClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTA_Ability_ArcWarden_SparkWraith::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ArcWarden_SparkWraithClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_ArcWarden_SparkWraith::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ArcWarden_SparkWraithClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_ArcWarden_SparkWraith::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ArcWarden_SparkWraithClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_ArcWarden_SparkWraith::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ArcWarden_SparkWraithClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTA_Ability_ArcWarden_SparkWraith::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ArcWarden_SparkWraithClass;
    CDOTA_Ability_ArcWarden_SparkWraith::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ArcWarden_SparkWraithClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTA_Ability_ArcWarden_SparkWraith::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ArcWarden_SparkWraithClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_ArcWarden_SparkWraith::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ArcWarden_SparkWraithClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_ArcWarden_SparkWraith::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ArcWarden_SparkWraithClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_ArcWarden_SparkWraith::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ArcWarden_SparkWraithClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTA_Ability_ArcWarden_SparkWraith::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ArcWarden_SparkWraithClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_ArcWarden_SparkWraith::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ArcWarden_SparkWraithClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_ArcWarden_SparkWraith::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ArcWarden_SparkWraithClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_ArcWarden_SparkWraith::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ArcWarden_SparkWraithClass.m_classInputs.m_Size = 0;
    CDOTA_Ability_ArcWarden_SparkWraith::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ArcWarden_SparkWraithClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_ArcWarden_SparkWraith::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ArcWarden_SparkWraithClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_ArcWarden_SparkWraith::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ArcWarden_SparkWraithClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_ArcWarden_SparkWraith::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ArcWarden_SparkWraithClass.m_classOutputs.m_Size = 0;
    CDOTA_Ability_ArcWarden_SparkWraith::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ArcWarden_SparkWraithClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_ArcWarden_SparkWraith::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ArcWarden_SparkWraithClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_ArcWarden_SparkWraith::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ArcWarden_SparkWraithClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_ArcWarden_SparkWraith::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ArcWarden_SparkWraithClass.m_requiredEHandle.m_Index = -1;
    CDOTA_Ability_ArcWarden_SparkWraith::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ArcWarden_SparkWraithClass.m_hNetworkSerializer = 0;
    CDOTA_Ability_ArcWarden_SparkWraith::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ArcWarden_SparkWraithClass.m_pBaseClassInfo = 0;
    CDOTA_Ability_ArcWarden_SparkWraith::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ArcWarden_SparkWraithClass.m_pClassInfo = 0;
    CDOTA_Ability_ArcWarden_SparkWraith::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ArcWarden_SparkWraithClass.m_flags = 0;
    CDOTA_Ability_ArcWarden_SparkWraith::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ArcWarden_SparkWraithClass.m_nAllHelpersFlags = 0;
    CDOTA_Ability_ArcWarden_SparkWraith::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ArcWarden_SparkWraithClass.m_pScriptClassDesc = 0;
    CDOTA_Ability_ArcWarden_SparkWraith::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ArcWarden_SparkWraithClass.m_pInputs = 0;
    CDOTA_Ability_ArcWarden_SparkWraith::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ArcWarden_SparkWraithClass.m_nInputCount = 0;
    CDOTA_Ability_ArcWarden_SparkWraith::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ArcWarden_SparkWraithClass.m_pOutputs = 0;
    CDOTA_Ability_ArcWarden_SparkWraith::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ArcWarden_SparkWraithClass.m_nOutputCount = 0;
    CDOTA_Ability_ArcWarden_SparkWraith::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ArcWarden_SparkWraithClass.m_pGameClass = 0;
    CDOTA_Ability_ArcWarden_SparkWraith::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ArcWarden_SparkWraithClass._vptr_CEntityClass = off_45889B0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_ArcWarden_SparkWraith::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ArcWarden_SparkWraithClass);
    __cxa_atexit(
      CDOTA_Ability_ArcWarden_SparkWraith::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_ArcWarden_SparkWraith::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ArcWarden_SparkWraithClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_ArcWarden_SparkWraithClass != 0 )
    return &CDOTA_Ability_ArcWarden_SparkWraith::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ArcWarden_SparkWraithClass;
  if ( `guard variable for'CDOTA_Ability_ArcWarden_SparkWraith::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_ArcWarden_SparkWraithClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_ArcWarden_SparkWraith::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_ArcWarden_SparkWraithClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_ArcWarden_SparkWraith::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_ArcWarden_SparkWraithClassInfo,
      "CDOTA_Ability_ArcWarden_SparkWraith",
      "arc_warden_spark_wraith",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_ArcWarden_SparkWraith::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_ArcWarden_SparkWraithClassInfo);
  }
  CDOTA_Ability_ArcWarden_SparkWraith::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ArcWarden_SparkWraithClass.m_pClassInfo = &CDOTA_Ability_ArcWarden_SparkWraith::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_ArcWarden_SparkWraithClassInfo;
  CDOTA_Ability_ArcWarden_SparkWraith::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ArcWarden_SparkWraithClass.m_pBaseClassInfo = CDOTA_Ability_ArcWarden_SparkWraith::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_ArcWarden_SparkWraithClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_ArcWarden_SparkWraithClass = &CDOTA_Ability_ArcWarden_SparkWraith::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ArcWarden_SparkWraithClass;
  CDOTA_Ability_ArcWarden_SparkWraith::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_ArcWarden_SparkWraithClassInfo.m_pClass = &CDOTA_Ability_ArcWarden_SparkWraith::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ArcWarden_SparkWraithClass;
  CDOTA_Ability_ArcWarden_SparkWraith::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ArcWarden_SparkWraithClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_ArcWarden_SparkWraithClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_ArcWarden_SparkWraith::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ArcWarden_SparkWraithClass;
}


// CDOTA_Ability_ArcWarden_SparkWraith::GetAOERadius  (line 710, @0x0000000002cb7740, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>
float __fastcall CDOTA_Ability_ArcWarden_SparkWraith::GetAOERadius(CDOTA_Ability_ArcWarden_SparkWraith *const this)
{
  return CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "radius", -1, 0);
}


// CDOTA_Ability_ArcWarden_SparkWraith::YouForgotToImplementOrDeclareServerClass  (line 722, @0x0000000002c1b810, libserver.so)
int __fastcall CDOTA_Ability_ArcWarden_SparkWraith::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_ArcWarden_SparkWraith *const this)
{
  return 0;
}


// CDOTA_Ability_ArcWarden_SparkWraith::GetServerClass  (line 722, @0x0000000002c357f0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_ArcWarden_SparkWraith::GetServerClass(
        CDOTA_Ability_ArcWarden_SparkWraith *const this)
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


// CDOTA_Ability_ArcWarden_SparkWraith::OnAbilityPhaseStart  (line 731, @0x0000000002c20be0, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::UnitEmitSound
// strings: "Hero_ArcWarden.SparkWraith.Cast"
bool __fastcall CDOTA_Ability_ArcWarden_SparkWraith::OnAbilityPhaseStart(
        CDOTA_Ability_ArcWarden_SparkWraith *const this)
{
  CDOTA_BaseNPC *Caster; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::UnitEmitSound(Caster, "Hero_ArcWarden.SparkWraith.Cast", 0.0, 0, 0);
  return 1;
}


// CDOTA_Ability_ArcWarden_SparkWraith::OnSpellStart  (line 742, @0x0000000002c65cf0, libserver.so)  // inlines: GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>, GetModifier_Constant_First, GetTeamNumber, IsListeningToEvent, IsTempestDouble, SetRefCountsModifiers
// calls: CDOTABaseAbility::GetCaster, CDOTA_ModifierManager::GetModifier_Constant_First_Internal, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetCursorPosition, CDOTAFogOfWarSystem::AddTempViewer, KeyValues::KeyValues, KeyValues::SetInt, KeyValues::SetFloat, Thinker_Create, DOTA_EmitSoundLocationWithCaster, GetParticleManager (19 total)
// strings: "activation_delay", "spark_damage", "wraith_vision_radius", "wraith_vision_duration", "modifier_arc_warden_spark_wraith_thinker", "viewer_id" (10 total)
void __fastcall CDOTA_Ability_ArcWarden_SparkWraith::OnSpellStart(CDOTA_Ability_ArcWarden_SparkWraith *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  __int64 v3; // rdx
  float LevelSpecialValue; // xmm0_4
  float duration; // xmm2_4
  __m128i v6; // xmm3
  float v7; // r12d
  CDOTA_BaseNPC *v8; // rax
  int v9; // r13d
  float v10; // xmm1_4
  int m_Value; // r13d
  CDOTA_BaseNPC *v12; // rax
  CDOTA_BaseNPC *v13; // r13
  CDOTA_BaseNPC *v14; // r13
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v16; // r14
  CDOTA_ParticleManager *v17; // rax
  CDOTA_BaseNPC *v18; // rax
  const Vector *AbsOrigin; // r14
  CDOTA_BaseNPC *v20; // r15
  CDOTA_ParticleManager *v21; // rax
  CDOTA_BaseNPC *v22; // rax
  const Vector *v23; // r14
  CDOTA_BaseNPC *v24; // rbx
  CDOTA_ParticleManager *v25; // rax
  CDOTA_ParticleManager *v26; // rax
  float flDuration; // [rsp+1Ch] [rbp-74h]
  Vector vOrigin; // [rsp+20h] [rbp-70h] BYREF
  Vector vLocation; // [rsp+30h] [rbp-60h] BYREF
  KeyValues kv; // [rsp+40h] [rbp-50h] BYREF
  unsigned __int64 v31; // [rsp+58h] [rbp-38h]

  v31 = __readfsqword(0x28u);
  Caster = CDOTABaseAbility::GetCaster(this);
  v3 = Caster->m_ModifierManager.m_buffsForModifiers[166];
  if ( v3 != 0xFF
    && Caster->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v3].m_Size > 0
    && CDOTA_ModifierManager::GetModifier_Constant_First_Internal(
         &Caster->m_ModifierManager,
         modifierfunction::MODIFIER_PROPERTY_TEMPEST_DOUBLE,
         &CModifierParams::s_Default) == 1.0 )
  {
    this->m_bRefCountsModifiers = 1;
  }
  this->duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0);
  this->activation_delay = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "activation_delay", -1, 0);
  this->spark_damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "spark_damage", -1, 0);
  this->wraith_vision_radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "wraith_vision_radius", -1, 0);
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "wraith_vision_duration", -1, 0);
  duration = this->duration;
  *v6.m128i_i32 = this->wraith_vision_radius;
  this->wraith_vision_duration = LevelSpecialValue;
  v7 = COERCE_FLOAT(_mm_cvtsi128_si32(v6));
  flDuration = duration + this->activation_delay;
  vLocation = CDOTABaseAbility::GetCursorPosition(this);
  v8 = CDOTABaseAbility::GetCaster(this);
  v9 = CDOTAFogOfWarSystem::AddTempViewer(
         &g_DOTAFogOfWarSystem,
         FoWViewerType_t::FOWVIEWERTYPE_SPARKWRAITH,
         v8->m_iTeamNum.m_Value,
         &vLocation,
         v7,
         flDuration,
         1);
  KeyValues::KeyValues(&kv, "modifier_arc_warden_spark_wraith_thinker");
  KeyValues::SetInt(&kv, "spark_damage", this->spark_damage);
  KeyValues::SetFloat(&kv, "duration", v10);
  KeyValues::SetInt(&kv, "viewer_id", v9);
  m_Value = CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value;
  vLocation = CDOTABaseAbility::GetCursorPosition(this);
  v12 = CDOTABaseAbility::GetCaster(this);
  Thinker_Create(v12, this, "modifier_arc_warden_spark_wraith_thinker", &kv, vLocation, m_Value, 0, 1, 0);
  v13 = CDOTABaseAbility::GetCaster(this);
  vOrigin = CDOTABaseAbility::GetCursorPosition(this);
  DOTA_EmitSoundLocationWithCaster(&vOrigin, "Hero_ArcWarden.SparkWraith.Appear", v13);
  v14 = CDOTABaseAbility::GetCaster(this);
  ParticleManager = GetParticleManager();
  LODWORD(v14) = CDOTA_ParticleManager::CreateParticle(
                   ParticleManager,
                   "particles/units/heroes/hero_arc_warden/arc_warden_wraith_cast.vpcf",
                   2,
                   v14,
                   0,
                   0);
  v16 = CDOTABaseAbility::GetCaster(this);
  v17 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v17, v14, 0, v16, 0, 0, vec3_invalid, 1);
  v18 = CDOTABaseAbility::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v18);
  v20 = CDOTABaseAbility::GetCaster(this);
  v21 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v21, v14, 1, v20, 5, "attach_attack1", *AbsOrigin, 1);
  v22 = CDOTABaseAbility::GetCaster(this);
  v23 = CBaseEntity::GetAbsOrigin(v22);
  v24 = CDOTABaseAbility::GetCaster(this);
  v25 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v25, v14, 2, v24, 5, "attach_attack2", *v23, 1);
  v26 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v26, v14);
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Ability_ArcWarden_SparkWraith::OnProjectileHit_ExtraData  (line 778, @0x0000000002c660c0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetLevelSpecialValueFor<float>, GetTeamNumber, InState, IndexToIdentity, IsInvulnerable, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: __stack_chk_fail, KeyValues::GetInt, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::GetLevelSpecialValueFor<int>, ApplyDamage, CDOTA_BaseNPC::UnitEmitSound, CBaseEntity::StopSound, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_BaseNPC::AddNewModifier (16 total)
// strings: "spark_damage", "ministun_duration", "special_bonus_unique_arc_warden", "Hero_ArcWarden.SparkWraith.Damage", "Hero_ArcWarden.SparkWraith.Activate", "modifier_satyr_trickster_purge"
// globals: CEntityHandle::gm_pEntityList
__int64 __fastcall CDOTA_Ability_ArcWarden_SparkWraith::OnProjectileHit_ExtraData(
        CDOTA_Ability_ArcWarden_SparkWraith *const this,
        unsigned __int16 *hTarget,
        const Vector *const vLocation,
        KeyValues *pExtraData)
{
  int v4; // eax
  unsigned __int64 v5; // rsi
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v8; // rdx
  CDOTA_BaseNPC *m_pInstance; // r12
  unsigned __int64 m_Value; // rax
  int Int; // r13d
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  CDOTA_BaseNPC *v15; // rax
  float v16; // xmm1_4
  CDOTA_BaseNPC *v17; // rax
  const Vector *AbsOrigin; // r12
  CDOTA_BaseNPC *v19; // rax
  float flRadius; // [rsp+8h] [rbp-48h]
  float flDuration; // [rsp+Ch] [rbp-44h]
  KeyValues kv; // [rsp+10h] [rbp-40h] BYREF
  unsigned __int64 v23; // [rsp+28h] [rbp-28h]

  v23 = __readfsqword(0x28u);
  v4 = *hTarget;
  if ( (*hTarget + 2) > 1 )
  {
    v5 = *hTarget;
    v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v5 >> 9) & 0x3F];
    if ( v6 != 0 )
    {
      v8 = &v6[v5 & 0x1FF];
      if ( v8 != 0 && v4 == v8->m_EHandle.m_Index )
      {
        m_pInstance = v8->m_pInstance;
        if ( v8->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC && !m_pInstance->m_bIsWaitingToSpawn.m_Value )
        {
          m_Value = m_pInstance->m_nUnitState64.m_Value;
          if ( (m_Value & 0x100) == 0 && (m_Value & 0x200) == 0 )
          {
            Int = KeyValues::GetInt(pExtraData, "spark_damage", this->spark_damage);
            CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "ministun_duration", -1, 0);
            Caster = CDOTABaseAbility::GetCaster(this);
            AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "special_bonus_unique_arc_warden", 0);
            if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
              Int += CDOTABaseAbility::GetLevelSpecialValueFor<int>(AbilityByName, "value", 1, 1);
            v15 = CDOTABaseAbility::GetCaster(this);
            ApplyDamage(v15, m_pInstance, this, Int, 2, 0);
            CDOTA_BaseNPC::UnitEmitSound(m_pInstance, "Hero_ArcWarden.SparkWraith.Damage", 0.0, 0, 0);
            CBaseEntity::StopSound(m_pInstance, "Hero_ArcWarden.SparkWraith.Activate");
            KeyValues::KeyValues(&kv, "modifier_satyr_trickster_purge");
            KeyValues::SetFloat(&kv, "duration", v16);
            v17 = CDOTABaseAbility::GetCaster(this);
            CDOTA_BaseNPC::AddNewModifier(m_pInstance, v17, this, "modifier_satyr_trickster_purge", &kv, 0);
            flDuration = this->wraith_vision_duration;
            flRadius = this->wraith_vision_radius;
            AbsOrigin = CBaseEntity::GetAbsOrigin(m_pInstance);
            v19 = CDOTABaseAbility::GetCaster(this);
            CDOTAFogOfWarSystem::AddTempViewer(
              &g_DOTAFogOfWarSystem,
              FoWViewerType_t::FOWVIEWERTYPE_SPARKWRAITH,
              v19->m_iTeamNum.m_Value,
              AbsOrigin,
              flRadius,
              flDuration,
              0);
            KeyValues::~KeyValues(&kv);
          }
        }
      }
    }
  }
  return 1;
}


// CDOTA_Ability_ArcWarden_SparkWraith::GetAbilityDamageToTargetOverInterval  (line 813, @0x0000000002c61cb0, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_BaseNPC::GetArmorReductionForDamageType
// strings: "spark_damage"
__int64 __fastcall CDOTA_Ability_ArcWarden_SparkWraith::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_ArcWarden_SparkWraith *const this,
        CDOTA_BaseNPC *pTarget,
        float fInterval,
        DAMAGE_TYPES eDamageType)
{
  __int64 result; // rax
  int LevelSpecialValue; // r12d

  result = 0;
  if ( eDamageType == DAMAGE_TYPES::DAMAGE_TYPE_PHYSICAL )
  {
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "spark_damage", -1, 0);
    return (LevelSpecialValue * (1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(pTarget, 1)));
  }
  return result;
}


// CDOTA_Modifier_ArcWarden_SparkWraith_Thinker::~CDOTA_Modifier_ArcWarden_SparkWraith_Thinker  (line 824, @0x0000000002c93460, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_ArcWarden_SparkWraith_Thinker::~CDOTA_Modifier_ArcWarden_SparkWraith_Thinker(
        CDOTA_Modifier_ArcWarden_SparkWraith_Thinker *const this)
{
  this->_vptr_CDOTA_Buff = &off_45894F0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_ArcWarden_SparkWraith_Thinker::~CDOTA_Modifier_ArcWarden_SparkWraith_Thinker  (line 824, @0x0000000002c93480, libserver.so)  // inlines: ~CDOTA_Modifier_ArcWarden_SparkWraith_Thinker
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_ArcWarden_SparkWraith_Thinker::~CDOTA_Modifier_ArcWarden_SparkWraith_Thinker(
        CDOTA_Modifier_ArcWarden_SparkWraith_Thinker *const this)
{
  this->_vptr_CDOTA_Buff = &off_45894F0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_ArcWarden_SparkWraith_Thinker::IsHidden  (line 831, @0x0000000002c86ef0, libserver.so)
bool __fastcall CDOTA_Modifier_ArcWarden_SparkWraith_Thinker::IsHidden(
        CDOTA_Modifier_ArcWarden_SparkWraith_Thinker *const this)
{
  return 1;
}


// CDOTA_Modifier_ArcWarden_SparkWraith_Thinker::OnCreated  (line 856, @0x0000000002c5bea0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, GetLevelSpecialValueFor<float>, Vector, VectorAdd, operator+
// calls: CDOTA_Buff::GetAbility, DotaRetrieveAbilityValue<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::GetInt, CDOTA_Buff::StartIntervalThink, CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControl, CDOTA_ParticleManager::SetParticleFoWProperties, CDOTA_Buff::AddParticle (13 total)
// strings: "wraith_speed", "activation_delay", "wraith_vision_radius", "spark_damage", "viewer_id", "particles/units/heroes/hero_arc_warden/arc_warden_wraith.vpcf" (7 total)
void __fastcall CDOTA_Modifier_ArcWarden_SparkWraith_Thinker::OnCreated(
        CDOTA_Modifier_ArcWarden_SparkWraith_Thinker *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax
  CDOTABaseAbility *v7; // rax
  CDOTABaseAbility *v8; // rax
  int Int; // eax
  float activation_delay; // xmm0_4
  float v11; // xmm1_4
  CDOTA_BaseNPC *Parent; // rax
  const Vector *AbsOrigin; // rax
  CDOTA_BaseNPC *v14; // r12
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_ParticleManager *v16; // rax
  CDOTA_ParticleManager *v17; // rax
  CDOTA_ParticleManager *v18; // rax
  CDOTA_BaseNPC *v19; // rax
  float flFoWRadius; // [rsp+Ch] [rbp-34h]
  double vPos; // [rsp+10h] [rbp-30h]
  float vPos_8; // [rsp+18h] [rbp-28h]
  double v23; // [rsp+20h] [rbp-20h]

  Ability = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(Ability, &this->radius, "radius");
  v5 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v5, &this->wraith_speed, "wraith_speed");
  v6 = CDOTA_Buff::GetAbility(this);
  if ( v6 == 0 )
  {
    this->activation_delay = 0.0;
    v7 = CDOTA_Buff::GetAbility(this);
    if ( v7 != 0 )
      goto LABEL_3;
LABEL_6:
    this->think_interval = 0.0;
    goto LABEL_4;
  }
  this->activation_delay = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v6, "activation_delay", -1, 0);
  v7 = CDOTA_Buff::GetAbility(this);
  if ( v7 == 0 )
    goto LABEL_6;
LABEL_3:
  this->think_interval = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v7, "think_interval", -1, 0);
LABEL_4:
  v8 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v8, &this->wraith_vision_radius, "wraith_vision_radius");
  this->m_bActive = 0;
  this->m_nSparkDamage = KeyValues::GetInt(pKV, "spark_damage", 0);
  Int = KeyValues::GetInt(pKV, "viewer_id", 0);
  activation_delay = this->activation_delay;
  this->m_nViewerID = Int;
  CDOTA_Buff::StartIntervalThink(this, activation_delay, v11);
  Parent = CDOTA_Buff::GetParent(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(Parent);
  *&vPos = AbsOrigin->x + 0.0;
  *(&vPos + 1) = AbsOrigin->y + 0.0;
  vPos_8 = AbsOrigin->z + 10.0;
  v14 = CDOTA_Buff::GetParent(this);
  ParticleManager = GetParticleManager();
  LODWORD(v14) = CDOTA_ParticleManager::CreateParticle(
                   ParticleManager,
                   "particles/units/heroes/hero_arc_warden/arc_warden_wraith.vpcf",
                   2,
                   0,
                   0,
                   v14);
  v16 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v16, v14, 0, vPos, vPos_8);
  *&v23 = this->radius;
  *(&v23 + 1) = *&v23;
  v17 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v17, v14, 1, v23, *&v23);
  flFoWRadius = this->radius;
  v18 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleFoWProperties(v18, v14, 0, -1, flFoWRadius);
  CDOTA_Buff::AddParticle(this, v14, 0, 0, -1, 0, 0);
  v19 = CDOTA_Buff::GetParent(this);
  this->m_nSparkWraithLoop = CBaseEntity::EmitSound(v19, "Hero_ArcWarden.SparkWraith.Loop", 0.0, 0);
}


// CDOTA_Modifier_ArcWarden_SparkWraith_Thinker::OnIntervalThink  (line 883, @0x0000000002c50d30, libserver.so)  // inlines: CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, Color, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, GetTeamNumber, IndexToIdentity, IsValid, LookupEntity, Purge, Set, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator=, sTrackingProjectileCreateInfo, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CUtlMemory<CHandle<CBaseEntity>, int>::Purge, CDOTA_Buff::StartIntervalThink, __stack_chk_fail, CDOTA_Buff::GetAbility, KeyValues::KeyValues, KeyValues::SetInt, KeyValues::MakeCopy, CDOTA_ProjectileManager::CreateTrackingProjectile (18 total)
// strings: "particles/units/heroes/hero_arc_warden/arc_warden_wraith_prj.vpcf", "spark_wraith_extra_data", "spark_damage", "Hero_ArcWarden.SparkWraith.Activate"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_ArcWarden_SparkWraith_Thinker::OnIntervalThink(
        CDOTA_Modifier_ArcWarden_SparkWraith_Thinker *const this)
{
  float v1; // xmm1_4
  float radius; // xmm1_4
  CDOTA_BaseNPC *Parent; // r14
  CDOTA_BaseNPC *v5; // rax
  const Vector *AbsOrigin; // r12
  CDOTA_BaseNPC *v7; // rax
  CHandle<CBaseEntity> *m_pMemory; // rax
  CEntityIdentity *v9; // rcx
  CEntityIdentity *v10; // rcx
  float think_interval; // xmm0_4
  CDOTA_BaseNPC *m_pInstance; // r12
  CDOTA_BaseNPC *v13; // rax
  const Vector *v14; // rax
  __m128i z_low; // xmm4
  vec_t v16; // r15d
  vec_t v17; // r14d
  CDOTA_BaseNPC *v18; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v20; // eax
  __int16 v21; // cx
  int wraith_vision_radius; // eax
  int m_Value; // eax
  CEntityIdentity *v24; // rax
  int v25; // edx
  __int16 v26; // cx
  int m_nViewerID; // r12d
  CDOTA_BaseNPC *v28; // rax
  float v29; // xmm1_4
  float flRadiusa; // [rsp+1Ch] [rbp-E4h]
  vec_t flRadius; // [rsp+1Ch] [rbp-E4h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > enemies; // [rsp+20h] [rbp-E0h] BYREF
  KeyValues kv; // [rsp+40h] [rbp-C0h] BYREF
  sTrackingProjectileCreateInfo info; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v35; // [rsp+C8h] [rbp-38h]

  v35 = __readfsqword(0x28u);
  if ( !this->m_bActive )
  {
    think_interval = this->think_interval;
    this->m_bActive = 1;
    CDOTA_Buff::StartIntervalThink(this, think_interval, v1);
  }
  radius = this->radius;
  enemies.m_Size = 0;
  enemies.m_Memory.m_pMemory = 0;
  enemies.m_Memory.m_nAllocationCount = 0;
  enemies.m_Memory.m_nGrowSize = 0;
  flRadiusa = radius;
  Parent = CDOTA_Buff::GetParent(this);
  v5 = CDOTA_Buff::GetParent(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v5);
  v7 = CDOTA_Buff::GetParent(this);
  FindUnitsInRadius(v7->m_iTeamNum.m_Value, AbsOrigin, Parent, flRadiusa, &enemies, 2, 3, 0, 1, 0);
  if ( enemies.m_Size > 0 )
  {
    m_pMemory = enemies.m_Memory.m_pMemory;
    while ( 1 )
    {
      if ( m_pMemory->m_Index + 2 > 1 )
      {
        v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(m_pMemory->m_Index) >> 9) & 0x3F];
        if ( v9 != 0 )
        {
          v10 = &v9[m_pMemory->m_Index & 0x1FF];
          if ( v10 != 0 && m_pMemory->m_Index == v10->m_EHandle.m_Index )
          {
            m_pInstance = v10->m_pInstance;
            if ( v10->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
              break;
          }
        }
      }
      if ( ++m_pMemory == &enemies.m_Memory.m_pMemory[enemies.m_Size - 1 + 1] )
        goto LABEL_10;
    }
    v13 = CDOTA_Buff::GetParent(this);
    v14 = CBaseEntity::GetAbsOrigin(v13);
    z_low = LODWORD(v14->z);
    flRadius = v14->x;
    v16 = COERCE_FLOAT(_mm_cvtsi128_si32(LODWORD(v14->y)));
    info.bProvidesVision = 0;
    v17 = COERCE_FLOAT(_mm_cvtsi128_si32(z_low));
    info.hTarget.m_Index = -1;
    info.hSource.m_Index = -1;
    info.colorGemColor = 0;
    info.bDrawsOnMinimap = 0;
    memset(&info.pAbility, 0, 20);
    info.vSourceLoc = vec3_origin;
    info.iSourceAttachment = 1;
    info.iVisionTeamNumber = -1;
    info.iVisionRadius = 0;
    info.bDodgeable = 1;
    info.bIsAttack = 0;
    info.bVisibleToEnemies = 1;
    info.pKVExtraData = 0;
    info.bReplaceExisting = 0;
    info.flExpireTime = 0.0;
    info.flMaxImpactTime = 0.0;
    info.bServerOnly = 0;
    info.pszEffectName = "particles/units/heroes/hero_arc_warden/arc_warden_wraith_prj.vpcf";
    info.pAbility = CDOTA_Buff::GetAbility(this);
    info.iMoveSpeed = this->wraith_speed;
    v18 = CDOTA_Buff::GetParent(this);
    if ( v18 != 0 && (m_pEntity = v18->m_pEntity) != 0 )
    {
      v20 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      v21 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v21 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LOWORD(info.hSource.m_Index) = v21 | info.hSource.m_Index & 0x8000;
      info.hSource.m_Index = (v20 << 15) | info.hSource.m_Index & 0x7FFF;
    }
    else
    {
      info.hSource.m_Index = -1;
    }
    wraith_vision_radius = this->wraith_vision_radius;
    info.vSourceLoc.y = v16;
    info.vSourceLoc.z = v17;
    info.iSourceAttachment = 0;
    info.vSourceLoc.x = flRadius;
    info.bProvidesVision = 1;
    info.iVisionRadius = wraith_vision_radius;
    m_Value = CDOTA_Buff::GetParent(this)->m_iTeamNum.m_Value;
    info.bDodgeable = 0;
    info.iVisionTeamNumber = m_Value;
    v24 = m_pInstance->m_pEntity;
    if ( v24 != 0 )
    {
      v25 = (v24->m_EHandle.m_Index >> 15) - (v24->m_flags & 1);
      v26 = 0x7FFF;
      if ( v24->m_EHandle.m_Index != -1 )
        v26 = v24->m_EHandle.m_Index & 0x7FFF;
      LOWORD(info.hTarget.m_Index) = v26 | info.hTarget.m_Index & 0x8000;
      info.hTarget.m_Index = (v25 << 15) | info.hTarget.m_Index & 0x7FFF;
    }
    else
    {
      info.hTarget.m_Index = -1;
    }
    KeyValues::KeyValues(&kv, "spark_wraith_extra_data");
    KeyValues::SetInt(&kv, "spark_damage", this->m_nSparkDamage);
    info.pKVExtraData = KeyValues::MakeCopy(&kv);
    CDOTA_ProjectileManager::CreateTrackingProjectile(&g_DOTAProjectileManager, &info);
    CDOTA_BaseNPC::UnitEmitSound(m_pInstance, "Hero_ArcWarden.SparkWraith.Activate", 0.0, 0, 0);
    m_nViewerID = this->m_nViewerID;
    v28 = CDOTA_Buff::GetParent(this);
    CDOTAFogOfWarSystem::RemoveTempViewer(&g_DOTAFogOfWarSystem, v28->m_iTeamNum.m_Value, m_nViewerID);
    CDOTA_Buff::StartIntervalThink(this, -1.0, v29);
    CDOTA_Buff::Destroy(this, 0, 0, 0);
    KeyValues::~KeyValues(&kv);
  }
LABEL_10:
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&enemies);
  if ( (enemies.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&enemies.m_Memory);
    if ( (enemies.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&enemies.m_Memory);
  }
}


// CDOTA_Modifier_ArcWarden_SparkWraith_Thinker::OnDestroy  (line 938, @0x0000000002c39540, libserver.so)
// calls: CSoundOpGameSystem::StopSoundEvent, CDOTA_Buff::GetParent, UTIL_Remove
void __fastcall CDOTA_Modifier_ArcWarden_SparkWraith_Thinker::OnDestroy(
        CDOTA_Modifier_ArcWarden_SparkWraith_Thinker *const this)
{
  CDOTA_BaseNPC *Parent; // rax

  CSoundOpGameSystem::StopSoundEvent(g_pSoundOpGameSystem, &this->m_nSparkWraithLoop);
  if ( CDOTA_Buff::GetParent(this) != 0 )
  {
    Parent = CDOTA_Buff::GetParent(this);
    UTIL_Remove(Parent);
  }
}


// CDOTA_Ability_ArcWarden_TempestDouble::~CDOTA_Ability_ArcWarden_TempestDouble  (line 957, @0x0000000002c97d90, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_ArcWarden_TempestDouble::~CDOTA_Ability_ArcWarden_TempestDouble(
        CDOTA_Ability_ArcWarden_TempestDouble *const this)
{
  this->_vptr_IHandleEntity = &off_4589850;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_ArcWarden_TempestDouble::~CDOTA_Ability_ArcWarden_TempestDouble  (line 957, @0x0000000002c97db0, libserver.so)  // inlines: ~CDOTA_Ability_ArcWarden_TempestDouble
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_ArcWarden_TempestDouble::~CDOTA_Ability_ArcWarden_TempestDouble(
        CDOTA_Ability_ArcWarden_TempestDouble *const this)
{
  this->_vptr_IHandleEntity = &off_4589850;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_ArcWarden_TempestDouble::Schema_DynamicBinding  (line 959, @0x0000000002c86f00, libserver.so)
// globals: CDOTA_Ability_ArcWarden_TempestDouble::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_ArcWarden_TempestDouble::Schema_DynamicBinding(
        const CDOTA_Ability_ArcWarden_TempestDouble *const this)
{
  return CDOTA_Ability_ArcWarden_TempestDouble::s_pSchemaBinding;
}


// CDOTA_Ability_ArcWarden_TempestDouble::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 959, @0x0000000002c86f10, libserver.so)
// globals: CDOTA_Ability_ArcWarden_TempestDouble::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_ArcWarden_TempestDouble::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_ArcWarden_TempestDouble::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_ArcWarden_TempestDouble::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_ArcWarden_TempestDouble::CEntityInstanceEntityClass::DestructInstance  (line 959, @0x0000000002c86f20, libserver.so)  // inlines: Destruct<CDOTA_Ability_ArcWarden_TempestDouble>
void __fastcall CDOTA_Ability_ArcWarden_TempestDouble::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_ArcWarden_TempestDouble::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_ArcWarden_TempestDouble::CEntityInstanceEntityClass::FreeInstance  (line 959, @0x0000000002c86f40, libserver.so)
void __fastcall CDOTA_Ability_ArcWarden_TempestDouble::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_ArcWarden_TempestDouble::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_ArcWarden_TempestDouble::CEntityInstanceEntityClass::CanAllocate  (line 959, @0x0000000002c86f60, libserver.so)
bool __fastcall CDOTA_Ability_ArcWarden_TempestDouble::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_ArcWarden_TempestDouble::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_ArcWarden_TempestDouble::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 959, @0x0000000002c86f70, libserver.so)
// globals: CDOTA_Ability_ArcWarden_TempestDouble::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_ArcWarden_TempestDouble::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_ArcWarden_TempestDouble::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_ArcWarden_TempestDouble::s_pSchemaBinding;
}


// CDOTA_Ability_ArcWarden_TempestDouble::CEntityInstanceEntityClass::AllocateInstance  (line 959, @0x0000000002c8f220, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_ArcWarden_TempestDouble::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_ArcWarden_TempestDouble::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 920);
  memset(v1, 0, 0x398u);
  return v1;
}


// CDOTA_Ability_ArcWarden_TempestDouble::CEntityInstanceEntityClass::ConstructInstance  (line 959, @0x0000000002c9fe70, libserver.so)  // inlines: CDOTA_Ability_ArcWarden_TempestDouble, CEntityHandle, CHandle, CNetworkVarBase, Construct<CDOTA_Ability_ArcWarden_TempestDouble>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_ArcWarden_TempestDouble::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_ArcWarden_TempestDouble::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *(p + 228) = -1;
    *p = &off_4589850;
  }
  return p;
}


// CDOTA_Ability_ArcWarden_TempestDouble::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 959, @0x0000000002ca1800, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_ArcWarden_TempestDouble::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_ArcWarden_TempestDouble::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_ArcWarden_TempestDouble::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 959, @0x0000000002ca1820, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_ArcWarden_TempestDouble::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_ArcWarden_TempestDouble::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_ArcWarden_TempestDouble::GetEntityClassInternal  (line 959, @0x0000000002cb8820, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_01.cpp
// strings: "arc_warden_tempest_double", "CDOTA_Ability_ArcWarden_TempestDouble"
// globals: `guard variable for'CDOTA_Ability_ArcWarden_TempestDouble::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ArcWarden_TempestDoubleClass, CDOTA_Ability_ArcWarden_TempestDouble::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ArcWarden_TempestDoubleClass, __dso_handle, CDOTA_Ability_ArcWarden_TempestDouble::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_ArcWarden_TempestDouble::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_ArcWarden_TempestDoubleClassInfo, CDOTA_Ability_ArcWarden_TempestDouble::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_ArcWarden_TempestDoubleClassInfo
CEntityClass *__cdecl CDOTA_Ability_ArcWarden_TempestDouble::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_ArcWarden_TempestDouble::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ArcWarden_TempestDoubleClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_ArcWarden_TempestDouble::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ArcWarden_TempestDoubleClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_ArcWarden_TempestDouble::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ArcWarden_TempestDoubleClass);
    CDOTA_Ability_ArcWarden_TempestDouble::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ArcWarden_TempestDoubleClass._vptr_CEntityClass = off_45897D0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_ArcWarden_TempestDouble::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ArcWarden_TempestDoubleClass);
    __cxa_atexit(
      CDOTA_Ability_ArcWarden_TempestDouble::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_ArcWarden_TempestDouble::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ArcWarden_TempestDoubleClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_ArcWarden_TempestDoubleClass != 0 )
    return &CDOTA_Ability_ArcWarden_TempestDouble::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ArcWarden_TempestDoubleClass;
  if ( `guard variable for'CDOTA_Ability_ArcWarden_TempestDouble::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_ArcWarden_TempestDoubleClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_ArcWarden_TempestDouble::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_ArcWarden_TempestDoubleClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_ArcWarden_TempestDouble::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_ArcWarden_TempestDoubleClassInfo,
      "CDOTA_Ability_ArcWarden_TempestDouble",
      "arc_warden_tempest_double",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_ArcWarden_TempestDouble::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_ArcWarden_TempestDoubleClassInfo);
  }
  CDOTA_Ability_ArcWarden_TempestDouble::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ArcWarden_TempestDoubleClass.m_pClassInfo = &CDOTA_Ability_ArcWarden_TempestDouble::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_ArcWarden_TempestDoubleClassInfo;
  CDOTA_Ability_ArcWarden_TempestDouble::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ArcWarden_TempestDoubleClass.m_pBaseClassInfo = CDOTA_Ability_ArcWarden_TempestDouble::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_ArcWarden_TempestDoubleClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_ArcWarden_TempestDoubleClass = &CDOTA_Ability_ArcWarden_TempestDouble::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ArcWarden_TempestDoubleClass;
  CDOTA_Ability_ArcWarden_TempestDouble::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_ArcWarden_TempestDoubleClassInfo.m_pClass = &CDOTA_Ability_ArcWarden_TempestDouble::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ArcWarden_TempestDoubleClass;
  CDOTA_Ability_ArcWarden_TempestDouble::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ArcWarden_TempestDoubleClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_ArcWarden_TempestDoubleClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_ArcWarden_TempestDouble::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ArcWarden_TempestDoubleClass;
}


// CDOTA_Ability_ArcWarden_TempestDouble::YouForgotToImplementOrDeclareServerClass  (line 971, @0x0000000002c1b820, libserver.so)
int __fastcall CDOTA_Ability_ArcWarden_TempestDouble::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_ArcWarden_TempestDouble *const this)
{
  return 0;
}


// CDOTA_Ability_ArcWarden_TempestDouble::GetServerClass  (line 971, @0x0000000002c353f0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_ArcWarden_TempestDouble::GetServerClass(
        CDOTA_Ability_ArcWarden_TempestDouble *const this)
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


// CDOTA_Ability_ArcWarden_TempestDouble::OnSpellStart  (line 979, @0x0000000002c586c0, libserver.so)  // inlines: CEntityHandle, CHandle, FStrEq, Get, GetAbilityName, GetClassNameAsCStr, GetClassname, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetLevel, GetLevelSpecialValueFor<float>, GetOwnerEntity, GetParent, GetPlayerOwnerID, GetSerialNumber, GetTeamNumber, IndexToIdentity, Init, IsCombineLocked, IsValid, LookupEntity, NetworkStateChanged, ReplicateModelFromOtherHero, Set, SetAbilityPoints, SetActive, SetAlpha, SetBlue, SetColor, SetCombineLocked, SetComponent, SetGreen, SetHasInventory, SetIsClonedItemProxy, SetPlayerOwnerID, SetRed, SetRenderColor, SetShareability, SetVal, String, ToDOTABaseNPC, ToDOTABaseNPCHero, _V_strcmp, a, operator CBaseEntity*, operator CEntityInstance*, operator!=<CBaseEntity>, operator!=<CDOTA_BaseNPC_Hero>, operator=, operator=<CDOTA_BaseNPC_Hero*>, operator=<bool>, operator=<int>
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::StartGesture, CEntityHandle::operator CEntityInstance*, CDOTA_BaseNPC::ForceKill, KeyValues::KeyValues, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, KeyValues::SetFloat, CHandle<CBaseEntity>::CHandle, CDOTA_BaseNPC::GetAbilityCount, CDOTA_BaseNPC::GetAbilityByIndex (47 total)
// strings: "modifier_arc_warden_tempest_double", "modifier_kill", "<NoAbilityName>", "item_refresher", "item_bottle", "modifier_item_moon_shard_consumed" (15 total)
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Ability_ArcWarden_TempestDouble::OnSpellStart(CDOTA_Ability_ArcWarden_TempestDouble *const this)
{
  CNetworkVarBase<CHandle<CBaseEntity>,CDOTA_Ability_ArcWarden_TempestDouble::NetworkVar_m_hDoubles> *p_m_hDoubles; // rbx
  CDOTA_BaseNPC *Caster; // rax
  CEntityInstance *v4; // rax
  CDOTA_BaseNPC *v5; // r13
  CDOTA_BaseNPC *v6; // rax
  float v7; // xmm1_4
  CDOTA_BaseNPC *v8; // rax
  CEntityInstance *v9; // rbx
  int v10; // ebx
  int i; // r14d
  CDOTA_BaseNPC *v12; // rax
  CDOTA_BaseNPC *v13; // rax
  CDOTABaseAbility *AbilityByIndex; // rax
  CDOTABaseAbility *v15; // r15
  DOTAAbilityData_t *m_pAbilityData; // rax
  const char *v17; // rsi
  const char *m_pszAbilityName; // rax
  CDOTABaseAbility *AbilityByName; // rbx
  DOTAAbilityData_t *v20; // rax
  const char *v21; // rsi
  const char *v22; // rax
  DOTAAbilityData_t *v23; // rax
  const char *v24; // rdi
  const char *v25; // rax
  CDOTA_BaseNPC *v26; // rax
  CBaseEntity *HandleEntity; // r14
  unsigned __int8 m_Value; // r15
  CDOTA_BaseNPC *v29; // rax
  Vector *AbsOrigin; // r13
  CDOTA_BaseNPC *v31; // rax
  const char *m_pAsString; // rdi
  CEntityIdentity *m_pEntity; // rax
  void (__fastcall *v34)(CDOTABaseAbility *); // r15
  int j; // ebx
  CDOTA_BaseNPC *v36; // rax
  int v37; // esi
  CDOTA_UnitInventory *Inventory; // rax
  CDOTA_Item *ItemInSlot; // rax
  CDOTA_BaseNPC *v40; // rax
  CDOTA_UnitInventory *v41; // rax
  CDOTA_Item *v42; // rax
  CDOTA_Item *v43; // r14
  int v44; // r15d
  CDOTA_BaseNPC *v45; // rax
  int v46; // eax
  const char **p_m_pszAbilityName; // rcx
  const char *v48; // rdi
  const char *v49; // rcx
  CDOTA_Item *Item; // r15
  CDOTA_BaseNPC *v51; // rax
  CDOTA_UnitInventory *v52; // rax
  const char **v53; // rax
  const char *v54; // rsi
  const char *v55; // rsi
  CDOTA_BaseNPC *v56; // rax
  CDOTA_Buff *ModifierByName; // rax
  int *v58; // rbx
  float v59; // xmm1_4
  CDOTABaseAbility *Ability; // rbx
  CDOTA_BaseNPC *v61; // rax
  CDOTA_BaseNPC *v62; // rax
  CDOTA_Buff *v63; // rbx
  CDOTA_BaseNPC *v64; // rax
  int v65; // eax
  CDOTA_BaseNPC *v66; // rax
  CEntityIdentity *v67; // rcx
  int v68; // edx
  __int16 v69; // si
  const CBaseEntity *v70; // r14
  uint32 v71; // esi
  uint32 m_Index; // ebx
  int pfn_high; // edx
  CEntityInstance *m_pInstance; // rdi
  CEntityIdentity *v75; // rcx
  CEntityIdentity *v76; // rcx
  CEntityInstance *v77; // rcx
  CEntityIdentity *v78; // rax
  CEntityIdentity *v79; // rax
  CDOTA_BaseNPC *v80; // rax
  int Health; // eax
  CDOTA_BaseNPC *v82; // rax
  float v83; // xmm1_4
  unsigned __int8 v84; // bl
  CBaseEntity *OwnerEntity; // rbx
  CDOTA_BaseNPC *v86; // rax
  CDOTA_BaseNPC *v87; // rax
  const QAngle *AbsAngles; // rax
  CGameSceneNode *m_pParent; // rdi
  CDOTA_ParticleManager *ParticleManager; // rax
  const CBaseAnimating *v91; // r13
  int Particle; // ebx
  CGameSceneNode *v93; // rdi
  CDOTA_ParticleManager *v94; // rax
  CGameSceneNode *v95; // rdi
  CBaseEntity *v96; // rax
  const CBaseAnimating *v97; // r14
  const Vector *v98; // r13
  CGameSceneNode *v99; // rdi
  CDOTA_ParticleManager *v100; // rax
  CDOTA_ParticleManager *v101; // rax
  CDOTA_BaseNPC *v102; // rax
  CDOTA_BaseNPC *v103; // rax
  float v104; // xmm1_4
  CDOTABaseAbility *v105; // rbx
  CDOTA_BaseNPC *v106; // rax
  int v107; // [rsp+Ch] [rbp-74h]
  int v108; // [rsp+Ch] [rbp-74h]
  int v109; // [rsp+Ch] [rbp-74h]
  int v110; // [rsp+Ch] [rbp-74h]
  bool v111; // [rsp+Ch] [rbp-74h]
  CHandle<CBaseEntity> v112[4]; // [rsp+20h] [rbp-60h] BYREF
  KeyValues kv; // [rsp+30h] [rbp-50h] BYREF
  unsigned __int64 v114; // [rsp+48h] [rbp-38h]
  Vector v115; // 0:xmm0_8.8,8:xmm1_4.4

  p_m_hDoubles = &this->m_hDoubles;
  v114 = __readfsqword(0x28u);
  CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0);
  Caster = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::StartGesture(Caster, 1519, 0.1, 0.1, 9, 0, 1.0);
  v4 = CEntityHandle::operator CEntityInstance *(&p_m_hDoubles->m_Value);
  v5 = v4;
  if ( v4 != 0 && BYTE3(v4[7]._vptr_IHandleEntity) != 0 && (v4[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
  {
    if ( (*(v4->_vptr_IHandleEntity + 408))(v4) != 0 )
      CDOTA_BaseNPC::ForceKill(v5, 0);
  }
  else
  {
    v26 = CDOTABaseAbility::GetCaster(this);
    HandleEntity = CEntityHandle::GetHandleEntity(&v26->m_hOwnerEntity.m_Value);
    m_Value = CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value;
    v29 = CDOTABaseAbility::GetCaster(this);
    AbsOrigin = CBaseEntity::GetAbsOrigin(v29);
    v31 = CDOTABaseAbility::GetCaster(this);
    m_pAsString = "";
    m_pEntity = v31->m_pEntity;
    if ( m_pEntity->m_designerName.u.m_Id != 0 )
      m_pAsString = m_pEntity->m_designerName.u.m_pAsString;
    v5 = DOTA_Character_ScriptSpawn_Synchronous(m_pAsString, m_Value, HandleEntity, 0, 0, *AbsOrigin);
    if ( v5 == 0 )
      return;
  }
  (*(v5->_vptr_IHandleEntity + 494))(v5, 0, 0, 0);
  KeyValues::KeyValues(&kv, "modifier_arc_warden_tempest_double");
  v6 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::AddNewModifier(v5, v6, this, "modifier_arc_warden_tempest_double", &kv, 0);
  KeyValues::~KeyValues(&kv);
  KeyValues::KeyValues(&kv, "modifier_kill");
  KeyValues::SetFloat(&kv, "duration", v7);
  v8 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::AddNewModifier(v5, v8, this, "modifier_kill", &kv, 0);
  KeyValues::~KeyValues(&kv);
  CHandle<CBaseEntity>::CHandle(v112, v5);
  v9 = CEntityHandle::operator CEntityInstance *(&p_m_hDoubles->m_Value);
  if ( v9 != CEntityHandle::operator CEntityInstance *(&v112[0]) )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 912, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_hDoubles.m_Value = v112[0];
  }
  while ( 1 )
  {
    v10 = v5->m_iCurrentLevel.m_Value;
    if ( v10 >= CDOTABaseAbility::GetCaster(this)->m_iCurrentLevel.m_Value )
      break;
    (*(v5->_vptr_IHandleEntity + 492))(v5, 0);
  }
  for ( i = 0; ; ++i )
  {
    v12 = CDOTABaseAbility::GetCaster(this);
    if ( i >= CDOTA_BaseNPC::GetAbilityCount(v12) )
      break;
    v13 = CDOTABaseAbility::GetCaster(this);
    AbilityByIndex = CDOTA_BaseNPC::GetAbilityByIndex(v13, i);
    v15 = AbilityByIndex;
    if ( AbilityByIndex != 0 )
    {
      m_pAbilityData = AbilityByIndex->m_pAbilityData;
      v17 = "<NoAbilityName>";
      if ( m_pAbilityData != 0 )
      {
        m_pszAbilityName = m_pAbilityData->m_pszAbilityName;
        if ( m_pszAbilityName != 0 )
          v17 = m_pszAbilityName;
      }
      AbilityByName = CDOTA_BaseNPC::FindAbilityByName(v5, v17, 0);
      if ( AbilityByName != 0 )
      {
        while ( AbilityByName->m_iLevel.m_Value < v15->m_iLevel.m_Value )
          CDOTABaseAbility::UpgradeAbility(AbilityByName, 0);
        v20 = this->m_pAbilityData;
        v21 = "<NoAbilityName>";
        if ( v20 != 0 )
        {
          v22 = v20->m_pszAbilityName;
          v21 = "<NoAbilityName>";
          if ( v22 != 0 )
            v21 = v22;
        }
        v23 = AbilityByName->m_pAbilityData;
        v24 = "<NoAbilityName>";
        if ( v23 != 0 )
        {
          v25 = v23->m_pszAbilityName;
          if ( v25 != 0 )
            v24 = v25;
        }
        if ( v21 == v24 || strcmp(v24, v21) == 0 )
        {
          v34 = *(AbilityByName->_vptr_IHandleEntity + 241);
          (*(this->_vptr_IHandleEntity + 242))(this, 0xFFFFFFFFLL);
          v34(AbilityByName);
        }
      }
    }
  }
  for ( j = 1; j != 9; ++j )
  {
    while ( 1 )
    {
      v36 = CDOTABaseAbility::GetCaster(this);
      if ( CDOTA_BaseNPC::HasSpecialAbility(v36, j) && !CDOTA_BaseNPC::HasSpecialAbility(v5, j) )
        break;
      if ( ++j == 9 )
        goto LABEL_39;
    }
    v37 = j;
    CDOTA_BaseNPC::AddSpecialAbility(v5, v37);
  }
LABEL_39:
  LOBYTE(j) = 0;
  do
  {
    Inventory = CDOTA_BaseNPC::GetInventory(v5);
    ItemInSlot = CDOTA_UnitInventory::GetItemInSlot(Inventory, j);
    if ( ItemInSlot != 0 )
      CDOTA_Item::RemoveItem(ItemInSlot);
    ++j;
  }
  while ( j != 9 );
  LOBYTE(j) = 0;
  do
  {
    v40 = CDOTABaseAbility::GetCaster(this);
    v41 = CDOTA_BaseNPC::GetInventory(v40);
    v42 = CDOTA_UnitInventory::GetItemInSlot(v41, j);
    v43 = v42;
    if ( v42 != 0 )
    {
      v44 = v42->m_iPlayerOwnerID.m_Value;
      v45 = CDOTABaseAbility::GetCaster(this);
      if ( ((*(v45->_vptr_IHandleEntity + 414))(v45) == v44 || (*(v43->_vptr_IHandleEntity + 355))(v43) != 2)
        && (*(v43->_vptr_IHandleEntity + 356))(v43) != 0 )
      {
        v46 = (*(v5->_vptr_IHandleEntity + 414))(v5);
        p_m_pszAbilityName = &v43->m_pAbilityData->m_pszAbilityName;
        v48 = "<NoAbilityName>";
        if ( p_m_pszAbilityName != 0 )
        {
          v49 = *p_m_pszAbilityName;
          if ( v49 != 0 )
            v48 = v49;
        }
        Item = DOTA_CreateItem(v48, v5, v46);
        if ( Item != 0 )
        {
          v107 = v43->m_iPlayerOwnerID.m_Value;
          v51 = CDOTABaseAbility::GetCaster(this);
          if ( (*(v51->_vptr_IHandleEntity + 414))(v51) != v107 )
          {
            v108 = v43->m_iPlayerOwnerID.m_Value;
            if ( v108 != Item->m_iPlayerOwnerID.m_Value )
            {
              (*(Item->_vptr_IHandleEntity + 22))(Item, 988, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
              Item->m_iPlayerOwnerID.m_Value = v108;
            }
          }
          v109 = (*(v43->_vptr_IHandleEntity + 355))(v43);
          if ( v109 != (*(Item->_vptr_IHandleEntity + 355))(Item) )
          {
            v110 = (*(v43->_vptr_IHandleEntity + 355))(v43);
            if ( v110 != Item->m_iSharability.m_Value )
            {
              (*(Item->_vptr_IHandleEntity + 22))(Item, 924, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
              Item->m_iSharability.m_Value = v110;
            }
          }
          v111 = v43->m_bCombineLocked.m_Value;
          if ( v111 != Item->m_bCombineLocked.m_Value )
          {
            (*(Item->_vptr_IHandleEntity + 22))(Item, 980, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
            Item->m_bCombineLocked.m_Value = v111;
          }
          v52 = CDOTA_BaseNPC::GetInventory(v5);
          CDOTA_UnitInventory::AddItem(v52, Item, 1, j, 0, 1);
          (*(Item->_vptr_IHandleEntity + 343))(Item, v43);
          Item->m_bIsClonedItemProxy = 1;
          v53 = &v43->m_pAbilityData->m_pszAbilityName;
          if ( v53 != 0 )
          {
            if ( (v54 = *v53, *v53 == 0)
              || v54 != "item_refresher" && strcmp(v54, "item_refresher") != 0
              || ((*(Item->_vptr_IHandleEntity + 241))(Item, -1.0), (v53 = &v43->m_pAbilityData->m_pszAbilityName) != 0) )
            {
              v55 = *v53;
              if ( *v53 != 0
                && (v55 == "item_bottle" || strcmp(v55, "item_bottle") == 0)
                && LODWORD(v43[1]._vptr_IHandleEntity) != -1 )
              {
                CDOTA_Item::SetCurrentCharges(Item, Item->m_iInitialCharges.m_Value);
              }
            }
          }
        }
      }
    }
    ++j;
  }
  while ( j != 9 );
  v56 = CDOTABaseAbility::GetCaster(this);
  ModifierByName = CDOTA_BaseNPC::FindModifierByName(v56, "modifier_item_moon_shard_consumed", 0);
  if ( ModifierByName != 0 )
  {
    v58 = __dynamic_cast(
            ModifierByName,
            &`typeinfo for'CDOTA_Buff,
            &`typeinfo for'CDOTA_Modifier_Item_Moonshard_Consumed,
            0);
    if ( v58 != 0 )
    {
      KeyValues::KeyValues(&kv, "modifier_item_moon_shard_consumed");
      (*(*v58 + 248LL))(v58);
      KeyValues::SetFloat(&kv, "duration", v59);
      KeyValues::SetInt(&kv, "consumed_bonus", v58[746]);
      Ability = CDOTA_Buff::GetAbility(v58);
      v61 = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::AddNewModifier(v5, v61, Ability, "modifier_item_moon_shard_consumed", &kv, 0);
      KeyValues::~KeyValues(&kv);
    }
  }
  v62 = CDOTABaseAbility::GetCaster(this);
  v63 = CDOTA_BaseNPC::FindModifierByName(v62, "modifier_item_ultimate_scepter_consumed", 0);
  if ( v63 != 0 && CDOTA_BaseNPC::FindModifierByName(v5, "modifier_item_ultimate_scepter_consumed", 0) == 0 )
  {
    KeyValues::KeyValues(&kv, "modifier_item_ultimate_scepter_consumed");
    KeyValues::SetFloat(&kv, "duration", v104);
    KeyValues::SetInt(&kv, "bonus_all_stats", 10);
    KeyValues::SetInt(&kv, "bonus_health", 175);
    KeyValues::SetInt(&kv, "bonus_mana", 175);
    v105 = CDOTA_Buff::GetAbility(v63);
    v106 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::AddNewModifier(v5, v106, v105, "modifier_item_ultimate_scepter_consumed", &kv, 0);
    KeyValues::~KeyValues(&kv);
  }
  v64 = CDOTABaseAbility::GetCaster(this);
  v65 = (*(v64->_vptr_IHandleEntity + 414))(v64);
  CDOTA_BaseNPC::SetControllableByPlayer(v5, v65, 0);
  if ( HIDWORD(v5[1].m_pfnTouch.__delta) != 0 )
  {
    (*(v5->_vptr_IHandleEntity + 22))(v5, 4772, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    HIDWORD(v5[1].m_pfnTouch.__delta) = 0;
  }
  (*(v5->_vptr_IHandleEntity + 490))(v5);
  v66 = CDOTABaseAbility::GetCaster(this);
  if ( v66 != 0 && (v66->m_iUnitType & 1) != 0 )
  {
    v112[0].m_Index = -1;
    v67 = v66->m_pEntity;
    if ( v67 != 0 )
    {
      v68 = (v67->m_EHandle.m_Index >> 15) - (v67->m_flags & 1);
      v69 = 0x7FFF;
      if ( v67->m_EHandle.m_Index != -1 )
        v69 = v67->m_EHandle.m_Index & 0x7FFF;
      v70 = v66;
      LOWORD(v112[0].m_Index) = v69 | v112[0].m_Index & 0x8000;
      v112[0].m_Index = (v68 << 15) | v112[0].m_Index & 0x7FFF;
      v71 = v112[0].m_Index + 2;
      m_Index = v112[0].m_Index;
    }
    else
    {
      v70 = v66;
      v71 = 1;
      m_Index = -1;
    }
  }
  else
  {
    v112[0].m_Index = -1;
    v71 = 1;
    v70 = 0;
    m_Index = -1;
  }
  pfn_high = HIDWORD(v5[1].m_pfnMoveDone.__pfn);
  m_pInstance = 0;
  if ( (pfn_high + 2) > 1 )
  {
    v75 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(WORD2(v5[1].m_pfnMoveDone.__pfn) >> 9) & 0x3F];
    if ( v75 != 0 )
    {
      v76 = &v75[WORD2(v5[1].m_pfnMoveDone.__pfn) & 0x1FF];
      if ( v76 != 0 && pfn_high == v76->m_EHandle.m_Index )
        m_pInstance = v76->m_pInstance;
    }
  }
  v77 = 0;
  if ( v71 > 1 )
  {
    v78 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v112[0].m_Index) >> 9) & 0x3F];
    if ( v78 != 0 )
    {
      v79 = &v78[v112[0].m_Index & 0x1FF];
      if ( v79 != 0 && v79->m_EHandle.m_Index == m_Index )
        v77 = v79->m_pInstance;
    }
  }
  if ( m_pInstance != v77 )
  {
    (*(v5->_vptr_IHandleEntity + 22))(v5, 4812, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    HIDWORD(v5[1].m_pfnMoveDone.__pfn) = m_Index;
  }
  CBaseEntity::GetModel(v112, v70);
  CBaseModelEntity::SetModel(v5, v112);
  CDOTA_BaseNPC::GetInventory(v5)->m_bIsActive = 1;
  v5->m_bHasInventory = 1;
  v80 = CDOTABaseAbility::GetCaster(this);
  Health = CBaseEntity::GetHealth(v80);
  CDOTA_BaseNPC::ModifyHealth(v5, Health, this, 0, 0);
  v82 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::SetMana(v5, v82->m_flMana.m_Value, v83);
  v84 = v5->m_clrRender.m_Value._color[3];
  if ( v5->m_clrRender.m_Value._color[0] != 0 )
  {
    (*(v5->_vptr_IHandleEntity + 22))(v5, 828, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    v5->m_clrRender.m_Value._color[0] = 0;
  }
  if ( v5->m_clrRender.m_Value._color[1] != 0 )
  {
    (*(v5->_vptr_IHandleEntity + 22))(v5, 828, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    v5->m_clrRender.m_Value._color[1] = 0;
  }
  if ( v5->m_clrRender.m_Value._color[2] != 0 )
  {
    (*(v5->_vptr_IHandleEntity + 22))(v5, 828, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    v5->m_clrRender.m_Value._color[2] = 0;
  }
  if ( v84 != v5->m_clrRender.m_Value._color[3] )
  {
    (*(v5->_vptr_IHandleEntity + 22))(v5, 828, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    v5->m_clrRender.m_Value._color[3] = v84;
  }
  OwnerEntity = 0;
  v86 = CDOTABaseAbility::GetCaster(this);
  v115 = *CBaseEntity::GetAbsOrigin(v86);
  FindClearSpaceForUnit(v5, v115, 1);
  v87 = CDOTABaseAbility::GetCaster(this);
  AbsAngles = CBaseEntity::GetAbsAngles(v87);
  CBaseEntity::SetAbsAngles(v5, AbsAngles);
  m_pParent = this->m_pGameSceneNode->m_pParent;
  if ( m_pParent != 0 )
    OwnerEntity = CGameSceneNode::GetOwnerEntity(m_pParent);
  ParticleManager = GetParticleManager();
  v91 = 0;
  Particle = CDOTA_ParticleManager::CreateParticle(
               ParticleManager,
               "particles/units/heroes/hero_arc_warden/arc_warden_tempest_cast.vpcf",
               2,
               OwnerEntity,
               0,
               0);
  v93 = this->m_pGameSceneNode->m_pParent;
  if ( v93 != 0 )
    v91 = CGameSceneNode::GetOwnerEntity(v93);
  v94 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v94, Particle, 0, v91, 1, 0, vec3_invalid, 1);
  v95 = this->m_pGameSceneNode->m_pParent;
  v96 = 0;
  if ( v95 != 0 )
    v96 = CGameSceneNode::GetOwnerEntity(v95);
  v97 = 0;
  v98 = CBaseEntity::GetAbsOrigin(v96);
  v99 = this->m_pGameSceneNode->m_pParent;
  if ( v99 != 0 )
    v97 = CGameSceneNode::GetOwnerEntity(v99);
  v100 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v100, Particle, 1, v97, 5, "attach_hitloc", *v98, 1);
  v101 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v101, Particle);
  v102 = CDOTABaseAbility::GetCaster(this);
  DOTA_EmitSound(24, "Hero_ArcWarden.TempestDouble", v102);
  v103 = CDOTABaseAbility::GetCaster(this);
  DOTA_EmitSound(1, "Hero_ArcWarden.TempestDouble.FP", v103);
}


// CDOTA_Ability_ArcWarden_TempestDouble::GetAdditionalOwnedUnits  (line 1152, @0x0000000002c80db0, libserver.so)  // inlines: AddToTail, CopyConstruct<CDOTA_BaseNPC*>, Element, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GrowMemory, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator[]
// calls: CUtlMemory<CDOTA_BaseNPC*, int>::Grow
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Ability_ArcWarden_TempestDouble::GetAdditionalOwnedUnits(
        CDOTA_Ability_ArcWarden_TempestDouble *const this,
        CUtlVector<CDOTA_BaseNPC*,CUtlMemory<CDOTA_BaseNPC*,int> > *vecOwnedUnits)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  __int64 m_Size; // r12
  int v8; // eax
  CDOTA_BaseNPC **v9; // rax

  m_Index = this->m_hDoubles.m_Value.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hDoubles.m_Value.m_Index) >> 9) & 0x3F];
    if ( v4 != 0 )
    {
      v5 = &v4[this->m_hDoubles.m_Value.m_Index & 0x1FF];
      if ( v5 != 0 && m_Index == v5->m_EHandle.m_Index )
      {
        m_pInstance = v5->m_pInstance;
        if ( v5->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC && vecOwnedUnits != 0 )
        {
          m_Size = vecOwnedUnits->m_Size;
          v8 = vecOwnedUnits->m_Size;
          if ( m_Size == vecOwnedUnits->m_Memory.m_nAllocationCount )
          {
            CUtlMemory<CDOTA_BaseNPC *,int>::Grow(&vecOwnedUnits->m_Memory, 1);
            v8 = vecOwnedUnits->m_Size;
          }
          vecOwnedUnits->m_Size = v8 + 1;
          v9 = &vecOwnedUnits->m_Memory.m_pMemory[m_Size];
          if ( v9 != 0 )
            *v9 = m_pInstance;
        }
      }
    }
  }
}


// CDOTA_Modifier_ArcWarden_TempestDouble::~CDOTA_Modifier_ArcWarden_TempestDouble  (line 1167, @0x0000000002c93410, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_ArcWarden_TempestDouble::~CDOTA_Modifier_ArcWarden_TempestDouble(
        CDOTA_Modifier_ArcWarden_TempestDouble *const this)
{
  this->_vptr_CDOTA_Buff = &off_458A310;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_ArcWarden_TempestDouble::~CDOTA_Modifier_ArcWarden_TempestDouble  (line 1167, @0x0000000002c93430, libserver.so)  // inlines: ~CDOTA_Modifier_ArcWarden_TempestDouble
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_ArcWarden_TempestDouble::~CDOTA_Modifier_ArcWarden_TempestDouble(
        CDOTA_Modifier_ArcWarden_TempestDouble *const this)
{
  this->_vptr_CDOTA_Buff = &off_458A310;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_ArcWarden_TempestDouble::IsPurgable  (line 1173, @0x0000000002c86f80, libserver.so)
bool __fastcall CDOTA_Modifier_ArcWarden_TempestDouble::IsPurgable(CDOTA_Modifier_ArcWarden_TempestDouble *const this)
{
  return 0;
}


// CDOTA_Modifier_ArcWarden_TempestDouble::IsPermanent  (line 1174, @0x0000000002c86f90, libserver.so)
bool __fastcall CDOTA_Modifier_ArcWarden_TempestDouble::IsPermanent(CDOTA_Modifier_ArcWarden_TempestDouble *const this)
{
  return 1;
}


// CDOTA_Modifier_ArcWarden_TempestDouble::RemoveOnDeath  (line 1175, @0x0000000002c86fa0, libserver.so)
bool __fastcall CDOTA_Modifier_ArcWarden_TempestDouble::RemoveOnDeath(
        CDOTA_Modifier_ArcWarden_TempestDouble *const this)
{
  return 0;
}


// CDOTA_Modifier_ArcWarden_TempestDouble::GetStatusEffectName  (line 1182, @0x0000000002c86fb0, libserver.so)
// strings: "particles/status_fx/status_effect_arc_warden_tempest.vpcf"
const char *__fastcall CDOTA_Modifier_ArcWarden_TempestDouble::GetStatusEffectName(
        CDOTA_Modifier_ArcWarden_TempestDouble *const this)
{
  return "particles/status_fx/status_effect_arc_warden_tempest.vpcf";
}


// CDOTA_Modifier_ArcWarden_TempestDouble::StatusEffectPriority  (line 1183, @0x0000000002c86fc0, libserver.so)
int __fastcall CDOTA_Modifier_ArcWarden_TempestDouble::StatusEffectPriority(
        CDOTA_Modifier_ArcWarden_TempestDouble *const this)
{
  return 10010;
}


// CDOTA_Modifier_ArcWarden_TempestDouble::DeclareFunctions  (line 1191, @0x0000000002c1b830, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_ArcWarden_TempestDouble::GetModifierTempestDouble(CModifierParams const&), CDOTA_Modifier_ArcWarden_TempestDouble::OnDeath(CModifierParams const&)
void __fastcall CDOTA_Modifier_ArcWarden_TempestDouble::DeclareFunctions(
        CDOTA_Modifier_ArcWarden_TempestDouble *const this)
{
  this->m_Functions[166].__pfn = CDOTA_Modifier_ArcWarden_TempestDouble::GetModifierTempestDouble;
  this->m_Functions[166].__delta = 0;
  this->m_Functions[138].__delta = 0;
  this->m_Functions[138].__pfn = CDOTA_Modifier_ArcWarden_TempestDouble::OnDeath;
}


// CDOTA_Modifier_ArcWarden_TempestDouble::GetModifierTempestDouble  (line 1199, @0x0000000002c1b870, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_ArcWarden_TempestDouble::GetModifierTempestDouble(
        CDOTA_Modifier_ArcWarden_TempestDouble *const this,
        const CModifierParams *const params)
{
  return 0x3F80000000000001uLL;
}


// CDOTA_Modifier_ArcWarden_TempestDouble::OnCreated  (line 1207, @0x0000000002c1b890, libserver.so)
void __fastcall CDOTA_Modifier_ArcWarden_TempestDouble::OnCreated(
        CDOTA_Modifier_ArcWarden_TempestDouble *const this,
        KeyValues *pKV)
{
  ;
}


// CDOTA_Modifier_ArcWarden_TempestDouble::OnRefresh  (line 1228, @0x0000000002c1b8a0, libserver.so)
void __fastcall CDOTA_Modifier_ArcWarden_TempestDouble::OnRefresh(
        CDOTA_Modifier_ArcWarden_TempestDouble *const this,
        KeyValues *pKV)
{
  ;
}


// CDOTA_Modifier_ArcWarden_TempestDouble::OnDeath  (line 1244, @0x0000000002c83690, libserver.so)  // inlines: AddToTail, AttackerNPC, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<CDOTA_BaseNPC_Hero*>, Element, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeamNumber, GetUnitName, GrowMemory, IndexToIdentity, IsHero, IsOwnedByAnyPlayer, IsUnitMyParent, IsValid, LookupEntity, Purge, QueueConcept, RemoveAll, String, ToCStr, ToDOTABaseNPC, ToDOTABaseNPCHero, UnitNPC, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CResponseCriteriaSet::CResponseCriteriaSet, CEntityHandle::operator CEntityInstance*, CDOTA_Buff::GetParent, CResponseCriteriaSet::~CResponseCriteriaSet, CResponseCriteriaSet::AppendCriteria, CDOTA_PlayerResource::GetPlayer, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, CDOTA_PlayerResource::ModifyGold, SendOverheadEventMessage, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, CDOTA_Buff::GetCaster (17 total)
// strings: "creaturename", "KilledByHero"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_ArcWarden_TempestDouble::OnDeath(
        CDOTA_Modifier_ArcWarden_TempestDouble *const this,
        const CModifierParams *const params)
{
  CDOTA_BaseNPC *v3; // rax
  const CBaseEntity *v4; // r12
  const char *delta; // rdx
  CEntityInstance *v7; // rax
  float v8; // xmm2_4
  CDOTA_BaseNPC *v9; // rbx
  int v10; // r13d
  CDOTAPlayer *Player; // rax
  CDOTAPlayer *v12; // r15
  const Vector *AbsOrigin; // rax
  __int64 v14; // r12
  int v15; // ebx
  CHandle<CBaseEntity> *v16; // rdx
  uint32 m_Index; // eax
  __int16 v18; // cx
  CEntityIdentity *v19; // rdx
  CEntityIdentity *v20; // rdx
  CDOTA_BaseNPC_Hero *m_pInstance; // r13
  __int64 m_Size; // r14
  CDOTA_BaseNPC_Hero **v23; // rax
  __int64 v24; // r14
  unsigned __int64 v25; // rbx
  CDOTA_BaseNPC_Hero *v26; // r12
  CDOTAPlayer *v27; // r13
  CDOTA_Speech *m_pSpeech; // rdi
  CEntityInstance *v29; // rax
  CBaseEntity *v30; // r14
  int nHeroPlayerID; // [rsp+34h] [rbp-BCh]
  float flGoldPerHero; // [rsp+38h] [rbp-B8h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+40h] [rbp-B0h] BYREF
  CUtlVector<CDOTA_BaseNPC_Hero*,CUtlMemory<CDOTA_BaseNPC_Hero*,int> > xpSplittingHeroes; // [rsp+60h] [rbp-90h] BYREF
  CResponseCriteriaSet criteria; // [rsp+80h] [rbp-70h] BYREF

  CResponseCriteriaSet::CResponseCriteriaSet(&criteria);
  v3 = CEntityHandle::operator CEntityInstance *(&params->hunit);
  v4 = v3;
  if ( v3 == 0 || !v3->m_bIsDOTANPC || v3 != CDOTA_Buff::GetParent(this) )
    goto LABEL_4;
  delta = "";
  if ( v4[4].m_pfnUse.__delta != 0 )
    delta = v4[4].m_pfnUse.__delta;
  CResponseCriteriaSet::AppendCriteria(&criteria, "creaturename", delta, 1.0);
  v7 = CEntityHandle::operator CEntityInstance *(&params->hattacker);
  v9 = v7;
  if ( v7 != 0 && BYTE3(v7[7]._vptr_IHandleEntity) != 0 && v4->m_iTeamNum.m_Value != HIBYTE(v7[7].m_CScriptComponent) )
  {
    CResponseCriteriaSet::AppendCriteria(&criteria, "KilledByHero", 1.0, v8);
    v10 = (*(v9->_vptr_IHandleEntity + 414))(v9);
    Player = CDOTA_PlayerResource::GetPlayer(g_pDOTAPlayerResource, v10);
    v12 = Player;
    if ( v9->m_iIsControllableByPlayer64.m_Value != 0 || (v9->m_iUnitType & 1) != 0 )
    {
      if ( Player == 0 )
        goto LABEL_13;
      CDOTA_PlayerResource::GetPlayerSelectedHeroHandle(&xpSplittingHeroes, g_pDOTAPlayerResource, v10);
      v29 = CEntityHandle::operator CEntityInstance *(&xpSplittingHeroes);
      v30 = v29;
      if ( v29 != 0 && BYTE3(v29[7]._vptr_IHandleEntity) != 0 && (v29[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
      {
        CDOTA_PlayerResource::ModifyGold(g_pDOTAPlayerResource, v10, 180, 1, 0);
        SendOverheadEventMessage(v12, DOTA_OVERHEAD_ALERT::OVERHEAD_ALERT_GOLD, v30, 180, 0);
        LOBYTE(v12) = 1;
        goto LABEL_13;
      }
    }
    LOBYTE(v12) = 0;
LABEL_13:
    entities.m_Size = 0;
    entities.m_Memory.m_pMemory = 0;
    entities.m_Memory.m_nAllocationCount = 0;
    entities.m_Memory.m_nGrowSize = 0;
    AbsOrigin = CBaseEntity::GetAbsOrigin(v4);
    FindUnitsInRadius(v9->m_iTeamNum.m_Value, AbsOrigin, v9, 1300.0, &entities, 1, 1, 270424, 0, 0);
    xpSplittingHeroes.m_Size = 0;
    xpSplittingHeroes.m_Memory.m_pMemory = 0;
    xpSplittingHeroes.m_Memory.m_nAllocationCount = 0;
    xpSplittingHeroes.m_Memory.m_nGrowSize = 0;
    if ( entities.m_Size > 0 )
    {
      v14 = 0;
      v15 = 0;
      do
      {
        while ( 1 )
        {
          v16 = &entities.m_Memory.m_pMemory[v14];
          m_Index = entities.m_Memory.m_pMemory[v14].m_Index;
          if ( m_Index + 2 > 1 )
          {
            v18 = v16->m_Index;
            v19 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v16->m_Index) >> 9) & 0x3F];
            if ( v19 != 0 )
            {
              v20 = &v19[v18 & 0x1FF];
              if ( v20 != 0 && m_Index == v20->m_EHandle.m_Index )
              {
                m_pInstance = v20->m_pInstance;
                if ( v20->m_pInstance != 0
                  && m_pInstance->m_bIsDOTANPC
                  && (m_pInstance->m_iUnitType & 1) != 0
                  && (*(m_pInstance->_vptr_IHandleEntity + 408))(v20->m_pInstance) != 0 )
                {
                  m_Size = xpSplittingHeroes.m_Size;
                  if ( xpSplittingHeroes.m_Size == xpSplittingHeroes.m_Memory.m_nAllocationCount )
                    CUtlMemory<CDOTA_BaseNPC_Hero *,int>::Grow(&xpSplittingHeroes.m_Memory, 1);
                  ++xpSplittingHeroes.m_Size;
                  v23 = &xpSplittingHeroes.m_Memory.m_pMemory[m_Size];
                  if ( v23 != 0 )
                    break;
                }
              }
            }
          }
          ++v15;
          ++v14;
          if ( entities.m_Size <= v15 )
            goto LABEL_28;
        }
        *v23 = m_pInstance;
        ++v15;
        ++v14;
      }
      while ( entities.m_Size > v15 );
LABEL_28:
      if ( xpSplittingHeroes.m_Size > 0 )
      {
        v24 = 8LL * (xpSplittingHeroes.m_Size - 1) + 8;
        v25 = 0;
        flGoldPerHero = 180.0 / xpSplittingHeroes.m_Size;
        do
        {
          while ( 1 )
          {
            v26 = xpSplittingHeroes.m_Memory.m_pMemory[v25 / 8];
            (*(v26->_vptr_IHandleEntity + 493))(v26, 0, 1, 1, flGoldPerHero);
            if ( v12 == 0 )
            {
              nHeroPlayerID = (*(v26->_vptr_IHandleEntity + 414))(v26);
              v27 = CDOTA_PlayerResource::GetPlayer(g_pDOTAPlayerResource, nHeroPlayerID);
              if ( v27 != 0 )
                break;
            }
            v25 += 8LL;
            if ( v25 == v24 )
              goto LABEL_34;
          }
          CDOTA_PlayerResource::ModifyGold(g_pDOTAPlayerResource, nHeroPlayerID, flGoldPerHero, 1, 0);
          SendOverheadEventMessage(v27, DOTA_OVERHEAD_ALERT::OVERHEAD_ALERT_GOLD, v26, flGoldPerHero, 0);
          v25 += 8LL;
        }
        while ( v25 != v24 );
      }
    }
LABEL_34:
    xpSplittingHeroes.m_Size = 0;
    if ( (xpSplittingHeroes.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<CDOTA_BaseNPC_Hero *,int>::Purge(&xpSplittingHeroes.m_Memory);
      if ( (xpSplittingHeroes.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<CDOTA_BaseNPC_Hero *,int>::Purge(&xpSplittingHeroes.m_Memory);
    }
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&entities);
  }
  if ( CDOTA_Buff::GetCaster(this) != 0 )
  {
    m_pSpeech = CDOTA_Buff::GetCaster(this)->m_Speech.m_pSpeech;
    if ( m_pSpeech != 0 )
      CDOTA_Speech::QueueConcept(m_pSpeech, 35, 1.0, &criteria, 0, 1, 0, 0, 0);
  }
LABEL_4:
  CResponseCriteriaSet::~CResponseCriteriaSet(&criteria);
  return 1uLL;
}


