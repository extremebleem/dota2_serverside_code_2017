
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// FixupModelName  (line 48, @0x0000000002050210, libserver.so)  // inlines: V_strcpy_safe<1024ul>, V_strlen, V_strncat<int>, V_strncpy<int>, V_strnicmp_fast<int>
// calls: _V_strncpy, _V_strnicmp_fast, strlen, _V_strncat, V_snprintf, V_stricmp_fast, __stack_chk_fail
// callers: CBreakParser::ParseKeyValue
// strings: "models/", "models\\", "models/%s"
char *__fastcall FixupModelName(char *pOut, __int64 sizeOut, const char *pModelNameIn)
{
  int v4; // eax
  char tmp[1032]; // [rsp+0h] [rbp-420h] BYREF
  unsigned __int64 v7; // [rsp+408h] [rbp-18h]

  v7 = __readfsqword(0x28u);
  _V_strncpy(tmp, sizeOut, 1024);
  if ( _V_strnicmp_fast(tmp, "models/", 7) != 0 && _V_strnicmp_fast(tmp, "models\\", 7) != 0 )
    V_snprintf(pOut, 512, "models/%s", tmp);
  else
    _V_strncpy(pOut, tmp, 512);
  if ( pOut == 0 || (v4 = strlen(pOut)) <= 4 || V_stricmp_fast(&pOut[v4 - 5], ".vmdl") != 0 )
    _V_strncat(pOut, ".vmdl", 512, 0xFFFFFFFFLL);
  return pOut;
}


// CBreakParser::ParseKeyValue  (line 87, @0x0000000002056790, libserver.so)  // inlines: ParseModelName, V_strncpy<long unsigned int>, atof, atoi
// calls: V_stricmp_fast, FixupModelName, strtol, sscanf, strtod, _V_strncpy
// strings: "motiondisabled", "fadetime", "burstRandomize", "placementbone", "placementattachment", "multiplayer_break"
void __fastcall CBreakParser::ParseKeyValue(
        CBreakParser *const this,
        void *pData,
        const char *pKey,
        const char *pValue)
{
  const char *v8; // rdx
  const char *v9; // rdx
  __m128d v10; // xmm0
  __m128d v11; // xmm0
  __m128d v12; // xmm0
  __m128d v13; // xmm0
  __m128d v14; // xmm0
  __m128d v15; // xmm0

  if ( V_stricmp_fast(pKey, "model") != 0 )
  {
    if ( V_stricmp_fast(pKey, "ragdoll") != 0 )
    {
      if ( V_stricmp_fast(pKey, "motiondisabled") != 0 )
      {
        if ( V_stricmp_fast(pKey, "offset") != 0 )
        {
          if ( V_stricmp_fast(pKey, "health") != 0 )
          {
            if ( V_stricmp_fast(pKey, "fadetime") != 0 )
            {
              if ( V_stricmp_fast(pKey, "fademindist") != 0 )
              {
                if ( V_stricmp_fast(pKey, "fademaxdist") != 0 )
                {
                  if ( V_stricmp_fast(pKey, "debris") != 0 )
                  {
                    if ( V_stricmp_fast(pKey, "burst") != 0 )
                    {
                      if ( V_stricmp_fast(pKey, "burstRandomize") != 0 )
                      {
                        if ( V_stricmp_fast(pKey, "placementbone") != 0 )
                        {
                          if ( V_stricmp_fast(pKey, "placementattachment") != 0 )
                          {
                            if ( V_stricmp_fast(pKey, "multiplayer_break") == 0 )
                            {
                              if ( V_stricmp_fast(pValue, "server") != 0 )
                              {
                                if ( V_stricmp_fast(pValue, "client") == 0 )
                                  *(pData + 272) = 2;
                              }
                              else
                              {
                                *(pData + 272) = 1;
                              }
                            }
                          }
                          else
                          {
                            _V_strncpy(pData + 544, pValue, 512);
                            *(pData + 1085) = 0;
                          }
                        }
                        else
                        {
                          _V_strncpy(pData + 544, pValue, 512);
                          *(pData + 1085) = 1;
                        }
                      }
                      else
                      {
                        v15.m128d_f64[0] = strtod(pValue, 0);
                        *(pData + 269) = _mm_movedup_pd(v15).m128d_f64[0];
                      }
                    }
                    else
                    {
                      v14.m128d_f64[0] = strtod(pValue, 0);
                      *(pData + 268) = _mm_movedup_pd(v14).m128d_f64[0];
                    }
                  }
                  else
                  {
                    *(pData + 270) = 2 * (strtol(pValue, 0, 10) <= 0) + 5;
                    this->m_wroteCollisionGroup = 1;
                  }
                }
                else
                {
                  v13.m128d_f64[0] = strtod(pValue, 0);
                  *(pData + 266) = _mm_movedup_pd(v13).m128d_f64[0];
                }
              }
              else
              {
                v12.m128d_f64[0] = strtod(pValue, 0);
                *(pData + 265) = _mm_movedup_pd(v12).m128d_f64[0];
              }
            }
            else
            {
              v10.m128d_f64[0] = strtod(pValue, 0);
              *(pData + 264) = _mm_movedup_pd(v10).m128d_f64[0];
              if ( !this->m_wroteCollisionGroup )
                *(pData + 270) = 5;
            }
          }
          else
          {
            v11.m128d_f64[0] = strtod(pValue, 0);
            *(pData + 267) = _mm_movedup_pd(v11).m128d_f64[0];
          }
        }
        else
        {
          sscanf(pValue, "%f %f %f", pData, pData + 4, pData + 8);
        }
      }
      else
      {
        *(pData + 1086) = 1;
      }
    }
    else
    {
      FixupModelName(pData + 32, pValue, v9);
      *(pData + 1084) = 1;
    }
  }
  else
  {
    FixupModelName(pData + 32, pValue, v8);
  }
}


// CBreakParser::SetDefaults  (line 171, @0x0000000002056220, libserver.so)  // inlines: Init, operator=
void __fastcall CBreakParser::SetDefaults(CBreakParser *const this, void *pData)
{
  vec_t y; // xmm1_4
  vec_t z; // xmm0_4
  vec_t v4; // xmm2_4
  vec_t v5; // xmm1_4
  vec_t w; // xmm0_4
  vec_t x; // xmm3_4
  int m_defaultCollisionGroup; // eax

  *(pData + 267) = 1065353216;
  *(pData + 264) = 1101004800;
  y = g_TransformIdentity.m_vPosition.y;
  z = g_TransformIdentity.m_vPosition.z;
  *pData = g_TransformIdentity.m_vPosition.x;
  *(pData + 1) = y;
  v4 = g_TransformIdentity.m_orientation.y;
  *(pData + 2) = z;
  v5 = g_TransformIdentity.m_orientation.z;
  w = g_TransformIdentity.m_orientation.w;
  *(pData + 5) = v4;
  x = g_TransformIdentity.m_orientation.x;
  *(pData + 6) = v5;
  *(pData + 7) = w;
  *(pData + 4) = x;
  *(pData + 265) = 0;
  *(pData + 266) = 0;
  *(pData + 268) = LODWORD(this->m_defaultBurstScale);
  *(pData + 269) = LODWORD(this->m_defaultBurstRandomize);
  m_defaultCollisionGroup = this->m_defaultCollisionGroup;
  *(pData + 1084) = 0;
  *(pData + 1086) = 0;
  *(pData + 544) = 0;
  *(pData + 1085) = 0;
  *(pData + 270) = m_defaultCollisionGroup;
  *(pData + 272) = 1;
  *(pData + 137) = 0;
  this->m_wroteCollisionGroup = 0;
}


