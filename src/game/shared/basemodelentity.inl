
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CBodyComponentBaseModelEntity::GetAnimationController  (line 36, @0x000000000208e940, libserver.so)
CSkeletonAnimationController *__fastcall CBodyComponentBaseModelEntity::GetAnimationController(
        CBodyComponentBaseModelEntity *const this)
{
  return 0;
}


// CBodyComponentBaseModelEntity::Schema_DynamicBinding  (line 39, @0x000000000208fcd0, libserver.so)
// calls: CBodyComponentBaseModelEntity::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CBodyComponentBaseModelEntity::Schema_DynamicBinding(
        const CBodyComponentBaseModelEntity *const this)
{
  CBodyComponentBaseModelEntity::Schema_VerifyBindingIsRegistered();
  return CBodyComponentBaseModelEntity::s_pSchemaBinding;
}


// CBaseModelEntity::CEntityInstanceEntityClass::DestructInstance  (line 45, @0x0000000001ea0d50, libserver.so)  // inlines: Destruct<CBaseModelEntity>
void __fastcall CBaseModelEntity::CEntityInstanceEntityClass::DestructInstance(
        CBaseModelEntity::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CBaseModelEntity::CEntityInstanceEntityClass::FreeInstance  (line 45, @0x0000000001ea0d70, libserver.so)
void __fastcall CBaseModelEntity::CEntityInstanceEntityClass::FreeInstance(
        CBaseModelEntity::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CBaseModelEntity::CEntityInstanceEntityClass::CanAllocate  (line 45, @0x0000000001ea0d90, libserver.so)
bool __fastcall CBaseModelEntity::CEntityInstanceEntityClass::CanAllocate(
        const CBaseModelEntity::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CBaseModelEntity::CEntityInstanceEntityClass::AllocateInstance  (line 45, @0x0000000001ea1ad0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CBaseModelEntity::CEntityInstanceEntityClass::AllocateInstance(
        CBaseModelEntity::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1152);
  memset(v1, 0, 0x480u);
  return v1;
}


// CBaseModelEntity::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 45, @0x0000000001ea1da0, libserver.so)  // inlines: Schema_StaticBinding
// calls: CBaseModelEntity::Schema_VerifyBindingIsRegistered
const ISchemaBinding *__fastcall CBaseModelEntity::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CBaseModelEntity::CEntityInstanceEntityClass *const this)
{
  CBaseModelEntity::Schema_VerifyBindingIsRegistered();
  return CBaseModelEntity::s_pSchemaBinding;
}


// CBaseModelEntity::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 45, @0x0000000001ea1dc0, libserver.so)
// calls: CBaseModelEntity::CEntityInstanceEntityClass::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CBaseModelEntity::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CBaseModelEntity::CEntityInstanceEntityClass *const this)
{
  CBaseModelEntity::CEntityInstanceEntityClass::Schema_VerifyBindingIsRegistered();
  return CBaseModelEntity::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CBaseModelEntity::CEntityInstanceEntityClass::ConstructInstance  (line 45, @0x0000000001ea1de0, libserver.so)  // inlines: Construct<CBaseModelEntity>
// calls: CBaseModelEntity::CBaseModelEntity
CEntityInstance *__fastcall CBaseModelEntity::CEntityInstanceEntityClass::ConstructInstance(
        CBaseModelEntity::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
    CBaseModelEntity::CBaseModelEntity(p);
  return p;
}


// CBaseModelEntity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 45, @0x0000000001ea2730, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CBaseModelEntity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CBaseModelEntity::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CBaseModelEntity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 45, @0x0000000001ea2750, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CBaseModelEntity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CBaseModelEntity::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CBaseModelEntity::GetEntityClassInfo  (line 45, @0x0000000001eada70, libserver.so)  // inlines: GetEntityClassInfo
// calls: __cxa_guard_acquire, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_release
// callers: CPointClientUIDialog::GetEntityClassInternal, CBaseTrigger::GetEntityClassInfo, CEnvSky::GetEntityClassInternal, CBeam::GetEntityClassInternal, CBaseAnimatingOverlay::GetEntityClassInfo, CBaseButton::GetEntityClassInfo, CRotButton::GetEntityClassInfo, CServerOnlyModelEntity::GetEntityClassInternal, CModelPointEntity::GetEntityClassInternal, CBaseToggle::GetEntityClassInternal, CBaseButton::GetEntityClassInternal, CBaseAnimating::GetEntityClassInternal (85 total)
// strings: "basemodelentity", "CBaseModelEntity", "CBaseEntity", "CGameEntity"
// globals: `guard variable for'CBaseModelEntity::GetEntityClassInfo(void)::g_EntityCBaseModelEntityClassInfo, CBaseModelEntity::GetEntityClassInfo(void)::g_EntityCBaseModelEntityClassInfo, `guard variable for'CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo, CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo, `guard variable for'CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo, CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo
CEntityClassInfo *__cdecl CBaseModelEntity::GetEntityClassInfo()
{
  if ( `guard variable for'CBaseModelEntity::GetEntityClassInfo(void)::g_EntityCBaseModelEntityClassInfo != 0 )
    return &CBaseModelEntity::GetEntityClassInfo(void)::g_EntityCBaseModelEntityClassInfo;
  if ( __cxa_guard_acquire(&`guard variable for'CBaseModelEntity::GetEntityClassInfo(void)::g_EntityCBaseModelEntityClassInfo) == 0 )
    return &CBaseModelEntity::GetEntityClassInfo(void)::g_EntityCBaseModelEntityClassInfo;
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
    &CBaseModelEntity::GetEntityClassInfo(void)::g_EntityCBaseModelEntityClassInfo,
    "CBaseModelEntity",
    "basemodelentity",
    0,
    &CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo);
  __cxa_guard_release(&`guard variable for'CBaseModelEntity::GetEntityClassInfo(void)::g_EntityCBaseModelEntityClassInfo);
  return &CBaseModelEntity::GetEntityClassInfo(void)::g_EntityCBaseModelEntityClassInfo;
}


// CBaseModelEntity::GetEntityClassInternal  (line 45, @0x0000000001fcbb50, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, InitScriptDesc, SetClassInfo
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, GetScriptDesc<CBaseModelEntity>, CBaseModelEntity::SetupEntClassComponentOverrides, CBaseEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_header_files_01.cpp
// strings: "basemodelentity", "CBaseModelEntity"
// globals: `guard variable for'CBaseModelEntity::GetEntityClassInternal(void)::g_EntityCBaseModelEntityClass, CBaseModelEntity::GetEntityClassInternal(void)::g_EntityCBaseModelEntityClass, __dso_handle, CBaseModelEntity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CBaseModelEntity::GetEntityClassInfo(void)::g_EntityCBaseModelEntityClassInfo, CBaseModelEntity::GetEntityClassInfo(void)::g_EntityCBaseModelEntityClassInfo
CEntityClass *__cdecl CBaseModelEntity::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CBaseModelEntity::GetEntityClassInternal(void)::g_EntityCBaseModelEntityClass == 0
    && __cxa_guard_acquire(&`guard variable for'CBaseModelEntity::GetEntityClassInternal(void)::g_EntityCBaseModelEntityClass) != 0 )
  {
    CEntityClass::CEntityClass(&CBaseModelEntity::GetEntityClassInternal(void)::g_EntityCBaseModelEntityClass);
    CBaseModelEntity::GetEntityClassInternal(void)::g_EntityCBaseModelEntityClass._vptr_CEntityClass = off_3FAF4B0;
    __cxa_guard_release(&`guard variable for'CBaseModelEntity::GetEntityClassInternal(void)::g_EntityCBaseModelEntityClass);
    __cxa_atexit(
      CBaseModelEntity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CBaseModelEntity::GetEntityClassInternal(void)::g_EntityCBaseModelEntityClass,
      &_dso_handle);
  }
  if ( g_pEntityCBaseModelEntityClass != 0 )
    return &CBaseModelEntity::GetEntityClassInternal(void)::g_EntityCBaseModelEntityClass;
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
  CBaseModelEntity::GetEntityClassInternal(void)::g_EntityCBaseModelEntityClass.m_pClassInfo = &CBaseModelEntity::GetEntityClassInfo(void)::g_EntityCBaseModelEntityClassInfo;
  CBaseModelEntity::GetEntityClassInternal(void)::g_EntityCBaseModelEntityClass.m_pBaseClassInfo = CBaseModelEntity::GetEntityClassInfo(void)::g_EntityCBaseModelEntityClassInfo.m_pBaseClassInfo;
  g_pEntityCBaseModelEntityClass = &CBaseModelEntity::GetEntityClassInternal(void)::g_EntityCBaseModelEntityClass;
  CBaseModelEntity::GetEntityClassInfo(void)::g_EntityCBaseModelEntityClassInfo.m_pClass = &CBaseModelEntity::GetEntityClassInternal(void)::g_EntityCBaseModelEntityClass;
  CBaseModelEntity::GetEntityClassInternal(void)::g_EntityCBaseModelEntityClass.m_pScriptClassDesc = GetScriptDesc<CBaseModelEntity>(0);
  CBaseModelEntity::SetupEntClassComponentOverrides(g_pEntityCBaseModelEntityClass);
  return &CBaseModelEntity::GetEntityClassInternal(void)::g_EntityCBaseModelEntityClass;
}


// CBaseModelEntity::GetEntityClass  (line 45, @0x000000000208e950, libserver.so)
CEntityClass *__cdecl CBaseModelEntity::GetEntityClass()
{
  return g_pEntityCBaseModelEntityClass;
}


// CBaseModelEntity::Schema_DynamicBinding  (line 45, @0x000000000208fd10, libserver.so)
// calls: CBaseModelEntity::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CBaseModelEntity::Schema_DynamicBinding(const CBaseModelEntity *const this)
{
  CBaseModelEntity::Schema_VerifyBindingIsRegistered();
  return CBaseModelEntity::s_pSchemaBinding;
}


// CBaseModelEntity::HackToMakeAVTable  (line 56, @0x0000000001b50640, libserver.so)
void __fastcall CBaseModelEntity::HackToMakeAVTable(const CBaseModelEntity *const this)
{
  ;
}


// CBaseModelEntity::GetBaseModelEntity  (line 72, @0x0000000001b50650, libserver.so)
CBaseModelEntity *__fastcall CBaseModelEntity::GetBaseModelEntity(CBaseModelEntity *const this)
{
  return this;
}


// CBaseModelEntity::GetBaseModelEntity  (line 73, @0x0000000001b50660, libserver.so)
const CBaseModelEntity *__fastcall CBaseModelEntity::GetBaseModelEntity(const CBaseModelEntity *const this)
{
  return this;
}


// CBaseModelEntity::ShouldDraw  (line 100, @0x0000000001b50670, libserver.so)
bool __fastcall CBaseModelEntity::ShouldDraw(CBaseModelEntity *const this)
{
  return 0;
}


// CBaseModelEntity::GetCollideable  (line 117, @0x0000000001b50680, libserver.so)
ICollideable *__fastcall CBaseModelEntity::GetCollideable(CBaseModelEntity *const this)
{
  return &this->m_Collision;
}


// CBaseModelEntity::GetGlowEntity  (line 119, @0x0000000001b50690, libserver.so)
CBaseModelEntity *__fastcall CBaseModelEntity::GetGlowEntity(CBaseModelEntity *const this)
{
  return this;
}


// CBaseModelEntity::ScriptSetSize  (line 141, @0x0000000001fba2f0, libserver.so)  // inlines: SetCollisionBounds
// calls: CCollisionProperty::SetCollisionBounds
void __fastcall CBaseModelEntity::ScriptSetSize(
        CBaseModelEntity *const this,
        const Vector *const mins,
        const Vector *const maxs)
{
  CCollisionProperty::SetCollisionBounds(&this->m_Collision, mins, maxs);
}


// CBaseModelEntity::PostSetModel  (line 153, @0x0000000001b506a0, libserver.so)
void __fastcall CBaseModelEntity::PostSetModel(CBaseModelEntity *const this)
{
  ;
}


// CBaseModelEntity::ScriptGetRenderAlpha  (line 213, @0x0000000001fba2e0, libserver.so)
// calls: CBaseModelEntity::GetRenderAlpha
int __fastcall CBaseModelEntity::ScriptGetRenderAlpha(const CBaseModelEntity *const this)
{
  return CBaseModelEntity::GetRenderAlpha(this);
}


// CBaseModelEntity::ScriptSetRenderAlpha  (line 214, @0x0000000001fba2d0, libserver.so)
// calls: CBaseModelEntity::SetRenderAlpha
void __fastcall CBaseModelEntity::ScriptSetRenderAlpha(CBaseModelEntity *const this, int nAlpha)
{
  CBaseModelEntity::SetRenderAlpha(this, nAlpha);
}


// CBaseModelEntity::ScriptSetLightGroup  (line 228, @0x0000000001fbbaa0, libserver.so)  // inlines: MakeStringToken, NetworkStateChanged, Set, operator=<CUtlStringToken>
// calls: MurmurHash2LowerCase, RegisterStringToken
void __fastcall CBaseModelEntity::ScriptSetLightGroup(CBaseModelEntity *const this, const char *pLightGroup)
{
  uint32 v2; // r13d
  uint32 v5; // eax
  uint32 v6; // [rsp+Ch] [rbp-24h]

  v2 = 0;
  if ( pLightGroup != 0 && *pLightGroup != 0 )
  {
    v5 = MurmurHash2LowerCase(pLightGroup, 0x31415926u);
    if ( g_bUpdateStringTokenDatabase )
    {
      v6 = v5;
      RegisterStringToken(v5, pLightGroup, 0, 1);
      v5 = v6;
    }
    v2 = v5;
  }
  if ( v2 != this->m_LightGroup.m_Value.m_nHashCode )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 832, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_LightGroup.m_Value.m_nHashCode = v2;
  }
}


// CBaseModelEntity::ScriptSetRenderMode  (line 241, @0x0000000001fba2c0, libserver.so)
// calls: CBaseModelEntity::SetRenderMode
void __fastcall CBaseModelEntity::ScriptSetRenderMode(CBaseModelEntity *const this, int nMode)
{
  CBaseModelEntity::SetRenderMode(this, nMode);
}


// CBaseModelEntity::ScriptSetRenderColor  (line 242, @0x0000000001fbbdf0, libserver.so)  // inlines: Init, NetworkStateChanged, SetAlpha, SetBlue, SetColor, SetComponent, SetGreen, SetRed, SetRenderColor, SetVal, a
void __fastcall CBaseModelEntity::ScriptSetRenderColor(CBaseModelEntity *const this, int r, int g, int b)
{
  unsigned __int8 v4; // r15
  unsigned __int8 v5; // r14
  unsigned __int8 v6; // r13
  unsigned __int8 v8; // r12

  v4 = r;
  v5 = g;
  v6 = b;
  v8 = this->m_clrRender.m_Value._color[3];
  if ( r != this->m_clrRender.m_Value._color[0] )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 828, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_clrRender.m_Value._color[0] = v4;
  }
  if ( v5 != this->m_clrRender.m_Value._color[1] )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 828, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_clrRender.m_Value._color[1] = v5;
  }
  if ( v6 != this->m_clrRender.m_Value._color[2] )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 828, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_clrRender.m_Value._color[2] = v6;
  }
  if ( v8 != this->m_clrRender.m_Value._color[3] )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 828, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_clrRender.m_Value._color[3] = v8;
  }
}


// CBaseModelEntity::IsPartOfFOWSystem  (line 321, @0x0000000001b506b0, libserver.so)
bool __fastcall CBaseModelEntity::IsPartOfFOWSystem(CBaseModelEntity *const this)
{
  return 0;
}


// CBaseModelEntity::NetworkVar_m_Collision::NetworkStateChanged  (line 383, @0x000000000208e960, libserver.so)  // inlines: DispatchNetworkStateChanged<CBaseModelEntity>
void __fastcall CBaseModelEntity::NetworkVar_m_Collision::NetworkStateChanged(
        CBaseModelEntity::NetworkVar_m_Collision *const this)
{
  (*(*(this - 105) + 168LL))(this - 5);
}


// CBaseModelEntity::NetworkVar_m_Collision::NetworkStateChangedLog  (line 383, @0x000000000208e980, libserver.so)  // inlines: DispatchNetworkStateChangedLog<CBaseModelEntity>
void __fastcall CBaseModelEntity::NetworkVar_m_Collision::NetworkStateChangedLog(
        const CBaseModelEntity::NetworkVar_m_Collision *const this,
        const char *pVarName,
        const char *pMsg)
{
  (*(*(this - 105) + 184LL))(this - 5, pVarName, pMsg);
}


// CBaseModelEntity::NetworkVar_m_Collision::NetworkStateChanged  (line 383, @0x000000000208e9a0, libserver.so)  // inlines: DispatchNetworkStateChanged<CBaseModelEntity>
void __fastcall CBaseModelEntity::NetworkVar_m_Collision::NetworkStateChanged(
        CBaseModelEntity::NetworkVar_m_Collision *const this,
        uint32 nLocalOffset,
        int32 nArrayIndex,
        ChangeAccessorFieldPathIndex_t nPathIndex)
{
  (*(*(this - 105) + 176LL))(this - 5, nLocalOffset + 840, nArrayIndex, nPathIndex.m_Value);
}


// CBaseModelEntity::NetworkVar_m_Glow::NetworkStateChanged  (line 385, @0x000000000208e9d0, libserver.so)  // inlines: DispatchNetworkStateChanged<CBaseModelEntity>
void __fastcall CBaseModelEntity::NetworkVar_m_Glow::NetworkStateChanged(
        CBaseModelEntity::NetworkVar_m_Glow *const this)
{
  (*(*(this - 126) + 168LL))(this - 14);
}


// CBaseModelEntity::NetworkVar_m_Glow::NetworkStateChangedLog  (line 385, @0x000000000208e9f0, libserver.so)  // inlines: DispatchNetworkStateChangedLog<CBaseModelEntity>
void __fastcall CBaseModelEntity::NetworkVar_m_Glow::NetworkStateChangedLog(
        const CBaseModelEntity::NetworkVar_m_Glow *const this,
        const char *pVarName,
        const char *pMsg)
{
  (*(*(this - 126) + 184LL))(this - 14, pVarName, pMsg);
}


// CBaseModelEntity::NetworkVar_m_Glow::NetworkStateChanged  (line 385, @0x000000000208ea10, libserver.so)  // inlines: DispatchNetworkStateChanged<CBaseModelEntity>
void __fastcall CBaseModelEntity::NetworkVar_m_Glow::NetworkStateChanged(
        CBaseModelEntity::NetworkVar_m_Glow *const this,
        uint32 nLocalOffset,
        int32 nArrayIndex,
        ChangeAccessorFieldPathIndex_t nPathIndex)
{
  (*(*(this - 126) + 176LL))(this - 14, nLocalOffset + 1008, nArrayIndex, nPathIndex.m_Value);
}


// CBaseModelEntity::Cm_vecViewOffsetInitializer::NetworkStateChanged  (line 400, @0x000000000208ea40, libserver.so)
void __fastcall CBaseModelEntity::Cm_vecViewOffsetInitializer::NetworkStateChanged(
        CBaseModelEntity::Cm_vecViewOffsetInitializer *const this,
        void *ptr,
        int32 nLocalOffset,
        int32 nArrayIndex,
        ChangeAccessorFieldPathIndex_t nPathIndex)
{
  bool v6; // zf
  __int64 v7; // rax
  CBaseModelEntity::Cm_vecViewOffsetInitializer *v8; // rdi

  v6 = *(this - 30) == 0;
  v7 = *(this - 143);
  v8 = this - 143;
  if ( !v6 )
    nLocalOffset = 0;
  (*(v7 + 176))(v8, (nLocalOffset + ptr - v8), nArrayIndex, nPathIndex.m_Value);
}


// CBaseModelEntity::Cm_vecViewOffsetInitializer::NetworkStateChangedLog  (line 400, @0x000000000208ea80, libserver.so)
// strings: "m_vecViewOffset"
void __fastcall CBaseModelEntity::Cm_vecViewOffsetInitializer::NetworkStateChangedLog(
        const CBaseModelEntity::Cm_vecViewOffsetInitializer *const this,
        const char *pMsg)
{
  (*(*(this - 143) + 184LL))(this - 143, "m_vecViewOffset", pMsg);
}


// CServerOnlyModelEntity::~CServerOnlyModelEntity  (line 424, @0x00000000020900c0, libserver.so)
// calls: CBaseModelEntity::~CBaseModelEntity
void __fastcall CServerOnlyModelEntity::~CServerOnlyModelEntity(CServerOnlyModelEntity *const this)
{
  this->_vptr_IHandleEntity = &off_3FEEEB0;
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CServerOnlyModelEntity::~CServerOnlyModelEntity  (line 424, @0x00000000020900e0, libserver.so)  // inlines: ~CServerOnlyModelEntity
// calls: CBaseModelEntity::~CBaseModelEntity, CBaseEntity::operator delete
void __fastcall CServerOnlyModelEntity::~CServerOnlyModelEntity(CServerOnlyModelEntity *const this)
{
  this->_vptr_IHandleEntity = &off_3FEEEB0;
  CBaseModelEntity::~CBaseModelEntity(this);
  CBaseEntity::operator delete(this);
}


// CServerOnlyModelEntity::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 426, @0x0000000001fb74f0, libserver.so)
// globals: CServerOnlyModelEntity::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CServerOnlyModelEntity::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CServerOnlyModelEntity::CEntityInstanceEntityClass *const this)
{
  return CServerOnlyModelEntity::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CServerOnlyModelEntity::CEntityInstanceEntityClass::DestructInstance  (line 426, @0x0000000001fb7500, libserver.so)  // inlines: Destruct<CServerOnlyModelEntity>
void __fastcall CServerOnlyModelEntity::CEntityInstanceEntityClass::DestructInstance(
        CServerOnlyModelEntity::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CServerOnlyModelEntity::CEntityInstanceEntityClass::FreeInstance  (line 426, @0x0000000001fb7520, libserver.so)
void __fastcall CServerOnlyModelEntity::CEntityInstanceEntityClass::FreeInstance(
        CServerOnlyModelEntity::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CServerOnlyModelEntity::CEntityInstanceEntityClass::CanAllocate  (line 426, @0x0000000001fb7540, libserver.so)
bool __fastcall CServerOnlyModelEntity::CEntityInstanceEntityClass::CanAllocate(
        const CServerOnlyModelEntity::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CServerOnlyModelEntity::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 426, @0x0000000001fb7550, libserver.so)
// globals: CServerOnlyModelEntity::s_pSchemaBinding
const ISchemaBinding *__fastcall CServerOnlyModelEntity::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CServerOnlyModelEntity::CEntityInstanceEntityClass *const this)
{
  return CServerOnlyModelEntity::s_pSchemaBinding;
}


// CServerOnlyModelEntity::CEntityInstanceEntityClass::AllocateInstance  (line 426, @0x0000000001fb98e0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CServerOnlyModelEntity::CEntityInstanceEntityClass::AllocateInstance(
        CServerOnlyModelEntity::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1152);
  memset(v1, 0, 0x480u);
  return v1;
}


// CServerOnlyModelEntity::CEntityInstanceEntityClass::ConstructInstance  (line 426, @0x0000000001fb9db0, libserver.so)  // inlines: CServerOnlyModelEntity, Construct<CServerOnlyModelEntity>
// calls: CBaseModelEntity::CBaseModelEntity
CEntityInstance *__fastcall CServerOnlyModelEntity::CEntityInstanceEntityClass::ConstructInstance(
        CServerOnlyModelEntity::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseModelEntity::CBaseModelEntity(p);
    *p = &off_3FEEEB0;
  }
  return p;
}


// CServerOnlyModelEntity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 426, @0x0000000001fbd710, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CServerOnlyModelEntity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CServerOnlyModelEntity::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CServerOnlyModelEntity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 426, @0x0000000001fbd730, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CServerOnlyModelEntity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CServerOnlyModelEntity::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CServerOnlyModelEntity::GetEntityClassInternal  (line 426, @0x0000000001fcbca0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, InitScriptDesc, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, GetScriptDesc<CBaseModelEntity>, CBaseModelEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_header_files_01.cpp
// strings: "CServerOnlyModelEntity"
// globals: `guard variable for'CServerOnlyModelEntity::GetEntityClassInternal(void)::g_EntityCServerOnlyModelEntityClass, CServerOnlyModelEntity::GetEntityClassInternal(void)::g_EntityCServerOnlyModelEntityClass, __dso_handle, CServerOnlyModelEntity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CServerOnlyModelEntity::GetEntityClassInfo(void)::g_EntityCServerOnlyModelEntityClassInfo, CServerOnlyModelEntity::GetEntityClassInfo(void)::g_EntityCServerOnlyModelEntityClassInfo
CEntityClass *__cdecl CServerOnlyModelEntity::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CServerOnlyModelEntity::GetEntityClassInternal(void)::g_EntityCServerOnlyModelEntityClass == 0
    && __cxa_guard_acquire(&`guard variable for'CServerOnlyModelEntity::GetEntityClassInternal(void)::g_EntityCServerOnlyModelEntityClass) != 0 )
  {
    CEntityClass::CEntityClass(&CServerOnlyModelEntity::GetEntityClassInternal(void)::g_EntityCServerOnlyModelEntityClass);
    CServerOnlyModelEntity::GetEntityClassInternal(void)::g_EntityCServerOnlyModelEntityClass._vptr_CEntityClass = off_3FD0410;
    __cxa_guard_release(&`guard variable for'CServerOnlyModelEntity::GetEntityClassInternal(void)::g_EntityCServerOnlyModelEntityClass);
    __cxa_atexit(
      CServerOnlyModelEntity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CServerOnlyModelEntity::GetEntityClassInternal(void)::g_EntityCServerOnlyModelEntityClass,
      &_dso_handle);
  }
  if ( g_pEntityCServerOnlyModelEntityClass != 0 )
    return &CServerOnlyModelEntity::GetEntityClassInternal(void)::g_EntityCServerOnlyModelEntityClass;
  if ( `guard variable for'CServerOnlyModelEntity::GetEntityClassInfo(void)::g_EntityCServerOnlyModelEntityClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CServerOnlyModelEntity::GetEntityClassInfo(void)::g_EntityCServerOnlyModelEntityClassInfo) != 0 )
  {
    EntityClassInfo = CBaseModelEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CServerOnlyModelEntity::GetEntityClassInfo(void)::g_EntityCServerOnlyModelEntityClassInfo,
      "CServerOnlyModelEntity",
      0,
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CServerOnlyModelEntity::GetEntityClassInfo(void)::g_EntityCServerOnlyModelEntityClassInfo);
  }
  CServerOnlyModelEntity::GetEntityClassInternal(void)::g_EntityCServerOnlyModelEntityClass.m_pClassInfo = &CServerOnlyModelEntity::GetEntityClassInfo(void)::g_EntityCServerOnlyModelEntityClassInfo;
  CServerOnlyModelEntity::GetEntityClassInternal(void)::g_EntityCServerOnlyModelEntityClass.m_pBaseClassInfo = CServerOnlyModelEntity::GetEntityClassInfo(void)::g_EntityCServerOnlyModelEntityClassInfo.m_pBaseClassInfo;
  g_pEntityCServerOnlyModelEntityClass = &CServerOnlyModelEntity::GetEntityClassInternal(void)::g_EntityCServerOnlyModelEntityClass;
  CServerOnlyModelEntity::GetEntityClassInfo(void)::g_EntityCServerOnlyModelEntityClassInfo.m_pClass = &CServerOnlyModelEntity::GetEntityClassInternal(void)::g_EntityCServerOnlyModelEntityClass;
  CServerOnlyModelEntity::GetEntityClassInternal(void)::g_EntityCServerOnlyModelEntityClass.m_pScriptClassDesc = GetScriptDesc<CBaseModelEntity>(0);
  g_pEntityCServerOnlyModelEntityClass->m_pComponentOverrides = 0;
  return &CServerOnlyModelEntity::GetEntityClassInternal(void)::g_EntityCServerOnlyModelEntityClass;
}


// CServerOnlyModelEntity::GetEntityClass  (line 426, @0x000000000208eab0, libserver.so)
CEntityClass *__cdecl CServerOnlyModelEntity::GetEntityClass()
{
  return g_pEntityCServerOnlyModelEntityClass;
}


// CServerOnlyModelEntity::Schema_DynamicBinding  (line 426, @0x000000000208fd30, libserver.so)
// calls: CServerOnlyModelEntity::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CServerOnlyModelEntity::Schema_DynamicBinding(
        const CServerOnlyModelEntity *const this)
{
  CServerOnlyModelEntity::Schema_VerifyBindingIsRegistered();
  return CServerOnlyModelEntity::s_pSchemaBinding;
}


// CServerOnlyModelEntity::ObjectCaps  (line 429, @0x000000000208fc70, libserver.so)
// calls: CBaseEntity::ObjectCaps
int __fastcall CServerOnlyModelEntity::ObjectCaps(CServerOnlyModelEntity *const this)
{
  int result; // eax

  result = CBaseEntity::ObjectCaps(this);
  LOBYTE(result) = result & 0x7F;
  return result;
}


// CModelPointEntity::~CModelPointEntity  (line 437, @0x0000000002090110, libserver.so)
// calls: CBaseModelEntity::~CBaseModelEntity
void __fastcall CModelPointEntity::~CModelPointEntity(CModelPointEntity *const this)
{
  this->_vptr_IHandleEntity = &off_3FEF570;
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CModelPointEntity::~CModelPointEntity  (line 437, @0x0000000002090130, libserver.so)  // inlines: ~CModelPointEntity
// calls: CBaseModelEntity::~CBaseModelEntity, CBaseEntity::operator delete
void __fastcall CModelPointEntity::~CModelPointEntity(CModelPointEntity *const this)
{
  this->_vptr_IHandleEntity = &off_3FEF570;
  CBaseModelEntity::~CBaseModelEntity(this);
  CBaseEntity::operator delete(this);
}


// CModelPointEntity::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 439, @0x0000000001fb7560, libserver.so)
// globals: CModelPointEntity::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CModelPointEntity::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CModelPointEntity::CEntityInstanceEntityClass *const this)
{
  return CModelPointEntity::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CModelPointEntity::CEntityInstanceEntityClass::DestructInstance  (line 439, @0x0000000001fb7570, libserver.so)  // inlines: Destruct<CModelPointEntity>
void __fastcall CModelPointEntity::CEntityInstanceEntityClass::DestructInstance(
        CModelPointEntity::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CModelPointEntity::CEntityInstanceEntityClass::FreeInstance  (line 439, @0x0000000001fb7590, libserver.so)
void __fastcall CModelPointEntity::CEntityInstanceEntityClass::FreeInstance(
        CModelPointEntity::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CModelPointEntity::CEntityInstanceEntityClass::CanAllocate  (line 439, @0x0000000001fb75b0, libserver.so)
bool __fastcall CModelPointEntity::CEntityInstanceEntityClass::CanAllocate(
        const CModelPointEntity::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CModelPointEntity::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 439, @0x0000000001fb75c0, libserver.so)
// globals: CModelPointEntity::s_pSchemaBinding
const ISchemaBinding *__fastcall CModelPointEntity::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CModelPointEntity::CEntityInstanceEntityClass *const this)
{
  return CModelPointEntity::s_pSchemaBinding;
}


// CModelPointEntity::CEntityInstanceEntityClass::AllocateInstance  (line 439, @0x0000000001fb9920, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CModelPointEntity::CEntityInstanceEntityClass::AllocateInstance(
        CModelPointEntity::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1152);
  memset(v1, 0, 0x480u);
  return v1;
}


// CModelPointEntity::CEntityInstanceEntityClass::ConstructInstance  (line 439, @0x0000000001fb9df0, libserver.so)  // inlines: CModelPointEntity, Construct<CModelPointEntity>
// calls: CBaseModelEntity::CBaseModelEntity
CEntityInstance *__fastcall CModelPointEntity::CEntityInstanceEntityClass::ConstructInstance(
        CModelPointEntity::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseModelEntity::CBaseModelEntity(p);
    *p = &off_3FEF570;
  }
  return p;
}


// CModelPointEntity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 439, @0x0000000001fbd760, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CModelPointEntity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CModelPointEntity::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CModelPointEntity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 439, @0x0000000001fbd780, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CModelPointEntity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CModelPointEntity::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CModelPointEntity::GetEntityClassInternal  (line 439, @0x0000000001fcbde0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, InitScriptDesc, SetClassInfo
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, GetScriptDesc<CBaseModelEntity>, CModelPointEntity::SetupEntClassComponentOverrides, CBaseModelEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_header_files_01.cpp
// strings: "CModelPointEntity"
// globals: `guard variable for'CModelPointEntity::GetEntityClassInternal(void)::g_EntityCModelPointEntityClass, CModelPointEntity::GetEntityClassInternal(void)::g_EntityCModelPointEntityClass, __dso_handle, CModelPointEntity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CModelPointEntity::GetEntityClassInfo(void)::g_EntityCModelPointEntityClassInfo, CModelPointEntity::GetEntityClassInfo(void)::g_EntityCModelPointEntityClassInfo
CEntityClass *__cdecl CModelPointEntity::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CModelPointEntity::GetEntityClassInternal(void)::g_EntityCModelPointEntityClass == 0
    && __cxa_guard_acquire(&`guard variable for'CModelPointEntity::GetEntityClassInternal(void)::g_EntityCModelPointEntityClass) != 0 )
  {
    CEntityClass::CEntityClass(&CModelPointEntity::GetEntityClassInternal(void)::g_EntityCModelPointEntityClass);
    CModelPointEntity::GetEntityClassInternal(void)::g_EntityCModelPointEntityClass._vptr_CEntityClass = off_3FD0490;
    __cxa_guard_release(&`guard variable for'CModelPointEntity::GetEntityClassInternal(void)::g_EntityCModelPointEntityClass);
    __cxa_atexit(
      CModelPointEntity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CModelPointEntity::GetEntityClassInternal(void)::g_EntityCModelPointEntityClass,
      &_dso_handle);
  }
  if ( g_pEntityCModelPointEntityClass != 0 )
    return &CModelPointEntity::GetEntityClassInternal(void)::g_EntityCModelPointEntityClass;
  if ( `guard variable for'CModelPointEntity::GetEntityClassInfo(void)::g_EntityCModelPointEntityClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CModelPointEntity::GetEntityClassInfo(void)::g_EntityCModelPointEntityClassInfo) != 0 )
  {
    EntityClassInfo = CBaseModelEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CModelPointEntity::GetEntityClassInfo(void)::g_EntityCModelPointEntityClassInfo,
      "CModelPointEntity",
      0,
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CModelPointEntity::GetEntityClassInfo(void)::g_EntityCModelPointEntityClassInfo);
  }
  CModelPointEntity::GetEntityClassInternal(void)::g_EntityCModelPointEntityClass.m_pClassInfo = &CModelPointEntity::GetEntityClassInfo(void)::g_EntityCModelPointEntityClassInfo;
  CModelPointEntity::GetEntityClassInternal(void)::g_EntityCModelPointEntityClass.m_pBaseClassInfo = CModelPointEntity::GetEntityClassInfo(void)::g_EntityCModelPointEntityClassInfo.m_pBaseClassInfo;
  g_pEntityCModelPointEntityClass = &CModelPointEntity::GetEntityClassInternal(void)::g_EntityCModelPointEntityClass;
  CModelPointEntity::GetEntityClassInfo(void)::g_EntityCModelPointEntityClassInfo.m_pClass = &CModelPointEntity::GetEntityClassInternal(void)::g_EntityCModelPointEntityClass;
  CModelPointEntity::GetEntityClassInternal(void)::g_EntityCModelPointEntityClass.m_pScriptClassDesc = GetScriptDesc<CBaseModelEntity>(0);
  CModelPointEntity::SetupEntClassComponentOverrides(g_pEntityCModelPointEntityClass);
  return &CModelPointEntity::GetEntityClassInternal(void)::g_EntityCModelPointEntityClass;
}


// CModelPointEntity::GetEntityClass  (line 439, @0x000000000208eac0, libserver.so)
CEntityClass *__cdecl CModelPointEntity::GetEntityClass()
{
  return g_pEntityCModelPointEntityClass;
}


// CModelPointEntity::Schema_DynamicBinding  (line 439, @0x000000000208fd50, libserver.so)
// calls: CModelPointEntity::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CModelPointEntity::Schema_DynamicBinding(const CModelPointEntity *const this)
{
  CModelPointEntity::Schema_VerifyBindingIsRegistered();
  return CModelPointEntity::s_pSchemaBinding;
}


// CModelPointEntity::GetEntityClassInfo  (line 439, @0x000000000233dec0, libserver.so)  // inlines: GetEntityClassInfo
// calls: __cxa_guard_acquire, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_release, CBaseEntity::GetEntityClassInfo
// callers: CPointSpotlight::GetEntityClassInternal, CPointWorldText::GetEntityClassInternal
// strings: "CModelPointEntity", "basemodelentity", "CBaseModelEntity"
// globals: `guard variable for'CModelPointEntity::GetEntityClassInfo(void)::g_EntityCModelPointEntityClassInfo, CModelPointEntity::GetEntityClassInfo(void)::g_EntityCModelPointEntityClassInfo, `guard variable for'CBaseModelEntity::GetEntityClassInfo(void)::g_EntityCBaseModelEntityClassInfo, CBaseModelEntity::GetEntityClassInfo(void)::g_EntityCBaseModelEntityClassInfo
CEntityClassInfo *__cdecl CModelPointEntity::GetEntityClassInfo()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CModelPointEntity::GetEntityClassInfo(void)::g_EntityCModelPointEntityClassInfo != 0 )
    return &CModelPointEntity::GetEntityClassInfo(void)::g_EntityCModelPointEntityClassInfo;
  if ( __cxa_guard_acquire(&`guard variable for'CModelPointEntity::GetEntityClassInfo(void)::g_EntityCModelPointEntityClassInfo) == 0 )
    return &CModelPointEntity::GetEntityClassInfo(void)::g_EntityCModelPointEntityClassInfo;
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
    &CModelPointEntity::GetEntityClassInfo(void)::g_EntityCModelPointEntityClassInfo,
    "CModelPointEntity",
    0,
    0,
    &CBaseModelEntity::GetEntityClassInfo(void)::g_EntityCBaseModelEntityClassInfo);
  __cxa_guard_release(&`guard variable for'CModelPointEntity::GetEntityClassInfo(void)::g_EntityCModelPointEntityClassInfo);
  return &CModelPointEntity::GetEntityClassInfo(void)::g_EntityCModelPointEntityClassInfo;
}


// CModelPointEntity::ObjectCaps  (line 451, @0x000000000208fc80, libserver.so)
// calls: CBaseEntity::ObjectCaps
int __fastcall CModelPointEntity::ObjectCaps(CModelPointEntity *const this)
{
  int result; // eax

  result = CBaseEntity::ObjectCaps(this);
  LOBYTE(result) = result & 0x7F;
  return result;
}


// CBaseModelEntity::GetGlobalFadeScale  (line 455, @0x0000000001b506c0, libserver.so)
float __fastcall CBaseModelEntity::GetGlobalFadeScale(const CBaseModelEntity *const this)
{
  return this->m_flFadeScale.m_Value;
}


// CBaseModelEntity::GetViewOffset  (line 653, @0x0000000001b506d0, libserver.so)
const Vector *__fastcall CBaseModelEntity::GetViewOffset(const CBaseModelEntity *const this)
{
  return &this->m_vecViewOffset.m_Value;
}


// CBaseModelEntity::SetViewOffset  (line 660, @0x0000000001b506e0, libserver.so)  // inlines: GetElement, GetEncoder, GetQuantizedFloatEncoderByIndex, LatchComponent, NetworkComponentChanged, NetworkStateChanged, Set, operator=<Vector>, operator[]
void __fastcall CBaseModelEntity::SetViewOffset(CBaseModelEntity *const this, const Vector *const v)
{
  CNetworkedQuantizedFloat *p_m_vecY; // r9
  CNetworkedQuantizedFloat *p_m_vecZ; // r15
  CNetworkViewOffsetVector *p_m_vecViewOffset; // r12
  __int64 i; // rbx
  float v8; // xmm0_4
  CNetworkedQuantizedFloat *p_m_vecX; // rdx
  __int64 v10; // rax
  float v11; // xmm1_4
  CNetworkedQuantizedFloat *v12; // rdx
  INetworkStateChangedRouter *m_pStateChanged; // rdi
  signed __int64 v14; // rdx
  CNetworkedQuantizedFloat *v15; // [rsp+8h] [rbp-38h]

  p_m_vecY = &this->m_vecViewOffset.m_vecY;
  p_m_vecZ = &this->m_vecViewOffset.m_vecZ;
  p_m_vecViewOffset = &this->m_vecViewOffset;
  for ( i = 0; i != 3; ++i )
  {
    v8 = *(&v->x + i);
    if ( v8 != *(&p_m_vecViewOffset->m_Value.x + i) )
    {
      *(&p_m_vecViewOffset->m_Value.x + i) = v8;
      p_m_vecX = &this->m_vecViewOffset.m_vecX;
      if ( i != 0 )
      {
        p_m_vecX = p_m_vecY;
        if ( i != 1 )
          p_m_vecX = p_m_vecZ;
      }
      v10 = g_pQuantizedFloatEncoders + 32LL * p_m_vecX->m_nEncoder;
      v11 = *(v10 + 12);
      if ( v8 <= v11 )
        v11 = fmaxf(*(v10 + 8), v8);
      p_m_vecX->m_Value = v11;
      *(&p_m_vecViewOffset->m_Value.x + i) = v11;
      v12 = &this->m_vecViewOffset.m_vecX;
      if ( i != 0 )
      {
        v12 = p_m_vecY;
        if ( i != 1 )
          v12 = p_m_vecZ;
      }
      m_pStateChanged = this->m_vecViewOffset.m_pStateChanged;
      v14 = v12 - p_m_vecViewOffset;
      if ( m_pStateChanged != 0 )
      {
        v15 = p_m_vecY;
        (*m_pStateChanged->_vptr_INetworkStateChangedRouter)(
          m_pStateChanged,
          p_m_vecViewOffset,
          v14,
          0xFFFFFFFFLL,
          0xFFFFFFFFLL);
        p_m_vecY = v15;
      }
    }
  }
}


