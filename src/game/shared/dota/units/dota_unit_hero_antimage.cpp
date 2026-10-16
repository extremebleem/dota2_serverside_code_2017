// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/units/dota_unit_hero_antimage.cpp:29
class CDOTA_Unit_Hero_AntiMage : public CDOTA_BaseNPC_Hero {
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
	CDOTA_Unit_Hero_AntiMage(CDOTA_Unit_Hero_AntiMage &);
	CDOTA_Unit_Hero_AntiMage(CDOTA_Unit_Hero_AntiMage &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	CDOTA_Unit_Hero_AntiMage();
	virtual ~CDOTA_Unit_Hero_AntiMage();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// sizeof = 5872
};

// src/game/shared/dota/units/dota_unit_hero_antimage.cpp:41
class C_CDOTA_Unit_Hero_AntiMage_MapInstall {
	C_CDOTA_Unit_Hero_AntiMage_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_antimage.cpp:52
class CDOTA_Orb_AntiMage_ManaBreak : public CDOTA_Orb {
public:

	CDOTA_Orb_AntiMage_ManaBreak(CDOTA_Orb_AntiMage_ManaBreak &);
	CDOTA_Orb_AntiMage_ManaBreak(const CDOTA_Orb_AntiMage_ManaBreak &);
	CDOTA_Orb_AntiMage_ManaBreak(CDOTA_AttackRecord *, KeyValues *, CDOTA_BaseNPC *, CDOTABaseAbility *);
	virtual ~CDOTA_Orb_AntiMage_ManaBreak();

	// sizeof = 24
};

// src/game/shared/dota/units/dota_unit_hero_antimage.cpp:71
class CDOTA_Ability_AntiMage_ManaBreak : public CDOTABaseAbility {
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
	CDOTA_Ability_AntiMage_ManaBreak(CDOTA_Ability_AntiMage_ManaBreak &);
	CDOTA_Ability_AntiMage_ManaBreak(CDOTA_Ability_AntiMage_ManaBreak &);
	CDOTA_Ability_AntiMage_ManaBreak();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual ~CDOTA_Ability_AntiMage_ManaBreak();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_antimage.cpp:86
class CDOTA_Modifier_AntiMage_ManaBreak : public CDOTA_Buff {
public:

private:

	float damage_per_burn;  // +0xba8
	int mana_per_hit;  // +0xbac
	CDOTA_Modifier_AntiMage_ManaBreak();
	virtual bool IsHidden();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierProcAttack_Feedback(const CModifierParams &);
	virtual CDOTA_Orb * GetCustomOrb(CDOTA_AttackRecord *);
	virtual int GetOrbPriority(CDOTA_AttackRecord *);
	virtual ~CDOTA_Modifier_AntiMage_ManaBreak();

	// vtable[11] IsHidden
	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[65] DeclareFunctions
	// vtable[49] GetCustomOrb
	// vtable[50] GetOrbPriority
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_antimage.cpp:193
class CDOTA_Ability_AntiMage_Blink : public CDOTABaseAbility {
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
	CDOTA_Ability_AntiMage_Blink(CDOTA_Ability_AntiMage_Blink &);
	CDOTA_Ability_AntiMage_Blink(CDOTA_Ability_AntiMage_Blink &);
	CDOTA_Ability_AntiMage_Blink();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void OnSpellStart();
	virtual int CastFilterResult(const Vector &);
	virtual const char * GetCustomCastError(const Vector &);
	virtual const char * GetStolenActivityModifier();
	virtual bool HasBlink();
	virtual float GetCooldown(int);
	virtual ~CDOTA_Ability_AntiMage_Blink();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// vtable[258] CastFilterResult
	// vtable[259] GetCustomCastError
	// vtable[310] GetStolenActivityModifier
	// vtable[323] HasBlink
	// vtable[242] GetCooldown
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_antimage.cpp:214
class C_CDOTA_Ability_AntiMage_Blink_MapInstall {
	C_CDOTA_Ability_AntiMage_Blink_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_antimage.cpp:325
class CDOTA_Ability_AntiMage_SpellShield : public CDOTABaseAbility {
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
	CDOTA_Ability_AntiMage_SpellShield(CDOTA_Ability_AntiMage_SpellShield &);
	CDOTA_Ability_AntiMage_SpellShield(CDOTA_Ability_AntiMage_SpellShield &);
	CDOTA_Ability_AntiMage_SpellShield();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual const char * GetIntrinsicModifierName();
	virtual float GetCooldown(int);
	virtual ~CDOTA_Ability_AntiMage_SpellShield();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[280] GetIntrinsicModifierName
	// vtable[242] GetCooldown
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_antimage.cpp:348
class C_CDOTA_Ability_AntiMage_SpellShield_MapInstall {
	C_CDOTA_Ability_AntiMage_SpellShield_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_antimage.cpp:360
class CDOTA_Modifier_AntiMage_SpellShield : public CDOTA_Buff {
public:

private:

	int spell_shield_resistance;  // +0xc38
	int m_nFXIndex;  // +0xc3c
	bool bScepterActive;  // +0xc40
	CDOTA_Modifier_AntiMage_SpellShield();
	virtual bool IsHidden();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	ModifierVariant_t OnTakeDamage(const CModifierParams &);
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierMagicalResistanceBonus(const CModifierParams &);
	ModifierVariant_t GetAbsorbSpell(const CModifierParams &);
	ModifierVariant_t GetReflectSpell(const CModifierParams &);
	void ReflectSpell(const CModifierParams &);
	virtual void OnIntervalThink();
	virtual int GetPriority();
	virtual ~CDOTA_Modifier_AntiMage_SpellShield();

	// vtable[11] IsHidden
	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[65] DeclareFunctions
	// vtable[56] OnIntervalThink
	// vtable[6] GetPriority
	// sizeof = 3144
};

// src/game/shared/dota/units/dota_unit_hero_antimage.cpp:614
class CDOTA_Ability_AntiMage_ManaVoid : public CDOTABaseAbility {
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
	CDOTA_Ability_AntiMage_ManaVoid(CDOTA_Ability_AntiMage_ManaVoid &);
	CDOTA_Ability_AntiMage_ManaVoid(CDOTA_Ability_AntiMage_ManaVoid &);
	CDOTA_Ability_AntiMage_ManaVoid();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void OnSpellStart();
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual const char * GetStolenActivityModifier();
	virtual ~CDOTA_Ability_AntiMage_ManaVoid();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// vtable[310] GetStolenActivityModifier
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_antimage.cpp:636
class C_CDOTA_Ability_AntiMage_ManaVoid_MapInstall {
	C_CDOTA_Ability_AntiMage_ManaVoid_MapInstall();

	// sizeof = 1
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Unit_Hero_AntiMage::~CDOTA_Unit_Hero_AntiMage  (line 29, @0x0000000002a18430, libserver.so)
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero
void __fastcall CDOTA_Unit_Hero_AntiMage::~CDOTA_Unit_Hero_AntiMage(CDOTA_Unit_Hero_AntiMage *const this)
{
  this->_vptr_IHandleEntity = &off_43132B0;
  this->_vptr_INextBotEventResponder = &off_4314290;
  this->_vptr_CObstructionObject = &off_43145C0;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
}


// CDOTA_Unit_Hero_AntiMage::~CDOTA_Unit_Hero_AntiMage  (line 29, @0x0000000002a18470, libserver.so)  // inlines: ~CDOTA_Unit_Hero_AntiMage
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero, CBaseEntity::operator delete
void __fastcall CDOTA_Unit_Hero_AntiMage::~CDOTA_Unit_Hero_AntiMage(CDOTA_Unit_Hero_AntiMage *const this)
{
  this->_vptr_IHandleEntity = &off_43132B0;
  this->_vptr_INextBotEventResponder = &off_4314290;
  this->_vptr_CObstructionObject = &off_43145C0;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Unit_Hero_AntiMage::Schema_DynamicBinding  (line 31, @0x0000000002a06fb0, libserver.so)
// globals: CDOTA_Unit_Hero_AntiMage::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_AntiMage::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_AntiMage *const this)
{
  return CDOTA_Unit_Hero_AntiMage::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_AntiMage::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 31, @0x0000000002a06fe0, libserver.so)
// globals: CDOTA_Unit_Hero_AntiMage::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_AntiMage::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_AntiMage::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_AntiMage::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_AntiMage::CEntityInstanceEntityClass::DestructInstance  (line 31, @0x0000000002a06ff0, libserver.so)  // inlines: Destruct<CDOTA_Unit_Hero_AntiMage>
void __fastcall CDOTA_Unit_Hero_AntiMage::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Unit_Hero_AntiMage::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Unit_Hero_AntiMage::CEntityInstanceEntityClass::FreeInstance  (line 31, @0x0000000002a07010, libserver.so)
void __fastcall CDOTA_Unit_Hero_AntiMage::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Unit_Hero_AntiMage::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Unit_Hero_AntiMage::CEntityInstanceEntityClass::CanAllocate  (line 31, @0x0000000002a07030, libserver.so)
bool __fastcall CDOTA_Unit_Hero_AntiMage::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Unit_Hero_AntiMage::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Unit_Hero_AntiMage::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 31, @0x0000000002a07040, libserver.so)
// globals: CDOTA_Unit_Hero_AntiMage::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Unit_Hero_AntiMage::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Unit_Hero_AntiMage::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_AntiMage::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_AntiMage::CEntityInstanceEntityClass::AllocateInstance  (line 31, @0x0000000002a0ec80, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Unit_Hero_AntiMage::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Unit_Hero_AntiMage::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 5872);
  memset(v1, 0, 0x16F0u);
  return v1;
}


// CDOTA_Unit_Hero_AntiMage::CEntityInstanceEntityClass::ConstructInstance  (line 31, @0x0000000002a13250, libserver.so)  // inlines: CDOTA_Unit_Hero_AntiMage, Construct<CDOTA_Unit_Hero_AntiMage>
// calls: CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero
CEntityInstance *__fastcall CDOTA_Unit_Hero_AntiMage::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Unit_Hero_AntiMage::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero(p);
    *p = &off_43132B0;
    *(p + 236) = &off_4314290;
    *(p + 257) = &off_43145C0;
  }
  return p;
}


// CDOTA_Unit_Hero_AntiMage::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 31, @0x0000000002a20770, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Unit_Hero_AntiMage::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_AntiMage::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Unit_Hero_AntiMage::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 31, @0x0000000002a20a00, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Unit_Hero_AntiMage::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_AntiMage::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Unit_Hero_AntiMage::GetEntityClassInternal  (line 31, @0x0000000002a3b900, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_BaseNPC_Hero::InitScriptDesc, CDOTA_BaseNPC_Hero::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes1_01.cpp
// strings: "npc_dota_hero_antimage", "CDOTA_Unit_Hero_AntiMage"
// globals: `guard variable for'CDOTA_Unit_Hero_AntiMage::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_AntiMageClass, CDOTA_Unit_Hero_AntiMage::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_AntiMageClass, __dso_handle, CDOTA_Unit_Hero_AntiMage::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Unit_Hero_AntiMage::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_AntiMageClassInfo, CDOTA_Unit_Hero_AntiMage::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_AntiMageClassInfo
CEntityClass *__cdecl CDOTA_Unit_Hero_AntiMage::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Unit_Hero_AntiMage::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_AntiMageClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_AntiMage::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_AntiMageClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Unit_Hero_AntiMage::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_AntiMageClass);
    CDOTA_Unit_Hero_AntiMage::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_AntiMageClass._vptr_CEntityClass = off_4313230;
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_AntiMage::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_AntiMageClass);
    __cxa_atexit(
      CDOTA_Unit_Hero_AntiMage::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Unit_Hero_AntiMage::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_AntiMageClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Unit_Hero_AntiMageClass != 0 )
    return &CDOTA_Unit_Hero_AntiMage::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_AntiMageClass;
  if ( `guard variable for'CDOTA_Unit_Hero_AntiMage::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_AntiMageClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_AntiMage::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_AntiMageClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_BaseNPC_Hero::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Unit_Hero_AntiMage::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_AntiMageClassInfo,
      "CDOTA_Unit_Hero_AntiMage",
      "npc_dota_hero_antimage",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_AntiMage::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_AntiMageClassInfo);
  }
  CDOTA_Unit_Hero_AntiMage::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_AntiMageClass.m_pClassInfo = &CDOTA_Unit_Hero_AntiMage::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_AntiMageClassInfo;
  CDOTA_Unit_Hero_AntiMage::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_AntiMageClass.m_pBaseClassInfo = CDOTA_Unit_Hero_AntiMage::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_AntiMageClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Unit_Hero_AntiMageClass = &CDOTA_Unit_Hero_AntiMage::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_AntiMageClass;
  CDOTA_Unit_Hero_AntiMage::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_AntiMageClassInfo.m_pClass = &CDOTA_Unit_Hero_AntiMage::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_AntiMageClass;
  CDOTA_Unit_Hero_AntiMage::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_AntiMageClass.m_pScriptClassDesc = CDOTA_BaseNPC_Hero::InitScriptDesc();
  g_pEntityCDOTA_Unit_Hero_AntiMageClass->m_pComponentOverrides = 0;
  return &CDOTA_Unit_Hero_AntiMage::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_AntiMageClass;
}


// CDOTA_Unit_Hero_AntiMage::YouForgotToImplementOrDeclareServerClass  (line 41, @0x00000000029b3f70, libserver.so)
int __fastcall CDOTA_Unit_Hero_AntiMage::YouForgotToImplementOrDeclareServerClass(CDOTA_Unit_Hero_AntiMage *const this)
{
  return 0;
}


// CDOTA_Unit_Hero_AntiMage::GetServerClass  (line 41, @0x00000000029c9570, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Unit_Hero_AntiMage::GetServerClass(CDOTA_Unit_Hero_AntiMage *const this)
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


// CDOTA_Orb_AntiMage_ManaBreak::~CDOTA_Orb_AntiMage_ManaBreak  (line 52, @0x0000000002a0c630, libserver.so)  // inlines: ~CDOTA_Orb
void __fastcall CDOTA_Orb_AntiMage_ManaBreak::~CDOTA_Orb_AntiMage_ManaBreak(CDOTA_Orb_AntiMage_ManaBreak *const this)
{
  this->_vptr_CDOTA_Orb = &off_4115E90;
}


// CDOTA_Orb_AntiMage_ManaBreak::~CDOTA_Orb_AntiMage_ManaBreak  (line 52, @0x0000000002a0eae0, libserver.so)  // inlines: ~CDOTA_Orb, ~CDOTA_Orb_AntiMage_ManaBreak
// calls: operator delete
void __fastcall CDOTA_Orb_AntiMage_ManaBreak::~CDOTA_Orb_AntiMage_ManaBreak(CDOTA_Orb_AntiMage_ManaBreak *const this)
{
  this->_vptr_CDOTA_Orb = &off_4115E90;
  operator delete(this);
}


// CDOTA_Ability_AntiMage_ManaBreak::~CDOTA_Ability_AntiMage_ManaBreak  (line 71, @0x0000000002a165c0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_AntiMage_ManaBreak::~CDOTA_Ability_AntiMage_ManaBreak(
        CDOTA_Ability_AntiMage_ManaBreak *const this)
{
  this->_vptr_IHandleEntity = &off_43146F0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_AntiMage_ManaBreak::~CDOTA_Ability_AntiMage_ManaBreak  (line 71, @0x0000000002a165e0, libserver.so)  // inlines: ~CDOTA_Ability_AntiMage_ManaBreak
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_AntiMage_ManaBreak::~CDOTA_Ability_AntiMage_ManaBreak(
        CDOTA_Ability_AntiMage_ManaBreak *const this)
{
  this->_vptr_IHandleEntity = &off_43146F0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_AntiMage_ManaBreak::Schema_DynamicBinding  (line 73, @0x0000000002a07050, libserver.so)
// globals: CDOTA_Ability_AntiMage_ManaBreak::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_AntiMage_ManaBreak::Schema_DynamicBinding(
        const CDOTA_Ability_AntiMage_ManaBreak *const this)
{
  return CDOTA_Ability_AntiMage_ManaBreak::s_pSchemaBinding;
}


// CDOTA_Ability_AntiMage_ManaBreak::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 73, @0x0000000002a07060, libserver.so)
// globals: CDOTA_Ability_AntiMage_ManaBreak::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_AntiMage_ManaBreak::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_AntiMage_ManaBreak::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_AntiMage_ManaBreak::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_AntiMage_ManaBreak::CEntityInstanceEntityClass::DestructInstance  (line 73, @0x0000000002a07070, libserver.so)  // inlines: Destruct<CDOTA_Ability_AntiMage_ManaBreak>
void __fastcall CDOTA_Ability_AntiMage_ManaBreak::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_AntiMage_ManaBreak::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_AntiMage_ManaBreak::CEntityInstanceEntityClass::FreeInstance  (line 73, @0x0000000002a07090, libserver.so)
void __fastcall CDOTA_Ability_AntiMage_ManaBreak::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_AntiMage_ManaBreak::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_AntiMage_ManaBreak::CEntityInstanceEntityClass::CanAllocate  (line 73, @0x0000000002a070b0, libserver.so)
bool __fastcall CDOTA_Ability_AntiMage_ManaBreak::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_AntiMage_ManaBreak::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_AntiMage_ManaBreak::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 73, @0x0000000002a070c0, libserver.so)
// globals: CDOTA_Ability_AntiMage_ManaBreak::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_AntiMage_ManaBreak::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_AntiMage_ManaBreak::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_AntiMage_ManaBreak::s_pSchemaBinding;
}


// CDOTA_Ability_AntiMage_ManaBreak::CEntityInstanceEntityClass::AllocateInstance  (line 73, @0x0000000002a0ecc0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_AntiMage_ManaBreak::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_AntiMage_ManaBreak::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_AntiMage_ManaBreak::CEntityInstanceEntityClass::ConstructInstance  (line 73, @0x0000000002a139a0, libserver.so)  // inlines: CDOTA_Ability_AntiMage_ManaBreak, Construct<CDOTA_Ability_AntiMage_ManaBreak>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_AntiMage_ManaBreak::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_AntiMage_ManaBreak::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_43146F0;
  }
  return p;
}


// CDOTA_Ability_AntiMage_ManaBreak::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 73, @0x0000000002a1e960, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_AntiMage_ManaBreak::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_AntiMage_ManaBreak::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_AntiMage_ManaBreak::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 73, @0x0000000002a1e980, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_AntiMage_ManaBreak::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_AntiMage_ManaBreak::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_AntiMage_ManaBreak::GetEntityClassInternal  (line 73, @0x0000000002a3d9f0, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes1_01.cpp
// strings: "CDOTA_Ability_AntiMage_ManaBreak"
// globals: `guard variable for'CDOTA_Ability_AntiMage_ManaBreak::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AntiMage_ManaBreakClass, CDOTA_Ability_AntiMage_ManaBreak::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AntiMage_ManaBreakClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTA_Ability_AntiMage_ManaBreak::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_AntiMage_ManaBreak::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_AntiMage_ManaBreakClassInfo, CDOTA_Ability_AntiMage_ManaBreak::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_AntiMage_ManaBreakClassInfo
CEntityClass *__cdecl CDOTA_Ability_AntiMage_ManaBreak::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_AntiMage_ManaBreak::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AntiMage_ManaBreakClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_AntiMage_ManaBreak::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AntiMage_ManaBreakClass) != 0 )
  {
    CDOTA_Ability_AntiMage_ManaBreak::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AntiMage_ManaBreakClass.m_designerName.u.m_Id = 0;
    CDOTA_Ability_AntiMage_ManaBreak::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AntiMage_ManaBreakClass._vptr_CEntityClass = off_3F79390;
    CDOTA_Ability_AntiMage_ManaBreak::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AntiMage_ManaBreakClass.m_ComponentOffsets.m_Size = 0;
    CDOTA_Ability_AntiMage_ManaBreak::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AntiMage_ManaBreakClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTA_Ability_AntiMage_ManaBreak::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AntiMage_ManaBreakClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_AntiMage_ManaBreak::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AntiMage_ManaBreakClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_AntiMage_ManaBreak::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AntiMage_ManaBreakClass.m_AllHelpers.m_Size = 0;
    CDOTA_Ability_AntiMage_ManaBreak::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AntiMage_ManaBreakClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_AntiMage_ManaBreak::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AntiMage_ManaBreakClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_AntiMage_ManaBreak::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AntiMage_ManaBreakClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_AntiMage_ManaBreak::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AntiMage_ManaBreakClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTA_Ability_AntiMage_ManaBreak::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AntiMage_ManaBreakClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTA_Ability_AntiMage_ManaBreak::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AntiMage_ManaBreakClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTA_Ability_AntiMage_ManaBreak::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AntiMage_ManaBreakClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_AntiMage_ManaBreak::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AntiMage_ManaBreakClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_AntiMage_ManaBreak::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AntiMage_ManaBreakClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_AntiMage_ManaBreak::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AntiMage_ManaBreakClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTA_Ability_AntiMage_ManaBreak::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AntiMage_ManaBreakClass;
    CDOTA_Ability_AntiMage_ManaBreak::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AntiMage_ManaBreakClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTA_Ability_AntiMage_ManaBreak::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AntiMage_ManaBreakClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_AntiMage_ManaBreak::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AntiMage_ManaBreakClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_AntiMage_ManaBreak::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AntiMage_ManaBreakClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_AntiMage_ManaBreak::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AntiMage_ManaBreakClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTA_Ability_AntiMage_ManaBreak::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AntiMage_ManaBreakClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_AntiMage_ManaBreak::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AntiMage_ManaBreakClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_AntiMage_ManaBreak::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AntiMage_ManaBreakClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_AntiMage_ManaBreak::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AntiMage_ManaBreakClass.m_classInputs.m_Size = 0;
    CDOTA_Ability_AntiMage_ManaBreak::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AntiMage_ManaBreakClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_AntiMage_ManaBreak::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AntiMage_ManaBreakClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_AntiMage_ManaBreak::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AntiMage_ManaBreakClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_AntiMage_ManaBreak::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AntiMage_ManaBreakClass.m_classOutputs.m_Size = 0;
    CDOTA_Ability_AntiMage_ManaBreak::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AntiMage_ManaBreakClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_AntiMage_ManaBreak::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AntiMage_ManaBreakClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_AntiMage_ManaBreak::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AntiMage_ManaBreakClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_AntiMage_ManaBreak::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AntiMage_ManaBreakClass.m_requiredEHandle.m_Index = -1;
    CDOTA_Ability_AntiMage_ManaBreak::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AntiMage_ManaBreakClass.m_hNetworkSerializer = 0;
    CDOTA_Ability_AntiMage_ManaBreak::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AntiMage_ManaBreakClass.m_pBaseClassInfo = 0;
    CDOTA_Ability_AntiMage_ManaBreak::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AntiMage_ManaBreakClass.m_pClassInfo = 0;
    CDOTA_Ability_AntiMage_ManaBreak::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AntiMage_ManaBreakClass.m_flags = 0;
    CDOTA_Ability_AntiMage_ManaBreak::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AntiMage_ManaBreakClass.m_nAllHelpersFlags = 0;
    CDOTA_Ability_AntiMage_ManaBreak::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AntiMage_ManaBreakClass.m_pScriptClassDesc = 0;
    CDOTA_Ability_AntiMage_ManaBreak::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AntiMage_ManaBreakClass.m_pInputs = 0;
    CDOTA_Ability_AntiMage_ManaBreak::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AntiMage_ManaBreakClass.m_nInputCount = 0;
    CDOTA_Ability_AntiMage_ManaBreak::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AntiMage_ManaBreakClass.m_pOutputs = 0;
    CDOTA_Ability_AntiMage_ManaBreak::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AntiMage_ManaBreakClass.m_nOutputCount = 0;
    CDOTA_Ability_AntiMage_ManaBreak::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AntiMage_ManaBreakClass.m_pGameClass = 0;
    CDOTA_Ability_AntiMage_ManaBreak::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AntiMage_ManaBreakClass._vptr_CEntityClass = off_4314670;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_AntiMage_ManaBreak::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AntiMage_ManaBreakClass);
    __cxa_atexit(
      CDOTA_Ability_AntiMage_ManaBreak::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_AntiMage_ManaBreak::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AntiMage_ManaBreakClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_AntiMage_ManaBreakClass != 0 )
    return &CDOTA_Ability_AntiMage_ManaBreak::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AntiMage_ManaBreakClass;
  if ( `guard variable for'CDOTA_Ability_AntiMage_ManaBreak::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_AntiMage_ManaBreakClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_AntiMage_ManaBreak::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_AntiMage_ManaBreakClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_AntiMage_ManaBreak::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_AntiMage_ManaBreakClassInfo,
      "CDOTA_Ability_AntiMage_ManaBreak",
      "antimage_mana_break",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_AntiMage_ManaBreak::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_AntiMage_ManaBreakClassInfo);
  }
  CDOTA_Ability_AntiMage_ManaBreak::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AntiMage_ManaBreakClass.m_pClassInfo = &CDOTA_Ability_AntiMage_ManaBreak::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_AntiMage_ManaBreakClassInfo;
  CDOTA_Ability_AntiMage_ManaBreak::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AntiMage_ManaBreakClass.m_pBaseClassInfo = CDOTA_Ability_AntiMage_ManaBreak::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_AntiMage_ManaBreakClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_AntiMage_ManaBreakClass = &CDOTA_Ability_AntiMage_ManaBreak::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AntiMage_ManaBreakClass;
  CDOTA_Ability_AntiMage_ManaBreak::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_AntiMage_ManaBreakClassInfo.m_pClass = &CDOTA_Ability_AntiMage_ManaBreak::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AntiMage_ManaBreakClass;
  CDOTA_Ability_AntiMage_ManaBreak::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AntiMage_ManaBreakClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_AntiMage_ManaBreakClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_AntiMage_ManaBreak::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AntiMage_ManaBreakClass;
}


// CDOTA_Ability_AntiMage_ManaBreak::GetIntrinsicModifierName  (line 76, @0x0000000002a070d0, libserver.so)
// strings: "modifier_antimage_mana_break"
const char *__fastcall CDOTA_Ability_AntiMage_ManaBreak::GetIntrinsicModifierName(
        CDOTA_Ability_AntiMage_ManaBreak *const this)
{
  return "modifier_antimage_mana_break";
}


// CDOTA_Modifier_AntiMage_ManaBreak::~CDOTA_Modifier_AntiMage_ManaBreak  (line 86, @0x0000000002a12cc0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_AntiMage_ManaBreak::~CDOTA_Modifier_AntiMage_ManaBreak(
        CDOTA_Modifier_AntiMage_ManaBreak *const this)
{
  this->_vptr_CDOTA_Buff = &off_43151B0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_AntiMage_ManaBreak::~CDOTA_Modifier_AntiMage_ManaBreak  (line 86, @0x0000000002a12ce0, libserver.so)  // inlines: ~CDOTA_Modifier_AntiMage_ManaBreak
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_AntiMage_ManaBreak::~CDOTA_Modifier_AntiMage_ManaBreak(
        CDOTA_Modifier_AntiMage_ManaBreak *const this)
{
  this->_vptr_CDOTA_Buff = &off_43151B0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_AntiMage_ManaBreak::IsHidden  (line 91, @0x0000000002a070e0, libserver.so)
bool __fastcall CDOTA_Modifier_AntiMage_ManaBreak::IsHidden(CDOTA_Modifier_AntiMage_ManaBreak *const this)
{
  return 1;
}


// CDOTA_Modifier_AntiMage_ManaBreak::GetOrbPriority  (line 100, @0x0000000002a070f0, libserver.so)
int __fastcall CDOTA_Modifier_AntiMage_ManaBreak::GetOrbPriority(
        CDOTA_Modifier_AntiMage_ManaBreak *const this,
        CDOTA_AttackRecord *pRecord)
{
  return 3;
}


// CDOTA_Modifier_AntiMage_ManaBreak::OnCreated  (line 112, @0x00000000029f7d50, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "damage_per_burn", "mana_per_hit"
void __fastcall CDOTA_Modifier_AntiMage_ManaBreak::OnCreated(
        CDOTA_Modifier_AntiMage_ManaBreak *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->damage_per_burn = CDOTABaseAbility::GetLevelSpecialValueFor<float>(Ability, "damage_per_burn", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->mana_per_hit = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "mana_per_hit", -1, 0);
      return;
    }
  }
  else
  {
    this->damage_per_burn = 0.0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  this->mana_per_hit = 0;
}


// CDOTA_Modifier_AntiMage_ManaBreak::OnRefresh  (line 120, @0x00000000029f7b10, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "damage_per_burn", "mana_per_hit"
void __fastcall CDOTA_Modifier_AntiMage_ManaBreak::OnRefresh(
        CDOTA_Modifier_AntiMage_ManaBreak *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->damage_per_burn = CDOTABaseAbility::GetLevelSpecialValueFor<float>(Ability, "damage_per_burn", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->mana_per_hit = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "mana_per_hit", -1, 0);
      return;
    }
  }
  else
  {
    this->damage_per_burn = 0.0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  this->mana_per_hit = 0;
}


// CDOTA_Modifier_AntiMage_ManaBreak::DeclareFunctions  (line 128, @0x00000000029b3f80, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_AntiMage_ManaBreak::GetModifierProcAttack_Feedback(CModifierParams const&)
void __fastcall CDOTA_Modifier_AntiMage_ManaBreak::DeclareFunctions(CDOTA_Modifier_AntiMage_ManaBreak *const this)
{
  this->m_Functions[7].__pfn = CDOTA_Modifier_AntiMage_ManaBreak::GetModifierProcAttack_Feedback;
  this->m_Functions[7].__delta = 0;
}


// CDOTA_Modifier_AntiMage_ManaBreak::GetCustomOrb  (line 135, @0x00000000029b88c0, libserver.so)  // inlines: CDOTA_Orb_AntiMage_ManaBreak
// calls: CDOTA_Buff::GetCaster, CDOTA_Buff::GetAbility, operator new, CDOTA_Orb::CDOTA_Orb, operator delete, _Unwind_Resume
CDOTA_Orb *__fastcall CDOTA_Modifier_AntiMage_ManaBreak::GetCustomOrb(
        CDOTA_Modifier_AntiMage_ManaBreak *const this,
        CDOTA_AttackRecord *pRecord)
{
  CDOTA_BaseNPC *Caster; // r13
  CDOTABaseAbility *Ability; // r14
  CDOTA_Orb *v6; // rbx

  Caster = CDOTA_Buff::GetCaster(this);
  Ability = CDOTA_Buff::GetAbility(this);
  v6 = operator new(0x18u);
  CDOTA_Orb::CDOTA_Orb(v6, pRecord, 0, Caster, Ability);
  v6->_vptr_CDOTA_Orb = &off_4314610;
  return v6;
}


// CDOTA_Modifier_AntiMage_ManaBreak::GetModifierProcAttack_Feedback  (line 146, @0x00000000029c4a70, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetMana, GetTeamNumber, IndexToIdentity, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetCaster, __dynamic_cast, CDOTA_BaseNPC::ReduceMana, CDOTA_Buff::GetAbility, CDOTA_CombatLog::AddManaDamageEvent, CDOTA_BaseNPC::UnitEmitSound, CDOTA_Buff::CreateBuffParticleEffect, GetParticleManager, CDOTA_ParticleManager::ReleaseParticleIndex, CDOTA_Buff::GetParent, CDOTA_ParticleManager::SetParticleControlEnt
// strings: "Hero_Antimage.ManaBreak", "particles/generic_gameplay/generic_manaburn.vpcf", "particles/units/heroes/hero_antimage/antimage_blade_hit.vpcf", "attach_attack1", "attach_attack2"
// globals: CEntityHandle::gm_pEntityList, `typeinfo for'CDOTA_Orb_AntiMage_ManaBreak, `typeinfo for'CDOTA_Orb
ModifierVariant_t __fastcall CDOTA_Modifier_AntiMage_ManaBreak::GetModifierProcAttack_Feedback(
        CDOTA_Modifier_AntiMage_ManaBreak *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CEntityInstance *m_pInstance; // r13
  char m_CScriptComponent_high; // r14
  CDOTA_Orb *pOrb; // rdi
  float mana_per_hit; // xmm1_4
  float v12; // xmm0_4
  int v13; // ebx
  CDOTABaseAbility *Ability; // rax
  int v15; // r14d
  int BuffParticleEffect; // ebx
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *Parent; // rax
  int v19; // ebx
  CDOTA_BaseNPC *Caster; // r15
  CDOTA_ParticleManager *v21; // rax
  __int64 v22; // r13
  CDOTA_ParticleManager *v23; // rax
  CDOTA_BaseNPC *v24; // rax
  int v25; // ebx
  CDOTA_BaseNPC *v26; // r12
  CDOTA_ParticleManager *v27; // rax
  CDOTA_ParticleManager *v28; // rax
  __m128i v29; // xmm3
  vec_t vecFallbackPosition; // [rsp+Ch] [rbp-34h]
  ModifierVariant_t result; // 0:rax.16
  Vector v32; // 0:xmm0_8.8,8:xmm1_4.4

  m_Index = params->htarget.m_Index;
  if ( m_Index + 2 <= 1 )
    goto LABEL_5;
  v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->htarget.m_Index) >> 9) & 0x3F];
  if ( v4 == 0 )
    goto LABEL_5;
  v5 = &v4[params->htarget.m_Index & 0x1FF];
  if ( v5 == 0 )
    goto LABEL_5;
  if ( m_Index != v5->m_EHandle.m_Index )
    goto LABEL_5;
  m_pInstance = v5->m_pInstance;
  if ( v5->m_pInstance == 0 )
    goto LABEL_5;
  if ( BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0 )
    goto LABEL_5;
  m_CScriptComponent_high = HIBYTE(m_pInstance[7].m_CScriptComponent);
  if ( m_CScriptComponent_high == CDOTA_Buff::GetCaster(this)->m_iTeamNum.m_Value
    || *&m_pInstance[44].m_worldGroupId.m_nHashCode <= 0.0
    || (BYTE1(m_pInstance[58]._vptr_IHandleEntity) & 2) != 0 )
  {
    goto LABEL_5;
  }
  *&result.m_eType = 1;
  if ( params->bDiffusalApplied )
    goto LABEL_6;
  pOrb = params->pOrb;
  params->bDiffusalApplied = 1;
  if ( pOrb != 0
    && __dynamic_cast(pOrb, &`typeinfo for'CDOTA_Orb, &`typeinfo for'CDOTA_Orb_AntiMage_ManaBreak, 0) != 0
    && (CDOTA_Buff::GetCaster(this)->m_nUnitState64.m_Value & 0x10000000) == 0 )
  {
    mana_per_hit = this->mana_per_hit;
    v12 = *&m_pInstance[44].m_iszPrivateVScripts.u.m_Id;
    if ( mana_per_hit <= v12 )
      v13 = mana_per_hit;
    else
      v13 = v12;
    CDOTA_BaseNPC::ReduceMana(m_pInstance, v13, v13);
    Ability = CDOTA_Buff::GetAbility(this);
    CDOTA_CombatLog::AddManaDamageEvent(&g_DOTACombatLog, Ability, m_pInstance, v13);
    v15 = (v13 * this->damage_per_burn);
    CDOTA_BaseNPC::UnitEmitSound(m_pInstance, "Hero_Antimage.ManaBreak", 0.0, 0, 0);
    BuffParticleEffect = CDOTA_Buff::CreateBuffParticleEffect(
                           this,
                           "particles/generic_gameplay/generic_manaburn.vpcf",
                           1,
                           m_pInstance,
                           0);
    ParticleManager = GetParticleManager();
    CDOTA_ParticleManager::ReleaseParticleIndex(ParticleManager, BuffParticleEffect);
    Parent = CDOTA_Buff::GetParent(this);
    v19 = CDOTA_Buff::CreateBuffParticleEffect(
            this,
            "particles/units/heroes/hero_antimage/antimage_blade_hit.vpcf",
            2,
            Parent,
            0);
    Caster = CDOTA_Buff::GetCaster(this);
    v21 = GetParticleManager();
    v22 = *&vec3_invalid.x;
    vecFallbackPosition = vec3_invalid.z;
    CDOTA_ParticleManager::SetParticleControlEnt(v21, v19, 0, Caster, 5, "attach_attack1", vec3_invalid, 1);
    v23 = GetParticleManager();
    CDOTA_ParticleManager::ReleaseParticleIndex(v23, v19);
    v24 = CDOTA_Buff::GetParent(this);
    v25 = CDOTA_Buff::CreateBuffParticleEffect(
            this,
            "particles/units/heroes/hero_antimage/antimage_blade_hit.vpcf",
            2,
            v24,
            0);
    v26 = CDOTA_Buff::GetCaster(this);
    v27 = GetParticleManager();
    *&v32.x = v22;
    v32.z = vecFallbackPosition;
    CDOTA_ParticleManager::SetParticleControlEnt(v27, v25, 0, v26, 5, "attach_attack2", v32, 1);
    v28 = GetParticleManager();
    CDOTA_ParticleManager::ReleaseParticleIndex(v28, v25);
    *v29.m128i_i32 = v15;
    *&result.m_eType = (_mm_cvtsi128_si32(v29) << 32) | 1;
  }
  else
  {
LABEL_5:
    *&result.m_eType = 1;
  }
LABEL_6:
  result.m_szVal = 0;
  return result;
}


// CDOTA_Ability_AntiMage_Blink::~CDOTA_Ability_AntiMage_Blink  (line 193, @0x0000000002a16610, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_AntiMage_Blink::~CDOTA_Ability_AntiMage_Blink(CDOTA_Ability_AntiMage_Blink *const this)
{
  this->_vptr_IHandleEntity = &off_4315510;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_AntiMage_Blink::~CDOTA_Ability_AntiMage_Blink  (line 193, @0x0000000002a16630, libserver.so)  // inlines: ~CDOTA_Ability_AntiMage_Blink
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_AntiMage_Blink::~CDOTA_Ability_AntiMage_Blink(CDOTA_Ability_AntiMage_Blink *const this)
{
  this->_vptr_IHandleEntity = &off_4315510;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_AntiMage_Blink::Schema_DynamicBinding  (line 195, @0x0000000002a07100, libserver.so)
// globals: CDOTA_Ability_AntiMage_Blink::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_AntiMage_Blink::Schema_DynamicBinding(
        const CDOTA_Ability_AntiMage_Blink *const this)
{
  return CDOTA_Ability_AntiMage_Blink::s_pSchemaBinding;
}


// CDOTA_Ability_AntiMage_Blink::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 195, @0x0000000002a07110, libserver.so)
// globals: CDOTA_Ability_AntiMage_Blink::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_AntiMage_Blink::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_AntiMage_Blink::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_AntiMage_Blink::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_AntiMage_Blink::CEntityInstanceEntityClass::DestructInstance  (line 195, @0x0000000002a07120, libserver.so)  // inlines: Destruct<CDOTA_Ability_AntiMage_Blink>
void __fastcall CDOTA_Ability_AntiMage_Blink::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_AntiMage_Blink::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_AntiMage_Blink::CEntityInstanceEntityClass::FreeInstance  (line 195, @0x0000000002a07140, libserver.so)
void __fastcall CDOTA_Ability_AntiMage_Blink::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_AntiMage_Blink::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_AntiMage_Blink::CEntityInstanceEntityClass::CanAllocate  (line 195, @0x0000000002a07160, libserver.so)
bool __fastcall CDOTA_Ability_AntiMage_Blink::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_AntiMage_Blink::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_AntiMage_Blink::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 195, @0x0000000002a07170, libserver.so)
// globals: CDOTA_Ability_AntiMage_Blink::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_AntiMage_Blink::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_AntiMage_Blink::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_AntiMage_Blink::s_pSchemaBinding;
}


// CDOTA_Ability_AntiMage_Blink::CEntityInstanceEntityClass::AllocateInstance  (line 195, @0x0000000002a0ed00, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_AntiMage_Blink::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_AntiMage_Blink::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_AntiMage_Blink::CEntityInstanceEntityClass::ConstructInstance  (line 195, @0x0000000002a139d0, libserver.so)  // inlines: CDOTA_Ability_AntiMage_Blink, Construct<CDOTA_Ability_AntiMage_Blink>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_AntiMage_Blink::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_AntiMage_Blink::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_4315510;
  }
  return p;
}


// CDOTA_Ability_AntiMage_Blink::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 195, @0x0000000002a1e9b0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_AntiMage_Blink::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_AntiMage_Blink::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_AntiMage_Blink::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 195, @0x0000000002a1e9d0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_AntiMage_Blink::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_AntiMage_Blink::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_AntiMage_Blink::GetEntityClassInternal  (line 195, @0x0000000002a34430, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes1_01.cpp
// strings: "antimage_blink", "CDOTA_Ability_AntiMage_Blink"
// globals: `guard variable for'CDOTA_Ability_AntiMage_Blink::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AntiMage_BlinkClass, CDOTA_Ability_AntiMage_Blink::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AntiMage_BlinkClass, __dso_handle, CDOTA_Ability_AntiMage_Blink::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_AntiMage_Blink::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_AntiMage_BlinkClassInfo, CDOTA_Ability_AntiMage_Blink::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_AntiMage_BlinkClassInfo
CEntityClass *__cdecl CDOTA_Ability_AntiMage_Blink::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_AntiMage_Blink::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AntiMage_BlinkClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_AntiMage_Blink::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AntiMage_BlinkClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_AntiMage_Blink::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AntiMage_BlinkClass);
    CDOTA_Ability_AntiMage_Blink::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AntiMage_BlinkClass._vptr_CEntityClass = off_4315490;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_AntiMage_Blink::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AntiMage_BlinkClass);
    __cxa_atexit(
      CDOTA_Ability_AntiMage_Blink::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_AntiMage_Blink::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AntiMage_BlinkClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_AntiMage_BlinkClass != 0 )
    return &CDOTA_Ability_AntiMage_Blink::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AntiMage_BlinkClass;
  if ( `guard variable for'CDOTA_Ability_AntiMage_Blink::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_AntiMage_BlinkClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_AntiMage_Blink::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_AntiMage_BlinkClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_AntiMage_Blink::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_AntiMage_BlinkClassInfo,
      "CDOTA_Ability_AntiMage_Blink",
      "antimage_blink",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_AntiMage_Blink::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_AntiMage_BlinkClassInfo);
  }
  CDOTA_Ability_AntiMage_Blink::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AntiMage_BlinkClass.m_pClassInfo = &CDOTA_Ability_AntiMage_Blink::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_AntiMage_BlinkClassInfo;
  CDOTA_Ability_AntiMage_Blink::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AntiMage_BlinkClass.m_pBaseClassInfo = CDOTA_Ability_AntiMage_Blink::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_AntiMage_BlinkClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_AntiMage_BlinkClass = &CDOTA_Ability_AntiMage_Blink::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AntiMage_BlinkClass;
  CDOTA_Ability_AntiMage_Blink::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_AntiMage_BlinkClassInfo.m_pClass = &CDOTA_Ability_AntiMage_Blink::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AntiMage_BlinkClass;
  CDOTA_Ability_AntiMage_Blink::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AntiMage_BlinkClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_AntiMage_BlinkClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_AntiMage_Blink::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AntiMage_BlinkClass;
}


// CDOTA_Ability_AntiMage_Blink::GetStolenActivityModifier  (line 204, @0x0000000002a07180, libserver.so)
// strings: "am_blink"
const char *__fastcall CDOTA_Ability_AntiMage_Blink::GetStolenActivityModifier(
        CDOTA_Ability_AntiMage_Blink *const this)
{
  return "am_blink";
}


// CDOTA_Ability_AntiMage_Blink::YouForgotToImplementOrDeclareServerClass  (line 214, @0x00000000029b3fa0, libserver.so)
int __fastcall CDOTA_Ability_AntiMage_Blink::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_AntiMage_Blink *const this)
{
  return 0;
}


// CDOTA_Ability_AntiMage_Blink::GetServerClass  (line 214, @0x00000000029c9370, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_AntiMage_Blink::GetServerClass(CDOTA_Ability_AntiMage_Blink *const this)
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


// CDOTA_Ability_AntiMage_Blink::GetCooldown  (line 224, @0x00000000029e4c00, libserver.so)
// calls: CDOTABaseAbility::GetCooldown, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "special_bonus_unique_antimage"
float __fastcall CDOTA_Ability_AntiMage_Blink::GetCooldown(CDOTA_Ability_AntiMage_Blink *const this, int iLevel)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  float result; // xmm0_4
  float flCooldown; // [rsp+Ch] [rbp-14h]

  flCooldown = CDOTABaseAbility::GetCooldown(this, iLevel);
  Caster = CDOTABaseAbility::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "special_bonus_unique_antimage", 0);
  result = flCooldown;
  if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
    return flCooldown - CDOTABaseAbility::GetLevelSpecialValueFor<int>(AbilityByName, "value", 1, 1);
  return result;
}


// CDOTA_Ability_AntiMage_Blink::OnSpellStart  (line 239, @0x00000000029e4c70, libserver.so)  // inlines: CEntityHandle, CHandle, FastSqrt, GetEHandle, GetEntryIndex, GetSerialNumber, Length, NormalizeInPlace, Set, VectorAdd, VectorLength, VectorMultiply, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator*, operator+, operator-, operator=
// calls: CDOTABaseAbility::GetCaster, CBaseEntity::GetAbsAngles, AngleVectors, CDOTABaseAbility::CreateAbilityParticleEffect, CBaseEntity::GetAbsOrigin, GetParticleManager, CDOTA_ParticleManager::SetParticleControl, CDOTA_ParticleManager::SetParticleControlForward, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::ReleaseParticleIndex, CDOTA_ProjectileManager::ProjectileDodge, CDOTABaseAbility::GetCursorPosition (20 total)
// strings: "particles/units/heroes/hero_antimage/antimage_blink_start.vpcf", "Hero_Antimage.Blink_out", "min_blink_range", "particles/units/heroes/hero_antimage/antimage_blink_end.vpcf", "Hero_Antimage.Blink_in"
void __fastcall CDOTA_Ability_AntiMage_Blink::OnSpellStart(CDOTA_Ability_AntiMage_Blink *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  int AbilityParticleEffect; // r13d
  CDOTA_BaseNPC *v4; // rax
  const Vector *AbsOrigin; // r12
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_ParticleManager *v7; // rax
  CDOTA_BaseNPC *v8; // r14
  CDOTA_ParticleManager *v9; // rax
  CDOTA_ParticleManager *v10; // rax
  CDOTA_BaseNPC *v11; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v13; // eax
  __int16 v14; // cx
  CDOTA_BaseNPC *v15; // rax
  const Vector *v16; // r13
  vec_t v17; // xmm2_4
  vec_t v18; // xmm1_4
  CDOTA_BaseNPC *v19; // rax
  int LevelSpecialValue; // eax
  float v21; // xmm0_4
  CDOTA_BaseNPC *v22; // rax
  CDOTA_BaseNPC *v23; // rax
  CDOTA_BaseNPC *v24; // rax
  int v25; // r13d
  CDOTA_BaseNPC *v26; // r14
  CDOTA_ParticleManager *v27; // rax
  CDOTA_ParticleManager *v28; // rax
  CDOTA_BaseNPC *v29; // rax
  CDOTA_BaseNPC *v30; // rax
  CDOTA_BaseNPC *v31; // rax
  int v32; // eax
  float flLength; // [rsp+Ch] [rbp-74h]
  Vector vecFwd; // [rsp+10h] [rbp-70h] BYREF
  QAngle angles; // [rsp+20h] [rbp-60h] BYREF
  Vector vDirection; // [rsp+30h] [rbp-50h] BYREF
  Vector vPos; // [rsp+40h] [rbp-40h]
  Vector vStartPos; // [rsp+50h] [rbp-30h] BYREF

  Caster = CDOTABaseAbility::GetCaster(this);
  angles = *CBaseEntity::GetAbsAngles(Caster);
  AngleVectors(&angles, &vecFwd, 0, 0);
  AbilityParticleEffect = CDOTABaseAbility::CreateAbilityParticleEffect(
                            this,
                            "particles/units/heroes/hero_antimage/antimage_blink_start.vpcf",
                            2,
                            0,
                            0);
  v4 = CDOTABaseAbility::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v4);
  ParticleManager = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(ParticleManager, AbilityParticleEffect, 0, *&AbsOrigin->x, AbsOrigin->z);
  v7 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlForward(v7, AbilityParticleEffect, 0, *&vecFwd.x, vecFwd.z);
  v8 = CDOTABaseAbility::GetCaster(this);
  v9 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v9, AbilityParticleEffect, 1, v8, 2, 0, vec3_invalid, 1);
  v10 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v10, AbilityParticleEffect);
  v11 = CDOTABaseAbility::GetCaster(this);
  vStartPos.x = NAN;
  if ( v11 != 0 )
  {
    m_pEntity = v11->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v13 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      v14 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v14 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LOWORD(vStartPos.x) = v14 | LOWORD(vStartPos.x) & 0x8000;
      LODWORD(vStartPos.x) = (v13 << 15) | LOWORD(vStartPos.x) & 0x7FFF;
    }
  }
  CDOTA_ProjectileManager::ProjectileDodge(&g_DOTAProjectileManager, &vStartPos, 0);
  v15 = CDOTABaseAbility::GetCaster(this);
  v16 = CBaseEntity::GetAbsOrigin(v15);
  vStartPos = CDOTABaseAbility::GetCursorPosition(this);
  v17 = vStartPos.y - v16->y;
  v18 = vStartPos.z - v16->z;
  vDirection.x = vStartPos.x - v16->x;
  vDirection.y = v17;
  vDirection.z = v18;
  flLength = fsqrt(((vDirection.x * vDirection.x) + (v17 * v17)) + (v18 * v18));
  VectorNormalize(&vDirection);
  vPos = CDOTABaseAbility::GetCursorPosition(this);
  v19 = CDOTABaseAbility::GetCaster(this);
  vStartPos = *CBaseEntity::GetAbsOrigin(v19);
  DOTA_EmitSoundLocation(&vStartPos, "Hero_Antimage.Blink_out", 1);
  LODWORD(v16) = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "blink_range", -1, 0);
  LODWORD(v16) = (*(this->_vptr_IHandleEntity + 228))(this) + v16;
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "min_blink_range", -1, 0);
  v21 = v16;
  if ( fmaxf(LevelSpecialValue, flLength) > v16 )
  {
    vPos.y = (vDirection.y * v21) + vStartPos.y;
    vPos.z = (vDirection.z * v21) + vStartPos.z;
    vPos.x = (v21 * vDirection.x) + vStartPos.x;
  }
  v22 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::PrimeResumePreviousMovement(v22);
  v23 = CDOTABaseAbility::GetCaster(this);
  FindClearSpaceForUnit(v23, vPos, 1);
  v24 = CDOTABaseAbility::GetCaster(this);
  v25 = CDOTABaseAbility::CreateAbilityParticleEffect(
          this,
          "particles/units/heroes/hero_antimage/antimage_blink_end.vpcf",
          1,
          v24,
          0);
  v26 = CDOTABaseAbility::GetCaster(this);
  v27 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v27, v25, 1, v26, 2, 0, vec3_invalid, 1);
  v28 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v28, v25);
  v29 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::UpdateResumePreviousMovementAfterTeleport(v29, *&vStartPos.x, vStartPos.z);
  v30 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::UnitEmitSound(v30, "Hero_Antimage.Blink_in", 0.0, 0, 0);
  v31 = CDOTABaseAbility::GetCaster(this);
  v32 = (*(v31->_vptr_IHandleEntity + 414))(v31);
  IncrementCommunityGoal(EEvent::EVENT_ID_INTERNATIONAL_2016, EEventCommunityGoals_t::ECG_TI6_Blinks, 1u, v32);
}


// CDOTA_Ability_AntiMage_Blink::CastFilterResult  (line 292, @0x00000000029b8be0, libserver.so)  // inlines: GetTeamMapping, GetTeamNumber
// calls: CDOTABaseAbility::GetCaster, FoW_TeamNumberToFoWIndex, CDOTAFogOfWarSystem::GetFoW, CFoW::GetLocationInfo, IsUnexplored
int __fastcall CDOTA_Ability_AntiMage_Blink::CastFilterResult(
        CDOTA_Ability_AntiMage_Blink *const this,
        const Vector *const vLocation)
{
  CDOTA_BaseNPC *Caster; // rax
  unsigned int v4; // ebx
  CFoW *FoW; // rax
  uint32 LocationInfo; // eax

  Caster = CDOTABaseAbility::GetCaster(this);
  v4 = FoW_TeamNumberToFoWIndex(Caster->m_iTeamNum.m_Value);
  FoW = CDOTAFogOfWarSystem::GetFoW(&g_DOTAFogOfWarSystem, 0);
  LocationInfo = CFoW::GetLocationInfo(FoW, v4, vLocation);
  return IsUnexplored(LocationInfo) ? 0x17 : 0;
}


// CDOTA_Ability_AntiMage_Blink::GetCustomCastError  (line 307, @0x00000000029b3fb0, libserver.so)
// strings: "#dota_hud_error_cant_target_unexplored"
const char *__fastcall CDOTA_Ability_AntiMage_Blink::GetCustomCastError(
        CDOTA_Ability_AntiMage_Blink *const this,
        const Vector *const vLocation)
{
  return "#dota_hud_error_cant_target_unexplored";
}


// CDOTA_Ability_AntiMage_Blink::HasBlink  (line 314, @0x00000000029b3fc0, libserver.so)
bool __fastcall CDOTA_Ability_AntiMage_Blink::HasBlink(CDOTA_Ability_AntiMage_Blink *const this)
{
  return 1;
}


// CDOTA_Ability_AntiMage_SpellShield::~CDOTA_Ability_AntiMage_SpellShield  (line 325, @0x0000000002a16660, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_AntiMage_SpellShield::~CDOTA_Ability_AntiMage_SpellShield(
        CDOTA_Ability_AntiMage_SpellShield *const this)
{
  this->_vptr_IHandleEntity = &off_4316010;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_AntiMage_SpellShield::~CDOTA_Ability_AntiMage_SpellShield  (line 325, @0x0000000002a16680, libserver.so)  // inlines: ~CDOTA_Ability_AntiMage_SpellShield
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_AntiMage_SpellShield::~CDOTA_Ability_AntiMage_SpellShield(
        CDOTA_Ability_AntiMage_SpellShield *const this)
{
  this->_vptr_IHandleEntity = &off_4316010;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_AntiMage_SpellShield::Schema_DynamicBinding  (line 327, @0x0000000002a07190, libserver.so)
// globals: CDOTA_Ability_AntiMage_SpellShield::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_AntiMage_SpellShield::Schema_DynamicBinding(
        const CDOTA_Ability_AntiMage_SpellShield *const this)
{
  return CDOTA_Ability_AntiMage_SpellShield::s_pSchemaBinding;
}


// CDOTA_Ability_AntiMage_SpellShield::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 327, @0x0000000002a071a0, libserver.so)
// globals: CDOTA_Ability_AntiMage_SpellShield::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_AntiMage_SpellShield::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_AntiMage_SpellShield::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_AntiMage_SpellShield::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_AntiMage_SpellShield::CEntityInstanceEntityClass::DestructInstance  (line 327, @0x0000000002a071b0, libserver.so)  // inlines: Destruct<CDOTA_Ability_AntiMage_SpellShield>
void __fastcall CDOTA_Ability_AntiMage_SpellShield::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_AntiMage_SpellShield::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_AntiMage_SpellShield::CEntityInstanceEntityClass::FreeInstance  (line 327, @0x0000000002a071d0, libserver.so)
void __fastcall CDOTA_Ability_AntiMage_SpellShield::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_AntiMage_SpellShield::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_AntiMage_SpellShield::CEntityInstanceEntityClass::CanAllocate  (line 327, @0x0000000002a071f0, libserver.so)
bool __fastcall CDOTA_Ability_AntiMage_SpellShield::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_AntiMage_SpellShield::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_AntiMage_SpellShield::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 327, @0x0000000002a07200, libserver.so)
// globals: CDOTA_Ability_AntiMage_SpellShield::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_AntiMage_SpellShield::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_AntiMage_SpellShield::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_AntiMage_SpellShield::s_pSchemaBinding;
}


// CDOTA_Ability_AntiMage_SpellShield::CEntityInstanceEntityClass::AllocateInstance  (line 327, @0x0000000002a0ed40, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_AntiMage_SpellShield::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_AntiMage_SpellShield::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_AntiMage_SpellShield::CEntityInstanceEntityClass::ConstructInstance  (line 327, @0x0000000002a13a00, libserver.so)  // inlines: CDOTA_Ability_AntiMage_SpellShield, Construct<CDOTA_Ability_AntiMage_SpellShield>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_AntiMage_SpellShield::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_AntiMage_SpellShield::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_4316010;
  }
  return p;
}


// CDOTA_Ability_AntiMage_SpellShield::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 327, @0x0000000002a1ea00, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_AntiMage_SpellShield::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_AntiMage_SpellShield::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_AntiMage_SpellShield::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 327, @0x0000000002a1ea20, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_AntiMage_SpellShield::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_AntiMage_SpellShield::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_AntiMage_SpellShield::GetEntityClassInternal  (line 327, @0x0000000002a34580, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes1_01.cpp
// strings: "antimage_spell_shield", "CDOTA_Ability_AntiMage_SpellShield"
// globals: `guard variable for'CDOTA_Ability_AntiMage_SpellShield::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AntiMage_SpellShieldClass, CDOTA_Ability_AntiMage_SpellShield::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AntiMage_SpellShieldClass, __dso_handle, CDOTA_Ability_AntiMage_SpellShield::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_AntiMage_SpellShield::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_AntiMage_SpellShieldClassInfo, CDOTA_Ability_AntiMage_SpellShield::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_AntiMage_SpellShieldClassInfo
CEntityClass *__cdecl CDOTA_Ability_AntiMage_SpellShield::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_AntiMage_SpellShield::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AntiMage_SpellShieldClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_AntiMage_SpellShield::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AntiMage_SpellShieldClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_AntiMage_SpellShield::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AntiMage_SpellShieldClass);
    CDOTA_Ability_AntiMage_SpellShield::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AntiMage_SpellShieldClass._vptr_CEntityClass = off_4315F90;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_AntiMage_SpellShield::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AntiMage_SpellShieldClass);
    __cxa_atexit(
      CDOTA_Ability_AntiMage_SpellShield::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_AntiMage_SpellShield::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AntiMage_SpellShieldClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_AntiMage_SpellShieldClass != 0 )
    return &CDOTA_Ability_AntiMage_SpellShield::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AntiMage_SpellShieldClass;
  if ( `guard variable for'CDOTA_Ability_AntiMage_SpellShield::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_AntiMage_SpellShieldClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_AntiMage_SpellShield::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_AntiMage_SpellShieldClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_AntiMage_SpellShield::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_AntiMage_SpellShieldClassInfo,
      "CDOTA_Ability_AntiMage_SpellShield",
      "antimage_spell_shield",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_AntiMage_SpellShield::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_AntiMage_SpellShieldClassInfo);
  }
  CDOTA_Ability_AntiMage_SpellShield::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AntiMage_SpellShieldClass.m_pClassInfo = &CDOTA_Ability_AntiMage_SpellShield::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_AntiMage_SpellShieldClassInfo;
  CDOTA_Ability_AntiMage_SpellShield::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AntiMage_SpellShieldClass.m_pBaseClassInfo = CDOTA_Ability_AntiMage_SpellShield::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_AntiMage_SpellShieldClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_AntiMage_SpellShieldClass = &CDOTA_Ability_AntiMage_SpellShield::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AntiMage_SpellShieldClass;
  CDOTA_Ability_AntiMage_SpellShield::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_AntiMage_SpellShieldClassInfo.m_pClass = &CDOTA_Ability_AntiMage_SpellShield::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AntiMage_SpellShieldClass;
  CDOTA_Ability_AntiMage_SpellShield::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AntiMage_SpellShieldClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_AntiMage_SpellShieldClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_AntiMage_SpellShield::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AntiMage_SpellShieldClass;
}


// CDOTA_Ability_AntiMage_SpellShield::GetIntrinsicModifierName  (line 331, @0x0000000002a07210, libserver.so)
// strings: "modifier_antimage_spell_shield"
const char *__fastcall CDOTA_Ability_AntiMage_SpellShield::GetIntrinsicModifierName(
        CDOTA_Ability_AntiMage_SpellShield *const this)
{
  return "modifier_antimage_spell_shield";
}


// CDOTA_Ability_AntiMage_SpellShield::GetCooldown  (line 332, @0x0000000002a33940, libserver.so)  // inlines: GetLevelSpecialValueFor<int>
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::HasScepter, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "scepter_cooldown"
float __fastcall CDOTA_Ability_AntiMage_SpellShield::GetCooldown(
        CDOTA_Ability_AntiMage_SpellShield *const this,
        int iLevel)
{
  CDOTA_BaseNPC *Caster; // rax
  bool HasScepter; // al
  float result; // xmm0_4

  Caster = CDOTABaseAbility::GetCaster(this);
  HasScepter = CDOTA_BaseNPC::HasScepter(Caster);
  result = 0.0;
  if ( HasScepter )
    return CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "scepter_cooldown", -1, 0);
  return result;
}


// CDOTA_Ability_AntiMage_SpellShield::YouForgotToImplementOrDeclareServerClass  (line 348, @0x00000000029b3fd0, libserver.so)
int __fastcall CDOTA_Ability_AntiMage_SpellShield::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_AntiMage_SpellShield *const this)
{
  return 0;
}


// CDOTA_Ability_AntiMage_SpellShield::GetServerClass  (line 348, @0x00000000029c9770, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_AntiMage_SpellShield::GetServerClass(
        CDOTA_Ability_AntiMage_SpellShield *const this)
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


// CDOTA_Modifier_AntiMage_SpellShield::~CDOTA_Modifier_AntiMage_SpellShield  (line 360, @0x0000000002a12c70, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_AntiMage_SpellShield::~CDOTA_Modifier_AntiMage_SpellShield(
        CDOTA_Modifier_AntiMage_SpellShield *const this)
{
  this->_vptr_CDOTA_Buff = &off_4316AD0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_AntiMage_SpellShield::~CDOTA_Modifier_AntiMage_SpellShield  (line 360, @0x0000000002a12c90, libserver.so)  // inlines: ~CDOTA_Modifier_AntiMage_SpellShield
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_AntiMage_SpellShield::~CDOTA_Modifier_AntiMage_SpellShield(
        CDOTA_Modifier_AntiMage_SpellShield *const this)
{
  this->_vptr_CDOTA_Buff = &off_4316AD0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_AntiMage_SpellShield::IsHidden  (line 365, @0x0000000002a07220, libserver.so)
bool __fastcall CDOTA_Modifier_AntiMage_SpellShield::IsHidden(CDOTA_Modifier_AntiMage_SpellShield *const this)
{
  return 1;
}


// CDOTA_Modifier_AntiMage_SpellShield::OnCreated  (line 393, @0x00000000029f7520, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Buff::StartIntervalThink
// strings: "spell_shield_resistance"
void __fastcall CDOTA_Modifier_AntiMage_SpellShield::OnCreated(
        CDOTA_Modifier_AntiMage_SpellShield *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  float v4; // xmm1_4

  this->bScepterActive = 0;
  this->m_nFXIndex = -1;
  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->spell_shield_resistance = CDOTABaseAbility::GetLevelSpecialValueFor<int>(
                                      Ability,
                                      "spell_shield_resistance",
                                      -1,
                                      0);
  else
    this->spell_shield_resistance = 0;
  CDOTA_Buff::StartIntervalThink(this, 0.1, v4);
}


// CDOTA_Modifier_AntiMage_SpellShield::GetPriority  (line 402, @0x00000000029b3fe0, libserver.so)
int __fastcall CDOTA_Modifier_AntiMage_SpellShield::GetPriority(CDOTA_Modifier_AntiMage_SpellShield *const this)
{
  return 4;
}


// CDOTA_Modifier_AntiMage_SpellShield::OnRefresh  (line 409, @0x00000000029f6c20, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "spell_shield_resistance"
void __fastcall CDOTA_Modifier_AntiMage_SpellShield::OnRefresh(
        CDOTA_Modifier_AntiMage_SpellShield *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->spell_shield_resistance = CDOTABaseAbility::GetLevelSpecialValueFor<int>(
                                      Ability,
                                      "spell_shield_resistance",
                                      -1,
                                      0);
  else
    this->spell_shield_resistance = 0;
}


// CDOTA_Modifier_AntiMage_SpellShield::DeclareFunctions  (line 416, @0x00000000029b3ff0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_AntiMage_SpellShield::GetModifierMagicalResistanceBonus(CModifierParams const&), CDOTA_Modifier_AntiMage_SpellShield::GetReflectSpell(CModifierParams const&), CDOTA_Modifier_AntiMage_SpellShield::GetAbsorbSpell(CModifierParams const&)
void __fastcall CDOTA_Modifier_AntiMage_SpellShield::DeclareFunctions(CDOTA_Modifier_AntiMage_SpellShield *const this)
{
  this->m_Functions[49].__pfn = CDOTA_Modifier_AntiMage_SpellShield::GetModifierMagicalResistanceBonus;
  this->m_Functions[49].__delta = 0;
  this->m_Functions[94].__delta = 0;
  this->m_Functions[94].__pfn = CDOTA_Modifier_AntiMage_SpellShield::GetReflectSpell;
  this->m_Functions[93].__pfn = CDOTA_Modifier_AntiMage_SpellShield::GetAbsorbSpell;
  this->m_Functions[93].__delta = 0;
}


// CDOTA_Modifier_AntiMage_SpellShield::GetModifierMagicalResistanceBonus  (line 424, @0x00000000029bc130, libserver.so)
// calls: CDOTA_Buff::GetParent
ModifierVariant_t __fastcall CDOTA_Modifier_AntiMage_SpellShield::GetModifierMagicalResistanceBonus(
        CDOTA_Modifier_AntiMage_SpellShield *const this,
        const CModifierParams *const params)
{
  __m128i v3; // xmm0
  ModifierVariant_t result; // 0:rax.16

  if ( (CDOTA_Buff::GetParent(this)->m_nUnitState64.m_Value & 0x10000000) != 0 )
    return 1uLL;
  *v3.m128i_i32 = this->spell_shield_resistance;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v3) << 32) | 1;
  return result;
}


// CDOTA_Modifier_AntiMage_SpellShield::OnIntervalThink  (line 433, @0x00000000029b8c30, libserver.so)  // inlines: CWeakHandle, Init
// calls: CDOTA_Buff::GetCaster, CDOTA_Buff::GetAbility, CDOTA_BaseNPC::HasScepter, CDOTA_Buff::GetParent, CBaseEntity::GetModel
void __fastcall CDOTA_Modifier_AntiMage_SpellShield::OnIntervalThink(CDOTA_Modifier_AntiMage_SpellShield *const this)
{
  CDOTABaseAbility *Ability; // rax
  CDOTA_BaseNPC *Caster; // rax
  vec_t z; // eax
  CDOTA_BaseNPC *Parent; // rax
  unsigned __int8 (__fastcall *v6)(IGameModelInfo *, Vector *); // rax
  int (**vptr_IAppSystem)(...); // rax
  HModel mod; // [rsp+0h] [rbp-50h] BYREF
  const ResourceBindingBase_t *m_pBinding; // [rsp+10h] [rbp-40h] BYREF
  Vector vecMins; // [rsp+20h] [rbp-30h] BYREF
  Vector vecMaxs; // [rsp+30h] [rbp-20h] BYREF

  if ( !CDOTA_Buff::GetCaster(this)->m_bIsIllusion.m_Value )
  {
    Ability = CDOTA_Buff::GetAbility(this);
    if ( (*(Ability->_vptr_IHandleEntity + 245))(Ability) != 0 )
    {
      Caster = CDOTA_Buff::GetCaster(this);
      if ( CDOTA_BaseNPC::HasScepter(Caster) && !this->bScepterActive )
      {
        this->bScepterActive = 1;
        z = vec3_origin.z;
        *&vecMaxs.x = *&vec3_origin.x;
        vecMaxs.z = z;
        Parent = CDOTA_Buff::GetParent(this);
        CBaseEntity::GetModel(&mod, Parent);
        v6 = *(modelinfo->_vptr_IAppSystem + 14);
        *&vecMins.x = mod;
        if ( v6(modelinfo, &vecMins) != 0 )
        {
          vptr_IAppSystem = modelinfo->_vptr_IAppSystem;
          m_pBinding = mod.m_pBinding;
          vptr_IAppSystem[16](modelinfo, &m_pBinding, &vecMins, &vecMaxs);
        }
      }
    }
  }
}


// CDOTA_Modifier_AntiMage_SpellShield::GetAbsorbSpell  (line 462, @0x00000000029caa30, libserver.so)  // inlines: Get, GetInstance, GetTeamNumber, operator CDOTABaseAbility*
// calls: CDOTA_Buff::GetParent, CDOTA_BaseNPC::HasScepter, CEntityHandle::operator CEntityInstance*, CDOTABaseAbility::GetCaster, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::ReleaseParticleIndex, CDOTA_BaseNPC::UnitEmitSound, CDOTA_Buff::GetAbility
// strings: "particles/units/heroes/hero_antimage/antimage_spellshield.vpcf", "attach_hitloc", "Hero_Antimage.SpellShield.Block"
ModifierVariant_t __fastcall CDOTA_Modifier_AntiMage_SpellShield::GetAbsorbSpell(
        CDOTA_Modifier_AntiMage_SpellShield *const this,
        const CModifierParams *const params)
{
  CDOTA_BaseNPC *v5; // rax
  CDOTABaseAbility *v6; // r12
  unsigned __int8 m_Value; // r12
  CDOTA_BaseNPC *Parent; // r12
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v10; // r13
  CDOTA_ParticleManager *v11; // rax
  CDOTA_ParticleManager *v12; // rax
  CDOTA_BaseNPC *v13; // rax
  CDOTABaseAbility *Ability; // rax
  ModifierVariant_t result; // 0:rax.16

  if ( CDOTA_Buff::GetParent(this) == 0 )
    return 1uLL;
  if ( (CDOTA_Buff::GetParent(this)->m_nUnitState64.m_Value & 0x10000000) == 0
    && (v5 = CDOTA_Buff::GetParent(this), CDOTA_BaseNPC::HasScepter(v5))
    && this->bScepterActive )
  {
    v6 = CEntityHandle::operator CEntityInstance *(&params->ability);
    if ( CDOTABaseAbility::GetCaster(v6) == 0
      || (m_Value = CDOTABaseAbility::GetCaster(v6)->m_iTeamNum.m_Value,
          result.m_szVal = CDOTA_Buff::GetParent(this),
          *&result.m_eType = 1,
          m_Value != *(result.m_szVal + 383)) )
    {
      result.m_szVal = CDOTA_Buff::GetParent(this);
      *&result.m_eType = 1;
      if ( *(result.m_szVal + 3416) == 0 )
      {
        Parent = CDOTA_Buff::GetParent(this);
        ParticleManager = GetParticleManager();
        LODWORD(Parent) = CDOTA_ParticleManager::CreateParticle(
                            ParticleManager,
                            "particles/units/heroes/hero_antimage/antimage_spellshield.vpcf",
                            2,
                            Parent,
                            0,
                            0);
        v10 = CDOTA_Buff::GetParent(this);
        v11 = GetParticleManager();
        CDOTA_ParticleManager::SetParticleControlEnt(v11, Parent, 0, v10, 5, "attach_hitloc", vec3_invalid, 1);
        v12 = GetParticleManager();
        CDOTA_ParticleManager::ReleaseParticleIndex(v12, Parent);
        v13 = CDOTA_Buff::GetParent(this);
        CDOTA_BaseNPC::UnitEmitSound(v13, "Hero_Antimage.SpellShield.Block", 0.0, 0, 0);
        this->bScepterActive = 0;
        Ability = CDOTA_Buff::GetAbility(this);
        (*(Ability->_vptr_IHandleEntity + 241))(Ability, -1.0);
        *&result.m_eType = 0x3F80000000000001LL;
      }
    }
  }
  else
  {
    *&result.m_eType = 1;
  }
  result.m_szVal = 0;
  return result;
}


// CDOTA_Modifier_AntiMage_SpellShield::ReflectSpell  (line 504, @0x0000000002a017a0, libserver.so)  // inlines: AddAbilityToPendingDelete, AddToTail, CopyConstruct<CDOTABaseAbility*>, Element, Get, GetAbilityName, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, GrowMemory, IndexToIdentity, IsValid, LookupEntity, Set, SetCursorCastTarget, SetIsReflection, SetRefCountsModifiers, ToDOTABaseNPCHero, operator CDOTABaseAbility*, operator CEntityInstance*, operator=, operator[]
// calls: CDOTA_Buff::GetParent, CDOTA_Buff::GetAbility, CDOTA_Buff::GetCaster, CDOTA_CombatLog::AddAbilityEvent, DOTA_CreateAbility, CDOTABaseAbility::UpgradeAbility, CDOTABaseAbility::SetHidden, KeyValues::KeyValues, KeyValues::SetPtr, KeyValues::SetFloat, CDOTA_BaseNPC::AddNewModifier, CDOTABaseAbility::SetChanneling (18 total)
// callers: CDOTA_Modifier_AntiMage_SpellShield::GetReflectSpell
// strings: "<NoAbilityName>", "modifier_item_lotus_orb_channel_check", "Hero_Antimage.SpellShield.Reflect"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_AntiMage_SpellShield::ReflectSpell(
        CDOTA_Modifier_AntiMage_SpellShield *const this,
        const CModifierParams *const params)
{
  CEntityIdentity *v3; // rdx
  CDOTABaseAbility *m_pInstance; // r15
  CDOTA_BaseNPC *Caster; // r13
  CEntityIdentity *v6; // rdx
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_BaseNPC *v8; // r12
  CDOTABaseAbility *Ability; // rbx
  CDOTA_BaseNPC *v10; // rax
  DOTAAbilityData_t *m_pAbilityData; // rax
  const char *v12; // rdi
  const char *m_pszAbilityName; // rax
  CDOTABaseAbility *v14; // rax
  CDOTABaseAbility *v15; // rbx
  CEntityIdentity *m_pEntity; // rax
  int v17; // edx
  __int16 v18; // cx
  float v19; // xmm1_4
  CDOTA_BaseNPC *v20; // rax
  __int64 m_Size; // r14
  int v22; // eax
  CDOTABaseAbility **v23; // rax
  CDOTA_BaseNPC *pCaster; // [rsp+0h] [rbp-60h]
  CDOTABaseAbility *pAbility; // [rsp+8h] [rbp-58h]
  KeyValues kv; // [rsp+10h] [rbp-50h] BYREF
  unsigned __int64 v27; // [rsp+28h] [rbp-38h]

  v27 = __readfsqword(0x28u);
  if ( params->ability.m_Index + 2 > 1
    && (v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->ability.m_Index) >> 9) & 0x3F]) != 0 )
  {
    m_pInstance = 0;
    Caster = 0;
    v6 = &v3[params->ability.m_Index & 0x1FF];
    if ( v6 != 0 && params->ability.m_Index == v6->m_EHandle.m_Index )
    {
      m_pInstance = v6->m_pInstance;
      if ( v6->m_pInstance != 0 )
        Caster = CDOTABaseAbility::GetCaster(v6->m_pInstance);
    }
  }
  else
  {
    m_pInstance = 0;
    Caster = 0;
  }
  Parent = CDOTA_Buff::GetParent(this);
  v8 = Parent;
  if ( Parent != 0
    && (Parent->m_iUnitType & 1) != 0
    && Caster != 0
    && m_pInstance != 0
    && (*(m_pInstance->_vptr_IHandleEntity + 208))(m_pInstance) != 0 )
  {
    Ability = CDOTA_Buff::GetAbility(this);
    v10 = CDOTA_Buff::GetCaster(this);
    CDOTA_CombatLog::AddAbilityEvent(g_pDOTACombatLog, 13, Caster, v10, Ability, 0, vec3_origin);
    m_pAbilityData = m_pInstance->m_pAbilityData;
    v12 = "<NoAbilityName>";
    if ( m_pAbilityData != 0 )
    {
      m_pszAbilityName = m_pAbilityData->m_pszAbilityName;
      v12 = "<NoAbilityName>";
      if ( m_pszAbilityName != 0 )
        v12 = m_pszAbilityName;
    }
    v14 = DOTA_CreateAbility(v12, v8);
    v15 = v14;
    if ( v14 != 0 )
    {
      v14->m_bReflection = 1;
      if ( v14->m_iLevel.m_Value < m_pInstance->m_iLevel.m_Value )
      {
        do
          CDOTABaseAbility::UpgradeAbility(v15, 0);
        while ( v15->m_iLevel.m_Value < m_pInstance->m_iLevel.m_Value );
      }
      v15->m_bRefCountsModifiers = 1;
      (*(m_pInstance->_vptr_IHandleEntity + 210))(m_pInstance, v15);
      m_pEntity = Caster->m_pEntity;
      if ( m_pEntity != 0 )
      {
        v17 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
        v18 = 0x7FFF;
        if ( m_pEntity->m_EHandle.m_Index != -1 )
          v18 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        LOWORD(v8->m_hCursorTarget.m_Index) = v18 | v8->m_hCursorTarget.m_Index & 0x8000;
        v8->m_hCursorTarget.m_Index = (v17 << 15) | v8->m_hCursorTarget.m_Index & 0x7FFF;
      }
      else
      {
        v8->m_hCursorTarget.m_Index = -1;
      }
      CDOTABaseAbility::SetHidden(v15, 0);
      (*(v15->_vptr_IHandleEntity + 264))(v15);
      (*(v15->_vptr_IHandleEntity + 266))(v15);
      v8->m_hCursorTarget.m_Index = -1;
      if ( (*(v15->_vptr_IHandleEntity + 251))(v15) < 0 )
      {
        KeyValues::KeyValues(&kv, "modifier_item_lotus_orb_channel_check");
        KeyValues::SetPtr(&kv, "target", Caster);
        KeyValues::SetPtr(&kv, "ability", v15);
        (*(v15->_vptr_IHandleEntity + 225))(v15);
        KeyValues::SetFloat(&kv, "channel_time", v19);
        pAbility = CDOTA_Buff::GetAbility(this);
        pCaster = CDOTA_Buff::GetCaster(this);
        v20 = CDOTA_Buff::GetCaster(this);
        CDOTA_BaseNPC::AddNewModifier(v20, pCaster, pAbility, "modifier_item_lotus_orb_channel_check", &kv, 0);
        CDOTABaseAbility::SetChanneling(v15, 1);
        KeyValues::~KeyValues(&kv);
      }
      m_Size = v8[1].m_SceneEvents.m_Size;
      v22 = v8[1].m_SceneEvents.m_Size;
      if ( m_Size == v8[1].m_SceneEvents.m_Memory.m_nAllocationCount )
      {
        CUtlMemory<CDOTABaseAbility *,int>::Grow(&v8[1].m_SceneEvents.m_Memory, 1);
        v22 = v8[1].m_SceneEvents.m_Size;
      }
      v8[1].m_SceneEvents.m_Size = v22 + 1;
      v23 = &v8[1].m_SceneEvents.m_Memory.m_pMemory[m_Size];
      if ( v23 != 0 )
        *v23 = v15;
      DOTA_EmitSound(10, "Hero_Antimage.SpellShield.Reflect", Caster);
    }
  }
}


// CDOTA_Modifier_AntiMage_SpellShield::GetReflectSpell  (line 554, @0x0000000002a01b50, libserver.so)  // inlines: CWeakHandle, Get, GetInstance, GetTeamNumber, Init, Vector, operator CDOTABaseAbility*, operator=
// calls: CDOTA_Buff::GetParent, CDOTA_BaseNPC::HasScepter, CEntityHandle::operator CEntityInstance*, CDOTABaseAbility::GetCaster, KeyValues::KeyValues, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, CBaseEntity::GetModel, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::SetParticleControl (16 total)
// strings: "modifier_lotus_orb_delay", "particles/units/heroes/hero_antimage/antimage_spellshield_reflect.vpcf", "attach_hitloc"
ModifierVariant_t __fastcall CDOTA_Modifier_AntiMage_SpellShield::GetReflectSpell(
        CDOTA_Modifier_AntiMage_SpellShield *const this,
        const CModifierParams *const params)
{
  CDOTA_BaseNPC *v5; // rax
  CDOTABaseAbility *v6; // r13
  unsigned __int8 m_Value; // r14
  CDOTA_BaseNPC *Parent; // r13
  CDOTA_BaseNPC *v9; // rax
  vec_t z; // eax
  CDOTA_BaseNPC *v11; // rax
  unsigned __int8 (__fastcall *v12)(IGameModelInfo *, const ResourceBindingBase_t **); // rax
  CDOTA_BaseNPC *v13; // r12
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v15; // rbx
  CDOTA_ParticleManager *v16; // rax
  CDOTA_ParticleManager *v17; // rax
  CDOTA_ParticleManager *v18; // rax
  void (__fastcall *v19)(IGameModelInfo *, const ResourceBindingBase_t **, Vector *, Vector *); // rax
  float flFXScale; // [rsp+Ch] [rbp-84h]
  HModel mod; // [rsp+10h] [rbp-80h] BYREF
  Vector vecMins; // [rsp+20h] [rbp-70h] BYREF
  Vector vecMaxs; // [rsp+30h] [rbp-60h] BYREF
  const ResourceBindingBase_t *m_pBinding; // [rsp+40h] [rbp-50h] BYREF
  float v25; // [rsp+48h] [rbp-48h]
  KeyValues kv; // [rsp+50h] [rbp-40h] BYREF
  unsigned __int64 v27; // [rsp+68h] [rbp-28h]
  ModifierVariant_t result; // 0:rax.16

  v27 = __readfsqword(0x28u);
  if ( CDOTA_Buff::GetParent(this) != 0 )
  {
    if ( (CDOTA_Buff::GetParent(this)->m_nUnitState64.m_Value & 0x10000000) != 0
      || (v5 = CDOTA_Buff::GetParent(this), !CDOTA_BaseNPC::HasScepter(v5))
      || !this->bScepterActive
      || (v6 = CEntityHandle::operator CEntityInstance *(&params->ability), CDOTABaseAbility::GetCaster(v6) != 0)
      && (m_Value = CDOTABaseAbility::GetCaster(v6)->m_iTeamNum.m_Value) == CDOTA_Buff::GetParent(this)->m_iTeamNum.m_Value )
    {
      *&result.m_eType = 1;
    }
    else
    {
      if ( (*(v6->_vptr_IHandleEntity + 209))(v6) != 0 )
      {
        this->m_LastParams.ability.m_Index = params->ability.m_Index;
        this->m_LastParams.fDamage = params->fDamage;
        this->m_LastParams.fOriginalDamage = params->fOriginalDamage;
        this->m_LastParams.nActivity = params->nActivity;
        this->m_LastParams.bTooltip = params->bTooltip;
        this->m_LastParams.nTooltipParam = params->nTooltipParam;
        this->m_LastParams.bIgnoreInvis = params->bIgnoreInvis;
        this->m_LastParams.bNoCooldown = params->bNoCooldown;
        this->m_LastParams.bReincarnate = params->bReincarnate;
        this->m_LastParams.bDoNotConsume = params->bDoNotConsume;
        this->m_LastParams.fDistance = params->fDistance;
        this->m_LastParams.fGain = params->fGain;
        this->m_LastParams.fAttackTimeRemaining = params->fAttackTimeRemaining;
        this->m_LastParams.m_nIssuerPlayerIndex = params->m_nIssuerPlayerIndex;
        this->m_LastParams.inflictor.m_Index = params->inflictor.m_Index;
        this->m_LastParams.nDamageType = params->nDamageType;
        this->m_LastParams.nDamageflags = params->nDamageflags;
        this->m_LastParams.nDamageCategory = params->nDamageCategory;
        this->m_LastParams.iFailType = params->iFailType;
        this->m_LastParams.iRecord = params->iRecord;
        this->m_LastParams.pOrb = params->pOrb;
        this->m_LastParams.pOrb2 = params->pOrb2;
        this->m_LastParams.nCost = params->nCost;
        this->m_LastParams.nOrdertype = params->nOrdertype;
        this->m_LastParams.vOldLoc.x = params->vOldLoc.x;
        this->m_LastParams.vOldLoc.y = params->vOldLoc.y;
        this->m_LastParams.vOldLoc.z = params->vOldLoc.z;
        this->m_LastParams.vNewLoc.x = params->vNewLoc.x;
        this->m_LastParams.vNewLoc.y = params->vNewLoc.y;
        this->m_LastParams.vNewLoc.z = params->vNewLoc.z;
        this->m_LastParams.bCraniumBasherTested = params->bCraniumBasherTested;
        this->m_LastParams.bHeartRegenApplied = params->bHeartRegenApplied;
        this->m_LastParams.bDiffusalApplied = params->bDiffusalApplied;
        this->m_LastParams.bChainLightningConsidered = params->bChainLightningConsidered;
        this->m_LastParams.bSuppressDamage = params->bSuppressDamage;
        this->m_LastParams.bRangedAttack = params->bRangedAttack;
        this->m_LastParams.bProcessProcs = params->bProcessProcs;
        this->m_LastParams.nPlayerids_stick = params->nPlayerids_stick;
        this->m_LastParams.hattacker.m_Index = params->hattacker.m_Index;
        this->m_LastParams.htarget.m_Index = params->htarget.m_Index;
        this->m_LastParams.hunit.m_Index = params->hunit.m_Index;
        KeyValues::KeyValues(&kv, "modifier_lotus_orb_delay");
        Parent = CDOTA_Buff::GetParent(this);
        v9 = CDOTA_Buff::GetParent(this);
        CDOTA_BaseNPC::AddNewModifier(v9, Parent, 0, "modifier_lotus_orb_delay", &kv, 0);
        KeyValues::~KeyValues(&kv);
      }
      else
      {
        CDOTA_Modifier_AntiMage_SpellShield::ReflectSpell(this, params);
      }
      z = vec3_origin.z;
      *&vecMaxs.x = *&vec3_origin.x;
      vecMaxs.z = z;
      v11 = CDOTA_Buff::GetParent(this);
      CBaseEntity::GetModel(&mod, v11);
      v12 = *(modelinfo->_vptr_IAppSystem + 14);
      m_pBinding = mod.m_pBinding;
      if ( v12(modelinfo, &m_pBinding) != 0 )
      {
        v19 = *(modelinfo->_vptr_IAppSystem + 16);
        m_pBinding = mod.m_pBinding;
        v19(modelinfo, &m_pBinding, &vecMins, &vecMaxs);
      }
      flFXScale = (vecMaxs.z - vecMins.z) / 1.5;
      v13 = CDOTA_Buff::GetParent(this);
      ParticleManager = GetParticleManager();
      LODWORD(v13) = CDOTA_ParticleManager::CreateParticle(
                       ParticleManager,
                       "particles/units/heroes/hero_antimage/antimage_spellshield_reflect.vpcf",
                       2,
                       v13,
                       0,
                       0);
      v15 = CDOTA_Buff::GetParent(this);
      v16 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControlEnt(v16, v13, 0, v15, 5, "attach_hitloc", vec3_invalid, 1);
      *&m_pBinding = flFXScale;
      *(&m_pBinding + 1) = flFXScale;
      v25 = flFXScale;
      v17 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControl(v17, v13, 1, *&m_pBinding, v25);
      v18 = GetParticleManager();
      CDOTA_ParticleManager::ReleaseParticleIndex(v18, v13);
      *&result.m_eType = 0x3F80000000000001LL;
    }
  }
  else
  {
    *&result.m_eType = 1;
  }
  result.m_szVal = 0;
  return result;
}


// CDOTA_Ability_AntiMage_ManaVoid::~CDOTA_Ability_AntiMage_ManaVoid  (line 614, @0x0000000002a166b0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_AntiMage_ManaVoid::~CDOTA_Ability_AntiMage_ManaVoid(
        CDOTA_Ability_AntiMage_ManaVoid *const this)
{
  this->_vptr_IHandleEntity = &off_4316E30;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_AntiMage_ManaVoid::~CDOTA_Ability_AntiMage_ManaVoid  (line 614, @0x0000000002a166d0, libserver.so)  // inlines: ~CDOTA_Ability_AntiMage_ManaVoid
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_AntiMage_ManaVoid::~CDOTA_Ability_AntiMage_ManaVoid(
        CDOTA_Ability_AntiMage_ManaVoid *const this)
{
  this->_vptr_IHandleEntity = &off_4316E30;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_AntiMage_ManaVoid::Schema_DynamicBinding  (line 616, @0x0000000002a07230, libserver.so)
// globals: CDOTA_Ability_AntiMage_ManaVoid::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_AntiMage_ManaVoid::Schema_DynamicBinding(
        const CDOTA_Ability_AntiMage_ManaVoid *const this)
{
  return CDOTA_Ability_AntiMage_ManaVoid::s_pSchemaBinding;
}


// CDOTA_Ability_AntiMage_ManaVoid::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 616, @0x0000000002a07240, libserver.so)
// globals: CDOTA_Ability_AntiMage_ManaVoid::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_AntiMage_ManaVoid::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_AntiMage_ManaVoid::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_AntiMage_ManaVoid::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_AntiMage_ManaVoid::CEntityInstanceEntityClass::DestructInstance  (line 616, @0x0000000002a07250, libserver.so)  // inlines: Destruct<CDOTA_Ability_AntiMage_ManaVoid>
void __fastcall CDOTA_Ability_AntiMage_ManaVoid::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_AntiMage_ManaVoid::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_AntiMage_ManaVoid::CEntityInstanceEntityClass::FreeInstance  (line 616, @0x0000000002a07270, libserver.so)
void __fastcall CDOTA_Ability_AntiMage_ManaVoid::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_AntiMage_ManaVoid::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_AntiMage_ManaVoid::CEntityInstanceEntityClass::CanAllocate  (line 616, @0x0000000002a07290, libserver.so)
bool __fastcall CDOTA_Ability_AntiMage_ManaVoid::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_AntiMage_ManaVoid::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_AntiMage_ManaVoid::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 616, @0x0000000002a072a0, libserver.so)
// globals: CDOTA_Ability_AntiMage_ManaVoid::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_AntiMage_ManaVoid::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_AntiMage_ManaVoid::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_AntiMage_ManaVoid::s_pSchemaBinding;
}


// CDOTA_Ability_AntiMage_ManaVoid::CEntityInstanceEntityClass::AllocateInstance  (line 616, @0x0000000002a0ed80, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_AntiMage_ManaVoid::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_AntiMage_ManaVoid::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_AntiMage_ManaVoid::CEntityInstanceEntityClass::ConstructInstance  (line 616, @0x0000000002a13a30, libserver.so)  // inlines: CDOTA_Ability_AntiMage_ManaVoid, Construct<CDOTA_Ability_AntiMage_ManaVoid>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_AntiMage_ManaVoid::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_AntiMage_ManaVoid::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_4316E30;
  }
  return p;
}


// CDOTA_Ability_AntiMage_ManaVoid::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 616, @0x0000000002a1ea50, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_AntiMage_ManaVoid::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_AntiMage_ManaVoid::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_AntiMage_ManaVoid::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 616, @0x0000000002a1ea70, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_AntiMage_ManaVoid::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_AntiMage_ManaVoid::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_AntiMage_ManaVoid::GetEntityClassInternal  (line 616, @0x0000000002a346d0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes1_01.cpp
// strings: "antimage_mana_void", "CDOTA_Ability_AntiMage_ManaVoid"
// globals: `guard variable for'CDOTA_Ability_AntiMage_ManaVoid::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AntiMage_ManaVoidClass, CDOTA_Ability_AntiMage_ManaVoid::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AntiMage_ManaVoidClass, __dso_handle, CDOTA_Ability_AntiMage_ManaVoid::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_AntiMage_ManaVoid::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_AntiMage_ManaVoidClassInfo, CDOTA_Ability_AntiMage_ManaVoid::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_AntiMage_ManaVoidClassInfo
CEntityClass *__cdecl CDOTA_Ability_AntiMage_ManaVoid::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_AntiMage_ManaVoid::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AntiMage_ManaVoidClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_AntiMage_ManaVoid::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AntiMage_ManaVoidClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_AntiMage_ManaVoid::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AntiMage_ManaVoidClass);
    CDOTA_Ability_AntiMage_ManaVoid::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AntiMage_ManaVoidClass._vptr_CEntityClass = off_4316DB0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_AntiMage_ManaVoid::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AntiMage_ManaVoidClass);
    __cxa_atexit(
      CDOTA_Ability_AntiMage_ManaVoid::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_AntiMage_ManaVoid::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AntiMage_ManaVoidClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_AntiMage_ManaVoidClass != 0 )
    return &CDOTA_Ability_AntiMage_ManaVoid::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AntiMage_ManaVoidClass;
  if ( `guard variable for'CDOTA_Ability_AntiMage_ManaVoid::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_AntiMage_ManaVoidClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_AntiMage_ManaVoid::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_AntiMage_ManaVoidClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_AntiMage_ManaVoid::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_AntiMage_ManaVoidClassInfo,
      "CDOTA_Ability_AntiMage_ManaVoid",
      "antimage_mana_void",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_AntiMage_ManaVoid::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_AntiMage_ManaVoidClassInfo);
  }
  CDOTA_Ability_AntiMage_ManaVoid::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AntiMage_ManaVoidClass.m_pClassInfo = &CDOTA_Ability_AntiMage_ManaVoid::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_AntiMage_ManaVoidClassInfo;
  CDOTA_Ability_AntiMage_ManaVoid::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AntiMage_ManaVoidClass.m_pBaseClassInfo = CDOTA_Ability_AntiMage_ManaVoid::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_AntiMage_ManaVoidClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_AntiMage_ManaVoidClass = &CDOTA_Ability_AntiMage_ManaVoid::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AntiMage_ManaVoidClass;
  CDOTA_Ability_AntiMage_ManaVoid::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_AntiMage_ManaVoidClassInfo.m_pClass = &CDOTA_Ability_AntiMage_ManaVoid::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AntiMage_ManaVoidClass;
  CDOTA_Ability_AntiMage_ManaVoid::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AntiMage_ManaVoidClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_AntiMage_ManaVoidClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_AntiMage_ManaVoid::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AntiMage_ManaVoidClass;
}


// CDOTA_Ability_AntiMage_ManaVoid::GetStolenActivityModifier  (line 633, @0x0000000002a072b0, libserver.so)
const char *__fastcall CDOTA_Ability_AntiMage_ManaVoid::GetStolenActivityModifier(
        CDOTA_Ability_AntiMage_ManaVoid *const this)
{
  return "mana_void";
}


// CDOTA_Ability_AntiMage_ManaVoid::YouForgotToImplementOrDeclareServerClass  (line 636, @0x00000000029b4050, libserver.so)
int __fastcall CDOTA_Ability_AntiMage_ManaVoid::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_AntiMage_ManaVoid *const this)
{
  return 0;
}


// CDOTA_Ability_AntiMage_ManaVoid::GetServerClass  (line 636, @0x00000000029c91b0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_AntiMage_ManaVoid::GetServerClass(CDOTA_Ability_AntiMage_ManaVoid *const this)
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


// CDOTA_Ability_AntiMage_ManaVoid::OnSpellStart  (line 645, @0x00000000029ef2c0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetAbilityData, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeamNumber, InState, IndexToIdentity, IsInvulnerable, IsValid, LookupEntity, Purge, ToDOTABaseNPC, Vector, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTABaseAbility::GetCursorTarget, CDOTA_BaseNPC::TriggerSpellAbsorb, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetLevelSpecialValueFor<int>, KeyValues::KeyValues, KeyValues::SetFloat, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, CDOTABaseAbility::CreateAbilityParticleEffect, GetParticleManager (25 total)
// strings: "mana_void_damage_per_mana", "mana_void_ministun", "mana_void_aoe_radius", "modifier_stun", "modifier_stunned", "particles/units/heroes/hero_antimage/antimage_manavoid.vpcf" (8 total)
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Ability_AntiMage_ManaVoid::OnSpellStart(CDOTA_Ability_AntiMage_ManaVoid *const this)
{
  CBaseEntity *CursorTarget; // rax
  CDOTA_BaseNPC *v3; // r15
  int LevelSpecialValue; // r12d
  float v5; // xmm1_4
  CDOTA_BaseNPC *Caster; // rax
  __m128i v7; // xmm3
  float v8; // r12d
  const Vector *AbsOrigin; // rbx
  CDOTA_BaseNPC *v10; // rax
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_ParticleManager *v12; // rax
  CDOTA_ParticleManager *v13; // rax
  __int64 v14; // r12
  int i; // ebx
  CDOTA_BaseNPC *m_pInstance; // r13
  CDOTA_BaseNPC *v17; // rax
  CHandle<CBaseEntity> *v18; // rdx
  uint32 m_Index; // eax
  __int16 v20; // cx
  CEntityIdentity *v21; // rdx
  CEntityIdentity *v22; // rdx
  DOTAAbilityData_t *m_pAbilityData; // rax
  int m_iAbilityID; // ebx
  const Vector *v25; // r12
  CDOTA_BaseNPC *v26; // rax
  float v27; // xmm3_4
  float flDamagea; // [rsp+2Ch] [rbp-84h]
  float flDamage; // [rsp+2Ch] [rbp-84h]
  double v30; // [rsp+30h] [rbp-80h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+40h] [rbp-70h] BYREF
  KeyValues kv; // [rsp+60h] [rbp-50h] BYREF
  unsigned __int64 v33; // [rsp+78h] [rbp-38h]

  v33 = __readfsqword(0x28u);
  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  v3 = CursorTarget;
  if ( CursorTarget != 0
    && CursorTarget->m_bIsDOTANPC
    && LOBYTE(CursorTarget[4].m_pfnMoveDone.__pfn) == 0
    && (BYTE1(CursorTarget[3].m_vecVelocity.m_Value.x) & 1) == 0
    && !CDOTA_BaseNPC::TriggerSpellAbsorb(CursorTarget, this, 1) )
  {
    flDamagea = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "mana_void_damage_per_mana", -1, 0);
    CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "mana_void_ministun", -1, 0);
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "mana_void_aoe_radius", -1, 0);
    flDamage = (v3->m_flMaxMana.m_Value - v3->m_flMana.m_Value) * flDamagea;
    KeyValues::KeyValues(&kv, "modifier_stun");
    KeyValues::SetFloat(&kv, "duration", v5);
    Caster = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::AddNewModifier(v3, Caster, this, "modifier_stunned", &kv, 0);
    *v7.m128i_i32 = LevelSpecialValue;
    entities.m_Size = 0;
    entities.m_Memory.m_pMemory = 0;
    entities.m_Memory.m_nAllocationCount = 0;
    entities.m_Memory.m_nGrowSize = 0;
    v8 = COERCE_FLOAT(_mm_cvtsi128_si32(v7));
    AbsOrigin = CBaseEntity::GetAbsOrigin(v3);
    v10 = CDOTABaseAbility::GetCaster(this);
    FindUnitsInRadius(v10->m_iTeamNum.m_Value, AbsOrigin, v3, v8, &entities, 2, 19, 0, 0, 0);
    LODWORD(AbsOrigin) = CDOTABaseAbility::CreateAbilityParticleEffect(
                           this,
                           "particles/units/heroes/hero_antimage/antimage_manavoid.vpcf",
                           2,
                           v3,
                           0);
    ParticleManager = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(ParticleManager, AbsOrigin, 0, v3, 5, "attach_hitloc", vec3_invalid, 1);
    *&v30 = v8;
    *(&v30 + 1) = v8;
    v12 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControl(v12, AbsOrigin, 1, v30, v8);
    v13 = GetParticleManager();
    CDOTA_ParticleManager::ReleaseParticleIndex(v13, AbsOrigin);
    CDOTA_BaseNPC::UnitEmitSound(v3, "Hero_Antimage.ManaVoid", 0.0, 0, 0);
    v14 = 0;
    for ( i = 0; entities.m_Size > i; ++v14 )
    {
      v18 = &entities.m_Memory.m_pMemory[v14];
      m_Index = entities.m_Memory.m_pMemory[v14].m_Index;
      if ( m_Index + 2 <= 1
        || (v20 = v18->m_Index,
            (v21 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v18->m_Index) >> 9) & 0x3F]) == 0)
        || (v22 = &v21[v20 & 0x1FF]) == 0
        || m_Index != v22->m_EHandle.m_Index
        || (m_pInstance = v22->m_pInstance, v22->m_pInstance == 0)
        || !m_pInstance->m_bIsDOTANPC )
      {
        m_pInstance = 0;
      }
      v17 = CDOTABaseAbility::GetCaster(this);
      ApplyDamage(v17, m_pInstance, this, flDamage, 2, 0);
      ++i;
    }
    m_pAbilityData = this->m_pAbilityData;
    if ( m_pAbilityData == 0 )
    {
      CDOTABaseAbility::LoadAbilityData(this, 0);
      m_pAbilityData = this->m_pAbilityData;
    }
    m_iAbilityID = m_pAbilityData->m_iAbilityID;
    v25 = CBaseEntity::GetAbsOrigin(v3);
    v26 = CDOTABaseAbility::GetCaster(this);
    CDOTAGamerules::SendProjectionAbilityMessage(g_pGameRules, v26, 0, m_iAbilityID, 0, 0, *&v25->x, v25->z, -1.0, v27);
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&entities);
    if ( (entities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&entities.m_Memory);
      if ( (entities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&entities.m_Memory);
    }
    KeyValues::~KeyValues(&kv);
  }
}


// CDOTA_Ability_AntiMage_ManaVoid::GetAbilityDamageToTargetOverInterval  (line 685, @0x00000000029de6f0, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>
// strings: "mana_void_damage_per_mana"
__int64 __fastcall CDOTA_Ability_AntiMage_ManaVoid::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_AntiMage_ManaVoid *const this,
        CDOTA_BaseNPC *pTarget,
        float fInterval,
        DAMAGE_TYPES eDamageType)
{
  __int64 result; // rax

  result = 0;
  if ( eDamageType == DAMAGE_TYPES::DAMAGE_TYPE_MAGICAL )
    return (CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "mana_void_damage_per_mana", -1, 1)
          * (pTarget->m_flMaxMana.m_Value - pTarget->m_flMana.m_Value));
  return result;
}


