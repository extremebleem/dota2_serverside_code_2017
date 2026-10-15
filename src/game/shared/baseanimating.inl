
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CBaseAnimating::~CBaseAnimating  (line 32, @0x000000000208ffc0, libserver.so)
// calls: CHitboxComponent::~CHitboxComponent, CBaseModelEntity::~CBaseModelEntity
void __fastcall CBaseAnimating::~CBaseAnimating(CBaseAnimating *const this)
{
  CHitboxComponent *p_m_CHitboxComponent; // rdi

  p_m_CHitboxComponent = &this->m_CHitboxComponent;
  *&p_m_CHitboxComponent[-72].m_nHitboxHandle = &off_3FED330;
  CHitboxComponent::~CHitboxComponent(p_m_CHitboxComponent);
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CBaseAnimating::~CBaseAnimating  (line 32, @0x0000000002090000, libserver.so)  // inlines: ~CBaseAnimating
// calls: CHitboxComponent::~CHitboxComponent, CBaseModelEntity::~CBaseModelEntity, CBaseEntity::operator delete
void __fastcall CBaseAnimating::~CBaseAnimating(CBaseAnimating *const this)
{
  CHitboxComponent *p_m_CHitboxComponent; // rdi

  p_m_CHitboxComponent = &this->m_CHitboxComponent;
  *&p_m_CHitboxComponent[-72].m_nHitboxHandle = &off_3FED330;
  CHitboxComponent::~CHitboxComponent(p_m_CHitboxComponent);
  CBaseModelEntity::~CBaseModelEntity(this);
  CBaseEntity::operator delete(this);
}


// CBaseAnimating::CEntityInstanceEntityClass::DestructInstance  (line 34, @0x0000000001ea0da0, libserver.so)  // inlines: Destruct<CBaseAnimating>
void __fastcall CBaseAnimating::CEntityInstanceEntityClass::DestructInstance(
        CBaseAnimating::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CBaseAnimating::CEntityInstanceEntityClass::FreeInstance  (line 34, @0x0000000001ea0dc0, libserver.so)
void __fastcall CBaseAnimating::CEntityInstanceEntityClass::FreeInstance(
        CBaseAnimating::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CBaseAnimating::CEntityInstanceEntityClass::CanAllocate  (line 34, @0x0000000001ea0de0, libserver.so)
bool __fastcall CBaseAnimating::CEntityInstanceEntityClass::CanAllocate(
        const CBaseAnimating::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CBaseAnimating::CEntityInstanceEntityClass::AllocateInstance  (line 34, @0x0000000001ea1b10, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CBaseAnimating::CEntityInstanceEntityClass::AllocateInstance(
        CBaseAnimating::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1216);
  memset(v1, 0, 0x4C0u);
  return v1;
}


// CBaseAnimating::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 34, @0x0000000001ea1e10, libserver.so)  // inlines: Schema_StaticBinding
// calls: CBaseAnimating::Schema_VerifyBindingIsRegistered
const ISchemaBinding *__fastcall CBaseAnimating::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CBaseAnimating::CEntityInstanceEntityClass *const this)
{
  CBaseAnimating::Schema_VerifyBindingIsRegistered();
  return CBaseAnimating::s_pSchemaBinding;
}


// CBaseAnimating::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 34, @0x0000000001ea1e30, libserver.so)
// calls: CBaseAnimating::CEntityInstanceEntityClass::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CBaseAnimating::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CBaseAnimating::CEntityInstanceEntityClass *const this)
{
  CBaseAnimating::CEntityInstanceEntityClass::Schema_VerifyBindingIsRegistered();
  return CBaseAnimating::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CBaseAnimating::CEntityInstanceEntityClass::ConstructInstance  (line 34, @0x0000000001ea1e50, libserver.so)  // inlines: Construct<CBaseAnimating>
// calls: CBaseAnimating::CBaseAnimating
CEntityInstance *__fastcall CBaseAnimating::CEntityInstanceEntityClass::ConstructInstance(
        CBaseAnimating::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
    CBaseAnimating::CBaseAnimating(p);
  return p;
}


// CBaseAnimating::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 34, @0x0000000001ea2780, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CBaseAnimating::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CBaseAnimating::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CBaseAnimating::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 34, @0x0000000001ea27a0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CBaseAnimating::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CBaseAnimating::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CBaseAnimating::GetEntityClassInfo  (line 34, @0x0000000001ea3b70, libserver.so)  // inlines: GetEntityClassInfo
// calls: __cxa_guard_acquire, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_release, CBaseEntity::GetEntityClassInfo
// callers: CDevtestHierarchyChild::GetEntityClassInternal, CBaseCombatWeapon::GetEntityClassInternal, CBreakableProp::GetEntityClassInfo, CBaseAnimatingOverlay::GetEntityClassInternal, CBaseProp::GetEntityClassInternal, CBreakableProp::GetEntityClassInternal, CBaseFlex::GetEntityClassInternal, CDynamicProp::GetEntityClassInfo, CDynamicProp::GetEntityClassInternal, CFish::GetEntityClassInternal, CFlexCycler::GetEntityClassInfo, CFlexCycler::GetEntityClassInternal (40 total)
// strings: "baseanimating", "CBaseAnimating", "basemodelentity", "CBaseModelEntity"
// globals: `guard variable for'CBaseAnimating::GetEntityClassInfo(void)::g_EntityCBaseAnimatingClassInfo, CBaseAnimating::GetEntityClassInfo(void)::g_EntityCBaseAnimatingClassInfo, `guard variable for'CBaseModelEntity::GetEntityClassInfo(void)::g_EntityCBaseModelEntityClassInfo, CBaseModelEntity::GetEntityClassInfo(void)::g_EntityCBaseModelEntityClassInfo
CEntityClassInfo *__cdecl CBaseAnimating::GetEntityClassInfo()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CBaseAnimating::GetEntityClassInfo(void)::g_EntityCBaseAnimatingClassInfo != 0 )
    return &CBaseAnimating::GetEntityClassInfo(void)::g_EntityCBaseAnimatingClassInfo;
  if ( __cxa_guard_acquire(&`guard variable for'CBaseAnimating::GetEntityClassInfo(void)::g_EntityCBaseAnimatingClassInfo) == 0 )
    return &CBaseAnimating::GetEntityClassInfo(void)::g_EntityCBaseAnimatingClassInfo;
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
  return &CBaseAnimating::GetEntityClassInfo(void)::g_EntityCBaseAnimatingClassInfo;
}


// CBaseAnimating::GetEntityClassInternal  (line 34, @0x0000000001fccd90, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, InitScriptDesc, SetClassInfo
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, GetScriptDesc<CBaseAnimating>, CBaseAnimating::SetupEntClassInputs, CBaseAnimating::SetupEntClassComponentOverrides, CBaseModelEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_header_files_01.cpp
// strings: "baseanimating", "CBaseAnimating"
// globals: `guard variable for'CBaseAnimating::GetEntityClassInternal(void)::g_EntityCBaseAnimatingClass, CBaseAnimating::GetEntityClassInternal(void)::g_EntityCBaseAnimatingClass, __dso_handle, CBaseAnimating::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CBaseAnimating::GetEntityClassInfo(void)::g_EntityCBaseAnimatingClassInfo, CBaseAnimating::GetEntityClassInfo(void)::g_EntityCBaseAnimatingClassInfo
CEntityClass *__cdecl CBaseAnimating::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CBaseAnimating::GetEntityClassInternal(void)::g_EntityCBaseAnimatingClass == 0
    && __cxa_guard_acquire(&`guard variable for'CBaseAnimating::GetEntityClassInternal(void)::g_EntityCBaseAnimatingClass) != 0 )
  {
    CEntityClass::CEntityClass(&CBaseAnimating::GetEntityClassInternal(void)::g_EntityCBaseAnimatingClass);
    CBaseAnimating::GetEntityClassInternal(void)::g_EntityCBaseAnimatingClass._vptr_CEntityClass = off_3FAF530;
    __cxa_guard_release(&`guard variable for'CBaseAnimating::GetEntityClassInternal(void)::g_EntityCBaseAnimatingClass);
    __cxa_atexit(
      CBaseAnimating::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CBaseAnimating::GetEntityClassInternal(void)::g_EntityCBaseAnimatingClass,
      &_dso_handle);
  }
  if ( g_pEntityCBaseAnimatingClass != 0 )
    return &CBaseAnimating::GetEntityClassInternal(void)::g_EntityCBaseAnimatingClass;
  if ( `guard variable for'CBaseAnimating::GetEntityClassInfo(void)::g_EntityCBaseAnimatingClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CBaseAnimating::GetEntityClassInfo(void)::g_EntityCBaseAnimatingClassInfo) != 0 )
  {
    EntityClassInfo = CBaseModelEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CBaseAnimating::GetEntityClassInfo(void)::g_EntityCBaseAnimatingClassInfo,
      "CBaseAnimating",
      "baseanimating",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CBaseAnimating::GetEntityClassInfo(void)::g_EntityCBaseAnimatingClassInfo);
  }
  CBaseAnimating::GetEntityClassInternal(void)::g_EntityCBaseAnimatingClass.m_pClassInfo = &CBaseAnimating::GetEntityClassInfo(void)::g_EntityCBaseAnimatingClassInfo;
  CBaseAnimating::GetEntityClassInternal(void)::g_EntityCBaseAnimatingClass.m_pBaseClassInfo = CBaseAnimating::GetEntityClassInfo(void)::g_EntityCBaseAnimatingClassInfo.m_pBaseClassInfo;
  g_pEntityCBaseAnimatingClass = &CBaseAnimating::GetEntityClassInternal(void)::g_EntityCBaseAnimatingClass;
  CBaseAnimating::GetEntityClassInfo(void)::g_EntityCBaseAnimatingClassInfo.m_pClass = &CBaseAnimating::GetEntityClassInternal(void)::g_EntityCBaseAnimatingClass;
  CBaseAnimating::GetEntityClassInternal(void)::g_EntityCBaseAnimatingClass.m_pScriptClassDesc = GetScriptDesc<CBaseAnimating>(0);
  CBaseAnimating::SetupEntClassInputs(g_pEntityCBaseAnimatingClass);
  CBaseAnimating::SetupEntClassComponentOverrides(g_pEntityCBaseAnimatingClass);
  return &CBaseAnimating::GetEntityClassInternal(void)::g_EntityCBaseAnimatingClass;
}


// CBaseAnimating::GetEntityClass  (line 34, @0x000000000208ead0, libserver.so)
CEntityClass *__cdecl CBaseAnimating::GetEntityClass()
{
  return g_pEntityCBaseAnimatingClass;
}


// CBaseAnimating::Schema_DynamicBinding  (line 34, @0x000000000208fe00, libserver.so)
// calls: CBaseAnimating::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CBaseAnimating::Schema_DynamicBinding(const CBaseAnimating *const this)
{
  CBaseAnimating::Schema_VerifyBindingIsRegistered();
  return CBaseAnimating::s_pSchemaBinding;
}


// CBaseAnimating::HackToMakeAVTable  (line 40, @0x0000000001ea0df0, libserver.so)
void __fastcall CBaseAnimating::HackToMakeAVTable(const CBaseAnimating *const this)
{
  ;
}


// CBaseAnimating::GetBaseAnimating  (line 58, @0x0000000001ea0e00, libserver.so)
CBaseAnimating *__fastcall CBaseAnimating::GetBaseAnimating(CBaseAnimating *const this)
{
  return this;
}


// CBaseAnimating::GetBaseAnimating  (line 59, @0x0000000001ea0e10, libserver.so)
const CBaseAnimating *__fastcall CBaseAnimating::GetBaseAnimating(const CBaseAnimating *const this)
{
  return this;
}


// CBaseAnimating::UseServerSideAnimation  (line 125, @0x0000000001ea0e20, libserver.so)
bool __fastcall CBaseAnimating::UseServerSideAnimation(const CBaseAnimating *const this)
{
  return 0;
}


// CBaseAnimating::UncorrectViewModelAttachment  (line 193, @0x0000000001ea0e30, libserver.so)
void __fastcall CBaseAnimating::UncorrectViewModelAttachment(CBaseAnimating *const this, Vector *const vOrigin)
{
  ;
}


// CBaseAnimating::OnNewSequence  (line 220, @0x0000000001ea0e40, libserver.so)
void __fastcall CBaseAnimating::OnNewSequence(CBaseAnimating *const this)
{
  ;
}


// CBaseAnimating::OnPlaybackRateChanged  (line 221, @0x0000000001ea0e50, libserver.so)
void __fastcall CBaseAnimating::OnPlaybackRateChanged(CBaseAnimating *const this)
{
  ;
}


// CBaseAnimating::OnSequenceFinished  (line 234, @0x0000000001ea0e60, libserver.so)
void __fastcall CBaseAnimating::OnSequenceFinished(CBaseAnimating *const this, bool bLooped)
{
  ;
}


// CBaseAnimating::HandleScriptedAnimEvent  (line 357, @0x0000000001ea0e70, libserver.so)
bool __fastcall CBaseAnimating::HandleScriptedAnimEvent(CBaseAnimating *const this, animevent_t *pEvent)
{
  return 0;
}


// CBaseAnimating::HandleBehaviorAnimEvent  (line 358, @0x0000000001ea0e80, libserver.so)
bool __fastcall CBaseAnimating::HandleBehaviorAnimEvent(CBaseAnimating *const this, animevent_t *pEvent)
{
  return 0;
}


// CBaseAnimating::SpeechAnimEvent  (line 359, @0x0000000001ea0e90, libserver.so)
void __fastcall CBaseAnimating::SpeechAnimEvent(CBaseAnimating *const this, const char *pszOptions)
{
  ;
}


// CBaseAnimating::IsViewModel  (line 371, @0x0000000001ea0ea0, libserver.so)
bool __fastcall CBaseAnimating::IsViewModel(const CBaseAnimating *const this)
{
  return 0;
}


// CBaseAnimating::IsClientRagdoll  (line 391, @0x0000000001ea0eb0, libserver.so)
bool __fastcall CBaseAnimating::IsClientRagdoll(const CBaseAnimating *const this)
{
  return 0;
}


// CBaseAnimating::ClampRagdollForce  (line 396, @0x0000000001ea0ec0, libserver.so)  // inlines: operator=
void __fastcall CBaseAnimating::ClampRagdollForce(
        CBaseAnimating *const this,
        const Vector *const vecForceIn,
        Vector *vecForceOut)
{
  *vecForceOut = *vecForceIn;
}


// CBaseAnimating::Extinguish  (line 441, @0x0000000001ea1e80, libserver.so)
// calls: CBaseEntity::RemoveFlag
void __fastcall CBaseAnimating::Extinguish(CBaseAnimating *const this)
{
  CBaseEntity::RemoveFlag(this, 0x8000000);
}


// CBaseAnimating::FormatViewModelAttachment  (line 509, @0x0000000001ea0ef0, libserver.so)
void __fastcall CBaseAnimating::FormatViewModelAttachment(
        CBaseAnimating *const this,
        int nAttachment,
        matrix3x4_t *const attachmentToWorld)
{
  ;
}


// CBaseAnimating::BuildTransformations  (line 543, @0x0000000001ea0f00, libserver.so)
bool __fastcall CBaseAnimating::BuildTransformations(
        CBaseAnimating *const this,
        CStudioHdr *hdr,
        Vector *pos,
        Quaternion *q,
        const matrix3x4_t *const cameraTransform,
        int boneMask,
        CBoneBitList *const boneComputed)
{
  return 0;
}


// CBaseAnimating::MaintainSequenceTransitions  (line 544, @0x0000000001ea0f10, libserver.so)
__int64 __fastcall CBaseAnimating::MaintainSequenceTransitions(
        CBaseAnimating *const this,
        CStudioHdr *hdr,
        float flCycle,
        float *flPoseParameter,
        Vector *pos,
        Quaternion *q,
        int boneMask)
{
  return 0;
}


// CBaseAnimating::AccumulateLayers  (line 545, @0x0000000001ea0f20, libserver.so)
__int64 __fastcall CBaseAnimating::AccumulateLayers(
        CBaseAnimating *const this,
        CStudioHdr *hdr,
        Vector *pos,
        Quaternion *q,
        float *poseparam,
        float currentTime,
        int boneMask)
{
  return 0;
}


// CBaseAnimating::ApplyBoneMatrixTransform  (line 546, @0x0000000001ea0f30, libserver.so)
bool __fastcall CBaseAnimating::ApplyBoneMatrixTransform(CBaseAnimating *const this, matrix3x4_t *const transform)
{
  return 0;
}


// CBaseAnimating::StandardBlendingRules  (line 547, @0x0000000001ea0f40, libserver.so)
__int64 __fastcall CBaseAnimating::StandardBlendingRules(
        CBaseAnimating *const this,
        CStudioHdr *pStudioHdr,
        const matrix3x4_t *const rootTransform,
        Vector *pos,
        Quaternion *q,
        float currentTime,
        int boneMask)
{
  return 0;
}


// CBaseAnimating::SetupBones  (line 548, @0x0000000001ea0f50, libserver.so)
bool __fastcall CBaseAnimating::SetupBones(CBaseAnimating *const this, matrix3x4_t *pBoneToWorld, int boneMask)
{
  return 0;
}


// CBaseAnimating::ResetSequence  (line 622, @0x0000000002094e70, libserver.so)  // inlines: GetBaseAnimatingController, GetSkeletonInstance
// callers: CBreakableProp::AnimateThink, CBreakableProp::OnAttemptPhysGunPickup, CDynamicProp::SpawnServerSide
void __fastcall CBaseAnimating::ResetSequence(CBaseAnimating *const this, HSequence hSequence)
{
  __int64 v3; // rax
  __int64 v4; // rdi

  v3 = (*(this->m_pGameSceneNode->_vptr_CGameSceneNode + 9))(this->m_pGameSceneNode);
  if ( v3 != 0 )
    v4 = *(v3 + 736);
  else
    v4 = 0;
  (*(*v4 + 184LL))(v4, hSequence.m_Data, 1);
}


// CBaseAnimating::SetPlaybackRate  (line 632, @0x0000000002094ec0, libserver.so)  // inlines: GetBaseAnimatingController, GetSkeletonInstance
// callers: CDynamicProp::InputSetAnimationTransition, CBreakableProp::AnimateThink, CBreakableProp::OnAttemptPhysGunPickup
void __fastcall CBaseAnimating::SetPlaybackRate(CBaseAnimating *const this, double a2, float flRate)
{
  __int64 v3; // rax
  float flRatea; // [rsp+Ch] [rbp-4h]

  flRatea = *&a2;
  v3 = (*(this->m_pGameSceneNode->_vptr_CGameSceneNode + 9))(this->m_pGameSceneNode, a2, flRate);
  if ( v3 != 0 )
    (*(**(v3 + 736) + 176LL))(*(v3 + 736), flRatea);
  else
    (*(loc_0 + 176LL))(flRatea);
}


// CBaseAnimating::GetSequence  (line 675, @0x0000000002094f10, libserver.so)  // inlines: GetBaseAnimatingController, GetSkeletonInstance
// callers: CBaseAnimating::DrawDebugTextOverlays
HSequence __fastcall CBaseAnimating::GetSequence(const CBaseAnimating *const this)
{
  __int64 v1; // rax

  v1 = (*(this->m_pGameSceneNode->_vptr_CGameSceneNode + 10))(this->m_pGameSceneNode);
  if ( v1 != 0 )
    return (*(**(v1 + 736) + 192LL))(*(v1 + 736));
  else
    return (*(loc_0 + 192LL))();
}


// CBaseAnimating::IsSequenceFinished  (line 680, @0x0000000001fb9e30, libserver.so)
// calls: CBaseAnimating::GetBaseAnimatingController
bool __fastcall CBaseAnimating::IsSequenceFinished(const CBaseAnimating *const this)
{
  const CBaseAnimatingController *BaseAnimatingController; // rax

  BaseAnimatingController = CBaseAnimating::GetBaseAnimatingController(this);
  return (*(BaseAnimatingController->_vptr_CSkeletonAnimationController + 19))(BaseAnimatingController);
}


// CBaseAnimating::IsActivityFinished  (line 685, @0x0000000001ea1e90, libserver.so)  // inlines: IsSequenceFinished
// calls: CBaseAnimating::GetBaseAnimatingController
bool __fastcall CBaseAnimating::IsActivityFinished(CBaseAnimating *const this)
{
  const CBaseAnimatingController *BaseAnimatingController; // rax

  BaseAnimatingController = CBaseAnimating::GetBaseAnimatingController(this);
  return (*(BaseAnimatingController->_vptr_CSkeletonAnimationController + 19))(BaseAnimatingController);
}


