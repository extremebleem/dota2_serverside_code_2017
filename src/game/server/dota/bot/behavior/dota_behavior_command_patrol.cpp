
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTABehaviorCommandPatrol::CDOTABehaviorCommandPatrol  (line 8, @0x000000000287cfe0, libserver.so)  // inlines: Action, CDOTABehaviorCommandListener, CDOTABehaviorMoveTo, CUtlMemory, CUtlVector, CUtlVectorBase, EventDesiredResult, IActionResult, ~CDOTABehaviorCommandListener, ~CGridNavPath, ~CUtlVector
// calls: CGridNavPath::CGridNavPath, CountdownTimer::CountdownTimer, Action<CDOTA_BaseNPC>::~Action, _Unwind_Resume, CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::~CUtlVectorBase
// callers: CDOTABehaviorCommandListener::OnCommandPatrol
void __fastcall CDOTABehaviorCommandPatrol::CDOTABehaviorCommandPatrol(
        CDOTABehaviorCommandPatrol *const this,
        const Vector *const vPosition)
{
  vec_t z; // eax

  this->_vptr_INextBotEventResponder = &off_42BF5D0;
  this->m_eventResult.m_type = ActionResultType::CONTINUE;
  this->_vptr_IContextualQuery = &off_42BFA00;
  this->_vptr_IDOTABehaviorMoveTo = &off_42BFA68;
  this->m_eventResult.m_action = 0;
  this->m_eventResult.m_reason = 0;
  this->m_parent = 0;
  this->m_child = 0;
  this->m_buriedUnderMe = 0;
  this->m_coveringMe = 0;
  this->m_actor = 0;
  this->m_behavior = 0;
  this->m_isStarted = 0;
  this->m_isSuspended = 0;
  this->m_eventResult.m_priority = EventResultPriorityType::RESULT_NONE;
  this->m_MoveTo._vptr_CDOTABehaviorMoveTo = &off_42BB830;
  CGridNavPath::CGridNavPath(&this->m_MoveTo.m_path);
  CountdownTimer::CountdownTimer(&this->m_MoveTo.m_repathTimer);
  *&this->m_vOrderPosition.x = *&vPosition->x;
  z = vPosition->z;
  this->m_vPatrolPoints.m_Size = 0;
  this->m_vPatrolPoints.m_Memory.m_pMemory = 0;
  this->m_vPatrolPoints.m_Memory.m_nAllocationCount = 0;
  this->m_vPatrolPoints.m_Memory.m_nGrowSize = 0;
  this->m_vOrderPosition.z = z;
  this->m_nCurrentTargetIndex = 0;
  this->m_nDirection = 1;
}


// CDOTABehaviorCommandPatrol::OnStart  (line 13, @0x0000000002881f10, libserver.so)  // inlines: ActionResult, AddToTail, ChangeTo, Continue, CopyConstruct<Vector>, Element, GrowMemory, IActionResult, Invalidate, InvalidatePath, Length2DSqr, SetDirectionalMove, Swap, Tail, V_swap<Vector*>, V_swap<int>, V_swap<unsigned int>, VectorSubtract, operator-, operator[]
// calls: CDOTA_BaseNPC::AdvanceMovementOrderTracking, CDOTA_BaseNPC::HasQueuedOrders, CDOTA_BaseNPC::PeekNextQueuedOrder, CDOTABehaviorMoveTo::OnStart, CBaseEntity::GetAbsOrigin, CDOTA_BaseNPC::GetNextQueuedOrder, CUtlMemory<Vector, int>::Grow, operator new, CDOTABehaviorIdle::CDOTABehaviorIdle, CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::RemoveAll, operator delete, _Unwind_Resume
// strings: "No patrol path to follow."
ActionResult<CDOTA_BaseNPC> *__fastcall CDOTABehaviorCommandPatrol::OnStart(
        ActionResult<CDOTA_BaseNPC> *__return_ptr retstr,
        CDOTABehaviorCommandPatrol *const this,
        CDOTA_BaseNPC *me,
        Action<CDOTA_BaseNPC> *priorAction)
{
  unsigned __int8 (__fastcall *v8)(Action<CDOTA_BaseNPC> *, __int64); // r15
  __int64 v9; // rax
  uint32 m_nGrowSize; // eax
  Vector *m_coveringMe; // rdx
  Vector *m_pMemory; // rax
  int m_Size; // eax
  Vector *v14; // rcx
  __int64 v15; // r14
  const Vector *AbsOrigin; // rax
  __int64 v18; // r14
  int v19; // edx
  int v20; // ecx
  Vector *v21; // rdx
  Vector *v22; // rdx
  CUnitOrders *NextQueuedOrder; // rax
  Vector *v24; // rdx
  float x; // xmm2_4
  float y; // xmm3_4
  vec_t z; // xmm4_4
  int v28; // eax
  __int64 v29; // r15
  CDOTABehaviorIdle *v30; // rbx
  Vector v31; // [rsp+0h] [rbp-40h]
  float v32; // [rsp+0h] [rbp-40h]
  float v33; // [rsp+4h] [rbp-3Ch]
  float v34; // [rsp+8h] [rbp-38h]
  const Vector *v35; // [rsp+8h] [rbp-38h]

  CDOTA_BaseNPC::AdvanceMovementOrderTracking(me, 0, v31, 1);
  if ( priorAction != 0
    && (v8 = *(priorAction->_vptr_INextBotEventResponder + 63),
        v9 = (*(this->_vptr_INextBotEventResponder + 62))(this),
        v8(priorAction, v9) != 0) )
  {
    m_nGrowSize = this->m_vPatrolPoints.m_Memory.m_nGrowSize;
    this->m_vPatrolPoints.m_Memory.m_nGrowSize = HIDWORD(priorAction[3].m_actor);
    m_coveringMe = priorAction[3].m_coveringMe;
    HIDWORD(priorAction[3].m_actor) = m_nGrowSize;
    m_pMemory = this->m_vPatrolPoints.m_Memory.m_pMemory;
    this->m_vPatrolPoints.m_Memory.m_pMemory = m_coveringMe;
    LODWORD(m_coveringMe) = priorAction[3].m_actor;
    priorAction[3].m_coveringMe = m_pMemory;
    LODWORD(m_pMemory) = this->m_vPatrolPoints.m_Memory.m_nAllocationCount;
    this->m_vPatrolPoints.m_Memory.m_nAllocationCount = m_coveringMe;
    LODWORD(m_coveringMe) = priorAction[3].m_buriedUnderMe;
    LODWORD(priorAction[3].m_actor) = m_pMemory;
    LODWORD(m_pMemory) = this->m_vPatrolPoints.m_Size;
    this->m_vPatrolPoints.m_Size = m_coveringMe;
    LODWORD(priorAction[3].m_buriedUnderMe) = m_pMemory;
    this->m_nCurrentTargetIndex = priorAction[3].m_eventResult.m_type;
    this->m_nDirection = *(&priorAction[3].m_eventResult.m_type + 1);
    m_Size = this->m_vPatrolPoints.m_Size;
  }
  else
  {
    AbsOrigin = CBaseEntity::GetAbsOrigin(me);
    v18 = this->m_vPatrolPoints.m_Size;
    if ( v18 == this->m_vPatrolPoints.m_Memory.m_nAllocationCount )
    {
      v35 = AbsOrigin;
      CUtlMemory<Vector,int>::Grow(&this->m_vPatrolPoints.m_Memory, 1);
      v19 = this->m_vPatrolPoints.m_Size;
      AbsOrigin = v35;
    }
    else
    {
      v19 = this->m_vPatrolPoints.m_Size;
    }
    v20 = v19 + 1;
    v21 = this->m_vPatrolPoints.m_Memory.m_pMemory;
    this->m_vPatrolPoints.m_Size = v20;
    v22 = &v21[v18];
    if ( v22 != 0 )
    {
      *&v22->x = *&AbsOrigin->x;
      v22->z = AbsOrigin->z;
      m_Size = this->m_vPatrolPoints.m_Size;
    }
    else
    {
      m_Size = v20;
    }
    this->m_nCurrentTargetIndex = 1;
  }
  if ( m_Size <= 63 )
  {
    v14 = this->m_vPatrolPoints.m_Memory.m_pMemory;
    v15 = m_Size - 1;
    if ( (((v14[v15].x - this->m_vOrderPosition.x) * (v14[v15].x - this->m_vOrderPosition.x))
        + ((v14[v15].y - this->m_vOrderPosition.y) * (v14[v15].y - this->m_vOrderPosition.y))) >= 4096.0 )
    {
      if ( this->m_vPatrolPoints.m_Memory.m_nAllocationCount == m_Size )
      {
        CUtlMemory<Vector,int>::Grow(&this->m_vPatrolPoints.m_Memory, 1);
        m_Size = this->m_vPatrolPoints.m_Size;
        v14 = this->m_vPatrolPoints.m_Memory.m_pMemory;
      }
      this->m_vPatrolPoints.m_Size = m_Size + 1;
      if ( &v14[v15] != -12LL )
      {
        *&v14[v15 + 1].x = *&this->m_vOrderPosition.x;
        v14[v15 + 1].z = this->m_vOrderPosition.z;
      }
    }
  }
  while ( CDOTA_BaseNPC::HasQueuedOrders(me) && CDOTA_BaseNPC::PeekNextQueuedOrder(me)->m_nOrderType == 29 )
  {
    if ( this->m_vPatrolPoints.m_Size > 63 )
      goto LABEL_13;
    NextQueuedOrder = CDOTA_BaseNPC::GetNextQueuedOrder(me);
    v24 = this->m_vPatrolPoints.m_Memory.m_pMemory;
    x = NextQueuedOrder->m_vPosition.x;
    y = NextQueuedOrder->m_vPosition.y;
    z = NextQueuedOrder->m_vPosition.z;
    v28 = this->m_vPatrolPoints.m_Size;
    v29 = v28 - 1;
    if ( (((v24[v29].x - x) * (v24[v29].x - x)) + ((v24[v29].y - y) * (v24[v29].y - y))) >= 4096.0 )
    {
      if ( v28 == this->m_vPatrolPoints.m_Memory.m_nAllocationCount )
      {
        v32 = y;
        v33 = z;
        v34 = x;
        CUtlMemory<Vector,int>::Grow(&this->m_vPatrolPoints.m_Memory, 1);
        v28 = this->m_vPatrolPoints.m_Size;
        v24 = this->m_vPatrolPoints.m_Memory.m_pMemory;
        y = v32;
        z = v33;
        x = v34;
      }
      this->m_vPatrolPoints.m_Size = v28 + 1;
      if ( &v24[v29] != -12LL )
      {
        v24[v29 + 1].x = x;
        v24[v29 + 1].y = y;
        v24[v29 + 1].z = z;
      }
    }
  }
  if ( this->m_vPatrolPoints.m_Size <= 1 )
  {
    v30 = operator new(0x80u);
    CDOTABehaviorIdle::CDOTABehaviorIdle(v30);
    retstr->m_type = ActionResultType::CHANGE_TO;
    retstr->m_action = v30;
    retstr->m_reason = "No patrol path to follow.";
  }
  else
  {
LABEL_13:
    CDOTABehaviorMoveTo::OnStart(&this->m_MoveTo);
    if ( this->m_MoveTo.m_bIsDirectional )
    {
      this->m_MoveTo.m_bIsDirectional = 0;
      CUtlVectorBase<Vector,CUtlMemory<Vector,int>>::RemoveAll(&this->m_MoveTo.m_path.m_Positions);
      if ( me->m_iIsControllableByPlayer64.m_Value == 0 )
        goto LABEL_15;
    }
    else if ( me->m_iIsControllableByPlayer64.m_Value == 0 )
    {
LABEL_15:
      retstr->m_type = ActionResultType::CONTINUE;
      retstr->m_action = 0;
      retstr->m_reason = 0;
      return retstr;
    }
    (*(this->_vptr_INextBotEventResponder + 66))(retstr, this, me, 0.0);
  }
  return retstr;
}


// CDOTABehaviorCommandPatrol::GetTargetPosition  (line 55, @0x0000000002870eb0, libserver.so)
Vector __fastcall CDOTABehaviorCommandPatrol::GetTargetPosition(
        CDOTABehaviorCommandPatrol *const this,
        CDOTA_BaseNPC *me)
{
  int m_nCurrentTargetIndex; // eax
  int m_Size; // edx
  __int64 v4; // rdx
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  m_nCurrentTargetIndex = this->m_nCurrentTargetIndex;
  m_Size = this->m_vPatrolPoints.m_Size;
  if ( m_nCurrentTargetIndex > m_Size )
  {
    m_nCurrentTargetIndex = m_Size - 1;
    this->m_nCurrentTargetIndex = m_Size - 1;
  }
  if ( m_nCurrentTargetIndex < 0 )
  {
    this->m_nCurrentTargetIndex = 0;
    v4 = 0;
  }
  else
  {
    v4 = m_nCurrentTargetIndex;
  }
  *&result.x = *&this->m_vPatrolPoints.m_Memory.m_pMemory[v4].x;
  result.z = this->m_vPatrolPoints.m_Memory.m_pMemory[v4].z;
  return result;
}


// CDOTABehaviorCommandPatrol::Update  (line 68, @0x000000000287b1f0, libserver.so)  // inlines: ActionResult, Continue, IActionResult, Invalidate, InvalidatePath
// calls: CDOTABehaviorMoveTo::IsPathCurrentlyExhausted, CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::RemoveAll, CDOTABehaviorMoveTo::Update
ActionResult<CDOTA_BaseNPC> *__fastcall CDOTABehaviorCommandPatrol::Update(
        ActionResult<CDOTA_BaseNPC> *__return_ptr retstr,
        CDOTABehaviorCommandPatrol *const this,
        CDOTA_BaseNPC *me,
        float interval)
{
  CDOTABehaviorMoveTo *p_m_MoveTo; // r13
  int v8; // eax
  int m_Size; // edx

  p_m_MoveTo = &this->m_MoveTo;
  if ( CDOTABehaviorMoveTo::IsPathCurrentlyExhausted(&this->m_MoveTo, me) )
  {
    v8 = this->m_nDirection + this->m_nCurrentTargetIndex;
    this->m_nCurrentTargetIndex = v8;
    if ( v8 < 0 )
    {
      this->m_nCurrentTargetIndex = 1;
      this->m_nDirection = 1;
    }
    else
    {
      m_Size = this->m_vPatrolPoints.m_Size;
      if ( v8 >= m_Size )
      {
        this->m_nDirection = -1;
        this->m_nCurrentTargetIndex = m_Size - 2;
      }
    }
    CUtlVectorBase<Vector,CUtlMemory<Vector,int>>::RemoveAll(&this->m_MoveTo.m_path.m_Positions);
  }
  CDOTABehaviorMoveTo::Update(p_m_MoveTo, &this->IDOTABehaviorMoveTo, me, 0.0);
  retstr->m_type = ActionResultType::CONTINUE;
  retstr->m_action = 0;
  retstr->m_reason = 0;
  return retstr;
}


