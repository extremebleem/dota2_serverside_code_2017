
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTABehaviorCommandMoveToPositionToCast::~CDOTABehaviorCommandMoveToPositionToCast  (line 10, @0x0000000002884d80, libserver.so)  // inlines: Purge, ~CDOTABehaviorCommandListener, ~CDOTABehaviorMoveTo, ~CGridNavPath, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::RemoveAll, Action<CDOTA_BaseNPC>::~Action, CUtlMemory<Vector, int>::Purge
void __fastcall CDOTABehaviorCommandMoveToPositionToCast::~CDOTABehaviorCommandMoveToPositionToCast(
        CDOTABehaviorCommandMoveToPositionToCast *const this)
{
  this->_vptr_INextBotEventResponder = &off_42BDE10;
  this->_vptr_IContextualQuery = &off_42BE240;
  this->_vptr_IDOTABehaviorMoveTo = &off_42BE2A8;
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


// CDOTABehaviorCommandMoveToPositionToCast::~CDOTABehaviorCommandMoveToPositionToCast  (line 10, @0x00000000028856c0, libserver.so)  // inlines: Purge, ~CDOTABehaviorCommandListener, ~CDOTABehaviorCommandMoveToPositionToCast, ~CDOTABehaviorMoveTo, ~CGridNavPath, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::RemoveAll, Action<CDOTA_BaseNPC>::~Action, operator delete, CUtlMemory<Vector, int>::Purge
void __fastcall CDOTABehaviorCommandMoveToPositionToCast::~CDOTABehaviorCommandMoveToPositionToCast(
        CDOTABehaviorCommandMoveToPositionToCast *const this)
{
  this->_vptr_INextBotEventResponder = &off_42BDE10;
  this->_vptr_IContextualQuery = &off_42BE240;
  this->_vptr_IDOTABehaviorMoveTo = &off_42BE2A8;
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


// CDOTABehaviorCommandMoveToPositionToCast::OnContact  (line 21, @0x0000000002883a90, libserver.so)  // inlines: EventDesiredResult, IActionResult, TryContinue
// calls: CDOTABehaviorMoveTo::OnContact
EventDesiredResult<CDOTA_BaseNPC> *__fastcall CDOTABehaviorCommandMoveToPositionToCast::OnContact(
        EventDesiredResult<CDOTA_BaseNPC> *__return_ptr retstr,
        CDOTABehaviorCommandMoveToPositionToCast *const this,
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


// CDOTABehaviorCommandMoveToPositionToCast::OnInvalidatePath  (line 22, @0x0000000002884220, libserver.so)  // inlines: EventDesiredResult, IActionResult, Invalidate, InvalidatePath, TryContinue
// calls: CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::RemoveAll
EventDesiredResult<CDOTA_BaseNPC> *__fastcall CDOTABehaviorCommandMoveToPositionToCast::OnInvalidatePath(
        EventDesiredResult<CDOTA_BaseNPC> *__return_ptr retstr,
        CDOTABehaviorCommandMoveToPositionToCast *const this,
        CDOTA_BaseNPC *me)
{
  CUtlVectorBase<Vector,CUtlMemory<Vector,int>>::RemoveAll(&this->m_MoveTo.m_path.m_Positions);
  retstr->m_type = ActionResultType::CONTINUE;
  retstr->m_action = 0;
  retstr->m_reason = 0;
  retstr->m_priority = EventResultPriorityType::RESULT_TRY;
  return retstr;
}


// CDOTABehaviorCommandMoveToPositionToCast::GetName  (line 24, @0x00000000028825e0, libserver.so)
// strings: "CommandMoveToPositionToCast"
const char *__fastcall CDOTABehaviorCommandMoveToPositionToCast::GetName(
        const CDOTABehaviorCommandMoveToPositionToCast *const this)
{
  return "CommandMoveToPositionToCast";
}


// CDOTABehaviorCommandMoveToPositionToCast::GetTargetPosition  (line 26, @0x00000000028825f0, libserver.so)
Vector __fastcall CDOTABehaviorCommandMoveToPositionToCast::GetTargetPosition(
        CDOTABehaviorCommandMoveToPositionToCast *const this,
        CDOTA_BaseNPC *me)
{
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  *&result.x = *&this->m_vPosition.x;
  result.z = this->m_vPosition.z;
  return result;
}


// CDOTABehaviorCommandMoveToPositionToCast::DoesTargetMove  (line 27, @0x0000000002882620, libserver.so)
bool __fastcall CDOTABehaviorCommandMoveToPositionToCast::DoesTargetMove(
        CDOTABehaviorCommandMoveToPositionToCast *const this)
{
  return 0;
}


