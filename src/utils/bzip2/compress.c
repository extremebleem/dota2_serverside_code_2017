
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// BZ2_bsInitWrite  (line 81, @0x000000000324ab00, libserver.so)
void __fastcall BZ2_bsInitWrite(EState *s)
{
  s->bsLive = 0;
  s->bsBuff = 0;
}


// bsPutUInt32  (line 127, @0x000000000324a930, libserver.so)  // inlines: bsW
// callers: BZ2_compressBlock
void __fastcall bsPutUInt32(EState *s, UInt32 u)
{
  int bsLive; // r8d
  int numZ; // ecx
  UInt32 bsBuff; // edx
  UInt32 v5; // edx
  char v6; // cl
  Int32 v7; // r8d
  UInt32 v8; // eax
  int v9; // ecx
  UInt32 v10; // eax
  char v11; // cl
  Int32 v12; // r8d
  UInt32 v13; // edx
  int v14; // ecx
  UInt32 v15; // edx
  UInt32 v16; // eax
  Int32 v17; // edx
  int v18; // ecx
  UInt32 v19; // eax

  bsLive = s->bsLive;
  if ( bsLive <= 7 )
  {
    bsBuff = s->bsBuff;
  }
  else
  {
    numZ = s->numZ;
    bsBuff = s->bsBuff;
    do
    {
      s->zbits[numZ] = HIBYTE(bsBuff);
      numZ = s->numZ + 1;
      v5 = s->bsBuff;
      bsLive = s->bsLive - 8;
      s->numZ = numZ;
      s->bsLive = bsLive;
      bsBuff = v5 << 8;
      s->bsBuff = bsBuff;
    }
    while ( bsLive > 7 );
  }
  v6 = 24 - bsLive;
  v7 = bsLive + 8;
  s->bsLive = v7;
  v8 = bsBuff | (HIBYTE(u) << v6);
  s->bsBuff = v8;
  if ( v7 > 7 )
  {
    v9 = s->numZ;
    do
    {
      s->zbits[v9] = HIBYTE(v8);
      v9 = s->numZ + 1;
      v10 = s->bsBuff;
      v7 = s->bsLive - 8;
      s->numZ = v9;
      s->bsLive = v7;
      v8 = v10 << 8;
      s->bsBuff = v8;
    }
    while ( v7 > 7 );
  }
  v11 = 24 - v7;
  v12 = v7 + 8;
  s->bsLive = v12;
  v13 = v8 | (BYTE2(u) << v11);
  s->bsBuff = v13;
  if ( v12 > 7 )
  {
    v14 = s->numZ;
    do
    {
      s->zbits[v14] = HIBYTE(v13);
      v14 = s->numZ + 1;
      v15 = s->bsBuff;
      v12 = s->bsLive - 8;
      s->numZ = v14;
      s->bsLive = v12;
      v13 = v15 << 8;
      s->bsBuff = v13;
    }
    while ( v12 > 7 );
  }
  v16 = v13 | (BYTE1(u) << (24 - v12));
  v17 = v12 + 8;
  s->bsBuff = v16;
  s->bsLive = v12 + 8;
  if ( v12 + 8 > 7 )
  {
    v18 = s->numZ;
    do
    {
      s->zbits[v18] = HIBYTE(v16);
      v18 = s->numZ + 1;
      v19 = s->bsBuff;
      v17 = s->bsLive - 8;
      s->numZ = v18;
      s->bsLive = v17;
      v16 = v19 << 8;
      s->bsBuff = v16;
    }
    while ( v17 > 7 );
  }
  s->bsLive = v17 + 8;
  s->bsBuff = v16 | (u << (24 - v17));
}


// BZ2_compressBlock  (line 644, @0x000000000324ab20, libserver.so)  // inlines: bsFinishWrite, bsPutUChar, bsW, fprintf, generateMTFValues, makeMaps_e, sendMTFValues
// calls: __fprintf_chk, BZ2_blockSort, bsPutUInt32, BZ2_bz__AssertH__fail, __stack_chk_fail, BZ2_hbMakeCodeLengths, fputc, BZ2_hbAssignCodes
// callers: handle_compress
// strings: "    block %d: crc = 0x%8x, combined CRC = 0x%8x, size = %d\n", "codes %d\n", "    final combined CRC = 0x%x\n   ", "      %d in block, %d after MTF & 1-2 coding, %d+2 syms in use\n", "      initial group %d, [%d .. %d], has %d syms (%4.1f%%)\n", "      pass %d: size is %d, grp uses are " (10 total)
void __fastcall BZ2_compressBlock(EState *s, Bool is_last_block)
{
  EState *v2; // rbx
  Int32 nblock; // edx
  int v4; // eax
  Int32 blockNo; // ecx
  UInt32 v6; // r8d
  int v7; // r9d
  UInt32 v8; // r9d
  bool v9; // zf
  int v10; // eax
  __int64 v11; // rax
  UInt32 v12; // edx
  int v13; // ecx
  Int32 v14; // eax
  UInt32 v15; // esi
  char v16; // cl
  int v17; // eax
  int v18; // edx
  __int64 j; // rax
  int v20; // ecx
  Int32 v21; // eax
  char v22; // cl
  int v23; // eax
  int v24; // edx
  __int64 k; // rax
  int v26; // ecx
  Int32 v27; // eax
  char v28; // cl
  int v29; // eax
  int v30; // edx
  __int64 m; // rax
  int v32; // ecx
  Int32 v33; // eax
  char v34; // cl
  int v35; // eax
  int v36; // edx
  __int64 n; // rax
  int v38; // ecx
  Int32 v39; // eax
  char v40; // cl
  int v41; // eax
  int v42; // edx
  __int64 ii; // rax
  int v44; // ecx
  Int32 v45; // eax
  int v46; // eax
  __int64 v47; // rax
  UInt32 v48; // edx
  int v49; // ecx
  Int32 v50; // eax
  int v51; // eax
  Int32 origPtr; // edi
  __int64 jj; // rax
  int v54; // ecx
  Int32 v55; // eax
  UInt32 *ptr; // r10
  UChar *block; // r8
  Int32 v58; // edi
  UInt16 *mtfv; // rsi
  Int32 v60; // eax
  unsigned __int8 *inUse; // rdx
  int v62; // edi
  unsigned __int64 v63; // rdx
  __int64 v64; // rdx
  __int64 v65; // rax
  int v66; // r12d
  int v67; // eax
  int v68; // edx
  int kk; // r9d
  int v70; // ecx
  unsigned __int8 v71; // r13
  char v72; // r12
  int v73; // r12d
  int v74; // edx
  UInt16 *v75; // rcx
  char v76; // cl
  _BYTE *v77; // rdx
  char mm; // r12
  __int64 v79; // rcx
  unsigned int v80; // edx
  int v81; // ecx
  int v82; // edx
  UInt16 *v83; // rax
  int v84; // r8d
  __int64 v85; // rdx
  int nMTF; // r8d
  __int64 v87; // rdx
  int numZ; // r8d
  UInt32 v89; // edi
  int bsLive; // eax
  UInt32 bsBuff; // edi
  int v92; // esi
  int v93; // edx
  int v94; // ecx
  UInt32 v95; // edx
  char v96; // cl
  int v97; // eax
  int v98; // edx
  char blockSize100k; // di
  int i; // edi
  Int32 v101; // eax
  int v102; // edi
  int v103; // edx
  int v104; // eax
  __int64 v105; // rax
  UInt32 v106; // edx
  int v107; // ecx
  Int32 v108; // eax
  UInt32 v109; // esi
  char v110; // cl
  int v111; // eax
  int v112; // edx
  __int64 i9; // rax
  int v114; // ecx
  Int32 v115; // eax
  char v116; // cl
  int v117; // eax
  int v118; // edx
  __int64 i10; // rax
  int v120; // ecx
  Int32 v121; // eax
  char v122; // cl
  int v123; // eax
  int v124; // edx
  __int64 i11; // rax
  int v126; // ecx
  Int32 v127; // eax
  char v128; // cl
  int v129; // eax
  int v130; // edx
  __int64 i12; // rax
  int v132; // ecx
  Int32 v133; // eax
  char v134; // cl
  int v135; // eax
  int v136; // edx
  __int64 i13; // rax
  int v138; // ecx
  Int32 v139; // eax
  int v140; // edx
  UInt32 v141; // eax
  UInt32 v142; // eax
  int v143; // ecx
  UInt16 *v144; // r14
  Int32 nInUse; // eax
  unsigned __int8 *v146; // rcx
  __int64 v147; // rsi
  unsigned __int8 *v148; // rax
  int v149; // r11d
  int v150; // r13d
  UInt16 *v151; // r10
  int v152; // ecx
  int v153; // r15d
  EState *v154; // r14
  int v155; // ebx
  int nn; // r12d
  unsigned __int8 *v157; // rdx
  int i1; // eax
  EState *v159; // rbx
  int v160; // r13d
  int v161; // r15d
  UInt16 *v162; // r14
  __int64 v163; // rax
  int v164; // esi
  int *v165; // rcx
  int *v166; // rax
  int v167; // r8d
  unsigned __int8 *selector; // r10
  int v169; // r9d
  __int64 v170; // rax
  unsigned __int16 *v171; // rdi
  _WORD *v172; // rax
  unsigned __int8 *v173; // rcx
  int v174; // edx
  __int16 v175; // si
  int v176; // eax
  __int64 v177; // rdx
  int v178; // esi
  int v179; // ecx
  unsigned __int16 *v180; // rax
  __int64 v181; // rsi
  __int64 v182; // rdx
  Int32 *v183; // rax
  int v184; // r8d
  UChar *v185; // r15
  UChar *v186; // rdi
  __int64 v187; // rax
  __int64 v188; // rax
  __int64 v189; // rdx
  __int64 v190; // rcx
  __int64 v191; // rcx
  __int64 v192; // rcx
  __int64 v193; // rcx
  __int64 v194; // rcx
  __int64 v195; // rcx
  __int64 v196; // rcx
  __int64 v197; // rcx
  __int64 v198; // rcx
  __int64 v199; // rcx
  __int64 v200; // rcx
  __int64 v201; // rcx
  __int64 v202; // rcx
  __int64 v203; // rcx
  __int64 v204; // rcx
  __int64 v205; // rcx
  __int64 v206; // rcx
  __int64 v207; // rcx
  __int64 v208; // rcx
  __int64 v209; // rcx
  __int64 v210; // rcx
  __int64 v211; // rcx
  __int64 v212; // rcx
  __int64 v213; // rcx
  __int64 v214; // rcx
  __int64 v215; // rcx
  __int64 v216; // rcx
  __int64 v217; // rcx
  __int64 v218; // rcx
  __int64 v219; // rcx
  __int64 v220; // rcx
  __int64 v221; // rcx
  __int64 v222; // rcx
  __int64 v223; // rcx
  __int64 v224; // rcx
  __int64 v225; // rcx
  __int64 v226; // rcx
  __int64 v227; // rcx
  __int64 v228; // rcx
  __int64 v229; // rcx
  __int64 v230; // rcx
  __int64 v231; // rcx
  __int64 v232; // rcx
  __int64 v233; // rcx
  __int64 v234; // rcx
  __int64 v235; // rcx
  __int64 v236; // rcx
  __int64 v237; // rcx
  __int64 v238; // rdx
  __int64 v239; // rsi
  __int64 v240; // rdi
  __int64 v241; // rcx
  __int64 v242; // rdx
  char *v243; // rdi
  int v244; // eax
  char *v245; // rdx
  char *v246; // rdi
  char *v247; // rdi
  char *v248; // rdi
  char *v249; // rdi
  char *v250; // rdi
  char *v251; // rdi
  char *v252; // rdi
  char *v253; // rdi
  char *v254; // rdi
  char *v255; // rdi
  char *v256; // rdi
  int v257; // eax
  char *v258; // rdi
  char *v259; // rdi
  char *v260; // rdi
  char *v261; // rdi
  char *v262; // rdi
  char *v263; // rdi
  char *v264; // rdi
  char *v265; // rdi
  char *v266; // rdi
  char *v267; // rdi
  char *v268; // rdi
  char *v269; // rdi
  int v270; // eax
  char *v271; // rdi
  char *v272; // rdi
  char *v273; // rdi
  char *v274; // rdi
  char *v275; // rdi
  char *v276; // rdi
  char *v277; // rdi
  char *v278; // rdi
  char *v279; // rdi
  char *v280; // rdi
  char *v281; // rdi
  char *v282; // rdi
  int v283; // eax
  char *v284; // rdi
  char *v285; // rdi
  char *v286; // rdi
  char *v287; // rdi
  char *v288; // rdi
  char *v289; // rdi
  char *v290; // rdi
  char *v291; // rdi
  char *v292; // rdi
  char *v293; // rdi
  char *v294; // rdi
  char *v295; // rdi
  char *v296; // rsi
  __int64 v297; // r8
  __int64 v298; // rax
  unsigned __int8 *v299; // r8
  char v300; // dl
  unsigned __int8 v301; // di
  char v302; // si
  int v303; // ecx
  char *v304; // rax
  Int32 *v305; // r15
  UChar *v306; // rbx
  unsigned __int8 *v307; // rdi
  Int32 v308; // r12d
  Int32 v309; // r14d
  Int32 v310; // eax
  UChar *v311; // rsi
  Int32 *v312; // rdi
  __int64 v313; // rdx
  int i2; // eax
  Int32 v315; // r10d
  int v316; // esi
  char *v317; // rdx
  int v318; // eax
  UInt32 v319; // ecx
  Int32 v320; // eax
  __int64 i3; // rdx
  int i4; // r8d
  int v323; // ecx
  UInt32 v324; // eax
  UInt32 v325; // eax
  int v326; // eax
  UInt32 v327; // edx
  int v328; // edi
  Int32 v329; // eax
  UInt32 v330; // r8d
  unsigned __int8 *v331; // rax
  int v332; // edi
  unsigned int *v333; // rdx
  int v334; // ecx
  UInt32 v335; // ecx
  Int32 v336; // eax
  UInt32 v337; // r12d
  int v338; // edi
  UInt32 i5; // eax
  UInt32 v340; // eax
  char v341; // cl
  int v342; // eax
  int v343; // edx
  Int32 v344; // eax
  char v345; // cl
  Int32 v346; // eax
  int v347; // edx
  unsigned __int8 *selectorMtf; // r9
  UInt32 v349; // eax
  int v350; // r8d
  int v351; // ecx
  UInt32 v352; // eax
  char v353; // cl
  int v354; // ecx
  UInt32 v355; // eax
  UInt32 v356; // eax
  EState *v357; // r9
  int v358; // r12d
  int v359; // edx
  int v360; // esi
  UInt32 i6; // eax
  UInt32 v362; // eax
  int v363; // ecx
  int v364; // eax
  __int64 v365; // r8
  int v366; // edx
  UInt32 i7; // edx
  Int32 v368; // eax
  char v369; // cl
  int v370; // ecx
  UInt32 i8; // edx
  Int32 v372; // eax
  char v373; // cl
  int v374; // ecx
  UInt32 v375; // edx
  Int32 v376; // eax
  int v377; // eax
  EState *v378; // r15
  int v379; // ecx
  int v380; // r10d
  int v381; // r12d
  int v382; // eax
  UInt32 v383; // edx
  unsigned __int16 *v384; // rsi
  __int64 v385; // r11
  __int64 v386; // rcx
  __int64 v387; // rdi
  int v388; // r8d
  int v389; // edi
  int v390; // ecx
  Int32 v391; // eax
  char v392; // cl
  int v393; // r8d
  UInt32 v394; // eax
  int v395; // eax
  int v396; // edi
  unsigned __int8 *v397; // rax
  __int64 v398; // rsi
  __int64 v399; // rcx
  __int64 v400; // rdx
  int v401; // r11d
  int v402; // r8d
  int v403; // ecx
  UInt32 v404; // r9d
  Int32 v405; // edi
  char v406; // cl
  int v407; // edi
  int v408; // r11d
  __int64 v409; // rcx
  int v410; // r9d
  int v411; // r8d
  int v412; // ecx
  Int32 v413; // edi
  char v414; // cl
  int v415; // edi
  int v416; // r9d
  __int64 v417; // rcx
  int v418; // r11d
  int v419; // r8d
  int v420; // ecx
  Int32 v421; // edi
  char v422; // cl
  int v423; // edi
  int v424; // r11d
  __int64 v425; // rcx
  int v426; // r9d
  int v427; // r8d
  int v428; // ecx
  Int32 v429; // edi
  char v430; // cl
  int v431; // edi
  int v432; // r9d
  __int64 v433; // rcx
  int v434; // r11d
  int v435; // r8d
  int v436; // ecx
  Int32 v437; // edi
  char v438; // cl
  int v439; // edi
  int v440; // r11d
  __int64 v441; // rcx
  int v442; // r9d
  int v443; // r8d
  int v444; // ecx
  Int32 v445; // edi
  char v446; // cl
  int v447; // edi
  int v448; // r9d
  __int64 v449; // rcx
  int v450; // r11d
  int v451; // r8d
  int v452; // ecx
  Int32 v453; // edi
  char v454; // cl
  int v455; // edi
  int v456; // r11d
  __int64 v457; // rcx
  int v458; // r9d
  int v459; // r8d
  int v460; // ecx
  Int32 v461; // edi
  char v462; // cl
  int v463; // edi
  int v464; // r9d
  __int64 v465; // rcx
  int v466; // r11d
  int v467; // r8d
  int v468; // ecx
  Int32 v469; // edi
  char v470; // cl
  int v471; // edi
  int v472; // r11d
  __int64 v473; // rcx
  int v474; // r9d
  int v475; // r8d
  int v476; // ecx
  Int32 v477; // edi
  char v478; // cl
  int v479; // edi
  int v480; // r9d
  __int64 v481; // rcx
  int v482; // r11d
  int v483; // r8d
  int v484; // ecx
  Int32 v485; // edi
  char v486; // cl
  int v487; // edi
  int v488; // r11d
  __int64 v489; // rcx
  int v490; // r9d
  int v491; // r8d
  int v492; // ecx
  Int32 v493; // edi
  char v494; // cl
  int v495; // edi
  int v496; // r9d
  __int64 v497; // rcx
  int v498; // r11d
  int v499; // r8d
  int v500; // ecx
  Int32 v501; // edi
  char v502; // cl
  int v503; // edi
  int v504; // r11d
  __int64 v505; // rcx
  int v506; // r9d
  int v507; // r8d
  int v508; // ecx
  Int32 v509; // edi
  char v510; // cl
  int v511; // edi
  int v512; // r9d
  __int64 v513; // rcx
  int v514; // r11d
  int v515; // r8d
  int v516; // ecx
  Int32 v517; // edi
  char v518; // cl
  int v519; // edi
  int v520; // r11d
  __int64 v521; // rcx
  int v522; // r9d
  int v523; // r8d
  int v524; // ecx
  Int32 v525; // edi
  char v526; // cl
  int v527; // edi
  int v528; // r9d
  __int64 v529; // rcx
  int v530; // r11d
  int v531; // r8d
  int v532; // ecx
  Int32 v533; // edi
  char v534; // cl
  int v535; // edi
  int v536; // r11d
  __int64 v537; // rcx
  int v538; // r9d
  int v539; // r8d
  int v540; // ecx
  Int32 v541; // edi
  char v542; // cl
  int v543; // edi
  int v544; // r9d
  __int64 v545; // rcx
  int v546; // r11d
  int v547; // r8d
  int v548; // ecx
  Int32 v549; // edi
  char v550; // cl
  int v551; // edi
  int v552; // r11d
  __int64 v553; // rcx
  int v554; // r9d
  int v555; // r8d
  int v556; // ecx
  Int32 v557; // edi
  char v558; // cl
  int v559; // edi
  int v560; // r9d
  __int64 v561; // rcx
  int v562; // r11d
  int v563; // r8d
  int v564; // ecx
  Int32 v565; // edi
  char v566; // cl
  int v567; // edi
  int v568; // r11d
  __int64 v569; // rcx
  int v570; // r9d
  int v571; // r8d
  int v572; // ecx
  Int32 v573; // edi
  char v574; // cl
  int v575; // edi
  int v576; // r9d
  __int64 v577; // rcx
  int v578; // r11d
  int v579; // r8d
  int v580; // ecx
  Int32 v581; // edi
  char v582; // cl
  int v583; // edi
  int v584; // r11d
  __int64 v585; // rcx
  int v586; // r9d
  int v587; // r8d
  int v588; // ecx
  Int32 v589; // edi
  char v590; // cl
  int v591; // edi
  int v592; // r9d
  __int64 v593; // rcx
  int v594; // r11d
  int v595; // r8d
  int v596; // ecx
  Int32 v597; // edi
  char v598; // cl
  int v599; // edi
  int v600; // r11d
  __int64 v601; // rcx
  int v602; // r9d
  int v603; // r8d
  int v604; // ecx
  Int32 v605; // edi
  char v606; // cl
  int v607; // edi
  int v608; // r9d
  __int64 v609; // rcx
  int v610; // r11d
  int v611; // r8d
  int v612; // ecx
  Int32 v613; // edi
  char v614; // cl
  int v615; // edi
  int v616; // r11d
  __int64 v617; // rcx
  int v618; // r9d
  int v619; // r8d
  int v620; // ecx
  Int32 v621; // edi
  char v622; // cl
  int v623; // edi
  int v624; // r9d
  __int64 v625; // rcx
  int v626; // r11d
  int v627; // r8d
  int v628; // ecx
  Int32 v629; // edi
  char v630; // cl
  int v631; // edi
  int v632; // r11d
  __int64 v633; // rcx
  int v634; // r9d
  int v635; // r8d
  int v636; // ecx
  Int32 v637; // edi
  char v638; // cl
  int v639; // edi
  int v640; // r9d
  __int64 v641; // rcx
  int v642; // r11d
  int v643; // r8d
  int v644; // ecx
  Int32 v645; // edi
  char v646; // cl
  int v647; // edi
  int v648; // r11d
  __int64 v649; // rcx
  int v650; // r9d
  int v651; // r8d
  int v652; // ecx
  Int32 v653; // edi
  char v654; // cl
  int v655; // edi
  int v656; // r9d
  __int64 v657; // rcx
  int v658; // r11d
  int v659; // r8d
  int v660; // ecx
  Int32 v661; // edi
  char v662; // cl
  int v663; // edi
  int v664; // r11d
  __int64 v665; // rcx
  int v666; // r9d
  int v667; // r8d
  int v668; // ecx
  Int32 v669; // edi
  char v670; // cl
  int v671; // edi
  int v672; // r9d
  __int64 v673; // rcx
  int v674; // r11d
  int v675; // r8d
  int v676; // ecx
  Int32 v677; // edi
  char v678; // cl
  int v679; // edi
  int v680; // r11d
  __int64 v681; // rcx
  int v682; // r9d
  int v683; // r8d
  int v684; // ecx
  Int32 v685; // edi
  char v686; // cl
  int v687; // edi
  int v688; // r9d
  __int64 v689; // rcx
  int v690; // r11d
  int v691; // r8d
  int v692; // ecx
  Int32 v693; // edi
  char v694; // cl
  int v695; // edi
  int v696; // r11d
  __int64 v697; // rcx
  int v698; // r9d
  int v699; // r8d
  int v700; // ecx
  Int32 v701; // edi
  char v702; // cl
  int v703; // edi
  int v704; // r9d
  __int64 v705; // rcx
  int v706; // r11d
  int v707; // r8d
  int v708; // ecx
  Int32 v709; // edi
  char v710; // cl
  int v711; // edi
  int v712; // r11d
  __int64 v713; // rcx
  int v714; // r9d
  int v715; // r8d
  int v716; // ecx
  Int32 v717; // edi
  char v718; // cl
  int v719; // edi
  int v720; // r9d
  __int64 v721; // rcx
  int v722; // r11d
  int v723; // r8d
  int v724; // ecx
  Int32 v725; // edi
  char v726; // cl
  int v727; // edi
  int v728; // r11d
  __int64 v729; // rcx
  int v730; // r9d
  int v731; // r8d
  int v732; // ecx
  Int32 v733; // edi
  char v734; // cl
  int v735; // edi
  int v736; // r9d
  __int64 v737; // rcx
  int v738; // r11d
  int v739; // r8d
  int v740; // ecx
  Int32 v741; // edi
  char v742; // cl
  int v743; // edi
  int v744; // r11d
  __int64 v745; // rcx
  int v746; // r9d
  int v747; // r8d
  int v748; // ecx
  Int32 v749; // edi
  char v750; // cl
  int v751; // edi
  int v752; // r9d
  __int64 v753; // rcx
  int v754; // r11d
  int v755; // r8d
  int v756; // ecx
  Int32 v757; // edi
  char v758; // cl
  int v759; // edi
  int v760; // r11d
  __int64 v761; // rcx
  int v762; // r9d
  int v763; // r8d
  int v764; // ecx
  Int32 v765; // edi
  char v766; // cl
  int v767; // edi
  int v768; // r9d
  __int64 v769; // rcx
  int v770; // r11d
  int v771; // r8d
  int v772; // ecx
  Int32 v773; // edi
  char v774; // cl
  int v775; // edi
  int v776; // r11d
  __int64 v777; // rcx
  int v778; // r9d
  int v779; // r8d
  int v780; // ecx
  Int32 v781; // edi
  char v782; // cl
  int v783; // edi
  int v784; // r9d
  __int64 v785; // rcx
  int v786; // r11d
  int v787; // r8d
  int v788; // ecx
  Int32 v789; // edi
  char v790; // cl
  int v791; // edi
  int v792; // ecx
  __int64 v793; // rsi
  int v794; // edx
  int v795; // esi
  __int64 v796; // rdi
  int v797; // ecx
  UInt32 v798; // eax
  __int64 v800; // [rsp+10h] [rbp-1E0h]
  Int32 *code; // [rsp+20h] [rbp-1D0h]
  __int64 v802; // [rsp+30h] [rbp-1C0h]
  int v803; // [rsp+30h] [rbp-1C0h]
  UChar *len; // [rsp+38h] [rbp-1B8h]
  int v805; // [rsp+40h] [rbp-1B0h]
  UInt16 *v806; // [rsp+40h] [rbp-1B0h]
  int sa; // [rsp+48h] [rbp-1A8h]
  EState *sb; // [rsp+48h] [rbp-1A8h]
  char v809; // [rsp+50h] [rbp-1A0h]
  UInt16 *v810; // [rsp+50h] [rbp-1A0h]
  unsigned __int8 *v811; // [rsp+58h] [rbp-198h]
  int v812; // [rsp+58h] [rbp-198h]
  int v813; // [rsp+58h] [rbp-198h]
  unsigned int v814; // [rsp+68h] [rbp-188h]
  UInt16 *v815; // [rsp+68h] [rbp-188h]
  Int32 *v816; // [rsp+68h] [rbp-188h]
  __int64 v817; // [rsp+68h] [rbp-188h]
  int v818; // [rsp+68h] [rbp-188h]
  int v819; // [rsp+68h] [rbp-188h]
  Int32 alphaSize; // [rsp+70h] [rbp-180h]
  int v821; // [rsp+78h] [rbp-178h]
  int v822; // [rsp+7Ch] [rbp-174h]
  int v823; // [rsp+7Ch] [rbp-174h]
  _DWORD v824[12]; // [rsp+80h] [rbp-170h] BYREF
  char v825; // [rsp+B0h] [rbp-140h] BYREF
  _BYTE v826[15]; // [rsp+B1h] [rbp-13Fh] BYREF
  _QWORD v827[38]; // [rsp+C0h] [rbp-130h] BYREF

  v2 = s;
  v827[31] = __readfsqword(0x28u);
  nblock = s->nblock;
  v4 = nblock;
  if ( nblock > 0 )
  {
    blockNo = s->blockNo;
    v6 = ~s->blockCRC;
    v7 = __ROR4__(s->combinedCRC, 31);
    s->blockCRC = v6;
    v8 = v6 ^ v7;
    s->combinedCRC = v8;
    if ( blockNo > 1 )
      s->numZ = 0;
    if ( s->verbosity > 1 )
      __fprintf_chk(stderr, 1, "    block %d: crc = 0x%8x, combined CRC = 0x%8x, size = %d\n", blockNo, v6, v8, nblock);
    BZ2_blockSort(v2);
    v4 = v2->nblock;
  }
  v9 = v2->blockNo == 1;
  v2->zbits = v2->arr2 + v4;
  if ( v9 )
  {
    numZ = v2->numZ;
    HIBYTE(v89) = 66;
    v2->bsBuff = 1107296256;
    v2->bsLive = 8;
    do
    {
      v2->zbits[numZ] = HIBYTE(v89);
      bsLive = v2->bsLive;
      bsBuff = v2->bsBuff;
      numZ = v2->numZ + 1;
      v2->bsLive = bsLive - 8;
      v89 = bsBuff << 8;
      v92 = numZ;
      v2->numZ = numZ;
      v2->bsBuff = v89;
    }
    while ( bsLive - 8 > 7 );
    v2->bsLive = bsLive;
    v93 = v89 | (90 << (24 - (bsLive - 8)));
    v2->bsBuff = v93;
    if ( bsLive > 7 )
    {
      v94 = numZ;
      do
      {
        v2->zbits[v94] = HIBYTE(v93);
        v95 = v2->bsBuff;
        bsLive = v2->bsLive - 8;
        v94 = v2->numZ + 1;
        v2->bsLive = bsLive;
        v93 = v95 << 8;
        v92 = v94;
        v2->numZ = v94;
        v2->bsBuff = v93;
      }
      while ( bsLive > 7 );
    }
    v96 = 24 - bsLive;
    v97 = bsLive + 8;
    v2->bsLive = v97;
    v98 = v93 | (104 << v96);
    blockSize100k = v2->blockSize100k;
    v2->bsBuff = v98;
    for ( i = (blockSize100k + 48); v97 > 7; v2->bsLive = v97 )
    {
      v2->zbits[v92] = HIBYTE(v98);
      v92 = v2->numZ + 1;
      v101 = v2->bsLive;
      v98 = v2->bsBuff << 8;
      v2->numZ = v92;
      v2->bsBuff = v98;
      v97 = v101 - 8;
    }
    v102 = i << (24 - v97);
    v2->bsLive = v97 + 8;
    v4 = v2->nblock;
    v2->bsBuff = v98 | v102;
  }
  if ( v4 <= 0 )
    goto LABEL_90;
  v10 = v2->bsLive;
  if ( v10 <= 7 )
  {
    v15 = v2->bsBuff;
  }
  else
  {
    v11 = v2->numZ;
    v12 = v2->bsBuff;
    while ( 1 )
    {
      v2->zbits[v11] = HIBYTE(v12);
      v13 = v2->numZ + 1;
      v14 = v2->bsLive;
      v12 = v2->bsBuff << 8;
      v2->numZ = v13;
      v2->bsBuff = v12;
      v10 = v14 - 8;
      v2->bsLive = v10;
      if ( v10 <= 7 )
        break;
      v11 = v13;
    }
    v15 = v12;
  }
  v16 = 24 - v10;
  v17 = v10 + 8;
  v2->bsLive = v17;
  v18 = v15 | (49 << v16);
  v2->bsBuff = v18;
  if ( v17 > 7 )
  {
    for ( j = v2->numZ; ; j = v20 )
    {
      v2->zbits[j] = HIBYTE(v18);
      v20 = v2->numZ + 1;
      v21 = v2->bsLive;
      v18 = v2->bsBuff << 8;
      v2->numZ = v20;
      v2->bsBuff = v18;
      v17 = v21 - 8;
      v2->bsLive = v17;
      if ( v17 <= 7 )
        break;
    }
  }
  v22 = 24 - v17;
  v23 = v17 + 8;
  v2->bsLive = v23;
  v24 = v18 | (65 << v22);
  v2->bsBuff = v24;
  if ( v23 > 7 )
  {
    for ( k = v2->numZ; ; k = v26 )
    {
      v2->zbits[k] = HIBYTE(v24);
      v26 = v2->numZ + 1;
      v27 = v2->bsLive;
      v24 = v2->bsBuff << 8;
      v2->numZ = v26;
      v2->bsBuff = v24;
      v23 = v27 - 8;
      v2->bsLive = v23;
      if ( v23 <= 7 )
        break;
    }
  }
  v28 = 24 - v23;
  v29 = v23 + 8;
  v2->bsLive = v29;
  v30 = v24 | (89 << v28);
  v2->bsBuff = v30;
  if ( v29 > 7 )
  {
    for ( m = v2->numZ; ; m = v32 )
    {
      v2->zbits[m] = HIBYTE(v30);
      v32 = v2->numZ + 1;
      v33 = v2->bsLive;
      v30 = v2->bsBuff << 8;
      v2->numZ = v32;
      v2->bsBuff = v30;
      v29 = v33 - 8;
      v2->bsLive = v29;
      if ( v29 <= 7 )
        break;
    }
  }
  v34 = 24 - v29;
  v35 = v29 + 8;
  v2->bsLive = v35;
  v36 = v30 | (38 << v34);
  v2->bsBuff = v36;
  if ( v35 > 7 )
  {
    for ( n = v2->numZ; ; n = v38 )
    {
      v2->zbits[n] = HIBYTE(v36);
      v38 = v2->numZ + 1;
      v39 = v2->bsLive;
      v36 = v2->bsBuff << 8;
      v2->numZ = v38;
      v2->bsBuff = v36;
      v35 = v39 - 8;
      v2->bsLive = v35;
      if ( v35 <= 7 )
        break;
    }
  }
  v40 = 24 - v35;
  v41 = v35 + 8;
  v2->bsLive = v41;
  v42 = v36 | (83 << v40);
  v2->bsBuff = v42;
  if ( v41 > 7 )
  {
    for ( ii = v2->numZ; ; ii = v44 )
    {
      v2->zbits[ii] = HIBYTE(v42);
      v44 = v2->numZ + 1;
      v45 = v2->bsLive;
      v42 = v2->bsBuff << 8;
      v2->numZ = v44;
      v2->bsBuff = v42;
      v41 = v45 - 8;
      v2->bsLive = v41;
      if ( v41 <= 7 )
        break;
    }
  }
  v2->bsLive = v41 + 8;
  v2->bsBuff = v42 | (89 << (24 - v41));
  bsPutUInt32(v2, v2->blockCRC);
  v46 = v2->bsLive;
  if ( v46 <= 7 )
  {
    v48 = v2->bsBuff;
  }
  else
  {
    v47 = v2->numZ;
    v48 = v2->bsBuff;
    while ( 1 )
    {
      v2->zbits[v47] = HIBYTE(v48);
      v49 = v2->numZ + 1;
      v50 = v2->bsLive;
      v48 = v2->bsBuff << 8;
      v2->numZ = v49;
      v2->bsBuff = v48;
      v46 = v50 - 8;
      v2->bsLive = v46;
      if ( v46 <= 7 )
        break;
      v47 = v49;
    }
  }
  v51 = v46 + 1;
  origPtr = v2->origPtr;
  v2->bsLive = v51;
  if ( v51 == 8 )
  {
    for ( jj = v2->numZ; ; jj = v54 )
    {
      v2->zbits[jj] = HIBYTE(v48);
      v54 = v2->numZ + 1;
      v55 = v2->bsLive;
      v48 = v2->bsBuff << 8;
      v2->numZ = v54;
      v2->bsBuff = v48;
      v51 = v55 - 8;
      v2->bsLive = v51;
      if ( v51 <= 7 )
        break;
    }
  }
  ptr = v2->ptr;
  v2->nInUse = 0;
  block = v2->block;
  v58 = origPtr << (8 - v51);
  mtfv = v2->mtfv;
  v2->bsLive = v51 + 24;
  v60 = 0;
  v2->bsBuff = v48 | v58;
  inUse = v2->inUse;
  do
  {
    if ( *inUse != 0 )
    {
      inUse[256] = v60++;
      v2->nInUse = v60;
    }
    ++inUse;
  }
  while ( inUse != v2->unseqToSeq );
  v62 = v60 + 1;
  v63 = 0;
  do
  {
    v2->mtfFreq[v63 / 4] = 0;
    v63 += 4LL;
  }
  while ( v63 != 4LL * (v60 + 1) + 4 );
  if ( v60 != 0 )
  {
    v64 = (v60 - 1) + 1LL;
    v65 = 0;
    do
    {
      v826[v65 - 1] = v65;
      ++v65;
    }
    while ( v65 != v64 );
  }
  v66 = v2->nblock;
  if ( v66 <= 0 )
  {
    nMTF = 1;
    v87 = 0;
    goto LABEL_128;
  }
  v67 = 0;
  v68 = 0;
  for ( kk = 0; kk < v66; ++kk )
  {
    v70 = *ptr - 1;
    if ( v70 < 0 )
      v70 += v66;
    v71 = v2->unseqToSeq[block[v70]];
    if ( v71 == v825 )
    {
      ++v68;
      goto LABEL_68;
    }
    v72 = v825;
    if ( v68 == 0 )
      goto LABEL_63;
    v73 = v67 + 1;
    v74 = v68 - 1;
    v75 = &mtfv[v67];
    while ( (v74 & 1) != 0 )
    {
      v67 = v73;
      *v75++ = 1;
      ++v73;
      ++v2->mtfFreq[1];
      if ( v74 <= 1 )
        goto LABEL_62;
LABEL_59:
      v74 = (v74 - 2) >> 1;
    }
    v67 = v73;
    *v75++ = 0;
    ++v73;
    ++v2->mtfFreq[0];
    if ( v74 > 1 )
      goto LABEL_59;
LABEL_62:
    v72 = v825;
LABEL_63:
    v76 = v826[0];
    v826[0] = v72;
    if ( v71 == v76 )
    {
      LODWORD(v77) = &v825 + 1;
    }
    else
    {
      v77 = v826;
      for ( mm = v76; ; mm = v76 )
      {
        v76 = *++v77;
        *v77 = mm;
        if ( v71 == v76 )
          break;
      }
    }
    v825 = v76;
    v79 = v67;
    v80 = v77 - &v825 + 1;
    ++v67;
    mtfv[v79] = v80;
    ++v2->mtfFreq[v80];
    v68 = 0;
    v66 = v2->nblock;
LABEL_68:
    ++ptr;
  }
  if ( v68 == 0 )
  {
    nMTF = v67 + 1;
    v87 = v67;
    goto LABEL_128;
  }
  v81 = v67 + 1;
  v82 = v68 - 1;
  v83 = &mtfv[v67];
  while ( 2 )
  {
    if ( (v82 & 1) != 0 )
    {
      v84 = v81;
      *v83++ = 1;
      ++v81;
      ++v2->mtfFreq[1];
      if ( v82 <= 1 )
        break;
      goto LABEL_72;
    }
    *v83++ = 0;
    v84 = v81++;
    ++v2->mtfFreq[0];
    if ( v82 > 1 )
    {
LABEL_72:
      v82 = (v82 - 2) >> 1;
      continue;
    }
    break;
  }
  v85 = v84;
  nMTF = v84 + 1;
  v87 = v85;
LABEL_128:
  mtfv[v87] = v62;
  ++v2->mtfFreq[v62];
  v2->nMTF = nMTF;
  v144 = v2->mtfv;
  if ( v2->verbosity > 2 )
  {
    __fprintf_chk(
      stderr,
      1,
      "      %d in block, %d after MTF & 1-2 coding, %d+2 syms in use\n",
      v2->nblock,
      nMTF,
      v2->nInUse);
    nMTF = v2->nMTF;
  }
  nInUse = v2->nInUse;
  code = v2->code[0];
  alphaSize = nInUse + 2;
  len = v2->len[0];
  v146 = v2->len[0];
  v814 = nInUse + 1;
  v147 = (nInUse + 1) + 1LL;
  do
  {
    if ( alphaSize > 0 )
    {
      v148 = v146;
      do
        *v148++ = 15;
      while ( v148 != &v146[v147] );
    }
    v146 += 258;
  }
  while ( v146 != code );
  v149 = nMTF;
  if ( nMTF <= 0 )
    BZ2_bz__AssertH__fail(3001);
  if ( nMTF <= 199 )
  {
    v821 = 2;
    v150 = 2;
  }
  else if ( nMTF <= 599 )
  {
    v821 = 3;
    v150 = 3;
  }
  else if ( nMTF <= 1199 )
  {
    v821 = 4;
    v150 = 4;
  }
  else
  {
    v821 = (nMTF > 2399) + 5;
    v150 = v821;
  }
  v151 = v144;
  v152 = nMTF;
  v809 = 0;
  v153 = v150;
  v154 = v2;
  v822 = 0;
  sa = v2->verbosity;
  v811 = &v2->selectorMtf[258 * v150 + 17744];
  do
  {
    v155 = 0;
    for ( nn = v822 - 1; v149 / v150 > v155; v155 += v154->mtfFreq[++nn] )
    {
      if ( nn >= v814 )
        break;
    }
    if ( v822 < nn && v153 != v150 && v150 != 1 && (v809 & 1) != 0 )
    {
      v187 = nn--;
      v155 -= v154->mtfFreq[v187];
    }
    if ( sa > 2 )
    {
      v803 = v149;
      v806 = v151;
      __fprintf_chk(
        stderr,
        1,
        "      initial group %d, [%d .. %d], has %d syms (%4.1f%%)\n",
        v150,
        v822,
        nn,
        v155,
        v155 * 100.0 / v152);
      v152 = v154->nMTF;
      v149 = v803;
      v151 = v806;
      sa = v154->verbosity;
    }
    --v150;
    if ( alphaSize > 0 )
    {
      v157 = v811;
      for ( i1 = 0; i1 != alphaSize; ++i1 )
      {
        while ( nn >= i1 && v822 <= i1 )
        {
          ++i1;
          *v157++ = 0;
          if ( alphaSize == i1 )
            goto LABEL_159;
        }
        *v157++ = 15;
      }
    }
LABEL_159:
    ++v809;
    v149 -= v155;
    v811 -= 258;
    v822 = nn + 1;
  }
  while ( v150 > 0 );
  v159 = v154;
  v160 = v153;
  v805 = 1;
  v161 = v152;
  v162 = v151;
  v802 = v814;
  v800 = v814;
  while ( 1 )
  {
    v163 = 0;
    do
      v824[v163++ + 4] = 0;
    while ( v160 > v163 );
    v164 = 0;
    v165 = v159->rfreq[0];
    do
    {
      if ( alphaSize > 0 )
      {
        v166 = v165;
        do
          *v166++ = 0;
        while ( v166 != &v165[v800 + 1] );
      }
      ++v164;
      v165 += 258;
    }
    while ( v160 > v164 );
    if ( v160 == 6 && alphaSize > 0 )
    {
      v331 = v159->len[1];
      v332 = 0;
      v333 = v159->len_pack[0];
      do
      {
        v334 = *v331;
        ++v332;
        ++v331;
        v333 += 4;
        *(v333 - 4) = *(v331 - 259) | (v334 << 16);
        *(v333 - 3) = v331[257] | (v331[515] << 16);
        *(v333 - 2) = v331[773] | (v331[1031] << 16);
      }
      while ( alphaSize != v332 );
    }
    if ( v161 <= 0 )
    {
      v823 = 0;
      v812 = 0;
    }
    else
    {
      v167 = 0;
      v823 = 0;
      selector = v159->selector;
      v815 = v162 + 1;
      v812 = 0;
      do
      {
        while ( 1 )
        {
          v169 = v167 + 49;
          if ( v167 + 49 >= v161 )
            v169 = v161 - 1;
          v170 = 0;
          do
            *(v824 + v170++) = 0;
          while ( v160 > v170 );
          if ( v160 == 6 && v169 - v167 == 49 )
          {
            v239 = v167;
            v240 = v162[v239];
            v241 = v162[v239 + 1];
            v242 = v240 + 3227;
            v243 = v159 + 16 * v240;
            v244 = *(&v159->mode + 4 * v242) + v159->len_pack[v241][0];
            v245 = v159 + 16 * v241;
            LODWORD(v241) = *(v243 + 12911) + *(v245 + 12911);
            LODWORD(v245) = *(v243 + 12912) + *(v245 + 12912);
            v246 = v159 + 16 * v162[v239 + 2];
            LODWORD(v241) = *(v246 + 12911) + v241;
            LODWORD(v245) = *(v246 + 12912) + v245;
            v247 = v159 + 16 * v162[v239 + 3];
            LODWORD(v241) = *(v247 + 12911) + v241;
            LODWORD(v245) = *(v247 + 12912) + v245;
            v248 = v159 + 16 * v162[v239 + 4];
            LODWORD(v241) = *(v248 + 12911) + v241;
            LODWORD(v245) = *(v248 + 12912) + v245;
            v249 = v159 + 16 * v162[v239 + 5];
            LODWORD(v241) = *(v249 + 12911) + v241;
            LODWORD(v245) = *(v249 + 12912) + v245;
            v250 = v159 + 16 * v162[v239 + 6];
            LODWORD(v241) = *(v250 + 12911) + v241;
            LODWORD(v245) = *(v250 + 12912) + v245;
            v251 = v159 + 16 * v162[v239 + 7];
            LODWORD(v241) = *(v251 + 12911) + v241;
            LODWORD(v245) = *(v251 + 12912) + v245;
            v252 = v159 + 16 * v162[v239 + 8];
            LODWORD(v241) = *(v252 + 12911) + v241;
            LODWORD(v245) = *(v252 + 12912) + v245;
            v253 = v159 + 16 * v162[v239 + 9];
            LODWORD(v241) = *(v253 + 12911) + v241;
            LODWORD(v245) = *(v253 + 12912) + v245;
            v254 = v159 + 16 * v162[v239 + 10];
            LODWORD(v241) = *(v254 + 12911) + v241;
            LODWORD(v245) = *(v254 + 12912) + v245;
            v255 = v159 + 16 * v162[v239 + 11];
            LODWORD(v241) = *(v255 + 12911) + v241;
            LODWORD(v245) = *(v255 + 12912) + v245;
            v256 = v159 + 16 * v162[v239 + 12];
            LODWORD(v241) = *(v256 + 12911) + v241;
            LODWORD(v245) = *(v256 + 12912) + v245;
            v257 = v159->len_pack[v162[v239 + 13]][0]
                 + v159->len_pack[v162[v239 + 12]][0]
                 + v159->len_pack[v162[v239 + 11]][0]
                 + v159->len_pack[v162[v239 + 10]][0]
                 + v159->len_pack[v162[v239 + 9]][0]
                 + v159->len_pack[v162[v239 + 8]][0]
                 + v159->len_pack[v162[v239 + 7]][0]
                 + v159->len_pack[v162[v239 + 6]][0]
                 + v159->len_pack[v162[v239 + 5]][0]
                 + v159->len_pack[v162[v239 + 4]][0]
                 + v159->len_pack[v162[v239 + 3]][0]
                 + v159->len_pack[v162[v239 + 2]][0]
                 + v244;
            v258 = v159 + 16 * v162[v239 + 13];
            LODWORD(v241) = *(v258 + 12911) + v241;
            LODWORD(v245) = *(v258 + 12912) + v245;
            v259 = v159 + 16 * v162[v239 + 14];
            LODWORD(v241) = *(v259 + 12911) + v241;
            LODWORD(v245) = *(v259 + 12912) + v245;
            v260 = v159 + 16 * v162[v239 + 15];
            LODWORD(v241) = *(v260 + 12911) + v241;
            LODWORD(v245) = *(v260 + 12912) + v245;
            v261 = v159 + 16 * v162[v239 + 16];
            LODWORD(v241) = *(v261 + 12911) + v241;
            LODWORD(v245) = *(v261 + 12912) + v245;
            v262 = v159 + 16 * v162[v239 + 17];
            LODWORD(v241) = *(v262 + 12911) + v241;
            LODWORD(v245) = *(v262 + 12912) + v245;
            v263 = v159 + 16 * v162[v239 + 18];
            LODWORD(v241) = *(v263 + 12911) + v241;
            LODWORD(v245) = *(v263 + 12912) + v245;
            v264 = v159 + 16 * v162[v239 + 19];
            LODWORD(v241) = *(v264 + 12911) + v241;
            LODWORD(v245) = *(v264 + 12912) + v245;
            v265 = v159 + 16 * v162[v239 + 20];
            LODWORD(v241) = *(v265 + 12911) + v241;
            LODWORD(v245) = *(v265 + 12912) + v245;
            v266 = v159 + 16 * v162[v239 + 21];
            LODWORD(v241) = *(v266 + 12911) + v241;
            LODWORD(v245) = *(v266 + 12912) + v245;
            v267 = v159 + 16 * v162[v239 + 22];
            LODWORD(v241) = *(v267 + 12911) + v241;
            LODWORD(v245) = *(v267 + 12912) + v245;
            v268 = v159 + 16 * v162[v239 + 23];
            LODWORD(v241) = *(v268 + 12911) + v241;
            LODWORD(v245) = *(v268 + 12912) + v245;
            v269 = v159 + 16 * v162[v239 + 24];
            LODWORD(v241) = *(v269 + 12911) + v241;
            LODWORD(v245) = *(v269 + 12912) + v245;
            v270 = v159->len_pack[v162[v239 + 25]][0]
                 + v159->len_pack[v162[v239 + 24]][0]
                 + v159->len_pack[v162[v239 + 23]][0]
                 + v159->len_pack[v162[v239 + 22]][0]
                 + v159->len_pack[v162[v239 + 21]][0]
                 + v159->len_pack[v162[v239 + 20]][0]
                 + v159->len_pack[v162[v239 + 19]][0]
                 + v159->len_pack[v162[v239 + 18]][0]
                 + v159->len_pack[v162[v239 + 17]][0]
                 + v159->len_pack[v162[v239 + 16]][0]
                 + v159->len_pack[v162[v239 + 15]][0]
                 + v159->len_pack[v162[v239 + 14]][0]
                 + v257;
            v271 = v159 + 16 * v162[v239 + 25];
            LODWORD(v241) = *(v271 + 12911) + v241;
            LODWORD(v245) = *(v271 + 12912) + v245;
            v272 = v159 + 16 * v162[v239 + 26];
            LODWORD(v241) = *(v272 + 12911) + v241;
            LODWORD(v245) = *(v272 + 12912) + v245;
            v273 = v159 + 16 * v162[v239 + 27];
            LODWORD(v241) = *(v273 + 12911) + v241;
            LODWORD(v245) = *(v273 + 12912) + v245;
            v274 = v159 + 16 * v162[v239 + 28];
            LODWORD(v241) = *(v274 + 12911) + v241;
            LODWORD(v245) = *(v274 + 12912) + v245;
            v275 = v159 + 16 * v162[v239 + 29];
            LODWORD(v241) = *(v275 + 12911) + v241;
            LODWORD(v245) = *(v275 + 12912) + v245;
            v276 = v159 + 16 * v162[v239 + 30];
            LODWORD(v241) = *(v276 + 12911) + v241;
            LODWORD(v245) = *(v276 + 12912) + v245;
            v277 = v159 + 16 * v162[v239 + 31];
            LODWORD(v241) = *(v277 + 12911) + v241;
            LODWORD(v245) = *(v277 + 12912) + v245;
            v278 = v159 + 16 * v162[v239 + 32];
            LODWORD(v241) = *(v278 + 12911) + v241;
            LODWORD(v245) = *(v278 + 12912) + v245;
            v279 = v159 + 16 * v162[v239 + 33];
            LODWORD(v241) = *(v279 + 12911) + v241;
            LODWORD(v245) = *(v279 + 12912) + v245;
            v280 = v159 + 16 * v162[v239 + 34];
            LODWORD(v241) = *(v280 + 12911) + v241;
            LODWORD(v245) = *(v280 + 12912) + v245;
            v281 = v159 + 16 * v162[v239 + 35];
            LODWORD(v241) = *(v281 + 12911) + v241;
            LODWORD(v245) = *(v281 + 12912) + v245;
            v282 = v159 + 16 * v162[v239 + 36];
            LODWORD(v241) = *(v282 + 12911) + v241;
            LODWORD(v245) = *(v282 + 12912) + v245;
            v283 = v159->len_pack[v162[v239 + 37]][0]
                 + v159->len_pack[v162[v239 + 36]][0]
                 + v159->len_pack[v162[v239 + 35]][0]
                 + v159->len_pack[v162[v239 + 34]][0]
                 + v159->len_pack[v162[v239 + 33]][0]
                 + v159->len_pack[v162[v239 + 32]][0]
                 + v159->len_pack[v162[v239 + 31]][0]
                 + v159->len_pack[v162[v239 + 30]][0]
                 + v159->len_pack[v162[v239 + 29]][0]
                 + v159->len_pack[v162[v239 + 28]][0]
                 + v159->len_pack[v162[v239 + 27]][0]
                 + v159->len_pack[v162[v239 + 26]][0]
                 + v270;
            v284 = v159 + 16 * v162[v239 + 37];
            LODWORD(v241) = *(v284 + 12911) + v241;
            LODWORD(v245) = *(v284 + 12912) + v245;
            v285 = v159 + 16 * v162[v239 + 38];
            LODWORD(v241) = *(v285 + 12911) + v241;
            LODWORD(v245) = *(v285 + 12912) + v245;
            v286 = v159 + 16 * v162[v239 + 39];
            LODWORD(v241) = *(v286 + 12911) + v241;
            LODWORD(v245) = *(v286 + 12912) + v245;
            v287 = v159 + 16 * v162[v239 + 40];
            LODWORD(v241) = *(v287 + 12911) + v241;
            LODWORD(v245) = *(v287 + 12912) + v245;
            v288 = v159 + 16 * v162[v239 + 41];
            LODWORD(v241) = *(v288 + 12911) + v241;
            LODWORD(v245) = *(v288 + 12912) + v245;
            v289 = v159 + 16 * v162[v239 + 42];
            LODWORD(v241) = *(v289 + 12911) + v241;
            LODWORD(v245) = *(v289 + 12912) + v245;
            v290 = v159 + 16 * v162[v239 + 43];
            LODWORD(v241) = *(v290 + 12911) + v241;
            LODWORD(v245) = *(v290 + 12912) + v245;
            v291 = v159 + 16 * v162[v239 + 44];
            LODWORD(v241) = *(v291 + 12911) + v241;
            LODWORD(v245) = *(v291 + 12912) + v245;
            v292 = v159 + 16 * v162[v239 + 45];
            LODWORD(v241) = *(v292 + 12911) + v241;
            LODWORD(v245) = *(v292 + 12912) + v245;
            v293 = v159 + 16 * v162[v239 + 46];
            LODWORD(v241) = *(v293 + 12911) + v241;
            LODWORD(v245) = *(v293 + 12912) + v245;
            v294 = v159 + 16 * v162[v239 + 47];
            LODWORD(v241) = *(v294 + 12911) + v241;
            LODWORD(v245) = *(v294 + 12912) + v245;
            v295 = v159 + 16 * v162[v239 + 48];
            v176 = v159->len_pack[v162[v239 + 49]][0]
                 + v159->len_pack[v162[v239 + 48]][0]
                 + v159->len_pack[v162[v239 + 47]][0]
                 + v159->len_pack[v162[v239 + 46]][0]
                 + v159->len_pack[v162[v239 + 45]][0]
                 + v159->len_pack[v162[v239 + 44]][0]
                 + v159->len_pack[v162[v239 + 43]][0]
                 + v159->len_pack[v162[v239 + 42]][0]
                 + v159->len_pack[v162[v239 + 41]][0]
                 + v159->len_pack[v162[v239 + 40]][0]
                 + v159->len_pack[v162[v239 + 39]][0]
                 + v159->len_pack[v162[v239 + 38]][0]
                 + v283;
            v296 = v159 + 16 * v162[v239 + 49];
            LODWORD(v241) = *(v296 + 12911) + *(v295 + 12911) + v241;
            LODWORD(v245) = *(v296 + 12912) + *(v295 + 12912) + v245;
            v824[0] = v176;
            v824[1] = v241;
            v824[2] = v245;
          }
          else
          {
            if ( v169 >= v167 )
            {
              v171 = &v162[v167];
              do
              {
                v172 = v824;
                v173 = &v159->len[0][*v171];
                v174 = 0;
                do
                {
                  v175 = *v173;
                  ++v174;
                  v173 += 258;
                  *v172++ += v175;
                }
                while ( v160 > v174 );
                ++v171;
              }
              while ( v171 != &v815[(v169 - v167) + v167] );
            }
            LOWORD(v176) = v824[0];
          }
          v177 = 0;
          v178 = -1;
          v179 = 999999999;
          while ( 1 )
          {
            if ( v176 < v179 )
            {
              v179 = v176;
              v178 = v177;
            }
            if ( v160 <= ++v177 )
              break;
            LOWORD(v176) = *(v824 + v177);
          }
          v812 += v179;
          *selector = v178;
          ++v824[v178 + 4];
          ++v823;
          if ( v160 != 6 || v169 - v167 != 49 )
            break;
          v188 = v167;
          v189 = 258LL * v178;
          v167 = v169 + 1;
          ++v159->rfreq[v189 / 0x102][v162[v188]];
          v190 = v189 + v162[v188 + 1];
          ++v159->rfreq[0][v190];
          v191 = v189 + v162[v188 + 2];
          ++v159->rfreq[0][v191];
          v192 = v189 + v162[v188 + 3];
          ++v159->rfreq[0][v192];
          v193 = v189 + v162[v188 + 4];
          ++v159->rfreq[0][v193];
          v194 = v189 + v162[v188 + 5];
          ++v159->rfreq[0][v194];
          v195 = v189 + v162[v188 + 6];
          ++v159->rfreq[0][v195];
          v196 = v189 + v162[v188 + 7];
          ++v159->rfreq[0][v196];
          v197 = v189 + v162[v188 + 8];
          ++v159->rfreq[0][v197];
          v198 = v189 + v162[v188 + 9];
          ++v159->rfreq[0][v198];
          v199 = v189 + v162[v188 + 10];
          ++v159->rfreq[0][v199];
          v200 = v189 + v162[v188 + 11];
          ++v159->rfreq[0][v200];
          v201 = v189 + v162[v188 + 12];
          ++v159->rfreq[0][v201];
          v202 = v189 + v162[v188 + 13];
          ++v159->rfreq[0][v202];
          v203 = v189 + v162[v188 + 14];
          ++v159->rfreq[0][v203];
          v204 = v189 + v162[v188 + 15];
          ++v159->rfreq[0][v204];
          v205 = v189 + v162[v188 + 16];
          ++v159->rfreq[0][v205];
          v206 = v189 + v162[v188 + 17];
          ++v159->rfreq[0][v206];
          v207 = v189 + v162[v188 + 18];
          ++v159->rfreq[0][v207];
          v208 = v189 + v162[v188 + 19];
          ++v159->rfreq[0][v208];
          v209 = v189 + v162[v188 + 20];
          ++v159->rfreq[0][v209];
          v210 = v189 + v162[v188 + 21];
          ++v159->rfreq[0][v210];
          v211 = v189 + v162[v188 + 22];
          ++v159->rfreq[0][v211];
          v212 = v189 + v162[v188 + 23];
          ++v159->rfreq[0][v212];
          v213 = v189 + v162[v188 + 24];
          ++v159->rfreq[0][v213];
          v214 = v189 + v162[v188 + 25];
          ++v159->rfreq[0][v214];
          v215 = v189 + v162[v188 + 26];
          ++v159->rfreq[0][v215];
          v216 = v189 + v162[v188 + 27];
          ++v159->rfreq[0][v216];
          v217 = v189 + v162[v188 + 28];
          ++v159->rfreq[0][v217];
          v218 = v189 + v162[v188 + 29];
          ++v159->rfreq[0][v218];
          v219 = v189 + v162[v188 + 30];
          ++v159->rfreq[0][v219];
          v220 = v189 + v162[v188 + 31];
          ++v159->rfreq[0][v220];
          v221 = v189 + v162[v188 + 32];
          ++v159->rfreq[0][v221];
          v222 = v189 + v162[v188 + 33];
          ++v159->rfreq[0][v222];
          v223 = v189 + v162[v188 + 34];
          ++v159->rfreq[0][v223];
          v224 = v189 + v162[v188 + 35];
          ++v159->rfreq[0][v224];
          v225 = v189 + v162[v188 + 36];
          ++v159->rfreq[0][v225];
          v226 = v189 + v162[v188 + 37];
          ++v159->rfreq[0][v226];
          v227 = v189 + v162[v188 + 38];
          ++v159->rfreq[0][v227];
          v228 = v189 + v162[v188 + 39];
          ++v159->rfreq[0][v228];
          v229 = v189 + v162[v188 + 40];
          ++v159->rfreq[0][v229];
          v230 = v189 + v162[v188 + 41];
          ++v159->rfreq[0][v230];
          v231 = v189 + v162[v188 + 42];
          ++v159->rfreq[0][v231];
          v232 = v189 + v162[v188 + 43];
          ++v159->rfreq[0][v232];
          v233 = v189 + v162[v188 + 44];
          ++v159->rfreq[0][v233];
          v234 = v189 + v162[v188 + 45];
          ++v159->rfreq[0][v234];
          v235 = v189 + v162[v188 + 46];
          ++v159->rfreq[0][v235];
          v236 = v189 + v162[v188 + 47];
          ++v159->rfreq[0][v236];
          v237 = v189 + v162[v188 + 48];
          ++v159->rfreq[0][v237];
          v238 = v162[v188 + 49] + v189;
          ++selector;
          ++v159->rfreq[0][v238];
          if ( v169 + 1 >= v161 )
            goto LABEL_192;
        }
        if ( v169 >= v167 )
        {
          v180 = &v162[v167];
          v181 = v178;
          do
          {
            v182 = *v180++;
            ++v159->rfreq[v181][v182];
          }
          while ( v180 != &v815[(v169 - v167) + v167] );
        }
        v167 = v169 + 1;
        ++selector;
      }
      while ( v169 + 1 < v161 );
    }
LABEL_192:
    if ( sa > 2 )
    {
      __fprintf_chk(stderr, 1, "      pass %d: size is %d, grp uses are ", v805, v812 >> 3);
      v297 = 0;
      do
      {
        v817 = v297;
        __fprintf_chk(stderr, 1, "%d ", v824[v297 + 4]);
        v297 = v817 + 1;
      }
      while ( v160 > v817 + 1 );
      fputc(10, stderr);
    }
    v183 = v159->rfreq[0];
    v184 = 0;
    v185 = len;
    do
    {
      v186 = v185;
      v813 = v184;
      v185 += 258;
      v816 = v183;
      BZ2_hbMakeCodeLengths(v186, v183, alphaSize, 20);
      v184 = v813 + 1;
      v183 = v816 + 258;
    }
    while ( v160 > v813 + 1 );
    if ( ++v805 == 5 )
      break;
    v161 = v159->nMTF;
    sa = v159->verbosity;
  }
  if ( v823 > 18002 )
    BZ2_bz__AssertH__fail(3003);
  v298 = 0;
  do
  {
    v826[v298 - 1] = v298;
    ++v298;
  }
  while ( v160 > v298 );
  if ( v823 != 0 )
  {
    v299 = v159->selector;
    v300 = v825;
    do
    {
      v301 = *v299;
      if ( *v299 == v300 )
      {
        LOBYTE(v303) = 0;
      }
      else
      {
        v302 = v300;
        v303 = 0;
        v304 = v826;
        while ( 1 )
        {
          v300 = *v304;
          ++v303;
          *v304++ = v302;
          if ( v301 == v300 )
            break;
          v302 = v300;
        }
      }
      v299[18002] = v303;
      ++v299;
      v825 = v300;
    }
    while ( v299 != &v159->selector[v823 - 1 + 1] );
  }
  sb = v159;
  v818 = 0;
  v305 = code;
  v810 = v162;
  v306 = len;
  do
  {
    if ( alphaSize <= 0 )
    {
      v309 = 0;
      v308 = 32;
    }
    else
    {
      v307 = v306;
      v308 = 32;
      v309 = 0;
      do
      {
        v310 = *v307;
        if ( v309 < v310 )
          v309 = *v307;
        if ( v308 > v310 )
          v308 = *v307;
        ++v307;
      }
      while ( &v306[v802 + 1] != v307 );
      if ( v309 > 20 )
        BZ2_bz__AssertH__fail(3004);
      if ( v308 == 0 )
        BZ2_bz__AssertH__fail(3005);
    }
    v311 = v306;
    v312 = v305;
    v305 += 258;
    v306 += 258;
    BZ2_hbAssignCodes(v312, v311, v308, v309, alphaSize);
    ++v818;
  }
  while ( v160 > v818 );
  v313 = 0;
  v2 = sb;
  do
  {
    v826[v313 - 1] = 0;
    for ( i2 = 0; i2 != 16; ++i2 )
    {
      if ( sb->inUse[16 * v313 + i2] != 0 )
        v826[v313 - 1] = 1;
    }
    ++v313;
  }
  while ( v313 != 16 );
  v315 = sb->numZ;
  v316 = v315;
  v317 = &v825;
  do
  {
    v318 = sb->bsLive;
    if ( *v317 != 0 )
    {
      if ( v318 <= 7 )
      {
        v337 = sb->bsBuff;
      }
      else
      {
        v335 = sb->bsBuff;
        do
        {
          sb->zbits[v316] = HIBYTE(v335);
          v316 = sb->numZ + 1;
          v336 = sb->bsLive;
          v335 = sb->bsBuff << 8;
          sb->numZ = v316;
          sb->bsBuff = v335;
          v318 = v336 - 8;
          sb->bsLive = v318;
        }
        while ( v318 > 7 );
        v337 = v335;
      }
      sb->bsLive = v318 + 1;
      sb->bsBuff = v337 | (1 << (31 - v318));
    }
    else
    {
      if ( v318 > 7 )
      {
        v319 = sb->bsBuff;
        do
        {
          sb->zbits[v316] = HIBYTE(v319);
          v316 = sb->numZ + 1;
          v320 = sb->bsLive;
          v319 = sb->bsBuff << 8;
          sb->numZ = v316;
          sb->bsBuff = v319;
          v318 = v320 - 8;
          sb->bsLive = v318;
        }
        while ( v318 > 7 );
      }
      sb->bsLive = v318 + 1;
    }
    ++v317;
  }
  while ( v317 != v827 );
  for ( i3 = 0; i3 != 16; ++i3 )
  {
    if ( v826[i3 - 1] != 0 )
    {
      for ( i4 = 0; i4 != 16; ++i4 )
      {
        if ( sb->inUse[16 * i3 + i4] != 0 )
        {
          v338 = sb->bsLive;
          for ( i5 = sb->bsBuff; v338 > 7; sb->bsBuff = i5 )
          {
            sb->zbits[v316] = HIBYTE(i5);
            v316 = sb->numZ + 1;
            v340 = sb->bsBuff;
            v338 = sb->bsLive - 8;
            sb->numZ = v316;
            sb->bsLive = v338;
            i5 = v340 << 8;
          }
          sb->bsLive = v338 + 1;
          sb->bsBuff = i5 | (1 << (31 - v338));
        }
        else
        {
          v323 = sb->bsLive;
          if ( v323 > 7 )
          {
            v324 = sb->bsBuff;
            do
            {
              sb->zbits[v316] = HIBYTE(v324);
              v316 = sb->numZ + 1;
              v325 = sb->bsBuff;
              v323 = sb->bsLive - 8;
              sb->numZ = v316;
              sb->bsLive = v323;
              v324 = v325 << 8;
              sb->bsBuff = v324;
            }
            while ( v323 > 7 );
          }
          sb->bsLive = v323 + 1;
        }
      }
    }
  }
  if ( sb->verbosity > 2 )
  {
    __fprintf_chk(stderr, 1, "      bytes: mapping %d, ", v316 - v315);
    v316 = sb->numZ;
  }
  v326 = sb->bsLive;
  if ( v326 <= 7 )
  {
    v330 = sb->bsBuff;
    v328 = v316;
  }
  else
  {
    v327 = sb->bsBuff;
    v328 = v316;
    do
    {
      sb->zbits[v328] = HIBYTE(v327);
      v328 = sb->numZ + 1;
      v329 = sb->bsLive;
      v327 = sb->bsBuff << 8;
      sb->numZ = v328;
      sb->bsBuff = v327;
      v326 = v329 - 8;
      sb->bsLive = v326;
    }
    while ( v326 > 7 );
    v330 = v327;
  }
  v341 = 29 - v326;
  v342 = v326 + 3;
  sb->bsLive = v342;
  v343 = v330 | (v821 << v341);
  for ( sb->bsBuff = v343; v342 > 7; sb->bsLive = v342 )
  {
    sb->zbits[v328] = HIBYTE(v343);
    v328 = sb->numZ + 1;
    v344 = sb->bsLive;
    v343 = sb->bsBuff << 8;
    sb->numZ = v328;
    sb->bsBuff = v343;
    v342 = v344 - 8;
  }
  v345 = 17 - v342;
  v346 = v342 + 15;
  sb->bsLive = v346;
  sb->bsBuff = v343 | (v823 << v345);
  if ( v823 != 0 )
  {
    v347 = v346;
    selectorMtf = sb->selectorMtf;
    do
    {
      if ( *selectorMtf != 0 )
      {
        v349 = sb->bsBuff;
        v350 = 0;
        while ( 1 )
        {
          v351 = v328;
          if ( v347 > 7 )
          {
            do
            {
              sb->zbits[v351] = HIBYTE(v349);
              v351 = sb->numZ + 1;
              v352 = sb->bsBuff;
              v347 = sb->bsLive - 8;
              sb->numZ = v351;
              sb->bsLive = v347;
              v349 = v352 << 8;
              sb->bsBuff = v349;
            }
            while ( v347 > 7 );
            v328 = v351;
          }
          ++v350;
          v353 = 31 - v347++;
          sb->bsLive = v347;
          v354 = v349 | (1 << v353);
          sb->bsBuff = v354;
          if ( v350 >= *selectorMtf )
            break;
          v349 = v354;
        }
      }
      if ( v347 > 7 )
      {
        v355 = sb->bsBuff;
        do
        {
          sb->zbits[v328] = HIBYTE(v355);
          v328 = sb->numZ + 1;
          v356 = sb->bsBuff;
          v347 = sb->bsLive - 8;
          sb->numZ = v328;
          sb->bsLive = v347;
          v355 = v356 << 8;
          sb->bsBuff = v355;
        }
        while ( v347 > 7 );
      }
      ++selectorMtf;
      sb->bsLive = ++v347;
    }
    while ( selectorMtf != &sb->selectorMtf[v823 - 1 + 1] );
  }
  if ( sb->verbosity > 2 )
  {
    __fprintf_chk(stderr, 1, "selectors %d, ", v328 - v316);
    v328 = sb->numZ;
  }
  v357 = sb;
  v358 = v328;
  v819 = 0;
  do
  {
    v359 = sb->bsLive;
    v360 = v357->len[0][0];
    for ( i6 = sb->bsBuff; v359 > 7; sb->bsBuff = i6 )
    {
      sb->zbits[v358] = HIBYTE(i6);
      v358 = sb->numZ + 1;
      v362 = sb->bsBuff;
      v359 = sb->bsLive - 8;
      sb->numZ = v358;
      sb->bsLive = v359;
      i6 = v362 << 8;
    }
    v363 = i6 | (v360 << (27 - v359));
    v364 = v359 + 5;
    sb->bsBuff = v363;
    sb->bsLive = v359 + 5;
    if ( alphaSize > 0 )
    {
      v365 = 0;
      do
      {
        v366 = v357->len[0][v365];
        if ( v360 < v366 )
        {
          for ( i7 = sb->bsBuff; ; i7 = v370 )
          {
            while ( v364 > 7 )
            {
              sb->zbits[v358] = HIBYTE(i7);
              v358 = sb->numZ + 1;
              v368 = sb->bsLive;
              i7 = sb->bsBuff << 8;
              sb->numZ = v358;
              sb->bsBuff = i7;
              v364 = v368 - 8;
              sb->bsLive = v364;
            }
            ++v360;
            v369 = 30 - v364;
            v364 += 2;
            sb->bsLive = v364;
            v370 = i7 | (2 << v369);
            sb->bsBuff = v370;
            v366 = v357->len[0][v365];
            if ( v360 >= v366 )
              break;
          }
        }
        if ( v360 > v366 )
        {
          for ( i8 = sb->bsBuff; ; i8 = v374 )
          {
            while ( v364 > 7 )
            {
              sb->zbits[v358] = HIBYTE(i8);
              v358 = sb->numZ + 1;
              v372 = sb->bsLive;
              i8 = sb->bsBuff << 8;
              sb->numZ = v358;
              sb->bsBuff = i8;
              v364 = v372 - 8;
              sb->bsLive = v364;
            }
            --v360;
            v373 = 30 - v364;
            v364 += 2;
            sb->bsLive = v364;
            v374 = i8 | (3 << v373);
            sb->bsBuff = v374;
            if ( v360 <= v357->len[0][v365] )
              break;
          }
        }
        if ( v364 > 7 )
        {
          v375 = sb->bsBuff;
          do
          {
            sb->zbits[v358] = HIBYTE(v375);
            v358 = sb->numZ + 1;
            v376 = sb->bsLive;
            v375 = sb->bsBuff << 8;
            sb->numZ = v358;
            sb->bsBuff = v375;
            v364 = v376 - 8;
            sb->bsLive = v364;
          }
          while ( v364 > 7 );
        }
        ++v365;
        sb->bsLive = ++v364;
      }
      while ( v365 != v802 + 1 );
    }
    ++v819;
    v357 = (v357 + 258);
  }
  while ( v160 > v819 );
  if ( sb->verbosity > 2 )
  {
    __fprintf_chk(stderr, 1, "code lengths %d, ", v358 - v328);
    v358 = sb->numZ;
  }
  v377 = sb->nMTF;
  if ( v377 <= 0 )
  {
    v103 = 0;
  }
  else
  {
    v378 = sb;
    v379 = 0;
    v380 = v358;
    do
    {
      v381 = v379 + 49;
      if ( v379 + 49 >= v377 )
        v381 = v377 - 1;
      if ( v160 <= v378->selector[0] )
        BZ2_bz__AssertH__fail(3006);
      if ( v160 == 6 && v381 - v379 == 49 )
      {
        v396 = sb->bsLive;
        v397 = &sb->selectorMtf[258 * v378->selector[0] + 17990];
        v398 = v379;
        v399 = v810[v398];
        v400 = sb->code[v378->selector[0]];
        v401 = *(v400 + 4 * v399);
        v402 = v397[v399 + 12];
        if ( v396 <= 7 )
        {
          v404 = sb->bsBuff;
        }
        else
        {
          v403 = sb->numZ;
          v404 = sb->bsBuff;
          do
          {
            sb->zbits[v403] = HIBYTE(v404);
            v403 = sb->numZ + 1;
            v405 = sb->bsLive;
            v404 = sb->bsBuff << 8;
            sb->numZ = v403;
            sb->bsBuff = v404;
            v396 = v405 - 8;
            sb->bsLive = v396;
          }
          while ( v396 > 7 );
        }
        v406 = 32 - v396;
        v407 = v402 + v396;
        sb->bsLive = v407;
        v408 = v404 | (v401 << (v406 - v402));
        sb->bsBuff = v408;
        v409 = v810[v398 + 1];
        v410 = *(v400 + 4 * v409);
        v411 = v397[v409 + 12];
        if ( v407 > 7 )
        {
          v412 = sb->numZ;
          do
          {
            sb->zbits[v412] = HIBYTE(v408);
            v412 = sb->numZ + 1;
            v413 = sb->bsLive;
            v408 = sb->bsBuff << 8;
            sb->numZ = v412;
            sb->bsBuff = v408;
            v407 = v413 - 8;
            sb->bsLive = v407;
          }
          while ( v407 > 7 );
        }
        v414 = 32 - v407;
        v415 = v411 + v407;
        sb->bsLive = v415;
        v416 = v408 | (v410 << (v414 - v411));
        sb->bsBuff = v416;
        v417 = v810[v398 + 2];
        v418 = *(v400 + 4 * v417);
        v419 = v397[v417 + 12];
        if ( v415 > 7 )
        {
          v420 = sb->numZ;
          do
          {
            sb->zbits[v420] = HIBYTE(v416);
            v420 = sb->numZ + 1;
            v421 = sb->bsLive;
            v416 = sb->bsBuff << 8;
            sb->numZ = v420;
            sb->bsBuff = v416;
            v415 = v421 - 8;
            sb->bsLive = v415;
          }
          while ( v415 > 7 );
        }
        v422 = 32 - v415;
        v423 = v419 + v415;
        sb->bsLive = v423;
        v424 = v416 | (v418 << (v422 - v419));
        sb->bsBuff = v424;
        v425 = v810[v398 + 3];
        v426 = *(v400 + 4 * v425);
        v427 = v397[v425 + 12];
        if ( v423 > 7 )
        {
          v428 = sb->numZ;
          do
          {
            sb->zbits[v428] = HIBYTE(v424);
            v428 = sb->numZ + 1;
            v429 = sb->bsLive;
            v424 = sb->bsBuff << 8;
            sb->numZ = v428;
            sb->bsBuff = v424;
            v423 = v429 - 8;
            sb->bsLive = v423;
          }
          while ( v423 > 7 );
        }
        v430 = 32 - v423;
        v431 = v427 + v423;
        sb->bsLive = v431;
        v432 = v424 | (v426 << (v430 - v427));
        sb->bsBuff = v432;
        v433 = v810[v398 + 4];
        v434 = *(v400 + 4 * v433);
        v435 = v397[v433 + 12];
        if ( v431 > 7 )
        {
          v436 = sb->numZ;
          do
          {
            sb->zbits[v436] = HIBYTE(v432);
            v436 = sb->numZ + 1;
            v437 = sb->bsLive;
            v432 = sb->bsBuff << 8;
            sb->numZ = v436;
            sb->bsBuff = v432;
            v431 = v437 - 8;
            sb->bsLive = v431;
          }
          while ( v431 > 7 );
        }
        v438 = 32 - v431;
        v439 = v435 + v431;
        sb->bsLive = v439;
        v440 = v432 | (v434 << (v438 - v435));
        sb->bsBuff = v440;
        v441 = v810[v398 + 5];
        v442 = *(v400 + 4 * v441);
        v443 = v397[v441 + 12];
        if ( v439 > 7 )
        {
          v444 = sb->numZ;
          do
          {
            sb->zbits[v444] = HIBYTE(v440);
            v444 = sb->numZ + 1;
            v445 = sb->bsLive;
            v440 = sb->bsBuff << 8;
            sb->numZ = v444;
            sb->bsBuff = v440;
            v439 = v445 - 8;
            sb->bsLive = v439;
          }
          while ( v439 > 7 );
        }
        v446 = 32 - v439;
        v447 = v443 + v439;
        sb->bsLive = v447;
        v448 = v440 | (v442 << (v446 - v443));
        sb->bsBuff = v448;
        v449 = v810[v398 + 6];
        v450 = *(v400 + 4 * v449);
        v451 = v397[v449 + 12];
        if ( v447 > 7 )
        {
          v452 = sb->numZ;
          do
          {
            sb->zbits[v452] = HIBYTE(v448);
            v452 = sb->numZ + 1;
            v453 = sb->bsLive;
            v448 = sb->bsBuff << 8;
            sb->numZ = v452;
            sb->bsBuff = v448;
            v447 = v453 - 8;
            sb->bsLive = v447;
          }
          while ( v447 > 7 );
        }
        v454 = 32 - v447;
        v455 = v451 + v447;
        sb->bsLive = v455;
        v456 = v448 | (v450 << (v454 - v451));
        sb->bsBuff = v456;
        v457 = v810[v398 + 7];
        v458 = *(v400 + 4 * v457);
        v459 = v397[v457 + 12];
        if ( v455 > 7 )
        {
          v460 = sb->numZ;
          do
          {
            sb->zbits[v460] = HIBYTE(v456);
            v460 = sb->numZ + 1;
            v461 = sb->bsLive;
            v456 = sb->bsBuff << 8;
            sb->numZ = v460;
            sb->bsBuff = v456;
            v455 = v461 - 8;
            sb->bsLive = v455;
          }
          while ( v455 > 7 );
        }
        v462 = 32 - v455;
        v463 = v459 + v455;
        sb->bsLive = v463;
        v464 = v456 | (v458 << (v462 - v459));
        sb->bsBuff = v464;
        v465 = v810[v398 + 8];
        v466 = *(v400 + 4 * v465);
        v467 = v397[v465 + 12];
        if ( v463 > 7 )
        {
          v468 = sb->numZ;
          do
          {
            sb->zbits[v468] = HIBYTE(v464);
            v468 = sb->numZ + 1;
            v469 = sb->bsLive;
            v464 = sb->bsBuff << 8;
            sb->numZ = v468;
            sb->bsBuff = v464;
            v463 = v469 - 8;
            sb->bsLive = v463;
          }
          while ( v463 > 7 );
        }
        v470 = 32 - v463;
        v471 = v467 + v463;
        sb->bsLive = v471;
        v472 = v464 | (v466 << (v470 - v467));
        sb->bsBuff = v472;
        v473 = v810[v398 + 9];
        v474 = *(v400 + 4 * v473);
        v475 = v397[v473 + 12];
        if ( v471 > 7 )
        {
          v476 = sb->numZ;
          do
          {
            sb->zbits[v476] = HIBYTE(v472);
            v476 = sb->numZ + 1;
            v477 = sb->bsLive;
            v472 = sb->bsBuff << 8;
            sb->numZ = v476;
            sb->bsBuff = v472;
            v471 = v477 - 8;
            sb->bsLive = v471;
          }
          while ( v471 > 7 );
        }
        v478 = 32 - v471;
        v479 = v475 + v471;
        sb->bsLive = v479;
        v480 = v472 | (v474 << (v478 - v475));
        sb->bsBuff = v480;
        v481 = v810[v398 + 10];
        v482 = *(v400 + 4 * v481);
        v483 = v397[v481 + 12];
        if ( v479 > 7 )
        {
          v484 = sb->numZ;
          do
          {
            sb->zbits[v484] = HIBYTE(v480);
            v484 = sb->numZ + 1;
            v485 = sb->bsLive;
            v480 = sb->bsBuff << 8;
            sb->numZ = v484;
            sb->bsBuff = v480;
            v479 = v485 - 8;
            sb->bsLive = v479;
          }
          while ( v479 > 7 );
        }
        v486 = 32 - v479;
        v487 = v483 + v479;
        sb->bsLive = v487;
        v488 = v480 | (v482 << (v486 - v483));
        sb->bsBuff = v488;
        v489 = v810[v398 + 11];
        v490 = *(v400 + 4 * v489);
        v491 = v397[v489 + 12];
        if ( v487 > 7 )
        {
          v492 = sb->numZ;
          do
          {
            sb->zbits[v492] = HIBYTE(v488);
            v492 = sb->numZ + 1;
            v493 = sb->bsLive;
            v488 = sb->bsBuff << 8;
            sb->numZ = v492;
            sb->bsBuff = v488;
            v487 = v493 - 8;
            sb->bsLive = v487;
          }
          while ( v487 > 7 );
        }
        v494 = 32 - v487;
        v495 = v491 + v487;
        sb->bsLive = v495;
        v496 = v488 | (v490 << (v494 - v491));
        sb->bsBuff = v496;
        v497 = v810[v398 + 12];
        v498 = *(v400 + 4 * v497);
        v499 = v397[v497 + 12];
        if ( v495 > 7 )
        {
          v500 = sb->numZ;
          do
          {
            sb->zbits[v500] = HIBYTE(v496);
            v500 = sb->numZ + 1;
            v501 = sb->bsLive;
            v496 = sb->bsBuff << 8;
            sb->numZ = v500;
            sb->bsBuff = v496;
            v495 = v501 - 8;
            sb->bsLive = v495;
          }
          while ( v495 > 7 );
        }
        v502 = 32 - v495;
        v503 = v499 + v495;
        sb->bsLive = v503;
        v504 = v496 | (v498 << (v502 - v499));
        sb->bsBuff = v504;
        v505 = v810[v398 + 13];
        v506 = *(v400 + 4 * v505);
        v507 = v397[v505 + 12];
        if ( v503 > 7 )
        {
          v508 = sb->numZ;
          do
          {
            sb->zbits[v508] = HIBYTE(v504);
            v508 = sb->numZ + 1;
            v509 = sb->bsLive;
            v504 = sb->bsBuff << 8;
            sb->numZ = v508;
            sb->bsBuff = v504;
            v503 = v509 - 8;
            sb->bsLive = v503;
          }
          while ( v503 > 7 );
        }
        v510 = 32 - v503;
        v511 = v507 + v503;
        sb->bsLive = v511;
        v512 = v504 | (v506 << (v510 - v507));
        sb->bsBuff = v512;
        v513 = v810[v398 + 14];
        v514 = *(v400 + 4 * v513);
        v515 = v397[v513 + 12];
        if ( v511 > 7 )
        {
          v516 = sb->numZ;
          do
          {
            sb->zbits[v516] = HIBYTE(v512);
            v516 = sb->numZ + 1;
            v517 = sb->bsLive;
            v512 = sb->bsBuff << 8;
            sb->numZ = v516;
            sb->bsBuff = v512;
            v511 = v517 - 8;
            sb->bsLive = v511;
          }
          while ( v511 > 7 );
        }
        v518 = 32 - v511;
        v519 = v515 + v511;
        sb->bsLive = v519;
        v520 = v512 | (v514 << (v518 - v515));
        sb->bsBuff = v520;
        v521 = v810[v398 + 15];
        v522 = *(v400 + 4 * v521);
        v523 = v397[v521 + 12];
        if ( v519 > 7 )
        {
          v524 = sb->numZ;
          do
          {
            sb->zbits[v524] = HIBYTE(v520);
            v524 = sb->numZ + 1;
            v525 = sb->bsLive;
            v520 = sb->bsBuff << 8;
            sb->numZ = v524;
            sb->bsBuff = v520;
            v519 = v525 - 8;
            sb->bsLive = v519;
          }
          while ( v519 > 7 );
        }
        v526 = 32 - v519;
        v527 = v523 + v519;
        sb->bsLive = v527;
        v528 = v520 | (v522 << (v526 - v523));
        sb->bsBuff = v528;
        v529 = v810[v398 + 16];
        v530 = *(v400 + 4 * v529);
        v531 = v397[v529 + 12];
        if ( v527 > 7 )
        {
          v532 = sb->numZ;
          do
          {
            sb->zbits[v532] = HIBYTE(v528);
            v532 = sb->numZ + 1;
            v533 = sb->bsLive;
            v528 = sb->bsBuff << 8;
            sb->numZ = v532;
            sb->bsBuff = v528;
            v527 = v533 - 8;
            sb->bsLive = v527;
          }
          while ( v527 > 7 );
        }
        v534 = 32 - v527;
        v535 = v531 + v527;
        sb->bsLive = v535;
        v536 = v528 | (v530 << (v534 - v531));
        sb->bsBuff = v536;
        v537 = v810[v398 + 17];
        v538 = *(v400 + 4 * v537);
        v539 = v397[v537 + 12];
        if ( v535 > 7 )
        {
          v540 = sb->numZ;
          do
          {
            sb->zbits[v540] = HIBYTE(v536);
            v540 = sb->numZ + 1;
            v541 = sb->bsLive;
            v536 = sb->bsBuff << 8;
            sb->numZ = v540;
            sb->bsBuff = v536;
            v535 = v541 - 8;
            sb->bsLive = v535;
          }
          while ( v535 > 7 );
        }
        v542 = 32 - v535;
        v543 = v539 + v535;
        sb->bsLive = v543;
        v544 = v536 | (v538 << (v542 - v539));
        sb->bsBuff = v544;
        v545 = v810[v398 + 18];
        v546 = *(v400 + 4 * v545);
        v547 = v397[v545 + 12];
        if ( v543 > 7 )
        {
          v548 = sb->numZ;
          do
          {
            sb->zbits[v548] = HIBYTE(v544);
            v548 = sb->numZ + 1;
            v549 = sb->bsLive;
            v544 = sb->bsBuff << 8;
            sb->numZ = v548;
            sb->bsBuff = v544;
            v543 = v549 - 8;
            sb->bsLive = v543;
          }
          while ( v543 > 7 );
        }
        v550 = 32 - v543;
        v551 = v547 + v543;
        sb->bsLive = v551;
        v552 = v544 | (v546 << (v550 - v547));
        sb->bsBuff = v552;
        v553 = v810[v398 + 19];
        v554 = *(v400 + 4 * v553);
        v555 = v397[v553 + 12];
        if ( v551 > 7 )
        {
          v556 = sb->numZ;
          do
          {
            sb->zbits[v556] = HIBYTE(v552);
            v556 = sb->numZ + 1;
            v557 = sb->bsLive;
            v552 = sb->bsBuff << 8;
            sb->numZ = v556;
            sb->bsBuff = v552;
            v551 = v557 - 8;
            sb->bsLive = v551;
          }
          while ( v551 > 7 );
        }
        v558 = 32 - v551;
        v559 = v555 + v551;
        sb->bsLive = v559;
        v560 = v552 | (v554 << (v558 - v555));
        sb->bsBuff = v560;
        v561 = v810[v398 + 20];
        v562 = *(v400 + 4 * v561);
        v563 = v397[v561 + 12];
        if ( v559 > 7 )
        {
          v564 = sb->numZ;
          do
          {
            sb->zbits[v564] = HIBYTE(v560);
            v564 = sb->numZ + 1;
            v565 = sb->bsLive;
            v560 = sb->bsBuff << 8;
            sb->numZ = v564;
            sb->bsBuff = v560;
            v559 = v565 - 8;
            sb->bsLive = v559;
          }
          while ( v559 > 7 );
        }
        v566 = 32 - v559;
        v567 = v563 + v559;
        sb->bsLive = v567;
        v568 = v560 | (v562 << (v566 - v563));
        sb->bsBuff = v568;
        v569 = v810[v398 + 21];
        v570 = *(v400 + 4 * v569);
        v571 = v397[v569 + 12];
        if ( v567 > 7 )
        {
          v572 = sb->numZ;
          do
          {
            sb->zbits[v572] = HIBYTE(v568);
            v572 = sb->numZ + 1;
            v573 = sb->bsLive;
            v568 = sb->bsBuff << 8;
            sb->numZ = v572;
            sb->bsBuff = v568;
            v567 = v573 - 8;
            sb->bsLive = v567;
          }
          while ( v567 > 7 );
        }
        v574 = 32 - v567;
        v575 = v571 + v567;
        sb->bsLive = v575;
        v576 = v568 | (v570 << (v574 - v571));
        sb->bsBuff = v576;
        v577 = v810[v398 + 22];
        v578 = *(v400 + 4 * v577);
        v579 = v397[v577 + 12];
        if ( v575 > 7 )
        {
          v580 = sb->numZ;
          do
          {
            sb->zbits[v580] = HIBYTE(v576);
            v580 = sb->numZ + 1;
            v581 = sb->bsLive;
            v576 = sb->bsBuff << 8;
            sb->numZ = v580;
            sb->bsBuff = v576;
            v575 = v581 - 8;
            sb->bsLive = v575;
          }
          while ( v575 > 7 );
        }
        v582 = 32 - v575;
        v583 = v579 + v575;
        sb->bsLive = v583;
        v584 = v576 | (v578 << (v582 - v579));
        sb->bsBuff = v584;
        v585 = v810[v398 + 23];
        v586 = *(v400 + 4 * v585);
        v587 = v397[v585 + 12];
        if ( v583 > 7 )
        {
          v588 = sb->numZ;
          do
          {
            sb->zbits[v588] = HIBYTE(v584);
            v588 = sb->numZ + 1;
            v589 = sb->bsLive;
            v584 = sb->bsBuff << 8;
            sb->numZ = v588;
            sb->bsBuff = v584;
            v583 = v589 - 8;
            sb->bsLive = v583;
          }
          while ( v583 > 7 );
        }
        v590 = 32 - v583;
        v591 = v587 + v583;
        sb->bsLive = v591;
        v592 = v584 | (v586 << (v590 - v587));
        sb->bsBuff = v592;
        v593 = v810[v398 + 24];
        v594 = *(v400 + 4 * v593);
        v595 = v397[v593 + 12];
        if ( v591 > 7 )
        {
          v596 = sb->numZ;
          do
          {
            sb->zbits[v596] = HIBYTE(v592);
            v596 = sb->numZ + 1;
            v597 = sb->bsLive;
            v592 = sb->bsBuff << 8;
            sb->numZ = v596;
            sb->bsBuff = v592;
            v591 = v597 - 8;
            sb->bsLive = v591;
          }
          while ( v591 > 7 );
        }
        v598 = 32 - v591;
        v599 = v595 + v591;
        sb->bsLive = v599;
        v600 = v592 | (v594 << (v598 - v595));
        sb->bsBuff = v600;
        v601 = v810[v398 + 25];
        v602 = *(v400 + 4 * v601);
        v603 = v397[v601 + 12];
        if ( v599 > 7 )
        {
          v604 = sb->numZ;
          do
          {
            sb->zbits[v604] = HIBYTE(v600);
            v604 = sb->numZ + 1;
            v605 = sb->bsLive;
            v600 = sb->bsBuff << 8;
            sb->numZ = v604;
            sb->bsBuff = v600;
            v599 = v605 - 8;
            sb->bsLive = v599;
          }
          while ( v599 > 7 );
        }
        v606 = 32 - v599;
        v607 = v603 + v599;
        sb->bsLive = v607;
        v608 = v600 | (v602 << (v606 - v603));
        sb->bsBuff = v608;
        v609 = v810[v398 + 26];
        v610 = *(v400 + 4 * v609);
        v611 = v397[v609 + 12];
        if ( v607 > 7 )
        {
          v612 = sb->numZ;
          do
          {
            sb->zbits[v612] = HIBYTE(v608);
            v612 = sb->numZ + 1;
            v613 = sb->bsLive;
            v608 = sb->bsBuff << 8;
            sb->numZ = v612;
            sb->bsBuff = v608;
            v607 = v613 - 8;
            sb->bsLive = v607;
          }
          while ( v607 > 7 );
        }
        v614 = 32 - v607;
        v615 = v611 + v607;
        sb->bsLive = v615;
        v616 = v608 | (v610 << (v614 - v611));
        sb->bsBuff = v616;
        v617 = v810[v398 + 27];
        v618 = *(v400 + 4 * v617);
        v619 = v397[v617 + 12];
        if ( v615 > 7 )
        {
          v620 = sb->numZ;
          do
          {
            sb->zbits[v620] = HIBYTE(v616);
            v620 = sb->numZ + 1;
            v621 = sb->bsLive;
            v616 = sb->bsBuff << 8;
            sb->numZ = v620;
            sb->bsBuff = v616;
            v615 = v621 - 8;
            sb->bsLive = v615;
          }
          while ( v615 > 7 );
        }
        v622 = 32 - v615;
        v623 = v619 + v615;
        sb->bsLive = v623;
        v624 = v616 | (v618 << (v622 - v619));
        sb->bsBuff = v624;
        v625 = v810[v398 + 28];
        v626 = *(v400 + 4 * v625);
        v627 = v397[v625 + 12];
        if ( v623 > 7 )
        {
          v628 = sb->numZ;
          do
          {
            sb->zbits[v628] = HIBYTE(v624);
            v628 = sb->numZ + 1;
            v629 = sb->bsLive;
            v624 = sb->bsBuff << 8;
            sb->numZ = v628;
            sb->bsBuff = v624;
            v623 = v629 - 8;
            sb->bsLive = v623;
          }
          while ( v623 > 7 );
        }
        v630 = 32 - v623;
        v631 = v627 + v623;
        sb->bsLive = v631;
        v632 = v624 | (v626 << (v630 - v627));
        sb->bsBuff = v632;
        v633 = v810[v398 + 29];
        v634 = *(v400 + 4 * v633);
        v635 = v397[v633 + 12];
        if ( v631 > 7 )
        {
          v636 = sb->numZ;
          do
          {
            sb->zbits[v636] = HIBYTE(v632);
            v636 = sb->numZ + 1;
            v637 = sb->bsLive;
            v632 = sb->bsBuff << 8;
            sb->numZ = v636;
            sb->bsBuff = v632;
            v631 = v637 - 8;
            sb->bsLive = v631;
          }
          while ( v631 > 7 );
        }
        v638 = 32 - v631;
        v639 = v635 + v631;
        sb->bsLive = v639;
        v640 = v632 | (v634 << (v638 - v635));
        sb->bsBuff = v640;
        v641 = v810[v398 + 30];
        v642 = *(v400 + 4 * v641);
        v643 = v397[v641 + 12];
        if ( v639 > 7 )
        {
          v644 = sb->numZ;
          do
          {
            sb->zbits[v644] = HIBYTE(v640);
            v644 = sb->numZ + 1;
            v645 = sb->bsLive;
            v640 = sb->bsBuff << 8;
            sb->numZ = v644;
            sb->bsBuff = v640;
            v639 = v645 - 8;
            sb->bsLive = v639;
          }
          while ( v639 > 7 );
        }
        v646 = 32 - v639;
        v647 = v643 + v639;
        sb->bsLive = v647;
        v648 = v640 | (v642 << (v646 - v643));
        sb->bsBuff = v648;
        v649 = v810[v398 + 31];
        v650 = *(v400 + 4 * v649);
        v651 = v397[v649 + 12];
        if ( v647 > 7 )
        {
          v652 = sb->numZ;
          do
          {
            sb->zbits[v652] = HIBYTE(v648);
            v652 = sb->numZ + 1;
            v653 = sb->bsLive;
            v648 = sb->bsBuff << 8;
            sb->numZ = v652;
            sb->bsBuff = v648;
            v647 = v653 - 8;
            sb->bsLive = v647;
          }
          while ( v647 > 7 );
        }
        v654 = 32 - v647;
        v655 = v651 + v647;
        sb->bsLive = v655;
        v656 = v648 | (v650 << (v654 - v651));
        sb->bsBuff = v656;
        v657 = v810[v398 + 32];
        v658 = *(v400 + 4 * v657);
        v659 = v397[v657 + 12];
        if ( v655 > 7 )
        {
          v660 = sb->numZ;
          do
          {
            sb->zbits[v660] = HIBYTE(v656);
            v660 = sb->numZ + 1;
            v661 = sb->bsLive;
            v656 = sb->bsBuff << 8;
            sb->numZ = v660;
            sb->bsBuff = v656;
            v655 = v661 - 8;
            sb->bsLive = v655;
          }
          while ( v655 > 7 );
        }
        v662 = 32 - v655;
        v663 = v659 + v655;
        sb->bsLive = v663;
        v664 = v656 | (v658 << (v662 - v659));
        sb->bsBuff = v664;
        v665 = v810[v398 + 33];
        v666 = *(v400 + 4 * v665);
        v667 = v397[v665 + 12];
        if ( v663 > 7 )
        {
          v668 = sb->numZ;
          do
          {
            sb->zbits[v668] = HIBYTE(v664);
            v668 = sb->numZ + 1;
            v669 = sb->bsLive;
            v664 = sb->bsBuff << 8;
            sb->numZ = v668;
            sb->bsBuff = v664;
            v663 = v669 - 8;
            sb->bsLive = v663;
          }
          while ( v663 > 7 );
        }
        v670 = 32 - v663;
        v671 = v667 + v663;
        sb->bsLive = v671;
        v672 = v664 | (v666 << (v670 - v667));
        sb->bsBuff = v672;
        v673 = v810[v398 + 34];
        v674 = *(v400 + 4 * v673);
        v675 = v397[v673 + 12];
        if ( v671 > 7 )
        {
          v676 = sb->numZ;
          do
          {
            sb->zbits[v676] = HIBYTE(v672);
            v676 = sb->numZ + 1;
            v677 = sb->bsLive;
            v672 = sb->bsBuff << 8;
            sb->numZ = v676;
            sb->bsBuff = v672;
            v671 = v677 - 8;
            sb->bsLive = v671;
          }
          while ( v671 > 7 );
        }
        v678 = 32 - v671;
        v679 = v675 + v671;
        sb->bsLive = v679;
        v680 = v672 | (v674 << (v678 - v675));
        sb->bsBuff = v680;
        v681 = v810[v398 + 35];
        v682 = *(v400 + 4 * v681);
        v683 = v397[v681 + 12];
        if ( v679 > 7 )
        {
          v684 = sb->numZ;
          do
          {
            sb->zbits[v684] = HIBYTE(v680);
            v684 = sb->numZ + 1;
            v685 = sb->bsLive;
            v680 = sb->bsBuff << 8;
            sb->numZ = v684;
            sb->bsBuff = v680;
            v679 = v685 - 8;
            sb->bsLive = v679;
          }
          while ( v679 > 7 );
        }
        v686 = 32 - v679;
        v687 = v683 + v679;
        sb->bsLive = v687;
        v688 = v680 | (v682 << (v686 - v683));
        sb->bsBuff = v688;
        v689 = v810[v398 + 36];
        v690 = *(v400 + 4 * v689);
        v691 = v397[v689 + 12];
        if ( v687 > 7 )
        {
          v692 = sb->numZ;
          do
          {
            sb->zbits[v692] = HIBYTE(v688);
            v692 = sb->numZ + 1;
            v693 = sb->bsLive;
            v688 = sb->bsBuff << 8;
            sb->numZ = v692;
            sb->bsBuff = v688;
            v687 = v693 - 8;
            sb->bsLive = v687;
          }
          while ( v687 > 7 );
        }
        v694 = 32 - v687;
        v695 = v691 + v687;
        sb->bsLive = v695;
        v696 = v688 | (v690 << (v694 - v691));
        sb->bsBuff = v696;
        v697 = v810[v398 + 37];
        v698 = *(v400 + 4 * v697);
        v699 = v397[v697 + 12];
        if ( v695 > 7 )
        {
          v700 = sb->numZ;
          do
          {
            sb->zbits[v700] = HIBYTE(v696);
            v700 = sb->numZ + 1;
            v701 = sb->bsLive;
            v696 = sb->bsBuff << 8;
            sb->numZ = v700;
            sb->bsBuff = v696;
            v695 = v701 - 8;
            sb->bsLive = v695;
          }
          while ( v695 > 7 );
        }
        v702 = 32 - v695;
        v703 = v699 + v695;
        sb->bsLive = v703;
        v704 = v696 | (v698 << (v702 - v699));
        sb->bsBuff = v704;
        v705 = v810[v398 + 38];
        v706 = *(v400 + 4 * v705);
        v707 = v397[v705 + 12];
        if ( v703 > 7 )
        {
          v708 = sb->numZ;
          do
          {
            sb->zbits[v708] = HIBYTE(v704);
            v708 = sb->numZ + 1;
            v709 = sb->bsLive;
            v704 = sb->bsBuff << 8;
            sb->numZ = v708;
            sb->bsBuff = v704;
            v703 = v709 - 8;
            sb->bsLive = v703;
          }
          while ( v703 > 7 );
        }
        v710 = 32 - v703;
        v711 = v707 + v703;
        sb->bsLive = v711;
        v712 = v704 | (v706 << (v710 - v707));
        sb->bsBuff = v712;
        v713 = v810[v398 + 39];
        v714 = *(v400 + 4 * v713);
        v715 = v397[v713 + 12];
        if ( v711 > 7 )
        {
          v716 = sb->numZ;
          do
          {
            sb->zbits[v716] = HIBYTE(v712);
            v716 = sb->numZ + 1;
            v717 = sb->bsLive;
            v712 = sb->bsBuff << 8;
            sb->numZ = v716;
            sb->bsBuff = v712;
            v711 = v717 - 8;
            sb->bsLive = v711;
          }
          while ( v711 > 7 );
        }
        v718 = 32 - v711;
        v719 = v715 + v711;
        sb->bsLive = v719;
        v720 = v712 | (v714 << (v718 - v715));
        sb->bsBuff = v720;
        v721 = v810[v398 + 40];
        v722 = *(v400 + 4 * v721);
        v723 = v397[v721 + 12];
        if ( v719 > 7 )
        {
          v724 = sb->numZ;
          do
          {
            sb->zbits[v724] = HIBYTE(v720);
            v724 = sb->numZ + 1;
            v725 = sb->bsLive;
            v720 = sb->bsBuff << 8;
            sb->numZ = v724;
            sb->bsBuff = v720;
            v719 = v725 - 8;
            sb->bsLive = v719;
          }
          while ( v719 > 7 );
        }
        v726 = 32 - v719;
        v727 = v723 + v719;
        sb->bsLive = v727;
        v728 = v720 | (v722 << (v726 - v723));
        sb->bsBuff = v728;
        v729 = v810[v398 + 41];
        v730 = *(v400 + 4 * v729);
        v731 = v397[v729 + 12];
        if ( v727 > 7 )
        {
          v732 = sb->numZ;
          do
          {
            sb->zbits[v732] = HIBYTE(v728);
            v732 = sb->numZ + 1;
            v733 = sb->bsLive;
            v728 = sb->bsBuff << 8;
            sb->numZ = v732;
            sb->bsBuff = v728;
            v727 = v733 - 8;
            sb->bsLive = v727;
          }
          while ( v727 > 7 );
        }
        v734 = 32 - v727;
        v735 = v731 + v727;
        sb->bsLive = v735;
        v736 = v728 | (v730 << (v734 - v731));
        sb->bsBuff = v736;
        v737 = v810[v398 + 42];
        v738 = *(v400 + 4 * v737);
        v739 = v397[v737 + 12];
        if ( v735 > 7 )
        {
          v740 = sb->numZ;
          do
          {
            sb->zbits[v740] = HIBYTE(v736);
            v740 = sb->numZ + 1;
            v741 = sb->bsLive;
            v736 = sb->bsBuff << 8;
            sb->numZ = v740;
            sb->bsBuff = v736;
            v735 = v741 - 8;
            sb->bsLive = v735;
          }
          while ( v735 > 7 );
        }
        v742 = 32 - v735;
        v743 = v739 + v735;
        sb->bsLive = v743;
        v744 = v736 | (v738 << (v742 - v739));
        sb->bsBuff = v744;
        v745 = v810[v398 + 43];
        v746 = *(v400 + 4 * v745);
        v747 = v397[v745 + 12];
        if ( v743 > 7 )
        {
          v748 = sb->numZ;
          do
          {
            sb->zbits[v748] = HIBYTE(v744);
            v748 = sb->numZ + 1;
            v749 = sb->bsLive;
            v744 = sb->bsBuff << 8;
            sb->numZ = v748;
            sb->bsBuff = v744;
            v743 = v749 - 8;
            sb->bsLive = v743;
          }
          while ( v743 > 7 );
        }
        v750 = 32 - v743;
        v751 = v747 + v743;
        sb->bsLive = v751;
        v752 = v744 | (v746 << (v750 - v747));
        sb->bsBuff = v752;
        v753 = v810[v398 + 44];
        v754 = *(v400 + 4 * v753);
        v755 = v397[v753 + 12];
        if ( v751 > 7 )
        {
          v756 = sb->numZ;
          do
          {
            sb->zbits[v756] = HIBYTE(v752);
            v756 = sb->numZ + 1;
            v757 = sb->bsLive;
            v752 = sb->bsBuff << 8;
            sb->numZ = v756;
            sb->bsBuff = v752;
            v751 = v757 - 8;
            sb->bsLive = v751;
          }
          while ( v751 > 7 );
        }
        v758 = 32 - v751;
        v759 = v755 + v751;
        sb->bsLive = v759;
        v760 = v752 | (v754 << (v758 - v755));
        sb->bsBuff = v760;
        v761 = v810[v398 + 45];
        v762 = *(v400 + 4 * v761);
        v763 = v397[v761 + 12];
        if ( v759 > 7 )
        {
          v764 = sb->numZ;
          do
          {
            sb->zbits[v764] = HIBYTE(v760);
            v764 = sb->numZ + 1;
            v765 = sb->bsLive;
            v760 = sb->bsBuff << 8;
            sb->numZ = v764;
            sb->bsBuff = v760;
            v759 = v765 - 8;
            sb->bsLive = v759;
          }
          while ( v759 > 7 );
        }
        v766 = 32 - v759;
        v767 = v763 + v759;
        sb->bsLive = v767;
        v768 = v760 | (v762 << (v766 - v763));
        sb->bsBuff = v768;
        v769 = v810[v398 + 46];
        v770 = *(v400 + 4 * v769);
        v771 = v397[v769 + 12];
        if ( v767 > 7 )
        {
          v772 = sb->numZ;
          do
          {
            sb->zbits[v772] = HIBYTE(v768);
            v772 = sb->numZ + 1;
            v773 = sb->bsLive;
            v768 = sb->bsBuff << 8;
            sb->numZ = v772;
            sb->bsBuff = v768;
            v767 = v773 - 8;
            sb->bsLive = v767;
          }
          while ( v767 > 7 );
        }
        v774 = 32 - v767;
        v775 = v771 + v767;
        sb->bsLive = v775;
        v776 = v768 | (v770 << (v774 - v771));
        sb->bsBuff = v776;
        v777 = v810[v398 + 47];
        v778 = *(v400 + 4 * v777);
        v779 = v397[v777 + 12];
        if ( v775 > 7 )
        {
          v780 = sb->numZ;
          do
          {
            sb->zbits[v780] = HIBYTE(v776);
            v780 = sb->numZ + 1;
            v781 = sb->bsLive;
            v776 = sb->bsBuff << 8;
            sb->numZ = v780;
            sb->bsBuff = v776;
            v775 = v781 - 8;
            sb->bsLive = v775;
          }
          while ( v775 > 7 );
        }
        v782 = 32 - v775;
        v783 = v779 + v775;
        sb->bsLive = v783;
        v784 = v776 | (v778 << (v782 - v779));
        sb->bsBuff = v784;
        v785 = v810[v398 + 48];
        v786 = *(v400 + 4 * v785);
        v787 = v397[v785 + 12];
        if ( v783 > 7 )
        {
          v788 = sb->numZ;
          do
          {
            sb->zbits[v788] = HIBYTE(v784);
            v788 = sb->numZ + 1;
            v789 = sb->bsLive;
            v784 = sb->bsBuff << 8;
            sb->numZ = v788;
            sb->bsBuff = v784;
            v783 = v789 - 8;
            sb->bsLive = v783;
          }
          while ( v783 > 7 );
        }
        v790 = 32 - v783;
        v791 = v787 + v783;
        sb->bsLive = v791;
        v792 = v784 | (v786 << (v790 - v787));
        sb->bsBuff = v792;
        v793 = v810[v398 + 49];
        v794 = *(v400 + 4 * v793);
        v795 = v397[v793 + 12];
        if ( v791 <= 7 )
        {
          v394 = v792;
        }
        else
        {
          v796 = sb->numZ;
          HIBYTE(v394) = HIBYTE(v792);
          while ( 1 )
          {
            sb->zbits[v796] = HIBYTE(v394);
            v797 = sb->numZ + 1;
            v798 = sb->bsBuff;
            v791 = sb->bsLive - 8;
            sb->numZ = v797;
            sb->bsLive = v791;
            v394 = v798 << 8;
            sb->bsBuff = v394;
            if ( v791 <= 7 )
              break;
            v796 = v797;
          }
        }
        sb->bsLive = v791 + v795;
        sb->bsBuff = v394 | (v794 << (32 - v791 - v795));
      }
      else if ( v381 >= v379 )
      {
        v382 = sb->bsLive;
        v383 = sb->bsBuff;
        v384 = &v810[v379];
        v385 = &v810[(v381 - v379) + 1 + v379];
        while ( 1 )
        {
          v386 = *v384;
          v387 = v378->selector[0];
          v388 = sb->code[0][v386 + v387 * 258];
          v389 = sb->len[v387][v386];
          if ( v382 > 7 )
          {
            v390 = sb->numZ;
            do
            {
              sb->zbits[v390] = HIBYTE(v383);
              v390 = sb->numZ + 1;
              v391 = sb->bsLive;
              v383 = sb->bsBuff << 8;
              sb->numZ = v390;
              sb->bsBuff = v383;
              v382 = v391 - 8;
              sb->bsLive = v382;
            }
            while ( v382 > 7 );
          }
          ++v384;
          v392 = 32 - v382;
          v382 += v389;
          sb->bsLive = v382;
          v393 = v383 | (v388 << (v392 - v389));
          sb->bsBuff = v393;
          if ( v384 == v385 )
            break;
          v383 = v393;
        }
      }
      v379 = v381 + 1;
      v395 = v378;
      v378 = (v378 + 1);
      v103 = v395 - sb + 1;
      v377 = sb->nMTF;
    }
    while ( v377 > v381 + 1 );
    v358 = v380;
  }
  if ( v103 != v823 )
    BZ2_bz__AssertH__fail(3007);
  if ( sb->verbosity > 2 )
    __fprintf_chk(stderr, 1, "codes %d\n", sb->numZ - v358);
LABEL_90:
  if ( is_last_block )
  {
    v104 = v2->bsLive;
    if ( v104 <= 7 )
    {
      v109 = v2->bsBuff;
    }
    else
    {
      v105 = v2->numZ;
      v106 = v2->bsBuff;
      while ( 1 )
      {
        v2->zbits[v105] = HIBYTE(v106);
        v107 = v2->numZ + 1;
        v108 = v2->bsLive;
        v106 = v2->bsBuff << 8;
        v2->numZ = v107;
        v2->bsBuff = v106;
        v104 = v108 - 8;
        v2->bsLive = v104;
        if ( v104 <= 7 )
          break;
        v105 = v107;
      }
      v109 = v106;
    }
    v110 = 24 - v104;
    v111 = v104 + 8;
    v2->bsLive = v111;
    v112 = v109 | (23 << v110);
    v2->bsBuff = v112;
    if ( v111 > 7 )
    {
      for ( i9 = v2->numZ; ; i9 = v114 )
      {
        v2->zbits[i9] = HIBYTE(v112);
        v114 = v2->numZ + 1;
        v115 = v2->bsLive;
        v112 = v2->bsBuff << 8;
        v2->numZ = v114;
        v2->bsBuff = v112;
        v111 = v115 - 8;
        v2->bsLive = v111;
        if ( v111 <= 7 )
          break;
      }
    }
    v116 = 24 - v111;
    v117 = v111 + 8;
    v2->bsLive = v117;
    v118 = v112 | (114 << v116);
    v2->bsBuff = v118;
    if ( v117 > 7 )
    {
      for ( i10 = v2->numZ; ; i10 = v120 )
      {
        v2->zbits[i10] = HIBYTE(v118);
        v120 = v2->numZ + 1;
        v121 = v2->bsLive;
        v118 = v2->bsBuff << 8;
        v2->numZ = v120;
        v2->bsBuff = v118;
        v117 = v121 - 8;
        v2->bsLive = v117;
        if ( v117 <= 7 )
          break;
      }
    }
    v122 = 24 - v117;
    v123 = v117 + 8;
    v2->bsLive = v123;
    v124 = v118 | (69 << v122);
    v2->bsBuff = v124;
    if ( v123 > 7 )
    {
      for ( i11 = v2->numZ; ; i11 = v126 )
      {
        v2->zbits[i11] = HIBYTE(v124);
        v126 = v2->numZ + 1;
        v127 = v2->bsLive;
        v124 = v2->bsBuff << 8;
        v2->numZ = v126;
        v2->bsBuff = v124;
        v123 = v127 - 8;
        v2->bsLive = v123;
        if ( v123 <= 7 )
          break;
      }
    }
    v128 = 24 - v123;
    v129 = v123 + 8;
    v2->bsLive = v129;
    v130 = v124 | (56 << v128);
    v2->bsBuff = v130;
    if ( v129 > 7 )
    {
      for ( i12 = v2->numZ; ; i12 = v132 )
      {
        v2->zbits[i12] = HIBYTE(v130);
        v132 = v2->numZ + 1;
        v133 = v2->bsLive;
        v130 = v2->bsBuff << 8;
        v2->numZ = v132;
        v2->bsBuff = v130;
        v129 = v133 - 8;
        v2->bsLive = v129;
        if ( v129 <= 7 )
          break;
      }
    }
    v134 = 24 - v129;
    v135 = v129 + 8;
    v2->bsLive = v135;
    v136 = v130 | (80 << v134);
    v2->bsBuff = v136;
    if ( v135 > 7 )
    {
      for ( i13 = v2->numZ; ; i13 = v138 )
      {
        v2->zbits[i13] = HIBYTE(v136);
        v138 = v2->numZ + 1;
        v139 = v2->bsLive;
        v136 = v2->bsBuff << 8;
        v2->numZ = v138;
        v2->bsBuff = v136;
        v135 = v139 - 8;
        v2->bsLive = v135;
        if ( v135 <= 7 )
          break;
      }
    }
    v2->bsLive = v135 + 8;
    v2->bsBuff = v136 | (144 << (24 - v135));
    bsPutUInt32(v2, v2->combinedCRC);
    if ( v2->verbosity > 1 )
      __fprintf_chk(stderr, 1, "    final combined CRC = 0x%x\n   ", v2->combinedCRC);
    if ( v2->bsLive > 0 )
    {
      v140 = v2->numZ;
      v141 = v2->bsBuff;
      do
      {
        v2->zbits[v140] = HIBYTE(v141);
        v140 = v2->numZ + 1;
        v142 = v2->bsBuff;
        v143 = v2->bsLive - 8;
        v2->numZ = v140;
        v2->bsLive = v143;
        v141 = v142 << 8;
        v2->bsBuff = v141;
      }
      while ( v143 > 0 );
    }
  }
}


