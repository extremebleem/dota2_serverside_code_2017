
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTABehaviorCommandMoveToPositionToDropItem::~CDOTABehaviorCommandMoveToPositionToDropItem  (line 10, @0x0000000002884e70, libserver.so)  // inlines: Purge, ~CDOTABehaviorCommandListener, ~CDOTABehaviorMoveTo, ~CGridNavPath, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::RemoveAll, Action<CDOTA_BaseNPC>::~Action, CUtlMemory<Vector, int>::Purge
void __fastcall CDOTABehaviorCommandMoveToPositionToDropItem::~CDOTABehaviorCommandMoveToPositionToDropItem(
        CDOTABehaviorCommandMoveToPositionToDropItem *const this)
{
  this->_vptr_INextBotEventResponder = &off_42BE2D0;
  this->_vptr_IContextualQuery = &off_42BE700;
  this->_vptr_IDOTABehaviorMoveTo = &off_42BE768;
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


// CDOTABehaviorCommandMoveToPositionToDropItem::~CDOTABehaviorCommandMoveToPositionToDropItem  (line 10, @0x00000000028858a0, libserver.so)  // inlines: Purge, ~CDOTABehaviorCommandListener, ~CDOTABehaviorCommandMoveToPositionToDropItem, ~CDOTABehaviorMoveTo, ~CGridNavPath, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::RemoveAll, Action<CDOTA_BaseNPC>::~Action, operator delete, CUtlMemory<Vector, int>::Purge
void __fastcall CDOTABehaviorCommandMoveToPositionToDropItem::~CDOTABehaviorCommandMoveToPositionToDropItem(
        CDOTABehaviorCommandMoveToPositionToDropItem *const this)
{
  this->_vptr_INextBotEventResponder = &off_42BE2D0;
  this->_vptr_IContextualQuery = &off_42BE700;
  this->_vptr_IDOTABehaviorMoveTo = &off_42BE768;
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


// CDOTABehaviorCommandMoveToPositionToDropItem::OnResume  (line 18, @0x00000000028837c0, libserver.so)  // inlines: ActionResult, Continue, IActionResult
// calls: CDOTABehaviorMoveTo::OnResume
ActionResult<CDOTA_BaseNPC> *__fastcall CDOTABehaviorCommandMoveToPositionToDropItem::OnResume(
        ActionResult<CDOTA_BaseNPC> *__return_ptr retstr,
        CDOTABehaviorCommandMoveToPositionToDropItem *const this,
        CDOTA_BaseNPC *me,
        Action<CDOTA_BaseNPC> *interruptingAction)
{
  CDOTABehaviorMoveTo::OnResume(&this->m_MoveTo);
  retstr->m_type = ActionResultType::CONTINUE;
  retstr->m_action = 0;
  retstr->m_reason = 0;
  return retstr;
}


// CDOTABehaviorCommandMoveToPositionToDropItem::OnContact  (line 20, @0x0000000002883ae0, libserver.so)  // inlines: EventDesiredResult, IActionResult, TryContinue
// calls: CDOTABehaviorMoveTo::OnContact
EventDesiredResult<CDOTA_BaseNPC> *__fastcall CDOTABehaviorCommandMoveToPositionToDropItem::OnContact(
        EventDesiredResult<CDOTA_BaseNPC> *__return_ptr retstr,
        CDOTABehaviorCommandMoveToPositionToDropItem *const this,
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


// CDOTABehaviorCommandMoveToPositionToDropItem::OnInvalidatePath  (line 21, @0x0000000002884260, libserver.so)  // inlines: EventDesiredResult, IActionResult, Invalidate, InvalidatePath, TryContinue
// calls: CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::RemoveAll
EventDesiredResult<CDOTA_BaseNPC> *__fastcall CDOTABehaviorCommandMoveToPositionToDropItem::OnInvalidatePath(
        EventDesiredResult<CDOTA_BaseNPC> *__return_ptr retstr,
        CDOTABehaviorCommandMoveToPositionToDropItem *const this,
        CDOTA_BaseNPC *me)
{
  CUtlVectorBase<Vector,CUtlMemory<Vector,int>>::RemoveAll(&this->m_MoveTo.m_path.m_Positions);
  retstr->m_type = ActionResultType::CONTINUE;
  retstr->m_action = 0;
  retstr->m_reason = 0;
  retstr->m_priority = EventResultPriorityType::RESULT_TRY;
  return retstr;
}


// CDOTABehaviorCommandMoveToPositionToDropItem::GetName  (line 23, @0x0000000002882640, libserver.so)
// strings: "CommandMoveToPositionToDropItem"
const char *__fastcall CDOTABehaviorCommandMoveToPositionToDropItem::GetName(
        const CDOTABehaviorCommandMoveToPositionToDropItem *const this)
{
  return "CommandMoveToPositionToDropItem";
}


// CDOTABehaviorCommandMoveToPositionToDropItem::GetTargetPosition  (line 25, @0x0000000002882650, libserver.so)
Vector __fastcall CDOTABehaviorCommandMoveToPositionToDropItem::GetTargetPosition(
        CDOTABehaviorCommandMoveToPositionToDropItem *const this,
        CDOTA_BaseNPC *me)
{
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  *&result.x = *&this->m_vPosition.x;
  result.z = this->m_vPosition.z;
  return result;
}


// CDOTABehaviorCommandMoveToPositionToDropItem::DoesTargetMove  (line 26, @0x0000000002882680, libserver.so)
bool __fastcall CDOTABehaviorCommandMoveToPositionToDropItem::DoesTargetMove(
        CDOTABehaviorCommandMoveToPositionToDropItem *const this)
{
  return 0;
}


