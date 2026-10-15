
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CBreakableProp::~CBreakableProp  (line 36, @0x0000000001ea1f40, libserver.so)  // inlines: ~CBaseAnimating, ~CBaseProp
// calls: CHitboxComponent::~CHitboxComponent, CBaseModelEntity::~CBaseModelEntity
// callers: CDevtestHierarchy::CDevtestHierarchy, CBasePropDoor::CBasePropDoor
void __fastcall CBreakableProp::~CBreakableProp(CBreakableProp *const this)
{
  CHitboxComponent::Storage_t *p_m_CHitboxComponent; // rdi

  p_m_CHitboxComponent = &this->m_CHitboxComponent;
  p_m_CHitboxComponent[4].m_pHitGroupPriorities = &off_3FF0E98;
  *&p_m_CHitboxComponent[4].m_nHitboxHandle = off_3FF0D80;
  *&p_m_CHitboxComponent[-72].m_nHitboxHandle = &off_3FED330;
  CHitboxComponent::~CHitboxComponent(p_m_CHitboxComponent);
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CBreakableProp::~CBreakableProp  (line 36, @0x0000000001ea2500, libserver.so)  // inlines: ~CBaseAnimating, ~CBaseProp, ~CBreakableProp
// calls: CHitboxComponent::~CHitboxComponent, CBaseModelEntity::~CBaseModelEntity, CBaseEntity::operator delete
void __fastcall CBreakableProp::~CBreakableProp(CBreakableProp *const this)
{
  CHitboxComponent::Storage_t *p_m_CHitboxComponent; // rdi

  p_m_CHitboxComponent = &this->m_CHitboxComponent;
  p_m_CHitboxComponent[4].m_pHitGroupPriorities = &off_3FF0E98;
  *&p_m_CHitboxComponent[4].m_nHitboxHandle = off_3FF0D80;
  *&p_m_CHitboxComponent[-72].m_nHitboxHandle = &off_3FED330;
  CHitboxComponent::~CHitboxComponent(p_m_CHitboxComponent);
  CBaseModelEntity::~CBaseModelEntity(this);
  CBaseEntity::operator delete(this);
}


// CBreakableProp::CEntityInstanceEntityClass::DestructInstance  (line 41, @0x0000000001ea1000, libserver.so)  // inlines: Destruct<CBreakableProp>
void __fastcall CBreakableProp::CEntityInstanceEntityClass::DestructInstance(
        CBreakableProp::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CBreakableProp::CEntityInstanceEntityClass::FreeInstance  (line 41, @0x0000000001ea1020, libserver.so)
void __fastcall CBreakableProp::CEntityInstanceEntityClass::FreeInstance(
        CBreakableProp::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CBreakableProp::CEntityInstanceEntityClass::CanAllocate  (line 41, @0x0000000001ea1040, libserver.so)
bool __fastcall CBreakableProp::CEntityInstanceEntityClass::CanAllocate(
        const CBreakableProp::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CBreakableProp::CEntityInstanceEntityClass::AllocateInstance  (line 41, @0x0000000001ea1b90, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CBreakableProp::CEntityInstanceEntityClass::AllocateInstance(
        CBreakableProp::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1616);
  memset(v1, 0, 0x650u);
  return v1;
}


// CBreakableProp::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 41, @0x0000000001ea2060, libserver.so)  // inlines: Schema_StaticBinding
// calls: CBreakableProp::Schema_VerifyBindingIsRegistered
const ISchemaBinding *__fastcall CBreakableProp::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CBreakableProp::CEntityInstanceEntityClass *const this)
{
  CBreakableProp::Schema_VerifyBindingIsRegistered();
  return CBreakableProp::s_pSchemaBinding;
}


// CBreakableProp::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 41, @0x0000000001ea2080, libserver.so)
// calls: CBreakableProp::CEntityInstanceEntityClass::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CBreakableProp::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CBreakableProp::CEntityInstanceEntityClass *const this)
{
  CBreakableProp::CEntityInstanceEntityClass::Schema_VerifyBindingIsRegistered();
  return CBreakableProp::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CBreakableProp::CEntityInstanceEntityClass::ConstructInstance  (line 41, @0x0000000001ea20a0, libserver.so)  // inlines: Construct<CBreakableProp>
// calls: CBreakableProp::CBreakableProp
CEntityInstance *__fastcall CBreakableProp::CEntityInstanceEntityClass::ConstructInstance(
        CBreakableProp::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
    CBreakableProp::CBreakableProp(p);
  return p;
}


// CBreakableProp::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 41, @0x0000000001ea2820, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CBreakableProp::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CBreakableProp::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CBreakableProp::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 41, @0x0000000001ea2840, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CBreakableProp::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CBreakableProp::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CBreakableProp::GetEntityClassInfo  (line 41, @0x0000000001fc4da0, libserver.so)  // inlines: GetEntityClassInfo
// calls: __cxa_guard_acquire, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_release, CBaseAnimating::GetEntityClassInfo
// callers: CBasePropDoor::GetEntityClassInternal, CDOTAPropCustomTexture::GetEntityClassInternal, CAdditionalWearable::GetEntityClassInternal
// strings: "CBreakableProp", "CBaseProp"
// globals: `guard variable for'CBreakableProp::GetEntityClassInfo(void)::g_EntityCBreakablePropClassInfo, CBreakableProp::GetEntityClassInfo(void)::g_EntityCBreakablePropClassInfo, `guard variable for'CBaseProp::GetEntityClassInfo(void)::g_EntityCBasePropClassInfo, CBaseProp::GetEntityClassInfo(void)::g_EntityCBasePropClassInfo
CEntityClassInfo *__cdecl CBreakableProp::GetEntityClassInfo()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CBreakableProp::GetEntityClassInfo(void)::g_EntityCBreakablePropClassInfo != 0 )
    return &CBreakableProp::GetEntityClassInfo(void)::g_EntityCBreakablePropClassInfo;
  if ( __cxa_guard_acquire(&`guard variable for'CBreakableProp::GetEntityClassInfo(void)::g_EntityCBreakablePropClassInfo) == 0 )
    return &CBreakableProp::GetEntityClassInfo(void)::g_EntityCBreakablePropClassInfo;
  if ( `guard variable for'CBaseProp::GetEntityClassInfo(void)::g_EntityCBasePropClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CBaseProp::GetEntityClassInfo(void)::g_EntityCBasePropClassInfo) != 0 )
  {
    EntityClassInfo = CBaseAnimating::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CBaseProp::GetEntityClassInfo(void)::g_EntityCBasePropClassInfo,
      "CBaseProp",
      0,
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CBaseProp::GetEntityClassInfo(void)::g_EntityCBasePropClassInfo);
  }
  CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
    &CBreakableProp::GetEntityClassInfo(void)::g_EntityCBreakablePropClassInfo,
    "CBreakableProp",
    0,
    0,
    &CBaseProp::GetEntityClassInfo(void)::g_EntityCBasePropClassInfo);
  __cxa_guard_release(&`guard variable for'CBreakableProp::GetEntityClassInfo(void)::g_EntityCBreakablePropClassInfo);
  return &CBreakableProp::GetEntityClassInfo(void)::g_EntityCBreakablePropClassInfo;
}


// CBreakableProp::GetEntityClassInternal  (line 41, @0x0000000001fcca70, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, InitScriptDesc, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, GetScriptDesc<CBaseAnimating>, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CBaseAnimating::GetEntityClassInfo, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_header_files_01.cpp
// strings: "CBreakableProp", "CBaseProp"
// globals: `guard variable for'CBreakableProp::GetEntityClassInternal(void)::g_EntityCBreakablePropClass, CBreakableProp::GetEntityClassInternal(void)::g_EntityCBreakablePropClass, __dso_handle, CBreakableProp::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CBreakableProp::GetEntityClassInfo(void)::g_EntityCBreakablePropClassInfo, CBreakableProp::GetEntityClassInfo(void)::g_EntityCBreakablePropClassInfo, `guard variable for'CBaseProp::GetEntityClassInfo(void)::g_EntityCBasePropClassInfo, CBaseProp::GetEntityClassInfo(void)::g_EntityCBasePropClassInfo
CEntityClass *__cdecl CBreakableProp::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CBreakableProp::GetEntityClassInternal(void)::g_EntityCBreakablePropClass == 0
    && __cxa_guard_acquire(&`guard variable for'CBreakableProp::GetEntityClassInternal(void)::g_EntityCBreakablePropClass) != 0 )
  {
    CEntityClass::CEntityClass(&CBreakableProp::GetEntityClassInternal(void)::g_EntityCBreakablePropClass);
    CBreakableProp::GetEntityClassInternal(void)::g_EntityCBreakablePropClass._vptr_CEntityClass = off_3FAF630;
    __cxa_guard_release(&`guard variable for'CBreakableProp::GetEntityClassInternal(void)::g_EntityCBreakablePropClass);
    __cxa_atexit(
      CBreakableProp::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CBreakableProp::GetEntityClassInternal(void)::g_EntityCBreakablePropClass,
      &_dso_handle);
  }
  if ( g_pEntityCBreakablePropClass != 0 )
    return &CBreakableProp::GetEntityClassInternal(void)::g_EntityCBreakablePropClass;
  if ( `guard variable for'CBreakableProp::GetEntityClassInfo(void)::g_EntityCBreakablePropClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CBreakableProp::GetEntityClassInfo(void)::g_EntityCBreakablePropClassInfo) != 0 )
  {
    if ( `guard variable for'CBaseProp::GetEntityClassInfo(void)::g_EntityCBasePropClassInfo == 0
      && __cxa_guard_acquire(&`guard variable for'CBaseProp::GetEntityClassInfo(void)::g_EntityCBasePropClassInfo) != 0 )
    {
      EntityClassInfo = CBaseAnimating::GetEntityClassInfo();
      CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
        &CBaseProp::GetEntityClassInfo(void)::g_EntityCBasePropClassInfo,
        "CBaseProp",
        0,
        0,
        EntityClassInfo);
      __cxa_guard_release(&`guard variable for'CBaseProp::GetEntityClassInfo(void)::g_EntityCBasePropClassInfo);
    }
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CBreakableProp::GetEntityClassInfo(void)::g_EntityCBreakablePropClassInfo,
      "CBreakableProp",
      0,
      0,
      &CBaseProp::GetEntityClassInfo(void)::g_EntityCBasePropClassInfo);
    __cxa_guard_release(&`guard variable for'CBreakableProp::GetEntityClassInfo(void)::g_EntityCBreakablePropClassInfo);
  }
  CBreakableProp::GetEntityClassInternal(void)::g_EntityCBreakablePropClass.m_pClassInfo = &CBreakableProp::GetEntityClassInfo(void)::g_EntityCBreakablePropClassInfo;
  CBreakableProp::GetEntityClassInternal(void)::g_EntityCBreakablePropClass.m_pBaseClassInfo = CBreakableProp::GetEntityClassInfo(void)::g_EntityCBreakablePropClassInfo.m_pBaseClassInfo;
  g_pEntityCBreakablePropClass = &CBreakableProp::GetEntityClassInternal(void)::g_EntityCBreakablePropClass;
  CBreakableProp::GetEntityClassInfo(void)::g_EntityCBreakablePropClassInfo.m_pClass = &CBreakableProp::GetEntityClassInternal(void)::g_EntityCBreakablePropClass;
  CBreakableProp::GetEntityClassInternal(void)::g_EntityCBreakablePropClass.m_pScriptClassDesc = GetScriptDesc<CBaseAnimating>(0);
  g_pEntityCBreakablePropClass->m_pComponentOverrides = 0;
  return &CBreakableProp::GetEntityClassInternal(void)::g_EntityCBreakablePropClass;
}


// CBreakableProp::GetEntityClass  (line 41, @0x000000000208ed40, libserver.so)
CEntityClass *__cdecl CBreakableProp::GetEntityClass()
{
  return g_pEntityCBreakablePropClass;
}


// CBreakableProp::Schema_DynamicBinding  (line 41, @0x0000000002090180, libserver.so)
// calls: CBreakableProp::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CBreakableProp::Schema_DynamicBinding(const CBreakableProp *const this)
{
  CBreakableProp::Schema_VerifyBindingIsRegistered();
  return CBreakableProp::s_pSchemaBinding;
}


// CBreakableProp::GetAutoAimRadius  (line 58, @0x0000000001ea1050, libserver.so)
float __fastcall CBreakableProp::GetAutoAimRadius(CBreakableProp *const this)
{
  return 24.0;
}


// CBreakableProp::OverridePropdata  (line 89, @0x000000000208ed50, libserver.so)
bool __fastcall CBreakableProp::OverridePropdata(CBreakableProp *const this)
{
  return 0;
}


// CBreakableProp::PreferredCarryAngles  (line 97, @0x0000000001ea1060, libserver.so)
QAngle __fastcall CBreakableProp::PreferredCarryAngles(CBreakableProp *const this)
{
  QAngle result; // 0:xmm0_8.8,8:xmm1_4.4

  *&result.x = *&this->m_preferredCarryAngles.x;
  result.z = this->m_preferredCarryAngles.z;
  return result;
}


// CBreakableProp::SetDmgModBullet  (line 125, @0x0000000001ea1090, libserver.so)
void __fastcall CBreakableProp::SetDmgModBullet(CBreakableProp *const this, float a2, float flDmgMod)
{
  this->m_flDmgModBullet = a2;
}


// CBreakableProp::SetDmgModClub  (line 126, @0x0000000001ea10b0, libserver.so)
void __fastcall CBreakableProp::SetDmgModClub(CBreakableProp *const this, float a2, float flDmgMod)
{
  this->m_flDmgModClub = a2;
}


// CBreakableProp::SetDmgModExplosive  (line 127, @0x0000000001ea10d0, libserver.so)
void __fastcall CBreakableProp::SetDmgModExplosive(CBreakableProp *const this, float a2, float flDmgMod)
{
  this->m_flDmgModExplosive = a2;
}


// CBreakableProp::SetDmgModFire  (line 128, @0x0000000001ea10f0, libserver.so)
void __fastcall CBreakableProp::SetDmgModFire(CBreakableProp *const this, float a2, float flDmgMod)
{
  this->m_flDmgModFire = a2;
}


// CBreakableProp::GetDmgModBullet  (line 129, @0x0000000001ea1110, libserver.so)
float __fastcall CBreakableProp::GetDmgModBullet(CBreakableProp *const this)
{
  return this->m_flDmgModBullet;
}


// CBreakableProp::GetDmgModClub  (line 130, @0x0000000001ea1130, libserver.so)
float __fastcall CBreakableProp::GetDmgModClub(CBreakableProp *const this)
{
  return this->m_flDmgModClub;
}


// CBreakableProp::GetDmgModExplosive  (line 131, @0x0000000001ea1150, libserver.so)
float __fastcall CBreakableProp::GetDmgModExplosive(CBreakableProp *const this)
{
  return this->m_flDmgModExplosive;
}


// CBreakableProp::GetDmgModFire  (line 132, @0x0000000001ea1170, libserver.so)
float __fastcall CBreakableProp::GetDmgModFire(CBreakableProp *const this)
{
  return this->m_flDmgModFire;
}


// CBreakableProp::SetExplosiveRadius  (line 133, @0x0000000001ea1190, libserver.so)
void __fastcall CBreakableProp::SetExplosiveRadius(CBreakableProp *const this, float a2, float flRadius)
{
  this->m_explodeRadius = a2;
}


// CBreakableProp::SetExplosiveDamage  (line 134, @0x0000000001ea11b0, libserver.so)
void __fastcall CBreakableProp::SetExplosiveDamage(CBreakableProp *const this, float a2, float flDamage)
{
  this->m_explodeDamage = a2;
}


// CBreakableProp::GetExplosiveRadius  (line 135, @0x0000000001ea11d0, libserver.so)
float __fastcall CBreakableProp::GetExplosiveRadius(CBreakableProp *const this)
{
  return this->m_explodeRadius;
}


// CBreakableProp::GetExplosiveDamage  (line 136, @0x0000000001ea11f0, libserver.so)
float __fastcall CBreakableProp::GetExplosiveDamage(CBreakableProp *const this)
{
  return this->m_explodeDamage;
}


// CBreakableProp::SetPhysicsDamageTable  (line 143, @0x0000000001ea1210, libserver.so)  // inlines: operator=
void __fastcall CBreakableProp::SetPhysicsDamageTable(CBreakableProp *const this, string_t iszTableName)
{
  this->m_iszPhysicsDamageTableName.u.m_Id = *iszTableName.u.m_Id;
}


// CBreakableProp::GetPhysicsDamageTable  (line 144, @0x0000000001ea1230, libserver.so)  // inlines: CUtlSymbolLarge
string_t __fastcall CBreakableProp::GetPhysicsDamageTable(UtlSymLargeId_t *a1, CBreakableProp *const this)
{
  *a1 = this->m_iszPhysicsDamageTableName.u.m_Id;
  return a1;
}


// CBreakableProp::SetBreakableModel  (line 145, @0x0000000001ea1260, libserver.so)  // inlines: operator=
void __fastcall CBreakableProp::SetBreakableModel(CBreakableProp *const this, string_t iszModel)
{
  this->m_iszBreakableModel.u.m_Id = *iszModel.u.m_Id;
}


// CBreakableProp::GetBreakableModel  (line 146, @0x0000000001ea1280, libserver.so)  // inlines: CUtlSymbolLarge
string_t __fastcall CBreakableProp::GetBreakableModel(UtlSymLargeId_t *a1, CBreakableProp *const this)
{
  *a1 = this->m_iszBreakableModel.u.m_Id;
  return a1;
}


// CBreakableProp::SetBreakableSkin  (line 147, @0x0000000001ea12b0, libserver.so)
void __fastcall CBreakableProp::SetBreakableSkin(CBreakableProp *const this, int iSkin)
{
  this->m_iBreakableSkin = iSkin;
}


// CBreakableProp::GetBreakableSkin  (line 148, @0x0000000001ea12d0, libserver.so)
int __fastcall CBreakableProp::GetBreakableSkin(CBreakableProp *const this)
{
  return this->m_iBreakableSkin;
}


// CBreakableProp::SetBreakableCount  (line 149, @0x0000000001ea12f0, libserver.so)
void __fastcall CBreakableProp::SetBreakableCount(CBreakableProp *const this, int iCount)
{
  this->m_iBreakableCount = iCount;
}


// CBreakableProp::GetBreakableCount  (line 150, @0x0000000001ea1310, libserver.so)
int __fastcall CBreakableProp::GetBreakableCount(CBreakableProp *const this)
{
  return this->m_iBreakableCount;
}


// CBreakableProp::SetMaxBreakableSize  (line 151, @0x0000000001ea1330, libserver.so)
void __fastcall CBreakableProp::SetMaxBreakableSize(CBreakableProp *const this, int iSize)
{
  this->m_iMaxBreakableSize = iSize;
}


// CBreakableProp::GetMaxBreakableSize  (line 152, @0x0000000001ea1350, libserver.so)
int __fastcall CBreakableProp::GetMaxBreakableSize(CBreakableProp *const this)
{
  return this->m_iMaxBreakableSize;
}


// CBreakableProp::SetPropDataBlocksLOS  (line 153, @0x0000000001ea20d0, libserver.so)
// calls: CBaseEntity::SetBlocksLOS
void __fastcall CBreakableProp::SetPropDataBlocksLOS(CBreakableProp *const this, bool bBlocksLOS)
{
  this->m_bBlockLOSSetByPropData = 1;
  CBaseEntity::SetBlocksLOS(this, bBlocksLOS);
}


// CBreakableProp::SetPropDataIsAIWalkable  (line 154, @0x0000000001ea2100, libserver.so)
// calls: CBaseEntity::SetAIWalkable
void __fastcall CBreakableProp::SetPropDataIsAIWalkable(CBreakableProp *const this, bool b)
{
  this->m_bIsWalkableSetByPropData = 1;
  CBaseEntity::SetAIWalkable(this, b);
}


// CBreakableProp::SetBasePropData  (line 155, @0x0000000001ea1370, libserver.so)  // inlines: operator=
void __fastcall CBreakableProp::SetBasePropData(CBreakableProp *const this, string_t iszBase)
{
  this->m_iszBasePropData.u.m_Id = *iszBase.u.m_Id;
}


// CBreakableProp::GetBasePropData  (line 156, @0x0000000001ea1390, libserver.so)  // inlines: CUtlSymbolLarge
string_t __fastcall CBreakableProp::GetBasePropData(UtlSymLargeId_t *a1, CBreakableProp *const this)
{
  *a1 = this->m_iszBasePropData.u.m_Id;
  return a1;
}


// CBreakableProp::SetInteraction  (line 157, @0x0000000001ea13c0, libserver.so)
void __fastcall CBreakableProp::SetInteraction(CBreakableProp *const this, propdata_interactions_t Interaction)
{
  this->m_iInteractions |= 1 << Interaction;
}


// CBreakableProp::HasInteraction  (line 159, @0x0000000001ea13f0, libserver.so)
bool __fastcall CBreakableProp::HasInteraction(CBreakableProp *const this, propdata_interactions_t Interaction)
{
  return (this->m_iInteractions >> Interaction) & 1;
}


// CBreakableProp::SetMultiplayerBreakMode  (line 160, @0x0000000001ea1420, libserver.so)
void __fastcall CBreakableProp::SetMultiplayerBreakMode(CBreakableProp *const this, mp_break_t mode)
{
  this->m_mpBreakMode = mode;
}


// CBreakableProp::GetMultiplayerBreakMode  (line 161, @0x0000000001ea1440, libserver.so)
mp_break_t __fastcall CBreakableProp::GetMultiplayerBreakMode(const CBreakableProp *const this)
{
  return this->m_mpBreakMode;
}


// CBreakableProp::GetMinHealthDamage  (line 162, @0x0000000001ea1460, libserver.so)
int __fastcall CBreakableProp::GetMinHealthDamage(CBreakableProp *const this)
{
  return this->m_iMinHealthDmg;
}


// CBreakableProp::SetPhysicsMode  (line 167, @0x0000000001ea2360, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<int>
void __fastcall CBreakableProp::SetPhysicsMode(CBreakableProp *const this, int iMode)
{
  if ( this->m_iPhysicsMode.m_Value != iMode )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1332, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_iPhysicsMode.m_Value = iMode;
  }
}


// CBreakableProp::GetPhysicsMode  (line 168, @0x0000000001ea1480, libserver.so)
int __fastcall CBreakableProp::GetPhysicsMode(CBreakableProp *const this)
{
  return this->m_iPhysicsMode.m_Value;
}


// CBreakableProp::OnSpawnBreakProp  (line 173, @0x0000000001ea14a0, libserver.so)
void __fastcall CBreakableProp::OnSpawnBreakProp(CBreakableProp *const this, CBreakableProp *pSpawnedProp)
{
  ;
}


// CBreakableProp::OnBreak  (line 178, @0x0000000001ea2130, libserver.so)
// calls: CEntityInstance::CallScriptFunction
void __fastcall CBreakableProp::OnBreak(
        CBreakableProp *const this,
        const Vector *const vecVelocity,
        const AngularImpulse *const angVel,
        CBaseEntity *pBreaker)
{
  CEntityInstance::CallScriptFunction(
    this,
    CallScriptFunctionBehavior_t::CALL_SCRIPT_FUNCTION_PRIVATE_ONLY,
    "OnBreak",
    0,
    0);
}


// CBreakableProp::InputEnablePuntSound  (line 238, @0x000000000208ed60, libserver.so)
void __fastcall CBreakableProp::InputEnablePuntSound(CBreakableProp *const this, inputdata_t *const inputdata)
{
  this->m_bUsePuntSound = 1;
}


// CBreakableProp::InputDisablePuntSound  (line 239, @0x000000000208ed70, libserver.so)
void __fastcall CBreakableProp::InputDisablePuntSound(CBreakableProp *const this, inputdata_t *const inputdata)
{
  this->m_bUsePuntSound = 0;
}


// CBreakableProp::HasPreferredCarryAnglesForPlayer  (line 332, @0x0000000001ea14b0, libserver.so)
bool __fastcall CBreakableProp::HasPreferredCarryAnglesForPlayer(CBreakableProp *const this, CBasePlayer *pPlayer)
{
  return (*(this->_vptr_IHandleEntity + 284))(this, 5);
}


