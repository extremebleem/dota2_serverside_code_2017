
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// INextBot::IsDebugging  (line 266, @0x0000000002f20670, libserver.so)  // inlines: IsDebugFilterMatch
// calls: NextBotManager::IsDebugFilterMatch
// callers: NextBotGroundLocomotion::ClimbUpToLedge, NextBotGroundLocomotion::UpdateGroundConstraint
bool __fastcall INextBot::IsDebugging(const INextBot *const this, unsigned int type)
{
  return (type & g_NextBotManager.m_debugType) != 0
      && (g_NextBotManager.m_debugFilterList.m_Size == 0 || NextBotManager::IsDebugFilterMatch(&g_NextBotManager, this))
      && (*(this->_vptr_INextBotEventResponder + 96))(this, type);
}


