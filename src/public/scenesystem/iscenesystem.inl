
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// vis_info_t::IsInPVS  (line 253, @0x00000000019998ee, libserver.so)
// calls: Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess
// callers: vis_info_t::IsInPVS, CNetworkTransmitComponent::IsInPVS
void __fastcall vis_info_t::IsInPVS(const vis_info_t *const this, __int64 nCluster, __int64 a3, __int64 a4)
{
  bool v4; // dl
  CVariantBase<CVariantDefaultAllocator> *const v5; // rdi
  const Vector *const v6; // rsi

  if ( Plat_ShouldCollectMiniDumpsForFatalErrors(this, nCluster, a3, a4) != 0 )
    loc_0 = -559038737;
  Plat_ExitProcess(1);
  CVariantBase<CVariantDefaultAllocator>::CopyData<Vector>(v5, v6, v4);
}


// vis_info_t::IsInPVS  (line 253, @0x0000000001ec4630, libserver.so)  // inlines: BitVec_IsBitSet, LeafCodeInfo_t
// calls: LoggingSystem_IsChannelEnabled, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...), vis_info_t::IsInPVS
// callers: CNetworkTransmitComponent::IsInPVSOfConnectedSpawnGroup_R
// strings: "../../public/scenesystem/iscenesystem.h", "IsInPVS", "CheckOriginInPVS:  cluster would read past end of pvs data (cluster %d, offset %u:%u)\n"
bool __fastcall vis_info_t::IsInPVS(const vis_info_t *const this, int nCluster)
{
  uint32 m_uVisBitsBufSize; // eax
  unsigned int v4; // r13d
  char IsChannelEnabled; // al
  __int64 v7; // rdx
  const vis_info_t *v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // rcx
  uint32 v11; // eax
  LeafCodeInfo_t v13; // [rsp+10h] [rbp-48h] BYREF

  if ( nCluster < 0 )
    return 0;
  m_uVisBitsBufSize = this->m_uVisBitsBufSize;
  if ( m_uVisBitsBufSize == 0 || this->m_pVisBits == 0 )
    return 0;
  v4 = nCluster >> 3;
  if ( m_uVisBitsBufSize < nCluster >> 3 )
  {
    IsChannelEnabled = LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4);
    v10 = nCluster;
    if ( IsChannelEnabled != 0 )
    {
      v11 = this->m_uVisBitsBufSize;
      v13.m_szFile = "../../public/scenesystem/iscenesystem.h";
      v13.m_szFunction = "IsInPVS";
      v13.m_nLine = 265;
      LoggingSystem_Log(
        LOG_GENERAL,
        LoggingSeverity_t::LS_ERROR,
        &v13,
        "CheckOriginInPVS:  cluster would read past end of pvs data (cluster %d, offset %u:%u)\n",
        nCluster,
        v4,
        v11);
    }
    vis_info_t::IsInPVS(v8, v9, v7, v10);
    JUMPOUT(0x1EC46FB);
  }
  return ((1 << nCluster) & this->m_pVisBits[nCluster >> 5]) != 0;
}


