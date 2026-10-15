
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// IDOTA_SpeechQueuedCallback::~IDOTA_SpeechQueuedCallback  (line 178, @0x0000000002719360, libserver.so)
void __fastcall IDOTA_SpeechQueuedCallback::~IDOTA_SpeechQueuedCallback(IDOTA_SpeechQueuedCallback *const this)
{
  this->_vptr_IDOTA_SpeechQueuedCallback = &off_4186FD0;
}


// IDOTA_SpeechQueuedCallback::~IDOTA_SpeechQueuedCallback  (line 178, @0x00000000027309a0, libserver.so)  // inlines: ~IDOTA_SpeechQueuedCallback
// calls: operator delete
void __fastcall IDOTA_SpeechQueuedCallback::~IDOTA_SpeechQueuedCallback(IDOTA_SpeechQueuedCallback *const this)
{
  this->_vptr_IDOTA_SpeechQueuedCallback = &off_4186FD0;
  operator delete(this);
}


// CDOTA_SpeechCallbackForwardToPlayersAnnouncer::~CDOTA_SpeechCallbackForwardToPlayersAnnouncer  (line 493, @0x0000000002728a70, libserver.so)  // inlines: ~IDOTA_SpeechQueuedCallback
void __fastcall CDOTA_SpeechCallbackForwardToPlayersAnnouncer::~CDOTA_SpeechCallbackForwardToPlayersAnnouncer(
        CDOTA_SpeechCallbackForwardToPlayersAnnouncer *const this)
{
  this->_vptr_IDOTA_SpeechQueuedCallback = &off_4186FD0;
}


// CDOTA_SpeechCallbackForwardToPlayersAnnouncer::~CDOTA_SpeechCallbackForwardToPlayersAnnouncer  (line 493, @0x00000000027309c0, libserver.so)  // inlines: ~CDOTA_SpeechCallbackForwardToPlayersAnnouncer, ~IDOTA_SpeechQueuedCallback
// calls: operator delete
void __fastcall CDOTA_SpeechCallbackForwardToPlayersAnnouncer::~CDOTA_SpeechCallbackForwardToPlayersAnnouncer(
        CDOTA_SpeechCallbackForwardToPlayersAnnouncer *const this)
{
  this->_vptr_IDOTA_SpeechQueuedCallback = &off_4186FD0;
  operator delete(this);
}


// CDOTA_SpeechCallbackForwardToPlayersAnnouncer::CDOTA_SpeechCallbackForwardToPlayersAnnouncer  (line 496, @0x0000000002975e20, libserver.so)  // inlines: CEntityHandle, CHandle, GetEHandle, GetEntryIndex, GetSerialNumber, Set
// callers: CDOTA_BaseNPC_Hero::RespawnHero
void __fastcall CDOTA_SpeechCallbackForwardToPlayersAnnouncer::CDOTA_SpeechCallbackForwardToPlayersAnnouncer(
        CDOTA_SpeechCallbackForwardToPlayersAnnouncer *const this,
        CBasePlayer *pPlayer)
{
  CEntityIdentity *m_pEntity; // rdx
  int v3; // eax
  __int16 v4; // cx

  this->m_hPlayer.m_Index = -1;
  this->_vptr_IDOTA_SpeechQueuedCallback = &off_42AA490;
  if ( pPlayer != 0 )
  {
    m_pEntity = pPlayer->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v3 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      v4 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v4 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LOWORD(this->m_hPlayer.m_Index) = v4 | this->m_hPlayer.m_Index & 0x8000;
      this->m_hPlayer.m_Index = (v3 << 15) | this->m_hPlayer.m_Index & 0x7FFF;
    }
  }
}


