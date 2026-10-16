
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Item_Lua::Schema_DynamicBinding  (line 32, @0x00000000025c57e0, libserver.so)
// globals: CDOTA_Item_Lua::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Lua::Schema_DynamicBinding(const CDOTA_Item_Lua *const this)
{
  return CDOTA_Item_Lua::s_pSchemaBinding;
}


// CDOTA_Item_Lua::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 32, @0x00000000025c57f0, libserver.so)
// globals: CDOTA_Item_Lua::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Lua::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_Lua::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Lua::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_Lua::CEntityInstanceEntityClass::DestructInstance  (line 32, @0x00000000025c5800, libserver.so)  // inlines: Destruct<CDOTA_Item_Lua>
void __fastcall CDOTA_Item_Lua::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_Lua::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_Lua::CEntityInstanceEntityClass::FreeInstance  (line 32, @0x00000000025c5820, libserver.so)
void __fastcall CDOTA_Item_Lua::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_Lua::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_Lua::CEntityInstanceEntityClass::CanAllocate  (line 32, @0x00000000025c5840, libserver.so)
bool __fastcall CDOTA_Item_Lua::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_Lua::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_Lua::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 32, @0x00000000025c5850, libserver.so)
// globals: CDOTA_Item_Lua::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_Lua::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_Lua::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Lua::s_pSchemaBinding;
}


// CDOTA_Item_Lua::CEntityInstanceEntityClass::AllocateInstance  (line 32, @0x00000000025c7530, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_Lua::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_Lua::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1064);
  memset(v1, 0, 0x428u);
  return v1;
}


// CDOTA_Item_Lua::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 32, @0x00000000025cb6f0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_Lua::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Lua::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_Lua::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 32, @0x00000000025cb710, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_Lua::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Lua::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_Lua::CEntityInstanceEntityClass::ConstructInstance  (line 32, @0x00000000025d0c00, libserver.so)  // inlines: CDOTA_Item_Lua, CUtlString, Construct<CDOTA_Item_Lua>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_Lua::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_Lua::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *(p + 126) = 0;
    *p = &off_410FBB0;
    *(p + 127) = 0;
    *(p + 128) = 0;
    *(p + 129) = 0;
    *(p + 130) = 0;
    *(p + 131) = 0;
    *(p + 132) = 0;
    *(p + 125) = 0;
  }
  return p;
}


// CDOTA_Item_Lua::GetEntityClassInternal  (line 32, @0x00000000025d6a10, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, InitScriptDesc, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, GetScriptDesc<CDOTA_Item_Lua>, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_dota_04.cpp
// strings: "item_lua", "CDOTA_Item_Lua"
// globals: `guard variable for'CDOTA_Item_Lua::GetEntityClassInternal(void)::g_EntityCDOTA_Item_LuaClass, CDOTA_Item_Lua::GetEntityClassInternal(void)::g_EntityCDOTA_Item_LuaClass, __dso_handle, CDOTA_Item_Lua::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_Lua::GetEntityClassInfo(void)::g_EntityCDOTA_Item_LuaClassInfo, CDOTA_Item_Lua::GetEntityClassInfo(void)::g_EntityCDOTA_Item_LuaClassInfo
CEntityClass *__cdecl CDOTA_Item_Lua::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Lua::GetEntityClassInternal(void)::g_EntityCDOTA_Item_LuaClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Lua::GetEntityClassInternal(void)::g_EntityCDOTA_Item_LuaClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_Lua::GetEntityClassInternal(void)::g_EntityCDOTA_Item_LuaClass);
    CDOTA_Item_Lua::GetEntityClassInternal(void)::g_EntityCDOTA_Item_LuaClass._vptr_CEntityClass = off_410FB30;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Lua::GetEntityClassInternal(void)::g_EntityCDOTA_Item_LuaClass);
    __cxa_atexit(
      CDOTA_Item_Lua::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_Lua::GetEntityClassInternal(void)::g_EntityCDOTA_Item_LuaClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_LuaClass != 0 )
    return &CDOTA_Item_Lua::GetEntityClassInternal(void)::g_EntityCDOTA_Item_LuaClass;
  if ( `guard variable for'CDOTA_Item_Lua::GetEntityClassInfo(void)::g_EntityCDOTA_Item_LuaClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Lua::GetEntityClassInfo(void)::g_EntityCDOTA_Item_LuaClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_Lua::GetEntityClassInfo(void)::g_EntityCDOTA_Item_LuaClassInfo,
      "CDOTA_Item_Lua",
      "item_lua",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Lua::GetEntityClassInfo(void)::g_EntityCDOTA_Item_LuaClassInfo);
  }
  CDOTA_Item_Lua::GetEntityClassInternal(void)::g_EntityCDOTA_Item_LuaClass.m_pClassInfo = &CDOTA_Item_Lua::GetEntityClassInfo(void)::g_EntityCDOTA_Item_LuaClassInfo;
  CDOTA_Item_Lua::GetEntityClassInternal(void)::g_EntityCDOTA_Item_LuaClass.m_pBaseClassInfo = CDOTA_Item_Lua::GetEntityClassInfo(void)::g_EntityCDOTA_Item_LuaClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_LuaClass = &CDOTA_Item_Lua::GetEntityClassInternal(void)::g_EntityCDOTA_Item_LuaClass;
  CDOTA_Item_Lua::GetEntityClassInfo(void)::g_EntityCDOTA_Item_LuaClassInfo.m_pClass = &CDOTA_Item_Lua::GetEntityClassInternal(void)::g_EntityCDOTA_Item_LuaClass;
  CDOTA_Item_Lua::GetEntityClassInternal(void)::g_EntityCDOTA_Item_LuaClass.m_pScriptClassDesc = GetScriptDesc<CDOTA_Item_Lua>(0);
  g_pEntityCDOTA_Item_LuaClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_Lua::GetEntityClassInternal(void)::g_EntityCDOTA_Item_LuaClass;
}


// CDOTA_Item_Lua::Script_GetBehavior  (line 64, @0x00000000025c78c0, libserver.so)  // inlines: GetAbilityData, GetBehavior
// calls: CDOTABaseAbility::LoadAbilityData
int __fastcall CDOTA_Item_Lua::Script_GetBehavior(CDOTA_Item_Lua *const this)
{
  DOTAAbilityData_t *m_pAbilityData; // rax

  m_pAbilityData = this->m_pAbilityData;
  if ( m_pAbilityData != 0 )
    return m_pAbilityData->m_iAbilityBehavior;
  CDOTABaseAbility::LoadAbilityData(this, 0);
  return this->m_pAbilityData->m_iAbilityBehavior;
}


// CDOTA_Item_Lua::Script_GetCastRange  (line 65, @0x00000000025caf00, libserver.so)  // inlines: HScriptToEntity<CBaseEntity>, ToDOTABaseNPC, ToEnt
// calls: GetScriptDesc<CEntityInstance>, CDOTABaseAbility::GetCastRange
int __fastcall CDOTA_Item_Lua::Script_GetCastRange(
        CDOTA_Item_Lua *const this,
        const Vector *const vLocation,
        HSCRIPT hTarget)
{
  __int64 (__fastcall *v6)(IScriptVM *, HSCRIPT, ScriptClassDesc_t *); // r15
  ScriptClassDesc_t *Script; // rax
  __int64 v8; // rax
  CDOTA_BaseNPC *v9; // rdx

  if ( hTarget != 0
    && (v6 = *(*g_pScriptVM + 208LL),
        Script = GetScriptDesc<CEntityInstance>(0),
        (v8 = v6(g_pScriptVM, hTarget, Script)) != 0)
    && *(v8 + 339) != 0 )
  {
    v9 = v8;
  }
  else
  {
    v9 = 0;
  }
  return CDOTABaseAbility::GetCastRange(this, vLocation, v9);
}


// CDOTA_Item_Lua::Script_GetManaCost  (line 66, @0x00000000025c8020, libserver.so)
// calls: CDOTABaseAbility::GetManaCost
int __fastcall CDOTA_Item_Lua::Script_GetManaCost(CDOTA_Item_Lua *const this, int iLevel)
{
  return CDOTABaseAbility::GetManaCost(this, iLevel);
}


// CDOTA_Item_Lua::Script_GetChannelTime  (line 67, @0x00000000025c7f60, libserver.so)
// calls: CDOTABaseAbility::GetChannelTime
float __fastcall CDOTA_Item_Lua::Script_GetChannelTime(CDOTA_Item_Lua *const this)
{
  return CDOTABaseAbility::GetChannelTime(this);
}


// CDOTA_Item_Lua::Script_GetChannelledManaCostPerSecond  (line 68, @0x00000000025c8010, libserver.so)
// calls: CDOTABaseAbility::GetChannelledManaCostPerSecond
int __fastcall CDOTA_Item_Lua::Script_GetChannelledManaCostPerSecond(CDOTA_Item_Lua *const this, int iLevel)
{
  return CDOTABaseAbility::GetChannelledManaCostPerSecond(this, iLevel);
}


// CDOTA_Item_Lua::Script_GetGoldCost  (line 69, @0x00000000025c8000, libserver.so)
// calls: CDOTABaseAbility::GetGoldCost
int __fastcall CDOTA_Item_Lua::Script_GetGoldCost(CDOTA_Item_Lua *const this, int iLevel)
{
  return CDOTABaseAbility::GetGoldCost(this, iLevel);
}


// CDOTA_Item_Lua::Script_GetCooldown  (line 70, @0x00000000025c7ff0, libserver.so)
// calls: CDOTABaseAbility::GetCooldown
float __fastcall CDOTA_Item_Lua::Script_GetCooldown(CDOTA_Item_Lua *const this, int iLevel)
{
  return CDOTABaseAbility::GetCooldown(this, iLevel);
}


// CDOTA_Item_Lua::Script_CastFilterResultTarget  (line 71, @0x00000000025cae80, libserver.so)  // inlines: HScriptToEntity<CBaseEntity>, ToDOTABaseNPC, ToEnt
// calls: GetScriptDesc<CEntityInstance>, CDOTABaseAbility::CastFilterResult
int __fastcall CDOTA_Item_Lua::Script_CastFilterResultTarget(CDOTA_Item_Lua *const this, HSCRIPT hTarget)
{
  __int64 (__fastcall *v4)(IScriptVM *, HSCRIPT, ScriptClassDesc_t *); // r14
  ScriptClassDesc_t *Script; // rax
  CDOTA_BaseNPC *v6; // rax

  if ( hTarget != 0
    && (v4 = *(*g_pScriptVM + 208LL),
        Script = GetScriptDesc<CEntityInstance>(0),
        (v6 = v4(g_pScriptVM, hTarget, Script)) != 0)
    && v6->m_bIsDOTANPC )
  {
    return CDOTABaseAbility::CastFilterResult(this, v6);
  }
  else
  {
    return CDOTABaseAbility::CastFilterResult(this, 0);
  }
}


// CDOTA_Item_Lua::Script_CastFilterResultLocation  (line 72, @0x00000000025c7fe0, libserver.so)
// calls: CDOTABaseAbility::CastFilterResult
int __fastcall CDOTA_Item_Lua::Script_CastFilterResultLocation(
        CDOTA_Item_Lua *const this,
        const Vector *const vLocation)
{
  return CDOTABaseAbility::CastFilterResult(this, vLocation);
}


// CDOTA_Item_Lua::Script_CastFilterResult  (line 73, @0x00000000025c5860, libserver.so)
int __fastcall CDOTA_Item_Lua::Script_CastFilterResult(CDOTA_Item_Lua *const this)
{
  return 0;
}


// CDOTA_Item_Lua::Script_GetCustomCastErrorTarget  (line 74, @0x00000000025ca630, libserver.so)  // inlines: HScriptToEntity<CBaseEntity>, ToEnt
// calls: GetScriptDesc<CEntityInstance>
// strings: "CUSTOM ERROR"
const char *__fastcall CDOTA_Item_Lua::Script_GetCustomCastErrorTarget(CDOTA_Item_Lua *const this, HSCRIPT hTarget)
{
  void (__fastcall *v3)(IScriptVM *, HSCRIPT, ScriptClassDesc_t *); // r13
  ScriptClassDesc_t *Script; // rax

  if ( hTarget != 0 )
  {
    v3 = *(*g_pScriptVM + 208LL);
    Script = GetScriptDesc<CEntityInstance>(0);
    v3(g_pScriptVM, hTarget, Script);
  }
  return "CUSTOM ERROR";
}


// CDOTA_Item_Lua::Script_GetCustomCastErrorLocation  (line 75, @0x00000000025c5870, libserver.so)
// strings: "CUSTOM ERROR"
const char *__fastcall CDOTA_Item_Lua::Script_GetCustomCastErrorLocation(
        CDOTA_Item_Lua *const this,
        const Vector *const vLocation)
{
  return "CUSTOM ERROR";
}


// CDOTA_Item_Lua::Script_GetCustomCastError  (line 76, @0x00000000025c5880, libserver.so)
// strings: "CUSTOM ERROR"
const char *__fastcall CDOTA_Item_Lua::Script_GetCustomCastError(CDOTA_Item_Lua *const this)
{
  return "CUSTOM ERROR";
}


// CDOTA_Item_Lua::Script_OnToggle  (line 105, @0x00000000025c7f70, libserver.so)
// calls: CDOTABaseAbility::OnToggle
void __fastcall CDOTA_Item_Lua::Script_OnToggle(CDOTA_Item_Lua *const this)
{
  CDOTABaseAbility::OnToggle(this);
}


// CDOTA_Item_Lua::Script_OnSpellStart  (line 106, @0x00000000025c5890, libserver.so)
void __fastcall CDOTA_Item_Lua::Script_OnSpellStart(CDOTA_Item_Lua *const this)
{
  ;
}


// CDOTA_Item_Lua::Script_OnAbilityPhaseStart  (line 107, @0x00000000025c7fa0, libserver.so)
// calls: CDOTABaseAbility::OnAbilityPhaseStart
bool __fastcall CDOTA_Item_Lua::Script_OnAbilityPhaseStart(CDOTA_Item_Lua *const this)
{
  return CDOTABaseAbility::OnAbilityPhaseStart(this);
}


// CDOTA_Item_Lua::Script_OnAbilityPhaseInterrupted  (line 108, @0x00000000025c7fd0, libserver.so)
// calls: CDOTABaseAbility::OnAbilityPhaseInterrupted
void __fastcall CDOTA_Item_Lua::Script_OnAbilityPhaseInterrupted(CDOTA_Item_Lua *const this)
{
  CDOTABaseAbility::OnAbilityPhaseInterrupted(this);
}


// CDOTA_Item_Lua::Script_OnChannelThink  (line 109, @0x00000000025c7fc0, libserver.so)
// calls: CDOTABaseAbility::OnChannelThink
void __fastcall CDOTA_Item_Lua::Script_OnChannelThink(CDOTA_Item_Lua *const this, double a2, float flInterval)
{
  CDOTABaseAbility::OnChannelThink(this, a2, flInterval);
}


// CDOTA_Item_Lua::Script_OnChannelFinish  (line 110, @0x00000000025c58a0, libserver.so)
void __fastcall CDOTA_Item_Lua::Script_OnChannelFinish(CDOTA_Item_Lua *const this, bool bInterrupted)
{
  ;
}


// CDOTA_Item_Lua::Script_OnProjectileHit  (line 111, @0x00000000025ca5e0, libserver.so)  // inlines: HScriptToEntity<CBaseEntity>, ToEnt
// calls: GetScriptDesc<CEntityInstance>
bool __fastcall CDOTA_Item_Lua::Script_OnProjectileHit(
        CDOTA_Item_Lua *const this,
        HSCRIPT hTarget,
        const Vector *const vLocation)
{
  void (__fastcall *v4)(IScriptVM *, HSCRIPT, ScriptClassDesc_t *); // r13
  ScriptClassDesc_t *Script; // rax

  if ( hTarget != 0 )
  {
    v4 = *(*g_pScriptVM + 208LL);
    Script = GetScriptDesc<CEntityInstance>(0);
    v4(g_pScriptVM, hTarget, Script);
  }
  return 0;
}


// CDOTA_Item_Lua::Script_OnProjectileThink  (line 112, @0x00000000025c58b0, libserver.so)
void __fastcall CDOTA_Item_Lua::Script_OnProjectileThink(CDOTA_Item_Lua *const this, const Vector *const vLocation)
{
  ;
}


// CDOTA_Item_Lua::Script_OnOwnerSpawned  (line 113, @0x00000000025c7f80, libserver.so)
// calls: CDOTABaseAbility::OnOwnerSpawned
void __fastcall CDOTA_Item_Lua::Script_OnOwnerSpawned(CDOTA_Item_Lua *const this)
{
  CDOTABaseAbility::OnOwnerSpawned(this);
}


// CDOTA_Item_Lua::Script_OnOwnerDied  (line 114, @0x00000000025d0c90, libserver.so)
// calls: CDOTA_Item::OnOwnerDied
void __fastcall CDOTA_Item_Lua::Script_OnOwnerDied(CDOTA_Item_Lua *const this)
{
  CDOTA_Item::OnOwnerDied(this);
}


// CDOTA_Item_Lua::Script_OnUpgrade  (line 115, @0x00000000025c7f90, libserver.so)
// calls: CDOTABaseAbility::OnUpgrade
void __fastcall CDOTA_Item_Lua::Script_OnUpgrade(CDOTA_Item_Lua *const this)
{
  CDOTABaseAbility::OnUpgrade(this);
}


// CDOTA_Item_Lua::Script_OnHeroLevelUp  (line 116, @0x00000000025c58c0, libserver.so)
void __fastcall CDOTA_Item_Lua::Script_OnHeroLevelUp(CDOTA_Item_Lua *const this)
{
  ;
}


// CDOTA_Item_Lua::Script_OnInventoryContentsChanged  (line 117, @0x00000000025c7900, libserver.so)  // inlines: OnInventoryContentsChanged
// calls: CDOTABaseAbility::InitBaseValues
void __fastcall CDOTA_Item_Lua::Script_OnInventoryContentsChanged(CDOTA_Item_Lua *const this)
{
  CDOTABaseAbility::InitBaseValues(this);
}


// CDOTA_Item_Lua::Script_OnItemEquipped  (line 118, @0x00000000025cb020, libserver.so)  // inlines: HScriptToEntity<CBaseEntity>, ToDOTAAbility, ToDOTAItem, ToEnt
// calls: GetScriptDesc<CEntityInstance>, __dynamic_cast
void __fastcall CDOTA_Item_Lua::Script_OnItemEquipped(CDOTA_Item_Lua *const this, HSCRIPT hItem)
{
  __int64 (__fastcall *v3)(IScriptVM *, HSCRIPT, ScriptClassDesc_t *); // r13
  ScriptClassDesc_t *Script; // rax
  const void *v5; // rax
  void *v6; // rax

  if ( hItem != 0 )
  {
    v3 = *(*g_pScriptVM + 208LL);
    Script = GetScriptDesc<CEntityInstance>(0);
    v5 = v3(g_pScriptVM, hItem, Script);
    if ( v5 != 0 )
    {
      v6 = __dynamic_cast(v5, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTABaseAbility, 0);
      if ( v6 != 0 )
        (*(*v6 + 1784LL))(v6);
    }
  }
}


// CDOTA_Item_Lua::Script_OnHeroCalculateStatBonus  (line 119, @0x00000000025c58d0, libserver.so)
void __fastcall CDOTA_Item_Lua::Script_OnHeroCalculateStatBonus(CDOTA_Item_Lua *const this)
{
  ;
}


// CDOTA_Item_Lua::Script_OnStolen  (line 120, @0x00000000025ca680, libserver.so)  // inlines: HScriptToEntity<CBaseEntity>, ToEnt
// calls: GetScriptDesc<CEntityInstance>
void __fastcall CDOTA_Item_Lua::Script_OnStolen(CDOTA_Item_Lua *const this, HSCRIPT hSourceAbility)
{
  void (__fastcall *v3)(IScriptVM *, HSCRIPT, ScriptClassDesc_t *); // r13
  ScriptClassDesc_t *Script; // rax

  if ( hSourceAbility != 0 )
  {
    v3 = *(*g_pScriptVM + 208LL);
    Script = GetScriptDesc<CEntityInstance>(0);
    v3(g_pScriptVM, hSourceAbility, Script);
  }
}


// CDOTA_Item_Lua::Script_OnUnStolen  (line 121, @0x00000000025c7fb0, libserver.so)
// calls: CDOTABaseAbility::OnUnStolen
void __fastcall CDOTA_Item_Lua::Script_OnUnStolen(CDOTA_Item_Lua *const this)
{
  CDOTABaseAbility::OnUnStolen(this);
}


// CDOTA_Item_Lua::Script_GetAssociatedPrimaryAbilities  (line 134, @0x00000000025c58e0, libserver.so)
const char *__fastcall CDOTA_Item_Lua::Script_GetAssociatedPrimaryAbilities(CDOTA_Item_Lua *const this)
{
  return 0;
}


// CDOTA_Item_Lua::Script_GetAssociatedSecondaryAbilities  (line 135, @0x00000000025c58f0, libserver.so)
const char *__fastcall CDOTA_Item_Lua::Script_GetAssociatedSecondaryAbilities(CDOTA_Item_Lua *const this)
{
  return 0;
}


// CDOTA_Item_Lua::Script_GetIntrinsicModifierName  (line 136, @0x00000000025c5900, libserver.so)
const char *__fastcall CDOTA_Item_Lua::Script_GetIntrinsicModifierName(CDOTA_Item_Lua *const this)
{
  return 0;
}


// CDOTA_Item_Lua::Script_IsStealable  (line 137, @0x00000000025c5910, libserver.so)
bool __fastcall CDOTA_Item_Lua::Script_IsStealable(CDOTA_Item_Lua *const this)
{
  return 1;
}


// CDOTA_Item_Lua::Script_IsHiddenWhenStolen  (line 138, @0x00000000025c5920, libserver.so)
bool __fastcall CDOTA_Item_Lua::Script_IsHiddenWhenStolen(CDOTA_Item_Lua *const this)
{
  return 0;
}


// CDOTA_Item_Lua::Script_IsRefreshable  (line 139, @0x00000000025c5930, libserver.so)
bool __fastcall CDOTA_Item_Lua::Script_IsRefreshable(CDOTA_Item_Lua *const this)
{
  return 1;
}


// CDOTA_Item_Lua::Script_IsHiddenAbilityCastable  (line 140, @0x00000000025c7880, libserver.so)  // inlines: GetAbilityData, IsHiddenAbilityCastable
// calls: CDOTABaseAbility::LoadAbilityData
bool __fastcall CDOTA_Item_Lua::Script_IsHiddenAbilityCastable(CDOTA_Item_Lua *const this)
{
  DOTAAbilityData_t *m_pAbilityData; // rax

  m_pAbilityData = this->m_pAbilityData;
  if ( m_pAbilityData == 0 )
  {
    CDOTABaseAbility::LoadAbilityData(this, 0);
    m_pAbilityData = this->m_pAbilityData;
  }
  return (*(m_pAbilityData + 377) & 0x20) != 0;
}


// CDOTA_Item_Lua::Script_ProcsMagicStick  (line 141, @0x00000000025c5940, libserver.so)
bool __fastcall CDOTA_Item_Lua::Script_ProcsMagicStick(CDOTA_Item_Lua *const this)
{
  return 0;
}


// CDOTA_Item_Lua::Script_GetConceptRecipientType  (line 145, @0x00000000025c5950, libserver.so)
int __fastcall CDOTA_Item_Lua::Script_GetConceptRecipientType(CDOTA_Item_Lua *const this)
{
  return 0;
}


// CDOTA_Item_Lua::Script_SpeakTrigger  (line 146, @0x00000000025c5960, libserver.so)
int __fastcall CDOTA_Item_Lua::Script_SpeakTrigger(CDOTA_Item_Lua *const this)
{
  return 1;
}


// CDOTA_Item_Lua::Script_GetPlaybackRateOverride  (line 149, @0x00000000025c5970, libserver.so)
float __fastcall CDOTA_Item_Lua::Script_GetPlaybackRateOverride(CDOTA_Item_Lua *const this)
{
  return 1.0;
}


