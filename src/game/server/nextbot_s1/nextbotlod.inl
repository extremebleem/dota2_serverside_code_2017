
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CNextbotLodManager::SortCharacterDistSqPair  (line 114, @0x0000000002f1d9b0, libserver.so)
bool __fastcall CNextbotLodManager::SortCharacterDistSqPair(
        const CNextbotLodManager::NextBotDistSqPair *const rLeft,
        const CNextbotLodManager::NextBotDistSqPair *const rRight)
{
  return rRight->m_flDistSq > rLeft->m_flDistSq;
}


