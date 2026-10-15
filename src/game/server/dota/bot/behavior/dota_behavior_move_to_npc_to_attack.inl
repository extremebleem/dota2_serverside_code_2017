
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTABehaviorMoveToNPCToAttack::~CDOTABehaviorMoveToNPCToAttack  (line 11, @0x00000000028950f0, libserver.so)  // inlines: Purge, RemoveAll, ~CDOTABehaviorMoveTo, ~CGridNavPath, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: Action<CDOTA_BaseNPC>::~Action, CUtlMemory<Vector, int>::Purge
// callers: CDOTABehaviorTutorialRazorMoveToNPCToAttack::CDOTABehaviorTutorialRazorMoveToNPCToAttack
void __fastcall CDOTABehaviorMoveToNPCToAttack::~CDOTABehaviorMoveToNPCToAttack(
        CDOTABehaviorMoveToNPCToAttack *const this)
{
  bool v2; // zf
  CUtlVectorBase<Vector,CUtlMemory<Vector,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_MoveTo.m_path.m_ShortPath.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_INextBotEventResponder = &off_42C3F70;
  this->_vptr_IContextualQuery = &off_42C43A0;
  this->m_MoveTo.m_path.m_ShortPath.m_Size = 0;
  this->_vptr_IDOTABehaviorMoveTo = &off_42C4408;
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


// CDOTABehaviorMoveToNPCToAttack::~CDOTABehaviorMoveToNPCToAttack  (line 11, @0x0000000002895710, libserver.so)  // inlines: Purge, RemoveAll, ~CDOTABehaviorMoveTo, ~CDOTABehaviorMoveToNPCToAttack, ~CGridNavPath, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: Action<CDOTA_BaseNPC>::~Action, operator delete, CUtlMemory<Vector, int>::Purge
void __fastcall CDOTABehaviorMoveToNPCToAttack::~CDOTABehaviorMoveToNPCToAttack(
        CDOTABehaviorMoveToNPCToAttack *const this)
{
  bool v2; // zf
  CUtlVectorBase<Vector,CUtlMemory<Vector,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_MoveTo.m_path.m_ShortPath.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_INextBotEventResponder = &off_42C3F70;
  this->_vptr_IContextualQuery = &off_42C43A0;
  this->m_MoveTo.m_path.m_ShortPath.m_Size = 0;
  this->_vptr_IDOTABehaviorMoveTo = &off_42C4408;
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


// CDOTABehaviorMoveToNPCToAttack::OnResume  (line 21, @0x0000000002894ef0, libserver.so)  // inlines: ActionResult, Continue, IActionResult, Invalidate, NetworkStateChanged, OnResume, RemoveAll, Set, operator=<float>
ActionResult<CDOTA_BaseNPC> *__fastcall CDOTABehaviorMoveToNPCToAttack::OnResume(
        ActionResult<CDOTA_BaseNPC> *__return_ptr retstr,
        CDOTABehaviorMoveToNPCToAttack *const this,
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


// CDOTABehaviorMoveToNPCToAttack::OnContact  (line 23, @0x0000000002894d70, libserver.so)  // inlines: EventDesiredResult, IActionResult, OnContact, TryContinue
// calls: CGridNavPath::Rebuild
EventDesiredResult<CDOTA_BaseNPC> *__fastcall CDOTABehaviorMoveToNPCToAttack::OnContact(
        EventDesiredResult<CDOTA_BaseNPC> *__return_ptr retstr,
        CDOTABehaviorMoveToNPCToAttack *const this,
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


// CDOTABehaviorMoveToNPCToAttack::OnInvalidatePath  (line 26, @0x00000000028947f0, libserver.so)  // inlines: EventDesiredResult, IActionResult, Invalidate, InvalidatePath, RemoveAll, TryContinue
EventDesiredResult<CDOTA_BaseNPC> *__fastcall CDOTABehaviorMoveToNPCToAttack::OnInvalidatePath(
        EventDesiredResult<CDOTA_BaseNPC> *__return_ptr retstr,
        CDOTABehaviorMoveToNPCToAttack *const this,
        CDOTA_BaseNPC *me)
{
  this->m_MoveTo.m_path.m_Positions.m_Size = 0;
  retstr->m_type = ActionResultType::CONTINUE;
  retstr->m_action = 0;
  retstr->m_reason = 0;
  retstr->m_priority = EventResultPriorityType::RESULT_TRY;
  return retstr;
}


// CDOTABehaviorMoveToNPCToAttack::GetName  (line 29, @0x0000000002894820, libserver.so)
// strings: "MoveToNPCToAttack"
const char *__fastcall CDOTABehaviorMoveToNPCToAttack::GetName(const CDOTABehaviorMoveToNPCToAttack *const this)
{
  return "MoveToNPCToAttack";
}


// CDOTABehaviorMoveToNPCToAttack::DoesTargetMove  (line 32, @0x0000000002894830, libserver.so)
bool __fastcall CDOTABehaviorMoveToNPCToAttack::DoesTargetMove(CDOTABehaviorMoveToNPCToAttack *const this)
{
  return 1;
}


// CDOTABehaviorTutorialRazorMoveToNPCToAttack::~CDOTABehaviorTutorialRazorMoveToNPCToAttack  (line 45, @0x0000000002895470, libserver.so)  // inlines: Purge, RemoveAll, ~CDOTABehaviorMoveTo, ~CDOTABehaviorMoveToNPCToAttack, ~CGridNavPath, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: Action<CDOTA_BaseNPC>::~Action, CUtlMemory<Vector, int>::Purge
void __fastcall CDOTABehaviorTutorialRazorMoveToNPCToAttack::~CDOTABehaviorTutorialRazorMoveToNPCToAttack(
        CDOTABehaviorTutorialRazorMoveToNPCToAttack *const this)
{
  bool v2; // zf
  CUtlVectorBase<Vector,CUtlMemory<Vector,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_MoveTo.m_path.m_ShortPath.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_INextBotEventResponder = &off_42C3F70;
  this->_vptr_IContextualQuery = &off_42C43A0;
  this->m_MoveTo.m_path.m_ShortPath.m_Size = 0;
  this->_vptr_IDOTABehaviorMoveTo = &off_42C4408;
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


// CDOTABehaviorTutorialRazorMoveToNPCToAttack::~CDOTABehaviorTutorialRazorMoveToNPCToAttack  (line 45, @0x00000000028959b0, libserver.so)  // inlines: Purge, RemoveAll, ~CDOTABehaviorMoveTo, ~CDOTABehaviorMoveToNPCToAttack, ~CDOTABehaviorTutorialRazorMoveToNPCToAttack, ~CGridNavPath, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: Action<CDOTA_BaseNPC>::~Action, operator delete, CUtlMemory<Vector, int>::Purge
void __fastcall CDOTABehaviorTutorialRazorMoveToNPCToAttack::~CDOTABehaviorTutorialRazorMoveToNPCToAttack(
        CDOTABehaviorTutorialRazorMoveToNPCToAttack *const this)
{
  bool v2; // zf
  CUtlVectorBase<Vector,CUtlMemory<Vector,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_MoveTo.m_path.m_ShortPath.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_INextBotEventResponder = &off_42C3F70;
  this->_vptr_IContextualQuery = &off_42C43A0;
  this->m_MoveTo.m_path.m_ShortPath.m_Size = 0;
  this->_vptr_IDOTABehaviorMoveTo = &off_42C4408;
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


