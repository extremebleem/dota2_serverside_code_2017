
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CGlobalVarsBase::curtime  (line 67, @0x0000000001f25f00, libserver.so)
// callers: CDecalGameSystem::RenderDebuggingData, CSpawnGroupMgrGameSystem::StreamEntitiesToFile, CEntityDebugGameSystem::OnPostSimulate, CSoundOpGameSystem::DoStartSoundEvent, CAnimationLayer::Init, CBaseAnimating::StudioFrameAdvance, CBaseAnimatingController::ResetSequenceInfo, CBaseAnimatingController::AnimationFrameAdvanceInternal, CBaseAnimatingController::SetSequence, CBaseAnimatingController::UpdateIK, CBaseAnimatingOverlayController::SetupSequences, CBreakableProp::OnAttemptPhysGunPickup (129 total)
float __fastcall CGlobalVarsBase::curtime(const CGlobalVarsBase *const this, bool bIgnoreSimulationCheck)
{
  float result; // xmm0_4
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax

  result = 0.0;
  if ( this )
  {
    if ( !this->m_bEnableAssertions && !bIgnoreSimulationCheck && !this->m_bInSimulation )
    {
      m_pfnWarningFunc = this->m_pfnWarningFunc;
      if ( m_pfnWarningFunc )
        (m_pfnWarningFunc)(1, 0.0);
    }
    return this->m_flCurrentTime;
  }
  return result;
}


