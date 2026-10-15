
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTABehaviorCommandMoveToRuneToTake::~CDOTABehaviorCommandMoveToRuneToTake  (line 10, @0x0000000002884600, libserver.so)  // inlines: Purge, ~CDOTABehaviorCommandListener, ~CDOTABehaviorMoveTo, ~CGridNavPath, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::RemoveAll, Action<CDOTA_BaseNPC>::~Action, CUtlMemory<Vector, int>::Purge
void __fastcall CDOTABehaviorCommandMoveToRuneToTake::~CDOTABehaviorCommandMoveToRuneToTake(
        CDOTABehaviorCommandMoveToRuneToTake *const this)
{
  this->_vptr_INextBotEventResponder = &off_42BE790;
  this->_vptr_IContextualQuery = &off_42BEBC0;
  this->_vptr_IDOTABehaviorMoveTo = &off_42BEC28;
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


// CDOTABehaviorCommandMoveToRuneToTake::~CDOTABehaviorCommandMoveToRuneToTake  (line 10, @0x0000000002885210, libserver.so)  // inlines: Purge, ~CDOTABehaviorCommandListener, ~CDOTABehaviorCommandMoveToRuneToTake, ~CDOTABehaviorMoveTo, ~CGridNavPath, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::RemoveAll, Action<CDOTA_BaseNPC>::~Action, operator delete, CUtlMemory<Vector, int>::Purge
void __fastcall CDOTABehaviorCommandMoveToRuneToTake::~CDOTABehaviorCommandMoveToRuneToTake(
        CDOTABehaviorCommandMoveToRuneToTake *const this)
{
  this->_vptr_INextBotEventResponder = &off_42BE790;
  this->_vptr_IContextualQuery = &off_42BEBC0;
  this->_vptr_IDOTABehaviorMoveTo = &off_42BEC28;
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


// CDOTABehaviorCommandMoveToRuneToTake::OnResume  (line 18, @0x0000000002883880, libserver.so)  // inlines: ActionResult, Continue, IActionResult
// calls: CDOTABehaviorMoveTo::OnResume
ActionResult<CDOTA_BaseNPC> *__fastcall CDOTABehaviorCommandMoveToRuneToTake::OnResume(
        ActionResult<CDOTA_BaseNPC> *__return_ptr retstr,
        CDOTABehaviorCommandMoveToRuneToTake *const this,
        CDOTA_BaseNPC *me,
        Action<CDOTA_BaseNPC> *interruptingAction)
{
  CDOTABehaviorMoveTo::OnResume(&this->m_MoveTo);
  retstr->m_type = ActionResultType::CONTINUE;
  retstr->m_action = 0;
  retstr->m_reason = 0;
  return retstr;
}


// CDOTABehaviorCommandMoveToRuneToTake::OnContact  (line 20, @0x0000000002883bd0, libserver.so)  // inlines: EventDesiredResult, IActionResult, TryContinue
// calls: CDOTABehaviorMoveTo::OnContact
EventDesiredResult<CDOTA_BaseNPC> *__fastcall CDOTABehaviorCommandMoveToRuneToTake::OnContact(
        EventDesiredResult<CDOTA_BaseNPC> *__return_ptr retstr,
        CDOTABehaviorCommandMoveToRuneToTake *const this,
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


// CDOTABehaviorCommandMoveToRuneToTake::OnInvalidatePath  (line 21, @0x0000000002884320, libserver.so)  // inlines: EventDesiredResult, IActionResult, Invalidate, InvalidatePath, TryContinue
// calls: CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::RemoveAll
EventDesiredResult<CDOTA_BaseNPC> *__fastcall CDOTABehaviorCommandMoveToRuneToTake::OnInvalidatePath(
        EventDesiredResult<CDOTA_BaseNPC> *__return_ptr retstr,
        CDOTABehaviorCommandMoveToRuneToTake *const this,
        CDOTA_BaseNPC *me)
{
  CUtlVectorBase<Vector,CUtlMemory<Vector,int>>::RemoveAll(&this->m_MoveTo.m_path.m_Positions);
  retstr->m_type = ActionResultType::CONTINUE;
  retstr->m_action = 0;
  retstr->m_reason = 0;
  retstr->m_priority = EventResultPriorityType::RESULT_TRY;
  return retstr;
}


// CDOTABehaviorCommandMoveToRuneToTake::GetName  (line 23, @0x0000000002882700, libserver.so)
// strings: "CommandMoveToRuneToTake"
const char *__fastcall CDOTABehaviorCommandMoveToRuneToTake::GetName(
        const CDOTABehaviorCommandMoveToRuneToTake *const this)
{
  return "CommandMoveToRuneToTake";
}


// CDOTABehaviorCommandMoveToRuneToTake::DoesTargetMove  (line 26, @0x0000000002882710, libserver.so)
bool __fastcall CDOTABehaviorCommandMoveToRuneToTake::DoesTargetMove(CDOTABehaviorCommandMoveToRuneToTake *const this)
{
  return 0;
}


