
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CGameEntity::CGameEntity  (line 21, @0x0000000001f01090, libserver.so)
// calls: CEntityInstance::CEntityInstance
// callers: CBaseEntity::CBaseEntity
void __fastcall CGameEntity::CGameEntity(CGameEntity *const this)
{
  CEntityInstance::CEntityInstance(this);
  this->_vptr_IHandleEntity = &off_3FC3AD0;
}


// CGameEntity::Instance  (line 29, @0x0000000001f010c0, libserver.so)  // inlines: GetInstance, IndexToIdentity, IsUsed, LookupEntityByIndex
CGameEntity *__fastcall CGameEntity::Instance(CEntityIndex iEnt)
{
  CGameEntity *result; // rax
  CEntityIdentity *v2; // rcx
  CEntityIdentity *v3; // rdx
  __int64 v4; // [rsp-8h] [rbp-8h]

  result = 0;
  if ( iEnt.m_Data <= 0x7FFE )
  {
    v2 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[iEnt.m_Data >> 9];
    if ( v2 != 0 )
    {
      v3 = &v2[iEnt.m_Data & 0x1FF];
      if ( v3 != 0 )
      {
        *(&v4 - 8) = v3->m_EHandle.m_Index;
        if ( (*(&v4 - 2) & 0x7FFF) == iEnt.m_Data )
          return v3->m_pInstance;
      }
    }
  }
  return result;
}


