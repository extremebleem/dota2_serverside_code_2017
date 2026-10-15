// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/items/dota_item_orb_of_venom.cpp:28
class CDOTA_Item_Orb_of_Venom : public CDOTA_Item {
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
	CDOTA_Item_Orb_of_Venom(CDOTA_Item_Orb_of_Venom &);
	CDOTA_Item_Orb_of_Venom(CDOTA_Item_Orb_of_Venom &);
	CDOTA_Item_Orb_of_Venom();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual ~CDOTA_Item_Orb_of_Venom();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_orb_of_venom.cpp:42
class CDOTA_OrbOrb_of_Venom : public CDOTA_Orb {
public:

private:

	int slow;  // +0x18
	float duration;  // +0x1c
	float damage;  // +0x20
	CDOTA_OrbOrb_of_Venom(CDOTA_AttackRecord *, KeyValues *, CDOTA_BaseNPC *, CDOTABaseAbility *);
	virtual const char * GetProjectileName();
	virtual int GetOrbLabel();
	virtual void OnOrbImpact(const CModifierParams &);
	virtual ~CDOTA_OrbOrb_of_Venom();

	// vtable[3] GetProjectileName
	// vtable[4] GetOrbLabel
	// vtable[8] OnOrbImpact
	// sizeof = 40
};

// src/game/shared/dota/items/dota_item_orb_of_venom.cpp:86
class CDOTA_Modifier_Item_Orb_of_Venom : public CDOTA_Buff_Item {
public:

private:

	int poison_movement_speed_melee;  // +0xba8
	int poison_movement_speed_range;  // +0xbac
	float poison_duration;  // +0xbb0
	float poison_damage;  // +0xbb4
	CDOTA_Modifier_Item_Orb_of_Venom();
	virtual void OnCreated(KeyValues *);
	virtual void DeclareFunctions();
	ModifierVariant_t OnAttackLanded(const CModifierParams &);
	virtual ~CDOTA_Modifier_Item_Orb_of_Venom();

	// vtable[57] OnCreated
	// vtable[65] DeclareFunctions
	// sizeof = 3000
};

// src/game/shared/dota/items/dota_item_orb_of_venom.cpp:143
class CDOTA_Modifier_Item_Orb_of_Venom_Slow : public CDOTA_Buff {
public:

private:

	float duration;  // +0xba8
	int32 slow;  // +0xbac
	float damage;  // +0xbb0
	CDOTA_Modifier_Item_Orb_of_Venom_Slow();
	virtual void OnCreated(KeyValues *);
	virtual void OnIntervalThink();
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierMoveSpeedBonus_Percentage(const CModifierParams &);
	virtual const char * GetEffectName();
	virtual bool IsDebuff();
	virtual bool IsHidden();
	virtual void AddCustomTransmiterData(CDOTAModifierBuffTableEntry &);
	virtual ~CDOTA_Modifier_Item_Orb_of_Venom_Slow();

	// vtable[57] OnCreated
	// vtable[56] OnIntervalThink
	// vtable[65] DeclareFunctions
	// vtable[67] GetEffectName
	// vtable[12] IsDebuff
	// vtable[11] IsHidden
	// vtable[10] AddCustomTransmiterData
	// sizeof = 3000
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Item_Orb_of_Venom::~CDOTA_Item_Orb_of_Venom  (line 28, @0x0000000002dd80a0, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_Orb_of_Venom::~CDOTA_Item_Orb_of_Venom(CDOTA_Item_Orb_of_Venom *const this)
{
  this->_vptr_IHandleEntity = &off_4734070;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_Orb_of_Venom::~CDOTA_Item_Orb_of_Venom  (line 28, @0x0000000002dd80c0, libserver.so)  // inlines: ~CDOTA_Item_Orb_of_Venom
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_Orb_of_Venom::~CDOTA_Item_Orb_of_Venom(CDOTA_Item_Orb_of_Venom *const this)
{
  this->_vptr_IHandleEntity = &off_4734070;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_Orb_of_Venom::Schema_DynamicBinding  (line 30, @0x0000000002dd4520, libserver.so)
// globals: CDOTA_Item_Orb_of_Venom::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Orb_of_Venom::Schema_DynamicBinding(
        const CDOTA_Item_Orb_of_Venom *const this)
{
  return CDOTA_Item_Orb_of_Venom::s_pSchemaBinding;
}


// CDOTA_Item_Orb_of_Venom::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 30, @0x0000000002dd4530, libserver.so)
// globals: CDOTA_Item_Orb_of_Venom::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Orb_of_Venom::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_Orb_of_Venom::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Orb_of_Venom::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_Orb_of_Venom::CEntityInstanceEntityClass::DestructInstance  (line 30, @0x0000000002dd4540, libserver.so)  // inlines: Destruct<CDOTA_Item_Orb_of_Venom>
void __fastcall CDOTA_Item_Orb_of_Venom::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_Orb_of_Venom::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_Orb_of_Venom::CEntityInstanceEntityClass::FreeInstance  (line 30, @0x0000000002dd4560, libserver.so)
void __fastcall CDOTA_Item_Orb_of_Venom::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_Orb_of_Venom::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_Orb_of_Venom::CEntityInstanceEntityClass::CanAllocate  (line 30, @0x0000000002dd4580, libserver.so)
bool __fastcall CDOTA_Item_Orb_of_Venom::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_Orb_of_Venom::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_Orb_of_Venom::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 30, @0x0000000002dd4590, libserver.so)
// globals: CDOTA_Item_Orb_of_Venom::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_Orb_of_Venom::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_Orb_of_Venom::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Orb_of_Venom::s_pSchemaBinding;
}


// CDOTA_Item_Orb_of_Venom::CEntityInstanceEntityClass::AllocateInstance  (line 30, @0x0000000002dd5fb0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_Orb_of_Venom::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_Orb_of_Venom::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_Orb_of_Venom::CEntityInstanceEntityClass::ConstructInstance  (line 30, @0x0000000002dd70a0, libserver.so)  // inlines: CDOTA_Item_Orb_of_Venom, Construct<CDOTA_Item_Orb_of_Venom>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_Orb_of_Venom::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_Orb_of_Venom::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_4734070;
  }
  return p;
}


// CDOTA_Item_Orb_of_Venom::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 30, @0x0000000002dd9fd0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_Orb_of_Venom::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Orb_of_Venom::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_Orb_of_Venom::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 30, @0x0000000002dd9ff0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_Orb_of_Venom::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Orb_of_Venom::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_Orb_of_Venom::GetEntityClassInternal  (line 30, @0x0000000002de18e0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_05.cpp
// strings: "CDOTA_Item_Orb_of_Venom"
// globals: `guard variable for'CDOTA_Item_Orb_of_Venom::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Orb_of_VenomClass, CDOTA_Item_Orb_of_Venom::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Orb_of_VenomClass, __dso_handle, CDOTA_Item_Orb_of_Venom::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_Orb_of_Venom::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Orb_of_VenomClassInfo, CDOTA_Item_Orb_of_Venom::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Orb_of_VenomClassInfo
CEntityClass *__cdecl CDOTA_Item_Orb_of_Venom::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Orb_of_Venom::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Orb_of_VenomClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Orb_of_Venom::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Orb_of_VenomClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_Orb_of_Venom::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Orb_of_VenomClass);
    CDOTA_Item_Orb_of_Venom::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Orb_of_VenomClass._vptr_CEntityClass = off_4733FF0;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Orb_of_Venom::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Orb_of_VenomClass);
    __cxa_atexit(
      CDOTA_Item_Orb_of_Venom::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_Orb_of_Venom::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Orb_of_VenomClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_Orb_of_VenomClass != 0 )
    return &CDOTA_Item_Orb_of_Venom::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Orb_of_VenomClass;
  if ( `guard variable for'CDOTA_Item_Orb_of_Venom::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Orb_of_VenomClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Orb_of_Venom::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Orb_of_VenomClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_Orb_of_Venom::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Orb_of_VenomClassInfo,
      "CDOTA_Item_Orb_of_Venom",
      "item_orb_of_venom",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Orb_of_Venom::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Orb_of_VenomClassInfo);
  }
  CDOTA_Item_Orb_of_Venom::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Orb_of_VenomClass.m_pClassInfo = &CDOTA_Item_Orb_of_Venom::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Orb_of_VenomClassInfo;
  CDOTA_Item_Orb_of_Venom::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Orb_of_VenomClass.m_pBaseClassInfo = CDOTA_Item_Orb_of_Venom::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Orb_of_VenomClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_Orb_of_VenomClass = &CDOTA_Item_Orb_of_Venom::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Orb_of_VenomClass;
  CDOTA_Item_Orb_of_Venom::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Orb_of_VenomClassInfo.m_pClass = &CDOTA_Item_Orb_of_Venom::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Orb_of_VenomClass;
  CDOTA_Item_Orb_of_Venom::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Orb_of_VenomClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_Orb_of_VenomClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_Orb_of_Venom::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Orb_of_VenomClass;
}


// CDOTA_Item_Orb_of_Venom::GetIntrinsicModifierName  (line 33, @0x0000000002dd45a0, libserver.so)
// strings: "modifier_item_orb_of_venom"
const char *__fastcall CDOTA_Item_Orb_of_Venom::GetIntrinsicModifierName(CDOTA_Item_Orb_of_Venom *const this)
{
  return "modifier_item_orb_of_venom";
}


// CDOTA_Modifier_Item_Orb_of_Venom::~CDOTA_Modifier_Item_Orb_of_Venom  (line 86, @0x0000000002dd6570, libserver.so)  // inlines: ~CDOTA_Buff_Item
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_Orb_of_Venom::~CDOTA_Modifier_Item_Orb_of_Venom(
        CDOTA_Modifier_Item_Orb_of_Venom *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_Orb_of_Venom::~CDOTA_Modifier_Item_Orb_of_Venom  (line 86, @0x0000000002dd6590, libserver.so)  // inlines: ~CDOTA_Buff_Item, ~CDOTA_Modifier_Item_Orb_of_Venom
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_Orb_of_Venom::~CDOTA_Modifier_Item_Orb_of_Venom(
        CDOTA_Modifier_Item_Orb_of_Venom *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_Orb_of_Venom::OnCreated  (line 106, @0x0000000002dd25a0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>
// strings: "poison_movement_speed_melee", "poison_movement_speed_range", "poison_duration", "poison_damage"
void __fastcall CDOTA_Modifier_Item_Orb_of_Venom::OnCreated(
        CDOTA_Modifier_Item_Orb_of_Venom *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->poison_movement_speed_melee = CDOTABaseAbility::GetLevelSpecialValueFor<int>(
                                          Ability,
                                          "poison_movement_speed_melee",
                                          -1,
                                          0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  else
  {
    this->poison_movement_speed_melee = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->poison_movement_speed_range = CDOTABaseAbility::GetLevelSpecialValueFor<int>(
                                            v4,
                                            "poison_movement_speed_range",
                                            -1,
                                            0);
      v5 = CDOTA_Buff::GetAbility(this);
      if ( v5 != 0 )
        goto LABEL_4;
LABEL_8:
      this->poison_duration = 0.0;
      v6 = CDOTA_Buff::GetAbility(this);
      if ( v6 != 0 )
        goto LABEL_5;
      goto LABEL_9;
    }
  }
  this->poison_movement_speed_range = 0;
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 == 0 )
    goto LABEL_8;
LABEL_4:
  this->poison_duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v5, "poison_duration", -1, 0);
  v6 = CDOTA_Buff::GetAbility(this);
  if ( v6 != 0 )
  {
LABEL_5:
    this->poison_damage = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v6, "poison_damage", -1, 0);
    return;
  }
LABEL_9:
  this->poison_damage = 0.0;
}


// CDOTA_Modifier_Item_Orb_of_Venom::DeclareFunctions  (line 115, @0x0000000002dc7330, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Item_Orb_of_Venom::OnAttackLanded(CModifierParams const&)
void __fastcall CDOTA_Modifier_Item_Orb_of_Venom::DeclareFunctions(CDOTA_Modifier_Item_Orb_of_Venom *const this)
{
  this->m_Functions[121].__pfn = CDOTA_Modifier_Item_Orb_of_Venom::OnAttackLanded;
  this->m_Functions[121].__delta = 0;
}


// CDOTA_Modifier_Item_Orb_of_Venom::OnAttackLanded  (line 121, @0x0000000002dca120, libserver.so)  // inlines: AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: __stack_chk_fail, CDOTA_Buff::GetParent, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_Buff::GetCaster, CDOTA_Buff::GetAbility, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, _Unwind_Resume
// strings: "modifier_item_orb_of_venom_slow"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Orb_of_Venom::OnAttackLanded(
        CDOTA_Modifier_Item_Orb_of_Venom *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *m_pInstance; // r12
  uint32 v7; // eax
  unsigned __int64 m_Index_low; // rsi
  CEntityIdentity *v9; // rdx
  CEntityIdentity *v10; // rdx
  CDOTA_BaseNPC *v12; // r13
  CDOTA_BaseNPC *Parent; // rax
  uint32 m_iUnitType; // edx
  float v15; // xmm1_4
  float v16; // xmm1_4
  float v17; // xmm1_4
  CDOTABaseAbility *Ability; // r14
  CDOTA_BaseNPC *Caster; // rax
  KeyValues kv; // [rsp+0h] [rbp-40h] BYREF
  unsigned __int64 v21; // [rsp+18h] [rbp-28h]

  v21 = __readfsqword(0x28u);
  m_Index = params->htarget.m_Index;
  if ( m_Index + 2 <= 1
    || (v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->htarget.m_Index) >> 9) & 0x3F]) == 0
    || (v5 = &v4[params->htarget.m_Index & 0x1FF]) == 0
    || m_Index != v5->m_EHandle.m_Index
    || (m_pInstance = v5->m_pInstance, v5->m_pInstance == 0)
    || !m_pInstance->m_bIsDOTANPC )
  {
    m_pInstance = 0;
  }
  v7 = params->hattacker.m_Index;
  if ( v7 + 2 > 1 )
  {
    m_Index_low = LOWORD(params->hattacker.m_Index);
    v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(m_Index_low >> 9) & 0x3F];
    if ( v9 != 0 )
    {
      v10 = &v9[m_Index_low & 0x1FF];
      if ( v10 != 0 && v7 == v10->m_EHandle.m_Index )
      {
        v12 = v10->m_pInstance;
        if ( v10->m_pInstance != 0 && v12->m_bIsDOTANPC )
        {
          Parent = CDOTA_Buff::GetParent(this);
          if ( Parent == v12 )
          {
            m_iUnitType = m_pInstance->m_iUnitType;
            if ( (m_iUnitType & 0x10) == 0
              && (m_iUnitType & 0x193) != 0
              && Parent->m_iTeamNum.m_Value != m_pInstance->m_iTeamNum.m_Value )
            {
              KeyValues::KeyValues(&kv, "orb");
              KeyValues::SetFloat(&kv, "duration", v15);
              KeyValues::SetFloat(&kv, "damage", v16);
              CDOTA_Buff::GetCaster(this);
              KeyValues::SetFloat(&kv, "slow", v17);
              Ability = CDOTA_Buff::GetAbility(this);
              Caster = CDOTA_Buff::GetCaster(this);
              CDOTA_BaseNPC::AddNewModifier(m_pInstance, Caster, Ability, "modifier_item_orb_of_venom_slow", &kv, 0);
              KeyValues::~KeyValues(&kv);
            }
          }
        }
      }
    }
  }
  return 1uLL;
}


// CDOTA_Modifier_Item_Orb_of_Venom_Slow::~CDOTA_Modifier_Item_Orb_of_Venom_Slow  (line 143, @0x0000000002dd6980, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_Orb_of_Venom_Slow::~CDOTA_Modifier_Item_Orb_of_Venom_Slow(
        CDOTA_Modifier_Item_Orb_of_Venom_Slow *const this)
{
  this->_vptr_CDOTA_Buff = &off_4734F50;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_Orb_of_Venom_Slow::~CDOTA_Modifier_Item_Orb_of_Venom_Slow  (line 143, @0x0000000002dd69a0, libserver.so)  // inlines: ~CDOTA_Modifier_Item_Orb_of_Venom_Slow
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_Orb_of_Venom_Slow::~CDOTA_Modifier_Item_Orb_of_Venom_Slow(
        CDOTA_Modifier_Item_Orb_of_Venom_Slow *const this)
{
  this->_vptr_CDOTA_Buff = &off_4734F50;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_Orb_of_Venom_Slow::GetEffectName  (line 154, @0x0000000002dd45b0, libserver.so)
// strings: "particles/items2_fx/orb_of_venom.vpcf"
const char *__fastcall CDOTA_Modifier_Item_Orb_of_Venom_Slow::GetEffectName(
        CDOTA_Modifier_Item_Orb_of_Venom_Slow *const this)
{
  return "particles/items2_fx/orb_of_venom.vpcf";
}


// CDOTA_Modifier_Item_Orb_of_Venom_Slow::IsDebuff  (line 156, @0x0000000002dd45c0, libserver.so)
bool __fastcall CDOTA_Modifier_Item_Orb_of_Venom_Slow::IsDebuff(CDOTA_Modifier_Item_Orb_of_Venom_Slow *const this)
{
  return 1;
}


// CDOTA_Modifier_Item_Orb_of_Venom_Slow::IsHidden  (line 157, @0x0000000002dd45d0, libserver.so)
bool __fastcall CDOTA_Modifier_Item_Orb_of_Venom_Slow::IsHidden(CDOTA_Modifier_Item_Orb_of_Venom_Slow *const this)
{
  return 0;
}


// CDOTA_Modifier_Item_Orb_of_Venom_Slow::OnCreated  (line 176, @0x0000000002dc7950, libserver.so)
// calls: KeyValues::GetFloat, KeyValues::GetInt, CDOTA_Buff::StartIntervalThink
void __fastcall CDOTA_Modifier_Item_Orb_of_Venom_Slow::OnCreated(
        CDOTA_Modifier_Item_Orb_of_Venom_Slow *const this,
        KeyValues *pKV)
{
  float v2; // xmm1_4
  float v5; // xmm1_4
  float v6; // xmm1_4

  this->duration = KeyValues::GetFloat(pKV, "duration", v2);
  this->slow = KeyValues::GetInt(pKV, "slow", 0);
  this->damage = KeyValues::GetFloat(pKV, "damage", v5);
  CDOTA_Buff::StartIntervalThink(this, 1.0, v6);
}


// CDOTA_Modifier_Item_Orb_of_Venom_Slow::AddCustomTransmiterData  (line 187, @0x0000000002dc79c0, libserver.so)  // inlines: set_has_movement_speed, set_movement_speed
// calls: CDOTA_Buff::AddCustomTransmiterData
void __fastcall CDOTA_Modifier_Item_Orb_of_Venom_Slow::AddCustomTransmiterData(
        CDOTA_Modifier_Item_Orb_of_Venom_Slow *const this,
        CDOTAModifierBuffTableEntry *const entry)
{
  int32 slow; // eax

  slow = this->slow;
  *(entry + 4) |= 0x200000u;
  *(entry + 32) = slow;
  CDOTA_Buff::AddCustomTransmiterData(this, entry);
}


// CDOTA_Modifier_Item_Orb_of_Venom_Slow::DeclareFunctions  (line 204, @0x0000000002dc7350, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Item_Orb_of_Venom_Slow::GetModifierMoveSpeedBonus_Percentage(CModifierParams const&)
void __fastcall CDOTA_Modifier_Item_Orb_of_Venom_Slow::DeclareFunctions(
        CDOTA_Modifier_Item_Orb_of_Venom_Slow *const this)
{
  this->m_Functions[13].__pfn = CDOTA_Modifier_Item_Orb_of_Venom_Slow::GetModifierMoveSpeedBonus_Percentage;
  this->m_Functions[13].__delta = 0;
}


// CDOTA_Modifier_Item_Orb_of_Venom_Slow::GetModifierMoveSpeedBonus_Percentage  (line 211, @0x0000000002dc7370, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Orb_of_Venom_Slow::GetModifierMoveSpeedBonus_Percentage(
        CDOTA_Modifier_Item_Orb_of_Venom_Slow *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->slow;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Orb_of_Venom_Slow::OnIntervalThink  (line 217, @0x0000000002dc7ae0, libserver.so)
// calls: CDOTA_Buff::GetAbility, CDOTA_Buff::GetParent, CDOTA_Buff::GetCaster, ApplyDamage, SendOverheadEventMessage
void __fastcall CDOTA_Modifier_Item_Orb_of_Venom_Slow::OnIntervalThink(
        CDOTA_Modifier_Item_Orb_of_Venom_Slow *const this)
{
  CDOTABaseAbility *Ability; // r13
  CDOTA_BaseNPC *Parent; // r12
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v5; // rax
  float flDamage; // [rsp+Ch] [rbp-24h]

  flDamage = this->damage;
  Ability = CDOTA_Buff::GetAbility(this);
  Parent = CDOTA_Buff::GetParent(this);
  Caster = CDOTA_Buff::GetCaster(this);
  ApplyDamage(Caster, Parent, Ability, flDamage, 2, 0);
  LODWORD(Parent) = this->damage;
  v5 = CDOTA_Buff::GetParent(this);
  SendOverheadEventMessage(0, DOTA_OVERHEAD_ALERT::OVERHEAD_ALERT_BONUS_SPELL_DAMAGE, v5, Parent, 0);
}


