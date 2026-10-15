
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CBaseRopePhysics::CBaseRopePhysics  (line 16, @0x000000000241b870, libserver.so)  // inlines: CSimplePhysics, Init, Restart
// calls: CBaseRopePhysics::SetNumNodes
// callers: CalcRopeStartingConditions, CPositionInterpolator_Rope::CPositionInterpolator_Rope
void __fastcall CBaseRopePhysics::CBaseRopePhysics(
        CBaseRopePhysics *const this,
        CSimplePhysics::CNode *pNodes,
        int nNodes,
        CRopeSpring *pSprings,
        float *flSpringDistsSqr)
{
  CSimplePhysics::CNode *v6; // rax
  Vector *p_m_vPrevPos; // r9
  Vector *p_m_vPredicted; // r8
  CSimplePhysics::CNode *v9; // rcx
  signed __int64 v10; // rcx

  this->_vptr_IHelper = &off_40D4630;
  this->m_Physics.m_flPredictedTime = 0.0;
  this->m_Physics.m_iCurTimeStep = 0;
  this->m_pNodes = pNodes;
  this->m_pSprings = pSprings;
  this->m_flNodeSpringDistsSqr = flSpringDistsSqr;
  this->m_flSpringDistSqr = 1.0;
  this->m_flSpringDist = 1.0;
  this->m_Physics.m_flTimeStep = 0.02;
  this->m_Physics.m_flTimeStepMul = 0.00019999999;
  if ( nNodes > 0 )
  {
    v6 = pNodes;
    p_m_vPrevPos = &pNodes->m_vPrevPos;
    p_m_vPredicted = &pNodes->m_vPredicted;
    do
    {
      v6->m_vPos.x = 0.0;
      v9 = v6++;
      v6[-1].m_vPos.y = 0.0;
      v10 = v9 - pNodes;
      v6[-1].m_vPos.z = 0.0;
      *(&p_m_vPrevPos->x + v10) = 0.0;
      *(&p_m_vPrevPos->y + v10) = 0.0;
      *(&p_m_vPrevPos->z + v10) = 0.0;
      *(&p_m_vPredicted->x + v10) = 0.0;
      *(&p_m_vPredicted->y + v10) = 0.0;
      *(&p_m_vPredicted->z + v10) = 0.0;
    }
    while ( v6 != &pNodes[(nNodes - 1) + 1] );
  }
  CBaseRopePhysics::SetNumNodes(this, nNodes);
  this->m_pDelegate = 0;
}


// CBaseRopePhysics::SetNumNodes  (line 38, @0x000000000241b800, libserver.so)  // inlines: NumSprings
// callers: CalcRopeStartingConditions, CBaseRopePhysics::CBaseRopePhysics, CPositionInterpolator_Rope::InterpolatePosition
void __fastcall CBaseRopePhysics::SetNumNodes(CBaseRopePhysics *const this, int nNodes)
{
  __int64 v2; // rax
  int v3; // ecx
  __int64 v4; // rdx
  __int64 v5; // r8

  v2 = 0;
  v3 = 0;
  this->m_nNodes = nNodes;
  v4 = 1;
  if ( nNodes > 1 )
  {
    do
    {
      ++v3;
      this->m_pSprings[v2].m_pNode1 = &this->m_pNodes[v4 - 1].m_vPos;
      v5 = v4 * 36;
      ++v4;
      this->m_pSprings[v2].m_pNode2 = (&this->m_pNodes->m_vPos + v5);
      this->m_flNodeSpringDistsSqr[v2++] = this->m_flSpringDistSqr / (this->m_nNodes - 1);
    }
    while ( v3 < this->m_nNodes - 1 );
  }
}


// CBaseRopePhysics::Restart  (line 55, @0x000000000241ba30, libserver.so)  // inlines: Init
// callers: CalcRopeStartingConditions
void __fastcall CBaseRopePhysics::Restart(CBaseRopePhysics *const this)
{
  this->m_Physics.m_flPredictedTime = 0.0;
  this->m_Physics.m_iCurTimeStep = 0;
  this->m_Physics.m_flTimeStep = 0.02;
  this->m_Physics.m_flTimeStepMul = 0.00019999999;
}


// CBaseRopePhysics::ResetSpringLength  (line 61, @0x000000000241ba60, libserver.so)  // inlines: NumSprings
// callers: CHangRope::ApplyConstraints, CBaseRopePhysics::SetupSimulation, CPositionInterpolator_Rope::InterpolatePosition
void __fastcall CBaseRopePhysics::ResetSpringLength(CBaseRopePhysics *const this, float a2, float flSpringDist)
{
  float m_flSpringDistSqr; // xmm1_4
  int m_nNodes; // eax
  __int64 v5; // rcx
  int v6; // edx
  int v7; // eax

  m_flSpringDistSqr = 0.0;
  if ( a2 <= 0.0 )
    a2 = 0.0;
  else
    m_flSpringDistSqr = a2 * a2;
  m_nNodes = this->m_nNodes;
  v5 = 0;
  v6 = 0;
  this->m_flSpringDist = a2;
  this->m_flSpringDistSqr = m_flSpringDistSqr;
  v7 = m_nNodes - 1;
  if ( v7 > 0 )
  {
    while ( 1 )
    {
      ++v6;
      this->m_flNodeSpringDistsSqr[v5++] = m_flSpringDistSqr / v7;
      v7 = this->m_nNodes - 1;
      if ( v6 >= v7 )
        break;
      m_flSpringDistSqr = this->m_flSpringDistSqr;
    }
  }
}


// CBaseRopePhysics::GetSpringLength  (line 72, @0x000000000241bad0, libserver.so)
float __fastcall CBaseRopePhysics::GetSpringLength(const CBaseRopePhysics *const this)
{
  return this->m_flSpringDist;
}


// CBaseRopePhysics::ResetNodeSpringLength  (line 77, @0x000000000241bae0, libserver.so)
void __fastcall CBaseRopePhysics::ResetNodeSpringLength(
        CBaseRopePhysics *const this,
        int iStartNode,
        float a3,
        float flSpringDist)
{
  this->m_flNodeSpringDistsSqr[iStartNode] = a3 * a3;
}


// CBaseRopePhysics::SetupSimulation  (line 82, @0x000000000241bb00, libserver.so)  // inlines: SetDelegate
// calls: CBaseRopePhysics::ResetSpringLength
void __fastcall CBaseRopePhysics::SetupSimulation(
        CBaseRopePhysics *const this,
        float a2,
        float flSpringDist,
        CSimplePhysics::IHelper *pDelegate)
{
  CBaseRopePhysics::ResetSpringLength(this, a2, flSpringDist);
  this->m_pDelegate = pDelegate;
}


// CBaseRopePhysics::SetDelegate  (line 89, @0x000000000241bb20, libserver.so)
void __fastcall CBaseRopePhysics::SetDelegate(CBaseRopePhysics *const this, CSimplePhysics::IHelper *pDelegate)
{
  this->m_pDelegate = pDelegate;
}


// CBaseRopePhysics::Simulate  (line 95, @0x000000000241be30, libserver.so)
// calls: CSimplePhysics::Simulate
// callers: CalcRopeStartingConditions, CPositionInterpolator_Rope::InterpolatePosition
void __fastcall CBaseRopePhysics::Simulate(CBaseRopePhysics *const this, float a2, float dt)
{
  CSimplePhysics::Simulate(&this->m_Physics, this->m_pNodes, this->m_nNodes, this, a2, 0.98000002);
}


// CBaseRopePhysics::GetNodeForces  (line 102, @0x0000000002414230, libserver.so)  // inlines: Init
void __fastcall CBaseRopePhysics::GetNodeForces(
        CBaseRopePhysics *const this,
        CSimplePhysics::CNode *pNodes,
        int iNode,
        Vector *pAccel)
{
  CSimplePhysics::IHelper *m_pDelegate; // rdi

  m_pDelegate = this->m_pDelegate;
  if ( m_pDelegate != 0 )
  {
    (*m_pDelegate->_vptr_IHelper)(m_pDelegate, pNodes, iNode, pAccel);
  }
  else
  {
    pAccel->x = 0.0;
    pAccel->y = 0.0;
    pAccel->z = 0.0;
  }
}


// CBaseRopePhysics::ApplyConstraints  (line 111, @0x0000000002414f40, libserver.so)  // inlines: LengthSqr, NumSprings, VectorMultiply, VectorSubtract, operator*, operator*=, operator+=, operator-, operator-=
// calls: sqrtf
// callers: CHangRope::ApplyConstraints
void __fastcall CBaseRopePhysics::ApplyConstraints(
        CBaseRopePhysics *const this,
        CSimplePhysics::CNode *pNodes,
        int nNodes)
{
  float v3; // xmm5_4
  int v5; // r12d
  float v7; // xmm7_4
  float v8; // xmm6_4
  __int64 v9; // r14
  int v10; // edx
  CRopeSpring *v11; // r15
  float *p_x; // rax
  float *v13; // rcx
  float v14; // xmm4_4
  float v15; // xmm3_4
  float v16; // xmm2_4
  float v17; // xmm1_4
  float m_flSpringDistSqr; // xmm0_4
  float v19; // xmm1_4
  float v20; // xmm4_4
  float v21; // xmm3_4
  float v22; // xmm2_4
  float *v23; // rax
  float v24; // xmm3_4
  float v25; // xmm2_4
  CSimplePhysics::IHelper *m_pDelegate; // rdi
  float v28; // [rsp-4h] [rbp-44h]
  int nNodesa; // [rsp+0h] [rbp-40h]
  float v30; // [rsp+4h] [rbp-3Ch]

  v3 = 0.0;
  v5 = 3;
  v7 = 1.0;
  v8 = 0.5;
  do
  {
    if ( this->m_nNodes > 1 )
    {
      v9 = 0;
      v10 = 0;
      do
      {
        v11 = &this->m_pSprings[v9];
        p_x = &v11->m_pNode1->x;
        v13 = &v11->m_pNode2->x;
        v14 = v11->m_pNode1->x - *v13;
        v15 = v11->m_pNode1->y - v13[1];
        v16 = v11->m_pNode1->z - v13[2];
        v17 = ((v14 * v14) + (v15 * v15)) + (v16 * v16);
        m_flSpringDistSqr = this->m_flSpringDistSqr;
        if ( m_flSpringDistSqr == v3 )
          m_flSpringDistSqr = this->m_flNodeSpringDistsSqr[v9];
        if ( v17 > m_flSpringDistSqr )
        {
          v19 = this->m_flSpringDist / fsqrt(v17);
          v20 = (v14 * (v7 - v19)) * v8;
          v21 = (v15 * (v7 - v19)) * v8;
          v22 = (v16 * (v7 - v19)) * v8;
          *p_x = *p_x - v20;
          p_x[1] = p_x[1] - v21;
          p_x[2] = p_x[2] - v22;
          v23 = &v11->m_pNode2->x;
          v24 = v21 + v23[1];
          v25 = v22 + v23[2];
          *v23 = v20 + *v23;
          v23[1] = v24;
          v23[2] = v25;
        }
        ++v10;
        ++v9;
      }
      while ( v10 < this->m_nNodes - 1 );
    }
    m_pDelegate = this->m_pDelegate;
    if ( m_pDelegate != 0 )
    {
      v28 = v8;
      *&nNodesa = v7;
      v30 = v3;
      (*(m_pDelegate->_vptr_IHelper + 1))(m_pDelegate, pNodes, nNodes);
      v8 = v28;
      v7 = *&nNodesa;
      v3 = v30;
    }
    --v5;
  }
  while ( v5 != 0 );
}


