
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CSosFieldData::ClearData  (line 85, @0x0000000001f83690, libserver.so)
// calls: operator delete []
// callers: CSosFieldDataFloat::CSosFieldDataFloat, PlayImpactSoundEventAtPosition, CPhysicsGameSystem::PhysFrictionSound, CSoundOpGameSystem::PauseSoundEvent, CSoundOpGameSystem::UnPauseSoundEvent, CSoundOpGameSystem::snd_sos_sv_test_gender, Script_StartSoundEventFromPositionReliable, Script_StartSoundEventFromPositionUnreliable, PlaySoundEventAtPosition, CPhysicsGameSystem::UpdateFrictionSounds, Script_SetOpvarFloatPlayer, Script_SetOpvarFloatAll (63 total)
void __fastcall CSosFieldData::ClearData(CSosFieldData *const this)
{
  SosFieldValueMem_t *m_pData; // rdi

  if ( this->m_nAllocSize > 8 )
  {
    m_pData = this->m_pData;
    if ( m_pData != 0 )
      operator delete[](m_pData);
  }
  this->m_fieldDataType = SOFieldDataType_t::SOFTYPE_INVALID;
  this->m_nFieldDataSize = 0;
  this->m_nAllocSize = 0;
  this->m_pData = 0;
}


