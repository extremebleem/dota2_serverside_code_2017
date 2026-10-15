
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CTrackedControllerManager::YouForgot::ToDefine_DEFINE_GAME_SYSTEM  (line 33, @0x00000000023ca2c0, libserver.so)
void __cdecl CTrackedControllerManager::YouForgot::ToDefine_DEFINE_GAME_SYSTEM()
{
  ;
}


// vr_vrfly_does_noclip  (line 38, @0x00000000023ca460, libserver.so)  // inlines: Arg
// calls: CTrackedControllerManager::NotifyVRFlyNoclipChanged, Msg
// strings: "vr_vrfly_does_noclip: %d"
// globals: g_bVrFlyNoClipEnabled, g_TrackedControllerManager
void __fastcall vr_vrfly_does_noclip(const CCommandContext *const ctx, const CCommand *const args)
{
  const char *v2; // rax
  bool v3; // al

  if ( args->m_nArgc == 1 )
  {
    Msg("vr_vrfly_does_noclip: %d", g_bVrFlyNoClipEnabled);
  }
  else
  {
    v2 = "";
    if ( args->m_nArgc > 1 )
      v2 = args->m_ppArgv[1];
    v3 = *v2 == 49;
    if ( v3 != g_bVrFlyNoClipEnabled )
    {
      g_bVrFlyNoClipEnabled = v3;
      if ( g_pVr != 0 && (*(*g_pVr + 624LL))(g_pVr) != 0 )
        CTrackedControllerManager::NotifyVRFlyNoclipChanged(&g_TrackedControllerManager, g_bVrFlyNoClipEnabled);
    }
  }
}


// CTrackedControllerManager::IsVrFlyNoClipEnabled  (line 62, @0x00000000023ca2d0, libserver.so)
// callers: CPropVRTrackedObject::VRFly_OnBegin, CPropVRTrackedObject::CPropVRTrackedObject
// globals: g_bVrFlyNoClipEnabled
bool __fastcall CTrackedControllerManager::IsVrFlyNoClipEnabled(const CTrackedControllerManager *const this)
{
  return g_bVrFlyNoClipEnabled;
}


// CTrackedControllerManager::CTrackedControllerManager  (line 68, @0x00000000023ca2e0, libserver.so)  // inlines: CThreadMutex
// calls: pthread_mutexattr_init, pthread_mutexattr_settype, pthread_mutex_init
void __fastcall CTrackedControllerManager::CTrackedControllerManager(CTrackedControllerManager *const this)
{
  pthread_mutexattr_t *p_m_Attr; // rbx
  CThreadMutex *p_m_mutex; // r12

  p_m_Attr = &this->m_mutex.m_Attr;
  p_m_mutex = &this->m_mutex;
  this->_vptr_IGameSystem = off_40B9490;
  pthread_mutexattr_init(&this->m_mutex.m_Attr);
  pthread_mutexattr_settype(p_m_Attr, 1);
  pthread_mutex_init(&p_m_mutex->m_Mutex, p_m_Attr);
}


// CTrackedControllerManager::GameInit  (line 73, @0x00000000023bf730, libserver.so)  // inlines: CAutoLockT, Lock, Unlock, ~CAutoLockT
// calls: pthread_mutex_lock, pthread_mutex_unlock
void __fastcall CTrackedControllerManager::GameInit(
        CTrackedControllerManager *const this,
        const EventGameInit_t *const msg)
{
  CThreadMutex *p_m_mutex; // rbx

  p_m_mutex = &this->m_mutex;
  pthread_mutex_lock(&this->m_mutex.m_Mutex);
  pthread_mutex_unlock(&p_m_mutex->m_Mutex);
}


// CTrackedControllerManager::GameShutdown  (line 94, @0x00000000023bf700, libserver.so)  // inlines: CAutoLockT, Lock, Unlock, ~CAutoLockT
// calls: pthread_mutex_lock, pthread_mutex_unlock
void __fastcall CTrackedControllerManager::GameShutdown(
        CTrackedControllerManager *const this,
        const EventGameShutdown_t *const msg)
{
  CThreadMutex *p_m_mutex; // rbx

  p_m_mutex = &this->m_mutex;
  pthread_mutex_lock(&this->m_mutex.m_Mutex);
  pthread_mutex_unlock(&p_m_mutex->m_Mutex);
}


// CTrackedControllerManager::NotifyVRFlyNoclipChanged  (line 106, @0x00000000023ca320, libserver.so)  // inlines: CEntityHandle, Get, GetEntryIndex, GetHMDAvatar, GetHandleEntity, GetInstance, GetSerialNumber, IndexToIdentity, Init, LookupEntity
// calls: UTIL_PlayerByIndex, CPropVRTrackedObject::OnVRFlyNoClipChanged, CPropHMDAvatar::GetVRHandRaw
// callers: vr_vrfly_does_noclip
void __fastcall CTrackedControllerManager::NotifyVRFlyNoclipChanged(
        CTrackedControllerManager *const this,
        bool bEnable)
{
  int v3; // r12d
  CBasePlayer *v4; // rax
  unsigned __int16 v5; // dx
  int v6; // esi
  int v7; // eax
  CEntityIdentity *v8; // rdx
  CEntityIdentity *v9; // rdx
  CPropHMDAvatar *m_pInstance; // r15
  vr_controller_slots_t v11; // ebx
  CPropVRHand *VRHandRaw; // rax

  v3 = 0;
  while ( v3 < gpGlobals->maxClients )
  {
    while ( 1 )
    {
      v4 = UTIL_PlayerByIndex(++v3);
      if ( v4 == 0 )
        break;
      if ( v4->m_hPropHMDAvatar.m_Value.m_Index == -1 )
      {
        v5 = 0x7FFF;
        v6 = 0x7FFF;
      }
      else
      {
        v5 = v4->m_hPropHMDAvatar.m_Value.m_Index & 0x7FFF;
        v6 = v5;
      }
      v7 = (v4->m_hPropHMDAvatar.m_Value.m_Index >> 15 << 15) | v5 & 0x7FFF;
      if ( (v7 + 2) <= 1 )
        break;
      v8 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v6 >> 9];
      if ( v8 == 0 )
        break;
      v9 = &v8[v6 & 0x1FF];
      if ( v9 == 0 )
        break;
      if ( v7 != v9->m_EHandle.m_Index )
        break;
      m_pInstance = v9->m_pInstance;
      if ( v9->m_pInstance == 0 )
        break;
      v11 = vr_controller_slots_t::VRCONTROLLER_SLOT_HAND0;
      CPropVRTrackedObject::OnVRFlyNoClipChanged(v9->m_pInstance, bEnable);
      do
      {
        VRHandRaw = CPropHMDAvatar::GetVRHandRaw(m_pInstance, v11);
        if ( VRHandRaw != 0 )
          CPropVRTrackedObject::OnVRFlyNoClipChanged(VRHandRaw, bEnable);
        ++v11;
      }
      while ( v11 != vr_controller_slots_t::VRCONTROLLER_COUNT );
      if ( v3 >= gpGlobals->maxClients )
        return;
    }
  }
}


// CTrackedControllerManager::FrameUpdatePreEntityThink  (line 303, @0x00000000023ca5b0, libserver.so)  // inlines: CAutoLockT, Lock, Unlock, ~CAutoLockT
// calls: pthread_mutex_lock, CTrackedControllerManager::UpdateShared, pthread_mutex_unlock, _Unwind_Resume
void __fastcall CTrackedControllerManager::FrameUpdatePreEntityThink(
        CTrackedControllerManager *const this,
        const EventServerPreEntityThink_t *const msg)
{
  CThreadMutex *p_m_mutex; // rbx

  p_m_mutex = &this->m_mutex;
  pthread_mutex_lock(&this->m_mutex.m_Mutex);
  CTrackedControllerManager::UpdateShared(this);
  pthread_mutex_unlock(&p_m_mutex->m_Mutex);
}


// CTrackedControllerManager::UpdateVRHandPosesServer  (line 314, @0x00000000023ca4e0, libserver.so)  // inlines: CAutoLockT, Lock, Unlock, ~CAutoLockT
// calls: pthread_mutex_lock, UTIL_PlayerByIndex, VR_GetActiveHMDAnchor, CBaseEntity::GetAbsOrigin, CBasePlayer::UpdateAnchorPosition, pthread_mutex_unlock, _Unwind_Resume
// callers: CTrackedControllerManager::UpdateShared
void __fastcall CTrackedControllerManager::UpdateVRHandPosesServer(CTrackedControllerManager *const this)
{
  CThreadMutex *p_m_mutex; // r14
  int v2; // ebx
  CBasePlayer *v3; // rax
  CBasePlayer *v4; // r12
  CBaseEntity *ActiveHMDAnchor; // rax
  Vector v6; // 0:xmm0_8.8,8:xmm1_4.4

  p_m_mutex = &this->m_mutex;
  v2 = 0;
  pthread_mutex_lock(&this->m_mutex.m_Mutex);
  while ( v2 < gpGlobals->maxClients )
  {
    while ( 1 )
    {
      v3 = UTIL_PlayerByIndex(++v2);
      v4 = v3;
      if ( v3 == 0 )
        break;
      ActiveHMDAnchor = VR_GetActiveHMDAnchor(v3);
      if ( ActiveHMDAnchor == 0 )
        break;
      v6 = *CBaseEntity::GetAbsOrigin(ActiveHMDAnchor);
      CBasePlayer::UpdateAnchorPosition(v4, v6);
      if ( v2 >= gpGlobals->maxClients )
        goto LABEL_6;
    }
  }
LABEL_6:
  pthread_mutex_unlock(&p_m_mutex->m_Mutex);
}


// CTrackedControllerManager::UpdateShared  (line 553, @0x00000000023ca570, libserver.so)  // inlines: CAutoLockT, Lock, Unlock, ~CAutoLockT
// calls: pthread_mutex_lock, CTrackedControllerManager::UpdateVRHandPosesServer, pthread_mutex_unlock, _Unwind_Resume
// callers: CTrackedControllerManager::FrameUpdatePreEntityThink
void __fastcall CTrackedControllerManager::UpdateShared(CTrackedControllerManager *const this)
{
  CThreadMutex *p_m_mutex; // rbx

  p_m_mutex = &this->m_mutex;
  pthread_mutex_lock(&this->m_mutex.m_Mutex);
  CTrackedControllerManager::UpdateVRHandPosesServer(this);
  pthread_mutex_unlock(&p_m_mutex->m_Mutex);
}


