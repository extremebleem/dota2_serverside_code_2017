
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CNavOpenList::PriorityQueueLessFunc  (line 98, @0x00000000031e7c80, libserver.so)
bool __fastcall CNavOpenList::PriorityQueueLessFunc(
        const CNavOpenListElement *const A,
        const CNavOpenListElement *const B)
{
  return A->m_flTotalCost > B->m_flTotalCost;
}


