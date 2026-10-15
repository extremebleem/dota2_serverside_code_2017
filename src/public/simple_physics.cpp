
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CSimplePhysics::CSimplePhysics  (line 15, @0x000000000241bb30, libserver.so)  // inlines: Init
void __fastcall CSimplePhysics::CSimplePhysics(CSimplePhysics *const this)
{
  this->m_flPredictedTime = 0.0;
  this->m_iCurTimeStep = 0;
  this->m_flTimeStep = 0.033333335;
  this->m_flTimeStepMul = 0.00055555563;
}


// CSimplePhysics::Init  (line 21, @0x000000000241bb60, libserver.so)
void __fastcall CSimplePhysics::Init(CSimplePhysics *const this, float a2, float flTimeStep)
{
  this->m_flTimeStep = a2;
  this->m_flPredictedTime = 0.0;
  this->m_iCurTimeStep = 0;
  this->m_flTimeStepMul = (a2 * a2) * 0.5;
}


// CSimplePhysics::Simulate  (line 30, @0x000000000241bb90, libserver.so)  // inlines: GetCurTime, VectorAdd, VectorLerp, VectorMultiply, VectorSubtract, operator*, operator+, operator-, operator=
// calls: ceil
// callers: CBaseRopePhysics::Simulate
void __fastcall CSimplePhysics::Simulate(
        CSimplePhysics *const this,
        CSimplePhysics::CNode *pNodes,
        int nNodes,
        CSimplePhysics::IHelper *pHelper,
        float dt,
        float flDamp)
{
  CSimplePhysics *v7; // r14
  double v9; // xmm2_8
  float m_flTimeStep; // xmm4_4
  double v11; // xmm0_8
  double v12; // xmm1_8
  double v13; // xmm3_8
  __m128d v14; // xmm2
  double v15; // xmm4_8
  Vector *v16; // r12
  CSimplePhysics::IHelper *v17; // r9
  unsigned int v18; // r13d
  CSimplePhysics::CNode *v19; // rbx
  CSimplePhysics *v20; // r15
  Vector *v21; // r14
  __int64 v22; // rdx
  float m_flTimeStepMul; // xmm7_4
  float v24; // xmm6_4
  float v25; // xmm5_4
  float v26; // xmm7_4
  vec_t v27; // xmm5_4
  float v28; // xmm1_4
  CSimplePhysics::CNode *v29; // rax
  Vector *v30; // rsi
  Vector *p_m_vPredicted; // rcx
  CSimplePhysics::CNode *v32; // rdx
  float x; // xmm0_4
  signed __int64 v34; // rdx
  int newTimeStep; // [rsp+0h] [rbp-84h]
  Vector *p_m_vPrevPos; // [rsp+4h] [rbp-80h]
  int nTimeSteps; // [rsp+10h] [rbp-74h]
  float v39; // [rsp+14h] [rbp-70h]
  int v41; // [rsp+24h] [rbp-60h]
  double v43; // [rsp+2Ch] [rbp-58h]
  float v44; // [rsp+2Ch] [rbp-58h]
  double v45; // [rsp+34h] [rbp-50h]
  CSimplePhysics::IHelper *v46; // [rsp+34h] [rbp-50h]
  Vector vAccel; // [rsp+3Ch] [rbp-48h] BYREF

  v7 = this;
  v9 = dt + this->m_flPredictedTime;
  m_flTimeStep = this->m_flTimeStep;
  this->m_flPredictedTime = v9;
  v39 = m_flTimeStep;
  v43 = v9;
  v45 = m_flTimeStep;
  v11 = ceil(v9 / m_flTimeStep);
  v13 = v45;
  v14 = *&v43;
  *&v15 = LODWORD(v39);
  newTimeStep = v11;
  nTimeSteps = v11 - v7->m_iCurTimeStep;
  if ( nTimeSteps > 0 )
  {
    v41 = 0;
    p_m_vPrevPos = &pNodes->m_vPrevPos;
    do
    {
      if ( nNodes > 0 )
      {
        v16 = p_m_vPrevPos;
        v17 = pHelper;
        v18 = 0;
        v19 = pNodes;
        v20 = v7;
        *&v12 = LODWORD(flDamp);
        v21 = p_m_vPrevPos;
        do
        {
          v44 = *&v12;
          v22 = v18;
          v46 = v17;
          ++v18;
          ++v19;
          v21 += 3;
          v16 += 3;
          (*v17->_vptr_IHelper)(v17, pNodes, v22, &vAccel, v11, v12, v14.m128d_f64[0], v13, v15);
          *&v13 = LODWORD(v19[-1].m_vPos.y);
          *&v12 = LODWORD(v44);
          m_flTimeStepMul = v20->m_flTimeStepMul;
          *&v14.m128d_f64[0] = LODWORD(v19[-1].m_vPos.z);
          v24 = vAccel.y * m_flTimeStepMul;
          *&v15 = LODWORD(v19[-1].m_vPos.x);
          v25 = vAccel.z * m_flTimeStepMul;
          v17 = v46;
          v26 = m_flTimeStepMul * vAccel.x;
          v27 = v25 + (((v19[-1].m_vPos.z - v21[-3].z) * v44) + *v14.m128d_f64);
          HIDWORD(v11) = HIDWORD(v15);
          *&v11 = *&v15 - v21[-3].x;
          v19[-1].m_vPos.y = v24 + (((v19[-1].m_vPos.y - v21[-3].y) * v44) + *&v13);
          v19[-1].m_vPos.z = v27;
          *&v11 = (*&v11 * v44) + *&v15;
          v19[-1].m_vPos.x = v26 + *&v11;
          v16[-3].x = *&v15;
          v16[-3].y = *&v13;
          v16[-3].z = *v14.m128d_f64;
        }
        while ( v18 != nNodes );
        v7 = v20;
        pHelper = v46;
      }
      (*(pHelper->_vptr_IHelper + 1))(pHelper, pNodes, nNodes, v11, v12, v14.m128d_f64[0], v13, v15);
      ++v41;
    }
    while ( v41 != nTimeSteps );
    v14 = *&v7->m_flPredictedTime;
    *&v15 = v7->m_flTimeStep;
    v13 = *&v15;
  }
  v7->m_iCurTimeStep = newTimeStep;
  v14.m128d_f64[0] = (v14.m128d_f64[0] - ((newTimeStep * *&v15) - v13)) / v13;
  v28 = _mm_movedup_pd(v14).m128d_f64[0];
  if ( nNodes > 0 )
  {
    v29 = pNodes;
    v30 = &pNodes->m_vPrevPos;
    p_m_vPredicted = &pNodes->m_vPredicted;
    do
    {
      v32 = v29;
      x = v29->m_vPos.x;
      ++v29;
      v34 = v32 - pNodes;
      *(&p_m_vPredicted->x + v34) = ((x - *(&v30->x + v34)) * v28) + *(&v30->x + v34);
      *(&p_m_vPredicted->y + v34) = ((v29[-1].m_vPos.y - *(&v30->y + v34)) * v28) + *(&v30->y + v34);
      *(&p_m_vPredicted->z + v34) = ((v29[-1].m_vPos.z - *(&v30->z + v34)) * v28) + *(&v30->z + v34);
    }
    while ( v29 != &pNodes[(nNodes - 1) + 1] );
  }
}


