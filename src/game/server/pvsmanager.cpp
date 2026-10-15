
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CPVSManager::YouForgot::ToDefine_DEFINE_GAME_SYSTEM  (line 12, @0x000000000235dfa0, libserver.so)
void __cdecl CPVSManager::YouForgot::ToDefine_DEFINE_GAME_SYSTEM()
{
  ;
}


// CPVSManager::ActiveSpawnGroupChanged  (line 14, @0x000000000234ccb0, libserver.so)  // inlines: MarkPVSInformationDirty
// calls: EntityInstanceIter_t::EntityInstanceIter_t, EntityInstanceIter_t::First, EntityInstanceIter_t::Next
void __fastcall CPVSManager::ActiveSpawnGroupChanged(
        CPVSManager *const this,
        const EventActiveSpawnGroupChanged_t *const msg)
{
  CEntityInstance *i; // rax
  EntityInstanceIter_t iter; // [rsp+0h] [rbp-30h] BYREF

  EntityInstanceIter_t::EntityInstanceIter_t(&iter, 0, EntityIterType_t::ENTITY_ENUM_ITERATE_NON_DORMANT_ONLY);
  for ( i = EntityInstanceIter_t::First(&iter); i != 0; i = EntityInstanceIter_t::Next(&iter) )
    i[2].m_worldGroupId.m_nHashCode |= 0x60u;
}


// CPVSManager::GetPVS  (line 28, @0x000000000234c1e0, libserver.so)
// calls: CEntitySystem::GetActiveSpawnGroupHandle
IPVS *__fastcall CPVSManager::GetPVS(CPVSManager *const this, SpawnGroupHandle_t handle)
{
  if ( handle - 1 > 0xFFFFFFFD )
    CEntitySystem::GetActiveSpawnGroupHandle(g_pEntitySystem);
  return (*(*engine + 688LL))(engine);
}


// CPVSManager::GetAllSpawnGroupsWithPVS  (line 45, @0x000000000234afa0, libserver.so)
void __fastcall CPVSManager::GetAllSpawnGroupsWithPVS(
        CPVSManager *const this,
        CUtlVector<unsigned int,CUtlMemory<unsigned int,int> > *pOutSpawnGroupList,
        CUtlVector<IPVS*,CUtlMemory<IPVS*,int> > *pOutPVSList)
{
  (*(*engine + 736LL))(engine, pOutSpawnGroupList, pOutPVSList);
}


// CPVSManager::GetClustersForBounds  (line 50, @0x000000000234afd0, libserver.so)
int __fastcall CPVSManager::GetClustersForBounds(
        CPVSManager *const this,
        SpawnGroupHandle_t handle,
        uint32 *pList,
        int nListMax,
        const Vector *const vMins,
        const Vector *const vMaxs,
        int *pnTopNode)
{
  __int64 v11; // rax

  v11 = (*(this->_vptr_IGameSystem + 40))(this, handle);
  if ( v11 != 0 )
    return (*(*v11 + 8LL))(v11, pList, nListMax, vMins, vMaxs, pnTopNode);
  else
    return 0;
}


// CPVSManager::GetClusterCount  (line 60, @0x000000000234b060, libserver.so)
int __fastcall CPVSManager::GetClusterCount(CPVSManager *const this, SpawnGroupHandle_t handle)
{
  __int64 v2; // rax

  v2 = (*(this->_vptr_IGameSystem + 40))(this, handle);
  if ( v2 != 0 )
    return (*(*v2 + 40LL))(v2);
  else
    return 0;
}


// CPVSManager::GetAllClusterBounds  (line 70, @0x000000000234b0a0, libserver.so)
int __fastcall CPVSManager::GetAllClusterBounds(
        CPVSManager *const this,
        SpawnGroupHandle_t handle,
        bbox_t *pBBoxList,
        int maxBBox)
{
  __int64 v6; // rax

  v6 = (*(this->_vptr_IGameSystem + 40))(this, handle);
  if ( v6 != 0 )
    return (*(*v6 + 48LL))(v6, pBBoxList, maxBBox);
  else
    return 0;
}


// CPVSManager::GetClusterForOrigin  (line 80, @0x000000000234b0f0, libserver.so)
int __fastcall CPVSManager::GetClusterForOrigin(
        CPVSManager *const this,
        SpawnGroupHandle_t handle,
        const Vector *const org)
{
  __int64 v4; // rax

  v4 = (*(this->_vptr_IGameSystem + 40))(this, handle);
  if ( v4 != 0 )
    return (*(*v4 + 56LL))(v4, org);
  else
    return 0;
}


// CPVSManager::GetPVSForCluster  (line 90, @0x000000000234b140, libserver.so)
bool __fastcall CPVSManager::GetPVSForCluster(
        CPVSManager *const this,
        SpawnGroupHandle_t handle,
        int cluster,
        vis_info_t *outputpvs)
{
  __int64 v6; // rsi
  bool result; // al
  __int128 v8; // [rsp+0h] [rbp-30h] BYREF
  SpawnGroupHandle_t v9; // [rsp+10h] [rbp-20h]

  v6 = (*(this->_vptr_IGameSystem + 40))(this, handle);
  result = 0;
  if ( v6 != 0 )
  {
    (*(*v6 + 32LL))(&v8, v6, cluster, 0);
    *&outputpvs->m_pVisBits = v8;
    outputpvs->m_SpawnGroupHandle = v9;
    return 1;
  }
  return result;
}


// CPVSManager::CheckOriginInPVS  (line 101, @0x000000000234b1b0, libserver.so)
bool __fastcall CPVSManager::CheckOriginInPVS(
        CPVSManager *const this,
        SpawnGroupHandle_t handle,
        const Vector *const org,
        const vis_info_t *checkpvs)
{
  __int64 v6; // rax

  v6 = (*(this->_vptr_IGameSystem + 40))(this, handle);
  return v6 != 0 && (*(*v6 + 64LL))(v6, org, checkpvs);
}


// CPVSManager::CheckBoxInPVS  (line 111, @0x000000000234b200, libserver.so)
bool __fastcall CPVSManager::CheckBoxInPVS(
        CPVSManager *const this,
        SpawnGroupHandle_t handle,
        const Vector *const mins,
        const Vector *const maxs,
        const vis_info_t *checkpvs)
{
  __int64 v8; // rax

  v8 = (*(this->_vptr_IGameSystem + 40))(this, handle);
  return v8 != 0 && (*(*v8 + 72LL))(v8, mins, maxs, checkpvs);
}


// CPVSManager::ResetPVS  (line 121, @0x000000000234b270, libserver.so)
void __fastcall CPVSManager::ResetPVS(CPVSManager *const this, SpawnGroupHandle_t handle, vis_info_t *pvs)
{
  __int64 v4; // rax

  v4 = (*(this->_vptr_IGameSystem + 40))(this, handle);
  if ( v4 != 0 )
    (*(*v4 + 80LL))(v4, pvs);
}


// CPVSManager::AddOriginToPVS  (line 130, @0x000000000234b2c0, libserver.so)
void __fastcall CPVSManager::AddOriginToPVS(
        CPVSManager *const this,
        SpawnGroupHandle_t handle,
        const Vector *const origin,
        vis_info_t *pvs)
{
  __int64 v6; // rax

  v6 = (*(this->_vptr_IGameSystem + 40))(this, handle);
  if ( v6 != 0 )
    (*(*v6 + 88LL))(v6, origin, pvs);
}


// CPVSManager::CheckHeadnodeVisible  (line 139, @0x000000000234b310, libserver.so)
bool __fastcall CPVSManager::CheckHeadnodeVisible(
        CPVSManager *const this,
        SpawnGroupHandle_t handle,
        int nodenum,
        const vis_info_t *checkpvs)
{
  __int64 v6; // rax

  v6 = (*(this->_vptr_IGameSystem + 40))(this, handle);
  return v6 != 0 && (*(*v6 + 96LL))(v6, nodenum, checkpvs);
}


// CPVSManager::CheckAreasConnected  (line 149, @0x000000000234b360, libserver.so)
bool __fastcall CPVSManager::CheckAreasConnected(
        CPVSManager *const this,
        SpawnGroupHandle_t handle,
        int area1,
        int area2)
{
  __int64 v6; // rax

  v6 = (*(this->_vptr_IGameSystem + 40))(this, handle);
  return v6 == 0 || (*(*v6 + 104LL))(v6, area1, area2);
}


// CPVSManager::GetArea  (line 159, @0x000000000234b3b0, libserver.so)
int __fastcall CPVSManager::GetArea(CPVSManager *const this, SpawnGroupHandle_t handle, const Vector *const origin)
{
  __int64 v4; // rax

  v4 = (*(this->_vptr_IGameSystem + 40))(this, handle);
  if ( v4 != 0 )
    return (*(*v4 + 112LL))(v4, origin);
  else
    return 0;
}


// CPVSManager::GetAreaBits  (line 169, @0x000000000234b6d0, libserver.so)  // inlines: V_memset, memset
// calls: memset
void __fastcall CPVSManager::GetAreaBits(
        CPVSManager *const this,
        SpawnGroupHandle_t handle,
        int area,
        unsigned __int8 *bits,
        int buflen)
{
  __int64 v8; // rax
  size_t v9; // rdx

  v8 = (*(this->_vptr_IGameSystem + 40))(this, handle);
  if ( v8 != 0 )
  {
    (*(*v8 + 120LL))(v8, area, bits, buflen);
  }
  else
  {
    v9 = buflen;
    if ( buflen < 0 )
    {
      __debugbreak();
      v9 = buflen;
    }
    memset(bits, 255, v9);
  }
}


// CPVSManager::GetAreaPortalPlane  (line 180, @0x000000000234b400, libserver.so)
bool __fastcall CPVSManager::GetAreaPortalPlane(
        CPVSManager *const this,
        SpawnGroupHandle_t handle,
        const Vector *const vViewOrigin,
        int portalKey,
        VPlane *pPlane)
{
  __int64 v8; // rax

  v8 = (*(this->_vptr_IGameSystem + 40))(this, handle);
  return v8 != 0 && (*(*v8 + 144LL))(v8, vViewOrigin, portalKey, pPlane);
}


// CPVSManager::SetAreaPortalState  (line 190, @0x000000000234b470, libserver.so)
void __fastcall CPVSManager::SetAreaPortalState(
        CPVSManager *const this,
        SpawnGroupHandle_t handle,
        int portalNumber,
        int isOpen)
{
  __int64 v6; // rax

  v6 = (*(this->_vptr_IGameSystem + 40))(this, handle);
  if ( v6 != 0 )
    (*(*v6 + 128LL))(v6, portalNumber, isOpen);
}


// CPVSManager::SetAreaPortalStates  (line 199, @0x000000000234b4c0, libserver.so)
void __fastcall CPVSManager::SetAreaPortalStates(
        CPVSManager *const this,
        SpawnGroupHandle_t handle,
        const int *portalNumbers,
        const int *isOpen,
        int nPortals)
{
  __int64 v8; // rax

  v8 = (*(this->_vptr_IGameSystem + 40))(this, handle);
  if ( v8 != 0 )
    (*(*v8 + 136LL))(v8, portalNumbers, isOpen, nPortals);
}


// ent_characterize  (line 208, @0x00000000023512a0, libserver.so)  // inlines: Arg, CUtlMemory, CUtlString, CUtlVector, CUtlVectorBase, DescribeSpawnGroupHandle, GetInstance, IndexToIdentity, IsClientOnlySpawnGroup, IsUsed, LookupEntityByIndex, Purge, RemoveAll, String, operator[], ~CUtlMemory, ~CUtlString, ~CUtlVector, ~CUtlVectorBase
// calls: Msg, V_atoi, CSpawnGroupMgrGameSystem::GetSpawnGroups, CSpawnGroupMgrGameSystem::GetSpawnGroupName, CUtlString::Format, CUtlString::Get, CUtlString::FreeMemoryBlock, CBaseEntity::GetAbsOrigin, IsPointInBox, CUtlMemory<unsigned int, int>::Purge, _Unwind_Resume
// strings: "usage: %s <entindex>\n", "Entity is in spawn group %s(%s)\n", "outside", "inside", "Entity is phsycally %s spawn group %s(%s)\n", "%s:  No entity at index %d\n" (7 total)
// globals: g_pPVSManager
void __fastcall ent_characterize(const CCommandContext *const ctx, const CCommand *const args)
{
  int m_nArgc; // eax
  const char *v4; // rsi
  int v5; // eax
  CEntityIdentity *v6; // r12
  CEntityIdentity *v7; // r12
  const char *SpawnGroupName; // rbx
  SpawnGroupHandle_t m_hSpawnGroup; // eax
  const char *v10; // rax
  unsigned __int64 v11; // xmm0_8
  __int64 v12; // r13
  int v13; // r12d
  SpawnGroupHandle_t v14; // r14d
  __int64 v15; // rbx
  __int64 (__fastcall *v16)(__int64, const Vector *); // r15
  const Vector *AbsOrigin; // rax
  int v18; // eax
  const Vector *v19; // rax
  bool v20; // bl
  const char *v21; // r15
  const char *v22; // rdx
  const char *v23; // rsi
  const char *v24; // rsi
  CBaseEntity *m_pInstance; // [rsp+28h] [rbp-88h]
  CUtlString v26[2]; // [rsp+30h] [rbp-80h] BYREF
  Vector bMins; // [rsp+40h] [rbp-70h] BYREF
  Vector bMaxs; // [rsp+50h] [rbp-60h] BYREF
  CUtlVector<unsigned int,CUtlMemory<unsigned int,int> > groups; // [rsp+60h] [rbp-50h] BYREF

  m_nArgc = args->m_nArgc;
  if ( args->m_nArgc == 2 )
  {
    if ( g_pEntitySystem != 0 )
    {
      v5 = V_atoi(args->m_ppArgv[1]);
      if ( v5 <= 0x7FFE
        && (v6 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v5 >> 9]) != 0
        && (v7 = &v6[v5 & 0x1FF]) != 0
        && (v7->m_EHandle.m_Index & 0x7FFF) == v5
        && (m_pInstance = v7->m_pInstance, v7->m_pInstance != 0) )
      {
        groups.m_Size = 0;
        groups.m_Memory.m_pMemory = 0;
        groups.m_Memory.m_nAllocationCount = 0;
        groups.m_Memory.m_nGrowSize = 0;
        CSpawnGroupMgrGameSystem::GetSpawnGroups(g_pSpawnGroupMgr, &groups);
        SpawnGroupName = CSpawnGroupMgrGameSystem::GetSpawnGroupName(g_pSpawnGroupMgr, v7->m_hSpawnGroup);
        m_hSpawnGroup = v7->m_hSpawnGroup;
        *&bMaxs.x = 0;
        if ( m_hSpawnGroup + 0x80000000 > 0x7FFFFFFE )
          CUtlString::Format(&bMaxs, "%u", m_hSpawnGroup);
        else
          CUtlString::Format(&bMaxs, &stru_32D9EEC.m_mapLevelWorlds.m_Tree.m_Elements.m_nGrowSize + 3);
        v10 = CUtlString::Get(&bMaxs);
        v11 = Msg("Entity is in spawn group %s(%s)\n", v10, SpawnGroupName).m128_u64[0];
        if ( *&bMaxs.x != 0 )
          CUtlString::FreeMemoryBlock(&bMaxs);
        if ( groups.m_Size > 0 )
        {
          v12 = 0;
          v13 = 0;
          do
          {
            while ( 1 )
            {
              v14 = groups.m_Memory.m_pMemory[v12];
              v15 = (*g_pPVSManager->_vptr_IPVSManager)(g_pPVSManager, v14, *&v11);
              v16 = *(*v15 + 56LL);
              AbsOrigin = CBaseEntity::GetAbsOrigin(m_pInstance);
              v18 = v16(v15, AbsOrigin);
              if ( v18 >= 0 && (*(*v15 + 160LL))(v15, v18, &bMins, &bMaxs) != 0 )
              {
                v19 = CBaseEntity::GetAbsOrigin(m_pInstance);
                v20 = IsPointInBox(v19, &bMins, &bMaxs);
                v21 = CSpawnGroupMgrGameSystem::GetSpawnGroupName(g_pSpawnGroupMgr, v14);
                v26[0].m_pString = 0;
                if ( v14 + 0x80000000 > 0x7FFFFFFE )
                  CUtlString::Format(v26, "%u", v14);
                else
                  CUtlString::Format(v26, &stru_32D9EEC.m_mapLevelWorlds.m_Tree.m_Elements.m_nGrowSize + 3);
                v22 = CUtlString::Get(v26);
                v23 = "inside";
                if ( !v20 )
                  v23 = "outside";
                v11 = Msg("Entity is phsycally %s spawn group %s(%s)\n", v23, v22, v21).m128_u64[0];
                if ( v26[0].m_pString != 0 )
                  break;
              }
              ++v13;
              ++v12;
              if ( groups.m_Size <= v13 )
                goto LABEL_27;
            }
            ++v13;
            ++v12;
            CUtlString::FreeMemoryBlock(v26);
          }
          while ( groups.m_Size > v13 );
        }
LABEL_27:
        groups.m_Size = 0;
        if ( (groups.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        {
          CUtlMemory<unsigned int,int>::Purge(&groups.m_Memory);
          if ( (groups.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
            CUtlMemory<unsigned int,int>::Purge(&groups.m_Memory);
        }
      }
      else
      {
        v24 = "";
        if ( args->m_nArgc > 0 )
          v24 = args->m_ppArgv[0];
        Msg("%s:  No entity at index %d\n", v24, v5);
      }
    }
    else
    {
      Msg("%s:  No entity system!n", args->m_ppArgv[0]);
    }
  }
  else
  {
    v4 = "";
    if ( m_nArgc > 0 )
      v4 = args->m_ppArgv[0];
    Msg("usage: %s <entindex>\n", v4);
  }
}


