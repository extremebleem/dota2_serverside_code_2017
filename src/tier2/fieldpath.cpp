
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// _GLOBAL__sub_I_fieldpath.cpp  (line 0, @0x0000000001a6a9c0, libserver.so)  // inlines: CFieldPathHuffmanEncoder, CTSListBase, CTSSimpleList, CUtlMemory, CUtlVector, CUtlVectorBase, CUtlVectorFixed, Color, Purge, RemoveAll, SetColor, __static_initialization_and_destruction_0, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~CUtlVectorFixed
// calls: __cxa_atexit, CFieldPathHuffmanEncoder::BuildOpCodeCodeToHuffmanLookup, CUtlVectorBase<CFieldPathHuffmanEncoder::composed_t, CUtlMemory<CFieldPathHuffmanEncoder::composed_t, int> >::~CUtlVectorBase, _Unwind_Resume, CUtlMemory<int, int>::Purge
// globals: UNSPECIFIED_LOGGING_COLOR, `guard variable for'g_HuffmanEncoder, __dso_handle, CTempPackedFieldPathVec::s_allVectors, CTSSimpleList<CTempPackedFieldPathVec::SListElement>::~CTSSimpleList(), CTempFieldPathList::s_allLists, CTSSimpleList<CTempFieldPathList::SListElement>::~CTSSimpleList(), g_HuffmanEncoder (9 total)
void __cdecl GLOBAL__sub_I_fieldpath_cpp()
{
  UNSPECIFIED_LOGGING_COLOR._color[0] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[1] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[2] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[3] = 0;
  // init once: g_HuffmanEncoder
  g_HuffmanEncoder.m_pRoot = 0;
  g_HuffmanEncoder.m_Frequencies.m_Size = 0;
  g_HuffmanEncoder.m_Frequencies.m_Memory.m_pMemory = 0;
  g_HuffmanEncoder.m_Frequencies.m_Memory.m_nAllocationCount = 0;
  g_HuffmanEncoder.m_Frequencies.m_Memory.m_nGrowSize = 0;
  g_HuffmanEncoder.m_OpCodeToHuffmanLookup.m_Size = 0;
  g_HuffmanEncoder.m_FixedTree.m_Size = 0;
  g_HuffmanEncoder.m_FixedTree.m_Memory.m_pMemory = 0;
  g_HuffmanEncoder.m_FixedTree.m_Memory.m_nAllocationCount = 0;
  g_HuffmanEncoder.m_FixedTree.m_Memory.m_nGrowSize = 0;
  CFieldPathHuffmanEncoder::BuildOpCodeCodeToHuffmanLookup(&g_HuffmanEncoder);
  __cxa_atexit(CFieldPathHuffmanEncoder::~CFieldPathHuffmanEncoder, &g_HuffmanEncoder, &_dso_handle);
  CTempPackedFieldPathVec::s_allVectors = 0LL;
  __cxa_atexit(
    CTSSimpleList<CTempPackedFieldPathVec::SListElement>::~CTSSimpleList,
    &CTempPackedFieldPathVec::s_allVectors,
    &_dso_handle);
  CTempFieldPathList::s_allLists = 0LL;
  __cxa_atexit(
    CTSSimpleList<CTempFieldPathList::SListElement>::~CTSSimpleList,
    &CTempFieldPathList::s_allLists,
    &_dso_handle);
}


// LookupFieldPathDeltaOpName  (line 69, @0x00000000031271f0, libserver.so)  // inlines: GetNameByToken
// globals: g_OpTypes, tokenset_t<optype_t>::GetNameByToken(optype_t)::unknown
const char *__fastcall LookupFieldPathDeltaOpName(optype_t op)
{
  const char *result; // rax
  tokenset_t<optype_t> *v2; // rdx

  result = g_OpTypes[0].name;
  if ( g_OpTypes[0].name != 0 )
  {
    if ( op == g_OpTypes[0].token )
      return result;
    v2 = g_OpTypes;
    while ( 1 )
    {
      ++v2;
      result = v2->name;
      if ( v2->name == 0 )
        break;
      if ( op == v2->token )
        return result;
    }
  }
  return tokenset_t<optype_t>::GetNameByToken(optype_t)const::unknown;
}


// CFieldPath::ToString  (line 112, @0x0000000003128dd0, libserver.so)  // inlines: CUtlString, GetDepth, GetPathData
// calls: CFmtStrN<256, false>::CFmtStrN, CUtlString::operator+=, CUtlString::FreeMemoryBlock, _Unwind_Resume, __stack_chk_fail
// callers: CNetworkTransmitComponent::ValidateChangeOffset, CNetworkTransmitComponent::StateChanged, CNetworkFieldChangedEventQueue::InvokeChangeCallbacks
CUtlString __fastcall CFieldPath::ToString(CUtlString *a1, const CFieldPath *const this)
{
  int m_nCount; // r13d
  const CFieldPath *m_pPaths; // r15
  __int64 v5; // rbx
  CFmtStrN<256,false> v7; // [rsp+10h] [rbp-150h] BYREF
  unsigned __int64 v8; // [rsp+128h] [rbp-38h]

  a1->m_pString = 0;
  v8 = __readfsqword(0x28u);
  m_nCount = this->m_nCount;
  if ( m_nCount > 0 )
  {
    if ( this->m_bUsingExternalPaths )
      m_pPaths = this->u.m_pPaths;
    else
      m_pPaths = this;
    v5 = 0;
    do
    {
      CFmtStrN<256,false>::CFmtStrN(&v7, "%d", m_pPaths->u.m_FixedPaths[v5].m_nValue);
      CUtlString::operator+=(a1, v7.m_szBuf);
      if ( m_nCount - 1 != v5 )
        CUtlString::operator+=(a1, "/");
      ++v5;
    }
    while ( m_nCount > v5 );
  }
  return a1;
}


// CFieldPath::ToString  (line 132, @0x0000000003127240, libserver.so)  // inlines: GetDepth, GetPathData, LeafCodeInfo_t, V_strlen, V_strncat<long int>
// calls: strlen, _V_strncat, V_snprintf, LoggingSystem_IsChannelEnabled, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...), Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess
// strings: "../public/tier2/fieldpath.h", "GetPathData", "GetPathData failed for read only CFieldPath"
void __fastcall CFieldPath::ToString(CFieldPath *const this, char *buffer, size_t maxLenInChars)
{
  char *v3; // r15
  char *v4; // r13
  int m_nCount; // r14d
  CFieldPath *v6; // r12
  int v7; // eax
  int v8; // ebx
  int v9; // r14d
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // rsi
  int v16; // [rsp+Ch] [rbp-54h]
  LeafCodeInfo_t v17; // [rsp+10h] [rbp-50h] BYREF

  v3 = buffer;
  v4 = &buffer[maxLenInChars];
  *buffer = 0;
  m_nCount = this->m_nCount;
  if ( this->m_bUsingExternalPaths )
  {
    if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
    {
      v17.m_szFile = "../public/tier2/fieldpath.h";
      v17.m_szFunction = "GetPathData";
      v17.m_nLine = 514;
      LoggingSystem_Log(LOG_GENERAL, LoggingSeverity_t::LS_ERROR, &v17, "GetPathData failed for read only CFieldPath");
    }
    if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v14, v15, v12, v13) != 0 )
      loc_0 = -559038737;
    Plat_ExitProcess(1);
    JUMPOUT(0x312738A);
  }
  v6 = this;
  if ( m_nCount > 0 )
  {
    v7 = m_nCount - 1;
    v8 = 1;
    v9 = m_nCount + 1;
    v16 = v7;
    do
    {
      V_snprintf(v3, v4 - v3, "%d", v6->u.m_FixedPaths[0].m_nValue);
      if ( v3 != 0 )
        v10 = strlen(v3);
      else
        v10 = 0;
      v3 += v10;
      if ( v8 - 1 != v16 )
      {
        _V_strncat(v3, "/", v4 - v3, 0xFFFFFFFFLL);
        if ( v3 != 0 )
          v11 = strlen(v3);
        else
          v11 = 0;
        v3 += v11;
      }
      ++v8;
      v6 = (v6 + 2);
    }
    while ( v8 != v9 );
  }
}


// CFieldPath::FromString  (line 155, @0x0000000003127390, libserver.so)  // inlines: CUtlString, IsUsingFixedPaths, LeafCodeInfo_t, Path_AddToTail, Push, ~CUtlString
// calls: CUtlString::Set, CUtlString::GetForModify, V_strtok, V_atoi, LoggingSystem_IsChannelEnabled, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...), Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, CUtlString::FreeMemoryBlock, _Unwind_Resume
// strings: "../public/tier2/fieldpath.h", "Path_AddToTail", "Path_AddToTail failed for read only CFieldPath", "Path_AddToTail failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)"
void __fastcall CFieldPath::FromString(CFieldPath *const this, const char *pchString)
{
  char *v3; // rax
  __int64 i; // rax
  __int64 m_nCount; // rdx
  int16 v6; // ax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdi
  __int64 v14; // rsi
  int v15; // edx
  int v16; // ecx
  int v17; // ebx
  int v18; // esi
  int v19; // r8d
  int v20; // r9d
  CUtlString temp; // [rsp+0h] [rbp-60h] BYREF
  LeafCodeInfo_t v22; // [rsp+10h] [rbp-50h] BYREF
  LeafCodeInfo_t v23; // [rsp+30h] [rbp-30h] BYREF

  temp.m_pString = 0;
  CUtlString::Set(&temp, pchString);
  v3 = CUtlString::GetForModify(&temp);
  for ( i = V_strtok(v3, "/"); i != 0; i = V_strtok(0, "/") )
  {
    v6 = V_atoi(i);
    if ( this->m_bUsingExternalPaths )
    {
      if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
      {
        v23.m_szFile = "../public/tier2/fieldpath.h";
        v23.m_szFunction = "Path_AddToTail";
        v23.m_nLine = 428;
        LoggingSystem_Log(
          LOG_GENERAL,
          LoggingSeverity_t::LS_ERROR,
          &v23,
          "Path_AddToTail failed for read only CFieldPath");
      }
      if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v9, v10, v7, v8) != 0 )
        loc_0 = -559038737;
      Plat_ExitProcess(1);
      break;
    }
    m_nCount = this->m_nCount;
    if ( m_nCount > 5 )
    {
      if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
      {
        v22.m_szFile = "../public/tier2/fieldpath.h";
        v22.m_szFunction = "Path_AddToTail";
        v22.m_nLine = 425;
        LoggingSystem_Log(
          LOG_GENERAL,
          LoggingSeverity_t::LS_ERROR,
          &v22,
          "Path_AddToTail failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)",
          6);
      }
      if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v13, v14, v11, v12) != 0 )
        loc_0 = -559038737;
      v17 = Plat_ExitProcess(1);
      if ( temp.m_pString != 0 )
        CUtlString::FreeMemoryBlock(&temp);
      Unwind_Resume(v17, v18, v15, v16, v19, v20);
    }
    this->m_nCount = m_nCount + 1;
    this->u.m_FixedPaths[m_nCount].m_nValue = v6;
  }
  if ( temp.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&temp);
}


// FieldOp_Write_PlusOne  (line 170, @0x0000000003117450, libserver.so)  // inlines: GetPathData, LeafCodeInfo_t, Set, operator[]
// calls: LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...)
// strings: "../public/tier2/fieldpath.h", "GetPathData", "GetPathData failed for read only CFieldPath"
void __fastcall FieldOp_Write_PlusOne(CFieldPath *const from, const CFieldPath *const to, bf_write *pWriteBuf)
{
  __int64 v3; // rbx
  __int64 v4; // rbp
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // r8
  __int64 v10; // r9
  LeafCodeInfo_t v11; // [rsp-38h] [rbp-38h] BYREF
  __int64 v12; // [rsp-10h] [rbp-10h]
  __int64 v13; // [rsp-8h] [rbp-8h]

  if ( from->m_bUsingExternalPaths )
  {
    v13 = v4;
    v12 = v3;
    if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
      goto LABEL_7;
    while ( 1 )
    {
      if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v7, v8, v5, v6) != 0 )
        loc_0 = -559038737;
      Plat_ExitProcess(1);
LABEL_7:
      v11.m_szFile = "../public/tier2/fieldpath.h";
      v11.m_szFunction = "GetPathData";
      v11.m_nLine = 514;
      LoggingSystem_Log(
        LOG_GENERAL,
        LoggingSeverity_t::LS_ERROR,
        &v11,
        "GetPathData failed for read only CFieldPath",
        v9,
        v10);
    }
  }
  ++from->u.m_FixedPaths[from->m_nCount - 1].m_nValue;
}


// FieldOp_Write_PlusTwo  (line 177, @0x00000000031174e0, libserver.so)  // inlines: GetPathData, LeafCodeInfo_t, Set, operator[]
// calls: LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...)
// strings: "../public/tier2/fieldpath.h", "GetPathData", "GetPathData failed for read only CFieldPath"
void __fastcall FieldOp_Write_PlusTwo(CFieldPath *const from, const CFieldPath *const to, bf_write *pWriteBuf)
{
  __int64 v3; // rbx
  __int64 v4; // rbp
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // r8
  __int64 v10; // r9
  LeafCodeInfo_t v11; // [rsp-38h] [rbp-38h] BYREF
  __int64 v12; // [rsp-10h] [rbp-10h]
  __int64 v13; // [rsp-8h] [rbp-8h]

  if ( from->m_bUsingExternalPaths )
  {
    v13 = v4;
    v12 = v3;
    if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
      goto LABEL_7;
    while ( 1 )
    {
      if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v7, v8, v5, v6) != 0 )
        loc_0 = -559038737;
      Plat_ExitProcess(1);
LABEL_7:
      v11.m_szFile = "../public/tier2/fieldpath.h";
      v11.m_szFunction = "GetPathData";
      v11.m_nLine = 514;
      LoggingSystem_Log(
        LOG_GENERAL,
        LoggingSeverity_t::LS_ERROR,
        &v11,
        "GetPathData failed for read only CFieldPath",
        v9,
        v10);
    }
  }
  from->u.m_FixedPaths[from->m_nCount - 1].m_nValue += 2;
}


// FieldOp_Write_PlusThree  (line 184, @0x0000000003117570, libserver.so)  // inlines: GetPathData, LeafCodeInfo_t, Set, operator[]
// calls: LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...)
// strings: "../public/tier2/fieldpath.h", "GetPathData", "GetPathData failed for read only CFieldPath"
void __fastcall FieldOp_Write_PlusThree(CFieldPath *const from, const CFieldPath *const to, bf_write *pWriteBuf)
{
  __int64 v3; // rbx
  __int64 v4; // rbp
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // r8
  __int64 v10; // r9
  LeafCodeInfo_t v11; // [rsp-38h] [rbp-38h] BYREF
  __int64 v12; // [rsp-10h] [rbp-10h]
  __int64 v13; // [rsp-8h] [rbp-8h]

  if ( from->m_bUsingExternalPaths )
  {
    v13 = v4;
    v12 = v3;
    if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
      goto LABEL_7;
    while ( 1 )
    {
      if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v7, v8, v5, v6) != 0 )
        loc_0 = -559038737;
      Plat_ExitProcess(1);
LABEL_7:
      v11.m_szFile = "../public/tier2/fieldpath.h";
      v11.m_szFunction = "GetPathData";
      v11.m_nLine = 514;
      LoggingSystem_Log(
        LOG_GENERAL,
        LoggingSeverity_t::LS_ERROR,
        &v11,
        "GetPathData failed for read only CFieldPath",
        v9,
        v10);
    }
  }
  from->u.m_FixedPaths[from->m_nCount - 1].m_nValue += 3;
}


// FieldOp_Write_PlusFour  (line 191, @0x0000000003117600, libserver.so)  // inlines: GetPathData, LeafCodeInfo_t, Set, operator[]
// calls: LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...)
// strings: "../public/tier2/fieldpath.h", "GetPathData", "GetPathData failed for read only CFieldPath"
void __fastcall FieldOp_Write_PlusFour(CFieldPath *const from, const CFieldPath *const to, bf_write *pWriteBuf)
{
  __int64 v3; // rbx
  __int64 v4; // rbp
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // r8
  __int64 v10; // r9
  LeafCodeInfo_t v11; // [rsp-38h] [rbp-38h] BYREF
  __int64 v12; // [rsp-10h] [rbp-10h]
  __int64 v13; // [rsp-8h] [rbp-8h]

  if ( from->m_bUsingExternalPaths )
  {
    v13 = v4;
    v12 = v3;
    if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
      goto LABEL_7;
    while ( 1 )
    {
      if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v7, v8, v5, v6) != 0 )
        loc_0 = -559038737;
      Plat_ExitProcess(1);
LABEL_7:
      v11.m_szFile = "../public/tier2/fieldpath.h";
      v11.m_szFunction = "GetPathData";
      v11.m_nLine = 514;
      LoggingSystem_Log(
        LOG_GENERAL,
        LoggingSeverity_t::LS_ERROR,
        &v11,
        "GetPathData failed for read only CFieldPath",
        v9,
        v10);
    }
  }
  from->u.m_FixedPaths[from->m_nCount - 1].m_nValue += 4;
}


// FieldOp_Write_PlusN  (line 198, @0x000000000311c2c0, libserver.so)  // inlines: CFieldPath_WriteUBitVar, GetDepth, GetNumBitsLeft, GetPathData, LeafCodeInfo_t, LoadLittleDWord, Set, SetOverflowFlag, WriteOneBit, WriteOneBitNoCheck, WriteUBitLong, operator[]
// calls: LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...)
// strings: "../public/tier2/fieldpath.h", "GetPathData", "GetPathData failed for read only CFieldPath"
void __fastcall FieldOp_Write_PlusN(CFieldPath *const from, const CFieldPath *const to, bf_write *pWriteBuf)
{
  __int64 v3; // rbx
  __int64 v4; // rbp
  __int64 v5; // rax
  const CFieldPath::Path_t *v6; // rcx
  int16 m_nValue; // cx
  CFieldPath *v8; // rsi
  int v9; // edi
  int v10; // edi
  unsigned __int64 v11; // rsi
  int v12; // eax
  int v13; // ecx
  char v14; // r9
  uint32 *v15; // r8
  int v16; // eax
  uint32 v17; // r10d
  uint32 *v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdi
  __int64 v22; // rsi
  __int64 v23; // r8
  __int64 v24; // r9
  int m_iCurBit; // ecx
  int m_nDataBits; // eax
  char v27; // r9
  uint32 *v28; // r8
  int v29; // edi
  uint32 v30; // r10d
  uint32 *v31; // rax
  int v32; // edx
  int v33; // edi
  int v34; // eax
  int v35; // edi
  uint32 *v36; // rax
  int v37; // edx
  int v38; // edi
  uint32 *v39; // rax
  int v40; // edx
  int v41; // edi
  uint32 *v42; // rax
  int v43; // edx
  LeafCodeInfo_t v44; // [rsp-38h] [rbp-38h] BYREF
  __int64 v45; // [rsp-10h] [rbp-10h]
  __int64 v46; // [rsp-8h] [rbp-8h]

  v5 = from->m_nCount - 1;
  v6 = (to + 2 * v5);
  if ( to->m_bUsingExternalPaths )
    v6 = &to->u.m_pPaths[v5];
  m_nValue = v6->m_nValue;
  if ( from->m_bUsingExternalPaths )
  {
    v46 = v4;
    v45 = v3;
    if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
    {
      v44.m_szFile = "../public/tier2/fieldpath.h";
      v44.m_szFunction = "GetPathData";
      v44.m_nLine = 514;
      LoggingSystem_Log(
        LOG_GENERAL,
        LoggingSeverity_t::LS_ERROR,
        &v44,
        "GetPathData failed for read only CFieldPath",
        v23,
        v24);
    }
    if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v21, v22, v19, v20) != 0 )
      loc_0 = -559038737;
    Plat_ExitProcess(1);
LABEL_14:
    m_iCurBit = pWriteBuf->m_iCurBit;
    m_nDataBits = pWriteBuf->m_nDataBits;
    if ( m_iCurBit >= m_nDataBits )
    {
      pWriteBuf->m_bOverflow = 1;
      if ( v11 <= 0xF )
        goto LABEL_16;
    }
    else
    {
      pWriteBuf->m_pData[m_iCurBit >> 5] &= ~(1 << m_iCurBit);
      m_iCurBit = pWriteBuf->m_iCurBit + 1;
      m_nDataBits = pWriteBuf->m_nDataBits;
      pWriteBuf->m_iCurBit = m_iCurBit;
      if ( v11 <= 0xF )
      {
LABEL_16:
        if ( m_nDataBits <= m_iCurBit )
        {
          pWriteBuf->m_bOverflow = 1;
        }
        else
        {
          pWriteBuf->m_pData[m_iCurBit >> 5] |= 1 << m_iCurBit;
          m_iCurBit = pWriteBuf->m_iCurBit + 1;
          m_nDataBits = pWriteBuf->m_nDataBits;
          pWriteBuf->m_iCurBit = m_iCurBit;
        }
        if ( m_nDataBits - m_iCurBit <= 3 )
          goto LABEL_19;
        pWriteBuf->m_iCurBit = m_iCurBit + 4;
        v27 = m_iCurBit & 0x1F;
        v28 = &pWriteBuf->m_pData[m_iCurBit >> 5];
        v41 = __ROL4__(v10, m_iCurBit & 0x1F);
        v30 = *v28;
        v42 = &v28[(7u >> (31 - (m_iCurBit & 0x1F))) & 1];
        v43 = v41 ^ *v42;
        v33 = *v28 ^ v41;
        *v42 ^= (7u >> (31 - (m_iCurBit & 0x1F))) & v43;
        v34 = 15;
        goto LABEL_44;
      }
      if ( m_nDataBits > m_iCurBit )
      {
        pWriteBuf->m_pData[m_iCurBit >> 5] &= ~(1 << m_iCurBit);
        m_iCurBit = pWriteBuf->m_iCurBit + 1;
        m_nDataBits = pWriteBuf->m_nDataBits;
        pWriteBuf->m_iCurBit = m_iCurBit;
        if ( v11 <= 0x3FF )
        {
LABEL_22:
          if ( m_iCurBit >= m_nDataBits )
          {
            pWriteBuf->m_bOverflow = 1;
          }
          else
          {
            pWriteBuf->m_pData[m_iCurBit >> 5] |= 1 << m_iCurBit;
            m_iCurBit = pWriteBuf->m_iCurBit + 1;
            m_nDataBits = pWriteBuf->m_nDataBits;
            pWriteBuf->m_iCurBit = m_iCurBit;
          }
          if ( m_nDataBits - m_iCurBit <= 9 )
            goto LABEL_19;
          pWriteBuf->m_iCurBit = m_iCurBit + 10;
          v27 = m_iCurBit & 0x1F;
          v28 = &pWriteBuf->m_pData[m_iCurBit >> 5];
          v29 = __ROL4__(v10, m_iCurBit & 0x1F);
          v30 = *v28;
          v31 = &v28[(0x1FFu >> (31 - (m_iCurBit & 0x1F))) & 1];
          v32 = v29 ^ *v31;
          v33 = *v28 ^ v29;
          *v31 ^= (0x1FFu >> (31 - (m_iCurBit & 0x1F))) & v32;
          v34 = 1023;
          goto LABEL_44;
        }
        if ( m_nDataBits > m_iCurBit )
        {
          pWriteBuf->m_pData[m_iCurBit >> 5] &= ~(1 << m_iCurBit);
          m_iCurBit = pWriteBuf->m_iCurBit + 1;
          m_nDataBits = pWriteBuf->m_nDataBits;
          pWriteBuf->m_iCurBit = m_iCurBit;
          if ( v11 <= 0x1FFFF )
            goto LABEL_37;
          if ( m_nDataBits > m_iCurBit )
          {
            pWriteBuf->m_pData[m_iCurBit >> 5] &= ~(1 << m_iCurBit);
            m_iCurBit = pWriteBuf->m_iCurBit + 1;
            m_nDataBits = pWriteBuf->m_nDataBits;
            pWriteBuf->m_iCurBit = m_iCurBit;
            goto LABEL_32;
          }
LABEL_31:
          pWriteBuf->m_bOverflow = 1;
LABEL_32:
          if ( m_nDataBits - m_iCurBit <= 30 )
          {
LABEL_19:
            pWriteBuf->m_iCurBit = m_nDataBits;
            pWriteBuf->m_bOverflow = 1;
            return;
          }
          pWriteBuf->m_iCurBit = m_iCurBit + 31;
          v27 = m_iCurBit & 0x1F;
          v28 = &pWriteBuf->m_pData[m_iCurBit >> 5];
          v35 = __ROL4__(v10, m_iCurBit & 0x1F);
          v30 = *v28;
          v36 = &v28[(0x3FFFFFFFu >> (31 - (m_iCurBit & 0x1F))) & 1];
          v37 = v35 ^ *v36;
          v33 = *v28 ^ v35;
          *v36 ^= (0x3FFFFFFFu >> (31 - (m_iCurBit & 0x1F))) & v37;
          v34 = 0x7FFFFFFF;
LABEL_44:
          *v28 = v30 ^ (v34 << v27) & v33;
          return;
        }
LABEL_30:
        pWriteBuf->m_bOverflow = 1;
        if ( v11 <= 0x1FFFF )
        {
LABEL_37:
          if ( m_iCurBit >= m_nDataBits )
          {
            pWriteBuf->m_bOverflow = 1;
          }
          else
          {
            pWriteBuf->m_pData[m_iCurBit >> 5] |= 1 << m_iCurBit;
            m_iCurBit = pWriteBuf->m_iCurBit + 1;
            m_nDataBits = pWriteBuf->m_nDataBits;
            pWriteBuf->m_iCurBit = m_iCurBit;
          }
          if ( m_nDataBits - m_iCurBit <= 16 )
            goto LABEL_19;
          pWriteBuf->m_iCurBit = m_iCurBit + 17;
          v27 = m_iCurBit & 0x1F;
          v28 = &pWriteBuf->m_pData[m_iCurBit >> 5];
          v38 = __ROL4__(v10, m_iCurBit & 0x1F);
          v30 = *v28;
          v39 = &v28[(0xFFFFu >> (31 - (m_iCurBit & 0x1F))) & 1];
          v40 = v38 ^ *v39;
          v33 = *v28 ^ v38;
          *v39 ^= (0xFFFFu >> (31 - (m_iCurBit & 0x1F))) & v40;
          v34 = 0x1FFFF;
          goto LABEL_44;
        }
        goto LABEL_31;
      }
    }
    pWriteBuf->m_bOverflow = 1;
    if ( v11 <= 0x3FF )
      goto LABEL_22;
    goto LABEL_30;
  }
  v8 = (from + 2 * v5);
  v9 = v8->u.m_FixedPaths[0].m_nValue;
  v8->u.m_FixedPaths[0].m_nValue = m_nValue;
  v10 = m_nValue - v9 - 5;
  v11 = v10;
  if ( v10 > 3 )
    goto LABEL_14;
  v12 = pWriteBuf->m_iCurBit;
  v13 = pWriteBuf->m_nDataBits;
  if ( v12 >= v13 )
  {
    pWriteBuf->m_bOverflow = 1;
  }
  else
  {
    pWriteBuf->m_pData[v12 >> 5] |= 1 << v12;
    v13 = pWriteBuf->m_nDataBits;
    v12 = pWriteBuf->m_iCurBit + 1;
    pWriteBuf->m_iCurBit = v12;
  }
  if ( v13 - v12 <= 1 )
  {
    pWriteBuf->m_iCurBit = v13;
    pWriteBuf->m_bOverflow = 1;
  }
  else
  {
    pWriteBuf->m_iCurBit = v12 + 2;
    v14 = v12 & 0x1F;
    v15 = &pWriteBuf->m_pData[v12 >> 5];
    v16 = __ROL4__(v10, v12 & 0x1F);
    v17 = *v15;
    v18 = &v15[1u >> (31 - v14)];
    *v18 ^= (1u >> (31 - v14)) & (v16 ^ *v18);
    *v15 = v17 ^ (3 << v14) & (v17 ^ v16);
  }
}


// FieldOp_Write_PushOneLeftDeltaZeroRightZero  (line 210, @0x00000000031178a0, libserver.so)  // inlines: IsUsingFixedPaths, LeafCodeInfo_t, Path_AddToTail, Push
// calls: LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...)
// strings: "../public/tier2/fieldpath.h", "Path_AddToTail", "Path_AddToTail failed for read only CFieldPath", "Path_AddToTail failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)"
void __fastcall FieldOp_Write_PushOneLeftDeltaZeroRightZero(
        CFieldPath *const from,
        const CFieldPath *const to,
        bf_write *pWriteBuf)
{
  __int64 m_nCount; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // r8
  __int64 v9; // r9
  LeafCodeInfo_t v10; // [rsp+0h] [rbp-30h] BYREF

  if ( from->m_bUsingExternalPaths )
  {
    if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
      goto LABEL_8;
    while ( 1 )
    {
LABEL_5:
      if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v6, v7, v4, v5) != 0 )
        loc_0 = -559038737;
      Plat_ExitProcess(1);
LABEL_8:
      v10.m_szFile = "../public/tier2/fieldpath.h";
      v10.m_szFunction = "Path_AddToTail";
      v10.m_nLine = 428;
      LoggingSystem_Log(
        LOG_GENERAL,
        LoggingSeverity_t::LS_ERROR,
        &v10,
        "Path_AddToTail failed for read only CFieldPath",
        v8,
        v9);
    }
  }
  m_nCount = from->m_nCount;
  if ( m_nCount > 5 )
  {
    if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
    {
      v10.m_szFile = "../public/tier2/fieldpath.h";
      v10.m_szFunction = "Path_AddToTail";
      v10.m_nLine = 425;
      LoggingSystem_Log(
        LOG_GENERAL,
        LoggingSeverity_t::LS_ERROR,
        &v10,
        "Path_AddToTail failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)",
        6);
    }
    goto LABEL_5;
  }
  from->m_nCount = m_nCount + 1;
  from->u.m_FixedPaths[m_nCount].m_nValue = 0;
}


// FieldOp_Write_PushOneLeftDeltaZeroRightNonZero  (line 216, @0x000000000311b200, libserver.so)  // inlines: CFieldPath_WriteUBitVar, GetDepth, GetNumBitsLeft, GetPathData, IsUsingFixedPaths, LeafCodeInfo_t, LoadLittleDWord, Path_AddToTail, Push, SetOverflowFlag, WriteOneBit, WriteOneBitNoCheck, WriteUBitLong, operator[]
// calls: LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...)
// strings: "../public/tier2/fieldpath.h", "Path_AddToTail", "Path_AddToTail failed for read only CFieldPath", "Path_AddToTail failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)"
void __fastcall FieldOp_Write_PushOneLeftDeltaZeroRightNonZero(
        CFieldPath *const from,
        const CFieldPath *const to,
        bf_write *pWriteBuf)
{
  __int64 v3; // rax
  const CFieldPath::Path_t *i; // rax
  unsigned __int64 m_nValue; // rsi
  __int64 m_nCount; // rax
  int v7; // eax
  int v8; // ecx
  char v9; // r8
  int v10; // esi
  uint32 *v11; // rdi
  uint32 v12; // r9d
  uint32 *v13; // rcx
  int v14; // eax
  int v15; // esi
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdi
  __int64 v20; // rsi
  __int64 v21; // r8
  __int64 v22; // r9
  int m_iCurBit; // ecx
  int m_nDataBits; // eax
  int v25; // esi
  uint32 *v26; // rcx
  int v27; // eax
  int v28; // esi
  uint32 *v29; // rcx
  int v30; // eax
  int v31; // esi
  uint32 *v32; // rcx
  int v33; // eax
  int v34; // esi
  uint32 *v35; // rcx
  int v36; // eax
  LeafCodeInfo_t v37; // [rsp+0h] [rbp-30h] BYREF

  v3 = to->m_nCount - 1;
  if ( to->m_bUsingExternalPaths )
    goto LABEL_16;
  for ( i = (to + 2 * v3); ; i = &to->u.m_pPaths[v3] )
  {
    m_nValue = i->m_nValue;
    if ( from->m_bUsingExternalPaths )
    {
      if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
      {
        v37.m_szFile = "../public/tier2/fieldpath.h";
        v37.m_szFunction = "Path_AddToTail";
        v37.m_nLine = 428;
        LoggingSystem_Log(
          LOG_GENERAL,
          LoggingSeverity_t::LS_ERROR,
          &v37,
          "Path_AddToTail failed for read only CFieldPath",
          v21,
          v22);
      }
      goto LABEL_13;
    }
    m_nCount = from->m_nCount;
    if ( m_nCount <= 5 )
      break;
    if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
    {
      v37.m_szFile = "../public/tier2/fieldpath.h";
      v37.m_szFunction = "Path_AddToTail";
      v37.m_nLine = 425;
      LoggingSystem_Log(
        LOG_GENERAL,
        LoggingSeverity_t::LS_ERROR,
        &v37,
        "Path_AddToTail failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)",
        6);
    }
LABEL_13:
    if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v19, v20, v17, v18) != 0 )
      loc_0 = -559038737;
    v3 = Plat_ExitProcess(1);
LABEL_16:
    ;
  }
  from->m_nCount = m_nCount + 1;
  from->u.m_FixedPaths[m_nCount].m_nValue = m_nValue;
  if ( m_nValue > 3 )
  {
    m_iCurBit = pWriteBuf->m_iCurBit;
    m_nDataBits = pWriteBuf->m_nDataBits;
    if ( m_iCurBit >= m_nDataBits )
    {
      pWriteBuf->m_bOverflow = 1;
      if ( m_nValue <= 0xF )
        goto LABEL_19;
    }
    else
    {
      pWriteBuf->m_pData[m_iCurBit >> 5] &= ~(1 << m_iCurBit);
      m_iCurBit = pWriteBuf->m_iCurBit + 1;
      m_nDataBits = pWriteBuf->m_nDataBits;
      pWriteBuf->m_iCurBit = m_iCurBit;
      if ( m_nValue <= 0xF )
      {
LABEL_19:
        if ( m_iCurBit >= m_nDataBits )
        {
          pWriteBuf->m_bOverflow = 1;
        }
        else
        {
          pWriteBuf->m_pData[m_iCurBit >> 5] |= 1 << m_iCurBit;
          m_iCurBit = pWriteBuf->m_iCurBit + 1;
          m_nDataBits = pWriteBuf->m_nDataBits;
          pWriteBuf->m_iCurBit = m_iCurBit;
        }
        if ( m_nDataBits - m_iCurBit <= 3 )
          goto LABEL_22;
        pWriteBuf->m_iCurBit = m_iCurBit + 4;
        v9 = m_iCurBit & 0x1F;
        v11 = &pWriteBuf->m_pData[m_iCurBit >> 5];
        v34 = __ROL4__(m_nValue, m_iCurBit & 0x1F);
        v12 = *v11;
        v35 = &v11[(7u >> (31 - (m_iCurBit & 0x1F))) & 1];
        v36 = v34 ^ *v35;
        v15 = *v11 ^ v34;
        *v35 ^= (7u >> (31 - v9)) & v36;
        v16 = 15;
        goto LABEL_10;
      }
      if ( m_nDataBits > m_iCurBit )
      {
        pWriteBuf->m_pData[m_iCurBit >> 5] &= ~(1 << m_iCurBit);
        m_iCurBit = pWriteBuf->m_iCurBit + 1;
        m_nDataBits = pWriteBuf->m_nDataBits;
        pWriteBuf->m_iCurBit = m_iCurBit;
        if ( m_nValue <= 0x3FF )
        {
LABEL_25:
          if ( m_iCurBit >= m_nDataBits )
          {
            pWriteBuf->m_bOverflow = 1;
          }
          else
          {
            pWriteBuf->m_pData[m_iCurBit >> 5] |= 1 << m_iCurBit;
            m_iCurBit = pWriteBuf->m_iCurBit + 1;
            m_nDataBits = pWriteBuf->m_nDataBits;
            pWriteBuf->m_iCurBit = m_iCurBit;
          }
          if ( m_nDataBits - m_iCurBit <= 9 )
            goto LABEL_22;
          pWriteBuf->m_iCurBit = m_iCurBit + 10;
          v9 = m_iCurBit & 0x1F;
          v11 = &pWriteBuf->m_pData[m_iCurBit >> 5];
          v25 = __ROL4__(m_nValue, m_iCurBit & 0x1F);
          v12 = *v11;
          v26 = &v11[(0x1FFu >> (31 - (m_iCurBit & 0x1F))) & 1];
          v27 = v25 ^ *v26;
          v15 = *v11 ^ v25;
          *v26 ^= (0x1FFu >> (31 - v9)) & v27;
          v16 = 1023;
          goto LABEL_10;
        }
        if ( m_iCurBit < m_nDataBits )
        {
          pWriteBuf->m_pData[m_iCurBit >> 5] &= ~(1 << m_iCurBit);
          m_iCurBit = pWriteBuf->m_iCurBit + 1;
          m_nDataBits = pWriteBuf->m_nDataBits;
          pWriteBuf->m_iCurBit = m_iCurBit;
          if ( m_nValue <= 0x1FFFF )
            goto LABEL_40;
          if ( m_nDataBits > m_iCurBit )
          {
            pWriteBuf->m_pData[m_iCurBit >> 5] &= ~(1 << m_iCurBit);
            m_iCurBit = pWriteBuf->m_iCurBit + 1;
            m_nDataBits = pWriteBuf->m_nDataBits;
            pWriteBuf->m_iCurBit = m_iCurBit;
            goto LABEL_35;
          }
LABEL_34:
          pWriteBuf->m_bOverflow = 1;
LABEL_35:
          if ( m_nDataBits - m_iCurBit <= 30 )
          {
LABEL_22:
            pWriteBuf->m_iCurBit = m_nDataBits;
            pWriteBuf->m_bOverflow = 1;
            return;
          }
          pWriteBuf->m_iCurBit = m_iCurBit + 31;
          v9 = m_iCurBit & 0x1F;
          v11 = &pWriteBuf->m_pData[m_iCurBit >> 5];
          v28 = __ROL4__(m_nValue, m_iCurBit & 0x1F);
          v12 = *v11;
          v29 = &v11[(0x3FFFFFFFu >> (31 - (m_iCurBit & 0x1F))) & 1];
          v30 = v28 ^ *v29;
          v15 = *v11 ^ v28;
          *v29 ^= (0x3FFFFFFFu >> (31 - v9)) & v30;
          v16 = 0x7FFFFFFF;
LABEL_10:
          *v11 = v12 ^ (v16 << v9) & v15;
          return;
        }
LABEL_33:
        pWriteBuf->m_bOverflow = 1;
        if ( m_nValue <= 0x1FFFF )
        {
LABEL_40:
          if ( m_nDataBits <= m_iCurBit )
          {
            pWriteBuf->m_bOverflow = 1;
          }
          else
          {
            pWriteBuf->m_pData[m_iCurBit >> 5] |= 1 << m_iCurBit;
            m_iCurBit = pWriteBuf->m_iCurBit + 1;
            m_nDataBits = pWriteBuf->m_nDataBits;
            pWriteBuf->m_iCurBit = m_iCurBit;
          }
          if ( m_nDataBits - m_iCurBit <= 16 )
            goto LABEL_22;
          pWriteBuf->m_iCurBit = m_iCurBit + 17;
          v9 = m_iCurBit & 0x1F;
          v11 = &pWriteBuf->m_pData[m_iCurBit >> 5];
          v31 = __ROL4__(m_nValue, m_iCurBit & 0x1F);
          v12 = *v11;
          v32 = &v11[(0xFFFFu >> (31 - (m_iCurBit & 0x1F))) & 1];
          v33 = v31 ^ *v32;
          v15 = *v11 ^ v31;
          *v32 ^= (0xFFFFu >> (31 - v9)) & v33;
          v16 = 0x1FFFF;
          goto LABEL_10;
        }
        goto LABEL_34;
      }
    }
    pWriteBuf->m_bOverflow = 1;
    if ( m_nValue <= 0x3FF )
      goto LABEL_25;
    goto LABEL_33;
  }
  v7 = pWriteBuf->m_iCurBit;
  v8 = pWriteBuf->m_nDataBits;
  if ( v7 >= v8 )
  {
    pWriteBuf->m_bOverflow = 1;
  }
  else
  {
    pWriteBuf->m_pData[v7 >> 5] |= 1 << v7;
    v8 = pWriteBuf->m_nDataBits;
    v7 = pWriteBuf->m_iCurBit + 1;
    pWriteBuf->m_iCurBit = v7;
  }
  if ( v8 - v7 > 1 )
  {
    pWriteBuf->m_iCurBit = v7 + 2;
    v9 = v7 & 0x1F;
    v10 = __ROL4__(m_nValue, v7 & 0x1F);
    v11 = &pWriteBuf->m_pData[v7 >> 5];
    v12 = *v11;
    v13 = &v11[1u >> (31 - (v7 & 0x1F))];
    v14 = v10 ^ *v13;
    v15 = *v11 ^ v10;
    *v13 ^= (1u >> (31 - v9)) & v14;
    v16 = 3;
    goto LABEL_10;
  }
  pWriteBuf->m_iCurBit = v8;
  pWriteBuf->m_bOverflow = 1;
}


// FieldOp_Write_PushOneLeftDeltaOneRightZero  (line 225, @0x0000000003117690, libserver.so)  // inlines: GetPathData, IsUsingFixedPaths, LeafCodeInfo_t, Path_AddToTail, Push, Set, operator[]
// calls: LoggingSystem_IsChannelEnabled, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...), Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess
// strings: "../public/tier2/fieldpath.h", "GetPathData", "GetPathData failed for read only CFieldPath", "Path_AddToTail", "Path_AddToTail failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)", "Path_AddToTail failed for read only CFieldPath"
void __fastcall FieldOp_Write_PushOneLeftDeltaOneRightZero(
        CFieldPath *const from,
        const CFieldPath *const to,
        bf_write *pWriteBuf)
{
  __int64 m_nCount; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r8
  __int64 v11; // r9
  LeafCodeInfo_t v12; // [rsp+0h] [rbp-30h] BYREF

  if ( from->m_bUsingExternalPaths )
  {
    if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
    {
      v12.m_szFile = "../public/tier2/fieldpath.h";
      v12.m_szFunction = "GetPathData";
      v12.m_nLine = 514;
      LoggingSystem_Log(
        LOG_GENERAL,
        LoggingSeverity_t::LS_ERROR,
        &v12,
        "GetPathData failed for read only CFieldPath",
        v8,
        v9);
    }
    goto LABEL_9;
  }
  ++from->u.m_FixedPaths[from->m_nCount - 1].m_nValue;
  if ( from->m_bUsingExternalPaths )
  {
    if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
    {
      v12.m_szFile = "../public/tier2/fieldpath.h";
      v12.m_szFunction = "Path_AddToTail";
      v12.m_nLine = 428;
      LoggingSystem_Log(
        LOG_GENERAL,
        LoggingSeverity_t::LS_ERROR,
        &v12,
        "Path_AddToTail failed for read only CFieldPath",
        v10,
        v11);
    }
    goto LABEL_9;
  }
  m_nCount = from->m_nCount;
  if ( m_nCount > 5 )
  {
    while ( 1 )
    {
      if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
      {
        v12.m_szFile = "../public/tier2/fieldpath.h";
        v12.m_szFunction = "Path_AddToTail";
        v12.m_nLine = 425;
        LoggingSystem_Log(
          LOG_GENERAL,
          LoggingSeverity_t::LS_ERROR,
          &v12,
          "Path_AddToTail failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)",
          6);
      }
LABEL_9:
      if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v6, v7, v4, v5) != 0 )
        loc_0 = -559038737;
      Plat_ExitProcess(1);
    }
  }
  from->m_nCount = m_nCount + 1;
  from->u.m_FixedPaths[m_nCount].m_nValue = 0;
}


// FieldOp_Write_PushOneLeftDeltaOneRightNonZero  (line 233, @0x000000000311dcf0, libserver.so)  // inlines: CFieldPath_WriteUBitVar, GetDepth, GetNumBitsLeft, GetPathData, IsUsingFixedPaths, LeafCodeInfo_t, LoadLittleDWord, Path_AddToTail, Push, Set, SetOverflowFlag, WriteOneBit, WriteOneBitNoCheck, WriteUBitLong, operator[]
// calls: LoggingSystem_IsChannelEnabled, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...), Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess
// strings: "../public/tier2/fieldpath.h", "GetPathData", "GetPathData failed for read only CFieldPath", "Path_AddToTail", "Path_AddToTail failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)", "Path_AddToTail failed for read only CFieldPath"
void __fastcall FieldOp_Write_PushOneLeftDeltaOneRightNonZero(
        CFieldPath *const from,
        const CFieldPath *const to,
        bf_write *pWriteBuf)
{
  int v3; // eax
  unsigned __int64 m_nValue; // rsi
  __int64 m_nCount; // rax
  int v6; // eax
  int v7; // ecx
  char v8; // r8
  int v9; // esi
  uint32 *v10; // rdi
  uint32 v11; // r9d
  uint32 *v12; // rcx
  int v13; // eax
  int v14; // esi
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdi
  __int64 v19; // rsi
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // r8
  __int64 v23; // r9
  int m_iCurBit; // ecx
  int m_nDataBits; // eax
  int v26; // esi
  uint32 *v27; // rcx
  int v28; // eax
  int v29; // esi
  uint32 *v30; // rcx
  int v31; // eax
  int v32; // esi
  uint32 *v33; // rcx
  int v34; // eax
  int v35; // esi
  uint32 *v36; // rcx
  int v37; // eax
  LeafCodeInfo_t v38; // [rsp+0h] [rbp-30h] BYREF

  if ( from->m_bUsingExternalPaths )
  {
    if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
    {
      v38.m_szFile = "../public/tier2/fieldpath.h";
      v38.m_szFunction = "GetPathData";
      v38.m_nLine = 514;
      LoggingSystem_Log(
        LOG_GENERAL,
        LoggingSeverity_t::LS_ERROR,
        &v38,
        "GetPathData failed for read only CFieldPath",
        v20,
        v21);
    }
    goto LABEL_16;
  }
  ++from->u.m_FixedPaths[from->m_nCount - 1].m_nValue;
  v3 = to->m_nCount - 1;
  if ( to->m_bUsingExternalPaths )
  {
    m_nValue = to->u.m_pPaths[v3].m_nValue;
    if ( !from->m_bUsingExternalPaths )
      goto LABEL_4;
LABEL_14:
    if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
    {
      v38.m_szFile = "../public/tier2/fieldpath.h";
      v38.m_szFunction = "Path_AddToTail";
      v38.m_nLine = 428;
      LoggingSystem_Log(
        LOG_GENERAL,
        LoggingSeverity_t::LS_ERROR,
        &v38,
        "Path_AddToTail failed for read only CFieldPath",
        v22,
        v23);
    }
    goto LABEL_16;
  }
  m_nValue = to->u.m_FixedPaths[v3].m_nValue;
  if ( from->m_bUsingExternalPaths )
    goto LABEL_14;
LABEL_4:
  m_nCount = from->m_nCount;
  if ( m_nCount > 5 )
  {
    if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
    {
      v38.m_szFile = "../public/tier2/fieldpath.h";
      v38.m_szFunction = "Path_AddToTail";
      v38.m_nLine = 425;
      LoggingSystem_Log(
        LOG_GENERAL,
        LoggingSeverity_t::LS_ERROR,
        &v38,
        "Path_AddToTail failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)",
        6);
    }
LABEL_16:
    if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v18, v19, v16, v17) != 0 )
      loc_0 = -559038737;
    Plat_ExitProcess(1);
LABEL_19:
    m_iCurBit = pWriteBuf->m_iCurBit;
    m_nDataBits = pWriteBuf->m_nDataBits;
    if ( m_iCurBit >= m_nDataBits )
    {
      pWriteBuf->m_bOverflow = 1;
      if ( m_nValue <= 0xF )
      {
LABEL_21:
        if ( m_iCurBit >= m_nDataBits )
        {
          pWriteBuf->m_bOverflow = 1;
        }
        else
        {
          pWriteBuf->m_pData[m_iCurBit >> 5] |= 1 << m_iCurBit;
          m_iCurBit = pWriteBuf->m_iCurBit + 1;
          m_nDataBits = pWriteBuf->m_nDataBits;
          pWriteBuf->m_iCurBit = m_iCurBit;
        }
        if ( m_nDataBits - m_iCurBit > 3 )
        {
          pWriteBuf->m_iCurBit = m_iCurBit + 4;
          v8 = m_iCurBit & 0x1F;
          v10 = &pWriteBuf->m_pData[m_iCurBit >> 5];
          v35 = __ROL4__(m_nValue, m_iCurBit & 0x1F);
          v11 = *v10;
          v36 = &v10[(7u >> (31 - (m_iCurBit & 0x1F))) & 1];
          v37 = v35 ^ *v36;
          v14 = *v10 ^ v35;
          *v36 ^= (7u >> (31 - v8)) & v37;
          v15 = 15;
          goto LABEL_10;
        }
LABEL_24:
        pWriteBuf->m_iCurBit = m_nDataBits;
        pWriteBuf->m_bOverflow = 1;
        return;
      }
    }
    else
    {
      pWriteBuf->m_pData[m_iCurBit >> 5] &= ~(1 << m_iCurBit);
      m_iCurBit = pWriteBuf->m_iCurBit + 1;
      m_nDataBits = pWriteBuf->m_nDataBits;
      pWriteBuf->m_iCurBit = m_iCurBit;
      if ( m_nValue <= 0xF )
        goto LABEL_21;
      if ( m_nDataBits > m_iCurBit )
      {
        pWriteBuf->m_pData[m_iCurBit >> 5] &= ~(1 << m_iCurBit);
        m_iCurBit = pWriteBuf->m_iCurBit + 1;
        m_nDataBits = pWriteBuf->m_nDataBits;
        pWriteBuf->m_iCurBit = m_iCurBit;
        if ( m_nValue <= 0x3FF )
          goto LABEL_27;
        if ( m_nDataBits > m_iCurBit )
        {
          pWriteBuf->m_pData[m_iCurBit >> 5] &= ~(1 << m_iCurBit);
          m_iCurBit = pWriteBuf->m_iCurBit + 1;
          m_nDataBits = pWriteBuf->m_nDataBits;
          pWriteBuf->m_iCurBit = m_iCurBit;
          if ( m_nValue <= 0x1FFFF )
          {
LABEL_42:
            if ( m_iCurBit >= m_nDataBits )
            {
              pWriteBuf->m_bOverflow = 1;
            }
            else
            {
              pWriteBuf->m_pData[m_iCurBit >> 5] |= 1 << m_iCurBit;
              m_iCurBit = pWriteBuf->m_iCurBit + 1;
              m_nDataBits = pWriteBuf->m_nDataBits;
              pWriteBuf->m_iCurBit = m_iCurBit;
            }
            if ( m_nDataBits - m_iCurBit > 16 )
            {
              pWriteBuf->m_iCurBit = m_iCurBit + 17;
              v8 = m_iCurBit & 0x1F;
              v10 = &pWriteBuf->m_pData[m_iCurBit >> 5];
              v32 = __ROL4__(m_nValue, m_iCurBit & 0x1F);
              v11 = *v10;
              v33 = &v10[(0xFFFFu >> (31 - (m_iCurBit & 0x1F))) & 1];
              v34 = v32 ^ *v33;
              v14 = *v10 ^ v32;
              *v33 ^= (0xFFFFu >> (31 - v8)) & v34;
              v15 = 0x1FFFF;
              goto LABEL_10;
            }
            goto LABEL_24;
          }
          if ( m_nDataBits > m_iCurBit )
          {
            pWriteBuf->m_pData[m_iCurBit >> 5] &= ~(1 << m_iCurBit);
            m_iCurBit = pWriteBuf->m_iCurBit + 1;
            m_nDataBits = pWriteBuf->m_nDataBits;
            pWriteBuf->m_iCurBit = m_iCurBit;
LABEL_37:
            if ( m_nDataBits - m_iCurBit > 30 )
            {
              pWriteBuf->m_iCurBit = m_iCurBit + 31;
              v8 = m_iCurBit & 0x1F;
              v10 = &pWriteBuf->m_pData[m_iCurBit >> 5];
              v29 = __ROL4__(m_nValue, m_iCurBit & 0x1F);
              v11 = *v10;
              v30 = &v10[(0x3FFFFFFFu >> (31 - (m_iCurBit & 0x1F))) & 1];
              v31 = v29 ^ *v30;
              v14 = *v10 ^ v29;
              *v30 ^= (0x3FFFFFFFu >> (31 - v8)) & v31;
              v15 = 0x7FFFFFFF;
              goto LABEL_10;
            }
            goto LABEL_24;
          }
LABEL_36:
          pWriteBuf->m_bOverflow = 1;
          goto LABEL_37;
        }
LABEL_35:
        pWriteBuf->m_bOverflow = 1;
        if ( m_nValue <= 0x1FFFF )
          goto LABEL_42;
        goto LABEL_36;
      }
    }
    pWriteBuf->m_bOverflow = 1;
    if ( m_nValue <= 0x3FF )
    {
LABEL_27:
      if ( m_iCurBit >= m_nDataBits )
      {
        pWriteBuf->m_bOverflow = 1;
      }
      else
      {
        pWriteBuf->m_pData[m_iCurBit >> 5] |= 1 << m_iCurBit;
        m_iCurBit = pWriteBuf->m_iCurBit + 1;
        m_nDataBits = pWriteBuf->m_nDataBits;
        pWriteBuf->m_iCurBit = m_iCurBit;
      }
      if ( m_nDataBits - m_iCurBit > 9 )
      {
        pWriteBuf->m_iCurBit = m_iCurBit + 10;
        v8 = m_iCurBit & 0x1F;
        v10 = &pWriteBuf->m_pData[m_iCurBit >> 5];
        v26 = __ROL4__(m_nValue, m_iCurBit & 0x1F);
        v11 = *v10;
        v27 = &v10[(0x1FFu >> (31 - (m_iCurBit & 0x1F))) & 1];
        v28 = v26 ^ *v27;
        v14 = *v10 ^ v26;
        *v27 ^= (0x1FFu >> (31 - v8)) & v28;
        v15 = 1023;
        goto LABEL_10;
      }
      goto LABEL_24;
    }
    goto LABEL_35;
  }
  from->m_nCount = m_nCount + 1;
  from->u.m_FixedPaths[m_nCount].m_nValue = m_nValue;
  if ( m_nValue > 3 )
    goto LABEL_19;
  v6 = pWriteBuf->m_iCurBit;
  v7 = pWriteBuf->m_nDataBits;
  if ( v6 >= v7 )
  {
    pWriteBuf->m_bOverflow = 1;
  }
  else
  {
    pWriteBuf->m_pData[v6 >> 5] |= 1 << v6;
    v7 = pWriteBuf->m_nDataBits;
    v6 = pWriteBuf->m_iCurBit + 1;
    pWriteBuf->m_iCurBit = v6;
  }
  if ( v7 - v6 > 1 )
  {
    pWriteBuf->m_iCurBit = v6 + 2;
    v8 = v6 & 0x1F;
    v9 = __ROL4__(m_nValue, v6 & 0x1F);
    v10 = &pWriteBuf->m_pData[v6 >> 5];
    v11 = *v10;
    v12 = &v10[1u >> (31 - (v6 & 0x1F))];
    v13 = v9 ^ *v12;
    v14 = *v10 ^ v9;
    *v12 ^= (1u >> (31 - v8)) & v13;
    v15 = 3;
LABEL_10:
    *v10 = v11 ^ (v15 << v8) & v14;
    return;
  }
  pWriteBuf->m_iCurBit = v7;
  pWriteBuf->m_bOverflow = 1;
}


// FieldOp_Write_PushOneLeftDeltaNRightZero  (line 244, @0x000000000311e6b0, libserver.so)  // inlines: CFieldPath_WriteUBitVar, GetDepth, GetNumBitsLeft, GetPathData, IsUsingFixedPaths, LeafCodeInfo_t, LoadLittleDWord, Path_AddToTail, Push, Set, SetOverflowFlag, WriteOneBit, WriteOneBitNoCheck, WriteUBitLong, operator[]
// calls: LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...)
// strings: "../public/tier2/fieldpath.h", "Path_AddToTail", "Path_AddToTail failed for read only CFieldPath", "Path_AddToTail failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)", "GetPathData", "GetPathData failed for read only CFieldPath"
void __fastcall FieldOp_Write_PushOneLeftDeltaNRightZero(
        CFieldPath *const from,
        const CFieldPath *const to,
        bf_write *pWriteBuf)
{
  __int64 v3; // rax
  const CFieldPath::Path_t *v4; // rcx
  int m_nValue; // r8d
  const CFieldPath::Path_t *v6; // rcx
  int v7; // r8d
  int m_iCurBit; // esi
  int m_nDataBits; // ecx
  char v10; // r11
  uint32 *v11; // r10
  int v12; // edx
  uint32 v13; // ebx
  uint32 *v14; // rcx
  int v15; // esi
  int v16; // edx
  int v17; // esi
  __int64 m_nCount; // rax
  int v19; // ecx
  int v20; // esi
  int v21; // edx
  uint32 *v22; // rcx
  int v23; // esi
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rdi
  __int64 v27; // rsi
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // r8
  __int64 v31; // r9
  int v32; // edx
  uint32 *v33; // rcx
  int v34; // esi
  int v35; // edx
  uint32 *v36; // rcx
  int v37; // esi
  int v38; // edx
  uint32 *v39; // rcx
  int v40; // esi
  LeafCodeInfo_t v41; // [rsp+0h] [rbp-30h] BYREF

  v3 = from->m_nCount - 1;
  v4 = (to + 2 * v3);
  if ( to->m_bUsingExternalPaths )
    v4 = &to->u.m_pPaths[v3];
  m_nValue = v4->m_nValue;
  v6 = (from + 2 * v3);
  if ( from->m_bUsingExternalPaths )
    v6 = &from->u.m_pPaths[v3];
  v7 = m_nValue - v6->m_nValue;
  if ( v7 <= 3 )
  {
    m_iCurBit = pWriteBuf->m_iCurBit;
    m_nDataBits = pWriteBuf->m_nDataBits;
    if ( m_iCurBit >= m_nDataBits )
    {
      pWriteBuf->m_bOverflow = 1;
    }
    else
    {
      pWriteBuf->m_pData[m_iCurBit >> 5] |= 1 << m_iCurBit;
      m_nDataBits = pWriteBuf->m_nDataBits;
      m_iCurBit = pWriteBuf->m_iCurBit + 1;
      pWriteBuf->m_iCurBit = m_iCurBit;
    }
    if ( m_nDataBits - m_iCurBit <= 1 )
    {
      pWriteBuf->m_iCurBit = m_nDataBits;
      pWriteBuf->m_bOverflow = 1;
LABEL_11:
      if ( !from->m_bUsingExternalPaths )
        goto LABEL_12;
LABEL_27:
      if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
      {
        v41.m_szFile = "../public/tier2/fieldpath.h";
        v41.m_szFunction = "GetPathData";
        v41.m_nLine = 514;
        LoggingSystem_Log(
          LOG_GENERAL,
          LoggingSeverity_t::LS_ERROR,
          &v41,
          "GetPathData failed for read only CFieldPath",
          v28,
          v29);
      }
      while ( 1 )
      {
LABEL_29:
        if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v26, v27, v24, v25) != 0 )
          loc_0 = -559038737;
        Plat_ExitProcess(1);
LABEL_32:
        if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
        {
          v41.m_szFile = "../public/tier2/fieldpath.h";
          v41.m_szFunction = "Path_AddToTail";
          v41.m_nLine = 428;
          LoggingSystem_Log(
            LOG_GENERAL,
            LoggingSeverity_t::LS_ERROR,
            &v41,
            "Path_AddToTail failed for read only CFieldPath",
            v30,
            v31);
        }
      }
    }
    pWriteBuf->m_iCurBit = m_iCurBit + 2;
    v10 = m_iCurBit & 0x1F;
    v11 = &pWriteBuf->m_pData[m_iCurBit >> 5];
    v12 = __ROL4__(v7, m_iCurBit & 0x1F);
    v13 = *v11;
    v14 = &v11[1u >> (31 - (m_iCurBit & 0x1F))];
    v15 = v12 ^ *v14;
    v16 = *v11 ^ v12;
    *v14 ^= (1u >> (31 - v10)) & v15;
    v17 = 3;
LABEL_10:
    *v11 = v13 ^ (v17 << v10) & v16;
    goto LABEL_11;
  }
  v19 = pWriteBuf->m_iCurBit;
  v20 = pWriteBuf->m_nDataBits;
  if ( v19 < v20 )
  {
    pWriteBuf->m_pData[v19 >> 5] &= ~(1 << v19);
    v20 = pWriteBuf->m_nDataBits;
    v19 = pWriteBuf->m_iCurBit + 1;
    pWriteBuf->m_iCurBit = v19;
    if ( v7 <= 0xF )
      goto LABEL_17;
    if ( v20 > v19 )
    {
      pWriteBuf->m_pData[v19 >> 5] &= ~(1 << v19);
      v20 = pWriteBuf->m_nDataBits;
      v19 = pWriteBuf->m_iCurBit + 1;
      pWriteBuf->m_iCurBit = v19;
      if ( v7 <= 0x3FF )
        goto LABEL_23;
      if ( v20 > v19 )
      {
        pWriteBuf->m_pData[v19 >> 5] &= ~(1 << v19);
        v20 = pWriteBuf->m_nDataBits;
        v19 = pWriteBuf->m_iCurBit + 1;
        pWriteBuf->m_iCurBit = v19;
        if ( v7 <= 0x1FFFF )
        {
LABEL_45:
          if ( v19 >= v20 )
          {
            pWriteBuf->m_bOverflow = 1;
          }
          else
          {
            pWriteBuf->m_pData[v19 >> 5] |= 1 << v19;
            v20 = pWriteBuf->m_nDataBits;
            v19 = pWriteBuf->m_iCurBit + 1;
            pWriteBuf->m_iCurBit = v19;
          }
          if ( v20 - v19 > 16 )
          {
            pWriteBuf->m_iCurBit = v19 + 17;
            v10 = v19 & 0x1F;
            v11 = &pWriteBuf->m_pData[v19 >> 5];
            v35 = __ROL4__(v7, v19 & 0x1F);
            v13 = *v11;
            v36 = &v11[(0xFFFFu >> (31 - (v19 & 0x1F))) & 1];
            v37 = v35 ^ *v36;
            v16 = *v11 ^ v35;
            *v36 ^= (0xFFFFu >> (31 - v10)) & v37;
            v17 = 0x1FFFF;
            goto LABEL_10;
          }
          goto LABEL_26;
        }
        if ( v20 > v19 )
        {
          pWriteBuf->m_pData[v19 >> 5] &= ~(1 << v19);
          v20 = pWriteBuf->m_nDataBits;
          v19 = pWriteBuf->m_iCurBit + 1;
          pWriteBuf->m_iCurBit = v19;
LABEL_39:
          if ( v20 - v19 > 30 )
          {
            pWriteBuf->m_iCurBit = v19 + 31;
            v10 = v19 & 0x1F;
            v11 = &pWriteBuf->m_pData[v19 >> 5];
            v32 = __ROL4__(v7, v19 & 0x1F);
            v13 = *v11;
            v33 = &v11[(0x3FFFFFFFu >> (31 - (v19 & 0x1F))) & 1];
            v34 = v32 ^ *v33;
            v16 = *v11 ^ v32;
            *v33 ^= (0x3FFFFFFFu >> (31 - v10)) & v34;
            v17 = 0x7FFFFFFF;
            goto LABEL_10;
          }
          goto LABEL_26;
        }
LABEL_38:
        pWriteBuf->m_bOverflow = 1;
        goto LABEL_39;
      }
LABEL_37:
      pWriteBuf->m_bOverflow = 1;
      if ( v7 <= 0x1FFFF )
        goto LABEL_45;
      goto LABEL_38;
    }
LABEL_36:
    pWriteBuf->m_bOverflow = 1;
    if ( v7 <= 0x3FF )
    {
LABEL_23:
      if ( v20 <= v19 )
      {
        pWriteBuf->m_bOverflow = 1;
      }
      else
      {
        pWriteBuf->m_pData[v19 >> 5] |= 1 << v19;
        v20 = pWriteBuf->m_nDataBits;
        v19 = pWriteBuf->m_iCurBit + 1;
        pWriteBuf->m_iCurBit = v19;
      }
      if ( v20 - v19 > 9 )
      {
        pWriteBuf->m_iCurBit = v19 + 10;
        v10 = v19 & 0x1F;
        v11 = &pWriteBuf->m_pData[v19 >> 5];
        v38 = __ROL4__(v7, v19 & 0x1F);
        v13 = *v11;
        v39 = &v11[(0x1FFu >> (31 - (v19 & 0x1F))) & 1];
        v40 = v38 ^ *v39;
        v16 = *v11 ^ v38;
        *v39 ^= (0x1FFu >> (31 - v10)) & v40;
        v17 = 1023;
        goto LABEL_10;
      }
      goto LABEL_26;
    }
    goto LABEL_37;
  }
  pWriteBuf->m_bOverflow = 1;
  if ( v7 > 0xF )
    goto LABEL_36;
LABEL_17:
  if ( v19 >= v20 )
  {
    pWriteBuf->m_bOverflow = 1;
  }
  else
  {
    pWriteBuf->m_pData[v19 >> 5] |= 1 << v19;
    v20 = pWriteBuf->m_nDataBits;
    v19 = pWriteBuf->m_iCurBit + 1;
    pWriteBuf->m_iCurBit = v19;
  }
  if ( v20 - v19 > 3 )
  {
    pWriteBuf->m_iCurBit = v19 + 4;
    v10 = v19 & 0x1F;
    v11 = &pWriteBuf->m_pData[v19 >> 5];
    v21 = __ROL4__(v7, v19 & 0x1F);
    v13 = *v11;
    v22 = &v11[(7u >> (31 - (v19 & 0x1F))) & 1];
    v23 = v21 ^ *v22;
    v16 = *v11 ^ v21;
    *v22 ^= (7u >> (31 - v10)) & v23;
    v17 = 15;
    goto LABEL_10;
  }
LABEL_26:
  pWriteBuf->m_iCurBit = v20;
  pWriteBuf->m_bOverflow = 1;
  if ( from->m_bUsingExternalPaths )
    goto LABEL_27;
LABEL_12:
  from->u.m_FixedPaths[v3].m_nValue += v7;
  if ( from->m_bUsingExternalPaths )
    goto LABEL_32;
  m_nCount = from->m_nCount;
  if ( m_nCount > 5 )
  {
    if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
    {
      v41.m_szFile = "../public/tier2/fieldpath.h";
      v41.m_szFunction = "Path_AddToTail";
      v41.m_nLine = 425;
      LoggingSystem_Log(
        LOG_GENERAL,
        LoggingSeverity_t::LS_ERROR,
        &v41,
        "Path_AddToTail failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)",
        6);
    }
    goto LABEL_29;
  }
  from->m_nCount = m_nCount + 1;
  from->u.m_FixedPaths[m_nCount].m_nValue = 0;
}


// FieldOp_Write_PushOneLeftDeltaNRightNonZero  (line 256, @0x000000000311ece0, libserver.so)  // inlines: CFieldPath_WriteUBitVar, GetDepth, GetNumBitsLeft, GetPathData, IsUsingFixedPaths, LeafCodeInfo_t, LoadLittleDWord, Path_AddToTail, Push, Set, SetOverflowFlag, WriteOneBit, WriteOneBitNoCheck, WriteUBitLong, operator[]
// calls: LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...), bf_write::WriteOneBit
// strings: "../public/tier2/fieldpath.h", "Path_AddToTail", "Path_AddToTail failed for read only CFieldPath", "Path_AddToTail failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)", "GetPathData", "GetPathData failed for read only CFieldPath"
void __fastcall FieldOp_Write_PushOneLeftDeltaNRightNonZero(
        CFieldPath *const from,
        const CFieldPath *const to,
        bf_write *pWriteBuf)
{
  __int64 m_nCount; // r15
  __int64 v6; // rax
  __int64 v7; // r13
  const CFieldPath::Path_t *v8; // rcx
  int m_nValue; // r14d
  const CFieldPath::Path_t *v10; // rcx
  int m_nDataBits; // esi
  int v12; // r14d
  int m_iCurBit; // ecx
  int v14; // r11d
  char v15; // r9
  uint32 *v16; // r8
  int v17; // r11d
  uint32 v18; // r10d
  uint32 *v19; // rcx
  int v20; // esi
  int v21; // r11d
  int v22; // esi
  const CFieldPath::Path_t *v23; // rax
  int16 v24; // ax
  __int64 v25; // rcx
  int v26; // ebx
  int v27; // eax
  int v28; // ecx
  char v29; // di
  int v30; // ebx
  uint32 *v31; // rsi
  uint32 v32; // r8d
  uint32 *v33; // rcx
  int v34; // eax
  int v35; // ebx
  int v36; // eax
  int v37; // r11d
  uint32 *v38; // rcx
  int v39; // esi
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rdi
  __int64 v43; // rsi
  int v44; // ecx
  int v45; // eax
  int v46; // ebx
  uint32 *v47; // rcx
  int v48; // eax
  int v49; // eax
  int v50; // ecx
  int v51; // r11d
  uint32 *v52; // rcx
  int v53; // esi
  int v54; // ebx
  uint32 *v55; // rcx
  int v56; // eax
  int v57; // ecx
  int v58; // r11d
  uint32 *v59; // rcx
  int v60; // esi
  int v61; // eax
  int v62; // ebx
  uint32 *v63; // rcx
  int v64; // eax
  int v65; // r11d
  uint32 *v66; // rcx
  int v67; // esi
  int v68; // ebx
  uint32 *v69; // rcx
  int v70; // eax
  int v71; // [rsp+0h] [rbp-60h]
  bf_write *pWriteBufa; // [rsp+8h] [rbp-58h]
  bf_write *pWriteBufb; // [rsp+8h] [rbp-58h]
  bf_write *pWriteBufc; // [rsp+8h] [rbp-58h]
  bf_write *pWriteBufd; // [rsp+8h] [rbp-58h]
  LeafCodeInfo_t v76; // [rsp+10h] [rbp-50h] BYREF

  m_nCount = from->m_nCount;
  v6 = m_nCount;
  v7 = m_nCount - 1;
  v8 = (to + 2 * v7);
  if ( to->m_bUsingExternalPaths )
    v8 = &to->u.m_pPaths[v7];
  m_nValue = v8->m_nValue;
  v10 = (from + 2 * v7);
  if ( from->m_bUsingExternalPaths )
    v10 = &from->u.m_pPaths[v7];
  m_nDataBits = pWriteBuf->m_nDataBits;
  v12 = m_nValue - v10->m_nValue;
  m_iCurBit = pWriteBuf->m_iCurBit;
  v14 = v12 - 2;
  if ( (v12 - 2) > 3 )
  {
    if ( m_iCurBit >= m_nDataBits )
    {
      pWriteBuf->m_bOverflow = 1;
      if ( v14 <= 0xF )
        goto LABEL_23;
    }
    else
    {
      pWriteBuf->m_pData[m_iCurBit >> 5] &= ~(1 << m_iCurBit);
      m_iCurBit = pWriteBuf->m_iCurBit + 1;
      m_nDataBits = pWriteBuf->m_nDataBits;
      pWriteBuf->m_iCurBit = m_iCurBit;
      if ( v14 <= 0xF )
      {
LABEL_23:
        if ( m_nDataBits <= m_iCurBit )
        {
          pWriteBuf->m_bOverflow = 1;
        }
        else
        {
          pWriteBuf->m_pData[m_iCurBit >> 5] |= 1 << m_iCurBit;
          m_nDataBits = pWriteBuf->m_nDataBits;
          m_iCurBit = pWriteBuf->m_iCurBit + 1;
          pWriteBuf->m_iCurBit = m_iCurBit;
        }
        if ( m_nDataBits - m_iCurBit <= 3 )
          goto LABEL_32;
        pWriteBuf->m_iCurBit = m_iCurBit + 4;
        v15 = m_iCurBit & 0x1F;
        v16 = &pWriteBuf->m_pData[m_iCurBit >> 5];
        v37 = __ROL4__(v14, m_iCurBit & 0x1F);
        v18 = *v16;
        v38 = &v16[(7u >> (31 - (m_iCurBit & 0x1F))) & 1];
        v39 = v37 ^ *v38;
        v21 = *v16 ^ v37;
        *v38 ^= (7u >> (31 - v15)) & v39;
        v22 = 15;
        goto LABEL_10;
      }
      if ( m_iCurBit < m_nDataBits )
      {
        pWriteBuf->m_pData[m_iCurBit >> 5] &= ~(1 << m_iCurBit);
        m_iCurBit = pWriteBuf->m_iCurBit + 1;
        m_nDataBits = pWriteBuf->m_nDataBits;
        pWriteBuf->m_iCurBit = m_iCurBit;
        if ( v14 <= 0x3FF )
        {
LABEL_29:
          if ( m_iCurBit >= m_nDataBits )
          {
            pWriteBuf->m_bOverflow = 1;
          }
          else
          {
            pWriteBuf->m_pData[m_iCurBit >> 5] |= 1 << m_iCurBit;
            m_nDataBits = pWriteBuf->m_nDataBits;
            m_iCurBit = pWriteBuf->m_iCurBit + 1;
            pWriteBuf->m_iCurBit = m_iCurBit;
          }
          if ( m_nDataBits - m_iCurBit <= 9 )
            goto LABEL_32;
          pWriteBuf->m_iCurBit = m_iCurBit + 10;
          v15 = m_iCurBit & 0x1F;
          v16 = &pWriteBuf->m_pData[m_iCurBit >> 5];
          v65 = __ROL4__(v14, m_iCurBit & 0x1F);
          v18 = *v16;
          v66 = &v16[(0x1FFu >> (31 - (m_iCurBit & 0x1F))) & 1];
          v67 = v65 ^ *v66;
          v21 = *v16 ^ v65;
          *v66 ^= (0x1FFu >> (31 - v15)) & v67;
          v22 = 1023;
LABEL_10:
          *v16 = v18 ^ (v22 << v15) & v21;
          if ( !from->m_bUsingExternalPaths )
            goto LABEL_11;
LABEL_33:
          if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
          {
            v76.m_szFile = "../public/tier2/fieldpath.h";
            v76.m_szFunction = "GetPathData";
            v76.m_nLine = 514;
            LoggingSystem_Log(
              LOG_GENERAL,
              LoggingSeverity_t::LS_ERROR,
              &v76,
              "GetPathData failed for read only CFieldPath");
          }
          while ( 1 )
          {
LABEL_35:
            if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v42, v43, v40, v41) != 0 )
              loc_0 = -559038737;
            Plat_ExitProcess(1);
LABEL_38:
            if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
            {
              v76.m_szFile = "../public/tier2/fieldpath.h";
              v76.m_szFunction = "Path_AddToTail";
              v76.m_nLine = 428;
              LoggingSystem_Log(
                LOG_GENERAL,
                LoggingSeverity_t::LS_ERROR,
                &v76,
                "Path_AddToTail failed for read only CFieldPath");
            }
          }
        }
        if ( m_iCurBit < m_nDataBits )
        {
          pWriteBuf->m_pData[m_iCurBit >> 5] &= ~(1 << m_iCurBit);
          ++pWriteBuf->m_iCurBit;
LABEL_70:
          v71 = v12 - 2;
          if ( v14 > 0x1FFFF )
          {
            pWriteBufc = pWriteBuf;
            bf_write::WriteOneBit(pWriteBuf, 0);
            pWriteBuf = pWriteBufc;
            v6 = m_nCount;
            m_nDataBits = pWriteBufc->m_nDataBits;
            v57 = pWriteBufc->m_iCurBit;
            if ( m_nDataBits - v57 <= 30 )
              goto LABEL_32;
            pWriteBufc->m_iCurBit = v57 + 31;
            v15 = v57 & 0x1F;
            v16 = &pWriteBufc->m_pData[v57 >> 5];
            v58 = __ROL4__(v71, v57 & 0x1F);
            v18 = *v16;
            v59 = &v16[(0x3FFFFFFFu >> (31 - (v57 & 0x1F))) & 1];
            v60 = v58 ^ *v59;
            v21 = *v16 ^ v58;
            *v59 ^= (0x3FFFFFFFu >> (31 - v15)) & v60;
            v22 = 0x7FFFFFFF;
          }
          else
          {
            pWriteBufb = pWriteBuf;
            bf_write::WriteOneBit(pWriteBuf, 1);
            pWriteBuf = pWriteBufb;
            v6 = m_nCount;
            m_nDataBits = pWriteBufb->m_nDataBits;
            v50 = pWriteBufb->m_iCurBit;
            if ( m_nDataBits - v50 <= 16 )
              goto LABEL_32;
            pWriteBufb->m_iCurBit = v50 + 17;
            v15 = v50 & 0x1F;
            v16 = &pWriteBufb->m_pData[v50 >> 5];
            v51 = __ROL4__(v71, v50 & 0x1F);
            v18 = *v16;
            v52 = &v16[(0xFFFFu >> (31 - (v50 & 0x1F))) & 1];
            v53 = v51 ^ *v52;
            v21 = *v16 ^ v51;
            *v52 ^= (0xFFFFu >> (31 - v15)) & v53;
            v22 = 0x1FFFF;
          }
          goto LABEL_10;
        }
LABEL_60:
        pWriteBuf->m_bOverflow = 1;
        goto LABEL_70;
      }
    }
    pWriteBuf->m_bOverflow = 1;
    if ( v14 <= 0x3FF )
      goto LABEL_29;
    goto LABEL_60;
  }
  if ( m_iCurBit >= m_nDataBits )
  {
    pWriteBuf->m_bOverflow = 1;
  }
  else
  {
    pWriteBuf->m_pData[m_iCurBit >> 5] |= 1 << m_iCurBit;
    m_nDataBits = pWriteBuf->m_nDataBits;
    m_iCurBit = pWriteBuf->m_iCurBit + 1;
    pWriteBuf->m_iCurBit = m_iCurBit;
  }
  if ( m_nDataBits - m_iCurBit > 1 )
  {
    pWriteBuf->m_iCurBit = m_iCurBit + 2;
    v15 = m_iCurBit & 0x1F;
    v16 = &pWriteBuf->m_pData[m_iCurBit >> 5];
    v17 = __ROL4__(v14, m_iCurBit & 0x1F);
    v18 = *v16;
    v19 = &v16[1u >> (31 - (m_iCurBit & 0x1F))];
    v20 = v17 ^ *v19;
    v21 = *v16 ^ v17;
    *v19 ^= (1u >> (31 - v15)) & v20;
    v22 = 3;
    goto LABEL_10;
  }
LABEL_32:
  pWriteBuf->m_iCurBit = m_nDataBits;
  pWriteBuf->m_bOverflow = 1;
  if ( from->m_bUsingExternalPaths )
    goto LABEL_33;
LABEL_11:
  from->u.m_FixedPaths[v7].m_nValue += v12;
  if ( to->m_bUsingExternalPaths )
    v23 = &to->u.m_pPaths[m_nCount];
  else
    v23 = (to + 2 * v6);
  v24 = v23->m_nValue;
  if ( from->m_bUsingExternalPaths )
    goto LABEL_38;
  v25 = from->m_nCount;
  if ( v25 > 5 )
  {
    if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
    {
      v76.m_szFile = "../public/tier2/fieldpath.h";
      v76.m_szFunction = "Path_AddToTail";
      v76.m_nLine = 425;
      LoggingSystem_Log(
        LOG_GENERAL,
        LoggingSeverity_t::LS_ERROR,
        &v76,
        "Path_AddToTail failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)",
        6);
    }
    goto LABEL_35;
  }
  from->m_nCount = v25 + 1;
  from->u.m_FixedPaths[v25].m_nValue = v24;
  v26 = v24 - 1;
  if ( v26 <= 3 )
  {
    v27 = pWriteBuf->m_iCurBit;
    v28 = pWriteBuf->m_nDataBits;
    if ( v27 >= v28 )
    {
      pWriteBuf->m_bOverflow = 1;
    }
    else
    {
      pWriteBuf->m_pData[v27 >> 5] |= 1 << v27;
      v28 = pWriteBuf->m_nDataBits;
      v27 = pWriteBuf->m_iCurBit + 1;
      pWriteBuf->m_iCurBit = v27;
    }
    if ( v28 - v27 > 1 )
    {
      pWriteBuf->m_iCurBit = v27 + 2;
      v29 = v27 & 0x1F;
      v30 = __ROL4__(v26, v27 & 0x1F);
      v31 = &pWriteBuf->m_pData[v27 >> 5];
      v32 = *v31;
      v33 = &v31[1u >> (31 - (v27 & 0x1F))];
      v34 = v30 ^ *v33;
      v35 = *v31 ^ v30;
      *v33 ^= (1u >> (31 - v29)) & v34;
      v36 = 3;
LABEL_20:
      *v31 = v32 ^ (v36 << v29) & v35;
      return;
    }
    goto LABEL_57;
  }
  v44 = pWriteBuf->m_iCurBit;
  v45 = pWriteBuf->m_nDataBits;
  if ( v44 >= v45 )
  {
    pWriteBuf->m_bOverflow = 1;
    if ( v26 <= 0xF )
    {
LABEL_43:
      if ( v44 >= v45 )
      {
        pWriteBuf->m_bOverflow = 1;
      }
      else
      {
        pWriteBuf->m_pData[v44 >> 5] |= 1 << v44;
        v44 = pWriteBuf->m_iCurBit + 1;
        v45 = pWriteBuf->m_nDataBits;
        pWriteBuf->m_iCurBit = v44;
      }
      if ( v45 - v44 > 3 )
      {
        pWriteBuf->m_iCurBit = v44 + 4;
        v29 = v44 & 0x1F;
        v31 = &pWriteBuf->m_pData[v44 >> 5];
        v54 = __ROL4__(v26, v44 & 0x1F);
        v32 = *v31;
        v55 = &v31[(7u >> (31 - (v44 & 0x1F))) & 1];
        v56 = v54 ^ *v55;
        v35 = *v31 ^ v54;
        *v55 ^= (7u >> (31 - v29)) & v56;
        v36 = 15;
        goto LABEL_20;
      }
LABEL_46:
      pWriteBuf->m_iCurBit = v45;
      pWriteBuf->m_bOverflow = 1;
      return;
    }
LABEL_65:
    pWriteBuf->m_bOverflow = 1;
    if ( v26 <= 0x3FF )
    {
LABEL_49:
      if ( v45 <= v44 )
      {
        pWriteBuf->m_bOverflow = 1;
      }
      else
      {
        pWriteBuf->m_pData[v44 >> 5] |= 1 << v44;
        v44 = pWriteBuf->m_iCurBit + 1;
        v45 = pWriteBuf->m_nDataBits;
        pWriteBuf->m_iCurBit = v44;
      }
      if ( v45 - v44 > 9 )
      {
        pWriteBuf->m_iCurBit = v44 + 10;
        v29 = v44 & 0x1F;
        v31 = &pWriteBuf->m_pData[v44 >> 5];
        v46 = __ROL4__(v26, v44 & 0x1F);
        v32 = *v31;
        v47 = &v31[(0x1FFu >> (31 - (v44 & 0x1F))) & 1];
        v48 = v46 ^ *v47;
        v35 = *v31 ^ v46;
        *v47 ^= (0x1FFu >> (31 - v29)) & v48;
        v36 = 1023;
        goto LABEL_20;
      }
      goto LABEL_46;
    }
    goto LABEL_66;
  }
  pWriteBuf->m_pData[v44 >> 5] &= ~(1 << v44);
  v44 = pWriteBuf->m_iCurBit + 1;
  v45 = pWriteBuf->m_nDataBits;
  pWriteBuf->m_iCurBit = v44;
  if ( v26 <= 0xF )
    goto LABEL_43;
  if ( v45 <= v44 )
    goto LABEL_65;
  pWriteBuf->m_pData[v44 >> 5] &= ~(1 << v44);
  v44 = pWriteBuf->m_iCurBit + 1;
  v45 = pWriteBuf->m_nDataBits;
  pWriteBuf->m_iCurBit = v44;
  if ( v26 <= 0x3FF )
    goto LABEL_49;
  if ( v45 > v44 )
  {
    pWriteBuf->m_pData[v44 >> 5] &= ~(1 << v44);
    ++pWriteBuf->m_iCurBit;
    goto LABEL_55;
  }
LABEL_66:
  pWriteBuf->m_bOverflow = 1;
LABEL_55:
  if ( v26 > 0x1FFFF )
  {
    pWriteBufd = pWriteBuf;
    bf_write::WriteOneBit(pWriteBuf, 0);
    pWriteBuf = pWriteBufd;
    v28 = pWriteBufd->m_nDataBits;
    v61 = pWriteBufd->m_iCurBit;
    if ( v28 - v61 > 30 )
    {
      pWriteBufd->m_iCurBit = v61 + 31;
      v29 = v61 & 0x1F;
      v62 = __ROL4__(v26, v61 & 0x1F);
      v31 = &pWriteBufd->m_pData[v61 >> 5];
      v32 = *v31;
      v63 = &v31[(0x3FFFFFFFu >> (31 - (v61 & 0x1F))) & 1];
      v64 = v62 ^ *v63;
      v35 = *v31 ^ v62;
      *v63 ^= (0x3FFFFFFFu >> (31 - v29)) & v64;
      v36 = 0x7FFFFFFF;
      goto LABEL_20;
    }
  }
  else
  {
    pWriteBufa = pWriteBuf;
    bf_write::WriteOneBit(pWriteBuf, 1);
    pWriteBuf = pWriteBufa;
    v28 = pWriteBufa->m_nDataBits;
    v49 = pWriteBufa->m_iCurBit;
    if ( v28 - v49 > 16 )
    {
      pWriteBufa->m_iCurBit = v49 + 17;
      v29 = v49 & 0x1F;
      v68 = __ROL4__(v26, v49 & 0x1F);
      v31 = &pWriteBufa->m_pData[v49 >> 5];
      v32 = *v31;
      v69 = &v31[(0xFFFFu >> (31 - (v49 & 0x1F))) & 1];
      v70 = v68 ^ *v69;
      v35 = *v31 ^ v68;
      *v69 ^= (0xFFFFu >> (31 - v29)) & v70;
      v36 = 0x1FFFF;
      goto LABEL_20;
    }
  }
LABEL_57:
  pWriteBuf->m_iCurBit = v28;
  pWriteBuf->m_bOverflow = 1;
}


// FieldOp_Write_PushOneLeftDeltaNRightNonZeroPack6Bits  (line 275, @0x00000000031193e0, libserver.so)  // inlines: GetDepth, GetNumBitsLeft, GetPathData, IsUsingFixedPaths, LeafCodeInfo_t, LoadLittleDWord, Path_AddToTail, Push, Set, SetOverflowFlag, WriteUBitLong, operator[]
// calls: LoggingSystem_IsChannelEnabled, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...), Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess
// strings: "../public/tier2/fieldpath.h", "GetPathData", "GetPathData failed for read only CFieldPath", "Path_AddToTail", "Path_AddToTail failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)", "Path_AddToTail failed for read only CFieldPath"
void __fastcall FieldOp_Write_PushOneLeftDeltaNRightNonZeroPack6Bits(
        CFieldPath *const from,
        const CFieldPath *const to,
        bf_write *pWriteBuf)
{
  __int64 m_nCount; // r8
  __int64 v4; // rax
  const CFieldPath::Path_t *v5; // rcx
  int m_nValue; // r10d
  const CFieldPath::Path_t *v7; // rcx
  int v8; // r10d
  int m_iCurBit; // ecx
  int v10; // esi
  __int64 v11; // rax
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // r8
  __int64 v20; // r9
  int v21; // esi
  uint32 *v22; // rdi
  uint32 v23; // r9d
  uint32 *v24; // rcx
  char v25; // r14
  uint32 *v26; // r13
  int v27; // ebx
  uint32 v28; // r15d
  uint32 *v29; // rcx
  LeafCodeInfo_t v30; // [rsp+0h] [rbp-50h] BYREF

  m_nCount = from->m_nCount;
  v4 = m_nCount - 1;
  v5 = (to + 2 * v4);
  if ( to->m_bUsingExternalPaths )
    v5 = &to->u.m_pPaths[v4];
  m_nValue = v5->m_nValue;
  v7 = (from + 2 * v4);
  if ( from->m_bUsingExternalPaths )
    v7 = &from->u.m_pPaths[v4];
  v8 = m_nValue - v7->m_nValue;
  m_iCurBit = pWriteBuf->m_iCurBit;
  if ( pWriteBuf->m_nDataBits - m_iCurBit > 2 )
  {
    pWriteBuf->m_iCurBit = m_iCurBit + 3;
    v25 = m_iCurBit & 0x1F;
    v26 = &pWriteBuf->m_pData[m_iCurBit >> 5];
    v27 = __ROL4__(v8 - 2, m_iCurBit & 0x1F);
    v28 = *v26;
    v29 = &v26[(3u >> (31 - (m_iCurBit & 0x1F))) & 1];
    *v29 ^= (3u >> (31 - v25)) & (v27 ^ *v29);
    *v26 = v28 ^ (7 << v25) & (v28 ^ v27);
  }
  else
  {
    pWriteBuf->m_iCurBit = pWriteBuf->m_nDataBits;
    pWriteBuf->m_bOverflow = 1;
  }
  if ( from->m_bUsingExternalPaths )
  {
    if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
    {
      v30.m_szFile = "../public/tier2/fieldpath.h";
      v30.m_szFunction = "GetPathData";
      v30.m_nLine = 514;
      LoggingSystem_Log(
        LOG_GENERAL,
        LoggingSeverity_t::LS_ERROR,
        &v30,
        "GetPathData failed for read only CFieldPath",
        v17,
        v18);
    }
    goto LABEL_18;
  }
  from->u.m_FixedPaths[v4].m_nValue += v8;
  if ( to->m_bUsingExternalPaths )
  {
    v10 = to->u.m_pPaths[m_nCount].m_nValue;
    if ( !from->m_bUsingExternalPaths )
      goto LABEL_10;
LABEL_16:
    if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
    {
      v30.m_szFile = "../public/tier2/fieldpath.h";
      v30.m_szFunction = "Path_AddToTail";
      v30.m_nLine = 428;
      LoggingSystem_Log(
        LOG_GENERAL,
        LoggingSeverity_t::LS_ERROR,
        &v30,
        "Path_AddToTail failed for read only CFieldPath",
        v19,
        v20);
    }
    goto LABEL_18;
  }
  v10 = to->u.m_FixedPaths[m_nCount].m_nValue;
  if ( from->m_bUsingExternalPaths )
    goto LABEL_16;
LABEL_10:
  v11 = from->m_nCount;
  if ( v11 > 5 )
  {
    if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
    {
      v30.m_szFile = "../public/tier2/fieldpath.h";
      v30.m_szFunction = "Path_AddToTail";
      v30.m_nLine = 425;
      LoggingSystem_Log(
        LOG_GENERAL,
        LoggingSeverity_t::LS_ERROR,
        &v30,
        "Path_AddToTail failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)",
        6);
    }
LABEL_18:
    if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v15, v16, v13, v14) != 0 )
      loc_0 = -559038737;
    v12 = Plat_ExitProcess(1);
    goto LABEL_21;
  }
  from->m_nCount = v11 + 1;
  from->u.m_FixedPaths[v11].m_nValue = v10;
  v12 = pWriteBuf->m_iCurBit;
  if ( pWriteBuf->m_nDataBits - v12 <= 2 )
  {
    pWriteBuf->m_iCurBit = pWriteBuf->m_nDataBits;
    pWriteBuf->m_bOverflow = 1;
    return;
  }
LABEL_21:
  pWriteBuf->m_iCurBit = v12 + 3;
  v21 = __ROL4__(v10 - 1, v12 & 0x1F);
  v22 = &pWriteBuf->m_pData[v12 >> 5];
  v23 = *v22;
  v24 = &v22[(3u >> (31 - (v12 & 0x1F))) & 1];
  *v24 ^= (3u >> (31 - (v12 & 0x1F))) & (v21 ^ *v24);
  *v22 = v23 ^ (7 << (v12 & 0x1F)) & (v23 ^ v21);
}


// FieldOp_Write_PushOneLeftDeltaNRightNonZeroPack8Bits  (line 294, @0x00000000031190e0, libserver.so)  // inlines: GetDepth, GetNumBitsLeft, GetPathData, IsUsingFixedPaths, LeafCodeInfo_t, LoadLittleDWord, Path_AddToTail, Push, Set, SetOverflowFlag, WriteUBitLong, operator[]
// calls: LoggingSystem_IsChannelEnabled, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...), Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess
// strings: "../public/tier2/fieldpath.h", "GetPathData", "GetPathData failed for read only CFieldPath", "Path_AddToTail", "Path_AddToTail failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)", "Path_AddToTail failed for read only CFieldPath"
void __fastcall FieldOp_Write_PushOneLeftDeltaNRightNonZeroPack8Bits(
        CFieldPath *const from,
        const CFieldPath *const to,
        bf_write *pWriteBuf)
{
  __int64 m_nCount; // r8
  __int64 v4; // rax
  const CFieldPath::Path_t *v5; // rcx
  int m_nValue; // r10d
  const CFieldPath::Path_t *v7; // rcx
  int v8; // r10d
  int m_iCurBit; // ecx
  int v10; // esi
  __int64 v11; // rax
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // r8
  __int64 v20; // r9
  int v21; // esi
  uint32 *v22; // rdi
  uint32 v23; // r9d
  uint32 *v24; // rcx
  char v25; // r14
  uint32 *v26; // r13
  int v27; // ebx
  uint32 v28; // r15d
  uint32 *v29; // rcx
  LeafCodeInfo_t v30; // [rsp+0h] [rbp-50h] BYREF

  m_nCount = from->m_nCount;
  v4 = m_nCount - 1;
  v5 = (to + 2 * v4);
  if ( to->m_bUsingExternalPaths )
    v5 = &to->u.m_pPaths[v4];
  m_nValue = v5->m_nValue;
  v7 = (from + 2 * v4);
  if ( from->m_bUsingExternalPaths )
    v7 = &from->u.m_pPaths[v4];
  v8 = m_nValue - v7->m_nValue;
  m_iCurBit = pWriteBuf->m_iCurBit;
  if ( pWriteBuf->m_nDataBits - m_iCurBit > 3 )
  {
    pWriteBuf->m_iCurBit = m_iCurBit + 4;
    v25 = m_iCurBit & 0x1F;
    v26 = &pWriteBuf->m_pData[m_iCurBit >> 5];
    v27 = __ROL4__(v8 - 2, m_iCurBit & 0x1F);
    v28 = *v26;
    v29 = &v26[(7u >> (31 - (m_iCurBit & 0x1F))) & 1];
    *v29 ^= (7u >> (31 - v25)) & (v27 ^ *v29);
    *v26 = v28 ^ (15 << v25) & (v28 ^ v27);
  }
  else
  {
    pWriteBuf->m_iCurBit = pWriteBuf->m_nDataBits;
    pWriteBuf->m_bOverflow = 1;
  }
  if ( from->m_bUsingExternalPaths )
  {
    if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
    {
      v30.m_szFile = "../public/tier2/fieldpath.h";
      v30.m_szFunction = "GetPathData";
      v30.m_nLine = 514;
      LoggingSystem_Log(
        LOG_GENERAL,
        LoggingSeverity_t::LS_ERROR,
        &v30,
        "GetPathData failed for read only CFieldPath",
        v17,
        v18);
    }
    goto LABEL_18;
  }
  from->u.m_FixedPaths[v4].m_nValue += v8;
  if ( to->m_bUsingExternalPaths )
  {
    v10 = to->u.m_pPaths[m_nCount].m_nValue;
    if ( !from->m_bUsingExternalPaths )
      goto LABEL_10;
LABEL_16:
    if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
    {
      v30.m_szFile = "../public/tier2/fieldpath.h";
      v30.m_szFunction = "Path_AddToTail";
      v30.m_nLine = 428;
      LoggingSystem_Log(
        LOG_GENERAL,
        LoggingSeverity_t::LS_ERROR,
        &v30,
        "Path_AddToTail failed for read only CFieldPath",
        v19,
        v20);
    }
    goto LABEL_18;
  }
  v10 = to->u.m_FixedPaths[m_nCount].m_nValue;
  if ( from->m_bUsingExternalPaths )
    goto LABEL_16;
LABEL_10:
  v11 = from->m_nCount;
  if ( v11 > 5 )
  {
    if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
    {
      v30.m_szFile = "../public/tier2/fieldpath.h";
      v30.m_szFunction = "Path_AddToTail";
      v30.m_nLine = 425;
      LoggingSystem_Log(
        LOG_GENERAL,
        LoggingSeverity_t::LS_ERROR,
        &v30,
        "Path_AddToTail failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)",
        6);
    }
LABEL_18:
    if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v15, v16, v13, v14) != 0 )
      loc_0 = -559038737;
    v12 = Plat_ExitProcess(1);
    goto LABEL_21;
  }
  from->m_nCount = v11 + 1;
  from->u.m_FixedPaths[v11].m_nValue = v10;
  v12 = pWriteBuf->m_iCurBit;
  if ( pWriteBuf->m_nDataBits - v12 <= 3 )
  {
    pWriteBuf->m_iCurBit = pWriteBuf->m_nDataBits;
    pWriteBuf->m_bOverflow = 1;
    return;
  }
LABEL_21:
  pWriteBuf->m_iCurBit = v12 + 4;
  v21 = __ROL4__(v10 - 1, v12 & 0x1F);
  v22 = &pWriteBuf->m_pData[v12 >> 5];
  v23 = *v22;
  v24 = &v22[(7u >> (31 - (v12 & 0x1F))) & 1];
  *v24 ^= (7u >> (31 - (v12 & 0x1F))) & (v21 ^ *v24);
  *v22 = v23 ^ (15 << (v12 & 0x1F)) & (v23 ^ v21);
}


// FieldOp_Write_PushTwoLeftDeltaZero  (line 313, @0x000000000311b780, libserver.so)  // inlines: CFieldPath_WriteUBitVar, GetDepth, GetNumBitsLeft, GetPathData, IsUsingFixedPaths, LeafCodeInfo_t, LoadLittleDWord, Path_AddToTail, Push, SetOverflowFlag, WriteOneBit, WriteOneBitNoCheck, WriteUBitLong, operator[]
// calls: LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...)
// strings: "../public/tier2/fieldpath.h", "Path_AddToTail", "Path_AddToTail failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)", "Path_AddToTail failed for read only CFieldPath"
void __fastcall FieldOp_Write_PushTwoLeftDeltaZero(
        CFieldPath *const from,
        const CFieldPath *const to,
        bf_write *pWriteBuf)
{
  unsigned int v3; // r10d
  int v4; // r13d
  __int64 v5; // r8
  const CFieldPath::Path_t *v6; // rax
  unsigned __int64 m_nValue; // r12
  __int64 m_nCount; // rax
  int m_iCurBit; // ecx
  int m_nDataBits; // eax
  char v11; // r11
  uint32 *v12; // r9
  int v13; // r12d
  uint32 v14; // ebx
  uint32 *v15; // rcx
  int v16; // ecx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdi
  __int64 v20; // rsi
  __int64 v21; // r8
  __int64 v22; // r9
  char v23; // r11
  uint32 *v24; // r9
  int v25; // r12d
  uint32 v26; // ebx
  uint32 *v27; // rcx
  int v28; // eax
  int v29; // r12d
  int v30; // eax
  int v31; // r12d
  uint32 *v32; // rcx
  int v33; // eax
  int v34; // r12d
  uint32 *v35; // rcx
  int v36; // eax
  int v37; // r12d
  uint32 *v38; // rcx
  int v39; // eax
  LeafCodeInfo_t v40; // [rsp+0h] [rbp-50h] BYREF

  v3 = 1;
  v4 = to->m_nCount - 2;
  v5 = v4;
  do
  {
    v6 = (to + v5 * 2);
    if ( to->m_bUsingExternalPaths )
      v6 = &to->u.m_pPaths[v5];
    m_nValue = v6->m_nValue;
    if ( from->m_bUsingExternalPaths )
    {
      if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
      {
        v40.m_szFile = "../public/tier2/fieldpath.h";
        v40.m_szFunction = "Path_AddToTail";
        v40.m_nLine = 428;
        LoggingSystem_Log(
          LOG_GENERAL,
          LoggingSeverity_t::LS_ERROR,
          &v40,
          "Path_AddToTail failed for read only CFieldPath",
          v21,
          v22);
      }
      goto LABEL_23;
    }
    m_nCount = from->m_nCount;
    if ( m_nCount > 5 )
    {
      if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
      {
        v40.m_szFile = "../public/tier2/fieldpath.h";
        v40.m_szFunction = "Path_AddToTail";
        v40.m_nLine = 425;
        LoggingSystem_Log(
          LOG_GENERAL,
          LoggingSeverity_t::LS_ERROR,
          &v40,
          "Path_AddToTail failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)",
          6);
      }
LABEL_23:
      if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v19, v20, v17, v18) != 0 )
        loc_0 = -559038737;
      m_nDataBits = Plat_ExitProcess(1);
LABEL_26:
      pWriteBuf->m_bOverflow = 1;
      if ( m_nValue > 0xF )
        goto LABEL_34;
      goto LABEL_27;
    }
    from->m_nCount = m_nCount + 1;
    from->u.m_FixedPaths[m_nCount].m_nValue = m_nValue;
    if ( m_nValue <= 3 )
    {
      m_iCurBit = pWriteBuf->m_iCurBit;
      m_nDataBits = pWriteBuf->m_nDataBits;
      if ( m_iCurBit >= m_nDataBits )
      {
        pWriteBuf->m_bOverflow = 1;
      }
      else
      {
        pWriteBuf->m_pData[m_iCurBit >> 5] |= v3 << m_iCurBit;
        m_iCurBit = pWriteBuf->m_iCurBit + 1;
        m_nDataBits = pWriteBuf->m_nDataBits;
        pWriteBuf->m_iCurBit = m_iCurBit;
      }
      if ( m_nDataBits - m_iCurBit > 1 )
      {
        pWriteBuf->m_iCurBit = m_iCurBit + 2;
        v11 = m_iCurBit & 0x1F;
        v12 = &pWriteBuf->m_pData[m_iCurBit >> 5];
        v13 = __ROL4__(m_nValue, m_iCurBit & 0x1F);
        v14 = *v12;
        v15 = &v12[v3 >> (31 - (m_iCurBit & 0x1F))];
        *v15 ^= (v3 >> (31 - v11)) & (v13 ^ *v15);
        *v12 = v14 ^ (3 << v11) & (v14 ^ v13);
        goto LABEL_11;
      }
LABEL_20:
      pWriteBuf->m_iCurBit = m_nDataBits;
      pWriteBuf->m_bOverflow = 1;
      goto LABEL_11;
    }
    v16 = pWriteBuf->m_iCurBit;
    m_nDataBits = pWriteBuf->m_nDataBits;
    if ( v16 >= m_nDataBits )
      goto LABEL_26;
    pWriteBuf->m_pData[v16 >> 5] &= ~(v3 << v16);
    v16 = pWriteBuf->m_iCurBit + 1;
    m_nDataBits = pWriteBuf->m_nDataBits;
    pWriteBuf->m_iCurBit = v16;
    if ( m_nValue > 0xF )
    {
      if ( m_nDataBits <= v16 )
      {
LABEL_34:
        pWriteBuf->m_bOverflow = 1;
        if ( m_nValue <= 0x3FF )
        {
LABEL_17:
          if ( v16 >= m_nDataBits )
          {
            pWriteBuf->m_bOverflow = 1;
          }
          else
          {
            pWriteBuf->m_pData[v16 >> 5] |= v3 << v16;
            v16 = pWriteBuf->m_iCurBit + 1;
            m_nDataBits = pWriteBuf->m_nDataBits;
            pWriteBuf->m_iCurBit = v16;
          }
          if ( m_nDataBits - v16 <= 9 )
            goto LABEL_20;
          pWriteBuf->m_iCurBit = v16 + 10;
          v23 = v16 & 0x1F;
          v24 = &pWriteBuf->m_pData[v16 >> 5];
          v37 = __ROL4__(m_nValue, v16 & 0x1F);
          v26 = *v24;
          v38 = &v24[(0x1FFu >> (31 - (v16 & 0x1F))) & 1];
          v39 = v37 ^ *v38;
          v29 = *v24 ^ v37;
          *v38 ^= (0x1FFu >> (31 - v23)) & v39;
          v30 = 1023;
          goto LABEL_31;
        }
      }
      else
      {
        pWriteBuf->m_pData[v16 >> 5] &= ~(v3 << v16);
        v16 = pWriteBuf->m_iCurBit + 1;
        m_nDataBits = pWriteBuf->m_nDataBits;
        pWriteBuf->m_iCurBit = v16;
        if ( m_nValue <= 0x3FF )
          goto LABEL_17;
        if ( m_nDataBits > v16 )
        {
          pWriteBuf->m_pData[v16 >> 5] &= ~(v3 << v16);
          v16 = pWriteBuf->m_iCurBit + 1;
          m_nDataBits = pWriteBuf->m_nDataBits;
          pWriteBuf->m_iCurBit = v16;
          if ( m_nValue > 0x1FFFF )
          {
            if ( m_nDataBits <= v16 )
            {
LABEL_36:
              pWriteBuf->m_bOverflow = 1;
            }
            else
            {
              pWriteBuf->m_pData[v16 >> 5] &= ~(v3 << v16);
              v16 = pWriteBuf->m_iCurBit + 1;
              m_nDataBits = pWriteBuf->m_nDataBits;
              pWriteBuf->m_iCurBit = v16;
            }
            if ( m_nDataBits - v16 <= 30 )
              goto LABEL_20;
            pWriteBuf->m_iCurBit = v16 + 31;
            v23 = v16 & 0x1F;
            v24 = &pWriteBuf->m_pData[v16 >> 5];
            v31 = __ROL4__(m_nValue, v16 & 0x1F);
            v26 = *v24;
            v32 = &v24[(0x3FFFFFFFu >> (31 - (v16 & 0x1F))) & 1];
            v33 = v31 ^ *v32;
            v29 = *v24 ^ v31;
            *v32 ^= (0x3FFFFFFFu >> (31 - v23)) & v33;
            v30 = 0x7FFFFFFF;
            goto LABEL_31;
          }
          goto LABEL_41;
        }
      }
      pWriteBuf->m_bOverflow = 1;
      if ( m_nValue > 0x1FFFF )
        goto LABEL_36;
LABEL_41:
      if ( v16 >= m_nDataBits )
      {
        pWriteBuf->m_bOverflow = 1;
      }
      else
      {
        pWriteBuf->m_pData[v16 >> 5] |= v3 << v16;
        v16 = pWriteBuf->m_iCurBit + 1;
        m_nDataBits = pWriteBuf->m_nDataBits;
        pWriteBuf->m_iCurBit = v16;
      }
      if ( m_nDataBits - v16 <= 16 )
        goto LABEL_20;
      pWriteBuf->m_iCurBit = v16 + 17;
      v23 = v16 & 0x1F;
      v24 = &pWriteBuf->m_pData[v16 >> 5];
      v34 = __ROL4__(m_nValue, v16 & 0x1F);
      v26 = *v24;
      v35 = &v24[(0xFFFFu >> (31 - (v16 & 0x1F))) & 1];
      v36 = v34 ^ *v35;
      v29 = *v24 ^ v34;
      *v35 ^= (0xFFFFu >> (31 - v23)) & v36;
      v30 = 0x1FFFF;
      goto LABEL_31;
    }
LABEL_27:
    if ( m_nDataBits <= v16 )
    {
      pWriteBuf->m_bOverflow = 1;
    }
    else
    {
      pWriteBuf->m_pData[v16 >> 5] |= v3 << v16;
      v16 = pWriteBuf->m_iCurBit + 1;
      m_nDataBits = pWriteBuf->m_nDataBits;
      pWriteBuf->m_iCurBit = v16;
    }
    if ( m_nDataBits - v16 <= 3 )
      goto LABEL_20;
    pWriteBuf->m_iCurBit = v16 + 4;
    v23 = v16 & 0x1F;
    v24 = &pWriteBuf->m_pData[v16 >> 5];
    v25 = __ROL4__(m_nValue, v16 & 0x1F);
    v26 = *v24;
    v27 = &v24[(7u >> (31 - (v16 & 0x1F))) & 1];
    v28 = v25 ^ *v27;
    v29 = *v24 ^ v25;
    *v27 ^= (7u >> (31 - v23)) & v28;
    v30 = 15;
LABEL_31:
    *v24 = v26 ^ (v30 << v23) & v29;
LABEL_11:
    ++v4;
    ++v5;
  }
  while ( v4 < to->m_nCount );
}


// FieldOp_Write_PushTwoPack5LeftDeltaZero  (line 328, @0x0000000003118ca0, libserver.so)  // inlines: GetDepth, GetNumBitsLeft, GetPathData, IsUsingFixedPaths, LeafCodeInfo_t, LoadLittleDWord, Path_AddToTail, Push, SetOverflowFlag, WriteUBitLong, operator[]
// calls: LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...)
// strings: "../public/tier2/fieldpath.h", "Path_AddToTail", "Path_AddToTail failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)", "Path_AddToTail failed for read only CFieldPath"
void __fastcall FieldOp_Write_PushTwoPack5LeftDeltaZero(
        CFieldPath *const from,
        const CFieldPath *const to,
        bf_write *pWriteBuf)
{
  int v3; // eax
  __int64 v4; // r8
  const CFieldPath::Path_t *v5; // rcx
  int m_nValue; // r10d
  __int64 m_nCount; // rcx
  int m_iCurBit; // ecx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // r8
  __int64 v14; // r9
  char v15; // bl
  uint32 *v16; // r11
  int v17; // r10d
  uint32 v18; // r13d
  uint32 *v19; // rcx
  LeafCodeInfo_t v20; // [rsp+0h] [rbp-50h] BYREF

  v3 = to->m_nCount - 2;
  v4 = v3;
  do
  {
    v5 = (to + v4 * 2);
    if ( to->m_bUsingExternalPaths )
      v5 = &to->u.m_pPaths[v4];
    m_nValue = v5->m_nValue;
    if ( from->m_bUsingExternalPaths )
    {
      if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
      {
        v20.m_szFile = "../public/tier2/fieldpath.h";
        v20.m_szFunction = "Path_AddToTail";
        v20.m_nLine = 428;
        LoggingSystem_Log(
          LOG_GENERAL,
          LoggingSeverity_t::LS_ERROR,
          &v20,
          "Path_AddToTail failed for read only CFieldPath",
          v13,
          v14);
      }
      goto LABEL_12;
    }
    m_nCount = from->m_nCount;
    if ( m_nCount > 5 )
    {
      if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
      {
        v20.m_szFile = "../public/tier2/fieldpath.h";
        v20.m_szFunction = "Path_AddToTail";
        v20.m_nLine = 425;
        LoggingSystem_Log(
          LOG_GENERAL,
          LoggingSeverity_t::LS_ERROR,
          &v20,
          "Path_AddToTail failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)",
          6);
      }
LABEL_12:
      if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v11, v12, v9, v10) != 0 )
        loc_0 = -559038737;
      v3 = Plat_ExitProcess(1);
      goto LABEL_15;
    }
    from->m_nCount = m_nCount + 1;
    from->u.m_FixedPaths[m_nCount].m_nValue = m_nValue;
    m_iCurBit = pWriteBuf->m_iCurBit;
    if ( pWriteBuf->m_nDataBits - m_iCurBit <= 4 )
    {
      pWriteBuf->m_iCurBit = pWriteBuf->m_nDataBits;
      pWriteBuf->m_bOverflow = 1;
      goto LABEL_8;
    }
LABEL_15:
    pWriteBuf->m_iCurBit = m_iCurBit + 5;
    v15 = m_iCurBit & 0x1F;
    v16 = &pWriteBuf->m_pData[m_iCurBit >> 5];
    v17 = __ROL4__(m_nValue, m_iCurBit & 0x1F);
    v18 = *v16;
    v19 = &v16[(0xFu >> (31 - (m_iCurBit & 0x1F))) & 1];
    *v19 ^= (0xFu >> (31 - v15)) & (v17 ^ *v19);
    *v16 = v18 ^ (31 << v15) & (v18 ^ v17);
LABEL_8:
    ++v3;
    ++v4;
  }
  while ( v3 < to->m_nCount );
}


// FieldOp_Write_PushTwoLeftDeltaOne  (line 345, @0x000000000311d120, libserver.so)  // inlines: CFieldPath_WriteUBitVar, GetDepth, GetNumBitsLeft, GetPathData, IsUsingFixedPaths, LeafCodeInfo_t, LoadLittleDWord, Path_AddToTail, Push, Set, SetOverflowFlag, WriteOneBit, WriteOneBitNoCheck, WriteUBitLong, operator[]
// calls: LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...)
// strings: "../public/tier2/fieldpath.h", "GetPathData", "GetPathData failed for read only CFieldPath", "Path_AddToTail", "Path_AddToTail failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)", "Path_AddToTail failed for read only CFieldPath"
void __fastcall FieldOp_Write_PushTwoLeftDeltaOne(
        CFieldPath *const from,
        const CFieldPath *const to,
        bf_write *pWriteBuf)
{
  unsigned __int64 m_nValue; // r12
  int v4; // r13d
  char v5; // r14
  int m_nCount; // ecx
  __int64 v7; // r9
  unsigned int v8; // r10d
  const CFieldPath::Path_t *v9; // rax
  __int64 v10; // rax
  int v11; // ecx
  int m_nDataBits; // eax
  char v13; // r11
  uint32 *v14; // r8
  int v15; // r12d
  uint32 v16; // ebx
  uint32 *v17; // rcx
  int m_iCurBit; // ecx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdi
  __int64 v22; // rsi
  __int64 v23; // r8
  __int64 v24; // r9
  char v25; // r11
  uint32 *v26; // r8
  int v27; // r12d
  uint32 v28; // ebx
  uint32 *v29; // rcx
  int v30; // eax
  int v31; // r12d
  int v32; // eax
  __int64 v33; // r8
  __int64 v34; // r9
  int v35; // r12d
  uint32 *v36; // rcx
  int v37; // eax
  int v38; // r12d
  uint32 *v39; // rcx
  int v40; // eax
  int v41; // r12d
  uint32 *v42; // rcx
  int v43; // eax
  LeafCodeInfo_t v44; // [rsp+0h] [rbp-50h] BYREF

  m_nCount = to->m_nCount;
  if ( from->m_bUsingExternalPaths )
  {
    if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
    {
      v44.m_szFile = "../public/tier2/fieldpath.h";
      v44.m_szFunction = "GetPathData";
      v44.m_nLine = 514;
      LoggingSystem_Log(
        LOG_GENERAL,
        LoggingSeverity_t::LS_ERROR,
        &v44,
        "GetPathData failed for read only CFieldPath",
        v33,
        v34);
    }
    goto LABEL_25;
  }
  ++from->u.m_FixedPaths[m_nCount - 3].m_nValue;
  v7 = m_nCount - 2;
  if ( m_nCount - 2 < to->m_nCount )
  {
    v5 = 31;
    v8 = 1;
    v4 = m_nCount - 2;
    while ( 1 )
    {
      v9 = (to + v7 * 2);
      if ( to->m_bUsingExternalPaths )
        v9 = &to->u.m_pPaths[v7];
      m_nValue = v9->m_nValue;
      if ( from->m_bUsingExternalPaths )
        break;
      v10 = from->m_nCount;
      if ( v10 > 5 )
      {
        if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
        {
          v44.m_szFile = "../public/tier2/fieldpath.h";
          v44.m_szFunction = "Path_AddToTail";
          v44.m_nLine = 425;
          LoggingSystem_Log(
            LOG_GENERAL,
            LoggingSeverity_t::LS_ERROR,
            &v44,
            "Path_AddToTail failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)",
            6);
        }
LABEL_25:
        if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v21, v22, v19, v20) != 0 )
          loc_0 = -559038737;
        m_nDataBits = Plat_ExitProcess(1);
        goto LABEL_28;
      }
      from->m_nCount = v10 + 1;
      from->u.m_FixedPaths[v10].m_nValue = m_nValue;
      if ( m_nValue > 3 )
      {
        m_iCurBit = pWriteBuf->m_iCurBit;
        m_nDataBits = pWriteBuf->m_nDataBits;
        if ( m_iCurBit < m_nDataBits )
        {
          pWriteBuf->m_pData[m_iCurBit >> 5] &= ~(v8 << m_iCurBit);
          m_iCurBit = pWriteBuf->m_iCurBit + 1;
          m_nDataBits = pWriteBuf->m_nDataBits;
          pWriteBuf->m_iCurBit = m_iCurBit;
          if ( m_nValue > 0xF )
          {
            if ( m_nDataBits > m_iCurBit )
            {
              pWriteBuf->m_pData[m_iCurBit >> 5] &= ~(v8 << m_iCurBit);
              m_iCurBit = pWriteBuf->m_iCurBit + 1;
              m_nDataBits = pWriteBuf->m_nDataBits;
              pWriteBuf->m_iCurBit = m_iCurBit;
              if ( m_nValue <= 0x3FF )
              {
LABEL_19:
                if ( m_iCurBit >= m_nDataBits )
                {
                  pWriteBuf->m_bOverflow = 1;
                }
                else
                {
                  pWriteBuf->m_pData[m_iCurBit >> 5] |= v8 << m_iCurBit;
                  m_iCurBit = pWriteBuf->m_iCurBit + 1;
                  m_nDataBits = pWriteBuf->m_nDataBits;
                  pWriteBuf->m_iCurBit = m_iCurBit;
                }
                if ( m_nDataBits - m_iCurBit > 9 )
                {
                  pWriteBuf->m_iCurBit = m_iCurBit + 10;
                  v25 = m_iCurBit & 0x1F;
                  v26 = &pWriteBuf->m_pData[m_iCurBit >> 5];
                  v41 = __ROL4__(m_nValue, m_iCurBit & 0x1F);
                  v28 = *v26;
                  v42 = &v26[(0x1FFu >> (v5 - (m_iCurBit & 0x1F))) & 1];
                  v43 = v41 ^ *v42;
                  v31 = *v26 ^ v41;
                  *v42 ^= (0x1FFu >> (v5 - v25)) & v43;
                  v32 = 1023;
                  goto LABEL_33;
                }
LABEL_22:
                pWriteBuf->m_iCurBit = m_nDataBits;
                pWriteBuf->m_bOverflow = 1;
                goto LABEL_13;
              }
              if ( m_nDataBits > m_iCurBit )
              {
                pWriteBuf->m_pData[m_iCurBit >> 5] &= ~(v8 << m_iCurBit);
                m_iCurBit = pWriteBuf->m_iCurBit + 1;
                m_nDataBits = pWriteBuf->m_nDataBits;
                pWriteBuf->m_iCurBit = m_iCurBit;
                if ( m_nValue <= 0x1FFFF )
                {
LABEL_45:
                  if ( m_iCurBit >= m_nDataBits )
                  {
                    pWriteBuf->m_bOverflow = 1;
                  }
                  else
                  {
                    pWriteBuf->m_pData[m_iCurBit >> 5] |= v8 << m_iCurBit;
                    m_iCurBit = pWriteBuf->m_iCurBit + 1;
                    m_nDataBits = pWriteBuf->m_nDataBits;
                    pWriteBuf->m_iCurBit = m_iCurBit;
                  }
                  if ( m_nDataBits - m_iCurBit > 16 )
                  {
                    pWriteBuf->m_iCurBit = m_iCurBit + 17;
                    v25 = m_iCurBit & 0x1F;
                    v26 = &pWriteBuf->m_pData[m_iCurBit >> 5];
                    v38 = __ROL4__(m_nValue, m_iCurBit & 0x1F);
                    v28 = *v26;
                    v39 = &v26[(0xFFFFu >> (v5 - (m_iCurBit & 0x1F))) & 1];
                    v40 = v38 ^ *v39;
                    v31 = *v26 ^ v38;
                    *v39 ^= (0xFFFFu >> (v5 - v25)) & v40;
                    v32 = 0x1FFFF;
                    goto LABEL_33;
                  }
                  goto LABEL_22;
                }
                if ( m_nDataBits > m_iCurBit )
                {
                  pWriteBuf->m_pData[m_iCurBit >> 5] &= ~(v8 << m_iCurBit);
                  m_iCurBit = pWriteBuf->m_iCurBit + 1;
                  m_nDataBits = pWriteBuf->m_nDataBits;
                  pWriteBuf->m_iCurBit = m_iCurBit;
LABEL_41:
                  if ( m_nDataBits - m_iCurBit > 30 )
                  {
                    pWriteBuf->m_iCurBit = m_iCurBit + 31;
                    v25 = m_iCurBit & 0x1F;
                    v26 = &pWriteBuf->m_pData[m_iCurBit >> 5];
                    v35 = __ROL4__(m_nValue, m_iCurBit & 0x1F);
                    v28 = *v26;
                    v36 = &v26[(0x3FFFFFFFu >> (v5 - (m_iCurBit & 0x1F))) & 1];
                    v37 = v35 ^ *v36;
                    v31 = *v26 ^ v35;
                    *v36 ^= (0x3FFFFFFFu >> (v5 - v25)) & v37;
                    v32 = 0x7FFFFFFF;
                    goto LABEL_33;
                  }
                  goto LABEL_22;
                }
LABEL_40:
                pWriteBuf->m_bOverflow = 1;
                goto LABEL_41;
              }
LABEL_39:
              pWriteBuf->m_bOverflow = 1;
              if ( m_nValue <= 0x1FFFF )
                goto LABEL_45;
              goto LABEL_40;
            }
LABEL_38:
            pWriteBuf->m_bOverflow = 1;
            if ( m_nValue <= 0x3FF )
              goto LABEL_19;
            goto LABEL_39;
          }
LABEL_29:
          if ( m_iCurBit >= m_nDataBits )
          {
            pWriteBuf->m_bOverflow = 1;
          }
          else
          {
            pWriteBuf->m_pData[m_iCurBit >> 5] |= v8 << m_iCurBit;
            m_iCurBit = pWriteBuf->m_iCurBit + 1;
            m_nDataBits = pWriteBuf->m_nDataBits;
            pWriteBuf->m_iCurBit = m_iCurBit;
          }
          if ( m_nDataBits - m_iCurBit > 3 )
          {
            pWriteBuf->m_iCurBit = m_iCurBit + 4;
            v25 = m_iCurBit & 0x1F;
            v26 = &pWriteBuf->m_pData[m_iCurBit >> 5];
            v27 = __ROL4__(m_nValue, m_iCurBit & 0x1F);
            v28 = *v26;
            v29 = &v26[(7u >> (v5 - (m_iCurBit & 0x1F))) & 1];
            v30 = v27 ^ *v29;
            v31 = *v26 ^ v27;
            *v29 ^= (7u >> (v5 - v25)) & v30;
            v32 = 15;
LABEL_33:
            *v26 = v28 ^ (v32 << v25) & v31;
            goto LABEL_13;
          }
          goto LABEL_22;
        }
LABEL_28:
        pWriteBuf->m_bOverflow = 1;
        if ( m_nValue > 0xF )
          goto LABEL_38;
        goto LABEL_29;
      }
      v11 = pWriteBuf->m_iCurBit;
      m_nDataBits = pWriteBuf->m_nDataBits;
      if ( v11 >= m_nDataBits )
      {
        pWriteBuf->m_bOverflow = 1;
      }
      else
      {
        pWriteBuf->m_pData[v11 >> 5] |= v8 << v11;
        v11 = pWriteBuf->m_iCurBit + 1;
        m_nDataBits = pWriteBuf->m_nDataBits;
        pWriteBuf->m_iCurBit = v11;
      }
      if ( m_nDataBits - v11 <= 1 )
        goto LABEL_22;
      pWriteBuf->m_iCurBit = v11 + 2;
      v13 = v11 & 0x1F;
      v14 = &pWriteBuf->m_pData[v11 >> 5];
      v15 = __ROL4__(m_nValue, v11 & 0x1F);
      v16 = *v14;
      v17 = &v14[v8 >> (v5 - (v11 & 0x1F))];
      *v17 ^= (v8 >> (v5 - v13)) & (v15 ^ *v17);
      *v14 = v16 ^ (3 << v13) & (v16 ^ v15);
LABEL_13:
      ++v4;
      ++v7;
      if ( v4 >= to->m_nCount )
        return;
    }
    if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
    {
      v44.m_szFile = "../public/tier2/fieldpath.h";
      v44.m_szFunction = "Path_AddToTail";
      v44.m_nLine = 428;
      LoggingSystem_Log(
        LOG_GENERAL,
        LoggingSeverity_t::LS_ERROR,
        &v44,
        "Path_AddToTail failed for read only CFieldPath",
        v23,
        v24);
    }
    goto LABEL_25;
  }
}


// FieldOp_Write_PushTwoPack5LeftDeltaOne  (line 363, @0x0000000003118e80, libserver.so)  // inlines: GetDepth, GetNumBitsLeft, GetPathData, IsUsingFixedPaths, LeafCodeInfo_t, LoadLittleDWord, Path_AddToTail, Push, Set, SetOverflowFlag, WriteUBitLong, operator[]
// calls: LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...)
// strings: "../public/tier2/fieldpath.h", "GetPathData", "GetPathData failed for read only CFieldPath", "Path_AddToTail", "Path_AddToTail failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)", "Path_AddToTail failed for read only CFieldPath"
void __fastcall FieldOp_Write_PushTwoPack5LeftDeltaOne(
        CFieldPath *const from,
        const CFieldPath *const to,
        bf_write *pWriteBuf)
{
  unsigned int v3; // r13d
  int v4; // r14d
  int m_nCount; // ecx
  int v6; // eax
  __int64 v7; // r8
  const CFieldPath::Path_t *v8; // rcx
  int m_nValue; // r10d
  __int64 v10; // rcx
  int m_iCurBit; // ecx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // r8
  __int64 v17; // r9
  char v18; // bl
  uint32 *v19; // r11
  int v20; // r10d
  uint32 v21; // r12d
  uint32 *v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  LeafCodeInfo_t v25; // [rsp+0h] [rbp-50h] BYREF

  m_nCount = to->m_nCount;
  if ( from->m_bUsingExternalPaths )
  {
    if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
    {
      v25.m_szFile = "../public/tier2/fieldpath.h";
      v25.m_szFunction = "GetPathData";
      v25.m_nLine = 514;
      LoggingSystem_Log(
        LOG_GENERAL,
        LoggingSeverity_t::LS_ERROR,
        &v25,
        "GetPathData failed for read only CFieldPath",
        v23,
        v24);
    }
    goto LABEL_13;
  }
  v6 = m_nCount - 2;
  v4 = 31;
  v3 = 15;
  ++from->u.m_FixedPaths[m_nCount - 3].m_nValue;
  v7 = m_nCount - 2;
  if ( m_nCount - 2 < to->m_nCount )
  {
    while ( 1 )
    {
      v8 = (to + v7 * 2);
      if ( to->m_bUsingExternalPaths )
        v8 = &to->u.m_pPaths[v7];
      m_nValue = v8->m_nValue;
      if ( from->m_bUsingExternalPaths )
        break;
      v10 = from->m_nCount;
      if ( v10 > 5 )
      {
        if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
        {
          v25.m_szFile = "../public/tier2/fieldpath.h";
          v25.m_szFunction = "Path_AddToTail";
          v25.m_nLine = 425;
          LoggingSystem_Log(
            LOG_GENERAL,
            LoggingSeverity_t::LS_ERROR,
            &v25,
            "Path_AddToTail failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)",
            6);
        }
LABEL_13:
        if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v14, v15, v12, v13) != 0 )
          loc_0 = -559038737;
        v6 = Plat_ExitProcess(1);
LABEL_16:
        pWriteBuf->m_iCurBit = m_iCurBit + 5;
        v18 = m_iCurBit & 0x1F;
        v19 = &pWriteBuf->m_pData[m_iCurBit >> 5];
        v20 = __ROL4__(m_nValue, m_iCurBit & 0x1F);
        v21 = *v19;
        v22 = &v19[(v3 >> (v4 - (m_iCurBit & 0x1F))) & 1];
        *v22 ^= (v3 >> (v4 - v18)) & (v20 ^ *v22);
        *v19 = v21 ^ (v4 << v18) & (v21 ^ v20);
        goto LABEL_9;
      }
      from->m_nCount = v10 + 1;
      from->u.m_FixedPaths[v10].m_nValue = m_nValue;
      m_iCurBit = pWriteBuf->m_iCurBit;
      if ( pWriteBuf->m_nDataBits - m_iCurBit > 4 )
        goto LABEL_16;
      pWriteBuf->m_iCurBit = pWriteBuf->m_nDataBits;
      pWriteBuf->m_bOverflow = 1;
LABEL_9:
      ++v6;
      ++v7;
      if ( v6 >= to->m_nCount )
        return;
    }
    if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
    {
      v25.m_szFile = "../public/tier2/fieldpath.h";
      v25.m_szFunction = "Path_AddToTail";
      v25.m_nLine = 428;
      LoggingSystem_Log(
        LOG_GENERAL,
        LoggingSeverity_t::LS_ERROR,
        &v25,
        "Path_AddToTail failed for read only CFieldPath",
        v16,
        v17);
    }
    goto LABEL_13;
  }
}


// FieldOp_Write_PushTwoLeftDeltaN  (line 383, @0x000000000311f6d0, libserver.so)  // inlines: CFieldPath_WriteUBitVar, GetDepth, GetNumBitsLeft, GetPathData, IsUsingFixedPaths, LeafCodeInfo_t, LoadLittleDWord, Path_AddToTail, Push, Set, SetOverflowFlag, WriteOneBit, WriteOneBitNoCheck, WriteUBitLong, WriteUBitVar, operator[]
// calls: LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...), bf_write::WriteOneBit
// strings: "../public/tier2/fieldpath.h", "GetPathData", "GetPathData failed for read only CFieldPath", "Path_AddToTail", "Path_AddToTail failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)", "Path_AddToTail failed for read only CFieldPath"
void __fastcall FieldOp_Write_PushTwoLeftDeltaN(
        CFieldPath *const from,
        const CFieldPath *const to,
        bf_write *pWriteBuf)
{
  uint32 *v3; // r13
  unsigned __int64 v4; // r14
  __int64 v5; // r15
  unsigned __int64 v6; // r12
  int m_nCount; // r8d
  __int64 v9; // rax
  const CFieldPath::Path_t *v10; // rcx
  int m_nValue; // edi
  const CFieldPath::Path_t *v12; // rcx
  int m_iCurBit; // r9d
  int v14; // edi
  int m_nDataBits; // ecx
  unsigned int v16; // esi
  int v17; // r10d
  int v18; // r8d
  unsigned __int64 v19; // rdx
  __int16 *v20; // rax
  __int64 v21; // rax
  int v22; // eax
  int v23; // ecx
  char v24; // r9
  uint32 *v25; // rdi
  int v26; // r12d
  uint32 v27; // r10d
  uint32 *v28; // rcx
  int v29; // eax
  int v30; // r12d
  int v31; // eax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rdi
  __int64 v35; // rsi
  int v36; // ecx
  int v37; // eax
  int v38; // r12d
  uint32 *v39; // rcx
  int v40; // eax
  int v41; // eax
  int v42; // r12d
  uint32 *v43; // rcx
  int v44; // eax
  char v45; // r11
  int v46; // r9d
  uint32 *v47; // rcx
  int v48; // esi
  unsigned int v49; // r9d
  int v50; // esi
  int v51; // r12d
  uint32 *v52; // rcx
  int v53; // eax
  int v54; // r9d
  uint32 *v55; // rcx
  int v56; // esi
  int v57; // eax
  int v58; // r12d
  uint32 *v59; // rcx
  int v60; // eax
  uint32 *v61; // r10
  int v62; // esi
  uint32 *v63; // rcx
  int v64; // r9d
  unsigned int *v65; // rcx
  unsigned int v66; // r10d
  int v67; // r9d
  int v68; // r9d
  uint32 *v69; // r10
  int v70; // esi
  uint32 v71; // r11d
  uint32 *v72; // rcx
  unsigned __int64 v73; // [rsp+0h] [rbp-60h]
  int v74; // [rsp+Ch] [rbp-54h]
  LeafCodeInfo_t v75; // [rsp+10h] [rbp-50h] BYREF

  v6 = to;
  m_nCount = to->m_nCount;
  v9 = m_nCount - 3;
  v10 = (to + 2 * v9);
  if ( to->m_bUsingExternalPaths )
    v10 = &to->u.m_pPaths[v9];
  m_nValue = v10->m_nValue;
  v12 = (from + 2 * v9);
  if ( from->m_bUsingExternalPaths )
    v12 = &from->u.m_pPaths[v9];
  m_iCurBit = pWriteBuf->m_iCurBit;
  v14 = m_nValue - v12->m_nValue;
  m_nDataBits = pWriteBuf->m_nDataBits;
  v16 = v14 - 2;
  v17 = m_nDataBits - m_iCurBit;
  if ( (v14 - 2) > 0xF )
  {
    if ( v16 > 0xFF )
    {
      if ( v16 > 0xFFF )
      {
        if ( v17 <= 5 )
          goto LABEL_7;
        pWriteBuf->m_iCurBit = m_iCurBit + 6;
        v4 = m_iCurBit & 0x1F;
        v3 = &pWriteBuf->m_pData[m_iCurBit >> 5];
        v64 = __ROL4__(v16 & 0xF | 0x30, v4);
        v65 = &v3[(0x1Fu >> (31 - v4)) & 1];
        v5 = *v3;
        v66 = *v65 ^ (0x1Fu >> (31 - v4)) & (v64 ^ *v65);
        v67 = *v3 ^ v64;
        *v65 = v66;
        *v3 = v5 ^ (63 << v4) & v67;
        m_nDataBits = pWriteBuf->m_nDataBits;
        v68 = pWriteBuf->m_iCurBit;
        if ( m_nDataBits - v68 <= 27 )
          goto LABEL_7;
        pWriteBuf->m_iCurBit = v68 + 28;
        LODWORD(v3) = v68 & 0x1F;
        v69 = &pWriteBuf->m_pData[v68 >> 5];
        v70 = __ROL4__(v16 >> 4, v3);
        v71 = *v69;
        v4 = 0x7FFFFFFu >> (31 - v3);
        v72 = &v69[(0x7FFFFFFu >> (31 - v3)) & 1];
        v5 = *v72;
        *v72 = v5 ^ v4 & (v70 ^ *v72);
        *v69 = v71 ^ (0xFFFFFFF << v3) & (v71 ^ v70);
        goto LABEL_8;
      }
      if ( v17 <= 13 )
        goto LABEL_7;
      pWriteBuf->m_iCurBit = m_iCurBit + 14;
      v45 = m_iCurBit & 0x1F;
      v3 = &pWriteBuf->m_pData[m_iCurBit >> 5];
      v4 = *v3;
      v54 = __ROL4__((4 * (v16 & 0xFFFFFFF0)) | v16 & 0xF | 0x20, m_iCurBit & 0x1F);
      v55 = &v3[(0x1FFFu >> (31 - v45)) & 1];
      v5 = *v55;
      v56 = v54 ^ *v55;
      v49 = v4 ^ v54;
      *v55 = v5 ^ (0x1FFFu >> (31 - v45)) & v56;
      v50 = 0x3FFF;
    }
    else
    {
      if ( v17 <= 9 )
        goto LABEL_7;
      pWriteBuf->m_iCurBit = m_iCurBit + 10;
      v45 = m_iCurBit & 0x1F;
      v3 = &pWriteBuf->m_pData[m_iCurBit >> 5];
      v4 = *v3;
      v46 = __ROL4__((4 * (v16 & 0xFFFFFFF0)) | v16 & 0xF | 0x10, m_iCurBit & 0x1F);
      v47 = &v3[(0x1FFu >> (31 - v45)) & 1];
      v5 = *v47;
      v48 = v46 ^ *v47;
      v49 = v4 ^ v46;
      *v47 = v5 ^ (0x1FFu >> (31 - v45)) & v48;
      v50 = 1023;
    }
    *v3 = v4 ^ (v50 << v45) & v49;
    goto LABEL_8;
  }
  if ( v17 <= 5 )
  {
LABEL_7:
    pWriteBuf->m_iCurBit = m_nDataBits;
    pWriteBuf->m_bOverflow = 1;
    goto LABEL_8;
  }
  pWriteBuf->m_iCurBit = m_iCurBit + 6;
  v61 = &pWriteBuf->m_pData[m_iCurBit >> 5];
  v62 = __ROL4__(v16, m_iCurBit & 0x1F);
  LODWORD(v3) = *v61;
  v5 = 0x1Fu >> (31 - (m_iCurBit & 0x1F));
  v63 = &v61[(0x1Fu >> (31 - (m_iCurBit & 0x1F))) & 1];
  v4 = *v63;
  *v63 = v4 ^ v5 & (v62 ^ *v63);
  *v61 = v3 ^ (63 << (m_iCurBit & 0x1F)) & (v3 ^ v62);
LABEL_8:
  if ( from->m_bUsingExternalPaths )
  {
    from = &LOG_GENERAL;
    if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
    {
      v75.m_szFile = "../public/tier2/fieldpath.h";
      v75.m_szFunction = "GetPathData";
      v75.m_nLine = 514;
      LoggingSystem_Log(LOG_GENERAL, LoggingSeverity_t::LS_ERROR, &v75, "GetPathData failed for read only CFieldPath");
    }
    goto LABEL_24;
  }
  from->u.m_FixedPaths[v9].m_nValue += v14;
  LODWORD(v3) = m_nCount - 2;
  v4 = pWriteBuf;
  v18 = 31;
  v5 = 2LL * v3;
  v19 = v6;
  if ( v3 < *(v6 + 16) )
  {
    while ( 1 )
    {
      v20 = (v19 + v5);
      if ( *(v19 + 18) != 0 )
        v20 = (*v19 + v5);
      v6 = *v20;
      if ( from->m_bUsingExternalPaths )
        break;
      v21 = from->m_nCount;
      if ( v21 > 5 )
      {
        from = &LOG_GENERAL;
        if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
        {
          v75.m_szFile = "../public/tier2/fieldpath.h";
          v75.m_szFunction = "Path_AddToTail";
          v75.m_nLine = 425;
          LoggingSystem_Log(
            LOG_GENERAL,
            LoggingSeverity_t::LS_ERROR,
            &v75,
            "Path_AddToTail failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)",
            6);
        }
LABEL_24:
        if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v34, v35, v32, v33) != 0 )
          loc_0 = -559038737;
        Plat_ExitProcess(1);
        goto LABEL_27;
      }
      from->m_nCount = v21 + 1;
      from->u.m_FixedPaths[v21].m_nValue = v6;
      if ( v6 <= 3 )
      {
        v22 = *(v4 + 16);
        v23 = *(v4 + 12);
        if ( v22 >= v23 )
        {
          *(v4 + 20) = 1;
        }
        else
        {
          *(*v4 + 4LL * (v22 >> 5)) |= 1 << v22;
          v23 = *(v4 + 12);
          v22 = *(v4 + 16) + 1;
          *(v4 + 16) = v22;
        }
        if ( v23 - v22 <= 1 )
          goto LABEL_38;
        *(v4 + 16) = v22 + 2;
        v24 = v22 & 0x1F;
        v25 = (*v4 + 4LL * (v22 >> 5));
        v26 = __ROL4__(v6, v22 & 0x1F);
        v27 = *v25;
        v28 = &v25[1u >> (v18 - (v22 & 0x1F))];
        v29 = v26 ^ *v28;
        v30 = *v25 ^ v26;
        *v28 ^= (1u >> (v18 - v24)) & v29;
        v31 = 3;
        goto LABEL_19;
      }
LABEL_27:
      v36 = *(v4 + 16);
      v37 = *(v4 + 12);
      if ( v36 >= v37 )
      {
        *(v4 + 20) = 1;
        if ( v6 <= 0xF )
        {
LABEL_29:
          if ( v37 <= v36 )
          {
            *(v4 + 20) = 1;
            if ( v37 - v36 <= 3 )
              goto LABEL_31;
          }
          else
          {
            *(*v4 + 4LL * (v36 >> 5)) |= 1 << v36;
            v36 = *(v4 + 16) + 1;
            v37 = *(v4 + 12);
            *(v4 + 16) = v36;
            if ( v37 - v36 <= 3 )
              goto LABEL_31;
          }
          *(v4 + 16) = v36 + 4;
          v24 = v36 & 0x1F;
          v25 = (*v4 + 4LL * (v36 >> 5));
          v51 = __ROL4__(v6, v36 & 0x1F);
          v27 = *v25;
          v52 = &v25[(7u >> (v18 - (v36 & 0x1F))) & 1];
          v53 = v51 ^ *v52;
          v30 = *v25 ^ v51;
          *v52 ^= (7u >> (v18 - v24)) & v53;
          v31 = 15;
          goto LABEL_19;
        }
      }
      else
      {
        *(*v4 + 4LL * (v36 >> 5)) &= ~(1 << v36);
        v36 = *(v4 + 16) + 1;
        v37 = *(v4 + 12);
        *(v4 + 16) = v36;
        if ( v6 <= 0xF )
          goto LABEL_29;
        if ( v36 < v37 )
        {
          *(*v4 + 4LL * (v36 >> 5)) &= ~(1 << v36);
          v36 = *(v4 + 16) + 1;
          v37 = *(v4 + 12);
          *(v4 + 16) = v36;
          if ( v6 > 0x3FF )
          {
            if ( v37 <= v36 )
            {
LABEL_41:
              *(v4 + 20) = 1;
              if ( v6 <= 0x1FFFF )
                goto LABEL_42;
            }
            else
            {
              *(*v4 + 4LL * (v36 >> 5)) &= ~(1 << v36);
              ++*(v4 + 16);
              if ( v6 <= 0x1FFFF )
              {
LABEL_42:
                v41 = *(v4 + 16);
                v23 = *(v4 + 12);
                if ( v41 >= v23 )
                {
                  *(v4 + 20) = 1;
                }
                else
                {
                  *(*v4 + 4LL * (v41 >> 5)) |= 1 << v41;
                  v23 = *(v4 + 12);
                  v41 = *(v4 + 16) + 1;
                  *(v4 + 16) = v41;
                }
                if ( v23 - v41 <= 16 )
                {
LABEL_38:
                  *(v4 + 16) = v23;
                  *(v4 + 20) = 1;
                  goto LABEL_20;
                }
                *(v4 + 16) = v41 + 17;
                v24 = v41 & 0x1F;
                v25 = (*v4 + 4LL * (v41 >> 5));
                v42 = __ROL4__(v6, v41 & 0x1F);
                v27 = *v25;
                v43 = &v25[(0xFFFFu >> (v18 - (v41 & 0x1F))) & 1];
                v44 = v42 ^ *v43;
                v30 = *v25 ^ v42;
                *v43 ^= (0xFFFFu >> (v18 - v24)) & v44;
                v31 = 0x1FFFF;
                goto LABEL_19;
              }
            }
            v73 = v19;
            v74 = v18;
            bf_write::WriteOneBit(v4, 0);
            v23 = *(v4 + 12);
            v57 = *(v4 + 16);
            v18 = v74;
            v19 = v73;
            if ( v23 - v57 <= 30 )
              goto LABEL_38;
            *(v4 + 16) = v57 + 31;
            v24 = v57 & 0x1F;
            v25 = (*v4 + 4LL * (v57 >> 5));
            v58 = __ROL4__(v6, v57 & 0x1F);
            v27 = *v25;
            v59 = &v25[(0x3FFFFFFFu >> (v74 - (v57 & 0x1F))) & 1];
            v60 = v58 ^ *v59;
            v30 = *v25 ^ v58;
            *v59 ^= (0x3FFFFFFFu >> (v74 - v24)) & v60;
            v31 = 0x7FFFFFFF;
            goto LABEL_19;
          }
          goto LABEL_34;
        }
      }
      *(v4 + 20) = 1;
      if ( v6 > 0x3FF )
        goto LABEL_41;
LABEL_34:
      if ( v37 <= v36 )
      {
        *(v4 + 20) = 1;
      }
      else
      {
        *(*v4 + 4LL * (v36 >> 5)) |= 1 << v36;
        v36 = *(v4 + 16) + 1;
        v37 = *(v4 + 12);
        *(v4 + 16) = v36;
      }
      if ( v37 - v36 <= 9 )
      {
LABEL_31:
        *(v4 + 16) = v37;
        *(v4 + 20) = 1;
        goto LABEL_20;
      }
      *(v4 + 16) = v36 + 10;
      v24 = v36 & 0x1F;
      v25 = (*v4 + 4LL * (v36 >> 5));
      v38 = __ROL4__(v6, v36 & 0x1F);
      v27 = *v25;
      v39 = &v25[(0x1FFu >> (v18 - (v36 & 0x1F))) & 1];
      v40 = v38 ^ *v39;
      v30 = *v25 ^ v38;
      *v39 ^= (0x1FFu >> (v18 - v24)) & v40;
      v31 = 1023;
LABEL_19:
      *v25 = v27 ^ (v31 << v24) & v30;
LABEL_20:
      LODWORD(v3) = v3 + 1;
      v5 += 2;
      if ( v3 >= *(v19 + 16) )
        return;
    }
    from = &LOG_GENERAL;
    if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
    {
      v75.m_szFile = "../public/tier2/fieldpath.h";
      v75.m_szFunction = "Path_AddToTail";
      v75.m_nLine = 428;
      LoggingSystem_Log(
        LOG_GENERAL,
        LoggingSeverity_t::LS_ERROR,
        &v75,
        "Path_AddToTail failed for read only CFieldPath");
    }
    goto LABEL_24;
  }
}


// FieldOp_Write_PushTwoPack5LeftDeltaN  (line 405, @0x0000000003118570, libserver.so)  // inlines: GetDepth, GetNumBitsLeft, GetPathData, IsUsingFixedPaths, LeafCodeInfo_t, LoadLittleDWord, Path_AddToTail, Push, Set, SetOverflowFlag, WriteUBitLong, WriteUBitVar, operator[]
// calls: LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...)
// strings: "../public/tier2/fieldpath.h", "GetPathData", "GetPathData failed for read only CFieldPath", "Path_AddToTail", "Path_AddToTail failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)", "Path_AddToTail failed for read only CFieldPath"
void __fastcall FieldOp_Write_PushTwoPack5LeftDeltaN(
        CFieldPath *const from,
        const CFieldPath *const to,
        bf_write *pWriteBuf)
{
  uint32 *v3; // r13
  int v4; // r14d
  int m_nCount; // eax
  __int64 v6; // r8
  const CFieldPath::Path_t *v7; // rcx
  int m_nValue; // r10d
  const CFieldPath::Path_t *v9; // rcx
  int m_iCurBit; // r11d
  int v11; // r10d
  int m_nDataBits; // ecx
  unsigned int v13; // r9d
  int v14; // ebx
  int v15; // eax
  __int64 v16; // r8
  const CFieldPath::Path_t *v17; // rcx
  int v18; // r10d
  __int64 v19; // rcx
  int v20; // ecx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdi
  __int64 v24; // rsi
  char v25; // bl
  uint32 *v26; // r11
  int v27; // r10d
  uint32 v28; // r12d
  uint32 *v29; // rcx
  char v30; // r12
  int v31; // r11d
  uint32 *v32; // rcx
  int v33; // r9d
  int v34; // r11d
  int v35; // r9d
  int v36; // r11d
  uint32 *v37; // rcx
  int v38; // r9d
  uint32 *v39; // rbx
  int v40; // r9d
  int *v41; // rcx
  int v42; // r11d
  unsigned int *v43; // rcx
  int v44; // r15d
  unsigned int v45; // ebx
  int v46; // r11d
  int v47; // r11d
  uint32 *v48; // rbx
  int v49; // r9d
  uint32 v50; // r12d
  LeafCodeInfo_t v51; // [rsp+10h] [rbp-50h] BYREF

  m_nCount = to->m_nCount;
  v6 = m_nCount - 3;
  v7 = (to + 2 * v6);
  if ( to->m_bUsingExternalPaths )
    v7 = &to->u.m_pPaths[v6];
  m_nValue = v7->m_nValue;
  v9 = (from + 2 * v6);
  if ( from->m_bUsingExternalPaths )
    v9 = &from->u.m_pPaths[v6];
  m_iCurBit = pWriteBuf->m_iCurBit;
  v11 = m_nValue - v9->m_nValue;
  m_nDataBits = pWriteBuf->m_nDataBits;
  v13 = v11 - 2;
  v14 = m_nDataBits - m_iCurBit;
  if ( (v11 - 2) > 0xF )
  {
    if ( v13 > 0xFF )
    {
      if ( v13 > 0xFFF )
      {
        if ( v14 <= 5 )
          goto LABEL_7;
        pWriteBuf->m_iCurBit = m_iCurBit + 6;
        v4 = m_iCurBit & 0x1F;
        v3 = &pWriteBuf->m_pData[m_iCurBit >> 5];
        v42 = __ROL4__(v13 & 0xF | 0x30, v4);
        v43 = &v3[(0x1Fu >> (31 - v4)) & 1];
        v44 = *v3;
        v45 = *v43 ^ (0x1Fu >> (31 - v4)) & (v42 ^ *v43);
        v46 = *v3 ^ v42;
        *v43 = v45;
        *v3 = v44 ^ (63 << v4) & v46;
        m_nDataBits = pWriteBuf->m_nDataBits;
        v47 = pWriteBuf->m_iCurBit;
        if ( m_nDataBits - v47 <= 27 )
          goto LABEL_7;
        pWriteBuf->m_iCurBit = v47 + 28;
        LODWORD(v3) = v47 & 0x1F;
        v48 = &pWriteBuf->m_pData[v47 >> 5];
        v49 = __ROL4__(v13 >> 4, v3);
        v50 = *v48;
        v4 = 0x7FFFFFFu >> (31 - v3);
        v48[v4 & 1] ^= v4 & (v49 ^ v48[v4 & 1]);
        *v48 = v50 ^ (0xFFFFFFF << v3) & (v50 ^ v49);
        goto LABEL_8;
      }
      if ( v14 <= 13 )
        goto LABEL_7;
      pWriteBuf->m_iCurBit = m_iCurBit + 14;
      v30 = m_iCurBit & 0x1F;
      v3 = &pWriteBuf->m_pData[m_iCurBit >> 5];
      v4 = *v3;
      v36 = __ROL4__((4 * (v13 & 0xFFFFFFF0)) | v13 & 0xF | 0x20, m_iCurBit & 0x1F);
      v37 = &v3[(0x1FFFu >> (31 - v30)) & 1];
      v38 = v36 ^ *v37;
      v34 = *v3 ^ v36;
      *v37 ^= (0x1FFFu >> (31 - v30)) & v38;
      v35 = 0x3FFF;
    }
    else
    {
      if ( v14 <= 9 )
        goto LABEL_7;
      pWriteBuf->m_iCurBit = m_iCurBit + 10;
      v30 = m_iCurBit & 0x1F;
      v3 = &pWriteBuf->m_pData[m_iCurBit >> 5];
      v4 = *v3;
      v31 = __ROL4__((4 * (v13 & 0xFFFFFFF0)) | v13 & 0xF | 0x10, m_iCurBit & 0x1F);
      v32 = &v3[(0x1FFu >> (31 - v30)) & 1];
      v33 = v31 ^ *v32;
      v34 = *v3 ^ v31;
      *v32 ^= (0x1FFu >> (31 - v30)) & v33;
      v35 = 1023;
    }
    *v3 = v4 ^ (v35 << v30) & v34;
    goto LABEL_8;
  }
  if ( v14 <= 5 )
  {
LABEL_7:
    pWriteBuf->m_iCurBit = m_nDataBits;
    pWriteBuf->m_bOverflow = 1;
    goto LABEL_8;
  }
  pWriteBuf->m_iCurBit = m_iCurBit + 6;
  v39 = &pWriteBuf->m_pData[m_iCurBit >> 5];
  v40 = __ROL4__(v13, m_iCurBit & 0x1F);
  LODWORD(v3) = *v39;
  v41 = &v39[(0x1Fu >> (31 - (m_iCurBit & 0x1F))) & 1];
  v4 = *v41;
  *v41 ^= (0x1Fu >> (31 - (m_iCurBit & 0x1F))) & (v40 ^ *v41);
  *v39 = v3 ^ (63 << (m_iCurBit & 0x1F)) & (v3 ^ v40);
LABEL_8:
  if ( from->m_bUsingExternalPaths )
  {
    if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
    {
      v51.m_szFile = "../public/tier2/fieldpath.h";
      v51.m_szFunction = "GetPathData";
      v51.m_nLine = 514;
      LoggingSystem_Log(LOG_GENERAL, LoggingSeverity_t::LS_ERROR, &v51, "GetPathData failed for read only CFieldPath");
    }
    goto LABEL_20;
  }
  from->u.m_FixedPaths[v6].m_nValue += v11;
  v15 = m_nCount - 2;
  v4 = 31;
  LODWORD(v3) = 15;
  v16 = v15;
  if ( v15 < to->m_nCount )
  {
    while ( 1 )
    {
      v17 = (to + v16 * 2);
      if ( to->m_bUsingExternalPaths )
        v17 = &to->u.m_pPaths[v16];
      v18 = v17->m_nValue;
      if ( from->m_bUsingExternalPaths )
        break;
      v19 = from->m_nCount;
      if ( v19 > 5 )
      {
        if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
        {
          v51.m_szFile = "../public/tier2/fieldpath.h";
          v51.m_szFunction = "Path_AddToTail";
          v51.m_nLine = 425;
          LoggingSystem_Log(
            LOG_GENERAL,
            LoggingSeverity_t::LS_ERROR,
            &v51,
            "Path_AddToTail failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)",
            6);
        }
LABEL_20:
        if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v23, v24, v21, v22) != 0 )
          loc_0 = -559038737;
        v15 = Plat_ExitProcess(1);
LABEL_23:
        pWriteBuf->m_iCurBit = v20 + 5;
        v25 = v20 & 0x1F;
        v26 = &pWriteBuf->m_pData[v20 >> 5];
        v27 = __ROL4__(v18, v20 & 0x1F);
        v28 = *v26;
        v29 = &v26[(v3 >> (v4 - (v20 & 0x1F))) & 1];
        *v29 ^= (v3 >> (v4 - v25)) & (v27 ^ *v29);
        *v26 = v28 ^ (v4 << v25) & (v28 ^ v27);
        goto LABEL_16;
      }
      from->m_nCount = v19 + 1;
      from->u.m_FixedPaths[v19].m_nValue = v18;
      v20 = pWriteBuf->m_iCurBit;
      if ( pWriteBuf->m_nDataBits - v20 > 4 )
        goto LABEL_23;
      pWriteBuf->m_iCurBit = pWriteBuf->m_nDataBits;
      pWriteBuf->m_bOverflow = 1;
LABEL_16:
      ++v15;
      ++v16;
      if ( v15 >= to->m_nCount )
        return;
    }
    if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
    {
      v51.m_szFile = "../public/tier2/fieldpath.h";
      v51.m_szFunction = "Path_AddToTail";
      v51.m_nLine = 428;
      LoggingSystem_Log(
        LOG_GENERAL,
        LoggingSeverity_t::LS_ERROR,
        &v51,
        "Path_AddToTail failed for read only CFieldPath");
    }
    goto LABEL_20;
  }
}


// FieldOp_Write_PushThreeLeftDeltaZero  (line 430, @0x000000000311bd20, libserver.so)  // inlines: CFieldPath_WriteUBitVar, GetDepth, GetNumBitsLeft, GetPathData, IsUsingFixedPaths, LeafCodeInfo_t, LoadLittleDWord, Path_AddToTail, Push, SetOverflowFlag, WriteOneBit, WriteOneBitNoCheck, WriteUBitLong, operator[]
// calls: LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...)
// strings: "../public/tier2/fieldpath.h", "Path_AddToTail", "Path_AddToTail failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)", "Path_AddToTail failed for read only CFieldPath"
void __fastcall FieldOp_Write_PushThreeLeftDeltaZero(
        CFieldPath *const from,
        const CFieldPath *const to,
        bf_write *pWriteBuf)
{
  unsigned int v3; // r10d
  int v4; // r13d
  __int64 v5; // r8
  const CFieldPath::Path_t *v6; // rax
  unsigned __int64 m_nValue; // r12
  __int64 m_nCount; // rax
  int m_iCurBit; // ecx
  int m_nDataBits; // eax
  char v11; // r11
  uint32 *v12; // r9
  int v13; // r12d
  uint32 v14; // ebx
  uint32 *v15; // rcx
  int v16; // ecx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdi
  __int64 v20; // rsi
  __int64 v21; // r8
  __int64 v22; // r9
  char v23; // r11
  uint32 *v24; // r9
  int v25; // r12d
  uint32 v26; // ebx
  uint32 *v27; // rcx
  int v28; // eax
  int v29; // r12d
  int v30; // eax
  int v31; // r12d
  uint32 *v32; // rcx
  int v33; // eax
  int v34; // r12d
  uint32 *v35; // rcx
  int v36; // eax
  int v37; // r12d
  uint32 *v38; // rcx
  int v39; // eax
  LeafCodeInfo_t v40; // [rsp+0h] [rbp-50h] BYREF

  v3 = 1;
  v4 = to->m_nCount - 3;
  v5 = v4;
  do
  {
    v6 = (to + v5 * 2);
    if ( to->m_bUsingExternalPaths )
      v6 = &to->u.m_pPaths[v5];
    m_nValue = v6->m_nValue;
    if ( from->m_bUsingExternalPaths )
    {
      if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
      {
        v40.m_szFile = "../public/tier2/fieldpath.h";
        v40.m_szFunction = "Path_AddToTail";
        v40.m_nLine = 428;
        LoggingSystem_Log(
          LOG_GENERAL,
          LoggingSeverity_t::LS_ERROR,
          &v40,
          "Path_AddToTail failed for read only CFieldPath",
          v21,
          v22);
      }
      goto LABEL_23;
    }
    m_nCount = from->m_nCount;
    if ( m_nCount > 5 )
    {
      if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
      {
        v40.m_szFile = "../public/tier2/fieldpath.h";
        v40.m_szFunction = "Path_AddToTail";
        v40.m_nLine = 425;
        LoggingSystem_Log(
          LOG_GENERAL,
          LoggingSeverity_t::LS_ERROR,
          &v40,
          "Path_AddToTail failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)",
          6);
      }
LABEL_23:
      if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v19, v20, v17, v18) != 0 )
        loc_0 = -559038737;
      m_nDataBits = Plat_ExitProcess(1);
LABEL_26:
      pWriteBuf->m_bOverflow = 1;
      if ( m_nValue > 0xF )
        goto LABEL_34;
      goto LABEL_27;
    }
    from->m_nCount = m_nCount + 1;
    from->u.m_FixedPaths[m_nCount].m_nValue = m_nValue;
    if ( m_nValue <= 3 )
    {
      m_iCurBit = pWriteBuf->m_iCurBit;
      m_nDataBits = pWriteBuf->m_nDataBits;
      if ( m_iCurBit >= m_nDataBits )
      {
        pWriteBuf->m_bOverflow = 1;
      }
      else
      {
        pWriteBuf->m_pData[m_iCurBit >> 5] |= v3 << m_iCurBit;
        m_iCurBit = pWriteBuf->m_iCurBit + 1;
        m_nDataBits = pWriteBuf->m_nDataBits;
        pWriteBuf->m_iCurBit = m_iCurBit;
      }
      if ( m_nDataBits - m_iCurBit > 1 )
      {
        pWriteBuf->m_iCurBit = m_iCurBit + 2;
        v11 = m_iCurBit & 0x1F;
        v12 = &pWriteBuf->m_pData[m_iCurBit >> 5];
        v13 = __ROL4__(m_nValue, m_iCurBit & 0x1F);
        v14 = *v12;
        v15 = &v12[v3 >> (31 - (m_iCurBit & 0x1F))];
        *v15 ^= (v3 >> (31 - v11)) & (v13 ^ *v15);
        *v12 = v14 ^ (3 << v11) & (v14 ^ v13);
        goto LABEL_11;
      }
LABEL_20:
      pWriteBuf->m_iCurBit = m_nDataBits;
      pWriteBuf->m_bOverflow = 1;
      goto LABEL_11;
    }
    v16 = pWriteBuf->m_iCurBit;
    m_nDataBits = pWriteBuf->m_nDataBits;
    if ( v16 >= m_nDataBits )
      goto LABEL_26;
    pWriteBuf->m_pData[v16 >> 5] &= ~(v3 << v16);
    v16 = pWriteBuf->m_iCurBit + 1;
    m_nDataBits = pWriteBuf->m_nDataBits;
    pWriteBuf->m_iCurBit = v16;
    if ( m_nValue > 0xF )
    {
      if ( m_nDataBits <= v16 )
      {
LABEL_34:
        pWriteBuf->m_bOverflow = 1;
        if ( m_nValue <= 0x3FF )
        {
LABEL_17:
          if ( v16 >= m_nDataBits )
          {
            pWriteBuf->m_bOverflow = 1;
          }
          else
          {
            pWriteBuf->m_pData[v16 >> 5] |= v3 << v16;
            v16 = pWriteBuf->m_iCurBit + 1;
            m_nDataBits = pWriteBuf->m_nDataBits;
            pWriteBuf->m_iCurBit = v16;
          }
          if ( m_nDataBits - v16 <= 9 )
            goto LABEL_20;
          pWriteBuf->m_iCurBit = v16 + 10;
          v23 = v16 & 0x1F;
          v24 = &pWriteBuf->m_pData[v16 >> 5];
          v37 = __ROL4__(m_nValue, v16 & 0x1F);
          v26 = *v24;
          v38 = &v24[(0x1FFu >> (31 - (v16 & 0x1F))) & 1];
          v39 = v37 ^ *v38;
          v29 = *v24 ^ v37;
          *v38 ^= (0x1FFu >> (31 - v23)) & v39;
          v30 = 1023;
          goto LABEL_31;
        }
      }
      else
      {
        pWriteBuf->m_pData[v16 >> 5] &= ~(v3 << v16);
        v16 = pWriteBuf->m_iCurBit + 1;
        m_nDataBits = pWriteBuf->m_nDataBits;
        pWriteBuf->m_iCurBit = v16;
        if ( m_nValue <= 0x3FF )
          goto LABEL_17;
        if ( m_nDataBits > v16 )
        {
          pWriteBuf->m_pData[v16 >> 5] &= ~(v3 << v16);
          v16 = pWriteBuf->m_iCurBit + 1;
          m_nDataBits = pWriteBuf->m_nDataBits;
          pWriteBuf->m_iCurBit = v16;
          if ( m_nValue > 0x1FFFF )
          {
            if ( m_nDataBits <= v16 )
            {
LABEL_36:
              pWriteBuf->m_bOverflow = 1;
            }
            else
            {
              pWriteBuf->m_pData[v16 >> 5] &= ~(v3 << v16);
              v16 = pWriteBuf->m_iCurBit + 1;
              m_nDataBits = pWriteBuf->m_nDataBits;
              pWriteBuf->m_iCurBit = v16;
            }
            if ( m_nDataBits - v16 <= 30 )
              goto LABEL_20;
            pWriteBuf->m_iCurBit = v16 + 31;
            v23 = v16 & 0x1F;
            v24 = &pWriteBuf->m_pData[v16 >> 5];
            v31 = __ROL4__(m_nValue, v16 & 0x1F);
            v26 = *v24;
            v32 = &v24[(0x3FFFFFFFu >> (31 - (v16 & 0x1F))) & 1];
            v33 = v31 ^ *v32;
            v29 = *v24 ^ v31;
            *v32 ^= (0x3FFFFFFFu >> (31 - v23)) & v33;
            v30 = 0x7FFFFFFF;
            goto LABEL_31;
          }
          goto LABEL_41;
        }
      }
      pWriteBuf->m_bOverflow = 1;
      if ( m_nValue > 0x1FFFF )
        goto LABEL_36;
LABEL_41:
      if ( v16 >= m_nDataBits )
      {
        pWriteBuf->m_bOverflow = 1;
      }
      else
      {
        pWriteBuf->m_pData[v16 >> 5] |= v3 << v16;
        v16 = pWriteBuf->m_iCurBit + 1;
        m_nDataBits = pWriteBuf->m_nDataBits;
        pWriteBuf->m_iCurBit = v16;
      }
      if ( m_nDataBits - v16 <= 16 )
        goto LABEL_20;
      pWriteBuf->m_iCurBit = v16 + 17;
      v23 = v16 & 0x1F;
      v24 = &pWriteBuf->m_pData[v16 >> 5];
      v34 = __ROL4__(m_nValue, v16 & 0x1F);
      v26 = *v24;
      v35 = &v24[(0xFFFFu >> (31 - (v16 & 0x1F))) & 1];
      v36 = v34 ^ *v35;
      v29 = *v24 ^ v34;
      *v35 ^= (0xFFFFu >> (31 - v23)) & v36;
      v30 = 0x1FFFF;
      goto LABEL_31;
    }
LABEL_27:
    if ( m_nDataBits <= v16 )
    {
      pWriteBuf->m_bOverflow = 1;
    }
    else
    {
      pWriteBuf->m_pData[v16 >> 5] |= v3 << v16;
      v16 = pWriteBuf->m_iCurBit + 1;
      m_nDataBits = pWriteBuf->m_nDataBits;
      pWriteBuf->m_iCurBit = v16;
    }
    if ( m_nDataBits - v16 <= 3 )
      goto LABEL_20;
    pWriteBuf->m_iCurBit = v16 + 4;
    v23 = v16 & 0x1F;
    v24 = &pWriteBuf->m_pData[v16 >> 5];
    v25 = __ROL4__(m_nValue, v16 & 0x1F);
    v26 = *v24;
    v27 = &v24[(7u >> (31 - (v16 & 0x1F))) & 1];
    v28 = v25 ^ *v27;
    v29 = *v24 ^ v25;
    *v27 ^= (7u >> (31 - v23)) & v28;
    v30 = 15;
LABEL_31:
    *v24 = v26 ^ (v30 << v23) & v29;
LABEL_11:
    ++v4;
    ++v5;
  }
  while ( v4 < to->m_nCount );
}


// FieldOp_Write_PushThreeLeftDeltaOne  (line 445, @0x000000000311cb00, libserver.so)  // inlines: CFieldPath_WriteUBitVar, GetDepth, GetNumBitsLeft, GetPathData, IsUsingFixedPaths, LeafCodeInfo_t, LoadLittleDWord, Path_AddToTail, Push, Set, SetOverflowFlag, WriteOneBit, WriteOneBitNoCheck, WriteUBitLong, operator[]
// calls: LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...)
// strings: "../public/tier2/fieldpath.h", "GetPathData", "GetPathData failed for read only CFieldPath", "Path_AddToTail", "Path_AddToTail failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)", "Path_AddToTail failed for read only CFieldPath"
void __fastcall FieldOp_Write_PushThreeLeftDeltaOne(
        CFieldPath *const from,
        const CFieldPath *const to,
        bf_write *pWriteBuf)
{
  unsigned __int64 m_nValue; // r12
  int v4; // r13d
  char v5; // r14
  int m_nCount; // ecx
  __int64 v7; // r9
  unsigned int v8; // r10d
  const CFieldPath::Path_t *v9; // rax
  __int64 v10; // rax
  int v11; // ecx
  int m_nDataBits; // eax
  char v13; // r11
  uint32 *v14; // r8
  int v15; // r12d
  uint32 v16; // ebx
  uint32 *v17; // rcx
  int m_iCurBit; // ecx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdi
  __int64 v22; // rsi
  __int64 v23; // r8
  __int64 v24; // r9
  char v25; // r11
  uint32 *v26; // r8
  int v27; // r12d
  uint32 v28; // ebx
  uint32 *v29; // rcx
  int v30; // eax
  int v31; // r12d
  int v32; // eax
  __int64 v33; // r8
  __int64 v34; // r9
  int v35; // r12d
  uint32 *v36; // rcx
  int v37; // eax
  int v38; // r12d
  uint32 *v39; // rcx
  int v40; // eax
  int v41; // r12d
  uint32 *v42; // rcx
  int v43; // eax
  LeafCodeInfo_t v44; // [rsp+0h] [rbp-50h] BYREF

  m_nCount = to->m_nCount;
  if ( from->m_bUsingExternalPaths )
  {
    if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
    {
      v44.m_szFile = "../public/tier2/fieldpath.h";
      v44.m_szFunction = "GetPathData";
      v44.m_nLine = 514;
      LoggingSystem_Log(
        LOG_GENERAL,
        LoggingSeverity_t::LS_ERROR,
        &v44,
        "GetPathData failed for read only CFieldPath",
        v33,
        v34);
    }
    goto LABEL_25;
  }
  ++from->u.m_FixedPaths[m_nCount - 4].m_nValue;
  v7 = m_nCount - 3;
  if ( m_nCount - 3 < to->m_nCount )
  {
    v5 = 31;
    v8 = 1;
    v4 = m_nCount - 3;
    while ( 1 )
    {
      v9 = (to + v7 * 2);
      if ( to->m_bUsingExternalPaths )
        v9 = &to->u.m_pPaths[v7];
      m_nValue = v9->m_nValue;
      if ( from->m_bUsingExternalPaths )
        break;
      v10 = from->m_nCount;
      if ( v10 > 5 )
      {
        if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
        {
          v44.m_szFile = "../public/tier2/fieldpath.h";
          v44.m_szFunction = "Path_AddToTail";
          v44.m_nLine = 425;
          LoggingSystem_Log(
            LOG_GENERAL,
            LoggingSeverity_t::LS_ERROR,
            &v44,
            "Path_AddToTail failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)",
            6);
        }
LABEL_25:
        if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v21, v22, v19, v20) != 0 )
          loc_0 = -559038737;
        m_nDataBits = Plat_ExitProcess(1);
        goto LABEL_28;
      }
      from->m_nCount = v10 + 1;
      from->u.m_FixedPaths[v10].m_nValue = m_nValue;
      if ( m_nValue > 3 )
      {
        m_iCurBit = pWriteBuf->m_iCurBit;
        m_nDataBits = pWriteBuf->m_nDataBits;
        if ( m_iCurBit < m_nDataBits )
        {
          pWriteBuf->m_pData[m_iCurBit >> 5] &= ~(v8 << m_iCurBit);
          m_iCurBit = pWriteBuf->m_iCurBit + 1;
          m_nDataBits = pWriteBuf->m_nDataBits;
          pWriteBuf->m_iCurBit = m_iCurBit;
          if ( m_nValue > 0xF )
          {
            if ( m_nDataBits > m_iCurBit )
            {
              pWriteBuf->m_pData[m_iCurBit >> 5] &= ~(v8 << m_iCurBit);
              m_iCurBit = pWriteBuf->m_iCurBit + 1;
              m_nDataBits = pWriteBuf->m_nDataBits;
              pWriteBuf->m_iCurBit = m_iCurBit;
              if ( m_nValue <= 0x3FF )
              {
LABEL_19:
                if ( m_iCurBit >= m_nDataBits )
                {
                  pWriteBuf->m_bOverflow = 1;
                }
                else
                {
                  pWriteBuf->m_pData[m_iCurBit >> 5] |= v8 << m_iCurBit;
                  m_iCurBit = pWriteBuf->m_iCurBit + 1;
                  m_nDataBits = pWriteBuf->m_nDataBits;
                  pWriteBuf->m_iCurBit = m_iCurBit;
                }
                if ( m_nDataBits - m_iCurBit > 9 )
                {
                  pWriteBuf->m_iCurBit = m_iCurBit + 10;
                  v25 = m_iCurBit & 0x1F;
                  v26 = &pWriteBuf->m_pData[m_iCurBit >> 5];
                  v41 = __ROL4__(m_nValue, m_iCurBit & 0x1F);
                  v28 = *v26;
                  v42 = &v26[(0x1FFu >> (v5 - (m_iCurBit & 0x1F))) & 1];
                  v43 = v41 ^ *v42;
                  v31 = *v26 ^ v41;
                  *v42 ^= (0x1FFu >> (v5 - v25)) & v43;
                  v32 = 1023;
                  goto LABEL_33;
                }
LABEL_22:
                pWriteBuf->m_iCurBit = m_nDataBits;
                pWriteBuf->m_bOverflow = 1;
                goto LABEL_13;
              }
              if ( m_nDataBits > m_iCurBit )
              {
                pWriteBuf->m_pData[m_iCurBit >> 5] &= ~(v8 << m_iCurBit);
                m_iCurBit = pWriteBuf->m_iCurBit + 1;
                m_nDataBits = pWriteBuf->m_nDataBits;
                pWriteBuf->m_iCurBit = m_iCurBit;
                if ( m_nValue <= 0x1FFFF )
                {
LABEL_45:
                  if ( m_iCurBit >= m_nDataBits )
                  {
                    pWriteBuf->m_bOverflow = 1;
                  }
                  else
                  {
                    pWriteBuf->m_pData[m_iCurBit >> 5] |= v8 << m_iCurBit;
                    m_iCurBit = pWriteBuf->m_iCurBit + 1;
                    m_nDataBits = pWriteBuf->m_nDataBits;
                    pWriteBuf->m_iCurBit = m_iCurBit;
                  }
                  if ( m_nDataBits - m_iCurBit > 16 )
                  {
                    pWriteBuf->m_iCurBit = m_iCurBit + 17;
                    v25 = m_iCurBit & 0x1F;
                    v26 = &pWriteBuf->m_pData[m_iCurBit >> 5];
                    v38 = __ROL4__(m_nValue, m_iCurBit & 0x1F);
                    v28 = *v26;
                    v39 = &v26[(0xFFFFu >> (v5 - (m_iCurBit & 0x1F))) & 1];
                    v40 = v38 ^ *v39;
                    v31 = *v26 ^ v38;
                    *v39 ^= (0xFFFFu >> (v5 - v25)) & v40;
                    v32 = 0x1FFFF;
                    goto LABEL_33;
                  }
                  goto LABEL_22;
                }
                if ( m_nDataBits > m_iCurBit )
                {
                  pWriteBuf->m_pData[m_iCurBit >> 5] &= ~(v8 << m_iCurBit);
                  m_iCurBit = pWriteBuf->m_iCurBit + 1;
                  m_nDataBits = pWriteBuf->m_nDataBits;
                  pWriteBuf->m_iCurBit = m_iCurBit;
LABEL_41:
                  if ( m_nDataBits - m_iCurBit > 30 )
                  {
                    pWriteBuf->m_iCurBit = m_iCurBit + 31;
                    v25 = m_iCurBit & 0x1F;
                    v26 = &pWriteBuf->m_pData[m_iCurBit >> 5];
                    v35 = __ROL4__(m_nValue, m_iCurBit & 0x1F);
                    v28 = *v26;
                    v36 = &v26[(0x3FFFFFFFu >> (v5 - (m_iCurBit & 0x1F))) & 1];
                    v37 = v35 ^ *v36;
                    v31 = *v26 ^ v35;
                    *v36 ^= (0x3FFFFFFFu >> (v5 - v25)) & v37;
                    v32 = 0x7FFFFFFF;
                    goto LABEL_33;
                  }
                  goto LABEL_22;
                }
LABEL_40:
                pWriteBuf->m_bOverflow = 1;
                goto LABEL_41;
              }
LABEL_39:
              pWriteBuf->m_bOverflow = 1;
              if ( m_nValue <= 0x1FFFF )
                goto LABEL_45;
              goto LABEL_40;
            }
LABEL_38:
            pWriteBuf->m_bOverflow = 1;
            if ( m_nValue <= 0x3FF )
              goto LABEL_19;
            goto LABEL_39;
          }
LABEL_29:
          if ( m_iCurBit >= m_nDataBits )
          {
            pWriteBuf->m_bOverflow = 1;
          }
          else
          {
            pWriteBuf->m_pData[m_iCurBit >> 5] |= v8 << m_iCurBit;
            m_iCurBit = pWriteBuf->m_iCurBit + 1;
            m_nDataBits = pWriteBuf->m_nDataBits;
            pWriteBuf->m_iCurBit = m_iCurBit;
          }
          if ( m_nDataBits - m_iCurBit > 3 )
          {
            pWriteBuf->m_iCurBit = m_iCurBit + 4;
            v25 = m_iCurBit & 0x1F;
            v26 = &pWriteBuf->m_pData[m_iCurBit >> 5];
            v27 = __ROL4__(m_nValue, m_iCurBit & 0x1F);
            v28 = *v26;
            v29 = &v26[(7u >> (v5 - (m_iCurBit & 0x1F))) & 1];
            v30 = v27 ^ *v29;
            v31 = *v26 ^ v27;
            *v29 ^= (7u >> (v5 - v25)) & v30;
            v32 = 15;
LABEL_33:
            *v26 = v28 ^ (v32 << v25) & v31;
            goto LABEL_13;
          }
          goto LABEL_22;
        }
LABEL_28:
        pWriteBuf->m_bOverflow = 1;
        if ( m_nValue > 0xF )
          goto LABEL_38;
        goto LABEL_29;
      }
      v11 = pWriteBuf->m_iCurBit;
      m_nDataBits = pWriteBuf->m_nDataBits;
      if ( v11 >= m_nDataBits )
      {
        pWriteBuf->m_bOverflow = 1;
      }
      else
      {
        pWriteBuf->m_pData[v11 >> 5] |= v8 << v11;
        v11 = pWriteBuf->m_iCurBit + 1;
        m_nDataBits = pWriteBuf->m_nDataBits;
        pWriteBuf->m_iCurBit = v11;
      }
      if ( m_nDataBits - v11 <= 1 )
        goto LABEL_22;
      pWriteBuf->m_iCurBit = v11 + 2;
      v13 = v11 & 0x1F;
      v14 = &pWriteBuf->m_pData[v11 >> 5];
      v15 = __ROL4__(m_nValue, v11 & 0x1F);
      v16 = *v14;
      v17 = &v14[v8 >> (v5 - (v11 & 0x1F))];
      *v17 ^= (v8 >> (v5 - v13)) & (v15 ^ *v17);
      *v14 = v16 ^ (3 << v13) & (v16 ^ v15);
LABEL_13:
      ++v4;
      ++v7;
      if ( v4 >= to->m_nCount )
        return;
    }
    if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
    {
      v44.m_szFile = "../public/tier2/fieldpath.h";
      v44.m_szFunction = "Path_AddToTail";
      v44.m_nLine = 428;
      LoggingSystem_Log(
        LOG_GENERAL,
        LoggingSeverity_t::LS_ERROR,
        &v44,
        "Path_AddToTail failed for read only CFieldPath",
        v23,
        v24);
    }
    goto LABEL_25;
  }
}


// FieldOp_Write_PushThreeLeftDeltaN  (line 463, @0x0000000003120020, libserver.so)  // inlines: CFieldPath_WriteUBitVar, GetDepth, GetNumBitsLeft, GetPathData, IsUsingFixedPaths, LeafCodeInfo_t, LoadLittleDWord, Path_AddToTail, Push, Set, SetOverflowFlag, WriteOneBit, WriteOneBitNoCheck, WriteUBitLong, WriteUBitVar, operator[]
// calls: LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...), bf_write::WriteOneBit
// strings: "../public/tier2/fieldpath.h", "GetPathData", "GetPathData failed for read only CFieldPath", "Path_AddToTail", "Path_AddToTail failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)", "Path_AddToTail failed for read only CFieldPath"
void __fastcall FieldOp_Write_PushThreeLeftDeltaN(
        CFieldPath *const from,
        const CFieldPath *const to,
        bf_write *pWriteBuf)
{
  uint32 *v3; // r13
  unsigned __int64 v4; // r14
  __int64 v5; // r15
  unsigned __int64 v6; // r12
  int m_nCount; // r8d
  __int64 v9; // rax
  const CFieldPath::Path_t *v10; // rcx
  int m_nValue; // edi
  const CFieldPath::Path_t *v12; // rcx
  int m_iCurBit; // r9d
  int v14; // edi
  int m_nDataBits; // ecx
  unsigned int v16; // esi
  int v17; // r10d
  int v18; // r8d
  unsigned __int64 v19; // rdx
  __int16 *v20; // rax
  __int64 v21; // rax
  int v22; // eax
  int v23; // ecx
  char v24; // r9
  uint32 *v25; // rdi
  int v26; // r12d
  uint32 v27; // r10d
  uint32 *v28; // rcx
  int v29; // eax
  int v30; // r12d
  int v31; // eax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rdi
  __int64 v35; // rsi
  int v36; // ecx
  int v37; // eax
  int v38; // r12d
  uint32 *v39; // rcx
  int v40; // eax
  int v41; // eax
  int v42; // r12d
  uint32 *v43; // rcx
  int v44; // eax
  char v45; // r11
  int v46; // r9d
  uint32 *v47; // rcx
  int v48; // esi
  unsigned int v49; // r9d
  int v50; // esi
  int v51; // r12d
  uint32 *v52; // rcx
  int v53; // eax
  int v54; // r9d
  uint32 *v55; // rcx
  int v56; // esi
  int v57; // eax
  int v58; // r12d
  uint32 *v59; // rcx
  int v60; // eax
  uint32 *v61; // r10
  int v62; // esi
  uint32 *v63; // rcx
  int v64; // r9d
  unsigned int *v65; // rcx
  unsigned int v66; // r10d
  int v67; // r9d
  int v68; // r9d
  uint32 *v69; // r10
  int v70; // esi
  uint32 v71; // r11d
  uint32 *v72; // rcx
  unsigned __int64 v73; // [rsp+0h] [rbp-60h]
  int v74; // [rsp+Ch] [rbp-54h]
  LeafCodeInfo_t v75; // [rsp+10h] [rbp-50h] BYREF

  v6 = to;
  m_nCount = to->m_nCount;
  v9 = m_nCount - 4;
  v10 = (to + 2 * v9);
  if ( to->m_bUsingExternalPaths )
    v10 = &to->u.m_pPaths[v9];
  m_nValue = v10->m_nValue;
  v12 = (from + 2 * v9);
  if ( from->m_bUsingExternalPaths )
    v12 = &from->u.m_pPaths[v9];
  m_iCurBit = pWriteBuf->m_iCurBit;
  v14 = m_nValue - v12->m_nValue;
  m_nDataBits = pWriteBuf->m_nDataBits;
  v16 = v14 - 2;
  v17 = m_nDataBits - m_iCurBit;
  if ( (v14 - 2) > 0xF )
  {
    if ( v16 > 0xFF )
    {
      if ( v16 > 0xFFF )
      {
        if ( v17 <= 5 )
          goto LABEL_7;
        pWriteBuf->m_iCurBit = m_iCurBit + 6;
        v4 = m_iCurBit & 0x1F;
        v3 = &pWriteBuf->m_pData[m_iCurBit >> 5];
        v64 = __ROL4__(v16 & 0xF | 0x30, v4);
        v65 = &v3[(0x1Fu >> (31 - v4)) & 1];
        v5 = *v3;
        v66 = *v65 ^ (0x1Fu >> (31 - v4)) & (v64 ^ *v65);
        v67 = *v3 ^ v64;
        *v65 = v66;
        *v3 = v5 ^ (63 << v4) & v67;
        m_nDataBits = pWriteBuf->m_nDataBits;
        v68 = pWriteBuf->m_iCurBit;
        if ( m_nDataBits - v68 <= 27 )
          goto LABEL_7;
        pWriteBuf->m_iCurBit = v68 + 28;
        LODWORD(v3) = v68 & 0x1F;
        v69 = &pWriteBuf->m_pData[v68 >> 5];
        v70 = __ROL4__(v16 >> 4, v3);
        v71 = *v69;
        v4 = 0x7FFFFFFu >> (31 - v3);
        v72 = &v69[(0x7FFFFFFu >> (31 - v3)) & 1];
        v5 = *v72;
        *v72 = v5 ^ v4 & (v70 ^ *v72);
        *v69 = v71 ^ (0xFFFFFFF << v3) & (v71 ^ v70);
        goto LABEL_8;
      }
      if ( v17 <= 13 )
        goto LABEL_7;
      pWriteBuf->m_iCurBit = m_iCurBit + 14;
      v45 = m_iCurBit & 0x1F;
      v3 = &pWriteBuf->m_pData[m_iCurBit >> 5];
      v4 = *v3;
      v54 = __ROL4__((4 * (v16 & 0xFFFFFFF0)) | v16 & 0xF | 0x20, m_iCurBit & 0x1F);
      v55 = &v3[(0x1FFFu >> (31 - v45)) & 1];
      v5 = *v55;
      v56 = v54 ^ *v55;
      v49 = v4 ^ v54;
      *v55 = v5 ^ (0x1FFFu >> (31 - v45)) & v56;
      v50 = 0x3FFF;
    }
    else
    {
      if ( v17 <= 9 )
        goto LABEL_7;
      pWriteBuf->m_iCurBit = m_iCurBit + 10;
      v45 = m_iCurBit & 0x1F;
      v3 = &pWriteBuf->m_pData[m_iCurBit >> 5];
      v4 = *v3;
      v46 = __ROL4__((4 * (v16 & 0xFFFFFFF0)) | v16 & 0xF | 0x10, m_iCurBit & 0x1F);
      v47 = &v3[(0x1FFu >> (31 - v45)) & 1];
      v5 = *v47;
      v48 = v46 ^ *v47;
      v49 = v4 ^ v46;
      *v47 = v5 ^ (0x1FFu >> (31 - v45)) & v48;
      v50 = 1023;
    }
    *v3 = v4 ^ (v50 << v45) & v49;
    goto LABEL_8;
  }
  if ( v17 <= 5 )
  {
LABEL_7:
    pWriteBuf->m_iCurBit = m_nDataBits;
    pWriteBuf->m_bOverflow = 1;
    goto LABEL_8;
  }
  pWriteBuf->m_iCurBit = m_iCurBit + 6;
  v61 = &pWriteBuf->m_pData[m_iCurBit >> 5];
  v62 = __ROL4__(v16, m_iCurBit & 0x1F);
  LODWORD(v3) = *v61;
  v5 = 0x1Fu >> (31 - (m_iCurBit & 0x1F));
  v63 = &v61[(0x1Fu >> (31 - (m_iCurBit & 0x1F))) & 1];
  v4 = *v63;
  *v63 = v4 ^ v5 & (v62 ^ *v63);
  *v61 = v3 ^ (63 << (m_iCurBit & 0x1F)) & (v3 ^ v62);
LABEL_8:
  if ( from->m_bUsingExternalPaths )
  {
    from = &LOG_GENERAL;
    if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
    {
      v75.m_szFile = "../public/tier2/fieldpath.h";
      v75.m_szFunction = "GetPathData";
      v75.m_nLine = 514;
      LoggingSystem_Log(LOG_GENERAL, LoggingSeverity_t::LS_ERROR, &v75, "GetPathData failed for read only CFieldPath");
    }
    goto LABEL_24;
  }
  from->u.m_FixedPaths[v9].m_nValue += v14;
  LODWORD(v3) = m_nCount - 3;
  v4 = pWriteBuf;
  v18 = 31;
  v5 = 2LL * v3;
  v19 = v6;
  if ( v3 < *(v6 + 16) )
  {
    while ( 1 )
    {
      v20 = (v19 + v5);
      if ( *(v19 + 18) != 0 )
        v20 = (*v19 + v5);
      v6 = *v20;
      if ( from->m_bUsingExternalPaths )
        break;
      v21 = from->m_nCount;
      if ( v21 > 5 )
      {
        from = &LOG_GENERAL;
        if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
        {
          v75.m_szFile = "../public/tier2/fieldpath.h";
          v75.m_szFunction = "Path_AddToTail";
          v75.m_nLine = 425;
          LoggingSystem_Log(
            LOG_GENERAL,
            LoggingSeverity_t::LS_ERROR,
            &v75,
            "Path_AddToTail failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)",
            6);
        }
LABEL_24:
        if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v34, v35, v32, v33) != 0 )
          loc_0 = -559038737;
        Plat_ExitProcess(1);
        goto LABEL_27;
      }
      from->m_nCount = v21 + 1;
      from->u.m_FixedPaths[v21].m_nValue = v6;
      if ( v6 <= 3 )
      {
        v22 = *(v4 + 16);
        v23 = *(v4 + 12);
        if ( v22 >= v23 )
        {
          *(v4 + 20) = 1;
        }
        else
        {
          *(*v4 + 4LL * (v22 >> 5)) |= 1 << v22;
          v23 = *(v4 + 12);
          v22 = *(v4 + 16) + 1;
          *(v4 + 16) = v22;
        }
        if ( v23 - v22 <= 1 )
          goto LABEL_38;
        *(v4 + 16) = v22 + 2;
        v24 = v22 & 0x1F;
        v25 = (*v4 + 4LL * (v22 >> 5));
        v26 = __ROL4__(v6, v22 & 0x1F);
        v27 = *v25;
        v28 = &v25[1u >> (v18 - (v22 & 0x1F))];
        v29 = v26 ^ *v28;
        v30 = *v25 ^ v26;
        *v28 ^= (1u >> (v18 - v24)) & v29;
        v31 = 3;
        goto LABEL_19;
      }
LABEL_27:
      v36 = *(v4 + 16);
      v37 = *(v4 + 12);
      if ( v36 >= v37 )
      {
        *(v4 + 20) = 1;
        if ( v6 <= 0xF )
        {
LABEL_29:
          if ( v37 <= v36 )
          {
            *(v4 + 20) = 1;
            if ( v37 - v36 <= 3 )
              goto LABEL_31;
          }
          else
          {
            *(*v4 + 4LL * (v36 >> 5)) |= 1 << v36;
            v36 = *(v4 + 16) + 1;
            v37 = *(v4 + 12);
            *(v4 + 16) = v36;
            if ( v37 - v36 <= 3 )
              goto LABEL_31;
          }
          *(v4 + 16) = v36 + 4;
          v24 = v36 & 0x1F;
          v25 = (*v4 + 4LL * (v36 >> 5));
          v51 = __ROL4__(v6, v36 & 0x1F);
          v27 = *v25;
          v52 = &v25[(7u >> (v18 - (v36 & 0x1F))) & 1];
          v53 = v51 ^ *v52;
          v30 = *v25 ^ v51;
          *v52 ^= (7u >> (v18 - v24)) & v53;
          v31 = 15;
          goto LABEL_19;
        }
      }
      else
      {
        *(*v4 + 4LL * (v36 >> 5)) &= ~(1 << v36);
        v36 = *(v4 + 16) + 1;
        v37 = *(v4 + 12);
        *(v4 + 16) = v36;
        if ( v6 <= 0xF )
          goto LABEL_29;
        if ( v36 < v37 )
        {
          *(*v4 + 4LL * (v36 >> 5)) &= ~(1 << v36);
          v36 = *(v4 + 16) + 1;
          v37 = *(v4 + 12);
          *(v4 + 16) = v36;
          if ( v6 > 0x3FF )
          {
            if ( v37 <= v36 )
            {
LABEL_41:
              *(v4 + 20) = 1;
              if ( v6 <= 0x1FFFF )
                goto LABEL_42;
            }
            else
            {
              *(*v4 + 4LL * (v36 >> 5)) &= ~(1 << v36);
              ++*(v4 + 16);
              if ( v6 <= 0x1FFFF )
              {
LABEL_42:
                v41 = *(v4 + 16);
                v23 = *(v4 + 12);
                if ( v41 >= v23 )
                {
                  *(v4 + 20) = 1;
                }
                else
                {
                  *(*v4 + 4LL * (v41 >> 5)) |= 1 << v41;
                  v23 = *(v4 + 12);
                  v41 = *(v4 + 16) + 1;
                  *(v4 + 16) = v41;
                }
                if ( v23 - v41 <= 16 )
                {
LABEL_38:
                  *(v4 + 16) = v23;
                  *(v4 + 20) = 1;
                  goto LABEL_20;
                }
                *(v4 + 16) = v41 + 17;
                v24 = v41 & 0x1F;
                v25 = (*v4 + 4LL * (v41 >> 5));
                v42 = __ROL4__(v6, v41 & 0x1F);
                v27 = *v25;
                v43 = &v25[(0xFFFFu >> (v18 - (v41 & 0x1F))) & 1];
                v44 = v42 ^ *v43;
                v30 = *v25 ^ v42;
                *v43 ^= (0xFFFFu >> (v18 - v24)) & v44;
                v31 = 0x1FFFF;
                goto LABEL_19;
              }
            }
            v73 = v19;
            v74 = v18;
            bf_write::WriteOneBit(v4, 0);
            v23 = *(v4 + 12);
            v57 = *(v4 + 16);
            v18 = v74;
            v19 = v73;
            if ( v23 - v57 <= 30 )
              goto LABEL_38;
            *(v4 + 16) = v57 + 31;
            v24 = v57 & 0x1F;
            v25 = (*v4 + 4LL * (v57 >> 5));
            v58 = __ROL4__(v6, v57 & 0x1F);
            v27 = *v25;
            v59 = &v25[(0x3FFFFFFFu >> (v74 - (v57 & 0x1F))) & 1];
            v60 = v58 ^ *v59;
            v30 = *v25 ^ v58;
            *v59 ^= (0x3FFFFFFFu >> (v74 - v24)) & v60;
            v31 = 0x7FFFFFFF;
            goto LABEL_19;
          }
          goto LABEL_34;
        }
      }
      *(v4 + 20) = 1;
      if ( v6 > 0x3FF )
        goto LABEL_41;
LABEL_34:
      if ( v37 <= v36 )
      {
        *(v4 + 20) = 1;
      }
      else
      {
        *(*v4 + 4LL * (v36 >> 5)) |= 1 << v36;
        v36 = *(v4 + 16) + 1;
        v37 = *(v4 + 12);
        *(v4 + 16) = v36;
      }
      if ( v37 - v36 <= 9 )
      {
LABEL_31:
        *(v4 + 16) = v37;
        *(v4 + 20) = 1;
        goto LABEL_20;
      }
      *(v4 + 16) = v36 + 10;
      v24 = v36 & 0x1F;
      v25 = (*v4 + 4LL * (v36 >> 5));
      v38 = __ROL4__(v6, v36 & 0x1F);
      v27 = *v25;
      v39 = &v25[(0x1FFu >> (v18 - (v36 & 0x1F))) & 1];
      v40 = v38 ^ *v39;
      v30 = *v25 ^ v38;
      *v39 ^= (0x1FFu >> (v18 - v24)) & v40;
      v31 = 1023;
LABEL_19:
      *v25 = v27 ^ (v31 << v24) & v30;
LABEL_20:
      LODWORD(v3) = v3 + 1;
      v5 += 2;
      if ( v3 >= *(v19 + 16) )
        return;
    }
    from = &LOG_GENERAL;
    if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
    {
      v75.m_szFile = "../public/tier2/fieldpath.h";
      v75.m_szFunction = "Path_AddToTail";
      v75.m_nLine = 428;
      LoggingSystem_Log(
        LOG_GENERAL,
        LoggingSeverity_t::LS_ERROR,
        &v75,
        "Path_AddToTail failed for read only CFieldPath");
    }
    goto LABEL_24;
  }
}


// FieldOp_Write_PushThreePack5LeftDeltaZero  (line 485, @0x0000000003118ac0, libserver.so)  // inlines: GetDepth, GetNumBitsLeft, GetPathData, IsUsingFixedPaths, LeafCodeInfo_t, LoadLittleDWord, Path_AddToTail, Push, SetOverflowFlag, WriteUBitLong, operator[]
// calls: LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...)
// strings: "../public/tier2/fieldpath.h", "Path_AddToTail", "Path_AddToTail failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)", "Path_AddToTail failed for read only CFieldPath"
void __fastcall FieldOp_Write_PushThreePack5LeftDeltaZero(
        CFieldPath *const from,
        const CFieldPath *const to,
        bf_write *pWriteBuf)
{
  int v3; // eax
  __int64 v4; // r8
  const CFieldPath::Path_t *v5; // rcx
  int m_nValue; // r10d
  __int64 m_nCount; // rcx
  int m_iCurBit; // ecx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // r8
  __int64 v14; // r9
  char v15; // bl
  uint32 *v16; // r11
  int v17; // r10d
  uint32 v18; // r13d
  uint32 *v19; // rcx
  LeafCodeInfo_t v20; // [rsp+0h] [rbp-50h] BYREF

  v3 = to->m_nCount - 3;
  v4 = v3;
  do
  {
    v5 = (to + v4 * 2);
    if ( to->m_bUsingExternalPaths )
      v5 = &to->u.m_pPaths[v4];
    m_nValue = v5->m_nValue;
    if ( from->m_bUsingExternalPaths )
    {
      if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
      {
        v20.m_szFile = "../public/tier2/fieldpath.h";
        v20.m_szFunction = "Path_AddToTail";
        v20.m_nLine = 428;
        LoggingSystem_Log(
          LOG_GENERAL,
          LoggingSeverity_t::LS_ERROR,
          &v20,
          "Path_AddToTail failed for read only CFieldPath",
          v13,
          v14);
      }
      goto LABEL_12;
    }
    m_nCount = from->m_nCount;
    if ( m_nCount > 5 )
    {
      if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
      {
        v20.m_szFile = "../public/tier2/fieldpath.h";
        v20.m_szFunction = "Path_AddToTail";
        v20.m_nLine = 425;
        LoggingSystem_Log(
          LOG_GENERAL,
          LoggingSeverity_t::LS_ERROR,
          &v20,
          "Path_AddToTail failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)",
          6);
      }
LABEL_12:
      if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v11, v12, v9, v10) != 0 )
        loc_0 = -559038737;
      v3 = Plat_ExitProcess(1);
      goto LABEL_15;
    }
    from->m_nCount = m_nCount + 1;
    from->u.m_FixedPaths[m_nCount].m_nValue = m_nValue;
    m_iCurBit = pWriteBuf->m_iCurBit;
    if ( pWriteBuf->m_nDataBits - m_iCurBit <= 4 )
    {
      pWriteBuf->m_iCurBit = pWriteBuf->m_nDataBits;
      pWriteBuf->m_bOverflow = 1;
      goto LABEL_8;
    }
LABEL_15:
    pWriteBuf->m_iCurBit = m_iCurBit + 5;
    v15 = m_iCurBit & 0x1F;
    v16 = &pWriteBuf->m_pData[m_iCurBit >> 5];
    v17 = __ROL4__(m_nValue, m_iCurBit & 0x1F);
    v18 = *v16;
    v19 = &v16[(0xFu >> (31 - (m_iCurBit & 0x1F))) & 1];
    *v19 ^= (0xFu >> (31 - v15)) & (v17 ^ *v19);
    *v16 = v18 ^ (31 << v15) & (v18 ^ v17);
LABEL_8:
    ++v3;
    ++v4;
  }
  while ( v3 < to->m_nCount );
}


// FieldOp_Write_PushThreePack5LeftDeltaOne  (line 502, @0x0000000003118310, libserver.so)  // inlines: GetDepth, GetNumBitsLeft, GetPathData, IsUsingFixedPaths, LeafCodeInfo_t, LoadLittleDWord, Path_AddToTail, Push, Set, SetOverflowFlag, WriteUBitLong, operator[]
// calls: LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...)
// strings: "../public/tier2/fieldpath.h", "GetPathData", "GetPathData failed for read only CFieldPath", "Path_AddToTail", "Path_AddToTail failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)", "Path_AddToTail failed for read only CFieldPath"
void __fastcall FieldOp_Write_PushThreePack5LeftDeltaOne(
        CFieldPath *const from,
        const CFieldPath *const to,
        bf_write *pWriteBuf)
{
  unsigned int v3; // r13d
  int v4; // r14d
  int m_nCount; // ecx
  int v6; // eax
  __int64 v7; // r8
  const CFieldPath::Path_t *v8; // rcx
  int m_nValue; // r10d
  __int64 v10; // rcx
  int m_iCurBit; // ecx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // r8
  __int64 v17; // r9
  char v18; // bl
  uint32 *v19; // r11
  int v20; // r10d
  uint32 v21; // r12d
  uint32 *v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  LeafCodeInfo_t v25; // [rsp+0h] [rbp-50h] BYREF

  m_nCount = to->m_nCount;
  if ( from->m_bUsingExternalPaths )
  {
    if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
    {
      v25.m_szFile = "../public/tier2/fieldpath.h";
      v25.m_szFunction = "GetPathData";
      v25.m_nLine = 514;
      LoggingSystem_Log(
        LOG_GENERAL,
        LoggingSeverity_t::LS_ERROR,
        &v25,
        "GetPathData failed for read only CFieldPath",
        v23,
        v24);
    }
    goto LABEL_13;
  }
  v6 = m_nCount - 3;
  v4 = 31;
  v3 = 15;
  ++from->u.m_FixedPaths[m_nCount - 4].m_nValue;
  v7 = m_nCount - 3;
  if ( m_nCount - 3 < to->m_nCount )
  {
    while ( 1 )
    {
      v8 = (to + v7 * 2);
      if ( to->m_bUsingExternalPaths )
        v8 = &to->u.m_pPaths[v7];
      m_nValue = v8->m_nValue;
      if ( from->m_bUsingExternalPaths )
        break;
      v10 = from->m_nCount;
      if ( v10 > 5 )
      {
        if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
        {
          v25.m_szFile = "../public/tier2/fieldpath.h";
          v25.m_szFunction = "Path_AddToTail";
          v25.m_nLine = 425;
          LoggingSystem_Log(
            LOG_GENERAL,
            LoggingSeverity_t::LS_ERROR,
            &v25,
            "Path_AddToTail failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)",
            6);
        }
LABEL_13:
        if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v14, v15, v12, v13) != 0 )
          loc_0 = -559038737;
        v6 = Plat_ExitProcess(1);
LABEL_16:
        pWriteBuf->m_iCurBit = m_iCurBit + 5;
        v18 = m_iCurBit & 0x1F;
        v19 = &pWriteBuf->m_pData[m_iCurBit >> 5];
        v20 = __ROL4__(m_nValue, m_iCurBit & 0x1F);
        v21 = *v19;
        v22 = &v19[(v3 >> (v4 - (m_iCurBit & 0x1F))) & 1];
        *v22 ^= (v3 >> (v4 - v18)) & (v20 ^ *v22);
        *v19 = v21 ^ (v4 << v18) & (v21 ^ v20);
        goto LABEL_9;
      }
      from->m_nCount = v10 + 1;
      from->u.m_FixedPaths[v10].m_nValue = m_nValue;
      m_iCurBit = pWriteBuf->m_iCurBit;
      if ( pWriteBuf->m_nDataBits - m_iCurBit > 4 )
        goto LABEL_16;
      pWriteBuf->m_iCurBit = pWriteBuf->m_nDataBits;
      pWriteBuf->m_bOverflow = 1;
LABEL_9:
      ++v6;
      ++v7;
      if ( v6 >= to->m_nCount )
        return;
    }
    if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
    {
      v25.m_szFile = "../public/tier2/fieldpath.h";
      v25.m_szFunction = "Path_AddToTail";
      v25.m_nLine = 428;
      LoggingSystem_Log(
        LOG_GENERAL,
        LoggingSeverity_t::LS_ERROR,
        &v25,
        "Path_AddToTail failed for read only CFieldPath",
        v16,
        v17);
    }
    goto LABEL_13;
  }
}


// FieldOp_Write_PushThreePack5LeftDeltaN  (line 522, @0x0000000003117dc0, libserver.so)  // inlines: GetDepth, GetNumBitsLeft, GetPathData, IsUsingFixedPaths, LeafCodeInfo_t, LoadLittleDWord, Path_AddToTail, Push, Set, SetOverflowFlag, WriteUBitLong, WriteUBitVar, operator[]
// calls: LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...)
// strings: "../public/tier2/fieldpath.h", "GetPathData", "GetPathData failed for read only CFieldPath", "Path_AddToTail", "Path_AddToTail failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)", "Path_AddToTail failed for read only CFieldPath"
void __fastcall FieldOp_Write_PushThreePack5LeftDeltaN(
        CFieldPath *const from,
        const CFieldPath *const to,
        bf_write *pWriteBuf)
{
  uint32 *v3; // r13
  int v4; // r14d
  int m_nCount; // eax
  __int64 v6; // r8
  const CFieldPath::Path_t *v7; // rcx
  int m_nValue; // r10d
  const CFieldPath::Path_t *v9; // rcx
  int m_iCurBit; // r11d
  int v11; // r10d
  int m_nDataBits; // ecx
  unsigned int v13; // r9d
  int v14; // ebx
  int v15; // eax
  __int64 v16; // r8
  const CFieldPath::Path_t *v17; // rcx
  int v18; // r10d
  __int64 v19; // rcx
  int v20; // ecx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdi
  __int64 v24; // rsi
  char v25; // bl
  uint32 *v26; // r11
  int v27; // r10d
  uint32 v28; // r12d
  uint32 *v29; // rcx
  char v30; // r12
  int v31; // r11d
  uint32 *v32; // rcx
  int v33; // r9d
  int v34; // r11d
  int v35; // r9d
  int v36; // r11d
  uint32 *v37; // rcx
  int v38; // r9d
  uint32 *v39; // rbx
  int v40; // r9d
  int *v41; // rcx
  int v42; // r11d
  unsigned int *v43; // rcx
  int v44; // r15d
  unsigned int v45; // ebx
  int v46; // r11d
  int v47; // r11d
  uint32 *v48; // rbx
  int v49; // r9d
  uint32 v50; // r12d
  LeafCodeInfo_t v51; // [rsp+10h] [rbp-50h] BYREF

  m_nCount = to->m_nCount;
  v6 = m_nCount - 4;
  v7 = (to + 2 * v6);
  if ( to->m_bUsingExternalPaths )
    v7 = &to->u.m_pPaths[v6];
  m_nValue = v7->m_nValue;
  v9 = (from + 2 * v6);
  if ( from->m_bUsingExternalPaths )
    v9 = &from->u.m_pPaths[v6];
  m_iCurBit = pWriteBuf->m_iCurBit;
  v11 = m_nValue - v9->m_nValue;
  m_nDataBits = pWriteBuf->m_nDataBits;
  v13 = v11 - 2;
  v14 = m_nDataBits - m_iCurBit;
  if ( (v11 - 2) > 0xF )
  {
    if ( v13 > 0xFF )
    {
      if ( v13 > 0xFFF )
      {
        if ( v14 <= 5 )
          goto LABEL_7;
        pWriteBuf->m_iCurBit = m_iCurBit + 6;
        v4 = m_iCurBit & 0x1F;
        v3 = &pWriteBuf->m_pData[m_iCurBit >> 5];
        v42 = __ROL4__(v13 & 0xF | 0x30, v4);
        v43 = &v3[(0x1Fu >> (31 - v4)) & 1];
        v44 = *v3;
        v45 = *v43 ^ (0x1Fu >> (31 - v4)) & (v42 ^ *v43);
        v46 = *v3 ^ v42;
        *v43 = v45;
        *v3 = v44 ^ (63 << v4) & v46;
        m_nDataBits = pWriteBuf->m_nDataBits;
        v47 = pWriteBuf->m_iCurBit;
        if ( m_nDataBits - v47 <= 27 )
          goto LABEL_7;
        pWriteBuf->m_iCurBit = v47 + 28;
        LODWORD(v3) = v47 & 0x1F;
        v48 = &pWriteBuf->m_pData[v47 >> 5];
        v49 = __ROL4__(v13 >> 4, v3);
        v50 = *v48;
        v4 = 0x7FFFFFFu >> (31 - v3);
        v48[v4 & 1] ^= v4 & (v49 ^ v48[v4 & 1]);
        *v48 = v50 ^ (0xFFFFFFF << v3) & (v50 ^ v49);
        goto LABEL_8;
      }
      if ( v14 <= 13 )
        goto LABEL_7;
      pWriteBuf->m_iCurBit = m_iCurBit + 14;
      v30 = m_iCurBit & 0x1F;
      v3 = &pWriteBuf->m_pData[m_iCurBit >> 5];
      v4 = *v3;
      v36 = __ROL4__((4 * (v13 & 0xFFFFFFF0)) | v13 & 0xF | 0x20, m_iCurBit & 0x1F);
      v37 = &v3[(0x1FFFu >> (31 - v30)) & 1];
      v38 = v36 ^ *v37;
      v34 = *v3 ^ v36;
      *v37 ^= (0x1FFFu >> (31 - v30)) & v38;
      v35 = 0x3FFF;
    }
    else
    {
      if ( v14 <= 9 )
        goto LABEL_7;
      pWriteBuf->m_iCurBit = m_iCurBit + 10;
      v30 = m_iCurBit & 0x1F;
      v3 = &pWriteBuf->m_pData[m_iCurBit >> 5];
      v4 = *v3;
      v31 = __ROL4__((4 * (v13 & 0xFFFFFFF0)) | v13 & 0xF | 0x10, m_iCurBit & 0x1F);
      v32 = &v3[(0x1FFu >> (31 - v30)) & 1];
      v33 = v31 ^ *v32;
      v34 = *v3 ^ v31;
      *v32 ^= (0x1FFu >> (31 - v30)) & v33;
      v35 = 1023;
    }
    *v3 = v4 ^ (v35 << v30) & v34;
    goto LABEL_8;
  }
  if ( v14 <= 5 )
  {
LABEL_7:
    pWriteBuf->m_iCurBit = m_nDataBits;
    pWriteBuf->m_bOverflow = 1;
    goto LABEL_8;
  }
  pWriteBuf->m_iCurBit = m_iCurBit + 6;
  v39 = &pWriteBuf->m_pData[m_iCurBit >> 5];
  v40 = __ROL4__(v13, m_iCurBit & 0x1F);
  LODWORD(v3) = *v39;
  v41 = &v39[(0x1Fu >> (31 - (m_iCurBit & 0x1F))) & 1];
  v4 = *v41;
  *v41 ^= (0x1Fu >> (31 - (m_iCurBit & 0x1F))) & (v40 ^ *v41);
  *v39 = v3 ^ (63 << (m_iCurBit & 0x1F)) & (v3 ^ v40);
LABEL_8:
  if ( from->m_bUsingExternalPaths )
  {
    if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
    {
      v51.m_szFile = "../public/tier2/fieldpath.h";
      v51.m_szFunction = "GetPathData";
      v51.m_nLine = 514;
      LoggingSystem_Log(LOG_GENERAL, LoggingSeverity_t::LS_ERROR, &v51, "GetPathData failed for read only CFieldPath");
    }
    goto LABEL_20;
  }
  from->u.m_FixedPaths[v6].m_nValue += v11;
  v15 = m_nCount - 3;
  v4 = 31;
  LODWORD(v3) = 15;
  v16 = v15;
  if ( v15 < to->m_nCount )
  {
    while ( 1 )
    {
      v17 = (to + v16 * 2);
      if ( to->m_bUsingExternalPaths )
        v17 = &to->u.m_pPaths[v16];
      v18 = v17->m_nValue;
      if ( from->m_bUsingExternalPaths )
        break;
      v19 = from->m_nCount;
      if ( v19 > 5 )
      {
        if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
        {
          v51.m_szFile = "../public/tier2/fieldpath.h";
          v51.m_szFunction = "Path_AddToTail";
          v51.m_nLine = 425;
          LoggingSystem_Log(
            LOG_GENERAL,
            LoggingSeverity_t::LS_ERROR,
            &v51,
            "Path_AddToTail failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)",
            6);
        }
LABEL_20:
        if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v23, v24, v21, v22) != 0 )
          loc_0 = -559038737;
        v15 = Plat_ExitProcess(1);
LABEL_23:
        pWriteBuf->m_iCurBit = v20 + 5;
        v25 = v20 & 0x1F;
        v26 = &pWriteBuf->m_pData[v20 >> 5];
        v27 = __ROL4__(v18, v20 & 0x1F);
        v28 = *v26;
        v29 = &v26[(v3 >> (v4 - (v20 & 0x1F))) & 1];
        *v29 ^= (v3 >> (v4 - v25)) & (v27 ^ *v29);
        *v26 = v28 ^ (v4 << v25) & (v28 ^ v27);
        goto LABEL_16;
      }
      from->m_nCount = v19 + 1;
      from->u.m_FixedPaths[v19].m_nValue = v18;
      v20 = pWriteBuf->m_iCurBit;
      if ( pWriteBuf->m_nDataBits - v20 > 4 )
        goto LABEL_23;
      pWriteBuf->m_iCurBit = pWriteBuf->m_nDataBits;
      pWriteBuf->m_bOverflow = 1;
LABEL_16:
      ++v15;
      ++v16;
      if ( v15 >= to->m_nCount )
        return;
    }
    if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
    {
      v51.m_szFile = "../public/tier2/fieldpath.h";
      v51.m_szFunction = "Path_AddToTail";
      v51.m_nLine = 428;
      LoggingSystem_Log(
        LOG_GENERAL,
        LoggingSeverity_t::LS_ERROR,
        &v51,
        "Path_AddToTail failed for read only CFieldPath");
    }
    goto LABEL_20;
  }
}


// FieldOp_Write_PushN  (line 546, @0x0000000003120970, libserver.so)  // inlines: CFieldPath_WriteUBitVar, GetDepth, GetNumBitsLeft, GetPathData, IsUsingFixedPaths, LeafCodeInfo_t, LoadLittleDWord, Path_AddToTail, Push, Set, SetOverflowFlag, WriteOneBit, WriteOneBitNoCheck, WriteUBitLong, WriteUBitVar, operator[]
// calls: LoggingSystem_IsChannelEnabled, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...), Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, bf_write::WriteOneBit
// strings: "../public/tier2/fieldpath.h", "GetPathData", "GetPathData failed for read only CFieldPath", "Path_AddToTail", "Path_AddToTail failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)", "Path_AddToTail failed for read only CFieldPath"
void __fastcall FieldOp_Write_PushN(CFieldPath *const from, const CFieldPath *const to, bf_write *pWriteBuf)
{
  unsigned __int64 v3; // r15
  const CFieldPath *v4; // r13
  int m_nCount; // edx
  int m_nDataBits; // edi
  unsigned int v9; // eax
  int m_iCurBit; // edx
  int v11; // ecx
  int v12; // ecx
  int v13; // r9d
  __int64 v14; // rsi
  int v15; // r14d
  __int64 v16; // rax
  const CFieldPath::Path_t *v17; // rdx
  const CFieldPath::Path_t *v18; // r8
  int m_nValue; // edx
  unsigned int v20; // edx
  int v21; // r8d
  const CFieldPath *v22; // rax
  const CFieldPath *v23; // rdx
  const CFieldPath *v24; // rax
  __int64 v25; // rax
  int v26; // eax
  int v27; // ecx
  char v28; // r9
  uint32 *v29; // rdi
  int v30; // r15d
  uint32 v31; // r10d
  uint32 *v32; // rcx
  int v33; // eax
  int v34; // r15d
  int v35; // eax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rdi
  __int64 v39; // rsi
  char v40; // r11
  uint32 *v41; // r10
  int v42; // edi
  uint32 *v43; // rcx
  int v44; // r8d
  int v45; // edi
  int v46; // r8d
  char v47; // r8
  uint32 *v48; // rdi
  uint32 v49; // r9d
  int v50; // edx
  uint32 *v51; // rcx
  int v52; // eax
  int v53; // edx
  int v54; // eax
  int v55; // edi
  uint32 *v56; // rcx
  int v57; // r8d
  int v58; // edx
  uint32 *v59; // rcx
  int v60; // eax
  int v61; // ecx
  int v62; // eax
  int v63; // r15d
  uint32 *v64; // rcx
  int v65; // eax
  int v66; // eax
  int v67; // r15d
  uint32 *v68; // rcx
  int v69; // eax
  int v70; // r15d
  uint32 *v71; // rcx
  int v72; // eax
  int v73; // eax
  int v74; // r15d
  uint32 *v75; // rcx
  int v76; // eax
  uint32 *v77; // rsi
  int v78; // eax
  uint32 v79; // r8d
  char v80; // r9
  uint32 *v81; // r8
  int v82; // r11d
  uint32 v83; // r10d
  uint32 *v84; // rcx
  char v85; // r8
  uint32 *v86; // rdi
  uint32 v87; // r10d
  int v88; // edx
  uint32 *v89; // rcx
  int v90; // edx
  char v91; // r8
  uint32 *v92; // rdi
  int v93; // eax
  uint32 v94; // r9d
  uint32 *v95; // rcx
  int v96; // edx
  int v97; // eax
  char v98; // r11
  uint32 *v99; // r10
  int v100; // edi
  unsigned int *v101; // rcx
  unsigned int v102; // r8d
  int v103; // edi
  int v104; // ecx
  uint32 *v105; // r11
  int v106; // r8d
  uint32 v107; // r9d
  uint32 *v108; // rcx
  const CFieldPath *v109; // [rsp+0h] [rbp-60h]
  int v110; // [rsp+Ch] [rbp-54h]
  LeafCodeInfo_t v111; // [rsp+10h] [rbp-50h] BYREF

  v4 = to;
  m_nCount = from->m_nCount;
  m_nDataBits = pWriteBuf->m_nDataBits;
  v9 = to->m_nCount - m_nCount;
  m_iCurBit = pWriteBuf->m_iCurBit;
  v11 = m_nDataBits - m_iCurBit;
  if ( v9 > 0xF )
  {
    if ( v9 > 0xFF )
    {
      if ( v9 > 0xFFF )
      {
        if ( v11 <= 5 )
          goto LABEL_3;
        pWriteBuf->m_iCurBit = m_iCurBit + 6;
        v85 = m_iCurBit & 0x1F;
        v86 = &pWriteBuf->m_pData[m_iCurBit >> 5];
        v87 = *v86;
        v88 = __ROL4__(v9 & 0xF | 0x30, m_iCurBit & 0x1F);
        v89 = &v86[(0x1Fu >> (31 - v85)) & 1];
        *v89 ^= (0x1Fu >> (31 - v85)) & (v88 ^ *v89);
        *v86 = v87 ^ (63 << v85) & (v87 ^ v88);
        m_nDataBits = pWriteBuf->m_nDataBits;
        v90 = pWriteBuf->m_iCurBit;
        if ( m_nDataBits - v90 <= 27 )
          goto LABEL_3;
        pWriteBuf->m_iCurBit = v90 + 28;
        v91 = v90 & 0x1F;
        v92 = &pWriteBuf->m_pData[v90 >> 5];
        v93 = __ROL4__(v9 >> 4, v90 & 0x1F);
        v94 = *v92;
        v95 = &v92[(0x7FFFFFFu >> (31 - (v90 & 0x1F))) & 1];
        v96 = v93 ^ *v95;
        v97 = *v92 ^ v93;
        *v95 ^= (0x7FFFFFFu >> (31 - v91)) & v96;
        *v92 = v94 ^ (0xFFFFFFF << v91) & v97;
        m_nDataBits = pWriteBuf->m_nDataBits;
        v12 = pWriteBuf->m_iCurBit;
        v13 = m_nDataBits - v12;
        goto LABEL_4;
      }
      if ( v11 <= 13 )
        goto LABEL_3;
      pWriteBuf->m_iCurBit = m_iCurBit + 14;
      v47 = m_iCurBit & 0x1F;
      v48 = &pWriteBuf->m_pData[m_iCurBit >> 5];
      v49 = *v48;
      v58 = __ROL4__((4 * (v9 & 0xFFFFFFF0)) | v9 & 0xF | 0x20, m_iCurBit & 0x1F);
      v59 = &v48[(0x1FFFu >> (31 - v47)) & 1];
      v60 = v58 ^ *v59;
      v53 = *v48 ^ v58;
      *v59 ^= (0x1FFFu >> (31 - v47)) & v60;
      v54 = 0x3FFF;
    }
    else
    {
      if ( v11 <= 9 )
        goto LABEL_3;
      pWriteBuf->m_iCurBit = m_iCurBit + 10;
      v47 = m_iCurBit & 0x1F;
      v48 = &pWriteBuf->m_pData[m_iCurBit >> 5];
      v49 = *v48;
      v50 = __ROL4__((4 * (v9 & 0xFFFFFFF0)) | v9 & 0xF | 0x10, m_iCurBit & 0x1F);
      v51 = &v48[(0x1FFu >> (31 - v47)) & 1];
      v52 = v50 ^ *v51;
      v53 = *v48 ^ v50;
      *v51 ^= (0x1FFu >> (31 - v47)) & v52;
      v54 = 1023;
    }
    *v48 = v49 ^ (v54 << v47) & v53;
    m_nDataBits = pWriteBuf->m_nDataBits;
    v12 = pWriteBuf->m_iCurBit;
    v13 = m_nDataBits - v12;
    goto LABEL_4;
  }
  if ( v11 <= 5 )
  {
LABEL_3:
    pWriteBuf->m_iCurBit = m_nDataBits;
    v12 = m_nDataBits;
    v13 = 0;
    pWriteBuf->m_bOverflow = 1;
    goto LABEL_4;
  }
  pWriteBuf->m_iCurBit = m_iCurBit + 6;
  v77 = &pWriteBuf->m_pData[m_iCurBit >> 5];
  v78 = __ROL4__(v9, m_iCurBit & 0x1F);
  v79 = *v77;
  v77[(0x1Fu >> (31 - (m_iCurBit & 0x1F))) & 1] ^= (0x1Fu >> (31 - (m_iCurBit & 0x1F)))
                                                 & (v78
                                                  ^ v77[(0x1Fu >> (31 - (m_iCurBit & 0x1F))) & 1]);
  *v77 = v79 ^ (63 << (m_iCurBit & 0x1F)) & (v79 ^ v78);
  m_nDataBits = pWriteBuf->m_nDataBits;
  v12 = pWriteBuf->m_iCurBit;
  v13 = m_nDataBits - v12;
LABEL_4:
  v14 = from->m_nCount;
  v15 = v14;
  v16 = v14 - 1;
  v17 = (v4 + 2 * v16);
  if ( v4->m_bUsingExternalPaths )
    v17 = &v4->u.m_pPaths[v16];
  v18 = (from + 2 * v16);
  m_nValue = v17->m_nValue;
  if ( from->m_bUsingExternalPaths )
    v18 = &from->u.m_pPaths[v16];
  v20 = m_nValue - v18->m_nValue;
  if ( v20 > 0xF )
  {
    if ( v20 > 0xFF )
    {
      if ( v20 > 0xFFF )
      {
        if ( v13 <= 5 )
          goto LABEL_10;
        pWriteBuf->m_iCurBit = v12 + 6;
        v98 = v12 & 0x1F;
        v99 = &pWriteBuf->m_pData[v12 >> 5];
        v100 = __ROL4__(v20 & 0xF | 0x30, v12 & 0x1F);
        v101 = &v99[(0x1Fu >> (31 - (v12 & 0x1F))) & 1];
        v3 = *v99;
        v102 = *v101 ^ (0x1Fu >> (31 - v98)) & (v100 ^ *v101);
        v103 = *v99 ^ v100;
        *v101 = v102;
        *v99 = v3 ^ (63 << v98) & v103;
        m_nDataBits = pWriteBuf->m_nDataBits;
        v104 = pWriteBuf->m_iCurBit;
        if ( m_nDataBits - v104 <= 27 )
          goto LABEL_10;
        pWriteBuf->m_iCurBit = v104 + 28;
        v3 = v104 & 0x1F;
        v105 = &pWriteBuf->m_pData[v104 >> 5];
        v106 = __ROL4__(v20 >> 4, v3);
        v107 = *v105;
        v108 = &v105[(0x7FFFFFFu >> (31 - v3)) & 1];
        *v108 ^= (0x7FFFFFFu >> (31 - v3)) & (v106 ^ *v108);
        *v105 = v107 ^ (0xFFFFFFF << v3) & (v107 ^ v106);
        goto LABEL_11;
      }
      if ( v13 <= 13 )
        goto LABEL_10;
      pWriteBuf->m_iCurBit = v12 + 14;
      v40 = v12 & 0x1F;
      v41 = &pWriteBuf->m_pData[v12 >> 5];
      v3 = *v41;
      v55 = __ROL4__((4 * (v20 & 0xFFFFFFF0)) | v20 & 0xF | 0x20, v12 & 0x1F);
      v56 = &v41[(0x1FFFu >> (31 - (v12 & 0x1F))) & 1];
      v57 = v55 ^ *v56;
      v45 = v3 ^ v55;
      *v56 ^= (0x1FFFu >> (31 - v40)) & v57;
      v46 = 0x3FFF;
    }
    else
    {
      if ( v13 <= 9 )
        goto LABEL_10;
      pWriteBuf->m_iCurBit = v12 + 10;
      v40 = v12 & 0x1F;
      v41 = &pWriteBuf->m_pData[v12 >> 5];
      v3 = *v41;
      v42 = __ROL4__((4 * (v20 & 0xFFFFFFF0)) | v20 & 0xF | 0x10, v12 & 0x1F);
      v43 = &v41[(0x1FFu >> (31 - (v12 & 0x1F))) & 1];
      v44 = v42 ^ *v43;
      v45 = v3 ^ v42;
      *v43 ^= (0x1FFu >> (31 - v40)) & v44;
      v46 = 1023;
    }
    *v41 = v3 ^ (v46 << v40) & v45;
    goto LABEL_11;
  }
  if ( v13 <= 5 )
  {
LABEL_10:
    pWriteBuf->m_iCurBit = m_nDataBits;
    pWriteBuf->m_bOverflow = 1;
    goto LABEL_11;
  }
  pWriteBuf->m_iCurBit = v12 + 6;
  v80 = v12 & 0x1F;
  v81 = &pWriteBuf->m_pData[v12 >> 5];
  v82 = __ROL4__(v20, v12 & 0x1F);
  v83 = *v81;
  v3 = 0x1Fu >> (31 - (v12 & 0x1F));
  v84 = &v81[(0x1Fu >> (31 - (v12 & 0x1F))) & 1];
  *v84 ^= v3 & (v82 ^ *v84);
  *v81 = v83 ^ (63 << v80) & (v83 ^ v82);
LABEL_11:
  if ( from->m_bUsingExternalPaths )
  {
    pWriteBuf = &LOG_GENERAL;
    if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
    {
      v111.m_szFile = "../public/tier2/fieldpath.h";
      v111.m_szFunction = "GetPathData";
      v111.m_nLine = 514;
      LoggingSystem_Log(LOG_GENERAL, LoggingSeverity_t::LS_ERROR, &v111, "GetPathData failed for read only CFieldPath");
    }
    goto LABEL_44;
  }
  from->u.m_FixedPaths[v16].m_nValue += v20;
  v21 = 31;
  if ( v14 < v4->m_nCount )
  {
    v22 = v4;
    v4 = (2 * v14);
    v23 = v22;
    while ( 1 )
    {
      v24 = (v4 + v23);
      if ( v23->m_bUsingExternalPaths )
        v24 = (v23->u.m_pPaths + v4);
      v3 = v24->u.m_FixedPaths[0].m_nValue;
      if ( from->m_bUsingExternalPaths )
        break;
      v25 = from->m_nCount;
      if ( v25 > 5 )
      {
        pWriteBuf = &LOG_GENERAL;
        if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
        {
          v111.m_szFile = "../public/tier2/fieldpath.h";
          v111.m_szFunction = "Path_AddToTail";
          v111.m_nLine = 425;
          LoggingSystem_Log(
            LOG_GENERAL,
            LoggingSeverity_t::LS_ERROR,
            &v111,
            "Path_AddToTail failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)",
            6);
        }
LABEL_44:
        if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v38, v39, v36, v37) != 0 )
          loc_0 = -559038737;
        Plat_ExitProcess(1);
        goto LABEL_47;
      }
      from->m_nCount = v25 + 1;
      from->u.m_FixedPaths[v25].m_nValue = v3;
      if ( v3 <= 3 )
      {
        v26 = pWriteBuf->m_iCurBit;
        v27 = pWriteBuf->m_nDataBits;
        if ( v26 >= v27 )
        {
          pWriteBuf->m_bOverflow = 1;
        }
        else
        {
          pWriteBuf->m_pData[v26 >> 5] |= 1 << v26;
          v27 = pWriteBuf->m_nDataBits;
          v26 = pWriteBuf->m_iCurBit + 1;
          pWriteBuf->m_iCurBit = v26;
        }
        if ( v27 - v26 <= 1 )
        {
LABEL_52:
          pWriteBuf->m_iCurBit = v27;
          pWriteBuf->m_bOverflow = 1;
          goto LABEL_24;
        }
        pWriteBuf->m_iCurBit = v26 + 2;
        v28 = v26 & 0x1F;
        v29 = &pWriteBuf->m_pData[v26 >> 5];
        v30 = __ROL4__(v3, v26 & 0x1F);
        v31 = *v29;
        v32 = &v29[1u >> (v21 - (v26 & 0x1F))];
        v33 = v30 ^ *v32;
        v34 = *v29 ^ v30;
        *v32 ^= (1u >> (v21 - v28)) & v33;
        v35 = 3;
        goto LABEL_23;
      }
LABEL_47:
      v61 = pWriteBuf->m_iCurBit;
      v62 = pWriteBuf->m_nDataBits;
      if ( v61 >= v62 )
      {
        pWriteBuf->m_bOverflow = 1;
        if ( v3 <= 0xF )
        {
LABEL_49:
          if ( v61 >= v62 )
          {
            pWriteBuf->m_bOverflow = 1;
            if ( v62 - v61 <= 3 )
              goto LABEL_51;
          }
          else
          {
            pWriteBuf->m_pData[v61 >> 5] |= 1 << v61;
            v61 = pWriteBuf->m_iCurBit + 1;
            v62 = pWriteBuf->m_nDataBits;
            pWriteBuf->m_iCurBit = v61;
            if ( v62 - v61 <= 3 )
              goto LABEL_51;
          }
          pWriteBuf->m_iCurBit = v61 + 4;
          v28 = v61 & 0x1F;
          v29 = &pWriteBuf->m_pData[v61 >> 5];
          v70 = __ROL4__(v3, v61 & 0x1F);
          v31 = *v29;
          v71 = &v29[(7u >> (v21 - (v61 & 0x1F))) & 1];
          v72 = v70 ^ *v71;
          v34 = *v29 ^ v70;
          *v71 ^= (7u >> (v21 - v28)) & v72;
          v35 = 15;
          goto LABEL_23;
        }
      }
      else
      {
        pWriteBuf->m_pData[v61 >> 5] &= ~(1 << v61);
        v61 = pWriteBuf->m_iCurBit + 1;
        v62 = pWriteBuf->m_nDataBits;
        pWriteBuf->m_iCurBit = v61;
        if ( v3 <= 0xF )
          goto LABEL_49;
        if ( v61 < v62 )
        {
          pWriteBuf->m_pData[v61 >> 5] &= ~(1 << v61);
          v61 = pWriteBuf->m_iCurBit + 1;
          v62 = pWriteBuf->m_nDataBits;
          pWriteBuf->m_iCurBit = v61;
          if ( v3 > 0x3FF )
          {
            if ( v62 <= v61 )
            {
LABEL_61:
              pWriteBuf->m_bOverflow = 1;
            }
            else
            {
              pWriteBuf->m_pData[v61 >> 5] &= ~(1 << v61);
              ++pWriteBuf->m_iCurBit;
            }
            v109 = v23;
            v110 = v21;
            if ( v3 > 0x1FFFF )
            {
              bf_write::WriteOneBit(pWriteBuf, 0);
              v27 = pWriteBuf->m_nDataBits;
              v73 = pWriteBuf->m_iCurBit;
              v21 = v110;
              v23 = v109;
              if ( v27 - v73 <= 30 )
                goto LABEL_52;
              pWriteBuf->m_iCurBit = v73 + 31;
              v28 = v73 & 0x1F;
              v29 = &pWriteBuf->m_pData[v73 >> 5];
              v74 = __ROL4__(v3, v73 & 0x1F);
              v31 = *v29;
              v75 = &v29[(0x3FFFFFFFu >> (v110 - (v73 & 0x1F))) & 1];
              v76 = v74 ^ *v75;
              v34 = *v29 ^ v74;
              *v75 ^= (0x3FFFFFFFu >> (v110 - v28)) & v76;
              v35 = 0x7FFFFFFF;
            }
            else
            {
              bf_write::WriteOneBit(pWriteBuf, 1);
              v27 = pWriteBuf->m_nDataBits;
              v66 = pWriteBuf->m_iCurBit;
              v21 = v110;
              v23 = v109;
              if ( v27 - v66 <= 16 )
                goto LABEL_52;
              pWriteBuf->m_iCurBit = v66 + 17;
              v28 = v66 & 0x1F;
              v29 = &pWriteBuf->m_pData[v66 >> 5];
              v67 = __ROL4__(v3, v66 & 0x1F);
              v31 = *v29;
              v68 = &v29[(0xFFFFu >> (v110 - (v66 & 0x1F))) & 1];
              v69 = v67 ^ *v68;
              v34 = *v29 ^ v67;
              *v68 ^= (0xFFFFu >> (v110 - v28)) & v69;
              v35 = 0x1FFFF;
            }
            goto LABEL_23;
          }
          goto LABEL_55;
        }
      }
      pWriteBuf->m_bOverflow = 1;
      if ( v3 > 0x3FF )
        goto LABEL_61;
LABEL_55:
      if ( v61 >= v62 )
      {
        pWriteBuf->m_bOverflow = 1;
      }
      else
      {
        pWriteBuf->m_pData[v61 >> 5] |= 1 << v61;
        v61 = pWriteBuf->m_iCurBit + 1;
        v62 = pWriteBuf->m_nDataBits;
        pWriteBuf->m_iCurBit = v61;
      }
      if ( v62 - v61 <= 9 )
      {
LABEL_51:
        pWriteBuf->m_iCurBit = v62;
        pWriteBuf->m_bOverflow = 1;
        goto LABEL_24;
      }
      pWriteBuf->m_iCurBit = v61 + 10;
      v28 = v61 & 0x1F;
      v29 = &pWriteBuf->m_pData[v61 >> 5];
      v63 = __ROL4__(v3, v61 & 0x1F);
      v31 = *v29;
      v64 = &v29[(0x1FFu >> (v21 - (v61 & 0x1F))) & 1];
      v65 = v63 ^ *v64;
      v34 = *v29 ^ v63;
      *v64 ^= (0x1FFu >> (v21 - v28)) & v65;
      v35 = 1023;
LABEL_23:
      *v29 = v31 ^ (v35 << v28) & v34;
LABEL_24:
      ++v15;
      v4 = (v4 + 2);
      if ( v15 >= v23->m_nCount )
        return;
    }
    pWriteBuf = &LOG_GENERAL;
    if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
    {
      v111.m_szFile = "../public/tier2/fieldpath.h";
      v111.m_szFunction = "Path_AddToTail";
      v111.m_nLine = 428;
      LoggingSystem_Log(
        LOG_GENERAL,
        LoggingSeverity_t::LS_ERROR,
        &v111,
        "Path_AddToTail failed for read only CFieldPath");
    }
    goto LABEL_44;
  }
}


// FieldOp_Write_PushNAndNonTopographical  (line 571, @0x00000000031214f0, libserver.so)  // inlines: CFieldPath_WriteUBitVar, GetDepth, GetNumBitsLeft, GetPathData, IsUsingFixedPaths, LeafCodeInfo_t, LoadLittleDWord, Path_AddToTail, Push, Set, SetOverflowFlag, WriteOneBit, WriteOneBitNoCheck, WriteUBitLong, WriteUBitVar, operator[]
// calls: bf_write::WriteSignedVarInt32, LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...), bf_write::WriteOneBit
// strings: "../public/tier2/fieldpath.h", "Path_AddToTail", "Path_AddToTail failed for read only CFieldPath", "GetPathData", "GetPathData failed for read only CFieldPath", "Path_AddToTail failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)"
void __fastcall FieldOp_Write_PushNAndNonTopographical(
        CFieldPath *const from,
        const CFieldPath *const to,
        bf_write *pWriteBuf)
{
  const CFieldPath *v3; // r15
  CFieldPath *v5; // r12
  int m_nCount; // eax
  unsigned __int64 m_nValue; // r13
  int m_nDataBits; // esi
  int m_iCurBit; // ecx
  unsigned int *v10; // rax
  CFieldPath *v11; // r15
  unsigned int *v12; // rbx
  __int16 *v13; // rax
  int v14; // edx
  CFieldPath *v15; // rax
  int v16; // edx
  int v17; // edi
  __int64 v18; // rdx
  int i; // ebx
  CFieldPath *v20; // rax
  __int64 v21; // rax
  int v22; // eax
  int v23; // ecx
  char v24; // r8
  uint32 *v25; // rdi
  int v26; // r13d
  uint32 v27; // r9d
  uint32 *v28; // rcx
  int v29; // eax
  int v30; // r13d
  int v31; // eax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rdi
  __int64 v35; // rsi
  char v36; // r11
  uint32 *v37; // r10
  uint32 v38; // ebx
  int v39; // esi
  uint32 *v40; // rcx
  int v41; // edi
  int v42; // esi
  int v43; // edi
  int v44; // ecx
  int v45; // eax
  int v46; // eax
  int v47; // eax
  int v48; // r13d
  uint32 *v49; // rcx
  int v50; // eax
  int v51; // r13d
  uint32 *v52; // rcx
  int v53; // eax
  int v54; // esi
  uint32 *v55; // rcx
  int v56; // edi
  int v57; // eax
  int v58; // r13d
  uint32 *v59; // rcx
  int v60; // eax
  char v61; // r11
  uint32 *v62; // r10
  uint32 v63; // ebx
  int v64; // esi
  uint32 *v65; // rcx
  int v66; // edi
  uint32 *v67; // rbx
  int v68; // esi
  uint32 v69; // r9d
  uint32 *v70; // rcx
  int v71; // r13d
  uint32 *v72; // rcx
  int v73; // eax
  char v74; // r9
  uint32 *v75; // rdi
  int v76; // eax
  uint32 v77; // r10d
  uint32 *v78; // rcx
  int16 v79; // [rsp+Ah] [rbp-66h]
  int nStart; // [rsp+Ch] [rbp-64h]
  unsigned int nDepthDelta; // [rsp+10h] [rbp-60h]
  __int16 nDelta; // [rsp+14h] [rbp-5Ch]
  __int64 v83; // [rsp+18h] [rbp-58h]
  LeafCodeInfo_t v84; // [rsp+20h] [rbp-50h] BYREF

  v3 = to;
  v5 = from;
  m_nCount = from->m_nCount;
  v79 = from->m_nCount;
  nDepthDelta = to->m_nCount - m_nCount;
  nStart = m_nCount;
  if ( m_nCount <= 0 )
  {
    m_iCurBit = pWriteBuf->m_iCurBit;
    m_nDataBits = pWriteBuf->m_nDataBits;
  }
  else
  {
    m_nValue = 0;
    m_nDataBits = pWriteBuf->m_nDataBits;
    m_iCurBit = pWriteBuf->m_iCurBit;
    v83 = 2LL * (m_nCount - 1) + 2;
    v10 = v3;
    v11 = from;
    v12 = v10;
    do
    {
      while ( 1 )
      {
        v13 = (v12 + m_nValue);
        if ( *(v12 + 18) != 0 )
          v13 = (*v12 + m_nValue);
        v14 = *v13;
        v15 = v5;
        if ( v11->m_bUsingExternalPaths )
          v15 = (v11->u.m_pPaths + m_nValue);
        v16 = v14 - v15->u.m_FixedPaths[0].m_nValue;
        if ( v16 != 0 )
          break;
        if ( m_nDataBits <= m_iCurBit )
        {
          pWriteBuf->m_bOverflow = 1;
        }
        else
        {
          pWriteBuf->m_pData[m_iCurBit >> 5] &= ~(1 << m_iCurBit);
          m_nDataBits = pWriteBuf->m_nDataBits;
          m_iCurBit = pWriteBuf->m_iCurBit + 1;
          pWriteBuf->m_iCurBit = m_iCurBit;
        }
        m_nValue += 2LL;
        v5 = (v5 + 2);
        if ( m_nValue == v83 )
          goto LABEL_15;
      }
      if ( m_nDataBits > m_iCurBit )
      {
        pWriteBuf->m_pData[m_iCurBit >> 5] |= 1 << m_iCurBit;
        ++pWriteBuf->m_iCurBit;
        goto LABEL_13;
      }
      while ( 1 )
      {
        pWriteBuf->m_bOverflow = 1;
LABEL_13:
        nDelta = v16;
        bf_write::WriteSignedVarInt32(pWriteBuf, v16 - 1);
        if ( !v11->m_bUsingExternalPaths )
          break;
        v12 = &LOG_GENERAL;
        if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
        {
          v84.m_szFile = "../public/tier2/fieldpath.h";
          v84.m_szFunction = "GetPathData";
          v84.m_nLine = 514;
          LoggingSystem_Log(
            LOG_GENERAL,
            LoggingSeverity_t::LS_ERROR,
            &v84,
            "GetPathData failed for read only CFieldPath");
        }
LABEL_35:
        if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v34, v35, v32, v33) != 0 )
          loc_0 = -559038737;
        Plat_ExitProcess(1);
      }
      v5->u.m_FixedPaths[0].m_nValue += nDelta;
      m_nValue += 2LL;
      v5 = (v5 + 2);
      m_iCurBit = pWriteBuf->m_iCurBit;
      m_nDataBits = pWriteBuf->m_nDataBits;
    }
    while ( m_nValue != v83 );
LABEL_15:
    v5 = v11;
    v3 = v12;
  }
  v17 = m_nDataBits - m_iCurBit;
  if ( nDepthDelta > 0xF )
  {
    if ( nDepthDelta > 0xFF )
    {
      if ( nDepthDelta > 0xFFF )
      {
        if ( v17 <= 5 )
          goto LABEL_18;
        pWriteBuf->m_iCurBit = m_iCurBit + 6;
        v61 = m_iCurBit & 0x1F;
        v62 = &pWriteBuf->m_pData[m_iCurBit >> 5];
        v63 = *v62;
        v64 = __ROL4__(nDepthDelta & 0xF | 0x30, m_iCurBit & 0x1F);
        v65 = &v62[(0x1Fu >> (31 - (m_iCurBit & 0x1F))) & 1];
        *v65 ^= (0x1Fu >> (31 - v61)) & (v64 ^ *v65);
        *v62 = v63 ^ (63 << v61) & (v63 ^ v64);
        m_nDataBits = pWriteBuf->m_nDataBits;
        v66 = pWriteBuf->m_iCurBit;
        if ( m_nDataBits - v66 <= 27 )
          goto LABEL_18;
        pWriteBuf->m_iCurBit = v66 + 28;
        v67 = &pWriteBuf->m_pData[v66 >> 5];
        v68 = __ROL4__(nDepthDelta >> 4, v66 & 0x1F);
        v69 = *v67;
        v70 = &v67[(0x7FFFFFFu >> (31 - (v66 & 0x1F))) & 1];
        *v70 ^= (0x7FFFFFFu >> (31 - (v66 & 0x1F))) & (v68 ^ *v70);
        *v67 = v69 ^ (0xFFFFFFF << (v66 & 0x1F)) & (v69 ^ v68);
        goto LABEL_19;
      }
      if ( v17 <= 13 )
        goto LABEL_18;
      pWriteBuf->m_iCurBit = m_iCurBit + 14;
      v36 = m_iCurBit & 0x1F;
      v37 = &pWriteBuf->m_pData[m_iCurBit >> 5];
      v38 = *v37;
      v54 = __ROL4__((4 * (nDepthDelta & 0xFFFFFFF0)) | nDepthDelta & 0xF | 0x20, m_iCurBit & 0x1F);
      v55 = &v37[(0x1FFFu >> (31 - (m_iCurBit & 0x1F))) & 1];
      v56 = v54 ^ *v55;
      v42 = *v37 ^ v54;
      *v55 ^= (0x1FFFu >> (31 - v36)) & v56;
      v43 = 0x3FFF;
    }
    else
    {
      if ( v17 <= 9 )
        goto LABEL_18;
      pWriteBuf->m_iCurBit = m_iCurBit + 10;
      v36 = m_iCurBit & 0x1F;
      v37 = &pWriteBuf->m_pData[m_iCurBit >> 5];
      v38 = *v37;
      v39 = __ROL4__((4 * (nDepthDelta & 0xFFFFFFF0)) | nDepthDelta & 0xF | 0x10, m_iCurBit & 0x1F);
      v40 = &v37[(0x1FFu >> (31 - (m_iCurBit & 0x1F))) & 1];
      v41 = v39 ^ *v40;
      v42 = *v37 ^ v39;
      *v40 ^= (0x1FFu >> (31 - v36)) & v41;
      v43 = 1023;
    }
    *v37 = v38 ^ (v43 << v36) & v42;
    goto LABEL_19;
  }
  if ( v17 <= 5 )
  {
LABEL_18:
    pWriteBuf->m_iCurBit = m_nDataBits;
    pWriteBuf->m_bOverflow = 1;
    goto LABEL_19;
  }
  pWriteBuf->m_iCurBit = m_iCurBit + 6;
  v74 = m_iCurBit & 0x1F;
  v75 = &pWriteBuf->m_pData[m_iCurBit >> 5];
  v76 = __ROL4__(nDepthDelta, m_iCurBit & 0x1F);
  v77 = *v75;
  v78 = &v75[(0x1Fu >> (31 - (m_iCurBit & 0x1F))) & 1];
  *v78 ^= (0x1Fu >> (31 - v74)) & (v76 ^ *v78);
  *v75 = v77 ^ (63 << v74) & (v77 ^ v76);
LABEL_19:
  if ( nStart < v3->m_nCount )
  {
    v18 = v3;
    v11 = (2LL * v79);
    for ( i = nStart; i < *(v18 + 16); ++i )
    {
      v20 = (v11 + v18);
      if ( *(v18 + 18) != 0 )
        v20 = (v11 + *v18);
      m_nValue = v20->u.m_FixedPaths[0].m_nValue;
      if ( v5->m_bUsingExternalPaths )
      {
        v12 = &LOG_GENERAL;
        if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
        {
          v84.m_szFile = "../public/tier2/fieldpath.h";
          v84.m_szFunction = "Path_AddToTail";
          v84.m_nLine = 428;
          LoggingSystem_Log(
            LOG_GENERAL,
            LoggingSeverity_t::LS_ERROR,
            &v84,
            "Path_AddToTail failed for read only CFieldPath");
        }
        goto LABEL_35;
      }
      v21 = v5->m_nCount;
      if ( v21 > 5 )
      {
        v12 = &LOG_GENERAL;
        if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
        {
          v84.m_szFile = "../public/tier2/fieldpath.h";
          v84.m_szFunction = "Path_AddToTail";
          v84.m_nLine = 425;
          LoggingSystem_Log(
            LOG_GENERAL,
            LoggingSeverity_t::LS_ERROR,
            &v84,
            "Path_AddToTail failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)",
            6);
        }
        goto LABEL_35;
      }
      v5->m_nCount = v21 + 1;
      v5->u.m_FixedPaths[v21].m_nValue = m_nValue;
      if ( m_nValue <= 3 )
      {
        v22 = pWriteBuf->m_iCurBit;
        v23 = pWriteBuf->m_nDataBits;
        if ( v22 >= v23 )
        {
          pWriteBuf->m_bOverflow = 1;
        }
        else
        {
          pWriteBuf->m_pData[v22 >> 5] |= 1 << v22;
          v23 = pWriteBuf->m_nDataBits;
          v22 = pWriteBuf->m_iCurBit + 1;
          pWriteBuf->m_iCurBit = v22;
        }
        if ( v23 - v22 <= 1 )
        {
LABEL_54:
          pWriteBuf->m_iCurBit = v23;
          pWriteBuf->m_bOverflow = 1;
          goto LABEL_31;
        }
        pWriteBuf->m_iCurBit = v22 + 2;
        v24 = v22 & 0x1F;
        v25 = &pWriteBuf->m_pData[v22 >> 5];
        v26 = __ROL4__(m_nValue, v22 & 0x1F);
        v27 = *v25;
        v28 = &v25[1u >> (31 - (v22 & 0x1F))];
        v29 = v26 ^ *v28;
        v30 = *v25 ^ v26;
        *v28 ^= (1u >> (31 - v24)) & v29;
        v31 = 3;
        goto LABEL_30;
      }
      v44 = pWriteBuf->m_iCurBit;
      v45 = pWriteBuf->m_nDataBits;
      if ( v44 >= v45 )
      {
        pWriteBuf->m_bOverflow = 1;
        if ( m_nValue > 0xF )
          goto LABEL_56;
      }
      else
      {
        pWriteBuf->m_pData[v44 >> 5] &= ~(1 << v44);
        v44 = pWriteBuf->m_iCurBit + 1;
        v45 = pWriteBuf->m_nDataBits;
        pWriteBuf->m_iCurBit = v44;
        if ( m_nValue > 0xF )
        {
          if ( v45 <= v44 )
          {
LABEL_56:
            pWriteBuf->m_bOverflow = 1;
            v83 = v18;
            if ( m_nValue > 0x3FF )
            {
LABEL_57:
              bf_write::WriteOneBit(pWriteBuf, 0);
              if ( m_nValue > 0x1FFFF )
              {
                bf_write::WriteOneBit(pWriteBuf, 0);
                v23 = pWriteBuf->m_nDataBits;
                v57 = pWriteBuf->m_iCurBit;
                v18 = v83;
                if ( v23 - v57 <= 30 )
                  goto LABEL_54;
                pWriteBuf->m_iCurBit = v57 + 31;
                v24 = v57 & 0x1F;
                v25 = &pWriteBuf->m_pData[v57 >> 5];
                v58 = __ROL4__(m_nValue, v57 & 0x1F);
                v27 = *v25;
                v59 = &v25[(0x3FFFFFFFu >> (31 - (v57 & 0x1F))) & 1];
                v60 = v58 ^ *v59;
                v30 = *v25 ^ v58;
                *v59 ^= (0x3FFFFFFFu >> (31 - v24)) & v60;
                v31 = 0x7FFFFFFF;
              }
              else
              {
                bf_write::WriteOneBit(pWriteBuf, 1);
                v23 = pWriteBuf->m_nDataBits;
                v47 = pWriteBuf->m_iCurBit;
                v18 = v83;
                if ( v23 - v47 <= 16 )
                  goto LABEL_54;
                pWriteBuf->m_iCurBit = v47 + 17;
                v24 = v47 & 0x1F;
                v25 = &pWriteBuf->m_pData[v47 >> 5];
                v48 = __ROL4__(m_nValue, v47 & 0x1F);
                v27 = *v25;
                v49 = &v25[(0xFFFFu >> (31 - (v47 & 0x1F))) & 1];
                v50 = v48 ^ *v49;
                v30 = *v25 ^ v48;
                *v49 ^= (0xFFFFu >> (31 - v24)) & v50;
                v31 = 0x1FFFF;
              }
              goto LABEL_30;
            }
          }
          else
          {
            v83 = v18;
            pWriteBuf->m_pData[v44 >> 5] &= ~(1 << v44);
            ++pWriteBuf->m_iCurBit;
            if ( m_nValue > 0x3FF )
              goto LABEL_57;
          }
          bf_write::WriteOneBit(pWriteBuf, 1);
          v23 = pWriteBuf->m_nDataBits;
          v46 = pWriteBuf->m_iCurBit;
          v18 = v83;
          if ( v23 - v46 <= 9 )
            goto LABEL_54;
          pWriteBuf->m_iCurBit = v46 + 10;
          v24 = v46 & 0x1F;
          v25 = &pWriteBuf->m_pData[v46 >> 5];
          v71 = __ROL4__(m_nValue, v46 & 0x1F);
          v27 = *v25;
          v72 = &v25[(0x1FFu >> (31 - (v46 & 0x1F))) & 1];
          v73 = v71 ^ *v72;
          v30 = *v25 ^ v71;
          *v72 ^= (0x1FFu >> (31 - v24)) & v73;
          v31 = 1023;
          goto LABEL_30;
        }
      }
      if ( v44 >= v45 )
      {
        pWriteBuf->m_bOverflow = 1;
        if ( v45 - v44 <= 3 )
        {
LABEL_50:
          pWriteBuf->m_iCurBit = v45;
          pWriteBuf->m_bOverflow = 1;
          goto LABEL_31;
        }
      }
      else
      {
        pWriteBuf->m_pData[v44 >> 5] |= 1 << v44;
        v44 = pWriteBuf->m_iCurBit + 1;
        v45 = pWriteBuf->m_nDataBits;
        pWriteBuf->m_iCurBit = v44;
        if ( v45 - v44 <= 3 )
          goto LABEL_50;
      }
      pWriteBuf->m_iCurBit = v44 + 4;
      v24 = v44 & 0x1F;
      v25 = &pWriteBuf->m_pData[v44 >> 5];
      v51 = __ROL4__(m_nValue, v44 & 0x1F);
      v27 = *v25;
      v52 = &v25[(7u >> (31 - (v44 & 0x1F))) & 1];
      v53 = v51 ^ *v52;
      v30 = *v25 ^ v51;
      *v52 ^= (7u >> (31 - v24)) & v53;
      v31 = 15;
LABEL_30:
      *v25 = v27 ^ (v31 << v24) & v30;
LABEL_31:
      v11 = (v11 + 2);
    }
  }
}


// FieldOp_Write_PopOnePlusOne  (line 606, @0x0000000003116e20, libserver.so)  // inlines: GetPathData, IsUsingFixedPaths, LeafCodeInfo_t, Path_PopLast, Pop, Set, operator[]
// calls: LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...)
// strings: "../public/tier2/fieldpath.h", "Path_PopLast", "Path_PopLast failed for read only CFieldPath"
void __fastcall FieldOp_Write_PopOnePlusOne(CFieldPath *const from, const CFieldPath *const to, bf_write *pWriteBuf)
{
  __int64 v3; // rbx
  __int64 v4; // rbp
  int16 v5; // ax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // r8
  __int64 v11; // r9
  LeafCodeInfo_t v12; // [rsp-38h] [rbp-38h] BYREF
  __int64 v13; // [rsp-10h] [rbp-10h]
  __int64 v14; // [rsp-8h] [rbp-8h]

  if ( from->m_bUsingExternalPaths )
  {
    v14 = v4;
    v13 = v3;
    if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
      goto LABEL_7;
    while ( 1 )
    {
      if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v8, v9, v6, v7) != 0 )
        loc_0 = -559038737;
      Plat_ExitProcess(1);
LABEL_7:
      v12.m_szFile = "../public/tier2/fieldpath.h";
      v12.m_szFunction = "Path_PopLast";
      v12.m_nLine = 477;
      LoggingSystem_Log(
        LOG_GENERAL,
        LoggingSeverity_t::LS_ERROR,
        &v12,
        "Path_PopLast failed for read only CFieldPath",
        v10,
        v11);
    }
  }
  v5 = from->m_nCount - 1;
  from->m_nCount = v5;
  ++from->u.m_FixedPaths[v5 - 1].m_nValue;
}


// FieldOp_Write_PopOnePlusN  (line 614, @0x000000000311d740, libserver.so)  // inlines: CFieldPath_WriteUBitVar, GetNumBitsLeft, GetPathData, IsUsingFixedPaths, LeafCodeInfo_t, LoadLittleDWord, Path_PopLast, Pop, Set, SetOverflowFlag, WriteOneBit, WriteOneBitNoCheck, WriteUBitLong, operator[]
// calls: LoggingSystem_IsChannelEnabled, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...), Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess
// strings: "../public/tier2/fieldpath.h", "Path_PopLast", "Path_PopLast failed for read only CFieldPath", "GetPathData", "GetPathData failed for read only CFieldPath"
void __fastcall FieldOp_Write_PopOnePlusN(CFieldPath *const from, const CFieldPath *const to, bf_write *pWriteBuf)
{
  int16 v3; // ax
  __int64 v4; // rax
  const CFieldPath::Path_t *v5; // rcx
  CFieldPath *v6; // r8
  int v7; // eax
  int v8; // r10d
  unsigned __int64 v9; // r9
  int m_iCurBit; // esi
  int m_nDataBits; // ecx
  char v12; // r11
  int v13; // r10d
  uint32 *v14; // r9
  uint32 v15; // ebx
  uint32 *v16; // rcx
  int v17; // edx
  int v18; // r10d
  int v19; // edx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdi
  __int64 v23; // rsi
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // r8
  __int64 v27; // r9
  int v28; // ecx
  int v29; // esi
  int v30; // r10d
  uint32 *v31; // rcx
  int v32; // edx
  int v33; // r10d
  uint32 *v34; // rcx
  int v35; // edx
  int v36; // r10d
  uint32 *v37; // rcx
  int v38; // edx
  int v39; // r10d
  uint32 *v40; // rcx
  int v41; // edx
  LeafCodeInfo_t v42; // [rsp+0h] [rbp-30h] BYREF

  if ( from->m_bUsingExternalPaths )
  {
    if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
    {
      v42.m_szFile = "../public/tier2/fieldpath.h";
      v42.m_szFunction = "Path_PopLast";
      v42.m_nLine = 477;
      LoggingSystem_Log(
        LOG_GENERAL,
        LoggingSeverity_t::LS_ERROR,
        &v42,
        "Path_PopLast failed for read only CFieldPath",
        v24,
        v25);
    }
    goto LABEL_17;
  }
  v3 = from->m_nCount - 1;
  from->m_nCount = v3;
  v4 = v3 - 1;
  if ( to->m_bUsingExternalPaths )
    v5 = &to->u.m_pPaths[v4];
  else
    v5 = (to + 2 * v4);
  v6 = (from + 2 * v4);
  v7 = v5->m_nValue - v6->u.m_FixedPaths[0].m_nValue;
  v8 = v7 - 1;
  v9 = v7 - 1;
  if ( v9 > 3 )
    goto LABEL_20;
  m_iCurBit = pWriteBuf->m_iCurBit;
  m_nDataBits = pWriteBuf->m_nDataBits;
  if ( m_iCurBit >= m_nDataBits )
  {
    pWriteBuf->m_bOverflow = 1;
  }
  else
  {
    pWriteBuf->m_pData[m_iCurBit >> 5] |= 1 << m_iCurBit;
    m_nDataBits = pWriteBuf->m_nDataBits;
    m_iCurBit = pWriteBuf->m_iCurBit + 1;
    pWriteBuf->m_iCurBit = m_iCurBit;
  }
  if ( m_nDataBits - m_iCurBit > 1 )
  {
    pWriteBuf->m_iCurBit = m_iCurBit + 2;
    v12 = m_iCurBit & 0x1F;
    v13 = __ROL4__(v8, m_iCurBit & 0x1F);
    v14 = &pWriteBuf->m_pData[m_iCurBit >> 5];
    v15 = *v14;
    v16 = &v14[1u >> (31 - (m_iCurBit & 0x1F))];
    v17 = v13 ^ *v16;
    v18 = *v14 ^ v13;
    *v16 ^= (1u >> (31 - (m_iCurBit & 0x1F))) & v17;
    v19 = 3;
LABEL_9:
    *v14 = v15 ^ (v19 << v12) & v18;
    goto LABEL_10;
  }
  pWriteBuf->m_iCurBit = m_nDataBits;
  pWriteBuf->m_bOverflow = 1;
LABEL_10:
  while ( from->m_bUsingExternalPaths )
  {
    if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
    {
      v42.m_szFile = "../public/tier2/fieldpath.h";
      v42.m_szFunction = "GetPathData";
      v42.m_nLine = 514;
      LoggingSystem_Log(
        LOG_GENERAL,
        LoggingSeverity_t::LS_ERROR,
        &v42,
        "GetPathData failed for read only CFieldPath",
        v26,
        v27);
    }
LABEL_17:
    if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v22, v23, v20, v21) != 0 )
      loc_0 = -559038737;
    LOWORD(v7) = Plat_ExitProcess(1);
LABEL_20:
    v28 = pWriteBuf->m_iCurBit;
    v29 = pWriteBuf->m_nDataBits;
    if ( v28 >= v29 )
    {
      pWriteBuf->m_bOverflow = 1;
      if ( v9 <= 0xF )
      {
LABEL_22:
        if ( v29 <= v28 )
        {
          pWriteBuf->m_bOverflow = 1;
        }
        else
        {
          pWriteBuf->m_pData[v28 >> 5] |= 1 << v28;
          v29 = pWriteBuf->m_nDataBits;
          v28 = pWriteBuf->m_iCurBit + 1;
          pWriteBuf->m_iCurBit = v28;
        }
        if ( v29 - v28 > 3 )
        {
          pWriteBuf->m_iCurBit = v28 + 4;
          v12 = v28 & 0x1F;
          v14 = &pWriteBuf->m_pData[v28 >> 5];
          v39 = __ROL4__(v8, v28 & 0x1F);
          v15 = *v14;
          v40 = &v14[(7u >> (31 - (v28 & 0x1F))) & 1];
          v41 = v39 ^ *v40;
          v18 = *v14 ^ v39;
          *v40 ^= (7u >> (31 - v12)) & v41;
          v19 = 15;
          goto LABEL_9;
        }
        goto LABEL_25;
      }
LABEL_35:
      pWriteBuf->m_bOverflow = 1;
      if ( v9 > 0x3FF )
        goto LABEL_36;
      goto LABEL_28;
    }
    pWriteBuf->m_pData[v28 >> 5] &= ~(1 << v28);
    v28 = pWriteBuf->m_iCurBit + 1;
    v29 = pWriteBuf->m_nDataBits;
    pWriteBuf->m_iCurBit = v28;
    if ( v9 <= 0xF )
      goto LABEL_22;
    if ( v28 >= v29 )
      goto LABEL_35;
    pWriteBuf->m_pData[v28 >> 5] &= ~(1 << v28);
    v28 = pWriteBuf->m_iCurBit + 1;
    v29 = pWriteBuf->m_nDataBits;
    pWriteBuf->m_iCurBit = v28;
    if ( v9 > 0x3FF )
    {
      if ( v29 <= v28 )
      {
LABEL_36:
        pWriteBuf->m_bOverflow = 1;
        if ( v9 <= 0x1FFFF )
          goto LABEL_43;
      }
      else
      {
        pWriteBuf->m_pData[v28 >> 5] &= ~(1 << v28);
        v28 = pWriteBuf->m_iCurBit + 1;
        v29 = pWriteBuf->m_nDataBits;
        pWriteBuf->m_iCurBit = v28;
        if ( v9 <= 0x1FFFF )
        {
LABEL_43:
          if ( v28 >= v29 )
          {
            pWriteBuf->m_bOverflow = 1;
          }
          else
          {
            pWriteBuf->m_pData[v28 >> 5] |= 1 << v28;
            v29 = pWriteBuf->m_nDataBits;
            v28 = pWriteBuf->m_iCurBit + 1;
            pWriteBuf->m_iCurBit = v28;
          }
          if ( v29 - v28 > 16 )
          {
            pWriteBuf->m_iCurBit = v28 + 17;
            v12 = v28 & 0x1F;
            v14 = &pWriteBuf->m_pData[v28 >> 5];
            v36 = __ROL4__(v8, v28 & 0x1F);
            v15 = *v14;
            v37 = &v14[(0xFFFFu >> (31 - (v28 & 0x1F))) & 1];
            v38 = v36 ^ *v37;
            v18 = *v14 ^ v36;
            *v37 ^= (0xFFFFu >> (31 - v12)) & v38;
            v19 = 0x1FFFF;
            goto LABEL_9;
          }
          goto LABEL_25;
        }
        if ( v29 > v28 )
        {
          pWriteBuf->m_pData[v28 >> 5] &= ~(1 << v28);
          v29 = pWriteBuf->m_nDataBits;
          v28 = pWriteBuf->m_iCurBit + 1;
          pWriteBuf->m_iCurBit = v28;
LABEL_38:
          if ( v29 - v28 > 30 )
          {
            pWriteBuf->m_iCurBit = v28 + 31;
            v12 = v28 & 0x1F;
            v14 = &pWriteBuf->m_pData[v28 >> 5];
            v33 = __ROL4__(v8, v28 & 0x1F);
            v15 = *v14;
            v34 = &v14[(0x3FFFFFFFu >> (31 - (v28 & 0x1F))) & 1];
            v35 = v33 ^ *v34;
            v18 = *v14 ^ v33;
            *v34 ^= (0x3FFFFFFFu >> (31 - v12)) & v35;
            v19 = 0x7FFFFFFF;
            goto LABEL_9;
          }
          goto LABEL_25;
        }
      }
      pWriteBuf->m_bOverflow = 1;
      goto LABEL_38;
    }
LABEL_28:
    if ( v29 <= v28 )
    {
      pWriteBuf->m_bOverflow = 1;
    }
    else
    {
      pWriteBuf->m_pData[v28 >> 5] |= 1 << v28;
      v29 = pWriteBuf->m_nDataBits;
      v28 = pWriteBuf->m_iCurBit + 1;
      pWriteBuf->m_iCurBit = v28;
    }
    if ( v29 - v28 > 9 )
    {
      pWriteBuf->m_iCurBit = v28 + 10;
      v12 = v28 & 0x1F;
      v14 = &pWriteBuf->m_pData[v28 >> 5];
      v30 = __ROL4__(v8, v28 & 0x1F);
      v15 = *v14;
      v31 = &v14[(0x1FFu >> (31 - (v28 & 0x1F))) & 1];
      v32 = v30 ^ *v31;
      v18 = *v14 ^ v30;
      *v31 ^= (0x1FFu >> (31 - v12)) & v32;
      v19 = 1023;
      goto LABEL_9;
    }
LABEL_25:
    pWriteBuf->m_iCurBit = v29;
    pWriteBuf->m_bOverflow = 1;
  }
  v6->u.m_FixedPaths[0].m_nValue += v7;
}


// FieldOp_Write_PopAllButOnePlusOne  (line 626, @0x0000000003116ec0, libserver.so)  // inlines: GetPathData, IsUsingFixedPaths, LeafCodeInfo_t, Path_PopLast, Pop, Set, operator[]
// calls: LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...)
// strings: "../public/tier2/fieldpath.h", "GetPathData", "GetPathData failed for read only CFieldPath", "Path_PopLast", "Path_PopLast failed for read only CFieldPath"
void __fastcall FieldOp_Write_PopAllButOnePlusOne(
        CFieldPath *const from,
        const CFieldPath *const to,
        bf_write *pWriteBuf)
{
  int m_nCount; // edx
  __int16 v4; // ax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // r8
  __int64 v10; // r9
  bool m_bUsingExternalPaths; // cl
  __int64 v12; // rdx
  const CFieldPath::Path_t *v13; // rax
  int16 m_nValue; // ax
  __int64 v15; // r8
  __int64 v16; // r9
  LeafCodeInfo_t v17; // [rsp+0h] [rbp-30h] BYREF

  m_nCount = from->m_nCount;
  if ( from->m_nCount <= 1 )
  {
    m_bUsingExternalPaths = from->m_bUsingExternalPaths;
    goto LABEL_11;
  }
  v4 = m_nCount - 1;
  if ( !from->m_bUsingExternalPaths )
    goto LABEL_9;
  if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
  {
    v17.m_szFile = "../public/tier2/fieldpath.h";
    v17.m_szFunction = "Path_PopLast";
    v17.m_nLine = 477;
    LoggingSystem_Log(
      LOG_GENERAL,
      LoggingSeverity_t::LS_ERROR,
      &v17,
      "Path_PopLast failed for read only CFieldPath",
      v9,
      v10);
  }
  while ( 1 )
  {
    if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v7, v8, v5, v6) != 0 )
      loc_0 = -559038737;
    v4 = Plat_ExitProcess(1);
    do
    {
      --v4;
LABEL_9:
      m_nCount = v4;
    }
    while ( v4 != 1 );
    m_bUsingExternalPaths = 0;
    from->m_nCount = 1;
LABEL_11:
    v12 = m_nCount - 1;
    v13 = (to + 2 * v12);
    if ( to->m_bUsingExternalPaths )
      v13 = &to->u.m_pPaths[v12];
    m_nValue = v13->m_nValue;
    if ( !m_bUsingExternalPaths )
      break;
    if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
    {
      v17.m_szFile = "../public/tier2/fieldpath.h";
      v17.m_szFunction = "GetPathData";
      v17.m_nLine = 514;
      LoggingSystem_Log(
        LOG_GENERAL,
        LoggingSeverity_t::LS_ERROR,
        &v17,
        "GetPathData failed for read only CFieldPath",
        v15,
        v16);
    }
  }
  from->u.m_FixedPaths[v12].m_nValue = m_nValue;
}


// FieldOp_Write_PopAllButOnePlusN  (line 638, @0x0000000003121e50, libserver.so)  // inlines: CFieldPath_WriteUBitVar, GetNumBitsLeft, GetPathData, IsUsingFixedPaths, LeafCodeInfo_t, LoadLittleDWord, Path_PopLast, Pop, Set, SetOverflowFlag, WriteOneBit, WriteOneBitNoCheck, WriteUBitLong, operator[]
// calls: LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...), bf_write::WriteOneBit
// strings: "../public/tier2/fieldpath.h", "GetPathData", "GetPathData failed for read only CFieldPath", "Path_PopLast", "Path_PopLast failed for read only CFieldPath"
void __fastcall FieldOp_Write_PopAllButOnePlusN(
        CFieldPath *const from,
        const CFieldPath *const to,
        bf_write *pWriteBuf)
{
  CFieldPath *v3; // rbx
  int m_nCount; // ecx
  __int16 v5; // ax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 v9; // rsi
  bool m_bUsingExternalPaths; // di
  int v11; // ecx
  __int64 v12; // r12
  const CFieldPath::Path_t *v13; // rax
  int m_nValue; // r13d
  const CFieldPath::Path_t *v15; // rax
  int v16; // r13d
  int v17; // r14d
  int m_iCurBit; // eax
  int m_nDataBits; // ecx
  char v20; // di
  int v21; // r14d
  uint32 *v22; // rsi
  uint32 v23; // r8d
  uint32 *v24; // rcx
  int v25; // eax
  int v26; // r14d
  int v27; // eax
  int v28; // ecx
  int v29; // eax
  int v30; // r14d
  uint32 *v31; // rcx
  int v32; // eax
  int v33; // eax
  int v34; // r14d
  uint32 *v35; // rcx
  int v36; // eax
  int v37; // eax
  int v38; // r14d
  uint32 *v39; // rcx
  int v40; // eax
  int v41; // r14d
  uint32 *v42; // rcx
  int v43; // eax
  bf_write *pWriteBufa; // [rsp+8h] [rbp-48h]
  bf_write *pWriteBufb; // [rsp+8h] [rbp-48h]
  LeafCodeInfo_t v46; // [rsp+10h] [rbp-40h] BYREF

  v3 = from;
  m_nCount = from->m_nCount;
  if ( from->m_nCount <= 1 )
  {
    m_bUsingExternalPaths = from->m_bUsingExternalPaths;
    goto LABEL_11;
  }
  v5 = m_nCount - 1;
  if ( !from->m_bUsingExternalPaths )
    goto LABEL_9;
  v3 = &LOG_GENERAL;
  if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
  {
    v46.m_szFile = "../public/tier2/fieldpath.h";
    v46.m_szFunction = "Path_PopLast";
    v46.m_nLine = 477;
    LoggingSystem_Log(LOG_GENERAL, LoggingSeverity_t::LS_ERROR, &v46, "Path_PopLast failed for read only CFieldPath");
  }
  while ( 1 )
  {
    if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v8, v9, v6, v7) != 0 )
      loc_0 = -559038737;
    v5 = Plat_ExitProcess(1);
    do
    {
      --v5;
LABEL_9:
      m_nCount = v5;
    }
    while ( v5 != 1 );
    m_bUsingExternalPaths = 0;
    v3->m_nCount = 1;
LABEL_11:
    v11 = m_nCount - 1;
    v12 = v11;
    v13 = (to + 2 * v11);
    if ( to->m_bUsingExternalPaths )
      v13 = &to->u.m_pPaths[v11];
    m_nValue = v13->m_nValue;
    v15 = (v3 + 2 * v11);
    if ( m_bUsingExternalPaths )
      v15 = &v3->u.m_pPaths[v11];
    v16 = m_nValue - v15->m_nValue;
    v17 = v16 - 1;
    if ( (v16 - 1) <= 3 )
    {
      m_iCurBit = pWriteBuf->m_iCurBit;
      m_nDataBits = pWriteBuf->m_nDataBits;
      if ( m_iCurBit >= m_nDataBits )
      {
        pWriteBuf->m_bOverflow = 1;
      }
      else
      {
        pWriteBuf->m_pData[m_iCurBit >> 5] |= 1 << m_iCurBit;
        m_nDataBits = pWriteBuf->m_nDataBits;
        m_iCurBit = pWriteBuf->m_iCurBit + 1;
        pWriteBuf->m_iCurBit = m_iCurBit;
      }
      if ( m_nDataBits - m_iCurBit > 1 )
      {
        pWriteBuf->m_iCurBit = m_iCurBit + 2;
        v20 = m_iCurBit & 0x1F;
        v21 = __ROL4__(v17, m_iCurBit & 0x1F);
        v22 = &pWriteBuf->m_pData[m_iCurBit >> 5];
        v23 = *v22;
        v24 = &v22[1u >> (31 - (m_iCurBit & 0x1F))];
        v25 = v21 ^ *v24;
        v26 = *v22 ^ v21;
        *v24 ^= (1u >> (31 - v20)) & v25;
        v27 = 3;
LABEL_20:
        *v22 = v23 ^ (v27 << v20) & v26;
        goto LABEL_21;
      }
      goto LABEL_41;
    }
    v28 = pWriteBuf->m_iCurBit;
    v29 = pWriteBuf->m_nDataBits;
    if ( v28 >= v29 )
    {
      pWriteBuf->m_bOverflow = 1;
      if ( v17 <= 0xF )
      {
LABEL_27:
        if ( v29 <= v28 )
        {
          pWriteBuf->m_bOverflow = 1;
        }
        else
        {
          pWriteBuf->m_pData[v28 >> 5] |= 1 << v28;
          v28 = pWriteBuf->m_iCurBit + 1;
          v29 = pWriteBuf->m_nDataBits;
          pWriteBuf->m_iCurBit = v28;
        }
        if ( v29 - v28 > 3 )
        {
          pWriteBuf->m_iCurBit = v28 + 4;
          v20 = v28 & 0x1F;
          v22 = &pWriteBuf->m_pData[v28 >> 5];
          v34 = __ROL4__(v17, v28 & 0x1F);
          v23 = *v22;
          v35 = &v22[(7u >> (31 - (v28 & 0x1F))) & 1];
          v36 = v34 ^ *v35;
          v26 = *v22 ^ v34;
          *v35 ^= (7u >> (31 - v20)) & v36;
          v27 = 15;
          goto LABEL_20;
        }
      }
      else
      {
LABEL_44:
        pWriteBuf->m_bOverflow = 1;
        if ( v17 > 0x3FF )
          goto LABEL_45;
LABEL_33:
        if ( v28 >= v29 )
        {
          pWriteBuf->m_bOverflow = 1;
        }
        else
        {
          pWriteBuf->m_pData[v28 >> 5] |= 1 << v28;
          v28 = pWriteBuf->m_iCurBit + 1;
          v29 = pWriteBuf->m_nDataBits;
          pWriteBuf->m_iCurBit = v28;
        }
        if ( v29 - v28 > 9 )
        {
          pWriteBuf->m_iCurBit = v28 + 10;
          v20 = v28 & 0x1F;
          v22 = &pWriteBuf->m_pData[v28 >> 5];
          v30 = __ROL4__(v17, v28 & 0x1F);
          v23 = *v22;
          v31 = &v22[(0x1FFu >> (31 - (v28 & 0x1F))) & 1];
          v32 = v30 ^ *v31;
          v26 = *v22 ^ v30;
          *v31 ^= (0x1FFu >> (31 - v20)) & v32;
          v27 = 1023;
          goto LABEL_20;
        }
      }
      pWriteBuf->m_iCurBit = v29;
      pWriteBuf->m_bOverflow = 1;
      goto LABEL_21;
    }
    pWriteBuf->m_pData[v28 >> 5] &= ~(1 << v28);
    v28 = pWriteBuf->m_iCurBit + 1;
    v29 = pWriteBuf->m_nDataBits;
    pWriteBuf->m_iCurBit = v28;
    if ( v17 <= 0xF )
      goto LABEL_27;
    if ( v28 >= v29 )
      goto LABEL_44;
    pWriteBuf->m_pData[v28 >> 5] &= ~(1 << v28);
    v28 = pWriteBuf->m_iCurBit + 1;
    v29 = pWriteBuf->m_nDataBits;
    pWriteBuf->m_iCurBit = v28;
    if ( v17 <= 0x3FF )
      goto LABEL_33;
    if ( v29 > v28 )
    {
      pWriteBuf->m_pData[v28 >> 5] &= ~(1 << v28);
      ++pWriteBuf->m_iCurBit;
      goto LABEL_39;
    }
LABEL_45:
    pWriteBuf->m_bOverflow = 1;
LABEL_39:
    if ( v17 > 0x1FFFF )
    {
      pWriteBufb = pWriteBuf;
      bf_write::WriteOneBit(pWriteBuf, 0);
      pWriteBuf = pWriteBufb;
      m_nDataBits = pWriteBufb->m_nDataBits;
      v37 = pWriteBufb->m_iCurBit;
      if ( m_nDataBits - v37 > 30 )
      {
        pWriteBufb->m_iCurBit = v37 + 31;
        v20 = v37 & 0x1F;
        v22 = &pWriteBufb->m_pData[v37 >> 5];
        v38 = __ROL4__(v17, v37 & 0x1F);
        v23 = *v22;
        v39 = &v22[(0x3FFFFFFFu >> (31 - (v37 & 0x1F))) & 1];
        v40 = v38 ^ *v39;
        v26 = *v22 ^ v38;
        *v39 ^= (0x3FFFFFFFu >> (31 - v20)) & v40;
        v27 = 0x7FFFFFFF;
        goto LABEL_20;
      }
    }
    else
    {
      pWriteBufa = pWriteBuf;
      bf_write::WriteOneBit(pWriteBuf, 1);
      pWriteBuf = pWriteBufa;
      m_nDataBits = pWriteBufa->m_nDataBits;
      v33 = pWriteBufa->m_iCurBit;
      if ( m_nDataBits - v33 > 16 )
      {
        pWriteBufa->m_iCurBit = v33 + 17;
        v20 = v33 & 0x1F;
        v22 = &pWriteBufa->m_pData[v33 >> 5];
        v41 = __ROL4__(v17, v33 & 0x1F);
        v23 = *v22;
        v42 = &v22[(0xFFFFu >> (31 - (v33 & 0x1F))) & 1];
        v43 = v41 ^ *v42;
        v26 = *v22 ^ v41;
        *v42 ^= (0xFFFFu >> (31 - v20)) & v43;
        v27 = 0x1FFFF;
        goto LABEL_20;
      }
    }
LABEL_41:
    pWriteBuf->m_iCurBit = m_nDataBits;
    pWriteBuf->m_bOverflow = 1;
LABEL_21:
    if ( !v3->m_bUsingExternalPaths )
      break;
    v3 = &LOG_GENERAL;
    if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
    {
      v46.m_szFile = "../public/tier2/fieldpath.h";
      v46.m_szFunction = "GetPathData";
      v46.m_nLine = 514;
      LoggingSystem_Log(LOG_GENERAL, LoggingSeverity_t::LS_ERROR, &v46, "GetPathData failed for read only CFieldPath");
    }
  }
  v3->u.m_FixedPaths[v12].m_nValue += v16;
}


// FieldOp_Write_PopAllButOnePlusNPack3Bits  (line 651, @0x00000000031196e0, libserver.so)  // inlines: GetNumBitsLeft, GetPathData, IsUsingFixedPaths, LeafCodeInfo_t, LoadLittleDWord, Path_PopLast, Pop, Set, SetOverflowFlag, WriteUBitLong, operator[]
// calls: LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...)
// strings: "../public/tier2/fieldpath.h", "GetPathData", "GetPathData failed for read only CFieldPath", "Path_PopLast", "Path_PopLast failed for read only CFieldPath"
void __fastcall FieldOp_Write_PopAllButOnePlusNPack3Bits(
        CFieldPath *const from,
        const CFieldPath *const to,
        bf_write *pWriteBuf)
{
  int m_nCount; // ecx
  __int16 v4; // ax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // r8
  __int64 v10; // r9
  bool m_bUsingExternalPaths; // r8
  __int64 v12; // rax
  const CFieldPath::Path_t *v13; // rcx
  int m_nValue; // esi
  const CFieldPath::Path_t *v15; // rcx
  int v16; // r9d
  int m_iCurBit; // esi
  __int64 v18; // r8
  __int64 v19; // r9
  uint32 *v20; // r10
  uint32 v21; // ebx
  int v22; // edx
  uint32 *v23; // rcx
  LeafCodeInfo_t v24; // [rsp+0h] [rbp-30h] BYREF

  m_nCount = from->m_nCount;
  if ( from->m_nCount <= 1 )
  {
    m_bUsingExternalPaths = from->m_bUsingExternalPaths;
    goto LABEL_11;
  }
  v4 = m_nCount - 1;
  if ( !from->m_bUsingExternalPaths )
    goto LABEL_9;
  if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
  {
    v24.m_szFile = "../public/tier2/fieldpath.h";
    v24.m_szFunction = "Path_PopLast";
    v24.m_nLine = 477;
    LoggingSystem_Log(
      LOG_GENERAL,
      LoggingSeverity_t::LS_ERROR,
      &v24,
      "Path_PopLast failed for read only CFieldPath",
      v9,
      v10);
  }
  while ( 1 )
  {
    if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v7, v8, v5, v6) != 0 )
      loc_0 = -559038737;
    v4 = Plat_ExitProcess(1);
    do
    {
      --v4;
LABEL_9:
      m_nCount = v4;
    }
    while ( v4 != 1 );
    from->m_nCount = 1;
    m_bUsingExternalPaths = 0;
LABEL_11:
    v12 = m_nCount - 1;
    v13 = (to + 2 * v12);
    if ( to->m_bUsingExternalPaths )
      v13 = &to->u.m_pPaths[v12];
    m_nValue = v13->m_nValue;
    v15 = (from + 2 * v12);
    if ( m_bUsingExternalPaths )
      v15 = &from->u.m_pPaths[v12];
    v16 = m_nValue - v15->m_nValue;
    m_iCurBit = pWriteBuf->m_iCurBit;
    if ( pWriteBuf->m_nDataBits - m_iCurBit > 2 )
    {
      pWriteBuf->m_iCurBit = m_iCurBit + 3;
      v20 = &pWriteBuf->m_pData[m_iCurBit >> 5];
      v21 = *v20;
      v22 = __ROL4__(v16 - 1, m_iCurBit & 0x1F);
      v23 = &v20[(3u >> (31 - (m_iCurBit & 0x1F))) & 1];
      *v23 ^= (3u >> (31 - (m_iCurBit & 0x1F))) & (v22 ^ *v23);
      *v20 = v21 ^ (7 << (m_iCurBit & 0x1F)) & (v21 ^ v22);
    }
    else
    {
      pWriteBuf->m_iCurBit = pWriteBuf->m_nDataBits;
      pWriteBuf->m_bOverflow = 1;
    }
    if ( !from->m_bUsingExternalPaths )
      break;
    if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
    {
      v24.m_szFile = "../public/tier2/fieldpath.h";
      v24.m_szFunction = "GetPathData";
      v24.m_nLine = 514;
      LoggingSystem_Log(
        LOG_GENERAL,
        LoggingSeverity_t::LS_ERROR,
        &v24,
        "GetPathData failed for read only CFieldPath",
        v18,
        v19);
    }
  }
  from->u.m_FixedPaths[v12].m_nValue += v16;
}


// FieldOp_Write_PopAllButOnePlusNPack6Bits  (line 664, @0x00000000031198e0, libserver.so)  // inlines: GetNumBitsLeft, GetPathData, IsUsingFixedPaths, LeafCodeInfo_t, LoadLittleDWord, Path_PopLast, Pop, Set, SetOverflowFlag, WriteUBitLong, operator[]
// calls: LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...)
// strings: "../public/tier2/fieldpath.h", "GetPathData", "GetPathData failed for read only CFieldPath", "Path_PopLast", "Path_PopLast failed for read only CFieldPath"
void __fastcall FieldOp_Write_PopAllButOnePlusNPack6Bits(
        CFieldPath *const from,
        const CFieldPath *const to,
        bf_write *pWriteBuf)
{
  int m_nCount; // ecx
  __int16 v4; // ax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // r8
  __int64 v10; // r9
  bool m_bUsingExternalPaths; // r8
  __int64 v12; // rax
  const CFieldPath::Path_t *v13; // rcx
  int m_nValue; // esi
  const CFieldPath::Path_t *v15; // rcx
  int v16; // r9d
  int m_iCurBit; // esi
  __int64 v18; // r8
  __int64 v19; // r9
  uint32 *v20; // r8
  uint32 v21; // r11d
  int v22; // edx
  uint32 *v23; // rcx
  LeafCodeInfo_t v24; // [rsp+0h] [rbp-30h] BYREF

  m_nCount = from->m_nCount;
  if ( from->m_nCount <= 1 )
  {
    m_bUsingExternalPaths = from->m_bUsingExternalPaths;
    goto LABEL_11;
  }
  v4 = m_nCount - 1;
  if ( !from->m_bUsingExternalPaths )
    goto LABEL_9;
  if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
  {
    v24.m_szFile = "../public/tier2/fieldpath.h";
    v24.m_szFunction = "Path_PopLast";
    v24.m_nLine = 477;
    LoggingSystem_Log(
      LOG_GENERAL,
      LoggingSeverity_t::LS_ERROR,
      &v24,
      "Path_PopLast failed for read only CFieldPath",
      v9,
      v10);
  }
  while ( 1 )
  {
    if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v7, v8, v5, v6) != 0 )
      loc_0 = -559038737;
    v4 = Plat_ExitProcess(1);
    do
    {
      --v4;
LABEL_9:
      m_nCount = v4;
    }
    while ( v4 != 1 );
    m_bUsingExternalPaths = 0;
    from->m_nCount = 1;
LABEL_11:
    v12 = m_nCount - 1;
    v13 = (to + 2 * v12);
    if ( to->m_bUsingExternalPaths )
      v13 = &to->u.m_pPaths[v12];
    m_nValue = v13->m_nValue;
    v15 = (from + 2 * v12);
    if ( m_bUsingExternalPaths )
      v15 = &from->u.m_pPaths[v12];
    v16 = m_nValue - v15->m_nValue;
    m_iCurBit = pWriteBuf->m_iCurBit;
    if ( pWriteBuf->m_nDataBits - m_iCurBit > 5 )
    {
      pWriteBuf->m_iCurBit = m_iCurBit + 6;
      v20 = &pWriteBuf->m_pData[m_iCurBit >> 5];
      v21 = *v20;
      v22 = __ROL4__(v16 - 1, m_iCurBit & 0x1F);
      v23 = &v20[(0x1Fu >> (31 - (m_iCurBit & 0x1F))) & 1];
      *v23 ^= (0x1Fu >> (31 - (m_iCurBit & 0x1F))) & (v22 ^ *v23);
      *v20 = v21 ^ (63 << (m_iCurBit & 0x1F)) & (v21 ^ v22);
    }
    else
    {
      pWriteBuf->m_iCurBit = pWriteBuf->m_nDataBits;
      pWriteBuf->m_bOverflow = 1;
    }
    if ( !from->m_bUsingExternalPaths )
      break;
    if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
    {
      v24.m_szFile = "../public/tier2/fieldpath.h";
      v24.m_szFunction = "GetPathData";
      v24.m_nLine = 514;
      LoggingSystem_Log(
        LOG_GENERAL,
        LoggingSeverity_t::LS_ERROR,
        &v24,
        "GetPathData failed for read only CFieldPath",
        v18,
        v19);
    }
  }
  from->u.m_FixedPaths[v12].m_nValue += v16;
}


// FieldOp_Write_PopNPlusOne  (line 677, @0x00000000031223b0, libserver.so)  // inlines: CFieldPath_WriteUBitVar, GetDepth, GetNumBitsLeft, GetPathData, IsUsingFixedPaths, LeafCodeInfo_t, LoadLittleDWord, Path_PopLast, Pop, Set, SetOverflowFlag, WriteOneBit, WriteOneBitNoCheck, WriteUBitLong, operator[]
// calls: LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...), bf_write::WriteOneBit
// strings: "../public/tier2/fieldpath.h", "GetPathData", "GetPathData failed for read only CFieldPath", "Path_PopLast", "Path_PopLast failed for read only CFieldPath"
void __fastcall FieldOp_Write_PopNPlusOne(CFieldPath *const from, const CFieldPath *const to, bf_write *pWriteBuf)
{
  int v5; // r13d
  int v6; // eax
  int v7; // ecx
  char v8; // di
  int v9; // r13d
  uint32 *v10; // rsi
  uint32 v11; // r8d
  uint32 *v12; // rcx
  int v13; // eax
  int v14; // r13d
  int v15; // eax
  int16 m_nCount; // ax
  bool m_bUsingExternalPaths; // cl
  __int64 v18; // rax
  const CFieldPath::Path_t *v19; // rdx
  int16 m_nValue; // dx
  int m_iCurBit; // ecx
  int m_nDataBits; // eax
  int v23; // r13d
  uint32 *v24; // rcx
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rdi
  __int64 v29; // rsi
  int v30; // eax
  int v31; // eax
  int v32; // r13d
  uint32 *v33; // rcx
  int v34; // eax
  int v35; // r13d
  uint32 *v36; // rcx
  int v37; // eax
  int v38; // r13d
  uint32 *v39; // rcx
  int v40; // eax
  bf_write *pWriteBufa; // [rsp+8h] [rbp-48h]
  bf_write *pWriteBufb; // [rsp+8h] [rbp-48h]
  LeafCodeInfo_t v43; // [rsp+10h] [rbp-40h] BYREF

  v5 = from->m_nCount - to->m_nCount;
  if ( v5 > 3 )
  {
    m_iCurBit = pWriteBuf->m_iCurBit;
    m_nDataBits = pWriteBuf->m_nDataBits;
    if ( m_iCurBit >= m_nDataBits )
    {
      pWriteBuf->m_bOverflow = 1;
      if ( v5 <= 0xF )
      {
LABEL_17:
        if ( m_nDataBits <= m_iCurBit )
        {
          pWriteBuf->m_bOverflow = 1;
        }
        else
        {
          pWriteBuf->m_pData[m_iCurBit >> 5] |= 1 << m_iCurBit;
          m_iCurBit = pWriteBuf->m_iCurBit + 1;
          m_nDataBits = pWriteBuf->m_nDataBits;
          pWriteBuf->m_iCurBit = m_iCurBit;
        }
        if ( m_nDataBits - m_iCurBit > 3 )
        {
          pWriteBuf->m_iCurBit = m_iCurBit + 4;
          v8 = m_iCurBit & 0x1F;
          v10 = &pWriteBuf->m_pData[m_iCurBit >> 5];
          v23 = __ROL4__(v5, m_iCurBit & 0x1F);
          v11 = *v10;
          v24 = &v10[(7u >> (31 - (m_iCurBit & 0x1F))) & 1];
          v25 = v23 ^ *v24;
          v14 = *v10 ^ v23;
          *v24 ^= (7u >> (31 - v8)) & v25;
          v15 = 15;
          goto LABEL_6;
        }
LABEL_26:
        pWriteBuf->m_iCurBit = m_nDataBits;
        pWriteBuf->m_bOverflow = 1;
        m_nCount = from->m_nCount;
        if ( m_nCount > to->m_nCount )
          goto LABEL_8;
LABEL_27:
        m_bUsingExternalPaths = from->m_bUsingExternalPaths;
        goto LABEL_11;
      }
    }
    else
    {
      pWriteBuf->m_pData[m_iCurBit >> 5] &= ~(1 << m_iCurBit);
      m_iCurBit = pWriteBuf->m_iCurBit + 1;
      m_nDataBits = pWriteBuf->m_nDataBits;
      pWriteBuf->m_iCurBit = m_iCurBit;
      if ( v5 <= 0xF )
        goto LABEL_17;
      if ( m_nDataBits > m_iCurBit )
      {
        pWriteBuf->m_pData[m_iCurBit >> 5] &= ~(1 << m_iCurBit);
        m_iCurBit = pWriteBuf->m_iCurBit + 1;
        m_nDataBits = pWriteBuf->m_nDataBits;
        pWriteBuf->m_iCurBit = m_iCurBit;
        if ( v5 <= 0x3FF )
          goto LABEL_23;
        if ( m_nDataBits > m_iCurBit )
        {
          pWriteBuf->m_pData[m_iCurBit >> 5] &= ~(1 << m_iCurBit);
          ++pWriteBuf->m_iCurBit;
          goto LABEL_37;
        }
LABEL_42:
        pWriteBuf->m_bOverflow = 1;
LABEL_37:
        if ( v5 > 0x1FFFF )
        {
          pWriteBufb = pWriteBuf;
          bf_write::WriteOneBit(pWriteBuf, 0);
          pWriteBuf = pWriteBufb;
          v7 = pWriteBufb->m_nDataBits;
          v31 = pWriteBufb->m_iCurBit;
          if ( v7 - v31 > 30 )
          {
            pWriteBufb->m_iCurBit = v31 + 31;
            v8 = v31 & 0x1F;
            v10 = &pWriteBufb->m_pData[v31 >> 5];
            v32 = __ROL4__(v5, v31 & 0x1F);
            v11 = *v10;
            v33 = &v10[(0x3FFFFFFFu >> (31 - (v31 & 0x1F))) & 1];
            v34 = v32 ^ *v33;
            v14 = *v10 ^ v32;
            *v33 ^= (0x3FFFFFFFu >> (31 - v8)) & v34;
            v15 = 0x7FFFFFFF;
            goto LABEL_6;
          }
        }
        else
        {
          pWriteBufa = pWriteBuf;
          bf_write::WriteOneBit(pWriteBuf, 1);
          pWriteBuf = pWriteBufa;
          v7 = pWriteBufa->m_nDataBits;
          v30 = pWriteBufa->m_iCurBit;
          if ( v7 - v30 > 16 )
          {
            pWriteBufa->m_iCurBit = v30 + 17;
            v8 = v30 & 0x1F;
            v10 = &pWriteBufa->m_pData[v30 >> 5];
            v35 = __ROL4__(v5, v30 & 0x1F);
            v11 = *v10;
            v36 = &v10[(0xFFFFu >> (31 - (v30 & 0x1F))) & 1];
            v37 = v35 ^ *v36;
            v14 = *v10 ^ v35;
            *v36 ^= (0xFFFFu >> (31 - v8)) & v37;
            v15 = 0x1FFFF;
            goto LABEL_6;
          }
        }
        goto LABEL_39;
      }
    }
    pWriteBuf->m_bOverflow = 1;
    if ( v5 <= 0x3FF )
    {
LABEL_23:
      if ( m_iCurBit >= m_nDataBits )
      {
        pWriteBuf->m_bOverflow = 1;
      }
      else
      {
        pWriteBuf->m_pData[m_iCurBit >> 5] |= 1 << m_iCurBit;
        m_iCurBit = pWriteBuf->m_iCurBit + 1;
        m_nDataBits = pWriteBuf->m_nDataBits;
        pWriteBuf->m_iCurBit = m_iCurBit;
      }
      if ( m_nDataBits - m_iCurBit > 9 )
      {
        pWriteBuf->m_iCurBit = m_iCurBit + 10;
        v8 = m_iCurBit & 0x1F;
        v10 = &pWriteBuf->m_pData[m_iCurBit >> 5];
        v38 = __ROL4__(v5, m_iCurBit & 0x1F);
        v11 = *v10;
        v39 = &v10[(0x1FFu >> (31 - (m_iCurBit & 0x1F))) & 1];
        v40 = v38 ^ *v39;
        v14 = *v10 ^ v38;
        *v39 ^= (0x1FFu >> (31 - v8)) & v40;
        v15 = 1023;
        goto LABEL_6;
      }
      goto LABEL_26;
    }
    goto LABEL_42;
  }
  v6 = pWriteBuf->m_iCurBit;
  v7 = pWriteBuf->m_nDataBits;
  if ( v6 >= v7 )
  {
    pWriteBuf->m_bOverflow = 1;
  }
  else
  {
    pWriteBuf->m_pData[v6 >> 5] |= 1 << v6;
    v7 = pWriteBuf->m_nDataBits;
    v6 = pWriteBuf->m_iCurBit + 1;
    pWriteBuf->m_iCurBit = v6;
  }
  if ( v7 - v6 > 1 )
  {
    pWriteBuf->m_iCurBit = v6 + 2;
    v8 = v6 & 0x1F;
    v9 = __ROL4__(v5, v6 & 0x1F);
    v10 = &pWriteBuf->m_pData[v6 >> 5];
    v11 = *v10;
    v12 = &v10[1u >> (31 - (v6 & 0x1F))];
    v13 = v9 ^ *v12;
    v14 = *v10 ^ v9;
    *v12 ^= (1u >> (31 - v8)) & v13;
    v15 = 3;
LABEL_6:
    *v10 = v11 ^ (v15 << v8) & v14;
    goto LABEL_7;
  }
LABEL_39:
  pWriteBuf->m_iCurBit = v7;
  pWriteBuf->m_bOverflow = 1;
LABEL_7:
  m_nCount = from->m_nCount;
  if ( m_nCount <= to->m_nCount )
    goto LABEL_27;
LABEL_8:
  if ( from->m_bUsingExternalPaths )
  {
    if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
    {
      v43.m_szFile = "../public/tier2/fieldpath.h";
      v43.m_szFunction = "Path_PopLast";
      v43.m_nLine = 477;
      LoggingSystem_Log(LOG_GENERAL, LoggingSeverity_t::LS_ERROR, &v43, "Path_PopLast failed for read only CFieldPath");
    }
    goto LABEL_30;
  }
  do
    from->m_nCount = --m_nCount;
  while ( to->m_nCount < m_nCount );
  m_bUsingExternalPaths = 0;
LABEL_11:
  v18 = m_nCount - 1;
  v19 = (to + 2 * v18);
  if ( to->m_bUsingExternalPaths )
    v19 = &to->u.m_pPaths[v18];
  m_nValue = v19->m_nValue;
  if ( m_bUsingExternalPaths )
  {
    while ( 1 )
    {
      if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
      {
        v43.m_szFile = "../public/tier2/fieldpath.h";
        v43.m_szFunction = "GetPathData";
        v43.m_nLine = 514;
        LoggingSystem_Log(LOG_GENERAL, LoggingSeverity_t::LS_ERROR, &v43, "GetPathData failed for read only CFieldPath");
      }
LABEL_30:
      if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v28, v29, v26, v27) != 0 )
        loc_0 = -559038737;
      Plat_ExitProcess(1);
    }
  }
  from->u.m_FixedPaths[v18].m_nValue = m_nValue;
}


// FieldOp_Write_PopNPlusN  (line 693, @0x0000000003122900, libserver.so)  // inlines: CFieldPath_WriteUBitVar, GetDepth, GetNumBitsLeft, GetPathData, IsUsingFixedPaths, LeafCodeInfo_t, LoadLittleDWord, Path_PopLast, Pop, Set, SetOverflowFlag, WriteOneBit, WriteOneBitNoCheck, WriteUBitLong, operator[]
// calls: bf_write::WriteSignedVarInt32, LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...), bf_write::WriteOneBit
// strings: "../public/tier2/fieldpath.h", "GetPathData", "GetPathData failed for read only CFieldPath", "Path_PopLast", "Path_PopLast failed for read only CFieldPath"
void __fastcall FieldOp_Write_PopNPlusN(CFieldPath *const from, const CFieldPath *const to, bf_write *pWriteBuf)
{
  int v5; // r13d
  int v6; // eax
  int v7; // ecx
  char v8; // r8
  uint32 *v9; // rdi
  int v10; // r13d
  uint32 v11; // r9d
  uint32 *v12; // rcx
  int v13; // eax
  int v14; // r13d
  int v15; // eax
  int16 m_nCount; // ax
  bool m_bUsingExternalPaths; // si
  __int64 v18; // rax
  const CFieldPath::Path_t *v19; // rcx
  int16 m_nValue; // cx
  CFieldPath *v21; // rax
  int v22; // edi
  int m_iCurBit; // ecx
  int m_nDataBits; // eax
  int v25; // r13d
  uint32 *v26; // rcx
  int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rdi
  __int64 v31; // rsi
  int v32; // eax
  int v33; // eax
  int v34; // r13d
  uint32 *v35; // rcx
  int v36; // eax
  int v37; // r13d
  uint32 *v38; // rcx
  int v39; // eax
  int v40; // r13d
  uint32 *v41; // rcx
  int v42; // eax
  bf_write *pWriteBufa; // [rsp+8h] [rbp-48h]
  bf_write *pWriteBufb; // [rsp+8h] [rbp-48h]
  LeafCodeInfo_t v45; // [rsp+10h] [rbp-40h] BYREF

  v5 = from->m_nCount - to->m_nCount;
  if ( v5 > 3 )
  {
    m_iCurBit = pWriteBuf->m_iCurBit;
    m_nDataBits = pWriteBuf->m_nDataBits;
    if ( m_iCurBit >= m_nDataBits )
    {
      pWriteBuf->m_bOverflow = 1;
      if ( v5 <= 0xF )
      {
LABEL_17:
        if ( m_iCurBit >= m_nDataBits )
        {
          pWriteBuf->m_bOverflow = 1;
        }
        else
        {
          pWriteBuf->m_pData[m_iCurBit >> 5] |= 1 << m_iCurBit;
          m_iCurBit = pWriteBuf->m_iCurBit + 1;
          m_nDataBits = pWriteBuf->m_nDataBits;
          pWriteBuf->m_iCurBit = m_iCurBit;
        }
        if ( m_nDataBits - m_iCurBit > 3 )
        {
          pWriteBuf->m_iCurBit = m_iCurBit + 4;
          v8 = m_iCurBit & 0x1F;
          v9 = &pWriteBuf->m_pData[m_iCurBit >> 5];
          v25 = __ROL4__(v5, m_iCurBit & 0x1F);
          v11 = *v9;
          v26 = &v9[(7u >> (31 - (m_iCurBit & 0x1F))) & 1];
          v27 = v25 ^ *v26;
          v14 = *v9 ^ v25;
          *v26 ^= (7u >> (31 - v8)) & v27;
          v15 = 15;
          goto LABEL_6;
        }
LABEL_26:
        pWriteBuf->m_iCurBit = m_nDataBits;
        pWriteBuf->m_bOverflow = 1;
        m_nCount = from->m_nCount;
        if ( m_nCount > to->m_nCount )
          goto LABEL_8;
LABEL_27:
        m_bUsingExternalPaths = from->m_bUsingExternalPaths;
        goto LABEL_11;
      }
    }
    else
    {
      pWriteBuf->m_pData[m_iCurBit >> 5] &= ~(1 << m_iCurBit);
      m_iCurBit = pWriteBuf->m_iCurBit + 1;
      m_nDataBits = pWriteBuf->m_nDataBits;
      pWriteBuf->m_iCurBit = m_iCurBit;
      if ( v5 <= 0xF )
        goto LABEL_17;
      if ( m_nDataBits > m_iCurBit )
      {
        pWriteBuf->m_pData[m_iCurBit >> 5] &= ~(1 << m_iCurBit);
        m_iCurBit = pWriteBuf->m_iCurBit + 1;
        m_nDataBits = pWriteBuf->m_nDataBits;
        pWriteBuf->m_iCurBit = m_iCurBit;
        if ( v5 <= 0x3FF )
          goto LABEL_23;
        if ( m_iCurBit < m_nDataBits )
        {
          pWriteBuf->m_pData[m_iCurBit >> 5] &= ~(1 << m_iCurBit);
          ++pWriteBuf->m_iCurBit;
          goto LABEL_37;
        }
LABEL_42:
        pWriteBuf->m_bOverflow = 1;
LABEL_37:
        if ( v5 > 0x1FFFF )
        {
          pWriteBufb = pWriteBuf;
          bf_write::WriteOneBit(pWriteBuf, 0);
          pWriteBuf = pWriteBufb;
          v7 = pWriteBufb->m_nDataBits;
          v33 = pWriteBufb->m_iCurBit;
          if ( v7 - v33 > 30 )
          {
            pWriteBufb->m_iCurBit = v33 + 31;
            v8 = v33 & 0x1F;
            v9 = &pWriteBufb->m_pData[v33 >> 5];
            v34 = __ROL4__(v5, v33 & 0x1F);
            v11 = *v9;
            v35 = &v9[(0x3FFFFFFFu >> (31 - (v33 & 0x1F))) & 1];
            v36 = v34 ^ *v35;
            v14 = *v9 ^ v34;
            *v35 ^= (0x3FFFFFFFu >> (31 - v8)) & v36;
            v15 = 0x7FFFFFFF;
            goto LABEL_6;
          }
        }
        else
        {
          pWriteBufa = pWriteBuf;
          bf_write::WriteOneBit(pWriteBuf, 1);
          pWriteBuf = pWriteBufa;
          v7 = pWriteBufa->m_nDataBits;
          v32 = pWriteBufa->m_iCurBit;
          if ( v7 - v32 > 16 )
          {
            pWriteBufa->m_iCurBit = v32 + 17;
            v8 = v32 & 0x1F;
            v9 = &pWriteBufa->m_pData[v32 >> 5];
            v37 = __ROL4__(v5, v32 & 0x1F);
            v11 = *v9;
            v38 = &v9[(0xFFFFu >> (31 - (v32 & 0x1F))) & 1];
            v39 = v37 ^ *v38;
            v14 = *v9 ^ v37;
            *v38 ^= (0xFFFFu >> (31 - v8)) & v39;
            v15 = 0x1FFFF;
            goto LABEL_6;
          }
        }
        goto LABEL_39;
      }
    }
    pWriteBuf->m_bOverflow = 1;
    if ( v5 <= 0x3FF )
    {
LABEL_23:
      if ( m_iCurBit >= m_nDataBits )
      {
        pWriteBuf->m_bOverflow = 1;
      }
      else
      {
        pWriteBuf->m_pData[m_iCurBit >> 5] |= 1 << m_iCurBit;
        m_iCurBit = pWriteBuf->m_iCurBit + 1;
        m_nDataBits = pWriteBuf->m_nDataBits;
        pWriteBuf->m_iCurBit = m_iCurBit;
      }
      if ( m_nDataBits - m_iCurBit > 9 )
      {
        pWriteBuf->m_iCurBit = m_iCurBit + 10;
        v8 = m_iCurBit & 0x1F;
        v9 = &pWriteBuf->m_pData[m_iCurBit >> 5];
        v40 = __ROL4__(v5, m_iCurBit & 0x1F);
        v11 = *v9;
        v41 = &v9[(0x1FFu >> (31 - (m_iCurBit & 0x1F))) & 1];
        v42 = v40 ^ *v41;
        v14 = *v9 ^ v40;
        *v41 ^= (0x1FFu >> (31 - v8)) & v42;
        v15 = 1023;
        goto LABEL_6;
      }
      goto LABEL_26;
    }
    goto LABEL_42;
  }
  v6 = pWriteBuf->m_iCurBit;
  v7 = pWriteBuf->m_nDataBits;
  if ( v6 >= v7 )
  {
    pWriteBuf->m_bOverflow = 1;
  }
  else
  {
    pWriteBuf->m_pData[v6 >> 5] |= 1 << v6;
    v7 = pWriteBuf->m_nDataBits;
    v6 = pWriteBuf->m_iCurBit + 1;
    pWriteBuf->m_iCurBit = v6;
  }
  if ( v7 - v6 > 1 )
  {
    pWriteBuf->m_iCurBit = v6 + 2;
    v8 = v6 & 0x1F;
    v9 = &pWriteBuf->m_pData[v6 >> 5];
    v10 = __ROL4__(v5, v6 & 0x1F);
    v11 = *v9;
    v12 = &v9[1u >> (31 - (v6 & 0x1F))];
    v13 = v10 ^ *v12;
    v14 = *v9 ^ v10;
    *v12 ^= (1u >> (31 - v8)) & v13;
    v15 = 3;
LABEL_6:
    *v9 = v11 ^ (v15 << v8) & v14;
    goto LABEL_7;
  }
LABEL_39:
  pWriteBuf->m_iCurBit = v7;
  pWriteBuf->m_bOverflow = 1;
LABEL_7:
  m_nCount = from->m_nCount;
  if ( m_nCount <= to->m_nCount )
    goto LABEL_27;
LABEL_8:
  if ( from->m_bUsingExternalPaths )
  {
    if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
    {
      v45.m_szFile = "../public/tier2/fieldpath.h";
      v45.m_szFunction = "Path_PopLast";
      v45.m_nLine = 477;
      LoggingSystem_Log(LOG_GENERAL, LoggingSeverity_t::LS_ERROR, &v45, "Path_PopLast failed for read only CFieldPath");
    }
    goto LABEL_30;
  }
  do
    from->m_nCount = --m_nCount;
  while ( to->m_nCount < m_nCount );
  m_bUsingExternalPaths = 0;
LABEL_11:
  v18 = m_nCount - 1;
  v19 = (to + 2 * v18);
  if ( to->m_bUsingExternalPaths )
    v19 = &to->u.m_pPaths[v18];
  m_nValue = v19->m_nValue;
  if ( m_bUsingExternalPaths )
  {
    while ( 1 )
    {
      if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
      {
        v45.m_szFile = "../public/tier2/fieldpath.h";
        v45.m_szFunction = "GetPathData";
        v45.m_nLine = 514;
        LoggingSystem_Log(LOG_GENERAL, LoggingSeverity_t::LS_ERROR, &v45, "GetPathData failed for read only CFieldPath");
      }
LABEL_30:
      if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v30, v31, v28, v29) != 0 )
        loc_0 = -559038737;
      Plat_ExitProcess(1);
    }
  }
  v21 = (from + 2 * v18);
  v22 = v21->u.m_FixedPaths[0].m_nValue;
  v21->u.m_FixedPaths[0].m_nValue = m_nValue;
  bf_write::WriteSignedVarInt32(pWriteBuf, m_nValue - v22);
}


// FieldOp_Write_PopNAndNonTopographical  (line 711, @0x0000000003122e80, libserver.so)  // inlines: CFieldPath_WriteUBitVar, GetDepth, GetNumBitsLeft, GetPathData, IsUsingFixedPaths, LeafCodeInfo_t, LoadLittleDWord, Path_PopLast, Pop, Set, SetOverflowFlag, WriteOneBit, WriteOneBitNoCheck, WriteUBitLong, operator[]
// calls: LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, bf_write::WriteOneBit, bf_write::WriteSignedVarInt32, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...)
// strings: "../public/tier2/fieldpath.h", "GetPathData", "GetPathData failed for read only CFieldPath", "Path_PopLast", "Path_PopLast failed for read only CFieldPath"
void __fastcall FieldOp_Write_PopNAndNonTopographical(
        CFieldPath *const from,
        const CFieldPath *const to,
        bf_write *pWriteBuf)
{
  bf_write *v5; // rbx
  __int64 v6; // r12
  unsigned __int64 v7; // r13
  int m_iCurBit; // eax
  int m_nDataBits; // edx
  char v10; // di
  int v11; // r12d
  uint32 *v12; // rsi
  uint32 v13; // r8d
  uint32 *v14; // rcx
  int v15; // eax
  int v16; // r12d
  int v17; // eax
  int m_nCount; // eax
  int16 v19; // dx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdi
  __int64 v23; // rsi
  int v24; // ecx
  int v25; // eax
  const CFieldPath *v26; // r8
  const CFieldPath::Path_t *v27; // rax
  int m_nValue; // edx
  const CFieldPath::Path_t *v29; // rax
  int v30; // ecx
  int32 v31; // edx
  int v32; // edx
  int v33; // eax
  char v34; // r8
  uint32 *v35; // rdi
  int v36; // eax
  uint32 v37; // r10d
  uint32 *v38; // rcx
  int v39; // edx
  int v40; // eax
  int v41; // edx
  int v42; // r12d
  uint32 *v43; // rcx
  int v44; // eax
  int v45; // eax
  int v46; // eax
  uint32 *v47; // rcx
  int v48; // edx
  int v49; // eax
  uint32 *v50; // rcx
  int v51; // edx
  const CFieldPath *v52; // [rsp+0h] [rbp-60h]
  __int16 nDelta; // [rsp+Ch] [rbp-54h]
  LeafCodeInfo_t v54; // [rsp+10h] [rbp-50h] BYREF

  v5 = pWriteBuf;
  LODWORD(v6) = from->m_nCount - to->m_nCount;
  v7 = v6;
  if ( v6 > 3 )
    goto LABEL_14;
  m_iCurBit = pWriteBuf->m_iCurBit;
  m_nDataBits = pWriteBuf->m_nDataBits;
  if ( m_iCurBit >= m_nDataBits )
  {
    v5->m_bOverflow = 1;
  }
  else
  {
    v5->m_pData[m_iCurBit >> 5] |= 1 << m_iCurBit;
    m_nDataBits = v5->m_nDataBits;
    m_iCurBit = v5->m_iCurBit + 1;
    v5->m_iCurBit = m_iCurBit;
  }
  if ( m_nDataBits - m_iCurBit <= 1 )
    goto LABEL_18;
  v5->m_iCurBit = m_iCurBit + 2;
  v10 = m_iCurBit & 0x1F;
  v11 = __ROL4__(v6, m_iCurBit & 0x1F);
  v12 = &v5->m_pData[m_iCurBit >> 5];
  v13 = *v12;
  v14 = &v12[1u >> (31 - (m_iCurBit & 0x1F))];
  v15 = v11 ^ *v14;
  v16 = *v12 ^ v11;
  *v14 ^= (1u >> (31 - v10)) & v15;
  v17 = 3;
LABEL_6:
  LODWORD(v6) = v13 ^ (v17 << v10) & v16;
  *v12 = v6;
LABEL_7:
  m_nCount = from->m_nCount;
  v19 = to->m_nCount;
  if ( m_nCount > v19 )
  {
    while ( from->m_bUsingExternalPaths )
    {
      v5 = &LOG_GENERAL;
      if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
      {
        v54.m_szFile = "../public/tier2/fieldpath.h";
        v54.m_szFunction = "Path_PopLast";
        v54.m_nLine = 477;
        LoggingSystem_Log(
          LOG_GENERAL,
          LoggingSeverity_t::LS_ERROR,
          &v54,
          "Path_PopLast failed for read only CFieldPath");
      }
LABEL_11:
      if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v22, v23, v20, v21) != 0 )
        loc_0 = -559038737;
      Plat_ExitProcess(1);
LABEL_14:
      v24 = pWriteBuf->m_iCurBit;
      if ( v24 >= pWriteBuf->m_nDataBits )
      {
        pWriteBuf->m_bOverflow = 1;
      }
      else
      {
        pWriteBuf->m_pData[v24 >> 5] &= ~(1 << v24);
        ++v5->m_iCurBit;
      }
      if ( v7 > 0xF )
      {
        bf_write::WriteOneBit(v5, 0);
        if ( v7 <= 0x3FF )
        {
          bf_write::WriteOneBit(v5, 1);
          v32 = v5->m_iCurBit;
          if ( v5->m_nDataBits - v32 <= 9 )
          {
            v5->m_iCurBit = v5->m_nDataBits;
            v5->m_bOverflow = 1;
            goto LABEL_7;
          }
          v5->m_iCurBit = v32 + 10;
          v34 = v32 & 0x1F;
          v35 = &v5->m_pData[v32 >> 5];
          v49 = __ROL4__(v6, v32 & 0x1F);
          v37 = *v35;
          v50 = &v35[(0x1FFu >> (31 - (v32 & 0x1F))) & 1];
          v51 = v49 ^ *v50;
          v40 = *v35 ^ v49;
          *v50 ^= (0x1FFu >> (31 - v34)) & v51;
          v41 = 1023;
          goto LABEL_51;
        }
        bf_write::WriteOneBit(v5, 0);
        if ( v7 > 0x1FFFF )
        {
          bf_write::WriteOneBit(v5, 0);
          m_nDataBits = v5->m_nDataBits;
          v45 = v5->m_iCurBit;
          if ( m_nDataBits - v45 > 30 )
          {
            v5->m_iCurBit = v45 + 31;
            v34 = v45 & 0x1F;
            v35 = &v5->m_pData[v45 >> 5];
            v46 = __ROL4__(v6, v45 & 0x1F);
            v37 = *v35;
            v47 = &v35[(0x3FFFFFFFu >> (31 - v34)) & 1];
            v48 = v46 ^ *v47;
            v40 = *v35 ^ v46;
            *v47 ^= (0x3FFFFFFFu >> (31 - v34)) & v48;
            v41 = 0x7FFFFFFF;
            goto LABEL_51;
          }
        }
        else
        {
          bf_write::WriteOneBit(v5, 1);
          m_nDataBits = v5->m_nDataBits;
          v33 = v5->m_iCurBit;
          if ( m_nDataBits - v33 > 16 )
          {
            v5->m_iCurBit = v33 + 17;
            v34 = v33 & 0x1F;
            v35 = &v5->m_pData[v33 >> 5];
            v36 = __ROL4__(v6, v33 & 0x1F);
            v37 = *v35;
            v38 = &v35[(0xFFFFu >> (31 - v34)) & 1];
            v39 = v36 ^ *v38;
            v40 = *v35 ^ v36;
            *v38 ^= (0xFFFFu >> (31 - v34)) & v39;
            v41 = 0x1FFFF;
LABEL_51:
            *v35 = v37 ^ (v41 << v34) & v40;
            goto LABEL_7;
          }
        }
      }
      else
      {
        bf_write::WriteOneBit(v5, 1);
        m_nDataBits = v5->m_nDataBits;
        v25 = v5->m_iCurBit;
        if ( m_nDataBits - v25 > 3 )
        {
          v5->m_iCurBit = v25 + 4;
          v10 = v25 & 0x1F;
          v42 = __ROL4__(v6, v25 & 0x1F);
          v12 = &v5->m_pData[v25 >> 5];
          v13 = *v12;
          v43 = &v12[(7u >> (31 - (v25 & 0x1F))) & 1];
          v44 = v42 ^ *v43;
          v16 = *v12 ^ v42;
          *v43 ^= (7u >> (31 - v10)) & v44;
          v17 = 15;
          goto LABEL_6;
        }
      }
LABEL_18:
      v5->m_iCurBit = m_nDataBits;
      v5->m_bOverflow = 1;
      m_nCount = from->m_nCount;
      v19 = to->m_nCount;
      if ( m_nCount <= v19 )
        goto LABEL_19;
    }
    do
    {
      from->m_nCount = --m_nCount;
      v19 = to->m_nCount;
    }
    while ( v19 < m_nCount );
  }
LABEL_19:
  v6 = 0;
  v7 = from;
  v26 = to;
  if ( v19 > 0 )
  {
    do
    {
      v27 = v26;
      if ( to->m_bUsingExternalPaths )
        v27 = &to->u.m_pPaths[v6];
      m_nValue = v27->m_nValue;
      v29 = v7;
      if ( from->m_bUsingExternalPaths )
        v29 = &from->u.m_pPaths[v6];
      v30 = v5->m_iCurBit;
      v31 = m_nValue - v29->m_nValue;
      if ( v31 != 0 )
      {
        if ( v30 >= v5->m_nDataBits )
        {
          v5->m_bOverflow = 1;
        }
        else
        {
          v5->m_pData[v30 >> 5] |= 1 << v30;
          ++v5->m_iCurBit;
        }
        v52 = v26;
        nDelta = v31;
        bf_write::WriteSignedVarInt32(v5, v31);
        v26 = v52;
        if ( from->m_bUsingExternalPaths )
        {
          v5 = &LOG_GENERAL;
          if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
          {
            v54.m_szFile = "../public/tier2/fieldpath.h";
            v54.m_szFunction = "GetPathData";
            v54.m_nLine = 514;
            LoggingSystem_Log(
              LOG_GENERAL,
              LoggingSeverity_t::LS_ERROR,
              &v54,
              "GetPathData failed for read only CFieldPath");
          }
          goto LABEL_11;
        }
        *v7 += nDelta;
      }
      else if ( v30 >= v5->m_nDataBits )
      {
        v5->m_bOverflow = 1;
      }
      else
      {
        v5->m_pData[v30 >> 5] &= ~(1 << v30);
        ++v5->m_iCurBit;
      }
      v7 += 2LL;
      ++v6;
      v26 = (v26 + 2);
    }
    while ( v6 < to->m_nCount );
  }
}


// FieldOp_Write_NonTopoComplex  (line 736, @0x000000000311ae40, libserver.so)  // inlines: GetDepth, GetPathData, LeafCodeInfo_t, Set, SetOverflowFlag, WriteOneBit, WriteOneBitNoCheck, operator[]
// calls: bf_write::WriteSignedVarInt32, LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...)
// strings: "../public/tier2/fieldpath.h", "GetPathData", "GetPathData failed for read only CFieldPath"
void __fastcall FieldOp_Write_NonTopoComplex(CFieldPath *const from, const CFieldPath *const to, bf_write *pWriteBuf)
{
  CFieldPath *v3; // r9
  const CFieldPath *v5; // r14
  CFieldPath *v6; // r13
  __int64 i; // r12
  const CFieldPath::Path_t *v9; // rax
  int m_nValue; // edx
  CFieldPath *v11; // rax
  int m_iCurBit; // ecx
  int32 v13; // edx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdi
  __int64 v17; // rsi
  CFieldPath *v18; // [rsp+0h] [rbp-60h]
  __int16 nDelta; // [rsp+Ch] [rbp-54h]
  LeafCodeInfo_t v20; // [rsp+10h] [rbp-50h] BYREF

  v3 = from;
  v5 = to;
  v6 = from;
  for ( i = 0; i < to->m_nCount; v5 = (v5 + 2) )
  {
    v9 = v5;
    if ( to->m_bUsingExternalPaths )
      v9 = &to->u.m_pPaths[i];
    m_nValue = v9->m_nValue;
    v11 = v6;
    if ( v3->m_bUsingExternalPaths )
      v11 = &v3->u.m_pPaths[i];
    m_iCurBit = pWriteBuf->m_iCurBit;
    v13 = m_nValue - v11->u.m_FixedPaths[0].m_nValue;
    if ( v13 != 0 )
    {
      if ( m_iCurBit < pWriteBuf->m_nDataBits )
      {
        pWriteBuf->m_pData[m_iCurBit >> 5] |= 1 << m_iCurBit;
        ++pWriteBuf->m_iCurBit;
        goto LABEL_13;
      }
      while ( 1 )
      {
        pWriteBuf->m_bOverflow = 1;
LABEL_13:
        v18 = v3;
        nDelta = v13;
        bf_write::WriteSignedVarInt32(pWriteBuf, v13);
        v3 = v18;
        if ( !v18->m_bUsingExternalPaths )
          break;
        pWriteBuf = &LOG_GENERAL;
        if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
        {
          v20.m_szFile = "../public/tier2/fieldpath.h";
          v20.m_szFunction = "GetPathData";
          v20.m_nLine = 514;
          LoggingSystem_Log(
            LOG_GENERAL,
            LoggingSeverity_t::LS_ERROR,
            &v20,
            "GetPathData failed for read only CFieldPath");
        }
        if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v16, v17, v14, v15) != 0 )
          loc_0 = -559038737;
        Plat_ExitProcess(1);
      }
      v6->u.m_FixedPaths[0].m_nValue += nDelta;
    }
    else if ( m_iCurBit >= pWriteBuf->m_nDataBits )
    {
      pWriteBuf->m_bOverflow = 1;
    }
    else
    {
      pWriteBuf->m_pData[m_iCurBit >> 5] &= ~(1 << m_iCurBit);
      ++pWriteBuf->m_iCurBit;
    }
    v6 = (v6 + 2);
    ++i;
  }
}


// FieldOp_Write_NonTopoPenultimatePluseOne  (line 754, @0x0000000003117010, libserver.so)  // inlines: GetPathData, LeafCodeInfo_t, Set, operator[]
// calls: LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...)
// strings: "../public/tier2/fieldpath.h", "GetPathData", "GetPathData failed for read only CFieldPath"
void __fastcall FieldOp_Write_NonTopoPenultimatePluseOne(
        CFieldPath *const from,
        const CFieldPath *const to,
        bf_write *pWriteBuf)
{
  __int64 v3; // rbx
  __int64 v4; // rbp
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // r8
  __int64 v10; // r9
  LeafCodeInfo_t v11; // [rsp-38h] [rbp-38h] BYREF
  __int64 v12; // [rsp-10h] [rbp-10h]
  __int64 v13; // [rsp-8h] [rbp-8h]

  if ( from->m_bUsingExternalPaths )
  {
    v13 = v4;
    v12 = v3;
    if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
      goto LABEL_7;
    while ( 1 )
    {
      if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v7, v8, v5, v6) != 0 )
        loc_0 = -559038737;
      Plat_ExitProcess(1);
LABEL_7:
      v11.m_szFile = "../public/tier2/fieldpath.h";
      v11.m_szFunction = "GetPathData";
      v11.m_nLine = 514;
      LoggingSystem_Log(
        LOG_GENERAL,
        LoggingSeverity_t::LS_ERROR,
        &v11,
        "GetPathData failed for read only CFieldPath",
        v9,
        v10);
    }
  }
  ++from->u.m_FixedPaths[to->m_nCount - 2].m_nValue;
}


// FieldOp_Write_NonTopoComplexPack4Bits  (line 763, @0x000000000311afe0, libserver.so)  // inlines: GetDepth, GetNumBitsLeft, GetPathData, LeafCodeInfo_t, LoadLittleDWord, Set, SetOverflowFlag, WriteOneBit, WriteOneBitNoCheck, WriteUBitLong, operator[]
// calls: LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...)
// strings: "../public/tier2/fieldpath.h", "GetPathData", "GetPathData failed for read only CFieldPath"
void __fastcall FieldOp_Write_NonTopoComplexPack4Bits(
        CFieldPath *const from,
        const CFieldPath *const to,
        bf_write *pWriteBuf)
{
  __int64 v3; // rax
  int v4; // r8d
  CFieldPath *v5; // r9
  char *v6; // rcx
  int v7; // r10d
  CFieldPath *v8; // rcx
  int v9; // r10d
  int m_iCurBit; // ecx
  int m_nDataBits; // r11d
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // rsi
  char v16; // r13
  uint32 *v17; // r12
  int v18; // ebx
  uint32 *v19; // rcx
  uint32 v20; // r15d
  LeafCodeInfo_t v21; // [rsp-58h] [rbp-58h] BYREF

  v3 = 0;
  v4 = 0;
  if ( to->m_nCount > 0 )
  {
    v5 = from;
    do
    {
      v6 = to + v3;
      if ( to->m_bUsingExternalPaths )
        v6 = to->u.m_pPaths + v3;
      v7 = *v6;
      v8 = v5;
      if ( from->m_bUsingExternalPaths )
        v8 = (from->u.m_pPaths + v3);
      v9 = v7 - v8->u.m_FixedPaths[0].m_nValue;
      m_iCurBit = pWriteBuf->m_iCurBit;
      if ( v9 != 0 )
      {
        m_nDataBits = pWriteBuf->m_nDataBits;
        if ( m_iCurBit < m_nDataBits )
        {
          pWriteBuf->m_pData[m_iCurBit >> 5] |= 1 << m_iCurBit;
          m_nDataBits = pWriteBuf->m_nDataBits;
          m_iCurBit = pWriteBuf->m_iCurBit + 1;
          pWriteBuf->m_iCurBit = m_iCurBit;
          if ( m_nDataBits - m_iCurBit > 3 )
            goto LABEL_22;
LABEL_13:
          pWriteBuf->m_iCurBit = m_nDataBits;
          pWriteBuf->m_bOverflow = 1;
          goto LABEL_14;
        }
        while ( 1 )
        {
          pWriteBuf->m_bOverflow = 1;
          if ( m_nDataBits - m_iCurBit <= 3 )
            goto LABEL_13;
LABEL_22:
          pWriteBuf->m_iCurBit = m_iCurBit + 4;
          v16 = m_iCurBit & 0x1F;
          v17 = &pWriteBuf->m_pData[m_iCurBit >> 5];
          v18 = __ROL4__(v9 + 7, m_iCurBit & 0x1F);
          v19 = &v17[(7u >> (31 - (m_iCurBit & 0x1F))) & 1];
          v20 = *v17;
          *v19 ^= (7u >> (31 - v16)) & (v18 ^ *v19);
          *v17 = v20 ^ (15 << v16) & (v20 ^ v18);
LABEL_14:
          if ( !from->m_bUsingExternalPaths )
            break;
          if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
          {
            v21.m_szFile = "../public/tier2/fieldpath.h";
            v21.m_szFunction = "GetPathData";
            v21.m_nLine = 514;
            LoggingSystem_Log(
              LOG_GENERAL,
              LoggingSeverity_t::LS_ERROR,
              &v21,
              "GetPathData failed for read only CFieldPath");
          }
          if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v14, v15, v12, v13) != 0 )
            loc_0 = -559038737;
          v3 = Plat_ExitProcess(1);
        }
        v5->u.m_FixedPaths[0].m_nValue += v9;
      }
      else if ( m_iCurBit >= pWriteBuf->m_nDataBits )
      {
        pWriteBuf->m_bOverflow = 1;
      }
      else
      {
        pWriteBuf->m_pData[m_iCurBit >> 5] &= ~(1 << m_iCurBit);
        ++pWriteBuf->m_iCurBit;
      }
      ++v4;
      v3 += 2;
      v5 = (v5 + 2);
    }
    while ( v4 < to->m_nCount );
  }
}


// FieldOp_Write_FieldPathEncodeFinish  (line 782, @0x0000000003116a80, libserver.so)
void __fastcall FieldOp_Write_FieldPathEncodeFinish(
        CFieldPath *const from,
        const CFieldPath *const to,
        bf_write *pWriteBuf)
{
  ;
}


// FieldOp_Read_PlusOne  (line 786, @0x00000000031170a0, libserver.so)  // inlines: GetPathData, LeafCodeInfo_t, Set, operator[]
// calls: LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...)
// strings: "../public/tier2/fieldpath.h", "GetPathData", "GetPathData failed for read only CFieldPath"
void __fastcall FieldOp_Read_PlusOne(CFieldPath *const from, bf_read *pReadBuf)
{
  __int64 v2; // rbx
  __int64 v3; // rbp
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // r8
  __int64 v9; // r9
  LeafCodeInfo_t v10; // [rsp-38h] [rbp-38h] BYREF
  __int64 v11; // [rsp-10h] [rbp-10h]
  __int64 v12; // [rsp-8h] [rbp-8h]

  if ( from->m_bUsingExternalPaths )
  {
    v12 = v3;
    v11 = v2;
    if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
      goto LABEL_7;
    while ( 1 )
    {
      if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v6, v7, v4, v5) != 0 )
        loc_0 = -559038737;
      Plat_ExitProcess(1);
LABEL_7:
      v10.m_szFile = "../public/tier2/fieldpath.h";
      v10.m_szFunction = "GetPathData";
      v10.m_nLine = 514;
      LoggingSystem_Log(
        LOG_GENERAL,
        LoggingSeverity_t::LS_ERROR,
        &v10,
        "GetPathData failed for read only CFieldPath",
        v8,
        v9);
    }
  }
  ++from->u.m_FixedPaths[from->m_nCount - 1].m_nValue;
}


// FieldOp_Read_PlusTwo  (line 792, @0x0000000003117130, libserver.so)  // inlines: GetPathData, LeafCodeInfo_t, Set, operator[]
// calls: LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...)
// strings: "../public/tier2/fieldpath.h", "GetPathData", "GetPathData failed for read only CFieldPath"
void __fastcall FieldOp_Read_PlusTwo(CFieldPath *const from, bf_read *pReadBuf)
{
  __int64 v2; // rbx
  __int64 v3; // rbp
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // r8
  __int64 v9; // r9
  LeafCodeInfo_t v10; // [rsp-38h] [rbp-38h] BYREF
  __int64 v11; // [rsp-10h] [rbp-10h]
  __int64 v12; // [rsp-8h] [rbp-8h]

  if ( from->m_bUsingExternalPaths )
  {
    v12 = v3;
    v11 = v2;
    if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
      goto LABEL_7;
    while ( 1 )
    {
      if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v6, v7, v4, v5) != 0 )
        loc_0 = -559038737;
      Plat_ExitProcess(1);
LABEL_7:
      v10.m_szFile = "../public/tier2/fieldpath.h";
      v10.m_szFunction = "GetPathData";
      v10.m_nLine = 514;
      LoggingSystem_Log(
        LOG_GENERAL,
        LoggingSeverity_t::LS_ERROR,
        &v10,
        "GetPathData failed for read only CFieldPath",
        v8,
        v9);
    }
  }
  from->u.m_FixedPaths[from->m_nCount - 1].m_nValue += 2;
}


// FieldOp_Read_PlusThree  (line 798, @0x00000000031171c0, libserver.so)  // inlines: GetPathData, LeafCodeInfo_t, Set, operator[]
// calls: LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...)
// strings: "../public/tier2/fieldpath.h", "GetPathData", "GetPathData failed for read only CFieldPath"
void __fastcall FieldOp_Read_PlusThree(CFieldPath *const from, bf_read *pReadBuf)
{
  __int64 v2; // rbx
  __int64 v3; // rbp
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // r8
  __int64 v9; // r9
  LeafCodeInfo_t v10; // [rsp-38h] [rbp-38h] BYREF
  __int64 v11; // [rsp-10h] [rbp-10h]
  __int64 v12; // [rsp-8h] [rbp-8h]

  if ( from->m_bUsingExternalPaths )
  {
    v12 = v3;
    v11 = v2;
    if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
      goto LABEL_7;
    while ( 1 )
    {
      if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v6, v7, v4, v5) != 0 )
        loc_0 = -559038737;
      Plat_ExitProcess(1);
LABEL_7:
      v10.m_szFile = "../public/tier2/fieldpath.h";
      v10.m_szFunction = "GetPathData";
      v10.m_nLine = 514;
      LoggingSystem_Log(
        LOG_GENERAL,
        LoggingSeverity_t::LS_ERROR,
        &v10,
        "GetPathData failed for read only CFieldPath",
        v8,
        v9);
    }
  }
  from->u.m_FixedPaths[from->m_nCount - 1].m_nValue += 3;
}


// FieldOp_Read_PlusFour  (line 804, @0x0000000003117250, libserver.so)  // inlines: GetPathData, LeafCodeInfo_t, Set, operator[]
// calls: LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...)
// strings: "../public/tier2/fieldpath.h", "GetPathData", "GetPathData failed for read only CFieldPath"
void __fastcall FieldOp_Read_PlusFour(CFieldPath *const from, bf_read *pReadBuf)
{
  __int64 v2; // rbx
  __int64 v3; // rbp
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // r8
  __int64 v9; // r9
  LeafCodeInfo_t v10; // [rsp-38h] [rbp-38h] BYREF
  __int64 v11; // [rsp-10h] [rbp-10h]
  __int64 v12; // [rsp-8h] [rbp-8h]

  if ( from->m_bUsingExternalPaths )
  {
    v12 = v3;
    v11 = v2;
    if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
      goto LABEL_7;
    while ( 1 )
    {
      if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v6, v7, v4, v5) != 0 )
        loc_0 = -559038737;
      Plat_ExitProcess(1);
LABEL_7:
      v10.m_szFile = "../public/tier2/fieldpath.h";
      v10.m_szFunction = "GetPathData";
      v10.m_nLine = 514;
      LoggingSystem_Log(
        LOG_GENERAL,
        LoggingSeverity_t::LS_ERROR,
        &v10,
        "GetPathData failed for read only CFieldPath",
        v8,
        v9);
    }
  }
  from->u.m_FixedPaths[from->m_nCount - 1].m_nValue += 4;
}


// FieldOp_Read_PlusN  (line 810, @0x0000000003123a40, libserver.so)  // inlines: CFieldPath_ReadUBitVar, GetNumBitsLeft, GetPathData, LeafCodeInfo_t, LoadLittleDWord, ReadOneBit, ReadOneBitNoCheck, ReadUBitLong, Set, operator[]
// calls: LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, bf_read::SetOverflowFlag, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...), bf_read::ReadOneBit
// strings: "../public/tier2/fieldpath.h", "GetPathData", "GetPathData failed for read only CFieldPath"
void __fastcall FieldOp_Read_PlusN(CFieldPath *const from, bf_read *pReadBuf)
{
  CFieldPath *v2; // rbx
  int m_nDataBits; // ecx
  signed int m_iCurBit; // eax
  int m_nCount; // r12d
  const unsigned __int8 *m_pData; // rdi
  int v7; // r8d
  signed int v8; // edx
  __int16 v9; // ax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 v13; // rsi
  const unsigned __int8 *v14; // r8
  signed int v15; // edi
  int v16; // eax
  const unsigned __int8 *v17; // r8
  int v18; // edx
  int v19; // eax
  int OneBit; // eax
  int v21; // edx
  int v22; // ecx
  const unsigned __int8 *v23; // r8
  const unsigned __int8 *v24; // r8
  bf_read *pReadBufb; // [rsp+8h] [rbp-38h]
  bf_read *pReadBufc; // [rsp+8h] [rbp-38h]
  bf_read *pReadBufd; // [rsp+8h] [rbp-38h]
  bf_read *pReadBufa; // [rsp+8h] [rbp-38h]
  LeafCodeInfo_t v29; // [rsp+10h] [rbp-30h] BYREF

  v2 = from;
  m_nDataBits = pReadBuf->m_nDataBits;
  m_iCurBit = pReadBuf->m_iCurBit;
  m_nCount = from->m_nCount;
  if ( m_nDataBits - m_iCurBit <= 0 )
    goto LABEL_12;
  m_pData = pReadBuf->m_pData;
  v7 = *&pReadBuf->m_pData[4 * (m_iCurBit >> 5)];
  v8 = m_iCurBit + 1;
  pReadBuf->m_iCurBit = m_iCurBit + 1;
  if ( !_bittest(&v7, m_iCurBit) )
    goto LABEL_13;
  if ( m_nDataBits - v8 <= 1 )
    goto LABEL_21;
  pReadBuf->m_iCurBit = m_iCurBit + 3;
  v9 = (((*&m_pData[4 * (v8 >> 5)] >> (v8 & 0x1F)) | (*&m_pData[4 * ((m_iCurBit + 2) >> 5)] << (32 - (v8 & 0x1F)))) & 3)
     + 5;
  while ( v2->m_bUsingExternalPaths )
  {
    v2 = &LOG_GENERAL;
    if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
    {
      v29.m_szFile = "../public/tier2/fieldpath.h";
      v29.m_szFunction = "GetPathData";
      v29.m_nLine = 514;
      LoggingSystem_Log(LOG_GENERAL, LoggingSeverity_t::LS_ERROR, &v29, "GetPathData failed for read only CFieldPath");
    }
    if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v12, v13, v10, v11) != 0 )
      loc_0 = -559038737;
    Plat_ExitProcess(1);
LABEL_12:
    pReadBufb = pReadBuf;
    bf_read::SetOverflowFlag(pReadBuf);
    pReadBuf = pReadBufb;
    m_nDataBits = pReadBufb->m_nDataBits;
    v8 = pReadBufb->m_iCurBit;
LABEL_13:
    if ( m_nDataBits - v8 <= 0 )
    {
      pReadBufc = pReadBuf;
      bf_read::SetOverflowFlag(pReadBuf);
      pReadBuf = pReadBufc;
      m_nDataBits = pReadBufc->m_nDataBits;
      v15 = pReadBufc->m_iCurBit;
LABEL_18:
      if ( m_nDataBits - v15 <= 0 )
      {
        pReadBufd = pReadBuf;
        bf_read::SetOverflowFlag(pReadBuf);
        pReadBuf = pReadBufd;
        goto LABEL_24;
      }
      v17 = pReadBuf->m_pData;
      v18 = v15 + 1;
      v19 = *&pReadBuf->m_pData[4 * (v15 >> 5)];
      pReadBuf->m_iCurBit = v15 + 1;
      if ( _bittest(&v19, v15) )
      {
        if ( m_nDataBits - v18 > 9 )
        {
          pReadBuf->m_iCurBit = v15 + 11;
          v9 = (((*&v17[4 * (v18 >> 5)] >> (v18 & 0x1F)) | (*&v17[4 * ((v15 + 10) >> 5)] << (32 - (v18 & 0x1F)))) & 0x3FF)
             + 5;
        }
        else
        {
LABEL_21:
          pReadBuf->m_iCurBit = m_nDataBits;
          bf_read::SetOverflowFlag(pReadBuf);
          v9 = 5;
        }
      }
      else
      {
LABEL_24:
        pReadBufa = pReadBuf;
        OneBit = bf_read::ReadOneBit(pReadBuf);
        v21 = pReadBufa->m_iCurBit;
        v22 = pReadBufa->m_nDataBits;
        if ( OneBit != 0 )
        {
          if ( v22 - v21 <= 16 )
            goto LABEL_29;
          v23 = pReadBufa->m_pData;
          pReadBufa->m_iCurBit = v21 + 17;
          v9 = ((*&v23[4 * (v21 >> 5)] >> (v21 & 0x1F)) | (*&v23[4 * ((v21 + 16) >> 5)] << (32 - (v21 & 0x1F)))) + 5;
        }
        else if ( v22 - v21 <= 30 )
        {
LABEL_29:
          pReadBufa->m_iCurBit = pReadBufa->m_nDataBits;
          bf_read::SetOverflowFlag(pReadBufa);
          v9 = 5;
        }
        else
        {
          v24 = pReadBufa->m_pData;
          pReadBufa->m_iCurBit = v21 + 31;
          v9 = ((*&v24[4 * (v21 >> 5)] >> (v21 & 0x1F)) | (*&v24[4 * ((v21 + 30) >> 5)] << (32 - (v21 & 0x1F)))) + 5;
        }
      }
    }
    else
    {
      v14 = pReadBuf->m_pData;
      v15 = v8 + 1;
      v16 = *&pReadBuf->m_pData[4 * (v8 >> 5)];
      pReadBuf->m_iCurBit = v8 + 1;
      if ( !_bittest(&v16, v8) )
        goto LABEL_18;
      if ( m_nDataBits - v15 <= 3 )
        goto LABEL_21;
      pReadBuf->m_iCurBit = v8 + 5;
      v9 = (((*&v14[4 * (v15 >> 5)] >> (v15 & 0x1F)) | (*&v14[4 * ((v8 + 4) >> 5)] << (32 - (v15 & 0x1F)))) & 0xF) + 5;
    }
  }
  v2->u.m_FixedPaths[m_nCount - 1].m_nValue += v9;
}


// FieldOp_Read_PushOneLeftDeltaZeroRightZero  (line 818, @0x00000000031179a0, libserver.so)  // inlines: IsUsingFixedPaths, LeafCodeInfo_t, Path_AddToTail, Push
// calls: LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...)
// strings: "../public/tier2/fieldpath.h", "Path_AddToTail", "Path_AddToTail failed for read only CFieldPath", "Path_AddToTail failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)"
void __fastcall FieldOp_Read_PushOneLeftDeltaZeroRightZero(CFieldPath *const from, bf_read *pReadBuf)
{
  __int64 m_nCount; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdi
  __int64 v6; // rsi
  __int64 v7; // r8
  __int64 v8; // r9
  LeafCodeInfo_t v9; // [rsp+0h] [rbp-30h] BYREF

  if ( from->m_bUsingExternalPaths )
  {
    if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
      goto LABEL_8;
    while ( 1 )
    {
LABEL_5:
      if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v5, v6, v3, v4) != 0 )
        loc_0 = -559038737;
      Plat_ExitProcess(1);
LABEL_8:
      v9.m_szFile = "../public/tier2/fieldpath.h";
      v9.m_szFunction = "Path_AddToTail";
      v9.m_nLine = 428;
      LoggingSystem_Log(
        LOG_GENERAL,
        LoggingSeverity_t::LS_ERROR,
        &v9,
        "Path_AddToTail failed for read only CFieldPath",
        v7,
        v8);
    }
  }
  m_nCount = from->m_nCount;
  if ( m_nCount > 5 )
  {
    if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
    {
      v9.m_szFile = "../public/tier2/fieldpath.h";
      v9.m_szFunction = "Path_AddToTail";
      v9.m_nLine = 425;
      LoggingSystem_Log(
        LOG_GENERAL,
        LoggingSeverity_t::LS_ERROR,
        &v9,
        "Path_AddToTail failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)",
        6);
    }
    goto LABEL_5;
  }
  from->m_nCount = m_nCount + 1;
  from->u.m_FixedPaths[m_nCount].m_nValue = 0;
}


// FieldOp_Read_PushOneLeftDeltaZeroRightNonZero  (line 823, @0x00000000031233f0, libserver.so)  // inlines: CFieldPath_ReadUBitVar, GetNumBitsLeft, IsUsingFixedPaths, LeafCodeInfo_t, LoadLittleDWord, Path_AddToTail, Push, ReadOneBit, ReadOneBitNoCheck, ReadUBitLong
// calls: LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, bf_read::SetOverflowFlag, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...), bf_read::ReadOneBit
// strings: "../public/tier2/fieldpath.h", "Path_AddToTail", "Path_AddToTail failed for read only CFieldPath", "Path_AddToTail failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)"
void __fastcall FieldOp_Read_PushOneLeftDeltaZeroRightNonZero(CFieldPath *const from, bf_read *pReadBuf)
{
  int m_nDataBits; // ecx
  int m_iCurBit; // eax
  const unsigned __int8 *m_pData; // rdi
  int v6; // r8d
  signed int v7; // edx
  __int64 m_nCount; // rdx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rsi
  const unsigned __int8 *v13; // r8
  signed int v14; // edi
  int v15; // eax
  const unsigned __int8 *v16; // r8
  int v17; // edx
  int v18; // eax
  int OneBit; // eax
  int v20; // edx
  int v21; // ecx
  const unsigned __int8 *v22; // r8
  int v23; // ecx
  char v24; // di
  bf_read *pReadBufb; // [rsp+8h] [rbp-38h]
  bf_read *pReadBufc; // [rsp+8h] [rbp-38h]
  bf_read *pReadBufd; // [rsp+8h] [rbp-38h]
  bf_read *pReadBufa; // [rsp+8h] [rbp-38h]
  LeafCodeInfo_t v29; // [rsp+10h] [rbp-30h] BYREF

  m_nDataBits = pReadBuf->m_nDataBits;
  m_iCurBit = pReadBuf->m_iCurBit;
  if ( m_nDataBits - m_iCurBit <= 0 )
    goto LABEL_13;
  m_pData = pReadBuf->m_pData;
  v6 = *&pReadBuf->m_pData[4 * (m_iCurBit >> 5)];
  v7 = m_iCurBit + 1;
  pReadBuf->m_iCurBit = m_iCurBit + 1;
  if ( !_bittest(&v6, m_iCurBit) )
    goto LABEL_14;
  if ( m_nDataBits - v7 <= 1 )
    goto LABEL_22;
  pReadBuf->m_iCurBit = m_iCurBit + 3;
  LOWORD(m_iCurBit) = ((*&m_pData[4 * (v7 >> 5)] >> (v7 & 0x1F))
                     | (*&m_pData[4 * ((m_iCurBit + 2) >> 5)] << (32 - (v7 & 0x1F))))
                    & 3;
  while ( from->m_bUsingExternalPaths )
  {
    from = &LOG_GENERAL;
    if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
    {
      v29.m_szFile = "../public/tier2/fieldpath.h";
      v29.m_szFunction = "Path_AddToTail";
      v29.m_nLine = 428;
      LoggingSystem_Log(
        LOG_GENERAL,
        LoggingSeverity_t::LS_ERROR,
        &v29,
        "Path_AddToTail failed for read only CFieldPath");
    }
LABEL_10:
    if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v11, v12, v9, v10) != 0 )
      loc_0 = -559038737;
    Plat_ExitProcess(1);
LABEL_13:
    pReadBufb = pReadBuf;
    bf_read::SetOverflowFlag(pReadBuf);
    pReadBuf = pReadBufb;
    m_nDataBits = pReadBufb->m_nDataBits;
    v7 = pReadBufb->m_iCurBit;
LABEL_14:
    if ( m_nDataBits - v7 <= 0 )
    {
      pReadBufc = pReadBuf;
      bf_read::SetOverflowFlag(pReadBuf);
      pReadBuf = pReadBufc;
      m_nDataBits = pReadBufc->m_nDataBits;
      v14 = pReadBufc->m_iCurBit;
LABEL_19:
      if ( m_nDataBits - v14 <= 0 )
      {
        pReadBufd = pReadBuf;
        bf_read::SetOverflowFlag(pReadBuf);
        pReadBuf = pReadBufd;
        goto LABEL_27;
      }
      v16 = pReadBuf->m_pData;
      v17 = v14 + 1;
      v18 = *&pReadBuf->m_pData[4 * (v14 >> 5)];
      pReadBuf->m_iCurBit = v14 + 1;
      if ( _bittest(&v18, v14) )
      {
        if ( m_nDataBits - v17 > 9 )
        {
          pReadBuf->m_iCurBit = v14 + 11;
          LOWORD(m_iCurBit) = ((*&v16[4 * (v17 >> 5)] >> (v17 & 0x1F))
                             | (*&v16[4 * ((v14 + 10) >> 5)] << (32 - (v17 & 0x1F))))
                            & 0x3FF;
        }
        else
        {
LABEL_22:
          pReadBuf->m_iCurBit = m_nDataBits;
          bf_read::SetOverflowFlag(pReadBuf);
          LOWORD(m_iCurBit) = 0;
        }
      }
      else
      {
LABEL_27:
        pReadBufa = pReadBuf;
        OneBit = bf_read::ReadOneBit(pReadBuf);
        v20 = pReadBufa->m_iCurBit;
        v21 = pReadBufa->m_nDataBits;
        if ( OneBit != 0 )
        {
          if ( v21 - v20 > 16 )
          {
            v22 = pReadBufa->m_pData;
            pReadBufa->m_iCurBit = v20 + 17;
            v23 = v20 + 16;
            v24 = v20 & 0x1F;
            goto LABEL_30;
          }
LABEL_33:
          pReadBufa->m_iCurBit = pReadBufa->m_nDataBits;
          bf_read::SetOverflowFlag(pReadBufa);
          LOWORD(m_iCurBit) = 0;
        }
        else
        {
          if ( v21 - v20 <= 30 )
            goto LABEL_33;
          v22 = pReadBufa->m_pData;
          pReadBufa->m_iCurBit = v20 + 31;
          v23 = v20 + 30;
          v24 = v20 & 0x1F;
LABEL_30:
          m_iCurBit = (*&v22[4 * (v23 >> 5)] << (32 - v24)) | (*&v22[4 * (v20 >> 5)] >> v24);
        }
      }
    }
    else
    {
      v13 = pReadBuf->m_pData;
      v14 = v7 + 1;
      v15 = *&pReadBuf->m_pData[4 * (v7 >> 5)];
      pReadBuf->m_iCurBit = v7 + 1;
      if ( !_bittest(&v15, v7) )
        goto LABEL_19;
      if ( m_nDataBits - v14 <= 3 )
        goto LABEL_22;
      pReadBuf->m_iCurBit = v7 + 5;
      LOWORD(m_iCurBit) = ((*&v13[4 * (v14 >> 5)] >> (v14 & 0x1F)) | (*&v13[4 * ((v7 + 4) >> 5)] << (32 - (v14 & 0x1F))))
                        & 0xF;
    }
  }
  m_nCount = from->m_nCount;
  if ( m_nCount > 5 )
  {
    from = &LOG_GENERAL;
    if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
    {
      v29.m_szFile = "../public/tier2/fieldpath.h";
      v29.m_szFunction = "Path_AddToTail";
      v29.m_nLine = 425;
      LoggingSystem_Log(
        LOG_GENERAL,
        LoggingSeverity_t::LS_ERROR,
        &v29,
        "Path_AddToTail failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)",
        6);
    }
    goto LABEL_10;
  }
  from->m_nCount = m_nCount + 1;
  from->u.m_FixedPaths[m_nCount].m_nValue = m_iCurBit;
}


// FieldOp_Read_PushOneLeftDeltaOneRightZero  (line 829, @0x00000000031172e0, libserver.so)  // inlines: GetPathData, IsUsingFixedPaths, LeafCodeInfo_t, Path_AddToTail, Push, Set, operator[]
// calls: LoggingSystem_IsChannelEnabled, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...), Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess
// strings: "../public/tier2/fieldpath.h", "GetPathData", "GetPathData failed for read only CFieldPath", "Path_AddToTail", "Path_AddToTail failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)", "Path_AddToTail failed for read only CFieldPath"
void __fastcall FieldOp_Read_PushOneLeftDeltaOneRightZero(CFieldPath *const from, bf_read *pReadBuf)
{
  __int64 m_nCount; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdi
  __int64 v6; // rsi
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // r8
  __int64 v10; // r9
  LeafCodeInfo_t v11; // [rsp+0h] [rbp-30h] BYREF

  if ( from->m_bUsingExternalPaths )
  {
    if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
    {
      v11.m_szFile = "../public/tier2/fieldpath.h";
      v11.m_szFunction = "GetPathData";
      v11.m_nLine = 514;
      LoggingSystem_Log(
        LOG_GENERAL,
        LoggingSeverity_t::LS_ERROR,
        &v11,
        "GetPathData failed for read only CFieldPath",
        v7,
        v8);
    }
    goto LABEL_9;
  }
  ++from->u.m_FixedPaths[from->m_nCount - 1].m_nValue;
  if ( from->m_bUsingExternalPaths )
  {
    if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
    {
      v11.m_szFile = "../public/tier2/fieldpath.h";
      v11.m_szFunction = "Path_AddToTail";
      v11.m_nLine = 428;
      LoggingSystem_Log(
        LOG_GENERAL,
        LoggingSeverity_t::LS_ERROR,
        &v11,
        "Path_AddToTail failed for read only CFieldPath",
        v9,
        v10);
    }
    goto LABEL_9;
  }
  m_nCount = from->m_nCount;
  if ( m_nCount > 5 )
  {
    while ( 1 )
    {
      if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
      {
        v11.m_szFile = "../public/tier2/fieldpath.h";
        v11.m_szFunction = "Path_AddToTail";
        v11.m_nLine = 425;
        LoggingSystem_Log(
          LOG_GENERAL,
          LoggingSeverity_t::LS_ERROR,
          &v11,
          "Path_AddToTail failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)",
          6);
      }
LABEL_9:
      if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v5, v6, v3, v4) != 0 )
        loc_0 = -559038737;
      Plat_ExitProcess(1);
    }
  }
  from->m_nCount = m_nCount + 1;
  from->u.m_FixedPaths[m_nCount].m_nValue = 0;
}


// FieldOp_Read_PushOneLeftDeltaOneRightNonZero  (line 836, @0x0000000003123d60, libserver.so)  // inlines: CFieldPath_ReadUBitVar, GetNumBitsLeft, GetPathData, IsUsingFixedPaths, LeafCodeInfo_t, LoadLittleDWord, Path_AddToTail, Push, ReadOneBit, ReadOneBitNoCheck, ReadUBitLong, Set, operator[]
// calls: LoggingSystem_IsChannelEnabled, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...), Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, bf_read::SetOverflowFlag, bf_read::ReadOneBit
// strings: "../public/tier2/fieldpath.h", "GetPathData", "GetPathData failed for read only CFieldPath", "Path_AddToTail", "Path_AddToTail failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)", "Path_AddToTail failed for read only CFieldPath"
void __fastcall FieldOp_Read_PushOneLeftDeltaOneRightNonZero(CFieldPath *const from, bf_read *pReadBuf)
{
  CFieldPath *v2; // rbx
  int m_nDataBits; // ecx
  signed int m_iCurBit; // edx
  const unsigned __int8 *m_pData; // rdi
  int v6; // r8d
  signed int v7; // eax
  __int64 m_nCount; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rsi
  const unsigned __int8 *v13; // r8
  signed int v14; // edi
  int v15; // edx
  const unsigned __int8 *v16; // r8
  int v17; // edx
  int v18; // eax
  bool v19; // zf
  int v20; // eax
  int v21; // ecx
  const unsigned __int8 *v22; // r8
  int v23; // edx
  char v24; // di
  bf_read *pReadBufb; // [rsp+8h] [rbp-38h]
  bf_read *pReadBufc; // [rsp+8h] [rbp-38h]
  bf_read *pReadBufd; // [rsp+8h] [rbp-38h]
  bf_read *pReadBufa; // [rsp+8h] [rbp-38h]
  LeafCodeInfo_t v29; // [rsp+10h] [rbp-30h] BYREF

  v2 = from;
  if ( from->m_bUsingExternalPaths )
  {
    v2 = &LOG_GENERAL;
    if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
    {
      v29.m_szFile = "../public/tier2/fieldpath.h";
      v29.m_szFunction = "GetPathData";
      v29.m_nLine = 514;
      LoggingSystem_Log(LOG_GENERAL, LoggingSeverity_t::LS_ERROR, &v29, "GetPathData failed for read only CFieldPath");
    }
    goto LABEL_13;
  }
  ++from->u.m_FixedPaths[from->m_nCount - 1].m_nValue;
  m_nDataBits = pReadBuf->m_nDataBits;
  m_iCurBit = pReadBuf->m_iCurBit;
  if ( m_nDataBits - m_iCurBit <= 0 )
    goto LABEL_16;
  m_pData = pReadBuf->m_pData;
  v6 = *&pReadBuf->m_pData[4 * (m_iCurBit >> 5)];
  v7 = m_iCurBit + 1;
  pReadBuf->m_iCurBit = m_iCurBit + 1;
  if ( !_bittest(&v6, m_iCurBit) )
    goto LABEL_17;
  if ( m_nDataBits - v7 <= 1 )
    goto LABEL_25;
  pReadBuf->m_iCurBit = m_iCurBit + 3;
  LOWORD(m_iCurBit) = ((*&m_pData[4 * (v7 >> 5)] >> (v7 & 0x1F))
                     | (*&m_pData[4 * ((m_iCurBit + 2) >> 5)] << (32 - (v7 & 0x1F))))
                    & 3;
  while ( v2->m_bUsingExternalPaths )
  {
    v2 = &LOG_GENERAL;
    if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
    {
      v29.m_szFile = "../public/tier2/fieldpath.h";
      v29.m_szFunction = "Path_AddToTail";
      v29.m_nLine = 428;
      LoggingSystem_Log(
        LOG_GENERAL,
        LoggingSeverity_t::LS_ERROR,
        &v29,
        "Path_AddToTail failed for read only CFieldPath");
    }
LABEL_13:
    if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v11, v12, v9, v10) != 0 )
      loc_0 = -559038737;
    Plat_ExitProcess(1);
LABEL_16:
    pReadBufb = pReadBuf;
    bf_read::SetOverflowFlag(pReadBuf);
    pReadBuf = pReadBufb;
    m_nDataBits = pReadBufb->m_nDataBits;
    v7 = pReadBufb->m_iCurBit;
LABEL_17:
    if ( m_nDataBits - v7 <= 0 )
    {
      pReadBufc = pReadBuf;
      bf_read::SetOverflowFlag(pReadBuf);
      pReadBuf = pReadBufc;
      m_nDataBits = pReadBufc->m_nDataBits;
      v14 = pReadBufc->m_iCurBit;
LABEL_22:
      if ( m_nDataBits - v14 <= 0 )
      {
        pReadBufd = pReadBuf;
        bf_read::SetOverflowFlag(pReadBuf);
        pReadBuf = pReadBufd;
        goto LABEL_28;
      }
      v16 = pReadBuf->m_pData;
      v17 = *&pReadBuf->m_pData[4 * (v14 >> 5)];
      v18 = v14 + 1;
      pReadBuf->m_iCurBit = v14 + 1;
      if ( _bittest(&v17, v14) )
      {
        if ( m_nDataBits - v18 > 9 )
        {
          pReadBuf->m_iCurBit = v14 + 11;
          LOWORD(m_iCurBit) = ((*&v16[4 * (v18 >> 5)] >> (v18 & 0x1F))
                             | (*&v16[4 * ((v14 + 10) >> 5)] << (32 - (v18 & 0x1F))))
                            & 0x3FF;
        }
        else
        {
LABEL_25:
          pReadBuf->m_iCurBit = m_nDataBits;
          bf_read::SetOverflowFlag(pReadBuf);
          LOWORD(m_iCurBit) = 0;
        }
      }
      else
      {
LABEL_28:
        pReadBufa = pReadBuf;
        v19 = bf_read::ReadOneBit(pReadBuf) == 0;
        v20 = pReadBufa->m_iCurBit;
        v21 = pReadBufa->m_nDataBits;
        if ( v19 )
        {
          if ( v21 - v20 <= 30 )
            goto LABEL_34;
          v22 = pReadBufa->m_pData;
          pReadBufa->m_iCurBit = v20 + 31;
          v23 = v20 + 30;
          v24 = v20 & 0x1F;
LABEL_31:
          m_iCurBit = (*&v22[4 * (v20 >> 5)] >> v24) | (*&v22[4 * (v23 >> 5)] << (32 - v24));
        }
        else
        {
          if ( v21 - v20 > 16 )
          {
            v22 = pReadBufa->m_pData;
            pReadBufa->m_iCurBit = v20 + 17;
            v23 = v20 + 16;
            v24 = v20 & 0x1F;
            goto LABEL_31;
          }
LABEL_34:
          pReadBufa->m_iCurBit = pReadBufa->m_nDataBits;
          bf_read::SetOverflowFlag(pReadBufa);
          LOWORD(m_iCurBit) = 0;
        }
      }
    }
    else
    {
      v13 = pReadBuf->m_pData;
      v14 = v7 + 1;
      v15 = *&pReadBuf->m_pData[4 * (v7 >> 5)];
      pReadBuf->m_iCurBit = v7 + 1;
      if ( !_bittest(&v15, v7) )
        goto LABEL_22;
      if ( m_nDataBits - v14 <= 3 )
        goto LABEL_25;
      pReadBuf->m_iCurBit = v7 + 5;
      LOWORD(m_iCurBit) = ((*&v13[4 * (v14 >> 5)] >> (v14 & 0x1F)) | (*&v13[4 * ((v7 + 4) >> 5)] << (32 - (v14 & 0x1F))))
                        & 0xF;
    }
  }
  m_nCount = v2->m_nCount;
  if ( m_nCount > 5 )
  {
    v2 = &LOG_GENERAL;
    if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
    {
      v29.m_szFile = "../public/tier2/fieldpath.h";
      v29.m_szFunction = "Path_AddToTail";
      v29.m_nLine = 425;
      LoggingSystem_Log(
        LOG_GENERAL,
        LoggingSeverity_t::LS_ERROR,
        &v29,
        "Path_AddToTail failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)",
        6);
    }
    goto LABEL_13;
  }
  v2->m_nCount = m_nCount + 1;
  v2->u.m_FixedPaths[m_nCount].m_nValue = m_iCurBit;
}


// FieldOp_Read_PushOneLeftDeltaNRightZero  (line 844, @0x0000000003124100, libserver.so)  // inlines: CFieldPath_ReadUBitVar, GetNumBitsLeft, GetPathData, IsUsingFixedPaths, LeafCodeInfo_t, LoadLittleDWord, Path_AddToTail, Push, ReadOneBit, ReadOneBitNoCheck, ReadUBitLong, Set, operator[]
// calls: LoggingSystem_IsChannelEnabled, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...), Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, bf_read::SetOverflowFlag, bf_read::ReadOneBit
// strings: "../public/tier2/fieldpath.h", "GetPathData", "GetPathData failed for read only CFieldPath", "Path_AddToTail", "Path_AddToTail failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)", "Path_AddToTail failed for read only CFieldPath"
void __fastcall FieldOp_Read_PushOneLeftDeltaNRightZero(CFieldPath *const from, bf_read *pReadBuf)
{
  CFieldPath *v2; // rbx
  int m_nDataBits; // ecx
  signed int m_iCurBit; // eax
  __int64 v5; // r12
  const unsigned __int8 *m_pData; // rdi
  int v7; // r8d
  signed int v8; // edx
  __int64 m_nCount; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 v13; // rsi
  const unsigned __int8 *v14; // r8
  signed int v15; // edi
  int v16; // eax
  const unsigned __int8 *v17; // r8
  int v18; // edx
  int v19; // eax
  int v20; // edx
  const unsigned __int8 *v21; // r8
  int v22; // edx
  const unsigned __int8 *v23; // r8
  bf_read *pReadBufb; // [rsp+8h] [rbp-38h]
  bf_read *pReadBufc; // [rsp+8h] [rbp-38h]
  bf_read *pReadBufd; // [rsp+8h] [rbp-38h]
  bf_read *pReadBufa; // [rsp+8h] [rbp-38h]
  LeafCodeInfo_t v28; // [rsp+10h] [rbp-30h] BYREF

  v2 = from;
  m_nDataBits = pReadBuf->m_nDataBits;
  m_iCurBit = pReadBuf->m_iCurBit;
  LODWORD(v5) = from->m_nCount;
  if ( m_nDataBits - m_iCurBit <= 0 )
    goto LABEL_16;
  m_pData = pReadBuf->m_pData;
  v7 = *&pReadBuf->m_pData[4 * (m_iCurBit >> 5)];
  v8 = m_iCurBit + 1;
  pReadBuf->m_iCurBit = m_iCurBit + 1;
  if ( !_bittest(&v7, m_iCurBit) )
    goto LABEL_17;
  if ( m_nDataBits - v8 <= 1 )
    goto LABEL_25;
  pReadBuf->m_iCurBit = m_iCurBit + 3;
  LOWORD(m_iCurBit) = ((*&m_pData[4 * (v8 >> 5)] >> (v8 & 0x1F))
                     | (*&m_pData[4 * ((m_iCurBit + 2) >> 5)] << (32 - (v8 & 0x1F))))
                    & 3;
  while ( v2->m_bUsingExternalPaths )
  {
    v2 = &LOG_GENERAL;
    if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
    {
      v28.m_szFile = "../public/tier2/fieldpath.h";
      v28.m_szFunction = "GetPathData";
      v28.m_nLine = 514;
      LoggingSystem_Log(LOG_GENERAL, LoggingSeverity_t::LS_ERROR, &v28, "GetPathData failed for read only CFieldPath");
    }
LABEL_13:
    if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v12, v13, v10, v11) != 0 )
      loc_0 = -559038737;
    Plat_ExitProcess(1);
LABEL_16:
    pReadBufb = pReadBuf;
    bf_read::SetOverflowFlag(pReadBuf);
    pReadBuf = pReadBufb;
    m_nDataBits = pReadBufb->m_nDataBits;
    v8 = pReadBufb->m_iCurBit;
LABEL_17:
    if ( m_nDataBits - v8 <= 0 )
    {
      pReadBufc = pReadBuf;
      bf_read::SetOverflowFlag(pReadBuf);
      pReadBuf = pReadBufc;
      m_nDataBits = pReadBufc->m_nDataBits;
      v15 = pReadBufc->m_iCurBit;
LABEL_22:
      if ( m_nDataBits - v15 <= 0 )
      {
        pReadBufd = pReadBuf;
        bf_read::SetOverflowFlag(pReadBuf);
        pReadBuf = pReadBufd;
        goto LABEL_28;
      }
      v17 = pReadBuf->m_pData;
      v18 = v15 + 1;
      v19 = *&pReadBuf->m_pData[4 * (v15 >> 5)];
      pReadBuf->m_iCurBit = v15 + 1;
      if ( _bittest(&v19, v15) )
      {
        if ( m_nDataBits - v18 > 9 )
        {
          pReadBuf->m_iCurBit = v15 + 11;
          LOWORD(m_iCurBit) = ((*&v17[4 * (v18 >> 5)] >> (v18 & 0x1F))
                             | (*&v17[4 * ((v15 + 10) >> 5)] << (32 - (v18 & 0x1F))))
                            & 0x3FF;
        }
        else
        {
LABEL_25:
          pReadBuf->m_iCurBit = m_nDataBits;
          bf_read::SetOverflowFlag(pReadBuf);
          LOWORD(m_iCurBit) = 0;
        }
      }
      else
      {
LABEL_28:
        pReadBufa = pReadBuf;
        if ( bf_read::ReadOneBit(pReadBuf) != 0 )
        {
          v20 = pReadBufa->m_iCurBit;
          if ( pReadBufa->m_nDataBits - v20 <= 16 )
            goto LABEL_33;
          v21 = pReadBufa->m_pData;
          pReadBufa->m_iCurBit = v20 + 17;
          m_iCurBit = ((*&v21[4 * (v20 >> 5)] >> (v20 & 0x1F)) | (*&v21[4 * ((v20 + 16) >> 5)] << (32 - (v20 & 0x1F))))
                    & 0x1FFFF;
        }
        else
        {
          v22 = pReadBufa->m_iCurBit;
          if ( pReadBufa->m_nDataBits - v22 <= 30 )
          {
LABEL_33:
            pReadBufa->m_iCurBit = pReadBufa->m_nDataBits;
            bf_read::SetOverflowFlag(pReadBufa);
            LOWORD(m_iCurBit) = 0;
          }
          else
          {
            v23 = pReadBufa->m_pData;
            pReadBufa->m_iCurBit = v22 + 31;
            m_iCurBit = ((*&v23[4 * (v22 >> 5)] >> (v22 & 0x1F)) | (*&v23[4 * ((v22 + 30) >> 5)] << (32 - (v22 & 0x1F))))
                      & 0x7FFFFFFF;
          }
        }
      }
    }
    else
    {
      v14 = pReadBuf->m_pData;
      v15 = v8 + 1;
      v16 = *&pReadBuf->m_pData[4 * (v8 >> 5)];
      pReadBuf->m_iCurBit = v8 + 1;
      if ( !_bittest(&v16, v8) )
        goto LABEL_22;
      if ( m_nDataBits - v15 <= 3 )
        goto LABEL_25;
      pReadBuf->m_iCurBit = v8 + 5;
      LOWORD(m_iCurBit) = ((*&v14[4 * (v15 >> 5)] >> (v15 & 0x1F)) | (*&v14[4 * ((v8 + 4) >> 5)] << (32 - (v15 & 0x1F))))
                        & 0xF;
    }
  }
  v5 = v5 - 1;
  v2->u.m_FixedPaths[v5].m_nValue += m_iCurBit;
  if ( v2->m_bUsingExternalPaths )
  {
    v2 = &LOG_GENERAL;
    if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
    {
      v28.m_szFile = "../public/tier2/fieldpath.h";
      v28.m_szFunction = "Path_AddToTail";
      v28.m_nLine = 428;
      LoggingSystem_Log(
        LOG_GENERAL,
        LoggingSeverity_t::LS_ERROR,
        &v28,
        "Path_AddToTail failed for read only CFieldPath");
    }
    goto LABEL_13;
  }
  m_nCount = v2->m_nCount;
  if ( m_nCount > 5 )
  {
    v2 = &LOG_GENERAL;
    if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
    {
      v28.m_szFile = "../public/tier2/fieldpath.h";
      v28.m_szFunction = "Path_AddToTail";
      v28.m_nLine = 425;
      LoggingSystem_Log(
        LOG_GENERAL,
        LoggingSeverity_t::LS_ERROR,
        &v28,
        "Path_AddToTail failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)",
        6);
    }
    goto LABEL_13;
  }
  v2->m_nCount = m_nCount + 1;
  v2->u.m_FixedPaths[m_nCount].m_nValue = 0;
}


// FieldOp_Read_PushOneLeftDeltaNRightNonZero  (line 852, @0x00000000031244f0, libserver.so)  // inlines: CFieldPath_ReadUBitVar, GetNumBitsLeft, GetPathData, IsUsingFixedPaths, LeafCodeInfo_t, LoadLittleDWord, Path_AddToTail, Push, ReadOneBit, ReadOneBitNoCheck, ReadUBitLong, Set, operator[]
// calls: LoggingSystem_IsChannelEnabled, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...), Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, bf_read::SetOverflowFlag, bf_read::ReadOneBit
// strings: "../public/tier2/fieldpath.h", "GetPathData", "GetPathData failed for read only CFieldPath", "Path_AddToTail", "Path_AddToTail failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)", "Path_AddToTail failed for read only CFieldPath"
void __fastcall FieldOp_Read_PushOneLeftDeltaNRightNonZero(CFieldPath *const from, bf_read *pReadBuf)
{
  bf_read *v3; // rbx
  int m_nDataBits; // ecx
  signed int m_iCurBit; // eax
  __int64 v6; // r13
  const unsigned __int8 *m_pData; // rsi
  int v8; // edi
  signed int v9; // edx
  __int16 v10; // ax
  int v11; // ecx
  signed int v12; // edx
  const unsigned __int8 *v13; // rsi
  int v14; // edi
  signed int v15; // eax
  int16 v16; // dx
  __int64 m_nCount; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdi
  __int64 v21; // rsi
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // r8
  __int64 v25; // r9
  const unsigned __int8 *v26; // rdi
  signed int v27; // esi
  int v28; // eax
  const unsigned __int8 *v29; // rdi
  signed int v30; // esi
  int v31; // edx
  const unsigned __int8 *v32; // rdi
  int v33; // edx
  int v34; // eax
  const unsigned __int8 *v35; // rdi
  int v36; // edx
  int v37; // eax
  int OneBit; // eax
  int v39; // edx
  int v40; // ecx
  const unsigned __int8 *v41; // r8
  bool v42; // zf
  int v43; // eax
  int v44; // ecx
  const unsigned __int8 *v45; // r8
  int v46; // edx
  char v47; // di
  const unsigned __int8 *v48; // r8
  LeafCodeInfo_t v49; // [rsp+0h] [rbp-40h] BYREF

  v3 = pReadBuf;
  m_nDataBits = pReadBuf->m_nDataBits;
  m_iCurBit = pReadBuf->m_iCurBit;
  LODWORD(v6) = from->m_nCount;
  if ( m_nDataBits - m_iCurBit <= 0 )
    goto LABEL_20;
  m_pData = pReadBuf->m_pData;
  v8 = *&m_pData[4 * (m_iCurBit >> 5)];
  v9 = m_iCurBit + 1;
  v3->m_iCurBit = m_iCurBit + 1;
  if ( !_bittest(&v8, m_iCurBit) )
    goto LABEL_21;
  if ( m_nDataBits - v9 <= 1 )
    goto LABEL_34;
  v3->m_iCurBit = m_iCurBit + 3;
  v10 = (((*&m_pData[4 * (v9 >> 5)] >> (v9 & 0x1F)) | (*&m_pData[4 * ((m_iCurBit + 2) >> 5)] << (32 - (v9 & 0x1F)))) & 3)
      + 2;
  while ( from->m_bUsingExternalPaths )
  {
    v3 = &LOG_GENERAL;
    if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
    {
      v49.m_szFile = "../public/tier2/fieldpath.h";
      v49.m_szFunction = "GetPathData";
      v49.m_nLine = 514;
      LoggingSystem_Log(
        LOG_GENERAL,
        LoggingSeverity_t::LS_ERROR,
        &v49,
        "GetPathData failed for read only CFieldPath",
        v22,
        v23);
    }
LABEL_17:
    if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v20, v21, v18, v19) != 0 )
      loc_0 = -559038737;
    Plat_ExitProcess(1);
LABEL_20:
    bf_read::SetOverflowFlag(pReadBuf);
    m_nDataBits = v3->m_nDataBits;
    v9 = v3->m_iCurBit;
LABEL_21:
    if ( m_nDataBits - v9 <= 0 )
    {
      bf_read::SetOverflowFlag(v3);
      m_nDataBits = v3->m_nDataBits;
      v27 = v3->m_iCurBit;
LABEL_31:
      if ( m_nDataBits - v27 <= 0 )
      {
        bf_read::SetOverflowFlag(v3);
        goto LABEL_43;
      }
      v32 = v3->m_pData;
      v33 = v27 + 1;
      v34 = *&v3->m_pData[4 * (v27 >> 5)];
      v3->m_iCurBit = v27 + 1;
      if ( _bittest(&v34, v27) )
      {
        if ( m_nDataBits - v33 > 9 )
        {
          v3->m_iCurBit = v27 + 11;
          v10 = (((*&v32[4 * (v33 >> 5)] >> (v33 & 0x1F)) | (*&v32[4 * ((v27 + 10) >> 5)] << (32 - (v33 & 0x1F))))
               & 0x3FF)
              + 2;
        }
        else
        {
LABEL_34:
          v3->m_iCurBit = m_nDataBits;
          bf_read::SetOverflowFlag(v3);
          v10 = 2;
        }
      }
      else
      {
LABEL_43:
        OneBit = bf_read::ReadOneBit(v3);
        v39 = v3->m_iCurBit;
        v40 = v3->m_nDataBits;
        if ( OneBit != 0 )
        {
          if ( v40 - v39 <= 16 )
            goto LABEL_55;
          v41 = v3->m_pData;
          v3->m_iCurBit = v39 + 17;
          v10 = ((*&v41[4 * (v39 >> 5)] >> (v39 & 0x1F)) | (*&v41[4 * ((v39 + 16) >> 5)] << (32 - (v39 & 0x1F)))) + 2;
        }
        else if ( v40 - v39 <= 30 )
        {
LABEL_55:
          v3->m_iCurBit = v3->m_nDataBits;
          bf_read::SetOverflowFlag(v3);
          v10 = 2;
        }
        else
        {
          v48 = v3->m_pData;
          v3->m_iCurBit = v39 + 31;
          v10 = ((*&v48[4 * (v39 >> 5)] >> (v39 & 0x1F)) | (*&v48[4 * ((v39 + 30) >> 5)] << (32 - (v39 & 0x1F)))) + 2;
        }
      }
    }
    else
    {
      v26 = v3->m_pData;
      v27 = v9 + 1;
      v28 = *&v3->m_pData[4 * (v9 >> 5)];
      v3->m_iCurBit = v9 + 1;
      if ( !_bittest(&v28, v9) )
        goto LABEL_31;
      if ( m_nDataBits - v27 <= 3 )
        goto LABEL_34;
      v3->m_iCurBit = v9 + 5;
      v10 = (((*&v26[4 * (v27 >> 5)] >> (v27 & 0x1F)) | (*&v26[4 * ((v9 + 4) >> 5)] << (32 - (v27 & 0x1F)))) & 0xF) + 2;
    }
  }
  v6 = v6 - 1;
  from->u.m_FixedPaths[v6].m_nValue += v10;
  v11 = v3->m_nDataBits;
  v12 = v3->m_iCurBit;
  if ( v11 - v12 <= 0 )
  {
    bf_read::SetOverflowFlag(v3);
    v11 = v3->m_nDataBits;
    v15 = v3->m_iCurBit;
  }
  else
  {
    v13 = v3->m_pData;
    v14 = *&v3->m_pData[4 * (v12 >> 5)];
    v15 = v12 + 1;
    v3->m_iCurBit = v12 + 1;
    if ( _bittest(&v14, v12) )
    {
      if ( v11 - v15 > 1 )
      {
        v3->m_iCurBit = v12 + 3;
        v16 = (((*&v13[4 * (v15 >> 5)] >> (v15 & 0x1F)) | (*&v13[4 * ((v12 + 2) >> 5)] << (32 - (v15 & 0x1F)))) & 3) + 1;
        goto LABEL_10;
      }
      goto LABEL_39;
    }
  }
  if ( v11 - v15 <= 0 )
  {
    bf_read::SetOverflowFlag(v3);
    v11 = v3->m_nDataBits;
    v30 = v3->m_iCurBit;
  }
  else
  {
    v29 = v3->m_pData;
    v30 = v15 + 1;
    v31 = *&v3->m_pData[4 * (v15 >> 5)];
    v3->m_iCurBit = v15 + 1;
    if ( _bittest(&v31, v15) )
    {
      if ( v11 - v30 > 3 )
      {
        v3->m_iCurBit = v15 + 5;
        v16 = (((*&v29[4 * (v30 >> 5)] >> (v30 & 0x1F)) | (*&v29[4 * ((v15 + 4) >> 5)] << (32 - (v30 & 0x1F)))) & 0xF)
            + 1;
        goto LABEL_10;
      }
      goto LABEL_39;
    }
  }
  if ( v11 - v30 <= 0 )
  {
    bf_read::SetOverflowFlag(v3);
LABEL_47:
    v42 = bf_read::ReadOneBit(v3) == 0;
    v43 = v3->m_iCurBit;
    v44 = v3->m_nDataBits;
    if ( v42 )
    {
      if ( v44 - v43 > 30 )
      {
        v45 = v3->m_pData;
        v3->m_iCurBit = v43 + 31;
        v46 = v43 + 30;
        v47 = v43 & 0x1F;
        goto LABEL_50;
      }
    }
    else if ( v44 - v43 > 16 )
    {
      v45 = v3->m_pData;
      v3->m_iCurBit = v43 + 17;
      v46 = v43 + 16;
      v47 = v43 & 0x1F;
LABEL_50:
      v16 = ((*&v45[4 * (v43 >> 5)] >> v47) | (*&v45[4 * (v46 >> 5)] << (32 - v47))) + 1;
      goto LABEL_10;
    }
    v3->m_iCurBit = v3->m_nDataBits;
    bf_read::SetOverflowFlag(v3);
    v16 = 1;
    goto LABEL_10;
  }
  v35 = v3->m_pData;
  v36 = *&v3->m_pData[4 * (v30 >> 5)];
  v37 = v30 + 1;
  v3->m_iCurBit = v30 + 1;
  if ( !_bittest(&v36, v30) )
    goto LABEL_47;
  if ( v11 - v37 <= 9 )
  {
LABEL_39:
    v3->m_iCurBit = v11;
    bf_read::SetOverflowFlag(v3);
    v16 = 1;
    goto LABEL_10;
  }
  v3->m_iCurBit = v30 + 11;
  v16 = (((*&v35[4 * (v37 >> 5)] >> (v37 & 0x1F)) | (*&v35[4 * ((v30 + 10) >> 5)] << (32 - (v37 & 0x1F)))) & 0x3FF) + 1;
LABEL_10:
  if ( from->m_bUsingExternalPaths )
  {
    v3 = &LOG_GENERAL;
    if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
    {
      v49.m_szFile = "../public/tier2/fieldpath.h";
      v49.m_szFunction = "Path_AddToTail";
      v49.m_nLine = 428;
      LoggingSystem_Log(
        LOG_GENERAL,
        LoggingSeverity_t::LS_ERROR,
        &v49,
        "Path_AddToTail failed for read only CFieldPath",
        v24,
        v25);
    }
    goto LABEL_17;
  }
  m_nCount = from->m_nCount;
  if ( m_nCount > 5 )
  {
    v3 = &LOG_GENERAL;
    if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
    {
      v49.m_szFile = "../public/tier2/fieldpath.h";
      v49.m_szFunction = "Path_AddToTail";
      v49.m_nLine = 425;
      LoggingSystem_Log(
        LOG_GENERAL,
        LoggingSeverity_t::LS_ERROR,
        &v49,
        "Path_AddToTail failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)",
        6);
    }
    goto LABEL_17;
  }
  from->m_nCount = m_nCount + 1;
  from->u.m_FixedPaths[m_nCount].m_nValue = v16;
}


// FieldOp_Read_PushOneLeftDeltaNRightNonZeroPack6Bits  (line 863, @0x0000000003119ae0, libserver.so)  // inlines: GetNumBitsLeft, GetPathData, IsUsingFixedPaths, LeafCodeInfo_t, LoadLittleDWord, Path_AddToTail, Push, ReadUBitLong, Set, operator[]
// calls: LoggingSystem_IsChannelEnabled, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...), Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, bf_read::SetOverflowFlag
// strings: "../public/tier2/fieldpath.h", "GetPathData", "GetPathData failed for read only CFieldPath", "Path_AddToTail", "Path_AddToTail failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)", "Path_AddToTail failed for read only CFieldPath"
void __fastcall FieldOp_Read_PushOneLeftDeltaNRightNonZeroPack6Bits(CFieldPath *const from, bf_read *pReadBuf)
{
  CFieldPath *v2; // rbx
  int m_iCurBit; // edx
  int m_nCount; // r12d
  const unsigned __int8 *m_pData; // r9
  __int16 v6; // ax
  int m_nDataBits; // eax
  int v8; // edx
  const unsigned __int8 *v9; // r8
  __int16 i; // ax
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // rsi
  bf_read *pReadBufa; // [rsp+8h] [rbp-38h]
  LeafCodeInfo_t v17; // [rsp+10h] [rbp-30h] BYREF

  v2 = from;
  m_iCurBit = pReadBuf->m_iCurBit;
  m_nCount = from->m_nCount;
  if ( pReadBuf->m_nDataBits - m_iCurBit <= 2 )
  {
    pReadBuf->m_iCurBit = pReadBuf->m_nDataBits;
    pReadBufa = pReadBuf;
    bf_read::SetOverflowFlag(pReadBuf);
    v6 = 2;
    pReadBuf = pReadBufa;
  }
  else
  {
    m_pData = pReadBuf->m_pData;
    pReadBuf->m_iCurBit = m_iCurBit + 3;
    v6 = (((*&m_pData[4 * (m_iCurBit >> 5)] >> (m_iCurBit & 0x1F))
         | (*&m_pData[4 * ((m_iCurBit + 2) >> 5)] << (32 - (m_iCurBit & 0x1F))))
        & 7)
       + 2;
  }
  if ( v2->m_bUsingExternalPaths )
  {
    v2 = &LOG_GENERAL;
    if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
    {
      v17.m_szFile = "../public/tier2/fieldpath.h";
      v17.m_szFunction = "GetPathData";
      v17.m_nLine = 514;
      LoggingSystem_Log(LOG_GENERAL, LoggingSeverity_t::LS_ERROR, &v17, "GetPathData failed for read only CFieldPath");
    }
    goto LABEL_13;
  }
  v2->u.m_FixedPaths[m_nCount - 1].m_nValue += v6;
  m_nDataBits = pReadBuf->m_nDataBits;
  v8 = pReadBuf->m_iCurBit;
  if ( m_nDataBits - v8 <= 2 )
    goto LABEL_16;
  v9 = pReadBuf->m_pData;
  pReadBuf->m_iCurBit = v8 + 3;
  for ( i = (((*&v9[4 * (v8 >> 5)] >> (v8 & 0x1F)) | (*&v9[4 * ((v8 + 2) >> 5)] << (32 - (v8 & 0x1F)))) & 7) + 1; ; i = 1 )
  {
    if ( v2->m_bUsingExternalPaths )
    {
      v2 = &LOG_GENERAL;
      if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
      {
        v17.m_szFile = "../public/tier2/fieldpath.h";
        v17.m_szFunction = "Path_AddToTail";
        v17.m_nLine = 428;
        LoggingSystem_Log(
          LOG_GENERAL,
          LoggingSeverity_t::LS_ERROR,
          &v17,
          "Path_AddToTail failed for read only CFieldPath");
      }
      goto LABEL_13;
    }
    v11 = v2->m_nCount;
    if ( v11 <= 5 )
      break;
    v2 = &LOG_GENERAL;
    if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
    {
      v17.m_szFile = "../public/tier2/fieldpath.h";
      v17.m_szFunction = "Path_AddToTail";
      v17.m_nLine = 425;
      LoggingSystem_Log(
        LOG_GENERAL,
        LoggingSeverity_t::LS_ERROR,
        &v17,
        "Path_AddToTail failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)",
        6);
    }
LABEL_13:
    if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v14, v15, v12, v13) != 0 )
      loc_0 = -559038737;
    m_nDataBits = Plat_ExitProcess(1);
LABEL_16:
    pReadBuf->m_iCurBit = m_nDataBits;
    bf_read::SetOverflowFlag(pReadBuf);
  }
  v2->m_nCount = v11 + 1;
  v2->u.m_FixedPaths[v11].m_nValue = i;
}


// FieldOp_Read_PushOneLeftDeltaNRightNonZeroPack8Bits  (line 874, @0x0000000003119d20, libserver.so)  // inlines: GetNumBitsLeft, GetPathData, IsUsingFixedPaths, LeafCodeInfo_t, LoadLittleDWord, Path_AddToTail, Push, ReadUBitLong, Set, operator[]
// calls: LoggingSystem_IsChannelEnabled, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...), Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, bf_read::SetOverflowFlag
// strings: "../public/tier2/fieldpath.h", "GetPathData", "GetPathData failed for read only CFieldPath", "Path_AddToTail", "Path_AddToTail failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)", "Path_AddToTail failed for read only CFieldPath"
void __fastcall FieldOp_Read_PushOneLeftDeltaNRightNonZeroPack8Bits(CFieldPath *const from, bf_read *pReadBuf)
{
  CFieldPath *v2; // rbx
  int m_iCurBit; // edx
  int m_nCount; // r12d
  const unsigned __int8 *m_pData; // r9
  __int16 v6; // ax
  int m_nDataBits; // eax
  int v8; // edx
  const unsigned __int8 *v9; // r8
  __int16 i; // ax
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // rsi
  bf_read *pReadBufa; // [rsp+8h] [rbp-38h]
  LeafCodeInfo_t v17; // [rsp+10h] [rbp-30h] BYREF

  v2 = from;
  m_iCurBit = pReadBuf->m_iCurBit;
  m_nCount = from->m_nCount;
  if ( pReadBuf->m_nDataBits - m_iCurBit <= 3 )
  {
    pReadBuf->m_iCurBit = pReadBuf->m_nDataBits;
    pReadBufa = pReadBuf;
    bf_read::SetOverflowFlag(pReadBuf);
    v6 = 2;
    pReadBuf = pReadBufa;
  }
  else
  {
    m_pData = pReadBuf->m_pData;
    pReadBuf->m_iCurBit = m_iCurBit + 4;
    v6 = (((*&m_pData[4 * (m_iCurBit >> 5)] >> (m_iCurBit & 0x1F))
         | (*&m_pData[4 * ((m_iCurBit + 3) >> 5)] << (32 - (m_iCurBit & 0x1F))))
        & 0xF)
       + 2;
  }
  if ( v2->m_bUsingExternalPaths )
  {
    v2 = &LOG_GENERAL;
    if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
    {
      v17.m_szFile = "../public/tier2/fieldpath.h";
      v17.m_szFunction = "GetPathData";
      v17.m_nLine = 514;
      LoggingSystem_Log(LOG_GENERAL, LoggingSeverity_t::LS_ERROR, &v17, "GetPathData failed for read only CFieldPath");
    }
    goto LABEL_13;
  }
  v2->u.m_FixedPaths[m_nCount - 1].m_nValue += v6;
  m_nDataBits = pReadBuf->m_nDataBits;
  v8 = pReadBuf->m_iCurBit;
  if ( m_nDataBits - v8 <= 3 )
    goto LABEL_16;
  v9 = pReadBuf->m_pData;
  pReadBuf->m_iCurBit = v8 + 4;
  for ( i = (((*&v9[4 * (v8 >> 5)] >> (v8 & 0x1F)) | (*&v9[4 * ((v8 + 3) >> 5)] << (32 - (v8 & 0x1F)))) & 0xF) + 1; ; i = 1 )
  {
    if ( v2->m_bUsingExternalPaths )
    {
      v2 = &LOG_GENERAL;
      if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
      {
        v17.m_szFile = "../public/tier2/fieldpath.h";
        v17.m_szFunction = "Path_AddToTail";
        v17.m_nLine = 428;
        LoggingSystem_Log(
          LOG_GENERAL,
          LoggingSeverity_t::LS_ERROR,
          &v17,
          "Path_AddToTail failed for read only CFieldPath");
      }
      goto LABEL_13;
    }
    v11 = v2->m_nCount;
    if ( v11 <= 5 )
      break;
    v2 = &LOG_GENERAL;
    if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
    {
      v17.m_szFile = "../public/tier2/fieldpath.h";
      v17.m_szFunction = "Path_AddToTail";
      v17.m_nLine = 425;
      LoggingSystem_Log(
        LOG_GENERAL,
        LoggingSeverity_t::LS_ERROR,
        &v17,
        "Path_AddToTail failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)",
        6);
    }
LABEL_13:
    if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v14, v15, v12, v13) != 0 )
      loc_0 = -559038737;
    m_nDataBits = Plat_ExitProcess(1);
LABEL_16:
    pReadBuf->m_iCurBit = m_nDataBits;
    bf_read::SetOverflowFlag(pReadBuf);
  }
  v2->m_nCount = v11 + 1;
  v2->u.m_FixedPaths[v11].m_nValue = i;
}


// FieldOp_Read_PushTwoLeftDeltaZero  (line 887, @0x000000000311c7b0, libserver.so)  // inlines: CFieldPath_ReadUBitVar, GetNumBitsLeft, IsUsingFixedPaths, LeafCodeInfo_t, LoadLittleDWord, Path_AddToTail, Push, ReadOneBit, ReadOneBitNoCheck, ReadUBitLong
// calls: LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, bf_read::SetOverflowFlag, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...)
// strings: "../public/tier2/fieldpath.h", "Path_AddToTail", "Path_AddToTail failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)", "Path_AddToTail failed for read only CFieldPath"
void __fastcall FieldOp_Read_PushTwoLeftDeltaZero(CFieldPath *const from, bf_read *pReadBuf)
{
  int i; // r13d
  int m_nDataBits; // ecx
  int m_iCurBit; // eax
  const unsigned __int8 *m_pData; // rsi
  int v8; // edi
  signed int v9; // edx
  __int64 m_nCount; // rdx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // r8
  __int64 v16; // r9
  const unsigned __int8 *v17; // rdi
  signed int v18; // esi
  int v19; // eax
  const unsigned __int8 *v20; // rdi
  signed int v21; // edx
  int v22; // eax
  const unsigned __int8 *v23; // rdi
  int v24; // esi
  int v25; // eax
  LeafCodeInfo_t v26; // [rsp+0h] [rbp-40h] BYREF

  for ( i = 2; i != 0; --i )
  {
    m_nDataBits = pReadBuf->m_nDataBits;
    m_iCurBit = pReadBuf->m_iCurBit;
    if ( m_nDataBits - m_iCurBit > 0 )
    {
      m_pData = pReadBuf->m_pData;
      v8 = *&pReadBuf->m_pData[4 * (m_iCurBit >> 5)];
      v9 = m_iCurBit + 1;
      pReadBuf->m_iCurBit = m_iCurBit + 1;
      if ( !_bittest(&v8, m_iCurBit) )
        goto LABEL_16;
      if ( m_nDataBits - v9 > 1 )
      {
        pReadBuf->m_iCurBit = m_iCurBit + 3;
        LOWORD(m_iCurBit) = ((*&m_pData[4 * (v9 >> 5)] >> (v9 & 0x1F))
                           | (*&m_pData[4 * ((m_iCurBit + 2) >> 5)] << (32 - (v9 & 0x1F))))
                          & 3;
        goto LABEL_6;
      }
LABEL_20:
      pReadBuf->m_iCurBit = m_nDataBits;
      bf_read::SetOverflowFlag(pReadBuf);
      LOWORD(m_iCurBit) = 0;
      goto LABEL_6;
    }
    while ( 1 )
    {
      bf_read::SetOverflowFlag(pReadBuf);
      m_nDataBits = pReadBuf->m_nDataBits;
      v9 = pReadBuf->m_iCurBit;
LABEL_16:
      if ( m_nDataBits - v9 <= 0 )
      {
        bf_read::SetOverflowFlag(pReadBuf);
        m_nDataBits = pReadBuf->m_nDataBits;
        v18 = pReadBuf->m_iCurBit;
      }
      else
      {
        v17 = pReadBuf->m_pData;
        v18 = v9 + 1;
        v19 = *&pReadBuf->m_pData[4 * (v9 >> 5)];
        pReadBuf->m_iCurBit = v9 + 1;
        if ( _bittest(&v19, v9) )
        {
          if ( m_nDataBits - v18 <= 3 )
            goto LABEL_20;
          pReadBuf->m_iCurBit = v9 + 5;
          LOWORD(m_iCurBit) = ((*&v17[4 * (v18 >> 5)] >> (v18 & 0x1F))
                             | (*&v17[4 * ((v9 + 4) >> 5)] << (32 - (v18 & 0x1F))))
                            & 0xF;
          goto LABEL_6;
        }
      }
      if ( m_nDataBits - v18 <= 0 )
      {
        bf_read::SetOverflowFlag(pReadBuf);
        m_nDataBits = pReadBuf->m_nDataBits;
        v21 = pReadBuf->m_iCurBit;
      }
      else
      {
        v20 = pReadBuf->m_pData;
        v21 = v18 + 1;
        v22 = *&pReadBuf->m_pData[4 * (v18 >> 5)];
        pReadBuf->m_iCurBit = v18 + 1;
        if ( _bittest(&v22, v18) )
        {
          if ( m_nDataBits - v21 <= 9 )
            goto LABEL_20;
          pReadBuf->m_iCurBit = v18 + 11;
          LOWORD(m_iCurBit) = ((*&v20[4 * (v21 >> 5)] >> (v21 & 0x1F))
                             | (*&v20[4 * ((v18 + 10) >> 5)] << (32 - (v21 & 0x1F))))
                            & 0x3FF;
          goto LABEL_6;
        }
      }
      if ( m_nDataBits - v21 <= 0 )
      {
        bf_read::SetOverflowFlag(pReadBuf);
        m_nDataBits = pReadBuf->m_nDataBits;
        v24 = pReadBuf->m_iCurBit;
      }
      else
      {
        v23 = pReadBuf->m_pData;
        v24 = v21 + 1;
        v25 = *&pReadBuf->m_pData[4 * (v21 >> 5)];
        pReadBuf->m_iCurBit = v21 + 1;
        if ( _bittest(&v25, v21) )
        {
          if ( m_nDataBits - v24 <= 16 )
            goto LABEL_20;
          pReadBuf->m_iCurBit = v21 + 18;
          m_iCurBit = (*&v23[4 * ((v21 + 17) >> 5)] << (32 - (v24 & 0x1F))) | (*&v23[4 * (v24 >> 5)] >> (v24 & 0x1F));
          goto LABEL_6;
        }
      }
      if ( m_nDataBits - v24 <= 30 )
        goto LABEL_20;
      pReadBuf->m_iCurBit = v24 + 31;
      m_iCurBit = (*&pReadBuf->m_pData[4 * ((v24 + 30) >> 5)] << (32 - (v24 & 0x1F)))
                | (*&pReadBuf->m_pData[4 * (v24 >> 5)] >> (v24 & 0x1F));
LABEL_6:
      if ( !from->m_bUsingExternalPaths )
        break;
      pReadBuf = &LOG_GENERAL;
      if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
      {
        v26.m_szFile = "../public/tier2/fieldpath.h";
        v26.m_szFunction = "Path_AddToTail";
        v26.m_nLine = 428;
        LoggingSystem_Log(
          LOG_GENERAL,
          LoggingSeverity_t::LS_ERROR,
          &v26,
          "Path_AddToTail failed for read only CFieldPath",
          v15,
          v16);
      }
LABEL_12:
      if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v13, v14, v11, v12) != 0 )
        loc_0 = -559038737;
      Plat_ExitProcess(1);
    }
    m_nCount = from->m_nCount;
    if ( m_nCount > 5 )
    {
      pReadBuf = &LOG_GENERAL;
      if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
      {
        v26.m_szFile = "../public/tier2/fieldpath.h";
        v26.m_szFunction = "Path_AddToTail";
        v26.m_nLine = 425;
        LoggingSystem_Log(
          LOG_GENERAL,
          LoggingSeverity_t::LS_ERROR,
          &v26,
          "Path_AddToTail failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)",
          6);
      }
      goto LABEL_12;
    }
    from->m_nCount = m_nCount + 1;
    from->u.m_FixedPaths[m_nCount].m_nValue = m_iCurBit;
  }
}


// FieldOp_Read_PushTwoLeftDeltaOne  (line 896, @0x000000000311e2d0, libserver.so)  // inlines: CFieldPath_ReadUBitVar, GetNumBitsLeft, GetPathData, IsUsingFixedPaths, LeafCodeInfo_t, LoadLittleDWord, Path_AddToTail, Push, ReadOneBit, ReadOneBitNoCheck, ReadUBitLong, Set, operator[]
// calls: LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, bf_read::SetOverflowFlag, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...)
// strings: "../public/tier2/fieldpath.h", "GetPathData", "GetPathData failed for read only CFieldPath", "Path_AddToTail", "Path_AddToTail failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)", "Path_AddToTail failed for read only CFieldPath"
void __fastcall FieldOp_Read_PushTwoLeftDeltaOne(CFieldPath *const from, bf_read *pReadBuf)
{
  int v2; // r13d
  char v3; // r14
  int m_nDataBits; // ecx
  int m_iCurBit; // eax
  const unsigned __int8 *m_pData; // rsi
  int v9; // edi
  signed int v10; // edx
  __int64 m_nCount; // rdx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // r8
  __int64 v17; // r9
  const unsigned __int8 *v18; // rdi
  signed int v19; // esi
  int v20; // eax
  __int64 v21; // r8
  __int64 v22; // r9
  const unsigned __int8 *v23; // rdi
  signed int v24; // edx
  int v25; // eax
  const unsigned __int8 *v26; // rdi
  int v27; // esi
  int v28; // eax
  LeafCodeInfo_t v29; // [rsp+0h] [rbp-40h] BYREF

  if ( from->m_bUsingExternalPaths )
  {
    pReadBuf = &LOG_GENERAL;
    if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
    {
      v29.m_szFile = "../public/tier2/fieldpath.h";
      v29.m_szFunction = "GetPathData";
      v29.m_nLine = 514;
      LoggingSystem_Log(
        LOG_GENERAL,
        LoggingSeverity_t::LS_ERROR,
        &v29,
        "GetPathData failed for read only CFieldPath",
        v21,
        v22);
    }
    goto LABEL_13;
  }
  v2 = 2;
  v3 = 32;
  ++from->u.m_FixedPaths[from->m_nCount - 1].m_nValue;
  do
  {
    m_nDataBits = pReadBuf->m_nDataBits;
    m_iCurBit = pReadBuf->m_iCurBit;
    if ( m_nDataBits - m_iCurBit > 0 )
    {
      m_pData = pReadBuf->m_pData;
      v9 = *&pReadBuf->m_pData[4 * (m_iCurBit >> 5)];
      v10 = m_iCurBit + 1;
      pReadBuf->m_iCurBit = m_iCurBit + 1;
      if ( !_bittest(&v9, m_iCurBit) )
        goto LABEL_17;
      if ( m_nDataBits - v10 > 1 )
      {
        pReadBuf->m_iCurBit = m_iCurBit + 3;
        LOWORD(m_iCurBit) = ((*&m_pData[4 * (v10 >> 5)] >> (v10 & 0x1F))
                           | (*&m_pData[4 * ((m_iCurBit + 2) >> 5)] << (v3 - (v10 & 0x1F))))
                          & 3;
        goto LABEL_7;
      }
LABEL_23:
      pReadBuf->m_iCurBit = m_nDataBits;
      bf_read::SetOverflowFlag(pReadBuf);
      LOWORD(m_iCurBit) = 0;
      goto LABEL_7;
    }
    while ( 1 )
    {
      bf_read::SetOverflowFlag(pReadBuf);
      m_nDataBits = pReadBuf->m_nDataBits;
      v10 = pReadBuf->m_iCurBit;
LABEL_17:
      if ( m_nDataBits - v10 <= 0 )
      {
        bf_read::SetOverflowFlag(pReadBuf);
        m_nDataBits = pReadBuf->m_nDataBits;
        v19 = pReadBuf->m_iCurBit;
      }
      else
      {
        v18 = pReadBuf->m_pData;
        v19 = v10 + 1;
        v20 = *&pReadBuf->m_pData[4 * (v10 >> 5)];
        pReadBuf->m_iCurBit = v10 + 1;
        if ( _bittest(&v20, v10) )
        {
          if ( m_nDataBits - v19 <= 3 )
            goto LABEL_23;
          pReadBuf->m_iCurBit = v10 + 5;
          LOWORD(m_iCurBit) = ((*&v18[4 * (v19 >> 5)] >> (v19 & 0x1F))
                             | (*&v18[4 * ((v10 + 4) >> 5)] << (v3 - (v19 & 0x1F))))
                            & 0xF;
          goto LABEL_7;
        }
      }
      if ( m_nDataBits - v19 <= 0 )
      {
        bf_read::SetOverflowFlag(pReadBuf);
        m_nDataBits = pReadBuf->m_nDataBits;
        v24 = pReadBuf->m_iCurBit;
      }
      else
      {
        v23 = pReadBuf->m_pData;
        v24 = v19 + 1;
        v25 = *&pReadBuf->m_pData[4 * (v19 >> 5)];
        pReadBuf->m_iCurBit = v19 + 1;
        if ( _bittest(&v25, v19) )
        {
          if ( m_nDataBits - v24 <= 9 )
            goto LABEL_23;
          pReadBuf->m_iCurBit = v19 + 11;
          LOWORD(m_iCurBit) = ((*&v23[4 * (v24 >> 5)] >> (v24 & 0x1F))
                             | (*&v23[4 * ((v19 + 10) >> 5)] << (v3 - (v24 & 0x1F))))
                            & 0x3FF;
          goto LABEL_7;
        }
      }
      if ( m_nDataBits - v24 <= 0 )
      {
        bf_read::SetOverflowFlag(pReadBuf);
        m_nDataBits = pReadBuf->m_nDataBits;
        v27 = pReadBuf->m_iCurBit;
      }
      else
      {
        v26 = pReadBuf->m_pData;
        v27 = v24 + 1;
        v28 = *&pReadBuf->m_pData[4 * (v24 >> 5)];
        pReadBuf->m_iCurBit = v24 + 1;
        if ( _bittest(&v28, v24) )
        {
          if ( m_nDataBits - v27 <= 16 )
            goto LABEL_23;
          pReadBuf->m_iCurBit = v24 + 18;
          m_iCurBit = (*&v26[4 * ((v24 + 17) >> 5)] << (v3 - (v27 & 0x1F))) | (*&v26[4 * (v27 >> 5)] >> (v27 & 0x1F));
          goto LABEL_7;
        }
      }
      if ( m_nDataBits - v27 <= 30 )
        goto LABEL_23;
      pReadBuf->m_iCurBit = v27 + 31;
      m_iCurBit = (*&pReadBuf->m_pData[4 * ((v27 + 30) >> 5)] << (v3 - (v27 & 0x1F)))
                | (*&pReadBuf->m_pData[4 * (v27 >> 5)] >> (v27 & 0x1F));
LABEL_7:
      if ( !from->m_bUsingExternalPaths )
        break;
      pReadBuf = &LOG_GENERAL;
      if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
      {
        v29.m_szFile = "../public/tier2/fieldpath.h";
        v29.m_szFunction = "Path_AddToTail";
        v29.m_nLine = 428;
        LoggingSystem_Log(
          LOG_GENERAL,
          LoggingSeverity_t::LS_ERROR,
          &v29,
          "Path_AddToTail failed for read only CFieldPath",
          v16,
          v17);
      }
LABEL_13:
      if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v14, v15, v12, v13) != 0 )
        loc_0 = -559038737;
      Plat_ExitProcess(1);
    }
    m_nCount = from->m_nCount;
    if ( m_nCount > 5 )
    {
      pReadBuf = &LOG_GENERAL;
      if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
      {
        v29.m_szFile = "../public/tier2/fieldpath.h";
        v29.m_szFunction = "Path_AddToTail";
        v29.m_nLine = 425;
        LoggingSystem_Log(
          LOG_GENERAL,
          LoggingSeverity_t::LS_ERROR,
          &v29,
          "Path_AddToTail failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)",
          6);
      }
      goto LABEL_13;
    }
    --v2;
    from->m_nCount = m_nCount + 1;
    from->u.m_FixedPaths[m_nCount].m_nValue = m_iCurBit;
  }
  while ( v2 != 0 );
}


// FieldOp_Read_PushTwoLeftDeltaN  (line 909, @0x0000000003124af0, libserver.so)  // inlines: CFieldPath_ReadUBitVar, GetNumBitsLeft, GetPathData, IsUsingFixedPaths, LeafCodeInfo_t, LoadLittleDWord, Path_AddToTail, Push, ReadOneBit, ReadOneBitNoCheck, ReadUBitLong, ReadUBitVar, Set, operator[]
// calls: bf_read::ReadUBitVarInternal, LoggingSystem_IsChannelEnabled, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...), Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, bf_read::SetOverflowFlag, bf_read::ReadOneBit
// strings: "../public/tier2/fieldpath.h", "GetPathData", "GetPathData failed for read only CFieldPath", "Path_AddToTail", "Path_AddToTail failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)", "Path_AddToTail failed for read only CFieldPath"
void __fastcall FieldOp_Read_PushTwoLeftDeltaN(CFieldPath *const from, bf_read *pReadBuf)
{
  char v2; // r14
  bf_read *v4; // rbx
  int m_iCurBit; // eax
  int m_nCount; // r13d
  const unsigned __int8 *m_pData; // r8
  int v8; // esi
  __int16 v9; // ax
  int m_nDataBits; // ecx
  int v11; // eax
  const unsigned __int8 *v12; // rsi
  int v13; // edi
  signed int v14; // edx
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdi
  __int64 v19; // rsi
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // r8
  __int64 v23; // r9
  const unsigned __int8 *v24; // rdi
  signed int v25; // esi
  int v26; // eax
  const unsigned __int8 *v27; // rdi
  int v28; // edx
  int v29; // eax
  int OneBit; // eax
  int v31; // edx
  int v32; // ecx
  const unsigned __int8 *v33; // rax
  char v34; // di
  int v35; // esi
  LeafCodeInfo_t v36; // [rsp+0h] [rbp-40h] BYREF

  v4 = pReadBuf;
  m_iCurBit = pReadBuf->m_iCurBit;
  m_nCount = from->m_nCount;
  if ( pReadBuf->m_nDataBits - m_iCurBit <= 5 )
  {
    pReadBuf->m_iCurBit = pReadBuf->m_nDataBits;
    bf_read::SetOverflowFlag(pReadBuf);
    v9 = 2;
  }
  else
  {
    m_pData = pReadBuf->m_pData;
    pReadBuf->m_iCurBit = m_iCurBit + 6;
    v8 = ((*&m_pData[4 * (m_iCurBit >> 5)] >> (m_iCurBit & 0x1F))
        | (*&m_pData[4 * ((m_iCurBit + 5) >> 5)] << (32 - (m_iCurBit & 0x1F))))
       & 0x3F;
    if ( (((*&m_pData[4 * (m_iCurBit >> 5)] >> (m_iCurBit & 0x1F))
         | (*&m_pData[4 * ((m_iCurBit + 5) >> 5)] << (32 - (m_iCurBit & 0x1F))))
        & 0x30) != 0 )
    {
      v9 = bf_read::ReadUBitVarInternal(v4, v8) + 2;
      if ( !from->m_bUsingExternalPaths )
        goto LABEL_5;
LABEL_15:
      v4 = &LOG_GENERAL;
      if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
      {
        v36.m_szFile = "../public/tier2/fieldpath.h";
        v36.m_szFunction = "GetPathData";
        v36.m_nLine = 514;
        LoggingSystem_Log(
          LOG_GENERAL,
          LoggingSeverity_t::LS_ERROR,
          &v36,
          "GetPathData failed for read only CFieldPath",
          v20,
          v21);
      }
      goto LABEL_19;
    }
    v9 = v8 + 2;
  }
  if ( from->m_bUsingExternalPaths )
    goto LABEL_15;
LABEL_5:
  v2 = 32;
  from->u.m_FixedPaths[m_nCount - 1].m_nValue += v9;
  for ( m_nCount = 2; m_nCount != 0; --m_nCount )
  {
    m_nDataBits = v4->m_nDataBits;
    v11 = v4->m_iCurBit;
    if ( m_nDataBits - v11 > 0 )
    {
      v12 = v4->m_pData;
      v13 = *&v4->m_pData[4 * (v11 >> 5)];
      v14 = v11 + 1;
      v4->m_iCurBit = v11 + 1;
      if ( !_bittest(&v13, v11) )
        goto LABEL_23;
      if ( m_nDataBits - v14 > 1 )
      {
        v4->m_iCurBit = v11 + 3;
        LOWORD(v11) = ((*&v12[4 * (v14 >> 5)] >> (v14 & 0x1F)) | (*&v12[4 * ((v11 + 2) >> 5)] << (v2 - (v14 & 0x1F))))
                    & 3;
        goto LABEL_10;
      }
LABEL_27:
      v4->m_iCurBit = m_nDataBits;
      bf_read::SetOverflowFlag(v4);
      LOWORD(v11) = 0;
      goto LABEL_10;
    }
    while ( 1 )
    {
      bf_read::SetOverflowFlag(v4);
      m_nDataBits = v4->m_nDataBits;
      v14 = v4->m_iCurBit;
LABEL_23:
      if ( m_nDataBits - v14 <= 0 )
      {
        bf_read::SetOverflowFlag(v4);
        m_nDataBits = v4->m_nDataBits;
        v25 = v4->m_iCurBit;
      }
      else
      {
        v24 = v4->m_pData;
        v25 = v14 + 1;
        v26 = *&v4->m_pData[4 * (v14 >> 5)];
        v4->m_iCurBit = v14 + 1;
        if ( _bittest(&v26, v14) )
        {
          if ( m_nDataBits - v25 <= 3 )
            goto LABEL_27;
          v4->m_iCurBit = v14 + 5;
          LOWORD(v11) = ((*&v24[4 * (v25 >> 5)] >> (v25 & 0x1F)) | (*&v24[4 * ((v14 + 4) >> 5)] << (v2 - (v25 & 0x1F))))
                      & 0xF;
          goto LABEL_10;
        }
      }
      if ( m_nDataBits - v25 <= 0 )
      {
        bf_read::SetOverflowFlag(v4);
      }
      else
      {
        v27 = v4->m_pData;
        v28 = v25 + 1;
        v29 = *&v4->m_pData[4 * (v25 >> 5)];
        v4->m_iCurBit = v25 + 1;
        if ( _bittest(&v29, v25) )
        {
          if ( m_nDataBits - v28 <= 9 )
            goto LABEL_27;
          v4->m_iCurBit = v25 + 11;
          LOWORD(v11) = ((*&v27[4 * (v28 >> 5)] >> (v28 & 0x1F)) | (*&v27[4 * ((v25 + 10) >> 5)] << (v2 - (v28 & 0x1F))))
                      & 0x3FF;
          goto LABEL_10;
        }
      }
      OneBit = bf_read::ReadOneBit(v4);
      v31 = v4->m_iCurBit;
      v32 = v4->m_nDataBits;
      if ( OneBit != 0 )
      {
        if ( v32 - v31 > 16 )
        {
          v4->m_iCurBit = v31 + 17;
          v33 = v4->m_pData;
          v34 = v31 & 0x1F;
          v35 = v31 + 16;
LABEL_38:
          v11 = (*&v33[4 * (v35 >> 5)] << (v2 - v34)) | (*&v33[4 * (v31 >> 5)] >> v34);
          goto LABEL_10;
        }
      }
      else if ( v32 - v31 > 30 )
      {
        v4->m_iCurBit = v31 + 31;
        v34 = v31 & 0x1F;
        v33 = v4->m_pData;
        v35 = v31 + 30;
        goto LABEL_38;
      }
      v4->m_iCurBit = v4->m_nDataBits;
      bf_read::SetOverflowFlag(v4);
      LOWORD(v11) = 0;
LABEL_10:
      if ( !from->m_bUsingExternalPaths )
        break;
      v4 = &LOG_GENERAL;
      if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
      {
        v36.m_szFile = "../public/tier2/fieldpath.h";
        v36.m_szFunction = "Path_AddToTail";
        v36.m_nLine = 428;
        LoggingSystem_Log(
          LOG_GENERAL,
          LoggingSeverity_t::LS_ERROR,
          &v36,
          "Path_AddToTail failed for read only CFieldPath",
          v22,
          v23);
      }
LABEL_19:
      if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v18, v19, v16, v17) != 0 )
        loc_0 = -559038737;
      Plat_ExitProcess(1);
    }
    v15 = from->m_nCount;
    if ( v15 > 5 )
    {
      v4 = &LOG_GENERAL;
      if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
      {
        v36.m_szFile = "../public/tier2/fieldpath.h";
        v36.m_szFunction = "Path_AddToTail";
        v36.m_nLine = 425;
        LoggingSystem_Log(
          LOG_GENERAL,
          LoggingSeverity_t::LS_ERROR,
          &v36,
          "Path_AddToTail failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)",
          6);
      }
      goto LABEL_19;
    }
    from->m_nCount = v15 + 1;
    from->u.m_FixedPaths[v15].m_nValue = v11;
  }
}


// FieldOp_Read_PushTwoPack5LeftDeltaZero  (line 924, @0x0000000003117aa0, libserver.so)  // inlines: GetNumBitsLeft, IsUsingFixedPaths, LeafCodeInfo_t, LoadLittleDWord, Path_AddToTail, Push, ReadUBitLong
// calls: LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, bf_read::SetOverflowFlag, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...)
// strings: "../public/tier2/fieldpath.h", "Path_AddToTail", "Path_AddToTail failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)", "Path_AddToTail failed for read only CFieldPath"
void __fastcall FieldOp_Read_PushTwoPack5LeftDeltaZero(CFieldPath *const from, bf_read *pReadBuf)
{
  int i; // r13d
  int m_nDataBits; // edx
  int m_iCurBit; // eax
  const unsigned __int8 *m_pData; // rdi
  int16 v8; // dx
  __int64 m_nCount; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // r8
  __int64 v15; // r9
  LeafCodeInfo_t v16; // [rsp+0h] [rbp-40h] BYREF

  for ( i = 2; i != 0; --i )
  {
    m_nDataBits = pReadBuf->m_nDataBits;
    m_iCurBit = pReadBuf->m_iCurBit;
    if ( m_nDataBits - m_iCurBit > 4 )
    {
      m_pData = pReadBuf->m_pData;
      pReadBuf->m_iCurBit = m_iCurBit + 5;
      v8 = ((*&m_pData[4 * (m_iCurBit >> 5)] >> (m_iCurBit & 0x1F))
          | (*&m_pData[4 * ((m_iCurBit + 4) >> 5)] << (32 - (m_iCurBit & 0x1F))))
         & 0x1F;
      goto LABEL_4;
    }
    while ( 1 )
    {
      pReadBuf->m_iCurBit = m_nDataBits;
      bf_read::SetOverflowFlag(pReadBuf);
      v8 = 0;
LABEL_4:
      if ( !from->m_bUsingExternalPaths )
        break;
      pReadBuf = &LOG_GENERAL;
      if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
      {
        v16.m_szFile = "../public/tier2/fieldpath.h";
        v16.m_szFunction = "Path_AddToTail";
        v16.m_nLine = 428;
        LoggingSystem_Log(
          LOG_GENERAL,
          LoggingSeverity_t::LS_ERROR,
          &v16,
          "Path_AddToTail failed for read only CFieldPath",
          v14,
          v15);
      }
LABEL_10:
      if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v12, v13, v10, v11) != 0 )
        loc_0 = -559038737;
      Plat_ExitProcess(1);
    }
    m_nCount = from->m_nCount;
    if ( m_nCount > 5 )
    {
      pReadBuf = &LOG_GENERAL;
      if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
      {
        v16.m_szFile = "../public/tier2/fieldpath.h";
        v16.m_szFunction = "Path_AddToTail";
        v16.m_nLine = 425;
        LoggingSystem_Log(
          LOG_GENERAL,
          LoggingSeverity_t::LS_ERROR,
          &v16,
          "Path_AddToTail failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)",
          6);
      }
      goto LABEL_10;
    }
    from->m_nCount = m_nCount + 1;
    from->u.m_FixedPaths[m_nCount].m_nValue = v8;
  }
}


// FieldOp_Read_PushTwoPack5LeftDeltaOne  (line 933, @0x0000000003119f60, libserver.so)  // inlines: GetNumBitsLeft, GetPathData, IsUsingFixedPaths, LeafCodeInfo_t, LoadLittleDWord, Path_AddToTail, Push, ReadUBitLong, Set, operator[]
// calls: LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, bf_read::SetOverflowFlag, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...)
// strings: "../public/tier2/fieldpath.h", "GetPathData", "GetPathData failed for read only CFieldPath", "Path_AddToTail", "Path_AddToTail failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)", "Path_AddToTail failed for read only CFieldPath"
void __fastcall FieldOp_Read_PushTwoPack5LeftDeltaOne(CFieldPath *const from, bf_read *pReadBuf)
{
  bf_read *v2; // r12
  int v3; // r13d
  char v4; // r14
  CFieldPath *v5; // rbx
  int m_nDataBits; // edx
  int m_iCurBit; // eax
  const unsigned __int8 *m_pData; // rdi
  int16 v9; // dx
  __int64 m_nCount; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // r8
  __int64 v18; // r9
  LeafCodeInfo_t v19; // [rsp+0h] [rbp-40h] BYREF

  v5 = from;
  if ( from->m_bUsingExternalPaths )
  {
    v5 = &LOG_GENERAL;
    if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
    {
      v19.m_szFile = "../public/tier2/fieldpath.h";
      v19.m_szFunction = "GetPathData";
      v19.m_nLine = 514;
      LoggingSystem_Log(
        LOG_GENERAL,
        LoggingSeverity_t::LS_ERROR,
        &v19,
        "GetPathData failed for read only CFieldPath",
        v17,
        v18);
    }
    goto LABEL_11;
  }
  v2 = pReadBuf;
  v3 = 2;
  v4 = 32;
  ++from->u.m_FixedPaths[from->m_nCount - 1].m_nValue;
  do
  {
    m_nDataBits = v2->m_nDataBits;
    m_iCurBit = v2->m_iCurBit;
    if ( m_nDataBits - m_iCurBit > 4 )
    {
      m_pData = v2->m_pData;
      v2->m_iCurBit = m_iCurBit + 5;
      v9 = ((*&m_pData[4 * (m_iCurBit >> 5)] >> (m_iCurBit & 0x1F))
          | (*&m_pData[4 * ((m_iCurBit + 4) >> 5)] << (v4 - (m_iCurBit & 0x1F))))
         & 0x1F;
      goto LABEL_5;
    }
    while ( 1 )
    {
      v2->m_iCurBit = m_nDataBits;
      bf_read::SetOverflowFlag(v2);
      v9 = 0;
LABEL_5:
      if ( !v5->m_bUsingExternalPaths )
        break;
      v5 = &LOG_GENERAL;
      if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
      {
        v19.m_szFile = "../public/tier2/fieldpath.h";
        v19.m_szFunction = "Path_AddToTail";
        v19.m_nLine = 428;
        LoggingSystem_Log(
          LOG_GENERAL,
          LoggingSeverity_t::LS_ERROR,
          &v19,
          "Path_AddToTail failed for read only CFieldPath",
          v15,
          v16);
      }
LABEL_11:
      if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v13, v14, v11, v12) != 0 )
        loc_0 = -559038737;
      Plat_ExitProcess(1);
    }
    m_nCount = v5->m_nCount;
    if ( m_nCount > 5 )
    {
      v5 = &LOG_GENERAL;
      if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
      {
        v19.m_szFile = "../public/tier2/fieldpath.h";
        v19.m_szFunction = "Path_AddToTail";
        v19.m_nLine = 425;
        LoggingSystem_Log(
          LOG_GENERAL,
          LoggingSeverity_t::LS_ERROR,
          &v19,
          "Path_AddToTail failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)",
          6);
      }
      goto LABEL_11;
    }
    --v3;
    v5->m_nCount = m_nCount + 1;
    v5->u.m_FixedPaths[m_nCount].m_nValue = v9;
  }
  while ( v3 != 0 );
}


// FieldOp_Read_PushTwoPack5LeftDeltaN  (line 945, @0x000000000311a160, libserver.so)  // inlines: GetNumBitsLeft, GetPathData, IsUsingFixedPaths, LeafCodeInfo_t, LoadLittleDWord, Path_AddToTail, Push, ReadUBitLong, ReadUBitVar, Set, operator[]
// calls: bf_read::ReadUBitVarInternal, LoggingSystem_IsChannelEnabled, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...), Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, bf_read::SetOverflowFlag
// strings: "../public/tier2/fieldpath.h", "GetPathData", "GetPathData failed for read only CFieldPath", "Path_AddToTail", "Path_AddToTail failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)", "Path_AddToTail failed for read only CFieldPath"
void __fastcall FieldOp_Read_PushTwoPack5LeftDeltaN(CFieldPath *const from, bf_read *pReadBuf)
{
  char v2; // r14
  bf_read *v4; // rbx
  int m_iCurBit; // eax
  int m_nCount; // r13d
  const unsigned __int8 *m_pData; // r8
  int v8; // esi
  __int16 v9; // ax
  int m_nDataBits; // edx
  int v11; // eax
  const unsigned __int8 *v12; // rdi
  int16 v13; // dx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdi
  __int64 v18; // rsi
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // r8
  __int64 v22; // r9
  LeafCodeInfo_t v23; // [rsp+0h] [rbp-40h] BYREF

  v4 = pReadBuf;
  m_iCurBit = pReadBuf->m_iCurBit;
  m_nCount = from->m_nCount;
  if ( pReadBuf->m_nDataBits - m_iCurBit <= 5 )
  {
    pReadBuf->m_iCurBit = pReadBuf->m_nDataBits;
    bf_read::SetOverflowFlag(pReadBuf);
    v9 = 2;
  }
  else
  {
    m_pData = pReadBuf->m_pData;
    pReadBuf->m_iCurBit = m_iCurBit + 6;
    v8 = ((*&m_pData[4 * (m_iCurBit >> 5)] >> (m_iCurBit & 0x1F))
        | (*&m_pData[4 * ((m_iCurBit + 5) >> 5)] << (32 - (m_iCurBit & 0x1F))))
       & 0x3F;
    if ( (((*&m_pData[4 * (m_iCurBit >> 5)] >> (m_iCurBit & 0x1F))
         | (*&m_pData[4 * ((m_iCurBit + 5) >> 5)] << (32 - (m_iCurBit & 0x1F))))
        & 0x30) != 0 )
    {
      v9 = bf_read::ReadUBitVarInternal(v4, v8) + 2;
      if ( !from->m_bUsingExternalPaths )
        goto LABEL_5;
LABEL_13:
      v4 = &LOG_GENERAL;
      if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
      {
        v23.m_szFile = "../public/tier2/fieldpath.h";
        v23.m_szFunction = "GetPathData";
        v23.m_nLine = 514;
        LoggingSystem_Log(
          LOG_GENERAL,
          LoggingSeverity_t::LS_ERROR,
          &v23,
          "GetPathData failed for read only CFieldPath",
          v19,
          v20);
      }
      goto LABEL_17;
    }
    v9 = v8 + 2;
  }
  if ( from->m_bUsingExternalPaths )
    goto LABEL_13;
LABEL_5:
  v2 = 32;
  from->u.m_FixedPaths[m_nCount - 1].m_nValue += v9;
  for ( m_nCount = 2; m_nCount != 0; --m_nCount )
  {
    m_nDataBits = v4->m_nDataBits;
    v11 = v4->m_iCurBit;
    if ( m_nDataBits - v11 > 4 )
    {
      v12 = v4->m_pData;
      v4->m_iCurBit = v11 + 5;
      v13 = ((*&v12[4 * (v11 >> 5)] >> (v11 & 0x1F)) | (*&v12[4 * ((v11 + 4) >> 5)] << (v2 - (v11 & 0x1F)))) & 0x1F;
      goto LABEL_8;
    }
    while ( 1 )
    {
      v4->m_iCurBit = m_nDataBits;
      bf_read::SetOverflowFlag(v4);
      v13 = 0;
LABEL_8:
      if ( !from->m_bUsingExternalPaths )
        break;
      v4 = &LOG_GENERAL;
      if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
      {
        v23.m_szFile = "../public/tier2/fieldpath.h";
        v23.m_szFunction = "Path_AddToTail";
        v23.m_nLine = 428;
        LoggingSystem_Log(
          LOG_GENERAL,
          LoggingSeverity_t::LS_ERROR,
          &v23,
          "Path_AddToTail failed for read only CFieldPath",
          v21,
          v22);
      }
LABEL_17:
      if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v17, v18, v15, v16) != 0 )
        loc_0 = -559038737;
      Plat_ExitProcess(1);
    }
    v14 = from->m_nCount;
    if ( v14 > 5 )
    {
      v4 = &LOG_GENERAL;
      if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
      {
        v23.m_szFile = "../public/tier2/fieldpath.h";
        v23.m_szFunction = "Path_AddToTail";
        v23.m_nLine = 425;
        LoggingSystem_Log(
          LOG_GENERAL,
          LoggingSeverity_t::LS_ERROR,
          &v23,
          "Path_AddToTail failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)",
          6);
      }
      goto LABEL_17;
    }
    from->m_nCount = v14 + 1;
    from->u.m_FixedPaths[v14].m_nValue = v13;
  }
}


// FieldOp_Read_PushThreeLeftDeltaZero  (line 959, @0x0000000003123720, libserver.so)  // inlines: CFieldPath_ReadUBitVar, GetNumBitsLeft, IsUsingFixedPaths, LeafCodeInfo_t, LoadLittleDWord, Path_AddToTail, Push, ReadOneBit, ReadOneBitNoCheck, ReadUBitLong
// calls: LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, bf_read::SetOverflowFlag, bf_read::ReadOneBit, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...)
// strings: "../public/tier2/fieldpath.h", "Path_AddToTail", "Path_AddToTail failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)", "Path_AddToTail failed for read only CFieldPath"
void __fastcall FieldOp_Read_PushThreeLeftDeltaZero(CFieldPath *const from, bf_read *pReadBuf)
{
  int i; // r13d
  int m_nDataBits; // ecx
  int m_iCurBit; // eax
  const unsigned __int8 *m_pData; // rsi
  int v8; // edi
  signed int v9; // edx
  __int64 m_nCount; // rdx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // r8
  __int64 v16; // r9
  const unsigned __int8 *v17; // rdi
  signed int v18; // esi
  int v19; // eax
  const unsigned __int8 *v20; // rdi
  int v21; // edx
  int v22; // eax
  int OneBit; // eax
  int v24; // edx
  int v25; // ecx
  const unsigned __int8 *v26; // rax
  char v27; // di
  int v28; // esi
  LeafCodeInfo_t v29; // [rsp+0h] [rbp-40h] BYREF

  for ( i = 3; i != 0; --i )
  {
    m_nDataBits = pReadBuf->m_nDataBits;
    m_iCurBit = pReadBuf->m_iCurBit;
    if ( m_nDataBits - m_iCurBit > 0 )
    {
      m_pData = pReadBuf->m_pData;
      v8 = *&pReadBuf->m_pData[4 * (m_iCurBit >> 5)];
      v9 = m_iCurBit + 1;
      pReadBuf->m_iCurBit = m_iCurBit + 1;
      if ( !_bittest(&v8, m_iCurBit) )
        goto LABEL_16;
      if ( m_nDataBits - v9 > 1 )
      {
        pReadBuf->m_iCurBit = m_iCurBit + 3;
        LOWORD(m_iCurBit) = ((*&m_pData[4 * (v9 >> 5)] >> (v9 & 0x1F))
                           | (*&m_pData[4 * ((m_iCurBit + 2) >> 5)] << (32 - (v9 & 0x1F))))
                          & 3;
        goto LABEL_6;
      }
LABEL_20:
      pReadBuf->m_iCurBit = m_nDataBits;
      bf_read::SetOverflowFlag(pReadBuf);
      LOWORD(m_iCurBit) = 0;
      goto LABEL_6;
    }
    while ( 1 )
    {
      bf_read::SetOverflowFlag(pReadBuf);
      m_nDataBits = pReadBuf->m_nDataBits;
      v9 = pReadBuf->m_iCurBit;
LABEL_16:
      if ( m_nDataBits - v9 <= 0 )
      {
        bf_read::SetOverflowFlag(pReadBuf);
        m_nDataBits = pReadBuf->m_nDataBits;
        v18 = pReadBuf->m_iCurBit;
      }
      else
      {
        v17 = pReadBuf->m_pData;
        v18 = v9 + 1;
        v19 = *&pReadBuf->m_pData[4 * (v9 >> 5)];
        pReadBuf->m_iCurBit = v9 + 1;
        if ( _bittest(&v19, v9) )
        {
          if ( m_nDataBits - v18 <= 3 )
            goto LABEL_20;
          pReadBuf->m_iCurBit = v9 + 5;
          LOWORD(m_iCurBit) = ((*&v17[4 * (v18 >> 5)] >> (v18 & 0x1F))
                             | (*&v17[4 * ((v9 + 4) >> 5)] << (32 - (v18 & 0x1F))))
                            & 0xF;
          goto LABEL_6;
        }
      }
      if ( m_nDataBits - v18 <= 0 )
      {
        bf_read::SetOverflowFlag(pReadBuf);
      }
      else
      {
        v20 = pReadBuf->m_pData;
        v21 = v18 + 1;
        v22 = *&pReadBuf->m_pData[4 * (v18 >> 5)];
        pReadBuf->m_iCurBit = v18 + 1;
        if ( _bittest(&v22, v18) )
        {
          if ( m_nDataBits - v21 <= 9 )
            goto LABEL_20;
          pReadBuf->m_iCurBit = v18 + 11;
          LOWORD(m_iCurBit) = ((*&v20[4 * (v21 >> 5)] >> (v21 & 0x1F))
                             | (*&v20[4 * ((v18 + 10) >> 5)] << (32 - (v21 & 0x1F))))
                            & 0x3FF;
          goto LABEL_6;
        }
      }
      OneBit = bf_read::ReadOneBit(pReadBuf);
      v24 = pReadBuf->m_iCurBit;
      v25 = pReadBuf->m_nDataBits;
      if ( OneBit != 0 )
      {
        if ( v25 - v24 > 16 )
        {
          pReadBuf->m_iCurBit = v24 + 17;
          v27 = v24 & 0x1F;
          v26 = pReadBuf->m_pData;
          v28 = v24 + 16;
          goto LABEL_30;
        }
      }
      else if ( v25 - v24 > 30 )
      {
        pReadBuf->m_iCurBit = v24 + 31;
        v26 = pReadBuf->m_pData;
        v27 = v24 & 0x1F;
        v28 = v24 + 30;
LABEL_30:
        m_iCurBit = (*&v26[4 * (v28 >> 5)] << (32 - v27)) | (*&v26[4 * (v24 >> 5)] >> v27);
        goto LABEL_6;
      }
      pReadBuf->m_iCurBit = pReadBuf->m_nDataBits;
      bf_read::SetOverflowFlag(pReadBuf);
      LOWORD(m_iCurBit) = 0;
LABEL_6:
      if ( !from->m_bUsingExternalPaths )
        break;
      pReadBuf = &LOG_GENERAL;
      if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
      {
        v29.m_szFile = "../public/tier2/fieldpath.h";
        v29.m_szFunction = "Path_AddToTail";
        v29.m_nLine = 428;
        LoggingSystem_Log(
          LOG_GENERAL,
          LoggingSeverity_t::LS_ERROR,
          &v29,
          "Path_AddToTail failed for read only CFieldPath",
          v15,
          v16);
      }
LABEL_12:
      if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v13, v14, v11, v12) != 0 )
        loc_0 = -559038737;
      Plat_ExitProcess(1);
    }
    m_nCount = from->m_nCount;
    if ( m_nCount > 5 )
    {
      pReadBuf = &LOG_GENERAL;
      if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
      {
        v29.m_szFile = "../public/tier2/fieldpath.h";
        v29.m_szFunction = "Path_AddToTail";
        v29.m_nLine = 425;
        LoggingSystem_Log(
          LOG_GENERAL,
          LoggingSeverity_t::LS_ERROR,
          &v29,
          "Path_AddToTail failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)",
          6);
      }
      goto LABEL_12;
    }
    from->m_nCount = m_nCount + 1;
    from->u.m_FixedPaths[m_nCount].m_nValue = m_iCurBit;
  }
}


// FieldOp_Read_PushThreeLeftDeltaOne  (line 968, @0x0000000003124f10, libserver.so)  // inlines: CFieldPath_ReadUBitVar, GetNumBitsLeft, GetPathData, IsUsingFixedPaths, LeafCodeInfo_t, LoadLittleDWord, Path_AddToTail, Push, ReadOneBit, ReadOneBitNoCheck, ReadUBitLong, Set, operator[]
// calls: LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, bf_read::SetOverflowFlag, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...), bf_read::ReadOneBit
// strings: "../public/tier2/fieldpath.h", "GetPathData", "GetPathData failed for read only CFieldPath", "Path_AddToTail", "Path_AddToTail failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)", "Path_AddToTail failed for read only CFieldPath"
void __fastcall FieldOp_Read_PushThreeLeftDeltaOne(CFieldPath *const from, bf_read *pReadBuf)
{
  int v2; // r13d
  char v3; // r14
  int m_nDataBits; // ecx
  int m_iCurBit; // eax
  const unsigned __int8 *m_pData; // rsi
  int v9; // edi
  signed int v10; // edx
  __int64 m_nCount; // rdx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // r8
  __int64 v17; // r9
  const unsigned __int8 *v18; // rdi
  signed int v19; // esi
  int v20; // eax
  __int64 v21; // r8
  __int64 v22; // r9
  const unsigned __int8 *v23; // rdi
  int v24; // edx
  int v25; // eax
  int OneBit; // eax
  int v27; // edx
  int v28; // ecx
  const unsigned __int8 *v29; // rax
  char v30; // di
  int v31; // esi
  LeafCodeInfo_t v32; // [rsp+0h] [rbp-40h] BYREF

  if ( from->m_bUsingExternalPaths )
  {
    pReadBuf = &LOG_GENERAL;
    if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
    {
      v32.m_szFile = "../public/tier2/fieldpath.h";
      v32.m_szFunction = "GetPathData";
      v32.m_nLine = 514;
      LoggingSystem_Log(
        LOG_GENERAL,
        LoggingSeverity_t::LS_ERROR,
        &v32,
        "GetPathData failed for read only CFieldPath",
        v21,
        v22);
    }
    goto LABEL_13;
  }
  v2 = 3;
  v3 = 32;
  ++from->u.m_FixedPaths[from->m_nCount - 1].m_nValue;
  do
  {
    m_nDataBits = pReadBuf->m_nDataBits;
    m_iCurBit = pReadBuf->m_iCurBit;
    if ( m_nDataBits - m_iCurBit > 0 )
    {
      m_pData = pReadBuf->m_pData;
      v9 = *&pReadBuf->m_pData[4 * (m_iCurBit >> 5)];
      v10 = m_iCurBit + 1;
      pReadBuf->m_iCurBit = m_iCurBit + 1;
      if ( !_bittest(&v9, m_iCurBit) )
        goto LABEL_17;
      if ( m_nDataBits - v10 > 1 )
      {
        pReadBuf->m_iCurBit = m_iCurBit + 3;
        LOWORD(m_iCurBit) = ((*&m_pData[4 * (v10 >> 5)] >> (v10 & 0x1F))
                           | (*&m_pData[4 * ((m_iCurBit + 2) >> 5)] << (v3 - (v10 & 0x1F))))
                          & 3;
        goto LABEL_7;
      }
LABEL_21:
      pReadBuf->m_iCurBit = m_nDataBits;
      bf_read::SetOverflowFlag(pReadBuf);
      LOWORD(m_iCurBit) = 0;
      goto LABEL_7;
    }
    while ( 1 )
    {
      bf_read::SetOverflowFlag(pReadBuf);
      m_nDataBits = pReadBuf->m_nDataBits;
      v10 = pReadBuf->m_iCurBit;
LABEL_17:
      if ( m_nDataBits - v10 <= 0 )
      {
        bf_read::SetOverflowFlag(pReadBuf);
        m_nDataBits = pReadBuf->m_nDataBits;
        v19 = pReadBuf->m_iCurBit;
      }
      else
      {
        v18 = pReadBuf->m_pData;
        v19 = v10 + 1;
        v20 = *&pReadBuf->m_pData[4 * (v10 >> 5)];
        pReadBuf->m_iCurBit = v10 + 1;
        if ( _bittest(&v20, v10) )
        {
          if ( m_nDataBits - v19 <= 3 )
            goto LABEL_21;
          pReadBuf->m_iCurBit = v10 + 5;
          LOWORD(m_iCurBit) = ((*&v18[4 * (v19 >> 5)] >> (v19 & 0x1F))
                             | (*&v18[4 * ((v10 + 4) >> 5)] << (v3 - (v19 & 0x1F))))
                            & 0xF;
          goto LABEL_7;
        }
      }
      if ( m_nDataBits - v19 <= 0 )
      {
        bf_read::SetOverflowFlag(pReadBuf);
      }
      else
      {
        v23 = pReadBuf->m_pData;
        v24 = v19 + 1;
        v25 = *&pReadBuf->m_pData[4 * (v19 >> 5)];
        pReadBuf->m_iCurBit = v19 + 1;
        if ( _bittest(&v25, v19) )
        {
          if ( m_nDataBits - v24 <= 9 )
            goto LABEL_21;
          pReadBuf->m_iCurBit = v19 + 11;
          LOWORD(m_iCurBit) = ((*&v23[4 * (v24 >> 5)] >> (v24 & 0x1F))
                             | (*&v23[4 * ((v19 + 10) >> 5)] << (v3 - (v24 & 0x1F))))
                            & 0x3FF;
          goto LABEL_7;
        }
      }
      OneBit = bf_read::ReadOneBit(pReadBuf);
      v27 = pReadBuf->m_iCurBit;
      v28 = pReadBuf->m_nDataBits;
      if ( OneBit != 0 )
      {
        if ( v28 - v27 > 16 )
        {
          pReadBuf->m_iCurBit = v27 + 17;
          v30 = v27 & 0x1F;
          v29 = pReadBuf->m_pData;
          v31 = v27 + 16;
          goto LABEL_33;
        }
      }
      else if ( v28 - v27 > 30 )
      {
        pReadBuf->m_iCurBit = v27 + 31;
        v29 = pReadBuf->m_pData;
        v30 = v27 & 0x1F;
        v31 = v27 + 30;
LABEL_33:
        m_iCurBit = (*&v29[4 * (v31 >> 5)] << (v3 - v30)) | (*&v29[4 * (v27 >> 5)] >> v30);
        goto LABEL_7;
      }
      pReadBuf->m_iCurBit = pReadBuf->m_nDataBits;
      bf_read::SetOverflowFlag(pReadBuf);
      LOWORD(m_iCurBit) = 0;
LABEL_7:
      if ( !from->m_bUsingExternalPaths )
        break;
      pReadBuf = &LOG_GENERAL;
      if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
      {
        v32.m_szFile = "../public/tier2/fieldpath.h";
        v32.m_szFunction = "Path_AddToTail";
        v32.m_nLine = 428;
        LoggingSystem_Log(
          LOG_GENERAL,
          LoggingSeverity_t::LS_ERROR,
          &v32,
          "Path_AddToTail failed for read only CFieldPath",
          v16,
          v17);
      }
LABEL_13:
      if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v14, v15, v12, v13) != 0 )
        loc_0 = -559038737;
      Plat_ExitProcess(1);
    }
    m_nCount = from->m_nCount;
    if ( m_nCount > 5 )
    {
      pReadBuf = &LOG_GENERAL;
      if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
      {
        v32.m_szFile = "../public/tier2/fieldpath.h";
        v32.m_szFunction = "Path_AddToTail";
        v32.m_nLine = 425;
        LoggingSystem_Log(
          LOG_GENERAL,
          LoggingSeverity_t::LS_ERROR,
          &v32,
          "Path_AddToTail failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)",
          6);
      }
      goto LABEL_13;
    }
    --v2;
    from->m_nCount = m_nCount + 1;
    from->u.m_FixedPaths[m_nCount].m_nValue = m_iCurBit;
  }
  while ( v2 != 0 );
}


// FieldOp_Read_PushThreeLeftDeltaN  (line 980, @0x00000000031252b0, libserver.so)  // inlines: CFieldPath_ReadUBitVar, GetNumBitsLeft, GetPathData, IsUsingFixedPaths, LeafCodeInfo_t, LoadLittleDWord, Path_AddToTail, Push, ReadOneBit, ReadOneBitNoCheck, ReadUBitLong, ReadUBitVar, Set, operator[]
// calls: bf_read::ReadUBitVarInternal, LoggingSystem_IsChannelEnabled, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...), Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, bf_read::SetOverflowFlag, bf_read::ReadOneBit
// strings: "../public/tier2/fieldpath.h", "GetPathData", "GetPathData failed for read only CFieldPath", "Path_AddToTail", "Path_AddToTail failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)", "Path_AddToTail failed for read only CFieldPath"
void __fastcall FieldOp_Read_PushThreeLeftDeltaN(CFieldPath *const from, bf_read *pReadBuf)
{
  char v2; // r14
  bf_read *v4; // rbx
  int m_iCurBit; // eax
  int m_nCount; // r13d
  const unsigned __int8 *m_pData; // r8
  int v8; // esi
  __int16 v9; // ax
  int m_nDataBits; // ecx
  int v11; // eax
  const unsigned __int8 *v12; // rsi
  int v13; // edi
  signed int v14; // edx
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdi
  __int64 v19; // rsi
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // r8
  __int64 v23; // r9
  const unsigned __int8 *v24; // rdi
  signed int v25; // esi
  int v26; // eax
  const unsigned __int8 *v27; // rdi
  int v28; // edx
  int v29; // eax
  int OneBit; // eax
  int v31; // edx
  int v32; // ecx
  const unsigned __int8 *v33; // rax
  char v34; // di
  int v35; // esi
  LeafCodeInfo_t v36; // [rsp+0h] [rbp-40h] BYREF

  v4 = pReadBuf;
  m_iCurBit = pReadBuf->m_iCurBit;
  m_nCount = from->m_nCount;
  if ( pReadBuf->m_nDataBits - m_iCurBit <= 5 )
  {
    pReadBuf->m_iCurBit = pReadBuf->m_nDataBits;
    bf_read::SetOverflowFlag(pReadBuf);
    v9 = 2;
  }
  else
  {
    m_pData = pReadBuf->m_pData;
    pReadBuf->m_iCurBit = m_iCurBit + 6;
    v8 = ((*&m_pData[4 * (m_iCurBit >> 5)] >> (m_iCurBit & 0x1F))
        | (*&m_pData[4 * ((m_iCurBit + 5) >> 5)] << (32 - (m_iCurBit & 0x1F))))
       & 0x3F;
    if ( (((*&m_pData[4 * (m_iCurBit >> 5)] >> (m_iCurBit & 0x1F))
         | (*&m_pData[4 * ((m_iCurBit + 5) >> 5)] << (32 - (m_iCurBit & 0x1F))))
        & 0x30) != 0 )
    {
      v9 = bf_read::ReadUBitVarInternal(v4, v8) + 2;
      if ( !from->m_bUsingExternalPaths )
        goto LABEL_5;
LABEL_15:
      v4 = &LOG_GENERAL;
      if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
      {
        v36.m_szFile = "../public/tier2/fieldpath.h";
        v36.m_szFunction = "GetPathData";
        v36.m_nLine = 514;
        LoggingSystem_Log(
          LOG_GENERAL,
          LoggingSeverity_t::LS_ERROR,
          &v36,
          "GetPathData failed for read only CFieldPath",
          v20,
          v21);
      }
      goto LABEL_19;
    }
    v9 = v8 + 2;
  }
  if ( from->m_bUsingExternalPaths )
    goto LABEL_15;
LABEL_5:
  v2 = 32;
  from->u.m_FixedPaths[m_nCount - 1].m_nValue += v9;
  for ( m_nCount = 3; m_nCount != 0; --m_nCount )
  {
    m_nDataBits = v4->m_nDataBits;
    v11 = v4->m_iCurBit;
    if ( m_nDataBits - v11 > 0 )
    {
      v12 = v4->m_pData;
      v13 = *&v4->m_pData[4 * (v11 >> 5)];
      v14 = v11 + 1;
      v4->m_iCurBit = v11 + 1;
      if ( !_bittest(&v13, v11) )
        goto LABEL_23;
      if ( m_nDataBits - v14 > 1 )
      {
        v4->m_iCurBit = v11 + 3;
        LOWORD(v11) = ((*&v12[4 * (v14 >> 5)] >> (v14 & 0x1F)) | (*&v12[4 * ((v11 + 2) >> 5)] << (v2 - (v14 & 0x1F))))
                    & 3;
        goto LABEL_10;
      }
LABEL_27:
      v4->m_iCurBit = m_nDataBits;
      bf_read::SetOverflowFlag(v4);
      LOWORD(v11) = 0;
      goto LABEL_10;
    }
    while ( 1 )
    {
      bf_read::SetOverflowFlag(v4);
      m_nDataBits = v4->m_nDataBits;
      v14 = v4->m_iCurBit;
LABEL_23:
      if ( m_nDataBits - v14 <= 0 )
      {
        bf_read::SetOverflowFlag(v4);
        m_nDataBits = v4->m_nDataBits;
        v25 = v4->m_iCurBit;
      }
      else
      {
        v24 = v4->m_pData;
        v25 = v14 + 1;
        v26 = *&v4->m_pData[4 * (v14 >> 5)];
        v4->m_iCurBit = v14 + 1;
        if ( _bittest(&v26, v14) )
        {
          if ( m_nDataBits - v25 <= 3 )
            goto LABEL_27;
          v4->m_iCurBit = v14 + 5;
          LOWORD(v11) = ((*&v24[4 * (v25 >> 5)] >> (v25 & 0x1F)) | (*&v24[4 * ((v14 + 4) >> 5)] << (v2 - (v25 & 0x1F))))
                      & 0xF;
          goto LABEL_10;
        }
      }
      if ( m_nDataBits - v25 <= 0 )
      {
        bf_read::SetOverflowFlag(v4);
      }
      else
      {
        v27 = v4->m_pData;
        v28 = v25 + 1;
        v29 = *&v4->m_pData[4 * (v25 >> 5)];
        v4->m_iCurBit = v25 + 1;
        if ( _bittest(&v29, v25) )
        {
          if ( m_nDataBits - v28 <= 9 )
            goto LABEL_27;
          v4->m_iCurBit = v25 + 11;
          LOWORD(v11) = ((*&v27[4 * (v28 >> 5)] >> (v28 & 0x1F)) | (*&v27[4 * ((v25 + 10) >> 5)] << (v2 - (v28 & 0x1F))))
                      & 0x3FF;
          goto LABEL_10;
        }
      }
      OneBit = bf_read::ReadOneBit(v4);
      v31 = v4->m_iCurBit;
      v32 = v4->m_nDataBits;
      if ( OneBit != 0 )
      {
        if ( v32 - v31 > 16 )
        {
          v4->m_iCurBit = v31 + 17;
          v34 = v31 & 0x1F;
          v33 = v4->m_pData;
          v35 = v31 + 16;
          goto LABEL_38;
        }
      }
      else if ( v32 - v31 > 30 )
      {
        v4->m_iCurBit = v31 + 31;
        v33 = v4->m_pData;
        v34 = v31 & 0x1F;
        v35 = v31 + 30;
LABEL_38:
        v11 = (*&v33[4 * (v35 >> 5)] << (v2 - v34)) | (*&v33[4 * (v31 >> 5)] >> v34);
        goto LABEL_10;
      }
      v4->m_iCurBit = v4->m_nDataBits;
      bf_read::SetOverflowFlag(v4);
      LOWORD(v11) = 0;
LABEL_10:
      if ( !from->m_bUsingExternalPaths )
        break;
      v4 = &LOG_GENERAL;
      if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
      {
        v36.m_szFile = "../public/tier2/fieldpath.h";
        v36.m_szFunction = "Path_AddToTail";
        v36.m_nLine = 428;
        LoggingSystem_Log(
          LOG_GENERAL,
          LoggingSeverity_t::LS_ERROR,
          &v36,
          "Path_AddToTail failed for read only CFieldPath",
          v22,
          v23);
      }
LABEL_19:
      if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v18, v19, v16, v17) != 0 )
        loc_0 = -559038737;
      Plat_ExitProcess(1);
    }
    v15 = from->m_nCount;
    if ( v15 > 5 )
    {
      v4 = &LOG_GENERAL;
      if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
      {
        v36.m_szFile = "../public/tier2/fieldpath.h";
        v36.m_szFunction = "Path_AddToTail";
        v36.m_nLine = 425;
        LoggingSystem_Log(
          LOG_GENERAL,
          LoggingSeverity_t::LS_ERROR,
          &v36,
          "Path_AddToTail failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)",
          6);
      }
      goto LABEL_19;
    }
    from->m_nCount = v15 + 1;
    from->u.m_FixedPaths[v15].m_nValue = v11;
  }
}


// FieldOp_Read_PushThreePack5LeftDeltaZero  (line 994, @0x0000000003117c30, libserver.so)  // inlines: GetNumBitsLeft, IsUsingFixedPaths, LeafCodeInfo_t, LoadLittleDWord, Path_AddToTail, Push, ReadUBitLong
// calls: LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, bf_read::SetOverflowFlag, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...)
// strings: "../public/tier2/fieldpath.h", "Path_AddToTail", "Path_AddToTail failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)", "Path_AddToTail failed for read only CFieldPath"
void __fastcall FieldOp_Read_PushThreePack5LeftDeltaZero(CFieldPath *const from, bf_read *pReadBuf)
{
  int i; // r13d
  int m_nDataBits; // edx
  int m_iCurBit; // eax
  const unsigned __int8 *m_pData; // rdi
  int16 v8; // dx
  __int64 m_nCount; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // r8
  __int64 v15; // r9
  LeafCodeInfo_t v16; // [rsp+0h] [rbp-40h] BYREF

  for ( i = 3; i != 0; --i )
  {
    m_nDataBits = pReadBuf->m_nDataBits;
    m_iCurBit = pReadBuf->m_iCurBit;
    if ( m_nDataBits - m_iCurBit > 4 )
    {
      m_pData = pReadBuf->m_pData;
      pReadBuf->m_iCurBit = m_iCurBit + 5;
      v8 = ((*&m_pData[4 * (m_iCurBit >> 5)] >> (m_iCurBit & 0x1F))
          | (*&m_pData[4 * ((m_iCurBit + 4) >> 5)] << (32 - (m_iCurBit & 0x1F))))
         & 0x1F;
      goto LABEL_4;
    }
    while ( 1 )
    {
      pReadBuf->m_iCurBit = m_nDataBits;
      bf_read::SetOverflowFlag(pReadBuf);
      v8 = 0;
LABEL_4:
      if ( !from->m_bUsingExternalPaths )
        break;
      pReadBuf = &LOG_GENERAL;
      if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
      {
        v16.m_szFile = "../public/tier2/fieldpath.h";
        v16.m_szFunction = "Path_AddToTail";
        v16.m_nLine = 428;
        LoggingSystem_Log(
          LOG_GENERAL,
          LoggingSeverity_t::LS_ERROR,
          &v16,
          "Path_AddToTail failed for read only CFieldPath",
          v14,
          v15);
      }
LABEL_10:
      if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v12, v13, v10, v11) != 0 )
        loc_0 = -559038737;
      Plat_ExitProcess(1);
    }
    m_nCount = from->m_nCount;
    if ( m_nCount > 5 )
    {
      pReadBuf = &LOG_GENERAL;
      if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
      {
        v16.m_szFile = "../public/tier2/fieldpath.h";
        v16.m_szFunction = "Path_AddToTail";
        v16.m_nLine = 425;
        LoggingSystem_Log(
          LOG_GENERAL,
          LoggingSeverity_t::LS_ERROR,
          &v16,
          "Path_AddToTail failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)",
          6);
      }
      goto LABEL_10;
    }
    from->m_nCount = m_nCount + 1;
    from->u.m_FixedPaths[m_nCount].m_nValue = v8;
  }
}


// FieldOp_Read_PushThreePack5LeftDeltaOne  (line 1003, @0x000000000311a3e0, libserver.so)  // inlines: GetNumBitsLeft, GetPathData, IsUsingFixedPaths, LeafCodeInfo_t, LoadLittleDWord, Path_AddToTail, Push, ReadUBitLong, Set, operator[]
// calls: LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, bf_read::SetOverflowFlag, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...)
// strings: "../public/tier2/fieldpath.h", "GetPathData", "GetPathData failed for read only CFieldPath", "Path_AddToTail", "Path_AddToTail failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)", "Path_AddToTail failed for read only CFieldPath"
void __fastcall FieldOp_Read_PushThreePack5LeftDeltaOne(CFieldPath *const from, bf_read *pReadBuf)
{
  bf_read *v2; // r12
  int v3; // r13d
  char v4; // r14
  CFieldPath *v5; // rbx
  int m_nDataBits; // edx
  int m_iCurBit; // eax
  const unsigned __int8 *m_pData; // rdi
  int16 v9; // dx
  __int64 m_nCount; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // r8
  __int64 v18; // r9
  LeafCodeInfo_t v19; // [rsp+0h] [rbp-40h] BYREF

  v5 = from;
  if ( from->m_bUsingExternalPaths )
  {
    v5 = &LOG_GENERAL;
    if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
    {
      v19.m_szFile = "../public/tier2/fieldpath.h";
      v19.m_szFunction = "GetPathData";
      v19.m_nLine = 514;
      LoggingSystem_Log(
        LOG_GENERAL,
        LoggingSeverity_t::LS_ERROR,
        &v19,
        "GetPathData failed for read only CFieldPath",
        v17,
        v18);
    }
    goto LABEL_11;
  }
  v2 = pReadBuf;
  v3 = 3;
  v4 = 32;
  ++from->u.m_FixedPaths[from->m_nCount - 1].m_nValue;
  do
  {
    m_nDataBits = v2->m_nDataBits;
    m_iCurBit = v2->m_iCurBit;
    if ( m_nDataBits - m_iCurBit > 4 )
    {
      m_pData = v2->m_pData;
      v2->m_iCurBit = m_iCurBit + 5;
      v9 = ((*&m_pData[4 * (m_iCurBit >> 5)] >> (m_iCurBit & 0x1F))
          | (*&m_pData[4 * ((m_iCurBit + 4) >> 5)] << (v4 - (m_iCurBit & 0x1F))))
         & 0x1F;
      goto LABEL_5;
    }
    while ( 1 )
    {
      v2->m_iCurBit = m_nDataBits;
      bf_read::SetOverflowFlag(v2);
      v9 = 0;
LABEL_5:
      if ( !v5->m_bUsingExternalPaths )
        break;
      v5 = &LOG_GENERAL;
      if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
      {
        v19.m_szFile = "../public/tier2/fieldpath.h";
        v19.m_szFunction = "Path_AddToTail";
        v19.m_nLine = 428;
        LoggingSystem_Log(
          LOG_GENERAL,
          LoggingSeverity_t::LS_ERROR,
          &v19,
          "Path_AddToTail failed for read only CFieldPath",
          v15,
          v16);
      }
LABEL_11:
      if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v13, v14, v11, v12) != 0 )
        loc_0 = -559038737;
      Plat_ExitProcess(1);
    }
    m_nCount = v5->m_nCount;
    if ( m_nCount > 5 )
    {
      v5 = &LOG_GENERAL;
      if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
      {
        v19.m_szFile = "../public/tier2/fieldpath.h";
        v19.m_szFunction = "Path_AddToTail";
        v19.m_nLine = 425;
        LoggingSystem_Log(
          LOG_GENERAL,
          LoggingSeverity_t::LS_ERROR,
          &v19,
          "Path_AddToTail failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)",
          6);
      }
      goto LABEL_11;
    }
    --v3;
    v5->m_nCount = m_nCount + 1;
    v5->u.m_FixedPaths[m_nCount].m_nValue = v9;
  }
  while ( v3 != 0 );
}


// FieldOp_Read_PushThreePack5LeftDeltaN  (line 1015, @0x000000000311a5e0, libserver.so)  // inlines: GetNumBitsLeft, GetPathData, IsUsingFixedPaths, LeafCodeInfo_t, LoadLittleDWord, Path_AddToTail, Push, ReadUBitLong, ReadUBitVar, Set, operator[]
// calls: bf_read::ReadUBitVarInternal, LoggingSystem_IsChannelEnabled, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...), Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, bf_read::SetOverflowFlag
// strings: "../public/tier2/fieldpath.h", "GetPathData", "GetPathData failed for read only CFieldPath", "Path_AddToTail", "Path_AddToTail failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)", "Path_AddToTail failed for read only CFieldPath"
void __fastcall FieldOp_Read_PushThreePack5LeftDeltaN(CFieldPath *const from, bf_read *pReadBuf)
{
  char v2; // r14
  bf_read *v4; // rbx
  int m_iCurBit; // eax
  int m_nCount; // r13d
  const unsigned __int8 *m_pData; // r8
  int v8; // esi
  __int16 v9; // ax
  int m_nDataBits; // edx
  int v11; // eax
  const unsigned __int8 *v12; // rdi
  int16 v13; // dx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdi
  __int64 v18; // rsi
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // r8
  __int64 v22; // r9
  LeafCodeInfo_t v23; // [rsp+0h] [rbp-40h] BYREF

  v4 = pReadBuf;
  m_iCurBit = pReadBuf->m_iCurBit;
  m_nCount = from->m_nCount;
  if ( pReadBuf->m_nDataBits - m_iCurBit <= 5 )
  {
    pReadBuf->m_iCurBit = pReadBuf->m_nDataBits;
    bf_read::SetOverflowFlag(pReadBuf);
    v9 = 2;
  }
  else
  {
    m_pData = pReadBuf->m_pData;
    pReadBuf->m_iCurBit = m_iCurBit + 6;
    v8 = ((*&m_pData[4 * (m_iCurBit >> 5)] >> (m_iCurBit & 0x1F))
        | (*&m_pData[4 * ((m_iCurBit + 5) >> 5)] << (32 - (m_iCurBit & 0x1F))))
       & 0x3F;
    if ( (((*&m_pData[4 * (m_iCurBit >> 5)] >> (m_iCurBit & 0x1F))
         | (*&m_pData[4 * ((m_iCurBit + 5) >> 5)] << (32 - (m_iCurBit & 0x1F))))
        & 0x30) != 0 )
    {
      v9 = bf_read::ReadUBitVarInternal(v4, v8) + 2;
      if ( !from->m_bUsingExternalPaths )
        goto LABEL_5;
LABEL_13:
      v4 = &LOG_GENERAL;
      if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
      {
        v23.m_szFile = "../public/tier2/fieldpath.h";
        v23.m_szFunction = "GetPathData";
        v23.m_nLine = 514;
        LoggingSystem_Log(
          LOG_GENERAL,
          LoggingSeverity_t::LS_ERROR,
          &v23,
          "GetPathData failed for read only CFieldPath",
          v19,
          v20);
      }
      goto LABEL_17;
    }
    v9 = v8 + 2;
  }
  if ( from->m_bUsingExternalPaths )
    goto LABEL_13;
LABEL_5:
  v2 = 32;
  from->u.m_FixedPaths[m_nCount - 1].m_nValue += v9;
  for ( m_nCount = 3; m_nCount != 0; --m_nCount )
  {
    m_nDataBits = v4->m_nDataBits;
    v11 = v4->m_iCurBit;
    if ( m_nDataBits - v11 > 4 )
    {
      v12 = v4->m_pData;
      v4->m_iCurBit = v11 + 5;
      v13 = ((*&v12[4 * (v11 >> 5)] >> (v11 & 0x1F)) | (*&v12[4 * ((v11 + 4) >> 5)] << (v2 - (v11 & 0x1F)))) & 0x1F;
      goto LABEL_8;
    }
    while ( 1 )
    {
      v4->m_iCurBit = m_nDataBits;
      bf_read::SetOverflowFlag(v4);
      v13 = 0;
LABEL_8:
      if ( !from->m_bUsingExternalPaths )
        break;
      v4 = &LOG_GENERAL;
      if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
      {
        v23.m_szFile = "../public/tier2/fieldpath.h";
        v23.m_szFunction = "Path_AddToTail";
        v23.m_nLine = 428;
        LoggingSystem_Log(
          LOG_GENERAL,
          LoggingSeverity_t::LS_ERROR,
          &v23,
          "Path_AddToTail failed for read only CFieldPath",
          v21,
          v22);
      }
LABEL_17:
      if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v17, v18, v15, v16) != 0 )
        loc_0 = -559038737;
      Plat_ExitProcess(1);
    }
    v14 = from->m_nCount;
    if ( v14 > 5 )
    {
      v4 = &LOG_GENERAL;
      if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
      {
        v23.m_szFile = "../public/tier2/fieldpath.h";
        v23.m_szFunction = "Path_AddToTail";
        v23.m_nLine = 425;
        LoggingSystem_Log(
          LOG_GENERAL,
          LoggingSeverity_t::LS_ERROR,
          &v23,
          "Path_AddToTail failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)",
          6);
      }
      goto LABEL_17;
    }
    from->m_nCount = v14 + 1;
    from->u.m_FixedPaths[v14].m_nValue = v13;
  }
}


// FieldOp_Read_PushN  (line 1029, @0x00000000031256d0, libserver.so)  // inlines: CFieldPath_ReadUBitVar, GetNumBitsLeft, GetPathData, IsUsingFixedPaths, LeafCodeInfo_t, LoadLittleDWord, Path_AddToTail, Push, ReadOneBit, ReadOneBitNoCheck, ReadUBitLong, ReadUBitVar, Set, operator[]
// calls: bf_read::ReadUBitVarInternal, bf_read::SetOverflowFlag, LoggingSystem_IsChannelEnabled, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...), Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, bf_read::ReadOneBit
// strings: "../public/tier2/fieldpath.h", "GetPathData", "GetPathData failed for read only CFieldPath", "Path_AddToTail", "Path_AddToTail failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)", "Path_AddToTail failed for read only CFieldPath"
void __fastcall FieldOp_Read_PushN(CFieldPath *const from, bf_read *pReadBuf)
{
  char v2; // r15
  bf_read *v4; // rbx
  int m_nDataBits; // r8d
  int m_iCurBit; // eax
  const unsigned __int8 *m_pData; // r10
  int v8; // edx
  int v9; // r14d
  int m_nCount; // r13d
  const unsigned __int8 *v11; // r8
  __int16 v12; // ax
  int v13; // ecx
  int v14; // edx
  const unsigned __int8 *v15; // rax
  signed int v16; // edi
  int v17; // esi
  __int64 v18; // rax
  unsigned int UBitVarInternal; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdi
  __int64 v23; // rsi
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // r8
  __int64 v27; // r9
  const unsigned __int8 *v28; // rsi
  int v29; // edx
  signed int v30; // eax
  const unsigned __int8 *v31; // rdi
  int v32; // esi
  int v33; // edx
  bool v34; // zf
  int v35; // eax
  int v36; // ecx
  const unsigned __int8 *v37; // rdi
  int v38; // edx
  char v39; // si
  LeafCodeInfo_t v40; // [rsp+0h] [rbp-50h] BYREF

  v4 = pReadBuf;
  m_nDataBits = pReadBuf->m_nDataBits;
  m_iCurBit = pReadBuf->m_iCurBit;
  if ( m_nDataBits - m_iCurBit <= 5 )
  {
    pReadBuf->m_iCurBit = m_nDataBits;
    v9 = 0;
    bf_read::SetOverflowFlag(pReadBuf);
    m_nDataBits = v4->m_nDataBits;
    v8 = v4->m_iCurBit;
LABEL_4:
    m_nCount = from->m_nCount;
    if ( m_nDataBits - v8 > 5 )
      goto LABEL_5;
LABEL_18:
    v4->m_iCurBit = m_nDataBits;
    bf_read::SetOverflowFlag(v4);
    v12 = 0;
    if ( !from->m_bUsingExternalPaths )
      goto LABEL_8;
LABEL_19:
    v4 = &LOG_GENERAL;
    if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
    {
      v40.m_szFile = "../public/tier2/fieldpath.h";
      v40.m_szFunction = "GetPathData";
      v40.m_nLine = 514;
      LoggingSystem_Log(
        LOG_GENERAL,
        LoggingSeverity_t::LS_ERROR,
        &v40,
        "GetPathData failed for read only CFieldPath",
        v24,
        v25);
    }
    goto LABEL_23;
  }
  m_pData = pReadBuf->m_pData;
  v8 = m_iCurBit + 6;
  pReadBuf->m_iCurBit = m_iCurBit + 6;
  if ( (((*&m_pData[4 * (m_iCurBit >> 5)] >> (m_iCurBit & 0x1F))
       | (*&m_pData[4 * ((m_iCurBit + 5) >> 5)] << (32 - (m_iCurBit & 0x1F))))
      & 0x30) == 0 )
  {
    v9 = ((*&m_pData[4 * (m_iCurBit >> 5)] >> (m_iCurBit & 0x1F))
        | (*&m_pData[4 * ((m_iCurBit + 5) >> 5)] << (32 - (m_iCurBit & 0x1F))))
       & 0x3F;
    goto LABEL_4;
  }
  UBitVarInternal = bf_read::ReadUBitVarInternal(
                      pReadBuf,
                      ((*&m_pData[4 * (m_iCurBit >> 5)] >> (m_iCurBit & 0x1F))
                     | (*&m_pData[4 * ((m_iCurBit + 5) >> 5)] << (32 - (m_iCurBit & 0x1F))))
                    & 0x3F);
  m_nDataBits = v4->m_nDataBits;
  v8 = v4->m_iCurBit;
  v9 = UBitVarInternal;
  m_nCount = from->m_nCount;
  if ( m_nDataBits - v8 <= 5 )
    goto LABEL_18;
LABEL_5:
  v11 = v4->m_pData;
  v4->m_iCurBit = v8 + 6;
  if ( (((*&v11[4 * (v8 >> 5)] >> (v8 & 0x1F)) | (*&v11[4 * ((v8 + 5) >> 5)] << (32 - (v8 & 0x1F)))) & 0x30) != 0 )
    v12 = bf_read::ReadUBitVarInternal(
            v4,
            ((*&v11[4 * (v8 >> 5)] >> (v8 & 0x1F)) | (*&v11[4 * ((v8 + 5) >> 5)] << (32 - (v8 & 0x1F)))) & 0x3F);
  else
    v12 = ((*&v11[4 * (v8 >> 5)] >> (v8 & 0x1F)) | (*&v11[4 * ((v8 + 5) >> 5)] << (32 - (v8 & 0x1F)))) & 0x3F;
  if ( from->m_bUsingExternalPaths )
    goto LABEL_19;
LABEL_8:
  v2 = 32;
  from->u.m_FixedPaths[m_nCount - 1].m_nValue += v12;
  m_nCount = 0;
  if ( v9 <= 0 )
    return;
  do
  {
    v13 = v4->m_nDataBits;
    v14 = v4->m_iCurBit;
    if ( v13 - v14 > 0 )
    {
      v15 = v4->m_pData;
      v16 = v14 + 1;
      v17 = *&v4->m_pData[4 * (v14 >> 5)];
      v4->m_iCurBit = v14 + 1;
      if ( !_bittest(&v17, v14) )
        goto LABEL_27;
      if ( v13 - v16 > 1 )
      {
        v4->m_iCurBit = v14 + 3;
        LOWORD(v14) = ((*&v15[4 * (v16 >> 5)] >> (v16 & 0x1F)) | (*&v15[4 * ((v14 + 2) >> 5)] << (v2 - (v16 & 0x1F))))
                    & 3;
        goto LABEL_13;
      }
LABEL_31:
      v4->m_iCurBit = v13;
      bf_read::SetOverflowFlag(v4);
      LOWORD(v14) = 0;
      goto LABEL_13;
    }
    while ( 1 )
    {
      bf_read::SetOverflowFlag(v4);
      v13 = v4->m_nDataBits;
      v16 = v4->m_iCurBit;
LABEL_27:
      if ( v13 - v16 <= 0 )
      {
        bf_read::SetOverflowFlag(v4);
        v13 = v4->m_nDataBits;
        v30 = v4->m_iCurBit;
      }
      else
      {
        v28 = v4->m_pData;
        v29 = *&v4->m_pData[4 * (v16 >> 5)];
        v30 = v16 + 1;
        v4->m_iCurBit = v16 + 1;
        if ( _bittest(&v29, v16) )
        {
          if ( v13 - v30 <= 3 )
            goto LABEL_31;
          v4->m_iCurBit = v16 + 5;
          LOWORD(v14) = ((*&v28[4 * (v30 >> 5)] >> (v30 & 0x1F)) | (*&v28[4 * ((v16 + 4) >> 5)] << (v2 - (v30 & 0x1F))))
                      & 0xF;
          goto LABEL_13;
        }
      }
      if ( v13 - v30 <= 0 )
      {
        bf_read::SetOverflowFlag(v4);
      }
      else
      {
        v31 = v4->m_pData;
        v32 = v30 + 1;
        v33 = *&v4->m_pData[4 * (v30 >> 5)];
        v4->m_iCurBit = v30 + 1;
        if ( _bittest(&v33, v30) )
        {
          if ( v13 - v32 <= 9 )
            goto LABEL_31;
          v4->m_iCurBit = v30 + 11;
          LOWORD(v14) = ((*&v31[4 * (v32 >> 5)] >> (v32 & 0x1F)) | (*&v31[4 * ((v30 + 10) >> 5)] << (v2 - (v32 & 0x1F))))
                      & 0x3FF;
          goto LABEL_13;
        }
      }
      v34 = bf_read::ReadOneBit(v4) == 0;
      v35 = v4->m_iCurBit;
      v36 = v4->m_nDataBits;
      if ( v34 )
      {
        if ( v36 - v35 > 30 )
        {
          v37 = v4->m_pData;
          v4->m_iCurBit = v35 + 31;
          v38 = v35 + 30;
          v39 = v35 & 0x1F;
          goto LABEL_43;
        }
      }
      else if ( v36 - v35 > 16 )
      {
        v37 = v4->m_pData;
        v4->m_iCurBit = v35 + 17;
        v38 = v35 + 16;
        v39 = v35 & 0x1F;
LABEL_43:
        v14 = (*&v37[4 * (v35 >> 5)] >> v39) | (*&v37[4 * (v38 >> 5)] << (v2 - v39));
        goto LABEL_13;
      }
      v4->m_iCurBit = v4->m_nDataBits;
      bf_read::SetOverflowFlag(v4);
      LOWORD(v14) = 0;
LABEL_13:
      if ( !from->m_bUsingExternalPaths )
        break;
      v4 = &LOG_GENERAL;
      if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
      {
        v40.m_szFile = "../public/tier2/fieldpath.h";
        v40.m_szFunction = "Path_AddToTail";
        v40.m_nLine = 428;
        LoggingSystem_Log(
          LOG_GENERAL,
          LoggingSeverity_t::LS_ERROR,
          &v40,
          "Path_AddToTail failed for read only CFieldPath",
          v26,
          v27);
      }
LABEL_23:
      if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v22, v23, v20, v21) != 0 )
        loc_0 = -559038737;
      Plat_ExitProcess(1);
    }
    v18 = from->m_nCount;
    if ( v18 > 5 )
    {
      v4 = &LOG_GENERAL;
      if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
      {
        v40.m_szFile = "../public/tier2/fieldpath.h";
        v40.m_szFunction = "Path_AddToTail";
        v40.m_nLine = 425;
        LoggingSystem_Log(
          LOG_GENERAL,
          LoggingSeverity_t::LS_ERROR,
          &v40,
          "Path_AddToTail failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)",
          6);
      }
      goto LABEL_23;
    }
    ++m_nCount;
    from->m_nCount = v18 + 1;
    from->u.m_FixedPaths[v18].m_nValue = v14;
  }
  while ( m_nCount != v9 );
}


// FieldOp_Read_PushNAndNonTopographical  (line 1046, @0x0000000003125b90, libserver.so)  // inlines: CFieldPath_ReadUBitVar, GetDepth, GetNumBitsLeft, GetPathData, IsUsingFixedPaths, LeafCodeInfo_t, LoadLittleDWord, Path_AddToTail, Push, ReadOneBit, ReadOneBitNoCheck, ReadSignedVarInt32, ReadUBitLong, ReadUBitVar, Set, ZigZagDecode32, operator[]
// calls: bf_read::ReadVarInt32, LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, bf_read::SetOverflowFlag, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...), bf_read::ReadUBitVarInternal, bf_read::ReadOneBit
// strings: "../public/tier2/fieldpath.h", "Path_AddToTail", "Path_AddToTail failed for read only CFieldPath", "GetPathData", "GetPathData failed for read only CFieldPath", "Path_AddToTail failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)"
void __fastcall FieldOp_Read_PushNAndNonTopographical(CFieldPath *const from, bf_read *pReadBuf)
{
  CFieldPath *UBitVarInternal; // r13
  int v4; // r12d
  bf_read *v5; // rbx
  int m_nDataBits; // esi
  int m_iCurBit; // eax
  unsigned int v8; // edx
  char v9; // cl
  uint32 VarInt32; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // r8
  __int64 v16; // r9
  const unsigned __int8 *m_pData; // r8
  int v18; // ecx
  int v19; // edx
  const unsigned __int8 *v20; // r8
  signed int v21; // edi
  int v22; // eax
  __int64 m_nCount; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  const unsigned __int8 *v26; // rsi
  int v27; // edx
  int v28; // eax
  int v29; // edx
  int v30; // eax
  const unsigned __int8 *v31; // rdi
  int OneBit; // eax
  bool v33; // zf
  int v34; // eax
  const unsigned __int8 *v35; // rdi
  int v36; // edx
  char v37; // si
  LeafCodeInfo_t v38; // [rsp+0h] [rbp-50h] BYREF

  UBitVarInternal = from;
  v4 = 0;
  v5 = pReadBuf;
  m_nDataBits = pReadBuf->m_nDataBits;
  m_iCurBit = v5->m_iCurBit;
  if ( from->m_nCount > 0 )
    goto LABEL_4;
  while ( m_nDataBits - m_iCurBit > 5 )
  {
    m_pData = v5->m_pData;
    v5->m_iCurBit = m_iCurBit + 6;
    UBitVarInternal = (((*&m_pData[4 * (m_iCurBit >> 5)] >> (m_iCurBit & 0x1F))
                      | (*&m_pData[4 * ((m_iCurBit + 5) >> 5)] << (32 - (m_iCurBit & 0x1F))))
                     & 0x3F);
    if ( (((*&m_pData[4 * (m_iCurBit >> 5)] >> (m_iCurBit & 0x1F))
         | (*&m_pData[4 * ((m_iCurBit + 5) >> 5)] << (32 - (m_iCurBit & 0x1F))))
        & 0x30) != 0 )
      UBitVarInternal = bf_read::ReadUBitVarInternal(v5, UBitVarInternal);
    if ( UBitVarInternal <= 0 )
      return;
    v4 = 0;
    while ( 1 )
    {
      v18 = v5->m_nDataBits;
      v19 = v5->m_iCurBit;
      if ( v18 - v19 <= 0 )
      {
        bf_read::SetOverflowFlag(v5);
        v18 = v5->m_nDataBits;
        v21 = v5->m_iCurBit;
      }
      else
      {
        v20 = v5->m_pData;
        v21 = v19 + 1;
        v22 = *&v5->m_pData[4 * (v19 >> 5)];
        v5->m_iCurBit = v19 + 1;
        if ( _bittest(&v22, v19) )
        {
          if ( v18 - v21 > 1 )
          {
            v5->m_iCurBit = v19 + 3;
            LOWORD(v19) = ((*&v20[4 * (v21 >> 5)] >> (v21 & 0x1F)) | (*&v20[4 * ((v19 + 2) >> 5)] << (32 - (v21 & 0x1F))))
                        & 3;
            goto LABEL_23;
          }
LABEL_34:
          v5->m_iCurBit = v18;
          bf_read::SetOverflowFlag(v5);
          LOWORD(v19) = 0;
          goto LABEL_23;
        }
      }
      if ( v18 - v21 <= 0 )
      {
        bf_read::SetOverflowFlag(v5);
      }
      else
      {
        v26 = v5->m_pData;
        v27 = *&v5->m_pData[4 * (v21 >> 5)];
        v28 = v21 + 1;
        v5->m_iCurBit = v21 + 1;
        if ( _bittest(&v27, v21) )
        {
          if ( v18 - v28 > 3 )
          {
            v5->m_iCurBit = v21 + 5;
            LOWORD(v19) = ((*&v26[4 * (v28 >> 5)] >> (v28 & 0x1F)) | (*&v26[4 * ((v21 + 4) >> 5)] << (32 - (v28 & 0x1F))))
                        & 0xF;
            goto LABEL_23;
          }
          goto LABEL_34;
        }
      }
      if ( bf_read::ReadOneBit(v5) != 0 )
      {
        v29 = v5->m_nDataBits;
        v30 = v5->m_iCurBit;
        if ( v29 - v30 > 9 )
        {
          v31 = v5->m_pData;
          v5->m_iCurBit = v30 + 10;
          LOWORD(v19) = ((*&v31[4 * (v30 >> 5)] >> (v30 & 0x1F)) | (*&v31[4 * ((v30 + 9) >> 5)] << (32 - (v30 & 0x1F))))
                      & 0x3FF;
          goto LABEL_23;
        }
LABEL_40:
        v5->m_iCurBit = v29;
        bf_read::SetOverflowFlag(v5);
        LOWORD(v19) = 0;
        goto LABEL_23;
      }
      OneBit = bf_read::ReadOneBit(v5);
      v29 = v5->m_nDataBits;
      v33 = OneBit == 0;
      v34 = v5->m_iCurBit;
      if ( v33 )
      {
        if ( v29 - v34 <= 30 )
          goto LABEL_40;
        v35 = v5->m_pData;
        v5->m_iCurBit = v34 + 31;
        v36 = v34 + 30;
        v37 = v34 & 0x1F;
      }
      else
      {
        if ( v29 - v34 <= 16 )
          goto LABEL_40;
        v35 = v5->m_pData;
        v5->m_iCurBit = v34 + 17;
        v36 = v34 + 16;
        v37 = v34 & 0x1F;
      }
      v19 = (*&v35[4 * (v34 >> 5)] >> v37) | (*&v35[4 * (v36 >> 5)] << (32 - v37));
LABEL_23:
      if ( from->m_bUsingExternalPaths )
        break;
      m_nCount = from->m_nCount;
      if ( m_nCount > 5 )
      {
        v5 = &LOG_GENERAL;
        if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
        {
          v38.m_szFile = "../public/tier2/fieldpath.h";
          v38.m_szFunction = "Path_AddToTail";
          v38.m_nLine = 425;
          LoggingSystem_Log(
            LOG_GENERAL,
            LoggingSeverity_t::LS_ERROR,
            &v38,
            "Path_AddToTail failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)",
            6);
        }
        goto LABEL_10;
      }
      ++v4;
      from->m_nCount = m_nCount + 1;
      from->u.m_FixedPaths[m_nCount].m_nValue = v19;
      if ( UBitVarInternal == v4 )
        return;
    }
    v5 = &LOG_GENERAL;
    if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
    {
      v38.m_szFile = "../public/tier2/fieldpath.h";
      v38.m_szFunction = "Path_AddToTail";
      v38.m_nLine = 428;
      LoggingSystem_Log(
        LOG_GENERAL,
        LoggingSeverity_t::LS_ERROR,
        &v38,
        "Path_AddToTail failed for read only CFieldPath",
        v24,
        v25);
    }
LABEL_10:
    if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v13, v14, v11, v12) != 0 )
      loc_0 = -559038737;
    Plat_ExitProcess(1);
LABEL_13:
    bf_read::SetOverflowFlag(v5);
    m_nDataBits = v5->m_nDataBits;
    m_iCurBit = v5->m_iCurBit;
    while ( 1 )
    {
      ++v4;
      UBitVarInternal = (UBitVarInternal + 2);
      if ( v4 >= from->m_nCount )
        break;
LABEL_4:
      if ( m_nDataBits - m_iCurBit <= 0 )
        goto LABEL_13;
      v8 = *&v5->m_pData[4 * (m_iCurBit >> 5)];
      v9 = m_iCurBit++;
      v5->m_iCurBit = m_iCurBit;
      if ( ((v8 >> v9) & 1) != 0 )
      {
        VarInt32 = bf_read::ReadVarInt32(v5);
        if ( from->m_bUsingExternalPaths )
        {
          v5 = &LOG_GENERAL;
          if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
          {
            v38.m_szFile = "../public/tier2/fieldpath.h";
            v38.m_szFunction = "GetPathData";
            v38.m_nLine = 514;
            LoggingSystem_Log(
              LOG_GENERAL,
              LoggingSeverity_t::LS_ERROR,
              &v38,
              "GetPathData failed for read only CFieldPath",
              v15,
              v16);
          }
          goto LABEL_10;
        }
        UBitVarInternal->u.m_FixedPaths[0].m_nValue += ((VarInt32 >> 1) ^ -(VarInt32 & 1)) + 1;
        m_nDataBits = v5->m_nDataBits;
        m_iCurBit = v5->m_iCurBit;
      }
    }
  }
  v5->m_iCurBit = m_nDataBits;
  bf_read::SetOverflowFlag(v5);
}


// FieldOp_Read_PopOnePlusOne  (line 1065, @0x0000000003116bc0, libserver.so)  // inlines: GetPathData, IsUsingFixedPaths, LeafCodeInfo_t, Path_PopLast, Pop, Set, operator[]
// calls: LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...)
// strings: "../public/tier2/fieldpath.h", "Path_PopLast", "Path_PopLast failed for read only CFieldPath"
void __fastcall FieldOp_Read_PopOnePlusOne(CFieldPath *const from, bf_read *pReadBuf)
{
  __int64 v2; // rbx
  __int64 v3; // rbp
  int16 v4; // ax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // r8
  __int64 v10; // r9
  LeafCodeInfo_t v11; // [rsp-38h] [rbp-38h] BYREF
  __int64 v12; // [rsp-10h] [rbp-10h]
  __int64 v13; // [rsp-8h] [rbp-8h]

  if ( from->m_bUsingExternalPaths )
  {
    v13 = v3;
    v12 = v2;
    if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
      goto LABEL_7;
    while ( 1 )
    {
      if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v7, v8, v5, v6) != 0 )
        loc_0 = -559038737;
      Plat_ExitProcess(1);
LABEL_7:
      v11.m_szFile = "../public/tier2/fieldpath.h";
      v11.m_szFunction = "Path_PopLast";
      v11.m_nLine = 477;
      LoggingSystem_Log(
        LOG_GENERAL,
        LoggingSeverity_t::LS_ERROR,
        &v11,
        "Path_PopLast failed for read only CFieldPath",
        v9,
        v10);
    }
  }
  v4 = from->m_nCount - 1;
  from->m_nCount = v4;
  ++from->u.m_FixedPaths[v4 - 1].m_nValue;
}


// FieldOp_Read_PopOnePlusN  (line 1072, @0x0000000003126010, libserver.so)  // inlines: CFieldPath_ReadUBitVar, GetNumBitsLeft, GetPathData, IsUsingFixedPaths, LeafCodeInfo_t, LoadLittleDWord, Path_PopLast, Pop, ReadOneBit, ReadOneBitNoCheck, ReadUBitLong, Set, operator[]
// calls: LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...), bf_read::SetOverflowFlag, bf_read::ReadOneBit
// strings: "../public/tier2/fieldpath.h", "Path_PopLast", "Path_PopLast failed for read only CFieldPath", "GetPathData", "GetPathData failed for read only CFieldPath"
void __fastcall FieldOp_Read_PopOnePlusN(CFieldPath *const from, bf_read *pReadBuf)
{
  int16 v3; // r12
  int m_nDataBits; // ecx
  int v5; // r12d
  signed int m_iCurBit; // edx
  const unsigned __int8 *m_pData; // rdi
  int v8; // r8d
  signed int v9; // eax
  __int16 v10; // dx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdi
  __int64 v14; // rsi
  const unsigned __int8 *v15; // r8
  signed int v16; // edi
  int v17; // edx
  const unsigned __int8 *v18; // r8
  int v19; // edx
  int v20; // eax
  bool v21; // zf
  int v22; // eax
  int v23; // ecx
  const unsigned __int8 *v24; // r8
  const unsigned __int8 *v25; // r8
  bf_read *pReadBufb; // [rsp+8h] [rbp-38h]
  bf_read *pReadBufc; // [rsp+8h] [rbp-38h]
  bf_read *pReadBufd; // [rsp+8h] [rbp-38h]
  bf_read *pReadBufa; // [rsp+8h] [rbp-38h]
  LeafCodeInfo_t v30; // [rsp+10h] [rbp-30h] BYREF

  if ( from->m_bUsingExternalPaths )
    goto LABEL_12;
  v3 = from->m_nCount - 1;
  from->m_nCount = v3;
  m_nDataBits = pReadBuf->m_nDataBits;
  v5 = v3 - 1;
  m_iCurBit = pReadBuf->m_iCurBit;
  if ( m_nDataBits - m_iCurBit <= 0 )
  {
    pReadBufb = pReadBuf;
    bf_read::SetOverflowFlag(pReadBuf);
    pReadBuf = pReadBufb;
    m_nDataBits = pReadBufb->m_nDataBits;
    v9 = pReadBufb->m_iCurBit;
  }
  else
  {
    m_pData = pReadBuf->m_pData;
    v8 = *&pReadBuf->m_pData[4 * (m_iCurBit >> 5)];
    v9 = m_iCurBit + 1;
    pReadBuf->m_iCurBit = m_iCurBit + 1;
    if ( _bittest(&v8, m_iCurBit) )
    {
      if ( m_nDataBits - v9 > 1 )
      {
        pReadBuf->m_iCurBit = m_iCurBit + 3;
        v10 = (((*&m_pData[4 * (v9 >> 5)] >> (v9 & 0x1F)) | (*&m_pData[4 * ((m_iCurBit + 2) >> 5)] << (32 - (v9 & 0x1F))))
             & 3)
            + 1;
        goto LABEL_6;
      }
      goto LABEL_24;
    }
  }
  if ( m_nDataBits - v9 <= 0 )
  {
    pReadBufc = pReadBuf;
    bf_read::SetOverflowFlag(pReadBuf);
    pReadBuf = pReadBufc;
    m_nDataBits = pReadBufc->m_nDataBits;
    v16 = pReadBufc->m_iCurBit;
  }
  else
  {
    v15 = pReadBuf->m_pData;
    v16 = v9 + 1;
    v17 = *&pReadBuf->m_pData[4 * (v9 >> 5)];
    pReadBuf->m_iCurBit = v9 + 1;
    if ( _bittest(&v17, v9) )
    {
      if ( m_nDataBits - v16 > 3 )
      {
        pReadBuf->m_iCurBit = v9 + 5;
        v10 = (((*&v15[4 * (v16 >> 5)] >> (v16 & 0x1F)) | (*&v15[4 * ((v9 + 4) >> 5)] << (32 - (v16 & 0x1F)))) & 0xF)
            + 1;
        goto LABEL_6;
      }
      goto LABEL_24;
    }
  }
  if ( m_nDataBits - v16 <= 0 )
  {
    pReadBufd = pReadBuf;
    bf_read::SetOverflowFlag(pReadBuf);
    pReadBuf = pReadBufd;
  }
  else
  {
    v18 = pReadBuf->m_pData;
    v19 = *&pReadBuf->m_pData[4 * (v16 >> 5)];
    v20 = v16 + 1;
    pReadBuf->m_iCurBit = v16 + 1;
    if ( _bittest(&v19, v16) )
    {
      if ( m_nDataBits - v20 <= 9 )
      {
LABEL_24:
        pReadBuf->m_iCurBit = m_nDataBits;
        bf_read::SetOverflowFlag(pReadBuf);
        v10 = 1;
        goto LABEL_6;
      }
      pReadBuf->m_iCurBit = v16 + 11;
      v10 = (((*&v18[4 * (v20 >> 5)] >> (v20 & 0x1F)) | (*&v18[4 * ((v16 + 10) >> 5)] << (32 - (v20 & 0x1F)))) & 0x3FF)
          + 1;
      goto LABEL_6;
    }
  }
  pReadBufa = pReadBuf;
  v21 = bf_read::ReadOneBit(pReadBuf) == 0;
  v22 = pReadBufa->m_iCurBit;
  v23 = pReadBufa->m_nDataBits;
  if ( v21 )
  {
    if ( v23 - v22 > 30 )
    {
      v25 = pReadBufa->m_pData;
      pReadBufa->m_iCurBit = v22 + 31;
      v10 = ((*&v25[4 * (v22 >> 5)] >> (v22 & 0x1F)) | (*&v25[4 * ((v22 + 30) >> 5)] << (32 - (v22 & 0x1F)))) + 1;
      goto LABEL_6;
    }
  }
  else if ( v23 - v22 > 16 )
  {
    v24 = pReadBufa->m_pData;
    pReadBufa->m_iCurBit = v22 + 17;
    v10 = ((*&v24[4 * (v22 >> 5)] >> (v22 & 0x1F)) | (*&v24[4 * ((v22 + 16) >> 5)] << (32 - (v22 & 0x1F)))) + 1;
    goto LABEL_6;
  }
  pReadBufa->m_iCurBit = pReadBufa->m_nDataBits;
  bf_read::SetOverflowFlag(pReadBufa);
  v10 = 1;
LABEL_6:
  if ( from->m_bUsingExternalPaths )
  {
    if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
    {
      v30.m_szFile = "../public/tier2/fieldpath.h";
      v30.m_szFunction = "GetPathData";
      v30.m_nLine = 514;
      LoggingSystem_Log(LOG_GENERAL, LoggingSeverity_t::LS_ERROR, &v30, "GetPathData failed for read only CFieldPath");
    }
    while ( 1 )
    {
      if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v13, v14, v11, v12) != 0 )
        loc_0 = -559038737;
      Plat_ExitProcess(1);
LABEL_12:
      if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
      {
        v30.m_szFile = "../public/tier2/fieldpath.h";
        v30.m_szFunction = "Path_PopLast";
        v30.m_nLine = 477;
        LoggingSystem_Log(
          LOG_GENERAL,
          LoggingSeverity_t::LS_ERROR,
          &v30,
          "Path_PopLast failed for read only CFieldPath");
      }
    }
  }
  from->u.m_FixedPaths[v5].m_nValue += v10;
}


// FieldOp_Read_PopAllButOnePlusOne  (line 1080, @0x0000000003116c60, libserver.so)  // inlines: GetPathData, IsUsingFixedPaths, LeafCodeInfo_t, Path_PopLast, Pop, Set, operator[]
// calls: LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...)
// strings: "../public/tier2/fieldpath.h", "GetPathData", "GetPathData failed for read only CFieldPath", "Path_PopLast", "Path_PopLast failed for read only CFieldPath"
void __fastcall FieldOp_Read_PopAllButOnePlusOne(CFieldPath *const from, bf_read *pReadBuf)
{
  int m_nCount; // edx
  __int16 v3; // ax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r8
  __int64 v11; // r9
  LeafCodeInfo_t v12; // [rsp+0h] [rbp-30h] BYREF

  m_nCount = from->m_nCount;
  if ( from->m_nCount <= 1 )
  {
    if ( !from->m_bUsingExternalPaths )
      goto LABEL_11;
    if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
    {
      v12.m_szFile = "../public/tier2/fieldpath.h";
      v12.m_szFunction = "GetPathData";
      v12.m_nLine = 514;
      LoggingSystem_Log(
        LOG_GENERAL,
        LoggingSeverity_t::LS_ERROR,
        &v12,
        "GetPathData failed for read only CFieldPath",
        v10,
        v11);
    }
  }
  else
  {
    v3 = m_nCount - 1;
    if ( !from->m_bUsingExternalPaths )
      goto LABEL_9;
    if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
    {
      v12.m_szFile = "../public/tier2/fieldpath.h";
      v12.m_szFunction = "Path_PopLast";
      v12.m_nLine = 477;
      LoggingSystem_Log(
        LOG_GENERAL,
        LoggingSeverity_t::LS_ERROR,
        &v12,
        "Path_PopLast failed for read only CFieldPath",
        v8,
        v9);
    }
  }
  if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v6, v7, v4, v5) != 0 )
    loc_0 = -559038737;
  v3 = Plat_ExitProcess(1);
  do
  {
    --v3;
LABEL_9:
    m_nCount = v3;
  }
  while ( v3 != 1 );
  from->m_nCount = 1;
LABEL_11:
  ++from->u.m_FixedPaths[m_nCount - 1].m_nValue;
}


// FieldOp_Read_PopAllButOnePlusN  (line 1089, @0x00000000031263a0, libserver.so)  // inlines: CFieldPath_ReadUBitVar, GetDepth, GetNumBitsLeft, GetPathData, IsUsingFixedPaths, LeafCodeInfo_t, LoadLittleDWord, Path_PopLast, Pop, ReadOneBit, ReadOneBitNoCheck, ReadUBitLong, Set, operator[]
// calls: LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...), bf_read::SetOverflowFlag, bf_read::ReadOneBit
// strings: "../public/tier2/fieldpath.h", "GetPathData", "GetPathData failed for read only CFieldPath", "Path_PopLast", "Path_PopLast failed for read only CFieldPath"
void __fastcall FieldOp_Read_PopAllButOnePlusN(CFieldPath *const from, bf_read *pReadBuf)
{
  int16 m_nCount; // bx
  int16 v4; // ax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // rsi
  int m_nDataBits; // ecx
  signed int m_iCurBit; // eax
  const unsigned __int8 *m_pData; // rdi
  int v12; // r8d
  signed int v13; // edx
  __int16 v14; // ax
  const unsigned __int8 *v15; // r8
  int v16; // edi
  int v17; // eax
  int OneBit; // eax
  bf_read *v19; // rsi
  int v20; // eax
  int v21; // edx
  const unsigned __int8 *v22; // r8
  int v23; // eax
  bool v24; // zf
  int v25; // edx
  const unsigned __int8 *v26; // r8
  const unsigned __int8 *v27; // r8
  bf_read *pReadBufb; // [rsp+8h] [rbp-38h]
  bf_read *pReadBufc; // [rsp+8h] [rbp-38h]
  bf_read *pReadBufa; // [rsp+8h] [rbp-38h]
  LeafCodeInfo_t v31; // [rsp+10h] [rbp-30h] BYREF

  m_nCount = from->m_nCount;
  if ( m_nCount <= 1 )
    goto LABEL_11;
  v4 = m_nCount - 1;
  if ( !from->m_bUsingExternalPaths )
    goto LABEL_9;
  if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
  {
    v31.m_szFile = "../public/tier2/fieldpath.h";
    v31.m_szFunction = "Path_PopLast";
    v31.m_nLine = 477;
    LoggingSystem_Log(LOG_GENERAL, LoggingSeverity_t::LS_ERROR, &v31, "Path_PopLast failed for read only CFieldPath");
  }
  while ( 1 )
  {
    if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v7, v8, v5, v6) != 0 )
      loc_0 = -559038737;
    v4 = Plat_ExitProcess(1);
    do
    {
      --v4;
LABEL_9:
      m_nCount = v4;
    }
    while ( v4 != 1 );
    from->m_nCount = 1;
LABEL_11:
    m_nDataBits = pReadBuf->m_nDataBits;
    m_iCurBit = pReadBuf->m_iCurBit;
    if ( m_nDataBits - m_iCurBit <= 0 )
    {
      pReadBufb = pReadBuf;
      bf_read::SetOverflowFlag(pReadBuf);
      pReadBuf = pReadBufb;
      m_nDataBits = pReadBufb->m_nDataBits;
      v13 = pReadBufb->m_iCurBit;
    }
    else
    {
      m_pData = pReadBuf->m_pData;
      v12 = *&pReadBuf->m_pData[4 * (m_iCurBit >> 5)];
      v13 = m_iCurBit + 1;
      pReadBuf->m_iCurBit = m_iCurBit + 1;
      if ( _bittest(&v12, m_iCurBit) )
      {
        if ( m_nDataBits - v13 > 1 )
        {
          pReadBuf->m_iCurBit = m_iCurBit + 3;
          v14 = (((*&m_pData[4 * (v13 >> 5)] >> (v13 & 0x1F))
                | (*&m_pData[4 * ((m_iCurBit + 2) >> 5)] << (32 - (v13 & 0x1F))))
               & 3)
              + 1;
          goto LABEL_15;
        }
LABEL_24:
        pReadBuf->m_iCurBit = m_nDataBits;
        bf_read::SetOverflowFlag(pReadBuf);
        v14 = 1;
        goto LABEL_15;
      }
    }
    if ( m_nDataBits - v13 <= 0 )
    {
      pReadBufc = pReadBuf;
      bf_read::SetOverflowFlag(pReadBuf);
      pReadBuf = pReadBufc;
    }
    else
    {
      v15 = pReadBuf->m_pData;
      v16 = v13 + 1;
      v17 = *&pReadBuf->m_pData[4 * (v13 >> 5)];
      pReadBuf->m_iCurBit = v13 + 1;
      if ( _bittest(&v17, v13) )
      {
        if ( m_nDataBits - v16 > 3 )
        {
          pReadBuf->m_iCurBit = v13 + 5;
          v14 = (((*&v15[4 * (v16 >> 5)] >> (v16 & 0x1F)) | (*&v15[4 * ((v13 + 4) >> 5)] << (32 - (v16 & 0x1F)))) & 0xF)
              + 1;
          goto LABEL_15;
        }
        goto LABEL_24;
      }
    }
    pReadBufa = pReadBuf;
    OneBit = bf_read::ReadOneBit(pReadBuf);
    v19 = pReadBufa;
    if ( OneBit != 0 )
    {
      v20 = pReadBufa->m_nDataBits;
      v21 = pReadBufa->m_iCurBit;
      if ( v20 - v21 > 9 )
      {
        v22 = pReadBufa->m_pData;
        pReadBufa->m_iCurBit = v21 + 10;
        v14 = (((*&v22[4 * (v21 >> 5)] >> (v21 & 0x1F)) | (*&v22[4 * ((v21 + 9) >> 5)] << (32 - (v21 & 0x1F)))) & 0x3FF)
            + 1;
        goto LABEL_15;
      }
LABEL_29:
      v19->m_iCurBit = v20;
      bf_read::SetOverflowFlag(v19);
      v14 = 1;
      goto LABEL_15;
    }
    v23 = bf_read::ReadOneBit(pReadBufa);
    v19 = pReadBufa;
    v24 = v23 == 0;
    v20 = pReadBufa->m_nDataBits;
    v25 = pReadBufa->m_iCurBit;
    if ( v24 )
    {
      if ( v20 - v25 <= 30 )
        goto LABEL_29;
      v27 = pReadBufa->m_pData;
      pReadBufa->m_iCurBit = v25 + 31;
      v14 = ((*&v27[4 * (v25 >> 5)] >> (v25 & 0x1F)) | (*&v27[4 * ((v25 + 30) >> 5)] << (32 - (v25 & 0x1F)))) + 1;
    }
    else
    {
      if ( v20 - v25 <= 16 )
        goto LABEL_29;
      v26 = pReadBufa->m_pData;
      pReadBufa->m_iCurBit = v25 + 17;
      v14 = ((*&v26[4 * (v25 >> 5)] >> (v25 & 0x1F)) | (*&v26[4 * ((v25 + 16) >> 5)] << (32 - (v25 & 0x1F)))) + 1;
    }
LABEL_15:
    if ( !from->m_bUsingExternalPaths )
      break;
    if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
    {
      v31.m_szFile = "../public/tier2/fieldpath.h";
      v31.m_szFunction = "GetPathData";
      v31.m_nLine = 514;
      LoggingSystem_Log(LOG_GENERAL, LoggingSeverity_t::LS_ERROR, &v31, "GetPathData failed for read only CFieldPath");
    }
  }
  from->u.m_FixedPaths[m_nCount - 1].m_nValue += v14;
}


// FieldOp_Read_PopAllButOnePlusNPack3Bits  (line 1099, @0x000000000311a860, libserver.so)  // inlines: GetNumBitsLeft, GetPathData, IsUsingFixedPaths, LeafCodeInfo_t, LoadLittleDWord, Path_PopLast, Pop, ReadUBitLong, Set, operator[]
// calls: LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...), bf_read::SetOverflowFlag
// strings: "../public/tier2/fieldpath.h", "GetPathData", "GetPathData failed for read only CFieldPath", "Path_PopLast", "Path_PopLast failed for read only CFieldPath"
void __fastcall FieldOp_Read_PopAllButOnePlusNPack3Bits(CFieldPath *const from, bf_read *pReadBuf)
{
  int m_nCount; // ebx
  __int16 v4; // ax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // r8
  __int64 v10; // r9
  int m_iCurBit; // edx
  const unsigned __int8 *m_pData; // r8
  __int16 v13; // ax
  __int64 v14; // r8
  __int64 v15; // r9
  LeafCodeInfo_t v16; // [rsp+0h] [rbp-30h] BYREF

  m_nCount = from->m_nCount;
  if ( from->m_nCount <= 1 )
    goto LABEL_11;
  v4 = m_nCount - 1;
  if ( !from->m_bUsingExternalPaths )
    goto LABEL_9;
  if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
  {
    v16.m_szFile = "../public/tier2/fieldpath.h";
    v16.m_szFunction = "Path_PopLast";
    v16.m_nLine = 477;
    LoggingSystem_Log(
      LOG_GENERAL,
      LoggingSeverity_t::LS_ERROR,
      &v16,
      "Path_PopLast failed for read only CFieldPath",
      v9,
      v10);
  }
  while ( 1 )
  {
    if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v7, v8, v5, v6) != 0 )
      loc_0 = -559038737;
    v4 = Plat_ExitProcess(1);
    do
    {
      --v4;
LABEL_9:
      m_nCount = v4;
    }
    while ( v4 != 1 );
    from->m_nCount = 1;
LABEL_11:
    m_iCurBit = pReadBuf->m_iCurBit;
    if ( pReadBuf->m_nDataBits - m_iCurBit <= 2 )
    {
      pReadBuf->m_iCurBit = pReadBuf->m_nDataBits;
      bf_read::SetOverflowFlag(pReadBuf);
      v13 = 1;
    }
    else
    {
      m_pData = pReadBuf->m_pData;
      pReadBuf->m_iCurBit = m_iCurBit + 3;
      v13 = (((*&m_pData[4 * (m_iCurBit >> 5)] >> (m_iCurBit & 0x1F))
            | (*&m_pData[4 * ((m_iCurBit + 2) >> 5)] << (32 - (m_iCurBit & 0x1F))))
           & 7)
          + 1;
    }
    if ( !from->m_bUsingExternalPaths )
      break;
    if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
    {
      v16.m_szFile = "../public/tier2/fieldpath.h";
      v16.m_szFunction = "GetPathData";
      v16.m_nLine = 514;
      LoggingSystem_Log(
        LOG_GENERAL,
        LoggingSeverity_t::LS_ERROR,
        &v16,
        "GetPathData failed for read only CFieldPath",
        v14,
        v15);
    }
  }
  from->u.m_FixedPaths[m_nCount - 1].m_nValue += v13;
}


// FieldOp_Read_PopAllButOnePlusNPack6Bits  (line 1109, @0x000000000311aa00, libserver.so)  // inlines: GetNumBitsLeft, GetPathData, IsUsingFixedPaths, LeafCodeInfo_t, LoadLittleDWord, Path_PopLast, Pop, ReadUBitLong, Set, operator[]
// calls: LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...), bf_read::SetOverflowFlag
// strings: "../public/tier2/fieldpath.h", "GetPathData", "GetPathData failed for read only CFieldPath", "Path_PopLast", "Path_PopLast failed for read only CFieldPath"
void __fastcall FieldOp_Read_PopAllButOnePlusNPack6Bits(CFieldPath *const from, bf_read *pReadBuf)
{
  int m_nCount; // ebx
  __int16 v4; // ax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // r8
  __int64 v10; // r9
  int m_iCurBit; // edx
  const unsigned __int8 *m_pData; // r8
  __int16 v13; // ax
  __int64 v14; // r8
  __int64 v15; // r9
  LeafCodeInfo_t v16; // [rsp+0h] [rbp-30h] BYREF

  m_nCount = from->m_nCount;
  if ( from->m_nCount <= 1 )
    goto LABEL_11;
  v4 = m_nCount - 1;
  if ( !from->m_bUsingExternalPaths )
    goto LABEL_9;
  if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
  {
    v16.m_szFile = "../public/tier2/fieldpath.h";
    v16.m_szFunction = "Path_PopLast";
    v16.m_nLine = 477;
    LoggingSystem_Log(
      LOG_GENERAL,
      LoggingSeverity_t::LS_ERROR,
      &v16,
      "Path_PopLast failed for read only CFieldPath",
      v9,
      v10);
  }
  while ( 1 )
  {
    if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v7, v8, v5, v6) != 0 )
      loc_0 = -559038737;
    v4 = Plat_ExitProcess(1);
    do
    {
      --v4;
LABEL_9:
      m_nCount = v4;
    }
    while ( v4 != 1 );
    from->m_nCount = 1;
LABEL_11:
    m_iCurBit = pReadBuf->m_iCurBit;
    if ( pReadBuf->m_nDataBits - m_iCurBit <= 5 )
    {
      pReadBuf->m_iCurBit = pReadBuf->m_nDataBits;
      bf_read::SetOverflowFlag(pReadBuf);
      v13 = 1;
    }
    else
    {
      m_pData = pReadBuf->m_pData;
      pReadBuf->m_iCurBit = m_iCurBit + 6;
      v13 = (((*&m_pData[4 * (m_iCurBit >> 5)] >> (m_iCurBit & 0x1F))
            | (*&m_pData[4 * ((m_iCurBit + 5) >> 5)] << (32 - (m_iCurBit & 0x1F))))
           & 0x3F)
          + 1;
    }
    if ( !from->m_bUsingExternalPaths )
      break;
    if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
    {
      v16.m_szFile = "../public/tier2/fieldpath.h";
      v16.m_szFunction = "GetPathData";
      v16.m_nLine = 514;
      LoggingSystem_Log(
        LOG_GENERAL,
        LoggingSeverity_t::LS_ERROR,
        &v16,
        "GetPathData failed for read only CFieldPath",
        v14,
        v15);
    }
  }
  from->u.m_FixedPaths[m_nCount - 1].m_nValue += v13;
}


// FieldOp_Read_PopNPlusOne  (line 1119, @0x0000000003126710, libserver.so)  // inlines: CFieldPath_ReadUBitVar, GetDepth, GetNumBitsLeft, GetPathData, IsUsingFixedPaths, LeafCodeInfo_t, LoadLittleDWord, Path_PopLast, Pop, ReadOneBit, ReadOneBitNoCheck, ReadUBitLong, Set, operator[]
// calls: LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, bf_read::SetOverflowFlag, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...), bf_read::ReadOneBit
// strings: "../public/tier2/fieldpath.h", "GetPathData", "GetPathData failed for read only CFieldPath", "Path_PopLast", "Path_PopLast failed for read only CFieldPath"
void __fastcall FieldOp_Read_PopNPlusOne(CFieldPath *const from, bf_read *pReadBuf)
{
  int m_nDataBits; // ecx
  signed int m_iCurBit; // eax
  const unsigned __int8 *m_pData; // rdi
  int v6; // r8d
  signed int v7; // edx
  int v8; // eax
  int i; // edx
  int16 m_nCount; // cx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdi
  __int64 v14; // rsi
  int v15; // eax
  bf_read *v16; // rsi
  const unsigned __int8 *v17; // r8
  signed int v18; // edi
  int v19; // eax
  const unsigned __int8 *v20; // r8
  int v21; // edx
  int v22; // eax
  int OneBit; // eax
  bool v24; // zf
  int v25; // edx
  const unsigned __int8 *v26; // r8
  const unsigned __int8 *v27; // r8
  bf_read *pReadBufb; // [rsp+8h] [rbp-38h]
  bf_read *pReadBufc; // [rsp+8h] [rbp-38h]
  bf_read *pReadBufd; // [rsp+8h] [rbp-38h]
  bf_read *pReadBufa; // [rsp+8h] [rbp-38h]
  LeafCodeInfo_t v32; // [rsp+10h] [rbp-30h] BYREF

  m_nDataBits = pReadBuf->m_nDataBits;
  m_iCurBit = pReadBuf->m_iCurBit;
  if ( m_nDataBits - m_iCurBit <= 0 )
  {
    pReadBufb = pReadBuf;
    bf_read::SetOverflowFlag(pReadBuf);
    pReadBuf = pReadBufb;
    m_nDataBits = pReadBufb->m_nDataBits;
    v7 = pReadBufb->m_iCurBit;
  }
  else
  {
    m_pData = pReadBuf->m_pData;
    v6 = *&pReadBuf->m_pData[4 * (m_iCurBit >> 5)];
    v7 = m_iCurBit + 1;
    pReadBuf->m_iCurBit = m_iCurBit + 1;
    if ( _bittest(&v6, m_iCurBit) )
    {
      if ( m_nDataBits - v7 > 1 )
      {
        pReadBuf->m_iCurBit = m_iCurBit + 3;
        v8 = ((*&m_pData[4 * (v7 >> 5)] >> (v7 & 0x1F)) | (*&m_pData[4 * ((m_iCurBit + 2) >> 5)] << (32 - (v7 & 0x1F))))
           & 3;
        goto LABEL_5;
      }
LABEL_30:
      pReadBuf->m_iCurBit = m_nDataBits;
      bf_read::SetOverflowFlag(pReadBuf);
      goto LABEL_18;
    }
  }
  if ( m_nDataBits - v7 <= 0 )
  {
    pReadBufc = pReadBuf;
    bf_read::SetOverflowFlag(pReadBuf);
    pReadBuf = pReadBufc;
    m_nDataBits = pReadBufc->m_nDataBits;
    v18 = pReadBufc->m_iCurBit;
LABEL_27:
    if ( m_nDataBits - v18 <= 0 )
    {
      pReadBufd = pReadBuf;
      bf_read::SetOverflowFlag(pReadBuf);
      pReadBuf = pReadBufd;
    }
    else
    {
      v20 = pReadBuf->m_pData;
      v21 = v18 + 1;
      v22 = *&pReadBuf->m_pData[4 * (v18 >> 5)];
      pReadBuf->m_iCurBit = v18 + 1;
      if ( _bittest(&v22, v18) )
      {
        if ( m_nDataBits - v21 <= 9 )
          goto LABEL_30;
        pReadBuf->m_iCurBit = v18 + 11;
        v8 = ((*&v20[4 * (v21 >> 5)] >> (v21 & 0x1F)) | (*&v20[4 * ((v18 + 10) >> 5)] << (32 - (v21 & 0x1F)))) & 0x3FF;
        goto LABEL_5;
      }
    }
    pReadBufa = pReadBuf;
    OneBit = bf_read::ReadOneBit(pReadBuf);
    v16 = pReadBufa;
    v24 = OneBit == 0;
    v15 = pReadBufa->m_nDataBits;
    v25 = pReadBufa->m_iCurBit;
    if ( v24 )
    {
      if ( v15 - v25 <= 30 )
        goto LABEL_17;
      v27 = pReadBufa->m_pData;
      pReadBufa->m_iCurBit = v25 + 31;
      v8 = ((*&v27[4 * (v25 >> 5)] >> (v25 & 0x1F)) | (*&v27[4 * ((v25 + 30) >> 5)] << (32 - (v25 & 0x1F))))
         & 0x7FFFFFFF;
    }
    else
    {
      if ( v15 - v25 <= 16 )
        goto LABEL_17;
      v26 = pReadBufa->m_pData;
      pReadBufa->m_iCurBit = v25 + 17;
      v8 = ((*&v26[4 * (v25 >> 5)] >> (v25 & 0x1F)) | (*&v26[4 * ((v25 + 16) >> 5)] << (32 - (v25 & 0x1F)))) & 0x1FFFF;
    }
    goto LABEL_5;
  }
  v17 = pReadBuf->m_pData;
  v18 = v7 + 1;
  v19 = *&pReadBuf->m_pData[4 * (v7 >> 5)];
  pReadBuf->m_iCurBit = v7 + 1;
  if ( !_bittest(&v19, v7) )
    goto LABEL_27;
  if ( m_nDataBits - v18 <= 3 )
    goto LABEL_30;
  pReadBuf->m_iCurBit = v7 + 5;
  v8 = ((*&v17[4 * (v18 >> 5)] >> (v18 & 0x1F)) | (*&v17[4 * ((v7 + 4) >> 5)] << (32 - (v18 & 0x1F)))) & 0xF;
LABEL_5:
  if ( v8 <= 0 )
    goto LABEL_18;
  if ( from->m_bUsingExternalPaths )
  {
    from = &LOG_GENERAL;
    if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, &loc_2 + 2) != 0 )
    {
      v32.m_szFile = "../public/tier2/fieldpath.h";
      v32.m_szFunction = "Path_PopLast";
      v32.m_nLine = 477;
      LoggingSystem_Log(LOG_GENERAL, LoggingSeverity_t::LS_ERROR, &v32, "Path_PopLast failed for read only CFieldPath");
    }
    while ( 1 )
    {
      if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v13, v14, v11, v12) != 0 )
        loc_0 = -559038737;
      v15 = Plat_ExitProcess(1);
LABEL_17:
      v16->m_iCurBit = v15;
      bf_read::SetOverflowFlag(v16);
LABEL_18:
      m_nCount = from->m_nCount;
      if ( !from->m_bUsingExternalPaths )
        break;
      from = &LOG_GENERAL;
      if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
      {
        v32.m_szFile = "../public/tier2/fieldpath.h";
        v32.m_szFunction = "GetPathData";
        v32.m_nLine = 514;
        LoggingSystem_Log(LOG_GENERAL, LoggingSeverity_t::LS_ERROR, &v32, "GetPathData failed for read only CFieldPath");
      }
    }
  }
  else
  {
    for ( i = 1; ; ++i )
    {
      m_nCount = from->m_nCount - i;
      if ( i == v8 )
        break;
    }
    from->m_nCount = m_nCount;
  }
  ++from->u.m_FixedPaths[m_nCount - 1].m_nValue;
}


// FieldOp_Read_PopNPlusN  (line 1132, @0x0000000003126a80, libserver.so)  // inlines: CFieldPath_ReadUBitVar, GetDepth, GetNumBitsLeft, GetPathData, IsUsingFixedPaths, LeafCodeInfo_t, LoadLittleDWord, Path_PopLast, Pop, ReadOneBit, ReadOneBitNoCheck, ReadSignedVarInt32, ReadUBitLong, Set, ZigZagDecode32, operator[]
// calls: bf_read::ReadVarInt32, LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...), bf_read::SetOverflowFlag, bf_read::ReadOneBit
// strings: "../public/tier2/fieldpath.h", "GetPathData", "GetPathData failed for read only CFieldPath", "Path_PopLast", "Path_PopLast failed for read only CFieldPath"
void __fastcall FieldOp_Read_PopNPlusN(CFieldPath *const from, bf_read *pReadBuf)
{
  int m_nDataBits; // ecx
  signed int m_iCurBit; // eax
  const unsigned __int8 *m_pData; // rdi
  int v6; // r8d
  signed int v7; // edx
  int v8; // eax
  int i; // edx
  int16 v10; // cx
  int16 m_nCount; // r12
  uint32 VarInt32; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // rsi
  const unsigned __int8 *v17; // r8
  signed int v18; // edi
  int v19; // eax
  const unsigned __int8 *v20; // r8
  int v21; // edx
  int v22; // eax
  int OneBit; // eax
  int v24; // edx
  int v25; // ecx
  const unsigned __int8 *v26; // r9
  const unsigned __int8 *v27; // r9
  bf_read *pReadBufb; // [rsp+8h] [rbp-38h]
  bf_read *pReadBufc; // [rsp+8h] [rbp-38h]
  bf_read *pReadBufd; // [rsp+8h] [rbp-38h]
  bf_read *pReadBufe; // [rsp+8h] [rbp-38h]
  bf_read *pReadBufa; // [rsp+8h] [rbp-38h]
  LeafCodeInfo_t v33; // [rsp+10h] [rbp-30h] BYREF

  m_nDataBits = pReadBuf->m_nDataBits;
  m_iCurBit = pReadBuf->m_iCurBit;
  if ( m_nDataBits - m_iCurBit <= 0 )
  {
    pReadBufb = pReadBuf;
    bf_read::SetOverflowFlag(pReadBuf);
    pReadBuf = pReadBufb;
    m_nDataBits = pReadBufb->m_nDataBits;
    v7 = pReadBufb->m_iCurBit;
  }
  else
  {
    m_pData = pReadBuf->m_pData;
    v6 = *&pReadBuf->m_pData[4 * (m_iCurBit >> 5)];
    v7 = m_iCurBit + 1;
    pReadBuf->m_iCurBit = m_iCurBit + 1;
    if ( _bittest(&v6, m_iCurBit) )
    {
      if ( m_nDataBits - v7 > 1 )
      {
        pReadBuf->m_iCurBit = m_iCurBit + 3;
        v8 = ((*&m_pData[4 * (v7 >> 5)] >> (v7 & 0x1F)) | (*&m_pData[4 * ((m_iCurBit + 2) >> 5)] << (32 - (v7 & 0x1F))))
           & 3;
        goto LABEL_5;
      }
LABEL_29:
      pReadBuf->m_iCurBit = m_nDataBits;
      pReadBufd = pReadBuf;
      bf_read::SetOverflowFlag(pReadBuf);
      pReadBuf = pReadBufd;
      goto LABEL_30;
    }
  }
  if ( m_nDataBits - v7 <= 0 )
  {
    pReadBufc = pReadBuf;
    bf_read::SetOverflowFlag(pReadBuf);
    pReadBuf = pReadBufc;
    m_nDataBits = pReadBufc->m_nDataBits;
    v18 = pReadBufc->m_iCurBit;
LABEL_26:
    if ( m_nDataBits - v18 <= 0 )
    {
      pReadBufe = pReadBuf;
      bf_read::SetOverflowFlag(pReadBuf);
      pReadBuf = pReadBufe;
    }
    else
    {
      v20 = pReadBuf->m_pData;
      v21 = v18 + 1;
      v22 = *&pReadBuf->m_pData[4 * (v18 >> 5)];
      pReadBuf->m_iCurBit = v18 + 1;
      if ( _bittest(&v22, v18) )
      {
        if ( m_nDataBits - v21 <= 9 )
          goto LABEL_29;
        pReadBuf->m_iCurBit = v18 + 11;
        v8 = ((*&v20[4 * (v21 >> 5)] >> (v21 & 0x1F)) | (*&v20[4 * ((v18 + 10) >> 5)] << (32 - (v21 & 0x1F)))) & 0x3FF;
        goto LABEL_5;
      }
    }
    pReadBufa = pReadBuf;
    OneBit = bf_read::ReadOneBit(pReadBuf);
    pReadBuf = pReadBufa;
    v24 = pReadBufa->m_iCurBit;
    v25 = pReadBufa->m_nDataBits;
    if ( OneBit != 0 )
    {
      if ( v25 - v24 > 16 )
      {
        v26 = pReadBufa->m_pData;
        pReadBufa->m_iCurBit = v24 + 17;
        v8 = ((*&v26[4 * (v24 >> 5)] >> (v24 & 0x1F)) | (*&v26[4 * ((v24 + 16) >> 5)] << (32 - (v24 & 0x1F)))) & 0x1FFFF;
        goto LABEL_5;
      }
    }
    else if ( v25 - v24 > 30 )
    {
      v27 = pReadBufa->m_pData;
      pReadBufa->m_iCurBit = v24 + 31;
      v8 = ((*&v27[4 * (v24 >> 5)] >> (v24 & 0x1F)) | (*&v27[4 * ((v24 + 30) >> 5)] << (32 - (v24 & 0x1F))))
         & 0x7FFFFFFF;
      goto LABEL_5;
    }
    pReadBufa->m_iCurBit = pReadBufa->m_nDataBits;
    bf_read::SetOverflowFlag(pReadBufa);
    pReadBuf = pReadBufa;
    goto LABEL_30;
  }
  v17 = pReadBuf->m_pData;
  v18 = v7 + 1;
  v19 = *&pReadBuf->m_pData[4 * (v7 >> 5)];
  pReadBuf->m_iCurBit = v7 + 1;
  if ( !_bittest(&v19, v7) )
    goto LABEL_26;
  if ( m_nDataBits - v18 <= 3 )
    goto LABEL_29;
  pReadBuf->m_iCurBit = v7 + 5;
  v8 = ((*&v17[4 * (v18 >> 5)] >> (v18 & 0x1F)) | (*&v17[4 * ((v7 + 4) >> 5)] << (32 - (v18 & 0x1F)))) & 0xF;
LABEL_5:
  if ( v8 <= 0 )
  {
LABEL_30:
    m_nCount = from->m_nCount;
    goto LABEL_11;
  }
  if ( from->m_bUsingExternalPaths )
  {
    if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
    {
      v33.m_szFile = "../public/tier2/fieldpath.h";
      v33.m_szFunction = "Path_PopLast";
      v33.m_nLine = 477;
      LoggingSystem_Log(LOG_GENERAL, LoggingSeverity_t::LS_ERROR, &v33, "Path_PopLast failed for read only CFieldPath");
    }
    goto LABEL_15;
  }
  for ( i = 1; ; ++i )
  {
    v10 = from->m_nCount - i;
    if ( i == v8 )
      break;
  }
  from->m_nCount = v10;
  m_nCount = v10;
LABEL_11:
  VarInt32 = bf_read::ReadVarInt32(pReadBuf);
  if ( from->m_bUsingExternalPaths )
  {
    while ( 1 )
    {
      if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
      {
        v33.m_szFile = "../public/tier2/fieldpath.h";
        v33.m_szFunction = "GetPathData";
        v33.m_nLine = 514;
        LoggingSystem_Log(LOG_GENERAL, LoggingSeverity_t::LS_ERROR, &v33, "GetPathData failed for read only CFieldPath");
      }
LABEL_15:
      if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v15, v16, v13, v14) != 0 )
        loc_0 = -559038737;
      Plat_ExitProcess(1);
    }
  }
  from->u.m_FixedPaths[m_nCount - 1].m_nValue += (VarInt32 >> 1) ^ -(VarInt32 & 1);
}


// FieldOp_Read_PopNAndNonTopographical  (line 1145, @0x0000000003126e40, libserver.so)  // inlines: CFieldPath_ReadUBitVar, GetDepth, GetNumBitsLeft, GetPathData, IsUsingFixedPaths, LeafCodeInfo_t, LoadLittleDWord, Path_PopLast, Pop, ReadOneBit, ReadOneBitNoCheck, ReadSignedVarInt32, ReadUBitLong, Set, ZigZagDecode32, operator[]
// calls: bf_read::ReadVarInt32, LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...), bf_read::SetOverflowFlag, bf_read::ReadOneBit
// strings: "../public/tier2/fieldpath.h", "GetPathData", "GetPathData failed for read only CFieldPath", "Path_PopLast", "Path_PopLast failed for read only CFieldPath"
void __fastcall FieldOp_Read_PopNAndNonTopographical(CFieldPath *const from, bf_read *pReadBuf)
{
  int m_nDataBits; // ecx
  signed int m_iCurBit; // eax
  const unsigned __int8 *m_pData; // rsi
  int v7; // edi
  signed int v8; // edx
  int v9; // eax
  int i; // edx
  __int16 m_nCount; // cx
  int v12; // r12d
  CFieldPath *v13; // r13
  signed int v14; // eax
  int v15; // edx
  uint32 VarInt32; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdi
  __int64 v20; // rsi
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // r8
  __int64 v24; // r9
  int v25; // eax
  int v26; // edx
  const unsigned __int8 *v27; // rdi
  int v28; // esi
  int v29; // eax
  const unsigned __int8 *v30; // r8
  int OneBit; // eax
  int v32; // edx
  bool v33; // zf
  const unsigned __int8 *v34; // r8
  const unsigned __int8 *v35; // r8
  LeafCodeInfo_t v36; // [rsp+0h] [rbp-40h] BYREF

  m_nDataBits = pReadBuf->m_nDataBits;
  m_iCurBit = pReadBuf->m_iCurBit;
  if ( m_nDataBits - m_iCurBit <= 0 )
  {
    bf_read::SetOverflowFlag(pReadBuf);
    m_nDataBits = pReadBuf->m_nDataBits;
    v8 = pReadBuf->m_iCurBit;
  }
  else
  {
    m_pData = pReadBuf->m_pData;
    v7 = *&m_pData[4 * (m_iCurBit >> 5)];
    v8 = m_iCurBit + 1;
    pReadBuf->m_iCurBit = m_iCurBit + 1;
    if ( _bittest(&v7, m_iCurBit) )
    {
      if ( m_nDataBits - v8 > 1 )
      {
        pReadBuf->m_iCurBit = m_iCurBit + 3;
        v9 = ((*&m_pData[4 * (v8 >> 5)] >> (v8 & 0x1F)) | (*&m_pData[4 * ((m_iCurBit + 2) >> 5)] << (32 - (v8 & 0x1F))))
           & 3;
        goto LABEL_5;
      }
LABEL_37:
      pReadBuf->m_iCurBit = m_nDataBits;
      bf_read::SetOverflowFlag(pReadBuf);
      m_nCount = from->m_nCount;
      goto LABEL_11;
    }
  }
  if ( m_nDataBits - v8 <= 0 )
  {
    bf_read::SetOverflowFlag(pReadBuf);
    goto LABEL_28;
  }
  v27 = pReadBuf->m_pData;
  v28 = v8 + 1;
  v29 = *&pReadBuf->m_pData[4 * (v8 >> 5)];
  pReadBuf->m_iCurBit = v8 + 1;
  if ( !_bittest(&v29, v8) )
  {
LABEL_28:
    if ( bf_read::ReadOneBit(pReadBuf) != 0 )
    {
      v25 = pReadBuf->m_nDataBits;
      v26 = pReadBuf->m_iCurBit;
      if ( v25 - v26 > 9 )
      {
        v30 = pReadBuf->m_pData;
        pReadBuf->m_iCurBit = v26 + 10;
        v9 = ((*&v30[4 * (v26 >> 5)] >> (v26 & 0x1F)) | (*&v30[4 * ((v26 + 9) >> 5)] << (32 - (v26 & 0x1F)))) & 0x3FF;
        goto LABEL_5;
      }
    }
    else
    {
      OneBit = bf_read::ReadOneBit(pReadBuf);
      v32 = pReadBuf->m_iCurBit;
      v33 = OneBit == 0;
      v25 = pReadBuf->m_nDataBits;
      if ( v33 )
      {
        if ( v25 - v32 > 30 )
        {
          v35 = pReadBuf->m_pData;
          pReadBuf->m_iCurBit = v32 + 31;
          v9 = ((*&v35[4 * (v32 >> 5)] >> (v32 & 0x1F)) | (*&v35[4 * ((v32 + 30) >> 5)] << (32 - (v32 & 0x1F))))
             & 0x7FFFFFFF;
          goto LABEL_5;
        }
      }
      else if ( v25 - v32 > 16 )
      {
        v34 = pReadBuf->m_pData;
        pReadBuf->m_iCurBit = v32 + 17;
        v9 = ((*&v34[4 * (v32 >> 5)] >> (v32 & 0x1F)) | (*&v34[4 * ((v32 + 16) >> 5)] << (32 - (v32 & 0x1F)))) & 0x1FFFF;
        goto LABEL_5;
      }
    }
    pReadBuf->m_iCurBit = v25;
    bf_read::SetOverflowFlag(pReadBuf);
    goto LABEL_31;
  }
  if ( m_nDataBits - v28 <= 3 )
    goto LABEL_37;
  pReadBuf->m_iCurBit = v8 + 5;
  v9 = ((*&v27[4 * (v28 >> 5)] >> (v28 & 0x1F)) | (*&v27[4 * ((v8 + 4) >> 5)] << (32 - (v28 & 0x1F)))) & 0xF;
LABEL_5:
  if ( v9 <= 0 )
  {
LABEL_31:
    m_nCount = from->m_nCount;
    goto LABEL_11;
  }
  if ( from->m_bUsingExternalPaths )
  {
    if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
    {
      v36.m_szFile = "../public/tier2/fieldpath.h";
      v36.m_szFunction = "Path_PopLast";
      v36.m_nLine = 477;
      LoggingSystem_Log(
        LOG_GENERAL,
        LoggingSeverity_t::LS_ERROR,
        &v36,
        "Path_PopLast failed for read only CFieldPath",
        v21,
        v22);
    }
    goto LABEL_20;
  }
  for ( i = 1; ; ++i )
  {
    m_nCount = from->m_nCount - i;
    if ( i == v9 )
      break;
  }
  from->m_nCount = m_nCount;
LABEL_11:
  v12 = 0;
  v13 = from;
  if ( m_nCount > 0 )
  {
    do
    {
      v14 = pReadBuf->m_iCurBit;
      if ( pReadBuf->m_nDataBits - v14 <= 0 )
      {
        bf_read::SetOverflowFlag(pReadBuf);
      }
      else
      {
        v15 = *&pReadBuf->m_pData[4 * (v14 >> 5)];
        pReadBuf->m_iCurBit = v14 + 1;
        if ( _bittest(&v15, v14) )
        {
          VarInt32 = bf_read::ReadVarInt32(pReadBuf);
          if ( from->m_bUsingExternalPaths )
          {
            while ( 1 )
            {
              if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
              {
                v36.m_szFile = "../public/tier2/fieldpath.h";
                v36.m_szFunction = "GetPathData";
                v36.m_nLine = 514;
                LoggingSystem_Log(
                  LOG_GENERAL,
                  LoggingSeverity_t::LS_ERROR,
                  &v36,
                  "GetPathData failed for read only CFieldPath",
                  v23,
                  v24);
              }
LABEL_20:
              if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v19, v20, v17, v18) != 0 )
                loc_0 = -559038737;
              Plat_ExitProcess(1);
            }
          }
          v13->u.m_FixedPaths[0].m_nValue += (VarInt32 >> 1) ^ -(VarInt32 & 1);
        }
      }
      ++v12;
      v13 = (v13 + 2);
    }
    while ( v12 < from->m_nCount );
  }
}


// FieldOp_Read_NonTopoComplex  (line 1163, @0x000000000311aba0, libserver.so)  // inlines: GetDepth, GetNumBitsLeft, GetPathData, LeafCodeInfo_t, ReadOneBit, ReadOneBitNoCheck, ReadSignedVarInt32, Set, ZigZagDecode32, operator[]
// calls: bf_read::ReadVarInt32, LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, bf_read::SetOverflowFlag, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...)
// strings: "../public/tier2/fieldpath.h", "GetPathData", "GetPathData failed for read only CFieldPath"
void __fastcall FieldOp_Read_NonTopoComplex(CFieldPath *const from, bf_read *pReadBuf)
{
  CFieldPath *v3; // r13
  int i; // r12d
  signed int m_iCurBit; // eax
  int v7; // edx
  uint32 VarInt32; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // r8
  __int64 v14; // r9
  LeafCodeInfo_t v15; // [rsp+0h] [rbp-40h] BYREF

  v3 = from;
  for ( i = 0; i < from->m_nCount; v3 = (v3 + 2) )
  {
    m_iCurBit = pReadBuf->m_iCurBit;
    if ( pReadBuf->m_nDataBits - m_iCurBit <= 0 )
      goto LABEL_13;
    v7 = *&pReadBuf->m_pData[4 * (m_iCurBit >> 5)];
    pReadBuf->m_iCurBit = m_iCurBit + 1;
    if ( _bittest(&v7, m_iCurBit) )
    {
      VarInt32 = bf_read::ReadVarInt32(pReadBuf);
      if ( from->m_bUsingExternalPaths )
      {
        pReadBuf = &LOG_GENERAL;
        if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
        {
          v15.m_szFile = "../public/tier2/fieldpath.h";
          v15.m_szFunction = "GetPathData";
          v15.m_nLine = 514;
          LoggingSystem_Log(
            LOG_GENERAL,
            LoggingSeverity_t::LS_ERROR,
            &v15,
            "GetPathData failed for read only CFieldPath",
            v13,
            v14);
        }
        if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v11, v12, v9, v10) != 0 )
          loc_0 = -559038737;
        Plat_ExitProcess(1);
LABEL_13:
        bf_read::SetOverflowFlag(pReadBuf);
        goto LABEL_3;
      }
      v3->u.m_FixedPaths[0].m_nValue += (VarInt32 >> 1) ^ -(VarInt32 & 1);
    }
LABEL_3:
    ++i;
  }
}


// FieldOp_Read_NonTopoPenultimatePluseOne  (line 1175, @0x0000000003116d90, libserver.so)  // inlines: GetPathData, LeafCodeInfo_t, Set, operator[]
// calls: LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...)
// strings: "../public/tier2/fieldpath.h", "GetPathData", "GetPathData failed for read only CFieldPath"
void __fastcall FieldOp_Read_NonTopoPenultimatePluseOne(CFieldPath *const from, bf_read *pReadBuf)
{
  __int64 v2; // rbx
  __int64 v3; // rbp
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // r8
  __int64 v9; // r9
  LeafCodeInfo_t v10; // [rsp-38h] [rbp-38h] BYREF
  __int64 v11; // [rsp-10h] [rbp-10h]
  __int64 v12; // [rsp-8h] [rbp-8h]

  if ( from->m_bUsingExternalPaths )
  {
    v12 = v3;
    v11 = v2;
    if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
      goto LABEL_7;
    while ( 1 )
    {
      if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v6, v7, v4, v5) != 0 )
        loc_0 = -559038737;
      Plat_ExitProcess(1);
LABEL_7:
      v10.m_szFile = "../public/tier2/fieldpath.h";
      v10.m_szFunction = "GetPathData";
      v10.m_nLine = 514;
      LoggingSystem_Log(
        LOG_GENERAL,
        LoggingSeverity_t::LS_ERROR,
        &v10,
        "GetPathData failed for read only CFieldPath",
        v8,
        v9);
    }
  }
  ++from->u.m_FixedPaths[from->m_nCount - 2].m_nValue;
}


// FieldOp_Read_NonTopoComplexPack4Bits  (line 1182, @0x000000000311acd0, libserver.so)  // inlines: GetDepth, GetNumBitsLeft, GetPathData, LeafCodeInfo_t, LoadLittleDWord, ReadOneBit, ReadOneBitNoCheck, ReadUBitLong, Set, operator[]
// calls: LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, bf_read::SetOverflowFlag, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...)
// strings: "../public/tier2/fieldpath.h", "GetPathData", "GetPathData failed for read only CFieldPath"
void __fastcall FieldOp_Read_NonTopoComplexPack4Bits(CFieldPath *const from, bf_read *pReadBuf)
{
  CFieldPath *v3; // r14
  int i; // r12d
  int m_nDataBits; // ecx
  signed int m_iCurBit; // eax
  const unsigned __int8 *m_pData; // rsi
  int v9; // edi
  int v10; // edx
  __int16 v11; // ax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // r8
  __int64 v17; // r9
  LeafCodeInfo_t v18; // [rsp+0h] [rbp-50h] BYREF

  v3 = from;
  for ( i = 0; i < from->m_nCount; v3 = (v3 + 2) )
  {
    m_nDataBits = pReadBuf->m_nDataBits;
    m_iCurBit = pReadBuf->m_iCurBit;
    if ( m_nDataBits - m_iCurBit <= 0 )
    {
      bf_read::SetOverflowFlag(pReadBuf);
    }
    else
    {
      m_pData = pReadBuf->m_pData;
      v9 = *&pReadBuf->m_pData[4 * (m_iCurBit >> 5)];
      v10 = m_iCurBit + 1;
      pReadBuf->m_iCurBit = m_iCurBit + 1;
      if ( _bittest(&v9, m_iCurBit) )
      {
        if ( m_nDataBits - v10 > 3 )
        {
          pReadBuf->m_iCurBit = m_iCurBit + 5;
          v11 = (((*&m_pData[4 * (v10 >> 5)] >> (v10 & 0x1F))
                | (*&m_pData[4 * ((m_iCurBit + 4) >> 5)] << (32 - (v10 & 0x1F))))
               & 0xF)
              - 7;
          goto LABEL_9;
        }
        while ( 1 )
        {
          pReadBuf->m_iCurBit = m_nDataBits;
          bf_read::SetOverflowFlag(pReadBuf);
          v11 = -7;
LABEL_9:
          if ( !from->m_bUsingExternalPaths )
            break;
          pReadBuf = &LOG_GENERAL;
          if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
          {
            v18.m_szFile = "../public/tier2/fieldpath.h";
            v18.m_szFunction = "GetPathData";
            v18.m_nLine = 514;
            LoggingSystem_Log(
              LOG_GENERAL,
              LoggingSeverity_t::LS_ERROR,
              &v18,
              "GetPathData failed for read only CFieldPath",
              v16,
              v17);
          }
          if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v14, v15, v12, v13) != 0 )
            loc_0 = -559038737;
          Plat_ExitProcess(1);
        }
        v3->u.m_FixedPaths[0].m_nValue += v11;
      }
    }
    ++i;
  }
}


// FieldOp_Read_FieldPathEncodeFinish  (line 1195, @0x0000000003117800, libserver.so)  // inlines: IsUsingFixedPaths, LeafCodeInfo_t, MakeSentinel, Path_AddToTail, Path_RemoveAll, Push
// calls: LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...)
// strings: "../public/tier2/fieldpath.h", "Path_RemoveAll", "Path_RemoveAll failed for read only CFieldPath"
void __fastcall FieldOp_Read_FieldPathEncodeFinish(CFieldPath *const from, bf_read *pReadBuf)
{
  __int64 v2; // rbx
  __int64 v3; // rbp
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // r8
  __int64 v9; // r9
  LeafCodeInfo_t v10; // [rsp-38h] [rbp-38h] BYREF
  __int64 v11; // [rsp-10h] [rbp-10h]
  __int64 v12; // [rsp-8h] [rbp-8h]

  if ( from->m_bUsingExternalPaths )
  {
    v12 = v3;
    v11 = v2;
    if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
      goto LABEL_7;
    while ( 1 )
    {
      if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v6, v7, v4, v5) != 0 )
        loc_0 = -559038737;
      Plat_ExitProcess(1);
LABEL_7:
      v10.m_szFile = "../public/tier2/fieldpath.h";
      v10.m_szFunction = "Path_RemoveAll";
      v10.m_nLine = 487;
      LoggingSystem_Log(
        LOG_GENERAL,
        LoggingSeverity_t::LS_ERROR,
        &v10,
        "Path_RemoveAll failed for read only CFieldPath",
        v8,
        v9);
    }
  }
  from->m_nCount = 1;
  from->u.m_FixedPaths[0].m_nValue = 0x7FFF;
}


// CFieldPathList::CFieldPathList  (line 1247, @0x0000000003127530, libserver.so)  // inlines: CUtlLeanVectorFixedGrowable, CUtlLeanVectorFixedGrowableBase, CUtlLeanVectorImpl
void __fastcall CFieldPathList::CFieldPathList(CFieldPathList *const this)
{
  this->m_FieldPaths.m_nCount = 0;
  this->m_FieldPaths.m_nAllocated = 3;
  this->m_Paths.m_nCount = 0;
  this->m_Paths.m_nAllocated = 6;
}


// CFieldPathList::~CFieldPathList  (line 1251, @0x0000000003127560, libserver.so)  // inlines: Base, Purge, PurgeNonTemporary, RemoveAll, ~CUtlLeanVectorFixedGrowable, ~CUtlLeanVectorFixedGrowableBase, ~CUtlLeanVectorImpl
void __fastcall CFieldPathList::~CFieldPathList(CFieldPathList *const this)
{
  CUtlLeanVectorFixedGrowableBase<CFieldPathReconstruct_t,3u,short int>::IndexType_t m_nAllocated; // ax
  __int64 v3; // rdx
  unsigned __int64 v4; // rax
  CUtlLeanVectorFixedGrowableBase<CFieldPathReconstruct_t,3u,short int>::IndexType_t v5; // cx
  void (__fastcall *v6)(_QWORD *, CUtlLeanVectorFixedGrowableBase<CFieldPathReconstruct_t,3u,short int>::ElemType_t *); // rdx
  void (__fastcall *v7)(_QWORD *, CUtlLeanVectorFixedGrowableBase<CFieldPathReconstruct_t,3u,short int>::ElemType_t *); // rax
  CUtlLeanVectorFixedGrowableBase<CFieldPath::Path_t,6u,short int>::ElemType_t *m_pElements; // rsi

  this->m_FieldPaths.m_nCount = 0;
  m_nAllocated = this->m_FieldPaths.m_nAllocated;
  if ( m_nAllocated > 3 )
  {
    v6 = *(*g_pMemAlloc + 16LL);
    if ( m_nAllocated != 0 )
      v6(g_pMemAlloc, this->m_FieldPaths.m_pElements);
    else
      v6(g_pMemAlloc, 0);
  }
  v3 = this->m_Paths.m_nAllocated;
  this->m_FieldPaths.m_nAllocated = 3;
  v4 = 3;
  v5 = 3;
  this->m_Paths.m_nCount = 0;
  if ( v3 > 6 )
  {
    if ( v3 != 0 )
      m_pElements = this->m_Paths.m_pElements;
    else
      m_pElements = 0;
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, m_pElements, v3, 3);
    v5 = this->m_FieldPaths.m_nAllocated;
    v4 = v5;
  }
  this->m_Paths.m_nCount = 0;
  this->m_Paths.m_nAllocated = 6;
  this->m_FieldPaths.m_nCount = 0;
  if ( v4 > 3 )
  {
    v7 = *(*g_pMemAlloc + 16LL);
    if ( v5 != 0 )
      v7(g_pMemAlloc, this->m_FieldPaths.m_pElements);
    else
      v7(g_pMemAlloc, 0);
  }
  this->m_FieldPaths.m_nAllocated = 3;
}


// FieldPathReconstructComparator  (line 1258, @0x0000000003116a90, libserver.so)  // inlines: ComparePaths, GetDepth
int __fastcall FieldPathReconstructComparator(void *pContext, const void *a, const void *b)
{
  int v3; // r8d
  int v4; // r9d
  __int64 v5; // rax
  int v6; // edx
  char *v7; // rsi
  char *v8; // rcx
  __int64 v9; // rax
  __int16 v10; // di

  v3 = *(b + 1);
  v4 = *(a + 1);
  v5 = *b;
  v6 = v4;
  if ( v3 <= v4 )
    v6 = v3;
  if ( v6 > 0 )
  {
    v7 = pContext + 2 * *a;
    v8 = pContext + 2 * v5;
    v9 = 0;
    do
    {
      v10 = *&v8[2 * v9];
      if ( *&v7[2 * v9] < v10 )
        return -1;
      if ( *&v7[2 * v9] > v10 )
        return 1;
    }
    while ( v6 > ++v9 );
  }
  if ( v4 != v3 )
  {
    if ( v4 >= v3 )
      return 1;
    return -1;
  }
  return 0;
}


// CFieldPathList::Sort  (line 1271, @0x0000000003127680, libserver.so)  // inlines: Base
// calls: V_qsort_s
// globals: FieldPathReconstructComparator(void *,void const*,void const*)
void __fastcall CFieldPathList::Sort(CFieldPathList *const this)
{
  unsigned __int64 m_nAllocated; // rax
  CUtlLeanVectorFixedGrowableBase<CFieldPath::Path_t,6u,short int>::ElemType_t *m_pElements; // r8
  unsigned __int64 v3; // rax
  __int64 m_nCount; // rsi
  CUtlLeanVectorFixedGrowableBase<CFieldPathReconstruct_t,3u,short int>::ElemType_t *v5; // rdi

  m_nAllocated = this->m_Paths.m_nAllocated;
  if ( m_nAllocated != 0 )
  {
    m_pElements = (&this->m_Paths.m_nAllocAllocated + 1);
    if ( m_nAllocated > 6 )
      m_pElements = this->m_Paths.m_pElements;
  }
  else
  {
    m_pElements = 0;
  }
  v3 = this->m_FieldPaths.m_nAllocated;
  m_nCount = this->m_FieldPaths.m_nCount;
  if ( v3 != 0 )
  {
    if ( v3 <= 3 )
      v5 = (&this->m_FieldPaths.m_nAllocAllocated + 1);
    else
      v5 = this->m_FieldPaths.m_pElements;
  }
  else
  {
    v5 = 0;
  }
  V_qsort_s(v5, m_nCount, 4, FieldPathReconstructComparator, m_pElements);
}


// CFieldPathList::IsSorted  (line 1277, @0x00000000031276f0, libserver.so)  // inlines: Base, ComparePaths, Element, GetDepth, operator<, operator==, operator[]
bool __fastcall CFieldPathList::IsSorted(const CFieldPathList *const this, bool bAllowDups)
{
  __int64 v2; // r9
  CUtlLeanVectorFixedGrowableBase<CFieldPathReconstruct_t,3u,short int>::IndexType_t m_nAllocated; // si
  CUtlLeanVectorFixedGrowableBase<CFieldPath::Path_t,6u,short int>::IndexType_t v5; // r11
  CUtlLeanVectorFixedGrowableBase<CFieldPathReconstruct_t,3u,short int>::ElemType_t *m_pElements; // rax
  CUtlLeanVectorFixedGrowableBase<CFieldPathReconstruct_t,3u,short int>::ElemType_t *v7; // rax
  int m_nCount; // r10d
  __int64 m_nStart; // rax
  CUtlLeanVectorFixedGrowableBase<CFieldPath::Path_t,6u,short int>::ElemType_t *v10; // rdx
  CUtlLeanVectorFixedGrowableBase<CFieldPath::Path_t,6u,short int>::ElemType_t *v11; // rdx
  CUtlLeanVectorFixedGrowableBase<CFieldPathReconstruct_t,3u,short int>::ElemType_t *v12; // rax
  CUtlLeanVectorFixedGrowableBase<CFieldPathReconstruct_t,3u,short int>::ElemType_t *v13; // rax
  int v14; // r15d
  __int64 v15; // rax
  CUtlLeanVectorFixedGrowableBase<CFieldPath::Path_t,6u,short int>::ElemType_t *v16; // rcx
  CUtlLeanVectorFixedGrowableBase<CFieldPath::Path_t,6u,short int>::ElemType_t *v17; // rcx
  int v18; // r8d
  __int64 v19; // rax
  int16 v20; // r14
  __int64 v22; // rax
  int16 m_nValue; // r8
  __int64 v24; // [rsp-8h] [rbp-8h]

  if ( this->m_FieldPaths.m_nCount > 1 )
  {
    v2 = 4;
    *(&v24 - 6) = 4LL * (this->m_FieldPaths.m_nCount - 2) + 8;
    m_nAllocated = this->m_FieldPaths.m_nAllocated;
    v5 = this->m_Paths.m_nAllocated;
    while ( 1 )
    {
      if ( m_nAllocated != 0 )
      {
        m_pElements = (&this->m_FieldPaths.m_nAllocAllocated + 1);
        if ( m_nAllocated > 3 )
          m_pElements = this->m_FieldPaths.m_pElements;
      }
      else
      {
        m_pElements = 0;
      }
      v7 = &m_pElements[v2 / 4 - 1];
      m_nCount = v7->m_nCount;
      m_nStart = v7->m_nStart;
      if ( v5 != 0 )
      {
        v10 = (&this->m_Paths.m_nAllocAllocated + 1);
        if ( v5 > 6 )
          v10 = this->m_Paths.m_pElements;
        v11 = &v10[m_nStart];
        if ( m_nAllocated != 0 )
        {
LABEL_10:
          v12 = (&this->m_FieldPaths.m_nAllocAllocated + 1);
          if ( m_nAllocated > 3 )
            v12 = this->m_FieldPaths.m_pElements;
          goto LABEL_12;
        }
      }
      else
      {
        v11 = (2 * m_nStart);
        if ( m_nAllocated != 0 )
          goto LABEL_10;
      }
      v12 = 0;
LABEL_12:
      v13 = &v12[v2 / 4];
      v14 = v13->m_nCount;
      v15 = v13->m_nStart;
      if ( v5 != 0 )
      {
        v16 = (&this->m_Paths.m_nAllocAllocated + 1);
        if ( v5 > 6 )
          v16 = this->m_Paths.m_pElements;
      }
      else
      {
        v16 = 0;
      }
      v17 = &v16[v15];
      if ( !bAllowDups && m_nCount == v14 )
      {
        if ( m_nCount > 0 )
        {
          if ( v11->m_nValue == v17->m_nValue )
          {
            v22 = 0;
            while ( v22 != m_nCount - 1 )
            {
              m_nValue = v11[++v22].m_nValue;
              if ( m_nValue != v17[v22].m_nValue )
                goto LABEL_38;
            }
          }
          else
          {
LABEL_38:
            v18 = m_nCount;
            v14 = m_nCount;
LABEL_20:
            v19 = 0;
            while ( 1 )
            {
              v20 = v11[v19].m_nValue;
              if ( v17[v19].m_nValue < v20 )
                break;
              if ( v17[v19].m_nValue > v20 )
                goto LABEL_26;
              if ( v18 <= ++v19 )
                goto LABEL_24;
            }
          }
        }
        return 0;
      }
      v18 = v14;
      if ( m_nCount <= v14 )
        v18 = m_nCount;
      if ( v18 > 0 )
        goto LABEL_20;
LABEL_24:
      if ( v14 < m_nCount )
        return 0;
LABEL_26:
      v2 += 4;
      if ( v2 == *(&v24 - 6) )
        return 1;
    }
  }
  return 1;
}


// CFieldPathList::PurgeNonTemporary  (line 1417, @0x00000000031278c0, libserver.so)  // inlines: Base, Purge, RemoveAll
void __fastcall CFieldPathList::PurgeNonTemporary(CFieldPathList *const this)
{
  CUtlLeanVectorFixedGrowableBase<CFieldPathReconstruct_t,3u,short int>::IndexType_t m_nAllocated; // ax
  CUtlLeanVectorFixedGrowableBase<CFieldPath::Path_t,6u,short int>::IndexType_t v3; // ax
  void (__fastcall *v4)(_QWORD *, CUtlLeanVectorFixedGrowableBase<CFieldPathReconstruct_t,3u,short int>::ElemType_t *); // rdx
  void (__fastcall *v5)(_QWORD *, CUtlLeanVectorFixedGrowableBase<CFieldPath::Path_t,6u,short int>::ElemType_t *); // rdx

  this->m_FieldPaths.m_nCount = 0;
  m_nAllocated = this->m_FieldPaths.m_nAllocated;
  if ( m_nAllocated > 3 )
  {
    v4 = *(*g_pMemAlloc + 16LL);
    if ( m_nAllocated != 0 )
      v4(g_pMemAlloc, this->m_FieldPaths.m_pElements);
    else
      v4(g_pMemAlloc, 0);
  }
  this->m_FieldPaths.m_nAllocated = 3;
  this->m_Paths.m_nCount = 0;
  v3 = this->m_Paths.m_nAllocated;
  if ( v3 > 6 )
  {
    v5 = *(*g_pMemAlloc + 16LL);
    if ( v3 != 0 )
      v5(g_pMemAlloc, this->m_Paths.m_pElements);
    else
      v5(g_pMemAlloc, 0);
  }
  this->m_Paths.m_nAllocated = 6;
}


// CFieldPathList::Reserve  (line 1423, @0x0000000003127970, libserver.so)  // inlines: Base, EnsureCapacity, memcpy
// calls: memcpy
void __fastcall CFieldPathList::Reserve(CFieldPathList *const this, const CFieldPathList *const other)
{
  int v4; // ebx
  unsigned __int64 m_nAllocated; // rdi
  int v6; // ecx
  __int64 v7; // rdx
  int v8; // eax
  int v9; // ebx
  unsigned __int64 v10; // rcx
  __int64 v11; // rsi
  int v12; // eax
  int v13; // esi
  int v14; // edx
  CUtlLeanVectorFixedGrowableBase<CFieldPathReconstruct_t,3u,short int>::ElemType_t *v15; // r13
  unsigned __int64 v16; // rax
  CUtlLeanVectorFixedGrowableBase<CFieldPathReconstruct_t,3u,short int>::ElemType_t *v17; // rax
  __int64 j; // rdx
  __int64 v19; // rcx
  CUtlLeanVectorFixedGrowableBase<CFieldPathReconstruct_t,3u,short int>::ElemType_t *v20; // rax
  unsigned __int64 v21; // rdx
  CUtlLeanVectorFixedGrowableBase<CFieldPathReconstruct_t,3u,short int>::ElemType_t *v22; // rdi
  int i; // edx
  __int64 v24; // rcx
  void *v25; // rcx
  unsigned __int64 v26; // rax
  CUtlLeanVectorFixedGrowableBase<CFieldPath::Path_t,6u,short int>::ElemType_t *m_pElements; // rsi

  LOWORD(v4) = other->m_Paths.m_nCount;
  m_nAllocated = this->m_Paths.m_nAllocated;
  v6 = v4;
  if ( m_nAllocated < v4 )
  {
    v7 = v4;
    if ( v4 <= 6 )
    {
      if ( m_nAllocated <= 6 )
      {
LABEL_9:
        this->m_Paths.m_nAllocated = v4;
        goto LABEL_10;
      }
    }
    else
    {
      v4 = m_nAllocated;
      while ( 1 )
      {
        v8 = v4;
        if ( v6 <= v4 )
          break;
        if ( v4 <= 16382 )
        {
          v14 = 2 * v4;
          v4 = 16;
          if ( 2 * v8 > 15 )
            v4 = v14;
        }
        else
        {
          v4 = 0x7FFF;
        }
      }
      v7 = v4;
      if ( m_nAllocated <= 6 )
      {
        if ( v4 > 6 )
        {
          v25 = (**g_pMemAlloc)(g_pMemAlloc, 2LL * v4);
          v26 = this->m_Paths.m_nAllocated;
          if ( v26 != 0 )
          {
            m_pElements = (&this->m_Paths.m_nAllocAllocated + 1);
            if ( v26 > 6 )
              m_pElements = this->m_Paths.m_pElements;
          }
          else
          {
            m_pElements = 0;
          }
          this->m_Paths.m_pElements = memcpy(v25, m_pElements, 2LL * this->m_Paths.m_nCount);
        }
        goto LABEL_9;
      }
    }
    this->m_Paths.m_pElements = (*(*g_pMemAlloc + 8LL))(g_pMemAlloc, this->m_Paths.m_pElements, 2 * v7);
    goto LABEL_9;
  }
LABEL_10:
  LOWORD(v9) = other->m_FieldPaths.m_nCount;
  v10 = this->m_FieldPaths.m_nAllocated;
  if ( v10 >= other->m_FieldPaths.m_nCount )
    return;
  v11 = v9;
  if ( v9 > 3 )
  {
    v9 = this->m_FieldPaths.m_nAllocated;
    while ( 1 )
    {
      v12 = v9;
      if ( other->m_FieldPaths.m_nCount <= v9 )
        break;
      if ( v9 <= 16382 )
      {
        v13 = 2 * v9;
        v9 = 8;
        if ( 2 * v12 > 7 )
          v9 = v13;
      }
      else
      {
        v9 = 0x7FFF;
      }
    }
    v11 = v9;
    if ( v10 <= 3 )
    {
      if ( v9 > 3 )
      {
        v20 = (**g_pMemAlloc)(g_pMemAlloc, 4LL * v9);
        v21 = this->m_FieldPaths.m_nAllocated;
        if ( v21 != 0 )
        {
          v22 = (&this->m_FieldPaths.m_nAllocAllocated + 1);
          if ( v21 > 3 )
            v22 = this->m_FieldPaths.m_pElements;
        }
        else
        {
          v22 = 0;
        }
        for ( i = 0; i < this->m_FieldPaths.m_nCount; v20[v24] = v22[v24] )
          v24 = i++;
        this->m_FieldPaths.m_pElements = v20;
      }
      goto LABEL_18;
    }
LABEL_27:
    v15 = (**g_pMemAlloc)(g_pMemAlloc, 4 * v11);
    v16 = this->m_FieldPaths.m_nAllocated;
    if ( v16 != 0 )
    {
      if ( v16 <= 3 )
        v17 = (&this->m_FieldPaths.m_nAllocAllocated + 1);
      else
        v17 = this->m_FieldPaths.m_pElements;
    }
    else
    {
      v17 = 0;
    }
    for ( j = 0; this->m_FieldPaths.m_nCount > j; v15[v19] = v17[v19] )
    {
      v19 = j;
      j = (j + 1);
    }
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, this->m_FieldPaths.m_pElements, j);
    this->m_FieldPaths.m_pElements = v15;
    goto LABEL_18;
  }
  if ( v10 > 3 )
    goto LABEL_27;
LABEL_18:
  this->m_FieldPaths.m_nAllocated = v9;
}


// CFieldPathList::ReserveCounts  (line 1429, @0x0000000003127c00, libserver.so)  // inlines: Base, EnsureCapacity, memcpy
// calls: memcpy, CUtlLeanVectorFixedGrowableBase<CFieldPath::Path_t, 6u, short int>::EnsureCapacity, CUtlLeanVectorFixedGrowableBase<CFieldPathReconstruct_t, 3u, short int>::EnsureCapacity
void __fastcall CFieldPathList::ReserveCounts(CFieldPathList *const this, int nFieldPathCount, int nPathCount)
{
  int v4; // r12d
  unsigned __int64 m_nAllocated; // rcx
  int v6; // ebx
  int v7; // eax
  unsigned __int64 v8; // rdx
  int v9; // ebx
  int v10; // eax
  int v11; // esi
  int v12; // ecx
  CUtlLeanVectorFixedGrowableBase<CFieldPathReconstruct_t,3u,short int>::ElemType_t *v13; // r12
  unsigned __int64 v14; // rax
  CUtlLeanVectorFixedGrowableBase<CFieldPathReconstruct_t,3u,short int>::ElemType_t *v15; // rax
  __int64 i; // rdx
  __int64 v17; // rcx
  CUtlLeanVectorFixedGrowableBase<CFieldPathReconstruct_t,3u,short int>::ElemType_t *v18; // rax
  unsigned __int64 v19; // rdx
  CUtlLeanVectorFixedGrowableBase<CFieldPathReconstruct_t,3u,short int>::ElemType_t *v20; // rdi
  int j; // edx
  __int64 v22; // rcx
  void *v23; // rcx
  unsigned __int64 v24; // rax
  CUtlLeanVectorFixedGrowableBase<CFieldPath::Path_t,6u,short int>::ElemType_t *m_pElements; // rsi

  v4 = nFieldPathCount;
  m_nAllocated = this->m_Paths.m_nAllocated;
  if ( nPathCount > m_nAllocated )
  {
    LOWORD(v6) = nPathCount;
    if ( nPathCount > 6 )
    {
      if ( nPathCount > 0x7FFF )
      {
        CUtlLeanVectorFixedGrowableBase<CFieldPath::Path_t,(unsigned short)6,short>::EnsureCapacity(
          this,
          nFieldPathCount,
          nPathCount);
        goto LABEL_50;
      }
      v6 = this->m_Paths.m_nAllocated;
      while ( 1 )
      {
        v7 = v6;
        if ( nPathCount <= v6 )
          break;
        if ( v6 <= 16382 )
        {
          v11 = 2 * v6;
          v6 = 16;
          if ( 2 * v7 > 15 )
            v6 = v11;
        }
        else
        {
          v6 = 0x7FFF;
        }
      }
    }
    if ( m_nAllocated > 6 )
    {
      this->m_Paths.m_pElements = (*(*g_pMemAlloc + 8LL))(g_pMemAlloc, this->m_Paths.m_pElements, 2LL * v6);
    }
    else
    {
      nFieldPathCount = v6;
      if ( v6 > 6 )
      {
        v23 = (**g_pMemAlloc)(g_pMemAlloc, 2LL * v6);
        v24 = this->m_Paths.m_nAllocated;
        if ( v24 != 0 )
        {
          m_pElements = (&this->m_Paths.m_nAllocAllocated + 1);
          if ( v24 > 6 )
            m_pElements = this->m_Paths.m_pElements;
        }
        else
        {
          m_pElements = 0;
        }
        this->m_Paths.m_pElements = memcpy(v23, m_pElements, 2LL * this->m_Paths.m_nCount);
      }
    }
    this->m_Paths.m_nAllocated = v6;
  }
  v8 = this->m_FieldPaths.m_nAllocated;
  if ( v4 <= v8 )
    return;
  LOWORD(v9) = v4;
  if ( v4 > 3 )
  {
    if ( v4 <= 0x7FFF )
    {
      v9 = this->m_FieldPaths.m_nAllocated;
      while ( 1 )
      {
        v10 = v9;
        if ( v4 <= v9 )
          break;
        if ( v9 <= 16382 )
        {
          v12 = 2 * v9;
          v9 = 8;
          if ( 2 * v10 > 7 )
            v9 = v12;
        }
        else
        {
          v9 = 0x7FFF;
        }
      }
      goto LABEL_18;
    }
LABEL_50:
    CUtlLeanVectorFixedGrowableBase<CFieldPathReconstruct_t,(unsigned short)3,short>::EnsureCapacity(
      &this->m_FieldPaths,
      nFieldPathCount,
      v8);
    JUMPOUT(0x3127E7A);
  }
LABEL_18:
  if ( v8 > 3 )
  {
    v13 = (**g_pMemAlloc)(g_pMemAlloc, 4LL * v9);
    v14 = this->m_FieldPaths.m_nAllocated;
    if ( v14 != 0 )
    {
      if ( v14 <= 3 )
        v15 = (&this->m_FieldPaths.m_nAllocAllocated + 1);
      else
        v15 = this->m_FieldPaths.m_pElements;
    }
    else
    {
      v15 = 0;
    }
    for ( i = 0; i < this->m_FieldPaths.m_nCount; v13[v17] = v15[v17] )
    {
      v17 = i;
      i = (i + 1);
    }
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, this->m_FieldPaths.m_pElements, i);
    this->m_FieldPaths.m_pElements = v13;
  }
  else if ( v9 > 3 )
  {
    v18 = (**g_pMemAlloc)(g_pMemAlloc, 4LL * v9);
    v19 = this->m_FieldPaths.m_nAllocated;
    if ( v19 != 0 )
    {
      v20 = (&this->m_FieldPaths.m_nAllocAllocated + 1);
      if ( v19 > 3 )
        v20 = this->m_FieldPaths.m_pElements;
    }
    else
    {
      v20 = 0;
    }
    for ( j = 0; j < this->m_FieldPaths.m_nCount; v18[v22] = v20[v22] )
      v22 = j++;
    this->m_FieldPaths.m_pElements = v18;
  }
  this->m_FieldPaths.m_nAllocated = v9;
}


// CFieldPathList::FindPathIndex  (line 1437, @0x0000000003127e80, libserver.so)  // inlines: Base, Element, GetPathData, operator==, operator[]
int __fastcall CFieldPathList::FindPathIndex(const CFieldPathList *const this, const CFieldPath *const search)
{
  int result; // eax
  __int64 v3; // r11
  CUtlLeanVectorFixedGrowableBase<CFieldPathReconstruct_t,3u,short int>::IndexType_t m_nAllocated; // r13
  CUtlLeanVectorFixedGrowableBase<CFieldPath::Path_t,6u,short int>::IndexType_t v5; // r12
  int16 m_nCount; // bx
  CUtlLeanVectorFixedGrowableBase<CFieldPathReconstruct_t,3u,short int>::ElemType_t *m_pElements; // rdx
  CUtlLeanVectorFixedGrowableBase<CFieldPathReconstruct_t,3u,short int>::ElemType_t *v8; // rdx
  __int16 v9; // cx
  __int64 m_nStart; // rdx
  CUtlLeanVectorFixedGrowableBase<CFieldPath::Path_t,6u,short int>::ElemType_t *v11; // r9
  const CFieldPath *m_pPaths; // r8
  CUtlLeanVectorFixedGrowableBase<CFieldPath::Path_t,6u,short int>::ElemType_t *v13; // r9
  __int64 v14; // rdx
  int16 m_nValue; // cx

  result = this->m_FieldPaths.m_nCount - 1;
  if ( result < 0 )
    return -1;
  v3 = result;
  m_nAllocated = this->m_FieldPaths.m_nAllocated;
  v5 = this->m_Paths.m_nAllocated;
  m_nCount = search->m_nCount;
  while ( 1 )
  {
    if ( m_nAllocated != 0 )
    {
      m_pElements = (&this->m_FieldPaths.m_nAllocAllocated + 1);
      if ( m_nAllocated > 3 )
        m_pElements = this->m_FieldPaths.m_pElements;
    }
    else
    {
      m_pElements = 0;
    }
    v8 = &m_pElements[v3];
    v9 = v8->m_nCount;
    m_nStart = v8->m_nStart;
    if ( v5 != 0 )
    {
      v11 = (&this->m_Paths.m_nAllocAllocated + 1);
      if ( v5 > 6 )
        v11 = this->m_Paths.m_pElements;
    }
    else
    {
      v11 = 0;
    }
    if ( v9 == m_nCount )
    {
      m_pPaths = search;
      if ( search->m_bUsingExternalPaths )
        m_pPaths = search->u.m_pPaths;
      if ( m_nCount <= 0 )
        return result;
      v13 = &v11[m_nStart];
      if ( m_pPaths->u.m_FixedPaths[0].m_nValue == v13->m_nValue )
        break;
    }
LABEL_3:
    --result;
    --v3;
    if ( result == -1 )
      return -1;
  }
  v14 = 0;
  while ( v14 != m_nCount - 1 )
  {
    m_nValue = m_pPaths->u.m_FixedPaths[++v14].m_nValue;
    if ( m_nValue != v13[v14].m_nValue )
      goto LABEL_3;
  }
  return result;
}


// CFieldPathList::Compare  (line 1449, @0x0000000003127fa0, libserver.so)  // inlines: Base, Element, operator!=, operator[]
bool __fastcall CFieldPathList::Compare(const CFieldPathList *const this, const CFieldPathList *const other)
{
  int m_nCount; // edx
  bool result; // al
  int v4; // ebx
  CUtlLeanVectorFixedGrowableBase<CFieldPathReconstruct_t,3u,short int>::IndexType_t m_nAllocated; // r9
  unsigned __int64 v6; // rax
  CUtlLeanVectorFixedGrowableBase<CFieldPathReconstruct_t,3u,short int>::IndexType_t v7; // r8
  __int64 v8; // r12
  CUtlLeanVectorFixedGrowableBase<CFieldPathReconstruct_t,3u,short int>::ElemType_t *m_pElements; // rdx
  CUtlLeanVectorFixedGrowableBase<CFieldPathReconstruct_t,3u,short int>::ElemType_t *v10; // rdx
  CUtlLeanVectorFixedGrowableBase<CFieldPathReconstruct_t,3u,short int>::ElemType_t *v11; // rcx
  CUtlLeanVectorFixedGrowableBase<CFieldPathReconstruct_t,3u,short int>::ElemType_t *v12; // rcx
  CUtlLeanVectorFixedGrowableBase<CFieldPath::Path_t,6u,short int>::IndexType_t v13; // r9
  unsigned __int64 v14; // rax
  CUtlLeanVectorFixedGrowableBase<CFieldPath::Path_t,6u,short int>::IndexType_t v15; // r8
  CUtlLeanVectorFixedGrowableBase<CFieldPath::Path_t,6u,short int>::ElemType_t *v16; // rdx
  int16 m_nValue; // dx
  CUtlLeanVectorFixedGrowableBase<CFieldPath::Path_t,6u,short int>::ElemType_t *v18; // rcx

  m_nCount = this->m_FieldPaths.m_nCount;
  result = 0;
  if ( this->m_FieldPaths.m_nCount == other->m_FieldPaths.m_nCount )
  {
    v4 = this->m_Paths.m_nCount;
    if ( this->m_Paths.m_nCount == other->m_Paths.m_nCount )
    {
      if ( m_nCount > 0 )
      {
        m_nAllocated = other->m_FieldPaths.m_nAllocated;
        v6 = 0;
        v7 = this->m_FieldPaths.m_nAllocated;
        v8 = 4LL * (m_nCount - 1) + 4;
        do
        {
          if ( m_nAllocated != 0 )
          {
            m_pElements = (&other->m_FieldPaths.m_nAllocAllocated + 1);
            if ( m_nAllocated > 3 )
              m_pElements = other->m_FieldPaths.m_pElements;
          }
          else
          {
            m_pElements = 0;
          }
          v10 = &m_pElements[v6 / 4];
          if ( v7 != 0 )
          {
            v11 = (&this->m_FieldPaths.m_nAllocAllocated + 1);
            if ( v7 > 3 )
              v11 = this->m_FieldPaths.m_pElements;
          }
          else
          {
            v11 = 0;
          }
          v12 = &v11[v6 / 4];
          if ( v12->m_nStart != v10->m_nStart || v12->m_nCount != v10->m_nCount )
            return 0;
          v6 += 4LL;
        }
        while ( v6 != v8 );
      }
      if ( v4 > 0 )
      {
        v13 = this->m_Paths.m_nAllocated;
        v14 = 0;
        v15 = other->m_Paths.m_nAllocated;
        while ( 1 )
        {
          if ( v13 != 0 )
          {
            v16 = (&this->m_Paths.m_nAllocAllocated + 1);
            if ( v13 > 6 )
              v16 = this->m_Paths.m_pElements;
          }
          else
          {
            v16 = 0;
          }
          m_nValue = v16[v14 / 2].m_nValue;
          if ( v15 != 0 )
          {
            v18 = (&other->m_Paths.m_nAllocAllocated + 1);
            if ( v15 > 6 )
              v18 = other->m_Paths.m_pElements;
          }
          else
          {
            v18 = 0;
          }
          if ( m_nValue != v18[v14 / 2].m_nValue )
            break;
          v14 += 2LL;
          if ( v14 == 2LL * (v4 - 1) + 2 )
            return 1;
        }
        return 0;
      }
      return 1;
    }
  }
  return result;
}


// Characterize  (line 1471, @0x0000000003128100, libserver.so)  // inlines: AddToTail, CUtlVectorBase, CUtlVectorFixed, CopyConstruct<int>, GetDepth, GetPathData, operator[]
// calls: __stack_chk_fail
optype_t __fastcall Characterize(const CFieldPath *const from, const CFieldPath *const to)
{
  unsigned __int64 v2; // rcx
  int m_nCount; // r12d
  int v4; // ebx
  bool v5; // r14
  int v6; // r13d
  int v7; // eax
  int v8; // r9d
  char v9; // r10
  int v10; // r8d
  const CFieldPath::Path_t *v11; // rdx
  const CFieldPath::Path_t *v12; // rdx
  int v13; // edx
  __int64 v14; // r8
  optype_t result; // eax
  unsigned int v16; // r12d
  int v17; // r13d
  bool v18; // r11
  bool v19; // r10
  unsigned __int64 v20; // rdx
  __int64 v21; // r9
  __int64 v22; // rcx
  unsigned int v23; // r8d
  unsigned int v24; // r14d
  unsigned int v25; // ebx
  const CFieldPath::Path_t *v26; // rax
  int v27; // r15d
  const CFieldPath::Path_t *v28; // rax
  int v29; // eax
  __int64 v30; // rax
  char v31; // si
  char v32; // cl
  int v33; // edx
  __int64 v34; // rbx
  const CFieldPath::Path_t *v35; // rax
  int v36; // edx
  bool m_bUsingExternalPaths; // r10
  int v38; // r11d
  __int64 v39; // rax
  bool v40; // r9
  int v41; // edx
  const CFieldPath::Path_t *v42; // rcx
  int m_nValue; // ecx
  const CFieldPath::Path_t *v44; // r8
  int v45; // r8d
  __int64 m_Size; // rcx
  int v47; // edx
  _BOOL8 v48; // rax
  int v49; // edx
  int depthDelta; // [rsp+Ch] [rbp-C4h]
  CUtlVectorFixed<int,32ul> deltasForRemaining; // [rsp+10h] [rbp-C0h] BYREF
  unsigned __int64 v52; // [rsp+98h] [rbp-38h]

  v52 = __readfsqword(0x28u);
  m_nCount = from->m_nCount;
  v4 = to->m_nCount;
  if ( m_nCount != v4 )
  {
    depthDelta = v4 - m_nCount;
    if ( v4 - m_nCount <= 0 )
    {
      result = optype_t::OpTypeCount;
      if ( v4 != m_nCount )
      {
        deltasForRemaining.m_Size = 0;
        if ( v4 <= 0 )
        {
          v47 = *&deltasForRemaining.m_Memory.m_Memory.m_Data[4 * v4 - 4];
LABEL_84:
          v48 = v47 != 1;
          if ( depthDelta == -1 )
            return v48 + 27;
          else
            return v48 + 33;
        }
        else
        {
          m_bUsingExternalPaths = from->m_bUsingExternalPaths;
          v38 = v4 - 1;
          v39 = 0;
          v40 = to->m_bUsingExternalPaths;
          v41 = 0;
          do
          {
            v42 = (from + v39 * 2);
            if ( m_bUsingExternalPaths )
              v42 = &from->u.m_pPaths[v39];
            m_nValue = v42->m_nValue;
            v44 = (to + v39 * 2);
            if ( v40 )
              v44 = &to->u.m_pPaths[v39];
            v45 = v44->m_nValue - m_nValue;
            if ( v45 != 0 && v41 < v38 )
              return optype_t::PopNAndNonTopographical;
            m_Size = deltasForRemaining.m_Size;
            ++v41;
            ++v39;
            ++deltasForRemaining.m_Size;
            *&deltasForRemaining.m_Memory.m_Memory.m_Data[4 * m_Size] = v45;
          }
          while ( v41 < v4 );
          v47 = *&deltasForRemaining.m_Memory.m_Memory.m_Data[4 * v38];
          if ( v4 != 1 )
            goto LABEL_84;
          result = optype_t::PopAllButOnePlusOne;
          if ( v47 > 1 )
          {
            v49 = v47 - 1;
            LOBYTE(result) = 31;
            if ( v49 > 7 )
              return 2 * (v49 <= 63) + 30;
          }
        }
      }
    }
    else
    {
      deltasForRemaining.m_Size = 0;
      if ( v4 <= 0 )
      {
        v8 = 0;
        v9 = 1;
LABEL_18:
        switch ( depthDelta )
        {
          case 2:
            if ( v8 != 0 )
            {
              if ( v8 == 1 )
                return 18 - (v9 == 0);
              else
                return 22 - (v9 == 0);
            }
            else
            {
              return 14 - (v9 == 0);
            }
          case 3:
            if ( v8 != 0 )
            {
              if ( v8 == 1 )
                return 20 - (v9 == 0);
              else
                return 24 - (v9 == 0);
            }
            else
            {
              return 16 - (v9 == 0);
            }
          case 1:
            v34 = v4 - 1;
            v35 = (to + 2 * v34);
            if ( to->m_bUsingExternalPaths )
              v35 = &to->u.m_pPaths[v34];
            v36 = v35->m_nValue;
            LOBYTE(v2) = v36 == 0;
            if ( v8 != 0 )
            {
              if ( v8 == 1 )
              {
                return ((v2 << 31) >> 31) + 8;
              }
              else
              {
                result = optype_t::PushOneLeftDeltaNRightZero;
                if ( v36 != 0 )
                {
                  if ( v8 > 8 || (LOBYTE(result) = 11, v36 > 7) )
                  {
                    if ( v8 > 16 )
                      return optype_t::PushOneLeftDeltaNRightNonZero;
                    result = optype_t::PushOneLeftDeltaNRightNonZeroPack8Bits;
                    if ( v36 > 15 )
                      return optype_t::PushOneLeftDeltaNRightNonZero;
                  }
                }
              }
            }
            else
            {
              return ((v2 << 31) >> 31) + 6;
            }
            break;
          default:
            return optype_t::PushN;
        }
      }
      else
      {
        v5 = to->m_bUsingExternalPaths;
        v6 = m_nCount - 1;
        v2 = 0;
        v7 = 0;
        v8 = 0;
        v9 = 1;
        while ( 1 )
        {
          v10 = 0;
          if ( v7 < m_nCount )
          {
            v11 = (from + v2);
            if ( from->m_bUsingExternalPaths )
              v11 = &from->u.m_pPaths[v2 / 2];
            v10 = v11->m_nValue;
          }
          v12 = (to + v2);
          if ( v5 )
            v12 = &to->u.m_pPaths[v2 / 2];
          v13 = v12->m_nValue - v10;
          if ( v13 != 0 && v7 < v6 )
            return optype_t::PushNAndNonTopographical;
          v14 = deltasForRemaining.m_Size;
          if ( v7 == v6 )
            v8 = v13;
          if ( v13 >= 32 )
            v9 = 0;
          ++v7;
          v2 += 2LL;
          ++deltasForRemaining.m_Size;
          *&deltasForRemaining.m_Memory.m_Memory.m_Data[4 * v14] = v13;
          if ( v7 >= v4 )
            goto LABEL_18;
        }
      }
    }
    return result;
  }
  deltasForRemaining.m_Size = 0;
  if ( m_nCount <= 0 )
    goto LABEL_40;
  v16 = m_nCount - 1;
  v17 = 0x80000000;
  v18 = from->m_bUsingExternalPaths;
  v19 = to->m_bUsingExternalPaths;
  v20 = 0;
  v21 = 2LL * v16 + 2;
  v22 = 0;
  v23 = 0;
  v24 = 0x80000000;
  v25 = 0x80000000;
  while ( 1 )
  {
    v26 = (from + v20);
    if ( v18 )
      v26 = &from->u.m_pPaths[v20 / 2];
    v27 = v26->m_nValue;
    v28 = (to + v20);
    if ( v19 )
      v28 = &to->u.m_pPaths[v20 / 2];
    v29 = v28->m_nValue - v27;
    deltasForRemaining.m_Size = v22 + 1;
    *&deltasForRemaining.m_Memory.m_Memory.m_Data[4 * v22] = v29;
    if ( v29 != 0 )
    {
      v17 = v29;
      v24 = v23;
      if ( v25 == 0x80000000 )
        break;
    }
    v20 += 2LL;
    ++v23;
    if ( v20 == v21 )
      goto LABEL_39;
LABEL_31:
    v22 = deltasForRemaining.m_Size;
  }
  v20 += 2LL;
  v25 = v23++;
  if ( v20 != v21 )
    goto LABEL_31;
LABEL_39:
  if ( v25 != v24 || v25 != v16 )
  {
LABEL_40:
    if ( deltasForRemaining.m_Size <= 0 )
      return optype_t::NonTopoPenultimatePluseOne;
    v30 = 0;
    v31 = 1;
    v32 = 1;
    do
    {
      while ( 1 )
      {
        v33 = *&deltasForRemaining.m_Memory.m_Memory.m_Data[4 * v30];
        if ( (v33 + 7) >= 0x10 )
          v31 = 0;
        if ( deltasForRemaining.m_Size - 2 != v30 )
          break;
        if ( v33 != 1 )
          v32 = 0;
        if ( deltasForRemaining.m_Size <= ++v30 )
          goto LABEL_51;
      }
      if ( v33 != 0 )
        v32 = 0;
      ++v30;
    }
    while ( deltasForRemaining.m_Size > v30 );
LABEL_51:
    result = optype_t::NonTopoPenultimatePluseOne;
    if ( v32 == 0 )
      return v31 == 0 ? 36 : 38;
    return result;
  }
  if ( v17 == 2 )
    return optype_t::PlusTwo;
  if ( v17 <= 2 )
  {
    result = optype_t::PlusOne;
    if ( v17 != 1 )
      return optype_t::PlusN;
  }
  else
  {
    result = optype_t::PlusThree;
    if ( v17 != 3 )
    {
      LOBYTE(result) = 3;
      if ( v17 != 4 )
        return optype_t::PlusN;
    }
  }
  return result;
}


// CFieldPathHuffmanEncoder::BuildOpCodeCodeToHuffmanLookup  (line 1691, @0x0000000003129610, libserver.so)  // inlines: AddMultipleToTail, Construct<CFieldPathHuffmanEncoder::HuffCode>, EnsureCount, GrowMemory, GrowVector, HuffCode, InsertMultipleBefore
// calls: CFieldPathHuffmanEncoder::BuildTree, CFieldPathHuffmanEncoder::BuildFixedTree, bf_write::bf_write, CFieldPathHuffmanEncoder::GenerateOpCodeToHuffmanMap, CUtlMemory<int, int>::Grow, __stack_chk_fail
// callers: _GLOBAL__sub_I_game_networkquantizedtypes.cpp, _GLOBAL__sub_I_stdafx.cpp, _GLOBAL__sub_I_base_clientui_ent.cpp, _GLOBAL__sub_I_point_clientui_world_panel.cpp, _GLOBAL__sub_I_point_clientui_world_text_panel.cpp, _GLOBAL__sub_I_point_clientui_dialog.cpp, __static_initialization_and_destruction_0, _GLOBAL__sub_I_gamesessionconfiguration_h_schema.gen_cpp, _GLOBAL__sub_I_devtest_hierarchy_cpp_schema.gen_cpp, _GLOBAL__sub_I_decalgamesystem_h_schema.gen_cpp, _GLOBAL__sub_I_plasma_h_schema.gen_cpp, _GLOBAL__sub_I_base_clientui_ent_h_schema.gen_cpp (121 total)
void __fastcall CFieldPathHuffmanEncoder::BuildOpCodeCodeToHuffmanLookup(CFieldPathHuffmanEncoder *const this)
{
  __int64 v2; // rdx
  int v3; // eax
  __int64 m_Size; // rax
  int v5; // r13d
  int v6; // r14d
  char *v7; // r12
  int m_nAllocationCount; // eax
  CFieldPathHuffmanEncoder::HuffCode pData; // [rsp+0h] [rbp-50h] BYREF
  unsigned __int64 v10; // [rsp+28h] [rbp-28h]

  v10 = __readfsqword(0x28u);
  if ( this->m_Frequencies.m_Size <= 39 )
  {
    m_nAllocationCount = this->m_Frequencies.m_Memory.m_nAllocationCount;
    if ( m_nAllocationCount <= 39 )
      CUtlMemory<int,int>::Grow(&this->m_Frequencies.m_Memory, 40 - m_nAllocationCount);
    this->m_Frequencies.m_Size = 40;
  }
  v2 = 0;
  v3 = 0;
  do
  {
    ++v3;
    this->m_Frequencies.m_Memory.m_pMemory[v2++] = 0;
  }
  while ( this->m_Frequencies.m_Size > v3 );
  *this->m_Frequencies.m_Memory.m_pMemory = 36271;
  this->m_Frequencies.m_Memory.m_pMemory[39] = 25474;
  this->m_Frequencies.m_Memory.m_pMemory[11] = 10530;
  this->m_Frequencies.m_Memory.m_pMemory[1] = 10334;
  this->m_Frequencies.m_Memory.m_pMemory[4] = 4128;
  this->m_Frequencies.m_Memory.m_pMemory[8] = 2942;
  this->m_Frequencies.m_Memory.m_pMemory[29] = 1837;
  this->m_Frequencies.m_Memory.m_pMemory[2] = 1375;
  this->m_Frequencies.m_Memory.m_pMemory[3] = 646;
  this->m_Frequencies.m_Memory.m_pMemory[32] = 634;
  this->m_Frequencies.m_Memory.m_pMemory[9] = 560;
  this->m_Frequencies.m_Memory.m_pMemory[7] = 521;
  this->m_Frequencies.m_Memory.m_pMemory[10] = 471;
  this->m_Frequencies.m_Memory.m_pMemory[26] = 310;
  this->m_Frequencies.m_Memory.m_pMemory[31] = 300;
  this->m_Frequencies.m_Memory.m_pMemory[37] = 271;
  this->m_Frequencies.m_Memory.m_pMemory[12] = 251;
  this->m_Frequencies.m_Memory.m_pMemory[30] = 149;
  this->m_Frequencies.m_Memory.m_pMemory[38] = 99;
  this->m_Frequencies.m_Memory.m_pMemory[36] = 76;
  this->m_Frequencies.m_Memory.m_pMemory[5] = 35;
  this->m_Frequencies.m_Memory.m_pMemory[6] = 3;
  this->m_Frequencies.m_Memory.m_pMemory[27] = 2;
  this->m_Frequencies.m_Memory.m_pMemory[35] = 1;
  this->m_Frequencies.m_Memory.m_pMemory[34] = 0;
  this->m_Frequencies.m_Memory.m_pMemory[33] = 0;
  this->m_Frequencies.m_Memory.m_pMemory[28] = 0;
  this->m_Frequencies.m_Memory.m_pMemory[25] = 0;
  this->m_Frequencies.m_Memory.m_pMemory[24] = 0;
  this->m_Frequencies.m_Memory.m_pMemory[23] = 0;
  this->m_Frequencies.m_Memory.m_pMemory[22] = 0;
  this->m_Frequencies.m_Memory.m_pMemory[21] = 0;
  this->m_Frequencies.m_Memory.m_pMemory[20] = 0;
  this->m_Frequencies.m_Memory.m_pMemory[19] = 0;
  this->m_Frequencies.m_Memory.m_pMemory[18] = 0;
  this->m_Frequencies.m_Memory.m_pMemory[17] = 0;
  this->m_Frequencies.m_Memory.m_pMemory[16] = 0;
  this->m_Frequencies.m_Memory.m_pMemory[15] = 0;
  this->m_Frequencies.m_Memory.m_pMemory[14] = 0;
  this->m_Frequencies.m_Memory.m_pMemory[13] = 0;
  m_Size = this->m_OpCodeToHuffmanLookup.m_Size;
  if ( m_Size <= 39 )
  {
    this->m_OpCodeToHuffmanLookup.m_Size = 40;
    v5 = 0;
    v6 = 40 - m_Size;
    v7 = &this->m_OpCodeToHuffmanLookup.m_Memory + 40 * m_Size;
    do
    {
      if ( v7 != 0 )
        bf_write::bf_write((v7 + 8), v7, 4, -1);
      ++v5;
      v7 += 40;
    }
    while ( v6 > v5 );
  }
  this->m_pRoot = CFieldPathHuffmanEncoder::BuildTree(this);
  CFieldPathHuffmanEncoder::BuildFixedTree(this);
  bf_write::bf_write(&pData.m_buf, &pData, 4, -1);
  CFieldPathHuffmanEncoder::GenerateOpCodeToHuffmanMap(this, this->m_pRoot, &pData);
}


// CFieldPathHuffmanEncoder::Describe  (line 1747, @0x0000000003128620, libserver.so)  // inlines: BitByte, CUtlString, GetNameByToken, GetNumBitsLeft, GetNumBytesWritten, Length, LookupFieldPathDeltaOpName, ReadOneBit, ReadOneBitNoCheck, String, V_strlen, ~CUtlString
// calls: bf_read::bf_read, CUtlString::operator+=, bf_read::SetOverflowFlag, CUtlString::Get, strlen, Msg, CUtlString::FreeMemoryBlock, _Unwind_Resume
// strings: "%50.50s: %2.2d bits == '%s'\n"
// globals: g_OpTypes, tokenset_t<optype_t>::GetNameByToken(optype_t)::unknown
void __fastcall CFieldPathHuffmanEncoder::Describe(CFieldPathHuffmanEncoder *const this)
{
  CUtlVectorBase<CFieldPathHuffmanEncoder::HuffCode,CUtlMemoryFixed<CFieldPathHuffmanEncoder::HuffCode,40ul> >::CAllocator *p_m_Memory; // r12
  int v2; // r14d
  int v3; // r8d
  int i; // ebx
  const char *v5; // rsi
  unsigned int m_iCurBit; // eax
  int v7; // edx
  const char *v8; // rbx
  int v9; // edx
  char *name; // rsi
  tokenset_t<optype_t> *v11; // rdi
  CUtlString bits; // [rsp+10h] [rbp-60h] BYREF
  bf_read readBuf; // [rsp+20h] [rbp-50h] BYREF

  if ( this->m_OpCodeToHuffmanLookup.m_Size > 0 )
  {
    p_m_Memory = &this->m_OpCodeToHuffmanLookup.m_Memory;
    v2 = 0;
    while ( 1 )
    {
      v3 = *&p_m_Memory->m_Memory.m_Data[24];
      bits.m_pString = 0;
      bf_read::bf_read(&readBuf, "read", p_m_Memory, (v3 + 7) >> 3, v3);
      for ( i = 0; *&p_m_Memory->m_Memory.m_Data[24] > i; ++i )
      {
        m_iCurBit = readBuf.m_iCurBit;
        if ( readBuf.m_nDataBits - readBuf.m_iCurBit <= 0 )
        {
          bf_read::SetOverflowFlag(&readBuf);
          v5 = "0";
        }
        else
        {
          v7 = *&readBuf.m_pData[4 * (readBuf.m_iCurBit++ >> 5)];
          if ( _bittest(&v7, m_iCurBit) )
            v5 = "1";
          else
            v5 = "0";
        }
        CUtlString::operator+=(&bits, v5);
      }
      v8 = CUtlString::Get(&bits);
      if ( bits.m_pString != 0 )
        v9 = strlen(bits.m_pString);
      else
        v9 = 0;
      name = g_OpTypes[0].name;
      if ( g_OpTypes[0].name == 0 )
        goto LABEL_18;
      if ( v2 != g_OpTypes[0].token )
        break;
LABEL_19:
      Msg("%50.50s: %2.2d bits == '%s'\n", name, v9, v8);
      if ( bits.m_pString != 0 )
        CUtlString::FreeMemoryBlock(&bits);
      ++v2;
      p_m_Memory = (p_m_Memory + 40);
      if ( this->m_OpCodeToHuffmanLookup.m_Size <= v2 )
        return;
    }
    v11 = g_OpTypes;
    while ( 1 )
    {
      ++v11;
      name = v11->name;
      if ( v11->name == 0 )
        break;
      if ( v2 == v11->token )
        goto LABEL_19;
    }
LABEL_18:
    name = tokenset_t<optype_t>::GetNameByToken(optype_t)const::unknown;
    goto LABEL_19;
  }
}


// CFieldPathHuffmanEncoder::PrintTree  (line 1770, @0x00000000031289b0, libserver.so)
// calls: CFieldPathHuffmanEncoder::PrintTree_R
void __fastcall CFieldPathHuffmanEncoder::PrintTree(CFieldPathHuffmanEncoder *const this)
{
  CFieldPathHuffmanEncoder::PrintTree_R(this, this->m_pRoot, 0);
}


// PrintSpaces  (line 1775, @0x00000000031287b0, libserver.so)
// calls: Msg
void __fastcall PrintSpaces(int nDepth)
{
  int v1; // r12d
  int v2; // ebx

  v1 = 4 * nDepth;
  v2 = 0;
  if ( 4 * nDepth > 0 )
  {
    do
    {
      ++v2;
      Msg(" ");
    }
    while ( v2 != v1 );
  }
}


// CFieldPathHuffmanEncoder::PrintTree_R  (line 1783, @0x00000000031287f0, libserver.so)  // inlines: CUtlString, GetNameByToken, LookupFieldPathDeltaOpName, PrintSpaces, String, ~CUtlString
// calls: Msg, CUtlString::FreeMemoryBlock, CUtlString::Format, CUtlString::Get, _Unwind_Resume
// callers: CFieldPathHuffmanEncoder::PrintTree
// globals: g_OpTypes, tokenset_t<optype_t>::GetNameByToken(optype_t)::unknown
void __fastcall CFieldPathHuffmanEncoder::PrintTree_R(
        CFieldPathHuffmanEncoder *const this,
        CFieldPathHuffmanEncoder::INode *pNode,
        int nDepth)
{
  int v6; // r12d
  int v7; // ebx
  int v8; // r15d
  int v9; // ebx
  char *name; // rdx
  int vptr_INode; // ecx
  tokenset_t<optype_t> *v12; // rax
  int v13; // r15d
  int v14; // ebx
  const char *v15; // rax
  CUtlString b; // [rsp+0h] [rbp-40h] BYREF

  b.m_pString = 0;
  if ( (*(pNode->_vptr_INode + 2))(pNode) == 0 )
  {
    v6 = 4 * nDepth;
    v7 = 0;
    if ( 4 * nDepth > 0 )
    {
      do
      {
        Msg(" ");
        ++v7;
      }
      while ( v7 != v6 );
    }
    Msg("(%d)\n", *(pNode[1]._vptr_INode + 2));
    v8 = nDepth + 1;
    CFieldPathHuffmanEncoder::PrintTree_R(this, pNode[1]._vptr_INode, v8);
    v9 = 0;
    if ( v6 > 0 )
    {
      do
      {
        Msg(" ");
        ++v9;
      }
      while ( v9 != v6 );
    }
    Msg("(%d)\n", *(*&pNode[1].f + 8LL));
    CFieldPathHuffmanEncoder::PrintTree_R(this, *&pNode[1].f, v8);
    return;
  }
  name = g_OpTypes[0].name;
  vptr_INode = pNode[1]._vptr_INode;
  if ( g_OpTypes[0].name == 0 )
    goto LABEL_13;
  if ( vptr_INode != g_OpTypes[0].token )
  {
    v12 = g_OpTypes;
    while ( 1 )
    {
      ++v12;
      name = v12->name;
      if ( v12->name == 0 )
        break;
      if ( vptr_INode == v12->token )
        goto LABEL_14;
    }
LABEL_13:
    name = tokenset_t<optype_t>::GetNameByToken(optype_t)const::unknown;
  }
LABEL_14:
  CUtlString::Format(&b, "%s", name);
  v13 = 4 * nDepth;
  v14 = 0;
  if ( v13 > 0 )
  {
    do
    {
      Msg(" ");
      ++v14;
    }
    while ( v14 != v13 );
  }
  v15 = CUtlString::Get(&b);
  Msg("-> %s\n", v15);
  if ( b.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&b);
}


// CFieldPathHuffmanEncoder::BuildFixedTree  (line 1812, @0x0000000003128fc0, libserver.so)  // inlines: AddToTail, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<CFieldPathHuffmanEncoder::composed_t>, Element, GrowMemory, Purge, RemoveAll, operator=, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CFieldPathHuffmanEncoder::BuildFixedTree_R, CUtlMemory<CFieldPathHuffmanEncoder::composed_t, int>::Grow, CUtlVectorBase<CFieldPathHuffmanEncoder::composed_t, CUtlMemory<CFieldPathHuffmanEncoder::composed_t, int> >::SetCount, CUtlMemory<CFieldPathHuffmanEncoder::composed_t, int>::Purge, CUtlVectorBase<CFieldPathHuffmanEncoder::composed_t, CUtlMemory<CFieldPathHuffmanEncoder::composed_t, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CFieldPathHuffmanEncoder::BuildOpCodeCodeToHuffmanLookup
void __fastcall CFieldPathHuffmanEncoder::BuildFixedTree(CFieldPathHuffmanEncoder *const this)
{
  int8 v2; // al
  int8 v3; // r14
  unsigned __int64 v4; // r12
  CFieldPathHuffmanEncoder::composed_t *v5; // rax
  CFieldPathHuffmanEncoder::composed_t *v6; // rbx
  char rval; // al
  __int64 m_Size; // r13
  int v9; // eax
  int v10; // ebx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // [rsp+18h] [rbp-58h]
  CUtlVector<CFieldPathHuffmanEncoder::composed_t,CUtlMemory<CFieldPathHuffmanEncoder::composed_t,int> > reversed; // [rsp+20h] [rbp-50h] BYREF

  v2 = CFieldPathHuffmanEncoder::BuildFixedTree_R(this, this->m_pRoot);
  reversed.m_Size = 0;
  v3 = v2;
  reversed.m_Memory.m_pMemory = 0;
  reversed.m_Memory.m_nAllocationCount = 0;
  reversed.m_Memory.m_nGrowSize = 0;
  if ( v2 >= 0 )
  {
    v4 = 2LL * v2;
    v12 = 2 * (v2 - v2) - 2;
    do
    {
      v6 = &this->m_FixedTree.m_Memory.m_pMemory[v4 / 2];
      if ( v6->lval >= 0 )
        v6->lval = v3 - v6->lval;
      rval = v6->rval;
      if ( rval >= 0 )
        v6->rval = v3 - rval;
      m_Size = reversed.m_Size;
      v9 = reversed.m_Size;
      if ( reversed.m_Size == reversed.m_Memory.m_nAllocationCount )
      {
        CUtlMemory<CFieldPathHuffmanEncoder::composed_t,int>::Grow(&reversed.m_Memory, 1);
        v9 = reversed.m_Size;
      }
      reversed.m_Size = v9 + 1;
      v5 = &reversed.m_Memory.m_pMemory[m_Size];
      if ( v5 != 0 )
        *v5 = *v6;
      v4 -= 2LL;
    }
    while ( v4 != v12 );
  }
  if ( &this->m_FixedTree != &reversed )
  {
    v10 = reversed.m_Size;
    CUtlVectorBase<CFieldPathHuffmanEncoder::composed_t,CUtlMemory<CFieldPathHuffmanEncoder::composed_t,int>>::SetCount(
      &this->m_FixedTree,
      reversed.m_Size);
    if ( v10 > 0 )
    {
      v11 = 0;
      do
      {
        this->m_FixedTree.m_Memory.m_pMemory[v11 / 2] = reversed.m_Memory.m_pMemory[v11 / 2];
        v11 += 2LL;
      }
      while ( v11 != 2LL * (v10 - 1) + 2 );
    }
  }
  reversed.m_Size = 0;
  if ( (reversed.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CFieldPathHuffmanEncoder::composed_t,int>::Purge(&reversed.m_Memory);
    if ( (reversed.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CFieldPathHuffmanEncoder::composed_t,int>::Purge(&reversed.m_Memory);
  }
}


// CFieldPathHuffmanEncoder::BuildFixedTree_R  (line 1843, @0x0000000003128ed0, libserver.so)  // inlines: AddToTail, CopyConstruct<CFieldPathHuffmanEncoder::composed_t>, Element, GrowMemory, operator[]
// calls: CUtlMemory<CFieldPathHuffmanEncoder::composed_t, int>::Grow
// callers: CFieldPathHuffmanEncoder::BuildFixedTree
int8 __fastcall CFieldPathHuffmanEncoder::BuildFixedTree_R(
        CFieldPathHuffmanEncoder *const this,
        const CFieldPathHuffmanEncoder::INode *node)
{
  int (**vptr_INode)(...); // r12
  __int64 v4; // r13
  int8 v5; // r14
  int m_Size; // eax
  int v7; // edx
  CFieldPathHuffmanEncoder::composed_t *v8; // rdx
  int v10; // [rsp+Ch] [rbp-24h]

  vptr_INode = node[1]._vptr_INode;
  v4 = *&node[1].f;
  if ( (*(*vptr_INode + 2))(vptr_INode) != 0 )
  {
    v5 = ~*(vptr_INode + 4);
    if ( (*(*v4 + 16LL))(v4) != 0 )
      goto LABEL_3;
LABEL_8:
    LOBYTE(v4) = CFieldPathHuffmanEncoder::BuildFixedTree_R(this, v4);
    m_Size = this->m_FixedTree.m_Size;
    v7 = m_Size;
    if ( m_Size != this->m_FixedTree.m_Memory.m_nAllocationCount )
      goto LABEL_4;
    goto LABEL_9;
  }
  v5 = CFieldPathHuffmanEncoder::BuildFixedTree_R(this, vptr_INode);
  if ( (*(*v4 + 16LL))(v4) == 0 )
    goto LABEL_8;
LABEL_3:
  m_Size = this->m_FixedTree.m_Size;
  v7 = m_Size;
  LODWORD(v4) = ~*(v4 + 16);
  if ( m_Size == this->m_FixedTree.m_Memory.m_nAllocationCount )
  {
LABEL_9:
    v10 = m_Size;
    CUtlMemory<CFieldPathHuffmanEncoder::composed_t,int>::Grow(&this->m_FixedTree.m_Memory, 1);
    v7 = this->m_FixedTree.m_Size;
    m_Size = v10;
  }
LABEL_4:
  this->m_FixedTree.m_Size = v7 + 1;
  v8 = &this->m_FixedTree.m_Memory.m_pMemory[m_Size];
  if ( v8 != 0 )
  {
    v8->lval = v5;
    v8->rval = v4;
  }
  return m_Size;
}


// CFieldPathHuffmanEncoder::BuildTree  (line 1877, @0x0000000003129160, libserver.so)  // inlines: AddToTail, CUtlMemory, CUtlPriorityQueue, CUtlVector, CUtlVectorBase, Element, FastRemove, GrowMemory, INode, Insert, InternalNode, LeafNode, PercolateDown, PercolateUp, Purge, RemoveAll, RemoveAtHead, Swap, memcpy, operator(), operator[], ~CUtlMemory, ~CUtlPriorityQueue, ~CUtlVector, ~CUtlVectorBase
// calls: operator new, CUtlMemory<CFieldPathHuffmanEncoder::INode*, int>::Grow, CUtlMemory<CFieldPathHuffmanEncoder::INode*, int>::Purge, _Unwind_Resume
// callers: CFieldPathHuffmanEncoder::BuildOpCodeCodeToHuffmanLookup
// globals: CFieldPathHuffmanEncoder::INodeLessFunc(CFieldPathHuffmanEncoder::INode * const&,CFieldPathHuffmanEncoder::INode * const&)
CFieldPathHuffmanEncoder::INode *__fastcall CFieldPathHuffmanEncoder::BuildTree(CFieldPathHuffmanEncoder *const this)
{
  int m_Size; // r8d
  __int64 v3; // r14
  int i; // r12d
  int *m_pMemory; // rax
  int v6; // ebx
  CFieldPathHuffmanEncoder::INode *v7; // rax
  CFieldPathHuffmanEncoder::INode *v8; // r13
  int v9; // r12d
  int v10; // eax
  __int64 v11; // rbx
  CFieldPathHuffmanEncoder::INode **v12; // r13
  CFieldPathHuffmanEncoder::INode *v13; // rdx
  __int64 v14; // rbx
  __int64 v15; // r13
  CFieldPathHuffmanEncoder::INode **v16; // rax
  int v17; // edx
  int v18; // r14d
  __int64 j; // r12
  int v20; // ebx
  CFieldPathHuffmanEncoder::INode **v21; // rdx
  CFieldPathHuffmanEncoder::INode *v22; // rsi
  int v23; // r13d
  __int64 v24; // r12
  int v25; // ebx
  CFieldPathHuffmanEncoder::INode **v26; // rdx
  CFieldPathHuffmanEncoder::INode *v27; // rsi
  int v28; // r13d
  CFieldPathHuffmanEncoder::INode *v29; // rbx
  int v30; // eax
  int v31; // r13d
  int v32; // eax
  __int64 v33; // rdx
  int v34; // eax
  CFieldPathHuffmanEncoder::INode **v35; // r14
  CFieldPathHuffmanEncoder::INode *v36; // rdx
  __int64 v37; // rbx
  __int64 v38; // r14
  CFieldPathHuffmanEncoder::INode *v39; // rbx
  CFieldPathHuffmanEncoder::INode *childL; // [rsp+8h] [rbp-68h]
  int childR; // [rsp+10h] [rbp-60h]
  CFieldPathHuffmanEncoder::INode *childRa; // [rsp+10h] [rbp-60h]
  int slot; // [rsp+1Ch] [rbp-54h]
  CUtlPriorityQueue<CFieldPathHuffmanEncoder::INode*,CDefUtlPriorityQueueLessFunc<CFieldPathHuffmanEncoder::INode*>,CUtlMemory<CFieldPathHuffmanEncoder::INode*,int>,CDefUtlPriorityQueueSetIndexFunc<CFieldPathHuffmanEncoder::INode*> > trees; // [rsp+20h] [rbp-50h] BYREF

  trees.m_heap.m_Size = 0;
  m_Size = this->m_Frequencies.m_Size;
  trees.m_heap.m_Memory.m_pMemory = 0;
  trees.m_heap.m_Memory.m_nAllocationCount = 0;
  trees.m_heap.m_Memory.m_nGrowSize = 0;
  trees.m_LessFunc = CFieldPathHuffmanEncoder::INodeLessFunc;
  if ( m_Size <= 0 )
  {
    v17 = 0;
    v16 = 0;
    slot = 1;
  }
  else
  {
    v3 = 0;
    for ( i = 1; ; i = slot )
    {
      m_pMemory = this->m_Frequencies.m_Memory.m_pMemory;
      v6 = 1;
      if ( m_pMemory[v3] > 0 )
        v6 = m_pMemory[v3];
      slot = i + 1;
      v7 = operator new(0x18u);  // new CFieldPathHuffmanEncoder::LeafNode
      v7->slot = i;
      v8 = v7;
      v7->f = v6;
      v7->_vptr_INode = off_47C4F90;  // vptr: CFieldPathHuffmanEncoder::LeafNode
      v9 = trees.m_heap.m_Size;
      LODWORD(v7[1]._vptr_INode) = v3;
      childR = v3;
      v10 = trees.m_heap.m_Size;
      if ( trees.m_heap.m_Size == trees.m_heap.m_Memory.m_nAllocationCount )
      {
        CUtlMemory<CFieldPathHuffmanEncoder::INode *,int>::Grow(&trees.m_heap.m_Memory, 1);
        v10 = trees.m_heap.m_Size;
      }
      v11 = trees.m_heap.m_Size;
      trees.m_heap.m_Size = v10 + 1;
      trees.m_heap.m_Memory.m_pMemory[v9] = v8;
      if ( v9 < v10 + 1 && v9 != 0 )
      {
        while ( 1 )
        {
          v14 = v11;
          v9 = (v9 + 1) / 2 - 1;
          v15 = v9;
          if ( trees.m_LessFunc(&trees.m_heap.m_Memory.m_pMemory[v14], &trees.m_heap.m_Memory.m_pMemory[v15]) )
            break;
          v12 = &trees.m_heap.m_Memory.m_pMemory[v15];
          v13 = *v12;
          *v12 = trees.m_heap.m_Memory.m_pMemory[v14];
          trees.m_heap.m_Memory.m_pMemory[v14] = v13;
          if ( v9 == 0 )
            break;
          v11 = v9;
        }
      }
      ++v3;
      if ( this->m_Frequencies.m_Size <= childR + 1 )
        break;
    }
    v16 = trees.m_heap.m_Memory.m_pMemory;
    v17 = trees.m_heap.m_Size;
  }
  while ( v17 > 1 )
  {
    childRa = *v16;
    *v16 = v16[v17 - 1];
    v18 = --trees.m_heap.m_Size;
    if ( trees.m_heap.m_Size / 2 <= 0 )
      goto LABEL_31;
    for ( j = 0; ; j = v20 )
    {
      v23 = 2 * j + 2;
      v20 = 2 * j + 1;
      if ( trees.m_heap.m_Size > v20 )
        break;
      v20 = j;
      if ( trees.m_heap.m_Size > v23 )
        goto LABEL_27;
LABEL_20:
      if ( j == v20 )
        goto LABEL_30;
LABEL_21:
      v21 = &trees.m_heap.m_Memory.m_pMemory[j];
      v22 = *v21;
      *v21 = trees.m_heap.m_Memory.m_pMemory[v20];
      trees.m_heap.m_Memory.m_pMemory[v20] = v22;
      if ( trees.m_heap.m_Size / 2 <= v20 )
        goto LABEL_30;
    }
    if ( !trees.m_LessFunc(&trees.m_heap.m_Memory.m_pMemory[j], &trees.m_heap.m_Memory.m_pMemory[v20]) )
      v20 = j;
    if ( trees.m_heap.m_Size <= v23 )
      goto LABEL_20;
LABEL_27:
    if ( trees.m_LessFunc(&trees.m_heap.m_Memory.m_pMemory[v20], &trees.m_heap.m_Memory.m_pMemory[v23]) )
      v20 = 2 * j + 2;
    if ( j != v20 )
      goto LABEL_21;
LABEL_30:
    v18 = trees.m_heap.m_Size;
LABEL_31:
    childL = *trees.m_heap.m_Memory.m_pMemory;
    if ( v18 > 0 )
    {
      if ( --v18 != 0 )
      {
        *trees.m_heap.m_Memory.m_pMemory = trees.m_heap.m_Memory.m_pMemory[v18];
        v18 = trees.m_heap.m_Size - 1;
      }
      trees.m_heap.m_Size = v18;
    }
    v24 = 0;
    if ( v18 / 2 > 0 )
    {
      while ( 1 )
      {
        v28 = 2 * v24 + 2;
        v25 = 2 * v24 + 1;
        if ( v25 >= v18 )
        {
          v25 = v24;
          if ( v28 >= v18 )
            goto LABEL_38;
        }
        else
        {
          if ( !trees.m_LessFunc(&trees.m_heap.m_Memory.m_pMemory[v24], &trees.m_heap.m_Memory.m_pMemory[v25]) )
            v25 = v24;
          if ( v28 >= v18 )
          {
LABEL_38:
            if ( v24 == v25 )
              break;
            goto LABEL_39;
          }
        }
        if ( trees.m_LessFunc(&trees.m_heap.m_Memory.m_pMemory[v25], &trees.m_heap.m_Memory.m_pMemory[v28]) )
          v25 = 2 * v24 + 2;
        if ( v24 == v25 )
          break;
LABEL_39:
        v26 = &trees.m_heap.m_Memory.m_pMemory[v24];
        v27 = *v26;
        *v26 = trees.m_heap.m_Memory.m_pMemory[v25];
        trees.m_heap.m_Memory.m_pMemory[v25] = v27;
        if ( v18 / 2 <= v25 )
          break;
        v24 = v25;
      }
    }
    v29 = operator new(0x20u);  // new CFieldPathHuffmanEncoder::InternalNode
    v30 = childL->f + childRa->f;
    v29->slot = slot;
    v29[1]._vptr_INode = childRa;
    *&v29[1].f = childL;
    v29->f = v30;
    v29->_vptr_INode = off_47C4F50;  // vptr: CFieldPathHuffmanEncoder::InternalNode
    v31 = trees.m_heap.m_Size;
    v32 = trees.m_heap.m_Size;
    if ( trees.m_heap.m_Size == trees.m_heap.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<CFieldPathHuffmanEncoder::INode *,int>::Grow(&trees.m_heap.m_Memory, 1);
      v32 = trees.m_heap.m_Size;
    }
    v33 = trees.m_heap.m_Size;
    trees.m_heap.m_Memory.m_pMemory[trees.m_heap.m_Size] = v29;
    v34 = v32 + 1;
    trees.m_heap.m_Size = v34;
    if ( v31 < v34 && v31 != 0 )
    {
      while ( 1 )
      {
        v37 = v33;
        v31 = (v31 + 1) / 2 - 1;
        v38 = v31;
        if ( trees.m_LessFunc(&trees.m_heap.m_Memory.m_pMemory[v33], &trees.m_heap.m_Memory.m_pMemory[v38]) )
          break;
        v35 = &trees.m_heap.m_Memory.m_pMemory[v38];
        v36 = *v35;
        *v35 = trees.m_heap.m_Memory.m_pMemory[v37];
        trees.m_heap.m_Memory.m_pMemory[v37] = v36;
        if ( v31 == 0 )
          break;
        v33 = v31;
      }
      v17 = trees.m_heap.m_Size;
    }
    else
    {
      v17 = v34;
    }
    v16 = trees.m_heap.m_Memory.m_pMemory;
    ++slot;
  }
  v39 = *v16;
  if ( (trees.m_heap.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CFieldPathHuffmanEncoder::INode *,int>::Purge(&trees.m_heap.m_Memory);
    if ( (trees.m_heap.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CFieldPathHuffmanEncoder::INode *,int>::Purge(&trees.m_heap.m_Memory);
  }
  return v39;
}


// CFieldPathHuffmanEncoder::GenerateOpCodeToHuffmanMap  (line 1902, @0x00000000031289c0, libserver.so)  // inlines: HuffCode, SetOverflowFlag, WriteOneBit, WriteOneBitNoCheck, operator=, operator[]
// calls: bf_write::WriteBits, bf_write::bf_write, __stack_chk_fail
// callers: CFieldPathHuffmanEncoder::BuildOpCodeCodeToHuffmanLookup
void __fastcall CFieldPathHuffmanEncoder::GenerateOpCodeToHuffmanMap(
        CFieldPathHuffmanEncoder *const this,
        const CFieldPathHuffmanEncoder::INode *node,
        const CFieldPathHuffmanEncoder::HuffCode *const prefix)
{
  CFieldPathHuffmanEncoder::HuffCode leftPrefix; // [rsp+0h] [rbp-90h] BYREF
  CFieldPathHuffmanEncoder::HuffCode rightPrefix; // [rsp+30h] [rbp-60h] BYREF
  unsigned __int64 v8; // [rsp+58h] [rbp-38h]

  v8 = __readfsqword(0x28u);
  if ( (*(node->_vptr_INode + 2))(node) != 0 )
  {
    if ( prefix != (&this->m_OpCodeToHuffmanLookup.m_Memory + 40 * SLODWORD(node[1]._vptr_INode)) )
      bf_write::WriteBits(
        &this->m_OpCodeToHuffmanLookup.m_Memory.m_Memory.m_Data[40 * SLODWORD(node[1]._vptr_INode) + 8],
        prefix->m_buf.m_pData,
        prefix->m_buf.m_iCurBit);
  }
  else
  {
    bf_write::bf_write(&leftPrefix.m_buf, &leftPrefix, 4, -1);
    bf_write::WriteBits(&leftPrefix.m_buf, prefix->m_buf.m_pData, prefix->m_buf.m_iCurBit);
    if ( leftPrefix.m_buf.m_iCurBit >= leftPrefix.m_buf.m_nDataBits )
      leftPrefix.m_buf.m_bOverflow = 1;
    else
      leftPrefix.m_buf.m_pData[leftPrefix.m_buf.m_iCurBit++ >> 5] &= ~(1 << SLOBYTE(leftPrefix.m_buf.m_iCurBit));
    CFieldPathHuffmanEncoder::GenerateOpCodeToHuffmanMap(this, node[1]._vptr_INode, &leftPrefix);
    bf_write::bf_write(&rightPrefix.m_buf, &rightPrefix, 4, -1);
    bf_write::WriteBits(&rightPrefix.m_buf, prefix->m_buf.m_pData, prefix->m_buf.m_iCurBit);
    if ( rightPrefix.m_buf.m_iCurBit >= rightPrefix.m_buf.m_nDataBits )
      rightPrefix.m_buf.m_bOverflow = 1;
    else
      rightPrefix.m_buf.m_pData[rightPrefix.m_buf.m_iCurBit++ >> 5] |= 1 << SLOBYTE(rightPrefix.m_buf.m_iCurBit);
    CFieldPathHuffmanEncoder::GenerateOpCodeToHuffmanMap(this, *&node[1].f, &rightPrefix);
  }
}


// PackedFieldPathList_t::Alloc  (line 1971, @0x0000000003128b40, libserver.so)  // inlines: CInterlockedIntT, Construct<PackedFieldPathList_t>, PackedFieldPathList_t, ThreadInterlockedIncrement, operator++
// callers: PackedFieldPathList_t::Pack
PackedFieldPathList_t *__fastcall PackedFieldPathList_t::Alloc(int nFields)
{
  PackedFieldPathList_t *result; // rax

  result = (**g_pMemAlloc)(g_pMemAlloc, 4 * nFields + 8LL);
  if ( result != 0 )
    result->m_nRefs.m_value = 0;
  _InterlockedAdd(result, 1u);
  result->m_nCount = nFields;
  return result;
}


// PackedFieldPathList_t::Pack  (line 1981, @0x0000000003128b90, libserver.so)  // inlines: Base, memcpy
// calls: PackedFieldPathList_t::Alloc, memcpy
PackedFieldPathList_t *__fastcall PackedFieldPathList_t::Pack(const PackedFieldPathVec_t *pPaths)
{
  PackedFieldPathList_t *v2; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,3u,short int>::ElemType_t *m_pElements; // rsi
  PackedFieldPathList_t *v4; // r12
  unsigned __int64 m_nAllocated; // rax

  v2 = PackedFieldPathList_t::Alloc(pPaths->m_nCount);
  m_pElements = 0;
  v4 = v2;
  m_nAllocated = pPaths->m_nAllocated;
  if ( m_nAllocated != 0 )
  {
    m_pElements = (&pPaths->m_nAllocAllocated + 1);
    if ( m_nAllocated > 3 )
      m_pElements = pPaths->m_pElements;
  }
  memcpy(&v4[1], m_pElements, 4LL * pPaths->m_nCount);
  return v4;
}


// PackedFieldPathList_t::Unpack  (line 1988, @0x0000000003128be0, libserver.so)  // inlines: Base, EnsureCapacity, LeafCodeInfo_t, SetCount, memcpy
// calls: memcpy, LoggingSystem_IsChannelEnabled, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...), Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess
// strings: "../public/tier1/utlleanvector.h", "EnsureCapacity", "%s allocation count overflow"
int __fastcall PackedFieldPathList_t::Unpack(PackedFieldPathList_t *const this, PackedFieldPathVec_t *pPaths)
{
  unsigned __int64 m_nAllocated; // rcx
  signed int m_nCount; // edx
  int v6; // ebx
  CUtlLeanVectorFixedGrowableBase<unsigned int,3u,short int>::IndexType_t v7; // r14
  int v8; // eax
  CUtlLeanVectorFixedGrowableBase<unsigned int,3u,short int>::ElemType_t *v9; // rdi
  int v11; // esi
  void *v12; // rcx
  unsigned __int64 v13; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,3u,short int>::ElemType_t *m_pElements; // rsi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdi
  __int64 v18; // rsi
  LeafCodeInfo_t v19; // [rsp+0h] [rbp-40h] BYREF

  m_nAllocated = pPaths->m_nAllocated;
  m_nCount = this->m_nCount;
  LOWORD(v6) = pPaths->m_nAllocated;
  v7 = m_nCount;
  if ( m_nCount > m_nAllocated )
  {
    if ( m_nCount <= 3 )
    {
      LOWORD(v6) = m_nCount;
      v7 = m_nCount;
      if ( m_nAllocated <= 3 )
      {
LABEL_9:
        if ( v6 > 3 )
        {
          v12 = (**g_pMemAlloc)(g_pMemAlloc, 4LL * v6);
          v13 = pPaths->m_nAllocated;
          if ( v13 != 0 )
          {
            m_pElements = (&pPaths->m_nAllocAllocated + 1);
            if ( v13 > 3 )
              m_pElements = pPaths->m_pElements;
          }
          else
          {
            m_pElements = 0;
          }
          pPaths->m_pElements = memcpy(v12, m_pElements, 4LL * pPaths->m_nCount);
        }
        goto LABEL_10;
      }
    }
    else
    {
      if ( m_nCount > 0x7FFF )
      {
        if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
        {
          v19.m_szFile = "../public/tier1/utlleanvector.h";
          v19.m_szFunction = "EnsureCapacity";
          v19.m_nLine = 104;
          LoggingSystem_Log(
            LOG_GENERAL,
            LoggingSeverity_t::LS_ERROR,
            &v19,
            "%s allocation count overflow",
            "EnsureCapacity");
        }
        if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v17, v18, v15, v16) != 0 )
          loc_0 = -559038737;
        Plat_ExitProcess(1);
        JUMPOUT(0x3128DC9);
      }
      v6 = pPaths->m_nAllocated;
      while ( 1 )
      {
        v8 = v6;
        if ( m_nCount <= v6 )
          break;
        if ( v6 <= 16382 )
        {
          v11 = 2 * v6;
          v6 = 8;
          if ( 2 * v8 > 7 )
            v6 = v11;
        }
        else
        {
          v6 = 0x7FFF;
        }
      }
      v7 = m_nCount;
      if ( m_nAllocated <= 3 )
        goto LABEL_9;
    }
    pPaths->m_pElements = (*(*g_pMemAlloc + 8LL))(g_pMemAlloc, pPaths->m_pElements, 4LL * v6);
LABEL_10:
    pPaths->m_nAllocated = v6;
  }
  pPaths->m_nCount = v7;
  if ( v6 != 0 )
  {
    v9 = (&pPaths->m_nAllocAllocated + 1);
    if ( v6 > 3 )
      v9 = pPaths->m_pElements;
  }
  else
  {
    v9 = 0;
  }
  memcpy(v9, this + 1, 4LL * this->m_nCount);
  return this->m_nCount;
}


