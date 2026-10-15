
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CAI_ProxyMovementSink::CalcYawSpeed  (line 292, @0x0000000001b3a160, libserver.so)
float __fastcall CAI_ProxyMovementSink::CalcYawSpeed(CAI_ProxyMovementSink *const this)
{
  IAI_MovementSink *m_pProxied; // rdi
  float result; // xmm0_4

  m_pProxied = this->m_pProxied;
  if ( m_pProxied == 0 )
    return -1.0;
  result = (*m_pProxied->_vptr_IAI_MovementSink)(m_pProxied);
  if ( result == -1.0 )
    return -1.0;
  return result;
}


// CAI_ProxyMovementSink::OnCalcBaseMove  (line 302, @0x0000000001b3a1b0, libserver.so)
__int64 __fastcall CAI_ProxyMovementSink::OnCalcBaseMove(
        CAI_ProxyMovementSink *const this,
        AILocalMoveGoal_t *pMoveGoal,
        float flDistClear,
        AIMoveResult_t *pResult)
{
  IAI_MovementSink *m_pProxied; // rdi
  __int64 result; // rax

  m_pProxied = this->m_pProxied;
  if ( m_pProxied == 0 )
    return 0;
  result = (*(m_pProxied->_vptr_IAI_MovementSink + 1))(m_pProxied, pMoveGoal, pResult, flDistClear);
  if ( result == 0 )
    return 0;
  return result;
}


// CAI_ProxyMovementSink::OnObstructionPreSteer  (line 311, @0x0000000001b3a1e0, libserver.so)
__int64 __fastcall CAI_ProxyMovementSink::OnObstructionPreSteer(
        CAI_ProxyMovementSink *const this,
        AILocalMoveGoal_t *pMoveGoal,
        float flDistClear,
        AIMoveResult_t *pResult)
{
  IAI_MovementSink *m_pProxied; // rdi
  __int64 result; // rax

  m_pProxied = this->m_pProxied;
  if ( m_pProxied == 0 )
    return 0;
  result = (*(m_pProxied->_vptr_IAI_MovementSink + 2))(m_pProxied, pMoveGoal, pResult, flDistClear);
  if ( result == 0 )
    return 0;
  return result;
}


// CAI_ProxyMovementSink::OnFailedSteer  (line 320, @0x0000000001b3a210, libserver.so)
__int64 __fastcall CAI_ProxyMovementSink::OnFailedSteer(
        CAI_ProxyMovementSink *const this,
        AILocalMoveGoal_t *pMoveGoal,
        float flDistClear,
        AIMoveResult_t *pResult)
{
  IAI_MovementSink *m_pProxied; // rdi
  __int64 result; // rax

  m_pProxied = this->m_pProxied;
  if ( m_pProxied == 0 )
    return 0;
  result = (*(m_pProxied->_vptr_IAI_MovementSink + 3))(m_pProxied, pMoveGoal, pResult, flDistClear);
  if ( result == 0 )
    return 0;
  return result;
}


// CAI_ProxyMovementSink::OnFailedLocalNavigation  (line 329, @0x0000000001b3a240, libserver.so)
__int64 __fastcall CAI_ProxyMovementSink::OnFailedLocalNavigation(
        CAI_ProxyMovementSink *const this,
        AILocalMoveGoal_t *pMoveGoal,
        float flDistClear,
        AIMoveResult_t *pResult)
{
  IAI_MovementSink *m_pProxied; // rdi
  __int64 result; // rax

  m_pProxied = this->m_pProxied;
  if ( m_pProxied == 0 )
    return 0;
  result = (*(m_pProxied->_vptr_IAI_MovementSink + 4))(m_pProxied, pMoveGoal, pResult, flDistClear);
  if ( result == 0 )
    return 0;
  return result;
}


// CAI_ProxyMovementSink::OnInsufficientStopDist  (line 338, @0x0000000001b3a270, libserver.so)
__int64 __fastcall CAI_ProxyMovementSink::OnInsufficientStopDist(
        CAI_ProxyMovementSink *const this,
        AILocalMoveGoal_t *pMoveGoal,
        float flDistClear,
        AIMoveResult_t *pResult)
{
  IAI_MovementSink *m_pProxied; // rdi
  __int64 result; // rax

  m_pProxied = this->m_pProxied;
  if ( m_pProxied == 0 )
    return 0;
  result = (*(m_pProxied->_vptr_IAI_MovementSink + 5))(m_pProxied, pMoveGoal, pResult, flDistClear);
  if ( result == 0 )
    return 0;
  return result;
}


// CAI_ProxyMovementSink::OnMoveStalled  (line 347, @0x0000000001b3a2a0, libserver.so)
bool __fastcall CAI_ProxyMovementSink::OnMoveStalled(
        CAI_ProxyMovementSink *const this,
        const AILocalMoveGoal_t *const move)
{
  IAI_MovementSink *m_pProxied; // rdi
  bool result; // al

  m_pProxied = this->m_pProxied;
  if ( m_pProxied == 0 )
    return 0;
  result = (*(m_pProxied->_vptr_IAI_MovementSink + 8))(m_pProxied, move);
  if ( !result )
    return 0;
  return result;
}


// CAI_ProxyMovementSink::OnMoveExecuteFailed  (line 356, @0x0000000001b3a2d0, libserver.so)
bool __fastcall CAI_ProxyMovementSink::OnMoveExecuteFailed(
        CAI_ProxyMovementSink *const this,
        const AILocalMoveGoal_t *const move,
        const AIMoveTrace_t *const trace,
        AIMotorMoveResult_t fMotorResult,
        AIMoveResult_t *pResult)
{
  IAI_MovementSink *m_pProxied; // rdi
  bool result; // al

  m_pProxied = this->m_pProxied;
  if ( m_pProxied == 0 )
    return 0;
  result = (*(m_pProxied->_vptr_IAI_MovementSink + 9))(m_pProxied, move, trace, fMotorResult, pResult);
  if ( !result )
    return 0;
  return result;
}


// CAI_ProxyMovementSink::OnMoveBlocked  (line 365, @0x0000000001b3a300, libserver.so)
bool __fastcall CAI_ProxyMovementSink::OnMoveBlocked(CAI_ProxyMovementSink *const this, AIMoveResult_t *pResult)
{
  IAI_MovementSink *m_pProxied; // rdi
  bool result; // al

  m_pProxied = this->m_pProxied;
  if ( m_pProxied == 0 )
    return 0;
  result = (*(m_pProxied->_vptr_IAI_MovementSink + 6))(m_pProxied, pResult);
  if ( !result )
    return 0;
  return result;
}


// CAI_ProxyMovementSink::OnObstructionIsGoal  (line 374, @0x0000000001b3a330, libserver.so)
__int64 __fastcall CAI_ProxyMovementSink::OnObstructionIsGoal(
        CAI_ProxyMovementSink *const this,
        double a2,
        float flDistClearToObstruction,
        AIMoveResult_t *pResult)
{
  IAI_MovementSink *m_pProxied; // rdi
  __int64 result; // rax

  m_pProxied = this->m_pProxied;
  if ( m_pProxied == 0 )
    return 0;
  result = (*(m_pProxied->_vptr_IAI_MovementSink + 7))(m_pProxied, pResult, a2, flDistClearToObstruction);
  if ( result == 0 )
    return 0;
  return result;
}


