
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CPlayerLocalData::operator=  (line 26, @0x0000000002009040, libserver.so)  // inlines: NetworkStateChanged, Set, operator!=, operator=
// calls: fogparams_t::operator=
// callers: CSchemaClassBinding<CPlayerLocalData>::AllocateAndCopyConstruct, CSchemaClassBinding<CPlayerLocalData>::Copy
CPlayerLocalData *__fastcall CPlayerLocalData::operator=(CPlayerLocalData *const this, __int64 a2)
{
  vec_t *v4; // rax
  CNetworkArrayBase<Vector,8,audioparams_t::NetworkVar_localSound> *p_localSound; // rdx
  vec_t v6; // xmm0_4

  this->m_NetworkVar_PathIndex.m_Value = *(a2 + 8);
  this->m_pOuter = *(a2 + 16);
  this->m_chAreaBits = *(a2 + 24);
  this->m_chAreaPortalBits = *(a2 + 56);
  this->m_nStepside = *(a2 + 80);
  this->m_nOldButtons = *(a2 + 84);
  if ( this->m_iHideHUD.m_Value != *(a2 + 88) )
  {
    (*(this->_vptr_CPlayerLocalData + 2))(this, 88, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_iHideHUD.m_Value = *(a2 + 88);
  }
  if ( this->m_flFOVRate.m_Value != *(a2 + 92) )
  {
    (*(this->_vptr_CPlayerLocalData + 2))(this, 92, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_flFOVRate.m_Value = *(a2 + 92);
  }
  this->m_vecOverViewpoint.x = *(a2 + 96);
  this->m_vecOverViewpoint.y = *(a2 + 100);
  this->m_vecOverViewpoint.z = *(a2 + 104);
  if ( this->m_bDucked.m_Value != *(a2 + 108) )
  {
    (*(this->_vptr_CPlayerLocalData + 2))(this, 108, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bDucked.m_Value = *(a2 + 108);
  }
  if ( this->m_bDucking.m_Value != *(a2 + 109) )
  {
    (*(this->_vptr_CPlayerLocalData + 2))(this, 109, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bDucking.m_Value = *(a2 + 109);
  }
  if ( this->m_bInDuckJump.m_Value != *(a2 + 110) )
  {
    (*(this->_vptr_CPlayerLocalData + 2))(this, 110, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bInDuckJump.m_Value = *(a2 + 110);
  }
  if ( this->m_nDuckTimeMsecs.m_Value != *(a2 + 112) )
  {
    (*(this->_vptr_CPlayerLocalData + 2))(this, 112, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_nDuckTimeMsecs.m_Value = *(a2 + 112);
  }
  if ( this->m_nDuckJumpTimeMsecs.m_Value != *(a2 + 116) )
  {
    (*(this->_vptr_CPlayerLocalData + 2))(this, 116, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_nDuckJumpTimeMsecs.m_Value = *(a2 + 116);
  }
  if ( this->m_nJumpTimeMsecs.m_Value != *(a2 + 120) )
  {
    (*(this->_vptr_CPlayerLocalData + 2))(this, 120, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_nJumpTimeMsecs.m_Value = *(a2 + 120);
  }
  if ( this->m_flFallVelocity.m_Value != *(a2 + 124) )
  {
    (*(this->_vptr_CPlayerLocalData + 2))(this, 124, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_flFallVelocity.m_Value = *(a2 + 124);
  }
  this->m_pOldSkyCamera = *(a2 + 128);
  if ( this->m_bDrawViewmodel.m_Value != *(a2 + 136) )
  {
    (*(this->_vptr_CPlayerLocalData + 2))(this, 136, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bDrawViewmodel.m_Value = *(a2 + 136);
  }
  if ( this->m_bWearingSuit.m_Value != *(a2 + 137) )
  {
    (*(this->_vptr_CPlayerLocalData + 2))(this, 137, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bWearingSuit.m_Value = *(a2 + 137);
  }
  if ( this->m_bPoisoned.m_Value != *(a2 + 138) )
  {
    (*(this->_vptr_CPlayerLocalData + 2))(this, 138, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bPoisoned.m_Value = *(a2 + 138);
  }
  if ( this->m_flStepSize.m_Value != *(a2 + 140) )
  {
    (*(this->_vptr_CPlayerLocalData + 2))(this, 140, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_flStepSize.m_Value = *(a2 + 140);
  }
  if ( this->m_bAllowAutoMovement.m_Value != *(a2 + 144) )
  {
    (*(this->_vptr_CPlayerLocalData + 2))(this, 144, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bAllowAutoMovement.m_Value = *(a2 + 144);
  }
  if ( this->m_bSlowMovement.m_Value != *(a2 + 145) )
  {
    (*(this->_vptr_CPlayerLocalData + 2))(this, 145, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bSlowMovement.m_Value = *(a2 + 145);
  }
  if ( this->m_bAutoAimTarget.m_Value != *(a2 + 146) )
  {
    (*(this->_vptr_CPlayerLocalData + 2))(this, 146, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bAutoAimTarget.m_Value = *(a2 + 146);
  }
  if ( this->m_skybox3d.scale.m_Value != *(a2 + 160) )
  {
    (*(this->m_skybox3d._vptr_sky3dparams_t + 2))(&this->m_skybox3d, 8, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_skybox3d.scale.m_Value = *(a2 + 160);
  }
  if ( *(a2 + 164) != this->m_skybox3d.origin.m_Value.x
    || *(a2 + 168) != this->m_skybox3d.origin.m_Value.y
    || *(a2 + 172) != this->m_skybox3d.origin.m_Value.z )
  {
    (*(this->m_skybox3d._vptr_sky3dparams_t + 2))(&this->m_skybox3d, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_skybox3d.origin.m_Value.x = *(a2 + 164);
    this->m_skybox3d.origin.m_Value.y = *(a2 + 168);
    this->m_skybox3d.origin.m_Value.z = *(a2 + 172);
  }
  if ( this->m_skybox3d.area.m_Value != *(a2 + 176) )
  {
    (*(this->m_skybox3d._vptr_sky3dparams_t + 2))(&this->m_skybox3d, 24, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_skybox3d.area.m_Value = *(a2 + 176);
  }
  if ( this->m_skybox3d.bClip3DSkyBoxNearToWorldFar.m_Value != *(a2 + 177) )
  {
    (*(this->m_skybox3d._vptr_sky3dparams_t + 2))(&this->m_skybox3d, 25, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_skybox3d.bClip3DSkyBoxNearToWorldFar.m_Value = *(a2 + 177);
  }
  if ( this->m_skybox3d.flClip3DSkyBoxNearToWorldFarOffset.m_Value != *(a2 + 180) )
  {
    (*(this->m_skybox3d._vptr_sky3dparams_t + 2))(&this->m_skybox3d, 28, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_skybox3d.flClip3DSkyBoxNearToWorldFarOffset.m_Value = *(a2 + 180);
  }
  fogparams_t::operator=(&this->m_skybox3d.fog, a2 + 184);
  v4 = (a2 + 288);
  p_localSound = &this->m_audio.localSound;
  do
  {
    v6 = *v4;
    v4 += 3;
    p_localSound = (p_localSound + 12);
    p_localSound[-1].m_Value[7].x = v6;
    p_localSound[-1].m_Value[7].y = *(v4 - 2);
    p_localSound[-1].m_Value[7].z = *(v4 - 1);
  }
  while ( v4 != (a2 + 384) );
  if ( this->m_audio.soundscapeIndex.m_Value != *(a2 + 384) )
  {
    (*(this->m_audio._vptr_audioparams_t + 2))(&this->m_audio, 104, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_audio.soundscapeIndex.m_Value = *(a2 + 384);
  }
  if ( this->m_audio.localBits.m_Value != *(a2 + 388) )
  {
    (*(this->m_audio._vptr_audioparams_t + 2))(&this->m_audio, 108, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_audio.localBits.m_Value = *(a2 + 388);
  }
  if ( this->m_audio.soundscapeEntityListIndex.m_Value != *(a2 + 392) )
  {
    (*(this->m_audio._vptr_audioparams_t + 2))(&this->m_audio, 112, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_audio.soundscapeEntityListIndex.m_Value = *(a2 + 392);
  }
  fogparams_t::operator=(&this->m_fog, a2 + 400);
  return this;
}


// CPlayerLocalData::Schema_DynamicBinding  (line 28, @0x00000000023064e0, libserver.so)
// calls: CPlayerLocalData::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CPlayerLocalData::Schema_DynamicBinding(const CPlayerLocalData *const this)
{
  CPlayerLocalData::Schema_VerifyBindingIsRegistered();
  return CPlayerLocalData::s_pSchemaBinding;
}


// CPlayerLocalData::NetworkStateChanged  (line 37, @0x0000000002339680, libserver.so)
void __fastcall CPlayerLocalData::NetworkStateChanged(CPlayerLocalData *const this)
{
  ;
}


// CPlayerLocalData::NetworkStateChanged  (line 37, @0x0000000002339690, libserver.so)
void __fastcall CPlayerLocalData::NetworkStateChanged(
        CPlayerLocalData *const this,
        uint32 nLocalOffset,
        int32 nArrayIndex,
        ChangeAccessorFieldPathIndex_t nPathIndex)
{
  ;
}


// CPlayerLocalData::NetworkStateChangedLog  (line 37, @0x00000000023396a0, libserver.so)
void __fastcall CPlayerLocalData::NetworkStateChangedLog(
        const CPlayerLocalData *const this,
        const char *pVarName,
        const char *pMsg)
{
  ;
}


// CPlayerLocalData::NetworkVar_m_iHideHUD::NetworkStateChanged  (line 88, @0x000000000230c060, libserver.so)
// callers: CBasePlayer::PreThink, CBasePlayer::GetInVehicle
void __fastcall CPlayerLocalData::NetworkVar_m_iHideHUD::NetworkStateChanged(
        void *ptr,
        int32 nArrayIndex,
        ChangeAccessorFieldPathIndex_t nPathIndex)
{
  (*(*(ptr - 11) + 16LL))(ptr - 88, 88, nArrayIndex, nPathIndex.m_Value);
}


// CPlayerLocalData::NetworkVar_m_bDucking::NetworkStateChanged  (line 94, @0x000000000227de30, libserver.so)
// callers: CGameMovement::Duck
void __fastcall CPlayerLocalData::NetworkVar_m_bDucking::NetworkStateChanged(
        void *ptr,
        int32 nArrayIndex,
        ChangeAccessorFieldPathIndex_t nPathIndex)
{
  (*(*(ptr - 109) + 16LL))(ptr - 109, 109, nArrayIndex, nPathIndex.m_Value);
}


// CPlayerLocalData::NetworkVar_m_nDuckTimeMsecs::NetworkStateChanged  (line 98, @0x000000000227de50, libserver.so)
// callers: CGameMovement::Duck
void __fastcall CPlayerLocalData::NetworkVar_m_nDuckTimeMsecs::NetworkStateChanged(
        void *ptr,
        int32 nArrayIndex,
        ChangeAccessorFieldPathIndex_t nPathIndex)
{
  (*(*(ptr - 14) + 16LL))(ptr - 112, 112, nArrayIndex, nPathIndex.m_Value);
}


// CPlayerLocalData::NetworkVar_m_nDuckJumpTimeMsecs::NetworkStateChanged  (line 99, @0x000000000227de70, libserver.so)
// callers: CGameMovement::Duck
void __fastcall CPlayerLocalData::NetworkVar_m_nDuckJumpTimeMsecs::NetworkStateChanged(
        void *ptr,
        int32 nArrayIndex,
        ChangeAccessorFieldPathIndex_t nPathIndex)
{
  (*(*(ptr - 116) + 16LL))(ptr - 116, 116, nArrayIndex, nPathIndex.m_Value);
}


// CPlayerLocalData::NetworkVar_m_flFallVelocity::NetworkStateChanged  (line 104, @0x000000000227de90, libserver.so)
// callers: CGameMovement::CheckFalling
void __fastcall CPlayerLocalData::NetworkVar_m_flFallVelocity::NetworkStateChanged(
        void *ptr,
        int32 nArrayIndex,
        ChangeAccessorFieldPathIndex_t nPathIndex)
{
  (*(*(ptr - 124) + 16LL))(ptr - 124, 124, nArrayIndex, nPathIndex.m_Value);
}


// CPlayerLocalData::NetworkVar_m_skybox3d::NetworkStateChanged  (line 123, @0x00000000023396b0, libserver.so)  // inlines: DispatchNetworkStateChanged<CPlayerLocalData>
void __fastcall CPlayerLocalData::NetworkVar_m_skybox3d::NetworkStateChanged(
        CPlayerLocalData::NetworkVar_m_skybox3d *const this)
{
  (*(*(this - 19) + 8LL))(this - 152);
}


// CPlayerLocalData::NetworkVar_m_skybox3d::NetworkStateChangedLog  (line 123, @0x00000000023396d0, libserver.so)  // inlines: DispatchNetworkStateChangedLog<CPlayerLocalData>
void __fastcall CPlayerLocalData::NetworkVar_m_skybox3d::NetworkStateChangedLog(
        const CPlayerLocalData::NetworkVar_m_skybox3d *const this,
        const char *pVarName,
        const char *pMsg)
{
  (*(*(this - 19) + 24LL))(this - 152, pVarName, pMsg);
}


// CPlayerLocalData::NetworkVar_m_skybox3d::NetworkStateChanged  (line 123, @0x00000000023396f0, libserver.so)  // inlines: DispatchNetworkStateChanged<CPlayerLocalData>
void __fastcall CPlayerLocalData::NetworkVar_m_skybox3d::NetworkStateChanged(
        CPlayerLocalData::NetworkVar_m_skybox3d *const this,
        uint32 nLocalOffset,
        int32 nArrayIndex,
        ChangeAccessorFieldPathIndex_t nPathIndex)
{
  (*(*(this - 19) + 16LL))(this - 152, nLocalOffset + 152, nArrayIndex, nPathIndex.m_Value);
}


// CPlayerLocalData::NetworkVar_m_audio::NetworkStateChanged  (line 124, @0x0000000002339710, libserver.so)  // inlines: DispatchNetworkStateChanged<CPlayerLocalData>
void __fastcall CPlayerLocalData::NetworkVar_m_audio::NetworkStateChanged(
        CPlayerLocalData::NetworkVar_m_audio *const this)
{
  (*(*(this - 35) + 8LL))(this - 280);
}


// CPlayerLocalData::NetworkVar_m_audio::NetworkStateChangedLog  (line 124, @0x0000000002339730, libserver.so)  // inlines: DispatchNetworkStateChangedLog<CPlayerLocalData>
void __fastcall CPlayerLocalData::NetworkVar_m_audio::NetworkStateChangedLog(
        const CPlayerLocalData::NetworkVar_m_audio *const this,
        const char *pVarName,
        const char *pMsg)
{
  (*(*(this - 35) + 24LL))(this - 280, pVarName, pMsg);
}


// CPlayerLocalData::NetworkVar_m_audio::NetworkStateChanged  (line 124, @0x0000000002339750, libserver.so)  // inlines: DispatchNetworkStateChanged<CPlayerLocalData>
void __fastcall CPlayerLocalData::NetworkVar_m_audio::NetworkStateChanged(
        CPlayerLocalData::NetworkVar_m_audio *const this,
        uint32 nLocalOffset,
        int32 nArrayIndex,
        ChangeAccessorFieldPathIndex_t nPathIndex)
{
  (*(*(this - 35) + 16LL))(this - 280, nLocalOffset + 280, nArrayIndex, nPathIndex.m_Value);
}


