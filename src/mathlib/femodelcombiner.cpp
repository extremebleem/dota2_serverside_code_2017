
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// _GLOBAL__sub_I_femodelcombiner.cpp  (line 0, @0x0000000001a6d2a0, libserver.so)  // inlines: Color, SetColor, __static_initialization_and_destruction_0
// globals: UNSPECIFIED_LOGGING_COLOR
void __cdecl GLOBAL__sub_I_femodelcombiner_cpp()
{
  UNSPECIFIED_LOGGING_COLOR._color[0] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[1] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[2] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[3] = 0;
}


// CFeModelCombiner::CFeModelCombiner  (line 8, @0x00000000031b7920, libserver.so)  // inlines: AlignedByteArrayExplicit_t, AlignedByteArray_t, CBufferStrider, CUtlMemory, CUtlMemoryFixedGrowable, CUtlMemoryFixedGrowable_Base, CUtlVector, CUtlVectorBase, CUtlVectorFixedGrowable, Purge, ~CUtlMemory, ~CUtlMemoryFixedGrowable_Base
// calls: Plat_IsInDebugSessionRaw, CUtlMemory<CFeModelCombiner::Model_t, int>::Purge, _Unwind_Resume
// callers: CombineAggregateData
void __fastcall CFeModelCombiner::CFeModelCombiner(CFeModelCombiner *const this)
{
  AlignedByteArray_t<8ul,CFeModelCombiner::Model_t> *p_m_FixedMemory; // r12

  p_m_FixedMemory = &this->m_Models.m_Memory.m_FixedMemory;
  this->m_Models.m_Size = 0;
  this->m_Models.m_Memory.m_pMemory = 0;
  this->m_Models.m_Memory.m_nAllocationCount = 8;
  this->m_Models.m_Memory.m_nGrowSize = 0x80000000;
  if ( ((this + 24) & 7) != 0 && Plat_IsInDebugSessionRaw() != 0 )
    __debugbreak();
  this->m_Models.m_Memory.m_pMemory = p_m_FixedMemory;
  this->m_nCombinedNodeCount = 0;
  this->m_OldToNewNode.m_Size = 0;
  this->m_OldToNewNode.m_Memory.m_pMemory = 0;
  this->m_OldToNewNode.m_Memory.m_nAllocationCount = 0;
  this->m_OldToNewNode.m_Memory.m_nGrowSize = 0;
  this->m_Buffer.m_pBuffer = 0;
  this->m_nCombinedStaticNodeCount = 0;
  this->m_bMergeable = 1;
  this->m_pCombinedModel = 0;
}


// CFeModelCombiner::Add  (line 16, @0x00000000031b7a20, libserver.so)  // inlines: AddToTail, CopyConstruct<CFeModelCombiner::Model_t>, Element, GetEndNode, GrowMemory, Tail, operator[]
// calls: CUtlMemory<CFeModelCombiner::Model_t, int>::Grow
// callers: CombineAggregateData
void __fastcall CFeModelCombiner::Add(CFeModelCombiner *const this, const CFeModel_0 *pModel)
{
  __int64 m_Size; // r13
  int v4; // r14d
  int v6; // eax
  uint16 m_nNodeCount; // r8
  uint16 m_nStaticNodes; // cx
  uint16 m_nRotLockStaticNodes; // r15
  CFeModelCombiner::Model_t *v10; // rax
  uint16 m_nCtrlCount; // ax
  CFeModelCombiner::Model_t *v12; // rax
  uint16 v13; // [rsp+8h] [rbp-38h]
  uint16 v14; // [rsp+Ch] [rbp-34h]

  if ( pModel != 0 )
  {
    m_Size = this->m_Models.m_Size;
    v4 = 0;
    if ( m_Size != 0 )
    {
      v12 = &this->m_Models.m_Memory.m_pMemory[m_Size - 1];
      v4 = v12->m_nNodeBase + v12->m_pModel->m_nNodeCount;
    }
    v6 = this->m_Models.m_Size;
    m_nNodeCount = pModel->m_nNodeCount;
    m_nStaticNodes = pModel->m_nStaticNodes;
    m_nRotLockStaticNodes = pModel->m_nRotLockStaticNodes;
    if ( m_Size == this->m_Models.m_Memory.m_nAllocationCount )
    {
      v13 = pModel->m_nStaticNodes;
      v14 = pModel->m_nNodeCount;
      CUtlMemory<CFeModelCombiner::Model_t,int>::Grow(&this->m_Models.m_Memory, 1);
      v6 = this->m_Models.m_Size;
      m_nStaticNodes = v13;
      m_nNodeCount = v14;
    }
    this->m_Models.m_Size = v6 + 1;
    v10 = &this->m_Models.m_Memory.m_pMemory[m_Size];
    if ( v10 != 0 )
    {
      v10->m_pModel = pModel;
      v10->m_nNodeBase = v4;
      v10->m_nNodeCount[0] = m_nNodeCount;
      v10->m_nNodeCount[1] = m_nStaticNodes;
      v10->m_nNodeCount[2] = m_nRotLockStaticNodes;
      v10->m_nNodeCount[3] = 0;
    }
    m_nCtrlCount = pModel->m_nCtrlCount;
    if ( m_nCtrlCount != pModel->m_nNodeCount || pModel->m_pCtrlToNode != 0 || pModel->m_pNodeToCtrl != 0 )
    {
      this->m_bMergeable = 0;
      m_nCtrlCount = pModel->m_nNodeCount;
    }
    this->m_nCombinedNodeCount += m_nCtrlCount;
    this->m_nCombinedStaticNodeCount += pModel->m_nStaticNodes;
  }
}


// CFeModelCombiner::CollectMemory<CFeModelCombiner>  (line 49, @0x00000000031b8bc0, libserver.so)  // inlines: Align, CFeNodeMap, Collect<FeAxialEdgeBend_t, short unsigned int>, Collect<FeCollisionPlane_t, short unsigned int>, Collect<FeCtrlOffset_t, short unsigned int>, Collect<FeCtrlOsOffset_t, short unsigned int>, Collect<FeFitWeight_t, unsigned int>, Collect<FeFollowNode_t, short unsigned int>, Collect<FeNodeBase_t, short unsigned int>, Collect<FeNodeReverseOffset_t, unsigned int>, Collect<FeRodConstraint_t, short unsigned int>, Collect<FeSimdNodeBase_t, short unsigned int>, Collect<FeSimdRodConstraint_t, short unsigned int>, Collect<FeSimdSpringIntegrator_t, short unsigned int>, Collect<FeSphereRigid_t, short unsigned int>, Collect<FeSpringIntegrator_t, short unsigned int>, Collect<FeTaperedCapsuleRigid_t, short unsigned int>, Collect<FeTaperedCapsuleStretch_t, short unsigned int>, Collect<FeWorldCollisionParams_t, short unsigned int>, Collect<short unsigned int, short unsigned int>, CollectMarker, CollectNodes<CTransform>, CollectNodes<FeNodeIntegrator_t>, CollectNodes<char const*>, CollectNodes<float>, CollectNodes<unsigned int>, CollectTiers<FeCollisionSphere_t, short unsigned int, 2>, CollectTiers<FeFitMatrix_t, short unsigned int, 3>, CollectTiers<FeQuad_t, short unsigned int, 3>, CollectTiers<FeSimdQuad_t, short unsigned int, 3>, CollectTiers<FeSimdTri_t, short unsigned int, 3>, CollectTiers<FeTri_t, short unsigned int, 3>, Init, IsEmpty<CTransform>, IsEmpty<FeNodeIntegrator_t>, IsEmpty<char const*>, IsEmpty<float>, IsEmpty<unsigned int>, MapNodes<CFeNodeMap>, MapNodes<FeAxialEdgeBend_t>, MapNodes<FeCollisionPlane_t>, MapNodes<FeCollisionSphere_t>, MapNodes<FeCtrlOffset_t>, MapNodes<FeCtrlOsOffset_t>, MapNodes<FeFollowNode_t>, MapNodes<FeNodeBase_t>, MapNodes<FeNodeReverseOffset_t>, MapNodes<FeQuad_t>, MapNodes<FeRodConstraint_t>, MapNodes<FeSimdNodeBase_t>, MapNodes<FeSimdQuad_t>, MapNodes<FeSimdRodConstraint_t>, MapNodes<FeSimdSpringIntegrator_t>, MapNodes<FeSimdTri_t>, MapNodes<FeSphereRigid_t>, MapNodes<FeSpringIntegrator_t>, MapNodes<FeTaperedCapsuleRigid_t>, MapNodes<FeTaperedCapsuleStretch_t>, MapNodes<FeTri_t>, MapNodes<short unsigned int>, Stride<CTransform>, Stride<FeAxialEdgeBend_t>, Stride<FeCollisionPlane_t>, Stride<FeCollisionSphere_t>, Stride<FeCtrlOffset_t>, Stride<FeCtrlOsOffset_t>, Stride<FeFitMatrix_t>, Stride<FeFitWeight_t>, Stride<FeFollowNode_t>, Stride<FeNodeBase_t>, Stride<FeNodeIntegrator_t>, Stride<FeNodeReverseOffset_t>, Stride<FeQuad_t>, Stride<FeRodConstraint_t>, Stride<FeSimdNodeBase_t>, Stride<FeSimdQuad_t>, Stride<FeSimdRodConstraint_t>, Stride<FeSimdSpringIntegrator_t>, Stride<FeSimdTri_t>, Stride<FeSphereRigid_t>, Stride<FeSpringIntegrator_t>, Stride<FeTaperedCapsuleRigid_t>, Stride<FeTaperedCapsuleStretch_t>, Stride<FeTri_t>, Stride<FeWorldCollisionParams_t>, Stride<char const*>, Stride<char>, Stride<float>, Stride<short unsigned int>, Stride<unsigned int>, V_memcpy, end, memcpy, operator(), operator()<2>, operator()<3>, operator()<4>, operator()<6>, operator()<short unsigned int, 2, 4>, operator()<short unsigned int, 4, 4>, operator()<unsigned int, 3, 4>, operator=, operator[]
// calls: memcpy, CFeModel::GetDefaultInitPose, CFeModel::GetDefaultCtrlName, CFeModel::GetDefaultCtrlHash, CFeModel::GetDefaultNodeInvMass, CFeModel::GetDefaultLocalForce, CFeModel::GetDefaultNodeIntegrator, CFeModel::GetDefaultNodeCollisionRadius, CFeModel::GetDefaultLocalRotation, CFeModel::GetDefaultLegacyStretchForce
// callers: CFeModelCombiner::Combine
void __fastcall CFeModelCombiner::CollectMemory<CFeModelCombiner>(
        CFeModelCombiner *const this,
        CFeModelCombiner *const me)
{
  CFeModelCombiner *v2; // r14
  uint8 *m_pBuffer; // rax
  CFeModelCombiner::Model_t *m_pMemory; // rbx
  __int64 m_Size; // rax
  uint8 *v6; // r12
  uint8 *v7; // rcx
  uint16 v8; // r13
  uint16 m_nSimdRodCount; // r15
  size_t v10; // rdx
  char *v11; // rcx
  uint16 m_nCombinedNodeCount; // r9
  __int64 v13; // r11
  unsigned __int16 m_nNodeCount; // r8
  uint16 *v15; // r10
  __int64 v16; // rdi
  uint16 *v17; // rsi
  uint16 *v18; // rax
  __int64 v19; // rcx
  uint16 v20; // dx
  uint8 *v21; // rax
  CFeModel_0 *m_pCombinedModel; // rdx
  unsigned __int16 v23; // r12
  int *v24; // r13
  __int64 v25; // r15
  int v26; // eax
  unsigned __int16 v27; // dx
  int v28; // edi
  __int64 v29; // rsi
  unsigned __int16 v30; // bx
  __int64 v31; // rax
  uint8 *v32; // rdi
  char *v33; // rcx
  uint16 v34; // r8
  __int64 v35; // r9
  unsigned __int16 v36; // si
  uint16 *v37; // rdi
  __int64 v38; // r11
  uint16 *v39; // r10
  uint16 *v40; // rax
  __int64 v41; // rcx
  uint16 v42; // dx
  FeSimdQuad_t *v43; // rax
  unsigned __int16 v44; // r12
  int *v45; // rbx
  __int64 v46; // r13
  int v47; // edx
  unsigned __int16 v48; // ax
  int v49; // edi
  unsigned __int64 v50; // rsi
  unsigned __int16 v51; // r15
  size_t v52; // rdx
  uint8 *v53; // rdi
  char *v54; // rcx
  uint16 v55; // r9
  __int64 v56; // r11
  unsigned __int16 v57; // r8
  unsigned __int16 *v58; // r10
  unsigned __int64 v59; // r15
  unsigned __int16 *v60; // rsi
  unsigned __int16 *v61; // rax
  int v62; // ecx
  FeSimdTri_t *v63; // rax
  int *v64; // rbx
  __int64 v65; // rax
  unsigned __int64 v66; // r12
  __int64 v67; // rax
  char *v68; // r8
  uint16 v69; // r13
  int *v70; // r15
  unsigned __int16 v71; // r9
  size_t v72; // rdx
  char *v73; // r8
  uint16 v74; // cx
  __int64 v75; // rsi
  unsigned __int16 v76; // dx
  uint16 *v77; // rdi
  __int64 v78; // r8
  uint16 *v79; // r10
  __int64 k; // rax
  __int64 v81; // r9
  uint16 *v82; // rax
  int m; // r9d
  __int64 v84; // r10
  uint16 *v85; // rax
  __int64 v86; // r10
  uint16 *v87; // rax
  __int64 v88; // r10
  uint16 *v89; // rax
  int n; // r9d
  __int64 v91; // r10
  unsigned __int64 v92; // rax
  CFeModel_0 *v93; // rdx
  int *v94; // rbx
  __int64 v95; // rax
  unsigned __int64 v96; // r12
  char *v97; // rcx
  uint16 v98; // r13
  unsigned __int16 v99; // r15
  size_t v100; // rdx
  char *v101; // rcx
  uint16 v102; // r9
  __int64 v103; // r11
  unsigned __int16 v104; // r8
  uint16 *v105; // r10
  __int64 v106; // rdi
  uint16 *v107; // rsi
  uint16 *v108; // rax
  __int64 v109; // rcx
  uint16 v110; // dx
  unsigned __int64 v111; // rax
  CFeModel_0 *v112; // rdx
  unsigned __int16 v113; // si
  char v114; // r11
  int v115; // r10d
  unsigned __int64 v116; // r12
  __int64 v117; // r9
  CFeModelCombiner::Model_t *v118; // rax
  CFeModelCombiner::Model_t *v119; // rbx
  uint8 *v120; // rcx
  unsigned __int16 v121; // di
  unsigned __int16 v122; // dx
  FeFitMatrix_t *v123; // rax
  int *v124; // r13
  int *v125; // rbx
  int *v126; // rax
  __int64 v127; // rdx
  unsigned __int64 v128; // r12
  int *v129; // r12
  int *v130; // r15
  int *v131; // rax
  __int64 v132; // rdx
  unsigned __int64 v133; // rbx
  int *v134; // rbx
  __int64 v135; // rax
  unsigned __int64 v136; // r12
  __int64 v137; // rax
  char *v138; // r9
  uint16 v139; // r13
  int *v140; // r15
  unsigned __int16 v141; // r10
  size_t v142; // rdx
  unsigned __int16 *v143; // r9
  uint16 v144; // cx
  __int64 v145; // r8
  unsigned __int16 v146; // dx
  unsigned __int16 *v147; // rax
  __int64 v148; // rdi
  __int64 v149; // rsi
  __int64 v150; // rsi
  __int64 v151; // rsi
  __int64 v152; // rsi
  __int64 v153; // rsi
  int *v154; // r9
  CFeModelCombiner *v155; // r8
  uint16 v156; // r15
  __int64 v157; // rdi
  unsigned __int16 v158; // bx
  __int64 v159; // r14
  unsigned int v160; // ecx
  __int64 v161; // rax
  __int64 v162; // rdx
  _DWORD *v163; // rax
  _DWORD *v164; // rdx
  int v165; // xmm2_4
  int v166; // xmm1_4
  int v167; // xmm1_4
  int v168; // xmm3_4
  int v169; // xmm0_4
  vec_t x; // xmm6_4
  unsigned int v171; // edx
  vec_t y; // xmm5_4
  vec_t z; // xmm4_4
  vec_t w; // xmm3_4
  vec_t v175; // xmm2_4
  vec_t v176; // xmm1_4
  vec_t v177; // xmm0_4
  __int64 v178; // rax
  vec_t *v179; // rax
  CFeModelCombiner *v180; // r15
  uint16 v181; // r9
  __int64 v182; // r8
  unsigned __int16 v183; // r13
  __int64 v184; // r14
  unsigned int v185; // eax
  __int64 v186; // rdx
  __int64 v187; // rsi
  const char *DefaultCtrlName; // rax
  unsigned int v189; // edx
  __int64 v190; // rsi
  unsigned __int64 v191; // rax
  CFeModel_0 *v192; // rdx
  int *v193; // rbx
  __int64 v194; // rax
  unsigned __int64 v195; // r12
  __int64 v196; // rax
  char *v197; // r9
  uint32 v198; // r13d
  int *v199; // r15
  unsigned int v200; // r10d
  unsigned __int16 *v201; // r9
  uint16 v202; // si
  __int64 v203; // r8
  unsigned __int16 v204; // cx
  unsigned __int16 *v205; // rax
  __int64 v206; // rdi
  __int64 v207; // rdx
  __int64 v208; // rdx
  unsigned __int64 v209; // rax
  CFeModel_0 *v210; // rdx
  int *v211; // rbx
  __int64 v212; // rax
  unsigned __int64 v213; // r12
  __int64 v214; // rax
  char *v215; // r9
  uint16 v216; // r13
  int *v217; // r15
  unsigned __int16 v218; // r10
  size_t v219; // rdx
  unsigned __int16 *v220; // r9
  uint16 v221; // si
  __int64 v222; // r8
  unsigned __int16 v223; // cx
  unsigned __int16 *v224; // rax
  __int64 v225; // rdi
  __int64 v226; // rdx
  __int64 v227; // rdx
  unsigned __int64 v228; // rax
  CFeModel_0 *v229; // rdx
  int *v230; // rbx
  __int64 v231; // rax
  unsigned __int64 v232; // r12
  __int64 v233; // rax
  char *v234; // r9
  uint16 v235; // r13
  int *v236; // r15
  unsigned __int16 v237; // r10
  size_t v238; // rdx
  unsigned __int16 *v239; // r9
  uint16 v240; // si
  __int64 v241; // r8
  unsigned __int16 v242; // cx
  unsigned __int16 *v243; // rax
  __int64 v244; // rdi
  __int64 v245; // rdx
  __int64 v246; // rdx
  unsigned __int64 v247; // rax
  CFeModel_0 *v248; // rdx
  int *v249; // rbx
  __int64 v250; // rax
  unsigned __int64 v251; // r12
  __int64 v252; // rax
  char *v253; // r9
  uint16 v254; // r13
  int *v255; // r15
  unsigned __int16 v256; // r10
  size_t v257; // rdx
  unsigned __int16 *v258; // r9
  uint16 v259; // si
  __int64 v260; // r8
  unsigned __int16 v261; // cx
  unsigned __int16 *v262; // rax
  __int64 v263; // rdi
  __int64 v264; // rdx
  __int64 v265; // rdx
  unsigned __int64 v266; // rax
  CFeModel_0 *v267; // rdx
  int *v268; // r12
  int *v269; // r15
  int *v270; // rax
  __int64 v271; // rdx
  unsigned __int64 v272; // rbx
  int *v273; // rbx
  __int64 v274; // rax
  unsigned __int64 v275; // r12
  __int64 v276; // rax
  char *v277; // r10
  uint16 v278; // r13
  int *v279; // r15
  unsigned __int16 v280; // r11
  size_t v281; // rdx
  unsigned __int16 *v282; // r10
  uint16 v283; // r8
  __int64 v284; // r9
  unsigned __int16 v285; // cx
  unsigned __int16 *v286; // rax
  __int64 v287; // rsi
  __int64 v288; // rdx
  __int64 v289; // rdx
  CFeModelCombiner *v290; // r15
  uint16 v291; // r9
  __int64 v292; // r8
  unsigned __int16 v293; // r13
  __int64 v294; // r14
  unsigned int v295; // eax
  __int64 v296; // rdx
  __int64 v297; // rsi
  uint32 DefaultCtrlHash; // eax
  unsigned int v299; // edx
  __int64 v300; // rsi
  unsigned __int64 v301; // rax
  CFeModel_0 *v302; // rdx
  int *v303; // r12
  int *v304; // r15
  int *v305; // rax
  __int64 v306; // rdx
  unsigned __int64 v307; // rbx
  unsigned __int16 v308; // r12
  CFeModelCombiner *v309; // r15
  int *v310; // r14
  __int64 v311; // r13
  int v312; // eax
  unsigned __int16 v313; // dx
  int v314; // esi
  __int64 v315; // rcx
  __int16 v316; // bx
  uint8 *v317; // rdi
  char *v318; // r10
  uint16 v319; // si
  __int64 v320; // rdi
  unsigned __int16 v321; // cx
  char *v322; // rdx
  __int64 v323; // r10
  __int64 jj; // rax
  __int64 v325; // r8
  CFeModelCombiner *v326; // r14
  unsigned __int64 v327; // rax
  int *v328; // rbx
  __int64 v329; // rax
  unsigned __int64 v330; // r12
  __int64 v331; // rax
  char *v332; // r10
  uint16 v333; // r13
  int *v334; // r15
  unsigned __int16 v335; // r11
  size_t v336; // rdx
  unsigned __int16 *v337; // r10
  unsigned __int16 v338; // r8
  __int64 v339; // r9
  unsigned __int16 v340; // cx
  unsigned __int16 *v341; // rax
  __int64 v342; // rsi
  __int64 v343; // rdx
  __int64 v344; // rdx
  CFeModelCombiner *v345; // r15
  uint16 v346; // r9
  __int64 v347; // r8
  unsigned __int16 v348; // r13
  __int64 v349; // r14
  unsigned int v350; // eax
  __int64 v351; // rdx
  __int64 v352; // rcx
  float DefaultNodeInvMass; // xmm0_4
  unsigned int v354; // eax
  __int64 v355; // rdx
  unsigned __int64 v356; // rax
  CFeModel_0 *v357; // rdx
  unsigned __int16 v358; // r12
  CFeModelCombiner *v359; // r15
  int *v360; // r14
  __int64 v361; // r13
  int v362; // eax
  unsigned __int16 v363; // dx
  int v364; // esi
  __int64 v365; // rcx
  __int16 v366; // bx
  uint8 *v367; // rdi
  char *v368; // r10
  uint16 v369; // si
  __int64 v370; // rdi
  unsigned __int16 v371; // cx
  char *v372; // rdx
  __int64 v373; // r10
  __int64 mm; // rax
  __int64 v375; // r8
  CFeModelCombiner *v376; // r14
  unsigned __int64 v377; // rax
  int *v378; // rbx
  __int64 v379; // rax
  unsigned __int64 v380; // r12
  __int64 v381; // rax
  char *v382; // rcx
  uint16 v383; // r13
  int *v384; // r15
  unsigned __int16 v385; // r10
  size_t v386; // rdx
  char *v387; // rcx
  uint16 v388; // r9
  __int64 v389; // rdi
  unsigned __int16 v390; // si
  uint16 *v391; // r8
  __int64 v392; // r10
  uint16 *v393; // rax
  int nn; // edx
  __int64 v395; // rcx
  unsigned __int64 v396; // rax
  CFeModel_0 *v397; // rdx
  unsigned __int16 v398; // bx
  CFeModelCombiner *v399; // r13
  int *v400; // r14
  __int64 v401; // r15
  int v402; // eax
  unsigned __int16 v403; // dx
  int v404; // ecx
  __int64 v405; // rsi
  __int16 v406; // r12
  uint8 *v407; // rdi
  unsigned __int16 *v408; // r9
  unsigned __int16 v409; // si
  __int64 v410; // rdi
  unsigned __int16 v411; // cx
  unsigned __int16 *v412; // rax
  __int64 v413; // r8
  __int64 v414; // rdx
  __int64 v415; // rdx
  CFeModelCombiner *v416; // r14
  unsigned __int64 v417; // rax
  int *v418; // rbx
  __int64 v419; // rax
  unsigned __int64 v420; // r12
  __int64 v421; // rax
  char *v422; // r9
  uint16 v423; // r13
  int *v424; // r15
  unsigned __int16 v425; // r10
  size_t v426; // rdx
  unsigned __int16 *v427; // r9
  unsigned __int16 v428; // si
  __int64 v429; // r8
  unsigned __int16 v430; // cx
  unsigned __int16 *v431; // rax
  __int64 v432; // rdi
  __int64 v433; // rdx
  __int64 v434; // rdx
  unsigned __int64 v435; // rax
  CFeModel_0 *v436; // rdx
  __int64 *v437; // r12
  __int64 v438; // rax
  unsigned __int64 v439; // rbx
  __int64 *v440; // r15
  char *v441; // rdi
  uint16 v442; // r13
  __int64 v443; // rax
  __int64 v444; // rax
  unsigned __int64 v445; // rax
  CFeModel_0 *v446; // rdx
  int *v447; // rbx
  __int64 v448; // rax
  unsigned __int64 v449; // r12
  __int64 v450; // rax
  char *v451; // r10
  uint16 v452; // r13
  int *v453; // r15
  unsigned __int16 v454; // r11
  size_t v455; // rdx
  unsigned __int16 *v456; // r10
  unsigned __int16 v457; // r8
  __int64 v458; // r9
  unsigned __int16 v459; // cx
  unsigned __int16 *v460; // rax
  __int64 v461; // rsi
  __int64 v462; // rdx
  __int64 v463; // rdx
  unsigned __int64 v464; // rax
  CFeModel_0 *v465; // rdx
  int *v466; // rbx
  __int64 v467; // rax
  unsigned __int64 v468; // r12
  __int64 v469; // rax
  char *v470; // rcx
  uint16 v471; // r13
  int *v472; // r15
  unsigned __int16 v473; // r10
  size_t v474; // rdx
  uint16 *v475; // rcx
  uint16 v476; // r8
  __int64 v477; // r9
  unsigned __int16 v478; // si
  uint16 *v479; // rax
  __int64 v480; // rcx
  __int64 v481; // rdx
  unsigned __int64 v482; // rax
  CFeModel_0 *v483; // rdx
  int *v484; // rbx
  __int64 v485; // rax
  unsigned __int64 v486; // r12
  __int64 v487; // rax
  char *v488; // rcx
  uint16 v489; // r13
  int *v490; // r15
  unsigned __int16 v491; // r10
  size_t v492; // rdx
  uint16 *v493; // rcx
  uint16 v494; // r8
  __int64 v495; // r9
  unsigned __int16 v496; // si
  uint16 *v497; // rax
  __int64 v498; // rcx
  __int64 v499; // rdx
  unsigned __int64 v500; // rax
  CFeModel_0 *v501; // rdx
  __int64 *v502; // rdx
  __int64 *v503; // rdi
  unsigned __int64 v504; // rax
  unsigned __int64 v505; // rsi
  uint32 v506; // ecx
  __int64 v507; // r8
  __int64 v508; // r8
  unsigned __int64 v509; // rdx
  CFeModel_0 *v510; // rsi
  int *v511; // rbx
  int *v512; // r15
  int *v513; // rax
  unsigned __int64 v514; // r12
  int *v515; // r12
  int *v516; // r15
  int *v517; // rax
  __int64 v518; // rdx
  unsigned __int64 v519; // rbx
  int *v520; // r13
  int *v521; // rsi
  int *v522; // rax
  __int64 v523; // rdx
  unsigned __int64 v524; // r12
  int *v525; // r13
  int *v526; // rsi
  int *v527; // rax
  unsigned __int64 v528; // r12
  int *v529; // r13
  int *v530; // rsi
  int *v531; // rax
  __int64 v532; // rdx
  unsigned __int64 v533; // r12
  int *v534; // rbx
  __int64 v535; // rax
  unsigned __int64 v536; // r12
  __int64 v537; // rax
  char *v538; // rcx
  uint16 v539; // r13
  int *v540; // r15
  unsigned __int16 v541; // r10
  size_t v542; // rdx
  uint16 *v543; // rcx
  uint16 v544; // r8
  __int64 v545; // r9
  unsigned __int16 v546; // si
  uint16 *v547; // rax
  __int64 v548; // rcx
  __int64 v549; // rdx
  CFeModelCombiner *v550; // r9
  unsigned __int16 v551; // r15
  int v552; // ecx
  unsigned __int64 v553; // r12
  unsigned __int64 v554; // r14
  __int64 v555; // rdx
  unsigned __int16 *v556; // rax
  __int64 v557; // r10
  unsigned int v558; // ebx
  unsigned __int16 *v559; // r8
  unsigned __int16 v560; // r12
  unsigned int v561; // eax
  int v562; // edx
  int v563; // xmm0_4
  float DefaultLocalForce; // xmm0_4
  int v565; // eax
  unsigned __int64 v566; // rax
  CFeModel_0 *v567; // rdx
  int *v568; // rbx
  __int64 v569; // rax
  unsigned __int64 v570; // r12
  __int64 v571; // rax
  char *v572; // rcx
  uint16 v573; // r13
  int *v574; // r15
  unsigned __int16 v575; // r10
  size_t v576; // rdx
  uint16 *v577; // rcx
  uint16 v578; // r8
  __int64 v579; // r9
  unsigned __int16 v580; // si
  uint16 *v581; // rax
  __int64 v582; // rcx
  __int64 v583; // rdx
  CFeModelCombiner *v584; // r8
  unsigned __int16 v585; // r13
  unsigned __int64 v586; // r12
  unsigned __int64 v587; // r14
  __int64 v588; // r10
  unsigned __int16 v589; // r12
  __int64 v590; // r15
  unsigned int v591; // ecx
  __int64 v592; // rsi
  __int64 v593; // rax
  __int64 v594; // rsi
  __int64 v595; // rdx
  __int64 v596; // rax
  unsigned int v597; // eax
  __int64 v598; // rdx
  CFeModelCombiner *v599; // r9
  unsigned __int16 v600; // r15
  int m_nCombinedStaticNodeCount; // ecx
  unsigned __int64 v602; // r12
  unsigned __int64 v603; // r14
  __int64 v604; // rdx
  unsigned __int16 *v605; // rax
  __int64 v606; // r10
  unsigned int v607; // ebx
  unsigned __int16 *v608; // r8
  unsigned __int16 v609; // r12
  unsigned int v610; // eax
  int v611; // edx
  int v612; // xmm0_4
  float DefaultNodeCollisionRadius; // xmm0_4
  int v614; // eax
  CFeModelCombiner *v615; // r9
  unsigned __int16 v616; // r15
  int v617; // ecx
  unsigned __int64 v618; // r12
  unsigned __int64 v619; // r14
  __int64 v620; // rdx
  unsigned __int16 *v621; // rax
  __int64 v622; // r10
  unsigned int v623; // ebx
  unsigned __int16 *v624; // r8
  unsigned __int16 v625; // r12
  unsigned int v626; // eax
  int v627; // edx
  int v628; // xmm0_4
  float DefaultLocalRotation; // xmm0_4
  int v630; // eax
  CFeModelCombiner *v631; // r15
  unsigned __int16 v632; // r9
  __int64 v633; // r8
  unsigned __int16 v634; // r13
  __int64 v635; // r14
  unsigned int v636; // eax
  __int64 v637; // rdx
  __int64 v638; // rcx
  float DefaultLegacyStretchForce; // xmm0_4
  unsigned int v640; // eax
  __int64 v641; // rdx
  unsigned __int64 v642; // rax
  CFeModel_0 *v643; // rdx
  __int64 *v644; // rdx
  __int64 *v645; // rdi
  unsigned __int64 v646; // rax
  unsigned __int64 v647; // rsi
  uint16 v648; // cx
  __int64 v649; // r8
  __int64 v650; // r8
  unsigned __int64 v651; // rdx
  CFeModel_0 *v652; // rsi
  uint8 *v653; // rax
  unsigned __int64 v654; // [rsp+10h] [rbp-70h]
  unsigned __int64 v655; // [rsp+10h] [rbp-70h]
  unsigned __int64 v656; // [rsp+10h] [rbp-70h]
  unsigned __int64 v657; // [rsp+10h] [rbp-70h]
  int *v658; // [rsp+10h] [rbp-70h]
  int *v659; // [rsp+10h] [rbp-70h]
  int *v660; // [rsp+10h] [rbp-70h]
  int *v661; // [rsp+10h] [rbp-70h]
  int *i; // [rsp+18h] [rbp-68h]
  int *j; // [rsp+18h] [rbp-68h]
  CFeModelCombiner *v664; // [rsp+18h] [rbp-68h]
  int *ii; // [rsp+18h] [rbp-68h]
  int *kk; // [rsp+18h] [rbp-68h]
  unsigned __int64 v667; // [rsp+18h] [rbp-68h]
  int *v668; // [rsp+18h] [rbp-68h]
  int *v669; // [rsp+18h] [rbp-68h]
  int *v670; // [rsp+18h] [rbp-68h]
  int v671; // [rsp+20h] [rbp-60h]
  int v672; // [rsp+20h] [rbp-60h]
  int *v673; // [rsp+20h] [rbp-60h]
  uint16 v674; // [rsp+20h] [rbp-60h]
  uint16 v675; // [rsp+20h] [rbp-60h]
  int v676; // [rsp+20h] [rbp-60h]
  uint16 v677; // [rsp+20h] [rbp-60h]
  int v678; // [rsp+20h] [rbp-60h]
  char v679; // [rsp+20h] [rbp-60h]
  int v680; // [rsp+20h] [rbp-60h]
  int *p_m_Size; // [rsp+20h] [rbp-60h]
  int v682; // [rsp+20h] [rbp-60h]
  int v683; // [rsp+20h] [rbp-60h]
  unsigned __int16 v684; // [rsp+20h] [rbp-60h]
  CTransform *v685; // [rsp+28h] [rbp-58h]
  char v686; // [rsp+28h] [rbp-58h]
  char v687; // [rsp+28h] [rbp-58h]
  unsigned __int16 v688; // [rsp+28h] [rbp-58h]
  CTransform *v689; // [rsp+28h] [rbp-58h]
  unsigned __int16 v690; // [rsp+28h] [rbp-58h]
  CTransform *v691; // [rsp+28h] [rbp-58h]
  unsigned int v692; // [rsp+28h] [rbp-58h]
  unsigned __int16 v693; // [rsp+28h] [rbp-58h]
  unsigned __int16 v694; // [rsp+28h] [rbp-58h]
  unsigned __int16 v695; // [rsp+28h] [rbp-58h]
  unsigned __int16 v696; // [rsp+28h] [rbp-58h]
  CTransform *v697; // [rsp+28h] [rbp-58h]
  char v698; // [rsp+28h] [rbp-58h]
  unsigned __int16 v699; // [rsp+28h] [rbp-58h]
  CTransform *v700; // [rsp+28h] [rbp-58h]
  char v701; // [rsp+28h] [rbp-58h]
  unsigned __int16 v702; // [rsp+28h] [rbp-58h]
  int v703; // [rsp+28h] [rbp-58h]
  unsigned __int16 v704; // [rsp+28h] [rbp-58h]
  unsigned __int16 v705; // [rsp+28h] [rbp-58h]
  unsigned __int16 v706; // [rsp+28h] [rbp-58h]
  unsigned __int16 v707; // [rsp+28h] [rbp-58h]
  unsigned __int16 v708; // [rsp+28h] [rbp-58h]
  CTransform *v709; // [rsp+28h] [rbp-58h]
  unsigned __int16 v710; // [rsp+28h] [rbp-58h]
  CTransform *v711; // [rsp+28h] [rbp-58h]
  CTransform *v712; // [rsp+28h] [rbp-58h]
  CTransform *v713; // [rsp+28h] [rbp-58h]
  CTransform *v714; // [rsp+28h] [rbp-58h]
  CTransform v715; // [rsp+30h] [rbp-50h] BYREF
  FeNodeIntegrator_t DefaultNodeIntegrator; // 0:kr00_16.16

  v2 = me;
  m_pBuffer = me->m_Buffer.m_pBuffer;
  me->m_Buffer.m_pBuffer = m_pBuffer + 16;
  qmemcpy(m_pBuffer, "ComboCloth_BEGIN", 16);
  m_pMemory = me->m_Models.m_Memory.m_pMemory;
  m_Size = me->m_Models.m_Size;
  v6 = ((me->m_Buffer.m_pBuffer + 15) & 0xFFFFFFFFFFFFFFF0LL);
  me->m_Buffer.m_pBuffer = v6;
  v685 = &m_pMemory[m_Size];
  if ( m_pMemory == v685 )
  {
    me->m_pCombinedModel->m_nSimdRodCount = 0;
    v21 = 0;
    m_pCombinedModel = me->m_pCombinedModel;
  }
  else
  {
    v7 = v6;
    v8 = 0;
    while ( 1 )
    {
      m_nSimdRodCount = m_pMemory->m_pModel->m_nSimdRodCount;
      v8 += m_nSimdRodCount;
      v10 = 80LL * m_nSimdRodCount;
      v2->m_Buffer.m_pBuffer = &v7[v10];
      v11 = memcpy(v7, m_pMemory->m_pModel->m_pSimdRods, v10);
      m_nCombinedNodeCount = v2->m_nCombinedNodeCount;
      v13 = &v2->m_OldToNewNode.m_Memory.m_pMemory[m_pMemory->m_nNodeBase];
      m_nNodeCount = m_pMemory->m_pModel->m_nNodeCount;
      if ( m_nSimdRodCount != 0 )
      {
        v15 = (v11 + 24);
        v16 = &v11[80 * (m_nSimdRodCount - 1) + 104];
        do
        {
          v17 = v15 - 8;
          do
          {
            v18 = v17 - 4;
            do
            {
              v19 = *v18;
              v20 = m_nCombinedNodeCount;
              if ( m_nNodeCount > v19 )
                v20 = *(v13 + 2 * v19);
              *v18++ = v20;
            }
            while ( v18 != v17 );
            v17 = v18 + 4;
          }
          while ( v18 + 4 != v15 );
          v15 = v18 + 44;
        }
        while ( v18 + 44 != v16 );
      }
      if ( v685 == ++m_pMemory )
        break;
      v7 = v2->m_Buffer.m_pBuffer;
    }
    v2->m_pCombinedModel->m_nSimdRodCount = v8;
    v21 = 0;
    if ( v8 != 0 )
      v21 = v6;
    m_pCombinedModel = v2->m_pCombinedModel;
  }
  m_pCombinedModel->m_pSimdRods = v21;
  v23 = 0;
  v686 = 1;
  v671 = 2;
  v654 = (v2->m_Buffer.m_pBuffer + 15) & 0xFFFFFFFFFFFFFFF0LL;
  v2->m_Buffer.m_pBuffer = v654;
  while ( 1 )
  {
    v24 = v2->m_Models.m_Memory.m_pMemory;
    v25 = v671;
    for ( i = &v24[6 * v2->m_Models.m_Size]; i != v24; v24 += 6 )
    {
      v26 = *(*v24 + 2LL * v671 + 36);
      if ( v686 != 0 )
      {
        v29 = 0;
        v28 = 0;
        v27 = 0;
      }
      else
      {
        v27 = *(*v24 + 2LL * v671 + 38);
        v28 = v27;
        v29 = 304LL * v27;
      }
      v30 = v26 - v27;
      v31 = v26 - v28;
      v23 += v30;
      v32 = v2->m_Buffer.m_pBuffer;
      v2->m_Buffer.m_pBuffer = &v32[304 * v30];
      v33 = memcpy(v32, (*(*v24 + 176LL) + v29), 304 * v31);
      v34 = v2->m_nCombinedNodeCount;
      v35 = &v2->m_OldToNewNode.m_Memory.m_pMemory[v24[2]];
      v36 = *(*v24 + 16LL);
      if ( v30 != 0 )
      {
        v37 = (v33 + 40);
        v38 = &v33[304 * (v30 - 1) + 344];
        do
        {
          v39 = v37 - 16;
          do
          {
            v40 = v39 - 4;
            do
            {
              v41 = *v40;
              v42 = v34;
              if ( v36 > v41 )
                v42 = *(v35 + 2 * v41);
              *v40++ = v42;
            }
            while ( v40 != v39 );
            v39 = v40 + 4;
          }
          while ( v40 + 4 != v37 );
          v37 = v40 + 156;
        }
        while ( v40 + 156 != v38 );
      }
    }
    --v671;
    v2->m_pCombinedModel->m_nSimdQuadCount[v25] = v23;
    if ( v671 == -1 )
      break;
    v686 = 0;
  }
  v43 = 0;
  if ( v23 != 0 )
    v43 = v654;
  v687 = 1;
  v44 = 0;
  v672 = 2;
  v2->m_pCombinedModel->m_pSimdQuads = v43;
  v655 = (v2->m_Buffer.m_pBuffer + 15) & 0xFFFFFFFFFFFFFFF0LL;
  v2->m_Buffer.m_pBuffer = v655;
  while ( 1 )
  {
    v45 = v2->m_Models.m_Memory.m_pMemory;
    v46 = v672;
    for ( j = &v45[6 * v2->m_Models.m_Size]; j != v45; v45 += 6 )
    {
      v47 = *(*v45 + 2LL * v672 + 42);
      if ( v687 != 0 )
      {
        v50 = 0;
        v49 = 0;
        v48 = 0;
      }
      else
      {
        v48 = *(*v45 + 2LL * v672 + 44);
        v49 = v48;
        v50 = v48 << 7;
      }
      v51 = v47 - v48;
      v52 = (v47 - v49) << 7;
      v44 += v51;
      v53 = v2->m_Buffer.m_pBuffer;
      v2->m_Buffer.m_pBuffer = &v53[128 * v51];
      v54 = memcpy(v53, (*(*v45 + 192LL) + v50), v52);
      v55 = v2->m_nCombinedNodeCount;
      v56 = &v2->m_OldToNewNode.m_Memory.m_pMemory[v45[2]];
      v57 = *(*v45 + 16LL);
      if ( v51 != 0 )
      {
        v58 = (v54 + 64);
        v59 = &v54[128 * (v51 - 1) + 192];
        do
        {
          v60 = v58 - 24;
          do
          {
            v61 = v60 - 8;
            do
            {
              v62 = v55;
              if ( v57 > *v61 )
                v62 = *(v56 + 2LL * *v61);
              *v61 = v62;
              v61 += 2;
            }
            while ( v61 != v60 );
            v60 = v61 + 8;
          }
          while ( v58 != v61 + 8 );
          v58 = v61 + 72;
        }
        while ( v61 + 72 != v59 );
      }
    }
    --v672;
    v2->m_pCombinedModel->m_nSimdTriCount[v46] = v44;
    if ( v672 == -1 )
      break;
    v687 = 0;
  }
  v63 = 0;
  if ( v44 != 0 )
    v63 = v655;
  v2->m_pCombinedModel->m_pSimdTris = v63;
  v64 = v2->m_Models.m_Memory.m_pMemory;
  v65 = v2->m_Models.m_Size;
  v66 = (v2->m_Buffer.m_pBuffer + 15) & 0xFFFFFFFFFFFFFFF0LL;
  v2->m_Buffer.m_pBuffer = v66;
  v67 = 3 * v65;
  if ( v64 == &v64[2 * v67] )
  {
    v2->m_pCombinedModel->m_nSimdNodeBaseCount = 0;
    v92 = 0;
    v93 = v2->m_pCombinedModel;
  }
  else
  {
    v68 = v66;
    v69 = 0;
    v70 = &v64[2 * v67];
    while ( 1 )
    {
      v71 = *(*v64 + 52LL);
      v69 += v71;
      v688 = v71;
      v72 = 112LL * v71;
      v2->m_Buffer.m_pBuffer = &v68[v72];
      v73 = memcpy(v68, *(*v64 + 272LL), v72);
      v74 = v2->m_nCombinedNodeCount;
      v75 = &v2->m_OldToNewNode.m_Memory.m_pMemory[v64[2]];
      v76 = *(*v64 + 16LL);
      if ( v688 != 0 )
      {
        v77 = (v73 + 32);
        v78 = &v73[112 * (v688 - 1) + 144];
        do
        {
          v79 = v77 - 16;
          for ( k = 0; k != 4; ++k )
          {
            v81 = v79[k];
            if ( v76 <= v81 )
              v79[k] = v74;
            else
              v79[k] = *(v75 + 2 * v81);
          }
          v82 = v77 - 12;
          for ( m = 0; m != 4; ++m )
          {
            v84 = *v82;
            if ( v76 <= v84 )
              *v82 = v74;
            else
              *v82 = *(v75 + 2 * v84);
            ++v82;
          }
          v85 = v77 - 8;
          LOBYTE(m) = 0;
          do
          {
            v86 = *v85;
            if ( v76 <= v86 )
              *v85 = v74;
            else
              *v85 = *(v75 + 2 * v86);
            ++m;
            ++v85;
          }
          while ( m != 4 );
          v87 = v77 - 4;
          do
          {
            v88 = *v87;
            if ( v76 <= v88 )
              *v87 = v74;
            else
              *v87 = *(v75 + 2 * v88);
            ++v87;
            --m;
          }
          while ( m != 0 );
          v89 = v77;
          for ( n = 0; n != 4; ++n )
          {
            v91 = *v89;
            if ( v76 <= v91 )
              *v89 = v74;
            else
              *v89 = *(v75 + 2 * v91);
            ++v89;
          }
          v77 += 56;
        }
        while ( v77 != v78 );
      }
      v64 += 6;
      if ( v70 == v64 )
        break;
      v68 = v2->m_Buffer.m_pBuffer;
    }
    v2->m_pCombinedModel->m_nSimdNodeBaseCount = v69;
    v92 = 0;
    if ( v69 != 0 )
      v92 = v66;
    v93 = v2->m_pCombinedModel;
  }
  v93->m_pSimdNodeBases = v92;
  v94 = v2->m_Models.m_Memory.m_pMemory;
  v95 = v2->m_Models.m_Size;
  v96 = (v2->m_Buffer.m_pBuffer + 15) & 0xFFFFFFFFFFFFFFF0LL;
  v2->m_Buffer.m_pBuffer = v96;
  v689 = &v94[6 * v95];
  if ( v94 == v689 )
  {
    v2->m_pCombinedModel->m_nSimdSpringIntegratorCount = 0;
    v111 = 0;
    v112 = v2->m_pCombinedModel;
  }
  else
  {
    v97 = v96;
    v98 = 0;
    while ( 1 )
    {
      v99 = *(*v94 + 48LL);
      v98 += v99;
      v100 = 80LL * v99;
      v2->m_Buffer.m_pBuffer = &v97[v100];
      v101 = memcpy(v97, *(*v94 + 464LL), v100);
      v102 = v2->m_nCombinedNodeCount;
      v103 = &v2->m_OldToNewNode.m_Memory.m_pMemory[v94[2]];
      v104 = *(*v94 + 16LL);
      if ( v99 != 0 )
      {
        v105 = (v101 + 24);
        v106 = &v101[80 * (v99 - 1) + 104];
        do
        {
          v107 = v105 - 8;
          do
          {
            v108 = v107 - 4;
            do
            {
              v109 = *v108;
              v110 = v102;
              if ( v104 > v109 )
                v110 = *(v103 + 2 * v109);
              *v108++ = v110;
            }
            while ( v108 != v107 );
            v107 = v108 + 4;
          }
          while ( v105 != v108 + 4 );
          v105 = v108 + 44;
        }
        while ( v108 + 44 != v106 );
      }
      v94 += 6;
      if ( v689 == v94 )
        break;
      v97 = v2->m_Buffer.m_pBuffer;
    }
    v2->m_pCombinedModel->m_nSimdSpringIntegratorCount = v98;
    v111 = 0;
    if ( v98 != 0 )
      v111 = v96;
    v112 = v2->m_pCombinedModel;
  }
  v112->m_pSimdSpringIntegrator = v111;
  v113 = 0;
  v114 = 1;
  v115 = 2;
  v116 = (v2->m_Buffer.m_pBuffer + 15) & 0xFFFFFFFFFFFFFFF0LL;
  v2->m_Buffer.m_pBuffer = v116;
  while ( 1 )
  {
    v117 = v115;
    v118 = v2->m_Models.m_Memory.m_pMemory;
    v119 = &v118[v2->m_Models.m_Size];
    if ( v118 != v119 )
    {
      v120 = v2->m_Buffer.m_pBuffer;
      v117 = v115;
      do
      {
        v121 = 0;
        if ( v114 == 0 )
          v121 = v118->m_pModel->m_nFitMatrixCount[v115 + 1];
        v122 = v118->m_pModel->m_nFitMatrixCount[v115] - v121;
        ++v118;
        v113 += v122;
        v120 += 64 * v122;
        v2->m_Buffer.m_pBuffer = v120;
      }
      while ( v119 != v118 );
    }
    --v115;
    v2->m_pCombinedModel->m_nFitMatrixCount[v117] = v113;
    if ( v115 == -1 )
      break;
    v114 = 0;
  }
  v123 = 0;
  if ( v113 != 0 )
    v123 = v116;
  v2->m_pCombinedModel->m_pFitMatrices = v123;
  v124 = v2->m_Models.m_Memory.m_pMemory;
  v125 = &v124[6 * v2->m_Models.m_Size];
  if ( v124 == v125 )
    goto LABEL_121;
  if ( *(*v124 + 280LL) == 0 )
  {
    v126 = v124 + 6;
    while ( v126 != v125 )
    {
      v127 = *v126;
      v126 += 6;
      if ( *(v127 + 280) != 0 )
        goto LABEL_145;
    }
LABEL_121:
    v128 = 0;
    goto LABEL_122;
  }
LABEL_145:
  v154 = &v124[6 * v2->m_Models.m_Size];
  v155 = v2;
  v156 = v2->m_nCombinedNodeCount;
  v128 = (v2->m_Buffer.m_pBuffer + 15) & 0xFFFFFFFFFFFFFFF0LL;
  v2->m_Buffer.m_pBuffer = (v128 + 32LL * v156);
  while ( 1 )
  {
    v157 = *(*v124 + 280LL);
    v158 = *(*v124 + 16LL);
    v159 = &v155->m_OldToNewNode.m_Memory.m_pMemory[v124[2]];
    if ( v157 == 0 )
      break;
    v160 = 0;
    if ( v158 != 0 )
    {
      do
      {
        v161 = v156;
        if ( v158 > v160 )
          v161 = *(v159 + 2LL * v160);
        v162 = v160++;
        v163 = (v128 + 32 * v161);
        v164 = (v157 + 32 * v162);
        v165 = v164[1];
        v166 = v164[2];
        *v163 = *v164;
        v163[1] = v165;
        v163[2] = v166;
        v167 = v164[7];
        v168 = v164[5];
        v169 = v164[4];
        v163[6] = v164[6];
        v163[5] = v168;
        v163[4] = v169;
        v163[7] = v167;
      }
      while ( v160 < *(*v124 + 16LL) );
    }
LABEL_151:
    v124 += 6;
    if ( v154 == v124 )
      goto LABEL_159;
LABEL_152:
    v156 = v155->m_nCombinedNodeCount;
  }
  v664 = v155;
  v673 = v154;
  CFeModel::GetDefaultInitPose(&v715, *v124);
  v154 = v673;
  v155 = v664;
  if ( v158 == 0 )
    goto LABEL_151;
  x = v715.m_vPosition.x;
  v171 = 0;
  y = v715.m_vPosition.y;
  z = v715.m_vPosition.z;
  w = v715.m_orientation.w;
  v175 = v715.m_orientation.z;
  v176 = v715.m_orientation.y;
  v177 = v715.m_orientation.x;
  do
  {
    v178 = v156;
    if ( v158 > v171 )
      v178 = *(v159 + 2LL * v171);
    ++v171;
    v179 = (v128 + 32 * v178);
    v179[4] = v177;
    *v179 = x;
    v179[1] = y;
    v179[2] = z;
    v179[5] = v176;
    v179[6] = v175;
    v179[7] = w;
  }
  while ( v171 < *(*v124 + 16LL) );
  v124 += 6;
  if ( v673 != v124 )
    goto LABEL_152;
LABEL_159:
  v2 = v155;
LABEL_122:
  v2->m_pCombinedModel->m_pInitPose = v128;
  v129 = v2->m_Models.m_Memory.m_pMemory;
  v130 = &v129[6 * v2->m_Models.m_Size];
  if ( v129 == v130 )
  {
LABEL_127:
    v133 = 0;
    goto LABEL_128;
  }
  if ( *(*v129 + 496LL) == 0 )
  {
    v131 = v129 + 6;
    while ( v131 != v130 )
    {
      v132 = *v131;
      v131 += 6;
      if ( *(v132 + 496) != 0 )
        goto LABEL_160;
    }
    goto LABEL_127;
  }
LABEL_160:
  v691 = &v129[6 * v2->m_Models.m_Size];
  v180 = v2;
  v133 = (v2->m_Buffer.m_pBuffer + 7) & 0xFFFFFFFFFFFFFFF8LL;
  v181 = v2->m_nCombinedNodeCount;
  v2->m_Buffer.m_pBuffer = (v133 + 8LL * v181);
  while ( 2 )
  {
    v182 = *(*v129 + 496LL);
    v183 = *(*v129 + 16LL);
    v184 = &v180->m_OldToNewNode.m_Memory.m_pMemory[v129[2]];
    if ( v182 != 0 )
    {
      v185 = 0;
      if ( v183 != 0 )
      {
        do
        {
          v186 = v181;
          if ( v183 > v185 )
            v186 = *(v184 + 2LL * v185);
          v187 = v185++;
          *(v133 + 8 * v186) = *(v182 + 8 * v187);
        }
        while ( v185 < *(*v129 + 16LL) );
      }
      goto LABEL_166;
    }
    v674 = v181;
    DefaultCtrlName = CFeModel::GetDefaultCtrlName(*v129);
    if ( v183 == 0 )
    {
LABEL_166:
      v129 += 6;
      if ( v691 == v129 )
        break;
      goto LABEL_167;
    }
    v189 = 0;
    do
    {
      v190 = v674;
      if ( v183 > v189 )
        v190 = *(v184 + 2LL * v189);
      *(v133 + 8 * v190) = DefaultCtrlName;
      ++v189;
    }
    while ( v189 < *(*v129 + 16LL) );
    v129 += 6;
    if ( v691 != v129 )
    {
LABEL_167:
      v181 = v180->m_nCombinedNodeCount;
      continue;
    }
    break;
  }
  v2 = v180;
LABEL_128:
  v2->m_pCombinedModel->m_pCtrlName = v133;
  v134 = v2->m_Models.m_Memory.m_pMemory;
  v135 = v2->m_Models.m_Size;
  v136 = (v2->m_Buffer.m_pBuffer + 3) & 0xFFFFFFFFFFFFFFFCLL;
  v2->m_Buffer.m_pBuffer = v136;
  v137 = 3 * v135;
  if ( v134 == &v134[2 * v137] )
  {
    v2->m_pCombinedModel->m_nNodeBaseCount = 0;
    v191 = 0;
    v192 = v2->m_pCombinedModel;
    goto LABEL_178;
  }
  v138 = v136;
  v139 = 0;
  v140 = &v134[2 * v137];
  while ( 2 )
  {
    v141 = *(*v134 + 62LL);
    v139 += v141;
    v690 = v141;
    v142 = 32LL * v141;
    v2->m_Buffer.m_pBuffer = &v138[v142];
    v143 = memcpy(v138, *(*v134 + 264LL), v142);
    v144 = v2->m_nCombinedNodeCount;
    v145 = &v2->m_OldToNewNode.m_Memory.m_pMemory[v134[2]];
    v146 = *(*v134 + 16LL);
    if ( v690 != 0 )
    {
      v147 = v143;
      v148 = &v143[16 * (v690 - 1) + 16];
      do
      {
        while ( 1 )
        {
          v153 = *v147;
          if ( v146 <= v153 )
            break;
          *v147 = *(v145 + 2 * v153);
          v149 = v147[4];
          if ( v146 <= v149 )
            goto LABEL_139;
LABEL_133:
          v147[4] = *(v145 + 2 * v149);
          v150 = v147[5];
          if ( v146 <= v150 )
            goto LABEL_140;
LABEL_134:
          v147[5] = *(v145 + 2 * v150);
          v151 = v147[6];
          if ( v146 <= v151 )
            goto LABEL_141;
LABEL_135:
          v147[6] = *(v145 + 2 * v151);
          v152 = v147[7];
          if ( v146 <= v152 )
            goto LABEL_136;
LABEL_142:
          v147 += 16;
          *(v147 - 9) = *(v145 + 2 * v152);
          if ( v147 == v148 )
            goto LABEL_143;
        }
        v149 = v147[4];
        *v147 = v144;
        if ( v146 > v149 )
          goto LABEL_133;
LABEL_139:
        v150 = v147[5];
        v147[4] = v144;
        if ( v146 > v150 )
          goto LABEL_134;
LABEL_140:
        v151 = v147[6];
        v147[5] = v144;
        if ( v146 > v151 )
          goto LABEL_135;
LABEL_141:
        v152 = v147[7];
        v147[6] = v144;
        if ( v146 > v152 )
          goto LABEL_142;
LABEL_136:
        v147[7] = v144;
        v147 += 16;
      }
      while ( v147 != v148 );
    }
LABEL_143:
    v134 += 6;
    if ( v140 != v134 )
    {
      v138 = v2->m_Buffer.m_pBuffer;
      continue;
    }
    break;
  }
  v2->m_pCombinedModel->m_nNodeBaseCount = v139;
  v191 = 0;
  if ( v139 != 0 )
    v191 = v136;
  v192 = v2->m_pCombinedModel;
LABEL_178:
  v192->m_pNodeBases = v191;
  v193 = v2->m_Models.m_Memory.m_pMemory;
  v194 = v2->m_Models.m_Size;
  v195 = (v2->m_Buffer.m_pBuffer + 3) & 0xFFFFFFFFFFFFFFFCLL;
  v2->m_Buffer.m_pBuffer = v195;
  v196 = 3 * v194;
  if ( v193 == &v193[2 * v196] )
  {
    v2->m_pCombinedModel->m_nReverseOffsetCount = 0;
    v209 = 0;
    v210 = v2->m_pCombinedModel;
    goto LABEL_192;
  }
  v197 = v195;
  v198 = 0;
  v199 = &v193[2 * v196];
  while ( 2 )
  {
    v200 = *(*v193 + 112LL);
    v198 += v200;
    v692 = v200;
    v2->m_Buffer.m_pBuffer = &v197[16 * v200];
    v201 = memcpy(v197, *(*v193 + 440LL), 16LL * v200);
    v202 = v2->m_nCombinedNodeCount;
    v203 = &v2->m_OldToNewNode.m_Memory.m_pMemory[v193[2]];
    v204 = *(*v193 + 16LL);
    if ( v692 != 0 )
    {
      v205 = v201;
      v206 = &v201[8 * v692];
      while ( 1 )
      {
        v208 = *v205;
        if ( v204 > v208 )
        {
          *v205 = *(v203 + 2 * v208);
          v207 = v205[1];
          if ( v204 <= v207 )
            goto LABEL_183;
LABEL_186:
          v205 += 8;
          *(v205 - 7) = *(v203 + 2 * v207);
          if ( v205 == v206 )
            break;
        }
        else
        {
          v207 = v205[1];
          *v205 = v202;
          if ( v204 > v207 )
            goto LABEL_186;
LABEL_183:
          v205[1] = v202;
          v205 += 8;
          if ( v205 == v206 )
            break;
        }
      }
    }
    v193 += 6;
    if ( v199 != v193 )
    {
      v197 = v2->m_Buffer.m_pBuffer;
      continue;
    }
    break;
  }
  v2->m_pCombinedModel->m_nReverseOffsetCount = v198;
  v209 = 0;
  if ( v198 != 0 )
    v209 = v195;
  v210 = v2->m_pCombinedModel;
LABEL_192:
  v210->m_pReverseOffsets = v209;
  v211 = v2->m_Models.m_Memory.m_pMemory;
  v212 = v2->m_Models.m_Size;
  v213 = (v2->m_Buffer.m_pBuffer + 3) & 0xFFFFFFFFFFFFFFFCLL;
  v2->m_Buffer.m_pBuffer = v213;
  v214 = 3 * v212;
  if ( v211 == &v211[2 * v214] )
  {
    v2->m_pCombinedModel->m_nCtrlOffsets = 0;
    v228 = 0;
    v229 = v2->m_pCombinedModel;
    goto LABEL_206;
  }
  v215 = v213;
  v216 = 0;
  v217 = &v211[2 * v214];
  while ( 2 )
  {
    v218 = *(*v211 + 66LL);
    v216 += v218;
    v693 = v218;
    v219 = 16LL * v218;
    v2->m_Buffer.m_pBuffer = &v215[v219];
    v220 = memcpy(v215, *(*v211 + 288LL), v219);
    v221 = v2->m_nCombinedNodeCount;
    v222 = &v2->m_OldToNewNode.m_Memory.m_pMemory[v211[2]];
    v223 = *(*v211 + 16LL);
    if ( v693 != 0 )
    {
      v224 = v220;
      v225 = &v220[8 * (v693 - 1) + 8];
      while ( 1 )
      {
        v227 = *v224;
        if ( v223 > v227 )
        {
          *v224 = *(v222 + 2 * v227);
          v226 = v224[1];
          if ( v223 <= v226 )
            goto LABEL_197;
LABEL_200:
          v224 += 8;
          *(v224 - 7) = *(v222 + 2 * v226);
          if ( v224 == v225 )
            break;
        }
        else
        {
          v226 = v224[1];
          *v224 = v221;
          if ( v223 > v226 )
            goto LABEL_200;
LABEL_197:
          v224[1] = v221;
          v224 += 8;
          if ( v224 == v225 )
            break;
        }
      }
    }
    v211 += 6;
    if ( v217 != v211 )
    {
      v215 = v2->m_Buffer.m_pBuffer;
      continue;
    }
    break;
  }
  v2->m_pCombinedModel->m_nCtrlOffsets = v216;
  v228 = 0;
  if ( v216 != 0 )
    v228 = v213;
  v229 = v2->m_pCombinedModel;
LABEL_206:
  v229->m_pCtrlOffsets = v228;
  v230 = v2->m_Models.m_Memory.m_pMemory;
  v231 = v2->m_Models.m_Size;
  v232 = (v2->m_Buffer.m_pBuffer + 3) & 0xFFFFFFFFFFFFFFFCLL;
  v2->m_Buffer.m_pBuffer = v232;
  v233 = 3 * v231;
  if ( v230 == &v230[2 * v233] )
  {
    v2->m_pCombinedModel->m_nCtrlOsOffsets = 0;
    v247 = 0;
    v248 = v2->m_pCombinedModel;
    goto LABEL_220;
  }
  v234 = v232;
  v235 = 0;
  v236 = &v230[2 * v233];
  while ( 2 )
  {
    v237 = *(*v230 + 68LL);
    v235 += v237;
    v694 = v237;
    v238 = 4LL * v237;
    v2->m_Buffer.m_pBuffer = &v234[v238];
    v239 = memcpy(v234, *(*v230 + 296LL), v238);
    v240 = v2->m_nCombinedNodeCount;
    v241 = &v2->m_OldToNewNode.m_Memory.m_pMemory[v230[2]];
    v242 = *(*v230 + 16LL);
    if ( v694 != 0 )
    {
      v243 = v239;
      v244 = &v239[2 * (v694 - 1) + 2];
      while ( 1 )
      {
        v246 = *v243;
        if ( v242 > v246 )
        {
          *v243 = *(v241 + 2 * v246);
          v245 = v243[1];
          if ( v242 <= v245 )
            goto LABEL_211;
LABEL_214:
          v243 += 2;
          *(v243 - 1) = *(v241 + 2 * v245);
          if ( v243 == v244 )
            break;
        }
        else
        {
          v245 = v243[1];
          *v243 = v240;
          if ( v242 > v245 )
            goto LABEL_214;
LABEL_211:
          v243[1] = v240;
          v243 += 2;
          if ( v243 == v244 )
            break;
        }
      }
    }
    v230 += 6;
    if ( v236 != v230 )
    {
      v234 = v2->m_Buffer.m_pBuffer;
      continue;
    }
    break;
  }
  v2->m_pCombinedModel->m_nCtrlOsOffsets = v235;
  v247 = 0;
  if ( v235 != 0 )
    v247 = v232;
  v248 = v2->m_pCombinedModel;
LABEL_220:
  v248->m_pCtrlOsOffsets = v247;
  v249 = v2->m_Models.m_Memory.m_pMemory;
  v250 = v2->m_Models.m_Size;
  v251 = (v2->m_Buffer.m_pBuffer + 3) & 0xFFFFFFFFFFFFFFFCLL;
  v2->m_Buffer.m_pBuffer = v251;
  v252 = 3 * v250;
  if ( v249 == &v249[2 * v252] )
  {
    v2->m_pCombinedModel->m_nFollowNodeCount = 0;
    v266 = 0;
    v267 = v2->m_pCombinedModel;
    goto LABEL_234;
  }
  v253 = v251;
  v254 = 0;
  v255 = &v249[2 * v252];
  while ( 2 )
  {
    v256 = *(*v249 + 70LL);
    v254 += v256;
    v695 = v256;
    v257 = 8LL * v256;
    v2->m_Buffer.m_pBuffer = &v253[v257];
    v258 = memcpy(v253, *(*v249 + 304LL), v257);
    v259 = v2->m_nCombinedNodeCount;
    v260 = &v2->m_OldToNewNode.m_Memory.m_pMemory[v249[2]];
    v261 = *(*v249 + 16LL);
    if ( v695 != 0 )
    {
      v262 = v258;
      v263 = &v258[4 * (v695 - 1) + 4];
      while ( 1 )
      {
        v265 = *v262;
        if ( v261 > v265 )
        {
          *v262 = *(v260 + 2 * v265);
          v264 = v262[1];
          if ( v261 <= v264 )
            goto LABEL_225;
LABEL_228:
          v262 += 4;
          *(v262 - 3) = *(v260 + 2 * v264);
          if ( v262 == v263 )
            break;
        }
        else
        {
          v264 = v262[1];
          *v262 = v259;
          if ( v261 > v264 )
            goto LABEL_228;
LABEL_225:
          v262[1] = v259;
          v262 += 4;
          if ( v262 == v263 )
            break;
        }
      }
    }
    v249 += 6;
    if ( v255 != v249 )
    {
      v253 = v2->m_Buffer.m_pBuffer;
      continue;
    }
    break;
  }
  v2->m_pCombinedModel->m_nFollowNodeCount = v254;
  v266 = 0;
  if ( v254 != 0 )
    v266 = v251;
  v267 = v2->m_pCombinedModel;
LABEL_234:
  v267->m_pFollowNodes = v266;
  v268 = v2->m_Models.m_Memory.m_pMemory;
  v269 = &v268[6 * v2->m_Models.m_Size];
  if ( v268 == v269 )
  {
LABEL_239:
    v272 = 0;
    goto LABEL_240;
  }
  if ( *(*v268 + 256LL) == 0 )
  {
    v270 = v268 + 6;
    while ( v270 != v269 )
    {
      v271 = *v270;
      v270 += 6;
      if ( *(v271 + 256) != 0 )
        goto LABEL_251;
    }
    goto LABEL_239;
  }
LABEL_251:
  v697 = &v268[6 * v2->m_Models.m_Size];
  v290 = v2;
  v272 = (v2->m_Buffer.m_pBuffer + 3) & 0xFFFFFFFFFFFFFFFCLL;
  v291 = v2->m_nCombinedNodeCount;
  v2->m_Buffer.m_pBuffer = (v272 + 4LL * v291);
  while ( 2 )
  {
    v292 = *(*v268 + 256LL);
    v293 = *(*v268 + 16LL);
    v294 = &v290->m_OldToNewNode.m_Memory.m_pMemory[v268[2]];
    if ( v292 != 0 )
    {
      v295 = 0;
      if ( v293 != 0 )
      {
        do
        {
          v296 = v291;
          if ( v293 > v295 )
            v296 = *(v294 + 2LL * v295);
          v297 = v295++;
          *(v272 + 4 * v296) = *(v292 + 4 * v297);
        }
        while ( v295 < *(*v268 + 16LL) );
      }
      goto LABEL_257;
    }
    v675 = v291;
    DefaultCtrlHash = CFeModel::GetDefaultCtrlHash(*v268);
    if ( v293 == 0 )
    {
LABEL_257:
      v268 += 6;
      if ( v697 == v268 )
        break;
      goto LABEL_258;
    }
    v299 = 0;
    do
    {
      v300 = v675;
      if ( v293 > v299 )
        v300 = *(v294 + 2LL * v299);
      *(v272 + 4 * v300) = DefaultCtrlHash;
      ++v299;
    }
    while ( v299 < *(*v268 + 16LL) );
    v268 += 6;
    if ( v697 != v268 )
    {
LABEL_258:
      v291 = v290->m_nCombinedNodeCount;
      continue;
    }
    break;
  }
  v2 = v290;
LABEL_240:
  v2->m_pCombinedModel->m_pCtrlHash = v272;
  v273 = v2->m_Models.m_Memory.m_pMemory;
  v274 = v2->m_Models.m_Size;
  v275 = (v2->m_Buffer.m_pBuffer + 3) & 0xFFFFFFFFFFFFFFFCLL;
  v2->m_Buffer.m_pBuffer = v275;
  v276 = 3 * v274;
  if ( v273 == &v273[2 * v276] )
  {
    v2->m_pCombinedModel->m_nSpringIntegratorCount = 0;
    v301 = 0;
    v302 = v2->m_pCombinedModel;
    goto LABEL_269;
  }
  v277 = v275;
  v278 = 0;
  v279 = &v273[2 * v276];
  while ( 2 )
  {
    v280 = *(*v273 + 64LL);
    v278 += v280;
    v696 = v280;
    v281 = 20LL * v280;
    v2->m_Buffer.m_pBuffer = &v277[v281];
    v282 = memcpy(v277, *(*v273 + 456LL), v281);
    v283 = v2->m_nCombinedNodeCount;
    v284 = &v2->m_OldToNewNode.m_Memory.m_pMemory[v273[2]];
    v285 = *(*v273 + 16LL);
    if ( v696 != 0 )
    {
      v286 = v282;
      v287 = &v282[10 * (v696 - 1) + 10];
      while ( 1 )
      {
        v289 = *v286;
        if ( v285 <= v289 )
        {
          v288 = v286[1];
          *v286 = v283;
          if ( v285 > v288 )
            goto LABEL_245;
LABEL_248:
          v286[1] = v283;
          v286 += 10;
          if ( v286 == v287 )
            break;
        }
        else
        {
          *v286 = *(v284 + 2 * v289);
          v288 = v286[1];
          if ( v285 <= v288 )
            goto LABEL_248;
LABEL_245:
          v286 += 10;
          *(v286 - 9) = *(v284 + 2 * v288);
          if ( v286 == v287 )
            break;
        }
      }
    }
    v273 += 6;
    if ( v279 != v273 )
    {
      v277 = v2->m_Buffer.m_pBuffer;
      continue;
    }
    break;
  }
  v2->m_pCombinedModel->m_nSpringIntegratorCount = v278;
  v301 = 0;
  if ( v278 != 0 )
    v301 = v275;
  v302 = v2->m_pCombinedModel;
LABEL_269:
  v302->m_pSpringIntegrator = v301;
  v303 = v2->m_Models.m_Memory.m_pMemory;
  v304 = &v303[6 * v2->m_Models.m_Size];
  if ( v303 != v304 )
  {
    if ( *(*v303 + 488LL) == 0 )
    {
      v305 = v303 + 6;
      while ( v305 != v304 )
      {
        v306 = *v305;
        v305 += 6;
        if ( *(v306 + 488) != 0 )
          goto LABEL_304;
      }
      goto LABEL_274;
    }
LABEL_304:
    v700 = &v303[6 * v2->m_Models.m_Size];
    v345 = v2;
    v307 = (v2->m_Buffer.m_pBuffer + 3) & 0xFFFFFFFFFFFFFFFCLL;
    v346 = v2->m_nCombinedNodeCount;
    v2->m_Buffer.m_pBuffer = (v307 + 4LL * v346);
    while ( 2 )
    {
      v347 = *(*v303 + 488LL);
      v348 = *(*v303 + 16LL);
      v349 = &v345->m_OldToNewNode.m_Memory.m_pMemory[v303[2]];
      if ( v347 != 0 )
      {
        v350 = 0;
        if ( v348 != 0 )
        {
          do
          {
            v351 = v346;
            if ( v348 > v350 )
              v351 = *(v349 + 2LL * v350);
            v352 = v350++;
            *(v307 + 4 * v351) = *(v347 + 4 * v352);
          }
          while ( v350 < *(*v303 + 16LL) );
        }
        goto LABEL_310;
      }
      v677 = v346;
      DefaultNodeInvMass = CFeModel::GetDefaultNodeInvMass(*v303);
      if ( v348 != 0 )
      {
        v354 = 0;
        do
        {
          v355 = v677;
          if ( v348 > v354 )
            v355 = *(v349 + 2LL * v354);
          *(v307 + 4 * v355) = DefaultNodeInvMass;
          ++v354;
        }
        while ( v354 < *(*v303 + 16LL) );
        v303 += 6;
        if ( v700 == v303 )
        {
LABEL_318:
          v2 = v345;
          goto LABEL_275;
        }
      }
      else
      {
LABEL_310:
        v303 += 6;
        if ( v700 == v303 )
          goto LABEL_318;
      }
      v346 = v345->m_nCombinedNodeCount;
      continue;
    }
  }
LABEL_274:
  v307 = 0;
LABEL_275:
  v698 = 1;
  v308 = 0;
  v676 = 2;
  v309 = v2;
  v2->m_pCombinedModel->m_pNodeInvMasses = v307;
  v656 = (v2->m_Buffer.m_pBuffer + 3) & 0xFFFFFFFFFFFFFFFCLL;
  v2->m_Buffer.m_pBuffer = v656;
  while ( 1 )
  {
    v310 = v309->m_Models.m_Memory.m_pMemory;
    v311 = v676;
    for ( ii = &v310[6 * v309->m_Models.m_Size]; ii != v310; v310 += 6 )
    {
      v312 = *(*v310 + 2LL * v676 + 24);
      if ( v698 != 0 )
      {
        v315 = 0;
        v314 = 0;
        v313 = 0;
      }
      else
      {
        v313 = *(*v310 + 2LL * v676 + 26);
        v314 = v313;
        v315 = 76LL * v313;
      }
      v316 = v312 - v313;
      v308 += v312 - v313;
      v317 = v309->m_Buffer.m_pBuffer;
      v309->m_Buffer.m_pBuffer = &v317[76 * (v312 - v313)];
      v318 = memcpy(v317, (*(*v310 + 184LL) + v315), 76LL * (v312 - v314));
      v319 = v309->m_nCombinedNodeCount;
      v320 = &v309->m_OldToNewNode.m_Memory.m_pMemory[v310[2]];
      v321 = *(*v310 + 16LL);
      if ( v316 != 0 )
      {
        v322 = v318;
        v323 = &v318[76 * (v316 - 1) + 76];
        do
        {
          for ( jj = 0; jj != 8; jj += 2 )
          {
            v325 = *&v322[jj];
            if ( v321 <= v325 )
              *&v322[jj] = v319;
            else
              *&v322[jj] = *(v320 + 2 * v325);
          }
          v322 += 76;
        }
        while ( v322 != v323 );
      }
    }
    --v676;
    v309->m_pCombinedModel->m_nQuadCount[v311] = v308;
    if ( v676 == -1 )
      break;
    v698 = 0;
  }
  v326 = v309;
  v327 = 0;
  if ( v308 != 0 )
    v327 = v656;
  v309->m_pCombinedModel->m_pQuads = v327;
  v328 = v309->m_Models.m_Memory.m_pMemory;
  v329 = v309->m_Models.m_Size;
  v330 = (v309->m_Buffer.m_pBuffer + 3) & 0xFFFFFFFFFFFFFFFCLL;
  v309->m_Buffer.m_pBuffer = v330;
  v331 = 3 * v329;
  if ( v328 == &v328[2 * v331] )
  {
    v309->m_pCombinedModel->m_nRodCount = 0;
    v356 = 0;
    v357 = v309->m_pCombinedModel;
    goto LABEL_322;
  }
  v332 = v330;
  v333 = 0;
  v334 = &v328[2 * v331];
  while ( 2 )
  {
    v335 = *(*v328 + 54LL);
    v333 += v335;
    v699 = v335;
    v336 = 20LL * v335;
    v326->m_Buffer.m_pBuffer = &v332[v336];
    v337 = memcpy(v332, *(*v328 + 208LL), v336);
    v338 = v326->m_nCombinedNodeCount;
    v339 = &v326->m_OldToNewNode.m_Memory.m_pMemory[v328[2]];
    v340 = *(*v328 + 16LL);
    if ( v699 != 0 )
    {
      v341 = v337;
      v342 = &v337[10 * (v699 - 1) + 10];
      while ( 1 )
      {
        v344 = *v341;
        if ( v340 <= v344 )
        {
          v343 = v341[1];
          *v341 = v338;
          if ( v340 > v343 )
            goto LABEL_298;
LABEL_301:
          v341[1] = v338;
          v341 += 10;
          if ( v341 == v342 )
            break;
        }
        else
        {
          *v341 = *(v339 + 2 * v344);
          v343 = v341[1];
          if ( v340 <= v343 )
            goto LABEL_301;
LABEL_298:
          v341 += 10;
          *(v341 - 9) = *(v339 + 2 * v343);
          if ( v341 == v342 )
            break;
        }
      }
    }
    v328 += 6;
    if ( v334 != v328 )
    {
      v332 = v326->m_Buffer.m_pBuffer;
      continue;
    }
    break;
  }
  v326->m_pCombinedModel->m_nRodCount = v333;
  v356 = 0;
  if ( v333 != 0 )
    v356 = v330;
  v357 = v326->m_pCombinedModel;
LABEL_322:
  v357->m_pRods = v356;
  v358 = 0;
  v701 = 1;
  v678 = 2;
  v359 = v326;
  v657 = (v326->m_Buffer.m_pBuffer + 3) & 0xFFFFFFFFFFFFFFFCLL;
  v326->m_Buffer.m_pBuffer = v657;
  while ( 1 )
  {
    v360 = v359->m_Models.m_Memory.m_pMemory;
    v361 = v678;
    for ( kk = &v360[6 * v359->m_Models.m_Size]; kk != v360; v360 += 6 )
    {
      v362 = *(*v360 + 2LL * v678 + 30);
      if ( v701 != 0 )
      {
        v365 = 0;
        v364 = 0;
        v363 = 0;
      }
      else
      {
        v363 = *(*v360 + 2LL * v678 + 32);
        v364 = v363;
        v365 = 28LL * v363;
      }
      v366 = v362 - v363;
      v358 += v362 - v363;
      v367 = v359->m_Buffer.m_pBuffer;
      v359->m_Buffer.m_pBuffer = &v367[28 * (v362 - v363)];
      v368 = memcpy(v367, (*(*v360 + 200LL) + v365), 28LL * (v362 - v364));
      v369 = v359->m_nCombinedNodeCount;
      v370 = &v359->m_OldToNewNode.m_Memory.m_pMemory[v360[2]];
      v371 = *(*v360 + 16LL);
      if ( v366 != 0 )
      {
        v372 = v368;
        v373 = &v368[28 * (v366 - 1) + 28];
        do
        {
          for ( mm = 0; mm != 6; mm += 2 )
          {
            v375 = *&v372[mm];
            if ( v371 <= v375 )
              *&v372[mm] = v369;
            else
              *&v372[mm] = *(v370 + 2 * v375);
          }
          v372 += 28;
        }
        while ( v372 != v373 );
      }
    }
    --v678;
    v359->m_pCombinedModel->m_nTriCount[v361] = v358;
    if ( v678 == -1 )
      break;
    v701 = 0;
  }
  v376 = v359;
  v377 = 0;
  if ( v358 != 0 )
    v377 = v657;
  v359->m_pCombinedModel->m_pTris = v377;
  v378 = v359->m_Models.m_Memory.m_pMemory;
  v379 = v359->m_Models.m_Size;
  v380 = (v359->m_Buffer.m_pBuffer + 3) & 0xFFFFFFFFFFFFFFFCLL;
  v359->m_Buffer.m_pBuffer = v380;
  v381 = 3 * v379;
  if ( v378 == &v378[2 * v381] )
  {
    v359->m_pCombinedModel->m_nAxialEdgeCount = 0;
    v396 = 0;
    v397 = v359->m_pCombinedModel;
  }
  else
  {
    v382 = v380;
    v383 = 0;
    v384 = &v378[2 * v381];
    while ( 1 )
    {
      v385 = *(*v378 + 56LL);
      v383 += v385;
      v702 = v385;
      v386 = 40LL * v385;
      v376->m_Buffer.m_pBuffer = &v382[v386];
      v387 = memcpy(v382, *(*v378 + 224LL), v386);
      v388 = v376->m_nCombinedNodeCount;
      v389 = &v376->m_OldToNewNode.m_Memory.m_pMemory[v378[2]];
      v390 = *(*v378 + 16LL);
      if ( v702 != 0 )
      {
        v391 = (v387 + 28);
        v392 = &v387[40 * (v702 - 1) + 68];
        do
        {
          v393 = v391;
          for ( nn = 6; nn != 0; --nn )
          {
            while ( 1 )
            {
              v395 = *v393;
              if ( v390 <= v395 )
                break;
              *v393++ = *(v389 + 2 * v395);
              if ( --nn == 0 )
                goto LABEL_348;
            }
            *v393++ = v388;
          }
LABEL_348:
          v391 += 20;
        }
        while ( v391 != v392 );
      }
      v378 += 6;
      if ( v384 == v378 )
        break;
      v382 = v376->m_Buffer.m_pBuffer;
    }
    v376->m_pCombinedModel->m_nAxialEdgeCount = v383;
    v396 = 0;
    if ( v383 != 0 )
      v396 = v380;
    v397 = v376->m_pCombinedModel;
  }
  v397->m_pAxialEdges = v396;
  v398 = 0;
  v679 = 1;
  v703 = 1;
  v399 = v376;
  v667 = (v376->m_Buffer.m_pBuffer + 3) & 0xFFFFFFFFFFFFFFFCLL;
  v376->m_Buffer.m_pBuffer = v667;
  while ( 2 )
  {
    v400 = v399->m_Models.m_Memory.m_pMemory;
    v401 = v703;
    v658 = &v400[6 * v399->m_Models.m_Size];
    if ( v400 != v658 )
    {
      while ( 1 )
      {
        v402 = *(*v400 + 2LL * v703 + 72);
        if ( v679 != 0 )
        {
          v405 = 0;
          v404 = 0;
          v403 = 0;
        }
        else
        {
          v403 = *(*v400 + 2LL * v703 + 74);
          v404 = v403;
          v405 = 24LL * v403;
        }
        v406 = v402 - v403;
        v398 += v402 - v403;
        v407 = v399->m_Buffer.m_pBuffer;
        v399->m_Buffer.m_pBuffer = &v407[24 * (v402 - v403)];
        v408 = memcpy(v407, (*(*v400 + 312LL) + v405), 24LL * (v402 - v404));
        v409 = v399->m_nCombinedNodeCount;
        v410 = &v399->m_OldToNewNode.m_Memory.m_pMemory[v400[2]];
        v411 = *(*v400 + 16LL);
        if ( v406 != 0 )
          break;
LABEL_365:
        v400 += 6;
        if ( v658 == v400 )
          goto LABEL_366;
      }
      v412 = v408;
      v413 = &v408[12 * (v406 - 1) + 12];
      while ( 1 )
      {
        v415 = *v412;
        if ( v411 > v415 )
        {
          *v412 = *(v410 + 2 * v415);
          v414 = v412[1];
          if ( v411 <= v414 )
            goto LABEL_361;
        }
        else
        {
          v414 = v412[1];
          *v412 = v409;
          if ( v411 <= v414 )
          {
LABEL_361:
            v412[1] = v409;
            v412 += 12;
            if ( v412 == v413 )
              goto LABEL_365;
            continue;
          }
        }
        v412 += 12;
        *(v412 - 11) = *(v410 + 2 * v414);
        if ( v412 == v413 )
          goto LABEL_365;
      }
    }
LABEL_366:
    --v703;
    v399->m_pCombinedModel->m_nCollisionSpheres[v401] = v398;
    if ( v703 != -1 )
    {
      v679 = 0;
      continue;
    }
    break;
  }
  v416 = v399;
  v417 = 0;
  if ( v398 != 0 )
    v417 = v667;
  v399->m_pCombinedModel->m_pCollisionSpheres = v417;
  v418 = v399->m_Models.m_Memory.m_pMemory;
  v419 = v399->m_Models.m_Size;
  v420 = (v399->m_Buffer.m_pBuffer + 3) & 0xFFFFFFFFFFFFFFFCLL;
  v399->m_Buffer.m_pBuffer = v420;
  v421 = 3 * v419;
  if ( v418 == &v418[2 * v421] )
  {
    v399->m_pCombinedModel->m_nCollisionPlanes = 0;
    v435 = 0;
    v436 = v399->m_pCombinedModel;
    goto LABEL_385;
  }
  v422 = v420;
  v423 = 0;
  v424 = &v418[2 * v421];
  while ( 2 )
  {
    v425 = *(*v418 + 76LL);
    v423 += v425;
    v704 = v425;
    v426 = 24LL * v425;
    v416->m_Buffer.m_pBuffer = &v422[v426];
    v427 = memcpy(v422, *(*v418 + 320LL), v426);
    v428 = v416->m_nCombinedNodeCount;
    v429 = &v416->m_OldToNewNode.m_Memory.m_pMemory[v418[2]];
    v430 = *(*v418 + 16LL);
    if ( v704 != 0 )
    {
      v431 = v427;
      v432 = &v427[12 * (v704 - 1) + 12];
      while ( 1 )
      {
        v434 = *v431;
        if ( v430 > v434 )
        {
          *v431 = *(v429 + 2 * v434);
          v433 = v431[1];
          if ( v430 <= v433 )
            goto LABEL_376;
LABEL_379:
          v431 += 12;
          *(v431 - 11) = *(v429 + 2 * v433);
          if ( v431 == v432 )
            break;
        }
        else
        {
          v433 = v431[1];
          *v431 = v428;
          if ( v430 > v433 )
            goto LABEL_379;
LABEL_376:
          v431[1] = v428;
          v431 += 12;
          if ( v431 == v432 )
            break;
        }
      }
    }
    v418 += 6;
    if ( v424 != v418 )
    {
      v422 = v416->m_Buffer.m_pBuffer;
      continue;
    }
    break;
  }
  v416->m_pCombinedModel->m_nCollisionPlanes = v423;
  v435 = 0;
  if ( v423 != 0 )
    v435 = v420;
  v436 = v416->m_pCombinedModel;
LABEL_385:
  v436->m_pCollisionPlanes = v435;
  v437 = v416->m_Models.m_Memory.m_pMemory;
  v438 = v416->m_Models.m_Size;
  v439 = (v416->m_Buffer.m_pBuffer + 3) & 0xFFFFFFFFFFFFFFFCLL;
  v416->m_Buffer.m_pBuffer = v439;
  v440 = &v437[3 * v438];
  if ( v437 == v440 )
  {
    v416->m_pCombinedModel->m_nWorldCollisionParamCount = 0;
    v445 = 0;
    v446 = v416->m_pCombinedModel;
  }
  else
  {
    v441 = v439;
    v442 = 0;
    while ( 1 )
    {
      v443 = *v437;
      v437 += 3;
      v444 = *(v443 + 78);
      v442 += v444;
      v416->m_Buffer.m_pBuffer = &v441[12 * v444];
      memcpy(v441, *(*(v437 - 3) + 328), 12 * v444);
      if ( v440 == v437 )
        break;
      v441 = v416->m_Buffer.m_pBuffer;
    }
    v416->m_pCombinedModel->m_nWorldCollisionParamCount = v442;
    v445 = 0;
    if ( v442 != 0 )
      v445 = v439;
    v446 = v416->m_pCombinedModel;
  }
  v446->m_pWorldCollisionParams = v445;
  v447 = v416->m_Models.m_Memory.m_pMemory;
  v448 = v416->m_Models.m_Size;
  v449 = (v416->m_Buffer.m_pBuffer + 3) & 0xFFFFFFFFFFFFFFFCLL;
  v416->m_Buffer.m_pBuffer = v449;
  v450 = 3 * v448;
  if ( v447 == &v447[2 * v450] )
  {
    v416->m_pCombinedModel->m_nTaperedCapsuleStretchCount = 0;
    v464 = 0;
    v465 = v416->m_pCombinedModel;
    goto LABEL_406;
  }
  v451 = v449;
  v452 = 0;
  v453 = &v447[2 * v450];
  while ( 2 )
  {
    v454 = *(*v447 + 82LL);
    v452 += v454;
    v705 = v454;
    v455 = 20LL * v454;
    v416->m_Buffer.m_pBuffer = &v451[v455];
    v456 = memcpy(v451, *(*v447 + 336LL), v455);
    v457 = v416->m_nCombinedNodeCount;
    v458 = &v416->m_OldToNewNode.m_Memory.m_pMemory[v447[2]];
    v459 = *(*v447 + 16LL);
    if ( v705 != 0 )
    {
      v460 = v456;
      v461 = &v456[10 * (v705 - 1) + 10];
      while ( 1 )
      {
        v463 = *v460;
        if ( v463 >= v459 )
        {
          v462 = v460[1];
          *v460 = v457;
          if ( v459 > v462 )
            goto LABEL_397;
LABEL_400:
          v460[1] = v457;
          v460 += 10;
          if ( v460 == v461 )
            break;
        }
        else
        {
          *v460 = *(v458 + 2 * v463);
          v462 = v460[1];
          if ( v459 <= v462 )
            goto LABEL_400;
LABEL_397:
          v460 += 10;
          *(v460 - 9) = *(v458 + 2 * v462);
          if ( v460 == v461 )
            break;
        }
      }
    }
    v447 += 6;
    if ( v453 != v447 )
    {
      v451 = v416->m_Buffer.m_pBuffer;
      continue;
    }
    break;
  }
  v416->m_pCombinedModel->m_nTaperedCapsuleStretchCount = v452;
  v464 = 0;
  if ( v452 != 0 )
    v464 = v449;
  v465 = v416->m_pCombinedModel;
LABEL_406:
  v465->m_pTaperedCapsuleStretches = v464;
  v466 = v416->m_Models.m_Memory.m_pMemory;
  v467 = v416->m_Models.m_Size;
  v468 = (v416->m_Buffer.m_pBuffer + 3) & 0xFFFFFFFFFFFFFFFCLL;
  v416->m_Buffer.m_pBuffer = v468;
  v469 = 3 * v467;
  if ( v466 == &v466[2 * v469] )
  {
    v416->m_pCombinedModel->m_nTaperedCapsuleRigidCount = 0;
    v482 = 0;
    v483 = v416->m_pCombinedModel;
  }
  else
  {
    v470 = v468;
    v471 = 0;
    v472 = &v466[2 * v469];
    while ( 1 )
    {
      v473 = *(*v466 + 84LL);
      v471 += v473;
      v706 = v473;
      v474 = 40LL * v473;
      v416->m_Buffer.m_pBuffer = &v470[v474];
      v475 = memcpy(v470, *(*v466 + 344LL), v474);
      v476 = v416->m_nCombinedNodeCount;
      v477 = &v416->m_OldToNewNode.m_Memory.m_pMemory[v466[2]];
      v478 = *(*v466 + 16LL);
      if ( v706 != 0 )
      {
        v479 = v475;
        v480 = &v475[20 * (v706 - 1) + 20];
        do
        {
          while ( 1 )
          {
            v481 = *v479;
            if ( v478 > v481 )
              break;
            *v479 = v476;
            v479 += 20;
            if ( v479 == v480 )
              goto LABEL_413;
          }
          v479 += 20;
          *(v479 - 20) = *(v477 + 2 * v481);
        }
        while ( v479 != v480 );
      }
LABEL_413:
      v466 += 6;
      if ( v472 == v466 )
        break;
      v470 = v416->m_Buffer.m_pBuffer;
    }
    v416->m_pCombinedModel->m_nTaperedCapsuleRigidCount = v471;
    v482 = 0;
    if ( v471 != 0 )
      v482 = v468;
    v483 = v416->m_pCombinedModel;
  }
  v483->m_pTaperedCapsuleRigids = v482;
  v484 = v416->m_Models.m_Memory.m_pMemory;
  v485 = v416->m_Models.m_Size;
  v486 = (v416->m_Buffer.m_pBuffer + 3) & 0xFFFFFFFFFFFFFFFCLL;
  v416->m_Buffer.m_pBuffer = v486;
  v487 = 3 * v485;
  if ( v484 == &v484[2 * v487] )
  {
    v416->m_pCombinedModel->m_nSphereRigidCount = 0;
    v500 = 0;
    v501 = v416->m_pCombinedModel;
  }
  else
  {
    v488 = v486;
    v489 = 0;
    v490 = &v484[2 * v487];
    while ( 1 )
    {
      v491 = *(*v484 + 86LL);
      v489 += v491;
      v707 = v491;
      v492 = 24LL * v491;
      v416->m_Buffer.m_pBuffer = &v488[v492];
      v493 = memcpy(v488, *(*v484 + 352LL), v492);
      v494 = v416->m_nCombinedNodeCount;
      v495 = &v416->m_OldToNewNode.m_Memory.m_pMemory[v484[2]];
      v496 = *(*v484 + 16LL);
      if ( v707 != 0 )
      {
        v497 = v493;
        v498 = &v493[12 * (v707 - 1) + 12];
        do
        {
          while ( 1 )
          {
            v499 = *v497;
            if ( v496 > v499 )
              break;
            *v497 = v494;
            v497 += 12;
            if ( v497 == v498 )
              goto LABEL_425;
          }
          v497 += 12;
          *(v497 - 12) = *(v495 + 2 * v499);
        }
        while ( v497 != v498 );
      }
LABEL_425:
      v484 += 6;
      if ( v490 == v484 )
        break;
      v488 = v416->m_Buffer.m_pBuffer;
    }
    v416->m_pCombinedModel->m_nSphereRigidCount = v489;
    v500 = 0;
    if ( v489 != 0 )
      v500 = v486;
    v501 = v416->m_pCombinedModel;
  }
  v501->m_pSphereRigids = v500;
  v502 = v416->m_Models.m_Memory.m_pMemory;
  v503 = &v502[3 * v416->m_Models.m_Size];
  v504 = (v416->m_Buffer.m_pBuffer + 3) & 0xFFFFFFFFFFFFFFFCLL;
  v416->m_Buffer.m_pBuffer = v504;
  if ( v502 == v503 )
  {
    v509 = 0;
    v416->m_pCombinedModel->m_nFitWeightCount = 0;
    v510 = v416->m_pCombinedModel;
  }
  else
  {
    v505 = v504;
    v506 = 0;
    do
    {
      v507 = *v502;
      v502 += 3;
      v508 = *(v507 + 108);
      v505 += 8 * v508;
      v506 += v508;
      v416->m_Buffer.m_pBuffer = v505;
    }
    while ( v503 != v502 );
    v416->m_pCombinedModel->m_nFitWeightCount = v506;
    v509 = 0;
    if ( v506 != 0 )
      v509 = v504;
    v510 = v416->m_pCombinedModel;
  }
  v510->m_pFitWeights = v509;
  v511 = v416->m_Models.m_Memory.m_pMemory;
  v512 = &v511[6 * v416->m_Models.m_Size];
  if ( v511 == v512 )
  {
LABEL_441:
    v514 = 0;
    goto LABEL_442;
  }
  if ( *(*v511 + 448LL) == 0 )
  {
    v513 = v416->m_Models.m_Memory.m_pMemory;
    do
    {
      v513 += 6;
      if ( v513 == v512 )
        goto LABEL_441;
    }
    while ( *(*v513 + 448LL) == 0 );
  }
  v584 = v416;
  v711 = &v511[6 * v416->m_Models.m_Size];
  v585 = v416->m_nCombinedNodeCount;
  v586 = (v416->m_Buffer.m_pBuffer + 3) & 0xFFFFFFFFFFFFFFFCLL;
  v416->m_Buffer.m_pBuffer = (v586 + 16LL * v585);
  v587 = v586;
  while ( 2 )
  {
    v588 = *(*v511 + 448LL);
    v589 = *(*v511 + 16LL);
    v590 = &v584->m_OldToNewNode.m_Memory.m_pMemory[v511[2]];
    if ( v588 != 0 )
    {
      v591 = 0;
      if ( v589 != 0 )
      {
        do
        {
          v592 = v585;
          if ( v589 > v591 )
            v592 = *(v590 + 2LL * v591);
          v593 = v591;
          v594 = 16 * v592;
          ++v591;
          v593 *= 16;
          v595 = *(v588 + v593 + 8);
          v596 = *(v588 + v593);
          *(v587 + v594 + 8) = v595;
          *(v587 + v594) = v596;
        }
        while ( v591 < *(*v511 + 16LL) );
      }
      goto LABEL_507;
    }
    p_m_Size = &v584->m_Models.m_Size;
    DefaultNodeIntegrator = CFeModel::GetDefaultNodeIntegrator(*v511);
    v597 = 0;
    v584 = p_m_Size;
    if ( *(*v511 + 16LL) == 0 )
    {
LABEL_507:
      v511 += 6;
      if ( v711 == v511 )
        break;
      goto LABEL_508;
    }
    do
    {
      v598 = v585;
      if ( v589 > v597 )
        v598 = *(v590 + 2LL * v597);
      ++v597;
      *(v587 + 16 * v598) = DefaultNodeIntegrator;
    }
    while ( v597 < *(*v511 + 16LL) );
    v511 += 6;
    if ( v711 != v511 )
    {
LABEL_508:
      v585 = v584->m_nCombinedNodeCount;
      continue;
    }
    break;
  }
  v514 = v587;
  v416 = v584;
LABEL_442:
  v416->m_pCombinedModel->m_pNodeIntegrator = v514;
  v515 = v416->m_Models.m_Memory.m_pMemory;
  v516 = &v515[6 * v416->m_Models.m_Size];
  if ( v515 == v516 )
  {
LABEL_447:
    v519 = 0;
    goto LABEL_448;
  }
  if ( *(*v515 + 360LL) == 0 )
  {
    v517 = v515 + 6;
    while ( v517 != v516 )
    {
      v518 = *v517;
      v517 += 6;
      if ( *(v518 + 360) != 0 )
        goto LABEL_543;
    }
    goto LABEL_447;
  }
LABEL_543:
  v714 = &v515[6 * v416->m_Models.m_Size];
  v631 = v416;
  v519 = (v416->m_Buffer.m_pBuffer + 3) & 0xFFFFFFFFFFFFFFFCLL;
  v632 = v416->m_nCombinedNodeCount;
  v416->m_Buffer.m_pBuffer = (v519 + 4LL * v632);
  while ( 2 )
  {
    v633 = *(*v515 + 360LL);
    v634 = *(*v515 + 16LL);
    v635 = &v631->m_OldToNewNode.m_Memory.m_pMemory[v515[2]];
    if ( v633 != 0 )
    {
      v636 = 0;
      if ( v634 != 0 )
      {
        do
        {
          v637 = v632;
          if ( v634 > v636 )
            v637 = *(v635 + 2LL * v636);
          v638 = v636++;
          *(v519 + 4 * v637) = *(v633 + 4 * v638);
        }
        while ( v636 < *(*v515 + 16LL) );
      }
      goto LABEL_549;
    }
    v684 = v632;
    DefaultLegacyStretchForce = CFeModel::GetDefaultLegacyStretchForce(*v515);
    if ( v634 == 0 )
    {
LABEL_549:
      v515 += 6;
      if ( v714 == v515 )
        break;
      goto LABEL_550;
    }
    v640 = 0;
    do
    {
      v641 = v684;
      if ( v634 > v640 )
        v641 = *(v635 + 2LL * v640);
      *(v519 + 4 * v641) = DefaultLegacyStretchForce;
      ++v640;
    }
    while ( v640 < *(*v515 + 16LL) );
    v515 += 6;
    if ( v714 != v515 )
    {
LABEL_550:
      v632 = v631->m_nCombinedNodeCount;
      continue;
    }
    break;
  }
  v416 = v631;
LABEL_448:
  v416->m_pCombinedModel->m_pLegacyStretchForce = v519;
  v520 = v416->m_Models.m_Memory.m_pMemory;
  v521 = &v520[6 * v416->m_Models.m_Size];
  if ( v520 == v521 )
  {
LABEL_453:
    v524 = 0;
    goto LABEL_454;
  }
  if ( *(*v520 + 368LL) == 0 )
  {
    v522 = v520 + 6;
    while ( v522 != v521 )
    {
      v523 = *v522;
      v522 += 6;
      if ( *(v523 + 368) != 0 )
        goto LABEL_515;
    }
    goto LABEL_453;
  }
LABEL_515:
  v599 = v416;
  v600 = v416->m_nCombinedNodeCount;
  m_nCombinedStaticNodeCount = v416->m_nCombinedStaticNodeCount;
  v602 = (v416->m_Buffer.m_pBuffer + 3) & 0xFFFFFFFFFFFFFFFCLL;
  v416->m_Buffer.m_pBuffer = (v602 + 4LL * (v600 - m_nCombinedStaticNodeCount));
  v603 = v602;
  while ( 2 )
  {
    v604 = v520[2];
    v605 = v599->m_OldToNewNode.m_Memory.m_pMemory;
    v606 = *(*v520 + 368LL);
    v607 = *(*v520 + 20LL);
    v608 = &v605[v604];
    v609 = *(*v520 + 16LL);
    if ( v606 != 0 )
    {
      v610 = 0;
      if ( v607 < v609 )
      {
        do
        {
          v611 = v600;
          if ( v609 > v607 )
            v611 = v608[v607];
          ++v607;
          v612 = *(v606 + 4LL * v610++);
          *(v603 + 4LL * (v611 - m_nCombinedStaticNodeCount)) = v612;
        }
        while ( v607 < *(*v520 + 16LL) );
      }
      goto LABEL_521;
    }
    v660 = &v599->m_Models.m_Size;
    v669 = v521;
    v682 = m_nCombinedStaticNodeCount;
    v712 = &v605[v604];
    DefaultNodeCollisionRadius = CFeModel::GetDefaultNodeCollisionRadius(*v520);
    m_nCombinedStaticNodeCount = v682;
    v521 = v669;
    v599 = v660;
    if ( v607 >= v609 )
    {
LABEL_521:
      v520 += 6;
      if ( v521 == v520 )
        break;
      goto LABEL_522;
    }
    do
    {
      v614 = v600;
      if ( v609 > v607 )
        v614 = *(&v712->m_vPosition.x + v607);
      ++v607;
      *(v603 + 4LL * (v614 - v682)) = DefaultNodeCollisionRadius;
    }
    while ( v607 < *(*v520 + 16LL) );
    v520 += 6;
    if ( v669 != v520 )
    {
LABEL_522:
      v600 = v599->m_nCombinedNodeCount;
      continue;
    }
    break;
  }
  v524 = v603;
  v416 = v599;
LABEL_454:
  v416->m_pCombinedModel->m_pNodeCollisionRadii = v524;
  v525 = v416->m_Models.m_Memory.m_pMemory;
  v526 = &v525[6 * v416->m_Models.m_Size];
  if ( v525 == v526 )
  {
LABEL_459:
    v528 = 0;
    goto LABEL_460;
  }
  if ( *(*v525 + 376LL) == 0 )
  {
    v527 = v416->m_Models.m_Memory.m_pMemory;
    do
    {
      v527 += 6;
      if ( v527 == v526 )
        goto LABEL_459;
    }
    while ( *(*v527 + 376LL) == 0 );
  }
  v615 = v416;
  v616 = v416->m_nCombinedNodeCount;
  v617 = v416->m_nCombinedStaticNodeCount;
  v618 = (v416->m_Buffer.m_pBuffer + 3) & 0xFFFFFFFFFFFFFFFCLL;
  v416->m_Buffer.m_pBuffer = (v618 + 4LL * (v616 - v617));
  v619 = v618;
  while ( 2 )
  {
    v620 = v525[2];
    v621 = v615->m_OldToNewNode.m_Memory.m_pMemory;
    v622 = *(*v525 + 376LL);
    v623 = *(*v525 + 20LL);
    v624 = &v621[v620];
    v625 = *(*v525 + 16LL);
    if ( v622 != 0 )
    {
      v626 = 0;
      if ( v623 < v625 )
      {
        do
        {
          v627 = v616;
          if ( v625 > v623 )
            v627 = v624[v623];
          ++v623;
          v628 = *(v622 + 4LL * v626++);
          *(v619 + 4LL * (v627 - v617)) = v628;
        }
        while ( v623 < *(*v525 + 16LL) );
      }
      goto LABEL_535;
    }
    v661 = &v615->m_Models.m_Size;
    v670 = v526;
    v683 = v617;
    v713 = &v621[v620];
    DefaultLocalRotation = CFeModel::GetDefaultLocalRotation(*v525);
    v617 = v683;
    v526 = v670;
    v615 = v661;
    if ( v623 >= v625 )
    {
LABEL_535:
      v525 += 6;
      if ( v526 == v525 )
        break;
      goto LABEL_536;
    }
    do
    {
      v630 = v616;
      if ( v625 > v623 )
        v630 = *(&v713->m_vPosition.x + v623);
      ++v623;
      *(v619 + 4LL * (v630 - v683)) = DefaultLocalRotation;
    }
    while ( v623 < *(*v525 + 16LL) );
    v525 += 6;
    if ( v670 != v525 )
    {
LABEL_536:
      v616 = v615->m_nCombinedNodeCount;
      continue;
    }
    break;
  }
  v528 = v619;
  v416 = v615;
LABEL_460:
  v416->m_pCombinedModel->m_pLocalRotation = v528;
  v529 = v416->m_Models.m_Memory.m_pMemory;
  v530 = &v529[6 * v416->m_Models.m_Size];
  if ( v529 == v530 )
  {
LABEL_465:
    v533 = 0;
    goto LABEL_466;
  }
  if ( *(*v529 + 384LL) == 0 )
  {
    v531 = v529 + 6;
    while ( v531 != v530 )
    {
      v532 = *v531;
      v531 += 6;
      if ( *(v532 + 384) != 0 )
        goto LABEL_475;
    }
    goto LABEL_465;
  }
LABEL_475:
  v550 = v416;
  v551 = v416->m_nCombinedNodeCount;
  v552 = v416->m_nCombinedStaticNodeCount;
  v553 = (v416->m_Buffer.m_pBuffer + 3) & 0xFFFFFFFFFFFFFFFCLL;
  v416->m_Buffer.m_pBuffer = (v553 + 4LL * (v551 - v552));
  v554 = v553;
  while ( 2 )
  {
    v555 = v529[2];
    v556 = v550->m_OldToNewNode.m_Memory.m_pMemory;
    v557 = *(*v529 + 384LL);
    v558 = *(*v529 + 20LL);
    v559 = &v556[v555];
    v560 = *(*v529 + 16LL);
    if ( v557 != 0 )
    {
      v561 = 0;
      if ( v558 < v560 )
      {
        do
        {
          v562 = v551;
          if ( v560 > v558 )
            v562 = v559[v558];
          ++v558;
          v563 = *(v557 + 4LL * v561++);
          *(v554 + 4LL * (v562 - v552)) = v563;
        }
        while ( v558 < *(*v529 + 16LL) );
      }
      goto LABEL_481;
    }
    v659 = &v550->m_Models.m_Size;
    v668 = v530;
    v680 = v552;
    v709 = &v556[v555];
    DefaultLocalForce = CFeModel::GetDefaultLocalForce(*v529);
    v552 = v680;
    v530 = v668;
    v550 = v659;
    if ( v558 >= v560 )
    {
LABEL_481:
      v529 += 6;
      if ( v530 == v529 )
        break;
      goto LABEL_482;
    }
    do
    {
      v565 = v551;
      if ( v560 > v558 )
        v565 = *(&v709->m_vPosition.x + v558);
      ++v558;
      *(v554 + 4LL * (v565 - v680)) = DefaultLocalForce;
    }
    while ( v558 < *(*v529 + 16LL) );
    v529 += 6;
    if ( v668 != v529 )
    {
LABEL_482:
      v551 = v550->m_nCombinedNodeCount;
      continue;
    }
    break;
  }
  v533 = v554;
  v416 = v550;
LABEL_466:
  v416->m_pCombinedModel->m_pLocalForce = v533;
  v534 = v416->m_Models.m_Memory.m_pMemory;
  v535 = v416->m_Models.m_Size;
  v536 = (v416->m_Buffer.m_pBuffer + 1) & 0xFFFFFFFFFFFFFFFELL;
  v416->m_Buffer.m_pBuffer = v536;
  v537 = 3 * v535;
  if ( v534 == &v534[2 * v537] )
  {
    v416->m_pCombinedModel->m_nWorldCollisionNodeCount = 0;
    v566 = 0;
    v567 = v416->m_pCombinedModel;
  }
  else
  {
    v538 = v536;
    v539 = 0;
    v540 = &v534[2 * v537];
    while ( 1 )
    {
      v541 = *(*v534 + 80LL);
      v539 += v541;
      v708 = v541;
      v542 = 2LL * v541;
      v416->m_Buffer.m_pBuffer = &v538[v542];
      v543 = memcpy(v538, *(*v534 + 416LL), v542);
      v544 = v416->m_nCombinedNodeCount;
      v545 = &v416->m_OldToNewNode.m_Memory.m_pMemory[v534[2]];
      v546 = *(*v534 + 16LL);
      if ( v708 != 0 )
      {
        v547 = v543;
        v548 = &v543[(v708 - 1) + 1];
        do
        {
          while ( 1 )
          {
            v549 = *v547;
            if ( v546 > v549 )
              break;
            *v547++ = v544;
            if ( v547 == v548 )
              goto LABEL_473;
          }
          *v547++ = *(v545 + 2 * v549);
        }
        while ( v547 != v548 );
      }
LABEL_473:
      v534 += 6;
      if ( v540 == v534 )
        break;
      v538 = v416->m_Buffer.m_pBuffer;
    }
    v416->m_pCombinedModel->m_nWorldCollisionNodeCount = v539;
    v566 = 0;
    if ( v539 != 0 )
      v566 = v536;
    v567 = v416->m_pCombinedModel;
  }
  v567->m_pWorldCollisionNodes = v566;
  v568 = v416->m_Models.m_Memory.m_pMemory;
  v569 = v416->m_Models.m_Size;
  v570 = (v416->m_Buffer.m_pBuffer + 1) & 0xFFFFFFFFFFFFFFFELL;
  v416->m_Buffer.m_pBuffer = v570;
  v571 = 3 * v569;
  if ( v568 == &v568[2 * v571] )
  {
    v416->m_pCombinedModel->m_nFreeNodeCount = 0;
    v642 = 0;
    v643 = v416->m_pCombinedModel;
  }
  else
  {
    v572 = v570;
    v573 = 0;
    v574 = &v568[2 * v571];
    while ( 1 )
    {
      v575 = *(*v568 + 94LL);
      v573 += v575;
      v710 = v575;
      v576 = 2LL * v575;
      v416->m_Buffer.m_pBuffer = &v572[v576];
      v577 = memcpy(v572, *(*v568 + 424LL), v576);
      v578 = v416->m_nCombinedNodeCount;
      v579 = &v416->m_OldToNewNode.m_Memory.m_pMemory[v568[2]];
      v580 = *(*v568 + 16LL);
      if ( v710 != 0 )
      {
        v581 = v577;
        v582 = &v577[(v710 - 1) + 1];
        do
        {
          while ( 1 )
          {
            v583 = *v581;
            if ( v580 > v583 )
              break;
            *v581++ = v578;
            if ( v581 == v582 )
              goto LABEL_499;
          }
          *v581++ = *(v579 + 2 * v583);
        }
        while ( v581 != v582 );
      }
LABEL_499:
      v568 += 6;
      if ( v574 == v568 )
        break;
      v572 = v416->m_Buffer.m_pBuffer;
    }
    v416->m_pCombinedModel->m_nFreeNodeCount = v573;
    v642 = 0;
    if ( v573 != 0 )
      v642 = v570;
    v643 = v416->m_pCombinedModel;
  }
  v643->m_pFreeNodes = v642;
  v644 = v416->m_Models.m_Memory.m_pMemory;
  v645 = &v644[3 * v416->m_Models.m_Size];
  v646 = (v416->m_Buffer.m_pBuffer + 1) & 0xFFFFFFFFFFFFFFFELL;
  v416->m_Buffer.m_pBuffer = v646;
  if ( v644 == v645 )
  {
    v416->m_pCombinedModel->m_nRopeIndexCount = 0;
    v651 = 0;
    v652 = v416->m_pCombinedModel;
  }
  else
  {
    v647 = v646;
    v648 = 0;
    do
    {
      v649 = *v644;
      v644 += 3;
      v650 = *(v649 + 60);
      v647 += 2 * v650;
      v648 += v650;
      v416->m_Buffer.m_pBuffer = v647;
    }
    while ( v645 != v644 );
    v416->m_pCombinedModel->m_nRopeIndexCount = v648;
    v651 = 0;
    if ( v648 != 0 )
      v651 = v646;
    v652 = v416->m_pCombinedModel;
  }
  v652->m_pRopes = v651;
  v653 = v416->m_Buffer.m_pBuffer;
  v416->m_Buffer.m_pBuffer = v653 + 16;
  qmemcpy(v653, "ComboCloth___END", 16);
}


// CFeModelCombiner::CollectMemory<CFeModelCombinerSizeCollector>  (line 49, @0x00000000031bba80, libserver.so)  // inlines: Align<CTransform>, Align<FeAxialEdgeBend_t>, Align<FeCollisionPlane_t>, Align<FeCollisionSphere_t>, Align<FeCtrlOffset_t>, Align<FeCtrlOsOffset_t>, Align<FeFitMatrix_t>, Align<FeFitWeight_t>, Align<FeFollowNode_t>, Align<FeNodeBase_t>, Align<FeNodeIntegrator_t>, Align<FeNodeReverseOffset_t>, Align<FeQuad_t>, Align<FeRodConstraint_t>, Align<FeSimdNodeBase_t>, Align<FeSimdQuad_t>, Align<FeSimdRodConstraint_t>, Align<FeSimdSpringIntegrator_t>, Align<FeSimdTri_t>, Align<FeSphereRigid_t>, Align<FeSpringIntegrator_t>, Align<FeTaperedCapsuleRigid_t>, Align<FeTaperedCapsuleStretch_t>, Align<FeTri_t>, Align<FeWorldCollisionParams_t>, Align<char const*>, Align<float>, Align<short unsigned int>, Align<unsigned int>, Collect<FeAxialEdgeBend_t, short unsigned int>, Collect<FeCollisionPlane_t, short unsigned int>, Collect<FeCtrlOffset_t, short unsigned int>, Collect<FeCtrlOsOffset_t, short unsigned int>, Collect<FeFitWeight_t, unsigned int>, Collect<FeFollowNode_t, short unsigned int>, Collect<FeNodeBase_t, short unsigned int>, Collect<FeNodeReverseOffset_t, unsigned int>, Collect<FeRodConstraint_t, short unsigned int>, Collect<FeSimdNodeBase_t, short unsigned int>, Collect<FeSimdRodConstraint_t, short unsigned int>, Collect<FeSimdSpringIntegrator_t, short unsigned int>, Collect<FeSphereRigid_t, short unsigned int>, Collect<FeSpringIntegrator_t, short unsigned int>, Collect<FeTaperedCapsuleRigid_t, short unsigned int>, Collect<FeTaperedCapsuleStretch_t, short unsigned int>, Collect<FeWorldCollisionParams_t, short unsigned int>, Collect<short unsigned int, short unsigned int>, CollectMarker, CollectNodes<CTransform>, CollectNodes<FeNodeIntegrator_t>, CollectNodes<char const*>, CollectNodes<float>, CollectNodes<unsigned int>, CollectTiers<FeCollisionSphere_t, short unsigned int, 2>, CollectTiers<FeFitMatrix_t, short unsigned int, 3>, CollectTiers<FeQuad_t, short unsigned int, 3>, CollectTiers<FeSimdQuad_t, short unsigned int, 3>, CollectTiers<FeSimdTri_t, short unsigned int, 3>, CollectTiers<FeTri_t, short unsigned int, 3>, IsEmpty<CTransform>, IsEmpty<FeNodeIntegrator_t>, IsEmpty<char const*>, IsEmpty<float>, IsEmpty<unsigned int>, end
// callers: CFeModelCombiner::GetDataSize
void __fastcall CFeModelCombiner::CollectMemory<CFeModelCombinerSizeCollector>(
        CFeModelCombiner *const this,
        CFeModelCombinerSizeCollector *const me)
{
  uint m_nMemSize; // eax
  uint v3; // r8d
  CFeModelCombiner *m_Combiner; // rax
  uint v5; // r8d
  CFeModelCombiner::Model_t *m_pMemory; // rdx
  CFeModelCombiner::Model_t *v7; // r9
  const CFeModel *m_pModel; // rcx
  uint v9; // ecx
  CFeModelCombiner::Model_t *v10; // rdx
  CFeModelCombiner::Model_t *i; // r9
  const CFeModel *v12; // rdi
  uint v13; // edi
  CFeModelCombiner::Model_t *v14; // rdx
  CFeModelCombiner::Model_t *v15; // r8
  const CFeModel *v16; // rcx
  uint v17; // ecx
  CFeModelCombiner::Model_t *v18; // rdx
  CFeModelCombiner::Model_t *j; // r8
  const CFeModel *v20; // rdi
  uint v21; // r8d
  CFeModelCombiner::Model_t *v22; // rdx
  CFeModelCombiner::Model_t *v23; // r9
  const CFeModel *v24; // rcx
  uint v25; // edi
  CFeModelCombiner::Model_t *v26; // rdx
  CFeModelCombiner::Model_t *v27; // r9
  const CFeModel *v28; // rcx
  uint v29; // ecx
  CFeModelCombiner::Model_t *v30; // rdx
  CFeModelCombiner::Model_t *v31; // r9
  CFeModelCombiner::Model_t *v32; // rdx
  CFeModelCombiner::Model_t *v33; // rdi
  CFeModelCombiner::Model_t *v34; // rdx
  CFeModelCombiner::Model_t *v35; // r9
  CFeModelCombiner::Model_t *v36; // rdx
  CFeModelCombiner::Model_t *v37; // rdi
  uint v38; // edi
  CFeModelCombiner::Model_t *v39; // rdx
  CFeModelCombiner::Model_t *v40; // r8
  const CFeModel *v41; // rcx
  uint v42; // edi
  CFeModelCombiner::Model_t *v43; // rdx
  CFeModelCombiner::Model_t *v44; // r8
  const CFeModel *v45; // rcx
  uint v46; // edi
  CFeModelCombiner::Model_t *v47; // rdx
  CFeModelCombiner::Model_t *v48; // r8
  const CFeModel *v49; // rcx
  uint v50; // ecx
  CFeModelCombiner::Model_t *v51; // rdx
  CFeModelCombiner::Model_t *k; // r8
  const CFeModel *v53; // rdi
  uint v54; // ecx
  CFeModelCombiner::Model_t *v55; // rdx
  CFeModelCombiner::Model_t *m; // r8
  const CFeModel *v57; // rdi
  uint v58; // ecx
  CFeModelCombiner::Model_t *v59; // rdx
  CFeModelCombiner::Model_t *v60; // r8
  CFeModelCombiner::Model_t *v61; // rdx
  const CFeModel *v62; // rdi
  CFeModelCombiner::Model_t *v63; // rdx
  CFeModelCombiner::Model_t *n; // r8
  const CFeModel *v65; // rdi
  uint v66; // ecx
  CFeModelCombiner::Model_t *v67; // rdx
  CFeModelCombiner::Model_t *v68; // r8
  CFeModelCombiner::Model_t *v69; // rdx
  const CFeModel *v70; // rdi
  CFeModelCombiner::Model_t *v71; // rdx
  CFeModelCombiner::Model_t *ii; // r8
  const CFeModel *v73; // rdi
  uint v74; // ecx
  CFeModelCombiner::Model_t *v75; // rdx
  CFeModelCombiner::Model_t *jj; // r8
  const CFeModel *v77; // rdi
  uint v78; // ecx
  CFeModelCombiner::Model_t *v79; // rdx
  CFeModelCombiner::Model_t *kk; // r8
  const CFeModel *v81; // rdi
  uint v82; // ecx
  CFeModelCombiner::Model_t *v83; // rdx
  CFeModelCombiner::Model_t *mm; // r8
  const CFeModel *v85; // rdi
  uint v86; // ecx
  CFeModelCombiner::Model_t *v87; // rdx
  CFeModelCombiner::Model_t *nn; // r8
  const CFeModel *v89; // rdi
  uint v90; // ecx
  CFeModelCombiner::Model_t *v91; // rdx
  CFeModelCombiner::Model_t *i1; // r8
  const CFeModel *v93; // rdi
  uint v94; // ecx
  CFeModelCombiner::Model_t *v95; // rdx
  CFeModelCombiner::Model_t *i2; // r8
  const CFeModel *v97; // rdi
  uint v98; // ecx
  CFeModelCombiner::Model_t *v99; // rdx
  CFeModelCombiner::Model_t *i3; // r8
  const CFeModel *v101; // rdi
  uint v102; // ecx
  CFeModelCombiner::Model_t *v103; // rdx
  CFeModelCombiner::Model_t *i4; // r8
  const CFeModel *v105; // rdi
  uint v106; // ecx
  CFeModelCombiner::Model_t *v107; // rdx
  CFeModelCombiner::Model_t *i5; // r8
  const CFeModel *v109; // rdi
  uint v110; // ecx
  CFeModelCombiner::Model_t *v111; // rdx
  CFeModelCombiner::Model_t *i6; // r8
  const CFeModel *v113; // rdi
  uint v114; // ecx
  CFeModelCombiner::Model_t *v115; // rdx
  CFeModelCombiner::Model_t *v116; // r8
  CFeModelCombiner::Model_t *v117; // rdx
  const CFeModel *v118; // rdi
  CFeModelCombiner::Model_t *v119; // rdx
  CFeModelCombiner::Model_t *v120; // r8
  uint v121; // r8d
  CFeModelCombiner::Model_t *v122; // rdx
  CFeModelCombiner::Model_t *v123; // rdi
  CFeModelCombiner::Model_t *v124; // rdx
  const CFeModel *v125; // rcx
  CFeModelCombiner::Model_t *v126; // rdx
  CFeModelCombiner::Model_t *v127; // rdi
  CFeModelCombiner::Model_t *v128; // rdx
  const CFeModel *v129; // rcx
  uint v130; // ecx
  CFeModelCombiner::Model_t *v131; // rdx
  CFeModelCombiner::Model_t *v132; // r8
  CFeModelCombiner::Model_t *v133; // rdx
  const CFeModel *v134; // rdi
  CFeModelCombiner::Model_t *v135; // rdx
  CFeModelCombiner::Model_t *i7; // r8
  const CFeModel *v137; // rdi
  uint v138; // ecx
  CFeModelCombiner::Model_t *v139; // rdx
  CFeModelCombiner::Model_t *i8; // r8
  const CFeModel *v141; // rdi
  uint v142; // edx
  CFeModelCombiner::Model_t *v143; // rcx
  CFeModelCombiner::Model_t *v144; // rdi
  CFeModelCombiner::Model_t *v145; // rax
  const CFeModel *v146; // rcx
  uint v147; // ecx
  uint v148; // ecx
  uint v149; // ecx
  uint v150; // ecx
  uint v151; // ecx
  uint v152; // ecx
  uint v153; // ecx

  m_nMemSize = me->m_nMemSize;
  me->m_nLastAlign = 16;
  v3 = m_nMemSize + 31;
  m_Combiner = me->m_Combiner;
  v5 = v3 & 0xFFFFFFF0;
  me->m_nMemSize = v5;
  m_pMemory = m_Combiner->m_Models.m_Memory.m_pMemory;
  v7 = &m_pMemory[m_Combiner->m_Models.m_Size];
  if ( m_pMemory == v7 )
  {
    v147 = v5;
  }
  else
  {
    while ( 1 )
    {
      m_pModel = m_pMemory->m_pModel;
      ++m_pMemory;
      v147 = v5 + 80 * m_pModel->m_nSimdRodCount;
      me->m_nMemSize = v147;
      if ( v7 == m_pMemory )
        break;
      v5 = v147;
    }
  }
  v9 = (v147 + 15) & 0xFFFFFFF0;
  me->m_nMemSize = v9;
  v10 = m_Combiner->m_Models.m_Memory.m_pMemory;
  for ( i = &v10[m_Combiner->m_Models.m_Size]; i != v10; me->m_nMemSize = v9 )
  {
    v12 = v10->m_pModel;
    ++v10;
    v9 += 304 * v12->m_nSimdQuadCount[0];
  }
  v13 = (v9 + 15) & 0xFFFFFFF0;
  me->m_nMemSize = v13;
  v14 = m_Combiner->m_Models.m_Memory.m_pMemory;
  v15 = &v14[m_Combiner->m_Models.m_Size];
  if ( v14 == v15 )
  {
    v148 = (v9 + 15) & 0xFFFFFFF0;
  }
  else
  {
    while ( 1 )
    {
      v16 = v14->m_pModel;
      ++v14;
      v148 = v13 + (v16->m_nSimdTriCount[0] << 7);
      me->m_nMemSize = v148;
      if ( v15 == v14 )
        break;
      v13 = v148;
    }
  }
  v17 = (v148 + 15) & 0xFFFFFFF0;
  me->m_nMemSize = v17;
  v18 = m_Combiner->m_Models.m_Memory.m_pMemory;
  for ( j = &v18[m_Combiner->m_Models.m_Size]; j != v18; me->m_nMemSize = v17 )
  {
    v20 = v18->m_pModel;
    ++v18;
    v17 += 112 * v20->m_nSimdNodeBaseCount;
  }
  v21 = (v17 + 15) & 0xFFFFFFF0;
  me->m_nMemSize = v21;
  v22 = m_Combiner->m_Models.m_Memory.m_pMemory;
  v23 = &v22[m_Combiner->m_Models.m_Size];
  if ( v22 == v23 )
  {
    v149 = (v17 + 15) & 0xFFFFFFF0;
  }
  else
  {
    while ( 1 )
    {
      v24 = v22->m_pModel;
      ++v22;
      v149 = v21 + 80 * v24->m_nSimdSpringIntegratorCount;
      me->m_nMemSize = v149;
      if ( v23 == v22 )
        break;
      v21 = v149;
    }
  }
  v25 = (v149 + 15) & 0xFFFFFFF0;
  me->m_nMemSize = v25;
  v26 = m_Combiner->m_Models.m_Memory.m_pMemory;
  v27 = &v26[m_Combiner->m_Models.m_Size];
  if ( v26 == v27 )
  {
    v150 = (v149 + 15) & 0xFFFFFFF0;
  }
  else
  {
    while ( 1 )
    {
      v28 = v26->m_pModel;
      ++v26;
      v150 = v25 + (v28->m_nFitMatrixCount[0] << 6);
      me->m_nMemSize = v150;
      if ( v27 == v26 )
        break;
      v25 = v150;
    }
  }
  v29 = (v150 + 15) & 0xFFFFFFF0;
  me->m_nMemSize = v29;
  v30 = m_Combiner->m_Models.m_Memory.m_pMemory;
  v31 = &v30[m_Combiner->m_Models.m_Size];
  if ( v30 != v31 )
  {
    if ( v30->m_pModel->m_pInitPose != 0 )
    {
LABEL_121:
      v29 += 32 * m_Combiner->m_nCombinedNodeCount;
    }
    else
    {
      v32 = v30 + 1;
      while ( 1 )
      {
        v33 = v32;
        if ( v32 == v31 )
          break;
        ++v32;
        if ( v33->m_pModel->m_pInitPose != 0 )
          goto LABEL_121;
      }
    }
  }
  me->m_nLastAlign = 8;
  me->m_nMemSize = v29;
  v34 = m_Combiner->m_Models.m_Memory.m_pMemory;
  v35 = &v34[m_Combiner->m_Models.m_Size];
  if ( v34 == v35 )
    goto LABEL_31;
  if ( v34->m_pModel->m_pCtrlName == 0 )
  {
    v36 = v34 + 1;
    while ( 1 )
    {
      v37 = v36;
      if ( v36 == v35 )
        break;
      ++v36;
      if ( v37->m_pModel->m_pCtrlName != 0 )
        goto LABEL_120;
    }
LABEL_31:
    v38 = v29;
    goto LABEL_32;
  }
LABEL_120:
  v38 = v29 + 8 * m_Combiner->m_nCombinedNodeCount;
LABEL_32:
  me->m_nLastAlign = 4;
  me->m_nMemSize = v38;
  v39 = m_Combiner->m_Models.m_Memory.m_pMemory;
  v40 = &v39[m_Combiner->m_Models.m_Size];
  if ( v39 == v40 )
  {
    v151 = v38;
  }
  else
  {
    while ( 1 )
    {
      v41 = v39->m_pModel;
      ++v39;
      v151 = v38 + 32 * v41->m_nNodeBaseCount;
      me->m_nMemSize = v151;
      if ( v40 == v39 )
        break;
      v38 = v151;
    }
  }
  v42 = (v151 + 3) & 0xFFFFFFFC;
  me->m_nMemSize = v42;
  v43 = m_Combiner->m_Models.m_Memory.m_pMemory;
  v44 = &v43[m_Combiner->m_Models.m_Size];
  if ( v43 == v44 )
  {
    v152 = (v151 + 3) & 0xFFFFFFFC;
  }
  else
  {
    while ( 1 )
    {
      v45 = v43->m_pModel;
      ++v43;
      v152 = v42 + 16 * v45->m_nReverseOffsetCount;
      me->m_nMemSize = v152;
      if ( v44 == v43 )
        break;
      v42 = v152;
    }
  }
  v46 = (v152 + 3) & 0xFFFFFFFC;
  me->m_nMemSize = v46;
  v47 = m_Combiner->m_Models.m_Memory.m_pMemory;
  v48 = &v47[m_Combiner->m_Models.m_Size];
  if ( v47 == v48 )
  {
    v153 = (v152 + 3) & 0xFFFFFFFC;
  }
  else
  {
    while ( 1 )
    {
      v49 = v47->m_pModel;
      ++v47;
      v153 = v46 + 16 * v49->m_nCtrlOffsets;
      me->m_nMemSize = v153;
      if ( v48 == v47 )
        break;
      v46 = v153;
    }
  }
  v50 = (v153 + 3) & 0xFFFFFFFC;
  me->m_nMemSize = v50;
  v51 = m_Combiner->m_Models.m_Memory.m_pMemory;
  for ( k = &v51[m_Combiner->m_Models.m_Size]; k != v51; me->m_nMemSize = v50 )
  {
    v53 = v51->m_pModel;
    ++v51;
    v50 += 4 * v53->m_nCtrlOsOffsets;
  }
  v54 = (v50 + 3) & 0xFFFFFFFC;
  me->m_nMemSize = v54;
  v55 = m_Combiner->m_Models.m_Memory.m_pMemory;
  for ( m = &v55[m_Combiner->m_Models.m_Size]; m != v55; me->m_nMemSize = v54 )
  {
    v57 = v55->m_pModel;
    ++v55;
    v54 += 8 * v57->m_nFollowNodeCount;
  }
  v58 = (v54 + 3) & 0xFFFFFFFC;
  me->m_nMemSize = v58;
  v59 = m_Combiner->m_Models.m_Memory.m_pMemory;
  v60 = &v59[m_Combiner->m_Models.m_Size];
  if ( v59 != v60 )
  {
    if ( v59->m_pModel->m_pCtrlHash != 0 )
    {
LABEL_119:
      v58 += 4 * m_Combiner->m_nCombinedNodeCount;
    }
    else
    {
      v61 = v59 + 1;
      while ( v61 != v60 )
      {
        v62 = v61->m_pModel;
        ++v61;
        if ( v62->m_pCtrlHash != 0 )
          goto LABEL_119;
      }
    }
  }
  me->m_nMemSize = v58;
  v63 = m_Combiner->m_Models.m_Memory.m_pMemory;
  for ( n = &v63[m_Combiner->m_Models.m_Size]; n != v63; me->m_nMemSize = v58 )
  {
    v65 = v63->m_pModel;
    ++v63;
    v58 += 20 * v65->m_nSpringIntegratorCount;
  }
  v66 = (v58 + 3) & 0xFFFFFFFC;
  me->m_nMemSize = v66;
  v67 = m_Combiner->m_Models.m_Memory.m_pMemory;
  v68 = &v67[m_Combiner->m_Models.m_Size];
  if ( v67 != v68 )
  {
    if ( v67->m_pModel->m_pNodeInvMasses != 0 )
    {
LABEL_118:
      v66 += 4 * m_Combiner->m_nCombinedNodeCount;
    }
    else
    {
      v69 = v67 + 1;
      while ( v69 != v68 )
      {
        v70 = v69->m_pModel;
        ++v69;
        if ( v70->m_pNodeInvMasses != 0 )
          goto LABEL_118;
      }
    }
  }
  me->m_nMemSize = v66;
  v71 = m_Combiner->m_Models.m_Memory.m_pMemory;
  for ( ii = &v71[m_Combiner->m_Models.m_Size]; ii != v71; me->m_nMemSize = v66 )
  {
    v73 = v71->m_pModel;
    ++v71;
    v66 += 76 * v73->m_nQuadCount[0];
  }
  v74 = (v66 + 3) & 0xFFFFFFFC;
  me->m_nMemSize = v74;
  v75 = m_Combiner->m_Models.m_Memory.m_pMemory;
  for ( jj = &v75[m_Combiner->m_Models.m_Size]; jj != v75; me->m_nMemSize = v74 )
  {
    v77 = v75->m_pModel;
    ++v75;
    v74 += 20 * v77->m_nRodCount;
  }
  v78 = (v74 + 3) & 0xFFFFFFFC;
  me->m_nMemSize = v78;
  v79 = m_Combiner->m_Models.m_Memory.m_pMemory;
  for ( kk = &v79[m_Combiner->m_Models.m_Size]; kk != v79; me->m_nMemSize = v78 )
  {
    v81 = v79->m_pModel;
    ++v79;
    v78 += 28 * v81->m_nTriCount[0];
  }
  v82 = (v78 + 3) & 0xFFFFFFFC;
  me->m_nMemSize = v82;
  v83 = m_Combiner->m_Models.m_Memory.m_pMemory;
  for ( mm = &v83[m_Combiner->m_Models.m_Size]; mm != v83; me->m_nMemSize = v82 )
  {
    v85 = v83->m_pModel;
    ++v83;
    v82 += 40 * v85->m_nAxialEdgeCount;
  }
  v86 = (v82 + 3) & 0xFFFFFFFC;
  me->m_nMemSize = v86;
  v87 = m_Combiner->m_Models.m_Memory.m_pMemory;
  for ( nn = &v87[m_Combiner->m_Models.m_Size]; nn != v87; me->m_nMemSize = v86 )
  {
    v89 = v87->m_pModel;
    ++v87;
    v86 += 24 * v89->m_nCollisionSpheres[0];
  }
  v90 = (v86 + 3) & 0xFFFFFFFC;
  me->m_nMemSize = v90;
  v91 = m_Combiner->m_Models.m_Memory.m_pMemory;
  for ( i1 = &v91[m_Combiner->m_Models.m_Size]; i1 != v91; me->m_nMemSize = v90 )
  {
    v93 = v91->m_pModel;
    ++v91;
    v90 += 24 * v93->m_nCollisionPlanes;
  }
  v94 = (v90 + 3) & 0xFFFFFFFC;
  me->m_nMemSize = v94;
  v95 = m_Combiner->m_Models.m_Memory.m_pMemory;
  for ( i2 = &v95[m_Combiner->m_Models.m_Size]; i2 != v95; me->m_nMemSize = v94 )
  {
    v97 = v95->m_pModel;
    ++v95;
    v94 += 12 * v97->m_nWorldCollisionParamCount;
  }
  v98 = (v94 + 3) & 0xFFFFFFFC;
  me->m_nMemSize = v98;
  v99 = m_Combiner->m_Models.m_Memory.m_pMemory;
  for ( i3 = &v99[m_Combiner->m_Models.m_Size]; i3 != v99; me->m_nMemSize = v98 )
  {
    v101 = v99->m_pModel;
    ++v99;
    v98 += 20 * v101->m_nTaperedCapsuleStretchCount;
  }
  v102 = (v98 + 3) & 0xFFFFFFFC;
  me->m_nMemSize = v102;
  v103 = m_Combiner->m_Models.m_Memory.m_pMemory;
  for ( i4 = &v103[m_Combiner->m_Models.m_Size]; i4 != v103; me->m_nMemSize = v102 )
  {
    v105 = v103->m_pModel;
    ++v103;
    v102 += 40 * v105->m_nTaperedCapsuleRigidCount;
  }
  v106 = (v102 + 3) & 0xFFFFFFFC;
  me->m_nMemSize = v106;
  v107 = m_Combiner->m_Models.m_Memory.m_pMemory;
  for ( i5 = &v107[m_Combiner->m_Models.m_Size]; i5 != v107; me->m_nMemSize = v106 )
  {
    v109 = v107->m_pModel;
    ++v107;
    v106 += 24 * v109->m_nSphereRigidCount;
  }
  v110 = (v106 + 3) & 0xFFFFFFFC;
  me->m_nMemSize = v110;
  v111 = m_Combiner->m_Models.m_Memory.m_pMemory;
  for ( i6 = &v111[m_Combiner->m_Models.m_Size]; i6 != v111; me->m_nMemSize = v110 )
  {
    v113 = v111->m_pModel;
    ++v111;
    v110 += 8 * v113->m_nFitWeightCount;
  }
  v114 = (v110 + 3) & 0xFFFFFFFC;
  me->m_nMemSize = v114;
  v115 = m_Combiner->m_Models.m_Memory.m_pMemory;
  v116 = &v115[m_Combiner->m_Models.m_Size];
  if ( v115 != v116 )
  {
    if ( v115->m_pModel->m_pNodeIntegrator != 0 )
    {
LABEL_117:
      v114 += 16 * m_Combiner->m_nCombinedNodeCount;
    }
    else
    {
      v117 = v115 + 1;
      while ( v117 != v116 )
      {
        v118 = v117->m_pModel;
        ++v117;
        if ( v118->m_pNodeIntegrator != 0 )
          goto LABEL_117;
      }
    }
  }
  me->m_nMemSize = v114;
  v119 = m_Combiner->m_Models.m_Memory.m_pMemory;
  v120 = &v119[m_Combiner->m_Models.m_Size];
  if ( v119 == v120 )
  {
LABEL_92:
    v121 = v114;
  }
  else
  {
    while ( v119->m_pModel->m_pLegacyStretchForce == 0 )
    {
      if ( ++v119 == v120 )
        goto LABEL_92;
    }
    v121 = v114 + 4 * m_Combiner->m_nCombinedNodeCount;
  }
  me->m_nMemSize = v121;
  v122 = m_Combiner->m_Models.m_Memory.m_pMemory;
  v123 = &v122[m_Combiner->m_Models.m_Size];
  if ( v122 != v123 )
  {
    if ( v122->m_pModel->m_pNodeCollisionRadii != 0 )
    {
LABEL_124:
      v121 += 4 * (m_Combiner->m_nCombinedNodeCount - m_Combiner->m_nCombinedStaticNodeCount);
    }
    else
    {
      v124 = v122 + 1;
      while ( v124 != v123 )
      {
        v125 = v124->m_pModel;
        ++v124;
        if ( v125->m_pNodeCollisionRadii != 0 )
          goto LABEL_124;
      }
    }
  }
  me->m_nMemSize = v121;
  v126 = m_Combiner->m_Models.m_Memory.m_pMemory;
  v127 = &v126[m_Combiner->m_Models.m_Size];
  if ( v126 == v127 )
    goto LABEL_103;
  if ( v126->m_pModel->m_pLocalRotation == 0 )
  {
    v128 = v126 + 1;
    while ( v128 != v127 )
    {
      v129 = v128->m_pModel;
      ++v128;
      if ( v129->m_pLocalRotation != 0 )
        goto LABEL_123;
    }
LABEL_103:
    v130 = v121;
    goto LABEL_104;
  }
LABEL_123:
  v130 = v121 + 4 * (m_Combiner->m_nCombinedNodeCount - m_Combiner->m_nCombinedStaticNodeCount);
LABEL_104:
  me->m_nMemSize = v130;
  v131 = m_Combiner->m_Models.m_Memory.m_pMemory;
  v132 = &v131[m_Combiner->m_Models.m_Size];
  if ( v131 != v132 )
  {
    if ( v131->m_pModel->m_pLocalForce != 0 )
    {
LABEL_122:
      v130 += 4 * (m_Combiner->m_nCombinedNodeCount - m_Combiner->m_nCombinedStaticNodeCount);
    }
    else
    {
      v133 = v131 + 1;
      while ( v133 != v132 )
      {
        v134 = v133->m_pModel;
        ++v133;
        if ( v134->m_pLocalForce != 0 )
          goto LABEL_122;
      }
    }
  }
  me->m_nLastAlign = 2;
  me->m_nMemSize = v130;
  v135 = m_Combiner->m_Models.m_Memory.m_pMemory;
  for ( i7 = &v135[m_Combiner->m_Models.m_Size]; i7 != v135; me->m_nMemSize = v130 )
  {
    v137 = v135->m_pModel;
    ++v135;
    v130 += 2 * v137->m_nWorldCollisionNodeCount;
  }
  v138 = (v130 + 1) & 0xFFFFFFFE;
  me->m_nMemSize = v138;
  v139 = m_Combiner->m_Models.m_Memory.m_pMemory;
  for ( i8 = &v139[m_Combiner->m_Models.m_Size]; i8 != v139; me->m_nMemSize = v138 )
  {
    v141 = v139->m_pModel;
    ++v139;
    v138 += 2 * v141->m_nFreeNodeCount;
  }
  v142 = (v138 + 1) & 0xFFFFFFFE;
  me->m_nMemSize = v142;
  v143 = m_Combiner->m_Models.m_Memory.m_pMemory;
  v144 = &v143[m_Combiner->m_Models.m_Size];
  if ( v143 != v144 )
  {
    v145 = m_Combiner->m_Models.m_Memory.m_pMemory;
    do
    {
      v146 = v145->m_pModel;
      ++v145;
      v142 += 2 * v146->m_nRopeIndexCount;
      me->m_nMemSize = v142;
    }
    while ( v144 != v145 );
  }
  me->m_nMemSize = v142 + 16;
}


// CFeModelCombiner::Combine  (line 111, @0x00000000031b7b50, libserver.so)  // inlines: AddNodes, Avg, CFeModelCombinerNodeMerger, CUtlHashtable, CUtlKeyValuePair<unsigned int, short unsigned int>, CUtlMemory, Construct<CUtlKeyValuePair<unsigned int, short unsigned int>, unsigned int, short unsigned int>, DoInsert<unsigned int>, DoLookup<unsigned int>, Element, Find, GetEndNode, Insert, MarkInvalid, Or, Purge, RemoveAll, Stride<CFeModel>, Tail, V_memset, end, memset, operator(), operator[], ~CUtlHashtable, ~CUtlMemory
// calls: CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::SetCount, CUtlHashtable<unsigned int, short unsigned int, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, short unsigned int>, int> >::DoInsertUnconstructed, CUtlHashtable<unsigned int, short unsigned int, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, short unsigned int>, int> >::DoLookup<unsigned int>, CFeModelCombiner::CollectMemory<CFeModelCombiner>, CFeModelCombiner::CollectFitMatrices, CFeModelCombiner::CollectRopes, CUtlMemory<CUtlHashtableEntry<unsigned int, short unsigned int>, int>::Purge, Warning, _Unwind_Resume, CUtlHashtable<unsigned int, short unsigned int, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, short unsigned int>, int> >::~CUtlHashtable
// callers: CombineAggregateData
// strings: "CFeModelCombiner: combined finite element model is too large, with %u nodes"
const CFeModel_0 *__fastcall CFeModelCombiner::Combine(
        CFeModelCombiner *const this,
        void *pDataBuffer,
        uint nDataBufferSize)
{
  CFeModelCombiner::Model_t *v4; // rax
  unsigned int v5; // esi
  CFeModelCombiner::Model_t *m_pMemory; // r14
  CFeModel_0 *m_pCombinedModel; // rax
  __int64 m_Size; // rax
  unsigned __int64 v9; // rcx
  unsigned int v10; // ebx
  unsigned __int16 v11; // r13
  uint v12; // edx
  unsigned int v13; // r15d
  unsigned int v14; // edx
  unsigned int v15; // eax
  unsigned int v16; // r8d
  int inserted; // eax
  CUtlHashtableEntry<unsigned int,short unsigned int> *v18; // rax
  int v19; // eax
  uint16 v20; // bx
  int m_nUsed; // esi
  int v22; // edx
  CUtlHashtableEntry<unsigned int,short unsigned int> *v23; // rax
  CFeModel_0 *v24; // rax
  CFeModelCombiner::Model_t *v25; // r14
  __int64 v26; // rax
  unsigned int v27; // ebx
  unsigned __int16 v28; // r13
  uint v29; // edx
  unsigned int v30; // r15d
  unsigned int v31; // edx
  unsigned int v32; // eax
  unsigned int v33; // r8d
  int v34; // eax
  CUtlHashtableEntry<unsigned int,short unsigned int> *v35; // rax
  int v36; // eax
  int v37; // esi
  int v38; // edx
  CUtlHashtableEntry<unsigned int,short unsigned int> *v39; // rax
  CFeModel_0 *v40; // rax
  CFeModelCombiner::Model_t *v41; // r14
  __int64 v42; // rax
  unsigned int v43; // ebx
  unsigned __int16 v44; // r13
  uint v45; // edx
  unsigned int v46; // r15d
  unsigned int v47; // edx
  unsigned int v48; // r8d
  int v49; // eax
  CUtlHashtableEntry<unsigned int,short unsigned int> *v50; // rax
  int v51; // eax
  int v52; // ecx
  int v53; // edx
  CUtlHashtableEntry<unsigned int,short unsigned int> *v54; // rax
  CFeModelCombiner::Model_t *v55; // rcx
  CFeModelCombiner::Model_t *v56; // rax
  __int64 v57; // rsi
  uint32 v58; // edx
  CFeModelCombiner::Model_t *v59; // rcx
  CFeModelCombiner::Model_t *v60; // rax
  __int64 v61; // rsi
  uint32 v62; // edx
  int v63; // esi
  CFeModelCombiner::Model_t *v64; // rdx
  float v65; // xmm0_4
  float v66; // xmm1_4
  CFeModelCombiner::Model_t *v67; // rax
  __int64 v68; // rcx
  int v69; // esi
  CFeModelCombiner::Model_t *v70; // rdx
  float v71; // xmm1_4
  CFeModelCombiner::Model_t *v72; // rax
  __int64 v73; // rcx
  int v74; // esi
  CFeModelCombiner::Model_t *v75; // rdx
  float v76; // xmm1_4
  CFeModelCombiner::Model_t *v77; // rax
  __int64 v78; // rcx
  int v79; // esi
  CFeModelCombiner::Model_t *v80; // rdx
  float v81; // xmm1_4
  CFeModelCombiner::Model_t *v82; // rax
  __int64 v83; // rcx
  int v84; // esi
  CFeModelCombiner::Model_t *v85; // rdx
  float v86; // xmm1_4
  CFeModelCombiner::Model_t *v87; // rax
  __int64 v88; // rcx
  int v89; // esi
  CFeModelCombiner::Model_t *v90; // rdx
  float v91; // xmm1_4
  CFeModelCombiner::Model_t *v92; // rax
  __int64 v93; // rcx
  int v94; // esi
  CFeModelCombiner::Model_t *v95; // rdx
  float v96; // xmm1_4
  CFeModelCombiner::Model_t *v97; // rax
  __int64 v98; // rcx
  int v99; // esi
  CFeModelCombiner::Model_t *v100; // rdx
  float v101; // xmm1_4
  CFeModelCombiner::Model_t *v102; // rax
  __int64 v103; // rcx
  int v104; // esi
  CFeModelCombiner::Model_t *v105; // rdx
  float v106; // xmm1_4
  CFeModelCombiner::Model_t *v107; // rax
  __int64 v108; // rcx
  int v109; // esi
  CFeModelCombiner::Model_t *v110; // rdx
  float v111; // xmm1_4
  CFeModelCombiner::Model_t *v112; // rax
  __int64 v113; // rcx
  int v114; // esi
  CFeModelCombiner::Model_t *v115; // rdx
  float v116; // xmm1_4
  CFeModelCombiner::Model_t *v117; // rax
  __int64 v118; // rcx
  int v119; // esi
  CFeModelCombiner::Model_t *v120; // rdx
  float v121; // xmm1_4
  CFeModelCombiner::Model_t *v122; // rax
  __int64 v123; // rcx
  int v124; // esi
  CFeModelCombiner::Model_t *v125; // rdx
  float v126; // xmm1_4
  CFeModelCombiner::Model_t *v127; // rax
  __int64 v128; // rcx
  int v129; // esi
  CFeModelCombiner::Model_t *v130; // rdx
  float v131; // xmm1_4
  CFeModelCombiner::Model_t *v132; // rax
  __int64 v133; // rcx
  int v134; // esi
  CFeModelCombiner::Model_t *v135; // rdx
  float v136; // xmm1_4
  CFeModelCombiner::Model_t *v137; // rax
  __int64 v138; // rcx
  int v139; // esi
  CFeModelCombiner::Model_t *v140; // rdx
  float v141; // xmm1_4
  CFeModelCombiner::Model_t *v142; // rax
  __int64 v143; // rcx
  int v144; // esi
  CFeModelCombiner::Model_t *v145; // rdx
  CFeModelCombiner::Model_t *v146; // rax
  __int64 v147; // rcx
  CFeModel_0 *v149; // [rsp+8h] [rbp-78h]
  CFeModel_0 *v150; // [rsp+8h] [rbp-78h]
  CFeModel_0 *v151; // [rsp+8h] [rbp-78h]
  CFeModelCombiner::Model_t *v152; // [rsp+10h] [rbp-70h]
  CFeModelCombiner::Model_t *v153; // [rsp+10h] [rbp-70h]
  CFeModelCombiner::Model_t *v154; // [rsp+10h] [rbp-70h]
  unsigned int v155; // [rsp+1Ch] [rbp-64h]
  unsigned int v156; // [rsp+1Ch] [rbp-64h]
  unsigned int v157; // [rsp+1Ch] [rbp-64h]
  unsigned int v158; // [rsp+20h] [rbp-60h]
  unsigned int v159; // [rsp+20h] [rbp-60h]
  unsigned int v160; // [rsp+20h] [rbp-60h]
  unsigned int v161; // [rsp+20h] [rbp-60h]
  unsigned int v162; // [rsp+20h] [rbp-60h]
  unsigned int v163; // [rsp+20h] [rbp-60h]
  unsigned int v164; // [rsp+24h] [rbp-5Ch]
  unsigned int v165; // [rsp+24h] [rbp-5Ch]
  unsigned int i; // [rsp+24h] [rbp-5Ch]
  unsigned int v167; // [rsp+28h] [rbp-58h]
  unsigned int v168; // [rsp+28h] [rbp-58h]
  CUtlHashtable<unsigned int,short unsigned int,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,short unsigned int>,int> > v169; // [rsp+30h] [rbp-50h] BYREF

  if ( this->m_Models.m_Size == 0 )
    return 0;
  if ( this->m_Models.m_Size == 1 )
    return this->m_Models.m_Memory.m_pMemory->m_pModel;
  this->m_pCombinedModel = pDataBuffer;
  this->m_Buffer.m_pBuffer = pDataBuffer + 512;
  memset(pDataBuffer, 0, 0x200u);
  v4 = &this->m_Models.m_Memory.m_pMemory[this->m_Models.m_Size - 1];
  v5 = v4->m_nNodeBase + v4->m_pModel->m_nNodeCount;
  if ( v5 > 0xFFFF )
  {
    Warning("CFeModelCombiner: combined finite element model is too large, with %u nodes", v5);
    return 0;
  }
  CUtlVectorBase<unsigned short,CUtlMemory<unsigned short,int>>::SetCount(&this->m_OldToNewNode, v5);
  m_pMemory = this->m_Models.m_Memory.m_pMemory;
  v169.m_bSizeLocked = 0;
  m_pCombinedModel = this->m_pCombinedModel;
  memset(&v169, 0, 20);
  v149 = m_pCombinedModel;
  m_Size = this->m_Models.m_Size;
  v169.m_nMinSize = 32;
  v152 = &m_pMemory[m_Size];
  if ( m_pMemory != v152 )
  {
    v9 = 0;
    while ( 1 )
    {
      v10 = m_pMemory->m_nNodeCount[3];
      v164 = m_pMemory->m_nNodeCount[2];
      if ( v10 < v164 )
        break;
LABEL_17:
      if ( v152 == ++m_pMemory )
      {
        v20 = v9;
        goto LABEL_19;
      }
    }
    while ( 1 )
    {
      v13 = m_pMemory->m_pModel->m_pCtrlHash[v10];
      if ( *m_pMemory->m_pModel->m_pCtrlName[v10] == 36 )
      {
        v11 = v9;
        v9 = (v9 + 1);
      }
      else
      {
        v14 = 33 * (((4097 * v13 + 2127912214) >> 19) ^ (4097 * v13 + 2127912214) ^ 0xC761C23C);
        v15 = 9 * ((v14 - 369570787) ^ ((v14 + 374761393) << 9)) - 42973499;
        v16 = HIWORD(v15) ^ v15 ^ 0xB55A4F09;
        if ( v169.m_nUsed == 0 )
        {
          v11 = v9;
          LOWORD(v155) = v9;
          v158 = v9 + 1;
          goto LABEL_13;
        }
        v155 = v9;
        v159 = HIWORD(v15) ^ v15 ^ 0xB55A4F09;
        v19 = CUtlHashtable<unsigned int,unsigned short,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,unsigned short>,int>>::DoLookup<unsigned int>(
                &v169,
                v13,
                v16,
                v9);
        v16 = v159;
        v9 = v155;
        if ( v19 == -1 )
        {
          v11 = v155;
          v158 = v155 + 1;
LABEL_13:
          inserted = CUtlHashtable<unsigned int,unsigned short,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,unsigned short>,int>>::DoInsertUnconstructed(
                       &v169,
                       v16,
                       1);
          v18 = &v169.m_table.m_pMemory[inserted];
          if ( v18 == -4LL )
          {
            v9 = v158;
          }
          else
          {
            v18->data[0] = v13;
            v9 = v158;
            LOWORD(v18->data[1]) = v155;
          }
          goto LABEL_9;
        }
        v11 = v169.m_table.m_pMemory[v19].data[1];
      }
LABEL_9:
      v12 = v10 + m_pMemory->m_nNodeBase;
      ++v10;
      this->m_OldToNewNode.m_Memory.m_pMemory[v12] = v11;
      if ( v164 <= v10 )
        goto LABEL_17;
    }
  }
  v20 = 0;
  v9 = 0;
LABEL_19:
  m_nUsed = v169.m_nUsed;
  if ( v169.m_nUsed != 0 )
  {
    v22 = v169.m_table.m_nAllocationCount - 1;
    if ( v169.m_table.m_nAllocationCount - 1 >= 0 )
    {
      v23 = &v169.m_table.m_pMemory[v22];
      do
      {
        if ( v23->flags_and_hash >= 0 )
        {
          --m_nUsed;
          v23->flags_and_hash = 0x80000000;
          if ( m_nUsed == 0 )
            break;
        }
        --v22;
        --v23;
      }
      while ( v22 != -1 );
    }
    v169.m_nUsed = 0;
  }
  if ( (v169.m_table.m_nGrowSize & 0xC0000000) == 0 )
  {
    v168 = v9;
    CUtlMemory<CUtlHashtableEntry<unsigned int,unsigned short>,int>::Purge(&v169.m_table);
    v9 = v168;
  }
  v149->m_nRotLockStaticNodes = v20;
  v24 = this->m_pCombinedModel;
  memset(&v169, 0, 20);
  v25 = this->m_Models.m_Memory.m_pMemory;
  v150 = v24;
  v26 = this->m_Models.m_Size;
  v169.m_nMinSize = 32;
  v169.m_bSizeLocked = 0;
  v153 = &v25[v26];
  if ( v25 != v153 )
  {
    while ( 1 )
    {
      v27 = v25->m_nNodeCount[2];
      v165 = v25->m_nNodeCount[1];
      if ( v27 < v165 )
        break;
LABEL_40:
      if ( v153 == ++v25 )
      {
        v20 = v9;
        goto LABEL_42;
      }
    }
    while ( 1 )
    {
      v30 = v25->m_pModel->m_pCtrlHash[v27];
      if ( *v25->m_pModel->m_pCtrlName[v27] == 36 )
      {
        v28 = v9;
        v9 = (v9 + 1);
      }
      else
      {
        v31 = 33 * (((4097 * v30 + 2127912214) >> 19) ^ (4097 * v30 + 2127912214) ^ 0xC761C23C);
        v32 = 9 * ((v31 - 369570787) ^ ((v31 + 374761393) << 9)) - 42973499;
        v33 = HIWORD(v32) ^ v32 ^ 0xB55A4F09;
        if ( v169.m_nUsed == 0 )
        {
          v28 = v9;
          LOWORD(v156) = v9;
          v160 = v9 + 1;
          goto LABEL_36;
        }
        v156 = v9;
        v161 = HIWORD(v32) ^ v32 ^ 0xB55A4F09;
        v36 = CUtlHashtable<unsigned int,unsigned short,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,unsigned short>,int>>::DoLookup<unsigned int>(
                &v169,
                v30,
                v33,
                v9);
        v33 = v161;
        v9 = v156;
        if ( v36 == -1 )
        {
          v28 = v156;
          v160 = v156 + 1;
LABEL_36:
          v34 = CUtlHashtable<unsigned int,unsigned short,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,unsigned short>,int>>::DoInsertUnconstructed(
                  &v169,
                  v33,
                  1);
          v35 = &v169.m_table.m_pMemory[v34];
          if ( v35 == -4LL )
          {
            v9 = v160;
          }
          else
          {
            v35->data[0] = v30;
            v9 = v160;
            LOWORD(v35->data[1]) = v156;
          }
          goto LABEL_32;
        }
        v28 = v169.m_table.m_pMemory[v36].data[1];
      }
LABEL_32:
      v29 = v27 + v25->m_nNodeBase;
      ++v27;
      this->m_OldToNewNode.m_Memory.m_pMemory[v29] = v28;
      if ( v165 <= v27 )
        goto LABEL_40;
    }
  }
LABEL_42:
  v37 = v169.m_nUsed;
  if ( v169.m_nUsed != 0 )
  {
    v38 = v169.m_table.m_nAllocationCount - 1;
    if ( v169.m_table.m_nAllocationCount - 1 >= 0 )
    {
      v39 = &v169.m_table.m_pMemory[v38];
      do
      {
        if ( v39->flags_and_hash >= 0 )
        {
          --v37;
          v39->flags_and_hash = 0x80000000;
          if ( v37 == 0 )
            break;
        }
        --v38;
        --v39;
      }
      while ( v38 != -1 );
    }
    v169.m_nUsed = 0;
  }
  if ( (v169.m_table.m_nGrowSize & 0xC0000000) == 0 )
  {
    v167 = v9;
    CUtlMemory<CUtlHashtableEntry<unsigned int,unsigned short>,int>::Purge(&v169.m_table);
    v9 = v167;
  }
  this->m_nCombinedStaticNodeCount = v20;
  v150->m_nStaticNodes = v20;
  v40 = this->m_pCombinedModel;
  memset(&v169, 0, 20);
  v41 = this->m_Models.m_Memory.m_pMemory;
  v151 = v40;
  v42 = this->m_Models.m_Size;
  v169.m_nMinSize = 32;
  v169.m_bSizeLocked = 0;
  v154 = &v41[v42];
  if ( v41 == v154 )
    goto LABEL_65;
  do
  {
    v43 = v41->m_nNodeCount[1];
    for ( i = v41->m_nNodeCount[0]; i > v43; this->m_OldToNewNode.m_Memory.m_pMemory[v45] = v44 )
    {
      v46 = v41->m_pModel->m_pCtrlHash[v43];
      if ( *v41->m_pModel->m_pCtrlName[v43] == 36 )
      {
        v44 = v9;
        v9 = (v9 + 1);
      }
      else
      {
        v47 = 33 * (((4097 * v46 + 2127912214) >> 19) ^ (4097 * v46 + 2127912214) ^ 0xC761C23C);
        v48 = ((9 * ((v47 - 369570787) ^ ((v47 + 374761393) << 9)) - 42973499) >> 16)
            ^ (9 * ((v47 - 369570787) ^ ((v47 + 374761393) << 9)) - 42973499)
            ^ 0xB55A4F09;
        if ( v169.m_nUsed == 0 )
        {
          v44 = v9;
          LOWORD(v157) = v9;
          v162 = v9 + 1;
          goto LABEL_59;
        }
        v157 = v9;
        v163 = ((9 * ((v47 - 369570787) ^ ((v47 + 374761393) << 9)) - 42973499) >> 16)
             ^ (9 * ((v47 - 369570787) ^ ((v47 + 374761393) << 9)) - 42973499)
             ^ 0xB55A4F09;
        v51 = CUtlHashtable<unsigned int,unsigned short,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,unsigned short>,int>>::DoLookup<unsigned int>(
                &v169,
                v46,
                v48,
                v9);
        v48 = v163;
        v9 = v157;
        if ( v51 == -1 )
        {
          v44 = v157;
          v162 = v157 + 1;
LABEL_59:
          v49 = CUtlHashtable<unsigned int,unsigned short,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,unsigned short>,int>>::DoInsertUnconstructed(
                  &v169,
                  v48,
                  1);
          v50 = &v169.m_table.m_pMemory[v49];
          if ( v50 == -4LL )
          {
            v9 = v162;
          }
          else
          {
            v50->data[0] = v46;
            v9 = v162;
            LOWORD(v50->data[1]) = v157;
          }
          goto LABEL_55;
        }
        v44 = v169.m_table.m_pMemory[v51].data[1];
      }
LABEL_55:
      v45 = v43 + v41->m_nNodeBase;
      ++v43;
    }
    ++v41;
  }
  while ( v154 != v41 );
  v20 = v9;
LABEL_65:
  v52 = v169.m_nUsed;
  if ( v169.m_nUsed != 0 )
  {
    v53 = v169.m_table.m_nAllocationCount - 1;
    if ( v169.m_table.m_nAllocationCount - 1 >= 0 )
    {
      v54 = &v169.m_table.m_pMemory[v53];
      do
      {
        if ( v54->flags_and_hash >= 0 )
        {
          --v52;
          v54->flags_and_hash = 0x80000000;
          if ( v52 == 0 )
            break;
        }
        --v53;
        --v54;
      }
      while ( v53 != -1 );
    }
    v169.m_nUsed = 0;
  }
  if ( (v169.m_table.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<CUtlHashtableEntry<unsigned int,unsigned short>,int>::Purge(&v169.m_table);
  this->m_nCombinedNodeCount = v20;
  v151->m_nCtrlCount = v20;
  v151->m_nNodeCount = v20;
  if ( this->m_Models.m_Size <= 0 )
  {
    v58 = 0;
  }
  else
  {
    v55 = this->m_Models.m_Memory.m_pMemory;
    v56 = v55 + 1;
    v57 = &v55[(this->m_Models.m_Size - 1) + 1];
    v58 = 0;
    while ( 1 )
    {
      v58 |= v55->m_pModel->m_nStaticNodeFlags;
      v55 = v56;
      if ( v56 == v57 )
        break;
      ++v56;
    }
  }
  this->m_pCombinedModel->m_nStaticNodeFlags = v58;
  if ( this->m_Models.m_Size <= 0 )
  {
    v62 = 0;
  }
  else
  {
    v59 = this->m_Models.m_Memory.m_pMemory;
    v60 = v59 + 1;
    v61 = &v59[(this->m_Models.m_Size - 1) + 1];
    v62 = 0;
    while ( 1 )
    {
      v62 |= v59->m_pModel->m_nDynamicNodeFlags;
      v59 = v60;
      if ( v60 == v61 )
        break;
      ++v60;
    }
  }
  this->m_pCombinedModel->m_nDynamicNodeFlags = v62;
  v63 = this->m_Models.m_Size;
  if ( this->m_Models.m_Size <= 0 )
  {
    v65 = 0.0;
    v66 = 0.0;
  }
  else
  {
    v64 = this->m_Models.m_Memory.m_pMemory;
    v65 = 0.0;
    v66 = 0.0;
    v67 = v64 + 1;
    v68 = &v64[(v63 - 1) + 1];
    while ( 1 )
    {
      v66 = v66 + v64->m_pModel->m_flLocalForce;
      v64 = v67;
      if ( v67 == v68 )
        break;
      ++v67;
    }
  }
  this->m_pCombinedModel->m_flLocalForce = v66 / v63;
  v69 = this->m_Models.m_Size;
  if ( this->m_Models.m_Size <= 0 )
  {
    v71 = 0.0;
  }
  else
  {
    v70 = this->m_Models.m_Memory.m_pMemory;
    v71 = 0.0;
    v72 = v70 + 1;
    v73 = &v70[(v69 - 1) + 1];
    while ( 1 )
    {
      v71 = v71 + v70->m_pModel->m_flLocalRotation;
      v70 = v72;
      if ( v72 == v73 )
        break;
      ++v72;
    }
  }
  this->m_pCombinedModel->m_flLocalRotation = v71 / v69;
  v74 = this->m_Models.m_Size;
  if ( this->m_Models.m_Size <= 0 )
  {
    v76 = 0.0;
  }
  else
  {
    v75 = this->m_Models.m_Memory.m_pMemory;
    v76 = 0.0;
    v77 = v75 + 1;
    v78 = &v75[(v74 - 1) + 1];
    while ( 1 )
    {
      v76 = v76 + v75->m_pModel->m_flDefaultThreadStretch;
      v75 = v77;
      if ( v77 == v78 )
        break;
      ++v77;
    }
  }
  this->m_pCombinedModel->m_flDefaultThreadStretch = v76 / v74;
  v79 = this->m_Models.m_Size;
  if ( this->m_Models.m_Size <= 0 )
  {
    v81 = 0.0;
  }
  else
  {
    v80 = this->m_Models.m_Memory.m_pMemory;
    v81 = 0.0;
    v82 = v80 + 1;
    v83 = &v80[(v79 - 1) + 1];
    while ( 1 )
    {
      v81 = v81 + v80->m_pModel->m_flDefaultSurfaceStretch;
      v80 = v82;
      if ( v82 == v83 )
        break;
      ++v82;
    }
  }
  this->m_pCombinedModel->m_flDefaultSurfaceStretch = v81 / v79;
  v84 = this->m_Models.m_Size;
  if ( this->m_Models.m_Size <= 0 )
  {
    v86 = 0.0;
  }
  else
  {
    v85 = this->m_Models.m_Memory.m_pMemory;
    v86 = 0.0;
    v87 = v85 + 1;
    v88 = &v85[(v84 - 1) + 1];
    while ( 1 )
    {
      v86 = v86 + v85->m_pModel->m_flDefaultGravityScale;
      v85 = v87;
      if ( v87 == v88 )
        break;
      ++v87;
    }
  }
  this->m_pCombinedModel->m_flDefaultGravityScale = v86 / v84;
  v89 = this->m_Models.m_Size;
  if ( this->m_Models.m_Size <= 0 )
  {
    v91 = 0.0;
  }
  else
  {
    v90 = this->m_Models.m_Memory.m_pMemory;
    v91 = 0.0;
    v92 = v90 + 1;
    v93 = &v90[(v89 - 1) + 1];
    while ( 1 )
    {
      v91 = v91 + v90->m_pModel->m_flDefaultVelAirDrag;
      v90 = v92;
      if ( v92 == v93 )
        break;
      ++v92;
    }
  }
  this->m_pCombinedModel->m_flDefaultVelAirDrag = v91 / v89;
  v94 = this->m_Models.m_Size;
  if ( this->m_Models.m_Size <= 0 )
  {
    v96 = 0.0;
  }
  else
  {
    v95 = this->m_Models.m_Memory.m_pMemory;
    v96 = 0.0;
    v97 = v95 + 1;
    v98 = &v95[(v94 - 1) + 1];
    while ( 1 )
    {
      v96 = v96 + v95->m_pModel->m_flDefaultExpAirDrag;
      v95 = v97;
      if ( v97 == v98 )
        break;
      ++v97;
    }
  }
  this->m_pCombinedModel->m_flDefaultExpAirDrag = v96 / v94;
  v99 = this->m_Models.m_Size;
  if ( this->m_Models.m_Size <= 0 )
  {
    v101 = 0.0;
  }
  else
  {
    v100 = this->m_Models.m_Memory.m_pMemory;
    v101 = 0.0;
    v102 = v100 + 1;
    v103 = &v100[(v99 - 1) + 1];
    while ( 1 )
    {
      v101 = v101 + v100->m_pModel->m_flDefaultVelQuadAirDrag;
      v100 = v102;
      if ( v102 == v103 )
        break;
      ++v102;
    }
  }
  this->m_pCombinedModel->m_flDefaultVelQuadAirDrag = v101 / v99;
  v104 = this->m_Models.m_Size;
  if ( this->m_Models.m_Size <= 0 )
  {
    v106 = 0.0;
  }
  else
  {
    v105 = this->m_Models.m_Memory.m_pMemory;
    v106 = 0.0;
    v107 = v105 + 1;
    v108 = &v105[(v104 - 1) + 1];
    while ( 1 )
    {
      v106 = v106 + v105->m_pModel->m_flDefaultExpQuadAirDrag;
      v105 = v107;
      if ( v107 == v108 )
        break;
      ++v107;
    }
  }
  this->m_pCombinedModel->m_flDefaultExpQuadAirDrag = v106 / v104;
  v109 = this->m_Models.m_Size;
  if ( this->m_Models.m_Size <= 0 )
  {
    v111 = 0.0;
  }
  else
  {
    v110 = this->m_Models.m_Memory.m_pMemory;
    v111 = 0.0;
    v112 = v110 + 1;
    v113 = &v110[(v109 - 1) + 1];
    while ( 1 )
    {
      v111 = v111 + v110->m_pModel->m_flDefaultVelRodAirDrag;
      v110 = v112;
      if ( v112 == v113 )
        break;
      ++v112;
    }
  }
  this->m_pCombinedModel->m_flDefaultVelRodAirDrag = v111 / v109;
  v114 = this->m_Models.m_Size;
  if ( this->m_Models.m_Size <= 0 )
  {
    v116 = 0.0;
  }
  else
  {
    v115 = this->m_Models.m_Memory.m_pMemory;
    v116 = 0.0;
    v117 = v115 + 1;
    v118 = &v115[(v114 - 1) + 1];
    while ( 1 )
    {
      v116 = v116 + v115->m_pModel->m_flDefaultExpRodAirDrag;
      v115 = v117;
      if ( v117 == v118 )
        break;
      ++v117;
    }
  }
  this->m_pCombinedModel->m_flDefaultExpRodAirDrag = v116 / v114;
  v119 = this->m_Models.m_Size;
  if ( this->m_Models.m_Size <= 0 )
  {
    v121 = 0.0;
  }
  else
  {
    v120 = this->m_Models.m_Memory.m_pMemory;
    v121 = 0.0;
    v122 = v120 + 1;
    v123 = &v120[(v119 - 1) + 1];
    while ( 1 )
    {
      v121 = v121 + v120->m_pModel->m_flQuadVelocitySmoothRate;
      v120 = v122;
      if ( v122 == v123 )
        break;
      ++v122;
    }
  }
  this->m_pCombinedModel->m_flQuadVelocitySmoothRate = v121 / v119;
  v124 = this->m_Models.m_Size;
  if ( this->m_Models.m_Size <= 0 )
  {
    v126 = 0.0;
  }
  else
  {
    v125 = this->m_Models.m_Memory.m_pMemory;
    v126 = 0.0;
    v127 = v125 + 1;
    v128 = &v125[(v124 - 1) + 1];
    while ( 1 )
    {
      v126 = v126 + v125->m_pModel->m_flRodVelocitySmoothRate;
      v125 = v127;
      if ( v127 == v128 )
        break;
      ++v127;
    }
  }
  this->m_pCombinedModel->m_flRodVelocitySmoothRate = v126 / v124;
  v129 = this->m_Models.m_Size;
  if ( this->m_Models.m_Size <= 0 )
  {
    v131 = 0.0;
  }
  else
  {
    v130 = this->m_Models.m_Memory.m_pMemory;
    v131 = 0.0;
    v132 = v130 + 1;
    v133 = &v130[(v129 - 1) + 1];
    while ( 1 )
    {
      v131 = v131 + v130->m_pModel->m_flAddWorldCollisionRadius;
      v130 = v132;
      if ( v132 == v133 )
        break;
      ++v132;
    }
  }
  this->m_pCombinedModel->m_flAddWorldCollisionRadius = v131 / v129;
  v134 = this->m_Models.m_Size;
  if ( this->m_Models.m_Size <= 0 )
  {
    v136 = 0.0;
  }
  else
  {
    v135 = this->m_Models.m_Memory.m_pMemory;
    v136 = 0.0;
    v137 = v135 + 1;
    v138 = &v135[(v134 - 1) + 1];
    while ( 1 )
    {
      v136 = v136 + v135->m_pModel->m_flDefaultVolumetricSolveAmount;
      v135 = v137;
      if ( v137 == v138 )
        break;
      ++v137;
    }
  }
  this->m_pCombinedModel->m_flDefaultVolumetricSolveAmount = v136 / v134;
  v139 = this->m_Models.m_Size;
  if ( this->m_Models.m_Size <= 0 )
  {
    v141 = 0.0;
  }
  else
  {
    v140 = this->m_Models.m_Memory.m_pMemory;
    v141 = 0.0;
    v142 = v140 + 1;
    v143 = &v140[(v139 - 1) + 1];
    while ( 1 )
    {
      v141 = v141 + v140->m_pModel->m_flWindage;
      v140 = v142;
      if ( v142 == v143 )
        break;
      ++v142;
    }
  }
  this->m_pCombinedModel->m_flWindage = v141 / v139;
  v144 = this->m_Models.m_Size;
  if ( this->m_Models.m_Size > 0 )
  {
    v145 = this->m_Models.m_Memory.m_pMemory;
    v146 = v145 + 1;
    v147 = &v145[(v144 - 1) + 1];
    while ( 1 )
    {
      v65 = v65 + v145->m_pModel->m_flWindDrag;
      v145 = v146;
      if ( v146 == v147 )
        break;
      ++v146;
    }
  }
  this->m_pCombinedModel->m_flWindDrag = v65 / v144;
  CFeModelCombiner::CollectMemory<CFeModelCombiner>(this, this);
  CFeModelCombiner::CollectFitMatrices(this);
  CFeModelCombiner::CollectRopes(this);
  return this->m_pCombinedModel;
}


// CFeModelCombiner::CollectFitMatrices  (line 192, @0x00000000031b7250, libserver.so)  // inlines: AddMultipleToTail, CFeNodeMap, CUtlMemory, CUtlMemoryFixedGrowable, CUtlMemoryFixedGrowable_Base, CUtlVectorBase, CUtlVectorFixedGrowable, Construct<CFeModelCombiner::CollectFitMatrices()::PerModel_t>, ConvertToExternalMemory, Grow, GrowMemory, GrowVector, Init, InsertMultipleBefore, MapNodes<CFeNodeMap>, PerModel_t, Purge, Purge_FixedGrowable, RemoveAll, RemoveMultipleFromTail, SetCount, memcpy, operator(), operator=, operator[], ~CUtlMemory, ~CUtlMemoryFixedGrowable, ~CUtlMemoryFixedGrowable_Base, ~CUtlVectorBase, ~CUtlVectorFixedGrowable
// calls: CUtlMemory<CFeModelCombiner::CollectFitMatrices()::PerModel_t, int>::Purge, UtlMemory_CalcNewAllocationCount, _Unwind_Resume, memcpy, __stack_chk_fail
// callers: CFeModelCombiner::Combine
void __fastcall CFeModelCombiner::CollectFitMatrices(CFeModelCombiner *const this)
{
  CFeModel_0 *m_pCombinedModel; // rax
  int m_Size; // ebx
  FeFitWeight_t *m_pFitWeights; // r13
  char *p_m_FixedMemory; // rdi
  int v6; // eax
  __int64 v7; // r15
  uint16 m_nCombinedNodeCount; // r8
  CFeModelCombiner::Model_t *v9; // rax
  const CFeModel *m_pModel; // rdi
  unsigned __int16 m_nNodeCount; // si
  unsigned __int16 *v12; // r9
  CFeModelCombiner::CollectFitMatrices::PerModel_t *v13; // rdx
  __int64 v14; // rbx
  __int64 nMatrix; // rax
  __int64 v16; // rcx
  FeFitMatrix_t *v17; // rax
  FeFitMatrix_t *v18; // rcx
  vec_t y; // xmm2_4
  vec_t z; // xmm1_4
  vec_t w; // xmm1_4
  vec_t v22; // xmm2_4
  vec_t v23; // xmm3_4
  uint16 nEnd; // bx
  __int64 nNode; // r10
  __int64 nCtrl; // r11
  uint16 nBeginDynamic; // r12
  __int64 nRunningWeight; // rcx
  FeFitWeight_t *v29; // rbx
  FeFitWeight_t *v30; // r10
  FeFitWeight_t v31; // rcx
  unsigned __int64 v32; // rcx
  uint32 v33; // eax
  __int64 v34; // rax
  char *v35; // rdi
  int i; // r12d
  CFeModelCombiner::CollectFitMatrices::PerModel_t *m_pMemory; // r15
  int nGroup; // [rsp+4h] [rbp-BCh]
  __int64 v39; // [rsp+18h] [rbp-A8h]
  __int64 v40; // [rsp+20h] [rbp-A0h]
  int nModel; // [rsp+28h] [rbp-98h]
  uint nOutRunningMatrices; // [rsp+2Ch] [rbp-94h]
  CUtlVectorFixedGrowable<CFeModelCombiner::CollectFitMatrices()::PerModel_t,8ul> perModel; // [rsp+30h] [rbp-90h] BYREF
  unsigned __int64 v44; // [rsp+88h] [rbp-38h]

  perModel.m_Memory.m_nAllocationCount = 8;
  v44 = __readfsqword(0x28u);
  m_pCombinedModel = this->m_pCombinedModel;
  perModel.m_Memory.m_nGrowSize = 0x80000000;
  m_Size = this->m_Models.m_Size;
  m_pFitWeights = m_pCombinedModel->m_pFitWeights;
  p_m_FixedMemory = &perModel.m_Memory.m_FixedMemory;
  perModel.m_Memory.m_pMemory = &perModel.m_Memory.m_FixedMemory;
  if ( m_Size > 0 )
  {
    if ( m_Size > 8 )
    {
      for ( i = UtlMemory_CalcNewAllocationCount(8, 0, m_Size, 8); m_Size > i; i = (m_Size + i) / 2 )
        ;
      m_pMemory = perModel.m_Memory.m_pMemory;
      perModel.m_Memory.m_pMemory = (**g_pMemAlloc)(g_pMemAlloc, 8LL * i);
      p_m_FixedMemory = perModel.m_Memory.m_pMemory;
      if ( m_pMemory != 0 )
      {
        memcpy(perModel.m_Memory.m_pMemory, m_pMemory, 8LL * perModel.m_Memory.m_nAllocationCount);
        p_m_FixedMemory = perModel.m_Memory.m_pMemory;
      }
      perModel.m_Memory.m_nGrowSize &= 0x3FFFFFFFu;
      perModel.m_Memory.m_nAllocationCount = i;
    }
    v34 = 0;
    while ( 1 )
    {
      v35 = &p_m_FixedMemory[v34];
      if ( v35 != 0 )
      {
        *(v35 + 1) = 0;
        *v35 = 0;
      }
      v34 += 8;
      if ( v34 == 8LL * (m_Size - 1) + 8 )
        break;
      p_m_FixedMemory = perModel.m_Memory.m_pMemory;
    }
    v6 = this->m_Models.m_Size;
  }
  else
  {
    v6 = 0;
    if ( m_Size != 0 )
      v6 = m_Size;
  }
  nGroup = 2;
  v7 = 0;
  nOutRunningMatrices = 0;
  while ( 1 )
  {
    v39 = 0;
    nModel = 0;
    if ( v6 > 0 )
    {
      while ( 1 )
      {
        m_nCombinedNodeCount = this->m_nCombinedNodeCount;
        v9 = &this->m_Models.m_Memory.m_pMemory[v39];
        m_pModel = v9->m_pModel;
        m_nNodeCount = v9->m_pModel->m_nNodeCount;
        v12 = &this->m_OldToNewNode.m_Memory.m_pMemory[v9->m_nNodeBase];
        v13 = &perModel.m_Memory.m_pMemory[v39];
        v14 = v9->m_pModel + 2 * nGroup;
        nMatrix = perModel.m_Memory.m_pMemory[v39].nMatrix;
        v40 = v14;
        if ( nMatrix < *(v14 + 96) )
          break;
LABEL_17:
        ++nModel;
        ++v39;
        if ( this->m_Models.m_Size <= nModel )
          goto LABEL_18;
      }
      while ( 1 )
      {
        v16 = nOutRunningMatrices;
        v17 = &m_pModel->m_pFitMatrices[nMatrix];
        ++nOutRunningMatrices;
        v18 = &this->m_pCombinedModel->m_pFitMatrices[v16];
        y = v17->bone.m_vPosition.y;
        z = v17->bone.m_vPosition.z;
        v18->bone.m_vPosition.x = v17->bone.m_vPosition.x;
        v18->bone.m_vPosition.y = y;
        v18->bone.m_vPosition.z = z;
        w = v17->bone.m_orientation.w;
        v22 = v17->bone.m_orientation.z;
        v23 = v17->bone.m_orientation.y;
        v18->bone.m_orientation.x = v17->bone.m_orientation.x;
        v18->bone.m_orientation.z = v22;
        v18->bone.m_orientation.y = v23;
        v18->bone.m_orientation.w = w;
        v18->vCenter.x = v17->vCenter.x;
        v18->vCenter.y = v17->vCenter.y;
        v18->vCenter.z = v17->vCenter.z;
        nEnd = v17->nEnd;
        v18->nEnd = nEnd;
        nNode = v17->nNode;
        v18->nNode = nNode;
        nCtrl = v17->nCtrl;
        v18->nCtrl = nCtrl;
        nBeginDynamic = v17->nBeginDynamic;
        v18->nBeginDynamic = nBeginDynamic;
        if ( m_nNodeCount <= nNode )
        {
          v18->nNode = m_nCombinedNodeCount;
          if ( m_nNodeCount <= nCtrl )
          {
LABEL_9:
            v18->nCtrl = m_nCombinedNodeCount;
            goto LABEL_10;
          }
        }
        else
        {
          v18->nNode = v12[nNode];
          if ( m_nNodeCount <= nCtrl )
            goto LABEL_9;
        }
        v18->nCtrl = v12[nCtrl];
LABEL_10:
        v18->nBeginDynamic = v7 + nBeginDynamic - LOWORD(v13->nRunningWeight);
        v18->nEnd = v7 + nEnd - LOWORD(v13->nRunningWeight);
        while ( 1 )
        {
          nRunningWeight = v13->nRunningWeight;
          if ( nRunningWeight >= v17->nEnd )
            break;
          v29 = m_pModel->m_pFitWeights;
          v13->nRunningWeight = nRunningWeight + 1;
          v30 = &m_pFitWeights[v7];
          v31 = v29[nRunningWeight];
          *v30 = v31;
          v32 = HIDWORD(*&v31);
          if ( m_nNodeCount > v32 )
            v30->nNode = v12[v32];
          else
            v30->nNode = m_nCombinedNodeCount;
          v7 = (v7 + 1);
        }
        nMatrix = v13->nMatrix + 1;
        v13->nMatrix = nMatrix;
        if ( *(v40 + 96) <= nMatrix )
          goto LABEL_17;
      }
    }
LABEL_18:
    if ( nGroup == 0 )
      break;
    --nGroup;
    v6 = this->m_Models.m_Size;
  }
  v33 = perModel.m_Memory.m_nGrowSize & 0xC0000000;
  if ( perModel.m_Memory.m_nAllocationCount < 0 || perModel.m_Memory.m_pMemory == &perModel.m_Memory.m_FixedMemory )
  {
    if ( v33 == 0 )
      CUtlMemory<CFeModelCombiner::CollectFitMatrices(void)::PerModel_t,int>::Purge(&perModel.m_Memory);
  }
  else if ( perModel.m_Memory.m_pMemory != 0 && v33 == 0 )
  {
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
  }
}


// CFeModelCombiner::CollectRopes  (line 239, @0x00000000031b7750, libserver.so)  // inlines: CFeNodeMap, end, operator[]
// calls: Warning
// callers: CFeModelCombiner::Combine
// strings: "FeModel combiner: Too many ropes (%u) or links (%u): cannot fit sum in uint16\n"
void __fastcall CFeModelCombiner::CollectRopes(CFeModelCombiner *const this)
{
  CFeModelCombiner::Model_t *m_pMemory; // r9
  CFeModelCombiner::Model_t *v3; // r8
  CFeModelCombiner::Model_t *v4; // rax
  int v5; // edx
  unsigned int v6; // esi
  const CFeModel *m_pModel; // rcx
  int m_nRopeCount; // edi
  unsigned int v9; // r8d
  const CFeModel *v10; // rcx
  uint16 m_nCombinedNodeCount; // r13
  unsigned __int16 m_nNodeCount; // r12
  unsigned __int16 *v13; // r15
  uint16 v14; // dx
  __int64 v15; // r10
  unsigned int v16; // eax
  __int64 v17; // r11
  unsigned int v18; // edi
  __int64 v19; // rdx
  uint16 *v20; // r10
  __int64 v21; // rdx
  unsigned __int16 v22; // ax
  CUtlVectorBase<CFeModelCombiner::Model_t,CUtlMemoryFixedGrowable<CFeModelCombiner::Model_t,8ul,int> >::iterator __for_end; // [rsp+8h] [rbp-38h]

  m_pMemory = this->m_Models.m_Memory.m_pMemory;
  v3 = &m_pMemory[this->m_Models.m_Size];
  __for_end = v3;
  if ( m_pMemory == v3 )
  {
    LOWORD(v9) = 0;
    LOWORD(v6) = 0;
LABEL_14:
    this->m_pCombinedModel->m_nRopeCount = v9;
    this->m_pCombinedModel->m_nRopeIndexCount = v6;
    return;
  }
  v4 = this->m_Models.m_Memory.m_pMemory;
  v5 = 0;
  v6 = 0;
  do
  {
    m_pModel = v4->m_pModel;
    ++v4;
    m_nRopeCount = m_pModel->m_nRopeCount;
    v6 += m_nRopeCount;
    v5 += m_pModel->m_nRopeIndexCount - m_nRopeCount;
  }
  while ( v3 != v4 );
  v9 = 0;
  if ( v6 + v5 <= 0xFFFF )
  {
    do
    {
      v10 = m_pMemory->m_pModel;
      m_nCombinedNodeCount = this->m_nCombinedNodeCount;
      m_nNodeCount = m_pMemory->m_pModel->m_nNodeCount;
      v13 = &this->m_OldToNewNode.m_Memory.m_pMemory[m_pMemory->m_nNodeBase];
      v14 = m_pMemory->m_pModel->m_nRopeCount;
      if ( v14 != 0 )
      {
        v15 = v9;
        v16 = 0;
        while ( 1 )
        {
          ++v9;
          v17 = v16++;
          this->m_pCombinedModel->m_pRopes[v15] = v10->m_pRopes[v17] + v6 - v14;
          v10 = m_pMemory->m_pModel;
          v14 = m_pMemory->m_pModel->m_nRopeCount;
          v18 = v14;
          if ( v14 <= v16 )
            break;
          v15 = v9;
        }
      }
      else
      {
        v18 = 0;
      }
      if ( v18 < v10->m_nRopeIndexCount )
      {
        do
        {
          v19 = v6++;
          v20 = &this->m_pCombinedModel->m_pRopes[v19];
          v21 = v10->m_pRopes[v18];
          v22 = m_nCombinedNodeCount;
          if ( v21 < m_nNodeCount )
            v22 = v13[v21];
          *v20 = v22;
          ++v18;
          v10 = m_pMemory->m_pModel;
        }
        while ( m_pMemory->m_pModel->m_nRopeIndexCount > v18 );
      }
      ++m_pMemory;
    }
    while ( __for_end != m_pMemory );
    goto LABEL_14;
  }
  Warning("FeModel combiner: Too many ropes (%u) or links (%u): cannot fit sum in uint16\n", v6, v5);
  this->m_pCombinedModel->m_nRopeCount = 0;
  this->m_pCombinedModel->m_nRopeIndexCount = 0;
}


// CFeModelCombiner::GetDataSize  (line 278, @0x00000000031b79f0, libserver.so)  // inlines: CFeModelCombinerSizeCollector
// calls: CFeModelCombiner::CollectMemory<CFeModelCombinerSizeCollector>
// callers: CombineAggregateData
uint __fastcall CFeModelCombiner::GetDataSize(CFeModelCombiner *const this)
{
  __int64 v1; // rbp
  uint result; // eax
  CFeModelCombinerSizeCollector sizeCollector; // [rsp+0h] [rbp-18h] BYREF
  __int64 v4; // [rsp+10h] [rbp-8h]

  result = 0;
  if ( this->m_Models.m_Size > 1 )
  {
    v4 = v1;
    sizeCollector.m_Combiner = this;
    sizeCollector.m_nMemSize = 512;
    sizeCollector.m_nLastAlign = 16;
    CFeModelCombiner::CollectMemory<CFeModelCombinerSizeCollector>(this, &sizeCollector);
    return sizeCollector.m_nMemSize;
  }
  return result;
}


