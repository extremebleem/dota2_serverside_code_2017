
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// UTIL_RestartAmbientSounds  (line 30, @0x0000000002391c10, libserver.so)  // inlines: String, ToCStr, strstr
// calls: CGameEntitySystem::FindEntityByClassname, strstr
// callers: CBasePlayer::ForceClientDllUpdate
// strings: "ambient_generic", "mp3"
void __cdecl UTIL_RestartAmbientSounds()
{
  CBaseEntity *v0; // rbx
  CBaseEntity *EntityByClassname; // rax
  const char *v2; // rdi

  v0 = 0;
  while ( 1 )
  {
    EntityByClassname = CGameEntitySystem::FindEntityByClassname(g_pGameEntitySystem, v0, "ambient_generic");
    v0 = EntityByClassname;
    if ( EntityByClassname == 0 )
      break;
    if ( LOBYTE(EntityByClassname[1].m_NetworkTransmitComponent.m_PVSInfo.m_nAreaNum) != 0 )
    {
      v2 = *&EntityByClassname[1].m_NetworkTransmitComponent.m_PVSInfo.m_pClustersInline[2];
      if ( v2 != 0 && strstr(v2, "mp3") != 0 )
        (*(v0->_vptr_IHandleEntity + 208))(v0, 1);
      (*(v0->_vptr_IHandleEntity + 208))(v0, 1);
    }
  }
}


// UTIL_EmitSoundSuit  (line 63, @0x0000000002398cd0, libserver.so)  // inlines: CEntityIndex, CPASAttenuationFilter, CPASFilter, CUtlMemory, CUtlVector, CUtlVectorBase, EmitSound_t, Get, GetEntityIdentity, GetEntryIndex, GetFloat, GetInstance, IndexToIdentity, IsAvailable, IsValid, LookupEntity, Purge, RemoveAll, SetSoundName, SoundEventGuid_t, curtime, entindex, operator CEntityInstance*, operator==, ~CPASAttenuationFilter, ~CPASFilter, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~EmitSound_t
// calls: CRecipientFilter::CRecipientFilter, CRecipientFilter::AddRecipientsByPAS, CPASAttenuationFilter::Filter, CRecipientFilter::MakeReliable, CEntityInstance::GetEntityIndex, CBaseEntity::EmitSound, CRecipientFilter::~CRecipientFilter, CUtlMemory<Vector, int>::Purge, __stack_chk_fail, _Unwind_Resume, CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::~CUtlVectorBase
// globals: CEntityHandle::gm_pEntityList
void __fastcall UTIL_EmitSoundSuit(CBaseEntity *entity, const char *sample)
{
  int v2; // r14d
  float m_flCurrentTime; // xmm0_4
  CGlobalVars *v6; // rbx
  uint32 m_Index; // eax
  CBaseEntity *m_pInstance; // rcx
  CEntityIdentity *v9; // rdx
  CEntityIdentity *v10; // rdx
  __m128d v11; // xmm0
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  int v13; // xmm1_4
  float v14; // xmm1_4
  CEntityIndex v15; // eax
  float fvol; // [rsp+Ch] [rbp-1D4h]
  EmitSound_t ep; // [rsp+10h] [rbp-1D0h] BYREF
  CPASAttenuationFilter filter; // [rsp+70h] [rbp-170h] BYREF
  unsigned __int64 v19; // [rsp+1A8h] [rbp-38h]

  v2 = 100;
  v19 = __readfsqword(0x28u);
  fvol = suitvolume.m_pParent->m_Value.m_fValue;
  if ( (*(*random_valve + 16LL))(random_valve, 0, 1) != 0 )
    v2 = (*(*random_valve + 16LL))(random_valve, 0, 6) + 98;
  m_flCurrentTime = 0.0;
  v6 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        (m_pfnWarningFunc)(1, 0.0);
    }
    m_flCurrentTime = v6->m_flCurrentTime;
  }
  if ( m_flCurrentTime <= g_AIFriendliesTalkSemaphore.m_ReleaseTime )
  {
    m_Index = g_AIFriendliesTalkSemaphore.m_hCurrentTalker.m_Index;
    m_pInstance = 0;
    if ( m_Index + 2 > 1 )
    {
      v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(g_AIFriendliesTalkSemaphore.m_hCurrentTalker.m_Index) >> 9)
                                                          & 0x3F];
      if ( v9 != 0 )
      {
        v10 = &v9[g_AIFriendliesTalkSemaphore.m_hCurrentTalker.m_Index & 0x1FF];
        if ( v10 != 0 && m_Index == v10->m_EHandle.m_Index )
          m_pInstance = v10->m_pInstance;
      }
    }
    if ( entity != m_pInstance )
    {
      v11 = _mm_cvtps_pd(LODWORD(fvol));
      v11.m128d_f64[0] = v11.m128d_f64[0] * 0.3;
      fvol = _mm_movedup_pd(v11).m128d_f64[0];
    }
  }
  if ( fvol > 0.05 )
  {
    *&ep.m_nChannel = (*(entity->_vptr_IHandleEntity + 186))(entity);
    LODWORD(ep.m_pSoundName) = v13;
    CRecipientFilter::CRecipientFilter(&filter);
    filter._vptr_IRecipientFilter = &off_3FCB190;
    CRecipientFilter::AddRecipientsByPAS(&filter, &ep);
    filter._vptr_IRecipientFilter = &off_3FECD70;
    *&ep.m_nChannel = (*(entity->_vptr_IHandleEntity + 186))(entity);
    *&ep.m_pSoundName = v14;
    CPASAttenuationFilter::Filter(&filter, &ep, 0.80000001, v14);
    CRecipientFilter::MakeReliable(&filter);
    ep.m_nFlags = 0;
    ep.m_pOrigin = 0;
    ep.m_flSoundTime = 0.0;
    ep.m_pflSoundDuration = 0;
    ep.m_bEmitCloseCaption = 1;
    ep.m_bWarnOnMissingCloseCaption = 0;
    ep.m_bWarnOnDirectWaveReference = 0;
    ep.m_nSpeakerEntity.m_Data = -1;
    ep.m_UtlVecSoundOrigin.m_Size = 0;
    memset(&ep.m_UtlVecSoundOrigin.m_Memory, 0, 21);
    ep.m_nChannel = 6;
    ep.m_pSoundName = sample;
    ep.m_flVolume = fvol;
    ep.m_SoundLevel = soundlevel_t::SNDLVL_NORM;
    ep.m_nPitch = v2;
    v15.m_Data = CEntityInstance::GetEntityIndex(entity).m_Data;
    CBaseEntity::EmitSound(&filter, v15, &ep);
    ep.m_UtlVecSoundOrigin.m_Size = 0;
    if ( (ep.m_UtlVecSoundOrigin.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<Vector,int>::Purge(&ep.m_UtlVecSoundOrigin.m_Memory);
      if ( (ep.m_UtlVecSoundOrigin.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<Vector,int>::Purge(&ep.m_UtlVecSoundOrigin.m_Memory);
    }
    filter._vptr_IRecipientFilter = &off_3FCB190;
    CRecipientFilter::~CRecipientFilter(&filter);
  }
}


