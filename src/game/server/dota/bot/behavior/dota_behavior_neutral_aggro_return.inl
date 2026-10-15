
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTABehaviorNeutralAggroReturn::~CDOTABehaviorNeutralAggroReturn  (line 9, @0x0000000002895010, libserver.so)  // inlines: Purge, RemoveAll, ~CDOTABehaviorMoveTo, ~CGridNavPath, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: Action<CDOTA_BaseNPC>::~Action, CUtlMemory<Vector, int>::Purge
void __fastcall CDOTABehaviorNeutralAggroReturn::~CDOTABehaviorNeutralAggroReturn(
        CDOTABehaviorNeutralAggroReturn *const this)
{
  bool v2; // zf
  CUtlVectorBase<Vector,CUtlMemory<Vector,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_MoveTo.m_path.m_ShortPath.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_INextBotEventResponder = &off_42C4D90;
  this->_vptr_IContextualQuery = &off_42C51C0;
  this->m_MoveTo.m_path.m_ShortPath.m_Size = 0;
  this->_vptr_IDOTABehaviorMoveTo = &off_42C5228;
  this->m_MoveTo._vptr_CDOTABehaviorMoveTo = &off_42BB830;
  if ( v2 )
  {
    p_m_Memory = &this->m_MoveTo.m_path.m_ShortPath.m_Memory;
    CUtlMemory<Vector,int>::Purge(&this->m_MoveTo.m_path.m_ShortPath.m_Memory);
    if ( (this->m_MoveTo.m_path.m_ShortPath.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<Vector,int>::Purge(p_m_Memory);
  }
  v2 = (this->m_MoveTo.m_path.m_Positions.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_MoveTo.m_path.m_Positions.m_Size = 0;
  if ( !v2
    || (CUtlMemory<Vector,int>::Purge(&this->m_MoveTo.m_path.m_Positions.m_Memory),
        (this->m_MoveTo.m_path.m_Positions.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    Action<CDOTA_BaseNPC>::~Action(this);
  }
  else
  {
    CUtlMemory<Vector,int>::Purge(&this->m_MoveTo.m_path.m_Positions.m_Memory);
    Action<CDOTA_BaseNPC>::~Action(this);
  }
}


// CDOTABehaviorNeutralAggroReturn::~CDOTABehaviorNeutralAggroReturn  (line 9, @0x0000000002895630, libserver.so)  // inlines: Purge, RemoveAll, ~CDOTABehaviorMoveTo, ~CDOTABehaviorNeutralAggroReturn, ~CGridNavPath, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: Action<CDOTA_BaseNPC>::~Action, operator delete, CUtlMemory<Vector, int>::Purge
void __fastcall CDOTABehaviorNeutralAggroReturn::~CDOTABehaviorNeutralAggroReturn(
        CDOTABehaviorNeutralAggroReturn *const this)
{
  bool v2; // zf
  CUtlVectorBase<Vector,CUtlMemory<Vector,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_MoveTo.m_path.m_ShortPath.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_INextBotEventResponder = &off_42C4D90;
  this->_vptr_IContextualQuery = &off_42C51C0;
  this->m_MoveTo.m_path.m_ShortPath.m_Size = 0;
  this->_vptr_IDOTABehaviorMoveTo = &off_42C5228;
  this->m_MoveTo._vptr_CDOTABehaviorMoveTo = &off_42BB830;
  if ( v2 )
  {
    p_m_Memory = &this->m_MoveTo.m_path.m_ShortPath.m_Memory;
    CUtlMemory<Vector,int>::Purge(&this->m_MoveTo.m_path.m_ShortPath.m_Memory);
    if ( (this->m_MoveTo.m_path.m_ShortPath.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<Vector,int>::Purge(p_m_Memory);
  }
  v2 = (this->m_MoveTo.m_path.m_Positions.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_MoveTo.m_path.m_Positions.m_Size = 0;
  if ( v2 )
  {
    CUtlMemory<Vector,int>::Purge(&this->m_MoveTo.m_path.m_Positions.m_Memory);
    if ( (this->m_MoveTo.m_path.m_Positions.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<Vector,int>::Purge(&this->m_MoveTo.m_path.m_Positions.m_Memory);
  }
  Action<CDOTA_BaseNPC>::~Action(this);
  operator delete(this);
}


// CDOTABehaviorNeutralAggroReturn::OnStart  (line 14, @0x0000000002894f70, libserver.so)  // inlines: ActionResult, Continue, IActionResult, Invalidate, NetworkStateChanged, OnStart, Set, operator=<float>
ActionResult<CDOTA_BaseNPC> *__fastcall CDOTABehaviorNeutralAggroReturn::OnStart(
        ActionResult<CDOTA_BaseNPC> *__return_ptr retstr,
        CDOTABehaviorNeutralAggroReturn *const this,
        CDOTA_BaseNPC *me,
        Action<CDOTA_BaseNPC> *priorAction)
{
  bool v6; // zf

  v6 = this->m_MoveTo.m_repathTimer.m_timestamp.m_Value == -1.0;
  this->m_MoveTo.m_bSetAnimation = 1;
  if ( !v6 )
  {
    (*(this->m_MoveTo.m_repathTimer._vptr_CountdownTimer + 2))(
      &this->m_MoveTo.m_repathTimer,
      12,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL);
    this->m_MoveTo.m_repathTimer.m_timestamp.m_Value = -1.0;
  }
  this->m_MoveTo.m_bUseSwimAnimations = 0;
  this->m_MoveTo.m_nRunActivity = 1502;
  this->m_MoveTo.m_flTargetDist = 0.0;
  this->m_MoveTo.m_bIsDirectional = 0;
  retstr->m_type = ActionResultType::CONTINUE;
  retstr->m_action = 0;
  retstr->m_reason = 0;
  return retstr;
}


// CDOTABehaviorNeutralAggroReturn::OnResume  (line 17, @0x0000000002894e70, libserver.so)  // inlines: ActionResult, Continue, IActionResult, Invalidate, NetworkStateChanged, OnResume, RemoveAll, Set, operator=<float>
ActionResult<CDOTA_BaseNPC> *__fastcall CDOTABehaviorNeutralAggroReturn::OnResume(
        ActionResult<CDOTA_BaseNPC> *__return_ptr retstr,
        CDOTABehaviorNeutralAggroReturn *const this,
        CDOTA_BaseNPC *me,
        Action<CDOTA_BaseNPC> *interruptingAction)
{
  if ( this->m_MoveTo.m_repathTimer.m_timestamp.m_Value != -1.0 )
  {
    (*(this->m_MoveTo.m_repathTimer._vptr_CountdownTimer + 2))(
      &this->m_MoveTo.m_repathTimer,
      12,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL);
    this->m_MoveTo.m_repathTimer.m_timestamp.m_Value = -1.0;
  }
  retstr->m_type = ActionResultType::CONTINUE;
  retstr->m_action = 0;
  retstr->m_reason = 0;
  this->m_MoveTo.m_path.m_Positions.m_Size = 0;
  return retstr;
}


// CDOTABehaviorNeutralAggroReturn::OnContact  (line 19, @0x0000000002894db0, libserver.so)  // inlines: EventDesiredResult, IActionResult, OnContact, TryContinue
// calls: CGridNavPath::Rebuild
EventDesiredResult<CDOTA_BaseNPC> *__fastcall CDOTABehaviorNeutralAggroReturn::OnContact(
        EventDesiredResult<CDOTA_BaseNPC> *__return_ptr retstr,
        CDOTABehaviorNeutralAggroReturn *const this,
        CDOTA_BaseNPC *me,
        CBaseEntity *other,
        CGameTrace *result)
{
  CGridNavPath::Rebuild(&this->m_MoveTo.m_path, me);
  retstr->m_type = ActionResultType::CONTINUE;
  retstr->m_action = 0;
  retstr->m_reason = 0;
  retstr->m_priority = EventResultPriorityType::RESULT_TRY;
  return retstr;
}


// CDOTABehaviorNeutralAggroReturn::GetName  (line 21, @0x0000000002894860, libserver.so)
// strings: "NeutralAggroReturn"
const char *__fastcall CDOTABehaviorNeutralAggroReturn::GetName(const CDOTABehaviorNeutralAggroReturn *const this)
{
  return "NeutralAggroReturn";
}


// CDOTABehaviorNeutralAggroReturn::GetTargetPosition  (line 23, @0x0000000002894870, libserver.so)
Vector __fastcall CDOTABehaviorNeutralAggroReturn::GetTargetPosition(
        CDOTABehaviorNeutralAggroReturn *const this,
        CDOTA_BaseNPC *me)
{
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  *&result.x = *&this->m_vHomePosition.x;
  result.z = this->m_vHomePosition.z;
  return result;
}


// CDOTABehaviorNeutralAggroReturn::DoesTargetMove  (line 24, @0x00000000028948a0, libserver.so)
bool __fastcall CDOTABehaviorNeutralAggroReturn::DoesTargetMove(CDOTABehaviorNeutralAggroReturn *const this)
{
  return 0;
}


