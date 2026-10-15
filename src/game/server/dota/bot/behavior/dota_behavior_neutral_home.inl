
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTABehaviorNeutralHome::~CDOTABehaviorNeutralHome  (line 9, @0x00000000028951d0, libserver.so)  // inlines: Purge, RemoveAll, ~CDOTABehaviorMoveTo, ~CGridNavPath, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: Action<CDOTA_BaseNPC>::~Action, CUtlMemory<Vector, int>::Purge
void __fastcall CDOTABehaviorNeutralHome::~CDOTABehaviorNeutralHome(CDOTABehaviorNeutralHome *const this)
{
  bool v2; // zf
  CUtlVectorBase<Vector,CUtlMemory<Vector,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_MoveTo.m_path.m_ShortPath.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_INextBotEventResponder = &off_42C5250;
  this->_vptr_IContextualQuery = &off_42C5680;
  this->m_MoveTo.m_path.m_ShortPath.m_Size = 0;
  this->_vptr_IDOTABehaviorMoveTo = &off_42C56E8;
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


// CDOTABehaviorNeutralHome::~CDOTABehaviorNeutralHome  (line 9, @0x00000000028958d0, libserver.so)  // inlines: Purge, RemoveAll, ~CDOTABehaviorMoveTo, ~CDOTABehaviorNeutralHome, ~CGridNavPath, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: Action<CDOTA_BaseNPC>::~Action, operator delete, CUtlMemory<Vector, int>::Purge
void __fastcall CDOTABehaviorNeutralHome::~CDOTABehaviorNeutralHome(CDOTABehaviorNeutralHome *const this)
{
  bool v2; // zf
  CUtlVectorBase<Vector,CUtlMemory<Vector,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_MoveTo.m_path.m_ShortPath.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_INextBotEventResponder = &off_42C5250;
  this->_vptr_IContextualQuery = &off_42C5680;
  this->m_MoveTo.m_path.m_ShortPath.m_Size = 0;
  this->_vptr_IDOTABehaviorMoveTo = &off_42C56E8;
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


// CDOTABehaviorNeutralHome::OnContact  (line 20, @0x0000000002894d30, libserver.so)  // inlines: EventDesiredResult, IActionResult, OnContact, TryContinue
// calls: CGridNavPath::Rebuild
EventDesiredResult<CDOTA_BaseNPC> *__fastcall CDOTABehaviorNeutralHome::OnContact(
        EventDesiredResult<CDOTA_BaseNPC> *__return_ptr retstr,
        CDOTABehaviorNeutralHome *const this,
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


// CDOTABehaviorNeutralHome::GetName  (line 23, @0x0000000002894790, libserver.so)
// strings: "NeutralHome"
const char *__fastcall CDOTABehaviorNeutralHome::GetName(const CDOTABehaviorNeutralHome *const this)
{
  return "NeutralHome";
}


// CDOTABehaviorNeutralHome::GetTargetPosition  (line 25, @0x00000000028947a0, libserver.so)
Vector __fastcall CDOTABehaviorNeutralHome::GetTargetPosition(CDOTABehaviorNeutralHome *const this, CDOTA_BaseNPC *me)
{
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  *&result.x = *&this->m_vHomePosition.x;
  result.z = this->m_vHomePosition.z;
  return result;
}


// CDOTABehaviorNeutralHome::DoesTargetMove  (line 26, @0x00000000028947d0, libserver.so)
bool __fastcall CDOTABehaviorNeutralHome::DoesTargetMove(CDOTABehaviorNeutralHome *const this)
{
  return 0;
}


