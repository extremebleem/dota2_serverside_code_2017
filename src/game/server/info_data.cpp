
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CInfoData::Spawn  (line 11, @0x0000000001fe8970, libserver.so)  // inlines: AddToHead, AddToHead<CUtlAttributeList<CUtlSymbolLarge>::OverflowChunk_t, CUtlAttributeList<CUtlSymbolLarge>::OverflowChunk_t>, AddToHead<CUtlAttributeList<Color>::OverflowChunk_t, CUtlAttributeList<Color>::OverflowChunk_t>, AddToHead<CUtlAttributeList<Vector>::OverflowChunk_t, CUtlAttributeList<Vector>::OverflowChunk_t>, AddToHead<CUtlAttributeList<float>::OverflowChunk_t, CUtlAttributeList<float>::OverflowChunk_t>, AddToHead<CUtlAttributeList<int>::OverflowChunk_t, CUtlAttributeList<int>::OverflowChunk_t>, Base, CIterator, CUtlAttributeListChunk, CUtlSymbolLarge, Clear, CmpEqSIMD<(ESIMDLevel)20u>, Color, Element, FindIndexOfMatch, First, FromUint32, Head, Id, IsValid, Next, OverflowChunk_t, ReplicateIX4<(ESIMDLevel)20u>, SetRawColor, SetValue, StoreAlignedIntSIMD<(ESIMDLevel)20u>, TempString, TestSignSIMD<(ESIMDLevel)20u>, ToString, Value, _mm_cmpeq_epi32, _mm_movemask_ps, _mm_set1_epi32, _mm_set_epi32, _mm_store_ps, begin, memset, operator Color, operator const Vector&, operator float, operator int, operator++, operator=, operator[]
// calls: CBaseEntity::Spawn, AllocPooledString, CVariantBase<CEntityVariantAllocator>::AssignTo, operator new
// globals: CEntityKeyValues::sm_EmptyVariant, jpt_1FE89FC, CVariantBase<CEntityVariantAllocator>::ToString(void)::szBuf
void __fastcall CInfoData::Spawn(CInfoData *const this, const CEntityKeyValues *pKeyValues)
{
  __int64 v3; // r14
  __int64 v4; // r13
  int v6; // ebx
  int m_nCount; // eax
  CUtlAttributeList<Color,16,Color> *p_m_Colors; // rsi
  CUtlAttributeList<CUtlSymbolLarge,16,CUtlSymbolLarge> *p_m_Strings; // r15
  CEntityVariant *p_m_value; // rdx
  CEntityVariant *v11; // rdi
  const char *v12; // rsi
  unsigned int v13; // r11d
  UtlSymLargeId_t m_Id; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  __m128i v17; // xmm1
  int v18; // eax
  int m_int; // edx
  unsigned int v20; // r11d
  __int64 v21; // rcx
  __int64 v22; // rax
  __m128i v23; // xmm1
  int v24; // eax
  CEntityVariant *v25; // rdx
  int16 m_type; // cx
  int m_float64; // r9d
  unsigned int v28; // r8d
  __int64 v29; // rdx
  __int64 v30; // rax
  __m128i v31; // xmm1
  CUtlAttributeList<int,16,int> *p_m_Ints; // r10
  int v33; // eax
  CEntityVariant *v34; // rdx
  float m_float; // xmm2_4
  unsigned int v36; // r11d
  __int64 v37; // rdx
  __int64 v38; // rax
  __m128i v39; // xmm1
  CUtlAttributeList<float,16,float> *p_m_Floats; // r9
  int v41; // eax
  const Vector *m_uint64; // rdx
  unsigned int v43; // r10d
  __int64 v44; // rax
  vec_t x; // xmm4_4
  __m128i v46; // xmm1
  vec_t y; // xmm3_4
  vec_t z; // xmm2_4
  __int64 i; // rdx
  int v50; // eax
  int v51; // eax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *m_pElements; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v53; // rdi
  unsigned __int64 v54; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v55; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v56; // rdx
  unsigned __int64 m_nAllocated; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v58; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v59; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v60; // rax
  unsigned __int64 v61; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v62; // rax
  unsigned __int64 v63; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v64; // rax
  unsigned __int64 v65; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v66; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v67; // rdx
  CUtlAttributeList<Vector,16,Vector>::OverflowChunk_t *v68; // r9
  CUtlAttributeList<Vector,16,Vector>::OverflowChunk_t *v69; // rdi
  CUtlAttributeList<Vector,16,Vector> *p_m_storage; // rcx
  __int64 v71; // rdx
  __int64 v72; // rax
  int v73; // eax
  __int64 v74; // rdx
  __int64 v75; // rax
  int v76; // eax
  int v77; // eax
  vec_t *p_x; // rax
  CUtlAttributeList<float,16,float>::OverflowChunk_t *m_pHead; // r10
  CUtlAttributeList<float,16,float>::OverflowChunk_t *v80; // rdi
  __int64 v81; // rdx
  __int64 v82; // rax
  int v83; // eax
  __int64 v84; // rdx
  __int64 v85; // rax
  int v86; // eax
  int v87; // eax
  CUtlAttributeList<int,16,int>::OverflowChunk_t *v88; // r11
  CUtlAttributeList<int,16,int>::OverflowChunk_t *v89; // rdi
  __int64 v90; // rdx
  __int64 v91; // rax
  int v92; // eax
  __int64 v93; // rdx
  __int64 v94; // rax
  int v95; // eax
  CUtlAttributeList<Color,16,Color>::OverflowChunk_t *v96; // r10
  CUtlAttributeList<Color,16,Color>::OverflowChunk_t *v97; // r9
  CUtlAttributeList<Color,16,Color> *v98; // rsi
  __int64 v99; // rcx
  __int64 v100; // rax
  int v101; // eax
  __int64 v102; // rcx
  __int64 v103; // rax
  int v104; // eax
  int v105; // eax
  CUtlAttributeList<CUtlSymbolLarge,16,CUtlSymbolLarge>::OverflowChunk_t *v106; // r10
  CUtlAttributeList<CUtlSymbolLarge,16,CUtlSymbolLarge>::OverflowChunk_t *v107; // r9
  CUtlAttributeList<CUtlSymbolLarge,16,CUtlSymbolLarge> *v108; // rsi
  __int64 v109; // rcx
  __int64 v110; // rax
  int v111; // eax
  __int64 v112; // rcx
  __int64 v113; // rax
  int v114; // eax
  int v115; // eax
  __int64 v116; // rdx
  __int64 v117; // rax
  int v118; // eax
  fltx4_0 *v119; // rax
  CUtlAttributeList<Vector,16,Vector> *v120; // r9
  CUtlAttributeList<Vector,16,Vector>::OverflowChunk_t *v121; // rsi
  fltx4_0 *v122; // rdx
  fltx4_0 *v123; // rax
  __int64 v124; // rsi
  int v125; // eax
  __int64 v126; // rcx
  __int64 v127; // rax
  int v128; // eax
  _QWORD *v129; // rax
  fltx4_0 *v130; // rsi
  CUtlAttributeList<CUtlSymbolLarge,16,CUtlSymbolLarge>::OverflowChunk_t *v131; // r9
  fltx4_0 *v132; // r10
  CUtlAttributeList<CUtlSymbolLarge,16,CUtlSymbolLarge>::OverflowChunk_t *v133; // rax
  fltx4_0 *v134; // rax
  __int64 v135; // rcx
  int v136; // eax
  __int64 v137; // rcx
  __int64 v138; // rax
  int v139; // eax
  char *v140; // rax
  fltx4_0 *v141; // rsi
  CUtlAttributeList<Color,16,Color>::OverflowChunk_t *v142; // r9
  fltx4_0 *v143; // r10
  CUtlAttributeList<Color,16,Color>::OverflowChunk_t *v144; // rax
  fltx4_0 *v145; // rax
  __int64 v146; // rcx
  int v147; // eax
  __int64 v148; // rax
  __int64 v149; // rdx
  __int64 v150; // rax
  int v151; // eax
  fltx4_0 *v152; // rax
  CUtlAttributeList<int,16,int>::OverflowChunk_t *v153; // rdx
  fltx4_0 *v154; // rcx
  fltx4_0 *v155; // rax
  __int64 v156; // rdx
  __int64 v157; // rax
  __int64 v158; // rdx
  __int64 v159; // rax
  int v160; // eax
  fltx4_0 *v161; // rax
  CUtlAttributeList<float,16,float>::OverflowChunk_t *v162; // rdx
  fltx4_0 *v163; // rcx
  fltx4_0 *v164; // rax
  __int64 v165; // rdx
  float v166; // [rsp+Ch] [rbp-74h]
  float v167; // [rsp+10h] [rbp-70h]
  float v168; // [rsp+14h] [rbp-6Ch]
  unsigned int v169; // [rsp+14h] [rbp-6Ch]
  int v170; // [rsp+14h] [rbp-6Ch]
  unsigned int v171; // [rsp+14h] [rbp-6Ch]
  unsigned int v172; // [rsp+14h] [rbp-6Ch]
  unsigned int v173; // [rsp+18h] [rbp-68h]
  unsigned int v174; // [rsp+18h] [rbp-68h]
  int v175; // [rsp+18h] [rbp-68h]
  float v176; // [rsp+18h] [rbp-68h]
  CUtlAttributeList<Color,16,Color> *v177; // [rsp+28h] [rbp-58h]
  CUtlAttributeList<Vector,16,Vector> *p_m_Vectors; // [rsp+30h] [rbp-50h]
  CInfoData *thisa; // [rsp+38h] [rbp-48h]
  string_t pString; // [rsp+40h] [rbp-40h]

  v3 = 0;
  v4 = 0;
  v6 = 0;
  CBaseEntity::Spawn(this, pKeyValues);
  m_nCount = pKeyValues->m_keyHashes.m_nCount;
  if ( m_nCount > 0 )
  {
    thisa = this;
    p_m_Vectors = &this->m_Vectors;
    p_m_Colors = &this->m_Colors;
    p_m_Strings = &this->m_Strings;
    v177 = p_m_Colors;
    while ( 1 )
    {
      p_m_value = &CEntityKeyValues::sm_EmptyVariant;
      if ( m_nCount > v6 )
      {
        if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
          m_pElements = pKeyValues->m_keyValues.m_pElements;
        else
          m_pElements = 0;
        p_m_value = &m_pElements[v4].m_value;
      }
      switch ( p_m_value->m_type )
      {
        case 1:
          v34 = &CEntityKeyValues::sm_EmptyVariant;
          if ( m_nCount > v6 )
          {
            if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
              v59 = pKeyValues->m_keyValues.m_pElements;
            else
              v59 = 0;
            v34 = &v59[v4].m_value;
            if ( v34->m_type != 34 )
            {
LABEL_30:
              m_float = v34->m_float;
              goto LABEL_31;
            }
          }
          else if ( CEntityKeyValues::sm_EmptyVariant.m_type != 34 )
          {
            goto LABEL_30;
          }
          m_float = v34->m_float64;
LABEL_31:
          v36 = 0;
          if ( m_nCount > v6 )
          {
            m_nAllocated = pKeyValues->m_keyHashes.m_nAllocated;
            if ( m_nAllocated != 0 )
            {
              if ( m_nAllocated <= 9 )
                v58 = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
              else
                v58 = pKeyValues->m_keyHashes.m_pElements;
            }
            else
            {
              v58 = 0;
            }
            v36 = v58[v3];
          }
          v37 = 0;
          v38 = 0;
          v39 = _mm_shuffle_epi32(_mm_cvtsi32_si128(v36), 0);
          p_m_Floats = &thisa->m_Floats;
          while ( 1 )
          {
            v41 = _mm_movemask_ps(_mm_cmpeq_epi32(_mm_load_si128(&p_m_Floats->m_fixedStorage.m_nFixedKeys[v38]), v39));
            if ( v41 != 0 )
              break;
            v38 = v37 + 1;
            if ( v37 == 3 )
              goto LABEL_109;
            ++v37;
          }
          v51 = g_nSIMDBitMaskToIndex[v41] + 4 * v37;
          if ( v51 != -1 )
            goto LABEL_45;
LABEL_109:
          m_pHead = thisa->m_Floats.m_pOverflow.m_pHead;
          if ( m_pHead != 0 )
          {
            v80 = thisa->m_Floats.m_pOverflow.m_pHead;
            while ( 1 )
            {
              v81 = 0;
              v82 = 0;
              while ( 1 )
              {
                v83 = _mm_movemask_ps(_mm_cmpeq_epi32(_mm_load_si128(&v80->m_storage.m_nFixedKeys[v82]), v39));
                if ( v83 != 0 )
                  break;
                v82 = v81 + 1;
                if ( v81 == 3 )
                  goto LABEL_115;
                ++v81;
              }
              v51 = g_nSIMDBitMaskToIndex[v83] + 4 * v81;
              if ( v51 != -1 )
                break;
LABEL_115:
              v80 = v80->m_pNext;
              if ( v80 == 0 )
                goto LABEL_116;
            }
            p_m_Floats = &v80->m_storage;
LABEL_45:
            p_m_Floats->m_fixedStorage.m_FixedValues[v51] = m_float;
            m_nCount = pKeyValues->m_keyHashes.m_nCount;
            goto LABEL_46;
          }
LABEL_116:
          v84 = 0;
          v85 = 0;
          while ( 1 )
          {
            v86 = _mm_movemask_ps(_mm_cmpeq_epi32(_mm_load_si128(&p_m_Floats->m_fixedStorage.m_nFixedKeys[v85]), 0LL));
            if ( v86 != 0 )
              break;
            v85 = v84 + 1;
            if ( v84 == 3 )
              goto LABEL_237;
            ++v84;
          }
          LODWORD(v157) = g_nSIMDBitMaskToIndex[v86] + 4 * v84;
          if ( v157 != -1 )
          {
LABEL_250:
            v157 = v157;
            v165 = v157;
            goto LABEL_247;
          }
LABEL_237:
          if ( m_pHead != 0 )
          {
            while ( 2 )
            {
              p_m_Floats = &m_pHead->m_storage;
              v158 = 0;
              v159 = 0;
              while ( 1 )
              {
                v160 = _mm_movemask_ps(_mm_cmpeq_epi32(
                                         _mm_load_si128(&p_m_Floats->m_fixedStorage.m_nFixedKeys[v159]),
                                         0LL));
                if ( v160 != 0 )
                  break;
                v159 = v158 + 1;
                if ( v158 == 3 )
                  goto LABEL_242;
                ++v158;
              }
              LODWORD(v157) = g_nSIMDBitMaskToIndex[v160] + 4 * v158;
              if ( v157 != -1 )
                goto LABEL_250;
LABEL_242:
              m_pHead = m_pHead->m_pNext;
              if ( m_pHead != 0 )
                continue;
              break;
            }
          }
          v172 = v36;
          v176 = m_float;
          v161 = operator new(0x90u);
          m_float = v176;
          p_m_Floats = &v161[1];
          v162 = v161;
          v36 = v172;
          memset(&v161[1], 0, 0x40u);
          v163 = v161 + 5;
          if ( &v161[1] != &v161[5] )
          {
            v164 = v161 + 1;
            do
              *v164++ = Four_Zeros;
            while ( v163 != v164 );
          }
          v162->m_pNext = thisa->m_Floats.m_pOverflow.m_pHead;
          v157 = 0;
          thisa->m_Floats.m_pOverflow.m_pHead = v162;
          v165 = 0;
LABEL_247:
          p_m_Floats->m_fixedStorage.m_nFixedKeys[0].m_i32[v165] = v36;
          ++v6;
          ++v3;
          p_m_Floats->m_fixedStorage.m_FixedValues[v157] = m_float;
          ++v4;
          m_nCount = pKeyValues->m_keyHashes.m_nCount;
          if ( v6 >= m_nCount )
            return;
          continue;
        case 3:
          if ( m_nCount <= v6 )
          {
            m_uint64 = CEntityKeyValues::sm_EmptyVariant.m_uint64;
            if ( CEntityKeyValues::sm_EmptyVariant.m_uint64 != 0 )
              goto LABEL_38;
LABEL_88:
            m_uint64 = &vec3_origin;
            goto LABEL_38;
          }
          if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
            v67 = pKeyValues->m_keyValues.m_pElements;
          else
            v67 = 0;
          m_uint64 = v67[v4].m_value.m_pVector;
          if ( m_uint64 == 0 )
            goto LABEL_88;
LABEL_38:
          v43 = 0;
          if ( m_nCount > v6 )
          {
            v65 = pKeyValues->m_keyHashes.m_nAllocated;
            if ( v65 != 0 )
            {
              if ( v65 <= 9 )
                v66 = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
              else
                v66 = pKeyValues->m_keyHashes.m_pElements;
            }
            else
            {
              v66 = 0;
            }
            v43 = v66[v3];
          }
          v44 = 0;
          x = m_uint64->x;
          v46 = _mm_shuffle_epi32(_mm_cvtsi32_si128(v43), 0);
          y = m_uint64->y;
          z = m_uint64->z;
          for ( i = 0; ; ++i )
          {
            v50 = _mm_movemask_ps(_mm_cmpeq_epi32(_mm_load_si128(&p_m_Vectors->m_fixedStorage.m_nFixedKeys[v44]), v46));
            if ( v50 != 0 )
              break;
            v44 = i + 1;
            if ( i == 3 )
              goto LABEL_94;
          }
          v77 = g_nSIMDBitMaskToIndex[v50] + 4 * i;
          if ( v77 != -1 )
          {
            p_m_storage = p_m_Vectors;
            goto LABEL_106;
          }
LABEL_94:
          v68 = thisa->m_Vectors.m_pOverflow.m_pHead;
          if ( v68 != 0 )
          {
            v69 = thisa->m_Vectors.m_pOverflow.m_pHead;
            while ( 1 )
            {
              p_m_storage = &v69->m_storage;
              v71 = 0;
              v72 = 0;
              while ( 1 )
              {
                v73 = _mm_movemask_ps(_mm_cmpeq_epi32(
                                        _mm_load_si128(&p_m_storage->m_fixedStorage.m_nFixedKeys[v72]),
                                        v46));
                if ( v73 != 0 )
                  break;
                v72 = v71 + 1;
                if ( v71 == 3 )
                  goto LABEL_100;
                ++v71;
              }
              v77 = g_nSIMDBitMaskToIndex[v73] + 4 * v71;
              if ( v77 != -1 )
                break;
LABEL_100:
              v69 = v69->m_pNext;
              if ( v69 == 0 )
                goto LABEL_101;
            }
LABEL_106:
            ++v6;
            ++v3;
            ++v4;
            p_x = &p_m_storage->m_fixedStorage.m_FixedValues[v77].x;
            *p_x = x;
            p_x[1] = y;
            p_x[2] = z;
            m_nCount = pKeyValues->m_keyHashes.m_nCount;
            if ( v6 >= m_nCount )
              return;
            continue;
          }
LABEL_101:
          v74 = 0;
          v75 = 0;
          while ( 1 )
          {
            v76 = _mm_movemask_ps(_mm_cmpeq_epi32(_mm_load_si128(&p_m_Vectors->m_fixedStorage.m_nFixedKeys[v75]), 0LL));
            if ( v76 != 0 )
              break;
            v75 = v74 + 1;
            if ( v74 == 3 )
              goto LABEL_172;
            ++v74;
          }
          v125 = g_nSIMDBitMaskToIndex[v76] + 4 * v74;
          if ( v125 != -1 )
          {
            v120 = p_m_Vectors;
LABEL_186:
            v124 = v125;
            v122 = &v120->m_fixedStorage.m_FixedValues[v125];
            goto LABEL_182;
          }
LABEL_172:
          if ( v68 != 0 )
          {
            while ( 2 )
            {
              v116 = 0;
              v117 = 0;
              while ( 1 )
              {
                v118 = _mm_movemask_ps(_mm_cmpeq_epi32(_mm_load_si128(&v68->m_storage.m_nFixedKeys[v117]), 0LL));
                if ( v118 != 0 )
                  break;
                v117 = v116 + 1;
                if ( v116 == 3 )
                  goto LABEL_177;
                ++v116;
              }
              v125 = g_nSIMDBitMaskToIndex[v118] + 4 * v116;
              if ( v125 != -1 )
              {
                v120 = &v68->m_storage;
                goto LABEL_186;
              }
LABEL_177:
              v68 = v68->m_pNext;
              if ( v68 != 0 )
                continue;
              break;
            }
          }
          v166 = x;
          v167 = z;
          v168 = y;
          v173 = v43;
          v119 = operator new(0x110u);
          v43 = v173;
          v120 = &v119[1];
          v121 = v119;
          y = v168;
          v122 = v119 + 5;
          memset(&v119[1], 0, 0x40u);
          z = v167;
          x = v166;
          if ( &v119[1] != &v119[5] )
          {
            v123 = v119 + 1;
            do
              *v123++ = Four_Zeros;
            while ( v122 != v123 );
          }
          v121->m_pNext = thisa->m_Vectors.m_pOverflow.m_pHead;
          thisa->m_Vectors.m_pOverflow.m_pHead = v121;
          v124 = 0;
LABEL_182:
          v120->m_fixedStorage.m_nFixedKeys[0].m_i32[v124] = v43;
          ++v6;
          ++v3;
          v122->m128_f32[0] = x;
          ++v4;
          v122->m128_f32[1] = y;
          v122->m128_f32[2] = z;
          m_nCount = pKeyValues->m_keyHashes.m_nCount;
          if ( v6 >= m_nCount )
            return;
          continue;
        case 5:
          v25 = &CEntityKeyValues::sm_EmptyVariant;
          if ( m_nCount > v6 )
          {
            if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
              v56 = pKeyValues->m_keyValues.m_pElements;
            else
              v56 = 0;
            v25 = &v56[v4].m_value;
            m_type = v25->m_type;
            if ( m_type == 1 )
            {
LABEL_62:
              m_float64 = v25->m_float;
              goto LABEL_23;
            }
          }
          else
          {
            m_type = CEntityKeyValues::sm_EmptyVariant.m_type;
            if ( m_type == 1 )
              goto LABEL_62;
          }
          if ( m_type == 34 )
            m_float64 = v25->m_float64;
          else
            m_float64 = v25->m_int;
LABEL_23:
          v28 = 0;
          if ( m_nCount > v6 )
          {
            v54 = pKeyValues->m_keyHashes.m_nAllocated;
            if ( v54 != 0 )
            {
              if ( v54 <= 9 )
                v55 = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
              else
                v55 = pKeyValues->m_keyHashes.m_pElements;
            }
            else
            {
              v55 = 0;
            }
            v28 = v55[v3];
          }
          v29 = 0;
          v30 = 0;
          v31 = _mm_shuffle_epi32(_mm_cvtsi32_si128(v28), 0);
          p_m_Ints = &thisa->m_Ints;
          while ( 1 )
          {
            v33 = _mm_movemask_ps(_mm_cmpeq_epi32(_mm_load_si128(&p_m_Ints->m_fixedStorage.m_nFixedKeys[v30]), v31));
            if ( v33 != 0 )
              break;
            v30 = v29 + 1;
            if ( v29 == 3 )
              goto LABEL_121;
            ++v29;
          }
          v87 = g_nSIMDBitMaskToIndex[v33] + 4 * v29;
          if ( v87 != -1 )
            goto LABEL_134;
LABEL_121:
          v88 = thisa->m_Ints.m_pOverflow.m_pHead;
          if ( v88 != 0 )
          {
            v89 = thisa->m_Ints.m_pOverflow.m_pHead;
            while ( 1 )
            {
              v90 = 0;
              v91 = 0;
              while ( 1 )
              {
                v92 = _mm_movemask_ps(_mm_cmpeq_epi32(_mm_load_si128(&v89->m_storage.m_nFixedKeys[v91]), v31));
                if ( v92 != 0 )
                  break;
                v91 = v90 + 1;
                if ( v90 == 3 )
                  goto LABEL_127;
                ++v90;
              }
              v87 = g_nSIMDBitMaskToIndex[v92] + 4 * v90;
              if ( v87 != -1 )
                break;
LABEL_127:
              v89 = v89->m_pNext;
              if ( v89 == 0 )
                goto LABEL_128;
            }
            p_m_Ints = &v89->m_storage;
LABEL_134:
            ++v6;
            ++v3;
            p_m_Ints->m_fixedStorage.m_FixedValues[v87] = m_float64;
            ++v4;
            m_nCount = pKeyValues->m_keyHashes.m_nCount;
            if ( v6 >= m_nCount )
              return;
          }
          else
          {
LABEL_128:
            v93 = 0;
            v94 = 0;
            while ( 1 )
            {
              v95 = _mm_movemask_ps(_mm_cmpeq_epi32(_mm_load_si128(&p_m_Ints->m_fixedStorage.m_nFixedKeys[v94]), 0LL));
              if ( v95 != 0 )
                break;
              v94 = v93 + 1;
              if ( v93 == 3 )
                goto LABEL_222;
              ++v93;
            }
            LODWORD(v148) = g_nSIMDBitMaskToIndex[v95] + 4 * v93;
            if ( v148 != -1 )
            {
LABEL_235:
              v148 = v148;
              v156 = v148;
              goto LABEL_232;
            }
LABEL_222:
            if ( v88 != 0 )
            {
              while ( 2 )
              {
                p_m_Ints = &v88->m_storage;
                v149 = 0;
                v150 = 0;
                while ( 1 )
                {
                  v151 = _mm_movemask_ps(_mm_cmpeq_epi32(
                                           _mm_load_si128(&p_m_Ints->m_fixedStorage.m_nFixedKeys[v150]),
                                           0LL));
                  if ( v151 != 0 )
                    break;
                  v150 = v149 + 1;
                  if ( v149 == 3 )
                    goto LABEL_227;
                  ++v149;
                }
                LODWORD(v148) = g_nSIMDBitMaskToIndex[v151] + 4 * v149;
                if ( v148 != -1 )
                  goto LABEL_235;
LABEL_227:
                v88 = v88->m_pNext;
                if ( v88 != 0 )
                  continue;
                break;
              }
            }
            v171 = v28;
            v175 = m_float64;
            v152 = operator new(0x90u);
            m_float64 = v175;
            p_m_Ints = &v152[1];
            v153 = v152;
            v28 = v171;
            memset(&v152[1], 0, 0x40u);
            v154 = v152 + 5;
            if ( &v152[1] != &v152[5] )
            {
              v155 = v152 + 1;
              do
                *v155++ = Four_Zeros;
              while ( v154 != v155 );
            }
            v153->m_pNext = thisa->m_Ints.m_pOverflow.m_pHead;
            v148 = 0;
            thisa->m_Ints.m_pOverflow.m_pHead = v153;
            v156 = 0;
LABEL_232:
            p_m_Ints->m_fixedStorage.m_nFixedKeys[0].m_i32[v156] = v28;
            ++v6;
            ++v3;
            p_m_Ints->m_fixedStorage.m_FixedValues[v148] = m_float64;
            ++v4;
            m_nCount = pKeyValues->m_keyHashes.m_nCount;
            if ( v6 >= m_nCount )
              return;
          }
          continue;
        case 9:
          if ( m_nCount > v6 )
          {
            if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
              v60 = pKeyValues->m_keyValues.m_pElements;
            else
              v60 = 0;
            m_int = v60[v4].m_value.m_int;
            v61 = pKeyValues->m_keyHashes.m_nAllocated;
            if ( v61 != 0 )
            {
              if ( v61 <= 9 )
                v62 = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
              else
                v62 = pKeyValues->m_keyHashes.m_pElements;
            }
            else
            {
              v62 = 0;
            }
            v20 = v62[v3];
          }
          else
          {
            m_int = CEntityKeyValues::sm_EmptyVariant.m_int;
            v20 = 0;
          }
          v21 = 0;
          v22 = 0;
          v23 = _mm_shuffle_epi32(_mm_cvtsi32_si128(v20), 0);
          while ( 2 )
          {
            v24 = _mm_movemask_ps(_mm_cmpeq_epi32(_mm_load_si128(&v177->m_fixedStorage.m_nFixedKeys[v22]), v23));
            if ( v24 != 0 )
            {
              v105 = g_nSIMDBitMaskToIndex[v24] + 4 * v21;
              if ( v105 != -1 )
              {
                v98 = v177;
                goto LABEL_148;
              }
            }
            else
            {
              v22 = v21 + 1;
              if ( v21 != 3 )
              {
                ++v21;
                continue;
              }
            }
            break;
          }
          v96 = thisa->m_Colors.m_pOverflow.m_pHead;
          if ( v96 != 0 )
          {
            v97 = thisa->m_Colors.m_pOverflow.m_pHead;
            while ( 1 )
            {
              v98 = &v97->m_storage;
              v99 = 0;
              v100 = 0;
              while ( 1 )
              {
                v101 = _mm_movemask_ps(_mm_cmpeq_epi32(_mm_load_si128(&v98->m_fixedStorage.m_nFixedKeys[v100]), v23));
                if ( v101 != 0 )
                  break;
                v100 = v99 + 1;
                if ( v99 == 3 )
                  goto LABEL_142;
                ++v99;
              }
              v105 = g_nSIMDBitMaskToIndex[v101] + 4 * v99;
              if ( v105 != -1 )
                break;
LABEL_142:
              v97 = v97->m_pNext;
              if ( v97 == 0 )
                goto LABEL_143;
            }
LABEL_148:
            ++v6;
            ++v3;
            v98->m_fixedStorage.m_FixedValues[v105] = m_int;
            ++v4;
            m_nCount = pKeyValues->m_keyHashes.m_nCount;
            if ( v6 >= m_nCount )
              return;
            continue;
          }
LABEL_143:
          v102 = 0;
          v103 = 0;
          while ( 1 )
          {
            v104 = _mm_movemask_ps(_mm_cmpeq_epi32(_mm_load_si128(&v177->m_fixedStorage.m_nFixedKeys[v103]), 0LL));
            if ( v104 != 0 )
              break;
            v103 = v102 + 1;
            if ( v102 == 3 )
              goto LABEL_204;
            ++v102;
          }
          v147 = g_nSIMDBitMaskToIndex[v104] + 4 * v102;
          if ( v147 != -1 )
          {
            v143 = v177;
LABEL_220:
            v146 = v147;
            v141 = (v143 + v146 * 4 + 64);
            goto LABEL_216;
          }
LABEL_204:
          if ( v96 != 0 )
          {
            while ( 2 )
            {
              v137 = 0;
              v138 = 0;
              while ( 1 )
              {
                v139 = _mm_movemask_ps(_mm_cmpeq_epi32(_mm_load_si128(&v96->m_storage.m_nFixedKeys[v138]), 0LL));
                if ( v139 != 0 )
                  break;
                v138 = v137 + 1;
                if ( v137 == 3 )
                  goto LABEL_209;
                ++v137;
              }
              v147 = g_nSIMDBitMaskToIndex[v139] + 4 * v137;
              if ( v147 != -1 )
              {
                v143 = &v96->m_storage;
                goto LABEL_220;
              }
LABEL_209:
              v96 = v96->m_pNext;
              if ( v96 != 0 )
                continue;
              break;
            }
          }
          v170 = m_int;
          v174 = v20;
          v140 = operator new(0x90u);
          v20 = v174;
          m_int = v170;
          v141 = (v140 + 80);
          v142 = v140;
          v143 = (v140 + 16);
          v144 = (v140 + 80);
          do
          {
            LODWORD(v144->m_pNext) = 0;
            v144 = (v144 + 4);
          }
          while ( v144 != &v142[1] );
          memset(v143, 0, 0x40u);
          if ( v143 != v141 )
          {
            v145 = v143;
            do
              *v145++ = Four_Zeros;
            while ( v141 != v145 );
          }
          v146 = 0;
          v142->m_pNext = thisa->m_Colors.m_pOverflow.m_pHead;
          thisa->m_Colors.m_pOverflow.m_pHead = v142;
LABEL_216:
          v143->m128_i32[v146] = v20;
          ++v6;
          ++v3;
          v141->m128_i32[0] = m_int;
          ++v4;
          m_nCount = pKeyValues->m_keyHashes.m_nCount;
          if ( v6 >= m_nCount )
            return;
          break;
        case 0x1E:
          v11 = &CEntityKeyValues::sm_EmptyVariant;
          if ( m_nCount > v6 )
          {
            if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
              v53 = pKeyValues->m_keyValues.m_pElements;
            else
              v53 = 0;
            v11 = &v53[v4].m_value;
          }
          if ( v11->m_type == 30 )
          {
            v12 = v11->m_uint64;
          }
          else
          {
            CVariantBase<CEntityVariantAllocator>::AssignTo(
              v11,
              &CVariantBase<CEntityVariantAllocator>::ToString(void)const::szBuf,
              0x200u);
            v12 = &CVariantBase<CEntityVariantAllocator>::ToString(void)const::szBuf;
          }
          AllocPooledString(v12);
          v13 = 0;
          m_Id = pString.u.m_Id;
          if ( v6 < pKeyValues->m_keyHashes.m_nCount )
          {
            v63 = pKeyValues->m_keyHashes.m_nAllocated;
            if ( v63 != 0 )
            {
              if ( v63 <= 9 )
                v64 = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
              else
                v64 = pKeyValues->m_keyHashes.m_pElements;
            }
            else
            {
              v64 = 0;
            }
            v13 = v64[v3];
          }
          v15 = 0;
          v16 = 0;
          v17 = _mm_shuffle_epi32(_mm_cvtsi32_si128(v13), 0);
          while ( 2 )
          {
            v18 = _mm_movemask_ps(_mm_cmpeq_epi32(_mm_load_si128(&p_m_Strings->m_fixedStorage.m_nFixedKeys[v16]), v17));
            if ( v18 != 0 )
            {
              v115 = g_nSIMDBitMaskToIndex[v18] + 4 * v15;
              if ( v115 != -1 )
              {
                v108 = p_m_Strings;
                goto LABEL_162;
              }
            }
            else
            {
              v16 = v15 + 1;
              if ( v15 != 3 )
              {
                ++v15;
                continue;
              }
            }
            break;
          }
          v106 = thisa->m_Strings.m_pOverflow.m_pHead;
          if ( v106 != 0 )
          {
            v107 = thisa->m_Strings.m_pOverflow.m_pHead;
            while ( 1 )
            {
              v108 = &v107->m_storage;
              v109 = 0;
              v110 = 0;
              while ( 1 )
              {
                v111 = _mm_movemask_ps(_mm_cmpeq_epi32(_mm_load_si128(&v108->m_fixedStorage.m_nFixedKeys[v110]), v17));
                if ( v111 != 0 )
                  break;
                v110 = v109 + 1;
                if ( v109 == 3 )
                  goto LABEL_156;
                ++v109;
              }
              v115 = g_nSIMDBitMaskToIndex[v111] + 4 * v109;
              if ( v115 != -1 )
                break;
LABEL_156:
              v107 = v107->m_pNext;
              if ( v107 == 0 )
                goto LABEL_157;
            }
LABEL_162:
            ++v6;
            ++v3;
            v108->m_fixedStorage.m_FixedValues[v115] = pString;
            ++v4;
            m_nCount = pKeyValues->m_keyHashes.m_nCount;
            if ( v6 >= m_nCount )
              return;
            continue;
          }
LABEL_157:
          v112 = 0;
          v113 = 0;
          while ( 1 )
          {
            v114 = _mm_movemask_ps(_mm_cmpeq_epi32(_mm_load_si128(&p_m_Strings->m_fixedStorage.m_nFixedKeys[v113]), 0LL));
            if ( v114 != 0 )
              break;
            v113 = v112 + 1;
            if ( v112 == 3 )
              goto LABEL_187;
            ++v112;
          }
          v136 = g_nSIMDBitMaskToIndex[v114] + 4 * v112;
          if ( v136 != -1 )
          {
            v132 = p_m_Strings;
LABEL_203:
            v135 = v136;
            v130 = (v132 + 8 * v136 + 64);
            goto LABEL_199;
          }
LABEL_187:
          if ( v106 != 0 )
          {
            while ( 2 )
            {
              v126 = 0;
              v127 = 0;
              while ( 1 )
              {
                v128 = _mm_movemask_ps(_mm_cmpeq_epi32(_mm_load_si128(&v106->m_storage.m_nFixedKeys[v127]), 0LL));
                if ( v128 != 0 )
                  break;
                v127 = v126 + 1;
                if ( v126 == 3 )
                  goto LABEL_192;
                ++v126;
              }
              v136 = g_nSIMDBitMaskToIndex[v128] + 4 * v126;
              if ( v136 != -1 )
              {
                v132 = &v106->m_storage;
                goto LABEL_203;
              }
LABEL_192:
              v106 = v106->m_pNext;
              if ( v106 != 0 )
                continue;
              break;
            }
          }
          v169 = v13;
          v129 = operator new(0xD0u);
          m_Id = pString.u.m_Id;
          v13 = v169;
          v130 = (v129 + 10);
          v131 = v129;
          v132 = (v129 + 2);
          v133 = (v129 + 10);
          do
          {
            v133->m_pNext = 0;
            v133 = (v133 + 8);
          }
          while ( v133 != &v131[1] );
          memset(v132, 0, 0x40u);
          if ( v132 != v130 )
          {
            v134 = v132;
            do
              *v134++ = Four_Zeros;
            while ( v130 != v134 );
          }
          v135 = 0;
          v131->m_pNext = thisa->m_Strings.m_pOverflow.m_pHead;
          thisa->m_Strings.m_pOverflow.m_pHead = v131;
LABEL_199:
          v132->m128_i32[v135] = v13;
          ++v6;
          ++v3;
          v130->m128_u64[0] = m_Id;
          ++v4;
          m_nCount = pKeyValues->m_keyHashes.m_nCount;
          if ( v6 >= m_nCount )
            return;
          continue;
        default:
LABEL_46:
          ++v6;
          ++v3;
          ++v4;
          if ( v6 >= m_nCount )
            return;
          continue;
      }
    }
  }
}


// CInfoData::QueryFloat  (line 41, @0x0000000001fe84e0, libserver.so)  // inlines: CUtlSymbolLarge, CmpEqSIMD<(ESIMDLevel)20u>, FindIndexOfMatch, GetValue, Head, ReplicateIX4<(ESIMDLevel)20u>, String, TestSignSIMD<(ESIMDLevel)20u>, ToCStr, _mm_cmpeq_epi32, _mm_movemask_ps, _mm_set1_epi32, _mm_set_epi32, begin, operator++
// calls: CUtlAttributeList<CUtlSymbolLarge, 16, CUtlSymbolLarge>::GetValue, V_atof
float __fastcall CInfoData::QueryFloat(CInfoData *const this, unsigned int a2, float a3, float flDefault)
{
  const __m128i *p_m_Floats; // r9
  __m128i v5; // xmm2
  int v6; // eax
  const __m128i *v7; // rcx
  const __m128i *v8; // rdx
  int v9; // esi
  const __m128i *v10; // rsi
  int v11; // eax
  float result; // xmm0_4
  _QWORD *i; // r8
  __int64 v14; // rdx
  __int64 v15; // rax
  int v16; // eax
  bool Value; // al
  const char *m_pAsString; // rdi
  CUtlStringToken toka; // [rsp+0h] [rbp-28h] BYREF
  float flDefaulta; // [rsp+Ch] [rbp-1Ch]
  string_t str; // [rsp+10h] [rbp-18h] BYREF

  p_m_Floats = &this->m_Floats;
  v5 = _mm_shuffle_epi32(_mm_cvtsi32_si128(a2), 0);
  toka.m_nHashCode = a2;
  do
  {
    v6 = 0;
    v7 = p_m_Floats;
    v8 = p_m_Floats + 1;
    v9 = _mm_movemask_ps(_mm_cmpeq_epi32(_mm_load_si128(p_m_Floats), v5));
    if ( v9 != 0 )
    {
LABEL_5:
      v11 = g_nSIMDBitMaskToIndex[v9] + 4 * v6;
      if ( v11 != -1 )
        return *&v7[4].m128i_i32[v11];
    }
    else
    {
      while ( ++v6 != 4 )
      {
        v10 = v8++;
        v9 = _mm_movemask_ps(_mm_cmpeq_epi32(_mm_load_si128(v10), v5));
        if ( v9 != 0 )
          goto LABEL_5;
      }
    }
    for ( i = p_m_Floats[8].m128i_i64[1]; i != 0; i = *i )
    {
      v7 = (i + 2);
      v14 = 0;
      v15 = 0;
      while ( 1 )
      {
        v16 = _mm_movemask_ps(_mm_cmpeq_epi32(_mm_load_si128(&v7[v15]), v5));
        if ( v16 != 0 )
          break;
        v15 = v14 + 1;
        if ( v14 == 3 )
          goto LABEL_14;
        ++v14;
      }
      v11 = g_nSIMDBitMaskToIndex[v16] + 4 * v14;
      if ( v11 != -1 )
        return *&v7[4].m128i_i32[v11];
LABEL_14:
      ;
    }
    p_m_Floats = p_m_Floats[8].m128i_i64[0];
  }
  while ( p_m_Floats != 0 );
  flDefaulta = a3;
  str.u.m_Id = 0;
  Value = CUtlAttributeList<CUtlSymbolLarge,16,CUtlSymbolLarge>::GetValue(&this->m_Strings, &str, &toka);
  result = flDefaulta;
  if ( Value )
  {
    m_pAsString = "";
    if ( str.u.m_Id != 0 )
      m_pAsString = str.u.m_pAsString;
    return V_atof(m_pAsString);
  }
  return result;
}


// CInfoData::QueryInt  (line 59, @0x0000000001fe8620, libserver.so)  // inlines: CUtlSymbolLarge, CmpEqSIMD<(ESIMDLevel)20u>, FindIndexOfMatch, GetValue, Head, ReplicateIX4<(ESIMDLevel)20u>, String, TestSignSIMD<(ESIMDLevel)20u>, ToCStr, _mm_cmpeq_epi32, _mm_movemask_ps, _mm_set1_epi32, _mm_set_epi32, begin, operator++
// calls: CUtlAttributeList<CUtlSymbolLarge, 16, CUtlSymbolLarge>::GetValue, V_atoi
__int64 __fastcall CInfoData::QueryInt(CInfoData *const this, uint32 a2, unsigned int nDefault)
{
  const __m128i *p_m_Ints; // r10
  __m128i v5; // xmm1
  int v6; // eax
  const __m128i *v7; // rsi
  const __m128i *v8; // rcx
  int v9; // edx
  const __m128i *v10; // rdx
  int v11; // eax
  _QWORD *i; // r9
  __int64 v14; // rcx
  __int64 v15; // rax
  int v16; // eax
  const char *m_pAsString; // rdi
  CUtlStringToken toka; // [rsp+0h] [rbp-38h] BYREF
  string_t str; // [rsp+10h] [rbp-28h] BYREF

  p_m_Ints = &this->m_Ints;
  toka.m_nHashCode = a2;
  v5 = _mm_shuffle_epi32(_mm_cvtsi32_si128(a2), 0);
  do
  {
    v6 = 0;
    v7 = p_m_Ints;
    v8 = p_m_Ints + 1;
    v9 = _mm_movemask_ps(_mm_cmpeq_epi32(_mm_load_si128(p_m_Ints), v5));
    if ( v9 != 0 )
    {
LABEL_5:
      v11 = g_nSIMDBitMaskToIndex[v9] + 4 * v6;
      if ( v11 != -1 )
        return v7[4].m128i_u32[v11];
    }
    else
    {
      while ( ++v6 != 4 )
      {
        v10 = v8++;
        v9 = _mm_movemask_ps(_mm_cmpeq_epi32(_mm_load_si128(v10), v5));
        if ( v9 != 0 )
          goto LABEL_5;
      }
    }
    for ( i = p_m_Ints[8].m128i_i64[1]; i != 0; i = *i )
    {
      v7 = (i + 2);
      v14 = 0;
      v15 = 0;
      while ( 1 )
      {
        v16 = _mm_movemask_ps(_mm_cmpeq_epi32(_mm_load_si128(&v7[v15]), v5));
        if ( v16 != 0 )
          break;
        v15 = v14 + 1;
        if ( v14 == 3 )
          goto LABEL_13;
        ++v14;
      }
      v11 = g_nSIMDBitMaskToIndex[v16] + 4 * v14;
      if ( v11 != -1 )
        return v7[4].m128i_u32[v11];
LABEL_13:
      ;
    }
    p_m_Ints = p_m_Ints[8].m128i_i64[0];
  }
  while ( p_m_Ints != 0 );
  str.u.m_Id = 0;
  if ( !CUtlAttributeList<CUtlSymbolLarge,16,CUtlSymbolLarge>::GetValue(&this->m_Strings, &str, &toka) )
    return nDefault;
  m_pAsString = "";
  if ( str.u.m_Id != 0 )
    m_pAsString = str.u.m_pAsString;
  return V_atoi(m_pAsString);
}


// CInfoData::QueryNumber  (line 77, @0x0000000001fe8760, libserver.so)  // inlines: CUtlSymbolLarge, CmpEqSIMD<(ESIMDLevel)20u>, FindIndexOfMatch, GetValue, Head, ReplicateIX4<(ESIMDLevel)20u>, String, TestSignSIMD<(ESIMDLevel)20u>, ToCStr, _mm_cmpeq_epi32, _mm_movemask_ps, _mm_set1_epi32, _mm_set_epi32, begin, operator++
// calls: CUtlAttributeList<CUtlSymbolLarge, 16, CUtlSymbolLarge>::GetValue, V_atof
// local variable allocation has failed, the output may be wrong!
float __fastcall CInfoData::QueryNumber(CInfoData *const this, unsigned int a2, float a3, float flDefault)
{
  const __m128i *p_m_Floats; // r9
  __m128i v5; // xmm2
  int v6; // eax
  const __m128i *v7; // rcx
  const __m128i *v8; // rdx
  int v9; // esi
  const __m128i *v10; // rsi
  int v11; // eax
  float result; // xmm0_4
  _QWORD *i; // r8
  __int64 v14; // rdx
  __int64 v15; // rax
  int v16; // eax
  const __m128i *p_m_Ints; // r9
  CUtlAttributeList<int,16,int> *j; // rcx
  const __m128i *v19; // rdx
  int v20; // eax
  int v21; // esi
  const __m128i *v22; // rsi
  int v23; // eax
  _QWORD *k; // r8
  __int64 v25; // rdx
  __int64 v26; // rax
  int v27; // eax
  bool Value; // al
  const char *m_pAsString; // rdi
  CUtlStringToken v30; // [rsp-8h] [rbp-28h] BYREF
  float v31; // [rsp+4h] [rbp-1Ch]
  CUtlSymbolLarge v32; // [rsp+8h] [rbp-18h] OVERLAPPED BYREF

  p_m_Floats = &this->m_Floats;
  v5 = _mm_shuffle_epi32(_mm_cvtsi32_si128(a2), 0);
  v30.m_nHashCode = a2;
  do
  {
    v6 = 0;
    v7 = p_m_Floats;
    v8 = p_m_Floats + 1;
    v9 = _mm_movemask_ps(_mm_cmpeq_epi32(_mm_load_si128(p_m_Floats), v5));
    if ( v9 != 0 )
    {
LABEL_5:
      v11 = g_nSIMDBitMaskToIndex[v9] + 4 * v6;
      if ( v11 != -1 )
        return *&v7[4].m128i_i32[v11];
    }
    else
    {
      while ( ++v6 != 4 )
      {
        v10 = v8++;
        v9 = _mm_movemask_ps(_mm_cmpeq_epi32(_mm_load_si128(v10), v5));
        if ( v9 != 0 )
          goto LABEL_5;
      }
    }
    for ( i = p_m_Floats[8].m128i_i64[1]; i != 0; i = *i )
    {
      v7 = (i + 2);
      v14 = 0;
      v15 = 0;
      while ( 1 )
      {
        v16 = _mm_movemask_ps(_mm_cmpeq_epi32(_mm_load_si128(&v7[v15]), v5));
        if ( v16 != 0 )
          break;
        v15 = v14 + 1;
        if ( v14 == 3 )
          goto LABEL_14;
        ++v14;
      }
      v11 = g_nSIMDBitMaskToIndex[v16] + 4 * v14;
      if ( v11 != -1 )
        return *&v7[4].m128i_i32[v11];
LABEL_14:
      ;
    }
    p_m_Floats = p_m_Floats[8].m128i_i64[0];
  }
  while ( p_m_Floats != 0 );
  p_m_Ints = &this->m_Ints;
  for ( j = &this->m_Ints; ; j = p_m_Ints )
  {
    v19 = p_m_Ints + 1;
    v20 = 0;
    v21 = _mm_movemask_ps(_mm_cmpeq_epi32(_mm_load_si128(p_m_Ints), v5));
    if ( v21 != 0 )
    {
LABEL_20:
      v23 = g_nSIMDBitMaskToIndex[v21] + 4 * v20;
      if ( v23 != -1 )
        return j->m_fixedStorage.m_FixedValues[v23];
    }
    else
    {
      while ( ++v20 != 4 )
      {
        v22 = v19++;
        v21 = _mm_movemask_ps(_mm_cmpeq_epi32(_mm_load_si128(v22), v5));
        if ( v21 != 0 )
          goto LABEL_20;
      }
    }
    for ( k = p_m_Ints[8].m128i_i64[1]; k != 0; k = *k )
    {
      j = (k + 2);
      v25 = 0;
      v26 = 0;
      while ( 1 )
      {
        v27 = _mm_movemask_ps(_mm_cmpeq_epi32(_mm_load_si128(&j->m_fixedStorage.m_nFixedKeys[v26]), v5));
        if ( v27 != 0 )
          break;
        v26 = v25 + 1;
        if ( v25 == 3 )
          goto LABEL_28;
        ++v25;
      }
      v23 = g_nSIMDBitMaskToIndex[v27] + 4 * v25;
      if ( v23 != -1 )
        return j->m_fixedStorage.m_FixedValues[v23];
LABEL_28:
      ;
    }
    p_m_Ints = p_m_Ints[8].m128i_i64[0];
    if ( p_m_Ints == 0 )
      break;
  }
  v31 = a3;
  v32.u.m_Id = 0;
  Value = CUtlAttributeList<CUtlSymbolLarge,16,CUtlSymbolLarge>::GetValue(&this->m_Strings, &v32, &v30);
  result = v31;
  if ( Value )
  {
    m_pAsString = "";
    if ( v32.u.m_Id != 0 )
      m_pAsString = v32.u.m_pAsString;
    return V_atof(m_pAsString);
  }
  return result;
}


// CInfoData::QueryColor  (line 101, @0x0000000001fe1ff0, libserver.so)  // inlines: CmpEqSIMD<(ESIMDLevel)20u>, Color, FindIndexOfMatch, GetValueOrDefault, Head, ReplicateIX4<(ESIMDLevel)20u>, SetColor, SetRawColor, TestSignSIMD<(ESIMDLevel)20u>, _mm_cmpeq_epi32, _mm_movemask_ps, _mm_set1_epi32, _mm_set_epi32, begin, operator++, operator=
// calls: SRGBColorToLinearColor, __stack_chk_fail
// local variable allocation has failed, the output may be wrong!
Vector __fastcall CInfoData::QueryColor(CInfoData *const this, CUtlStringToken tok, const Vector *const vDefault)
{
  const __m128i *p_m_Colors; // r8
  __m128i v4; // xmm1
  Color v5; // r9d
  int v6; // eax
  const __m128i *v7; // rcx
  const __m128i *v8; // rdx
  int v9; // esi
  const __m128i *v10; // rsi
  int v11; // eax
  _QWORD *i; // rdi
  __int64 v13; // rdx
  __int64 v14; // rax
  int v15; // eax
  Color v18; // [rsp-8h] [rbp-18h] BYREF
  unsigned __int64 color; // [rsp+0h] [rbp-10h] OVERLAPPED
  Vector v20; // 0:kr00_12.12
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  p_m_Colors = &this->m_Colors;
  v4 = _mm_shuffle_epi32(_mm_cvtsi32_si128(tok.m_nHashCode), 0);
  color = __readfsqword(0x28u);
  v18._color[0] = 0;
  v18._color[1] = 0;
  v18._color[2] = 0;
  v18._color[3] = 0;
  v5 = 0;
  while ( 1 )
  {
    v6 = 0;
    v7 = p_m_Colors;
    v8 = p_m_Colors + 1;
    v9 = _mm_movemask_ps(_mm_cmpeq_epi32(_mm_load_si128(p_m_Colors), v4));
    if ( v9 == 0 )
    {
      while ( ++v6 != 4 )
      {
        v10 = v8++;
        v9 = _mm_movemask_ps(_mm_cmpeq_epi32(_mm_load_si128(v10), v4));
        if ( v9 != 0 )
          goto LABEL_5;
      }
      goto LABEL_8;
    }
LABEL_5:
    v11 = g_nSIMDBitMaskToIndex[v9] + 4 * v6;
    if ( v11 != -1 )
      break;
LABEL_8:
    for ( i = p_m_Colors[8].m128i_i64[1]; i != 0; i = *i )
    {
      v7 = (i + 2);
      v13 = 0;
      v14 = 0;
      while ( 1 )
      {
        v15 = _mm_movemask_ps(_mm_cmpeq_epi32(_mm_load_si128(&v7[v14]), v4));
        if ( v15 != 0 )
          break;
        v14 = v13 + 1;
        if ( v13 == 3 )
          goto LABEL_14;
        ++v13;
      }
      v11 = g_nSIMDBitMaskToIndex[v15] + 4 * v13;
      if ( v11 != -1 )
        goto LABEL_6;
LABEL_14:
      ;
    }
    p_m_Colors = p_m_Colors[8].m128i_i64[0];
    if ( p_m_Colors == 0 )
      goto LABEL_7;
  }
LABEL_6:
  v5 = v7[4].m128i_i32[v11];
LABEL_7:
  v18 = v5;
  v20 = SRGBColorToLinearColor(&v18);
  *&result.x = *&v20.x;
  result.z = v20.z;
  return result;
}


// CInfoData::QueryVector  (line 111, @0x0000000001fe1ec0, libserver.so)  // inlines: CmpEqSIMD<(ESIMDLevel)20u>, FindIndexOfMatch, GetValueOrDefault, Head, ReplicateIX4<(ESIMDLevel)20u>, TestSignSIMD<(ESIMDLevel)20u>, _mm_cmpeq_epi32, _mm_movemask_ps, _mm_set1_epi32, _mm_set_epi32, begin, operator++
Vector __fastcall CInfoData::QueryVector(CInfoData *const this, CUtlStringToken tok, const Vector *const vDefault)
{
  const __m128i *p_m_Vectors; // r8
  __m128i v4; // xmm2
  vec_t x; // xmm3_4
  vec_t y; // xmm4_4
  int v8; // eax
  const __m128i *v9; // rcx
  const __m128i *v10; // rdx
  int v11; // esi
  const __m128i *v12; // rsi
  int v13; // eax
  __int64 v14; // rax
  vec_t v15; // xmm2_4
  vec_t v16; // xmm0_4
  _QWORD *i; // rdi
  __int64 v19; // rdx
  __int64 v20; // rax
  int v21; // eax
  __int64 v22; // [rsp+0h] [rbp-8h]
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  p_m_Vectors = &this->m_Vectors;
  v4 = _mm_shuffle_epi32(_mm_cvtsi32_si128(tok.m_nHashCode), 0);
  x = vDefault->x;
  y = vDefault->y;
  result.z = vDefault->z;
  do
  {
    v8 = 0;
    v9 = p_m_Vectors;
    v10 = p_m_Vectors + 1;
    v11 = _mm_movemask_ps(_mm_cmpeq_epi32(_mm_load_si128(p_m_Vectors), v4));
    if ( v11 != 0 )
    {
LABEL_5:
      v13 = g_nSIMDBitMaskToIndex[v11] + 4 * v8;
      if ( v13 != -1 )
      {
LABEL_6:
        v14 = v9[4].m128i_i64 + 12 * v13;
        v15 = *v14;
        v16 = *(v14 + 4);
        result.z = *(v14 + 8);
        goto LABEL_7;
      }
    }
    else
    {
      while ( ++v8 != 4 )
      {
        v12 = v10++;
        v11 = _mm_movemask_ps(_mm_cmpeq_epi32(_mm_load_si128(v12), v4));
        if ( v11 != 0 )
          goto LABEL_5;
      }
    }
    for ( i = p_m_Vectors[16].m128i_i64[1]; i != 0; i = *i )
    {
      v9 = (i + 2);
      v19 = 0;
      v20 = 0;
      while ( 1 )
      {
        v21 = _mm_movemask_ps(_mm_cmpeq_epi32(_mm_load_si128(&v9[v20]), v4));
        if ( v21 != 0 )
          break;
        v20 = v19 + 1;
        if ( v19 == 3 )
          goto LABEL_14;
        ++v19;
      }
      v13 = g_nSIMDBitMaskToIndex[v21] + 4 * v19;
      if ( v13 != -1 )
        goto LABEL_6;
LABEL_14:
      ;
    }
    p_m_Vectors = p_m_Vectors[16].m128i_i64[0];
  }
  while ( p_m_Vectors != 0 );
  v16 = y;
  v15 = x;
LABEL_7:
  *(&v22 - 4) = v15;
  *(&v22 - 3) = v16;
  *&result.x = *(&v22 - 2);
  return result;
}


// CInfoData::QueryString  (line 117, @0x0000000001fe3200, libserver.so)  // inlines: CmpEqSIMD<(ESIMDLevel)20u>, FindIndexOfMatch, GetValue, Head, ReplicateIX4<(ESIMDLevel)20u>, String, TestSignSIMD<(ESIMDLevel)20u>, ToCStr, _mm_cmpeq_epi32, _mm_movemask_ps, _mm_set1_epi32, _mm_set_epi32, begin, operator++, operator=
const char *__fastcall CInfoData::QueryString(CInfoData *const this, CUtlStringToken tok, const char *pDefault)
{
  const __m128i *p_m_Strings; // r9
  __m128i v4; // xmm1
  int v5; // eax
  const __m128i *v6; // rsi
  const __m128i *v7; // rcx
  int v8; // edi
  const __m128i *v9; // rdi
  int v10; // eax
  const char *v11; // rdx
  const char *result; // rax
  _QWORD *i; // r8
  __int64 v14; // rcx
  __int64 v15; // rax
  int v16; // eax

  p_m_Strings = &this->m_Strings;
  v4 = _mm_shuffle_epi32(_mm_cvtsi32_si128(tok.m_nHashCode), 0);
  while ( 1 )
  {
    v5 = 0;
    v6 = p_m_Strings;
    v7 = p_m_Strings + 1;
    v8 = _mm_movemask_ps(_mm_cmpeq_epi32(_mm_load_si128(p_m_Strings), v4));
    if ( v8 == 0 )
    {
      while ( ++v5 != 4 )
      {
        v9 = v7++;
        v8 = _mm_movemask_ps(_mm_cmpeq_epi32(_mm_load_si128(v9), v4));
        if ( v8 != 0 )
          goto LABEL_5;
      }
      goto LABEL_9;
    }
LABEL_5:
    v10 = g_nSIMDBitMaskToIndex[v8] + 4 * v5;
    if ( v10 != -1 )
      break;
LABEL_9:
    for ( i = p_m_Strings[12].m128i_i64[1]; i != 0; i = *i )
    {
      v6 = (i + 2);
      v14 = 0;
      v15 = 0;
      while ( 1 )
      {
        v16 = _mm_movemask_ps(_mm_cmpeq_epi32(_mm_load_si128(&v6[v15]), v4));
        if ( v16 != 0 )
          break;
        v15 = v14 + 1;
        if ( v14 == 3 )
          goto LABEL_15;
        ++v14;
      }
      v10 = g_nSIMDBitMaskToIndex[v16] + 4 * v14;
      if ( v10 != -1 )
        goto LABEL_6;
LABEL_15:
      ;
    }
    p_m_Strings = p_m_Strings[12].m128i_i64[0];
    if ( p_m_Strings == 0 )
      return pDefault;
  }
LABEL_6:
  v11 = v6[4].m128i_i64[v10];
  result = "";
  if ( v11 != 0 )
    return v11;
  return result;
}


