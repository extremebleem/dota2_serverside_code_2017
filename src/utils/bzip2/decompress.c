
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// BZ2_decompress  (line 146, @0x000000000324eb80, libserver.so)  // inlines: BZ2_indexIntoF, fprintf, makeMaps_d
// calls: BZ2_hbCreateDecodeTables, __fprintf_chk, BZ2_bz__AssertH__fail, fwrite, __stack_chk_fail
// callers: BZ2_bzDecompress
// strings: "\n    [%d: huff+mtf ", "rt+rld"
// globals: jpt_324ECB3
Int32 __fastcall BZ2_decompress(DState *s)
{
  DState *v1; // rbx
  Int32 state; // eax
  Int32 save_zj; // r10d
  Int32 save_zvec; // r13d
  Int32 save_zn; // r12d
  Int32 save_es; // r14d
  Int32 save_nblock; // r8d
  Int32 save_nGroups; // r15d
  Int32 save_j; // r11d
  Int32 save_i; // r9d
  __int64 v11; // rax
  bz_stream *v12; // rax
  UInt32 v13; // ecx
  int v14; // edx
  int v15; // esi
  UInt32 v16; // eax
  char v17; // dl
  Int32 result; // eax
  Int32 v19; // esi
  UInt32 v20; // r10d
  __int64 v21; // rax
  bz_stream *v22; // rax
  UInt32 v23; // ecx
  int v24; // edx
  int v25; // esi
  UInt32 v26; // r10d
  bz_stream *v27; // rax
  UInt32 v28; // ecx
  int v29; // edx
  int v30; // esi
  Int32 v31; // esi
  bz_stream *v32; // rax
  UInt32 v33; // ecx
  int v34; // edx
  UInt32 v35; // eax
  Int32 v36; // edx
  bz_stream *v37; // rax
  UInt32 v38; // ecx
  int v39; // edx
  int v40; // esi
  UInt32 v41; // eax
  __int64 v42; // rdx
  DState *v43; // r13
  int *v44; // r12
  __int64 v45; // rax
  unsigned __int8 *v46; // rbx
  unsigned __int8 *v47; // rcx
  Int32 v48; // r9d
  Int32 v49; // r14d
  Int32 v50; // eax
  Int32 *v51; // rdx
  UChar *v52; // rcx
  Int32 *v53; // rsi
  Int32 *v54; // rdi
  __int64 m; // rax
  DState *v56; // r9
  int n; // r8d
  int v58; // edx
  int v59; // eax
  unsigned __int8 v60; // si
  __int64 v61; // rcx
  __int64 v62; // rax
  bz_stream *v63; // rax
  UInt32 v64; // ecx
  int v65; // edx
  Int32 v66; // esi
  UInt32 v67; // r13d
  Int32 v68; // esi
  UInt32 v69; // r10d
  bz_stream *v70; // rax
  UInt32 v71; // ecx
  int v72; // edx
  int v73; // esi
  Int32 v74; // esi
  bz_stream *v75; // rax
  UInt32 v76; // ecx
  int v77; // edx
  UInt32 v78; // eax
  Int32 v79; // esi
  bz_stream *v80; // rax
  UInt32 v81; // ecx
  int v82; // edx
  UInt32 v83; // eax
  Int32 origPtr; // edx
  Int32 v85; // esi
  bz_stream *v86; // rax
  UInt32 v87; // ecx
  int v88; // edx
  UInt32 v89; // eax
  Int32 v90; // edx
  Int32 v91; // esi
  bz_stream *v92; // rax
  UInt32 v93; // ecx
  int v94; // edx
  UInt32 v95; // eax
  Int32 v96; // edx
  int v97; // eax
  Int32 v98; // esi
  bz_stream *v99; // rax
  UInt32 v100; // ecx
  int v101; // edx
  UInt32 v102; // eax
  __int64 i; // rax
  signed int v104; // esi
  bz_stream *v105; // rax
  UInt32 v106; // ecx
  int v107; // edx
  UInt32 v108; // eax
  __int64 v109; // rax
  Int32 v110; // edx
  __int64 v111; // rcx
  bz_stream *v112; // rax
  UInt32 v113; // ecx
  int v114; // edx
  int v115; // esi
  UInt32 v116; // r15d
  Int32 v117; // esi
  bz_stream *v118; // rax
  UInt32 v119; // ecx
  int v120; // edx
  int v121; // esi
  UInt32 v122; // eax
  unsigned int v123; // edi
  unsigned int v124; // edx
  unsigned int v125; // eax
  __int64 v126; // rdi
  unsigned int v127; // eax
  int v128; // eax
  __int64 v129; // rcx
  __int64 v130; // rsi
  int v131; // eax
  unsigned __int8 v132; // cl
  __int64 v133; // rdx
  UInt32 v134; // eax
  bz_stream *v135; // rax
  UInt32 v136; // ecx
  int v137; // edx
  Int32 v138; // esi
  UInt32 v139; // r13d
  Int32 v140; // esi
  int v141; // eax
  bz_stream *v142; // rax
  UInt32 v143; // ecx
  int v144; // edx
  Int32 v145; // esi
  UInt32 v146; // r13d
  Int32 v147; // esi
  Int32 v148; // esi
  bz_stream *v149; // rax
  UInt32 v150; // ecx
  int v151; // edx
  UInt32 v152; // eax
  UInt32 v153; // edx
  Int32 v154; // esi
  bz_stream *v155; // rax
  UInt32 v156; // ecx
  int v157; // edx
  UInt32 v158; // eax
  UInt32 storedBlockCRC; // edx
  Int32 v160; // esi
  Int32 v161; // esi
  bz_stream *v162; // rax
  UInt32 v163; // ecx
  int v164; // edx
  UInt32 v165; // edx
  bool v166; // cc
  int v167; // ecx
  Int32 v168; // esi
  bz_stream *v169; // rax
  UInt32 v170; // ecx
  int v171; // edx
  UInt32 v172; // edx
  Int32 v173; // esi
  bz_stream *v174; // rax
  UInt32 v175; // ecx
  int v176; // edx
  UInt32 v177; // edx
  Int32 v178; // esi
  bz_stream *v179; // rax
  UInt32 v180; // ecx
  int v181; // edx
  UInt32 v182; // eax
  UInt32 v183; // edx
  Int32 v184; // esi
  bz_stream *v185; // rax
  UInt32 v186; // ecx
  int v187; // edx
  UInt32 v188; // edx
  bz_stream *v189; // rax
  UInt32 v190; // ecx
  int v191; // edx
  UInt32 v192; // edx
  Int32 v193; // esi
  bz_stream *v194; // rax
  UInt32 v195; // ecx
  int v196; // edx
  UInt32 v197; // edx
  Int32 v198; // esi
  bz_stream *v199; // rax
  UInt32 v200; // ecx
  int v201; // edx
  UInt32 v202; // eax
  UInt32 v203; // edx
  Int32 v204; // esi
  bz_stream *v205; // rax
  UInt32 v206; // ecx
  int v207; // edx
  UInt32 v208; // eax
  bz_stream *v209; // rax
  UInt32 v210; // ecx
  int v211; // edx
  UInt32 v212; // eax
  Int32 v213; // esi
  bz_stream *v214; // rax
  UInt32 v215; // ecx
  int v216; // edx
  UInt32 v217; // edx
  Int32 v218; // esi
  bz_stream *v219; // rax
  UInt32 v220; // ecx
  int v221; // edx
  UInt32 v222; // edx
  Int32 v223; // esi
  bz_stream *v224; // rax
  UInt32 v225; // ecx
  int v226; // edx
  UInt32 v227; // eax
  Int32 v228; // eax
  Int32 v229; // eax
  int v230; // eax
  __int64 v231; // rax
  Int32 blockSize100k; // esi
  __int64 v233; // rax
  bool v234; // zf
  Int32 v235; // esi
  bz_stream *v236; // rax
  UInt32 v237; // ecx
  int v238; // edx
  UInt32 v239; // edx
  Int32 v240; // esi
  bz_stream *v241; // rax
  UInt32 v242; // ecx
  int v243; // edx
  UInt32 v244; // edx
  Int32 v245; // esi
  bz_stream *v246; // rax
  UInt32 v247; // ecx
  int v248; // edx
  UInt32 v249; // edx
  Int32 v250; // esi
  bz_stream *v251; // rax
  UInt32 v252; // ecx
  int v253; // edx
  UInt32 v254; // eax
  UInt32 v255; // edx
  Int32 v256; // esi
  bz_stream *v257; // rax
  UInt32 v258; // ecx
  int v259; // edx
  UInt32 v260; // eax
  UInt32 v261; // edx
  Int32 bsLive; // esi
  bz_stream *v263; // rax
  UInt32 v264; // ecx
  int v265; // edx
  UInt32 v266; // edx
  bz_stream *strm; // rax
  UInt32 bsBuff; // ecx
  int v269; // edx
  Int32 v270; // esi
  UInt32 v271; // edx
  Int32 v272; // esi
  bz_stream *v273; // rax
  UInt32 v274; // ecx
  int v275; // edx
  UInt32 v276; // eax
  UInt32 v277; // edx
  bz_stream *v278; // rax
  UInt32 v279; // ecx
  int v280; // edx
  UInt32 v281; // eax
  UInt32 storedCombinedCRC; // edx
  unsigned int v283; // edi
  int v284; // eax
  unsigned __int8 v285; // dl
  UInt32 v286; // esi
  int v287; // ecx
  __int64 v288; // rdx
  __int64 v289; // rax
  __int64 v290; // rdi
  int v291; // esi
  int v292; // eax
  __int64 v293; // rcx
  int v294; // eax
  signed int v295; // edx
  __int64 v296; // rcx
  int v297; // eax
  int v298; // edi
  int v299; // esi
  unsigned __int8 v300; // cl
  __int64 v301; // rdx
  DState *v302; // rdi
  int v303; // eax
  __int64 ii; // rax
  UInt16 *v305; // rcx
  char *v306; // rdx
  UChar *v307; // rsi
  UInt16 v308; // si
  int v309; // ecx
  __int64 v310; // rdx
  __int64 v311; // rdx
  __int64 v312; // rax
  UInt32 *tt; // rcx
  int v314; // edi
  __int64 v315; // rdx
  char *v316; // rdx
  UInt32 *v317; // rdx
  UInt32 v318; // eax
  __int64 v319; // rax
  UInt32 v320; // eax
  int v321; // edx
  int v322; // edx
  UChar *ll4; // r11
  UInt16 *ll16; // rsi
  Int32 v325; // edx
  UInt16 *v326; // rdi
  __int64 v327; // rsi
  int v328; // eax
  int v329; // ecx
  UChar *v330; // rsi
  int v331; // eax
  UChar v332; // cl
  int v333; // esi
  int v334; // eax
  UChar *v335; // rcx
  int v336; // edx
  int v337; // edx
  __int64 v338; // rax
  __int64 v339; // rdx
  int k; // eax
  unsigned __int8 *selectorMtf; // rsi
  unsigned __int8 v342; // al
  __int64 v343; // rdx
  unsigned __int8 v344; // di
  int v345; // esi
  int v346; // eax
  UChar *v347; // rdx
  UInt32 v348; // eax
  UInt32 v349; // eax
  Int32 v350; // edx
  Int32 nblocka; // [rsp+8h] [rbp-B8h]
  Int32 nblock; // [rsp+8h] [rbp-B8h]
  DState *j; // [rsp+10h] [rbp-B0h]
  Int32 jb; // [rsp+10h] [rbp-B0h]
  Int32 ja; // [rsp+10h] [rbp-B0h]
  Int32 nn; // [rsp+18h] [rbp-A8h]
  unsigned int nna; // [rsp+18h] [rbp-A8h]
  Int32 nnd; // [rsp+18h] [rbp-A8h]
  Int32 nnb; // [rsp+18h] [rbp-A8h]
  DState *nnc; // [rsp+18h] [rbp-A8h]
  Int32 nne; // [rsp+18h] [rbp-A8h]
  bz_stream *zvec; // [rsp+20h] [rbp-A0h]
  Int32 zveca; // [rsp+20h] [rbp-A0h]
  unsigned __int8 zvecb; // [rsp+20h] [rbp-A0h]
  Int32 zvecc; // [rsp+20h] [rbp-A0h]
  Int32 zvecd; // [rsp+20h] [rbp-A0h]
  Int32 zj; // [rsp+28h] [rbp-98h]
  Int32 zt; // [rsp+2Ch] [rbp-94h]
  Int32 gSel; // [rsp+30h] [rbp-90h]
  int zn; // [rsp+34h] [rbp-8Ch]
  Int32 zna; // [rsp+34h] [rbp-8Ch]
  Int32 gMinlen; // [rsp+38h] [rbp-88h]
  Int32 N; // [rsp+3Ch] [rbp-84h]
  Int32 *gPerm; // [rsp+40h] [rbp-80h]
  Int32 *gBase; // [rsp+48h] [rbp-78h]
  Int32 *gLimit; // [rsp+50h] [rbp-70h]
  Int32 es_0; // [rsp+58h] [rbp-68h]
  Int32 es_0a; // [rsp+58h] [rbp-68h]
  Int32 t; // [rsp+5Ch] [rbp-64h]
  Int32 ta; // [rsp+5Ch] [rbp-64h]
  Int32 curr; // [rsp+60h] [rbp-60h]
  int alphaSize; // [rsp+64h] [rbp-5Ch]
  Int32 groupPos; // [rsp+68h] [rbp-58h]
  Int32 EOB; // [rsp+70h] [rbp-50h]
  __int64 EOBa; // [rsp+70h] [rbp-50h]
  Int32 EOBb; // [rsp+70h] [rbp-50h]
  int nSelectors; // [rsp+78h] [rbp-48h]
  unsigned int nextSym; // [rsp+7Ch] [rbp-44h]
  unsigned __int8 pos[8]; // [rsp+80h] [rbp-40h]
  unsigned __int64 v390; // [rsp+88h] [rbp-38h]

  v1 = s;
  v390 = __readfsqword(0x28u);
  zvec = s->strm;
  state = s->state;
  if ( state == 10 )
  {
    s->save_i = 0;
    save_zj = 0;
    save_zvec = 0;
    s->save_j = 0;
    save_zn = 0;
    save_es = 0;
    s->save_t = 0;
    save_nblock = 0;
    save_nGroups = 0;
    s->save_alphaSize = 0;
    save_j = 0;
    save_i = 0;
    s->save_nGroups = 0;
    s->save_nSelectors = 0;
    s->save_EOB = 0;
    s->save_groupNo = 0;
    s->save_groupPos = 0;
    s->save_nextSym = 0;
    s->save_nblockMAX = 0;
    s->save_nblock = 0;
    s->save_es = 0;
    s->save_N = 0;
    s->save_curr = 0;
    s->save_zt = 0;
    s->save_zn = 0;
    s->save_zvec = 0;
    s->save_zj = 0;
    s->save_gSel = 0;
    s->save_gMinlen = 0;
    s->save_gLimit = 0;
    s->save_gBase = 0;
    s->save_gPerm = 0;
    gPerm = 0;
    gBase = 0;
    gLimit = 0;
    gMinlen = 0;
    gSel = 0;
    zt = 0;
    curr = 0;
    N = 0;
    zn = 0;
    nextSym = 0;
    groupPos = 0;
    es_0 = 0;
    EOB = 0;
    nSelectors = 0;
    alphaSize = 0;
    t = 0;
  }
  else
  {
    save_zj = s->save_zj;
    save_zvec = s->save_zvec;
    save_zn = s->save_zn;
    zt = s->save_zt;
    save_es = s->save_es;
    save_nblock = s->save_nblock;
    save_nGroups = s->save_nGroups;
    gPerm = s->save_gPerm;
    gBase = s->save_gBase;
    gLimit = s->save_gLimit;
    gMinlen = s->save_gMinlen;
    gSel = s->save_gSel;
    curr = s->save_curr;
    N = s->save_N;
    zn = s->save_nblockMAX;
    nextSym = s->save_nextSym;
    groupPos = s->save_groupPos;
    es_0 = s->save_groupNo;
    EOB = s->save_EOB;
    nSelectors = s->save_nSelectors;
    alphaSize = s->save_alphaSize;
    save_j = s->save_j;
    save_i = s->save_i;
    t = s->save_t;
  }
  switch ( state )
  {
    case 10:
      s->state = 10;
      break;
    case 11:
      bsLive = s->bsLive;
      goto LABEL_385;
    case 12:
      v235 = s->bsLive;
      goto LABEL_340;
    case 13:
      v223 = s->bsLive;
      goto LABEL_328;
    case 14:
      goto LABEL_6;
    case 15:
      v19 = s->bsLive;
      goto LABEL_262;
    case 16:
      v184 = s->bsLive;
      goto LABEL_253;
    case 17:
      v173 = s->bsLive;
      goto LABEL_236;
    case 18:
      v168 = s->bsLive;
      goto LABEL_227;
    case 19:
      v161 = s->bsLive;
      goto LABEL_216;
    case 20:
      v154 = s->bsLive;
      goto LABEL_208;
    case 21:
      v160 = s->bsLive;
      goto LABEL_280;
    case 22:
      v178 = s->bsLive;
      goto LABEL_245;
    case 23:
      v148 = s->bsLive;
      goto LABEL_200;
    case 24:
      v74 = s->bsLive;
      goto LABEL_88;
    case 25:
      v79 = s->bsLive;
      goto LABEL_95;
    case 26:
      v85 = s->bsLive;
      goto LABEL_102;
    case 27:
      v91 = s->bsLive;
      goto LABEL_109;
    case 28:
      v98 = s->bsLive;
      goto LABEL_118;
    case 29:
      goto LABEL_132;
    case 30:
      goto LABEL_149;
    case 31:
      v117 = s->bsLive;
      goto LABEL_299;
    case 32:
      v204 = s->bsLive;
      goto LABEL_288;
    case 33:
      goto LABEL_156;
    case 34:
      goto LABEL_43;
    case 35:
      v31 = s->bsLive;
      goto LABEL_33;
    case 36:
      goto LABEL_72;
    case 37:
      goto LABEL_26;
    case 38:
      goto LABEL_193;
    case 39:
      goto LABEL_81;
    case 40:
      goto LABEL_181;
    case 41:
      goto LABEL_17;
    case 42:
      v193 = s->bsLive;
      goto endhdr_2;
    case 43:
      v198 = s->bsLive;
      goto LABEL_317;
    case 44:
      v213 = s->bsLive;
      goto LABEL_308;
    case 45:
      v218 = s->bsLive;
      goto LABEL_358;
    case 46:
      v240 = s->bsLive;
      goto LABEL_349;
    case 47:
      v245 = s->bsLive;
      goto LABEL_409;
    case 48:
      v272 = s->bsLive;
      goto LABEL_401;
    case 49:
      v256 = s->bsLive;
      goto LABEL_375;
    case 50:
      v250 = s->bsLive;
      goto LABEL_367;
    default:
      BZ2_bz__AssertH__fail(4001);
  }
  while ( 1 )
  {
    v270 = s->bsLive;
    if ( v270 > 7 )
      break;
    strm = s->strm;
    if ( s->strm->avail_in == 0 )
      goto LABEL_416;
    bsBuff = s->bsBuff;
    v269 = *strm->next_in;
    s->bsLive = v270 + 8;
    s->bsBuff = (bsBuff << 8) | v269;
    ++strm->next_in;
    --s->strm->avail_in;
    if ( ++s->strm->total_in_lo32 == 0 )
      ++s->strm->total_in_hi32;
  }
  v271 = s->bsBuff;
  result = -5;
  s->bsLive = v270 - 8;
  if ( (v271 >> (v270 - 8)) != 66 )
    goto save_state_and_return;
  bsLive = v270 - 8;
LABEL_385:
  s->state = 11;
  while ( bsLive <= 7 )
  {
    v263 = s->strm;
    if ( s->strm->avail_in == 0 )
      goto LABEL_416;
    v264 = s->bsBuff;
    v265 = *v263->next_in;
    s->bsLive = bsLive + 8;
    s->bsBuff = (v264 << 8) | v265;
    ++v263->next_in;
    --s->strm->avail_in;
    if ( ++s->strm->total_in_lo32 == 0 )
      ++s->strm->total_in_hi32;
    bsLive = s->bsLive;
  }
  v266 = s->bsBuff;
  result = -5;
  s->bsLive = bsLive - 8;
  if ( (v266 >> (bsLive - 8)) != 90 )
    goto save_state_and_return;
  v235 = bsLive - 8;
LABEL_340:
  s->state = 12;
  while ( v235 <= 7 )
  {
    v236 = s->strm;
    if ( s->strm->avail_in == 0 )
      goto LABEL_416;
    v237 = s->bsBuff;
    v238 = *v236->next_in;
    s->bsLive = v235 + 8;
    s->bsBuff = (v237 << 8) | v238;
    ++v236->next_in;
    --s->strm->avail_in;
    if ( ++s->strm->total_in_lo32 == 0 )
      ++s->strm->total_in_hi32;
    v235 = s->bsLive;
  }
  v239 = s->bsBuff;
  result = -5;
  s->bsLive = v235 - 8;
  if ( (v239 >> (v235 - 8)) != 104 )
    goto save_state_and_return;
  v223 = v235 - 8;
LABEL_328:
  s->state = 13;
  while ( v223 <= 7 )
  {
    v224 = s->strm;
    if ( s->strm->avail_in == 0 )
      goto LABEL_416;
    v225 = s->bsBuff;
    v226 = *v224->next_in;
    s->bsLive = v223 + 8;
    s->bsBuff = (v225 << 8) | v226;
    ++v224->next_in;
    --s->strm->avail_in;
    if ( ++s->strm->total_in_lo32 == 0 )
      ++s->strm->total_in_hi32;
    v223 = s->bsLive;
  }
  v227 = s->bsBuff;
  s->bsLive = v223 - 8;
  v228 = (v227 >> (v223 - 8));
  if ( (v228 - 49) > 8 )
  {
    s->blockSize100k = v228;
    result = -5;
    goto save_state_and_return;
  }
  v229 = v228 - 48;
  zj = save_zj;
  s->blockSize100k = v229;
  v230 = 100000 * v229;
  nblock = save_nblock;
  ja = save_j;
  nnb = save_i;
  if ( s->smallDecompress )
  {
    v231 = zvec->bzalloc(zvec->opaque, 2 * v230, 1);
    blockSize100k = v1->blockSize100k;
    v1->ll16 = v231;
    v233 = zvec->bzalloc(zvec->opaque, (100000 * blockSize100k) >> 1, 1);
    v234 = v1->ll16 == 0;
    v1->ll4 = v233;
    save_i = nnb;
    save_j = ja;
    save_nblock = nblock;
    save_zj = zj;
    if ( v234 || v233 == 0 )
      goto LABEL_338;
  }
  else
  {
    v11 = zvec->bzalloc(zvec->opaque, 4 * v230, 1);
    save_i = nnb;
    v1->tt = v11;
    save_j = ja;
    save_nblock = nblock;
    save_zj = zj;
    if ( v11 == 0 )
    {
LABEL_338:
      result = -3;
      goto save_state_and_return;
    }
  }
LABEL_6:
  v1->state = 14;
  while ( 1 )
  {
    v15 = v1->bsLive;
    if ( v15 > 7 )
      break;
    v12 = v1->strm;
    if ( v1->strm->avail_in == 0 )
      goto LABEL_416;
    v13 = v1->bsBuff;
    v14 = *v12->next_in;
    v1->bsLive = v15 + 8;
    v1->bsBuff = (v13 << 8) | v14;
    ++v12->next_in;
    --v1->strm->avail_in;
    if ( ++v1->strm->total_in_lo32 == 0 )
      ++v1->strm->total_in_hi32;
  }
  v16 = v1->bsBuff;
  v1->bsLive = v15 - 8;
  v17 = v16 >> (v15 - 8);
  if ( v17 == 23 )
  {
    v193 = v15 - 8;
endhdr_2:
    v1->state = 42;
    while ( v193 <= 7 )
    {
      v194 = v1->strm;
      if ( v1->strm->avail_in == 0 )
        goto LABEL_416;
      v195 = v1->bsBuff;
      v196 = *v194->next_in;
      v1->bsLive = v193 + 8;
      v1->bsBuff = (v195 << 8) | v196;
      ++v194->next_in;
      --v1->strm->avail_in;
      if ( ++v1->strm->total_in_lo32 == 0 )
        ++v1->strm->total_in_hi32;
      v193 = v1->bsLive;
    }
    v197 = v1->bsBuff;
    result = -4;
    v1->bsLive = v193 - 8;
    if ( (v197 >> (v193 - 8)) != 114 )
      goto save_state_and_return;
    v198 = v193 - 8;
LABEL_317:
    v1->state = 43;
    while ( v198 <= 7 )
    {
      v219 = v1->strm;
      if ( v1->strm->avail_in == 0 )
        goto LABEL_416;
      v220 = v1->bsBuff;
      v221 = *v219->next_in;
      v1->bsLive = v198 + 8;
      v1->bsBuff = (v220 << 8) | v221;
      ++v219->next_in;
      --v1->strm->avail_in;
      if ( ++v1->strm->total_in_lo32 == 0 )
        ++v1->strm->total_in_hi32;
      v198 = v1->bsLive;
    }
    v222 = v1->bsBuff;
    result = -4;
    v1->bsLive = v198 - 8;
    if ( (v222 >> (v198 - 8)) != 69 )
      goto save_state_and_return;
    v213 = v198 - 8;
LABEL_308:
    v1->state = 44;
    while ( v213 <= 7 )
    {
      v214 = v1->strm;
      if ( v1->strm->avail_in == 0 )
        goto LABEL_416;
      v215 = v1->bsBuff;
      v216 = *v214->next_in;
      v1->bsLive = v213 + 8;
      v1->bsBuff = (v215 << 8) | v216;
      ++v214->next_in;
      --v1->strm->avail_in;
      if ( ++v1->strm->total_in_lo32 == 0 )
        ++v1->strm->total_in_hi32;
      v213 = v1->bsLive;
    }
    v217 = v1->bsBuff;
    result = -4;
    v1->bsLive = v213 - 8;
    if ( (v217 >> (v213 - 8)) != 56 )
      goto save_state_and_return;
    v218 = v213 - 8;
LABEL_358:
    v1->state = 45;
    while ( v218 <= 7 )
    {
      v246 = v1->strm;
      if ( v1->strm->avail_in == 0 )
        goto LABEL_416;
      v247 = v1->bsBuff;
      v248 = *v246->next_in;
      v1->bsLive = v218 + 8;
      v1->bsBuff = (v247 << 8) | v248;
      ++v246->next_in;
      --v1->strm->avail_in;
      if ( ++v1->strm->total_in_lo32 == 0 )
        ++v1->strm->total_in_hi32;
      v218 = v1->bsLive;
    }
    v249 = v1->bsBuff;
    result = -4;
    v1->bsLive = v218 - 8;
    if ( (v249 >> (v218 - 8)) != 80 )
      goto save_state_and_return;
    v240 = v218 - 8;
LABEL_349:
    v1->state = 46;
    while ( v240 <= 7 )
    {
      v241 = v1->strm;
      if ( v1->strm->avail_in == 0 )
        goto LABEL_416;
      v242 = v1->bsBuff;
      v243 = *v241->next_in;
      v1->bsLive = v240 + 8;
      v1->bsBuff = (v242 << 8) | v243;
      ++v241->next_in;
      --v1->strm->avail_in;
      if ( ++v1->strm->total_in_lo32 == 0 )
        ++v1->strm->total_in_hi32;
      v240 = v1->bsLive;
    }
    v244 = v1->bsBuff;
    result = -4;
    v1->bsLive = v240 - 8;
    if ( (v244 >> (v240 - 8)) != 0x90 )
      goto save_state_and_return;
    v1->storedCombinedCRC = 0;
    v245 = v240 - 8;
LABEL_409:
    v1->state = 47;
    while ( v245 <= 7 )
    {
      v278 = v1->strm;
      if ( v1->strm->avail_in == 0 )
        goto LABEL_416;
      v279 = v1->bsBuff;
      v280 = *v278->next_in;
      v1->bsLive = v245 + 8;
      v1->bsBuff = (v279 << 8) | v280;
      ++v278->next_in;
      --v1->strm->avail_in;
      if ( ++v1->strm->total_in_lo32 == 0 )
        ++v1->strm->total_in_hi32;
      v245 = v1->bsLive;
    }
    v281 = v1->bsBuff;
    storedCombinedCRC = v1->storedCombinedCRC;
    v1->bsLive = v245 - 8;
    v272 = v245 - 8;
    v1->storedCombinedCRC = (storedCombinedCRC << 8) | (v281 >> v272);
LABEL_401:
    v1->state = 48;
    while ( v272 <= 7 )
    {
      v273 = v1->strm;
      if ( v1->strm->avail_in == 0 )
        goto LABEL_416;
      v274 = v1->bsBuff;
      v275 = *v273->next_in;
      v1->bsLive = v272 + 8;
      v1->bsBuff = (v274 << 8) | v275;
      ++v273->next_in;
      --v1->strm->avail_in;
      if ( ++v1->strm->total_in_lo32 == 0 )
        ++v1->strm->total_in_hi32;
      v272 = v1->bsLive;
    }
    v276 = v1->bsBuff;
    v277 = v1->storedCombinedCRC;
    v1->bsLive = v272 - 8;
    v256 = v272 - 8;
    v1->storedCombinedCRC = (v277 << 8) | (v276 >> v256);
LABEL_375:
    v1->state = 49;
    while ( v256 <= 7 )
    {
      v257 = v1->strm;
      if ( v1->strm->avail_in == 0 )
        goto LABEL_416;
      v258 = v1->bsBuff;
      v259 = *v257->next_in;
      v1->bsLive = v256 + 8;
      v1->bsBuff = (v258 << 8) | v259;
      ++v257->next_in;
      --v1->strm->avail_in;
      if ( ++v1->strm->total_in_lo32 == 0 )
        ++v1->strm->total_in_hi32;
      v256 = v1->bsLive;
    }
    v260 = v1->bsBuff;
    v261 = v1->storedCombinedCRC;
    v1->bsLive = v256 - 8;
    v250 = v256 - 8;
    v1->storedCombinedCRC = (v261 << 8) | (v260 >> v250);
LABEL_367:
    v1->state = 50;
    while ( 1 )
    {
      if ( v250 > 7 )
      {
        v254 = v1->bsBuff;
        v1->state = 1;
        v255 = v1->storedCombinedCRC;
        v1->bsLive = v250 - 8;
        v1->storedCombinedCRC = (v255 << 8) | (v254 >> (v250 - 8));
        result = 4;
        goto save_state_and_return;
      }
      v251 = v1->strm;
      if ( v1->strm->avail_in == 0 )
        break;
      v252 = v1->bsBuff;
      v253 = *v251->next_in;
      v1->bsLive = v250 + 8;
      v1->bsBuff = (v252 << 8) | v253;
      ++v251->next_in;
      --v1->strm->avail_in;
      if ( ++v1->strm->total_in_lo32 == 0 )
        ++v1->strm->total_in_hi32;
      v250 = v1->bsLive;
    }
LABEL_416:
    result = 0;
    goto save_state_and_return;
  }
  result = -4;
  if ( v17 != 49 )
    goto save_state_and_return;
  v19 = v15 - 8;
LABEL_262:
  v1->state = 15;
  while ( v19 <= 7 )
  {
    v189 = v1->strm;
    if ( v1->strm->avail_in == 0 )
      goto LABEL_416;
    v190 = v1->bsBuff;
    v191 = *v189->next_in;
    v1->bsLive = v19 + 8;
    v1->bsBuff = (v190 << 8) | v191;
    ++v189->next_in;
    --v1->strm->avail_in;
    if ( ++v1->strm->total_in_lo32 == 0 )
      ++v1->strm->total_in_hi32;
    v19 = v1->bsLive;
  }
  v192 = v1->bsBuff;
  result = -4;
  v1->bsLive = v19 - 8;
  if ( (v192 >> (v19 - 8)) != 65 )
    goto save_state_and_return;
  v184 = v19 - 8;
LABEL_253:
  v1->state = 16;
  while ( v184 <= 7 )
  {
    v185 = v1->strm;
    if ( v1->strm->avail_in == 0 )
      goto LABEL_416;
    v186 = v1->bsBuff;
    v187 = *v185->next_in;
    v1->bsLive = v184 + 8;
    v1->bsBuff = (v186 << 8) | v187;
    ++v185->next_in;
    --v1->strm->avail_in;
    if ( ++v1->strm->total_in_lo32 == 0 )
      ++v1->strm->total_in_hi32;
    v184 = v1->bsLive;
  }
  v188 = v1->bsBuff;
  result = -4;
  v1->bsLive = v184 - 8;
  if ( (v188 >> (v184 - 8)) != 89 )
    goto save_state_and_return;
  v173 = v184 - 8;
LABEL_236:
  v1->state = 17;
  while ( v173 <= 7 )
  {
    v174 = v1->strm;
    if ( v1->strm->avail_in == 0 )
      goto LABEL_416;
    v175 = v1->bsBuff;
    v176 = *v174->next_in;
    v1->bsLive = v173 + 8;
    v1->bsBuff = (v175 << 8) | v176;
    ++v174->next_in;
    --v1->strm->avail_in;
    if ( ++v1->strm->total_in_lo32 == 0 )
      ++v1->strm->total_in_hi32;
    v173 = v1->bsLive;
  }
  v177 = v1->bsBuff;
  result = -4;
  v1->bsLive = v173 - 8;
  if ( (v177 >> (v173 - 8)) != 38 )
    goto save_state_and_return;
  v168 = v173 - 8;
LABEL_227:
  v1->state = 18;
  while ( v168 <= 7 )
  {
    v169 = v1->strm;
    if ( v1->strm->avail_in == 0 )
      goto LABEL_416;
    v170 = v1->bsBuff;
    v171 = *v169->next_in;
    v1->bsLive = v168 + 8;
    v1->bsBuff = (v170 << 8) | v171;
    ++v169->next_in;
    --v1->strm->avail_in;
    if ( ++v1->strm->total_in_lo32 == 0 )
      ++v1->strm->total_in_hi32;
    v168 = v1->bsLive;
  }
  v172 = v1->bsBuff;
  result = -4;
  v1->bsLive = v168 - 8;
  if ( (v172 >> (v168 - 8)) != 83 )
    goto save_state_and_return;
  v161 = v168 - 8;
LABEL_216:
  v1->state = 19;
  while ( v161 <= 7 )
  {
    v162 = v1->strm;
    if ( v1->strm->avail_in == 0 )
      goto LABEL_416;
    v163 = v1->bsBuff;
    v164 = *v162->next_in;
    v1->bsLive = v161 + 8;
    v1->bsBuff = (v163 << 8) | v164;
    ++v162->next_in;
    --v1->strm->avail_in;
    if ( ++v1->strm->total_in_lo32 == 0 )
      ++v1->strm->total_in_hi32;
    v161 = v1->bsLive;
  }
  v165 = v1->bsBuff;
  v154 = v161 - 8;
  result = -4;
  v1->bsLive = v154;
  if ( (v165 >> v154) != 89 )
    goto save_state_and_return;
  v166 = v1->verbosity <= 1;
  v167 = v1->currBlockNo + 1;
  v1->currBlockNo = v167;
  if ( !v166 )
  {
    nblocka = save_zj;
    jb = save_nblock;
    nnd = save_j;
    zvecc = save_i;
    __fprintf_chk(stderr, 1, "\n    [%d: huff+mtf ", v167);
    v154 = v1->bsLive;
    save_zj = nblocka;
    save_nblock = jb;
    save_j = nnd;
    save_i = zvecc;
  }
  v1->storedBlockCRC = 0;
LABEL_208:
  v1->state = 20;
  while ( v154 <= 7 )
  {
    v155 = v1->strm;
    if ( v1->strm->avail_in == 0 )
      goto LABEL_416;
    v156 = v1->bsBuff;
    v157 = *v155->next_in;
    v1->bsLive = v154 + 8;
    v1->bsBuff = (v156 << 8) | v157;
    ++v155->next_in;
    --v1->strm->avail_in;
    if ( ++v1->strm->total_in_lo32 == 0 )
      ++v1->strm->total_in_hi32;
    v154 = v1->bsLive;
  }
  v158 = v1->bsBuff;
  storedBlockCRC = v1->storedBlockCRC;
  v1->bsLive = v154 - 8;
  v160 = v154 - 8;
  v1->storedBlockCRC = (storedBlockCRC << 8) | (v158 >> v160);
LABEL_280:
  v1->state = 21;
  while ( v160 <= 7 )
  {
    v199 = v1->strm;
    if ( v1->strm->avail_in == 0 )
      goto LABEL_416;
    v200 = v1->bsBuff;
    v201 = *v199->next_in;
    v1->bsLive = v160 + 8;
    v1->bsBuff = (v200 << 8) | v201;
    ++v199->next_in;
    --v1->strm->avail_in;
    if ( ++v1->strm->total_in_lo32 == 0 )
      ++v1->strm->total_in_hi32;
    v160 = v1->bsLive;
  }
  v202 = v1->bsBuff;
  v203 = v1->storedBlockCRC;
  v1->bsLive = v160 - 8;
  v178 = v160 - 8;
  v1->storedBlockCRC = (v203 << 8) | (v202 >> v178);
LABEL_245:
  v1->state = 22;
  while ( v178 <= 7 )
  {
    v179 = v1->strm;
    if ( v1->strm->avail_in == 0 )
      goto LABEL_416;
    v180 = v1->bsBuff;
    v181 = *v179->next_in;
    v1->bsLive = v178 + 8;
    v1->bsBuff = (v180 << 8) | v181;
    ++v179->next_in;
    --v1->strm->avail_in;
    if ( ++v1->strm->total_in_lo32 == 0 )
      ++v1->strm->total_in_hi32;
    v178 = v1->bsLive;
  }
  v182 = v1->bsBuff;
  v183 = v1->storedBlockCRC;
  v1->bsLive = v178 - 8;
  v148 = v178 - 8;
  v1->storedBlockCRC = (v183 << 8) | (v182 >> v148);
LABEL_200:
  v1->state = 23;
  while ( v148 <= 7 )
  {
    v149 = v1->strm;
    if ( v1->strm->avail_in == 0 )
      goto LABEL_416;
    v150 = v1->bsBuff;
    v151 = *v149->next_in;
    v1->bsLive = v148 + 8;
    v1->bsBuff = (v150 << 8) | v151;
    ++v149->next_in;
    --v1->strm->avail_in;
    if ( ++v1->strm->total_in_lo32 == 0 )
      ++v1->strm->total_in_hi32;
    v148 = v1->bsLive;
  }
  v152 = v1->bsBuff;
  v153 = v1->storedBlockCRC;
  v1->bsLive = v148 - 8;
  v74 = v148 - 8;
  v1->storedBlockCRC = (v153 << 8) | (v152 >> v74);
LABEL_88:
  v1->state = 24;
  while ( v74 <= 0 )
  {
    v75 = v1->strm;
    if ( v1->strm->avail_in == 0 )
      goto LABEL_416;
    v76 = v1->bsBuff;
    v77 = *v75->next_in;
    v1->bsLive = v74 + 8;
    v1->bsBuff = (v76 << 8) | v77;
    ++v75->next_in;
    --v1->strm->avail_in;
    if ( ++v1->strm->total_in_lo32 == 0 )
      ++v1->strm->total_in_hi32;
    v74 = v1->bsLive;
  }
  v78 = v1->bsBuff;
  v1->origPtr = 0;
  v1->bsLive = v74 - 1;
  v79 = v74 - 1;
  v1->blockRandomised = (v78 >> v79) & 1;
LABEL_95:
  v1->state = 25;
  while ( v79 <= 7 )
  {
    v80 = v1->strm;
    if ( v1->strm->avail_in == 0 )
      goto LABEL_416;
    v81 = v1->bsBuff;
    v82 = *v80->next_in;
    v1->bsLive = v79 + 8;
    v1->bsBuff = (v81 << 8) | v82;
    ++v80->next_in;
    --v1->strm->avail_in;
    if ( ++v1->strm->total_in_lo32 == 0 )
      ++v1->strm->total_in_hi32;
    v79 = v1->bsLive;
  }
  v83 = v1->bsBuff;
  origPtr = v1->origPtr;
  v1->bsLive = v79 - 8;
  v85 = v79 - 8;
  v1->origPtr = (origPtr << 8) | (v83 >> v85);
LABEL_102:
  v1->state = 26;
  while ( v85 <= 7 )
  {
    v86 = v1->strm;
    if ( v1->strm->avail_in == 0 )
      goto LABEL_416;
    v87 = v1->bsBuff;
    v88 = *v86->next_in;
    v1->bsLive = v85 + 8;
    v1->bsBuff = (v87 << 8) | v88;
    ++v86->next_in;
    --v1->strm->avail_in;
    if ( ++v1->strm->total_in_lo32 == 0 )
      ++v1->strm->total_in_hi32;
    v85 = v1->bsLive;
  }
  v89 = v1->bsBuff;
  v90 = v1->origPtr;
  v1->bsLive = v85 - 8;
  v91 = v85 - 8;
  v1->origPtr = (v90 << 8) | (v89 >> v91);
LABEL_109:
  v1->state = 27;
  while ( v91 <= 7 )
  {
    v92 = v1->strm;
    if ( v1->strm->avail_in == 0 )
      goto LABEL_416;
    v93 = v1->bsBuff;
    v94 = *v92->next_in;
    v1->bsLive = v91 + 8;
    v1->bsBuff = (v93 << 8) | v94;
    ++v92->next_in;
    --v1->strm->avail_in;
    if ( ++v1->strm->total_in_lo32 == 0 )
      ++v1->strm->total_in_hi32;
    v91 = v1->bsLive;
  }
  v95 = v1->bsBuff;
  v96 = v1->origPtr;
  v1->bsLive = v91 - 8;
  v97 = (v96 << 8) | (v95 >> (v91 - 8));
  v1->origPtr = v97;
  if ( v97 < 0 || v97 > 100000 * v1->blockSize100k + 10 )
    goto LABEL_296;
  v98 = v91 - 8;
  for ( save_i = 0; save_i <= 15; ++save_i )
  {
LABEL_118:
    v1->state = 28;
    while ( v98 <= 0 )
    {
      v99 = v1->strm;
      if ( v1->strm->avail_in == 0 )
        goto LABEL_416;
      v100 = v1->bsBuff;
      v101 = *v99->next_in;
      v1->bsLive = v98 + 8;
      v1->bsBuff = (v100 << 8) | v101;
      ++v99->next_in;
      --v1->strm->avail_in;
      if ( ++v1->strm->total_in_lo32 == 0 )
        ++v1->strm->total_in_hi32;
      v98 = v1->bsLive;
    }
    v102 = v1->bsBuff;
    v1->bsLive = --v98;
    if ( _bittest(&v102, v98) )
      v1->inUse16[save_i] = 1;
    else
      v1->inUse16[save_i] = 0;
  }
  for ( i = 0; i != 256; ++i )
    v1->inUse[i] = 0;
  for ( save_i = 0; save_i <= 15; ++save_i )
  {
    if ( v1->inUse16[save_i] != 0 )
    {
      save_j = 0;
LABEL_132:
      v104 = v1->bsLive;
      do
      {
        v1->state = 29;
        while ( v104 <= 0 )
        {
          v105 = v1->strm;
          if ( v1->strm->avail_in == 0 )
            goto LABEL_416;
          v106 = v1->bsBuff;
          v107 = *v105->next_in;
          v1->bsLive = v104 + 8;
          v1->bsBuff = (v106 << 8) | v107;
          ++v105->next_in;
          --v1->strm->avail_in;
          if ( ++v1->strm->total_in_lo32 == 0 )
            ++v1->strm->total_in_hi32;
          v104 = v1->bsLive;
        }
        v108 = v1->bsBuff;
        v1->bsLive = --v104;
        if ( _bittest(&v108, v104) )
          v1->inUse[16 * save_i + save_j] = 1;
        ++save_j;
      }
      while ( save_j <= 15 );
    }
  }
  v1->nInUse = 0;
  v109 = 0;
  v110 = 0;
  do
  {
    if ( v1->inUse[v109] != 0 )
    {
      v111 = v110++;
      v1->seqToUnseq[v111] = v109;
      v1->nInUse = v110;
    }
    ++v109;
  }
  while ( v109 != 256 );
  if ( v110 == 0 )
    goto LABEL_296;
  alphaSize = v110 + 2;
LABEL_149:
  v1->state = 30;
  while ( 1 )
  {
    v115 = v1->bsLive;
    if ( v115 > 2 )
      break;
    v112 = v1->strm;
    if ( v1->strm->avail_in == 0 )
      goto LABEL_416;
    v113 = v1->bsBuff;
    v114 = *v112->next_in;
    v1->bsLive = v115 + 8;
    v1->bsBuff = (v113 << 8) | v114;
    ++v112->next_in;
    --v1->strm->avail_in;
    if ( ++v1->strm->total_in_lo32 == 0 )
      ++v1->strm->total_in_hi32;
  }
  v116 = v1->bsBuff;
  v1->bsLive = v115 - 3;
  save_nGroups = (v116 >> (v115 - 3)) & 7;
  if ( (save_nGroups - 2) > 4 )
    goto LABEL_296;
  v117 = v115 - 3;
LABEL_299:
  v1->state = 31;
  while ( v117 <= 14 )
  {
    v209 = v1->strm;
    if ( v1->strm->avail_in == 0 )
      goto LABEL_416;
    v210 = v1->bsBuff;
    v211 = *v209->next_in;
    v1->bsLive = v117 + 8;
    v1->bsBuff = (v210 << 8) | v211;
    ++v209->next_in;
    --v1->strm->avail_in;
    if ( ++v1->strm->total_in_lo32 == 0 )
      ++v1->strm->total_in_hi32;
    v117 = v1->bsLive;
  }
  v212 = v1->bsBuff;
  v1->bsLive = v117 - 15;
  nSelectors = (v212 >> (v117 - 15)) & 0x7FFF;
  if ( nSelectors == 0 )
    goto LABEL_296;
  v204 = v117 - 15;
  save_j = 0;
  save_i = 0;
  while ( 1 )
  {
LABEL_288:
    while ( 1 )
    {
      v1->state = 32;
      while ( v204 <= 0 )
      {
        v205 = v1->strm;
        if ( v1->strm->avail_in == 0 )
          goto LABEL_416;
        v206 = v1->bsBuff;
        v207 = *v205->next_in;
        v1->bsLive = v204 + 8;
        v1->bsBuff = (v206 << 8) | v207;
        ++v205->next_in;
        --v1->strm->avail_in;
        if ( ++v1->strm->total_in_lo32 == 0 )
          ++v1->strm->total_in_hi32;
        v204 = v1->bsLive;
      }
      v208 = v1->bsBuff;
      v1->bsLive = --v204;
      if ( !_bittest(&v208, v204) )
        break;
      if ( save_nGroups <= ++save_j )
        goto LABEL_296;
    }
    v338 = save_i++;
    v1->selectorMtf[v338] = save_j;
    if ( save_i >= nSelectors )
      break;
    save_j = 0;
  }
  v339 = 0;
  for ( k = 0; save_nGroups > k; v339 = k )
    pos[v339] = k++;
  if ( nSelectors <= 0 )
  {
    save_i = 0;
  }
  else
  {
    selectorMtf = v1->selectorMtf;
    do
    {
      v342 = *selectorMtf;
      v343 = *selectorMtf;
      v344 = pos[v343];
      if ( *selectorMtf != 0 )
      {
        while ( 1 )
        {
          --v342;
          pos[v343] = pos[v343 - 1];
          if ( v342 == 0 )
            break;
          v343 = v342;
        }
      }
      *(selectorMtf - 18002) = v344;
      ++selectorMtf;
      pos[0] = v344;
    }
    while ( selectorMtf != &v1->selectorMtf[nSelectors - 1 + 1] );
    save_i = nSelectors;
  }
  for ( t = 0; t < save_nGroups; ++t )
  {
LABEL_156:
    v1->state = 33;
    while ( 1 )
    {
      v121 = v1->bsLive;
      if ( v121 > 4 )
        break;
      v118 = v1->strm;
      if ( v1->strm->avail_in == 0 )
        goto LABEL_416;
      v119 = v1->bsBuff;
      v120 = *v118->next_in;
      v1->bsLive = v121 + 8;
      v1->bsBuff = (v119 << 8) | v120;
      ++v118->next_in;
      --v1->strm->avail_in;
      if ( ++v1->strm->total_in_lo32 == 0 )
        ++v1->strm->total_in_hi32;
    }
    v122 = v1->bsBuff;
    save_i = 0;
    v1->bsLive = v121 - 5;
    curr = (v122 >> (v121 - 5)) & 0x1F;
    while ( save_i < alphaSize )
    {
      while ( 1 )
      {
        if ( (curr - 1) > 0x13 )
          goto LABEL_296;
LABEL_43:
        v1->state = 34;
        while ( 1 )
        {
          v40 = v1->bsLive;
          if ( v40 > 0 )
            break;
          v37 = v1->strm;
          if ( v1->strm->avail_in == 0 )
            goto LABEL_416;
          v38 = v1->bsBuff;
          v39 = *v37->next_in;
          v1->bsLive = v40 + 8;
          v1->bsBuff = (v38 << 8) | v39;
          ++v37->next_in;
          --v1->strm->avail_in;
          if ( ++v1->strm->total_in_lo32 == 0 )
            ++v1->strm->total_in_hi32;
        }
        v41 = v1->bsBuff;
        v31 = v40 - 1;
        v1->bsLive = v31;
        if ( !_bittest(&v41, v31) )
          break;
LABEL_33:
        v1->state = 35;
        while ( v31 <= 0 )
        {
          v32 = v1->strm;
          if ( v1->strm->avail_in == 0 )
            goto LABEL_416;
          v33 = v1->bsBuff;
          v34 = *v32->next_in;
          v1->bsLive = v31 + 8;
          v1->bsBuff = (v33 << 8) | v34;
          ++v32->next_in;
          --v1->strm->avail_in;
          if ( ++v1->strm->total_in_lo32 == 0 )
            ++v1->strm->total_in_hi32;
          v31 = v1->bsLive;
        }
        v35 = v1->bsBuff;
        v1->bsLive = v31 - 1;
        v36 = curr - 1;
        if ( ((v35 >> (v31 - 1)) & 1) == 0 )
          v36 = curr + 1;
        curr = v36;
      }
      v42 = save_i++;
      v1->len[t][v42] = curr;
    }
  }
  if ( save_nGroups <= 0 )
  {
    t = 0;
  }
  else
  {
    zna = save_zn;
    zveca = save_zvec;
    v43 = v1;
    ta = save_j;
    v44 = v1->limit[0];
    j = v1;
    es_0a = save_es;
    nn = save_zj;
    v45 = v1->limit[(save_nGroups - 1) + 1];
    v46 = v1->len[0];
    EOBa = v45;
    do
    {
      if ( alphaSize <= 0 )
      {
        v48 = 0;
        v49 = 32;
      }
      else
      {
        v47 = v46;
        v48 = 0;
        v49 = 32;
        do
        {
          v50 = *v47;
          if ( v48 < v50 )
            v48 = *v47;
          if ( v49 > v50 )
            v49 = *v47;
          ++v47;
        }
        while ( v47 != &v46[alphaSize - 1 + 1] );
      }
      v51 = v44 + 3096;
      v52 = v46;
      v53 = v44 + 1548;
      v54 = v44;
      v44 += 258;
      v46 += 258;
      v43 = (v43 + 4);
      BZ2_hbCreateDecodeTables(v54, v53, v51, v52, v49, v48, alphaSize);
      v43->perm[5][257] = v49;
    }
    while ( v44 != EOBa );
    save_es = es_0a;
    save_zn = zna;
    save_zvec = zveca;
    save_zj = nn;
    v1 = j;
    save_j = ta;
    t = save_nGroups;
  }
  EOB = v1->nInUse + 1;
  zn = 100000 * v1->blockSize100k;
  for ( m = 0; m != 256; ++m )
    v1->unzftab[m] = 0;
  v56 = v1;
  for ( n = 4080; n != 3824; n -= 16 )
  {
    v58 = n + 15;
    v59 = 15;
    do
    {
      v60 = n + v59--;
      v61 = v58--;
      v1->mtfa[v61] = v60;
    }
    while ( v59 != -1 );
    v56->mtfbase[15] = n;
    v56 = (v56 - 4);
  }
  if ( nSelectors <= 0 )
  {
    save_nblock = 0;
    groupPos = 0;
    save_i = 256;
    es_0 = 0;
    result = -4;
    goto save_state_and_return;
  }
  v62 = v1->selector[0];
  save_nblock = 0;
  save_i = 256;
  groupPos = 49;
  es_0 = 0;
  save_zn = v1->minLens[v62];
  gSel = v1->selector[0];
  v62 *= 1032;
  gLimit = (v1->limit[0] + v62);
  gPerm = (v1->perm[0] + v62);
  gBase = (v1->base[0] + v62);
  gMinlen = save_zn;
LABEL_72:
  v1->state = 36;
  while ( 1 )
  {
    v66 = v1->bsLive;
    if ( save_zn <= v66 )
      break;
    v63 = v1->strm;
    if ( v1->strm->avail_in == 0 )
      goto LABEL_416;
    v64 = v1->bsBuff;
    v65 = *v63->next_in;
    v1->bsLive = v66 + 8;
    v1->bsBuff = (v64 << 8) | v65;
    ++v63->next_in;
    --v1->strm->avail_in;
    if ( ++v1->strm->total_in_lo32 == 0 )
      ++v1->strm->total_in_hi32;
  }
  v67 = v1->bsBuff;
  v68 = v66 - save_zn;
  v1->bsLive = v68;
  for ( save_zvec = ((1 << save_zn) - 1) & (v67 >> v68); ; save_zvec = save_zj | (2 * save_zvec) )
  {
    if ( save_zn > 20 )
      goto LABEL_296;
    v21 = save_zn;
    if ( save_zvec <= gLimit[save_zn] )
      break;
    ++save_zn;
LABEL_26:
    v1->state = 37;
    while ( 1 )
    {
      v30 = v1->bsLive;
      if ( v30 > 0 )
        break;
      v27 = v1->strm;
      if ( v1->strm->avail_in == 0 )
        goto LABEL_416;
      v28 = v1->bsBuff;
      v29 = *v27->next_in;
      v1->bsLive = v30 + 8;
      v1->bsBuff = (v28 << 8) | v29;
      ++v27->next_in;
      --v1->strm->avail_in;
      if ( ++v1->strm->total_in_lo32 == 0 )
        ++v1->strm->total_in_hi32;
    }
    v26 = v1->bsBuff;
    v1->bsLive = v30 - 1;
    save_zj = (v26 >> (v30 - 1)) & 1;
  }
LABEL_162:
  v123 = save_zvec - gBase[v21];
  if ( v123 > 0x101 )
  {
LABEL_296:
    result = -4;
    goto save_state_and_return;
  }
  nextSym = gPerm[v123];
  while ( nextSym != EOB )
  {
    if ( nextSym > 1 )
    {
      if ( zn <= save_nblock )
        goto LABEL_296;
      v124 = nextSym - 1;
      v125 = nextSym - 1;
      if ( nextSym - 1 > 0xF )
      {
        v290 = v124 >> 4;
        v291 = v1->mtfbase[v290];
        v292 = v291 + (v124 & 0xF);
        v293 = v292;
        zvecb = v1->mtfa[v292];
        if ( v291 < v292 )
        {
          while ( 1 )
          {
            v1->mtfa[v293] = v1->mtfa[--v292];
            if ( v292 == v291 )
              break;
            v293 = v292;
          }
        }
        v294 = v291 + 1;
        v295 = v124 >> 4;
        v1->mtfbase[v290] = v291 + 1;
        do
        {
          --v295;
          v1->mtfbase[v290] = v294 - 1;
          v290 = v295;
          v296 = v294 - 1;
          v294 = v1->mtfbase[v295];
          v1->mtfa[v296] = v1->mtfa[v294 + 15];
        }
        while ( v295 != 0 );
        v297 = v1->mtfbase[0] - 1;
        v234 = v1->mtfbase[0] == 1;
        v1->mtfbase[0] = v297;
        v1->mtfa[v297] = zvecb;
        if ( v234 )
        {
          nnc = v1;
          LOWORD(v297) = 4095;
          do
          {
            v298 = v297 - 16;
            v299 = nnc->mtfbase[15] + 15 - v297;
            do
            {
              v300 = v1->mtfa[v299 + v297];
              v301 = v297--;
              v1->mtfa[v301] = v300;
            }
            while ( v297 != v298 );
            v302 = nnc;
            nnc = (nnc - 4);
            v302->mtfbase[15] = v297 + 1;
          }
          while ( v297 != 3839 );
        }
      }
      else
      {
        v126 = v1->mtfbase[0];
        zvecb = v1->mtfa[v124 + v126];
        if ( v124 > 3 )
        {
          nna = nextSym - 1;
          do
          {
            v127 = nna;
            nna -= 4;
            v128 = v126 + v127;
            v129 = v128 - 1;
            v1->mtfa[v128] = v1->mtfa[v129];
            v130 = v128 - 2;
            v1->mtfa[v129] = v1->mtfa[v130];
            v1->mtfa[v130] = v1->seqToUnseq[v128 + 253];
            v1->seqToUnseq[v128 + 253] = v1->seqToUnseq[v128 + 252];
          }
          while ( nna > 3 );
          v125 = v124 - ((nextSym - 5) & 0xFFFFFFFC) - 4;
        }
        if ( v125 != 0 )
        {
          v131 = v126 - 1 + v125;
          do
          {
            v132 = v1->mtfa[v131];
            v133 = (v131-- + 1);
            v1->mtfa[v133] = v132;
          }
          while ( v126 - 1 != v131 );
        }
        v1->mtfa[v126] = zvecb;
      }
      v134 = v1->seqToUnseq[zvecb];
      ++v1->unzftab[v134];
      if ( v1->smallDecompress )
        v1->ll16[save_nblock] = v134;
      else
        v1->tt[save_nblock] = v134;
      ++save_nblock;
      if ( groupPos != 0 )
      {
        --groupPos;
        save_zn = gMinlen;
      }
      else
      {
        if ( nSelectors <= ++es_0 )
          goto LABEL_296;
        v289 = v1->selector[es_0];
        groupPos = 49;
        gSel = v1->selector[es_0];
        save_zn = v1->minLens[v289];
        v289 *= 1032;
        gLimit = (v1->limit[0] + v289);
        gPerm = (v1->perm[0] + v289);
        gBase = (v1->base[0] + v289);
      }
      gMinlen = save_zn;
LABEL_181:
      v1->state = 40;
      while ( 1 )
      {
        v138 = v1->bsLive;
        if ( save_zn <= v138 )
          break;
        v135 = v1->strm;
        if ( v1->strm->avail_in == 0 )
          goto LABEL_416;
        v136 = v1->bsBuff;
        v137 = *v135->next_in;
        v1->bsLive = v138 + 8;
        v1->bsBuff = (v136 << 8) | v137;
        ++v135->next_in;
        --v1->strm->avail_in;
        if ( ++v1->strm->total_in_lo32 == 0 )
          ++v1->strm->total_in_hi32;
      }
      v139 = v1->bsBuff;
      v140 = v138 - save_zn;
      v1->bsLive = v140;
      save_zvec = ((1 << save_zn) - 1) & (v139 >> v140);
      while ( save_zn <= 20 )
      {
        v21 = save_zn;
        if ( save_zvec <= gLimit[save_zn] )
          goto LABEL_162;
        ++save_zn;
LABEL_17:
        v1->state = 41;
        while ( 1 )
        {
          v25 = v1->bsLive;
          if ( v25 > 0 )
            break;
          v22 = v1->strm;
          if ( v1->strm->avail_in == 0 )
            goto LABEL_416;
          v23 = v1->bsBuff;
          v24 = *v22->next_in;
          v1->bsLive = v25 + 8;
          v1->bsBuff = (v23 << 8) | v24;
          ++v22->next_in;
          --v1->strm->avail_in;
          if ( ++v1->strm->total_in_lo32 == 0 )
            ++v1->strm->total_in_hi32;
        }
        v20 = v1->bsBuff;
        v1->bsLive = v25 - 1;
        save_zj = (v20 >> (v25 - 1)) & 1;
        save_zvec = save_zj | (2 * save_zvec);
      }
      goto LABEL_296;
    }
    v141 = 2;
    save_es = -1;
    N = 1;
    while ( 2 )
    {
      if ( nextSym != 0 )
        save_es += v141;
      else
        save_es += N;
      if ( groupPos != 0 )
      {
        --groupPos;
        save_zn = gMinlen;
      }
      else
      {
        if ( nSelectors <= ++es_0 )
        {
          N = v141;
          result = -4;
          goto save_state_and_return;
        }
        groupPos = 49;
        gSel = v1->selector[es_0];
        save_zn = v1->minLens[v1->selector[es_0]];
        v311 = v1->selector[es_0];
        gLimit = v1->limit[v311];
        gPerm = v1->perm[v311];
        gBase = v1->base[v311];
      }
      gMinlen = save_zn;
      N = v141;
LABEL_193:
      v1->state = 38;
      while ( 1 )
      {
        v145 = v1->bsLive;
        if ( save_zn <= v145 )
          break;
        v142 = v1->strm;
        if ( v1->strm->avail_in == 0 )
          goto LABEL_416;
        v143 = v1->bsBuff;
        v144 = *v142->next_in;
        v1->bsLive = v145 + 8;
        v1->bsBuff = (v143 << 8) | v144;
        ++v142->next_in;
        --v1->strm->avail_in;
        if ( ++v1->strm->total_in_lo32 == 0 )
          ++v1->strm->total_in_hi32;
      }
      v146 = v1->bsBuff;
      v147 = v145 - save_zn;
      v1->bsLive = v147;
      for ( save_zvec = ((1 << save_zn) - 1) & (v146 >> v147); ; save_zvec = save_zj | (2 * save_zvec) )
      {
        if ( save_zn > 20 )
          goto LABEL_296;
        if ( save_zvec <= gLimit[save_zn] )
          break;
        ++save_zn;
LABEL_81:
        v1->state = 39;
        while ( 1 )
        {
          v73 = v1->bsLive;
          if ( v73 > 0 )
            break;
          v70 = v1->strm;
          if ( v1->strm->avail_in == 0 )
            goto LABEL_416;
          v71 = v1->bsBuff;
          v72 = *v70->next_in;
          v1->bsLive = v73 + 8;
          v1->bsBuff = (v71 << 8) | v72;
          ++v70->next_in;
          --v1->strm->avail_in;
          if ( ++v1->strm->total_in_lo32 == 0 )
            ++v1->strm->total_in_hi32;
        }
        v69 = v1->bsBuff;
        v1->bsLive = v73 - 1;
        save_zj = (v69 >> (v73 - 1)) & 1;
      }
      v283 = save_zvec - gBase[save_zn];
      if ( v283 > 0x101 )
        goto LABEL_296;
      nextSym = gPerm[v283];
      if ( nextSym <= 1 )
      {
        v141 = 2 * N;
        continue;
      }
      break;
    }
    v284 = save_es + 1;
    v285 = v1->seqToUnseq[v1->mtfa[v1->mtfbase[0]]];
    v1->unzftab[v285] += save_es + 1;
    if ( v1->smallDecompress )
    {
      if ( v284 <= 0 )
      {
LABEL_512:
        ++save_es;
      }
      else
      {
        if ( zn <= save_nblock )
        {
LABEL_511:
          ++save_es;
          goto LABEL_296;
        }
        v308 = v285;
        v309 = save_nblock + save_es - zn + 1;
        v310 = save_nblock;
        ++save_es;
        while ( 1 )
        {
          ++save_nblock;
          --save_es;
          v1->ll16[v310] = v308;
          if ( save_es == 0 )
            break;
          ++v310;
          if ( save_es == v309 )
            goto LABEL_296;
        }
      }
    }
    else
    {
      if ( v284 <= 0 )
        goto LABEL_512;
      if ( zn <= save_nblock )
        goto LABEL_511;
      v286 = v285;
      v287 = save_nblock + save_es - zn + 1;
      v288 = save_nblock;
      ++save_es;
      while ( 1 )
      {
        ++save_nblock;
        --save_es;
        v1->tt[v288] = v286;
        if ( save_es == 0 )
          break;
        ++v288;
        if ( save_es == v287 )
          goto LABEL_296;
      }
    }
  }
  v303 = v1->origPtr;
  if ( v303 < 0 || save_nblock <= v303 )
  {
    EOB = nextSym;
    goto LABEL_296;
  }
  v166 = v1->verbosity <= 1;
  v1->state_out_len = 0;
  v1->state_out_ch = 0;
  v1->calculatedBlockCRC = -1;
  v1->state = 2;
  if ( !v166 )
  {
    EOBb = save_j;
    nne = save_zj;
    zvecd = save_nblock;
    fwrite("rt+rld", 1u, 6u, stderr);
    save_zj = nne;
    save_nblock = zvecd;
    save_j = EOBb;
  }
  v1->cftab[0] = 0;
  for ( ii = 0; ii != 1024; ii += 4 )
    *(&v1->cftab[1] + ii) = *(v1->unzftab + ii);
  LOWORD(ii) = 0;
  do
  {
    *(&v1->cftab[1] + ii) += *(v1->cftab + ii);
    ii += 4;
  }
  while ( ii != 1024 );
  if ( !v1->smallDecompress )
  {
    v312 = 0;
    do
    {
      tt = v1->tt;
      v314 = v312 << 8;
      v315 = LOBYTE(tt[v312++]);
      v316 = v1 + 4 * v315;
      tt[(*(v316 + 274))++] |= v314;
    }
    while ( save_nblock > v312 );
    v317 = v1->tt;
    save_i = 1;
    if ( save_nblock > 0 )
      save_i = save_nblock;
    v318 = v317[v1->origPtr];
    v1->nblock_used = 0;
    v319 = v318 >> 8;
    v234 = !v1->blockRandomised;
    v1->tPos = v319;
    if ( !v234 )
    {
      v1->rNToGo = 0;
      v1->rTPos = 0;
      v320 = v317[v319];
      v1->nblock_used = 1;
      v1->tPos = v320 >> 8;
      v321 = BZ2_rNums[0];
      v1->rTPos = 1;
      v1->rNToGo = --v321;
      v1->k0 = (v321 == 1) ^ v320;
      EOB = nextSym;
      result = 0;
      goto save_state_and_return;
    }
    v349 = v317[v319];
    v350 = v349;
    v348 = v349 >> 8;
    v1->k0 = v350;
    goto LABEL_515;
  }
  LOWORD(ii) = 0;
  do
  {
    *(v1->cftabCopy + ii) = *(v1->cftab + ii);
    ii += 4;
  }
  while ( ii != 1028 );
  LOWORD(ii) = 0;
  do
  {
    v305 = &v1->ll16[ii];
    v306 = v1 + 4 * *v305;
    *v305 = *(v306 + 531);
    v307 = &v1->ll4[ii >> 1];
    if ( (ii & 1) != 0 )
      *v307 = (16 * *(v306 + 1063)) | *v307 & 0xF;
    else
      *v307 = v306[2126] | *v307 & 0xF0;
    ++*(v306 + 531);
    ++ii;
  }
  while ( save_nblock > ii );
  v322 = v1->origPtr;
  ll4 = v1->ll4;
  ll16 = v1->ll16;
  save_i = ll16[v322] | (((ll4[v322 >> 1] >> ((4 * v322) & 4)) & 0xF) << 16);
  while ( 1 )
  {
    v326 = &ll16[save_i];
    v327 = save_i >> 1;
    v328 = ll4[v327] >> ((4 * save_i) & 4);
    v329 = *v326;
    *v326 = v322;
    v330 = &v1->ll4[v327];
    v331 = v329 | ((v328 & 0xF) << 16);
    save_j = v331;
    v332 = *v330;
    *v330 = (save_i & 1) != 0 ? (16 * BYTE2(v322)) | v332 & 0xF : BYTE2(v322) | v332 & 0xF0;
    v325 = v1->origPtr;
    if ( save_i == v325 )
      break;
    ll16 = v1->ll16;
    v322 = save_i;
    save_i = v331;
    ll4 = v1->ll4;
  }
  v234 = !v1->blockRandomised;
  v1->tPos = save_i;
  v1->nblock_used = 0;
  if ( v234 )
  {
    v345 = 256;
    v346 = 0;
    do
    {
      if ( v1->cftab[(v346 + v345) >> 1] <= v325 )
        v346 = (v346 + v345) >> 1;
      else
        v345 = (v346 + v345) >> 1;
    }
    while ( v345 - v346 != 1 );
    v347 = v1->ll4;
    v1->k0 = v346;
    v348 = v1->ll16[save_i] | (((v347[save_i >> 1] >> ((4 * save_i) & 4)) & 0xF) << 16);
LABEL_515:
    v1->tPos = v348;
    v1->nblock_used = 1;
    EOB = nextSym;
    result = 0;
    goto save_state_and_return;
  }
  v1->rNToGo = 0;
  v333 = 256;
  v334 = 0;
  v1->rTPos = 0;
  do
  {
    if ( v1->cftab[(v334 + v333) >> 1] <= v325 )
      v334 = (v334 + v333) >> 1;
    else
      v333 = (v334 + v333) >> 1;
  }
  while ( v333 - v334 != 1 );
  v335 = v1->ll4;
  v1->k0 = v334;
  v336 = v335[save_i >> 1] >> ((4 * save_i) & 4);
  LODWORD(v335) = v1->ll16[save_i];
  v1->nblock_used = 1;
  v1->tPos = v335 | ((v336 & 0xF) << 16);
  v337 = BZ2_rNums[0];
  v1->rTPos = 1;
  v1->rNToGo = --v337;
  v1->k0 = v334 ^ (v337 == 1);
  EOB = nextSym;
  result = 0;
save_state_and_return:
  v1->save_i = save_i;
  v1->save_j = save_j;
  v1->save_nGroups = save_nGroups;
  v1->save_nblock = save_nblock;
  v1->save_t = t;
  v1->save_es = save_es;
  v1->save_zn = save_zn;
  v1->save_zvec = save_zvec;
  v1->save_alphaSize = alphaSize;
  v1->save_zj = save_zj;
  v1->save_nSelectors = nSelectors;
  v1->save_EOB = EOB;
  v1->save_groupNo = es_0;
  v1->save_groupPos = groupPos;
  v1->save_nextSym = nextSym;
  v1->save_nblockMAX = zn;
  v1->save_N = N;
  v1->save_curr = curr;
  v1->save_zt = zt;
  v1->save_gSel = gSel;
  v1->save_gMinlen = gMinlen;
  v1->save_gLimit = gLimit;
  v1->save_gBase = gBase;
  v1->save_gPerm = gPerm;
  return result;
}


