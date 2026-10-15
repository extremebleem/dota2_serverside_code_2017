
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CEntityHandle::GetHandleEntity  (line 31, @0x000000000217d570, libserver.so)  // inlines: CEntityHandle, GetEntryIndex, GetInstance, GetSerialNumber, IndexToIdentity, Init, LookupEntity
// callers: CBasePlayer::ItemPostFrame, CBaseCombatCharacter::Event_Killed, CBaseEntity::PhysicsTryMove, CBaseEntity::PhysicsToss, CMovementSpeedMod::InputSpeedMod, CBasePlayer::SetObserverMode, CalculateObjectStress, CPointValueRemapper::UpdateInternal, CPropVRHand::SetActiveAttachmentInternal, BreakModelCreateSingle, CPropVRHand::FindAndRemoveHandAttachmentInternal, CPropVRHand::SwapLogicalAttachmentsWith (87 total)
IHandleEntity *__fastcall CEntityHandle::GetHandleEntity(const CEntityHandle *const this)
{
  unsigned __int16 v1; // dx
  int v2; // esi
  uint32 v3; // edx
  IHandleEntity *result; // rax
  CEntityIdentity *v5; // rcx
  CEntityIdentity *v6; // rcx

  if ( this->m_Index == -1 )
  {
    v1 = 0x7FFF;
    v2 = 0x7FFF;
  }
  else
  {
    v1 = this->m_Index & 0x7FFF;
    v2 = v1;
  }
  v3 = (this->m_Index >> 15 << 15) | v1 & 0x7FFF;
  result = 0;
  if ( v3 + 2 > 1 )
  {
    v5 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v2 >> 9];
    if ( v5 != 0 )
    {
      v6 = &v5[v2 & 0x1FF];
      if ( v6 != 0 && v3 == v6->m_EHandle.m_Index )
        return v6->m_pInstance;
    }
  }
  return result;
}


