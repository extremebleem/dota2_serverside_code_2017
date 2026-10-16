// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/units/dota_unit_hero_omniknight.cpp:30
class CDOTA_Unit_Hero_Omniknight : public CDOTA_BaseNPC_Hero {
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
	CDOTA_Unit_Hero_Omniknight(CDOTA_Unit_Hero_Omniknight &);
	CDOTA_Unit_Hero_Omniknight(CDOTA_Unit_Hero_Omniknight &);
	CDOTA_Unit_Hero_Omniknight();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual ~CDOTA_Unit_Hero_Omniknight();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// sizeof = 5872
};

// src/game/shared/dota/units/dota_unit_hero_omniknight.cpp:38
class C_CDOTA_Unit_Hero_Omniknight_MapInstall {
	C_CDOTA_Unit_Hero_Omniknight_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_omniknight.cpp:53
class CDOTA_Ability_Omniknight_Purification : public CDOTABaseAbility {
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
	CDOTA_Ability_Omniknight_Purification(CDOTA_Ability_Omniknight_Purification &);
	CDOTA_Ability_Omniknight_Purification(CDOTA_Ability_Omniknight_Purification &);
	CDOTA_Ability_Omniknight_Purification();
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
	virtual const char * GetStolenActivityModifier();
	virtual float GetAOERadius();
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual ~CDOTA_Ability_Omniknight_Purification();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// vtable[299] GetConceptRecipientType
	// vtable[310] GetStolenActivityModifier
	// vtable[333] GetAOERadius
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_omniknight.cpp:69
class C_CDOTA_Ability_Omniknight_Purification_MapInstall {
	C_CDOTA_Ability_Omniknight_Purification_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_omniknight.cpp:163
class CDOTA_Ability_Omniknight_Repel : public CDOTABaseAbility {
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
	CDOTA_Ability_Omniknight_Repel(CDOTA_Ability_Omniknight_Repel &);
	CDOTA_Ability_Omniknight_Repel(CDOTA_Ability_Omniknight_Repel &);
	CDOTA_Ability_Omniknight_Repel();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void OnSpellStart();
	virtual int GetConceptRecipientType();
	virtual const char * GetStolenActivityModifier();
	virtual ~CDOTA_Ability_Omniknight_Repel();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[266] OnSpellStart
	// vtable[299] GetConceptRecipientType
	// vtable[310] GetStolenActivityModifier
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_omniknight.cpp:219
class CDOTA_Modifier_Omniknight_Repel : public CDOTA_Modifier_MagicImmune {
public:

	CDOTA_Modifier_Omniknight_Repel();
	virtual void OnDestroy();
	virtual const char * GetEffectName();
	virtual const char * GetStatusEffectName();
	virtual int StatusEffectPriority();
	virtual bool IsPurgable();
	virtual ~CDOTA_Modifier_Omniknight_Repel();

	// vtable[60] OnDestroy
	// vtable[67] GetEffectName
	// vtable[70] GetStatusEffectName
	// vtable[71] StatusEffectPriority
	// vtable[14] IsPurgable
	// sizeof = 2984
};

// src/game/shared/dota/units/dota_unit_hero_omniknight.cpp:247
class CDOTA_Ability_Omniknight_Degen_Aura : public CDOTABaseAbility {
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
	CDOTA_Ability_Omniknight_Degen_Aura(CDOTA_Ability_Omniknight_Degen_Aura &);
	CDOTA_Ability_Omniknight_Degen_Aura(CDOTA_Ability_Omniknight_Degen_Aura &);
	CDOTA_Ability_Omniknight_Degen_Aura();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual ~CDOTA_Ability_Omniknight_Degen_Aura();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_omniknight.cpp:261
class CDOTA_Modifier_Omniknight_Degen_Aura : public CDOTA_Buff {
public:

private:

	int radius;  // +0xba8
	CDOTA_Modifier_Omniknight_Degen_Aura();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual bool IsAura();
	virtual const char * GetModifierAura();
	virtual int GetAuraSearchTeam();
	virtual int GetAuraSearchType();
	virtual int GetAuraRadius();
	virtual float GetAuraDuration();
	virtual bool DoesAuraCountAsAssist();
	virtual bool IsHidden();
	virtual ~CDOTA_Modifier_Omniknight_Degen_Aura();

	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[35] IsAura
	// vtable[37] GetModifierAura
	// vtable[38] GetAuraSearchTeam
	// vtable[39] GetAuraSearchType
	// vtable[41] GetAuraRadius
	// vtable[83] GetAuraDuration
	// vtable[47] DoesAuraCountAsAssist
	// vtable[11] IsHidden
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_omniknight.cpp:307
class CDOTA_Modifier_Omniknight_Degen_Aura_Effect : public CDOTA_Buff {
public:

private:

	int speed_bonus;  // +0xba8
	CDOTA_Modifier_Omniknight_Degen_Aura_Effect();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual const char * GetEffectName();
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierMoveSpeedBonus_Percentage(const CModifierParams &);
	ModifierVariant_t GetModifierAttackSpeedBonus_Constant(const CModifierParams &);
	virtual ~CDOTA_Modifier_Omniknight_Degen_Aura_Effect();

	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[67] GetEffectName
	// vtable[65] DeclareFunctions
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_omniknight.cpp:392
class CDOTA_Ability_Omniknight_GuardianAngel : public CDOTABaseAbility {
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
	CDOTA_Ability_Omniknight_GuardianAngel(CDOTA_Ability_Omniknight_GuardianAngel &);
	CDOTA_Ability_Omniknight_GuardianAngel(CDOTA_Ability_Omniknight_GuardianAngel &);
	CDOTA_Ability_Omniknight_GuardianAngel();
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
	virtual const char * GetStolenActivityModifier();
	virtual ~CDOTA_Ability_Omniknight_GuardianAngel();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// vtable[299] GetConceptRecipientType
	// vtable[310] GetStolenActivityModifier
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_omniknight.cpp:408
class C_CDOTA_Ability_Omniknight_GuardianAngel_MapInstall {
	C_CDOTA_Ability_Omniknight_GuardianAngel_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_omniknight.cpp:473
class CDOTA_Modifier_Omniknight_GuardianAngel : public CDOTA_Buff {
public:

	CDOTA_Modifier_Omniknight_GuardianAngel();
	virtual void OnCreated(KeyValues *);
	virtual void DeclareFunctions();
	ModifierVariant_t GetAbsoluteNoDamagePhysical(const CModifierParams &);
	virtual const char * GetEffectName();
	virtual int GetEffectAttachType();
	virtual bool ShouldUseOverheadOffset();
	virtual const char * GetStatusEffectName();
	virtual int StatusEffectPriority();
	virtual ~CDOTA_Modifier_Omniknight_GuardianAngel();

	// vtable[57] OnCreated
	// vtable[65] DeclareFunctions
	// vtable[67] GetEffectName
	// vtable[68] GetEffectAttachType
	// vtable[69] ShouldUseOverheadOffset
	// vtable[70] GetStatusEffectName
	// vtable[71] StatusEffectPriority
	// sizeof = 2984
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Unit_Hero_Omniknight::~CDOTA_Unit_Hero_Omniknight  (line 30, @0x0000000002c07050, libserver.so)
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero
void __fastcall CDOTA_Unit_Hero_Omniknight::~CDOTA_Unit_Hero_Omniknight(CDOTA_Unit_Hero_Omniknight *const this)
{
  this->_vptr_IHandleEntity = &off_4547D30;
  this->_vptr_INextBotEventResponder = &off_4548D10;
  this->_vptr_CObstructionObject = &off_4549040;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
}


// CDOTA_Unit_Hero_Omniknight::~CDOTA_Unit_Hero_Omniknight  (line 30, @0x0000000002c07090, libserver.so)  // inlines: ~CDOTA_Unit_Hero_Omniknight
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero, CBaseEntity::operator delete
void __fastcall CDOTA_Unit_Hero_Omniknight::~CDOTA_Unit_Hero_Omniknight(CDOTA_Unit_Hero_Omniknight *const this)
{
  this->_vptr_IHandleEntity = &off_4547D30;
  this->_vptr_INextBotEventResponder = &off_4548D10;
  this->_vptr_CObstructionObject = &off_4549040;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Unit_Hero_Omniknight::Schema_DynamicBinding  (line 32, @0x0000000002bfebc0, libserver.so)
// globals: CDOTA_Unit_Hero_Omniknight::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_Omniknight::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_Omniknight *const this)
{
  return CDOTA_Unit_Hero_Omniknight::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Omniknight::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 32, @0x0000000002bfebf0, libserver.so)
// globals: CDOTA_Unit_Hero_Omniknight::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_Omniknight::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_Omniknight::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_Omniknight::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Omniknight::CEntityInstanceEntityClass::DestructInstance  (line 32, @0x0000000002bfec00, libserver.so)  // inlines: Destruct<CDOTA_Unit_Hero_Omniknight>
void __fastcall CDOTA_Unit_Hero_Omniknight::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Unit_Hero_Omniknight::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Unit_Hero_Omniknight::CEntityInstanceEntityClass::FreeInstance  (line 32, @0x0000000002bfec20, libserver.so)
void __fastcall CDOTA_Unit_Hero_Omniknight::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Unit_Hero_Omniknight::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Unit_Hero_Omniknight::CEntityInstanceEntityClass::CanAllocate  (line 32, @0x0000000002bfec40, libserver.so)
bool __fastcall CDOTA_Unit_Hero_Omniknight::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Unit_Hero_Omniknight::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Unit_Hero_Omniknight::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 32, @0x0000000002bfec50, libserver.so)
// globals: CDOTA_Unit_Hero_Omniknight::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Unit_Hero_Omniknight::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Unit_Hero_Omniknight::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_Omniknight::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Omniknight::CEntityInstanceEntityClass::AllocateInstance  (line 32, @0x0000000002c02370, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Unit_Hero_Omniknight::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Unit_Hero_Omniknight::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 5872);
  memset(v1, 0, 0x16F0u);
  return v1;
}


// CDOTA_Unit_Hero_Omniknight::CEntityInstanceEntityClass::ConstructInstance  (line 32, @0x0000000002c04550, libserver.so)  // inlines: CDOTA_Unit_Hero_Omniknight, Construct<CDOTA_Unit_Hero_Omniknight>
// calls: CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero
CEntityInstance *__fastcall CDOTA_Unit_Hero_Omniknight::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Unit_Hero_Omniknight::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero(p);
    *p = &off_4547D30;
    *(p + 236) = &off_4548D10;
    *(p + 257) = &off_4549040;
  }
  return p;
}


// CDOTA_Unit_Hero_Omniknight::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 32, @0x0000000002c0b480, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Unit_Hero_Omniknight::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_Omniknight::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Unit_Hero_Omniknight::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 32, @0x0000000002c0b6a0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Unit_Hero_Omniknight::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_Omniknight::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Unit_Hero_Omniknight::GetEntityClassInternal  (line 32, @0x0000000002c137c0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_BaseNPC_Hero::InitScriptDesc, CDOTA_BaseNPC_Hero::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_02.cpp
// strings: "npc_dota_hero_omniknight", "CDOTA_Unit_Hero_Omniknight"
// globals: `guard variable for'CDOTA_Unit_Hero_Omniknight::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_OmniknightClass, CDOTA_Unit_Hero_Omniknight::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_OmniknightClass, __dso_handle, CDOTA_Unit_Hero_Omniknight::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Unit_Hero_Omniknight::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_OmniknightClassInfo, CDOTA_Unit_Hero_Omniknight::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_OmniknightClassInfo
CEntityClass *__cdecl CDOTA_Unit_Hero_Omniknight::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Unit_Hero_Omniknight::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_OmniknightClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_Omniknight::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_OmniknightClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Unit_Hero_Omniknight::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_OmniknightClass);
    CDOTA_Unit_Hero_Omniknight::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_OmniknightClass._vptr_CEntityClass = off_4547CB0;
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_Omniknight::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_OmniknightClass);
    __cxa_atexit(
      CDOTA_Unit_Hero_Omniknight::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Unit_Hero_Omniknight::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_OmniknightClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Unit_Hero_OmniknightClass != 0 )
    return &CDOTA_Unit_Hero_Omniknight::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_OmniknightClass;
  if ( `guard variable for'CDOTA_Unit_Hero_Omniknight::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_OmniknightClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_Omniknight::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_OmniknightClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_BaseNPC_Hero::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Unit_Hero_Omniknight::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_OmniknightClassInfo,
      "CDOTA_Unit_Hero_Omniknight",
      "npc_dota_hero_omniknight",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_Omniknight::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_OmniknightClassInfo);
  }
  CDOTA_Unit_Hero_Omniknight::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_OmniknightClass.m_pClassInfo = &CDOTA_Unit_Hero_Omniknight::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_OmniknightClassInfo;
  CDOTA_Unit_Hero_Omniknight::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_OmniknightClass.m_pBaseClassInfo = CDOTA_Unit_Hero_Omniknight::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_OmniknightClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Unit_Hero_OmniknightClass = &CDOTA_Unit_Hero_Omniknight::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_OmniknightClass;
  CDOTA_Unit_Hero_Omniknight::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_OmniknightClassInfo.m_pClass = &CDOTA_Unit_Hero_Omniknight::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_OmniknightClass;
  CDOTA_Unit_Hero_Omniknight::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_OmniknightClass.m_pScriptClassDesc = CDOTA_BaseNPC_Hero::InitScriptDesc();
  g_pEntityCDOTA_Unit_Hero_OmniknightClass->m_pComponentOverrides = 0;
  return &CDOTA_Unit_Hero_Omniknight::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_OmniknightClass;
}


// CDOTA_Unit_Hero_Omniknight::YouForgotToImplementOrDeclareServerClass  (line 38, @0x0000000002bd3460, libserver.so)
int __fastcall CDOTA_Unit_Hero_Omniknight::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Unit_Hero_Omniknight *const this)
{
  return 0;
}


// CDOTA_Unit_Hero_Omniknight::GetServerClass  (line 38, @0x0000000002bdc570, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Unit_Hero_Omniknight::GetServerClass(CDOTA_Unit_Hero_Omniknight *const this)
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


// CDOTA_Ability_Omniknight_Purification::~CDOTA_Ability_Omniknight_Purification  (line 53, @0x0000000002c054e0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Omniknight_Purification::~CDOTA_Ability_Omniknight_Purification(
        CDOTA_Ability_Omniknight_Purification *const this)
{
  this->_vptr_IHandleEntity = &off_4549110;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Omniknight_Purification::~CDOTA_Ability_Omniknight_Purification  (line 53, @0x0000000002c05500, libserver.so)  // inlines: ~CDOTA_Ability_Omniknight_Purification
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Omniknight_Purification::~CDOTA_Ability_Omniknight_Purification(
        CDOTA_Ability_Omniknight_Purification *const this)
{
  this->_vptr_IHandleEntity = &off_4549110;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Omniknight_Purification::Schema_DynamicBinding  (line 55, @0x0000000002bfec60, libserver.so)
// globals: CDOTA_Ability_Omniknight_Purification::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Omniknight_Purification::Schema_DynamicBinding(
        const CDOTA_Ability_Omniknight_Purification *const this)
{
  return CDOTA_Ability_Omniknight_Purification::s_pSchemaBinding;
}


// CDOTA_Ability_Omniknight_Purification::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 55, @0x0000000002bfec70, libserver.so)
// globals: CDOTA_Ability_Omniknight_Purification::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Omniknight_Purification::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Omniknight_Purification::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Omniknight_Purification::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Omniknight_Purification::CEntityInstanceEntityClass::DestructInstance  (line 55, @0x0000000002bfec80, libserver.so)  // inlines: Destruct<CDOTA_Ability_Omniknight_Purification>
void __fastcall CDOTA_Ability_Omniknight_Purification::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Omniknight_Purification::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Omniknight_Purification::CEntityInstanceEntityClass::FreeInstance  (line 55, @0x0000000002bfeca0, libserver.so)
void __fastcall CDOTA_Ability_Omniknight_Purification::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Omniknight_Purification::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Omniknight_Purification::CEntityInstanceEntityClass::CanAllocate  (line 55, @0x0000000002bfecc0, libserver.so)
bool __fastcall CDOTA_Ability_Omniknight_Purification::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Omniknight_Purification::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Omniknight_Purification::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 55, @0x0000000002bfecd0, libserver.so)
// globals: CDOTA_Ability_Omniknight_Purification::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Omniknight_Purification::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Omniknight_Purification::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Omniknight_Purification::s_pSchemaBinding;
}


// CDOTA_Ability_Omniknight_Purification::CEntityInstanceEntityClass::AllocateInstance  (line 55, @0x0000000002c023b0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Omniknight_Purification::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Omniknight_Purification::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Omniknight_Purification::CEntityInstanceEntityClass::ConstructInstance  (line 55, @0x0000000002c04a90, libserver.so)  // inlines: CDOTA_Ability_Omniknight_Purification, Construct<CDOTA_Ability_Omniknight_Purification>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Omniknight_Purification::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Omniknight_Purification::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_4549110;
  }
  return p;
}


// CDOTA_Ability_Omniknight_Purification::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 55, @0x0000000002c0aaa0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Omniknight_Purification::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Omniknight_Purification::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Omniknight_Purification::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 55, @0x0000000002c0aac0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Omniknight_Purification::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Omniknight_Purification::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Omniknight_Purification::GetEntityClassInternal  (line 55, @0x0000000002c13910, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_02.cpp
// strings: "omniknight_purification", "CDOTA_Ability_Omniknight_Purification"
// globals: `guard variable for'CDOTA_Ability_Omniknight_Purification::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Omniknight_PurificationClass, CDOTA_Ability_Omniknight_Purification::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Omniknight_PurificationClass, __dso_handle, CDOTA_Ability_Omniknight_Purification::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Omniknight_Purification::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Omniknight_PurificationClassInfo, CDOTA_Ability_Omniknight_Purification::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Omniknight_PurificationClassInfo
CEntityClass *__cdecl CDOTA_Ability_Omniknight_Purification::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Omniknight_Purification::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Omniknight_PurificationClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Omniknight_Purification::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Omniknight_PurificationClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Omniknight_Purification::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Omniknight_PurificationClass);
    CDOTA_Ability_Omniknight_Purification::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Omniknight_PurificationClass._vptr_CEntityClass = off_4549090;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Omniknight_Purification::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Omniknight_PurificationClass);
    __cxa_atexit(
      CDOTA_Ability_Omniknight_Purification::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Omniknight_Purification::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Omniknight_PurificationClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Omniknight_PurificationClass != 0 )
    return &CDOTA_Ability_Omniknight_Purification::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Omniknight_PurificationClass;
  if ( `guard variable for'CDOTA_Ability_Omniknight_Purification::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Omniknight_PurificationClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Omniknight_Purification::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Omniknight_PurificationClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Omniknight_Purification::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Omniknight_PurificationClassInfo,
      "CDOTA_Ability_Omniknight_Purification",
      "omniknight_purification",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Omniknight_Purification::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Omniknight_PurificationClassInfo);
  }
  CDOTA_Ability_Omniknight_Purification::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Omniknight_PurificationClass.m_pClassInfo = &CDOTA_Ability_Omniknight_Purification::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Omniknight_PurificationClassInfo;
  CDOTA_Ability_Omniknight_Purification::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Omniknight_PurificationClass.m_pBaseClassInfo = CDOTA_Ability_Omniknight_Purification::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Omniknight_PurificationClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Omniknight_PurificationClass = &CDOTA_Ability_Omniknight_Purification::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Omniknight_PurificationClass;
  CDOTA_Ability_Omniknight_Purification::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Omniknight_PurificationClassInfo.m_pClass = &CDOTA_Ability_Omniknight_Purification::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Omniknight_PurificationClass;
  CDOTA_Ability_Omniknight_Purification::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Omniknight_PurificationClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Omniknight_PurificationClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Omniknight_Purification::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Omniknight_PurificationClass;
}


// CDOTA_Ability_Omniknight_Purification::GetConceptRecipientType  (line 60, @0x0000000002bfece0, libserver.so)
int __fastcall CDOTA_Ability_Omniknight_Purification::GetConceptRecipientType(
        CDOTA_Ability_Omniknight_Purification *const this)
{
  return 3;
}


// CDOTA_Ability_Omniknight_Purification::GetStolenActivityModifier  (line 62, @0x0000000002bfecf0, libserver.so)
const char *__fastcall CDOTA_Ability_Omniknight_Purification::GetStolenActivityModifier(
        CDOTA_Ability_Omniknight_Purification *const this)
{
  return "purification";
}


// CDOTA_Ability_Omniknight_Purification::GetAOERadius  (line 64, @0x0000000002c1a3b0, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>
float __fastcall CDOTA_Ability_Omniknight_Purification::GetAOERadius(CDOTA_Ability_Omniknight_Purification *const this)
{
  return CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "radius", -1, 0);
}


// CDOTA_Ability_Omniknight_Purification::YouForgotToImplementOrDeclareServerClass  (line 69, @0x0000000002bd3470, libserver.so)
int __fastcall CDOTA_Ability_Omniknight_Purification::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Omniknight_Purification *const this)
{
  return 0;
}


// CDOTA_Ability_Omniknight_Purification::GetServerClass  (line 69, @0x0000000002bdc8f0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Omniknight_Purification::GetServerClass(
        CDOTA_Ability_Omniknight_Purification *const this)
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


// CDOTA_Ability_Omniknight_Purification::OnSpellStart  (line 78, @0x0000000002bea1c0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetLevelSpecialValueFor<int>, GetTeamNumber, InState, IndexToIdentity, IsInvulnerable, IsValid, LookupEntity, ToDOTABaseNPC, ToDOTABaseNPCHero, Vector, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlVector
// calls: CDOTABaseAbility::GetCursorTarget, CDOTA_BaseNPC::TriggerSpellAbsorb, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTA_BaseNPC::Heal, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::SetParticleControl, CDOTA_ParticleManager::ReleaseParticleIndex, CDOTA_BaseNPC::FindReplacementSound (21 total)
// strings: "special_bonus_unique_omniknight_1", "particles/units/heroes/hero_omniknight/omniknight_purification.vpcf", "particles/units/heroes/hero_omniknight/omniknight_purification_cast.vpcf", "attach_attack2", "Hero_Omniknight.Purification", "particles/units/heroes/hero_omniknight/omniknight_purification_hit.vpcf" (7 total)
// globals: CEntityHandle::gm_pEntityList, INVALID_ITEM_DEF_INDEX
void __fastcall CDOTA_Ability_Omniknight_Purification::OnSpellStart(CDOTA_Ability_Omniknight_Purification *const this)
{
  CBaseEntity *CursorTarget; // rax
  int LevelSpecialValue; // ebx
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  int v6; // ebx
  CDOTA_BaseNPC *v7; // r12
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_ParticleManager *v9; // rax
  __int64 v10; // r14
  CDOTA_ParticleManager *v11; // rax
  CDOTA_ParticleManager *v12; // rax
  CDOTA_BaseNPC *v13; // r12
  CDOTA_ParticleManager *v14; // rax
  CDOTA_BaseNPC *v15; // rbx
  CDOTA_ParticleManager *v16; // rax
  CDOTA_ParticleManager *v17; // rax
  CDOTA_ParticleManager *v18; // rax
  CDOTA_BaseNPC *v19; // rax
  const char *ReplacementSound; // rax
  const Vector *AbsOrigin; // r12
  CDOTA_BaseNPC *v22; // rax
  __int64 v23; // rbx
  CHandle<CBaseEntity> *v24; // rdx
  uint32 m_Index; // eax
  __int16 v26; // cx
  CEntityIdentity *v27; // rdx
  CEntityIdentity *v28; // rdx
  CEntityInstance *m_pInstance; // r12
  CDOTA_BaseNPC *v30; // rax
  CDOTA_ParticleManager *v31; // rax
  int Particle; // r14d
  CDOTA_ParticleManager *v33; // rax
  CDOTA_ParticleManager *v34; // rax
  CDOTA_BaseNPC *v35; // rax
  CDOTAPlayer *v36; // rax
  CDOTAPlayer *v37; // rax
  CDOTA_BaseNPC_Hero *v38; // rbx
  CDOTA_BaseNPC *v39; // rax
  CDOTA_BaseNPC_Hero *v40; // rdi
  vec_t vecFallbackPosition; // [rsp+18h] [rbp-68h]
  float flRadius; // [rsp+20h] [rbp-60h]
  float flDamage; // [rsp+24h] [rbp-5Ch]
  CDOTA_BaseNPC *pCacheNPC; // [rsp+28h] [rbp-58h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hEntities; // [rsp+30h] [rbp-50h] BYREF
  Vector v46; // 0:xmm0_8.8,8:xmm1_4.4
  Vector v47; // 0:xmm0_8.8,8:xmm1_4.4

  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  pCacheNPC = CursorTarget;
  if ( CursorTarget != 0
    && CursorTarget->m_bIsDOTANPC
    && LOBYTE(CursorTarget[4].m_pfnMoveDone.__pfn) == 0
    && (BYTE1(CursorTarget[3].m_vecVelocity.m_Value.x) & 1) == 0
    && !CDOTA_BaseNPC::TriggerSpellAbsorb(CursorTarget, this, 1) )
  {
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "heal", -1, 0);
    Caster = CDOTABaseAbility::GetCaster(this);
    AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "special_bonus_unique_omniknight_1", 0);
    if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
      LevelSpecialValue += CDOTABaseAbility::GetLevelSpecialValueFor<int>(AbilityByName, "value", 1, 1);
    flDamage = LevelSpecialValue;
    CDOTA_BaseNPC::Heal(pCacheNPC, LevelSpecialValue, this, 0, 1);
    if ( (pCacheNPC->m_iUnitType & 1) != 0 )
    {
      v35 = CDOTABaseAbility::GetCaster(this);
      v36 = (*(v35->_vptr_IHandleEntity + 413))(v35);
      SendOverheadEventMessage(v36, DOTA_OVERHEAD_ALERT::OVERHEAD_ALERT_HEAL, pCacheNPC, LevelSpecialValue, 0);
      if ( pCacheNPC != CDOTABaseAbility::GetCaster(this) )
      {
        v37 = (*(pCacheNPC->_vptr_IHandleEntity + 413))(pCacheNPC);
        SendOverheadEventMessage(v37, DOTA_OVERHEAD_ALERT::OVERHEAD_ALERT_HEAL, pCacheNPC, LevelSpecialValue, 0);
      }
      v38 = ToDOTABaseNPCRealHero(pCacheNPC);
      v39 = CDOTABaseAbility::GetCaster(this);
      if ( v39 != 0 && (v39->m_iUnitType & 1) != 0 )
        v40 = v39;
      else
        v40 = 0;
      EconEntity_OnOwnerKillEaterEvent(
        v40,
        v38,
        kill_eater_event_t::kKillEaterEventType_Omniknight_Purifications,
        1,
        INVALID_ITEM_DEF_INDEX);
    }
    v6 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "radius", -1, 0);
    v7 = CDOTABaseAbility::GetCaster(this);
    ParticleManager = GetParticleManager();
    LODWORD(v7) = CDOTA_ParticleManager::CreateParticle(
                    ParticleManager,
                    "particles/units/heroes/hero_omniknight/omniknight_purification.vpcf",
                    2,
                    v7,
                    0,
                    0);
    v9 = GetParticleManager();
    v10 = *&vec3_invalid.x;
    vecFallbackPosition = vec3_invalid.z;
    CDOTA_ParticleManager::SetParticleControlEnt(v9, v7, 0, pCacheNPC, 1, 0, vec3_invalid, 1);
    *&hEntities.m_Size = v6;
    *(&hEntities.m_Size + 1) = v6;
    flRadius = v6;
    v11 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControl(v11, v7, 1, *&hEntities.m_Size, v6);
    v12 = GetParticleManager();
    CDOTA_ParticleManager::ReleaseParticleIndex(v12, v7);
    v13 = CDOTABaseAbility::GetCaster(this);
    v14 = GetParticleManager();
    LODWORD(v13) = CDOTA_ParticleManager::CreateParticle(
                     v14,
                     "particles/units/heroes/hero_omniknight/omniknight_purification_cast.vpcf",
                     2,
                     v13,
                     0,
                     0);
    v15 = CDOTABaseAbility::GetCaster(this);
    v16 = GetParticleManager();
    *&v46.x = v10;
    v46.z = vecFallbackPosition;
    CDOTA_ParticleManager::SetParticleControlEnt(v16, v13, 0, v15, 5, "attach_attack2", v46, 1);
    v17 = GetParticleManager();
    *&v47.x = v10;
    v47.z = vecFallbackPosition;
    CDOTA_ParticleManager::SetParticleControlEnt(v17, v13, 1, pCacheNPC, 1, 0, v47, 1);
    v18 = GetParticleManager();
    CDOTA_ParticleManager::ReleaseParticleIndex(v18, v13);
    v19 = CDOTABaseAbility::GetCaster(this);
    ReplacementSound = CDOTA_BaseNPC::FindReplacementSound(v19, "Hero_Omniknight.Purification");
    CDOTA_BaseNPC::UnitEmitSound(pCacheNPC, ReplacementSound, 0.0, 0, 0);
    hEntities.m_Size = 0;
    hEntities.m_Memory.m_pMemory = 0;
    hEntities.m_Memory.m_nAllocationCount = 0;
    hEntities.m_Memory.m_nGrowSize = 0;
    AbsOrigin = CBaseEntity::GetAbsOrigin(pCacheNPC);
    v22 = CDOTABaseAbility::GetCaster(this);
    FindUnitsInRadius(v22->m_iTeamNum.m_Value, AbsOrigin, pCacheNPC, flRadius, &hEntities, 2, 3, 0, 0, 0);
    if ( hEntities.m_Size > 0 )
    {
      v23 = 0;
      do
      {
        while ( 1 )
        {
          v24 = &hEntities.m_Memory.m_pMemory[v23];
          m_Index = v24->m_Index;
          if ( v24->m_Index + 2 > 1 )
          {
            v26 = v24->m_Index;
            v27 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v24->m_Index) >> 9) & 0x3F];
            if ( v27 != 0 )
            {
              v28 = &v27[v26 & 0x1FF];
              if ( v28 != 0 && m_Index == v28->m_EHandle.m_Index )
              {
                m_pInstance = v28->m_pInstance;
                if ( v28->m_pInstance != 0
                  && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
                  && LOBYTE(m_pInstance[71]._vptr_IHandleEntity) == 0
                  && (BYTE1(m_pInstance[58]._vptr_IHandleEntity) & 1) == 0 )
                {
                  break;
                }
              }
            }
          }
          if ( hEntities.m_Size <= ++v23 )
            goto LABEL_22;
        }
        v30 = CDOTABaseAbility::GetCaster(this);
        ApplyDamage(v30, m_pInstance, this, flDamage, 4, 0);
        v31 = GetParticleManager();
        Particle = CDOTA_ParticleManager::CreateParticle(
                     v31,
                     "particles/units/heroes/hero_omniknight/omniknight_purification_hit.vpcf",
                     1,
                     pCacheNPC,
                     0,
                     0);
        v33 = GetParticleManager();
        CDOTA_ParticleManager::SetParticleControlEnt(v33, Particle, 1, m_pInstance, 5, "attach_hitloc", vec3_invalid, 1);
        v34 = GetParticleManager();
        CDOTA_ParticleManager::ReleaseParticleIndex(v34, Particle);
        ++v23;
      }
      while ( hEntities.m_Size > v23 );
    }
LABEL_22:
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hEntities);
  }
}


// CDOTA_Ability_Omniknight_Purification::GetAbilityDamageToTargetOverInterval  (line 149, @0x0000000002be92f0, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>
int __fastcall CDOTA_Ability_Omniknight_Purification::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_Omniknight_Purification *const this,
        CDOTA_BaseNPC *pTarget,
        float fInterval,
        DAMAGE_TYPES eDamageType)
{
  if ( eDamageType == DAMAGE_TYPES::DAMAGE_TYPE_PURE )
    return CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "heal", -1, 1);
  else
    return 0;
}


// CDOTA_Ability_Omniknight_Repel::~CDOTA_Ability_Omniknight_Repel  (line 163, @0x0000000002c05530, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Omniknight_Repel::~CDOTA_Ability_Omniknight_Repel(
        CDOTA_Ability_Omniknight_Repel *const this)
{
  this->_vptr_IHandleEntity = &off_4549C10;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Omniknight_Repel::~CDOTA_Ability_Omniknight_Repel  (line 163, @0x0000000002c05550, libserver.so)  // inlines: ~CDOTA_Ability_Omniknight_Repel
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Omniknight_Repel::~CDOTA_Ability_Omniknight_Repel(
        CDOTA_Ability_Omniknight_Repel *const this)
{
  this->_vptr_IHandleEntity = &off_4549C10;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Omniknight_Repel::Schema_DynamicBinding  (line 165, @0x0000000002bfed00, libserver.so)
// globals: CDOTA_Ability_Omniknight_Repel::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Omniknight_Repel::Schema_DynamicBinding(
        const CDOTA_Ability_Omniknight_Repel *const this)
{
  return CDOTA_Ability_Omniknight_Repel::s_pSchemaBinding;
}


// CDOTA_Ability_Omniknight_Repel::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 165, @0x0000000002bfed10, libserver.so)
// globals: CDOTA_Ability_Omniknight_Repel::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Omniknight_Repel::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Omniknight_Repel::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Omniknight_Repel::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Omniknight_Repel::CEntityInstanceEntityClass::DestructInstance  (line 165, @0x0000000002bfed20, libserver.so)  // inlines: Destruct<CDOTA_Ability_Omniknight_Repel>
void __fastcall CDOTA_Ability_Omniknight_Repel::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Omniknight_Repel::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Omniknight_Repel::CEntityInstanceEntityClass::FreeInstance  (line 165, @0x0000000002bfed40, libserver.so)
void __fastcall CDOTA_Ability_Omniknight_Repel::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Omniknight_Repel::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Omniknight_Repel::CEntityInstanceEntityClass::CanAllocate  (line 165, @0x0000000002bfed60, libserver.so)
bool __fastcall CDOTA_Ability_Omniknight_Repel::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Omniknight_Repel::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Omniknight_Repel::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 165, @0x0000000002bfed70, libserver.so)
// globals: CDOTA_Ability_Omniknight_Repel::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Omniknight_Repel::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Omniknight_Repel::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Omniknight_Repel::s_pSchemaBinding;
}


// CDOTA_Ability_Omniknight_Repel::CEntityInstanceEntityClass::AllocateInstance  (line 165, @0x0000000002c023f0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Omniknight_Repel::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Omniknight_Repel::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Omniknight_Repel::CEntityInstanceEntityClass::ConstructInstance  (line 165, @0x0000000002c04ac0, libserver.so)  // inlines: CDOTA_Ability_Omniknight_Repel, Construct<CDOTA_Ability_Omniknight_Repel>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Omniknight_Repel::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Omniknight_Repel::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_4549C10;
  }
  return p;
}


// CDOTA_Ability_Omniknight_Repel::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 165, @0x0000000002c0aaf0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Omniknight_Repel::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Omniknight_Repel::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Omniknight_Repel::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 165, @0x0000000002c0ab10, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Omniknight_Repel::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Omniknight_Repel::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Omniknight_Repel::GetEntityClassInternal  (line 165, @0x0000000002c13a60, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_02.cpp
// strings: "CDOTA_Ability_Omniknight_Repel"
// globals: `guard variable for'CDOTA_Ability_Omniknight_Repel::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Omniknight_RepelClass, CDOTA_Ability_Omniknight_Repel::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Omniknight_RepelClass, __dso_handle, CDOTA_Ability_Omniknight_Repel::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Omniknight_Repel::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Omniknight_RepelClassInfo, CDOTA_Ability_Omniknight_Repel::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Omniknight_RepelClassInfo
CEntityClass *__cdecl CDOTA_Ability_Omniknight_Repel::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Omniknight_Repel::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Omniknight_RepelClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Omniknight_Repel::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Omniknight_RepelClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Omniknight_Repel::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Omniknight_RepelClass);
    CDOTA_Ability_Omniknight_Repel::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Omniknight_RepelClass._vptr_CEntityClass = off_4549B90;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Omniknight_Repel::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Omniknight_RepelClass);
    __cxa_atexit(
      CDOTA_Ability_Omniknight_Repel::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Omniknight_Repel::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Omniknight_RepelClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Omniknight_RepelClass != 0 )
    return &CDOTA_Ability_Omniknight_Repel::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Omniknight_RepelClass;
  if ( `guard variable for'CDOTA_Ability_Omniknight_Repel::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Omniknight_RepelClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Omniknight_Repel::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Omniknight_RepelClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Omniknight_Repel::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Omniknight_RepelClassInfo,
      "CDOTA_Ability_Omniknight_Repel",
      "omniknight_repel",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Omniknight_Repel::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Omniknight_RepelClassInfo);
  }
  CDOTA_Ability_Omniknight_Repel::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Omniknight_RepelClass.m_pClassInfo = &CDOTA_Ability_Omniknight_Repel::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Omniknight_RepelClassInfo;
  CDOTA_Ability_Omniknight_Repel::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Omniknight_RepelClass.m_pBaseClassInfo = CDOTA_Ability_Omniknight_Repel::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Omniknight_RepelClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Omniknight_RepelClass = &CDOTA_Ability_Omniknight_Repel::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Omniknight_RepelClass;
  CDOTA_Ability_Omniknight_Repel::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Omniknight_RepelClassInfo.m_pClass = &CDOTA_Ability_Omniknight_Repel::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Omniknight_RepelClass;
  CDOTA_Ability_Omniknight_Repel::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Omniknight_RepelClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Omniknight_RepelClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Omniknight_Repel::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Omniknight_RepelClass;
}


// CDOTA_Ability_Omniknight_Repel::GetConceptRecipientType  (line 169, @0x0000000002bfed80, libserver.so)
int __fastcall CDOTA_Ability_Omniknight_Repel::GetConceptRecipientType(CDOTA_Ability_Omniknight_Repel *const this)
{
  return 3;
}


// CDOTA_Ability_Omniknight_Repel::GetStolenActivityModifier  (line 171, @0x0000000002bfed90, libserver.so)
const char *__fastcall CDOTA_Ability_Omniknight_Repel::GetStolenActivityModifier(
        CDOTA_Ability_Omniknight_Repel *const this)
{
  return "repel";
}


// CDOTA_Ability_Omniknight_Repel::OnSpellStart  (line 178, @0x0000000002bed460, libserver.so)  // inlines: GetLevelSpecialValueFor<float>, GetTeamNumber, ToDOTABaseNPC, ToDOTABaseNPCHero, ToDOTABaseNPCRealHero
// calls: CDOTABaseAbility::GetCursorTarget, CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::KeyValues, KeyValues::SetFloat, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::ReleaseParticleIndex, CDOTA_BaseNPC::UnitEmitSound, EconEntity_OnOwnerKillEaterEvent (17 total)
// strings: "modifier_omniknight_repel", "particles/units/heroes/hero_omniknight/omniknight_repel_cast.vpcf", "attach_attack2", "Hero_Omniknight.Repel", "modifier_heavens_halberd_debuff", "modifier_silencer_curse_of_the_silent" (9 total)
// globals: INVALID_ITEM_DEF_INDEX
void __fastcall CDOTA_Ability_Omniknight_Repel::OnSpellStart(CDOTA_Ability_Omniknight_Repel *const this)
{
  CBaseEntity *CursorTarget; // rax
  CBaseEntity *v3; // rbx
  float v4; // xmm1_4
  unsigned __int8 m_Value; // r13
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v7; // r13
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v9; // r15
  CDOTA_ParticleManager *v10; // rax
  CDOTA_ParticleManager *v11; // rax
  CDOTA_BaseNPC *v12; // rax
  CDOTA_BaseNPC_Hero *v13; // r15
  kill_eater_event_t v14; // r13d
  CDOTA_BaseNPC *v15; // rax
  CDOTA_BaseNPC_Hero *v16; // rdi
  char bAlliedRepel; // [rsp+Ch] [rbp-54h]
  KeyValues kv; // [rsp+10h] [rbp-50h] BYREF
  unsigned __int64 v19; // [rsp+28h] [rbp-38h]

  v19 = __readfsqword(0x28u);
  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  v3 = CursorTarget;
  if ( CursorTarget != 0 && CursorTarget->m_bIsDOTANPC )
  {
    CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0);
    KeyValues::KeyValues(&kv, "modifier_omniknight_repel");
    KeyValues::SetFloat(&kv, "duration", v4);
    m_Value = v3->m_iTeamNum.m_Value;
    if ( m_Value == CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value )
    {
      CDOTA_BaseNPC::RemoveModifierByName(v3, "modifier_heavens_halberd_debuff");
      CDOTA_BaseNPC::RemoveModifierByName(v3, "modifier_silencer_curse_of_the_silent");
      CDOTA_BaseNPC::RemoveModifierByName(v3, "modifier_invoker_deafening_blast_disarm");
      CDOTA_BaseNPC::RemoveModifierByName(v3, "modifier_slark_pounce_leash");
      CDOTA_BaseNPC::RemoveModifierByName(v3, "modifier_oracle_fates_edict");
    }
    Caster = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::AddNewModifier(v3, Caster, this, "modifier_omniknight_repel", &kv, 0);
    v7 = CDOTABaseAbility::GetCaster(this);
    ParticleManager = GetParticleManager();
    LODWORD(v7) = CDOTA_ParticleManager::CreateParticle(
                    ParticleManager,
                    "particles/units/heroes/hero_omniknight/omniknight_repel_cast.vpcf",
                    2,
                    v7,
                    0,
                    0);
    v9 = CDOTABaseAbility::GetCaster(this);
    v10 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v10, v7, 0, v9, 5, "attach_attack2", vec3_invalid, 1);
    v11 = GetParticleManager();
    CDOTA_ParticleManager::ReleaseParticleIndex(v11, v7);
    CDOTA_BaseNPC::UnitEmitSound(v3, "Hero_Omniknight.Repel", 0.0, 0, 0);
    LOBYTE(v7) = v3->m_iTeamNum.m_Value;
    v12 = CDOTABaseAbility::GetCaster(this);
    LOBYTE(v12) = v7 == v12->m_iTeamNum.m_Value;
    v13 = 0;
    bAlliedRepel = v12;
    v14 = ((v12 << 31) >> 31) + 72;
    if ( v3->m_bIsDOTANPC
      && (v3[2].m_hEffectEntity.m_Value.m_Index & 1) != 0
      && LOBYTE(v3[4].m_pfnMoveDone.__delta) == 0 )
    {
      v13 = v3;
    }
    v15 = CDOTABaseAbility::GetCaster(this);
    if ( v15 != 0 && (v15->m_iUnitType & 1) != 0 )
      v16 = v15;
    else
      v16 = 0;
    EconEntity_OnOwnerKillEaterEvent(v16, v13, v14, 1, INVALID_ITEM_DEF_INDEX);
    Purge(v3, this, bAlliedRepel == 0 ? 2 : 4);
    KeyValues::~KeyValues(&kv);
  }
}


// CDOTA_Modifier_Omniknight_Repel::~CDOTA_Modifier_Omniknight_Repel  (line 219, @0x0000000002c03970, libserver.so)  // inlines: ~CDOTA_Modifier_MagicImmune
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Omniknight_Repel::~CDOTA_Modifier_Omniknight_Repel(
        CDOTA_Modifier_Omniknight_Repel *const this)
{
  this->_vptr_CDOTA_Buff = &off_411B710;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Omniknight_Repel::~CDOTA_Modifier_Omniknight_Repel  (line 219, @0x0000000002c03990, libserver.so)  // inlines: ~CDOTA_Modifier_MagicImmune, ~CDOTA_Modifier_Omniknight_Repel
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Omniknight_Repel::~CDOTA_Modifier_Omniknight_Repel(
        CDOTA_Modifier_Omniknight_Repel *const this)
{
  this->_vptr_CDOTA_Buff = &off_411B710;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Omniknight_Repel::GetEffectName  (line 226, @0x0000000002bfeda0, libserver.so)
// strings: "particles/units/heroes/hero_omniknight/omniknight_repel_buff.vpcf"
const char *__fastcall CDOTA_Modifier_Omniknight_Repel::GetEffectName(CDOTA_Modifier_Omniknight_Repel *const this)
{
  return "particles/units/heroes/hero_omniknight/omniknight_repel_buff.vpcf";
}


// CDOTA_Modifier_Omniknight_Repel::GetStatusEffectName  (line 227, @0x0000000002bfedb0, libserver.so)
// strings: "particles/status_fx/status_effect_repel.vpcf"
const char *__fastcall CDOTA_Modifier_Omniknight_Repel::GetStatusEffectName(
        CDOTA_Modifier_Omniknight_Repel *const this)
{
  return "particles/status_fx/status_effect_repel.vpcf";
}


// CDOTA_Modifier_Omniknight_Repel::StatusEffectPriority  (line 228, @0x0000000002bfedc0, libserver.so)
int __fastcall CDOTA_Modifier_Omniknight_Repel::StatusEffectPriority(CDOTA_Modifier_Omniknight_Repel *const this)
{
  return 53;
}


// CDOTA_Modifier_Omniknight_Repel::IsPurgable  (line 229, @0x0000000002bfedd0, libserver.so)
bool __fastcall CDOTA_Modifier_Omniknight_Repel::IsPurgable(CDOTA_Modifier_Omniknight_Repel *const this)
{
  return 0;
}


// CDOTA_Modifier_Omniknight_Repel::OnDestroy  (line 234, @0x0000000002bd5670, libserver.so)
// calls: CDOTA_Buff::GetParent, CBaseEntity::StopSound
// strings: "Hero_Omniknight.Repel"
void __fastcall CDOTA_Modifier_Omniknight_Repel::OnDestroy(CDOTA_Modifier_Omniknight_Repel *const this)
{
  CDOTA_BaseNPC *Parent; // rax

  Parent = CDOTA_Buff::GetParent(this);
  CBaseEntity::StopSound(Parent, "Hero_Omniknight.Repel");
}


// CDOTA_Ability_Omniknight_Degen_Aura::~CDOTA_Ability_Omniknight_Degen_Aura  (line 247, @0x0000000002c05580, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Omniknight_Degen_Aura::~CDOTA_Ability_Omniknight_Degen_Aura(
        CDOTA_Ability_Omniknight_Degen_Aura *const this)
{
  this->_vptr_IHandleEntity = &off_454AA30;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Omniknight_Degen_Aura::~CDOTA_Ability_Omniknight_Degen_Aura  (line 247, @0x0000000002c055a0, libserver.so)  // inlines: ~CDOTA_Ability_Omniknight_Degen_Aura
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Omniknight_Degen_Aura::~CDOTA_Ability_Omniknight_Degen_Aura(
        CDOTA_Ability_Omniknight_Degen_Aura *const this)
{
  this->_vptr_IHandleEntity = &off_454AA30;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Omniknight_Degen_Aura::Schema_DynamicBinding  (line 249, @0x0000000002bfede0, libserver.so)
// globals: CDOTA_Ability_Omniknight_Degen_Aura::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Omniknight_Degen_Aura::Schema_DynamicBinding(
        const CDOTA_Ability_Omniknight_Degen_Aura *const this)
{
  return CDOTA_Ability_Omniknight_Degen_Aura::s_pSchemaBinding;
}


// CDOTA_Ability_Omniknight_Degen_Aura::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 249, @0x0000000002bfedf0, libserver.so)
// globals: CDOTA_Ability_Omniknight_Degen_Aura::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Omniknight_Degen_Aura::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Omniknight_Degen_Aura::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Omniknight_Degen_Aura::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Omniknight_Degen_Aura::CEntityInstanceEntityClass::DestructInstance  (line 249, @0x0000000002bfee00, libserver.so)  // inlines: Destruct<CDOTA_Ability_Omniknight_Degen_Aura>
void __fastcall CDOTA_Ability_Omniknight_Degen_Aura::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Omniknight_Degen_Aura::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Omniknight_Degen_Aura::CEntityInstanceEntityClass::FreeInstance  (line 249, @0x0000000002bfee20, libserver.so)
void __fastcall CDOTA_Ability_Omniknight_Degen_Aura::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Omniknight_Degen_Aura::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Omniknight_Degen_Aura::CEntityInstanceEntityClass::CanAllocate  (line 249, @0x0000000002bfee40, libserver.so)
bool __fastcall CDOTA_Ability_Omniknight_Degen_Aura::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Omniknight_Degen_Aura::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Omniknight_Degen_Aura::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 249, @0x0000000002bfee50, libserver.so)
// globals: CDOTA_Ability_Omniknight_Degen_Aura::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Omniknight_Degen_Aura::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Omniknight_Degen_Aura::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Omniknight_Degen_Aura::s_pSchemaBinding;
}


// CDOTA_Ability_Omniknight_Degen_Aura::CEntityInstanceEntityClass::AllocateInstance  (line 249, @0x0000000002c02430, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Omniknight_Degen_Aura::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Omniknight_Degen_Aura::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Omniknight_Degen_Aura::CEntityInstanceEntityClass::ConstructInstance  (line 249, @0x0000000002c04af0, libserver.so)  // inlines: CDOTA_Ability_Omniknight_Degen_Aura, Construct<CDOTA_Ability_Omniknight_Degen_Aura>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Omniknight_Degen_Aura::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Omniknight_Degen_Aura::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_454AA30;
  }
  return p;
}


// CDOTA_Ability_Omniknight_Degen_Aura::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 249, @0x0000000002c0ab40, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Omniknight_Degen_Aura::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Omniknight_Degen_Aura::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Omniknight_Degen_Aura::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 249, @0x0000000002c0ab60, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Omniknight_Degen_Aura::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Omniknight_Degen_Aura::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Omniknight_Degen_Aura::GetEntityClassInternal  (line 249, @0x0000000002c13bb0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_02.cpp
// strings: "omniknight_degen_aura", "CDOTA_Ability_Omniknight_Degen_Aura"
// globals: `guard variable for'CDOTA_Ability_Omniknight_Degen_Aura::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Omniknight_Degen_AuraClass, CDOTA_Ability_Omniknight_Degen_Aura::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Omniknight_Degen_AuraClass, __dso_handle, CDOTA_Ability_Omniknight_Degen_Aura::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Omniknight_Degen_Aura::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Omniknight_Degen_AuraClassInfo, CDOTA_Ability_Omniknight_Degen_Aura::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Omniknight_Degen_AuraClassInfo
CEntityClass *__cdecl CDOTA_Ability_Omniknight_Degen_Aura::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Omniknight_Degen_Aura::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Omniknight_Degen_AuraClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Omniknight_Degen_Aura::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Omniknight_Degen_AuraClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Omniknight_Degen_Aura::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Omniknight_Degen_AuraClass);
    CDOTA_Ability_Omniknight_Degen_Aura::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Omniknight_Degen_AuraClass._vptr_CEntityClass = off_454A9B0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Omniknight_Degen_Aura::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Omniknight_Degen_AuraClass);
    __cxa_atexit(
      CDOTA_Ability_Omniknight_Degen_Aura::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Omniknight_Degen_Aura::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Omniknight_Degen_AuraClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Omniknight_Degen_AuraClass != 0 )
    return &CDOTA_Ability_Omniknight_Degen_Aura::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Omniknight_Degen_AuraClass;
  if ( `guard variable for'CDOTA_Ability_Omniknight_Degen_Aura::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Omniknight_Degen_AuraClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Omniknight_Degen_Aura::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Omniknight_Degen_AuraClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Omniknight_Degen_Aura::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Omniknight_Degen_AuraClassInfo,
      "CDOTA_Ability_Omniknight_Degen_Aura",
      "omniknight_degen_aura",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Omniknight_Degen_Aura::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Omniknight_Degen_AuraClassInfo);
  }
  CDOTA_Ability_Omniknight_Degen_Aura::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Omniknight_Degen_AuraClass.m_pClassInfo = &CDOTA_Ability_Omniknight_Degen_Aura::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Omniknight_Degen_AuraClassInfo;
  CDOTA_Ability_Omniknight_Degen_Aura::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Omniknight_Degen_AuraClass.m_pBaseClassInfo = CDOTA_Ability_Omniknight_Degen_Aura::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Omniknight_Degen_AuraClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Omniknight_Degen_AuraClass = &CDOTA_Ability_Omniknight_Degen_Aura::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Omniknight_Degen_AuraClass;
  CDOTA_Ability_Omniknight_Degen_Aura::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Omniknight_Degen_AuraClassInfo.m_pClass = &CDOTA_Ability_Omniknight_Degen_Aura::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Omniknight_Degen_AuraClass;
  CDOTA_Ability_Omniknight_Degen_Aura::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Omniknight_Degen_AuraClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Omniknight_Degen_AuraClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Omniknight_Degen_Aura::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Omniknight_Degen_AuraClass;
}


// CDOTA_Ability_Omniknight_Degen_Aura::GetIntrinsicModifierName  (line 252, @0x0000000002bfee60, libserver.so)
// strings: "modifier_omniknight_degen_aura"
const char *__fastcall CDOTA_Ability_Omniknight_Degen_Aura::GetIntrinsicModifierName(
        CDOTA_Ability_Omniknight_Degen_Aura *const this)
{
  return "modifier_omniknight_degen_aura";
}


// CDOTA_Modifier_Omniknight_Degen_Aura::~CDOTA_Modifier_Omniknight_Degen_Aura  (line 261, @0x0000000002c03920, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Omniknight_Degen_Aura::~CDOTA_Modifier_Omniknight_Degen_Aura(
        CDOTA_Modifier_Omniknight_Degen_Aura *const this)
{
  this->_vptr_CDOTA_Buff = &off_454B4F0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Omniknight_Degen_Aura::~CDOTA_Modifier_Omniknight_Degen_Aura  (line 261, @0x0000000002c03940, libserver.so)  // inlines: ~CDOTA_Modifier_Omniknight_Degen_Aura
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Omniknight_Degen_Aura::~CDOTA_Modifier_Omniknight_Degen_Aura(
        CDOTA_Modifier_Omniknight_Degen_Aura *const this)
{
  this->_vptr_CDOTA_Buff = &off_454B4F0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Omniknight_Degen_Aura::IsAura  (line 269, @0x0000000002bfee70, libserver.so)
bool __fastcall CDOTA_Modifier_Omniknight_Degen_Aura::IsAura(CDOTA_Modifier_Omniknight_Degen_Aura *const this)
{
  return 1;
}


// CDOTA_Modifier_Omniknight_Degen_Aura::GetModifierAura  (line 270, @0x0000000002bfee80, libserver.so)
// strings: "modifier_omniknight_degen_aura_effect"
const char *__fastcall CDOTA_Modifier_Omniknight_Degen_Aura::GetModifierAura(
        CDOTA_Modifier_Omniknight_Degen_Aura *const this)
{
  return "modifier_omniknight_degen_aura_effect";
}


// CDOTA_Modifier_Omniknight_Degen_Aura::GetAuraSearchTeam  (line 272, @0x0000000002bfee90, libserver.so)
int __fastcall CDOTA_Modifier_Omniknight_Degen_Aura::GetAuraSearchTeam(
        CDOTA_Modifier_Omniknight_Degen_Aura *const this)
{
  return 2;
}


// CDOTA_Modifier_Omniknight_Degen_Aura::GetAuraSearchType  (line 273, @0x0000000002bfeea0, libserver.so)
int __fastcall CDOTA_Modifier_Omniknight_Degen_Aura::GetAuraSearchType(
        CDOTA_Modifier_Omniknight_Degen_Aura *const this)
{
  return 3;
}


// CDOTA_Modifier_Omniknight_Degen_Aura::GetAuraRadius  (line 274, @0x0000000002bfeeb0, libserver.so)
int __fastcall CDOTA_Modifier_Omniknight_Degen_Aura::GetAuraRadius(CDOTA_Modifier_Omniknight_Degen_Aura *const this)
{
  return this->radius;
}


// CDOTA_Modifier_Omniknight_Degen_Aura::GetAuraDuration  (line 275, @0x0000000002bfeec0, libserver.so)
float __fastcall CDOTA_Modifier_Omniknight_Degen_Aura::GetAuraDuration(
        CDOTA_Modifier_Omniknight_Degen_Aura *const this)
{
  return 1.0;
}


// CDOTA_Modifier_Omniknight_Degen_Aura::DoesAuraCountAsAssist  (line 276, @0x0000000002bfeed0, libserver.so)
bool __fastcall CDOTA_Modifier_Omniknight_Degen_Aura::DoesAuraCountAsAssist(
        CDOTA_Modifier_Omniknight_Degen_Aura *const this)
{
  return 1;
}


// CDOTA_Modifier_Omniknight_Degen_Aura::IsHidden  (line 279, @0x0000000002bfeee0, libserver.so)
bool __fastcall CDOTA_Modifier_Omniknight_Degen_Aura::IsHidden(CDOTA_Modifier_Omniknight_Degen_Aura *const this)
{
  return 1;
}


// CDOTA_Modifier_Omniknight_Degen_Aura::OnCreated  (line 291, @0x0000000002beace0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
void __fastcall CDOTA_Modifier_Omniknight_Degen_Aura::OnCreated(
        CDOTA_Modifier_Omniknight_Degen_Aura *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "radius", -1, 0);
  else
    this->radius = 0;
}


// CDOTA_Modifier_Omniknight_Degen_Aura::OnRefresh  (line 298, @0x0000000002beb160, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
void __fastcall CDOTA_Modifier_Omniknight_Degen_Aura::OnRefresh(
        CDOTA_Modifier_Omniknight_Degen_Aura *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "radius", -1, 0);
  else
    this->radius = 0;
}


// CDOTA_Modifier_Omniknight_Degen_Aura_Effect::~CDOTA_Modifier_Omniknight_Degen_Aura_Effect  (line 307, @0x0000000002c038d0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Omniknight_Degen_Aura_Effect::~CDOTA_Modifier_Omniknight_Degen_Aura_Effect(
        CDOTA_Modifier_Omniknight_Degen_Aura_Effect *const this)
{
  this->_vptr_CDOTA_Buff = &off_454B810;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Omniknight_Degen_Aura_Effect::~CDOTA_Modifier_Omniknight_Degen_Aura_Effect  (line 307, @0x0000000002c038f0, libserver.so)  // inlines: ~CDOTA_Modifier_Omniknight_Degen_Aura_Effect
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Omniknight_Degen_Aura_Effect::~CDOTA_Modifier_Omniknight_Degen_Aura_Effect(
        CDOTA_Modifier_Omniknight_Degen_Aura_Effect *const this)
{
  this->_vptr_CDOTA_Buff = &off_454B810;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Omniknight_Degen_Aura_Effect::GetEffectName  (line 315, @0x0000000002c05dc0, libserver.so)
// calls: CDOTA_Buff::GetParent
// strings: "particles/units/heroes/hero_omniknight/omniknight_degen_aura_debuff.vpcf"
const char *__fastcall CDOTA_Modifier_Omniknight_Degen_Aura_Effect::GetEffectName(
        CDOTA_Modifier_Omniknight_Degen_Aura_Effect *const this)
{
  CDOTA_BaseNPC *Parent; // rax
  const char *v2; // rdx

  Parent = CDOTA_Buff::GetParent(this);
  v2 = 0;
  if ( SLOBYTE(Parent->m_iUnitType) >= 0 )
    return "particles/units/heroes/hero_omniknight/omniknight_degen_aura_debuff.vpcf";
  return v2;
}


// CDOTA_Modifier_Omniknight_Degen_Aura_Effect::OnCreated  (line 330, @0x0000000002beb4c0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
void __fastcall CDOTA_Modifier_Omniknight_Degen_Aura_Effect::OnCreated(
        CDOTA_Modifier_Omniknight_Degen_Aura_Effect *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->speed_bonus = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "speed_bonus", -1, 0);
  else
    this->speed_bonus = 0;
}


// CDOTA_Modifier_Omniknight_Degen_Aura_Effect::OnRefresh  (line 337, @0x0000000002beb280, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
void __fastcall CDOTA_Modifier_Omniknight_Degen_Aura_Effect::OnRefresh(
        CDOTA_Modifier_Omniknight_Degen_Aura_Effect *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->speed_bonus = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "speed_bonus", -1, 0);
  else
    this->speed_bonus = 0;
}


// CDOTA_Modifier_Omniknight_Degen_Aura_Effect::DeclareFunctions  (line 344, @0x0000000002bd3480, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Omniknight_Degen_Aura_Effect::GetModifierMoveSpeedBonus_Percentage(CModifierParams const&), CDOTA_Modifier_Omniknight_Degen_Aura_Effect::GetModifierAttackSpeedBonus_Constant(CModifierParams const&)
void __fastcall CDOTA_Modifier_Omniknight_Degen_Aura_Effect::DeclareFunctions(
        CDOTA_Modifier_Omniknight_Degen_Aura_Effect *const this)
{
  this->m_Functions[13].__pfn = CDOTA_Modifier_Omniknight_Degen_Aura_Effect::GetModifierMoveSpeedBonus_Percentage;
  this->m_Functions[13].__delta = 0;
  this->m_Functions[24].__delta = 0;
  this->m_Functions[24].__pfn = CDOTA_Modifier_Omniknight_Degen_Aura_Effect::GetModifierAttackSpeedBonus_Constant;
}


// CDOTA_Modifier_Omniknight_Degen_Aura_Effect::GetModifierMoveSpeedBonus_Percentage  (line 352, @0x0000000002be9320, libserver.so)
// calls: CDOTA_Buff::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "special_bonus_unique_omniknight_2"
ModifierVariant_t __fastcall CDOTA_Modifier_Omniknight_Degen_Aura_Effect::GetModifierMoveSpeedBonus_Percentage(
        CDOTA_Modifier_Omniknight_Degen_Aura_Effect *const this,
        const CModifierParams *const params)
{
  __m128i v4; // xmm0
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  int LevelSpecialValue; // eax
  ModifierVariant_t result; // 0:rax.16

  if ( CDOTA_Buff::GetCaster(this) != 0
    && (result.m_szVal = CDOTA_Buff::GetCaster(this), *&result.m_eType = 1, (result.m_szVal[2787] & 0x10) != 0) )
  {
    result.m_szVal = 0;
  }
  else
  {
    if ( CDOTA_Buff::GetCaster(this) != 0
      && (Caster = CDOTA_Buff::GetCaster(this),
          (AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "special_bonus_unique_omniknight_2", 0)) != 0)
      && AbilityByName->m_iLevel.m_Value > 0 )
    {
      LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(AbilityByName, "value", 1, 1);
    }
    else
    {
      LevelSpecialValue = 0;
    }
    result.m_szVal = 0;
    *v4.m128i_i32 = (this->speed_bonus + LevelSpecialValue);
    *&result.m_eType = (_mm_cvtsi128_si32(v4) << 32) | 1;
  }
  return result;
}


// CDOTA_Modifier_Omniknight_Degen_Aura_Effect::GetModifierAttackSpeedBonus_Constant  (line 370, @0x0000000002be93e0, libserver.so)
// calls: CDOTA_Buff::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "special_bonus_unique_omniknight_2"
ModifierVariant_t __fastcall CDOTA_Modifier_Omniknight_Degen_Aura_Effect::GetModifierAttackSpeedBonus_Constant(
        CDOTA_Modifier_Omniknight_Degen_Aura_Effect *const this,
        const CModifierParams *const params)
{
  __m128i v4; // xmm0
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  int LevelSpecialValue; // eax
  ModifierVariant_t result; // 0:rax.16

  if ( CDOTA_Buff::GetCaster(this) != 0
    && (result.m_szVal = CDOTA_Buff::GetCaster(this), *&result.m_eType = 1, (result.m_szVal[2787] & 0x10) != 0) )
  {
    result.m_szVal = 0;
  }
  else
  {
    if ( CDOTA_Buff::GetCaster(this) != 0
      && (Caster = CDOTA_Buff::GetCaster(this),
          (AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "special_bonus_unique_omniknight_2", 0)) != 0)
      && AbilityByName->m_iLevel.m_Value > 0 )
    {
      LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(AbilityByName, "value", 1, 1);
    }
    else
    {
      LevelSpecialValue = 0;
    }
    result.m_szVal = 0;
    *v4.m128i_i32 = (this->speed_bonus + LevelSpecialValue);
    *&result.m_eType = (_mm_cvtsi128_si32(v4) << 32) | 1;
  }
  return result;
}


// CDOTA_Ability_Omniknight_GuardianAngel::~CDOTA_Ability_Omniknight_GuardianAngel  (line 392, @0x0000000002c055d0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Omniknight_GuardianAngel::~CDOTA_Ability_Omniknight_GuardianAngel(
        CDOTA_Ability_Omniknight_GuardianAngel *const this)
{
  this->_vptr_IHandleEntity = &off_454BB70;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Omniknight_GuardianAngel::~CDOTA_Ability_Omniknight_GuardianAngel  (line 392, @0x0000000002c055f0, libserver.so)  // inlines: ~CDOTA_Ability_Omniknight_GuardianAngel
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Omniknight_GuardianAngel::~CDOTA_Ability_Omniknight_GuardianAngel(
        CDOTA_Ability_Omniknight_GuardianAngel *const this)
{
  this->_vptr_IHandleEntity = &off_454BB70;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Omniknight_GuardianAngel::Schema_DynamicBinding  (line 394, @0x0000000002bfeef0, libserver.so)
// globals: CDOTA_Ability_Omniknight_GuardianAngel::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Omniknight_GuardianAngel::Schema_DynamicBinding(
        const CDOTA_Ability_Omniknight_GuardianAngel *const this)
{
  return CDOTA_Ability_Omniknight_GuardianAngel::s_pSchemaBinding;
}


// CDOTA_Ability_Omniknight_GuardianAngel::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 394, @0x0000000002bfef00, libserver.so)
// globals: CDOTA_Ability_Omniknight_GuardianAngel::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Omniknight_GuardianAngel::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Omniknight_GuardianAngel::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Omniknight_GuardianAngel::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Omniknight_GuardianAngel::CEntityInstanceEntityClass::DestructInstance  (line 394, @0x0000000002bfef10, libserver.so)  // inlines: Destruct<CDOTA_Ability_Omniknight_GuardianAngel>
void __fastcall CDOTA_Ability_Omniknight_GuardianAngel::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Omniknight_GuardianAngel::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Omniknight_GuardianAngel::CEntityInstanceEntityClass::FreeInstance  (line 394, @0x0000000002bfef30, libserver.so)
void __fastcall CDOTA_Ability_Omniknight_GuardianAngel::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Omniknight_GuardianAngel::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Omniknight_GuardianAngel::CEntityInstanceEntityClass::CanAllocate  (line 394, @0x0000000002bfef50, libserver.so)
bool __fastcall CDOTA_Ability_Omniknight_GuardianAngel::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Omniknight_GuardianAngel::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Omniknight_GuardianAngel::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 394, @0x0000000002bfef60, libserver.so)
// globals: CDOTA_Ability_Omniknight_GuardianAngel::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Omniknight_GuardianAngel::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Omniknight_GuardianAngel::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Omniknight_GuardianAngel::s_pSchemaBinding;
}


// CDOTA_Ability_Omniknight_GuardianAngel::CEntityInstanceEntityClass::AllocateInstance  (line 394, @0x0000000002c02470, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Omniknight_GuardianAngel::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Omniknight_GuardianAngel::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Omniknight_GuardianAngel::CEntityInstanceEntityClass::ConstructInstance  (line 394, @0x0000000002c04b20, libserver.so)  // inlines: CDOTA_Ability_Omniknight_GuardianAngel, Construct<CDOTA_Ability_Omniknight_GuardianAngel>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Omniknight_GuardianAngel::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Omniknight_GuardianAngel::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_454BB70;
  }
  return p;
}


// CDOTA_Ability_Omniknight_GuardianAngel::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 394, @0x0000000002c0ab90, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Omniknight_GuardianAngel::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Omniknight_GuardianAngel::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Omniknight_GuardianAngel::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 394, @0x0000000002c0abb0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Omniknight_GuardianAngel::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Omniknight_GuardianAngel::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Omniknight_GuardianAngel::GetEntityClassInternal  (line 394, @0x0000000002c13d00, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_02.cpp
// strings: "omniknight_guardian_angel", "CDOTA_Ability_Omniknight_GuardianAngel"
// globals: `guard variable for'CDOTA_Ability_Omniknight_GuardianAngel::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Omniknight_GuardianAngelClass, CDOTA_Ability_Omniknight_GuardianAngel::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Omniknight_GuardianAngelClass, __dso_handle, CDOTA_Ability_Omniknight_GuardianAngel::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Omniknight_GuardianAngel::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Omniknight_GuardianAngelClassInfo, CDOTA_Ability_Omniknight_GuardianAngel::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Omniknight_GuardianAngelClassInfo
CEntityClass *__cdecl CDOTA_Ability_Omniknight_GuardianAngel::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Omniknight_GuardianAngel::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Omniknight_GuardianAngelClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Omniknight_GuardianAngel::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Omniknight_GuardianAngelClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Omniknight_GuardianAngel::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Omniknight_GuardianAngelClass);
    CDOTA_Ability_Omniknight_GuardianAngel::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Omniknight_GuardianAngelClass._vptr_CEntityClass = off_454BAF0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Omniknight_GuardianAngel::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Omniknight_GuardianAngelClass);
    __cxa_atexit(
      CDOTA_Ability_Omniknight_GuardianAngel::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Omniknight_GuardianAngel::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Omniknight_GuardianAngelClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Omniknight_GuardianAngelClass != 0 )
    return &CDOTA_Ability_Omniknight_GuardianAngel::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Omniknight_GuardianAngelClass;
  if ( `guard variable for'CDOTA_Ability_Omniknight_GuardianAngel::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Omniknight_GuardianAngelClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Omniknight_GuardianAngel::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Omniknight_GuardianAngelClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Omniknight_GuardianAngel::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Omniknight_GuardianAngelClassInfo,
      "CDOTA_Ability_Omniknight_GuardianAngel",
      "omniknight_guardian_angel",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Omniknight_GuardianAngel::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Omniknight_GuardianAngelClassInfo);
  }
  CDOTA_Ability_Omniknight_GuardianAngel::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Omniknight_GuardianAngelClass.m_pClassInfo = &CDOTA_Ability_Omniknight_GuardianAngel::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Omniknight_GuardianAngelClassInfo;
  CDOTA_Ability_Omniknight_GuardianAngel::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Omniknight_GuardianAngelClass.m_pBaseClassInfo = CDOTA_Ability_Omniknight_GuardianAngel::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Omniknight_GuardianAngelClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Omniknight_GuardianAngelClass = &CDOTA_Ability_Omniknight_GuardianAngel::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Omniknight_GuardianAngelClass;
  CDOTA_Ability_Omniknight_GuardianAngel::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Omniknight_GuardianAngelClassInfo.m_pClass = &CDOTA_Ability_Omniknight_GuardianAngel::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Omniknight_GuardianAngelClass;
  CDOTA_Ability_Omniknight_GuardianAngel::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Omniknight_GuardianAngelClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Omniknight_GuardianAngelClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Omniknight_GuardianAngel::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Omniknight_GuardianAngelClass;
}


// CDOTA_Ability_Omniknight_GuardianAngel::GetConceptRecipientType  (line 399, @0x0000000002bfef70, libserver.so)
int __fastcall CDOTA_Ability_Omniknight_GuardianAngel::GetConceptRecipientType(
        CDOTA_Ability_Omniknight_GuardianAngel *const this)
{
  return 3;
}


// CDOTA_Ability_Omniknight_GuardianAngel::GetStolenActivityModifier  (line 401, @0x0000000002bfef80, libserver.so)
const char *__fastcall CDOTA_Ability_Omniknight_GuardianAngel::GetStolenActivityModifier(
        CDOTA_Ability_Omniknight_GuardianAngel *const this)
{
  return "guardian_angel";
}


// CDOTA_Ability_Omniknight_GuardianAngel::YouForgotToImplementOrDeclareServerClass  (line 408, @0x0000000002bd34c0, libserver.so)
int __fastcall CDOTA_Ability_Omniknight_GuardianAngel::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Omniknight_GuardianAngel *const this)
{
  return 0;
}


// CDOTA_Ability_Omniknight_GuardianAngel::GetServerClass  (line 408, @0x0000000002bdc730, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Omniknight_GuardianAngel::GetServerClass(
        CDOTA_Ability_Omniknight_GuardianAngel *const this)
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


// CDOTA_Ability_Omniknight_GuardianAngel::OnSpellStart  (line 417, @0x0000000002bf0860, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetAbilityData, GetEntityIdentity, GetEntryIndex, GetInstance, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>, GetTeamNumber, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlVector
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::KeyValues, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::HasScepter, KeyValues::SetFloat, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, CDOTA_BaseNPC::UnitEmitSound, CDOTA_BaseNPC::AddNewModifier, CBaseModelEntity::CanBeSeenByTeam, CDOTAGamerules::SendProjectionAbilityMessage (17 total)
// strings: "modifier_omniknight_guardian_angel", "Hero_Omniknight.GuardianAngel.Cast", "modifier_omninight_guardian_angel", "Hero_Omniknight.GuardianAngel"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Ability_Omniknight_GuardianAngel::OnSpellStart(
        CDOTA_Ability_Omniknight_GuardianAngel *const this)
{
  int LevelSpecialValue; // r12d
  CDOTA_BaseNPC *Caster; // rax
  float v4; // xmm1_4
  CDOTA_BaseNPC *v5; // rax
  __m128i v6; // xmm3
  CDOTA_BaseNPC *v7; // r12
  CDOTA_BaseNPC *v8; // rax
  const Vector *AbsOrigin; // rbx
  CDOTA_BaseNPC *v10; // rax
  CDOTA_BaseNPC *v11; // rax
  __int64 v12; // rbx
  int v13; // r12d
  bool CanBeSeenByTeam; // r15
  CHandle<CBaseEntity> *v15; // rdx
  uint32 m_Index; // eax
  __int16 v17; // cx
  CEntityIdentity *v18; // rdx
  CEntityIdentity *v19; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  CDOTA_BaseNPC *v21; // rax
  CDOTA_BaseNPC *v22; // rax
  float v23; // r12d
  DOTAAbilityData_t *m_pAbilityData; // rax
  int m_iAbilityID; // r13d
  CDOTA_BaseNPC *v26; // rax
  const Vector *v27; // rbx
  CDOTA_BaseNPC *v28; // rax
  float v29; // xmm3_4
  float v30; // r12d
  CDOTA_BaseNPC *v31; // rbx
  CDOTA_BaseNPC *v32; // rax
  const Vector *v33; // r13
  CDOTA_BaseNPC *v34; // rax
  float duration_scepter; // [rsp+24h] [rbp-8Ch]
  float duration; // [rsp+30h] [rbp-80h]
  int nEnemyTeam; // [rsp+34h] [rbp-7Ch]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hEntities; // [rsp+40h] [rbp-70h] BYREF
  KeyValues kv; // [rsp+60h] [rbp-50h] BYREF
  unsigned __int64 v40; // [rsp+78h] [rbp-38h]

  v40 = __readfsqword(0x28u);
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "radius", -1, 0);
  duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0);
  duration_scepter = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration_scepter", -1, 0);
  KeyValues::KeyValues(&kv, "modifier_omniknight_guardian_angel");
  Caster = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::HasScepter(Caster);
  KeyValues::SetFloat(&kv, "duration", v4);
  hEntities.m_Size = 0;
  hEntities.m_Memory.m_pMemory = 0;
  hEntities.m_Memory.m_nAllocationCount = 0;
  hEntities.m_Memory.m_nGrowSize = 0;
  v5 = CDOTABaseAbility::GetCaster(this);
  if ( CDOTA_BaseNPC::HasScepter(v5) )
  {
    v7 = CDOTABaseAbility::GetCaster(this);
    v8 = CDOTABaseAbility::GetCaster(this);
    AbsOrigin = CBaseEntity::GetAbsOrigin(v8);
    v10 = CDOTABaseAbility::GetCaster(this);
    FindUnitsInRadius(v10->m_iTeamNum.m_Value, AbsOrigin, v7, -1.0, &hEntities, 1, 7, 80, 0, 0);
  }
  else
  {
    *v6.m128i_i32 = LevelSpecialValue;
    v30 = COERCE_FLOAT(_mm_cvtsi128_si32(v6));
    v31 = CDOTABaseAbility::GetCaster(this);
    v32 = CDOTABaseAbility::GetCaster(this);
    v33 = CBaseEntity::GetAbsOrigin(v32);
    v34 = CDOTABaseAbility::GetCaster(this);
    FindUnitsInRadius(v34->m_iTeamNum.m_Value, v33, v31, v30, &hEntities, 1, 3, 16, 0, 0);
  }
  v11 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::UnitEmitSound(v11, "Hero_Omniknight.GuardianAngel.Cast", 0.0, 0, 0);
  nEnemyTeam = (CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value == 2) + 2;
  if ( hEntities.m_Size > 0 )
  {
    v12 = 0;
    v13 = 0;
    CanBeSeenByTeam = 0;
    do
    {
      while ( 1 )
      {
        v15 = &hEntities.m_Memory.m_pMemory[v12];
        m_Index = hEntities.m_Memory.m_pMemory[v12].m_Index;
        if ( m_Index + 2 > 1 )
        {
          v17 = v15->m_Index;
          v18 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v15->m_Index) >> 9) & 0x3F];
          if ( v18 != 0 )
          {
            v19 = &v18[v17 & 0x1FF];
            if ( v19 != 0 && m_Index == v19->m_EHandle.m_Index )
            {
              m_pInstance = v19->m_pInstance;
              if ( v19->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
              {
                v21 = CDOTABaseAbility::GetCaster(this);
                CDOTA_BaseNPC::AddNewModifier(m_pInstance, v21, this, "modifier_omninight_guardian_angel", &kv, 0);
                CDOTA_BaseNPC::UnitEmitSound(m_pInstance, "Hero_Omniknight.GuardianAngel", 0.0, 0, 0);
                if ( !CanBeSeenByTeam )
                  break;
              }
            }
          }
        }
        ++v13;
        ++v12;
        if ( hEntities.m_Size <= v13 )
          goto LABEL_14;
      }
      ++v13;
      ++v12;
      CanBeSeenByTeam = CBaseModelEntity::CanBeSeenByTeam(m_pInstance, nEnemyTeam);
    }
    while ( hEntities.m_Size > v13 );
LABEL_14:
    if ( CanBeSeenByTeam )
    {
      v22 = CDOTABaseAbility::GetCaster(this);
      v23 = duration;
      if ( CDOTA_BaseNPC::HasScepter(v22) )
        v23 = duration_scepter;
      m_pAbilityData = this->m_pAbilityData;
      if ( m_pAbilityData == 0 )
      {
        CDOTABaseAbility::LoadAbilityData(this, 0);
        m_pAbilityData = this->m_pAbilityData;
      }
      m_iAbilityID = m_pAbilityData->m_iAbilityID;
      v26 = CDOTABaseAbility::GetCaster(this);
      v27 = CBaseEntity::GetAbsOrigin(v26);
      v28 = CDOTABaseAbility::GetCaster(this);
      CDOTAGamerules::SendProjectionAbilityMessage(g_pGameRules, v28, 1, m_iAbilityID, 1, 0, *&v27->x, v27->z, v23, v29);
    }
  }
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hEntities);
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Modifier_Omniknight_GuardianAngel::~CDOTA_Modifier_Omniknight_GuardianAngel  (line 473, @0x0000000002c03880, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Omniknight_GuardianAngel::~CDOTA_Modifier_Omniknight_GuardianAngel(
        CDOTA_Modifier_Omniknight_GuardianAngel *const this)
{
  this->_vptr_CDOTA_Buff = &off_454C630;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Omniknight_GuardianAngel::~CDOTA_Modifier_Omniknight_GuardianAngel  (line 473, @0x0000000002c038a0, libserver.so)  // inlines: ~CDOTA_Modifier_Omniknight_GuardianAngel
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Omniknight_GuardianAngel::~CDOTA_Modifier_Omniknight_GuardianAngel(
        CDOTA_Modifier_Omniknight_GuardianAngel *const this)
{
  this->_vptr_CDOTA_Buff = &off_454C630;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Omniknight_GuardianAngel::GetEffectName  (line 483, @0x0000000002c05d60, libserver.so)
// calls: CDOTA_Buff::GetParent, CDOTA_Buff::GetCaster
// strings: "particles/units/heroes/hero_omniknight/omniknight_guardian_angel_halo_buff.vpcf", "particles/units/heroes/hero_omniknight/omniknight_guardian_angel_wings_buff.vpcf"
const char *__fastcall CDOTA_Modifier_Omniknight_GuardianAngel::GetEffectName(
        CDOTA_Modifier_Omniknight_GuardianAngel *const this)
{
  CDOTA_BaseNPC *Parent; // r12
  CDOTA_BaseNPC *Caster; // rax
  const char *v4; // rdx

  Parent = CDOTA_Buff::GetParent(this);
  Caster = CDOTA_Buff::GetCaster(this);
  v4 = "particles/units/heroes/hero_omniknight/omniknight_guardian_angel_halo_buff.vpcf";
  if ( Parent != Caster )
    return "particles/units/heroes/hero_omniknight/omniknight_guardian_angel_wings_buff.vpcf";
  return v4;
}


// CDOTA_Modifier_Omniknight_GuardianAngel::GetEffectAttachType  (line 484, @0x0000000002bfef90, libserver.so)
int __fastcall CDOTA_Modifier_Omniknight_GuardianAngel::GetEffectAttachType(
        CDOTA_Modifier_Omniknight_GuardianAngel *const this)
{
  return 7;
}


// CDOTA_Modifier_Omniknight_GuardianAngel::ShouldUseOverheadOffset  (line 485, @0x0000000002bfefa0, libserver.so)
bool __fastcall CDOTA_Modifier_Omniknight_GuardianAngel::ShouldUseOverheadOffset(
        CDOTA_Modifier_Omniknight_GuardianAngel *const this)
{
  return 1;
}


// CDOTA_Modifier_Omniknight_GuardianAngel::GetStatusEffectName  (line 486, @0x0000000002bfefb0, libserver.so)
// strings: "particles/status_fx/status_effect_guardian_angel.vpcf"
const char *__fastcall CDOTA_Modifier_Omniknight_GuardianAngel::GetStatusEffectName(
        CDOTA_Modifier_Omniknight_GuardianAngel *const this)
{
  return "particles/status_fx/status_effect_guardian_angel.vpcf";
}


// CDOTA_Modifier_Omniknight_GuardianAngel::StatusEffectPriority  (line 487, @0x0000000002bfefc0, libserver.so)
int __fastcall CDOTA_Modifier_Omniknight_GuardianAngel::StatusEffectPriority(
        CDOTA_Modifier_Omniknight_GuardianAngel *const this)
{
  return 14;
}


// CDOTA_Modifier_Omniknight_GuardianAngel::OnCreated  (line 495, @0x0000000002bd34d0, libserver.so)
void __fastcall CDOTA_Modifier_Omniknight_GuardianAngel::OnCreated(
        CDOTA_Modifier_Omniknight_GuardianAngel *const this,
        KeyValues *pKV)
{
  ;
}


// CDOTA_Modifier_Omniknight_GuardianAngel::DeclareFunctions  (line 506, @0x0000000002bd34e0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Omniknight_GuardianAngel::GetAbsoluteNoDamagePhysical(CModifierParams const&)
void __fastcall CDOTA_Modifier_Omniknight_GuardianAngel::DeclareFunctions(
        CDOTA_Modifier_Omniknight_GuardianAngel *const this)
{
  this->m_Functions[103].__pfn = CDOTA_Modifier_Omniknight_GuardianAngel::GetAbsoluteNoDamagePhysical;
  this->m_Functions[103].__delta = 0;
}


// CDOTA_Modifier_Omniknight_GuardianAngel::GetAbsoluteNoDamagePhysical  (line 513, @0x0000000002bd3500, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Omniknight_GuardianAngel::GetAbsoluteNoDamagePhysical(
        CDOTA_Modifier_Omniknight_GuardianAngel *const this,
        const CModifierParams *const params)
{
  return 0x3F80000000000001uLL;
}


