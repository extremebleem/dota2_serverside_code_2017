
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Item_EmptyBottle::~CDOTA_Item_EmptyBottle  (line 16, @0x0000000002da1ae0, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_EmptyBottle::~CDOTA_Item_EmptyBottle(CDOTA_Item_EmptyBottle *const this)
{
  this->_vptr_IHandleEntity = &off_46DCB50;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_EmptyBottle::~CDOTA_Item_EmptyBottle  (line 16, @0x0000000002da1b00, libserver.so)  // inlines: ~CDOTA_Item_EmptyBottle
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_EmptyBottle::~CDOTA_Item_EmptyBottle(CDOTA_Item_EmptyBottle *const this)
{
  this->_vptr_IHandleEntity = &off_46DCB50;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_EmptyBottle::Schema_DynamicBinding  (line 18, @0x0000000002d9eaa0, libserver.so)
// globals: CDOTA_Item_EmptyBottle::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_EmptyBottle::Schema_DynamicBinding(
        const CDOTA_Item_EmptyBottle *const this)
{
  return CDOTA_Item_EmptyBottle::s_pSchemaBinding;
}


// CDOTA_Item_EmptyBottle::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 18, @0x0000000002d9eab0, libserver.so)
// globals: CDOTA_Item_EmptyBottle::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_EmptyBottle::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_EmptyBottle::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_EmptyBottle::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_EmptyBottle::CEntityInstanceEntityClass::DestructInstance  (line 18, @0x0000000002d9eac0, libserver.so)  // inlines: Destruct<CDOTA_Item_EmptyBottle>
void __fastcall CDOTA_Item_EmptyBottle::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_EmptyBottle::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_EmptyBottle::CEntityInstanceEntityClass::FreeInstance  (line 18, @0x0000000002d9eae0, libserver.so)
void __fastcall CDOTA_Item_EmptyBottle::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_EmptyBottle::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_EmptyBottle::CEntityInstanceEntityClass::CanAllocate  (line 18, @0x0000000002d9eb00, libserver.so)
bool __fastcall CDOTA_Item_EmptyBottle::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_EmptyBottle::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_EmptyBottle::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 18, @0x0000000002d9eb10, libserver.so)
// globals: CDOTA_Item_EmptyBottle::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_EmptyBottle::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_EmptyBottle::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_EmptyBottle::s_pSchemaBinding;
}


// CDOTA_Item_EmptyBottle::CEntityInstanceEntityClass::AllocateInstance  (line 18, @0x0000000002da04b0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_EmptyBottle::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_EmptyBottle::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1008);
  memset(v1, 0, 0x3F0u);
  return v1;
}


// CDOTA_Item_EmptyBottle::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 18, @0x0000000002da3a40, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_EmptyBottle::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_EmptyBottle::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_EmptyBottle::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 18, @0x0000000002da3a60, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_EmptyBottle::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_EmptyBottle::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_EmptyBottle::GetEntityClassInternal  (line 18, @0x0000000002da6de0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_03.cpp
// strings: "item_bottle", "CDOTA_Item_EmptyBottle"
// globals: `guard variable for'CDOTA_Item_EmptyBottle::GetEntityClassInternal(void)::g_EntityCDOTA_Item_EmptyBottleClass, CDOTA_Item_EmptyBottle::GetEntityClassInternal(void)::g_EntityCDOTA_Item_EmptyBottleClass, __dso_handle, CDOTA_Item_EmptyBottle::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_EmptyBottle::GetEntityClassInfo(void)::g_EntityCDOTA_Item_EmptyBottleClassInfo, CDOTA_Item_EmptyBottle::GetEntityClassInfo(void)::g_EntityCDOTA_Item_EmptyBottleClassInfo
CEntityClass *__cdecl CDOTA_Item_EmptyBottle::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_EmptyBottle::GetEntityClassInternal(void)::g_EntityCDOTA_Item_EmptyBottleClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_EmptyBottle::GetEntityClassInternal(void)::g_EntityCDOTA_Item_EmptyBottleClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_EmptyBottle::GetEntityClassInternal(void)::g_EntityCDOTA_Item_EmptyBottleClass);
    CDOTA_Item_EmptyBottle::GetEntityClassInternal(void)::g_EntityCDOTA_Item_EmptyBottleClass._vptr_CEntityClass = off_46DCAD0;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_EmptyBottle::GetEntityClassInternal(void)::g_EntityCDOTA_Item_EmptyBottleClass);
    __cxa_atexit(
      CDOTA_Item_EmptyBottle::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_EmptyBottle::GetEntityClassInternal(void)::g_EntityCDOTA_Item_EmptyBottleClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_EmptyBottleClass != 0 )
    return &CDOTA_Item_EmptyBottle::GetEntityClassInternal(void)::g_EntityCDOTA_Item_EmptyBottleClass;
  if ( `guard variable for'CDOTA_Item_EmptyBottle::GetEntityClassInfo(void)::g_EntityCDOTA_Item_EmptyBottleClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_EmptyBottle::GetEntityClassInfo(void)::g_EntityCDOTA_Item_EmptyBottleClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_EmptyBottle::GetEntityClassInfo(void)::g_EntityCDOTA_Item_EmptyBottleClassInfo,
      "CDOTA_Item_EmptyBottle",
      "item_bottle",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_EmptyBottle::GetEntityClassInfo(void)::g_EntityCDOTA_Item_EmptyBottleClassInfo);
  }
  CDOTA_Item_EmptyBottle::GetEntityClassInternal(void)::g_EntityCDOTA_Item_EmptyBottleClass.m_pClassInfo = &CDOTA_Item_EmptyBottle::GetEntityClassInfo(void)::g_EntityCDOTA_Item_EmptyBottleClassInfo;
  CDOTA_Item_EmptyBottle::GetEntityClassInternal(void)::g_EntityCDOTA_Item_EmptyBottleClass.m_pBaseClassInfo = CDOTA_Item_EmptyBottle::GetEntityClassInfo(void)::g_EntityCDOTA_Item_EmptyBottleClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_EmptyBottleClass = &CDOTA_Item_EmptyBottle::GetEntityClassInternal(void)::g_EntityCDOTA_Item_EmptyBottleClass;
  CDOTA_Item_EmptyBottle::GetEntityClassInfo(void)::g_EntityCDOTA_Item_EmptyBottleClassInfo.m_pClass = &CDOTA_Item_EmptyBottle::GetEntityClassInternal(void)::g_EntityCDOTA_Item_EmptyBottleClass;
  CDOTA_Item_EmptyBottle::GetEntityClassInternal(void)::g_EntityCDOTA_Item_EmptyBottleClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_EmptyBottleClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_EmptyBottle::GetEntityClassInternal(void)::g_EntityCDOTA_Item_EmptyBottleClass;
}


// CDOTA_Item_EmptyBottle::CEntityInstanceEntityClass::ConstructInstance  (line 18, @0x0000000002da6f30, libserver.so)  // inlines: Construct<CDOTA_Item_EmptyBottle>
// calls: CDOTA_Item_EmptyBottle::CDOTA_Item_EmptyBottle
CEntityInstance *__fastcall CDOTA_Item_EmptyBottle::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_EmptyBottle::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
    CDOTA_Item_EmptyBottle::CDOTA_Item_EmptyBottle(p);
  return p;
}


// CDOTA_Item_EmptyBottle::GetIntrinsicModifierName  (line 27, @0x0000000002d9eb20, libserver.so)
// strings: "modifier_item_empty_bottle"
const char *__fastcall CDOTA_Item_EmptyBottle::GetIntrinsicModifierName(CDOTA_Item_EmptyBottle *const this)
{
  return "modifier_item_empty_bottle";
}


// CDOTA_Item_EmptyBottle::GetAllowedTargetBehavior  (line 33, @0x0000000002d9eb30, libserver.so)  // inlines: GetAllowedTargetBehavior
int __fastcall CDOTA_Item_EmptyBottle::GetAllowedTargetBehavior(CDOTA_Item_EmptyBottle *const this)
{
  return (*(this->_vptr_IHandleEntity + 251))(this) | 8;
}


// CDOTA_Item_EmptyBottle::CausesAutoattack  (line 38, @0x0000000002d9eb50, libserver.so)
bool __fastcall CDOTA_Item_EmptyBottle::CausesAutoattack(CDOTA_Item_EmptyBottle *const this)
{
  return 0;
}


// CDOTA_Item_EmptyBottle::ProRatesChargesWhenSelling  (line 41, @0x0000000002d9eb60, libserver.so)
bool __fastcall CDOTA_Item_EmptyBottle::ProRatesChargesWhenSelling(CDOTA_Item_EmptyBottle *const this)
{
  return 0;
}


// CDOTA_Item_EmptyBottle::IsDroppable  (line 49, @0x0000000002d9eb70, libserver.so)
bool __fastcall CDOTA_Item_EmptyBottle::IsDroppable(CDOTA_Item_EmptyBottle *const this)
{
  return this->m_iStoredRuneType.m_Value == -1;
}


