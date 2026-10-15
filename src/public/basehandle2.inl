
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CSchemaTypeOf<CHandle<CBaseEntity> >::Get  (line 467, @0x000000000200d2a0, libserver.so)  // inlines: Get
// callers: CBasePlayer::RegisterClassSchema_N__MISSING_DECL_MEANS_MACRO__UNRESOLVED_EXT_MEANS_SCHEMA_GENERATED_CODE, CDOTAGamerules::RegisterClassSchema_N__MISSING_DECL_MEANS_MACRO__UNRESOLVED_EXT_MEANS_SCHEMA_GENERATED_CODE, CDOTA_BaseNPC::RegisterClassSchema_N__MISSING_DECL_MEANS_MACRO__UNRESOLVED_EXT_MEANS_SCHEMA_GENERATED_CODE
// strings: "CBaseEntity", "CHandle"
// globals: CSchemaManipulator<CHandle<CBaseEntity>>::StaticAccessor(void)::m, CAtomicManipulator<CHandle<CBaseEntity>>::Get(void)::val
CSchemaType *__fastcall CSchemaTypeOf<CHandle<CBaseEntity>>::Get(ISchemaSystemTypeScope *pTypeScope)
{
  CSchemaType *(__fastcall *v2)(ISchemaSystemTypeScope *, const char *, __int64, __int64 (__fastcall ***)(), __int64 (__fastcall ***)(), __int64); // r12
  __int64 v3; // rax

  v2 = *(*pTypeScope + 64LL);
  v3 = (*(*pTypeScope + 88LL))(pTypeScope, "CBaseEntity");
  return v2(
           pTypeScope,
           "CHandle",
           5003,
           CAtomicManipulator<CHandle<CBaseEntity>>::Get(void)::val,
           &CSchemaManipulator<CHandle<CBaseEntity>>::StaticAccessor(void)::m,
           v3);
}


// CHandle<CBaseEntity>::CHandle  (line 498, @0x0000000001b55e20, libserver.so)  // inlines: CEntityHandle, GetEHandle, GetEntryIndex, GetSerialNumber, Set
// callers: CPointClientUIDialog::DialogUse, CPointClientUIDialog::OnClientDialogFinished, CBaseViewModel::SetOwner, CBasePlayer::UpdateTonemapController, CDOTA_PlayerResource::SetSelectedHero, CDOTA_PlayerResource::SetCourier, CDOTA_PlayerResource::Script_SetOverrideSelectionEntity, CDOTA_PlayerResource::Script_SetCameraTarget, CDOTA_UnitInventory::SetParent, CDOTA_BaseNPC_Tower::SetAttacking, CDOTA_BaseNPC_Hero::UpdateActionItemSlot, CDOTA_Unit_Courier::SetCourierState (15 total)
void __fastcall CHandle<CBaseEntity>::CHandle(CHandle<CBaseEntity> *const this, CBaseEntity *pObj)
{
  CEntityIdentity *m_pEntity; // rdx
  int v3; // eax
  __int16 v4; // cx

  this->m_Index = -1;
  if ( pObj != 0 )
  {
    m_pEntity = pObj->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v3 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      v4 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v4 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LOWORD(this->m_Index) = v4 | this->m_Index & 0x8000;
      this->m_Index = (v3 << 15) | this->m_Index & 0x7FFF;
    }
  }
}


// CHandle<CPropZipline>::CHandle  (line 498, @0x000000000237a3c0, libserver.so)  // inlines: CEntityHandle, GetEHandle, GetEntryIndex, GetSerialNumber, Set
// callers: CPropZipline::LinkToZipline
void __fastcall CHandle<CPropZipline>::CHandle(CHandle<CPropZipline> *const this, CPropZipline *pObj)
{
  CEntityIdentity *m_pEntity; // rdx
  int v3; // eax
  __int16 v4; // cx

  this->m_Index = -1;
  if ( pObj != 0 )
  {
    m_pEntity = pObj->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v3 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      v4 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v4 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LOWORD(this->m_Index) = v4 | this->m_Index & 0x8000;
      this->m_Index = (v3 << 15) | this->m_Index & 0x7FFF;
    }
  }
}


// operator!=<CBaseEntity>  (line 586, @0x0000000001b55e80, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*
// callers: CPointClientUIDialog::DialogUse, CPointClientUIDialog::OnClientDialogFinished, CBasePlayer::UpdateTonemapController, DataTeamPlayer_t::operator=, CDOTA_PlayerResource::SetSelectedHero, CDOTA_PlayerResource::SetCourier, CDOTA_PlayerResource::Script_SetOverrideSelectionEntity, CDOTA_PlayerResource::SetCameraTarget, CDOTA_PlayerResource::Script_SetCameraTarget, PlayerResourcePlayerTeamData_t::operator=, CDOTA_UnitInventory::SetItemInSlot, CDOTA_UnitInventory::SetParent (24 total)
// globals: CEntityHandle::gm_pEntityList
bool __fastcall operator!=<CBaseEntity>(const CHandle<CBaseEntity> *const a, const CHandle<CBaseEntity> *const b)
{
  CEntityInstance *m_pInstance; // r8
  uint32 m_Index; // eax
  unsigned __int64 m_Index_low; // rdi
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  uint32 v7; // eax
  CEntityInstance *v8; // rdi
  unsigned __int64 v9; // rsi
  CEntityIdentity *v10; // rdx
  CEntityIdentity *v11; // rdx

  m_pInstance = 0;
  m_Index = a->m_Index;
  if ( a->m_Index + 2 > 1 )
  {
    m_Index_low = LOWORD(a->m_Index);
    v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(m_Index_low >> 9) & 0x3F];
    if ( v5 != 0 )
    {
      v6 = &v5[m_Index_low & 0x1FF];
      if ( v6 != 0 && m_Index == v6->m_EHandle.m_Index )
        m_pInstance = v6->m_pInstance;
    }
  }
  v7 = b->m_Index;
  v8 = 0;
  if ( b->m_Index + 2 > 1 )
  {
    v9 = LOWORD(b->m_Index);
    v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v9 >> 9) & 0x3F];
    if ( v10 != 0 )
    {
      v11 = &v10[v9 & 0x1FF];
      if ( v11 != 0 && v7 == v11->m_EHandle.m_Index )
        v8 = v11->m_pInstance;
    }
  }
  return m_pInstance != v8;
}


// operator!=<CPropZipline>  (line 586, @0x000000000237fad0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*
// callers: CPropZipline::CPropZipline, CPropZipline::DisconnectFromNextZipline, CPropZipline::LinkToZipline
// globals: CEntityHandle::gm_pEntityList
bool __fastcall operator!=<CPropZipline>(const CHandle<CPropZipline> *const a, const CHandle<CPropZipline> *const b)
{
  CEntityInstance *m_pInstance; // r8
  uint32 m_Index; // eax
  unsigned __int64 m_Index_low; // rdi
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  uint32 v7; // eax
  CEntityInstance *v8; // rdi
  unsigned __int64 v9; // rsi
  CEntityIdentity *v10; // rdx
  CEntityIdentity *v11; // rdx

  m_pInstance = 0;
  m_Index = a->m_Index;
  if ( a->m_Index + 2 > 1 )
  {
    m_Index_low = LOWORD(a->m_Index);
    v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(m_Index_low >> 9) & 0x3F];
    if ( v5 != 0 )
    {
      v6 = &v5[m_Index_low & 0x1FF];
      if ( v6 != 0 && m_Index == v6->m_EHandle.m_Index )
        m_pInstance = v6->m_pInstance;
    }
  }
  v7 = b->m_Index;
  v8 = 0;
  if ( b->m_Index + 2 > 1 )
  {
    v9 = LOWORD(b->m_Index);
    v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v9 >> 9) & 0x3F];
    if ( v10 != 0 )
    {
      v11 = &v10[v9 & 0x1FF];
      if ( v11 != 0 && v7 == v11->m_EHandle.m_Index )
        v8 = v11->m_pInstance;
    }
  }
  return m_pInstance != v8;
}


