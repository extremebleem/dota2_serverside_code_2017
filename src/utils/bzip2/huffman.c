
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// BZ2_hbMakeCodeLengths  (line 103, @0x00000000032514c0, libserver.so)
// calls: BZ2_bz__AssertH__fail
// callers: BZ2_compressBlock
void __fastcall BZ2_hbMakeCodeLengths(UChar *len, Int32 *freq, Int32 alphaSize, Int32 maxLen)
{
  __int64 v4; // r9
  unsigned __int64 v5; // rax
  Int32 v6; // edx
  __int64 v7; // r9
  int v8; // r8d
  int v9; // edi
  int v10; // edx
  int v11; // eax
  __int64 v12; // rsi
  int v13; // ecx
  Int32 v14; // edx
  Int32 v15; // r12d
  __int64 v16; // r13
  int v17; // r10d
  __int64 v18; // rdi
  int v19; // r9d
  int i; // eax
  int v21; // esi
  int v22; // r8d
  int v23; // r13d
  int v24; // r14d
  __int64 v25; // r15
  __int64 v26; // rsi
  int v27; // ebx
  int j; // eax
  int v29; // edi
  int v30; // r8d
  int v31; // r11d
  int v32; // esi
  int v33; // eax
  int v34; // r9d
  int v35; // eax
  int v36; // esi
  int v37; // r9d
  int v38; // eax
  __int64 v39; // r8
  Int32 v40; // eax
  __int64 v41; // rcx
  char v42; // si
  __int64 v43; // rax
  Int32 v44; // edx
  UChar v45; // al
  int *v46; // rax
  int v47; // edx
  Int32 n1; // [rsp+3Ch] [rbp-1464h]
  int heap[260]; // [rsp+40h] [rbp-1460h]
  int weight[516]; // [rsp+450h] [rbp-1050h] BYREF
  int parent[528]; // [rsp+C60h] [rbp-840h] BYREF

  if ( alphaSize > 0 )
  {
    v4 = 4LL * (alphaSize - 1) + 4;
    v5 = 0;
    do
    {
      v6 = freq[v5 / 4] << 8;
      if ( freq[v5 / 4] == 0 )
        v6 = 256;
      weight[v5 / 4 + 1] = v6;
      v5 += 4LL;
    }
    while ( v5 != v4 );
  }
  while ( 1 )
  {
    heap[0] = 0;
    weight[0] = 0;
    parent[0] = -2;
    if ( alphaSize > 0 )
    {
      v7 = 0;
      v8 = 1;
      do
      {
        heap[v7 + 1] = v8;
        v9 = weight[v7 + 1];
        v10 = v8 >> 1;
        parent[v7 + 1] = -1;
        v11 = heap[v8 >> 1];
        if ( v9 >= weight[v11] )
        {
          v10 = v8;
        }
        else
        {
          v12 = v8;
          while ( 1 )
          {
            heap[v12] = v11;
            v11 = heap[v10 >> 1];
            if ( weight[v11] <= v9 )
              break;
            v12 = v10;
            v10 >>= 1;
          }
        }
        ++v7;
        heap[v10] = v8++;
      }
      while ( v8 != alphaSize + 1 );
      if ( alphaSize != 1 )
      {
        v13 = alphaSize - 2;
        v14 = alphaSize;
        v15 = alphaSize;
        v16 = alphaSize;
        while ( 1 )
        {
          --v14;
          v17 = heap[v16];
          n1 = heap[1];
          heap[1] = v17;
          if ( v14 > 1 )
          {
            v18 = 1;
            v19 = weight[v17];
            for ( i = 2; v14 > i; i *= 2 )
            {
              v23 = weight[heap[i + 1]];
              v21 = heap[i];
              v22 = weight[v21];
              if ( v23 >= v22 )
                goto LABEL_18;
              v21 = heap[++i];
              if ( v19 < v23 )
                goto LABEL_24;
LABEL_19:
              heap[v18] = v21;
              v18 = i;
              if ( v14 < 2 * i )
                goto LABEL_24;
            }
            v21 = heap[i];
            v22 = weight[v21];
LABEL_18:
            if ( v19 < v22 )
              goto LABEL_24;
            goto LABEL_19;
          }
          v18 = 1;
LABEL_24:
          heap[v18] = v17;
          v16 = v14;
          v24 = heap[v14];
          v25 = heap[1];
          heap[1] = v24;
          if ( v13 > 1 )
            break;
          v26 = 1;
LABEL_33:
          ++v15;
          heap[v26] = v24;
          parent[v25] = v15;
          v32 = weight[v25];
          heap[v14] = v15;
          parent[n1] = v15;
          v33 = weight[n1];
          v34 = v33;
          if ( v33 < v32 )
            v34 = v32;
          LOBYTE(v32) = 0;
          LOBYTE(v33) = 0;
          v35 = v32 + v33;
          v36 = v14 >> 1;
          v37 = v35 | (v34 + 1);
          weight[v15] = v37;
          parent[v15] = -1;
          v38 = heap[v14 >> 1];
          if ( v37 >= weight[v38] )
          {
            v36 = v14;
          }
          else
          {
            v39 = v14;
            while ( 1 )
            {
              heap[v39] = v38;
              v38 = heap[v36 >> 1];
              if ( v37 >= weight[v38] )
                break;
              v39 = v36;
              v36 >>= 1;
            }
          }
          --v13;
          heap[v36] = v15;
          if ( v14 == 1 )
          {
            v40 = 2 * alphaSize - 1;
            goto LABEL_41;
          }
        }
        v26 = 1;
        v27 = weight[v24];
        for ( j = 2; v13 > j; j *= 2 )
        {
          v31 = weight[heap[j + 1]];
          v29 = heap[j];
          v30 = weight[v29];
          if ( v31 >= v30 )
            goto LABEL_27;
          v29 = heap[++j];
          if ( v31 > v27 )
            goto LABEL_33;
LABEL_28:
          heap[v26] = v29;
          v26 = j;
          if ( v13 < 2 * j )
            goto LABEL_33;
        }
        v29 = heap[j];
        v30 = weight[v29];
LABEL_27:
        if ( v30 > v27 )
          goto LABEL_33;
        goto LABEL_28;
      }
    }
    v40 = alphaSize;
LABEL_41:
    if ( v40 > 515 )
      BZ2_bz__AssertH__fail(2002);
    if ( alphaSize <= 0 )
      break;
    v41 = 0;
    v42 = 0;
    do
    {
      v43 = parent[v41 + 1];
      if ( v43 < 0 )
      {
        v45 = 0;
        v44 = 0;
      }
      else
      {
        v44 = 0;
        do
        {
          LODWORD(v43) = parent[v43];
          ++v44;
        }
        while ( v43 >= 0 );
        v45 = v44;
      }
      len[v41] = v45;
      if ( maxLen < v44 )
        v42 = 1;
      ++v41;
    }
    while ( v41 != (alphaSize - 1) + 1LL );
    if ( v42 == 0 )
      break;
    if ( alphaSize != 1 )
    {
      v46 = &weight[1];
      do
      {
        v47 = *v46++;
        *(v46 - 1) = ((v47 >> 8) / 2 + 1) << 8;
      }
      while ( v46 != &weight[alphaSize - 2 + 2] );
    }
  }
}


// BZ2_hbAssignCodes  (line 175, @0x0000000003251a00, libserver.so)
// callers: BZ2_compressBlock
void __fastcall BZ2_hbAssignCodes(Int32 *code, UChar *length, Int32 minLen, Int32 maxLen, Int32 alphaSize)
{
  Int32 v5; // r9d
  __int64 v6; // rax

  if ( minLen <= maxLen )
  {
    v5 = 0;
    do
    {
      if ( alphaSize > 0 )
      {
        v6 = 0;
        do
        {
          while ( length[v6] != minLen )
          {
            if ( alphaSize <= ++v6 )
              goto LABEL_8;
          }
          code[v6++] = v5++;
        }
        while ( alphaSize > v6 );
      }
LABEL_8:
      ++minLen;
      v5 *= 2;
    }
    while ( minLen != maxLen + 1 );
  }
}


// BZ2_hbCreateDecodeTables  (line 193, @0x0000000003251a50, libserver.so)
// callers: BZ2_decompress
void __fastcall BZ2_hbCreateDecodeTables(
        Int32 *limit,
        Int32 *base,
        Int32 *perm,
        UChar *length,
        Int32 minLen,
        Int32 maxLen,
        Int32 alphaSize)
{
  Int32 v7; // r11d
  int v8; // r12d
  __int64 v9; // rax
  __int64 v10; // r10
  __int64 i; // rax
  __int64 v12; // rdx
  __int64 j; // rax
  Int32 *v14; // rax
  int v15; // edx
  Int32 *v16; // rcx
  int v17; // edx
  int v18; // edx
  Int32 v19; // r10d
  int v20; // edx
  __int64 v21; // rax
  Int32 *v22; // rcx
  Int32 *v23; // rax
  Int32 *v24; // rsi
  Int32 v25; // edx

  if ( minLen <= maxLen )
  {
    v7 = minLen;
    v8 = 0;
    do
    {
      if ( alphaSize > 0 )
      {
        v9 = 0;
        do
        {
          while ( length[v9] != v7 )
          {
            if ( alphaSize <= ++v9 )
              goto LABEL_8;
          }
          v10 = v8++;
          perm[v10] = v9++;
        }
        while ( alphaSize > v9 );
      }
LABEL_8:
      ++v7;
    }
    while ( v7 != maxLen + 1 );
  }
  for ( i = 0; i != 92; i += 4 )
    *(base + i) = 0;
  if ( alphaSize > 0 )
  {
    LOBYTE(i) = 0;
    do
    {
      v12 = length[i++];
      ++base[v12 + 1];
    }
    while ( alphaSize > i );
  }
  for ( j = 0; j != 88; j += 4 )
    *(base + j + 4) += *(base + j);
  LOBYTE(j) = 0;
  do
  {
    *(limit + j) = 0;
    j += 4;
  }
  while ( j != 92 );
  if ( minLen <= maxLen )
  {
    v14 = &base[minLen + 1];
    v15 = 0;
    v16 = &limit[minLen];
    do
    {
      v17 = *v14++ + v15;
      ++v16;
      v18 = v17 - *(v14 - 2);
      v19 = v18 - 1;
      v15 = 2 * v18;
      *(v16 - 1) = v19;
    }
    while ( v14 != &base[(maxLen - minLen) + 2 + minLen] );
  }
  v20 = minLen + 1;
  if ( maxLen >= minLen + 1 )
  {
    v21 = v20;
    v22 = &limit[v21 - 1];
    v23 = &base[v21];
    v24 = &base[(maxLen - 1 - minLen) + 1 + v20];
    do
    {
      v25 = *v22;
      ++v23;
      ++v22;
      *(v23 - 1) = 2 * v25 + 2 - *(v23 - 1);
    }
    while ( v23 != v24 );
  }
}


