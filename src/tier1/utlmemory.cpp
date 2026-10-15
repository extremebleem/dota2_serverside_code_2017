
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// _GLOBAL__sub_I_utlmemory.cpp  (line 0, @0x0000000001a67350, libserver.so)  // inlines: Color, SetColor, __static_initialization_and_destruction_0
// globals: UNSPECIFIED_LOGGING_COLOR
void __cdecl GLOBAL__sub_I_utlmemory_cpp()
{
  UNSPECIFIED_LOGGING_COLOR._color[0] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[1] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[2] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[3] = 0;
}


// UtlMemory_CalcNewAllocationCount  (line 10, @0x0000000002f862f0, libserver.so)
// callers: CUtlMemory<JSONParserMessageField_t, int>::Grow, CUtlMemory<CMeshDrawPrimitive_t, int>::Grow, CUtlMemory<IWrappedInterpolatedVar::CWrappedIVHashElement_t, int>::Grow, CUtlMemory<CUtlVector<IWrappedInterpolatedVar::CWrappedIVHashElement_t, CUtlMemory<IWrappedInterpolatedVar::CWrappedIVHashElement_t, int> >, int>::Grow, CUtlMemory<CHandle<CPointClientUIWorldPanel>, int>::Grow, CUtlMemory<CUtlSymbolLarge, int>::Grow, CUtlMemory<ScriptFunctionBinding_t, int>::Grow, CUtlMemory<CBaseAchievement*, int>::Grow, CUtlMemory<int, int>::Grow, CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, CBaseAchievement*>::Node_t, short unsigned int>, short unsigned int>::Grow, CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, CPlayerAchievementState*>::Node_t, short unsigned int>, short unsigned int>::Grow, CUtlMemory<__vector(4) float, int>::Grow (876 total)
int __fastcall UtlMemory_CalcNewAllocationCount(int nAllocationCount, int nGrowSize, int nNewSize, int nBytesItem)
{
  int result; // eax
  int v5; // eax

  if ( nGrowSize != 0 )
    return nGrowSize * ((nNewSize - 1) / nGrowSize + 1);
  if ( nAllocationCount == 0 )
  {
    v5 = (nBytesItem + 31) / nBytesItem;
    if ( v5 < nNewSize )
      v5 = nNewSize;
    nAllocationCount = v5;
  }
  if ( nNewSize <= nAllocationCount )
    return nAllocationCount;
  result = 2 * nAllocationCount;
  if ( 2 * nAllocationCount > 0x3FFFFFFF )
    return 0x7FFFFFFF;
  while ( nNewSize > result )
  {
    result *= 2;
    if ( result > 0x3FFFFFFF )
      return 0x7FFFFFFF;
  }
  return result;
}


