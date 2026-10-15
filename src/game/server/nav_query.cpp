// Reconstructed from DWARF by pahole; not original source.

// src/game/server/nav_query.cpp:220
class ClusterMarker {
	float m_flCurrentClusterMaxArea;  // +0x8014
	float m_flCurrentClusterArea;  // +0x8018
	float m_flTotalArea;  // +0x801c
	float m_flTotalWeightedArea;  // +0x8020
	float m_flTotalMaxArea;  // +0x8024
	float m_flTotalMaxWeighteArea;  // +0x8028
	bool m_bLimitReached;  // +0x802c

	const CNavVolume * m_pNavVolume;  // +0x8030
	function<bool(const CNavArea&)> m_funcValidArea;  // +0x8038
	function<float(const CNavArea&)> m_funcAreaProb;  // +0x8058
	ClusterMarker(CNavMesh &, NavHull_t);
	~ClusterMarker();
	void SetVolumeRestriction(const CNavVolume *);
	void SetAreaLimits(float, float);
	void AddCluster(CNavArea &, float);
	bool IsMarked(const CNavArea &);
	NavSearchAreaResult_t operator()(CNavArea &, NavSearchAreaInfo_t *);

	// sizeof = 32888
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CNavQuery::GetRandomElementInWeightedVector  (line 25, @0x0000000002ee53f0, libserver.so)
// calls: RandomFloat
// callers: CNavQuery::SelectRandomNavAreasAtDensityInClustersOverVolume
__int64 __fastcall CNavQuery::GetRandomElementInWeightedVector(
        const NavAreaWeightVector_t *const rWeights,
        float a2,
        float flTotalWeight)
{
  float v4; // xmm0_4
  int m_Size; // ecx
  float *m_pMemory; // rdx
  float v7; // xmm1_4
  float *v8; // rdx
  __int64 result; // rax

  result = 0xFFFFFFFFLL;
  if ( a2 != 0.0 )
  {
    v4 = RandomFloat(0.0, a2);
    m_Size = rWeights->m_Size;
    if ( rWeights->m_Size > 0 )
    {
      m_pMemory = rWeights->m_Memory.m_pMemory;
      v7 = *m_pMemory + 0.0;
      if ( v7 > v4 )
        return 0;
      v8 = m_pMemory + 1;
      LODWORD(result) = 0;
      while ( 1 )
      {
        result = (result + 1);
        if ( result == m_Size )
          break;
        v7 = v7 + *v8++;
        if ( v7 > v4 )
          return result;
      }
    }
    return (m_Size - 1);
  }
  return result;
}


// CNavQuery::SelectRandomNavAreasAtDensity  (line 49, @0x0000000002efcb60, libserver.so)
// calls: CNavQuery::SelectRandomNavAreas
__int64 __fastcall CNavQuery::SelectRandomNavAreasAtDensity(
        float flDensity,
        const NavAreaVector *const vecNavAreas,
        const NavAreaWeightVector_t *const vecNavAreaWeights,
        float flTotalWeight,
        FuncNavAreaSelect_t *const rFuncSelectArea)
{
  unsigned int v5; // eax

  v5 = ((flDensity * flTotalWeight) + 0.5);
  if ( v5 != 0 )
    return CNavQuery::SelectRandomNavAreas(v5, vecNavAreas, vecNavAreaWeights, flTotalWeight, rFuncSelectArea);
  else
    return 0;
}


// CNavQuery::SelectRandomNavAreasAtDensity  (line 68, @0x0000000002efcba0, libserver.so)  // inlines: AddMultipleToTail, CUtlMemory, CUtlMemoryFixedGrowable, CUtlMemoryFixedGrowable_Base, CUtlVectorBase, CUtlVectorFixedGrowable, ConvertToExternalMemory, EnsureCount, GrowMemory, GrowVector, InsertMultipleBefore, Max<float>, Purge, Purge_FixedGrowable, RemoveAll, SelectRandomNavAreasAtDensity, ~CUtlMemory, ~CUtlMemoryFixedGrowable, ~CUtlMemoryFixedGrowable_Base, ~CUtlVectorBase, ~CUtlVectorFixedGrowable
// calls: std::function<float(const CNavArea&)>::operator(), CNavQuery::SelectRandomNavAreas, CUtlMemory<float, int>::Purge, CUtlMemory<float, int>::Grow, __stack_chk_fail, CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 512ul, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CNavQuery::SelectRandomNavAreasAtDensityOverVolume
__int64 __fastcall CNavQuery::SelectRandomNavAreasAtDensity(
        float flDensity,
        const NavAreaVector *const vecNavAreas,
        FuncNavAreaWeight_t *const rFuncAreaWeight,
        FuncNavAreaSelect_t *const rFuncSelectArea)
{
  __int64 result; // rax
  int m_Size; // ebx
  int v8; // eax
  unsigned __int64 v9; // rbx
  __int64 v10; // r14
  __m128 v11; // xmm0
  float v12; // xmm1_4
  unsigned int v13; // edi
  unsigned int v14; // edx
  float rFuncSelectArea_4; // [rsp+4h] [rbp-85Ch]
  unsigned int rFuncSelectArea_4a; // [rsp+4h] [rbp-85Ch]
  unsigned int rFuncSelectArea_4b; // [rsp+4h] [rbp-85Ch]
  int flDensitya; // [rsp+8h] [rbp-858h] BYREF
  NavAreaWeightVector_t vecNavAreaWeights; // [rsp+10h] [rbp-850h] BYREF

  *&vecNavAreaWeights.m_Memory.m_FixedMemory.m_Data[2040] = __readfsqword(0x28u);
  result = 0;
  if ( flDensity != 0.0 )
  {
    m_Size = vecNavAreas->m_Size;
    flDensitya = 0;
    vecNavAreaWeights.m_Memory.m_pMemory = 0x8000000000000200LL;
    *&vecNavAreaWeights.m_Size = &vecNavAreaWeights.m_Memory.m_nAllocationCount;
    v8 = m_Size;
    if ( m_Size > 0 )
    {
      if ( m_Size > 512 )
      {
        CUtlMemory<float,int>::Grow(&vecNavAreaWeights, m_Size - 512);
        v8 = vecNavAreas->m_Size;
      }
      flDensitya = m_Size;
    }
    if ( v8 != 0 )
    {
      rFuncSelectArea_4 = 0.0;
      v9 = 0;
      v10 = 4LL * (v8 - 1) + 4;
      do
      {
        v11.m128_f32[0] = std::function<float ()(CNavArea const&)>::operator()(
                            rFuncAreaWeight,
                            vecNavAreas->m_Memory.m_pMemory[v9 / 4]);
        v12 = _mm_andnot_ps(_mm_cmplt_ss(v11, 0LL), v11).m128_f32[0];
        *(*&vecNavAreaWeights.m_Size + v9) = v12;
        v9 += 4LL;
        rFuncSelectArea_4 = v12 + rFuncSelectArea_4;
      }
      while ( v9 != v10 );
    }
    else
    {
      rFuncSelectArea_4 = 0.0;
    }
    v13 = ((flDensity * rFuncSelectArea_4) + 0.5);
    if ( v13 != 0 )
      result = CNavQuery::SelectRandomNavAreas(v13, vecNavAreas, &flDensitya, rFuncSelectArea_4, rFuncSelectArea);
    else
      result = 0;
    flDensitya = 0;
    v14 = HIDWORD(vecNavAreaWeights.m_Memory.m_pMemory) & 0xC0000000;
    if ( SLODWORD(vecNavAreaWeights.m_Memory.m_pMemory) < 0
      || *&vecNavAreaWeights.m_Size == &vecNavAreaWeights.m_Memory.m_nAllocationCount )
    {
      if ( v14 == 0 )
      {
        rFuncSelectArea_4b = result;
        CUtlMemory<float,int>::Purge(&vecNavAreaWeights);
        return rFuncSelectArea_4b;
      }
    }
    else if ( *&vecNavAreaWeights.m_Size != 0 && v14 == 0 )
    {
      rFuncSelectArea_4a = result;
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
      return rFuncSelectArea_4a;
    }
  }
  return result;
}


// CNavQuery::SelectRandomNavAreas  (line 94, @0x0000000002efcee0, libserver.so)  // inlines: AddMultipleToTail, CUtlMemory, CUtlMemoryFixedGrowable, CUtlMemoryFixedGrowable_Base, CUtlVectorBase, CUtlVectorFixedGrowable, ConvertToExternalMemory, EnsureCount, GrowMemory, GrowVector, InsertMultipleBefore, Max<float>, Purge, Purge_FixedGrowable, RemoveAll, ~CUtlMemory, ~CUtlMemoryFixedGrowable, ~CUtlMemoryFixedGrowable_Base, ~CUtlVectorBase, ~CUtlVectorFixedGrowable
// calls: std::function<float(const CNavArea&)>::operator(), CNavQuery::SelectRandomNavAreas, CUtlMemory<float, int>::Purge, CUtlMemory<float, int>::Grow, CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 512ul, int> >::~CUtlVectorBase, _Unwind_Resume, __stack_chk_fail
// callers: CNavQuery::SelectRandomNavAreasOverVolume
int __fastcall CNavQuery::SelectRandomNavAreas(
        int nAreas,
        const NavAreaVector *const vecNavAreas,
        FuncNavAreaWeight_t *const rFuncAreaWeight,
        FuncNavAreaSelect_t *const rFuncAreaSelected)
{
  int m_Size; // ebx
  int v7; // eax
  unsigned __int64 v8; // rbx
  __int64 v9; // r14
  __m128 v10; // xmm0
  float v11; // xmm1_4
  float v12; // xmm0_4
  int result; // eax
  uint32 v14; // edx
  float flTotalWeight; // [rsp+Ch] [rbp-854h]
  int flTotalWeightb; // [rsp+Ch] [rbp-854h]
  int flTotalWeighta; // [rsp+Ch] [rbp-854h]
  NavAreaWeightVector_t vecNavAreaWeights; // [rsp+10h] [rbp-850h] BYREF
  unsigned __int64 v21; // [rsp+828h] [rbp-38h]

  v21 = __readfsqword(0x28u);
  m_Size = vecNavAreas->m_Size;
  vecNavAreaWeights.m_Memory.m_pMemory = vecNavAreaWeights.m_Memory.m_FixedMemory.m_Data;
  vecNavAreaWeights.m_Size = 0;
  vecNavAreaWeights.m_Memory.m_nAllocationCount = 512;
  v7 = m_Size;
  vecNavAreaWeights.m_Memory.m_nGrowSize = 0x80000000;
  if ( m_Size > 0 )
  {
    if ( m_Size > 512 )
    {
      CUtlMemory<float,int>::Grow(&vecNavAreaWeights.m_Memory, m_Size - 512);
      v7 = vecNavAreas->m_Size;
    }
    vecNavAreaWeights.m_Size = m_Size;
  }
  if ( v7 == 0 )
    goto LABEL_16;
  flTotalWeight = 0.0;
  v8 = 0;
  v9 = 4LL * (v7 - 1) + 4;
  do
  {
    v10.m128_f32[0] = std::function<float ()(CNavArea const&)>::operator()(
                        rFuncAreaWeight,
                        vecNavAreas->m_Memory.m_pMemory[v8 / 4]);
    v11 = _mm_andnot_ps(_mm_cmplt_ss(v10, 0LL), v10).m128_f32[0];
    v12 = v11 + flTotalWeight;
    vecNavAreaWeights.m_Memory.m_pMemory[v8 / 4] = v11;
    v8 += 4LL;
    flTotalWeight = v11 + flTotalWeight;
  }
  while ( v8 != v9 );
  if ( v12 != 0.0 )
    result = CNavQuery::SelectRandomNavAreas(nAreas, vecNavAreas, &vecNavAreaWeights, flTotalWeight, rFuncAreaSelected);
  else
LABEL_16:
    result = 0;
  vecNavAreaWeights.m_Size = 0;
  v14 = vecNavAreaWeights.m_Memory.m_nGrowSize & 0xC0000000;
  if ( vecNavAreaWeights.m_Memory.m_nAllocationCount < 0
    || vecNavAreaWeights.m_Memory.m_pMemory == &vecNavAreaWeights.m_Memory.m_FixedMemory )
  {
    if ( v14 == 0 )
    {
      flTotalWeightb = result;
      CUtlMemory<float,int>::Purge(&vecNavAreaWeights.m_Memory);
      return flTotalWeightb;
    }
  }
  else if ( vecNavAreaWeights.m_Memory.m_pMemory != 0 && v14 == 0 )
  {
    flTotalWeighta = result;
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
    return flTotalWeighta;
  }
  return result;
}


// CNavQuery::SelectRandomNavAreas  (line 118, @0x0000000002efc800, libserver.so)  // inlines: AddMultipleToTail, CUtlMemory, CUtlVector, CUtlVectorBase, EnsureCount, GrowMemory, GrowVector, InsertMultipleBefore, Purge, RemoveAll, __final_insertion_sort<float*>, __lg, __unguarded_insertion_sort<float*>, __unguarded_linear_insert<float*>, end, operator(), operator[], sort<float*>, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlMemory<float, int>::Grow, RandomFloat, std::__introsort_loop<float*, long int>, std::__insertion_sort<float*>, std::__throw_bad_function_call(void), CUtlMemory<float, int>::Purge, _Unwind_Resume
// callers: CNavQuery::SelectRandomNavAreasAtDensity, CNavQuery::SelectRandomNavAreas, CNavQuery::SelectRandomNavAreasAtDensityInClustersOverVolume
__int64 __fastcall CNavQuery::SelectRandomNavAreas(
        unsigned int nAreas,
        const NavAreaVector *const vecNavAreas,
        const NavAreaWeightVector_t *const vecNavAreaWeights,
        float flTotalWeight,
        FuncNavAreaSelect_t *const rFuncAreaSelected)
{
  int v7; // r13d
  float *m_pMemory; // r14
  __int64 v9; // r15
  unsigned __int64 v10; // r13
  float *v11; // r14
  unsigned int v12; // eax
  float *v13; // r15
  float *v14; // r14
  unsigned __int64 v15; // rax
  float *v16; // r13
  float v17; // xmm1_4
  float *v18; // rax
  float *v19; // rdx
  float v20; // xmm0_4
  unsigned __int64 v21; // r14
  __int64 v22; // r15
  int v23; // r13d
  CNavArea *v24; // rsi
  float v25; // xmm0_4
  int v26; // ecx
  __int64 i; // rax
  float *v28; // rax
  int nPass; // [rsp+1Ch] [rbp-74h]
  int nElementsPlaced; // [rsp+38h] [rbp-58h]
  float flCumulativeWeight; // [rsp+3Ch] [rbp-54h]
  CUtlVector<float,CUtlMemory<float,int> > vecElementRandomPlacement; // [rsp+40h] [rbp-50h] BYREF

  if ( flTotalWeight <= 0.0 )
    return 0;
  nPass = 0;
  nElementsPlaced = 0;
  if ( nAreas > 0 )
  {
    do
    {
      vecElementRandomPlacement.m_Memory.m_pMemory = 0;
      vecElementRandomPlacement.m_Memory.m_nAllocationCount = 0;
      vecElementRandomPlacement.m_Memory.m_nGrowSize = 0;
      v7 = nAreas - nElementsPlaced;
      if ( (nAreas - nElementsPlaced) > 0 )
      {
        CUtlMemory<float,int>::Grow(&vecElementRandomPlacement.m_Memory, v7);
        vecElementRandomPlacement.m_Size = nAreas - nElementsPlaced;
        m_pMemory = vecElementRandomPlacement.m_Memory.m_pMemory;
        v9 = 4LL * (v7 - 1) + 4;
        v10 = 0;
        while ( 1 )
        {
          v11 = &m_pMemory[v10 / 4];
          v10 += 4LL;
          *v11 = RandomFloat(0.0, flTotalWeight);
          if ( v10 == v9 )
            break;
          m_pMemory = vecElementRandomPlacement.m_Memory.m_pMemory;
        }
        v12 = nAreas - nElementsPlaced;
        v13 = vecElementRandomPlacement.m_Memory.m_pMemory;
        v14 = &vecElementRandomPlacement.m_Memory.m_pMemory[vecElementRandomPlacement.m_Size];
        if ( v14 != vecElementRandomPlacement.m_Memory.m_pMemory )
        {
          _BitScanReverse64(&v15, (4LL * vecElementRandomPlacement.m_Size) >> 2);
          std::__introsort_loop<float *,long>(
            vecElementRandomPlacement.m_Memory.m_pMemory,
            &vecElementRandomPlacement.m_Memory.m_pMemory[vecElementRandomPlacement.m_Size],
            2 * (63LL - (v15 ^ 0x3F)));
          if ( 4LL * vecElementRandomPlacement.m_Size <= 67 )
          {
            std::__insertion_sort<float *>(v13, v14);
          }
          else
          {
            v16 = v13 + 16;
            std::__insertion_sort<float *>(v13, v13 + 16);
            if ( v14 != v13 + 16 )
            {
              do
              {
                while ( 1 )
                {
                  v17 = *v16;
                  v18 = v16 - 1;
                  v19 = v16;
                  v20 = *(v16 - 1);
                  if ( v20 > *v16 )
                    break;
                  v28 = v16++;
                  *v28 = v17;
                  if ( v14 == v16 )
                    goto LABEL_19;
                }
                while ( 1 )
                {
                  *v19 = v20;
                  v20 = *(v18 - 1);
                  if ( v20 <= v17 )
                    break;
                  v19 = v18--;
                }
                ++v16;
                *v18 = v17;
              }
              while ( v14 != v16 );
            }
          }
LABEL_19:
          v12 = nAreas - nElementsPlaced;
        }
        if ( v12 != 0 )
        {
          v21 = 0;
          flCumulativeWeight = 0.0;
          v22 = 4LL * (v12 - 1) + 4;
          v23 = -1;
          do
          {
            v25 = vecElementRandomPlacement.m_Memory.m_pMemory[v21 / 4];
            if ( v25 < flCumulativeWeight || (v26 = vecNavAreaWeights->m_Size - 1) <= v23 )
            {
              v24 = vecNavAreas->m_Memory.m_pMemory[v23];
              if ( rFuncAreaSelected->_M_manager == 0 )
                goto LABEL_31;
            }
            else
            {
              for ( i = v23 + 1LL; ; ++i )
              {
                ++v23;
                flCumulativeWeight = flCumulativeWeight + vecNavAreaWeights->m_Memory.m_pMemory[i];
                if ( v25 < flCumulativeWeight || v23 == v26 )
                  break;
              }
              v24 = vecNavAreas->m_Memory.m_pMemory[i];
              if ( rFuncAreaSelected->_M_manager == 0 )
LABEL_31:
                std::__throw_bad_function_call();
            }
            nElementsPlaced -= !rFuncAreaSelected->_M_invoker(rFuncAreaSelected, v24) - 1;
            v21 += 4LL;
          }
          while ( v21 != v22 );
        }
      }
      if ( (vecElementRandomPlacement.m_Memory.m_nGrowSize & 0xC0000000) != 0
        || (CUtlMemory<float,int>::Purge(&vecElementRandomPlacement.m_Memory),
            (vecElementRandomPlacement.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
      {
        ++nPass;
        if ( nAreas <= nElementsPlaced )
          return nAreas;
      }
      else
      {
        CUtlMemory<float,int>::Purge(&vecElementRandomPlacement.m_Memory);
        ++nPass;
        if ( nAreas <= nElementsPlaced )
          return nAreas;
      }
    }
    while ( nPass <= 2 );
  }
  return nAreas;
}


// CNavQuery::SelectRandomNavAreasOverVolume  (line 172, @0x0000000002efd0e0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Purge, RemoveAll, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: Warning, CUtlMemory<CNavArea*, int>::Purge, CNavQuery::SelectRandomNavAreas, CUtlVectorBase<CNavArea*, CUtlMemory<CNavArea*, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CNavQuery::Script_NavGetRandomPoints
// strings: "SelectRandomNavAreasOverVolume called with no usable areas.  No elements will be placed."
int __fastcall CNavQuery::SelectRandomNavAreasOverVolume(
        int nAreas,
        const CNavVolume *const rNavVolume,
        FuncNavAreaWeight_t *const rFuncAreaWeight,
        FuncNavAreaSelect_t *const rFuncSelectArea)
{
  int result; // eax
  int (**vptr_CNavVolume)(...); // rax
  const NavAreaVector *v9; // rax
  int v10; // [rsp+Ch] [rbp-44h]
  NavAreaVector vecNavAreasForVolume; // [rsp+10h] [rbp-40h] BYREF

  result = 0;
  if ( nAreas != 0 )
  {
    vptr_CNavVolume = rNavVolume->_vptr_CNavVolume;
    vecNavAreasForVolume.m_Size = 0;
    vecNavAreasForVolume.m_Memory.m_pMemory = 0;
    vecNavAreasForVolume.m_Memory.m_nAllocationCount = 0;
    vecNavAreasForVolume.m_Memory.m_nGrowSize = 0;
    v9 = (vptr_CNavVolume[5])(rNavVolume, &vecNavAreasForVolume);
    if ( v9 != 0 && v9->m_Size != 0 )
    {
      result = CNavQuery::SelectRandomNavAreas(nAreas, v9, rFuncAreaWeight, rFuncSelectArea);
    }
    else
    {
      Warning("SelectRandomNavAreasOverVolume called with no usable areas.  No elements will be placed.");
      result = 0;
    }
    vecNavAreasForVolume.m_Size = 0;
    if ( (vecNavAreasForVolume.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      v10 = result;
      CUtlMemory<CNavArea *,int>::Purge(&vecNavAreasForVolume.m_Memory);
      result = v10;
      if ( (vecNavAreasForVolume.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      {
        CUtlMemory<CNavArea *,int>::Purge(&vecNavAreasForVolume.m_Memory);
        return v10;
      }
    }
  }
  return result;
}


// CNavQuery::SelectRandomNavAreasAtDensityOverVolume  (line 196, @0x0000000002efcde0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Purge, RemoveAll, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: Warning, CUtlMemory<CNavArea*, int>::Purge, CNavQuery::SelectRandomNavAreasAtDensity, CUtlVectorBase<CNavArea*, CUtlMemory<CNavArea*, int> >::~CUtlVectorBase, _Unwind_Resume
// strings: "AddElementsAtDensityOverVolume called with no usable areas.  No elements will be placed."
__int64 __fastcall CNavQuery::SelectRandomNavAreasAtDensityOverVolume(
        __m128i flDensity,
        const CNavVolume *const rNavVolume,
        FuncNavAreaWeight_t *const rFuncAreaWeight,
        FuncNavAreaSelect_t *const rFuncSelectArea)
{
  float v4; // r14d
  __int64 result; // rax
  int (**vptr_CNavVolume)(...); // rax
  const NavAreaVector *v9; // rax
  unsigned int v10; // [rsp+0h] [rbp-44h]
  NavAreaVector vecNavAreasForVolume; // [rsp+4h] [rbp-40h] BYREF

  v4 = COERCE_FLOAT(_mm_cvtsi128_si32(flDensity));
  result = 0;
  if ( *flDensity.m128i_i32 != 0.0 )
  {
    vptr_CNavVolume = rNavVolume->_vptr_CNavVolume;
    vecNavAreasForVolume.m_Size = 0;
    vecNavAreasForVolume.m_Memory.m_pMemory = 0;
    vecNavAreasForVolume.m_Memory.m_nAllocationCount = 0;
    vecNavAreasForVolume.m_Memory.m_nGrowSize = 0;
    v9 = (vptr_CNavVolume[5])(rNavVolume, &vecNavAreasForVolume);
    if ( v9 != 0 && v9->m_Size != 0 )
    {
      result = CNavQuery::SelectRandomNavAreasAtDensity(v4, v9, rFuncAreaWeight, rFuncSelectArea);
    }
    else
    {
      Warning("AddElementsAtDensityOverVolume called with no usable areas.  No elements will be placed.");
      result = 0;
    }
    vecNavAreasForVolume.m_Size = 0;
    if ( (vecNavAreasForVolume.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      v10 = result;
      CUtlMemory<CNavArea *,int>::Purge(&vecNavAreasForVolume.m_Memory);
      result = v10;
      if ( (vecNavAreasForVolume.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      {
        CUtlMemory<CNavArea *,int>::Purge(&vecNavAreasForVolume.m_Memory);
        return v10;
      }
    }
  }
  return result;
}


// ClusterMarker::~ClusterMarker  (line 238, @0x0000000002f085e0, libserver.so)  // inlines: ~_Function_base, ~function
// callers: CNavQuery::SelectRandomNavAreasAtDensityInClustersOverVolume
void __fastcall ClusterMarker::~ClusterMarker(ClusterMarker *const this)
{
  std::_Function_base::_Manager_type M_manager; // rax
  std::_Function_base::_Manager_type v3; // rax

  M_manager = this->m_funcAreaProb._M_manager;
  if ( M_manager != 0 )
    M_manager(
      &this->m_funcAreaProb._M_functor,
      &this->m_funcAreaProb._M_functor,
      std::_Manager_operation::__destroy_functor);
  v3 = this->m_funcValidArea._M_manager;
  if ( v3 != 0 )
    v3(&this->m_funcValidArea._M_functor, &this->m_funcValidArea._M_functor, std::_Manager_operation::__destroy_functor);
}


// CNavQuery::SelectRandomNavAreasAtDensityInClustersOverVolume  (line 355, @0x0000000002efd580, libserver.so)  // inlines: AddCluster, AddMultipleToTail, BitVec_IsBitSet, Bitvec_Set, CBitVec, CBitVecT, CNavAreaMarker, CUtlMemory, CUtlMemoryFixedGrowable, CUtlMemoryFixedGrowable_Base, CUtlVector, CUtlVectorBase, CUtlVectorFixedGrowable, ClearAll, ClusterMarker, Color, ConvertToExternalMemory, DrawPolyFilled, EnsureCount, GetFloat, GetRawColor, GrowMemory, GrowVector, InsertMultipleBefore, IsBitSet, IsExternallyAllocated, IsMarked, Lerp, Max<float>, NavHullAny, Purge, Purge_FixedGrowable, RemoveAll, Set, SetAreaLimits, SetColor, SetMark, SetVolumeRestriction, _Function_base, _M_init_functor, function, function<CNavQuery::SelectRandomNavAreasAtDensityInClustersOverVolume(float, int, const CNavVolume&, const ClusteredDistributionParams_t&, FuncNavAreaWeight_t&, FuncNavAreaWeight_t&, FuncNavAreaSelect_t&)::__lambda20, void>, memset, operator=, operator=<CNavQuery::SelectRandomNavAreasAtDensityInClustersOverVolume(float, int, const CNavVolume&, const ClusteredDistributionParams_t&, FuncNavAreaWeight_t&, FuncNavAreaWeight_t&, FuncNavAreaSelect_t&)::__lambda20>, operator=<std::function<float(const CNavArea&)>&>, operator[], swap, swap<bool (*)(const std::_Any_data&, const CNavArea&)>, swap<bool (*)(std::_Any_data&, const std::_Any_data&, std::_Manager_operation)>, swap<float (*)(const std::_Any_data&, const CNavArea&)>, swap<std::_Any_data>, ~CUtlMemory, ~CUtlMemoryFixedGrowable, ~CUtlMemoryFixedGrowable_Base, ~CUtlVector, ~CUtlVectorBase, ~CUtlVectorFixedGrowable, ~ClusterMarker, ~_Function_base, ~function
// calls: std::function<float(const CNavArea&)>::operator(), memset, NavHull_t::NavHull_t, operator new, Warning, CUtlMemory<CNavArea*, int>::Purge, CNavQuery::GetRandomElementInWeightedVector, NavBreadthFirstSearch<ClusterMarker>, CUtlMemory<float, int>::Grow, ClusterMarker::~ClusterMarker, CUtlVectorBase<CNavArea*, CUtlMemory<CNavArea*, int> >::~CUtlVectorBase, _Unwind_Resume (16 total)
// strings: "AddElementsAtDensityInClustersOverVolume called with no usable areas.  No elements will b, "AddElementsAtDensityInClustersOverVolume... nullptr area.", "AddElementsAtDensityInClustersOverVolume...no areas found to start clusters."
// globals: std::_Function_base::_Base_manager<CNavQuery::SelectRandomNavAreasAtDensityInClustersOverVolume(float,int,CNavVolume const&,ClusteredDistributionParams_t const&, std::_Function_handler<bool ()(CNavArea const&),CNavQuery::SelectRandomNavAreasAtDensityInClustersOverVolume(float,int,CNavVolume const&,ClusteredDistributionPa
__int64 __fastcall CNavQuery::SelectRandomNavAreasAtDensityInClustersOverVolume(
        float flElementDensity,
        int nElementLimit,
        const CNavVolume *const rNavVolume,
        const ClusteredDistributionParams_t *const rClusteringParams,
        FuncNavAreaWeight_t *const rFuncAreaWeightForClusterStart,
        FuncNavAreaWeight_t *const rFuncAreaWeight,
        FuncNavAreaSelect_t *const rFuncSelectArea)
{
  int (**vptr_CNavVolume)(...); // rax
  __int64 v10; // rax
  const NavAreaVector *v11; // r14
  _QWORD *v12; // rcx
  _QWORD *v13; // rax
  __int64 v14; // rsi
  unsigned __int64 v15; // rbx
  __int64 v16; // r12
  CNavArea **m_pMemory; // rax
  const CNavArea *v18; // rsi
  __m128 v19; // xmm0
  __m128i v20; // xmm6
  float v21; // r15d
  float v22; // xmm2_4
  uint32 m_hullCategory; // ebx
  CNavMesh *v24; // r12
  _QWORD *v25; // rax
  float v26; // xmm1_4
  std::_Any_data v27; // rcx
  std::_Function_base::_Manager_type M_manager; // rax
  std::_Function_base::_Manager_type v29; // rax
  std::function<float(const CNavArea&)>::_Invoker_type v30; // rdx
  bool (*v31)(std::_Any_data *, const std::_Any_data *, std::_Manager_operation); // rsi
  std::_Any_data v32; // rcx
  std::_Function_base::_Manager_type v33; // rax
  float (*v34)(const std::_Any_data *, const CNavArea *); // rdx
  bool v35; // zf
  unsigned __int64 v36; // rbx
  __int64 v37; // r15
  float v38; // xmm0_4
  float v39; // xmm0_4
  const CNavArea *v40; // r12
  int m_nIndex; // ecx
  int v42; // edx
  __int64 v43; // rax
  unsigned int v44; // ebx
  int RandomElementInWeightedVector; // eax
  CNavArea *v47; // rdi
  int v48; // ecx
  uint32 m_nGrowSize; // edx
  uint32 v50; // eax
  uint32 v51; // edx
  uint32 v52; // eax
  __int64 v53; // rbx
  const CNavArea *v54; // r12
  __m128 v55; // xmm0
  __m128 v56; // xmm1
  float v57; // xmm0_4
  float v58; // xmm1_4
  unsigned int v59; // eax
  float v60; // xmm0_4
  unsigned __int16 v61; // dx
  int v62; // edx
  __int64 v63; // [rsp+8h] [rbp-111B8h]
  int v66; // [rsp+24h] [rbp-1119Ch]
  float flDesiredClusterCoveredAreaa; // [rsp+48h] [rbp-11178h]
  float flDesiredClusterCoveredArea; // [rsp+48h] [rbp-11178h]
  float rFuncAreaWeightForClusterStartb; // [rsp+50h] [rbp-11170h]
  float flTotalWeightPostClustering; // [rsp+58h] [rbp-11168h]
  float flTotalWeightPostClusteringc; // [rsp+58h] [rbp-11168h]
  float flTotalWeightPostClusteringa; // [rsp+58h] [rbp-11168h]
  float flTotalWeightPostClusteringb; // [rsp+58h] [rbp-11168h]
  float flTotalWeightedAreaForClustering; // [rsp+5Ch] [rbp-11164h]
  float flTotalWeightedAreaForClusteringc; // [rsp+5Ch] [rbp-11164h]
  float flTotalWeightedAreaForClusteringa; // [rsp+5Ch] [rbp-11164h]
  float flTotalWeightedAreaForClusteringb; // [rsp+5Ch] [rbp-11164h]
  NavHull_t v81; // [rsp+60h] [rbp-11160h] BYREF
  NavAreaVector vecNavAreasForVolume; // [rsp+70h] [rbp-11150h] BYREF
  CNavAreaMarker clusterSeedMarker; // [rsp+90h] [rbp-11130h] BYREF
  std::_Any_data M_functor; // [rsp+8090h] [rbp-9130h] BYREF
  std::_Function_base::_Manager_type v85; // [rsp+80A0h] [rbp-9120h]
  std::function<bool(const CNavArea&)>::_Invoker_type M_invoker; // [rsp+80A8h] [rbp-9118h]
  std::_Any_data v87; // [rsp+80B0h] [rbp-9110h] BYREF
  std::_Function_base::_Manager_type v88; // [rsp+80C0h] [rbp-9100h]
  std::function<float(const CNavArea&)>::_Invoker_type v89; // [rsp+80C8h] [rbp-90F8h]
  NavAreaWeightVector_t vecAreaWeightsForClusterStart; // [rsp+80D0h] [rbp-90F0h] BYREF
  NavAreaWeightVector_t vecNavAreaWeightsPostClustering; // [rsp+88F0h] [rbp-88D0h] BYREF
  ClusterMarker clusterMarker; // [rsp+9110h] [rbp-80B0h] BYREF
  unsigned __int64 v93; // [rsp+11188h] [rbp-38h]

  v93 = __readfsqword(0x28u);
  if ( TheNavMesh == 0 )
    return 0;
  vptr_CNavVolume = rNavVolume->_vptr_CNavVolume;
  vecNavAreasForVolume.m_Size = 0;
  vecNavAreasForVolume.m_Memory.m_pMemory = 0;
  vecNavAreasForVolume.m_Memory.m_nAllocationCount = 0;
  vecNavAreasForVolume.m_Memory.m_nGrowSize = 0;
  v10 = (vptr_CNavVolume[5])(rNavVolume, &vecNavAreasForVolume);
  v11 = v10;
  if ( v10 != 0 && (v66 = *v10, *v10 != 0) )
  {
    v12 = *(v10 + 8);
    if ( *v12 != 0 )
    {
      v13 = v12 + 1;
      v14 = (v66 - 1);
      while ( v13 != &v12[v14 + 1] )
      {
        if ( *v13++ == 0 )
          goto LABEL_35;
      }
      flTotalWeightedAreaForClustering = 0.0;
      v15 = 0;
      v63 = v14 + 1;
      v16 = 8 * (v14 + 1);
      m_pMemory = v12;
      flTotalWeightPostClustering = 0.0;
      while ( 1 )
      {
        v18 = m_pMemory[v15 / 8];
        flDesiredClusterCoveredAreaa = v18->m_flSurfaceArea;
        v19.m128_f32[0] = std::function<float ()(CNavArea const&)>::operator()(rFuncAreaWeight, v18);
        v15 += 8LL;
        flTotalWeightPostClustering = flTotalWeightPostClustering + flDesiredClusterCoveredAreaa;
        flTotalWeightedAreaForClustering = (_mm_andnot_ps(_mm_cmplt_ss(v19, 0LL), v19).m128_f32[0]
                                          * flDesiredClusterCoveredAreaa)
                                         + flTotalWeightedAreaForClustering;
        if ( v15 == v16 )
          break;
        m_pMemory = v11->m_Memory.m_pMemory;
      }
      if ( flTotalWeightedAreaForClustering == 0.0 )
      {
        Warning("AddElementsAtDensityInClustersOverVolume...no areas found to start clusters.");
        goto LABEL_32;
      }
      v20 = LODWORD(flTotalWeightPostClustering);
      flDesiredClusterCoveredArea = flTotalWeightPostClustering * rClusteringParams->m_flClusterCoverageFraction;
      if ( nElementLimit < 0 )
      {
        v21 = 3.4028235e38;
      }
      else
      {
        *v20.m128i_i32 = nElementLimit / flElementDensity;
        v21 = COERCE_FLOAT(_mm_cvtsi128_si32(v20));
      }
      memset(&clusterSeedMarker, 0, sizeof(clusterSeedMarker));
      NavHull_t::NavHull_t(&v81, -1.0, v22, 7u);
      m_hullCategory = v81.m_hullCategory;
      flTotalWeightPostClusteringc = v81.m_flHullRadius;
      v24 = TheNavMesh;
      flTotalWeightedAreaForClusteringc = v81.m_flHullHeight;
      memset(&clusterMarker, 0, 0x8000u);
      clusterMarker.m_pNavVolume = rNavVolume;
      clusterMarker.m_NavHull.m_hullCategory = m_hullCategory;
      clusterMarker.m_pNavMesh = v24;
      clusterMarker.m_NavHull.m_flHullRadius = flTotalWeightPostClusteringc;
      clusterMarker.m_NavHull.m_flHullHeight = flTotalWeightedAreaForClusteringc;
      memset(&clusterMarker.m_flCurrentClusterMaxArea, 0, 25);
      clusterMarker.m_funcValidArea._M_manager = 0;
      clusterMarker.m_funcAreaProb._M_manager = 0;
      v85 = 0;
      v25 = operator new(8u);
      *v25 = rFuncAreaWeight;
      v27._M_unused._M_object = v25;
      v27._M_unused._M_member_pointer.__delta = M_functor._M_unused._M_member_pointer.__delta;
      M_functor = clusterMarker.m_funcValidArea._M_functor;
      M_manager = clusterMarker.m_funcValidArea._M_manager;
      clusterMarker.m_funcValidArea._M_manager = std::_Function_base::_Base_manager<CNavQuery::SelectRandomNavAreasAtDensityInClustersOverVolume(float,int,CNavVolume const&,ClusteredDistributionParams_t const&,std::function<float ()(CNavArea const&)> &,std::function<float ()(CNavArea const&)> &,std::function&<bool ()(CNavArea&)>)::{lambda(CNavArea const&)#1}>::_M_manager;
      clusterMarker.m_funcValidArea._M_functor = v27;
      v85 = M_manager;
      M_invoker = clusterMarker.m_funcValidArea._M_invoker;
      clusterMarker.m_funcValidArea._M_invoker = std::_Function_handler<bool ()(CNavArea const&),CNavQuery::SelectRandomNavAreasAtDensityInClustersOverVolume(float,int,CNavVolume const&,ClusteredDistributionParams_t const&,std::function<float ()(CNavArea const&)> &,std::function<float ()(CNavArea const&)> &,std::function&<bool ()(CNavArea&)>)::{lambda(CNavArea const&)#1}>::_M_invoke;
      if ( M_manager != 0 )
        M_manager(&M_functor, &M_functor, std::_Manager_operation::__destroy_functor);
      v29 = rFuncAreaWeight->_M_manager;
      if ( v29 != 0 )
      {
        v30 = rFuncAreaWeight->_M_invoker;
        v88 = rFuncAreaWeight->_M_manager;
        v89 = v30;
        v29(&v87, &rFuncAreaWeight->_M_functor, std::_Manager_operation::__clone_functor);
        v31 = v88;
      }
      else
      {
        v31 = 0;
      }
      v32 = v87;
      v87 = clusterMarker.m_funcAreaProb._M_functor;
      v33 = clusterMarker.m_funcAreaProb._M_manager;
      clusterMarker.m_funcAreaProb._M_functor = v32;
      v34 = v89;
      v35 = clusterMarker.m_funcAreaProb._M_manager == 0;
      v88 = clusterMarker.m_funcAreaProb._M_manager;
      clusterMarker.m_funcAreaProb._M_manager = v31;
      v89 = clusterMarker.m_funcAreaProb._M_invoker;
      clusterMarker.m_funcAreaProb._M_invoker = v34;
      if ( !v35 )
        v33(&v87, &v87, std::_Manager_operation::__destroy_functor);
      clusterMarker.m_flTotalMaxWeighteArea = v21;
      vecAreaWeightsForClusterStart.m_Size = 0;
      clusterMarker.m_flTotalMaxArea = flDesiredClusterCoveredArea;
      vecAreaWeightsForClusterStart.m_Memory.m_nAllocationCount = 512;
      vecAreaWeightsForClusterStart.m_Memory.m_pMemory = vecAreaWeightsForClusterStart.m_Memory.m_FixedMemory.m_Data;
      vecAreaWeightsForClusterStart.m_Memory.m_nGrowSize = 0x80000000;
      if ( v66 > 0 )
      {
        if ( v66 > 512 )
          CUtlMemory<float,int>::Grow(&vecAreaWeightsForClusterStart.m_Memory, v66 - 512);
        vecAreaWeightsForClusterStart.m_Size = v66;
      }
      while ( !clusterMarker.m_bLimitReached )
      {
        if ( v11->m_Size != 0 )
        {
          v36 = 0;
          v37 = 4LL * (v11->m_Size - 1) + 4;
          flTotalWeightedAreaForClusteringa = 0.0;
          do
          {
            v38 = 0.0;
            v40 = v11->m_Memory.m_pMemory[v36 / 4];
            m_nIndex = v40->m_nIndex;
            flTotalWeightPostClusteringa = v40->m_flSurfaceArea;
            v42 = 1 << m_nIndex;
            v43 = m_nIndex >> 5;
            if ( ((1 << m_nIndex) & clusterMarker.m_ClusterMarker.m_MarkedAreas.m_Ints[v43]) == 0 )
            {
              v38 = std::function<float ()(CNavArea const&)>::operator()(rFuncAreaWeightForClusterStart, v40);
              if ( v38 < 0.0 )
                v38 = 0.0;
              v42 = 1 << v40->m_nIndex;
              v43 = v40->m_nIndex >> 5;
            }
            if ( (v42 & clusterSeedMarker.m_MarkedAreas.m_Ints[v43]) != 0 )
              v38 = 0.0;
            v39 = v38 * flTotalWeightPostClusteringa;
            vecAreaWeightsForClusterStart.m_Memory.m_pMemory[v36 / 4] = v39;
            v36 += 4LL;
            flTotalWeightedAreaForClusteringa = v39 + flTotalWeightedAreaForClusteringa;
          }
          while ( v36 != v37 );
        }
        else
        {
          flTotalWeightedAreaForClusteringa = 0.0;
        }
        RandomElementInWeightedVector = CNavQuery::GetRandomElementInWeightedVector(
                                          &vecAreaWeightsForClusterStart,
                                          flTotalWeightedAreaForClusteringa,
                                          v26);
        if ( RandomElementInWeightedVector < 0 )
          break;
        v47 = v11->m_Memory.m_pMemory[RandomElementInWeightedVector];
        if ( v47 == 0 )
          break;
        v48 = v47->m_nIndex;
        clusterMarker.m_flCurrentClusterArea = 0.0;
        clusterSeedMarker.m_MarkedAreas.m_Ints[v48 >> 5] |= 1 << v48;
        clusterMarker.m_flCurrentClusterMaxArea = rClusteringParams->m_flClusterArea;
        NavBreadthFirstSearch<ClusterMarker>(v47, clusterMarker.m_NavHull, &clusterMarker, 0x1Du, -1, -1.0);
      }
      vecNavAreaWeightsPostClustering.m_Size = 0;
      vecNavAreaWeightsPostClustering.m_Memory.m_nAllocationCount = 512;
      vecNavAreaWeightsPostClustering.m_Memory.m_nGrowSize = 0x80000000;
      rFuncAreaWeightForClusterStartb = population_distribution_debug.m_pParent->m_Value.m_fValue;
      vecNavAreaWeightsPostClustering.m_Memory.m_pMemory = vecNavAreaWeightsPostClustering.m_Memory.m_FixedMemory.m_Data;
      if ( v66 > 0 )
      {
        if ( v66 > 512 )
          CUtlMemory<float,int>::Grow(&vecNavAreaWeightsPostClustering.m_Memory, v66 - 512);
        v53 = 0;
        flTotalWeightPostClusteringb = 0.0;
        vecNavAreaWeightsPostClustering.m_Size = v66;
        do
        {
          v54 = v11->m_Memory.m_pMemory[v53];
          flTotalWeightedAreaForClusteringb = v54->m_flSurfaceArea;
          if ( ((1 << v54->m_nIndex) & clusterMarker.m_ClusterMarker.m_MarkedAreas.m_Ints[v54->m_nIndex >> 5]) != 0 )
          {
            v55.m128_f32[0] = std::function<float ()(CNavArea const&)>::operator()(rFuncAreaWeight, v54);
            v56 = _mm_cmpge_ss(v55, 0LL);
            LODWORD(v57) = v55.m128_i32[0] & v56.m128_i32[0];
            v58 = _mm_andnot_ps(v56, 0LL).m128_f32[0];
            vecNavAreaWeightsPostClustering.m_Memory.m_pMemory[v53] = v57;
            flTotalWeightPostClusteringb = flTotalWeightPostClusteringb + v57;
            if ( rFuncAreaWeightForClusterStartb > 0.0 )
            {
              v59 = -10223361;
              v60 = v57 / flTotalWeightedAreaForClusteringb;
              LOBYTE(v61) = ((-255.0 * v60) + 255.0);
              HIBYTE(v61) = ((255.0 * v60) + v58);
              v62 = (((v60 * v58) + 255.0) << 24) | (((v60 * v58) + v58) << 16) | v61;
              if ( v60 != v58 )
                v59 = v62;
              if ( INavDrawArea::ms_pInst != 0 )
                (*INavDrawArea::ms_pInst->_vptr_INavDrawArea)(
                  INavDrawArea::ms_pInst,
                  v54,
                  v59,
                  0,
                  &vec3_origin,
                  rFuncAreaWeightForClusterStartb,
                  0.0);
            }
          }
          else
          {
            vecNavAreaWeightsPostClustering.m_Memory.m_pMemory[v53] = 0.0;
            flTotalWeightPostClusteringb = flTotalWeightPostClusteringb + 0.0;
          }
          ++v53;
        }
        while ( v53 != v63 );
      }
      else
      {
        flTotalWeightPostClusteringb = 0.0;
      }
      v44 = CNavQuery::SelectRandomNavAreas(
              (flElementDensity * flTotalWeightPostClusteringb),
              v11,
              &vecNavAreaWeightsPostClustering,
              flTotalWeightPostClusteringb,
              rFuncSelectArea);
      vecNavAreaWeightsPostClustering.m_Size = 0;
      if ( vecNavAreaWeightsPostClustering.m_Memory.m_nAllocationCount < 0 )
      {
        v50 = vecNavAreaWeightsPostClustering.m_Memory.m_nGrowSize & 0xC0000000;
      }
      else
      {
        m_nGrowSize = vecNavAreaWeightsPostClustering.m_Memory.m_nGrowSize;
        v50 = vecNavAreaWeightsPostClustering.m_Memory.m_nGrowSize & 0xC0000000;
        if ( vecNavAreaWeightsPostClustering.m_Memory.m_pMemory != &vecNavAreaWeightsPostClustering.m_Memory.m_FixedMemory )
        {
          if ( vecNavAreaWeightsPostClustering.m_Memory.m_pMemory != 0 && v50 == 0 )
          {
            (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
            m_nGrowSize = vecNavAreaWeightsPostClustering.m_Memory.m_nGrowSize;
          }
          vecNavAreaWeightsPostClustering.m_Memory.m_nAllocationCount = 512;
          vecNavAreaWeightsPostClustering.m_Memory.m_pMemory = vecNavAreaWeightsPostClustering.m_Memory.m_FixedMemory.m_Data;
          vecNavAreaWeightsPostClustering.m_Memory.m_nGrowSize = m_nGrowSize & 0x3FFFFFFF | 0x80000000;
          goto LABEL_58;
        }
      }
      if ( v50 == 0 )
        CUtlMemory<float,int>::Purge(&vecNavAreaWeightsPostClustering.m_Memory);
LABEL_58:
      vecAreaWeightsForClusterStart.m_Size = 0;
      if ( vecAreaWeightsForClusterStart.m_Memory.m_nAllocationCount < 0 )
      {
        v52 = vecAreaWeightsForClusterStart.m_Memory.m_nGrowSize & 0xC0000000;
      }
      else
      {
        v51 = vecAreaWeightsForClusterStart.m_Memory.m_nGrowSize;
        v52 = vecAreaWeightsForClusterStart.m_Memory.m_nGrowSize & 0xC0000000;
        if ( vecAreaWeightsForClusterStart.m_Memory.m_pMemory != &vecAreaWeightsForClusterStart.m_Memory.m_FixedMemory )
        {
          if ( vecAreaWeightsForClusterStart.m_Memory.m_pMemory != 0 && v52 == 0 )
          {
            (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
            v51 = vecAreaWeightsForClusterStart.m_Memory.m_nGrowSize;
          }
          vecAreaWeightsForClusterStart.m_Memory.m_nAllocationCount = 512;
          vecAreaWeightsForClusterStart.m_Memory.m_pMemory = vecAreaWeightsForClusterStart.m_Memory.m_FixedMemory.m_Data;
          vecAreaWeightsForClusterStart.m_Memory.m_nGrowSize = v51 & 0x3FFFFFFF | 0x80000000;
LABEL_64:
          if ( clusterMarker.m_funcAreaProb._M_manager != 0 )
            clusterMarker.m_funcAreaProb._M_manager(
              &clusterMarker.m_funcAreaProb,
              &clusterMarker.m_funcAreaProb,
              std::_Manager_operation::__destroy_functor);
          if ( clusterMarker.m_funcValidArea._M_manager != 0 )
            clusterMarker.m_funcValidArea._M_manager(
              &clusterMarker.m_funcValidArea,
              &clusterMarker.m_funcValidArea,
              std::_Manager_operation::__destroy_functor);
          goto LABEL_33;
        }
      }
      if ( v52 == 0 )
        CUtlMemory<float,int>::Purge(&vecAreaWeightsForClusterStart.m_Memory);
      goto LABEL_64;
    }
LABEL_35:
    Warning("AddElementsAtDensityInClustersOverVolume... nullptr area.");
  }
  else
  {
    Warning("AddElementsAtDensityInClustersOverVolume called with no usable areas.  No elements will be placed.");
  }
LABEL_32:
  v44 = 0;
LABEL_33:
  vecNavAreasForVolume.m_Size = 0;
  if ( (vecNavAreasForVolume.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CNavArea *,int>::Purge(&vecNavAreasForVolume.m_Memory);
    if ( (vecNavAreasForVolume.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CNavArea *,int>::Purge(&vecNavAreasForVolume.m_Memory);
  }
  return v44;
}


// CNavQuery::Script_NavGetRandomPoints  (line 503, @0x0000000002efd1d0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, CVariantBase, CopyData<Vector>, EnsureCapacity, Free, Purge, RemoveAll, TakeOwnership, _Function_base, _M_init_functor, function<CNavQuery::Script_NavGetRandomPoints(int, HSCRIPT, HSCRIPT)::__lambda21, void>, function<CNavQuery::Script_NavGetRandomPoints(int, HSCRIPT, HSCRIPT)::__lambda22, void>, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~CVariantBase, ~_Function_base, ~function
// calls: CreateNewNavVolumeFromScriptTables, operator new, CNavQuery::SelectRandomNavAreasOverVolume, CUtlMemory<Vector, int>::Purge, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume, __stack_chk_fail
// globals: std::_Function_handler<bool ()(CNavArea &),CNavQuery::Script_NavGetRandomPoints(int,HSCRIPT__ *,HSCRIPT__ *)::{lambda(CNavArea &)#1}>::_M_invoke(std::_Any_data , std::_Function_base::_Base_manager<CNavQuery::Script_NavGetRandomPoints(int,HSCRIPT__ *,HSCRIPT__ *)::{lambda(CNavArea &)#1}>::_M_manager(std::_Any_data &,std::, std::_Function_handler<float ()(CNavArea const&),CNavQuery::Script_NavGetRandomPoints(int,HSCRIPT__ *,HSCRIPT__ *)::{lambda(CNavArea const&)#2}>::_M_invoke(std:, std::_Function_base::_Base_manager<CNavQuery::Script_NavGetRandomPoints(int,HSCRIPT__ *,HSCRIPT__ *)::{lambda(CNavArea const&)#2}>::_M_manager(std::_Any_data &,
__int64 *__fastcall CNavQuery::Script_NavGetRandomPoints(
        __int64 *a1,
        int nPoints,
        HSCRIPT hVolumeTable,
        HSCRIPT hFilterTable)
{
  int v7; // ebx
  const CNavVolume *NewNavVolumeFromScriptTables; // r14
  _QWORD *v9; // rax
  unsigned __int64 v10; // rbx
  __int64 v11; // r15
  __int64 v12; // rsi
  __int64 v13; // rax
  Vector *v15; // [rsp+20h] [rbp-B0h] BYREF
  __int16 v16; // [rsp+28h] [rbp-A8h]
  __int16 v17; // [rsp+2Ah] [rbp-A6h]
  CUtlVector<Vector,CUtlMemory<Vector,int> > vecPoints; // [rsp+30h] [rbp-A0h] BYREF
  FuncNavAreaSelect_t funcGatherPoint; // [rsp+50h] [rbp-80h] BYREF
  FuncNavAreaWeight_t funcAreaWeight; // [rsp+70h] [rbp-60h] BYREF
  unsigned __int64 v21; // [rsp+98h] [rbp-38h]

  v7 = nPoints;
  *a1 = 0;
  v21 = __readfsqword(0x28u);
  if ( nPoints >= 64000 )
    v7 = 64000;
  *(a1 + 4) = 0;
  *(a1 + 5) = 0;
  (*(*g_pScriptVM + 360LL))(g_pScriptVM, a1);
  NewNavVolumeFromScriptTables = CreateNewNavVolumeFromScriptTables(TheNavMesh, hVolumeTable, hFilterTable, 0);
  if ( NewNavVolumeFromScriptTables != 0 )
  {
    vecPoints.m_Size = 0;
    vecPoints.m_Memory.m_pMemory = 0;
    vecPoints.m_Memory.m_nAllocationCount = 0;
    vecPoints.m_Memory.m_nGrowSize = 0;
    if ( v7 > 0 )
    {
      vecPoints.m_Memory.m_pMemory = (**g_pMemAlloc)(g_pMemAlloc, 12LL * v7);
      vecPoints.m_Memory.m_nAllocationCount = v7;
    }
    v9 = operator new(8u);
    *v9 = &vecPoints;
    funcGatherPoint._M_functor._M_unused._M_object = v9;
    funcGatherPoint._M_invoker = std::_Function_handler<bool ()(CNavArea &),CNavQuery::Script_NavGetRandomPoints(int,HSCRIPT__ *,HSCRIPT__ *)::{lambda(CNavArea &)#1}>::_M_invoke;
    funcGatherPoint._M_manager = std::_Function_base::_Base_manager<CNavQuery::Script_NavGetRandomPoints(int,HSCRIPT__ *,HSCRIPT__ *)::{lambda(CNavArea &)#1}>::_M_manager;
    funcAreaWeight._M_manager = 0;
    funcAreaWeight._M_functor._M_unused._M_object = operator new(1u);
    funcAreaWeight._M_invoker = std::_Function_handler<float ()(CNavArea const&),CNavQuery::Script_NavGetRandomPoints(int,HSCRIPT__ *,HSCRIPT__ *)::{lambda(CNavArea const&)#2}>::_M_invoke;
    funcAreaWeight._M_manager = std::_Function_base::_Base_manager<CNavQuery::Script_NavGetRandomPoints(int,HSCRIPT__ *,HSCRIPT__ *)::{lambda(CNavArea const&)#2}>::_M_manager;
    CNavQuery::SelectRandomNavAreasOverVolume(v7, NewNavVolumeFromScriptTables, &funcAreaWeight, &funcGatherPoint);
    if ( vecPoints.m_Size != 0 )
    {
      v10 = 0;
      v11 = 4 * (3LL * (vecPoints.m_Size - 1) + 3);
      do
      {
        v12 = *a1;
        v13 = *g_pScriptVM;
        v17 = 0;
        v15 = &vecPoints.m_Memory.m_pMemory[v10 / 0xC];
        v16 = 3;
        (*(v13 + 384))(g_pScriptVM, v12, &v15);
        if ( (v17 & 1) != 0 )
          (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v15);
        v10 += 12LL;
      }
      while ( v10 != v11 );
    }
    if ( *(a1 + 4) == 31 )
      *(a1 + 4) = 36;
    if ( funcAreaWeight._M_manager != 0 )
      funcAreaWeight._M_manager(&funcAreaWeight, &funcAreaWeight, std::_Manager_operation::__destroy_functor);
    if ( funcGatherPoint._M_manager != 0 )
      funcGatherPoint._M_manager(&funcGatherPoint, &funcGatherPoint, std::_Manager_operation::__destroy_functor);
    vecPoints.m_Size = 0;
    if ( (vecPoints.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<Vector,int>::Purge(&vecPoints.m_Memory);
      if ( (vecPoints.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<Vector,int>::Purge(&vecPoints.m_Memory);
    }
  }
  return a1;
}


