
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CNetworkHandleBase<CBaseVRHandAttachment, CPropVRHand::NetworkVar_m_hActiveHandAttachment>::Set  (line 888, @0x000000000237a2b0, libserver.so)  // inlines: GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, IndexToIdentity, IsValid, LookupEntity, NetworkStateChanged, Set, operator!=, operator=
// callers: CPropVRHand::SwapLogicalAttachmentsWith
// globals: CEntityHandle::gm_pEntityList
const CBaseVRHandAttachment *__fastcall CNetworkHandleBase<CBaseVRHandAttachment,CPropVRHand::NetworkVar_m_hActiveHandAttachment>::Set(
        CNetworkHandleBase<CBaseVRHandAttachment,CPropVRHand::NetworkVar_m_hActiveHandAttachment> *const this,
        const CBaseVRHandAttachment *val)
{
  const CBaseVRHandAttachment *m_pInstance; // rcx
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  CEntityIdentity *m_pEntity; // rdx
  int v9; // eax
  __int16 v10; // cx

  m_pInstance = 0;
  if ( this->m_Value.m_Index + 2 > 1 )
  {
    v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_Value.m_Index) >> 9) & 0x3F];
    if ( v5 != 0 )
    {
      v6 = &v5[this->m_Value.m_Index & 0x1FF];
      if ( v6 != 0 && this->m_Value.m_Index == v6->m_EHandle.m_Index )
        m_pInstance = v6->m_pInstance;
    }
  }
  if ( val == m_pInstance )
    return val;
  (*(*(this - 166) + 176LL))(this - 332, 1328, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
  if ( val == 0 || (m_pEntity = val->m_pEntity) == 0 )
  {
    this->m_Value.m_Index = -1;
    return val;
  }
  v9 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
  if ( m_pEntity->m_EHandle.m_Index == -1 )
    v10 = 0x7FFF;
  else
    v10 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
  LOWORD(this->m_Value.m_Index) = v10 | this->m_Value.m_Index & 0x8000;
  this->m_Value.m_Index = (v9 << 15) | this->m_Value.m_Index & 0x7FFF;
  return val;
}


// CNetworkHandleBase<CBaseEntity, CDOTAPlayer::NetworkVar_m_hKillCamUnit>::Set  (line 888, @0x0000000002571c60, libserver.so)  // inlines: GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, IndexToIdentity, IsValid, LookupEntity, NetworkStateChanged, Set, operator!=, operator=
// callers: CDOTAGamerules::PlayerSpawn, CDOTA_BaseNPC_Hero::RespawnHero, CDOTA_BaseNPC_Hero::Event_Killed
// globals: CEntityHandle::gm_pEntityList
const CBaseEntity *__fastcall CNetworkHandleBase<CBaseEntity,CDOTAPlayer::NetworkVar_m_hKillCamUnit>::Set(
        CNetworkHandleBase<CBaseEntity,CDOTAPlayer::NetworkVar_m_hKillCamUnit> *const this,
        const CBaseEntity *val)
{
  const CBaseEntity *m_pInstance; // rcx
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  CEntityIdentity *m_pEntity; // rdx
  int v9; // eax
  __int16 v10; // cx

  m_pInstance = 0;
  if ( this->m_Value.m_Index + 2 > 1 )
  {
    v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_Value.m_Index) >> 9) & 0x3F];
    if ( v5 != 0 )
    {
      v6 = &v5[this->m_Value.m_Index & 0x1FF];
      if ( v6 != 0 && this->m_Value.m_Index == v6->m_EHandle.m_Index )
        m_pInstance = v6->m_pInstance;
    }
  }
  if ( val == m_pInstance )
    return val;
  (*(*(this - 600) + 176LL))(this - 1200, 4800, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
  if ( val == 0 || (m_pEntity = val->m_pEntity) == 0 )
  {
    this->m_Value.m_Index = -1;
    return val;
  }
  v9 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
  if ( m_pEntity->m_EHandle.m_Index == -1 )
    v10 = 0x7FFF;
  else
    v10 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
  LOWORD(this->m_Value.m_Index) = v10 | this->m_Value.m_Index & 0x8000;
  this->m_Value.m_Index = (v9 << 15) | this->m_Value.m_Index & 0x7FFF;
  return val;
}


// CNetworkHandleBase<CBaseEntity, CDOTAGamerules::NetworkVar_m_hEndGameCinematicEntity>::Set  (line 888, @0x0000000002573370, libserver.so)  // inlines: Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, IndexToIdentity, IsValid, LookupEntity, NetworkStateChanged, Set, operator CEntityInstance*, operator!=, operator=
// callers: CDOTAGamerules::GameInit, CDOTAGamerules::State_Enter_POST_GAME
// globals: CEntityHandle::gm_pEntityList
const CBaseEntity *__fastcall CNetworkHandleBase<CBaseEntity,CDOTAGamerules::NetworkVar_m_hEndGameCinematicEntity>::Set(
        CNetworkHandleBase<CBaseEntity,CDOTAGamerules::NetworkVar_m_hEndGameCinematicEntity> *const this,
        const CBaseEntity *val)
{
  const CBaseEntity *result; // rax
  const CBaseEntity *m_pInstance; // rsi
  uint32 m_Index; // edx
  unsigned __int64 m_Index_low; // rdi
  CEntityIdentity *v7; // rcx
  CEntityIdentity *v8; // rcx
  _QWORD *v9; // rdi
  CEntityIdentity *m_pEntity; // rcx
  int v11; // edx
  __int16 v12; // si
  const CBaseEntity *vala; // [rsp+8h] [rbp-18h]

  result = val;
  m_pInstance = 0;
  m_Index = this->m_Value.m_Index;
  if ( this->m_Value.m_Index + 2 > 1 )
  {
    m_Index_low = LOWORD(this->m_Value.m_Index);
    v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(m_Index_low >> 9) & 0x3F];
    if ( v7 != 0 )
    {
      v8 = &v7[m_Index_low & 0x1FF];
      if ( v8 != 0 && m_Index == v8->m_EHandle.m_Index )
        m_pInstance = v8->m_pInstance;
    }
  }
  if ( result != m_pInstance )
  {
    v9 = *(this - 27);
    if ( v9 != 0 && (*(v9[1] + 49LL) & 4) == 0 )
    {
      vala = result;
      (*(*v9 + 176LL))(v9, 828, 0xFFFFFFFFLL, *(this - 50));
      result = vala;
    }
    if ( result != 0 && (m_pEntity = result->m_pEntity) != 0 )
    {
      v11 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      if ( m_pEntity->m_EHandle.m_Index == -1 )
        v12 = 0x7FFF;
      else
        v12 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LOWORD(this->m_Value.m_Index) = v12 | this->m_Value.m_Index & 0x8000;
      this->m_Value.m_Index = (v11 << 15) | this->m_Value.m_Index & 0x7FFF;
    }
    else
    {
      this->m_Value.m_Index = -1;
    }
  }
  return result;
}


// CNetworkHandleBase<CBaseEntity, CDOTAGamerules::NetworkVar_m_hSideShop1>::Set  (line 888, @0x0000000002573520, libserver.so)  // inlines: Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, IndexToIdentity, IsValid, LookupEntity, NetworkStateChanged, Set, operator CEntityInstance*, operator!=, operator=
// callers: CDOTAGamerules::PostSpawnGroupLoad
// globals: CEntityHandle::gm_pEntityList
const CBaseEntity *__fastcall CNetworkHandleBase<CBaseEntity,CDOTAGamerules::NetworkVar_m_hSideShop1>::Set(
        CNetworkHandleBase<CBaseEntity,CDOTAGamerules::NetworkVar_m_hSideShop1> *const this,
        const CBaseEntity *val)
{
  const CBaseEntity *result; // rax
  const CBaseEntity *m_pInstance; // rsi
  uint32 m_Index; // edx
  unsigned __int64 m_Index_low; // rdi
  CEntityIdentity *v7; // rcx
  CEntityIdentity *v8; // rcx
  _QWORD *v9; // rdi
  CEntityIdentity *m_pEntity; // rcx
  int v11; // edx
  __int16 v12; // si
  const CBaseEntity *vala; // [rsp+8h] [rbp-18h]

  result = val;
  m_pInstance = 0;
  m_Index = this->m_Value.m_Index;
  if ( this->m_Value.m_Index + 2 > 1 )
  {
    m_Index_low = LOWORD(this->m_Value.m_Index);
    v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(m_Index_low >> 9) & 0x3F];
    if ( v7 != 0 )
    {
      v8 = &v7[m_Index_low & 0x1FF];
      if ( v8 != 0 && m_Index == v8->m_EHandle.m_Index )
        m_pInstance = v8->m_pInstance;
    }
  }
  if ( result != m_pInstance )
  {
    v9 = *(this - 423);
    if ( v9 != 0 && (*(v9[1] + 49LL) & 4) == 0 )
    {
      vala = result;
      (*(*v9 + 176LL))(v9, 2412, 0xFFFFFFFFLL, *(this - 842));
      result = vala;
    }
    if ( result != 0 && (m_pEntity = result->m_pEntity) != 0 )
    {
      v11 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      if ( m_pEntity->m_EHandle.m_Index == -1 )
        v12 = 0x7FFF;
      else
        v12 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LOWORD(this->m_Value.m_Index) = v12 | this->m_Value.m_Index & 0x8000;
      this->m_Value.m_Index = (v11 << 15) | this->m_Value.m_Index & 0x7FFF;
    }
    else
    {
      this->m_Value.m_Index = -1;
    }
  }
  return result;
}


// CNetworkHandleBase<CBaseEntity, CDOTAGamerules::NetworkVar_m_hSideShop2>::Set  (line 888, @0x0000000002573650, libserver.so)  // inlines: Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, IndexToIdentity, IsValid, LookupEntity, NetworkStateChanged, Set, operator CEntityInstance*, operator!=, operator=
// callers: CDOTAGamerules::PostSpawnGroupLoad
// globals: CEntityHandle::gm_pEntityList
const CBaseEntity *__fastcall CNetworkHandleBase<CBaseEntity,CDOTAGamerules::NetworkVar_m_hSideShop2>::Set(
        CNetworkHandleBase<CBaseEntity,CDOTAGamerules::NetworkVar_m_hSideShop2> *const this,
        const CBaseEntity *val)
{
  const CBaseEntity *result; // rax
  const CBaseEntity *m_pInstance; // rsi
  uint32 m_Index; // edx
  unsigned __int64 m_Index_low; // rdi
  CEntityIdentity *v7; // rcx
  CEntityIdentity *v8; // rcx
  _QWORD *v9; // rdi
  CEntityIdentity *m_pEntity; // rcx
  int v11; // edx
  __int16 v12; // si
  const CBaseEntity *vala; // [rsp+8h] [rbp-18h]

  result = val;
  m_pInstance = 0;
  m_Index = this->m_Value.m_Index;
  if ( this->m_Value.m_Index + 2 > 1 )
  {
    m_Index_low = LOWORD(this->m_Value.m_Index);
    v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(m_Index_low >> 9) & 0x3F];
    if ( v7 != 0 )
    {
      v8 = &v7[m_Index_low & 0x1FF];
      if ( v8 != 0 && m_Index == v8->m_EHandle.m_Index )
        m_pInstance = v8->m_pInstance;
    }
  }
  if ( result != m_pInstance )
  {
    v9 = *(this - 212);
    if ( v9 != 0 && (*(v9[1] + 49LL) & 4) == 0 )
    {
      vala = result;
      (*(*v9 + 176LL))(v9, 2416, 0xFFFFFFFFLL, *(this - 844));
      result = vala;
    }
    if ( result != 0 && (m_pEntity = result->m_pEntity) != 0 )
    {
      v11 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      if ( m_pEntity->m_EHandle.m_Index == -1 )
        v12 = 0x7FFF;
      else
        v12 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LOWORD(this->m_Value.m_Index) = v12 | this->m_Value.m_Index & 0x8000;
      this->m_Value.m_Index = (v11 << 15) | this->m_Value.m_Index & 0x7FFF;
    }
    else
    {
      this->m_Value.m_Index = -1;
    }
  }
  return result;
}


// CNetworkHandleBase<CBaseEntity, CDOTAGamerules::NetworkVar_m_hSecretShop1>::Set  (line 888, @0x0000000002573780, libserver.so)  // inlines: Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, IndexToIdentity, IsValid, LookupEntity, NetworkStateChanged, Set, operator CEntityInstance*, operator!=, operator=
// callers: CDOTAGamerules::PostSpawnGroupLoad
// globals: CEntityHandle::gm_pEntityList
const CBaseEntity *__fastcall CNetworkHandleBase<CBaseEntity,CDOTAGamerules::NetworkVar_m_hSecretShop1>::Set(
        CNetworkHandleBase<CBaseEntity,CDOTAGamerules::NetworkVar_m_hSecretShop1> *const this,
        const CBaseEntity *val)
{
  const CBaseEntity *result; // rax
  const CBaseEntity *m_pInstance; // rsi
  uint32 m_Index; // edx
  unsigned __int64 m_Index_low; // rdi
  CEntityIdentity *v7; // rcx
  CEntityIdentity *v8; // rcx
  _QWORD *v9; // rdi
  CEntityIdentity *m_pEntity; // rcx
  int v11; // edx
  __int16 v12; // si
  const CBaseEntity *vala; // [rsp+8h] [rbp-18h]

  result = val;
  m_pInstance = 0;
  m_Index = this->m_Value.m_Index;
  if ( this->m_Value.m_Index + 2 > 1 )
  {
    m_Index_low = LOWORD(this->m_Value.m_Index);
    v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(m_Index_low >> 9) & 0x3F];
    if ( v7 != 0 )
    {
      v8 = &v7[m_Index_low & 0x1FF];
      if ( v8 != 0 && m_Index == v8->m_EHandle.m_Index )
        m_pInstance = v8->m_pInstance;
    }
  }
  if ( result != m_pInstance )
  {
    v9 = *(this - 425);
    if ( v9 != 0 && (*(v9[1] + 49LL) & 4) == 0 )
    {
      vala = result;
      (*(*v9 + 176LL))(v9, 2420, 0xFFFFFFFFLL, *(this - 846));
      result = vala;
    }
    if ( result != 0 && (m_pEntity = result->m_pEntity) != 0 )
    {
      v11 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      if ( m_pEntity->m_EHandle.m_Index == -1 )
        v12 = 0x7FFF;
      else
        v12 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LOWORD(this->m_Value.m_Index) = v12 | this->m_Value.m_Index & 0x8000;
      this->m_Value.m_Index = (v11 << 15) | this->m_Value.m_Index & 0x7FFF;
    }
    else
    {
      this->m_Value.m_Index = -1;
    }
  }
  return result;
}


// CNetworkHandleBase<CBaseEntity, CDOTAGamerules::NetworkVar_m_hSecretShop2>::Set  (line 888, @0x00000000025738b0, libserver.so)  // inlines: Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, IndexToIdentity, IsValid, LookupEntity, NetworkStateChanged, Set, operator CEntityInstance*, operator!=, operator=
// callers: CDOTAGamerules::PostSpawnGroupLoad
// globals: CEntityHandle::gm_pEntityList
const CBaseEntity *__fastcall CNetworkHandleBase<CBaseEntity,CDOTAGamerules::NetworkVar_m_hSecretShop2>::Set(
        CNetworkHandleBase<CBaseEntity,CDOTAGamerules::NetworkVar_m_hSecretShop2> *const this,
        const CBaseEntity *val)
{
  const CBaseEntity *result; // rax
  const CBaseEntity *m_pInstance; // rsi
  uint32 m_Index; // edx
  unsigned __int64 m_Index_low; // rdi
  CEntityIdentity *v7; // rcx
  CEntityIdentity *v8; // rcx
  _QWORD *v9; // rdi
  CEntityIdentity *m_pEntity; // rcx
  int v11; // edx
  __int16 v12; // si
  const CBaseEntity *vala; // [rsp+8h] [rbp-18h]

  result = val;
  m_pInstance = 0;
  m_Index = this->m_Value.m_Index;
  if ( this->m_Value.m_Index + 2 > 1 )
  {
    m_Index_low = LOWORD(this->m_Value.m_Index);
    v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(m_Index_low >> 9) & 0x3F];
    if ( v7 != 0 )
    {
      v8 = &v7[m_Index_low & 0x1FF];
      if ( v8 != 0 && m_Index == v8->m_EHandle.m_Index )
        m_pInstance = v8->m_pInstance;
    }
  }
  if ( result != m_pInstance )
  {
    v9 = *(this - 213);
    if ( v9 != 0 && (*(v9[1] + 49LL) & 4) == 0 )
    {
      vala = result;
      (*(*v9 + 176LL))(v9, 2424, 0xFFFFFFFFLL, *(this - 848));
      result = vala;
    }
    if ( result != 0 && (m_pEntity = result->m_pEntity) != 0 )
    {
      v11 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      if ( m_pEntity->m_EHandle.m_Index == -1 )
        v12 = 0x7FFF;
      else
        v12 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LOWORD(this->m_Value.m_Index) = v12 | this->m_Value.m_Index & 0x8000;
      this->m_Value.m_Index = (v11 << 15) | this->m_Value.m_Index & 0x7FFF;
    }
    else
    {
      this->m_Value.m_Index = -1;
    }
  }
  return result;
}


// CNetworkArrayBase<unsigned char, 18, CDOTAGamerules::NetworkVar_m_BotDebugPushLane>::Set  (line 1155, @0x0000000002828da0, libserver.so)  // inlines: Get, NetworkStateChanged, operator CEntityInstance*
// callers: CDOTA_TeamCommander::UpdatePushLaneDesires
void __fastcall CNetworkArrayBase<unsigned char,18,CDOTAGamerules::NetworkVar_m_BotDebugPushLane>::Set(
        CNetworkArrayBase<unsigned char,18,CDOTAGamerules::NetworkVar_m_BotDebugPushLane> *const this,
        int i,
        const unsigned __int8 *const val)
{
  __int64 v4; // r12
  _QWORD *v6; // rdi

  v4 = i;
  v6 = *(this - 265);
  if ( v6 != 0 && (*(v6[1] + 49LL) & 4) == 0 )
    (*(*v6 + 176LL))(v6, 2840, i, *(this - 1056));
  this->m_Value[v4] = *val;
}


// CNetworkArrayBase<unsigned char, 18, CDOTAGamerules::NetworkVar_m_BotDebugDefendLane>::Set  (line 1155, @0x0000000002828e00, libserver.so)  // inlines: Get, NetworkStateChanged, operator CEntityInstance*
// callers: CDOTA_TeamCommander::UpdateDefendLaneDesires
void __fastcall CNetworkArrayBase<unsigned char,18,CDOTAGamerules::NetworkVar_m_BotDebugDefendLane>::Set(
        CNetworkArrayBase<unsigned char,18,CDOTAGamerules::NetworkVar_m_BotDebugDefendLane> *const this,
        int i,
        const unsigned __int8 *const val)
{
  __int64 v4; // r12
  _QWORD *v6; // rdi

  v4 = i;
  v6 = *(this - 2138);
  if ( v6 != 0 && (*(v6[1] + 49LL) & 4) == 0 )
    (*(*v6 + 176LL))(v6, 2858, i, *(this - 1065));
  this->m_Value[v4] = *val;
}


// CUtlVectorEmbeddedNetworkVar<CDOTASubChallengeInfo, CIngameEvent_WM2016::NetworkVar_m_SubChallenges, -1>::AddToTail  (line 1612, @0x00000000025d7680, libserver.so)  // inlines: AddToTail, AssignPathIdToElement, CDOTASubChallengeInfo, CEntityOwnerPtr, CFieldPath, CNetworkVarBase, CSmartPtr, ChangeAccessorFieldPathIndex_t, Clear, Construct<CDOTASubChallengeInfo>, Element, EnsureValidValue<int>, Get, GetPathData, GrowMemory, IsUsingFixedPaths, LeafCodeInfo_t, NetworkStateChanged, OnSizeChanged, Path_AddToTail, Path_RemoveAll, Path_SetCount, Push, Resolve, Set, V_memcpy, memcpy, operator CEntityInstance*, operator(), operator=, operator[]
// calls: GetNetworkSerializerForEntityInstance, memcpy, EntityInstanceSetNetworkStateChanged, __memcpy_chk, LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, EntityInstanceAddChangeAccessorPath, CUtlVectorEmbeddedNetworkVar<CDOTASubChallengeInfo, CIngameEvent_WM2016::NetworkVar_m_SubChallenges, -1>::Resolve, CUtlMemory<CDOTASubChallengeInfo, int>::Grow, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...)
// callers: CIngameEvent_WM2016::GenerateWeeklyAndDailyChallenges
// strings: "../../public/tier2/fieldpath.h", "Path_AddToTail", "Path_AddToTail failed for read only CFieldPath", "Path_SetCount", "Path_SetCount failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)", "Path_AddToTail failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)"
int __fastcall CUtlVectorEmbeddedNetworkVar<CDOTASubChallengeInfo,CIngameEvent_WM2016::NetworkVar_m_SubChallenges,-1>::AddToTail(
        CUtlVectorEmbeddedNetworkVar<CDOTASubChallengeInfo,CIngameEvent_WM2016::NetworkVar_m_SubChallenges,-1> *const this)
{
  CUtlVectorEmbeddedNetworkVar<CDOTASubChallengeInfo,CIngameEvent_WM2016::NetworkVar_m_SubChallenges,-1> *v1; // rbx
  CEntityInstance *m_pObj; // r12
  void (__fastcall *v3)(void **, IFlattenedSerializers *, FlattenedSerializerHandle_t, CEntityInstance *, CUtlVectorEmbeddedNetworkVar<CDOTASubChallengeInfo,CIngameEvent_WM2016::NetworkVar_m_SubChallenges,-1> *, bool *); // r14
  FlattenedSerializerHandle_t NetworkSerializerForEntityInstance; // rax
  void **v5; // r13
  __int64 v6; // rdx
  size_t v7; // rdx
  void **v8; // rsi
  int m_Size; // eax
  char *v10; // rdx
  CEntityInstance *v11; // rax
  CEntityInstance *v12; // r14
  FlattenedSerializerHandle_t v13; // rax
  __int64 m_szFunction_low; // rdx
  size_t v15; // rdx
  const void *m_szFile; // rsi
  __int64 m_nCount; // rdx
  CFieldPath *p_m_PathToVector; // rsi
  __int64 v19; // rdx
  int16 v20; // cx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdi
  __int64 v24; // rsi
  __int64 v25; // rax
  CEntityInstance *v26; // rdi
  ChangeAccessorFieldPathIndex_t *v27; // r13
  CEntityInstance *v28; // rax
  CUtlDelegate<void()> *m_pArraySizeChangedDelegate; // rax
  void (*pfn)(detail::GenericClass *); // rdx
  detail::GenericClass *v31; // rdi
  const LeafCodeInfo_t *p_path; // rdx
  void (__fastcall *v34)(LeafCodeInfo_t *, IFlattenedSerializers *, FlattenedSerializerHandle_t, CEntityInstance *, CUtlVectorEmbeddedNetworkVar<CDOTASubChallengeInfo,CIngameEvent_WM2016::NetworkVar_m_SubChallenges,-1> *, bool *); // [rsp+8h] [rbp-98h]
  void *src[2]; // [rsp+10h] [rbp-90h] BYREF
  __int16 v36; // [rsp+20h] [rbp-80h]
  char v37; // [rsp+22h] [rbp-7Eh]
  CFieldPath path; // [rsp+30h] [rbp-70h] BYREF
  LeafCodeInfo_t v39; // [rsp+50h] [rbp-50h] BYREF

  v1 = this;
  if ( !this->m_bResolved )
  {
    m_pObj = this->m_pOwnerEntity.m_pObj;
    this->m_bResolved = 1;
    if ( m_pObj != 0 )
    {
      v3 = *(*g_pFlattenedSerializers + 272LL);
      NetworkSerializerForEntityInstance = GetNetworkSerializerForEntityInstance(m_pObj);
      v5 = src;
      v3(src, g_pFlattenedSerializers, NetworkSerializerForEntityInstance, m_pObj, v1, &v1->m_bIsNetworkVarExcluded);
      this = &v1->m_PathToVector;
      if ( &v1->m_PathToVector != src )
      {
        v6 = v36;
        v1->m_PathToVector.m_bUsingExternalPaths = 0;
        if ( v6 > 6 )
        {
LABEL_51:
          v1 = &LOG_GENERAL;
          if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) == 0 )
            goto LABEL_31;
          v39.m_nLine = 442;
          v39.m_szFile = "../../public/tier2/fieldpath.h";
          v39.m_szFunction = "Path_SetCount";
          p_path = &v39;
          goto LABEL_53;
        }
        v1->m_PathToVector.m_nCount = v6;
        if ( v6 > 0 )
        {
          v7 = 2 * v6;
          v8 = src;
          if ( v37 != 0 )
            v8 = src[0];
          memcpy(this, v8, v7);
        }
      }
    }
    else
    {
      if ( this->m_PathToVector.m_bUsingExternalPaths )
        goto LABEL_49;
      this->m_PathToVector.m_nCount = 0;
    }
  }
  if ( !v1->m_bIsNetworkVarExcluded )
    EntityInstanceSetNetworkStateChanged(v1->m_pOwnerEntity.m_pObj);
  LODWORD(m_pObj) = v1->m_Vector.m_Size;
  m_Size = v1->m_Vector.m_Size;
  if ( v1->m_Vector.m_Size == v1->m_Vector.m_Memory.m_nAllocationCount )
  {
    CUtlMemory<CDOTASubChallengeInfo,int>::Grow(&v1->m_Vector.m_Memory, 1);
    m_Size = v1->m_Vector.m_Size;
  }
  v5 = (m_pObj << 6);
  v1->m_Vector.m_Size = m_Size + 1;
  v10 = v1->m_Vector.m_Memory.m_pMemory + v5;
  if ( v10 != 0 )
  {
    *(v10 + 5) = 0;
    *v10 = &off_4100A00;
    *(v10 + 8) = -1;
    *(v10 + 6) = 0;
    *(v10 + 7) = 0;
    v11 = CEntitySpawnHelper::gm_pCurEntityPtr;
    *(v10 + 8) = 0;
    *(v10 + 9) = 0;
    *(v10 + 10) = 0;
    *(v10 + 11) = 0;
    *(v10 + 1) = v11;
    *(v10 + 12) = 0;
    *(v10 + 13) = 0;
    *(v10 + 14) = 0;
    *(v10 + 15) = 0;
  }
  if ( v1->m_bResolved )
  {
LABEL_23:
    if ( v1->m_bIsNetworkVarExcluded )
      goto LABEL_40;
    path.m_bUsingExternalPaths = 0;
    path.m_nCount = 0;
    m_nCount = v1->m_PathToVector.m_nCount;
    if ( m_nCount <= 6 )
    {
      path.m_nCount = v1->m_PathToVector.m_nCount;
      if ( m_nCount <= 0 )
        goto LABEL_34;
      p_m_PathToVector = &v1->m_PathToVector;
      v19 = 2 * m_nCount;
      if ( v1->m_PathToVector.m_bUsingExternalPaths )
        p_m_PathToVector = v1->m_PathToVector.u.m_pPaths;
      __memcpy_chk(&path, p_m_PathToVector, v19, 24);
      v20 = m_pObj;
      if ( !path.m_bUsingExternalPaths )
        goto LABEL_35;
      v1 = &LOG_GENERAL;
      if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
      {
        v39.m_szFile = "../../public/tier2/fieldpath.h";
        v39.m_szFunction = "Path_AddToTail";
        v39.m_nLine = 428;
        LoggingSystem_Log(
          LOG_GENERAL,
          LoggingSeverity_t::LS_ERROR,
          &v39,
          "Path_AddToTail failed for read only CFieldPath");
      }
      goto LABEL_31;
    }
    goto LABEL_51;
  }
  v12 = v1->m_pOwnerEntity.m_pObj;
  v1->m_bResolved = 1;
  if ( v12 == 0 )
  {
    if ( !v1->m_PathToVector.m_bUsingExternalPaths )
    {
      v1->m_PathToVector.m_nCount = 0;
      goto LABEL_23;
    }
LABEL_49:
    CUtlVectorEmbeddedNetworkVar<CDOTASubChallengeInfo,CIngameEvent_WM2016::NetworkVar_m_SubChallenges,-1>::Resolve(this);
  }
  v34 = *(*g_pFlattenedSerializers + 272LL);
  v13 = GetNetworkSerializerForEntityInstance(v12);
  v34(&v39, g_pFlattenedSerializers, v13, v12, v1, &v1->m_bIsNetworkVarExcluded);
  if ( &v1->m_PathToVector == &v39 )
    goto LABEL_23;
  m_szFunction_low = SLOWORD(v39.m_szFunction);
  v1->m_PathToVector.m_bUsingExternalPaths = 0;
  if ( m_szFunction_low <= 6 )
  {
    v1->m_PathToVector.m_nCount = m_szFunction_low;
    if ( m_szFunction_low > 0 )
    {
      v15 = 2 * m_szFunction_low;
      m_szFile = &v39;
      if ( BYTE2(v39.m_szFunction) != 0 )
        m_szFile = v39.m_szFile;
      memcpy(&v1->m_PathToVector, m_szFile, v15);
    }
    goto LABEL_23;
  }
  v1 = &LOG_GENERAL;
  if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
  {
    *&path.u.m_FixedPaths[4].m_nValue = 442;
    path.u.m_pPaths = "../../public/tier2/fieldpath.h";
    *&path.m_nCount = "Path_SetCount";
    p_path = &path;
LABEL_53:
    LoggingSystem_Log(
      LOG_GENERAL,
      LoggingSeverity_t::LS_ERROR,
      p_path,
      "Path_SetCount failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)",
      6);
    goto LABEL_31;
  }
  while ( 1 )
  {
LABEL_31:
    if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v23, v24, v21, v22) != 0 )
      loc_0 = -559038737;
    Plat_ExitProcess(1);
LABEL_34:
    v20 = m_pObj;
LABEL_35:
    v25 = path.m_nCount;
    if ( path.m_nCount <= 5 )
      break;
    v1 = &LOG_GENERAL;
    if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
    {
      v39.m_szFile = "../../public/tier2/fieldpath.h";
      v39.m_szFunction = "Path_AddToTail";
      v39.m_nLine = 425;
      LoggingSystem_Log(
        LOG_GENERAL,
        LoggingSeverity_t::LS_ERROR,
        &v39,
        "Path_AddToTail failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)",
        6);
    }
  }
  v26 = v1->m_pOwnerEntity.m_pObj;
  v27 = (v1->m_Vector.m_Memory.m_pMemory + v5);
  ++path.m_nCount;
  path.u.m_FixedPaths[v25].m_nValue = v20;
  if ( v26 != 0 )
    v27[8].m_Value = EntityInstanceAddChangeAccessorPath(v26, &path).m_Value;
  else
    v27[8].m_Value = -1;
  v28 = v1->m_pOwnerEntity.m_pObj;
  if ( v28 != *&v27[4].m_Value )
    *&v27[4].m_Value = v28;
LABEL_40:
  m_pArraySizeChangedDelegate = v1->m_pArraySizeChangedDelegate;
  if ( m_pArraySizeChangedDelegate != 0 )
  {
    pfn = m_pArraySizeChangedDelegate->m_Closure.m_pFunction.__pfn;
    v31 = (m_pArraySizeChangedDelegate->m_Closure.m_pthis + m_pArraySizeChangedDelegate->m_Closure.m_pFunction.__delta);
    if ( (pfn & 1) != 0 )
      pfn = *(pfn + *v31 - 1);
    pfn(v31);
  }
  return m_pObj;
}


// CUtlVectorEmbeddedNetworkVar<CHeroesPerPlayer, CDOTAGamerules::NetworkVar_m_vecAvailableHerosPerPlayerID, -1>::SetCount  (line 1701, @0x000000000252fcf0, libserver.so)  // inlines: AssignPathIdToElement, CFieldPath, Clear, Element, Get, GetPathData, IsUsingFixedPaths, LeafCodeInfo_t, NetworkStateChanged, OnSizeChanged, Path_AddToTail, Path_RemoveAll, Path_SetCount, Push, ReassignPathIds, Resolve, Set, V_memcpy, memcpy, operator CEntityInstance*, operator(), operator=, operator[]
// calls: GetNetworkSerializerForEntityInstance, memcpy, EntityInstanceSetNetworkStateChanged, CUtlVectorBase<CHeroesPerPlayer, CNetworkUtlVector_MemoryType<CHeroesPerPlayer, -1> >::SetCount, __memcpy_chk, LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, EntityInstanceAddChangeAccessorPath, CUtlVectorEmbeddedNetworkVar<CHeroesPerPlayer, CDOTAGamerules::NetworkVar_m_vecAvailableHerosPerPlayerID, -1>::Resolve, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...)
// callers: CDOTAGamerules::HeroPickState_Enter_FH_SELECT, CDOTAGamerules::HeroPickState_Enter_CUSTOMGAME_SELECT, CDOTAGamerules::HeroPickState_Enter_SD_SELECT, CDOTAGamerules::HeroPickState_Enter_BD_SELECT
// strings: "../../public/tier2/fieldpath.h", "Path_AddToTail", "Path_AddToTail failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)", "Path_SetCount", "Path_SetCount failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)", "Path_AddToTail failed for read only CFieldPath"
void __fastcall CUtlVectorEmbeddedNetworkVar<CHeroesPerPlayer,CDOTAGamerules::NetworkVar_m_vecAvailableHerosPerPlayerID,-1>::SetCount(
        CUtlVectorEmbeddedNetworkVar<CHeroesPerPlayer,CDOTAGamerules::NetworkVar_m_vecAvailableHerosPerPlayerID,-1> *const this,
        int nCount)
{
  void (__fastcall *v2)(void **, IFlattenedSerializers *, FlattenedSerializerHandle_t, CEntityInstance *, CUtlVectorEmbeddedNetworkVar<CHeroesPerPlayer,CDOTAGamerules::NetworkVar_m_vecAvailableHerosPerPlayerID,-1> *, bool *); // r15
  const CFieldPath *p_path; // r13
  CUtlVectorEmbeddedNetworkVar<CHeroesPerPlayer,CDOTAGamerules::NetworkVar_m_vecAvailableHerosPerPlayerID,-1> *v4; // rbx
  CEntityInstance *m_pObj; // r12
  FlattenedSerializerHandle_t NetworkSerializerForEntityInstance; // rax
  LeafCodeInfo_t *v7; // r14
  __int64 v8; // rax
  void **v9; // rsi
  FlattenedSerializerHandle_t v10; // rax
  __int64 v11; // rax
  void **v12; // rsi
  CEntityInstance *v13; // rcx
  FlattenedSerializerHandle_t v14; // rax
  __int64 m_szFunction_low; // rdx
  size_t v16; // rdx
  const char *m_szFile; // rsi
  __int64 v18; // rdx
  __int64 v19; // rdx
  const CFieldPath::Path_t *m_pPaths; // rsi
  int16 v21; // cx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rdi
  __int64 v25; // rsi
  __int64 m_nCount; // rax
  ChangeAccessorFieldPathIndex_t *v27; // rdx
  ChangeAccessorFieldPathIndex_t v28; // ax
  CEntityInstance *v29; // rax
  CUtlDelegate<void()> *m_pArraySizeChangedDelegate; // rax
  void (*pfn)(detail::GenericClass *); // rdx
  detail::GenericClass *v32; // rdi
  const LeafCodeInfo_t *v33; // rdx
  bool *p_m_bIsNetworkVarExcluded; // [rsp+8h] [rbp-D8h]
  void (__fastcall *v35)(LeafCodeInfo_t *, IFlattenedSerializers *, FlattenedSerializerHandle_t, CEntityInstance *, CUtlVectorEmbeddedNetworkVar<CHeroesPerPlayer,CDOTAGamerules::NetworkVar_m_vecAvailableHerosPerPlayerID,-1> *, bool *); // [rsp+18h] [rbp-C8h]
  CEntityInstance *v36; // [rsp+20h] [rbp-C0h]
  ChangeAccessorFieldPathIndex_t *v37; // [rsp+20h] [rbp-C0h]
  LeafCodeInfo_t *dest; // [rsp+28h] [rbp-B8h]
  void *src[2]; // [rsp+30h] [rbp-B0h] BYREF
  __int16 v40; // [rsp+40h] [rbp-A0h]
  char v41; // [rsp+42h] [rbp-9Eh]
  void *v42[2]; // [rsp+50h] [rbp-90h] BYREF
  __int16 v43; // [rsp+60h] [rbp-80h]
  char v44; // [rsp+62h] [rbp-7Eh]
  CFieldPath path; // [rsp+70h] [rbp-70h] BYREF
  LeafCodeInfo_t v46; // [rsp+90h] [rbp-50h] BYREF

  p_path = nCount;
  v4 = this;
  if ( !this->m_bResolved )
  {
    m_pObj = this->m_pOwnerEntity.m_pObj;
    this->m_bResolved = 1;
    if ( m_pObj != 0 )
    {
      v2 = *(*g_pFlattenedSerializers + 272LL);
      NetworkSerializerForEntityInstance = GetNetworkSerializerForEntityInstance(m_pObj);
      v7 = src;
      v2(src, g_pFlattenedSerializers, NetworkSerializerForEntityInstance, m_pObj, v4, &v4->m_bIsNetworkVarExcluded);
      if ( &v4->m_PathToVector != src )
      {
        v8 = v40;
        v4->m_PathToVector.m_bUsingExternalPaths = 0;
        if ( v8 > 6 )
          goto LABEL_64;
        v4->m_PathToVector.m_nCount = v8;
        if ( v8 > 0 )
        {
          v9 = src;
          if ( v41 != 0 )
            v9 = src[0];
          memcpy(&v4->m_PathToVector, v9, 2 * v8);
        }
      }
    }
    else
    {
      if ( this->m_PathToVector.m_bUsingExternalPaths )
        goto LABEL_57;
      this->m_PathToVector.m_nCount = 0;
    }
  }
  if ( !v4->m_bIsNetworkVarExcluded )
    EntityInstanceSetNetworkStateChanged(v4->m_pOwnerEntity.m_pObj);
  CUtlVectorBase<CHeroesPerPlayer,CNetworkUtlVector_MemoryType<CHeroesPerPlayer,-1>>::SetCount(&v4->m_Vector, p_path);
  if ( v4->m_bResolved )
  {
LABEL_19:
    if ( !v4->m_bIsNetworkVarExcluded )
    {
      this = v4->m_Vector.m_Size;
      if ( this > 0 )
      {
        m_pObj = 0;
        LODWORD(v2) = 0;
        p_m_bIsNetworkVarExcluded = &v4->m_bIsNetworkVarExcluded;
        v7 = &v46;
        dest = &v4->m_PathToVector;
        p_path = &path;
        goto LABEL_22;
      }
    }
    goto LABEL_48;
  }
  m_pObj = v4->m_pOwnerEntity.m_pObj;
  v4->m_bResolved = 1;
  if ( m_pObj == 0 )
  {
    if ( !v4->m_PathToVector.m_bUsingExternalPaths )
    {
      v4->m_PathToVector.m_nCount = 0;
      goto LABEL_19;
    }
LABEL_57:
    CUtlVectorEmbeddedNetworkVar<CHeroesPerPlayer,CDOTAGamerules::NetworkVar_m_vecAvailableHerosPerPlayerID,-1>::Resolve(this);
  }
  v7 = *(*g_pFlattenedSerializers + 272LL);
  v10 = GetNetworkSerializerForEntityInstance(m_pObj);
  p_path = v42;
  (v7)(v42, g_pFlattenedSerializers, v10, m_pObj, v4, &v4->m_bIsNetworkVarExcluded);
  if ( &v4->m_PathToVector == v42 )
    goto LABEL_19;
  v11 = v43;
  v4->m_PathToVector.m_bUsingExternalPaths = 0;
  if ( v11 <= 6 )
  {
    v4->m_PathToVector.m_nCount = v11;
    if ( v11 > 0 )
    {
      v12 = v42;
      if ( v44 != 0 )
        v12 = v42[0];
      memcpy(&v4->m_PathToVector, v12, 2 * v11);
    }
    goto LABEL_19;
  }
LABEL_64:
  v4 = &LOG_GENERAL;
  if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
  {
    v46.m_nLine = 442;
    v46.m_szFile = "../../public/tier2/fieldpath.h";
    v46.m_szFunction = "Path_SetCount";
    v33 = &v46;
LABEL_66:
    LoggingSystem_Log(
      LOG_GENERAL,
      LoggingSeverity_t::LS_ERROR,
      v33,
      "Path_SetCount failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)",
      6);
  }
  while ( 1 )
  {
LABEL_38:
    if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v24, v25, v22, v23) != 0 )
      loc_0 = -559038737;
    Plat_ExitProcess(1);
LABEL_41:
    v21 = v2;
LABEL_42:
    m_nCount = path.m_nCount;
    if ( path.m_nCount <= 5 )
      break;
    v4 = &LOG_GENERAL;
    if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
    {
      v46.m_szFile = "../../public/tier2/fieldpath.h";
      v46.m_szFunction = "Path_AddToTail";
      v46.m_nLine = 425;
      LoggingSystem_Log(
        LOG_GENERAL,
        LoggingSeverity_t::LS_ERROR,
        &v46,
        "Path_AddToTail failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)",
        6);
    }
  }
  this = v4->m_pOwnerEntity.m_pObj;
  ++path.m_nCount;
  v27 = (v4->m_Vector.m_Memory.m_pMemory + m_pObj);
  p_path->u.m_FixedPaths[m_nCount].m_nValue = v21;
  if ( this != 0 )
  {
    v37 = v27;
    v28.m_Value = EntityInstanceAddChangeAccessorPath(this, p_path).m_Value;
    v27 = v37;
    v37[8].m_Value = v28.m_Value;
  }
  else
  {
    v27[8].m_Value = -1;
  }
  v29 = v4->m_pOwnerEntity.m_pObj;
  if ( v29 != *&v27[4].m_Value )
    *&v27[4].m_Value = v29;
  while ( 1 )
  {
    LODWORD(v2) = v2 + 1;
    ++m_pObj;
    if ( v2 >= v4->m_Vector.m_Size )
      break;
LABEL_22:
    if ( !v4->m_bResolved )
    {
      v13 = v4->m_pOwnerEntity.m_pObj;
      v4->m_bResolved = 1;
      if ( v13 != 0 )
      {
        v36 = v13;
        v35 = *(*g_pFlattenedSerializers + 272LL);
        v14 = GetNetworkSerializerForEntityInstance(v13);
        v35(v7, g_pFlattenedSerializers, v14, v36, v4, p_m_bIsNetworkVarExcluded);
        if ( dest != v7 )
        {
          m_szFunction_low = SLOWORD(v46.m_szFunction);
          v4->m_PathToVector.m_bUsingExternalPaths = 0;
          if ( m_szFunction_low > 6 )
          {
            v4 = &LOG_GENERAL;
            if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) == 0 )
              goto LABEL_38;
            *&path.u.m_FixedPaths[4].m_nValue = 442;
            path.u.m_pPaths = "../../public/tier2/fieldpath.h";
            *&path.m_nCount = "Path_SetCount";
            v33 = &path;
            goto LABEL_66;
          }
          v4->m_PathToVector.m_nCount = m_szFunction_low;
          if ( m_szFunction_low > 0 )
          {
            v16 = 2 * m_szFunction_low;
            m_szFile = v7;
            if ( BYTE2(v46.m_szFunction) != 0 )
              m_szFile = v46.m_szFile;
            memcpy(dest, m_szFile, v16);
          }
        }
      }
      else
      {
        if ( v4->m_PathToVector.m_bUsingExternalPaths )
          goto LABEL_57;
        v4->m_PathToVector.m_nCount = 0;
      }
    }
    if ( !v4->m_bIsNetworkVarExcluded )
    {
      v18 = v4->m_PathToVector.m_nCount;
      path.m_bUsingExternalPaths = 0;
      path.m_nCount = 0;
      if ( v18 > 6 )
        goto LABEL_64;
      path.m_nCount = v18;
      if ( v18 <= 0 )
        goto LABEL_41;
      v19 = 2 * v18;
      if ( v4->m_PathToVector.m_bUsingExternalPaths )
        m_pPaths = v4->m_PathToVector.u.m_pPaths;
      else
        m_pPaths = dest;
      __memcpy_chk(p_path, m_pPaths, v19, 24);
      v21 = v2;
      if ( !path.m_bUsingExternalPaths )
        goto LABEL_42;
      v4 = &LOG_GENERAL;
      if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
      {
        v46.m_szFile = "../../public/tier2/fieldpath.h";
        v46.m_szFunction = "Path_AddToTail";
        v46.m_nLine = 428;
        LoggingSystem_Log(
          LOG_GENERAL,
          LoggingSeverity_t::LS_ERROR,
          &v46,
          "Path_AddToTail failed for read only CFieldPath");
      }
      goto LABEL_38;
    }
  }
LABEL_48:
  m_pArraySizeChangedDelegate = v4->m_pArraySizeChangedDelegate;
  if ( m_pArraySizeChangedDelegate != 0 )
  {
    pfn = m_pArraySizeChangedDelegate->m_Closure.m_pFunction.__pfn;
    v32 = (m_pArraySizeChangedDelegate->m_Closure.m_pthis + m_pArraySizeChangedDelegate->m_Closure.m_pFunction.__delta);
    if ( (pfn & 1) != 0 )
      pfn = *(pfn + *v32 - 1);
    pfn(v32);
  }
}


// CUtlVectorEmbeddedNetworkVar<CAnimationLayer, CBaseAnimatingOverlayController::NetworkVar_m_AnimOverlay, -1>::Resolve  (line 1720, @0x000000000205b810, libserver.so)  // inlines: Clear, LeafCodeInfo_t, Path_RemoveAll
// calls: LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...)
// callers: CBaseAnimatingOverlayController::RemoveOverlays, CBaseAnimatingOverlayController::UpdateOnRemove, CBaseAnimatingOverlayController::AddOverlays, CBaseAnimatingOverlayController::SetNumAnimOverlays
// strings: "../../public/tier2/fieldpath.h", "Path_RemoveAll", "Path_RemoveAll failed for read only CFieldPath"
void __fastcall __noreturn CUtlVectorEmbeddedNetworkVar<CAnimationLayer,CBaseAnimatingOverlayController::NetworkVar_m_AnimOverlay,-1>::Resolve(
        CUtlVectorEmbeddedNetworkVar<CAnimationLayer,CBaseAnimatingOverlayController::NetworkVar_m_AnimOverlay,-1> *const this)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // rdi
  __int64 v4; // rsi
  __int64 v5; // r8
  __int64 v6; // r9
  LeafCodeInfo_t v7; // [rsp+0h] [rbp-30h] BYREF

  if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
    goto LABEL_5;
  while ( 1 )
  {
    if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v3, v4, v1, v2) != 0 )
      loc_0 = -559038737;
    Plat_ExitProcess(1);
LABEL_5:
    v7.m_szFile = "../../public/tier2/fieldpath.h";
    v7.m_szFunction = "Path_RemoveAll";
    v7.m_nLine = 487;
    LoggingSystem_Log(
      LOG_GENERAL,
      LoggingSeverity_t::LS_ERROR,
      &v7,
      "Path_RemoveAll failed for read only CFieldPath",
      v5,
      v6);
  }
}


// CUtlVectorEmbeddedNetworkVar<DataTeamPlayer_t, CDOTA_DataNonSpectator::NetworkVar_m_vecDataTeam, -1>::Resolve  (line 1720, @0x00000000024654f0 libserver.so, @0x0000000002655ef0 libserver.so)  // inlines: Clear, LeafCodeInfo_t, Path_RemoveAll
// calls: LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...)
// callers: CUtlVectorEmbeddedNetworkVar<DataTeamPlayer_t, CDOTA_DataNonSpectator::NetworkVar_m_vecDataTeam, -1>::Resolve, CDOTA_DataNonSpectator::ChangeTeam
// strings: "../../public/tier2/fieldpath.h", "Path_RemoveAll", "Path_RemoveAll failed for read only CFieldPath"
void __fastcall __noreturn CUtlVectorEmbeddedNetworkVar<DataTeamPlayer_t,CDOTA_DataNonSpectator::NetworkVar_m_vecDataTeam,-1>::Resolve(
        CUtlVectorEmbeddedNetworkVar<DataTeamPlayer_t,CDOTA_DataNonSpectator::NetworkVar_m_vecDataTeam,-1> *const this)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // rdi
  __int64 v4; // rsi
  __int64 v5; // r8
  __int64 v6; // r9
  LeafCodeInfo_t v7; // [rsp+0h] [rbp-30h] BYREF

  if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
    goto LABEL_5;
  while ( 1 )
  {
    if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v3, v4, v1, v2) != 0 )
      loc_0 = -559038737;
    Plat_ExitProcess(1);
LABEL_5:
    v7.m_szFile = "../../public/tier2/fieldpath.h";
    v7.m_szFunction = "Path_RemoveAll";
    v7.m_nLine = 487;
    LoggingSystem_Log(
      LOG_GENERAL,
      LoggingSeverity_t::LS_ERROR,
      &v7,
      "Path_RemoveAll failed for read only CFieldPath",
      v5,
      v6);
  }
}


// CUtlVectorEmbeddedNetworkVar<DataTeamPlayer_t, CDOTA_DataNonSpectator::NetworkVar_m_vecDataTeam, -1>::Resolve  (line 1720, @0x00000000024ae570, libserver.so)  // inlines: Clear, Get, GetPathData, IsUsingFixedPaths, LeafCodeInfo_t, Path_RemoveAll, Path_SetCount, V_memcpy, memcpy, operator CEntityInstance*, operator=
// calls: GetNetworkSerializerForEntityInstance, memcpy, CUtlVectorEmbeddedNetworkVar<DataTeamPlayer_t, CDOTA_DataNonSpectator::NetworkVar_m_vecDataTeam, -1>::Resolve, LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...)
// callers: CDOTA_DataNonSpectator::Reset, CDOTA_PlayerResource::UpdateTeamSlot
// strings: "../../public/tier2/fieldpath.h", "Path_SetCount", "Path_SetCount failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)"
void __fastcall CUtlVectorEmbeddedNetworkVar<DataTeamPlayer_t,CDOTA_DataNonSpectator::NetworkVar_m_vecDataTeam,-1>::Resolve(
        CUtlVectorEmbeddedNetworkVar<DataTeamPlayer_t,CDOTA_DataNonSpectator::NetworkVar_m_vecDataTeam,-1> *const this)
{
  CEntityInstance *m_pObj; // r12
  void (__fastcall *v3)(void **, IFlattenedSerializers *, FlattenedSerializerHandle_t, CEntityInstance *, CUtlVectorEmbeddedNetworkVar<DataTeamPlayer_t,CDOTA_DataNonSpectator::NetworkVar_m_vecDataTeam,-1> *const, bool *); // r14
  FlattenedSerializerHandle_t NetworkSerializerForEntityInstance; // rax
  __int64 v5; // rdx
  size_t v6; // rdx
  void **v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rsi
  void *src[2]; // [rsp+0h] [rbp-60h] BYREF
  __int16 v13; // [rsp+10h] [rbp-50h]
  char v14; // [rsp+12h] [rbp-4Eh]
  LeafCodeInfo_t v15; // [rsp+20h] [rbp-40h] BYREF

  if ( !this->m_bResolved )
  {
    m_pObj = this->m_pOwnerEntity.m_pObj;
    this->m_bResolved = 1;
    if ( m_pObj != 0 )
    {
      v3 = *(*g_pFlattenedSerializers + 272LL);
      NetworkSerializerForEntityInstance = GetNetworkSerializerForEntityInstance(m_pObj);
      v3(src, g_pFlattenedSerializers, NetworkSerializerForEntityInstance, m_pObj, this, &this->m_bIsNetworkVarExcluded);
      if ( &this->m_PathToVector != src )
      {
        v5 = v13;
        this->m_PathToVector.m_bUsingExternalPaths = 0;
        if ( v5 > 6 )
        {
          if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
            goto LABEL_17;
          while ( 1 )
          {
            if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v10, v11, v8, v9) != 0 )
              loc_0 = -559038737;
            Plat_ExitProcess(1);
LABEL_17:
            v15.m_szFile = "../../public/tier2/fieldpath.h";
            v15.m_szFunction = "Path_SetCount";
            v15.m_nLine = 442;
            LoggingSystem_Log(
              LOG_GENERAL,
              LoggingSeverity_t::LS_ERROR,
              &v15,
              "Path_SetCount failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)",
              6);
          }
        }
        this->m_PathToVector.m_nCount = v5;
        if ( v5 > 0 )
        {
          v6 = 2 * v5;
          v7 = src;
          if ( v14 != 0 )
            v7 = src[0];
          memcpy(&this->m_PathToVector, v7, v6);
        }
      }
    }
    else
    {
      if ( this->m_PathToVector.m_bUsingExternalPaths )
        CUtlVectorEmbeddedNetworkVar<DataTeamPlayer_t,CDOTA_DataNonSpectator::NetworkVar_m_vecDataTeam,-1>::Resolve(this);
      this->m_PathToVector.m_nCount = 0;
    }
  }
}


// CUtlVectorEmbeddedNetworkVar<TempViewerInfo_t, CDOTAFogOfWarTempViewers::NetworkVar_m_TempViewerInfo, -1>::Resolve  (line 1720, @0x00000000024b81c0, libserver.so)  // inlines: Clear, LeafCodeInfo_t, Path_RemoveAll
// calls: LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...)
// callers: CDOTAFogOfWarTempViewers::CDOTAFogOfWarTempViewers, CDOTAFogOfWarTempViewers::AddTempViewer
// strings: "../../public/tier2/fieldpath.h", "Path_RemoveAll", "Path_RemoveAll failed for read only CFieldPath"
void __fastcall __noreturn CUtlVectorEmbeddedNetworkVar<TempViewerInfo_t,CDOTAFogOfWarTempViewers::NetworkVar_m_TempViewerInfo,-1>::Resolve(
        CUtlVectorEmbeddedNetworkVar<TempViewerInfo_t,CDOTAFogOfWarTempViewers::NetworkVar_m_TempViewerInfo,-1> *const this)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // rdi
  __int64 v4; // rsi
  __int64 v5; // r8
  __int64 v6; // r9
  LeafCodeInfo_t v7; // [rsp+0h] [rbp-30h] BYREF

  if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
    goto LABEL_5;
  while ( 1 )
  {
    if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v3, v4, v1, v2) != 0 )
      loc_0 = -559038737;
    Plat_ExitProcess(1);
LABEL_5:
    v7.m_szFile = "../../public/tier2/fieldpath.h";
    v7.m_szFunction = "Path_RemoveAll";
    v7.m_nLine = 487;
    LoggingSystem_Log(
      LOG_GENERAL,
      LoggingSeverity_t::LS_ERROR,
      &v7,
      "Path_RemoveAll failed for read only CFieldPath",
      v5,
      v6);
  }
}


// CUtlVectorEmbeddedNetworkVar<CHeroesPerPlayer, CDOTAGamerules::NetworkVar_m_vecAvailableHerosPerPlayerID, -1>::Resolve  (line 1720, @0x00000000024b8240, libserver.so)  // inlines: Clear, LeafCodeInfo_t, Path_RemoveAll
// calls: LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...)
// callers: CUtlVectorEmbeddedNetworkVar<CHeroesPerPlayer, CDOTAGamerules::NetworkVar_m_vecAvailableHerosPerPlayerID, -1>::OnChainPropagationChange, CUtlVectorEmbeddedNetworkVar<CHeroesPerPlayer, CDOTAGamerules::NetworkVar_m_vecAvailableHerosPerPlayerID, -1>::SetCount
// strings: "../../public/tier2/fieldpath.h", "Path_RemoveAll", "Path_RemoveAll failed for read only CFieldPath"
void __fastcall __noreturn CUtlVectorEmbeddedNetworkVar<CHeroesPerPlayer,CDOTAGamerules::NetworkVar_m_vecAvailableHerosPerPlayerID,-1>::Resolve(
        CUtlVectorEmbeddedNetworkVar<CHeroesPerPlayer,CDOTAGamerules::NetworkVar_m_vecAvailableHerosPerPlayerID,-1> *const this)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // rdi
  __int64 v4; // rsi
  __int64 v5; // r8
  __int64 v6; // r9
  LeafCodeInfo_t v7; // [rsp+0h] [rbp-30h] BYREF

  if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
    goto LABEL_5;
  while ( 1 )
  {
    if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v3, v4, v1, v2) != 0 )
      loc_0 = -559038737;
    Plat_ExitProcess(1);
LABEL_5:
    v7.m_szFile = "../../public/tier2/fieldpath.h";
    v7.m_szFunction = "Path_RemoveAll";
    v7.m_nLine = 487;
    LoggingSystem_Log(
      LOG_GENERAL,
      LoggingSeverity_t::LS_ERROR,
      &v7,
      "Path_RemoveAll failed for read only CFieldPath",
      v5,
      v6);
  }
}


// CUtlVectorEmbeddedNetworkVar<CHeroesPerPlayer, CDOTAGamerules::NetworkVar_m_vecLockedHerosByPlayerID, -1>::Resolve  (line 1720, @0x00000000024b82c0, libserver.so)  // inlines: Clear, LeafCodeInfo_t, Path_RemoveAll
// calls: LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...)
// callers: CUtlVectorEmbeddedNetworkVar<CHeroesPerPlayer, CDOTAGamerules::NetworkVar_m_vecLockedHerosByPlayerID, -1>::OnChainPropagationChange, CUtlVectorEmbeddedNetworkVar<CHeroesPerPlayer, CDOTAGamerules::NetworkVar_m_vecLockedHerosByPlayerID, -1>::Resolve, CDOTAGamerules::HeroPickState_Enter_AP_SELECT
// strings: "../../public/tier2/fieldpath.h", "Path_RemoveAll", "Path_RemoveAll failed for read only CFieldPath"
void __fastcall __noreturn CUtlVectorEmbeddedNetworkVar<CHeroesPerPlayer,CDOTAGamerules::NetworkVar_m_vecLockedHerosByPlayerID,-1>::Resolve(
        CUtlVectorEmbeddedNetworkVar<CHeroesPerPlayer,CDOTAGamerules::NetworkVar_m_vecLockedHerosByPlayerID,-1> *const this)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // rdi
  __int64 v4; // rsi
  __int64 v5; // r8
  __int64 v6; // r9
  LeafCodeInfo_t v7; // [rsp+0h] [rbp-30h] BYREF

  if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
    goto LABEL_5;
  while ( 1 )
  {
    if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v3, v4, v1, v2) != 0 )
      loc_0 = -559038737;
    Plat_ExitProcess(1);
LABEL_5:
    v7.m_szFile = "../../public/tier2/fieldpath.h";
    v7.m_szFunction = "Path_RemoveAll";
    v7.m_nLine = 487;
    LoggingSystem_Log(
      LOG_GENERAL,
      LoggingSeverity_t::LS_ERROR,
      &v7,
      "Path_RemoveAll failed for read only CFieldPath",
      v5,
      v6);
  }
}


// CUtlVectorEmbeddedNetworkVar<CDOTA_ItemStockInfo, CDOTAGamerules::NetworkVar_m_vecItemStockInfo, -1>::Resolve  (line 1720, @0x00000000024b8340, libserver.so)  // inlines: Clear, LeafCodeInfo_t, Path_RemoveAll
// calls: LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...)
// callers: CUtlVectorEmbeddedNetworkVar<CDOTA_ItemStockInfo, CDOTAGamerules::NetworkVar_m_vecItemStockInfo, -1>::OnChainPropagationChange, CUtlVectorEmbeddedNetworkVar<CDOTA_ItemStockInfo, CDOTAGamerules::NetworkVar_m_vecItemStockInfo, -1>::AssignPathIdToElement, CUtlVectorEmbeddedNetworkVar<CDOTA_ItemStockInfo, CDOTAGamerules::NetworkVar_m_vecItemStockInfo, -1>::Resolve, CDOTAGamerules::LoadStockInformation
// strings: "../../public/tier2/fieldpath.h", "Path_RemoveAll", "Path_RemoveAll failed for read only CFieldPath"
void __fastcall __noreturn CUtlVectorEmbeddedNetworkVar<CDOTA_ItemStockInfo,CDOTAGamerules::NetworkVar_m_vecItemStockInfo,-1>::Resolve(
        CUtlVectorEmbeddedNetworkVar<CDOTA_ItemStockInfo,CDOTAGamerules::NetworkVar_m_vecItemStockInfo,-1> *const this)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // rdi
  __int64 v4; // rsi
  __int64 v5; // r8
  __int64 v6; // r9
  LeafCodeInfo_t v7; // [rsp+0h] [rbp-30h] BYREF

  if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
    goto LABEL_5;
  while ( 1 )
  {
    if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v3, v4, v1, v2) != 0 )
      loc_0 = -559038737;
    Plat_ExitProcess(1);
LABEL_5:
    v7.m_szFile = "../../public/tier2/fieldpath.h";
    v7.m_szFunction = "Path_RemoveAll";
    v7.m_nLine = 487;
    LoggingSystem_Log(
      LOG_GENERAL,
      LoggingSeverity_t::LS_ERROR,
      &v7,
      "Path_RemoveAll failed for read only CFieldPath",
      v5,
      v6);
  }
}


// CUtlVectorEmbeddedNetworkVar<CDOTA_AbilityDraftAbilityState, CDOTAGamerules::NetworkVar_m_AbilityDraftAbilities, -1>::Resolve  (line 1720, @0x00000000024b8440, libserver.so)  // inlines: Clear, LeafCodeInfo_t, Path_RemoveAll
// calls: LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...)
// callers: CUtlVectorEmbeddedNetworkVar<CDOTA_AbilityDraftAbilityState, CDOTAGamerules::NetworkVar_m_AbilityDraftAbilities, -1>::OnChainPropagationChange, CUtlVectorEmbeddedNetworkVar<CDOTA_AbilityDraftAbilityState, CDOTAGamerules::NetworkVar_m_AbilityDraftAbilities, -1>::Resolve, CDOTAGamerules::HeroPickState_Enter_Ability_Draft_SELECT
// strings: "../../public/tier2/fieldpath.h", "Path_RemoveAll", "Path_RemoveAll failed for read only CFieldPath"
void __fastcall __noreturn CUtlVectorEmbeddedNetworkVar<CDOTA_AbilityDraftAbilityState,CDOTAGamerules::NetworkVar_m_AbilityDraftAbilities,-1>::Resolve(
        CUtlVectorEmbeddedNetworkVar<CDOTA_AbilityDraftAbilityState,CDOTAGamerules::NetworkVar_m_AbilityDraftAbilities,-1> *const this)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // rdi
  __int64 v4; // rsi
  __int64 v5; // r8
  __int64 v6; // r9
  LeafCodeInfo_t v7; // [rsp+0h] [rbp-30h] BYREF

  if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
    goto LABEL_5;
  while ( 1 )
  {
    if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v3, v4, v1, v2) != 0 )
      loc_0 = -559038737;
    Plat_ExitProcess(1);
LABEL_5:
    v7.m_szFile = "../../public/tier2/fieldpath.h";
    v7.m_szFunction = "Path_RemoveAll";
    v7.m_nLine = 487;
    LoggingSystem_Log(
      LOG_GENERAL,
      LoggingSeverity_t::LS_ERROR,
      &v7,
      "Path_RemoveAll failed for read only CFieldPath",
      v5,
      v6);
  }
}


// CUtlVectorEmbeddedNetworkVar<CHeroStatueLiked, CDOTAGamerules::NetworkVar_m_vecHeroStatueLiked, -1>::Resolve  (line 1720, @0x00000000024b84c0, libserver.so)  // inlines: Clear, LeafCodeInfo_t, Path_RemoveAll
// calls: LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...)
// callers: CUtlVectorEmbeddedNetworkVar<CHeroStatueLiked, CDOTAGamerules::NetworkVar_m_vecHeroStatueLiked, -1>::OnChainPropagationChange, CDOTAGamerules::ClientMsg_HeroStatueLike
// strings: "../../public/tier2/fieldpath.h", "Path_RemoveAll", "Path_RemoveAll failed for read only CFieldPath"
void __fastcall __noreturn CUtlVectorEmbeddedNetworkVar<CHeroStatueLiked,CDOTAGamerules::NetworkVar_m_vecHeroStatueLiked,-1>::Resolve(
        CUtlVectorEmbeddedNetworkVar<CHeroStatueLiked,CDOTAGamerules::NetworkVar_m_vecHeroStatueLiked,-1> *const this)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // rdi
  __int64 v4; // rsi
  __int64 v5; // r8
  __int64 v6; // r9
  LeafCodeInfo_t v7; // [rsp+0h] [rbp-30h] BYREF

  if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
    goto LABEL_5;
  while ( 1 )
  {
    if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v3, v4, v1, v2) != 0 )
      loc_0 = -559038737;
    Plat_ExitProcess(1);
LABEL_5:
    v7.m_szFile = "../../public/tier2/fieldpath.h";
    v7.m_szFunction = "Path_RemoveAll";
    v7.m_nLine = 487;
    LoggingSystem_Log(
      LOG_GENERAL,
      LoggingSeverity_t::LS_ERROR,
      &v7,
      "Path_RemoveAll failed for read only CFieldPath",
      v5,
      v6);
  }
}


// CUtlVectorEmbeddedNetworkVar<CHeroesPerPlayer, CDOTAGamerules::NetworkVar_m_vecLockedHerosByPlayerID, -1>::Resolve  (line 1720, @0x000000000257c000, libserver.so)  // inlines: Clear, Get, GetPathData, IsUsingFixedPaths, LeafCodeInfo_t, Path_RemoveAll, Path_SetCount, V_memcpy, memcpy, operator CEntityInstance*, operator=
// calls: GetNetworkSerializerForEntityInstance, memcpy, CUtlVectorEmbeddedNetworkVar<CHeroesPerPlayer, CDOTAGamerules::NetworkVar_m_vecLockedHerosByPlayerID, -1>::Resolve, LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...)
// callers: CDOTAGamerules::HeroPickState_Enter_AP_SELECT
// strings: "../../public/tier2/fieldpath.h", "Path_SetCount", "Path_SetCount failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)"
void __fastcall CUtlVectorEmbeddedNetworkVar<CHeroesPerPlayer,CDOTAGamerules::NetworkVar_m_vecLockedHerosByPlayerID,-1>::Resolve(
        CUtlVectorEmbeddedNetworkVar<CHeroesPerPlayer,CDOTAGamerules::NetworkVar_m_vecLockedHerosByPlayerID,-1> *const this)
{
  CEntityInstance *m_pObj; // r12
  void (__fastcall *v3)(void **, IFlattenedSerializers *, FlattenedSerializerHandle_t, CEntityInstance *, CUtlVectorEmbeddedNetworkVar<CHeroesPerPlayer,CDOTAGamerules::NetworkVar_m_vecLockedHerosByPlayerID,-1> *const, bool *); // r14
  FlattenedSerializerHandle_t NetworkSerializerForEntityInstance; // rax
  __int64 v5; // rdx
  size_t v6; // rdx
  void **v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rsi
  void *src[2]; // [rsp+0h] [rbp-60h] BYREF
  __int16 v13; // [rsp+10h] [rbp-50h]
  char v14; // [rsp+12h] [rbp-4Eh]
  LeafCodeInfo_t v15; // [rsp+20h] [rbp-40h] BYREF

  if ( !this->m_bResolved )
  {
    m_pObj = this->m_pOwnerEntity.m_pObj;
    this->m_bResolved = 1;
    if ( m_pObj != 0 )
    {
      v3 = *(*g_pFlattenedSerializers + 272LL);
      NetworkSerializerForEntityInstance = GetNetworkSerializerForEntityInstance(m_pObj);
      v3(src, g_pFlattenedSerializers, NetworkSerializerForEntityInstance, m_pObj, this, &this->m_bIsNetworkVarExcluded);
      if ( &this->m_PathToVector != src )
      {
        v5 = v13;
        this->m_PathToVector.m_bUsingExternalPaths = 0;
        if ( v5 > 6 )
        {
          if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
            goto LABEL_17;
          while ( 1 )
          {
            if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v10, v11, v8, v9) != 0 )
              loc_0 = -559038737;
            Plat_ExitProcess(1);
LABEL_17:
            v15.m_szFile = "../../public/tier2/fieldpath.h";
            v15.m_szFunction = "Path_SetCount";
            v15.m_nLine = 442;
            LoggingSystem_Log(
              LOG_GENERAL,
              LoggingSeverity_t::LS_ERROR,
              &v15,
              "Path_SetCount failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)",
              6);
          }
        }
        this->m_PathToVector.m_nCount = v5;
        if ( v5 > 0 )
        {
          v6 = 2 * v5;
          v7 = src;
          if ( v14 != 0 )
            v7 = src[0];
          memcpy(&this->m_PathToVector, v7, v6);
        }
      }
    }
    else
    {
      if ( this->m_PathToVector.m_bUsingExternalPaths )
        CUtlVectorEmbeddedNetworkVar<CHeroesPerPlayer,CDOTAGamerules::NetworkVar_m_vecLockedHerosByPlayerID,-1>::Resolve(this);
      this->m_PathToVector.m_nCount = 0;
    }
  }
}


// CUtlVectorEmbeddedNetworkVar<CDOTA_ItemStockInfo, CDOTAGamerules::NetworkVar_m_vecItemStockInfo, -1>::Resolve  (line 1720, @0x000000000257c130, libserver.so)  // inlines: Clear, Get, GetPathData, IsUsingFixedPaths, LeafCodeInfo_t, Path_RemoveAll, Path_SetCount, V_memcpy, memcpy, operator CEntityInstance*, operator=
// calls: GetNetworkSerializerForEntityInstance, memcpy, CUtlVectorEmbeddedNetworkVar<CDOTA_ItemStockInfo, CDOTAGamerules::NetworkVar_m_vecItemStockInfo, -1>::Resolve, LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...)
// callers: CDOTAGamerules::CreateItemStockInfo
// strings: "../../public/tier2/fieldpath.h", "Path_SetCount", "Path_SetCount failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)"
void __fastcall CUtlVectorEmbeddedNetworkVar<CDOTA_ItemStockInfo,CDOTAGamerules::NetworkVar_m_vecItemStockInfo,-1>::Resolve(
        CUtlVectorEmbeddedNetworkVar<CDOTA_ItemStockInfo,CDOTAGamerules::NetworkVar_m_vecItemStockInfo,-1> *const this)
{
  CEntityInstance *m_pObj; // r12
  void (__fastcall *v3)(void **, IFlattenedSerializers *, FlattenedSerializerHandle_t, CEntityInstance *, CUtlVectorEmbeddedNetworkVar<CDOTA_ItemStockInfo,CDOTAGamerules::NetworkVar_m_vecItemStockInfo,-1> *const, bool *); // r14
  FlattenedSerializerHandle_t NetworkSerializerForEntityInstance; // rax
  __int64 v5; // rdx
  size_t v6; // rdx
  void **v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rsi
  void *src[2]; // [rsp+0h] [rbp-60h] BYREF
  __int16 v13; // [rsp+10h] [rbp-50h]
  char v14; // [rsp+12h] [rbp-4Eh]
  LeafCodeInfo_t v15; // [rsp+20h] [rbp-40h] BYREF

  if ( !this->m_bResolved )
  {
    m_pObj = this->m_pOwnerEntity.m_pObj;
    this->m_bResolved = 1;
    if ( m_pObj != 0 )
    {
      v3 = *(*g_pFlattenedSerializers + 272LL);
      NetworkSerializerForEntityInstance = GetNetworkSerializerForEntityInstance(m_pObj);
      v3(src, g_pFlattenedSerializers, NetworkSerializerForEntityInstance, m_pObj, this, &this->m_bIsNetworkVarExcluded);
      if ( &this->m_PathToVector != src )
      {
        v5 = v13;
        this->m_PathToVector.m_bUsingExternalPaths = 0;
        if ( v5 > 6 )
        {
          if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
            goto LABEL_17;
          while ( 1 )
          {
            if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v10, v11, v8, v9) != 0 )
              loc_0 = -559038737;
            Plat_ExitProcess(1);
LABEL_17:
            v15.m_szFile = "../../public/tier2/fieldpath.h";
            v15.m_szFunction = "Path_SetCount";
            v15.m_nLine = 442;
            LoggingSystem_Log(
              LOG_GENERAL,
              LoggingSeverity_t::LS_ERROR,
              &v15,
              "Path_SetCount failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)",
              6);
          }
        }
        this->m_PathToVector.m_nCount = v5;
        if ( v5 > 0 )
        {
          v6 = 2 * v5;
          v7 = src;
          if ( v14 != 0 )
            v7 = src[0];
          memcpy(&this->m_PathToVector, v7, v6);
        }
      }
    }
    else
    {
      if ( this->m_PathToVector.m_bUsingExternalPaths )
        CUtlVectorEmbeddedNetworkVar<CDOTA_ItemStockInfo,CDOTAGamerules::NetworkVar_m_vecItemStockInfo,-1>::Resolve(this);
      this->m_PathToVector.m_nCount = 0;
    }
  }
}


// CUtlVectorEmbeddedNetworkVar<CDOTA_AbilityDraftAbilityState, CDOTAGamerules::NetworkVar_m_AbilityDraftAbilities, -1>::Resolve  (line 1720, @0x000000000257c260, libserver.so)  // inlines: Clear, Get, GetPathData, IsUsingFixedPaths, LeafCodeInfo_t, Path_RemoveAll, Path_SetCount, V_memcpy, memcpy, operator CEntityInstance*, operator=
// calls: GetNetworkSerializerForEntityInstance, memcpy, CUtlVectorEmbeddedNetworkVar<CDOTA_AbilityDraftAbilityState, CDOTAGamerules::NetworkVar_m_AbilityDraftAbilities, -1>::Resolve, LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...)
// callers: CDOTAGamerules::HeroPickState_Enter_Ability_Draft_SELECT
// strings: "../../public/tier2/fieldpath.h", "Path_SetCount", "Path_SetCount failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)"
void __fastcall CUtlVectorEmbeddedNetworkVar<CDOTA_AbilityDraftAbilityState,CDOTAGamerules::NetworkVar_m_AbilityDraftAbilities,-1>::Resolve(
        CUtlVectorEmbeddedNetworkVar<CDOTA_AbilityDraftAbilityState,CDOTAGamerules::NetworkVar_m_AbilityDraftAbilities,-1> *const this)
{
  CEntityInstance *m_pObj; // r12
  void (__fastcall *v3)(void **, IFlattenedSerializers *, FlattenedSerializerHandle_t, CEntityInstance *, CUtlVectorEmbeddedNetworkVar<CDOTA_AbilityDraftAbilityState,CDOTAGamerules::NetworkVar_m_AbilityDraftAbilities,-1> *const, bool *); // r14
  FlattenedSerializerHandle_t NetworkSerializerForEntityInstance; // rax
  __int64 v5; // rdx
  size_t v6; // rdx
  void **v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rsi
  void *src[2]; // [rsp+0h] [rbp-60h] BYREF
  __int16 v13; // [rsp+10h] [rbp-50h]
  char v14; // [rsp+12h] [rbp-4Eh]
  LeafCodeInfo_t v15; // [rsp+20h] [rbp-40h] BYREF

  if ( !this->m_bResolved )
  {
    m_pObj = this->m_pOwnerEntity.m_pObj;
    this->m_bResolved = 1;
    if ( m_pObj != 0 )
    {
      v3 = *(*g_pFlattenedSerializers + 272LL);
      NetworkSerializerForEntityInstance = GetNetworkSerializerForEntityInstance(m_pObj);
      v3(src, g_pFlattenedSerializers, NetworkSerializerForEntityInstance, m_pObj, this, &this->m_bIsNetworkVarExcluded);
      if ( &this->m_PathToVector != src )
      {
        v5 = v13;
        this->m_PathToVector.m_bUsingExternalPaths = 0;
        if ( v5 > 6 )
        {
          if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
            goto LABEL_17;
          while ( 1 )
          {
            if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v10, v11, v8, v9) != 0 )
              loc_0 = -559038737;
            Plat_ExitProcess(1);
LABEL_17:
            v15.m_szFile = "../../public/tier2/fieldpath.h";
            v15.m_szFunction = "Path_SetCount";
            v15.m_nLine = 442;
            LoggingSystem_Log(
              LOG_GENERAL,
              LoggingSeverity_t::LS_ERROR,
              &v15,
              "Path_SetCount failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)",
              6);
          }
        }
        this->m_PathToVector.m_nCount = v5;
        if ( v5 > 0 )
        {
          v6 = 2 * v5;
          v7 = src;
          if ( v14 != 0 )
            v7 = src[0];
          memcpy(&this->m_PathToVector, v7, v6);
        }
      }
    }
    else
    {
      if ( this->m_PathToVector.m_bUsingExternalPaths )
        CUtlVectorEmbeddedNetworkVar<CDOTA_AbilityDraftAbilityState,CDOTAGamerules::NetworkVar_m_AbilityDraftAbilities,-1>::Resolve(this);
      this->m_PathToVector.m_nCount = 0;
    }
  }
}


// CUtlVectorEmbeddedNetworkVar<InGamePredictionData_t, CDOTAInGamePredictionState::NetworkVar_m_vecPredictions, -1>::Resolve  (line 1720, @0x0000000002595b90, libserver.so)  // inlines: Clear, LeafCodeInfo_t, Path_RemoveAll
// calls: LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...)
// callers: CDOTAInGamePredictionGameSystem::SelectInGamePredictions
// strings: "../../public/tier2/fieldpath.h", "Path_RemoveAll", "Path_RemoveAll failed for read only CFieldPath"
void __fastcall __noreturn CUtlVectorEmbeddedNetworkVar<InGamePredictionData_t,CDOTAInGamePredictionState::NetworkVar_m_vecPredictions,-1>::Resolve(
        CUtlVectorEmbeddedNetworkVar<InGamePredictionData_t,CDOTAInGamePredictionState::NetworkVar_m_vecPredictions,-1> *const this)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // rdi
  __int64 v4; // rsi
  __int64 v5; // r8
  __int64 v6; // r9
  LeafCodeInfo_t v7; // [rsp+0h] [rbp-30h] BYREF

  if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
    goto LABEL_5;
  while ( 1 )
  {
    if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v3, v4, v1, v2) != 0 )
      loc_0 = -559038737;
    Plat_ExitProcess(1);
LABEL_5:
    v7.m_szFile = "../../public/tier2/fieldpath.h";
    v7.m_szFunction = "Path_RemoveAll";
    v7.m_nLine = 487;
    LoggingSystem_Log(
      LOG_GENERAL,
      LoggingSeverity_t::LS_ERROR,
      &v7,
      "Path_RemoveAll failed for read only CFieldPath",
      v5,
      v6);
  }
}


// CUtlVectorEmbeddedNetworkVar<CDOTA_PlayerChallengeInfo, CIngameEvent_Base::NetworkVar_m_CompendiumChallengeInfo, 24>::Resolve  (line 1720, @0x0000000002595c10, libserver.so)  // inlines: Clear, LeafCodeInfo_t, Path_RemoveAll
// calls: LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...)
// callers: CUtlVectorEmbeddedNetworkVar<CDOTA_PlayerChallengeInfo, CIngameEvent_Base::NetworkVar_m_CompendiumChallengeInfo, 24>::Resolve, CIngameEvent_WM2016::GoActive, CIngameEvent_FM2015::CEntityInstanceEntityClass::ConstructInstance, CIngameEvent_WM2016::CEntityInstanceEntityClass::ConstructInstance, CIngameEvent_TI6::CEntityInstanceEntityClass::ConstructInstance, CIngameEvent_WM2017::CEntityInstanceEntityClass::ConstructInstance, CIngameEvent_FM2016::CEntityInstanceEntityClass::ConstructInstance
// strings: "../../public/tier2/fieldpath.h", "Path_RemoveAll", "Path_RemoveAll failed for read only CFieldPath"
void __fastcall __noreturn CUtlVectorEmbeddedNetworkVar<CDOTA_PlayerChallengeInfo,CIngameEvent_Base::NetworkVar_m_CompendiumChallengeInfo,24>::Resolve(
        CUtlVectorEmbeddedNetworkVar<CDOTA_PlayerChallengeInfo,CIngameEvent_Base::NetworkVar_m_CompendiumChallengeInfo,24> *const this)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // rdi
  __int64 v4; // rsi
  __int64 v5; // r8
  __int64 v6; // r9
  LeafCodeInfo_t v7; // [rsp+0h] [rbp-30h] BYREF

  if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
    goto LABEL_5;
  while ( 1 )
  {
    if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v3, v4, v1, v2) != 0 )
      loc_0 = -559038737;
    Plat_ExitProcess(1);
LABEL_5:
    v7.m_szFile = "../../public/tier2/fieldpath.h";
    v7.m_szFunction = "Path_RemoveAll";
    v7.m_nLine = 487;
    LoggingSystem_Log(
      LOG_GENERAL,
      LoggingSeverity_t::LS_ERROR,
      &v7,
      "Path_RemoveAll failed for read only CFieldPath",
      v5,
      v6);
  }
}


// CUtlVectorEmbeddedNetworkVar<CDOTASubChallengeInfo, CIngameEvent_WM2016::NetworkVar_m_SubChallenges, -1>::Resolve  (line 1720, @0x0000000002595c90, libserver.so)  // inlines: Clear, LeafCodeInfo_t, Path_RemoveAll
// calls: LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...)
// callers: CUtlVectorEmbeddedNetworkVar<CDOTASubChallengeInfo, CIngameEvent_WM2016::NetworkVar_m_SubChallenges, -1>::AddToTail
// strings: "../../public/tier2/fieldpath.h", "Path_RemoveAll", "Path_RemoveAll failed for read only CFieldPath"
void __fastcall __noreturn CUtlVectorEmbeddedNetworkVar<CDOTASubChallengeInfo,CIngameEvent_WM2016::NetworkVar_m_SubChallenges,-1>::Resolve(
        CUtlVectorEmbeddedNetworkVar<CDOTASubChallengeInfo,CIngameEvent_WM2016::NetworkVar_m_SubChallenges,-1> *const this)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // rdi
  __int64 v4; // rsi
  __int64 v5; // r8
  __int64 v6; // r9
  LeafCodeInfo_t v7; // [rsp+0h] [rbp-30h] BYREF

  if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
    goto LABEL_5;
  while ( 1 )
  {
    if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v3, v4, v1, v2) != 0 )
      loc_0 = -559038737;
    Plat_ExitProcess(1);
LABEL_5:
    v7.m_szFile = "../../public/tier2/fieldpath.h";
    v7.m_szFunction = "Path_RemoveAll";
    v7.m_nLine = 487;
    LoggingSystem_Log(
      LOG_GENERAL,
      LoggingSeverity_t::LS_ERROR,
      &v7,
      "Path_RemoveAll failed for read only CFieldPath",
      v5,
      v6);
  }
}


// CUtlVectorEmbeddedNetworkVar<CDOTA_CombatLogQueryProgress, CIngameEvent_Base::NetworkVar_m_PlayerQueryIDs, -1>::Resolve  (line 1720, @0x0000000002595d10, libserver.so)  // inlines: Clear, LeafCodeInfo_t, Path_RemoveAll
// calls: LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...)
// callers: CUtlVectorEmbeddedNetworkVar<CDOTA_CombatLogQueryProgress, CIngameEvent_Base::NetworkVar_m_PlayerQueryIDs, -1>::Resolve, CIngameEvent_Base::ClearPlayerCompendiumChallenge, CIngameEvent_Base::ClearQuestQueryForPlayer, CIngameEvent_Base::AddPlayerCombatLogIndexForProgress
// strings: "../../public/tier2/fieldpath.h", "Path_RemoveAll", "Path_RemoveAll failed for read only CFieldPath"
void __fastcall __noreturn CUtlVectorEmbeddedNetworkVar<CDOTA_CombatLogQueryProgress,CIngameEvent_Base::NetworkVar_m_PlayerQueryIDs,-1>::Resolve(
        CUtlVectorEmbeddedNetworkVar<CDOTA_CombatLogQueryProgress,CIngameEvent_Base::NetworkVar_m_PlayerQueryIDs,-1> *const this)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // rdi
  __int64 v4; // rsi
  __int64 v5; // r8
  __int64 v6; // r9
  LeafCodeInfo_t v7; // [rsp+0h] [rbp-30h] BYREF

  if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
    goto LABEL_5;
  while ( 1 )
  {
    if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v3, v4, v1, v2) != 0 )
      loc_0 = -559038737;
    Plat_ExitProcess(1);
LABEL_5:
    v7.m_szFile = "../../public/tier2/fieldpath.h";
    v7.m_szFunction = "Path_RemoveAll";
    v7.m_nLine = 487;
    LoggingSystem_Log(
      LOG_GENERAL,
      LoggingSeverity_t::LS_ERROR,
      &v7,
      "Path_RemoveAll failed for read only CFieldPath",
      v5,
      v6);
  }
}


// CUtlVectorEmbeddedNetworkVar<CDOTA_PlayerChallengeInfo, CIngameEvent_Base::NetworkVar_m_CompendiumChallengeInfo, 24>::Resolve  (line 1720, @0x00000000025d57c0, libserver.so)  // inlines: Clear, Get, GetPathData, IsUsingFixedPaths, LeafCodeInfo_t, Path_RemoveAll, Path_SetCount, V_memcpy, memcpy, operator CEntityInstance*, operator=
// calls: GetNetworkSerializerForEntityInstance, memcpy, CUtlVectorEmbeddedNetworkVar<CDOTA_PlayerChallengeInfo, CIngameEvent_Base::NetworkVar_m_CompendiumChallengeInfo, 24>::Resolve, LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...)
// callers: CIngameEvent_WM2016::GoActive, CIngameEvent_FM2015::CEntityInstanceEntityClass::ConstructInstance, CIngameEvent_WM2016::CEntityInstanceEntityClass::ConstructInstance, CIngameEvent_TI6::CEntityInstanceEntityClass::ConstructInstance, CIngameEvent_WM2017::CEntityInstanceEntityClass::ConstructInstance, CIngameEvent_FM2016::CEntityInstanceEntityClass::ConstructInstance
// strings: "../../public/tier2/fieldpath.h", "Path_SetCount", "Path_SetCount failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)"
void __fastcall CUtlVectorEmbeddedNetworkVar<CDOTA_PlayerChallengeInfo,CIngameEvent_Base::NetworkVar_m_CompendiumChallengeInfo,24>::Resolve(
        CUtlVectorEmbeddedNetworkVar<CDOTA_PlayerChallengeInfo,CIngameEvent_Base::NetworkVar_m_CompendiumChallengeInfo,24> *const this)
{
  CEntityInstance *m_pObj; // r12
  void (__fastcall *v3)(void **, IFlattenedSerializers *, FlattenedSerializerHandle_t, CEntityInstance *, CUtlVectorEmbeddedNetworkVar<CDOTA_PlayerChallengeInfo,CIngameEvent_Base::NetworkVar_m_CompendiumChallengeInfo,24> *const, bool *); // r14
  FlattenedSerializerHandle_t NetworkSerializerForEntityInstance; // rax
  __int64 v5; // rdx
  size_t v6; // rdx
  void **v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rsi
  void *src[2]; // [rsp+0h] [rbp-60h] BYREF
  __int16 v13; // [rsp+10h] [rbp-50h]
  char v14; // [rsp+12h] [rbp-4Eh]
  LeafCodeInfo_t v15; // [rsp+20h] [rbp-40h] BYREF

  if ( !this->m_bResolved )
  {
    m_pObj = this->m_pOwnerEntity.m_pObj;
    this->m_bResolved = 1;
    if ( m_pObj != 0 )
    {
      v3 = *(*g_pFlattenedSerializers + 272LL);
      NetworkSerializerForEntityInstance = GetNetworkSerializerForEntityInstance(m_pObj);
      v3(src, g_pFlattenedSerializers, NetworkSerializerForEntityInstance, m_pObj, this, &this->m_bIsNetworkVarExcluded);
      if ( &this->m_PathToVector != src )
      {
        v5 = v13;
        this->m_PathToVector.m_bUsingExternalPaths = 0;
        if ( v5 > 6 )
        {
          if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
            goto LABEL_17;
          while ( 1 )
          {
            if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v10, v11, v8, v9) != 0 )
              loc_0 = -559038737;
            Plat_ExitProcess(1);
LABEL_17:
            v15.m_szFile = "../../public/tier2/fieldpath.h";
            v15.m_szFunction = "Path_SetCount";
            v15.m_nLine = 442;
            LoggingSystem_Log(
              LOG_GENERAL,
              LoggingSeverity_t::LS_ERROR,
              &v15,
              "Path_SetCount failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)",
              6);
          }
        }
        this->m_PathToVector.m_nCount = v5;
        if ( v5 > 0 )
        {
          v6 = 2 * v5;
          v7 = src;
          if ( v14 != 0 )
            v7 = src[0];
          memcpy(&this->m_PathToVector, v7, v6);
        }
      }
    }
    else
    {
      if ( this->m_PathToVector.m_bUsingExternalPaths )
        CUtlVectorEmbeddedNetworkVar<CDOTA_PlayerChallengeInfo,CIngameEvent_Base::NetworkVar_m_CompendiumChallengeInfo,24>::Resolve(this);
      this->m_PathToVector.m_nCount = 0;
    }
  }
}


// CUtlVectorEmbeddedNetworkVar<CDOTA_CombatLogQueryProgress, CIngameEvent_Base::NetworkVar_m_PlayerQueryIDs, -1>::Resolve  (line 1720, @0x00000000025d5ac0, libserver.so)  // inlines: Clear, Get, GetPathData, IsUsingFixedPaths, LeafCodeInfo_t, Path_RemoveAll, Path_SetCount, V_memcpy, memcpy, operator CEntityInstance*, operator=
// calls: GetNetworkSerializerForEntityInstance, memcpy, CUtlVectorEmbeddedNetworkVar<CDOTA_CombatLogQueryProgress, CIngameEvent_Base::NetworkVar_m_PlayerQueryIDs, -1>::Resolve, LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...)
// callers: CIngameEvent_Base::ClearPlayerCompendiumChallenge
// strings: "../../public/tier2/fieldpath.h", "Path_SetCount", "Path_SetCount failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)"
void __fastcall CUtlVectorEmbeddedNetworkVar<CDOTA_CombatLogQueryProgress,CIngameEvent_Base::NetworkVar_m_PlayerQueryIDs,-1>::Resolve(
        CUtlVectorEmbeddedNetworkVar<CDOTA_CombatLogQueryProgress,CIngameEvent_Base::NetworkVar_m_PlayerQueryIDs,-1> *const this)
{
  CEntityInstance *m_pObj; // r12
  void (__fastcall *v3)(void **, IFlattenedSerializers *, FlattenedSerializerHandle_t, CEntityInstance *, CUtlVectorEmbeddedNetworkVar<CDOTA_CombatLogQueryProgress,CIngameEvent_Base::NetworkVar_m_PlayerQueryIDs,-1> *const, bool *); // r14
  FlattenedSerializerHandle_t NetworkSerializerForEntityInstance; // rax
  __int64 v5; // rdx
  size_t v6; // rdx
  void **v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rsi
  void *src[2]; // [rsp+0h] [rbp-60h] BYREF
  __int16 v13; // [rsp+10h] [rbp-50h]
  char v14; // [rsp+12h] [rbp-4Eh]
  LeafCodeInfo_t v15; // [rsp+20h] [rbp-40h] BYREF

  if ( !this->m_bResolved )
  {
    m_pObj = this->m_pOwnerEntity.m_pObj;
    this->m_bResolved = 1;
    if ( m_pObj != 0 )
    {
      v3 = *(*g_pFlattenedSerializers + 272LL);
      NetworkSerializerForEntityInstance = GetNetworkSerializerForEntityInstance(m_pObj);
      v3(src, g_pFlattenedSerializers, NetworkSerializerForEntityInstance, m_pObj, this, &this->m_bIsNetworkVarExcluded);
      if ( &this->m_PathToVector != src )
      {
        v5 = v13;
        this->m_PathToVector.m_bUsingExternalPaths = 0;
        if ( v5 > 6 )
        {
          if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
            goto LABEL_17;
          while ( 1 )
          {
            if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v10, v11, v8, v9) != 0 )
              loc_0 = -559038737;
            Plat_ExitProcess(1);
LABEL_17:
            v15.m_szFile = "../../public/tier2/fieldpath.h";
            v15.m_szFunction = "Path_SetCount";
            v15.m_nLine = 442;
            LoggingSystem_Log(
              LOG_GENERAL,
              LoggingSeverity_t::LS_ERROR,
              &v15,
              "Path_SetCount failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)",
              6);
          }
        }
        this->m_PathToVector.m_nCount = v5;
        if ( v5 > 0 )
        {
          v6 = 2 * v5;
          v7 = src;
          if ( v14 != 0 )
            v7 = src[0];
          memcpy(&this->m_PathToVector, v7, v6);
        }
      }
    }
    else
    {
      if ( this->m_PathToVector.m_bUsingExternalPaths )
        CUtlVectorEmbeddedNetworkVar<CDOTA_CombatLogQueryProgress,CIngameEvent_Base::NetworkVar_m_PlayerQueryIDs,-1>::Resolve(this);
      this->m_PathToVector.m_nCount = 0;
    }
  }
}


// CUtlVectorEmbeddedNetworkVar<PlayerResourcePlayerTeamData_t, CDOTA_PlayerResource::NetworkVar_m_vecPlayerTeamData, -1>::Resolve  (line 1720, @0x0000000002655d70, libserver.so)  // inlines: Clear, LeafCodeInfo_t, Path_RemoveAll
// calls: LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...)
// callers: CUtlVectorEmbeddedNetworkVar<PlayerResourcePlayerTeamData_t, CDOTA_PlayerResource::NetworkVar_m_vecPlayerTeamData, -1>::Resolve, CDOTA_PlayerResource::FindOrCreatePlayerID
// strings: "../../public/tier2/fieldpath.h", "Path_RemoveAll", "Path_RemoveAll failed for read only CFieldPath"
void __fastcall __noreturn CUtlVectorEmbeddedNetworkVar<PlayerResourcePlayerTeamData_t,CDOTA_PlayerResource::NetworkVar_m_vecPlayerTeamData,-1>::Resolve(
        CUtlVectorEmbeddedNetworkVar<PlayerResourcePlayerTeamData_t,CDOTA_PlayerResource::NetworkVar_m_vecPlayerTeamData,-1> *const this)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // rdi
  __int64 v4; // rsi
  __int64 v5; // r8
  __int64 v6; // r9
  LeafCodeInfo_t v7; // [rsp+0h] [rbp-30h] BYREF

  if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
    goto LABEL_5;
  while ( 1 )
  {
    if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v3, v4, v1, v2) != 0 )
      loc_0 = -559038737;
    Plat_ExitProcess(1);
LABEL_5:
    v7.m_szFile = "../../public/tier2/fieldpath.h";
    v7.m_szFunction = "Path_RemoveAll";
    v7.m_nLine = 487;
    LoggingSystem_Log(
      LOG_GENERAL,
      LoggingSeverity_t::LS_ERROR,
      &v7,
      "Path_RemoveAll failed for read only CFieldPath",
      v5,
      v6);
  }
}


// CUtlVectorEmbeddedNetworkVar<PlayerResourcePlayerData_t, CDOTA_PlayerResource::NetworkVar_m_vecPlayerData, -1>::Resolve  (line 1720, @0x0000000002655df0, libserver.so)  // inlines: Clear, LeafCodeInfo_t, Path_RemoveAll
// calls: LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...)
// callers: CUtlVectorEmbeddedNetworkVar<PlayerResourcePlayerData_t, CDOTA_PlayerResource::NetworkVar_m_vecPlayerData, -1>::Resolve, CDOTA_PlayerResource::FindOrCreatePlayerID
// strings: "../../public/tier2/fieldpath.h", "Path_RemoveAll", "Path_RemoveAll failed for read only CFieldPath"
void __fastcall __noreturn CUtlVectorEmbeddedNetworkVar<PlayerResourcePlayerData_t,CDOTA_PlayerResource::NetworkVar_m_vecPlayerData,-1>::Resolve(
        CUtlVectorEmbeddedNetworkVar<PlayerResourcePlayerData_t,CDOTA_PlayerResource::NetworkVar_m_vecPlayerData,-1> *const this)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // rdi
  __int64 v4; // rsi
  __int64 v5; // r8
  __int64 v6; // r9
  LeafCodeInfo_t v7; // [rsp+0h] [rbp-30h] BYREF

  if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
    goto LABEL_5;
  while ( 1 )
  {
    if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v3, v4, v1, v2) != 0 )
      loc_0 = -559038737;
    Plat_ExitProcess(1);
LABEL_5:
    v7.m_szFile = "../../public/tier2/fieldpath.h";
    v7.m_szFunction = "Path_RemoveAll";
    v7.m_nLine = 487;
    LoggingSystem_Log(
      LOG_GENERAL,
      LoggingSeverity_t::LS_ERROR,
      &v7,
      "Path_RemoveAll failed for read only CFieldPath",
      v5,
      v6);
  }
}


// CUtlVectorEmbeddedNetworkVar<PlayerResourceBroadcasterData_t, CDOTA_PlayerResource::NetworkVar_m_vecBrodcasterData, -1>::Resolve  (line 1720, @0x0000000002655e70, libserver.so)  // inlines: Clear, LeafCodeInfo_t, Path_RemoveAll
// calls: LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...)
// callers: CUtlVectorEmbeddedNetworkVar<PlayerResourceBroadcasterData_t, CDOTA_PlayerResource::NetworkVar_m_vecBrodcasterData, -1>::Resolve, CDOTA_PlayerResource::SetBroadcasterChannelInfo
// strings: "../../public/tier2/fieldpath.h", "Path_RemoveAll", "Path_RemoveAll failed for read only CFieldPath"
void __fastcall __noreturn CUtlVectorEmbeddedNetworkVar<PlayerResourceBroadcasterData_t,CDOTA_PlayerResource::NetworkVar_m_vecBrodcasterData,-1>::Resolve(
        CUtlVectorEmbeddedNetworkVar<PlayerResourceBroadcasterData_t,CDOTA_PlayerResource::NetworkVar_m_vecBrodcasterData,-1> *const this)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // rdi
  __int64 v4; // rsi
  __int64 v5; // r8
  __int64 v6; // r9
  LeafCodeInfo_t v7; // [rsp+0h] [rbp-30h] BYREF

  if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
    goto LABEL_5;
  while ( 1 )
  {
    if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v3, v4, v1, v2) != 0 )
      loc_0 = -559038737;
    Plat_ExitProcess(1);
LABEL_5:
    v7.m_szFile = "../../public/tier2/fieldpath.h";
    v7.m_szFunction = "Path_RemoveAll";
    v7.m_nLine = 487;
    LoggingSystem_Log(
      LOG_GENERAL,
      LoggingSeverity_t::LS_ERROR,
      &v7,
      "Path_RemoveAll failed for read only CFieldPath",
      v5,
      v6);
  }
}


// CUtlVectorEmbeddedNetworkVar<PlayerResourcePlayerTeamData_t, CDOTA_PlayerResource::NetworkVar_m_vecPlayerTeamData, -1>::Resolve  (line 1720, @0x00000000026b3ef0, libserver.so)  // inlines: Clear, Get, GetPathData, IsUsingFixedPaths, LeafCodeInfo_t, Path_RemoveAll, Path_SetCount, V_memcpy, memcpy, operator CEntityInstance*, operator=
// calls: GetNetworkSerializerForEntityInstance, memcpy, CUtlVectorEmbeddedNetworkVar<PlayerResourcePlayerTeamData_t, CDOTA_PlayerResource::NetworkVar_m_vecPlayerTeamData, -1>::Resolve, LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...)
// callers: CDOTA_PlayerResource::Reset, CDOTA_PlayerResource::FindOrCreatePlayerID
// strings: "../../public/tier2/fieldpath.h", "Path_SetCount", "Path_SetCount failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)"
void __fastcall CUtlVectorEmbeddedNetworkVar<PlayerResourcePlayerTeamData_t,CDOTA_PlayerResource::NetworkVar_m_vecPlayerTeamData,-1>::Resolve(
        CUtlVectorEmbeddedNetworkVar<PlayerResourcePlayerTeamData_t,CDOTA_PlayerResource::NetworkVar_m_vecPlayerTeamData,-1> *const this)
{
  CEntityInstance *m_pObj; // r12
  void (__fastcall *v3)(void **, IFlattenedSerializers *, FlattenedSerializerHandle_t, CEntityInstance *, CUtlVectorEmbeddedNetworkVar<PlayerResourcePlayerTeamData_t,CDOTA_PlayerResource::NetworkVar_m_vecPlayerTeamData,-1> *const, bool *); // r14
  FlattenedSerializerHandle_t NetworkSerializerForEntityInstance; // rax
  __int64 v5; // rdx
  size_t v6; // rdx
  void **v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rsi
  void *src[2]; // [rsp+0h] [rbp-60h] BYREF
  __int16 v13; // [rsp+10h] [rbp-50h]
  char v14; // [rsp+12h] [rbp-4Eh]
  LeafCodeInfo_t v15; // [rsp+20h] [rbp-40h] BYREF

  if ( !this->m_bResolved )
  {
    m_pObj = this->m_pOwnerEntity.m_pObj;
    this->m_bResolved = 1;
    if ( m_pObj != 0 )
    {
      v3 = *(*g_pFlattenedSerializers + 272LL);
      NetworkSerializerForEntityInstance = GetNetworkSerializerForEntityInstance(m_pObj);
      v3(src, g_pFlattenedSerializers, NetworkSerializerForEntityInstance, m_pObj, this, &this->m_bIsNetworkVarExcluded);
      if ( &this->m_PathToVector != src )
      {
        v5 = v13;
        this->m_PathToVector.m_bUsingExternalPaths = 0;
        if ( v5 > 6 )
        {
          if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
            goto LABEL_17;
          while ( 1 )
          {
            if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v10, v11, v8, v9) != 0 )
              loc_0 = -559038737;
            Plat_ExitProcess(1);
LABEL_17:
            v15.m_szFile = "../../public/tier2/fieldpath.h";
            v15.m_szFunction = "Path_SetCount";
            v15.m_nLine = 442;
            LoggingSystem_Log(
              LOG_GENERAL,
              LoggingSeverity_t::LS_ERROR,
              &v15,
              "Path_SetCount failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)",
              6);
          }
        }
        this->m_PathToVector.m_nCount = v5;
        if ( v5 > 0 )
        {
          v6 = 2 * v5;
          v7 = src;
          if ( v14 != 0 )
            v7 = src[0];
          memcpy(&this->m_PathToVector, v7, v6);
        }
      }
    }
    else
    {
      if ( this->m_PathToVector.m_bUsingExternalPaths )
        CUtlVectorEmbeddedNetworkVar<PlayerResourcePlayerTeamData_t,CDOTA_PlayerResource::NetworkVar_m_vecPlayerTeamData,-1>::Resolve(this);
      this->m_PathToVector.m_nCount = 0;
    }
  }
}


// CUtlVectorEmbeddedNetworkVar<PlayerResourcePlayerData_t, CDOTA_PlayerResource::NetworkVar_m_vecPlayerData, -1>::Resolve  (line 1720, @0x00000000026b4160, libserver.so)  // inlines: Clear, Get, GetPathData, IsUsingFixedPaths, LeafCodeInfo_t, Path_RemoveAll, Path_SetCount, V_memcpy, memcpy, operator CEntityInstance*, operator=
// calls: GetNetworkSerializerForEntityInstance, memcpy, CUtlVectorEmbeddedNetworkVar<PlayerResourcePlayerData_t, CDOTA_PlayerResource::NetworkVar_m_vecPlayerData, -1>::Resolve, LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...)
// callers: CDOTA_PlayerResource::Reset, CDOTA_PlayerResource::FindOrCreatePlayerID
// strings: "../../public/tier2/fieldpath.h", "Path_SetCount", "Path_SetCount failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)"
void __fastcall CUtlVectorEmbeddedNetworkVar<PlayerResourcePlayerData_t,CDOTA_PlayerResource::NetworkVar_m_vecPlayerData,-1>::Resolve(
        CUtlVectorEmbeddedNetworkVar<PlayerResourcePlayerData_t,CDOTA_PlayerResource::NetworkVar_m_vecPlayerData,-1> *const this)
{
  CEntityInstance *m_pObj; // r12
  void (__fastcall *v3)(void **, IFlattenedSerializers *, FlattenedSerializerHandle_t, CEntityInstance *, CUtlVectorEmbeddedNetworkVar<PlayerResourcePlayerData_t,CDOTA_PlayerResource::NetworkVar_m_vecPlayerData,-1> *const, bool *); // r14
  FlattenedSerializerHandle_t NetworkSerializerForEntityInstance; // rax
  __int64 v5; // rdx
  size_t v6; // rdx
  void **v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rsi
  void *src[2]; // [rsp+0h] [rbp-60h] BYREF
  __int16 v13; // [rsp+10h] [rbp-50h]
  char v14; // [rsp+12h] [rbp-4Eh]
  LeafCodeInfo_t v15; // [rsp+20h] [rbp-40h] BYREF

  if ( !this->m_bResolved )
  {
    m_pObj = this->m_pOwnerEntity.m_pObj;
    this->m_bResolved = 1;
    if ( m_pObj != 0 )
    {
      v3 = *(*g_pFlattenedSerializers + 272LL);
      NetworkSerializerForEntityInstance = GetNetworkSerializerForEntityInstance(m_pObj);
      v3(src, g_pFlattenedSerializers, NetworkSerializerForEntityInstance, m_pObj, this, &this->m_bIsNetworkVarExcluded);
      if ( &this->m_PathToVector != src )
      {
        v5 = v13;
        this->m_PathToVector.m_bUsingExternalPaths = 0;
        if ( v5 > 6 )
        {
          if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
            goto LABEL_17;
          while ( 1 )
          {
            if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v10, v11, v8, v9) != 0 )
              loc_0 = -559038737;
            Plat_ExitProcess(1);
LABEL_17:
            v15.m_szFile = "../../public/tier2/fieldpath.h";
            v15.m_szFunction = "Path_SetCount";
            v15.m_nLine = 442;
            LoggingSystem_Log(
              LOG_GENERAL,
              LoggingSeverity_t::LS_ERROR,
              &v15,
              "Path_SetCount failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)",
              6);
          }
        }
        this->m_PathToVector.m_nCount = v5;
        if ( v5 > 0 )
        {
          v6 = 2 * v5;
          v7 = src;
          if ( v14 != 0 )
            v7 = src[0];
          memcpy(&this->m_PathToVector, v7, v6);
        }
      }
    }
    else
    {
      if ( this->m_PathToVector.m_bUsingExternalPaths )
        CUtlVectorEmbeddedNetworkVar<PlayerResourcePlayerData_t,CDOTA_PlayerResource::NetworkVar_m_vecPlayerData,-1>::Resolve(this);
      this->m_PathToVector.m_nCount = 0;
    }
  }
}


// CUtlVectorEmbeddedNetworkVar<PlayerResourceBroadcasterData_t, CDOTA_PlayerResource::NetworkVar_m_vecBrodcasterData, -1>::Resolve  (line 1720, @0x00000000026b43c0, libserver.so)  // inlines: Clear, Get, GetPathData, IsUsingFixedPaths, LeafCodeInfo_t, Path_RemoveAll, Path_SetCount, V_memcpy, memcpy, operator CEntityInstance*, operator=
// calls: GetNetworkSerializerForEntityInstance, memcpy, CUtlVectorEmbeddedNetworkVar<PlayerResourceBroadcasterData_t, CDOTA_PlayerResource::NetworkVar_m_vecBrodcasterData, -1>::Resolve, LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...)
// callers: CDOTA_PlayerResource::Reset
// strings: "../../public/tier2/fieldpath.h", "Path_SetCount", "Path_SetCount failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)"
void __fastcall CUtlVectorEmbeddedNetworkVar<PlayerResourceBroadcasterData_t,CDOTA_PlayerResource::NetworkVar_m_vecBrodcasterData,-1>::Resolve(
        CUtlVectorEmbeddedNetworkVar<PlayerResourceBroadcasterData_t,CDOTA_PlayerResource::NetworkVar_m_vecBrodcasterData,-1> *const this)
{
  CEntityInstance *m_pObj; // r12
  void (__fastcall *v3)(void **, IFlattenedSerializers *, FlattenedSerializerHandle_t, CEntityInstance *, CUtlVectorEmbeddedNetworkVar<PlayerResourceBroadcasterData_t,CDOTA_PlayerResource::NetworkVar_m_vecBrodcasterData,-1> *const, bool *); // r14
  FlattenedSerializerHandle_t NetworkSerializerForEntityInstance; // rax
  __int64 v5; // rdx
  size_t v6; // rdx
  void **v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rsi
  void *src[2]; // [rsp+0h] [rbp-60h] BYREF
  __int16 v13; // [rsp+10h] [rbp-50h]
  char v14; // [rsp+12h] [rbp-4Eh]
  LeafCodeInfo_t v15; // [rsp+20h] [rbp-40h] BYREF

  if ( !this->m_bResolved )
  {
    m_pObj = this->m_pOwnerEntity.m_pObj;
    this->m_bResolved = 1;
    if ( m_pObj != 0 )
    {
      v3 = *(*g_pFlattenedSerializers + 272LL);
      NetworkSerializerForEntityInstance = GetNetworkSerializerForEntityInstance(m_pObj);
      v3(src, g_pFlattenedSerializers, NetworkSerializerForEntityInstance, m_pObj, this, &this->m_bIsNetworkVarExcluded);
      if ( &this->m_PathToVector != src )
      {
        v5 = v13;
        this->m_PathToVector.m_bUsingExternalPaths = 0;
        if ( v5 > 6 )
        {
          if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
            goto LABEL_17;
          while ( 1 )
          {
            if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v10, v11, v8, v9) != 0 )
              loc_0 = -559038737;
            Plat_ExitProcess(1);
LABEL_17:
            v15.m_szFile = "../../public/tier2/fieldpath.h";
            v15.m_szFunction = "Path_SetCount";
            v15.m_nLine = 442;
            LoggingSystem_Log(
              LOG_GENERAL,
              LoggingSeverity_t::LS_ERROR,
              &v15,
              "Path_SetCount failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)",
              6);
          }
        }
        this->m_PathToVector.m_nCount = v5;
        if ( v5 > 0 )
        {
          v6 = 2 * v5;
          v7 = src;
          if ( v14 != 0 )
            v7 = src[0];
          memcpy(&this->m_PathToVector, v7, v6);
        }
      }
    }
    else
    {
      if ( this->m_PathToVector.m_bUsingExternalPaths )
        CUtlVectorEmbeddedNetworkVar<PlayerResourceBroadcasterData_t,CDOTA_PlayerResource::NetworkVar_m_vecBrodcasterData,-1>::Resolve(this);
      this->m_PathToVector.m_nCount = 0;
    }
  }
}


// CUtlVectorEmbeddedNetworkVar<CSpeechBubbleInfo, CSpeechBubbleManager::NetworkVar_m_SpeechBubbles, 4>::Resolve  (line 1720, @0x00000000026ca110, libserver.so)  // inlines: Clear, LeafCodeInfo_t, Path_RemoveAll
// calls: LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...)
// callers: CSpeechBubbleManager::CEntityInstanceEntityClass::ConstructInstance
// strings: "../../public/tier2/fieldpath.h", "Path_RemoveAll", "Path_RemoveAll failed for read only CFieldPath"
void __fastcall __noreturn CUtlVectorEmbeddedNetworkVar<CSpeechBubbleInfo,CSpeechBubbleManager::NetworkVar_m_SpeechBubbles,4>::Resolve(
        CUtlVectorEmbeddedNetworkVar<CSpeechBubbleInfo,CSpeechBubbleManager::NetworkVar_m_SpeechBubbles,4> *const this)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // rdi
  __int64 v4; // rsi
  __int64 v5; // r8
  __int64 v6; // r9
  LeafCodeInfo_t v7; // [rsp+0h] [rbp-30h] BYREF

  if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
    goto LABEL_5;
  while ( 1 )
  {
    if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v3, v4, v1, v2) != 0 )
      loc_0 = -559038737;
    Plat_ExitProcess(1);
LABEL_5:
    v7.m_szFile = "../../public/tier2/fieldpath.h";
    v7.m_szFunction = "Path_RemoveAll";
    v7.m_nLine = 487;
    LoggingSystem_Log(
      LOG_GENERAL,
      LoggingSeverity_t::LS_ERROR,
      &v7,
      "Path_RemoveAll failed for read only CFieldPath",
      v5,
      v6);
  }
}


// CUtlVectorEmbeddedNetworkVar<CSpeechBubbleInfo, CDotaTutorialNetworker::NetworkVar_m_SpeechBubbles, 4>::Resolve  (line 1720, @0x00000000026ca190, libserver.so)  // inlines: Clear, LeafCodeInfo_t, Path_RemoveAll
// calls: LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...)
// callers: CDotaTutorialNetworker::CEntityInstanceEntityClass::ConstructInstance
// strings: "../../public/tier2/fieldpath.h", "Path_RemoveAll", "Path_RemoveAll failed for read only CFieldPath"
void __fastcall __noreturn CUtlVectorEmbeddedNetworkVar<CSpeechBubbleInfo,CDotaTutorialNetworker::NetworkVar_m_SpeechBubbles,4>::Resolve(
        CUtlVectorEmbeddedNetworkVar<CSpeechBubbleInfo,CDotaTutorialNetworker::NetworkVar_m_SpeechBubbles,4> *const this)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // rdi
  __int64 v4; // rsi
  __int64 v5; // r8
  __int64 v6; // r9
  LeafCodeInfo_t v7; // [rsp+0h] [rbp-30h] BYREF

  if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
    goto LABEL_5;
  while ( 1 )
  {
    if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v3, v4, v1, v2) != 0 )
      loc_0 = -559038737;
    Plat_ExitProcess(1);
LABEL_5:
    v7.m_szFile = "../../public/tier2/fieldpath.h";
    v7.m_szFunction = "Path_RemoveAll";
    v7.m_nLine = 487;
    LoggingSystem_Log(
      LOG_GENERAL,
      LoggingSeverity_t::LS_ERROR,
      &v7,
      "Path_RemoveAll failed for read only CFieldPath",
      v5,
      v6);
  }
}


// CUtlVectorEmbeddedNetworkVar<CEconItemAttribute, CAttributeList::NetworkVar_m_Attributes, -1>::Resolve  (line 1720, @0x0000000002e6b8c0, libserver.so)  // inlines: Clear, LeafCodeInfo_t, Path_RemoveAll
// calls: LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...)
// callers: CAttributeList::Init, CAttributeList::DestroyAllAttributes, CAttributeList::RemoveAttributeByIndex, CAttributeList::SetRuntimeAttributeValue, CAttributeList::RemoveAttribute, CEconItemView::InitInternal
// strings: "../../public/tier2/fieldpath.h", "Path_RemoveAll", "Path_RemoveAll failed for read only CFieldPath"
void __fastcall __noreturn CUtlVectorEmbeddedNetworkVar<CEconItemAttribute,CAttributeList::NetworkVar_m_Attributes,-1>::Resolve(
        CUtlVectorEmbeddedNetworkVar<CEconItemAttribute,CAttributeList::NetworkVar_m_Attributes,-1> *const this)
{
  __int64 v1; // r8
  __int64 v2; // r9
  LeafCodeInfo_t v3; // [rsp+0h] [rbp-30h] BYREF

  if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
    goto LABEL_5;
  while ( 1 )
  {
    if ( Plat_ShouldCollectMiniDumpsForFatalErrors() != 0 )
      loc_0 = -559038737;
    Plat_ExitProcess(1);
LABEL_5:
    v3.m_szFile = "../../public/tier2/fieldpath.h";
    v3.m_szFunction = "Path_RemoveAll";
    v3.m_nLine = 487;
    LoggingSystem_Log(
      LOG_GENERAL,
      LoggingSeverity_t::LS_ERROR,
      &v3,
      "Path_RemoveAll failed for read only CFieldPath",
      v1,
      v2);
  }
}


// CUtlVectorEmbeddedNetworkVar<CHeroesPerPlayer, CDOTAGamerules::NetworkVar_m_vecLockedHerosByPlayerID, -1>::OnChainPropagationChange  (line 1756, @0x0000000002562110, libserver.so)  // inlines: AssignPathIdToElement, CFieldPath, Clear, Element, Get, GetPathData, IsUsingFixedPaths, LeafCodeInfo_t, Path_AddToTail, Path_RemoveAll, Path_SetCount, Push, ReassignPathIds, Resolve, Set, V_memcpy, memcpy, operator CEntityInstance*, operator=, operator[]
// calls: GetNetworkSerializerForEntityInstance, memcpy, __memcpy_chk, LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, EntityInstanceAddChangeAccessorPath, CUtlVectorEmbeddedNetworkVar<CHeroesPerPlayer, CDOTAGamerules::NetworkVar_m_vecLockedHerosByPlayerID, -1>::Resolve, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...)
// strings: "../../public/tier2/fieldpath.h", "Path_SetCount", "Path_SetCount failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)", "Path_AddToTail", "Path_AddToTail failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)", "Path_AddToTail failed for read only CFieldPath"
void __fastcall CUtlVectorEmbeddedNetworkVar<CHeroesPerPlayer,CDOTAGamerules::NetworkVar_m_vecLockedHerosByPlayerID,-1>::OnChainPropagationChange(
        CUtlVectorEmbeddedNetworkVar<CHeroesPerPlayer,CDOTAGamerules::NetworkVar_m_vecLockedHerosByPlayerID,-1> *const this,
        const CNetworkVarChainer *const chainer)
{
  int v2; // r15d
  CUtlVectorEmbeddedNetworkVar<CHeroesPerPlayer,CDOTAGamerules::NetworkVar_m_vecLockedHerosByPlayerID,-1> *v3; // rbx
  CEntityInstance *m_pObj; // r12
  LeafCodeInfo_t *v5; // r14
  FlattenedSerializerHandle_t NetworkSerializerForEntityInstance; // rax
  const CFieldPath *p_path; // r13
  __int64 v8; // rax
  void **v9; // rsi
  CEntityInstance *v10; // rcx
  FlattenedSerializerHandle_t v11; // rax
  __int64 m_szFunction_low; // rdx
  size_t v13; // rdx
  const char *m_szFile; // rsi
  __int64 v15; // rdx
  __int64 v16; // rdx
  const CFieldPath::Path_t *m_pPaths; // rsi
  int16 v18; // cx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdi
  __int64 v22; // rsi
  __int64 m_nCount; // rax
  ChangeAccessorFieldPathIndex_t *v24; // rdx
  ChangeAccessorFieldPathIndex_t v25; // ax
  CEntityInstance *v26; // rax
  const LeafCodeInfo_t *v27; // rdx
  bool *p_m_bIsNetworkVarExcluded; // [rsp+8h] [rbp-B8h]
  void (__fastcall *v29)(LeafCodeInfo_t *, IFlattenedSerializers *, FlattenedSerializerHandle_t, CEntityInstance *, CUtlVectorEmbeddedNetworkVar<CHeroesPerPlayer,CDOTAGamerules::NetworkVar_m_vecLockedHerosByPlayerID,-1> *, bool *); // [rsp+18h] [rbp-A8h]
  CEntityInstance *v30; // [rsp+20h] [rbp-A0h]
  ChangeAccessorFieldPathIndex_t *v31; // [rsp+20h] [rbp-A0h]
  LeafCodeInfo_t *dest; // [rsp+28h] [rbp-98h]
  void *src[2]; // [rsp+30h] [rbp-90h] BYREF
  __int16 v34; // [rsp+40h] [rbp-80h]
  char v35; // [rsp+42h] [rbp-7Eh]
  CFieldPath path; // [rsp+50h] [rbp-70h] BYREF
  LeafCodeInfo_t v37; // [rsp+70h] [rbp-50h] BYREF

  v3 = this;
  m_pObj = chainer->m_pObj;
  if ( chainer->m_pObj != this->m_pOwnerEntity.m_pObj )
    this->m_pOwnerEntity.m_pObj = m_pObj;
  this->m_bResolved = 1;
  if ( m_pObj == 0 )
  {
    if ( this->m_PathToVector.m_bUsingExternalPaths )
LABEL_44:
      CUtlVectorEmbeddedNetworkVar<CHeroesPerPlayer,CDOTAGamerules::NetworkVar_m_vecLockedHerosByPlayerID,-1>::Resolve(this);
    this->m_PathToVector.m_nCount = 0;
    goto LABEL_10;
  }
  v5 = *(*g_pFlattenedSerializers + 272LL);
  NetworkSerializerForEntityInstance = GetNetworkSerializerForEntityInstance(m_pObj);
  p_path = src;
  (v5)(src, g_pFlattenedSerializers, NetworkSerializerForEntityInstance, m_pObj, v3, &v3->m_bIsNetworkVarExcluded);
  this = &v3->m_PathToVector;
  if ( &v3->m_PathToVector == src )
  {
LABEL_10:
    if ( !v3->m_bIsNetworkVarExcluded && v3->m_Vector.m_Size > 0 )
    {
      m_pObj = 0;
      v2 = 0;
      p_m_bIsNetworkVarExcluded = &v3->m_bIsNetworkVarExcluded;
      v5 = &v37;
      dest = &v3->m_PathToVector;
      p_path = &path;
      goto LABEL_13;
    }
    return;
  }
  v8 = v34;
  v3->m_PathToVector.m_bUsingExternalPaths = 0;
  if ( v8 <= 6 )
  {
    v3->m_PathToVector.m_nCount = v8;
    if ( v8 > 0 )
    {
      v9 = src;
      if ( v35 != 0 )
        v9 = src[0];
      memcpy(this, v9, 2 * v8);
    }
    goto LABEL_10;
  }
LABEL_47:
  v3 = &LOG_GENERAL;
  if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
  {
    v37.m_nLine = 442;
    v37.m_szFile = "../../public/tier2/fieldpath.h";
    v37.m_szFunction = "Path_SetCount";
    v27 = &v37;
LABEL_49:
    LoggingSystem_Log(
      LOG_GENERAL,
      LoggingSeverity_t::LS_ERROR,
      v27,
      "Path_SetCount failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)",
      6);
  }
  while ( 1 )
  {
LABEL_29:
    if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v21, v22, v19, v20) != 0 )
      loc_0 = -559038737;
    Plat_ExitProcess(1);
LABEL_32:
    v18 = v2;
LABEL_33:
    m_nCount = path.m_nCount;
    if ( path.m_nCount <= 5 )
      break;
    v3 = &LOG_GENERAL;
    if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
    {
      v37.m_szFile = "../../public/tier2/fieldpath.h";
      v37.m_szFunction = "Path_AddToTail";
      v37.m_nLine = 425;
      LoggingSystem_Log(
        LOG_GENERAL,
        LoggingSeverity_t::LS_ERROR,
        &v37,
        "Path_AddToTail failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)",
        6);
    }
  }
  this = v3->m_pOwnerEntity.m_pObj;
  ++path.m_nCount;
  v24 = (v3->m_Vector.m_Memory.m_pMemory + m_pObj);
  p_path->u.m_FixedPaths[m_nCount].m_nValue = v18;
  if ( this != 0 )
  {
    v31 = v24;
    v25.m_Value = EntityInstanceAddChangeAccessorPath(this, p_path).m_Value;
    v24 = v31;
    v31[8].m_Value = v25.m_Value;
  }
  else
  {
    v24[8].m_Value = -1;
  }
  v26 = v3->m_pOwnerEntity.m_pObj;
  if ( v26 != *&v24[4].m_Value )
    *&v24[4].m_Value = v26;
  while ( 1 )
  {
    ++v2;
    ++m_pObj;
    if ( v2 >= v3->m_Vector.m_Size )
      break;
LABEL_13:
    if ( !v3->m_bResolved )
    {
      v10 = v3->m_pOwnerEntity.m_pObj;
      v3->m_bResolved = 1;
      if ( v10 != 0 )
      {
        v30 = v10;
        v29 = *(*g_pFlattenedSerializers + 272LL);
        v11 = GetNetworkSerializerForEntityInstance(v10);
        v29(v5, g_pFlattenedSerializers, v11, v30, v3, p_m_bIsNetworkVarExcluded);
        if ( dest != v5 )
        {
          m_szFunction_low = SLOWORD(v37.m_szFunction);
          v3->m_PathToVector.m_bUsingExternalPaths = 0;
          if ( m_szFunction_low > 6 )
          {
            v3 = &LOG_GENERAL;
            if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) == 0 )
              goto LABEL_29;
            *&path.u.m_FixedPaths[4].m_nValue = 442;
            path.u.m_pPaths = "../../public/tier2/fieldpath.h";
            *&path.m_nCount = "Path_SetCount";
            v27 = &path;
            goto LABEL_49;
          }
          v3->m_PathToVector.m_nCount = m_szFunction_low;
          if ( m_szFunction_low > 0 )
          {
            v13 = 2 * m_szFunction_low;
            m_szFile = v5;
            if ( BYTE2(v37.m_szFunction) != 0 )
              m_szFile = v37.m_szFile;
            memcpy(dest, m_szFile, v13);
          }
        }
      }
      else
      {
        if ( v3->m_PathToVector.m_bUsingExternalPaths )
          goto LABEL_44;
        v3->m_PathToVector.m_nCount = 0;
      }
    }
    if ( !v3->m_bIsNetworkVarExcluded )
    {
      v15 = v3->m_PathToVector.m_nCount;
      path.m_bUsingExternalPaths = 0;
      path.m_nCount = 0;
      if ( v15 > 6 )
        goto LABEL_47;
      path.m_nCount = v15;
      if ( v15 <= 0 )
        goto LABEL_32;
      v16 = 2 * v15;
      if ( v3->m_PathToVector.m_bUsingExternalPaths )
        m_pPaths = v3->m_PathToVector.u.m_pPaths;
      else
        m_pPaths = dest;
      __memcpy_chk(p_path, m_pPaths, v16, 24);
      v18 = v2;
      if ( !path.m_bUsingExternalPaths )
        goto LABEL_33;
      v3 = &LOG_GENERAL;
      if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
      {
        v37.m_szFile = "../../public/tier2/fieldpath.h";
        v37.m_szFunction = "Path_AddToTail";
        v37.m_nLine = 428;
        LoggingSystem_Log(
          LOG_GENERAL,
          LoggingSeverity_t::LS_ERROR,
          &v37,
          "Path_AddToTail failed for read only CFieldPath");
      }
      goto LABEL_29;
    }
  }
}


// CUtlVectorEmbeddedNetworkVar<CHeroesPerPlayer, CDOTAGamerules::NetworkVar_m_vecAvailableHerosPerPlayerID, -1>::OnChainPropagationChange  (line 1756, @0x0000000002562550, libserver.so)  // inlines: AssignPathIdToElement, CFieldPath, Clear, Element, Get, GetPathData, IsUsingFixedPaths, LeafCodeInfo_t, Path_AddToTail, Path_RemoveAll, Path_SetCount, Push, ReassignPathIds, Resolve, Set, V_memcpy, memcpy, operator CEntityInstance*, operator=, operator[]
// calls: GetNetworkSerializerForEntityInstance, memcpy, __memcpy_chk, LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, EntityInstanceAddChangeAccessorPath, CUtlVectorEmbeddedNetworkVar<CHeroesPerPlayer, CDOTAGamerules::NetworkVar_m_vecAvailableHerosPerPlayerID, -1>::Resolve, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...)
// strings: "../../public/tier2/fieldpath.h", "Path_SetCount", "Path_SetCount failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)", "Path_AddToTail", "Path_AddToTail failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)", "Path_AddToTail failed for read only CFieldPath"
void __fastcall CUtlVectorEmbeddedNetworkVar<CHeroesPerPlayer,CDOTAGamerules::NetworkVar_m_vecAvailableHerosPerPlayerID,-1>::OnChainPropagationChange(
        CUtlVectorEmbeddedNetworkVar<CHeroesPerPlayer,CDOTAGamerules::NetworkVar_m_vecAvailableHerosPerPlayerID,-1> *const this,
        const CNetworkVarChainer *const chainer)
{
  int v2; // r15d
  CUtlVectorEmbeddedNetworkVar<CHeroesPerPlayer,CDOTAGamerules::NetworkVar_m_vecAvailableHerosPerPlayerID,-1> *v3; // rbx
  CEntityInstance *m_pObj; // r12
  LeafCodeInfo_t *v5; // r14
  FlattenedSerializerHandle_t NetworkSerializerForEntityInstance; // rax
  const CFieldPath *p_path; // r13
  __int64 v8; // rax
  void **v9; // rsi
  CEntityInstance *v10; // rcx
  FlattenedSerializerHandle_t v11; // rax
  __int64 m_szFunction_low; // rdx
  size_t v13; // rdx
  const char *m_szFile; // rsi
  __int64 v15; // rdx
  __int64 v16; // rdx
  const CFieldPath::Path_t *m_pPaths; // rsi
  int16 v18; // cx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdi
  __int64 v22; // rsi
  __int64 m_nCount; // rax
  ChangeAccessorFieldPathIndex_t *v24; // rdx
  ChangeAccessorFieldPathIndex_t v25; // ax
  CEntityInstance *v26; // rax
  const LeafCodeInfo_t *v27; // rdx
  bool *p_m_bIsNetworkVarExcluded; // [rsp+8h] [rbp-B8h]
  void (__fastcall *v29)(LeafCodeInfo_t *, IFlattenedSerializers *, FlattenedSerializerHandle_t, CEntityInstance *, CUtlVectorEmbeddedNetworkVar<CHeroesPerPlayer,CDOTAGamerules::NetworkVar_m_vecAvailableHerosPerPlayerID,-1> *, bool *); // [rsp+18h] [rbp-A8h]
  CEntityInstance *v30; // [rsp+20h] [rbp-A0h]
  ChangeAccessorFieldPathIndex_t *v31; // [rsp+20h] [rbp-A0h]
  LeafCodeInfo_t *dest; // [rsp+28h] [rbp-98h]
  void *src[2]; // [rsp+30h] [rbp-90h] BYREF
  __int16 v34; // [rsp+40h] [rbp-80h]
  char v35; // [rsp+42h] [rbp-7Eh]
  CFieldPath path; // [rsp+50h] [rbp-70h] BYREF
  LeafCodeInfo_t v37; // [rsp+70h] [rbp-50h] BYREF

  v3 = this;
  m_pObj = chainer->m_pObj;
  if ( chainer->m_pObj != this->m_pOwnerEntity.m_pObj )
    this->m_pOwnerEntity.m_pObj = m_pObj;
  this->m_bResolved = 1;
  if ( m_pObj == 0 )
  {
    if ( this->m_PathToVector.m_bUsingExternalPaths )
LABEL_44:
      CUtlVectorEmbeddedNetworkVar<CHeroesPerPlayer,CDOTAGamerules::NetworkVar_m_vecAvailableHerosPerPlayerID,-1>::Resolve(this);
    this->m_PathToVector.m_nCount = 0;
    goto LABEL_10;
  }
  v5 = *(*g_pFlattenedSerializers + 272LL);
  NetworkSerializerForEntityInstance = GetNetworkSerializerForEntityInstance(m_pObj);
  p_path = src;
  (v5)(src, g_pFlattenedSerializers, NetworkSerializerForEntityInstance, m_pObj, v3, &v3->m_bIsNetworkVarExcluded);
  if ( &v3->m_PathToVector == src )
  {
LABEL_10:
    if ( !v3->m_bIsNetworkVarExcluded )
    {
      this = v3->m_Vector.m_Size;
      if ( this > 0 )
      {
        m_pObj = 0;
        v2 = 0;
        p_m_bIsNetworkVarExcluded = &v3->m_bIsNetworkVarExcluded;
        v5 = &v37;
        dest = &v3->m_PathToVector;
        p_path = &path;
        goto LABEL_13;
      }
    }
    return;
  }
  v8 = v34;
  v3->m_PathToVector.m_bUsingExternalPaths = 0;
  if ( v8 <= 6 )
  {
    v3->m_PathToVector.m_nCount = v8;
    if ( v8 > 0 )
    {
      v9 = src;
      if ( v35 != 0 )
        v9 = src[0];
      memcpy(&v3->m_PathToVector, v9, 2 * v8);
    }
    goto LABEL_10;
  }
LABEL_47:
  v3 = &LOG_GENERAL;
  if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
  {
    v37.m_nLine = 442;
    v37.m_szFile = "../../public/tier2/fieldpath.h";
    v37.m_szFunction = "Path_SetCount";
    v27 = &v37;
LABEL_49:
    LoggingSystem_Log(
      LOG_GENERAL,
      LoggingSeverity_t::LS_ERROR,
      v27,
      "Path_SetCount failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)",
      6);
  }
  while ( 1 )
  {
LABEL_29:
    if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v21, v22, v19, v20) != 0 )
      loc_0 = -559038737;
    Plat_ExitProcess(1);
LABEL_32:
    v18 = v2;
LABEL_33:
    m_nCount = path.m_nCount;
    if ( path.m_nCount <= 5 )
      break;
    v3 = &LOG_GENERAL;
    if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
    {
      v37.m_szFile = "../../public/tier2/fieldpath.h";
      v37.m_szFunction = "Path_AddToTail";
      v37.m_nLine = 425;
      LoggingSystem_Log(
        LOG_GENERAL,
        LoggingSeverity_t::LS_ERROR,
        &v37,
        "Path_AddToTail failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)",
        6);
    }
  }
  this = v3->m_pOwnerEntity.m_pObj;
  ++path.m_nCount;
  v24 = (v3->m_Vector.m_Memory.m_pMemory + m_pObj);
  p_path->u.m_FixedPaths[m_nCount].m_nValue = v18;
  if ( this != 0 )
  {
    v31 = v24;
    v25.m_Value = EntityInstanceAddChangeAccessorPath(this, p_path).m_Value;
    v24 = v31;
    v31[8].m_Value = v25.m_Value;
  }
  else
  {
    v24[8].m_Value = -1;
  }
  v26 = v3->m_pOwnerEntity.m_pObj;
  if ( v26 != *&v24[4].m_Value )
    *&v24[4].m_Value = v26;
  while ( 1 )
  {
    ++v2;
    ++m_pObj;
    if ( v2 >= v3->m_Vector.m_Size )
      break;
LABEL_13:
    if ( !v3->m_bResolved )
    {
      v10 = v3->m_pOwnerEntity.m_pObj;
      v3->m_bResolved = 1;
      if ( v10 != 0 )
      {
        v30 = v10;
        v29 = *(*g_pFlattenedSerializers + 272LL);
        v11 = GetNetworkSerializerForEntityInstance(v10);
        v29(v5, g_pFlattenedSerializers, v11, v30, v3, p_m_bIsNetworkVarExcluded);
        if ( dest != v5 )
        {
          m_szFunction_low = SLOWORD(v37.m_szFunction);
          v3->m_PathToVector.m_bUsingExternalPaths = 0;
          if ( m_szFunction_low > 6 )
          {
            v3 = &LOG_GENERAL;
            if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) == 0 )
              goto LABEL_29;
            *&path.u.m_FixedPaths[4].m_nValue = 442;
            path.u.m_pPaths = "../../public/tier2/fieldpath.h";
            *&path.m_nCount = "Path_SetCount";
            v27 = &path;
            goto LABEL_49;
          }
          v3->m_PathToVector.m_nCount = m_szFunction_low;
          if ( m_szFunction_low > 0 )
          {
            v13 = 2 * m_szFunction_low;
            m_szFile = v5;
            if ( BYTE2(v37.m_szFunction) != 0 )
              m_szFile = v37.m_szFile;
            memcpy(dest, m_szFile, v13);
          }
        }
      }
      else
      {
        if ( v3->m_PathToVector.m_bUsingExternalPaths )
          goto LABEL_44;
        v3->m_PathToVector.m_nCount = 0;
      }
    }
    if ( !v3->m_bIsNetworkVarExcluded )
    {
      v15 = v3->m_PathToVector.m_nCount;
      path.m_bUsingExternalPaths = 0;
      path.m_nCount = 0;
      if ( v15 > 6 )
        goto LABEL_47;
      path.m_nCount = v15;
      if ( v15 <= 0 )
        goto LABEL_32;
      v16 = 2 * v15;
      if ( v3->m_PathToVector.m_bUsingExternalPaths )
        m_pPaths = v3->m_PathToVector.u.m_pPaths;
      else
        m_pPaths = dest;
      __memcpy_chk(p_path, m_pPaths, v16, 24);
      v18 = v2;
      if ( !path.m_bUsingExternalPaths )
        goto LABEL_33;
      v3 = &LOG_GENERAL;
      if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
      {
        v37.m_szFile = "../../public/tier2/fieldpath.h";
        v37.m_szFunction = "Path_AddToTail";
        v37.m_nLine = 428;
        LoggingSystem_Log(
          LOG_GENERAL,
          LoggingSeverity_t::LS_ERROR,
          &v37,
          "Path_AddToTail failed for read only CFieldPath");
      }
      goto LABEL_29;
    }
  }
}


// CUtlVectorEmbeddedNetworkVar<CDOTA_AbilityDraftAbilityState, CDOTAGamerules::NetworkVar_m_AbilityDraftAbilities, -1>::OnChainPropagationChange  (line 1756, @0x0000000002562990, libserver.so)  // inlines: AssignPathIdToElement, CFieldPath, Clear, Element, Get, GetPathData, IsUsingFixedPaths, LeafCodeInfo_t, Path_AddToTail, Path_RemoveAll, Path_SetCount, Push, ReassignPathIds, Resolve, Set, V_memcpy, memcpy, operator CEntityInstance*, operator=, operator[]
// calls: GetNetworkSerializerForEntityInstance, memcpy, __memcpy_chk, LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, EntityInstanceAddChangeAccessorPath, CUtlVectorEmbeddedNetworkVar<CDOTA_AbilityDraftAbilityState, CDOTAGamerules::NetworkVar_m_AbilityDraftAbilities, -1>::Resolve, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...)
// strings: "../../public/tier2/fieldpath.h", "Path_SetCount", "Path_SetCount failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)", "Path_AddToTail", "Path_AddToTail failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)", "Path_AddToTail failed for read only CFieldPath"
void __fastcall CUtlVectorEmbeddedNetworkVar<CDOTA_AbilityDraftAbilityState,CDOTAGamerules::NetworkVar_m_AbilityDraftAbilities,-1>::OnChainPropagationChange(
        CUtlVectorEmbeddedNetworkVar<CDOTA_AbilityDraftAbilityState,CDOTAGamerules::NetworkVar_m_AbilityDraftAbilities,-1> *const this,
        const CNetworkVarChainer *const chainer)
{
  int v2; // r15d
  CUtlVectorEmbeddedNetworkVar<CDOTA_AbilityDraftAbilityState,CDOTAGamerules::NetworkVar_m_AbilityDraftAbilities,-1> *v3; // rbx
  CEntityInstance *m_pObj; // r12
  LeafCodeInfo_t *v5; // r14
  FlattenedSerializerHandle_t NetworkSerializerForEntityInstance; // rax
  const CFieldPath *p_path; // r13
  __int64 v8; // rax
  void **v9; // rsi
  CEntityInstance *v10; // rcx
  FlattenedSerializerHandle_t v11; // rax
  __int64 m_szFunction_low; // rdx
  size_t v13; // rdx
  const char *m_szFile; // rsi
  __int64 v15; // rdx
  __int64 v16; // rdx
  const CFieldPath::Path_t *m_pPaths; // rsi
  int16 v18; // cx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdi
  __int64 v22; // rsi
  __int64 m_nCount; // rax
  ChangeAccessorFieldPathIndex_t *v24; // rdx
  ChangeAccessorFieldPathIndex_t v25; // ax
  CEntityInstance *v26; // rax
  const LeafCodeInfo_t *v27; // rdx
  bool *p_m_bIsNetworkVarExcluded; // [rsp+8h] [rbp-B8h]
  void (__fastcall *v29)(LeafCodeInfo_t *, IFlattenedSerializers *, FlattenedSerializerHandle_t, CEntityInstance *, CUtlVectorEmbeddedNetworkVar<CDOTA_AbilityDraftAbilityState,CDOTAGamerules::NetworkVar_m_AbilityDraftAbilities,-1> *, bool *); // [rsp+18h] [rbp-A8h]
  CEntityInstance *v30; // [rsp+20h] [rbp-A0h]
  ChangeAccessorFieldPathIndex_t *v31; // [rsp+20h] [rbp-A0h]
  LeafCodeInfo_t *dest; // [rsp+28h] [rbp-98h]
  void *src[2]; // [rsp+30h] [rbp-90h] BYREF
  __int16 v34; // [rsp+40h] [rbp-80h]
  char v35; // [rsp+42h] [rbp-7Eh]
  CFieldPath path; // [rsp+50h] [rbp-70h] BYREF
  LeafCodeInfo_t v37; // [rsp+70h] [rbp-50h] BYREF

  v3 = this;
  m_pObj = chainer->m_pObj;
  if ( chainer->m_pObj != this->m_pOwnerEntity.m_pObj )
    this->m_pOwnerEntity.m_pObj = m_pObj;
  this->m_bResolved = 1;
  if ( m_pObj == 0 )
  {
    if ( this->m_PathToVector.m_bUsingExternalPaths )
LABEL_44:
      CUtlVectorEmbeddedNetworkVar<CDOTA_AbilityDraftAbilityState,CDOTAGamerules::NetworkVar_m_AbilityDraftAbilities,-1>::Resolve(this);
    this->m_PathToVector.m_nCount = 0;
    goto LABEL_10;
  }
  v5 = *(*g_pFlattenedSerializers + 272LL);
  NetworkSerializerForEntityInstance = GetNetworkSerializerForEntityInstance(m_pObj);
  p_path = src;
  (v5)(src, g_pFlattenedSerializers, NetworkSerializerForEntityInstance, m_pObj, v3, &v3->m_bIsNetworkVarExcluded);
  this = &v3->m_PathToVector;
  if ( &v3->m_PathToVector == src )
  {
LABEL_10:
    if ( !v3->m_bIsNetworkVarExcluded && v3->m_Vector.m_Size > 0 )
    {
      m_pObj = 0;
      v2 = 0;
      p_m_bIsNetworkVarExcluded = &v3->m_bIsNetworkVarExcluded;
      v5 = &v37;
      dest = &v3->m_PathToVector;
      p_path = &path;
      goto LABEL_13;
    }
    return;
  }
  v8 = v34;
  v3->m_PathToVector.m_bUsingExternalPaths = 0;
  if ( v8 <= 6 )
  {
    v3->m_PathToVector.m_nCount = v8;
    if ( v8 > 0 )
    {
      v9 = src;
      if ( v35 != 0 )
        v9 = src[0];
      memcpy(this, v9, 2 * v8);
    }
    goto LABEL_10;
  }
LABEL_47:
  v3 = &LOG_GENERAL;
  if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
  {
    v37.m_nLine = 442;
    v37.m_szFile = "../../public/tier2/fieldpath.h";
    v37.m_szFunction = "Path_SetCount";
    v27 = &v37;
LABEL_49:
    LoggingSystem_Log(
      LOG_GENERAL,
      LoggingSeverity_t::LS_ERROR,
      v27,
      "Path_SetCount failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)",
      6);
  }
  while ( 1 )
  {
LABEL_29:
    if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v21, v22, v19, v20) != 0 )
      loc_0 = -559038737;
    Plat_ExitProcess(1);
LABEL_32:
    v18 = v2;
LABEL_33:
    m_nCount = path.m_nCount;
    if ( path.m_nCount <= 5 )
      break;
    v3 = &LOG_GENERAL;
    if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
    {
      v37.m_szFile = "../../public/tier2/fieldpath.h";
      v37.m_szFunction = "Path_AddToTail";
      v37.m_nLine = 425;
      LoggingSystem_Log(
        LOG_GENERAL,
        LoggingSeverity_t::LS_ERROR,
        &v37,
        "Path_AddToTail failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)",
        6);
    }
  }
  this = v3->m_pOwnerEntity.m_pObj;
  ++path.m_nCount;
  v24 = (v3->m_Vector.m_Memory.m_pMemory + m_pObj);
  p_path->u.m_FixedPaths[m_nCount].m_nValue = v18;
  if ( this != 0 )
  {
    v31 = v24;
    v25.m_Value = EntityInstanceAddChangeAccessorPath(this, p_path).m_Value;
    v24 = v31;
    v31[8].m_Value = v25.m_Value;
  }
  else
  {
    v24[8].m_Value = -1;
  }
  v26 = v3->m_pOwnerEntity.m_pObj;
  if ( v26 != *&v24[4].m_Value )
    *&v24[4].m_Value = v26;
  while ( 1 )
  {
    ++v2;
    m_pObj = (m_pObj + 32);
    if ( v2 >= v3->m_Vector.m_Size )
      break;
LABEL_13:
    if ( !v3->m_bResolved )
    {
      v10 = v3->m_pOwnerEntity.m_pObj;
      v3->m_bResolved = 1;
      if ( v10 != 0 )
      {
        v30 = v10;
        v29 = *(*g_pFlattenedSerializers + 272LL);
        v11 = GetNetworkSerializerForEntityInstance(v10);
        v29(v5, g_pFlattenedSerializers, v11, v30, v3, p_m_bIsNetworkVarExcluded);
        if ( dest != v5 )
        {
          m_szFunction_low = SLOWORD(v37.m_szFunction);
          v3->m_PathToVector.m_bUsingExternalPaths = 0;
          if ( m_szFunction_low > 6 )
          {
            v3 = &LOG_GENERAL;
            if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) == 0 )
              goto LABEL_29;
            *&path.u.m_FixedPaths[4].m_nValue = 442;
            path.u.m_pPaths = "../../public/tier2/fieldpath.h";
            *&path.m_nCount = "Path_SetCount";
            v27 = &path;
            goto LABEL_49;
          }
          v3->m_PathToVector.m_nCount = m_szFunction_low;
          if ( m_szFunction_low > 0 )
          {
            v13 = 2 * m_szFunction_low;
            m_szFile = v5;
            if ( BYTE2(v37.m_szFunction) != 0 )
              m_szFile = v37.m_szFile;
            memcpy(dest, m_szFile, v13);
          }
        }
      }
      else
      {
        if ( v3->m_PathToVector.m_bUsingExternalPaths )
          goto LABEL_44;
        v3->m_PathToVector.m_nCount = 0;
      }
    }
    if ( !v3->m_bIsNetworkVarExcluded )
    {
      v15 = v3->m_PathToVector.m_nCount;
      path.m_bUsingExternalPaths = 0;
      path.m_nCount = 0;
      if ( v15 > 6 )
        goto LABEL_47;
      path.m_nCount = v15;
      if ( v15 <= 0 )
        goto LABEL_32;
      v16 = 2 * v15;
      if ( v3->m_PathToVector.m_bUsingExternalPaths )
        m_pPaths = v3->m_PathToVector.u.m_pPaths;
      else
        m_pPaths = dest;
      __memcpy_chk(p_path, m_pPaths, v16, 24);
      v18 = v2;
      if ( !path.m_bUsingExternalPaths )
        goto LABEL_33;
      v3 = &LOG_GENERAL;
      if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
      {
        v37.m_szFile = "../../public/tier2/fieldpath.h";
        v37.m_szFunction = "Path_AddToTail";
        v37.m_nLine = 428;
        LoggingSystem_Log(
          LOG_GENERAL,
          LoggingSeverity_t::LS_ERROR,
          &v37,
          "Path_AddToTail failed for read only CFieldPath");
      }
      goto LABEL_29;
    }
  }
}


// CUtlVectorEmbeddedNetworkVar<CHeroStatueLiked, CDOTAGamerules::NetworkVar_m_vecHeroStatueLiked, -1>::OnChainPropagationChange  (line 1756, @0x0000000002562dd0, libserver.so)  // inlines: AssignPathIdToElement, CFieldPath, Clear, Element, Get, GetPathData, IsUsingFixedPaths, LeafCodeInfo_t, Path_AddToTail, Path_RemoveAll, Path_SetCount, Push, ReassignPathIds, Resolve, Set, V_memcpy, memcpy, operator CEntityInstance*, operator=, operator[]
// calls: GetNetworkSerializerForEntityInstance, memcpy, __memcpy_chk, LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, EntityInstanceAddChangeAccessorPath, CUtlVectorEmbeddedNetworkVar<CHeroStatueLiked, CDOTAGamerules::NetworkVar_m_vecHeroStatueLiked, -1>::Resolve, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...), CUtlVectorEmbeddedNetworkVar<CHeroStatueLiked, CDOTAGamerules::NetworkVar_m_vecHeroStatueLiked, -1>::AssignPathIdToElement
// strings: "../../public/tier2/fieldpath.h", "Path_SetCount", "Path_SetCount failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)", "Path_AddToTail", "Path_AddToTail failed for read only CFieldPath"
void __fastcall CUtlVectorEmbeddedNetworkVar<CHeroStatueLiked,CDOTAGamerules::NetworkVar_m_vecHeroStatueLiked,-1>::OnChainPropagationChange(
        CUtlVectorEmbeddedNetworkVar<CHeroStatueLiked,CDOTAGamerules::NetworkVar_m_vecHeroStatueLiked,-1> *const this,
        const CNetworkVarChainer *const chainer)
{
  int v2; // r15d
  CUtlVectorEmbeddedNetworkVar<CHeroStatueLiked,CDOTAGamerules::NetworkVar_m_vecHeroStatueLiked,-1> *v3; // rbx
  CEntityInstance *m_pObj; // r12
  LeafCodeInfo_t *v5; // r14
  FlattenedSerializerHandle_t NetworkSerializerForEntityInstance; // rax
  const CFieldPath *p_path; // r13
  __int64 v8; // rax
  void **v9; // rsi
  CEntityInstance *v10; // rcx
  FlattenedSerializerHandle_t v11; // rax
  __int64 m_szFunction_low; // rdx
  size_t v13; // rdx
  const char *m_szFile; // rsi
  __int64 m_nCount; // rdx
  __int64 v16; // rdx
  const CFieldPath::Path_t *m_pPaths; // rsi
  int16 v18; // cx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdi
  __int64 v22; // rsi
  __int64 v23; // rax
  ChangeAccessorFieldPathIndex_t *v24; // rdx
  ChangeAccessorFieldPathIndex_t v25; // ax
  CEntityInstance *v26; // rax
  const LeafCodeInfo_t *v27; // rdx
  bool *p_m_bIsNetworkVarExcluded; // [rsp+8h] [rbp-B8h]
  void (__fastcall *v29)(LeafCodeInfo_t *, IFlattenedSerializers *, FlattenedSerializerHandle_t, CEntityInstance *, CUtlVectorEmbeddedNetworkVar<CHeroStatueLiked,CDOTAGamerules::NetworkVar_m_vecHeroStatueLiked,-1> *, bool *); // [rsp+18h] [rbp-A8h]
  CEntityInstance *v30; // [rsp+20h] [rbp-A0h]
  ChangeAccessorFieldPathIndex_t *v31; // [rsp+20h] [rbp-A0h]
  LeafCodeInfo_t *dest; // [rsp+28h] [rbp-98h]
  void *src[2]; // [rsp+30h] [rbp-90h] BYREF
  __int16 v34; // [rsp+40h] [rbp-80h]
  char v35; // [rsp+42h] [rbp-7Eh]
  CFieldPath path; // [rsp+50h] [rbp-70h] BYREF
  LeafCodeInfo_t v37; // [rsp+70h] [rbp-50h] BYREF

  v3 = this;
  m_pObj = chainer->m_pObj;
  if ( chainer->m_pObj != this->m_pOwnerEntity.m_pObj )
    this->m_pOwnerEntity.m_pObj = m_pObj;
  this->m_bResolved = 1;
  if ( m_pObj != 0 )
  {
    v5 = *(*g_pFlattenedSerializers + 272LL);
    NetworkSerializerForEntityInstance = GetNetworkSerializerForEntityInstance(m_pObj);
    p_path = src;
    (v5)(src, g_pFlattenedSerializers, NetworkSerializerForEntityInstance, m_pObj, v3, &v3->m_bIsNetworkVarExcluded);
    this = &v3->m_PathToVector;
    if ( &v3->m_PathToVector != src )
    {
      v8 = v34;
      v3->m_PathToVector.m_bUsingExternalPaths = 0;
      if ( v8 > 6 )
        goto LABEL_47;
      v3->m_PathToVector.m_nCount = v8;
      if ( v8 > 0 )
      {
        v9 = src;
        if ( v35 != 0 )
          v9 = src[0];
        memcpy(this, v9, 2 * v8);
      }
    }
  }
  else
  {
    if ( this->m_PathToVector.m_bUsingExternalPaths )
LABEL_44:
      CUtlVectorEmbeddedNetworkVar<CHeroStatueLiked,CDOTAGamerules::NetworkVar_m_vecHeroStatueLiked,-1>::Resolve(this);
    this->m_PathToVector.m_nCount = 0;
  }
  if ( !v3->m_bIsNetworkVarExcluded && v3->m_Vector.m_Size > 0 )
  {
    m_pObj = 0;
    v2 = 0;
    p_m_bIsNetworkVarExcluded = &v3->m_bIsNetworkVarExcluded;
    v5 = &v37;
    dest = &v3->m_PathToVector;
    p_path = &path;
    do
    {
      if ( !v3->m_bResolved )
      {
        v10 = v3->m_pOwnerEntity.m_pObj;
        v3->m_bResolved = 1;
        if ( v10 != 0 )
        {
          v30 = v10;
          v29 = *(*g_pFlattenedSerializers + 272LL);
          v11 = GetNetworkSerializerForEntityInstance(v10);
          v29(v5, g_pFlattenedSerializers, v11, v30, v3, p_m_bIsNetworkVarExcluded);
          if ( dest != v5 )
          {
            m_szFunction_low = SLOWORD(v37.m_szFunction);
            v3->m_PathToVector.m_bUsingExternalPaths = 0;
            if ( m_szFunction_low > 6 )
            {
              v3 = &LOG_GENERAL;
              if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) == 0 )
                goto LABEL_29;
              *&path.u.m_FixedPaths[4].m_nValue = 442;
              path.u.m_pPaths = "../../public/tier2/fieldpath.h";
              *&path.m_nCount = "Path_SetCount";
              v27 = &path;
              goto LABEL_49;
            }
            v3->m_PathToVector.m_nCount = m_szFunction_low;
            if ( m_szFunction_low > 0 )
            {
              v13 = 2 * m_szFunction_low;
              m_szFile = v5;
              if ( BYTE2(v37.m_szFunction) != 0 )
                m_szFile = v37.m_szFile;
              memcpy(dest, m_szFile, v13);
            }
          }
        }
        else
        {
          if ( v3->m_PathToVector.m_bUsingExternalPaths )
            goto LABEL_44;
          v3->m_PathToVector.m_nCount = 0;
        }
      }
      if ( !v3->m_bIsNetworkVarExcluded )
      {
        m_nCount = v3->m_PathToVector.m_nCount;
        path.m_bUsingExternalPaths = 0;
        path.m_nCount = 0;
        if ( m_nCount <= 6 )
        {
          path.m_nCount = m_nCount;
          if ( m_nCount <= 0 )
            goto LABEL_32;
          v16 = 2 * m_nCount;
          if ( v3->m_PathToVector.m_bUsingExternalPaths )
            m_pPaths = v3->m_PathToVector.u.m_pPaths;
          else
            m_pPaths = dest;
          __memcpy_chk(p_path, m_pPaths, v16, 24);
          v18 = v2;
          if ( path.m_bUsingExternalPaths )
          {
            v3 = &LOG_GENERAL;
            if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
            {
              v37.m_szFile = "../../public/tier2/fieldpath.h";
              v37.m_szFunction = "Path_AddToTail";
              v37.m_nLine = 428;
              LoggingSystem_Log(
                LOG_GENERAL,
                LoggingSeverity_t::LS_ERROR,
                &v37,
                "Path_AddToTail failed for read only CFieldPath");
            }
LABEL_29:
            if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v21, v22, v19, v20) != 0 )
              loc_0 = -559038737;
            Plat_ExitProcess(&loc_0 + 1);
LABEL_32:
            v18 = v2;
          }
          v23 = path.m_nCount;
          if ( path.m_nCount > 5 )
            CUtlVectorEmbeddedNetworkVar<CHeroStatueLiked,CDOTAGamerules::NetworkVar_m_vecHeroStatueLiked,-1>::AssignPathIdToElement(
              this,
              chainer);
          this = v3->m_pOwnerEntity.m_pObj;
          ++path.m_nCount;
          v24 = (v3->m_Vector.m_Memory.m_pMemory + m_pObj);
          p_path->u.m_FixedPaths[v23].m_nValue = v18;
          if ( this != 0 )
          {
            v31 = v24;
            v25.m_Value = EntityInstanceAddChangeAccessorPath(this, p_path).m_Value;
            v24 = v31;
            v31[8].m_Value = v25.m_Value;
          }
          else
          {
            v24[8].m_Value = -1;
          }
          v26 = v3->m_pOwnerEntity.m_pObj;
          if ( v26 != *&v24[4].m_Value )
            *&v24[4].m_Value = v26;
          goto LABEL_38;
        }
LABEL_47:
        v3 = &LOG_GENERAL;
        if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) == 0 )
          goto LABEL_29;
        v37.m_nLine = 442;
        v37.m_szFile = "../../public/tier2/fieldpath.h";
        v37.m_szFunction = "Path_SetCount";
        v27 = &v37;
LABEL_49:
        LoggingSystem_Log(
          LOG_GENERAL,
          LoggingSeverity_t::LS_ERROR,
          v27,
          "Path_SetCount failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)",
          6);
        goto LABEL_29;
      }
LABEL_38:
      ++v2;
      m_pObj = (m_pObj + 32);
    }
    while ( v2 < v3->m_Vector.m_Size );
  }
}


// CUtlVectorEmbeddedNetworkVar<CDOTA_ItemStockInfo, CDOTAGamerules::NetworkVar_m_vecItemStockInfo, -1>::OnChainPropagationChange  (line 1756, @0x00000000025631c0, libserver.so)  // inlines: AssignPathIdToElement, CFieldPath, Clear, Element, Get, GetPathData, IsUsingFixedPaths, LeafCodeInfo_t, Path_AddToTail, Path_RemoveAll, Path_SetCount, Push, ReassignPathIds, Resolve, Set, V_memcpy, memcpy, operator CEntityInstance*, operator=, operator[]
// calls: GetNetworkSerializerForEntityInstance, memcpy, __memcpy_chk, LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, EntityInstanceAddChangeAccessorPath, CUtlVectorEmbeddedNetworkVar<CDOTA_ItemStockInfo, CDOTAGamerules::NetworkVar_m_vecItemStockInfo, -1>::Resolve, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...), CUtlVectorEmbeddedNetworkVar<CDOTA_ItemStockInfo, CDOTAGamerules::NetworkVar_m_vecItemStockInfo, -1>::AssignPathIdToElement
// strings: "../../public/tier2/fieldpath.h", "Path_SetCount", "Path_SetCount failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)", "Path_AddToTail", "Path_AddToTail failed for read only CFieldPath"
void __fastcall CUtlVectorEmbeddedNetworkVar<CDOTA_ItemStockInfo,CDOTAGamerules::NetworkVar_m_vecItemStockInfo,-1>::OnChainPropagationChange(
        CUtlVectorEmbeddedNetworkVar<CDOTA_ItemStockInfo,CDOTAGamerules::NetworkVar_m_vecItemStockInfo,-1> *const this,
        const CNetworkVarChainer *const chainer)
{
  int v2; // r15d
  CUtlVectorEmbeddedNetworkVar<CDOTA_ItemStockInfo,CDOTAGamerules::NetworkVar_m_vecItemStockInfo,-1> *v3; // rbx
  CEntityInstance *m_pObj; // r12
  LeafCodeInfo_t *v5; // r14
  FlattenedSerializerHandle_t NetworkSerializerForEntityInstance; // rax
  const CFieldPath *p_path; // r13
  __int64 v8; // rax
  void **v9; // rsi
  CEntityInstance *v10; // rcx
  FlattenedSerializerHandle_t v11; // rax
  __int64 m_szFunction_low; // rdx
  size_t v13; // rdx
  const char *m_szFile; // rsi
  __int64 m_nCount; // rdx
  int v16; // esi
  __int64 v17; // rdx
  const CFieldPath::Path_t *m_pPaths; // rsi
  int16 v19; // cx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdi
  __int64 v23; // rsi
  __int64 v24; // rax
  ChangeAccessorFieldPathIndex_t *v25; // rdx
  ChangeAccessorFieldPathIndex_t v26; // ax
  CEntityInstance *v27; // rax
  const LeafCodeInfo_t *v28; // rdx
  bool *p_m_bIsNetworkVarExcluded; // [rsp+8h] [rbp-B8h]
  void (__fastcall *v30)(LeafCodeInfo_t *, IFlattenedSerializers *, FlattenedSerializerHandle_t, CEntityInstance *, CUtlVectorEmbeddedNetworkVar<CDOTA_ItemStockInfo,CDOTAGamerules::NetworkVar_m_vecItemStockInfo,-1> *, bool *); // [rsp+18h] [rbp-A8h]
  CEntityInstance *v31; // [rsp+20h] [rbp-A0h]
  ChangeAccessorFieldPathIndex_t *v32; // [rsp+20h] [rbp-A0h]
  LeafCodeInfo_t *dest; // [rsp+28h] [rbp-98h]
  void *src[2]; // [rsp+30h] [rbp-90h] BYREF
  __int16 v35; // [rsp+40h] [rbp-80h]
  char v36; // [rsp+42h] [rbp-7Eh]
  CFieldPath path; // [rsp+50h] [rbp-70h] BYREF
  LeafCodeInfo_t v38; // [rsp+70h] [rbp-50h] BYREF

  v3 = this;
  m_pObj = chainer->m_pObj;
  if ( chainer->m_pObj != this->m_pOwnerEntity.m_pObj )
    this->m_pOwnerEntity.m_pObj = m_pObj;
  this->m_bResolved = 1;
  if ( m_pObj != 0 )
  {
    v5 = *(*g_pFlattenedSerializers + 272LL);
    NetworkSerializerForEntityInstance = GetNetworkSerializerForEntityInstance(m_pObj);
    p_path = src;
    (v5)(src, g_pFlattenedSerializers, NetworkSerializerForEntityInstance, m_pObj, v3, &v3->m_bIsNetworkVarExcluded);
    if ( &v3->m_PathToVector != src )
    {
      v8 = v35;
      v3->m_PathToVector.m_bUsingExternalPaths = 0;
      if ( v8 > 6 )
        goto LABEL_47;
      v3->m_PathToVector.m_nCount = v8;
      if ( v8 > 0 )
      {
        v9 = src;
        if ( v36 != 0 )
          v9 = src[0];
        memcpy(&v3->m_PathToVector, v9, 2 * v8);
      }
    }
  }
  else
  {
    if ( this->m_PathToVector.m_bUsingExternalPaths )
LABEL_44:
      CUtlVectorEmbeddedNetworkVar<CDOTA_ItemStockInfo,CDOTAGamerules::NetworkVar_m_vecItemStockInfo,-1>::Resolve(this);
    this->m_PathToVector.m_nCount = 0;
  }
  if ( !v3->m_bIsNetworkVarExcluded )
  {
    this = v3->m_Vector.m_Size;
    if ( this > 0 )
    {
      m_pObj = 0;
      v2 = 0;
      p_m_bIsNetworkVarExcluded = &v3->m_bIsNetworkVarExcluded;
      v5 = &v38;
      dest = &v3->m_PathToVector;
      p_path = &path;
      do
      {
        if ( !v3->m_bResolved )
        {
          v10 = v3->m_pOwnerEntity.m_pObj;
          v3->m_bResolved = 1;
          if ( v10 != 0 )
          {
            v31 = v10;
            v30 = *(*g_pFlattenedSerializers + 272LL);
            v11 = GetNetworkSerializerForEntityInstance(v10);
            v30(v5, g_pFlattenedSerializers, v11, v31, v3, p_m_bIsNetworkVarExcluded);
            if ( dest != v5 )
            {
              m_szFunction_low = SLOWORD(v38.m_szFunction);
              v3->m_PathToVector.m_bUsingExternalPaths = 0;
              if ( m_szFunction_low > 6 )
              {
                v3 = &LOG_GENERAL;
                if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) == 0 )
                  goto LABEL_29;
                *&path.u.m_FixedPaths[4].m_nValue = 442;
                path.u.m_pPaths = "../../public/tier2/fieldpath.h";
                *&path.m_nCount = "Path_SetCount";
                v28 = &path;
                goto LABEL_49;
              }
              v3->m_PathToVector.m_nCount = m_szFunction_low;
              if ( m_szFunction_low > 0 )
              {
                v13 = 2 * m_szFunction_low;
                m_szFile = v5;
                if ( BYTE2(v38.m_szFunction) != 0 )
                  m_szFile = v38.m_szFile;
                memcpy(dest, m_szFile, v13);
              }
            }
          }
          else
          {
            if ( v3->m_PathToVector.m_bUsingExternalPaths )
              goto LABEL_44;
            v3->m_PathToVector.m_nCount = 0;
          }
        }
        if ( !v3->m_bIsNetworkVarExcluded )
        {
          m_nCount = v3->m_PathToVector.m_nCount;
          v16 = 0;
          path.m_bUsingExternalPaths = 0;
          path.m_nCount = 0;
          if ( m_nCount <= 6 )
          {
            path.m_nCount = m_nCount;
            if ( m_nCount <= 0 )
              goto LABEL_32;
            v17 = 2 * m_nCount;
            if ( v3->m_PathToVector.m_bUsingExternalPaths )
              m_pPaths = v3->m_PathToVector.u.m_pPaths;
            else
              m_pPaths = dest;
            __memcpy_chk(p_path, m_pPaths, v17, 24);
            v19 = v2;
            if ( path.m_bUsingExternalPaths )
            {
              v3 = &LOG_GENERAL;
              if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
              {
                v38.m_szFile = "../../public/tier2/fieldpath.h";
                v38.m_szFunction = "Path_AddToTail";
                v38.m_nLine = 428;
                LoggingSystem_Log(
                  LOG_GENERAL,
                  LoggingSeverity_t::LS_ERROR,
                  &v38,
                  "Path_AddToTail failed for read only CFieldPath");
              }
LABEL_29:
              if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v22, v23, v20, v21) != 0 )
                loc_0 = -559038737;
              Plat_ExitProcess(&loc_0 + 1);
LABEL_32:
              v19 = v2;
            }
            v24 = path.m_nCount;
            if ( path.m_nCount > 5 )
              CUtlVectorEmbeddedNetworkVar<CDOTA_ItemStockInfo,CDOTAGamerules::NetworkVar_m_vecItemStockInfo,-1>::AssignPathIdToElement(
                this,
                v16);
            this = v3->m_pOwnerEntity.m_pObj;
            ++path.m_nCount;
            v25 = (v3->m_Vector.m_Memory.m_pMemory + m_pObj);
            p_path->u.m_FixedPaths[v24].m_nValue = v19;
            if ( this != 0 )
            {
              v32 = v25;
              v26.m_Value = EntityInstanceAddChangeAccessorPath(this, p_path).m_Value;
              v25 = v32;
              v32[8].m_Value = v26.m_Value;
            }
            else
            {
              v25[8].m_Value = -1;
            }
            v27 = v3->m_pOwnerEntity.m_pObj;
            if ( v27 != *&v25[4].m_Value )
              *&v25[4].m_Value = v27;
            goto LABEL_38;
          }
LABEL_47:
          v3 = &LOG_GENERAL;
          if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) == 0 )
            goto LABEL_29;
          v38.m_nLine = 442;
          v38.m_szFile = "../../public/tier2/fieldpath.h";
          v38.m_szFunction = "Path_SetCount";
          v28 = &v38;
LABEL_49:
          LoggingSystem_Log(
            LOG_GENERAL,
            LoggingSeverity_t::LS_ERROR,
            v28,
            "Path_SetCount failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)",
            6);
          goto LABEL_29;
        }
LABEL_38:
        ++v2;
        m_pObj = (m_pObj + 56);
      }
      while ( v2 < v3->m_Vector.m_Size );
    }
  }
}


// CUtlVectorEmbeddedNetworkVar<CDOTA_ItemStockInfo, CDOTAGamerules::NetworkVar_m_vecItemStockInfo, -1>::AssignPathIdToElement  (line 1786, @0x00000000024b83c0, libserver.so)  // inlines: LeafCodeInfo_t, Path_AddToTail, Push
// calls: LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...)
// callers: CUtlVectorEmbeddedNetworkVar<CDOTA_ItemStockInfo, CDOTAGamerules::NetworkVar_m_vecItemStockInfo, -1>::OnChainPropagationChange, CUtlVectorEmbeddedNetworkVar<CDOTA_ItemStockInfo, CDOTAGamerules::NetworkVar_m_vecItemStockInfo, -1>::AssignPathIdToElement, CDOTAGamerules::LoadStockInformation
// strings: "../../public/tier2/fieldpath.h", "Path_AddToTail", "Path_AddToTail failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)"
void __fastcall __noreturn CUtlVectorEmbeddedNetworkVar<CDOTA_ItemStockInfo,CDOTAGamerules::NetworkVar_m_vecItemStockInfo,-1>::AssignPathIdToElement(
        CUtlVectorEmbeddedNetworkVar<CDOTA_ItemStockInfo,CDOTAGamerules::NetworkVar_m_vecItemStockInfo,-1> *const this,
        int nElement)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rdi
  __int64 v5; // rsi
  LeafCodeInfo_t v6; // [rsp+0h] [rbp-30h] BYREF

  if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
    goto LABEL_5;
  while ( 1 )
  {
    if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v4, v5, v2, v3) != 0 )
      loc_0 = -559038737;
    Plat_ExitProcess(1);
LABEL_5:
    v6.m_szFile = "../../public/tier2/fieldpath.h";
    v6.m_szFunction = "Path_AddToTail";
    v6.m_nLine = 425;
    LoggingSystem_Log(
      LOG_GENERAL,
      LoggingSeverity_t::LS_ERROR,
      &v6,
      "Path_AddToTail failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)",
      6);
  }
}


// CUtlVectorEmbeddedNetworkVar<CHeroStatueLiked, CDOTAGamerules::NetworkVar_m_vecHeroStatueLiked, -1>::AssignPathIdToElement  (line 1786, @0x00000000024b8540, libserver.so)  // inlines: LeafCodeInfo_t, Path_AddToTail, Push
// calls: LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...)
// callers: CUtlVectorEmbeddedNetworkVar<CHeroStatueLiked, CDOTAGamerules::NetworkVar_m_vecHeroStatueLiked, -1>::OnChainPropagationChange, CDOTAGamerules::ClientMsg_HeroStatueLike
// strings: "../../public/tier2/fieldpath.h", "Path_AddToTail", "Path_AddToTail failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)"
void __fastcall __noreturn CUtlVectorEmbeddedNetworkVar<CHeroStatueLiked,CDOTAGamerules::NetworkVar_m_vecHeroStatueLiked,-1>::AssignPathIdToElement(
        CUtlVectorEmbeddedNetworkVar<CHeroStatueLiked,CDOTAGamerules::NetworkVar_m_vecHeroStatueLiked,-1> *const this,
        int nElement)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rdi
  __int64 v5; // rsi
  LeafCodeInfo_t v6; // [rsp+0h] [rbp-30h] BYREF

  if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
    goto LABEL_5;
  while ( 1 )
  {
    if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v4, v5, v2, v3) != 0 )
      loc_0 = -559038737;
    Plat_ExitProcess(1);
LABEL_5:
    v6.m_szFile = "../../public/tier2/fieldpath.h";
    v6.m_szFunction = "Path_AddToTail";
    v6.m_nLine = 425;
    LoggingSystem_Log(
      LOG_GENERAL,
      LoggingSeverity_t::LS_ERROR,
      &v6,
      "Path_AddToTail failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)",
      6);
  }
}


// CUtlVectorEmbeddedNetworkVar<CDOTA_ItemStockInfo, CDOTAGamerules::NetworkVar_m_vecItemStockInfo, -1>::AssignPathIdToElement  (line 1786, @0x0000000002573ab0, libserver.so)  // inlines: CFieldPath, Clear, Element, Get, GetPathData, IsUsingFixedPaths, LeafCodeInfo_t, Path_AddToTail, Path_RemoveAll, Path_SetCount, Push, Resolve, Set, V_memcpy, memcpy, operator CEntityInstance*, operator=, operator[]
// calls: GetNetworkSerializerForEntityInstance, memcpy, __memcpy_chk, LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, EntityInstanceAddChangeAccessorPath, CUtlVectorEmbeddedNetworkVar<CDOTA_ItemStockInfo, CDOTAGamerules::NetworkVar_m_vecItemStockInfo, -1>::Resolve, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...), CUtlVectorEmbeddedNetworkVar<CDOTA_ItemStockInfo, CDOTAGamerules::NetworkVar_m_vecItemStockInfo, -1>::AssignPathIdToElement
// callers: CDOTAGamerules::CreateItemStockInfo
// strings: "../../public/tier2/fieldpath.h", "Path_AddToTail", "Path_AddToTail failed for read only CFieldPath", "Path_SetCount", "Path_SetCount failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)"
void __fastcall CUtlVectorEmbeddedNetworkVar<CDOTA_ItemStockInfo,CDOTAGamerules::NetworkVar_m_vecItemStockInfo,-1>::AssignPathIdToElement(
        CUtlVectorEmbeddedNetworkVar<CDOTA_ItemStockInfo,CDOTAGamerules::NetworkVar_m_vecItemStockInfo,-1> *const this,
        int nElement)
{
  __int64 v2; // r12
  CUtlVectorEmbeddedNetworkVar<CDOTA_ItemStockInfo,CDOTAGamerules::NetworkVar_m_vecItemStockInfo,-1> *v3; // rbx
  CEntityInstance *m_pObj; // r13
  void (__fastcall *v5)(LeafCodeInfo_t *, IFlattenedSerializers *, FlattenedSerializerHandle_t, CEntityInstance *, CUtlVectorEmbeddedNetworkVar<CDOTA_ItemStockInfo,CDOTAGamerules::NetworkVar_m_vecItemStockInfo,-1> *, bool *); // r15
  FlattenedSerializerHandle_t NetworkSerializerForEntityInstance; // rax
  __int64 m_szFunction_low; // rdx
  size_t v8; // rdx
  const char *m_szFile; // rsi
  __int64 m_nCount; // rdx
  CFieldPath *p_m_PathToVector; // rsi
  __int64 v12; // rdx
  int16 v13; // cx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdi
  __int64 v17; // rsi
  __int64 v18; // rax
  CEntityInstance *v19; // rdi
  __int64 v20; // r12
  CEntityInstance *v21; // rax
  const LeafCodeInfo_t *p_sub; // rdx
  CFieldPath sub; // [rsp+0h] [rbp-70h] BYREF
  LeafCodeInfo_t src[3]; // [rsp+20h] [rbp-50h] BYREF

  v2 = nElement;
  v3 = this;
  if ( !this->m_bResolved )
  {
    m_pObj = this->m_pOwnerEntity.m_pObj;
    this->m_bResolved = 1;
    if ( m_pObj != 0 )
    {
      v5 = *(*g_pFlattenedSerializers + 272LL);
      NetworkSerializerForEntityInstance = GetNetworkSerializerForEntityInstance(m_pObj);
      v5(src, g_pFlattenedSerializers, NetworkSerializerForEntityInstance, m_pObj, v3, &v3->m_bIsNetworkVarExcluded);
      this = &v3->m_PathToVector;
      if ( &v3->m_PathToVector != src )
      {
        m_szFunction_low = SLOWORD(src[0].m_szFunction);
        v3->m_PathToVector.m_bUsingExternalPaths = 0;
        if ( m_szFunction_low > 6 )
        {
          v3 = &LOG_GENERAL;
          if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) == 0 )
          {
LABEL_17:
            if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v16, v17, v14, v15) != 0 )
              loc_0 = -559038737;
            Plat_ExitProcess(&loc_0 + 1);
            goto LABEL_20;
          }
          *&sub.u.m_FixedPaths[4].m_nValue = 442;
          sub.u.m_pPaths = "../../public/tier2/fieldpath.h";
          *&sub.m_nCount = "Path_SetCount";
          p_sub = &sub;
LABEL_33:
          LoggingSystem_Log(
            LOG_GENERAL,
            LoggingSeverity_t::LS_ERROR,
            p_sub,
            "Path_SetCount failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)",
            6);
          goto LABEL_17;
        }
        v3->m_PathToVector.m_nCount = m_szFunction_low;
        if ( m_szFunction_low > 0 )
        {
          v8 = 2 * m_szFunction_low;
          m_szFile = src;
          if ( BYTE2(src[0].m_szFunction) != 0 )
            m_szFile = src[0].m_szFile;
          memcpy(this, m_szFile, v8);
        }
      }
    }
    else
    {
      if ( this->m_PathToVector.m_bUsingExternalPaths )
        CUtlVectorEmbeddedNetworkVar<CDOTA_ItemStockInfo,CDOTAGamerules::NetworkVar_m_vecItemStockInfo,-1>::Resolve(this);
      this->m_PathToVector.m_nCount = 0;
    }
  }
  if ( v3->m_bIsNetworkVarExcluded )
    return;
  m_nCount = v3->m_PathToVector.m_nCount;
  sub.m_bUsingExternalPaths = 0;
  sub.m_nCount = 0;
  if ( m_nCount > 6 )
  {
    v3 = &LOG_GENERAL;
    if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) == 0 )
      goto LABEL_17;
    src[0].m_nLine = 442;
    src[0].m_szFile = "../../public/tier2/fieldpath.h";
    src[0].m_szFunction = "Path_SetCount";
    p_sub = src;
    goto LABEL_33;
  }
  sub.m_nCount = m_nCount;
  if ( m_nCount > 0 )
  {
    p_m_PathToVector = &v3->m_PathToVector;
    v12 = 2 * m_nCount;
    if ( v3->m_PathToVector.m_bUsingExternalPaths )
      p_m_PathToVector = v3->m_PathToVector.u.m_pPaths;
    __memcpy_chk(&sub, p_m_PathToVector, v12, 24);
    v13 = v2;
    if ( !sub.m_bUsingExternalPaths )
      goto LABEL_21;
    v3 = &LOG_GENERAL;
    if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
    {
      src[0].m_szFile = "../../public/tier2/fieldpath.h";
      src[0].m_szFunction = "Path_AddToTail";
      src[0].m_nLine = 428;
      LoggingSystem_Log(LOG_GENERAL, LoggingSeverity_t::LS_ERROR, src, "Path_AddToTail failed for read only CFieldPath");
    }
    goto LABEL_17;
  }
LABEL_20:
  v13 = v2;
LABEL_21:
  v18 = sub.m_nCount;
  if ( sub.m_nCount > 5 )
    CUtlVectorEmbeddedNetworkVar<CDOTA_ItemStockInfo,CDOTAGamerules::NetworkVar_m_vecItemStockInfo,-1>::AssignPathIdToElement(
      this,
      nElement);
  v19 = v3->m_pOwnerEntity.m_pObj;
  ++sub.m_nCount;
  sub.u.m_FixedPaths[v18].m_nValue = v13;
  v20 = &v3->m_Vector.m_Memory.m_pMemory[v2];
  if ( v19 != 0 )
    *(v20 + 16) = EntityInstanceAddChangeAccessorPath(v19, &sub);
  else
    *(v20 + 16) = -1;
  v21 = v3->m_pOwnerEntity.m_pObj;
  if ( v21 != *(v20 + 8) )
    *(v20 + 8) = v21;
}


// CUtlVectorEmbeddedNetworkVar<CDOTA_CombatLogQueryProgress, CIngameEvent_Base::NetworkVar_m_PlayerQueryIDs, -1>::AssignPathIdToElement  (line 1786, @0x0000000002595d90, libserver.so)  // inlines: LeafCodeInfo_t, Path_AddToTail, Push
// calls: LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...)
// callers: CIngameEvent_Base::ClearPlayerCompendiumChallenge, CIngameEvent_Base::ClearQuestQueryForPlayer, CIngameEvent_Base::AddPlayerCombatLogIndexForProgress
// strings: "../../public/tier2/fieldpath.h", "Path_AddToTail", "Path_AddToTail failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)"
void __fastcall __noreturn CUtlVectorEmbeddedNetworkVar<CDOTA_CombatLogQueryProgress,CIngameEvent_Base::NetworkVar_m_PlayerQueryIDs,-1>::AssignPathIdToElement(
        CUtlVectorEmbeddedNetworkVar<CDOTA_CombatLogQueryProgress,CIngameEvent_Base::NetworkVar_m_PlayerQueryIDs,-1> *const this,
        int nElement)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rdi
  __int64 v5; // rsi
  LeafCodeInfo_t v6; // [rsp+0h] [rbp-30h] BYREF

  if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
    goto LABEL_5;
  while ( 1 )
  {
    if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v4, v5, v2, v3) != 0 )
      loc_0 = -559038737;
    Plat_ExitProcess(1);
LABEL_5:
    v6.m_szFile = "../../public/tier2/fieldpath.h";
    v6.m_szFunction = "Path_AddToTail";
    v6.m_nLine = 425;
    LoggingSystem_Log(
      LOG_GENERAL,
      LoggingSeverity_t::LS_ERROR,
      &v6,
      "Path_AddToTail failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)",
      6);
  }
}


// CUtlVectorEmbeddedNetworkVar<CEconItemAttribute, CAttributeList::NetworkVar_m_Attributes, -1>::AssignPathIdToElement  (line 1786, @0x0000000002e6b940, libserver.so)  // inlines: LeafCodeInfo_t, Path_AddToTail, Push
// calls: LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...)
// callers: CAttributeList::RemoveAttributeByIndex, CAttributeList::SetRuntimeAttributeValue, CAttributeList::RemoveAttribute
// strings: "../../public/tier2/fieldpath.h", "Path_AddToTail", "Path_AddToTail failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)"
void __fastcall __noreturn CUtlVectorEmbeddedNetworkVar<CEconItemAttribute,CAttributeList::NetworkVar_m_Attributes,-1>::AssignPathIdToElement(
        CUtlVectorEmbeddedNetworkVar<CEconItemAttribute,CAttributeList::NetworkVar_m_Attributes,-1> *const this,
        int nElement)
{
  LeafCodeInfo_t v2; // [rsp+0h] [rbp-30h] BYREF

  if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
    goto LABEL_5;
  while ( 1 )
  {
    if ( Plat_ShouldCollectMiniDumpsForFatalErrors() != 0 )
      loc_0 = -559038737;
    Plat_ExitProcess(1);
LABEL_5:
    v2.m_szFile = "../../public/tier2/fieldpath.h";
    v2.m_szFunction = "Path_AddToTail";
    v2.m_nLine = 425;
    LoggingSystem_Log(
      LOG_GENERAL,
      LoggingSeverity_t::LS_ERROR,
      &v2,
      "Path_AddToTail failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)",
      6);
  }
}


