
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTABehaviorCommandMoveToPosition::~CDOTABehaviorCommandMoveToPosition  (line 10, @0x0000000002884ba0, libserver.so)  // inlines: Purge, ~CDOTABehaviorCommandListener, ~CDOTABehaviorMoveTo, ~CGridNavPath, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::RemoveAll, Action<CDOTA_BaseNPC>::~Action, CUtlMemory<Vector, int>::Purge
void __fastcall CDOTABehaviorCommandMoveToPosition::~CDOTABehaviorCommandMoveToPosition(
        CDOTABehaviorCommandMoveToPosition *const this)
{
  this->_vptr_INextBotEventResponder = &off_42BD490;
  this->_vptr_IContextualQuery = &off_42BD8C8;
  this->_vptr_IDOTABehaviorMoveTo = &off_42BD930;
  this->m_MoveTo._vptr_CDOTABehaviorMoveTo = &off_42BB830;
  CUtlVectorBase<Vector,CUtlMemory<Vector,int>>::RemoveAll(&this->m_MoveTo.m_path.m_ShortPath);
  if ( (this->m_MoveTo.m_path.m_ShortPath.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<Vector,int>::Purge(&this->m_MoveTo.m_path.m_ShortPath.m_Memory);
    if ( (this->m_MoveTo.m_path.m_ShortPath.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<Vector,int>::Purge(&this->m_MoveTo.m_path.m_ShortPath.m_Memory);
  }
  CUtlVectorBase<Vector,CUtlMemory<Vector,int>>::RemoveAll(&this->m_MoveTo.m_path.m_Positions);
  if ( (this->m_MoveTo.m_path.m_Positions.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<Vector,int>::Purge(&this->m_MoveTo.m_path.m_Positions.m_Memory);
    if ( (this->m_MoveTo.m_path.m_Positions.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<Vector,int>::Purge(&this->m_MoveTo.m_path.m_Positions.m_Memory);
  }
  this->_vptr_INextBotEventResponder = &off_42BC1B0;
  this->_vptr_IContextualQuery = &off_42BC5D0;
  Action<CDOTA_BaseNPC>::~Action(this);
}


// CDOTABehaviorCommandMoveToPosition::~CDOTABehaviorCommandMoveToPosition  (line 10, @0x00000000028857b0, libserver.so)  // inlines: Purge, ~CDOTABehaviorCommandListener, ~CDOTABehaviorCommandMoveToPosition, ~CDOTABehaviorMoveTo, ~CGridNavPath, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::RemoveAll, Action<CDOTA_BaseNPC>::~Action, operator delete, CUtlMemory<Vector, int>::Purge
void __fastcall CDOTABehaviorCommandMoveToPosition::~CDOTABehaviorCommandMoveToPosition(
        CDOTABehaviorCommandMoveToPosition *const this)
{
  this->_vptr_INextBotEventResponder = &off_42BD490;
  this->_vptr_IContextualQuery = &off_42BD8C8;
  this->_vptr_IDOTABehaviorMoveTo = &off_42BD930;
  this->m_MoveTo._vptr_CDOTABehaviorMoveTo = &off_42BB830;
  CUtlVectorBase<Vector,CUtlMemory<Vector,int>>::RemoveAll(&this->m_MoveTo.m_path.m_ShortPath);
  if ( (this->m_MoveTo.m_path.m_ShortPath.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<Vector,int>::Purge(&this->m_MoveTo.m_path.m_ShortPath.m_Memory);
    if ( (this->m_MoveTo.m_path.m_ShortPath.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<Vector,int>::Purge(&this->m_MoveTo.m_path.m_ShortPath.m_Memory);
  }
  CUtlVectorBase<Vector,CUtlMemory<Vector,int>>::RemoveAll(&this->m_MoveTo.m_path.m_Positions);
  if ( (this->m_MoveTo.m_path.m_Positions.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<Vector,int>::Purge(&this->m_MoveTo.m_path.m_Positions.m_Memory);
    if ( (this->m_MoveTo.m_path.m_Positions.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<Vector,int>::Purge(&this->m_MoveTo.m_path.m_Positions.m_Memory);
  }
  this->_vptr_INextBotEventResponder = &off_42BC1B0;
  this->_vptr_IContextualQuery = &off_42BC5D0;
  Action<CDOTA_BaseNPC>::~Action(this);
  operator delete(this);
}


// CDOTABehaviorCommandMoveToPosition::OnResume  (line 18, @0x0000000002883740, libserver.so)  // inlines: ActionResult, Continue, IActionResult
// calls: CDOTABehaviorMoveTo::OnResume
ActionResult<CDOTA_BaseNPC> *__fastcall CDOTABehaviorCommandMoveToPosition::OnResume(
        ActionResult<CDOTA_BaseNPC> *__return_ptr retstr,
        CDOTABehaviorCommandMoveToPosition *const this,
        CDOTA_BaseNPC *me,
        Action<CDOTA_BaseNPC> *interruptingAction)
{
  CDOTABehaviorMoveTo::OnResume(&this->m_MoveTo);
  retstr->m_type = ActionResultType::CONTINUE;
  retstr->m_action = 0;
  retstr->m_reason = 0;
  return retstr;
}


// CDOTABehaviorCommandMoveToPosition::OnContact  (line 20, @0x00000000028839a0, libserver.so)  // inlines: EventDesiredResult, IActionResult, TryContinue
// calls: CDOTABehaviorMoveTo::OnContact
EventDesiredResult<CDOTA_BaseNPC> *__fastcall CDOTABehaviorCommandMoveToPosition::OnContact(
        EventDesiredResult<CDOTA_BaseNPC> *__return_ptr retstr,
        CDOTABehaviorCommandMoveToPosition *const this,
        CDOTA_BaseNPC *me,
        CBaseEntity *other,
        CGameTrace *result)
{
  CDOTABehaviorMoveTo::OnContact(&this->m_MoveTo, me, other);
  retstr->m_type = ActionResultType::CONTINUE;
  retstr->m_action = 0;
  retstr->m_reason = 0;
  retstr->m_priority = EventResultPriorityType::RESULT_TRY;
  return retstr;
}


// CDOTABehaviorCommandMoveToPosition::OnInvalidatePath  (line 21, @0x0000000002884160, libserver.so)  // inlines: EventDesiredResult, IActionResult, Invalidate, InvalidatePath, TryContinue
// calls: CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::RemoveAll
EventDesiredResult<CDOTA_BaseNPC> *__fastcall CDOTABehaviorCommandMoveToPosition::OnInvalidatePath(
        EventDesiredResult<CDOTA_BaseNPC> *__return_ptr retstr,
        CDOTABehaviorCommandMoveToPosition *const this,
        CDOTA_BaseNPC *me)
{
  CUtlVectorBase<Vector,CUtlMemory<Vector,int>>::RemoveAll(&this->m_MoveTo.m_path.m_Positions);
  retstr->m_type = ActionResultType::CONTINUE;
  retstr->m_action = 0;
  retstr->m_reason = 0;
  retstr->m_priority = EventResultPriorityType::RESULT_TRY;
  return retstr;
}


// CDOTABehaviorCommandMoveToPosition::GetName  (line 23, @0x0000000002882510, libserver.so)
// strings: "CommandMoveToPosition"
const char *__fastcall CDOTABehaviorCommandMoveToPosition::GetName(
        const CDOTABehaviorCommandMoveToPosition *const this)
{
  return "CommandMoveToPosition";
}


// CDOTABehaviorCommandMoveToPosition::GetTargetPosition  (line 25, @0x0000000002882520, libserver.so)
Vector __fastcall CDOTABehaviorCommandMoveToPosition::GetTargetPosition(
        CDOTABehaviorCommandMoveToPosition *const this,
        CDOTA_BaseNPC *me)
{
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  *&result.x = *&this->m_vPosition.x;
  result.z = this->m_vPosition.z;
  return result;
}


// CDOTABehaviorCommandMoveToPosition::DoesTargetMove  (line 26, @0x0000000002882550, libserver.so)
bool __fastcall CDOTABehaviorCommandMoveToPosition::DoesTargetMove(CDOTABehaviorCommandMoveToPosition *const this)
{
  return 0;
}


// CDOTABehaviorCommandMoveToPosition::IsAggressive  (line 30, @0x0000000002882570, libserver.so)
bool __fastcall CDOTABehaviorCommandMoveToPosition::IsAggressive(CDOTABehaviorCommandMoveToPosition *const this)
{
  return 0;
}


