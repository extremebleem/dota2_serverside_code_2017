
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Ability_Pudge_FleshHeap::~CDOTA_Ability_Pudge_FleshHeap  (line 21, @0x0000000002a17da0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Pudge_FleshHeap::~CDOTA_Ability_Pudge_FleshHeap(
        CDOTA_Ability_Pudge_FleshHeap *const this)
{
  this->_vptr_IHandleEntity = &off_437DD90;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Pudge_FleshHeap::~CDOTA_Ability_Pudge_FleshHeap  (line 21, @0x0000000002a17dc0, libserver.so)  // inlines: ~CDOTA_Ability_Pudge_FleshHeap
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Pudge_FleshHeap::~CDOTA_Ability_Pudge_FleshHeap(
        CDOTA_Ability_Pudge_FleshHeap *const this)
{
  this->_vptr_IHandleEntity = &off_437DD90;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Pudge_FleshHeap::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 23, @0x0000000002624d80, libserver.so)
// globals: CDOTA_Ability_Pudge_FleshHeap::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Pudge_FleshHeap::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Pudge_FleshHeap::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Pudge_FleshHeap::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Pudge_FleshHeap::CEntityInstanceEntityClass::DestructInstance  (line 23, @0x0000000002624d90, libserver.so)  // inlines: Destruct<CDOTA_Ability_Pudge_FleshHeap>
void __fastcall CDOTA_Ability_Pudge_FleshHeap::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Pudge_FleshHeap::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Pudge_FleshHeap::CEntityInstanceEntityClass::FreeInstance  (line 23, @0x0000000002624db0, libserver.so)
void __fastcall CDOTA_Ability_Pudge_FleshHeap::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Pudge_FleshHeap::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Pudge_FleshHeap::CEntityInstanceEntityClass::CanAllocate  (line 23, @0x0000000002624dd0, libserver.so)
bool __fastcall CDOTA_Ability_Pudge_FleshHeap::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Pudge_FleshHeap::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Pudge_FleshHeap::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 23, @0x0000000002624de0, libserver.so)
// globals: CDOTA_Ability_Pudge_FleshHeap::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Pudge_FleshHeap::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Pudge_FleshHeap::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Pudge_FleshHeap::s_pSchemaBinding;
}


// CDOTA_Ability_Pudge_FleshHeap::CEntityInstanceEntityClass::AllocateInstance  (line 23, @0x000000000262dc40, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Pudge_FleshHeap::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Pudge_FleshHeap::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 920);
  memset(v1, 0, 0x398u);
  return v1;
}


// CDOTA_Ability_Pudge_FleshHeap::CEntityInstanceEntityClass::ConstructInstance  (line 23, @0x000000000262f110, libserver.so)  // inlines: CDOTA_Ability_Pudge_FleshHeap, Construct<CDOTA_Ability_Pudge_FleshHeap>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Pudge_FleshHeap::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Pudge_FleshHeap::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *(p + 228) = 0;
    *p = &off_437DD90;
  }
  return p;
}


// CDOTA_Ability_Pudge_FleshHeap::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 23, @0x00000000026344d0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Pudge_FleshHeap::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Pudge_FleshHeap::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Pudge_FleshHeap::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 23, @0x00000000026344f0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Pudge_FleshHeap::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Pudge_FleshHeap::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Pudge_FleshHeap::GetEntityClassInternal  (line 23, @0x000000000263b5f0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_dota_05.cpp
// strings: "CDOTA_Ability_Pudge_FleshHeap"
// globals: `guard variable for'CDOTA_Ability_Pudge_FleshHeap::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Pudge_FleshHeapClass, CDOTA_Ability_Pudge_FleshHeap::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Pudge_FleshHeapClass, __dso_handle, CDOTA_Ability_Pudge_FleshHeap::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Pudge_FleshHeap::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Pudge_FleshHeapClassInfo, CDOTA_Ability_Pudge_FleshHeap::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Pudge_FleshHeapClassInfo
CEntityClass *__cdecl CDOTA_Ability_Pudge_FleshHeap::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Pudge_FleshHeap::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Pudge_FleshHeapClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Pudge_FleshHeap::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Pudge_FleshHeapClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Pudge_FleshHeap::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Pudge_FleshHeapClass);
    CDOTA_Ability_Pudge_FleshHeap::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Pudge_FleshHeapClass._vptr_CEntityClass = off_4116310;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Pudge_FleshHeap::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Pudge_FleshHeapClass);
    __cxa_atexit(
      CDOTA_Ability_Pudge_FleshHeap::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Pudge_FleshHeap::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Pudge_FleshHeapClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Pudge_FleshHeapClass != 0 )
    return &CDOTA_Ability_Pudge_FleshHeap::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Pudge_FleshHeapClass;
  if ( `guard variable for'CDOTA_Ability_Pudge_FleshHeap::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Pudge_FleshHeapClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Pudge_FleshHeap::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Pudge_FleshHeapClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Pudge_FleshHeap::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Pudge_FleshHeapClassInfo,
      "CDOTA_Ability_Pudge_FleshHeap",
      "pudge_flesh_heap",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Pudge_FleshHeap::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Pudge_FleshHeapClassInfo);
  }
  CDOTA_Ability_Pudge_FleshHeap::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Pudge_FleshHeapClass.m_pClassInfo = &CDOTA_Ability_Pudge_FleshHeap::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Pudge_FleshHeapClassInfo;
  CDOTA_Ability_Pudge_FleshHeap::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Pudge_FleshHeapClass.m_pBaseClassInfo = CDOTA_Ability_Pudge_FleshHeap::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Pudge_FleshHeapClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Pudge_FleshHeapClass = &CDOTA_Ability_Pudge_FleshHeap::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Pudge_FleshHeapClass;
  CDOTA_Ability_Pudge_FleshHeap::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Pudge_FleshHeapClassInfo.m_pClass = &CDOTA_Ability_Pudge_FleshHeap::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Pudge_FleshHeapClass;
  CDOTA_Ability_Pudge_FleshHeap::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Pudge_FleshHeapClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Pudge_FleshHeapClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Pudge_FleshHeap::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Pudge_FleshHeapClass;
}


// CDOTA_Ability_Pudge_FleshHeap::GetEntityClass  (line 23, @0x0000000002a0ba20, libserver.so)
CEntityClass *__cdecl CDOTA_Ability_Pudge_FleshHeap::GetEntityClass()
{
  return g_pEntityCDOTA_Ability_Pudge_FleshHeapClass;
}


// CDOTA_Ability_Pudge_FleshHeap::Schema_DynamicBinding  (line 23, @0x0000000002a191f0, libserver.so)
// calls: CDOTA_Ability_Pudge_FleshHeap::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Pudge_FleshHeap::Schema_DynamicBinding(
        const CDOTA_Ability_Pudge_FleshHeap *const this)
{
  CDOTA_Ability_Pudge_FleshHeap::Schema_VerifyBindingIsRegistered();
  return CDOTA_Ability_Pudge_FleshHeap::s_pSchemaBinding;
}


// CDOTA_Ability_Pudge_FleshHeap::GetIntrinsicModifierName  (line 33, @0x0000000002a0ba30, libserver.so)
// strings: "modifier_pudge_flesh_heap"
const char *__fastcall CDOTA_Ability_Pudge_FleshHeap::GetIntrinsicModifierName(
        CDOTA_Ability_Pudge_FleshHeap *const this)
{
  return "modifier_pudge_flesh_heap";
}


// CDOTA_Modifier_SkeletonKing_Reincarnation_Scepter_Active::~CDOTA_Modifier_SkeletonKing_Reincarnation_Scepter_Active  (line 50, @0x0000000002a65680, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_SkeletonKing_Reincarnation_Scepter_Active::~CDOTA_Modifier_SkeletonKing_Reincarnation_Scepter_Active(
        CDOTA_Modifier_SkeletonKing_Reincarnation_Scepter_Active *const this)
{
  this->_vptr_CDOTA_Buff = &off_439AD10;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_SkeletonKing_Reincarnation_Scepter_Active::~CDOTA_Modifier_SkeletonKing_Reincarnation_Scepter_Active  (line 50, @0x0000000002a656a0, libserver.so)  // inlines: ~CDOTA_Modifier_SkeletonKing_Reincarnation_Scepter_Active
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_SkeletonKing_Reincarnation_Scepter_Active::~CDOTA_Modifier_SkeletonKing_Reincarnation_Scepter_Active(
        CDOTA_Modifier_SkeletonKing_Reincarnation_Scepter_Active *const this)
{
  this->_vptr_CDOTA_Buff = &off_439AD10;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_SkeletonKing_Reincarnation_Scepter_Active::IsHidden  (line 56, @0x0000000002a60740, libserver.so)
bool __fastcall CDOTA_Modifier_SkeletonKing_Reincarnation_Scepter_Active::IsHidden(
        CDOTA_Modifier_SkeletonKing_Reincarnation_Scepter_Active *const this)
{
  return 0;
}


// CDOTA_Modifier_SkeletonKing_Reincarnation_Scepter_Active::IsPurgable  (line 57, @0x0000000002a60750, libserver.so)
bool __fastcall CDOTA_Modifier_SkeletonKing_Reincarnation_Scepter_Active::IsPurgable(
        CDOTA_Modifier_SkeletonKing_Reincarnation_Scepter_Active *const this)
{
  return 0;
}


// CDOTA_Modifier_SkeletonKing_Reincarnation_Scepter_Active::GetStatusEffectName  (line 66, @0x0000000002a60760, libserver.so)
// strings: "particles/status_fx/status_effect_wraithking_ghosts.vpcf"
const char *__fastcall CDOTA_Modifier_SkeletonKing_Reincarnation_Scepter_Active::GetStatusEffectName(
        CDOTA_Modifier_SkeletonKing_Reincarnation_Scepter_Active *const this)
{
  return "particles/status_fx/status_effect_wraithking_ghosts.vpcf";
}


// CDOTA_Modifier_SkeletonKing_Reincarnation_Scepter_Active::StatusEffectPriority  (line 67, @0x0000000002a60770, libserver.so)
int __fastcall CDOTA_Modifier_SkeletonKing_Reincarnation_Scepter_Active::StatusEffectPriority(
        CDOTA_Modifier_SkeletonKing_Reincarnation_Scepter_Active *const this)
{
  return 20010;
}


// CDOTA_Modifier_Legion_Commander_Duel::~CDOTA_Modifier_Legion_Commander_Duel  (line 81, @0x0000000002c92230, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Legion_Commander_Duel::~CDOTA_Modifier_Legion_Commander_Duel(
        CDOTA_Modifier_Legion_Commander_Duel *const this)
{
  this->_vptr_CDOTA_Buff = &off_45C9F30;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Legion_Commander_Duel::~CDOTA_Modifier_Legion_Commander_Duel  (line 81, @0x0000000002c92250, libserver.so)  // inlines: ~CDOTA_Modifier_Legion_Commander_Duel
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Legion_Commander_Duel::~CDOTA_Modifier_Legion_Commander_Duel(
        CDOTA_Modifier_Legion_Commander_Duel *const this)
{
  this->_vptr_CDOTA_Buff = &off_45C9F30;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Legion_Commander_Duel::IsDebuff  (line 86, @0x0000000002c899d0, libserver.so)
bool __fastcall CDOTA_Modifier_Legion_Commander_Duel::IsDebuff(CDOTA_Modifier_Legion_Commander_Duel *const this)
{
  return 1;
}


// CDOTA_Modifier_Legion_Commander_Duel::GetStatusEffectName  (line 92, @0x0000000002c899e0, libserver.so)
// strings: "particles/status_fx/status_effect_legion_commander_duel.vpcf"
const char *__fastcall CDOTA_Modifier_Legion_Commander_Duel::GetStatusEffectName(
        CDOTA_Modifier_Legion_Commander_Duel *const this)
{
  return "particles/status_fx/status_effect_legion_commander_duel.vpcf";
}


// CDOTA_Modifier_Legion_Commander_Duel::StatusEffectPriority  (line 93, @0x0000000002c899f0, libserver.so)
int __fastcall CDOTA_Modifier_Legion_Commander_Duel::StatusEffectPriority(
        CDOTA_Modifier_Legion_Commander_Duel *const this)
{
  return 50;
}


// CDOTA_Modifier_Legion_Commander_Duel::IsPurgable  (line 97, @0x0000000002c89a00, libserver.so)
bool __fastcall CDOTA_Modifier_Legion_Commander_Duel::IsPurgable(CDOTA_Modifier_Legion_Commander_Duel *const this)
{
  return 0;
}


// CDOTA_Modifier_Legion_Commander_Duel::IsPurgeException  (line 98, @0x0000000002c89a10, libserver.so)
bool __fastcall CDOTA_Modifier_Legion_Commander_Duel::IsPurgeException(
        CDOTA_Modifier_Legion_Commander_Duel *const this)
{
  return 0;
}


// CDOTA_Modifier_Legion_Commander_Duel::GetAttributes  (line 107, @0x0000000002c93ce0, libserver.so)
// calls: CDOTA_Buff::GetAttributes
int __fastcall CDOTA_Modifier_Legion_Commander_Duel::GetAttributes(CDOTA_Modifier_Legion_Commander_Duel *const this)
{
  return CDOTA_Buff::GetAttributes(this) | 2;
}


// CDOTA_Modifier_Legion_Commander_Duel::GetPriority  (line 110, @0x0000000002c89a20, libserver.so)
int __fastcall CDOTA_Modifier_Legion_Commander_Duel::GetPriority(CDOTA_Modifier_Legion_Commander_Duel *const this)
{
  return 2;
}


