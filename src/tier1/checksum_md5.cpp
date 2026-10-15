
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// _GLOBAL__sub_I_checksum_md5.cpp  (line 0, @0x0000000001a66fd0, libserver.so)  // inlines: Color, SetColor, __static_initialization_and_destruction_0
// globals: UNSPECIFIED_LOGGING_COLOR
void __cdecl GLOBAL__sub_I_checksum_md5_cpp()
{
  UNSPECIFIED_LOGGING_COLOR._color[0] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[1] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[2] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[3] = 0;
}


// MD5Transform  (line 37, @0x0000000002f6d7b0, libserver.so)  // inlines: LoadLittleDWord
// callers: MD5Update, MD5Final
void __fastcall MD5Transform(unsigned int *buf, const unsigned int *in)
{
  unsigned int v2; // ebx
  unsigned int v3; // eax
  unsigned int v4; // edx
  unsigned int v5; // r8d
  unsigned int v6; // ecx
  unsigned int v7; // eax
  unsigned int v8; // r11d
  unsigned int v9; // r15d
  unsigned int v10; // edx
  unsigned int v11; // r9d
  unsigned int v12; // ecx
  unsigned int v13; // eax
  unsigned int v14; // edx
  int v15; // r12d
  unsigned int v16; // r9d
  int v17; // r12d
  int v18; // r13d
  unsigned int v19; // ecx
  int v20; // eax
  unsigned int v21; // r10d
  unsigned int v22; // esi
  int v23; // edx
  int v24; // r12d
  int v25; // r13d
  int v26; // eax
  int v27; // edx
  int v28; // r12d
  int v29; // r13d
  int v30; // eax
  int v31; // edx
  int v32; // r12d
  int v33; // r13d
  int v34; // eax
  int v35; // edx
  int v36; // r12d
  int v37; // r13d
  int v38; // eax
  int v39; // edx
  int v40; // r12d
  int v41; // r13d
  int v42; // r14d
  int v43; // edx
  int v44; // eax
  int v45; // r12d
  int v46; // r13d
  int v47; // edx
  int v48; // r14d
  int v49; // r12d
  int v50; // eax
  int v51; // r13d
  int v52; // r14d
  int v53; // edx
  int v54; // r12d
  int v55; // r13d
  int v56; // eax
  int v57; // edx
  int v58; // ebx
  int v59; // r11d
  int v60; // eax
  int v61; // edx
  int v62; // r9d
  int v63; // r10d
  int v64; // eax
  int v65; // edx
  int v66; // r8d
  int v67; // esi
  int v68; // eax
  int v69; // ecx
  int v70; // edx
  int v71; // esi
  int v72; // eax
  int v73; // r8d
  int v74; // eax
  int v75; // edx
  unsigned int v76; // r8d
  unsigned int v77; // [rsp+0h] [rbp-4Ch]
  unsigned int v78; // [rsp+4h] [rbp-48h]
  unsigned int v79; // [rsp+8h] [rbp-44h]
  unsigned int v80; // [rsp+Ch] [rbp-40h]
  unsigned int v81; // [rsp+10h] [rbp-3Ch]
  unsigned int v82; // [rsp+14h] [rbp-38h]
  unsigned int v83; // [rsp+18h] [rbp-34h]
  unsigned int v84; // [rsp+1Ch] [rbp-30h]
  unsigned int v85; // [rsp+20h] [rbp-2Ch]

  v2 = *in;
  v85 = in[1];
  v84 = in[2];
  v3 = buf[1] + __ROR4__(*buf + *in - 680876936 + (buf[3] ^ buf[1] & (buf[2] ^ buf[3])), 25);
  v4 = v3 + __ROR4__(buf[3] + v85 - 389564586 + (buf[2] ^ v3 & (buf[1] ^ buf[2])), 20);
  v83 = in[3];
  v5 = v4 + __ROR4__((buf[1] ^ v4 & (v3 ^ buf[1])) + buf[2] + v84 + 606105819, 15);
  v82 = in[4];
  v6 = v5 + __ROR4__(buf[1] + v83 - 1044525330 + (v3 ^ v5 & (v3 ^ v4)), 10);
  v7 = v6 + __ROR4__(v3 + v82 - 176418897 + (v4 ^ v6 & (v4 ^ v5)), 25);
  v77 = in[5];
  v81 = in[6];
  v8 = in[7];
  v9 = in[9];
  v10 = v7 + __ROR4__(v4 + v77 + 1200080426 + (v5 ^ v7 & (v5 ^ v6)), 20);
  v79 = in[10];
  v11 = v10 + __ROR4__((v6 ^ v10 & (v6 ^ v7)) + v5 + v81 - 1473231341, 15);
  v12 = v11 + __ROR4__(v6 + v8 - 45705983 + (v7 ^ v11 & (v7 ^ v10)), 10);
  v80 = in[8];
  v13 = v12 + __ROR4__(v7 + v80 + 1770035416 + (v10 ^ v12 & (v10 ^ v11)), 25);
  v14 = v13 + __ROR4__(v10 + v9 - 1958414417 + (v11 ^ v13 & (v11 ^ v12)), 20);
  v15 = (v12 ^ v14 & (v12 ^ v13)) + v11 + v79 - 42063;
  v16 = in[12];
  v78 = in[11];
  v17 = v14 + __ROR4__(v15, 15);
  v18 = v17 + __ROR4__((v13 ^ v17 & (v13 ^ v14)) + v12 + v78 - 1990404162, 10);
  v19 = in[13];
  v20 = v18 + __ROR4__(v13 + v16 + 1804603682 + (v14 ^ v18 & (v14 ^ v17)), 25);
  v21 = in[14];
  v22 = in[15];
  v23 = v20 + __ROR4__(v14 + v19 - 40341101 + (v17 ^ v20 & (v17 ^ v18)), 20);
  v24 = v23 + __ROR4__(v17 + v21 - 1502002290 + (v18 ^ v23 & (v18 ^ v20)), 15);
  v25 = v24 + __ROR4__(v18 + v22 + 1236535329 + (v20 ^ v24 & (v20 ^ v23)), 10);
  v26 = v25 + __ROR4__(v20 + v85 - 165796510 + (v24 ^ v23 & (v24 ^ v25)), 27);
  v27 = v26 + __ROR4__(v23 + v81 - 1069501632 + (v25 ^ v24 & (v25 ^ v26)), 23);
  v28 = v27 + __ROR4__(v24 + v78 + 643717713 + (v26 ^ v25 & (v26 ^ v27)), 18);
  v29 = v28 + __ROR4__(v25 + v2 - 373897302 + (v27 ^ v26 & (v27 ^ v28)), 12);
  v30 = v29 + __ROR4__(v26 + v77 - 701558691 + (v28 ^ v27 & (v28 ^ v29)), 27);
  v31 = v30 + __ROR4__(v27 + v79 + 38016083 + (v29 ^ v28 & (v29 ^ v30)), 23);
  v32 = v31 + __ROR4__(v28 + v22 - 660478335 + (v30 ^ v29 & (v30 ^ v31)), 18);
  v33 = v32 + __ROR4__(v29 + v82 - 405537848 + (v31 ^ v30 & (v31 ^ v32)), 12);
  v34 = v33 + __ROR4__(v30 + v9 + 568446438 + (v32 ^ v31 & (v32 ^ v33)), 27);
  v35 = v34 + __ROR4__(v31 + v21 - 1019803690 + (v33 ^ v32 & (v33 ^ v34)), 23);
  v36 = v35 + __ROR4__(v32 + v83 - 187363961 + (v34 ^ v33 & (v34 ^ v35)), 18);
  v37 = v36 + __ROR4__(v33 + v80 + 1163531501 + (v35 ^ v34 & (v35 ^ v36)), 12);
  v38 = v37 + __ROR4__(v34 + v19 - 1444681467 + (v36 ^ v35 & (v36 ^ v37)), 27);
  v39 = v38 + __ROR4__(v35 + v84 - 51403784 + (v37 ^ v36 & (v37 ^ v38)), 23);
  v40 = v39 + __ROR4__(v36 + v8 + 1735328473 + (v38 ^ v37 & (v38 ^ v39)), 18);
  v41 = v40 + __ROR4__(v37 + v16 - 1926607734 + (v39 ^ v38 & (v39 ^ v40)), 12);
  v42 = v41 + __ROR4__(v38 + v77 - 378558 + (v41 ^ v39 ^ v40), 28);
  v43 = v42 + __ROR4__((v42 ^ v40 ^ v41) + v39 + v80 - 2022574463, 21);
  v44 = v43 + __ROR4__(v40 + v78 + 1839030562 + (v43 ^ v41 ^ v42), 16);
  v45 = v44 + __ROR4__(v41 + v21 - 35309556 + (v44 ^ v42 ^ v43), 9);
  v46 = v45 + __ROR4__(v42 + v85 - 1530992060 + (v45 ^ v43 ^ v44), 28);
  v47 = v46 + __ROR4__(v43 + v82 + 1272893353 + (v46 ^ v44 ^ v45), 21);
  v48 = v47 + __ROR4__((v47 ^ v45 ^ v46) + v44 + v8 - 155497632, 16);
  v49 = v48 + __ROR4__((v48 ^ v46 ^ v47) + v45 + v79 - 1094730640, 9);
  v50 = v49 + __ROR4__(v46 + v19 + 681279174 + (v49 ^ v47 ^ v48), 28);
  v51 = v50 + __ROR4__((v50 ^ v48 ^ v49) + v47 + v2 - 358537222, 21);
  v52 = v51 + __ROR4__((v51 ^ v49 ^ v50) + v48 + v83 - 722521979, 16);
  v53 = v52 + __ROR4__(v49 + v81 + 76029189 + (v52 ^ v50 ^ v51), 9);
  v54 = v53 + __ROR4__((v53 ^ v51 ^ v52) + v50 + v9 - 640364487, 28);
  v55 = v54 + __ROR4__((v54 ^ v52 ^ v53) + v51 + v16 - 421815835, 21);
  v56 = v55 + __ROR4__(v52 + v22 + 530742520 + (v55 ^ v53 ^ v54), 16);
  v57 = v56 + __ROR4__(v53 + v84 - 995338651 + (v56 ^ v54 ^ v55), 9);
  v58 = v57 + __ROR4__(v54 + v2 - 198630844 + (v56 ^ (v57 | ~v55)), 26);
  v59 = v58 + __ROR4__(v55 + v8 + 1126891415 + (v57 ^ (v58 | ~v56)), 22);
  v60 = v59 + __ROR4__(v56 + v21 - 1416354905 + (v58 ^ (v59 | ~v57)), 17);
  v61 = v60 + __ROR4__(v57 + v77 - 57434055 + (v59 ^ (v60 | ~v58)), 11);
  v62 = v61 + __ROR4__(v58 + v16 + 1700485571 + (v60 ^ (v61 | ~v59)), 26);
  v63 = v62 + __ROR4__(v59 + v83 - 1894986606 + (v61 ^ (v62 | ~v60)), 22);
  v64 = v63 + __ROR4__(v60 + v79 - 1051523 + (v62 ^ (v63 | ~v61)), 17);
  v65 = v64 + __ROR4__(v61 + v85 - 2054922799 + (v63 ^ (v64 | ~v62)), 11);
  v66 = v65 + __ROR4__(v62 + v80 + 1873313359 + (v64 ^ (v65 | ~v63)), 26);
  v67 = v66 + __ROR4__(v63 + v22 - 30611744 + (v65 ^ (v66 | ~v64)), 22);
  v68 = v67 + __ROR4__(v64 + v81 - 1560198380 + (v66 ^ (v67 | ~v65)), 17);
  v69 = v68 + __ROR4__((v67 ^ (v68 | ~v66)) + v65 + v19 + 1309151649, 11);
  v70 = v69 + __ROR4__(v66 + v82 - 145523070 + (v68 ^ (v69 | ~v67)), 26);
  v71 = v70 + __ROR4__(v67 + v78 - 1120210379 + (v69 ^ (v70 | ~v68)), 22);
  v72 = __ROR4__(v68 + v84 + 718787259 + (v70 ^ (v71 | ~v69)), 17);
  v73 = v72 + v71;
  *buf += v70;
  v74 = __ROR4__(v69 + v9 - 343485551 + (v71 ^ ((v72 + v71) | ~v70)), 11);
  v75 = v73 + buf[1];
  v76 = buf[2] + v73;
  buf[3] += v71;
  buf[1] = v75 + v74;
  buf[2] = v76;
}


// MD5Init  (line 125, @0x0000000002f6df90, libserver.so)
// callers: PerformDOTASaveGame
void __fastcall MD5Init(MD5Context_t *ctx)
{
  ctx->buf[0] = 1732584193;
  ctx->buf[1] = -271733879;
  ctx->buf[2] = -1732584194;
  ctx->buf[3] = 271733878;
  ctx->bits[0] = 0;
  ctx->bits[1] = 0;
}


// MD5Update  (line 142, @0x0000000002f6dfc0, libserver.so)  // inlines: memcpy
// calls: MD5Transform, memcpy
// callers: PerformDOTASaveGame, MD5_PseudoRandom, MD5_ProcessSingleBuffer
void __fastcall MD5Update(MD5Context_t *ctx, const unsigned __int8 *buf, unsigned int len)
{
  unsigned int v3; // r14d
  unsigned int v5; // eax
  unsigned int v6; // ecx
  unsigned int v7; // edx
  int v8; // eax
  unsigned __int8 *in; // r12
  const unsigned __int8 *v10; // rbx
  unsigned int v11; // r15d
  __int64 v12; // rdx
  unsigned int v13; // eax
  size_t v14; // rdx
  unsigned __int8 *v15; // rdi
  unsigned int v16; // ebx
  const unsigned __int8 *bufa; // [rsp+8h] [rbp-38h]

  v3 = len;
  bufa = buf;
  v5 = ctx->bits[0];
  v6 = ctx->bits[1];
  v7 = v5 + 8 * len;
  ctx->bits[0] = v7;
  if ( v5 > v7 )
    ++v6;
  v8 = (v5 >> 3) & 0x3F;
  ctx->bits[1] = v6 + (v3 >> 29);
  if ( v8 != 0 )
  {
    v15 = &ctx->in[v8];
    v16 = 64 - v8;
    if ( v3 < 64 - v8 )
    {
      v14 = v3;
      goto LABEL_10;
    }
    v3 -= v16;
    in = ctx->in;
    memcpy(v15, buf, v16);
    MD5Transform(ctx->buf, ctx->in);
    bufa += v16;
  }
  else
  {
    in = ctx->in;
  }
  if ( v3 > 0x3F )
  {
    v10 = bufa;
    v11 = v3;
    do
    {
      v12 = *v10;
      v11 -= 64;
      v10 += 64;
      *in = v12;
      *(in + 1) = *(v10 - 7);
      *(in + 2) = *(v10 - 6);
      *(in + 3) = *(v10 - 5);
      *(in + 4) = *(v10 - 4);
      *(in + 5) = *(v10 - 3);
      *(in + 6) = *(v10 - 2);
      *(in + 7) = *(v10 - 1);
      MD5Transform(ctx->buf, in);
    }
    while ( v11 > 0x3F );
    v13 = v3 - 64;
    v3 &= 0x3Fu;
    bufa += 64 * (v13 >> 6) + 64;
  }
  buf = bufa;
  v14 = v3;
  v15 = in;
LABEL_10:
  memcpy(v15, buf, v14);
}


// MD5Final  (line 194, @0x0000000002f6e110, libserver.so)  // inlines: StoreLittleDWord, memset
// calls: memset, MD5Transform
// callers: PerformDOTASaveGame, MD5_PseudoRandom, MD5_ProcessSingleBuffer
void __fastcall MD5Final(unsigned __int8 *digest, MD5Context_t *ctx)
{
  unsigned int v4; // eax
  unsigned __int8 *v5; // rdi
  size_t v6; // rdx
  unsigned __int8 *in; // r13
  unsigned __int64 i; // rax

  v4 = (ctx->bits[0] >> 3) & 0x3F;
  v5 = &ctx->in[v4 + 1];
  ctx->in[v4] = 0x80;
  v6 = 63 - v4;
  in = ctx->in;
  if ( v6 > 7 )
  {
    memset(v5, 0, 55 - v4);
  }
  else
  {
    memset(v5, 0, v6);
    MD5Transform(ctx->buf, ctx->in);
    memset(in, 0, 0x38u);
  }
  *&ctx->in[56] = ctx->bits[0];
  *&ctx->in[60] = ctx->bits[1];
  MD5Transform(ctx->buf, in);
  for ( i = 0; i != 16; i += 4LL )
    *&digest[i] = *(ctx->buf + i);
  LOBYTE(i) = 0;
  memset64(ctx, i, 0xBu);
}


// MD5_Print  (line 249, @0x0000000002f6e1d0, libserver.so)  // inlines: V_binarytohex<int, long unsigned int>
// calls: _V_binarytohex
// globals: MD5_Print(uchar *,int)::szReturn
char *__fastcall MD5_Print(unsigned __int8 *hash, int hashlen)
{
  _V_binarytohex(hash, hashlen, MD5_Print(unsigned char *,int)::szReturn, 64);
  return MD5_Print(unsigned char *,int)::szReturn;
}


// MD5_PseudoRandom  (line 264, @0x0000000002f6e1f0, libserver.so)  // inlines: MD5Init, memset
// calls: MD5Update, MD5Final, __stack_chk_fail
// callers: ReadUsercmd
unsigned int __fastcall MD5_PseudoRandom(unsigned int nSeed)
{
  unsigned int nSeeda; // [rsp+Ch] [rbp-84h] BYREF
  unsigned __int8 digest[16]; // [rsp+10h] [rbp-80h] BYREF
  MD5Context_t ctx; // [rsp+20h] [rbp-70h] BYREF
  unsigned __int64 v5; // [rsp+78h] [rbp-18h]

  nSeeda = nSeed;
  v5 = __readfsqword(0x28u);
  memset(&ctx, 0, sizeof(ctx));
  ctx.buf[0] = 1732584193;
  ctx.buf[1] = -271733879;
  ctx.buf[2] = -1732584194;
  ctx.buf[3] = 271733878;
  MD5Update(&ctx, &nSeeda, 4u);
  MD5Final(digest, &ctx);
  return *&digest[6];
}


// MD5_Compare  (line 279, @0x0000000002f6e280, libserver.so)  // inlines: V_memcmp
// calls: memcmp
bool __fastcall MD5_Compare(const MD5Value_t *const data, const MD5Value_t *const compare)
{
  return memcmp(data, compare, 0x10u) == 0;
}


// MD5Value_t::Zero  (line 285, @0x0000000002f6e2a0, libserver.so)  // inlines: V_memset, memset
void __fastcall MD5Value_t::Zero(MD5Value_t *const this)
{
  *this->bits = 0;
  *&this->bits[8] = 0;
}


// MD5Value_t::IsZero  (line 291, @0x0000000002f6e2c0, libserver.so)
bool __fastcall MD5Value_t::IsZero(const MD5Value_t *const this)
{
  __int64 v1; // rax

  if ( this->bits[0] == 0 )
  {
    v1 = 0;
    while ( this->bits[v1 + 1] == 0 )
    {
      if ( ++v1 == 15 )
        return 1;
    }
  }
  return 0;
}


// MD5_ProcessSingleBuffer  (line 303, @0x0000000002f6e300, libserver.so)  // inlines: MD5Init
// calls: MD5Update, MD5Final, __stack_chk_fail
void __fastcall MD5_ProcessSingleBuffer(const void *p, int len, MD5Value_t *const md5Result)
{
  MD5Context_t ctx; // [rsp+0h] [rbp-70h] BYREF
  unsigned __int64 v5; // [rsp+58h] [rbp-18h]

  v5 = __readfsqword(0x28u);
  ctx.buf[0] = 1732584193;
  ctx.buf[1] = -271733879;
  ctx.buf[2] = -1732584194;
  ctx.buf[3] = 271733878;
  ctx.bits[0] = 0;
  ctx.bits[1] = 0;
  MD5Update(&ctx, p, len);
  MD5Final(md5Result->bits, &ctx);
}


