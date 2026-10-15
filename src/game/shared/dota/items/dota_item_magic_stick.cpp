// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/items/dota_item_magic_stick.cpp:27
class CDOTA_Item_MagicStick : public CDOTA_Item {
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
	CDOTA_Item_MagicStick(CDOTA_Item_MagicStick &);
	CDOTA_Item_MagicStick(CDOTA_Item_MagicStick &);
	CDOTA_Item_MagicStick();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual float GetCooldown(int);
	virtual void OnSpellStart();
	virtual ~CDOTA_Item_MagicStick();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// vtable[242] GetCooldown
	// vtable[266] OnSpellStart
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_magic_stick.cpp:72
class CDOTA_Modifier_Item_MagicStick : public CDOTA_Buff_Item {
public:

private:

	int charge_radius;  // +0xba8
	int max_charges;  // +0xbac
	CDOTA_Modifier_Item_MagicStick();
	ModifierVariant_t OnAbilityExecuted(const CModifierParams &);
	virtual void DeclareFunctions();
	virtual void OnCreated(KeyValues *);
	virtual ~CDOTA_Modifier_Item_MagicStick();

	// vtable[65] DeclareFunctions
	// vtable[57] OnCreated
	// sizeof = 2992
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Item_MagicStick::~CDOTA_Item_MagicStick  (line 27, @0x0000000002dbca90, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_MagicStick::~CDOTA_Item_MagicStick(CDOTA_Item_MagicStick *const this)
{
  this->_vptr_IHandleEntity = &off_470BA10;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_MagicStick::~CDOTA_Item_MagicStick  (line 27, @0x0000000002dbcab0, libserver.so)  // inlines: ~CDOTA_Item_MagicStick
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_MagicStick::~CDOTA_Item_MagicStick(CDOTA_Item_MagicStick *const this)
{
  this->_vptr_IHandleEntity = &off_470BA10;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_MagicStick::Schema_DynamicBinding  (line 29, @0x0000000002db9050, libserver.so)
// globals: CDOTA_Item_MagicStick::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_MagicStick::Schema_DynamicBinding(
        const CDOTA_Item_MagicStick *const this)
{
  return CDOTA_Item_MagicStick::s_pSchemaBinding;
}


// CDOTA_Item_MagicStick::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 29, @0x0000000002db9060, libserver.so)
// globals: CDOTA_Item_MagicStick::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_MagicStick::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_MagicStick::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_MagicStick::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_MagicStick::CEntityInstanceEntityClass::DestructInstance  (line 29, @0x0000000002db9070, libserver.so)  // inlines: Destruct<CDOTA_Item_MagicStick>
void __fastcall CDOTA_Item_MagicStick::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_MagicStick::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_MagicStick::CEntityInstanceEntityClass::FreeInstance  (line 29, @0x0000000002db9090, libserver.so)
void __fastcall CDOTA_Item_MagicStick::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_MagicStick::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_MagicStick::CEntityInstanceEntityClass::CanAllocate  (line 29, @0x0000000002db90b0, libserver.so)
bool __fastcall CDOTA_Item_MagicStick::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_MagicStick::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_MagicStick::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 29, @0x0000000002db90c0, libserver.so)
// globals: CDOTA_Item_MagicStick::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_MagicStick::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_MagicStick::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_MagicStick::s_pSchemaBinding;
}


// CDOTA_Item_MagicStick::CEntityInstanceEntityClass::AllocateInstance  (line 29, @0x0000000002dba7c0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_MagicStick::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_MagicStick::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_MagicStick::CEntityInstanceEntityClass::ConstructInstance  (line 29, @0x0000000002dbba60, libserver.so)  // inlines: CDOTA_Item_MagicStick, Construct<CDOTA_Item_MagicStick>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_MagicStick::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_MagicStick::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_470BA10;
  }
  return p;
}


// CDOTA_Item_MagicStick::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 29, @0x0000000002dbec90, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_MagicStick::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_MagicStick::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_MagicStick::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 29, @0x0000000002dbecb0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_MagicStick::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_MagicStick::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_MagicStick::GetEntityClassInternal  (line 29, @0x0000000002dc4b30, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_04.cpp
// strings: "CDOTA_Item_MagicStick"
// globals: `guard variable for'CDOTA_Item_MagicStick::GetEntityClassInternal(void)::g_EntityCDOTA_Item_MagicStickClass, CDOTA_Item_MagicStick::GetEntityClassInternal(void)::g_EntityCDOTA_Item_MagicStickClass, __dso_handle, CDOTA_Item_MagicStick::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_MagicStick::GetEntityClassInfo(void)::g_EntityCDOTA_Item_MagicStickClassInfo, CDOTA_Item_MagicStick::GetEntityClassInfo(void)::g_EntityCDOTA_Item_MagicStickClassInfo
CEntityClass *__cdecl CDOTA_Item_MagicStick::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_MagicStick::GetEntityClassInternal(void)::g_EntityCDOTA_Item_MagicStickClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_MagicStick::GetEntityClassInternal(void)::g_EntityCDOTA_Item_MagicStickClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_MagicStick::GetEntityClassInternal(void)::g_EntityCDOTA_Item_MagicStickClass);
    CDOTA_Item_MagicStick::GetEntityClassInternal(void)::g_EntityCDOTA_Item_MagicStickClass._vptr_CEntityClass = off_470B990;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_MagicStick::GetEntityClassInternal(void)::g_EntityCDOTA_Item_MagicStickClass);
    __cxa_atexit(
      CDOTA_Item_MagicStick::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_MagicStick::GetEntityClassInternal(void)::g_EntityCDOTA_Item_MagicStickClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_MagicStickClass != 0 )
    return &CDOTA_Item_MagicStick::GetEntityClassInternal(void)::g_EntityCDOTA_Item_MagicStickClass;
  if ( `guard variable for'CDOTA_Item_MagicStick::GetEntityClassInfo(void)::g_EntityCDOTA_Item_MagicStickClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_MagicStick::GetEntityClassInfo(void)::g_EntityCDOTA_Item_MagicStickClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_MagicStick::GetEntityClassInfo(void)::g_EntityCDOTA_Item_MagicStickClassInfo,
      "CDOTA_Item_MagicStick",
      "item_magic_stick",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_MagicStick::GetEntityClassInfo(void)::g_EntityCDOTA_Item_MagicStickClassInfo);
  }
  CDOTA_Item_MagicStick::GetEntityClassInternal(void)::g_EntityCDOTA_Item_MagicStickClass.m_pClassInfo = &CDOTA_Item_MagicStick::GetEntityClassInfo(void)::g_EntityCDOTA_Item_MagicStickClassInfo;
  CDOTA_Item_MagicStick::GetEntityClassInternal(void)::g_EntityCDOTA_Item_MagicStickClass.m_pBaseClassInfo = CDOTA_Item_MagicStick::GetEntityClassInfo(void)::g_EntityCDOTA_Item_MagicStickClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_MagicStickClass = &CDOTA_Item_MagicStick::GetEntityClassInternal(void)::g_EntityCDOTA_Item_MagicStickClass;
  CDOTA_Item_MagicStick::GetEntityClassInfo(void)::g_EntityCDOTA_Item_MagicStickClassInfo.m_pClass = &CDOTA_Item_MagicStick::GetEntityClassInternal(void)::g_EntityCDOTA_Item_MagicStickClass;
  CDOTA_Item_MagicStick::GetEntityClassInternal(void)::g_EntityCDOTA_Item_MagicStickClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_MagicStickClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_MagicStick::GetEntityClassInternal(void)::g_EntityCDOTA_Item_MagicStickClass;
}


// CDOTA_Item_MagicStick::GetIntrinsicModifierName  (line 31, @0x0000000002db90d0, libserver.so)
// strings: "modifier_item_magic_stick"
const char *__fastcall CDOTA_Item_MagicStick::GetIntrinsicModifierName(CDOTA_Item_MagicStick *const this)
{
  return "modifier_item_magic_stick";
}


// CDOTA_Item_MagicStick::GetCooldown  (line 33, @0x0000000002dbbcd0, libserver.so)
// calls: CDOTABaseAbility::GetCooldown
float __fastcall CDOTA_Item_MagicStick::GetCooldown(CDOTA_Item_MagicStick *const this, int iLevel)
{
  if ( this->m_iCurrentCharges.m_Value <= 0 )
    return 0.0;
  else
    return CDOTABaseAbility::GetCooldown(this, iLevel);
}


// CDOTA_Item_MagicStick::OnSpellStart  (line 41, @0x0000000002db3610, libserver.so)  // inlines: Vector
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::Heal, CDOTA_BaseNPC::GiveMana, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControl, CDOTA_ParticleManager::ReleaseParticleIndex, DOTA_EmitSound, CDOTA_Item::SetCurrentCharges, CDOTA_BaseNPC::InterruptChannel
// strings: "restore_per_charge", "max_charges", "particles/items2_fx/magic_stick.vpcf", "DOTA_Item.MagicStick.Activate"
void __fastcall CDOTA_Item_MagicStick::OnSpellStart(CDOTA_Item_MagicStick *const this)
{
  int LevelSpecialValue; // r12d
  int v3; // r13d
  __m128i v4; // xmm2
  float v5; // r12d
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v7; // rax
  CDOTA_BaseNPC *v8; // r12
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_ParticleManager *v10; // rax
  CDOTA_ParticleManager *v11; // rax
  CDOTA_BaseNPC *v12; // rax
  CDOTA_BaseNPC *v13; // rax
  unsigned int flRatio; // [rsp+Ch] [rbp-34h]

  if ( this->m_iCurrentCharges.m_Value != 0 )
  {
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "restore_per_charge", -1, 0);
    v3 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "max_charges", -1, 0);
    *v4.m128i_i32 = (this->m_iCurrentCharges.m_Value * LevelSpecialValue);
    v5 = COERCE_FLOAT(_mm_cvtsi128_si32(v4));
    Caster = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::Heal(Caster, v5, this, 0, 1);
    v7 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::GiveMana(v7, v5, this, 1);
    *&flRatio = this->m_iCurrentCharges.m_Value / v3;
    v8 = CDOTABaseAbility::GetCaster(this);
    ParticleManager = GetParticleManager();
    LODWORD(v8) = CDOTA_ParticleManager::CreateParticle(
                    ParticleManager,
                    "particles/items2_fx/magic_stick.vpcf",
                    1,
                    v8,
                    0,
                    0);
    v10 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControl(v10, v8, 1, COERCE_DOUBLE(flRatio), 0.0);
    v11 = GetParticleManager();
    CDOTA_ParticleManager::ReleaseParticleIndex(v11, v8);
    v12 = CDOTABaseAbility::GetCaster(this);
    DOTA_EmitSound(8, "DOTA_Item.MagicStick.Activate", v12);
    CDOTA_Item::SetCurrentCharges(this, 0);
    v13 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::InterruptChannel(v13);
  }
}


// CDOTA_Modifier_Item_MagicStick::~CDOTA_Modifier_Item_MagicStick  (line 72, @0x0000000002dbadd0, libserver.so)  // inlines: ~CDOTA_Buff_Item
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_MagicStick::~CDOTA_Modifier_Item_MagicStick(
        CDOTA_Modifier_Item_MagicStick *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_MagicStick::~CDOTA_Modifier_Item_MagicStick  (line 72, @0x0000000002dbadf0, libserver.so)  // inlines: ~CDOTA_Buff_Item, ~CDOTA_Modifier_Item_MagicStick
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_MagicStick::~CDOTA_Modifier_Item_MagicStick(
        CDOTA_Modifier_Item_MagicStick *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_MagicStick::OnCreated  (line 89, @0x0000000002db46e0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "charge_radius", "max_charges"
void __fastcall CDOTA_Modifier_Item_MagicStick::OnCreated(CDOTA_Modifier_Item_MagicStick *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->charge_radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "charge_radius", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->max_charges = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "max_charges", -1, 0);
      return;
    }
  }
  else
  {
    this->charge_radius = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  this->max_charges = 0;
}


// CDOTA_Modifier_Item_MagicStick::DeclareFunctions  (line 95, @0x0000000002dab3d0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Item_MagicStick::OnAbilityExecuted(CModifierParams const&)
void __fastcall CDOTA_Modifier_Item_MagicStick::DeclareFunctions(CDOTA_Modifier_Item_MagicStick *const this)
{
  this->m_Functions[128].__pfn = CDOTA_Modifier_Item_MagicStick::OnAbilityExecuted;
  this->m_Functions[128].__delta = 0;
}


// CDOTA_Modifier_Item_MagicStick::OnAbilityExecuted  (line 100, @0x0000000002dae660, libserver.so)  // inlines: CanBeSeenByTeam, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeamNumber, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, ToDOTABaseNPCHero, UnitNPC, operator CBaseEntity*, operator CDOTABaseAbility*, operator CEntityInstance*
// calls: CDOTA_Buff::GetCaster, CBaseModelEntity::CanBeSeenByTeam, CDOTA_Buff::GetParent, CBaseEntity::InSameTeam, CDOTA_BaseNPC::IsEntityInRange, CDOTA_Buff_Item::GetItem, CDOTA_Item::AddCharges
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Item_MagicStick::OnAbilityExecuted(
        CDOTA_Modifier_Item_MagicStick *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  unsigned __int64 m_Index_low; // rsi
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  CDOTA_BaseNPC *m_pInstance; // r12
  CEntityInstance *v9; // r14
  CEntityIdentity *v10; // rdx
  CEntityIdentity *v11; // rdx
  int nPlayerids_stick; // r15d
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_BaseNPC *v15; // rax
  CDOTA_BaseNPC *v16; // rax
  CDOTA_BaseNPC *v17; // r14
  CDOTA_BaseNPC *v18; // rax
  float v19; // xmm1_4
  CDOTA_Item *Item; // rax
  float charge_radius; // [rsp+Ch] [rbp-34h]

  m_Index = params->hunit.m_Index;
  if ( m_Index + 2 <= 1
    || (m_Index_low = LOWORD(params->hunit.m_Index),
        (v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(m_Index_low >> 9) & 0x3F]) == 0)
    || (v7 = &v6[m_Index_low & 0x1FF]) == 0
    || m_Index != v7->m_EHandle.m_Index
    || (m_pInstance = v7->m_pInstance, v7->m_pInstance == 0)
    || !m_pInstance->m_bIsDOTANPC )
  {
    m_pInstance = 0;
  }
  v9 = 0;
  if ( params->ability.m_Index + 2 > 1 )
  {
    v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->ability.m_Index) >> 9) & 0x3F];
    if ( v10 != 0 )
    {
      v11 = &v10[params->ability.m_Index & 0x1FF];
      if ( v11 != 0 && params->ability.m_Index == v11->m_EHandle.m_Index )
        v9 = v11->m_pInstance;
    }
  }
  nPlayerids_stick = params->nPlayerids_stick;
  if ( m_pInstance != 0 )
  {
    Caster = CDOTA_Buff::GetCaster(this);
    if ( CBaseModelEntity::CanBeSeenByTeam(m_pInstance, Caster->m_iTeamNum.m_Value)
      && v9 != 0
      && (*(v9->_vptr_IHandleEntity + 239))(v9) != 0 )
    {
      Parent = CDOTA_Buff::GetParent(this);
      if ( (*(Parent->_vptr_IHandleEntity + 408))(Parent) != 0 )
      {
        v15 = CDOTA_Buff::GetParent(this);
        if ( !CBaseEntity::InSameTeam(m_pInstance, v15)
          && CDOTA_Buff::GetParent(this) != 0
          && (CDOTA_Buff::GetParent(this)->m_iUnitType & 1) != 0
          && !CDOTA_Buff::GetParent(this)->m_bIsIllusion.m_Value )
        {
          v16 = CDOTA_Buff::GetParent(this);
          v17 = v16;
          if ( v16 != 0 && (v16->m_iUnitType & 1) != 0 && !_bittest(&nPlayerids_stick, v16[1].m_pfnBlocked.__delta) )
          {
            charge_radius = this->charge_radius;
            v18 = CDOTA_Buff::GetParent(this);
            if ( CDOTA_BaseNPC::IsEntityInRange(v18, m_pInstance, charge_radius, v19)
              && this->max_charges > CDOTA_Buff_Item::GetItem(this)->m_iCurrentCharges.m_Value )
            {
              Item = CDOTA_Buff_Item::GetItem(this);
              CDOTA_Item::AddCharges(Item, 1);
              params->nPlayerids_stick = nPlayerids_stick | (1 << LODWORD(v17[1].m_pfnBlocked.__delta));
            }
          }
        }
      }
    }
  }
  return 1uLL;
}


