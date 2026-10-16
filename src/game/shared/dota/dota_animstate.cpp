// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/dota_animstate.cpp:45
class CDOTA_AbilityAnimations : public CAutoGameSystem {
	class YouForgot {
	private:

		void ToDefine_DEFINE_GAME_SYSTEM();
		YouForgot();

		// sizeof = 1
	};

public:

protected:

	static IGameSystemFactory * sm_Factory;

	typedef CAutoGameSystem BaseClass;
	CDOTA_AbilityAnimations(CDOTA_AbilityAnimations &);
	CDOTA_AbilityAnimations(const CDOTA_AbilityAnimations &);
	CDOTA_AbilityAnimations();
	virtual void YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition();
	virtual bool DoesGameSystemReallocate();
	virtual void SetGameSystemGlobalPtrs(void *);
	void SetGameSystemGlobalPtrImpl(CDOTA_AbilityAnimations *);
	virtual void GameInit(const EventGameInit_t &);
	bool IsAbilityActivity(int);
	void AddAbilityActivity(int);
	virtual ~CDOTA_AbilityAnimations();

	// vtable[39] YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition
	// vtable[36] DoesGameSystemReallocate
	// vtable[34] SetGameSystemGlobalPtrs
	// vtable[3] GameInit
	// sizeof = 48
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_AbilityAnimations::~CDOTA_AbilityAnimations  (line 45, @0x0000000002458c00, libserver.so)  // inlines: Purge, RemoveAll, ~CAutoGameSystem, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: IGameSystem::~IGameSystem, CUtlMemory<int, int>::Purge
void __fastcall CDOTA_AbilityAnimations::~CDOTA_AbilityAnimations(CDOTA_AbilityAnimations *const this)
{
  bool v2; // zf
  CUtlVectorBase<int,CUtlMemory<int,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_Activities.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IGameSystem = off_40D70D0;  // vptr: CDOTA_AbilityAnimations
  this->m_Activities.m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_Activities.m_Memory;
    CUtlMemory<int,int>::Purge(&this->m_Activities.m_Memory);
    if ( (this->m_Activities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<int,int>::Purge(p_m_Memory);
  }
  this->_vptr_IGameSystem = off_3F7C1B0;  // vptr: CAutoGameSystem
  IGameSystem::~IGameSystem(this);
}


// CDOTA_AbilityAnimations::~CDOTA_AbilityAnimations  (line 45, @0x0000000002458c60, libserver.so)  // inlines: Purge, RemoveAll, ~CAutoGameSystem, ~CDOTA_AbilityAnimations, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: IGameSystem::~IGameSystem, operator delete, CUtlMemory<int, int>::Purge
void __fastcall CDOTA_AbilityAnimations::~CDOTA_AbilityAnimations(CDOTA_AbilityAnimations *const this)
{
  bool v2; // zf
  CUtlVectorBase<int,CUtlMemory<int,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_Activities.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IGameSystem = off_40D70D0;  // vptr: CDOTA_AbilityAnimations
  this->m_Activities.m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_Activities.m_Memory;
    CUtlMemory<int,int>::Purge(&this->m_Activities.m_Memory);
    if ( (this->m_Activities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<int,int>::Purge(p_m_Memory);
  }
  this->_vptr_IGameSystem = off_3F7C1B0;  // vptr: CAutoGameSystem
  IGameSystem::~IGameSystem(this);
  operator delete(this);
}


// CDOTA_AbilityAnimations::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition  (line 47, @0x0000000002456350, libserver.so)
void __fastcall CDOTA_AbilityAnimations::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition(
        CDOTA_AbilityAnimations *const this)
{
  ;
}


// CDOTA_AbilityAnimations::DoesGameSystemReallocate  (line 47, @0x0000000002456360, libserver.so)
// globals: CDOTA_AbilityAnimations::sm_Factory
bool __fastcall CDOTA_AbilityAnimations::DoesGameSystemReallocate(const CDOTA_AbilityAnimations *const this)
{
  return (*(CDOTA_AbilityAnimations::sm_Factory->_vptr_IGameSystemFactory + 8))(CDOTA_AbilityAnimations::sm_Factory);
}


// CDOTA_AbilityAnimations::SetGameSystemGlobalPtrs  (line 47, @0x0000000002456380, libserver.so)  // inlines: SetGameSystemGlobalPtrImpl
// globals: CDOTA_AbilityAnimations::sm_Factory
void __fastcall CDOTA_AbilityAnimations::SetGameSystemGlobalPtrs(CDOTA_AbilityAnimations *const this, void *pValue)
{
  if ( CDOTA_AbilityAnimations::sm_Factory != 0 )
    (*(CDOTA_AbilityAnimations::sm_Factory->_vptr_IGameSystemFactory + 7))(CDOTA_AbilityAnimations::sm_Factory, pValue);
}


// CDOTA_AbilityAnimations::YouForgot::ToDefine_DEFINE_GAME_SYSTEM  (line 59, @0x00000000024264e0, libserver.so)
void __cdecl CDOTA_AbilityAnimations::YouForgot::ToDefine_DEFINE_GAME_SYSTEM()
{
  ;
}


// CDOTA_AbilityAnimations::GameInit  (line 61, @0x000000000241f330, libserver.so)  // inlines: RemoveAll
void __fastcall CDOTA_AbilityAnimations::GameInit(
        CDOTA_AbilityAnimations *const this,
        const EventGameInit_t *const msg)
{
  this->m_Activities.m_Size = 0;
}


// AddAbilityAnimationToList  (line 66, @0x0000000002454d40, libserver.so)  // inlines: AddAbilityActivity, AddToTail, CopyConstruct<int>, Element, GrowMemory, IsAbilityActivity, operator[]
// calls: CUtlVectorBase<int, CUtlMemory<int, int> >::Find, CUtlMemory<int, int>::Grow
void __fastcall AddAbilityAnimationToList(int iActivity)
{
  __int64 m_Size; // r12
  int v3; // eax
  int *v4; // rax
  int src[5]; // [rsp+Ch] [rbp-14h] BYREF

  src[0] = iActivity;
  if ( CUtlVectorBase<int,CUtlMemory<int,int>>::Find(&g_DOTAAbilityActivities.m_Activities, src) == -1 )
  {
    m_Size = g_DOTAAbilityActivities.m_Activities.m_Size;
    v3 = g_DOTAAbilityActivities.m_Activities.m_Size;
    if ( g_DOTAAbilityActivities.m_Activities.m_Size == g_DOTAAbilityActivities.m_Activities.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<int,int>::Grow(&g_DOTAAbilityActivities.m_Activities.m_Memory, 1);
      v3 = g_DOTAAbilityActivities.m_Activities.m_Size;
    }
    g_DOTAAbilityActivities.m_Activities.m_Size = v3 + 1;
    v4 = &g_DOTAAbilityActivities.m_Activities.m_Memory.m_pMemory[m_Size];
    if ( v4 != 0 )
      *v4 = iActivity;
  }
}


// CDOTAAnimState::CDOTAAnimState  (line 76, @0x00000000024550d0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, HSequence, Purge, RemoveAll, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTAAnimState::Init, CDOTAAnimState::InitGestureSlots, _Unwind_Resume, CUtlMemory<GestureSlot_t, int>::Purge
// callers: CDOTA_BaseNPC::Connect
void __fastcall CDOTAAnimState::CDOTAAnimState(CDOTAAnimState *const this, CDOTA_BaseNPC *pUnit)
{
  this->_vptr_CDOTAAnimState = off_40D7230;  // vptr: CDOTAAnimState
  this->m_aGestureSlots.m_Size = 0;
  this->m_aGestureSlots.m_Memory.m_pMemory = 0;
  this->m_aGestureSlots.m_Memory.m_nAllocationCount = 0;
  this->m_aGestureSlots.m_Memory.m_nGrowSize = 0;
  this->m_nGestureSequenceInSuppressionSlot.m_Data = -1;
  this->m_pUnit = 0;
  this->m_nGestureTriggeredUnitAnim = -1;
  this->m_bSuppressConstantLayer = 0;
  this->m_nGestureSlotForSuppression = -1;
  CDOTAAnimState::Init(this, pUnit);
  CDOTAAnimState::InitGestureSlots(this);
}


// CDOTAAnimState::~CDOTAAnimState  (line 90, @0x00000000024264f0, libserver.so)  // inlines: Purge, RemoveAll, ShutdownGestureSlots, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlMemory<GestureSlot_t, int>::Purge
// callers: CDOTAAnimState::Release
void __fastcall CDOTAAnimState::~CDOTAAnimState(CDOTAAnimState *const this)
{
  CUtlVectorBase<GestureSlot_t,CUtlMemory<GestureSlot_t,int> >::CAllocator *p_m_Memory; // r12
  bool v3; // zf

  p_m_Memory = &this->m_aGestureSlots.m_Memory;
  v3 = (this->m_aGestureSlots.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_CDOTAAnimState = off_40D7230;  // vptr: CDOTAAnimState
  this->m_aGestureSlots.m_Size = 0;
  if ( v3 )
  {
    CUtlMemory<GestureSlot_t,int>::Purge(&this->m_aGestureSlots.m_Memory);
    v3 = (this->m_aGestureSlots.m_Memory.m_nGrowSize & 0xC0000000) == 0;
    this->m_aGestureSlots.m_Size = 0;
    if ( v3 )
    {
      CUtlMemory<GestureSlot_t,int>::Purge(p_m_Memory);
      if ( (this->m_aGestureSlots.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<GestureSlot_t,int>::Purge(p_m_Memory);
    }
  }
  else
  {
    this->m_aGestureSlots.m_Size = 0;
  }
}


// CDOTAAnimState::Init  (line 97, @0x000000000241f950, libserver.so)
// calls: CBaseAnimatingOverlay::GetBaseAnimatingOverlayController, CBaseAnimatingOverlayController::SetDisableStudioFrameAdvanceHack, CBaseAnimatingOverlayController::SetOrderIsExternallyControlled
// callers: CDOTAAnimState::CDOTAAnimState
void __fastcall CDOTAAnimState::Init(CDOTAAnimState *const this, CDOTA_BaseNPC *pUnit)
{
  CBaseAnimatingOverlayController *BaseAnimatingOverlayController; // rax
  CBaseAnimatingOverlayController *v4; // rax

  this->m_pUnit = pUnit;
  this->m_nGestureTriggeredUnitAnim = -1;
  BaseAnimatingOverlayController = CBaseAnimatingOverlay::GetBaseAnimatingOverlayController(pUnit);
  CBaseAnimatingOverlayController::SetDisableStudioFrameAdvanceHack(BaseAnimatingOverlayController, 1);
  v4 = CBaseAnimatingOverlay::GetBaseAnimatingOverlayController(pUnit);
  CBaseAnimatingOverlayController::SetOrderIsExternallyControlled(v4, 1);
}


// CDOTAAnimState::ClearAnimationState  (line 111, @0x00000000024266b0, libserver.so)  // inlines: ResetGestureSlots
// calls: CDOTAAnimState::ResetGestureSlot
void __fastcall CDOTAAnimState::ClearAnimationState(CDOTAAnimState *const this)
{
  int i; // ebx
  int v3; // esi

  for ( i = 0; i != 9; ++i )
  {
    v3 = i;
    CDOTAAnimState::ResetGestureSlot(this, v3);
  }
}


// CDOTAAnimState::PlayFlinchGesture  (line 119, @0x000000000241f340, libserver.so)
void __fastcall CDOTAAnimState::PlayFlinchGesture(CDOTAAnimState *const this, Activity iActivity)
{
  ;
}


// CDOTAAnimState::InitGestureSlots  (line 126, @0x0000000002455010, libserver.so)  // inlines: AddMultipleToTail, GrowMemory, GrowVector, InsertMultipleBefore, operator[]
// calls: CBaseAnimatingOverlay::SetNumAnimOverlays, CUtlMemory<GestureSlot_t, int>::Grow, CBaseAnimatingOverlay::GetAnimOverlay, CDOTAAnimState::ResetGestureSlot
// callers: CDOTAAnimState::CDOTAAnimState
bool __fastcall CDOTAAnimState::InitGestureSlots(CDOTAAnimState *const this)
{
  CDOTA_BaseNPC *m_pUnit; // r15
  int v3; // ebx
  int m_nAllocationCount; // eax
  __int64 v5; // r12
  int v6; // ebx
  GestureSlot_t *v7; // r14
  int v8; // esi

  m_pUnit = this->m_pUnit;
  if ( m_pUnit != 0 )
    CBaseAnimatingOverlay::SetNumAnimOverlays(this->m_pUnit, 9);
  v3 = this->m_aGestureSlots.m_Size + 9;
  m_nAllocationCount = this->m_aGestureSlots.m_Memory.m_nAllocationCount;
  if ( v3 > m_nAllocationCount )
    CUtlMemory<GestureSlot_t,int>::Grow(&this->m_aGestureSlots.m_Memory, v3 - m_nAllocationCount);
  this->m_aGestureSlots.m_Size = v3;
  v5 = 0;
  v6 = 0;
  while ( 1 )
  {
    v7 = &this->m_aGestureSlots.m_Memory.m_pMemory[v5];
    v7->m_pAnimLayer = CBaseAnimatingOverlay::GetAnimOverlay(m_pUnit, v6);
    if ( this->m_aGestureSlots.m_Memory.m_pMemory[v5].m_pAnimLayer == 0 )
      break;
    v8 = v6++;
    CDOTAAnimState::ResetGestureSlot(this, v8);
    ++v5;
    if ( v6 == 9 )
      return 1;
  }
  return 0;
}


// CDOTAAnimState::ShutdownGestureSlots  (line 154, @0x0000000002426590, libserver.so)  // inlines: Purge, RemoveAll
// calls: CUtlMemory<GestureSlot_t, int>::Purge
void __fastcall CDOTAAnimState::ShutdownGestureSlots(CDOTAAnimState *const this)
{
  bool v1; // zf

  v1 = (this->m_aGestureSlots.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_aGestureSlots.m_Size = 0;
  if ( v1 )
    CUtlMemory<GestureSlot_t,int>::Purge(&this->m_aGestureSlots.m_Memory);
}


// CDOTAAnimState::ResetGestureSlots  (line 162, @0x0000000002426680, libserver.so)
// calls: CDOTAAnimState::ResetGestureSlot
void __fastcall CDOTAAnimState::ResetGestureSlots(CDOTAAnimState *const this)
{
  int i; // ebx
  int v3; // esi

  for ( i = 0; i != 9; ++i )
  {
    v3 = i;
    CDOTAAnimState::ResetGestureSlot(this, v3);
  }
}


// CDOTAAnimState::ResetGestureSlot  (line 173, @0x00000000024265c0, libserver.so)  // inlines: operator[]
// calls: CAnimationLayer::SetOrder, CAnimationLayer::Reset, CAnimationLayer::SetAutofadeDisabled, CAnimationLayer::SetWeight
// callers: CDOTAAnimState::ResetGestureSlots, CDOTAAnimState::ClearAnimationState, CDOTAAnimState::ResetGesture, CDOTAAnimState::ResetGestureBySequence, CDOTAAnimState::SuppressConstantLayer, CDOTAAnimState::OnNewModel, CDOTAAnimState::UpdateGestureLayer, CDOTAAnimState::InitGestureSlots, TE_UnitAnimationEnd
void __fastcall CDOTAAnimState::ResetGestureSlot(CDOTAAnimState *const this, int iGestureSlot)
{
  GestureSlot_t *v4; // rbx
  CAnimationLayer *m_pAnimLayer; // rdi
  float v6; // xmm1_4

  v4 = &this->m_aGestureSlots.m_Memory.m_pMemory[iGestureSlot];
  if ( v4 != 0 && this->m_pUnit != 0 )
  {
    m_pAnimLayer = v4->m_pAnimLayer;
    v4->m_iGestureSlot = -1;
    v4->m_iActivity = -1;
    v4->m_bAutoKill = 0;
    v4->m_bActive = 0;
    if ( m_pAnimLayer != 0 )
    {
      CAnimationLayer::SetOrder(m_pAnimLayer, 15, LayerChangeBehavior_t::LAYER_CHANGE_INVOKE_CALLBACKS);
      CAnimationLayer::Reset(v4->m_pAnimLayer);
      if ( v4->m_fFadeIn == 0.0 )
        CAnimationLayer::SetWeight(
          v4->m_pAnimLayer,
          COERCE_DOUBLE(1065353216),
          v6,
          LayerChangeBehavior_t::LAYER_CHANGE_INVOKE_CALLBACKS);
      CAnimationLayer::SetAutofadeDisabled(v4->m_pAnimLayer, 1);
    }
    if ( this->m_nGestureTriggeredUnitAnim == iGestureSlot )
      this->m_nGestureTriggeredUnitAnim = -1;
  }
}


// CDOTAAnimState::RunGestureSlotAnimEventsToCompletion  (line 246, @0x00000000024266e0, libserver.so)
void __fastcall CDOTAAnimState::RunGestureSlotAnimEventsToCompletion(
        CDOTAAnimState *const this,
        GestureSlot_t *pGesture)
{
  ;
}


// CDOTAAnimState::IsGestureSlotActive  (line 291, @0x00000000024266f0, libserver.so)  // inlines: operator[]
bool __fastcall CDOTAAnimState::IsGestureSlotActive(CDOTAAnimState *const this, int iGestureSlot)
{
  return this->m_aGestureSlots.m_Memory.m_pMemory[iGestureSlot].m_bActive;
}


// CDOTAAnimState::IsGestureSlotPlayingActivity  (line 300, @0x0000000002426710, libserver.so)  // inlines: IsGestureSlotActive, operator[]
// callers: CDOTAAnimState::RestartGesture
bool __fastcall CDOTAAnimState::IsGestureSlotPlayingActivity(
        CDOTAAnimState *const this,
        int iGestureSlot,
        Activity iGestureActivity)
{
  GestureSlot_t *v3; // rsi
  bool result; // al

  v3 = &this->m_aGestureSlots.m_Memory.m_pMemory[iGestureSlot];
  result = v3->m_bActive;
  if ( result )
    return v3->m_iActivity == iGestureActivity;
  return result;
}


// CDOTAAnimState::IsGestureSlotPlayingSequence  (line 314, @0x0000000002426740, libserver.so)  // inlines: GetSequence, IsGestureSlotActive, operator==, operator[]
// callers: CDOTAAnimState::RestartGesture
bool __fastcall CDOTAAnimState::IsGestureSlotPlayingSequence(
        CDOTAAnimState *const this,
        int iGestureSlot,
        HSequence iGestureSequence)
{
  GestureSlot_t *v3; // rsi
  bool result; // al

  v3 = &this->m_aGestureSlots.m_Memory.m_pMemory[iGestureSlot];
  result = v3->m_bActive;
  if ( result )
    return iGestureSequence.m_Data == v3->m_pAnimLayer->m_op.m_hSequence.m_Value.m_Data;
  return result;
}


// CDOTAAnimState::RestartGesture  (line 328, @0x0000000002426fc0, libserver.so)  // inlines: IsGestureSlotActive, ResetSequence, curtime, operator[]
// calls: CDOTAAnimState::IsGestureSlotPlayingActivity, CDOTAAnimState::AddToGestureSlot, CAnimationLayer::SetPlaybackRate, CBaseAnimating::IsSequenceDebugging, CAnimationLayer::SetSequence, LoggingSystem_IsChannelEnabled, CBaseAnimatingOverlay::GetBaseAnimatingOverlayController, CBaseAnimatingController::DescribeSequences, CDOTAAnimState::ResetGesture, CAnimationLayer::SetCycle, CDOTAAnimState::IsGestureSlotPlayingSequence, LoggingSystem_Log
// callers: CDOTAAnimState::ComputeGestureSequence, TE_UnitAnimation
// strings: "RestartGesture", "SV", "%s:  RestartGesture[%d] seq %d start time %f\n"
void __fastcall CDOTAAnimState::RestartGesture(
        CDOTAAnimState *const this,
        int iGestureSlot,
        unsigned int iGestureActivity,
        bool bAutoKill,
        HSequence iSequenceOverride,
        float fFadeIn,
        float fFadeOut,
        float flPlaybackRate)
{
  int v9; // r12d
  __int64 v11; // r15
  GestureSlot_t *v12; // r14
  bool IsGestureSlotPlayingActivity; // al
  float v14; // xmm1_4
  float v15; // xmm2_4
  double v16; // xmm1_8
  double v17; // xmm2_8
  float *v18; // rax
  float m_flCurrentTime; // xmm0_4
  CGlobalVars *v20; // r14
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rdx
  CBaseAnimatingOverlayController *BaseAnimatingOverlayController; // rax
  GestureSlot_t *m_pMemory; // rax
  CAnimationLayer *m_pAnimLayer; // rdi
  double v25; // xmm0_8
  CGlobalVars *v26; // rax
  FnGlobalVarsWarningFunc v27; // rdx
  float flPlaybackRateb; // [rsp+14h] [rbp-3Ch]
  float flPlaybackRatec; // [rsp+14h] [rbp-3Ch]
  float fFadeOutc; // [rsp+18h] [rbp-38h]
  float fFadeOutb; // [rsp+18h] [rbp-38h]
  float *fFadeOutd; // [rsp+18h] [rbp-38h]
  float fFadeOute; // [rsp+18h] [rbp-38h]
  CGlobalVars *fFadeOutf; // [rsp+18h] [rbp-38h]

  v9 = iGestureSlot;
  if ( iGestureSlot == 9 )
  {
    m_pMemory = this->m_aGestureSlots.m_Memory.m_pMemory;
    v12 = m_pMemory + 4;
    if ( m_pMemory[4].m_bActive )
    {
      if ( m_pMemory[5].m_bActive )
      {
        v11 = 224;
        v9 = 4;
        if ( !m_pMemory[6].m_bActive )
        {
          v12 = m_pMemory + 6;
          LOWORD(v11) = 336;
          LOBYTE(v9) = 6;
        }
      }
      else
      {
        v12 = m_pMemory + 5;
        v11 = 280;
        v9 = 5;
      }
    }
    else
    {
      v11 = 224;
      v9 = 4;
    }
  }
  else
  {
    v11 = 56LL * iGestureSlot;
    v12 = (this->m_aGestureSlots.m_Memory.m_pMemory + v11);
  }
  IsGestureSlotPlayingActivity = CDOTAAnimState::IsGestureSlotPlayingActivity(this, v9, iGestureActivity);
  v14 = fFadeOut;
  v15 = flPlaybackRate;
  if ( iGestureActivity == -1 )
  {
    IsGestureSlotPlayingActivity = CDOTAAnimState::IsGestureSlotPlayingSequence(this, v9, iSequenceOverride);
    v15 = flPlaybackRate;
    v14 = fFadeOut;
  }
  if ( IsGestureSlotPlayingActivity )
  {
    fFadeOutb = v15;
    CAnimationLayer::SetSequence(
      v12->m_pAnimLayer,
      v12->m_pAnimLayer->m_op.m_hSequence.m_Value,
      SetSequenceBehavior_t::SET_SEQUENCE_RESET_CYCLE,
      LayerChangeBehavior_t::LAYER_CHANGE_INVOKE_CALLBACKS);
    v18 = (&this->m_aGestureSlots.m_Memory.m_pMemory->m_iGestureSlot + v11);
    m_flCurrentTime = 0.0;
    *&v17 = LODWORD(fFadeOutb);
    v20 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
        {
          flPlaybackRateb = fFadeOutb;
          fFadeOutd = (&this->m_aGestureSlots.m_Memory.m_pMemory->m_iGestureSlot + v11);
          (m_pfnWarningFunc)(1, 0.0);
          v18 = fFadeOutd;
          *&v17 = LODWORD(flPlaybackRateb);
        }
      }
      m_flCurrentTime = v20->m_flCurrentTime;
    }
    v18[8] = m_flCurrentTime;
    v18[9] = m_flCurrentTime;
    *(&this->m_aGestureSlots.m_Memory.m_pMemory->m_bFadeAndDie + v11) = 0;
  }
  else
  {
    if ( v12->m_bActive )
    {
      m_pAnimLayer = v12->m_pAnimLayer;
      if ( m_pAnimLayer != 0 )
      {
        flPlaybackRatec = v15;
        fFadeOute = v14;
        CAnimationLayer::SetCycle(m_pAnimLayer, 1.0, v14, LayerChangeBehavior_t::LAYER_CHANGE_INVOKE_CALLBACKS);
        v15 = flPlaybackRatec;
        v14 = fFadeOute;
      }
    }
    fFadeOutc = v15;
    CDOTAAnimState::AddToGestureSlot(
      this,
      v9,
      iGestureActivity,
      bAutoKill,
      iSequenceOverride,
      COERCE_DOUBLE(LODWORD(fFadeIn)),
      v14);
    *&v17 = LODWORD(fFadeOutc);
  }
  CAnimationLayer::SetPlaybackRate(*(&this->m_aGestureSlots.m_Memory.m_pMemory->m_pAnimLayer + v11), v17, v16);
  if ( !CBaseAnimating::IsSequenceDebugging(this->m_pUnit) )
  {
    if ( iGestureActivity - 1508 > 1 )
      return;
LABEL_20:
    CDOTAAnimState::ResetGesture(this, 1536);
    return;
  }
  if ( LoggingSystem_IsChannelEnabled(LOG_SERVER, 1) != 0 )
  {
    v25 = 0.0;
    v26 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        v27 = gpGlobals->m_pfnWarningFunc;
        if ( v27 != 0 )
        {
          fFadeOutf = gpGlobals;
          (v27)(1, 0.0);
          v26 = fFadeOutf;
        }
      }
      v25 = v26->m_flCurrentTime;
    }
    LoggingSystem_Log(
      LOG_SERVER,
      1,
      "%s:  RestartGesture[%d] seq %d start time %f\n",
      "SV",
      v9,
      iSequenceOverride.m_Data,
      v25);
  }
  BaseAnimatingOverlayController = CBaseAnimatingOverlay::GetBaseAnimatingOverlayController(this->m_pUnit);
  CBaseAnimatingController::DescribeSequences(BaseAnimatingOverlayController, "RestartGesture");
  if ( iGestureActivity - 1508 <= 1 )
    goto LABEL_20;
}


// CDOTAAnimState::ResetSlotActivity  (line 405, @0x0000000002426780, libserver.so)  // inlines: curtime, operator[]
// calls: CDOTA_BaseNPC::SelectWeightedSequenceWithEconomy, CAnimationLayer::SetSequence, CAnimationLayer::SetPlaybackRate, CAnimationLayer::SetAnimTime, CAnimationLayer::SetFadeOutTime, CBaseAnimating::IsSequenceDebugging, LoggingSystem_IsChannelEnabled, CBaseAnimatingOverlay::GetBaseAnimatingOverlayController, CBaseAnimatingController::DescribeSequences, LoggingSystem_Log
// strings: "ResetSlotActivity", "SV", "%s:  ResetSlotActivity[%d] seq %d start time %f\n"
void __fastcall CDOTAAnimState::ResetSlotActivity(
        CDOTAAnimState *const this,
        int iGestureSlot,
        Activity iGestureActivity)
{
  CDOTA_BaseNPC *m_pUnit; // r12
  HSequence v7; // r13d
  __int64 v8; // r12
  double v9; // xmm1_8
  float v10; // xmm1_4
  float v11; // xmm1_4
  CBaseAnimatingOverlayController *BaseAnimatingOverlayController; // rax
  double m_flCurrentTime; // xmm0_8
  CGlobalVars *v14; // r15
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax

  m_pUnit = this->m_pUnit;
  if ( m_pUnit != 0 )
  {
    (*(m_pUnit->_vptr_IHandleEntity + 442))(this->m_pUnit, iGestureActivity);
    v7.m_Data = CDOTA_BaseNPC::SelectWeightedSequenceWithEconomy(m_pUnit, iGestureActivity).m_Data;
    if ( v7.m_Data != -1 )
    {
      v8 = iGestureSlot;
      this->m_aGestureSlots.m_Memory.m_pMemory[v8].m_iGestureSlot = iGestureSlot;
      this->m_aGestureSlots.m_Memory.m_pMemory[v8].m_bActive = 1;
      CAnimationLayer::SetSequence(
        this->m_aGestureSlots.m_Memory.m_pMemory[v8].m_pAnimLayer,
        v7,
        SetSequenceBehavior_t::SET_SEQUENCE_RESET_CYCLE,
        LayerChangeBehavior_t::LAYER_CHANGE_INVOKE_CALLBACKS);
      CAnimationLayer::SetPlaybackRate(
        this->m_aGestureSlots.m_Memory.m_pMemory[v8].m_pAnimLayer,
        COERCE_DOUBLE(1065353216),
        v9);
      CAnimationLayer::SetAnimTime(this->m_aGestureSlots.m_Memory.m_pMemory[v8].m_pAnimLayer, 0.0, v10);
      CAnimationLayer::SetFadeOutTime(this->m_aGestureSlots.m_Memory.m_pMemory[v8].m_pAnimLayer, 0.0, v11);
      if ( CBaseAnimating::IsSequenceDebugging(this->m_pUnit) )
      {
        if ( LoggingSystem_IsChannelEnabled(LOG_SERVER, 1) != 0 )
        {
          m_flCurrentTime = 0.0;
          v14 = gpGlobals;
          if ( gpGlobals != 0 )
          {
            if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
            {
              m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
              if ( m_pfnWarningFunc != 0 )
                (m_pfnWarningFunc)(1, 0.0);
            }
            m_flCurrentTime = v14->m_flCurrentTime;
          }
          LoggingSystem_Log(
            LOG_SERVER,
            1,
            "%s:  ResetSlotActivity[%d] seq %d start time %f\n",
            "SV",
            iGestureSlot,
            v7.m_Data,
            m_flCurrentTime);
        }
        BaseAnimatingOverlayController = CBaseAnimatingOverlay::GetBaseAnimatingOverlayController(this->m_pUnit);
        CBaseAnimatingController::DescribeSequences(BaseAnimatingOverlayController, "ResetSlotActivity");
      }
    }
  }
}


// CDOTAAnimState::ResetGesture  (line 434, @0x0000000002426910, libserver.so)  // inlines: operator[]
// calls: CDOTAAnimState::ResetGestureSlot
// callers: CDOTAAnimState::RestartGesture
void __fastcall CDOTAAnimState::ResetGesture(CDOTAAnimState *const this, Activity activity)
{
  __int64 v4; // r12
  int i; // ebx
  GestureSlot_t *v6; // rax
  int v7; // esi

  v4 = 0;
  for ( i = 0; this->m_aGestureSlots.m_Size > i; ++v4 )
  {
    while ( 1 )
    {
      v6 = &this->m_aGestureSlots.m_Memory.m_pMemory[v4];
      if ( v6->m_bActive && v6->m_iActivity == activity )
        break;
      ++i;
      ++v4;
      if ( this->m_aGestureSlots.m_Size <= i )
        return;
    }
    v7 = i++;
    CDOTAAnimState::ResetGestureSlot(this, v7);
  }
}


// CDOTAAnimState::ResetGestureBySequence  (line 447, @0x0000000002426980, libserver.so)  // inlines: GetSequence, operator[]
// calls: CDOTAAnimState::ResetGestureSlot
void __fastcall CDOTAAnimState::ResetGestureBySequence(CDOTAAnimState *const this, HSequence iSequence)
{
  __int64 v4; // r12
  int i; // ebx
  GestureSlot_t *v6; // rax
  int v7; // esi

  v4 = 0;
  for ( i = 0; this->m_aGestureSlots.m_Size > i; ++v4 )
  {
    while ( 1 )
    {
      v6 = &this->m_aGestureSlots.m_Memory.m_pMemory[v4];
      if ( v6->m_bActive && iSequence.m_Data == v6->m_pAnimLayer->m_op.m_hSequence.m_Value.m_Data )
        break;
      ++i;
      ++v4;
      if ( this->m_aGestureSlots.m_Size <= i )
        return;
    }
    v7 = i++;
    CDOTAAnimState::ResetGestureSlot(this, v7);
  }
}


// CDOTAAnimState::SetGesturePlaybackRate  (line 458, @0x00000000024269f0, libserver.so)  // inlines: operator[]
// calls: CAnimationLayer::SetPlaybackRate
void __fastcall CDOTAAnimState::SetGesturePlaybackRate(
        CDOTAAnimState *const this,
        int iGestureSlot,
        double a3,
        double fPlaybackRate)
{
  CAnimationLayer::SetPlaybackRate(
    this->m_aGestureSlots.m_Memory.m_pMemory[iGestureSlot].m_pAnimLayer,
    a3,
    fPlaybackRate);
}


// CDOTAAnimState::FadeAndDestroySlot  (line 468, @0x0000000002426a20, libserver.so)  // inlines: GetWeight, curtime, operator[]
// calls: CBaseAnimating::IsSequenceDebugging, LoggingSystem_IsChannelEnabled, CBaseAnimatingOverlay::GetBaseAnimatingOverlayController, CBaseAnimatingController::DescribeSequences, LoggingSystem_Log
// callers: CDOTAAnimState::FadeAndDestroyGesture, CDOTAAnimState::ComputeMainSequence
// strings: "FadeAndDestroySlot", "SV", "%s:  FadeAndDestroySlot[%d] fade time %f\n"
void __fastcall CDOTAAnimState::FadeAndDestroySlot(CDOTAAnimState *const this, int iGestureSlot)
{
  __int64 v4; // rbx
  GestureSlot_t *v5; // rax
  float m_flCurrentTime; // xmm0_4
  GestureSlot_t *v7; // r15
  CGlobalVars *v8; // r14
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rdx
  CBaseAnimatingOverlayController *BaseAnimatingOverlayController; // rax
  double v11; // xmm0_8
  CGlobalVars *v12; // r14
  FnGlobalVarsWarningFunc v13; // rax

  v4 = iGestureSlot;
  v5 = &this->m_aGestureSlots.m_Memory.m_pMemory[v4];
  if ( !v5->m_bFadeAndDie )
  {
    v5->m_bAutoKill = 1;
    m_flCurrentTime = 0.0;
    this->m_aGestureSlots.m_Memory.m_pMemory[v4].m_bFadeAndDie = 1;
    v7 = &this->m_aGestureSlots.m_Memory.m_pMemory[v4];
    v8 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
          (m_pfnWarningFunc)(1, 0.0);
      }
      m_flCurrentTime = v8->m_flCurrentTime;
    }
    v7->m_flStartFadeTime = m_flCurrentTime;
    this->m_aGestureSlots.m_Memory.m_pMemory[v4].m_flStartWeight = this->m_aGestureSlots.m_Memory.m_pMemory[v4].m_pAnimLayer->m_op.m_flWeight.m_Value.m_Value;
    if ( CBaseAnimating::IsSequenceDebugging(this->m_pUnit) )
    {
      if ( LoggingSystem_IsChannelEnabled(LOG_SERVER, 1) != 0 )
      {
        v11 = 0.0;
        v12 = gpGlobals;
        if ( gpGlobals != 0 )
        {
          if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
          {
            v13 = gpGlobals->m_pfnWarningFunc;
            if ( v13 != 0 )
              (v13)(1, 0.0);
          }
          v11 = v12->m_flCurrentTime;
        }
        LoggingSystem_Log(LOG_SERVER, 1, "%s:  FadeAndDestroySlot[%d] fade time %f\n", "SV", iGestureSlot, v11);
      }
      BaseAnimatingOverlayController = CBaseAnimatingOverlay::GetBaseAnimatingOverlayController(this->m_pUnit);
      CBaseAnimatingController::DescribeSequences(BaseAnimatingOverlayController, "FadeAndDestroySlot");
    }
  }
}


// CDOTAAnimState::FadeAndDestroyGesture  (line 491, @0x0000000002426b90, libserver.so)  // inlines: operator[]
// calls: CDOTAAnimState::FadeAndDestroySlot
// callers: TE_UnitAnimationEnd
void __fastcall CDOTAAnimState::FadeAndDestroyGesture(CDOTAAnimState *const this, Activity activity, int iGestureSlot)
{
  __int64 v4; // r12
  int i; // ebx
  GestureSlot_t *v7; // rax
  int v8; // esi

  if ( iGestureSlot == 9 )
  {
    v4 = 0;
    for ( i = 0; this->m_aGestureSlots.m_Size > i; ++v4 )
    {
      while ( 1 )
      {
        v7 = &this->m_aGestureSlots.m_Memory.m_pMemory[v4];
        if ( v7->m_bActive && v7->m_iActivity == activity )
          break;
        ++i;
        ++v4;
        if ( this->m_aGestureSlots.m_Size <= i )
          return;
      }
      v8 = i++;
      CDOTAAnimState::FadeAndDestroySlot(this, v8);
    }
  }
  else
  {
    CDOTAAnimState::FadeAndDestroySlot(this, iGestureSlot);
  }
}


// CDOTAAnimState::AddToGestureSlot  (line 511, @0x0000000002426c20, libserver.so)  // inlines: Get, GetOwnerEntity, ToDOTABaseNPC, curtime, operator[]
// calls: CAnimationLayer::SetSequence, CAnimationLayer::SetOrder, CAnimationLayer::SetWeight, CAnimationLayer::SetPlaybackRate, CAnimationLayer::SetAnimTime, CAnimationLayer::SetFadeOutTime, CAnimationLayer::SetFlags, CEntityHandle::GetHandleEntity, CBaseAnimatingOverlay::SetOverlayPrevEventCycle, CBaseAnimating::IsSequenceDebugging, CBaseAnimatingOverlay::GetBaseAnimatingOverlayController, CBaseAnimatingController::DescribeSequences (15 total)
// callers: CDOTAAnimState::RestartGesture
// strings: "AddToGestureSlot"
void __fastcall CDOTAAnimState::AddToGestureSlot(
        CDOTAAnimState *const this,
        int iGestureSlot,
        unsigned int iGestureActivity,
        _BOOL4 bAutoKill,
        HSequence iSequenceOverride,
        double fFadeIn,
        float fFadeOut)
{
  CDOTA_BaseNPC *m_pUnit; // r13
  __int64 v10; // r12
  float v11; // xmm2_4
  CGlobalVars *v12; // r15
  GestureSlot_t *v13; // rax
  void (__fastcall *m_pfnWarningFunc)(__int64); // rdx
  float m_flCurrentTime; // xmm1_4
  float v16; // xmm1_4
  __int64 v17; // xmm0_8
  double v18; // xmm1_8
  float v19; // xmm1_4
  float v20; // xmm1_4
  IHandleEntity *HandleEntity; // rax
  float v22; // xmm1_4
  CBaseAnimatingOverlayController *BaseAnimatingOverlayController; // rax
  const CModel *ModelPtr; // rax
  const ISequence *v25; // rax
  __int64 v26; // rsi
  double v27; // xmm0_8
  const ISequence *v28; // r15
  char v29; // al
  double v30; // xmm0_8
  double v31; // xmm0_8
  HSequence v32; // eax
  float v33; // [rsp+8h] [rbp-48h]
  float fFadeOuta; // [rsp+Ch] [rbp-44h]
  float fFadeOutb; // [rsp+Ch] [rbp-44h]
  GestureSlot_t *v36; // [rsp+10h] [rbp-40h]
  int32 m_Data; // [rsp+10h] [rbp-40h]
  _BOOL4 v38; // [rsp+10h] [rbp-40h]
  float fFadeInb; // [rsp+18h] [rbp-38h]
  _BOOL4 fFadeIna; // [rsp+18h] [rbp-38h]
  float fFadeInc; // [rsp+18h] [rbp-38h]
  HSequence iGestureSequencea; // [rsp+1Ch] [rbp-34h]
  float iGestureSequenceb; // [rsp+1Ch] [rbp-34h]
  HSequence iGestureSequence; // [rsp+1Ch] [rbp-34h]
  HSequence iGestureSequencec; // [rsp+1Ch] [rbp-34h]
  HSequence iGestureSequenced; // [rsp+1Ch] [rbp-34h]

  m_pUnit = this->m_pUnit;
  if ( m_pUnit != 0 )
  {
    v10 = iGestureSlot;
    if ( this->m_aGestureSlots.m_Memory.m_pMemory[v10].m_pAnimLayer != 0 )
    {
      v11 = *&fFadeIn;
      if ( iSequenceOverride.m_Data != -1 )
        goto LABEL_29;
      fFadeOutb = fFadeOut;
      v38 = bAutoKill;
      fFadeInc = *&fFadeIn;
      iGestureSequenced.m_Data = iGestureActivity;
      (*(m_pUnit->_vptr_IHandleEntity + 442))(m_pUnit, iGestureActivity, *&fFadeIn, fFadeOut, fFadeIn);
      v32.m_Data = CDOTA_BaseNPC::SelectWeightedSequenceWithEconomy(m_pUnit, iGestureSequenced.m_Data).m_Data;
      iGestureActivity = iGestureSequenced.m_Data;
      iSequenceOverride.m_Data = v32.m_Data;
      bAutoKill = v38;
      v11 = fFadeInc;
      fFadeOut = fFadeOutb;
      if ( v32.m_Data != -1 )
      {
LABEL_29:
        if ( iGestureActivity == 1536 )
        {
          v33 = fFadeOut;
          fFadeOuta = v11;
          fFadeIna = bAutoKill;
          iGestureSequence.m_Data = iSequenceOverride.m_Data;
          ModelPtr = CBaseAnimating::GetModelPtr(m_pUnit);
          iSequenceOverride.m_Data = iGestureSequence.m_Data;
          iGestureActivity = 1536;
          LOBYTE(bAutoKill) = fFadeIna;
          v11 = fFadeOuta;
          fFadeOut = v33;
          if ( ModelPtr != 0 )
          {
            v25 = CModel::pSeqdesc(ModelPtr, iGestureSequence);
            iSequenceOverride.m_Data = iGestureSequence.m_Data;
            v28 = v25;
            iGestureActivity = 1536;
            LOBYTE(bAutoKill) = fFadeIna;
            v11 = fFadeOuta;
            fFadeOut = v33;
            if ( v25 != 0 )
            {
              v29 = (*(v25->_vptr_IBaseSequence + 18))(
                      v25,
                      v26,
                      1536,
                      fFadeIna,
                      iGestureSequence.m_Data,
                      v27,
                      v33,
                      fFadeOuta);
              iSequenceOverride.m_Data = iGestureSequence.m_Data;
              iGestureActivity = 1536;
              LOBYTE(bAutoKill) = fFadeIna;
              v11 = fFadeOuta;
              fFadeOut = v33;
              if ( v29 == 0 )
              {
                m_Data = iGestureSequence.m_Data;
                *&iGestureSequencec.m_Data = (*(v28->_vptr_IBaseSequence + 41))(v28, v30, v33, fFadeOuta);
                v31 = (*(v28->_vptr_IBaseSequence + 42))(v28);
                v11 = *&iGestureSequencec.m_Data;
                fFadeOut = *&v31;
                iSequenceOverride.m_Data = m_Data;
                iGestureActivity = 1536;
                LOBYTE(bAutoKill) = fFadeIna;
              }
            }
          }
        }
        this->m_aGestureSlots.m_Memory.m_pMemory[v10].m_iGestureSlot = iGestureSlot;
        this->m_aGestureSlots.m_Memory.m_pMemory[v10].m_iActivity = iGestureActivity;
        v12 = gpGlobals;
        this->m_aGestureSlots.m_Memory.m_pMemory[v10].m_bAutoKill = bAutoKill;
        this->m_aGestureSlots.m_Memory.m_pMemory[v10].m_bActive = 1;
        this->m_aGestureSlots.m_Memory.m_pMemory[v10].m_fFadeIn = v11;
        this->m_aGestureSlots.m_Memory.m_pMemory[v10].m_fFadeOut = fFadeOut;
        v13 = &this->m_aGestureSlots.m_Memory.m_pMemory[v10];
        if ( v12 != 0 )
        {
          if ( !v12->m_bEnableAssertions && !v12->m_bInSimulation )
          {
            m_pfnWarningFunc = v12->m_pfnWarningFunc;
            if ( m_pfnWarningFunc != 0 )
            {
              fFadeInb = v11;
              v36 = &this->m_aGestureSlots.m_Memory.m_pMemory[v10];
              iGestureSequencea.m_Data = iSequenceOverride.m_Data;
              m_pfnWarningFunc(1);
              v13 = v36;
              iSequenceOverride.m_Data = iGestureSequencea.m_Data;
              v11 = fFadeInb;
            }
          }
          m_flCurrentTime = v12->m_flCurrentTime;
        }
        else
        {
          m_flCurrentTime = 0.0;
        }
        v13->m_flAnimTime = m_flCurrentTime;
        v13->m_flAnimStartTime = m_flCurrentTime;
        iGestureSequenceb = v11;
        CAnimationLayer::SetSequence(
          this->m_aGestureSlots.m_Memory.m_pMemory[v10].m_pAnimLayer,
          iSequenceOverride,
          SetSequenceBehavior_t::SET_SEQUENCE_RESET_CYCLE,
          LayerChangeBehavior_t::LAYER_CHANGE_INVOKE_CALLBACKS);
        CAnimationLayer::SetOrder(
          this->m_aGestureSlots.m_Memory.m_pMemory[v10].m_pAnimLayer,
          iGestureSlot,
          LayerChangeBehavior_t::LAYER_CHANGE_INVOKE_CALLBACKS);
        v17 = 0;
        if ( iGestureSequenceb == 0.0 )
          v17 = 1065353216;
        CAnimationLayer::SetWeight(
          this->m_aGestureSlots.m_Memory.m_pMemory[v10].m_pAnimLayer,
          *&v17,
          v16,
          LayerChangeBehavior_t::LAYER_CHANGE_INVOKE_CALLBACKS);
        CAnimationLayer::SetPlaybackRate(
          this->m_aGestureSlots.m_Memory.m_pMemory[v10].m_pAnimLayer,
          COERCE_DOUBLE(1065353216),
          v18);
        CAnimationLayer::SetAnimTime(this->m_aGestureSlots.m_Memory.m_pMemory[v10].m_pAnimLayer, 0.0, v19);
        CAnimationLayer::SetFadeOutTime(this->m_aGestureSlots.m_Memory.m_pMemory[v10].m_pAnimLayer, 0.0, v20);
        CAnimationLayer::SetFlags(this->m_aGestureSlots.m_Memory.m_pMemory[v10].m_pAnimLayer, 1);
        this->m_aGestureSlots.m_Memory.m_pMemory[v10].m_bFadeAndDie = 0;
        this->m_aGestureSlots.m_Memory.m_pMemory[v10].m_flSuppressedWeight = 0.0;
        HandleEntity = CEntityHandle::GetHandleEntity(&m_pUnit->m_hOwnerEntity.m_Value);
        if ( HandleEntity != 0
          && BYTE3(HandleEntity[42]._vptr_IHandleEntity) != 0
          && (HandleEntity[261]._vptr_IHandleEntity & 0x10) != 0 )
        {
          CAnimationLayer::SetWeight(
            this->m_aGestureSlots.m_Memory.m_pMemory[v10].m_pAnimLayer,
            COERCE_DOUBLE(1065353216),
            v22,
            LayerChangeBehavior_t::LAYER_CHANGE_INVOKE_CALLBACKS);
        }
        CBaseAnimatingOverlay::SetOverlayPrevEventCycle(m_pUnit, iGestureSlot, -1.0, v22);
        if ( CBaseAnimating::IsSequenceDebugging(this->m_pUnit) )
        {
          BaseAnimatingOverlayController = CBaseAnimatingOverlay::GetBaseAnimatingOverlayController(this->m_pUnit);
          CBaseAnimatingController::DescribeSequences(BaseAnimatingOverlayController, "AddToGestureSlot");
        }
      }
    }
  }
}


// CDOTAAnimState::ComputeSequences  (line 596, @0x000000000242dfb0, libserver.so)
// calls: CDOTAAnimState::ComputeMainSequence, CDOTAAnimState::ComputeGestureSequence
void __fastcall CDOTAAnimState::ComputeSequences(CDOTAAnimState *const this, const CModel *pStudioHdr)
{
  CDOTAAnimState::ComputeMainSequence(this);
  CDOTAAnimState::ComputeGestureSequence(this, pStudioHdr);
}


// CDOTAAnimState::ComputeMainSequence  (line 606, @0x000000000242df20, libserver.so)  // inlines: FadeAndDestroyGesture, GetSequence, IsAbilityActivity
// calls: CBaseAnimating::GetBaseAnimatingController, CBaseAnimating::GetSequenceActivity, CUtlVectorBase<int, CUtlMemory<int, int> >::Find, CDOTAAnimState::FadeAndDestroySlot
// callers: CDOTAAnimState::ComputeSequences
void __fastcall CDOTAAnimState::ComputeMainSequence(CDOTAAnimState *const this)
{
  CDOTA_BaseNPC *m_pUnit; // r12
  const CBaseAnimatingController *BaseAnimatingController; // rax
  HSequence v4; // eax
  GestureSlot_t *m_pMemory; // rdx
  Activity SequenceActivity; // r12d
  int src[5]; // [rsp+Ch] [rbp-14h] BYREF

  m_pUnit = this->m_pUnit;
  BaseAnimatingController = CBaseAnimating::GetBaseAnimatingController(m_pUnit);
  v4.m_Data = (*(BaseAnimatingController->_vptr_CSkeletonAnimationController + 24))(BaseAnimatingController);
  m_pMemory = this->m_aGestureSlots.m_Memory.m_pMemory;
  if ( m_pMemory != -112LL && m_pMemory[2].m_bActive )
  {
    SequenceActivity = CBaseAnimating::GetSequenceActivity(m_pUnit, v4);
    src[0] = SequenceActivity;
    if ( CUtlVectorBase<int,CUtlMemory<int,int>>::Find(&g_DOTAAbilityActivities.m_Activities, src) == -1
      && (SequenceActivity - 1510) > 5
      && SequenceActivity != 1598 )
    {
      CDOTAAnimState::FadeAndDestroySlot(this, 2);
    }
  }
}


// CDOTAAnimState::SuppressConstantLayer  (line 638, @0x0000000002427300, libserver.so)  // inlines: GetOrder, GetSequence
// calls: CDOTAAnimState::ResetGestureSlot
// callers: CDOTA_BaseNPC::HandleAnimEvent
void __fastcall CDOTAAnimState::SuppressConstantLayer(CDOTAAnimState *const this, bool bSuppress, int nLayerOrder)
{
  GestureSlot_t *m_pMemory; // r8
  int v4; // ecx
  GestureSlot_t *i; // rax

  if ( this->m_bSuppressConstantLayer != bSuppress )
  {
    this->m_bSuppressConstantLayer = bSuppress;
    this->m_nGestureSlotForSuppression = -1;
    this->m_nGestureSequenceInSuppressionSlot.m_Data = -1;
    if ( bSuppress )
    {
      m_pMemory = this->m_aGestureSlots.m_Memory.m_pMemory;
      v4 = 0;
      for ( i = m_pMemory; !i->m_bActive || nLayerOrder != i->m_pAnimLayer->m_nOrder.m_Value; ++i )
      {
        if ( ++v4 == 9 )
        {
          this->m_bSuppressConstantLayer = 0;
          return;
        }
      }
      this->m_nGestureSlotForSuppression = v4;
      this->m_nGestureSequenceInSuppressionSlot.m_Data = i->m_pAnimLayer->m_op.m_hSequence.m_Value.m_Data;
      if ( m_pMemory[7].m_bActive )
        CDOTAAnimState::ResetGestureSlot(this, 7);
    }
  }
}


// CDOTAAnimState::IsSuppressingConstantLayer  (line 674, @0x0000000002427390, libserver.so)
bool __fastcall CDOTAAnimState::IsSuppressingConstantLayer(const CDOTAAnimState *const this)
{
  return this->m_bSuppressConstantLayer;
}


// CDOTAAnimState::ComputeGestureSequence  (line 681, @0x00000000024280f0, libserver.so)  // inlines: GetSequence, IsGestureSlotActive, operator[]
// calls: CDOTAAnimState::UpdateGestureLayer, CDOTAAnimState::RestartGesture
// callers: CDOTAAnimState::ComputeSequences
void __fastcall CDOTAAnimState::ComputeGestureSequence(CDOTAAnimState *const this, const CModel *pStudioHdr)
{
  CDOTA_BaseNPC *m_pUnit; // rdi
  GestureSlot_t *m_pMemory; // rdx
  __int64 v6; // rbx
  GestureSlot_t *v7; // rdx
  GestureSlot_t *v8; // rax

  m_pUnit = this->m_pUnit;
  if ( m_pUnit != 0 && (*(m_pUnit->_vptr_IHandleEntity + 408))(m_pUnit) != 0 )
  {
    if ( this->m_bSuppressConstantLayer )
    {
      m_pMemory = this->m_aGestureSlots.m_Memory.m_pMemory;
      v8 = &m_pMemory[this->m_nGestureSlotForSuppression];
      if ( v8->m_bActive
        && this->m_nGestureSequenceInSuppressionSlot.m_Data == v8->m_pAnimLayer->m_op.m_hSequence.m_Value.m_Data )
      {
        goto LABEL_6;
      }
      this->m_bSuppressConstantLayer = 0;
    }
    if ( (*(this->m_pUnit->_vptr_IHandleEntity + 380))(this->m_pUnit, 0) != 0 )
    {
      m_pMemory = this->m_aGestureSlots.m_Memory.m_pMemory;
      if ( m_pMemory[7].m_bActive )
        goto LABEL_6;
      CDOTAAnimState::RestartGesture(this, 7, 0x5FCu, 0, -1, 0.0, 0.0, 1.0);
    }
  }
  m_pMemory = this->m_aGestureSlots.m_Memory.m_pMemory;
LABEL_6:
  v6 = 0;
  while ( 1 )
  {
    v7 = &m_pMemory[v6];
    if ( v7->m_bActive )
      break;
    if ( ++v6 == 9 )
      return;
LABEL_8:
    m_pMemory = this->m_aGestureSlots.m_Memory.m_pMemory;
  }
  ++v6;
  CDOTAAnimState::UpdateGestureLayer(this, pStudioHdr, v7);
  if ( v6 != 9 )
    goto LABEL_8;
}


// CDOTAAnimState::UpdateGestureLayer  (line 712, @0x0000000002427920, libserver.so)  // inlines: DOTAGameRules, Get, GetCycle, GetOwnerEntity, GetSequence, GetWeight, IsGamePaused, IsGestureSlotActive, Max<float>, RemapValClamped, ToDOTABaseNPC, clamp<float, float>, curtime
// calls: CEntityHandle::GetHandleEntity, CBaseAnimating::GetSequenceActivity, CDOTAAnimState::ResetGestureSlot, CBaseAnimating::ShouldAnimateDuringGameplayPause, CDOTAAnimState::GetIntervalTime, CBaseAnimating::GetSequenceCycleRate, CBaseAnimating::IsSequenceLooping, CBaseAnimating::SequenceDuration, CDOTAAnimState::GetAnimationLayerForSlot, CAnimationLayer::SetWeight, CAnimationLayer::SetPrevCycle, CAnimationLayer::SetCycle (17 total)
// callers: CDOTAAnimState::ComputeGestureSequence
// strings: "UpdateGestureLayer", "SV", "%s:  UpdateGestureLayer[%d] seq %d cycle %6.4f -> %6.4f weight %6.4f\n"
void __fastcall CDOTAAnimState::UpdateGestureLayer(
        CDOTAAnimState *const this,
        const CModel *pStudioHdr,
        GestureSlot_t *pGesture)
{
  CDOTA_BaseNPC *m_pUnit; // rbx
  IHandleEntity *HandleEntity; // rax
  float IntervalTime; // xmm0_4
  float SequenceCycleRate; // xmm0_4
  CAnimationLayer *m_pAnimLayer; // rax
  bool IsSequenceLooping; // al
  double v11; // xmm0_8
  bool v12; // r13
  CGlobalVars *v13; // r14
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  float m_flCurrentTime; // xmm2_4
  __m128 v16; // xmm0
  __m128 v17; // xmm1
  __m128 v18; // xmm2
  __m128 v19; // xmm3
  char v20; // r14
  double v21; // xmm0_8
  __m128 m_fFadeIn_low; // xmm4
  float v23; // xmm0_4
  float v24; // xmm4_4
  double v25; // xmm4_8
  CAnimationLayer *v26; // rdi
  __m128 m_flStartWeight_low; // xmm4
  CAnimationLayer *v28; // rdx
  GestureSlot_t *m_pMemory; // rax
  CAnimationLayer *AnimationLayerForSlot; // rax
  float v31; // xmm1_4
  float v32; // xmm1_4
  float v33; // xmm1_4
  __int64 m_iGestureSlot; // rdx
  CBaseAnimatingOverlayController *BaseAnimatingOverlayController; // rax
  float v36; // xmm4_4
  float m_fFadeOut; // xmm5_4
  float v38; // xmm5_4
  float v39; // xmm0_4
  float v40; // xmm0_4
  CGlobalVars *v41; // rcx
  FnGlobalVarsWarningFunc v42; // rax
  float v43; // xmm5_4
  float v44; // xmm5_4
  __m128 v45; // xmm5
  float v46; // xmm5_4
  float v47; // xmm6_4
  double v48; // xmm0_8
  unsigned __int32 v49; // [rsp-10h] [rbp-58h]
  float v50; // [rsp-Ch] [rbp-54h]
  CAnimationLayer *v51; // [rsp-8h] [rbp-50h]
  unsigned int m_iActivity; // [rsp-8h] [rbp-50h]
  unsigned __int32 v53; // [rsp-8h] [rbp-50h]
  unsigned __int32 v54; // [rsp-8h] [rbp-50h]
  unsigned __int32 v55; // [rsp-8h] [rbp-50h]
  float lastActivity; // [rsp+0h] [rbp-48h]
  unsigned int lastActivitya; // [rsp+0h] [rbp-48h]
  unsigned int lastActivityb; // [rsp+0h] [rbp-48h]
  float lastActivityc; // [rsp+0h] [rbp-48h]
  unsigned int lastActivityd; // [rsp+0h] [rbp-48h]
  CGlobalVars *lastActivitye; // [rsp+0h] [rbp-48h]
  Activity lastActivityf; // [rsp+0h] [rbp-48h]
  unsigned int lastActivityg; // [rsp+0h] [rbp-48h]
  unsigned __int32 flIntervala; // [rsp+8h] [rbp-40h]
  char flInterval; // [rsp+8h] [rbp-40h]
  __int32 flIntervalb; // [rsp+8h] [rbp-40h]
  unsigned __int32 flIntervalc; // [rsp+8h] [rbp-40h]
  float m_Value; // [rsp+Ch] [rbp-3Ch]
  float v69; // [rsp+Ch] [rbp-3Ch]
  unsigned __int32 v70; // [rsp+Ch] [rbp-3Ch]
  __int32 v71; // [rsp+Ch] [rbp-3Ch]
  float v72; // [rsp+Ch] [rbp-3Ch]
  unsigned int v73; // [rsp+Ch] [rbp-3Ch]
  unsigned __int32 v74; // [rsp+Ch] [rbp-3Ch]
  __int32 v75; // [rsp+Ch] [rbp-3Ch]
  __int32 v76; // [rsp+Ch] [rbp-3Ch]
  unsigned int v77; // [rsp+Ch] [rbp-3Ch]
  unsigned int v78; // [rsp+Ch] [rbp-3Ch]

  if ( pStudioHdr != 0 && pGesture != 0 )
  {
    m_pUnit = this->m_pUnit;
    if ( m_pUnit != 0
      && (g_pGameRules == 0
       || g_pGameRules[19].m_szQuestName[29] == 0
       || CBaseAnimating::ShouldAnimateDuringGameplayPause(this->m_pUnit)) )
    {
      HandleEntity = CEntityHandle::GetHandleEntity(&m_pUnit->m_hOwnerEntity.m_Value);
      if ( HandleEntity == 0
        || BYTE3(HandleEntity[42]._vptr_IHandleEntity) == 0
        || (HandleEntity[261]._vptr_IHandleEntity & 0x10) == 0 )
      {
        if ( pGesture->m_iActivity != -1
          && CBaseAnimating::GetSequenceActivity(m_pUnit, pGesture->m_pAnimLayer->m_op.m_hSequence.m_Value) != pGesture->m_iActivity )
        {
          goto LABEL_10;
        }
        m_Value = pGesture->m_pAnimLayer->m_op.m_flCycle.m_Value;
        IntervalTime = CDOTAAnimState::GetIntervalTime(this, pGesture->m_iGestureSlot);
        if ( IntervalTime > 0.0 )
        {
          lastActivity = IntervalTime;
          SequenceCycleRate = CBaseAnimating::GetSequenceCycleRate(
                                m_pUnit,
                                pGesture->m_pAnimLayer->m_op.m_hSequence.m_Value);
          m_pAnimLayer = pGesture->m_pAnimLayer;
          v69 = ((SequenceCycleRate * m_pAnimLayer->m_flPlaybackRate.m_Value.m_Value) * lastActivity) + m_Value;
          IsSequenceLooping = CBaseAnimating::IsSequenceLooping(m_pUnit, m_pAnimLayer->m_op.m_hSequence.m_Value);
          *&v11 = LODWORD(v69);
          v12 = IsSequenceLooping;
          v13 = gpGlobals;
          if ( gpGlobals != 0 )
          {
            if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
            {
              m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
              if ( m_pfnWarningFunc != 0 )
              {
                m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
                *&v11 = LODWORD(v69);
              }
            }
            m_flCurrentTime = v13->m_flCurrentTime;
          }
          else
          {
            m_flCurrentTime = 0.0;
          }
          pGesture->m_flAnimTime = m_flCurrentTime;
          *v16.m128_u64 = (*(m_pUnit->_vptr_IHandleEntity + 382))(m_pUnit, v11);
          v17 = 0u;
          v18 = v16;
          if ( v16.m128_f32[0] < 0.0 )
          {
            v20 = 0;
            if ( v12 )
            {
              v19 = 0x3F800000u;
              v18.m128_f32[0] = v16.m128_f32[0] - v16.m128_f32[0];
            }
            else
            {
              v18 = 0u;
              v19 = 0x3F800000u;
            }
          }
          else
          {
            v19 = 0x3F800000u;
            v20 = 0;
            if ( v16.m128_f32[0] >= 1.0 )
            {
              v20 = 1;
              if ( v12 )
                v18.m128_f32[0] = v16.m128_f32[0] - v16.m128_f32[0];
              else
                v18 = 0x3F800000u;
            }
          }
          *&v21 = LODWORD(pGesture->m_flSuppressedWeight);
          if ( *&v21 != 0.0 && !this->m_aGestureSlots.m_Memory.m_pMemory->m_bActive )
          {
            lastActivityd = v19.m128_i32[0];
            v74 = v18.m128_i32[0];
            CAnimationLayer::SetWeight(
              pGesture->m_pAnimLayer,
              v21,
              0.0,
              LayerChangeBehavior_t::LAYER_CHANGE_INVOKE_CALLBACKS);
            pGesture->m_flSuppressedWeight = 0.0;
            v18 = v74;
            v19 = lastActivityd;
            v17 = 0u;
          }
          if ( pGesture->m_iGestureSlot == 7 )
          {
            v54 = v17.m128_i32[0];
            lastActivityf = v19.m128_i32[0];
            v76 = v18.m128_i32[0];
            v48 = (*(m_pUnit->_vptr_IHandleEntity + 381))(
                    m_pUnit,
                    pGesture->m_pAnimLayer->m_op.m_flWeight.m_Value.m_Value);
            v28 = pGesture->m_pAnimLayer;
            flInterval = 0;
            *m_flStartWeight_low.m128_u64 = v48;
            v17.m128_u64[0] = v54;
            v19.m128_i32[0] = lastActivityf;
            v18.m128_i32[0] = v76;
LABEL_42:
            m_pMemory = this->m_aGestureSlots.m_Memory.m_pMemory;
            if ( !m_pMemory[8].m_bActive || pGesture->m_iGestureSlot == 8 )
            {
              if ( m_pMemory->m_bActive && pGesture->m_iGestureSlot != 0 )
              {
                LODWORD(pGesture->m_flSuppressedWeight) = m_flStartWeight_low.m128_i32[0];
                m_flStartWeight_low.m128_u64[0] = v17.m128_u64[0];
              }
            }
            else
            {
              v49 = v17.m128_i32[0];
              v50 = v19.m128_f32[0];
              v51 = v28;
              lastActivityb = m_flStartWeight_low.m128_i32[0];
              v71 = v18.m128_i32[0];
              AnimationLayerForSlot = CDOTAAnimState::GetAnimationLayerForSlot(this, 8);
              v19.m128_f32[0] = v50;
              v18.m128_i32[0] = v71;
              m_flStartWeight_low.m128_u64[0] = lastActivityb;
              v28 = v51;
              v17.m128_i32[0] = v49;
              if ( v50 == AnimationLayerForSlot->m_op.m_flWeight.m_Value.m_Value )
                m_flStartWeight_low.m128_u64[0] = v49;
            }
            lastActivityc = v19.m128_f32[0];
            v72 = v18.m128_f32[0];
            CAnimationLayer::SetWeight(
              v28,
              *m_flStartWeight_low.m128_u64,
              v17.m128_f32[0],
              LayerChangeBehavior_t::LAYER_CHANGE_INVOKE_CALLBACKS);
            CAnimationLayer::SetPrevCycle(pGesture->m_pAnimLayer, pGesture->m_pAnimLayer->m_op.m_flCycle.m_Value, v31);
            CAnimationLayer::SetCycle(
              pGesture->m_pAnimLayer,
              v72,
              v32,
              LayerChangeBehavior_t::LAYER_CHANGE_INVOKE_CALLBACKS);
            m_iGestureSlot = pGesture->m_iGestureSlot;
            m_iActivity = pGesture->m_iActivity;
            if ( v72 >= lastActivityc )
            {
              if ( pGesture->m_bAutoKill && flInterval == 0 )
              {
                v77 = pGesture->m_iGestureSlot;
                CDOTAAnimState::ResetGestureSlot(this, m_iGestureSlot);
                m_iGestureSlot = v77;
              }
              else
              {
                v73 = pGesture->m_iGestureSlot;
                CAnimationLayer::SetCycle(
                  pGesture->m_pAnimLayer,
                  1.0,
                  v33,
                  LayerChangeBehavior_t::LAYER_CHANGE_INVOKE_CALLBACKS);
                m_iGestureSlot = v73;
              }
            }
            if ( v20 != 0 )
              (*(m_pUnit->_vptr_IHandleEntity + 383))(m_pUnit, m_iActivity, m_iGestureSlot, v12);
            if ( CBaseAnimating::IsSequenceDebugging(this->m_pUnit) )
            {
              if ( LoggingSystem_IsChannelEnabled(LOG_SERVER, 1) != 0 )
                LoggingSystem_Log(
                  LOG_SERVER,
                  1,
                  "%s:  UpdateGestureLayer[%d] seq %d cycle %6.4f -> %6.4f weight %6.4f\n",
                  "SV",
                  pGesture->m_iGestureSlot,
                  pGesture->m_pAnimLayer->m_op.m_hSequence.m_Value.m_Data,
                  pGesture->m_pAnimLayer->m_op.m_flPrevCycle.m_Value,
                  pGesture->m_pAnimLayer->m_op.m_flCycle.m_Value,
                  pGesture->m_pAnimLayer->m_op.m_flWeight.m_Value.m_Value);
              BaseAnimatingOverlayController = CBaseAnimatingOverlay::GetBaseAnimatingOverlayController(this->m_pUnit);
              CBaseAnimatingController::DescribeSequences(BaseAnimatingOverlayController, "UpdateGestureLayer");
            }
            return;
          }
          m_fFadeIn_low = LODWORD(pGesture->m_fFadeIn);
          if ( m_fFadeIn_low.m128_f32[0] > v17.m128_f32[0] || pGesture->m_fFadeOut > v17.m128_f32[0] )
          {
            flIntervala = v17.m128_i32[0];
            lastActivitya = v19.m128_i32[0];
            v70 = v18.m128_i32[0];
            v23 = CBaseAnimating::SequenceDuration(m_pUnit, pGesture->m_pAnimLayer->m_op.m_hSequence.m_Value);
            v18 = v70;
            v19 = lastActivitya;
            v17 = flIntervala;
            m_fFadeIn_low = LODWORD(pGesture->m_fFadeIn);
            if ( v23 < 0.001 )
              v23 = 0.001;
          }
          else
          {
            v23 = v17.m128_f32[0];
          }
          if ( v12 )
          {
            if ( m_fFadeIn_low.m128_f32[0] == v17.m128_f32[0] )
              goto LABEL_39;
            m_fFadeIn_low.m128_f32[0] = m_fFadeIn_low.m128_f32[0] / v23;
            if ( m_fFadeIn_low.m128_f32[0] <= v19.m128_f32[0] )
              LODWORD(v24) = m_fFadeIn_low.m128_i32[0] & _mm_cmpge_ss(m_fFadeIn_low, v17).m128_u32[0];
            else
              v24 = v19.m128_f32[0];
            if ( v24 <= v18.m128_f32[0] )
              goto LABEL_39;
            if ( (v18.m128_f32[0] / v24) <= v19.m128_f32[0] )
              *&v25 = v18.m128_u64[0] & _mm_cmpge_ss(v18, v17).m128_u64[0];
            else
              v25 = *v19.m128_u64;
            v26 = pGesture->m_pAnimLayer;
            if ( *&v25 <= v26->m_op.m_flWeight.m_Value.m_Value )
              goto LABEL_39;
            v55 = v17.m128_i32[0];
            flIntervalc = v19.m128_i32[0];
            lastActivityg = v18.m128_i32[0];
            v78 = LODWORD(v25);
            CAnimationLayer::SetWeight(v26, v25, v17.m128_f32[0], LayerChangeBehavior_t::LAYER_CHANGE_INVOKE_CALLBACKS);
            m_flStartWeight_low.m128_u64[0] = v78;
            v18.m128_u64[0] = lastActivityg;
            v19.m128_u64[0] = flIntervalc;
            v17 = v55;
          }
          else
          {
            if ( m_fFadeIn_low.m128_f32[0] == v17.m128_f32[0]
              || ((m_fFadeIn_low.m128_f32[0] = m_fFadeIn_low.m128_f32[0] / v23,
                   m_fFadeIn_low.m128_f32[0] <= v19.m128_f32[0])
                ? (LODWORD(v36) = m_fFadeIn_low.m128_i32[0] & _mm_cmpge_ss(m_fFadeIn_low, v17).m128_u32[0])
                : (v36 = v19.m128_f32[0]),
                  v36 <= v18.m128_f32[0] || (v18.m128_f32[0] / v36) > v19.m128_f32[0]) )
            {
              m_flStartWeight_low.m128_u64[0] = v19.m128_u64[0];
            }
            else
            {
              m_flStartWeight_low.m128_u64[0] = v18.m128_u64[0] & _mm_cmpge_ss(v18, v17).m128_u64[0];
            }
            m_fFadeOut = pGesture->m_fFadeOut;
            if ( m_fFadeOut != v17.m128_f32[0] )
            {
              v38 = m_fFadeOut / v23;
              if ( v38 <= v19.m128_f32[0] )
              {
                v39 = v19.m128_f32[0];
                if ( v17.m128_f32[0] > v38 )
                  v38 = v17.m128_f32[0];
                else
                  v39 = v19.m128_f32[0] - v38;
              }
              else
              {
                v39 = v17.m128_f32[0];
                v38 = v19.m128_f32[0];
              }
              if ( v18.m128_f32[0] >= v39 )
              {
                m_flStartWeight_low = v19;
                m_flStartWeight_low.m128_f32[0] = v19.m128_f32[0] - ((v18.m128_f32[0] - v39) / v38);
                if ( m_flStartWeight_low.m128_f32[0] > v19.m128_f32[0] )
                {
LABEL_39:
                  m_flStartWeight_low.m128_u64[0] = v19.m128_u64[0];
                  goto LABEL_40;
                }
                m_flStartWeight_low.m128_u64[0] &= _mm_cmpge_ss(m_flStartWeight_low, v17).m128_u64[0];
              }
            }
          }
LABEL_40:
          if ( pGesture->m_bFadeAndDie )
          {
            v40 = pGesture->m_fFadeOut;
            if ( v40 < v17.m128_f32[0]
              || (v28 = pGesture->m_pAnimLayer, v17.m128_f32[0] >= v28->m_op.m_flWeight.m_Value.m_Value) )
            {
LABEL_10:
              CDOTAAnimState::ResetGestureSlot(this, pGesture->m_iGestureSlot);
              return;
            }
            v41 = gpGlobals;
            if ( gpGlobals != 0 )
            {
              if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
              {
                v42 = gpGlobals->m_pfnWarningFunc;
                if ( v42 != 0 )
                {
                  v53 = v17.m128_i32[0];
                  flIntervalb = v19.m128_i32[0];
                  lastActivitye = gpGlobals;
                  v75 = v18.m128_i32[0];
                  (v42)(1, v40, *v17.m128_u64, *v18.m128_u64, *v19.m128_u64, *m_flStartWeight_low.m128_u64);
                  v28 = pGesture->m_pAnimLayer;
                  v41 = lastActivitye;
                  v40 = pGesture->m_fFadeOut;
                  v17 = v53;
                  v19.m128_i32[0] = flIntervalb;
                  v18.m128_i32[0] = v75;
                }
              }
              v43 = v41->m_flCurrentTime;
            }
            else
            {
              v43 = v17.m128_f32[0];
            }
            m_flStartWeight_low = LODWORD(pGesture->m_flStartWeight);
            v44 = (v43 - pGesture->m_flStartFadeTime) / v28->m_flPlaybackRate.m_Value.m_Value;
            if ( v40 == v17.m128_f32[0] )
            {
              v45.m128_f32[0] = v44 - v40;
              flInterval = 1;
              m_flStartWeight_low.m128_u64[0] = _mm_andnot_ps(_mm_cmple_ss(v17, v45), m_flStartWeight_low).m128_u64[0];
            }
            else
            {
              v46 = v44 / v40;
              v47 = v17.m128_f32[0];
              if ( v17.m128_f32[0] <= v46 )
                v47 = fminf(v19.m128_f32[0], v46);
              flInterval = 1;
              m_flStartWeight_low.m128_f32[0] = m_flStartWeight_low.m128_f32[0]
                                              + ((v17.m128_f32[0] - m_flStartWeight_low.m128_f32[0]) * v47);
            }
          }
          else
          {
            v28 = pGesture->m_pAnimLayer;
            flInterval = 0;
          }
          goto LABEL_42;
        }
      }
    }
  }
}


// CDOTAAnimState::Update  (line 928, @0x0000000002427680, libserver.so)  // inlines: GetInt, entindex
// calls: CBaseAnimating::GetModelPtr, CEntityInstance::GetEntityIndex, CDOTAAnimState::DebugGestureInfo
void __fastcall CDOTAAnimState::Update(CDOTAAnimState *const this)
{
  const CModel *ModelPtr; // rax
  int m_nValue; // r12d

  ModelPtr = CBaseAnimating::GetModelPtr(this->m_pUnit);
  if ( ModelPtr != 0 )
  {
    (*(this->_vptr_CDOTAAnimState + 6))(this, ModelPtr);
    m_nValue = dota_animation_debug.m_pParent->m_Value.m_nValue;
    if ( CEntityInstance::GetEntityIndex(this->m_pUnit).m_Data == m_nValue )
      CDOTAAnimState::DebugGestureInfo(this);
  }
}


// CDOTAAnimState::ShouldUpdateAnimState  (line 949, @0x00000000024273a0, libserver.so)
bool __fastcall CDOTAAnimState::ShouldUpdateAnimState(CDOTAAnimState *const this)
{
  CDOTA_BaseNPC *m_pUnit; // rdi

  m_pUnit = this->m_pUnit;
  return (m_pUnit->m_fEffects.m_Value & 0x20) == 0
      && SLOBYTE(m_pUnit->m_pEntity->m_flags) >= 0
      && (*(m_pUnit->_vptr_IHandleEntity + 408))(m_pUnit);
}


// CDOTAAnimState::Release  (line 965, @0x0000000002426560, libserver.so)
// calls: CDOTAAnimState::~CDOTAAnimState, operator delete
void __fastcall CDOTAAnimState::Release(CDOTAAnimState *const this)
{
  if ( this != 0 )
  {
    CDOTAAnimState::~CDOTAAnimState(this);
    operator delete(this);
  }
}


// Anim_StatePrintf  (line 972, @0x00000000024273d0, libserver.so)
// calls: V_vsnprintf, __stack_chk_fail
// callers: CDOTAAnimState::DebugGestureInfo
void Anim_StatePrintf(int iLine, const char *pMsg, ...)
{
  va_list marker; // [rsp+8h] [rbp-10E8h] BYREF
  char str[4104]; // [rsp+20h] [rbp-10D0h] BYREF
  unsigned __int64 v5; // [rsp+1028h] [rbp-C8h]

  va_start(marker, pMsg);
  v5 = __readfsqword(0x28u);
  V_vsnprintf(str, 4096, pMsg, marker);
  (*(*engine + 320LL))(engine, iLine, "%s", str);
}


// CDOTAAnimState::DebugGestureInfo  (line 1001, @0x00000000024274d0, libserver.so)  // inlines: ActivityList_NameForIndex
// calls: Anim_StatePrintf, CBaseAnimating::GetModelPtr, GetSequenceName
// callers: CDOTAAnimState::Update
// strings: "false", "true", "Gesture Slot %d(%s): %s %s(A:%s, C:%2.3f P:%2.1f W:%2.3f)\n", "Gesture Slot %d(%s): NOT ACTIVE!\n"
// globals: s_aGestureSlotNames
void __fastcall CDOTAAnimState::DebugGestureInfo(CDOTAAnimState *const this)
{
  __int64 v1; // r15
  __int64 v2; // r14
  int v3; // r13d
  CAnimationLayer *m_pAnimLayer; // rax
  const char *v5; // rdx
  const CModel *ModelPtr; // rax
  const char *SequenceName; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  const char *v10; // r8
  const char *v11; // r9
  double v12; // xmm0_8
  double v13; // xmm1_8
  double v14; // xmm2_8
  __int64 v15; // rax
  int v16; // edi
  GestureSlot_t *v17; // rbx
  int v18; // edx
  int v19; // edi
  const char *v20; // rcx
  CDOTA_BaseNPC *m_pUnit; // [rsp+8h] [rbp-68h]
  double m_Value; // [rsp+10h] [rbp-60h]
  const char *v23; // [rsp+10h] [rbp-60h]
  double v24; // [rsp+18h] [rbp-58h]
  double v25; // [rsp+18h] [rbp-58h]
  double v26; // [rsp+20h] [rbp-50h]
  double v27; // [rsp+20h] [rbp-50h]
  HSequence hSequence; // [rsp+28h] [rbp-48h]
  HSequence hSequencea[2]; // [rsp+28h] [rbp-48h]
  const char *v30; // [rsp+30h] [rbp-40h]

  m_pUnit = this->m_pUnit;
  if ( m_pUnit != 0 )
  {
    v1 = 0;
    v2 = 0;
    Anim_StatePrintf(12, "%s\n", "Server");
    v3 = 13;
    do
    {
      while ( 1 )
      {
        v17 = &this->m_aGestureSlots.m_Memory.m_pMemory[v1];
        if ( v17 != 0 )
          break;
LABEL_8:
        ++v2;
        ++v1;
        if ( v2 == 9 )
          return;
      }
      if ( v17->m_bActive )
      {
        m_pAnimLayer = v17->m_pAnimLayer;
        v5 = "true";
        if ( !v17->m_bAutoKill )
          v5 = "false";
        m_Value = m_pAnimLayer->m_op.m_flWeight.m_Value.m_Value;
        v24 = m_pAnimLayer->m_flPlaybackRate.m_Value.m_Value;
        v26 = m_pAnimLayer->m_op.m_flCycle.m_Value;
        v30 = v5;
        hSequence.m_Data = m_pAnimLayer->m_op.m_hSequence.m_Value.m_Data;
        ModelPtr = CBaseAnimating::GetModelPtr(m_pUnit);
        SequenceName = GetSequenceName(ModelPtr, hSequence);
        v10 = 0;
        v11 = SequenceName;
        v12 = v26;
        v13 = v24;
        v14 = m_Value;
        if ( g_pAnimationSystem != 0 )
        {
          v23 = SequenceName;
          v25 = v26;
          v27 = v13;
          *&hSequencea[0].m_Data = v14;
          v15 = (*(*g_pAnimationSystem + 312LL))(g_pAnimationSystem, v17->m_iActivity, v8, v9, 0);
          v11 = v23;
          v12 = v25;
          v10 = v15;
          v13 = v27;
          v14 = *&hSequencea[0].m_Data;
        }
        v16 = v3++;
        Anim_StatePrintf(
          v16,
          "Gesture Slot %d(%s): %s %s(A:%s, C:%2.3f P:%2.1f W:%2.3f)\n",
          v2,
          s_aGestureSlotNames[v2],
          v10,
          v11,
          v30,
          v12,
          v13,
          v14);
        goto LABEL_8;
      }
      v18 = v2;
      v19 = v3;
      v20 = s_aGestureSlotNames[v2++];
      ++v1;
      ++v3;
      Anim_StatePrintf(v19, "Gesture Slot %d(%s): NOT ACTIVE!\n", v18, v20);
    }
    while ( v2 != 9 );
  }
}


// CDOTAAnimState::OnNewModel  (line 1036, @0x00000000024276e0, libserver.so)  // inlines: GetCycle, GetPrevCycle, GetWeight, operator[]
// calls: CDOTA_BaseNPC::SelectWeightedSequenceWithEconomy, CAnimationLayer::SetSequence, CAnimationLayer::SetWeight, CAnimationLayer::SetPrevCycle, CAnimationLayer::SetCycle, CDOTAAnimState::ResetGestureSlot
// callers: CDOTA_BaseNPC::OnNewModel
void __fastcall CDOTAAnimState::OnNewModel(CDOTAAnimState *const this, HModel hOldModel, HModel hNewModel)
{
  int v4; // r13d
  __int64 v5; // rbx
  CDOTA_BaseNPC *m_pUnit; // r14
  GestureSlot_t *v7; // rax
  unsigned int m_iActivity; // r12d
  HSequence v9; // eax
  CAnimationLayer *m_pAnimLayer; // rdi
  float m_Value; // r12d
  float v12; // xmm1_4
  float v13; // xmm1_4
  float flPrevCycle; // [rsp+8h] [rbp-38h]
  float32 v15; // [rsp+Ch] [rbp-34h]

  v4 = 0;
  v5 = 0;
  m_pUnit = this->m_pUnit;
  if ( m_pUnit != 0 )
  {
    do
    {
      v7 = &this->m_aGestureSlots.m_Memory.m_pMemory[v5];
      m_iActivity = v7->m_iActivity;
      if ( v7->m_bActive && m_iActivity != -1 )
      {
        (*(m_pUnit->_vptr_IHandleEntity + 442))(m_pUnit, m_iActivity, hNewModel.m_pBinding);
        v9.m_Data = CDOTA_BaseNPC::SelectWeightedSequenceWithEconomy(m_pUnit, m_iActivity).m_Data;
        if ( v9.m_Data == -1 )
        {
          CDOTAAnimState::ResetGestureSlot(this, v4);
        }
        else
        {
          m_pAnimLayer = this->m_aGestureSlots.m_Memory.m_pMemory[v5].m_pAnimLayer;
          flPrevCycle = m_pAnimLayer->m_op.m_flPrevCycle.m_Value;
          m_Value = m_pAnimLayer->m_op.m_flCycle.m_Value;
          v15 = m_pAnimLayer->m_op.m_flWeight.m_Value.m_Value;
          CAnimationLayer::SetSequence(
            m_pAnimLayer,
            v9,
            SetSequenceBehavior_t::SET_SEQUENCE_PRESERVE_CYCLE,
            LayerChangeBehavior_t::LAYER_CHANGE_INVOKE_CALLBACKS);
          CAnimationLayer::SetWeight(
            this->m_aGestureSlots.m_Memory.m_pMemory[v5].m_pAnimLayer,
            COERCE_DOUBLE(LODWORD(v15)),
            v12,
            LayerChangeBehavior_t::LAYER_CHANGE_INVOKE_CALLBACKS);
          CAnimationLayer::SetPrevCycle(
            this->m_aGestureSlots.m_Memory.m_pMemory[v5].m_pAnimLayer,
            flPrevCycle,
            flPrevCycle);
          CAnimationLayer::SetCycle(
            this->m_aGestureSlots.m_Memory.m_pMemory[v5].m_pAnimLayer,
            m_Value,
            v13,
            LayerChangeBehavior_t::LAYER_CHANGE_INVOKE_CALLBACKS);
        }
      }
      ++v5;
      ++v4;
    }
    while ( v5 != 9 );
  }
}


// CDOTAAnimState::GetAnimationLayerForSlot  (line 1078, @0x0000000002427800, libserver.so)  // inlines: operator[]
// callers: CDOTAAnimState::UpdateGestureLayer
CAnimationLayer *__fastcall CDOTAAnimState::GetAnimationLayerForSlot(CDOTAAnimState *const this, int iSlot)
{
  CAnimationLayer *result; // rax
  GestureSlot_t *v3; // rsi

  result = 0;
  v3 = &this->m_aGestureSlots.m_Memory.m_pMemory[iSlot];
  if ( v3->m_bActive )
    return v3->m_pAnimLayer;
  return result;
}


// CDOTAAnimState::GetIntervalTime  (line 1086, @0x0000000002427830, libserver.so)  // inlines: curtime, operator[]
// callers: CDOTAAnimState::UpdateGestureLayer
float __fastcall CDOTAAnimState::GetIntervalTime(CDOTAAnimState *const this, int iSlot)
{
  double v2; // xmm0_8
  double v3; // xmm1_8
  float m_flCurrentTime; // xmm2_4
  CGlobalVars *v6; // rbx
  float result; // xmm0_4
  __int64 v8; // rbx
  float m_flAnimTime; // xmm1_4
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  CGlobalVars *v11; // r12
  float v12; // xmm0_4
  FnGlobalVarsWarningFunc v13; // rax
  int v14; // [rsp-24h] [rbp-2Ch]

  m_flCurrentTime = 0.0;
  v6 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
      {
        v14 = iSlot;
        (m_pfnWarningFunc)(1, v2, v3, 0.0);
        iSlot = v14;
      }
    }
    m_flCurrentTime = v6->m_flCurrentTime;
  }
  result = 0.1;
  v8 = iSlot;
  m_flAnimTime = this->m_aGestureSlots.m_Memory.m_pMemory[v8].m_flAnimTime;
  if ( (m_flCurrentTime - m_flAnimTime) < 0.1 )
  {
    v11 = gpGlobals;
    v12 = 0.0;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        v13 = gpGlobals->m_pfnWarningFunc;
        if ( v13 != 0 )
        {
          (v13)(1, 0.0);
          m_flAnimTime = this->m_aGestureSlots.m_Memory.m_pMemory[v8].m_flAnimTime;
        }
      }
      v12 = v11->m_flCurrentTime;
    }
    return v12 - m_flAnimTime;
  }
  return result;
}


