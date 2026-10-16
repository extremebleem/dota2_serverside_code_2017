// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/units/dota_unit_hero_skywrath_mage.cpp:37
class CDOTA_Unit_Hero_Skywrath_Mage : public CDOTA_BaseNPC_Hero {
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
	CDOTA_Unit_Hero_Skywrath_Mage(CDOTA_Unit_Hero_Skywrath_Mage &);
	CDOTA_Unit_Hero_Skywrath_Mage(CDOTA_Unit_Hero_Skywrath_Mage &);
	CDOTA_Unit_Hero_Skywrath_Mage();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void Spawn(const CEntityKeyValues *);
	virtual ~CDOTA_Unit_Hero_Skywrath_Mage();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[8] Spawn
	// sizeof = 5872
};

// src/game/shared/dota/units/dota_unit_hero_skywrath_mage.cpp:46
class C_CDOTA_Unit_Hero_Skywrath_Mage_MapInstall {
	C_CDOTA_Unit_Hero_Skywrath_Mage_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_skywrath_mage.cpp:66
class CDOTA_Ability_Skywrath_Mage_Arcane_Bolt : public CDOTABaseAbility {
public:

private:

	int bolt_vision;  // +0x390
	float vision_duration;  // +0x394
	float m_flDamage;  // +0x398
	int m_nFXIndex;  // +0x39c
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
	CDOTA_Ability_Skywrath_Mage_Arcane_Bolt(CDOTA_Ability_Skywrath_Mage_Arcane_Bolt &);
	CDOTA_Ability_Skywrath_Mage_Arcane_Bolt(CDOTA_Ability_Skywrath_Mage_Arcane_Bolt &);
	CDOTA_Ability_Skywrath_Mage_Arcane_Bolt();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void OnSpellStart();
	virtual bool OnProjectileHit(EHANDLE, const Vector &);
	virtual void OnProjectileThink(const Vector &);
	virtual const char * GetIntrinsicModifierName();
	void FireArcaneBolt(CDOTA_BaseNPC *);
	virtual ~CDOTA_Ability_Skywrath_Mage_Arcane_Bolt();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[266] OnSpellStart
	// vtable[289] OnProjectileHit
	// vtable[291] OnProjectileThink
	// vtable[280] GetIntrinsicModifierName
	// sizeof = 936
};

// src/game/shared/dota/units/dota_unit_hero_skywrath_mage.cpp:229
class CDOTA_Ability_Skywrath_Mage_Concussive_Shot : public CDOTABaseAbility {
public:

private:

	int launch_radius;  // +0x390
	int speed;  // +0x394
	int slow_radius;  // +0x398
	int damage;  // +0x39c
	int shot_vision;  // +0x3a0
	float slow_duration;  // +0x3a4
	float vision_duration;  // +0x3a8
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
	CDOTA_Ability_Skywrath_Mage_Concussive_Shot(CDOTA_Ability_Skywrath_Mage_Concussive_Shot &);
	CDOTA_Ability_Skywrath_Mage_Concussive_Shot(CDOTA_Ability_Skywrath_Mage_Concussive_Shot &);
	CDOTA_Ability_Skywrath_Mage_Concussive_Shot();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void OnSpellStart();
	virtual bool OnProjectileHit(EHANDLE, const Vector &);
	void FireConcussiveShot(CDOTA_BaseNPC *);
	virtual ~CDOTA_Ability_Skywrath_Mage_Concussive_Shot();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[266] OnSpellStart
	// vtable[289] OnProjectileHit
	// sizeof = 944
};

// src/game/shared/dota/units/dota_unit_hero_skywrath_mage.cpp:390
class CDOTA_Modifier_Skywrath_Mage_Concussive_Shot : public CDOTA_Buff {
public:

private:

	int movement_speed_pct;  // +0xba8
	CDOTA_Modifier_Skywrath_Mage_Concussive_Shot();
	virtual bool IsDebuff();
	virtual const char * GetEffectName();
	virtual void OnCreated(KeyValues *);
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierMoveSpeedBonus_Percentage(const CModifierParams &);
	virtual ~CDOTA_Modifier_Skywrath_Mage_Concussive_Shot();

	// vtable[12] IsDebuff
	// vtable[67] GetEffectName
	// vtable[57] OnCreated
	// vtable[65] DeclareFunctions
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_skywrath_mage.cpp:439
class CDOTA_Ability_Skywrath_Mage_Ancient_Seal : public CDOTABaseAbility {
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
	CDOTA_Ability_Skywrath_Mage_Ancient_Seal(CDOTA_Ability_Skywrath_Mage_Ancient_Seal &);
	CDOTA_Ability_Skywrath_Mage_Ancient_Seal(CDOTA_Ability_Skywrath_Mage_Ancient_Seal &);
	CDOTA_Ability_Skywrath_Mage_Ancient_Seal();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void OnSpellStart();
	virtual float GetCooldown(int);
	virtual ~CDOTA_Ability_Skywrath_Mage_Ancient_Seal();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// vtable[242] GetCooldown
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_skywrath_mage.cpp:450
class C_CDOTA_Ability_Skywrath_Mage_Ancient_Seal_MapInstall {
	C_CDOTA_Ability_Skywrath_Mage_Ancient_Seal_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_skywrath_mage.cpp:528
class CDOTA_Modifier_Skywrath_Mage_Ancient_Seal : public CDOTA_Buff {
public:

private:

	int resist_debuff;  // +0xba8
	CDOTA_Modifier_Skywrath_Mage_Ancient_Seal();
	virtual bool IsDebuff();
	ModifierVariant_t GetModifierMagicalResistanceBonus(const CModifierParams &);
	ModifierVariant_t OnHeroKilled(const CModifierParams &);
	virtual void DeclareFunctions();
	virtual void OnCreated(KeyValues *);
	virtual void CheckState(CDOTABuffState &);
	virtual ~CDOTA_Modifier_Skywrath_Mage_Ancient_Seal();

	// vtable[12] IsDebuff
	// vtable[65] DeclareFunctions
	// vtable[57] OnCreated
	// vtable[5] CheckState
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_skywrath_mage.cpp:614
class CDOTA_Ability_Skywrath_Mage_Mystic_Flare : public CDOTABaseAbility {
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
	CDOTA_Ability_Skywrath_Mage_Mystic_Flare(CDOTA_Ability_Skywrath_Mage_Mystic_Flare &);
	CDOTA_Ability_Skywrath_Mage_Mystic_Flare(CDOTA_Ability_Skywrath_Mage_Mystic_Flare &);
	CDOTA_Ability_Skywrath_Mage_Mystic_Flare();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void OnSpellStart();
	virtual ~CDOTA_Ability_Skywrath_Mage_Mystic_Flare();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_skywrath_mage.cpp:632
class C_CDOTA_Ability_Skywrath_Mage_Mystic_Flare_MapInstall {
	C_CDOTA_Ability_Skywrath_Mage_Mystic_Flare_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_skywrath_mage.cpp:708
class CDOTA_Modifier_Skywrath_Mage_Mystic_Flare : public CDOTA_Buff {
public:

private:

	int radius;  // +0xba8
	int damage;  // +0xbac
	float duration;  // +0xbb0
	float damage_interval;  // +0xbb4
	CDOTA_Modifier_Skywrath_Mage_Mystic_Flare();
	virtual void OnCreated(KeyValues *);
	virtual void OnIntervalThink();
	virtual bool IsAura();
	virtual const char * GetModifierAura();
	virtual int GetAuraSearchTeam();
	virtual int GetAuraSearchType();
	virtual int GetAuraSearchFlags();
	virtual int GetAuraRadius();
	virtual ~CDOTA_Modifier_Skywrath_Mage_Mystic_Flare();

	// vtable[57] OnCreated
	// vtable[56] OnIntervalThink
	// vtable[35] IsAura
	// vtable[37] GetModifierAura
	// vtable[38] GetAuraSearchTeam
	// vtable[39] GetAuraSearchType
	// vtable[40] GetAuraSearchFlags
	// vtable[41] GetAuraRadius
	// sizeof = 3000
};

// src/game/shared/dota/units/dota_unit_hero_skywrath_mage.cpp:801
class CDOTA_Modifier_Skywrath_Mystic_Flare_Aura_Effect : public CDOTA_Buff {
public:

	CDOTA_Modifier_Skywrath_Mystic_Flare_Aura_Effect(CDOTA_Modifier_Skywrath_Mystic_Flare_Aura_Effect &);
	CDOTA_Modifier_Skywrath_Mystic_Flare_Aura_Effect(const CDOTA_Modifier_Skywrath_Mystic_Flare_Aura_Effect &);
	CDOTA_Modifier_Skywrath_Mystic_Flare_Aura_Effect();
	virtual const char * GetEffectName();
	virtual bool IsHidden();
	virtual ~CDOTA_Modifier_Skywrath_Mystic_Flare_Aura_Effect();

	// vtable[67] GetEffectName
	// vtable[11] IsHidden
	// sizeof = 2984
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Unit_Hero_Skywrath_Mage::~CDOTA_Unit_Hero_Skywrath_Mage  (line 37, @0x0000000002d2d060, libserver.so)
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero
void __fastcall CDOTA_Unit_Hero_Skywrath_Mage::~CDOTA_Unit_Hero_Skywrath_Mage(
        CDOTA_Unit_Hero_Skywrath_Mage *const this)
{
  this->_vptr_IHandleEntity = &off_4624850;
  this->_vptr_INextBotEventResponder = &off_4625830;
  this->_vptr_CObstructionObject = &off_4625B60;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
}


// CDOTA_Unit_Hero_Skywrath_Mage::~CDOTA_Unit_Hero_Skywrath_Mage  (line 37, @0x0000000002d2d0a0, libserver.so)  // inlines: ~CDOTA_Unit_Hero_Skywrath_Mage
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero, CBaseEntity::operator delete
void __fastcall CDOTA_Unit_Hero_Skywrath_Mage::~CDOTA_Unit_Hero_Skywrath_Mage(
        CDOTA_Unit_Hero_Skywrath_Mage *const this)
{
  this->_vptr_IHandleEntity = &off_4624850;
  this->_vptr_INextBotEventResponder = &off_4625830;
  this->_vptr_CObstructionObject = &off_4625B60;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Unit_Hero_Skywrath_Mage::Schema_DynamicBinding  (line 39, @0x0000000002d1dcb0, libserver.so)
// globals: CDOTA_Unit_Hero_Skywrath_Mage::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_Skywrath_Mage::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_Skywrath_Mage *const this)
{
  return CDOTA_Unit_Hero_Skywrath_Mage::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Skywrath_Mage::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 39, @0x0000000002d1dce0, libserver.so)
// globals: CDOTA_Unit_Hero_Skywrath_Mage::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_Skywrath_Mage::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_Skywrath_Mage::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_Skywrath_Mage::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Skywrath_Mage::CEntityInstanceEntityClass::DestructInstance  (line 39, @0x0000000002d1dcf0, libserver.so)  // inlines: Destruct<CDOTA_Unit_Hero_Skywrath_Mage>
void __fastcall CDOTA_Unit_Hero_Skywrath_Mage::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Unit_Hero_Skywrath_Mage::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Unit_Hero_Skywrath_Mage::CEntityInstanceEntityClass::FreeInstance  (line 39, @0x0000000002d1dd10, libserver.so)
void __fastcall CDOTA_Unit_Hero_Skywrath_Mage::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Unit_Hero_Skywrath_Mage::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Unit_Hero_Skywrath_Mage::CEntityInstanceEntityClass::CanAllocate  (line 39, @0x0000000002d1dd30, libserver.so)
bool __fastcall CDOTA_Unit_Hero_Skywrath_Mage::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Unit_Hero_Skywrath_Mage::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Unit_Hero_Skywrath_Mage::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 39, @0x0000000002d1dd40, libserver.so)
// globals: CDOTA_Unit_Hero_Skywrath_Mage::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Unit_Hero_Skywrath_Mage::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Unit_Hero_Skywrath_Mage::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_Skywrath_Mage::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Skywrath_Mage::CEntityInstanceEntityClass::AllocateInstance  (line 39, @0x0000000002d24750, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Unit_Hero_Skywrath_Mage::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Unit_Hero_Skywrath_Mage::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 5872);
  memset(v1, 0, 0x16F0u);
  return v1;
}


// CDOTA_Unit_Hero_Skywrath_Mage::CEntityInstanceEntityClass::ConstructInstance  (line 39, @0x0000000002d287e0, libserver.so)  // inlines: CDOTA_Unit_Hero_Skywrath_Mage, Construct<CDOTA_Unit_Hero_Skywrath_Mage>
// calls: CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero
CEntityInstance *__fastcall CDOTA_Unit_Hero_Skywrath_Mage::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Unit_Hero_Skywrath_Mage::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero(p);
    *p = &off_4624850;
    *(p + 236) = &off_4625830;
    *(p + 257) = &off_4625B60;
  }
  return p;
}


// CDOTA_Unit_Hero_Skywrath_Mage::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 39, @0x0000000002d354d0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Unit_Hero_Skywrath_Mage::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_Skywrath_Mage::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Unit_Hero_Skywrath_Mage::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 39, @0x0000000002d35900, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Unit_Hero_Skywrath_Mage::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_Skywrath_Mage::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Unit_Hero_Skywrath_Mage::GetEntityClassInternal  (line 39, @0x0000000002d4d600, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_BaseNPC_Hero::InitScriptDesc, CDOTA_BaseNPC_Hero::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_02.cpp
// strings: "npc_dota_hero_skywrath_mage", "CDOTA_Unit_Hero_Skywrath_Mage"
// globals: `guard variable for'CDOTA_Unit_Hero_Skywrath_Mage::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Skywrath_MageClass, CDOTA_Unit_Hero_Skywrath_Mage::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Skywrath_MageClass, __dso_handle, CDOTA_Unit_Hero_Skywrath_Mage::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Unit_Hero_Skywrath_Mage::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_Skywrath_MageClassInfo, CDOTA_Unit_Hero_Skywrath_Mage::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_Skywrath_MageClassInfo
CEntityClass *__cdecl CDOTA_Unit_Hero_Skywrath_Mage::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Unit_Hero_Skywrath_Mage::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Skywrath_MageClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_Skywrath_Mage::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Skywrath_MageClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Unit_Hero_Skywrath_Mage::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Skywrath_MageClass);
    CDOTA_Unit_Hero_Skywrath_Mage::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Skywrath_MageClass._vptr_CEntityClass = off_46247D0;
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_Skywrath_Mage::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Skywrath_MageClass);
    __cxa_atexit(
      CDOTA_Unit_Hero_Skywrath_Mage::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Unit_Hero_Skywrath_Mage::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Skywrath_MageClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Unit_Hero_Skywrath_MageClass != 0 )
    return &CDOTA_Unit_Hero_Skywrath_Mage::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Skywrath_MageClass;
  if ( `guard variable for'CDOTA_Unit_Hero_Skywrath_Mage::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_Skywrath_MageClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_Skywrath_Mage::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_Skywrath_MageClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_BaseNPC_Hero::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Unit_Hero_Skywrath_Mage::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_Skywrath_MageClassInfo,
      "CDOTA_Unit_Hero_Skywrath_Mage",
      "npc_dota_hero_skywrath_mage",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_Skywrath_Mage::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_Skywrath_MageClassInfo);
  }
  CDOTA_Unit_Hero_Skywrath_Mage::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Skywrath_MageClass.m_pClassInfo = &CDOTA_Unit_Hero_Skywrath_Mage::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_Skywrath_MageClassInfo;
  CDOTA_Unit_Hero_Skywrath_Mage::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Skywrath_MageClass.m_pBaseClassInfo = CDOTA_Unit_Hero_Skywrath_Mage::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_Skywrath_MageClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Unit_Hero_Skywrath_MageClass = &CDOTA_Unit_Hero_Skywrath_Mage::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Skywrath_MageClass;
  CDOTA_Unit_Hero_Skywrath_Mage::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_Skywrath_MageClassInfo.m_pClass = &CDOTA_Unit_Hero_Skywrath_Mage::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Skywrath_MageClass;
  CDOTA_Unit_Hero_Skywrath_Mage::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Skywrath_MageClass.m_pScriptClassDesc = CDOTA_BaseNPC_Hero::InitScriptDesc();
  g_pEntityCDOTA_Unit_Hero_Skywrath_MageClass->m_pComponentOverrides = 0;
  return &CDOTA_Unit_Hero_Skywrath_Mage::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Skywrath_MageClass;
}


// CDOTA_Unit_Hero_Skywrath_Mage::YouForgotToImplementOrDeclareServerClass  (line 46, @0x0000000002cc9050, libserver.so)
int __fastcall CDOTA_Unit_Hero_Skywrath_Mage::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Unit_Hero_Skywrath_Mage *const this)
{
  return 0;
}


// CDOTA_Unit_Hero_Skywrath_Mage::GetServerClass  (line 46, @0x0000000002cde8b0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Unit_Hero_Skywrath_Mage::GetServerClass(CDOTA_Unit_Hero_Skywrath_Mage *const this)
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


// CDOTA_Unit_Hero_Skywrath_Mage::Spawn  (line 55, @0x0000000002ccf940, libserver.so)
// calls: CDOTA_BaseNPC_Hero::Spawn
void __fastcall CDOTA_Unit_Hero_Skywrath_Mage::Spawn(
        CDOTA_Unit_Hero_Skywrath_Mage *const this,
        const CEntityKeyValues *pKeyValues)
{
  CDOTA_BaseNPC_Hero::Spawn(this, pKeyValues);
}


// CDOTA_Ability_Skywrath_Mage_Arcane_Bolt::~CDOTA_Ability_Skywrath_Mage_Arcane_Bolt  (line 66, @0x0000000002d2bbe0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Skywrath_Mage_Arcane_Bolt::~CDOTA_Ability_Skywrath_Mage_Arcane_Bolt(
        CDOTA_Ability_Skywrath_Mage_Arcane_Bolt *const this)
{
  this->_vptr_IHandleEntity = &off_4625C30;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Skywrath_Mage_Arcane_Bolt::~CDOTA_Ability_Skywrath_Mage_Arcane_Bolt  (line 66, @0x0000000002d2bc00, libserver.so)  // inlines: ~CDOTA_Ability_Skywrath_Mage_Arcane_Bolt
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Skywrath_Mage_Arcane_Bolt::~CDOTA_Ability_Skywrath_Mage_Arcane_Bolt(
        CDOTA_Ability_Skywrath_Mage_Arcane_Bolt *const this)
{
  this->_vptr_IHandleEntity = &off_4625C30;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Skywrath_Mage_Arcane_Bolt::Schema_DynamicBinding  (line 68, @0x0000000002d1dd50, libserver.so)
// globals: CDOTA_Ability_Skywrath_Mage_Arcane_Bolt::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Skywrath_Mage_Arcane_Bolt::Schema_DynamicBinding(
        const CDOTA_Ability_Skywrath_Mage_Arcane_Bolt *const this)
{
  return CDOTA_Ability_Skywrath_Mage_Arcane_Bolt::s_pSchemaBinding;
}


// CDOTA_Ability_Skywrath_Mage_Arcane_Bolt::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 68, @0x0000000002d1dd60, libserver.so)
// globals: CDOTA_Ability_Skywrath_Mage_Arcane_Bolt::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Skywrath_Mage_Arcane_Bolt::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Skywrath_Mage_Arcane_Bolt::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Skywrath_Mage_Arcane_Bolt::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Skywrath_Mage_Arcane_Bolt::CEntityInstanceEntityClass::DestructInstance  (line 68, @0x0000000002d1dd70, libserver.so)  // inlines: Destruct<CDOTA_Ability_Skywrath_Mage_Arcane_Bolt>
void __fastcall CDOTA_Ability_Skywrath_Mage_Arcane_Bolt::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Skywrath_Mage_Arcane_Bolt::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Skywrath_Mage_Arcane_Bolt::CEntityInstanceEntityClass::FreeInstance  (line 68, @0x0000000002d1dd90, libserver.so)
void __fastcall CDOTA_Ability_Skywrath_Mage_Arcane_Bolt::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Skywrath_Mage_Arcane_Bolt::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Skywrath_Mage_Arcane_Bolt::CEntityInstanceEntityClass::CanAllocate  (line 68, @0x0000000002d1ddb0, libserver.so)
bool __fastcall CDOTA_Ability_Skywrath_Mage_Arcane_Bolt::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Skywrath_Mage_Arcane_Bolt::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Skywrath_Mage_Arcane_Bolt::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 68, @0x0000000002d1ddc0, libserver.so)
// globals: CDOTA_Ability_Skywrath_Mage_Arcane_Bolt::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Skywrath_Mage_Arcane_Bolt::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Skywrath_Mage_Arcane_Bolt::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Skywrath_Mage_Arcane_Bolt::s_pSchemaBinding;
}


// CDOTA_Ability_Skywrath_Mage_Arcane_Bolt::CEntityInstanceEntityClass::AllocateInstance  (line 68, @0x0000000002d24790, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Skywrath_Mage_Arcane_Bolt::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Skywrath_Mage_Arcane_Bolt::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 936);
  memset(v1, 0, 0x3A8u);
  return v1;
}


// CDOTA_Ability_Skywrath_Mage_Arcane_Bolt::CEntityInstanceEntityClass::ConstructInstance  (line 68, @0x0000000002d29020, libserver.so)  // inlines: CDOTA_Ability_Skywrath_Mage_Arcane_Bolt, Construct<CDOTA_Ability_Skywrath_Mage_Arcane_Bolt>, InValidate, SndOpEventGuid_t, SoundEventGuid_t
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Skywrath_Mage_Arcane_Bolt::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Skywrath_Mage_Arcane_Bolt::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *(p + 232) = 0;
    *p = &off_4625C30;
    *(p + 233) = -1;
  }
  return p;
}


// CDOTA_Ability_Skywrath_Mage_Arcane_Bolt::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 68, @0x0000000002d34090, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Skywrath_Mage_Arcane_Bolt::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Skywrath_Mage_Arcane_Bolt::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Skywrath_Mage_Arcane_Bolt::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 68, @0x0000000002d340b0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Skywrath_Mage_Arcane_Bolt::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Skywrath_Mage_Arcane_Bolt::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Skywrath_Mage_Arcane_Bolt::GetEntityClassInternal  (line 68, @0x0000000002d480b0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_02.cpp
// strings: "skywrath_mage_arcane_bolt", "CDOTA_Ability_Skywrath_Mage_Arcane_Bolt"
// globals: `guard variable for'CDOTA_Ability_Skywrath_Mage_Arcane_Bolt::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Skywrath_Mage_Arcane_BoltClass, CDOTA_Ability_Skywrath_Mage_Arcane_Bolt::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Skywrath_Mage_Arcane_BoltClass, __dso_handle, CDOTA_Ability_Skywrath_Mage_Arcane_Bolt::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Skywrath_Mage_Arcane_Bolt::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Skywrath_Mage_Arcane_BoltClassInfo, CDOTA_Ability_Skywrath_Mage_Arcane_Bolt::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Skywrath_Mage_Arcane_BoltClassInfo
CEntityClass *__cdecl CDOTA_Ability_Skywrath_Mage_Arcane_Bolt::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Skywrath_Mage_Arcane_Bolt::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Skywrath_Mage_Arcane_BoltClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Skywrath_Mage_Arcane_Bolt::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Skywrath_Mage_Arcane_BoltClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Skywrath_Mage_Arcane_Bolt::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Skywrath_Mage_Arcane_BoltClass);
    CDOTA_Ability_Skywrath_Mage_Arcane_Bolt::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Skywrath_Mage_Arcane_BoltClass._vptr_CEntityClass = off_4625BB0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Skywrath_Mage_Arcane_Bolt::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Skywrath_Mage_Arcane_BoltClass);
    __cxa_atexit(
      CDOTA_Ability_Skywrath_Mage_Arcane_Bolt::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Skywrath_Mage_Arcane_Bolt::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Skywrath_Mage_Arcane_BoltClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Skywrath_Mage_Arcane_BoltClass != 0 )
    return &CDOTA_Ability_Skywrath_Mage_Arcane_Bolt::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Skywrath_Mage_Arcane_BoltClass;
  if ( `guard variable for'CDOTA_Ability_Skywrath_Mage_Arcane_Bolt::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Skywrath_Mage_Arcane_BoltClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Skywrath_Mage_Arcane_Bolt::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Skywrath_Mage_Arcane_BoltClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Skywrath_Mage_Arcane_Bolt::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Skywrath_Mage_Arcane_BoltClassInfo,
      "CDOTA_Ability_Skywrath_Mage_Arcane_Bolt",
      "skywrath_mage_arcane_bolt",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Skywrath_Mage_Arcane_Bolt::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Skywrath_Mage_Arcane_BoltClassInfo);
  }
  CDOTA_Ability_Skywrath_Mage_Arcane_Bolt::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Skywrath_Mage_Arcane_BoltClass.m_pClassInfo = &CDOTA_Ability_Skywrath_Mage_Arcane_Bolt::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Skywrath_Mage_Arcane_BoltClassInfo;
  CDOTA_Ability_Skywrath_Mage_Arcane_Bolt::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Skywrath_Mage_Arcane_BoltClass.m_pBaseClassInfo = CDOTA_Ability_Skywrath_Mage_Arcane_Bolt::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Skywrath_Mage_Arcane_BoltClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Skywrath_Mage_Arcane_BoltClass = &CDOTA_Ability_Skywrath_Mage_Arcane_Bolt::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Skywrath_Mage_Arcane_BoltClass;
  CDOTA_Ability_Skywrath_Mage_Arcane_Bolt::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Skywrath_Mage_Arcane_BoltClassInfo.m_pClass = &CDOTA_Ability_Skywrath_Mage_Arcane_Bolt::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Skywrath_Mage_Arcane_BoltClass;
  CDOTA_Ability_Skywrath_Mage_Arcane_Bolt::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Skywrath_Mage_Arcane_BoltClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Skywrath_Mage_Arcane_BoltClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Skywrath_Mage_Arcane_Bolt::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Skywrath_Mage_Arcane_BoltClass;
}


// CDOTA_Ability_Skywrath_Mage_Arcane_Bolt::GetIntrinsicModifierName  (line 74, @0x0000000002d1ddd0, libserver.so)
// strings: "modifier_skywrath_mage_arcane_bolt"
const char *__fastcall CDOTA_Ability_Skywrath_Mage_Arcane_Bolt::GetIntrinsicModifierName(
        CDOTA_Ability_Skywrath_Mage_Arcane_Bolt *const this)
{
  return "modifier_skywrath_mage_arcane_bolt";
}


// CDOTA_Ability_Skywrath_Mage_Arcane_Bolt::FireArcaneBolt  (line 92, @0x0000000002d03c60, libserver.so)  // inlines: CBroadcastRecipientFilter, CEntityHandle, CHandle, CPASAttenuationFilter, CPASFilter, CReliableBroadcastRecipientFilter, Color, GetEHandle, GetEntryIndex, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>, GetParent, GetSerialNumber, GetTeamNumber, InValidate, Set, StopSoundEvent, ToDOTABaseNPCHero, operator=, sTrackingProjectileCreateInfo, ~CBroadcastRecipientFilter, ~CPASAttenuationFilter, ~CPASFilter, ~CReliableBroadcastRecipientFilter
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetCaster, CDOTA_ProjectileManager::CreateTrackingProjectile, CGameSceneNode::GetOwnerEntity, CBaseEntity::GetAbsOrigin, CRecipientFilter::CRecipientFilter, CRecipientFilter::AddRecipientsByPAS, CPASAttenuationFilter::Filter, DOTA_EmitSound, CRecipientFilter::~CRecipientFilter, CRecipientFilter::AddAllPlayers (16 total)
// callers: CDOTA_Ability_Skywrath_Mage_Arcane_Bolt::OnSpellStart
// strings: "bolt_vision", "particles/units/heroes/hero_skywrath_mage/skywrath_mage_arcane_bolt.vpcf", "Hero_SkywrathMage.ArcaneBolt.Cast", "int_multiplier", "bolt_damage"
void __fastcall CDOTA_Ability_Skywrath_Mage_Arcane_Bolt::FireArcaneBolt(
        CDOTA_Ability_Skywrath_Mage_Arcane_Bolt *const this,
        CDOTA_BaseNPC *pTarget)
{
  vec_t y; // xmm0_4
  vec_t z; // xmm0_4
  CDOTA_BaseNPC *Caster; // rax
  CEntityIdentity *m_pEntity; // rdx
  __int16 v8; // cx
  CEntityIdentity *v9; // rdx
  __int16 v10; // cx
  CDOTA_BaseNPC *v11; // rax
  CDOTA_BaseNPC *v12; // r12
  CGameSceneNode *m_pParent; // rdi
  CBaseEntity *OwnerEntity; // rax
  float v15; // xmm1_4
  CSoundOpGameSystem *v16; // r14
  CDOTA_BaseNPC *v17; // rax
  float flIntDamage; // [rsp+Ch] [rbp-314h]
  float flIntDamagea; // [rsp+Ch] [rbp-314h]
  Vector vPos; // [rsp+10h] [rbp-310h] BYREF
  sTrackingProjectileCreateInfo info; // [rsp+20h] [rbp-300h] BYREF
  CPASAttenuationFilter filter; // [rsp+80h] [rbp-2A0h] BYREF
  CRecipientFilter v23; // [rsp+1C0h] [rbp-160h] BYREF
  unsigned __int64 v24; // [rsp+2F8h] [rbp-28h]

  v24 = __readfsqword(0x28u);
  this->bolt_vision = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "bolt_vision", -1, 0);
  this->vision_duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "vision_duration", -1, 0);
  info.hSource.m_Index = -1;
  info.hTarget.m_Index = -1;
  info.colorGemColor = 0;
  info.pAttackRecord = 0;
  info.vSourceLoc.x = vec3_origin.x;
  y = vec3_origin.y;
  info.iMoveSpeed = 0;
  info.vSourceLoc.y = y;
  z = vec3_origin.z;
  info.iSourceAttachment = 1;
  info.vSourceLoc.z = z;
  info.bProvidesVision = 0;
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
  info.pszEffectName = "particles/units/heroes/hero_skywrath_mage/skywrath_mage_arcane_bolt.vpcf";
  info.pAbility = this;
  info.iMoveSpeed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "bolt_speed", -1, 0);
  Caster = CDOTABaseAbility::GetCaster(this);
  if ( Caster != 0 && (m_pEntity = Caster->m_pEntity) != 0 )
  {
    v8 = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      v8 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    info.hSource.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v8 & 0x7FFF;
    if ( pTarget == 0 )
      goto LABEL_19;
  }
  else
  {
    info.hSource.m_Index = -1;
    if ( pTarget == 0 )
      goto LABEL_19;
  }
  v9 = pTarget->m_pEntity;
  if ( v9 == 0 )
  {
LABEL_19:
    info.hTarget.m_Index = -1;
    goto LABEL_10;
  }
  v10 = 0x7FFF;
  if ( v9->m_EHandle.m_Index != -1 )
    v10 = v9->m_EHandle.m_Index & 0x7FFF;
  info.hTarget.m_Index = (((v9->m_EHandle.m_Index >> 15) - (v9->m_flags & 1)) << 15) | v10 & 0x7FFF;
LABEL_10:
  info.bProvidesVision = 1;
  info.iSourceAttachment = 1;
  info.bDodgeable = 0;
  info.iVisionTeamNumber = CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value;
  info.iVisionRadius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "bolt_vision", -1, 0);
  v11 = CDOTABaseAbility::GetCaster(this);
  v12 = v11;
  if ( v11 != 0 && (v11->m_iUnitType & 1) != 0 )
  {
    flIntDamage = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "int_multiplier", -1, 0);
    flIntDamagea = flIntDamage * (*(v12->_vptr_IHandleEntity + 498))(v12);
    this->m_flDamage = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "bolt_damage", -1, 0) + flIntDamagea;
  }
  CDOTA_ProjectileManager::CreateTrackingProjectile(&g_DOTAProjectileManager, &info);
  m_pParent = this->m_pGameSceneNode->m_pParent;
  OwnerEntity = 0;
  if ( m_pParent != 0 )
    OwnerEntity = CGameSceneNode::GetOwnerEntity(m_pParent);
  vPos = *CBaseEntity::GetAbsOrigin(OwnerEntity);
  CRecipientFilter::CRecipientFilter(&filter);
  filter._vptr_IRecipientFilter = &off_3FCB190;
  CRecipientFilter::AddRecipientsByPAS(&filter, &vPos);
  filter._vptr_IRecipientFilter = &off_3FECD70;
  CPASAttenuationFilter::Filter(&filter, &vPos, 0.80000001, v15);
  v16 = g_pSoundOpGameSystem;
  if ( this->m_SoundEventGuid.m_nGuid.m_Data != 0 )
  {
    CRecipientFilter::CRecipientFilter(&v23);
    v23._vptr_IRecipientFilter = &off_3FB63F0;
    CRecipientFilter::AddAllPlayers(&v23);
    v23._vptr_IRecipientFilter = &off_3FCB130;
    CRecipientFilter::MakeReliable(&v23);
    CSoundOpGameSystem::StopSoundEvent(v16, &v23, this->m_SoundEventGuid);
    v23._vptr_IRecipientFilter = &off_3FB63F0;
    CRecipientFilter::~CRecipientFilter(&v23);
    this->m_SoundEventGuid.m_nGuid.m_Data = 0;
    this->m_SoundEventGuid.m_hStackHash = -1;
  }
  v17 = CDOTABaseAbility::GetCaster(this);
  this->m_SoundEventGuid = DOTA_EmitSound(10, "Hero_SkywrathMage.ArcaneBolt.Cast", v17);
  filter._vptr_IRecipientFilter = &off_3FCB190;
  CRecipientFilter::~CRecipientFilter(&filter);
}


// CDOTA_Ability_Skywrath_Mage_Arcane_Bolt::OnSpellStart  (line 133, @0x0000000002d04310, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetLevelSpecialValueFor<int>, GetTeamNumber, IndexToIdentity, IsValid, LookupEntity, Purge, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTABaseAbility::GetCursorTarget, CDOTA_Ability_Skywrath_Mage_Arcane_Bolt::FireArcaneBolt, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::HasScepter, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CUtlMemory<CHandle<CBaseEntity>, int>::Purge, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, _Unwind_Resume
// strings: "scepter_radius"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Ability_Skywrath_Mage_Arcane_Bolt::OnSpellStart(
        CDOTA_Ability_Skywrath_Mage_Arcane_Bolt *const this)
{
  CDOTA_BaseNPC *CursorTarget; // rax
  const CBaseEntity *v3; // rbx
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v5; // r14
  const Vector *AbsOrigin; // r15
  CDOTA_BaseNPC *v7; // rax
  int v8; // edx
  CHandle<CBaseEntity> *m_pMemory; // rax
  CEntityIdentity *v10; // rsi
  CEntityIdentity *v11; // rsi
  CEntityInstance *m_pInstance; // rsi
  CHandle<CBaseEntity> *v13; // rax
  CEntityIdentity *v14; // rcx
  CEntityIdentity *v15; // rcx
  float flRadius; // [rsp+1Ch] [rbp-54h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+20h] [rbp-50h] BYREF

  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  v3 = CursorTarget;
  if ( CursorTarget != 0 && CursorTarget->m_bIsDOTANPC )
  {
    CDOTA_Ability_Skywrath_Mage_Arcane_Bolt::FireArcaneBolt(this, CursorTarget);
    Caster = CDOTABaseAbility::GetCaster(this);
    if ( CDOTA_BaseNPC::HasScepter(Caster) )
    {
      entities.m_Size = 0;
      entities.m_Memory.m_pMemory = 0;
      entities.m_Memory.m_nAllocationCount = 0;
      entities.m_Memory.m_nGrowSize = 0;
      flRadius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "scepter_radius", -1, 0);
      v5 = CDOTABaseAbility::GetCaster(this);
      AbsOrigin = CBaseEntity::GetAbsOrigin(v3);
      v7 = CDOTABaseAbility::GetCaster(this);
      FindUnitsInRadius(v7->m_iTeamNum.m_Value, AbsOrigin, v5, flRadius, &entities, 2, 3, 384, 0, 0);
      if ( entities.m_Size <= 0 )
      {
LABEL_29:
        CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&entities);
      }
      else
      {
        v8 = 0;
        m_pMemory = entities.m_Memory.m_pMemory;
        while ( 1 )
        {
          if ( m_pMemory->m_Index + 2 > 1 )
          {
            v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(m_pMemory->m_Index) >> 9) & 0x3F];
            if ( v10 != 0 )
            {
              v11 = &v10[m_pMemory->m_Index & 0x1FF];
              if ( v11 != 0 && m_pMemory->m_Index == v11->m_EHandle.m_Index )
              {
                m_pInstance = v11->m_pInstance;
                if ( m_pInstance != 0
                  && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
                  && v3 != m_pInstance
                  && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
                {
                  break;
                }
              }
            }
          }
          ++v8;
          ++m_pMemory;
          if ( v8 == entities.m_Size )
          {
            v13 = entities.m_Memory.m_pMemory;
            while ( 1 )
            {
              if ( v13->m_Index + 2 > 1 )
              {
                v14 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v13->m_Index) >> 9) & 0x3F];
                if ( v14 != 0 )
                {
                  v15 = &v14[v13->m_Index & 0x1FF];
                  if ( v15 != 0 && v13->m_Index == v15->m_EHandle.m_Index )
                  {
                    m_pInstance = v15->m_pInstance;
                    if ( v15->m_pInstance != 0 && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 && v3 != m_pInstance )
                      goto LABEL_16;
                  }
                }
              }
              if ( ++v13 == &entities.m_Memory.m_pMemory[v8 - 1 + 1] )
                goto LABEL_29;
            }
          }
        }
LABEL_16:
        CDOTA_Ability_Skywrath_Mage_Arcane_Bolt::FireArcaneBolt(this, m_pInstance);
        CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&entities);
        if ( (entities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        {
          CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&entities.m_Memory);
          if ( (entities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
            CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&entities.m_Memory);
        }
      }
    }
  }
}


// CDOTA_Ability_Skywrath_Mage_Arcane_Bolt::OnProjectileThink  (line 178, @0x0000000002cdd570, libserver.so)  // inlines: AllocateData, CBroadcastRecipientFilter, CSosFieldData, CSosFieldDataFloat3, ClearData, GetDataPtr, Init, SetValue, ~CBroadcastRecipientFilter, ~CSosFieldData, ~CSosFieldDataFloat3
// calls: CRecipientFilter::CRecipientFilter, CRecipientFilter::AddAllPlayers, CSoundOpGameSystem::SetSoundEventParam, operator delete [], CRecipientFilter::~CRecipientFilter, operator new [], __stack_chk_fail, CSosFieldData::ClearData, _Unwind_Resume
void __fastcall CDOTA_Ability_Skywrath_Mage_Arcane_Bolt::OnProjectileThink(
        CDOTA_Ability_Skywrath_Mage_Arcane_Bolt *const this,
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


// CDOTA_Ability_Skywrath_Mage_Arcane_Bolt::OnProjectileHit  (line 201, @0x0000000002ce2cf0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeamNumber, InState, IndexToIdentity, IsInvulnerable, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CSoundOpGameSystem::StopSoundEvent, CDOTA_BaseNPC::TriggerSpellAbsorb, CDOTABaseAbility::GetCaster, ApplyDamage, DOTA_EmitSound, CBaseEntity::GetAbsOrigin, CDOTAFogOfWarSystem::AddTempViewer
// strings: "Hero_SkywrathMage.ArcaneBolt.Impact"
// globals: CEntityHandle::gm_pEntityList
__int64 __fastcall CDOTA_Ability_Skywrath_Mage_Arcane_Bolt::OnProjectileHit(
        CDOTA_Ability_Skywrath_Mage_Arcane_Bolt *const this,
        unsigned __int16 *hTarget,
        const Vector *const vLocation)
{
  int v4; // eax
  unsigned __int64 v5; // rsi
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  CDOTA_BaseNPC *m_pInstance; // r12
  unsigned __int64 m_Value; // rax
  CDOTA_BaseNPC *Caster; // rax
  const Vector *AbsOrigin; // r12
  CDOTA_BaseNPC *v13; // rax
  float flDuration; // [rsp+8h] [rbp-18h]
  float flDamage; // [rsp+Ch] [rbp-14h]
  float flDamagea; // [rsp+Ch] [rbp-14h]

  v4 = *hTarget;
  if ( (*hTarget + 2) > 1
    && (v5 = *hTarget, (v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v5 >> 9) & 0x3F]) != 0)
    && (v7 = &v6[v5 & 0x1FF]) != 0
    && v4 == v7->m_EHandle.m_Index
    && (m_pInstance = v7->m_pInstance, v7->m_pInstance != 0)
    && m_pInstance->m_bIsDOTANPC )
  {
    CSoundOpGameSystem::StopSoundEvent(g_pSoundOpGameSystem, &this->m_SoundEventGuid);
    if ( !m_pInstance->m_bIsWaitingToSpawn.m_Value )
    {
      m_Value = m_pInstance->m_nUnitState64.m_Value;
      if ( (m_Value & 0x100) == 0 && (m_Value & 0x200) == 0 && !CDOTA_BaseNPC::TriggerSpellAbsorb(m_pInstance, this, 1) )
      {
        flDamage = this->m_flDamage;
        Caster = CDOTABaseAbility::GetCaster(this);
        ApplyDamage(Caster, m_pInstance, this, flDamage, 2, 0);
        DOTA_EmitSound(10, "Hero_SkywrathMage.ArcaneBolt.Impact", m_pInstance);
        flDuration = this->vision_duration;
        flDamagea = this->bolt_vision;
        AbsOrigin = CBaseEntity::GetAbsOrigin(m_pInstance);
        v13 = CDOTABaseAbility::GetCaster(this);
        CDOTAFogOfWarSystem::AddTempViewer(
          &g_DOTAFogOfWarSystem,
          FoWViewerType_t::FOWVIEWERTYPE_FOWENTITY_TEMP,
          v13->m_iTeamNum.m_Value,
          AbsOrigin,
          flDamagea,
          flDuration,
          0);
      }
    }
  }
  else
  {
    CSoundOpGameSystem::StopSoundEvent(g_pSoundOpGameSystem, &this->m_SoundEventGuid);
  }
  return 1;
}


// CDOTA_Ability_Skywrath_Mage_Concussive_Shot::~CDOTA_Ability_Skywrath_Mage_Concussive_Shot  (line 229, @0x0000000002d2bc30, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Skywrath_Mage_Concussive_Shot::~CDOTA_Ability_Skywrath_Mage_Concussive_Shot(
        CDOTA_Ability_Skywrath_Mage_Concussive_Shot *const this)
{
  this->_vptr_IHandleEntity = &off_4626730;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Skywrath_Mage_Concussive_Shot::~CDOTA_Ability_Skywrath_Mage_Concussive_Shot  (line 229, @0x0000000002d2bc50, libserver.so)  // inlines: ~CDOTA_Ability_Skywrath_Mage_Concussive_Shot
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Skywrath_Mage_Concussive_Shot::~CDOTA_Ability_Skywrath_Mage_Concussive_Shot(
        CDOTA_Ability_Skywrath_Mage_Concussive_Shot *const this)
{
  this->_vptr_IHandleEntity = &off_4626730;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Skywrath_Mage_Concussive_Shot::Schema_DynamicBinding  (line 231, @0x0000000002d1dde0, libserver.so)
// globals: CDOTA_Ability_Skywrath_Mage_Concussive_Shot::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Skywrath_Mage_Concussive_Shot::Schema_DynamicBinding(
        const CDOTA_Ability_Skywrath_Mage_Concussive_Shot *const this)
{
  return CDOTA_Ability_Skywrath_Mage_Concussive_Shot::s_pSchemaBinding;
}


// CDOTA_Ability_Skywrath_Mage_Concussive_Shot::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 231, @0x0000000002d1ddf0, libserver.so)
// globals: CDOTA_Ability_Skywrath_Mage_Concussive_Shot::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Skywrath_Mage_Concussive_Shot::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Skywrath_Mage_Concussive_Shot::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Skywrath_Mage_Concussive_Shot::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Skywrath_Mage_Concussive_Shot::CEntityInstanceEntityClass::DestructInstance  (line 231, @0x0000000002d1de00, libserver.so)  // inlines: Destruct<CDOTA_Ability_Skywrath_Mage_Concussive_Shot>
void __fastcall CDOTA_Ability_Skywrath_Mage_Concussive_Shot::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Skywrath_Mage_Concussive_Shot::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Skywrath_Mage_Concussive_Shot::CEntityInstanceEntityClass::FreeInstance  (line 231, @0x0000000002d1de20, libserver.so)
void __fastcall CDOTA_Ability_Skywrath_Mage_Concussive_Shot::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Skywrath_Mage_Concussive_Shot::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Skywrath_Mage_Concussive_Shot::CEntityInstanceEntityClass::CanAllocate  (line 231, @0x0000000002d1de40, libserver.so)
bool __fastcall CDOTA_Ability_Skywrath_Mage_Concussive_Shot::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Skywrath_Mage_Concussive_Shot::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Skywrath_Mage_Concussive_Shot::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 231, @0x0000000002d1de50, libserver.so)
// globals: CDOTA_Ability_Skywrath_Mage_Concussive_Shot::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Skywrath_Mage_Concussive_Shot::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Skywrath_Mage_Concussive_Shot::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Skywrath_Mage_Concussive_Shot::s_pSchemaBinding;
}


// CDOTA_Ability_Skywrath_Mage_Concussive_Shot::CEntityInstanceEntityClass::AllocateInstance  (line 231, @0x0000000002d247d0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Skywrath_Mage_Concussive_Shot::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Skywrath_Mage_Concussive_Shot::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 944);
  memset(v1, 0, 0x3B0u);
  return v1;
}


// CDOTA_Ability_Skywrath_Mage_Concussive_Shot::CEntityInstanceEntityClass::ConstructInstance  (line 231, @0x0000000002d29070, libserver.so)  // inlines: CDOTA_Ability_Skywrath_Mage_Concussive_Shot, Construct<CDOTA_Ability_Skywrath_Mage_Concussive_Shot>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Skywrath_Mage_Concussive_Shot::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Skywrath_Mage_Concussive_Shot::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_4626730;
  }
  return p;
}


// CDOTA_Ability_Skywrath_Mage_Concussive_Shot::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 231, @0x0000000002d340e0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Skywrath_Mage_Concussive_Shot::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Skywrath_Mage_Concussive_Shot::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Skywrath_Mage_Concussive_Shot::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 231, @0x0000000002d34100, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Skywrath_Mage_Concussive_Shot::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Skywrath_Mage_Concussive_Shot::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Skywrath_Mage_Concussive_Shot::GetEntityClassInternal  (line 231, @0x0000000002d48200, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_02.cpp
// strings: "skywrath_mage_concussive_shot", "CDOTA_Ability_Skywrath_Mage_Concussive_Shot"
// globals: `guard variable for'CDOTA_Ability_Skywrath_Mage_Concussive_Shot::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Skywrath_Mage_Concussive_ShotClass, CDOTA_Ability_Skywrath_Mage_Concussive_Shot::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Skywrath_Mage_Concussive_ShotClass, __dso_handle, CDOTA_Ability_Skywrath_Mage_Concussive_Shot::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Skywrath_Mage_Concussive_Shot::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Skywrath_Mage_Concussive_ShotClassInfo, CDOTA_Ability_Skywrath_Mage_Concussive_Shot::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Skywrath_Mage_Concussive_ShotClassInfo
CEntityClass *__cdecl CDOTA_Ability_Skywrath_Mage_Concussive_Shot::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Skywrath_Mage_Concussive_Shot::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Skywrath_Mage_Concussive_ShotClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Skywrath_Mage_Concussive_Shot::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Skywrath_Mage_Concussive_ShotClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Skywrath_Mage_Concussive_Shot::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Skywrath_Mage_Concussive_ShotClass);
    CDOTA_Ability_Skywrath_Mage_Concussive_Shot::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Skywrath_Mage_Concussive_ShotClass._vptr_CEntityClass = off_46266B0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Skywrath_Mage_Concussive_Shot::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Skywrath_Mage_Concussive_ShotClass);
    __cxa_atexit(
      CDOTA_Ability_Skywrath_Mage_Concussive_Shot::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Skywrath_Mage_Concussive_Shot::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Skywrath_Mage_Concussive_ShotClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Skywrath_Mage_Concussive_ShotClass != 0 )
    return &CDOTA_Ability_Skywrath_Mage_Concussive_Shot::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Skywrath_Mage_Concussive_ShotClass;
  if ( `guard variable for'CDOTA_Ability_Skywrath_Mage_Concussive_Shot::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Skywrath_Mage_Concussive_ShotClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Skywrath_Mage_Concussive_Shot::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Skywrath_Mage_Concussive_ShotClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Skywrath_Mage_Concussive_Shot::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Skywrath_Mage_Concussive_ShotClassInfo,
      "CDOTA_Ability_Skywrath_Mage_Concussive_Shot",
      "skywrath_mage_concussive_shot",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Skywrath_Mage_Concussive_Shot::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Skywrath_Mage_Concussive_ShotClassInfo);
  }
  CDOTA_Ability_Skywrath_Mage_Concussive_Shot::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Skywrath_Mage_Concussive_ShotClass.m_pClassInfo = &CDOTA_Ability_Skywrath_Mage_Concussive_Shot::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Skywrath_Mage_Concussive_ShotClassInfo;
  CDOTA_Ability_Skywrath_Mage_Concussive_Shot::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Skywrath_Mage_Concussive_ShotClass.m_pBaseClassInfo = CDOTA_Ability_Skywrath_Mage_Concussive_Shot::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Skywrath_Mage_Concussive_ShotClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Skywrath_Mage_Concussive_ShotClass = &CDOTA_Ability_Skywrath_Mage_Concussive_Shot::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Skywrath_Mage_Concussive_ShotClass;
  CDOTA_Ability_Skywrath_Mage_Concussive_Shot::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Skywrath_Mage_Concussive_ShotClassInfo.m_pClass = &CDOTA_Ability_Skywrath_Mage_Concussive_Shot::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Skywrath_Mage_Concussive_ShotClass;
  CDOTA_Ability_Skywrath_Mage_Concussive_Shot::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Skywrath_Mage_Concussive_ShotClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Skywrath_Mage_Concussive_ShotClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Skywrath_Mage_Concussive_Shot::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Skywrath_Mage_Concussive_ShotClass;
}


// CDOTA_Ability_Skywrath_Mage_Concussive_Shot::FireConcussiveShot  (line 251, @0x0000000002d019a0, libserver.so)  // inlines: CEntityHandle, CHandle, Color, GetEHandle, GetEntryIndex, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>, GetSerialNumber, GetTeamNumber, Set, Vector, operator=, sTrackingProjectileCreateInfo
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetCaster, CDOTA_ProjectileManager::CreateTrackingProjectile, DOTA_EmitSound, CDOTABaseAbility::CreateAbilityParticleEffect, CBaseEntity::GetAbsOrigin, GetParticleManager, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::SetParticleControl, CDOTA_ParticleManager::ReleaseParticleIndex, __stack_chk_fail
// callers: CDOTA_Ability_Skywrath_Mage_Concussive_Shot::OnSpellStart
// strings: "slow_radius", "shot_vision", "particles/units/heroes/hero_skywrath_mage/skywrath_mage_concussive_shot.vpcf", "Hero_SkywrathMage.ConcussiveShot.Cast", "particles/units/heroes/hero_skywrath_mage/skywrath_mage_concussive_shot_cast.vpcf", "attach_hitloc"
void __fastcall CDOTA_Ability_Skywrath_Mage_Concussive_Shot::FireConcussiveShot(
        CDOTA_Ability_Skywrath_Mage_Concussive_Shot *const this,
        CDOTA_BaseNPC *pTarget)
{
  vec_t y; // xmm0_4
  vec_t z; // xmm0_4
  int speed; // eax
  CDOTA_BaseNPC *Caster; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v9; // eax
  __int16 v10; // cx
  CEntityIdentity *v11; // rdx
  __int16 v12; // cx
  CDOTA_BaseNPC *v13; // rax
  CDOTA_BaseNPC *v14; // rax
  int AbilityParticleEffect; // r13d
  CDOTA_BaseNPC *v16; // rax
  const Vector *AbsOrigin; // r14
  CDOTA_BaseNPC *v18; // r15
  CDOTA_ParticleManager *ParticleManager; // rax
  const Vector *v20; // r14
  CDOTA_ParticleManager *v21; // rax
  CDOTA_ParticleManager *v22; // rax
  CDOTA_ParticleManager *v23; // rax
  double v24; // [rsp+10h] [rbp-B0h]
  sTrackingProjectileCreateInfo info; // [rsp+20h] [rbp-A0h] BYREF
  unsigned __int64 v26; // [rsp+88h] [rbp-38h]

  v26 = __readfsqword(0x28u);
  this->speed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "speed", -1, 0);
  this->damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "damage", -1, 0);
  this->slow_duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "slow_duration", -1, 0);
  this->slow_radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "slow_radius", -1, 0);
  this->shot_vision = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "shot_vision", -1, 0);
  this->vision_duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "vision_duration", -1, 0);
  info.hSource.m_Index = -1;
  info.hTarget.m_Index = -1;
  info.bProvidesVision = 0;
  info.colorGemColor = 0;
  info.vSourceLoc.x = vec3_origin.x;
  y = vec3_origin.y;
  info.pAttackRecord = 0;
  info.vSourceLoc.y = y;
  z = vec3_origin.z;
  info.pszEffectName = "particles/units/heroes/hero_skywrath_mage/skywrath_mage_concussive_shot.vpcf";
  speed = this->speed;
  info.vSourceLoc.z = z;
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
  info.pAbility = this;
  info.iMoveSpeed = speed;
  Caster = CDOTABaseAbility::GetCaster(this);
  if ( Caster != 0 && (m_pEntity = Caster->m_pEntity) != 0 )
  {
    v9 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
    v10 = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      v10 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    info.iSourceAttachment = 3;
    info.hSource.m_Index = (v9 << 15) | v10 & 0x7FFF;
    if ( pTarget == 0 )
      goto LABEL_13;
  }
  else
  {
    info.iSourceAttachment = 3;
    info.hSource.m_Index = -1;
    if ( pTarget == 0 )
      goto LABEL_13;
  }
  v11 = pTarget->m_pEntity;
  if ( v11 == 0 )
  {
LABEL_13:
    info.hTarget.m_Index = -1;
    goto LABEL_10;
  }
  if ( v11->m_EHandle.m_Index == -1 )
    v12 = 0x7FFF;
  else
    v12 = v11->m_EHandle.m_Index & 0x7FFF;
  info.hTarget.m_Index = (((v11->m_EHandle.m_Index >> 15) - (v11->m_flags & 1)) << 15) | v12 & 0x7FFF;
LABEL_10:
  info.bProvidesVision = 1;
  info.iVisionTeamNumber = CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value;
  info.iVisionRadius = this->shot_vision;
  CDOTA_ProjectileManager::CreateTrackingProjectile(&g_DOTAProjectileManager, &info);
  v13 = CDOTABaseAbility::GetCaster(this);
  DOTA_EmitSound(10, "Hero_SkywrathMage.ConcussiveShot.Cast", v13);
  v14 = CDOTABaseAbility::GetCaster(this);
  AbilityParticleEffect = CDOTABaseAbility::CreateAbilityParticleEffect(
                            this,
                            "particles/units/heroes/hero_skywrath_mage/skywrath_mage_concussive_shot_cast.vpcf",
                            2,
                            v14,
                            0);
  v16 = CDOTABaseAbility::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v16);
  v18 = CDOTABaseAbility::GetCaster(this);
  ParticleManager = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(
    ParticleManager,
    AbilityParticleEffect,
    0,
    v18,
    5,
    "attach_hitloc",
    *AbsOrigin,
    1);
  v20 = CBaseEntity::GetAbsOrigin(pTarget);
  v21 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v21, AbilityParticleEffect, 1, pTarget, 5, "attach_hitloc", *v20, 1);
  HIDWORD(v24) = 1065353216;
  *&v24 = this->speed;
  v22 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v22, AbilityParticleEffect, 2, v24, 1.0);
  v23 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v23, AbilityParticleEffect);
}


// CDOTA_Ability_Skywrath_Mage_Concussive_Shot::OnSpellStart  (line 286, @0x0000000002d04580, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetLevelSpecialValueFor<int>, GetParent, GetTeamNumber, IndexToIdentity, IsValid, LookupEntity, Purge, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetCaster, CGameSceneNode::GetOwnerEntity, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, CEntityHandle::operator CEntityInstance*, CDOTA_BaseNPC::HasScepter, CDOTA_Ability_Skywrath_Mage_Concussive_Shot::FireConcussiveShot, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CUtlMemory<CHandle<CBaseEntity>, int>::Purge, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, CDOTABaseAbility::CreateAbilityParticleEffect (15 total)
// strings: "launch_radius", "scepter_radius", "particles/units/heroes/hero_skywrath_mage/skywrath_mage_concussive_shot_failure.vpcf"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Ability_Skywrath_Mage_Concussive_Shot::OnSpellStart(
        CDOTA_Ability_Skywrath_Mage_Concussive_Shot *const this)
{
  int LevelSpecialValue; // eax
  __m128i v3; // xmm1
  float v4; // r15d
  CDOTA_BaseNPC *Caster; // r14
  CGameSceneNode *m_pParent; // rdi
  CBaseEntity *OwnerEntity; // rdi
  const Vector *AbsOrigin; // r12
  CGameSceneNode *v9; // rdi
  CBaseEntity *v10; // rax
  CDOTA_BaseNPC *v11; // rax
  const CBaseEntity *v12; // r12
  CDOTA_BaseNPC *v13; // rax
  int v14; // eax
  CDOTA_BaseNPC *v15; // r15
  CDOTA_BaseNPC *v16; // rax
  int v17; // edx
  CHandle<CBaseEntity> *m_pMemory; // rax
  CEntityIdentity *v19; // rsi
  CEntityIdentity *v20; // rsi
  CEntityInstance *m_pInstance; // rsi
  CDOTA_BaseNPC *v22; // rax
  int AbilityParticleEffect; // r12d
  CDOTA_ParticleManager *ParticleManager; // rax
  CHandle<CBaseEntity> *v25; // rax
  CEntityIdentity *v26; // rcx
  CEntityIdentity *v27; // rcx
  float flRadius; // [rsp+24h] [rbp-7Ch]
  Vector *vPosition; // [rsp+28h] [rbp-78h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+30h] [rbp-70h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities2; // [rsp+50h] [rbp-50h] BYREF

  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "launch_radius", -1, 0);
  entities.m_Size = 0;
  *v3.m128i_i32 = LevelSpecialValue;
  this->launch_radius = LevelSpecialValue;
  entities.m_Memory.m_pMemory = 0;
  entities.m_Memory.m_nAllocationCount = 0;
  entities.m_Memory.m_nGrowSize = 0;
  v4 = COERCE_FLOAT(_mm_cvtsi128_si32(v3));
  Caster = CDOTABaseAbility::GetCaster(this);
  m_pParent = this->m_pGameSceneNode->m_pParent;
  if ( m_pParent != 0 )
    OwnerEntity = CGameSceneNode::GetOwnerEntity(m_pParent);
  else
    OwnerEntity = 0;
  AbsOrigin = CBaseEntity::GetAbsOrigin(OwnerEntity);
  v9 = this->m_pGameSceneNode->m_pParent;
  if ( v9 != 0 )
    v10 = CGameSceneNode::GetOwnerEntity(v9);
  else
    v10 = 0;
  FindUnitsInRadius(v10->m_iTeamNum.m_Value, AbsOrigin, Caster, v4, &entities, 2, 1, 139472, 1, 0);
  if ( entities.m_Size <= 0 )
  {
    v22 = CDOTABaseAbility::GetCaster(this);
    AbilityParticleEffect = CDOTABaseAbility::CreateAbilityParticleEffect(
                              this,
                              "particles/units/heroes/hero_skywrath_mage/skywrath_mage_concussive_shot_failure.vpcf",
                              1,
                              v22,
                              0);
    ParticleManager = GetParticleManager();
    CDOTA_ParticleManager::ReleaseParticleIndex(ParticleManager, AbilityParticleEffect);
  }
  else
  {
    v11 = CEntityHandle::operator CEntityInstance *(entities.m_Memory.m_pMemory);
    v12 = v11;
    if ( v11 != 0 && v11->m_bIsDOTANPC )
    {
      CDOTA_Ability_Skywrath_Mage_Concussive_Shot::FireConcussiveShot(this, v11);
      goto LABEL_9;
    }
  }
  v12 = 0;
LABEL_9:
  v13 = CDOTABaseAbility::GetCaster(this);
  if ( !CDOTA_BaseNPC::HasScepter(v13) || v12 == 0 )
  {
LABEL_28:
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&entities);
    if ( (entities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&entities.m_Memory);
      if ( (entities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&entities.m_Memory);
    }
    return;
  }
  v14 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "scepter_radius", -1, 0);
  entities2.m_Size = 0;
  entities2.m_Memory.m_pMemory = 0;
  entities2.m_Memory.m_nAllocationCount = 0;
  entities2.m_Memory.m_nGrowSize = 0;
  flRadius = v14;
  v15 = CDOTABaseAbility::GetCaster(this);
  vPosition = CBaseEntity::GetAbsOrigin(v12);
  v16 = CDOTABaseAbility::GetCaster(this);
  FindUnitsInRadius(v16->m_iTeamNum.m_Value, vPosition, v15, flRadius, &entities2, 2, 3, 384, 0, 0);
  if ( entities2.m_Size <= 0 )
  {
LABEL_27:
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&entities2);
    goto LABEL_28;
  }
  v17 = 0;
  m_pMemory = entities2.m_Memory.m_pMemory;
  while ( 1 )
  {
    if ( m_pMemory->m_Index + 2 > 1 )
    {
      v19 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(m_pMemory->m_Index) >> 9) & 0x3F];
      if ( v19 != 0 )
      {
        v20 = &v19[m_pMemory->m_Index & 0x1FF];
        if ( v20 != 0 && m_pMemory->m_Index == v20->m_EHandle.m_Index )
        {
          m_pInstance = v20->m_pInstance;
          if ( m_pInstance != 0
            && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
            && v12 != m_pInstance
            && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
          {
            break;
          }
        }
      }
    }
    ++v17;
    ++m_pMemory;
    if ( v17 == entities2.m_Size )
    {
      v25 = entities2.m_Memory.m_pMemory;
      while ( 1 )
      {
        if ( v25->m_Index + 2 > 1 )
        {
          v26 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v25->m_Index) >> 9) & 0x3F];
          if ( v26 != 0 )
          {
            v27 = &v26[v25->m_Index & 0x1FF];
            if ( v27 != 0 && v25->m_Index == v27->m_EHandle.m_Index )
            {
              m_pInstance = v27->m_pInstance;
              if ( v27->m_pInstance != 0 && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 && v12 != m_pInstance )
                goto LABEL_22;
            }
          }
        }
        if ( ++v25 == &entities2.m_Memory.m_pMemory[v17 - 1 + 1] )
          goto LABEL_27;
      }
    }
  }
LABEL_22:
  CDOTA_Ability_Skywrath_Mage_Concussive_Shot::FireConcussiveShot(this, m_pInstance);
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&entities2);
  if ( (entities2.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&entities2.m_Memory);
    if ( (entities2.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&entities2.m_Memory);
  }
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&entities);
  if ( (entities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&entities.m_Memory);
    if ( (entities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&entities.m_Memory);
  }
}


// CDOTA_Ability_Skywrath_Mage_Concussive_Shot::OnProjectileHit  (line 348, @0x0000000002cf02b0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetParent, GetTeamNumber, InState, IndexToIdentity, IsInvulnerable, IsMagicImmune, IsRealHero, IsValid, LookupEntity, ToDOTABaseNPC, ToDOTABaseNPCHero, ToDOTABaseNPCRealHero, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlVector
// calls: CEntityHandle::operator CEntityInstance*, CDOTABaseAbility::GetCaster, CBaseEntity::GetAbsOrigin, CGameSceneNode::GetOwnerEntity, FindUnitsInRadius, KeyValues::KeyValues, KeyValues::SetFloat, ApplyDamage, EconEntity_OnOwnerKillEaterEvent, CDOTA_BaseNPC::AddNewModifier, DOTA_EmitSound, CDOTAFogOfWarSystem::AddTempViewer (16 total)
// strings: "modifier_skywrath_mage_concussive_shot_slow", "Hero_SkywrathMage.ConcussiveShot.Target"
// globals: CEntityHandle::gm_pEntityList, INVALID_ITEM_DEF_INDEX
__int64 __fastcall CDOTA_Ability_Skywrath_Mage_Concussive_Shot::OnProjectileHit(
        CDOTA_Ability_Skywrath_Mage_Concussive_Shot *const this,
        const CEntityHandle *hTarget,
        const Vector *const vLocation)
{
  CEntityInstance *v4; // rax
  __m128i v5; // xmm4
  CDOTA_BaseNPC *v6; // r15
  float v7; // r12d
  CDOTA_BaseNPC *Caster; // r13
  const Vector *AbsOrigin; // rbx
  CGameSceneNode *m_pParent; // rdi
  CBaseEntity *OwnerEntity; // rax
  float v12; // xmm1_4
  __m128i v13; // xmm3
  __int64 v14; // r13
  int v15; // r12d
  CHandle<CBaseEntity> *v16; // rdx
  uint32 m_Index; // eax
  __int16 v18; // cx
  CEntityIdentity *v19; // rdx
  CEntityIdentity *v20; // rdx
  CEntityInstance *m_pInstance; // rbx
  int (**vptr_IHandleEntity)(...); // rax
  CDOTA_BaseNPC *v23; // rax
  double v24; // xmm0_8
  CDOTA_BaseNPC *v25; // rax
  CDOTA_BaseNPC_Hero *v26; // rdi
  CDOTA_BaseNPC *v27; // rax
  float vision_duration; // r12d
  float v29; // ebx
  const Vector *v30; // r13
  CDOTA_BaseNPC *v31; // rax
  float flDamagea; // [rsp+20h] [rbp-80h]
  CDOTA_BaseNPC_Hero *flDamage; // [rsp+20h] [rbp-80h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+30h] [rbp-70h] BYREF
  KeyValues kv; // [rsp+50h] [rbp-50h] BYREF
  unsigned __int64 v37; // [rsp+68h] [rbp-38h]

  v37 = __readfsqword(0x28u);
  v4 = CEntityHandle::operator CEntityInstance *(hTarget);
  v6 = v4;
  if ( v4 != 0 && BYTE3(v4[7]._vptr_IHandleEntity) != 0 )
  {
    *v5.m128i_i32 = this->slow_radius;
    entities.m_Size = 0;
    entities.m_Memory.m_pMemory = 0;
    entities.m_Memory.m_nAllocationCount = 0;
    entities.m_Memory.m_nGrowSize = 0;
    v7 = COERCE_FLOAT(_mm_cvtsi128_si32(v5));
    Caster = CDOTABaseAbility::GetCaster(this);
    AbsOrigin = CBaseEntity::GetAbsOrigin(v6);
    m_pParent = this->m_pGameSceneNode->m_pParent;
    if ( m_pParent != 0 )
      OwnerEntity = CGameSceneNode::GetOwnerEntity(m_pParent);
    else
      OwnerEntity = 0;
    FindUnitsInRadius(OwnerEntity->m_iTeamNum.m_Value, AbsOrigin, Caster, v7, &entities, 2, 3, 0, 0, 0);
    KeyValues::KeyValues(&kv, "modifier_skywrath_mage_concussive_shot_slow");
    KeyValues::SetFloat(&kv, "duration", v12);
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
                if ( v20->m_pInstance != 0 && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 )
                  break;
              }
            }
          }
          ++v15;
          ++v14;
          if ( entities.m_Size <= v15 )
            goto LABEL_32;
        }
        vptr_IHandleEntity = m_pInstance[58]._vptr_IHandleEntity;
        if ( (BYTE1(vptr_IHandleEntity) & 2) == 0
          && LOBYTE(m_pInstance[71]._vptr_IHandleEntity) == 0
          && (BYTE1(vptr_IHandleEntity) & 1) == 0 )
        {
          flDamagea = this->damage;
          v23 = CDOTABaseAbility::GetCaster(this);
          v24 = ApplyDamage(v23, m_pInstance, this, flDamagea, 2, 0);
          if ( (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0
            && LOBYTE(m_pInstance[71].m_pEntity) == 0
            && (*(m_pInstance->_vptr_IHandleEntity + 408))(m_pInstance, v24) == 0 )
          {
            if ( BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
              && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0
              && LOBYTE(m_pInstance[71].m_pEntity) == 0 )
            {
              flDamage = m_pInstance;
            }
            else
            {
              flDamage = 0;
            }
            v25 = CDOTABaseAbility::GetCaster(this);
            v26 = 0;
            if ( v25 != 0 && v25->m_bIsDOTANPC && (v25->m_iUnitType & 1) != 0 && !v25->m_bIsIllusion.m_Value )
              v26 = v25;
            EconEntity_OnOwnerKillEaterEvent(
              v26,
              flDamage,
              kill_eater_event_t::kKillEaterEventType_SkywrathMage_ConcussiveShotKills,
              1,
              INVALID_ITEM_DEF_INDEX);
          }
          v27 = CDOTABaseAbility::GetCaster(this);
          CDOTA_BaseNPC::AddNewModifier(m_pInstance, v27, this, "modifier_skywrath_mage_concussive_shot_slow", &kv, 0);
        }
        DOTA_EmitSound(10, "Hero_SkywrathMage.ConcussiveShot.Target", v6);
        ++v15;
        ++v14;
      }
      while ( entities.m_Size > v15 );
    }
LABEL_32:
    *v13.m128i_i32 = this->shot_vision;
    vision_duration = this->vision_duration;
    v29 = COERCE_FLOAT(_mm_cvtsi128_si32(v13));
    v30 = CBaseEntity::GetAbsOrigin(v6);
    v31 = CDOTABaseAbility::GetCaster(this);
    CDOTAFogOfWarSystem::AddTempViewer(
      &g_DOTAFogOfWarSystem,
      FoWViewerType_t::FOWVIEWERTYPE_FOWENTITY_TEMP,
      v31->m_iTeamNum.m_Value,
      v30,
      v29,
      vision_duration,
      0);
    KeyValues::~KeyValues(&kv);
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&entities);
  }
  return 1;
}


// CDOTA_Modifier_Skywrath_Mage_Concussive_Shot::~CDOTA_Modifier_Skywrath_Mage_Concussive_Shot  (line 390, @0x0000000002d27fd0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Skywrath_Mage_Concussive_Shot::~CDOTA_Modifier_Skywrath_Mage_Concussive_Shot(
        CDOTA_Modifier_Skywrath_Mage_Concussive_Shot *const this)
{
  this->_vptr_CDOTA_Buff = &off_46271F0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Skywrath_Mage_Concussive_Shot::~CDOTA_Modifier_Skywrath_Mage_Concussive_Shot  (line 390, @0x0000000002d27ff0, libserver.so)  // inlines: ~CDOTA_Modifier_Skywrath_Mage_Concussive_Shot
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Skywrath_Mage_Concussive_Shot::~CDOTA_Modifier_Skywrath_Mage_Concussive_Shot(
        CDOTA_Modifier_Skywrath_Mage_Concussive_Shot *const this)
{
  this->_vptr_CDOTA_Buff = &off_46271F0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Skywrath_Mage_Concussive_Shot::IsDebuff  (line 395, @0x0000000002d1de60, libserver.so)
bool __fastcall CDOTA_Modifier_Skywrath_Mage_Concussive_Shot::IsDebuff(
        CDOTA_Modifier_Skywrath_Mage_Concussive_Shot *const this)
{
  return 1;
}


// CDOTA_Modifier_Skywrath_Mage_Concussive_Shot::GetEffectName  (line 397, @0x0000000002d1de70, libserver.so)
// strings: "particles/units/heroes/hero_skywrath_mage/skywrath_mage_concussive_shot_slow_debuff.vpcf"
const char *__fastcall CDOTA_Modifier_Skywrath_Mage_Concussive_Shot::GetEffectName(
        CDOTA_Modifier_Skywrath_Mage_Concussive_Shot *const this)
{
  return "particles/units/heroes/hero_skywrath_mage/skywrath_mage_concussive_shot_slow_debuff.vpcf";
}


// CDOTA_Modifier_Skywrath_Mage_Concussive_Shot::OnCreated  (line 413, @0x0000000002d096a0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
void __fastcall CDOTA_Modifier_Skywrath_Mage_Concussive_Shot::OnCreated(
        CDOTA_Modifier_Skywrath_Mage_Concussive_Shot *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->movement_speed_pct = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "movement_speed_pct", -1, 0);
  else
    this->movement_speed_pct = 0;
}


// CDOTA_Modifier_Skywrath_Mage_Concussive_Shot::DeclareFunctions  (line 421, @0x0000000002cc9060, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Skywrath_Mage_Concussive_Shot::GetModifierMoveSpeedBonus_Percentage(CModifierParams const&)
void __fastcall CDOTA_Modifier_Skywrath_Mage_Concussive_Shot::DeclareFunctions(
        CDOTA_Modifier_Skywrath_Mage_Concussive_Shot *const this)
{
  this->m_Functions[13].__pfn = CDOTA_Modifier_Skywrath_Mage_Concussive_Shot::GetModifierMoveSpeedBonus_Percentage;
  this->m_Functions[13].__delta = 0;
}


// CDOTA_Modifier_Skywrath_Mage_Concussive_Shot::GetModifierMoveSpeedBonus_Percentage  (line 428, @0x0000000002cc9080, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Skywrath_Mage_Concussive_Shot::GetModifierMoveSpeedBonus_Percentage(
        CDOTA_Modifier_Skywrath_Mage_Concussive_Shot *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  result.m_szVal = 0;
  *v2.m128i_i32 = -this->movement_speed_pct;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Ability_Skywrath_Mage_Ancient_Seal::~CDOTA_Ability_Skywrath_Mage_Ancient_Seal  (line 439, @0x0000000002d2bc80, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Skywrath_Mage_Ancient_Seal::~CDOTA_Ability_Skywrath_Mage_Ancient_Seal(
        CDOTA_Ability_Skywrath_Mage_Ancient_Seal *const this)
{
  this->_vptr_IHandleEntity = &off_4627550;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Skywrath_Mage_Ancient_Seal::~CDOTA_Ability_Skywrath_Mage_Ancient_Seal  (line 439, @0x0000000002d2bca0, libserver.so)  // inlines: ~CDOTA_Ability_Skywrath_Mage_Ancient_Seal
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Skywrath_Mage_Ancient_Seal::~CDOTA_Ability_Skywrath_Mage_Ancient_Seal(
        CDOTA_Ability_Skywrath_Mage_Ancient_Seal *const this)
{
  this->_vptr_IHandleEntity = &off_4627550;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Skywrath_Mage_Ancient_Seal::Schema_DynamicBinding  (line 441, @0x0000000002d1de80, libserver.so)
// globals: CDOTA_Ability_Skywrath_Mage_Ancient_Seal::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Skywrath_Mage_Ancient_Seal::Schema_DynamicBinding(
        const CDOTA_Ability_Skywrath_Mage_Ancient_Seal *const this)
{
  return CDOTA_Ability_Skywrath_Mage_Ancient_Seal::s_pSchemaBinding;
}


// CDOTA_Ability_Skywrath_Mage_Ancient_Seal::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 441, @0x0000000002d1de90, libserver.so)
// globals: CDOTA_Ability_Skywrath_Mage_Ancient_Seal::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Skywrath_Mage_Ancient_Seal::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Skywrath_Mage_Ancient_Seal::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Skywrath_Mage_Ancient_Seal::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Skywrath_Mage_Ancient_Seal::CEntityInstanceEntityClass::DestructInstance  (line 441, @0x0000000002d1dea0, libserver.so)  // inlines: Destruct<CDOTA_Ability_Skywrath_Mage_Ancient_Seal>
void __fastcall CDOTA_Ability_Skywrath_Mage_Ancient_Seal::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Skywrath_Mage_Ancient_Seal::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Skywrath_Mage_Ancient_Seal::CEntityInstanceEntityClass::FreeInstance  (line 441, @0x0000000002d1dec0, libserver.so)
void __fastcall CDOTA_Ability_Skywrath_Mage_Ancient_Seal::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Skywrath_Mage_Ancient_Seal::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Skywrath_Mage_Ancient_Seal::CEntityInstanceEntityClass::CanAllocate  (line 441, @0x0000000002d1dee0, libserver.so)
bool __fastcall CDOTA_Ability_Skywrath_Mage_Ancient_Seal::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Skywrath_Mage_Ancient_Seal::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Skywrath_Mage_Ancient_Seal::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 441, @0x0000000002d1def0, libserver.so)
// globals: CDOTA_Ability_Skywrath_Mage_Ancient_Seal::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Skywrath_Mage_Ancient_Seal::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Skywrath_Mage_Ancient_Seal::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Skywrath_Mage_Ancient_Seal::s_pSchemaBinding;
}


// CDOTA_Ability_Skywrath_Mage_Ancient_Seal::CEntityInstanceEntityClass::AllocateInstance  (line 441, @0x0000000002d24810, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Skywrath_Mage_Ancient_Seal::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Skywrath_Mage_Ancient_Seal::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Skywrath_Mage_Ancient_Seal::CEntityInstanceEntityClass::ConstructInstance  (line 441, @0x0000000002d290a0, libserver.so)  // inlines: CDOTA_Ability_Skywrath_Mage_Ancient_Seal, Construct<CDOTA_Ability_Skywrath_Mage_Ancient_Seal>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Skywrath_Mage_Ancient_Seal::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Skywrath_Mage_Ancient_Seal::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_4627550;
  }
  return p;
}


// CDOTA_Ability_Skywrath_Mage_Ancient_Seal::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 441, @0x0000000002d34130, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Skywrath_Mage_Ancient_Seal::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Skywrath_Mage_Ancient_Seal::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Skywrath_Mage_Ancient_Seal::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 441, @0x0000000002d34150, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Skywrath_Mage_Ancient_Seal::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Skywrath_Mage_Ancient_Seal::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Skywrath_Mage_Ancient_Seal::GetEntityClassInternal  (line 441, @0x0000000002d48350, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_02.cpp
// strings: "skywrath_mage_ancient_seal", "CDOTA_Ability_Skywrath_Mage_Ancient_Seal"
// globals: `guard variable for'CDOTA_Ability_Skywrath_Mage_Ancient_Seal::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Skywrath_Mage_Ancient_SealClass, CDOTA_Ability_Skywrath_Mage_Ancient_Seal::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Skywrath_Mage_Ancient_SealClass, __dso_handle, CDOTA_Ability_Skywrath_Mage_Ancient_Seal::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Skywrath_Mage_Ancient_Seal::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Skywrath_Mage_Ancient_SealClassInfo, CDOTA_Ability_Skywrath_Mage_Ancient_Seal::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Skywrath_Mage_Ancient_SealClassInfo
CEntityClass *__cdecl CDOTA_Ability_Skywrath_Mage_Ancient_Seal::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Skywrath_Mage_Ancient_Seal::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Skywrath_Mage_Ancient_SealClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Skywrath_Mage_Ancient_Seal::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Skywrath_Mage_Ancient_SealClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Skywrath_Mage_Ancient_Seal::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Skywrath_Mage_Ancient_SealClass);
    CDOTA_Ability_Skywrath_Mage_Ancient_Seal::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Skywrath_Mage_Ancient_SealClass._vptr_CEntityClass = off_46274D0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Skywrath_Mage_Ancient_Seal::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Skywrath_Mage_Ancient_SealClass);
    __cxa_atexit(
      CDOTA_Ability_Skywrath_Mage_Ancient_Seal::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Skywrath_Mage_Ancient_Seal::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Skywrath_Mage_Ancient_SealClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Skywrath_Mage_Ancient_SealClass != 0 )
    return &CDOTA_Ability_Skywrath_Mage_Ancient_Seal::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Skywrath_Mage_Ancient_SealClass;
  if ( `guard variable for'CDOTA_Ability_Skywrath_Mage_Ancient_Seal::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Skywrath_Mage_Ancient_SealClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Skywrath_Mage_Ancient_Seal::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Skywrath_Mage_Ancient_SealClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Skywrath_Mage_Ancient_Seal::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Skywrath_Mage_Ancient_SealClassInfo,
      "CDOTA_Ability_Skywrath_Mage_Ancient_Seal",
      "skywrath_mage_ancient_seal",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Skywrath_Mage_Ancient_Seal::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Skywrath_Mage_Ancient_SealClassInfo);
  }
  CDOTA_Ability_Skywrath_Mage_Ancient_Seal::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Skywrath_Mage_Ancient_SealClass.m_pClassInfo = &CDOTA_Ability_Skywrath_Mage_Ancient_Seal::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Skywrath_Mage_Ancient_SealClassInfo;
  CDOTA_Ability_Skywrath_Mage_Ancient_Seal::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Skywrath_Mage_Ancient_SealClass.m_pBaseClassInfo = CDOTA_Ability_Skywrath_Mage_Ancient_Seal::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Skywrath_Mage_Ancient_SealClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Skywrath_Mage_Ancient_SealClass = &CDOTA_Ability_Skywrath_Mage_Ancient_Seal::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Skywrath_Mage_Ancient_SealClass;
  CDOTA_Ability_Skywrath_Mage_Ancient_Seal::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Skywrath_Mage_Ancient_SealClassInfo.m_pClass = &CDOTA_Ability_Skywrath_Mage_Ancient_Seal::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Skywrath_Mage_Ancient_SealClass;
  CDOTA_Ability_Skywrath_Mage_Ancient_Seal::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Skywrath_Mage_Ancient_SealClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Skywrath_Mage_Ancient_SealClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Skywrath_Mage_Ancient_Seal::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Skywrath_Mage_Ancient_SealClass;
}


// CDOTA_Ability_Skywrath_Mage_Ancient_Seal::YouForgotToImplementOrDeclareServerClass  (line 450, @0x0000000002cc90a0, libserver.so)
int __fastcall CDOTA_Ability_Skywrath_Mage_Ancient_Seal::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Skywrath_Mage_Ancient_Seal *const this)
{
  return 0;
}


// CDOTA_Ability_Skywrath_Mage_Ancient_Seal::GetServerClass  (line 450, @0x0000000002cdeb70, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Skywrath_Mage_Ancient_Seal::GetServerClass(
        CDOTA_Ability_Skywrath_Mage_Ancient_Seal *const this)
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


// CDOTA_Ability_Skywrath_Mage_Ancient_Seal::GetCooldown  (line 459, @0x0000000002cfea10, libserver.so)
// calls: CDOTABaseAbility::GetCooldown, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "special_bonus_unique_skywrath"
float __fastcall CDOTA_Ability_Skywrath_Mage_Ancient_Seal::GetCooldown(
        CDOTA_Ability_Skywrath_Mage_Ancient_Seal *const this,
        int iLevel)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  float result; // xmm0_4
  float flCooldown; // [rsp+Ch] [rbp-14h]

  flCooldown = CDOTABaseAbility::GetCooldown(this, iLevel);
  Caster = CDOTABaseAbility::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "special_bonus_unique_skywrath", 0);
  result = flCooldown;
  if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
    return flCooldown - CDOTABaseAbility::GetLevelSpecialValueFor<int>(AbilityByName, "value", 1, 1);
  return result;
}


// CDOTA_Ability_Skywrath_Mage_Ancient_Seal::OnSpellStart  (line 474, @0x0000000002d049e0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetLevelSpecialValueFor<int>, GetTeamNumber, InState, IndexToIdentity, IsInvulnerable, IsValid, LookupEntity, Purge, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTABaseAbility::GetCursorTarget, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::HasScepter, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, KeyValues::KeyValues, CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::SetFloat, CDOTA_BaseNPC::AddNewModifier, DOTA_EmitSound, KeyValues::~KeyValues (18 total)
// strings: "scepter_radius", "modifier_skywrath_mage_ancient_seal", "seal_duration", "Hero_SkywrathMage.AncientSeal.Target"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Ability_Skywrath_Mage_Ancient_Seal::OnSpellStart(
        CDOTA_Ability_Skywrath_Mage_Ancient_Seal *const this)
{
  CBaseEntity *CursorTarget; // rax
  CDOTA_BaseNPC *v3; // rbx
  __int64 v4; // rax
  CDOTA_BaseNPC *v5; // rax
  CDOTA_BaseNPC *v6; // r14
  const Vector *AbsOrigin; // r15
  CDOTA_BaseNPC *v8; // rax
  int v9; // edx
  CHandle<CBaseEntity> *m_pMemory; // rax
  CEntityIdentity *v11; // rsi
  CEntityIdentity *v12; // rsi
  CEntityInstance *m_pInstance; // r14
  float v14; // xmm1_4
  CDOTA_BaseNPC *v15; // rax
  CHandle<CBaseEntity> *v16; // rax
  CEntityIdentity *v17; // rcx
  CEntityIdentity *v18; // rcx
  float v19; // xmm1_4
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v21; // rax
  float flRadius; // [rsp+1Ch] [rbp-74h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+20h] [rbp-70h] BYREF
  KeyValues kv; // [rsp+40h] [rbp-50h] BYREF
  unsigned __int64 v25; // [rsp+58h] [rbp-38h]

  v25 = __readfsqword(0x28u);
  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  v3 = CursorTarget;
  if ( CursorTarget != 0 && CursorTarget->m_bIsDOTANPC )
  {
    if ( LOBYTE(CursorTarget[4].m_pfnMoveDone.__pfn) == 0 )
    {
      v4 = *&CursorTarget[3].m_vecVelocity.m_Value.x;
      if ( (v4 & 0x100) == 0 && (v4 & 0x200) == 0 && !CDOTA_BaseNPC::TriggerSpellAbsorb(v3, this, 1) )
      {
        KeyValues::KeyValues(&kv, "modifier_skywrath_mage_ancient_seal");
        CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "seal_duration", -1, 0);
        KeyValues::SetFloat(&kv, "duration", v19);
        Caster = CDOTABaseAbility::GetCaster(this);
        CDOTA_BaseNPC::AddNewModifier(v3, Caster, this, "modifier_skywrath_mage_ancient_seal", &kv, 0);
        DOTA_EmitSound(10, "Hero_SkywrathMage.AncientSeal.Target", v3);
        KeyValues::~KeyValues(&kv);
      }
    }
    v5 = CDOTABaseAbility::GetCaster(this);
    if ( CDOTA_BaseNPC::HasScepter(v5) )
    {
      entities.m_Size = 0;
      entities.m_Memory.m_pMemory = 0;
      entities.m_Memory.m_nAllocationCount = 0;
      entities.m_Memory.m_nGrowSize = 0;
      flRadius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "scepter_radius", -1, 0);
      v6 = CDOTABaseAbility::GetCaster(this);
      AbsOrigin = CBaseEntity::GetAbsOrigin(v3);
      v8 = CDOTABaseAbility::GetCaster(this);
      FindUnitsInRadius(v8->m_iTeamNum.m_Value, AbsOrigin, v6, flRadius, &entities, 2, 3, 384, 0, 0);
      if ( entities.m_Size <= 0 )
      {
LABEL_34:
        CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&entities);
      }
      else
      {
        v9 = 0;
        m_pMemory = entities.m_Memory.m_pMemory;
        while ( 1 )
        {
          if ( m_pMemory->m_Index + 2 > 1 )
          {
            v11 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(m_pMemory->m_Index) >> 9) & 0x3F];
            if ( v11 != 0 )
            {
              v12 = &v11[m_pMemory->m_Index & 0x1FF];
              if ( v12 != 0 && m_pMemory->m_Index == v12->m_EHandle.m_Index )
              {
                m_pInstance = v12->m_pInstance;
                if ( v12->m_pInstance != 0
                  && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
                  && v3 != m_pInstance
                  && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
                {
                  break;
                }
              }
            }
          }
          ++v9;
          ++m_pMemory;
          if ( v9 == entities.m_Size )
          {
            v16 = entities.m_Memory.m_pMemory;
            while ( 1 )
            {
              if ( v16->m_Index + 2 > 1 )
              {
                v17 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v16->m_Index) >> 9) & 0x3F];
                if ( v17 != 0 )
                {
                  v18 = &v17[v16->m_Index & 0x1FF];
                  if ( v18 != 0 && v16->m_Index == v18->m_EHandle.m_Index )
                  {
                    m_pInstance = v18->m_pInstance;
                    if ( v18->m_pInstance != 0 && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 && v3 != m_pInstance )
                      goto LABEL_18;
                  }
                }
              }
              if ( ++v16 == &entities.m_Memory.m_pMemory[v9 - 1 + 1] )
                goto LABEL_34;
            }
          }
        }
LABEL_18:
        KeyValues::KeyValues(&kv, "modifier_skywrath_mage_ancient_seal");
        CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "seal_duration", -1, 0);
        KeyValues::SetFloat(&kv, "duration", v14);
        v15 = CDOTABaseAbility::GetCaster(this);
        CDOTA_BaseNPC::AddNewModifier(m_pInstance, v15, this, "modifier_skywrath_mage_ancient_seal", &kv, 0);
        DOTA_EmitSound(10, "Hero_SkywrathMage.AncientSeal.Target", m_pInstance);
        KeyValues::~KeyValues(&kv);
        CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&entities);
        if ( (entities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        {
          CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&entities.m_Memory);
          if ( (entities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
            CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&entities.m_Memory);
        }
      }
    }
  }
  else
  {
    v21 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::HasScepter(v21);
  }
}


// CDOTA_Modifier_Skywrath_Mage_Ancient_Seal::~CDOTA_Modifier_Skywrath_Mage_Ancient_Seal  (line 528, @0x0000000002d27f80, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Skywrath_Mage_Ancient_Seal::~CDOTA_Modifier_Skywrath_Mage_Ancient_Seal(
        CDOTA_Modifier_Skywrath_Mage_Ancient_Seal *const this)
{
  this->_vptr_CDOTA_Buff = &off_4628010;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Skywrath_Mage_Ancient_Seal::~CDOTA_Modifier_Skywrath_Mage_Ancient_Seal  (line 528, @0x0000000002d27fa0, libserver.so)  // inlines: ~CDOTA_Modifier_Skywrath_Mage_Ancient_Seal
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Skywrath_Mage_Ancient_Seal::~CDOTA_Modifier_Skywrath_Mage_Ancient_Seal(
        CDOTA_Modifier_Skywrath_Mage_Ancient_Seal *const this)
{
  this->_vptr_CDOTA_Buff = &off_4628010;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Skywrath_Mage_Ancient_Seal::IsDebuff  (line 533, @0x0000000002d1df00, libserver.so)
bool __fastcall CDOTA_Modifier_Skywrath_Mage_Ancient_Seal::IsDebuff(
        CDOTA_Modifier_Skywrath_Mage_Ancient_Seal *const this)
{
  return 1;
}


// CDOTA_Modifier_Skywrath_Mage_Ancient_Seal::OnCreated  (line 555, @0x0000000002d0ab40, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Buff::GetParent, CDOTA_Buff::CreateBuffParticleEffect, GetParticleManager, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_Buff::AddParticle
// strings: "resist_debuff", "particles/units/heroes/hero_skywrath_mage/skywrath_mage_ancient_seal_debuff.vpcf"
void __fastcall CDOTA_Modifier_Skywrath_Mage_Ancient_Seal::OnCreated(
        CDOTA_Modifier_Skywrath_Mage_Ancient_Seal *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTA_BaseNPC *Parent; // rax
  int BuffParticleEffect; // r12d
  CDOTA_BaseNPC *v6; // r13
  CDOTA_ParticleManager *ParticleManager; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->resist_debuff = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "resist_debuff", -1, 0);
  else
    this->resist_debuff = 0;
  Parent = CDOTA_Buff::GetParent(this);
  BuffParticleEffect = CDOTA_Buff::CreateBuffParticleEffect(
                         this,
                         "particles/units/heroes/hero_skywrath_mage/skywrath_mage_ancient_seal_debuff.vpcf",
                         7,
                         Parent,
                         0);
  v6 = CDOTA_Buff::GetParent(this);
  ParticleManager = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(ParticleManager, BuffParticleEffect, 1, v6, 1, 0, vec3_invalid, 1);
  CDOTA_Buff::AddParticle(this, BuffParticleEffect, 0, 0, -1, 0, 1);
}


// CDOTA_Modifier_Skywrath_Mage_Ancient_Seal::DeclareFunctions  (line 566, @0x0000000002cc90b0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Skywrath_Mage_Ancient_Seal::GetModifierMagicalResistanceBonus(CModifierParams const&), CDOTA_Modifier_Skywrath_Mage_Ancient_Seal::OnHeroKilled(CModifierParams const&)
void __fastcall CDOTA_Modifier_Skywrath_Mage_Ancient_Seal::DeclareFunctions(
        CDOTA_Modifier_Skywrath_Mage_Ancient_Seal *const this)
{
  this->m_Functions[49].__pfn = CDOTA_Modifier_Skywrath_Mage_Ancient_Seal::GetModifierMagicalResistanceBonus;
  this->m_Functions[49].__delta = 0;
  this->m_Functions[147].__delta = 0;
  this->m_Functions[147].__pfn = CDOTA_Modifier_Skywrath_Mage_Ancient_Seal::OnHeroKilled;
}


// CDOTA_Modifier_Skywrath_Mage_Ancient_Seal::GetModifierMagicalResistanceBonus  (line 577, @0x0000000002cd2520, libserver.so)
// calls: CDOTA_Buff::GetParent
ModifierVariant_t __fastcall CDOTA_Modifier_Skywrath_Mage_Ancient_Seal::GetModifierMagicalResistanceBonus(
        CDOTA_Modifier_Skywrath_Mage_Ancient_Seal *const this,
        const CModifierParams *const params)
{
  __m128i v3; // xmm0
  ModifierVariant_t result; // 0:rax.16

  if ( CDOTA_Buff::GetParent(this) == 0
    || (result.m_szVal = CDOTA_Buff::GetParent(this), *&result.m_eType = 1, (result.m_szVal[2088] & 1) != 0) )
  {
    *v3.m128i_i32 = this->resist_debuff;
    result.m_szVal = 0;
    *&result.m_eType = (_mm_cvtsi128_si32(v3) << 32) | 1;
  }
  else
  {
    result.m_szVal = 0;
  }
  return result;
}


// CDOTA_Modifier_Skywrath_Mage_Ancient_Seal::OnHeroKilled  (line 589, @0x0000000002cdeee0, libserver.so)  // inlines: Attacker, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, Target, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CEntityHandle::operator CEntityInstance*, CDOTA_Buff::GetCaster, EconEntity_OnOwnerKillEaterEvent
// globals: CEntityHandle::gm_pEntityList, INVALID_ITEM_DEF_INDEX
ModifierVariant_t __fastcall CDOTA_Modifier_Skywrath_Mage_Ancient_Seal::OnHeroKilled(
        CDOTA_Modifier_Skywrath_Mage_Ancient_Seal *const this,
        const CModifierParams *const params)
{
  CDOTA_BaseNPC *m_pInstance; // r13
  uint32 m_Index; // eax
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  CDOTA_BaseNPC *v9; // r13
  uint32 v10; // ecx
  CEntityIdentity *v11; // rax
  CEntityIdentity *v12; // rax
  CEntityInstance *v13; // rsi
  uint32 v14; // eax
  CEntityIdentity *v15; // rdx
  CEntityIdentity *v16; // rdx
  CEntityInstance *v17; // rdi

  m_pInstance = 0;
  m_Index = params->htarget.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->htarget.m_Index) >> 9) & 0x3F];
    if ( v6 != 0 )
    {
      v7 = &v6[params->htarget.m_Index & 0x1FF];
      if ( v7 != 0 && m_Index == v7->m_EHandle.m_Index )
        m_pInstance = v7->m_pInstance;
    }
  }
  if ( CDOTA_Buff::GetParent(this) == m_pInstance )
  {
    v9 = CEntityHandle::operator CEntityInstance *(&params->hattacker);
    if ( CDOTA_Buff::GetCaster(this) == v9 )
    {
      v10 = params->htarget.m_Index;
      if ( v10 + 2 <= 1
        || (v11 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->htarget.m_Index) >> 9) & 0x3F]) == 0
        || (v12 = &v11[params->htarget.m_Index & 0x1FF]) == 0
        || v10 != v12->m_EHandle.m_Index
        || (v13 = v12->m_pInstance, v12->m_pInstance == 0)
        || BYTE3(v13[7]._vptr_IHandleEntity) == 0
        || (v13[43].m_iszPrivateVScripts.u.m_Id & 1) == 0 )
      {
        v13 = 0;
      }
      v14 = params->hattacker.m_Index;
      if ( v14 + 2 <= 1
        || (v15 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F]) == 0
        || (v16 = &v15[params->hattacker.m_Index & 0x1FF]) == 0
        || v14 != v16->m_EHandle.m_Index
        || (v17 = v16->m_pInstance, v16->m_pInstance == 0)
        || BYTE3(v17[7]._vptr_IHandleEntity) == 0
        || (v17[43].m_iszPrivateVScripts.u.m_Id & 1) == 0 )
      {
        v17 = 0;
      }
      EconEntity_OnOwnerKillEaterEvent(
        v17,
        v13,
        kill_eater_event_t::kKillEaterEventType_SkywrathMage_AncientSealKills,
        1,
        INVALID_ITEM_DEF_INDEX);
    }
  }
  return 1uLL;
}


// CDOTA_Modifier_Skywrath_Mage_Ancient_Seal::CheckState  (line 601, @0x0000000002cc90f0, libserver.so)  // inlines: Enable
void __fastcall CDOTA_Modifier_Skywrath_Mage_Ancient_Seal::CheckState(
        CDOTA_Modifier_Skywrath_Mage_Ancient_Seal *const this,
        CDOTABuffState *const buffState)
{
  buffState->m_nEnabledStateMask |= 8uLL;
  buffState->m_nDisabledStateMask &= ~8uLL;
}


// CDOTA_Ability_Skywrath_Mage_Mystic_Flare::~CDOTA_Ability_Skywrath_Mage_Mystic_Flare  (line 614, @0x0000000002d2bcd0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Skywrath_Mage_Mystic_Flare::~CDOTA_Ability_Skywrath_Mage_Mystic_Flare(
        CDOTA_Ability_Skywrath_Mage_Mystic_Flare *const this)
{
  this->_vptr_IHandleEntity = &off_4628370;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Skywrath_Mage_Mystic_Flare::~CDOTA_Ability_Skywrath_Mage_Mystic_Flare  (line 614, @0x0000000002d2bcf0, libserver.so)  // inlines: ~CDOTA_Ability_Skywrath_Mage_Mystic_Flare
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Skywrath_Mage_Mystic_Flare::~CDOTA_Ability_Skywrath_Mage_Mystic_Flare(
        CDOTA_Ability_Skywrath_Mage_Mystic_Flare *const this)
{
  this->_vptr_IHandleEntity = &off_4628370;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Skywrath_Mage_Mystic_Flare::Schema_DynamicBinding  (line 616, @0x0000000002d1df10, libserver.so)
// globals: CDOTA_Ability_Skywrath_Mage_Mystic_Flare::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Skywrath_Mage_Mystic_Flare::Schema_DynamicBinding(
        const CDOTA_Ability_Skywrath_Mage_Mystic_Flare *const this)
{
  return CDOTA_Ability_Skywrath_Mage_Mystic_Flare::s_pSchemaBinding;
}


// CDOTA_Ability_Skywrath_Mage_Mystic_Flare::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 616, @0x0000000002d1df20, libserver.so)
// globals: CDOTA_Ability_Skywrath_Mage_Mystic_Flare::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Skywrath_Mage_Mystic_Flare::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Skywrath_Mage_Mystic_Flare::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Skywrath_Mage_Mystic_Flare::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Skywrath_Mage_Mystic_Flare::CEntityInstanceEntityClass::DestructInstance  (line 616, @0x0000000002d1df30, libserver.so)  // inlines: Destruct<CDOTA_Ability_Skywrath_Mage_Mystic_Flare>
void __fastcall CDOTA_Ability_Skywrath_Mage_Mystic_Flare::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Skywrath_Mage_Mystic_Flare::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Skywrath_Mage_Mystic_Flare::CEntityInstanceEntityClass::FreeInstance  (line 616, @0x0000000002d1df50, libserver.so)
void __fastcall CDOTA_Ability_Skywrath_Mage_Mystic_Flare::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Skywrath_Mage_Mystic_Flare::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Skywrath_Mage_Mystic_Flare::CEntityInstanceEntityClass::CanAllocate  (line 616, @0x0000000002d1df70, libserver.so)
bool __fastcall CDOTA_Ability_Skywrath_Mage_Mystic_Flare::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Skywrath_Mage_Mystic_Flare::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Skywrath_Mage_Mystic_Flare::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 616, @0x0000000002d1df80, libserver.so)
// globals: CDOTA_Ability_Skywrath_Mage_Mystic_Flare::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Skywrath_Mage_Mystic_Flare::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Skywrath_Mage_Mystic_Flare::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Skywrath_Mage_Mystic_Flare::s_pSchemaBinding;
}


// CDOTA_Ability_Skywrath_Mage_Mystic_Flare::CEntityInstanceEntityClass::AllocateInstance  (line 616, @0x0000000002d24850, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Skywrath_Mage_Mystic_Flare::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Skywrath_Mage_Mystic_Flare::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Skywrath_Mage_Mystic_Flare::CEntityInstanceEntityClass::ConstructInstance  (line 616, @0x0000000002d290d0, libserver.so)  // inlines: CDOTA_Ability_Skywrath_Mage_Mystic_Flare, Construct<CDOTA_Ability_Skywrath_Mage_Mystic_Flare>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Skywrath_Mage_Mystic_Flare::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Skywrath_Mage_Mystic_Flare::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_4628370;
  }
  return p;
}


// CDOTA_Ability_Skywrath_Mage_Mystic_Flare::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 616, @0x0000000002d34180, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Skywrath_Mage_Mystic_Flare::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Skywrath_Mage_Mystic_Flare::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Skywrath_Mage_Mystic_Flare::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 616, @0x0000000002d341a0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Skywrath_Mage_Mystic_Flare::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Skywrath_Mage_Mystic_Flare::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Skywrath_Mage_Mystic_Flare::GetEntityClassInternal  (line 616, @0x0000000002d484a0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_02.cpp
// strings: "skywrath_mage_mystic_flare", "CDOTA_Ability_Skywrath_Mage_Mystic_Flare"
// globals: `guard variable for'CDOTA_Ability_Skywrath_Mage_Mystic_Flare::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Skywrath_Mage_Mystic_FlareClass, CDOTA_Ability_Skywrath_Mage_Mystic_Flare::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Skywrath_Mage_Mystic_FlareClass, __dso_handle, CDOTA_Ability_Skywrath_Mage_Mystic_Flare::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Skywrath_Mage_Mystic_Flare::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Skywrath_Mage_Mystic_FlareClassInfo, CDOTA_Ability_Skywrath_Mage_Mystic_Flare::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Skywrath_Mage_Mystic_FlareClassInfo
CEntityClass *__cdecl CDOTA_Ability_Skywrath_Mage_Mystic_Flare::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Skywrath_Mage_Mystic_Flare::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Skywrath_Mage_Mystic_FlareClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Skywrath_Mage_Mystic_Flare::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Skywrath_Mage_Mystic_FlareClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Skywrath_Mage_Mystic_Flare::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Skywrath_Mage_Mystic_FlareClass);
    CDOTA_Ability_Skywrath_Mage_Mystic_Flare::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Skywrath_Mage_Mystic_FlareClass._vptr_CEntityClass = off_46282F0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Skywrath_Mage_Mystic_Flare::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Skywrath_Mage_Mystic_FlareClass);
    __cxa_atexit(
      CDOTA_Ability_Skywrath_Mage_Mystic_Flare::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Skywrath_Mage_Mystic_Flare::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Skywrath_Mage_Mystic_FlareClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Skywrath_Mage_Mystic_FlareClass != 0 )
    return &CDOTA_Ability_Skywrath_Mage_Mystic_Flare::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Skywrath_Mage_Mystic_FlareClass;
  if ( `guard variable for'CDOTA_Ability_Skywrath_Mage_Mystic_Flare::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Skywrath_Mage_Mystic_FlareClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Skywrath_Mage_Mystic_Flare::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Skywrath_Mage_Mystic_FlareClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Skywrath_Mage_Mystic_Flare::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Skywrath_Mage_Mystic_FlareClassInfo,
      "CDOTA_Ability_Skywrath_Mage_Mystic_Flare",
      "skywrath_mage_mystic_flare",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Skywrath_Mage_Mystic_Flare::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Skywrath_Mage_Mystic_FlareClassInfo);
  }
  CDOTA_Ability_Skywrath_Mage_Mystic_Flare::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Skywrath_Mage_Mystic_FlareClass.m_pClassInfo = &CDOTA_Ability_Skywrath_Mage_Mystic_Flare::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Skywrath_Mage_Mystic_FlareClassInfo;
  CDOTA_Ability_Skywrath_Mage_Mystic_Flare::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Skywrath_Mage_Mystic_FlareClass.m_pBaseClassInfo = CDOTA_Ability_Skywrath_Mage_Mystic_Flare::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Skywrath_Mage_Mystic_FlareClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Skywrath_Mage_Mystic_FlareClass = &CDOTA_Ability_Skywrath_Mage_Mystic_Flare::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Skywrath_Mage_Mystic_FlareClass;
  CDOTA_Ability_Skywrath_Mage_Mystic_Flare::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Skywrath_Mage_Mystic_FlareClassInfo.m_pClass = &CDOTA_Ability_Skywrath_Mage_Mystic_Flare::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Skywrath_Mage_Mystic_FlareClass;
  CDOTA_Ability_Skywrath_Mage_Mystic_Flare::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Skywrath_Mage_Mystic_FlareClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Skywrath_Mage_Mystic_FlareClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Skywrath_Mage_Mystic_Flare::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Skywrath_Mage_Mystic_FlareClass;
}


// CDOTA_Ability_Skywrath_Mage_Mystic_Flare::YouForgotToImplementOrDeclareServerClass  (line 632, @0x0000000002cc9100, libserver.so)
int __fastcall CDOTA_Ability_Skywrath_Mage_Mystic_Flare::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Skywrath_Mage_Mystic_Flare *const this)
{
  return 0;
}


// CDOTA_Ability_Skywrath_Mage_Mystic_Flare::GetServerClass  (line 632, @0x0000000002cde7b0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Skywrath_Mage_Mystic_Flare::GetServerClass(
        CDOTA_Ability_Skywrath_Mage_Mystic_Flare *const this)
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


// CDOTA_Ability_Skywrath_Mage_Mystic_Flare::OnSpellStart  (line 641, @0x0000000002d04e50, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, FastSqrt, Get, GetAbilityData, GetEntityIdentity, GetEntryIndex, GetInstance, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>, GetTeamNumber, IndexToIdentity, IsValid, Length2D, LookupEntity, ToDOTABaseNPC, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CBaseEntity*, operator CEntityInstance*, operator-, operator[], ~CUtlVector
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::KeyValues, KeyValues::SetFloat, CDOTABaseAbility::GetCaster, CDOTABaseAbility::GetCursorPosition, Thinker_Create, DOTA_EmitSound, CDOTAGamerules::SendProjectionAbilityMessage, CDOTA_BaseNPC::HasScepter, CDOTABaseAbility::GetLevelSpecialValueFor<int>, FindUnitsInRadius, CBaseEntity::GetAbsOrigin (17 total)
// strings: "modifier_skywrath_mage_mystic_flare", "Hero_SkywrathMage.MysticFlare.Cast", "scepter_radius"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Ability_Skywrath_Mage_Mystic_Flare::OnSpellStart(
        CDOTA_Ability_Skywrath_Mage_Mystic_Flare *const this)
{
  __m128i v2; // xmm0
  float v3; // ebx
  float v4; // xmm1_4
  int m_Value; // r13d
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v7; // rax
  DOTAAbilityData_t *m_pAbilityData; // rax
  int m_iAbilityID; // r13d
  CDOTA_BaseNPC *v10; // rax
  float v11; // xmm3_4
  CDOTA_BaseNPC *v12; // rax
  int LevelSpecialValue; // r13d
  __m128i v14; // xmm3
  float v15; // r15d
  CDOTA_BaseNPC *v16; // rbx
  CDOTA_BaseNPC *v17; // rax
  __int64 v18; // rbx
  CHandle<CBaseEntity> *v19; // rdx
  uint32 m_Index; // eax
  __int16 v21; // cx
  CEntityIdentity *v22; // rdx
  CEntityIdentity *v23; // rdx
  CEntityInstance *m_pInstance; // r15
  const Vector *AbsOrigin; // rax
  int v26; // ebx
  Vector *v27; // r13
  CDOTA_BaseNPC *v28; // rax
  __int64 v29; // rbx
  CHandle<CBaseEntity> *v30; // rdx
  uint32 v31; // eax
  __int16 v32; // cx
  CEntityIdentity *v33; // rdx
  CEntityIdentity *v34; // rdx
  const Vector *v35; // rax
  Vector vPosition; // [rsp+30h] [rbp-A0h] BYREF
  Vector vOrigin; // [rsp+40h] [rbp-90h]
  Vector CursorPosition; // [rsp+50h] [rbp-80h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+60h] [rbp-70h] BYREF
  KeyValues kv; // [rsp+80h] [rbp-50h] BYREF
  unsigned __int64 v41; // [rsp+98h] [rbp-38h]

  v41 = __readfsqword(0x28u);
  *v2.m128i_i32 = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0);
  v3 = COERCE_FLOAT(_mm_cvtsi128_si32(v2));
  KeyValues::KeyValues(&kv, "modifier_skywrath_mage_mystic_flare");
  KeyValues::SetFloat(&kv, "duration", v4);
  m_Value = CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value;
  vOrigin = CDOTABaseAbility::GetCursorPosition(this);
  Caster = CDOTABaseAbility::GetCaster(this);
  Thinker_Create(Caster, this, "modifier_skywrath_mage_mystic_flare", &kv, vOrigin, m_Value, 0, 1, 0);
  v7 = CDOTABaseAbility::GetCaster(this);
  DOTA_EmitSound(10, "Hero_SkywrathMage.MysticFlare.Cast", v7);
  m_pAbilityData = this->m_pAbilityData;
  if ( m_pAbilityData == 0 )
  {
    CDOTABaseAbility::LoadAbilityData(this, 0);
    m_pAbilityData = this->m_pAbilityData;
  }
  m_iAbilityID = m_pAbilityData->m_iAbilityID;
  CursorPosition = CDOTABaseAbility::GetCursorPosition(this);
  v10 = CDOTABaseAbility::GetCaster(this);
  CDOTAGamerules::SendProjectionAbilityMessage(
    g_pGameRules,
    v10,
    0,
    m_iAbilityID,
    0,
    0,
    *&CursorPosition.x,
    CursorPosition.z,
    v3,
    v11);
  v12 = CDOTABaseAbility::GetCaster(this);
  if ( CDOTA_BaseNPC::HasScepter(v12) )
  {
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "radius", -1, 0);
    *v14.m128i_i32 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "scepter_radius", -1, 0);
    entities.m_Size = 0;
    entities.m_Memory.m_pMemory = 0;
    entities.m_Memory.m_nAllocationCount = 0;
    entities.m_Memory.m_nGrowSize = 0;
    v15 = COERCE_FLOAT(_mm_cvtsi128_si32(v14));
    v16 = CDOTABaseAbility::GetCaster(this);
    vPosition = CDOTABaseAbility::GetCursorPosition(this);
    v17 = CDOTABaseAbility::GetCaster(this);
    FindUnitsInRadius(v17->m_iTeamNum.m_Value, &vPosition, v16, v15, &entities, 2, 3, 384, 0, 0);
    if ( entities.m_Size > 0 )
    {
      v18 = 0;
      do
      {
        v19 = &entities.m_Memory.m_pMemory[v18];
        m_Index = v19->m_Index;
        if ( v19->m_Index + 2 > 1 )
        {
          v21 = v19->m_Index;
          v22 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v19->m_Index) >> 9) & 0x3F];
          if ( v22 != 0 )
          {
            v23 = &v22[v21 & 0x1FF];
            if ( v23 != 0 && m_Index == v23->m_EHandle.m_Index )
            {
              m_pInstance = v23->m_pInstance;
              if ( v23->m_pInstance != 0
                && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
                && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
              {
                vPosition = CDOTABaseAbility::GetCursorPosition(this);
                AbsOrigin = CBaseEntity::GetAbsOrigin(m_pInstance);
                if ( LevelSpecialValue <= fsqrt(
                                            ((AbsOrigin->x - vPosition.x) * (AbsOrigin->x - vPosition.x))
                                          + ((AbsOrigin->y - vPosition.y) * (AbsOrigin->y - vPosition.y))) )
                  goto LABEL_15;
              }
            }
          }
        }
        ++v18;
      }
      while ( entities.m_Size > v18 );
      if ( entities.m_Size > 0 )
      {
        v29 = 0;
        while ( 1 )
        {
          v30 = &entities.m_Memory.m_pMemory[v29];
          v31 = v30->m_Index;
          if ( v30->m_Index + 2 > 1 )
          {
            v32 = v30->m_Index;
            v33 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v30->m_Index) >> 9) & 0x3F];
            if ( v33 != 0 )
            {
              v34 = &v33[v32 & 0x1FF];
              if ( v34 != 0 && v31 == v34->m_EHandle.m_Index )
              {
                m_pInstance = v34->m_pInstance;
                if ( v34->m_pInstance != 0 && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 )
                {
                  vPosition = CDOTABaseAbility::GetCursorPosition(this);
                  v35 = CBaseEntity::GetAbsOrigin(m_pInstance);
                  if ( LevelSpecialValue <= fsqrt(
                                              ((v35->x - vPosition.x) * (v35->x - vPosition.x))
                                            + ((v35->y - vPosition.y) * (v35->y - vPosition.y))) )
                    break;
                }
              }
            }
          }
          if ( entities.m_Size <= ++v29 )
            goto LABEL_16;
        }
LABEL_15:
        v26 = CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value;
        v27 = CBaseEntity::GetAbsOrigin(m_pInstance);
        v28 = CDOTABaseAbility::GetCaster(this);
        Thinker_Create(v28, this, "modifier_skywrath_mage_mystic_flare", &kv, *v27, v26, 0, 1, 0);
        CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&entities);
        KeyValues::~KeyValues(&kv);
        return;
      }
    }
LABEL_16:
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&entities);
  }
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Modifier_Skywrath_Mage_Mystic_Flare::~CDOTA_Modifier_Skywrath_Mage_Mystic_Flare  (line 708, @0x0000000002d27f30, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Skywrath_Mage_Mystic_Flare::~CDOTA_Modifier_Skywrath_Mage_Mystic_Flare(
        CDOTA_Modifier_Skywrath_Mage_Mystic_Flare *const this)
{
  this->_vptr_CDOTA_Buff = &off_4628E30;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Skywrath_Mage_Mystic_Flare::~CDOTA_Modifier_Skywrath_Mage_Mystic_Flare  (line 708, @0x0000000002d27f50, libserver.so)  // inlines: ~CDOTA_Modifier_Skywrath_Mage_Mystic_Flare
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Skywrath_Mage_Mystic_Flare::~CDOTA_Modifier_Skywrath_Mage_Mystic_Flare(
        CDOTA_Modifier_Skywrath_Mage_Mystic_Flare *const this)
{
  this->_vptr_CDOTA_Buff = &off_4628E30;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Skywrath_Mage_Mystic_Flare::IsAura  (line 717, @0x0000000002d1df90, libserver.so)
bool __fastcall CDOTA_Modifier_Skywrath_Mage_Mystic_Flare::IsAura(
        CDOTA_Modifier_Skywrath_Mage_Mystic_Flare *const this)
{
  return 1;
}


// CDOTA_Modifier_Skywrath_Mage_Mystic_Flare::GetModifierAura  (line 718, @0x0000000002d1dfa0, libserver.so)
// strings: "modifier_skywrath_mystic_flare_aura_effect"
const char *__fastcall CDOTA_Modifier_Skywrath_Mage_Mystic_Flare::GetModifierAura(
        CDOTA_Modifier_Skywrath_Mage_Mystic_Flare *const this)
{
  return "modifier_skywrath_mystic_flare_aura_effect";
}


// CDOTA_Modifier_Skywrath_Mage_Mystic_Flare::GetAuraSearchTeam  (line 720, @0x0000000002d1dfb0, libserver.so)
int __fastcall CDOTA_Modifier_Skywrath_Mage_Mystic_Flare::GetAuraSearchTeam(
        CDOTA_Modifier_Skywrath_Mage_Mystic_Flare *const this)
{
  return 2;
}


// CDOTA_Modifier_Skywrath_Mage_Mystic_Flare::GetAuraSearchType  (line 721, @0x0000000002d1dfc0, libserver.so)
int __fastcall CDOTA_Modifier_Skywrath_Mage_Mystic_Flare::GetAuraSearchType(
        CDOTA_Modifier_Skywrath_Mage_Mystic_Flare *const this)
{
  return 1;
}


// CDOTA_Modifier_Skywrath_Mage_Mystic_Flare::GetAuraSearchFlags  (line 722, @0x0000000002d1dfd0, libserver.so)
int __fastcall CDOTA_Modifier_Skywrath_Mage_Mystic_Flare::GetAuraSearchFlags(
        CDOTA_Modifier_Skywrath_Mage_Mystic_Flare *const this)
{
  return 16;
}


// CDOTA_Modifier_Skywrath_Mage_Mystic_Flare::GetAuraRadius  (line 723, @0x0000000002d1dfe0, libserver.so)
int __fastcall CDOTA_Modifier_Skywrath_Mage_Mystic_Flare::GetAuraRadius(
        CDOTA_Modifier_Skywrath_Mage_Mystic_Flare *const this)
{
  return this->radius;
}


// CDOTA_Modifier_Skywrath_Mage_Mystic_Flare::OnCreated  (line 736, @0x0000000002d0dad0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>, Vector
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_Buff::GetParent, CDOTA_Buff::CreateBuffParticleEffect, GetParticleManager, CDOTA_ParticleManager::SetParticleControl, CDOTA_ParticleManager::ReleaseParticleIndex, CDOTA_Buff::StartIntervalThink, CBaseEntity::GetAbsOrigin, DOTA_EmitSoundLocation
// strings: "particles/units/heroes/hero_skywrath_mage/skywrath_mage_mystic_flare_ambient.vpcf", "Hero_SkywrathMage.MysticFlare"
void __fastcall CDOTA_Modifier_Skywrath_Mage_Mystic_Flare::OnCreated(
        CDOTA_Modifier_Skywrath_Mage_Mystic_Flare *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax
  CDOTA_BaseNPC *Parent; // rax
  int BuffParticleEffect; // eax
  unsigned int v9; // xmm2_4
  int v10; // r12d
  float duration; // xmm1_4
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_ParticleManager *v13; // rax
  float v14; // xmm1_4
  CDOTA_BaseNPC *v15; // rax
  Vector vPos; // [rsp+0h] [rbp-20h] BYREF

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "radius", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  else
  {
    this->radius = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v4, "duration", -1, 0);
      v5 = CDOTA_Buff::GetAbility(this);
      if ( v5 != 0 )
        goto LABEL_4;
LABEL_9:
      this->damage = 0;
      v6 = CDOTA_Buff::GetAbility(this);
      if ( v6 != 0 )
        goto LABEL_5;
LABEL_10:
      this->damage_interval = 0.0;
      goto LABEL_6;
    }
  }
  this->duration = 0.0;
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 == 0 )
    goto LABEL_9;
LABEL_4:
  this->damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "damage", -1, 0);
  v6 = CDOTA_Buff::GetAbility(this);
  if ( v6 == 0 )
    goto LABEL_10;
LABEL_5:
  this->damage_interval = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v6, "damage_interval", -1, 0);
LABEL_6:
  Parent = CDOTA_Buff::GetParent(this);
  BuffParticleEffect = CDOTA_Buff::CreateBuffParticleEffect(
                         this,
                         "particles/units/heroes/hero_skywrath_mage/skywrath_mage_mystic_flare_ambient.vpcf",
                         0,
                         Parent,
                         0);
  *&v9 = this->radius;
  v10 = BuffParticleEffect;
  duration = this->duration;
  vPos.z = this->damage_interval;
  *&vPos.x = __PAIR64__(LODWORD(duration), v9);
  ParticleManager = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(ParticleManager, v10, 1, *&vPos.x, vPos.z);
  v13 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v13, v10);
  CDOTA_Buff::StartIntervalThink(this, this->damage_interval, v14);
  v15 = CDOTA_Buff::GetParent(this);
  vPos = *CBaseEntity::GetAbsOrigin(v15);
  DOTA_EmitSoundLocation(&vPos, "Hero_SkywrathMage.MysticFlare", 0);
}


// CDOTA_Modifier_Skywrath_Mage_Mystic_Flare::OnIntervalThink  (line 760, @0x0000000002cf27f0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, Purge, ToDOTABaseNPC, ToDOTABaseNPCHero, ToDOTABaseNPCRealHero, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin, CDOTA_Buff::GetCaster, FindUnitsInRadius, CDOTA_Buff::GetAbility, ApplyDamage, DOTA_EmitSound, EconEntity_OnOwnerKillEaterEvent, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CUtlMemory<CHandle<CBaseEntity>, int>::Purge, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, _Unwind_Resume
// strings: "Hero_SkywrathMage.MysticFlare.Target"
// globals: CEntityHandle::gm_pEntityList, INVALID_ITEM_DEF_INDEX
void __fastcall CDOTA_Modifier_Skywrath_Mage_Mystic_Flare::OnIntervalThink(
        CDOTA_Modifier_Skywrath_Mage_Mystic_Flare *const this)
{
  CDOTA_BaseNPC *Parent; // rax
  const Vector *AbsOrigin; // rax
  __m128i v4; // xmm2
  __int64 v5; // rdx
  float v6; // ebx
  CDOTA_BaseNPC *Caster; // rax
  __int64 v8; // r13
  int v9; // r12d
  CHandle<CBaseEntity> *v10; // rdx
  uint32 m_Index; // eax
  __int16 v12; // cx
  CEntityIdentity *v13; // rdx
  CEntityIdentity *v14; // rdx
  CEntityInstance *m_pInstance; // rbx
  CDOTABaseAbility *Ability; // r15
  CDOTA_BaseNPC *v17; // rax
  CDOTA_BaseNPC *v18; // rax
  CDOTA_BaseNPC_Hero *v19; // rdi
  float flDamagePerEnemy; // [rsp+2Ch] [rbp-64h]
  Vector vLocation; // [rsp+30h] [rbp-60h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+40h] [rbp-50h] BYREF

  Parent = CDOTA_Buff::GetParent(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(Parent);
  *v4.m128i_i32 = this->radius;
  v5 = *&AbsOrigin->x;
  entities.m_Size = 0;
  v6 = COERCE_FLOAT(_mm_cvtsi128_si32(v4));
  *&vLocation.x = v5;
  *&AbsOrigin = AbsOrigin->z;
  entities.m_Memory.m_pMemory = 0;
  entities.m_Memory.m_nAllocationCount = 0;
  entities.m_Memory.m_nGrowSize = 0;
  LODWORD(vLocation.z) = AbsOrigin;
  Caster = CDOTA_Buff::GetCaster(this);
  FindUnitsInRadius(this->m_iTeam, &vLocation, Caster, v6, &entities, 2, 1, 139264, 0, 0);
  if ( entities.m_Size != 0 )
  {
    flDamagePerEnemy = (this->damage / (this->duration / this->damage_interval)) / entities.m_Size;
    if ( entities.m_Size > 0 )
    {
      v8 = 0;
      v9 = 0;
      do
      {
        while ( 1 )
        {
          v10 = &entities.m_Memory.m_pMemory[v8];
          m_Index = entities.m_Memory.m_pMemory[v8].m_Index;
          if ( m_Index + 2 > 1 )
          {
            v12 = v10->m_Index;
            v13 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v10->m_Index) >> 9) & 0x3F];
            if ( v13 != 0 )
            {
              v14 = &v13[v12 & 0x1FF];
              if ( v14 != 0 && m_Index == v14->m_EHandle.m_Index )
              {
                m_pInstance = v14->m_pInstance;
                if ( v14->m_pInstance != 0 && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 )
                {
                  Ability = CDOTA_Buff::GetAbility(this);
                  v17 = CDOTA_Buff::GetCaster(this);
                  ApplyDamage(v17, m_pInstance, Ability, flDamagePerEnemy, 2, 0);
                  DOTA_EmitSound(10, "Hero_SkywrathMage.MysticFlare.Target", m_pInstance);
                  if ( BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
                    && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0
                    && LOBYTE(m_pInstance[71].m_pEntity) == 0
                    && (*(m_pInstance->_vptr_IHandleEntity + 408))(m_pInstance) == 0 )
                  {
                    break;
                  }
                }
              }
            }
          }
          ++v9;
          ++v8;
          if ( entities.m_Size <= v9 )
            goto LABEL_19;
        }
        v18 = CDOTA_Buff::GetCaster(this);
        if ( v18 != 0 && (v18->m_iUnitType & 1) != 0 )
          v19 = v18;
        else
          v19 = 0;
        EconEntity_OnOwnerKillEaterEvent(
          v19,
          m_pInstance,
          kill_eater_event_t::kKillEaterEventType_Skywrath_FlareKills,
          1,
          INVALID_ITEM_DEF_INDEX);
        ++v9;
        ++v8;
      }
      while ( entities.m_Size > v9 );
    }
LABEL_19:
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&entities);
    if ( (entities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&entities.m_Memory);
      if ( (entities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&entities.m_Memory);
    }
  }
  else
  {
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&entities);
  }
}


// CDOTA_Modifier_Skywrath_Mystic_Flare_Aura_Effect::~CDOTA_Modifier_Skywrath_Mystic_Flare_Aura_Effect  (line 801, @0x0000000002d28660, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Skywrath_Mystic_Flare_Aura_Effect::~CDOTA_Modifier_Skywrath_Mystic_Flare_Aura_Effect(
        CDOTA_Modifier_Skywrath_Mystic_Flare_Aura_Effect *const this)
{
  this->_vptr_CDOTA_Buff = &off_4629110;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Skywrath_Mystic_Flare_Aura_Effect::~CDOTA_Modifier_Skywrath_Mystic_Flare_Aura_Effect  (line 801, @0x0000000002d28680, libserver.so)  // inlines: ~CDOTA_Modifier_Skywrath_Mystic_Flare_Aura_Effect
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Skywrath_Mystic_Flare_Aura_Effect::~CDOTA_Modifier_Skywrath_Mystic_Flare_Aura_Effect(
        CDOTA_Modifier_Skywrath_Mystic_Flare_Aura_Effect *const this)
{
  this->_vptr_CDOTA_Buff = &off_4629110;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Skywrath_Mystic_Flare_Aura_Effect::GetEffectName  (line 806, @0x0000000002d1dff0, libserver.so)
// strings: "particles/units/heroes/hero_skywrath_mage/skywrath_mage_mystic_flare_hit_ambient.vpcf"
const char *__fastcall CDOTA_Modifier_Skywrath_Mystic_Flare_Aura_Effect::GetEffectName(
        CDOTA_Modifier_Skywrath_Mystic_Flare_Aura_Effect *const this)
{
  return "particles/units/heroes/hero_skywrath_mage/skywrath_mage_mystic_flare_hit_ambient.vpcf";
}


// CDOTA_Modifier_Skywrath_Mystic_Flare_Aura_Effect::IsHidden  (line 807, @0x0000000002d1e000, libserver.so)
bool __fastcall CDOTA_Modifier_Skywrath_Mystic_Flare_Aura_Effect::IsHidden(
        CDOTA_Modifier_Skywrath_Mystic_Flare_Aura_Effect *const this)
{
  return 1;
}


