
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTAHeatmapManager::Get  (line 41, @0x00000000025a8e20, libserver.so)
// calls: __cxa_guard_acquire, CDOTAHeatmapManager::CDOTAHeatmapManager, __cxa_guard_release, __cxa_atexit
// callers: CDOTAGamerules::State_Enter_GAME_IN_PROGRESS, CDOTAGamerules::State_Think_GAME_IN_PROGRESS, CDOTA_BaseNPC_Building::Event_Killed, CDOTAGCServerSystem::WriteMatchPrivateMetadataTeamPlayer, CDOTAGCServerSystem::WriteMatchPrivateMetadataTeam
// globals: `guard variable for'CDOTAHeatmapManager::Get(void)::s_instance, CDOTAHeatmapManager::Get(void)::s_instance, __dso_handle, CDOTAHeatmapManager::~CDOTAHeatmapManager()
CDOTAHeatmapManager *__cdecl CDOTAHeatmapManager::Get()
{
  if ( `guard variable for'CDOTAHeatmapManager::Get(void)::s_instance != 0 )
    return &CDOTAHeatmapManager::Get(void)::s_instance;
  if ( __cxa_guard_acquire(&`guard variable for'CDOTAHeatmapManager::Get(void)::s_instance) != 0 )
  {
    CDOTAHeatmapManager::CDOTAHeatmapManager(&CDOTAHeatmapManager::Get(void)::s_instance);
    __cxa_guard_release(&`guard variable for'CDOTAHeatmapManager::Get(void)::s_instance);
    __cxa_atexit(CDOTAHeatmapManager::~CDOTAHeatmapManager, &CDOTAHeatmapManager::Get(void)::s_instance, &_dso_handle);
  }
  return &CDOTAHeatmapManager::Get(void)::s_instance;
}


// CDOTAHeatmapManager::CDOTAHeatmapManager  (line 49, @0x00000000025a8da0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase
// callers: CDOTAHeatmapManager::Get
void __fastcall CDOTAHeatmapManager::CDOTAHeatmapManager(CDOTAHeatmapManager *const this)
{
  CUtlVectorBase<unsigned char,CUtlMemory<unsigned char,int> >::CAllocator *p_m_Memory; // rcx
  CUtlVectorBase<unsigned char,CUtlMemory<unsigned char,int> >::CAllocator *v2; // rax
  CUtlVectorBase<unsigned char,CUtlMemory<unsigned char,int> >::CAllocator *v3; // rdx
  signed __int64 v4; // rdx

  p_m_Memory = &this->m_vecHeroPositionStreams[0].m_Memory;
  v2 = &this->m_vecHeroPositionStreams[0].m_Memory;
  do
  {
    v2[-1].m_nAllocationCount = 0;
    v3 = v2;
    v2 = (v2 + 24);
    v4 = v3 - this->m_vecHeroPositionStreams;
    *(p_m_Memory + v4 - 8) = 0;
    *(&p_m_Memory->m_pMemory + v4) = 0;
    *(&p_m_Memory->m_pMemory + v4 + 4) = 0;
  }
  while ( v2 != &this->m_vecBuildings.m_Memory );
  this->m_vecBuildings.m_Size = 0;
  this->m_vecBuildings.m_Memory.m_pMemory = 0;
  this->m_vecBuildings.m_Memory.m_nAllocationCount = 0;
  this->m_vecBuildings.m_Memory.m_nGrowSize = 0;
  this->m_nLastRecordedSecond = -1;
}


// CDOTAHeatmapManager::Initialize  (line 58, @0x00000000025a9030, libserver.so)  // inlines: RemoveAll
// calls: CUtlVectorBase<CDOTAHeatmapManager::Building_t, CUtlMemory<CDOTAHeatmapManager::Building_t, int> >::RemoveAll
// callers: CDOTAGamerules::State_Enter_GAME_IN_PROGRESS
void __fastcall CDOTAHeatmapManager::Initialize(CDOTAHeatmapManager *const this)
{
  __int64 v1; // rax

  v1 = 0;
  this->m_nLastRecordedSecond = -1;
  do
    this->m_vecHeroPositionStreams[v1++].m_Size = 0;
  while ( v1 != 24 );
  CUtlVectorBase<CDOTAHeatmapManager::Building_t,CUtlMemory<CDOTAHeatmapManager::Building_t,int>>::RemoveAll(&this->m_vecBuildings);
}


// CDOTAHeatmapManager::~CDOTAHeatmapManager  (line 74, @0x00000000025a9070, libserver.so)  // inlines: Purge, RemoveAll, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CDOTAHeatmapManager::Building_t, CUtlMemory<CDOTAHeatmapManager::Building_t, int> >::RemoveAll, CUtlMemory<unsigned char, int>::Purge, CUtlMemory<CDOTAHeatmapManager::Building_t, int>::Purge
void __fastcall CDOTAHeatmapManager::~CDOTAHeatmapManager(CDOTAHeatmapManager *const this)
{
  CUtlVector<CDOTAHeatmapManager::Building_t,CUtlMemory<CDOTAHeatmapManager::Building_t,int> > *p_m_vecBuildings; // rbx
  CUtlVector<unsigned char,CUtlMemory<unsigned char,int> > *m_vecHeroPositionStreams; // r12
  bool v4; // zf
  CUtlMemory<unsigned char,int> *p_m_Memory; // rdi

  p_m_vecBuildings = &this->m_vecBuildings;
  CUtlVectorBase<CDOTAHeatmapManager::Building_t,CUtlMemory<CDOTAHeatmapManager::Building_t,int>>::RemoveAll(&this->m_vecBuildings);
  if ( (this->m_vecBuildings.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CDOTAHeatmapManager::Building_t,int>::Purge(&this->m_vecBuildings.m_Memory);
    if ( (this->m_vecBuildings.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CDOTAHeatmapManager::Building_t,int>::Purge(&this->m_vecBuildings.m_Memory);
  }
  m_vecHeroPositionStreams = this->m_vecHeroPositionStreams;
  while ( m_vecHeroPositionStreams != p_m_vecBuildings )
  {
    while ( 1 )
    {
      v4 = (p_m_vecBuildings[-1].m_Memory.m_nGrowSize & 0xC0000000) == 0;
      p_m_vecBuildings[-1].m_Size = 0;
      if ( v4 )
      {
        CUtlMemory<unsigned char,int>::Purge(&p_m_vecBuildings[-1].m_Memory);
        if ( (p_m_vecBuildings[-1].m_Memory.m_nGrowSize & 0xC0000000) == 0 )
          break;
      }
      if ( m_vecHeroPositionStreams == --p_m_vecBuildings )
        return;
    }
    p_m_Memory = &p_m_vecBuildings[-1].m_Memory;
    --p_m_vecBuildings;
    CUtlMemory<unsigned char,int>::Purge(p_m_Memory);
  }
}


// WorldPositionToQuantizedPosition  (line 82, @0x0000000002596650, libserver.so)  // inlines: RemapValClamped, clamp<float, float>
// calls: floorf
// callers: CDOTAHeatmapManager::InitializeBuildings, CDOTAHeatmapManager::Update
void __fastcall WorldPositionToQuantizedPosition(
        const Vector *const vecWorld,
        uint8 *punOutPosQuantX,
        uint8 *punOutPosQuantY)
{
  int v3; // eax
  float v5; // xmm1_4
  uint8 v6; // al
  float v7; // xmm0_4
  uint8 *v8; // [rsp-28h] [rbp-30h]
  const Vector *v9; // [rsp-20h] [rbp-28h]

  LOBYTE(v3) = 0;
  v5 = (vecWorld->x + 8192.0) * 0.000061035156;
  if ( v5 >= 0.0 )
  {
    LOBYTE(v3) = 127;
    if ( v5 <= 1.0 )
    {
      v8 = punOutPosQuantX;
      v9 = vecWorld;
      v3 = floorf((127.0 * v5) + 0.0);
      punOutPosQuantX = v8;
      vecWorld = v9;
    }
  }
  *punOutPosQuantX = v3;
  v6 = 0;
  v7 = (vecWorld->y + 8192.0) * 0.000061035156;
  if ( v7 >= 0.0 && (v6 = 127, v7 <= 1.0) )
    *punOutPosQuantY = floorf((v7 * 127.0) + 0.0);
  else
    *punOutPosQuantY = v6;
}


// CDOTAHeatmapManager::InitializeBuildings  (line 93, @0x00000000025bd210, libserver.so)  // inlines: AddToTail, AddToTailGetPtr, Building_t, CEntityHandle, CHandle, CUtlMemory, CUtlString, CUtlVector, CUtlVectorBase, Construct<CDOTAHeatmapManager::Building_t>, Element, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, GetTeamNumber, GetUnitName, GrowMemory, IndexToIdentity, IsValid, LookupEntity, Set, String, ToCStr, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator=, operator[], ~CUtlVector
// calls: FindUnitsInRadius, CUtlString::operator=, CBaseEntity::GetAbsOrigin, WorldPositionToQuantizedPosition, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, CUtlMemory<CDOTAHeatmapManager::Building_t, int>::Grow, _Unwind_Resume
// callers: CDOTAHeatmapManager::Update
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTAHeatmapManager::InitializeBuildings(CDOTAHeatmapManager *const this)
{
  __int64 v2; // r12
  int v3; // ebx
  CHandle<CBaseEntity> *v4; // rdx
  uint32 m_Index; // eax
  __int16 v6; // cx
  CEntityIdentity *v7; // rdx
  CEntityIdentity *v8; // rdx
  const CBaseEntity *m_pInstance; // r13
  unsigned __int8 m_Value; // r15
  __int64 m_Size; // r14
  int v12; // eax
  __int64 v13; // r14
  CDOTAHeatmapManager::Building_t *v14; // rax
  CDOTAHeatmapManager::Building_t *v15; // r14
  CEntityIdentity *m_pEntity; // rax
  int v17; // edx
  __int16 v18; // cx
  const char *delta; // rsi
  const Vector *AbsOrigin; // rax
  bool v21; // cc
  CUtlVectorBase<CDOTAHeatmapManager::Building_t,CUtlMemory<CDOTAHeatmapManager::Building_t,int> >::CAllocator *p_m_Memory; // [rsp+20h] [rbp-70h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > vecUnits; // [rsp+40h] [rbp-50h] BYREF

  vecUnits.m_Size = 0;
  vecUnits.m_Memory.m_pMemory = 0;
  vecUnits.m_Memory.m_nAllocationCount = 0;
  vecUnits.m_Memory.m_nGrowSize = 0;
  FindUnitsInRadius(2, &vec3_origin, 0, -1.0, &vecUnits, 3, 4, 64, 0, 0);
  v2 = 0;
  v3 = 0;
  p_m_Memory = &this->m_vecBuildings.m_Memory;
  if ( vecUnits.m_Size > 0 )
  {
    do
    {
      while ( 1 )
      {
        v4 = &vecUnits.m_Memory.m_pMemory[v2];
        m_Index = vecUnits.m_Memory.m_pMemory[v2].m_Index;
        if ( m_Index + 2 > 1 )
        {
          v6 = v4->m_Index;
          v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v4->m_Index) >> 9) & 0x3F];
          if ( v7 != 0 )
          {
            v8 = &v7[v6 & 0x1FF];
            if ( v8 != 0 && m_Index == v8->m_EHandle.m_Index )
            {
              m_pInstance = v8->m_pInstance;
              if ( v8->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
              {
                m_Value = m_pInstance->m_iTeamNum.m_Value;
                if ( m_Value - 2 <= 1 )
                  break;
              }
            }
          }
        }
        ++v3;
        ++v2;
        if ( vecUnits.m_Size <= v3 )
          goto LABEL_22;
      }
      m_Size = this->m_vecBuildings.m_Size;
      v12 = this->m_vecBuildings.m_Size;
      if ( m_Size == this->m_vecBuildings.m_Memory.m_nAllocationCount )
      {
        CUtlMemory<CDOTAHeatmapManager::Building_t,int>::Grow(p_m_Memory, 1);
        v12 = this->m_vecBuildings.m_Size;
      }
      v13 = m_Size;
      this->m_vecBuildings.m_Size = v12 + 1;
      v14 = &this->m_vecBuildings.m_Memory.m_pMemory[v13];
      if ( v14 != 0 )
      {
        v14->hEntity.m_Index = -1;
        v14->strUnitName.m_pString = 0;
        v15 = &this->m_vecBuildings.m_Memory.m_pMemory[v13];
      }
      else
      {
        v15 = 0;
      }
      m_pEntity = m_pInstance->m_pEntity;
      if ( m_pEntity != 0 )
      {
        v17 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
        v18 = 0x7FFF;
        if ( m_pEntity->m_EHandle.m_Index != -1 )
          v18 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        LOWORD(v15->hEntity.m_Index) = v18 | v15->hEntity.m_Index & 0x8000;
        v15->hEntity.m_Index = (v17 << 15) | v15->hEntity.m_Index & 0x7FFF;
      }
      else
      {
        v15->hEntity.m_Index = -1;
      }
      delta = "";
      if ( m_pInstance[4].m_pfnUse.__delta != 0 )
        delta = m_pInstance[4].m_pfnUse.__delta;
      CUtlString::operator=(&v15->strUnitName, delta);
      v15->bRadiant = m_Value == 2;
      AbsOrigin = CBaseEntity::GetAbsOrigin(m_pInstance);
      ++v3;
      ++v2;
      WorldPositionToQuantizedPosition(AbsOrigin, &v15->unPosQuantX, &v15->unPosQuantY);
      v21 = vecUnits.m_Size <= v3;
      v15->flDeathTime = 3.4028235e38;
    }
    while ( !v21 );
  }
LABEL_22:
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&vecUnits);
}


// CDOTAHeatmapManager::OnBuildingDeath  (line 119, @0x000000000259a3a0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, String, end, operator CEntityInstance*, operator!=
// calls: CDOTAGamerules::GetDOTATime, CUtlString::Get, Msg
// callers: CDOTA_BaseNPC_Building::Event_Killed
// strings: "Building: %s destroyed at %f.\n"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTAHeatmapManager::OnBuildingDeath(
        CDOTAHeatmapManager *const this,
        CDOTA_BaseNPC_Building *pBuilding)
{
  CDOTAHeatmapManager::Building_t *m_pMemory; // rbx
  CDOTAHeatmapManager::Building_t *v3; // r8
  CDOTA_BaseNPC_Building *m_pInstance; // rcx
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  float DOTATime; // xmm0_4
  const char *v8; // rax
  float v9; // [rsp+Ch] [rbp-14h]

  m_pMemory = this->m_vecBuildings.m_Memory.m_pMemory;
  v3 = &m_pMemory[this->m_vecBuildings.m_Size];
  if ( m_pMemory != v3 )
  {
    while ( 1 )
    {
      m_pInstance = 0;
      if ( m_pMemory->hEntity.m_Index + 2 > 1 )
      {
        v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(m_pMemory->hEntity.m_Index) >> 9) & 0x3F];
        if ( v5 != 0 )
        {
          v6 = &v5[m_pMemory->hEntity.m_Index & 0x1FF];
          if ( v6 != 0 && m_pMemory->hEntity.m_Index == v6->m_EHandle.m_Index )
            m_pInstance = v6->m_pInstance;
        }
      }
      if ( pBuilding == m_pInstance )
        break;
      if ( v3 == ++m_pMemory )
        return;
    }
    DOTATime = CDOTAGamerules::GetDOTATime(g_pGameRules, 0, 1, 0.0);
    m_pMemory->flDeathTime = DOTATime;
    v9 = DOTATime;
    v8 = CUtlString::Get(&m_pMemory->strUnitName);
    Msg("Building: %s destroyed at %f.\n", v8, v9);
  }
}


// CDOTAHeatmapManager::Update  (line 135, @0x00000000025bd4b0, libserver.so)  // inlines: AddToTail, CopyConstruct<unsigned char>, Element, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GrowMemory, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CBaseEntity*, operator CEntityInstance*, operator[]
// calls: CDOTA_PlayerResource::IsValidTeamPlayer, CDOTA_PlayerResource::GetPlayerSelectedHeroHandle, CDOTAHeatmapManager::InitializeBuildings, CBaseEntity::GetAbsOrigin, WorldPositionToQuantizedPosition, CUtlMemory<unsigned char, int>::Grow
// callers: CDOTAGamerules::State_Think_GAME_IN_PROGRESS
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTAHeatmapManager::Update(CDOTAHeatmapManager *const this, float a2, float flGameTime)
{
  int v4; // ebx
  CUtlVectorBase<unsigned char,CUtlMemory<unsigned char,int> >::CAllocator *p_m_Memory; // r12
  int v6; // ebx
  CEntityIdentity *v7; // rdx
  CEntityIdentity *v8; // rdx
  CEntityInstance *m_pInstance; // r15
  int v10; // r15d
  int v11; // edx
  bool v12; // zf
  unsigned __int8 *v13; // rax
  int v14; // r15d
  int v15; // edx
  unsigned __int8 *v16; // rax
  const Vector *AbsOrigin; // rax
  __int64 m_nAllocationCount; // rdx
  int v19; // eax
  uint8 *v20; // rdx
  int v21; // r15d
  int v22; // edx
  unsigned __int8 *v23; // rax
  int v24; // [rsp+0h] [rbp-5Ch]
  uint8 unHeatMapX; // [rsp+1Bh] [rbp-41h] BYREF
  int unHeatMapY[16]; // [rsp+1Ch] [rbp-40h] BYREF

  v4 = a2;
  if ( a2 > this->m_nLastRecordedSecond )
  {
    if ( this->m_vecBuildings.m_Size == 0 )
      CDOTAHeatmapManager::InitializeBuildings(this);
    this->m_nLastRecordedSecond = v4;
    p_m_Memory = &this->m_vecHeroPositionStreams[0].m_Memory;
    v6 = 0;
    while ( 1 )
    {
      if ( !CDOTA_PlayerResource::IsValidTeamPlayer(g_pDOTAPlayerResource, v6) )
        goto LABEL_5;
      CDOTA_PlayerResource::GetPlayerSelectedHeroHandle(g_pDOTAPlayerResource, v6);
      if ( (unHeatMapY[0] + 2) <= 1 )
        goto LABEL_5;
      v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(unHeatMapY[0]) >> 9) & 0x3F];
      if ( v7 == 0 )
        goto LABEL_5;
      v8 = &v7[unHeatMapY[0] & 0x1FF];
      if ( v8 == 0 )
        goto LABEL_5;
      if ( unHeatMapY[0] != v8->m_EHandle.m_Index )
        goto LABEL_5;
      m_pInstance = v8->m_pInstance;
      if ( v8->m_pInstance == 0
        || BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0
        || (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) == 0 )
      {
        goto LABEL_5;
      }
      if ( SBYTE3(m_pInstance[58]._vptr_IHandleEntity) >= 0 )
      {
        if ( (*(m_pInstance->_vptr_IHandleEntity + 408))(v8->m_pInstance) != 0 )
        {
          AbsOrigin = CBaseEntity::GetAbsOrigin(m_pInstance);
          WorldPositionToQuantizedPosition(AbsOrigin, &unHeatMapX, unHeatMapY);
          m_nAllocationCount = p_m_Memory[-1].m_nAllocationCount;
          v19 = p_m_Memory[-1].m_nAllocationCount;
          if ( m_nAllocationCount == p_m_Memory->m_nAllocationCount )
          {
            v24 = p_m_Memory[-1].m_nAllocationCount;
            CUtlMemory<unsigned char,int>::Grow(p_m_Memory, 1);
            v19 = p_m_Memory[-1].m_nAllocationCount;
            m_nAllocationCount = v24;
          }
          v12 = &p_m_Memory->m_pMemory[m_nAllocationCount] == 0;
          v20 = &p_m_Memory->m_pMemory[m_nAllocationCount];
          v21 = v19 + 1;
          p_m_Memory[-1].m_nAllocationCount = v19 + 1;
          if ( !v12 )
          {
            *v20 = unHeatMapX;
            v21 = p_m_Memory[-1].m_nAllocationCount;
          }
          v22 = v21;
          if ( v21 == p_m_Memory->m_nAllocationCount )
          {
            CUtlMemory<unsigned char,int>::Grow(p_m_Memory, 1);
            v22 = p_m_Memory[-1].m_nAllocationCount;
          }
          v12 = &p_m_Memory->m_pMemory[v21] == 0;
          v23 = &p_m_Memory->m_pMemory[v21];
          p_m_Memory[-1].m_nAllocationCount = v22 + 1;
          if ( !v12 )
            *v23 = unHeatMapY[0];
        }
        else
        {
          v14 = p_m_Memory[-1].m_nAllocationCount;
          v15 = v14;
          if ( v14 == p_m_Memory->m_nAllocationCount )
          {
            CUtlMemory<unsigned char,int>::Grow(p_m_Memory, 1);
            v15 = p_m_Memory[-1].m_nAllocationCount;
          }
          v12 = &p_m_Memory->m_pMemory[v14] == 0;
          v16 = &p_m_Memory->m_pMemory[v14];
          p_m_Memory[-1].m_nAllocationCount = v15 + 1;
          if ( !v12 )
            *v16 = -1;
        }
        goto LABEL_5;
      }
      v10 = p_m_Memory[-1].m_nAllocationCount;
      v11 = v10;
      if ( v10 == p_m_Memory->m_nAllocationCount )
      {
        CUtlMemory<unsigned char,int>::Grow(p_m_Memory, 1);
        v11 = p_m_Memory[-1].m_nAllocationCount;
      }
      v12 = &p_m_Memory->m_pMemory[v10] == 0;
      v13 = &p_m_Memory->m_pMemory[v10];
      p_m_Memory[-1].m_nAllocationCount = v11 + 1;
      if ( !v12 )
      {
        ++v6;
        p_m_Memory = (p_m_Memory + 24);
        *v13 = -2;
        if ( v6 == 24 )
          return;
      }
      else
      {
LABEL_5:
        ++v6;
        p_m_Memory = (p_m_Memory + 24);
        if ( v6 == 24 )
          return;
      }
    }
  }
}


// CDOTAHeatmapManager::SerializeBuildingData  (line 187, @0x000000000259a490, libserver.so)  // inlines: Add, Add<google::protobuf::RepeatedPtrField<CDOTAMatchPrivateMetadata_Team_Building>::TypeHandler>, New, add_buildings, assign, end, length, operator char const*, set_death_time, set_has_death_time, set_has_position_quant_x, set_has_position_quant_y, set_has_unit_name, set_position_quant_x, set_position_quant_y, set_unit_name
// calls: operator new, CDOTAMatchPrivateMetadata_Team_Building::CDOTAMatchPrivateMetadata_Team_Building, CUtlString::Get, strlen, std::string::assign(char const*,ulong), google::protobuf::internal::RepeatedPtrFieldBase::Reserve(int), operator delete, _Unwind_Resume
// callers: CDOTAGCServerSystem::WriteMatchPrivateMetadataTeam
void __fastcall CDOTAHeatmapManager::SerializeBuildingData(
        CDOTAHeatmapManager *const this,
        int nDotaTeam,
        CDOTAMatchPrivateMetadata_Team *const msgTeam)
{
  bool v3; // r14
  CDOTAHeatmapManager::Building_t *m_pMemory; // rbx
  CDOTAHeatmapManager::Building_t *v5; // r13
  __int64 v7; // rax
  int v8; // edx
  std::string **v9; // r15
  __int64 v10; // rax
  __int64 v11; // rdx
  const char *v12; // rax
  size_t v13; // rax
  int v14; // eax
  int unPosQuantY; // edx
  float flDeathTime; // xmm0_4
  __int64 v17; // rdx
  google::protobuf::internal::RepeatedPtrFieldBase *v18; // [rsp-48h] [rbp-48h]
  const char *v19; // [rsp-40h] [rbp-40h]

  if ( (nDotaTeam - 2) <= 1 )
  {
    v3 = nDotaTeam == 2;
    m_pMemory = this->m_vecBuildings.m_Memory.m_pMemory;
    v5 = &m_pMemory[this->m_vecBuildings.m_Size];
    if ( m_pMemory != v5 )
    {
      v18 = (msgTeam + 48);
      do
      {
        while ( 1 )
        {
          if ( m_pMemory->bRadiant == v3 )
          {
            v7 = *(msgTeam + 14);
            v8 = *(msgTeam + 15);
            if ( v7 < v8 )
            {
              v17 = *(msgTeam + 6);
              *(msgTeam + 14) = v7 + 1;
              v9 = *(v17 + 8 * v7);
            }
            else
            {
              if ( v8 == *(msgTeam + 16) )
                google::protobuf::internal::RepeatedPtrFieldBase::Reserve(v18, v8 + 1);
              v9 = operator new(0x30u);
              CDOTAMatchPrivateMetadata_Team_Building::CDOTAMatchPrivateMetadata_Team_Building(v9);
              v10 = *(msgTeam + 14);
              v11 = *(msgTeam + 6);
              ++*(msgTeam + 15);
              *(msgTeam + 14) = v10 + 1;
              *(v11 + 8 * v10) = v9;
            }
            v12 = CUtlString::Get(&m_pMemory->strUnitName);
            *(v9 + 4) |= 1u;
            v19 = v12;
            v13 = strlen(v12);
            std::string::assign(v9[3], v19, v13);
            v14 = *(v9 + 4);
            *(v9 + 8) = m_pMemory->unPosQuantX;
            *(v9 + 4) = v14 | 2;
            unPosQuantY = m_pMemory->unPosQuantY;
            *(v9 + 4) = v14 | 6;
            *(v9 + 9) = unPosQuantY;
            flDeathTime = m_pMemory->flDeathTime;
            if ( flDeathTime != 3.4028235e38 )
              break;
          }
          if ( ++m_pMemory == v5 )
            return;
        }
        ++m_pMemory;
        *(v9 + 10) = flDeathTime;
        *(v9 + 4) = v14 | 0xE;
      }
      while ( m_pMemory != v5 );
    }
  }
}


// CDOTAHeatmapManager::SerializePlayerData  (line 212, @0x000000000259a630, libserver.so)  // inlines: mutable_position_stream, set_has_position_stream
// calls: CDOTA_PlayerResource::IsValidTeamPlayer, std::string::assign(char const*,ulong)
// callers: CDOTAGCServerSystem::WriteMatchPrivateMetadataTeamPlayer
void __fastcall CDOTAHeatmapManager::SerializePlayerData(
        CDOTAHeatmapManager *const this,
        int nPlayerID,
        CDOTAMatchPrivateMetadata_Team_Player *const msgPlayer)
{
  __int64 v5; // rbx
  std::string *v6; // rdi
  char *v7; // rax
  unsigned __int64 v8; // rdx
  const char *v9; // rsi

  v5 = nPlayerID;
  if ( CDOTA_PlayerResource::IsValidTeamPlayer(g_pDOTAPlayerResource, nPlayerID) && v5 <= 23 )
  {
    v6 = *(msgPlayer + 4);
    v7 = this + 24 * v5;
    v8 = *(v7 + 2);
    v9 = *(v7 + 2);
    *(msgPlayer + 4) |= 4u;
    std::string::assign(v6, v9, v8);
  }
}


