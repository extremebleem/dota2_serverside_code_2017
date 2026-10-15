// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/baseanimatingoverlay.cpp:25
class C_CBaseAnimatingOverlay_MapInstall {
	C_CBaseAnimatingOverlay_MapInstall();

	// sizeof = 1
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CBaseAnimatingOverlay::GetDataDescMap  (line 22, @0x0000000002058a70, libserver.so)
// globals: CBaseAnimatingOverlay::m_DataMap
datamap_t *__fastcall CBaseAnimatingOverlay::GetDataDescMap(CBaseAnimatingOverlay *const this)
{
  return &CBaseAnimatingOverlay::m_DataMap;
}


// CBaseAnimatingOverlay::AddDatadescMetadataKeys  (line 22, @0x000000000206b000, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CBaseAnimatingOverlay::GetEntityClass(void)
void __fastcall CBaseAnimatingOverlay::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CBaseAnimatingOverlay::GetEntityClass);
}


// CBaseAnimatingOverlay::GetBaseMap  (line 22, @0x000000000206b020, libserver.so)
// globals: CBaseAnimating::m_DataMap
datamap_t *__cdecl CBaseAnimatingOverlay::GetBaseMap()
{
  return &CBaseAnimating::m_DataMap;
}


// DataMapInit<CBaseAnimatingOverlay>  (line 22, @0x000000000206b030, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_source_files_02.cpp
// strings: "CBaseAnimatingOverlay"
// globals: `guard variable for'DataMapInit<CBaseAnimatingOverlay>(CBaseAnimatingOverlay *)::nameHolder, CBaseAnimating::m_DataMap, CBaseAnimatingOverlay::GetEntityClass(void), DataMapInit<CBaseAnimatingOverlay>(CBaseAnimatingOverlay *)::dataDesc, CBaseAnimatingOverlay::m_DataMap, DataMapInit<CBaseAnimatingOverlay>(CBaseAnimatingOverlay *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CBaseAnimatingOverlay>(CBaseAnimatingOverlay *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CBaseAnimatingOverlay>(CBaseAnimatingOverlay *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CBaseAnimatingOverlay>(CBaseAnimatingOverlay *)::nameHolder) != 0 )
  {
    DataMapInit<CBaseAnimatingOverlay>(CBaseAnimatingOverlay *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CBaseAnimatingOverlay>(CBaseAnimatingOverlay *)::nameHolder.m_pszBase = "CBaseAnimatingOverlay";
    DataMapInit<CBaseAnimatingOverlay>(CBaseAnimatingOverlay *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CBaseAnimatingOverlay>(CBaseAnimatingOverlay *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CBaseAnimatingOverlay>(CBaseAnimatingOverlay *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CBaseAnimatingOverlay>(CBaseAnimatingOverlay *)::nameHolder.m_nLenBase = 21;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CBaseAnimatingOverlay>(CBaseAnimatingOverlay *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CBaseAnimatingOverlay>(CBaseAnimatingOverlay *)::nameHolder,
      &_dso_handle);
  }
  CBaseAnimatingOverlay::m_DataMap.dataNumFields = 1;
  CBaseAnimatingOverlay::m_DataMap.baseMap = &CBaseAnimating::m_DataMap;
  CBaseAnimatingOverlay::m_DataMap.dataDesc = DataMapInit<CBaseAnimatingOverlay>(CBaseAnimatingOverlay *)::dataDesc;
  AddDatadescMetadataKeys(&CBaseAnimatingOverlay::m_DataMap, CBaseAnimatingOverlay::GetEntityClass);
  return &CBaseAnimatingOverlay::m_DataMap;
}


// CBaseAnimatingOverlay::YouForgotToImplementOrDeclareServerClass  (line 25, @0x0000000002058a80, libserver.so)
int __fastcall CBaseAnimatingOverlay::YouForgotToImplementOrDeclareServerClass(CBaseAnimatingOverlay *const this)
{
  return 0;
}


// CBaseAnimatingOverlay::GetServerClass  (line 25, @0x000000000205e0f0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CBaseAnimatingOverlay::GetServerClass(CBaseAnimatingOverlay *const this)
{
  CEntityClass *m_pClass; // rdx
  ServerClass *result; // rax
  CEntityClassInfo *m_pBaseClassInfo; // rdx

  m_pClass = this->m_pEntity->m_pClass;
  result = m_pClass->m_pGameClass;
  if ( result == 0 )
  {
    m_pBaseClassInfo = m_pClass->m_pBaseClassInfo;
    if ( m_pBaseClassInfo != 0 )
      return CEntityClass::GetGameClass(m_pBaseClassInfo->m_pClass, 0);
  }
  return result;
}


// CBaseAnimatingOverlay::CBaseAnimatingOverlay  (line 32, @0x000000000206e8e0, libserver.so)
// calls: CBaseAnimating::CBaseAnimating
// callers: CBaseAnimatingOverlay::CEntityInstanceEntityClass::ConstructInstance, CBaseFlex::CBaseFlex, CBaseViewModel::CBaseViewModel
void __fastcall CBaseAnimatingOverlay::CBaseAnimatingOverlay(CBaseAnimatingOverlay *const this)
{
  CBaseAnimating::CBaseAnimating(this);
  this->_vptr_IHandleEntity = &off_3FEDD90;
}


// CBaseAnimatingOverlay::~CBaseAnimatingOverlay  (line 36, @0x0000000002059a00, libserver.so)  // inlines: ~CBaseAnimating
// calls: CHitboxComponent::~CHitboxComponent, CBaseModelEntity::~CBaseModelEntity
// callers: CBaseFlex::~CBaseFlex, CBaseViewModel::~CBaseViewModel, CBaseViewModel::CBaseViewModel
void __fastcall CBaseAnimatingOverlay::~CBaseAnimatingOverlay(CBaseAnimatingOverlay *const this)
{
  CHitboxComponent *p_m_CHitboxComponent; // rdi

  p_m_CHitboxComponent = &this->m_CHitboxComponent;
  *&p_m_CHitboxComponent[-72].m_nHitboxHandle = &off_3FED330;
  CHitboxComponent::~CHitboxComponent(p_m_CHitboxComponent);
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CBaseAnimatingOverlay::~CBaseAnimatingOverlay  (line 36, @0x0000000002059a40, libserver.so)  // inlines: ~CBaseAnimating, ~CBaseAnimatingOverlay
// calls: CHitboxComponent::~CHitboxComponent, CBaseModelEntity::~CBaseModelEntity, CBaseEntity::operator delete
void __fastcall CBaseAnimatingOverlay::~CBaseAnimatingOverlay(CBaseAnimatingOverlay *const this)
{
  CHitboxComponent *p_m_CHitboxComponent; // rdi

  p_m_CHitboxComponent = &this->m_CHitboxComponent;
  *&p_m_CHitboxComponent[-72].m_nHitboxHandle = &off_3FED330;
  CHitboxComponent::~CHitboxComponent(p_m_CHitboxComponent);
  CBaseModelEntity::~CBaseModelEntity(this);
  CBaseEntity::operator delete(this);
}


// CBaseAnimatingOverlay::GetBaseAnimatingOverlayController  (line 40, @0x000000000206b100, libserver.so)  // inlines: GetSkeletonInstance
// calls: __dynamic_cast
// callers: CBaseAnimatingOverlay::VerifyOrder, CBaseAnimatingOverlay::GetAnimOverlay, CBaseAnimatingOverlay::SetOverlayPrevEventCycle, CBaseAnimatingOverlay::SetLayerDuration, CBaseAnimatingOverlay::SetLayerPlaybackRate, CBaseAnimatingOverlay::SetLayerAutokill, CBaseAnimatingOverlay::SetLayerNoRestore, CBaseAnimatingOverlay::SetLayerNoEvents, CBaseAnimatingOverlay::RemoveLayer, CBaseAnimatingOverlay::RemoveAllGestures, CBaseAnimatingOverlay::SetLayerCycle, CBaseAnimatingOverlay::SetLayerWeight (31 total)
// globals: `typeinfo for'CBaseAnimatingOverlayController
CBaseAnimatingOverlayController *__fastcall CBaseAnimatingOverlay::GetBaseAnimatingOverlayController(
        CBaseAnimatingOverlay *const this)
{
  __int64 v1; // rax
  const void *v2; // rdi

  v1 = (*(this->m_pGameSceneNode->_vptr_CGameSceneNode + 9))(this->m_pGameSceneNode);
  if ( v1 != 0 && (v2 = *(v1 + 736)) != 0 )
    return __dynamic_cast(
             v2,
             &`typeinfo for'CSkeletonAnimationController,
             &`typeinfo for'CBaseAnimatingOverlayController,
             0);
  else
    return 0;
}


// CBaseAnimatingOverlay::GetBaseAnimatingOverlayController  (line 49, @0x000000000206b150, libserver.so)  // inlines: GetSkeletonInstance
// calls: __dynamic_cast
// callers: CBaseAnimatingOverlay::GetNumAnimOverlays, CBaseAnimatingOverlay::GetAnimOverlay, CBaseAnimatingOverlay::IsValidLayer, CBaseAnimatingOverlay::GetLayerDuration, CBaseAnimatingOverlay::FindGestureLayer, CBaseAnimatingOverlay::IsPlayingGesture, CBaseAnimatingOverlay::GetLayerCycle, CBaseAnimatingOverlay::GetLayerWeight, CBaseAnimatingOverlay::GetLayerActivity, CBaseAnimatingOverlay::GetLayerSequence, CBaseAnimatingOverlay::HasActiveLayer
// globals: `typeinfo for'CBaseAnimatingOverlayController
const CBaseAnimatingOverlayController *__fastcall CBaseAnimatingOverlay::GetBaseAnimatingOverlayController(
        const CBaseAnimatingOverlay *const this)
{
  __int64 v1; // rax
  const void *v2; // rdi

  v1 = (*(this->m_pGameSceneNode->_vptr_CGameSceneNode + 10))(this->m_pGameSceneNode);
  if ( v1 != 0 && (v2 = *(v1 + 736)) != 0 )
    return __dynamic_cast(
             v2,
             &`typeinfo for'CSkeletonAnimationController,
             &`typeinfo for'CBaseAnimatingOverlayController,
             0);
  else
    return 0;
}


// CBaseAnimatingOverlay::OnRestore  (line 60, @0x000000000205b900, libserver.so)
// calls: CBaseModelEntity::OnRestore
// callers: CPhysicsCannister::OnRestore, CBasePlayer::OnRestore
void __fastcall CBaseAnimatingOverlay::OnRestore(CBaseAnimatingOverlay *const this)
{
  CBaseModelEntity::OnRestore(this);
}


// CBaseAnimatingOverlay::AddGestureSequence  (line 67, @0x000000000208a9a0, libserver.so)
// calls: CBaseAnimatingOverlay::GetBaseAnimatingOverlayController, CBaseAnimatingOverlayController::AddGestureSequence
// callers: CFlexCycler::InputAddSequenceLayer, CGenericFlexCycler::TriggerAnimEventsThink, CGenericFlexCycler::AddRemoveAnimationLayersThink, CGenericFlexCycler::ResetSequencesThink
int __fastcall CBaseAnimatingOverlay::AddGestureSequence(
        CBaseAnimatingOverlay *const this,
        HSequence hSequence,
        bool bAutokill)
{
  CBaseAnimatingOverlayController *BaseAnimatingOverlayController; // rax

  BaseAnimatingOverlayController = CBaseAnimatingOverlay::GetBaseAnimatingOverlayController(this);
  return CBaseAnimatingOverlayController::AddGestureSequence(BaseAnimatingOverlayController, hSequence, bAutokill);
}


// CBaseAnimatingOverlay::AddGestureSequence  (line 72, @0x000000000208aaa0, libserver.so)
// calls: CBaseAnimatingOverlay::GetBaseAnimatingOverlayController, CBaseAnimatingOverlayController::AddGestureSequence
__int64 __fastcall CBaseAnimatingOverlay::AddGestureSequence(
        CBaseAnimatingOverlay *const this,
        HSequence hSequence,
        float flDuration,
        bool bAutokill)
{
  CBaseAnimatingOverlayController *BaseAnimatingOverlayController; // rax

  BaseAnimatingOverlayController = CBaseAnimatingOverlay::GetBaseAnimatingOverlayController(this);
  return CBaseAnimatingOverlayController::AddGestureSequence(
           BaseAnimatingOverlayController,
           hSequence,
           flDuration,
           bAutokill);
}


// CBaseAnimatingOverlay::AddGesture  (line 77, @0x000000000208ac20, libserver.so)
// calls: CBaseAnimatingOverlay::GetBaseAnimatingOverlayController, CBaseAnimatingOverlayController::AddGesture
int __fastcall CBaseAnimatingOverlay::AddGesture(CBaseAnimatingOverlay *const this, Activity activity, bool bAutokill)
{
  CBaseAnimatingOverlayController *BaseAnimatingOverlayController; // rax

  BaseAnimatingOverlayController = CBaseAnimatingOverlay::GetBaseAnimatingOverlayController(this);
  return CBaseAnimatingOverlayController::AddGesture(BaseAnimatingOverlayController, activity, bAutokill);
}


// CBaseAnimatingOverlay::AddGesture  (line 82, @0x000000000208ac90, libserver.so)  // inlines: AddGesture
// calls: CBaseAnimatingOverlay::GetBaseAnimatingOverlayController, CBaseAnimatingOverlayController::AddGesture, CBaseAnimatingOverlayController::SetLayerDuration
__int64 __fastcall CBaseAnimatingOverlay::AddGesture(
        CBaseAnimatingOverlay *const this,
        Activity activity,
        float flDuration,
        bool bAutokill)
{
  CBaseAnimatingOverlayController *BaseAnimatingOverlayController; // rbx
  unsigned int v7; // r12d
  float v8; // xmm1_4

  BaseAnimatingOverlayController = CBaseAnimatingOverlay::GetBaseAnimatingOverlayController(this);
  v7 = CBaseAnimatingOverlayController::AddGesture(BaseAnimatingOverlayController, activity, bAutokill);
  CBaseAnimatingOverlayController::SetLayerDuration(BaseAnimatingOverlayController, v7, flDuration, v8);
  return v7;
}


// CBaseAnimatingOverlay::SetLayerDuration  (line 87, @0x000000000206b8b0, libserver.so)
// calls: CBaseAnimatingOverlay::GetBaseAnimatingOverlayController, CBaseAnimatingOverlayController::SetLayerDuration
// callers: CBaseFlex::HandleStartGestureSceneEvent
void __fastcall CBaseAnimatingOverlay::SetLayerDuration(
        CBaseAnimatingOverlay *const this,
        int iLayer,
        float a3,
        float flDuration)
{
  CBaseAnimatingOverlayController *BaseAnimatingOverlayController; // rax
  float v6; // xmm1_4

  BaseAnimatingOverlayController = CBaseAnimatingOverlay::GetBaseAnimatingOverlayController(this);
  CBaseAnimatingOverlayController::SetLayerDuration(BaseAnimatingOverlayController, iLayer, a3, v6);
}


// CBaseAnimatingOverlay::GetLayerDuration  (line 92, @0x000000000206cd00, libserver.so)
// calls: CBaseAnimatingOverlay::GetBaseAnimatingOverlayController, CBaseAnimatingOverlayController::GetLayerDuration
float __fastcall CBaseAnimatingOverlay::GetLayerDuration(const CBaseAnimatingOverlay *const this, int iLayer)
{
  const CBaseAnimatingOverlayController *BaseAnimatingOverlayController; // rax

  BaseAnimatingOverlayController = CBaseAnimatingOverlay::GetBaseAnimatingOverlayController(this);
  return CBaseAnimatingOverlayController::GetLayerDuration(BaseAnimatingOverlayController, iLayer);
}


// CBaseAnimatingOverlay::AddLayeredSequence  (line 97, @0x000000000208a900, libserver.so)
// calls: CBaseAnimatingOverlay::GetBaseAnimatingOverlayController, CBaseAnimatingOverlayController::AddLayeredSequence
// callers: CBaseFlex::HandleStartSequenceSceneEvent, CBaseFlex::HandleStartGestureSceneEvent
int __fastcall CBaseAnimatingOverlay::AddLayeredSequence(
        CBaseAnimatingOverlay *const this,
        HSequence hSequence,
        int iPriority)
{
  CBaseAnimatingOverlayController *BaseAnimatingOverlayController; // rax

  BaseAnimatingOverlayController = CBaseAnimatingOverlay::GetBaseAnimatingOverlayController(this);
  return CBaseAnimatingOverlayController::AddLayeredSequence(BaseAnimatingOverlayController, hSequence, iPriority);
}


// CBaseAnimatingOverlay::IsValidLayer  (line 102, @0x000000000206b7f0, libserver.so)  // inlines: IsValidLayer
// calls: CBaseAnimatingOverlay::GetBaseAnimatingOverlayController, CBaseAnimatingOverlayController::IsValidLayer
bool __fastcall CBaseAnimatingOverlay::IsValidLayer(const CBaseAnimatingOverlay *const this, int iLayer)
{
  const CBaseAnimatingOverlayController *BaseAnimatingOverlayController; // rax

  BaseAnimatingOverlayController = CBaseAnimatingOverlay::GetBaseAnimatingOverlayController(this);
  return iLayer >= 0
      && iLayer < BaseAnimatingOverlayController->m_AnimOverlay.m_Vector.m_Size
      && CBaseAnimatingOverlayController::IsValidLayer(BaseAnimatingOverlayController, iLayer);
}


// CBaseAnimatingOverlay::SetLayerPriority  (line 107, @0x000000000206c7e0, libserver.so)
// calls: CBaseAnimatingOverlay::GetBaseAnimatingOverlayController, CBaseAnimatingOverlayController::SetLayerPriority
// callers: CBaseFlex::ProcessGestureSceneEvent, CBaseFlex::ProcessSequenceSceneEvent
void __fastcall CBaseAnimatingOverlay::SetLayerPriority(CBaseAnimatingOverlay *const this, int iLayer, int iPriority)
{
  CBaseAnimatingOverlayController *BaseAnimatingOverlayController; // rax

  BaseAnimatingOverlayController = CBaseAnimatingOverlay::GetBaseAnimatingOverlayController(this);
  CBaseAnimatingOverlayController::SetLayerPriority(BaseAnimatingOverlayController, iLayer, iPriority);
}


// CBaseAnimatingOverlay::FindGestureLayer  (line 112, @0x000000000206cda0, libserver.so)
// calls: CBaseAnimatingOverlay::GetBaseAnimatingOverlayController, CBaseAnimatingOverlayController::FindGestureLayer
// callers: CDOTABody::ManageOverrideAnimations
int __fastcall CBaseAnimatingOverlay::FindGestureLayer(const CBaseAnimatingOverlay *const this, Activity activity)
{
  const CBaseAnimatingOverlayController *BaseAnimatingOverlayController; // rax

  BaseAnimatingOverlayController = CBaseAnimatingOverlay::GetBaseAnimatingOverlayController(this);
  return CBaseAnimatingOverlayController::FindGestureLayer(BaseAnimatingOverlayController, activity);
}


// CBaseAnimatingOverlay::IsPlayingGesture  (line 117, @0x000000000206cde0, libserver.so)  // inlines: IsPlayingGesture
// calls: CBaseAnimatingOverlay::GetBaseAnimatingOverlayController, CBaseAnimatingOverlayController::FindGestureLayer
// callers: CDOTABody::ManageOverrideAnimations
bool __fastcall CBaseAnimatingOverlay::IsPlayingGesture(const CBaseAnimatingOverlay *const this, Activity activity)
{
  const CBaseAnimatingOverlayController *BaseAnimatingOverlayController; // rax

  BaseAnimatingOverlayController = CBaseAnimatingOverlay::GetBaseAnimatingOverlayController(this);
  return CBaseAnimatingOverlayController::FindGestureLayer(BaseAnimatingOverlayController, activity) != -1;
}


// CBaseAnimatingOverlay::RestartGesture  (line 122, @0x000000000208aef0, libserver.so)
// calls: CBaseAnimatingOverlay::GetBaseAnimatingOverlayController, CBaseAnimatingOverlayController::RestartGesture
// callers: CDOTABody::ManageOverrideAnimations
void __fastcall CBaseAnimatingOverlay::RestartGesture(
        CBaseAnimatingOverlay *const this,
        Activity activity,
        bool bAddIfMissing,
        bool bAutoKill)
{
  CBaseAnimatingOverlayController *BaseAnimatingOverlayController; // rax

  BaseAnimatingOverlayController = CBaseAnimatingOverlay::GetBaseAnimatingOverlayController(this);
  CBaseAnimatingOverlayController::RestartGesture(BaseAnimatingOverlayController, activity, bAddIfMissing, bAutoKill);
}


// CBaseAnimatingOverlay::RemoveGesture  (line 127, @0x000000000206ce50, libserver.so)
// calls: CBaseAnimatingOverlay::GetBaseAnimatingOverlayController, CBaseAnimatingOverlayController::RemoveGesture
void __fastcall CBaseAnimatingOverlay::RemoveGesture(CBaseAnimatingOverlay *const this, Activity activity)
{
  CBaseAnimatingOverlayController *BaseAnimatingOverlayController; // rax

  BaseAnimatingOverlayController = CBaseAnimatingOverlay::GetBaseAnimatingOverlayController(this);
  CBaseAnimatingOverlayController::RemoveGesture(BaseAnimatingOverlayController, activity);
}


// CBaseAnimatingOverlay::RemoveAllGestures  (line 132, @0x000000000206bd00, libserver.so)
// calls: CBaseAnimatingOverlay::GetBaseAnimatingOverlayController, CBaseAnimatingOverlayController::RemoveAllGestures
// callers: CFlexCycler::InputClearAllSequenceLayers
void __fastcall CBaseAnimatingOverlay::RemoveAllGestures(CBaseAnimatingOverlay *const this)
{
  CBaseAnimatingOverlayController *BaseAnimatingOverlayController; // rax

  BaseAnimatingOverlayController = CBaseAnimatingOverlay::GetBaseAnimatingOverlayController(this);
  CBaseAnimatingOverlayController::RemoveAllGestures(BaseAnimatingOverlayController);
}


// CBaseAnimatingOverlay::SetLayerCycle  (line 137, @0x000000000206bf70, libserver.so)
// calls: CBaseAnimatingOverlay::GetBaseAnimatingOverlayController, CBaseAnimatingOverlayController::SetLayerCycle
// callers: CBaseFlex::ProcessGestureSceneEvent, CBaseFlex::ProcessSequenceSceneEvent
void __fastcall CBaseAnimatingOverlay::SetLayerCycle(
        CBaseAnimatingOverlay *const this,
        int iLayer,
        float a3,
        float flCycle)
{
  CBaseAnimatingOverlayController *BaseAnimatingOverlayController; // rax
  float v6; // xmm1_4

  BaseAnimatingOverlayController = CBaseAnimatingOverlay::GetBaseAnimatingOverlayController(this);
  CBaseAnimatingOverlayController::SetLayerCycle(BaseAnimatingOverlayController, iLayer, a3, v6);
}


// CBaseAnimatingOverlay::SetLayerCycle  (line 142, @0x000000000206c230, libserver.so)
// calls: CBaseAnimatingOverlay::GetBaseAnimatingOverlayController, CBaseAnimatingOverlayController::SetLayerCycle
// callers: CBaseFlex::HandleStartSequenceSceneEvent, CBaseFlex::HandleStartGestureSceneEvent
void __fastcall CBaseAnimatingOverlay::SetLayerCycle(
        CBaseAnimatingOverlay *const this,
        int iLayer,
        float a3,
        float flCycle,
        float flPrevCycle)
{
  CBaseAnimatingOverlayController *BaseAnimatingOverlayController; // rax
  float v7; // xmm2_4

  BaseAnimatingOverlayController = CBaseAnimatingOverlay::GetBaseAnimatingOverlayController(this);
  CBaseAnimatingOverlayController::SetLayerCycle(BaseAnimatingOverlayController, iLayer, a3, flCycle, v7);
}


// CBaseAnimatingOverlay::GetLayerCycle  (line 147, @0x000000000206ced0, libserver.so)
// calls: CBaseAnimatingOverlay::GetBaseAnimatingOverlayController, CBaseAnimatingOverlayController::GetLayerCycle
float __fastcall CBaseAnimatingOverlay::GetLayerCycle(const CBaseAnimatingOverlay *const this, int iLayer)
{
  const CBaseAnimatingOverlayController *BaseAnimatingOverlayController; // rax

  BaseAnimatingOverlayController = CBaseAnimatingOverlay::GetBaseAnimatingOverlayController(this);
  return CBaseAnimatingOverlayController::GetLayerCycle(BaseAnimatingOverlayController, iLayer);
}


// CBaseAnimatingOverlay::SetLayerPlaybackRate  (line 152, @0x000000000206b940, libserver.so)
// calls: CBaseAnimatingOverlay::GetBaseAnimatingOverlayController, CBaseAnimatingOverlayController::SetLayerPlaybackRate
// callers: CBaseFlex::HandleStartSequenceSceneEvent, CBaseFlex::HandleStartGestureSceneEvent
void __fastcall CBaseAnimatingOverlay::SetLayerPlaybackRate(
        CBaseAnimatingOverlay *const this,
        int iLayer,
        float a3,
        float flPlaybackRate)
{
  CBaseAnimatingOverlayController *BaseAnimatingOverlayController; // rax
  float v6; // xmm1_4

  BaseAnimatingOverlayController = CBaseAnimatingOverlay::GetBaseAnimatingOverlayController(this);
  CBaseAnimatingOverlayController::SetLayerPlaybackRate(BaseAnimatingOverlayController, iLayer, a3, v6);
}


// CBaseAnimatingOverlay::SetLayerWeight  (line 157, @0x000000000206c500, libserver.so)
// calls: CBaseAnimatingOverlay::GetBaseAnimatingOverlayController, CBaseAnimatingOverlayController::SetLayerWeight
// callers: CBaseFlex::HandleStartSequenceSceneEvent, CBaseFlex::HandleStartGestureSceneEvent, CBaseFlex::ProcessGestureSceneEvent, CBaseFlex::ProcessSequenceSceneEvent, CFlexCycler::InputAddSequenceLayer, CGenericFlexCycler::AddRemoveAnimationLayersThink, CDOTABody::ManageOverrideAnimations
void __fastcall CBaseAnimatingOverlay::SetLayerWeight(
        CBaseAnimatingOverlay *const this,
        int iLayer,
        float a3,
        float flWeight)
{
  CBaseAnimatingOverlayController *BaseAnimatingOverlayController; // rax
  float v6; // xmm1_4

  BaseAnimatingOverlayController = CBaseAnimatingOverlay::GetBaseAnimatingOverlayController(this);
  CBaseAnimatingOverlayController::SetLayerWeight(BaseAnimatingOverlayController, iLayer, a3, v6);
}


// CBaseAnimatingOverlay::GetLayerWeight  (line 162, @0x000000000206cf50, libserver.so)
// calls: CBaseAnimatingOverlay::GetBaseAnimatingOverlayController, CBaseAnimatingOverlayController::GetLayerWeight
float __fastcall CBaseAnimatingOverlay::GetLayerWeight(const CBaseAnimatingOverlay *const this, int iLayer)
{
  const CBaseAnimatingOverlayController *BaseAnimatingOverlayController; // rax

  BaseAnimatingOverlayController = CBaseAnimatingOverlay::GetBaseAnimatingOverlayController(this);
  return CBaseAnimatingOverlayController::GetLayerWeight(BaseAnimatingOverlayController, iLayer);
}


// CBaseAnimatingOverlay::SetLayerAutokill  (line 167, @0x000000000206b9d0, libserver.so)
// calls: CBaseAnimatingOverlay::GetBaseAnimatingOverlayController, CBaseAnimatingOverlayController::SetLayerAutokill
void __fastcall CBaseAnimatingOverlay::SetLayerAutokill(CBaseAnimatingOverlay *const this, int iLayer, bool bAutokill)
{
  CBaseAnimatingOverlayController *BaseAnimatingOverlayController; // rax

  BaseAnimatingOverlayController = CBaseAnimatingOverlay::GetBaseAnimatingOverlayController(this);
  CBaseAnimatingOverlayController::SetLayerAutokill(BaseAnimatingOverlayController, iLayer, bAutokill);
}


// CBaseAnimatingOverlay::SetLayerLooping  (line 172, @0x000000000206c590, libserver.so)
// calls: CBaseAnimatingOverlay::GetBaseAnimatingOverlayController, CBaseAnimatingOverlayController::SetLayerLooping
// callers: CBaseFlex::HandleStartGestureSceneEvent, CFlexCycler::InputAddSequenceLayer
void __fastcall CBaseAnimatingOverlay::SetLayerLooping(CBaseAnimatingOverlay *const this, int iLayer, bool bLooping)
{
  CBaseAnimatingOverlayController *BaseAnimatingOverlayController; // rax

  BaseAnimatingOverlayController = CBaseAnimatingOverlay::GetBaseAnimatingOverlayController(this);
  CBaseAnimatingOverlayController::SetLayerLooping(BaseAnimatingOverlayController, iLayer, bLooping);
}


// CBaseAnimatingOverlay::SetLayerNoRestore  (line 177, @0x000000000206ba60, libserver.so)
// calls: CBaseAnimatingOverlay::GetBaseAnimatingOverlayController, CBaseAnimatingOverlayController::SetLayerNoRestore
// callers: CBaseFlex::HandleStartSequenceSceneEvent, CBaseFlex::HandleStartGestureSceneEvent
void __fastcall CBaseAnimatingOverlay::SetLayerNoRestore(
        CBaseAnimatingOverlay *const this,
        int iLayer,
        bool bNoRestore)
{
  CBaseAnimatingOverlayController *BaseAnimatingOverlayController; // rax

  BaseAnimatingOverlayController = CBaseAnimatingOverlay::GetBaseAnimatingOverlayController(this);
  CBaseAnimatingOverlayController::SetLayerNoRestore(BaseAnimatingOverlayController, iLayer, bNoRestore);
}


// CBaseAnimatingOverlay::SetLayerNoEvents  (line 182, @0x000000000206baf0, libserver.so)
// calls: CBaseAnimatingOverlay::GetBaseAnimatingOverlayController, CBaseAnimatingOverlayController::SetLayerNoEvents
void __fastcall CBaseAnimatingOverlay::SetLayerNoEvents(CBaseAnimatingOverlay *const this, int iLayer, bool bNoEvents)
{
  CBaseAnimatingOverlayController *BaseAnimatingOverlayController; // rax

  BaseAnimatingOverlayController = CBaseAnimatingOverlay::GetBaseAnimatingOverlayController(this);
  CBaseAnimatingOverlayController::SetLayerNoEvents(BaseAnimatingOverlayController, iLayer, bNoEvents);
}


// CBaseAnimatingOverlay::GetLayerActivity  (line 187, @0x000000000206cfd0, libserver.so)
// calls: CBaseAnimatingOverlay::GetBaseAnimatingOverlayController, CBaseAnimatingOverlayController::GetLayerActivity
Activity __fastcall CBaseAnimatingOverlay::GetLayerActivity(const CBaseAnimatingOverlay *const this, int iLayer)
{
  const CBaseAnimatingOverlayController *BaseAnimatingOverlayController; // rax

  BaseAnimatingOverlayController = CBaseAnimatingOverlay::GetBaseAnimatingOverlayController(this);
  return CBaseAnimatingOverlayController::GetLayerActivity(BaseAnimatingOverlayController, iLayer);
}


// CBaseAnimatingOverlay::GetLayerSequence  (line 192, @0x000000000206d040, libserver.so)
// calls: CBaseAnimatingOverlay::GetBaseAnimatingOverlayController, CBaseAnimatingOverlayController::GetLayerSequence
HSequence __fastcall CBaseAnimatingOverlay::GetLayerSequence(const CBaseAnimatingOverlay *const this, int iLayer)
{
  const CBaseAnimatingOverlayController *BaseAnimatingOverlayController; // rax

  BaseAnimatingOverlayController = CBaseAnimatingOverlay::GetBaseAnimatingOverlayController(this);
  return CBaseAnimatingOverlayController::GetLayerSequence(BaseAnimatingOverlayController, iLayer);
}


// CBaseAnimatingOverlay::RemoveLayer  (line 197, @0x000000000206bc70, libserver.so)
// calls: CBaseAnimatingOverlay::GetBaseAnimatingOverlayController, CBaseAnimatingOverlayController::RemoveLayer
// callers: CBaseFlex::ClearSceneEvent, CGenericFlexCycler::AddRemoveAnimationLayersThink
void __fastcall CBaseAnimatingOverlay::RemoveLayer(
        CBaseAnimatingOverlay *const this,
        int iLayer,
        float a3,
        float flKillRate,
        float flKillDelay)
{
  CBaseAnimatingOverlayController *BaseAnimatingOverlayController; // rax
  float v7; // xmm2_4

  BaseAnimatingOverlayController = CBaseAnimatingOverlay::GetBaseAnimatingOverlayController(this);
  CBaseAnimatingOverlayController::RemoveLayer(BaseAnimatingOverlayController, iLayer, a3, flKillRate, v7);
}


// CBaseAnimatingOverlay::FastRemoveLayer  (line 202, @0x000000000206c8c0, libserver.so)
// calls: CBaseAnimatingOverlay::GetBaseAnimatingOverlayController, CBaseAnimatingOverlayController::FastRemoveLayer
// callers: CBaseFlex::ClearSceneEvent
void __fastcall CBaseAnimatingOverlay::FastRemoveLayer(CBaseAnimatingOverlay *const this, int iLayer)
{
  CBaseAnimatingOverlayController *BaseAnimatingOverlayController; // rax

  BaseAnimatingOverlayController = CBaseAnimatingOverlay::GetBaseAnimatingOverlayController(this);
  CBaseAnimatingOverlayController::FastRemoveLayer(BaseAnimatingOverlayController, iLayer);
}


// CBaseAnimatingOverlay::GetNumAnimOverlays  (line 207, @0x000000000206b1a0, libserver.so)
// calls: CBaseAnimatingOverlay::GetBaseAnimatingOverlayController
// callers: CBasePlayerAnimState::ClearAnimationLayers, CBasePlayerAnimState::DebugShowAnimState, CBaseViewModel::SendViewModelMatchingSequence, CBaseViewModel::ItemPostFrame, CBaseViewModel::IsViewModelSequenceFinishedForLayer, CBaseViewModel::GetViewModelSequenceDurationForLayer, CLagCompensationManager::RestoreEntityFromRecords, CLagCompensationManager::BacktrackEntity, CLagCompensationManager::RecordDataIntoTrack
int __fastcall CBaseAnimatingOverlay::GetNumAnimOverlays(const CBaseAnimatingOverlay *const this)
{
  return CBaseAnimatingOverlay::GetBaseAnimatingOverlayController(this)->m_AnimOverlay.m_Vector.m_Size;
}


// CBaseAnimatingOverlay::SetNumAnimOverlays  (line 212, @0x000000000208b630, libserver.so)
// calls: CBaseAnimatingOverlay::GetBaseAnimatingOverlayController, CBaseAnimatingOverlayController::SetNumAnimOverlays
// callers: CBasePlayerAnimState::ClearAnimationLayers, CBaseViewModel::SendViewModelMatchingSequence, CDOTAAnimState::InitGestureSlots
void __fastcall CBaseAnimatingOverlay::SetNumAnimOverlays(CBaseAnimatingOverlay *const this, int nCount)
{
  CBaseAnimatingOverlayController *BaseAnimatingOverlayController; // rax

  BaseAnimatingOverlayController = CBaseAnimatingOverlay::GetBaseAnimatingOverlayController(this);
  CBaseAnimatingOverlayController::SetNumAnimOverlays(BaseAnimatingOverlayController, nCount);
}


// CBaseAnimatingOverlay::GetAnimOverlay  (line 217, @0x000000000206b700, libserver.so)
// calls: CBaseAnimatingOverlay::GetBaseAnimatingOverlayController, CBaseAnimatingOverlayController::GetAnimOverlay
// callers: CBasePlayerAnimState::ClearAnimationLayers, CBasePlayerAnimState::UpdateAimSequenceLayers, CBasePlayerAnimState::OptimizeLayerWeights, CBasePlayerAnimState::DebugShowAnimState, CBaseViewModel::SendViewModelMatchingSequence, CBaseViewModel::ItemPostFrame, CBaseViewModel::IsViewModelSequenceFinishedForLayer, CBaseViewModel::GetViewModelSequenceDurationForLayer, CBaseViewModel::FadePreviousLayer, CGenericFlexCycler::ResetSequencesThink, CLagCompensationManager::RestoreEntityFromRecords, CLagCompensationManager::BacktrackEntity (14 total)
CAnimationLayer *__fastcall CBaseAnimatingOverlay::GetAnimOverlay(CBaseAnimatingOverlay *const this, int iIndex)
{
  CBaseAnimatingOverlayController *BaseAnimatingOverlayController; // rax

  BaseAnimatingOverlayController = CBaseAnimatingOverlay::GetBaseAnimatingOverlayController(this);
  return CBaseAnimatingOverlayController::GetAnimOverlay(BaseAnimatingOverlayController, iIndex);
}


// CBaseAnimatingOverlay::GetAnimOverlay  (line 222, @0x000000000206b790, libserver.so)
// calls: CBaseAnimatingOverlay::GetBaseAnimatingOverlayController, CBaseAnimatingOverlayController::GetAnimOverlay
const CAnimationLayer *__fastcall CBaseAnimatingOverlay::GetAnimOverlay(
        const CBaseAnimatingOverlay *const this,
        int iIndex)
{
  const CBaseAnimatingOverlayController *BaseAnimatingOverlayController; // rax

  BaseAnimatingOverlayController = CBaseAnimatingOverlay::GetBaseAnimatingOverlayController(this);
  return CBaseAnimatingOverlayController::GetAnimOverlay(BaseAnimatingOverlayController, iIndex);
}


// CBaseAnimatingOverlay::SetOverlayPrevEventCycle  (line 227, @0x000000000206b720, libserver.so)  // inlines: GetAnimOverlay, SetLastEventCheck
// calls: CBaseAnimatingOverlay::GetBaseAnimatingOverlayController, CBaseAnimatingOverlayController::GetAnimOverlay
// callers: CBaseViewModel::FadePreviousLayer, CDOTAAnimState::AddToGestureSlot
void __fastcall CBaseAnimatingOverlay::SetOverlayPrevEventCycle(
        CBaseAnimatingOverlay *const this,
        int nOverlay,
        float a3,
        float flValue)
{
  CBaseAnimatingOverlayController *BaseAnimatingOverlayController; // rax
  CAnimationLayer *AnimOverlay; // rax

  BaseAnimatingOverlayController = CBaseAnimatingOverlay::GetBaseAnimatingOverlayController(this);
  AnimOverlay = CBaseAnimatingOverlayController::GetAnimOverlay(BaseAnimatingOverlayController, nOverlay);
  if ( AnimOverlay != 0 )
    AnimOverlay->m_flLastEventCycle = a3;
}


// CBaseAnimatingOverlay::HasActiveLayer  (line 236, @0x000000000206d7a0, libserver.so)
// calls: CBaseAnimatingOverlay::GetBaseAnimatingOverlayController, CBaseAnimatingOverlayController::HasActiveLayer
bool __fastcall CBaseAnimatingOverlay::HasActiveLayer(const CBaseAnimatingOverlay *const this)
{
  const CBaseAnimatingOverlayController *BaseAnimatingOverlayController; // rax

  BaseAnimatingOverlayController = CBaseAnimatingOverlay::GetBaseAnimatingOverlayController(this);
  return CBaseAnimatingOverlayController::HasActiveLayer(BaseAnimatingOverlayController);
}


// CBaseAnimatingOverlay::VerifyOrder  (line 241, @0x000000000206b1c0, libserver.so)
// calls: CBaseAnimatingOverlay::GetBaseAnimatingOverlayController
void __fastcall CBaseAnimatingOverlay::VerifyOrder(CBaseAnimatingOverlay *const this)
{
  CBaseAnimatingOverlay::GetBaseAnimatingOverlayController(this);
}


