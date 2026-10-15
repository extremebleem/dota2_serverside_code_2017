
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// _GLOBAL__sub_I_lzss.cpp  (line 0, @0x0000000001a67140, libserver.so)  // inlines: Color, SetColor, __static_initialization_and_destruction_0
// globals: UNSPECIFIED_LOGGING_COLOR
void __cdecl GLOBAL__sub_I_lzss_cpp()
{
  UNSPECIFIED_LOGGING_COLOR._color[0] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[1] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[2] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[3] = 0;
}


// CLZSS::IsCompressed  (line 22, @0x0000000002f7f580, libserver.so)
bool __fastcall CLZSS::IsCompressed(CLZSS *const this, unsigned __int8 *pInput)
{
  return pInput != 0 && *pInput == 1397971532;
}


// CLZSS::GetActualSize  (line 38, @0x0000000002f7f5a0, libserver.so)
// callers: CSaveRestoreFileSystem::Uncompress, CCompressedResourceManifest::Unserialize
unsigned int __fastcall CLZSS::GetActualSize(CLZSS *const this, unsigned __int8 *pInput)
{
  unsigned int result; // eax

  result = 0;
  if ( pInput != 0 && *pInput == 1397971532 )
    return *(pInput + 1);
  return result;
}


// CLZSS::BuildHash  (line 50, @0x0000000002f7f5c0, libserver.so)
// callers: CLZSS::CompressNoAlloc
void __fastcall CLZSS::BuildHash(CLZSS *const this, unsigned __int8 *pData)
{
  CLZSS::lzss_node_t *v2; // rax
  CLZSS::lzss_node_t *pPrev; // rcx
  CLZSS::lzss_list_t *v4; // rdx
  CLZSS::lzss_list_t *v5; // rdx

  v2 = &this->m_pHashTarget[pData & (this->m_nWindowSize - 1)];
  if ( v2->pData != 0 )
  {
    pPrev = v2->pPrev;
    v4 = &this->m_pHashTable[*v2->pData];
    if ( pPrev != 0 )
    {
      v4->pEnd = pPrev;
      v2->pPrev->pNext = 0;
    }
    else
    {
      v4->pEnd = 0;
      v4->pStart = 0;
    }
  }
  v5 = &this->m_pHashTable[*pData];
  v2->pData = pData;
  v2->pPrev = 0;
  v2->pNext = v5->pStart;
  if ( v5->pStart != 0 )
    v5->pStart->pPrev = v2;
  else
    v5->pEnd = v2;
  v5->pStart = v2;
}


// CLZSS::CompressNoAlloc  (line 87, @0x0000000002f7f660, libserver.so)  // inlines: memset
// calls: memset, CLZSS::BuildHash, __stack_chk_fail
// callers: CLZSS::Compress
unsigned __int8 *__fastcall CLZSS::CompressNoAlloc(
        CLZSS *const this,
        unsigned __int8 *pInput,
        int inputLength,
        unsigned __int8 *pOutputBuf,
        unsigned int *pOutputSize,
        bool bFast)
{
  __int64 v6; // r14
  size_t v10; // rdx
  void *v11; // rsp
  lzss_header_t *v12; // rax
  unsigned __int8 *v13; // rdx
  unsigned __int8 *v14; // r15
  bool v15; // zf
  bool v16; // cc
  int v17; // r10d
  unsigned __int8 v18; // bl
  CLZSS::lzss_node_t *pStart; // r9
  int v20; // r11d
  int v21; // r14d
  int v22; // ecx
  signed __int64 v23; // rdx
  unsigned __int8 *j; // rsi
  unsigned __int8 *v25; // rbx
  int v26; // edx
  __int64 v27; // rax
  unsigned __int8 v28; // di
  unsigned __int8 v29; // si
  unsigned int *v31; // rdx
  unsigned __int8 *v32; // rdi
  int v33; // eax
  _BYTE v34[4120]; // [rsp+2h] [rbp-1090h] BYREF
  unsigned int *pOutputSizea; // [rsp+101Ah] [rbp-78h]
  lzss_header_t *pHeader; // [rsp+1022h] [rbp-70h]
  unsigned __int8 *pEnd; // [rsp+102Ah] [rbp-68h]
  unsigned __int8 *pCmdByte; // [rsp+1032h] [rbp-60h]
  int nMaxProbes; // [rsp+103Ah] [rbp-58h]
  int i; // [rsp+103Eh] [rbp-54h]
  int inputLengtha; // [rsp+1042h] [rbp-50h]
  int putCmdByte; // [rsp+1046h] [rbp-4Ch]
  unsigned __int8 *pEncodedPosition; // [rsp+104Ah] [rbp-48h]
  unsigned __int64 v44; // [rsp+105Ah] [rbp-38h]

  v6 = inputLength;
  inputLengtha = inputLength;
  v44 = __readfsqword(0x28u);
  pHeader = pOutputBuf;
  pOutputSizea = pOutputSize;
  if ( inputLength <= 0x10 )
    return 0;
  this->m_pHashTable = (v34 & 0xFFFFFFFFFFFFFFEFLL);
  memset((v34 & 0xFFFFFFFFFFFFFFEFLL), 0, 0x1000u);
  v10 = 32LL * this->m_nWindowSize;
  v11 = alloca(v10 + 32);
  this->m_pHashTarget = (v34 & 0xFFFFFFFFFFFFFFEFLL);
  memset((v34 & 0xFFFFFFFFFFFFFFEFLL), 0, v10);
  v12 = pHeader;
  v13 = &pHeader[-2] + v6;
  pHeader->id = 1397971532;
  pEnd = v13;
  v14 = &v12[1];
  v15 = inputLengtha == 0;
  v16 = inputLengtha <= 0;
  v12->actualSize = inputLengtha;
  if ( !v16 )
  {
    putCmdByte = 0;
    pCmdByte = 0;
    nMaxProbes = -!bFast;
    nMaxProbes &= 0x7FFFFFF7u;
    pEncodedPosition = 0;
    nMaxProbes += 8;
LABEL_25:
    *v14 = 0;
    pCmdByte = v14++;
    for ( i = 0; ; i >>= 1 )
    {
      v17 = 16;
      ++putCmdByte;
      v18 = *pInput;
      putCmdByte &= 7u;
      if ( inputLengtha <= 16 )
        v17 = inputLengtha;
      pStart = this->m_pHashTable[v18].pStart;
      if ( pStart == 0 )
        goto LABEL_30;
      v20 = nMaxProbes;
      v21 = 0;
      do
      {
        if ( v17 != 0 && v18 == *pStart->pData )
        {
          v26 = 1;
          v27 = 0;
          do
          {
            v22 = v26;
            if ( v26 == v17 )
              break;
            v28 = pStart->pData[v27 + 1];
            ++v26;
            v29 = pInput[++v27];
          }
          while ( v28 == v29 );
        }
        else
        {
          v22 = 0;
        }
        if ( v22 > v21 )
        {
          v21 = v22;
          pEncodedPosition = pStart->pData;
        }
        if ( v22 == v17 )
          break;
        pStart = pStart->pNext;
        if ( pStart == 0 )
          break;
        --v20;
      }
      while ( v20 > 0 );
      if ( v21 > 2 )
      {
        v14 += 2;
        *pCmdByte = i | 0x80;
        v23 = pInput - pEncodedPosition - 1;
        *(v14 - 2) = v23 >> 4;
        *(v14 - 1) = (16 * v23) | (v21 - 1);
      }
      else
      {
LABEL_30:
        ++v14;
        v21 = 1;
        *pCmdByte = i;
        *(v14 - 1) = *pInput;
      }
      for ( j = pInput; ; j = v25 )
      {
        v25 = j + 1;
        CLZSS::BuildHash(this, j);
        if ( v25 - pInput >= v21 )
          break;
      }
      inputLengtha -= v21;
      if ( v14 >= pEnd )
        break;
      if ( inputLengtha <= 0 )
      {
        if ( inputLengtha != 0 )
          return 0;
        if ( putCmdByte != 0 )
        {
          v33 = *pCmdByte >> 1;
          LOBYTE(v33) = v33 | 0x80;
          *pCmdByte = v33 >> (7 - putCmdByte);
          goto LABEL_36;
        }
        goto LABEL_35;
      }
      pInput = v25;
      if ( putCmdByte == 0 )
        goto LABEL_25;
      i = *pCmdByte;
    }
    return 0;
  }
  if ( !v15 )
    return 0;
LABEL_35:
  *v14++ = 1;
LABEL_36:
  v31 = pOutputSizea;
  *v14 = 0;
  v14[1] = 0;
  if ( v31 == 0 )
    return pHeader;
  v32 = pHeader;
  *v31 = v14 + 2 - pHeader;
  return v32;
}


// CLZSS::Compress  (line 216, @0x0000000002f7f960, libserver.so)
// calls: CLZSS::CompressNoAlloc
// callers: CSaveRestoreFileSystem::Compress, CCompressedResourceManifest::Serialize
unsigned __int8 *__fastcall CLZSS::Compress(
        CLZSS *const this,
        unsigned __int8 *pInput,
        int inputLength,
        unsigned int *pOutputSize,
        bool bFast)
{
  unsigned __int8 *v9; // r12

  v9 = (**g_pMemAlloc)(g_pMemAlloc, inputLength);
  if ( CLZSS::CompressNoAlloc(this, pInput, inputLength, v9, pOutputSize, bFast) != 0 )
    return v9;
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v9);
  return 0;
}


// CLZSS::SafeUncompress  (line 294, @0x0000000002f7f9e0, libserver.so)  // inlines: GetActualSize
// callers: CCompressedResourceManifest::Unserialize
unsigned int __fastcall CLZSS::SafeUncompress(
        CLZSS *const this,
        unsigned __int8 *pInput,
        unsigned __int8 *pOutput,
        unsigned int unBufSize)
{
  unsigned int result; // eax
  unsigned int v5; // r12d
  unsigned __int8 *v6; // r10
  int v7; // r9d
  int v8; // r11d
  unsigned int v9; // ebx
  unsigned __int8 v10; // si
  int v11; // r8d
  unsigned __int8 v12; // si
  int v13; // r8d
  int v14; // edi
  unsigned __int8 *v15; // r8
  __int64 v16; // rax
  unsigned __int8 v17; // al

  if ( pInput == 0 || *pInput != 1397971532 )
    return 0;
  v5 = *(pInput + 1);
  if ( v5 == 0 || unBufSize < v5 )
    return 0;
  v6 = pInput + 8;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  while ( 1 )
  {
    if ( v7 == 0 )
      v8 = *v6++;
    v7 = (v7 + 1) & 7;
    if ( (v8 & 1) != 0 )
      break;
    if ( unBufSize < ++v9 )
      return 0;
    v17 = *v6;
    ++pOutput;
    ++v6;
    *(pOutput - 1) = v17;
LABEL_15:
    v8 >>= 1;
  }
  v10 = v6[1];
  v6 += 2;
  v11 = v10;
  v12 = v10 & 0xF;
  v13 = (16 * *(v6 - 2)) | (v11 >> 4);
  v14 = v12 + 1;
  if ( v12 != 0 )
  {
    v9 += v14;
    v15 = &pOutput[~v13];
    if ( unBufSize < v9 )
      return 0;
    v16 = 0;
    do
    {
      pOutput[v16] = v15[v16];
      ++v16;
    }
    while ( v14 > v16 );
    pOutput += v12 + 1;
    goto LABEL_15;
  }
  result = 0;
  if ( v9 == v5 )
    return v9;
  return result;
}


// CLZSS::Uncompress  (line 369, @0x0000000002f7fae0, libserver.so)  // inlines: GetActualSize
// callers: CSaveRestoreFileSystem::Uncompress
unsigned int __fastcall CLZSS::Uncompress(CLZSS *const this, unsigned __int8 *pInput, unsigned __int8 *pOutput)
{
  unsigned int result; // eax
  unsigned __int8 *v4; // r10
  int v5; // r9d
  int v6; // r11d
  int v7; // ebx
  unsigned __int8 v8; // si
  int v9; // r8d
  unsigned __int8 v10; // si
  int v11; // r8d
  int v12; // edi
  __int64 v13; // rcx
  unsigned __int8 *v14; // r8
  unsigned __int8 v15; // cl

  result = 0;
  if ( pInput == 0 )
    return result;
  if ( *pInput != 1397971532 )
    return result;
  result = *(pInput + 1);
  if ( result == 0 )
    return result;
  v4 = pInput + 8;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  while ( 1 )
  {
    if ( v5 == 0 )
      v6 = *v4++;
    v5 = (v5 + 1) & 7;
    if ( (v6 & 1) == 0 )
    {
      v15 = *v4;
      ++v7;
      ++pOutput;
      ++v4;
      *(pOutput - 1) = v15;
      goto LABEL_13;
    }
    v8 = v4[1];
    v4 += 2;
    v9 = v8;
    v10 = v8 & 0xF;
    v11 = (16 * *(v4 - 2)) | (v9 >> 4);
    v12 = v10 + 1;
    if ( v10 == 0 )
      break;
    v13 = 0;
    v14 = &pOutput[~v11];
    do
    {
      pOutput[v13] = v14[v13];
      ++v13;
    }
    while ( v12 > v13 );
    pOutput += v10 + 1;
    v7 += v12;
LABEL_13:
    v6 >>= 1;
  }
  if ( v7 != result )
    return 0;
  return result;
}


