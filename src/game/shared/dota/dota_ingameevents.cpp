// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/dota_ingameevents.cpp:125
class C_CIngameEvent_FM2015_MapInstall {
	C_CIngameEvent_FM2015_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/dota_ingameevents.cpp:623
class C_CIngameEvent_WM2016_MapInstall {
	C_CIngameEvent_WM2016_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/dota_ingameevents.cpp:1407
class C_CIngameEvent_TI6_MapInstall {
	C_CIngameEvent_TI6_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/dota_ingameevents.cpp:1424
class C_CIngameEvent_FM2016_MapInstall {
	C_CIngameEvent_FM2016_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/dota_ingameevents.cpp:1441
class C_CIngameEvent_WM2017_MapInstall {
	C_CIngameEvent_WM2017_MapInstall();

	// sizeof = 1
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// GetFavoriteTeamAndQuality  (line 57, @0x000000000259fe00, libserver.so)  // inlines: GetLobby
// calls: GDOTAGCClientSystem, CDOTA_PlayerResource::GetSteamAccountID
// callers: PrecachePostTPEffect, DoEventPostTPEffect
bool __fastcall GetFavoriteTeamAndQuality(int iPlayerID, TeamID_t *pTeamID, int *pQuality)
{
  __int64 v6; // rbx
  __int64 (__fastcall *v7)(__int64, _QWORD); // r15
  AccountID_t SteamAccountID; // eax
  unsigned int v9; // eax
  __int64 v10; // rax

  if ( GDOTAGCClientSystem() == 0 )
    return 0;
  v6 = *(GDOTAGCClientSystem() + 260);
  if ( v6 == 0 )
    return 0;
  v7 = *(*v6 + 120LL);
  SteamAccountID = CDOTA_PlayerResource::GetSteamAccountID(g_pDOTAPlayerResource, iPlayerID);
  v9 = v7(v6, SteamAccountID);
  if ( v9 == -1 )
    return 0;
  v10 = (*(*v6 + 136LL))(v6, v9);
  if ( v10 == 0 )
    return 0;
  *pTeamID = *(v10 + 196) & 0x3FFFFFFF;
  *pQuality = *(v10 + 196) >> 30;
  return 1;
}


// PrecachePostTPEffect  (line 77, @0x00000000025a8bd0, libserver.so)
// calls: GetFavoriteTeamAndQuality, CFmtStrN<256, false>::CFmtStrN, __stack_chk_fail
// callers: CDOTA_BaseNPC_Hero::Precache
// strings: "particles/econ/events/fall_major_2016/teleport_team_flair_team%d_lvl%d.vpcf"
void __fastcall PrecachePostTPEffect(CDOTA_BaseNPC *pNPC, const CEntityPrecacheContext *pContext)
{
  int (**vptr_IHandleEntity)(...); // rax
  int v4; // eax
  void (__fastcall *v5)(IEntityResourceManifest *, char *); // r13
  TeamID_t unTeamID; // [rsp+8h] [rbp-148h] BYREF
  int nQuality; // [rsp+Ch] [rbp-144h] BYREF
  CFmtStrN<256,false> v8; // [rsp+10h] [rbp-140h] BYREF
  unsigned __int64 v9; // [rsp+128h] [rbp-28h]

  unTeamID = 0;
  v9 = __readfsqword(0x28u);
  vptr_IHandleEntity = pNPC->_vptr_IHandleEntity;
  nQuality = -1;
  v4 = vptr_IHandleEntity[414](pNPC);
  GetFavoriteTeamAndQuality(v4, &unTeamID, &nQuality);
  if ( unTeamID != 0 )
  {
    v5 = **pContext->m_pManifest;
    CFmtStrN<256,false>::CFmtStrN(
      &v8,
      "particles/econ/events/fall_major_2016/teleport_team_flair_team%d_lvl%d.vpcf",
      unTeamID,
      nQuality);
    v5(pContext->m_pManifest, v8.m_szBuf);
  }
}


// DoEventPostTPEffect  (line 90, @0x00000000025a8c90, libserver.so)
// calls: GetFavoriteTeamAndQuality, CFmtStrN<256, false>::CFmtStrN, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControl, CDOTA_ParticleManager::SetParticleFoWProperties, CDOTA_ParticleManager::ReleaseParticleIndex, __stack_chk_fail
// callers: CDOTA_Item_BootsOfTravel::OnChannelFinish, CDOTA_Item_TeleportScroll::OnChannelFinish
// strings: "particles/econ/events/fall_major_2016/teleport_team_flair_team%d_lvl%d.vpcf"
// local variable allocation has failed, the output may be wrong!
void __fastcall DoEventPostTPEffect(CDOTA_BaseNPC *pNPC, const Vector *const vLocation)
{
  int (**vptr_IHandleEntity)(...); // rax
  int v4; // eax
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // ebx
  CDOTA_ParticleManager *v7; // rax
  CDOTA_ParticleManager *v8; // rax
  CDOTA_ParticleManager *v9; // rax
  Vector v10; // [rsp+0h] [rbp-150h] OVERLAPPED BYREF
  int nQuality; // [rsp+Ch] [rbp-144h] BYREF
  CFmtStrN<256,false> v12; // [rsp+10h] [rbp-140h] BYREF
  unsigned __int64 v13; // [rsp+128h] [rbp-28h]

  v10.z = 0.0;
  v13 = __readfsqword(0x28u);
  vptr_IHandleEntity = pNPC->_vptr_IHandleEntity;
  nQuality = -1;
  v4 = vptr_IHandleEntity[414](pNPC);
  GetFavoriteTeamAndQuality(v4, &v10.z, &nQuality);
  if ( LODWORD(v10.z) != 0 )
  {
    CFmtStrN<256,false>::CFmtStrN(
      &v12,
      "particles/econ/events/fall_major_2016/teleport_team_flair_team%d_lvl%d.vpcf",
      LODWORD(v10.z),
      nQuality);
    ParticleManager = GetParticleManager();
    Particle = CDOTA_ParticleManager::CreateParticle(ParticleManager, v12.m_szBuf, 2, 0, 0, pNPC);
    v7 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControl(v7, Particle, 0, v10);
    v8 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleFoWProperties(v8, Particle, 0, -1, 50.0);
    v9 = GetParticleManager();
    CDOTA_ParticleManager::ReleaseParticleIndex(v9, Particle);
  }
}


// RequestIngameEventDataFromGC  (line 114, @0x000000000259fec0, libserver.so)  // inlines: AllocProto, CProtoBufMsg, CVProfScope, FreeProto, Get, GetExtension<google::protobuf::internal::PrimitiveTypeTraits<int>, 5u, false>, IsEnabled, Lock, Unlock, set_event, set_has_event, ~CProtoBufMsg, ~CVProfScope
// calls: GCSDK::CProtoBufMsgBase::CProtoBufMsgBase, CVProfile::EnterScope, pthread_mutex_lock, operator new, CMsgServerToGCGetIngameEventData::descriptor, google::protobuf::internal::ExtensionSet::GetInt32(int,int), GCSDK::CProtoBufMsgMemoryPoolBase::CProtoBufMsgMemoryPoolBase, GCSDK::GProtoBufMsgMemoryPoolMgr, GCSDK::CProtoBufMsgMemoryPoolMgr::RegisterPool, pthread_mutex_unlock, GCSDK::CProtoBufMsgMemoryPoolBase::Alloc, CVProfile::ExitScope (19 total)
// strings: "Networking", "CProtoBufMsg::CProtoBufMsg( MsgType_t )"
// globals: GCSDK::CProtoBufMsg<CMsgServerToGCGetIngameEventData>::s_bRegisteredWithMemoryPoolMgr, GCSDK::CProtoBufMsg<CMsgServerToGCGetIngameEventData>::s_pMemoryPool
void __fastcall RequestIngameEventDataFromGC(EEvent nEvent)
{
  int m_enabled; // edi
  bool v3; // r13
  GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCGetIngameEventData> *v4; // r15
  const google::protobuf::Descriptor *v5; // rax
  const google::protobuf::Descriptor *v6; // rax
  uint32 Int32; // eax
  GCSDK::CProtoBufMsgMemoryPoolMgr *v8; // rax
  google::protobuf::Message *m_pProtoBufBody; // rax
  CGCClientSystem *v10; // rax
  uint32 unTargetHigh; // [rsp+Ch] [rbp-64h]
  GCSDK::CProtoBufMsg<CMsgServerToGCGetIngameEventData> msg; // [rsp+10h] [rbp-60h] BYREF

  GCSDK::CProtoBufMsgBase::CProtoBufMsgBase(&msg, 0x1D7Fu);
  msg._vptr_CProtoBufMsgBase = &off_4107D90;
  msg.m_pProtoBufBody = 0;
  m_enabled = g_VProfCurrentProfile.m_enabled;
  v3 = m_enabled != 0;
  if ( m_enabled != 0 )
    CVProfile::EnterScope(&g_VProfCurrentProfile, "CProtoBufMsg::CProtoBufMsg( MsgType_t )", 0, "Networking", 0, 4);
  if ( !GCSDK::CProtoBufMsg<CMsgServerToGCGetIngameEventData>::s_bRegisteredWithMemoryPoolMgr )
  {
    pthread_mutex_lock(&GCSDK::CProtoBufMsgBase::s_PoolRegMutex.m_Mutex);
    if ( !GCSDK::CProtoBufMsg<CMsgServerToGCGetIngameEventData>::s_bRegisteredWithMemoryPoolMgr )
    {
      v4 = operator new(0x28u);
      v5 = CMsgServerToGCGetIngameEventData::descriptor();
      unTargetHigh = google::protobuf::internal::ExtensionSet::GetInt32(
                       (v5->options_ + 8),
                       msgpool_hard_limit.number_,
                       msgpool_hard_limit.default_value_);
      v6 = CMsgServerToGCGetIngameEventData::descriptor();
      Int32 = google::protobuf::internal::ExtensionSet::GetInt32(
                (v6->options_ + 8),
                msgpool_soft_limit.number_,
                msgpool_soft_limit.default_value_);
      GCSDK::CProtoBufMsgMemoryPoolBase::CProtoBufMsgMemoryPoolBase(v4, Int32, unTargetHigh);
      v4->_vptr_CProtoBufMsgMemoryPoolBase = &off_4110A50;
      GCSDK::CProtoBufMsg<CMsgServerToGCGetIngameEventData>::s_pMemoryPool = v4;
      v8 = GCSDK::GProtoBufMsgMemoryPoolMgr();
      GCSDK::CProtoBufMsgMemoryPoolMgr::RegisterPool(v8, v4);
      GCSDK::CProtoBufMsg<CMsgServerToGCGetIngameEventData>::s_bRegisteredWithMemoryPoolMgr = 1;
    }
    pthread_mutex_unlock(&GCSDK::CProtoBufMsgBase::s_PoolRegMutex.m_Mutex);
  }
  m_pProtoBufBody = GCSDK::CProtoBufMsgMemoryPoolBase::Alloc(GCSDK::CProtoBufMsg<CMsgServerToGCGetIngameEventData>::s_pMemoryPool);
  msg.m_pProtoBufBody = m_pProtoBufBody;
  if ( v3 )
  {
    CVProfile::ExitScope(&g_VProfCurrentProfile);
    m_pProtoBufBody = msg.m_pProtoBufBody;
  }
  *(m_pProtoBufBody + 4) |= 1u;
  *(m_pProtoBufBody + 6) = nEvent;
  v10 = GCClientSystem();
  CGCClientSystem::BSendMessage(v10, &msg);
  msg._vptr_CProtoBufMsgBase = &off_4107D90;
  if ( msg.m_pProtoBufBody != 0 )
  {
    GCSDK::CProtoBufMsgMemoryPoolBase::Free(
      GCSDK::CProtoBufMsg<CMsgServerToGCGetIngameEventData>::s_pMemoryPool,
      msg.m_pProtoBufBody);
    msg.m_pProtoBufBody = 0;
  }
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(&msg);
}


// CIngameEvent_FM2015::YouForgotToImplementOrDeclareServerClass  (line 125, @0x0000000002593650, libserver.so)
int __fastcall CIngameEvent_FM2015::YouForgotToImplementOrDeclareServerClass(CIngameEvent_FM2015 *const this)
{
  return 0;
}


// CIngameEvent_FM2015::GetServerClass  (line 125, @0x0000000002599850, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CIngameEvent_FM2015::GetServerClass(CIngameEvent_FM2015 *const this)
{
  CEntityClass *m_pClass; // rdx
  ServerClass *result; // rax
  CEntityClassInfo *m_pBaseClassInfo; // rdx

  m_pClass = this->m_pEntity->m_pClass;
  result = m_pClass->m_pGameClass;
  if ( result == 0 )
  {
    m_pBaseClassInfo = m_pClass->m_pBaseClassInfo;
    if ( m_pBaseClassInfo != 0 )
      return CEntityClass::GetGameClass(m_pBaseClassInfo->m_pClass, 0);
  }
  return result;
}


// CIngameEvent_FM2015::Create  (line 159, @0x00000000025a00b0, libserver.so)
// calls: CBaseEntity::Create
// callers: CDOTAGamerules::InternalCreateIngameEvent
// strings: "dota_ingameevent_fm2015"
CIngameEvent_FM2015 *__cdecl CIngameEvent_FM2015::Create()
{
  CBaseEntity *v0; // rax
  CIngameEvent_FM2015 *v1; // rbx

  v0 = CBaseEntity::Create("dota_ingameevent_fm2015", &vec3_origin, &vec3_angle, 0);
  v1 = v0;
  if ( v0 != 0 )
    (*(v0->_vptr_IHandleEntity + 212))(v0);
  return v1;
}


// CIngameEvent_FM2015::GoActive  (line 171, @0x00000000025bd710, libserver.so)  // inlines: AddToTail, CUtlDelegate<CIngameEvent_FM2015, CIngameEvent_FM2015>, Convert<CIngameEvent_FM2015, bool (CIngameEvent_FM2015::*)(CEntityIndex, const CDOTAClientMsg_CoinWager_t&), void (detail::GenericClass::*)()>, CopyConstruct<IClientMessageDelegateHook*>, Element, FastDelegate2<CIngameEvent_FM2015, CIngameEvent_FM2015>, Get, GrowMemory, NetworkStateChanged, Set, SetReleased, UtlMakeDelegate<CIngameEvent_FM2015, CIngameEvent_FM2015, CEntityIndex, const CDOTAClientMsg_CoinWager_t&, bool>, bindmemfunc<CIngameEvent_FM2015, bool (CIngameEvent_FM2015::*)(CEntityIndex, const CDOTAClientMsg_CoinWager_t&)>, operator CEntityInstance*, operator=<float>, operator=<int>, operator[]
// calls: memcmp, CClientMessageDelegateHook<CDOTAClientMsg_CoinWager_t>::SetDelegate, CUtlVectorBase<IClientMessageDelegateHook*, CUtlMemory<IClientMessageDelegateHook*, int> >::Find, CUtlMemory<IClientMessageDelegateHook*, int>::Grow
// globals: CIngameEvent_FM2015::ClientMsg_SetPlayerCoinWager(CEntityIndex,CDOTAClientMsg_CoinWager_t const&)
void __fastcall CIngameEvent_FM2015::GoActive(CIngameEvent_FM2015 *const this)
{
  bool v2; // zf
  unsigned __int8 *v3; // r13
  char *v4; // rbx
  unsigned int v5; // r12d
  _QWORD *v6; // rdi
  _QWORD *v7; // rdi
  _QWORD *v8; // rdi
  _QWORD *v9; // rdi
  __int64 m_Size; // r12
  int v11; // eax
  IClientMessageDelegateHook **v12; // rax
  unsigned __int8 *v13; // [rsp+0h] [rbp-A0h]
  __int64 v14; // [rsp+8h] [rbp-98h]
  unsigned __int8 *v15; // [rsp+10h] [rbp-90h]
  unsigned __int8 *v16; // [rsp+18h] [rbp-88h]
  int v17; // [rsp+24h] [rbp-7Ch]
  _DWORD *v18; // [rsp+28h] [rbp-78h]
  _DWORD *v19; // [rsp+30h] [rbp-70h]
  _DWORD *v20; // [rsp+38h] [rbp-68h]
  _DWORD *v21; // [rsp+40h] [rbp-60h]
  char *v22; // [rsp+48h] [rbp-58h]
  CUtlDelegate<bool(CEntityIndex,const CDOTAClientMsg_CoinWager_t&)> s2[3]; // [rsp+50h] [rbp-50h] BYREF

  this->m_bInitialized = 0;
  if ( this->m_flWagerTimer.m_Value == -1.0 )
  {
    v2 = this->m_flWagerEndTime.m_Value == -1.0;
  }
  else
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 4792, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_flWagerTimer.m_Value = -1.0;
    v2 = this->m_flWagerEndTime.m_Value == -1.0;
  }
  if ( !v2 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 4796, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_flWagerEndTime.m_Value = -1.0;
  }
  v14 = 0;
  v13 = &this->m_CompendiumChallengeInfo.m_Vector.m_Memory.m_Memory.m_Data[16];
  do
  {
    v17 = 5;
    v16 = v13;
    v19 = v13 + 4;
    v20 = v13 + 16;
    v3 = v13 - 8;
    v15 = v13;
    v18 = v13 + 24;
    v21 = v13 + 20;
    v4 = this + 4 * v14;
    v22 = this + v14;
    do
    {
      LODWORD(s2[0].m_Closure.m_pthis) = -1;
      v5 = v14 + 5 - v17;
      if ( memcmp(v4 + 780, s2, 4u) != 0 )
      {
        (*(this->_vptr_IHandleEntity + 22))(this, 780, v5, 0xFFFFFFFFLL);
        this->m_CompendiumChallengeEventID.m_Value[v5] = -1;
      }
      LODWORD(s2[0].m_Closure.m_pthis) = -1;
      if ( memcmp(v4 + 876, s2, 4u) != 0 )
      {
        (*(this->_vptr_IHandleEntity + 22))(this, 876, v5, 0xFFFFFFFFLL);
        this->m_CompendiumChallengeSequenceID.m_Value[v5] = -1;
      }
      LODWORD(s2[0].m_Closure.m_pthis) = -1;
      if ( memcmp(v4 + 972, s2, 4u) != 0 )
      {
        (*(this->_vptr_IHandleEntity + 22))(this, 972, v5, 0xFFFFFFFFLL);
        this->m_CompendiumChallengeCoinReward.m_Value[v5] = -1;
      }
      LODWORD(s2[0].m_Closure.m_pthis) = -1;
      if ( memcmp(v4 + 1068, s2, 4u) != 0 )
      {
        (*(this->_vptr_IHandleEntity + 22))(this, 1068, v5, 0xFFFFFFFFLL);
        this->m_CompendiumChallengeCoinSplash.m_Value[v5] = -1;
      }
      LODWORD(s2[0].m_Closure.m_pthis) = -1;
      if ( memcmp(v4 + 1164, s2, 4u) != 0 )
      {
        (*(this->_vptr_IHandleEntity + 22))(this, 1164, v5, 0xFFFFFFFFLL);
        this->m_CompendiumChallengePointReward.m_Value[v5] = -1;
      }
      if ( *v19 != -1 )
      {
        v6 = *v3;
        if ( *v3 != 0 && (*(v6[1] + 49LL) & 4) == 0 && *v16 != 0xFFFF )
          (*(*v6 + 176LL))(v6, 20, 0xFFFFFFFFLL, *v15);
        *v19 = -1;
      }
      if ( *v20 != -1 )
      {
        v7 = *v3;
        if ( *v3 != 0 && (*(v7[1] + 49LL) & 4) == 0 && *v16 != 0xFFFF )
          (*(*v7 + 176LL))(v7, 32, 0xFFFFFFFFLL, *v15);
        *v20 = -1;
      }
      if ( *v21 != -1 )
      {
        v8 = *v3;
        if ( *v3 != 0 && (*(v8[1] + 49LL) & 4) == 0 && *v16 != 0xFFFF )
          (*(*v8 + 176LL))(v8, 36, 0xFFFFFFFFLL, *v15);
        *v21 = -1;
      }
      if ( *v18 != -1 )
      {
        v9 = *v3;
        if ( *v3 != 0 && (*(v9[1] + 49LL) & 4) == 0 && *v16 != 0xFFFF )
          (*(*v9 + 176LL))(v9, 40, 0xFFFFFFFFLL, *v15);
        *v18 = -1;
      }
      if ( v22[1260] != 0 )
      {
        (*(this->_vptr_IHandleEntity + 22))(this, 1260, v5, 0xFFFFFFFFLL);
        this->m_CompendiumChallengeCompleted.m_Value[v5] = 0;
      }
      if ( v22[1284] != 0 )
      {
        (*(this->_vptr_IHandleEntity + 22))(this, 1284, v5, 0xFFFFFFFFLL);
        this->m_CompendiumChallengeFailed.m_Value[v5] = 0;
      }
      LODWORD(s2[0].m_Closure.m_pthis) = -1;
      if ( memcmp(v4 + 1308, s2, 4u) != 0 )
      {
        (*(this->_vptr_IHandleEntity + 22))(this, 1308, v5, 0xFFFFFFFFLL);
        this->m_CompendiumChallengeProgress.m_Value[v5] = -1;
      }
      LODWORD(s2[0].m_Closure.m_pthis) = 0;
      if ( memcmp(v4 + 4600, s2, 4u) != 0 )
      {
        (*(this->_vptr_IHandleEntity + 22))(this, 4600, v5, 0xFFFFFFFFLL);
        this->m_CompendiumCoinWager.m_Value[v5] = 0;
      }
      LODWORD(s2[0].m_Closure.m_pthis) = 0;
      if ( memcmp(v4 + 4696, s2, 4u) != 0 )
      {
        (*(this->_vptr_IHandleEntity + 22))(this, 4696, v5, 0xFFFFFFFFLL);
        this->m_CompendiumCoinWagerResults.m_Value[v5] = 0;
      }
      ++v22;
      v4 += 4;
      v3 += 80;
      v18 += 20;
      v15 += 80;
      v16 += 80;
      v21 += 20;
      v20 += 20;
      v19 += 20;
      --v17;
    }
    while ( v17 != 0 );
    v14 += 5;
    v13 += 400;
  }
  while ( v14 != 10 );
  s2[0].m_Closure.m_pthis = this;
  s2[0].m_Closure.m_pFunction.__delta = 0;
  s2[0].m_Closure.m_pFunction.__pfn = CIngameEvent_FM2015::ClientMsg_SetPlayerCoinWager;
  CClientMessageDelegateHook<CDOTAClientMsg_CoinWager_t>::SetDelegate(&this->m_CDOTAClientMsg_CoinWager_tHook, s2);
  this->m_ClientMessageContainer.m_bReleased = 0;
  s2[0].m_Closure.m_pthis = &this->m_CDOTAClientMsg_CoinWager_tHook;
  if ( CUtlVectorBase<IClientMessageDelegateHook *,CUtlMemory<IClientMessageDelegateHook *,int>>::Find(
         &this->m_ClientMessageContainer,
         s2) == -1 )
  {
    m_Size = this->m_ClientMessageContainer.m_Size;
    v11 = this->m_ClientMessageContainer.m_Size;
    if ( m_Size == this->m_ClientMessageContainer.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<IClientMessageDelegateHook *,int>::Grow(&this->m_ClientMessageContainer.m_Memory, 1);
      v11 = this->m_ClientMessageContainer.m_Size;
    }
    this->m_ClientMessageContainer.m_Size = v11 + 1;
    v12 = &this->m_ClientMessageContainer.m_Memory.m_pMemory[m_Size];
    if ( v12 != 0 )
      *v12 = &this->m_CDOTAClientMsg_CoinWager_tHook;
  }
}


// CIngameEvent_FM2015::UpdateOnRemove  (line 203, @0x00000000025962c0, libserver.so)  // inlines: Purge, RemoveAll, SetReleased
// calls: CUtlMemory<IClientMessageDelegateHook*, int>::Purge, CBaseEntity::UpdateOnRemove
void __fastcall CIngameEvent_FM2015::UpdateOnRemove(CIngameEvent_FM2015 *const this)
{
  int v1; // r13d
  __int64 v3; // rbx
  IClientMessageDelegateHook *v4; // rdi
  bool v5; // zf

  v1 = 0;
  v3 = 0;
  while ( this->m_ClientMessageContainer.m_Size > v1 )
  {
    ++v1;
    (*(this->m_ClientMessageContainer.m_Memory.m_pMemory[v3]->_vptr_IClientMessageDelegateHook + 1))(this->m_ClientMessageContainer.m_Memory.m_pMemory[v3]);
    v4 = this->m_ClientMessageContainer.m_Memory.m_pMemory[v3++];
    (*v4->_vptr_IClientMessageDelegateHook)(v4);
  }
  v5 = (this->m_ClientMessageContainer.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_ClientMessageContainer.m_Size = 0;
  if ( v5 )
    CUtlMemory<IClientMessageDelegateHook *,int>::Purge(&this->m_ClientMessageContainer.m_Memory);
  this->m_ClientMessageContainer.m_bReleased = 1;
  CBaseEntity::UpdateOnRemove(this);
}


// CIngameEvent_FM2015::AddResultToSignout  (line 212, @0x00000000025c2c00, libserver.so)  // inlines: Add, Add<google::protobuf::RepeatedPtrField<CMsgDOTAAwardEventPoints_AwardPoints>::TypeHandler>, Add<google::protobuf::RepeatedPtrField<CMsgSignOutWagerStats_Player>::TypeHandler>, CUtlMemory, CUtlVector, CUtlVectorBase, CopyArray, GetArrayIndexForPlayerID, GetGameWinner, GetPlayerCompendiumCoinFinalWager, GetPlayerCompendiumCoinMaxWager, MoveArray, New, Reserve, add_account_ids, add_additional_msgs, add_award_points, add_players, memcpy, operator(), operator[], set_account_id, set_contents, set_event_id, set_has_account_id, set_has_contents, set_has_event_id, set_has_hold_key, set_has_id, set_has_match_id, set_has_max_wager, set_has_points, set_has_premium_points, set_has_wager, set_has_winnings, set_hold_key, set_id, set_match_id, set_max_wager, set_points, set_premium_points, set_wager, set_winnings, ~CUtlVector, ~basic_string
// calls: CIngameEvent_FM2015::DoEndGameCoinWagerCalculations, CMsgSignOutReleaseEventPointHolds::CMsgSignOutReleaseEventPointHolds, CMsgSignOutWagerStats::CMsgSignOutWagerStats, CMsgDOTAAwardEventPoints::CMsgDOTAAwardEventPoints, CDOTA_PlayerResource::GetAllPlayerIDs, CIngameEvent_FM2015::GetPlayerCompendiumCoinFinalMatchResult, operator new, CMsgSignOutWagerStats_Player::CMsgSignOutWagerStats_Player, CIngameEvent_FM2015::GetPlayerWagerPct, CDOTA_PlayerResource::GetSteamAccountID, operator new [], memcpy (30 total)
void __fastcall CIngameEvent_FM2015::AddResultToSignout(
        CIngameEvent_FM2015 *const this,
        const CDOTALobby *pLobby,
        GCSDK::CProtoBufMsg<CMsgGameMatchSignOut> *pMsgSignOut)
{
  int v5; // eax
  __int64 v6; // rax
  int v7; // eax
  __int64 v8; // rbx
  int i; // r12d
  void *v10; // rax
  int v11; // esi
  __int64 v12; // rax
  int PlayerCompendiumCoinFinalMatchResult; // r15d
  __int64 current_size; // rax
  CMsgSignOutWagerStats_Player *v15; // r13
  __int64 v16; // rax
  int v17; // edx
  int *v18; // rax
  __int64 v19; // rcx
  int v20; // ecx
  bool v21; // zf
  uint32 v22; // eax
  AccountID_t SteamAccountID; // r14d
  __int64 v24; // rdx
  int v25; // edx
  void *v26; // r13
  __int64 v27; // r15
  int PlayerCompendiumChallengeCoinReward; // ebx
  uint32 v29; // r12d
  int v30; // r14d
  __int64 v31; // r12
  int v32; // ebx
  int v33; // esi
  __int64 v34; // rax
  CMsgDOTAAwardEventPoints_AwardPoints *v35; // rbx
  __int64 v36; // rax
  int v37; // eax
  bool v38; // cc
  __int64 v39; // rbx
  int j; // r12d
  AccountID_t v41; // r14d
  uint32 v42; // r13d
  __int64 v43; // rax
  CMsgDOTAAwardEventPoints_AwardPoints *v44; // r15
  __int64 v45; // rax
  int v46; // eax
  std::string **v47; // rax
  std::string **v48; // rbx
  std::string **v49; // rax
  std::string **v50; // rbx
  std::string **v51; // rax
  std::string **v52; // rbx
  int nCompendiumPointsEarned; // [rsp+50h] [rbp-1D0h]
  AccountID_t pnWagerAmount; // [rsp+60h] [rbp-1C0h]
  uint32 v58; // [rsp+74h] [rbp-1ACh] BYREF
  uint32 v59; // [rsp+78h] [rbp-1A8h] BYREF
  int v60; // [rsp+7Ch] [rbp-1A4h] BYREF
  std::string v61; // [rsp+80h] [rbp-1A0h] BYREF
  std::string v62; // [rsp+90h] [rbp-190h] BYREF
  std::string v63; // [rsp+A0h] [rbp-180h] BYREF
  double v64; // [rsp+A8h] [rbp-178h] BYREF
  double v65; // [rsp+B0h] [rbp-170h] BYREF
  double v66; // [rsp+B8h] [rbp-168h] BYREF
  CUtlVector<int,CUtlMemory<int,int> > vPlayers; // [rsp+C0h] [rbp-160h] BYREF
  CUtlVector<int,CUtlMemory<int,int> > winningPlayers; // [rsp+E0h] [rbp-140h] BYREF
  CUtlVector<int,CUtlMemory<int,int> > losingPlayers; // [rsp+100h] [rbp-120h] BYREF
  _BYTE v70[16]; // [rsp+120h] [rbp-100h] BYREF
  int v71; // [rsp+130h] [rbp-F0h]
  void *src; // [rsp+138h] [rbp-E8h]
  int v73; // [rsp+140h] [rbp-E0h]
  int v74; // [rsp+144h] [rbp-DCh]
  __int64 v75; // [rsp+148h] [rbp-D8h]
  int v76; // [rsp+150h] [rbp-D0h]
  _BYTE v77[16]; // [rsp+160h] [rbp-C0h] BYREF
  int v78; // [rsp+170h] [rbp-B0h]
  google::protobuf::internal::RepeatedPtrFieldBase v79; // [rsp+178h] [rbp-A8h] BYREF
  int v80; // [rsp+190h] [rbp-90h]
  _BYTE v81[16]; // [rsp+1A0h] [rbp-80h] BYREF
  int v82; // [rsp+1B0h] [rbp-70h]
  google::protobuf::internal::RepeatedPtrFieldBase v83; // [rsp+1B8h] [rbp-68h] BYREF
  __int64 v84; // [rsp+1D0h] [rbp-50h]
  int v85; // [rsp+1D8h] [rbp-48h]

  CIngameEvent_FM2015::DoEndGameCoinWagerCalculations(this);
  CMsgSignOutReleaseEventPointHolds::CMsgSignOutReleaseEventPointHolds(v70);
  v76 = (*(this->_vptr_IHandleEntity + 207))(this);
  v75 = *(pLobby + 27);
  v71 |= 6u;
  CMsgSignOutWagerStats::CMsgSignOutWagerStats(v77);
  v5 = (*(this->_vptr_IHandleEntity + 207))(this);
  v78 |= 2u;
  v80 = v5;
  CMsgDOTAAwardEventPoints::CMsgDOTAAwardEventPoints(v81);
  v6 = *(pLobby + 27);
  v82 |= 2u;
  v84 = v6;
  v7 = (*(this->_vptr_IHandleEntity + 208))(this);
  v82 |= 4u;
  v85 = v7;
  vPlayers.m_Size = 0;
  vPlayers.m_Memory.m_pMemory = 0;
  vPlayers.m_Memory.m_nAllocationCount = 0;
  vPlayers.m_Memory.m_nGrowSize = 0;
  CDOTA_PlayerResource::GetAllPlayerIDs(g_pDOTAPlayerResource, &vPlayers);
  if ( vPlayers.m_Size > 0 )
  {
    v8 = 0;
    for ( i = 0; vPlayers.m_Size > i; ++i )
    {
      SteamAccountID = CDOTA_PlayerResource::GetSteamAccountID(g_pDOTAPlayerResource, vPlayers.m_Memory.m_pMemory[v8]);
      v11 = vPlayers.m_Memory.m_pMemory[v8];
      if ( v11 <= 9 )
      {
        v12 = v11;
        if ( this->m_CompendiumCoinWager.m_Value[v11] > 0 )
        {
          v24 = v73;
          if ( v73 == v74 )
          {
            v25 = 2 * v73;
            v26 = src;
            if ( v73 + 1 >= 2 * v73 )
              v25 = v73 + 1;
            if ( v25 < 4 )
              v25 = 4;
            v74 = v25;
            v10 = operator new[](4LL * v25);
            src = v10;
            v24 = v73;
            if ( v26 != 0 )
            {
              memcpy(v10, v26, 4LL * v73);
              operator delete[](v26);
              v10 = src;
              v24 = v73;
            }
          }
          else
          {
            v10 = src;
          }
          v73 = v24 + 1;
          *(v10 + v24) = SteamAccountID;
          v11 = vPlayers.m_Memory.m_pMemory[v8];
          if ( v11 > 9 )
            goto LABEL_16;
          v12 = v11;
        }
        if ( this->m_CompendiumCoinWager.m_Value[v12] != 0 )
        {
          PlayerCompendiumCoinFinalMatchResult = CIngameEvent_FM2015::GetPlayerCompendiumCoinFinalMatchResult(this, v11);
          current_size = v79.current_size_;
          if ( v79.current_size_ < v79.allocated_size_ )
          {
            ++v79.current_size_;
            v15 = v79.elements_[current_size];
          }
          else
          {
            if ( v79.allocated_size_ == v79.total_size_ )
              google::protobuf::internal::RepeatedPtrFieldBase::Reserve(&v79, v79.allocated_size_ + 1);
            v15 = operator new(0x28u);
            CMsgSignOutWagerStats_Player::CMsgSignOutWagerStats_Player(v15);
            v16 = v79.current_size_;
            ++v79.allocated_size_;
            ++v79.current_size_;
            v79.elements_[v16] = v15;
          }
          v17 = *(v15 + 4);
          *(v15 + 6) = SteamAccountID;
          *(v15 + 7) = PlayerCompendiumCoinFinalMatchResult;
          *(v15 + 4) = v17 | 3;
          v18 = &vPlayers.m_Memory.m_pMemory[v8];
          v19 = vPlayers.m_Memory.m_pMemory[v8];
          if ( v19 > 9 )
            v20 = 0;
          else
            v20 = this->m_CompendiumCoinWager.m_Value[v19];
          *(v15 + 8) = v20;
          *(v15 + 4) = v17 | 7;
          v21 = !CIngameEvent_FM2015::GetPlayerWagerPct(this, *v18, &v64, &v58);
          v22 = 0;
          if ( !v21 )
            v22 = v58;
          *(v15 + 4) |= 8u;
          *(v15 + 9) = v22;
        }
      }
LABEL_16:
      ++v8;
    }
  }
  winningPlayers.m_Size = 0;
  winningPlayers.m_Memory.m_pMemory = 0;
  winningPlayers.m_Memory.m_nAllocationCount = 0;
  winningPlayers.m_Memory.m_nGrowSize = 0;
  CDOTA_PlayerResource::GetPlayerIDsForTeam(
    g_pDOTAPlayerResource,
    *&g_pGameRules[16].m_szQuestName[80],
    &winningPlayers);
  if ( winningPlayers.m_Size > 0 )
  {
    v27 = 0;
    do
    {
      while ( 1 )
      {
        pnWagerAmount = CDOTA_PlayerResource::GetSteamAccountID(
                          g_pDOTAPlayerResource,
                          winningPlayers.m_Memory.m_pMemory[v27]);
        if ( !CDOTALobby::IsPermanentLeaver(pLobby, pnWagerAmount) )
        {
          nCompendiumPointsEarned = CIngameEvent_Base::GetPlayerCompendiumChallengePointReward(
                                      this,
                                      winningPlayers.m_Memory.m_pMemory[v27]);
          PlayerCompendiumChallengeCoinReward = CIngameEvent_Base::GetPlayerCompendiumChallengeCoinReward(
                                                  this,
                                                  winningPlayers.m_Memory.m_pMemory[v27]);
          v29 = 0;
          if ( CIngameEvent_FM2015::GetPlayerWagerPct(this, winningPlayers.m_Memory.m_pMemory[v27], &v65, &v59) )
            v29 = v59;
          v30 = PlayerCompendiumChallengeCoinReward
              + CIngameEvent_FM2015::GetPlayerCompendiumCoinFinalMatchResult(
                  this,
                  winningPlayers.m_Memory.m_pMemory[v27])
              - v29;
          if ( winningPlayers.m_Size > 0 )
          {
            v31 = 0;
            v32 = 0;
            do
            {
              v33 = winningPlayers.m_Memory.m_pMemory[v31];
              if ( winningPlayers.m_Memory.m_pMemory[v27] != v33 )
                v30 += CIngameEvent_Base::GetPlayerCompendiumCoinSplash(this, v33);
              ++v32;
              ++v31;
            }
            while ( winningPlayers.m_Size > v32 );
          }
          if ( v30 > 0 || nCompendiumPointsEarned > 0 )
          {
            v34 = v83.current_size_;
            if ( v83.current_size_ < v83.allocated_size_ )
            {
              ++v83.current_size_;
              v35 = v83.elements_[v34];
            }
            else
            {
              if ( v83.allocated_size_ == v83.total_size_ )
                google::protobuf::internal::RepeatedPtrFieldBase::Reserve(&v83, v83.allocated_size_ + 1);
              v35 = operator new(0x28u);
              CMsgDOTAAwardEventPoints_AwardPoints::CMsgDOTAAwardEventPoints_AwardPoints(v35);
              v36 = v83.current_size_;
              ++v83.allocated_size_;
              ++v83.current_size_;
              v83.elements_[v36] = v35;
            }
            v37 = *(v35 + 4);
            *(v35 + 6) = pnWagerAmount;
            *(v35 + 4) = v37 | 1;
            if ( nCompendiumPointsEarned > 0 )
            {
              *(v35 + 4) = v37 | 3;
              *(v35 + 7) = nCompendiumPointsEarned;
            }
            if ( v30 > 0 )
              break;
          }
        }
        if ( winningPlayers.m_Size <= ++v27 )
          goto LABEL_49;
      }
      *(v35 + 4) |= 4u;
      v38 = winningPlayers.m_Size <= ++v27;
      *(v35 + 8) = v30;
    }
    while ( !v38 );
  }
LABEL_49:
  losingPlayers.m_Size = 0;
  losingPlayers.m_Memory.m_pMemory = 0;
  losingPlayers.m_Memory.m_nAllocationCount = 0;
  losingPlayers.m_Memory.m_nGrowSize = 0;
  CDOTA_PlayerResource::GetPlayerIDsForTeam(
    g_pDOTAPlayerResource,
    (*&g_pGameRules[16].m_szQuestName[80] == 2) + 2,
    &losingPlayers);
  v39 = 0;
  for ( j = 0; losingPlayers.m_Size > j; ++v39 )
  {
    v41 = CDOTA_PlayerResource::GetSteamAccountID(g_pDOTAPlayerResource, losingPlayers.m_Memory.m_pMemory[v39]);
    if ( CIngameEvent_FM2015::GetPlayerWagerPct(this, losingPlayers.m_Memory.m_pMemory[v39], &v66, &v60) )
    {
      v42 = -v60;
      if ( v60 > 0 )
      {
        v43 = v83.current_size_;
        if ( v83.current_size_ < v83.allocated_size_ )
        {
          ++v83.current_size_;
          v44 = v83.elements_[v43];
        }
        else
        {
          if ( v83.allocated_size_ == v83.total_size_ )
            google::protobuf::internal::RepeatedPtrFieldBase::Reserve(&v83, v83.allocated_size_ + 1);
          v44 = operator new(0x28u);
          CMsgDOTAAwardEventPoints_AwardPoints::CMsgDOTAAwardEventPoints_AwardPoints(v44);
          v45 = v83.current_size_;
          ++v83.allocated_size_;
          ++v83.current_size_;
          v83.elements_[v45] = v44;
        }
        v46 = *(v44 + 4);
        *(v44 + 6) = v41;
        *(v44 + 8) = v42;
        *(v44 + 4) = v46 | 5;
      }
    }
    ++j;
  }
  v47 = google::protobuf::internal::RepeatedPtrFieldBase::Add<google::protobuf::RepeatedPtrField<CMsgGameMatchSignOut_CAdditionalSignoutMsg>::TypeHandler>((pMsgSignOut->m_pProtoBufBody + 224));
  *(v47 + 4) |= 1u;
  v48 = v47;
  *(v47 + 8) = 7384;
  google::protobuf::MessageLite::SerializeAsString(&v61);
  *(v48 + 4) |= 2u;
  std::string::assign(v48[3], &v61);
  std::string::_Rep::_M_dispose(v61._M_dataplus._M_p - 24, &v66);
  v49 = google::protobuf::internal::RepeatedPtrFieldBase::Add<google::protobuf::RepeatedPtrField<CMsgGameMatchSignOut_CAdditionalSignoutMsg>::TypeHandler>((pMsgSignOut->m_pProtoBufBody + 224));
  *(v49 + 4) |= 1u;
  v50 = v49;
  *(v49 + 8) = 8060;
  google::protobuf::MessageLite::SerializeAsString(&v62);
  *(v50 + 4) |= 2u;
  std::string::assign(v50[3], &v62);
  std::string::_Rep::_M_dispose(v62._M_dataplus._M_p - 24, &v66);
  v51 = google::protobuf::internal::RepeatedPtrFieldBase::Add<google::protobuf::RepeatedPtrField<CMsgGameMatchSignOut_CAdditionalSignoutMsg>::TypeHandler>((pMsgSignOut->m_pProtoBufBody + 224));
  *(v51 + 4) |= 1u;
  v52 = v51;
  *(v51 + 8) = 7597;
  google::protobuf::MessageLite::SerializeAsString(&v63);
  *(v52 + 4) |= 2u;
  std::string::assign(v52[3], &v63);
  std::string::_Rep::_M_dispose(v63._M_dataplus._M_p - 24, &v66);
  CUtlVectorBase<int,CUtlMemory<int,int>>::~CUtlVectorBase(&losingPlayers);
  CUtlVectorBase<int,CUtlMemory<int,int>>::~CUtlVectorBase(&winningPlayers);
  CUtlVectorBase<int,CUtlMemory<int,int>>::~CUtlVectorBase(&vPlayers);
  CMsgDOTAAwardEventPoints::~CMsgDOTAAwardEventPoints(v81);
  CMsgSignOutWagerStats::~CMsgSignOutWagerStats(v77);
  CMsgSignOutReleaseEventPointHolds::~CMsgSignOutReleaseEventPointHolds(v70);
}


// CIngameEvent_FM2015::ClientMsg_SetPlayerCoinWager  (line 323, @0x0000000002597430, libserver.so)  // inlines: DOTAGameRules, GetArrayIndexForPlayerID, GetInstance, GetPlayerCompendiumCoins, IndexToIdentity, Instance, IsUsed, LookupEntityByIndex, LookupEntityByNetworkIndex, NetworkStateChanged, Set
// calls: CDOTA_PlayerResource::GetEventPremiumPoints, memcmp, SendChatEventMessage
bool __fastcall CIngameEvent_FM2015::ClientMsg_SetPlayerCoinWager(
        CIngameEvent_FM2015 *const this,
        CEntityIndex nEntityIndex,
        const CDOTAClientMsg_CoinWager_t *const msg)
{
  CEntityIdentity *v3; // rcx
  CEntityIdentity *v5; // rax
  CEntityInstance *m_pInstance; // rbx
  unsigned int v8; // r13d
  int v9; // r14d
  int (**vptr_IHandleEntity)(...); // rax
  int v11; // eax
  signed int EventPremiumPoints; // edx
  int v13; // eax
  int v15; // [rsp-8h] [rbp-3Ch] BYREF

  if ( nEntityIndex.m_Data > 0x7FFE )
    return 1;
  v3 = g_pGameEntitySystem->m_EntityList.m_pIdentityChunks[nEntityIndex.m_Data >> 9];
  if ( v3 == 0 )
    return 1;
  v5 = &v3[nEntityIndex.m_Data & 0x1FF];
  if ( v5 != 0 && (v5->m_EHandle.m_Index & 0x7FFF) == nEntityIndex.m_Data )
  {
    m_pInstance = v5->m_pInstance;
    if ( v5->m_pInstance != 0 && (g_pGameRules == 0 || *&g_pGameRules[6].m_szQuestName[28] == 4) )
    {
      v8 = (*(m_pInstance->_vptr_IHandleEntity + 393))(m_pInstance);
      if ( v8 <= 9 )
      {
        v9 = *(msg + 6);
        vptr_IHandleEntity = m_pInstance->_vptr_IHandleEntity;
        v15 = v9;
        v11 = vptr_IHandleEntity[393](m_pInstance);
        EventPremiumPoints = 0;
        if ( v11 != -1 )
          EventPremiumPoints = CDOTA_PlayerResource::GetEventPremiumPoints(g_pDOTAPlayerResource, v11);
        if ( v9 <= EventPremiumPoints )
        {
          if ( memcmp(&this->m_CompendiumCoinWager.m_Value[v8], &v15, 4u) != 0 )
          {
            (*(this->_vptr_IHandleEntity + 22))(this, 4600, v8, 0xFFFFFFFFLL);
            this->m_CompendiumCoinWager.m_Value[v8] = v9;
          }
          v13 = (*(m_pInstance->_vptr_IHandleEntity + 393))(m_pInstance);
          SendChatEventMessage(DOTA_CHAT_MESSAGE::CHAT_MESSAGE_COINS_WAGERED, v9, v13, 0);
        }
      }
    }
  }
  return 1;
}


// CIngameEvent_FM2015::SetPlayerCompendiumCoinWagerWinnings  (line 349, @0x00000000025a0100, libserver.so)  // inlines: NetworkStateChanged, Set
// calls: memcmp
// callers: CIngameEvent_FM2015::DoEndGameCoinWagerCalculations
void __fastcall CIngameEvent_FM2015::SetPlayerCompendiumCoinWagerWinnings(
        CIngameEvent_FM2015 *const this,
        int nPlayerID,
        int nCoinChange)
{
  int nCoinChangea[9]; // [rsp+Ch] [rbp-24h] BYREF

  nCoinChangea[0] = nCoinChange;
  if ( nPlayerID <= 9 && memcmp(&this->m_CompendiumCoinWagerResults.m_Value[nPlayerID], nCoinChangea, 4u) != 0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 4696, nPlayerID, 0xFFFFFFFFLL);
    this->m_CompendiumCoinWagerResults.m_Value[nPlayerID] = nCoinChangea[0];
  }
}


// CIngameEvent_FM2015::DoEndGameCoinWagerCalculations  (line 363, @0x00000000025a8500, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, GetGameWinner, ~CUtlVector
// calls: CDOTA_PlayerResource::GetPlayerIDsForTeam, CIngameEvent_FM2015::GetPlayerCompendiumCoinPotentialWinnings, CIngameEvent_FM2015::SetPlayerCompendiumCoinWagerWinnings, CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CIngameEvent_FM2015::AddResultToSignout
void __fastcall CIngameEvent_FM2015::DoEndGameCoinWagerCalculations(CIngameEvent_FM2015 *const this)
{
  int v2; // r15d
  __int64 v3; // rbx
  int i; // r12d
  int PlayerCompendiumCoinPotentialWinnings; // eax
  __int64 v6; // r15
  int j; // ebx
  CUtlVector<int,CUtlMemory<int,int> > vWinners; // [rsp+0h] [rbp-70h] BYREF
  CUtlVector<int,CUtlMemory<int,int> > vLosers; // [rsp+20h] [rbp-50h] BYREF

  vWinners.m_Size = 0;
  vWinners.m_Memory.m_pMemory = 0;
  vWinners.m_Memory.m_nAllocationCount = 0;
  vWinners.m_Memory.m_nGrowSize = 0;
  v2 = *&g_pGameRules[16].m_szQuestName[80];
  CDOTA_PlayerResource::GetPlayerIDsForTeam(g_pDOTAPlayerResource, v2, &vWinners);
  v3 = 0;
  for ( i = 0; vWinners.m_Size > i; ++v3 )
  {
    PlayerCompendiumCoinPotentialWinnings = CIngameEvent_FM2015::GetPlayerCompendiumCoinPotentialWinnings(
                                              this,
                                              vWinners.m_Memory.m_pMemory[v3],
                                              1);
    CIngameEvent_FM2015::SetPlayerCompendiumCoinWagerWinnings(
      this,
      vWinners.m_Memory.m_pMemory[v3],
      PlayerCompendiumCoinPotentialWinnings);
    ++i;
  }
  vLosers.m_Size = 0;
  vLosers.m_Memory.m_pMemory = 0;
  vLosers.m_Memory.m_nAllocationCount = 0;
  vLosers.m_Memory.m_nGrowSize = 0;
  CDOTA_PlayerResource::GetPlayerIDsForTeam(g_pDOTAPlayerResource, (v2 == 2) + 2, &vLosers);
  v6 = 0;
  for ( j = 0; vLosers.m_Size > j; ++v6 )
  {
    CIngameEvent_FM2015::SetPlayerCompendiumCoinWagerWinnings(this, vLosers.m_Memory.m_pMemory[v6], 0);
    ++j;
  }
  CUtlVectorBase<int,CUtlMemory<int,int>>::~CUtlVectorBase(&vLosers);
  CUtlVectorBase<int,CUtlMemory<int,int>>::~CUtlVectorBase(&vWinners);
}


// CIngameEvent_FM2015::OnPreGameStarted  (line 387, @0x0000000002597b00, libserver.so)  // inlines: GetGameTime, NetworkStateChanged, Set, curtime, operator=<double>, operator=<float>
// calls: RandomInt, CBaseEntity::ThinkSet
// globals: CIngameEvent_FM2015::PreWagerTimeThink(void)
void __fastcall CIngameEvent_FM2015::OnPreGameStarted(CIngameEvent_FM2015 *const this)
{
  int v2; // eax
  CGlobalVars *v3; // r12
  void (__fastcall *m_pfnWarningFunc)(__int64); // rax
  float v5; // xmm0_4
  float m_Value; // xmm0_4
  float v7; // [rsp+Ch] [rbp-14h]

  v2 = RandomInt(0, 99);
  if ( v2 > 19 )
  {
    m_Value = this->m_flBonusWagerRate.m_Value;
    if ( v2 > 74 )
    {
      if ( v2 > 94 )
      {
        if ( m_Value != 0.25 )
        {
          (*(this->_vptr_IHandleEntity + 22))(this, 4800, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
          this->m_flBonusWagerRate.m_Value = 0.25;
        }
      }
      else if ( m_Value != 0.15000001 )
      {
        (*(this->_vptr_IHandleEntity + 22))(this, 4800, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        this->m_flBonusWagerRate.m_Value = 0.15000001;
      }
    }
    else if ( m_Value != 0.050000001 )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 4800, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_flBonusWagerRate.m_Value = 0.050000001;
    }
  }
  else if ( this->m_flBonusWagerRate.m_Value != 0.0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 4800, 0xFFFFFFFFLL, 0xFFFFFFFFLL, 0.0);
    this->m_flBonusWagerRate.m_Value = 0.0;
  }
  if ( this->m_flWagerTimer.m_Value != 45.0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 4792, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_flWagerTimer.m_Value = 45.0;
  }
  if ( (*&g_pGameRules[18].m_szQuestName[20] + 45.0) == this->m_flWagerEndTime.m_Value )
  {
    v3 = gpGlobals;
    if ( gpGlobals != 0 )
      goto LABEL_8;
LABEL_21:
    v5 = 0.1;
    goto LABEL_13;
  }
  v7 = *&g_pGameRules[18].m_szQuestName[20] + 45.0;
  (*(this->_vptr_IHandleEntity + 22))(this, 4796, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
  this->m_flWagerEndTime.m_Value = v7;
  v3 = gpGlobals;
  if ( gpGlobals == 0 )
    goto LABEL_21;
LABEL_8:
  if ( !v3->m_bEnableAssertions && !v3->m_bInSimulation )
  {
    m_pfnWarningFunc = v3->m_pfnWarningFunc;
    if ( m_pfnWarningFunc != 0 )
      m_pfnWarningFunc(1);
  }
  v5 = v3->m_flCurrentTime + 0.1;
LABEL_13:
  CBaseEntity::ThinkSet(this, CIngameEvent_FM2015::PreWagerTimeThink, v5, -1151109104, 0);
}


// CIngameEvent_FM2015::PreWagerTimeThink  (line 417, @0x0000000002597810, libserver.so)  // inlines: GetGameTime, NetworkStateChanged, Set, curtime, operator=<float>
// calls: CBaseEntity::ThinkSet
// globals: CIngameEvent_FM2015::PreWagerTimeThink(void)
void __fastcall CIngameEvent_FM2015::PreWagerTimeThink(CIngameEvent_FM2015 *const this)
{
  float m_Value; // xmm1_4
  CGlobalVars *v3; // r12
  float v4; // xmm0_4
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  float v6; // [rsp+Ch] [rbp-14h]

  m_Value = this->m_flWagerTimer.m_Value;
  if ( (this->m_flWagerEndTime.m_Value - *&g_pGameRules[18].m_szQuestName[20]) != m_Value )
  {
    v6 = this->m_flWagerEndTime.m_Value - *&g_pGameRules[18].m_szQuestName[20];
    (*(this->_vptr_IHandleEntity + 22))(this, 4792, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_flWagerTimer.m_Value = v6;
    m_Value = v6;
  }
  if ( m_Value > 0.0 )
  {
    v3 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
          m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
      }
      v4 = v3->m_flCurrentTime + 0.1;
    }
    else
    {
      v4 = 0.1;
    }
    CBaseEntity::ThinkSet(this, CIngameEvent_FM2015::PreWagerTimeThink, v4, -1151109104, 0);
  }
}


// CIngameEvent_FM2015::OnGameStarted  (line 430, @0x00000000025a87e0, libserver.so)  // inlines: Add, Add<google::protobuf::RepeatedPtrField<CMsgServerToGCHoldEventPoints_HoldRequest>::TypeHandler>, AllocProto, CProtoBufMsg, CUtlMemory, CUtlVector, CUtlVectorBase, CVProfScope, FreeProto, Get, GetExtension<google::protobuf::internal::PrimitiveTypeTraits<int>, 5u, false>, GetLobby, GetPlayerCompendiumCoinFinalWager, IsEnabled, Lock, New, RTime32TimeCur, Unlock, add_holds, set_account_id, set_event_id, set_has_account_id, set_has_event_id, set_has_hold_key, set_has_hold_until, set_has_premium_held, set_hold_key, set_hold_until, set_premium_held, ~CProtoBufMsg, ~CUtlVector, ~CVProfScope
// calls: GDOTAGCClientSystem, GCSDK::CProtoBufMsgBase::CProtoBufMsgBase, CVProfile::EnterScope, pthread_mutex_lock, operator new, CMsgServerToGCHoldEventPoints::descriptor, google::protobuf::internal::ExtensionSet::GetInt32(int,int), GCSDK::CProtoBufMsgMemoryPoolBase::CProtoBufMsgMemoryPoolBase, GCSDK::GProtoBufMsgMemoryPoolMgr, GCSDK::CProtoBufMsgMemoryPoolMgr::RegisterPool, pthread_mutex_unlock, GCSDK::CProtoBufMsgMemoryPoolBase::Alloc (26 total)
// strings: "Networking", "CProtoBufMsg::CProtoBufMsg( MsgType_t )"
// globals: GCSDK::CProtoBufMsg<CMsgServerToGCHoldEventPoints>::s_bRegisteredWithMemoryPoolMgr, GCSDK::CProtoBufMsg<CMsgServerToGCHoldEventPoints>::s_pMemoryPool
void __fastcall CIngameEvent_FM2015::OnGameStarted(CIngameEvent_FM2015 *const this)
{
  __int64 v1; // rbx
  int m_enabled; // eax
  bool v3; // r12
  GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCHoldEventPoints> *v4; // r13
  const google::protobuf::Descriptor *v5; // rax
  uint32 Int32; // r15d
  const google::protobuf::Descriptor *v7; // rax
  uint32 v8; // eax
  GCSDK::CProtoBufMsgMemoryPoolMgr *v9; // rax
  int v10; // eax
  CMsgServerToGCHoldEventPoints *m_pProtoBufBody; // rdx
  __int64 v12; // rdx
  CMsgServerToGCHoldEventPoints *v13; // rax
  CMsgServerToGCHoldEventPoints *v14; // rax
  __int64 v15; // r12
  int v16; // r13d
  bool i; // al
  CMsgServerToGCHoldEventPoints_HoldRequest *v18; // r15
  __int64 v19; // rax
  __int64 v20; // rdx
  int v21; // eax
  int v22; // r14d
  AccountID_t SteamAccountID; // eax
  CMsgServerToGCHoldEventPoints *v24; // rbx
  int v25; // esi
  __int64 v26; // rax
  __int64 v27; // rdx
  CGCClientSystem *v28; // rax
  AccountID_t nAccountID; // [rsp+14h] [rbp-ACh]
  int v31; // [rsp+34h] [rbp-8Ch] BYREF
  double v32; // [rsp+38h] [rbp-88h] BYREF
  CUtlVector<int,CUtlMemory<int,int> > vPlayers; // [rsp+40h] [rbp-80h] BYREF
  GCSDK::CProtoBufMsg<CMsgServerToGCHoldEventPoints> msg; // [rsp+60h] [rbp-60h] BYREF

  v1 = *(GDOTAGCClientSystem() + 260);
  if ( v1 != 0 )
  {
    GCSDK::CProtoBufMsgBase::CProtoBufMsgBase(&msg, 0x1DACu);
    msg._vptr_CProtoBufMsgBase = &off_41084F0;
    msg.m_pProtoBufBody = 0;
    m_enabled = g_VProfCurrentProfile.m_enabled;
    v3 = m_enabled != 0;
    if ( m_enabled != 0 )
      CVProfile::EnterScope(&g_VProfCurrentProfile, "CProtoBufMsg::CProtoBufMsg( MsgType_t )", 0, "Networking", 0, 4);
    if ( !GCSDK::CProtoBufMsg<CMsgServerToGCHoldEventPoints>::s_bRegisteredWithMemoryPoolMgr )
    {
      pthread_mutex_lock(&GCSDK::CProtoBufMsgBase::s_PoolRegMutex.m_Mutex);
      if ( !GCSDK::CProtoBufMsg<CMsgServerToGCHoldEventPoints>::s_bRegisteredWithMemoryPoolMgr )
      {
        v4 = operator new(0x28u);
        v5 = CMsgServerToGCHoldEventPoints::descriptor();
        Int32 = google::protobuf::internal::ExtensionSet::GetInt32(
                  (v5->options_ + 8),
                  msgpool_hard_limit.number_,
                  msgpool_hard_limit.default_value_);
        v7 = CMsgServerToGCHoldEventPoints::descriptor();
        v8 = google::protobuf::internal::ExtensionSet::GetInt32(
               (v7->options_ + 8),
               msgpool_soft_limit.number_,
               msgpool_soft_limit.default_value_);
        GCSDK::CProtoBufMsgMemoryPoolBase::CProtoBufMsgMemoryPoolBase(v4, v8, Int32);
        v4->_vptr_CProtoBufMsgMemoryPoolBase = &off_4110A90;
        GCSDK::CProtoBufMsg<CMsgServerToGCHoldEventPoints>::s_pMemoryPool = v4;
        v9 = GCSDK::GProtoBufMsgMemoryPoolMgr();
        GCSDK::CProtoBufMsgMemoryPoolMgr::RegisterPool(v9, v4);
        GCSDK::CProtoBufMsg<CMsgServerToGCHoldEventPoints>::s_bRegisteredWithMemoryPoolMgr = 1;
      }
      pthread_mutex_unlock(&GCSDK::CProtoBufMsgBase::s_PoolRegMutex.m_Mutex);
    }
    msg.m_pProtoBufBody = GCSDK::CProtoBufMsgMemoryPoolBase::Alloc(GCSDK::CProtoBufMsg<CMsgServerToGCHoldEventPoints>::s_pMemoryPool);
    if ( v3 )
      CVProfile::ExitScope(&g_VProfCurrentProfile);
    v10 = (*(this->_vptr_IHandleEntity + 207))(this);
    m_pProtoBufBody = msg.m_pProtoBufBody;
    vPlayers.m_Size = 0;
    vPlayers.m_Memory.m_pMemory = 0;
    *(msg.m_pProtoBufBody + 4) |= 2u;
    *(m_pProtoBufBody + 14) = v10;
    v12 = *(v1 + 216);
    v13 = msg.m_pProtoBufBody;
    *(msg.m_pProtoBufBody + 4) |= 4u;
    *(v13 + 6) = v12;
    v14 = msg.m_pProtoBufBody;
    LODWORD(v12) = CRTime::sm_nTimeCur + 7200;
    *(msg.m_pProtoBufBody + 4) |= 8u;
    *(v14 + 15) = v12;
    vPlayers.m_Memory.m_nAllocationCount = 0;
    vPlayers.m_Memory.m_nGrowSize = 0;
    CDOTA_PlayerResource::GetAllPlayerIDs(g_pDOTAPlayerResource, &vPlayers);
    if ( vPlayers.m_Size > 0 )
    {
      v15 = 0;
      v16 = 0;
      for ( i = CIngameEvent_FM2015::GetPlayerWagerPct(this, *vPlayers.m_Memory.m_pMemory, &v32, &v31);
            ;
            i = CIngameEvent_FM2015::GetPlayerWagerPct(this, vPlayers.m_Memory.m_pMemory[v15], &v32, &v31) )
      {
        if ( i )
        {
          v22 = v31;
          if ( v31 > 0 )
          {
            SteamAccountID = CDOTA_PlayerResource::GetSteamAccountID(
                               g_pDOTAPlayerResource,
                               vPlayers.m_Memory.m_pMemory[v15]);
            v24 = msg.m_pProtoBufBody;
            nAccountID = SteamAccountID;
            v25 = *(msg.m_pProtoBufBody + 9);
            v26 = *(msg.m_pProtoBufBody + 8);
            if ( v26 >= v25 )
            {
              if ( v25 == *(msg.m_pProtoBufBody + 10) )
                google::protobuf::internal::RepeatedPtrFieldBase::Reserve(msg.m_pProtoBufBody + 1, v25 + 1);
              v18 = operator new(0x28u);
              CMsgServerToGCHoldEventPoints_HoldRequest::CMsgServerToGCHoldEventPoints_HoldRequest(v18);
              v19 = *(v24 + 8);
              v20 = *(v24 + 3);
              ++*(v24 + 9);
              *(v24 + 8) = v19 + 1;
              *(v20 + 8 * v19) = v18;
            }
            else
            {
              v27 = *(msg.m_pProtoBufBody + 3);
              *(msg.m_pProtoBufBody + 8) = v26 + 1;
              v18 = *(v27 + 8 * v26);
            }
            if ( v18 != 0 )
            {
              v21 = *(v18 + 4);
              *(v18 + 8) = v22;
              *(v18 + 6) = nAccountID;
              *(v18 + 4) = v21 | 5;
            }
          }
        }
        ++v16;
        ++v15;
        if ( vPlayers.m_Size <= v16 )
          break;
      }
    }
    v28 = GCClientSystem();
    CGCClientSystem::BSendMessage(v28, &msg);
    CUtlVectorBase<int,CUtlMemory<int,int>>::~CUtlVectorBase(&vPlayers);
    msg._vptr_CProtoBufMsgBase = &off_41084F0;
    if ( msg.m_pProtoBufBody != 0 )
    {
      GCSDK::CProtoBufMsgMemoryPoolBase::Free(
        GCSDK::CProtoBufMsg<CMsgServerToGCHoldEventPoints>::s_pMemoryPool,
        msg.m_pProtoBufBody);
      msg.m_pProtoBufBody = 0;
    }
    GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(&msg);
  }
}


// CIngameEvent_FM2015::GetPlayerCompendiumCoinMaxWager  (line 480, @0x00000000025a0180, libserver.so)
int __fastcall CIngameEvent_FM2015::GetPlayerCompendiumCoinMaxWager(CIngameEvent_FM2015 *const this, int nPlayerID)
{
  int result; // eax

  result = 0;
  if ( nPlayerID <= 9 )
    return this->m_CompendiumCoinWager.m_Value[nPlayerID];
  return result;
}


// CIngameEvent_FM2015::GetPlayerWagerPct  (line 494, @0x00000000025a0250, libserver.so)  // inlines: GetPlayerCompendiumCoinMaxWager
// calls: CIngameEvent_FM2015::GetTeamWagerPool, CDOTA_PlayerResource::GetTeam
// callers: CIngameEvent_FM2015::GetPlayerCompendiumCoinFinalWager, CIngameEvent_FM2015::GetPlayerCompendiumCoinPotentialWinnings, CIngameEvent_FM2015::OnGameStarted, CIngameEvent_FM2015::AddResultToSignout
bool __fastcall CIngameEvent_FM2015::GetPlayerWagerPct(
        CIngameEvent_FM2015 *const this,
        int nPlayerID,
        double *pflPct,
        uint32 *pnWagerAmount)
{
  uint32 v6; // r14d
  int TeamWagerPool; // r15d
  int v9; // r12d
  int Team; // eax
  double v11; // xmm1_8
  int v12; // eax
  double v13; // xmm1_8

  if ( nPlayerID > 9 )
    return 0;
  v6 = this->m_CompendiumCoinWager.m_Value[nPlayerID];
  if ( v6 == 0 )
    return 0;
  TeamWagerPool = CIngameEvent_FM2015::GetTeamWagerPool(this, 2, 0);
  v9 = CIngameEvent_FM2015::GetTeamWagerPool(this, 3, 0);
  Team = CDOTA_PlayerResource::GetTeam(g_pDOTAPlayerResource, nPlayerID);
  v11 = v6;
  if ( Team == 2 )
  {
    LOBYTE(Team) = 1;
    if ( TeamWagerPool > 0 )
      Team = TeamWagerPool;
    v13 = v11 / Team;
  }
  else
  {
    v12 = 1;
    if ( v9 > 0 )
      v12 = v9;
    v13 = v11 / v12;
  }
  if ( pflPct != 0 )
    *pflPct = v13;
  if ( pnWagerAmount == 0 )
    return 1;
  if ( v9 > TeamWagerPool )
    v9 = TeamWagerPool;
  if ( ((v9 + 500) * v13 + 0.5) <= v6 )
    v6 = ((v9 + 500) * v13 + 0.5);
  *pnWagerAmount = v6;
  return 1;
}


// CIngameEvent_FM2015::GetPlayerCompendiumCoinFinalWager  (line 523, @0x00000000025a0380, libserver.so)
// calls: CIngameEvent_FM2015::GetPlayerWagerPct
int __fastcall CIngameEvent_FM2015::GetPlayerCompendiumCoinFinalWager(CIngameEvent_FM2015 *const this, int nPlayerID)
{
  bool PlayerWagerPct; // al
  int v3; // edx
  uint32 unWagerAmount; // [rsp+4h] [rbp-Ch] BYREF
  double flPct; // [rsp+8h] [rbp-8h] BYREF

  PlayerWagerPct = CIngameEvent_FM2015::GetPlayerWagerPct(this, nPlayerID, &flPct, &unWagerAmount);
  v3 = 0;
  if ( PlayerWagerPct )
    return unWagerAmount;
  return v3;
}


// CIngameEvent_FM2015::GetPlayerCompendiumCoinPotentialWinnings  (line 535, @0x00000000025a03b0, libserver.so)
// calls: CIngameEvent_FM2015::GetPlayerWagerPct
// callers: CIngameEvent_FM2015::GetPlayerCompendiumCoinFinalMatchResult, CIngameEvent_FM2015::DoEndGameCoinWagerCalculations
int __fastcall CIngameEvent_FM2015::GetPlayerCompendiumCoinPotentialWinnings(
        CIngameEvent_FM2015 *const this,
        int nPlayerID,
        bool bIncludeBonus)
{
  bool PlayerWagerPct; // al
  int v6; // ecx
  double v7; // xmm1_8
  uint32 unWagerAmount; // [rsp+4h] [rbp-1Ch] BYREF
  double flPct[3]; // [rsp+8h] [rbp-18h] BYREF

  PlayerWagerPct = CIngameEvent_FM2015::GetPlayerWagerPct(this, nPlayerID, flPct, &unWagerAmount);
  v6 = 0;
  if ( PlayerWagerPct )
  {
    v7 = 1.0;
    if ( bIncludeBonus )
      v7 = this->m_flBonusWagerRate.m_Value + 1.0;
    return ((2 * unWagerAmount) * v7 + 0.5);
  }
  return v6;
}


// CIngameEvent_FM2015::GetPlayerCompendiumCoinFinalMatchResult  (line 552, @0x00000000025a0430, libserver.so)  // inlines: DOTAGameRules, GetGameWinner, State_IsGameOver
// calls: CDOTA_PlayerResource::GetTeam, CIngameEvent_FM2015::GetPlayerCompendiumCoinPotentialWinnings
// callers: CIngameEvent_FM2015::AddResultToSignout
int __fastcall CIngameEvent_FM2015::GetPlayerCompendiumCoinFinalMatchResult(
        CIngameEvent_FM2015 *const this,
        int nPlayerID)
{
  int v5; // r13d

  if ( (*&g_pGameRules[6].m_szQuestName[28] - 6) > 1 )
    return 0;
  v5 = *&g_pGameRules[16].m_szQuestName[80];
  if ( CDOTA_PlayerResource::GetTeam(g_pDOTAPlayerResource, nPlayerID) == v5 )
    return CIngameEvent_FM2015::GetPlayerCompendiumCoinPotentialWinnings(this, nPlayerID, 1);
  else
    return 0;
}


// CIngameEvent_FM2015::GetPlayerCompendiumCoinWagerWinnings  (line 574, @0x00000000025a01a0, libserver.so)
int __fastcall CIngameEvent_FM2015::GetPlayerCompendiumCoinWagerWinnings(
        CIngameEvent_FM2015 *const this,
        int nPlayerID)
{
  int result; // eax

  result = 0;
  if ( nPlayerID <= 9 )
    return this->m_CompendiumCoinWagerResults.m_Value[nPlayerID];
  return result;
}


// CIngameEvent_FM2015::GetTeamWagerPool  (line 588, @0x00000000025a01c0, libserver.so)  // inlines: GetPlayerCompendiumCoinMaxWager
// calls: CDOTA_PlayerResource::NumTeamPlayers, CDOTA_PlayerResource::GetTeam
// callers: CIngameEvent_FM2015::GetPlayerWagerPct
int __fastcall CIngameEvent_FM2015::GetTeamWagerPool(CIngameEvent_FM2015 *const this, int nTeam, int *nTeamBets)
{
  int v3; // r15d
  int v4; // r14d
  unsigned int i; // ebx
  int v7; // eax

  v3 = 0;
  v4 = 0;
  for ( i = 0; i < CDOTA_PlayerResource::NumTeamPlayers(g_pDOTAPlayerResource); ++i )
  {
    if ( CDOTA_PlayerResource::GetTeam(g_pDOTAPlayerResource, i) == nTeam && i <= 9 )
    {
      v7 = this->m_CompendiumCoinWager.m_Value[i];
      if ( v7 != 0 )
      {
        v4 += v7;
        ++v3;
      }
    }
  }
  if ( nTeamBets != 0 )
    *nTeamBets = v3;
  return v4;
}


// CIngameEvent_FM2015::GetHousePoolContribution  (line 615, @0x00000000025a04b0, libserver.so)
int __fastcall CIngameEvent_FM2015::GetHousePoolContribution(const CIngameEvent_FM2015 *const this)
{
  return 500;
}


// CIngameEvent_WM2016::YouForgotToImplementOrDeclareServerClass  (line 623, @0x0000000002593660, libserver.so)
int __fastcall CIngameEvent_WM2016::YouForgotToImplementOrDeclareServerClass(CIngameEvent_WM2016 *const this)
{
  return 0;
}


// CIngameEvent_WM2016::GetServerClass  (line 623, @0x00000000025997d0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CIngameEvent_WM2016::GetServerClass(CIngameEvent_WM2016 *const this)
{
  CEntityClass *m_pClass; // rdx
  ServerClass *result; // rax
  CEntityClassInfo *m_pBaseClassInfo; // rdx

  m_pClass = this->m_pEntity->m_pClass;
  result = m_pClass->m_pGameClass;
  if ( result == 0 )
  {
    m_pBaseClassInfo = m_pClass->m_pBaseClassInfo;
    if ( m_pBaseClassInfo != 0 )
      return CEntityClass::GetGameClass(m_pBaseClassInfo->m_pClass, 0);
  }
  return result;
}


// CIngameEvent_WM2016::Spawn  (line 657, @0x0000000002593970, libserver.so)  // inlines: SetLessFunc, Spawn
// calls: CBaseEntity::Spawn
// globals: CDefOps<uint>::LessFunc(uint const&,uint const&)
void __fastcall CIngameEvent_WM2016::Spawn(CIngameEvent_WM2016 *const this, const CEntityKeyValues *pKeyValues)
{
  CBaseEntity::Spawn(this, pKeyValues);
  if ( this->m_mapCommunityGoalIncrements.m_Tree.m_LessFunc.m_LessFunc == 0 )
    this->m_mapCommunityGoalIncrements.m_Tree.m_LessFunc.m_LessFunc = CDefOps<unsigned int>::LessFunc;
}


// CIngameEvent_WM2016::Create  (line 667, @0x00000000025a04c0, libserver.so)
// calls: CBaseEntity::Create
// callers: CDOTAGamerules::InternalCreateIngameEvent
// strings: "dota_ingameevent_wm2016"
CIngameEvent_WM2016 *__cdecl CIngameEvent_WM2016::Create()
{
  CBaseEntity *v0; // rax
  CIngameEvent_WM2016 *v1; // rbx

  v0 = CBaseEntity::Create("dota_ingameevent_wm2016", &vec3_origin, &vec3_angle, 0);
  v1 = v0;
  if ( v0 != 0 )
    (*(v0->_vptr_IHandleEntity + 212))(v0);
  return v1;
}


// CIngameEvent_WM2016::GoActive  (line 681, @0x00000000025bdd60, libserver.so)  // inlines: AddToTail, AssignPathIdToElement, CFieldPath, CUtlDelegate<CClientMessageDelegateHook<CDOTAClientMsg_EventPointsTip_t>, CClientMessageDelegateHook<CDOTAClientMsg_EventPointsTip_t> >, CUtlDelegate<CIngameEvent_WM2016, CIngameEvent_WM2016>, Clear, Convert<CClientMessageDelegateHook<CDOTAClientMsg_EventPointsTip_t>, bool (CClientMessageDelegateHook<CDOTAClientMsg_EventPointsTip_t>::*)(const CDOTAClientMsg_EventPointsTip_t&), void (detail::GenericClass::*)()>, Convert<CIngameEvent_WM2016, bool (CIngameEvent_WM2016::*)(CEntityIndex, const CDOTAClientMsg_CoinWager_t&), void (detail::GenericClass::*)()>, Convert<CIngameEvent_WM2016, bool (CIngameEvent_WM2016::*)(CEntityIndex, const CDOTAClientMsg_EventPointsTip_t&), void (detail::GenericClass::*)()>, CopyConstruct<IClientMessageDelegateHook*>, CopyFrom<FastDelegate2<CEntityIndex, const CDOTAClientMsg_EventPointsTip_t&, bool> >, Element, FastDelegate1<CClientMessageDelegateHook<CDOTAClientMsg_EventPointsTip_t>, CClientMessageDelegateHook<CDOTAClientMsg_EventPointsTip_t> >, FastDelegate2<CIngameEvent_WM2016, CIngameEvent_WM2016>, Get, GetPathData, GrowMemory, IsUsingFixedPaths, LeafCodeInfo_t, NetworkStateChanged, OnSizeChanged, Path_AddToTail, Path_RemoveAll, Path_SetCount, Push, ReassignPathIds, RegisterGameEventHandler<CDOTAClientMsg_EventPointsTip_t>, Resolve, Set, SetCount, SetDelegate, SetMementoFrom, SetReleased, UtlMakeDelegate<CClientMessageDelegateHook<CDOTAClientMsg_EventPointsTip_t>, CClientMessageDelegateHook<CDOTAClientMsg_EventPointsTip_t>, const CDOTAClientMsg_EventPointsTip_t&, bool>, UtlMakeDelegate<CIngameEvent_WM2016, CIngameEvent_WM2016, CEntityIndex, const CDOTAClientMsg_CoinWager_t&, bool>, UtlMakeDelegate<CIngameEvent_WM2016, CIngameEvent_WM2016, CEntityIndex, const CDOTAClientMsg_EventPointsTip_t&, bool>, V_memcpy, bindmemfunc<CClientMessageDelegateHook<CDOTAClientMsg_EventPointsTip_t>, bool (CClientMessageDelegateHook<CDOTAClientMsg_EventPointsTip_t>::*)(const CDOTAClientMsg_EventPointsTip_t&)>, bindmemfunc<CIngameEvent_WM2016, bool (CIngameEvent_WM2016::*)(CEntityIndex, const CDOTAClientMsg_CoinWager_t&)>, bindmemfunc<CIngameEvent_WM2016, bool (CIngameEvent_WM2016::*)(CEntityIndex, const CDOTAClientMsg_EventPointsTip_t&)>, memcpy, operator CEntityInstance*, operator(), operator=, operator=<float>, operator=<int>, operator[]
// calls: CUtlVectorEmbeddedNetworkVar<CDOTA_PlayerChallengeInfo, CIngameEvent_Base::NetworkVar_m_CompendiumChallengeInfo, 24>::Resolve, CUtlVectorBase<CDOTA_PlayerChallengeInfo, CNetworkUtlVector_MemoryType<CDOTA_PlayerChallengeInfo, 24> >::SetCount, GetNetworkSerializerForEntityInstance, memcpy, __memcpy_chk, LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, EntityInstanceAddChangeAccessorPath, memcmp, CDOTA_PlayerResource::GetPlayer, CDOTA_RealtimeCombatAnalyzer::RemoveQueriesForPlayer (18 total)
// strings: "CClientMessageDelegateHook::Registered twice (no intervening Release)\n", "../../public/tier2/fieldpath.h", "Path_SetCount", "Path_SetCount failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)", "Path_AddToTail", "Path_AddToTail failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)" (7 total)
// globals: CIngameEvent_WM2016::ClientMsg_SetPlayerCoinWager(CEntityIndex,CDOTAClientMsg_CoinWager_t const&), CIngameEvent_WM2016::ClientMsg_DoEventPointsTip(CEntityIndex,CDOTAClientMsg_EventPointsTip_t const&), CClientMessageDelegateHook<CDOTAClientMsg_EventPointsTip_t>::Dispatch(CDOTAClientMsg_EventPointsTip_t const&), IGameEventSystem::FindOrCreateGameEvent<CDOTAClientMsg_EventPointsTip_t>(bool)::s_hEvent
void __fastcall CIngameEvent_WM2016::GoActive(CIngameEvent_WM2016 *const this)
{
  CEntityInstance *v2; // rdi
  int v3; // r14d
  CUtlVectorBase<CDOTA_PlayerChallengeInfo,CNetworkUtlVector_MemoryType<CDOTA_PlayerChallengeInfo,24> >::CAllocator *p_m_Memory; // rbx
  CEntityInstance *m_pObj; // rcx
  FlattenedSerializerHandle_t NetworkSerializerForEntityInstance; // rax
  __int64 v7; // rdx
  size_t v8; // rdx
  void **v9; // rsi
  __int64 m_nCount; // rdx
  __int64 v11; // rdx
  CFieldPath *m_pPaths; // rsi
  int16 v13; // cx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdi
  __int64 v17; // rsi
  __int64 v18; // rax
  CEntityInstance *v19; // rcx
  CUtlDelegate<void()> *m_pArraySizeChangedDelegate; // rax
  void (*pfn)(detail::GenericClass *); // rdx
  detail::GenericClass *v22; // rdi
  unsigned __int8 *v23; // r13
  char *v24; // rbx
  unsigned int v25; // r12d
  _QWORD *v26; // rdi
  _QWORD *v27; // rdi
  _QWORD *v28; // rdi
  _QWORD *v29; // rdi
  _QWORD *v30; // rdi
  _QWORD *v31; // rdi
  CIngameEvent_WM2016 *v32; // rbx
  CNetworkArrayBase<int,10,CIngameEvent_WM2016::NetworkVar_m_CompendiumTippedPlayers> *p_m_CompendiumTippedPlayers; // r12
  unsigned int v34; // r13d
  CDOTAPlayer *Player; // rax
  bool v36; // zf
  __int64 v37; // r12
  int v38; // eax
  IClientMessageDelegateHook **v39; // rax
  __int64 m_Size; // r13
  int v41; // eax
  IClientMessageDelegateHook **v42; // rax
  unsigned __int8 *v43; // [rsp+0h] [rbp-F0h]
  __int64 v44; // [rsp+8h] [rbp-E8h]
  unsigned __int8 *v45; // [rsp+10h] [rbp-E0h]
  int v46; // [rsp+1Ch] [rbp-D4h]
  unsigned __int8 *v47; // [rsp+20h] [rbp-D0h]
  _DWORD *v48; // [rsp+28h] [rbp-C8h]
  _DWORD *v49; // [rsp+30h] [rbp-C0h]
  CUtlVectorEmbeddedNetworkVar<CDOTA_PlayerChallengeInfo,CIngameEvent_Base::NetworkVar_m_CompendiumChallengeInfo,24> *p_m_CompendiumChallengeInfo; // [rsp+38h] [rbp-B8h]
  CUtlVectorBase<CDOTA_PlayerChallengeInfo,CNetworkUtlVector_MemoryType<CDOTA_PlayerChallengeInfo,24> > *v51; // [rsp+38h] [rbp-B8h]
  _DWORD *v52; // [rsp+40h] [rbp-B0h]
  void (__fastcall *v53)(void **, IFlattenedSerializers *, FlattenedSerializerHandle_t, CEntityInstance *, CUtlVectorEmbeddedNetworkVar<CDOTA_PlayerChallengeInfo,CIngameEvent_Base::NetworkVar_m_CompendiumChallengeInfo,24> *, bool *); // [rsp+48h] [rbp-A8h]
  _DWORD *v54; // [rsp+48h] [rbp-A8h]
  CEntityInstance *v55; // [rsp+50h] [rbp-A0h]
  _DWORD *v56; // [rsp+50h] [rbp-A0h]
  CFieldPath *dest; // [rsp+58h] [rbp-98h]
  char *desta; // [rsp+58h] [rbp-98h]
  CFieldPath path; // [rsp+60h] [rbp-90h] BYREF
  void *src[2]; // [rsp+80h] [rbp-70h] BYREF
  __int64 v61; // [rsp+90h] [rbp-60h]
  LeafCodeInfo_t s2[3]; // [rsp+A0h] [rbp-50h] BYREF

  this->m_bInitialized = 0;
  if ( this->m_flWagerTimer.m_Value != -1.0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 4900, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_flWagerTimer.m_Value = -1.0;
  }
  if ( this->m_flWagerEndTime.m_Value != -1.0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 4904, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_flWagerEndTime.m_Value = -1.0;
  }
  if ( this->m_CompendiumChallengeInfo.m_Vector.m_Size != 10 )
  {
    p_m_CompendiumChallengeInfo = &this->m_CompendiumChallengeInfo;
    CUtlVectorEmbeddedNetworkVar<CDOTA_PlayerChallengeInfo,CIngameEvent_Base::NetworkVar_m_CompendiumChallengeInfo,24>::Resolve(&this->m_CompendiumChallengeInfo);
    if ( !this->m_CompendiumChallengeInfo.m_bIsNetworkVarExcluded )
      EntityInstanceSetNetworkStateChanged(this->m_CompendiumChallengeInfo.m_pOwnerEntity.m_pObj);
    CUtlVectorBase<CDOTA_PlayerChallengeInfo,CNetworkUtlVector_MemoryType<CDOTA_PlayerChallengeInfo,24>>::SetCount(
      &p_m_CompendiumChallengeInfo->m_Vector,
      10);
    CUtlVectorEmbeddedNetworkVar<CDOTA_PlayerChallengeInfo,CIngameEvent_Base::NetworkVar_m_CompendiumChallengeInfo,24>::Resolve(p_m_CompendiumChallengeInfo);
    if ( !this->m_CompendiumChallengeInfo.m_bIsNetworkVarExcluded && this->m_CompendiumChallengeInfo.m_Vector.m_Size > 0 )
    {
      v3 = 0;
      p_m_Memory = &this->m_CompendiumChallengeInfo.m_Vector.m_Memory;
      dest = &this->m_CompendiumChallengeInfo.m_PathToVector;
      do
      {
        if ( !this->m_CompendiumChallengeInfo.m_bResolved )
        {
          m_pObj = this->m_CompendiumChallengeInfo.m_pOwnerEntity.m_pObj;
          this->m_CompendiumChallengeInfo.m_bResolved = 1;
          if ( m_pObj != 0 )
          {
            v55 = m_pObj;
            v53 = *(*g_pFlattenedSerializers + 272LL);
            NetworkSerializerForEntityInstance = GetNetworkSerializerForEntityInstance(m_pObj);
            v53(
              src,
              g_pFlattenedSerializers,
              NetworkSerializerForEntityInstance,
              v55,
              p_m_CompendiumChallengeInfo,
              &this->m_CompendiumChallengeInfo.m_bIsNetworkVarExcluded);
            if ( dest != src )
            {
              v7 = v61;
              this->m_CompendiumChallengeInfo.m_PathToVector.m_bUsingExternalPaths = 0;
              if ( v7 > 6 )
                goto LABEL_127;
              this->m_CompendiumChallengeInfo.m_PathToVector.m_nCount = v7;
              if ( v7 > 0 )
              {
                v8 = 2 * v7;
                v9 = src;
                if ( BYTE2(v61) != 0 )
                  v9 = src[0];
                memcpy(dest, v9, v8);
              }
            }
          }
          else
          {
            if ( this->m_CompendiumChallengeInfo.m_PathToVector.m_bUsingExternalPaths )
              CUtlVectorEmbeddedNetworkVar<CDOTA_PlayerChallengeInfo,CIngameEvent_Base::NetworkVar_m_CompendiumChallengeInfo,24>::Resolve(v2);
            this->m_CompendiumChallengeInfo.m_PathToVector.m_nCount = 0;
          }
        }
        if ( !this->m_CompendiumChallengeInfo.m_bIsNetworkVarExcluded )
        {
          m_nCount = this->m_CompendiumChallengeInfo.m_PathToVector.m_nCount;
          path.m_bUsingExternalPaths = 0;
          path.m_nCount = 0;
          if ( m_nCount <= 6 )
          {
            path.m_nCount = m_nCount;
            if ( m_nCount > 0 )
            {
              v11 = 2 * m_nCount;
              if ( this->m_CompendiumChallengeInfo.m_PathToVector.m_bUsingExternalPaths )
                m_pPaths = this->m_CompendiumChallengeInfo.m_PathToVector.u.m_pPaths;
              else
                m_pPaths = &this->m_CompendiumChallengeInfo.m_PathToVector;
              __memcpy_chk(&path, m_pPaths, v11, 24);
              v13 = v3;
              if ( path.m_bUsingExternalPaths )
              {
                p_m_Memory = &LOG_GENERAL;
                if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
                {
                  s2[0].m_szFile = "../../public/tier2/fieldpath.h";
                  s2[0].m_szFunction = "Path_AddToTail";
                  s2[0].m_nLine = 428;
                  LoggingSystem_Log(
                    LOG_GENERAL,
                    LoggingSeverity_t::LS_ERROR,
                    s2,
                    "Path_AddToTail failed for read only CFieldPath");
                }
                goto LABEL_27;
              }
              goto LABEL_31;
            }
            goto LABEL_30;
          }
LABEL_127:
          p_m_Memory = &LOG_GENERAL;
          if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
          {
            s2[0].m_nLine = 442;
            s2[0].m_szFile = "../../public/tier2/fieldpath.h";
            s2[0].m_szFunction = "Path_SetCount";
            LoggingSystem_Log(
              LOG_GENERAL,
              LoggingSeverity_t::LS_ERROR,
              s2,
              "Path_SetCount failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)",
              6);
          }
          while ( 1 )
          {
LABEL_27:
            if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v16, v17, v14, v15) != 0 )
              loc_0 = -559038737;
            Plat_ExitProcess(1);
LABEL_30:
            v13 = v3;
LABEL_31:
            v18 = path.m_nCount;
            if ( path.m_nCount <= 5 )
              break;
            p_m_Memory = &LOG_GENERAL;
            if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
            {
              s2[0].m_szFile = "../../public/tier2/fieldpath.h";
              s2[0].m_szFunction = "Path_AddToTail";
              s2[0].m_nLine = 425;
              LoggingSystem_Log(
                LOG_GENERAL,
                LoggingSeverity_t::LS_ERROR,
                s2,
                "Path_AddToTail failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)",
                6);
            }
          }
          v2 = this->m_CompendiumChallengeInfo.m_pOwnerEntity.m_pObj;
          ++path.m_nCount;
          path.u.m_FixedPaths[v18].m_nValue = v13;
          if ( v2 != 0 )
            *&p_m_Memory->m_Memory.m_Data[16] = EntityInstanceAddChangeAccessorPath(v2, &path);
          else
            *&p_m_Memory->m_Memory.m_Data[16] = -1;
          v19 = this->m_CompendiumChallengeInfo.m_pOwnerEntity.m_pObj;
          if ( v19 != *&p_m_Memory->m_Memory.m_Data[8] )
            *&p_m_Memory->m_Memory.m_Data[8] = v19;
        }
        ++v3;
        p_m_Memory = (p_m_Memory + 80);
      }
      while ( v3 < this->m_CompendiumChallengeInfo.m_Vector.m_Size );
    }
    m_pArraySizeChangedDelegate = this->m_CompendiumChallengeInfo.m_pArraySizeChangedDelegate;
    if ( m_pArraySizeChangedDelegate != 0 )
    {
      pfn = m_pArraySizeChangedDelegate->m_Closure.m_pFunction.__pfn;
      v22 = (m_pArraySizeChangedDelegate->m_Closure.m_pthis + m_pArraySizeChangedDelegate->m_Closure.m_pFunction.__delta);
      if ( (pfn & 1) != 0 )
        pfn = *(pfn + *v22 - 1);
      pfn(v22);
    }
  }
  v44 = 0;
  v43 = &this->m_CompendiumChallengeInfo.m_Vector.m_Memory.m_Memory.m_Data[16];
  do
  {
    v46 = 5;
    v47 = v43;
    v48 = v43 + 4;
    v51 = (v43 + 16);
    v54 = v43 + 20;
    v49 = v43 + 24;
    v23 = v43 - 8;
    v45 = v43;
    v52 = v43 + 12;
    v56 = v43 + 8;
    v24 = this + 4 * v44;
    desta = this + v44;
    do
    {
      LODWORD(s2[0].m_szFile) = -1;
      v25 = v44 + 5 - v46;
      if ( memcmp(v24 + 780, s2, 4u) != 0 )
      {
        (*(this->_vptr_IHandleEntity + 22))(this, 780, v25, 0xFFFFFFFFLL);
        this->m_CompendiumChallengeEventID.m_Value[v25] = s2[0].m_szFile;
      }
      LODWORD(s2[0].m_szFile) = -1;
      if ( memcmp(v24 + 876, s2, 4u) != 0 )
      {
        (*(this->_vptr_IHandleEntity + 22))(this, 876, v25, 0xFFFFFFFFLL);
        this->m_CompendiumChallengeSequenceID.m_Value[v25] = s2[0].m_szFile;
      }
      LODWORD(s2[0].m_szFile) = -1;
      if ( memcmp(v24 + 972, s2, 4u) != 0 )
      {
        (*(this->_vptr_IHandleEntity + 22))(this, 972, v25, 0xFFFFFFFFLL);
        this->m_CompendiumChallengeCoinReward.m_Value[v25] = s2[0].m_szFile;
      }
      LODWORD(s2[0].m_szFile) = -1;
      if ( memcmp(v24 + 1068, s2, 4u) != 0 )
      {
        (*(this->_vptr_IHandleEntity + 22))(this, 1068, v25, 0xFFFFFFFFLL);
        this->m_CompendiumChallengeCoinSplash.m_Value[v25] = s2[0].m_szFile;
      }
      LODWORD(s2[0].m_szFile) = -1;
      if ( memcmp(v24 + 1164, s2, 4u) != 0 )
      {
        (*(this->_vptr_IHandleEntity + 22))(this, 1164, v25, 0xFFFFFFFFLL);
        this->m_CompendiumChallengePointReward.m_Value[v25] = s2[0].m_szFile;
      }
      if ( *v48 != -1 )
      {
        v26 = *v23;
        if ( *v23 != 0 && (*(v26[1] + 49LL) & 4) == 0 && *v47 != 0xFFFF )
          (*(*v26 + 176LL))(v26, 20, 0xFFFFFFFFLL, *v45);
        *v48 = -1;
      }
      if ( v51->m_Size != -1 )
      {
        v27 = *v23;
        if ( *v23 != 0 && (*(v27[1] + 49LL) & 4) == 0 && *v47 != 0xFFFF )
          (*(*v27 + 176LL))(v27, 32, 0xFFFFFFFFLL, *v45);
        v51->m_Size = -1;
      }
      if ( *v54 != -1 )
      {
        v28 = *v23;
        if ( *v23 != 0 && (*(v28[1] + 49LL) & 4) == 0 && *v47 != 0xFFFF )
          (*(*v28 + 176LL))(v28, 36, 0xFFFFFFFFLL, *v45);
        *v54 = -1;
      }
      if ( *v49 != -1 )
      {
        v29 = *v23;
        if ( *v23 != 0 && (*(v29[1] + 49LL) & 4) == 0 && *v47 != 0xFFFF )
          (*(*v29 + 176LL))(v29, 40, 0xFFFFFFFFLL, *v45);
        *v49 = -1;
      }
      if ( *v56 != -1 )
      {
        v30 = *v23;
        if ( *v23 != 0 && (*(v30[1] + 49LL) & 4) == 0 && *v47 != 0xFFFF )
          (*(*v30 + 176LL))(v30, 24, 0xFFFFFFFFLL, *v45);
        *v56 = -1;
      }
      if ( *v52 != -1 )
      {
        v31 = *v23;
        if ( *v23 != 0 && (*(v31[1] + 49LL) & 4) == 0 && *v47 != 0xFFFF )
          (*(*v31 + 176LL))(v31, 28, 0xFFFFFFFFLL, *v45);
        *v52 = -1;
      }
      if ( desta[1260] != 0 )
      {
        (*(this->_vptr_IHandleEntity + 22))(this, 1260, v25, 0xFFFFFFFFLL);
        this->m_CompendiumChallengeCompleted.m_Value[v25] = 0;
      }
      if ( desta[1284] != 0 )
      {
        (*(this->_vptr_IHandleEntity + 22))(this, 1284, v25, 0xFFFFFFFFLL);
        this->m_CompendiumChallengeFailed.m_Value[v25] = 0;
      }
      LODWORD(s2[0].m_szFile) = -1;
      if ( memcmp(v24 + 1308, s2, 4u) != 0 )
      {
        (*(this->_vptr_IHandleEntity + 22))(this, 1308, v25, 0xFFFFFFFFLL);
        this->m_CompendiumChallengeProgress.m_Value[v25] = s2[0].m_szFile;
      }
      LODWORD(s2[0].m_szFile) = 0;
      if ( memcmp(v24 + 4780, s2, 4u) != 0 )
      {
        (*(this->_vptr_IHandleEntity + 22))(this, 4780, v25, 0xFFFFFFFFLL);
        this->m_CompendiumCoinWager.m_Value[v25] = s2[0].m_szFile;
      }
      LODWORD(s2[0].m_szFile) = 0;
      if ( memcmp(v24 + 4820, s2, 4u) != 0 )
      {
        (*(this->_vptr_IHandleEntity + 22))(this, 4820, v25, 0xFFFFFFFFLL);
        this->m_CompendiumCoinWagerResults.m_Value[v25] = s2[0].m_szFile;
      }
      ++desta;
      v24 += 4;
      v23 += 80;
      v52 += 20;
      v45 += 80;
      v47 += 80;
      v56 += 20;
      v49 += 20;
      v54 += 20;
      v51 = (v51 + 80);
      v48 += 20;
      --v46;
    }
    while ( v46 != 0 );
    v44 += 5;
    v43 += 400;
  }
  while ( v44 != 10 );
  v32 = this;
  p_m_CompendiumTippedPlayers = &this->m_CompendiumTippedPlayers;
  do
  {
    v32->m_bHasTipped[0] = 0;
    LODWORD(s2[0].m_szFile) = -1;
    v34 = v32 - this;
    if ( memcmp(p_m_CompendiumTippedPlayers, s2, 4u) != 0 )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 4860, v34, 0xFFFFFFFFLL);
      p_m_CompendiumTippedPlayers->m_Value[0] = s2[0].m_szFile;
    }
    Player = CDOTA_PlayerResource::GetPlayer(g_pDOTAPlayerResource, v34);
    if ( Player != 0 )
      CDOTA_RealtimeCombatAnalyzer::RemoveQueriesForPlayer(&g_DOTARealtimeCombatAnalyzer, Player);
    v32 = (v32 + 1);
    p_m_CompendiumTippedPlayers = (p_m_CompendiumTippedPlayers + 4);
  }
  while ( v32 != (&this->m_pEntity + 2) );
  s2[0].m_szFile = this;
  s2[0].m_szFunction = 0;
  *&s2[0].m_nLine = CIngameEvent_WM2016::ClientMsg_SetPlayerCoinWager;
  CClientMessageDelegateHook<CDOTAClientMsg_CoinWager_t>::SetDelegate(&this->m_CDOTAClientMsg_CoinWager_tHook, s2);
  this->m_ClientMessageContainer.m_bReleased = 0;
  s2[0].m_szFile = &this->m_CDOTAClientMsg_CoinWager_tHook;
  if ( CUtlVectorBase<IClientMessageDelegateHook *,CUtlMemory<IClientMessageDelegateHook *,int>>::Find(
         &this->m_ClientMessageContainer,
         s2) == -1 )
  {
    m_Size = this->m_ClientMessageContainer.m_Size;
    v41 = this->m_ClientMessageContainer.m_Size;
    if ( m_Size == this->m_ClientMessageContainer.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<IClientMessageDelegateHook *,int>::Grow(&this->m_ClientMessageContainer.m_Memory, 1);
      v41 = this->m_ClientMessageContainer.m_Size;
    }
    this->m_ClientMessageContainer.m_Size = v41 + 1;
    v42 = &this->m_ClientMessageContainer.m_Memory.m_pMemory[m_Size];
    if ( v42 != 0 )
      *v42 = &this->m_CDOTAClientMsg_CoinWager_tHook;
  }
  v36 = !this->m_CDOTAClientMsg_EventPointsTip_tHook.m_bInitialized;
  v61 = 0;
  src[1] = CIngameEvent_WM2016::ClientMsg_DoEventPointsTip;
  this->m_CDOTAClientMsg_EventPointsTip_tHook.m_bDestructionAllowed = 0;
  if ( v36 )
  {
    s2[0].m_szFile = &this->m_CDOTAClientMsg_EventPointsTip_tHook;
    *&s2[0].m_nLine = CClientMessageDelegateHook<CDOTAClientMsg_EventPointsTip_t>::Dispatch;
    this->m_CDOTAClientMsg_EventPointsTip_tHook.m_bInitialized = 1;
    s2[0].m_szFunction = 0;
    (*(*g_pGameEventSystem + 96LL))(
      g_pGameEventSystem,
      &this->m_CDOTAClientMsg_EventPointsTip_tHook.CUtlSlot,
      s2,
      IGameEventSystem::FindOrCreateGameEvent<CDOTAClientMsg_EventPointsTip_t>(bool)::s_hEvent,
      0);
    this->m_CDOTAClientMsg_EventPointsTip_tHook.m_delegate.m_Closure.m_pFunction.__delta = 0;
    this->m_CDOTAClientMsg_EventPointsTip_tHook.m_delegate.m_Closure.m_pFunction.__pfn = CIngameEvent_WM2016::ClientMsg_DoEventPointsTip;
    this->m_CDOTAClientMsg_EventPointsTip_tHook.m_delegate.m_Closure.m_pthis = this;
  }
  else if ( LoggingSystem_IsChannelEnabled(LOG_SERVER, 2) != 0 )
  {
    LoggingSystem_Log(LOG_SERVER, 2, "CClientMessageDelegateHook::Registered twice (no intervening Release)\n");
  }
  this->m_ClientMessageContainer.m_bReleased = 0;
  s2[0].m_szFile = &this->m_CDOTAClientMsg_EventPointsTip_tHook;
  if ( CUtlVectorBase<IClientMessageDelegateHook *,CUtlMemory<IClientMessageDelegateHook *,int>>::Find(
         &this->m_ClientMessageContainer,
         s2) == -1 )
  {
    v37 = this->m_ClientMessageContainer.m_Size;
    v38 = this->m_ClientMessageContainer.m_Size;
    if ( v37 == this->m_ClientMessageContainer.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<IClientMessageDelegateHook *,int>::Grow(&this->m_ClientMessageContainer.m_Memory, 1);
      v38 = this->m_ClientMessageContainer.m_Size;
    }
    this->m_ClientMessageContainer.m_Size = v38 + 1;
    v39 = &this->m_ClientMessageContainer.m_Memory.m_pMemory[v37];
    if ( v39 != 0 )
      *v39 = &this->m_CDOTAClientMsg_EventPointsTip_tHook;
  }
}


// CIngameEvent_WM2016::UpdateOnRemove  (line 730, @0x0000000002596220, libserver.so)  // inlines: Purge, RemoveAll, SetReleased
// calls: CUtlMemory<IClientMessageDelegateHook*, int>::Purge, CBaseEntity::UpdateOnRemove
void __fastcall CIngameEvent_WM2016::UpdateOnRemove(CIngameEvent_WM2016 *const this)
{
  int v1; // r13d
  __int64 v3; // rbx
  IClientMessageDelegateHook *v4; // rdi
  bool v5; // zf

  v1 = 0;
  v3 = 0;
  while ( this->m_ClientMessageContainer.m_Size > v1 )
  {
    ++v1;
    (*(this->m_ClientMessageContainer.m_Memory.m_pMemory[v3]->_vptr_IClientMessageDelegateHook + 1))(this->m_ClientMessageContainer.m_Memory.m_pMemory[v3]);
    v4 = this->m_ClientMessageContainer.m_Memory.m_pMemory[v3++];
    (*v4->_vptr_IClientMessageDelegateHook)(v4);
  }
  v5 = (this->m_ClientMessageContainer.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_ClientMessageContainer.m_Size = 0;
  if ( v5 )
    CUtlMemory<IClientMessageDelegateHook *,int>::Purge(&this->m_ClientMessageContainer.m_Memory);
  this->m_ClientMessageContainer.m_bReleased = 1;
  CBaseEntity::UpdateOnRemove(this);
}


// CIngameEvent_WM2016::DoEndGameCoinWagerCalculations  (line 744, @0x00000000025a8650, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, GetArrayIndexForPlayerID, GetGameWinner, NetworkStateChanged, Set, end, ~CUtlVector
// calls: CDOTAEventSchema::Get, CDOTAEventSchema::GetEventDefinition, CDOTA_PlayerResource::GetAllPlayerIDs, CDOTA_PlayerResource::GetTeam, memcmp, CDOTA_PlayerResource::GetSteamAccountID, CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CIngameEvent_WM2016::AddResultToSignout
void __fastcall CIngameEvent_WM2016::DoEndGameCoinWagerCalculations(CIngameEvent_WM2016 *const this)
{
  EEvent v2; // ebx
  CDOTAEventSchema *v3; // rax
  int *m_pMemory; // rbx
  unsigned int v5; // r12d
  const CDOTAEventDefinition *pEvent; // [rsp+8h] [rbp-88h]
  int *__for_end; // [rsp+28h] [rbp-68h]
  int nWinnings; // [rsp+3Ch] [rbp-54h] BYREF
  CUtlVector<int,CUtlMemory<int,int> > vecPlayerIDs; // [rsp+40h] [rbp-50h] BYREF

  v2 = (*(this->_vptr_IHandleEntity + 207))(this);
  v3 = CDOTAEventSchema::Get();
  pEvent = CDOTAEventSchema::GetEventDefinition(v3, v2);
  if ( pEvent != 0 )
  {
    vecPlayerIDs.m_Size = 0;
    vecPlayerIDs.m_Memory.m_pMemory = 0;
    vecPlayerIDs.m_Memory.m_nAllocationCount = 0;
    vecPlayerIDs.m_Memory.m_nGrowSize = 0;
    CDOTA_PlayerResource::GetAllPlayerIDs(g_pDOTAPlayerResource, &vecPlayerIDs);
    m_pMemory = vecPlayerIDs.m_Memory.m_pMemory;
    __for_end = &vecPlayerIDs.m_Memory.m_pMemory[vecPlayerIDs.m_Size];
    if ( vecPlayerIDs.m_Memory.m_pMemory != __for_end )
    {
      do
      {
        v5 = *m_pMemory;
        if ( CDOTA_PlayerResource::GetSteamAccountID(g_pDOTAPlayerResource, *m_pMemory) != 0 )
        {
          if ( v5 > 9 )
            break;
          nWinnings = 0;
          if ( CDOTA_PlayerResource::GetTeam(g_pDOTAPlayerResource, v5) == *&g_pGameRules[16].m_szQuestName[80] )
            nWinnings = (this->m_CompendiumCoinWager.m_Value[v5] * *(pEvent + 107));
          if ( memcmp(&this->m_CompendiumCoinWagerResults.m_Value[v5], &nWinnings, 4u) != 0 )
          {
            (*(this->_vptr_IHandleEntity + 22))(this, 4820, v5, 0xFFFFFFFFLL);
            this->m_CompendiumCoinWagerResults.m_Value[v5] = nWinnings;
          }
        }
        ++m_pMemory;
      }
      while ( __for_end != m_pMemory );
    }
    CUtlVectorBase<int,CUtlMemory<int,int>>::~CUtlVectorBase(&vecPlayerIDs);
  }
}


// CIngameEvent_WM2016::AddResultToSignout  (line 779, @0x00000000025c3650, libserver.so)  // inlines: Add, Add<google::protobuf::RepeatedPtrField<CMsgGameMatchSignOut_CAdditionalSignoutMsg>::TypeHandler>, Add<google::protobuf::RepeatedPtrField<CMsgSignOutXPCoins_Player>::TypeHandler>, CDOTAUserMsg_UpdateQuestProgress_t, CNetMessagePB, CUserMessagePB, CUtlMemory, CUtlVector, CUtlVectorBase, FindGameEvent<CDOTAUserMsg_UpdateQuestProgress_t>, FindOrCreateGameEvent<CDOTAUserMsg_UpdateQuestProgress_t>, GetArrayIndexForPlayerID, GetGameWinner, New, PostEvent<CDOTAUserMsg_UpdateQuestProgress_t>, SendUserMessage<CDOTAUserMsg_UpdateQuestProgress_t>, add_additional_msgs, add_players, end, set_account_id, set_coins_spent, set_contents, set_event_id, set_has_account_id, set_has_coins_spent, set_has_contents, set_has_event_id, set_has_id, set_has_timestamp, set_has_xp_gained, set_id, set_match_id, set_timestamp, set_xp_gained, ~CDOTAUserMsg_UpdateQuestProgress_t, ~CNetMessagePB, ~CTeamRecipientFilter, ~CUserMessagePB, ~CUtlVector, ~basic_string
// calls: CIngameEvent_WM2016::DoEndGameCoinWagerCalculations, CTeamRecipientFilter::CTeamRecipientFilter, CDOTAUserMsg_UpdateQuestProgress::CDOTAUserMsg_UpdateQuestProgress, CMsgSignOutXPCoins::CMsgSignOutXPCoins, CDOTA_PlayerResource::GetAllPlayerIDs, CDOTA_PlayerResource::GetSteamAccountID, CDOTA_PlayerResource::GetTeam, operator new, CMsgSignOutXPCoins_Player::CMsgSignOutXPCoins_Player, CMsgGameMatchSignOut_CAdditionalSignoutMsg::CMsgGameMatchSignOut_CAdditionalSignoutMsg, google::protobuf::MessageLite::SerializeAsString(void), std::string::assign(std::string const&) (21 total)
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_UpdateQuestProgress_t>(bool)::s_hEvent
void __fastcall CIngameEvent_WM2016::AddResultToSignout(
        CIngameEvent_WM2016 *const this,
        const CDOTALobby *pLobby,
        GCSDK::CProtoBufMsg<CMsgGameMatchSignOut> *pMsgSignOut)
{
  __int64 v5; // r13
  IGameEventSystem *v6; // r12
  void (__fastcall *v7)(IGameEventSystem *, _QWORD, _QWORD, CTeamRecipientFilter *, __int64, _QWORD *, __int64); // r14
  __int64 v8; // rax
  int *m_pMemory; // rbx
  int *v10; // r15
  __int64 v11; // r12
  AccountID_t SteamAccountID; // r13d
  char *v13; // r12
  __int64 current_size; // rax
  __int64 v15; // rax
  CMsgSignOutXPCoins_Player *v16; // rax
  int v17; // edx
  int v18; // ecx
  int v19; // ecx
  CMsgGameMatchSignOut *m_pProtoBufBody; // rbx
  __int64 v21; // rax
  int v22; // edx
  CMsgGameMatchSignOut_CAdditionalSignoutMsg *v23; // r12
  __int64 v24; // rax
  __int64 v25; // rdx
  CMsgGameMatchSignOut_CAdditionalSignoutMsg *v26; // rbx
  __int64 v27; // rdx
  CMsgSignOutXPCoins_Player *pMem; // [rsp+18h] [rbp-248h]
  char v31; // [rsp+5Fh] [rbp-201h] BYREF
  std::string v32; // [rsp+60h] [rbp-200h] BYREF
  _QWORD v33[4]; // [rsp+70h] [rbp-1F0h] BYREF
  CUtlVector<int,CUtlMemory<int,int> > vecPlayerIDs; // [rsp+90h] [rbp-1D0h] BYREF
  _BYTE v35[16]; // [rsp+B0h] [rbp-1B0h] BYREF
  int v36; // [rsp+C0h] [rbp-1A0h]
  google::protobuf::internal::RepeatedPtrFieldBase v37; // [rsp+C8h] [rbp-198h] BYREF
  __int64 v38; // [rsp+E0h] [rbp-180h]
  int v39; // [rsp+E8h] [rbp-178h]
  int v40; // [rsp+ECh] [rbp-174h]
  CTeamRecipientFilter filter; // [rsp+F0h] [rbp-170h] BYREF
  unsigned __int64 v42; // [rsp+228h] [rbp-38h]

  v42 = __readfsqword(0x28u);
  CIngameEvent_WM2016::DoEndGameCoinWagerCalculations(this);
  CTeamRecipientFilter::CTeamRecipientFilter(&filter, *&g_pGameRules[16].m_szQuestName[80], 0);
  CDOTAUserMsg_UpdateQuestProgress::CDOTAUserMsg_UpdateQuestProgress(v33);
  v33[0] = off_4100930;
  v5 = IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_UpdateQuestProgress_t>(bool)::s_hEvent;
  v6 = g_pGameEventSystem;
  v7 = *(*g_pGameEventSystem + 128LL);
  (*(*g_pNetworkMessages + 96LL))(
    g_pNetworkMessages,
    IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_UpdateQuestProgress_t>(bool)::s_hEvent);
  v7(v6, 0, 0, &filter, v5, v33, 24);
  CMsgSignOutXPCoins::CMsgSignOutXPCoins(v35);
  v39 = (*(this->_vptr_IHandleEntity + 207))(this);
  v8 = *(pLobby + 27);
  vecPlayerIDs.m_Size = 0;
  vecPlayerIDs.m_Memory.m_pMemory = 0;
  vecPlayerIDs.m_Memory.m_nAllocationCount = 0;
  v38 = v8;
  LODWORD(v8) = *(pLobby + 125);
  vecPlayerIDs.m_Memory.m_nGrowSize = 0;
  v36 |= 0xEu;
  v40 = v8;
  CDOTA_PlayerResource::GetAllPlayerIDs(g_pDOTAPlayerResource, &vecPlayerIDs);
  m_pMemory = vecPlayerIDs.m_Memory.m_pMemory;
  v10 = &vecPlayerIDs.m_Memory.m_pMemory[vecPlayerIDs.m_Size];
  if ( vecPlayerIDs.m_Memory.m_pMemory != v10 )
  {
    do
    {
      while ( 1 )
      {
        v11 = *m_pMemory;
        SteamAccountID = CDOTA_PlayerResource::GetSteamAccountID(g_pDOTAPlayerResource, *m_pMemory);
        if ( SteamAccountID != 0
          && (CDOTA_PlayerResource::GetTeam(g_pDOTAPlayerResource, v11) == 2
           || CDOTA_PlayerResource::GetTeam(g_pDOTAPlayerResource, v11) == 3)
          && v11 <= 9 )
        {
          v13 = this + 4 * v11;
          if ( *(v13 + 1195) != 0 || *(v13 + 1205) != 0 )
            break;
        }
        if ( v10 == ++m_pMemory )
          goto LABEL_15;
      }
      current_size = v37.current_size_;
      if ( v37.current_size_ < v37.allocated_size_ )
      {
        ++v37.current_size_;
        v16 = v37.elements_[current_size];
      }
      else
      {
        if ( v37.allocated_size_ == v37.total_size_ )
          google::protobuf::internal::RepeatedPtrFieldBase::Reserve(&v37, v37.allocated_size_ + 1);
        pMem = operator new(0x28u);
        CMsgSignOutXPCoins_Player::CMsgSignOutXPCoins_Player(pMem);
        v15 = v37.current_size_;
        ++v37.allocated_size_;
        ++v37.current_size_;
        v37.elements_[v15] = pMem;
        v16 = pMem;
      }
      v17 = *(v16 + 4);
      *(v16 + 6) = SteamAccountID;
      ++m_pMemory;
      *(v16 + 4) = v17 | 1;
      v18 = *(v13 + 1195);
      *(v16 + 4) = v17 | 5;
      *(v16 + 8) = v18;
      v19 = *(v13 + 1205);
      *(v16 + 4) = v17 | 7;
      *(v16 + 7) = v19;
    }
    while ( v10 != m_pMemory );
  }
LABEL_15:
  m_pProtoBufBody = pMsgSignOut->m_pProtoBufBody;
  v21 = *(m_pProtoBufBody + 58);
  v22 = *(m_pProtoBufBody + 59);
  if ( v21 < v22 )
  {
    v27 = *(m_pProtoBufBody + 28);
    *(m_pProtoBufBody + 58) = v21 + 1;
    v26 = *(v27 + 8 * v21);
  }
  else
  {
    if ( v22 == *(m_pProtoBufBody + 60) )
      google::protobuf::internal::RepeatedPtrFieldBase::Reserve((m_pProtoBufBody + 224), v22 + 1);
    v23 = operator new(0x28u);
    CMsgGameMatchSignOut_CAdditionalSignoutMsg::CMsgGameMatchSignOut_CAdditionalSignoutMsg(v23);
    v24 = *(m_pProtoBufBody + 58);
    v25 = *(m_pProtoBufBody + 28);
    ++*(m_pProtoBufBody + 59);
    *(m_pProtoBufBody + 58) = v24 + 1;
    v26 = v23;
    *(v25 + 8 * v24) = v23;
  }
  *(v26 + 8) = 8080;
  *(v26 + 4) |= 1u;
  google::protobuf::MessageLite::SerializeAsString(&v32);
  *(v26 + 4) |= 2u;
  std::string::assign(*(v26 + 3), &v32);
  std::string::_Rep::_M_dispose(v32._M_dataplus._M_p - 24, &v31);
  CUtlVectorBase<int,CUtlMemory<int,int>>::~CUtlVectorBase(&vecPlayerIDs);
  CMsgSignOutXPCoins::~CMsgSignOutXPCoins(v35);
  v33[0] = &off_41007B0;
  CDOTAUserMsg_UpdateQuestProgress::~CDOTAUserMsg_UpdateQuestProgress(v33);
  filter._vptr_IRecipientFilter = &off_3FF4590;
  CRecipientFilter::~CRecipientFilter(&filter);
}


// CIngameEvent_WM2016::OnPreGameStarted  (line 828, @0x0000000002597d80, libserver.so)  // inlines: GetGameTime, NetworkStateChanged, Set, curtime, operator=<float>, operator=<unsigned int>
// calls: CDOTAEventSchema::Get, CDOTAEventSchema::GetEventDefinition, CBaseEntity::ThinkSet
// globals: CIngameEvent_WM2016::PreWagerTimeThink(void)
void __fastcall CIngameEvent_WM2016::OnPreGameStarted(CIngameEvent_WM2016 *const this)
{
  EEvent v2; // r12d
  CDOTAEventSchema *v3; // rax
  const CDOTAEventDefinition *EventDefinition; // rax
  int v5; // edx
  float v6; // xmm0_4
  float v7; // xmm0_4
  CGlobalVars *v8; // r12
  float v9; // xmm0_4
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  float v11; // [rsp+4h] [rbp-1Ch]
  float pEventa; // [rsp+8h] [rbp-18h]
  const CDOTAEventDefinition *pEvent; // [rsp+8h] [rbp-18h]

  v2 = (*(this->_vptr_IHandleEntity + 207))(this);
  v3 = CDOTAEventSchema::Get();
  EventDefinition = CDOTAEventSchema::GetEventDefinition(v3, v2);
  if ( EventDefinition != 0 )
  {
    v5 = *(EventDefinition + 100);
    v6 = v5;
    if ( v5 != this->m_flWagerTimer.m_Value )
    {
      v11 = v5;
      pEvent = EventDefinition;
      (*(this->_vptr_IHandleEntity + 22))(this, 4900, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_flWagerTimer.m_Value = v11;
      v6 = *(pEvent + 100);
    }
    v7 = v6 + *&g_pGameRules[18].m_szQuestName[20];
    if ( v7 != this->m_flWagerEndTime.m_Value )
    {
      pEventa = v7;
      (*(this->_vptr_IHandleEntity + 22))(this, 4904, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_flWagerEndTime.m_Value = pEventa;
    }
    v8 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
          m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
      }
      v9 = v8->m_flCurrentTime + 0.1;
    }
    else
    {
      v9 = 0.1;
    }
    CBaseEntity::ThinkSet(this, CIngameEvent_WM2016::PreWagerTimeThink, v9, -1923047727, 0);
  }
}


// CIngameEvent_WM2016::PreWagerTimeThink  (line 845, @0x00000000025bf0d0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, GetGameTime, NetworkStateChanged, Purge, RemoveAll, Set, operator=<float>, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CGlobalVarsBase::curtime, CBaseEntity::ThinkSet, CDOTA_PlayerResource::GetAllPlayerIDs, CDOTA_PlayerResource::IsFakeClient, CIngameEvent_Base::GetCombatLogQueryIDsForPlayer, Msg, CDOTA_PlayerResource::GetPlayer, GDOTAChallengeSystem, CDOTAChallengeSystem::AttemptToGenerateChallengeQueryForPlayer, CIngameEvent_WM2016::GenerateWeeklyAndDailyChallenges, CUtlMemory<int, int>::Purge, CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase (13 total)
// strings: "Wager Timer Expired - Generate Quest for Player %d\n"
// globals: CIngameEvent_WM2016::PreWagerTimeThink(void)
void __fastcall CIngameEvent_WM2016::PreWagerTimeThink(CIngameEvent_WM2016 *const this)
{
  float m_Value; // xmm1_4
  float v3; // xmm0_4
  __int64 v4; // r12
  int v5; // ebx
  int v6; // r13d
  CDOTAChallengeSystem *v7; // rax
  CDOTAPlayer *pPlayer; // [rsp+10h] [rbp-80h]
  float pIDs; // [rsp+18h] [rbp-78h]
  CUtlVector<int,CUtlMemory<int,int> > vecPlayerIDs; // [rsp+20h] [rbp-70h] BYREF
  CUtlVector<int,CUtlMemory<int,int> > vecQueryIDs; // [rsp+40h] [rbp-50h] BYREF

  m_Value = this->m_flWagerTimer.m_Value;
  if ( (this->m_flWagerEndTime.m_Value - *&g_pGameRules[18].m_szQuestName[20]) != m_Value )
  {
    pIDs = this->m_flWagerEndTime.m_Value - *&g_pGameRules[18].m_szQuestName[20];
    (*(this->_vptr_IHandleEntity + 22))(this, 4900, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_flWagerTimer.m_Value = pIDs;
    m_Value = pIDs;
  }
  if ( m_Value <= 0.0 )
  {
    vecPlayerIDs.m_Size = 0;
    vecPlayerIDs.m_Memory.m_pMemory = 0;
    vecPlayerIDs.m_Memory.m_nAllocationCount = 0;
    vecPlayerIDs.m_Memory.m_nGrowSize = 0;
    CDOTA_PlayerResource::GetAllPlayerIDs(g_pDOTAPlayerResource, &vecPlayerIDs);
    if ( vecPlayerIDs.m_Size > 0 )
    {
      v4 = 0;
      v5 = 0;
      do
      {
        while ( 1 )
        {
          v6 = vecPlayerIDs.m_Memory.m_pMemory[v4];
          if ( !CDOTA_PlayerResource::IsFakeClient(g_pDOTAPlayerResource, v6) )
          {
            vecQueryIDs.m_Size = 0;
            vecQueryIDs.m_Memory.m_pMemory = 0;
            vecQueryIDs.m_Memory.m_nAllocationCount = 0;
            vecQueryIDs.m_Memory.m_nGrowSize = 0;
            CIngameEvent_Base::GetCombatLogQueryIDsForPlayer(this, v6, &vecQueryIDs);
            if ( vecQueryIDs.m_Size == 0 )
            {
              Msg("Wager Timer Expired - Generate Quest for Player %d\n", v6);
              pPlayer = CDOTA_PlayerResource::GetPlayer(g_pDOTAPlayerResource, v6);
              v7 = GDOTAChallengeSystem();
              CDOTAChallengeSystem::AttemptToGenerateChallengeQueryForPlayer(v7, pPlayer, 0, 1);
              CIngameEvent_WM2016::GenerateWeeklyAndDailyChallenges(this, v6);
            }
            vecQueryIDs.m_Size = 0;
            if ( (vecQueryIDs.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
            {
              CUtlMemory<int,int>::Purge(&vecQueryIDs.m_Memory);
              if ( (vecQueryIDs.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
                break;
            }
          }
          ++v5;
          ++v4;
          if ( vecPlayerIDs.m_Size <= v5 )
            goto LABEL_14;
        }
        ++v5;
        ++v4;
        CUtlMemory<int,int>::Purge(&vecQueryIDs.m_Memory);
      }
      while ( vecPlayerIDs.m_Size > v5 );
    }
LABEL_14:
    CUtlVectorBase<int,CUtlMemory<int,int>>::~CUtlVectorBase(&vecPlayerIDs);
  }
  else
  {
    v3 = CGlobalVarsBase::curtime(gpGlobals, 0);
    CBaseEntity::ThinkSet(this, CIngameEvent_WM2016::PreWagerTimeThink, v3 + 0.1, -1151109104, 0);
  }
}


// CIngameEvent_WM2016::ClientMsg_SetPlayerCoinWager  (line 882, @0x00000000025a0b90, libserver.so)  // inlines: GetArrayIndexForPlayerID, GetInstance, GetPlayerWagerTokensRemaining, IndexToIdentity, Instance, IsUsed, LookupEntityByIndex, LookupEntityByNetworkIndex, NetworkStateChanged, Set
// calls: CIngameEvent_WM2016::GetWagerSizeAmount, CDOTA_PlayerResource::GetEventWagerTokensRemaining, memcmp
bool __fastcall CIngameEvent_WM2016::ClientMsg_SetPlayerCoinWager(
        CIngameEvent_WM2016 *const this,
        CEntityIndex nEntityIndex,
        const CDOTAClientMsg_CoinWager_t *const msg)
{
  CEntityIdentity *v3; // rcx
  CEntityIdentity *v5; // rax
  CEntityInstance *m_pInstance; // rbx
  int v7; // r13d
  int v8; // eax
  int WagerSizeAmount; // r13d
  int v10; // eax
  signed int EventWagerTokensRemaining; // eax
  int (**vptr_IHandleEntity)(...); // rax
  unsigned int v13; // eax
  unsigned int v14; // ebx
  char *v15; // r14
  int v17; // [rsp-8h] [rbp-2Ch] BYREF

  if ( nEntityIndex.m_Data > 0x7FFE )
    return 1;
  v3 = g_pGameEntitySystem->m_EntityList.m_pIdentityChunks[nEntityIndex.m_Data >> 9];
  if ( v3 == 0 )
    return 1;
  v5 = &v3[nEntityIndex.m_Data & 0x1FF];
  if ( v5 != 0 && nEntityIndex.m_Data == (v5->m_EHandle.m_Index & 0x7FFF) )
  {
    m_pInstance = v5->m_pInstance;
    if ( v5->m_pInstance != 0 && this->m_flWagerTimer.m_Value >= 0.0 )
    {
      v7 = *(msg + 6);
      v8 = (*(m_pInstance->_vptr_IHandleEntity + 393))(m_pInstance);
      WagerSizeAmount = CIngameEvent_WM2016::GetWagerSizeAmount(this, v8, v7);
      v10 = (*(m_pInstance->_vptr_IHandleEntity + 393))(m_pInstance);
      EventWagerTokensRemaining = CDOTA_PlayerResource::GetEventWagerTokensRemaining(g_pDOTAPlayerResource, v10);
      if ( EventWagerTokensRemaining <= WagerSizeAmount )
        WagerSizeAmount = EventWagerTokensRemaining;
      vptr_IHandleEntity = m_pInstance->_vptr_IHandleEntity;
      v17 = WagerSizeAmount;
      v13 = vptr_IHandleEntity[393](m_pInstance);
      v14 = v13;
      if ( v13 <= 9 )
      {
        v15 = this + 4 * v13;
        if ( WagerSizeAmount < *(v15 + 1195) )
          WagerSizeAmount = *(v15 + 1195);
        v17 = WagerSizeAmount;
        if ( memcmp(v15 + 4780, &v17, 4u) != 0 )
        {
          (*(this->_vptr_IHandleEntity + 22))(this, 4780, v14, 0xFFFFFFFFLL);
          *(v15 + 1195) = WagerSizeAmount;
        }
      }
    }
  }
  return 1;
}


// CIngameEvent_WM2016::ClientMsg_DoEventPointsTip  (line 913, @0x00000000025c3dc0, libserver.so)  // inlines: GetInstance, IndexToIdentity, Instance, IsUsed, LookupEntityByIndex, LookupEntityByNetworkIndex
// calls: CDOTA_PlayerResource::IsEventOwnedForPlayerID, CIngameEvent_WM2016::GiveTip
bool __fastcall CIngameEvent_WM2016::ClientMsg_DoEventPointsTip(
        CIngameEvent_WM2016 *const this,
        CEntityIndex nEntityIndex,
        const CDOTAClientMsg_EventPointsTip_t *const msg)
{
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rax
  CEntityInstance *m_pInstance; // rbx
  int v8; // eax
  int v9; // r13d
  int v10; // eax

  if ( nEntityIndex.m_Data > 0x7FFE )
    return 1;
  v4 = g_pGameEntitySystem->m_EntityList.m_pIdentityChunks[nEntityIndex.m_Data >> 9];
  if ( v4 != 0 )
  {
    v5 = &v4[nEntityIndex.m_Data & 0x1FF];
    if ( v5 != 0 && nEntityIndex.m_Data == (v5->m_EHandle.m_Index & 0x7FFF) )
    {
      m_pInstance = v5->m_pInstance;
      if ( v5->m_pInstance != 0 )
      {
        v8 = (*(m_pInstance->_vptr_IHandleEntity + 393))(m_pInstance);
        if ( CDOTA_PlayerResource::IsEventOwnedForPlayerID(g_pDOTAPlayerResource, v8) )
        {
          v9 = *(msg + 6);
          v10 = (*(m_pInstance->_vptr_IHandleEntity + 393))(m_pInstance);
          CIngameEvent_WM2016::GiveTip(this, v10, v9);
        }
      }
    }
  }
  return 1;
}


// CIngameEvent_WM2016::GiveTip  (line 931, @0x00000000025c3b30, libserver.so)  // inlines: <lambda>, CEntityHandle, CGCClientJob, CHandle, GCClientJobLambda, GetArrayIndexForPlayerID, GetEHandle, GetEntryIndex, GetLobby, GetSerialNumber, Set, SetJobName, StartLambdaJob<CIngameEvent_WM2016::GiveTip(int, int)::__lambda11>, State_Get, State_IsGameOver, set_event_id, set_has_event_id, set_has_tip_amount, set_match_id, set_recipient_account_id, set_tip_amount, set_tipper_account_id, ~<lambda>, ~CGCClientJob
// calls: GDOTAGCClientSystem, CDOTAEventSchema::Get, CDOTAEventSchema::GetEventDefinition, CDOTA_PlayerResource::GetSteamAccountID, CMsgServerToGCPostMatchTip::CMsgServerToGCPostMatchTip, GCSDK::CGCClient::Get, operator new, GCSDK::CJob::CJob, GCSDK::CJob::StartJob, CMsgServerToGCPostMatchTip::~CMsgServerToGCPostMatchTip, _Unwind_Resume, GCSDK::CJob::~CJob (13 total)
// callers: CIngameEvent_WM2016::ClientMsg_DoEventPointsTip
// strings: "CIngameEvent_WM2016::GiveTip"
bool __fastcall CIngameEvent_WM2016::GiveTip(
        CIngameEvent_WM2016 *const this,
        int nTipperPlayerID,
        int nRecipientPlayerID)
{
  __int64 v6; // r12
  EEvent v7; // r13d
  CDOTAEventSchema *v8; // rax
  const CDOTAEventDefinition *EventDefinition; // rax
  __int64 v10; // r13
  int v11; // r12d
  AccountID_t SteamAccountID; // r15d
  AccountID_t v14; // r14d
  CEntityIdentity *m_pEntity; // rax
  __int16 v16; // cx
  GCSDK::CGCClient *v17; // r13
  GCSDK::CJob *v18; // rbx
  __int64 nTipperPlayerIDa; // [rsp+8h] [rbp-B8h]
  int hThis; // [rsp+10h] [rbp-B0h]
  _BYTE v21[16]; // [rsp+20h] [rbp-A0h] BYREF
  int v22; // [rsp+30h] [rbp-90h]
  __int64 v23; // [rsp+38h] [rbp-88h]
  int v24; // [rsp+40h] [rbp-80h]
  AccountID_t v25; // [rsp+44h] [rbp-7Ch]
  AccountID_t v26; // [rsp+48h] [rbp-78h]
  int v27; // [rsp+4Ch] [rbp-74h]
  _BYTE v28[48]; // [rsp+50h] [rbp-70h] BYREF
  int v29; // [rsp+80h] [rbp-40h]

  v6 = *(GDOTAGCClientSystem() + 260);
  if ( v6 != 0 )
  {
    v7 = (*(this->_vptr_IHandleEntity + 207))(this);
    v8 = CDOTAEventSchema::Get();
    EventDefinition = CDOTAEventSchema::GetEventDefinition(v8, v7);
    if ( EventDefinition != 0 )
    {
      v10 = *(v6 + 216);
      v11 = *(EventDefinition + 105);
      if ( (*&g_pGameRules[6].m_szQuestName[28] - 6) <= 1
        && nTipperPlayerID <= 9
        && !this->m_bHasTipped[nTipperPlayerID] )
      {
        nTipperPlayerIDa = nTipperPlayerID;
        SteamAccountID = CDOTA_PlayerResource::GetSteamAccountID(g_pDOTAPlayerResource, nTipperPlayerID);
        v14 = CDOTA_PlayerResource::GetSteamAccountID(g_pDOTAPlayerResource, nRecipientPlayerID);
        if ( v14 != 0 && SteamAccountID != 0 )
        {
          this->m_bHasTipped[nTipperPlayerIDa] = 1;
          CMsgServerToGCPostMatchTip::CMsgServerToGCPostMatchTip(v21);
          v24 = (*(this->_vptr_IHandleEntity + 207))(this);
          m_pEntity = this->m_pEntity;
          v23 = v10;
          v25 = SteamAccountID;
          v26 = v14;
          v27 = v11;
          v22 |= 0x1Fu;
          hThis = -1;
          if ( m_pEntity != 0 )
          {
            v16 = 0x7FFF;
            if ( m_pEntity->m_EHandle.m_Index != -1 )
              v16 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
            hThis = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v16 & 0x7FFF;
          }
          CMsgServerToGCPostMatchTip::CMsgServerToGCPostMatchTip(v28, v21);
          v29 = hThis;
          v17 = GCSDK::CGCClient::Get();
          v18 = operator new(0x178u);
          GCSDK::CJob::CJob(v18, (v17 + 48));
          v18[1]._vptr_CJob = v17;
          v18->_vptr_CJob = &off_40FF050;
          *(&v18[1] + 2) = 4;
          CMsgServerToGCPostMatchTip::CMsgServerToGCPostMatchTip(&v18[1].m_JobID, v28);
          v18[1].m_unWaitMsgType = v29;
          v18->m_pchJobName = "CIngameEvent_WM2016::GiveTip";
          GCSDK::CJob::StartJob(v18, 0);
          CMsgServerToGCPostMatchTip::~CMsgServerToGCPostMatchTip(v28);
          CMsgServerToGCPostMatchTip::~CMsgServerToGCPostMatchTip(v21);
        }
      }
    }
  }
  return 1;
}


// CIngameEvent_WM2016::TipValidated  (line 1006, @0x00000000025a0510, libserver.so)  // inlines: NetworkStateChanged, Set
// calls: CDOTA_PlayerResource::GetPlayerIDByAccountID, memcmp
// callers: GCSDK::GCClientJobLambda<CIngameEvent_WM2016::GiveTip(int, int)::__lambda11>::BYieldingRunJob
void __fastcall CIngameEvent_WM2016::TipValidated(
        CIngameEvent_WM2016 *const this,
        AccountID_t unTipperAccountID,
        AccountID_t unRecipientAccountID,
        int nTipAmount)
{
  unsigned int PlayerIDByAccountID; // r12d
  int v7; // eax
  int v8; // ebx
  int nRecipientPlayerID[9]; // [rsp+Ch] [rbp-24h] BYREF

  PlayerIDByAccountID = CDOTA_PlayerResource::GetPlayerIDByAccountID(g_pDOTAPlayerResource, unTipperAccountID);
  v7 = CDOTA_PlayerResource::GetPlayerIDByAccountID(g_pDOTAPlayerResource, unRecipientAccountID);
  v8 = v7;
  nRecipientPlayerID[0] = v7;
  if ( PlayerIDByAccountID <= 9
    && v7 != -1
    && memcmp(&this->m_CompendiumTippedPlayers.m_Value[PlayerIDByAccountID], nRecipientPlayerID, 4u) != 0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 4860, PlayerIDByAccountID, 0xFFFFFFFFLL);
    this->m_CompendiumTippedPlayers.m_Value[PlayerIDByAccountID] = v8;
  }
}


// CIngameEvent_WM2016::SpoofWager  (line 1026, @0x00000000025a09f0, libserver.so)
void __fastcall CIngameEvent_WM2016::SpoofWager(CIngameEvent_WM2016 *const this, int nPlayerId, int nWagerAmount)
{
  ;
}


// CIngameEvent_WM2016::SpoofTip  (line 1037, @0x00000000025a0a00, libserver.so)
void __fastcall CIngameEvent_WM2016::SpoofTip(
        CIngameEvent_WM2016 *const this,
        int nTipperPlayerID,
        int nRecipientPlayerID)
{
  ;
}


// CIngameEvent_WM2016::FakeTip  (line 1048, @0x00000000025a0a10, libserver.so)
void __fastcall CIngameEvent_WM2016::FakeTip(
        CIngameEvent_WM2016 *const this,
        int nTipperPlayerID,
        int nRecipientPlayerID)
{
  ;
}


// CIngameEvent_WM2016::OnQueryProgressChanged  (line 1062, @0x0000000002596730, libserver.so)  // inlines: Get, NetworkStateChanged, OnQueryProgressChanged, Set, operator CEntityInstance*, operator=<int>
// calls: memcmp, Msg
// strings: "Updating progress for QueryID %d: old: %d new: %d\n"
void __fastcall CIngameEvent_WM2016::OnQueryProgressChanged(
        CIngameEvent_WM2016 *const this,
        int nQueryIndex,
        int nProgress)
{
  int m_Size; // eax
  CDOTASubChallengeInfo *m_pMemory; // rbx
  unsigned __int64 v8; // rax
  double v9; // xmm0_8
  CEntityInstance *m_pObj; // rdi
  int s2[9]; // [rsp+Ch] [rbp-24h] BYREF

  m_Size = this->m_SubChallenges.m_Vector.m_Size;
  if ( m_Size <= 0 )
  {
LABEL_6:
    s2[0] = nProgress;
    if ( nQueryIndex <= 0x63 && memcmp(&this->m_ProgressForQueryID.m_Value[nQueryIndex], s2, 4u) != 0 )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 3552, nQueryIndex, 0xFFFFFFFFLL);
      this->m_ProgressForQueryID.m_Value[nQueryIndex] = nProgress;
    }
  }
  else
  {
    m_pMemory = this->m_SubChallenges.m_Vector.m_Memory.m_pMemory;
    v8 = &m_pMemory[(m_Size - 1) + 1];
    while ( m_pMemory == 0 || m_pMemory->nQueryIndex.m_Value != nQueryIndex )
    {
      if ( ++m_pMemory == v8 )
        goto LABEL_6;
    }
    *&v9 = Msg(
             "Updating progress for QueryID %d: old: %d new: %d\n",
             nQueryIndex,
             m_pMemory->nProgress.m_Value,
             nProgress).m128_u64[0];
    if ( m_pMemory->nProgress.m_Value != nProgress )
    {
      m_pObj = m_pMemory->__m_pChainEntity.m_pObj;
      if ( m_pObj != 0 && (m_pObj->m_pEntity->m_flags & 0x400) == 0 && m_pMemory->__m_PathIndex.m_Value != -1 )
        (*(m_pObj->_vptr_IHandleEntity + 22))(m_pObj, 32, 0xFFFFFFFFLL, m_pMemory->__m_PathIndex.m_Value, v9);
      m_pMemory->nProgress.m_Value = nProgress;
    }
  }
}


// CIngameEvent_WM2016::PlayerSelectedHero  (line 1084, @0x0000000002593670, libserver.so)
void __fastcall CIngameEvent_WM2016::PlayerSelectedHero(CIngameEvent_WM2016 *const this, unsigned int unPlayer1ID)
{
  ;
}


// CIngameEvent_WM2016::GenerateWeeklyAndDailyChallenges  (line 1091, @0x00000000025beaf0, libserver.so)  // inlines: Element, FindTypeCache, Get, GetLobby, GetObject, GetPlayerCompendiumLevel, NetworkStateChanged, Set, operator CEntityInstance*, operator=<int>, operator=<unsigned int>, operator[]
// calls: GDOTAGCClientSystem, CDOTAEventSchema::Get, CDOTAEventSchema::GetEventDefinition, GCClientSystem, CGCClientSystem::GetSOCache, CDOTA_PlayerResource::GetPlayerIDBySteamID, CDOTA_PlayerResource::GetTeam, GCSDK::CSharedObjectCache::FindBaseTypeCache, CIngameEvent_Base::GetPlayerCompendiumLevel, CDOTAPlayerChallenge::IsComplete, CDOTAPlayerChallenge::GetRequiredHeroID, CUtlVectorEmbeddedNetworkVar<CDOTASubChallengeInfo, CIngameEvent_WM2016::NetworkVar_m_SubChallenges, -1>::AddToTail (17 total)
// callers: CIngameEvent_WM2016::PreWagerTimeThink
// strings: "Generating Weekly or Daily Challenge Query for playerID %d\n"
void __fastcall CIngameEvent_WM2016::GenerateWeeklyAndDailyChallenges(
        CIngameEvent_WM2016 *const this,
        int nChallengePlayerID)
{
  __int64 v3; // rbx
  EEvent v4; // r12d
  CDOTAEventSchema *v5; // rax
  unsigned int v6; // r12d
  GCSDK::SOID_t::ID_t v7; // r14
  CGCClientSystem *v8; // rax
  GCSDK::CGCClientSharedObjectCache *SOCache; // r15
  int PlayerIDBySteamID; // r14d
  GCSDK::CSharedObjectTypeCache *BaseTypeCache; // r15
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 m_Size; // rsi
  __int64 v15; // r9
  __int64 v16; // r8
  __int64 v17; // r14
  GCSDK::CSharedObjectTypeCache *v18; // r12
  unsigned int v19; // ebx
  GCSDK::CSharedObject **m_pMemory; // rax
  GCSDK::CSharedObject *v21; // r10
  int vptr_CSharedObject_high; // r15d
  uint32 RequiredHeroID; // eax
  CDOTAPlayerChallenge *v24; // r10
  int v25; // eax
  CDOTAPlayerChallenge *v26; // r10
  int v27; // r8d
  __int64 v28; // r15
  _QWORD *v29; // rdi
  int v30; // r8d
  _QWORD *v31; // rdi
  int v32; // r8d
  _QWORD *v33; // rdi
  int v34; // r8d
  _QWORD *v35; // rdi
  int v36; // r8d
  _QWORD *v37; // rdi
  int v38; // r8d
  _QWORD *v39; // rdi
  _QWORD *v40; // rdi
  int v41; // r8d
  _QWORD *v42; // rdi
  uint32 v43; // eax
  CDOTAPlayerChallenge *v44; // r10
  __int64 v45; // r8
  _QWORD *v46; // rdi
  _QWORD *v47; // rdi
  CDOTAChallengeSystem *v48; // rax
  int ChallengeQueryForPlayer; // eax
  _QWORD *v50; // rdi
  uint32 v51; // r15d
  int SelectedHeroID; // eax
  int v53; // [rsp+0h] [rbp-60h]
  int v54; // [rsp+0h] [rbp-60h]
  int v55; // [rsp+0h] [rbp-60h]
  int v56; // [rsp+0h] [rbp-60h]
  int v57; // [rsp+0h] [rbp-60h]
  CDOTAPlayerChallenge *v58; // [rsp+0h] [rbp-60h]
  CDOTAPlayerChallenge *v59; // [rsp+0h] [rbp-60h]
  int v60; // [rsp+0h] [rbp-60h]
  uint32 v61; // [rsp+0h] [rbp-60h]
  CDOTAPlayerChallenge *v62; // [rsp+0h] [rbp-60h]
  __int64 v63; // [rsp+8h] [rbp-58h]
  CUtlVectorEmbeddedNetworkVar<CDOTASubChallengeInfo,CIngameEvent_WM2016::NetworkVar_m_SubChallenges,-1> *p_m_SubChallenges; // [rsp+10h] [rbp-50h]
  CDOTAPlayerChallenge *pChallenge; // [rsp+18h] [rbp-48h]
  CDOTAPlayerChallenge *pChallengea; // [rsp+18h] [rbp-48h]
  CDOTAPlayerChallenge *pChallengec; // [rsp+18h] [rbp-48h]
  CDOTAPlayerChallenge *pChallenged; // [rsp+18h] [rbp-48h]
  CDOTAPlayerChallenge *pChallengee; // [rsp+18h] [rbp-48h]
  CDOTAPlayerChallenge *pChallengef; // [rsp+18h] [rbp-48h]
  int pChallengeg; // [rsp+18h] [rbp-48h]
  int pChallengeh; // [rsp+18h] [rbp-48h]
  CDOTAPlayerChallenge *pChallengei; // [rsp+18h] [rbp-48h]
  CDOTAPlayerChallenge *pChallengeb; // [rsp+18h] [rbp-48h]
  CDOTAPlayerChallenge *pChallengej; // [rsp+18h] [rbp-48h]
  CDOTAPlayer *pChallengek; // [rsp+18h] [rbp-48h]
  int pChallengel; // [rsp+18h] [rbp-48h]
  CIngameEvent_WM2016 *thisa; // [rsp+20h] [rbp-40h]
  int nMember; // [rsp+28h] [rbp-38h]
  GCSDK::SOID_t v81; // 0:rsi.8,8:rdx.8

  v3 = *(GDOTAGCClientSystem() + 260);
  if ( v3 != 0 )
  {
    v4 = (*(this->_vptr_IHandleEntity + 207))(this);
    v5 = CDOTAEventSchema::Get();
    if ( CDOTAEventSchema::GetEventDefinition(v5, v4) != 0 )
    {
      v6 = 0;
      thisa = this;
      p_m_SubChallenges = &this->m_SubChallenges;
      while ( v6 < (*(*v3 + 96LL))(v3) )
      {
        v7 = (*(*v3 + 104LL))(v3, v6);
        v8 = GCClientSystem();
        v81.m_id = v7;
        *&v81.m_type = 1;
        SOCache = CGCClientSystem::GetSOCache(v8, v81);
        if ( SOCache != 0 )
        {
          PlayerIDBySteamID = CDOTA_PlayerResource::GetPlayerIDBySteamID(g_pDOTAPlayerResource, v7);
          if ( CDOTA_PlayerResource::GetTeam(g_pDOTAPlayerResource, PlayerIDBySteamID) != 1
            && PlayerIDBySteamID == nChallengePlayerID
            && (*(*v3 + 136LL))(v3, v6) != 0 )
          {
            BaseTypeCache = GCSDK::CSharedObjectCache::FindBaseTypeCache(SOCache, 2010);
            if ( BaseTypeCache != 0
              && nChallengePlayerID != -1
              && CIngameEvent_Base::GetPlayerCompendiumLevel(thisa, nChallengePlayerID) > 0 )
            {
              m_Size = BaseTypeCache->m_vecObjects.m_Size;
              v15 = 0;
              v16 = 0;
              if ( m_Size != 0 )
              {
                nMember = v6;
                v17 = 0;
                v18 = BaseTypeCache;
                v63 = v3;
                v19 = 0;
                do
                {
                  m_pMemory = v18->m_vecObjects.m_Memory.m_pMemory;
                  v21 = m_pMemory[v17];
                  if ( v21 != 0 && (v21[9]._vptr_CSharedObject & 2) == 0 )
                  {
                    pChallenge = m_pMemory[v17];
                    vptr_CSharedObject_high = HIDWORD(v21[4]._vptr_CSharedObject);
                    if ( (*(thisa->_vptr_IHandleEntity + 207))(thisa, m_Size, v12, v13, v16, v15) == vptr_CSharedObject_high
                      && !CDOTAPlayerChallenge::IsComplete(pChallenge)
                      && *(pChallenge + 10) <= 0x63u )
                    {
                      RequiredHeroID = CDOTAPlayerChallenge::GetRequiredHeroID(pChallenge);
                      v24 = pChallenge;
                      if ( RequiredHeroID == 0
                        || (v51 = CDOTAPlayerChallenge::GetRequiredHeroID(pChallenge),
                            SelectedHeroID = CDOTA_PlayerResource::GetSelectedHeroID(
                                               g_pDOTAPlayerResource,
                                               nChallengePlayerID),
                            v24 = pChallenge,
                            v51 == SelectedHeroID) )
                      {
                        pChallengea = v24;
                        v25 = CUtlVectorEmbeddedNetworkVar<CDOTASubChallengeInfo,CIngameEvent_WM2016::NetworkVar_m_SubChallenges,-1>::AddToTail(p_m_SubChallenges);
                        v26 = pChallengea;
                        v27 = *(pChallengea + 11);
                        v28 = &thisa->m_SubChallenges.m_Vector.m_Memory.m_pMemory[v25];
                        if ( v27 != *(v28 + 20) )
                        {
                          v29 = *(v28 + 8);
                          if ( v29 != 0 && (*(v29[1] + 49LL) & 4) == 0 && *(v28 + 16) != 0xFFFF )
                          {
                            v53 = *(pChallengea + 11);
                            (*(*v29 + 176LL))(v29, 20, 0xFFFFFFFFLL, *(v28 + 16));
                            v26 = pChallengea;
                            v27 = v53;
                          }
                          *(v28 + 20) = v27;
                        }
                        v30 = *(v26 + 17);
                        if ( v30 != *(v28 + 24) )
                        {
                          v31 = *(v28 + 8);
                          if ( v31 != 0 && (*(v31[1] + 49LL) & 4) == 0 && *(v28 + 16) != 0xFFFF )
                          {
                            v54 = *(v26 + 17);
                            pChallengec = v26;
                            (*(*v31 + 176LL))(v31, 24, 0xFFFFFFFFLL, *(v28 + 16));
                            v26 = pChallengec;
                            v30 = v54;
                          }
                          *(v28 + 24) = v30;
                        }
                        v32 = *(v26 + 10);
                        if ( v32 != *(v28 + 28) )
                        {
                          v33 = *(v28 + 8);
                          if ( v33 != 0 && (*(v33[1] + 49LL) & 4) == 0 && *(v28 + 16) != 0xFFFF )
                          {
                            v55 = *(v26 + 10);
                            pChallenged = v26;
                            (*(*v33 + 176LL))(v33, 28, 0xFFFFFFFFLL, *(v28 + 16));
                            v26 = pChallenged;
                            v32 = v55;
                          }
                          *(v28 + 28) = v32;
                        }
                        v34 = *(v26 + 9);
                        if ( v34 != *(v28 + 48) )
                        {
                          v35 = *(v28 + 8);
                          if ( v35 != 0 && (*(v35[1] + 49LL) & 4) == 0 && *(v28 + 16) != 0xFFFF )
                          {
                            v56 = *(v26 + 9);
                            pChallengee = v26;
                            (*(*v35 + 176LL))(v35, 48, 0xFFFFFFFFLL, *(v28 + 16));
                            v26 = pChallengee;
                            v34 = v56;
                          }
                          *(v28 + 48) = v34;
                        }
                        v36 = *(v26 + 16);
                        if ( v36 != *(v28 + 52) )
                        {
                          v37 = *(v28 + 8);
                          if ( v37 != 0 && (*(v37[1] + 49LL) & 4) == 0 && *(v28 + 16) != 0xFFFF )
                          {
                            v57 = *(v26 + 16);
                            pChallengef = v26;
                            (*(*v37 + 176LL))(v37, 52, 0xFFFFFFFFLL, *(v28 + 16));
                            v26 = pChallengef;
                            v36 = v57;
                          }
                          *(v28 + 52) = v36;
                        }
                        v38 = *(v26 + 15);
                        if ( v38 != *(v28 + 32) )
                        {
                          v39 = *(v28 + 8);
                          if ( v39 != 0 && (*(v39[1] + 49LL) & 4) == 0 && *(v28 + 16) != 0xFFFF )
                          {
                            v58 = v26;
                            pChallengeg = *(v26 + 15);
                            (*(*v39 + 176LL))(v39, 32, 0xFFFFFFFFLL, *(v28 + 16));
                            v38 = pChallengeg;
                            v26 = v58;
                          }
                          *(v28 + 32) = v38;
                          v38 = *(v26 + 15);
                        }
                        if ( v38 != *(v28 + 60) )
                        {
                          v40 = *(v28 + 8);
                          if ( v40 != 0 && (*(v40[1] + 49LL) & 4) == 0 && *(v28 + 16) != 0xFFFF )
                          {
                            v59 = v26;
                            pChallengeh = v38;
                            (*(*v40 + 176LL))(v40, 60, 0xFFFFFFFFLL, *(v28 + 16));
                            v38 = pChallengeh;
                            v26 = v59;
                          }
                          *(v28 + 60) = v38;
                        }
                        v41 = *(v26 + 20);
                        if ( v41 != *(v28 + 36) )
                        {
                          v42 = *(v28 + 8);
                          if ( v42 != 0 && (*(v42[1] + 49LL) & 4) == 0 && *(v28 + 16) != 0xFFFF )
                          {
                            v60 = *(v26 + 20);
                            pChallengei = v26;
                            (*(*v42 + 176LL))(v42, 36, 0xFFFFFFFFLL, *(v28 + 16));
                            v26 = pChallengei;
                            v41 = v60;
                          }
                          *(v28 + 36) = v41;
                        }
                        pChallengeb = v26;
                        v43 = CDOTAPlayerChallenge::GetRequiredHeroID(v26);
                        v44 = pChallengeb;
                        v45 = v43;
                        if ( v43 != *(v28 + 56) )
                        {
                          v46 = *(v28 + 8);
                          if ( v46 != 0 && (*(v46[1] + 49LL) & 4) == 0 && *(v28 + 16) != 0xFFFF )
                          {
                            v61 = v43;
                            (*(*v46 + 176LL))(v46, 56, 0xFFFFFFFFLL, *(v28 + 16));
                            v44 = pChallengeb;
                            v45 = v61;
                          }
                          *(v28 + 56) = v45;
                        }
                        if ( nChallengePlayerID != *(v28 + 40) )
                        {
                          v47 = *(v28 + 8);
                          if ( v47 != 0 && (*(v47[1] + 49LL) & 4) == 0 && *(v28 + 16) != 0xFFFF )
                          {
                            pChallengej = v44;
                            (*(*v47 + 176LL))(v47, 40, 0xFFFFFFFFLL, *(v28 + 16), v45);
                            v44 = pChallengej;
                          }
                          *(v28 + 40) = nChallengePlayerID;
                        }
                        v62 = v44;
                        Msg("Generating Weekly or Daily Challenge Query for playerID %d\n", nChallengePlayerID);
                        pChallengek = CDOTA_PlayerResource::GetPlayer(g_pDOTAPlayerResource, nChallengePlayerID);
                        v48 = GDOTAChallengeSystem();
                        ChallengeQueryForPlayer = CDOTAChallengeSystem::AttemptToGenerateChallengeQueryForPlayer(
                                                    v48,
                                                    pChallengek,
                                                    v62,
                                                    0);
                        if ( ChallengeQueryForPlayer != *(v28 + 44) )
                        {
                          v50 = *(v28 + 8);
                          if ( v50 != 0 )
                          {
                            v12 = v50[1];
                            if ( (*(v12 + 49) & 4) == 0 && *(v28 + 16) != 0xFFFF )
                            {
                              pChallengel = ChallengeQueryForPlayer;
                              (*(*v50 + 176LL))(v50, 44, 0xFFFFFFFFLL, *(v28 + 16));
                              ChallengeQueryForPlayer = pChallengel;
                            }
                          }
                          *(v28 + 44) = ChallengeQueryForPlayer;
                        }
                      }
                    }
                  }
                  ++v19;
                  ++v17;
                }
                while ( v19 < v18->m_vecObjects.m_Size );
                v6 = nMember;
                v3 = v63;
              }
            }
          }
        }
        ++v6;
      }
    }
  }
}


// CIngameEvent_WM2016::GetSubChallengesForPlayer  (line 1171, @0x00000000025b8260, libserver.so)  // inlines: AddToTail, CopyConstruct<const CDOTASubChallengeInfo*>, Element, GrowMemory, operator[]
// calls: CUtlMemory<const CDOTASubChallengeInfo*, int>::Grow
// callers: CDOTAChallengeSystem::AddResultToSignout
void __fastcall CIngameEvent_WM2016::GetSubChallengesForPlayer(
        CIngameEvent_WM2016 *const this,
        int nPlayerID,
        CUtlVector<const CDOTASubChallengeInfo*,CUtlMemory<const CDOTASubChallengeInfo*,int> > *pChallengeInfos)
{
  CUtlVectorBase<const CDOTASubChallengeInfo*,CUtlMemory<const CDOTASubChallengeInfo*,int> >::CAllocator *p_m_Memory; // r8
  __int64 v6; // rbx
  int v7; // r13d
  CDOTASubChallengeInfo *v8; // r14
  __int64 m_Size; // rax
  int v10; // ecx
  const CDOTASubChallengeInfo **v11; // rax
  CUtlVector<const CDOTASubChallengeInfo*,CUtlMemory<const CDOTASubChallengeInfo*,int> > *v12; // [rsp+8h] [rbp-48h]
  int v13; // [rsp+14h] [rbp-3Ch]
  CUtlVectorBase<const CDOTASubChallengeInfo*,CUtlMemory<const CDOTASubChallengeInfo*,int> >::CAllocator *v14; // [rsp+18h] [rbp-38h]

  if ( nPlayerID != -1 && this->m_SubChallenges.m_Vector.m_Size > 0 )
  {
    p_m_Memory = &pChallengeInfos->m_Memory;
    v6 = 0;
    v7 = 0;
    do
    {
      v8 = &this->m_SubChallenges.m_Vector.m_Memory.m_pMemory[v6];
      if ( v8 != 0 && v8->nPlayerID.m_Value == nPlayerID )
      {
        m_Size = pChallengeInfos->m_Size;
        v10 = pChallengeInfos->m_Size;
        if ( m_Size == pChallengeInfos->m_Memory.m_nAllocationCount )
        {
          v12 = pChallengeInfos;
          v13 = pChallengeInfos->m_Size;
          v14 = p_m_Memory;
          CUtlMemory<CDOTASubChallengeInfo const*,int>::Grow(p_m_Memory, 1);
          pChallengeInfos = v12;
          m_Size = v13;
          p_m_Memory = v14;
          v10 = v12->m_Size;
        }
        pChallengeInfos->m_Size = v10 + 1;
        v11 = &pChallengeInfos->m_Memory.m_pMemory[m_Size];
        if ( v11 != 0 )
          *v11 = v8;
      }
      ++v7;
      ++v6;
    }
    while ( v7 < this->m_SubChallenges.m_Vector.m_Size );
  }
}


// CIngameEvent_WM2016::GetWagerAmount  (line 1193, @0x00000000025a0a20, libserver.so)  // inlines: GetArrayIndexForPlayerID
int __fastcall CIngameEvent_WM2016::GetWagerAmount(CIngameEvent_WM2016 *const this, int nPlayer)
{
  int result; // eax

  result = 0;
  if ( nPlayer <= 9 )
    return this->m_CompendiumCoinWager.m_Value[nPlayer];
  return result;
}


// CIngameEvent_WM2016::GetWagerWinnings  (line 1204, @0x00000000025a0a40, libserver.so)  // inlines: GetArrayIndexForPlayerID
int __fastcall CIngameEvent_WM2016::GetWagerWinnings(CIngameEvent_WM2016 *const this, int nPlayer)
{
  int result; // eax

  result = 0;
  if ( nPlayer <= 9 )
    return this->m_CompendiumCoinWagerResults.m_Value[nPlayer];
  return result;
}


// CIngameEvent_WM2016::GetTippedPlayerID  (line 1215, @0x00000000025a0a60, libserver.so)  // inlines: GetArrayIndexForPlayerID
int __fastcall CIngameEvent_WM2016::GetTippedPlayerID(CIngameEvent_WM2016 *const this, int nPlayer)
{
  int result; // eax

  result = 0;
  if ( nPlayer <= 9 )
    return this->m_CompendiumTippedPlayers.m_Value[nPlayer];
  return result;
}


// CIngameEvent_WM2016::GetWagerSizeAmount  (line 1226, @0x00000000025a0a80, libserver.so)  // inlines: GetBaseWagerSizeAmount, GetPlayerWagerTokensRemaining
// calls: CDOTAEventSchema::Get, CDOTAEventSchema::GetEventDefinition, CDOTA_PlayerResource::GetEventWagerTokensRemaining
// callers: CIngameEvent_WM2016::ClientMsg_SetPlayerCoinWager
int __fastcall CIngameEvent_WM2016::GetWagerSizeAmount(CIngameEvent_WM2016 *const this, int nPlayer, int nWagerSize)
{
  __int64 v4; // rbx
  EEvent v5; // r12d
  CDOTAEventSchema *v6; // rax
  const CDOTAEventDefinition *EventDefinition; // r12
  signed int v8; // r14d
  signed int v9; // r15d

  v4 = nWagerSize;
  v5 = (*(this->_vptr_IHandleEntity + 207))(this);
  v6 = CDOTAEventSchema::Get();
  EventDefinition = CDOTAEventSchema::GetEventDefinition(v6, v5);
  if ( EventDefinition == 0 )
    return 0;
  if ( v4 < 0 )
  {
    v8 = 0;
LABEL_11:
    v9 = 0;
    if ( (v4 - 1) <= 3 )
      v9 = *(EventDefinition + v4 + 100);
    goto LABEL_6;
  }
  v8 = 0;
  if ( v4 <= 3 )
    v8 = *(EventDefinition + v4 + 101);
  v9 = 0;
  if ( v4 != 0 )
    goto LABEL_11;
LABEL_6:
  if ( CDOTA_PlayerResource::GetEventWagerTokensRemaining(g_pDOTAPlayerResource, nPlayer) >= v8
    || v9 >= CDOTA_PlayerResource::GetEventWagerTokensRemaining(g_pDOTAPlayerResource, nPlayer) )
  {
    if ( v4 <= 3 )
      return *(EventDefinition + v4 + 101);
    return 0;
  }
  return CDOTA_PlayerResource::GetEventWagerTokensRemaining(g_pDOTAPlayerResource, nPlayer);
}


// CIngameEvent_WM2016::GetAvailableWagerTokens  (line 1244, @0x00000000025a0d10, libserver.so)  // inlines: GetArrayIndexForPlayerID, GetPlayerWagerTokensRemaining, GetWagerAmount
// calls: CDOTA_PlayerResource::GetEventWagerTokensRemaining
int __fastcall CIngameEvent_WM2016::GetAvailableWagerTokens(CIngameEvent_WM2016 *const this, int nPlayer)
{
  __int64 v3; // rbx
  uint32 EventWagerTokensRemaining; // eax
  int v5; // edx

  v3 = nPlayer;
  EventWagerTokensRemaining = CDOTA_PlayerResource::GetEventWagerTokensRemaining(g_pDOTAPlayerResource, nPlayer);
  v5 = 0;
  if ( v3 <= 9 )
    v5 = this->m_CompendiumCoinWager.m_Value[v3];
  return EventWagerTokensRemaining - v5;
}


// CIngameEvent_WM2016::GetTotalTipsForPlayerID  (line 1251, @0x00000000025a0d50, libserver.so)
// calls: CDOTAEventSchema::Get, CDOTAEventSchema::GetEventDefinition
int __fastcall CIngameEvent_WM2016::GetTotalTipsForPlayerID(CIngameEvent_WM2016 *const this, int nPlayer)
{
  EEvent v4; // r13d
  CDOTAEventSchema *v5; // rax
  const CDOTAEventDefinition *EventDefinition; // rax
  int v7; // edi
  int result; // eax
  __int64 i; // rdx
  int v10; // ecx

  v4 = (*(this->_vptr_IHandleEntity + 207))(this);
  v5 = CDOTAEventSchema::Get();
  EventDefinition = CDOTAEventSchema::GetEventDefinition(v5, v4);
  if ( EventDefinition == 0 )
    return 0;
  v7 = *(EventDefinition + 105);
  result = 0;
  if ( v7 != 0 )
  {
    for ( i = 0; i != 10; ++i )
    {
      v10 = this->m_CompendiumTippedPlayers.m_Value[i] == nPlayer;
      result += v10;
    }
    result *= v7;
  }
  return result;
}


// dota_hud_wager_spoof  (line 1351, @0x0000000002594480, libserver.so)  // inlines: Arg, operator[]
// calls: CDOTAGamerules::GetIngameEventByID, V_atoi, ConMsg(char const*,...)
// strings: "Usage:  dota_hud_wager_spoof < player id > < wager_amount >\n"
void __fastcall dota_hud_wager_spoof(const CCommandContext *const ctx, const CCommand *const args)
{
  const char *v3; // rdi
  const char *v4; // rdi

  if ( args->m_nArgc <= 2 )
  {
    ConMsg("Usage:  dota_hud_wager_spoof < player id > < wager_amount >\n");
  }
  else if ( CDOTAGamerules::GetIngameEventByID(g_pGameRules, EEvent::EVENT_ID_WINTER_MAJOR_2016) != 0 )
  {
    v3 = "";
    if ( args->m_nArgc > 2 )
      v3 = args->m_ppArgv[2];
    V_atoi(v3);
    v4 = "";
    if ( args->m_nArgc > 1 )
      v4 = args->m_ppArgv[1];
    V_atoi(v4);
  }
}


// dota_hud_tip_spoof  (line 1370, @0x0000000002594510, libserver.so)  // inlines: Arg, GetCurrentIngameEvent, operator[]
// calls: CDOTAGamerules::GetIngameEventByID, V_atoi, ConMsg(char const*,...)
// strings: "Usage:  dota_hud_tip_spoof < tipper player id > < recipient player id >\n"
void __fastcall dota_hud_tip_spoof(const CCommandContext *const ctx, const CCommand *const args)
{
  const char *v3; // rdi
  const char *v4; // rdi

  if ( args->m_nArgc <= 2 )
  {
    ConMsg("Usage:  dota_hud_tip_spoof < tipper player id > < recipient player id >\n");
  }
  else if ( CDOTAGamerules::GetIngameEventByID(g_pGameRules, EEvent::EVENT_ID_WINTER_MAJOR_2017) != 0 )
  {
    v3 = "";
    if ( args->m_nArgc > 2 )
      v3 = args->m_ppArgv[2];
    V_atoi(v3);
    v4 = "";
    if ( args->m_nArgc > 1 )
      v4 = args->m_ppArgv[1];
    V_atoi(v4);
  }
}


// dota_hud_tip_fake  (line 1389, @0x00000000025945a0, libserver.so)  // inlines: Arg, GetCurrentIngameEvent, operator[]
// calls: CDOTAGamerules::GetIngameEventByID, V_atoi, ConMsg(char const*,...)
// strings: "Usage:  dota_hud_tip_fake < tipper player id > < recipient player id >\n"
void __fastcall dota_hud_tip_fake(const CCommandContext *const ctx, const CCommand *const args)
{
  const char *v3; // rdi
  const char *v4; // rdi

  if ( args->m_nArgc <= 2 )
  {
    ConMsg("Usage:  dota_hud_tip_fake < tipper player id > < recipient player id >\n");
  }
  else if ( CDOTAGamerules::GetIngameEventByID(g_pGameRules, EEvent::EVENT_ID_WINTER_MAJOR_2017) != 0 )
  {
    v3 = "";
    if ( args->m_nArgc > 2 )
      v3 = args->m_ppArgv[2];
    V_atoi(v3);
    v4 = "";
    if ( args->m_nArgc > 1 )
      v4 = args->m_ppArgv[1];
    V_atoi(v4);
  }
}


// CIngameEvent_TI6::YouForgotToImplementOrDeclareServerClass  (line 1407, @0x0000000002593680, libserver.so)
int __fastcall CIngameEvent_TI6::YouForgotToImplementOrDeclareServerClass(CIngameEvent_TI6 *const this)
{
  return 0;
}


// CIngameEvent_TI6::GetServerClass  (line 1407, @0x00000000025998d0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CIngameEvent_TI6::GetServerClass(CIngameEvent_TI6 *const this)
{
  CEntityClass *m_pClass; // rdx
  ServerClass *result; // rax
  CEntityClassInfo *m_pBaseClassInfo; // rdx

  m_pClass = this->m_pEntity->m_pClass;
  result = m_pClass->m_pGameClass;
  if ( result == 0 )
  {
    m_pBaseClassInfo = m_pClass->m_pBaseClassInfo;
    if ( m_pBaseClassInfo != 0 )
      return CEntityClass::GetGameClass(m_pBaseClassInfo->m_pClass, 0);
  }
  return result;
}


// CIngameEvent_TI6::Create  (line 1412, @0x00000000025a0de0, libserver.so)
// calls: CBaseEntity::Create
// callers: CDOTAGamerules::InternalCreateIngameEvent
// strings: "dota_ingameevent_ti6"
CIngameEvent_TI6 *__cdecl CIngameEvent_TI6::Create()
{
  CBaseEntity *v0; // rax
  CIngameEvent_TI6 *v1; // rbx

  v0 = CBaseEntity::Create("dota_ingameevent_ti6", &vec3_origin, &vec3_angle, 0);
  v1 = v0;
  if ( v0 != 0 )
    (*(v0->_vptr_IHandleEntity + 212))(v0);
  return v1;
}


// CIngameEvent_FM2016::YouForgotToImplementOrDeclareServerClass  (line 1424, @0x0000000002593690, libserver.so)
int __fastcall CIngameEvent_FM2016::YouForgotToImplementOrDeclareServerClass(CIngameEvent_FM2016 *const this)
{
  return 0;
}


// CIngameEvent_FM2016::GetServerClass  (line 1424, @0x0000000002599690, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CIngameEvent_FM2016::GetServerClass(CIngameEvent_FM2016 *const this)
{
  CEntityClass *m_pClass; // rdx
  ServerClass *result; // rax
  CEntityClassInfo *m_pBaseClassInfo; // rdx

  m_pClass = this->m_pEntity->m_pClass;
  result = m_pClass->m_pGameClass;
  if ( result == 0 )
  {
    m_pBaseClassInfo = m_pClass->m_pBaseClassInfo;
    if ( m_pBaseClassInfo != 0 )
      return CEntityClass::GetGameClass(m_pBaseClassInfo->m_pClass, 0);
  }
  return result;
}


// CIngameEvent_FM2016::Create  (line 1429, @0x00000000025a0e30, libserver.so)
// calls: CBaseEntity::Create
// callers: CDOTAGamerules::InternalCreateIngameEvent
// strings: "dota_ingameevent_fm2016"
CIngameEvent_FM2016 *__cdecl CIngameEvent_FM2016::Create()
{
  CBaseEntity *v0; // rax
  CIngameEvent_FM2016 *v1; // rbx

  v0 = CBaseEntity::Create("dota_ingameevent_fm2016", &vec3_origin, &vec3_angle, 0);
  v1 = v0;
  if ( v0 != 0 )
    (*(v0->_vptr_IHandleEntity + 212))(v0);
  return v1;
}


// CIngameEvent_WM2017::YouForgotToImplementOrDeclareServerClass  (line 1441, @0x00000000025936a0, libserver.so)
int __fastcall CIngameEvent_WM2017::YouForgotToImplementOrDeclareServerClass(CIngameEvent_WM2017 *const this)
{
  return 0;
}


// CIngameEvent_WM2017::GetServerClass  (line 1441, @0x0000000002599890, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CIngameEvent_WM2017::GetServerClass(CIngameEvent_WM2017 *const this)
{
  CEntityClass *m_pClass; // rdx
  ServerClass *result; // rax
  CEntityClassInfo *m_pBaseClassInfo; // rdx

  m_pClass = this->m_pEntity->m_pClass;
  result = m_pClass->m_pGameClass;
  if ( result == 0 )
  {
    m_pBaseClassInfo = m_pClass->m_pBaseClassInfo;
    if ( m_pBaseClassInfo != 0 )
      return CEntityClass::GetGameClass(m_pBaseClassInfo->m_pClass, 0);
  }
  return result;
}


// CIngameEvent_WM2017::Create  (line 1446, @0x00000000025a0e80, libserver.so)
// calls: CBaseEntity::Create
// callers: CDOTAGamerules::InternalCreateIngameEvent
// strings: "dota_ingameevent_wm2017"
CIngameEvent_WM2017 *__cdecl CIngameEvent_WM2017::Create()
{
  CBaseEntity *v0; // rax
  CIngameEvent_WM2017 *v1; // rbx

  v0 = CBaseEntity::Create("dota_ingameevent_wm2017", &vec3_origin, &vec3_angle, 0);
  v1 = v0;
  if ( v0 != 0 )
    (*(v0->_vptr_IHandleEntity + 212))(v0);
  return v1;
}


