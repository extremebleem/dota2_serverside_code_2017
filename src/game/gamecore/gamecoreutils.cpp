
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CFloatToTickSerializerHelper::Serialize  (line 20, @0x0000000001f00fa0, libserver.so)  // inlines: Set<long long unsigned int>
// callers: CSimulationTimeSerializer::Serialize, CAnimTimeSerializer::Serialize, CFuncRotatingSimulationTimeSerializer::Serialize
// globals: gpGlobals
NetworkFieldResult_t __fastcall CFloatToTickSerializerHelper::Serialize(
        float32 *pflField,
        CEntityInstance *pEntity,
        NetworkableData_t_0 *pOut)
{
  float v3; // xmm0_4

  v3 = (*pflField / gpGlobals->interval_per_tick) + 0.5;
  pOut->m_nType = NetworkableDataType_t::NET_DATA_TYPE_UINT64;
  pOut->m_nNumComponents = 1;
  pOut->m_iVal64 = v3;
  return NetworkFieldResult_t::NET_FIELD_OK;
}


// CFloatToTickSerializerHelper::Unserialize  (line 31, @0x0000000001f00fe0, libserver.so)
// callers: CSimulationTimeSerializer::Unserialize, CFuncRotatingSimulationTimeSerializer::Unserialize, CAnimTimeSerializer::Unserialize, CValidatingNetworkFieldSerializer<CFuncRotatingSimulationTimeSerializer>::ValidatingUnserialize, CValidatingNetworkFieldSerializer<CSimulationTimeSerializer>::ValidatingUnserialize, CValidatingNetworkFieldSerializer<CAnimTimeSerializer>::ValidatingUnserialize
// globals: gpGlobals
NetworkFieldResult_t __fastcall CFloatToTickSerializerHelper::Unserialize(
        float32 *pflField,
        CEntityInstance *pEntity,
        const NetworkableData_t_0 *pIn)
{
  float m_iVal64; // xmm0_4
  unsigned __int64 v5; // rdx

  if ( pIn->m_iVal64 < 0 )
  {
    v5 = pIn->m_iVal64 & 1 | (pIn->m_iVal64 >> 1);
    m_iVal64 = v5 + v5;
  }
  else
  {
    m_iVal64 = pIn->m_iVal64;
  }
  *pflField = m_iVal64 * gpGlobals->interval_per_tick;
  return NetworkFieldResult_t::NET_FIELD_OK;
}


// ClampCycle  (line 41, @0x0000000001f01030, libserver.so)
// callers: CSequenceTransitioner2::AddCurrentSequenceToTransition, CSequenceTransitioner2::AnimationFrameAdvance
float __fastcall ClampCycle(float a1, float flCycle, bool bIsLooping)
{
  float result; // xmm0_4

  if ( bIsLooping )
  {
    result = a1 - a1;
    if ( result < 0.0 )
      return result + 1.0;
  }
  else if ( a1 <= 0.99900001 )
  {
    return fmaxf(0.0, a1);
  }
  else
  {
    return 0.99900001;
  }
  return result;
}


