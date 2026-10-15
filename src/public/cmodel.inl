
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// Ray_t::Init  (line 59, @0x0000000002094880, libserver.so)  // inlines: LengthSqr, VectorAdd, VectorSubtract, operator*=
// callers: CBaseAnimatingController::CalculateIKLocks, TestJumpDown
void __fastcall Ray_t::Init(
        Ray_t *const this,
        const Vector *const start,
        const Vector *const end,
        const Vector *const mins,
        const Vector *const maxs)
{
  vec_t v5; // xmm0_4
  vec_t v6; // xmm2_4
  vec_t v7; // xmm1_4
  vec_t v8; // xmm2_4
  vec_t v9; // xmm2_4
  vec_t v10; // xmm3_4
  vec_t v11; // xmm3_4
  float v12; // xmm0_4
  vec_t v13; // xmm0_4
  vec_t v14; // xmm3_4
  vec_t v15; // xmm3_4
  vec_t v16; // xmm2_4
  vec_t v17; // xmm2_4
  float v18; // xmm0_4
  vec_t v19; // xmm0_4

  this->m_flRadius = 0.0;
  v5 = end->x - start->x;
  this->m_Delta.x = v5;
  v6 = end->y - start->y;
  this->m_Delta.y = v6;
  v7 = end->z - start->z;
  this->m_Delta.z = v7;
  this->m_IsSwept = (((v5 * v5) + (v6 * v6)) + (v7 * v7)) != 0.0;
  v8 = maxs->x - mins->x;
  this->m_Extents.x = v8;
  v9 = v8 * 0.5;
  v10 = maxs->y - mins->y;
  this->m_Extents.y = v10;
  v11 = v10 * 0.5;
  v12 = maxs->z - mins->z;
  this->m_Extents.x = v9;
  this->m_Extents.y = v11;
  v13 = v12 * 0.5;
  this->m_Extents.z = v13;
  this->m_IsRay = (((v9 * v9) + (v11 * v11)) + (v13 * v13)) < 0.000001;
  v14 = mins->x + maxs->x;
  this->m_StartOffset.x = v14;
  v15 = v14 * 0.5;
  v16 = mins->y + maxs->y;
  this->m_StartOffset.y = v16;
  v17 = v16 * 0.5;
  v18 = mins->z + maxs->z;
  this->m_StartOffset.x = v15;
  this->m_StartOffset.y = v17;
  v19 = v18 * 0.5;
  this->m_StartOffset.z = v19;
  this->m_Start.x = start->x + v15;
  this->m_Start.y = start->y + v17;
  this->m_Start.z = start->z + v19;
  this->m_StartOffset.x = -v15;
  this->m_StartOffset.y = -v17;
  this->m_StartOffset.z = -v19;
}


