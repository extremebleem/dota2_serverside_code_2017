
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// _GLOBAL__sub_I_blockcompress.cpp  (line 0, @0x0000000001a6eb70, libserver.so)  // inlines: Color, SetColor, __static_initialization_and_destruction_0
// globals: UNSPECIFIED_LOGGING_COLOR
void __cdecl GLOBAL__sub_I_blockcompress_cpp()
{
  UNSPECIFIED_LOGGING_COLOR._color[0] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[1] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[2] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[3] = 0;
}


// CBlockCompress::FastCompress  (line 31, @0x000000000325efd0, libserver.so)  // inlines: BitMix32, memcpy
// calls: memset, memcpy
// callers: SaveKV3Binary
uint32 __fastcall CBlockCompress::FastCompress(
        const uint8 *pSrcBuf,
        uint32 nSrcBufSize,
        uint8 *pDstBuf,
        uint32 nDstBufSize)
{
  uint32 result; // eax
  uint8 *v7; // rbx
  const uint8 *v8; // r8
  uint8 *v9; // r14
  int v10; // ecx
  unsigned int v11; // eax
  const uint8 *v12; // r12
  uint8 v13; // r11
  unsigned int v14; // r9d
  unsigned int v15; // edx
  __int64 v16; // rsi
  const uint8 *v17; // r10
  __int16 v18; // r15
  const uint8 *v19; // rsi
  __int64 v20; // rdx
  unsigned int v21; // edi
  uint32 nSrcBufSizea; // [rsp+4h] [rbp-405Ch]
  uint8 *pDstEnd; // [rsp+18h] [rbp-4048h]
  size_t n; // [rsp+20h] [rbp-4040h]
  const uint8 *phraseHash[2048]; // [rsp+30h] [rbp-4030h] BYREF

  result = 0;
  if ( nSrcBufSize <= 0x7FFFFFFE )
  {
    n = nSrcBufSize;
    if ( nDstBufSize >= nSrcBufSize + 4 )
    {
      *pDstBuf = nSrcBufSize;
      if ( nSrcBufSize != 0 )
      {
        v7 = pDstBuf + 6;
        pDstEnd = &pDstBuf[nSrcBufSize - 4];
        memset(phraseHash, 0, sizeof(phraseHash));
        if ( pSrcBuf >= &pSrcBuf[n] )
        {
LABEL_30:
          LODWORD(v7) = v7 - 2;
        }
        else
        {
          v8 = pSrcBuf;
          v9 = pDstBuf + 4;
          v10 = 16;
          v11 = 0;
          nSrcBufSizea = nSrcBufSize;
          v12 = &pSrcBuf[n];
          do
          {
            v13 = *v8;
            v14 = v12 - v8;
            if ( (v12 - v8) > 0x12 )
              v14 = 18;
            if ( v14 <= 2
              || (v15 = (-7
                       * ((-511
                         * ((-63 * (v13 | (v8[2] << 16) | (v8[1] << 8)))
                          ^ ((-63 * (v13 | (v8[2] << 16) | (v8[1] << 8))) >> 17)))
                        ^ (-8176
                         * ((-63 * (v13 | (v8[2] << 16) | (v8[1] << 8)))
                          ^ ((-63 * (v13 | (v8[2] << 16) | (v8[1] << 8))) >> 17)))))
                      ^ (-7168
                       * ((-511
                         * ((-63 * (v13 | (v8[2] << 16) | (v8[1] << 8)))
                          ^ ((-63 * (v13 | (v8[2] << 16) | (v8[1] << 8))) >> 17)))
                        ^ (-8176
                         * ((-63 * (v13 | (v8[2] << 16) | (v8[1] << 8)))
                          ^ ((-63 * (v13 | (v8[2] << 16) | (v8[1] << 8))) >> 17))))),
                  v16 = (v15 ^ (v15 >> 15)) & 0x7FF,
                  v17 = phraseHash[v16],
                  phraseHash[v16] = v8,
                  v17 >= v8)
              || v17 < pSrcBuf
              || (v18 = v8 - v17, (v8 - v17) > 0x1000) )
            {
LABEL_27:
              *v7 = v13;
              v11 >>= 1;
              ++v8;
              ++v7;
            }
            else
            {
              v19 = v8;
              v20 = 0;
              while ( 1 )
              {
                LOWORD(v21) = v20;
                if ( *v19 != v17[v20] )
                  break;
                v21 = ++v20;
                ++v19;
                if ( v14 <= v20 )
                {
                  v8 += v21;
                  goto LABEL_19;
                }
              }
              if ( v20 <= 2 )
                goto LABEL_27;
              v8 = v19;
LABEL_19:
              v11 >>= 1;
              BYTE1(v11) |= 0x80u;
              v7 += 2;
              *(v7 - 1) = (16 * (v18 - 1)) | (v21 - 3);
            }
            if ( --v10 == 0 )
            {
              *v9 = v11;
              v10 = 16;
              v9[1] = BYTE1(v11);
              v9 = v7;
              v11 = 0;
              v7 += 2;
            }
            if ( v7 >= pDstEnd )
            {
              pDstBuf[3] |= 0x80u;
              memcpy(pDstBuf + 4, pSrcBuf, n);
              return nSrcBufSizea + 4;
            }
          }
          while ( v8 < v12 );
          if ( v10 == 16 )
            goto LABEL_30;
          *v9 = v11 >> v10;
        }
        return v7 - pDstBuf;
      }
      else
      {
        pDstBuf[3] = 0x80;
        return 4;
      }
    }
  }
  return result;
}


// CBlockCompress::FastDecompress  (line 168, @0x000000000325f290, libserver.so)  // inlines: memcpy
// calls: memcpy
// callers: LoadKV3Binary
uint32 __fastcall CBlockCompress::FastDecompress(
        const uint8 *pSrcBuf,
        uint32 nSrcBufSize,
        uint8 *pDstBuf,
        uint32 nDstBufSize)
{
  int v5; // edx
  unsigned int v6; // ebx
  __int16 v7; // dx
  const uint8 *v8; // rcx
  __int16 v9; // ax
  const uint8 *v10; // r13
  uint8 *v11; // rdi
  int v12; // eax
  uint8 *v13; // r8
  int v14; // edx
  const uint8 *v15; // r11
  unsigned int v16; // r14d
  unsigned int v17; // r10d
  uint8 *v18; // rsi
  uint8 *v19; // rcx
  uint8 v21; // si
  __int64 v22; // rcx

  if ( nSrcBufSize <= 3 )
    return 0;
  v5 = pSrcBuf[3] << 24;
  v6 = v5 & 0x7FFFFFFF | *pSrcBuf | (pSrcBuf[2] << 16) | (pSrcBuf[1] << 8);
  if ( v6 > nDstBufSize )
    return 0;
  if ( (v5 | *pSrcBuf | (pSrcBuf[2] << 16) | (pSrcBuf[1] << 8)) < 0 )
  {
    if ( nSrcBufSize - 4 >= v6 )
    {
      memcpy(pDstBuf, pSrcBuf + 4, v6);
      return v6;
    }
    return 0;
  }
  if ( nSrcBufSize <= 5 )
    return 0;
  v7 = pSrcBuf[5];
  v8 = pSrcBuf + 6;
  v9 = pSrcBuf[4];
  v10 = &pSrcBuf[nSrcBufSize];
  v11 = &pDstBuf[v6];
  LOWORD(v12) = (v7 << 8) | v9;
  if ( pDstBuf < v11 )
  {
    v13 = pDstBuf;
    v14 = 16;
LABEL_7:
    if ( (v12 & 1) != 0 )
    {
LABEL_8:
      v15 = v8 + 2;
      if ( v10 >= v8 + 2 )
      {
        v16 = (*v8 >> 4) + 1;
        v17 = (*v8 & 0xF) + 3;
        v18 = &v13[-v16];
        if ( pDstBuf <= v18 && v11 >= &v13[v17] )
        {
          v19 = v13;
          if ( v16 == 1 )
          {
            v21 = *v18;
            v22 = 0;
            do
              v13[v22++] = v21;
            while ( v17 > v22 );
            v13 += v17;
          }
          else
          {
            do
              *v19++ = *v18++;
            while ( v17 > v19 - v13 );
            v13 = v19;
          }
          goto LABEL_14;
        }
      }
    }
    else
    {
      while ( 1 )
      {
        v15 = v8 + 1;
        if ( v10 < v8 + 1 )
          break;
        *v13++ = *v8;
LABEL_14:
        --v14;
        if ( v13 >= v11 )
          return v6;
        if ( v14 != 0 )
        {
          v8 = v15;
          v12 = v12 >> 1;
          goto LABEL_7;
        }
        v8 = v15 + 2;
        if ( v10 < v15 + 2 )
          return 0;
        LOWORD(v12) = *v15;
        v14 = 16;
        if ( (*v15 & 1) != 0 )
          goto LABEL_8;
      }
    }
    return 0;
  }
  return v6;
}


