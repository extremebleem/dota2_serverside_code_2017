// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/rope_helpers.cpp:18
class CHangRope : public CRopePhysics<512> {
public:

	bool m_bAdjustSlack;  // +0x7054

	float m_flRopeLength;  // +0x7058
	float m_flCurSlack;  // +0x705c
	float m_flWantedHangDist;  // +0x7060
	float m_flStartZ;  // +0x7064
	CHangRope(CHangRope &);
	CHangRope(const CHangRope &);
	CHangRope();
	virtual void GetNodeForces(CNode *, int, Vector *);
	virtual void ApplyConstraints(CNode *, int);
	void ApplyNewSpringLength();

	// vtable[0] GetNodeForces
	// vtable[1] ApplyConstraints
	// sizeof = 28776
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CHangRope::GetNodeForces  (line 25, @0x00000000023a8c00, libserver.so)  // inlines: Init
void __fastcall CHangRope::GetNodeForces(
        CHangRope *const this,
        CSimplePhysics::CNode *pNodes,
        int iNode,
        Vector *pAccel)
{
  pAccel->x = 0.0;
  pAccel->y = 0.0;
  pAccel->z = -1500.0;
}


// CHangRope::ApplyConstraints  (line 31, @0x00000000023aae00, libserver.so)  // inlines: ApplyNewSpringLength, operator=
// calls: CBaseRopePhysics::ApplyConstraints, CBaseRopePhysics::ResetSpringLength
void __fastcall CHangRope::ApplyConstraints(CHangRope *const this, CSimplePhysics::CNode *pNodes, int nNodes)
{
  __int64 v3; // r13
  int m_nNodes; // ecx
  CSimplePhysics::CNode *m_pNodes; // rdx
  int v8; // esi
  float v9; // xmm1_4
  CSimplePhysics::CNode *v10; // rax
  __int64 v11; // rcx
  float v12; // xmm0_4
  float v13; // xmm0_4

  v3 = nNodes;
  CBaseRopePhysics::ApplyConstraints(this, pNodes, nNodes);
  pNodes->m_vPos = this->m_vEndPoints[0];
  pNodes[v3 - 1].m_vPos = this->m_vEndPoints[1];
  m_nNodes = this->m_nNodes;
  if ( m_nNodes <= 0 )
  {
    v9 = 0.0;
    v8 = m_nNodes - 1;
  }
  else
  {
    m_pNodes = this->m_pNodes;
    v8 = m_nNodes - 1;
    v9 = 0.0;
    v10 = m_pNodes + 1;
    v11 = &m_pNodes[(m_nNodes - 1) + 1];
    while ( 1 )
    {
      v12 = this->m_flStartZ - m_pNodes->m_vPos.z;
      m_pNodes = v10;
      v9 = fmaxf(fabs(v12), v9);
      if ( v10 == v11 )
        break;
      ++v10;
    }
  }
  if ( this->m_flWantedHangDist > v9 )
    v13 = this->m_flCurSlack + 1.0;
  else
    v13 = this->m_flCurSlack - 1.0;
  this->m_flCurSlack = v13;
  CBaseRopePhysics::ResetSpringLength(this, v8);
}


// CalcRopeStartingConditions  (line 86, @0x0000000002387e00, libserver.so)  // inlines: CHangRope, CRopePhysics, FastSqrt, GetNode, Length, VectorLength, VectorLerp, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator-, operator=
// calls: CBaseRopePhysics::CBaseRopePhysics, CBaseRopePhysics::SetNumNodes, CBaseRopePhysics::Restart, CBaseRopePhysics::Simulate
// callers: CRopeKeyframe::SetupHangDistance
void __fastcall CalcRopeStartingConditions(
        const Vector *const vStartPos,
        const Vector *const vEndPos,
        int nNodes,
        float desiredHang,
        float *pOutputLength,
        float *pOutputSlack)
{
  float y; // xmm2_4
  float x; // xmm6_4
  float v12; // xmm1_4
  float v13; // xmm3_4
  float z; // xmm5_4
  float v15; // xmm4_4
  int m_nNodes; // ecx
  __int64 v17; // rsi
  int i; // edx
  float v19; // xmm3_4
  CSimplePhysics::CNode *v20; // rax
  float v21; // xmm3_4
  vec_t v22; // xmm2_4
  vec_t v23; // xmm1_4
  float v24; // xmm4_4
  float v25; // xmm0_4
  vec_t v26; // xmm0_4
  float v27; // xmm1_4
  CHangRope rope; // [rsp+10h] [rbp-70A0h] BYREF

  CBaseRopePhysics::CBaseRopePhysics(&rope, rope.m_Nodes, 512, rope.m_Springs, rope.m_SpringDistsSqr);
  y = vStartPos->y;
  x = vStartPos->x;
  rope.m_flCurSlack = 100.0;
  v12 = vEndPos->x;
  rope.m_vEndPoints[0].y = y;
  v13 = vEndPos->y;
  rope._vptr_IHelper = &off_40A6030;
  z = vEndPos->z;
  rope.m_vEndPoints[1].x = v12;
  rope.m_vEndPoints[1].y = v13;
  v15 = vStartPos->z;
  rope.m_vEndPoints[0].x = x;
  rope.m_vEndPoints[0].z = v15;
  rope.m_vEndPoints[1].z = z;
  rope.m_flWantedHangDist = desiredHang;
  rope.m_flStartZ = fminf(v15, z);
  rope.m_flRopeLength = fsqrt((((v12 - x) * (v12 - x)) + ((v13 - y) * (v13 - y))) + ((z - v15) * (z - v15)));
  CBaseRopePhysics::SetNumNodes(&rope, nNodes);
  m_nNodes = rope.m_nNodes;
  v17 = 0;
  for ( i = 0; rope.m_nNodes > i; m_nNodes = rope.m_nNodes )
  {
    v19 = i++;
    v20 = &rope.m_pNodes[v17++];
    v21 = v19 / (m_nNodes - 1);
    v22 = ((vEndPos->x - vStartPos->x) * v21) + vStartPos->x;
    v20->m_vPos.x = v22;
    v23 = ((vEndPos->y - vStartPos->y) * v21) + vStartPos->y;
    v20->m_vPos.y = v23;
    v24 = vStartPos->z;
    v25 = vEndPos->z;
    v20->m_vPrevPos.x = v22;
    v20->m_vPrevPos.y = v23;
    v26 = ((v25 - v24) * v21) + v24;
    v20->m_vPos.z = v26;
    v20->m_vPrevPos.z = v26;
  }
  CBaseRopePhysics::Restart(&rope);
  CBaseRopePhysics::Simulate(&rope, v27);
  *pOutputLength = rope.m_flRopeLength;
  *pOutputSlack = rope.m_flCurSlack;
}


