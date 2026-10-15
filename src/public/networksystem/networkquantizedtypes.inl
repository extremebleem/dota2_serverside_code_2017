
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CNetworkedQuantizedFloat::QuantizeInPlace  (line 54, @0x0000000001999a00, libserver.so)  // inlines: LeafCodeInfo_t
// calls: LoggingSystem_IsChannelEnabled, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...), Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess
// callers: CAnimationLayer::SetPlaybackRate, CBaseAnimatingController::SetPlaybackRate
// strings: "../../public/networksystem/networkquantizedtypes.h", "QuantizeInPlace", "CNetworkedQuantizedFloat:  called before encoder initialized, use DECLARE_NETWORK_QUANTIZ
IResponseSystem *__fastcall CNetworkedQuantizedFloat::QuantizeInPlace(CNetworkedQuantizedFloat *const this)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // rdi
  __int64 v4; // rsi
  __int64 v5; // r8
  __int64 v6; // r9
  CDefaultResponseSystem *const v7; // rdi
  const char *v8; // rsi
  LeafCodeInfo_t v10; // [rsp+0h] [rbp-30h] BYREF

  if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
  {
    v10.m_szFile = "../../public/networksystem/networkquantizedtypes.h";
    v10.m_szFunction = "QuantizeInPlace";
    v10.m_nLine = 56;
    LoggingSystem_Log(
      LOG_GENERAL,
      LoggingSeverity_t::LS_ERROR,
      &v10,
      "CNetworkedQuantizedFloat:  called before encoder initialized, use DECLARE_NETWORK_QUANTIZED_FLOAT_NETWORKVAR or DE"
      "CLARE_NETWORK_QUANTIZED_FLOAT to make sure the encoder is initialized;\n",
      v5,
      v6);
  }
  if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v3, v4, v1, v2) != 0 )
    loc_0 = -559038737;
  Plat_ExitProcess(1);
  return CDefaultResponseSystem::FindOrCreateCustomResponseSystem(v7, v8);
}


