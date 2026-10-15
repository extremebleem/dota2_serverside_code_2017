
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTABehaviorInvade::~CDOTABehaviorInvade  (line 9, @0x00000000028952b0, libserver.so)  // inlines: Purge, RemoveAll, ~CDOTABehaviorMoveTo, ~CGridNavPath, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: Action<CDOTA_BaseNPC>::~Action, CUtlMemory<Vector, int>::Purge
// callers: CDOTABehaviorCreatureInvade::CDOTABehaviorCreatureInvade
void __fastcall CDOTABehaviorInvade::~CDOTABehaviorInvade(CDOTABehaviorInvade *const this)
{
  bool v2; // zf
  CUtlVectorBase<Vector,CUtlMemory<Vector,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_MoveTo.m_path.m_ShortPath.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_INextBotEventResponder = &off_42C2BF0;
  this->_vptr_IContextualQuery = &off_42C3030;
  this->m_MoveTo.m_path.m_ShortPath.m_Size = 0;
  this->_vptr_IDOTABehaviorMoveTo = &off_42C3098;
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


// CDOTABehaviorInvade::~CDOTABehaviorInvade  (line 9, @0x00000000028957f0, libserver.so)  // inlines: Purge, RemoveAll, ~CDOTABehaviorInvade, ~CDOTABehaviorMoveTo, ~CGridNavPath, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: Action<CDOTA_BaseNPC>::~Action, operator delete, CUtlMemory<Vector, int>::Purge
void __fastcall CDOTABehaviorInvade::~CDOTABehaviorInvade(CDOTABehaviorInvade *const this)
{
  bool v2; // zf
  CUtlVectorBase<Vector,CUtlMemory<Vector,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_MoveTo.m_path.m_ShortPath.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_INextBotEventResponder = &off_42C2BF0;
  this->_vptr_IContextualQuery = &off_42C3030;
  this->m_MoveTo.m_path.m_ShortPath.m_Size = 0;
  this->_vptr_IDOTABehaviorMoveTo = &off_42C3098;
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


// CDOTABehaviorInvade::OnResume  (line 17, @0x0000000002894df0, libserver.so)  // inlines: ActionResult, Continue, IActionResult, Invalidate, NetworkStateChanged, OnResume, RemoveAll, Set, operator=<float>
ActionResult<CDOTA_BaseNPC> *__fastcall CDOTABehaviorInvade::OnResume(
        ActionResult<CDOTA_BaseNPC> *__return_ptr retstr,
        CDOTABehaviorInvade *const this,
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


// CDOTABehaviorInvade::OnContact  (line 19, @0x0000000002894cf0, libserver.so)  // inlines: EventDesiredResult, IActionResult, OnContact, TryContinue
// calls: CGridNavPath::Rebuild
EventDesiredResult<CDOTA_BaseNPC> *__fastcall CDOTABehaviorInvade::OnContact(
        EventDesiredResult<CDOTA_BaseNPC> *__return_ptr retstr,
        CDOTABehaviorInvade *const this,
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


// CDOTABehaviorInvade::GetName  (line 22, @0x0000000002894760, libserver.so)
// strings: "Invade"
const char *__fastcall CDOTABehaviorInvade::GetName(const CDOTABehaviorInvade *const this)
{
  return "Invade";
}


// CDOTABehaviorInvade::DoesTargetMove  (line 25, @0x0000000002894770, libserver.so)
bool __fastcall CDOTABehaviorInvade::DoesTargetMove(CDOTABehaviorInvade *const this)
{
  return 0;
}


// CDOTABehaviorInvade::GetGoalEntity  (line 26, @0x0000000002895c50, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInitialGoalEntity, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CBaseEntity*, operator CEntityInstance*
// globals: CEntityHandle::gm_pEntityList
CBaseEntity *__fastcall CDOTABehaviorInvade::GetGoalEntity(CDOTABehaviorInvade *const this, CDOTA_BaseNPC *me)
{
  CBaseEntity *result; // rax
  uint32 m_Index; // edx
  unsigned __int64 m_Index_low; // rsi
  CEntityIdentity *v5; // rcx
  CEntityIdentity *v6; // rcx

  result = 0;
  m_Index = me->m_initialGoalEntity.m_Index;
  if ( m_Index + 2 > 1 )
  {
    m_Index_low = LOWORD(me->m_initialGoalEntity.m_Index);
    v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(m_Index_low >> 9) & 0x3F];
    if ( v5 != 0 )
    {
      v6 = &v5[m_Index_low & 0x1FF];
      if ( v6 != 0 && m_Index == v6->m_EHandle.m_Index )
        return v6->m_pInstance;
    }
  }
  return result;
}


// CDOTABehaviorTutorialInvade::~CDOTABehaviorTutorialInvade  (line 41, @0x0000000002895390, libserver.so)  // inlines: Purge, RemoveAll, ~CDOTABehaviorInvade, ~CDOTABehaviorMoveTo, ~CGridNavPath, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: Action<CDOTA_BaseNPC>::~Action, CUtlMemory<Vector, int>::Purge
void __fastcall CDOTABehaviorTutorialInvade::~CDOTABehaviorTutorialInvade(CDOTABehaviorTutorialInvade *const this)
{
  bool v2; // zf
  CUtlVectorBase<Vector,CUtlMemory<Vector,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_MoveTo.m_path.m_ShortPath.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_INextBotEventResponder = &off_42C2BF0;
  this->_vptr_IContextualQuery = &off_42C3030;
  this->m_MoveTo.m_path.m_ShortPath.m_Size = 0;
  this->_vptr_IDOTABehaviorMoveTo = &off_42C3098;
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


// CDOTABehaviorTutorialInvade::~CDOTABehaviorTutorialInvade  (line 41, @0x0000000002895a90, libserver.so)  // inlines: Purge, RemoveAll, ~CDOTABehaviorInvade, ~CDOTABehaviorMoveTo, ~CDOTABehaviorTutorialInvade, ~CGridNavPath, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: Action<CDOTA_BaseNPC>::~Action, operator delete, CUtlMemory<Vector, int>::Purge
void __fastcall CDOTABehaviorTutorialInvade::~CDOTABehaviorTutorialInvade(CDOTABehaviorTutorialInvade *const this)
{
  bool v2; // zf
  CUtlVectorBase<Vector,CUtlMemory<Vector,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_MoveTo.m_path.m_ShortPath.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_INextBotEventResponder = &off_42C2BF0;
  this->_vptr_IContextualQuery = &off_42C3030;
  this->m_MoveTo.m_path.m_ShortPath.m_Size = 0;
  this->_vptr_IDOTABehaviorMoveTo = &off_42C3098;
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


// CDOTABehaviorRoquelaireInvade::~CDOTABehaviorRoquelaireInvade  (line 54, @0x0000000002895550, libserver.so)  // inlines: Purge, RemoveAll, ~CDOTABehaviorInvade, ~CDOTABehaviorMoveTo, ~CDOTABehaviorTutorialInvade, ~CGridNavPath, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: Action<CDOTA_BaseNPC>::~Action, CUtlMemory<Vector, int>::Purge
void __fastcall CDOTABehaviorRoquelaireInvade::~CDOTABehaviorRoquelaireInvade(
        CDOTABehaviorRoquelaireInvade *const this)
{
  bool v2; // zf
  CUtlVectorBase<Vector,CUtlMemory<Vector,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_MoveTo.m_path.m_ShortPath.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_INextBotEventResponder = &off_42C2BF0;
  this->_vptr_IContextualQuery = &off_42C3030;
  this->m_MoveTo.m_path.m_ShortPath.m_Size = 0;
  this->_vptr_IDOTABehaviorMoveTo = &off_42C3098;
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


// CDOTABehaviorRoquelaireInvade::~CDOTABehaviorRoquelaireInvade  (line 54, @0x0000000002895b70, libserver.so)  // inlines: Purge, RemoveAll, ~CDOTABehaviorInvade, ~CDOTABehaviorMoveTo, ~CDOTABehaviorRoquelaireInvade, ~CDOTABehaviorTutorialInvade, ~CGridNavPath, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: Action<CDOTA_BaseNPC>::~Action, operator delete, CUtlMemory<Vector, int>::Purge
void __fastcall CDOTABehaviorRoquelaireInvade::~CDOTABehaviorRoquelaireInvade(
        CDOTABehaviorRoquelaireInvade *const this)
{
  bool v2; // zf
  CUtlVectorBase<Vector,CUtlMemory<Vector,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_MoveTo.m_path.m_ShortPath.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_INextBotEventResponder = &off_42C2BF0;
  this->_vptr_IContextualQuery = &off_42C3030;
  this->m_MoveTo.m_path.m_ShortPath.m_Size = 0;
  this->_vptr_IDOTABehaviorMoveTo = &off_42C3098;
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


