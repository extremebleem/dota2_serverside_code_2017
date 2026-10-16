
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTABehaviorCompanion::~CDOTABehaviorCompanion  (line 6, @0x0000000002884360, libserver.so)  // inlines: Purge, ~CDOTABehaviorMoveTo, ~CGridNavPath, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::RemoveAll, Action<CDOTA_BaseNPC>::~Action, CUtlMemory<Vector, int>::Purge
// callers: CDOTABehaviorCompanion::OnStart
void __fastcall CDOTABehaviorCompanion::~CDOTABehaviorCompanion(CDOTABehaviorCompanion *const this)
{
  this->_vptr_INextBotEventResponder = &off_42BFA90;
  this->_vptr_IContextualQuery = &off_42BFEC0;
  this->_vptr_IDOTABehaviorMoveTo = &off_42BFF28;
  this->m_MoveTo._vptr_CDOTABehaviorMoveTo = &off_42BB830;
  CUtlVectorBase<Vector,CUtlMemory<Vector,int>>::RemoveAll(&this->m_MoveTo.m_path.m_ShortPath);
  if ( (this->m_MoveTo.m_path.m_ShortPath.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<Vector,int>::Purge(&this->m_MoveTo.m_path.m_ShortPath.m_Memory);
    if ( (this->m_MoveTo.m_path.m_ShortPath.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<Vector,int>::Purge(&this->m_MoveTo.m_path.m_ShortPath.m_Memory);
  }
  CUtlVectorBase<Vector,CUtlMemory<Vector,int>>::RemoveAll(&this->m_MoveTo.m_path.m_Positions);
  if ( (this->m_MoveTo.m_path.m_Positions.m_Memory.m_nGrowSize & 0xC0000000) != 0
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


// CDOTABehaviorCompanion::~CDOTABehaviorCompanion  (line 6, @0x0000000002884f60, libserver.so)  // inlines: Purge, ~CDOTABehaviorCompanion, ~CDOTABehaviorMoveTo, ~CGridNavPath, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::RemoveAll, Action<CDOTA_BaseNPC>::~Action, operator delete, CUtlMemory<Vector, int>::Purge
void __fastcall CDOTABehaviorCompanion::~CDOTABehaviorCompanion(CDOTABehaviorCompanion *const this)
{
  this->_vptr_INextBotEventResponder = &off_42BFA90;
  this->_vptr_IContextualQuery = &off_42BFEC0;
  this->_vptr_IDOTABehaviorMoveTo = &off_42BFF28;
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
  Action<CDOTA_BaseNPC>::~Action(this);
  operator delete(this);
}


// CDOTABehaviorCompanion::OnResume  (line 12, @0x00000000028838c0, libserver.so)  // inlines: ActionResult, Continue, IActionResult
// calls: CDOTABehaviorMoveTo::OnResume
ActionResult<CDOTA_BaseNPC> *__fastcall CDOTABehaviorCompanion::OnResume(
        ActionResult<CDOTA_BaseNPC> *__return_ptr retstr,
        CDOTABehaviorCompanion *const this,
        CDOTA_BaseNPC *me,
        Action<CDOTA_BaseNPC> *interruptingAction)
{
  CDOTABehaviorMoveTo::OnResume(&this->m_MoveTo);
  retstr->m_type = ActionResultType::CONTINUE;
  retstr->m_action = 0;
  retstr->m_reason = 0;
  return retstr;
}


// CDOTABehaviorCompanion::GetName  (line 14, @0x0000000002882730, libserver.so)
const char *__fastcall CDOTABehaviorCompanion::GetName(const CDOTABehaviorCompanion *const this)
{
  return "Companion";
}


// CDOTABehaviorCompanion::DoesTargetMove  (line 17, @0x0000000002882740, libserver.so)
bool __fastcall CDOTABehaviorCompanion::DoesTargetMove(CDOTABehaviorCompanion *const this)
{
  return 1;
}


// CDOTABehaviorCreatureCompanion::~CDOTABehaviorCreatureCompanion  (line 35, @0x0000000002884520, libserver.so)  // inlines: Purge, ~CDOTABehaviorCompanion, ~CDOTABehaviorMoveTo, ~CGridNavPath, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::RemoveAll, Action<CDOTA_BaseNPC>::~Action, CUtlMemory<Vector, int>::Purge
void __fastcall CDOTABehaviorCreatureCompanion::~CDOTABehaviorCreatureCompanion(
        CDOTABehaviorCreatureCompanion *const this)
{
  this->_vptr_INextBotEventResponder = &off_42BFA90;
  this->_vptr_IContextualQuery = &off_42BFEC0;
  this->_vptr_IDOTABehaviorMoveTo = &off_42BFF28;
  this->m_MoveTo._vptr_CDOTABehaviorMoveTo = &off_42BB830;
  CUtlVectorBase<Vector,CUtlMemory<Vector,int>>::RemoveAll(&this->m_MoveTo.m_path.m_ShortPath);
  if ( (this->m_MoveTo.m_path.m_ShortPath.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<Vector,int>::Purge(&this->m_MoveTo.m_path.m_ShortPath.m_Memory);
    if ( (this->m_MoveTo.m_path.m_ShortPath.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<Vector,int>::Purge(&this->m_MoveTo.m_path.m_ShortPath.m_Memory);
  }
  CUtlVectorBase<Vector,CUtlMemory<Vector,int>>::RemoveAll(&this->m_MoveTo.m_path.m_Positions);
  if ( (this->m_MoveTo.m_path.m_Positions.m_Memory.m_nGrowSize & 0xC0000000) != 0
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


// CDOTABehaviorCreatureCompanion::~CDOTABehaviorCreatureCompanion  (line 35, @0x0000000002885990, libserver.so)  // inlines: Purge, ~CDOTABehaviorCompanion, ~CDOTABehaviorCreatureCompanion, ~CDOTABehaviorMoveTo, ~CGridNavPath, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::RemoveAll, Action<CDOTA_BaseNPC>::~Action, operator delete, CUtlMemory<Vector, int>::Purge
void __fastcall CDOTABehaviorCreatureCompanion::~CDOTABehaviorCreatureCompanion(
        CDOTABehaviorCreatureCompanion *const this)
{
  this->_vptr_INextBotEventResponder = &off_42BFA90;
  this->_vptr_IContextualQuery = &off_42BFEC0;
  this->_vptr_IDOTABehaviorMoveTo = &off_42BFF28;
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
  Action<CDOTA_BaseNPC>::~Action(this);
  operator delete(this);
}


// CDOTABehaviorPet::~CDOTABehaviorPet  (line 51, @0x0000000002885b60, libserver.so)  // inlines: Purge, StopListeningForAllEvents, ~CDOTABehaviorCompanion, ~CDOTABehaviorMoveTo, ~CGameEventListener, ~CGridNavPath, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~IGameEventListener2
// calls: CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::RemoveAll, Action<CDOTA_BaseNPC>::~Action, CUtlMemory<Vector, int>::Purge
void __fastcall CDOTABehaviorPet::~CDOTABehaviorPet(CDOTABehaviorPet *const this)
{
  bool v2; // zf

  v2 = !this->m_bRegisteredForEvents;
  this->_vptr_INextBotEventResponder = &off_42C0410;
  this->_vptr_IContextualQuery = &off_42C0848;
  this->_vptr_IDOTABehaviorMoveTo = &off_42C08B0;
  this->_vptr_IGameEventListener2 = off_3FB3190;  // vptr: CGameEventListener
  if ( !v2 )
  {
    if ( gameeventmanager != 0 )
      (*(gameeventmanager->_vptr_IBaseInterface + 6))(gameeventmanager, &this->CGameEventListener);
    this->m_bRegisteredForEvents = 0;
  }
  this->_vptr_IGameEventListener2 = off_3FB3150;  // vptr: IGameEventListener2
  this->_vptr_INextBotEventResponder = &off_42BFA90;
  this->_vptr_IContextualQuery = &off_42BFEC0;
  this->_vptr_IDOTABehaviorMoveTo = &off_42BFF28;
  this->m_MoveTo._vptr_CDOTABehaviorMoveTo = &off_42BB830;
  CUtlVectorBase<Vector,CUtlMemory<Vector,int>>::RemoveAll(&this->m_MoveTo.m_path.m_ShortPath);
  if ( (this->m_MoveTo.m_path.m_ShortPath.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<Vector,int>::Purge(&this->m_MoveTo.m_path.m_ShortPath.m_Memory);
    if ( (this->m_MoveTo.m_path.m_ShortPath.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<Vector,int>::Purge(&this->m_MoveTo.m_path.m_ShortPath.m_Memory);
  }
  CUtlVectorBase<Vector,CUtlMemory<Vector,int>>::RemoveAll(&this->m_MoveTo.m_path.m_Positions);
  if ( (this->m_MoveTo.m_path.m_Positions.m_Memory.m_nGrowSize & 0xC0000000) != 0
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


// CDOTABehaviorPet::~CDOTABehaviorPet  (line 51, @0x0000000002885cc0, libserver.so)  // inlines: Purge, StopListeningForAllEvents, ~CDOTABehaviorCompanion, ~CDOTABehaviorMoveTo, ~CDOTABehaviorPet, ~CGameEventListener, ~CGridNavPath, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~IGameEventListener2
// calls: CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::RemoveAll, Action<CDOTA_BaseNPC>::~Action, operator delete, CUtlMemory<Vector, int>::Purge
void __fastcall CDOTABehaviorPet::~CDOTABehaviorPet(CDOTABehaviorPet *const this)
{
  bool v2; // zf

  v2 = !this->m_bRegisteredForEvents;
  this->_vptr_INextBotEventResponder = &off_42C0410;
  this->_vptr_IContextualQuery = &off_42C0848;
  this->_vptr_IDOTABehaviorMoveTo = &off_42C08B0;
  this->_vptr_IGameEventListener2 = off_3FB3190;  // vptr: CGameEventListener
  if ( !v2 )
  {
    if ( gameeventmanager != 0 )
      (*(gameeventmanager->_vptr_IBaseInterface + 6))(gameeventmanager, &this->CGameEventListener);
    this->m_bRegisteredForEvents = 0;
  }
  this->_vptr_IGameEventListener2 = off_3FB3150;  // vptr: IGameEventListener2
  this->_vptr_INextBotEventResponder = &off_42BFA90;
  this->_vptr_IContextualQuery = &off_42BFEC0;
  this->_vptr_IDOTABehaviorMoveTo = &off_42BFF28;
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
  Action<CDOTA_BaseNPC>::~Action(this);
  operator delete(this);
}


