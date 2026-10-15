
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// IGameEventSystem::PostEvent<CDOTAUserMsg_CombatLogData_t>  (line 191, @0x00000000024b0cd0, libserver.so)  // inlines: FindGameEvent<CDOTAUserMsg_CombatLogData_t>, FindOrCreateGameEvent<CDOTAUserMsg_CombatLogData_t>
// callers: CDOTA_CombatLog::SendLogToPlayer
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_CombatLogData_t>(bool)::s_hEvent
void __fastcall IGameEventSystem::PostEvent<CDOTAUserMsg_CombatLogData_t>(
        IGameEventSystem *const this,
        CSplitScreenSlot nSourceSplitscreenSlot,
        bool bPostToServer,
        IRecipientFilter *pClientFilter,
        const CDOTAUserMsg_CombatLogData_t *const msg)
{
  __int64 v8; // r12
  void (__fastcall *v9)(IGameEventSystem *const, _QWORD, bool, IRecipientFilter *, __int64, const CDOTAUserMsg_CombatLogData_t *const, __int64); // r13

  v8 = IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_CombatLogData_t>(bool)::s_hEvent;
  v9 = *(*this + 128LL);
  (*(*g_pNetworkMessages + 96LL))(
    g_pNetworkMessages,
    IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_CombatLogData_t>(bool)::s_hEvent);
  v9(this, nSourceSplitscreenSlot.m_Data, bPostToServer, pClientFilter, v8, msg, 232);
}


// IGameEventSystem::PostEvent<CDOTAUserMsg_SendGenericToolTip_t>  (line 191, @0x00000000027a27a0, libserver.so)  // inlines: FindGameEvent<CDOTAUserMsg_SendGenericToolTip_t>, FindOrCreateGameEvent<CDOTAUserMsg_SendGenericToolTip_t>
// callers: CDOTA_Tutorial::ParseLessonKeys
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_SendGenericToolTip_t>(bool)::s_hEvent
void __fastcall IGameEventSystem::PostEvent<CDOTAUserMsg_SendGenericToolTip_t>(
        IGameEventSystem *const this,
        CSplitScreenSlot nSourceSplitscreenSlot,
        bool bPostToServer,
        IRecipientFilter *pClientFilter,
        const CDOTAUserMsg_SendGenericToolTip_t *const msg)
{
  __int64 v8; // r12
  void (__fastcall *v9)(IGameEventSystem *const, _QWORD, bool, IRecipientFilter *, __int64, const CDOTAUserMsg_SendGenericToolTip_t *const, __int64); // r13

  v8 = IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_SendGenericToolTip_t>(bool)::s_hEvent;
  v9 = *(*this + 128LL);
  (*(*g_pNetworkMessages + 96LL))(
    g_pNetworkMessages,
    IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_SendGenericToolTip_t>(bool)::s_hEvent);
  v9(this, nSourceSplitscreenSlot.m_Data, bPostToServer, pClientFilter, v8, msg, 48);
}


