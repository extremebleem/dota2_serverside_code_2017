// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/dota_misc_abilities.cpp:26
class CDOTA_Ability_ControllerTest_MeleeAttack : public CDOTABaseAbility {
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
	CDOTA_Ability_ControllerTest_MeleeAttack(CDOTA_Ability_ControllerTest_MeleeAttack &);
	CDOTA_Ability_ControllerTest_MeleeAttack(CDOTA_Ability_ControllerTest_MeleeAttack &);
	CDOTA_Ability_ControllerTest_MeleeAttack();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual Activity GetCastAnimation();
	virtual float GetCastPoint();
	virtual bool OnAbilityPhaseStart();
	virtual void OnSpellStart();
	virtual bool ProcsMagicStick();
	virtual bool IsStealable();
	virtual const char * GetIntrinsicModifierName();
	virtual ~CDOTA_Ability_ControllerTest_MeleeAttack();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[234] GetCastAnimation
	// vtable[231] GetCastPoint
	// vtable[264] OnAbilityPhaseStart
	// vtable[266] OnSpellStart
	// vtable[239] ProcsMagicStick
	// vtable[305] IsStealable
	// vtable[280] GetIntrinsicModifierName
	// sizeof = 912
};

// src/game/shared/dota/dota_misc_abilities.cpp:95
class CDOTA_Modifier_ControllerTest_MeleeAttack : public CDOTA_Buff {
public:

private:

	int m_nDamageRadius;  // +0xba8
	int m_nDamagePercent;  // +0xbac
	float m_flDamageWindow;  // +0xbb0
	bool m_bDebug;  // +0xbb4

	char m_szActivityModifier[256];  // +0xbd0
	char m_szAttackLandSound[256];  // +0xcd0
	char m_szAttachmentName1[256];  // +0xdd0
	char m_szAttachmentName2[256];  // +0xed0
	char m_szAttachmentName3[256];  // +0xfd0
	CDOTA_Modifier_ControllerTest_MeleeAttack();
	virtual void OnCreated(KeyValues *);
	virtual void OnIntervalThink();
	virtual bool IsHidden();
	virtual bool IsPurgable();
	virtual void OnDestroy();
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierDisableTurning(const CModifierParams &);
	ModifierVariant_t GetModifierDamageOutgoing_Percentage(const CModifierParams &);
	ModifierVariant_t GetActivityTranslationModifiers(const CModifierParams &);
	virtual void CheckState(CDOTABuffState &);
	virtual void AddCustomTransmiterData(CDOTAModifierBuffTableEntry &);
	virtual ~CDOTA_Modifier_ControllerTest_MeleeAttack();

	// vtable[57] OnCreated
	// vtable[56] OnIntervalThink
	// vtable[11] IsHidden
	// vtable[14] IsPurgable
	// vtable[60] OnDestroy
	// vtable[65] DeclareFunctions
	// vtable[5] CheckState
	// vtable[10] AddCustomTransmiterData
	// sizeof = 4304
};

// src/game/shared/dota/dota_misc_abilities.cpp:281
class CDOTA_Ability_ControllerTest_SvenOverheadAttack : public CDOTABaseAbility {
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
	CDOTA_Ability_ControllerTest_SvenOverheadAttack(CDOTA_Ability_ControllerTest_SvenOverheadAttack &);
	CDOTA_Ability_ControllerTest_SvenOverheadAttack(CDOTA_Ability_ControllerTest_SvenOverheadAttack &);
	CDOTA_Ability_ControllerTest_SvenOverheadAttack();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual Activity GetCastAnimation();
	virtual float GetCastPoint();
	virtual bool OnAbilityPhaseStart();
	virtual void OnSpellStart();
	virtual bool ProcsMagicStick();
	virtual bool IsStealable();
	virtual const char * GetIntrinsicModifierName();
	virtual float GetPlaybackRateOverride();
	virtual ~CDOTA_Ability_ControllerTest_SvenOverheadAttack();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[234] GetCastAnimation
	// vtable[231] GetCastPoint
	// vtable[264] OnAbilityPhaseStart
	// vtable[266] OnSpellStart
	// vtable[239] ProcsMagicStick
	// vtable[305] IsStealable
	// vtable[280] GetIntrinsicModifierName
	// vtable[213] GetPlaybackRateOverride
	// sizeof = 912
};

// src/game/shared/dota/dota_misc_abilities.cpp:352
class CDOTA_Ability_ControllerTest_SvenSweepingAttack : public CDOTABaseAbility {
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
	CDOTA_Ability_ControllerTest_SvenSweepingAttack(CDOTA_Ability_ControllerTest_SvenSweepingAttack &);
	CDOTA_Ability_ControllerTest_SvenSweepingAttack(CDOTA_Ability_ControllerTest_SvenSweepingAttack &);
	CDOTA_Ability_ControllerTest_SvenSweepingAttack();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual Activity GetCastAnimation();
	virtual float GetCastPoint();
	virtual bool OnAbilityPhaseStart();
	virtual void OnSpellStart();
	virtual bool ProcsMagicStick();
	virtual bool IsStealable();
	virtual const char * GetIntrinsicModifierName();
	virtual float GetPlaybackRateOverride();
	virtual ~CDOTA_Ability_ControllerTest_SvenSweepingAttack();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[234] GetCastAnimation
	// vtable[231] GetCastPoint
	// vtable[264] OnAbilityPhaseStart
	// vtable[266] OnSpellStart
	// vtable[239] ProcsMagicStick
	// vtable[305] IsStealable
	// vtable[280] GetIntrinsicModifierName
	// vtable[213] GetPlaybackRateOverride
	// sizeof = 912
};

// src/game/shared/dota/dota_misc_abilities.cpp:421
class CDOTA_Ability_ControllerTest_SvenThrustingAttack : public CDOTABaseAbility {
public:

private:

	float m_flPlaybackRate;  // +0x390
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
	CDOTA_Ability_ControllerTest_SvenThrustingAttack(CDOTA_Ability_ControllerTest_SvenThrustingAttack &);
	CDOTA_Ability_ControllerTest_SvenThrustingAttack(CDOTA_Ability_ControllerTest_SvenThrustingAttack &);
	CDOTA_Ability_ControllerTest_SvenThrustingAttack();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual Activity GetCastAnimation();
	virtual float GetCastPoint();
	virtual bool OnAbilityPhaseStart();
	virtual void OnSpellStart();
	virtual bool ProcsMagicStick();
	virtual bool IsStealable();
	virtual const char * GetIntrinsicModifierName();
	virtual ~CDOTA_Ability_ControllerTest_SvenThrustingAttack();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[234] GetCastAnimation
	// vtable[231] GetCastPoint
	// vtable[264] OnAbilityPhaseStart
	// vtable[266] OnSpellStart
	// vtable[239] ProcsMagicStick
	// vtable[305] IsStealable
	// vtable[280] GetIntrinsicModifierName
	// sizeof = 920
};

// src/game/shared/dota/dota_misc_abilities.cpp:488
class CDOTA_Ability_ControllerTest_SlarkSpinAttack : public CDOTABaseAbility {
public:

private:

	float m_flPlaybackRate;  // +0x390
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
	CDOTA_Ability_ControllerTest_SlarkSpinAttack(CDOTA_Ability_ControllerTest_SlarkSpinAttack &);
	CDOTA_Ability_ControllerTest_SlarkSpinAttack(CDOTA_Ability_ControllerTest_SlarkSpinAttack &);
	CDOTA_Ability_ControllerTest_SlarkSpinAttack();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual Activity GetCastAnimation();
	virtual float GetCastPoint();
	virtual bool OnAbilityPhaseStart();
	virtual void OnSpellStart();
	virtual bool ProcsMagicStick();
	virtual bool IsStealable();
	virtual const char * GetIntrinsicModifierName();
	virtual ~CDOTA_Ability_ControllerTest_SlarkSpinAttack();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[234] GetCastAnimation
	// vtable[231] GetCastPoint
	// vtable[264] OnAbilityPhaseStart
	// vtable[266] OnSpellStart
	// vtable[239] ProcsMagicStick
	// vtable[305] IsStealable
	// vtable[280] GetIntrinsicModifierName
	// sizeof = 920
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Ability_ControllerTest_MeleeAttack::~CDOTA_Ability_ControllerTest_MeleeAttack  (line 26, @0x000000000262ff10, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_ControllerTest_MeleeAttack::~CDOTA_Ability_ControllerTest_MeleeAttack(
        CDOTA_Ability_ControllerTest_MeleeAttack *const this)
{
  this->_vptr_IHandleEntity = &off_4117290;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_ControllerTest_MeleeAttack::~CDOTA_Ability_ControllerTest_MeleeAttack  (line 26, @0x000000000262ff30, libserver.so)  // inlines: ~CDOTA_Ability_ControllerTest_MeleeAttack
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_ControllerTest_MeleeAttack::~CDOTA_Ability_ControllerTest_MeleeAttack(
        CDOTA_Ability_ControllerTest_MeleeAttack *const this)
{
  this->_vptr_IHandleEntity = &off_4117290;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_ControllerTest_MeleeAttack::Schema_DynamicBinding  (line 28, @0x0000000002625420, libserver.so)
// globals: CDOTA_Ability_ControllerTest_MeleeAttack::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_ControllerTest_MeleeAttack::Schema_DynamicBinding(
        const CDOTA_Ability_ControllerTest_MeleeAttack *const this)
{
  return CDOTA_Ability_ControllerTest_MeleeAttack::s_pSchemaBinding;
}


// CDOTA_Ability_ControllerTest_MeleeAttack::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 28, @0x0000000002625430, libserver.so)
// globals: CDOTA_Ability_ControllerTest_MeleeAttack::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_ControllerTest_MeleeAttack::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_ControllerTest_MeleeAttack::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_ControllerTest_MeleeAttack::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_ControllerTest_MeleeAttack::CEntityInstanceEntityClass::DestructInstance  (line 28, @0x0000000002625440, libserver.so)  // inlines: Destruct<CDOTA_Ability_ControllerTest_MeleeAttack>
void __fastcall CDOTA_Ability_ControllerTest_MeleeAttack::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_ControllerTest_MeleeAttack::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_ControllerTest_MeleeAttack::CEntityInstanceEntityClass::FreeInstance  (line 28, @0x0000000002625460, libserver.so)
void __fastcall CDOTA_Ability_ControllerTest_MeleeAttack::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_ControllerTest_MeleeAttack::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_ControllerTest_MeleeAttack::CEntityInstanceEntityClass::CanAllocate  (line 28, @0x0000000002625480, libserver.so)
bool __fastcall CDOTA_Ability_ControllerTest_MeleeAttack::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_ControllerTest_MeleeAttack::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_ControllerTest_MeleeAttack::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 28, @0x0000000002625490, libserver.so)
// globals: CDOTA_Ability_ControllerTest_MeleeAttack::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_ControllerTest_MeleeAttack::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_ControllerTest_MeleeAttack::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_ControllerTest_MeleeAttack::s_pSchemaBinding;
}


// CDOTA_Ability_ControllerTest_MeleeAttack::CEntityInstanceEntityClass::AllocateInstance  (line 28, @0x000000000262dc80, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_ControllerTest_MeleeAttack::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_ControllerTest_MeleeAttack::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_ControllerTest_MeleeAttack::CEntityInstanceEntityClass::ConstructInstance  (line 28, @0x000000000262f150, libserver.so)  // inlines: CDOTA_Ability_ControllerTest_MeleeAttack, Construct<CDOTA_Ability_ControllerTest_MeleeAttack>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_ControllerTest_MeleeAttack::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_ControllerTest_MeleeAttack::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_4117290;
  }
  return p;
}


// CDOTA_Ability_ControllerTest_MeleeAttack::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 28, @0x0000000002634520, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_ControllerTest_MeleeAttack::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_ControllerTest_MeleeAttack::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_ControllerTest_MeleeAttack::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 28, @0x0000000002634540, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_ControllerTest_MeleeAttack::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_ControllerTest_MeleeAttack::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_ControllerTest_MeleeAttack::GetEntityClassInternal  (line 28, @0x000000000263b740, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_dota_05.cpp
// strings: "controller_test_melee_attack", "CDOTA_Ability_ControllerTest_MeleeAttack"
// globals: `guard variable for'CDOTA_Ability_ControllerTest_MeleeAttack::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ControllerTest_MeleeAttackClass, CDOTA_Ability_ControllerTest_MeleeAttack::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ControllerTest_MeleeAttackClass, __dso_handle, CDOTA_Ability_ControllerTest_MeleeAttack::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_ControllerTest_MeleeAttack::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_ControllerTest_MeleeAttackClassInfo, CDOTA_Ability_ControllerTest_MeleeAttack::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_ControllerTest_MeleeAttackClassInfo
CEntityClass *__cdecl CDOTA_Ability_ControllerTest_MeleeAttack::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_ControllerTest_MeleeAttack::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ControllerTest_MeleeAttackClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_ControllerTest_MeleeAttack::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ControllerTest_MeleeAttackClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_ControllerTest_MeleeAttack::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ControllerTest_MeleeAttackClass);
    CDOTA_Ability_ControllerTest_MeleeAttack::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ControllerTest_MeleeAttackClass._vptr_CEntityClass = off_4117210;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_ControllerTest_MeleeAttack::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ControllerTest_MeleeAttackClass);
    __cxa_atexit(
      CDOTA_Ability_ControllerTest_MeleeAttack::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_ControllerTest_MeleeAttack::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ControllerTest_MeleeAttackClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_ControllerTest_MeleeAttackClass != 0 )
    return &CDOTA_Ability_ControllerTest_MeleeAttack::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ControllerTest_MeleeAttackClass;
  if ( `guard variable for'CDOTA_Ability_ControllerTest_MeleeAttack::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_ControllerTest_MeleeAttackClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_ControllerTest_MeleeAttack::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_ControllerTest_MeleeAttackClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_ControllerTest_MeleeAttack::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_ControllerTest_MeleeAttackClassInfo,
      "CDOTA_Ability_ControllerTest_MeleeAttack",
      "controller_test_melee_attack",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_ControllerTest_MeleeAttack::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_ControllerTest_MeleeAttackClassInfo);
  }
  CDOTA_Ability_ControllerTest_MeleeAttack::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ControllerTest_MeleeAttackClass.m_pClassInfo = &CDOTA_Ability_ControllerTest_MeleeAttack::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_ControllerTest_MeleeAttackClassInfo;
  CDOTA_Ability_ControllerTest_MeleeAttack::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ControllerTest_MeleeAttackClass.m_pBaseClassInfo = CDOTA_Ability_ControllerTest_MeleeAttack::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_ControllerTest_MeleeAttackClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_ControllerTest_MeleeAttackClass = &CDOTA_Ability_ControllerTest_MeleeAttack::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ControllerTest_MeleeAttackClass;
  CDOTA_Ability_ControllerTest_MeleeAttack::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_ControllerTest_MeleeAttackClassInfo.m_pClass = &CDOTA_Ability_ControllerTest_MeleeAttack::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ControllerTest_MeleeAttackClass;
  CDOTA_Ability_ControllerTest_MeleeAttack::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ControllerTest_MeleeAttackClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_ControllerTest_MeleeAttackClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_ControllerTest_MeleeAttack::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ControllerTest_MeleeAttackClass;
}


// CDOTA_Ability_ControllerTest_MeleeAttack::ProcsMagicStick  (line 37, @0x00000000026254a0, libserver.so)
bool __fastcall CDOTA_Ability_ControllerTest_MeleeAttack::ProcsMagicStick(
        CDOTA_Ability_ControllerTest_MeleeAttack *const this)
{
  return 0;
}


// CDOTA_Ability_ControllerTest_MeleeAttack::IsStealable  (line 38, @0x00000000026254b0, libserver.so)
bool __fastcall CDOTA_Ability_ControllerTest_MeleeAttack::IsStealable(
        CDOTA_Ability_ControllerTest_MeleeAttack *const this)
{
  return 0;
}


// CDOTA_Ability_ControllerTest_MeleeAttack::GetIntrinsicModifierName  (line 40, @0x00000000026254c0, libserver.so)
// strings: "modifier_disarmed"
const char *__fastcall CDOTA_Ability_ControllerTest_MeleeAttack::GetIntrinsicModifierName(
        CDOTA_Ability_ControllerTest_MeleeAttack *const this)
{
  return "modifier_disarmed";
}


// CDOTA_Ability_ControllerTest_MeleeAttack::OnAbilityPhaseStart  (line 48, @0x00000000025e0890, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::GetAttackAnimationPoint, CDOTA_BaseNPC::GetHasteFactor, KeyValues::KeyValues, KeyValues::SetFloat, KeyValues::SetString, CDOTA_BaseNPC::AddNewModifier, CDOTA_BaseNPC::UnitEmitSound, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "modifier_controller_test_melee_attack", "initial_delay", "attach_attack1", "attachment_1", "Hero_Slark.Attack", "attack_land_sound" (7 total)
bool __fastcall CDOTA_Ability_ControllerTest_MeleeAttack::OnAbilityPhaseStart(
        CDOTA_Ability_ControllerTest_MeleeAttack *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v3; // rax
  float v4; // xmm1_4
  float v5; // xmm1_4
  CDOTA_BaseNPC *v6; // r13
  CDOTA_BaseNPC *v7; // rax
  CDOTA_BaseNPC *v8; // rax
  KeyValues kv; // [rsp+10h] [rbp-40h] BYREF
  unsigned __int64 v11; // [rsp+28h] [rbp-28h]

  v11 = __readfsqword(0x28u);
  Caster = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::GetAttackAnimationPoint(Caster);
  v3 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::GetHasteFactor(v3);
  KeyValues::KeyValues(&kv, "modifier_controller_test_melee_attack");
  KeyValues::SetFloat(&kv, "duration", v4);
  KeyValues::SetFloat(&kv, "initial_delay", v5);
  KeyValues::SetString(&kv, "attachment_1", "attach_attack1");
  KeyValues::SetString(&kv, "attack_land_sound", "Hero_Slark.Attack");
  v6 = CDOTABaseAbility::GetCaster(this);
  v7 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::AddNewModifier(v7, v6, this, "modifier_controller_test_melee_attack", &kv, 0);
  v8 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::UnitEmitSound(v8, "Hero_Slark.PreAttack", 0.0, 0, 0);
  KeyValues::~KeyValues(&kv);
  return 1;
}


// CDOTA_Ability_ControllerTest_MeleeAttack::GetCastAnimation  (line 65, @0x00000000025ddc40, libserver.so)
Activity __fastcall CDOTA_Ability_ControllerTest_MeleeAttack::GetCastAnimation(
        CDOTA_Ability_ControllerTest_MeleeAttack *const this)
{
  return 1503;
}


// CDOTA_Ability_ControllerTest_MeleeAttack::OnSpellStart  (line 73, @0x00000000025ddc50, libserver.so)
void __fastcall CDOTA_Ability_ControllerTest_MeleeAttack::OnSpellStart(
        CDOTA_Ability_ControllerTest_MeleeAttack *const this)
{
  ;
}


// CDOTA_Ability_ControllerTest_MeleeAttack::GetCastPoint  (line 82, @0x00000000025e0700, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::GetAttackAnimationPoint, CDOTA_BaseNPC::GetHasteFactor
float __fastcall CDOTA_Ability_ControllerTest_MeleeAttack::GetCastPoint(
        CDOTA_Ability_ControllerTest_MeleeAttack *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v3; // rax
  float AttackAnimationPoint; // [rsp+Ch] [rbp-14h]

  Caster = CDOTABaseAbility::GetCaster(this);
  AttackAnimationPoint = CDOTA_BaseNPC::GetAttackAnimationPoint(Caster);
  v3 = CDOTABaseAbility::GetCaster(this);
  return AttackAnimationPoint / CDOTA_BaseNPC::GetHasteFactor(v3);
}


// CDOTA_Modifier_ControllerTest_MeleeAttack::~CDOTA_Modifier_ControllerTest_MeleeAttack  (line 95, @0x00000000026528b0, libserver.so)  // inlines: Purge, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTA_Buff::~CDOTA_Buff, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CDOTA_Modifier_ControllerTest_MeleeAttack::~CDOTA_Modifier_ControllerTest_MeleeAttack(
        CDOTA_Modifier_ControllerTest_MeleeAttack *const this)
{
  this->_vptr_CDOTA_Buff = &off_4117D50;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_vHitEntities);
  if ( (this->m_vHitEntities.m_Memory.m_nGrowSize & 0xC0000000) != 0
    || (CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_vHitEntities.m_Memory),
        (this->m_vHitEntities.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    CDOTA_Buff::~CDOTA_Buff(this);
  }
  else
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_vHitEntities.m_Memory);
    CDOTA_Buff::~CDOTA_Buff(this);
  }
}


// CDOTA_Modifier_ControllerTest_MeleeAttack::~CDOTA_Modifier_ControllerTest_MeleeAttack  (line 95, @0x0000000002652920, libserver.so)  // inlines: Purge, ~CDOTA_Modifier_ControllerTest_MeleeAttack, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTA_Buff::~CDOTA_Buff, operator delete, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CDOTA_Modifier_ControllerTest_MeleeAttack::~CDOTA_Modifier_ControllerTest_MeleeAttack(
        CDOTA_Modifier_ControllerTest_MeleeAttack *const this)
{
  this->_vptr_CDOTA_Buff = &off_4117D50;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_vHitEntities);
  if ( (this->m_vHitEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_vHitEntities.m_Memory);
    if ( (this->m_vHitEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_vHitEntities.m_Memory);
  }
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_ControllerTest_MeleeAttack::IsHidden  (line 103, @0x00000000026254d0, libserver.so)
bool __fastcall CDOTA_Modifier_ControllerTest_MeleeAttack::IsHidden(
        CDOTA_Modifier_ControllerTest_MeleeAttack *const this)
{
  return 1;
}


// CDOTA_Modifier_ControllerTest_MeleeAttack::IsPurgable  (line 104, @0x00000000026254e0, libserver.so)
bool __fastcall CDOTA_Modifier_ControllerTest_MeleeAttack::IsPurgable(
        CDOTA_Modifier_ControllerTest_MeleeAttack *const this)
{
  return 0;
}


// CDOTA_Modifier_ControllerTest_MeleeAttack::OnCreated  (line 142, @0x00000000025e0580, libserver.so)  // inlines: GetBool, StartIntervalThink, V_strcpy_safe<256ul>
// calls: KeyValues::GetFloat, KeyValues::GetString, _V_strncpy, KeyValues::GetInt
// strings: "initial_delay", "activity_modifier", "attachment_1", "attachment_2", "attachment_3", "attack_land_sound"
void __fastcall CDOTA_Modifier_ControllerTest_MeleeAttack::OnCreated(
        CDOTA_Modifier_ControllerTest_MeleeAttack *const this,
        KeyValues *pKV)
{
  float v2; // xmm1_4
  const char *String; // rax
  const char *v6; // rax
  const char *v7; // rax
  const char *v8; // rax
  const char *v9; // rax
  int Int; // eax
  float flInitialDelay; // [rsp+0h] [rbp-1Ch]

  flInitialDelay = KeyValues::GetFloat(pKV, "initial_delay", v2);
  String = KeyValues::GetString(pKV, "activity_modifier", "", 0, 0);
  _V_strncpy(this->m_szActivityModifier, String, 256);
  v6 = KeyValues::GetString(pKV, "attachment_1", "", 0, 0);
  _V_strncpy(this->m_szAttachmentName1, v6, 256);
  v7 = KeyValues::GetString(pKV, "attachment_2", "", 0, 0);
  _V_strncpy(this->m_szAttachmentName2, v7, 256);
  v8 = KeyValues::GetString(pKV, "attachment_3", "", 0, 0);
  _V_strncpy(this->m_szAttachmentName3, v8, 256);
  v9 = KeyValues::GetString(pKV, "attack_land_sound", "", 0, 0);
  _V_strncpy(this->m_szAttackLandSound, v9, 256);
  this->m_nDamageRadius = KeyValues::GetInt(pKV, "damage_radius", 0);
  this->m_nDamagePercent = KeyValues::GetInt(pKV, "damage_percent", 0);
  Int = KeyValues::GetInt(pKV, "debug", 0);
  this->m_flThinkTimeAccumulator = 0.0;
  this->m_bDebug = Int != 0;
  this->m_flThinkInterval = flInitialDelay;
}


// CDOTA_Modifier_ControllerTest_MeleeAttack::OnIntervalThink  (line 162, @0x0000000002613060, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<CHandle<CBaseEntity> >, Element, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetParent, GetSerialNumber, GetTeamNumber, GrowMemory, HasElement, IndexToIdentity, IsValid, LookupEntity, Set, StartIntervalThink, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator!=, operator[], ~CUtlVector
// calls: CEntityHandle::operator CEntityInstance*, FindUnitsInRadius, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::Find, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::CreateAttackRecord, DamageImpact, DOTA_EmitSound, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, NDebugOverlay::Circle, CBaseAnimating::GetAttachment, CUtlMemory<CHandle<CBaseEntity>, int>::Grow, _Unwind_Resume
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_ControllerTest_MeleeAttack::OnIntervalThink(
        CDOTA_Modifier_ControllerTest_MeleeAttack *const this)
{
  bool v2; // zf
  float x; // xmm0_4
  CDOTA_BaseNPC *v4; // rax
  CDOTA_BaseNPC *v5; // rax
  CDOTA_BaseNPC *v6; // rax
  __int64 v7; // r12
  int v8; // ebx
  CHandle<CBaseEntity> *v9; // rsi
  uint32 m_Index; // eax
  CEntityIdentity *v11; // rdx
  CEntityIdentity *v12; // rdx
  CBaseEntity *m_pInstance; // r14
  CDOTA_BaseNPC *v14; // rax
  CDOTA_AttackRecord *AttackRecord; // rdi
  CEntityIdentity *m_pEntity; // rax
  __int16 v17; // cx
  __int64 m_Size; // r14
  int v19; // eax
  CHandle<CBaseEntity> *v20; // rax
  CDOTA_BaseNPC *v21; // rax
  CDOTA_BaseNPC *v22; // rax
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v24; // rax
  int v25; // [rsp+30h] [rbp-90h]
  Vector vLocation1; // [rsp+40h] [rbp-80h] BYREF
  Vector vLocation2; // [rsp+50h] [rbp-70h] BYREF
  Vector vLocation3; // [rsp+60h] [rbp-60h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+70h] [rbp-50h] BYREF

  this->m_flThinkInterval = 0.0099999998;
  this->m_flThinkTimeAccumulator = 0.0;
  v2 = this->m_szAttachmentName1[0] == 0;
  vLocation3 = vec3_invalid;
  if ( v2 )
  {
    if ( this->m_szAttachmentName2[0] == 0 )
      goto LABEL_3;
LABEL_45:
    Caster = CDOTA_Buff::GetCaster(this);
    CBaseAnimating::GetAttachment(Caster, this->m_szAttachmentName2, &vLocation2);
    if ( this->m_szAttachmentName3[0] == 0 )
      goto LABEL_4;
LABEL_46:
    v24 = CDOTA_Buff::GetCaster(this);
    CBaseAnimating::GetAttachment(v24, this->m_szAttachmentName3, &vLocation3);
    goto LABEL_4;
  }
  v22 = CDOTA_Buff::GetCaster(this);
  CBaseAnimating::GetAttachment(v22, this->m_szAttachmentName1, &vLocation1);
  if ( this->m_szAttachmentName2[0] != 0 )
    goto LABEL_45;
LABEL_3:
  if ( this->m_szAttachmentName3[0] != 0 )
    goto LABEL_46;
LABEL_4:
  x = vec3_invalid.x;
  entities.m_Size = 0;
  entities.m_Memory.m_pMemory = 0;
  entities.m_Memory.m_nAllocationCount = 0;
  entities.m_Memory.m_nGrowSize = 0;
  if ( vec3_invalid.x != vLocation1.x || vec3_invalid.y != vLocation1.y || vec3_invalid.z != vLocation1.z )
  {
    v4 = CEntityHandle::operator CEntityInstance *(&this->m_hParent);
    FindUnitsInRadius(v4->m_iTeamNum.m_Value, &vLocation1, v4, this->m_nDamageRadius, &entities, 2, 3, 16400, 0, 0);
    x = vec3_invalid.x;
  }
  if ( x != vLocation2.x || vec3_invalid.y != vLocation2.y || vec3_invalid.z != vLocation2.z )
  {
    v5 = CEntityHandle::operator CEntityInstance *(&this->m_hParent);
    FindUnitsInRadius(v5->m_iTeamNum.m_Value, &vLocation2, v5, this->m_nDamageRadius, &entities, 2, 3, 16400, 0, 0);
    x = vec3_invalid.x;
  }
  if ( x == vLocation3.x && vec3_invalid.y == vLocation3.y && vec3_invalid.z == vLocation3.z )
  {
    if ( !this->m_bDebug )
      goto LABEL_9;
  }
  else
  {
    v6 = CEntityHandle::operator CEntityInstance *(&this->m_hParent);
    FindUnitsInRadius(v6->m_iTeamNum.m_Value, &vLocation3, v6, this->m_nDamageRadius, &entities, 2, 3, 16400, 0, 0);
    if ( !this->m_bDebug )
      goto LABEL_9;
  }
  NDebugOverlay::Circle(&vLocation1, this->m_nDamageRadius, 0xFFu, 0, 0, 30, 0, 2.0);
  NDebugOverlay::Circle(&vLocation2, this->m_nDamageRadius, 0, 0xFFu, 0, 30, 0, 2.0);
  NDebugOverlay::Circle(&vLocation3, this->m_nDamageRadius, 0, 0, 0xFFu, 30, 0, 2.0);
LABEL_9:
  if ( entities.m_Size > 0 )
  {
    v7 = 0;
    v8 = 0;
    do
    {
      while ( 1 )
      {
        v9 = &entities.m_Memory.m_pMemory[v7];
        m_Index = entities.m_Memory.m_pMemory[v7].m_Index;
        if ( m_Index + 2 > 1 )
        {
          v11 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v9->m_Index) >> 9) & 0x3F];
          if ( v11 != 0 )
          {
            v12 = &v11[v9->m_Index & 0x1FF];
            if ( v12 != 0 && m_Index == v12->m_EHandle.m_Index )
            {
              m_pInstance = v12->m_pInstance;
              if ( v12->m_pInstance != 0
                && m_pInstance->m_bIsDOTANPC
                && CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Find(
                     &this->m_vHitEntities,
                     v9) < 0 )
              {
                v14 = CDOTA_Buff::GetCaster(this);
                AttackRecord = CDOTA_BaseNPC::CreateAttackRecord(v14, m_pInstance, 0, 1, 0, 0, 0);
                if ( AttackRecord != 0 )
                {
                  DamageImpact(AttackRecord);
                  v25 = -1;
                  m_pEntity = m_pInstance->m_pEntity;
                  if ( m_pEntity != 0 )
                  {
                    v17 = 0x7FFF;
                    if ( m_pEntity->m_EHandle.m_Index != -1 )
                      v17 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
                    v25 = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v17 & 0x7FFF;
                  }
                  m_Size = this->m_vHitEntities.m_Size;
                  v19 = this->m_vHitEntities.m_Size;
                  if ( m_Size == this->m_vHitEntities.m_Memory.m_nAllocationCount )
                  {
                    CUtlMemory<CHandle<CBaseEntity>,int>::Grow(&this->m_vHitEntities.m_Memory, 1);
                    v19 = this->m_vHitEntities.m_Size;
                  }
                  this->m_vHitEntities.m_Size = v19 + 1;
                  v20 = &this->m_vHitEntities.m_Memory.m_pMemory[m_Size];
                  if ( v20 != 0 )
                    v20->m_Index = v25;
                  if ( this->m_szAttackLandSound[0] != 0 )
                    break;
                }
              }
            }
          }
        }
        ++v8;
        ++v7;
        if ( entities.m_Size <= v8 )
          goto LABEL_30;
      }
      v21 = CDOTA_Buff::GetCaster(this);
      DOTA_EmitSound(4, this->m_szAttackLandSound, v21);
      ++v8;
      ++v7;
    }
    while ( entities.m_Size > v8 );
  }
LABEL_30:
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&entities);
}


// CDOTA_Modifier_ControllerTest_MeleeAttack::DeclareFunctions  (line 214, @0x00000000025ddc60, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_ControllerTest_MeleeAttack::GetModifierDisableTurning(CModifierParams const&), CDOTA_Modifier_ControllerTest_MeleeAttack::GetModifierDamageOutgoing_Percentage(CModifierParams const&), CDOTA_Modifier_ControllerTest_MeleeAttack::GetActivityTranslationModifiers(CModifierParams const&)
void __fastcall CDOTA_Modifier_ControllerTest_MeleeAttack::DeclareFunctions(
        CDOTA_Modifier_ControllerTest_MeleeAttack *const this)
{
  this->m_Functions[161].__pfn = CDOTA_Modifier_ControllerTest_MeleeAttack::GetModifierDisableTurning;
  this->m_Functions[161].__delta = 0;
  this->m_Functions[28].__delta = 0;
  this->m_Functions[28].__pfn = CDOTA_Modifier_ControllerTest_MeleeAttack::GetModifierDamageOutgoing_Percentage;
  this->m_Functions[155].__pfn = CDOTA_Modifier_ControllerTest_MeleeAttack::GetActivityTranslationModifiers;
  this->m_Functions[155].__delta = 0;
}


// CDOTA_Modifier_ControllerTest_MeleeAttack::GetModifierDisableTurning  (line 223, @0x00000000025ddcc0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_ControllerTest_MeleeAttack::GetModifierDisableTurning(
        CDOTA_Modifier_ControllerTest_MeleeAttack *const this,
        const CModifierParams *const params)
{
  return 1uLL;
}


// CDOTA_Modifier_ControllerTest_MeleeAttack::GetModifierDamageOutgoing_Percentage  (line 230, @0x00000000025ddcd0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_ControllerTest_MeleeAttack::GetModifierDamageOutgoing_Percentage(
        CDOTA_Modifier_ControllerTest_MeleeAttack *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->m_nDamagePercent;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_ControllerTest_MeleeAttack::CheckState  (line 237, @0x00000000025ddcf0, libserver.so)  // inlines: Enable
void __fastcall CDOTA_Modifier_ControllerTest_MeleeAttack::CheckState(
        CDOTA_Modifier_ControllerTest_MeleeAttack *const this,
        CDOTABuffState *const buffState)
{
  uint64 m_nDisabledStateMask; // rax

  m_nDisabledStateMask = buffState->m_nDisabledStateMask;
  buffState->m_nEnabledStateMask |= 0x80001uLL;
  buffState->m_nDisabledStateMask = m_nDisabledStateMask & 0xFFFFFFFFFFF7FFFELL;
}


// CDOTA_Modifier_ControllerTest_MeleeAttack::GetActivityTranslationModifiers  (line 245, @0x00000000025e2020, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_ControllerTest_MeleeAttack::GetActivityTranslationModifiers(
        CDOTA_Modifier_ControllerTest_MeleeAttack *const this,
        const CModifierParams *const params)
{
  char *m_szActivityModifier; // rdi
  ModifierVariant_t result; // 0:rax.16

  m_szActivityModifier = this->m_szActivityModifier;
  if ( m_szActivityModifier == 0 )
    return 2uLL;
  result.m_szVal = m_szActivityModifier;
  *&result.m_eType = 2;
  return result;
}


// CDOTA_Modifier_ControllerTest_MeleeAttack::AddCustomTransmiterData  (line 257, @0x00000000025ddd10, libserver.so)  // inlines: set_damage, set_has_damage
void __fastcall CDOTA_Modifier_ControllerTest_MeleeAttack::AddCustomTransmiterData(
        CDOTA_Modifier_ControllerTest_MeleeAttack *const this,
        CDOTAModifierBuffTableEntry *const entry)
{
  int m_nDamagePercent; // eax

  m_nDamagePercent = this->m_nDamagePercent;
  *(entry + 4) |= 0x1000000u;
  *(entry + 35) = m_nDamagePercent;
}


// CDOTA_Modifier_ControllerTest_MeleeAttack::OnDestroy  (line 274, @0x00000000025ddd30, libserver.so)
void __fastcall CDOTA_Modifier_ControllerTest_MeleeAttack::OnDestroy(
        CDOTA_Modifier_ControllerTest_MeleeAttack *const this)
{
  ;
}


// CDOTA_Ability_ControllerTest_SvenOverheadAttack::~CDOTA_Ability_ControllerTest_SvenOverheadAttack  (line 281, @0x000000000262ff60, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_ControllerTest_SvenOverheadAttack::~CDOTA_Ability_ControllerTest_SvenOverheadAttack(
        CDOTA_Ability_ControllerTest_SvenOverheadAttack *const this)
{
  this->_vptr_IHandleEntity = &off_41180B0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_ControllerTest_SvenOverheadAttack::~CDOTA_Ability_ControllerTest_SvenOverheadAttack  (line 281, @0x000000000262ff80, libserver.so)  // inlines: ~CDOTA_Ability_ControllerTest_SvenOverheadAttack
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_ControllerTest_SvenOverheadAttack::~CDOTA_Ability_ControllerTest_SvenOverheadAttack(
        CDOTA_Ability_ControllerTest_SvenOverheadAttack *const this)
{
  this->_vptr_IHandleEntity = &off_41180B0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_ControllerTest_SvenOverheadAttack::Schema_DynamicBinding  (line 283, @0x00000000026254f0, libserver.so)
// globals: CDOTA_Ability_ControllerTest_SvenOverheadAttack::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_ControllerTest_SvenOverheadAttack::Schema_DynamicBinding(
        const CDOTA_Ability_ControllerTest_SvenOverheadAttack *const this)
{
  return CDOTA_Ability_ControllerTest_SvenOverheadAttack::s_pSchemaBinding;
}


// CDOTA_Ability_ControllerTest_SvenOverheadAttack::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 283, @0x0000000002625500, libserver.so)
// globals: CDOTA_Ability_ControllerTest_SvenOverheadAttack::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_ControllerTest_SvenOverheadAttack::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_ControllerTest_SvenOverheadAttack::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_ControllerTest_SvenOverheadAttack::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_ControllerTest_SvenOverheadAttack::CEntityInstanceEntityClass::DestructInstance  (line 283, @0x0000000002625510, libserver.so)  // inlines: Destruct<CDOTA_Ability_ControllerTest_SvenOverheadAttack>
void __fastcall CDOTA_Ability_ControllerTest_SvenOverheadAttack::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_ControllerTest_SvenOverheadAttack::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_ControllerTest_SvenOverheadAttack::CEntityInstanceEntityClass::FreeInstance  (line 283, @0x0000000002625530, libserver.so)
void __fastcall CDOTA_Ability_ControllerTest_SvenOverheadAttack::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_ControllerTest_SvenOverheadAttack::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_ControllerTest_SvenOverheadAttack::CEntityInstanceEntityClass::CanAllocate  (line 283, @0x0000000002625550, libserver.so)
bool __fastcall CDOTA_Ability_ControllerTest_SvenOverheadAttack::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_ControllerTest_SvenOverheadAttack::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_ControllerTest_SvenOverheadAttack::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 283, @0x0000000002625560, libserver.so)
// globals: CDOTA_Ability_ControllerTest_SvenOverheadAttack::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_ControllerTest_SvenOverheadAttack::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_ControllerTest_SvenOverheadAttack::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_ControllerTest_SvenOverheadAttack::s_pSchemaBinding;
}


// CDOTA_Ability_ControllerTest_SvenOverheadAttack::CEntityInstanceEntityClass::AllocateInstance  (line 283, @0x000000000262dcc0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_ControllerTest_SvenOverheadAttack::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_ControllerTest_SvenOverheadAttack::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_ControllerTest_SvenOverheadAttack::CEntityInstanceEntityClass::ConstructInstance  (line 283, @0x000000000262f180, libserver.so)  // inlines: CDOTA_Ability_ControllerTest_SvenOverheadAttack, Construct<CDOTA_Ability_ControllerTest_SvenOverheadAttack>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_ControllerTest_SvenOverheadAttack::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_ControllerTest_SvenOverheadAttack::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_41180B0;
  }
  return p;
}


// CDOTA_Ability_ControllerTest_SvenOverheadAttack::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 283, @0x0000000002634570, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_ControllerTest_SvenOverheadAttack::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_ControllerTest_SvenOverheadAttack::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_ControllerTest_SvenOverheadAttack::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 283, @0x0000000002634590, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_ControllerTest_SvenOverheadAttack::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_ControllerTest_SvenOverheadAttack::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_ControllerTest_SvenOverheadAttack::GetEntityClassInternal  (line 283, @0x000000000263b890, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_dota_05.cpp
// strings: "controller_test_sven_overhead_attack", "CDOTA_Ability_ControllerTest_SvenOverheadAttack"
// globals: `guard variable for'CDOTA_Ability_ControllerTest_SvenOverheadAttack::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ControllerTest_SvenOverheadAttackClass, CDOTA_Ability_ControllerTest_SvenOverheadAttack::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ControllerTest_SvenOverheadAttackClass, __dso_handle, CDOTA_Ability_ControllerTest_SvenOverheadAttack::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_ControllerTest_SvenOverheadAttack::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_ControllerTest_SvenOverheadAttackClassInfo, CDOTA_Ability_ControllerTest_SvenOverheadAttack::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_ControllerTest_SvenOverheadAttackClassInfo
CEntityClass *__cdecl CDOTA_Ability_ControllerTest_SvenOverheadAttack::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_ControllerTest_SvenOverheadAttack::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ControllerTest_SvenOverheadAttackClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_ControllerTest_SvenOverheadAttack::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ControllerTest_SvenOverheadAttackClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_ControllerTest_SvenOverheadAttack::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ControllerTest_SvenOverheadAttackClass);
    CDOTA_Ability_ControllerTest_SvenOverheadAttack::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ControllerTest_SvenOverheadAttackClass._vptr_CEntityClass = off_4118030;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_ControllerTest_SvenOverheadAttack::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ControllerTest_SvenOverheadAttackClass);
    __cxa_atexit(
      CDOTA_Ability_ControllerTest_SvenOverheadAttack::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_ControllerTest_SvenOverheadAttack::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ControllerTest_SvenOverheadAttackClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_ControllerTest_SvenOverheadAttackClass != 0 )
    return &CDOTA_Ability_ControllerTest_SvenOverheadAttack::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ControllerTest_SvenOverheadAttackClass;
  if ( `guard variable for'CDOTA_Ability_ControllerTest_SvenOverheadAttack::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_ControllerTest_SvenOverheadAttackClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_ControllerTest_SvenOverheadAttack::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_ControllerTest_SvenOverheadAttackClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_ControllerTest_SvenOverheadAttack::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_ControllerTest_SvenOverheadAttackClassInfo,
      "CDOTA_Ability_ControllerTest_SvenOverheadAttack",
      "controller_test_sven_overhead_attack",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_ControllerTest_SvenOverheadAttack::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_ControllerTest_SvenOverheadAttackClassInfo);
  }
  CDOTA_Ability_ControllerTest_SvenOverheadAttack::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ControllerTest_SvenOverheadAttackClass.m_pClassInfo = &CDOTA_Ability_ControllerTest_SvenOverheadAttack::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_ControllerTest_SvenOverheadAttackClassInfo;
  CDOTA_Ability_ControllerTest_SvenOverheadAttack::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ControllerTest_SvenOverheadAttackClass.m_pBaseClassInfo = CDOTA_Ability_ControllerTest_SvenOverheadAttack::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_ControllerTest_SvenOverheadAttackClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_ControllerTest_SvenOverheadAttackClass = &CDOTA_Ability_ControllerTest_SvenOverheadAttack::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ControllerTest_SvenOverheadAttackClass;
  CDOTA_Ability_ControllerTest_SvenOverheadAttack::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_ControllerTest_SvenOverheadAttackClassInfo.m_pClass = &CDOTA_Ability_ControllerTest_SvenOverheadAttack::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ControllerTest_SvenOverheadAttackClass;
  CDOTA_Ability_ControllerTest_SvenOverheadAttack::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ControllerTest_SvenOverheadAttackClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_ControllerTest_SvenOverheadAttackClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_ControllerTest_SvenOverheadAttack::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ControllerTest_SvenOverheadAttackClass;
}


// CDOTA_Ability_ControllerTest_SvenOverheadAttack::ProcsMagicStick  (line 293, @0x0000000002625570, libserver.so)
bool __fastcall CDOTA_Ability_ControllerTest_SvenOverheadAttack::ProcsMagicStick(
        CDOTA_Ability_ControllerTest_SvenOverheadAttack *const this)
{
  return 0;
}


// CDOTA_Ability_ControllerTest_SvenOverheadAttack::IsStealable  (line 294, @0x0000000002625580, libserver.so)
bool __fastcall CDOTA_Ability_ControllerTest_SvenOverheadAttack::IsStealable(
        CDOTA_Ability_ControllerTest_SvenOverheadAttack *const this)
{
  return 0;
}


// CDOTA_Ability_ControllerTest_SvenOverheadAttack::GetIntrinsicModifierName  (line 296, @0x0000000002625590, libserver.so)
// strings: "modifier_disarmed"
const char *__fastcall CDOTA_Ability_ControllerTest_SvenOverheadAttack::GetIntrinsicModifierName(
        CDOTA_Ability_ControllerTest_SvenOverheadAttack *const this)
{
  return "modifier_disarmed";
}


// CDOTA_Ability_ControllerTest_SvenOverheadAttack::GetPlaybackRateOverride  (line 298, @0x00000000026255a0, libserver.so)
float __fastcall CDOTA_Ability_ControllerTest_SvenOverheadAttack::GetPlaybackRateOverride(
        CDOTA_Ability_ControllerTest_SvenOverheadAttack *const this)
{
  return 0.5;
}


// CDOTA_Ability_ControllerTest_SvenOverheadAttack::OnAbilityPhaseStart  (line 307, @0x00000000025e09f0, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::GetAttackAnimationPoint, CDOTA_BaseNPC::GetHasteFactor, KeyValues::KeyValues, KeyValues::SetFloat, KeyValues::SetString, CDOTA_BaseNPC::AddNewModifier, CDOTA_BaseNPC::UnitEmitSound, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "modifier_controller_test_melee_attack", "initial_delay", "attach_sword", "attachment_1", "attach_sword2", "attachment_2" (11 total)
bool __fastcall CDOTA_Ability_ControllerTest_SvenOverheadAttack::OnAbilityPhaseStart(
        CDOTA_Ability_ControllerTest_SvenOverheadAttack *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v3; // rax
  float v4; // xmm1_4
  float v5; // xmm1_4
  CDOTA_BaseNPC *v6; // r13
  CDOTA_BaseNPC *v7; // rax
  CDOTA_BaseNPC *v8; // rax
  KeyValues kv; // [rsp+10h] [rbp-40h] BYREF
  unsigned __int64 v11; // [rsp+28h] [rbp-28h]

  v11 = __readfsqword(0x28u);
  Caster = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::GetAttackAnimationPoint(Caster);
  v3 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::GetHasteFactor(v3);
  (*(this->_vptr_IHandleEntity + 213))(this);
  (*(this->_vptr_IHandleEntity + 213))(this);
  KeyValues::KeyValues(&kv, "modifier_controller_test_melee_attack");
  KeyValues::SetFloat(&kv, "duration", v4);
  KeyValues::SetFloat(&kv, "initial_delay", v5);
  KeyValues::SetString(&kv, "attachment_1", "attach_sword");
  KeyValues::SetString(&kv, "attachment_2", "attach_sword2");
  KeyValues::SetString(&kv, "attachment_3", "attach_sword3");
  KeyValues::SetString(&kv, "attack_land_sound", "Hero_Sven.Attack");
  v6 = CDOTABaseAbility::GetCaster(this);
  v7 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::AddNewModifier(v7, v6, this, "modifier_controller_test_melee_attack", &kv, 0);
  v8 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::UnitEmitSound(v8, "Hero_Sven.PreAttack", 0.0, 0, 0);
  KeyValues::~KeyValues(&kv);
  return 1;
}


// CDOTA_Ability_ControllerTest_SvenOverheadAttack::GetCastAnimation  (line 326, @0x00000000025ddd40, libserver.so)
Activity __fastcall CDOTA_Ability_ControllerTest_SvenOverheadAttack::GetCastAnimation(
        CDOTA_Ability_ControllerTest_SvenOverheadAttack *const this)
{
  return 1514;
}


// CDOTA_Ability_ControllerTest_SvenOverheadAttack::OnSpellStart  (line 333, @0x00000000025ddd50, libserver.so)
void __fastcall CDOTA_Ability_ControllerTest_SvenOverheadAttack::OnSpellStart(
        CDOTA_Ability_ControllerTest_SvenOverheadAttack *const this)
{
  ;
}


// CDOTA_Ability_ControllerTest_SvenOverheadAttack::GetCastPoint  (line 342, @0x00000000025e0750, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::GetAttackAnimationPoint, CDOTA_BaseNPC::GetHasteFactor
float __fastcall CDOTA_Ability_ControllerTest_SvenOverheadAttack::GetCastPoint(
        CDOTA_Ability_ControllerTest_SvenOverheadAttack *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v3; // rax
  float AttackAnimationPoint; // [rsp+Ch] [rbp-14h]

  Caster = CDOTABaseAbility::GetCaster(this);
  AttackAnimationPoint = CDOTA_BaseNPC::GetAttackAnimationPoint(Caster);
  v3 = CDOTABaseAbility::GetCaster(this);
  return AttackAnimationPoint / CDOTA_BaseNPC::GetHasteFactor(v3);
}


// CDOTA_Ability_ControllerTest_SvenSweepingAttack::~CDOTA_Ability_ControllerTest_SvenSweepingAttack  (line 352, @0x000000000262ffb0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_ControllerTest_SvenSweepingAttack::~CDOTA_Ability_ControllerTest_SvenSweepingAttack(
        CDOTA_Ability_ControllerTest_SvenSweepingAttack *const this)
{
  this->_vptr_IHandleEntity = &off_4118BB0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_ControllerTest_SvenSweepingAttack::~CDOTA_Ability_ControllerTest_SvenSweepingAttack  (line 352, @0x000000000262ffd0, libserver.so)  // inlines: ~CDOTA_Ability_ControllerTest_SvenSweepingAttack
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_ControllerTest_SvenSweepingAttack::~CDOTA_Ability_ControllerTest_SvenSweepingAttack(
        CDOTA_Ability_ControllerTest_SvenSweepingAttack *const this)
{
  this->_vptr_IHandleEntity = &off_4118BB0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_ControllerTest_SvenSweepingAttack::Schema_DynamicBinding  (line 354, @0x00000000026255b0, libserver.so)
// globals: CDOTA_Ability_ControllerTest_SvenSweepingAttack::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_ControllerTest_SvenSweepingAttack::Schema_DynamicBinding(
        const CDOTA_Ability_ControllerTest_SvenSweepingAttack *const this)
{
  return CDOTA_Ability_ControllerTest_SvenSweepingAttack::s_pSchemaBinding;
}


// CDOTA_Ability_ControllerTest_SvenSweepingAttack::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 354, @0x00000000026255c0, libserver.so)
// globals: CDOTA_Ability_ControllerTest_SvenSweepingAttack::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_ControllerTest_SvenSweepingAttack::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_ControllerTest_SvenSweepingAttack::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_ControllerTest_SvenSweepingAttack::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_ControllerTest_SvenSweepingAttack::CEntityInstanceEntityClass::DestructInstance  (line 354, @0x00000000026255d0, libserver.so)  // inlines: Destruct<CDOTA_Ability_ControllerTest_SvenSweepingAttack>
void __fastcall CDOTA_Ability_ControllerTest_SvenSweepingAttack::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_ControllerTest_SvenSweepingAttack::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_ControllerTest_SvenSweepingAttack::CEntityInstanceEntityClass::FreeInstance  (line 354, @0x00000000026255f0, libserver.so)
void __fastcall CDOTA_Ability_ControllerTest_SvenSweepingAttack::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_ControllerTest_SvenSweepingAttack::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_ControllerTest_SvenSweepingAttack::CEntityInstanceEntityClass::CanAllocate  (line 354, @0x0000000002625610, libserver.so)
bool __fastcall CDOTA_Ability_ControllerTest_SvenSweepingAttack::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_ControllerTest_SvenSweepingAttack::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_ControllerTest_SvenSweepingAttack::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 354, @0x0000000002625620, libserver.so)
// globals: CDOTA_Ability_ControllerTest_SvenSweepingAttack::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_ControllerTest_SvenSweepingAttack::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_ControllerTest_SvenSweepingAttack::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_ControllerTest_SvenSweepingAttack::s_pSchemaBinding;
}


// CDOTA_Ability_ControllerTest_SvenSweepingAttack::CEntityInstanceEntityClass::AllocateInstance  (line 354, @0x000000000262dd00, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_ControllerTest_SvenSweepingAttack::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_ControllerTest_SvenSweepingAttack::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_ControllerTest_SvenSweepingAttack::CEntityInstanceEntityClass::ConstructInstance  (line 354, @0x000000000262f1b0, libserver.so)  // inlines: CDOTA_Ability_ControllerTest_SvenSweepingAttack, Construct<CDOTA_Ability_ControllerTest_SvenSweepingAttack>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_ControllerTest_SvenSweepingAttack::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_ControllerTest_SvenSweepingAttack::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_4118BB0;
  }
  return p;
}


// CDOTA_Ability_ControllerTest_SvenSweepingAttack::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 354, @0x00000000026345c0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_ControllerTest_SvenSweepingAttack::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_ControllerTest_SvenSweepingAttack::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_ControllerTest_SvenSweepingAttack::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 354, @0x00000000026345e0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_ControllerTest_SvenSweepingAttack::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_ControllerTest_SvenSweepingAttack::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_ControllerTest_SvenSweepingAttack::GetEntityClassInternal  (line 354, @0x000000000263b9e0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_dota_05.cpp
// strings: "controller_test_sven_sweeping_attack", "CDOTA_Ability_ControllerTest_SvenSweepingAttack"
// globals: `guard variable for'CDOTA_Ability_ControllerTest_SvenSweepingAttack::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ControllerTest_SvenSweepingAttackClass, CDOTA_Ability_ControllerTest_SvenSweepingAttack::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ControllerTest_SvenSweepingAttackClass, __dso_handle, CDOTA_Ability_ControllerTest_SvenSweepingAttack::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_ControllerTest_SvenSweepingAttack::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_ControllerTest_SvenSweepingAttackClassInfo, CDOTA_Ability_ControllerTest_SvenSweepingAttack::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_ControllerTest_SvenSweepingAttackClassInfo
CEntityClass *__cdecl CDOTA_Ability_ControllerTest_SvenSweepingAttack::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_ControllerTest_SvenSweepingAttack::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ControllerTest_SvenSweepingAttackClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_ControllerTest_SvenSweepingAttack::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ControllerTest_SvenSweepingAttackClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_ControllerTest_SvenSweepingAttack::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ControllerTest_SvenSweepingAttackClass);
    CDOTA_Ability_ControllerTest_SvenSweepingAttack::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ControllerTest_SvenSweepingAttackClass._vptr_CEntityClass = off_4118B30;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_ControllerTest_SvenSweepingAttack::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ControllerTest_SvenSweepingAttackClass);
    __cxa_atexit(
      CDOTA_Ability_ControllerTest_SvenSweepingAttack::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_ControllerTest_SvenSweepingAttack::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ControllerTest_SvenSweepingAttackClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_ControllerTest_SvenSweepingAttackClass != 0 )
    return &CDOTA_Ability_ControllerTest_SvenSweepingAttack::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ControllerTest_SvenSweepingAttackClass;
  if ( `guard variable for'CDOTA_Ability_ControllerTest_SvenSweepingAttack::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_ControllerTest_SvenSweepingAttackClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_ControllerTest_SvenSweepingAttack::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_ControllerTest_SvenSweepingAttackClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_ControllerTest_SvenSweepingAttack::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_ControllerTest_SvenSweepingAttackClassInfo,
      "CDOTA_Ability_ControllerTest_SvenSweepingAttack",
      "controller_test_sven_sweeping_attack",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_ControllerTest_SvenSweepingAttack::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_ControllerTest_SvenSweepingAttackClassInfo);
  }
  CDOTA_Ability_ControllerTest_SvenSweepingAttack::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ControllerTest_SvenSweepingAttackClass.m_pClassInfo = &CDOTA_Ability_ControllerTest_SvenSweepingAttack::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_ControllerTest_SvenSweepingAttackClassInfo;
  CDOTA_Ability_ControllerTest_SvenSweepingAttack::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ControllerTest_SvenSweepingAttackClass.m_pBaseClassInfo = CDOTA_Ability_ControllerTest_SvenSweepingAttack::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_ControllerTest_SvenSweepingAttackClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_ControllerTest_SvenSweepingAttackClass = &CDOTA_Ability_ControllerTest_SvenSweepingAttack::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ControllerTest_SvenSweepingAttackClass;
  CDOTA_Ability_ControllerTest_SvenSweepingAttack::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_ControllerTest_SvenSweepingAttackClassInfo.m_pClass = &CDOTA_Ability_ControllerTest_SvenSweepingAttack::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ControllerTest_SvenSweepingAttackClass;
  CDOTA_Ability_ControllerTest_SvenSweepingAttack::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ControllerTest_SvenSweepingAttackClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_ControllerTest_SvenSweepingAttackClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_ControllerTest_SvenSweepingAttack::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ControllerTest_SvenSweepingAttackClass;
}


// CDOTA_Ability_ControllerTest_SvenSweepingAttack::ProcsMagicStick  (line 363, @0x0000000002625630, libserver.so)
bool __fastcall CDOTA_Ability_ControllerTest_SvenSweepingAttack::ProcsMagicStick(
        CDOTA_Ability_ControllerTest_SvenSweepingAttack *const this)
{
  return 0;
}


// CDOTA_Ability_ControllerTest_SvenSweepingAttack::IsStealable  (line 364, @0x0000000002625640, libserver.so)
bool __fastcall CDOTA_Ability_ControllerTest_SvenSweepingAttack::IsStealable(
        CDOTA_Ability_ControllerTest_SvenSweepingAttack *const this)
{
  return 0;
}


// CDOTA_Ability_ControllerTest_SvenSweepingAttack::GetIntrinsicModifierName  (line 366, @0x0000000002625650, libserver.so)
// strings: "modifier_disarmed"
const char *__fastcall CDOTA_Ability_ControllerTest_SvenSweepingAttack::GetIntrinsicModifierName(
        CDOTA_Ability_ControllerTest_SvenSweepingAttack *const this)
{
  return "modifier_disarmed";
}


// CDOTA_Ability_ControllerTest_SvenSweepingAttack::GetPlaybackRateOverride  (line 368, @0x0000000002625660, libserver.so)
float __fastcall CDOTA_Ability_ControllerTest_SvenSweepingAttack::GetPlaybackRateOverride(
        CDOTA_Ability_ControllerTest_SvenSweepingAttack *const this)
{
  return 0.80000001;
}


// CDOTA_Ability_ControllerTest_SvenSweepingAttack::OnAbilityPhaseStart  (line 376, @0x00000000025e0ba0, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::GetAttackAnimationPoint, CDOTA_BaseNPC::GetHasteFactor, KeyValues::KeyValues, KeyValues::SetFloat, KeyValues::SetString, CDOTA_BaseNPC::AddNewModifier, CDOTA_BaseNPC::UnitEmitSound, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "modifier_controller_test_melee_attack", "initial_delay", "attach_sword", "attachment_1", "attach_sword2", "attachment_2" (11 total)
bool __fastcall CDOTA_Ability_ControllerTest_SvenSweepingAttack::OnAbilityPhaseStart(
        CDOTA_Ability_ControllerTest_SvenSweepingAttack *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v3; // rax
  float v4; // xmm1_4
  float v5; // xmm1_4
  CDOTA_BaseNPC *v6; // r13
  CDOTA_BaseNPC *v7; // rax
  CDOTA_BaseNPC *v8; // rax
  KeyValues kv; // [rsp+10h] [rbp-40h] BYREF
  unsigned __int64 v11; // [rsp+28h] [rbp-28h]

  v11 = __readfsqword(0x28u);
  Caster = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::GetAttackAnimationPoint(Caster);
  v3 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::GetHasteFactor(v3);
  (*(this->_vptr_IHandleEntity + 213))(this);
  (*(this->_vptr_IHandleEntity + 213))(this);
  KeyValues::KeyValues(&kv, "modifier_controller_test_melee_attack");
  KeyValues::SetFloat(&kv, "duration", v4);
  KeyValues::SetFloat(&kv, "initial_delay", v5);
  KeyValues::SetString(&kv, "attachment_1", "attach_sword");
  KeyValues::SetString(&kv, "attachment_2", "attach_sword2");
  KeyValues::SetString(&kv, "attachment_3", "attach_sword3");
  KeyValues::SetString(&kv, "attack_land_sound", "Hero_Sven.Attack");
  v6 = CDOTABaseAbility::GetCaster(this);
  v7 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::AddNewModifier(v7, v6, this, "modifier_controller_test_melee_attack", &kv, 0);
  v8 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::UnitEmitSound(v8, "Hero_Sven.PreAttack", 0.0, 0, 0);
  KeyValues::~KeyValues(&kv);
  return 1;
}


// CDOTA_Ability_ControllerTest_SvenSweepingAttack::GetCastAnimation  (line 395, @0x00000000025ddd60, libserver.so)
Activity __fastcall CDOTA_Ability_ControllerTest_SvenSweepingAttack::GetCastAnimation(
        CDOTA_Ability_ControllerTest_SvenSweepingAttack *const this)
{
  return 1515;
}


// CDOTA_Ability_ControllerTest_SvenSweepingAttack::OnSpellStart  (line 402, @0x00000000025ddd70, libserver.so)
void __fastcall CDOTA_Ability_ControllerTest_SvenSweepingAttack::OnSpellStart(
        CDOTA_Ability_ControllerTest_SvenSweepingAttack *const this)
{
  ;
}


// CDOTA_Ability_ControllerTest_SvenSweepingAttack::GetCastPoint  (line 411, @0x00000000025e07a0, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::GetAttackAnimationPoint, CDOTA_BaseNPC::GetHasteFactor
float __fastcall CDOTA_Ability_ControllerTest_SvenSweepingAttack::GetCastPoint(
        CDOTA_Ability_ControllerTest_SvenSweepingAttack *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v3; // rax
  float AttackAnimationPoint; // [rsp+Ch] [rbp-14h]

  Caster = CDOTABaseAbility::GetCaster(this);
  AttackAnimationPoint = CDOTA_BaseNPC::GetAttackAnimationPoint(Caster);
  v3 = CDOTABaseAbility::GetCaster(this);
  return AttackAnimationPoint / CDOTA_BaseNPC::GetHasteFactor(v3);
}


// CDOTA_Ability_ControllerTest_SvenThrustingAttack::~CDOTA_Ability_ControllerTest_SvenThrustingAttack  (line 421, @0x0000000002630000, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_ControllerTest_SvenThrustingAttack::~CDOTA_Ability_ControllerTest_SvenThrustingAttack(
        CDOTA_Ability_ControllerTest_SvenThrustingAttack *const this)
{
  this->_vptr_IHandleEntity = &off_41196B0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_ControllerTest_SvenThrustingAttack::~CDOTA_Ability_ControllerTest_SvenThrustingAttack  (line 421, @0x0000000002630020, libserver.so)  // inlines: ~CDOTA_Ability_ControllerTest_SvenThrustingAttack
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_ControllerTest_SvenThrustingAttack::~CDOTA_Ability_ControllerTest_SvenThrustingAttack(
        CDOTA_Ability_ControllerTest_SvenThrustingAttack *const this)
{
  this->_vptr_IHandleEntity = &off_41196B0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_ControllerTest_SvenThrustingAttack::Schema_DynamicBinding  (line 423, @0x0000000002625670, libserver.so)
// globals: CDOTA_Ability_ControllerTest_SvenThrustingAttack::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_ControllerTest_SvenThrustingAttack::Schema_DynamicBinding(
        const CDOTA_Ability_ControllerTest_SvenThrustingAttack *const this)
{
  return CDOTA_Ability_ControllerTest_SvenThrustingAttack::s_pSchemaBinding;
}


// CDOTA_Ability_ControllerTest_SvenThrustingAttack::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 423, @0x0000000002625680, libserver.so)
// globals: CDOTA_Ability_ControllerTest_SvenThrustingAttack::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_ControllerTest_SvenThrustingAttack::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_ControllerTest_SvenThrustingAttack::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_ControllerTest_SvenThrustingAttack::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_ControllerTest_SvenThrustingAttack::CEntityInstanceEntityClass::DestructInstance  (line 423, @0x0000000002625690, libserver.so)  // inlines: Destruct<CDOTA_Ability_ControllerTest_SvenThrustingAttack>
void __fastcall CDOTA_Ability_ControllerTest_SvenThrustingAttack::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_ControllerTest_SvenThrustingAttack::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_ControllerTest_SvenThrustingAttack::CEntityInstanceEntityClass::FreeInstance  (line 423, @0x00000000026256b0, libserver.so)
void __fastcall CDOTA_Ability_ControllerTest_SvenThrustingAttack::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_ControllerTest_SvenThrustingAttack::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_ControllerTest_SvenThrustingAttack::CEntityInstanceEntityClass::CanAllocate  (line 423, @0x00000000026256d0, libserver.so)
bool __fastcall CDOTA_Ability_ControllerTest_SvenThrustingAttack::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_ControllerTest_SvenThrustingAttack::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_ControllerTest_SvenThrustingAttack::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 423, @0x00000000026256e0, libserver.so)
// globals: CDOTA_Ability_ControllerTest_SvenThrustingAttack::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_ControllerTest_SvenThrustingAttack::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_ControllerTest_SvenThrustingAttack::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_ControllerTest_SvenThrustingAttack::s_pSchemaBinding;
}


// CDOTA_Ability_ControllerTest_SvenThrustingAttack::CEntityInstanceEntityClass::AllocateInstance  (line 423, @0x000000000262dd40, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_ControllerTest_SvenThrustingAttack::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_ControllerTest_SvenThrustingAttack::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 920);
  memset(v1, 0, 0x398u);
  return v1;
}


// CDOTA_Ability_ControllerTest_SvenThrustingAttack::CEntityInstanceEntityClass::ConstructInstance  (line 423, @0x000000000262f1e0, libserver.so)  // inlines: CDOTA_Ability_ControllerTest_SvenThrustingAttack, Construct<CDOTA_Ability_ControllerTest_SvenThrustingAttack>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_ControllerTest_SvenThrustingAttack::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_ControllerTest_SvenThrustingAttack::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_41196B0;
  }
  return p;
}


// CDOTA_Ability_ControllerTest_SvenThrustingAttack::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 423, @0x0000000002634610, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_ControllerTest_SvenThrustingAttack::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_ControllerTest_SvenThrustingAttack::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_ControllerTest_SvenThrustingAttack::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 423, @0x0000000002634630, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_ControllerTest_SvenThrustingAttack::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_ControllerTest_SvenThrustingAttack::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_ControllerTest_SvenThrustingAttack::GetEntityClassInternal  (line 423, @0x000000000263bb30, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_dota_05.cpp
// strings: "controller_test_sven_thrusting_attack", "CDOTA_Ability_ControllerTest_SvenThrustingAttack"
// globals: `guard variable for'CDOTA_Ability_ControllerTest_SvenThrustingAttack::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ControllerTest_SvenThrustingAttackClas, CDOTA_Ability_ControllerTest_SvenThrustingAttack::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ControllerTest_SvenThrustingAttackClass, __dso_handle, CDOTA_Ability_ControllerTest_SvenThrustingAttack::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_ControllerTest_SvenThrustingAttack::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_ControllerTest_SvenThrustingAttackClassInf, CDOTA_Ability_ControllerTest_SvenThrustingAttack::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_ControllerTest_SvenThrustingAttackClassInfo
CEntityClass *__cdecl CDOTA_Ability_ControllerTest_SvenThrustingAttack::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_ControllerTest_SvenThrustingAttack::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ControllerTest_SvenThrustingAttackClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_ControllerTest_SvenThrustingAttack::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ControllerTest_SvenThrustingAttackClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_ControllerTest_SvenThrustingAttack::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ControllerTest_SvenThrustingAttackClass);
    CDOTA_Ability_ControllerTest_SvenThrustingAttack::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ControllerTest_SvenThrustingAttackClass._vptr_CEntityClass = off_4119630;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_ControllerTest_SvenThrustingAttack::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ControllerTest_SvenThrustingAttackClass);
    __cxa_atexit(
      CDOTA_Ability_ControllerTest_SvenThrustingAttack::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_ControllerTest_SvenThrustingAttack::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ControllerTest_SvenThrustingAttackClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_ControllerTest_SvenThrustingAttackClass != 0 )
    return &CDOTA_Ability_ControllerTest_SvenThrustingAttack::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ControllerTest_SvenThrustingAttackClass;
  if ( `guard variable for'CDOTA_Ability_ControllerTest_SvenThrustingAttack::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_ControllerTest_SvenThrustingAttackClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_ControllerTest_SvenThrustingAttack::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_ControllerTest_SvenThrustingAttackClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_ControllerTest_SvenThrustingAttack::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_ControllerTest_SvenThrustingAttackClassInfo,
      "CDOTA_Ability_ControllerTest_SvenThrustingAttack",
      "controller_test_sven_thrusting_attack",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_ControllerTest_SvenThrustingAttack::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_ControllerTest_SvenThrustingAttackClassInfo);
  }
  CDOTA_Ability_ControllerTest_SvenThrustingAttack::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ControllerTest_SvenThrustingAttackClass.m_pClassInfo = &CDOTA_Ability_ControllerTest_SvenThrustingAttack::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_ControllerTest_SvenThrustingAttackClassInfo;
  CDOTA_Ability_ControllerTest_SvenThrustingAttack::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ControllerTest_SvenThrustingAttackClass.m_pBaseClassInfo = CDOTA_Ability_ControllerTest_SvenThrustingAttack::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_ControllerTest_SvenThrustingAttackClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_ControllerTest_SvenThrustingAttackClass = &CDOTA_Ability_ControllerTest_SvenThrustingAttack::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ControllerTest_SvenThrustingAttackClass;
  CDOTA_Ability_ControllerTest_SvenThrustingAttack::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_ControllerTest_SvenThrustingAttackClassInfo.m_pClass = &CDOTA_Ability_ControllerTest_SvenThrustingAttack::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ControllerTest_SvenThrustingAttackClass;
  CDOTA_Ability_ControllerTest_SvenThrustingAttack::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ControllerTest_SvenThrustingAttackClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_ControllerTest_SvenThrustingAttackClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_ControllerTest_SvenThrustingAttack::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ControllerTest_SvenThrustingAttackClass;
}


// CDOTA_Ability_ControllerTest_SvenThrustingAttack::ProcsMagicStick  (line 432, @0x00000000026256f0, libserver.so)
bool __fastcall CDOTA_Ability_ControllerTest_SvenThrustingAttack::ProcsMagicStick(
        CDOTA_Ability_ControllerTest_SvenThrustingAttack *const this)
{
  return 0;
}


// CDOTA_Ability_ControllerTest_SvenThrustingAttack::IsStealable  (line 433, @0x0000000002625700, libserver.so)
bool __fastcall CDOTA_Ability_ControllerTest_SvenThrustingAttack::IsStealable(
        CDOTA_Ability_ControllerTest_SvenThrustingAttack *const this)
{
  return 0;
}


// CDOTA_Ability_ControllerTest_SvenThrustingAttack::GetIntrinsicModifierName  (line 435, @0x0000000002625710, libserver.so)
// strings: "modifier_disarmed"
const char *__fastcall CDOTA_Ability_ControllerTest_SvenThrustingAttack::GetIntrinsicModifierName(
        CDOTA_Ability_ControllerTest_SvenThrustingAttack *const this)
{
  return "modifier_disarmed";
}


// CDOTA_Ability_ControllerTest_SvenThrustingAttack::OnAbilityPhaseStart  (line 443, @0x00000000025e0d50, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::GetAttackAnimationPoint, CDOTA_BaseNPC::GetHasteFactor, KeyValues::KeyValues, KeyValues::SetFloat, KeyValues::SetString, CDOTA_BaseNPC::AddNewModifier, CDOTA_BaseNPC::UnitEmitSound, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "modifier_controller_test_melee_attack", "initial_delay", "attach_sword", "attachment_1", "attach_sword2", "attachment_2" (11 total)
bool __fastcall CDOTA_Ability_ControllerTest_SvenThrustingAttack::OnAbilityPhaseStart(
        CDOTA_Ability_ControllerTest_SvenThrustingAttack *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v3; // rax
  float v4; // xmm1_4
  float v5; // xmm1_4
  CDOTA_BaseNPC *v6; // r13
  CDOTA_BaseNPC *v7; // rax
  CDOTA_BaseNPC *v8; // rax
  KeyValues kv; // [rsp+10h] [rbp-40h] BYREF
  unsigned __int64 v11; // [rsp+28h] [rbp-28h]

  v11 = __readfsqword(0x28u);
  Caster = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::GetAttackAnimationPoint(Caster);
  v3 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::GetHasteFactor(v3);
  KeyValues::KeyValues(&kv, "modifier_controller_test_melee_attack");
  KeyValues::SetFloat(&kv, "duration", v4);
  KeyValues::SetFloat(&kv, "initial_delay", v5);
  KeyValues::SetString(&kv, "attachment_1", "attach_sword");
  KeyValues::SetString(&kv, "attachment_2", "attach_sword2");
  KeyValues::SetString(&kv, "attachment_3", "attach_sword3");
  KeyValues::SetString(&kv, "attack_land_sound", "Hero_Sven.Attack");
  v6 = CDOTABaseAbility::GetCaster(this);
  v7 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::AddNewModifier(v7, v6, this, "modifier_controller_test_melee_attack", &kv, 0);
  v8 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::UnitEmitSound(v8, "Hero_Sven.PreAttack", 0.0, 0, 0);
  KeyValues::~KeyValues(&kv);
  return 1;
}


// CDOTA_Ability_ControllerTest_SvenThrustingAttack::GetCastAnimation  (line 462, @0x00000000025ddd80, libserver.so)
Activity __fastcall CDOTA_Ability_ControllerTest_SvenThrustingAttack::GetCastAnimation(
        CDOTA_Ability_ControllerTest_SvenThrustingAttack *const this)
{
  return 1505;
}


// CDOTA_Ability_ControllerTest_SvenThrustingAttack::OnSpellStart  (line 469, @0x00000000025ddd90, libserver.so)
void __fastcall CDOTA_Ability_ControllerTest_SvenThrustingAttack::OnSpellStart(
        CDOTA_Ability_ControllerTest_SvenThrustingAttack *const this)
{
  ;
}


// CDOTA_Ability_ControllerTest_SvenThrustingAttack::GetCastPoint  (line 478, @0x00000000025e07f0, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::GetAttackAnimationPoint, CDOTA_BaseNPC::GetHasteFactor
float __fastcall CDOTA_Ability_ControllerTest_SvenThrustingAttack::GetCastPoint(
        CDOTA_Ability_ControllerTest_SvenThrustingAttack *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v3; // rax
  float AttackAnimationPoint; // [rsp+Ch] [rbp-14h]

  Caster = CDOTABaseAbility::GetCaster(this);
  AttackAnimationPoint = CDOTA_BaseNPC::GetAttackAnimationPoint(Caster);
  v3 = CDOTABaseAbility::GetCaster(this);
  return AttackAnimationPoint / CDOTA_BaseNPC::GetHasteFactor(v3);
}


// CDOTA_Ability_ControllerTest_SlarkSpinAttack::~CDOTA_Ability_ControllerTest_SlarkSpinAttack  (line 488, @0x0000000002630050, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_ControllerTest_SlarkSpinAttack::~CDOTA_Ability_ControllerTest_SlarkSpinAttack(
        CDOTA_Ability_ControllerTest_SlarkSpinAttack *const this)
{
  this->_vptr_IHandleEntity = &off_411A1B0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_ControllerTest_SlarkSpinAttack::~CDOTA_Ability_ControllerTest_SlarkSpinAttack  (line 488, @0x0000000002630070, libserver.so)  // inlines: ~CDOTA_Ability_ControllerTest_SlarkSpinAttack
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_ControllerTest_SlarkSpinAttack::~CDOTA_Ability_ControllerTest_SlarkSpinAttack(
        CDOTA_Ability_ControllerTest_SlarkSpinAttack *const this)
{
  this->_vptr_IHandleEntity = &off_411A1B0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_ControllerTest_SlarkSpinAttack::Schema_DynamicBinding  (line 490, @0x0000000002625720, libserver.so)
// globals: CDOTA_Ability_ControllerTest_SlarkSpinAttack::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_ControllerTest_SlarkSpinAttack::Schema_DynamicBinding(
        const CDOTA_Ability_ControllerTest_SlarkSpinAttack *const this)
{
  return CDOTA_Ability_ControllerTest_SlarkSpinAttack::s_pSchemaBinding;
}


// CDOTA_Ability_ControllerTest_SlarkSpinAttack::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 490, @0x0000000002625730, libserver.so)
// globals: CDOTA_Ability_ControllerTest_SlarkSpinAttack::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_ControllerTest_SlarkSpinAttack::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_ControllerTest_SlarkSpinAttack::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_ControllerTest_SlarkSpinAttack::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_ControllerTest_SlarkSpinAttack::CEntityInstanceEntityClass::DestructInstance  (line 490, @0x0000000002625740, libserver.so)  // inlines: Destruct<CDOTA_Ability_ControllerTest_SlarkSpinAttack>
void __fastcall CDOTA_Ability_ControllerTest_SlarkSpinAttack::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_ControllerTest_SlarkSpinAttack::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_ControllerTest_SlarkSpinAttack::CEntityInstanceEntityClass::FreeInstance  (line 490, @0x0000000002625760, libserver.so)
void __fastcall CDOTA_Ability_ControllerTest_SlarkSpinAttack::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_ControllerTest_SlarkSpinAttack::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_ControllerTest_SlarkSpinAttack::CEntityInstanceEntityClass::CanAllocate  (line 490, @0x0000000002625780, libserver.so)
bool __fastcall CDOTA_Ability_ControllerTest_SlarkSpinAttack::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_ControllerTest_SlarkSpinAttack::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_ControllerTest_SlarkSpinAttack::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 490, @0x0000000002625790, libserver.so)
// globals: CDOTA_Ability_ControllerTest_SlarkSpinAttack::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_ControllerTest_SlarkSpinAttack::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_ControllerTest_SlarkSpinAttack::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_ControllerTest_SlarkSpinAttack::s_pSchemaBinding;
}


// CDOTA_Ability_ControllerTest_SlarkSpinAttack::CEntityInstanceEntityClass::AllocateInstance  (line 490, @0x000000000262dd80, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_ControllerTest_SlarkSpinAttack::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_ControllerTest_SlarkSpinAttack::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 920);
  memset(v1, 0, 0x398u);
  return v1;
}


// CDOTA_Ability_ControllerTest_SlarkSpinAttack::CEntityInstanceEntityClass::ConstructInstance  (line 490, @0x000000000262f210, libserver.so)  // inlines: CDOTA_Ability_ControllerTest_SlarkSpinAttack, Construct<CDOTA_Ability_ControllerTest_SlarkSpinAttack>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_ControllerTest_SlarkSpinAttack::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_ControllerTest_SlarkSpinAttack::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_411A1B0;
  }
  return p;
}


// CDOTA_Ability_ControllerTest_SlarkSpinAttack::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 490, @0x0000000002634660, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_ControllerTest_SlarkSpinAttack::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_ControllerTest_SlarkSpinAttack::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_ControllerTest_SlarkSpinAttack::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 490, @0x0000000002634680, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_ControllerTest_SlarkSpinAttack::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_ControllerTest_SlarkSpinAttack::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_ControllerTest_SlarkSpinAttack::GetEntityClassInternal  (line 490, @0x000000000263bc80, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_dota_05.cpp
// strings: "controller_test_slark_spin_attack", "CDOTA_Ability_ControllerTest_SlarkSpinAttack"
// globals: `guard variable for'CDOTA_Ability_ControllerTest_SlarkSpinAttack::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ControllerTest_SlarkSpinAttackClass, CDOTA_Ability_ControllerTest_SlarkSpinAttack::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ControllerTest_SlarkSpinAttackClass, __dso_handle, CDOTA_Ability_ControllerTest_SlarkSpinAttack::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_ControllerTest_SlarkSpinAttack::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_ControllerTest_SlarkSpinAttackClassInfo, CDOTA_Ability_ControllerTest_SlarkSpinAttack::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_ControllerTest_SlarkSpinAttackClassInfo
CEntityClass *__cdecl CDOTA_Ability_ControllerTest_SlarkSpinAttack::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_ControllerTest_SlarkSpinAttack::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ControllerTest_SlarkSpinAttackClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_ControllerTest_SlarkSpinAttack::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ControllerTest_SlarkSpinAttackClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_ControllerTest_SlarkSpinAttack::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ControllerTest_SlarkSpinAttackClass);
    CDOTA_Ability_ControllerTest_SlarkSpinAttack::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ControllerTest_SlarkSpinAttackClass._vptr_CEntityClass = off_411A130;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_ControllerTest_SlarkSpinAttack::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ControllerTest_SlarkSpinAttackClass);
    __cxa_atexit(
      CDOTA_Ability_ControllerTest_SlarkSpinAttack::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_ControllerTest_SlarkSpinAttack::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ControllerTest_SlarkSpinAttackClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_ControllerTest_SlarkSpinAttackClass != 0 )
    return &CDOTA_Ability_ControllerTest_SlarkSpinAttack::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ControllerTest_SlarkSpinAttackClass;
  if ( `guard variable for'CDOTA_Ability_ControllerTest_SlarkSpinAttack::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_ControllerTest_SlarkSpinAttackClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_ControllerTest_SlarkSpinAttack::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_ControllerTest_SlarkSpinAttackClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_ControllerTest_SlarkSpinAttack::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_ControllerTest_SlarkSpinAttackClassInfo,
      "CDOTA_Ability_ControllerTest_SlarkSpinAttack",
      "controller_test_slark_spin_attack",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_ControllerTest_SlarkSpinAttack::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_ControllerTest_SlarkSpinAttackClassInfo);
  }
  CDOTA_Ability_ControllerTest_SlarkSpinAttack::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ControllerTest_SlarkSpinAttackClass.m_pClassInfo = &CDOTA_Ability_ControllerTest_SlarkSpinAttack::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_ControllerTest_SlarkSpinAttackClassInfo;
  CDOTA_Ability_ControllerTest_SlarkSpinAttack::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ControllerTest_SlarkSpinAttackClass.m_pBaseClassInfo = CDOTA_Ability_ControllerTest_SlarkSpinAttack::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_ControllerTest_SlarkSpinAttackClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_ControllerTest_SlarkSpinAttackClass = &CDOTA_Ability_ControllerTest_SlarkSpinAttack::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ControllerTest_SlarkSpinAttackClass;
  CDOTA_Ability_ControllerTest_SlarkSpinAttack::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_ControllerTest_SlarkSpinAttackClassInfo.m_pClass = &CDOTA_Ability_ControllerTest_SlarkSpinAttack::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ControllerTest_SlarkSpinAttackClass;
  CDOTA_Ability_ControllerTest_SlarkSpinAttack::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ControllerTest_SlarkSpinAttackClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_ControllerTest_SlarkSpinAttackClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_ControllerTest_SlarkSpinAttack::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ControllerTest_SlarkSpinAttackClass;
}


// CDOTA_Ability_ControllerTest_SlarkSpinAttack::ProcsMagicStick  (line 499, @0x00000000026257a0, libserver.so)
bool __fastcall CDOTA_Ability_ControllerTest_SlarkSpinAttack::ProcsMagicStick(
        CDOTA_Ability_ControllerTest_SlarkSpinAttack *const this)
{
  return 0;
}


// CDOTA_Ability_ControllerTest_SlarkSpinAttack::IsStealable  (line 500, @0x00000000026257b0, libserver.so)
bool __fastcall CDOTA_Ability_ControllerTest_SlarkSpinAttack::IsStealable(
        CDOTA_Ability_ControllerTest_SlarkSpinAttack *const this)
{
  return 0;
}


// CDOTA_Ability_ControllerTest_SlarkSpinAttack::GetIntrinsicModifierName  (line 502, @0x00000000026257c0, libserver.so)
// strings: "modifier_disarmed"
const char *__fastcall CDOTA_Ability_ControllerTest_SlarkSpinAttack::GetIntrinsicModifierName(
        CDOTA_Ability_ControllerTest_SlarkSpinAttack *const this)
{
  return "modifier_disarmed";
}


// CDOTA_Ability_ControllerTest_SlarkSpinAttack::OnAbilityPhaseStart  (line 510, @0x00000000025e0ed0, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::GetAttackAnimationPoint, CDOTA_BaseNPC::GetHasteFactor, KeyValues::KeyValues, KeyValues::SetFloat, KeyValues::SetString, CDOTA_BaseNPC::AddNewModifier, CDOTA_BaseNPC::UnitEmitSound, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "modifier_controller_test_melee_attack", "initial_delay", "attach_attack1", "attachment_1", "silent_ripper", "activity_modifier" (9 total)
bool __fastcall CDOTA_Ability_ControllerTest_SlarkSpinAttack::OnAbilityPhaseStart(
        CDOTA_Ability_ControllerTest_SlarkSpinAttack *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v3; // rax
  float v4; // xmm1_4
  float v5; // xmm1_4
  CDOTA_BaseNPC *v6; // r13
  CDOTA_BaseNPC *v7; // rax
  CDOTA_BaseNPC *v8; // rax
  KeyValues kv; // [rsp+10h] [rbp-40h] BYREF
  unsigned __int64 v11; // [rsp+28h] [rbp-28h]

  v11 = __readfsqword(0x28u);
  Caster = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::GetAttackAnimationPoint(Caster);
  v3 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::GetHasteFactor(v3);
  KeyValues::KeyValues(&kv, "modifier_controller_test_melee_attack");
  KeyValues::SetFloat(&kv, "duration", v4);
  KeyValues::SetFloat(&kv, "initial_delay", v5);
  KeyValues::SetString(&kv, "attachment_1", "attach_attack1");
  KeyValues::SetString(&kv, "activity_modifier", "silent_ripper");
  KeyValues::SetString(&kv, "attack_land_sound", "Hero_Slark.Attack");
  v6 = CDOTABaseAbility::GetCaster(this);
  v7 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::AddNewModifier(v7, v6, this, "modifier_controller_test_melee_attack", &kv, 0);
  v8 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::UnitEmitSound(v8, "Hero_Slark.PreAttack", 0.0, 0, 0);
  KeyValues::~KeyValues(&kv);
  return 1;
}


// CDOTA_Ability_ControllerTest_SlarkSpinAttack::GetCastAnimation  (line 528, @0x00000000025ddda0, libserver.so)
Activity __fastcall CDOTA_Ability_ControllerTest_SlarkSpinAttack::GetCastAnimation(
        CDOTA_Ability_ControllerTest_SlarkSpinAttack *const this)
{
  return 1604;
}


// CDOTA_Ability_ControllerTest_SlarkSpinAttack::OnSpellStart  (line 535, @0x00000000025dddb0, libserver.so)
void __fastcall CDOTA_Ability_ControllerTest_SlarkSpinAttack::OnSpellStart(
        CDOTA_Ability_ControllerTest_SlarkSpinAttack *const this)
{
  ;
}


// CDOTA_Ability_ControllerTest_SlarkSpinAttack::GetCastPoint  (line 544, @0x00000000025e0840, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::GetAttackAnimationPoint, CDOTA_BaseNPC::GetHasteFactor
float __fastcall CDOTA_Ability_ControllerTest_SlarkSpinAttack::GetCastPoint(
        CDOTA_Ability_ControllerTest_SlarkSpinAttack *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v3; // rax
  float AttackAnimationPoint; // [rsp+Ch] [rbp-14h]

  Caster = CDOTABaseAbility::GetCaster(this);
  AttackAnimationPoint = CDOTA_BaseNPC::GetAttackAnimationPoint(Caster);
  v3 = CDOTABaseAbility::GetCaster(this);
  return AttackAnimationPoint / CDOTA_BaseNPC::GetHasteFactor(v3);
}


