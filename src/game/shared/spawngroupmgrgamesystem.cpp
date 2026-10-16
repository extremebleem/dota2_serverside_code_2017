
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// SpawnGroupConnectionInfo_t::GetSpawnGroup  (line 24, @0x0000000001f440d0, libserver.so)  // inlines: String
// calls: CUtlString::Get, CSpawnGroupMgrGameSystem::FindByName
// callers: CNetworkTransmitComponent::IsInPVSOfConnectedSpawnGroup_R, CNetworkTransmitComponent::IsInPVS
// globals: CMapSpawnGroup::s_nSpawnGroupCacheMarker, g_pSpawnGroupMgr
CMapSpawnGroup *__fastcall SpawnGroupConnectionInfo_t::GetSpawnGroup(const SpawnGroupConnectionInfo_t *const this)
{
  const char *v2; // rax
  CMapSpawnGroup *result; // rax

  if ( this->m_nSpawnGroupCacheMarker != CMapSpawnGroup::s_nSpawnGroupCacheMarker
    || (result = this->m_pSpawnGroup, this->m_pSpawnGroup == 0) )
  {
    v2 = CUtlString::Get(&this->m_SpawnGroupName);
    result = CSpawnGroupMgrGameSystem::FindByName(g_pSpawnGroupMgr, v2);
    this->m_pSpawnGroup = result;
    this->m_nSpawnGroupCacheMarker = CMapSpawnGroup::s_nSpawnGroupCacheMarker;
  }
  return result;
}


// CMapSpawnGroup::CMapSpawnGroup  (line 131, @0x0000000001f382c0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase
void __fastcall CMapSpawnGroup::CMapSpawnGroup(CMapSpawnGroup *const this)
{
  this->m_pSpawnGroup = 0;
  this->m_bSpawnGroupPrecacheDispatched = 0;
  this->m_bSpawnGroupLoadDispatched = 0;
  this->m_Connections.m_Size = 0;
  this->m_Connections.m_Memory.m_pMemory = 0;
  this->m_Connections.m_Memory.m_nAllocationCount = 0;
  this->m_Connections.m_Memory.m_nGrowSize = 0;
  this->m_pPVS = 0;
}


// CMapSpawnGroup::~CMapSpawnGroup  (line 146, @0x0000000001f58f10, libserver.so)  // inlines: Purge, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<SpawnGroupConnectionInfo_t, CUtlMemory<SpawnGroupConnectionInfo_t, int> >::RemoveAll, CUtlMemory<SpawnGroupConnectionInfo_t, int>::Purge
// globals: CMapSpawnGroup::s_nSpawnGroupCacheMarker
void __fastcall CMapSpawnGroup::~CMapSpawnGroup(CMapSpawnGroup *const this)
{
  ++CMapSpawnGroup::s_nSpawnGroupCacheMarker;
  CUtlVectorBase<SpawnGroupConnectionInfo_t,CUtlMemory<SpawnGroupConnectionInfo_t,int>>::RemoveAll(&this->m_Connections);
  if ( (this->m_Connections.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<SpawnGroupConnectionInfo_t,int>::Purge(&this->m_Connections.m_Memory);
    if ( (this->m_Connections.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<SpawnGroupConnectionInfo_t,int>::Purge(&this->m_Connections.m_Memory);
  }
}


// CMapSpawnGroup::Init  (line 161, @0x0000000001f38300, libserver.so)
void __fastcall CMapSpawnGroup::Init(CMapSpawnGroup *const this, ISpawnGroup *pSpawnGroup)
{
  this->m_pSpawnGroup = pSpawnGroup;
}


// CMapSpawnGroup::GetName  (line 166, @0x0000000001f38310, libserver.so)
const char *__fastcall CMapSpawnGroup::GetName(const CMapSpawnGroup *const this)
{
  return this->m_pSpawnGroup->GetWorldName();
}


// CMapSpawnGroup::GetSpawnGroupHandle  (line 171, @0x0000000001f38320, libserver.so)
SpawnGroupHandle_t __fastcall CMapSpawnGroup::GetSpawnGroupHandle(const CMapSpawnGroup *const this)
{
  return (*(this->m_pSpawnGroup->_vptr_ISpawnGroup + 3))(this->m_pSpawnGroup);
}


// CMapSpawnGroup::GetEntityFilterName  (line 176, @0x0000000001f38340, libserver.so)
const char *__fastcall CMapSpawnGroup::GetEntityFilterName(const CMapSpawnGroup *const this)
{
  return (*(this->m_pSpawnGroup->_vptr_ISpawnGroup + 2))(this->m_pSpawnGroup);
}


// CMapSpawnGroup::GetEntityLumpName  (line 181, @0x0000000001f38360, libserver.so)
const char *__fastcall CMapSpawnGroup::GetEntityLumpName(const CMapSpawnGroup *const this)
{
  return (*(this->m_pSpawnGroup->_vptr_ISpawnGroup + 1))(this->m_pSpawnGroup);
}


// CMapSpawnGroup::GetWorldName  (line 186, @0x0000000001f38380, libserver.so)
const char *__fastcall CMapSpawnGroup::GetWorldName(const CMapSpawnGroup *const this)
{
  return this->m_pSpawnGroup->GetWorldName();
}


// CMapSpawnGroup::GetParentNameFixup  (line 191, @0x0000000001f38390, libserver.so)
const char *__fastcall CMapSpawnGroup::GetParentNameFixup(const CMapSpawnGroup *const this)
{
  return (*(this->m_pSpawnGroup->_vptr_ISpawnGroup + 6))(this->m_pSpawnGroup);
}


// CMapSpawnGroup::GetSpawnGroupDesc  (line 196, @0x0000000001f383b0, libserver.so)
void __fastcall CMapSpawnGroup::GetSpawnGroupDesc(const CMapSpawnGroup *const this, SpawnGroupDesc_t *pDesc)
{
  (*(this->m_pSpawnGroup->_vptr_ISpawnGroup + 19))(this->m_pSpawnGroup, pDesc);
}


// CMapSpawnGroup::GetLocalNameFixup  (line 201, @0x0000000001f383d0, libserver.so)
const char *__fastcall CMapSpawnGroup::GetLocalNameFixup(const CMapSpawnGroup *const this)
{
  return (*(this->m_pSpawnGroup->_vptr_ISpawnGroup + 7))(this->m_pSpawnGroup);
}


// CMapSpawnGroup::GetWorldOffset  (line 206, @0x0000000001f383f0, libserver.so)
const matrix3x4a_t *__fastcall CMapSpawnGroup::GetWorldOffset(const CMapSpawnGroup *const this)
{
  return (*(this->m_pSpawnGroup->_vptr_ISpawnGroup + 4))(this->m_pSpawnGroup);
}


// CMapSpawnGroup::GetOwnerSpawnGroup  (line 211, @0x0000000001f38410, libserver.so)
SpawnGroupHandle_t __fastcall CMapSpawnGroup::GetOwnerSpawnGroup(const CMapSpawnGroup *const this)
{
  return (*(this->m_pSpawnGroup->_vptr_ISpawnGroup + 8))(this->m_pSpawnGroup);
}


// CMapSpawnGroup::GetWorldGroupId  (line 216, @0x0000000001f38430, libserver.so)  // inlines: CUtlStringToken, GetSpawnGroupDesc, SetToIdentity, SpawnGroupDesc_t
// calls: SetIdentityMatrix
// callers: CSpawnGroupMgrGameSystem::SpawnGroupActuallySpawnEntities
WorldGroupId_t __fastcall CMapSpawnGroup::GetWorldGroupId(const CMapSpawnGroup *const this)
{
  SpawnGroupDesc_t desc; // [rsp+0h] [rbp-B0h] BYREF

  desc.m_bCreateClientEntitiesOnLaterConnectingClients = 0;
  memset(&desc.m_pWorldName, 0, 72);
  desc.m_iPriorityLoader = -2;
  desc.m_manifestLoadPriority = ResourceManifestLoadPriority_t::RESOURCE_MANIFEST_LOAD_PRIORITY_DEFAULT;
  desc.m_flTimeoutInterval = 0.0;
  desc.m_pSaveFileName = 0;
  desc.m_bDontSpawnEntities = 0;
  desc.m_bBlockUntilLoaded = 0;
  desc.m_bLoadStreamingData = 1;
  desc.m_bCreateNewSceneWorld = 0;
  desc.m_bManualCompletion = 0;
  desc.m_bSetActivePostLoad = 0;
  SetIdentityMatrix(&desc.m_vecWorldOffset);
  (*(this->m_pSpawnGroup->_vptr_ISpawnGroup + 19))(this->m_pSpawnGroup, &desc);
  return desc.m_worldGroupId.m_nHashCode;
}


// CMapSpawnGroup::DontSpawnEntities  (line 223, @0x0000000001f38500, libserver.so)
bool __fastcall CMapSpawnGroup::DontSpawnEntities(const CMapSpawnGroup *const this)
{
  return (*(this->m_pSpawnGroup->_vptr_ISpawnGroup + 16))(this->m_pSpawnGroup);
}


// CMapSpawnGroup::GetCreationTick  (line 228, @0x0000000001f38520, libserver.so)
int __fastcall CMapSpawnGroup::GetCreationTick(const CMapSpawnGroup *const this)
{
  return (*(this->m_pSpawnGroup->_vptr_ISpawnGroup + 13))(this->m_pSpawnGroup);
}


// CMapSpawnGroup::GetDestructionTick  (line 233, @0x0000000001f38540, libserver.so)
int __fastcall CMapSpawnGroup::GetDestructionTick(const CMapSpawnGroup *const this)
{
  return (*(this->m_pSpawnGroup->_vptr_ISpawnGroup + 15))(this->m_pSpawnGroup);
}


// CMapSpawnGroup::HasWorldGeometry  (line 238, @0x0000000001f38560, libserver.so)
// callers: CSpawnGroupMgrGameSystem::SpawnGroupHasWorldGeometry
bool __fastcall CMapSpawnGroup::HasWorldGeometry(const CMapSpawnGroup *const this)
{
  ISpawnGroup *m_pSpawnGroup; // rdi
  __int64 v3; // rax

  m_pSpawnGroup = this->m_pSpawnGroup;
  if ( m_pSpawnGroup == 0 || (*(m_pSpawnGroup->_vptr_ISpawnGroup + 11))(m_pSpawnGroup) == 0 )
    return 0;
  v3 = (*(this->m_pSpawnGroup->_vptr_ISpawnGroup + 11))(this->m_pSpawnGroup);
  return (*(*v3 + 72LL))(v3);
}


// CMapSpawnGroup::SetLoadingSpawnGroup  (line 249, @0x0000000001f385b0, libserver.so)
void __fastcall CMapSpawnGroup::SetLoadingSpawnGroup(
        CMapSpawnGroup *const this,
        ILoadingSpawnGroup *pLoadingSpawnGroup)
{
  (*(this->m_pSpawnGroup->_vptr_ISpawnGroup + 10))(this->m_pSpawnGroup, pLoadingSpawnGroup);
}


// CMapSpawnGroup::AddChildSpawnGroup  (line 254, @0x0000000001f385d0, libserver.so)
void __fastcall CMapSpawnGroup::AddChildSpawnGroup(CMapSpawnGroup *const this, SpawnGroupHandle_t hChildSpawnGroup)
{
  (*(this->m_pSpawnGroup->_vptr_ISpawnGroup + 23))(this->m_pSpawnGroup, hChildSpawnGroup);
}


// CMapSpawnGroup::SpawnLoadingEntities  (line 259, @0x0000000001f385f0, libserver.so)
// calls: CGameEntitySystem::SpawnLoadingEntities
// callers: CSpawnGroupMgrGameSystem::SpawnGroupActuallySpawnEntities
void __fastcall CMapSpawnGroup::SpawnLoadingEntities(
        CMapSpawnGroup *const this,
        CUtlVector<CEntityHandle,CUtlMemory<CEntityHandle,int> > *pEntitiesSpawned)
{
  ILoadingSpawnGroup *v3; // rax

  v3 = (*(this->m_pSpawnGroup->_vptr_ISpawnGroup + 9))(this->m_pSpawnGroup);
  if ( v3 != 0 )
    CGameEntitySystem::SpawnLoadingEntities(g_pGameEntitySystem, v3, pEntitiesSpawned);
}


// CMapSpawnGroup::ReleaseLoadingEntities  (line 268, @0x0000000001f38630, libserver.so)  // inlines: SetLoadingSpawnGroup
// callers: CSpawnGroupMgrGameSystem::SpawnGroupActuallySpawnEntities
void __fastcall CMapSpawnGroup::ReleaseLoadingEntities(CMapSpawnGroup *const this)
{
  __int64 v2; // rax

  v2 = (*(this->m_pSpawnGroup->_vptr_ISpawnGroup + 9))(this->m_pSpawnGroup);
  if ( v2 != 0 )
  {
    (*(*v2 + 88LL))(v2);
    (*(this->m_pSpawnGroup->_vptr_ISpawnGroup + 10))(this->m_pSpawnGroup, 0);
  }
}


// CMapSpawnGroup::Describe  (line 278, @0x0000000001f38680, libserver.so)
CUtlString __fastcall CMapSpawnGroup::Describe(__int64 a1, CMapSpawnGroup *const this)
{
  (*(this->m_pSpawnGroup->_vptr_ISpawnGroup + 12))();
  return a1;
}


// CMapSpawnGroup::IsActiveSpawnGroup  (line 283, @0x0000000001f386a0, libserver.so)  // inlines: GetSpawnGroupHandle
// calls: CEntitySystem::GetActiveSpawnGroupHandle
bool __fastcall CMapSpawnGroup::IsActiveSpawnGroup(const CMapSpawnGroup *const this)
{
  int v1; // ebx

  v1 = (*(this->m_pSpawnGroup->_vptr_ISpawnGroup + 3))(this->m_pSpawnGroup);
  return CEntitySystem::GetActiveSpawnGroupHandle(g_pGameEntitySystem) == v1;
}


// CMapSpawnGroup::IsReadyToSpawnEntities  (line 288, @0x0000000001f386d0, libserver.so)
bool __fastcall CMapSpawnGroup::IsReadyToSpawnEntities(const CMapSpawnGroup *const this)
{
  return (*(this->m_pSpawnGroup->_vptr_ISpawnGroup + 25))(this->m_pSpawnGroup);
}


// CMapSpawnGroup::FindEntitiesByType<CInfoSpawnGroupLandmark>  (line 347, @0x0000000001f9b220, libserver.so)  // inlines: AddToTail, CopyConstruct<CInfoSpawnGroupLandmark*>, Element, GetEntityIdentity, GetEntryIndex, GetInstance, GrowMemory, IndexToIdentity, IsValid, LookupEntity, operator CEntityIdentity*, operator[]
// calls: __dynamic_cast, CUtlMemory<CInfoSpawnGroupLandmark*, int>::Grow
// callers: CMapSpawnGroup::OnSpawnGroupLoad
// globals: CEntityHandle::gm_pEntityList, `typeinfo for'CInfoSpawnGroupLandmark
void __fastcall CMapSpawnGroup::FindEntitiesByType<CInfoSpawnGroupLandmark>(
        CMapSpawnGroup *const this,
        const CUtlVector<CEntityHandle,CUtlMemory<CEntityHandle,int> > *const list,
        CUtlVector<CInfoSpawnGroupLandmark*,CUtlMemory<CInfoSpawnGroupLandmark*,int> > *const instances)
{
  CUtlVectorBase<CInfoSpawnGroupLandmark*,CUtlMemory<CInfoSpawnGroupLandmark*,int> >::CAllocator *p_m_Memory; // r13
  __int64 i; // rbx
  CEntityHandle *v7; // rdx
  uint32 m_Index; // eax
  __int16 v9; // cx
  CEntityIdentity *v10; // rdx
  CEntityIdentity *v11; // rdx
  CInfoSpawnGroupLandmark *v12; // rax
  __int64 m_Size; // r14
  int v14; // edx
  CInfoSpawnGroupLandmark **v15; // rdx
  CInfoSpawnGroupLandmark *pInstance; // [rsp+8h] [rbp-38h]

  p_m_Memory = &instances->m_Memory;
  for ( i = 0; list->m_Size > i; ++i )
  {
    while ( 1 )
    {
      v7 = &list->m_Memory.m_pMemory[i];
      m_Index = v7->m_Index;
      if ( v7->m_Index + 2 > 1 )
      {
        v9 = v7->m_Index;
        v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v7->m_Index) >> 9) & 0x3F];
        if ( v10 != 0 )
        {
          v11 = &v10[v9 & 0x1FF];
          if ( v11 != 0 && m_Index == v11->m_EHandle.m_Index && v11->m_pInstance != 0 )
          {
            v12 = __dynamic_cast(
                    v11->m_pInstance,
                    &`typeinfo for'CEntityInstance,
                    &`typeinfo for'CInfoSpawnGroupLandmark,
                    0);
            if ( v12 != 0 )
            {
              m_Size = instances->m_Size;
              v14 = instances->m_Size;
              if ( m_Size == instances->m_Memory.m_nAllocationCount )
              {
                pInstance = v12;
                CUtlMemory<CInfoSpawnGroupLandmark *,int>::Grow(p_m_Memory, 1);
                v14 = instances->m_Size;
                v12 = pInstance;
              }
              instances->m_Size = v14 + 1;
              v15 = &instances->m_Memory.m_pMemory[m_Size];
              if ( v15 != 0 )
                break;
            }
          }
        }
      }
      if ( list->m_Size <= ++i )
        return;
    }
    *v15 = v12;
  }
}


// CMapSpawnGroup::OnSpawnGroupPrecache  (line 382, @0x0000000001f386f0, libserver.so)
void __fastcall CMapSpawnGroup::OnSpawnGroupPrecache(CMapSpawnGroup *const this)
{
  this->m_bSpawnGroupPrecacheDispatched = 1;
}


// CMapSpawnGroup::OnSpawnGroupLoad  (line 388, @0x0000000001f61d90, libserver.so)  // inlines: AddToTail, BitVec_IsBitSet, CBitVec, CBitVecT, CEntityHandle, CHandle, CUtlMemory, CUtlString, CUtlStringToken, CUtlVector, CUtlVectorBase, ClearAll, CopyConstruct<CInfoSpawnGroupLoadUnload*>, CopyConstruct<SpawnGroupConnectionInfo_t>, Defaults, DescribeSpawnGroupHandle, Element, FindEntityByNameInList<CInfoSpawnGroupLandmark>, GetEHandle, GetEntityNameAsCStr, GetEntryIndex, GetName, GetSerialNumber, GetSpawnGroupHandle, GrowMemory, IsClientOnlySpawnGroup, IsEmpty, IsInPVS, LeafCodeInfo_t, MakeStringToken, Purge, RemoveAll, Set, SpawnGroupConnectionInfo_t, SpawnGroupHasWorldGeomemtry, String, entindex, memset, operator=, operator[], vis_info_t, ~CUtlMemory, ~CUtlString, ~CUtlVector, ~CUtlVectorBase, ~SpawnGroupConnectionInfo_t
// calls: CGameEntitySystem::FindEntityByClassname, __dynamic_cast, CUtlMemory<CInfoSpawnGroupLoadUnload*, int>::Grow, CMapSpawnGroup::FindEntitiesByType<CInfoSpawnGroupLandmark>, CInfoSpawnGroupLoadUnload::GetLandmarkName, CInfoSpawnGroupLoadUnload::GetSpawnGroupName, CEntityIdentity::NameMatches, CBaseEntity::GetAbsOrigin, CUtlString::operator=, CUtlString::Get, CSpawnGroupMgrGameSystem::Get, LoggingSystem_IsChannelEnabled (27 total)
// callers: CSpawnGroupMgrGameSystem::SpawnGroupActuallySpawnEntities
// strings: "info_spawngroup_load", "backward", "%s(%s):  Found %s connection to %s:  %s at %f %f %f\n", "CMapSpawnGroup::OnPostSpawnGroupLoad:  Misconfigured CInfoSpawnGroupLoadUnload(%d), could, "???", "../../public/scenesystem/iscenesystem.h" (8 total)
// globals: g_pSpawnGroupMgr, LOG_SPAWN_GROUP
void __fastcall CMapSpawnGroup::OnSpawnGroupLoad(
        CMapSpawnGroup *const this,
        const EventPostSpawnGroupLoad_t *const msg)
{
  char *m_pString; // rax
  CBaseEntity *j; // rbx
  CInfoSpawnGroupLoadUnload **v5; // rax
  CInfoSpawnGroupLoadUnload *v6; // r13
  __int64 m_Size; // r12
  int v8; // eax
  CInfoSpawnGroupLoadUnload *v9; // r14
  __int64 v10; // rbx
  int v11; // r12d
  CInfoSpawnGroupLandmark *v12; // r13
  const CEntityIdentity *m_pEntity; // rdi
  CEntityIdentity *v14; // rdx
  int v15; // eax
  __int16 v16; // cx
  CEntityIdentity *v17; // rax
  int v18; // edx
  __int16 v19; // cx
  void (__fastcall *v20)(vis_info_t *, IPVS *, const Vector *, _QWORD); // rbx
  const Vector *AbsOrigin; // rax
  CEntityIdentity *v22; // rax
  SpawnGroupHandle_t m_hSpawnGroup; // edx
  CEntityIdentity *v24; // rax
  SpawnGroupHandle_t v25; // eax
  bool v26; // zf
  IPVS *m_pPVS; // rax
  __int64 (__fastcall *v28)(IPVS *, const Vector *); // rbx
  const Vector *v29; // rax
  const char *m_pAsString; // rsi
  CEntityIdentity *v31; // rax
  const char *v32; // rax
  uint32 v33; // r12d
  const char *v34; // rbx
  CEntityIdentity *v35; // rax
  SpawnGroupHandle_t v36; // esi
  CMapSpawnGroup *v37; // rax
  const char *v38; // rax
  double z; // r14
  const char *v40; // r12
  double x; // r13
  int v42; // eax
  const char *v43; // rbx
  __int64 v44; // rax
  __int64 v45; // rbx
  int v46; // eax
  SpawnGroupConnectionInfo_t *v47; // rbx
  int m_nSpawnGroupCacheMarker; // eax
  const char *v49; // rax
  __int64 v50; // rax
  const char *v51; // rax
  int v52; // edi
  __int64 v53; // r10
  int k; // r11d
  SpawnGroupConnectionInfo_t *m_pMemory; // rcx
  SpawnGroupConnectionInfo_t *v56; // r12
  __int64 v57; // rdx
  int v58; // eax
  int m_nClusterForLandmark; // ecx
  unsigned int m_uVisBitsBufSize; // esi
  const uint32 *m_pVisBits; // r9
  unsigned int v62; // r13d
  CEntityIndex v63; // eax
  void (__fastcall *v64)(CSpawnGroupMgrGameSystem *, _QWORD); // rbx
  unsigned int v65; // eax
  int v66; // ebx
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // rdi
  __int64 v70; // rsi
  int v71; // edx
  int v72; // ecx
  int v73; // ebx
  int v74; // esi
  int v75; // r8d
  int v76; // r9d
  uint32 v77; // eax
  char v78; // [rsp+0h] [rbp-150h]
  double y; // [rsp+18h] [rbp-138h]
  const char *pLink; // [rsp+38h] [rbp-118h]
  __int64 v81; // [rsp+40h] [rbp-110h]
  int i; // [rsp+4Ch] [rbp-104h]
  const char *pLandmarkNamea; // [rsp+58h] [rbp-F8h]
  CUtlString v85[2]; // [rsp+60h] [rbp-F0h] BYREF
  CUtlVector<CInfoSpawnGroupLandmark*,CUtlMemory<CInfoSpawnGroupLandmark*,int> > landmarks; // [rsp+70h] [rbp-E0h] BYREF
  CUtlVector<CInfoSpawnGroupLoadUnload*,CUtlMemory<CInfoSpawnGroupLoadUnload*,int> > list; // [rsp+90h] [rbp-C0h] BYREF
  vis_info_t v88; // [rsp+B0h] [rbp-A0h] BYREF
  SpawnGroupConnectionInfo_t entry; // [rsp+D0h] [rbp-80h] BYREF

  this->m_bSpawnGroupLoadDispatched = 1;
  if ( msg->m_SpawnGroupName.m_pString != 0 && *msg->m_SpawnGroupName.m_pString != 0 )
  {
    m_pString = msg->m_EntityLumpName.m_pString;
    if ( m_pString == 0 || *m_pString == 0 )
    {
      if ( (*(this->m_pSpawnGroup->_vptr_ISpawnGroup + 24))() != 0 )
      {
        v64 = *(g_pSpawnGroupMgr->_vptr_IGameSpawnGroupMgr + 8);
        v65 = (*(this->m_pSpawnGroup->_vptr_ISpawnGroup + 3))(this->m_pSpawnGroup);
        v64(g_pSpawnGroupMgr, v65);
      }
      landmarks.m_Size = 0;
      landmarks.m_Memory.m_pMemory = 0;
      landmarks.m_Memory.m_nAllocationCount = 0;
      landmarks.m_Memory.m_nGrowSize = 0;
      list.m_Size = 0;
      list.m_Memory.m_pMemory = 0;
      list.m_Memory.m_nAllocationCount = 0;
      list.m_Memory.m_nGrowSize = 0;
      for ( j = CGameEntitySystem::FindEntityByClassname(g_pGameEntitySystem, 0, "info_spawngroup_load");
            j != 0;
            j = CGameEntitySystem::FindEntityByClassname(g_pGameEntitySystem, j, "info_spawngroup_load") )
      {
        v6 = __dynamic_cast(j, &`typeinfo for'CBaseEntity, &`typeinfo for'CInfoSpawnGroupLoadUnload, 0);
        if ( v6 != 0 )
        {
          m_Size = list.m_Size;
          v8 = list.m_Size;
          if ( list.m_Size == list.m_Memory.m_nAllocationCount )
          {
            CUtlMemory<CInfoSpawnGroupLoadUnload *,int>::Grow(&list.m_Memory, 1);
            v8 = list.m_Size;
          }
          list.m_Size = v8 + 1;
          v5 = &list.m_Memory.m_pMemory[m_Size];
          if ( v5 != 0 )
            *v5 = v6;
        }
      }
      CMapSpawnGroup::FindEntitiesByType<CInfoSpawnGroupLandmark>(this, &msg->m_EntityList, &landmarks);
      if ( list.m_Size > 0 )
      {
        v81 = 0;
        i = 0;
        while ( 1 )
        {
          v9 = list.m_Memory.m_pMemory[v81];
          if ( v9 != 0 )
            break;
LABEL_59:
          ++i;
          ++v81;
          if ( list.m_Size <= i )
            goto LABEL_60;
        }
        pLandmarkNamea = CInfoSpawnGroupLoadUnload::GetLandmarkName(list.m_Memory.m_pMemory[v81]);
        pLink = CInfoSpawnGroupLoadUnload::GetSpawnGroupName(v9);
        if ( landmarks.m_Size <= 0 )
        {
LABEL_77:
          if ( LoggingSystem_IsChannelEnabled(LOG_SERVER, 2) != 0 )
          {
            v63.m_Data = CEntityInstance::GetEntityIndex(v9).m_Data;
            LoggingSystem_Log(
              LOG_SERVER,
              2,
              "CMapSpawnGroup::OnPostSpawnGroupLoad:  Misconfigured CInfoSpawnGroupLoadUnload(%d), couldn't find landmark named %s\n",
              v63.m_Data,
              pLandmarkNamea);
          }
          goto LABEL_59;
        }
        v10 = 0;
        v11 = 0;
        while ( 1 )
        {
          v12 = landmarks.m_Memory.m_pMemory[v10];
          m_pEntity = v12->m_pEntity;
          if ( m_pEntity->m_name.u.m_Id != 0 && CEntityIdentity::NameMatches(m_pEntity, pLandmarkNamea) )
            break;
          ++v11;
          ++v10;
          if ( v11 >= landmarks.m_Size )
            goto LABEL_77;
        }
        entry.m_pSpawnGroup = 0;
        entry.m_nSpawnGroupCacheMarker = -1;
        entry.m_SpawnGroupName.m_pString = 0;
        entry.m_hLandMark.m_Index = -1;
        entry.m_hSpawnGroupLoad.m_Index = -1;
        entry.m_LandmarkPVS.m_pVisBits = 0;
        entry.m_LandmarkPVS.m_uVisBitsBufSize = 0;
        entry.m_LandmarkPVS.m_flVisibleRadius = 3.4028235e38;
        entry.m_LandmarkPVS.m_SpawnGroupHandle = 0;
        entry.m_LandmarkName.m_pString = 0;
        entry.m_LandmarkStringToken.m_nHashCode = 0;
        entry.m_nClusterForLandmark = -1;
        entry.m_unConnectionBits.m_Ints[0] = 0;
        entry.m_bForwardLink = 1;
        v14 = v12->m_pEntity;
        if ( v14 != 0 )
        {
          v15 = (v14->m_EHandle.m_Index >> 15) - (v14->m_flags & 1);
          v16 = 0x7FFF;
          if ( v14->m_EHandle.m_Index != -1 )
            v16 = v14->m_EHandle.m_Index & 0x7FFF;
          LOWORD(entry.m_hLandMark.m_Index) = v16 | entry.m_hLandMark.m_Index & 0x8000;
          entry.m_hLandMark.m_Index = (v15 << 15) | entry.m_hLandMark.m_Index & 0x7FFF;
        }
        v17 = v9->m_pEntity;
        if ( v17 != 0 )
        {
          v18 = (v17->m_EHandle.m_Index >> 15) - (v17->m_flags & 1);
          v19 = 0x7FFF;
          if ( v17->m_EHandle.m_Index != -1 )
            v19 = v17->m_EHandle.m_Index & 0x7FFF;
          LOWORD(entry.m_hSpawnGroupLoad.m_Index) = v19 | entry.m_hSpawnGroupLoad.m_Index & 0x8000;
          entry.m_hSpawnGroupLoad.m_Index = (v18 << 15) | entry.m_hSpawnGroupLoad.m_Index & 0x7FFF;
        }
        v20 = *(*this->m_pPVS + 24LL);
        AbsOrigin = CBaseEntity::GetAbsOrigin(v12);
        v20(&v88, this->m_pPVS, AbsOrigin, 0);
        entry.m_LandmarkPVS = v88;
        v22 = v9->m_pEntity;
        if ( v22 != 0 )
        {
          m_hSpawnGroup = v22->m_hSpawnGroup;
          v24 = v12->m_pEntity;
          if ( v24 != 0 )
          {
LABEL_33:
            v25 = v24->m_hSpawnGroup;
LABEL_34:
            v26 = m_hSpawnGroup == v25;
            m_pPVS = this->m_pPVS;
            entry.m_bForwardLink = v26;
            v28 = *(*m_pPVS + 56LL);
            v29 = CBaseEntity::GetAbsOrigin(v12);
            entry.m_nClusterForLandmark = v28(this->m_pPVS, v29);
            m_pAsString = "";
            v31 = v12->m_pEntity;
            if ( v31->m_name.u.m_Id != 0 )
              m_pAsString = v31->m_name.u.m_pAsString;
            CUtlString::operator=(&entry.m_LandmarkName, m_pAsString);
            v32 = CUtlString::Get(&entry.m_LandmarkName);
            v33 = 0;
            v34 = v32;
            if ( v32 != 0 && *v32 != 0 )
            {
              v33 = MurmurHash2LowerCase(v32, 0x31415926u);
              if ( g_bUpdateStringTokenDatabase )
                RegisterStringToken(v33, v34, 0, 1);
            }
            entry.m_LandmarkStringToken.m_nHashCode = v33;
            entry.m_unConnectionBits.m_Ints[0] = 0;
            v35 = v9->m_pEntity;
            if ( v35 != 0 )
              v36 = v35->m_hSpawnGroup;
            else
              v36 = 0;
            v37 = CSpawnGroupMgrGameSystem::Get(g_pSpawnGroupMgr, v36);
            if ( !entry.m_bForwardLink )
            {
              if ( v37 != 0 )
                v38 = v37->m_pSpawnGroup->GetWorldName();
              else
                v38 = "???";
              pLink = v38;
            }
            CUtlString::operator=(&entry.m_SpawnGroupName, pLink);
            if ( LoggingSystem_IsChannelEnabled(LOG_SPAWN_GROUP, 0) != 0 )
            {
              z = CBaseEntity::GetAbsOrigin(v12)->z;
              y = CBaseEntity::GetAbsOrigin(v12)->y;
              v40 = "forward";
              x = CBaseEntity::GetAbsOrigin(v12)->x;
              if ( !entry.m_bForwardLink )
                v40 = "backward";
              v42 = (*(this->m_pSpawnGroup->_vptr_ISpawnGroup + 3))(this->m_pSpawnGroup);
              v85[0].m_pString = 0;
              if ( v42 + 0x80000000 > 0x7FFFFFFE )
                CUtlString::Format(v85, "%u", v42);
              else
                CUtlString::Format(v85, &stru_32D9EEC.m_mapLevelWorlds.m_Tree.m_Elements.m_nGrowSize + 3);
              v43 = CUtlString::Get(v85);
              v44 = this->m_pSpawnGroup->GetWorldName();
              v78 = pLink;
              LoggingSystem_Log(
                LOG_SPAWN_GROUP,
                0,
                "%s(%s):  Found %s connection to %s:  %s at %f %f %f\n",
                v44,
                v43,
                v40,
                x,
                y,
                z);
              if ( v85[0].m_pString != 0 )
                CUtlString::FreeMemoryBlock(v85);
            }
            v45 = this->m_Connections.m_Size;
            v46 = this->m_Connections.m_Size;
            if ( v45 == this->m_Connections.m_Memory.m_nAllocationCount )
            {
              CUtlMemory<SpawnGroupConnectionInfo_t,int>::Grow(&this->m_Connections.m_Memory, 1);
              v46 = this->m_Connections.m_Size;
            }
            this->m_Connections.m_Size = v46 + 1;
            v47 = &this->m_Connections.m_Memory.m_pMemory[v45];
            if ( v47 != 0 )
            {
              v47->m_pSpawnGroup = entry.m_pSpawnGroup;
              m_nSpawnGroupCacheMarker = entry.m_nSpawnGroupCacheMarker;
              v47->m_SpawnGroupName.m_pString = 0;
              v47->m_nSpawnGroupCacheMarker = m_nSpawnGroupCacheMarker;
              v49 = CUtlString::Get(&entry.m_SpawnGroupName);
              CUtlString::Set(&v47->m_SpawnGroupName, v49);
              v47->m_hLandMark.m_Index = entry.m_hLandMark.m_Index;
              v47->m_hSpawnGroupLoad.m_Index = entry.m_hSpawnGroupLoad.m_Index;
              v47->m_LandmarkPVS.m_pVisBits = entry.m_LandmarkPVS.m_pVisBits;
              *&v47->m_LandmarkPVS.m_uVisBitsBufSize = *&entry.m_LandmarkPVS.m_uVisBitsBufSize;
              v50 = *&entry.m_LandmarkPVS.m_SpawnGroupHandle;
              v47->m_LandmarkName.m_pString = 0;
              *&v47->m_LandmarkPVS.m_SpawnGroupHandle = v50;
              v51 = CUtlString::Get(&entry.m_LandmarkName);
              CUtlString::Set(&v47->m_LandmarkName, v51);
              v47->m_LandmarkStringToken.m_nHashCode = entry.m_LandmarkStringToken.m_nHashCode;
              v47->m_nClusterForLandmark = entry.m_nClusterForLandmark;
              v47->m_unConnectionBits.m_Ints[0] = entry.m_unConnectionBits.m_Ints[0];
              v47->m_bForwardLink = entry.m_bForwardLink;
            }
            if ( entry.m_LandmarkName.m_pString != 0 )
              CUtlString::FreeMemoryBlock(&entry.m_LandmarkName);
            if ( entry.m_SpawnGroupName.m_pString != 0 )
              CUtlString::FreeMemoryBlock(&entry.m_SpawnGroupName);
            goto LABEL_59;
          }
        }
        else
        {
          v24 = v12->m_pEntity;
          m_hSpawnGroup = 0;
          if ( v24 != 0 )
            goto LABEL_33;
        }
        v25 = 0;
        goto LABEL_34;
      }
LABEL_60:
      v52 = this->m_Connections.m_Size;
      v53 = 0;
      for ( k = 0; v52 > k; ++v53 )
      {
        m_pMemory = this->m_Connections.m_Memory.m_pMemory;
        v56 = &m_pMemory[v53];
        if ( v52 <= 0 )
          break;
        v57 = 0;
        v58 = 0;
        while ( 1 )
        {
          m_nClusterForLandmark = m_pMemory[v57].m_nClusterForLandmark;
          if ( m_nClusterForLandmark >= 0 )
          {
            m_uVisBitsBufSize = v56->m_LandmarkPVS.m_uVisBitsBufSize;
            if ( m_uVisBitsBufSize != 0 )
            {
              m_pVisBits = v56->m_LandmarkPVS.m_pVisBits;
              if ( m_pVisBits != 0 )
              {
                v62 = m_nClusterForLandmark >> 3;
                if ( m_uVisBitsBufSize < m_nClusterForLandmark >> 3 )
                {
                  v66 = m_nClusterForLandmark;
                  if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
                  {
                    v77 = v56->m_LandmarkPVS.m_uVisBitsBufSize;
                    entry.m_pSpawnGroup = "../../public/scenesystem/iscenesystem.h";
                    entry.m_SpawnGroupName.m_pString = "IsInPVS";
                    entry.m_nSpawnGroupCacheMarker = 265;
                    LoggingSystem_Log(
                      LOG_GENERAL,
                      LoggingSeverity_t::LS_ERROR,
                      &entry,
                      "CheckOriginInPVS:  cluster would read past end of pvs data (cluster %d, offset %u:%u)\n",
                      v66,
                      v62,
                      v77);
                  }
                  if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v69, v70, v67, v68) != 0 )
                    loc_0 = -559038737;
                  v73 = Plat_ExitProcess(1);
                  list.m_Size = 0;
                  if ( (list.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
                  {
                    CUtlMemory<CInfoSpawnGroupLoadUnload *,int>::Purge(&list.m_Memory);
                    if ( (list.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
                      CUtlMemory<CInfoSpawnGroupLoadUnload *,int>::Purge(&list.m_Memory);
                  }
                  landmarks.m_Size = 0;
                  if ( (landmarks.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
                  {
                    CUtlMemory<CInfoSpawnGroupLandmark *,int>::Purge(&landmarks.m_Memory);
                    if ( (landmarks.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
                      CUtlMemory<CInfoSpawnGroupLandmark *,int>::Purge(&landmarks.m_Memory);
                  }
                  Unwind_Resume(v73, v74, v71, v72, v75, v76, v78);
                }
                if ( ((1 << m_nClusterForLandmark) & m_pVisBits[m_nClusterForLandmark >> 5]) != 0 )
                {
                  v56->m_unConnectionBits.m_Ints[v58 >> 5] |= 1 << v58;
                  v52 = this->m_Connections.m_Size;
                }
              }
            }
          }
          ++v58;
          ++v57;
          if ( v52 <= v58 )
            break;
          m_pMemory = this->m_Connections.m_Memory.m_pMemory;
        }
        ++k;
      }
      list.m_Size = 0;
      if ( (list.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      {
        CUtlMemory<CInfoSpawnGroupLoadUnload *,int>::Purge(&list.m_Memory);
        if ( (list.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
          CUtlMemory<CInfoSpawnGroupLoadUnload *,int>::Purge(&list.m_Memory);
      }
      landmarks.m_Size = 0;
      if ( (landmarks.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      {
        CUtlMemory<CInfoSpawnGroupLandmark *,int>::Purge(&landmarks.m_Memory);
        if ( (landmarks.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
          CUtlMemory<CInfoSpawnGroupLandmark *,int>::Purge(&landmarks.m_Memory);
      }
    }
  }
}


// CMapSpawnGroup::GetConnectionCount  (line 495, @0x0000000001f38700, libserver.so)
// callers: CNetworkTransmitComponent::IsInPVS
int __fastcall CMapSpawnGroup::GetConnectionCount(const CMapSpawnGroup *const this)
{
  return this->m_Connections.m_Size;
}


// CMapSpawnGroup::GetConnection  (line 500, @0x0000000001f38710, libserver.so)  // inlines: operator[]
// callers: CNetworkTransmitComponent::IsInPVSOfConnectedSpawnGroup_R, CNetworkTransmitComponent::IsInPVS
const SpawnGroupConnectionInfo_t *__fastcall CMapSpawnGroup::GetConnection(
        const CMapSpawnGroup *const this,
        int nIndex)
{
  return &this->m_Connections.m_Memory.m_pMemory[nIndex];
}


// CMapSpawnGroup::FindConnectionByLandmarkName  (line 505, @0x0000000001f38730, libserver.so)  // inlines: operator==, operator[]
// calls: CUtlString::IsEqual_CaseSensitive
const SpawnGroupConnectionInfo_t *__fastcall CMapSpawnGroup::FindConnectionByLandmarkName(
        const CMapSpawnGroup *const this,
        const char *pLandmarkName)
{
  int v4; // r12d
  __int64 v5; // rbx
  SpawnGroupConnectionInfo_t *v6; // r14

  v4 = 0;
  v5 = 0;
  if ( this->m_Connections.m_Size <= 0 )
    return 0;
  while ( 1 )
  {
    v6 = &this->m_Connections.m_Memory.m_pMemory[v5];
    if ( CUtlString::IsEqual_CaseSensitive(&v6->m_LandmarkName, pLandmarkName) )
      break;
    ++v4;
    ++v5;
    if ( this->m_Connections.m_Size <= v4 )
      return 0;
  }
  return v6;
}


// CMapSpawnGroup::FindConnectionByLandmarkStringToken  (line 517, @0x0000000001f387c0, libserver.so)  // inlines: operator==, operator[]
// callers: CNetworkTransmitComponent::IsInPVSOfConnectedSpawnGroup_R
const SpawnGroupConnectionInfo_t *__fastcall CMapSpawnGroup::FindConnectionByLandmarkStringToken(
        const CMapSpawnGroup *const this,
        const CUtlStringToken *const token)
{
  int m_Size; // eax
  SpawnGroupConnectionInfo_t *m_pMemory; // rdi
  const SpawnGroupConnectionInfo_t *v4; // rdx
  __int64 v5; // r9
  const SpawnGroupConnectionInfo_t *result; // rax

  m_Size = this->m_Connections.m_Size;
  if ( m_Size > 0 )
  {
    m_pMemory = this->m_Connections.m_Memory.m_pMemory;
    if ( token->m_nHashCode == m_pMemory->m_LandmarkStringToken.m_nHashCode )
      return m_pMemory;
    v4 = m_pMemory + 1;
    v5 = &m_pMemory[(m_Size - 1) + 1];
    while ( v4 != v5 )
    {
      result = v4++;
      if ( v4[-1].m_LandmarkStringToken.m_nHashCode == token->m_nHashCode )
        return result;
    }
  }
  return 0;
}


// CMapSpawnGroup::GetPVS  (line 529, @0x0000000001f38820, libserver.so)
// callers: CNetworkTransmitComponent::IsInPVSOfConnectedSpawnGroup_R
IPVS *__fastcall CMapSpawnGroup::GetPVS(CMapSpawnGroup *const this)
{
  return this->m_pPVS;
}


// CMapSpawnGroup::SetPVS  (line 534, @0x0000000001f38830, libserver.so)
void __fastcall CMapSpawnGroup::SetPVS(CMapSpawnGroup *const this, IPVS *pPVS)
{
  this->m_pPVS = pPVS;
}


// CSpawnGroupMgrGameSystem::YouForgot::ToDefine_DEFINE_GAME_SYSTEM  (line 550, @0x0000000001f38840, libserver.so)
void __cdecl CSpawnGroupMgrGameSystem::YouForgot::ToDefine_DEFINE_GAME_SYSTEM()
{
  ;
}


// CSpawnGroupMgrGameSystem::CSpawnGroupMgrGameSystem  (line 552, @0x0000000001f58f70, libserver.so)  // inlines: CCommandMemberInitializer_OnSpawnGroupActivate, CCommandMemberInitializer_OnSpawnGroupList, CCommandMemberInitializer_OnSpawnGroupLoad, CCommandMemberInitializer_OnSpawnGroupSave, CCommandMemberInitializer_OnSpawnGroupUnload, CConCommandMemberAccessor, CThreadFastMutex, CUtlMap, CUtlMemory, CUtlRBTree, CUtlVector, CUtlVectorBase, ResetDbgInfo, SetLessFunc, SetOwner, ~CAutoGameSystem, ~CCommandMemberInitializer_OnSpawnGroupActivate, ~CCommandMemberInitializer_OnSpawnGroupLoad, ~CCommandMemberInitializer_OnSpawnGroupSave, ~CCommandMemberInitializer_OnSpawnGroupUnload
// calls: ConCommand::ConCommand, IGameSystem::~IGameSystem, _Unwind_Resume, CConCommandMemberAccessor<CSpawnGroupMgrGameSystem>::~CConCommandMemberAccessor
// callers: CGameSystemReallocatingFactory<CSpawnGroupMgrGameSystem, CSpawnGroupMgrGameSystem>::CreateGameSystem
// strings: "Activate specified spawngroup.", "Unload and save named spawn group."
// globals: CSpawnGroupMgrGameSystem::OnSpawnGroupActivate(CCommandContext const&,CCommand const&), CSpawnGroupMgrGameSystem::SpawnGroupActivate_CompletionFunc(char const*,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> &), CSpawnGroupMgrGameSystem::OnSpawnGroupLoad(CCommandContext const&,CCommand const&), CSpawnGroupMgrGameSystem::SpawnGroupLoad_CompletionFunc(char const*,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> &), CSpawnGroupMgrGameSystem::OnSpawnGroupUnload(CCommandContext const&,CCommand const&), CSpawnGroupMgrGameSystem::SpawnGroupUnload_CompletionFunc(char const*,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> &), CSpawnGroupMgrGameSystem::OnSpawnGroupSave(CCommandContext const&,CCommand const&), CSpawnGroupMgrGameSystem::SpawnGroupSave_CompletionFunc(char const*,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> &) (10 total)
void __fastcall CSpawnGroupMgrGameSystem::CSpawnGroupMgrGameSystem(CSpawnGroupMgrGameSystem *const this)
{
  this->_vptr_IGameSpawnGroupMgr = &off_3FCE6F0;
  this->_vptr_IGameSystem = off_3FCE7D0;
  ConCommand::ConCommand(
    &this->m_OnSpawnGroupActivate_register.m_ConCommandAccessor,
    &stru_32DB07A._vptr_IPhysicsWorldEventListener + 7,
    &this->m_OnSpawnGroupActivate_register.m_ConCommandAccessor.ICommandCallback,
    "Activate specified spawngroup.",
    0,
    &this->m_OnSpawnGroupActivate_register.m_ConCommandAccessor.ICommandCompletionCallback);
  this->m_OnSpawnGroupActivate_register.m_ConCommandAccessor.m_Func.__delta = 0;
  this->m_OnSpawnGroupActivate_register.m_ConCommandAccessor._vptr_ConCommandBase = &off_3FCCDB0;
  this->m_OnSpawnGroupActivate_register.m_ConCommandAccessor._vptr_ICommandCallback = &off_3FCCE58;
  this->m_OnSpawnGroupActivate_register.m_ConCommandAccessor._vptr_ICommandCompletionCallback = &off_3FCCE70;
  this->m_OnSpawnGroupActivate_register.m_ConCommandAccessor.m_Func.__pfn = CSpawnGroupMgrGameSystem::OnSpawnGroupActivate;
  this->m_OnSpawnGroupActivate_register.m_ConCommandAccessor.m_pOwner = this;
  this->m_OnSpawnGroupActivate_register.m_ConCommandAccessor.m_CompletionFunc.__pfn = CSpawnGroupMgrGameSystem::SpawnGroupActivate_CompletionFunc;
  this->m_OnSpawnGroupActivate_register.m_ConCommandAccessor.m_CompletionFunc.__delta = 0;
  ConCommand::ConCommand(
    &this->m_OnSpawnGroupLoad_register.m_ConCommandAccessor,
    &stru_32DB07A.m_PhysicsSpawnGroups.m_Tree.m_pElements + 4,
    &this->m_OnSpawnGroupLoad_register.m_ConCommandAccessor.ICommandCallback,
    &stru_32DB07A.m_PhysicsSpawnGroups.m_Tree.m_Elements.m_pMemory + 4,
    0,
    &this->m_OnSpawnGroupLoad_register.m_ConCommandAccessor.ICommandCompletionCallback);
  this->m_OnSpawnGroupLoad_register.m_ConCommandAccessor.m_Func.__delta = 0;
  this->m_OnSpawnGroupLoad_register.m_ConCommandAccessor._vptr_ConCommandBase = &off_3FCCDB0;
  this->m_OnSpawnGroupLoad_register.m_ConCommandAccessor._vptr_ICommandCallback = &off_3FCCE58;
  this->m_OnSpawnGroupLoad_register.m_ConCommandAccessor._vptr_ICommandCompletionCallback = &off_3FCCE70;
  this->m_OnSpawnGroupLoad_register.m_ConCommandAccessor.m_Func.__pfn = CSpawnGroupMgrGameSystem::OnSpawnGroupLoad;
  this->m_OnSpawnGroupLoad_register.m_ConCommandAccessor.m_pOwner = this;
  this->m_OnSpawnGroupLoad_register.m_ConCommandAccessor.m_CompletionFunc.__pfn = CSpawnGroupMgrGameSystem::SpawnGroupLoad_CompletionFunc;
  this->m_OnSpawnGroupLoad_register.m_ConCommandAccessor.m_CompletionFunc.__delta = 0;
  ConCommand::ConCommand(
    &this->m_OnSpawnGroupUnload_register.m_ConCommandAccessor,
    &stru_32DB07A.m_mapLevelWorlds.m_Tree.m_pElements + 7,
    &this->m_OnSpawnGroupUnload_register.m_ConCommandAccessor.ICommandCallback,
    &stru_32DB07A.m_mapLevelWorlds.m_Tree.m_Elements.m_pMemory + 5,
    0,
    &this->m_OnSpawnGroupUnload_register.m_ConCommandAccessor.ICommandCompletionCallback);
  this->m_OnSpawnGroupUnload_register.m_ConCommandAccessor.m_Func.__delta = 0;
  this->m_OnSpawnGroupUnload_register.m_ConCommandAccessor._vptr_ConCommandBase = &off_3FCCDB0;
  this->m_OnSpawnGroupUnload_register.m_ConCommandAccessor._vptr_ICommandCallback = &off_3FCCE58;
  this->m_OnSpawnGroupUnload_register.m_ConCommandAccessor._vptr_ICommandCompletionCallback = &off_3FCCE70;
  this->m_OnSpawnGroupUnload_register.m_ConCommandAccessor.m_Func.__pfn = CSpawnGroupMgrGameSystem::OnSpawnGroupUnload;
  this->m_OnSpawnGroupUnload_register.m_ConCommandAccessor.m_pOwner = this;
  this->m_OnSpawnGroupUnload_register.m_ConCommandAccessor.m_CompletionFunc.__pfn = CSpawnGroupMgrGameSystem::SpawnGroupUnload_CompletionFunc;
  this->m_OnSpawnGroupUnload_register.m_ConCommandAccessor.m_CompletionFunc.__delta = 0;
  ConCommand::ConCommand(
    &this->m_OnSpawnGroupSave_register.m_ConCommandAccessor,
    &stru_32DB07A.m_hMatDefault.m_pBinding + 2,
    &this->m_OnSpawnGroupSave_register.m_ConCommandAccessor.ICommandCallback,
    "Unload and save named spawn group.",
    0,
    &this->m_OnSpawnGroupSave_register.m_ConCommandAccessor.ICommandCompletionCallback);
  this->m_OnSpawnGroupSave_register.m_ConCommandAccessor._vptr_ConCommandBase = &off_3FCCDB0;
  this->m_OnSpawnGroupSave_register.m_ConCommandAccessor._vptr_ICommandCallback = &off_3FCCE58;
  this->m_OnSpawnGroupSave_register.m_ConCommandAccessor._vptr_ICommandCompletionCallback = &off_3FCCE70;
  this->m_OnSpawnGroupSave_register.m_ConCommandAccessor.m_Func.__pfn = CSpawnGroupMgrGameSystem::OnSpawnGroupSave;
  this->m_OnSpawnGroupSave_register.m_ConCommandAccessor.m_CompletionFunc.__pfn = CSpawnGroupMgrGameSystem::SpawnGroupSave_CompletionFunc;
  this->m_OnSpawnGroupSave_register.m_ConCommandAccessor.m_pOwner = this;
  this->m_OnSpawnGroupSave_register.m_ConCommandAccessor.m_Func.__delta = 0;
  this->m_OnSpawnGroupSave_register.m_ConCommandAccessor.m_CompletionFunc.__delta = 0;
  ConCommand::ConCommand(
    &this->m_OnSpawnGroupList_register.m_ConCommandAccessor,
    &stru_32DB07A.m_dirtyScales.m_Memory.m_nAllocationCount + 1,
    &this->m_OnSpawnGroupList_register.m_ConCommandAccessor.ICommandCallback,
    &stru_32DB07A.m_flImpactSoundTime + 3,
    0,
    0);
  this->m_OnSpawnGroupList_register.m_ConCommandAccessor._vptr_ConCommandBase = &off_3FCCDB0;
  this->m_OnSpawnGroupList_register.m_ConCommandAccessor._vptr_ICommandCallback = &off_3FCCE58;
  this->m_OnSpawnGroupList_register.m_ConCommandAccessor._vptr_ICommandCompletionCallback = &off_3FCCE70;
  this->m_OnSpawnGroupList_register.m_ConCommandAccessor.m_Func.__pfn = CSpawnGroupMgrGameSystem::OnSpawnGroupList;
  this->m_SpawnGroups.m_Tree.m_LastAlloc.index = -1;
  this->m_SpawnGroups.m_Tree.m_Root = -1;
  this->m_SpawnGroups.m_Tree.m_NumElements = 0;
  this->m_SpawnGroups.m_Tree.m_FirstFree = -1;
  this->m_OnSpawnGroupList_register.m_ConCommandAccessor.m_Func.__delta = 0;
  this->m_OnSpawnGroupList_register.m_ConCommandAccessor.m_CompletionFunc.__pfn = 0;
  this->m_OnSpawnGroupList_register.m_ConCommandAccessor.m_CompletionFunc.__delta = 0;
  this->m_OnSpawnGroupList_register.m_ConCommandAccessor.m_pOwner = this;
  this->m_SpawnEntitiesCallQueue.m_Size = 0;
  this->m_SpawnEntitiesCallQueue.m_Memory.m_pMemory = 0;
  this->m_SpawnEntitiesCallQueue.m_Memory.m_nAllocationCount = 0;
  this->m_SpawnEntitiesCallQueue.m_Memory.m_nGrowSize = 0;
  this->m_SpawnGroups.m_Tree.m_Elements.m_pMemory = 0;
  this->m_SpawnGroups.m_Tree.m_Elements.m_nAllocationCount = 0;
  this->m_SpawnGroups.m_Tree.m_Elements.m_nGrowSize = 0;
  this->m_SpawnGroups.m_Tree.m_pElements = 0;
  this->m_hHandleMutex.m_ownerID = 0;
  this->m_hHandleMutex.m_depth = 0;
  this->m_QueuedUnloadRequests.m_Size = 0;
  this->m_QueuedUnloadRequests.m_Memory.m_pMemory = 0;
  this->m_QueuedUnloadRequests.m_Memory.m_nAllocationCount = 0;
  this->m_QueuedUnloadRequests.m_Memory.m_nGrowSize = 0;
  this->m_SpawnGroups.m_Tree.m_LessFunc.m_LessFunc = CDefOps<unsigned int>::LessFunc;
}


// CSpawnGroupMgrGameSystem::GameInit  (line 557, @0x0000000001f2a370, libserver.so)
void __fastcall CSpawnGroupMgrGameSystem::GameInit(
        CSpawnGroupMgrGameSystem *const this,
        const EventGameInit_t *const msg)
{
  this->m_bQueueSpawnEntitiesCalls = 1;
}


// CSpawnGroupMgrGameSystem::GameShutdown  (line 571, @0x0000000001f2c7c0, libserver.so)  // inlines: Purge, RemoveAll
// calls: LoggingSystem_IsChannelEnabled, CUtlMemory<unsigned int, int>::Purge, LoggingSystem_Log
// strings: "CSpawnGroupMgrGameSystem: flushed %d queued entity calls\n"
void __fastcall CSpawnGroupMgrGameSystem::GameShutdown(
        CSpawnGroupMgrGameSystem *const this,
        const EventGameShutdown_t *const msg)
{
  bool v3; // zf

  if ( this->m_SpawnEntitiesCallQueue.m_Size > 0 )
  {
    if ( LoggingSystem_IsChannelEnabled(LOG_SERVER, 2) != 0 )
      LoggingSystem_Log(
        LOG_SERVER,
        2,
        "CSpawnGroupMgrGameSystem: flushed %d queued entity calls\n",
        this->m_SpawnEntitiesCallQueue.m_Size);
    v3 = (this->m_SpawnEntitiesCallQueue.m_Memory.m_nGrowSize & 0xC0000000) == 0;
    this->m_SpawnEntitiesCallQueue.m_Size = 0;
    if ( v3 )
      CUtlMemory<unsigned int,int>::Purge(&this->m_SpawnEntitiesCallQueue.m_Memory);
  }
}


// CSpawnGroupMgrGameSystem::AllocateSpawnGroup  (line 593, @0x0000000001f6e470, libserver.so)  // inlines: CAutoLockT, CMapSpawnGroup, CUtlMemory, CUtlString, CUtlVector, CUtlVectorBase, DescribeSpawnGroupHandle, Element, Find, FindInsertionPosition, Init, Insert, InsertAt, IsClientOnlySpawnGroup, LeftChild, Lock, RightChild, String, ThreadInterlockedAssignIf64, ThreadPause, TryLockInline, Unlock, operator(), operator[], ~CAutoLockT, ~CUtlString
// calls: operator new, ThreadGetCurrentId, CUtlRBTree<CUtlMap<unsigned int, CMapSpawnGroup*>::Node_t, short unsigned int, CUtlMap<unsigned int, CMapSpawnGroup*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, CMapSpawnGroup*>::Node_t, short unsigned int>, short unsigned int> >::Find, LoggingSystem_IsChannelEnabled, CUtlRBTree<CUtlMap<unsigned int, CMapSpawnGroup*>::Node_t, short unsigned int, CUtlMap<unsigned int, CMapSpawnGroup*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, CMapSpawnGroup*>::Node_t, short unsigned int>, short unsigned int> >::NewNode, CUtlRBTree<CUtlMap<unsigned int, CMapSpawnGroup*>::Node_t, short unsigned int, CUtlMap<unsigned int, CMapSpawnGroup*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, CMapSpawnGroup*>::Node_t, short unsigned int>, short unsigned int> >::LinkToParent, CThreadFastMutex::Lock(ulong long,uint), CUtlString::Format, CUtlString::Get, LoggingSystem_Log, CUtlString::FreeMemoryBlock, ThreadInterlockedExchange64 (13 total)
// strings: "SV", "%s:  CSpawnGroupMgrGameSystem::AllocateSpawnGroup( %s ):  spawn group already allocated!\
void __fastcall CSpawnGroupMgrGameSystem::AllocateSpawnGroup(
        CSpawnGroupMgrGameSystem *const this,
        SpawnGroupHandle_t h,
        ISpawnGroup *pSpawnGroup)
{
  CMapSpawnGroup *v6; // rax
  CMapSpawnGroup *v7; // r12
  __int64 v8; // rdi
  signed __int64 CurrentId; // rsi
  unsigned __int16 m_Root; // r14
  unsigned __int16 m_Right; // ax
  bool v12; // r12
  bool v13; // zf
  UtlRBTreeNode_t<CUtlMap<unsigned int,CMapSpawnGroup*>::Node_t,short unsigned int> *m_pMemory; // rax
  unsigned __int16 v15; // ax
  int m_depth; // eax
  const char *v17; // rax
  CUtlMap<unsigned int,CMapSpawnGroup*,short unsigned int,bool (*)(unsigned int const&,unsigned int const&)> *p_m_SpawnGroups; // [rsp+0h] [rbp-70h]
  CThreadFastMutex *generated_id_599; // [rsp+8h] [rbp-68h]
  CUtlString v20; // [rsp+10h] [rbp-60h] BYREF
  CUtlMap<unsigned int,CMapSpawnGroup*,short unsigned int,bool (*)(unsigned int const&,unsigned int const&)>::Node_t search; // [rsp+20h] [rbp-50h] BYREF
  CUtlMap<unsigned int,CMapSpawnGroup*,short unsigned int,bool (*)(unsigned int const&,unsigned int const&)>::Node_t pCopyFrom; // [rsp+30h] [rbp-40h] BYREF

  v6 = operator new(0x30u);
  v6->m_pSpawnGroup = pSpawnGroup;
  v7 = v6;
  v6->m_bSpawnGroupPrecacheDispatched = 0;
  v6->m_bSpawnGroupLoadDispatched = 0;
  v6->m_Connections.m_Size = 0;
  v6->m_Connections.m_Memory.m_pMemory = 0;
  v6->m_Connections.m_Memory.m_nAllocationCount = 0;
  v6->m_Connections.m_Memory.m_nGrowSize = 0;
  v6->m_pPVS = 0;
  generated_id_599 = &this->m_hHandleMutex;
  CurrentId = ThreadGetCurrentId(v8);
  if ( CurrentId != this->m_hHandleMutex.m_ownerID
    && _InterlockedCompareExchange64(&this->m_hHandleMutex, CurrentId, 0) != 0 )
  {
    _mm_pause();
    CThreadFastMutex::Lock(generated_id_599, CurrentId, 0);
  }
  else
  {
    ++this->m_hHandleMutex.m_depth;
  }
  search.key = h;
  p_m_SpawnGroups = &this->m_SpawnGroups;
  if ( CUtlRBTree<CUtlMap<unsigned int,CMapSpawnGroup *,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short,CUtlMap<unsigned int,CMapSpawnGroup *,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,CMapSpawnGroup *,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>>::Find(
         &this->m_SpawnGroups.m_Tree,
         &search) != 0xFFFF
    && LoggingSystem_IsChannelEnabled(LOG_SERVER, 2) != 0 )
  {
    v20.m_pString = 0;
    if ( h + 0x80000000 <= 0x7FFFFFFE )
      CUtlString::Format(&v20, &stru_32D9EEC.m_mapLevelWorlds.m_Tree.m_Elements.m_nGrowSize + 3);
    else
      CUtlString::Format(&v20, "%u", h);
    v17 = CUtlString::Get(&v20);
    LoggingSystem_Log(
      LOG_SERVER,
      2,
      "%s:  CSpawnGroupMgrGameSystem::AllocateSpawnGroup( %s ):  spawn group already allocated!\n",
      "SV",
      v17);
    if ( v20.m_pString != 0 )
      CUtlString::FreeMemoryBlock(&v20);
  }
  m_Root = this->m_SpawnGroups.m_Tree.m_Root;
  pCopyFrom.key = h;
  pCopyFrom.elem = v7;
  if ( m_Root != 0xFFFF )
  {
    while ( 1 )
    {
      v13 = !this->m_SpawnGroups.m_Tree.m_LessFunc.m_LessFunc(
               &pCopyFrom,
               &this->m_SpawnGroups.m_Tree.m_Elements.m_pMemory[m_Root].m_Data);
      m_pMemory = this->m_SpawnGroups.m_Tree.m_Elements.m_pMemory;
      if ( v13 )
      {
        m_Right = m_pMemory[m_Root].m_Right;
        v12 = 0;
        if ( m_Right == 0xFFFF )
          goto LABEL_12;
      }
      else
      {
        m_Right = m_pMemory[m_Root].m_Left;
        v12 = 1;
        if ( m_Right == 0xFFFF )
          goto LABEL_12;
      }
      m_Root = m_Right;
    }
  }
  v12 = 0;
LABEL_12:
  v15 = CUtlRBTree<CUtlMap<unsigned int,CMapSpawnGroup *,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short,CUtlMap<unsigned int,CMapSpawnGroup *,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,CMapSpawnGroup *,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>>::NewNode(
          &p_m_SpawnGroups->m_Tree,
          &pCopyFrom);
  CUtlRBTree<CUtlMap<unsigned int,CMapSpawnGroup *,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short,CUtlMap<unsigned int,CMapSpawnGroup *,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,CMapSpawnGroup *,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>>::LinkToParent(
    &p_m_SpawnGroups->m_Tree,
    v15,
    m_Root,
    v12);
  m_depth = this->m_hHandleMutex.m_depth;
  ++this->m_SpawnGroups.m_Tree.m_NumElements;
  this->m_hHandleMutex.m_depth = m_depth - 1;
  if ( this->m_hHandleMutex.m_depth == 0 )
    ThreadInterlockedExchange64(generated_id_599, 0);
}


// CSpawnGroupMgrGameSystem::ReleaseSpawnGroup  (line 610, @0x0000000001f6e740, libserver.so)  // inlines: CAutoLockT, Element, Find, FreeNode, Lock, Purge, RemoveAt, SetLeftChild, SetRightChild, ThreadInterlockedAssignIf64, ThreadPause, TryLockInline, Unlock, operator[], ~CAutoLockT, ~CMapSpawnGroup, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: ThreadGetCurrentId, CUtlRBTree<CUtlMap<unsigned int, CMapSpawnGroup*>::Node_t, short unsigned int, CUtlMap<unsigned int, CMapSpawnGroup*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, CMapSpawnGroup*>::Node_t, short unsigned int>, short unsigned int> >::Find, CUtlVectorBase<SpawnGroupConnectionInfo_t, CUtlMemory<SpawnGroupConnectionInfo_t, int> >::RemoveAll, operator delete, CUtlRBTree<CUtlMap<unsigned int, CMapSpawnGroup*>::Node_t, short unsigned int, CUtlMap<unsigned int, CMapSpawnGroup*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, CMapSpawnGroup*>::Node_t, short unsigned int>, short unsigned int> >::Unlink, CThreadFastMutex::Lock(ulong long,uint), ThreadInterlockedExchange64, CUtlMemory<SpawnGroupConnectionInfo_t, int>::Purge, _Unwind_Resume
// globals: CMapSpawnGroup::s_nSpawnGroupCacheMarker
void __fastcall CSpawnGroupMgrGameSystem::ReleaseSpawnGroup(CSpawnGroupMgrGameSystem *const this, SpawnGroupHandle_t h)
{
  CThreadFastMutex *p_m_hHandleMutex; // r14
  signed __int64 CurrentId; // rsi
  unsigned __int16 v6; // ax
  unsigned __int16 v7; // r14
  unsigned __int16 v8; // r12
  __int64 v9; // r15
  CUtlMap<unsigned int,CMapSpawnGroup*,short unsigned int,bool (*)(unsigned int const&,unsigned int const&)>::ElemType_t elem; // rdx
  CUtlMemory<SpawnGroupConnectionInfo_t,int> *v11; // rdx
  CUtlMemory<SpawnGroupConnectionInfo_t,int> *pMem; // [rsp+10h] [rbp-50h]
  CThreadFastMutex *generated_id_612; // [rsp+18h] [rbp-48h]
  SpawnGroupHandle_t ha; // [rsp+20h] [rbp-40h] BYREF

  p_m_hHandleMutex = &this->m_hHandleMutex;
  generated_id_612 = &this->m_hHandleMutex;
  CurrentId = ThreadGetCurrentId(this);
  if ( CurrentId != this->m_hHandleMutex.m_ownerID && _InterlockedCompareExchange64(p_m_hHandleMutex, CurrentId, 0) != 0 )
  {
    _mm_pause();
    CThreadFastMutex::Lock(generated_id_612, CurrentId, 0);
  }
  else
  {
    ++this->m_hHandleMutex.m_depth;
  }
  ha = h;
  v6 = CUtlRBTree<CUtlMap<unsigned int,CMapSpawnGroup *,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short,CUtlMap<unsigned int,CMapSpawnGroup *,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,CMapSpawnGroup *,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>>::Find(
         &this->m_SpawnGroups.m_Tree,
         &ha);
  v7 = v6;
  v8 = v6;
  if ( v6 == 0xFFFF )
  {
    if ( --this->m_hHandleMutex.m_depth != 0 )
      return;
LABEL_14:
    ThreadInterlockedExchange64(generated_id_612, 0);
    return;
  }
  v9 = v6;
  elem = this->m_SpawnGroups.m_Tree.m_Elements.m_pMemory[v9].m_Data.elem;
  if ( elem != 0 )
  {
    ++CMapSpawnGroup::s_nSpawnGroupCacheMarker;
    pMem = elem;
    CUtlVectorBase<SpawnGroupConnectionInfo_t,CUtlMemory<SpawnGroupConnectionInfo_t,int>>::RemoveAll(&elem->m_Connections);
    v11 = pMem;
    if ( (pMem[2].m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<SpawnGroupConnectionInfo_t,int>::Purge(pMem + 2);
      v11 = pMem;
      if ( (pMem[2].m_nGrowSize & 0xC0000000) == 0 )
      {
        CUtlMemory<SpawnGroupConnectionInfo_t,int>::Purge(pMem + 2);
        v11 = pMem;
      }
    }
    operator delete(v11);
  }
  if ( v8 != 0xFFFF )
  {
    CUtlRBTree<CUtlMap<unsigned int,CMapSpawnGroup *,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short,CUtlMap<unsigned int,CMapSpawnGroup *,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,CMapSpawnGroup *,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>>::Unlink(
      &this->m_SpawnGroups.m_Tree,
      v7);
    this->m_SpawnGroups.m_Tree.m_Elements.m_pMemory[v9].m_Left = v8;
    this->m_SpawnGroups.m_Tree.m_Elements.m_pMemory[v9].m_Right = this->m_SpawnGroups.m_Tree.m_FirstFree;
    --this->m_SpawnGroups.m_Tree.m_NumElements;
    this->m_SpawnGroups.m_Tree.m_FirstFree = v8;
  }
  if ( --this->m_hHandleMutex.m_depth == 0 )
    goto LABEL_14;
}


// CSpawnGroupMgrGameSystem::SpawnGroupInit  (line 630, @0x0000000001f437f0, libserver.so)  // inlines: CDontUseThisGameSystem, CUtlString, ComputeVTableIndex<CDontUseThisGameSystem, void (IGameSystem::*)(const EventSpawnGroupPrecache_t&)>, Describe, DispatchEvent<EventSpawnGroupPrecache_t>, EventSpawnGroupPrecache_t, GetEntityLumpName, GetName, GetVTableIndex, OnSpawnGroupPrecache, String, ~CDontUseThisGameSystem, ~CUtlString, ~EventSpawnGroupPrecache_t
// calls: CSpawnGroupMgrGameSystem::Get, LoggingSystem_IsChannelEnabled, CBaseEntity::SetAllowPrecache, CUtlString::operator=, CUtlString::Get, LoggingSystem_Log, CUtlString::FreeMemoryBlock, IGameSystem::DispatchEventInternal, IGameSystem::~IGameSystem, __cxa_guard_acquire, __cxa_guard_release, _Unwind_Resume (13 total)
// globals: LOG_SPAWN_GROUP, EventSpawnGroupPrecache_t::GetVTableIndex(void)::s_nComputedIndex, `guard variable for'ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventSpawnGroupPrecache_t const&)>(CDontUseThisGameSystem &,void (IGameSyste, ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventSpawnGroupPrecache_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventSpawnGrou
void __fastcall CSpawnGroupMgrGameSystem::SpawnGroupInit(
        CSpawnGroupMgrGameSystem *const this,
        SpawnGroupHandle_t handle,
        IEntityResourceManifest *pManifest,
        IEntityPrecacheConfiguration *pConfig,
        ISpawnGroupPrerequisiteRegistry *pRegistry)
{
  CMapSpawnGroup *v7; // rbx
  __int64 v8; // rax
  __int64 v9; // r13
  const char *v10; // rax
  const char *v11; // rax
  const EntitySpawnInfo_t *v12; // rax
  const char *v13; // rax
  GameSystemEventId_t v14; // edi
  const char *v15; // rax
  CUtlString v18; // [rsp+10h] [rbp-90h] BYREF
  IGameSystem v19; // [rsp+20h] [rbp-80h] BYREF
  EventSpawnGroupPrecache_t msg; // [rsp+30h] [rbp-70h] BYREF

  v7 = CSpawnGroupMgrGameSystem::Get(this, handle);
  if ( v7 != 0 )
  {
    if ( LoggingSystem_IsChannelEnabled(LOG_SPAWN_GROUP, 0) != 0 )
    {
      (*(v7->m_pSpawnGroup->_vptr_ISpawnGroup + 12))(&msg);
      v15 = CUtlString::Get(&msg.m_SpawnGroupName);
      LoggingSystem_Log(LOG_SPAWN_GROUP, 0, &stru_32D9EEC.m_mapLevelWorlds.m_Tree.m_FirstFree + 1, v15);
      if ( msg.m_SpawnGroupName.m_pString != 0 )
        CUtlString::FreeMemoryBlock(&msg.m_SpawnGroupName);
    }
    CBaseEntity::SetAllowPrecache(1);
    v8 = (*(v7->m_pSpawnGroup->_vptr_ISpawnGroup + 9))(v7->m_pSpawnGroup);
    msg.m_SpawnGroupName.m_pString = 0;
    msg.m_EntityLumpName.m_pString = 0;
    v9 = v8;
    v10 = v7->m_pSpawnGroup->GetWorldName();
    CUtlString::operator=(&msg.m_SpawnGroupName, v10);
    v11 = (*(v7->m_pSpawnGroup->_vptr_ISpawnGroup + 1))(v7->m_pSpawnGroup);
    CUtlString::operator=(&msg.m_EntityLumpName, v11);
    msg.m_SpawnGroupHandle = handle;
    if ( v9 != 0 )
    {
      msg.m_nEntityCount = (**v9)(v9);
      if ( msg.m_nEntityCount <= 0 )
        v12 = 0;
      else
        v12 = (*(*v9 + 8LL))(v9);
    }
    else
    {
      msg.m_nEntityCount = 0;
      v12 = 0;
    }
    msg.m_pEntitiesToSpawn = v12;
    msg.m_pRegistry = pRegistry;
    msg.m_pManifest = pManifest;
    msg.m_pConfig = pConfig;
    if ( LoggingSystem_IsChannelEnabled(LOG_SPAWN_GROUP, 0) != 0 )
    {
      (*(v7->m_pSpawnGroup->_vptr_ISpawnGroup + 12))(&v18);
      v13 = CUtlString::Get(&v18);
      LoggingSystem_Log(LOG_SPAWN_GROUP, 0, &stru_32D9EEC.m_hMatHiddenWireframe.m_pBinding + 2, v13);
      if ( v18.m_pString != 0 )
        CUtlString::FreeMemoryBlock(&v18);
    }
    v14 = EventSpawnGroupPrecache_t::GetVTableIndex(void)::s_nComputedIndex;
    if ( EventSpawnGroupPrecache_t::GetVTableIndex(void)::s_nComputedIndex < 0 )
    {
      v19._vptr_IGameSystem = off_3FC3E30;
      if ( `guard variable for'int ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventSpawnGroupPrecache_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventSpawnGroupPrecache_t const&))::ppVTableNew == 0
        && __cxa_guard_acquire(&`guard variable for'int ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventSpawnGroupPrecache_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventSpawnGroupPrecache_t const&))::ppVTableNew) != 0 )
      {
        ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventSpawnGroupPrecache_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventSpawnGroupPrecache_t const&))::ppVTableNew = ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventSpawnGroupPrecache_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventSpawnGroupPrecache_t const&))::calculator;
        __cxa_guard_release(&`guard variable for'int ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventSpawnGroupPrecache_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventSpawnGroupPrecache_t const&))::ppVTableNew);
      }
      v19._vptr_IGameSystem = ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventSpawnGroupPrecache_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventSpawnGroupPrecache_t const&))::ppVTableNew;
      EventSpawnGroupPrecache_t::GetVTableIndex(void)::s_nComputedIndex = (*(ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventSpawnGroupPrecache_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventSpawnGroupPrecache_t const&))::ppVTableNew
                                                                           + 96))(&v19);
      v19._vptr_IGameSystem = off_3FC3E30;
      IGameSystem::~IGameSystem(&v19);
      v14 = EventSpawnGroupPrecache_t::GetVTableIndex(void)::s_nComputedIndex;
    }
    IGameSystem::DispatchEventInternal(v14, 0x61uLL, &msg);
    CBaseEntity::SetAllowPrecache(0);
    v7->m_bSpawnGroupPrecacheDispatched = 1;
    if ( msg.m_EntityLumpName.m_pString != 0 )
      CUtlString::FreeMemoryBlock(&msg.m_EntityLumpName);
    if ( msg.m_SpawnGroupName.m_pString != 0 )
      CUtlString::FreeMemoryBlock(&msg.m_SpawnGroupName);
  }
}


// CSpawnGroupMgrGameSystem::CreateLoadingSpawnGroupForSaveFile  (line 663, @0x0000000001f43ad0, libserver.so)  // inlines: GetWorldOffset
// calls: CSpawnGroupMgrGameSystem::Get, CGameEntitySystem::CreateSpawnGroupEntitiesFromSaveRestoreData
ILoadingSpawnGroup *__fastcall CSpawnGroupMgrGameSystem::CreateLoadingSpawnGroupForSaveFile(
        CSpawnGroupMgrGameSystem *const this,
        SpawnGroupHandle_t handle,
        const void *pSaveData,
        size_t nSaveDataSize)
{
  CMapSpawnGroup *v7; // rax
  const matrix3x4a_t *v8; // rax

  v7 = CSpawnGroupMgrGameSystem::Get(this, handle);
  if ( v7 == 0 || pSaveData == 0 )
    return 0;
  v8 = (*(v7->m_pSpawnGroup->_vptr_ISpawnGroup + 4))(v7->m_pSpawnGroup);
  return CGameEntitySystem::CreateSpawnGroupEntitiesFromSaveRestoreData(
           g_pGameEntitySystem,
           handle,
           v8,
           CreateSpawnGroupType_t::CREATE_SPAWN_GROUP_IMMEDIATELY,
           pSaveData,
           nSaveDataSize,
           0);
}


// CSpawnGroupMgrGameSystem::CreateLoadingSpawnGroup  (line 678, @0x0000000001f43b40, libserver.so)  // inlines: GetEntityFilterName, GetLocalNameFixup, GetOwnerSpawnGroup, GetParentNameFixup, GetWorldOffset, NameFixupSettings_t
// calls: CSpawnGroupMgrGameSystem::Get, CGameEntitySystem::CreateSpawnGroupEntities
ILoadingSpawnGroup *__fastcall CSpawnGroupMgrGameSystem::CreateLoadingSpawnGroup(
        CSpawnGroupMgrGameSystem *const this,
        SpawnGroupHandle_t handle,
        bool bSynchronouslySpawnEntities,
        bool bConfirmResourcesLoaded,
        const CUtlVector<const CEntityKeyValues*,CUtlMemory<const CEntityKeyValues*,int> > *pKeyValues)
{
  SpawnGroupHandle_t v8; // r12d
  CMapSpawnGroup *v9; // rax
  CMapSpawnGroup *v10; // rbx
  SpawnGroupHandle_t v11; // eax
  CreateSpawnGroupType_t v12; // r14d
  const char *v13; // r15
  const matrix3x4a_t *v14; // rax
  NameFixupSettings_t nameFixupSettings; // [rsp+10h] [rbp-40h] BYREF

  v8 = handle;
  v9 = CSpawnGroupMgrGameSystem::Get(this, handle);
  v10 = v9;
  if ( v9 == 0 )
    return 0;
  v11 = (*(v9->m_pSpawnGroup->_vptr_ISpawnGroup + 8))(v9->m_pSpawnGroup);
  nameFixupSettings.m_pParentNameFixup = 0;
  nameFixupSettings.m_pLocalNameFixup = 0;
  if ( v11 != 0 )
    v8 = v11;
  nameFixupSettings.m_pParentNameFixup = (*(v10->m_pSpawnGroup->_vptr_ISpawnGroup + 6))(v10->m_pSpawnGroup);
  nameFixupSettings.m_pLocalNameFixup = (*(v10->m_pSpawnGroup->_vptr_ISpawnGroup + 7))(v10->m_pSpawnGroup);
  if ( bSynchronouslySpawnEntities || bConfirmResourcesLoaded )
    v12 = CreateSpawnGroupType_t::CREATE_SPAWN_GROUP_ASYNCHRONOUSLY_CONFIRM_RESOURCES_LOADED;
  else
    v12 = CreateSpawnGroupType_t::CREATE_SPAWN_GROUP_ASYNCHRONOUSLY;
  v13 = (*(v10->m_pSpawnGroup->_vptr_ISpawnGroup + 2))(v10->m_pSpawnGroup);
  v14 = (*(v10->m_pSpawnGroup->_vptr_ISpawnGroup + 4))(v10->m_pSpawnGroup);
  return CGameEntitySystem::CreateSpawnGroupEntities(
           g_pGameEntitySystem,
           v8,
           pKeyValues,
           v14,
           v13,
           v12,
           &nameFixupSettings,
           0);
}


// CSpawnGroupMgrGameSystem::SetLoadingSpawnGroup  (line 711, @0x0000000001f43c20, libserver.so)  // inlines: SetLoadingSpawnGroup
// calls: CSpawnGroupMgrGameSystem::Get
// callers: CEntitySpawnerAsync<CBaseEntity>::CEntitySpawnerAsync, CEntitySpawnerAsync<CBaseEntity>::Init, CEntitySpawnerAsyncBase<CBaseEntity>::Init, CEntitySpawnerAsyncBase<CPointHMDAnchor>::Init, CreateInstanceFromLump, CEntitySpawnerAsync<CPhysicsProp>::Init, CEntitySpawnerAsync<CDOTA_BaseNPC>::Init, CEntitySpawnerAsync<CDOTA_Item>::Init, CEntitySpawnerAsync<CDOTA_Item_Physical>::Init
void __fastcall CSpawnGroupMgrGameSystem::SetLoadingSpawnGroup(
        CSpawnGroupMgrGameSystem *const this,
        SpawnGroupHandle_t h,
        ILoadingSpawnGroup *pLoadingSpawnGroup)
{
  CMapSpawnGroup *v4; // rax

  v4 = CSpawnGroupMgrGameSystem::Get(this, h);
  if ( v4 != 0 )
    (*(v4->m_pSpawnGroup->_vptr_ISpawnGroup + 10))(v4->m_pSpawnGroup, pLoadingSpawnGroup);
}


// CSpawnGroupMgrGameSystem::SpawnGroupSpawnEntities  (line 722, @0x0000000001f630b0, libserver.so)  // inlines: AddToHead, AddToTail, CopyConstruct<unsigned int>, Describe, Element, GrowMemory, String, operator[], ~CUtlString
// calls: CSpawnGroupMgrGameSystem::Get, LoggingSystem_IsChannelEnabled, CUtlString::Get, LoggingSystem_Log, CUtlString::FreeMemoryBlock, CSpawnGroupMgrGameSystem::SpawnGroupActuallySpawnEntities, CUtlMemory<unsigned int, int>::Grow, CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::InsertBefore, _Unwind_Resume
// strings: "%s:  SpawnGroupSpawnEntities\n"
// globals: LOG_SPAWN_GROUP
void __fastcall CSpawnGroupMgrGameSystem::SpawnGroupSpawnEntities(
        CSpawnGroupMgrGameSystem *const this,
        SpawnGroupHandle_t handle)
{
  __int64 m_Size; // r12
  int v4; // eax
  unsigned int *v5; // rax
  CMapSpawnGroup *v6; // r12
  const char *v7; // rax
  SpawnGroupHandle_t handlea; // [rsp+Ch] [rbp-24h] BYREF
  CUtlString v9; // [rsp+10h] [rbp-20h] BYREF

  handlea = handle;
  if ( this->m_bQueueSpawnEntitiesCalls )
  {
    if ( handle == 1 )
    {
      CUtlVectorBase<unsigned int,CUtlMemory<unsigned int,int>>::InsertBefore(
        &this->m_SpawnEntitiesCallQueue,
        0,
        &handlea);
    }
    else
    {
      m_Size = this->m_SpawnEntitiesCallQueue.m_Size;
      v4 = this->m_SpawnEntitiesCallQueue.m_Size;
      if ( m_Size == this->m_SpawnEntitiesCallQueue.m_Memory.m_nAllocationCount )
      {
        CUtlMemory<unsigned int,int>::Grow(&this->m_SpawnEntitiesCallQueue.m_Memory, 1);
        v4 = this->m_SpawnEntitiesCallQueue.m_Size;
      }
      this->m_SpawnEntitiesCallQueue.m_Size = v4 + 1;
      v5 = &this->m_SpawnEntitiesCallQueue.m_Memory.m_pMemory[m_Size];
      if ( v5 != 0 )
        *v5 = handlea;
    }
  }
  else
  {
    v6 = CSpawnGroupMgrGameSystem::Get(this, handlea);
    if ( LoggingSystem_IsChannelEnabled(LOG_SPAWN_GROUP, 0) != 0 )
    {
      (*(v6->m_pSpawnGroup->_vptr_ISpawnGroup + 12))(&v9);
      v7 = CUtlString::Get(&v9);
      LoggingSystem_Log(LOG_SPAWN_GROUP, 0, "%s:  SpawnGroupSpawnEntities\n", v7);
      if ( v9.m_pString != 0 )
        CUtlString::FreeMemoryBlock(&v9);
    }
    CSpawnGroupMgrGameSystem::SpawnGroupActuallySpawnEntities(this, handlea);
  }
}


// CSpawnGroupMgrGameSystem::SpawnGroupActuallySpawnEntities  (line 786, @0x0000000001f62850, libserver.so)  // inlines: CDontUseThisGameSystem, CPhysicsGameSystemChangeScope, CUtlMemory, CUtlString, CUtlVector, CUtlVectorBase, ComputeVTableIndex<CDontUseThisGameSystem, void (IGameSystem::*)(const EventPostSpawnGroupLoad_t&)>, ComputeVTableIndex<CDontUseThisGameSystem, void (IGameSystem::*)(const EventPreSpawnGroupLoad_t&)>, Describe, DispatchEvent<EventPostSpawnGroupLoad_t>, DispatchEvent<EventPreSpawnGroupLoad_t>, DontSpawnEntities, EventPostSpawnGroupLoad_t, EventPreSpawnGroupLoad_t, GetEntityLumpName, GetName, GetSaveRestore, GetStreamEntitiesFromFileCompletion, GetVTableIndex, Purge, SetRestoreActivation, String, ~CDontUseThisGameSystem, ~CPhysicsGameSystemChangeScope, ~CUtlMemory, ~CUtlString, ~CUtlVector, ~CUtlVectorBase, ~EventPostSpawnGroupLoad_t, ~EventPreSpawnGroupLoad_t
// calls: CSpawnGroupMgrGameSystem::Get, CMapSpawnGroup::GetWorldGroupId, CPhysicsGameSystem::OnBeginProcessing, CUtlString::operator=, IGameSystem::DispatchEventInternal, CUtlString::FreeMemoryBlock, LoggingSystem_IsChannelEnabled, LoggingSystem_Log, CMapSpawnGroup::SpawnLoadingEntities, CMapSpawnGroup::ReleaseLoadingEntities, CMapSpawnGroup::OnSpawnGroupLoad, CUtlVectorBase<CEntityHandle, CUtlMemory<CEntityHandle, int> >::RemoveAll (21 total)
// callers: CSpawnGroupMgrGameSystem::SpawnGroupSpawnEntities
// strings: "SV", "%s:  loading '%s' entities from map file\n", "%s:  transitioning '%s' entities from previous map '%s' (landmark='%s')\n", "%s:  SpawnGroupSpawnEntities Finished: entities(%d)\n", "%s:  loading '%s' entities from savedata (%d bytes)\n"
// globals: g_pPhysicsGameSystem, EventPreSpawnGroupLoad_t::GetVTableIndex(void)::s_nComputedIndex, LOG_SPAWN_GROUP, EventPostSpawnGroupLoad_t::GetVTableIndex(void)::s_nComputedIndex, `guard variable for'ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventPreSpawnGroupLoad_t const&)>(CDontUseThisGameSystem &,void (IGameSystem, ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventPreSpawnGroupLoad_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventPreSpawnGr, `guard variable for'ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventPostSpawnGroupLoad_t const&)>(CDontUseThisGameSystem &,void (IGameSyste, ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventPostSpawnGroupLoad_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventPostSpawn
void __fastcall CSpawnGroupMgrGameSystem::SpawnGroupActuallySpawnEntities(
        CSpawnGroupMgrGameSystem *const this,
        SpawnGroupHandle_t handle)
{
  CMapSpawnGroup *v3; // rbx
  __int64 v4; // rax
  const char *v5; // rax
  const char *v6; // rax
  GameSystemEventId_t v7; // edi
  __int64 v8; // rax
  __int64 v9; // r15
  IStreamEntitiesFromFileCompletion *v10; // r12
  __int64 v11; // rax
  _DWORD *v12; // rax
  int v13; // xmm1_4
  int v14; // xmm0_4
  unsigned __int8 *m_pMemory; // rax
  __int64 v16; // rdx
  const char *v17; // rax
  __int64 v18; // rax
  const char *v19; // rax
  const char *v20; // rax
  GameSystemEventId_t v21; // edi
  __int64 v22; // rax
  __int64 v23; // r15
  __int64 v24; // rdx
  __int64 v25; // rax
  const char *v26; // rax
  int m_Size; // r15d
  const char *v28; // rax
  const char *v29; // rax
  unsigned __int8 *v30; // [rsp+20h] [rbp-D0h]
  __int64 v31; // [rsp+28h] [rbp-C8h]
  __int64 v32; // [rsp+28h] [rbp-C8h]
  const char *v33; // [rsp+28h] [rbp-C8h]
  int m_Put; // [rsp+28h] [rbp-C8h]
  const CUtlBuffer *saveData; // [rsp+30h] [rbp-C0h]
  const CUtlBuffer *saveDataa; // [rsp+30h] [rbp-C0h]
  const CUtlBuffer *saveDatac; // [rsp+30h] [rbp-C0h]
  const char *saveDatab; // [rsp+30h] [rbp-C0h]
  void (__fastcall *v39)(__int64, ISaveRestoreBlockSet *, __int64, unsigned __int8 *, const CUtlBuffer *, _QWORD, IGameSystem *, IStreamEntitiesFromFileCompletion *, CUtlVectorBase<CEntityHandle,CUtlMemory<CEntityHandle,int> > *); // [rsp+38h] [rbp-B8h]
  void (__fastcall *v40)(__int64, ISaveRestoreBlockSet *, __int64, __int64, const CUtlBuffer *, _QWORD, IStreamEntitiesFromFileCompletion *, CUtlVectorBase<CEntityHandle,CUtlMemory<CEntityHandle,int> > *); // [rsp+38h] [rbp-B8h]
  char v41; // [rsp+4Fh] [rbp-A1h]
  CPhysicsGameSystemChangeScope scope; // [rsp+50h] [rbp-A0h] BYREF
  CUtlString v43; // [rsp+60h] [rbp-90h] BYREF
  IGameSystem v44; // [rsp+70h] [rbp-80h] BYREF
  IGameSystem v45; // [rsp+80h] [rbp-70h] BYREF
  EventPreSpawnGroupLoad_t preMsg; // [rsp+90h] [rbp-60h] BYREF
  CUtlVectorBase<CEntityHandle,CUtlMemory<CEntityHandle,int> > v47[3]; // [rsp+A8h] [rbp-48h] BYREF

  v3 = CSpawnGroupMgrGameSystem::Get(this, handle);
  if ( g_pResourceSystem != 0 && (v4 = (*(*g_pResourceSystem + 528LL))(g_pResourceSystem), (*(*v4 + 40LL))(v4) != 0) )
  {
    scope.m_nWorldGroupId = CMapSpawnGroup::GetWorldGroupId(v3);
    CPhysicsGameSystem::OnBeginProcessing(g_pPhysicsGameSystem, &scope.m_nWorldGroupId);
    v25 = (*(*g_pResourceSystem + 528LL))(g_pResourceSystem);
    (*(*v25 + 32LL))(v25, 0, 23, 1);
    v41 = 1;
  }
  else
  {
    scope.m_nWorldGroupId = CMapSpawnGroup::GetWorldGroupId(v3);
    CPhysicsGameSystem::OnBeginProcessing(g_pPhysicsGameSystem, &scope.m_nWorldGroupId);
    v41 = 0;
  }
  preMsg.m_SpawnGroupName.m_pString = 0;
  preMsg.m_EntityLumpName.m_pString = 0;
  v5 = v3->m_pSpawnGroup->GetWorldName();
  CUtlString::operator=(&preMsg.m_SpawnGroupName, v5);
  v6 = (*(v3->m_pSpawnGroup->_vptr_ISpawnGroup + 1))(v3->m_pSpawnGroup);
  CUtlString::operator=(&preMsg.m_EntityLumpName, v6);
  v7 = EventPreSpawnGroupLoad_t::GetVTableIndex(void)::s_nComputedIndex;
  preMsg.m_SpawnGroupHandle = handle;
  if ( EventPreSpawnGroupLoad_t::GetVTableIndex(void)::s_nComputedIndex < 0 )
  {
    v44._vptr_IGameSystem = off_3FC3E30;
    if ( `guard variable for'int ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventPreSpawnGroupLoad_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventPreSpawnGroupLoad_t const&))::ppVTableNew == 0
      && __cxa_guard_acquire(&`guard variable for'int ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventPreSpawnGroupLoad_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventPreSpawnGroupLoad_t const&))::ppVTableNew) != 0 )
    {
      ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventPreSpawnGroupLoad_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventPreSpawnGroupLoad_t const&))::ppVTableNew = ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventPreSpawnGroupLoad_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventPreSpawnGroupLoad_t const&))::calculator;
      __cxa_guard_release(&`guard variable for'int ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventPreSpawnGroupLoad_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventPreSpawnGroupLoad_t const&))::ppVTableNew);
    }
    v44._vptr_IGameSystem = ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventPreSpawnGroupLoad_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventPreSpawnGroupLoad_t const&))::ppVTableNew;
    EventPreSpawnGroupLoad_t::GetVTableIndex(void)::s_nComputedIndex = (*(ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventPreSpawnGroupLoad_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventPreSpawnGroupLoad_t const&))::ppVTableNew
                                                                        + 112))(&v44);
    v44._vptr_IGameSystem = off_3FC3E30;
    IGameSystem::~IGameSystem(&v44);
    v7 = EventPreSpawnGroupLoad_t::GetVTableIndex(void)::s_nComputedIndex;
  }
  IGameSystem::DispatchEventInternal(v7, 0x71uLL, &preMsg);
  if ( v41 != 0 )
  {
    v8 = (*(*g_pResourceSystem + 528LL))(g_pResourceSystem);
    (*(*v8 + 32LL))(v8, 0, 23, 2);
  }
  if ( preMsg.m_EntityLumpName.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&preMsg.m_EntityLumpName);
  if ( preMsg.m_SpawnGroupName.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&preMsg.m_SpawnGroupName);
  v9 = (*(v3->m_pSpawnGroup->_vptr_ISpawnGroup + 9))(v3->m_pSpawnGroup);
  v10 = 0;
  preMsg.m_SpawnGroupName.m_pString = 0;
  preMsg.m_EntityLumpName.m_pString = 0;
  v47[0].m_Size = 0;
  v47[0].m_Memory.m_pMemory = 0;
  v47[0].m_Memory.m_nAllocationCount = 0;
  v47[0].m_Memory.m_nGrowSize = 0;
  if ( g_pSource2ServerInternal != 0 )
    v10 = &g_pSource2ServerInternal->IStreamEntitiesFromFileCompletion;
  if ( (*(v3->m_pSpawnGroup->_vptr_ISpawnGroup + 16))(v3->m_pSpawnGroup) != 0 )
  {
LABEL_24:
    if ( v9 == 0 )
      goto LABEL_26;
    goto LABEL_25;
  }
  if ( v9 == 0 )
  {
LABEL_23:
    CMapSpawnGroup::SpawnLoadingEntities(v3, v47);
    goto LABEL_24;
  }
  if ( (*(*v9 + 16LL))(v9) == 0 )
  {
    if ( (*(*v9 + 40LL))(v9) != 0 && LoggingSystem_IsChannelEnabled(LOG_SAVERESTORE, 0) != 0 )
    {
      v17 = v3->m_pSpawnGroup->GetWorldName();
      LoggingSystem_Log(LOG_SAVERESTORE, 0, "%s:  loading '%s' entities from map file\n", "SV", v17);
    }
    goto LABEL_23;
  }
  v11 = (*(v3->m_pSpawnGroup->_vptr_ISpawnGroup + 9))(v3->m_pSpawnGroup);
  saveData = (*(*v11 + 24LL))(v11);
  if ( (*(*v9 + 40LL))(v9) != 0 && LoggingSystem_IsChannelEnabled(LOG_SAVERESTORE, 0) != 0 )
  {
    m_Put = saveData->m_Put;
    v29 = v3->m_pSpawnGroup->GetWorldName();
    LoggingSystem_Log(LOG_SAVERESTORE, 0, "%s:  loading '%s' entities from savedata (%d bytes)\n", "SV", v29, m_Put);
  }
  v31 = *(&stru_1A0B8.r_offset + g_pGameEntitySystem);
  v39 = *(*v31 + 32LL);
  v12 = (*(v3->m_pSpawnGroup->_vptr_ISpawnGroup + 4))(v3->m_pSpawnGroup);
  v13 = v12[11];
  v14 = v12[3];
  HIDWORD(v45._vptr_IGameSystem) = v12[7];
  LODWORD(v45.m_pName) = v13;
  LODWORD(v45._vptr_IGameSystem) = v14;
  m_pMemory = saveData->m_Memory.m_pMemory;
  saveDataa = saveData->m_Put;
  v30 = m_pMemory;
  v16 = v3->m_pSpawnGroup->GetWorldName();
  v39(v31, g_pGameSaveRestoreBlockSet, v16, v30, saveDataa, handle, &v45, v10, v47);
LABEL_25:
  if ( (*(*v9 + 40LL))(v9) != 0 )
  {
    if ( LoggingSystem_IsChannelEnabled(LOG_SAVERESTORE, 0) != 0 )
    {
      saveDatab = (*(*v9 + 56LL))(v9);
      v33 = (*(*v9 + 48LL))(v9);
      v26 = v3->m_pSpawnGroup->GetWorldName();
      LoggingSystem_Log(
        LOG_SAVERESTORE,
        0,
        "%s:  transitioning '%s' entities from previous map '%s' (landmark='%s')\n",
        "SV",
        v26,
        v33,
        saveDatab);
    }
    g_pEntitySystem->m_bInRestoreActivation = 1;
    v32 = *(&stru_1A0B8.r_offset + g_pGameEntitySystem);
    v40 = *(*v32 + 40LL);
    saveDatac = (*(*v9 + 56LL))(v9);
    v23 = (*(*v9 + 48LL))(v9);
    v24 = v3->m_pSpawnGroup->GetWorldName();
    v40(v32, g_pGameSaveRestoreBlockSet, v24, v23, saveDatac, handle, v10, v47);
    g_pEntitySystem->m_bInRestoreActivation = 0;
  }
LABEL_26:
  if ( LoggingSystem_IsChannelEnabled(LOG_SPAWN_GROUP, 0) != 0 )
  {
    m_Size = v47[0].m_Size;
    (*(v3->m_pSpawnGroup->_vptr_ISpawnGroup + 12))(&v43);
    v28 = CUtlString::Get(&v43);
    LoggingSystem_Log(LOG_SPAWN_GROUP, 0, "%s:  SpawnGroupSpawnEntities Finished: entities(%d)\n", v28, m_Size);
    if ( v43.m_pString != 0 )
      CUtlString::FreeMemoryBlock(&v43);
  }
  if ( v41 != 0 )
  {
    v18 = (*(*g_pResourceSystem + 528LL))(g_pResourceSystem);
    (*(*v18 + 32LL))(v18, 0, 24, 1);
  }
  v19 = v3->m_pSpawnGroup->GetWorldName();
  CUtlString::operator=(&preMsg.m_SpawnGroupName, v19);
  v20 = (*(v3->m_pSpawnGroup->_vptr_ISpawnGroup + 1))(v3->m_pSpawnGroup);
  CUtlString::operator=(&preMsg.m_EntityLumpName, v20);
  v21 = EventPostSpawnGroupLoad_t::GetVTableIndex(void)::s_nComputedIndex;
  preMsg.m_SpawnGroupHandle = handle;
  if ( EventPostSpawnGroupLoad_t::GetVTableIndex(void)::s_nComputedIndex < 0 )
  {
    v45._vptr_IGameSystem = off_3FC3E30;
    if ( `guard variable for'int ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventPostSpawnGroupLoad_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventPostSpawnGroupLoad_t const&))::ppVTableNew == 0
      && __cxa_guard_acquire(&`guard variable for'int ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventPostSpawnGroupLoad_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventPostSpawnGroupLoad_t const&))::ppVTableNew) != 0 )
    {
      ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventPostSpawnGroupLoad_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventPostSpawnGroupLoad_t const&))::ppVTableNew = ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventPostSpawnGroupLoad_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventPostSpawnGroupLoad_t const&))::calculator;
      __cxa_guard_release(&`guard variable for'int ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventPostSpawnGroupLoad_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventPostSpawnGroupLoad_t const&))::ppVTableNew);
    }
    v45._vptr_IGameSystem = ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventPostSpawnGroupLoad_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventPostSpawnGroupLoad_t const&))::ppVTableNew;
    EventPostSpawnGroupLoad_t::GetVTableIndex(void)::s_nComputedIndex = (*(ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventPostSpawnGroupLoad_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventPostSpawnGroupLoad_t const&))::ppVTableNew
                                                                         + 120))(&v45);
    v45._vptr_IGameSystem = off_3FC3E30;
    IGameSystem::~IGameSystem(&v45);
    v21 = EventPostSpawnGroupLoad_t::GetVTableIndex(void)::s_nComputedIndex;
  }
  IGameSystem::DispatchEventInternal(v21, 0x79uLL, &preMsg);
  if ( v41 != 0 )
  {
    v22 = (*(*g_pResourceSystem + 528LL))(g_pResourceSystem);
    (*(*v22 + 32LL))(v22, 0, 24, 2);
  }
  CMapSpawnGroup::ReleaseLoadingEntities(v3);
  CMapSpawnGroup::OnSpawnGroupLoad(v3, &preMsg);
  CUtlVectorBase<CEntityHandle,CUtlMemory<CEntityHandle,int>>::RemoveAll(v47);
  if ( (v47[0].m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CEntityHandle,int>::Purge(&v47[0].m_Memory);
    if ( (v47[0].m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CEntityHandle,int>::Purge(&v47[0].m_Memory);
  }
  if ( preMsg.m_EntityLumpName.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&preMsg.m_EntityLumpName);
  if ( preMsg.m_SpawnGroupName.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&preMsg.m_SpawnGroupName);
  CPhysicsGameSystem::OnEndProcessing(g_pPhysicsGameSystem, &scope.m_nWorldGroupId);
}


// CSpawnGroupMgrGameSystem::ExecuteQueuedSpawnEntityCalls  (line 903, @0x0000000001f38850, libserver.so)  // inlines: Purge, RemoveAll
// calls: LoggingSystem_IsChannelEnabled, CUtlMemory<unsigned int, int>::Purge, LoggingSystem_Log
// callers: CLoopModeGame::OnLoopActivate
// strings: "SV:  CSpawnGroupMgrGameSystem::ExecuteQueuedSpawnEntityCalls(count=%d)\n"
// globals: LOG_SPAWN_GROUP
void __fastcall CSpawnGroupMgrGameSystem::ExecuteQueuedSpawnEntityCalls(CSpawnGroupMgrGameSystem *const this)
{
  int m_Size; // eax
  unsigned __int64 v3; // rbx
  __int64 v4; // r13
  __int64 v5; // rsi
  bool v6; // zf

  this->m_bQueueSpawnEntitiesCalls = 0;
  if ( LoggingSystem_IsChannelEnabled(LOG_SPAWN_GROUP, 0) != 0 )
    LoggingSystem_Log(
      LOG_SPAWN_GROUP,
      0,
      "SV:  CSpawnGroupMgrGameSystem::ExecuteQueuedSpawnEntityCalls(count=%d)\n",
      this->m_SpawnEntitiesCallQueue.m_Size);
  m_Size = this->m_SpawnEntitiesCallQueue.m_Size;
  if ( m_Size > 0 )
  {
    v3 = 0;
    v4 = 4LL * (m_Size - 1) + 4;
    do
    {
      v5 = this->m_SpawnEntitiesCallQueue.m_Memory.m_pMemory[v3 / 4];
      v3 += 4LL;
      (*(this->_vptr_IGameSpawnGroupMgr + 5))(this, v5);
    }
    while ( v3 != v4 );
  }
  v6 = (this->m_SpawnEntitiesCallQueue.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_SpawnEntitiesCallQueue.m_Size = 0;
  if ( v6 )
    CUtlMemory<unsigned int,int>::Purge(&this->m_SpawnEntitiesCallQueue.m_Memory);
}


// CSpawnGroupMgrGameSystem::SpawnGroupShutdown  (line 920, @0x0000000001f59a70, libserver.so)  // inlines: CDontUseThisGameSystem, CUtlMemory, CUtlString, CUtlVector, CUtlVectorBase, ComputeVTableIndex<CDontUseThisGameSystem, void (IGameSystem::*)(const EventPreSpawnGroupUnload_t&)>, Describe, DispatchEvent<EventPreSpawnGroupUnload_t>, EventPreSpawnGroupUnload_t, GetEntityLumpName, GetName, GetVTableIndex, Purge, String, ~CDontUseThisGameSystem, ~CUtlMemory, ~CUtlString, ~CUtlVector, ~CUtlVectorBase, ~EventPreSpawnGroupUnload_t
// calls: CSpawnGroupMgrGameSystem::Get, CUtlString::operator=, CSpawnGroupMgrGameSystem::GetEntitiesBySpawnGroup, LoggingSystem_IsChannelEnabled, CUtlString::Get, LoggingSystem_Log, CUtlString::FreeMemoryBlock, IGameSystem::DispatchEventInternal, CUtlVectorBase<CEntityHandle, CUtlMemory<CEntityHandle, int> >::RemoveAll, CSpawnGroupMgrGameSystem::SpawnGroupActuallyShutdown, CUtlMemory<CEntityHandle, int>::Purge, IGameSystem::~IGameSystem (16 total)
// strings: "%s:  SpawnGroupShutdown: entities(%d)\n"
// globals: LOG_SPAWN_GROUP, EventPreSpawnGroupUnload_t::GetVTableIndex(void)::s_nComputedIndex, `guard variable for'ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventPreSpawnGroupUnload_t const&)>(CDontUseThisGameSystem &,void (IGameSyst, ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventPreSpawnGroupUnload_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventPreSpawn
void __fastcall CSpawnGroupMgrGameSystem::SpawnGroupShutdown(
        CSpawnGroupMgrGameSystem *const this,
        SpawnGroupHandle_t handle)
{
  CMapSpawnGroup *v4; // rax
  CMapSpawnGroup *v5; // rbx
  const char *v6; // rax
  const char *v7; // rax
  int m_Size; // r15d
  const char *v9; // rax
  GameSystemEventId_t v10; // edi
  CUtlString v11; // [rsp+0h] [rbp-80h] BYREF
  IGameSystem v12; // [rsp+10h] [rbp-70h] BYREF
  EventPreSpawnGroupUnload_t msg; // [rsp+20h] [rbp-60h] BYREF

  v4 = CSpawnGroupMgrGameSystem::Get(this, handle);
  v5 = v4;
  if ( v4 != 0 )
  {
    if ( v4->m_bSpawnGroupLoadDispatched )
    {
      msg.m_SpawnGroupName.m_pString = 0;
      msg.m_EntityLumpName.m_pString = 0;
      msg.m_EntityList.m_Size = 0;
      msg.m_EntityList.m_Memory.m_pMemory = 0;
      msg.m_EntityList.m_Memory.m_nAllocationCount = 0;
      msg.m_EntityList.m_Memory.m_nGrowSize = 0;
      v6 = v4->m_pSpawnGroup->GetWorldName();
      CUtlString::operator=(&msg.m_SpawnGroupName, v6);
      v7 = (*(v5->m_pSpawnGroup->_vptr_ISpawnGroup + 1))(v5->m_pSpawnGroup);
      CUtlString::operator=(&msg.m_EntityLumpName, v7);
      msg.m_SpawnGroupHandle = handle;
      CSpawnGroupMgrGameSystem::GetEntitiesBySpawnGroup(this, handle, &msg.m_EntityList);
      if ( LoggingSystem_IsChannelEnabled(LOG_SPAWN_GROUP, 0) != 0 )
      {
        m_Size = msg.m_EntityList.m_Size;
        (*(v5->m_pSpawnGroup->_vptr_ISpawnGroup + 12))(&v11);
        v9 = CUtlString::Get(&v11);
        LoggingSystem_Log(LOG_SPAWN_GROUP, 0, "%s:  SpawnGroupShutdown: entities(%d)\n", v9, m_Size);
        if ( v11.m_pString != 0 )
          CUtlString::FreeMemoryBlock(&v11);
      }
      v10 = EventPreSpawnGroupUnload_t::GetVTableIndex(void)::s_nComputedIndex;
      if ( EventPreSpawnGroupUnload_t::GetVTableIndex(void)::s_nComputedIndex < 0 )
      {
        v12._vptr_IGameSystem = off_3FC3E30;
        if ( `guard variable for'int ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventPreSpawnGroupUnload_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventPreSpawnGroupUnload_t const&))::ppVTableNew == 0
          && __cxa_guard_acquire(&`guard variable for'int ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventPreSpawnGroupUnload_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventPreSpawnGroupUnload_t const&))::ppVTableNew) != 0 )
        {
          ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventPreSpawnGroupUnload_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventPreSpawnGroupUnload_t const&))::ppVTableNew = ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventPreSpawnGroupUnload_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventPreSpawnGroupUnload_t const&))::calculator;
          __cxa_guard_release(&`guard variable for'int ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventPreSpawnGroupUnload_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventPreSpawnGroupUnload_t const&))::ppVTableNew);
        }
        v12._vptr_IGameSystem = ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventPreSpawnGroupUnload_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventPreSpawnGroupUnload_t const&))::ppVTableNew;
        EventPreSpawnGroupUnload_t::GetVTableIndex(void)::s_nComputedIndex = (*(ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventPreSpawnGroupUnload_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventPreSpawnGroupUnload_t const&))::ppVTableNew
                                                                              + 128))(&v12);
        v12._vptr_IGameSystem = off_3FC3E30;
        IGameSystem::~IGameSystem(&v12);
        v10 = EventPreSpawnGroupUnload_t::GetVTableIndex(void)::s_nComputedIndex;
      }
      IGameSystem::DispatchEventInternal(v10, 0x81uLL, &msg);
      CUtlVectorBase<CEntityHandle,CUtlMemory<CEntityHandle,int>>::RemoveAll(&msg.m_EntityList);
      if ( (msg.m_EntityList.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      {
        CUtlMemory<CEntityHandle,int>::Purge(&msg.m_EntityList.m_Memory);
        if ( (msg.m_EntityList.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
          CUtlMemory<CEntityHandle,int>::Purge(&msg.m_EntityList.m_Memory);
      }
      if ( msg.m_EntityLumpName.m_pString != 0 )
        CUtlString::FreeMemoryBlock(&msg.m_EntityLumpName);
      if ( msg.m_SpawnGroupName.m_pString != 0 )
        CUtlString::FreeMemoryBlock(&msg.m_SpawnGroupName);
    }
    CSpawnGroupMgrGameSystem::SpawnGroupActuallyShutdown(this, handle, 0);
  }
}


// CSpawnGroupMgrGameSystem::SpawnGroupActuallyShutdown  (line 962, @0x0000000001f594a0, libserver.so)  // inlines: CDontUseThisGameSystem, CEntityHandle, CInterpolationContextScopeGuard, CUtlMemory, CUtlString, CUtlVector, CUtlVectorBase, ComputeVTableIndex<CDontUseThisGameSystem, void (IGameSystem::*)(const EventPostSpawnGroupUnload_t&)>, ComputeVTableIndex<CDontUseThisGameSystem, void (IGameSystem::*)(const EventSpawnGroupUncache_t&)>, CopyConstruct<CInterpolationTimeContext>, DispatchEvent<EventPostSpawnGroupUnload_t>, DispatchEvent<EventSpawnGroupUncache_t>, Element, EventPostSpawnGroupUnload_t, EventSpawnGroupUncache_t, Get, GetEHandle, GetEntityIdentity, GetEntityLumpName, GetEntryIndex, GetInstance, GetName, GetSerialNumber, GetVTableIndex, GrowStack, IndexToIdentity, Init, IsValid, LookupEntity, Pop, PopInterpolationContext, Purge, Push, PushInterpolationContext, Release, ResetDbgInfo, curtime, operator CEntityIdentity*, operator CEntityInstance*, operator[], ~CDontUseThisGameSystem, ~CInterpolationContextScopeGuard, ~CUtlMemory, ~CUtlString, ~CUtlVector, ~CUtlVectorBase, ~EventPostSpawnGroupUnload_t, ~EventSpawnGroupUncache_t
// calls: CUtlMemory<CInterpolationTimeContext, int>::Grow, CSpawnGroupMgrGameSystem::Get, CSpawnGroupMgrGameSystem::GetEntitiesBySpawnGroup, CEntitySystem::SuppressAutoDeletionExecution, CEntitySystem::QueueDestroyEntity, CEntitySystem::ExecuteQueuedDeletion, CUtlString::operator=, IGameSystem::DispatchEventInternal, CUtlString::FreeMemoryBlock, CUtlVectorBase<CEntityHandle, CUtlMemory<CEntityHandle, int> >::RemoveAll, CUtlMemory<CEntityHandle, int>::Purge, IGameSystem::~IGameSystem (19 total)
// callers: CSpawnGroupMgrGameSystem::SpawnGroupShutdown
// globals: IWrappedInterpolatedVar::s_WrappedInterpolatedVarState, CEntityHandle::gm_pEntityList, EventPostSpawnGroupUnload_t::GetVTableIndex(void)::s_nComputedIndex, EventSpawnGroupUncache_t::GetVTableIndex(void)::s_nComputedIndex, `guard variable for'ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventSpawnGroupUncache_t const&)>(CDontUseThisGameSystem &,void (IGameSystem, ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventSpawnGroupUncache_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventSpawnGroup, `guard variable for'ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventPostSpawnGroupUnload_t const&)>(CDontUseThisGameSystem &,void (IGameSys, ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventPostSpawnGroupUnload_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventPostSpa
void __fastcall CSpawnGroupMgrGameSystem::SpawnGroupActuallyShutdown(
        CSpawnGroupMgrGameSystem *const this,
        SpawnGroupHandle_t handle,
        bool bDestroyNetworkedEntities)
{
  float m_flCurrentTime; // xmm0_4
  CGlobalVars *v6; // r12
  __int64 m_Size; // rax
  CInterpolationTimeContext *v8; // rax
  CMapSpawnGroup *v9; // rax
  CMapSpawnGroup *v10; // r13
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  bool m_bSpawnGroupLoadDispatched; // al
  __int64 v13; // r12
  int i; // ebx
  unsigned __int16 *v15; // rdx
  unsigned int v16; // eax
  __int16 v17; // r8
  CEntityIdentity *v18; // rdx
  __int64 v19; // r8
  bool v20; // zf
  CEntityIdentity *v21; // rdx
  CEntityIdentity *v22; // r15
  __int16 m_Index; // di
  int v24; // edx
  unsigned __int16 v25; // si
  int v26; // eax
  CEntityIdentity *v27; // rdx
  CEntityIdentity *v28; // rdx
  const char *v29; // rax
  const char *v30; // rax
  GameSystemEventId_t v31; // edi
  const char *v32; // rax
  const char *v33; // rax
  GameSystemEventId_t v34; // edi
  _BYTE *v35; // rax
  bool v36; // [rsp-31h] [rbp-A1h]
  float v37; // [rsp-30h] [rbp-A0h]
  IGameSystem v38; // [rsp-28h] [rbp-98h] BYREF
  IGameSystem v39; // [rsp-18h] [rbp-88h] BYREF
  int v40; // [rsp-8h] [rbp-78h] BYREF
  CUtlVector<CEntityHandle,CUtlMemory<CEntityHandle,int> > entityList; // [rsp+0h] [rbp-70h] BYREF
  CUtlString v42; // [rsp+18h] [rbp-58h] BYREF
  EventPostSpawnGroupUnload_t postMsg; // [rsp+20h] [rbp-50h] BYREF

  m_flCurrentTime = 0.0;
  v6 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        (m_pfnWarningFunc)(1, handle, bDestroyNetworkedEntities, 0.0);
    }
    m_flCurrentTime = v6->m_flCurrentTime;
  }
  m_Size = IWrappedInterpolatedVar::s_WrappedInterpolatedVarState.m_InterpolationTimeStack.m_Size;
  if ( IWrappedInterpolatedVar::s_WrappedInterpolatedVarState.m_InterpolationTimeStack.m_Size >= IWrappedInterpolatedVar::s_WrappedInterpolatedVarState.m_InterpolationTimeStack.m_Memory.m_nAllocationCount )
  {
    v37 = m_flCurrentTime;
    CUtlMemory<CInterpolationTimeContext,int>::Grow(
      &IWrappedInterpolatedVar::s_WrappedInterpolatedVarState.m_InterpolationTimeStack.m_Memory,
      1);
    m_Size = IWrappedInterpolatedVar::s_WrappedInterpolatedVarState.m_InterpolationTimeStack.m_Size;
    m_flCurrentTime = v37;
  }
  IWrappedInterpolatedVar::s_WrappedInterpolatedVarState.m_InterpolationTimeStack.m_Size = m_Size + 1;
  v8 = &IWrappedInterpolatedVar::s_WrappedInterpolatedVarState.m_InterpolationTimeStack.m_Memory.m_pMemory[m_Size];
  IWrappedInterpolatedVar::s_WrappedInterpolatedVarState.m_InterpolationTimeStack.m_pElements = IWrappedInterpolatedVar::s_WrappedInterpolatedVarState.m_InterpolationTimeStack.m_Memory.m_pMemory;
  if ( v8 != 0 )
  {
    v8->m_nPhase = InterpolatedVarPhase_t::IV_PHASE_CLIENT_AUTHORITATIVE;
    v8->m_nContextType = InterpolationTimeContextType_t::INTERPOLATION_CONTEXT_DEFAULT;
    v8->m_flInterpolationTime[0] = m_flCurrentTime;
    v8->m_flInterpolationTime[1] = m_flCurrentTime;
    v8->m_bIngoreInterpolationAmount = 1;
  }
  v9 = CSpawnGroupMgrGameSystem::Get(this, handle);
  v10 = v9;
  if ( v9 != 0 && v9->m_bSpawnGroupPrecacheDispatched )
  {
    m_bSpawnGroupLoadDispatched = v9->m_bSpawnGroupLoadDispatched;
    v10->m_bSpawnGroupPrecacheDispatched = 0;
    v10->m_bSpawnGroupLoadDispatched = 0;
    v40 = 0;
    *&entityList.m_Size = 0;
    v36 = m_bSpawnGroupLoadDispatched;
    entityList.m_Memory.m_pMemory = 0;
    CSpawnGroupMgrGameSystem::GetEntitiesBySpawnGroup(this, handle, &v40);
    CEntitySystem::SuppressAutoDeletionExecution(g_pGameEntitySystem, 1);
    v13 = 0;
    for ( i = 0; v40 > i; v13 += 4 )
    {
      while ( 1 )
      {
        v15 = (*&entityList.m_Size + v13);
        v16 = *(*&entityList.m_Size + v13);
        if ( v16 + 2 > 1 )
        {
          v17 = *v15;
          v18 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(*v15 >> 9) & 0x3F];
          if ( v18 != 0 )
          {
            v19 = v17 & 0x1FF;
            v20 = &v18[v19] == 0;
            v21 = &v18[v19];
            v22 = v21;
            if ( !v20 && v16 == v21->m_EHandle.m_Index && (v21->m_flags & 0x200) == 0 )
            {
              m_Index = v21->m_EHandle.m_Index;
              v24 = (v16 >> 15) - (v21->m_flags & 1);
              v25 = v22->m_EHandle.m_Index & 0x7FFF;
              LOWORD(v42.m_pString) = v25 | v42.m_pString & 0x8000;
              v26 = (v24 << 15) | v42.m_pString & 0x7FFF;
              LODWORD(v42.m_pString) = v26;
              if ( (v26 + 2) <= 1 )
                break;
              v27 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[v25 >> 9];
              if ( v27 == 0 )
                break;
              v28 = &v27[m_Index & 0x1FF];
              if ( v28 == 0 )
                break;
              if ( v26 != v28->m_EHandle.m_Index )
                break;
              if ( v28->m_pInstance == 0 )
                break;
              v35 = __dynamic_cast(
                      v28->m_pInstance,
                      &`typeinfo for'CEntityInstance,
                      &`typeinfo for'CBaseCombatWeapon,
                      0);
              if ( v35 == 0 || v35[1336] != 0 )
                break;
            }
          }
        }
        ++i;
        v13 += 4;
        if ( v40 <= i )
          goto LABEL_27;
      }
      CEntitySystem::QueueDestroyEntity(g_pEntitySystem, v22);
      ++i;
    }
LABEL_27:
    CEntitySystem::SuppressAutoDeletionExecution(g_pGameEntitySystem, 0);
    CEntitySystem::ExecuteQueuedDeletion(g_pEntitySystem, 0);
    if ( v36 )
    {
      v42.m_pString = 0;
      postMsg.m_SpawnGroupName.m_pString = 0;
      v29 = v10->m_pSpawnGroup->GetWorldName();
      CUtlString::operator=(&v42, v29);
      v30 = (*(v10->m_pSpawnGroup->_vptr_ISpawnGroup + 1))(v10->m_pSpawnGroup);
      CUtlString::operator=(&postMsg.m_SpawnGroupName, v30);
      v31 = EventPostSpawnGroupUnload_t::GetVTableIndex(void)::s_nComputedIndex;
      LODWORD(postMsg.m_EntityLumpName.m_pString) = handle;
      if ( EventPostSpawnGroupUnload_t::GetVTableIndex(void)::s_nComputedIndex < 0 )
      {
        v38._vptr_IGameSystem = off_3FC3E30;
        if ( `guard variable for'int ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventPostSpawnGroupUnload_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventPostSpawnGroupUnload_t const&))::ppVTableNew == 0
          && __cxa_guard_acquire(&`guard variable for'int ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventPostSpawnGroupUnload_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventPostSpawnGroupUnload_t const&))::ppVTableNew) != 0 )
        {
          ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventPostSpawnGroupUnload_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventPostSpawnGroupUnload_t const&))::ppVTableNew = ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventPostSpawnGroupUnload_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventPostSpawnGroupUnload_t const&))::calculator;
          __cxa_guard_release(&`guard variable for'int ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventPostSpawnGroupUnload_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventPostSpawnGroupUnload_t const&))::ppVTableNew);
        }
        v38._vptr_IGameSystem = ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventPostSpawnGroupUnload_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventPostSpawnGroupUnload_t const&))::ppVTableNew;
        EventPostSpawnGroupUnload_t::GetVTableIndex(void)::s_nComputedIndex = (*(ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventPostSpawnGroupUnload_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventPostSpawnGroupUnload_t const&))::ppVTableNew
                                                                               + 136))(&v38);
        v38._vptr_IGameSystem = off_3FC3E30;
        IGameSystem::~IGameSystem(&v38);
        v31 = EventPostSpawnGroupUnload_t::GetVTableIndex(void)::s_nComputedIndex;
      }
      IGameSystem::DispatchEventInternal(v31, 0x89uLL, &v42);
      if ( postMsg.m_SpawnGroupName.m_pString != 0 )
        CUtlString::FreeMemoryBlock(&postMsg.m_SpawnGroupName);
      if ( v42.m_pString != 0 )
        CUtlString::FreeMemoryBlock(&v42);
    }
    v42.m_pString = 0;
    postMsg.m_SpawnGroupName.m_pString = 0;
    v32 = v10->m_pSpawnGroup->GetWorldName();
    CUtlString::operator=(&v42, v32);
    v33 = (*(v10->m_pSpawnGroup->_vptr_ISpawnGroup + 1))(v10->m_pSpawnGroup);
    CUtlString::operator=(&postMsg.m_SpawnGroupName, v33);
    v34 = EventSpawnGroupUncache_t::GetVTableIndex(void)::s_nComputedIndex;
    LODWORD(postMsg.m_EntityLumpName.m_pString) = handle;
    if ( EventSpawnGroupUncache_t::GetVTableIndex(void)::s_nComputedIndex < 0 )
    {
      v39._vptr_IGameSystem = off_3FC3E30;
      if ( `guard variable for'int ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventSpawnGroupUncache_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventSpawnGroupUncache_t const&))::ppVTableNew == 0
        && __cxa_guard_acquire(&`guard variable for'int ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventSpawnGroupUncache_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventSpawnGroupUncache_t const&))::ppVTableNew) != 0 )
      {
        ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventSpawnGroupUncache_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventSpawnGroupUncache_t const&))::ppVTableNew = ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventSpawnGroupUncache_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventSpawnGroupUncache_t const&))::calculator;
        __cxa_guard_release(&`guard variable for'int ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventSpawnGroupUncache_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventSpawnGroupUncache_t const&))::ppVTableNew);
      }
      v39._vptr_IGameSystem = ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventSpawnGroupUncache_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventSpawnGroupUncache_t const&))::ppVTableNew;
      EventSpawnGroupUncache_t::GetVTableIndex(void)::s_nComputedIndex = (*(ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventSpawnGroupUncache_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventSpawnGroupUncache_t const&))::ppVTableNew
                                                                          + 104))(&v39);
      v39._vptr_IGameSystem = off_3FC3E30;
      IGameSystem::~IGameSystem(&v39);
      v34 = EventSpawnGroupUncache_t::GetVTableIndex(void)::s_nComputedIndex;
    }
    IGameSystem::DispatchEventInternal(v34, 0x69uLL, &v42);
    if ( postMsg.m_SpawnGroupName.m_pString != 0 )
      CUtlString::FreeMemoryBlock(&postMsg.m_SpawnGroupName);
    if ( v42.m_pString != 0 )
      CUtlString::FreeMemoryBlock(&v42);
    CUtlVectorBase<CEntityHandle,CUtlMemory<CEntityHandle,int>>::RemoveAll(&v40);
    if ( (HIDWORD(entityList.m_Memory.m_pMemory) & 0xC0000000) == 0 )
    {
      CUtlMemory<CEntityHandle,int>::Purge(&entityList);
      if ( (HIDWORD(entityList.m_Memory.m_pMemory) & 0xC0000000) == 0 )
        CUtlMemory<CEntityHandle,int>::Purge(&entityList);
    }
  }
  --IWrappedInterpolatedVar::s_WrappedInterpolatedVarState.m_InterpolationTimeStack.m_Size;
}


// CSpawnGroupMgrGameSystem::GetSpawnGroups  (line 1141, @0x0000000001f44a50, libserver.so)  // inlines: AddToTail, CopyConstruct<unsigned int>, Element, GrowMemory, IsIdxValid, IsValidIndex, LeftChild, operator[]
// calls: CUtlMemory<unsigned int, int>::Grow
// callers: UTIL_FindSpawnGroupsOriginTouches, CSpawnGroupMgrGameSystem::GetMapName, CSpawnGroupMgrGameSystem::OnSpawnGroupList, CSpawnGroupMgrGameSystem::SpawnGroupActivate_CompletionFunc, CSpawnGroupMgrGameSystem::SpawnGroupUnload_CompletionFunc, CSpawnGroupMgrGameSystem::StreamEntitiesToFile, CLoopModeGameToolHooks::OnToolRestartMap, CRespawnAllEntitiesSystem::FrameUpdatePostEntityThink, ents, EntityListCompletion, ent_characterize
void __fastcall CSpawnGroupMgrGameSystem::GetSpawnGroups(
        const CSpawnGroupMgrGameSystem *const this,
        CUtlVector<unsigned int,CUtlMemory<unsigned int,int> > *const list)
{
  CUtlMemory<unsigned int,int> *p_m_Memory; // r8
  __int64 v5; // r12
  int v6; // ebx
  int m_nAllocationCount; // eax
  UtlRBTreeNode_t<CUtlMap<unsigned int,CMapSpawnGroup*>::Node_t,short unsigned int> *m_pMemory; // rdx
  UtlRBTreeNode_t<CUtlMap<unsigned int,CMapSpawnGroup*>::Node_t,short unsigned int> *v9; // r14
  CUtlMap<unsigned int,CMapSpawnGroup*,short unsigned int,bool (*)(unsigned int const&,unsigned int const&)>::ElemType_t elem; // rdx
  __int64 m_Size; // rax
  int v12; // edx
  unsigned int *v13; // rax
  int v14; // [rsp+4h] [rbp-3Ch]
  CUtlMemory<unsigned int,int> *v15; // [rsp+8h] [rbp-38h]

  p_m_Memory = &list->m_Memory;
  v5 = 0;
  v6 = 0;
  m_nAllocationCount = this->m_SpawnGroups.m_Tree.m_Elements.m_nAllocationCount;
  if ( m_nAllocationCount != 0 )
  {
    do
    {
      if ( v6 < m_nAllocationCount && v6 <= this->m_SpawnGroups.m_Tree.m_LastAlloc.index )
      {
        m_pMemory = this->m_SpawnGroups.m_Tree.m_Elements.m_pMemory;
        if ( m_pMemory[v6].m_Left != v6 )
        {
          v9 = &m_pMemory[v5];
          elem = m_pMemory[v5].m_Data.elem;
          if ( elem != 0 && elem->m_bSpawnGroupLoadDispatched )
          {
            m_Size = list->m_Size;
            if ( m_Size == list->m_Memory.m_nAllocationCount )
            {
              v14 = list->m_Size;
              v15 = p_m_Memory;
              CUtlMemory<unsigned int,int>::Grow(p_m_Memory, 1);
              v12 = list->m_Size;
              m_Size = v14;
              p_m_Memory = v15;
            }
            else
            {
              v12 = list->m_Size;
            }
            list->m_Size = v12 + 1;
            v13 = &list->m_Memory.m_pMemory[m_Size];
            if ( v13 != 0 )
              *v13 = v9->m_Data.key;
            m_nAllocationCount = this->m_SpawnGroups.m_Tree.m_Elements.m_nAllocationCount;
          }
        }
      }
      ++v6;
      ++v5;
    }
    while ( m_nAllocationCount > v6 );
  }
}


// CSpawnGroupMgrGameSystem::GetWorldReference  (line 1153, @0x0000000001f43270, libserver.so)
// calls: CSpawnGroupMgrGameSystem::Get
// callers: CEnvSky::UpdateSceneObjects, CPhysicsGameSystem::LoadSpawnGroupPhysics, CLoopModeGameToolHooks::OnToolRestartMap, CDOTAFogOfWarSystem::ComputeFOWBoundsForSpawnGroup
IWorldReference *__fastcall CSpawnGroupMgrGameSystem::GetWorldReference(
        const CSpawnGroupMgrGameSystem *const this,
        SpawnGroupHandle_t hSpawnGroup)
{
  const CMapSpawnGroup *v2; // rax

  v2 = CSpawnGroupMgrGameSystem::Get(this, hSpawnGroup);
  if ( v2 != 0 )
    return (*(v2->m_pSpawnGroup->_vptr_ISpawnGroup + 11))(v2->m_pSpawnGroup);
  else
    return 0;
}


// CSpawnGroupMgrGameSystem::GetWorldGroupId  (line 1163, @0x0000000001f432a0, libserver.so)  // inlines: CUtlStringToken, GetSpawnGroupDesc, SetToIdentity, SpawnGroupDesc_t
// calls: CSpawnGroupMgrGameSystem::Get, SetIdentityMatrix
// callers: CWorldGameSystem::PreSpawnGroupLoad, CPhysicsGameSystem::LoadSpawnGroupPhysics, CPhysicsGameSystem::UnloadSpawnGroupPhysics, CRenderGameSystem::PreSpawnGroupLoad, CRenderGameSystem::PostSpawnGroupUnload, CGameEntitySystem::GetSpawnGroupWorldId, IsSpawnGroupAssociatedWithPrimaryMap, UTIL_TraceRayVerticalGroundHeight, CRespawnAllEntitiesSystem::FrameUpdatePostEntityThink, CParticleSystemQueryGameSystem::PostSpawnGroupUnload, CParticleSystemQueryGameSystem::PreSpawnGroupLoad, CDOTAFogOfWarSystem::ActiveSpawnGroupChanged (14 total)
WorldGroupId_t __fastcall CSpawnGroupMgrGameSystem::GetWorldGroupId(
        const CSpawnGroupMgrGameSystem *const this,
        SpawnGroupHandle_t hSpawnGroup)
{
  const CMapSpawnGroup *v2; // rbx
  WorldGroupId_t result; // eax
  SpawnGroupDesc_t desc; // [rsp+0h] [rbp-B0h] BYREF

  v2 = CSpawnGroupMgrGameSystem::Get(this, hSpawnGroup);
  result.m_nHashCode = 0;
  if ( v2 != 0 )
  {
    memset(&desc.m_pWorldName, 0, 72);
    desc.m_iPriorityLoader = -2;
    desc.m_manifestLoadPriority = ResourceManifestLoadPriority_t::RESOURCE_MANIFEST_LOAD_PRIORITY_DEFAULT;
    desc.m_flTimeoutInterval = 0.0;
    desc.m_pSaveFileName = 0;
    desc.m_bCreateClientEntitiesOnLaterConnectingClients = 0;
    desc.m_bDontSpawnEntities = 0;
    desc.m_bBlockUntilLoaded = 0;
    desc.m_bLoadStreamingData = 1;
    desc.m_bCreateNewSceneWorld = 0;
    desc.m_bManualCompletion = 0;
    desc.m_bSetActivePostLoad = 0;
    SetIdentityMatrix(&desc.m_vecWorldOffset);
    (*(v2->m_pSpawnGroup->_vptr_ISpawnGroup + 19))(v2->m_pSpawnGroup, &desc);
    return desc.m_worldGroupId.m_nHashCode;
  }
  return result;
}


// CSpawnGroupMgrGameSystem::Get  (line 1177, @0x0000000001f43220, libserver.so)  // inlines: Element, Find, operator[]
// calls: CUtlRBTree<CUtlMap<unsigned int, CMapSpawnGroup*>::Node_t, short unsigned int, CUtlMap<unsigned int, CMapSpawnGroup*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, CMapSpawnGroup*>::Node_t, short unsigned int>, short unsigned int> >::Find
// callers: CSpawnGroupMgrGameSystem::GetWorldReference, CSpawnGroupMgrGameSystem::GetWorldGroupId, CSpawnGroupMgrGameSystem::IsSpawnGroupFullyLoaded, CSpawnGroupMgrGameSystem::GetSpawnGroupName, CSpawnGroupMgrGameSystem::GetSpawnGroupDesc, CSpawnGroupMgrGameSystem::IsReadyToSpawnEntities, CSpawnGroupMgrGameSystem::GetSpawnGroupEntityFilterName, CSpawnGroupMgrGameSystem::GetSpawnGroupEntityLumpName, CSpawnGroupMgrGameSystem::GetSpawnGroupWorldName, CSpawnGroupMgrGameSystem::SpawnGroupHasWorldGeometry, CSpawnGroupMgrGameSystem::GetSpawnGroupWorldOffset, CSpawnGroupMgrGameSystem::GetSpawnGroupParentNameFixup (18 total)
const CMapSpawnGroup *__fastcall CSpawnGroupMgrGameSystem::Get(
        const CSpawnGroupMgrGameSystem *const this,
        SpawnGroupHandle_t h)
{
  unsigned __int16 v3; // ax
  CUtlMap<unsigned int,CMapSpawnGroup*,short unsigned int,bool (*)(unsigned int const&,unsigned int const&)>::Node_t search; // [rsp+0h] [rbp-20h] BYREF

  search.key = h;
  v3 = CUtlRBTree<CUtlMap<unsigned int,CMapSpawnGroup *,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short,CUtlMap<unsigned int,CMapSpawnGroup *,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,CMapSpawnGroup *,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>>::Find(
         &this->m_SpawnGroups.m_Tree,
         &search);
  if ( v3 == 0xFFFF )
    return 0;
  else
    return this->m_SpawnGroups.m_Tree.m_Elements.m_pMemory[v3].m_Data.elem;
}


// CSpawnGroupMgrGameSystem::Get  (line 1185, @0x0000000001f437a0, libserver.so)  // inlines: Element, Find, operator[]
// calls: CUtlRBTree<CUtlMap<unsigned int, CMapSpawnGroup*>::Node_t, short unsigned int, CUtlMap<unsigned int, CMapSpawnGroup*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, CMapSpawnGroup*>::Node_t, short unsigned int>, short unsigned int> >::Find
// callers: CNetworkTransmitComponent::IsInPVS, CSpawnGroupMgrGameSystem::SpawnGroupInit, CSpawnGroupMgrGameSystem::CreateLoadingSpawnGroupForSaveFile, CSpawnGroupMgrGameSystem::CreateLoadingSpawnGroup, CSpawnGroupMgrGameSystem::SetLoadingSpawnGroup, CSpawnGroupMgrGameSystem::FlagManualCreation, CSpawnGroupMgrGameSystem::WasManualCreationFlagged, CSpawnGroupMgrGameSystem::SetActiveSpawnGroup, CSpawnGroupMgrGameSystem::PreSpawnGroupLoad, CSpawnGroupMgrGameSystem::AddChildSpawnGroup, CSpawnGroupMgrGameSystem::OnSpawnGroupList, CSpawnGroupMgrGameSystem::SpawnGroupActivate_CompletionFunc (20 total)
CMapSpawnGroup *__fastcall CSpawnGroupMgrGameSystem::Get(CSpawnGroupMgrGameSystem *const this, SpawnGroupHandle_t h)
{
  unsigned __int16 v3; // ax
  CUtlMap<unsigned int,CMapSpawnGroup*,short unsigned int,bool (*)(unsigned int const&,unsigned int const&)>::Node_t search; // [rsp+0h] [rbp-20h] BYREF

  search.key = h;
  v3 = CUtlRBTree<CUtlMap<unsigned int,CMapSpawnGroup *,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short,CUtlMap<unsigned int,CMapSpawnGroup *,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,CMapSpawnGroup *,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>>::Find(
         &this->m_SpawnGroups.m_Tree,
         &search);
  if ( v3 == 0xFFFF )
    return 0;
  else
    return this->m_SpawnGroups.m_Tree.m_Elements.m_pMemory[v3].m_Data.elem;
}


// CSpawnGroupMgrGameSystem::IsSpawnGroupFullyLoaded  (line 1193, @0x0000000001f43380, libserver.so)
// calls: CSpawnGroupMgrGameSystem::Get
bool __fastcall CSpawnGroupMgrGameSystem::IsSpawnGroupFullyLoaded(
        const CSpawnGroupMgrGameSystem *const this,
        SpawnGroupHandle_t h)
{
  const CMapSpawnGroup *v2; // rax

  v2 = CSpawnGroupMgrGameSystem::Get(this, h);
  return v2 == 0 || v2->m_bSpawnGroupLoadDispatched;
}


// CSpawnGroupMgrGameSystem::FindByName  (line 1202, @0x0000000001f43fe0, libserver.so)  // inlines: Element, FirstInorder, GetName, LeftChild, NextInorder, operator[]
// calls: V_AreFileNamesEqual, CUtlRBTree<CUtlMap<unsigned int, CMapSpawnGroup*>::Node_t, short unsigned int, CUtlMap<unsigned int, CMapSpawnGroup*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, CMapSpawnGroup*>::Node_t, short unsigned int>, short unsigned int> >::NextInorder
// callers: SpawnGroupConnectionInfo_t::GetSpawnGroup
CMapSpawnGroup *__fastcall CSpawnGroupMgrGameSystem::FindByName(
        CSpawnGroupMgrGameSystem *const this,
        const char *pGroupName)
{
  unsigned __int16 m_Root; // bx
  UtlRBTreeNode_t<CUtlMap<unsigned int,CMapSpawnGroup*>::Node_t,short unsigned int> *m_pMemory; // rdx
  __int64 v5; // rax
  unsigned __int16 m_Left; // si
  __int64 v8; // r15
  CUtlMap<unsigned int,CMapSpawnGroup*,short unsigned int,bool (*)(unsigned int const&,unsigned int const&)>::ElemType_t elem; // rax
  __int64 v10; // rax

  m_Root = this->m_SpawnGroups.m_Tree.m_Root;
  if ( m_Root == 0xFFFF )
    return 0;
  m_pMemory = this->m_SpawnGroups.m_Tree.m_Elements.m_pMemory;
  v5 = m_Root;
  m_Left = m_pMemory[m_Root].m_Left;
  if ( m_Left != 0xFFFF )
  {
    while ( 1 )
    {
      v5 = m_Left;
      if ( m_pMemory[m_Left].m_Left == 0xFFFF )
        break;
      m_Left = m_pMemory[m_Left].m_Left;
    }
    m_Root = m_Left;
  }
  while ( 1 )
  {
    v8 = v5;
    elem = m_pMemory[v5].m_Data.elem;
    if ( elem->m_bSpawnGroupLoadDispatched )
    {
      v10 = elem->m_pSpawnGroup->GetWorldName();
      if ( V_AreFileNamesEqual(v10, pGroupName, 0) != 0 )
        break;
    }
    m_Root = CUtlRBTree<CUtlMap<unsigned int,CMapSpawnGroup *,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short,CUtlMap<unsigned int,CMapSpawnGroup *,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,CMapSpawnGroup *,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>>::NextInorder(
               &this->m_SpawnGroups.m_Tree,
               m_Root);
    if ( m_Root == 0xFFFF )
      return 0;
    m_pMemory = this->m_SpawnGroups.m_Tree.m_Elements.m_pMemory;
    v5 = m_Root;
  }
  return this->m_SpawnGroups.m_Tree.m_Elements.m_pMemory[v8].m_Data.elem;
}


// CSpawnGroupMgrGameSystem::FindSpawnGroupByName  (line 1214, @0x0000000001f44130, libserver.so)  // inlines: Element, FirstInorder, GetName, LeftChild, NextInorder, operator[]
// calls: V_AreFileNamesEqual, CUtlRBTree<CUtlMap<unsigned int, CMapSpawnGroup*>::Node_t, short unsigned int, CUtlMap<unsigned int, CMapSpawnGroup*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, CMapSpawnGroup*>::Node_t, short unsigned int>, short unsigned int> >::NextInorder
// callers: CSpawnGroupMgrGameSystem::OnSpawnGroupActivate, CSpawnGroupMgrGameSystem::OnSpawnGroupSave, CSpawnGroupMgrGameSystem::OnSpawnGroupUnload, Script_UnloadSpawnGroup, ents, CNavGameSystem::SwitchNav, CInfoSpawnGroupLoadUnload::InputActivateSpawnGroup, CInfoSpawnGroupLoadUnload::InputStartSpawnGroupUnload, CInfoSpawnGroupLoadUnload::SpawnGroupUnloadingThink
SpawnGroupHandle_t __fastcall CSpawnGroupMgrGameSystem::FindSpawnGroupByName(
        const CSpawnGroupMgrGameSystem *const this,
        const char *pGroupName)
{
  unsigned __int16 m_Root; // bx
  UtlRBTreeNode_t<CUtlMap<unsigned int,CMapSpawnGroup*>::Node_t,short unsigned int> *m_pMemory; // rdx
  __int64 v5; // rax
  unsigned __int16 m_Left; // si
  __int64 v8; // r15
  CUtlMap<unsigned int,CMapSpawnGroup*,short unsigned int,bool (*)(unsigned int const&,unsigned int const&)>::ElemType_t elem; // rax
  __int64 v10; // rax

  m_Root = this->m_SpawnGroups.m_Tree.m_Root;
  if ( m_Root == 0xFFFF )
    return 0;
  m_pMemory = this->m_SpawnGroups.m_Tree.m_Elements.m_pMemory;
  v5 = m_Root;
  m_Left = m_pMemory[m_Root].m_Left;
  if ( m_Left != 0xFFFF )
  {
    while ( 1 )
    {
      v5 = m_Left;
      if ( m_pMemory[m_Left].m_Left == 0xFFFF )
        break;
      m_Left = m_pMemory[m_Left].m_Left;
    }
    m_Root = m_Left;
  }
  while ( 1 )
  {
    v8 = v5;
    elem = m_pMemory[v5].m_Data.elem;
    if ( elem->m_bSpawnGroupLoadDispatched )
    {
      v10 = elem->m_pSpawnGroup->GetWorldName();
      if ( V_AreFileNamesEqual(v10, pGroupName, 0) != 0 )
        break;
    }
    m_Root = CUtlRBTree<CUtlMap<unsigned int,CMapSpawnGroup *,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short,CUtlMap<unsigned int,CMapSpawnGroup *,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,CMapSpawnGroup *,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>>::NextInorder(
               &this->m_SpawnGroups.m_Tree,
               m_Root);
    if ( m_Root == 0xFFFF )
      return 0;
    m_pMemory = this->m_SpawnGroups.m_Tree.m_Elements.m_pMemory;
    v5 = m_Root;
  }
  return this->m_SpawnGroups.m_Tree.m_Elements.m_pMemory[v8].m_Data.key;
}


// CSpawnGroupMgrGameSystem::GetSpawnGroupName  (line 1226, @0x0000000001f433a0, libserver.so)  // inlines: GetName
// calls: CSpawnGroupMgrGameSystem::Get
// callers: CSpawnGroupMgrGameSystem::FrameBoundary, CSpawnGroupMgrGameSystem::SpawnGroupUnload_CompletionFunc, CSpawnGroupMgrGameSystem::UnloadSpawnGroup, CPhysicsGameSystem::GetOrCreateLevelWorld, CPhysicsGameSystem::LoadSpawnGroupPhysics, CPhysicsGameSystem::UnloadSpawnGroupPhysics, CRespawnAllEntitiesSystem::FrameUpdatePostEntityThink, ents, EntityListCompletion, ent_characterize, CSoundscapeSystem::InitForSpawnGroup, CNavGameSystem::LoadNavForSpawnGroup
const char *__fastcall CSpawnGroupMgrGameSystem::GetSpawnGroupName(
        const CSpawnGroupMgrGameSystem *const this,
        SpawnGroupHandle_t hSpawnGroup)
{
  const CMapSpawnGroup *v2; // rax

  v2 = CSpawnGroupMgrGameSystem::Get(this, hSpawnGroup);
  if ( v2 != 0 )
    return v2->m_pSpawnGroup->GetWorldName();
  else
    return "";
}


// CSpawnGroupMgrGameSystem::GetSpawnGroupDesc  (line 1232, @0x0000000001f43550, libserver.so)  // inlines: GetSpawnGroupDesc
// calls: CSpawnGroupMgrGameSystem::Get
// callers: CGameEntitySystem::HandlePointPrefab
bool __fastcall CSpawnGroupMgrGameSystem::GetSpawnGroupDesc(
        const CSpawnGroupMgrGameSystem *const this,
        SpawnGroupHandle_t hSpawnGroup,
        SpawnGroupDesc_t *pDesc)
{
  const CMapSpawnGroup *v4; // rax
  __int64 v5; // rdx
  bool v6; // cl

  v4 = CSpawnGroupMgrGameSystem::Get(this, hSpawnGroup);
  v6 = 0;
  if ( v4 != 0 )
  {
    (*(v4->m_pSpawnGroup->_vptr_ISpawnGroup + 19))(v4->m_pSpawnGroup, pDesc, v5, 0);
    return 1;
  }
  return v6;
}


// CSpawnGroupMgrGameSystem::FlagManualCreation  (line 1243, @0x0000000001f43c60, libserver.so)
// calls: CSpawnGroupMgrGameSystem::Get
// callers: CDOTAGamerules::State_Enter_WAIT_FOR_MAP_TO_LOAD
bool __fastcall CSpawnGroupMgrGameSystem::FlagManualCreation(
        CSpawnGroupMgrGameSystem *const this,
        SpawnGroupHandle_t h)
{
  CMapSpawnGroup *v2; // rax
  __int64 v3; // rsi
  bool v4; // dl

  v2 = CSpawnGroupMgrGameSystem::Get(this, h);
  v4 = 0;
  if ( v2 != 0 )
  {
    (*(v2->m_pSpawnGroup->_vptr_ISpawnGroup + 20))(v2->m_pSpawnGroup, v3, 0);
    return 1;
  }
  return v4;
}


// CSpawnGroupMgrGameSystem::WasManualCreationFlagged  (line 1254, @0x0000000001f43c90, libserver.so)
// calls: CSpawnGroupMgrGameSystem::Get
// callers: CDOTAGamerules::State_Enter_WAIT_FOR_MAP_TO_LOAD
bool __fastcall CSpawnGroupMgrGameSystem::WasManualCreationFlagged(
        CSpawnGroupMgrGameSystem *const this,
        SpawnGroupHandle_t h)
{
  CMapSpawnGroup *v2; // rax

  v2 = CSpawnGroupMgrGameSystem::Get(this, h);
  return v2 != 0 && (*(v2->m_pSpawnGroup->_vptr_ISpawnGroup + 21))(v2->m_pSpawnGroup);
}


// CSpawnGroupMgrGameSystem::IsReadyToSpawnEntities  (line 1264, @0x0000000001f43590, libserver.so)
// calls: CSpawnGroupMgrGameSystem::Get
// callers: CDOTAGamerules::State_Think_WAIT_FOR_MAP_TO_LOAD
bool __fastcall CSpawnGroupMgrGameSystem::IsReadyToSpawnEntities(
        const CSpawnGroupMgrGameSystem *const this,
        SpawnGroupHandle_t h)
{
  const CMapSpawnGroup *v2; // rax

  v2 = CSpawnGroupMgrGameSystem::Get(this, h);
  return v2 != 0 && (*(v2->m_pSpawnGroup->_vptr_ISpawnGroup + 25))(v2->m_pSpawnGroup);
}


// CSpawnGroupMgrGameSystem::GetSpawnGroupEntityFilterName  (line 1274, @0x0000000001f435c0, libserver.so)  // inlines: GetEntityFilterName
// calls: CSpawnGroupMgrGameSystem::Get
const char *__fastcall CSpawnGroupMgrGameSystem::GetSpawnGroupEntityFilterName(
        const CSpawnGroupMgrGameSystem *const this,
        SpawnGroupHandle_t hSpawnGroup)
{
  const CMapSpawnGroup *v2; // rax

  v2 = CSpawnGroupMgrGameSystem::Get(this, hSpawnGroup);
  if ( v2 != 0 )
    return (*(v2->m_pSpawnGroup->_vptr_ISpawnGroup + 2))(v2->m_pSpawnGroup);
  else
    return "";
}


// CSpawnGroupMgrGameSystem::GetSpawnGroupEntityLumpName  (line 1280, @0x0000000001f435f0, libserver.so)  // inlines: GetEntityLumpName
// calls: CSpawnGroupMgrGameSystem::Get
// callers: CDOTA_MapTree::Spawn
const char *__fastcall CSpawnGroupMgrGameSystem::GetSpawnGroupEntityLumpName(
        const CSpawnGroupMgrGameSystem *const this,
        SpawnGroupHandle_t hSpawnGroup)
{
  const CMapSpawnGroup *v2; // rax

  v2 = CSpawnGroupMgrGameSystem::Get(this, hSpawnGroup);
  if ( v2 != 0 )
    return (*(v2->m_pSpawnGroup->_vptr_ISpawnGroup + 1))(v2->m_pSpawnGroup);
  else
    return "";
}


// CSpawnGroupMgrGameSystem::GetSpawnGroupWorldName  (line 1286, @0x0000000001f43620, libserver.so)  // inlines: GetWorldName
// calls: CSpawnGroupMgrGameSystem::Get
// callers: CWorldGameSystem::PreSpawnGroupLoad, CSource2Server::GetActiveWorldName
const char *__fastcall CSpawnGroupMgrGameSystem::GetSpawnGroupWorldName(
        const CSpawnGroupMgrGameSystem *const this,
        SpawnGroupHandle_t hSpawnGroup)
{
  const CMapSpawnGroup *v2; // rax

  v2 = CSpawnGroupMgrGameSystem::Get(this, hSpawnGroup);
  if ( v2 != 0 )
    return v2->m_pSpawnGroup->GetWorldName();
  else
    return "";
}


// CSpawnGroupMgrGameSystem::SpawnGroupHasWorldGeometry  (line 1292, @0x0000000001f43650, libserver.so)
// calls: CSpawnGroupMgrGameSystem::Get, CMapSpawnGroup::HasWorldGeometry
bool __fastcall CSpawnGroupMgrGameSystem::SpawnGroupHasWorldGeometry(
        const CSpawnGroupMgrGameSystem *const this,
        SpawnGroupHandle_t hSpawnGroup)
{
  const CMapSpawnGroup *v2; // rax

  v2 = CSpawnGroupMgrGameSystem::Get(this, hSpawnGroup);
  return v2 != 0 && CMapSpawnGroup::HasWorldGeometry(v2);
}


// CSpawnGroupMgrGameSystem::GetSpawnGroupWorldOffset  (line 1301, @0x0000000001f43680, libserver.so)  // inlines: GetWorldOffset
// calls: CSpawnGroupMgrGameSystem::Get
// callers: CPhysicsGameSystem::LoadSpawnGroupPhysics, CRespawnAllEntitiesSystem::FrameUpdatePostEntityThink, CDOTAFogOfWarSystem::ComputeFOWBoundsForSpawnGroup, CNavGameSystem::LoadNavForSpawnGroup
const matrix3x4a_t *__fastcall CSpawnGroupMgrGameSystem::GetSpawnGroupWorldOffset(
        const CSpawnGroupMgrGameSystem *const this,
        SpawnGroupHandle_t hSpawnGroup)
{
  const CMapSpawnGroup *v2; // rax

  v2 = CSpawnGroupMgrGameSystem::Get(this, hSpawnGroup);
  if ( v2 != 0 )
    return (*(v2->m_pSpawnGroup->_vptr_ISpawnGroup + 4))(v2->m_pSpawnGroup);
  else
    return &g_MatrixIdentity;
}


// CompareEHandlesByEntityIndex  (line 1307, @0x0000000001f2a390, libserver.so)  // inlines: GetEntryIndex, IsValid
// callers: CSpawnGroupMgrGameSystem::StreamEntitiesToFile
int __fastcall CompareEHandlesByEntityIndex(const CEntityHandle *lhs, const CEntityHandle *rhs)
{
  int v2; // r8d
  int v3; // ecx
  int v4; // ecx
  int result; // eax

  v2 = 0x7FFF;
  if ( lhs->m_Index != -1 )
    v2 = lhs->m_Index & 0x7FFF;
  v3 = 0x7FFF;
  if ( rhs->m_Index != -1 )
    v3 = rhs->m_Index & 0x7FFF;
  if ( v2 < v3 )
    return -1;
  v4 = 0x7FFF;
  if ( lhs->m_Index != -1 )
    v4 = lhs->m_Index & 0x7FFF;
  result = 0;
  if ( rhs->m_Index != -1 )
    return v4 > (rhs->m_Index & 0x7FFF);
  return result;
}


// CSpawnGroupMgrGameSystem::GetEntitiesBySpawnGroup  (line 1316, @0x0000000001f593b0, libserver.so)  // inlines: AddToTail, CEntityHandle, CopyConstruct<CEntityHandle>, Element, GetEHandle, GetEntryIndex, GetSerialNumber, GrowMemory, Init, operator[]
// calls: CUtlMemory<CEntityHandle, int>::Grow
// callers: CSpawnGroupMgrGameSystem::SpawnGroupActuallyShutdown, CSpawnGroupMgrGameSystem::SpawnGroupShutdown, CSpawnGroupMgrGameSystem::SpawnGroupBuildStreamInfo, CSpawnGroupMgrGameSystem::StreamEntitiesToFile
void __fastcall CSpawnGroupMgrGameSystem::GetEntitiesBySpawnGroup(
        CSpawnGroupMgrGameSystem *const this,
        SpawnGroupHandle_t handle,
        CUtlVector<CEntityHandle,CUtlMemory<CEntityHandle,int> > *const list)
{
  CUtlMemory<CEntityHandle,int> *p_m_Memory; // r14
  CEntityIdentity *i; // rbx
  __int16 v7; // r8
  __int64 m_Size; // r12
  int v9; // eax
  CEntityHandle *v10; // rax
  int v11; // [rsp+0h] [rbp-40h]

  p_m_Memory = &list->m_Memory;
  for ( i = g_pEntitySystem->m_EntityList.m_pFirstActiveEntity; i != 0; i = i->m_pNext )
  {
    while ( 1 )
    {
      if ( i->m_hSpawnGroup == handle )
      {
        v7 = 0x7FFF;
        if ( i->m_EHandle.m_Index != -1 )
          v7 = i->m_EHandle.m_Index & 0x7FFF;
        m_Size = list->m_Size;
        v11 = (((i->m_EHandle.m_Index >> 15) - (i->m_flags & 1)) << 15) | v7 & 0x7FFF;
        v9 = m_Size;
        if ( m_Size == list->m_Memory.m_nAllocationCount )
        {
          CUtlMemory<CEntityHandle,int>::Grow(p_m_Memory, 1);
          v9 = list->m_Size;
        }
        list->m_Size = v9 + 1;
        v10 = &list->m_Memory.m_pMemory[m_Size];
        if ( v10 != 0 )
          break;
      }
      i = i->m_pNext;
      if ( i == 0 )
        return;
    }
    v10->m_Index = v11;
  }
}


// CSpawnGroupMgrGameSystem::GetSpawnGroupParentNameFixup  (line 1330, @0x0000000001f436b0, libserver.so)  // inlines: GetParentNameFixup
// calls: CSpawnGroupMgrGameSystem::Get
// callers: CGameEntitySystem::HandlePointPrefab, CreateInstanceFromLump
const char *__fastcall CSpawnGroupMgrGameSystem::GetSpawnGroupParentNameFixup(
        const CSpawnGroupMgrGameSystem *const this,
        SpawnGroupHandle_t h)
{
  const CMapSpawnGroup *v2; // rax

  v2 = CSpawnGroupMgrGameSystem::Get(this, h);
  if ( v2 != 0 )
    return (*(v2->m_pSpawnGroup->_vptr_ISpawnGroup + 6))(v2->m_pSpawnGroup);
  else
    return "";
}


// CSpawnGroupMgrGameSystem::GetSpawnGroupLocalNameFixup  (line 1341, @0x0000000001f436e0, libserver.so)  // inlines: GetLocalNameFixup
// calls: CSpawnGroupMgrGameSystem::Get
// callers: CGameEntitySystem::HandlePointPrefab, CreateInstanceFromLump
const char *__fastcall CSpawnGroupMgrGameSystem::GetSpawnGroupLocalNameFixup(
        const CSpawnGroupMgrGameSystem *const this,
        SpawnGroupHandle_t h)
{
  const CMapSpawnGroup *v2; // rax

  v2 = CSpawnGroupMgrGameSystem::Get(this, h);
  if ( v2 != 0 )
    return (*(v2->m_pSpawnGroup->_vptr_ISpawnGroup + 7))(v2->m_pSpawnGroup);
  else
    return "";
}


// CSpawnGroupMgrGameSystem::SpawnGroupBuildStreamInfo  (line 1352, @0x0000000001f59cc0, libserver.so)  // inlines: GetName, GetWorldOffset, Purge, curtime
// calls: CSpawnGroupMgrGameSystem::Get, CUtlString::operator=, CUtlVectorBase<CEntityHandle, CUtlMemory<CEntityHandle, int> >::RemoveAll, CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::RemoveAll, CUtlMemory<CUtlString, int>::Purge, CSpawnGroupMgrGameSystem::GetEntitiesBySpawnGroup
// callers: CSpawnGroupMgrGameSystem::SpawnGroupSaveEntities
void __fastcall CSpawnGroupMgrGameSystem::SpawnGroupBuildStreamInfo(
        CSpawnGroupMgrGameSystem *const this,
        SpawnGroupHandle_t handle,
        SaveStreamInfo_t *pInfo)
{
  CMapSpawnGroup *v6; // rax
  float m_flCurrentTime; // xmm0_4
  CMapSpawnGroup *v8; // r12
  CGlobalVars *v9; // r15
  const char *v10; // rax
  const matrix3x4a_t *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rax
  CUtlVector<CUtlString,CUtlMemory<CUtlString,int> > *p_m_SpawnGroupResources; // rsi
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rdx

  v6 = CSpawnGroupMgrGameSystem::Get(this, handle);
  m_flCurrentTime = 0.0;
  v8 = v6;
  v9 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        (m_pfnWarningFunc)(1, 0.0);
    }
    m_flCurrentTime = v9->m_flCurrentTime;
  }
  pInfo->m_flCurrentTime = m_flCurrentTime;
  pInfo->m_nCurrentTick = gpGlobals->tickcount;
  pInfo->m_pSaveRestoreBlockSet = g_pGameSaveRestoreBlockSet;
  if ( v8 != 0 )
  {
    v10 = v8->m_pSpawnGroup->GetWorldName();
    CUtlString::operator=(&pInfo->m_SpawnGroup.m_SpawnGroupName, v10);
    v11 = (*(v8->m_pSpawnGroup->_vptr_ISpawnGroup + 4))(v8->m_pSpawnGroup);
  }
  else
  {
    CUtlString::operator=(&pInfo->m_SpawnGroup.m_SpawnGroupName, &stru_32D9EEC.m_pResourceManifestPrerequisite);
    v11 = &g_MatrixIdentity;
  }
  v12 = *&v11->m_flMatVal[0][0];
  pInfo->m_SpawnGroup.m_bStreamEntitiesFromSaveFile = 1;
  *&pInfo->m_SpawnGroup.m_vecWorldOrigin.m_flMatVal[0][0] = v12;
  *&pInfo->m_SpawnGroup.m_vecWorldOrigin.m_flMatVal[0][2] = *&v11->m_flMatVal[0][2];
  *&pInfo->m_SpawnGroup.m_vecWorldOrigin.m_flMatVal[1][0] = *&v11->m_flMatVal[1][0];
  *&pInfo->m_SpawnGroup.m_vecWorldOrigin.m_flMatVal[1][2] = *&v11->m_flMatVal[1][2];
  v13 = *&v11->m_flMatVal[2][0];
  v14 = *&v11->m_flMatVal[2][2];
  *&pInfo->m_SpawnGroup.m_vecWorldOrigin.m_flMatVal[2][0] = v13;
  *&pInfo->m_SpawnGroup.m_vecWorldOrigin.m_flMatVal[2][2] = v14;
  CUtlVectorBase<CEntityHandle,CUtlMemory<CEntityHandle,int>>::RemoveAll(&pInfo->m_Entities);
  CUtlVectorBase<CUtlString,CUtlMemory<CUtlString,int>>::RemoveAll(&pInfo->m_SpawnGroupResources);
  p_m_SpawnGroupResources = &pInfo->m_SpawnGroupResources;
  if ( (pInfo->m_SpawnGroupResources.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CUtlString,int>::Purge(&pInfo->m_SpawnGroupResources.m_Memory);
    p_m_SpawnGroupResources = &pInfo->m_SpawnGroupResources;
  }
  if ( v8 != 0 )
    (*(v8->m_pSpawnGroup->_vptr_ISpawnGroup + 22))(v8->m_pSpawnGroup, p_m_SpawnGroupResources);
  CSpawnGroupMgrGameSystem::GetEntitiesBySpawnGroup(this, handle, &pInfo->m_Entities);
}


// CSpawnGroupMgrGameSystem::SpawnGroupSaveEntities  (line 1380, @0x0000000001f59e40, libserver.so)  // inlines: CCreateGameServerLoadInfo, CUtlMemory, CUtlString, CUtlVector, CUtlVectorBase, Describe, Purge, SaveStreamInfo_t, String, ~CCreateGameServerLoadInfo, ~CUtlMemory, ~CUtlString, ~CUtlVector, ~CUtlVectorBase, ~SaveStreamInfo_t
// calls: SetIdentityMatrix, CSpawnGroupMgrGameSystem::SpawnGroupBuildStreamInfo, CSpawnGroupMgrGameSystem::Get, LoggingSystem_IsChannelEnabled, CUtlString::Get, LoggingSystem_Log, CUtlString::FreeMemoryBlock, CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::RemoveAll, CUtlVectorBase<CEntityHandle, CUtlMemory<CEntityHandle, int> >::RemoveAll, CUtlMemory<CEntityHandle, int>::Purge, CUtlMemory<CUtlString, int>::Purge, SaveStreamInfo_t::~SaveStreamInfo_t (13 total)
// strings: "%s:  Saving spawn group entities\n"
// globals: LOG_SPAWN_GROUP
void __fastcall CSpawnGroupMgrGameSystem::SpawnGroupSaveEntities(
        CSpawnGroupMgrGameSystem *const this,
        SpawnGroupHandle_t handle)
{
  CMapSpawnGroup *v4; // r12
  const char *v5; // rax
  CUtlString v6; // [rsp+0h] [rbp-D0h] BYREF
  SaveStreamInfo_t info; // [rsp+10h] [rbp-C0h] BYREF

  memset(&info.m_SpawnGroup.m_SpawnGroupName, 0, 26);
  SetIdentityMatrix(&info.m_SpawnGroup.m_vecWorldOrigin);
  info.m_Entities.m_Size = 0;
  info.m_Entities.m_Memory.m_pMemory = 0;
  info.m_Entities.m_Memory.m_nAllocationCount = 0;
  info.m_Entities.m_Memory.m_nGrowSize = 0;
  info.m_SpawnGroupResources.m_Size = 0;
  info.m_SpawnGroupResources.m_Memory.m_pMemory = 0;
  info.m_SpawnGroupResources.m_Memory.m_nAllocationCount = 0;
  info.m_SpawnGroupResources.m_Memory.m_nGrowSize = 0;
  CSpawnGroupMgrGameSystem::SpawnGroupBuildStreamInfo(this, handle, &info);
  v4 = CSpawnGroupMgrGameSystem::Get(this, handle);
  if ( LoggingSystem_IsChannelEnabled(LOG_SPAWN_GROUP, 0) != 0 )
  {
    (*(v4->m_pSpawnGroup->_vptr_ISpawnGroup + 12))(&v6);
    v5 = CUtlString::Get(&v6);
    LoggingSystem_Log(LOG_SPAWN_GROUP, 0, "%s:  Saving spawn group entities\n", v5);
    if ( v6.m_pString != 0 )
      CUtlString::FreeMemoryBlock(&v6);
  }
  CUtlVectorBase<CUtlString,CUtlMemory<CUtlString,int>>::RemoveAll(&info.m_SpawnGroupResources);
  if ( (info.m_SpawnGroupResources.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CUtlString,int>::Purge(&info.m_SpawnGroupResources.m_Memory);
    if ( (info.m_SpawnGroupResources.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CUtlString,int>::Purge(&info.m_SpawnGroupResources.m_Memory);
  }
  CUtlVectorBase<CEntityHandle,CUtlMemory<CEntityHandle,int>>::RemoveAll(&info.m_Entities);
  if ( (info.m_Entities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CEntityHandle,int>::Purge(&info.m_Entities.m_Memory);
    if ( (info.m_Entities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CEntityHandle,int>::Purge(&info.m_Entities.m_Memory);
  }
  if ( info.m_SpawnGroup.m_SpawnGroupSaveFileName.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&info.m_SpawnGroup.m_SpawnGroupSaveFileName);
  if ( info.m_SpawnGroup.m_SpawnGroupFilterName.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&info.m_SpawnGroup.m_SpawnGroupFilterName);
  if ( info.m_SpawnGroup.m_SpawnGroupName.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&info.m_SpawnGroup.m_SpawnGroupName);
}


// CSpawnGroupMgrGameSystem::SaveGame_Start  (line 1399, @0x0000000001f38930, libserver.so)  // inlines: CUtlString, GetSaveRestore, SaveGameInfo_t, SetTransition, ~CUtlString, ~SaveGameInfo_t
// calls: CUtlString::Set, CUtlString::operator=, CUtlString::FreeMemoryBlock, _Unwind_Resume, SaveGameInfo_t::~SaveGameInfo_t
// strings: "SOURCE2 SAVE COMMENT"
SaveRestoreDataHandle_t __fastcall CSpawnGroupMgrGameSystem::SaveGame_Start(
        CSpawnGroupMgrGameSystem *const this,
        const char *pSaveName,
        const char *pOldLevel,
        const char *pszLandmarkName)
{
  SaveRestoreDataHandle_t v6; // r12
  SaveGameInfo_t saveInfo; // [rsp+0h] [rbp-50h] BYREF

  saveInfo.m_sSaveName.m_pString = 0;
  CUtlString::Set(&saveInfo.m_sSaveName, pSaveName);
  saveInfo.m_sSaveComment.m_pString = 0;
  CUtlString::Set(&saveInfo.m_sSaveComment, "SOURCE2 SAVE COMMENT");
  saveInfo.m_bTransition = 0;
  saveInfo.m_sOldLevel.m_pString = 0;
  saveInfo.m_sLandmarkName.m_pString = 0;
  if ( pOldLevel != 0 )
  {
    saveInfo.m_bTransition = 1;
    CUtlString::operator=(&saveInfo.m_sOldLevel, pOldLevel);
    CUtlString::operator=(&saveInfo.m_sLandmarkName, pszLandmarkName);
  }
  v6 = (*(**(&stru_1A0B8.r_offset + g_pGameEntitySystem) + 152LL))(
         *(&stru_1A0B8.r_offset + g_pGameEntitySystem),
         &saveInfo);
  if ( saveInfo.m_sLandmarkName.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&saveInfo.m_sLandmarkName);
  if ( saveInfo.m_sOldLevel.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&saveInfo.m_sOldLevel);
  if ( saveInfo.m_sSaveComment.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&saveInfo.m_sSaveComment);
  if ( saveInfo.m_sSaveName.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&saveInfo.m_sSaveName);
  return v6;
}


// CSpawnGroupMgrGameSystem::SaveGame_Finalize  (line 1420, @0x0000000001f2a410, libserver.so)  // inlines: GetSaveRestore
bool __fastcall CSpawnGroupMgrGameSystem::SaveGame_Finalize(
        CSpawnGroupMgrGameSystem *const this,
        SaveRestoreDataHandle_t hSaveRestore)
{
  return hSaveRestore != 0
      && (*(**(&stru_1A0B8.r_offset + g_pGameEntitySystem) + 160LL))(*(&stru_1A0B8.r_offset + g_pGameEntitySystem));
}


// CSpawnGroupMgrGameSystem::SaveGame_GetLastSaveFile  (line 1437, @0x0000000001f2a450, libserver.so)  // inlines: GetSaveRestore
const char *__fastcall CSpawnGroupMgrGameSystem::SaveGame_GetLastSaveFile(CSpawnGroupMgrGameSystem *const this)
{
  return (*(**(&stru_1A0B8.r_offset + g_pGameEntitySystem) + 176LL))(*(&stru_1A0B8.r_offset + g_pGameEntitySystem));
}


// CSpawnGroupMgrGameSystem::IsGameReadyToSave  (line 1448, @0x0000000001f2a480, libserver.so)  // inlines: GetSaveRestore
bool __fastcall CSpawnGroupMgrGameSystem::IsGameReadyToSave(CSpawnGroupMgrGameSystem *const this)
{
  return (*(**(&stru_1A0B8.r_offset + g_pGameEntitySystem) + 144LL))(*(&stru_1A0B8.r_offset + g_pGameEntitySystem));
}


// CSpawnGroupMgrGameSystem::GetMapName  (line 1453, @0x0000000001f44b30, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, GetName, Purge, RemoveAll, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CSpawnGroupMgrGameSystem::GetSpawnGroups, CSpawnGroupMgrGameSystem::Get, V_stricmp_fast, CUtlMemory<unsigned int, int>::Purge, CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CSpawnGroupMgrGameSystem::StreamEntitiesToFile
const char *__fastcall CSpawnGroupMgrGameSystem::GetMapName(const CSpawnGroupMgrGameSystem *const this)
{
  __int64 v2; // rbx
  int v3; // r12d
  const CMapSpawnGroup *v4; // rax
  const char *v5; // rax
  const char *v6; // r15
  CUtlVector<unsigned int,CUtlMemory<unsigned int,int> > handles; // [rsp+0h] [rbp-50h] BYREF

  handles.m_Size = 0;
  handles.m_Memory.m_pMemory = 0;
  handles.m_Memory.m_nAllocationCount = 0;
  handles.m_Memory.m_nGrowSize = 0;
  CSpawnGroupMgrGameSystem::GetSpawnGroups(this, &handles);
  if ( handles.m_Size <= 0 )
  {
LABEL_10:
    v6 = "";
    handles.m_Size = 0;
    if ( (handles.m_Memory.m_nGrowSize & 0xC0000000) != 0 )
      return v6;
    goto LABEL_11;
  }
  v2 = 0;
  v3 = 0;
  while ( 1 )
  {
    v4 = CSpawnGroupMgrGameSystem::Get(this, handles.m_Memory.m_pMemory[v2]);
    if ( v4 != 0 )
    {
      v5 = v4->m_pSpawnGroup->GetWorldName();
      v6 = v5;
      if ( v5 != 0 && *v5 != 0 && V_stricmp_fast(v5, &stru_32D9EEC.m_pResourceManifestPrerequisite) != 0 )
        break;
    }
    ++v3;
    ++v2;
    if ( handles.m_Size <= v3 )
      goto LABEL_10;
  }
  handles.m_Size = 0;
  if ( (handles.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
LABEL_11:
    CUtlMemory<unsigned int,int>::Purge(&handles.m_Memory);
    if ( (handles.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<unsigned int,int>::Purge(&handles.m_Memory);
  }
  return v6;
}


// CSpawnGroupMgrGameSystem::StreamEntitiesToFile  (line 1476, @0x0000000001f5a050, libserver.so)  // inlines: AddToHead, CCreateGameServerLoadInfo, CEntityHandle, CUtlMemory, CUtlString, CUtlVector, CUtlVectorBase, Element, GetSaveRestore, Purge, RemoveAll, SaveStreamInfo_t, Sort, V_swap<CEntityHandle>, operator[], ~CCreateGameServerLoadInfo, ~CUtlMemory, ~CUtlString, ~CUtlVector, ~CUtlVectorBase, ~SaveStreamInfo_t
// calls: CSpawnGroupMgrGameSystem::GetSpawnGroups, CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::InsertBefore, SetIdentityMatrix, CGlobalVarsBase::curtime, CSpawnGroupMgrGameSystem::GetMapName, CUtlString::operator=, CSpawnGroupMgrGameSystem::GetEntitiesBySpawnGroup, CSpawnGroupMgrGameSystem::Get, V_qsort, CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::RemoveAll, CUtlVectorBase<CEntityHandle, CUtlMemory<CEntityHandle, int> >::RemoveAll, CUtlString::FreeMemoryBlock (19 total)
// globals: SPAWN_GROUP_HANDLE_INVALID, CompareEHandlesByEntityIndex(CEntityHandle const*,CEntityHandle const*)
bool __fastcall CSpawnGroupMgrGameSystem::StreamEntitiesToFile(
        CSpawnGroupMgrGameSystem *const this,
        SaveRestoreDataHandle_t hSaveRestore)
{
  int tickcount; // eax
  const char *MapName; // rax
  __int64 v5; // r12
  int i; // ebx
  SpawnGroupHandle_t v7; // r13d
  CMapSpawnGroup *v8; // rax
  char v9; // bl
  int v11; // r13d
  __int64 v12; // rbx
  __int64 v13; // r12
  __int64 v14; // r14
  CEntityHandle *v15; // r15
  CEntityHandle *v16; // rbx
  CEntityHandle v17; // eax
  CUtlVector<unsigned int,CUtlMemory<unsigned int,int> > handles; // [rsp+20h] [rbp-F0h] BYREF
  SaveStreamInfo_t stream; // [rsp+40h] [rbp-D0h] BYREF

  if ( hSaveRestore == 0 )
    return 0;
  handles.m_Size = 0;
  handles.m_Memory.m_pMemory = 0;
  handles.m_Memory.m_nAllocationCount = 0;
  handles.m_Memory.m_nGrowSize = 0;
  CSpawnGroupMgrGameSystem::GetSpawnGroups(this, &handles);
  CUtlVectorBase<unsigned int,CUtlMemory<unsigned int,int>>::InsertBefore(&handles, 0, &SPAWN_GROUP_HANDLE_INVALID);
  memset(&stream.m_SpawnGroup.m_SpawnGroupName, 0, 26);
  SetIdentityMatrix(&stream.m_SpawnGroup.m_vecWorldOrigin);
  stream.m_Entities.m_Size = 0;
  stream.m_Entities.m_Memory.m_pMemory = 0;
  stream.m_Entities.m_Memory.m_nAllocationCount = 0;
  stream.m_Entities.m_Memory.m_nGrowSize = 0;
  stream.m_SpawnGroupResources.m_Size = 0;
  stream.m_SpawnGroupResources.m_Memory.m_pMemory = 0;
  stream.m_SpawnGroupResources.m_Memory.m_nAllocationCount = 0;
  stream.m_SpawnGroupResources.m_Memory.m_nGrowSize = 0;
  stream.m_flCurrentTime = CGlobalVarsBase::curtime(gpGlobals, 0);
  tickcount = gpGlobals->tickcount;
  stream.m_SpawnGroup.m_bStreamEntitiesFromSaveFile = 1;
  stream.m_nCurrentTick = tickcount;
  stream.m_pSaveRestoreBlockSet = g_pGameSaveRestoreBlockSet;
  MapName = CSpawnGroupMgrGameSystem::GetMapName(this);
  CUtlString::operator=(&stream.m_SpawnGroup.m_SpawnGroupName, MapName);
  v5 = 0;
  for ( i = 0; handles.m_Size > i; ++v5 )
  {
    v7 = handles.m_Memory.m_pMemory[v5];
    CSpawnGroupMgrGameSystem::GetEntitiesBySpawnGroup(this, v7, &stream.m_Entities);
    v8 = CSpawnGroupMgrGameSystem::Get(this, v7);
    if ( v8 != 0 )
      (*(v8->m_pSpawnGroup->_vptr_ISpawnGroup + 22))(v8->m_pSpawnGroup, &stream.m_SpawnGroupResources);
    ++i;
  }
  if ( stream.m_Entities.m_Size <= 1 )
    goto LABEL_9;
  if ( stream.m_Entities.m_Memory.m_pMemory != 0 )
  {
    V_qsort(stream.m_Entities.m_Memory.m_pMemory, stream.m_Entities.m_Size, 4, CompareEHandlesByEntityIndex);
    goto LABEL_9;
  }
  v11 = stream.m_Entities.m_Size - 1;
  while ( 2 )
  {
    --v11;
    v12 = 0;
    v13 = 4LL * v11 + 4;
    while ( 1 )
    {
      v14 = v12 + 4;
      v15 = (stream.m_Entities.m_Memory.m_pMemory + v12 + 4);
      v16 = (stream.m_Entities.m_Memory.m_pMemory + v12);
      if ( CompareEHandlesByEntityIndex(v16, v15) < 0 )
        break;
      if ( v14 == v13 )
        goto LABEL_29;
LABEL_26:
      v12 = v14;
    }
    v17.m_Index = v16->m_Index;
    v16->m_Index = v15->m_Index;
    v15->m_Index = v17.m_Index;
    if ( v14 != v13 )
      goto LABEL_26;
LABEL_29:
    if ( v11 != -1 )
    {
      while ( v11 <= 0 )
      {
        if ( --v11 == -1 )
          goto LABEL_9;
      }
      continue;
    }
    break;
  }
LABEL_9:
  v9 = (*(**(&stru_1A0B8.r_offset + g_pGameEntitySystem) + 168LL))(
         *(&stru_1A0B8.r_offset + g_pGameEntitySystem),
         hSaveRestore,
         &stream);
  CUtlVectorBase<CUtlString,CUtlMemory<CUtlString,int>>::RemoveAll(&stream.m_SpawnGroupResources);
  if ( (stream.m_SpawnGroupResources.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CUtlString,int>::Purge(&stream.m_SpawnGroupResources.m_Memory);
    if ( (stream.m_SpawnGroupResources.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CUtlString,int>::Purge(&stream.m_SpawnGroupResources.m_Memory);
  }
  CUtlVectorBase<CEntityHandle,CUtlMemory<CEntityHandle,int>>::RemoveAll(&stream.m_Entities);
  if ( (stream.m_Entities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CEntityHandle,int>::Purge(&stream.m_Entities.m_Memory);
    if ( (stream.m_Entities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CEntityHandle,int>::Purge(&stream.m_Entities.m_Memory);
  }
  if ( stream.m_SpawnGroup.m_SpawnGroupSaveFileName.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&stream.m_SpawnGroup.m_SpawnGroupSaveFileName);
  if ( stream.m_SpawnGroup.m_SpawnGroupFilterName.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&stream.m_SpawnGroup.m_SpawnGroupFilterName);
  if ( stream.m_SpawnGroup.m_SpawnGroupName.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&stream.m_SpawnGroup.m_SpawnGroupName);
  handles.m_Size = 0;
  if ( (handles.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<unsigned int,int>::Purge(&handles.m_Memory);
    if ( (handles.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<unsigned int,int>::Purge(&handles.m_Memory);
  }
  return v9;
}


// CSpawnGroupMgrGameSystem::GetActiveSpawnGroupHandle  (line 1515, @0x0000000001f38a40, libserver.so)
// calls: CEntitySystem::GetActiveSpawnGroupHandle
// callers: CSource2Server::GetActiveWorldName, CGameRules::CanUnloadSpawnGroup, CNavGameSystem::EnsureUniqueNavMeshForActiveSpawnGroup
SpawnGroupHandle_t __fastcall CSpawnGroupMgrGameSystem::GetActiveSpawnGroupHandle(
        const CSpawnGroupMgrGameSystem *const this)
{
  return CEntitySystem::GetActiveSpawnGroupHandle(g_pEntitySystem);
}


// CSpawnGroupMgrGameSystem::SetActiveSpawnGroup  (line 1520, @0x0000000001f43cc0, libserver.so)  // inlines: CDontUseThisGameSystem, CUtlString, ComputeVTableIndex<CDontUseThisGameSystem, void (IGameSystem::*)(const EventActiveSpawnGroupChanged_t&)>, DescribeSpawnGroupHandle, DispatchEvent<EventActiveSpawnGroupChanged_t>, EventActiveSpawnGroupChanged_t, GetName, GetVTableIndex, IsClientOnlySpawnGroup, String, ~CDontUseThisGameSystem, ~CUtlString, ~EventActiveSpawnGroupChanged_t
// calls: CSpawnGroupMgrGameSystem::Get, CEntitySystem::GetActiveSpawnGroupHandle, CEntitySystem::SetActiveSpawnGroupHandle, CUtlString::operator=, LoggingSystem_IsChannelEnabled, LoggingSystem_Log, IGameSystem::DispatchEventInternal, CUtlString::FreeMemoryBlock, CUtlString::Format, CUtlString::Get, IGameSystem::~IGameSystem, __cxa_guard_acquire (14 total)
// strings: "SV", "%s:  CSpawnGroupMgrGameSystem::PerformActivateSpawnGroup(%s)\n", "CSpawnGroupMgrGameSystem::ActivateSpawnGroup:  no such group %s\n"
// globals: LOG_SPAWN_GROUP, EventActiveSpawnGroupChanged_t::GetVTableIndex(void)::s_nComputedIndex, `guard variable for'ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventActiveSpawnGroupChanged_t const&)>(CDontUseThisGameSystem &,void (IGame, ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventActiveSpawnGroupChanged_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventActi
void __fastcall CSpawnGroupMgrGameSystem::SetActiveSpawnGroup(
        CSpawnGroupMgrGameSystem *const this,
        SpawnGroupHandle_t handle)
{
  CMapSpawnGroup *v3; // rax
  const char *v4; // r14
  SpawnGroupHandle_t ActiveSpawnGroupHandle; // r13d
  GameSystemEventId_t v6; // edi
  const char *v7; // rax
  IGameSystem v8; // [rsp+0h] [rbp-50h] BYREF
  EventActiveSpawnGroupChanged_t msg; // [rsp+10h] [rbp-40h] BYREF

  v3 = CSpawnGroupMgrGameSystem::Get(this, handle);
  if ( v3 != 0 )
  {
    v4 = v3->m_pSpawnGroup->GetWorldName();
    ActiveSpawnGroupHandle = CEntitySystem::GetActiveSpawnGroupHandle(g_pEntitySystem);
    if ( handle != ActiveSpawnGroupHandle )
    {
      CEntitySystem::SetActiveSpawnGroupHandle(g_pEntitySystem, handle);
      (*(*engine + 488LL))(engine, handle);
      msg.m_SpawnGroupName.m_pString = 0;
      msg.m_SpawnGroupHandle = handle;
      msg.m_PreviousHandle = ActiveSpawnGroupHandle;
      CUtlString::operator=(&msg.m_SpawnGroupName, v4);
      if ( LoggingSystem_IsChannelEnabled(LOG_SPAWN_GROUP, 0) != 0 )
        LoggingSystem_Log(
          LOG_SPAWN_GROUP,
          0,
          "%s:  CSpawnGroupMgrGameSystem::PerformActivateSpawnGroup(%s)\n",
          "SV",
          v4);
      v6 = EventActiveSpawnGroupChanged_t::GetVTableIndex(void)::s_nComputedIndex;
      if ( EventActiveSpawnGroupChanged_t::GetVTableIndex(void)::s_nComputedIndex < 0 )
      {
        v8._vptr_IGameSystem = off_3FC3E30;
        if ( `guard variable for'int ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventActiveSpawnGroupChanged_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventActiveSpawnGroupChanged_t const&))::ppVTableNew == 0
          && __cxa_guard_acquire(&`guard variable for'int ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventActiveSpawnGroupChanged_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventActiveSpawnGroupChanged_t const&))::ppVTableNew) != 0 )
        {
          ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventActiveSpawnGroupChanged_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventActiveSpawnGroupChanged_t const&))::ppVTableNew = ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventActiveSpawnGroupChanged_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventActiveSpawnGroupChanged_t const&))::calculator;
          __cxa_guard_release(&`guard variable for'int ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventActiveSpawnGroupChanged_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventActiveSpawnGroupChanged_t const&))::ppVTableNew);
        }
        v8._vptr_IGameSystem = ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventActiveSpawnGroupChanged_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventActiveSpawnGroupChanged_t const&))::ppVTableNew;
        EventActiveSpawnGroupChanged_t::GetVTableIndex(void)::s_nComputedIndex = (*(ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventActiveSpawnGroupChanged_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventActiveSpawnGroupChanged_t const&))::ppVTableNew
                                                                                  + 144))(&v8);
        v8._vptr_IGameSystem = off_3FC3E30;
        IGameSystem::~IGameSystem(&v8);
        v6 = EventActiveSpawnGroupChanged_t::GetVTableIndex(void)::s_nComputedIndex;
      }
      IGameSystem::DispatchEventInternal(v6, 0x91uLL, &msg);
      if ( msg.m_SpawnGroupName.m_pString != 0 )
        CUtlString::FreeMemoryBlock(&msg.m_SpawnGroupName);
    }
  }
  else if ( LoggingSystem_IsChannelEnabled(LOG_SPAWN_GROUP, 0) != 0 )
  {
    *&msg.m_SpawnGroupHandle = 0;
    if ( handle + 0x80000000 > 0x7FFFFFFE )
      CUtlString::Format(&msg, "%u", handle);
    else
      CUtlString::Format(&msg, &stru_32D9EEC.m_mapLevelWorlds.m_Tree.m_Elements.m_nGrowSize + 3);
    v7 = CUtlString::Get(&msg);
    LoggingSystem_Log(LOG_SPAWN_GROUP, 0, "CSpawnGroupMgrGameSystem::ActivateSpawnGroup:  no such group %s\n", v7);
    if ( *&msg.m_SpawnGroupHandle != 0 )
      CUtlString::FreeMemoryBlock(&msg);
  }
}


// CSpawnGroupMgrGameSystem::UnloadSpawnGroup  (line 1570, @0x0000000001f5a4a0, libserver.so)  // inlines: AddToTail, CUtlString, DescribeSpawnGroupHandle, GrowMemory, IsClientOnlySpawnGroup, String, operator[], ~CUtlString
// calls: LoggingSystem_IsChannelEnabled, CUtlString::Format, CUtlString::Get, CSpawnGroupMgrGameSystem::GetSpawnGroupName, LoggingSystem_Log, CUtlString::FreeMemoryBlock, CUtlMemory<CSpawnGroupMgrGameSystem::UnloadRequestQueueItem_t, int>::Grow, _Unwind_Resume
// strings: "CSpawnGroupMgrGameSystem::UnloadSpawnGroup:  queueing unload of spawn group %s(%s)\n"
// globals: LOG_SPAWN_GROUP
void __fastcall CSpawnGroupMgrGameSystem::UnloadSpawnGroup(
        CSpawnGroupMgrGameSystem *const this,
        SpawnGroupHandle_t hSpawnGroup,
        bool bSaveEntities)
{
  __int64 m_Size; // r13
  CSpawnGroupMgrGameSystem::UnloadRequestQueueItem_t *m_pMemory; // rax
  CSpawnGroupMgrGameSystem::UnloadRequestQueueItem_t *v7; // rcx
  int v8; // eax
  CSpawnGroupMgrGameSystem::UnloadRequestQueueItem_t *v9; // rax
  __int64 v10; // rdi
  const char *v11; // r14
  const char *SpawnGroupName; // rax
  bool v13; // [rsp+Ch] [rbp-34h]
  CUtlString v14; // [rsp+10h] [rbp-30h] BYREF

  m_Size = this->m_QueuedUnloadRequests.m_Size;
  if ( m_Size > 0 )
  {
    m_pMemory = this->m_QueuedUnloadRequests.m_Memory.m_pMemory;
    if ( m_pMemory->m_hSpawnGroup == hSpawnGroup )
      return;
    v7 = &m_pMemory[(m_Size - 1)];
    while ( m_pMemory != v7 )
    {
      ++m_pMemory;
      if ( m_pMemory->m_hSpawnGroup == hSpawnGroup )
        return;
    }
  }
  v8 = this->m_QueuedUnloadRequests.m_Size;
  if ( m_Size == this->m_QueuedUnloadRequests.m_Memory.m_nAllocationCount )
  {
    v13 = bSaveEntities;
    CUtlMemory<CSpawnGroupMgrGameSystem::UnloadRequestQueueItem_t,int>::Grow(&this->m_QueuedUnloadRequests.m_Memory, 1);
    v8 = this->m_QueuedUnloadRequests.m_Size;
    bSaveEntities = v13;
  }
  this->m_QueuedUnloadRequests.m_Size = v8 + 1;
  v9 = &this->m_QueuedUnloadRequests.m_Memory.m_pMemory[m_Size];
  v9->m_hSpawnGroup = hSpawnGroup;
  v10 = LOG_SPAWN_GROUP;
  v9->m_bSaveEntities = bSaveEntities;
  if ( LoggingSystem_IsChannelEnabled(v10, 0) != 0 )
  {
    v14.m_pString = 0;
    if ( hSpawnGroup + 0x80000000 > 0x7FFFFFFE )
      CUtlString::Format(&v14, "%u", hSpawnGroup);
    else
      CUtlString::Format(&v14, &stru_32D9EEC.m_mapLevelWorlds.m_Tree.m_Elements.m_nGrowSize + 3);
    v11 = CUtlString::Get(&v14);
    SpawnGroupName = CSpawnGroupMgrGameSystem::GetSpawnGroupName(this, hSpawnGroup);
    LoggingSystem_Log(
      LOG_SPAWN_GROUP,
      0,
      "CSpawnGroupMgrGameSystem::UnloadSpawnGroup:  queueing unload of spawn group %s(%s)\n",
      SpawnGroupName,
      v11);
    if ( v14.m_pString != 0 )
      CUtlString::FreeMemoryBlock(&v14);
  }
}


// CSpawnGroupMgrGameSystem::FrameBoundary  (line 1589, @0x0000000001f433d0, libserver.so)  // inlines: CUtlString, DescribeSpawnGroupHandle, IsClientOnlySpawnGroup, Purge, RemoveAll, String, operator[], ~CUtlString
// calls: LoggingSystem_IsChannelEnabled, CUtlString::Format, CUtlString::Get, CSpawnGroupMgrGameSystem::GetSpawnGroupName, LoggingSystem_Log, CUtlString::FreeMemoryBlock, CUtlMemory<CSpawnGroupMgrGameSystem::UnloadRequestQueueItem_t, int>::Purge, _Unwind_Resume
// strings: "CSpawnGroupMgrGameSystem::FrameBoundary:  invoking unload of spawn group %s(%s)\n"
// globals: LOG_SPAWN_GROUP
void __fastcall CSpawnGroupMgrGameSystem::FrameBoundary(
        CSpawnGroupMgrGameSystem *const this,
        const EventGameFrameBoundary_t *const msg)
{
  __int64 v3; // r13
  int i; // r12d
  CSpawnGroupMgrGameSystem::UnloadRequestQueueItem_t *v5; // rbx
  SpawnGroupHandle_t m_hSpawnGroup; // eax
  const char *SpawnGroupName; // rax
  bool v8; // zf
  const char *v9; // [rsp+8h] [rbp-48h]
  CUtlString v10; // [rsp+10h] [rbp-40h] BYREF

  v3 = 0;
  for ( i = 0; this->m_QueuedUnloadRequests.m_Size > i; ++i )
  {
    v5 = &this->m_QueuedUnloadRequests.m_Memory.m_pMemory[v3];
    if ( LoggingSystem_IsChannelEnabled(LOG_SPAWN_GROUP, 0) != 0 )
    {
      m_hSpawnGroup = v5->m_hSpawnGroup;
      v10.m_pString = 0;
      if ( m_hSpawnGroup + 0x80000000 > 0x7FFFFFFE )
        CUtlString::Format(&v10, "%u", m_hSpawnGroup);
      else
        CUtlString::Format(&v10, &stru_32D9EEC.m_mapLevelWorlds.m_Tree.m_Elements.m_nGrowSize + 3);
      v9 = CUtlString::Get(&v10);
      SpawnGroupName = CSpawnGroupMgrGameSystem::GetSpawnGroupName(this, v5->m_hSpawnGroup);
      LoggingSystem_Log(
        LOG_SPAWN_GROUP,
        0,
        "CSpawnGroupMgrGameSystem::FrameBoundary:  invoking unload of spawn group %s(%s)\n",
        SpawnGroupName,
        v9);
      if ( v10.m_pString != 0 )
        CUtlString::FreeMemoryBlock(&v10);
    }
    ++v3;
    (*(*engine + 448LL))(engine, v5->m_hSpawnGroup, v5->m_bSaveEntities);
  }
  v8 = (this->m_QueuedUnloadRequests.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_QueuedUnloadRequests.m_Size = 0;
  if ( v8 )
    CUtlMemory<CSpawnGroupMgrGameSystem::UnloadRequestQueueItem_t,int>::Purge(&this->m_QueuedUnloadRequests.m_Memory);
}


// CSpawnGroupMgrGameSystem::SynchronizeAndBlockUntilLoaded  (line 1601, @0x0000000001f38a60, libserver.so)
void __fastcall CSpawnGroupMgrGameSystem::SynchronizeAndBlockUntilLoaded(
        CSpawnGroupMgrGameSystem *const this,
        SpawnGroupHandle_t hSpawnGroup)
{
  (*(*engine + 504LL))(engine, hSpawnGroup);
}


// CSpawnGroupMgrGameSystem::PreSpawnGroupLoad  (line 1608, @0x0000000001f43f30, libserver.so)  // inlines: IsEmpty, SetPVS, SpawnGroupHasWorldGeomemtry
// calls: CSpawnGroupMgrGameSystem::Get
void __fastcall CSpawnGroupMgrGameSystem::PreSpawnGroupLoad(
        CSpawnGroupMgrGameSystem *const this,
        const EventPreSpawnGroupLoad_t *const msg)
{
  char *m_pString; // rax
  CMapSpawnGroup *v4; // r12

  if ( msg->m_SpawnGroupName.m_pString != 0 && *msg->m_SpawnGroupName.m_pString != 0 )
  {
    m_pString = msg->m_EntityLumpName.m_pString;
    if ( m_pString == 0 || *m_pString == 0 )
    {
      v4 = CSpawnGroupMgrGameSystem::Get(this, msg->m_SpawnGroupHandle);
      if ( v4 != 0 )
        v4->m_pPVS = (*(*engine + 688LL))(engine, msg->m_SpawnGroupHandle);
    }
  }
}


// CSpawnGroupMgrGameSystem::OnSpawnGroupList  (line 1625, @0x0000000001f44c40, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Describe, Purge, RemoveAll, ~CUtlMemory, ~CUtlString, ~CUtlVector, ~CUtlVectorBase
// calls: CEntitySystem::GetActiveSpawnGroupHandle, CSpawnGroupMgrGameSystem::GetSpawnGroups, LoggingSystem_IsChannelEnabled, CSpawnGroupMgrGameSystem::Get, CUtlString::Get, LoggingSystem_Log, CUtlString::FreeMemoryBlock, CUtlMemory<unsigned int, int>::Purge, CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVectorBase, _Unwind_Resume
// globals: LOG_SPAWN_GROUP
void __fastcall CSpawnGroupMgrGameSystem::OnSpawnGroupList(
        CSpawnGroupMgrGameSystem *const this,
        const CCommandContext *const ctx,
        const CCommand *const args)
{
  __int64 v4; // rbx
  SpawnGroupHandle_t v5; // r12d
  CMapSpawnGroup *v6; // r13
  bool v7; // zf
  const char *p_m_IONotificationKey; // r12
  const char *v9; // rax
  SpawnGroupHandle_t hActive; // [rsp+Ch] [rbp-64h]
  CUtlString v11; // [rsp+10h] [rbp-60h] BYREF
  CUtlVector<unsigned int,CUtlMemory<unsigned int,int> > groups; // [rsp+20h] [rbp-50h] BYREF

  groups.m_Size = 0;
  hActive = CEntitySystem::GetActiveSpawnGroupHandle(g_pEntitySystem);
  groups.m_Memory.m_pMemory = 0;
  groups.m_Memory.m_nAllocationCount = 0;
  groups.m_Memory.m_nGrowSize = 0;
  CSpawnGroupMgrGameSystem::GetSpawnGroups(this, &groups);
  if ( LoggingSystem_IsChannelEnabled(LOG_SPAWN_GROUP, 1) != 0 )
    LoggingSystem_Log(LOG_SPAWN_GROUP, 1, &stru_32D9EEC.m_flSubStepInterval + 1, groups.m_Size);
  if ( groups.m_Size > 0 )
  {
    v4 = 0;
    do
    {
      v5 = groups.m_Memory.m_pMemory[v4];
      v6 = CSpawnGroupMgrGameSystem::Get(this, v5);
      if ( LoggingSystem_IsChannelEnabled(LOG_SPAWN_GROUP, 1) != 0 )
      {
        v7 = hActive == v5;
        p_m_IONotificationKey = &stru_32D9EEC.m_IONotificationKey;
        if ( !v7 )
          p_m_IONotificationKey = "";
        (*(v6->m_pSpawnGroup->_vptr_ISpawnGroup + 12))(&v11);
        v9 = CUtlString::Get(&v11);
        LoggingSystem_Log(LOG_SPAWN_GROUP, 1, "%s %s\n", v9, p_m_IONotificationKey);
        if ( v11.m_pString != 0 )
          CUtlString::FreeMemoryBlock(&v11);
      }
      ++v4;
    }
    while ( groups.m_Size > v4 );
  }
  groups.m_Size = 0;
  if ( (groups.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<unsigned int,int>::Purge(&groups.m_Memory);
    if ( (groups.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<unsigned int,int>::Purge(&groups.m_Memory);
  }
}


// CSpawnGroupMgrGameSystem::SpawnGroupActivate_CompletionFunc  (line 1643, @0x0000000001f478f0, libserver.so)  // inlines: AddToTail, CUtlMemory, CUtlString, CUtlVector, CUtlVectorBase, CopyConstruct<CUtlString>, Element, GetName, GetSpawnGroupHandle, GrowMemory, Purge, RemoveAll, operator[], ~CUtlMemory, ~CUtlString, ~CUtlVector, ~CUtlVectorBase
// calls: V_stristr_fast(char const*,char const*), CEntitySystem::GetActiveSpawnGroupHandle, CSpawnGroupMgrGameSystem::GetSpawnGroups, CFmtStrN<256, false>::CFmtStrN, CUtlString::Set, CUtlString::Get, CUtlString::FreeMemoryBlock, CSpawnGroupMgrGameSystem::Get, CUtlMemory<CUtlString, int>::Grow, CUtlMemory<unsigned int, int>::Purge, CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVectorBase, _Unwind_Resume (13 total)
void __fastcall CSpawnGroupMgrGameSystem::SpawnGroupActivate_CompletionFunc(
        CSpawnGroupMgrGameSystem *const this,
        const char *pPartial,
        CUtlVector<CUtlString,CUtlMemory<CUtlString,int> > *const commands)
{
  const char *v4; // r14
  const char *v6; // rbx
  __int64 v7; // r12
  int i; // ebx
  __int64 m_Size; // r13
  int v10; // eax
  CUtlString *v11; // r13
  const char *v12; // rax
  CMapSpawnGroup *v13; // r13
  const char *v14; // rax
  const char *v15; // r13
  SpawnGroupHandle_t active; // [rsp+3Ch] [rbp-184h]
  CUtlString v18[2]; // [rsp+40h] [rbp-180h] BYREF
  CUtlVector<unsigned int,CUtlMemory<unsigned int,int> > groups; // [rsp+50h] [rbp-170h] BYREF
  CFmtStrN<256,false> v20; // [rsp+70h] [rbp-150h] BYREF
  unsigned __int64 v21; // [rsp+188h] [rbp-38h]

  v4 = 0;
  v21 = __readfsqword(0x28u);
  v6 = pPartial + 15;
  if ( V_stristr_fast(pPartial, &stru_32D9EEC.m_hierarchyJointsToUpdate.m_Memory.m_nGrowSize + 3) != 0 )
    v4 = v6;
  groups.m_Size = 0;
  active = CEntitySystem::GetActiveSpawnGroupHandle(g_pEntitySystem);
  groups.m_Memory.m_pMemory = 0;
  groups.m_Memory.m_nAllocationCount = 0;
  groups.m_Memory.m_nGrowSize = 0;
  CSpawnGroupMgrGameSystem::GetSpawnGroups(this, &groups);
  if ( groups.m_Size > 0 )
  {
    v7 = 0;
    for ( i = 0; groups.m_Size > i; ++i )
    {
      while ( 1 )
      {
        v13 = CSpawnGroupMgrGameSystem::Get(this, groups.m_Memory.m_pMemory[v7]);
        if ( active != (*(v13->m_pSpawnGroup->_vptr_ISpawnGroup + 3))(v13->m_pSpawnGroup) )
          break;
LABEL_11:
        ++i;
        ++v7;
        if ( groups.m_Size <= i )
          goto LABEL_17;
      }
      v14 = v13->m_pSpawnGroup->GetWorldName();
      v15 = v14;
      if ( v4 == 0 || *v4 == 0 || V_stristr_fast(v14, v4) != 0 )
      {
        CFmtStrN<256,false>::CFmtStrN(
          &v20,
          "%s%s",
          &stru_32D9EEC.m_hierarchyJointsToUpdate.m_Memory.m_nGrowSize + 3,
          v15);
        v18[0].m_pString = 0;
        CUtlString::Set(v18, v20.m_szBuf);
        m_Size = commands->m_Size;
        v10 = commands->m_Size;
        if ( m_Size == commands->m_Memory.m_nAllocationCount )
        {
          CUtlMemory<CUtlString,int>::Grow(&commands->m_Memory, 1);
          v10 = commands->m_Size;
        }
        commands->m_Size = v10 + 1;
        v11 = &commands->m_Memory.m_pMemory[m_Size];
        if ( v11 != 0 )
        {
          v11->m_pString = 0;
          v12 = CUtlString::Get(v18);
          CUtlString::Set(v11, v12);
        }
        if ( v18[0].m_pString != 0 )
          CUtlString::FreeMemoryBlock(v18);
        goto LABEL_11;
      }
      ++v7;
    }
  }
LABEL_17:
  groups.m_Size = 0;
  if ( (groups.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<unsigned int,int>::Purge(&groups.m_Memory);
    if ( (groups.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<unsigned int,int>::Purge(&groups.m_Memory);
  }
}


// CSpawnGroupMgrGameSystem::OnSpawnGroupActivate  (line 1674, @0x0000000001f44220, libserver.so)  // inlines: Arg, operator[]
// calls: LoggingSystem_IsChannelEnabled, LoggingSystem_Log, CSpawnGroupMgrGameSystem::FindSpawnGroupByName
// strings: "Usage:  %s <groupname>\n"
void __fastcall CSpawnGroupMgrGameSystem::OnSpawnGroupActivate(
        CSpawnGroupMgrGameSystem *const this,
        const CCommandContext *const ctx,
        const CCommand *const args)
{
  const char *v4; // rcx
  SpawnGroupHandle_t SpawnGroupByName; // eax

  if ( args->m_nArgc == 2 )
  {
    SpawnGroupByName = CSpawnGroupMgrGameSystem::FindSpawnGroupByName(this, args->m_ppArgv[1]);
    if ( SpawnGroupByName != 0 )
      (*(this->_vptr_IGameSpawnGroupMgr + 8))(this, SpawnGroupByName);
  }
  else if ( LoggingSystem_IsChannelEnabled(LOG_SERVER, 1) != 0 )
  {
    v4 = "";
    if ( args->m_nArgc > 0 )
      v4 = args->m_ppArgv[0];
    LoggingSystem_Log(LOG_SERVER, 1, "Usage:  %s <groupname>\n", v4);
  }
}


// CSpawnGroupMgrGameSystem::SpawnGroupLoad_CompletionFunc  (line 1690, @0x0000000001f47bc0, libserver.so)  // inlines: AddToTail, CUtlMemory, CUtlString, CUtlVector, CUtlVectorBase, CopyConstruct<CUtlString>, Element, GrowMemory, Purge, operator[], ~CUtlMemory, ~CUtlString, ~CUtlVector, ~CUtlVectorBase
// calls: V_stristr_fast(char const*,char const*), CUtlString::Get, CUtlString::Set, CUtlString::FreeMemoryBlock, CFmtStrN<256, false>::CFmtStrN, CUtlMemory<CUtlString, int>::Grow, CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::RemoveAll, CUtlMemory<CUtlString, int>::Purge, _Unwind_Resume, __stack_chk_fail
void __fastcall CSpawnGroupMgrGameSystem::SpawnGroupLoad_CompletionFunc(
        CSpawnGroupMgrGameSystem *const this,
        const char *pPartial,
        CUtlVector<CUtlString,CUtlMemory<CUtlString,int> > *const commands)
{
  const char *v3; // r12
  __int64 v5; // r14
  int v6; // r13d
  CUtlString *v7; // r12
  const char *v8; // rax
  const char *v9; // rax
  __int64 m_Size; // r12
  int v11; // eax
  CUtlString v12; // [rsp+20h] [rbp-180h] BYREF
  CUtlVector<CUtlString,CUtlMemory<CUtlString,int> > mapList; // [rsp+30h] [rbp-170h] BYREF
  CFmtStrN<256,false> v14; // [rsp+50h] [rbp-150h] BYREF
  unsigned __int64 v15; // [rsp+168h] [rbp-38h]

  v3 = pPartial;
  v15 = __readfsqword(0x28u);
  mapList.m_Size = 0;
  mapList.m_Memory.m_pMemory = 0;
  mapList.m_Memory.m_nAllocationCount = 0;
  if ( V_stristr_fast(pPartial, &stru_32D9EEC.m_impactSounds.m_Memory.m_pMemory + 7) != 0 )
    v3 += 17;
  mapList.m_Memory.m_nGrowSize = 0;
  (*(*g_pMapListService + 192LL))(g_pMapListService, v3, &mapList);
  if ( mapList.m_Size > 0 )
  {
    v5 = 0;
    v6 = 0;
    do
    {
      v9 = CUtlString::Get(&mapList.m_Memory.m_pMemory[v5]);
      CFmtStrN<256,false>::CFmtStrN(&v14, "%s%s", &stru_32D9EEC.m_impactSounds.m_Memory.m_pMemory + 7, v9);
      v12.m_pString = 0;
      CUtlString::Set(&v12, v14.m_szBuf);
      m_Size = commands->m_Size;
      v11 = commands->m_Size;
      if ( m_Size == commands->m_Memory.m_nAllocationCount )
      {
        CUtlMemory<CUtlString,int>::Grow(&commands->m_Memory, 1);
        v11 = commands->m_Size;
      }
      commands->m_Size = v11 + 1;
      v7 = &commands->m_Memory.m_pMemory[m_Size];
      if ( v7 != 0 )
      {
        v7->m_pString = 0;
        v8 = CUtlString::Get(&v12);
        CUtlString::Set(v7, v8);
      }
      if ( v12.m_pString != 0 )
        CUtlString::FreeMemoryBlock(&v12);
      ++v6;
      ++v5;
    }
    while ( mapList.m_Size > v6 );
  }
  CUtlVectorBase<CUtlString,CUtlMemory<CUtlString,int>>::RemoveAll(&mapList);
  if ( (mapList.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CUtlString,int>::Purge(&mapList.m_Memory);
    if ( (mapList.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CUtlString,int>::Purge(&mapList.m_Memory);
  }
}


// CSpawnGroupMgrGameSystem::SpawnGroupSave_CompletionFunc  (line 1710, @0x0000000001f480a0, libserver.so)
// calls: CSpawnGroupMgrGameSystem::SpawnGroupUnload_CompletionFunc
void __fastcall CSpawnGroupMgrGameSystem::SpawnGroupSave_CompletionFunc(
        CSpawnGroupMgrGameSystem *const this,
        const char *pPartial,
        CUtlVector<CUtlString,CUtlMemory<CUtlString,int> > *const commands)
{
  CSpawnGroupMgrGameSystem::SpawnGroupUnload_CompletionFunc(this, pPartial, commands);
}


// CSpawnGroupMgrGameSystem::SpawnGroupUnload_CompletionFunc  (line 1715, @0x0000000001f47e30, libserver.so)  // inlines: AddToTail, CUtlMemory, CUtlString, CUtlVector, CUtlVectorBase, CopyConstruct<CUtlString>, Element, GrowMemory, Purge, RemoveAll, V_strnicmp_fast<int>, operator[], ~CUtlMemory, ~CUtlString, ~CUtlVector, ~CUtlVectorBase
// calls: _V_strnicmp_fast, CSpawnGroupMgrGameSystem::GetSpawnGroups, CUtlString::Get, CUtlString::Set, CUtlString::FreeMemoryBlock, CSpawnGroupMgrGameSystem::GetSpawnGroupName, V_stristr_fast(char const*,char const*), CFmtStrN<256, false>::CFmtStrN, CUtlMemory<CUtlString, int>::Grow, CUtlMemory<unsigned int, int>::Purge, CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVectorBase, _Unwind_Resume (13 total)
// callers: CSpawnGroupMgrGameSystem::SpawnGroupSave_CompletionFunc
void __fastcall CSpawnGroupMgrGameSystem::SpawnGroupUnload_CompletionFunc(
        CSpawnGroupMgrGameSystem *const this,
        const char *pPartial,
        CUtlVector<CUtlString,CUtlMemory<CUtlString,int> > *const commands)
{
  const char *v4; // r14
  const char *v6; // rbx
  __int64 v7; // r12
  int v8; // ebx
  CUtlString *v9; // r13
  const char *v10; // rax
  const char *SpawnGroupName; // rax
  const char *v12; // r13
  __int64 m_Size; // r13
  int v14; // eax
  CUtlString v16[2]; // [rsp+30h] [rbp-180h] BYREF
  CUtlVector<unsigned int,CUtlMemory<unsigned int,int> > groups; // [rsp+40h] [rbp-170h] BYREF
  CFmtStrN<256,false> v18; // [rsp+60h] [rbp-150h] BYREF
  unsigned __int64 v19; // [rsp+178h] [rbp-38h]

  v4 = 0;
  v19 = __readfsqword(0x28u);
  v6 = pPartial + 19;
  groups.m_Size = 0;
  groups.m_Memory.m_pMemory = 0;
  groups.m_Memory.m_nAllocationCount = 0;
  if ( _V_strnicmp_fast(pPartial, &stru_32D9EEC.m_breakSounds.m_Memory.m_pMemory + 1, 19) == 0 )
    v4 = v6;
  groups.m_Memory.m_nGrowSize = 0;
  CSpawnGroupMgrGameSystem::GetSpawnGroups(this, &groups);
  if ( groups.m_Size > 0 )
  {
    v7 = 0;
    v8 = 0;
    do
    {
      SpawnGroupName = CSpawnGroupMgrGameSystem::GetSpawnGroupName(this, groups.m_Memory.m_pMemory[v7]);
      v12 = SpawnGroupName;
      if ( v4 == 0 || V_stristr_fast(SpawnGroupName, v4) != 0 )
      {
        CFmtStrN<256,false>::CFmtStrN(&v18, "%s%s", &stru_32D9EEC.m_breakSounds.m_Memory.m_pMemory + 1, v12);
        v16[0].m_pString = 0;
        CUtlString::Set(v16, v18.m_szBuf);
        m_Size = commands->m_Size;
        v14 = commands->m_Size;
        if ( m_Size == commands->m_Memory.m_nAllocationCount )
        {
          CUtlMemory<CUtlString,int>::Grow(&commands->m_Memory, 1);
          v14 = commands->m_Size;
        }
        commands->m_Size = v14 + 1;
        v9 = &commands->m_Memory.m_pMemory[m_Size];
        if ( v9 != 0 )
        {
          v9->m_pString = 0;
          v10 = CUtlString::Get(v16);
          CUtlString::Set(v9, v10);
        }
        if ( v16[0].m_pString != 0 )
          CUtlString::FreeMemoryBlock(v16);
      }
      ++v8;
      ++v7;
    }
    while ( groups.m_Size > v8 );
  }
  groups.m_Size = 0;
  if ( (groups.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<unsigned int,int>::Purge(&groups.m_Memory);
    if ( (groups.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<unsigned int,int>::Purge(&groups.m_Memory);
  }
}


// CSpawnGroupMgrGameSystem::OnSpawnGroupLoad  (line 1742, @0x0000000001f40200, libserver.so)  // inlines: Arg, ArgS, CUtlMemory, CUtlStringList, CUtlStringList_Base, CUtlStringToken, CUtlVector, CUtlVectorBase, InitFromQAngles, Purge, PurgeAndDeleteElements, QAngle, RemoveAll, SetToIdentity, SpawnGroupDesc_t, Vector, ~CUtlMemory, ~CUtlStringList, ~CUtlStringList_Base, ~CUtlVector, ~CUtlVectorBase
// calls: SetIdentityMatrix, V_stristr_fast(char const*,char const*), V_SplitString(char const*,char const*,CUtlVector<char *,CUtlMemory<char *,int>> &), Msg, AngleMatrix, CUtlMemory<char*, int>::Purge, V_atof, CUtlStringList_Base<CUtlVector<char*, CUtlMemory<char*, int> > >::PurgeAndDeleteElements, CUtlVectorBase<char*, CUtlMemory<char*, int> >::~CUtlVectorBase, _Unwind_Resume
// strings: "mapload", "Usage:  %s <groupname>\n"
void __fastcall CSpawnGroupMgrGameSystem::OnSpawnGroupLoad(
        CSpawnGroupMgrGameSystem *const this,
        const CCommandContext *const ctx,
        const CCommand *const args)
{
  const char *v4; // rdi
  __int64 v5; // rax
  __int64 m_nArgv0Size; // rax
  __int64 v7; // rax
  char *v8; // rdi
  unsigned int v9; // eax
  int v10; // r13d
  const char *v11; // rsi
  __int64 v12; // rdx
  const char *v13; // rax
  char **m_pMemory; // rdx
  __int64 v15; // r12
  int v16; // ebx
  char *v17; // rsi
  Vector *p_vOrigin; // rbx
  __int64 v19; // r13
  float i; // xmm0_4
  __int64 v21; // r13
  QAngle *p_vAngles; // rbx
  int m_Size; // [rsp+4h] [rbp-11Ch]
  int v24; // [rsp+8h] [rbp-118h]
  Vector vOrigin; // [rsp+10h] [rbp-110h] BYREF
  int v26; // [rsp+1Ch] [rbp-104h] BYREF
  QAngle vAngles; // [rsp+20h] [rbp-100h] BYREF
  int v28; // [rsp+2Ch] [rbp-F4h] BYREF
  CUtlStringList outStrings; // [rsp+30h] [rbp-F0h] BYREF
  SpawnGroupDesc_t desc; // [rsp+50h] [rbp-D0h] BYREF

  if ( args->m_nArgc <= 1 )
  {
    v11 = "";
    if ( args->m_nArgc == 1 )
      v11 = args->m_ppArgv[0];
    Msg("Usage:  %s <groupname>\n", v11);
  }
  else
  {
    desc.m_bCreateClientEntitiesOnLaterConnectingClients = 0;
    desc.m_bDontSpawnEntities = 0;
    memset(&desc.m_pWorldName, 0, 72);
    desc.m_iPriorityLoader = -2;
    desc.m_manifestLoadPriority = ResourceManifestLoadPriority_t::RESOURCE_MANIFEST_LOAD_PRIORITY_DEFAULT;
    desc.m_flTimeoutInterval = 0.0;
    desc.m_pSaveFileName = 0;
    desc.m_bBlockUntilLoaded = 0;
    desc.m_bLoadStreamingData = 1;
    desc.m_bCreateNewSceneWorld = 0;
    desc.m_bManualCompletion = 0;
    desc.m_bSetActivePostLoad = 0;
    SetIdentityMatrix(&desc.m_vecWorldOffset);
    desc.m_bCreateClientEntitiesOnLaterConnectingClients = 1;
    desc.m_flTimeoutInterval = 30.0;
    v4 = "";
    *&desc.m_vecWorldOffset.m_flMatVal[0][0] = *&g_MatrixIdentity.m_flMatVal[0][0];
    *&desc.m_vecWorldOffset.m_flMatVal[0][2] = *&g_MatrixIdentity.m_flMatVal[0][2];
    *&desc.m_vecWorldOffset.m_flMatVal[1][0] = *&g_MatrixIdentity.m_flMatVal[1][0];
    v5 = *&g_MatrixIdentity.m_flMatVal[2][2];
    *&desc.m_vecWorldOffset.m_flMatVal[2][0] = *&g_MatrixIdentity.m_flMatVal[2][0];
    *&desc.m_vecWorldOffset.m_flMatVal[2][2] = v5;
    desc.m_pEntityFilterName = "mapload";
    m_nArgv0Size = args->m_nArgv0Size;
    if ( m_nArgv0Size != 0 )
      v4 = &args->m_pArgSBuffer[m_nArgv0Size];
    if ( V_stristr_fast(v4, " ") != 0 )
    {
      v7 = args->m_nArgv0Size;
      outStrings.m_Size = 0;
      v8 = "";
      outStrings.m_Memory.m_pMemory = 0;
      outStrings.m_Memory.m_nAllocationCount = 0;
      outStrings.m_Memory.m_nGrowSize = 0;
      if ( v7 != 0 )
        v8 = &args->m_pArgSBuffer[v7];
      V_SplitString(v8, " ", &outStrings);
      vOrigin.x = 0.0;
      vOrigin.y = 0.0;
      vOrigin.z = 0.0;
      vAngles.x = 0.0;
      vAngles.y = 0.0;
      vAngles.z = 0.0;
      if ( outStrings.m_Size == 2 || outStrings.m_Size == 5 )
      {
        m_pMemory = outStrings.m_Memory.m_pMemory;
        m_Size = outStrings.m_Size;
        desc.m_pEntityFilterName = *(outStrings.m_Memory.m_pMemory + 1);
        if ( (outStrings.m_Size - 4) > 1 )
        {
LABEL_21:
          AngleMatrix(&vAngles, &vOrigin, &desc.m_vecWorldOffset);
          desc.m_pWorldName = *outStrings.m_Memory.m_pMemory;
          (*(*engine + 456LL))(engine, &desc);
          if ( outStrings.m_Size > 0 )
          {
            v15 = 0;
            v16 = 0;
            do
            {
              ++v16;
              v17 = outStrings.m_Memory.m_pMemory[v15++];
              (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v17);
            }
            while ( v16 < outStrings.m_Size );
          }
          outStrings.m_Size = 0;
          if ( (outStrings.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
          {
            CUtlMemory<char *,int>::Purge(&outStrings.m_Memory);
            if ( (outStrings.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
              CUtlMemory<char *,int>::Purge(&outStrings.m_Memory);
          }
          return;
        }
        v24 = 2;
      }
      else if ( outStrings.m_Size == 8 )
      {
        m_pMemory = outStrings.m_Memory.m_pMemory;
        m_Size = 8;
        v24 = 2;
        desc.m_pEntityFilterName = *(outStrings.m_Memory.m_pMemory + 1);
      }
      else
      {
        m_Size = outStrings.m_Size;
        if ( (outStrings.m_Size - 4) > 1 && outStrings.m_Size != 7 )
        {
          v9 = outStrings.m_Size - 7;
          v10 = 1;
          goto LABEL_32;
        }
        m_pMemory = outStrings.m_Memory.m_pMemory;
        v24 = 1;
      }
      p_vOrigin = &vOrigin;
      v19 = v24;
      for ( i = V_atof(m_pMemory[v19]); ; i = V_atof(outStrings.m_Memory.m_pMemory[v19]) )
      {
        p_vOrigin->x = i;
        p_vOrigin = (p_vOrigin + 4);
        ++v19;
        if ( p_vOrigin == &v26 )
          break;
      }
      v10 = v24 + 3;
      v9 = m_Size - 7;
LABEL_32:
      if ( v9 <= 1 )
      {
        v21 = v10;
        p_vAngles = &vAngles;
        do
        {
          p_vAngles->x = V_atof(outStrings.m_Memory.m_pMemory[v21]);
          p_vAngles = (p_vAngles + 4);
          ++v21;
        }
        while ( p_vAngles != &v28 );
      }
      goto LABEL_21;
    }
    v12 = args->m_nArgv0Size;
    v13 = "";
    if ( v12 != 0 )
      v13 = &args->m_pArgSBuffer[v12];
    desc.m_pWorldName = v13;
    (*(*engine + 456LL))(engine, &desc);
  }
}


// CSpawnGroupMgrGameSystem::OnSpawnGroupSave  (line 1803, @0x0000000001f442c0, libserver.so)  // inlines: Arg, ArgS
// calls: CSpawnGroupMgrGameSystem::FindSpawnGroupByName, Msg
// strings: "Usage:  %s <groupname>\n"
void __fastcall CSpawnGroupMgrGameSystem::OnSpawnGroupSave(
        CSpawnGroupMgrGameSystem *const this,
        const CCommandContext *const ctx,
        const CCommand *const args)
{
  __int64 m_nArgv0Size; // rax
  SpawnGroupHandle_t SpawnGroupByName; // r12d
  __int64 v6; // rax
  char *v7; // rsi
  const char *v8; // rsi

  if ( args->m_nArgc <= 1 )
  {
    v8 = "";
    if ( args->m_nArgc == 1 )
      v8 = args->m_ppArgv[0];
    Msg("Usage:  %s <groupname>\n", v8);
  }
  else
  {
    m_nArgv0Size = args->m_nArgv0Size;
    if ( m_nArgv0Size != 0 )
    {
      SpawnGroupByName = CSpawnGroupMgrGameSystem::FindSpawnGroupByName(this, &args->m_pArgSBuffer[m_nArgv0Size]);
      if ( SpawnGroupByName == 0 )
        goto LABEL_4;
    }
    else
    {
      SpawnGroupByName = CSpawnGroupMgrGameSystem::FindSpawnGroupByName(this, "");
      if ( SpawnGroupByName == 0 )
      {
LABEL_4:
        v6 = args->m_nArgv0Size;
        v7 = "";
        if ( v6 != 0 )
          v7 = &args->m_pArgSBuffer[v6];
        Msg(&stru_32D9EEC.m_flImpactSoundTime + 3, v7);
        return;
      }
    }
    if ( (*(g_pGameRules->_vptr_CGameRules + 150))(g_pGameRules, SpawnGroupByName) != 0 )
      (*(*g_pEngineServer + 448LL))(g_pEngineServer, SpawnGroupByName, 1);
  }
}


// CSpawnGroupMgrGameSystem::OnSpawnGroupUnload  (line 1826, @0x0000000001f44390, libserver.so)  // inlines: Arg, ArgS
// calls: CSpawnGroupMgrGameSystem::FindSpawnGroupByName, Msg
// strings: "Can't unload spawn group name \"%s\", it's currently active!\nActivate a different one wi, "Usage:  %s <groupname>\n"
void __fastcall CSpawnGroupMgrGameSystem::OnSpawnGroupUnload(
        CSpawnGroupMgrGameSystem *const this,
        const CCommandContext *const ctx,
        const CCommand *const args)
{
  __int64 m_nArgv0Size; // rax
  SpawnGroupHandle_t SpawnGroupByName; // r12d
  __int64 v6; // rax
  char *v7; // rsi
  __int64 v8; // rax
  const char *v9; // rsi
  const char *v10; // rsi

  if ( args->m_nArgc <= 1 )
  {
    v10 = "";
    if ( args->m_nArgc == 1 )
      v10 = args->m_ppArgv[0];
    Msg("Usage:  %s <groupname>\n", v10);
  }
  else
  {
    m_nArgv0Size = args->m_nArgv0Size;
    if ( m_nArgv0Size != 0 )
    {
      SpawnGroupByName = CSpawnGroupMgrGameSystem::FindSpawnGroupByName(this, &args->m_pArgSBuffer[m_nArgv0Size]);
      if ( SpawnGroupByName == 0 )
        goto LABEL_4;
    }
    else
    {
      SpawnGroupByName = CSpawnGroupMgrGameSystem::FindSpawnGroupByName(this, "");
      if ( SpawnGroupByName == 0 )
      {
LABEL_4:
        v6 = args->m_nArgv0Size;
        v7 = "";
        if ( v6 != 0 )
          v7 = &args->m_pArgSBuffer[v6];
        Msg(&stru_32D9EEC.m_flImpactSoundTime + 3, v7);
        return;
      }
    }
    if ( (*(g_pGameRules->_vptr_CGameRules + 150))(g_pGameRules, SpawnGroupByName) != 0 )
    {
      (*(*g_pEngineServer + 448LL))(g_pEngineServer, SpawnGroupByName, 0);
    }
    else
    {
      v8 = args->m_nArgv0Size;
      v9 = "";
      if ( v8 != 0 )
        v9 = &args->m_pArgSBuffer[v8];
      Msg(
        "Can't unload spawn group name \"%s\", it's currently active!\n"
        "Activate a different one with spawn_group_activate!\n",
        v9);
    }
  }
}


// CSpawnGroupMgrGameSystem::GetLoadingSpawnGroupEntityKeys  (line 1855, @0x0000000001f5a620, libserver.so)  // inlines: AddToTail, CopyConstruct<const CEntityKeyValues*>, Element, EnsureCapacity, GrowMemory, memcpy, operator[]
// calls: CSpawnGroupMgrGameSystem::Get, CUtlMemory<const CEntityKeyValues*, int>::Grow, memcpy
void __fastcall CSpawnGroupMgrGameSystem::GetLoadingSpawnGroupEntityKeys(
        const CSpawnGroupMgrGameSystem *const this,
        SpawnGroupHandle_t hSpawnGroup,
        CUtlVector<const CEntityKeyValues*,CUtlMemory<const CEntityKeyValues*,int> > *const keys)
{
  const CMapSpawnGroup *v4; // rax
  __int64 (__fastcall ***v5)(_QWORD); // rax
  __int64 (__fastcall ***v6)(_QWORD); // r15
  int v7; // r14d
  uint32 m_nGrowSize; // eax
  const CEntityKeyValues **v9; // rsi
  __int64 v10; // rax
  __int64 v11; // r12
  __int64 v12; // r14
  const CEntityKeyValues **v13; // rdx
  __int64 v14; // rax
  __int64 m_Size; // r13
  __int64 v16; // rax
  int v17; // edx
  const CEntityKeyValues **m_pMemory; // r12
  const CEntityKeyValues **v19; // rax
  __int64 v20; // [rsp+8h] [rbp-38h]

  v4 = CSpawnGroupMgrGameSystem::Get(this, hSpawnGroup);
  if ( v4 != 0 && v4->m_pSpawnGroup != 0 )
  {
    v5 = (*(v4->m_pSpawnGroup->_vptr_ISpawnGroup + 9))(v4->m_pSpawnGroup);
    v6 = v5;
    if ( v5 != 0 )
    {
      v7 = (**v5)(v5);
      if ( v7 > keys->m_Memory.m_nAllocationCount )
      {
        m_nGrowSize = keys->m_Memory.m_nGrowSize;
        if ( (m_nGrowSize & 0x40000000) == 0 )
        {
          if ( (m_nGrowSize & 0xC0000000) != 0 )
          {
            m_pMemory = keys->m_Memory.m_pMemory;
            v19 = (**g_pMemAlloc)(g_pMemAlloc, 8LL * v7);
            keys->m_Memory.m_pMemory = v19;
            if ( m_pMemory != 0 )
              memcpy(v19, m_pMemory, 8LL * keys->m_Memory.m_nAllocationCount);
            keys->m_Memory.m_nGrowSize &= 0x3FFFFFFFu;
          }
          else
          {
            v9 = keys->m_Memory.m_pMemory;
            v10 = *g_pMemAlloc;
            if ( v9 != 0 )
              keys->m_Memory.m_pMemory = (*(v10 + 8))(g_pMemAlloc, v9, 8LL * v7);
            else
              keys->m_Memory.m_pMemory = (*v10)(g_pMemAlloc, 8LL * v7);
          }
          keys->m_Memory.m_nAllocationCount = v7;
        }
      }
      if ( v7 > 0 )
      {
        v11 = 0;
        v12 = 16 * ((v7 - 1) + 1LL);
        do
        {
          v14 = (*v6)[1](v6);
          m_Size = keys->m_Size;
          v16 = v11 + v14;
          v17 = keys->m_Size;
          if ( m_Size == keys->m_Memory.m_nAllocationCount )
          {
            v20 = v16;
            CUtlMemory<CEntityKeyValues const*,int>::Grow(&keys->m_Memory, 1);
            v17 = keys->m_Size;
            v16 = v20;
          }
          keys->m_Size = v17 + 1;
          v13 = &keys->m_Memory.m_pMemory[m_Size];
          if ( v13 != 0 )
            *v13 = *(v16 + 8);
          v11 += 16;
        }
        while ( v11 != v12 );
      }
    }
  }
}


// CSpawnGroupMgrGameSystem::AddChildSpawnGroup  (line 1873, @0x0000000001f43fa0, libserver.so)  // inlines: AddChildSpawnGroup
// calls: CSpawnGroupMgrGameSystem::Get
// callers: CInfoWorldLayer::SpawnLayerEntityLump, CGameEntitySystem::HandlePointPrefab
void __fastcall CSpawnGroupMgrGameSystem::AddChildSpawnGroup(
        CSpawnGroupMgrGameSystem *const this,
        SpawnGroupHandle_t hParent,
        SpawnGroupHandle_t hChild)
{
  CMapSpawnGroup *v4; // rax

  v4 = CSpawnGroupMgrGameSystem::Get(this, hParent);
  if ( v4 != 0 && v4->m_pSpawnGroup != 0 )
    (*(v4->m_pSpawnGroup->_vptr_ISpawnGroup + 23))(v4->m_pSpawnGroup, hChild);
}


// CSpawnGroupMgrGameSystem::GetParentSpawnGroup  (line 1882, @0x0000000001f43710, libserver.so)
// calls: CSpawnGroupMgrGameSystem::Get
SpawnGroupHandle_t __fastcall CSpawnGroupMgrGameSystem::GetParentSpawnGroup(
        const CSpawnGroupMgrGameSystem *const this,
        SpawnGroupHandle_t hSpawnGroup)
{
  const CMapSpawnGroup *v2; // rax

  v2 = CSpawnGroupMgrGameSystem::Get(this, hSpawnGroup);
  if ( v2 != 0 && v2->m_pSpawnGroup != 0 )
    return (*(v2->m_pSpawnGroup->_vptr_ISpawnGroup + 17))(v2->m_pSpawnGroup);
  else
    return 0;
}


// CSpawnGroupMgrGameSystem::GetChildSpawnGroupCount  (line 1891, @0x0000000001f43740, libserver.so)
// calls: CSpawnGroupMgrGameSystem::Get
int __fastcall CSpawnGroupMgrGameSystem::GetChildSpawnGroupCount(
        const CSpawnGroupMgrGameSystem *const this,
        SpawnGroupHandle_t handle)
{
  const CMapSpawnGroup *v2; // rax

  v2 = CSpawnGroupMgrGameSystem::Get(this, handle);
  if ( v2 != 0 && v2->m_pSpawnGroup != 0 )
    return (*(v2->m_pSpawnGroup->_vptr_ISpawnGroup + 18))(v2->m_pSpawnGroup);
  else
    return 0;
}


// CSpawnGroupMgrGameSystem::GetOwnerSpawnGroup  (line 1900, @0x0000000001f43770, libserver.so)  // inlines: GetOwnerSpawnGroup
// calls: CSpawnGroupMgrGameSystem::Get
// callers: CRenderGameSystem::PreSpawnGroupLoad, CRenderGameSystem::PostSpawnGroupUnload
SpawnGroupHandle_t __fastcall CSpawnGroupMgrGameSystem::GetOwnerSpawnGroup(
        const CSpawnGroupMgrGameSystem *const this,
        SpawnGroupHandle_t hSpawnGroup)
{
  const CMapSpawnGroup *v2; // rax

  v2 = CSpawnGroupMgrGameSystem::Get(this, hSpawnGroup);
  if ( v2 != 0 && v2->m_pSpawnGroup != 0 )
    return (*(v2->m_pSpawnGroup->_vptr_ISpawnGroup + 8))(v2->m_pSpawnGroup);
  else
    return 0;
}


