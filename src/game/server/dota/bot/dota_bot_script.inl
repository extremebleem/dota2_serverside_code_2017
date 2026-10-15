
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Bot_Script::GetBot  (line 37, @0x000000000286a9c0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// callers: CDOTA_Bot_Script::Action_PickUpItem, CDOTA_Bot_Script::Action_MoveToLocation, CDOTA_Bot_Script::GetNearbyTrees, CDOTA_Bot_Script::GetNearbyHeroes, CDOTA_Bot_Script::GetNearbyCreeps, CDOTA_Bot_Script::GetNearbyTowers, CDOTA_Bot_Script::GetNearbyBarracks, CDOTA_Bot_Script::GetNearbyShrines
// globals: CEntityHandle::gm_pEntityList
CDOTA_Bot *__fastcall CDOTA_Bot_Script::GetBot(CDOTA_Bot_Script *const this)
{
  uint32 m_Index; // edx
  CDOTA_Bot *result; // rax
  CEntityIdentity *v3; // rcx
  CEntityIdentity *v4; // rcx

  m_Index = this->m_hBaseNPC.m_Index;
  result = 0;
  if ( m_Index + 2 > 1 )
  {
    v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hBaseNPC.m_Index) >> 9) & 0x3F];
    if ( v3 != 0 )
    {
      v4 = &v3[this->m_hBaseNPC.m_Index & 0x1FF];
      if ( v4 != 0
        && m_Index == v4->m_EHandle.m_Index
        && v4->m_pInstance != 0
        && BYTE3(v4->m_pInstance[7]._vptr_IHandleEntity) != 0 )
      {
        return this->m_pBot;
      }
    }
  }
  return result;
}


