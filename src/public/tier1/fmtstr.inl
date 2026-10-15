
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CFmtStrN<256, false>::CFmtStrN  (line 85, @0x0000000001a74b30, libserver.so)  // inlines: InitQuietTruncation
// calls: V_vsnprintfRet, Warning
// callers: ProtoBufHelper::GenerateMessageChangeString, CNetMessagePB<283, CClientMsg_DevPaletteVisibilityChangedEvent, (SignonGroup_t)14u, (NetChannelBufType_t)1, true>::CProtobufBinding::ToString, CNetMessagePB<282, CClientMsg_ClientUIEvent, (SignonGroup_t)14u, (NetChannelBufType_t)1, true>::CProtobufBinding::ToString, CNetMessagePB<363, CDOTAClientMsg_FlipCoin, (SignonGroup_t)14u, (NetChannelBufType_t)1, true>::CProtobufBinding::ToString, CNetMessagePB<362, CDOTAClientMsg_RollDice, (SignonGroup_t)14u, (NetChannelBufType_t)1, true>::CProtobufBinding::ToString, CNetMessagePB<361, CDOTAClientMsg_SetDesiredWardPlacement, (SignonGroup_t)14u, (NetChannelBufType_t)1, true>::CProtobufBinding::ToString, CNetMessagePB<360, CDOTAClientMsg_SetEnemyStartingPosition, (SignonGroup_t)14u, (NetChannelBufType_t)1, true>::CProtobufBinding::ToString, CNetMessagePB<359, CDOTAClientMsg_KillcamDamageTaken, (SignonGroup_t)14u, (NetChannelBufType_t)1, true>::CProtobufBinding::ToString, CNetMessagePB<358, CDOTAClientMsg_SpecialAbility, (SignonGroup_t)14u, (NetChannelBufType_t)1, true>::CProtobufBinding::ToString, CNetMessagePB<357, CDOTAClientMsg_ToggleAutoattack, (SignonGroup_t)14u, (NetChannelBufType_t)1, true>::CProtobufBinding::ToString, CNetMessagePB<356, CDOTAClientMsg_QuestStatus, (SignonGroup_t)14u, (NetChannelBufType_t)1, true>::CProtobufBinding::ToString, CNetMessagePB<354, CDOTAClientMsg_MatchMetadata, (SignonGroup_t)14u, (NetChannelBufType_t)1, true>::CProtobufBinding::ToString (459 total)
// strings: "FmtStrVSNPrintf truncated to %d without QUIET_TRUNCATION specified! String: \"%s\"\n"
// globals: CFmtStrN<256,false>::CFmtStrN(char const*,...)::scAsserted
void CFmtStrN<256,false>::CFmtStrN(CFmtStrN<256,false> *const this, const char *pszFormat, ...)
{
  int v3; // eax
  bool v4; // zf
  int v5; // r13d
  bool bTruncated; // [rsp+7h] [rbp-E9h] BYREF
  va_list va; // [rsp+8h] [rbp-E8h] BYREF

  va_start(va, pszFormat);
  this->m_bQuietTruncation = 0;
  this->_vptr_CFmtStrN = &off_3F6E1A0;
  bTruncated = 0;
  v3 = V_vsnprintfRet(this->m_szBuf, 255, pszFormat, va, &bTruncated);
  v4 = !bTruncated;
  this->m_szBuf[255] = 0;
  v5 = v3;
  if ( !v4 && !this->m_bQuietTruncation && CFmtStrN<256,false>::CFmtStrN(char const*,...)::scAsserted <= 4 )
  {
    Warning("FmtStrVSNPrintf truncated to %d without QUIET_TRUNCATION specified! String: \"%s\"\n", 256, this->m_szBuf);
    ++CFmtStrN<256,false>::CFmtStrN(char const*,...)::scAsserted;
  }
  this->m_nLength = v5;
}


// CFmtStrN<512, true>::CFmtStrN  (line 85, @0x0000000001ec9690, libserver.so)  // inlines: InitQuietTruncation
// calls: V_vsnprintfRet, Warning
// callers: CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::SpewInterpolatedVarToString
// strings: "FmtStrVSNPrintf truncated to %d without QUIET_TRUNCATION specified! String: \"%s\"\n"
// globals: CFmtStrN<512,true>::CFmtStrN(char const*,...)::scAsserted
void CFmtStrN<512,true>::CFmtStrN(CFmtStrN<512,true> *const this, const char *pszFormat, ...)
{
  int v3; // eax
  bool v4; // zf
  int v5; // r13d
  bool bTruncated; // [rsp+7h] [rbp-E9h] BYREF
  va_list va; // [rsp+8h] [rbp-E8h] BYREF

  va_start(va, pszFormat);
  this->m_bQuietTruncation = 1;
  this->_vptr_CFmtStrN = &off_3FB3E00;
  bTruncated = 0;
  v3 = V_vsnprintfRet(this->m_szBuf, 511, pszFormat, va, &bTruncated);
  v4 = !bTruncated;
  this->m_szBuf[511] = 0;
  v5 = v3;
  if ( !v4 && !this->m_bQuietTruncation && CFmtStrN<512,true>::CFmtStrN(char const*,...)::scAsserted <= 4 )
  {
    Warning("FmtStrVSNPrintf truncated to %d without QUIET_TRUNCATION specified! String: \"%s\"\n", 512, this->m_szBuf);
    ++CFmtStrN<512,true>::CFmtStrN(char const*,...)::scAsserted;
  }
  this->m_nLength = v5;
}


// CFmtStrN<400, true>::CFmtStrN  (line 85, @0x000000000230fcf0, libserver.so)  // inlines: InitQuietTruncation
// calls: V_vsnprintfRet, Warning
// callers: ParticleAttachementMissingWarnOnce
// strings: "FmtStrVSNPrintf truncated to %d without QUIET_TRUNCATION specified! String: \"%s\"\n"
// globals: CFmtStrN<400,true>::CFmtStrN(char const*,...)::scAsserted
void CFmtStrN<400,true>::CFmtStrN(CFmtStrN<400,true> *const this, const char *pszFormat, ...)
{
  int v3; // eax
  bool v4; // zf
  int v5; // r13d
  bool bTruncated; // [rsp+7h] [rbp-E9h] BYREF
  va_list va; // [rsp+8h] [rbp-E8h] BYREF

  va_start(va, pszFormat);
  this->m_bQuietTruncation = 1;
  this->_vptr_CFmtStrN = &off_4074080;
  bTruncated = 0;
  v3 = V_vsnprintfRet(this->m_szBuf, 399, pszFormat, va, &bTruncated);
  v4 = !bTruncated;
  this->m_szBuf[399] = 0;
  v5 = v3;
  if ( !v4 && !this->m_bQuietTruncation && CFmtStrN<400,true>::CFmtStrN(char const*,...)::scAsserted <= 4 )
  {
    Warning("FmtStrVSNPrintf truncated to %d without QUIET_TRUNCATION specified! String: \"%s\"\n", 400, this->m_szBuf);
    ++CFmtStrN<400,true>::CFmtStrN(char const*,...)::scAsserted;
  }
  this->m_nLength = v5;
}


// CFmtStrN<64, false>::CFmtStrN  (line 85, @0x00000000023afe70, libserver.so)  // inlines: InitQuietTruncation
// calls: V_vsnprintfRet, Warning
// callers: SceneNameAutocomplete
// strings: "FmtStrVSNPrintf truncated to %d without QUIET_TRUNCATION specified! String: \"%s\"\n"
// globals: CFmtStrN<64,false>::CFmtStrN(char const*,...)::scAsserted
void CFmtStrN<64,false>::CFmtStrN(CFmtStrN<64,false> *const this, const char *pszFormat, ...)
{
  int v3; // eax
  bool v4; // zf
  int v5; // r13d
  bool bTruncated; // [rsp+7h] [rbp-E9h] BYREF
  va_list va; // [rsp+8h] [rbp-E8h] BYREF

  va_start(va, pszFormat);
  this->m_bQuietTruncation = 0;
  this->_vptr_CFmtStrN = &off_40A7CB0;
  bTruncated = 0;
  v3 = V_vsnprintfRet(this->m_szBuf, 63, pszFormat, va, &bTruncated);
  v4 = !bTruncated;
  this->m_szBuf[63] = 0;
  v5 = v3;
  if ( !v4 && !this->m_bQuietTruncation && CFmtStrN<64,false>::CFmtStrN(char const*,...)::scAsserted <= 4 )
  {
    Warning("FmtStrVSNPrintf truncated to %d without QUIET_TRUNCATION specified! String: \"%s\"\n", 64, this->m_szBuf);
    ++CFmtStrN<64,false>::CFmtStrN(char const*,...)::scAsserted;
  }
  this->m_nLength = v5;
}


// CFmtStrN<1024, false>::CFmtStrN  (line 85, @0x0000000003108700, libserver.so)  // inlines: InitQuietTruncation
// calls: V_vsnprintfRet, Warning
// callers: CResponseFileParser::ParseRule_ApplyContext
// strings: "FmtStrVSNPrintf truncated to %d without QUIET_TRUNCATION specified! String: \"%s\"\n"
// globals: CFmtStrN<1024,false>::CFmtStrN(char const*,...)::scAsserted
void CFmtStrN<1024,false>::CFmtStrN(CFmtStrN<1024,false> *const this, const char *pszFormat, ...)
{
  int v3; // eax
  bool v4; // zf
  int v5; // r13d
  bool bTruncated; // [rsp+7h] [rbp-E9h] BYREF
  va_list va; // [rsp+8h] [rbp-E8h] BYREF

  va_start(va, pszFormat);
  this->m_bQuietTruncation = 0;
  this->_vptr_CFmtStrN = &off_3FCABA0;
  bTruncated = 0;
  v3 = V_vsnprintfRet(this->m_szBuf, 1023, pszFormat, va, &bTruncated);
  v4 = !bTruncated;
  this->m_szBuf[1023] = 0;
  v5 = v3;
  if ( !v4 && !this->m_bQuietTruncation && CFmtStrN<1024,false>::CFmtStrN(char const*,...)::scAsserted <= 4 )
  {
    Warning("FmtStrVSNPrintf truncated to %d without QUIET_TRUNCATION specified! String: \"%s\"\n", 1024, this->m_szBuf);
    ++CFmtStrN<1024,false>::CFmtStrN(char const*,...)::scAsserted;
  }
  this->m_nLength = v5;
}


// CFmtStrN<32, false>::CFmtStrN  (line 85, @0x00000000031f1a30, libserver.so)  // inlines: InitQuietTruncation
// calls: V_vsnprintfRet, Warning
// callers: BuildSelectedSet::WriteConnections, CNavMesh::CommandNavSaveSelected
// strings: "FmtStrVSNPrintf truncated to %d without QUIET_TRUNCATION specified! String: \"%s\"\n"
// globals: CFmtStrN<32,false>::CFmtStrN(char const*,...)::scAsserted
void CFmtStrN<32,false>::CFmtStrN(CFmtStrN<32,false> *const this, const char *pszFormat, ...)
{
  int v3; // eax
  bool v4; // zf
  int v5; // r13d
  bool bTruncated; // [rsp+7h] [rbp-E9h] BYREF
  va_list va; // [rsp+8h] [rbp-E8h] BYREF

  va_start(va, pszFormat);
  this->m_bQuietTruncation = 0;
  this->_vptr_CFmtStrN = &off_47CE250;
  bTruncated = 0;
  v3 = V_vsnprintfRet(this->m_szBuf, 31, pszFormat, va, &bTruncated);
  v4 = !bTruncated;
  this->m_szBuf[31] = 0;
  v5 = v3;
  if ( !v4 && !this->m_bQuietTruncation && CFmtStrN<32,false>::CFmtStrN(char const*,...)::scAsserted <= 4 )
  {
    Warning("FmtStrVSNPrintf truncated to %d without QUIET_TRUNCATION specified! String: \"%s\"\n", 32, this->m_szBuf);
    ++CFmtStrN<32,false>::CFmtStrN(char const*,...)::scAsserted;
  }
  this->m_nLength = v5;
}


// CFmtStrN<256, false>::CFmtStrN  (line 92, @0x000000000217e140, libserver.so)  // inlines: InitQuietTruncation
// calls: V_vsnprintfRet, Warning
// callers: CAI_Expresser::SpeechMsg
// strings: "FmtStrVSNPrintf truncated to %d without QUIET_TRUNCATION specified! String: \"%s\"\n"
// globals: CFmtStrN<256,false>::CFmtStrN(char const**,...)::scAsserted
void CFmtStrN<256,false>::CFmtStrN(CFmtStrN<256,false> *const this, const char **ppszFormat, ...)
{
  const char *v3; // rdx
  int v4; // eax
  bool v5; // zf
  int v6; // r13d
  bool bTruncated; // [rsp+7h] [rbp-E9h] BYREF
  va_list va; // [rsp+8h] [rbp-E8h] BYREF

  va_start(va, ppszFormat);
  this->m_bQuietTruncation = 0;
  this->_vptr_CFmtStrN = &off_3F6E1A0;
  v3 = *ppszFormat;
  bTruncated = 0;
  v4 = V_vsnprintfRet(this->m_szBuf, 255, v3, va, &bTruncated);
  v5 = !bTruncated;
  this->m_szBuf[255] = 0;
  v6 = v4;
  if ( !v5 && !this->m_bQuietTruncation && CFmtStrN<256,false>::CFmtStrN(char const**,...)::scAsserted <= 4 )
  {
    Warning("FmtStrVSNPrintf truncated to %d without QUIET_TRUNCATION specified! String: \"%s\"\n", 256, this->m_szBuf);
    ++CFmtStrN<256,false>::CFmtStrN(char const**,...)::scAsserted;
  }
  this->m_nLength = v6;
}


// CFmtStrN<1024, false>::sprintf  (line 99, @0x0000000001f89e50, libserver.so)
// calls: V_vsnprintfRet, Warning
// callers: CScrollingScreenOverlay::Draw, GCSDK::CGCReportPrinter::FormatValue
// strings: "FmtStrVSNPrintf truncated to %d without QUIET_TRUNCATION specified! String: \"%s\"\n"
// globals: CFmtStrN<1024,false>::sprintf(char const*,...)::scAsserted
const char *CFmtStrN<1024,false>::sprintf(CFmtStrN<1024,false> *const this, const char *pszFormat, ...)
{
  int v4; // eax
  bool v5; // zf
  int v6; // r13d
  bool bTruncated; // [rsp+7h] [rbp-E9h] BYREF
  va_list va; // [rsp+8h] [rbp-E8h] BYREF

  va_start(va, pszFormat);
  (*this->_vptr_CFmtStrN)(this);
  bTruncated = 0;
  v4 = V_vsnprintfRet(this->m_szBuf, 1023, pszFormat, va, &bTruncated);
  v5 = !bTruncated;
  this->m_szBuf[1023] = 0;
  v6 = v4;
  if ( !v5 && !this->m_bQuietTruncation && CFmtStrN<1024,false>::sprintf(char const*,...)::scAsserted <= 4 )
  {
    Warning("FmtStrVSNPrintf truncated to %d without QUIET_TRUNCATION specified! String: \"%s\"\n", 1024, this->m_szBuf);
    ++CFmtStrN<1024,false>::sprintf(char const*,...)::scAsserted;
  }
  this->m_nLength = v6;
  return this->m_szBuf;
}


// CFmtStrN<256, false>::sprintf  (line 99, @0x000000000204eae0, libserver.so)
// calls: V_vsnprintfRet, Warning
// callers: ParseContextArray, CBaseCombatWeapon::DisplayAltFireHudHint, surfaceprop, Behavior<CDOTA_BaseNPC>::Update, DrawAreaForDrawConnectedAreas, CFuncNavBlocker::DrawDebugTextOverlays, Behavior<CSimpleBot>::Update, INextBot::Update, CEntityScriptFramework::CompileScript
// strings: "FmtStrVSNPrintf truncated to %d without QUIET_TRUNCATION specified! String: \"%s\"\n"
// globals: CFmtStrN<256,false>::sprintf(char const*,...)::scAsserted
const char *CFmtStrN<256,false>::sprintf(CFmtStrN<256,false> *const this, const char *pszFormat, ...)
{
  int v4; // eax
  bool v5; // zf
  int v6; // r13d
  bool bTruncated; // [rsp+7h] [rbp-E9h] BYREF
  va_list va; // [rsp+8h] [rbp-E8h] BYREF

  va_start(va, pszFormat);
  (*this->_vptr_CFmtStrN)(this);
  bTruncated = 0;
  v4 = V_vsnprintfRet(this->m_szBuf, 255, pszFormat, va, &bTruncated);
  v5 = !bTruncated;
  this->m_szBuf[255] = 0;
  v6 = v4;
  if ( !v5 && !this->m_bQuietTruncation && CFmtStrN<256,false>::sprintf(char const*,...)::scAsserted <= 4 )
  {
    Warning("FmtStrVSNPrintf truncated to %d without QUIET_TRUNCATION specified! String: \"%s\"\n", 256, this->m_szBuf);
    ++CFmtStrN<256,false>::sprintf(char const*,...)::scAsserted;
  }
  this->m_nLength = v6;
  return this->m_szBuf;
}


// CFmtStrN<80, false>::sprintf  (line 99, @0x0000000002378c20, libserver.so)
// calls: V_vsnprintfRet, Warning
// callers: CPropDoorRotatingBreakable::Event_Killed, CPropDoorRotatingBreakable::OnTakeDamage, CPropDoorRotatingBreakable::PrecacheBreakables, CPropDoorRotatingBreakable::Spawn
// strings: "FmtStrVSNPrintf truncated to %d without QUIET_TRUNCATION specified! String: \"%s\"\n"
// globals: CFmtStrN<80,false>::sprintf(char const*,...)::scAsserted
const char *CFmtStrN<80,false>::sprintf(CFmtStrN<80,false> *const this, const char *pszFormat, ...)
{
  int v4; // eax
  bool v5; // zf
  int v6; // r13d
  bool bTruncated; // [rsp+7h] [rbp-E9h] BYREF
  va_list va; // [rsp+8h] [rbp-E8h] BYREF

  va_start(va, pszFormat);
  (*this->_vptr_CFmtStrN)(this);
  bTruncated = 0;
  v4 = V_vsnprintfRet(this->m_szBuf, 79, pszFormat, va, &bTruncated);
  v5 = !bTruncated;
  this->m_szBuf[79] = 0;
  v6 = v4;
  if ( !v5 && !this->m_bQuietTruncation && CFmtStrN<80,false>::sprintf(char const*,...)::scAsserted <= 4 )
  {
    Warning("FmtStrVSNPrintf truncated to %d without QUIET_TRUNCATION specified! String: \"%s\"\n", 80, this->m_szBuf);
    ++CFmtStrN<80,false>::sprintf(char const*,...)::scAsserted;
  }
  this->m_nLength = v6;
  return this->m_szBuf;
}


// CFmtStrN<256, false>::AppendFormat  (line 178, @0x0000000003169890, libserver.so)
// calls: V_vsnprintfRet, Warning
// callers: CMorphSet::ConvertMorphRuleToExpressionString
// strings: "FmtStrVSNPrintf truncated to %d without QUIET_TRUNCATION specified! String: \"%s\"\n"
// globals: CFmtStrN<256,false>::AppendFormat(char const*,...)::scAsserted
void CFmtStrN<256,false>::AppendFormat(CFmtStrN<256,false> *const this, const char *pchFormat, ...)
{
  __int64 m_nLength; // rax
  char *v5; // r12
  __int64 v6; // rsi
  const char *v7; // r14
  int v8; // eax
  bool v9; // zf
  int v10; // r15d
  bool bTruncated; // [rsp+7h] [rbp-F9h] BYREF
  va_list va; // [rsp+8h] [rbp-F8h] BYREF

  m_nLength = this->m_nLength;
  if ( m_nLength <= 254 || !this->m_bQuietTruncation )
  {
    bTruncated = 0;
    v5 = this + m_nLength;
    v6 = (255 - this->m_nLength);
    va_start(va, pchFormat);
    v7 = &this->m_szBuf[m_nLength];
    v8 = V_vsnprintfRet(v7, v6, pchFormat, va, &bTruncated);
    v9 = !bTruncated;
    v10 = v8;
    v5[255 - this->m_nLength + 9] = 0;
    if ( !v9 && !this->m_bQuietTruncation && CFmtStrN<256,false>::AppendFormat(char const*,...)::scAsserted <= 4 )
    {
      Warning(
        "FmtStrVSNPrintf truncated to %d without QUIET_TRUNCATION specified! String: \"%s\"\n",
        256 - this->m_nLength,
        v7);
      ++CFmtStrN<256,false>::AppendFormat(char const*,...)::scAsserted;
    }
    this->m_nLength += v10;
  }
}


// CFmtStrN<1024, false>::AppendFormat  (line 178, @0x0000000003245ec0, libserver.so)
// calls: V_vsnprintfRet, Warning
// callers: GCSDK::CGCReportPrinter::BuildCategoryHeader, GCSDK::CGCReportPrinter::FormatValue, GCSDK::CGCReportPrinter::PrintReport
// strings: "FmtStrVSNPrintf truncated to %d without QUIET_TRUNCATION specified! String: \"%s\"\n"
// globals: CFmtStrN<1024,false>::AppendFormat(char const*,...)::scAsserted
void CFmtStrN<1024,false>::AppendFormat(CFmtStrN<1024,false> *const this, const char *pchFormat, ...)
{
  __int64 m_nLength; // rax
  char *v5; // r12
  __int64 v6; // rsi
  const char *v7; // r14
  int v8; // eax
  bool v9; // zf
  int v10; // r15d
  bool bTruncated; // [rsp+7h] [rbp-F9h] BYREF
  va_list va; // [rsp+8h] [rbp-F8h] BYREF

  m_nLength = this->m_nLength;
  if ( m_nLength <= 1022 || !this->m_bQuietTruncation )
  {
    bTruncated = 0;
    v5 = this + m_nLength;
    v6 = (1023 - this->m_nLength);
    va_start(va, pchFormat);
    v7 = &this->m_szBuf[m_nLength];
    v8 = V_vsnprintfRet(v7, v6, pchFormat, va, &bTruncated);
    v9 = !bTruncated;
    v10 = v8;
    v5[1023 - this->m_nLength + 9] = 0;
    if ( !v9 && !this->m_bQuietTruncation && CFmtStrN<1024,false>::AppendFormat(char const*,...)::scAsserted <= 4 )
    {
      Warning(
        "FmtStrVSNPrintf truncated to %d without QUIET_TRUNCATION specified! String: \"%s\"\n",
        1024 - this->m_nLength,
        v7);
      ++CFmtStrN<1024,false>::AppendFormat(char const*,...)::scAsserted;
    }
    this->m_nLength += v10;
  }
}


// CFmtStrN<256, false>::InitQuietTruncation  (line 230, @0x0000000001a748e0, libserver.so)
void __fastcall CFmtStrN<256,false>::InitQuietTruncation(CFmtStrN<256,false> *const this)
{
  this->m_bQuietTruncation = 0;
}


// CFmtStrN<512, true>::InitQuietTruncation  (line 230, @0x0000000001ec1a20, libserver.so)
void __fastcall CFmtStrN<512,true>::InitQuietTruncation(CFmtStrN<512,true> *const this)
{
  this->m_bQuietTruncation = 1;
}


// CFmtStrN<1024, false>::InitQuietTruncation  (line 230, @0x0000000001f724e0, libserver.so)
void __fastcall CFmtStrN<1024,false>::InitQuietTruncation(CFmtStrN<1024,false> *const this)
{
  this->m_bQuietTruncation = 0;
}


// CFmtStrN<400, true>::InitQuietTruncation  (line 230, @0x00000000023047b0, libserver.so)
void __fastcall CFmtStrN<400,true>::InitQuietTruncation(CFmtStrN<400,true> *const this)
{
  this->m_bQuietTruncation = 1;
}


// CFmtStrN<80, false>::InitQuietTruncation  (line 230, @0x0000000002371330, libserver.so)
void __fastcall CFmtStrN<80,false>::InitQuietTruncation(CFmtStrN<80,false> *const this)
{
  this->m_bQuietTruncation = 0;
}


// CFmtStrN<64, false>::InitQuietTruncation  (line 230, @0x00000000023a9680, libserver.so)
void __fastcall CFmtStrN<64,false>::InitQuietTruncation(CFmtStrN<64,false> *const this)
{
  this->m_bQuietTruncation = 0;
}


// CFmtStrN<32, false>::InitQuietTruncation  (line 230, @0x00000000031f1a20, libserver.so)
void __fastcall CFmtStrN<32,false>::InitQuietTruncation(CFmtStrN<32,false> *const this)
{
  this->m_bQuietTruncation = 0;
}


