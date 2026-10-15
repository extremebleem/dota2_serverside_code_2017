
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Item::CEntityInstanceEntityClass::DestructInstance  (line 22, @0x0000000002497310, libserver.so)  // inlines: Destruct<CDOTA_Item>
void __fastcall CDOTA_Item::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item::CEntityInstanceEntityClass::FreeInstance  (line 22, @0x0000000002497330, libserver.so)
void __fastcall CDOTA_Item::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item::CEntityInstanceEntityClass::CanAllocate  (line 22, @0x0000000002497350, libserver.so)
bool __fastcall CDOTA_Item::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item::CEntityInstanceEntityClass::AllocateInstance  (line 22, @0x0000000002499380, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 22, @0x0000000002499d70, libserver.so)  // inlines: Schema_StaticBinding
// calls: CDOTA_Item::Schema_VerifyBindingIsRegistered
const ISchemaBinding *__fastcall CDOTA_Item::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item::CEntityInstanceEntityClass *const this)
{
  CDOTA_Item::Schema_VerifyBindingIsRegistered();
  return CDOTA_Item::s_pSchemaBinding;
}


// CDOTA_Item::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 22, @0x0000000002499d90, libserver.so)
// calls: CDOTA_Item::CEntityInstanceEntityClass::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CDOTA_Item::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item::CEntityInstanceEntityClass *const this)
{
  CDOTA_Item::CEntityInstanceEntityClass::Schema_VerifyBindingIsRegistered();
  return CDOTA_Item::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item::CEntityInstanceEntityClass::ConstructInstance  (line 22, @0x0000000002499db0, libserver.so)  // inlines: Construct<CDOTA_Item>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
    CDOTA_Item::CDOTA_Item(p);
  return p;
}


// CDOTA_Item::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 22, @0x000000000249d860, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 22, @0x000000000249d880, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item::GetEntityClassInfo  (line 22, @0x00000000024a1ab0, libserver.so)  // inlines: GetEntityClassInfo
// calls: __cxa_guard_acquire, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_release
// callers: CDOTA_Item_BagOfGold::GetEntityClassInternal, CDOTA_Item_UpgradedBarricade::GetEntityClassInternal, CDOTA_Item_UpgradedMortar::GetEntityClassInternal, CDOTA_Item_GreaterClarity::GetEntityClassInternal, CDOTA_Item_Book::GetEntityClassInternal, CDOTA_Item_Tombstone::GetEntityClassInternal, CDOTA_Item_DataDriven::GetEntityClassInternal, CDOTA_Item_Lua::GetEntityClassInternal, CDOTA_Item_Nian_Flag_Trap::GetEntityClassInternal, CDOTA_Ability_Firework_Mine::GetEntityClassInternal, CDOTA_Item_ForceBoots::GetEntityClassInternal, CDOTA_Item_JumpBoots::GetEntityClassInternal (252 total)
// strings: "dota_item", "CDOTA_Item", "dota_base_ability", "CDOTABaseAbility", "CBaseEntity", "CGameEntity"
// globals: `guard variable for'CDOTA_Item::GetEntityClassInfo(void)::g_EntityCDOTA_ItemClassInfo, CDOTA_Item::GetEntityClassInfo(void)::g_EntityCDOTA_ItemClassInfo, `guard variable for'CDOTABaseAbility::GetEntityClassInfo(void)::g_EntityCDOTABaseAbilityClassInfo, CDOTABaseAbility::GetEntityClassInfo(void)::g_EntityCDOTABaseAbilityClassInfo, `guard variable for'CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo, CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo, `guard variable for'CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo, CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo
CEntityClassInfo *__cdecl CDOTA_Item::GetEntityClassInfo()
{
  if ( `guard variable for'CDOTA_Item::GetEntityClassInfo(void)::g_EntityCDOTA_ItemClassInfo != 0 )
    return &CDOTA_Item::GetEntityClassInfo(void)::g_EntityCDOTA_ItemClassInfo;
  if ( __cxa_guard_acquire(&`guard variable for'CDOTA_Item::GetEntityClassInfo(void)::g_EntityCDOTA_ItemClassInfo) == 0 )
    return &CDOTA_Item::GetEntityClassInfo(void)::g_EntityCDOTA_ItemClassInfo;
  if ( `guard variable for'CDOTABaseAbility::GetEntityClassInfo(void)::g_EntityCDOTABaseAbilityClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTABaseAbility::GetEntityClassInfo(void)::g_EntityCDOTABaseAbilityClassInfo) != 0 )
  {
    if ( `guard variable for'CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo == 0
      && __cxa_guard_acquire(&`guard variable for'CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo) != 0 )
    {
      if ( `guard variable for'CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo == 0
        && __cxa_guard_acquire(&`guard variable for'CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo) != 0 )
      {
        CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
          &CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo,
          "CGameEntity",
          0,
          0,
          &g_EntityRootClassInfo);
        __cxa_guard_release(&`guard variable for'CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo);
      }
      CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
        &CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo,
        "CBaseEntity",
        0,
        0,
        &CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo);
      __cxa_guard_release(&`guard variable for'CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo);
    }
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTABaseAbility::GetEntityClassInfo(void)::g_EntityCDOTABaseAbilityClassInfo,
      "CDOTABaseAbility",
      "dota_base_ability",
      0,
      &CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTABaseAbility::GetEntityClassInfo(void)::g_EntityCDOTABaseAbilityClassInfo);
  }
  CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
    &CDOTA_Item::GetEntityClassInfo(void)::g_EntityCDOTA_ItemClassInfo,
    "CDOTA_Item",
    "dota_item",
    0,
    &CDOTABaseAbility::GetEntityClassInfo(void)::g_EntityCDOTABaseAbilityClassInfo);
  __cxa_guard_release(&`guard variable for'CDOTA_Item::GetEntityClassInfo(void)::g_EntityCDOTA_ItemClassInfo);
  return &CDOTA_Item::GetEntityClassInfo(void)::g_EntityCDOTA_ItemClassInfo;
}


// CDOTA_Item::GetEntityClass  (line 22, @0x00000000025c4e30, libserver.so)
CEntityClass *__cdecl CDOTA_Item::GetEntityClass()
{
  return g_pEntityCDOTA_ItemClass;
}


// CDOTA_Item::Schema_DynamicBinding  (line 22, @0x00000000025c4e40, libserver.so)
// globals: CDOTA_Item::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item::Schema_DynamicBinding(const CDOTA_Item *const this)
{
  return CDOTA_Item::s_pSchemaBinding;
}


// CDOTA_Item::GetEntityClassInternal  (line 22, @0x00000000025d5c70, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, InitScriptDesc, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, GetScriptDesc<CDOTA_Item>, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CBaseEntity::GetEntityClassInfo, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_dota_04.cpp
// strings: "dota_item", "CDOTA_Item", "dota_base_ability", "CDOTABaseAbility"
// globals: `guard variable for'CDOTA_Item::GetEntityClassInternal(void)::g_EntityCDOTA_ItemClass, CDOTA_Item::GetEntityClassInternal(void)::g_EntityCDOTA_ItemClass, __dso_handle, CDOTA_Item::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item::GetEntityClassInfo(void)::g_EntityCDOTA_ItemClassInfo, CDOTA_Item::GetEntityClassInfo(void)::g_EntityCDOTA_ItemClassInfo, `guard variable for'CDOTABaseAbility::GetEntityClassInfo(void)::g_EntityCDOTABaseAbilityClassInfo, CDOTABaseAbility::GetEntityClassInfo(void)::g_EntityCDOTABaseAbilityClassInfo
CEntityClass *__cdecl CDOTA_Item::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item::GetEntityClassInternal(void)::g_EntityCDOTA_ItemClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item::GetEntityClassInternal(void)::g_EntityCDOTA_ItemClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item::GetEntityClassInternal(void)::g_EntityCDOTA_ItemClass);
    CDOTA_Item::GetEntityClassInternal(void)::g_EntityCDOTA_ItemClass._vptr_CEntityClass = off_40DCB50;
    __cxa_guard_release(&`guard variable for'CDOTA_Item::GetEntityClassInternal(void)::g_EntityCDOTA_ItemClass);
    __cxa_atexit(
      CDOTA_Item::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item::GetEntityClassInternal(void)::g_EntityCDOTA_ItemClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_ItemClass != 0 )
    return &CDOTA_Item::GetEntityClassInternal(void)::g_EntityCDOTA_ItemClass;
  if ( `guard variable for'CDOTA_Item::GetEntityClassInfo(void)::g_EntityCDOTA_ItemClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item::GetEntityClassInfo(void)::g_EntityCDOTA_ItemClassInfo) != 0 )
  {
    if ( `guard variable for'CDOTABaseAbility::GetEntityClassInfo(void)::g_EntityCDOTABaseAbilityClassInfo == 0
      && __cxa_guard_acquire(&`guard variable for'CDOTABaseAbility::GetEntityClassInfo(void)::g_EntityCDOTABaseAbilityClassInfo) != 0 )
    {
      EntityClassInfo = CBaseEntity::GetEntityClassInfo();
      CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
        &CDOTABaseAbility::GetEntityClassInfo(void)::g_EntityCDOTABaseAbilityClassInfo,
        "CDOTABaseAbility",
        "dota_base_ability",
        0,
        EntityClassInfo);
      __cxa_guard_release(&`guard variable for'CDOTABaseAbility::GetEntityClassInfo(void)::g_EntityCDOTABaseAbilityClassInfo);
    }
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item::GetEntityClassInfo(void)::g_EntityCDOTA_ItemClassInfo,
      "CDOTA_Item",
      "dota_item",
      0,
      &CDOTABaseAbility::GetEntityClassInfo(void)::g_EntityCDOTABaseAbilityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item::GetEntityClassInfo(void)::g_EntityCDOTA_ItemClassInfo);
  }
  CDOTA_Item::GetEntityClassInternal(void)::g_EntityCDOTA_ItemClass.m_pClassInfo = &CDOTA_Item::GetEntityClassInfo(void)::g_EntityCDOTA_ItemClassInfo;
  CDOTA_Item::GetEntityClassInternal(void)::g_EntityCDOTA_ItemClass.m_pBaseClassInfo = CDOTA_Item::GetEntityClassInfo(void)::g_EntityCDOTA_ItemClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_ItemClass = &CDOTA_Item::GetEntityClassInternal(void)::g_EntityCDOTA_ItemClass;
  CDOTA_Item::GetEntityClassInfo(void)::g_EntityCDOTA_ItemClassInfo.m_pClass = &CDOTA_Item::GetEntityClassInternal(void)::g_EntityCDOTA_ItemClass;
  CDOTA_Item::GetEntityClassInternal(void)::g_EntityCDOTA_ItemClass.m_pScriptClassDesc = GetScriptDesc<CDOTA_Item>(0);
  g_pEntityCDOTA_ItemClass->m_pComponentOverrides = 0;
  return &CDOTA_Item::GetEntityClassInternal(void)::g_EntityCDOTA_ItemClass;
}


// CDOTA_Item::GetCastAnimation  (line 34, @0x0000000002497360, libserver.so)
Activity __fastcall CDOTA_Item::GetCastAnimation(CDOTA_Item *const this)
{
  return this->m_CastAnimation;
}


// CDOTA_Item::GetBackswingTime  (line 35, @0x0000000002497370, libserver.so)
float __fastcall CDOTA_Item::GetBackswingTime(CDOTA_Item *const this)
{
  return 0.0;
}


// CDOTA_Item::OnDisassemble  (line 40, @0x0000000002497380, libserver.so)
void __fastcall CDOTA_Item::OnDisassemble(CDOTA_Item *const this)
{
  ;
}


// CDOTA_Item::ProcsMagicStick  (line 44, @0x0000000002497390, libserver.so)
bool __fastcall CDOTA_Item::ProcsMagicStick(CDOTA_Item *const this)
{
  return 0;
}


// CDOTA_Item::OnRune  (line 47, @0x00000000024973a0, libserver.so)
bool __fastcall CDOTA_Item::OnRune(CDOTA_Item *const this, int iRuneType)
{
  return 0;
}


// CDOTA_Item::ProRatesChargesWhenSelling  (line 49, @0x00000000024973b0, libserver.so)
bool __fastcall CDOTA_Item::ProRatesChargesWhenSelling(CDOTA_Item *const this)
{
  return 1;
}


// CDOTA_Item::ParentGainedModifier  (line 51, @0x00000000024973c0, libserver.so)
void __fastcall CDOTA_Item::ParentGainedModifier(CDOTA_Item *const this, CDOTA_Buff *pBuff)
{
  ;
}


// CDOTA_Item::SetPurchaseTime  (line 53, @0x00000000025c9410, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<float>
void __fastcall CDOTA_Item::SetPurchaseTime(CDOTA_Item *const this, double a2, float flTime)
{
  float flTimea; // [rsp+Ch] [rbp-14h]

  if ( *&a2 != this->m_flPurchaseTime.m_Value )
  {
    flTimea = *&a2;
    (*(this->_vptr_IHandleEntity + 22))(this, 964, 0xFFFFFFFFLL, 0xFFFFFFFFLL, a2, flTime);
    this->m_flPurchaseTime.m_Value = flTimea;
  }
}


// CDOTA_Item::GetPurchaseTime  (line 54, @0x00000000025c4e50, libserver.so)
float __fastcall CDOTA_Item::GetPurchaseTime(CDOTA_Item *const this)
{
  return this->m_flPurchaseTime.m_Value;
}


// CDOTA_Item::SetHasMixedOwnership  (line 69, @0x0000000002e25490, libserver.so)  // inlines: NetworkStateChanged, Set, SetSellable, operator=<bool>
// callers: CDOTA_Item_Ward_Dispenser::OnSpellStart
void __fastcall CDOTA_Item::SetHasMixedOwnership(CDOTA_Item *const this, bool bHasMixedOwnership)
{
  this->m_bHasMixedOwnership = bHasMixedOwnership;
  if ( bHasMixedOwnership && this->m_bSellable.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 930, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bSellable.m_Value = 0;
  }
}


// CDOTA_Item::GetInitialCharges  (line 74, @0x00000000025c4e60, libserver.so)
int __fastcall CDOTA_Item::GetInitialCharges(CDOTA_Item *const this)
{
  return this->m_iInitialCharges.m_Value;
}


// CDOTA_Item::GetCurrentCharges  (line 75, @0x00000000025c4e70, libserver.so)
int __fastcall CDOTA_Item::GetCurrentCharges(CDOTA_Item *const this)
{
  return this->m_iCurrentCharges.m_Value;
}


// CDOTA_Item::OnChargeCountChanged  (line 85, @0x00000000024973d0, libserver.so)
void __fastcall CDOTA_Item::OnChargeCountChanged(CDOTA_Item *const this)
{
  ;
}


// CDOTA_Item::IsItem  (line 97, @0x00000000024973e0, libserver.so)
bool __fastcall CDOTA_Item::IsItem(const CDOTA_Item *const this)
{
  return 1;
}


// CDOTA_Item::IsPermanent  (line 99, @0x00000000024973f0, libserver.so)
bool __fastcall CDOTA_Item::IsPermanent(CDOTA_Item *const this)
{
  return this->m_bPermanent.m_Value;
}


// CDOTA_Item::IsStackable  (line 100, @0x0000000002497400, libserver.so)
bool __fastcall CDOTA_Item::IsStackable(CDOTA_Item *const this)
{
  return this->m_bStackable.m_Value;
}


// CDOTA_Item::IsRecipe  (line 101, @0x0000000002497410, libserver.so)
bool __fastcall CDOTA_Item::IsRecipe(const CDOTA_Item *const this)
{
  return this->m_bRecipe.m_Value;
}


// CDOTA_Item::IsDroppable  (line 103, @0x0000000002497420, libserver.so)
bool __fastcall CDOTA_Item::IsDroppable(CDOTA_Item *const this)
{
  return this->m_bDroppable.m_Value;
}


// CDOTA_Item::IsPurchasable  (line 104, @0x0000000002497430, libserver.so)
bool __fastcall CDOTA_Item::IsPurchasable(CDOTA_Item *const this)
{
  return this->m_bPurchasable.m_Value;
}


// CDOTA_Item::IsSellable  (line 105, @0x0000000002497440, libserver.so)
bool __fastcall CDOTA_Item::IsSellable(CDOTA_Item *const this)
{
  return this->m_bSellable.m_Value;
}


// CDOTA_Item::IsKillable  (line 106, @0x0000000002497450, libserver.so)
bool __fastcall CDOTA_Item::IsKillable(CDOTA_Item *const this)
{
  return this->m_bKillable.m_Value;
}


// CDOTA_Item::IsAlertableItem  (line 108, @0x0000000002497460, libserver.so)
bool __fastcall CDOTA_Item::IsAlertableItem(CDOTA_Item *const this)
{
  return this->m_bAlertable.m_Value;
}


// CDOTA_Item::RequiresCharges  (line 109, @0x0000000002497470, libserver.so)
bool __fastcall CDOTA_Item::RequiresCharges(CDOTA_Item *const this)
{
  return this->m_bRequiresCharges.m_Value;
}


// CDOTA_Item::GetShareability  (line 110, @0x0000000002497480, libserver.so)
int __fastcall CDOTA_Item::GetShareability(CDOTA_Item *const this)
{
  return this->m_iSharability.m_Value;
}


// CDOTA_Item::IsTempestDoubleClonable  (line 111, @0x0000000002497490, libserver.so)
bool __fastcall CDOTA_Item::IsTempestDoubleClonable(CDOTA_Item *const this)
{
  return this->m_bIsTempestDoubleClonable;
}


// CDOTA_Item::IsCastOnPickup  (line 114, @0x00000000024974a0, libserver.so)
bool __fastcall CDOTA_Item::IsCastOnPickup(CDOTA_Item *const this)
{
  return this->m_bCastOnPickup.m_Value;
}


// CDOTA_Item::SetKillable  (line 117, @0x000000000249bce0, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<bool>
void __fastcall CDOTA_Item::SetKillable(CDOTA_Item *const this, bool bKillable)
{
  if ( this->m_bKillable.m_Value != bKillable )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 932, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bKillable.m_Value = bKillable;
  }
}


// CDOTA_Item::StacksWithOtherOwners  (line 119, @0x00000000025c4e80, libserver.so)
bool __fastcall CDOTA_Item::StacksWithOtherOwners(CDOTA_Item *const this)
{
  bool result; // al

  result = 0;
  if ( this->m_iSharability.m_Value == 0 )
    return this->m_bStackWithOtherOwners;
  return result;
}


// CDOTA_Item::SetStacksWithOtherOwners  (line 120, @0x00000000025c4ea0, libserver.so)
void __fastcall CDOTA_Item::SetStacksWithOtherOwners(CDOTA_Item *const this, bool bStacksWithOtherOwners)
{
  this->m_bStackWithOtherOwners = bStacksWithOtherOwners;
}


// CDOTA_Item::GetCost  (line 122, @0x0000000002499d30, libserver.so)  // inlines: GetAbilityData
// calls: CDOTABaseAbility::LoadAbilityData
int __fastcall CDOTA_Item::GetCost(CDOTA_Item *const this)
{
  DOTAAbilityData_t *m_pAbilityData; // rax

  m_pAbilityData = this->m_pAbilityData;
  if ( m_pAbilityData != 0 )
    return m_pAbilityData->m_iItemCost;
  CDOTABaseAbility::LoadAbilityData(this, 0);
  return this->m_pAbilityData->m_iItemCost;
}


// CDOTA_Item::GetItemState  (line 134, @0x00000000025c4eb0, libserver.so)
int __fastcall CDOTA_Item::GetItemState(CDOTA_Item *const this)
{
  return this->m_iState;
}


// CDOTA_Item::SetItemState  (line 135, @0x00000000025c4ec0, libserver.so)
void __fastcall CDOTA_Item::SetItemState(CDOTA_Item *const this, int iState)
{
  this->m_iState = iState;
}


// CDOTA_Item::SetSellable  (line 174, @0x0000000002e254e0, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<bool>
// callers: CDOTA_Item_ObserverWard::OnSpellStart, CDOTA_Item_SentryWard::OnSpellStart
void __fastcall CDOTA_Item::SetSellable(CDOTA_Item *const this, bool bSellable)
{
  if ( this->m_bSellable.m_Value != bSellable )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 930, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bSellable.m_Value = bSellable;
  }
}


// CDOTA_Item::IsAllowedInBackpack  (line 194, @0x000000000249b170, libserver.so)  // inlines: GetAbilityData
// calls: CDOTABaseAbility::LoadAbilityData
bool __fastcall CDOTA_Item::IsAllowedInBackpack(CDOTA_Item *const this)
{
  char v2; // al
  bool v3; // dl
  DOTAAbilityData_t *m_pAbilityData; // rax

  v2 = (*(this->_vptr_IHandleEntity + 349))(this);
  v3 = 0;
  if ( v2 != 0 )
  {
    m_pAbilityData = this->m_pAbilityData;
    if ( m_pAbilityData == 0 )
    {
      CDOTABaseAbility::LoadAbilityData(this, 0);
      m_pAbilityData = this->m_pAbilityData;
    }
    return *(m_pAbilityData + 378) & 1;
  }
  return v3;
}


// CDOTA_Item::SetItemPendingEnable  (line 196, @0x00000000027d5220, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<bool>
// callers: CDOTA_UnitInventory::SwapItems
void __fastcall CDOTA_Item::SetItemPendingEnable(CDOTA_Item *const this, bool bEnabled)
{
  if ( this->m_bItemEnabled.m_Value != bEnabled )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 946, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bItemEnabled.m_Value = bEnabled;
  }
}


// CDOTA_Item::SetItemEnableTime  (line 198, @0x00000000027d5260, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<float>
// callers: CDOTA_UnitInventory::SwapItems
void __fastcall CDOTA_Item::SetItemEnableTime(CDOTA_Item *const this, double a2, float flTime)
{
  float flTimea; // [rsp+Ch] [rbp-14h]

  if ( *&a2 != this->m_flEnableTime.m_Value )
  {
    flTimea = *&a2;
    (*(this->_vptr_IHandleEntity + 22))(this, 948, 0xFFFFFFFFLL, 0xFFFFFFFFLL, a2, flTime);
    this->m_flEnableTime.m_Value = flTimea;
  }
}


// CDOTA_Item_Physical::~CDOTA_Item_Physical  (line 316, @0x00000000025c7720, libserver.so)  // inlines: ~CBaseAnimating, ~IPositionWatcher, ~IWatcherCallback
// calls: CHitboxComponent::~CHitboxComponent, CBaseModelEntity::~CBaseModelEntity
void __fastcall CDOTA_Item_Physical::~CDOTA_Item_Physical(CDOTA_Item_Physical *const this)
{
  CHitboxComponent::Storage_t *p_m_CHitboxComponent; // rdi

  p_m_CHitboxComponent = &this->m_CHitboxComponent;
  *&p_m_CHitboxComponent[4].m_nHitboxHandle = off_4074030;
  *&p_m_CHitboxComponent[-72].m_nHitboxHandle = &off_3FED330;
  CHitboxComponent::~CHitboxComponent(p_m_CHitboxComponent);
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CDOTA_Item_Physical::~CDOTA_Item_Physical  (line 316, @0x00000000025c9670, libserver.so)  // inlines: ~CBaseAnimating, ~CDOTA_Item_Physical, ~IPositionWatcher, ~IWatcherCallback
// calls: CHitboxComponent::~CHitboxComponent, CBaseModelEntity::~CBaseModelEntity, CBaseEntity::operator delete
void __fastcall CDOTA_Item_Physical::~CDOTA_Item_Physical(CDOTA_Item_Physical *const this)
{
  CHitboxComponent::Storage_t *p_m_CHitboxComponent; // rdi

  p_m_CHitboxComponent = &this->m_CHitboxComponent;
  *&p_m_CHitboxComponent[4].m_nHitboxHandle = off_4074030;
  *&p_m_CHitboxComponent[-72].m_nHitboxHandle = &off_3FED330;
  CHitboxComponent::~CHitboxComponent(p_m_CHitboxComponent);
  CBaseModelEntity::~CBaseModelEntity(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_Physical::Schema_DynamicBinding  (line 318, @0x00000000025c4ed0, libserver.so)
// globals: CDOTA_Item_Physical::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Physical::Schema_DynamicBinding(
        const CDOTA_Item_Physical *const this)
{
  return CDOTA_Item_Physical::s_pSchemaBinding;
}


// CDOTA_Item_Physical::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 318, @0x00000000025c4ee0, libserver.so)
// globals: CDOTA_Item_Physical::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Physical::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_Physical::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Physical::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_Physical::CEntityInstanceEntityClass::DestructInstance  (line 318, @0x00000000025c4ef0, libserver.so)  // inlines: Destruct<CDOTA_Item_Physical>
void __fastcall CDOTA_Item_Physical::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_Physical::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_Physical::CEntityInstanceEntityClass::FreeInstance  (line 318, @0x00000000025c4f10, libserver.so)
void __fastcall CDOTA_Item_Physical::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_Physical::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_Physical::CEntityInstanceEntityClass::CanAllocate  (line 318, @0x00000000025c4f30, libserver.so)
bool __fastcall CDOTA_Item_Physical::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_Physical::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_Physical::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 318, @0x00000000025c4f40, libserver.so)
// globals: CDOTA_Item_Physical::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_Physical::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_Physical::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Physical::s_pSchemaBinding;
}


// CDOTA_Item_Physical::CEntityInstanceEntityClass::AllocateInstance  (line 318, @0x00000000025c7170, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_Physical::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_Physical::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1240);
  memset(v1, 0, 0x4D8u);
  return v1;
}


// CDOTA_Item_Physical::CEntityInstanceEntityClass::ConstructInstance  (line 318, @0x00000000025c95d0, libserver.so)  // inlines: CDOTA_Item_Physical, CEntityHandle, CHandle, CNetworkVarBase, Construct<CDOTA_Item_Physical>
// calls: CBaseAnimating::CBaseAnimating
CEntityInstance *__fastcall CDOTA_Item_Physical::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_Physical::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseAnimating::CBaseAnimating(p);
    *(p + 308) = -1;
    *p = &off_410BEB0;
    *(p + 152) = off_410C6A8;
  }
  return p;
}


// CDOTA_Item_Physical::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 318, @0x00000000025cb1a0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_Physical::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Physical::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_Physical::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 318, @0x00000000025cb1c0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_Physical::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Physical::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_Physical::GetEntityClassInfo  (line 318, @0x00000000025cf040, libserver.so)  // inlines: GetEntityClassInfo
// calls: __cxa_guard_acquire, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_release, CBaseEntity::GetEntityClassInfo
// callers: CDOTA_Item_Tombstone_Drop::GetEntityClassInternal
// strings: "dota_item_drop", "CDOTA_Item_Physical", "baseanimating", "CBaseAnimating", "basemodelentity", "CBaseModelEntity"
// globals: `guard variable for'CDOTA_Item_Physical::GetEntityClassInfo(void)::g_EntityCDOTA_Item_PhysicalClassInfo, CDOTA_Item_Physical::GetEntityClassInfo(void)::g_EntityCDOTA_Item_PhysicalClassInfo, `guard variable for'CBaseAnimating::GetEntityClassInfo(void)::g_EntityCBaseAnimatingClassInfo, CBaseAnimating::GetEntityClassInfo(void)::g_EntityCBaseAnimatingClassInfo, `guard variable for'CBaseModelEntity::GetEntityClassInfo(void)::g_EntityCBaseModelEntityClassInfo, CBaseModelEntity::GetEntityClassInfo(void)::g_EntityCBaseModelEntityClassInfo
CEntityClassInfo *__cdecl CDOTA_Item_Physical::GetEntityClassInfo()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Physical::GetEntityClassInfo(void)::g_EntityCDOTA_Item_PhysicalClassInfo != 0 )
    return &CDOTA_Item_Physical::GetEntityClassInfo(void)::g_EntityCDOTA_Item_PhysicalClassInfo;
  if ( __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Physical::GetEntityClassInfo(void)::g_EntityCDOTA_Item_PhysicalClassInfo) == 0 )
    return &CDOTA_Item_Physical::GetEntityClassInfo(void)::g_EntityCDOTA_Item_PhysicalClassInfo;
  if ( `guard variable for'CBaseAnimating::GetEntityClassInfo(void)::g_EntityCBaseAnimatingClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CBaseAnimating::GetEntityClassInfo(void)::g_EntityCBaseAnimatingClassInfo) != 0 )
  {
    if ( `guard variable for'CBaseModelEntity::GetEntityClassInfo(void)::g_EntityCBaseModelEntityClassInfo == 0
      && __cxa_guard_acquire(&`guard variable for'CBaseModelEntity::GetEntityClassInfo(void)::g_EntityCBaseModelEntityClassInfo) != 0 )
    {
      EntityClassInfo = CBaseEntity::GetEntityClassInfo();
      CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
        &CBaseModelEntity::GetEntityClassInfo(void)::g_EntityCBaseModelEntityClassInfo,
        "CBaseModelEntity",
        "basemodelentity",
        0,
        EntityClassInfo);
      __cxa_guard_release(&`guard variable for'CBaseModelEntity::GetEntityClassInfo(void)::g_EntityCBaseModelEntityClassInfo);
    }
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CBaseAnimating::GetEntityClassInfo(void)::g_EntityCBaseAnimatingClassInfo,
      "CBaseAnimating",
      "baseanimating",
      0,
      &CBaseModelEntity::GetEntityClassInfo(void)::g_EntityCBaseModelEntityClassInfo);
    __cxa_guard_release(&`guard variable for'CBaseAnimating::GetEntityClassInfo(void)::g_EntityCBaseAnimatingClassInfo);
  }
  CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
    &CDOTA_Item_Physical::GetEntityClassInfo(void)::g_EntityCDOTA_Item_PhysicalClassInfo,
    "CDOTA_Item_Physical",
    "dota_item_drop",
    0,
    &CBaseAnimating::GetEntityClassInfo(void)::g_EntityCBaseAnimatingClassInfo);
  __cxa_guard_release(&`guard variable for'CDOTA_Item_Physical::GetEntityClassInfo(void)::g_EntityCDOTA_Item_PhysicalClassInfo);
  return &CDOTA_Item_Physical::GetEntityClassInfo(void)::g_EntityCDOTA_Item_PhysicalClassInfo;
}


// CDOTA_Item_Physical::GetEntityClassInternal  (line 318, @0x00000000025d6490, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, InitScriptDesc, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, GetScriptDesc<CDOTA_Item_Physical>, CBaseAnimating::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_dota_04.cpp
// strings: "dota_item_drop", "CDOTA_Item_Physical"
// globals: `guard variable for'CDOTA_Item_Physical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_PhysicalClass, CDOTA_Item_Physical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_PhysicalClass, __dso_handle, CDOTA_Item_Physical::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_Physical::GetEntityClassInfo(void)::g_EntityCDOTA_Item_PhysicalClassInfo, CDOTA_Item_Physical::GetEntityClassInfo(void)::g_EntityCDOTA_Item_PhysicalClassInfo
CEntityClass *__cdecl CDOTA_Item_Physical::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Physical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_PhysicalClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Physical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_PhysicalClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_Physical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_PhysicalClass);
    CDOTA_Item_Physical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_PhysicalClass._vptr_CEntityClass = off_4100D70;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Physical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_PhysicalClass);
    __cxa_atexit(
      CDOTA_Item_Physical::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_Physical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_PhysicalClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_PhysicalClass != 0 )
    return &CDOTA_Item_Physical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_PhysicalClass;
  if ( `guard variable for'CDOTA_Item_Physical::GetEntityClassInfo(void)::g_EntityCDOTA_Item_PhysicalClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Physical::GetEntityClassInfo(void)::g_EntityCDOTA_Item_PhysicalClassInfo) != 0 )
  {
    EntityClassInfo = CBaseAnimating::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_Physical::GetEntityClassInfo(void)::g_EntityCDOTA_Item_PhysicalClassInfo,
      "CDOTA_Item_Physical",
      "dota_item_drop",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Physical::GetEntityClassInfo(void)::g_EntityCDOTA_Item_PhysicalClassInfo);
  }
  CDOTA_Item_Physical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_PhysicalClass.m_pClassInfo = &CDOTA_Item_Physical::GetEntityClassInfo(void)::g_EntityCDOTA_Item_PhysicalClassInfo;
  CDOTA_Item_Physical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_PhysicalClass.m_pBaseClassInfo = CDOTA_Item_Physical::GetEntityClassInfo(void)::g_EntityCDOTA_Item_PhysicalClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_PhysicalClass = &CDOTA_Item_Physical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_PhysicalClass;
  CDOTA_Item_Physical::GetEntityClassInfo(void)::g_EntityCDOTA_Item_PhysicalClassInfo.m_pClass = &CDOTA_Item_Physical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_PhysicalClass;
  CDOTA_Item_Physical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_PhysicalClass.m_pScriptClassDesc = GetScriptDesc<CDOTA_Item_Physical>(0);
  g_pEntityCDOTA_Item_PhysicalClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_Physical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_PhysicalClass;
}


// CDOTA_Item_Physical::UpdateOnRemove  (line 325, @0x00000000025d0ca0, libserver.so)  // inlines: CEntityHandle, CHandle, DOTAGameRules, Element, FastRemove, Find, FindAndFastRemove, Get, GetContainedItem, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, IndexToIdentity, IsValid, LookupEntity, RemoveDroppedItem, Set, memcpy, operator CDOTA_Item*, operator CEntityInstance*, operator==<CBaseEntity>, operator[]
// calls: CBaseAnimating::UpdateOnRemove, CEntityHandle::operator CEntityInstance*, CDOTA_Item::ClearContainer
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Item_Physical::UpdateOnRemove(CDOTA_Item_Physical *const this)
{
  CDOTA_Item *v2; // rax
  CEntityIdentity *m_pEntity; // rdx
  __int16 v4; // cx
  CGameRules *v5; // r15
  int v6; // r10d
  int v7; // edx
  _WORD *i; // rax
  CEntityInstance *v9; // rsi
  CEntityIdentity *v10; // rcx
  CEntityIdentity *v11; // rcx
  CEntityInstance *m_pInstance; // rdi
  CEntityIdentity *v13; // rsi
  CEntityIdentity *v14; // rsi
  int v15; // r10d
  int v16; // [rsp+10h] [rbp-40h]

  CBaseAnimating::UpdateOnRemove(this);
  v2 = CEntityHandle::operator CEntityInstance *(&this->m_hItem.m_Value);
  if ( v2 != 0 )
    CDOTA_Item::ClearContainer(v2, this);
  v16 = -1;
  if ( this != 0 )
  {
    m_pEntity = this->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v4 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v4 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      v16 = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v4 & 0x7FFF;
    }
  }
  v5 = g_pGameRules;
  v6 = *&g_pGameRules[55].m_szQuestName[80];
  if ( v6 > 0 )
  {
    v7 = 0;
    for ( i = *&g_pGameRules[55].m_szQuestName[88]; ; i += 2 )
    {
      m_pInstance = 0;
      if ( (*i + 2) > 1 )
      {
        v13 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(*i >> 9) & 0x3F];
        if ( v13 != 0 )
        {
          v14 = &v13[*i & 0x1FF];
          if ( v14 != 0 && *i == v14->m_EHandle.m_Index )
            m_pInstance = v14->m_pInstance;
        }
      }
      v9 = 0;
      if ( (v16 + 2) > 1 )
      {
        v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v16 & 0x7FFF) >> 9];
        if ( v10 != 0 )
        {
          v11 = &v10[v16 & 0x1FF];
          if ( v11 != 0 && v11->m_EHandle.m_Index == v16 )
            v9 = v11->m_pInstance;
        }
      }
      if ( m_pInstance == v9 )
        break;
      if ( ++v7 == v6 )
        return;
    }
    v15 = v6 - 1;
    if ( v7 != v15 )
    {
      *i = *(*&g_pGameRules[55].m_szQuestName[88] + 4LL * v15);
      v15 = *&v5[55].m_szQuestName[80] - 1;
    }
    *&v5[55].m_szQuestName[80] = v15;
  }
}


// CDOTA_Item_Physical::OnPickup  (line 340, @0x00000000025c4f50, libserver.so)
void __fastcall CDOTA_Item_Physical::OnPickup(CDOTA_Item_Physical *const this)
{
  ;
}


// CDOTA_Item_Physical::Script_SetContainedItem  (line 343, @0x00000000025d0eb0, libserver.so)  // inlines: HScriptToEntity<CBaseEntity>, ToDOTAItem, ToEnt
// calls: GetScriptDesc<CEntityInstance>, __dynamic_cast, CDOTA_Item_Physical::SetContainedItem
void __fastcall CDOTA_Item_Physical::Script_SetContainedItem(CDOTA_Item_Physical *const this, HSCRIPT hItem)
{
  __int64 (__fastcall *v4)(IScriptVM *, HSCRIPT, ScriptClassDesc_t *); // r14
  ScriptClassDesc_t *Script; // rax
  const void *v6; // rax
  CDOTA_Item *v7; // rax
  CDOTA_Item *v8; // rbx

  if ( hItem != 0
    && (v4 = *(*g_pScriptVM + 208LL),
        Script = GetScriptDesc<CEntityInstance>(0),
        (v6 = v4(g_pScriptVM, hItem, Script)) != 0)
    && (v7 = __dynamic_cast(v6, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTABaseAbility, 0), v8 = v7, v7 != 0)
    && (*(v7->_vptr_IHandleEntity + 223))(v7) != 0 )
  {
    CDOTA_Item_Physical::SetContainedItem(this, v8);
  }
  else
  {
    CDOTA_Item_Physical::SetContainedItem(this, 0);
  }
}


// CDOTA_Item_Physical::Script_GetContainedItem  (line 345, @0x00000000025cb830, libserver.so)  // inlines: EntityToHScript, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetPublicScriptScope, IndexToIdentity, IsValid, LookupEntity, ToHScript, operator CEntityInstance*
// calls: CEntityInstance::CreatePublicScriptScope
// globals: CEntityHandle::gm_pEntityList
HSCRIPT __fastcall CDOTA_Item_Physical::Script_GetContainedItem(CDOTA_Item_Physical *const this)
{
  uint32 m_Index; // edx
  HSCRIPT result; // rax
  CEntityIdentity *v3; // rcx
  CEntityIdentity *v4; // rcx
  CEntityInstance *m_pInstance; // rbx

  m_Index = this->m_hItem.m_Value.m_Index;
  result = 0;
  if ( m_Index + 2 > 1 )
  {
    v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hItem.m_Value.m_Index) >> 9) & 0x3F];
    if ( v3 != 0 )
    {
      v4 = &v3[this->m_hItem.m_Value.m_Index & 0x1FF];
      if ( v4 != 0 && m_Index == v4->m_EHandle.m_Index )
      {
        m_pInstance = v4->m_pInstance;
        if ( v4->m_pInstance != 0 )
        {
          result = m_pInstance->m_pEntity->m_hPublicScope.m_hScope;
          if ( result == 0 )
          {
            CEntityInstance::CreatePublicScriptScope(v4->m_pInstance, 0);
            return m_pInstance->m_pEntity->m_hPublicScope.m_hScope;
          }
        }
      }
    }
  }
  return result;
}


// CDOTA_Item_Physical::GetCreationTime  (line 347, @0x00000000025c4f60, libserver.so)
float __fastcall CDOTA_Item_Physical::GetCreationTime(CDOTA_Item_Physical *const this)
{
  return this->m_fCreationTime;
}


// CDOTA_Item_Physical::IsPartOfFOWSystem  (line 349, @0x00000000025c4f70, libserver.so)
bool __fastcall CDOTA_Item_Physical::IsPartOfFOWSystem(CDOTA_Item_Physical *const this)
{
  return 1;
}


// CDOTA_Item_Physical::NotifyPositionChanged  (line 352, @0x00000000025c7910, libserver.so)
// calls: CBaseEntity::PhysicsTouchTriggers
void __fastcall CDOTA_Item_Physical::NotifyPositionChanged(CDOTA_Item_Physical *const this, CBaseEntity *pEntity)
{
  CBaseEntity::PhysicsTouchTriggers(this, 0);
}


// CDOTA_Item_Rune::Schema_DynamicBinding  (line 378, @0x00000000025c4f80, libserver.so)
// globals: CDOTA_Item_Rune::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Rune::Schema_DynamicBinding(const CDOTA_Item_Rune *const this)
{
  return CDOTA_Item_Rune::s_pSchemaBinding;
}


// CDOTA_Item_Rune::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 378, @0x00000000025c4f90, libserver.so)
// globals: CDOTA_Item_Rune::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Rune::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_Rune::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Rune::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_Rune::CEntityInstanceEntityClass::DestructInstance  (line 378, @0x00000000025c4fa0, libserver.so)  // inlines: Destruct<CDOTA_Item_Rune>
void __fastcall CDOTA_Item_Rune::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_Rune::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_Rune::CEntityInstanceEntityClass::FreeInstance  (line 378, @0x00000000025c4fc0, libserver.so)
void __fastcall CDOTA_Item_Rune::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_Rune::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_Rune::CEntityInstanceEntityClass::CanAllocate  (line 378, @0x00000000025c4fe0, libserver.so)
bool __fastcall CDOTA_Item_Rune::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_Rune::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_Rune::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 378, @0x00000000025c4ff0, libserver.so)
// globals: CDOTA_Item_Rune::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_Rune::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_Rune::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Rune::s_pSchemaBinding;
}


// CDOTA_Item_Rune::CEntityInstanceEntityClass::AllocateInstance  (line 378, @0x00000000025c71b0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_Rune::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_Rune::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1224);
  memset(v1, 0, 0x4C8u);
  return v1;
}


// CDOTA_Item_Rune::CEntityInstanceEntityClass::ConstructInstance  (line 378, @0x00000000025c76d0, libserver.so)  // inlines: CDOTA_Item_Rune, CEntityHandle, CHandle, CNetworkVarBase, Construct<CDOTA_Item_Rune>, EnsureValidValue<int>
// calls: CBaseAnimating::CBaseAnimating
CEntityInstance *__fastcall CDOTA_Item_Rune::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_Rune::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseAnimating::CBaseAnimating(p);
    *(p + 304) = -1;
    *p = &off_410C750;
    *(p + 305) = 0;
  }
  return p;
}


// CDOTA_Item_Rune::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 378, @0x00000000025cb240, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_Rune::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Rune::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_Rune::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 378, @0x00000000025cb260, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_Rune::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Rune::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_Rune::GetEntityClassInternal  (line 378, @0x00000000025cf150, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseAnimating::InitScriptDesc, CBaseAnimating::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_dota_04.cpp
// strings: "dota_item_rune", "CDOTA_Item_Rune"
// globals: `guard variable for'CDOTA_Item_Rune::GetEntityClassInternal(void)::g_EntityCDOTA_Item_RuneClass, CDOTA_Item_Rune::GetEntityClassInternal(void)::g_EntityCDOTA_Item_RuneClass, __dso_handle, CDOTA_Item_Rune::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_Rune::GetEntityClassInfo(void)::g_EntityCDOTA_Item_RuneClassInfo, CDOTA_Item_Rune::GetEntityClassInfo(void)::g_EntityCDOTA_Item_RuneClassInfo
CEntityClass *__cdecl CDOTA_Item_Rune::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Rune::GetEntityClassInternal(void)::g_EntityCDOTA_Item_RuneClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Rune::GetEntityClassInternal(void)::g_EntityCDOTA_Item_RuneClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_Rune::GetEntityClassInternal(void)::g_EntityCDOTA_Item_RuneClass);
    CDOTA_Item_Rune::GetEntityClassInternal(void)::g_EntityCDOTA_Item_RuneClass._vptr_CEntityClass = off_4100DF0;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Rune::GetEntityClassInternal(void)::g_EntityCDOTA_Item_RuneClass);
    __cxa_atexit(
      CDOTA_Item_Rune::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_Rune::GetEntityClassInternal(void)::g_EntityCDOTA_Item_RuneClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_RuneClass != 0 )
    return &CDOTA_Item_Rune::GetEntityClassInternal(void)::g_EntityCDOTA_Item_RuneClass;
  if ( `guard variable for'CDOTA_Item_Rune::GetEntityClassInfo(void)::g_EntityCDOTA_Item_RuneClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Rune::GetEntityClassInfo(void)::g_EntityCDOTA_Item_RuneClassInfo) != 0 )
  {
    EntityClassInfo = CBaseAnimating::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_Rune::GetEntityClassInfo(void)::g_EntityCDOTA_Item_RuneClassInfo,
      "CDOTA_Item_Rune",
      "dota_item_rune",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Rune::GetEntityClassInfo(void)::g_EntityCDOTA_Item_RuneClassInfo);
  }
  CDOTA_Item_Rune::GetEntityClassInternal(void)::g_EntityCDOTA_Item_RuneClass.m_pClassInfo = &CDOTA_Item_Rune::GetEntityClassInfo(void)::g_EntityCDOTA_Item_RuneClassInfo;
  CDOTA_Item_Rune::GetEntityClassInternal(void)::g_EntityCDOTA_Item_RuneClass.m_pBaseClassInfo = CDOTA_Item_Rune::GetEntityClassInfo(void)::g_EntityCDOTA_Item_RuneClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_RuneClass = &CDOTA_Item_Rune::GetEntityClassInternal(void)::g_EntityCDOTA_Item_RuneClass;
  CDOTA_Item_Rune::GetEntityClassInfo(void)::g_EntityCDOTA_Item_RuneClassInfo.m_pClass = &CDOTA_Item_Rune::GetEntityClassInternal(void)::g_EntityCDOTA_Item_RuneClass;
  CDOTA_Item_Rune::GetEntityClassInternal(void)::g_EntityCDOTA_Item_RuneClass.m_pScriptClassDesc = CBaseAnimating::InitScriptDesc();
  g_pEntityCDOTA_Item_RuneClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_Rune::GetEntityClassInternal(void)::g_EntityCDOTA_Item_RuneClass;
}


// CDOTA_Item_Rune::IsPartOfFOWSystem  (line 399, @0x00000000025c5000, libserver.so)
bool __fastcall CDOTA_Item_Rune::IsPartOfFOWSystem(CDOTA_Item_Rune *const this)
{
  return 1;
}


// CDOTA_Item_RuneSpawner_Powerup::~CDOTA_Item_RuneSpawner_Powerup  (line 410, @0x00000000025c7780, libserver.so)  // inlines: ~CBaseAnimating
// calls: CHitboxComponent::~CHitboxComponent, CBaseModelEntity::~CBaseModelEntity
void __fastcall CDOTA_Item_RuneSpawner_Powerup::~CDOTA_Item_RuneSpawner_Powerup(
        CDOTA_Item_RuneSpawner_Powerup *const this)
{
  CHitboxComponent *p_m_CHitboxComponent; // rdi

  p_m_CHitboxComponent = &this->m_CHitboxComponent;
  *&p_m_CHitboxComponent[-72].m_nHitboxHandle = &off_3FED330;
  CHitboxComponent::~CHitboxComponent(p_m_CHitboxComponent);
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CDOTA_Item_RuneSpawner_Powerup::~CDOTA_Item_RuneSpawner_Powerup  (line 410, @0x00000000025c77c0, libserver.so)  // inlines: ~CBaseAnimating, ~CDOTA_Item_RuneSpawner_Powerup
// calls: CHitboxComponent::~CHitboxComponent, CBaseModelEntity::~CBaseModelEntity, CBaseEntity::operator delete
void __fastcall CDOTA_Item_RuneSpawner_Powerup::~CDOTA_Item_RuneSpawner_Powerup(
        CDOTA_Item_RuneSpawner_Powerup *const this)
{
  CHitboxComponent *p_m_CHitboxComponent; // rdi

  p_m_CHitboxComponent = &this->m_CHitboxComponent;
  *&p_m_CHitboxComponent[-72].m_nHitboxHandle = &off_3FED330;
  CHitboxComponent::~CHitboxComponent(p_m_CHitboxComponent);
  CBaseModelEntity::~CBaseModelEntity(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_RuneSpawner_Powerup::Schema_DynamicBinding  (line 412, @0x00000000025c5010, libserver.so)
// globals: CDOTA_Item_RuneSpawner_Powerup::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_RuneSpawner_Powerup::Schema_DynamicBinding(
        const CDOTA_Item_RuneSpawner_Powerup *const this)
{
  return CDOTA_Item_RuneSpawner_Powerup::s_pSchemaBinding;
}


// CDOTA_Item_RuneSpawner_Powerup::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 412, @0x00000000025c5020, libserver.so)
// globals: CDOTA_Item_RuneSpawner_Powerup::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_RuneSpawner_Powerup::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_RuneSpawner_Powerup::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_RuneSpawner_Powerup::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_RuneSpawner_Powerup::CEntityInstanceEntityClass::DestructInstance  (line 412, @0x00000000025c5030, libserver.so)  // inlines: Destruct<CDOTA_Item_RuneSpawner_Powerup>
void __fastcall CDOTA_Item_RuneSpawner_Powerup::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_RuneSpawner_Powerup::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_RuneSpawner_Powerup::CEntityInstanceEntityClass::FreeInstance  (line 412, @0x00000000025c5050, libserver.so)
void __fastcall CDOTA_Item_RuneSpawner_Powerup::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_RuneSpawner_Powerup::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_RuneSpawner_Powerup::CEntityInstanceEntityClass::CanAllocate  (line 412, @0x00000000025c5070, libserver.so)
bool __fastcall CDOTA_Item_RuneSpawner_Powerup::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_RuneSpawner_Powerup::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_RuneSpawner_Powerup::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 412, @0x00000000025c5080, libserver.so)
// globals: CDOTA_Item_RuneSpawner_Powerup::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_RuneSpawner_Powerup::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_RuneSpawner_Powerup::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_RuneSpawner_Powerup::s_pSchemaBinding;
}


// CDOTA_Item_RuneSpawner_Powerup::CEntityInstanceEntityClass::AllocateInstance  (line 412, @0x00000000025c71f0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_RuneSpawner_Powerup::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_RuneSpawner_Powerup::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1224);
  memset(v1, 0, 0x4C8u);
  return v1;
}


// CDOTA_Item_RuneSpawner_Powerup::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 412, @0x00000000025cb290, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_RuneSpawner_Powerup::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_RuneSpawner_Powerup::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_RuneSpawner_Powerup::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 412, @0x00000000025cb2b0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_RuneSpawner_Powerup::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_RuneSpawner_Powerup::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_RuneSpawner_Powerup::GetEntityClassInternal  (line 412, @0x00000000025cf2a0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseAnimating::InitScriptDesc, CBaseAnimating::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_dota_04.cpp
// strings: "dota_item_rune_spawner_powerup", "CDOTA_Item_RuneSpawner_Powerup"
// globals: `guard variable for'CDOTA_Item_RuneSpawner_Powerup::GetEntityClassInternal(void)::g_EntityCDOTA_Item_RuneSpawner_PowerupClass, CDOTA_Item_RuneSpawner_Powerup::GetEntityClassInternal(void)::g_EntityCDOTA_Item_RuneSpawner_PowerupClass, __dso_handle, CDOTA_Item_RuneSpawner_Powerup::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_RuneSpawner_Powerup::GetEntityClassInfo(void)::g_EntityCDOTA_Item_RuneSpawner_PowerupClassInfo, CDOTA_Item_RuneSpawner_Powerup::GetEntityClassInfo(void)::g_EntityCDOTA_Item_RuneSpawner_PowerupClassInfo
CEntityClass *__cdecl CDOTA_Item_RuneSpawner_Powerup::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_RuneSpawner_Powerup::GetEntityClassInternal(void)::g_EntityCDOTA_Item_RuneSpawner_PowerupClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_RuneSpawner_Powerup::GetEntityClassInternal(void)::g_EntityCDOTA_Item_RuneSpawner_PowerupClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_RuneSpawner_Powerup::GetEntityClassInternal(void)::g_EntityCDOTA_Item_RuneSpawner_PowerupClass);
    CDOTA_Item_RuneSpawner_Powerup::GetEntityClassInternal(void)::g_EntityCDOTA_Item_RuneSpawner_PowerupClass._vptr_CEntityClass = off_4100E70;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_RuneSpawner_Powerup::GetEntityClassInternal(void)::g_EntityCDOTA_Item_RuneSpawner_PowerupClass);
    __cxa_atexit(
      CDOTA_Item_RuneSpawner_Powerup::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_RuneSpawner_Powerup::GetEntityClassInternal(void)::g_EntityCDOTA_Item_RuneSpawner_PowerupClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_RuneSpawner_PowerupClass != 0 )
    return &CDOTA_Item_RuneSpawner_Powerup::GetEntityClassInternal(void)::g_EntityCDOTA_Item_RuneSpawner_PowerupClass;
  if ( `guard variable for'CDOTA_Item_RuneSpawner_Powerup::GetEntityClassInfo(void)::g_EntityCDOTA_Item_RuneSpawner_PowerupClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_RuneSpawner_Powerup::GetEntityClassInfo(void)::g_EntityCDOTA_Item_RuneSpawner_PowerupClassInfo) != 0 )
  {
    EntityClassInfo = CBaseAnimating::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_RuneSpawner_Powerup::GetEntityClassInfo(void)::g_EntityCDOTA_Item_RuneSpawner_PowerupClassInfo,
      "CDOTA_Item_RuneSpawner_Powerup",
      "dota_item_rune_spawner_powerup",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_RuneSpawner_Powerup::GetEntityClassInfo(void)::g_EntityCDOTA_Item_RuneSpawner_PowerupClassInfo);
  }
  CDOTA_Item_RuneSpawner_Powerup::GetEntityClassInternal(void)::g_EntityCDOTA_Item_RuneSpawner_PowerupClass.m_pClassInfo = &CDOTA_Item_RuneSpawner_Powerup::GetEntityClassInfo(void)::g_EntityCDOTA_Item_RuneSpawner_PowerupClassInfo;
  CDOTA_Item_RuneSpawner_Powerup::GetEntityClassInternal(void)::g_EntityCDOTA_Item_RuneSpawner_PowerupClass.m_pBaseClassInfo = CDOTA_Item_RuneSpawner_Powerup::GetEntityClassInfo(void)::g_EntityCDOTA_Item_RuneSpawner_PowerupClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_RuneSpawner_PowerupClass = &CDOTA_Item_RuneSpawner_Powerup::GetEntityClassInternal(void)::g_EntityCDOTA_Item_RuneSpawner_PowerupClass;
  CDOTA_Item_RuneSpawner_Powerup::GetEntityClassInfo(void)::g_EntityCDOTA_Item_RuneSpawner_PowerupClassInfo.m_pClass = &CDOTA_Item_RuneSpawner_Powerup::GetEntityClassInternal(void)::g_EntityCDOTA_Item_RuneSpawner_PowerupClass;
  CDOTA_Item_RuneSpawner_Powerup::GetEntityClassInternal(void)::g_EntityCDOTA_Item_RuneSpawner_PowerupClass.m_pScriptClassDesc = CBaseAnimating::InitScriptDesc();
  g_pEntityCDOTA_Item_RuneSpawner_PowerupClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_RuneSpawner_Powerup::GetEntityClassInternal(void)::g_EntityCDOTA_Item_RuneSpawner_PowerupClass;
}


// CDOTA_Item_RuneSpawner_Powerup::CEntityInstanceEntityClass::ConstructInstance  (line 412, @0x00000000025d0f90, libserver.so)  // inlines: Construct<CDOTA_Item_RuneSpawner_Powerup>
// calls: CDOTA_Item_RuneSpawner_Powerup::CDOTA_Item_RuneSpawner_Powerup
CEntityInstance *__fastcall CDOTA_Item_RuneSpawner_Powerup::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_RuneSpawner_Powerup::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
    CDOTA_Item_RuneSpawner_Powerup::CDOTA_Item_RuneSpawner_Powerup(p);
  return p;
}


// CDOTA_Item_RuneSpawner_Bounty::~CDOTA_Item_RuneSpawner_Bounty  (line 425, @0x00000000025c7800, libserver.so)  // inlines: ~CBaseAnimating
// calls: CHitboxComponent::~CHitboxComponent, CBaseModelEntity::~CBaseModelEntity
void __fastcall CDOTA_Item_RuneSpawner_Bounty::~CDOTA_Item_RuneSpawner_Bounty(
        CDOTA_Item_RuneSpawner_Bounty *const this)
{
  CHitboxComponent *p_m_CHitboxComponent; // rdi

  p_m_CHitboxComponent = &this->m_CHitboxComponent;
  *&p_m_CHitboxComponent[-72].m_nHitboxHandle = &off_3FED330;
  CHitboxComponent::~CHitboxComponent(p_m_CHitboxComponent);
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CDOTA_Item_RuneSpawner_Bounty::~CDOTA_Item_RuneSpawner_Bounty  (line 425, @0x00000000025c7840, libserver.so)  // inlines: ~CBaseAnimating, ~CDOTA_Item_RuneSpawner_Bounty
// calls: CHitboxComponent::~CHitboxComponent, CBaseModelEntity::~CBaseModelEntity, CBaseEntity::operator delete
void __fastcall CDOTA_Item_RuneSpawner_Bounty::~CDOTA_Item_RuneSpawner_Bounty(
        CDOTA_Item_RuneSpawner_Bounty *const this)
{
  CHitboxComponent *p_m_CHitboxComponent; // rdi

  p_m_CHitboxComponent = &this->m_CHitboxComponent;
  *&p_m_CHitboxComponent[-72].m_nHitboxHandle = &off_3FED330;
  CHitboxComponent::~CHitboxComponent(p_m_CHitboxComponent);
  CBaseModelEntity::~CBaseModelEntity(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_RuneSpawner_Bounty::Schema_DynamicBinding  (line 427, @0x00000000025c5090, libserver.so)
// globals: CDOTA_Item_RuneSpawner_Bounty::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_RuneSpawner_Bounty::Schema_DynamicBinding(
        const CDOTA_Item_RuneSpawner_Bounty *const this)
{
  return CDOTA_Item_RuneSpawner_Bounty::s_pSchemaBinding;
}


// CDOTA_Item_RuneSpawner_Bounty::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 427, @0x00000000025c50a0, libserver.so)
// globals: CDOTA_Item_RuneSpawner_Bounty::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_RuneSpawner_Bounty::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_RuneSpawner_Bounty::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_RuneSpawner_Bounty::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_RuneSpawner_Bounty::CEntityInstanceEntityClass::DestructInstance  (line 427, @0x00000000025c50b0, libserver.so)  // inlines: Destruct<CDOTA_Item_RuneSpawner_Bounty>
void __fastcall CDOTA_Item_RuneSpawner_Bounty::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_RuneSpawner_Bounty::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_RuneSpawner_Bounty::CEntityInstanceEntityClass::FreeInstance  (line 427, @0x00000000025c50d0, libserver.so)
void __fastcall CDOTA_Item_RuneSpawner_Bounty::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_RuneSpawner_Bounty::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_RuneSpawner_Bounty::CEntityInstanceEntityClass::CanAllocate  (line 427, @0x00000000025c50f0, libserver.so)
bool __fastcall CDOTA_Item_RuneSpawner_Bounty::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_RuneSpawner_Bounty::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_RuneSpawner_Bounty::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 427, @0x00000000025c5100, libserver.so)
// globals: CDOTA_Item_RuneSpawner_Bounty::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_RuneSpawner_Bounty::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_RuneSpawner_Bounty::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_RuneSpawner_Bounty::s_pSchemaBinding;
}


// CDOTA_Item_RuneSpawner_Bounty::CEntityInstanceEntityClass::AllocateInstance  (line 427, @0x00000000025c7230, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_RuneSpawner_Bounty::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_RuneSpawner_Bounty::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1224);
  memset(v1, 0, 0x4C8u);
  return v1;
}


// CDOTA_Item_RuneSpawner_Bounty::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 427, @0x00000000025cb2e0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_RuneSpawner_Bounty::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_RuneSpawner_Bounty::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_RuneSpawner_Bounty::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 427, @0x00000000025cb300, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_RuneSpawner_Bounty::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_RuneSpawner_Bounty::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_RuneSpawner_Bounty::GetEntityClassInternal  (line 427, @0x00000000025cf3f0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseAnimating::InitScriptDesc, CBaseAnimating::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_dota_04.cpp
// strings: "dota_item_rune_spawner_bounty", "CDOTA_Item_RuneSpawner_Bounty"
// globals: `guard variable for'CDOTA_Item_RuneSpawner_Bounty::GetEntityClassInternal(void)::g_EntityCDOTA_Item_RuneSpawner_BountyClass, CDOTA_Item_RuneSpawner_Bounty::GetEntityClassInternal(void)::g_EntityCDOTA_Item_RuneSpawner_BountyClass, __dso_handle, CDOTA_Item_RuneSpawner_Bounty::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_RuneSpawner_Bounty::GetEntityClassInfo(void)::g_EntityCDOTA_Item_RuneSpawner_BountyClassInfo, CDOTA_Item_RuneSpawner_Bounty::GetEntityClassInfo(void)::g_EntityCDOTA_Item_RuneSpawner_BountyClassInfo
CEntityClass *__cdecl CDOTA_Item_RuneSpawner_Bounty::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_RuneSpawner_Bounty::GetEntityClassInternal(void)::g_EntityCDOTA_Item_RuneSpawner_BountyClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_RuneSpawner_Bounty::GetEntityClassInternal(void)::g_EntityCDOTA_Item_RuneSpawner_BountyClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_RuneSpawner_Bounty::GetEntityClassInternal(void)::g_EntityCDOTA_Item_RuneSpawner_BountyClass);
    CDOTA_Item_RuneSpawner_Bounty::GetEntityClassInternal(void)::g_EntityCDOTA_Item_RuneSpawner_BountyClass._vptr_CEntityClass = off_4100EF0;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_RuneSpawner_Bounty::GetEntityClassInternal(void)::g_EntityCDOTA_Item_RuneSpawner_BountyClass);
    __cxa_atexit(
      CDOTA_Item_RuneSpawner_Bounty::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_RuneSpawner_Bounty::GetEntityClassInternal(void)::g_EntityCDOTA_Item_RuneSpawner_BountyClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_RuneSpawner_BountyClass != 0 )
    return &CDOTA_Item_RuneSpawner_Bounty::GetEntityClassInternal(void)::g_EntityCDOTA_Item_RuneSpawner_BountyClass;
  if ( `guard variable for'CDOTA_Item_RuneSpawner_Bounty::GetEntityClassInfo(void)::g_EntityCDOTA_Item_RuneSpawner_BountyClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_RuneSpawner_Bounty::GetEntityClassInfo(void)::g_EntityCDOTA_Item_RuneSpawner_BountyClassInfo) != 0 )
  {
    EntityClassInfo = CBaseAnimating::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_RuneSpawner_Bounty::GetEntityClassInfo(void)::g_EntityCDOTA_Item_RuneSpawner_BountyClassInfo,
      "CDOTA_Item_RuneSpawner_Bounty",
      "dota_item_rune_spawner_bounty",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_RuneSpawner_Bounty::GetEntityClassInfo(void)::g_EntityCDOTA_Item_RuneSpawner_BountyClassInfo);
  }
  CDOTA_Item_RuneSpawner_Bounty::GetEntityClassInternal(void)::g_EntityCDOTA_Item_RuneSpawner_BountyClass.m_pClassInfo = &CDOTA_Item_RuneSpawner_Bounty::GetEntityClassInfo(void)::g_EntityCDOTA_Item_RuneSpawner_BountyClassInfo;
  CDOTA_Item_RuneSpawner_Bounty::GetEntityClassInternal(void)::g_EntityCDOTA_Item_RuneSpawner_BountyClass.m_pBaseClassInfo = CDOTA_Item_RuneSpawner_Bounty::GetEntityClassInfo(void)::g_EntityCDOTA_Item_RuneSpawner_BountyClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_RuneSpawner_BountyClass = &CDOTA_Item_RuneSpawner_Bounty::GetEntityClassInternal(void)::g_EntityCDOTA_Item_RuneSpawner_BountyClass;
  CDOTA_Item_RuneSpawner_Bounty::GetEntityClassInfo(void)::g_EntityCDOTA_Item_RuneSpawner_BountyClassInfo.m_pClass = &CDOTA_Item_RuneSpawner_Bounty::GetEntityClassInternal(void)::g_EntityCDOTA_Item_RuneSpawner_BountyClass;
  CDOTA_Item_RuneSpawner_Bounty::GetEntityClassInternal(void)::g_EntityCDOTA_Item_RuneSpawner_BountyClass.m_pScriptClassDesc = CBaseAnimating::InitScriptDesc();
  g_pEntityCDOTA_Item_RuneSpawner_BountyClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_RuneSpawner_Bounty::GetEntityClassInternal(void)::g_EntityCDOTA_Item_RuneSpawner_BountyClass;
}


// CDOTA_Item_RuneSpawner_Bounty::CEntityInstanceEntityClass::ConstructInstance  (line 427, @0x00000000025d0f60, libserver.so)  // inlines: Construct<CDOTA_Item_RuneSpawner_Bounty>
// calls: CDOTA_Item_RuneSpawner_Bounty::CDOTA_Item_RuneSpawner_Bounty
CEntityInstance *__fastcall CDOTA_Item_RuneSpawner_Bounty::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_RuneSpawner_Bounty::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
    CDOTA_Item_RuneSpawner_Bounty::CDOTA_Item_RuneSpawner_Bounty(p);
  return p;
}


// CDOTA_ItemSpawner::~CDOTA_ItemSpawner  (line 443, @0x00000000025c7630, libserver.so)  // inlines: ~CPointEntity
// calls: CBaseEntity::~CBaseEntity
void __fastcall CDOTA_ItemSpawner::~CDOTA_ItemSpawner(CDOTA_ItemSpawner *const this)
{
  this->_vptr_IHandleEntity = &off_3FB6510;
  CBaseEntity::~CBaseEntity(this);
}


// CDOTA_ItemSpawner::~CDOTA_ItemSpawner  (line 443, @0x00000000025c7650, libserver.so)  // inlines: ~CDOTA_ItemSpawner, ~CPointEntity
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CDOTA_ItemSpawner::~CDOTA_ItemSpawner(CDOTA_ItemSpawner *const this)
{
  this->_vptr_IHandleEntity = &off_3FB6510;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_ItemSpawner::GetEntityClass  (line 445, @0x00000000025c5110, libserver.so)
CEntityClass *__cdecl CDOTA_ItemSpawner::GetEntityClass()
{
  return g_pEntityCDOTA_ItemSpawnerClass;
}


// CDOTA_ItemSpawner::Schema_DynamicBinding  (line 445, @0x00000000025c5120, libserver.so)
// globals: CDOTA_ItemSpawner::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_ItemSpawner::Schema_DynamicBinding(const CDOTA_ItemSpawner *const this)
{
  return CDOTA_ItemSpawner::s_pSchemaBinding;
}


// CDOTA_ItemSpawner::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 445, @0x00000000025c5130, libserver.so)
// globals: CDOTA_ItemSpawner::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_ItemSpawner::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_ItemSpawner::CEntityInstanceEntityClass *const this)
{
  return CDOTA_ItemSpawner::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_ItemSpawner::CEntityInstanceEntityClass::DestructInstance  (line 445, @0x00000000025c5140, libserver.so)  // inlines: Destruct<CDOTA_ItemSpawner>
void __fastcall CDOTA_ItemSpawner::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_ItemSpawner::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_ItemSpawner::CEntityInstanceEntityClass::FreeInstance  (line 445, @0x00000000025c5160, libserver.so)
void __fastcall CDOTA_ItemSpawner::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_ItemSpawner::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_ItemSpawner::CEntityInstanceEntityClass::CanAllocate  (line 445, @0x00000000025c5180, libserver.so)
bool __fastcall CDOTA_ItemSpawner::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_ItemSpawner::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_ItemSpawner::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 445, @0x00000000025c5190, libserver.so)
// globals: CDOTA_ItemSpawner::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_ItemSpawner::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_ItemSpawner::CEntityInstanceEntityClass *const this)
{
  return CDOTA_ItemSpawner::s_pSchemaBinding;
}


// CDOTA_ItemSpawner::CEntityInstanceEntityClass::AllocateInstance  (line 445, @0x00000000025c7270, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_ItemSpawner::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_ItemSpawner::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 784);
  memset(v1, 0, 0x310u);
  return v1;
}


// CDOTA_ItemSpawner::CEntityInstanceEntityClass::ConstructInstance  (line 445, @0x00000000025c7570, libserver.so)  // inlines: CDOTA_ItemSpawner, CPointEntity, CUtlSymbolLarge, Construct<CDOTA_ItemSpawner>
// calls: CBaseEntity::CBaseEntity
CEntityInstance *__fastcall CDOTA_ItemSpawner::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_ItemSpawner::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseEntity::CBaseEntity(p);
    *(p + 97) = 0;
    *p = &off_410CF50;
  }
  return p;
}


// CDOTA_ItemSpawner::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 445, @0x00000000025cb150, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_ItemSpawner::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_ItemSpawner::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_ItemSpawner::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 445, @0x00000000025cb170, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_ItemSpawner::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_ItemSpawner::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_ItemSpawner::GetEntityClassInternal  (line 445, @0x00000000025d6730, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, InitScriptDesc, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, GetScriptDesc<CDOTA_ItemSpawner>, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CBaseEntity::GetEntityClassInfo, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_dota_04.cpp
// strings: "dota_item_spawner", "CDOTA_ItemSpawner", "CPointEntity"
// globals: `guard variable for'CDOTA_ItemSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_ItemSpawnerClass, CDOTA_ItemSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_ItemSpawnerClass, __dso_handle, CDOTA_ItemSpawner::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_ItemSpawner::GetEntityClassInfo(void)::g_EntityCDOTA_ItemSpawnerClassInfo, CDOTA_ItemSpawner::GetEntityClassInfo(void)::g_EntityCDOTA_ItemSpawnerClassInfo, `guard variable for'CPointEntity::GetEntityClassInfo(void)::g_EntityCPointEntityClassInfo, CPointEntity::GetEntityClassInfo(void)::g_EntityCPointEntityClassInfo
CEntityClass *__cdecl CDOTA_ItemSpawner::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_ItemSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_ItemSpawnerClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_ItemSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_ItemSpawnerClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_ItemSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_ItemSpawnerClass);
    CDOTA_ItemSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_ItemSpawnerClass._vptr_CEntityClass = off_4100F70;
    __cxa_guard_release(&`guard variable for'CDOTA_ItemSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_ItemSpawnerClass);
    __cxa_atexit(
      CDOTA_ItemSpawner::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_ItemSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_ItemSpawnerClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_ItemSpawnerClass != 0 )
    return &CDOTA_ItemSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_ItemSpawnerClass;
  if ( `guard variable for'CDOTA_ItemSpawner::GetEntityClassInfo(void)::g_EntityCDOTA_ItemSpawnerClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_ItemSpawner::GetEntityClassInfo(void)::g_EntityCDOTA_ItemSpawnerClassInfo) != 0 )
  {
    if ( `guard variable for'CPointEntity::GetEntityClassInfo(void)::g_EntityCPointEntityClassInfo == 0
      && __cxa_guard_acquire(&`guard variable for'CPointEntity::GetEntityClassInfo(void)::g_EntityCPointEntityClassInfo) != 0 )
    {
      EntityClassInfo = CBaseEntity::GetEntityClassInfo();
      CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
        &CPointEntity::GetEntityClassInfo(void)::g_EntityCPointEntityClassInfo,
        "CPointEntity",
        0,
        0,
        EntityClassInfo);
      __cxa_guard_release(&`guard variable for'CPointEntity::GetEntityClassInfo(void)::g_EntityCPointEntityClassInfo);
    }
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_ItemSpawner::GetEntityClassInfo(void)::g_EntityCDOTA_ItemSpawnerClassInfo,
      "CDOTA_ItemSpawner",
      "dota_item_spawner",
      0,
      &CPointEntity::GetEntityClassInfo(void)::g_EntityCPointEntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_ItemSpawner::GetEntityClassInfo(void)::g_EntityCDOTA_ItemSpawnerClassInfo);
  }
  CDOTA_ItemSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_ItemSpawnerClass.m_pClassInfo = &CDOTA_ItemSpawner::GetEntityClassInfo(void)::g_EntityCDOTA_ItemSpawnerClassInfo;
  CDOTA_ItemSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_ItemSpawnerClass.m_pBaseClassInfo = CDOTA_ItemSpawner::GetEntityClassInfo(void)::g_EntityCDOTA_ItemSpawnerClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_ItemSpawnerClass = &CDOTA_ItemSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_ItemSpawnerClass;
  CDOTA_ItemSpawner::GetEntityClassInfo(void)::g_EntityCDOTA_ItemSpawnerClassInfo.m_pClass = &CDOTA_ItemSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_ItemSpawnerClass;
  CDOTA_ItemSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_ItemSpawnerClass.m_pScriptClassDesc = GetScriptDesc<CDOTA_ItemSpawner>(0);
  g_pEntityCDOTA_ItemSpawnerClass->m_pComponentOverrides = 0;
  return &CDOTA_ItemSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_ItemSpawnerClass;
}


// CDOTA_ItemSpawner::GetItemName  (line 453, @0x00000000025c51a0, libserver.so)  // inlines: String, ToCStr
const char *__fastcall CDOTA_ItemSpawner::GetItemName(CDOTA_ItemSpawner *const this)
{
  const char *result; // rax

  result = "";
  if ( this->m_szItemName.u.m_Id != 0 )
    return this->m_szItemName.u.m_pAsString;
  return result;
}


