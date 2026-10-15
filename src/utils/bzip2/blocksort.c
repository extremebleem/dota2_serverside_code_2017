
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// fallbackSort  (line 259, @0x0000000003251bb0, libserver.so)  // inlines: fallbackQSort3, fallbackSimpleSort, fprintf
// calls: fwrite, __fprintf_chk, BZ2_bz__AssertH__fail
// callers: BZ2_blockSort
// strings: "        bucket sorting ...\n", "        depth %6d has ", "%6d unresolved strings\n", "        reconstructing block ...\n"
void __fastcall fallbackSort(UInt32 *fmap, UInt32 *eclass, UInt32 *bhtab, Int32 nblock, Int32 verb)
{
  int *v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 i; // rax
  int *v12; // rax
  __int64 j; // rax
  __int64 v14; // rsi
  int v15; // edi
  int v16; // edx
  __int64 k; // rax
  int *v18; // rax
  int v19; // ecx
  int m; // eax
  int v21; // edi
  int v22; // ecx
  int v23; // edx
  UInt32 *v24; // r15
  __int64 v25; // rcx
  UInt32 n; // edx
  int v27; // eax
  int v28; // eax
  UInt32 *v29; // r14
  UInt32 *v30; // rbx
  UInt32 v31; // edx
  int v32; // ecx
  UInt32 v33; // edx
  int v34; // ecx
  Int32 v35; // edi
  Int32 v36; // r12d
  Int32 v37; // r11d
  UInt32 v38; // r9d
  int v39; // ebx
  Int32 v40; // edi
  Int32 v41; // r15d
  Int32 v42; // ecx
  UInt32 *ii; // r10
  UInt32 v44; // edx
  __int64 v45; // rax
  UInt32 *v46; // rax
  int v47; // r8d
  int v48; // eax
  __int64 v49; // rdx
  UInt32 *v50; // rsi
  UInt32 *v51; // rax
  UInt32 v52; // r9d
  int v53; // edx
  UInt32 *v54; // rax
  UInt32 *v55; // r9
  __int64 v56; // rdx
  UInt32 v57; // esi
  int v58; // eax
  int v59; // r8d
  __int64 v60; // rax
  int v61; // ecx
  Int32 v62; // edx
  UInt32 *v63; // rax
  __int64 v64; // rsi
  UInt32 *v65; // rsi
  UInt32 v66; // ecx
  __int64 v67; // rsi
  UInt32 v68; // esi
  Int32 v69; // r10d
  __int64 v70; // r9
  UInt32 v71; // ebx
  Int32 v72; // edx
  UInt32 v73; // r8d
  UInt32 v74; // ecx
  __int64 v75; // rax
  __int64 v76; // rsi
  Int32 v77; // r10d
  __int64 v78; // r9
  UInt32 v79; // ebx
  Int32 v80; // edx
  UInt32 v81; // r8d
  UInt32 v82; // ecx
  __int64 v83; // rax
  __int64 v84; // rsi
  int v85; // edi
  int v86; // ecx
  UInt32 *v87; // rdx
  UInt32 v88; // esi
  int v89; // ecx
  __int64 v90; // rsi
  int v91; // eax
  __int64 v92; // rdx
  __int64 v93; // rdx
  Int32 v94; // eax
  UInt32 *v95; // [rsp+0h] [rbp-BB0h]
  UInt32 *v97; // [rsp+10h] [rbp-BA0h]
  Int32 nNotDone; // [rsp+20h] [rbp-B90h]
  Int32 l; // [rsp+24h] [rbp-B8Ch]
  Int32 r; // [rsp+28h] [rbp-B88h]
  Int32 H; // [rsp+2Ch] [rbp-B84h]
  __int64 v102; // [rsp+30h] [rbp-B80h]
  int v103; // [rsp+38h] [rbp-B78h]
  unsigned int v105; // [rsp+40h] [rbp-B70h]
  int v106; // [rsp+44h] [rbp-B6Ch]
  _DWORD v107[100]; // [rsp+50h] [rbp-B60h]
  _DWORD v108[100]; // [rsp+1E0h] [rbp-9D0h]
  int ftabCopy[256]; // [rsp+370h] [rbp-840h]
  int ftab[257]; // [rsp+770h] [rbp-440h] BYREF
  _BYTE v111[60]; // [rsp+B74h] [rbp-3Ch] BYREF

  if ( verb > 3 )
    fwrite("        bucket sorting ...\n", 1u, 0x1Bu, stderr);
  v8 = ftab;
  do
    *v8++ = 0;
  while ( v8 != v111 );
  if ( nblock > 0 )
  {
    v9 = 0;
    do
    {
      v10 = *(eclass + v9++);
      ++ftab[v10];
    }
    while ( nblock > v9 );
  }
  for ( i = 0; i != 256; ++i )
    ftabCopy[i] = ftab[i];
  v12 = &ftab[1];
  do
  {
    *v12 += *(v12 - 1);
    ++v12;
  }
  while ( v12 != v111 );
  for ( j = 0; nblock > j; ++j )
  {
    v14 = *(eclass + j);
    v15 = ftab[v14];
    ftab[v14] = v15 - 1;
    fmap[v15 - 1] = j;
  }
  v16 = nblock / 32 + 2;
  for ( k = 0; v16 > k; ++k )
    bhtab[k] = 0;
  v18 = ftab;
  do
  {
    v19 = *v18++;
    bhtab[v19 >> 5] |= 1 << v19;
  }
  while ( v18 != &ftab[256] );
  for ( m = 0; m != 64; m += 2 )
  {
    v21 = 1 << (m + nblock);
    v22 = nblock + 1 + m;
    v23 = (m + nblock) >> 5;
    bhtab[v23] |= v21;
    bhtab[v22 >> 5] &= ~(1 << v22);
  }
  v24 = bhtab;
  H = 1;
  v97 = fmap + 1;
  do
  {
    while ( 1 )
    {
      if ( verb > 3 )
        __fprintf_chk(stderr, 1, "        depth %6d has ", H);
      v25 = 0;
      for ( n = 0; nblock > v25; eclass[v27] = n )
      {
        if ( ((1 << v25) & v24[v25 >> 5]) != 0 )
          n = v25;
        v27 = fmap[v25] - H;
        if ( v27 < 0 )
          v27 += nblock;
        ++v25;
      }
      nNotDone = 0;
      v28 = 0;
      v29 = fmap;
      v30 = v24;
LABEL_32:
      while ( 2 )
      {
        while ( 2 )
        {
          v31 = v30[v28 >> 5];
          if ( ((1 << (v28 & 0x1F)) & v31) != 0 )
          {
            if ( (v28 & 0x1F) != 0 )
            {
              ++v28;
              continue;
            }
            while ( v31 == -1 )
            {
              v28 += 32;
              v31 = v30[v28 >> 5];
            }
            if ( (v31 & (1 << v28)) != 0 )
            {
              v61 = v28;
              do
                ++v61;
              while ( ((1 << v61) & v30[v61 >> 5]) != 0 );
              v28 = v61;
            }
          }
          break;
        }
        l = v28 - 1;
        if ( nblock > v28 - 1 )
        {
          v32 = v28 & 0x1F;
          v33 = v30[v28 >> 5];
          if ( ((1 << v32) & v33) != 0 )
          {
            v94 = v28 - 1;
          }
          else
          {
            while ( v32 != 0 )
            {
              v32 = ++v28 & 0x1F;
              v33 = v30[v28 >> 5];
              if ( ((1 << v32) & v33) != 0 )
                goto LABEL_44;
            }
            for ( ; v33 == 0; v33 = v30[v28 >> 5] )
              v28 += 32;
            if ( (v33 & (1 << v28)) == 0 )
            {
              v34 = v28;
              do
                ++v34;
              while ( ((1 << v34) & v30[v34 >> 5]) == 0 );
              v28 = v34;
            }
LABEL_44:
            v94 = v28 - 1;
          }
          r = v94;
          v35 = v94;
          if ( nblock > v94 )
          {
            v28 = v94 + 1;
            if ( l >= v35 )
              continue;
            v108[0] = v35;
            v36 = v35;
            v95 = v30;
            v103 = 1;
            LOWORD(v105) = 0;
            v107[0] = l;
            v37 = l;
            nNotDone += v35 - l + 1;
            while ( 1 )
            {
              v106 = v103 - 1;
              if ( v36 - v37 <= 9 )
              {
                if ( v37 != v36 )
                {
                  if ( v36 - v37 > 3 && v36 - 4 >= v37 )
                  {
                    v69 = v36;
                    v70 = 4LL * (v36 - 4) + 16;
                    do
                    {
                      v71 = *(v29 + v70 - 16);
                      v72 = v69;
                      v73 = eclass[v71];
                      if ( v69 > v36 || (v74 = *(v29 + v70), eclass[v74] >= v73) )
                      {
                        v75 = v70;
                      }
                      else
                      {
                        v75 = v70 + 16;
                        v76 = v70;
                        while ( 1 )
                        {
                          v72 += 4;
                          *(v29 + v76 - 16) = v74;
                          if ( v72 > v36 )
                            break;
                          v74 = *(v29 + v75);
                          if ( v73 <= eclass[v74] )
                            goto LABEL_97;
                          v76 = v75;
                          v75 += 16;
                        }
                        v75 = 4LL * v72;
                      }
LABEL_97:
                      --v69;
                      v70 -= 4;
                      *(v29 + v75 - 16) = v71;
                    }
                    while ( v69 != v37 + 3 );
                  }
                  if ( v36 - 1 >= v37 )
                  {
                    v77 = v36;
                    v78 = 4LL * (v36 - 1) + 4;
                    do
                    {
                      v79 = *(v29 + v78 - 4);
                      v80 = v77;
                      v81 = eclass[v79];
                      if ( v77 > v36 || (v82 = *(v29 + v78), eclass[v82] >= v81) )
                      {
                        v83 = v78;
                      }
                      else
                      {
                        v83 = v78 + 4;
                        v84 = v78;
                        while ( 1 )
                        {
                          ++v80;
                          *(v29 + v84 - 4) = v82;
                          if ( v80 > v36 )
                            break;
                          v82 = *(v29 + v83);
                          if ( v81 <= eclass[v82] )
                            goto LABEL_107;
                          v84 = v83;
                          v83 += 4;
                        }
                        v83 = 4LL * v80;
                      }
LABEL_107:
                      --v77;
                      v78 -= 4;
                      *(v29 + v83 - 4) = v79;
                    }
                    while ( v77 != v37 );
                  }
                }
              }
              else
              {
                v105 = (7621 * v105 + 1) & 0x7FFF;
                if ( v105 % 3 != 0 )
                {
                  if ( v105 % 3 == 1 )
                    v38 = eclass[v29[(v37 + v36) >> 1]];
                  else
                    v38 = eclass[v29[v36]];
                  v102 = v37;
                }
                else
                {
                  v102 = v37;
                  v38 = eclass[v29[v37]];
                }
                v39 = v37 + 1;
                v40 = v36;
                v41 = v37;
                v42 = v36;
                for ( ii = &v29[v102]; ; ++ii )
                {
                  v47 = v39 - 1;
                  if ( v42 < v39 - 1 )
                    break;
                  v44 = *ii;
                  if ( eclass[*ii] == v38 )
                  {
                    v45 = v41++;
                    v46 = &v29[v45];
                    *ii = *v46;
                    *v46 = v44;
                    goto LABEL_54;
                  }
                  if ( (eclass[*ii] - v38) > 0 )
                  {
                    v62 = v42 - 1;
                    v63 = &v29[v42];
                    while ( 1 )
                    {
                      v66 = *v63;
                      v67 = *v63;
                      if ( eclass[v67] == v38 )
                      {
                        v64 = v40--;
                        v65 = &v29[v64];
                        *v63 = *v65;
                        *v65 = v66;
                        v42 = v62;
                      }
                      else
                      {
                        if ( (eclass[v67] - v38) < 0 )
                        {
                          v68 = *ii;
                          *ii = v66;
                          v42 = v62;
                          *v63 = v68;
                          break;
                        }
                        v42 = v62;
                      }
                      --v63;
                      --v62;
                      if ( v42 < v47 )
                        goto LABEL_56;
                    }
                  }
LABEL_54:
                  ++v39;
                }
LABEL_56:
                if ( v40 >= v41 )
                {
                  v48 = v47 - v41;
                  if ( v41 - v37 <= v47 - v41 )
                    v48 = v41 - v37;
                  if ( v48 > 0 )
                  {
                    v49 = v47 - v48 - v102;
                    v50 = &v97[v102 + (v48 - 1)];
                    v51 = &v29[v102];
                    do
                    {
                      v52 = *v51;
                      *v51 = v51[v49];
                      v51[v49] = v52;
                      ++v51;
                    }
                    while ( v51 != v50 );
                  }
                  v53 = v36 - v40;
                  if ( v36 - v40 > v40 - v42 )
                    v53 = v40 - v42;
                  if ( v53 > 0 )
                  {
                    v54 = &v29[v47];
                    v55 = &v97[v47 + (v53 - 1)];
                    v56 = v36 - v53 + 1 - v47;
                    do
                    {
                      v57 = *v54;
                      *v54 = v54[v56];
                      v54[v56] = v57;
                      ++v54;
                    }
                    while ( v54 != v55 );
                  }
                  v58 = v36 + v42 - v40 + 1;
                  v59 = v37 + v47 - v41 - 1;
                  if ( v59 - v37 <= -(v42 - v40 + 1) )
                  {
                    v107[v106] = v58;
                    v107[v103] = v37;
                    v108[v103] = v59;
                  }
                  else
                  {
                    v108[v106] = v59;
                    v107[v103] = v58;
                    v108[v103] = v36;
                  }
                  v106 = v103 + 1;
                  goto LABEL_70;
                }
              }
              if ( v103 == 1 )
              {
                v85 = -1;
                v30 = v95;
                v86 = l;
                v87 = &v29[l];
                v28 = r + 1;
                while ( 1 )
                {
                  v88 = eclass[*v87];
                  if ( v85 != v88 )
                    v95[v86 >> 5] |= 1 << v86;
                  ++v86;
                  ++v87;
                  if ( v86 == v28 )
                    break;
                  v85 = v88;
                }
                goto LABEL_32;
              }
LABEL_70:
              if ( v106 > 99 )
                BZ2_bz__AssertH__fail(1004);
              v103 = v106;
              v60 = v106 - 1;
              v37 = v107[v60];
              v36 = v108[v60];
            }
          }
        }
        break;
      }
      fmap = v29;
      v24 = v30;
      if ( verb > 3 )
        break;
      H *= 2;
      if ( nNotDone == 0 || H > nblock )
        goto LABEL_126;
    }
    __fprintf_chk(stderr, 1, "%6d unresolved strings\n", nNotDone);
    H *= 2;
  }
  while ( nNotDone != 0 && H <= nblock );
  fwrite("        reconstructing block ...\n", 1u, 0x21u, stderr);
LABEL_126:
  if ( nblock > 0 )
  {
    v89 = ftabCopy[0];
    v90 = 0;
    v91 = 0;
    do
    {
      if ( v89 != 0 )
      {
        v92 = v91;
      }
      else
      {
        do
        {
          v92 = ++v91;
          v89 = ftabCopy[v91];
        }
        while ( v89 == 0 );
      }
      ftabCopy[v92] = --v89;
      v93 = v29[v90++];
      *(eclass + v93) = v91;
    }
    while ( nblock > v90 );
    if ( v91 > 255 )
      BZ2_bz__AssertH__fail(1005);
  }
}


// mainGtU  (line 394, @0x000000000199b070, libserver.so)
// callers: mainSort
Bool __fastcall mainGtU(UInt32 i1, UInt32 i2, UChar *block, UInt16 *quadrant, UInt32 nblock, Int32 *budget)
{
  UChar v6; // al
  __int64 v7; // r10
  UInt32 v9; // edi
  UInt32 v10; // esi
  signed int v11; // r11d
  UChar v12; // bl
  bool v13; // cf
  bool v14; // zf
  UInt16 v15; // ax
  __int64 v16; // rax
  UChar v17; // bl
  __int64 v18; // r10
  UInt16 v19; // ax
  __int64 v20; // rax
  UChar v21; // bl
  __int64 v22; // r10
  UInt16 v23; // ax
  __int64 v24; // rax
  UChar v25; // bl
  __int64 v26; // r10
  UInt16 v27; // ax
  __int64 v28; // rax
  UChar v29; // bl
  __int64 v30; // r10
  UInt16 v31; // ax
  __int64 v32; // rax
  UChar v33; // bl
  __int64 v34; // r10
  UInt16 v35; // ax
  __int64 v36; // rax
  UChar v37; // bl
  __int64 v38; // r10
  UInt16 v39; // ax
  __int64 v40; // rax
  UChar v41; // bl
  __int64 v42; // r10
  UInt16 v43; // ax

  v6 = block[i2 + 11];
  v7 = i1 + 11;
  if ( block[v7] != v6 )
    return block[v7] > v6;
  v9 = i1 + 12;
  v10 = i2 + 12;
  v11 = nblock + 8;
  do
  {
    v12 = block[v10];
    v13 = block[v9] < v12;
    v14 = block[v9] == v12;
    if ( block[v9] != v12 )
      return !v13 && !v14;
    v15 = quadrant[v10];
    v13 = quadrant[v9] < v15;
    v14 = quadrant[v9] == v15;
    if ( quadrant[v9] != v15 )
      return !v13 && !v14;
    v16 = v10 + 1;
    v17 = block[v16];
    v18 = v9 + 1;
    v13 = block[v18] < v17;
    v14 = block[v18] == v17;
    if ( block[v18] != v17 )
      return !v13 && !v14;
    v19 = quadrant[v16];
    v13 = quadrant[v18] < v19;
    v14 = quadrant[v18] == v19;
    if ( quadrant[v18] != v19 )
      return !v13 && !v14;
    v20 = v10 + 2;
    v21 = block[v20];
    v22 = v9 + 2;
    v13 = block[v22] < v21;
    v14 = block[v22] == v21;
    if ( block[v22] != v21 )
      return !v13 && !v14;
    v23 = quadrant[v20];
    v13 = quadrant[v22] < v23;
    v14 = quadrant[v22] == v23;
    if ( quadrant[v22] != v23 )
      return !v13 && !v14;
    v24 = v10 + 3;
    v25 = block[v24];
    v26 = v9 + 3;
    v13 = block[v26] < v25;
    v14 = block[v26] == v25;
    if ( block[v26] != v25 )
      return !v13 && !v14;
    v27 = quadrant[v24];
    v13 = quadrant[v26] < v27;
    v14 = quadrant[v26] == v27;
    if ( quadrant[v26] != v27 )
      return !v13 && !v14;
    v28 = v10 + 4;
    v29 = block[v28];
    v30 = v9 + 4;
    v13 = block[v30] < v29;
    v14 = block[v30] == v29;
    if ( block[v30] != v29 )
      return !v13 && !v14;
    v31 = quadrant[v28];
    v13 = quadrant[v30] < v31;
    v14 = quadrant[v30] == v31;
    if ( quadrant[v30] != v31 )
      return !v13 && !v14;
    v32 = v10 + 5;
    v33 = block[v32];
    v34 = v9 + 5;
    v13 = block[v34] < v33;
    v14 = block[v34] == v33;
    if ( block[v34] != v33 )
      return !v13 && !v14;
    v35 = quadrant[v32];
    v13 = quadrant[v34] < v35;
    v14 = quadrant[v34] == v35;
    if ( quadrant[v34] != v35 )
      return !v13 && !v14;
    v36 = v10 + 6;
    v37 = block[v36];
    v38 = v9 + 6;
    v13 = block[v38] < v37;
    v14 = block[v38] == v37;
    if ( block[v38] != v37 )
      return !v13 && !v14;
    v39 = quadrant[v36];
    v13 = quadrant[v38] < v39;
    v14 = quadrant[v38] == v39;
    if ( quadrant[v38] != v39 )
      return !v13 && !v14;
    v40 = v10 + 7;
    v41 = block[v40];
    v42 = v9 + 7;
    v13 = block[v42] < v41;
    v14 = block[v42] == v41;
    if ( block[v42] != v41 )
      return !v13 && !v14;
    v43 = quadrant[v40];
    v13 = quadrant[v42] < v43;
    v14 = quadrant[v42] == v43;
    if ( quadrant[v42] != v43 )
      return !v13 && !v14;
    v9 += 8;
    v10 += 8;
    if ( nblock <= v9 )
      v9 -= nblock;
    if ( nblock <= v10 )
      v10 -= nblock;
    --*budget;
    v11 -= 8;
  }
  while ( v11 >= 0 );
  return 0;
}


// mainSort  (line 798, @0x0000000003252580, libserver.so)  // inlines: fprintf, mainGtU, mainQSort3, mainSimpleSort, mmed3
// calls: fwrite, __fprintf_chk, mainGtU, BZ2_bz__AssertH__fail, __stack_chk_fail
// callers: BZ2_blockSort
// strings: "        main sort initialise ...\n", "        bucket sorting ...\n", "        qsort [0x%x, 0x%x]   done %d   this %d\n", "        %d pointers, %d sorted, %d scanned\n"
// globals: incs
void __fastcall mainSort(
        UInt32 *ptr,
        UChar *block,
        UInt16 *quadrant,
        UInt32 *ftab,
        Int32 nblock,
        Int32 verb,
        Int32 *budget)
{
  __int64 i; // rax
  int v9; // ecx
  int v10; // eax
  int v11; // edi
  __int64 v12; // rdx
  UChar *v13; // rcx
  UInt16 *v14; // rdx
  int v15; // r8d
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // edx
  UChar *v21; // rdi
  UInt16 *v22; // r8
  __int64 v23; // rcx
  int v24; // esi
  int v25; // eax
  __int64 k; // rax
  __int64 m; // rax
  int v28; // edx
  unsigned __int16 v29; // ax
  UChar *v30; // rcx
  __int16 v31; // r8
  unsigned __int16 v32; // ax
  UInt32 *v33; // r9
  int v34; // r8d
  unsigned __int16 v35; // ax
  UInt32 *v36; // r9
  int v37; // r8d
  unsigned __int16 v38; // ax
  UInt32 *v39; // r9
  int v40; // r8d
  UInt32 *v41; // r9
  UInt32 v42; // ebx
  int v43; // edx
  UChar *v44; // rcx
  __int16 v45; // si
  UInt32 *v46; // rdi
  int v47; // esi
  __int64 n; // rax
  int v49; // ebx
  int v50; // edx
  int ii; // eax
  __int64 v52; // r8
  int v53; // r11d
  UInt32 v54; // r10d
  int v55; // edi
  int v56; // esi
  int v57; // eax
  unsigned int v58; // ebx
  signed int v59; // r12d
  UChar *v60; // rax
  int v61; // r14d
  int v62; // r15d
  UChar *v63; // r10
  unsigned __int8 v64; // dl
  unsigned __int8 v65; // al
  int v66; // r9d
  signed int v67; // ecx
  UInt32 *v68; // r12
  int v69; // r11d
  signed int v70; // ebx
  signed int v71; // edi
  UInt32 v72; // edx
  __int64 v73; // rax
  UInt32 *v74; // rax
  signed int v75; // r8d
  __int64 v76; // rax
  __int64 v77; // rax
  signed int v78; // edx
  UInt32 *v79; // rax
  __int64 v80; // rsi
  UInt32 *v81; // rsi
  UInt32 v82; // ecx
  int v83; // esi
  UInt32 v84; // esi
  int v85; // edx
  __int64 v86; // rax
  int v87; // ecx
  int v88; // r11d
  int v89; // esi
  int v90; // ecx
  __int64 v91; // r13
  UInt32 *v92; // rbx
  UChar *v93; // r15
  UInt32 *v94; // r14
  int v95; // r12d
  UInt32 v96; // edi
  bool v97; // cf
  bool v98; // zf
  __int64 v99; // rdx
  UChar v100; // al
  __int64 v101; // rdx
  UChar v102; // al
  __int64 v103; // rdx
  UChar v104; // al
  __int64 v105; // rdx
  UChar v106; // al
  __int64 v107; // rdx
  UChar v108; // al
  __int64 v109; // rdx
  UChar v110; // al
  __int64 v111; // rdx
  UChar v112; // al
  __int64 v113; // rdx
  UChar v114; // al
  __int64 v115; // rdx
  UChar v116; // al
  __int64 v117; // rdx
  UChar v118; // al
  Bool v119; // al
  int v120; // r13d
  UInt32 *v121; // rbx
  UChar *v122; // r15
  UInt32 *v123; // r14
  UInt32 v124; // edi
  bool v125; // cf
  bool v126; // zf
  __int64 v127; // rdx
  UChar v128; // al
  __int64 v129; // rdx
  UChar v130; // al
  __int64 v131; // rdx
  UChar v132; // al
  __int64 v133; // rdx
  UChar v134; // al
  __int64 v135; // rdx
  UChar v136; // al
  __int64 v137; // rdx
  UChar v138; // al
  __int64 v139; // rdx
  UChar v140; // al
  __int64 v141; // rdx
  UChar v142; // al
  __int64 v143; // rdx
  UChar v144; // al
  __int64 v145; // rdx
  UChar v146; // al
  Bool v147; // al
  int v148; // r13d
  UInt32 *v149; // rbx
  UChar *v150; // r15
  UInt32 *v151; // r14
  UInt32 v152; // edi
  bool v153; // cf
  bool v154; // zf
  __int64 v155; // rdx
  UChar v156; // al
  __int64 v157; // rdx
  UChar v158; // al
  __int64 v159; // rdx
  UChar v160; // al
  __int64 v161; // rdx
  UChar v162; // al
  __int64 v163; // rdx
  UChar v164; // al
  __int64 v165; // rdx
  UChar v166; // al
  __int64 v167; // rdx
  UChar v168; // al
  __int64 v169; // rdx
  UChar v170; // al
  __int64 v171; // rdx
  UChar v172; // al
  __int64 v173; // rdx
  UChar v174; // al
  Bool v175; // al
  __int64 jj; // rax
  __int64 v177; // rcx
  _DWORD *v178; // r13
  int v179; // edx
  signed int v180; // eax
  UInt32 *v181; // rcx
  int v182; // edx
  __int64 v183; // rsi
  __int64 v184; // rdi
  UInt32 *v185; // r12
  int v186; // eax
  signed int v187; // ecx
  UInt32 *v188; // rsi
  int v189; // eax
  __int64 v190; // rdi
  __int64 v191; // r8
  int kk; // eax
  int v193; // edx
  char v194; // cl
  signed int v195; // edx
  int v196; // eax
  int v197; // eax
  UInt32 *v198; // rsi
  int mm; // edx
  int v200; // edi
  int v201; // eax
  __int64 v202; // rdx
  UInt32 *v203; // r9
  UInt32 *v204; // rax
  UInt32 v205; // esi
  int v206; // edx
  UInt32 *v207; // r9
  UInt32 *v208; // rax
  __int64 v209; // rdx
  UInt32 v210; // esi
  signed int v211; // r9d
  int v212; // r11d
  signed int v213; // esi
  int v214; // r8d
  signed int v215; // edx
  signed int v216; // eax
  int v217; // ebx
  int v218; // ecx
  int v219; // edi
  int v220; // r9d
  signed int v221; // edi
  signed int v222; // edi
  int v223; // ecx
  signed int v224; // ecx
  signed int v225; // ecx
  __int64 v226; // rax
  int v227; // [rsp+Ch] [rbp-12C4h]
  int v228; // [rsp+Ch] [rbp-12C4h]
  int v229; // [rsp+Ch] [rbp-12C4h]
  UChar *v230; // [rsp+10h] [rbp-12C0h]
  UChar *v231; // [rsp+10h] [rbp-12C0h]
  UChar *v232; // [rsp+10h] [rbp-12C0h]
  __int64 v233; // [rsp+18h] [rbp-12B8h]
  UInt32 *v234; // [rsp+30h] [rbp-12A0h]
  unsigned int v235; // [rsp+38h] [rbp-1298h]
  Int32 numQSorted; // [rsp+40h] [rbp-1290h]
  Int32 j; // [rsp+44h] [rbp-128Ch]
  int *ss_0; // [rsp+48h] [rbp-1288h]
  _DWORD *v240; // [rsp+50h] [rbp-1280h]
  int v241; // [rsp+58h] [rbp-1278h]
  int v242; // [rsp+5Ch] [rbp-1274h]
  int v246; // [rsp+74h] [rbp-125Ch]
  int v247; // [rsp+78h] [rbp-1258h]
  signed int v248; // [rsp+7Ch] [rbp-1254h]
  UInt32 i2; // [rsp+88h] [rbp-1248h]
  UInt32 i2a; // [rsp+88h] [rbp-1248h]
  UInt32 i2b; // [rsp+88h] [rbp-1248h]
  unsigned int v252; // [rsp+8Ch] [rbp-1244h]
  unsigned int v253; // [rsp+8Ch] [rbp-1244h]
  unsigned int v255; // [rsp+98h] [rbp-1238h]
  unsigned int v256; // [rsp+98h] [rbp-1238h]
  UInt32 v257; // [rsp+9Ch] [rbp-1234h]
  UInt32 v258; // [rsp+9Ch] [rbp-1234h]
  UInt32 v259; // [rsp+9Ch] [rbp-1234h]
  unsigned int v260; // [rsp+A0h] [rbp-1230h]
  unsigned int v261; // [rsp+A0h] [rbp-1230h]
  signed int v262; // [rsp+A4h] [rbp-122Ch]
  UInt32 *v263; // [rsp+A8h] [rbp-1228h]
  UInt32 *v264; // [rsp+B0h] [rbp-1220h]
  signed int v265; // [rsp+B8h] [rbp-1218h]
  unsigned int v266; // [rsp+BCh] [rbp-1214h]
  unsigned int v267; // [rsp+BCh] [rbp-1214h]
  __int64 v268; // [rsp+C0h] [rbp-1210h]
  int v269; // [rsp+C8h] [rbp-1208h]
  __int64 v270; // [rsp+D0h] [rbp-1200h]
  int v271; // [rsp+D8h] [rbp-11F8h]
  _DWORD v272[100]; // [rsp+E0h] [rbp-11F0h]
  _DWORD v273[100]; // [rsp+270h] [rbp-1060h]
  _DWORD v274[100]; // [rsp+400h] [rbp-ED0h]
  int runningOrder[256]; // [rsp+590h] [rbp-D40h] BYREF
  int copyStart[256]; // [rsp+990h] [rbp-940h] BYREF
  int copyEnd[256]; // [rsp+D90h] [rbp-540h]
  unsigned __int8 bigDone[264]; // [rsp+1190h] [rbp-140h]
  unsigned __int64 v279; // [rsp+1298h] [rbp-38h]

  v279 = __readfsqword(0x28u);
  if ( verb > 3 )
    fwrite("        main sort initialise ...\n", 1u, 0x21u, stderr);
  for ( i = 0; i != -65537; --i )
    ftab[i + 0x10000] = 0;
  v9 = nblock - 1;
  v10 = *block << 8;
  v11 = nblock - 1;
  v241 = nblock - 1;
  if ( nblock - 1 <= 2 )
  {
    v20 = nblock - 1;
  }
  else
  {
    v12 = v9;
    v13 = &block[v9];
    v14 = &quadrant[v12 - 1];
    do
    {
      v14[1] = 0;
      v15 = v10 >> 8;
      v16 = *v13;
      v11 -= 4;
      v13 -= 4;
      v14 -= 4;
      v17 = v15 | (v16 << 8);
      ++ftab[v17];
      v14[4] = 0;
      v18 = (v13[3] << 8) | (v17 >> 8);
      ++ftab[v18];
      v14[3] = 0;
      v19 = (v13[2] << 8) | (v18 >> 8);
      ++ftab[v19];
      v14[2] = 0;
      v10 = (v13[1] << 8) | (v19 >> 8);
      ++ftab[v10];
    }
    while ( v11 > 2 );
    v20 = nblock - ((nblock - 4) & 0xFFFFFFFC) - 5;
  }
  if ( v20 >= 0 )
  {
    v21 = &block[v20];
    v22 = &quadrant[v20];
    v23 = 0;
    do
    {
      --v20;
      v22[v23] = 0;
      v24 = v10 >> 8;
      v25 = v21[v23--];
      v10 = v24 | (v25 << 8);
      ++ftab[v10];
    }
    while ( v20 != -1 );
  }
  for ( k = 0; k != 34; ++k )
  {
    block[nblock + k] = block[k];
    quadrant[nblock + k] = 0;
  }
  if ( verb > 3 )
    fwrite("        bucket sorting ...\n", 1u, 0x1Bu, stderr);
  for ( m = 0; m != 0x10000; ++m )
    ftab[m + 1] += ftab[m];
  v28 = nblock - 1;
  v29 = *block << 8;
  if ( v241 <= 2 )
  {
    v43 = nblock - 1;
  }
  else
  {
    v30 = &block[v241];
    do
    {
      v31 = *v30;
      v30 -= 4;
      v32 = (v31 << 8) | HIBYTE(v29);
      v33 = &ftab[v32];
      v34 = *v33 - 1;
      *v33 = v34;
      ptr[v34] = v28;
      v35 = HIBYTE(v32) | (v30[3] << 8);
      v36 = &ftab[v35];
      v37 = *v36 - 1;
      *v36 = v37;
      ptr[v37] = v28 - 1;
      v38 = HIBYTE(v35) | (v30[2] << 8);
      v39 = &ftab[v38];
      v40 = *v39 - 1;
      *v39 = v40;
      ptr[v40] = v28 - 2;
      v29 = HIBYTE(v38) | (v30[1] << 8);
      v41 = &ftab[v29];
      v42 = (*v41)--;
      LODWORD(v41) = v28 - 3;
      v28 -= 4;
      ptr[v42 - 1] = v41;
    }
    while ( v28 > 2 );
    v43 = nblock - ((nblock - 4) & 0xFFFFFFFC) - 5;
  }
  if ( v43 >= 0 )
  {
    v44 = &block[v43];
    do
    {
      v45 = *v44--;
      v29 = (v45 << 8) | HIBYTE(v29);
      v46 = &ftab[v29];
      v47 = *v46 - 1;
      *v46 = v47;
      ptr[v47] = v43--;
    }
    while ( v43 != -1 );
  }
  for ( n = 0; n != 256; ++n )
  {
    bigDone[n] = 0;
    runningOrder[n] = n;
  }
  LOWORD(n) = 5;
  v49 = 1;
  do
  {
    v49 = 3 * v49 + 1;
    LODWORD(n) = n - 1;
  }
  while ( n != 0 );
  do
  {
    do
    {
      v50 = v49 / 3;
      v49 = v50;
    }
    while ( v50 > 255 );
    for ( ii = v50; ii != 256; ++ii )
    {
      v52 = ii;
      v53 = runningOrder[ii];
      v54 = ftab[256 * v53 + 256] - ftab[256 * v53];
      do
      {
        v55 = v52 - v50;
        v56 = runningOrder[v52 - v50];
        if ( ftab[256 * v56 + 256] - ftab[256 * v56] <= v54 )
          break;
        runningOrder[v52] = v56;
        v52 = v55;
      }
      while ( v50 <= v55 );
      runningOrder[v52] = v53;
    }
  }
  while ( v50 != 1 );
  ss_0 = runningOrder;
  numQSorted = 0;
  v234 = ptr + 1;
LABEL_39:
  j = 0;
  v242 = *ss_0;
  v233 = 4LL * (*ss_0 << 8) + 4;
  v240 = (ftab + v233);
  while ( j == v242 )
  {
LABEL_137:
    ++j;
    ++v240;
    if ( j == 256 )
    {
      if ( bigDone[v242] != 0 )
        BZ2_bz__AssertH__fail(1006);
      for ( jj = 0; jj != 256; ++jj )
      {
        v177 = v242 + (jj << 8);
        copyStart[jj] = ftab[v177] & 0xFFDFFFFF;
        copyEnd[jj] = (ftab[v177 + 1] & 0xFFDFFFFF) - 1;
      }
      v178 = (ftab + v233 - 4);
      v179 = copyStart[v242];
      v180 = *v178 & 0xFFDFFFFF;
      if ( v179 > v180 )
      {
        v181 = &ptr[v180];
        do
        {
          v182 = *v181 - 1;
          if ( v182 < 0 )
            v182 += nblock;
          v183 = block[v182];
          if ( bigDone[v183] == 0 )
          {
            v184 = copyStart[v183];
            copyStart[v183] = v184 + 1;
            ptr[v184] = v182;
          }
          v179 = copyStart[v242];
          ++v180;
          ++v181;
        }
        while ( v179 > v180 );
      }
      v185 = &ftab[256 * v242 + 256];
      v186 = copyEnd[v242];
      v187 = (*v185 & 0xFFDFFFFF) - 1;
      if ( v187 > v186 )
      {
        v188 = &ptr[v187];
        do
        {
          v189 = *v188 - 1;
          if ( v189 < 0 )
            v189 += nblock;
          v190 = block[v189];
          if ( bigDone[v190] == 0 )
          {
            v191 = copyEnd[v190];
            copyEnd[v190] = v191 - 1;
            ptr[v191] = v189;
          }
          v186 = copyEnd[v242];
          --v187;
          --v188;
        }
        while ( v186 < v187 );
      }
      if ( v186 != v179 - 1 && (v179 != 0 || v241 != v186) )
        BZ2_bz__AssertH__fail(1007);
      for ( kk = 0; kk != 256; ++kk )
      {
        v193 = kk;
        ftab[256 * v193 + v242] |= 0x200000u;
      }
      bigDone[v242] = 1;
      if ( ss_0 != &runningOrder[255] )
      {
        v194 = 0;
        v195 = *v178 & 0xFFDFFFFF;
        v196 = (*v185 & 0xFFDFFFFF) - v195;
        if ( v196 > 65534 )
        {
          do
            ++v194;
          while ( v196 >> v194 > 65534 );
        }
        v197 = v196 - 1;
        if ( v197 >= 0 )
        {
          v198 = &ptr[v197 + v195];
          for ( mm = v197; mm != -1; --mm )
          {
            v200 = *v198;
            quadrant[v200] = mm >> v194;
            if ( v200 <= 33 )
              quadrant[nblock + v200] = mm >> v194;
            --v198;
          }
        }
        if ( v197 >> v194 > 0xFFFF )
          BZ2_bz__AssertH__fail(1002);
        if ( ++ss_0 != copyStart )
          goto LABEL_39;
      }
      if ( verb > 3 )
        __fprintf_chk(
          stderr,
          &loc_0 + 1,
          "        %d pointers, %d sorted, %d scanned\n",
          nblock,
          numQSorted,
          nblock - numQSorted);
      return;
    }
  }
  v57 = *(v240 - 1);
  if ( (v57 & 0x200000) != 0 || (v58 = v57 & 0xFFDFFFFF, v59 = (*v240 & 0xFFDFFFFF) - 1, (v57 & 0xFFDFFFFF) >= v59) )
  {
LABEL_136:
    *(v240 - 1) = v57 | 0x200000;
    goto LABEL_137;
  }
  v235 = (*v240 & 0xFFDFFFFF) - v58;
  if ( verb > 3 )
    __fprintf_chk(
      stderr,
      &loc_0 + 1,
      "        qsort [0x%x, 0x%x]   done %d   this %d\n",
      v242,
      j,
      numQSorted,
      (*v240 & 0xFFDFFFFF) - v58);
  v60 = block;
  v272[0] = v58;
  v61 = 2;
  v273[0] = v59;
  v62 = 1;
  v274[0] = 2;
  v63 = v60;
  v262 = v59;
  v248 = v58;
  while ( 2 )
  {
    v246 = v62 - 1;
    if ( v262 - v248 > 19 && v61 <= 14 )
    {
      v64 = v63[ptr[(v262 + v248) >> 1] + v61];
      v65 = v63[ptr[v262] + v61];
      v66 = v63[ptr[v248] + v61];
      if ( v65 >= v66 )
      {
        v65 = v63[ptr[v248] + v61];
        v66 = v63[ptr[v262] + v61];
      }
      if ( v64 < v66 )
      {
        if ( v65 >= v64 )
          v64 = v65;
        v66 = v64;
      }
      v67 = v262;
      v68 = &ptr[v248];
      v69 = v248 + 1;
      v70 = v248;
      v71 = v262;
      while ( 1 )
      {
        v75 = v69 - 1;
        if ( v67 < v69 - 1 )
          break;
        v72 = *v68;
        if ( v63[*v68 + v61] == v66 )
        {
          v73 = v70++;
          v74 = &ptr[v73];
          *v68 = *v74;
          *v74 = v72;
          goto LABEL_57;
        }
        if ( v63[*v68 + v61] - v66 > 0 )
        {
          v78 = v67 - 1;
          v79 = &ptr[v67];
          while ( 1 )
          {
            v82 = *v79;
            v83 = v63[*v79 + v61];
            if ( v83 == v66 )
            {
              v80 = v71--;
              v81 = &ptr[v80];
              *v79 = *v81;
              *v81 = v82;
              v67 = v78;
            }
            else
            {
              if ( v83 - v66 < 0 )
              {
                v84 = *v68;
                *v68 = v82;
                v67 = v78;
                *v79 = v84;
                break;
              }
              v67 = v78;
            }
            --v79;
            --v78;
            if ( v67 < v75 )
              goto LABEL_59;
          }
        }
LABEL_57:
        ++v69;
        ++v68;
      }
LABEL_59:
      if ( v71 >= v70 )
      {
        v201 = v75 - v70;
        if ( v70 - v248 <= v75 - v70 )
          v201 = v70 - v248;
        if ( v201 > 0 )
        {
          v202 = v75 - v201 - v248;
          v203 = &v234[v248 + (v201 - 1)];
          v204 = &ptr[v248];
          do
          {
            v205 = *v204;
            *v204 = v204[v202];
            v204[v202] = v205;
            ++v204;
          }
          while ( v204 != v203 );
        }
        v206 = v262 - v71;
        if ( v262 - v71 > v71 - v67 )
          v206 = v71 - v67;
        if ( v206 > 0 )
        {
          v207 = &v234[v75 + (v206 - 1)];
          v208 = &ptr[v75];
          v209 = v262 - v206 + 1 - v75;
          do
          {
            v210 = *v208;
            *v208 = v208[v209];
            v208[v209] = v210;
            ++v208;
          }
          while ( v208 != v207 );
        }
        v211 = v248;
        v212 = v61 + 1;
        v213 = v67 - v71 + v262;
        v214 = v248 + v75 - v70;
        v215 = v214 - 1;
        v216 = v213 + 1;
        v217 = v214 - 1 - v248;
        v218 = -(v67 - v71 + 1);
        if ( v217 < v218 )
        {
          v219 = v218;
          v218 = v214 - 1 - v248;
          v248 = v213 + 1;
          v217 = v219;
          v216 = v211;
          v215 = v262;
          v262 = v214 - 1;
        }
        v220 = v61;
        if ( v213 - v214 > v218 )
        {
          v218 = v213 - v214;
          v221 = v262;
          v262 = v213;
          v220 = v61 + 1;
          v212 = v61;
          v213 = v221;
          v222 = v216;
          v216 = v214;
          v214 = v222;
        }
        if ( v217 >= v218 )
        {
          v223 = v220;
          v220 = v61;
          v61 = v223;
          v224 = v262;
          v262 = v215;
          v215 = v224;
          v225 = v216;
          v216 = v248;
          v248 = v225;
        }
        v272[v246] = v216;
        v274[v246] = v220;
        v273[v246] = v262;
        v273[v62] = v215;
        v274[v62] = v61;
        v272[v62] = v248;
        v226 = v62 + 1;
        v272[v226] = v214;
        v273[v226] = v213;
        v274[v226] = v212;
        v246 = v62 + 2;
      }
      else
      {
        v76 = v246;
        v246 = v62;
        v274[v76] = v61 + 1;
      }
LABEL_61:
      if ( v246 > 99 )
        BZ2_bz__AssertH__fail(1001);
      v62 = v246;
      v77 = v246 - 1;
      v61 = v274[v77];
      v248 = v272[v77];
      v262 = v273[v77];
      continue;
    }
    break;
  }
  v85 = v262 - v248 + 1;
  v86 = 0;
  if ( v85 <= 1 )
    goto LABEL_132;
  do
    v87 = v86++;
  while ( v85 > incs[v86] );
  v88 = v61;
  v247 = v87;
  while ( 2 )
  {
    v89 = incs[v247];
    v271 = v89;
    v90 = v89 + v248;
    v269 = v89 + v248;
    if ( v89 + v248 > v262 )
      goto LABEL_131;
    v265 = v89 + v248;
    v264 = &ptr[v90];
    v268 = v89;
    v263 = &ptr[v90 - v89 + 2];
    v270 = 4LL * -v89;
    while ( 2 )
    {
      v91 = v265;
      v92 = v263 - 2;
      v257 = *v264;
      i2 = v88 + *v264;
      v93 = &v63[i2];
      while ( 2 )
      {
        v94 = v92;
        v95 = v91 - v271;
        v96 = v88 + *v92;
        v97 = v63[v96] < *v93;
        v98 = v63[v96] == *v93;
        if ( v63[v96] != *v93 )
          goto LABEL_77;
        v99 = v96 + 1;
        v100 = v63[i2 + 1];
        v97 = v63[v99] < v100;
        v98 = v63[v99] == v100;
        if ( v63[v99] != v100 )
          goto LABEL_77;
        v101 = v96 + 2;
        v102 = v63[i2 + 2];
        v97 = v63[v101] < v102;
        v98 = v63[v101] == v102;
        if ( v63[v101] != v102 )
          goto LABEL_77;
        v103 = v96 + 3;
        v104 = v63[i2 + 3];
        v97 = v63[v103] < v104;
        v98 = v63[v103] == v104;
        if ( v63[v103] != v104 )
          goto LABEL_77;
        v105 = v96 + 4;
        v106 = v63[i2 + 4];
        v97 = v63[v105] < v106;
        v98 = v63[v105] == v106;
        if ( v63[v105] != v106 )
          goto LABEL_77;
        v107 = v96 + 5;
        v108 = v63[i2 + 5];
        v97 = v63[v107] < v108;
        v98 = v63[v107] == v108;
        if ( v63[v107] != v108 )
          goto LABEL_77;
        v109 = v96 + 6;
        v110 = v63[i2 + 6];
        v97 = v63[v109] < v110;
        v98 = v63[v109] == v110;
        if ( v63[v109] != v110 )
          goto LABEL_77;
        v111 = v96 + 7;
        v112 = v63[i2 + 7];
        v97 = v63[v111] < v112;
        v98 = v63[v111] == v112;
        if ( v63[v111] != v112 )
          goto LABEL_77;
        v113 = v96 + 8;
        v114 = v63[i2 + 8];
        v97 = v63[v113] < v114;
        v98 = v63[v113] == v114;
        if ( v63[v113] != v114 )
          goto LABEL_77;
        v115 = v96 + 9;
        v116 = v63[i2 + 9];
        v97 = v63[v115] < v116;
        v98 = v63[v115] == v116;
        if ( v63[v115] != v116
          || (v117 = v96 + 10, v118 = v63[i2 + 10], v97 = v63[v117] < v118, v98 = v63[v117] == v118, v63[v117] != v118) )
        {
LABEL_77:
          if ( v97 || v98 )
            break;
          goto LABEL_78;
        }
        v227 = v88;
        v230 = v63;
        v119 = mainGtU(v96, i2, v63, quadrant, nblock, budget);
        v88 = v227;
        v63 = v230;
        if ( v119 )
        {
LABEL_78:
          v92[v268] = *v92;
          v92 = (v92 + v270);
          if ( v269 > v95 )
            goto LABEL_93;
          v91 = v95;
          continue;
        }
        break;
      }
      v94 = &ptr[v91];
LABEL_93:
      *v94 = v257;
      v120 = v265 + 1;
      if ( v265 + 1 > v262 )
        break;
      v121 = v263 - 1;
      v258 = v264[1];
      i2a = v88 + v258;
      v266 = v88 + v258 + 1;
      v122 = &v63[v88 + v258];
      v260 = v88 + v258 + 2;
      v255 = v88 + v258 + 3;
      v252 = v88 + v258 + 4;
      while ( 2 )
      {
        v123 = v121;
        v124 = v88 + *v121;
        v125 = v63[v124] < *v122;
        v126 = v63[v124] == *v122;
        if ( v63[v124] != *v122 )
          goto LABEL_95;
        v127 = v124 + 1;
        v128 = v63[v266];
        v125 = v63[v127] < v128;
        v126 = v63[v127] == v128;
        if ( v63[v127] != v128 )
          goto LABEL_95;
        v129 = v124 + 2;
        v130 = v63[v260];
        v125 = v63[v129] < v130;
        v126 = v63[v129] == v130;
        if ( v63[v129] != v130 )
          goto LABEL_95;
        v131 = v124 + 3;
        v132 = v63[v255];
        v125 = v63[v131] < v132;
        v126 = v63[v131] == v132;
        if ( v63[v131] != v132 )
          goto LABEL_95;
        v133 = v124 + 4;
        v134 = v63[v252];
        v125 = v63[v133] < v134;
        v126 = v63[v133] == v134;
        if ( v63[v133] != v134 )
          goto LABEL_95;
        v135 = v124 + 5;
        v136 = v63[i2a + 5];
        v125 = v63[v135] < v136;
        v126 = v63[v135] == v136;
        if ( v63[v135] != v136 )
          goto LABEL_95;
        v137 = v124 + 6;
        v138 = v63[i2a + 6];
        v125 = v63[v137] < v138;
        v126 = v63[v137] == v138;
        if ( v63[v137] != v138 )
          goto LABEL_95;
        v139 = v124 + 7;
        v140 = v63[i2a + 7];
        v125 = v63[v139] < v140;
        v126 = v63[v139] == v140;
        if ( v63[v139] != v140 )
          goto LABEL_95;
        v141 = v124 + 8;
        v142 = v63[i2a + 8];
        v125 = v63[v141] < v142;
        v126 = v63[v141] == v142;
        if ( v63[v141] != v142 )
          goto LABEL_95;
        v143 = v124 + 9;
        v144 = v63[i2a + 9];
        v125 = v63[v143] < v144;
        v126 = v63[v143] == v144;
        if ( v63[v143] != v144
          || (v145 = v124 + 10,
              v146 = v63[i2a + 10],
              v125 = v63[v145] < v146,
              v126 = v63[v145] == v146,
              v63[v145] != v146) )
        {
LABEL_95:
          if ( v125 || v126 )
            goto LABEL_110;
LABEL_96:
          v121[v268] = *v121;
          v121 = (v121 + v270);
          if ( v269 > v120 - v271 )
            goto LABEL_111;
          v120 -= v271;
          continue;
        }
        break;
      }
      v228 = v88;
      v231 = v63;
      v147 = mainGtU(v124, i2a, v63, quadrant, nblock, budget);
      v88 = v228;
      v63 = v231;
      if ( v147 )
        goto LABEL_96;
LABEL_110:
      v123 = &ptr[v120];
LABEL_111:
      *v123 = v258;
      v148 = v265 + 2;
      if ( v265 + 2 > v262 )
        break;
      v149 = v263;
      v259 = v264[2];
      i2b = v88 + v259;
      v267 = v88 + v259 + 1;
      v150 = &v63[v88 + v259];
      v261 = v88 + v259 + 2;
      v256 = v88 + v259 + 3;
      v253 = v88 + v259 + 4;
      while ( 2 )
      {
        v151 = v149;
        v152 = v88 + *v149;
        v153 = v63[v152] < *v150;
        v154 = v63[v152] == *v150;
        if ( v63[v152] != *v150 )
          goto LABEL_113;
        v155 = v152 + 1;
        v156 = v63[v267];
        v153 = v63[v155] < v156;
        v154 = v63[v155] == v156;
        if ( v63[v155] != v156 )
          goto LABEL_113;
        v157 = v152 + 2;
        v158 = v63[v261];
        v153 = v63[v157] < v158;
        v154 = v63[v157] == v158;
        if ( v63[v157] != v158 )
          goto LABEL_113;
        v159 = v152 + 3;
        v160 = v63[v256];
        v153 = v63[v159] < v160;
        v154 = v63[v159] == v160;
        if ( v63[v159] != v160 )
          goto LABEL_113;
        v161 = v152 + 4;
        v162 = v63[v253];
        v153 = v63[v161] < v162;
        v154 = v63[v161] == v162;
        if ( v63[v161] != v162 )
          goto LABEL_113;
        v163 = v152 + 5;
        v164 = v63[i2b + 5];
        v153 = v63[v163] < v164;
        v154 = v63[v163] == v164;
        if ( v63[v163] != v164 )
          goto LABEL_113;
        v165 = v152 + 6;
        v166 = v63[i2b + 6];
        v153 = v63[v165] < v166;
        v154 = v63[v165] == v166;
        if ( v63[v165] != v166 )
          goto LABEL_113;
        v167 = v152 + 7;
        v168 = v63[i2b + 7];
        v153 = v63[v167] < v168;
        v154 = v63[v167] == v168;
        if ( v63[v167] != v168 )
          goto LABEL_113;
        v169 = v152 + 8;
        v170 = v63[i2b + 8];
        v153 = v63[v169] < v170;
        v154 = v63[v169] == v170;
        if ( v63[v169] != v170 )
          goto LABEL_113;
        v171 = v152 + 9;
        v172 = v63[i2b + 9];
        v153 = v63[v171] < v172;
        v154 = v63[v171] == v172;
        if ( v63[v171] != v172
          || (v173 = v152 + 10,
              v174 = v63[i2b + 10],
              v153 = v63[v173] < v174,
              v154 = v63[v173] == v174,
              v63[v173] != v174) )
        {
LABEL_113:
          if ( v153 || v154 )
            goto LABEL_128;
LABEL_114:
          v149[v268] = *v149;
          v149 = (v149 + v270);
          if ( v269 > v148 - v271 )
            goto LABEL_129;
          v148 -= v271;
          continue;
        }
        break;
      }
      v229 = v88;
      v232 = v63;
      v175 = mainGtU(v152, i2b, v63, quadrant, nblock, budget);
      v88 = v229;
      v63 = v232;
      if ( v175 )
        goto LABEL_114;
LABEL_128:
      v151 = &ptr[v148];
LABEL_129:
      v265 += 3;
      *v151 = v259;
      if ( *budget < 0 )
        return;
      v264 += 3;
      v263 += 3;
      if ( v265 <= v262 )
        continue;
      break;
    }
LABEL_131:
    if ( --v247 != -1 )
      continue;
    break;
  }
LABEL_132:
  if ( *budget < 0 )
    return;
  if ( v246 != 0 )
    goto LABEL_61;
  block = v63;
  numQSorted += v235;
  if ( *budget >= 0 )
  {
    v57 = *(v240 - 1);
    goto LABEL_136;
  }
}


// BZ2_blockSort  (line 1078, @0x00000000032539b0, libserver.so)  // inlines: fprintf
// calls: mainSort, BZ2_bz__AssertH__fail, __fprintf_chk, fwrite, fallbackSort
// callers: BZ2_compressBlock
// strings: "      %d work, %d block, ratio %5.2f\n", "    too repetitive; using fallback sorting algorithm\n"
void __fastcall BZ2_blockSort(EState *s)
{
  int nblock; // r12d
  UInt32 *ptr; // r13
  UChar *block; // rsi
  UInt32 *ftab; // r14
  int verbosity; // r15d
  Int32 workFactor; // edi
  int v8; // eax
  Int32 v9; // r10d
  Int32 v10; // ecx
  UInt32 *v11; // rdx
  Int32 v12; // eax
  Int32 budgetInit; // [rsp+Ch] [rbp-44h]
  Int32 budget[13]; // [rsp+1Ch] [rbp-34h] BYREF

  nblock = s->nblock;
  ptr = s->ptr;
  block = s->block;
  ftab = s->ftab;
  verbosity = s->verbosity;
  workFactor = s->workFactor;
  if ( nblock <= 9999 )
    goto LABEL_18;
  v8 = nblock + 34;
  if ( ((nblock + 34) & 1) != 0 )
    v8 = nblock + 35;
  v9 = 0;
  if ( workFactor > 0 )
  {
    if ( workFactor <= 100 )
      v9 = nblock * ((workFactor - 1) / 3);
    else
      v9 = 33 * nblock;
  }
  budget[0] = v9;
  budgetInit = v9;
  mainSort(ptr, block, &block[v8], ftab, nblock, verbosity, budget);
  if ( verbosity > 2 )
  {
    __fprintf_chk(
      stderr,
      &loc_0 + 1,
      "      %d work, %d block, ratio %5.2f\n",
      budgetInit - budget[0],
      nblock,
      ((budgetInit - budget[0]) / nblock));
    if ( budget[0] >= 0 )
      goto LABEL_9;
    goto LABEL_16;
  }
  if ( budget[0] < 0 )
  {
LABEL_16:
    if ( verbosity > 1 )
      fwrite("    too repetitive; using fallback sorting algorithm\n", 1u, 0x35u, stderr);
LABEL_18:
    fallbackSort(s->arr1, s->arr2, ftab, nblock, verbosity);
  }
LABEL_9:
  v10 = s->nblock;
  s->origPtr = -1;
  if ( v10 <= 0 )
    goto LABEL_14;
  v11 = ptr + 1;
  v12 = 0;
  if ( *ptr == 0 )
  {
    s->origPtr = 0;
    return;
  }
  do
  {
    if ( ++v12 == v10 )
      goto LABEL_14;
    ++v11;
  }
  while ( *(v11 - 1) != 0 );
  s->origPtr = v12;
  if ( v12 == -1 )
LABEL_14:
    BZ2_bz__AssertH__fail(1003);
}


