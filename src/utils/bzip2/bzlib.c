
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// BZ2_bz__AssertH__fail  (line 86, @0x0000000003248200, libserver.so)  // inlines: fprintf
// calls: __fprintf_chk, exit, fwrite
// callers: BZ2_compressBlock, BZ2_decompress, BZ2_hbMakeCodeLengths, fallbackSort, mainSort, BZ2_blockSort
// strings: "1.0.2, 30-Dec-2001", "\n\nbzip2/libbzip2: internal error number %d.\nThis is a bug in bzip2/libbzip2, %s.\nPlea, "\n*** A special note about internal error number 1007 ***\n\nExperience suggests that a c
void __fastcall __noreturn BZ2_bz__AssertH__fail(int errcode)
{
  __fprintf_chk(
    stderr,
    1,
    "\n"
    "\n"
    "bzip2/libbzip2: internal error number %d.\n"
    "This is a bug in bzip2/libbzip2, %s.\n"
    "Please report it to me at: jseward@acm.org.  If this happened\n"
    "when you were using some program which uses libbzip2 as a\n"
    "component, you should also report this bug to the author(s)\n"
    "of that program.  Please make an effort to report this bug;\n"
    "timely and accurate bug reports eventually lead to higher\n"
    "quality software.  Thanks.  Julian Seward, 30 December 2001.\n"
    "\n",
    errcode,
    "1.0.2, 30-Dec-2001");
  if ( errcode == 1007 )
    fwrite(
      "\n"
      "*** A special note about internal error number 1007 ***\n"
      "\n"
      "Experience suggests that a common cause of i.e. 1007\n"
      "is unreliable memory or other hardware.  The 1007 assertion\n"
      "just happens to cross-check the results of huge numbers of\n"
      "memory reads/writes, and so acts (unintendedly) as a stress\n"
      "test of your memory system.\n"
      "\n"
      "I suggest the following: try compressing the file again,\n"
      "possibly monitoring progress in detail with the -vv flag.\n"
      "\n"
      "* If the error cannot be reproduced, and/or happens at different\n"
      "  points in compression, you may have a flaky memory system.\n"
      "  Try a memory-test program.  I have used Memtest86\n"
      "  (www.memtest86.com).  At the time of writing it is free (GPLd).\n"
      "  Memtest86 tests memory much more thorougly than your BIOSs\n"
      "  power-on test, and may find failures that the BIOS doesn't.\n"
      "\n"
      "* If the error can be repeatably reproduced, this is a bug in\n"
      "  bzip2, and I would very much like to hear about it.  Please\n"
      "  let me know, and, ideally, save a copy of the file causing the\n"
      "  problem -- without which I will be unable to investigate it.\n"
      "\n",
      1u,
      0x420u,
      stderr);
  exit(3);
}


// default_bzalloc  (line 147, @0x0000000003247de0, libserver.so)
// calls: malloc
void *__fastcall default_bzalloc(void *opaque, Int32 items, Int32 size)
{
  return malloc(size * items);
}


// default_bzfree  (line 154, @0x0000000003247dc0, libserver.so)
// calls: free
void __fastcall default_bzfree(void *opaque, void *addr)
{
  if ( addr != 0 )
    free(addr);
}


// BZ2_bzCompressInit  (line 193, @0x0000000003248260, libserver.so)  // inlines: init_RL, prepare_new_block
// callers: BZ2_bzWriteOpen, BZ2_bzBuffToBuffCompress
// globals: default_bzfree(void *,void *), default_bzalloc(void *,int,int)
int __fastcall BZ2_bzCompressInit(bz_stream *strm, int blockSize100k, int verbosity, int workFactor)
{
  int v6; // r15d
  void *(*bzalloc)(void *, int, int); // rax
  bz_stream **v8; // rax
  bz_stream **v9; // rbx
  bz_stream *v10; // rax
  bz_stream *v11; // rsi
  bz_stream *v12; // rdx
  __int64 v13; // rdx

  if ( strm == 0 )
    return -2;
  if ( (blockSize100k - 1) > 8 )
    return -2;
  v6 = workFactor;
  if ( workFactor > 0xFA )
    return -2;
  if ( workFactor == 0 )
    v6 = 30;
  bzalloc = strm->bzalloc;
  if ( bzalloc == 0 )
  {
    bzalloc = default_bzalloc;
    strm->bzalloc = default_bzalloc;
  }
  if ( strm->bzfree == 0 )
    strm->bzfree = default_bzfree;
  v8 = bzalloc(strm->opaque, 55768, 1);
  v9 = v8;
  if ( v8 == 0 )
    return -3;
  *v8 = strm;
  v8[3] = 0;
  v8[4] = 0;
  v8[5] = 0;
  v8[3] = strm->bzalloc(strm->opaque, (400000 * blockSize100k), 1);
  v9[4] = strm->bzalloc(strm->opaque, (400000 * blockSize100k + 136), 1);
  v10 = strm->bzalloc(strm->opaque, 262148, 1);
  v11 = v9[3];
  v9[5] = v10;
  if ( v11 != 0 )
  {
    v12 = v9[4];
    if ( v12 != 0 && v10 != 0 )
    {
      v9[8] = v12;
      *(v9 + 165) = 0;
      v13 = 0;
      *(v9 + 3) = 2;
      *(v9 + 2) = 2;
      *(v9 + 163) = 0;
      *(v9 + 166) = blockSize100k;
      *(v9 + 28) = 100000 * blockSize100k - 19;
      *(v9 + 164) = verbosity;
      *(v9 + 22) = v6;
      v9[9] = v11;
      v9[10] = 0;
      v9[7] = v11;
      strm->state = v9;
      strm->total_in_lo32 = 0;
      strm->total_in_hi32 = 0;
      strm->total_out_lo32 = 0;
      strm->total_out_hi32 = 0;
      *(v9 + 23) = 256;
      *(v9 + 24) = 0;
      *(v9 + 27) = 0;
      *(v9 + 29) = 0;
      *(v9 + 30) = 0;
      *(v9 + 162) = -1;
      do
        *(v9 + v13++ + 128) = 0;
      while ( v13 != 256 );
      ++*(v9 + 165);
      return 0;
    }
    (strm->bzfree)(strm->opaque);
  }
  if ( v9[4] != 0 )
    (strm->bzfree)(strm->opaque);
  if ( v9[5] != 0 )
    (strm->bzfree)(strm->opaque);
  strm->bzfree(strm->opaque, v9);
  return -3;
}


// add_pair_to_block  (line 261, @0x0000000003247c80, libserver.so)
// callers: handle_compress
void __fastcall add_pair_to_block(EState *s)
{
  Int32 state_in_len; // esi
  UInt32 state_in_ch; // r10d
  UInt32 blockCRC; // eax
  int i; // ecx
  UChar *v5; // rdx
  Int32 v6; // eax
  UChar *v7; // rdx
  Int32 v8; // eax
  UChar *v9; // rdx
  Int32 v10; // eax
  char v11; // si
  UChar *v12; // rdx
  Int32 v13; // eax
  __int64 nblock; // rax
  UChar *block; // rdx
  Int32 v16; // eax

  state_in_len = s->state_in_len;
  state_in_ch = s->state_in_ch;
  if ( state_in_len > 0 )
  {
    blockCRC = s->blockCRC;
    for ( i = 0; i != state_in_len; ++i )
    {
      blockCRC = BZ2_crc32Table[state_in_ch ^ HIBYTE(blockCRC)] ^ (blockCRC << 8);
      s->blockCRC = blockCRC;
    }
  }
  s->inUse[state_in_ch] = 1;
  switch ( state_in_len )
  {
    case 2:
      nblock = s->nblock;
      goto LABEL_11;
    case 3:
      s->block[s->nblock] = state_in_ch;
      LODWORD(nblock) = s->nblock + 1;
      s->nblock = nblock;
      nblock = nblock;
LABEL_11:
      s->block[nblock] = state_in_ch;
      block = s->block;
      v16 = s->nblock + 1;
      s->nblock = v16;
      block[v16] = state_in_ch;
      ++s->nblock;
      return;
    case 1:
      s->block[s->nblock] = state_in_ch;
      break;
    default:
      s->inUse[state_in_len - 4] = 1;
      s->block[s->nblock] = state_in_ch;
      v5 = s->block;
      v6 = s->nblock + 1;
      s->nblock = v6;
      v5[v6] = state_in_ch;
      v7 = s->block;
      v8 = s->nblock + 1;
      s->nblock = v8;
      v7[v8] = state_in_ch;
      v9 = s->block;
      v10 = s->nblock + 1;
      s->nblock = v10;
      v9[v10] = state_in_ch;
      v11 = s->state_in_len;
      v12 = s->block;
      v13 = s->nblock + 1;
      s->nblock = v13;
      v12[v13] = v11 - 4;
      break;
  }
  ++s->nblock;
}


// handle_compress  (line 406, @0x0000000003247df0, libserver.so)  // inlines: copy_input_until_stop, copy_output_until_stop, flush_RL, init_RL, isempty_RL, prepare_new_block
// calls: add_pair_to_block, BZ2_compressBlock
// callers: BZ2_bzCompress
bool __fastcall handle_compress(EState *strm)
{
  unsigned __int8 v1; // r13
  int v2; // r12d
  unsigned int state; // eax
  int v5; // ecx
  char *v6; // rax
  __int64 state_out_pos; // rdx
  unsigned int mode; // edx
  __int64 v9; // rax
  __int64 nblock; // rcx
  char *v11; // rax
  bool v12; // cc
  unsigned int v13; // edx
  unsigned int v14; // r14d
  unsigned int state_in_ch; // edx
  unsigned int state_in_len; // edx
  char i; // dl
  Bool v18; // zf
  char *v20; // rax
  unsigned int v21; // r14d
  unsigned int v22; // edx
  unsigned int v23; // edx

  v1 = 0;
  v2 = 0;
  state = strm->state;
  while ( 2 )
  {
    while ( 2 )
    {
      if ( state != 1 )
      {
        if ( state != 2 )
          continue;
        mode = strm->mode;
        nblock = strm->nblock;
        goto LABEL_15;
      }
      break;
    }
    while ( 2 )
    {
      while ( 1 )
      {
        v5 = 0;
LABEL_5:
        v6 = strm->strm;
        while ( *(v6 + 8) != 0 )
        {
          state_out_pos = strm->state_out_pos;
          if ( state_out_pos >= strm->numZ )
          {
            mode = strm->mode;
            v2 |= v5;
            if ( mode != 4 )
              goto LABEL_12;
            goto LABEL_43;
          }
          **(v6 + 3) = strm->zbits[state_out_pos];
          ++strm->state_out_pos;
          --strm->strm->avail_out;
          ++strm->strm->next_out;
          ++strm->strm->total_out_lo32;
          v6 = strm->strm;
          if ( strm->strm->total_out_lo32 == 0 )
          {
            ++*(v6 + 10);
            v5 = 1;
            goto LABEL_5;
          }
          v5 = 1;
        }
        v2 |= v5;
        if ( strm->state_out_pos < strm->numZ )
          return (v1 | v2) != 0;
        mode = strm->mode;
        if ( mode == 4 )
        {
LABEL_43:
          if ( strm->avail_in_expect == 0 && (strm->state_in_ch > 0xFF || strm->state_in_len <= 0) )
            return (v1 | v2) != 0;
        }
LABEL_12:
        strm->nblock = 0;
        v9 = 0;
        strm->numZ = 0;
        strm->state_out_pos = 0;
        strm->blockCRC = -1;
        do
          strm->inUse[v9++] = 0;
        while ( v9 != 256 );
        ++strm->blockNo;
        nblock = 0;
        strm->state = 2;
        if ( mode != 3 )
          break;
        if ( strm->avail_in_expect == 0 )
        {
          if ( strm->state_in_ch > 0xFF )
            return (v1 | v2) != 0;
          if ( strm->state_in_len <= 0 )
            return (v1 | v2) != 0;
        }
LABEL_16:
        if ( nblock < strm->nblockMAX )
        {
          v11 = strm->strm;
          if ( strm->strm->avail_in != 0 )
          {
            if ( strm->avail_in_expect == 0 )
              goto LABEL_36;
            while ( 1 )
            {
              v14 = **v11;
              state_in_ch = strm->state_in_ch;
              if ( v14 == state_in_ch )
              {
                state_in_len = strm->state_in_len;
                if ( state_in_len != 255 )
                {
                  strm->state_in_len = state_in_len + 1;
                  goto LABEL_23;
                }
              }
              else
              {
                if ( strm->state_in_len == 1 )
                {
                  strm->blockCRC = BZ2_crc32Table[(state_in_ch ^ HIBYTE(strm->blockCRC))] ^ (strm->blockCRC << 8);
                  strm->inUse[state_in_ch] = 1;
                  strm->block[nblock] = state_in_ch;
                  ++strm->nblock;
                  strm->state_in_ch = v14;
                  v11 = strm->strm;
                  goto LABEL_23;
                }
                if ( state_in_ch > 0xFF )
                  goto LABEL_22;
              }
              add_pair_to_block(strm);
              v11 = strm->strm;
LABEL_22:
              strm->state_in_ch = v14;
              strm->state_in_len = 1;
LABEL_23:
              ++*v11;
              --strm->strm->avail_in;
              if ( ++strm->strm->total_in_lo32 == 0 )
                ++strm->strm->total_in_hi32;
              nblock = strm->nblock;
              v12 = nblock < strm->nblockMAX;
              v13 = strm->avail_in_expect - 1;
              strm->avail_in_expect = v13;
              if ( v12 )
              {
                v11 = strm->strm;
                if ( strm->strm->avail_in != 0 && v13 != 0 )
                  continue;
              }
              i = 1;
              goto LABEL_34;
            }
          }
        }
LABEL_35:
        if ( strm->avail_in_expect != 0 )
          goto LABEL_39;
LABEL_36:
        if ( strm->state_in_ch <= 0xFF )
          add_pair_to_block(strm);
        v18 = strm->mode == 4;
        strm->state_in_ch = 256;
        strm->state_in_len = 0;
        BZ2_compressBlock(strm, v18);
        strm->state = 1;
      }
LABEL_15:
      if ( mode != 2 )
        goto LABEL_16;
      for ( i = 0; strm->nblockMAX > nblock; i = 1 )
      {
        v20 = strm->strm;
        if ( strm->strm->avail_in == 0 )
          break;
        v21 = **v20;
        v22 = strm->state_in_ch;
        if ( v21 == v22 )
        {
          v23 = strm->state_in_len;
          if ( v23 == 255 )
            goto LABEL_61;
          strm->state_in_len = v23 + 1;
        }
        else
        {
          if ( strm->state_in_len != 1 )
          {
            if ( v22 <= 0xFF )
            {
LABEL_61:
              add_pair_to_block(strm);
              v20 = strm->strm;
            }
            strm->state_in_ch = v21;
            strm->state_in_len = 1;
            goto LABEL_52;
          }
          strm->blockCRC = BZ2_crc32Table[(v22 ^ HIBYTE(strm->blockCRC))] ^ (strm->blockCRC << 8);
          strm->inUse[v22] = 1;
          strm->block[nblock] = v22;
          ++strm->nblock;
          strm->state_in_ch = v21;
          v20 = strm->strm;
        }
LABEL_52:
        ++*v20;
        --strm->strm->avail_in;
        if ( ++strm->strm->total_in_lo32 == 0 )
          ++strm->strm->total_in_hi32;
        nblock = strm->nblock;
      }
LABEL_34:
      v1 |= i;
      if ( strm->mode != 2 )
        goto LABEL_35;
LABEL_39:
      if ( strm->nblock >= strm->nblockMAX )
      {
        BZ2_compressBlock(strm, 0);
        strm->state = 1;
        continue;
      }
      break;
    }
    if ( strm->strm->avail_in != 0 )
    {
      state = strm->state;
      continue;
    }
    return (v1 | v2) != 0;
  }
}


// BZ2_bzCompress  (line 452, @0x00000000032484e0, libserver.so)  // inlines: isempty_RL
// calls: handle_compress
// callers: BZ2_bzWrite, BZ2_bzWriteClose64, BZ2_bzBuffToBuffCompress
int __fastcall BZ2_bzCompress(bz_stream *strm, int action)
{
  void *state; // rbx
  bz_stream *v3; // rax
  int v4; // edx
  int result; // eax
  unsigned int v6; // edx
  unsigned int avail_in; // edx

  if ( strm == 0 )
    return -2;
  state = strm->state;
  if ( state == 0 )
    return -2;
  v3 = *state;
  if ( *state != strm )
    return -2;
  v4 = *(state + 2);
  if ( v4 == 2 )
  {
    switch ( action )
    {
      case 0:
        return !handle_compress(strm->state) ? -2 : 1;
      case 1:
        avail_in = v3->avail_in;
        *(state + 2) = 3;
        *(state + 4) = avail_in;
        goto LABEL_20;
      case 2:
        v6 = v3->avail_in;
        *(state + 2) = 4;
        *(state + 4) = v6;
LABEL_9:
        if ( *(state + 4) == v3->avail_in && handle_compress(v3->state) )
        {
          result = 3;
          if ( *(state + 4) == 0 && (*(state + 23) > 0xFFu || *(state + 24) <= 0) )
          {
            result = 3;
            if ( *(state + 30) >= *(state + 29) )
            {
              *(state + 2) = 1;
              LOBYTE(result) = 4;
            }
          }
          return result;
        }
        return -1;
      default:
        break;
    }
    return -2;
  }
  if ( v4 <= 2 )
  {
    result = -1;
    if ( v4 == 1 )
      return result;
    return 0;
  }
  if ( v4 != 3 )
  {
    if ( v4 == 4 )
    {
      if ( action != 2 )
        return -1;
      goto LABEL_9;
    }
    return 0;
  }
  if ( action != 1 )
    return -1;
LABEL_20:
  if ( *(state + 4) != v3->avail_in )
    return -1;
  handle_compress(v3->state);
  result = 2;
  if ( *(state + 4) == 0 && (*(state + 23) > 0xFFu || *(state + 24) <= 0) )
  {
    result = 2;
    if ( *(state + 30) >= *(state + 29) )
    {
      *(state + 2) = 2;
      LOBYTE(result) = 1;
    }
  }
  return result;
}


// BZ2_bzCompressEnd  (line 513, @0x00000000032486a0, libserver.so)
// callers: BZ2_bzWriteClose64, BZ2_bzBuffToBuffCompress
int __fastcall BZ2_bzCompressEnd(bz_stream *strm)
{
  bz_stream **state; // r12
  bz_stream *v2; // rbx
  int result; // eax

  if ( strm == 0 )
    return -2;
  state = strm->state;
  if ( state == 0 )
    return -2;
  v2 = *state;
  result = -2;
  if ( *state == strm )
  {
    if ( state[3] != 0 )
      (v2->bzfree)(v2->opaque);
    if ( state[4] != 0 )
      (v2->bzfree)(v2->opaque);
    if ( state[5] != 0 )
      (v2->bzfree)(v2->opaque);
    v2->bzfree(v2->opaque, v2->state);
    v2->state = 0;
    return 0;
  }
  return result;
}


// BZ2_bzDecompressInit  (line 537, @0x0000000003248720, libserver.so)
// callers: BZ2_bzReadOpen, BZ2_bzBuffToBuffDecompress
// globals: default_bzalloc(void *,int,int), default_bzfree(void *,void *)
int __fastcall BZ2_bzDecompressInit(bz_stream *strm, int verbosity, int small)
{
  char v4; // r12
  int result; // eax
  void *(*bzalloc)(void *, int, int); // rax
  bz_stream **v8; // rax

  if ( strm == 0 )
    return -2;
  v4 = small;
  result = -2;
  if ( small <= 1 && verbosity <= 4 )
  {
    bzalloc = strm->bzalloc;
    if ( bzalloc != 0 )
    {
      if ( strm->bzfree != 0 )
        goto LABEL_6;
    }
    else
    {
      bzalloc = default_bzalloc;
      strm->bzalloc = default_bzalloc;
      if ( strm->bzfree != 0 )
        goto LABEL_6;
    }
    strm->bzfree = default_bzfree;
LABEL_6:
    v8 = bzalloc(strm->opaque, 64144, 1);
    if ( v8 != 0 )
    {
      *v8 = strm;
      strm->state = v8;
      *(v8 + 2) = 10;
      *(v8 + 9) = 0;
      *(v8 + 8) = 0;
      *(v8 + 797) = 0;
      strm->total_in_lo32 = 0;
      strm->total_in_hi32 = 0;
      strm->total_out_lo32 = 0;
      strm->total_out_hi32 = 0;
      *(v8 + 44) = v4;
      v8[396] = 0;
      v8[395] = 0;
      v8[394] = 0;
      *(v8 + 12) = 0;
      *(v8 + 13) = verbosity;
      return 0;
    }
    else
    {
      return -3;
    }
  }
  return result;
}


// BZ2_bzDecompress  (line 817, @0x0000000003248850, libserver.so)  // inlines: BZ2_indexIntoF, fprintf, unRLE_obuf_to_output_FAST, unRLE_obuf_to_output_SMALL
// calls: fputc, BZ2_decompress, __fprintf_chk
// callers: BZ2_bzRead, BZ2_bzBuffToBuffDecompress
// strings: " {0x%x, 0x%x}", "\n    combined CRCs: stored = 0x%x, computed = 0x%x"
int __fastcall BZ2_bzDecompress(bz_stream *strm)
{
  int result; // eax
  DState *state; // rbx
  int v3; // eax
  Int32 v4; // ecx
  Int32 v5; // r11d
  Int32 v6; // r12d
  int state_out_len; // ecx
  unsigned int total_out_lo32; // r9d
  bz_stream *v9; // rdi
  int verbosity; // eax
  int v11; // r8d
  UInt32 v12; // edx
  UInt32 calculatedCombinedCRC; // eax
  bz_stream *v14; // r9
  unsigned int v15; // eax
  Int32 nblock_used; // r10d
  int v17; // r11d
  Int32 k0; // r12d
  int v19; // ecx
  __int64 tPos; // r8
  int *cftab; // rdi
  int v22; // edx
  UChar *ll4; // r14
  UInt16 *ll16; // r13
  int v25; // eax
  int v26; // ecx
  int rNToGo; // r8d
  __int64 v28; // rax
  Int32 rTPos; // ecx
  __int64 v30; // r8
  Int32 v31; // ecx
  int v32; // r8d
  Int32 v33; // ecx
  int v34; // ecx
  int v35; // esi
  __int64 v36; // rdx
  unsigned int v37; // eax
  Int32 v38; // r10d
  int v39; // r11d
  Int32 v40; // r12d
  int v41; // ecx
  __int64 v42; // r8
  int *v43; // rdi
  int v44; // edx
  UChar *v45; // r14
  UInt16 *v46; // r13
  __int64 v47; // rax
  bz_stream *v48; // rax
  unsigned int v49; // eax
  Int32 v50; // ecx
  int v51; // esi
  Int32 v52; // r8d
  __int64 v53; // rdx
  UInt32 *tt; // r10
  UInt32 v55; // r9d
  int v56; // edx
  __int64 v57; // r11
  Int32 v58; // edi
  __int64 v59; // r12
  Int32 v60; // edi
  int v61; // edx
  Int32 v62; // edi
  int v63; // ecx
  int v64; // esi
  __int64 v65; // rdx
  Int32 v66; // eax
  __int64 v67; // r8
  Int32 v68; // eax
  int v69; // r8d
  Int32 v70; // eax
  UInt32 v71; // r9d
  __int64 v72; // r11
  Int32 v73; // edi
  __int64 v74; // r12
  Int32 v75; // edi
  int v76; // edx
  UInt32 v77; // r9d
  __int64 v78; // r11
  Int32 v79; // edi
  __int64 v80; // r12
  Int32 v81; // edi
  int v82; // edx
  Int32 v83; // esi
  unsigned int calculatedBlockCRC; // eax
  UChar state_out_ch; // r8
  unsigned int avail_out; // r14d
  UInt32 *v87; // r15
  __int64 v88; // r13
  char *next_out; // rsi
  unsigned int v90; // edx
  int v91; // r10d
  UInt32 v92; // r13d
  UInt32 v93; // edi
  Int32 v94; // r9d
  int v95; // ecx
  int v96; // esi
  __int64 v97; // rax
  Int32 v98; // edx
  __int64 v99; // r8
  Int32 v100; // edx
  int v101; // r8d
  Int32 v102; // edx
  int v103; // ecx
  __int64 v104; // rax
  int v105; // ecx
  int v106; // esi
  int v107; // edx
  int v108; // ecx
  __int64 v109; // r8
  int v110; // edx
  unsigned int v111; // eax
  int v112; // ecx
  int v113; // esi
  __int64 v114; // r11
  Int32 v115; // eax
  __int64 v116; // rcx
  Int32 v117; // eax
  int v118; // r8d
  int v119; // ecx
  int v120; // edx
  Int32 v121; // eax
  __int64 v122; // rsi
  Int32 v123; // eax
  Int32 v124; // r8d
  UInt32 v125; // r8d
  __int64 v126; // rdi
  Int32 v127; // esi
  __int64 v128; // r9
  Int32 v129; // esi
  int v130; // edx
  UInt32 v131; // edi
  int v132; // esi
  Int32 v133; // edi
  __int64 v134; // r8
  Int32 v135; // edi
  Int32 v136; // edx
  UInt32 v137; // r10d
  UInt32 v138; // edi
  UInt32 v139; // r13d
  int v140; // [rsp-3Ch] [rbp-3Ch]

  if ( strm == 0 )
    return -2;
  result = -2;
  state = strm->state;
  if ( state != 0 && state->strm == strm )
  {
    v3 = state->state;
    if ( v3 == 1 )
      return -1;
    do
    {
      if ( v3 == 2 )
        goto LABEL_26;
    }
    while ( v3 <= 9 );
LABEL_24:
    result = BZ2_decompress(state);
    if ( result == 4 )
    {
      if ( state->verbosity > 2 )
        __fprintf_chk(
          stderr,
          1,
          "\n    combined CRCs: stored = 0x%x, computed = 0x%x",
          state->storedCombinedCRC,
          state->calculatedCombinedCRC);
      if ( state->calculatedCombinedCRC == state->storedCombinedCRC )
        return 4;
      else
        return -4;
    }
    if ( state->state != 2 )
      return result;
LABEL_26:
    if ( state->smallDecompress )
    {
      v14 = state->strm;
      if ( state->blockRandomised )
      {
        while ( v14->avail_out != 0 )
        {
          if ( state->state_out_len != 0 )
          {
            while ( 1 )
            {
              *v14->next_out = state->state_out_ch;
              v15 = BZ2_crc32Table[state->state_out_ch ^ HIBYTE(state->calculatedBlockCRC)]
                  ^ (state->calculatedBlockCRC << 8);
              --state->state_out_len;
              state->calculatedBlockCRC = v15;
              ++state->strm->next_out;
              --state->strm->avail_out;
              ++state->strm->total_out_lo32;
              v14 = state->strm;
              if ( state->strm->total_out_lo32 != 0 )
                break;
              ++v14->total_out_hi32;
              v14 = state->strm;
              if ( state->strm->avail_out == 0 )
                goto LABEL_16;
              if ( state->state_out_len == 0 )
                goto LABEL_33;
            }
          }
          else
          {
LABEL_33:
            nblock_used = state->nblock_used;
            v17 = state->save_nblock + 1;
            if ( nblock_used == v17 )
              goto LABEL_18;
            k0 = state->k0;
            state->state_out_len = 1;
            v19 = 256;
            tPos = state->tPos;
            cftab = state->cftab;
            v22 = 0;
            state->state_out_ch = k0;
            do
            {
              if ( tPos >= cftab[(v22 + v19) >> 1] )
                v22 = (v22 + v19) >> 1;
              else
                v19 = (v22 + v19) >> 1;
            }
            while ( v19 - v22 != 1 );
            ll4 = state->ll4;
            ll16 = state->ll16;
            v25 = ll4[tPos >> 1] >> ((4 * tPos) & 4);
            v26 = ll16[tPos];
            rNToGo = state->rNToGo;
            v28 = v26 | ((v25 & 0xF) << 16);
            state->tPos = v28;
            if ( rNToGo == 0 )
            {
              rTPos = state->rTPos;
              v30 = rTPos;
              v31 = rTPos + 1;
              rNToGo = BZ2_rNums[v30];
              state->rNToGo = rNToGo;
              if ( v31 == 512 )
                state->rTPos = 0;
              else
                state->rTPos = v31;
            }
            v32 = rNToGo - 1;
            state->rNToGo = v32;
            state->nblock_used = nblock_used + 1;
            if ( v17 != nblock_used + 1 )
            {
              v33 = (v22 ^ (v32 == 1));
              if ( k0 == v33 )
              {
                state->state_out_len = 2;
                v63 = 256;
                v64 = 0;
                do
                {
                  if ( v28 >= cftab[(v64 + v63) >> 1] )
                    v64 = (v64 + v63) >> 1;
                  else
                    v63 = (v64 + v63) >> 1;
                }
                while ( v63 - v64 != 1 );
                v65 = ll16[v28] | (((ll4[v28 >> 1] >> ((4 * v28) & 4)) & 0xFu) << 16);
                state->tPos = v65;
                if ( v32 == 0 )
                {
                  v66 = state->rTPos;
                  v67 = v66;
                  v68 = v66 + 1;
                  v32 = BZ2_rNums[v67];
                  state->rNToGo = v32;
                  if ( v68 == 512 )
                    state->rTPos = 0;
                  else
                    state->rTPos = v68;
                }
                v69 = v32 - 1;
                state->rNToGo = v69;
                state->nblock_used = nblock_used + 2;
                if ( v17 != nblock_used + 2 )
                {
                  v70 = (v64 ^ (v69 == 1));
                  if ( k0 == v70 )
                  {
                    state->state_out_len = 3;
                    v95 = 256;
                    v96 = 0;
                    do
                    {
                      if ( v65 >= cftab[(v96 + v95) >> 1] )
                        v96 = (v96 + v95) >> 1;
                      else
                        v95 = (v96 + v95) >> 1;
                    }
                    while ( v95 - v96 != 1 );
                    v97 = ll16[v65] | (((ll4[v65 >> 1] >> ((4 * v65) & 4)) & 0xFu) << 16);
                    state->tPos = v97;
                    if ( v69 == 0 )
                    {
                      v98 = state->rTPos;
                      v99 = v98;
                      v100 = v98 + 1;
                      v69 = BZ2_rNums[v99];
                      state->rNToGo = v69;
                      if ( v100 == 512 )
                        state->rTPos = 0;
                      else
                        state->rTPos = v100;
                    }
                    v101 = v69 - 1;
                    state->rNToGo = v101;
                    state->nblock_used = nblock_used + 3;
                    if ( v17 != nblock_used + 3 )
                    {
                      v102 = (v96 ^ (v101 == 1));
                      if ( k0 == v102 )
                      {
                        v112 = 256;
                        v113 = 0;
                        do
                        {
                          if ( v97 >= cftab[(v113 + v112) >> 1] )
                            v113 = (v113 + v112) >> 1;
                          else
                            v112 = (v113 + v112) >> 1;
                        }
                        while ( v112 - v113 != 1 );
                        v114 = ll16[v97] | (((ll4[v97 >> 1] >> ((4 * v97) & 4)) & 0xFu) << 16);
                        state->tPos = v114;
                        if ( v101 == 0 )
                        {
                          v115 = state->rTPos;
                          v116 = v115;
                          v117 = v115 + 1;
                          v101 = BZ2_rNums[v116];
                          state->rNToGo = v101;
                          if ( v117 == 512 )
                            state->rTPos = 0;
                          else
                            state->rTPos = v117;
                        }
                        v118 = v101 - 1;
                        v119 = 256;
                        state->nblock_used = nblock_used + 4;
                        state->rNToGo = v118;
                        v120 = 0;
                        state->state_out_len = (v113 ^ (v118 == 1)) + 4;
                        do
                        {
                          if ( v114 >= cftab[(v120 + v119) >> 1] )
                            v120 = (v120 + v119) >> 1;
                          else
                            v119 = (v120 + v119) >> 1;
                        }
                        while ( v119 - v120 != 1 );
                        state->k0 = v120;
                        state->tPos = ll16[v114] | (((ll4[v114 >> 1] >> ((4 * v114) & 4)) & 0xF) << 16);
                        if ( v118 == 0 )
                        {
                          v121 = state->rTPos;
                          v122 = v121;
                          v123 = v121 + 1;
                          v118 = BZ2_rNums[v122];
                          state->rNToGo = v118;
                          if ( v123 == 512 )
                            state->rTPos = 0;
                          else
                            state->rTPos = v123;
                        }
                        v124 = v118 - 1;
                        state->rNToGo = v124;
                        state->nblock_used = nblock_used + 5;
                        state->k0 = v120 ^ (v124 == 1);
                      }
                      else
                      {
                        state->k0 = v102;
                      }
                    }
                  }
                  else
                  {
                    state->k0 = v70;
                  }
                }
              }
              else
              {
                state->k0 = v33;
              }
            }
          }
        }
        goto LABEL_16;
      }
      while ( 1 )
      {
        do
        {
          while ( 1 )
          {
            do
            {
              while ( 1 )
              {
LABEL_53:
                if ( v14->avail_out == 0 )
                  goto LABEL_16;
                if ( state->state_out_len == 0 )
                  break;
                while ( 1 )
                {
                  *v14->next_out = state->state_out_ch;
                  v37 = BZ2_crc32Table[state->state_out_ch ^ HIBYTE(state->calculatedBlockCRC)]
                      ^ (state->calculatedBlockCRC << 8);
                  --state->state_out_len;
                  state->calculatedBlockCRC = v37;
                  ++state->strm->next_out;
                  --state->strm->avail_out;
                  ++state->strm->total_out_lo32;
                  v14 = state->strm;
                  if ( state->strm->total_out_lo32 != 0 )
                    break;
                  ++v14->total_out_hi32;
                  v14 = state->strm;
                  if ( state->strm->avail_out == 0 )
                    goto LABEL_16;
                  if ( state->state_out_len == 0 )
                    goto LABEL_58;
                }
              }
LABEL_58:
              v38 = state->nblock_used;
              v39 = state->save_nblock + 1;
              if ( v38 == v39 )
                goto LABEL_18;
              v40 = state->k0;
              state->state_out_len = 1;
              v41 = 256;
              v42 = state->tPos;
              v43 = state->cftab;
              v44 = 0;
              state->state_out_ch = v40;
              do
              {
                if ( v42 >= v43[(v44 + v41) >> 1] )
                  v44 = (v44 + v41) >> 1;
                else
                  v41 = (v44 + v41) >> 1;
              }
              while ( v41 - v44 != 1 );
              v45 = state->ll4;
              v46 = state->ll16;
              v47 = v46[v42] | (((v45[v42 >> 1] >> ((4 * v42) & 4)) & 0xFu) << 16);
              state->tPos = v47;
              state->nblock_used = v38 + 1;
            }
            while ( v39 == v38 + 1 );
            if ( v40 == v44 )
              break;
            state->k0 = v44;
          }
          state->state_out_len = 2;
          v34 = 256;
          v35 = 0;
          do
          {
            if ( v47 >= v43[(v35 + v34) >> 1] )
              v35 = (v35 + v34) >> 1;
            else
              v34 = (v35 + v34) >> 1;
          }
          while ( v34 - v35 != 1 );
          v36 = v46[v47] | (((v45[v47 >> 1] >> ((4 * v47) & 4)) & 0xFu) << 16);
          state->tPos = v36;
          state->nblock_used = v38 + 2;
        }
        while ( v39 == v38 + 2 );
        v35 = v35;
        if ( v40 != v35 )
          break;
        state->state_out_len = 3;
        v103 = 256;
        v35 = 0;
        do
        {
          if ( v36 >= v43[(v35 + v103) >> 1] )
            v35 = (v35 + v103) >> 1;
          else
            v103 = (v35 + v103) >> 1;
        }
        while ( v103 - v35 != 1 );
        v104 = v46[v36] | (((v45[v36 >> 1] >> ((4 * v36) & 4)) & 0xFu) << 16);
        state->tPos = v104;
        state->nblock_used = v38 + 3;
        if ( v39 != v38 + 3 )
        {
          v35 = v35;
          if ( v40 != v35 )
            break;
          v105 = 256;
          v106 = 0;
          do
          {
            if ( v104 >= v43[(v106 + v105) >> 1] )
              v106 = (v106 + v105) >> 1;
            else
              v105 = (v106 + v105) >> 1;
          }
          while ( v105 - v106 != 1 );
          v107 = 0;
          v108 = 256;
          v109 = v46[v104] | (((v45[v104 >> 1] >> ((4 * v104) & 4)) & 0xFu) << 16);
          state->tPos = v109;
          state->nblock_used = v38 + 4;
          state->state_out_len = v106 + 4;
          do
          {
            if ( v109 >= v43[(v107 + v108) >> 1] )
              v107 = (v107 + v108) >> 1;
            else
              v108 = (v107 + v108) >> 1;
          }
          while ( v108 - v107 != 1 );
          state->k0 = v107;
          v110 = v46[v109];
          v111 = v45[v109 >> 1];
          state->nblock_used = v38 + 5;
          state->tPos = v110 | (((v111 >> ((4 * v109) & 4)) & 0xF) << 16);
        }
      }
      state->k0 = v35;
      goto LABEL_53;
    }
    if ( state->blockRandomised )
    {
      v48 = state->strm;
      while ( 1 )
      {
        while ( 1 )
        {
          do
          {
            while ( 1 )
            {
              if ( v48->avail_out == 0 )
                goto LABEL_16;
              if ( state->state_out_len == 0 )
                break;
              while ( 1 )
              {
                *v48->next_out = state->state_out_ch;
                v49 = BZ2_crc32Table[state->state_out_ch ^ HIBYTE(state->calculatedBlockCRC)]
                    ^ (state->calculatedBlockCRC << 8);
                --state->state_out_len;
                state->calculatedBlockCRC = v49;
                ++state->strm->next_out;
                --state->strm->avail_out;
                ++state->strm->total_out_lo32;
                v48 = state->strm;
                if ( state->strm->total_out_lo32 != 0 )
                  break;
                ++v48->total_out_hi32;
                v48 = state->strm;
                if ( state->strm->avail_out == 0 )
                  goto LABEL_16;
                if ( state->state_out_len == 0 )
                  goto LABEL_74;
              }
            }
LABEL_74:
            v50 = state->nblock_used;
            v51 = state->save_nblock + 1;
            if ( v50 == v51 )
              goto LABEL_18;
            v52 = state->k0;
            state->state_out_len = 1;
            v53 = state->tPos;
            tt = state->tt;
            state->state_out_ch = v52;
            v55 = tt[v53];
            v56 = state->rNToGo;
            v57 = v55 >> 8;
            state->tPos = v57;
            if ( v56 == 0 )
            {
              v58 = state->rTPos;
              v59 = v58;
              v60 = v58 + 1;
              v56 = BZ2_rNums[v59];
              state->rNToGo = v56;
              if ( v60 == 512 )
                state->rTPos = 0;
              else
                state->rTPos = v60;
            }
            v61 = v56 - 1;
            state->rNToGo = v61;
            state->nblock_used = v50 + 1;
          }
          while ( v51 == v50 + 1 );
          v62 = (v55 ^ (v61 == 1));
          if ( v52 == v62 )
            break;
LABEL_80:
          state->k0 = v62;
        }
        state->state_out_len = 2;
        v71 = tt[v57];
        v72 = v71 >> 8;
        state->tPos = v72;
        if ( v61 == 0 )
        {
          v73 = state->rTPos;
          v74 = v73;
          v75 = v73 + 1;
          v61 = BZ2_rNums[v74];
          state->rNToGo = v61;
          if ( v75 == 512 )
            state->rTPos = 0;
          else
            state->rTPos = v75;
        }
        v76 = v61 - 1;
        state->rNToGo = v76;
        state->nblock_used = v50 + 2;
        if ( v51 != v50 + 2 )
        {
          v62 = (v71 ^ (v76 == 1));
          if ( v52 != v62 )
            goto LABEL_80;
          state->state_out_len = 3;
          v77 = tt[v72];
          v78 = v77 >> 8;
          state->tPos = v78;
          if ( v76 == 0 )
          {
            v79 = state->rTPos;
            v80 = v79;
            v81 = v79 + 1;
            v76 = BZ2_rNums[v80];
            state->rNToGo = v76;
            if ( v81 == 512 )
              state->rTPos = 0;
            else
              state->rTPos = v81;
          }
          v82 = v76 - 1;
          state->rNToGo = v82;
          state->nblock_used = v50 + 3;
          if ( v51 != v50 + 3 )
          {
            v83 = (v77 ^ (v82 == 1));
            if ( v52 == v83 )
            {
              v125 = tt[v78];
              v126 = v125 >> 8;
              state->tPos = v126;
              if ( v82 == 0 )
              {
                v127 = state->rTPos;
                v128 = v127;
                v129 = v127 + 1;
                v82 = BZ2_rNums[v128];
                state->rNToGo = v82;
                if ( v129 == 512 )
                  state->rTPos = 0;
                else
                  state->rTPos = v129;
              }
              v130 = v82 - 1;
              state->nblock_used = v50 + 4;
              state->rNToGo = v130;
              state->state_out_len = (v125 ^ (v130 == 1)) + 4;
              v131 = tt[v126];
              v132 = v131;
              state->k0 = v131;
              state->tPos = v131 >> 8;
              if ( v130 == 0 )
              {
                v133 = state->rTPos;
                v134 = v133;
                v135 = v133 + 1;
                v130 = BZ2_rNums[v134];
                state->rNToGo = v130;
                if ( v135 == 512 )
                  state->rTPos = 0;
                else
                  state->rTPos = v135;
              }
              v136 = v130 - 1;
              state->rNToGo = v136;
              state->nblock_used = v50 + 5;
              state->k0 = v132 ^ (v136 == 1);
            }
            else
            {
              state->k0 = v83;
            }
          }
        }
      }
    }
    calculatedBlockCRC = state->calculatedBlockCRC;
    state_out_ch = state->state_out_ch;
    avail_out = state->strm->avail_out;
    state_out_len = state->state_out_len;
    v6 = state->nblock_used;
    v140 = state->save_nblock + 1;
    v5 = state->k0;
    v87 = state->tt;
    v88 = state->tPos;
    next_out = state->strm->next_out;
    v90 = avail_out;
    while ( 1 )
    {
      if ( state_out_len > 0 )
      {
        if ( v90 == 0 )
          goto LABEL_13;
        v91 = state_out_ch;
        if ( state_out_len != 1 )
        {
          while ( 1 )
          {
            *next_out = state_out_ch;
            --state_out_len;
            ++next_out;
            --v90;
            calculatedBlockCRC = BZ2_crc32Table[state_out_ch ^ HIBYTE(calculatedBlockCRC)] ^ (calculatedBlockCRC << 8);
            if ( v90 == 0 )
              break;
            if ( state_out_len == 1 )
              goto LABEL_114;
          }
LABEL_13:
          total_out_lo32 = state->strm->total_out_lo32;
          state->strm->total_out_lo32 = total_out_lo32 + avail_out - v90;
          v9 = state->strm;
          if ( total_out_lo32 > state->strm->total_out_lo32 )
          {
            ++v9->total_out_hi32;
            v9 = state->strm;
          }
          state->calculatedBlockCRC = calculatedBlockCRC;
          state->state_out_ch = state_out_ch;
          state->state_out_len = state_out_len;
          state->nblock_used = v6;
          state->k0 = v5;
          state->tt = v87;
          state->tPos = v88;
          v9->next_out = next_out;
          state->strm->avail_out = v90;
LABEL_16:
          if ( state->nblock_used != state->save_nblock + 1 || state->state_out_len != 0 )
            return 0;
LABEL_18:
          verbosity = state->verbosity;
          v11 = ~state->calculatedBlockCRC;
          state->calculatedBlockCRC = v11;
          if ( verbosity > 2 )
          {
            __fprintf_chk(stderr, 1, " {0x%x, 0x%x}", state->storedBlockCRC, v11);
            verbosity = state->verbosity;
          }
          if ( verbosity > 1 )
            fputc(93, stderr);
          v12 = state->calculatedBlockCRC;
          if ( v12 != state->storedBlockCRC )
            return -4;
          calculatedCombinedCRC = state->calculatedCombinedCRC;
          state->state = 14;
          state->calculatedCombinedCRC = v12 ^ __ROR4__(calculatedCombinedCRC, 31);
          goto LABEL_24;
        }
        goto LABEL_114;
      }
      while ( 1 )
      {
        if ( v140 == v6 )
        {
          state_out_len = 0;
          goto LABEL_13;
        }
        state_out_ch = v5;
        v92 = v87[v88];
        v4 = v92;
        v88 = v92 >> 8;
        if ( v5 == v4 )
        {
          if ( v140 != v6 + 1 )
            break;
          v4 = v5;
        }
        if ( v90 == 0 )
        {
          v5 = v4;
          ++v6;
          state_out_len = 1;
          goto LABEL_13;
        }
        v91 = v5;
        ++v6;
        v5 = v4;
LABEL_114:
        *next_out++ = state_out_ch;
        --v90;
        calculatedBlockCRC = BZ2_crc32Table[v91 ^ HIBYTE(calculatedBlockCRC)] ^ (calculatedBlockCRC << 8);
      }
      v93 = v87[v88];
      v94 = v6 + 2;
      v88 = v93 >> 8;
      if ( v140 == v6 + 2 )
      {
        v93 = v5;
        state_out_len = 2;
      }
      else
      {
        v93 = v93;
        state_out_len = 2;
        if ( v5 == v93 )
        {
          v137 = v87[v88];
          v94 = v6 + 3;
          LOBYTE(state_out_len) = 3;
          v88 = v137 >> 8;
          if ( v140 != v6 + 3 )
          {
            v93 = v137;
            if ( v5 == v137 )
            {
              v138 = v87[v88];
              v94 = v6 + 5;
              v139 = v87[v138 >> 8];
              state_out_len = v138 + 4;
              v93 = v139;
              v88 = v139 >> 8;
            }
          }
        }
      }
      v5 = v93;
      v6 = v94;
    }
  }
  return result;
}


// BZ2_bzDecompressEnd  (line 869, @0x0000000003249680, libserver.so)
// callers: BZ2_bzReadClose, BZ2_bzBuffToBuffDecompress
int __fastcall BZ2_bzDecompressEnd(bz_stream *strm)
{
  bz_stream **state; // r12
  bz_stream *v2; // rbx
  int result; // eax

  if ( strm == 0 )
    return -2;
  state = strm->state;
  if ( state == 0 )
    return -2;
  v2 = *state;
  result = -2;
  if ( *state == strm )
  {
    if ( state[394] != 0 )
      (v2->bzfree)(v2->opaque);
    if ( state[395] != 0 )
      (v2->bzfree)(v2->opaque);
    if ( state[396] != 0 )
      (v2->bzfree)(v2->opaque);
    v2->bzfree(v2->opaque, v2->state);
    v2->state = 0;
    return 0;
  }
  return result;
}


// BZ2_bzWriteOpen  (line 923, @0x0000000003249710, libserver.so)
// calls: ferror, malloc, BZ2_bzCompressInit, free
// callers: bzopen_or_bzdopen
BZFILE *__fastcall BZ2_bzWriteOpen(int *bzerror, FILE *f, int blockSize100k, int verbosity, int workFactor)
{
  char *v9; // rax
  _DWORD *v10; // r14
  int v11; // r8d
  int v12; // eax

  if ( bzerror != 0 )
    *bzerror = 0;
  if ( f == 0 || (blockSize100k - 1) > 8 || workFactor > 0xFA || verbosity > 4 )
  {
    if ( bzerror != 0 )
      *bzerror = -2;
    return 0;
  }
  if ( ferror(f) != 0 )
  {
    if ( bzerror != 0 )
    {
      *bzerror = -6;
      return 0;
    }
    return 0;
  }
  v9 = malloc(0x13F0u);
  v10 = v9;
  v11 = workFactor;
  if ( v9 == 0 )
  {
    if ( bzerror != 0 )
      *bzerror = -3;
    return 0;
  }
  if ( bzerror != 0 )
    *bzerror = 0;
  *v9 = f;
  if ( workFactor == 0 )
    v11 = 30;
  *(v9 + 1274) = 0;
  v9[5100] = 0;
  *(v9 + 1252) = 0;
  v9[5012] = 1;
  *(v9 + 634) = 0;
  *(v9 + 635) = 0;
  *(v9 + 636) = 0;
  v12 = BZ2_bzCompressInit((v9 + 5016), blockSize100k, verbosity, v11);
  if ( v12 != 0 )
  {
    if ( bzerror != 0 )
      *bzerror = v12;
    v10[1274] = v12;
    free(v10);
    return 0;
  }
  v10[1256] = 0;
  *(v10 + 5100) = 1;
  return v10;
}


// BZ2_bzWrite  (line 971, @0x0000000003249890, libserver.so)
// calls: ferror, BZ2_bzCompress, fwrite
// callers: BZ2_bzwrite
void __fastcall BZ2_bzWrite(int *bzerror, BZFILE *b, void *buf, int len)
{
  int v6; // eax
  unsigned int v7; // eax

  if ( bzerror != 0 )
    *bzerror = 0;
  if ( b != 0 && (*(b + 1274) = 0, buf != 0) && len >= 0 )
  {
    if ( *(b + 5012) != 0 )
    {
      if ( ferror(*b) != 0 )
      {
LABEL_26:
        if ( bzerror != 0 )
          *bzerror = -6;
        *(b + 1274) = -6;
      }
      else if ( len != 0 )
      {
        *(b + 1256) = len;
        *(b + 627) = buf;
        while ( 1 )
        {
          *(b + 630) = b + 8;
          *(b + 1262) = 5000;
          v6 = BZ2_bzCompress((b + 5016), 0);
          if ( v6 != 1 )
            break;
          v7 = *(b + 1262);
          if ( v7 <= 0x1387 && (5000 - v7 != fwrite(b + 8, 1u, 5000 - v7, *b) || ferror(*b) != 0) )
            goto LABEL_26;
          if ( *(b + 1256) == 0 )
            goto LABEL_21;
        }
        if ( bzerror != 0 )
          *bzerror = v6;
        *(b + 1274) = v6;
      }
      else
      {
LABEL_21:
        if ( bzerror != 0 )
          *bzerror = 0;
        *(b + 1274) = 0;
      }
    }
    else
    {
      if ( bzerror != 0 )
        *bzerror = -1;
      *(b + 1274) = -1;
    }
  }
  else
  {
    if ( bzerror != 0 )
      *bzerror = -2;
    if ( b != 0 )
      *(b + 1274) = -2;
  }
}


// BZ2_bzWriteClose  (line 1016, @0x0000000003249ce0, libserver.so)
// calls: BZ2_bzWriteClose64
void __fastcall BZ2_bzWriteClose(
        int *bzerror,
        BZFILE *b,
        int abandon,
        unsigned int *nbytes_in,
        unsigned int *nbytes_out)
{
  BZ2_bzWriteClose64(bzerror, b, abandon, nbytes_in, 0, nbytes_out, 0);
}


// BZ2_bzWriteClose64  (line 1028, @0x0000000003249a40, libserver.so)
// calls: ferror, BZ2_bzCompress, fflush, BZ2_bzCompressEnd, free, fwrite
// callers: BZ2_bzWriteClose, BZ2_bzclose
void __fastcall BZ2_bzWriteClose64(
        int *bzerror,
        BZFILE *b,
        int abandon,
        unsigned int *nbytes_in_lo32,
        unsigned int *nbytes_in_hi32,
        unsigned int *nbytes_out_lo32,
        unsigned int *nbytes_out_hi32)
{
  int v11; // eax
  unsigned int *v12; // r9
  int v13; // eax
  int v14; // r8d
  unsigned int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int ret; // [rsp+10h] [rbp-50h]
  unsigned int *nbytes_out_lo32b; // [rsp+20h] [rbp-40h]
  unsigned int *na; // [rsp+28h] [rbp-38h]
  unsigned int *nb; // [rsp+28h] [rbp-38h]

  if ( b == 0 )
  {
    if ( bzerror != 0 )
      *bzerror = 0;
    return;
  }
  if ( *(b + 5012) == 0 )
  {
    if ( bzerror != 0 )
      *bzerror = -1;
    *(b + 1274) = -1;
    return;
  }
  v11 = ferror(*b);
  v12 = nbytes_out_lo32;
  if ( v11 != 0 )
    goto LABEL_37;
  if ( nbytes_in_lo32 != 0 )
    *nbytes_in_lo32 = 0;
  if ( nbytes_in_hi32 != 0 )
    *nbytes_in_hi32 = 0;
  if ( nbytes_out_lo32 != 0 )
    *nbytes_out_lo32 = 0;
  if ( nbytes_out_hi32 != 0 )
    *nbytes_out_hi32 = 0;
  if ( abandon != 0 )
    goto LABEL_24;
  if ( *(b + 1274) != 0 )
  {
LABEL_22:
    nb = v12;
    v16 = ferror(*b);
    v12 = nb;
    if ( v16 != 0 || (fflush(*b), v17 = ferror(*b), v12 = nb, v17 == 0) )
    {
LABEL_24:
      if ( nbytes_in_lo32 != 0 )
        *nbytes_in_lo32 = *(b + 1257);
      if ( nbytes_in_hi32 != 0 )
        *nbytes_in_hi32 = *(b + 1258);
      if ( v12 != 0 )
        *v12 = *(b + 1263);
      if ( nbytes_out_hi32 != 0 )
        *nbytes_out_hi32 = *(b + 1264);
      if ( bzerror != 0 )
        *bzerror = 0;
      *(b + 1274) = 0;
      BZ2_bzCompressEnd((b + 5016));
      free(b);
      return;
    }
LABEL_37:
    if ( bzerror != 0 )
      *bzerror = -6;
    *(b + 1274) = -6;
    return;
  }
  nbytes_out_lo32b = (b + 8);
  while ( 1 )
  {
    na = v12;
    *(b + 1262) = 5000;
    *(b + 630) = nbytes_out_lo32b;
    v13 = BZ2_bzCompress((b + 5016), 2);
    v12 = na;
    v14 = v13;
    if ( (v13 - 3) > 1 )
      break;
    v15 = *(b + 1262);
    if ( v15 <= 0x1387 )
    {
      ret = v14;
      if ( 5000 - v15 != fwrite(nbytes_out_lo32b, 1u, 5000 - v15, *b) )
        goto LABEL_37;
      v18 = ferror(*b);
      v14 = ret;
      v12 = na;
      if ( v18 != 0 )
        goto LABEL_37;
    }
    if ( v14 == 4 )
      goto LABEL_22;
  }
  if ( bzerror != 0 )
    *bzerror = v13;
  *(b + 1274) = v13;
}


// BZ2_bzReadOpen  (line 1094, @0x0000000003249d00, libserver.so)
// calls: ferror, malloc, BZ2_bzDecompressInit, free
// callers: bzopen_or_bzdopen
BZFILE *__fastcall BZ2_bzReadOpen(int *bzerror, FILE *f, int verbosity, int small, void *unused, int nUnused)
{
  char *v9; // rax
  char *v10; // r13
  char *v11; // r8
  int v12; // eax
  char v13; // dl
  int v14; // eax
  int v15; // eax

  if ( bzerror != 0 )
    *bzerror = 0;
  if ( f == 0 || small > 1 || verbosity > 4 || unused == 0 && nUnused != 0 || nUnused > 0x1388 && unused != 0 )
  {
    if ( bzerror != 0 )
      *bzerror = -2;
    return 0;
  }
  if ( ferror(f) != 0 )
  {
    if ( bzerror != 0 )
    {
      *bzerror = -6;
      return 0;
    }
    return 0;
  }
  v9 = malloc(0x13F0u);
  v10 = v9;
  v11 = unused;
  if ( v9 == 0 )
  {
    if ( bzerror != 0 )
      *bzerror = -3;
    return 0;
  }
  if ( bzerror != 0 )
    *bzerror = 0;
  v9[5100] = 0;
  *(v9 + 1274) = 0;
  *v9 = f;
  *(v9 + 1252) = 0;
  v9[5012] = 0;
  *(v9 + 634) = 0;
  *(v9 + 635) = 0;
  *(v9 + 636) = 0;
  if ( nUnused > 0 )
  {
    v12 = 0;
    do
    {
      v13 = *v11++;
      v10[v12 + 8] = v13;
      v12 = *(v10 + 1252) + 1;
      *(v10 + 1252) = v12;
    }
    while ( v11 != unused + (nUnused - 1) + 1 );
  }
  v14 = BZ2_bzDecompressInit((v10 + 5016), verbosity, small);
  if ( v14 != 0 )
  {
    if ( bzerror != 0 )
      *bzerror = v14;
    *(v10 + 1274) = v14;
    free(v10);
    return 0;
  }
  v15 = *(v10 + 1252);
  v10[5100] = 1;
  *(v10 + 1256) = v15;
  *(v10 + 627) = v10 + 8;
  return v10;
}


// BZ2_bzReadClose  (line 1150, @0x000000000324a130, libserver.so)
// calls: free, BZ2_bzDecompressEnd
// callers: BZ2_bzclose
void __fastcall BZ2_bzReadClose(int *bzerror, BZFILE *b)
{
  bool v2; // zf

  if ( bzerror != 0 )
  {
    *bzerror = 0;
    if ( b == 0 )
      return;
    v2 = *(b + 5012) == 0;
    *(b + 1274) = 0;
    if ( !v2 )
    {
      *bzerror = -1;
LABEL_5:
      *(b + 1274) = -1;
      return;
    }
  }
  else
  {
    if ( b == 0 )
      return;
    v2 = *(b + 5012) == 0;
    *(b + 1274) = 0;
    if ( !v2 )
      goto LABEL_5;
  }
  if ( *(b + 5100) != 0 )
  {
    BZ2_bzDecompressEnd((b + 5016));
    free(b);
  }
  else
  {
    free(b);
  }
}


// BZ2_bzRead  (line 1168, @0x000000000324a1c0, libserver.so)  // inlines: fread, myfeof
// calls: BZ2_bzDecompress, ferror, fgetc, ungetc, fread
// callers: BZ2_bzread
int __fastcall BZ2_bzRead(int *bzerror, BZFILE *b, void *buf, int len)
{
  int v7; // r14d
  char *v9; // r15
  int v10; // eax
  int v11; // eax
  int v12; // eax
  FILE *v13; // r14
  int v14; // eax
  FILE *n; // [rsp+0h] [rbp-40h]
  int na; // [rsp+0h] [rbp-40h]
  bz_stream *strm; // [rsp+8h] [rbp-38h]

  if ( bzerror != 0 )
    *bzerror = 0;
  if ( b == 0 || (*(b + 1274) = 0, buf == 0) || len < 0 )
  {
    if ( bzerror != 0 )
      *bzerror = -2;
    if ( b != 0 )
      *(b + 1274) = -2;
    return 0;
  }
  if ( *(b + 5012) != 0 )
  {
    if ( bzerror != 0 )
      *bzerror = -1;
    *(b + 1274) = -1;
    return 0;
  }
  if ( len == 0 )
  {
    if ( bzerror != 0 )
      *bzerror = 0;
    *(b + 1274) = 0;
    return 0;
  }
  *(b + 1262) = len;
  *(b + 630) = buf;
  v9 = b + 8;
  strm = (b + 5016);
  while ( 1 )
  {
    v7 = ferror(*b);
    if ( v7 != 0 )
    {
      if ( bzerror != 0 )
        *bzerror = -6;
      *(b + 1274) = -6;
      return 0;
    }
    if ( *(b + 1256) == 0 )
    {
      n = *b;
      v12 = fgetc(*b);
      if ( v12 != -1 )
      {
        ungetc(v12, n);
        na = fread(b + 8, 1u, 0x1388u, *b);
        if ( ferror(*b) != 0 )
        {
          if ( bzerror != 0 )
            *bzerror = -6;
          *(b + 1274) = -6;
          return v7;
        }
        *(b + 1252) = na;
        *(b + 1256) = na;
        *(b + 627) = v9;
      }
    }
    v10 = BZ2_bzDecompress(strm);
    if ( (v10 & 0xFFFFFFFB) != 0 )
    {
      if ( bzerror != 0 )
        *bzerror = v10;
      *(b + 1274) = v10;
      return v7;
    }
    if ( v10 != 0 )
    {
      if ( v10 == 4 )
      {
        if ( bzerror != 0 )
          *bzerror = 4;
        *(b + 1274) = 4;
        return len - *(b + 1262);
      }
      goto LABEL_25;
    }
    v13 = *b;
    v14 = fgetc(*b);
    if ( v14 != -1 )
    {
      ungetc(v14, v13);
      v11 = *(b + 1262);
      goto LABEL_26;
    }
    if ( *(b + 1256) == 0 )
      break;
LABEL_25:
    v11 = *(b + 1262);
LABEL_26:
    if ( v11 == 0 )
      goto LABEL_36;
  }
  if ( *(b + 1262) == 0 )
  {
LABEL_36:
    if ( bzerror != 0 )
      *bzerror = 0;
    *(b + 1274) = 0;
    return len;
  }
  if ( bzerror != 0 )
    *bzerror = -7;
  *(b + 1274) = -7;
  return 0;
}


// BZ2_bzReadGetUnused  (line 1228, @0x000000000324a470, libserver.so)
void __fastcall BZ2_bzReadGetUnused(int *bzerror, BZFILE *b, void **unused, int *nUnused)
{
  if ( b != 0 )
  {
    if ( *(b + 1274) == 4 )
    {
      if ( unused != 0 && nUnused != 0 )
      {
        if ( bzerror != 0 )
          *bzerror = 0;
        *(b + 1274) = 0;
        *nUnused = *(b + 1256);
        *unused = *(b + 627);
      }
      else
      {
        if ( bzerror != 0 )
          *bzerror = -2;
        *(b + 1274) = -2;
      }
    }
    else
    {
      if ( bzerror != 0 )
        *bzerror = -1;
      *(b + 1274) = -1;
    }
  }
  else if ( bzerror != 0 )
  {
    *bzerror = -2;
  }
}


// BZ2_bzBuffToBuffCompress  (line 1254, @0x000000000324a510, libserver.so)
// calls: BZ2_bzCompressInit, BZ2_bzCompress, BZ2_bzCompressEnd
// callers: CDOTAGCServerSystem::SerializeLastMatchMetadataToString
int __fastcall BZ2_bzBuffToBuffCompress(
        char *dest,
        unsigned int *destLen,
        char *source,
        unsigned int sourceLen,
        int blockSize100k,
        int verbosity,
        int workFactor)
{
  int v8; // ecx
  int v11; // ebx
  int v13; // eax
  bz_stream strm; // [rsp+10h] [rbp-80h] BYREF

  v8 = workFactor;
  if ( dest == 0 || destLen == 0 || source == 0 || (blockSize100k - 1) > 8 || verbosity > 4 || workFactor > 0xFA )
    return -2;
  if ( workFactor == 0 )
    v8 = 30;
  memset(&strm.bzalloc, 0, 24);
  v11 = BZ2_bzCompressInit(&strm, blockSize100k, verbosity, v8);
  if ( v11 == 0 )
  {
    strm.next_in = source;
    strm.next_out = dest;
    strm.avail_in = sourceLen;
    strm.avail_out = *destLen;
    v13 = BZ2_bzCompress(&strm, 2);
    if ( v13 == 3 )
    {
      v11 = -8;
      BZ2_bzCompressEnd(&strm);
    }
    else
    {
      if ( v13 == 4 )
        *destLen -= strm.avail_out;
      else
        v11 = v13;
      BZ2_bzCompressEnd(&strm);
    }
  }
  return v11;
}


// BZ2_bzBuffToBuffDecompress  (line 1306, @0x000000000324a640, libserver.so)
// calls: BZ2_bzDecompressInit, BZ2_bzDecompress, BZ2_bzDecompressEnd
int __fastcall BZ2_bzBuffToBuffDecompress(
        char *dest,
        unsigned int *destLen,
        char *source,
        unsigned int sourceLen,
        int small,
        int verbosity)
{
  int v9; // ebx
  unsigned int v11; // eax
  int v12; // eax
  bz_stream strm; // [rsp+10h] [rbp-80h] BYREF

  if ( dest == 0 || destLen == 0 )
    return -2;
  v9 = -2;
  if ( source != 0 && small <= 1 && verbosity <= 4 )
  {
    memset(&strm.bzalloc, 0, 24);
    v9 = BZ2_bzDecompressInit(&strm, verbosity, small);
    if ( v9 == 0 )
    {
      v11 = *destLen;
      strm.next_out = dest;
      strm.next_in = source;
      strm.avail_in = sourceLen;
      strm.avail_out = v11;
      v12 = BZ2_bzDecompress(&strm);
      if ( v12 != 0 )
      {
        if ( v12 == 4 )
          *destLen -= strm.avail_out;
        else
          v9 = v12;
        BZ2_bzDecompressEnd(&strm);
      }
      else if ( strm.avail_out != 0 )
      {
        BZ2_bzDecompressEnd(&strm);
        return -7;
      }
      else
      {
        BZ2_bzDecompressEnd(&strm);
        return -8;
      }
    }
  }
  return v9;
}


// BZ2_bzlibVersion  (line 1374, @0x000000000324a760, libserver.so)
// strings: "1.0.2, 30-Dec-2001"
const char *__cdecl BZ2_bzlibVersion()
{
  return "1.0.2, 30-Dec-2001";
}


// bzopen_or_bzdopen  (line 1391, @0x0000000003249ee0, libserver.so)  // inlines: strcat
// calls: BZ2_bzReadOpen, BZ2_bzWriteOpen, fclose, fdopen, fopen64, __stack_chk_fail
// callers: BZ2_bzopen, BZ2_bzdopen
BZFILE *__fastcall bzopen_or_bzdopen(const char *path, int fd, const char *mode, int open_mode)
{
  int v4; // eax
  int v5; // r14d
  int v6; // r12d
  int v7; // ebx
  unsigned int v8; // eax
  const char *v9; // rax
  char v10; // al
  FILE *v11; // r13
  BZFILE *v12; // rbx
  int bzerr; // [rsp+Ch] [rbp-13C4h] BYREF
  char mode2[16]; // [rsp+10h] [rbp-13C0h] BYREF
  char unused[5000]; // [rsp+20h] [rbp-13B0h] BYREF
  unsigned __int64 v17; // [rsp+13A8h] [rbp-28h]

  v17 = __readfsqword(0x28u);
  memset(mode2, 0, 10);
  if ( mode == 0 )
    return 0;
  v4 = *mode;
  if ( *mode != 0 )
  {
    v5 = 0;
    v6 = 0;
    v7 = 9;
    do
    {
      while ( v4 == 115 )
      {
        v4 = *++mode;
        v5 = 1;
        if ( *mode == 0 )
          goto LABEL_11;
      }
      if ( v4 == 119 )
      {
        v6 = 1;
      }
      else if ( v4 == 114 )
      {
        v6 = 0;
      }
      else
      {
        v8 = v4 - 48;
        if ( v8 <= 9 )
          v7 = v8;
      }
      v4 = *++mode;
    }
    while ( *mode != 0 );
LABEL_11:
    v9 = "r";
    if ( v6 != 0 )
    {
      v9 = "w";
      v6 = 1;
    }
  }
  else
  {
    v6 = 0;
    v5 = 0;
    v7 = 9;
    v9 = "r";
  }
  v10 = *v9;
  strcpy(&mode2[1], "b");
  mode2[0] = v10;
  if ( open_mode != 0 )
  {
    v11 = fdopen(fd, mode2);
    goto LABEL_29;
  }
  if ( path != 0 && *path != 0 )
  {
    v11 = fopen64(path, mode2);
LABEL_29:
    if ( v11 == 0 )
      return 0;
    if ( v6 == 0 )
      goto LABEL_18;
    if ( v7 > 0 )
    {
LABEL_24:
      v12 = BZ2_bzWriteOpen(&bzerr, v11, v7, 0, 30);
      if ( v12 != 0 )
        return v12;
      goto LABEL_25;
    }
LABEL_32:
    v7 = 1;
    goto LABEL_24;
  }
  if ( v6 != 0 )
  {
    v11 = stdout;
    if ( stdout == 0 )
      return 0;
    if ( v7 > 0 )
      goto LABEL_24;
    goto LABEL_32;
  }
  v11 = stdin;
  if ( stdin == 0 )
    return 0;
LABEL_18:
  v12 = BZ2_bzReadOpen(&bzerr, v11, 0, v5, unused, 0);
  if ( v12 == 0 )
  {
LABEL_25:
    if ( v11 != stdin && v11 != stdout )
    {
      fclose(v11);
      return v12;
    }
    return 0;
  }
  return v12;
}


// BZ2_bzopen  (line 1468, @0x000000000324a770, libserver.so)
// calls: bzopen_or_bzdopen
BZFILE *__fastcall BZ2_bzopen(const char *path, const char *mode)
{
  return bzopen_or_bzdopen(path, -1, mode, 0);
}


// BZ2_bzdopen  (line 1477, @0x000000000324a790, libserver.so)
// calls: bzopen_or_bzdopen
BZFILE *__fastcall BZ2_bzdopen(int fd, const char *mode)
{
  return bzopen_or_bzdopen(0, fd, mode, 1);
}


// BZ2_bzread  (line 1486, @0x000000000324a7b0, libserver.so)
// calls: BZ2_bzRead
int __fastcall BZ2_bzread(BZFILE *b, void *buf, int len)
{
  __int64 v3; // rbp
  int v4; // eax
  int v5; // r8d
  int bzerr; // [rsp+0h] [rbp-Ch] BYREF
  __int64 v8; // [rsp+4h] [rbp-8h]

  if ( *(b + 1274) == 4 )
    return 0;
  v8 = v3;
  v4 = BZ2_bzRead(&bzerr, b, buf, len);
  v5 = -1;
  if ( (bzerr & 0xFFFFFFFB) == 0 )
    return v4;
  return v5;
}


// BZ2_bzwrite  (line 1500, @0x000000000324a800, libserver.so)
// calls: BZ2_bzWrite
int __fastcall BZ2_bzwrite(BZFILE *b, void *buf, int len)
{
  int result; // eax
  int bzerr[5]; // [rsp+Ch] [rbp-14h] BYREF

  BZ2_bzWrite(bzerr, b, buf, len);
  result = -1;
  if ( bzerr[0] == 0 )
    return len;
  return result;
}


// BZ2_bzflush  (line 1514, @0x000000000324a840, libserver.so)
int __fastcall BZ2_bzflush(BZFILE *b)
{
  return 0;
}


// BZ2_bzclose  (line 1522, @0x000000000324a850, libserver.so)  // inlines: BZ2_bzWriteClose
// calls: BZ2_bzWriteClose64, fclose, BZ2_bzReadClose
void __fastcall BZ2_bzclose(BZFILE *b)
{
  struct _IO_FILE *v2; // r12
  int bzerr[5]; // [rsp+1Ch] [rbp-14h] BYREF

  v2 = *b;
  if ( *(b + 5012) != 0 )
  {
    BZ2_bzWriteClose64(bzerr, b, 0, 0, 0, 0, 0);
    if ( bzerr[0] != 0 )
      BZ2_bzWriteClose64(0, b, 1, 0, 0, 0, 0);
  }
  else
  {
    BZ2_bzReadClose(bzerr, b);
  }
  if ( v2 != stdin && v2 != stdout )
    fclose(v2);
}


// BZ2_bzerror  (line 1566, @0x000000000324a900, libserver.so)
// globals: bzerrorstrings
const char *__fastcall BZ2_bzerror(BZFILE *b, int *errnum)
{
  int v2; // eax

  v2 = 0;
  if ( *(b + 1274) <= 0 )
    v2 = *(b + 1274);
  *errnum = v2;
  return bzerrorstrings[-v2];
}


