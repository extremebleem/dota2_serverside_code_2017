
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CResponseFileParser::ParseToken  (line 50, @0x0000000003108080, libserver.so)
// calls: IResponseEngineEmulator::Get
// callers: CResponseFileParser::ParseResponse_Then, CResponseFileParser::ParseOneResponse, CResponseFileParser::ParseRule_Response, CResponseFileParser::ParseResponse, CResponseFileParser::ParseOneCriterion, CResponseFileParser::ParseEnumeration, CResponseFileParser::ParseRule
bool __fastcall CResponseFileParser::ParseToken(CResponseFileParser *const this)
{
  bool result; // al
  CResponseFileParser::ScriptEntry *m_pMemory; // r12
  IResponseEngineEmulator *v4; // rax

  result = this->m_bUnget;
  if ( result )
  {
    this->m_bUnget = 0;
  }
  else if ( this->m_ScriptStack.m_Size > 0 )
  {
    m_pMemory = this->m_ScriptStack.m_Memory.m_pMemory;
    v4 = IResponseEngineEmulator::Get();
    m_pMemory->currenttoken = (**v4)(v4, this->m_ScriptStack.m_Memory.m_pMemory->currenttoken, this->token, 1204);
    ++this->m_ScriptStack.m_Memory.m_pMemory->tokencount;
    return this->m_ScriptStack.m_Memory.m_pMemory->currenttoken != 0;
  }
  return result;
}


// CResponseFileParser::TokenWaiting  (line 73, @0x000000000199ad28, libserver.so)  // inlines: GetCurrentScript, LeafCodeInfo_t
// calls: CResponseFileParser::GetCurrentScript, LoggingSystem_IsChannelEnabled, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...), Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess
// callers: CResponseFileParser::TokenWaiting, CResponseFileParser::ParseResponse_Then, CResponseFileParser::ParseOneResponse
// strings: "response_system.h", "TokenWaiting", "AI_ResponseSystem:  Unxpected TokenWaiting() with NULL buffer in %s"
bool __fastcall CResponseFileParser::TokenWaiting(CResponseFileParser *const this)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // rdi
  __int64 v4; // rsi
  bool v5; // dl
  CUtlLeanVectorFixedGrowableBase<CFieldPathReconstruct_t,3u,short int> *const v6; // rdi
  int v7; // esi
  bool result; // al
  LeafCodeInfo_t v9; // [rsp+0h] [rbp-A0h] BYREF
  char szScriptName[104]; // [rsp+20h] [rbp-80h] BYREF
  unsigned __int64 v11; // [rsp+88h] [rbp-18h]

  szScriptName[0] = 0;
  v11 = __readfsqword(0x28u);
  if ( this->m_ScriptStack.m_Size > 0 )
    CResponseFileParser::GetCurrentScript(this, szScriptName, 0x64u);
  if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
  {
    v9.m_szFile = "response_system.h";
    v9.m_szFunction = "TokenWaiting";
    v9.m_nLine = 88;
    LoggingSystem_Log(
      LOG_GENERAL,
      LoggingSeverity_t::LS_ERROR,
      &v9,
      "AI_ResponseSystem:  Unxpected TokenWaiting() with NULL buffer in %s",
      szScriptName);
  }
  if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v3, v4, v1, v2) != 0 )
    loc_0 = -559038737;
  Plat_ExitProcess(1);
  CUtlLeanVectorFixedGrowableBase<CFieldPathReconstruct_t,(unsigned short)3,short>::EnsureCapacity(v6, v7, v5);
  return result;
}


// CResponseFileParser::TokenWaiting  (line 73, @0x0000000003108100, libserver.so)  // inlines: V_isalnum
// calls: CResponseFileParser::TokenWaiting
// callers: CResponseFileParser::ParseRule_Response, CResponseFileParser::ParseRule_Criteria, CResponseFileParser::ParseOneCriterion
bool __fastcall CResponseFileParser::TokenWaiting(CResponseFileParser *const this)
{
  const char *currenttoken; // rsi
  char v2; // dl
  bool result; // al
  unsigned int v4; // ecx

  if ( this->m_ScriptStack.m_Size <= 0 )
    return 0;
  currenttoken = this->m_ScriptStack.m_Memory.m_pMemory->currenttoken;
  if ( currenttoken == 0 )
  {
    CResponseFileParser::TokenWaiting(this);
    JUMPOUT(0x31081AE);
  }
  v2 = *currenttoken;
  result = v2 != 10 && v2 != 0;
  if ( result )
  {
    while ( v2 != 47 )
    {
      v4 = v2 - 9;
      if ( v4 > 0x17 || ((1LL << v4) & 0x80001F) == 0 || ((v2 & 0xDF) - 65) <= 0x19u || (v2 - 48) <= 9u )
        return result;
      v2 = *++currenttoken;
      if ( v2 == 0 || v2 == 10 )
        return 0;
    }
    return currenttoken[1] != 47;
  }
  return result;
}


// CResponseSystem::PendingCriterionRule::~PendingCriterionRule  (line 257, @0x00000000031081b0, libserver.so)  // inlines: ~CUtlString
// calls: CUtlString::FreeMemoryBlock
// callers: CResponseFileParser::ParseRule_Criteria
void __fastcall CResponseSystem::PendingCriterionRule::~PendingCriterionRule(
        CResponseSystem::PendingCriterionRule *const this)
{
  if ( this->sScriptFile.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->sScriptFile);
  if ( this->szToken.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->szToken);
}


