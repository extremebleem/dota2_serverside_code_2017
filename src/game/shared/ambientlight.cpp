
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// GetTerrainAmbientLightAtPoint  (line 25, @0x0000000002ec3030, libserver.so)  // inlines: IsZero, Vector, VectorAdd, operator*=, operator+, operator=
// calls: GetLightForTrace
// callers: CNavAreaExtended::ComputeLighting
bool __fastcall GetTerrainAmbientLightAtPoint(const Vector *const pos, Vector *color, CBaseAnimating *entity)
{
  float y; // xmm3_4
  float v6; // xmm1_4
  vec_t z; // eax
  __m128 v8; // xmm1
  __m128 v9; // xmm0
  __int32 v10; // xmm2_4
  __m128 v11; // xmm1
  vec_t v12; // xmm2_4
  bool LightForTrace; // r13
  float x; // xmm3_4
  float v15; // xmm1_4
  float v16; // xmm5_4
  float v17; // xmm6_4
  int i; // r14d
  int j; // r15d
  float v21; // xmm2_4
  float v22; // xmm0_4
  bool v23; // al
  unsigned int actualBrightness; // [rsp+1Ch] [rbp-84h]
  float actualBrightnessa; // [rsp+1Ch] [rbp-84h]
  Vector diffuse; // [rsp+20h] [rbp-80h] BYREF
  Vector start; // [rsp+30h] [rbp-70h] BYREF
  Vector end; // [rsp+40h] [rbp-60h] BYREF
  Vector newStart; // [rsp+50h] [rbp-50h] BYREF
  Vector newEnd; // [rsp+60h] [rbp-40h] BYREF

  *&newEnd.x = (*g_pLightQuery->_vptr_ILightQuery)(g_pLightQuery, 7, pos, 0xFFFFFFFFLL);
  y = pos->y;
  newEnd.z = v6;
  z = vec3_origin.z;
  *&diffuse.x = *&vec3_origin.x;
  v8.m128_f32[0] = fmaxf(v6, fmaxf(newEnd.x, newEnd.y)) * 3.0;
  diffuse.z = z;
  v9 = _mm_cmpge_ss(0x3F800000u, v8);
  *&start.x = *&pos->x;
  v10 = v8.m128_i32[0] & v9.m128_i32[0];
  v11 = v9;
  v9.m128_f32[0] = pos->z - 150.0;
  actualBrightness = COERCE_UNSIGNED_INT(_mm_andnot_ps(v11, 0x3F800000u).m128_f32[0]) | v10;
  start.z = pos->z;
  v12 = pos->x + 0.0;
  LODWORD(end.z) = v9.m128_i32[0];
  end.y = y + 0.0;
  end.x = v12;
  LightForTrace = GetLightForTrace(&diffuse, 7, &start, &end);
  if ( LightForTrace )
  {
    x = diffuse.x;
    v15 = *&actualBrightness;
    if ( diffuse.x <= -0.000001 || diffuse.x >= 0.000001 )
    {
      v16 = diffuse.z;
      v17 = diffuse.y;
    }
    else
    {
      v17 = diffuse.y;
      if ( diffuse.y > -0.000001 )
      {
        v16 = diffuse.z;
        if ( diffuse.y < 0.000001 && diffuse.z > -0.000001 && diffuse.z < 0.000001 )
        {
          for ( i = -1; i != 2; ++i )
          {
            for ( j = -1; j != 2; ++j )
            {
              if ( (i | j) != 0 )
              {
                actualBrightnessa = v15;
                v21 = j * 16.0;
                v22 = i * 16.0;
                newStart.y = start.y + v21;
                newStart.x = start.x + v22;
                newEnd.x = v22 + end.x;
                newStart.z = start.z;
                newEnd.y = v21 + end.y;
                newEnd.z = end.z;
                v23 = GetLightForTrace(&diffuse, 7, &newStart, &newEnd);
                v15 = actualBrightnessa;
                if ( v23
                  && (diffuse.x <= -0.000001
                   || diffuse.x >= 0.000001
                   || diffuse.y <= -0.000001
                   || diffuse.y >= 0.000001
                   || diffuse.z <= -0.000001
                   || diffuse.z >= 0.000001) )
                {
                  break;
                }
              }
            }
          }
          v16 = diffuse.z;
          v17 = diffuse.y;
          x = diffuse.x;
        }
      }
      else
      {
        v16 = diffuse.z;
      }
    }
    color->x = ((x * 0.75) * 15.0) * (1.0 - v15);
    color->y = ((v17 * 0.75) * 15.0) * (1.0 - v15);
    color->z = ((0.75 * v16) * 15.0) * (1.0 - v15);
  }
  return LightForTrace;
}


