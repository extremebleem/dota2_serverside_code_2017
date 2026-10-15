
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// _GLOBAL__sub_I_response_system_parser.cpp  (line 0, @0x0000000001a6a730, libserver.so)  // inlines: Color, SetColor, __static_initialization_and_destruction_0
// globals: UNSPECIFIED_LOGGING_COLOR
void __cdecl GLOBAL__sub_I_response_system_parser_cpp()
{
  UNSPECIFIED_LOGGING_COLOR._color[0] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[1] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[2] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[3] = 0;
}


// TextToSoundLevel  (line 26, @0x0000000003101e90, libserver.so)  // inlines: GetTokenI, V_strnicmp_fast<int>
// calls: V_stricmp_fast, _V_strnicmp_fast, V_atoi, V_stristr_fast(char const*,char const*), V_atof, DevMsg(char const*,...), Warning
// callers: CResponseFileParser::ParseResponseGroup_Soundlevel, CResponseFileParser::ParseResponse_Soundlevel
// strings: "SNDLVL_", "CSoundEmitterSystem:  Unknown sound level %s\n", "SoundLevel string appears to be a Volume level %f\n"
// globals: g_pSoundLevels
soundlevel_t __fastcall TextToSoundLevel(const char *key)
{
  const char *name; // rsi
  tokenset_t<soundlevel_t> *i; // rbx
  soundlevel_t result; // eax
  float v5; // xmm0_4

  if ( key == 0 )
    return soundlevel_t::SNDLVL_NORM;
  name = g_pSoundLevels[0].name;
  for ( i = g_pSoundLevels; i->name != 0; name = i->name )
  {
    if ( V_stricmp_fast(key, name) == 0 )
      break;
    ++i;
  }
  result = i->token;
  if ( result < soundlevel_t::SNDLVL_NONE
    && (_V_strnicmp_fast(key, "SNDLVL_", 7) != 0 || ((result = V_atoi(key + 7)) - 1) > 0xB3) )
  {
    if ( V_stristr_fast(key, "db") != 0 )
    {
      return V_atoi(key);
    }
    else
    {
      v5 = V_atof(key);
      if ( v5 > 1.0 || v5 <= 0.0 )
      {
        if ( v5 < 20.0 )
        {
          DevMsg("CSoundEmitterSystem:  Unknown sound level %s\n", key);
          return soundlevel_t::SNDLVL_NORM;
        }
        else
        {
          return v5;
        }
      }
      else
      {
        Warning("SoundLevel string appears to be a Volume level %f\n", v5);
        return soundlevel_t::SNDLVL_NORM;
      }
    }
  }
  return result;
}


// CResponseFileParser::CResponseFileParser  (line 77, @0x0000000003106c00, libserver.so)  // inlines: CUtlMap, CUtlMemory, CUtlRBTree, CUtlVector, CUtlVectorBase, Purge, RemoveAll, ResetDbgInfo, memset, ~CUtlMap, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CStringPool::CStringPool, memset, CResponseFileParser::BuildDispatchTables, _Unwind_Resume, CUtlRBTree<CUtlMap<unsigned int, void (CResponseFileParser::*)(char const*, ResponseGroup&, ResponseParams&)>::Node_t, short unsigned int, CUtlMap<unsigned int, void (CResponseFileParser::*)(char const*, ResponseGroup&, ResponseParams&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, void (CResponseFileParser::*)(char const*, ResponseGroup&, ResponseParams&)>::Node_t, short unsigned int>, short unsigned int> >::~CUtlRBTree, CUtlRBTree<CUtlMap<unsigned int, void (CResponseFileParser::*)(ParserResponse&, ResponseGroup&, ResponseParams*)>::Node_t, short unsigned int, CUtlMap<unsigned int, void (CResponseFileParser::*)(ParserResponse&, ResponseGroup&, ResponseParams*)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, void (CResponseFileParser::*)(ParserResponse&, ResponseGroup&, ResponseParams*)>::Node_t, short unsigned int>, short unsigned int> >::~CUtlRBTree, CUtlRBTree<CUtlMap<unsigned int, void (CResponseFileParser::*)(Rule&)>::Node_t, short unsigned int, CUtlMap<unsigned int, void (CResponseFileParser::*)(Rule&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, void (CResponseFileParser::*)(Rule&)>::Node_t, short unsigned int>, short unsigned int> >::~CUtlRBTree, CUtlRBTree<CUtlMap<unsigned int, void (CResponseFileParser::*)()>::Node_t, short unsigned int, CUtlMap<unsigned int, void (CResponseFileParser::*)()>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, void (CResponseFileParser::*)()>::Node_t, short unsigned int>, short unsigned int> >::~CUtlRBTree, CUtlRBTree<unsigned int, short unsigned int, bool (*)(unsigned int const&, unsigned int const&), CUtlMemory<UtlRBTreeNode_t<unsigned int, short unsigned int>, short unsigned int> >::~CUtlRBTree, CStringPool::~CStringPool, CUtlMemory<CResponseFileParser::ScriptEntry, int>::Purge
// callers: CResponseSystem::CResponseSystem
// globals: CDefOps<uint>::LessFunc(uint const&,uint const&)
void __fastcall CResponseFileParser::CResponseFileParser(CResponseFileParser *const this, CResponseSystem *const owner)
{
  this->m_owner = owner;
  this->m_ScriptStack.m_Size = 0;
  this->m_ScriptStack.m_Memory.m_pMemory = 0;
  this->m_ScriptStack.m_Memory.m_nAllocationCount = 0;
  this->m_ScriptStack.m_Memory.m_nGrowSize = 0;
  CStringPool::CStringPool(&this->m_IncludedFiles, StringPoolCase_t::StringPoolCaseInsensitive);
  this->m_RootCommandHashes.m_Root = -1;
  this->m_RootCommandHashes.m_NumElements = 0;
  this->m_RootCommandHashes.m_FirstFree = -1;
  this->m_RootCommandHashes.m_LastAlloc.index = -1;
  this->m_FileDispatch.m_Tree.m_Root = -1;
  this->m_FileDispatch.m_Tree.m_NumElements = 0;
  this->m_FileDispatch.m_Tree.m_FirstFree = -1;
  this->m_FileDispatch.m_Tree.m_LastAlloc.index = -1;
  this->m_RuleDispatch.m_Tree.m_Root = -1;
  this->m_RuleDispatch.m_Tree.m_NumElements = 0;
  this->m_RuleDispatch.m_Tree.m_FirstFree = -1;
  this->m_RootCommandHashes.m_LessFunc = CDefOps<unsigned int>::LessFunc;
  this->m_FileDispatch.m_Tree.m_LessFunc.m_LessFunc = CDefOps<unsigned int>::LessFunc;
  this->m_RuleDispatch.m_Tree.m_LessFunc.m_LessFunc = CDefOps<unsigned int>::LessFunc;
  this->m_RuleDispatch.m_Tree.m_LastAlloc.index = -1;
  this->m_ResponseDispatch.m_Tree.m_LessFunc.m_LessFunc = CDefOps<unsigned int>::LessFunc;
  this->m_ResponseDispatch.m_Tree.m_Root = -1;
  this->m_ResponseDispatch.m_Tree.m_NumElements = 0;
  this->m_RootCommandHashes.m_Elements.m_pMemory = 0;
  this->m_RootCommandHashes.m_Elements.m_nAllocationCount = 0;
  this->m_RootCommandHashes.m_Elements.m_nGrowSize = 0;
  this->m_RootCommandHashes.m_pElements = 0;
  this->m_FileDispatch.m_Tree.m_Elements.m_pMemory = 0;
  this->m_FileDispatch.m_Tree.m_Elements.m_nAllocationCount = 0;
  this->m_FileDispatch.m_Tree.m_Elements.m_nGrowSize = 0;
  this->m_FileDispatch.m_Tree.m_pElements = 0;
  this->m_RuleDispatch.m_Tree.m_Elements.m_pMemory = 0;
  this->m_RuleDispatch.m_Tree.m_Elements.m_nAllocationCount = 0;
  this->m_RuleDispatch.m_Tree.m_Elements.m_nGrowSize = 0;
  this->m_RuleDispatch.m_Tree.m_pElements = 0;
  this->m_ResponseDispatch.m_Tree.m_Elements.m_pMemory = 0;
  this->m_ResponseDispatch.m_Tree.m_Elements.m_nAllocationCount = 0;
  this->m_ResponseDispatch.m_Tree.m_Elements.m_nGrowSize = 0;
  this->m_ResponseDispatch.m_Tree.m_FirstFree = -1;
  this->m_ResponseDispatch.m_Tree.m_LastAlloc.index = -1;
  this->m_ResponseDispatch.m_Tree.m_pElements = 0;
  this->m_ResponseGroupDispatch.m_Tree.m_LessFunc.m_LessFunc = CDefOps<unsigned int>::LessFunc;
  this->m_ResponseGroupDispatch.m_Tree.m_Elements.m_pMemory = 0;
  this->m_ResponseGroupDispatch.m_Tree.m_Elements.m_nAllocationCount = 0;
  this->m_ResponseGroupDispatch.m_Tree.m_Elements.m_nGrowSize = 0;
  this->m_ResponseGroupDispatch.m_Tree.m_Root = -1;
  this->m_ResponseGroupDispatch.m_Tree.m_NumElements = 0;
  this->m_ResponseGroupDispatch.m_Tree.m_FirstFree = -1;
  this->m_ResponseGroupDispatch.m_Tree.m_LastAlloc.index = -1;
  this->m_ResponseGroupDispatch.m_Tree.m_pElements = 0;
  this->m_bUnget = 0;
  memset(this->token, 0, sizeof(this->token));
  CResponseFileParser::BuildDispatchTables(this);
}


// CResponseFileParser::GetCurrentScript  (line 95, @0x0000000003102170, libserver.so)
// calls: IResponseEngineEmulator::Get
// callers: CResponseFileParser::TokenWaiting, CResponseFileParser::GetCurrentScript, CResponseFileParser::ResponseWarning, CResponseFileParser::ParseRule_Criteria, CResponseFileParser::LoadFromBuffer
void __fastcall CResponseFileParser::GetCurrentScript(CResponseFileParser *const this, char *buf, size_t buflen)
{
  unsigned int v4; // r12d
  IResponseEngineEmulator *v6; // rax
  __int64 v7; // rax

  v4 = buflen;
  v6 = IResponseEngineEmulator::Get();
  v7 = (*(*v6 + 8LL))(v6);
  if ( (*(*v7 + 376LL))(v7, &this->m_ScriptStack.m_Memory.m_pMemory->name, buf, v4) == 0 )
    *buf = 0;
}


// CResponseFileParser::GetCurrentScript  (line 95, @0x00000000031042d0, libserver.so)
// calls: CResponseFileParser::GetCurrentScript
void __fastcall CResponseFileParser::GetCurrentScript(CResponseFileParser *const this, char *buf, size_t buflen)
{
  *buf = 0;
  if ( this->m_ScriptStack.m_Size > 0 )
    CResponseFileParser::GetCurrentScript(this, buf, buflen);
}


// CResponseFileParser::PushScript  (line 109, @0x00000000031058a0, libserver.so)  // inlines: AddToHead, CopyConstruct<CResponseFileParser::ScriptEntry>, GrowMemory, GrowVector, InsertBefore, ShiftElementsRight, V_memmove, memmove
// calls: IResponseEngineEmulator::Get, CUtlMemory<CResponseFileParser::ScriptEntry, int>::Grow, memmove
// callers: CResponseFileParser::LoadFromBuffer
void __fastcall CResponseFileParser::PushScript(
        CResponseFileParser *const this,
        const char *scriptfile,
        unsigned __int8 *buffer)
{
  IResponseEngineEmulator *v6; // rax
  __int64 v7; // rax
  FileNameHandle_t v8; // eax
  int m_Size; // r12d
  int m_nAllocationCount; // edx
  FileNameHandle_t v11; // r15d
  int v12; // r13d
  CResponseFileParser::ScriptEntry *m_pMemory; // rcx

  v6 = IResponseEngineEmulator::Get();
  v7 = (*(*v6 + 8LL))(v6);
  v8 = (*(*v7 + 368LL))(v7, scriptfile);
  m_Size = this->m_ScriptStack.m_Size;
  m_nAllocationCount = this->m_ScriptStack.m_Memory.m_nAllocationCount;
  v11 = v8;
  v12 = m_Size + 1;
  if ( m_Size + 1 > m_nAllocationCount )
    CUtlMemory<CResponseFileParser::ScriptEntry,int>::Grow(&this->m_ScriptStack.m_Memory, v12 - m_nAllocationCount);
  this->m_ScriptStack.m_Size = v12;
  if ( m_Size > 0 )
    memmove(&this->m_ScriptStack.m_Memory.m_pMemory[1], this->m_ScriptStack.m_Memory.m_pMemory, 32LL * m_Size);
  m_pMemory = this->m_ScriptStack.m_Memory.m_pMemory;
  if ( m_pMemory != 0 )
  {
    m_pMemory->buffer = buffer;
    m_pMemory->name = v11;
    m_pMemory->currenttoken = buffer;
    m_pMemory->tokencount = 0;
  }
}


// CResponseFileParser::PopScript  (line 119, @0x00000000031051e0, libserver.so)
// calls: CUtlVectorBase<CResponseFileParser::ScriptEntry, CUtlMemory<CResponseFileParser::ScriptEntry, int> >::Remove
void __fastcall CResponseFileParser::PopScript(CResponseFileParser *const this)
{
  if ( this->m_ScriptStack.m_Size > 0 )
    CUtlVectorBase<CResponseFileParser::ScriptEntry,CUtlMemory<CResponseFileParser::ScriptEntry,int>>::Remove(
      &this->m_ScriptStack,
      0);
}


// CResponseFileParser::LoadFromBuffer  (line 129, @0x0000000003105940, libserver.so)  // inlines: Count, GetBool, GetCurrentScript, GetInt, LeafCodeInfo_t, ParseToken, PopScript
// calls: CStringPool::Allocate, CResponseFileParser::PushScript, IResponseEngineEmulator::Get, HashStringConventional, CResponseFileParser::Dispatch, CUtlVectorBase<CResponseFileParser::ScriptEntry, CUtlMemory<CResponseFileParser::ScriptEntry, int> >::Remove, __cxa_guard_acquire, ConVarRef::ConVarRef, __cxa_guard_release, DevMsg(char const*,...), CResponseFileParser::GetCurrentScript, ResponseRulePartition::Count (20 total)
// callers: CResponseSystem::LoadFromBuffer, CResponseFileParser::LoadFromFile, CResponseFileParser::ParseInclude
// strings: "rr_dumpresponses", "Reading: %s\n", "CResponseSystem:  %s (%i rules, %i criteria, and %i responses)\n", "response_system_parser.cpp", "LoadFromBuffer", "CResponseFileParser::LoadFromBuffer:  Unknown entry type '%s', expecting 'response', 'cri
// globals: `guard variable for'CResponseFileParser::LoadFromBuffer(char const*,char const*)::rr_dumpresponses, CResponseFileParser::LoadFromBuffer(char const*,char const*)::rr_dumpresponses
void __fastcall CResponseFileParser::LoadFromBuffer(
        CResponseFileParser *const this,
        const char *scriptfile,
        const char *buffer)
{
  CResponseFileParser::ScriptEntry *v6; // r15
  IResponseEngineEmulator *v7; // rax
  unsigned int v8; // eax
  bool v9; // zf
  int m_Size; // eax
  CResponseSystem *m_owner; // rax
  int m_NumElements; // r14d
  int v13; // r13d
  int v14; // eax
  CResponseFileParser::ScriptEntry *m_pMemory; // rax
  const char *currenttoken; // r13
  unsigned __int8 *v17; // r15
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdi
  __int64 v21; // rsi
  __int64 v22; // r8
  __int64 v23; // r9
  LeafCodeInfo_t v24; // [rsp+10h] [rbp-160h] BYREF
  char cur[264]; // [rsp+30h] [rbp-140h] BYREF
  unsigned __int64 v26; // [rsp+138h] [rbp-38h]

  v26 = __readfsqword(0x28u);
  CStringPool::Allocate(&this->m_IncludedFiles, scriptfile);
  CResponseFileParser::PushScript(this, scriptfile, buffer);
  if ( `guard variable for'CResponseFileParser::LoadFromBuffer(char const*,char const*)::rr_dumpresponses == 0
    && __cxa_guard_acquire(&`guard variable for'CResponseFileParser::LoadFromBuffer(char const*,char const*)::rr_dumpresponses) != 0 )
  {
    ConVarRef::ConVarRef(
      &CResponseFileParser::LoadFromBuffer(char const*,char const*)::rr_dumpresponses,
      "rr_dumpresponses");
    __cxa_guard_release(&`guard variable for'CResponseFileParser::LoadFromBuffer(char const*,char const*)::rr_dumpresponses);
  }
  if ( CResponseFileParser::LoadFromBuffer(char const*,char const*)::rr_dumpresponses.m_pConVarState->m_Value.m_nValue != 0 )
    DevMsg("Reading: %s\n", scriptfile);
  while ( this->m_bUnget )
  {
    v9 = this->token[0] == 0;
    this->m_bUnget = 0;
    if ( v9 )
      goto LABEL_11;
LABEL_8:
    v8 = HashStringConventional(this->token);
    if ( !CResponseFileParser::Dispatch(this, this->token, v8, &this->m_FileDispatch) )
    {
      m_pMemory = this->m_ScriptStack.m_Memory.m_pMemory;
      currenttoken = m_pMemory->currenttoken;
      v17 = m_pMemory->buffer;
      if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
        goto LABEL_24;
      while ( 1 )
      {
        if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v20, v21, v18, v19, v22, v23) != 0 )
          loc_0 = -559038737;
        Plat_ExitProcess(1);
LABEL_24:
        currenttoken -= v17;
        v24.m_szFile = "response_system_parser.cpp";
        v24.m_szFunction = "LoadFromBuffer";
        v24.m_nLine = 155;
        LoggingSystem_Log(
          LOG_GENERAL,
          LoggingSeverity_t::LS_ERROR,
          &v24,
          "CResponseFileParser::LoadFromBuffer:  Unknown entry type '%s', expecting 'response', 'criterion', 'enumeration"
          "' or 'rules' in file %s(offset:%i)\n",
          this->token,
          scriptfile,
          currenttoken);
      }
    }
  }
  if ( this->m_ScriptStack.m_Size > 0 )
  {
    v6 = this->m_ScriptStack.m_Memory.m_pMemory;
    v7 = IResponseEngineEmulator::Get();
    v6->currenttoken = (**v7)(v7, this->m_ScriptStack.m_Memory.m_pMemory->currenttoken, this->token, 1204);
    ++this->m_ScriptStack.m_Memory.m_pMemory->tokencount;
  }
  if ( this->token[0] != 0 )
    goto LABEL_8;
LABEL_11:
  m_Size = this->m_ScriptStack.m_Size;
  if ( m_Size == 1 )
  {
    cur[0] = 0;
    CResponseFileParser::GetCurrentScript(this, cur, 0x100u);
    m_owner = this->m_owner;
    m_NumElements = m_owner->m_Responses.m_Elements.m_Tree.m_NumElements;
    v13 = m_owner->m_Criteria.m_Elements.m_Tree.m_NumElements;
    v14 = ResponseRulePartition::Count(&m_owner->m_RulePartitions);
    DevMsg(2, "CResponseSystem:  %s (%i rules, %i criteria, and %i responses)\n", cur, v14, v13, m_NumElements);
    if ( CResponseFileParser::LoadFromBuffer(char const*,char const*)::rr_dumpresponses.m_pConVarState->m_Value.m_nValue != 0 )
      (*(this->m_owner->_vptr_IResponseSystem + 5))(this->m_owner);
    m_Size = this->m_ScriptStack.m_Size;
  }
  if ( m_Size > 0 )
    CUtlVectorBase<CResponseFileParser::ScriptEntry,CUtlMemory<CResponseFileParser::ScriptEntry,int>>::Remove(
      &this->m_ScriptStack,
      0);
}


// CResponseFileParser::LoadFromFile  (line 180, @0x0000000003105c00, libserver.so)  // inlines: Disable, String, operator[]
// calls: Plat_FloatTime, IResponseEngineEmulator::Get, CStringPool::FreeAll, CResponseFileParser::LoadFromBuffer, CUtlString::Get, CResponseFileParser::ResponseWarning, CUtlVectorBase<CResponseSystem::PendingCriterionRule, CUtlMemory<CResponseSystem::PendingCriterionRule, int> >::Remove, COM_TimestampedLog, DevMsg
// callers: CResponseSystem::LoadFromFile
// strings: "%s/%s:  discarded rule because of invalid criterion %i:  %s\n", "CResponseSystem::LoadFromFile took %f msec", "CResponseSystem:  failed to load %s\n"
void __fastcall CResponseFileParser::LoadFromFile(CResponseFileParser *const this, const char *basescript)
{
  IResponseEngineEmulator *v4; // rax
  __int64 v5; // rax
  const char *v6; // r12
  IResponseEngineEmulator *v7; // rax
  CResponseSystem *m_owner; // rax
  int v9; // r12d
  __int64 v10; // r13
  const char *v11; // r15
  const char *v12; // rax
  int v13; // esi
  Rule *pRule; // rax
  double v15; // xmm0_8
  float v16; // xmm1_4
  double v17; // [rsp+8h] [rbp-48h]
  int length[13]; // [rsp+1Ch] [rbp-34h] BYREF

  length[0] = 0;
  v17 = Plat_FloatTime();
  v4 = IResponseEngineEmulator::Get();
  v5 = (*(*v4 + 32LL))(v4, basescript, length);
  if ( length[0] > 0 && (v6 = v5, v5 != 0) )
  {
    CStringPool::FreeAll(&this->m_IncludedFiles);
    CResponseFileParser::LoadFromBuffer(this, basescript, v6);
    v7 = IResponseEngineEmulator::Get();
    (*(*v7 + 40LL))(v7, v6);
    m_owner = this->m_owner;
    v9 = m_owner->m_PendingCriterion.m_Size - 1;
    if ( v9 >= 0 )
    {
      v10 = v9;
      while ( 1 )
      {
        v11 = CUtlString::Get(&m_owner->m_PendingCriterion.m_Memory.m_pMemory[v10].szToken);
        v12 = CUtlString::Get(&this->m_owner->m_PendingCriterion.m_Memory.m_pMemory[v10].sScriptFile);
        CResponseFileParser::ResponseWarning(
          this,
          "%s/%s:  discarded rule because of invalid criterion %i:  %s\n",
          basescript,
          v12,
          v9,
          v11);
        v13 = v9--;
        pRule = this->m_owner->m_PendingCriterion.m_Memory.m_pMemory[v10--].pRule;
        *(pRule + 41) &= ~4u;
        CUtlVectorBase<CResponseSystem::PendingCriterionRule,CUtlMemory<CResponseSystem::PendingCriterionRule,int>>::Remove(
          &this->m_owner->m_PendingCriterion,
          v13);
        if ( v9 == -1 )
          break;
        m_owner = this->m_owner;
      }
    }
    v15 = Plat_FloatTime();
    v16 = v17;
    *&v15 = v15;
    COM_TimestampedLog("CResponseSystem::LoadFromFile took %f msec", ((*&v15 - v16) * 1000.0));
  }
  else
  {
    DevMsg(1, "CResponseSystem:  failed to load %s\n", basescript);
  }
}


// CResponseFileParser::ParseResponse_Weight  (line 240, @0x00000000031025d0, libserver.so)  // inlines: ConvertFloatTo16bits, ParseToken, SetFloat, atof
// calls: IResponseEngineEmulator::Get, strtod
void __fastcall CResponseFileParser::ParseResponse_Weight(
        CResponseFileParser *const this,
        ParserResponse *const newResponse,
        ResponseGroup *const group,
        ResponseParams *rp)
{
  char *token; // r13
  CResponseFileParser::ScriptEntry *m_pMemory; // r14
  IResponseEngineEmulator *v8; // rax
  float v9; // xmm0_4
  __m128i v10; // xmm1
  __m128i v11; // xmm0
  unsigned int v12; // eax
  unsigned int v13; // ecx
  int v14; // edi
  float16::float16bits v15; // dx
  __int16 v16; // si
  int v17; // edi
  int v18; // esi
  __int16 v19; // cx
  float16::float16bits v20; // dx

  if ( this->m_bUnget )
  {
    this->m_bUnget = 0;
    token = this->token;
  }
  else
  {
    token = this->token;
    if ( this->m_ScriptStack.m_Size > 0 )
    {
      m_pMemory = this->m_ScriptStack.m_Memory.m_pMemory;
      token = this->token;
      v8 = IResponseEngineEmulator::Get();
      m_pMemory->currenttoken = (**v8)(v8, this->m_ScriptStack.m_Memory.m_pMemory->currenttoken, this->token, 1204);
      ++this->m_ScriptStack.m_Memory.m_pMemory->tokencount;
    }
  }
  v9 = strtod(token, 0);
  if ( v9 > 65504.0 )
  {
    v11 = 0x477FE000u;
  }
  else
  {
    v10 = 0xC77FE000;
    *v10.m128i_i32 = fmaxf(-65504.0, v9);
    v11 = v10;
  }
  v12 = _mm_cvtsi128_si32(v11);
  v13 = v12 >> 31 << 15;
  v14 = v12 & 0x7FFFFFFF;
  v15.rawWord = v12 >> 31 << 15;
  if ( (v12 & 0x7FFFFFFF) == 0 )
    goto LABEL_15;
  v16 = (_mm_cvtsi128_si32(v11) >> 16) & 0x7F80;
  if ( v16 != 0 )
  {
    if ( v14 != 2139095040 )
    {
      if ( v16 == 32640 && (v12 & 0x7FFFFF) != 0 )
        goto LABEL_15;
      goto LABEL_10;
    }
LABEL_20:
    v19 = v13 | 0x3FF;
    LOBYTE(v20.rawWord) = v19;
    HIBYTE(v20.rawWord) = HIBYTE(v19) | 0x78;
    newResponse->weight.m_storage = v20;
    return;
  }
  if ( (v12 & 0x7FFFFF) != 0 )
  {
LABEL_15:
    v15.rawWord = v12 >> 31 << 15;
LABEL_16:
    newResponse->weight.m_storage = v15;
    return;
  }
  if ( v14 == 2139095040 )
    goto LABEL_20;
LABEL_10:
  v17 = (v12 >> 23);
  v18 = v17 - 127;
  if ( v17 - 127 < -24 )
  {
    v15.rawWord = v12 >> 31 << 15;
    goto LABEL_12;
  }
  if ( v18 < -14 )
  {
LABEL_12:
    HIBYTE(v15.rawWord) &= 0x83u;
    if ( (113 - v17 - 1) <= 9 )
      v15.rawWord = ((1 << (10 - (113 - v17))) + ((v12 & 0x7FFFFF) >> (113 - v17 + 13))) & 0x3FF | v15.rawWord & 0xFC00;
    goto LABEL_16;
  }
  if ( v18 > 15 )
    goto LABEL_20;
  newResponse->weight.m_storage.rawWord = ((v12 & 0x7FFFFF) >> 13) | v13 | (((v18 + 15) & 0x1F) << 10);
}


// CResponseFileParser::ParseResponse_PreDelay  (line 246, @0x00000000031031f0, libserver.so)  // inlines: ConvertFloatTo16bits, FromInterval, ParseToken, operator=
// calls: IResponseEngineEmulator::Get, ReadInterval
void __fastcall CResponseFileParser::ParseResponse_PreDelay(
        CResponseFileParser *const this,
        ParserResponse *const newResponse,
        ResponseGroup *const group,
        ResponseParams *rp)
{
  char *token; // r13
  CResponseFileParser::ScriptEntry *m_pMemory; // r14
  IResponseEngineEmulator *v8; // rax
  float range; // rsi^4
  __m128i v10; // xmm1
  __m128i v11; // xmm0
  unsigned int v12; // eax
  unsigned int v13; // ecx
  int v14; // r8d
  float16::float16bits v15; // dx
  __int16 v16; // di
  int v17; // r8d
  int v18; // edi
  __m128i v19; // xmm1
  __m128i v20; // xmm0
  unsigned int v21; // eax
  unsigned int v22; // ecx
  int v23; // edi
  float16::float16bits v24; // dx
  __int16 v25; // si
  int v26; // edi
  int v27; // esi
  __int16 v28; // cx
  float16::float16bits v29; // dx
  interval_t Interval; // 0:xmm0_8.8

  if ( this->m_bUnget )
  {
    this->m_bUnget = 0;
    token = this->token;
  }
  else
  {
    token = this->token;
    if ( this->m_ScriptStack.m_Size > 0 )
    {
      m_pMemory = this->m_ScriptStack.m_Memory.m_pMemory;
      token = this->token;
      v8 = IResponseEngineEmulator::Get();
      m_pMemory->currenttoken = (**v8)(v8, this->m_ScriptStack.m_Memory.m_pMemory->currenttoken, this->token, 1204);
      ++this->m_ScriptStack.m_Memory.m_pMemory->tokencount;
    }
  }
  rp->flags |= 0x100u;
  Interval = ReadInterval(token);
  range = Interval.range;
  if ( Interval.start > 65504.0 )
  {
    v11 = 0x477FE000u;
  }
  else
  {
    v10 = 0xC77FE000;
    *v10.m128i_i32 = fmaxf(-65504.0, Interval.start);
    v11 = v10;
  }
  v12 = _mm_cvtsi128_si32(v11);
  v13 = v12 >> 31 << 15;
  v14 = v12 & 0x7FFFFFFF;
  v15.rawWord = v12 >> 31 << 15;
  if ( (v12 & 0x7FFFFFFF) == 0 )
    goto LABEL_15;
  v16 = (_mm_cvtsi128_si32(v11) >> 16) & 0x7F80;
  if ( v16 != 0 )
  {
    if ( v14 == 2139095040 )
      goto LABEL_33;
    if ( v16 == 32640 && (v12 & 0x7FFFFF) != 0 )
      goto LABEL_15;
  }
  else
  {
    if ( (v12 & 0x7FFFFF) != 0 )
    {
LABEL_15:
      v15.rawWord = v12 >> 31 << 15;
      goto LABEL_16;
    }
    if ( v14 == 2139095040 )
      goto LABEL_33;
  }
  v17 = (v12 >> 23);
  v18 = v17 - 127;
  if ( v17 - 127 < -24 )
  {
    v15.rawWord = v12 >> 31 << 15;
    goto LABEL_12;
  }
  if ( v18 >= -14 )
  {
    if ( v18 <= 15 )
    {
      v15.rawWord = ((v12 & 0x7FFFFF) >> 13) | v13 | (((v18 + 15) & 0x1F) << 10);
      goto LABEL_16;
    }
LABEL_33:
    v15.rawWord = v13 | 0x7BFF;
    goto LABEL_16;
  }
LABEL_12:
  HIBYTE(v15.rawWord) &= 0x83u;
  if ( (113 - v17 - 1) <= 9 )
    v15.rawWord = ((1 << (10 - (113 - v17))) + ((v12 & 0x7FFFFF) >> (113 - v17 + 13))) & 0x3FF | v15.rawWord & 0xFC00;
LABEL_16:
  rp->predelay.start.m_storage = v15;
  if ( range > 65504.0 )
  {
    v20 = 0x477FE000u;
  }
  else
  {
    v19 = 0xC77FE000;
    *v19.m128i_i32 = fmaxf(-65504.0, range);
    v20 = v19;
  }
  v21 = _mm_cvtsi128_si32(v20);
  v22 = v21 >> 31 << 15;
  v23 = v21 & 0x7FFFFFFF;
  v24.rawWord = v21 >> 31 << 15;
  if ( (v21 & 0x7FFFFFFF) == 0 )
    goto LABEL_27;
  v25 = (_mm_cvtsi128_si32(v20) >> 16) & 0x7F80;
  if ( v25 != 0 )
  {
    if ( v23 != 2139095040 )
    {
      if ( v25 == 32640 && (v21 & 0x7FFFFF) != 0 )
        goto LABEL_27;
      goto LABEL_22;
    }
LABEL_36:
    v28 = v22 | 0x3FF;
    LOBYTE(v29.rawWord) = v28;
    HIBYTE(v29.rawWord) = HIBYTE(v28) | 0x78;
    rp->predelay.range.m_storage = v29;
    return;
  }
  if ( (v21 & 0x7FFFFF) != 0 )
  {
LABEL_27:
    v24.rawWord = v21 >> 31 << 15;
LABEL_28:
    rp->predelay.range.m_storage = v24;
    return;
  }
  if ( v23 == 2139095040 )
    goto LABEL_36;
LABEL_22:
  v26 = (v21 >> 23);
  v27 = v26 - 127;
  if ( v26 - 127 < -24 )
  {
    v24.rawWord = v21 >> 31 << 15;
    goto LABEL_24;
  }
  if ( v27 < -14 )
  {
LABEL_24:
    HIBYTE(v24.rawWord) &= 0x83u;
    if ( (113 - v26 - 1) <= 9 )
      v24.rawWord = ((1 << (10 - (113 - v26))) + ((v21 & 0x7FFFFF) >> (113 - v26 + 13))) & 0x3FF | v24.rawWord & 0xFC00;
    goto LABEL_28;
  }
  if ( v27 > 15 )
    goto LABEL_36;
  rp->predelay.range.m_storage.rawWord = ((v21 & 0x7FFFFF) >> 13) | v22 | (((v27 + 15) & 0x1F) << 10);
}


// CResponseFileParser::ParseResponse_NoDelay  (line 253, @0x0000000003102260, libserver.so)  // inlines: ParseToken, operator=
// calls: IResponseEngineEmulator::Get
void __fastcall CResponseFileParser::ParseResponse_NoDelay(
        CResponseFileParser *const this,
        ParserResponse *const newResponse,
        ResponseGroup *const group,
        ResponseParams *rp)
{
  CResponseFileParser::ScriptEntry *m_pMemory; // r13
  IResponseEngineEmulator *v7; // rax

  if ( this->m_bUnget )
  {
    this->m_bUnget = 0;
  }
  else if ( this->m_ScriptStack.m_Size > 0 )
  {
    m_pMemory = this->m_ScriptStack.m_Memory.m_pMemory;
    v7 = IResponseEngineEmulator::Get();
    m_pMemory->currenttoken = (**v7)(v7, this->m_ScriptStack.m_Memory.m_pMemory->currenttoken, this->token, 1204);
    ++this->m_ScriptStack.m_Memory.m_pMemory->tokencount;
  }
  rp->flags |= 1u;
  rp->delay.start.m_storage.rawWord = 0;
  rp->delay.range.m_storage.rawWord = 0;
}


// CResponseFileParser::ParseResponse_DefaultDelay  (line 261, @0x0000000003102130, libserver.so)  // inlines: operator=
void __fastcall CResponseFileParser::ParseResponse_DefaultDelay(
        CResponseFileParser *const this,
        ParserResponse *const newResponse,
        ResponseGroup *const group,
        ResponseParams *rp)
{
  rp->flags |= 1u;
  rp->delay.start.m_storage.rawWord = 16793;
  rp->delay.range.m_storage.rawWord = 13926;
}


// CResponseFileParser::ParseResponse_Delay  (line 268, @0x0000000003102e90, libserver.so)  // inlines: ConvertFloatTo16bits, FromInterval, ParseToken, operator=
// calls: IResponseEngineEmulator::Get, ReadInterval
void __fastcall CResponseFileParser::ParseResponse_Delay(
        CResponseFileParser *const this,
        ParserResponse *const newResponse,
        ResponseGroup *const group,
        ResponseParams *rp)
{
  char *token; // r13
  CResponseFileParser::ScriptEntry *m_pMemory; // r14
  IResponseEngineEmulator *v8; // rax
  float range; // rsi^4
  __m128i v10; // xmm1
  __m128i v11; // xmm0
  unsigned int v12; // eax
  unsigned int v13; // ecx
  int v14; // r8d
  float16::float16bits v15; // dx
  __int16 v16; // di
  int v17; // r8d
  int v18; // edi
  __m128i v19; // xmm1
  __m128i v20; // xmm0
  unsigned int v21; // eax
  unsigned int v22; // ecx
  int v23; // edi
  float16::float16bits v24; // dx
  __int16 v25; // si
  int v26; // edi
  int v27; // esi
  __int16 v28; // cx
  float16::float16bits v29; // dx
  interval_t Interval; // 0:xmm0_8.8

  if ( this->m_bUnget )
  {
    this->m_bUnget = 0;
    token = this->token;
  }
  else
  {
    token = this->token;
    if ( this->m_ScriptStack.m_Size > 0 )
    {
      m_pMemory = this->m_ScriptStack.m_Memory.m_pMemory;
      token = this->token;
      v8 = IResponseEngineEmulator::Get();
      m_pMemory->currenttoken = (**v8)(v8, this->m_ScriptStack.m_Memory.m_pMemory->currenttoken, this->token, 1204);
      ++this->m_ScriptStack.m_Memory.m_pMemory->tokencount;
    }
  }
  rp->flags |= 1u;
  Interval = ReadInterval(token);
  range = Interval.range;
  if ( Interval.start > 65504.0 )
  {
    v11 = 0x477FE000u;
  }
  else
  {
    v10 = 0xC77FE000;
    *v10.m128i_i32 = fmaxf(-65504.0, Interval.start);
    v11 = v10;
  }
  v12 = _mm_cvtsi128_si32(v11);
  v13 = v12 >> 31 << 15;
  v14 = v12 & 0x7FFFFFFF;
  v15.rawWord = v12 >> 31 << 15;
  if ( (v12 & 0x7FFFFFFF) == 0 )
    goto LABEL_15;
  v16 = (_mm_cvtsi128_si32(v11) >> 16) & 0x7F80;
  if ( v16 != 0 )
  {
    if ( v14 == 2139095040 )
      goto LABEL_33;
    if ( v16 == 32640 && (v12 & 0x7FFFFF) != 0 )
      goto LABEL_15;
  }
  else
  {
    if ( (v12 & 0x7FFFFF) != 0 )
    {
LABEL_15:
      v15.rawWord = v12 >> 31 << 15;
      goto LABEL_16;
    }
    if ( v14 == 2139095040 )
      goto LABEL_33;
  }
  v17 = (v12 >> 23);
  v18 = v17 - 127;
  if ( v17 - 127 < -24 )
  {
    v15.rawWord = v12 >> 31 << 15;
    goto LABEL_12;
  }
  if ( v18 >= -14 )
  {
    if ( v18 <= 15 )
    {
      v15.rawWord = ((v12 & 0x7FFFFF) >> 13) | v13 | (((v18 + 15) & 0x1F) << 10);
      goto LABEL_16;
    }
LABEL_33:
    v15.rawWord = v13 | 0x7BFF;
    goto LABEL_16;
  }
LABEL_12:
  HIBYTE(v15.rawWord) &= 0x83u;
  if ( (113 - v17 - 1) <= 9 )
    v15.rawWord = ((1 << (10 - (113 - v17))) + ((v12 & 0x7FFFFF) >> (113 - v17 + 13))) & 0x3FF | v15.rawWord & 0xFC00;
LABEL_16:
  rp->delay.start.m_storage = v15;
  if ( range > 65504.0 )
  {
    v20 = 0x477FE000u;
  }
  else
  {
    v19 = 0xC77FE000;
    *v19.m128i_i32 = fmaxf(-65504.0, range);
    v20 = v19;
  }
  v21 = _mm_cvtsi128_si32(v20);
  v22 = v21 >> 31 << 15;
  v23 = v21 & 0x7FFFFFFF;
  v24.rawWord = v21 >> 31 << 15;
  if ( (v21 & 0x7FFFFFFF) == 0 )
    goto LABEL_27;
  v25 = (_mm_cvtsi128_si32(v20) >> 16) & 0x7F80;
  if ( v25 != 0 )
  {
    if ( v23 != 2139095040 )
    {
      if ( v25 == 32640 && (v21 & 0x7FFFFF) != 0 )
        goto LABEL_27;
      goto LABEL_22;
    }
LABEL_36:
    v28 = v22 | 0x3FF;
    LOBYTE(v29.rawWord) = v28;
    HIBYTE(v29.rawWord) = HIBYTE(v28) | 0x78;
    rp->delay.range.m_storage = v29;
    return;
  }
  if ( (v21 & 0x7FFFFF) != 0 )
  {
LABEL_27:
    v24.rawWord = v21 >> 31 << 15;
LABEL_28:
    rp->delay.range.m_storage = v24;
    return;
  }
  if ( v23 == 2139095040 )
    goto LABEL_36;
LABEL_22:
  v26 = (v21 >> 23);
  v27 = v26 - 127;
  if ( v26 - 127 < -24 )
  {
    v24.rawWord = v21 >> 31 << 15;
    goto LABEL_24;
  }
  if ( v27 < -14 )
  {
LABEL_24:
    HIBYTE(v24.rawWord) &= 0x83u;
    if ( (113 - v26 - 1) <= 9 )
      v24.rawWord = ((1 << (10 - (113 - v26))) + ((v21 & 0x7FFFFF) >> (113 - v26 + 13))) & 0x3FF | v24.rawWord & 0xFC00;
    goto LABEL_28;
  }
  if ( v27 > 15 )
    goto LABEL_36;
  rp->delay.range.m_storage.rawWord = ((v21 & 0x7FFFFF) >> 13) | v22 | (((v27 + 15) & 0x1F) << 10);
}


// CResponseFileParser::ParseResponse_SpeakOnce  (line 275, @0x0000000003101df0, libserver.so)
void __fastcall CResponseFileParser::ParseResponse_SpeakOnce(
        CResponseFileParser *const this,
        ParserResponse *const newResponse,
        ResponseGroup *const group,
        ResponseParams *rp)
{
  rp->flags |= 2u;
}


// CResponseFileParser::ParseResponse_NoScene  (line 280, @0x0000000003101e00, libserver.so)
void __fastcall CResponseFileParser::ParseResponse_NoScene(
        CResponseFileParser *const this,
        ParserResponse *const newResponse,
        ResponseGroup *const group,
        ResponseParams *rp)
{
  rp->flags |= 0x20u;
}


// CResponseFileParser::ParseResponse_StopOnNonIdle  (line 285, @0x0000000003101e10, libserver.so)
void __fastcall CResponseFileParser::ParseResponse_StopOnNonIdle(
        CResponseFileParser *const this,
        ParserResponse *const newResponse,
        ResponseGroup *const group,
        ResponseParams *rp)
{
  rp->flags |= 0x40u;
}


// CResponseFileParser::ParseResponse_Odds  (line 290, @0x0000000003102410, libserver.so)  // inlines: ParseToken, atoi
// calls: IResponseEngineEmulator::Get, strtol
void __fastcall CResponseFileParser::ParseResponse_Odds(
        CResponseFileParser *const this,
        ParserResponse *const newResponse,
        ResponseGroup *const group,
        ResponseParams *rp)
{
  char *token; // r13
  CResponseFileParser::ScriptEntry *m_pMemory; // r14
  IResponseEngineEmulator *v8; // rax
  int v9; // eax
  __int16 v10; // dx
  int v11; // eax

  if ( this->m_bUnget )
  {
    this->m_bUnget = 0;
    token = this->token;
  }
  else
  {
    token = this->token;
    if ( this->m_ScriptStack.m_Size > 0 )
    {
      m_pMemory = this->m_ScriptStack.m_Memory.m_pMemory;
      token = this->token;
      v8 = IResponseEngineEmulator::Get();
      m_pMemory->currenttoken = (**v8)(v8, this->m_ScriptStack.m_Memory.m_pMemory->currenttoken, this->token, 1204);
      ++this->m_ScriptStack.m_Memory.m_pMemory->tokencount;
    }
  }
  rp->flags |= 4u;
  v9 = strtol(token, 0, 10);
  v10 = 100;
  if ( v9 > 100 || (v11 = strtol(token, 0, 10), v10 = 0, v11 < 0) )
    rp->odds = v10;
  else
    rp->odds = strtol(token, 0, 10);
}


// CResponseFileParser::ParseResponse_RespeakDelay  (line 297, @0x0000000003103c10, libserver.so)  // inlines: ConvertFloatTo16bits, FromInterval, ParseToken, operator=
// calls: IResponseEngineEmulator::Get, ReadInterval
void __fastcall CResponseFileParser::ParseResponse_RespeakDelay(
        CResponseFileParser *const this,
        ParserResponse *const newResponse,
        ResponseGroup *const group,
        ResponseParams *rp)
{
  char *token; // r13
  CResponseFileParser::ScriptEntry *m_pMemory; // r14
  IResponseEngineEmulator *v8; // rax
  float range; // rsi^4
  __m128i v10; // xmm1
  __m128i v11; // xmm0
  unsigned int v12; // eax
  unsigned int v13; // ecx
  int v14; // r8d
  float16::float16bits v15; // dx
  __int16 v16; // di
  int v17; // r8d
  int v18; // edi
  __m128i v19; // xmm1
  __m128i v20; // xmm0
  unsigned int v21; // eax
  unsigned int v22; // ecx
  int v23; // edi
  float16::float16bits v24; // dx
  __int16 v25; // si
  int v26; // edi
  int v27; // esi
  __int16 v28; // cx
  float16::float16bits v29; // dx
  interval_t Interval; // 0:xmm0_8.8

  if ( this->m_bUnget )
  {
    this->m_bUnget = 0;
    token = this->token;
  }
  else
  {
    token = this->token;
    if ( this->m_ScriptStack.m_Size > 0 )
    {
      m_pMemory = this->m_ScriptStack.m_Memory.m_pMemory;
      token = this->token;
      v8 = IResponseEngineEmulator::Get();
      m_pMemory->currenttoken = (**v8)(v8, this->m_ScriptStack.m_Memory.m_pMemory->currenttoken, this->token, 1204);
      ++this->m_ScriptStack.m_Memory.m_pMemory->tokencount;
    }
  }
  rp->flags |= 8u;
  Interval = ReadInterval(token);
  range = Interval.range;
  if ( Interval.start > 65504.0 )
  {
    v11 = 0x477FE000u;
  }
  else
  {
    v10 = 0xC77FE000;
    *v10.m128i_i32 = fmaxf(-65504.0, Interval.start);
    v11 = v10;
  }
  v12 = _mm_cvtsi128_si32(v11);
  v13 = v12 >> 31 << 15;
  v14 = v12 & 0x7FFFFFFF;
  v15.rawWord = v12 >> 31 << 15;
  if ( (v12 & 0x7FFFFFFF) == 0 )
    goto LABEL_15;
  v16 = (_mm_cvtsi128_si32(v11) >> 16) & 0x7F80;
  if ( v16 != 0 )
  {
    if ( v14 == 2139095040 )
      goto LABEL_33;
    if ( v16 == 32640 && (v12 & 0x7FFFFF) != 0 )
      goto LABEL_15;
  }
  else
  {
    if ( (v12 & 0x7FFFFF) != 0 )
    {
LABEL_15:
      v15.rawWord = v12 >> 31 << 15;
      goto LABEL_16;
    }
    if ( v14 == 2139095040 )
      goto LABEL_33;
  }
  v17 = (v12 >> 23);
  v18 = v17 - 127;
  if ( v17 - 127 < -24 )
  {
    v15.rawWord = v12 >> 31 << 15;
    goto LABEL_12;
  }
  if ( v18 >= -14 )
  {
    if ( v18 <= 15 )
    {
      v15.rawWord = ((v12 & 0x7FFFFF) >> 13) | v13 | (((v18 + 15) & 0x1F) << 10);
      goto LABEL_16;
    }
LABEL_33:
    v15.rawWord = v13 | 0x7BFF;
    goto LABEL_16;
  }
LABEL_12:
  HIBYTE(v15.rawWord) &= 0x83u;
  if ( (113 - v17 - 1) <= 9 )
    v15.rawWord = ((1 << (10 - (113 - v17))) + ((v12 & 0x7FFFFF) >> (113 - v17 + 13))) & 0x3FF | v15.rawWord & 0xFC00;
LABEL_16:
  rp->respeakdelay.start.m_storage = v15;
  if ( range > 65504.0 )
  {
    v20 = 0x477FE000u;
  }
  else
  {
    v19 = 0xC77FE000;
    *v19.m128i_i32 = fmaxf(-65504.0, range);
    v20 = v19;
  }
  v21 = _mm_cvtsi128_si32(v20);
  v22 = v21 >> 31 << 15;
  v23 = v21 & 0x7FFFFFFF;
  v24.rawWord = v21 >> 31 << 15;
  if ( (v21 & 0x7FFFFFFF) == 0 )
    goto LABEL_27;
  v25 = (_mm_cvtsi128_si32(v20) >> 16) & 0x7F80;
  if ( v25 != 0 )
  {
    if ( v23 != 2139095040 )
    {
      if ( v25 == 32640 && (v21 & 0x7FFFFF) != 0 )
        goto LABEL_27;
      goto LABEL_22;
    }
LABEL_36:
    v28 = v22 | 0x3FF;
    LOBYTE(v29.rawWord) = v28;
    HIBYTE(v29.rawWord) = HIBYTE(v28) | 0x78;
    rp->respeakdelay.range.m_storage = v29;
    return;
  }
  if ( (v21 & 0x7FFFFF) != 0 )
  {
LABEL_27:
    v24.rawWord = v21 >> 31 << 15;
LABEL_28:
    rp->respeakdelay.range.m_storage = v24;
    return;
  }
  if ( v23 == 2139095040 )
    goto LABEL_36;
LABEL_22:
  v26 = (v21 >> 23);
  v27 = v26 - 127;
  if ( v26 - 127 < -24 )
  {
    v24.rawWord = v21 >> 31 << 15;
    goto LABEL_24;
  }
  if ( v27 < -14 )
  {
LABEL_24:
    HIBYTE(v24.rawWord) &= 0x83u;
    if ( (113 - v26 - 1) <= 9 )
      v24.rawWord = ((1 << (10 - (113 - v26))) + ((v21 & 0x7FFFFF) >> (113 - v26 + 13))) & 0x3FF | v24.rawWord & 0xFC00;
    goto LABEL_28;
  }
  if ( v27 > 15 )
    goto LABEL_36;
  rp->respeakdelay.range.m_storage.rawWord = ((v21 & 0x7FFFFF) >> 13) | v22 | (((v27 + 15) & 0x1F) << 10);
}


// CResponseFileParser::ParseResponse_WeaponDelay  (line 304, @0x00000000031027d0, libserver.so)  // inlines: ConvertFloatTo16bits, FromInterval, ParseToken, operator=
// calls: IResponseEngineEmulator::Get, ReadInterval
void __fastcall CResponseFileParser::ParseResponse_WeaponDelay(
        CResponseFileParser *const this,
        ParserResponse *const newResponse,
        ResponseGroup *const group,
        ResponseParams *rp)
{
  char *token; // r13
  CResponseFileParser::ScriptEntry *m_pMemory; // r14
  IResponseEngineEmulator *v8; // rax
  float range; // rsi^4
  __m128i v10; // xmm1
  __m128i v11; // xmm0
  unsigned int v12; // eax
  unsigned int v13; // ecx
  int v14; // r8d
  float16::float16bits v15; // dx
  __int16 v16; // di
  int v17; // r8d
  int v18; // edi
  __m128i v19; // xmm1
  __m128i v20; // xmm0
  unsigned int v21; // eax
  unsigned int v22; // ecx
  int v23; // edi
  float16::float16bits v24; // dx
  __int16 v25; // si
  int v26; // edi
  int v27; // esi
  __int16 v28; // cx
  float16::float16bits v29; // dx
  interval_t Interval; // 0:xmm0_8.8

  if ( this->m_bUnget )
  {
    this->m_bUnget = 0;
    token = this->token;
  }
  else
  {
    token = this->token;
    if ( this->m_ScriptStack.m_Size > 0 )
    {
      m_pMemory = this->m_ScriptStack.m_Memory.m_pMemory;
      token = this->token;
      v8 = IResponseEngineEmulator::Get();
      m_pMemory->currenttoken = (**v8)(v8, this->m_ScriptStack.m_Memory.m_pMemory->currenttoken, this->token, 1204);
      ++this->m_ScriptStack.m_Memory.m_pMemory->tokencount;
    }
  }
  rp->flags |= 0x80u;
  Interval = ReadInterval(token);
  range = Interval.range;
  if ( Interval.start > 65504.0 )
  {
    v11 = 0x477FE000u;
  }
  else
  {
    v10 = 0xC77FE000;
    *v10.m128i_i32 = fmaxf(-65504.0, Interval.start);
    v11 = v10;
  }
  v12 = _mm_cvtsi128_si32(v11);
  v13 = v12 >> 31 << 15;
  v14 = v12 & 0x7FFFFFFF;
  v15.rawWord = v12 >> 31 << 15;
  if ( (v12 & 0x7FFFFFFF) == 0 )
    goto LABEL_15;
  v16 = (_mm_cvtsi128_si32(v11) >> 16) & 0x7F80;
  if ( v16 != 0 )
  {
    if ( v14 == 2139095040 )
      goto LABEL_33;
    if ( v16 == 32640 && (v12 & 0x7FFFFF) != 0 )
      goto LABEL_15;
  }
  else
  {
    if ( (v12 & 0x7FFFFF) != 0 )
    {
LABEL_15:
      v15.rawWord = v12 >> 31 << 15;
      goto LABEL_16;
    }
    if ( v14 == 2139095040 )
      goto LABEL_33;
  }
  v17 = (v12 >> 23);
  v18 = v17 - 127;
  if ( v17 - 127 < -24 )
  {
    v15.rawWord = v12 >> 31 << 15;
    goto LABEL_12;
  }
  if ( v18 >= -14 )
  {
    if ( v18 <= 15 )
    {
      v15.rawWord = ((v12 & 0x7FFFFF) >> 13) | v13 | (((v18 + 15) & 0x1F) << 10);
      goto LABEL_16;
    }
LABEL_33:
    v15.rawWord = v13 | 0x7BFF;
    goto LABEL_16;
  }
LABEL_12:
  HIBYTE(v15.rawWord) &= 0x83u;
  if ( (113 - v17 - 1) <= 9 )
    v15.rawWord = ((1 << (10 - (113 - v17))) + ((v12 & 0x7FFFFF) >> (113 - v17 + 13))) & 0x3FF | v15.rawWord & 0xFC00;
LABEL_16:
  rp->weapondelay.start.m_storage = v15;
  if ( range > 65504.0 )
  {
    v20 = 0x477FE000u;
  }
  else
  {
    v19 = 0xC77FE000;
    *v19.m128i_i32 = fmaxf(-65504.0, range);
    v20 = v19;
  }
  v21 = _mm_cvtsi128_si32(v20);
  v22 = v21 >> 31 << 15;
  v23 = v21 & 0x7FFFFFFF;
  v24.rawWord = v21 >> 31 << 15;
  if ( (v21 & 0x7FFFFFFF) == 0 )
    goto LABEL_27;
  v25 = (_mm_cvtsi128_si32(v20) >> 16) & 0x7F80;
  if ( v25 != 0 )
  {
    if ( v23 != 2139095040 )
    {
      if ( v25 == 32640 && (v21 & 0x7FFFFF) != 0 )
        goto LABEL_27;
      goto LABEL_22;
    }
LABEL_36:
    v28 = v22 | 0x3FF;
    LOBYTE(v29.rawWord) = v28;
    HIBYTE(v29.rawWord) = HIBYTE(v28) | 0x78;
    rp->weapondelay.range.m_storage = v29;
    return;
  }
  if ( (v21 & 0x7FFFFF) != 0 )
  {
LABEL_27:
    v24.rawWord = v21 >> 31 << 15;
LABEL_28:
    rp->weapondelay.range.m_storage = v24;
    return;
  }
  if ( v23 == 2139095040 )
    goto LABEL_36;
LABEL_22:
  v26 = (v21 >> 23);
  v27 = v26 - 127;
  if ( v26 - 127 < -24 )
  {
    v24.rawWord = v21 >> 31 << 15;
    goto LABEL_24;
  }
  if ( v27 < -14 )
  {
LABEL_24:
    HIBYTE(v24.rawWord) &= 0x83u;
    if ( (113 - v26 - 1) <= 9 )
      v24.rawWord = ((1 << (10 - (113 - v26))) + ((v21 & 0x7FFFFF) >> (113 - v26 + 13))) & 0x3FF | v24.rawWord & 0xFC00;
    goto LABEL_28;
  }
  if ( v27 > 15 )
    goto LABEL_36;
  rp->weapondelay.range.m_storage.rawWord = ((v21 & 0x7FFFFF) >> 13) | v22 | (((v27 + 15) & 0x1F) << 10);
}


// CResponseFileParser::ParseResponse_Soundlevel  (line 311, @0x0000000003102380, libserver.so)  // inlines: ParseToken
// calls: IResponseEngineEmulator::Get, TextToSoundLevel
void __fastcall CResponseFileParser::ParseResponse_Soundlevel(
        CResponseFileParser *const this,
        ParserResponse *const newResponse,
        ResponseGroup *const group,
        ResponseParams *rp)
{
  char *token; // r13
  CResponseFileParser::ScriptEntry *m_pMemory; // r14
  IResponseEngineEmulator *v8; // rax

  if ( this->m_bUnget )
  {
    this->m_bUnget = 0;
    token = this->token;
  }
  else
  {
    token = this->token;
    if ( this->m_ScriptStack.m_Size > 0 )
    {
      m_pMemory = this->m_ScriptStack.m_Memory.m_pMemory;
      token = this->token;
      v8 = IResponseEngineEmulator::Get();
      m_pMemory->currenttoken = (**v8)(v8, this->m_ScriptStack.m_Memory.m_pMemory->currenttoken, this->token, 1204);
      ++this->m_ScriptStack.m_Memory.m_pMemory->tokencount;
    }
  }
  rp->flags |= 0x10u;
  rp->soundlevel = TextToSoundLevel(token);
}


// CResponseFileParser::ParseResponse_DisplayFirst  (line 318, @0x0000000003101e20, libserver.so)
void __fastcall CResponseFileParser::ParseResponse_DisplayFirst(
        CResponseFileParser *const this,
        ParserResponse *const newResponse,
        ResponseGroup *const group,
        ResponseParams *rp)
{
  *(newResponse + 81) |= 0x40u;
  *(group + 19) |= 2u;
}


// CResponseFileParser::ParseResponse_DisplayLast  (line 324, @0x0000000003101e30, libserver.so)
void __fastcall CResponseFileParser::ParseResponse_DisplayLast(
        CResponseFileParser *const this,
        ParserResponse *const newResponse,
        ResponseGroup *const group,
        ResponseParams *rp)
{
  *(newResponse + 81) |= 0x80u;
  *(group + 19) |= 4u;
}


// CResponseFileParser::ParseResponse_Fire  (line 330, @0x00000000031047c0, libserver.so)  // inlines: ParseToken, atof
// calls: IResponseEngineEmulator::Get, ResponseCopyString, strtod, CResponseFileParser::ResponseWarning
// strings: "FIRE token in response needs exactly three parameters."
void __fastcall CResponseFileParser::ParseResponse_Fire(
        CResponseFileParser *const this,
        ParserResponse *const newResponse,
        ResponseGroup *const group,
        ResponseParams *rp)
{
  CResponseFileParser::ScriptEntry *m_pMemory; // r14
  char *token; // r12
  IResponseEngineEmulator *v8; // rax
  CResponseFileParser::ScriptEntry *v9; // r14
  IResponseEngineEmulator *v10; // rax
  CResponseFileParser::ScriptEntry *v11; // r14
  IResponseEngineEmulator *v12; // rax
  __m128d v13; // xmm0

  if ( this->m_bUnget )
  {
    this->m_bUnget = 0;
    token = this->token;
  }
  else
  {
    if ( this->m_ScriptStack.m_Size <= 0 )
      goto LABEL_11;
    m_pMemory = this->m_ScriptStack.m_Memory.m_pMemory;
    token = this->token;
    v8 = IResponseEngineEmulator::Get();
    m_pMemory->currenttoken = (**v8)(v8, this->m_ScriptStack.m_Memory.m_pMemory->currenttoken, this->token, 1204);
    ++this->m_ScriptStack.m_Memory.m_pMemory->tokencount;
    if ( this->m_ScriptStack.m_Memory.m_pMemory->currenttoken == 0 )
      goto LABEL_11;
  }
  newResponse->m_followup.followup_entityiotarget = ResponseCopyString(token);
  if ( this->m_bUnget )
  {
    this->m_bUnget = 0;
  }
  else
  {
    group = this->m_ScriptStack.m_Size;
    if ( group <= 0 )
      goto LABEL_11;
    v9 = this->m_ScriptStack.m_Memory.m_pMemory;
    v10 = IResponseEngineEmulator::Get();
    v9->currenttoken = (**v10)(v10, this->m_ScriptStack.m_Memory.m_pMemory->currenttoken, token, 1204);
    ++this->m_ScriptStack.m_Memory.m_pMemory->tokencount;
    if ( this->m_ScriptStack.m_Memory.m_pMemory->currenttoken == 0 )
      goto LABEL_11;
  }
  newResponse->m_followup.followup_entityioinput = ResponseCopyString(token);
  if ( this->m_bUnget )
  {
    this->m_bUnget = 0;
LABEL_10:
    v13.m128d_f64[0] = strtod(token, 0);
    newResponse->m_followup.followup_entityiodelay = _mm_movedup_pd(v13).m128d_f64[0];
    return;
  }
  if ( this->m_ScriptStack.m_Size > 0 )
  {
    v11 = this->m_ScriptStack.m_Memory.m_pMemory;
    v12 = IResponseEngineEmulator::Get();
    v11->currenttoken = (**v12)(v12, this->m_ScriptStack.m_Memory.m_pMemory->currenttoken, token, 1204);
    ++this->m_ScriptStack.m_Memory.m_pMemory->tokencount;
    if ( this->m_ScriptStack.m_Memory.m_pMemory->currenttoken != 0 )
      goto LABEL_10;
  }
LABEL_11:
  CResponseFileParser::ResponseWarning(this, "FIRE token in response needs exactly three parameters.", group);
}


// CResponseFileParser::ParseResponse_Then  (line 362, @0x0000000003104960, libserver.so)  // inlines: ParseToken, TokenWaiting, V_isalnum, V_strncat<int>, atof
// calls: IResponseEngineEmulator::Get, CResponseFileParser::ResponseWarning, ResponseCopyString, CResponseFileParser::ParseToken, strtod, _V_strncat, CResponseFileParser::TokenWaiting, __stack_chk_fail
// strings: "THEN token in response lacked any further info.\n", "THEN token in response had a target '%s', but lacked any further info.\n", "THEN token in response lacked contexts.\n"
void __fastcall CResponseFileParser::ParseResponse_Then(
        CResponseFileParser *const this,
        ParserResponse *const newResponse,
        ResponseGroup *const group,
        ResponseParams *rp)
{
  CResponseFileParser::ScriptEntry *m_pMemory; // r13
  char *token; // r12
  IResponseEngineEmulator *v8; // rax
  const char *followup_target; // rax
  CResponseFileParser::ScriptEntry *v10; // r13
  IResponseEngineEmulator *v11; // rax
  int m_Size; // eax
  const char *currenttoken; // rdx
  char v14; // al
  unsigned int v15; // ecx
  __m128d v16; // xmm0
  CResponseFileParser::ScriptEntry *v17; // r15
  IResponseEngineEmulator *v18; // rax
  char buf[4104]; // [rsp+0h] [rbp-1040h] BYREF
  unsigned __int64 v20; // [rsp+1008h] [rbp-38h]

  v20 = __readfsqword(0x28u);
  if ( this->m_bUnget )
  {
    this->m_bUnget = 0;
    token = this->token;
  }
  else if ( this->m_ScriptStack.m_Size <= 0
         || (m_pMemory = this->m_ScriptStack.m_Memory.m_pMemory,
             token = this->token,
             v8 = IResponseEngineEmulator::Get(),
             m_pMemory->currenttoken = (**v8)(
                                         v8,
                                         this->m_ScriptStack.m_Memory.m_pMemory->currenttoken,
                                         this->token,
                                         1204),
             ++this->m_ScriptStack.m_Memory.m_pMemory->tokencount,
             this->m_ScriptStack.m_Memory.m_pMemory->currenttoken == 0) )
  {
    CResponseFileParser::ResponseWarning(this, "THEN token in response lacked any further info.\n", group, rp);
    return;
  }
  followup_target = ResponseCopyString(token);
  newResponse->m_followup.followup_target = followup_target;
  if ( this->m_bUnget )
  {
    this->m_bUnget = 0;
  }
  else
  {
    if ( this->m_ScriptStack.m_Size <= 0 )
    {
LABEL_10:
      CResponseFileParser::ResponseWarning(
        this,
        "THEN token in response had a target '%s', but lacked any further info.\n",
        followup_target);
      return;
    }
    v10 = this->m_ScriptStack.m_Memory.m_pMemory;
    v11 = IResponseEngineEmulator::Get();
    v10->currenttoken = (**v11)(v11, this->m_ScriptStack.m_Memory.m_pMemory->currenttoken, token, 1204);
    ++this->m_ScriptStack.m_Memory.m_pMemory->tokencount;
    if ( this->m_ScriptStack.m_Memory.m_pMemory->currenttoken == 0 )
    {
      followup_target = newResponse->m_followup.followup_target;
      goto LABEL_10;
    }
  }
  newResponse->m_followup.followup_concept = ResponseCopyString(token);
  if ( CResponseFileParser::ParseToken(this) )
  {
    m_Size = this->m_ScriptStack.m_Size;
    buf[0] = 0;
    while ( m_Size > 0 )
    {
      currenttoken = this->m_ScriptStack.m_Memory.m_pMemory->currenttoken;
      if ( currenttoken == 0 )
        CResponseFileParser::TokenWaiting(this);
      v14 = *currenttoken;
      if ( *currenttoken == 10 || v14 == 0 )
        break;
      while ( v14 != 47 )
      {
        v15 = v14 - 9;
        if ( v15 > 0x17 || ((1LL << v15) & 0x80001F) == 0 || ((v14 & 0xDF) - 65) <= 0x19u || (v14 - 48) <= 9u )
          goto LABEL_27;
        v14 = *++currenttoken;
        if ( *currenttoken == 10 || v14 == 0 )
          goto LABEL_25;
      }
      if ( currenttoken[1] == 47 )
        break;
LABEL_27:
      _V_strncat(buf, token, 4096, 0xFFFFFFFFLL);
      if ( this->m_bUnget )
      {
        this->m_bUnget = 0;
        m_Size = this->m_ScriptStack.m_Size;
      }
      else
      {
        m_Size = this->m_ScriptStack.m_Size;
        if ( m_Size > 0 )
        {
          v17 = this->m_ScriptStack.m_Memory.m_pMemory;
          v18 = IResponseEngineEmulator::Get();
          v17->currenttoken = (**v18)(v18, this->m_ScriptStack.m_Memory.m_pMemory->currenttoken, token, 1204);
          ++this->m_ScriptStack.m_Memory.m_pMemory->tokencount;
          m_Size = this->m_ScriptStack.m_Size;
        }
      }
    }
LABEL_25:
    newResponse->m_followup.followup_contexts = ResponseCopyString(buf);
    v16.m128d_f64[0] = strtod(token, 0);
    newResponse->m_followup.followup_delay = _mm_movedup_pd(v16).m128d_f64[0];
  }
  else
  {
    CResponseFileParser::ResponseWarning(this, "THEN token in response lacked contexts.\n");
  }
}


// CResponseFileParser::ParseOneResponse  (line 418, @0x0000000003104cc0, libserver.so)  // inlines: AddToTail, AddToTailGetPtr, Base, ComputeResponseType, Construct<ParserResponse>, Destruct<ParserResponse>, Element, EnsureCapacity, ParseToken, SetFloat, TokenWaiting, V_isalnum, operator[]
// calls: ParserResponse::ParserResponse, ParserResponse::operator=, ParserResponse::~ParserResponse, CResponseFileParser::ParseToken, ResponseCopyString, IResponseEngineEmulator::Get, HashStringConventional, CResponseFileParser::DispatchParseResponse, CResponseFileParser::ResponseWarning, CUtlLeanVectorImpl<CUtlLeanVectorBase<ParserResponse, short int>, ParserResponse, short int>::AddToTailGetPtr, CResponseFileParser::TokenWaiting
// callers: CResponseFileParser::ParseResponseGroup_Start, CResponseFileParser::ParseResponse
// strings: "response entry '%s' with unknown command '%s'\n", "response entry '%s' with unknown response type '%s'\n"
void __fastcall CResponseFileParser::ParseOneResponse(
        CResponseFileParser *const this,
        const char *responseGroupName,
        ResponseGroup *const group,
        ResponseParams *defaultParams)
{
  CResponseFileParser *v4; // rbx
  __int16 m_nAllocated; // r14
  int v7; // ecx
  int v8; // eax
  CUtlLeanVectorBase<ParserResponse,short int>::IndexType_t v9; // ax
  __int16 v10; // r13
  __int64 v11; // r15
  ParserResponse *v12; // rax
  ParserResponse *v13; // r15
  CUtlLeanVectorBase<ParserResponse,short int>::IndexType_t v14; // ax
  CUtlLeanVectorBase<ParserResponse,short int>::ElemType_t *v15; // rax
  CUtlLeanVectorBase<ParserResponse,short int>::IndexType_t v16; // dx
  ParserResponse *v17; // rdi
  __int64 v18; // rax
  CUtlLeanVectorBase<ParserResponse,short int>::ElemType_t *v19; // rdx
  CUtlLeanVectorBase<ParserResponse,short int>::ElemType_t *v20; // r13
  char v21; // al
  char v22; // dl
  char v23; // al
  const char *currenttoken; // rdx
  char v25; // al
  unsigned int v26; // ecx
  IResponseEngineEmulator *v27; // rax
  unsigned int v28; // eax
  ResponseGroup *const v29; // rdx
  ResponseParams *const v30; // rcx
  CResponseFileParser *const v31; // rdi
  const char *v32; // rsi
  CUtlLeanVectorBase<ParserResponse,short int>::IndexType_t m_nCount; // [rsp+26h] [rbp-4Ah]
  CUtlLeanVectorBase<ParserResponse,short int>::ElemType_t *m_pElements; // [rsp+28h] [rbp-48h]
  CUtlLeanVectorBase<ParserResponse,short int>::ElemType_t *v37; // [rsp+30h] [rbp-40h]
  CResponseFileParser::ScriptEntry *m_pMemory; // [rsp+38h] [rbp-38h]

  m_nCount = group->group.m_nCount;
  if ( group->group.m_nCount == 0x7FFF )
  {
    CUtlLeanVectorImpl<CUtlLeanVectorBase<ParserResponse,short>,ParserResponse,short>::AddToTailGetPtr(this);
LABEL_65:
    CResponseFileParser::TokenWaiting(v4);
    CResponseFileParser::ParseResponseGroup_Start(v31, v32, v29, v30);
    return;
  }
  v4 = this;
  m_nAllocated = group->group.m_nAllocated;
  v7 = m_nCount + 1;
  v8 = m_nAllocated;
  if ( v7 > m_nAllocated )
  {
    while ( v7 > v8 )
    {
      if ( m_nAllocated <= 16382 )
      {
        if ( m_nAllocated <= 0 )
        {
          m_nAllocated = 1;
          v8 = 1;
        }
        else
        {
          m_nAllocated *= 2;
          v8 = m_nAllocated;
        }
      }
      else
      {
        m_nAllocated = 0x7FFF;
        v8 = 0x7FFF;
      }
    }
    v37 = (**g_pMemAlloc)(g_pMemAlloc, 90LL * m_nAllocated);
    if ( group->group.m_nAllocated != 0 )
      m_pElements = group->group.m_pElements;
    else
      m_pElements = 0;
    v9 = group->group.m_nCount;
    if ( m_nAllocated <= group->group.m_nCount )
      v9 = m_nAllocated;
    v10 = 0;
    if ( v9 > 0 )
    {
      do
      {
        v11 = v10;
        v12 = &v37[v11];
        if ( &v37[v11] != 0 )
        {
          ParserResponse::ParserResponse(&v37[v11]);
          v12 = &v37[v11];
        }
        v13 = &m_pElements[v11];
        ++v10;
        ParserResponse::operator=(v12, v13);
        ParserResponse::~ParserResponse(v13);
        v14 = group->group.m_nCount;
        if ( m_nAllocated <= group->group.m_nCount )
          v14 = m_nAllocated;
      }
      while ( v14 > v10 );
    }
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, group->group.m_pElements);
    group->group.m_nAllocated = m_nAllocated;
    group->group.m_pElements = v37;
  }
  if ( m_nAllocated != 0 )
    v15 = group->group.m_pElements;
  else
    v15 = 0;
  v16 = m_nAllocated;
  v17 = &v15[m_nCount];
  if ( v17 != 0 )
  {
    ParserResponse::ParserResponse(v17);
    v16 = group->group.m_nAllocated;
  }
  v18 = group->group.m_nCount;
  group->group.m_nCount = v18 + 1;
  if ( v16 != 0 )
    v19 = group->group.m_pElements;
  else
    v19 = 0;
  v20 = &v19[v18];
  v20->weight.m_storage.rawWord = 15360;
  if ( defaultParams != 0 )
  {
    *&v20->params.delay.start.m_storage.rawWord = *&defaultParams->delay.start.m_storage.rawWord;
    *&v20->params.weapondelay.start.m_storage.rawWord = *&defaultParams->weapondelay.start.m_storage.rawWord;
    *&v20->params.odds = *&defaultParams->odds;
    *(&v20->params.m_pFollowup + 3) = *(&defaultParams->m_pFollowup + 3);
    HIBYTE(v20->params.m_pFollowup) = HIBYTE(defaultParams->m_pFollowup);
  }
  v21 = v4->token[0];
  if ( v21 == 112 )
  {
    v22 = 5;
    goto LABEL_33;
  }
  if ( v21 <= 112 )
  {
    v22 = 6;
    if ( v21 == 101 )
      goto LABEL_33;
    goto LABEL_58;
  }
  v22 = 4;
  if ( v21 != 114 )
  {
    if ( v21 != 115 )
    {
LABEL_58:
      v22 = 0;
      goto LABEL_33;
    }
    v23 = v4->token[1];
    v22 = 2;
    if ( v23 != 101 )
    {
      v22 = 1;
      if ( v23 != 112 )
        v22 = 3 * (v23 == 99);
    }
  }
LABEL_33:
  *(v20 + 81) = v22 | *(v20 + 81) & 0xC0;
  if ( (v22 & 0xF) != 0 )
  {
    CResponseFileParser::ParseToken(v4);
    v20->value = ResponseCopyString(v4->token);
    while ( v4->m_ScriptStack.m_Size > 0 )
    {
      currenttoken = v4->m_ScriptStack.m_Memory.m_pMemory->currenttoken;
      if ( currenttoken == 0 )
        goto LABEL_65;
      v25 = *currenttoken;
      if ( *currenttoken == 10 || v25 == 0 )
        break;
      while ( v25 != 47 )
      {
        v26 = v25 - 9;
        if ( v26 > 0x17 || ((1LL << v26) & 0x80001F) == 0 || ((v25 & 0xDF) - 65) <= 0x19u || (v25 - 48) <= 9u )
          goto LABEL_42;
        v25 = *++currenttoken;
        if ( *currenttoken == 10 || v25 == 0 )
          return;
      }
      if ( currenttoken[1] == 47 )
        return;
LABEL_42:
      if ( v4->m_bUnget )
      {
        v4->m_bUnget = 0;
      }
      else
      {
        m_pMemory = v4->m_ScriptStack.m_Memory.m_pMemory;
        v27 = IResponseEngineEmulator::Get();
        m_pMemory->currenttoken = (**v27)(v27, v4->m_ScriptStack.m_Memory.m_pMemory->currenttoken, v4->token, 1204);
        ++v4->m_ScriptStack.m_Memory.m_pMemory->tokencount;
      }
      v28 = HashStringConventional(v4->token);
      if ( !CResponseFileParser::DispatchParseResponse(
              v4,
              v4->token,
              v28,
              &v4->m_ResponseDispatch,
              v20,
              group,
              &v20->params) )
        CResponseFileParser::ResponseWarning(
          v4,
          "response entry '%s' with unknown command '%s'\n",
          responseGroupName,
          v4->token);
    }
  }
  else
  {
    CResponseFileParser::ResponseWarning(
      v4,
      "response entry '%s' with unknown response type '%s'\n",
      responseGroupName,
      v4->token);
  }
}


// CResponseFileParser::ParseResponseGroup_Start  (line 455, @0x00000000031050d0, libserver.so)  // inlines: ParseToken, SetNoRepeat, SetSequential
// calls: IResponseEngineEmulator::Get, V_stricmp_fast, CResponseFileParser::ParseOneResponse
// strings: "permitrepeats", "sequential"
void __fastcall CResponseFileParser::ParseResponseGroup_Start(
        CResponseFileParser *const this,
        const char *responseGroupName,
        ResponseGroup *const newGroup,
        ResponseParams *const groupResponseParams)
{
  char *token; // r12
  CResponseFileParser::ScriptEntry *m_pMemory; // r15
  IResponseEngineEmulator *v9; // rax

  token = this->token;
LABEL_2:
  if ( !this->m_bUnget )
  {
LABEL_3:
    if ( this->m_ScriptStack.m_Size > 0 )
    {
      m_pMemory = this->m_ScriptStack.m_Memory.m_pMemory;
      v9 = IResponseEngineEmulator::Get();
      m_pMemory->currenttoken = (**v9)(v9, this->m_ScriptStack.m_Memory.m_pMemory->currenttoken, token, 1204);
      ++this->m_ScriptStack.m_Memory.m_pMemory->tokencount;
    }
    goto LABEL_5;
  }
  while ( 1 )
  {
    this->m_bUnget = 0;
LABEL_5:
    if ( V_stricmp_fast(token, "}") == 0 )
      break;
    if ( V_stricmp_fast(token, "permitrepeats") != 0 )
    {
      if ( V_stricmp_fast(token, "sequential") != 0 )
      {
        if ( V_stricmp_fast(token, "norepeat") != 0 )
          CResponseFileParser::ParseOneResponse(this, responseGroupName, newGroup, 0);
        else
          *(newGroup + 19) |= 0x10u;
      }
      else
      {
        *(newGroup + 19) |= 8u;
      }
      goto LABEL_2;
    }
    *(newGroup + 19) &= ~1u;
    if ( !this->m_bUnget )
      goto LABEL_3;
  }
}


// CResponseFileParser::ParseResponseGroup_PreDelay  (line 483, @0x0000000003103550, libserver.so)  // inlines: ConvertFloatTo16bits, FromInterval, ParseToken, operator=
// calls: IResponseEngineEmulator::Get, ReadInterval
void __fastcall CResponseFileParser::ParseResponseGroup_PreDelay(
        CResponseFileParser *const this,
        const char *responseGroupName,
        ResponseGroup *const newGroup,
        ResponseParams *const groupResponseParams)
{
  char *token; // r13
  CResponseFileParser::ScriptEntry *m_pMemory; // r14
  IResponseEngineEmulator *v8; // rax
  float range; // rsi^4
  __m128i v10; // xmm1
  __m128i v11; // xmm0
  unsigned int v12; // eax
  unsigned int v13; // ecx
  int v14; // r8d
  float16::float16bits v15; // dx
  __int16 v16; // di
  int v17; // r8d
  int v18; // edi
  __m128i v19; // xmm1
  __m128i v20; // xmm0
  unsigned int v21; // eax
  unsigned int v22; // ecx
  int v23; // edi
  float16::float16bits v24; // dx
  __int16 v25; // si
  int v26; // edi
  int v27; // esi
  __int16 v28; // cx
  float16::float16bits v29; // dx
  interval_t Interval; // 0:xmm0_8.8

  if ( this->m_bUnget )
  {
    this->m_bUnget = 0;
    token = this->token;
  }
  else
  {
    token = this->token;
    if ( this->m_ScriptStack.m_Size > 0 )
    {
      m_pMemory = this->m_ScriptStack.m_Memory.m_pMemory;
      token = this->token;
      v8 = IResponseEngineEmulator::Get();
      m_pMemory->currenttoken = (**v8)(v8, this->m_ScriptStack.m_Memory.m_pMemory->currenttoken, this->token, 1204);
      ++this->m_ScriptStack.m_Memory.m_pMemory->tokencount;
    }
  }
  groupResponseParams->flags |= 0x100u;
  Interval = ReadInterval(token);
  range = Interval.range;
  if ( Interval.start > 65504.0 )
  {
    v11 = 0x477FE000u;
  }
  else
  {
    v10 = 0xC77FE000;
    *v10.m128i_i32 = fmaxf(-65504.0, Interval.start);
    v11 = v10;
  }
  v12 = _mm_cvtsi128_si32(v11);
  v13 = v12 >> 31 << 15;
  v14 = v12 & 0x7FFFFFFF;
  v15.rawWord = v12 >> 31 << 15;
  if ( (v12 & 0x7FFFFFFF) == 0 )
    goto LABEL_15;
  v16 = (_mm_cvtsi128_si32(v11) >> 16) & 0x7F80;
  if ( v16 != 0 )
  {
    if ( v14 == 2139095040 )
      goto LABEL_33;
    if ( v16 == 32640 && (v12 & 0x7FFFFF) != 0 )
      goto LABEL_15;
  }
  else
  {
    if ( (v12 & 0x7FFFFF) != 0 )
    {
LABEL_15:
      v15.rawWord = v12 >> 31 << 15;
      goto LABEL_16;
    }
    if ( v14 == 2139095040 )
      goto LABEL_33;
  }
  v17 = (v12 >> 23);
  v18 = v17 - 127;
  if ( v17 - 127 < -24 )
  {
    v15.rawWord = v12 >> 31 << 15;
    goto LABEL_12;
  }
  if ( v18 >= -14 )
  {
    if ( v18 <= 15 )
    {
      v15.rawWord = ((v12 & 0x7FFFFF) >> 13) | v13 | (((v18 + 15) & 0x1F) << 10);
      goto LABEL_16;
    }
LABEL_33:
    v15.rawWord = v13 | 0x7BFF;
    goto LABEL_16;
  }
LABEL_12:
  HIBYTE(v15.rawWord) &= 0x83u;
  if ( (113 - v17 - 1) <= 9 )
    v15.rawWord = ((1 << (10 - (113 - v17))) + ((v12 & 0x7FFFFF) >> (113 - v17 + 13))) & 0x3FF | v15.rawWord & 0xFC00;
LABEL_16:
  groupResponseParams->predelay.start.m_storage = v15;
  if ( range > 65504.0 )
  {
    v20 = 0x477FE000u;
  }
  else
  {
    v19 = 0xC77FE000;
    *v19.m128i_i32 = fmaxf(-65504.0, range);
    v20 = v19;
  }
  v21 = _mm_cvtsi128_si32(v20);
  v22 = v21 >> 31 << 15;
  v23 = v21 & 0x7FFFFFFF;
  v24.rawWord = v21 >> 31 << 15;
  if ( (v21 & 0x7FFFFFFF) == 0 )
    goto LABEL_27;
  v25 = (_mm_cvtsi128_si32(v20) >> 16) & 0x7F80;
  if ( v25 != 0 )
  {
    if ( v23 != 2139095040 )
    {
      if ( v25 == 32640 && (v21 & 0x7FFFFF) != 0 )
        goto LABEL_27;
      goto LABEL_22;
    }
LABEL_36:
    v28 = v22 | 0x3FF;
    LOBYTE(v29.rawWord) = v28;
    HIBYTE(v29.rawWord) = HIBYTE(v28) | 0x78;
    groupResponseParams->predelay.range.m_storage = v29;
    return;
  }
  if ( (v21 & 0x7FFFFF) != 0 )
  {
LABEL_27:
    v24.rawWord = v21 >> 31 << 15;
LABEL_28:
    groupResponseParams->predelay.range.m_storage = v24;
    return;
  }
  if ( v23 == 2139095040 )
    goto LABEL_36;
LABEL_22:
  v26 = (v21 >> 23);
  v27 = v26 - 127;
  if ( v26 - 127 < -24 )
  {
    v24.rawWord = v21 >> 31 << 15;
    goto LABEL_24;
  }
  if ( v27 < -14 )
  {
LABEL_24:
    HIBYTE(v24.rawWord) &= 0x83u;
    if ( (113 - v26 - 1) <= 9 )
      v24.rawWord = ((1 << (10 - (113 - v26))) + ((v21 & 0x7FFFFF) >> (113 - v26 + 13))) & 0x3FF | v24.rawWord & 0xFC00;
    goto LABEL_28;
  }
  if ( v27 > 15 )
    goto LABEL_36;
  groupResponseParams->predelay.range.m_storage.rawWord = ((v21 & 0x7FFFFF) >> 13) | v22 | (((v27 + 15) & 0x1F) << 10);
}


// CResponseFileParser::ParseResponseGroup_NoDelay  (line 490, @0x00000000031021d0, libserver.so)  // inlines: ParseToken, operator=
// calls: IResponseEngineEmulator::Get
void __fastcall CResponseFileParser::ParseResponseGroup_NoDelay(
        CResponseFileParser *const this,
        const char *responseGroupName,
        ResponseGroup *const newGroup,
        ResponseParams *const groupResponseParams)
{
  CResponseFileParser::ScriptEntry *m_pMemory; // r13
  IResponseEngineEmulator *v7; // rax

  if ( this->m_bUnget )
  {
    this->m_bUnget = 0;
  }
  else if ( this->m_ScriptStack.m_Size > 0 )
  {
    m_pMemory = this->m_ScriptStack.m_Memory.m_pMemory;
    v7 = IResponseEngineEmulator::Get();
    m_pMemory->currenttoken = (**v7)(v7, this->m_ScriptStack.m_Memory.m_pMemory->currenttoken, this->token, 1204);
    ++this->m_ScriptStack.m_Memory.m_pMemory->tokencount;
  }
  groupResponseParams->flags |= 1u;
  groupResponseParams->delay.start.m_storage.rawWord = 0;
  groupResponseParams->delay.range.m_storage.rawWord = 0;
}


// CResponseFileParser::ParseResponseGroup_DefaultDelay  (line 498, @0x0000000003102150, libserver.so)  // inlines: operator=
void __fastcall CResponseFileParser::ParseResponseGroup_DefaultDelay(
        CResponseFileParser *const this,
        const char *responseGroupName,
        ResponseGroup *const newGroup,
        ResponseParams *const groupResponseParams)
{
  groupResponseParams->flags |= 1u;
  groupResponseParams->delay.start.m_storage.rawWord = 16793;
  groupResponseParams->delay.range.m_storage.rawWord = 13926;
}


// CResponseFileParser::ParseResponseGroup_Delay  (line 505, @0x0000000003103f70, libserver.so)  // inlines: ConvertFloatTo16bits, FromInterval, ParseToken, operator=
// calls: IResponseEngineEmulator::Get, ReadInterval
void __fastcall CResponseFileParser::ParseResponseGroup_Delay(
        CResponseFileParser *const this,
        const char *responseGroupName,
        ResponseGroup *const newGroup,
        ResponseParams *const groupResponseParams)
{
  char *token; // r13
  CResponseFileParser::ScriptEntry *m_pMemory; // r14
  IResponseEngineEmulator *v8; // rax
  float range; // rsi^4
  __m128i v10; // xmm1
  __m128i v11; // xmm0
  unsigned int v12; // eax
  unsigned int v13; // ecx
  int v14; // r8d
  float16::float16bits v15; // dx
  __int16 v16; // di
  int v17; // r8d
  int v18; // edi
  __m128i v19; // xmm1
  __m128i v20; // xmm0
  unsigned int v21; // eax
  unsigned int v22; // ecx
  int v23; // edi
  float16::float16bits v24; // dx
  __int16 v25; // si
  int v26; // edi
  int v27; // esi
  __int16 v28; // cx
  float16::float16bits v29; // dx
  interval_t Interval; // 0:xmm0_8.8

  if ( this->m_bUnget )
  {
    this->m_bUnget = 0;
    token = this->token;
  }
  else
  {
    token = this->token;
    if ( this->m_ScriptStack.m_Size > 0 )
    {
      m_pMemory = this->m_ScriptStack.m_Memory.m_pMemory;
      token = this->token;
      v8 = IResponseEngineEmulator::Get();
      m_pMemory->currenttoken = (**v8)(v8, this->m_ScriptStack.m_Memory.m_pMemory->currenttoken, this->token, 1204);
      ++this->m_ScriptStack.m_Memory.m_pMemory->tokencount;
    }
  }
  groupResponseParams->flags |= 1u;
  Interval = ReadInterval(token);
  range = Interval.range;
  if ( Interval.start > 65504.0 )
  {
    v11 = 0x477FE000u;
  }
  else
  {
    v10 = 0xC77FE000;
    *v10.m128i_i32 = fmaxf(-65504.0, Interval.start);
    v11 = v10;
  }
  v12 = _mm_cvtsi128_si32(v11);
  v13 = v12 >> 31 << 15;
  v14 = v12 & 0x7FFFFFFF;
  v15.rawWord = v12 >> 31 << 15;
  if ( (v12 & 0x7FFFFFFF) == 0 )
    goto LABEL_15;
  v16 = (_mm_cvtsi128_si32(v11) >> 16) & 0x7F80;
  if ( v16 != 0 )
  {
    if ( v14 == 2139095040 )
      goto LABEL_33;
    if ( v16 == 32640 && (v12 & 0x7FFFFF) != 0 )
      goto LABEL_15;
  }
  else
  {
    if ( (v12 & 0x7FFFFF) != 0 )
    {
LABEL_15:
      v15.rawWord = v12 >> 31 << 15;
      goto LABEL_16;
    }
    if ( v14 == 2139095040 )
      goto LABEL_33;
  }
  v17 = (v12 >> 23);
  v18 = v17 - 127;
  if ( v17 - 127 < -24 )
  {
    v15.rawWord = v12 >> 31 << 15;
    goto LABEL_12;
  }
  if ( v18 >= -14 )
  {
    if ( v18 <= 15 )
    {
      v15.rawWord = ((v12 & 0x7FFFFF) >> 13) | v13 | (((v18 + 15) & 0x1F) << 10);
      goto LABEL_16;
    }
LABEL_33:
    v15.rawWord = v13 | 0x7BFF;
    goto LABEL_16;
  }
LABEL_12:
  HIBYTE(v15.rawWord) &= 0x83u;
  if ( (113 - v17 - 1) <= 9 )
    v15.rawWord = ((1 << (10 - (113 - v17))) + ((v12 & 0x7FFFFF) >> (113 - v17 + 13))) & 0x3FF | v15.rawWord & 0xFC00;
LABEL_16:
  groupResponseParams->delay.start.m_storage = v15;
  if ( range > 65504.0 )
  {
    v20 = 0x477FE000u;
  }
  else
  {
    v19 = 0xC77FE000;
    *v19.m128i_i32 = fmaxf(-65504.0, range);
    v20 = v19;
  }
  v21 = _mm_cvtsi128_si32(v20);
  v22 = v21 >> 31 << 15;
  v23 = v21 & 0x7FFFFFFF;
  v24.rawWord = v21 >> 31 << 15;
  if ( (v21 & 0x7FFFFFFF) == 0 )
    goto LABEL_27;
  v25 = (_mm_cvtsi128_si32(v20) >> 16) & 0x7F80;
  if ( v25 != 0 )
  {
    if ( v23 != 2139095040 )
    {
      if ( v25 == 32640 && (v21 & 0x7FFFFF) != 0 )
        goto LABEL_27;
      goto LABEL_22;
    }
LABEL_36:
    v28 = v22 | 0x3FF;
    LOBYTE(v29.rawWord) = v28;
    HIBYTE(v29.rawWord) = HIBYTE(v28) | 0x78;
    groupResponseParams->delay.range.m_storage = v29;
    return;
  }
  if ( (v21 & 0x7FFFFF) != 0 )
  {
LABEL_27:
    v24.rawWord = v21 >> 31 << 15;
LABEL_28:
    groupResponseParams->delay.range.m_storage = v24;
    return;
  }
  if ( v23 == 2139095040 )
    goto LABEL_36;
LABEL_22:
  v26 = (v21 >> 23);
  v27 = v26 - 127;
  if ( v26 - 127 < -24 )
  {
    v24.rawWord = v21 >> 31 << 15;
    goto LABEL_24;
  }
  if ( v27 < -14 )
  {
LABEL_24:
    HIBYTE(v24.rawWord) &= 0x83u;
    if ( (113 - v26 - 1) <= 9 )
      v24.rawWord = ((1 << (10 - (113 - v26))) + ((v21 & 0x7FFFFF) >> (113 - v26 + 13))) & 0x3FF | v24.rawWord & 0xFC00;
    goto LABEL_28;
  }
  if ( v27 > 15 )
    goto LABEL_36;
  groupResponseParams->delay.range.m_storage.rawWord = ((v21 & 0x7FFFFF) >> 13) | v22 | (((v27 + 15) & 0x1F) << 10);
}


// CResponseFileParser::ParseResponseGroup_SpeakOnce  (line 512, @0x0000000003101e40, libserver.so)
void __fastcall CResponseFileParser::ParseResponseGroup_SpeakOnce(
        CResponseFileParser *const this,
        const char *responseGroupName,
        ResponseGroup *const newGroup,
        ResponseParams *const groupResponseParams)
{
  groupResponseParams->flags |= 2u;
}


// CResponseFileParser::ParseResponseGroup_NoScene  (line 517, @0x0000000003101e50, libserver.so)
void __fastcall CResponseFileParser::ParseResponseGroup_NoScene(
        CResponseFileParser *const this,
        const char *responseGroupName,
        ResponseGroup *const newGroup,
        ResponseParams *const groupResponseParams)
{
  groupResponseParams->flags |= 0x20u;
}


// CResponseFileParser::ParseResponseGroup_StopOnNonIdle  (line 522, @0x0000000003101e60, libserver.so)
void __fastcall CResponseFileParser::ParseResponseGroup_StopOnNonIdle(
        CResponseFileParser *const this,
        const char *responseGroupName,
        ResponseGroup *const newGroup,
        ResponseParams *const groupResponseParams)
{
  groupResponseParams->flags |= 0x40u;
}


// CResponseFileParser::ParseResponseGroup_Odds  (line 527, @0x00000000031024f0, libserver.so)  // inlines: ParseToken, atoi
// calls: IResponseEngineEmulator::Get, strtol
void __fastcall CResponseFileParser::ParseResponseGroup_Odds(
        CResponseFileParser *const this,
        const char *responseGroupName,
        ResponseGroup *const newGroup,
        ResponseParams *const groupResponseParams)
{
  char *token; // r13
  CResponseFileParser::ScriptEntry *m_pMemory; // r14
  IResponseEngineEmulator *v8; // rax
  int v9; // eax
  __int16 v10; // dx
  int v11; // eax

  if ( this->m_bUnget )
  {
    this->m_bUnget = 0;
    token = this->token;
  }
  else
  {
    token = this->token;
    if ( this->m_ScriptStack.m_Size > 0 )
    {
      m_pMemory = this->m_ScriptStack.m_Memory.m_pMemory;
      token = this->token;
      v8 = IResponseEngineEmulator::Get();
      m_pMemory->currenttoken = (**v8)(v8, this->m_ScriptStack.m_Memory.m_pMemory->currenttoken, this->token, 1204);
      ++this->m_ScriptStack.m_Memory.m_pMemory->tokencount;
    }
  }
  groupResponseParams->flags |= 4u;
  v9 = strtol(token, 0, 10);
  v10 = 100;
  if ( v9 > 100 || (v11 = strtol(token, 0, 10), v10 = 0, v11 < 0) )
    groupResponseParams->odds = v10;
  else
    groupResponseParams->odds = strtol(token, 0, 10);
}


// CResponseFileParser::ParseResponseGroup_RespeakDelay  (line 534, @0x00000000031038b0, libserver.so)  // inlines: ConvertFloatTo16bits, FromInterval, ParseToken, operator=
// calls: IResponseEngineEmulator::Get, ReadInterval
void __fastcall CResponseFileParser::ParseResponseGroup_RespeakDelay(
        CResponseFileParser *const this,
        const char *responseGroupName,
        ResponseGroup *const newGroup,
        ResponseParams *const groupResponseParams)
{
  char *token; // r13
  CResponseFileParser::ScriptEntry *m_pMemory; // r14
  IResponseEngineEmulator *v8; // rax
  float range; // rsi^4
  __m128i v10; // xmm1
  __m128i v11; // xmm0
  unsigned int v12; // eax
  unsigned int v13; // ecx
  int v14; // r8d
  float16::float16bits v15; // dx
  __int16 v16; // di
  int v17; // r8d
  int v18; // edi
  __m128i v19; // xmm1
  __m128i v20; // xmm0
  unsigned int v21; // eax
  unsigned int v22; // ecx
  int v23; // edi
  float16::float16bits v24; // dx
  __int16 v25; // si
  int v26; // edi
  int v27; // esi
  __int16 v28; // cx
  float16::float16bits v29; // dx
  interval_t Interval; // 0:xmm0_8.8

  if ( this->m_bUnget )
  {
    this->m_bUnget = 0;
    token = this->token;
  }
  else
  {
    token = this->token;
    if ( this->m_ScriptStack.m_Size > 0 )
    {
      m_pMemory = this->m_ScriptStack.m_Memory.m_pMemory;
      token = this->token;
      v8 = IResponseEngineEmulator::Get();
      m_pMemory->currenttoken = (**v8)(v8, this->m_ScriptStack.m_Memory.m_pMemory->currenttoken, this->token, 1204);
      ++this->m_ScriptStack.m_Memory.m_pMemory->tokencount;
    }
  }
  groupResponseParams->flags |= 8u;
  Interval = ReadInterval(token);
  range = Interval.range;
  if ( Interval.start > 65504.0 )
  {
    v11 = 0x477FE000u;
  }
  else
  {
    v10 = 0xC77FE000;
    *v10.m128i_i32 = fmaxf(-65504.0, Interval.start);
    v11 = v10;
  }
  v12 = _mm_cvtsi128_si32(v11);
  v13 = v12 >> 31 << 15;
  v14 = v12 & 0x7FFFFFFF;
  v15.rawWord = v12 >> 31 << 15;
  if ( (v12 & 0x7FFFFFFF) == 0 )
    goto LABEL_15;
  v16 = (_mm_cvtsi128_si32(v11) >> 16) & 0x7F80;
  if ( v16 != 0 )
  {
    if ( v14 == 2139095040 )
      goto LABEL_33;
    if ( v16 == 32640 && (v12 & 0x7FFFFF) != 0 )
      goto LABEL_15;
  }
  else
  {
    if ( (v12 & 0x7FFFFF) != 0 )
    {
LABEL_15:
      v15.rawWord = v12 >> 31 << 15;
      goto LABEL_16;
    }
    if ( v14 == 2139095040 )
      goto LABEL_33;
  }
  v17 = (v12 >> 23);
  v18 = v17 - 127;
  if ( v17 - 127 < -24 )
  {
    v15.rawWord = v12 >> 31 << 15;
    goto LABEL_12;
  }
  if ( v18 >= -14 )
  {
    if ( v18 <= 15 )
    {
      v15.rawWord = ((v12 & 0x7FFFFF) >> 13) | v13 | (((v18 + 15) & 0x1F) << 10);
      goto LABEL_16;
    }
LABEL_33:
    v15.rawWord = v13 | 0x7BFF;
    goto LABEL_16;
  }
LABEL_12:
  HIBYTE(v15.rawWord) &= 0x83u;
  if ( (113 - v17 - 1) <= 9 )
    v15.rawWord = ((1 << (10 - (113 - v17))) + ((v12 & 0x7FFFFF) >> (113 - v17 + 13))) & 0x3FF | v15.rawWord & 0xFC00;
LABEL_16:
  groupResponseParams->respeakdelay.start.m_storage = v15;
  if ( range > 65504.0 )
  {
    v20 = 0x477FE000u;
  }
  else
  {
    v19 = 0xC77FE000;
    *v19.m128i_i32 = fmaxf(-65504.0, range);
    v20 = v19;
  }
  v21 = _mm_cvtsi128_si32(v20);
  v22 = v21 >> 31 << 15;
  v23 = v21 & 0x7FFFFFFF;
  v24.rawWord = v21 >> 31 << 15;
  if ( (v21 & 0x7FFFFFFF) == 0 )
    goto LABEL_27;
  v25 = (_mm_cvtsi128_si32(v20) >> 16) & 0x7F80;
  if ( v25 != 0 )
  {
    if ( v23 != 2139095040 )
    {
      if ( v25 == 32640 && (v21 & 0x7FFFFF) != 0 )
        goto LABEL_27;
      goto LABEL_22;
    }
LABEL_36:
    v28 = v22 | 0x3FF;
    LOBYTE(v29.rawWord) = v28;
    HIBYTE(v29.rawWord) = HIBYTE(v28) | 0x78;
    groupResponseParams->respeakdelay.range.m_storage = v29;
    return;
  }
  if ( (v21 & 0x7FFFFF) != 0 )
  {
LABEL_27:
    v24.rawWord = v21 >> 31 << 15;
LABEL_28:
    groupResponseParams->respeakdelay.range.m_storage = v24;
    return;
  }
  if ( v23 == 2139095040 )
    goto LABEL_36;
LABEL_22:
  v26 = (v21 >> 23);
  v27 = v26 - 127;
  if ( v26 - 127 < -24 )
  {
    v24.rawWord = v21 >> 31 << 15;
    goto LABEL_24;
  }
  if ( v27 < -14 )
  {
LABEL_24:
    HIBYTE(v24.rawWord) &= 0x83u;
    if ( (113 - v26 - 1) <= 9 )
      v24.rawWord = ((1 << (10 - (113 - v26))) + ((v21 & 0x7FFFFF) >> (113 - v26 + 13))) & 0x3FF | v24.rawWord & 0xFC00;
    goto LABEL_28;
  }
  if ( v27 > 15 )
    goto LABEL_36;
  groupResponseParams->respeakdelay.range.m_storage.rawWord = ((v21 & 0x7FFFFF) >> 13)
                                                            | v22
                                                            | (((v27 + 15) & 0x1F) << 10);
}


// CResponseFileParser::ParseResponseGroup_WeaponDelay  (line 541, @0x0000000003102b30, libserver.so)  // inlines: ConvertFloatTo16bits, FromInterval, ParseToken, operator=
// calls: IResponseEngineEmulator::Get, ReadInterval
void __fastcall CResponseFileParser::ParseResponseGroup_WeaponDelay(
        CResponseFileParser *const this,
        const char *responseGroupName,
        ResponseGroup *const newGroup,
        ResponseParams *const groupResponseParams)
{
  char *token; // r13
  CResponseFileParser::ScriptEntry *m_pMemory; // r14
  IResponseEngineEmulator *v8; // rax
  float range; // rsi^4
  __m128i v10; // xmm1
  __m128i v11; // xmm0
  unsigned int v12; // eax
  unsigned int v13; // ecx
  int v14; // r8d
  float16::float16bits v15; // dx
  __int16 v16; // di
  int v17; // r8d
  int v18; // edi
  __m128i v19; // xmm1
  __m128i v20; // xmm0
  unsigned int v21; // eax
  unsigned int v22; // ecx
  int v23; // edi
  float16::float16bits v24; // dx
  __int16 v25; // si
  int v26; // edi
  int v27; // esi
  __int16 v28; // cx
  float16::float16bits v29; // dx
  interval_t Interval; // 0:xmm0_8.8

  if ( this->m_bUnget )
  {
    this->m_bUnget = 0;
    token = this->token;
  }
  else
  {
    token = this->token;
    if ( this->m_ScriptStack.m_Size > 0 )
    {
      m_pMemory = this->m_ScriptStack.m_Memory.m_pMemory;
      token = this->token;
      v8 = IResponseEngineEmulator::Get();
      m_pMemory->currenttoken = (**v8)(v8, this->m_ScriptStack.m_Memory.m_pMemory->currenttoken, this->token, 1204);
      ++this->m_ScriptStack.m_Memory.m_pMemory->tokencount;
    }
  }
  groupResponseParams->flags |= 0x80u;
  Interval = ReadInterval(token);
  range = Interval.range;
  if ( Interval.start > 65504.0 )
  {
    v11 = 0x477FE000u;
  }
  else
  {
    v10 = 0xC77FE000;
    *v10.m128i_i32 = fmaxf(-65504.0, Interval.start);
    v11 = v10;
  }
  v12 = _mm_cvtsi128_si32(v11);
  v13 = v12 >> 31 << 15;
  v14 = v12 & 0x7FFFFFFF;
  v15.rawWord = v12 >> 31 << 15;
  if ( (v12 & 0x7FFFFFFF) == 0 )
    goto LABEL_15;
  v16 = (_mm_cvtsi128_si32(v11) >> 16) & 0x7F80;
  if ( v16 != 0 )
  {
    if ( v14 == 2139095040 )
      goto LABEL_33;
    if ( v16 == 32640 && (v12 & 0x7FFFFF) != 0 )
      goto LABEL_15;
  }
  else
  {
    if ( (v12 & 0x7FFFFF) != 0 )
    {
LABEL_15:
      v15.rawWord = v12 >> 31 << 15;
      goto LABEL_16;
    }
    if ( v14 == 2139095040 )
      goto LABEL_33;
  }
  v17 = (v12 >> 23);
  v18 = v17 - 127;
  if ( v17 - 127 < -24 )
  {
    v15.rawWord = v12 >> 31 << 15;
    goto LABEL_12;
  }
  if ( v18 >= -14 )
  {
    if ( v18 <= 15 )
    {
      v15.rawWord = ((v12 & 0x7FFFFF) >> 13) | v13 | (((v18 + 15) & 0x1F) << 10);
      goto LABEL_16;
    }
LABEL_33:
    v15.rawWord = v13 | 0x7BFF;
    goto LABEL_16;
  }
LABEL_12:
  HIBYTE(v15.rawWord) &= 0x83u;
  if ( (113 - v17 - 1) <= 9 )
    v15.rawWord = ((1 << (10 - (113 - v17))) + ((v12 & 0x7FFFFF) >> (113 - v17 + 13))) & 0x3FF | v15.rawWord & 0xFC00;
LABEL_16:
  groupResponseParams->weapondelay.start.m_storage = v15;
  if ( range > 65504.0 )
  {
    v20 = 0x477FE000u;
  }
  else
  {
    v19 = 0xC77FE000;
    *v19.m128i_i32 = fmaxf(-65504.0, range);
    v20 = v19;
  }
  v21 = _mm_cvtsi128_si32(v20);
  v22 = v21 >> 31 << 15;
  v23 = v21 & 0x7FFFFFFF;
  v24.rawWord = v21 >> 31 << 15;
  if ( (v21 & 0x7FFFFFFF) == 0 )
    goto LABEL_27;
  v25 = (_mm_cvtsi128_si32(v20) >> 16) & 0x7F80;
  if ( v25 != 0 )
  {
    if ( v23 != 2139095040 )
    {
      if ( v25 == 32640 && (v21 & 0x7FFFFF) != 0 )
        goto LABEL_27;
      goto LABEL_22;
    }
LABEL_36:
    v28 = v22 | 0x3FF;
    LOBYTE(v29.rawWord) = v28;
    HIBYTE(v29.rawWord) = HIBYTE(v28) | 0x78;
    groupResponseParams->weapondelay.range.m_storage = v29;
    return;
  }
  if ( (v21 & 0x7FFFFF) != 0 )
  {
LABEL_27:
    v24.rawWord = v21 >> 31 << 15;
LABEL_28:
    groupResponseParams->weapondelay.range.m_storage = v24;
    return;
  }
  if ( v23 == 2139095040 )
    goto LABEL_36;
LABEL_22:
  v26 = (v21 >> 23);
  v27 = v26 - 127;
  if ( v26 - 127 < -24 )
  {
    v24.rawWord = v21 >> 31 << 15;
    goto LABEL_24;
  }
  if ( v27 < -14 )
  {
LABEL_24:
    HIBYTE(v24.rawWord) &= 0x83u;
    if ( (113 - v26 - 1) <= 9 )
      v24.rawWord = ((1 << (10 - (113 - v26))) + ((v21 & 0x7FFFFF) >> (113 - v26 + 13))) & 0x3FF | v24.rawWord & 0xFC00;
    goto LABEL_28;
  }
  if ( v27 > 15 )
    goto LABEL_36;
  groupResponseParams->weapondelay.range.m_storage.rawWord = ((v21 & 0x7FFFFF) >> 13)
                                                           | v22
                                                           | (((v27 + 15) & 0x1F) << 10);
}


// CResponseFileParser::ParseResponseGroup_Soundlevel  (line 548, @0x00000000031022f0, libserver.so)  // inlines: ParseToken
// calls: IResponseEngineEmulator::Get, TextToSoundLevel
void __fastcall CResponseFileParser::ParseResponseGroup_Soundlevel(
        CResponseFileParser *const this,
        const char *responseGroupName,
        ResponseGroup *const newGroup,
        ResponseParams *const groupResponseParams)
{
  char *token; // r13
  CResponseFileParser::ScriptEntry *m_pMemory; // r14
  IResponseEngineEmulator *v8; // rax

  if ( this->m_bUnget )
  {
    this->m_bUnget = 0;
    token = this->token;
  }
  else
  {
    token = this->token;
    if ( this->m_ScriptStack.m_Size > 0 )
    {
      m_pMemory = this->m_ScriptStack.m_Memory.m_pMemory;
      token = this->token;
      v8 = IResponseEngineEmulator::Get();
      m_pMemory->currenttoken = (**v8)(v8, this->m_ScriptStack.m_Memory.m_pMemory->currenttoken, this->token, 1204);
      ++this->m_ScriptStack.m_Memory.m_pMemory->tokencount;
    }
  }
  groupResponseParams->flags |= 0x10u;
  groupResponseParams->soundlevel = TextToSoundLevel(token);
}


// CResponseFileParser::ParseResponse  (line 558, @0x0000000003106ee0, libserver.so)  // inlines: CUtlLeanVector, CUtlLeanVectorBase, CUtlLeanVectorImpl, Element, FindInsertionPosition, Insert, InsertAt, IsRootCommand, LeftChild, MemAlloc_StrDupFunc, Node_t, ParseToken, ResponseGroup, ResponseParams, RightChild, Unget, V_strncpy<long unsigned int>, operator(), operator=, operator[], strcpy, ~CUtlLeanVector, ~CUtlLeanVectorBase, ~CUtlLeanVectorImpl, ~Node_t, ~ResponseGroup
// calls: CResponseFileParser::ParseToken, _V_strncpy, strcpy, CUtlRBTree<CUtlMap<char const*, ResponseGroup, short int, bool (*)(char const* const&, char const* const&)>::Node_t, short int, CUtlMap<char const*, ResponseGroup, short int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, ResponseGroup, short int, bool (*)(char const* const&, char const* const&)>::Node_t, short int>, short int> >::NewNode, CUtlRBTree<CUtlMap<char const*, ResponseGroup, short int, bool (*)(char const* const&, char const* const&)>::Node_t, short int, CUtlMap<char const*, ResponseGroup, short int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, ResponseGroup, short int, bool (*)(char const* const&, char const* const&)>::Node_t, short int>, short int> >::LinkToParent, CUtlLeanVectorBase<ParserResponse, short int>::Purge, IResponseEngineEmulator::Get, HashStringConventional, CUtlRBTree<unsigned int, short unsigned int, bool (*)(unsigned int const&, unsigned int const&), CUtlMemory<UtlRBTreeNode_t<unsigned int, short unsigned int>, short unsigned int> >::Find, CResponseFileParser::DispatchParseResponseGroup, CResponseFileParser::ParseOneResponse, _Unwind_Resume (13 total)
void __fastcall CResponseFileParser::ParseResponse(CResponseFileParser *const this)
{
  char *token; // r12
  CResponseSystem *m_owner; // r14
  char *v4; // rax
  bool v5; // r15
  __int16 m_Right; // ax
  bool v7; // zf
  UtlRBTreeNode_t<CUtlMap<char const*,ResponseGroup,short int,bool (*)(char const* const&,char const* const&)>::Node_t,short int> *m_pMemory; // rax
  __int16 v9; // ax
  __int16 v10; // dx
  CResponseFileParser::ScriptEntry *v11; // r15
  IResponseEngineEmulator *v12; // rax
  unsigned int v13; // r15d
  CUtlMap<char const*,ResponseGroup,short int,bool (*)(char const* const&,char const* const&)>::ElemType_t *newGroup; // [rsp+18h] [rbp-198h]
  __int16 m_Root; // [rsp+20h] [rbp-190h]
  __int16 v16; // [rsp+20h] [rbp-190h]
  ResponseParams groupResponseParams; // [rsp+30h] [rbp-180h] BYREF
  CUtlMap<char const*,ResponseGroup,short int,bool (*)(char const* const&,char const* const&)>::Node_t pCopyFrom; // [rsp+50h] [rbp-160h] BYREF
  char responseGroupName[264]; // [rsp+70h] [rbp-140h] BYREF
  unsigned __int64 v20; // [rsp+178h] [rbp-38h]

  groupResponseParams.odds = 100;
  groupResponseParams.flags = 0;
  groupResponseParams.delay.start.m_storage.rawWord = 0;
  groupResponseParams.delay.range.m_storage.rawWord = 0;
  groupResponseParams.respeakdelay.start.m_storage.rawWord = 0;
  groupResponseParams.respeakdelay.range.m_storage.rawWord = 0;
  groupResponseParams.weapondelay.start.m_storage.rawWord = 0;
  token = this->token;
  v20 = __readfsqword(0x28u);
  groupResponseParams.predelay.start.m_storage.rawWord = 0;
  groupResponseParams.predelay.range.m_storage.rawWord = 0;
  groupResponseParams.weapondelay.range.m_storage.rawWord = 0;
  groupResponseParams.soundlevel = 0;
  groupResponseParams.m_pFollowup = 0;
  CResponseFileParser::ParseToken(this);
  _V_strncpy(responseGroupName, token, 256);
  m_owner = this->m_owner;
  v4 = (**g_pMemAlloc)(g_pMemAlloc, strlen(responseGroupName) + 1);
  pCopyFrom.elem.group.m_nCount = 0;
  pCopyFrom.elem.group.m_nAllocated = 0;
  pCopyFrom.elem.group.m_pElements = 0;
  pCopyFrom.elem.m_bEnabled = 1;
  pCopyFrom.elem.m_nCurrentIndex = 0;
  pCopyFrom.elem.m_nDepletionCount = 1;
  *(&pCopyFrom.elem + 19) = *(&pCopyFrom.elem + 19) & 0xE0 | 1;
  pCopyFrom.key = strcpy(v4, responseGroupName);
  m_Root = m_owner->m_Responses.m_Elements.m_Tree.m_Root;
  if ( m_Root != -1 )
  {
    while ( 1 )
    {
      v7 = !m_owner->m_Responses.m_Elements.m_Tree.m_LessFunc.m_LessFunc(
              &pCopyFrom.key,
              &m_owner->m_Responses.m_Elements.m_Tree.m_Elements.m_pMemory[m_Root].m_Data.key);
      m_pMemory = m_owner->m_Responses.m_Elements.m_Tree.m_Elements.m_pMemory;
      if ( v7 )
      {
        m_Right = m_pMemory[m_Root].m_Right;
        v5 = 0;
        if ( m_Right == -1 )
          goto LABEL_7;
      }
      else
      {
        v5 = 1;
        m_Right = m_pMemory[m_Root].m_Left;
        if ( m_Right == -1 )
          goto LABEL_7;
      }
      m_Root = m_Right;
    }
  }
  v5 = 0;
LABEL_7:
  v9 = CUtlRBTree<CUtlMap<char const*,ResponseGroup,short,bool (*)(char const* const&,char const* const&)>::Node_t,short,CUtlMap<char const*,ResponseGroup,short,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,ResponseGroup,short,bool (*)(char const* const&,char const* const&)>::Node_t,short>,short>>::NewNode(
         &m_owner->m_Responses.m_Elements.m_Tree,
         &pCopyFrom);
  v10 = m_Root;
  v16 = v9;
  CUtlRBTree<CUtlMap<char const*,ResponseGroup,short,bool (*)(char const* const&,char const* const&)>::Node_t,short,CUtlMap<char const*,ResponseGroup,short,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,ResponseGroup,short,bool (*)(char const* const&,char const* const&)>::Node_t,short>,short>>::LinkToParent(
    &m_owner->m_Responses.m_Elements.m_Tree,
    v9,
    v10,
    v5);
  ++m_owner->m_Responses.m_Elements.m_Tree.m_NumElements;
  CUtlLeanVectorBase<ParserResponse,short>::Purge(&pCopyFrom.elem.group);
  newGroup = &this->m_owner->m_Responses.m_Elements.m_Tree.m_Elements.m_pMemory[v16].m_Data.elem;
  while ( 1 )
  {
    if ( this->m_bUnget )
    {
      this->m_bUnget = 0;
    }
    else if ( this->m_ScriptStack.m_Size > 0 )
    {
      v11 = this->m_ScriptStack.m_Memory.m_pMemory;
      v12 = IResponseEngineEmulator::Get();
      v11->currenttoken = (**v12)(v12, this->m_ScriptStack.m_Memory.m_pMemory->currenttoken, token, 1204);
      ++this->m_ScriptStack.m_Memory.m_pMemory->tokencount;
    }
    v13 = HashStringConventional(token);
    LODWORD(pCopyFrom.key) = v13;
    if ( CUtlRBTree<unsigned int,unsigned short,bool (*)(unsigned int const&,unsigned int const&),CUtlMemory<UtlRBTreeNode_t<unsigned int,unsigned short>,unsigned short>>::Find(
           &this->m_RootCommandHashes,
           &pCopyFrom) != 0xFFFF )
      break;
    if ( !CResponseFileParser::DispatchParseResponseGroup(
            this,
            token,
            v13,
            &this->m_ResponseGroupDispatch,
            responseGroupName,
            newGroup,
            &groupResponseParams) )
      CResponseFileParser::ParseOneResponse(this, responseGroupName, newGroup, 0);
  }
  this->m_bUnget = 1;
}


// CResponseFileParser::ParseOneCriterion  (line 596, @0x00000000031072a0, libserver.so)  // inlines: AddToTail, Element, Find, IsRootCommand, LeftChild, Node_t, ParseToken, RightChild, SetFloat, Unget, V_strncpy<long unsigned int>, atof, operator char const*, operator(), operator=, operator[], ~Node_t
// calls: CUtlMap<char const*, Criteria, short int, bool (*)(char const* const&, char const* const&)>::Find, __cxa_guard_acquire, HashStringConventional, CResponseFileParser::ResponseWarning, CResponseFileParser::TokenWaiting, CResponseFileParser::ParseToken, CUtlRBTree<unsigned int, short unsigned int, bool (*)(unsigned int const&, unsigned int const&), CUtlMemory<UtlRBTreeNode_t<unsigned int, short unsigned int>, short unsigned int> >::Find, V_stricmp_fast, IResponseEngineEmulator::Get, Criteria::Criteria, Criteria::~Criteria, CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<short unsigned int, 6u, short int>, short unsigned int, short int>::AddToTailGetPtr (27 total)
// callers: CResponseFileParser::ParseCriterion, CResponseFileParser::ParseRule
// strings: "Multiple definitions for criteria '%s' [%d]\n", "Skipping unrecongized subcriterion '%s' in '%s'\n"
// globals: `guard variable for'CResponseFileParser::ParseOneCriterion(char const*)::dummy, CResponseFileParser::ParseOneCriterion(char const*)::dummy, __dso_handle
int __fastcall CResponseFileParser::ParseOneCriterion(CResponseFileParser *const this, const char *criterionName)
{
  CResponseSystem *m_owner; // rax
  unsigned int v4; // eax
  char v5; // bl
  CResponseFileParser::ScriptEntry *m_pMemory; // rbx
  IResponseEngineEmulator *v7; // rax
  CResponseSystem *v8; // r13
  signed __int16 m_Root; // r12
  UtlRBTreeNode_t<CUtlMap<char const*,Criteria,short int,bool (*)(char const* const&,char const* const&)>::Node_t,short int> *v10; // rax
  __int64 v11; // rbx
  Criteria *v12; // rax
  CResponseSystem *v13; // rax
  const char *v14; // rax
  CResponseSystem *v15; // r13
  char *v16; // rbx
  signed __int16 m_Left; // r12
  UtlRBTreeNode_t<CUtlMap<char const*,Criteria,short int,bool (*)(char const* const&,char const* const&)>::Node_t,short int> *v18; // rax
  __int64 v19; // rbx
  float v21; // xmm1_4
  __int16 v22; // ax
  int idx; // [rsp+Ch] [rbp-2C4h]
  CUtlMap<char const*,Criteria,short int,bool (*)(char const* const&,char const* const&)>::ElemType_t *pNewCriterion; // [rsp+18h] [rbp-2B8h]
  __int64 v26; // [rsp+30h] [rbp-2A0h]
  char *i; // [rsp+38h] [rbp-298h]
  int ia; // [rsp+38h] [rbp-298h]
  UtlSymId_t v29; // [rsp+40h] [rbp-290h]
  unsigned int v30; // [rsp+44h] [rbp-28Ch] BYREF
  CUtlMap<char const*,Criteria,short int,bool (*)(char const* const&,char const* const&)>::KeyType_t v31; // [rsp+48h] [rbp-288h] BYREF
  char *token; // [rsp+50h] [rbp-280h] BYREF
  Criteria v33; // [rsp+58h] [rbp-278h] BYREF
  char key[256]; // [rsp+90h] [rbp-240h] BYREF
  char value[264]; // [rsp+190h] [rbp-140h] BYREF
  unsigned __int64 v36; // [rsp+298h] [rbp-38h]

  v36 = __readfsqword(0x28u);
  m_owner = this->m_owner;
  v31 = criterionName;
  if ( criterionName == 0 )
    goto LABEL_49;
  if ( CUtlMap<char const*,Criteria,short,bool (*)(char const* const&,char const* const&)>::Find(
         &m_owner->m_Criteria.m_Elements,
         &v31) == -1 )
  {
    m_owner = this->m_owner;
LABEL_49:
    v22 = CUtlDict<Criteria,short>::Insert(&m_owner->m_Criteria, criterionName);
    idx = v22;
    pNewCriterion = &this->m_owner->m_Criteria.m_Elements.m_Tree.m_Elements.m_pMemory[v22].m_Data.elem;
    goto LABEL_7;
  }
  if ( `guard variable for'CResponseFileParser::ParseOneCriterion(char const*)::dummy == 0
    && __cxa_guard_acquire(&`guard variable for'CResponseFileParser::ParseOneCriterion(char const*)::dummy) != 0 )
  {
    Criteria::Criteria(&CResponseFileParser::ParseOneCriterion(char const*)::dummy);
    __cxa_guard_release(&`guard variable for'CResponseFileParser::ParseOneCriterion(char const*)::dummy);
    __cxa_atexit(Criteria::~Criteria, &CResponseFileParser::ParseOneCriterion(char const*)::dummy, &_dso_handle);
  }
  v4 = HashStringConventional(criterionName);
  CResponseFileParser::ResponseWarning(this, "Multiple definitions for criteria '%s' [%d]\n", criterionName, v4);
  idx = -1;
  pNewCriterion = &CResponseFileParser::ParseOneCriterion(char const*)::dummy;
LABEL_7:
  v5 = 0;
LABEL_8:
  if ( !CResponseFileParser::TokenWaiting(this) )
    goto LABEL_25;
  do
  {
    do
    {
      CResponseFileParser::ParseToken(this);
      i = this->token;
      v30 = HashStringConventional(this->token);
      if ( CUtlRBTree<unsigned int,unsigned short,bool (*)(unsigned int const&,unsigned int const&),CUtlMemory<UtlRBTreeNode_t<unsigned int,unsigned short>,unsigned short>>::Find(
             &this->m_RootCommandHashes,
             &v30) != 0xFFFF )
      {
        v12 = pNewCriterion;
        this->m_bUnget = 1;
        if ( pNewCriterion->subcriteria.m_nCount > 0 )
          goto LABEL_27;
        goto LABEL_46;
      }
      if ( V_stricmp_fast(i, "{") != 0 )
      {
        if ( V_stricmp_fast(i, "required") != 0 )
        {
          if ( V_stricmp_fast(i, "weight") != 0 )
          {
            _V_strncpy(key, i, 256);
            CResponseFileParser::ParseToken(this);
            _V_strncpy(value, i, 256);
            V_strlower_fast(key);
            CResponseCriteriaSet::ComputeCriteriaSymbol(key);
            v5 = 1;
            pNewCriterion->nameSym.m_Id = v29;
            pNewCriterion->value = ResponseCopyString(value);
          }
          else
          {
            CResponseFileParser::ParseToken(this);
            strtod(i, 0);
            pNewCriterion->weight.m_storage.rawWord = float16::ConvertFloatTo16bits(v21);
          }
        }
        else
        {
          pNewCriterion->required = 1;
        }
        goto LABEL_8;
      }
LABEL_11:
      if ( !this->m_bUnget )
      {
LABEL_12:
        if ( this->m_ScriptStack.m_Size > 0 )
        {
          m_pMemory = this->m_ScriptStack.m_Memory.m_pMemory;
          v7 = IResponseEngineEmulator::Get();
          m_pMemory->currenttoken = (**v7)(v7, this->m_ScriptStack.m_Memory.m_pMemory->currenttoken, i, 1204);
          ++this->m_ScriptStack.m_Memory.m_pMemory->tokencount;
        }
        goto LABEL_14;
      }
      while ( 1 )
      {
        this->m_bUnget = 0;
LABEL_14:
        if ( V_stricmp_fast(i, "}") == 0 )
          break;
        v8 = this->m_owner;
        Criteria::Criteria(&v33);
        token = this->token;
        m_Root = v8->m_Criteria.m_Elements.m_Tree.m_Root;
        if ( m_Root != -1 )
        {
          v10 = v8->m_Criteria.m_Elements.m_Tree.m_Elements.m_pMemory;
          while ( 1 )
          {
            while ( 1 )
            {
              v11 = m_Root << 6;
              if ( !v8->m_Criteria.m_Elements.m_Tree.m_LessFunc.m_LessFunc(&token, (&v10->m_Data.key + v11)) )
                break;
              v10 = v8->m_Criteria.m_Elements.m_Tree.m_Elements.m_pMemory;
              m_Root = v10[m_Root].m_Left;
              if ( m_Root == -1 )
                goto LABEL_21;
            }
            if ( !v8->m_Criteria.m_Elements.m_Tree.m_LessFunc.m_LessFunc(
                    (&v8->m_Criteria.m_Elements.m_Tree.m_Elements.m_pMemory->m_Data.key + v11),
                    &token) )
              break;
            v10 = v8->m_Criteria.m_Elements.m_Tree.m_Elements.m_pMemory;
            m_Root = *(&v10->m_Right + v11);
            if ( m_Root == -1 )
              goto LABEL_21;
          }
          Criteria::~Criteria(&v33);
          *CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned short,(unsigned short)6,short>,unsigned short,short>::AddToTailGetPtr(&pNewCriterion->subcriteria) = m_Root;
          goto LABEL_11;
        }
LABEL_21:
        Criteria::~Criteria(&v33);
        CResponseFileParser::ResponseWarning(
          this,
          "Skipping unrecongized subcriterion '%s' in '%s'\n",
          i,
          criterionName);
        if ( !this->m_bUnget )
          goto LABEL_12;
      }
      v5 = 1;
    }
    while ( CResponseFileParser::TokenWaiting(this) );
LABEL_25:
    ;
  }
  while ( v5 == 0 );
  v12 = pNewCriterion;
  if ( pNewCriterion->subcriteria.m_nCount <= 0 )
LABEL_46:
    CResponseSystem::ComputeMatcher(this->m_owner, v12, &v12->matcher);
LABEL_27:
  v13 = this->m_owner;
  ia = v13->m_PendingCriterion.m_Size - 1;
  if ( ia >= 0 )
  {
    v26 = ia;
    while ( 1 )
    {
      v14 = CUtlString::Get(&v13->m_PendingCriterion.m_Memory.m_pMemory[v26].szToken);
      v15 = this->m_owner;
      v16 = v14;
      if ( v14 != 0 )
      {
        Criteria::Criteria(&v33);
        token = v16;
        m_Left = v15->m_Criteria.m_Elements.m_Tree.m_Root;
        if ( m_Left == -1 )
        {
LABEL_36:
          Criteria::~Criteria(&v33);
        }
        else
        {
          v18 = v15->m_Criteria.m_Elements.m_Tree.m_Elements.m_pMemory;
          while ( 1 )
          {
            while ( 1 )
            {
              v19 = m_Left << 6;
              if ( !v15->m_Criteria.m_Elements.m_Tree.m_LessFunc.m_LessFunc(&token, (&v18->m_Data.key + v19)) )
                break;
              v18 = v15->m_Criteria.m_Elements.m_Tree.m_Elements.m_pMemory;
              m_Left = v18[m_Left].m_Left;
              if ( m_Left == -1 )
                goto LABEL_36;
            }
            if ( !v15->m_Criteria.m_Elements.m_Tree.m_LessFunc.m_LessFunc(
                    (&v15->m_Criteria.m_Elements.m_Tree.m_Elements.m_pMemory->m_Data.key + v19),
                    &token) )
              break;
            v18 = v15->m_Criteria.m_Elements.m_Tree.m_Elements.m_pMemory;
            m_Left = *(&v18->m_Right + v19);
            if ( m_Left == -1 )
              goto LABEL_36;
          }
          Criteria::~Criteria(&v33);
          *CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned short,(unsigned short)6,short>,unsigned short,short>::AddToTailGetPtr(&this->m_owner->m_PendingCriterion.m_Memory.m_pMemory[v26].pRule->m_Criteria) = m_Left;
          CUtlVectorBase<CResponseSystem::PendingCriterionRule,CUtlMemory<CResponseSystem::PendingCriterionRule,int>>::Remove(
            &this->m_owner->m_PendingCriterion,
            ia);
        }
      }
      --ia;
      --v26;
      if ( ia == -1 )
        break;
      v13 = this->m_owner;
    }
  }
  return idx;
}


// CResponseFileParser::ParseCriterion  (line 705, @0x00000000031078e0, libserver.so)  // inlines: ParseToken, V_strncpy<long unsigned int>
// calls: IResponseEngineEmulator::Get, _V_strncpy, CResponseFileParser::ParseOneCriterion, __stack_chk_fail
void __fastcall CResponseFileParser::ParseCriterion(CResponseFileParser *const this)
{
  char *token; // r13
  CResponseFileParser::ScriptEntry *m_pMemory; // r12
  IResponseEngineEmulator *v4; // rax
  char criterionName[264]; // [rsp+0h] [rbp-130h] BYREF
  unsigned __int64 v6; // [rsp+108h] [rbp-28h]

  v6 = __readfsqword(0x28u);
  if ( this->m_bUnget )
  {
    this->m_bUnget = 0;
    token = this->token;
  }
  else
  {
    token = this->token;
    if ( this->m_ScriptStack.m_Size > 0 )
    {
      m_pMemory = this->m_ScriptStack.m_Memory.m_pMemory;
      token = this->token;
      v4 = IResponseEngineEmulator::Get();
      m_pMemory->currenttoken = (**v4)(v4, this->m_ScriptStack.m_Memory.m_pMemory->currenttoken, this->token, 1204);
      ++this->m_ScriptStack.m_Memory.m_pMemory->tokencount;
    }
  }
  _V_strncpy(criterionName, token, 256);
  CResponseFileParser::ParseOneCriterion(this, criterionName);
}


// CResponseFileParser::ParseEnumeration  (line 719, @0x00000000031079b0, libserver.so)  // inlines: Element, Find, LeftChild, RightChild, V_strlen, V_strncpy<long unsigned int>, atof, operator(), operator[]
// calls: CResponseFileParser::ParseToken, _V_strncpy, V_stricmp_fast, strlen, strtod, V_snprintf, V_strlower_fast, CUtlDict<CResponseSystem::Enumeration, short int>::Insert, CResponseFileParser::ResponseWarning, __stack_chk_fail
// strings: "[%s::%s]", "Expecting '{' in enumeration '%s', got '%s'\n", "Expecting more tokens in enumeration '%s'\n"
void __fastcall CResponseFileParser::ParseEnumeration(CResponseFileParser *const this)
{
  char *token; // r14
  CResponseSystem *m_owner; // rbx
  __int64 m_Root; // rax
  UtlRBTreeNode_t<CUtlMap<char const*,CResponseSystem::Enumeration,short int,bool (*)(char const* const&,char const* const&)>::Node_t,short int> *m_pMemory; // rcx
  __int64 v6; // r15
  __int64 v7; // r12
  double v8; // [rsp+20h] [rbp-370h]
  CResponseSystem::Enumeration newEnum; // [rsp+30h] [rbp-360h] BYREF
  _QWORD v11[2]; // [rsp+40h] [rbp-350h] BYREF
  char enumerationName[256]; // [rsp+50h] [rbp-340h] BYREF
  char key[256]; // [rsp+150h] [rbp-240h] BYREF
  char sz[264]; // [rsp+250h] [rbp-140h] BYREF
  unsigned __int64 v15; // [rsp+358h] [rbp-38h]

  token = this->token;
  v15 = __readfsqword(0x28u);
  CResponseFileParser::ParseToken(this);
  _V_strncpy(enumerationName, token, 256);
  CResponseFileParser::ParseToken(this);
  if ( V_stricmp_fast(token, "{") != 0 )
  {
    CResponseFileParser::ResponseWarning(this, "Expecting '{' in enumeration '%s', got '%s'\n", enumerationName, token);
  }
  else
  {
LABEL_2:
    while ( 1 )
    {
      CResponseFileParser::ParseToken(this);
      if ( V_stricmp_fast(token, "}") == 0 )
        break;
      if ( token == 0 || strlen(token) <= 0 )
      {
        CResponseFileParser::ResponseWarning(this, "Expecting more tokens in enumeration '%s'\n", enumerationName);
        return;
      }
      _V_strncpy(key, token, 256);
      CResponseFileParser::ParseToken(this);
      v8 = strtod(token, 0);
      V_snprintf(sz, 256, "[%s::%s]", enumerationName, key);
      V_strlower_fast(sz);
      m_owner = this->m_owner;
      v11[0] = sz;
      newEnum.value = _mm_movedup_pd(*&v8).m128d_f64[0];
      m_Root = m_owner->m_Enumerations.m_Elements.m_Tree.m_Root;
      if ( m_Root != 0xFFFF )
      {
        m_pMemory = m_owner->m_Enumerations.m_Elements.m_Tree.m_Elements.m_pMemory;
        do
        {
          while ( 1 )
          {
            v6 = m_Root;
            v7 = m_Root;
            if ( !m_owner->m_Enumerations.m_Elements.m_Tree.m_LessFunc.m_LessFunc(v11, &m_pMemory[m_Root].m_Data.key) )
              break;
            m_pMemory = m_owner->m_Enumerations.m_Elements.m_Tree.m_Elements.m_pMemory;
            m_Root = m_pMemory[v6].m_Left;
            if ( m_Root == 0xFFFF )
              goto LABEL_11;
          }
          if ( !m_owner->m_Enumerations.m_Elements.m_Tree.m_LessFunc.m_LessFunc(
                  &m_owner->m_Enumerations.m_Elements.m_Tree.m_Elements.m_pMemory[v7].m_Data.key,
                  v11) )
            goto LABEL_2;
          m_pMemory = m_owner->m_Enumerations.m_Elements.m_Tree.m_Elements.m_pMemory;
          m_Root = m_pMemory[v7].m_Right;
        }
        while ( m_Root != 0xFFFF );
LABEL_11:
        m_owner = this->m_owner;
      }
      CUtlDict<CResponseSystem::Enumeration,short>::Insert(&m_owner->m_Enumerations, sz, &newEnum);
    }
  }
}


// CResponseFileParser::ParseRule_MatchOnce  (line 770, @0x0000000003101e70, libserver.so)
void __fastcall CResponseFileParser::ParseRule_MatchOnce(CResponseFileParser *const this, Rule *const newRule)
{
  *(newRule + 41) |= 2u;
}


// CResponseFileParser::ParseRule_ApplyContextToWorld  (line 775, @0x0000000003101e80, libserver.so)
void __fastcall CResponseFileParser::ParseRule_ApplyContextToWorld(
        CResponseFileParser *const this,
        Rule *const newRule)
{
  *(newRule + 41) |= 1u;
}


// CResponseFileParser::ParseRule_ApplyContext  (line 780, @0x0000000003105210, libserver.so)  // inlines: GetContext, ParseToken
// calls: IResponseEngineEmulator::Get, CFmtStrN<1024, false>::CFmtStrN, Rule::SetContext, __stack_chk_fail
// strings: "%s,%s"
void __fastcall CResponseFileParser::ParseRule_ApplyContext(CResponseFileParser *const this, Rule *const newRule)
{
  char *token; // r13
  CResponseFileParser::ScriptEntry *m_pMemory; // r14
  IResponseEngineEmulator *v6; // rax
  const char *m_szContext; // rdx
  CFmtStrN<1024,false> newContext; // [rsp+0h] [rbp-440h] BYREF
  unsigned __int64 v9; // [rsp+418h] [rbp-28h]

  v9 = __readfsqword(0x28u);
  if ( this->m_bUnget )
  {
    this->m_bUnget = 0;
    token = this->token;
    m_szContext = newRule->m_szContext;
    if ( m_szContext != 0 )
    {
LABEL_5:
      CFmtStrN<1024,false>::CFmtStrN(&newContext, "%s,%s", m_szContext, token);
      Rule::SetContext(newRule, newContext.m_szBuf);
      return;
    }
  }
  else
  {
    token = this->token;
    if ( this->m_ScriptStack.m_Size > 0 )
    {
      m_pMemory = this->m_ScriptStack.m_Memory.m_pMemory;
      token = this->token;
      v6 = IResponseEngineEmulator::Get();
      m_pMemory->currenttoken = (**v6)(v6, this->m_ScriptStack.m_Memory.m_pMemory->currenttoken, this->token, 1204);
      ++this->m_ScriptStack.m_Memory.m_pMemory->tokencount;
    }
    m_szContext = newRule->m_szContext;
    if ( m_szContext != 0 )
      goto LABEL_5;
  }
  Rule::SetContext(newRule, token);
}


// CResponseFileParser::ParseRule_Response  (line 794, @0x0000000003105310, libserver.so)  // inlines: AddToTail, Base, CUtlLeanVector, CUtlLeanVectorBase, CUtlLeanVectorImpl, Destruct<ParserResponse>, Element, Find, LeftChild, Node_t, Purge, RemoveAll, ResponseGroup, RightChild, operator(), operator[], ~CUtlLeanVector, ~CUtlLeanVectorBase, ~CUtlLeanVectorImpl, ~Node_t, ~ResponseGroup
// calls: CResponseFileParser::TokenWaiting, CResponseFileParser::ParseToken, ParserResponse::~ParserResponse, CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<short unsigned int, 6u, short int>, short unsigned int, short int>::AddToTailGetPtr, CResponseFileParser::ResponseWarning, CUtlLeanVectorBase<ParserResponse, short int>::Purge, _Unwind_Resume
// strings: "No such response '%s' for rule '%s'\n"
void __fastcall CResponseFileParser::ParseRule_Response(CResponseFileParser *const this, Rule *const newRule)
{
  CResponseFileParser *v2; // rbx
  CResponseSystem *m_owner; // r13
  signed __int16 m_Root; // bx
  UtlRBTreeNode_t<CUtlMap<char const*,ResponseGroup,short int,bool (*)(char const* const&,char const* const&)>::Node_t,short int> *m_pMemory; // rdx
  __int64 v6; // r14
  __int16 v7; // ax
  __int64 v8; // r12
  int v9; // r13d
  __int64 v10; // rdi
  const char *m_pParseRuleName; // rcx
  CUtlLeanVectorFixedGrowable<short unsigned int,6u,short int> *p_m_Responses; // [rsp+8h] [rbp-68h]
  char *token; // [rsp+10h] [rbp-60h]
  char *v15; // [rsp+20h] [rbp-50h] BYREF
  __int16 v16; // [rsp+28h] [rbp-48h]
  __int16 v17; // [rsp+2Ah] [rbp-46h]
  __int64 v18; // [rsp+30h] [rbp-40h]
  char v19; // [rsp+38h] [rbp-38h]
  char v20; // [rsp+39h] [rbp-37h]
  char v21; // [rsp+3Ah] [rbp-36h]
  char v22; // [rsp+3Bh] [rbp-35h]

  token = this->token;
  p_m_Responses = &newRule->m_Responses;
  while ( 1 )
  {
    v2 = this;
    if ( !CResponseFileParser::TokenWaiting(this) )
      break;
    while ( 1 )
    {
      CResponseFileParser::ParseToken(v2);
      m_owner = v2->m_owner;
      if ( token == 0 )
        break;
      m_Root = m_owner->m_Responses.m_Elements.m_Tree.m_Root;
      v18 = 0;
      v16 = 0;
      v17 = 0;
      v19 = 1;
      v20 = 0;
      v21 = 1;
      v15 = token;
      v22 = v22 & 0xE0 | 1;
      if ( m_Root == -1 )
      {
        v7 = 0;
      }
      else
      {
        m_pMemory = m_owner->m_Responses.m_Elements.m_Tree.m_Elements.m_pMemory;
        do
        {
          while ( 1 )
          {
            v6 = m_Root;
            if ( !m_owner->m_Responses.m_Elements.m_Tree.m_LessFunc.m_LessFunc(&v15, &m_pMemory[v6].m_Data.key) )
              break;
            m_pMemory = m_owner->m_Responses.m_Elements.m_Tree.m_Elements.m_pMemory;
            m_Root = m_pMemory[m_Root].m_Left;
            if ( m_Root == -1 )
              goto LABEL_10;
          }
          if ( !m_owner->m_Responses.m_Elements.m_Tree.m_LessFunc.m_LessFunc(
                  &m_owner->m_Responses.m_Elements.m_Tree.m_Elements.m_pMemory[v6].m_Data.key,
                  &v15) )
            break;
          m_pMemory = m_owner->m_Responses.m_Elements.m_Tree.m_Elements.m_pMemory;
          m_Root = m_pMemory[v6].m_Right;
        }
        while ( m_Root != -1 );
LABEL_10:
        v7 = v17;
        if ( v17 != 0 )
          v8 = v18;
        else
          v8 = 0;
        if ( v16 > 0 )
        {
          v9 = 0;
          do
          {
            v10 = v9++;
            ParserResponse::~ParserResponse((v8 + 90 * v10));
          }
          while ( v9 < v16 );
          v7 = v17;
        }
      }
      v16 = 0;
      if ( v7 > 0 )
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v18);
      if ( m_Root == -1 )
        break;
      *CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned short,(unsigned short)6,short>,unsigned short,short>::AddToTailGetPtr(p_m_Responses) = m_Root;
      v2 = this;
      if ( !CResponseFileParser::TokenWaiting(this) )
        return;
    }
    m_pParseRuleName = this->m_pParseRuleName;
    this->m_bParseRuleValid = 0;
    CResponseFileParser::ResponseWarning(this, "No such response '%s' for rule '%s'\n", token, m_pParseRuleName);
  }
}


// CResponseFileParser::ParseRule_Criteria  (line 835, @0x0000000003105500, libserver.so)  // inlines: AddToTail, CUtlString, CopyConstruct<CResponseSystem::PendingCriterionRule>, Element, Find, GetCurrentScript, GrowMemory, LeftChild, Node_t, ParseToken, PendingCriterionRule, RightChild, operator(), operator[], ~CUtlString, ~Node_t, ~PendingCriterionRule
// calls: CResponseFileParser::GetCurrentScript, V_FixSlashes, CResponseFileParser::TokenWaiting, IResponseEngineEmulator::Get, Criteria::Criteria, Criteria::~Criteria, CUtlString::operator=, CUtlString::Get, CUtlString::Set, CUtlString::FreeMemoryBlock, CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<short unsigned int, 6u, short int>, short unsigned int, short int>::AddToTailGetPtr, CUtlMemory<CResponseSystem::PendingCriterionRule, int>::Grow (15 total)
void __fastcall CResponseFileParser::ParseRule_Criteria(CResponseFileParser *const this, Rule *const newRule)
{
  int m_Size; // edx
  CResponseFileParser::ScriptEntry *m_pMemory; // rbx
  IResponseEngineEmulator *v5; // rax
  CResponseSystem *m_owner; // r13
  signed __int16 m_Root; // r12
  UtlRBTreeNode_t<CUtlMap<char const*,Criteria,short int,bool (*)(char const* const&,char const* const&)>::Node_t,short int> *v8; // rax
  __int64 v9; // rbx
  CResponseSystem *v10; // rbx
  __int64 v11; // r12
  int v12; // eax
  CUtlString *p_szToken; // rbx
  const char *v14; // rax
  const char *v15; // rax
  const char *src; // [rsp+28h] [rbp-1A8h]
  CResponseSystem::PendingCriterionRule criterion; // [rsp+30h] [rbp-1A0h] BYREF
  const char *v19; // [rsp+50h] [rbp-180h] BYREF
  Criteria v20; // [rsp+58h] [rbp-178h] BYREF
  char scriptfile[264]; // [rsp+90h] [rbp-140h] BYREF
  unsigned __int64 v22; // [rsp+198h] [rbp-38h]

  v22 = __readfsqword(0x28u);
  m_Size = this->m_ScriptStack.m_Size;
  scriptfile[0] = 0;
  if ( m_Size > 0 )
    CResponseFileParser::GetCurrentScript(this, scriptfile, 0x104u);
  V_FixSlashes(scriptfile, 47);
LABEL_4:
  while ( CResponseFileParser::TokenWaiting(this) )
  {
    while ( 1 )
    {
      if ( this->m_bUnget )
      {
        this->m_bUnget = 0;
        src = this->token;
      }
      else if ( this->m_ScriptStack.m_Size <= 0 )
      {
        src = this->token;
      }
      else
      {
        m_pMemory = this->m_ScriptStack.m_Memory.m_pMemory;
        v5 = IResponseEngineEmulator::Get();
        src = this->token;
        m_pMemory->currenttoken = (**v5)(v5, this->m_ScriptStack.m_Memory.m_pMemory->currenttoken, this->token, 1204);
        ++this->m_ScriptStack.m_Memory.m_pMemory->tokencount;
      }
      m_owner = this->m_owner;
      Criteria::Criteria(&v20);
      m_Root = m_owner->m_Criteria.m_Elements.m_Tree.m_Root;
      v19 = src;
      if ( m_Root != -1 )
        break;
LABEL_14:
      Criteria::~Criteria(&v20);
      criterion.szToken.m_pString = 0;
      criterion.sScriptFile.m_pString = 0;
      CUtlString::operator=(&criterion.szToken, src);
      criterion.pRule = newRule;
      CUtlString::operator=(&criterion.sScriptFile, scriptfile);
      v10 = this->m_owner;
      v11 = v10->m_PendingCriterion.m_Size;
      v12 = v10->m_PendingCriterion.m_Size;
      if ( v11 == v10->m_PendingCriterion.m_Memory.m_nAllocationCount )
      {
        CUtlMemory<CResponseSystem::PendingCriterionRule,int>::Grow(&v10->m_PendingCriterion.m_Memory, 1);
        v12 = v10->m_PendingCriterion.m_Size;
      }
      v10->m_PendingCriterion.m_Size = v12 + 1;
      p_szToken = &v10->m_PendingCriterion.m_Memory.m_pMemory[v11].szToken;
      if ( p_szToken != 0 )
      {
        p_szToken->m_pString = 0;
        v14 = CUtlString::Get(&criterion.szToken);
        CUtlString::Set(p_szToken, v14);
        p_szToken[1].m_pString = 0;
        v15 = CUtlString::Get(&criterion.sScriptFile);
        CUtlString::Set(p_szToken + 1, v15);
        p_szToken[2].m_pString = criterion.pRule;
      }
      if ( criterion.sScriptFile.m_pString != 0 )
        CUtlString::FreeMemoryBlock(&criterion.sScriptFile);
      if ( criterion.szToken.m_pString == 0 )
        goto LABEL_4;
      CUtlString::FreeMemoryBlock(&criterion.szToken);
      if ( !CResponseFileParser::TokenWaiting(this) )
        return;
    }
    v8 = m_owner->m_Criteria.m_Elements.m_Tree.m_Elements.m_pMemory;
    while ( 1 )
    {
      while ( 1 )
      {
        v9 = m_Root << 6;
        if ( !m_owner->m_Criteria.m_Elements.m_Tree.m_LessFunc.m_LessFunc(&v19, (&v8->m_Data.key + v9)) )
          break;
        v8 = m_owner->m_Criteria.m_Elements.m_Tree.m_Elements.m_pMemory;
        m_Root = v8[m_Root].m_Left;
        if ( m_Root == -1 )
          goto LABEL_14;
      }
      if ( !m_owner->m_Criteria.m_Elements.m_Tree.m_LessFunc.m_LessFunc(
              (&m_owner->m_Criteria.m_Elements.m_Tree.m_Elements.m_pMemory->m_Data.key + v9),
              &v19) )
        break;
      v8 = m_owner->m_Criteria.m_Elements.m_Tree.m_Elements.m_pMemory;
      m_Root = *(&v8->m_Right + v9);
      if ( m_Root == -1 )
        goto LABEL_14;
    }
    Criteria::~Criteria(&v20);
    *CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned short,(unsigned short)6,short>,unsigned short,short>::AddToTailGetPtr(&newRule->m_Criteria) = m_Root;
  }
}


// CResponseFileParser::ParseRule  (line 873, @0x0000000003107c30, libserver.so)  // inlines: AddToTail, Element, FindInsertionPosition, Insert, InsertAt, LeftChild, ParseToken, RightChild, Unget, V_strlen, V_strncpy<long unsigned int>, operator(), operator[]
// calls: CResponseFileParser::ParseToken, _V_strncpy, V_stricmp_fast, operator new, Rule::Rule, IResponseEngineEmulator::Get, strlen, HashStringConventional, CResponseFileParser::DispatchParseRule, CResponseFileParser::ResponseWarning, ResponseRulePartition::GetDictForRule, ResponseCopyString (24 total)
// strings: "Expecting more tokens in rule '%s'\n", "Discarded rule %s\n", "Expecting '{' in rule '%s', got '%s'\n", "[%s%03i]"
// globals: CResponseFileParser::ParseRule(void)::instancedCriteria
void __fastcall CResponseFileParser::ParseRule(CResponseFileParser *const this)
{
  char *token; // rbx
  Rule *v3; // r13
  CResponseFileParser::ScriptEntry *m_pMemory; // r15
  IResponseEngineEmulator *v5; // rax
  unsigned int v6; // eax
  ResponseRulePartition::tRuleDict *DictForRule; // r12
  unsigned __int16 m_Root; // bx
  unsigned __int16 m_Left; // ax
  char v10; // dl
  bool v11; // zf
  UtlRBTreeNode_t<CUtlMap<unsigned int,char const*>::Node_t,short unsigned int> *v12; // rax
  bool v13; // r15
  unsigned __int16 v14; // ax
  unsigned __int16 v15; // bx
  int v16; // eax
  unsigned __int16 m_Right; // ax
  char v18; // dl
  UtlRBTreeNode_t<CUtlMap<unsigned int,Rule*,short unsigned int,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,short unsigned int> *v19; // rax
  unsigned __int16 v20; // ax
  CUtlMap<unsigned int,Rule*,short unsigned int,bool (*)(unsigned int const&,unsigned int const&)>::KeyType_t criterionName; // [rsp+8h] [rbp-468h]
  bool isLeft[4]; // [rsp+14h] [rbp-45Ch]
  CUtlMap<unsigned int,Rule*,short unsigned int,bool (*)(unsigned int const&,unsigned int const&)>::Node_t v23; // [rsp+20h] [rbp-450h] BYREF
  char ruleName[512]; // [rsp+30h] [rbp-440h] BYREF
  char sz[520]; // [rsp+230h] [rbp-240h] BYREF
  unsigned __int64 v26; // [rsp+438h] [rbp-38h]

  token = this->token;
  v26 = __readfsqword(0x28u);
  CResponseFileParser::ParseToken(this);
  _V_strncpy(ruleName, token, 512);
  CResponseFileParser::ParseToken(this);
  *isLeft = V_stricmp_fast(token, "{");
  if ( *isLeft != 0 )
  {
    CResponseFileParser::ResponseWarning(this, "Expecting '{' in rule '%s', got '%s'\n", ruleName, token);
    return;
  }
  v3 = operator new(0x2Au);
  Rule::Rule(v3);
  this->m_bParseRuleValid = 1;
  this->m_pParseRuleName = ruleName;
  while ( 1 )
  {
    if ( this->m_bUnget )
    {
      this->m_bUnget = 0;
    }
    else if ( this->m_ScriptStack.m_Size > 0 )
    {
      m_pMemory = this->m_ScriptStack.m_Memory.m_pMemory;
      v5 = IResponseEngineEmulator::Get();
      m_pMemory->currenttoken = (**v5)(v5, this->m_ScriptStack.m_Memory.m_pMemory->currenttoken, token, 1204);
      ++this->m_ScriptStack.m_Memory.m_pMemory->tokencount;
    }
    if ( V_stricmp_fast(token, "}") == 0 )
      break;
    if ( token == 0 || strlen(token) <= 0 )
    {
      CResponseFileParser::ResponseWarning(this, "Expecting more tokens in rule '%s'\n", ruleName);
      break;
    }
    v6 = HashStringConventional(token);
    if ( !CResponseFileParser::DispatchParseRule(this, token, v6, &this->m_RuleDispatch, v3) )
    {
      V_snprintf(sz, 512, "[%s%03i]", ruleName, ++CResponseFileParser::ParseRule(void)::instancedCriteria);
      this->m_bUnget = 1;
      v16 = CResponseFileParser::ParseOneCriterion(this, sz);
      if ( v16 != -1 )
        *CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned short,(unsigned short)6,short>,unsigned short,short>::AddToTailGetPtr(&v3->m_Criteria) = v16;
    }
  }
  if ( !this->m_bParseRuleValid )
  {
    DevMsg("Discarded rule %s\n", ruleName);
    if ( v3 != 0 )
    {
      Rule::~Rule(v3);
      operator delete(v3);
    }
    return;
  }
  DictForRule = ResponseRulePartition::GetDictForRule(&this->m_owner->m_RulePartitions, this->m_owner, v3);
  v23.elem = ResponseCopyString(ruleName);
  v23.key = HashStringConventional(v23.elem);
  m_Root = DictForRule->m_ReverseMap.m_Tree.m_Root;
  criterionName = v23.key;
  if ( m_Root == 0xFFFF )
  {
    v13 = 0;
    m_Root = -1;
    goto LABEL_20;
  }
  while ( 1 )
  {
    v11 = !DictForRule->m_ReverseMap.m_Tree.m_LessFunc.m_LessFunc(
             &v23.key,
             &DictForRule->m_ReverseMap.m_Tree.m_Elements.m_pMemory[m_Root].m_Data.key);
    v12 = DictForRule->m_ReverseMap.m_Tree.m_Elements.m_pMemory;
    if ( v11 )
      break;
    m_Left = v12[m_Root].m_Left;
    v10 = 1;
    if ( m_Left == 0xFFFF )
      goto LABEL_19;
LABEL_16:
    m_Root = m_Left;
  }
  m_Left = v12[m_Root].m_Right;
  v10 = 0;
  if ( m_Left != 0xFFFF )
    goto LABEL_16;
LABEL_19:
  v13 = v10;
LABEL_20:
  v14 = CUtlRBTree<CUtlMap<unsigned int,char const*,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short,CUtlMap<unsigned int,char const*,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,char const*,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>>::NewNode(
          &DictForRule->m_ReverseMap.m_Tree,
          &v23);
  CUtlRBTree<CUtlMap<unsigned int,char const*,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short,CUtlMap<unsigned int,char const*,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,char const*,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>>::LinkToParent(
    &DictForRule->m_ReverseMap.m_Tree,
    v14,
    m_Root,
    v13);
  ++DictForRule->m_ReverseMap.m_Tree.m_NumElements;
  v23.elem = v3;
  v23.key = criterionName;
  v15 = DictForRule->m_Tree.m_Root;
  if ( v15 == 0xFFFF )
  {
    v15 = -1;
    goto LABEL_33;
  }
  while ( 2 )
  {
    v11 = !DictForRule->m_Tree.m_LessFunc.m_LessFunc(
             &v23.key,
             &DictForRule->m_Tree.m_Elements.m_pMemory[v15].m_Data.key);
    v19 = DictForRule->m_Tree.m_Elements.m_pMemory;
    if ( !v11 )
    {
      m_Right = v19[v15].m_Left;
      v18 = 1;
      if ( m_Right == 0xFFFF )
        break;
      goto LABEL_29;
    }
    m_Right = v19[v15].m_Right;
    v18 = 0;
    if ( m_Right != 0xFFFF )
    {
LABEL_29:
      v15 = m_Right;
      continue;
    }
    break;
  }
  isLeft[0] = v18;
LABEL_33:
  v20 = CUtlRBTree<CUtlMap<unsigned int,Rule *,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short,CUtlMap<unsigned int,Rule *,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,Rule *,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>>::NewNode(
          &DictForRule->m_Tree,
          &v23);
  CUtlRBTree<CUtlMap<unsigned int,Rule *,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short,CUtlMap<unsigned int,Rule *,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,Rule *,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>>::LinkToParent(
    &DictForRule->m_Tree,
    v20,
    v15,
    isLeft[0]);
  ++DictForRule->m_Tree.m_NumElements;
}


// CResponseFileParser::BuildDispatchTables  (line 936, @0x0000000003106280, libserver.so)  // inlines: Element, FindInsertionPosition, Insert, InsertAt, LeftChild, RightChild, operator(), operator[]
// calls: HashStringConventional, CUtlRBTree<unsigned int, short unsigned int, bool (*)(unsigned int const&, unsigned int const&), CUtlMemory<UtlRBTreeNode_t<unsigned int, short unsigned int>, short unsigned int> >::Insert, CUtlMap<unsigned int, void (CResponseFileParser::*)(), short unsigned int, bool (*)(unsigned int const&, unsigned int const&)>::Insert, CUtlRBTree<CUtlMap<unsigned int, void (CResponseFileParser::*)()>::Node_t, short unsigned int, CUtlMap<unsigned int, void (CResponseFileParser::*)()>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, void (CResponseFileParser::*)()>::Node_t, short unsigned int>, short unsigned int> >::NewNode, CUtlRBTree<CUtlMap<unsigned int, void (CResponseFileParser::*)()>::Node_t, short unsigned int, CUtlMap<unsigned int, void (CResponseFileParser::*)()>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, void (CResponseFileParser::*)()>::Node_t, short unsigned int>, short unsigned int> >::LinkToParent, CUtlMap<unsigned int, void (CResponseFileParser::*)(Rule&), short unsigned int, bool (*)(unsigned int const&, unsigned int const&)>::Insert, CUtlRBTree<CUtlMap<unsigned int, void (CResponseFileParser::*)(Rule&)>::Node_t, short unsigned int, CUtlMap<unsigned int, void (CResponseFileParser::*)(Rule&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, void (CResponseFileParser::*)(Rule&)>::Node_t, short unsigned int>, short unsigned int> >::NewNode, CUtlRBTree<CUtlMap<unsigned int, void (CResponseFileParser::*)(Rule&)>::Node_t, short unsigned int, CUtlMap<unsigned int, void (CResponseFileParser::*)(Rule&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, void (CResponseFileParser::*)(Rule&)>::Node_t, short unsigned int>, short unsigned int> >::LinkToParent, CUtlMap<unsigned int, void (CResponseFileParser::*)(ParserResponse&, ResponseGroup&, ResponseParams*), short unsigned int, bool (*)(unsigned int const&, unsigned int const&)>::Insert, CUtlMap<unsigned int, void (CResponseFileParser::*)(char const*, ResponseGroup&, ResponseParams&), short unsigned int, bool (*)(unsigned int const&, unsigned int const&)>::Insert
// callers: CResponseFileParser::CResponseFileParser
// strings: "#include", "enumeration", "criterion", "matchonce", "applycontexttoworld", "applycontext" (18 total)
// globals: CResponseFileParser::ParseInclude(void), CResponseFileParser::ParseResponse(void), CResponseFileParser::ParseCriterion(void), CResponseFileParser::ParseRule(void), CResponseFileParser::ParseEnumeration(void), CResponseFileParser::ParseRule_MatchOnce(Rule &), CResponseFileParser::ParseRule_ApplyContextToWorld(Rule &), CResponseFileParser::ParseRule_ApplyContext(Rule &) (38 total)
void __fastcall CResponseFileParser::BuildDispatchTables(CResponseFileParser *const this)
{
  CUtlRBTree<unsigned int,short unsigned int,bool (*)(unsigned int const&,unsigned int const&),CUtlMemory<UtlRBTreeNode_t<unsigned int,short unsigned int>,short unsigned int> > *p_m_RootCommandHashes; // r12
  unsigned int v3; // eax
  unsigned int v4; // eax
  unsigned int v5; // eax
  CUtlMap<unsigned int,void (CResponseFileParser::*)(Rule&),short unsigned int,bool (*)(unsigned int const&,unsigned int const&)>::KeyType_t v6; // eax
  unsigned __int16 m_Root; // r15
  unsigned __int16 m_Right; // ax
  char v9; // cl
  bool v10; // zf
  UtlRBTreeNode_t<CUtlMap<unsigned int,void (CResponseFileParser::*)()>::Node_t,short unsigned int> *m_pMemory; // rax
  unsigned __int16 v12; // ax
  CUtlMap<unsigned int,void (CResponseFileParser::*)(Rule&),short unsigned int,bool (*)(unsigned int const&,unsigned int const&)>::KeyType_t v13; // eax
  unsigned __int16 v14; // r15
  bool v15; // r12
  unsigned __int16 m_Left; // ax
  char v17; // cl
  UtlRBTreeNode_t<CUtlMap<unsigned int,void (CResponseFileParser::*)()>::Node_t,short unsigned int> *v18; // rax
  unsigned __int16 v19; // ax
  unsigned int v20; // eax
  unsigned int v21; // eax
  unsigned int v22; // eax
  unsigned int v23; // eax
  unsigned int v24; // eax
  CUtlMap<unsigned int,void (CResponseFileParser::*)(Rule&),short unsigned int,bool (*)(unsigned int const&,unsigned int const&)>::KeyType_t v25; // eax
  unsigned __int16 v26; // r14
  char v27; // r12
  unsigned __int16 v28; // ax
  char v29; // cl
  UtlRBTreeNode_t<CUtlMap<unsigned int,void (CResponseFileParser::*)(Rule&)>::Node_t,short unsigned int> *v30; // rax
  unsigned __int16 v31; // ax
  bool v32; // cl
  CResponseFileParser::ParseResponseDispatchMap_t *p_m_ResponseDispatch; // r12
  unsigned int v34; // eax
  unsigned int v35; // eax
  unsigned int v36; // eax
  unsigned int v37; // eax
  unsigned int v38; // eax
  unsigned int v39; // eax
  unsigned int v40; // eax
  unsigned int v41; // eax
  unsigned int v42; // eax
  unsigned int v43; // eax
  unsigned int v44; // eax
  unsigned int v45; // eax
  unsigned int v46; // eax
  unsigned int v47; // eax
  unsigned int v48; // eax
  unsigned int v49; // eax
  CResponseFileParser::ParseResponseDispatchMap_t *v50; // rdi
  CResponseFileParser::ParseResponseGroupDispatchMap_t *p_m_ResponseGroupDispatch; // rbx
  unsigned int v52; // eax
  unsigned int v53; // eax
  unsigned int v54; // eax
  unsigned int v55; // eax
  unsigned int v56; // eax
  unsigned int v57; // eax
  unsigned int v58; // eax
  unsigned int v59; // eax
  unsigned int v60; // eax
  unsigned int v61; // eax
  unsigned int v62; // eax
  unsigned int v63; // eax
  unsigned int v64; // eax
  bool v65; // r12
  CUtlMap<unsigned int,void (CResponseFileParser::*)(Rule&),short unsigned int,bool (*)(unsigned int const&,unsigned int const&)>::Node_t insert[3]; // [rsp+0h] [rbp-50h] BYREF

  p_m_RootCommandHashes = &this->m_RootCommandHashes;
  insert[0].key = HashStringConventional("#include");
  CUtlRBTree<unsigned int,unsigned short,bool (*)(unsigned int const&,unsigned int const&),CUtlMemory<UtlRBTreeNode_t<unsigned int,unsigned short>,unsigned short>>::Insert(
    p_m_RootCommandHashes,
    &insert[0].key,
    ERBTreeInsertBehavior::k_eInsertAssertAboutDupes);
  insert[0].key = HashStringConventional("response");
  CUtlRBTree<unsigned int,unsigned short,bool (*)(unsigned int const&,unsigned int const&),CUtlMemory<UtlRBTreeNode_t<unsigned int,unsigned short>,unsigned short>>::Insert(
    p_m_RootCommandHashes,
    &insert[0].key,
    ERBTreeInsertBehavior::k_eInsertAssertAboutDupes);
  insert[0].key = HashStringConventional("enumeration");
  CUtlRBTree<unsigned int,unsigned short,bool (*)(unsigned int const&,unsigned int const&),CUtlMemory<UtlRBTreeNode_t<unsigned int,unsigned short>,unsigned short>>::Insert(
    p_m_RootCommandHashes,
    &insert[0].key,
    ERBTreeInsertBehavior::k_eInsertAssertAboutDupes);
  insert[0].key = HashStringConventional("criterion");
  CUtlRBTree<unsigned int,unsigned short,bool (*)(unsigned int const&,unsigned int const&),CUtlMemory<UtlRBTreeNode_t<unsigned int,unsigned short>,unsigned short>>::Insert(
    p_m_RootCommandHashes,
    &insert[0].key,
    ERBTreeInsertBehavior::k_eInsertAssertAboutDupes);
  insert[0].key = HashStringConventional("criteria");
  CUtlRBTree<unsigned int,unsigned short,bool (*)(unsigned int const&,unsigned int const&),CUtlMemory<UtlRBTreeNode_t<unsigned int,unsigned short>,unsigned short>>::Insert(
    p_m_RootCommandHashes,
    &insert[0].key,
    ERBTreeInsertBehavior::k_eInsertAssertAboutDupes);
  insert[0].key = HashStringConventional("rule");
  CUtlRBTree<unsigned int,unsigned short,bool (*)(unsigned int const&,unsigned int const&),CUtlMemory<UtlRBTreeNode_t<unsigned int,unsigned short>,unsigned short>>::Insert(
    p_m_RootCommandHashes,
    &insert[0].key,
    ERBTreeInsertBehavior::k_eInsertAssertAboutDupes);
  insert[0].elem.__pfn = 0;
  *&insert[0].key = CResponseFileParser::ParseInclude;
  v3 = HashStringConventional("#include");
  CUtlMap<unsigned int,void (CResponseFileParser::*)(void),unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Insert(
    &this->m_FileDispatch,
    v3,
    insert);
  insert[0].elem.__pfn = 0;
  *&insert[0].key = CResponseFileParser::ParseResponse;
  v4 = HashStringConventional("response");
  CUtlMap<unsigned int,void (CResponseFileParser::*)(void),unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Insert(
    &this->m_FileDispatch,
    v4,
    insert);
  insert[0].elem.__pfn = 0;
  *&insert[0].key = CResponseFileParser::ParseCriterion;
  v5 = HashStringConventional("criterion");
  CUtlMap<unsigned int,void (CResponseFileParser::*)(void),unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Insert(
    &this->m_FileDispatch,
    v5,
    insert);
  v6 = HashStringConventional("criteria");
  m_Root = this->m_FileDispatch.m_Tree.m_Root;
  insert[0].elem.__delta = 0;
  insert[0].key = v6;
  insert[0].elem.__pfn = CResponseFileParser::ParseCriterion;
  if ( m_Root != 0xFFFF )
  {
    while ( 1 )
    {
      v10 = !this->m_FileDispatch.m_Tree.m_LessFunc.m_LessFunc(
               insert,
               &this->m_FileDispatch.m_Tree.m_Elements.m_pMemory[m_Root].m_Data);
      m_pMemory = this->m_FileDispatch.m_Tree.m_Elements.m_pMemory;
      if ( v10 )
      {
        m_Right = m_pMemory[m_Root].m_Right;
        v9 = 0;
        if ( m_Right == 0xFFFF )
        {
LABEL_7:
          v65 = v9;
          goto LABEL_8;
        }
      }
      else
      {
        m_Right = m_pMemory[m_Root].m_Left;
        v9 = 1;
        if ( m_Right == 0xFFFF )
          goto LABEL_7;
      }
      m_Root = m_Right;
    }
  }
  m_Root = -1;
  v65 = 0;
LABEL_8:
  v12 = CUtlRBTree<CUtlMap<unsigned int,void (CResponseFileParser::*)(void),unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short,CUtlMap<unsigned int,void (CResponseFileParser::*)(void),unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,void (CResponseFileParser::*)(void),unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>>::NewNode(
          &this->m_FileDispatch.m_Tree,
          insert);
  CUtlRBTree<CUtlMap<unsigned int,void (CResponseFileParser::*)(void),unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short,CUtlMap<unsigned int,void (CResponseFileParser::*)(void),unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,void (CResponseFileParser::*)(void),unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>>::LinkToParent(
    &this->m_FileDispatch.m_Tree,
    v12,
    m_Root,
    v65);
  ++this->m_FileDispatch.m_Tree.m_NumElements;
  v13 = HashStringConventional("rule");
  v14 = this->m_FileDispatch.m_Tree.m_Root;
  insert[0].elem.__delta = 0;
  insert[0].key = v13;
  insert[0].elem.__pfn = CResponseFileParser::ParseRule;
  if ( v14 == 0xFFFF )
  {
    v14 = -1;
    v15 = 0;
    goto LABEL_15;
  }
  while ( 1 )
  {
    v10 = !this->m_FileDispatch.m_Tree.m_LessFunc.m_LessFunc(
             insert,
             &this->m_FileDispatch.m_Tree.m_Elements.m_pMemory[v14].m_Data);
    v18 = this->m_FileDispatch.m_Tree.m_Elements.m_pMemory;
    if ( v10 )
      break;
    m_Left = v18[v14].m_Left;
    v17 = 1;
    if ( m_Left == 0xFFFF )
      goto LABEL_14;
LABEL_11:
    v14 = m_Left;
  }
  m_Left = v18[v14].m_Right;
  v17 = 0;
  if ( m_Left != 0xFFFF )
    goto LABEL_11;
LABEL_14:
  v15 = v17;
LABEL_15:
  v19 = CUtlRBTree<CUtlMap<unsigned int,void (CResponseFileParser::*)(void),unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short,CUtlMap<unsigned int,void (CResponseFileParser::*)(void),unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,void (CResponseFileParser::*)(void),unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>>::NewNode(
          &this->m_FileDispatch.m_Tree,
          insert);
  CUtlRBTree<CUtlMap<unsigned int,void (CResponseFileParser::*)(void),unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short,CUtlMap<unsigned int,void (CResponseFileParser::*)(void),unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,void (CResponseFileParser::*)(void),unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>>::LinkToParent(
    &this->m_FileDispatch.m_Tree,
    v19,
    v14,
    v15);
  insert[0].elem.__pfn = 0;
  ++this->m_FileDispatch.m_Tree.m_NumElements;
  *&insert[0].key = CResponseFileParser::ParseEnumeration;
  v20 = HashStringConventional("enumeration");
  CUtlMap<unsigned int,void (CResponseFileParser::*)(void),unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Insert(
    &this->m_FileDispatch,
    v20,
    insert);
  insert[0].elem.__pfn = 0;
  *&insert[0].key = CResponseFileParser::ParseRule_MatchOnce;
  v21 = HashStringConventional("matchonce");
  CUtlMap<unsigned int,void (CResponseFileParser::*)(Rule &),unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Insert(
    &this->m_RuleDispatch,
    v21,
    insert);
  insert[0].elem.__pfn = 0;
  *&insert[0].key = CResponseFileParser::ParseRule_ApplyContextToWorld;
  v22 = HashStringConventional("applycontexttoworld");
  CUtlMap<unsigned int,void (CResponseFileParser::*)(Rule &),unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Insert(
    &this->m_RuleDispatch,
    v22,
    insert);
  insert[0].elem.__pfn = 0;
  *&insert[0].key = CResponseFileParser::ParseRule_ApplyContext;
  v23 = HashStringConventional("applycontext");
  CUtlMap<unsigned int,void (CResponseFileParser::*)(Rule &),unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Insert(
    &this->m_RuleDispatch,
    v23,
    insert);
  insert[0].elem.__pfn = 0;
  *&insert[0].key = CResponseFileParser::ParseRule_Response;
  v24 = HashStringConventional("response");
  CUtlMap<unsigned int,void (CResponseFileParser::*)(Rule &),unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Insert(
    &this->m_RuleDispatch,
    v24,
    insert);
  v25 = HashStringConventional("criteria");
  v26 = this->m_RuleDispatch.m_Tree.m_Root;
  insert[0].elem.__delta = 0;
  insert[0].key = v25;
  insert[0].elem.__pfn = CResponseFileParser::ParseRule_Criteria;
  if ( v26 != 0xFFFF )
  {
    while ( 1 )
    {
      v10 = !this->m_RuleDispatch.m_Tree.m_LessFunc.m_LessFunc(
               insert,
               &this->m_RuleDispatch.m_Tree.m_Elements.m_pMemory[v26].m_Data);
      v30 = this->m_RuleDispatch.m_Tree.m_Elements.m_pMemory;
      if ( v10 )
      {
        v28 = v30[v26].m_Right;
        v29 = 0;
        if ( v28 == 0xFFFF )
        {
LABEL_21:
          v27 = v29;
          goto LABEL_22;
        }
      }
      else
      {
        v28 = v30[v26].m_Left;
        v29 = 1;
        if ( v28 == 0xFFFF )
          goto LABEL_21;
      }
      v26 = v28;
    }
  }
  v26 = -1;
  v27 = 0;
LABEL_22:
  v31 = CUtlRBTree<CUtlMap<unsigned int,void (CResponseFileParser::*)(Rule &),unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short,CUtlMap<unsigned int,void (CResponseFileParser::*)(Rule &),unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,void (CResponseFileParser::*)(Rule &),unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>>::NewNode(
          &this->m_RuleDispatch.m_Tree,
          insert);
  v32 = v27;
  p_m_ResponseDispatch = &this->m_ResponseDispatch;
  CUtlRBTree<CUtlMap<unsigned int,void (CResponseFileParser::*)(Rule &),unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short,CUtlMap<unsigned int,void (CResponseFileParser::*)(Rule &),unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,void (CResponseFileParser::*)(Rule &),unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>>::LinkToParent(
    &this->m_RuleDispatch.m_Tree,
    v31,
    v26,
    v32);
  insert[0].elem.__pfn = 0;
  ++this->m_RuleDispatch.m_Tree.m_NumElements;
  *&insert[0].key = CResponseFileParser::ParseRule_Criteria;
  v34 = HashStringConventional("criterion");
  CUtlMap<unsigned int,void (CResponseFileParser::*)(Rule &),unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Insert(
    &this->m_RuleDispatch,
    v34,
    insert);
  insert[0].elem.__pfn = 0;
  *&insert[0].key = CResponseFileParser::ParseResponse_Weight;
  v35 = HashStringConventional("weight");
  CUtlMap<unsigned int,void (CResponseFileParser::*)(ParserResponse &,ResponseGroup &,ResponseParams *),unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Insert(
    &this->m_ResponseDispatch,
    v35,
    insert);
  insert[0].elem.__pfn = 0;
  *&insert[0].key = CResponseFileParser::ParseResponse_PreDelay;
  v36 = HashStringConventional("predelay");
  CUtlMap<unsigned int,void (CResponseFileParser::*)(ParserResponse &,ResponseGroup &,ResponseParams *),unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Insert(
    &this->m_ResponseDispatch,
    v36,
    insert);
  insert[0].elem.__pfn = 0;
  *&insert[0].key = CResponseFileParser::ParseResponse_NoDelay;
  v37 = HashStringConventional("nodelay");
  CUtlMap<unsigned int,void (CResponseFileParser::*)(ParserResponse &,ResponseGroup &,ResponseParams *),unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Insert(
    &this->m_ResponseDispatch,
    v37,
    insert);
  insert[0].elem.__pfn = 0;
  *&insert[0].key = CResponseFileParser::ParseResponse_DefaultDelay;
  v38 = HashStringConventional("defaultdelay");
  CUtlMap<unsigned int,void (CResponseFileParser::*)(ParserResponse &,ResponseGroup &,ResponseParams *),unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Insert(
    &this->m_ResponseDispatch,
    v38,
    insert);
  insert[0].elem.__pfn = 0;
  *&insert[0].key = CResponseFileParser::ParseResponse_Delay;
  v39 = HashStringConventional("delay");
  CUtlMap<unsigned int,void (CResponseFileParser::*)(ParserResponse &,ResponseGroup &,ResponseParams *),unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Insert(
    &this->m_ResponseDispatch,
    v39,
    insert);
  insert[0].elem.__pfn = 0;
  *&insert[0].key = CResponseFileParser::ParseResponse_SpeakOnce;
  v40 = HashStringConventional("speakonce");
  CUtlMap<unsigned int,void (CResponseFileParser::*)(ParserResponse &,ResponseGroup &,ResponseParams *),unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Insert(
    &this->m_ResponseDispatch,
    v40,
    insert);
  insert[0].elem.__pfn = 0;
  *&insert[0].key = CResponseFileParser::ParseResponse_NoScene;
  v41 = HashStringConventional("noscene");
  CUtlMap<unsigned int,void (CResponseFileParser::*)(ParserResponse &,ResponseGroup &,ResponseParams *),unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Insert(
    &this->m_ResponseDispatch,
    v41,
    insert);
  insert[0].elem.__pfn = 0;
  *&insert[0].key = CResponseFileParser::ParseResponse_StopOnNonIdle;
  v42 = HashStringConventional("stop_on_nonidle");
  CUtlMap<unsigned int,void (CResponseFileParser::*)(ParserResponse &,ResponseGroup &,ResponseParams *),unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Insert(
    &this->m_ResponseDispatch,
    v42,
    insert);
  insert[0].elem.__pfn = 0;
  *&insert[0].key = CResponseFileParser::ParseResponse_Odds;
  v43 = HashStringConventional("odds");
  CUtlMap<unsigned int,void (CResponseFileParser::*)(ParserResponse &,ResponseGroup &,ResponseParams *),unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Insert(
    &this->m_ResponseDispatch,
    v43,
    insert);
  insert[0].elem.__pfn = 0;
  *&insert[0].key = CResponseFileParser::ParseResponse_RespeakDelay;
  v44 = HashStringConventional("respeakdelay");
  CUtlMap<unsigned int,void (CResponseFileParser::*)(ParserResponse &,ResponseGroup &,ResponseParams *),unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Insert(
    &this->m_ResponseDispatch,
    v44,
    insert);
  insert[0].elem.__pfn = 0;
  *&insert[0].key = CResponseFileParser::ParseResponse_WeaponDelay;
  v45 = HashStringConventional("weapondelay");
  CUtlMap<unsigned int,void (CResponseFileParser::*)(ParserResponse &,ResponseGroup &,ResponseParams *),unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Insert(
    &this->m_ResponseDispatch,
    v45,
    insert);
  insert[0].elem.__pfn = 0;
  *&insert[0].key = CResponseFileParser::ParseResponse_Soundlevel;
  v46 = HashStringConventional("soundlevel");
  CUtlMap<unsigned int,void (CResponseFileParser::*)(ParserResponse &,ResponseGroup &,ResponseParams *),unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Insert(
    &this->m_ResponseDispatch,
    v46,
    insert);
  insert[0].elem.__pfn = 0;
  *&insert[0].key = CResponseFileParser::ParseResponse_DisplayFirst;
  v47 = HashStringConventional("displayfirst");
  CUtlMap<unsigned int,void (CResponseFileParser::*)(ParserResponse &,ResponseGroup &,ResponseParams *),unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Insert(
    &this->m_ResponseDispatch,
    v47,
    insert);
  insert[0].elem.__pfn = 0;
  *&insert[0].key = CResponseFileParser::ParseResponse_DisplayLast;
  v48 = HashStringConventional("displaylast");
  CUtlMap<unsigned int,void (CResponseFileParser::*)(ParserResponse &,ResponseGroup &,ResponseParams *),unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Insert(
    &this->m_ResponseDispatch,
    v48,
    insert);
  insert[0].elem.__pfn = 0;
  *&insert[0].key = CResponseFileParser::ParseResponse_Fire;
  v49 = HashStringConventional("fire");
  v50 = &this->m_ResponseDispatch;
  p_m_ResponseGroupDispatch = &this->m_ResponseGroupDispatch;
  CUtlMap<unsigned int,void (CResponseFileParser::*)(ParserResponse &,ResponseGroup &,ResponseParams *),unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Insert(
    v50,
    v49,
    insert);
  insert[0].elem.__pfn = 0;
  *&insert[0].key = CResponseFileParser::ParseResponse_Then;
  v52 = HashStringConventional("then");
  CUtlMap<unsigned int,void (CResponseFileParser::*)(ParserResponse &,ResponseGroup &,ResponseParams *),unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Insert(
    p_m_ResponseDispatch,
    v52,
    insert);
  insert[0].elem.__pfn = 0;
  *&insert[0].key = CResponseFileParser::ParseResponseGroup_Start;
  v53 = HashStringConventional("{");
  CUtlMap<unsigned int,void (CResponseFileParser::*)(char const*,ResponseGroup &,ResponseParams &),unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Insert(
    p_m_ResponseGroupDispatch,
    v53,
    insert);
  insert[0].elem.__pfn = 0;
  *&insert[0].key = CResponseFileParser::ParseResponseGroup_PreDelay;
  v54 = HashStringConventional("predelay");
  CUtlMap<unsigned int,void (CResponseFileParser::*)(char const*,ResponseGroup &,ResponseParams &),unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Insert(
    p_m_ResponseGroupDispatch,
    v54,
    insert);
  insert[0].elem.__pfn = 0;
  *&insert[0].key = CResponseFileParser::ParseResponseGroup_NoDelay;
  v55 = HashStringConventional("nodelay");
  CUtlMap<unsigned int,void (CResponseFileParser::*)(char const*,ResponseGroup &,ResponseParams &),unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Insert(
    p_m_ResponseGroupDispatch,
    v55,
    insert);
  insert[0].elem.__pfn = 0;
  *&insert[0].key = CResponseFileParser::ParseResponseGroup_DefaultDelay;
  v56 = HashStringConventional("defaultdelay");
  CUtlMap<unsigned int,void (CResponseFileParser::*)(char const*,ResponseGroup &,ResponseParams &),unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Insert(
    p_m_ResponseGroupDispatch,
    v56,
    insert);
  insert[0].elem.__pfn = 0;
  *&insert[0].key = CResponseFileParser::ParseResponseGroup_Delay;
  v57 = HashStringConventional("delay");
  CUtlMap<unsigned int,void (CResponseFileParser::*)(char const*,ResponseGroup &,ResponseParams &),unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Insert(
    p_m_ResponseGroupDispatch,
    v57,
    insert);
  insert[0].elem.__pfn = 0;
  *&insert[0].key = CResponseFileParser::ParseResponseGroup_SpeakOnce;
  v58 = HashStringConventional("speakonce");
  CUtlMap<unsigned int,void (CResponseFileParser::*)(char const*,ResponseGroup &,ResponseParams &),unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Insert(
    p_m_ResponseGroupDispatch,
    v58,
    insert);
  insert[0].elem.__pfn = 0;
  *&insert[0].key = CResponseFileParser::ParseResponseGroup_NoScene;
  v59 = HashStringConventional("noscene");
  CUtlMap<unsigned int,void (CResponseFileParser::*)(char const*,ResponseGroup &,ResponseParams &),unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Insert(
    p_m_ResponseGroupDispatch,
    v59,
    insert);
  insert[0].elem.__pfn = 0;
  *&insert[0].key = CResponseFileParser::ParseResponseGroup_StopOnNonIdle;
  v60 = HashStringConventional("stop_on_nonidle");
  CUtlMap<unsigned int,void (CResponseFileParser::*)(char const*,ResponseGroup &,ResponseParams &),unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Insert(
    p_m_ResponseGroupDispatch,
    v60,
    insert);
  insert[0].elem.__pfn = 0;
  *&insert[0].key = CResponseFileParser::ParseResponseGroup_Odds;
  v61 = HashStringConventional("odds");
  CUtlMap<unsigned int,void (CResponseFileParser::*)(char const*,ResponseGroup &,ResponseParams &),unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Insert(
    p_m_ResponseGroupDispatch,
    v61,
    insert);
  insert[0].elem.__pfn = 0;
  *&insert[0].key = CResponseFileParser::ParseResponseGroup_RespeakDelay;
  v62 = HashStringConventional("respeakdelay");
  CUtlMap<unsigned int,void (CResponseFileParser::*)(char const*,ResponseGroup &,ResponseParams &),unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Insert(
    p_m_ResponseGroupDispatch,
    v62,
    insert);
  insert[0].elem.__pfn = 0;
  *&insert[0].key = CResponseFileParser::ParseResponseGroup_WeaponDelay;
  v63 = HashStringConventional("weapondelay");
  CUtlMap<unsigned int,void (CResponseFileParser::*)(char const*,ResponseGroup &,ResponseParams &),unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Insert(
    p_m_ResponseGroupDispatch,
    v63,
    insert);
  insert[0].elem.__pfn = 0;
  *&insert[0].key = CResponseFileParser::ParseResponseGroup_Soundlevel;
  v64 = HashStringConventional("soundlevel");
  CUtlMap<unsigned int,void (CResponseFileParser::*)(char const*,ResponseGroup &,ResponseParams &),unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Insert(
    p_m_ResponseGroupDispatch,
    v64,
    insert);
}


// CResponseFileParser::Dispatch  (line 993, @0x00000000031042f0, libserver.so)  // inlines: Element, Find, LeftChild, RightChild, operator(), operator[]
// callers: CResponseFileParser::LoadFromBuffer
bool __fastcall CResponseFileParser::Dispatch(
        CResponseFileParser *const this,
        const char *pToken,
        unsigned int uiHash,
        CResponseFileParser::DispatchMap_t *const rMap)
{
  unsigned __int64 m_Root; // rbx
  UtlRBTreeNode_t<CUtlMap<unsigned int,void (CResponseFileParser::*)()>::Node_t,short unsigned int> *m_pMemory; // rax
  unsigned __int64 v8; // rbx
  UtlRBTreeNode_t<CUtlMap<unsigned int,void (CResponseFileParser::*)()>::Node_t,short unsigned int> *v10; // rbx
  void (*pfn)(CResponseFileParser *); // rax
  CResponseFileParser *v12; // rdi
  _DWORD v13[16]; // [rsp+0h] [rbp-40h] BYREF

  v13[0] = uiHash;
  m_Root = rMap->m_Tree.m_Root;
  if ( m_Root == 0xFFFF )
    return 0;
  m_pMemory = rMap->m_Tree.m_Elements.m_pMemory;
  while ( 1 )
  {
    while ( 1 )
    {
      v8 = m_Root;
      if ( rMap->m_Tree.m_LessFunc.m_LessFunc(v13, &m_pMemory[v8].m_Data) == 0 )
        break;
      m_pMemory = rMap->m_Tree.m_Elements.m_pMemory;
      m_Root = m_pMemory[v8].m_Left;
      if ( m_Root == 0xFFFF )
        return 0;
    }
    if ( rMap->m_Tree.m_LessFunc.m_LessFunc(&rMap->m_Tree.m_Elements.m_pMemory[v8].m_Data, v13) == 0 )
      break;
    m_pMemory = rMap->m_Tree.m_Elements.m_pMemory;
    m_Root = m_pMemory[v8].m_Right;
    if ( m_Root == 0xFFFF )
      return 0;
  }
  v10 = &rMap->m_Tree.m_Elements.m_pMemory[v8];
  pfn = v10->m_Data.elem.__pfn;
  v12 = (this + v10->m_Data.elem.__delta);
  if ( (pfn & 1) != 0 )
    (*&v12->m_pParseRuleName[pfn - 1])(v12);
  else
    pfn(v12);
  return 1;
}


// CResponseFileParser::DispatchParseRule  (line 1008, @0x00000000031043c0, libserver.so)  // inlines: Element, Find, LeftChild, RightChild, operator(), operator[]
// callers: CResponseFileParser::ParseRule
bool __fastcall CResponseFileParser::DispatchParseRule(
        CResponseFileParser *const this,
        const char *pToken,
        unsigned int uiHash,
        CResponseFileParser::ParseRuleDispatchMap_t *const rMap,
        Rule *const newRule)
{
  unsigned __int64 m_Root; // rbx
  UtlRBTreeNode_t<CUtlMap<unsigned int,void (CResponseFileParser::*)(Rule&)>::Node_t,short unsigned int> *m_pMemory; // rax
  unsigned __int64 v10; // rbx
  UtlRBTreeNode_t<CUtlMap<unsigned int,void (CResponseFileParser::*)(Rule&)>::Node_t,short unsigned int> *v12; // rbx
  void (*pfn)(CResponseFileParser *, Rule *); // rax
  CResponseFileParser *v14; // rdi
  _DWORD v15[20]; // [rsp+0h] [rbp-50h] BYREF

  v15[0] = uiHash;
  m_Root = rMap->m_Tree.m_Root;
  if ( m_Root == 0xFFFF )
    return 0;
  m_pMemory = rMap->m_Tree.m_Elements.m_pMemory;
  while ( 1 )
  {
    while ( 1 )
    {
      v10 = m_Root;
      if ( rMap->m_Tree.m_LessFunc.m_LessFunc(v15, &m_pMemory[v10].m_Data) == 0 )
        break;
      m_pMemory = rMap->m_Tree.m_Elements.m_pMemory;
      m_Root = m_pMemory[v10].m_Left;
      if ( m_Root == 0xFFFF )
        return 0;
    }
    if ( rMap->m_Tree.m_LessFunc.m_LessFunc(&rMap->m_Tree.m_Elements.m_pMemory[v10].m_Data, v15) == 0 )
      break;
    m_pMemory = rMap->m_Tree.m_Elements.m_pMemory;
    m_Root = m_pMemory[v10].m_Right;
    if ( m_Root == 0xFFFF )
      return 0;
  }
  v12 = &rMap->m_Tree.m_Elements.m_pMemory[v10];
  pfn = v12->m_Data.elem.__pfn;
  v14 = (this + v12->m_Data.elem.__delta);
  if ( (pfn & 1) != 0 )
    (*&v14->m_pParseRuleName[pfn - 1])(v14, newRule);
  else
    pfn(v14, newRule);
  return 1;
}


// CResponseFileParser::DispatchParseResponse  (line 1023, @0x00000000031044a0, libserver.so)  // inlines: Element, Find, LeftChild, RightChild, operator(), operator[]
// callers: CResponseFileParser::ParseOneResponse
bool __fastcall CResponseFileParser::DispatchParseResponse(
        CResponseFileParser *const this,
        const char *pToken,
        unsigned int uiHash,
        CResponseFileParser::ParseResponseDispatchMap_t *const rMap,
        ParserResponse *const newResponse,
        ResponseGroup *const group,
        ResponseParams *rp)
{
  unsigned __int16 m_Root; // dx
  UtlRBTreeNode_t<CUtlMap<unsigned int,void (CResponseFileParser::*)(ParserResponse&,ResponseGroup&,ResponseParams*)>::Node_t,short unsigned int> *m_pMemory; // rax
  unsigned __int64 v12; // r15
  UtlRBTreeNode_t<CUtlMap<unsigned int,void (CResponseFileParser::*)(ParserResponse&,ResponseGroup&,ResponseParams*)>::Node_t,short unsigned int> *v14; // rdx
  void (*pfn)(CResponseFileParser *, ParserResponse *, ResponseGroup *, ResponseParams *); // rax
  CResponseFileParser *v16; // rdi
  unsigned int uiHasha[20]; // [rsp+10h] [rbp-50h] BYREF

  uiHasha[0] = uiHash;
  m_Root = rMap->m_Tree.m_Root;
  if ( m_Root == 0xFFFF )
    return 0;
  m_pMemory = rMap->m_Tree.m_Elements.m_pMemory;
  while ( 1 )
  {
    while ( 1 )
    {
      v12 = m_Root;
      if ( rMap->m_Tree.m_LessFunc.m_LessFunc(uiHasha, &m_pMemory[v12].m_Data) == 0 )
        break;
      m_pMemory = rMap->m_Tree.m_Elements.m_pMemory;
      m_Root = m_pMemory[v12].m_Left;
      if ( m_Root == 0xFFFF )
        return 0;
    }
    if ( rMap->m_Tree.m_LessFunc.m_LessFunc(&rMap->m_Tree.m_Elements.m_pMemory[v12].m_Data, uiHasha) == 0 )
      break;
    m_pMemory = rMap->m_Tree.m_Elements.m_pMemory;
    m_Root = m_pMemory[v12].m_Right;
    if ( m_Root == 0xFFFF )
      return 0;
  }
  v14 = &rMap->m_Tree.m_Elements.m_pMemory[v12];
  pfn = v14->m_Data.elem.__pfn;
  v16 = (this + v14->m_Data.elem.__delta);
  if ( (pfn & 1) != 0 )
    pfn = *&v16->m_pParseRuleName[pfn - 1];
  pfn(v16, newResponse, group, rp);
  return 1;
}


// CResponseFileParser::DispatchParseResponseGroup  (line 1038, @0x0000000003104580, libserver.so)  // inlines: Element, Find, LeftChild, RightChild, operator(), operator[]
// callers: CResponseFileParser::ParseResponse
bool __fastcall CResponseFileParser::DispatchParseResponseGroup(
        CResponseFileParser *const this,
        const char *pToken,
        unsigned int uiHash,
        CResponseFileParser::ParseResponseGroupDispatchMap_t *const rMap,
        const char *responseGroupName,
        ResponseGroup *const newGroup,
        ResponseParams *const groupResponseParams)
{
  unsigned __int16 m_Root; // dx
  UtlRBTreeNode_t<CUtlMap<unsigned int,void (CResponseFileParser::*)(char const*,ResponseGroup&,ResponseParams&)>::Node_t,short unsigned int> *m_pMemory; // rax
  unsigned __int64 v12; // r15
  UtlRBTreeNode_t<CUtlMap<unsigned int,void (CResponseFileParser::*)(char const*,ResponseGroup&,ResponseParams&)>::Node_t,short unsigned int> *v14; // rdx
  void (*pfn)(CResponseFileParser *, const char *, ResponseGroup *, ResponseParams *); // rax
  CResponseFileParser *v16; // rdi
  unsigned int uiHasha[20]; // [rsp+10h] [rbp-50h] BYREF

  uiHasha[0] = uiHash;
  m_Root = rMap->m_Tree.m_Root;
  if ( m_Root == 0xFFFF )
    return 0;
  m_pMemory = rMap->m_Tree.m_Elements.m_pMemory;
  while ( 1 )
  {
    while ( 1 )
    {
      v12 = m_Root;
      if ( rMap->m_Tree.m_LessFunc.m_LessFunc(uiHasha, &m_pMemory[v12].m_Data) == 0 )
        break;
      m_pMemory = rMap->m_Tree.m_Elements.m_pMemory;
      m_Root = m_pMemory[v12].m_Left;
      if ( m_Root == 0xFFFF )
        return 0;
    }
    if ( rMap->m_Tree.m_LessFunc.m_LessFunc(&rMap->m_Tree.m_Elements.m_pMemory[v12].m_Data, uiHasha) == 0 )
      break;
    m_pMemory = rMap->m_Tree.m_Elements.m_pMemory;
    m_Root = m_pMemory[v12].m_Right;
    if ( m_Root == 0xFFFF )
      return 0;
  }
  v14 = &rMap->m_Tree.m_Elements.m_pMemory[v12];
  pfn = v14->m_Data.elem.__pfn;
  v16 = (this + v14->m_Data.elem.__delta);
  if ( (pfn & 1) != 0 )
    pfn = *&v16->m_pParseRuleName[pfn - 1];
  pfn(v16, responseGroupName, newGroup, groupResponseParams);
  return 1;
}


// CResponseFileParser::ResolveToken  (line 1056, @0x0000000003104c00, libserver.so)  // inlines: V_strncpy<long unsigned int>
// calls: _V_strncpy, CResponseSystem::LookupEnumeration, CResponseFileParser::ResponseWarning, V_snprintf
// callers: CResponseSystem::ComputeMatcher
// strings: "No such enumeration '%s'\n"
void __fastcall CResponseFileParser::ResolveToken(
        CResponseFileParser *const this,
        Matcher *const matcher,
        char *tokenToResolve,
        size_t bufsize,
        const char *rawtoken)
{
  CResponseSystem *m_owner; // rdi
  float v8; // xmm0_4
  unsigned int bufsizea; // [rsp+8h] [rbp-28h]
  bool found; // [rsp+1Fh] [rbp-11h] BYREF

  if ( *rawtoken == 91 )
  {
    m_owner = this->m_owner;
    bufsizea = bufsize;
    found = 0;
    v8 = CResponseSystem::LookupEnumeration(m_owner, rawtoken, &found);
    if ( found )
    {
      V_snprintf(tokenToResolve, bufsizea, "%f", v8);
    }
    else
    {
      _V_strncpy(tokenToResolve, rawtoken, bufsizea);
      CResponseFileParser::ResponseWarning(this, "No such enumeration '%s'\n", tokenToResolve);
    }
  }
  else
  {
    _V_strncpy(tokenToResolve, rawtoken, bufsize);
  }
}


// CResponseFileParser::ParseInclude  (line 1079, @0x0000000003105da0, libserver.so)  // inlines: ParseToken, PeekGet, operator[], ~CUtlBuffer, ~CUtlMemory
// calls: IResponseEngineEmulator::Get, V_snprintf, CStringPool::Find, CUtlBuffer::CUtlBuffer, DevMsg(char const*,...), CUtlMemory<unsigned char, int>::Purge, CResponseFileParser::LoadFromBuffer, __stack_chk_fail, _Unwind_Resume
// strings: "Unable to load #included script %s\n"
void __fastcall CResponseFileParser::ParseInclude(CResponseFileParser *const this)
{
  char *token; // r13
  CResponseFileParser::ScriptEntry *m_pMemory; // r12
  IResponseEngineEmulator *v4; // rax
  IResponseEngineEmulator *v5; // rax
  __int64 v6; // rax
  CUtlBuffer buf; // [rsp+10h] [rbp-180h] BYREF
  char includefile[264]; // [rsp+60h] [rbp-130h] BYREF
  unsigned __int64 v9; // [rsp+168h] [rbp-28h]

  v9 = __readfsqword(0x28u);
  if ( this->m_bUnget )
  {
    this->m_bUnget = 0;
    token = this->token;
  }
  else
  {
    token = this->token;
    if ( this->m_ScriptStack.m_Size > 0 )
    {
      m_pMemory = this->m_ScriptStack.m_Memory.m_pMemory;
      token = this->token;
      v4 = IResponseEngineEmulator::Get();
      m_pMemory->currenttoken = (**v4)(v4, this->m_ScriptStack.m_Memory.m_pMemory->currenttoken, this->token, 1204);
      ++this->m_ScriptStack.m_Memory.m_pMemory->tokencount;
    }
  }
  V_snprintf(includefile, 256, "scripts/%s", token);
  if ( CStringPool::Find(&this->m_IncludedFiles, includefile) == 0 )
  {
    CUtlBuffer::CUtlBuffer(&buf, 0, 0, 0);
    v5 = IResponseEngineEmulator::Get();
    v6 = (*(*v5 + 8LL))(v5);
    if ( (*(*(v6 + 8) + 112LL))(v6 + 8, includefile, "GAME", &buf, 0, 0, 0) != 0 )
      CResponseFileParser::LoadFromBuffer(this, includefile, &buf.m_Memory.m_pMemory[buf.m_Get - buf.m_nOffset]);
    else
      DevMsg("Unable to load #included script %s\n", includefile);
    CUtlMemory<unsigned char,int>::Purge(&buf.m_Memory);
  }
}


// CResponseFileParser::GetCurrentToken  (line 1108, @0x0000000003104660, libserver.so)
int __fastcall CResponseFileParser::GetCurrentToken(const CResponseFileParser *const this)
{
  if ( this->m_ScriptStack.m_Size <= 0 )
    return -1;
  else
    return this->m_ScriptStack.m_Memory.m_pMemory->tokencount;
}


// CResponseFileParser::ResponseWarning  (line 1118, @0x0000000003104680, libserver.so)  // inlines: GetCurrentScript, GetCurrentToken
// calls: V_vsnprintf, CResponseFileParser::GetCurrentScript, DevMsg, __stack_chk_fail
// callers: CResponseFileParser::ParseResponse_Fire, CResponseFileParser::ParseResponse_Then, CResponseFileParser::ResolveToken, CResponseFileParser::ParseOneResponse, CResponseFileParser::ParseRule_Response, CResponseFileParser::LoadFromFile, CResponseFileParser::ParseOneCriterion, CResponseFileParser::ParseEnumeration, CResponseFileParser::ParseRule
// strings: "%s(token %i) : %s"
void CResponseFileParser::ResponseWarning(CResponseFileParser *const this, const char *fmt, ...)
{
  int m_Size; // eax
  int tokencount; // ecx
  va_list argptr; // [rsp+8h] [rbp-5F8h] BYREF
  char cur[256]; // [rsp+20h] [rbp-5E0h] BYREF
  char string[1032]; // [rsp+120h] [rbp-4E0h] BYREF
  unsigned __int64 v8; // [rsp+528h] [rbp-D8h]

  va_start(argptr, fmt);
  v8 = __readfsqword(0x28u);
  V_vsnprintf(string, 1024, fmt, argptr);
  m_Size = this->m_ScriptStack.m_Size;
  cur[0] = 0;
  if ( m_Size <= 0 || (CResponseFileParser::GetCurrentScript(this, cur, 0x100u), this->m_ScriptStack.m_Size <= 0) )
    tokencount = -1;
  else
    tokencount = this->m_ScriptStack.m_Memory.m_pMemory->tokencount;
  DevMsg(1, "%s(token %i) : %s", cur, tokencount, string);
}


