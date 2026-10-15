
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTALocomotor::~CDOTALocomotor  (line 31, @0x0000000002868d60, libserver.so)
// calls: CLocomotionBase::~CLocomotionBase
void __fastcall CDOTALocomotor::~CDOTALocomotor(CDOTALocomotor *const this)
{
  this->_vptr_INextBotEventResponder = &off_42B9190;
  CLocomotionBase::~CLocomotionBase(this);
}


// CDOTALocomotor::~CDOTALocomotor  (line 31, @0x0000000002868d80, libserver.so)  // inlines: ~CDOTALocomotor
// calls: CLocomotionBase::~CLocomotionBase, operator delete
void __fastcall CDOTALocomotor::~CDOTALocomotor(CDOTALocomotor *const this)
{
  this->_vptr_INextBotEventResponder = &off_42B9190;
  CLocomotionBase::~CLocomotionBase(this);
  operator delete(this);
}


// CDOTALocomotor::GetName  (line 42, @0x0000000002868970, libserver.so)
// strings: "CDOTALocomotor"
const char *__fastcall CDOTALocomotor::GetName(CDOTALocomotor *const this)
{
  return "CDOTALocomotor";
}


// CDOTALocomotor::Stop  (line 66, @0x000000000286ab50, libserver.so)  // inlines: StopFacing, StopMovement
void __fastcall CDOTALocomotor::Stop(CDOTALocomotor *const this)
{
  this->m_bMoving = 0;
  this->m_bFacing = 0;
}


// CDOTALocomotor::GetStepHeight  (line 185, @0x0000000002868980, libserver.so)
float __fastcall CDOTALocomotor::GetStepHeight(const CDOTALocomotor *const this)
{
  return 15.0;
}


// CDOTALocomotor::GetMaxJumpHeight  (line 190, @0x0000000002868990, libserver.so)
float __fastcall CDOTALocomotor::GetMaxJumpHeight(const CDOTALocomotor *const this)
{
  return 50.0;
}


// CDOTALocomotor::GetDeathDropHeight  (line 195, @0x00000000028689a0, libserver.so)
float __fastcall CDOTALocomotor::GetDeathDropHeight(const CDOTALocomotor *const this)
{
  return 1000.0;
}


// CDOTALocomotor::IsAbleToJumpAcrossGaps  (line 200, @0x00000000028689b0, libserver.so)
bool __fastcall CDOTALocomotor::IsAbleToJumpAcrossGaps(const CDOTALocomotor *const this)
{
  return 0;
}


// CDOTALocomotor::IsAbleToClimb  (line 205, @0x00000000028689c0, libserver.so)
bool __fastcall CDOTALocomotor::IsAbleToClimb(const CDOTALocomotor *const this)
{
  return 0;
}


// CHorizontalMotionController::Schema_DynamicBinding  (line 227, @0x0000000002499820, libserver.so)
// calls: CHorizontalMotionController::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CHorizontalMotionController::Schema_DynamicBinding(
        const CHorizontalMotionController *const this)
{
  CHorizontalMotionController::Schema_VerifyBindingIsRegistered();
  return CHorizontalMotionController::s_pSchemaBinding;
}


// CHorizontalMotionController::OnHorizontalMotionInterrupted  (line 232, @0x0000000002496de0, libserver.so)
void __fastcall CHorizontalMotionController::OnHorizontalMotionInterrupted(CHorizontalMotionController *const this)
{
  ;
}


// CHorizontalMotionController::IsHorizontalMotionValidToApply  (line 233, @0x0000000002496df0, libserver.so)
bool __fastcall CHorizontalMotionController::IsHorizontalMotionValidToApply(CHorizontalMotionController *const this)
{
  return 1;
}


// CHorizontalMotionController::IgnoresIntermediateMovement  (line 235, @0x0000000002496e00, libserver.so)
bool __fastcall CHorizontalMotionController::IgnoresIntermediateMovement(CHorizontalMotionController *const this)
{
  return 1;
}


// CHorizontalMotionController::IsPhasedWhileMotionControlled  (line 237, @0x0000000002496e10, libserver.so)
bool __fastcall CHorizontalMotionController::IsPhasedWhileMotionControlled(CHorizontalMotionController *const this)
{
  return 1;
}


// CVerticalMotionController::Schema_DynamicBinding  (line 248, @0x0000000002499840, libserver.so)
// calls: CVerticalMotionController::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CVerticalMotionController::Schema_DynamicBinding(
        const CVerticalMotionController *const this)
{
  CVerticalMotionController::Schema_VerifyBindingIsRegistered();
  return CVerticalMotionController::s_pSchemaBinding;
}


// CVerticalMotionController::OnVerticalMotionInterrupted  (line 253, @0x0000000002496e20, libserver.so)
void __fastcall CVerticalMotionController::OnVerticalMotionInterrupted(CVerticalMotionController *const this)
{
  ;
}


// CVerticalMotionController::IsVerticalMotionValidToApply  (line 254, @0x0000000002496e30, libserver.so)
bool __fastcall CVerticalMotionController::IsVerticalMotionValidToApply(CVerticalMotionController *const this)
{
  return 1;
}


// CVerticalMotionController::IgnoresIntermediateMovement  (line 256, @0x0000000002496e40, libserver.so)
bool __fastcall CVerticalMotionController::IgnoresIntermediateMovement(CVerticalMotionController *const this)
{
  return 1;
}


