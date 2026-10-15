
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTABehaviorCommandPatrol::~CDOTABehaviorCommandPatrol  (line 7, @0x0000000002885e10, libserver.so)  // inlines: Purge, ~CDOTABehaviorCommandListener, ~CDOTABehaviorMoveTo, ~CGridNavPath, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::RemoveAll, Action<CDOTA_BaseNPC>::~Action, CUtlMemory<Vector, int>::Purge
void __fastcall CDOTABehaviorCommandPatrol::~CDOTABehaviorCommandPatrol(CDOTABehaviorCommandPatrol *const this)
{
  this->_vptr_INextBotEventResponder = &off_42BF5D0;
  this->_vptr_IContextualQuery = &off_42BFA00;
  this->_vptr_IDOTABehaviorMoveTo = &off_42BFA68;
  CUtlVectorBase<Vector,CUtlMemory<Vector,int>>::RemoveAll(&this->m_vPatrolPoints);
  if ( (this->m_vPatrolPoints.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<Vector,int>::Purge(&this->m_vPatrolPoints.m_Memory);
    if ( (this->m_vPatrolPoints.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<Vector,int>::Purge(&this->m_vPatrolPoints.m_Memory);
  }
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


// CDOTABehaviorCommandPatrol::~CDOTABehaviorCommandPatrol  (line 7, @0x0000000002885f50, libserver.so)  // inlines: Purge, ~CDOTABehaviorCommandListener, ~CDOTABehaviorCommandPatrol, ~CDOTABehaviorMoveTo, ~CGridNavPath, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::RemoveAll, Action<CDOTA_BaseNPC>::~Action, operator delete, CUtlMemory<Vector, int>::Purge
void __fastcall CDOTABehaviorCommandPatrol::~CDOTABehaviorCommandPatrol(CDOTABehaviorCommandPatrol *const this)
{
  this->_vptr_INextBotEventResponder = &off_42BF5D0;
  this->_vptr_IContextualQuery = &off_42BFA00;
  this->_vptr_IDOTABehaviorMoveTo = &off_42BFA68;
  CUtlVectorBase<Vector,CUtlMemory<Vector,int>>::RemoveAll(&this->m_vPatrolPoints);
  if ( (this->m_vPatrolPoints.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<Vector,int>::Purge(&this->m_vPatrolPoints.m_Memory);
    if ( (this->m_vPatrolPoints.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<Vector,int>::Purge(&this->m_vPatrolPoints.m_Memory);
  }
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


// CDOTABehaviorCommandPatrol::OnResume  (line 14, @0x0000000002883780, libserver.so)  // inlines: ActionResult, Continue, IActionResult
// calls: CDOTABehaviorMoveTo::OnResume
ActionResult<CDOTA_BaseNPC> *__fastcall CDOTABehaviorCommandPatrol::OnResume(
        ActionResult<CDOTA_BaseNPC> *__return_ptr retstr,
        CDOTABehaviorCommandPatrol *const this,
        CDOTA_BaseNPC *me,
        Action<CDOTA_BaseNPC> *interruptingAction)
{
  CDOTABehaviorMoveTo::OnResume(&this->m_MoveTo);
  retstr->m_type = ActionResultType::CONTINUE;
  retstr->m_action = 0;
  retstr->m_reason = 0;
  return retstr;
}


// CDOTABehaviorCommandPatrol::OnContact  (line 15, @0x00000000028839f0, libserver.so)  // inlines: EventDesiredResult, IActionResult, TryContinue
// calls: CDOTABehaviorMoveTo::OnContact
EventDesiredResult<CDOTA_BaseNPC> *__fastcall CDOTABehaviorCommandPatrol::OnContact(
        EventDesiredResult<CDOTA_BaseNPC> *__return_ptr retstr,
        CDOTABehaviorCommandPatrol *const this,
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


// CDOTABehaviorCommandPatrol::OnInvalidatePath  (line 16, @0x00000000028841a0, libserver.so)  // inlines: EventDesiredResult, IActionResult, Invalidate, InvalidatePath, TryContinue
// calls: CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::RemoveAll
EventDesiredResult<CDOTA_BaseNPC> *__fastcall CDOTABehaviorCommandPatrol::OnInvalidatePath(
        EventDesiredResult<CDOTA_BaseNPC> *__return_ptr retstr,
        CDOTABehaviorCommandPatrol *const this,
        CDOTA_BaseNPC *me)
{
  CUtlVectorBase<Vector,CUtlMemory<Vector,int>>::RemoveAll(&this->m_MoveTo.m_path.m_Positions);
  retstr->m_type = ActionResultType::CONTINUE;
  retstr->m_action = 0;
  retstr->m_reason = 0;
  retstr->m_priority = EventResultPriorityType::RESULT_TRY;
  return retstr;
}


// CDOTABehaviorCommandPatrol::GetName  (line 18, @0x00000000028825a0, libserver.so)
const char *__fastcall CDOTABehaviorCommandPatrol::GetName(const CDOTABehaviorCommandPatrol *const this)
{
  return "CommandPatrol";
}


// CDOTABehaviorCommandPatrol::DoesTargetMove  (line 21, @0x00000000028825b0, libserver.so)
bool __fastcall CDOTABehaviorCommandPatrol::DoesTargetMove(CDOTABehaviorCommandPatrol *const this)
{
  return 1;
}


