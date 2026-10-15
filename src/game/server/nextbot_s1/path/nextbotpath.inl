
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CNavPathNB::~CNavPathNB  (line 112, @0x0000000002f1e0e0, libserver.so)  // inlines: ~CPath, ~CPathData
void __fastcall CNavPathNB::~CNavPathNB(CNavPathNB *const this)
{
  this->_vptr_CPathData = off_47B0E10;
}


// CNavPathNB::~CNavPathNB  (line 112, @0x0000000002f1f3a0, libserver.so)  // inlines: ~CNavPathNB, ~CPath, ~CPathData
// calls: operator delete
void __fastcall CNavPathNB::~CNavPathNB(CNavPathNB *const this)
{
  this->_vptr_CPathData = off_47B0E10;
  operator delete(this);
}


// CNavPathNB::IsRepathNeeded  (line 170, @0x0000000002f1dd60, libserver.so)
bool __fastcall CNavPathNB::IsRepathNeeded(CNavPathNB *const this)
{
  return 1;
}


// CNavPathNB::PostUpdate  (line 174, @0x0000000002f1dd70, libserver.so)
void __fastcall CNavPathNB::PostUpdate(CNavPathNB *const this)
{
  ;
}


// CNavPathNB::InvalidatePath  (line 194, @0x0000000002f1f7d0, libserver.so)
// calls: CPathData::InvalidatePath
void __fastcall CNavPathNB::InvalidatePath(CNavPathNB *const this)
{
  IPathFollower *m_pPathFollower; // rdi

  CPathData::InvalidatePath(this);
  m_pPathFollower = this->m_pPathFollower;
  if ( m_pPathFollower != 0 )
    (*m_pPathFollower->_vptr_IPathFollower)(m_pPathFollower);
}


// CNavPathNB::FinishComputePathWrapper  (line 212, @0x0000000002f1f9a0, libserver.so)  // inlines: Invalidate, Set, operator=
// calls: CPath::FinishComputePathWrapper
bool __fastcall CNavPathNB::FinishComputePathWrapper(CNavPathNB *const this, bool bFullPath)
{
  bool result; // al
  uint32 m_Index; // edx
  vec_t y; // xmm0_4

  result = CPath::FinishComputePathWrapper(this, bFullPath);
  if ( result )
  {
    m_Index = this->m_Target.m_hTargetEntity.m_Index;
    this->m_LastTarget.m_vTargetPoint.x = this->m_Target.m_vTargetPoint.x;
    y = this->m_Target.m_vTargetPoint.y;
    this->m_LastTarget.m_hTargetEntity.m_Index = m_Index;
    LOBYTE(m_Index) = this->m_Target.m_bUseEntity;
    this->m_LastTarget.m_vTargetPoint.y = y;
    this->m_LastTarget.m_vTargetPoint.z = this->m_Target.m_vTargetPoint.z;
    this->m_LastTarget.m_bUseEntity = m_Index;
    this->m_LastTarget.m_bIsOpenGoal = this->m_Target.m_bIsOpenGoal;
  }
  else
  {
    this->m_LastTarget.m_bUseEntity = 1;
    this->m_LastTarget.m_hTargetEntity.m_Index = -1;
    this->m_LastTarget.m_bIsOpenGoal = 0;
    this->m_LastTarget.m_vTargetPoint = vec3_invalid;
  }
  return result;
}


// CNavPathNB::PredictTargetPosition  (line 225, @0x0000000002f1dd80, libserver.so)
bool __fastcall CNavPathNB::PredictTargetPosition(
        const CNavPathNB *const this,
        const CBaseCombatCharacter *const rTarget,
        Vector *pPredictedPosOut)
{
  return 0;
}


