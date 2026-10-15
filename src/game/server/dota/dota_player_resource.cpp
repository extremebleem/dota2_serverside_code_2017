// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/dota_player_resource.cpp:45
class C_CDOTA_PlayerResource_MapInstall {
	C_CDOTA_PlayerResource_MapInstall();

	// sizeof = 1
};

// src/game/server/dota/dota_player_resource.cpp:2978
class CGCJobRequestBatchPlayerResourcesResponse : public CGCClientJob {
public:

	CGCJobRequestBatchPlayerResourcesResponse(CGCJobRequestBatchPlayerResourcesResponse &);
	CGCJobRequestBatchPlayerResourcesResponse(CGCJobRequestBatchPlayerResourcesResponse &);
	CGCJobRequestBatchPlayerResourcesResponse(CGCClient *);
	virtual bool BYieldingRunGCJob(IMsgNetPacket *);
	virtual ~CGCJobRequestBatchPlayerResourcesResponse();

	// vtable[5] BYieldingRunGCJob
	// sizeof = 320
};

// src/game/server/dota/dota_player_resource.cpp:3191
class CGCClientJobSetLeaverDetected : public CGCClientJob {
public:

private:

	CGCClientJobSetLeaverDetected(CGCClientJobSetLeaverDetected &);
	CGCClientJobSetLeaverDetected(CGCClientJobSetLeaverDetected &);
	CGCClientJobSetLeaverDetected(CGCClient *, uint64, DOTALeaverStatus_t, ENetworkDisconnectionReason, const CMsgLeaverState &);
	virtual bool BYieldingRunJob(void *);
	virtual ~CGCClientJobSetLeaverDetected();

	// vtable[2] BYieldingRunJob
	// sizeof = 360
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_PlayerResource::YouForgotToImplementOrDeclareServerClass  (line 45, @0x0000000002653c00, libserver.so)
int __fastcall CDOTA_PlayerResource::YouForgotToImplementOrDeclareServerClass(CDOTA_PlayerResource *const this)
{
  return 0;
}


// CDOTA_PlayerResource::GetServerClass  (line 45, @0x0000000002658d40, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_PlayerResource::GetServerClass(CDOTA_PlayerResource *const this)
{
  __int64 v1; // rdx
  ServerClass *result; // rax
  __int64 v3; // rdx

  v1 = *(*(this + 1) + 8LL);
  result = *(v1 + 624);
  if ( result == 0 )
  {
    v3 = *(v1 + 64);
    if ( v3 != 0 )
      return CEntityClass::GetGameClass(*(v3 + 24), 0);
  }
  return result;
}


// CDOTA_PlayerResource::Spawn  (line 53, @0x000000000269bd90, libserver.so)  // inlines: CVariantBase, DOTAGameRules, GetLobby, RegisterInstance<CDOTA_PlayerResource>, ResetLeaverStatus, SetLessFunc, curtime, ~CVariantBase
// calls: CBaseEntity::Spawn, CDOTA_PlayerResource::Reset, CDOTA_PlayerResource::ClearTimedRewards, GDOTAGCClientSystem, CDOTA_PlayerResource::InitLobbySteamIDs, CDOTA_PlayerResource::InitPlayersWithLobby, CDOTA_PlayerResource::InitBroadcasterChannelsWithLobby, CDOTAGamerules::OnLobbyUpdated, GetScriptDesc<CDOTA_PlayerResource>, CVariantBase<CVariantDefaultAllocator>::Free, CBaseEntity::ThinkSet, CBaseEntity::SetNextThink (13 total)
// globals: CDefOps<int>::LessFunc(int const&,int const&)
void __fastcall CDOTA_PlayerResource::Spawn(CDOTA_PlayerResource *const this, const CEntityKeyValues *pKeyValues)
{
  char *v3; // r14
  _QWORD *v4; // r12
  __int64 v5; // rbx
  _QWORD *v6; // rdi
  __int64 v7; // rax
  __int64 i; // rax
  const CDOTALobby *v9; // rbx
  __int64 v10; // rbx
  __int64 (__fastcall *v11)(__int64, ScriptClassDesc_t *, CDOTA_PlayerResource *const); // r12
  ScriptClassDesc_t *Script; // rax
  uint64 v13; // rax
  __int64 v14; // rdx
  double v15; // xmm1_8
  double v16; // xmm0_8
  CGlobalVars *v17; // rbx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  CVariantBase<CVariantDefaultAllocator> v19; // [rsp+0h] [rbp-30h] BYREF

  v3 = this + 17488;
  v4 = (this + 17584);
  v5 = 0;
  CBaseEntity::Spawn(this, pKeyValues);
  CDOTA_PlayerResource::Reset(this);
  *(this + 17484) = 0;
  do
  {
    *&v3[v5] = 1;
    v6 = v4;
    v5 += 4;
    v7 = *v4;
    v4 += 5;
    (*(v7 + 32))(v6);
  }
  while ( v5 != 96 );
  CDOTA_PlayerResource::ClearTimedRewards(this);
  for ( i = 0; i != 960; i += 40 )
  {
    while ( *(this + i + 32536) != 0 )
    {
      i += 40;
      if ( i == 960 )
        goto LABEL_7;
    }
    *(this + i + 32536) = CDefOps<int>::LessFunc;
  }
LABEL_7:
  *(this + 8470) = -1;
  *(this + 8471) = 0;
  v9 = *(GDOTAGCClientSystem() + 260);
  if ( v9 != 0 )
  {
    if ( *(GDOTAGCClientSystem() + 261) != 0 )
      CDOTA_PlayerResource::InitLobbySteamIDs(v9);
    CDOTA_PlayerResource::InitPlayersWithLobby(this, v9);
    CDOTA_PlayerResource::InitBroadcasterChannelsWithLobby(this, v9);
    if ( g_pGameRules != 0 )
      CDOTAGamerules::OnLobbyUpdated(g_pGameRules, v9);
  }
  if ( g_pVScriptGameSystem != 0 && (*(g_pVScriptGameSystem->_vptr_IVScriptGameSystem + 4))(g_pVScriptGameSystem) != 0 )
  {
    v10 = (*(g_pVScriptGameSystem->_vptr_IVScriptGameSystem + 4))(g_pVScriptGameSystem);
    v11 = *(*v10 + 184LL);
    Script = GetScriptDesc<CDOTA_PlayerResource>(this);
    v13 = v11(v10, Script, this);
    v14 = *v10;
    v19.m_type = 31;
    v19.m_flags = 0;
    v19.m_uint64 = v13;
    (*(v14 + 240))(v10, 0, "PlayerResource", &v19);
    CVariantBase<CVariantDefaultAllocator>::Free(&v19);
  }
  CBaseEntity::ThinkSet(this, 0x679uLL, 0.0, 0, 0);
  v16 = 0.0;
  v17 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        (m_pfnWarningFunc)(1, 0.0);
    }
    *&v16 = LODWORD(v17->m_flCurrentTime);
  }
  CBaseEntity::SetNextThink(this, v16, v15, 0);
}


// CDOTA_PlayerResource::Reset  (line 99, @0x0000000002683280, libserver.so)  // inlines: ClearAssistsMatrix, ClearKillsMatrix, ClearRawPlayerDamageMatrix, ClearTotalPlayerDamageMatrix, EnsureCapacity, NetworkStateChanged, OnSizeChanged, Purge, RemoveAll, Set, Term, __fill_n_a<int*, long unsigned int, int>, fill_n<int*, long unsigned int, int>, memcpy, operator(), operator=<EEvent>
// calls: CUtlRBTree<CUtlMap<int, int>::Node_t, short unsigned int, CUtlMap<int, int>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, int>::Node_t, short unsigned int>, short unsigned int> >::RemoveAll, CUtlVectorEmbeddedNetworkVar<PlayerResourcePlayerTeamData_t, CDOTA_PlayerResource::NetworkVar_m_vecPlayerTeamData, -1>::Resolve, CUtlVectorBase<PlayerResourcePlayerTeamData_t, CNetworkUtlVector_MemoryType<PlayerResourcePlayerTeamData_t, -1> >::RemoveAll, CUtlMemory<PlayerResourcePlayerTeamData_t, int>::Purge, CUtlVectorEmbeddedNetworkVar<PlayerResourcePlayerData_t, CDOTA_PlayerResource::NetworkVar_m_vecPlayerData, -1>::Resolve, CUtlVectorBase<PlayerResourcePlayerData_t, CNetworkUtlVector_MemoryType<PlayerResourcePlayerData_t, -1> >::RemoveAll, CUtlMemory<PlayerResourcePlayerData_t, int>::Purge, CUtlVectorEmbeddedNetworkVar<PlayerResourceBroadcasterData_t, CDOTA_PlayerResource::NetworkVar_m_vecBrodcasterData, -1>::Resolve, CUtlVectorBase<PlayerResourceBroadcasterData_t, CNetworkUtlVector_MemoryType<PlayerResourceBroadcasterData_t, -1> >::RemoveAll, CUtlMemory<PlayerResourceBroadcasterData_t, int>::Purge, EntityInstanceSetNetworkStateChanged, memcpy
// callers: CDOTA_PlayerResource::Spawn
void __fastcall CDOTA_PlayerResource::Reset(CDOTA_PlayerResource *const this)
{
  CDOTA_PlayerResource *v1; // r14
  CDOTA_PlayerResource *v2; // r13
  CUtlRBTree<CUtlMap<int,int>::Node_t,short unsigned int,CUtlMap<int,int>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,int>::Node_t,short unsigned int>,short unsigned int> > *v3; // r12
  __int64 v4; // rdx
  char *v5; // rbx
  CDOTA_PlayerResource *v6; // r15
  __int64 i; // rax
  __int64 j; // rax
  _DWORD *v9; // rax
  _DWORD *v10; // rax
  __int64 k; // rax
  int v12; // r15d
  _QWORD *v13; // rax
  void (__fastcall *v14)(_QWORD); // rdx
  _QWORD *v15; // rdi
  _QWORD *v16; // rax
  void (__fastcall *v17)(_QWORD); // rdx
  _QWORD *v18; // rdi
  _QWORD *v19; // rax
  void (__fastcall *v20)(_QWORD); // rdx
  _QWORD *v21; // rdi
  int v22; // eax
  __int64 v23; // rsi
  __int64 v24; // rax
  int v25; // eax
  __int64 v26; // rsi
  __int64 v27; // rax
  int v28; // eax
  __int64 v29; // rsi
  __int64 v30; // rax
  const void *v31; // rbx
  void *v32; // rax
  const void *v33; // rbx
  void *v34; // rax
  const void *v35; // rbx
  void *v36; // rax
  char *v37; // [rsp+8h] [rbp-1D8h]
  char *v38; // [rsp+10h] [rbp-1D0h]
  char *v39; // [rsp+18h] [rbp-1C8h]
  char *v40; // [rsp+20h] [rbp-1C0h]
  char *v41; // [rsp+28h] [rbp-1B8h]
  char *v42; // [rsp+30h] [rbp-1B0h]
  char *v43; // [rsp+38h] [rbp-1A8h]
  char *v44; // [rsp+40h] [rbp-1A0h]
  char *v45; // [rsp+48h] [rbp-198h]
  char *v46; // [rsp+50h] [rbp-190h]
  char *v47; // [rsp+58h] [rbp-188h]
  char *v48; // [rsp+60h] [rbp-180h]
  char *v49; // [rsp+68h] [rbp-178h]
  char *v50; // [rsp+70h] [rbp-170h]
  char *v51; // [rsp+78h] [rbp-168h]
  char *v52; // [rsp+80h] [rbp-160h]
  char *v53; // [rsp+88h] [rbp-158h]
  char *v54; // [rsp+90h] [rbp-150h]
  char *v55; // [rsp+98h] [rbp-148h]
  char *v56; // [rsp+A0h] [rbp-140h]
  char *v57; // [rsp+A8h] [rbp-138h]
  char *v58; // [rsp+B0h] [rbp-130h]
  char *v59; // [rsp+B8h] [rbp-128h]
  char *v60; // [rsp+C0h] [rbp-120h]
  char *v61; // [rsp+C8h] [rbp-118h]
  char *v62; // [rsp+D0h] [rbp-110h]
  char *v63; // [rsp+D8h] [rbp-108h]
  char *v64; // [rsp+E0h] [rbp-100h]
  char *v65; // [rsp+E8h] [rbp-F8h]
  char *v66; // [rsp+F0h] [rbp-F0h]
  char *v67; // [rsp+F8h] [rbp-E8h]
  char *v68; // [rsp+100h] [rbp-E0h]
  char *v69; // [rsp+108h] [rbp-D8h]
  char *v70; // [rsp+110h] [rbp-D0h]
  char *v71; // [rsp+118h] [rbp-C8h]
  char *v72; // [rsp+120h] [rbp-C0h]
  char *v73; // [rsp+128h] [rbp-B8h]
  char *v74; // [rsp+130h] [rbp-B0h]
  char *v75; // [rsp+138h] [rbp-A8h]
  char *v76; // [rsp+140h] [rbp-A0h]
  char *v77; // [rsp+148h] [rbp-98h]
  char *v78; // [rsp+150h] [rbp-90h]
  char *v79; // [rsp+158h] [rbp-88h]
  char *v80; // [rsp+160h] [rbp-80h]
  char *v81; // [rsp+168h] [rbp-78h]
  char *v82; // [rsp+170h] [rbp-70h]
  char *v83; // [rsp+178h] [rbp-68h]
  char *v84; // [rsp+180h] [rbp-60h]
  char *v85; // [rsp+188h] [rbp-58h]
  char *v86; // [rsp+190h] [rbp-50h]
  char *v87; // [rsp+198h] [rbp-48h]
  __int64 v89; // [rsp+1A8h] [rbp-38h]

  v1 = this;
  v2 = this;
  v3 = (this + 32536);
  v77 = this + 1856;
  v4 = 0;
  v5 = this + 19924;
  v6 = this;
  v53 = this + 1952;
  v75 = this + 2048;
  v51 = this + 2144;
  v73 = this + 2240;
  v79 = this + 11952;
  v76 = this + 12144;
  v54 = this + 12048;
  v49 = this + 2336;
  v71 = this + 2432;
  v47 = this + 2528;
  v69 = this + 2624;
  v74 = this + 12336;
  v50 = this + 12432;
  v72 = this + 12528;
  v48 = this + 12624;
  v70 = this + 12720;
  v46 = this + 12816;
  v68 = this + 12912;
  v45 = this + 13008;
  v67 = this + 13104;
  v43 = this + 13200;
  v64 = this + 13872;
  v38 = this + 13968;
  v63 = this + 14064;
  v87 = this + 14160;
  v62 = this + 14256;
  v86 = this + 14352;
  v39 = this + 15272;
  v61 = this + 14448;
  v85 = this + 14544;
  v60 = this + 14640;
  v84 = this + 14736;
  v59 = this + 14832;
  v52 = this + 14856;
  v44 = this + 14880;
  v37 = this + 14904;
  v83 = this + 18664;
  v58 = this + 18760;
  v82 = this + 18856;
  v66 = this + 33496;
  v41 = this + 33592;
  v65 = this + 33688;
  v42 = this + 32276;
  v57 = this + 33912;
  v81 = this + 34008;
  v56 = this + 34104;
  v80 = this + 34200;
  v55 = this + 34296;
  v78 = this + 34392;
  v40 = this + 33784;
  do
  {
    *&v77[4 * v4] = 0;
    *&v53[4 * v4] = 0;
    *&v75[4 * v4] = 0;
    *&v51[4 * v4] = 0;
    *&v73[4 * v4] = 0;
    *&v79[4 * v4] = 0;
    *&v76[8 * v4] = 0;
    *&v54[4 * v4] = 0;
    *&v49[4 * v4] = 0;
    *&v71[4 * v4] = 0;
    *&v47[4 * v4] = 0;
    *&v69[4 * v4] = 0;
    for ( i = 0; i != 96; i += 4 )
      *(v2 + i + 2724) = 0;
    LOBYTE(i) = 0;
    do
    {
      *(v2 + i + 5032) = 0;
      i += 4;
    }
    while ( i != 96 );
    LOBYTE(i) = 0;
    do
    {
      *(v2 + i + 7340) = 0;
      i += 4;
    }
    while ( i != 96 );
    LOBYTE(i) = 0;
    do
    {
      *(v2 + i + 9648) = 0;
      i += 4;
    }
    while ( i != 96 );
    *&v74[4 * v4] = 0;
    *&v50[4 * v4] = 0;
    *&v72[4 * v4] = 0;
    *&v48[4 * v4] = 0;
    *&v70[4 * v4] = 0;
    *&v46[4 * v4] = 0;
    *&v68[4 * v4] = 0;
    *&v45[4 * v4] = 0;
    *&v67[4 * v4] = 0;
    *&v43[4 * v4] = 0;
    *&v64[4 * v4] = 0;
    *&v38[4 * v4] = 0;
    *&v63[4 * v4] = 0;
    *&v87[4 * v4] = 0;
    *&v62[4 * v4] = 0;
    *&v86[4 * v4] = 0;
    *&v39[4 * v4] = 0;
    for ( j = 0; j != 300; j += 12 )
    {
      *&v5[j] = 0;
      *&v5[j + 4] = 0;
    }
    v89 = v4;
    *&v61[4 * v4] = 0;
    *&v85[4 * v4] = 0;
    *&v60[4 * v4] = 0;
    *(v6 + 3987) = 0;
    *(v6 + 3988) = 0;
    *(v6 + 3989) = 0;
    *(v6 + 3990) = 0;
    *(v6 + 3991) = 0;
    *&v84[4 * v4] = 0;
    v59[v4] = 0;
    v52[v4] = 0;
    v44[v4] = 0;
    v37[v4] = 0;
    *&v83[4 * v4] = 0;
    *&v58[4 * v4] = 0;
    *&v82[4 * v4] = 0;
    CUtlRBTree<CUtlMap<int,int,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short,CUtlMap<int,int,unsigned short,bool (*)(int const&,int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,int,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short>,unsigned short>>::RemoveAll(v3);
    *&v66[4 * v89] = 0;
    *&v41[4 * v89] = 0;
    *&v65[4 * v89] = 0;
    *(this + v89 + 7981) = 0;
    v9 = (v1 + 27124);
    do
      *v9++ = 0;
    while ( v9 != (v1 + 27224) );
    v10 = (v1 + 29524);
    do
      *v10++ = 0;
    while ( v10 != (v1 + 29624) );
    v1 = (v1 + 100);
    v6 = (v6 + 24);
    ++v3;
    v5 += 300;
    v2 = (v2 + 96);
    *&v42[4 * v89] = 0;
    *&v57[4 * v89] = 0;
    *&v81[4 * v89] = 0;
    *&v56[4 * v89] = 0;
    *&v80[4 * v89] = 0;
    *&v55[4 * v89] = 0;
    *&v78[4 * v89] = 0;
    *&v40[4 * v89] = 0;
    v4 = v89 + 1;
  }
  while ( v89 != 23 );
  for ( k = 0; k != 256; k += 4 )
    *(this + k + 996) = -1;
  if ( *(this + 248) != 0 )
  {
    (*(*this + 176LL))(this, 992, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    *(this + 248) = 0;
  }
  v12 = *(this + 194);
  *(this + 4822) = 0;
  *(this + 4823) = 0;
  *(this + 18544) = 0;
  *(this + 4662) = 0;
  *(this + 4663) = 0;
  *(this + 4664) = 0;
  *(this + 4665) = 0;
  if ( v12 > 0 )
  {
    CUtlVectorEmbeddedNetworkVar<PlayerResourcePlayerTeamData_t,CDOTA_PlayerResource::NetworkVar_m_vecPlayerTeamData,-1>::Resolve((this + 776));
    if ( *(this + 840) == 0 )
      EntityInstanceSetNetworkStateChanged(*(this + 100));
  }
  CUtlVectorBase<PlayerResourcePlayerTeamData_t,CNetworkUtlVector_MemoryType<PlayerResourcePlayerTeamData_t,-1>>::RemoveAll((this + 776));
  if ( (*(this + 199) & 0xC0000000) == 0 )
    CUtlMemory<PlayerResourcePlayerTeamData_t,int>::Purge(this + 49);
  v13 = *(this + 104);
  if ( v13 != 0 )
  {
    v14 = v13[1];
    v15 = (v13[2] + *v13);
    if ( (v14 & 1) != 0 )
      v14 = *(v14 + *v15 - 1);
    v14(v15);
  }
  if ( *(this + 212) > 0 )
  {
    CUtlVectorEmbeddedNetworkVar<PlayerResourcePlayerData_t,CDOTA_PlayerResource::NetworkVar_m_vecPlayerData,-1>::Resolve((this + 848));
    if ( *(this + 912) == 0 )
      EntityInstanceSetNetworkStateChanged(*(this + 109));
  }
  CUtlVectorBase<PlayerResourcePlayerData_t,CNetworkUtlVector_MemoryType<PlayerResourcePlayerData_t,-1>>::RemoveAll((this + 848));
  if ( (*(this + 217) & 0xC0000000) == 0 )
    CUtlMemory<PlayerResourcePlayerData_t,int>::Purge((this + 856));
  v16 = *(this + 113);
  if ( v16 != 0 )
  {
    v17 = v16[1];
    v18 = (v16[2] + *v16);
    if ( (v17 & 1) != 0 )
      v17 = *(v17 + *v18 - 1);
    v17(v18);
  }
  if ( *(this + 230) > 0 )
  {
    CUtlVectorEmbeddedNetworkVar<PlayerResourceBroadcasterData_t,CDOTA_PlayerResource::NetworkVar_m_vecBrodcasterData,-1>::Resolve((this + 920));
    if ( *(this + 984) == 0 )
      EntityInstanceSetNetworkStateChanged(*(this + 118));
  }
  CUtlVectorBase<PlayerResourceBroadcasterData_t,CNetworkUtlVector_MemoryType<PlayerResourceBroadcasterData_t,-1>>::RemoveAll((this + 920));
  if ( (*(this + 235) & 0xC0000000) == 0 )
    CUtlMemory<PlayerResourceBroadcasterData_t,int>::Purge(this + 58);
  v19 = *(this + 122);
  if ( v19 != 0 )
  {
    v20 = v19[1];
    v21 = (v19[2] + *v19);
    if ( (v20 & 1) != 0 )
      v20 = *(v20 + *v21 - 1);
    v20(v21);
  }
  if ( *(this + 198) <= 23 )
  {
    v22 = *(this + 199);
    if ( (v22 & 0x40000000) == 0 )
    {
      if ( (v22 & 0xC0000000) != 0 )
      {
        v33 = *(this + 98);
        v34 = (**g_pMemAlloc)(g_pMemAlloc, 4800);
        *(this + 98) = v34;
        if ( v33 != 0 )
          memcpy(v34, v33, 200LL * *(this + 198));
        *(this + 199) &= 0x3FFFFFFFu;
      }
      else
      {
        v23 = *(this + 98);
        v24 = *g_pMemAlloc;
        if ( v23 != 0 )
          *(this + 98) = (*(v24 + 8))(g_pMemAlloc, v23, 4800);
        else
          *(this + 98) = (*v24)(g_pMemAlloc, 4800);
      }
      *(this + 198) = 24;
    }
  }
  if ( *(this + 216) <= 63 )
  {
    v25 = *(this + 217);
    if ( (v25 & 0x40000000) == 0 )
    {
      if ( (v25 & 0xC0000000) != 0 )
      {
        v35 = *(this + 107);
        v36 = (**g_pMemAlloc)(g_pMemAlloc, 4608);
        *(this + 107) = v36;
        if ( v35 != 0 )
          memcpy(v36, v35, 72LL * *(this + 216));
        *(this + 217) &= 0x3FFFFFFFu;
      }
      else
      {
        v26 = *(this + 107);
        v27 = *g_pMemAlloc;
        if ( v26 != 0 )
          *(this + 107) = (*(v27 + 8))(g_pMemAlloc, v26, 4608);
        else
          *(this + 107) = (*v27)(g_pMemAlloc, 4608);
      }
      *(this + 216) = 64;
    }
  }
  if ( *(this + 234) <= 5 )
  {
    v28 = *(this + 235);
    if ( (v28 & 0x40000000) == 0 )
    {
      if ( (v28 & 0xC0000000) != 0 )
      {
        v31 = *(this + 116);
        v32 = (**g_pMemAlloc)(g_pMemAlloc, 288);
        *(this + 116) = v32;
        if ( v31 != 0 )
          memcpy(v32, v31, 48LL * *(this + 234));
        *(this + 235) &= 0x3FFFFFFFu;
      }
      else
      {
        v29 = *(this + 116);
        v30 = *g_pMemAlloc;
        if ( v29 != 0 )
          *(this + 116) = (*(v30 + 8))(g_pMemAlloc, v29, 288);
        else
          *(this + 116) = (*v30)(g_pMemAlloc, 288);
      }
      *(this + 234) = 6;
    }
  }
}


// CDOTA_PlayerResource::ResetLeaverStatus  (line 217, @0x000000000265cf80, libserver.so)
void __fastcall CDOTA_PlayerResource::ResetLeaverStatus(CDOTA_PlayerResource *const this)
{
  char *v1; // r13
  _QWORD *v2; // r12
  __int64 v3; // rbx
  _QWORD *v4; // rdi
  __int64 v5; // rax

  v1 = this + 17488;
  v2 = (this + 17584);
  v3 = 0;
  *(this + 17484) = 0;
  do
  {
    *&v1[v3] = 1;
    v4 = v2;
    v3 += 4;
    v5 = *v2;
    v2 += 5;
    (*(v5 + 32))(v4);
  }
  while ( v3 != 96 );
}


// CDOTA_PlayerResource::UpdateOnRemove  (line 230, @0x0000000002674270, libserver.so)  // inlines: CVariantBase, Free, RemoveInstance, ~CVariantBase
// calls: CBaseEntity::UpdateOnRemove, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
void __fastcall CDOTA_PlayerResource::UpdateOnRemove(CDOTA_PlayerResource *const this)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v4; // r14
  __int64 v5; // [rsp+0h] [rbp-30h] BYREF
  __int16 v6; // [rsp+8h] [rbp-28h]
  __int16 v7; // [rsp+Ah] [rbp-26h]

  if ( g_pVScriptGameSystem != 0 && (*(g_pVScriptGameSystem->_vptr_IVScriptGameSystem + 4))(g_pVScriptGameSystem) != 0 )
  {
    v2 = (*(g_pVScriptGameSystem->_vptr_IVScriptGameSystem + 4))(g_pVScriptGameSystem);
    v6 = 0;
    v3 = v2;
    v7 = 0;
    v5 = 0;
    if ( (*(*v2 + 312LL))(v2, 0, "PlayerResource", &v5) != 0 && v6 == 31 )
    {
      v4 = v5;
      (*(*v3 + 352LL))(v3, 0, "PlayerResource");
      (*(*v3 + 200LL))(v3, v4);
    }
    if ( (v7 & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v5);
  }
  CBaseEntity::UpdateOnRemove(this);
}


// CDOTA_PlayerResource::ClearTotalPlayerDamageMatrix  (line 242, @0x000000000265cfe0, libserver.so)
void __fastcall CDOTA_PlayerResource::ClearTotalPlayerDamageMatrix(CDOTA_PlayerResource *const this, int iPlayerID)
{
  __int64 i; // rax

  for ( i = 0; i != 96; i += 4 )
    *(this + 96 * iPlayerID + i + 2724) = 0;
}


// CDOTA_PlayerResource::ClearRawPlayerDamageMatrix  (line 252, @0x0000000002653c10, libserver.so)
void __fastcall CDOTA_PlayerResource::ClearRawPlayerDamageMatrix(CDOTA_PlayerResource *const this, int iPlayerID)
{
  __int64 i; // rax

  for ( i = 0; i != 96; i += 4 )
    *(this + 96 * iPlayerID + i + 5032) = 0;
}


// CDOTA_PlayerResource::ClearKillsMatrix  (line 262, @0x0000000002653c50, libserver.so)
void __fastcall CDOTA_PlayerResource::ClearKillsMatrix(CDOTA_PlayerResource *const this, int iPlayerID)
{
  __int64 i; // rax

  for ( i = 0; i != 96; i += 4 )
    *(this + 96 * iPlayerID + i + 7340) = 0;
}


// CDOTA_PlayerResource::GetKillListForPlayer  (line 272, @0x000000000265d020, libserver.so)  // inlines: IsValidTeamPlayerID
// callers: CDOTAGCServerSystem::WriteMatchMetadataTeamPlayer
CUtlArray<int,24ul> *__fastcall CDOTA_PlayerResource::GetKillListForPlayer(
        CDOTA_PlayerResource *const this,
        int iPlayerID)
{
  CUtlArray<int,24ul> *result; // rax

  result = 0;
  if ( iPlayerID >= 0 && iPlayerID < *(this + 194) )
    return (this + 96 * iPlayerID + 7340);
  return result;
}


// CDOTA_PlayerResource::GetHighestKilledPlayerID  (line 285, @0x000000000265d050, libserver.so)
int __fastcall CDOTA_PlayerResource::GetHighestKilledPlayerID(CDOTA_PlayerResource *const this, int iPlayerID)
{
  __int64 v2; // rdx
  __int64 v3; // rax
  int v4; // esi
  char *v5; // rdi
  int result; // eax

  v2 = 0;
  v3 = 3LL * iPlayerID;
  v4 = 0;
  v5 = this + 32 * v3 + 7340;
  result = -1;
  do
  {
    if ( *&v5[4 * v2] >= v4 )
    {
      result = v2;
      v4 = *&v5[4 * v2];
    }
    ++v2;
  }
  while ( v2 != 24 );
  return result;
}


// CDOTA_PlayerResource::GetHighestKilledPlayerKills  (line 304, @0x000000000265d090, libserver.so)  // inlines: GetHighestKilledPlayerID
// callers: CDOTA_RealtimeCombatAnalyzer::PerformStorageForEvent, CDOTA_RealtimeCombatAnalyzer::EvaluateGameState
int __fastcall CDOTA_PlayerResource::GetHighestKilledPlayerKills(CDOTA_PlayerResource *const this, int iPlayerID)
{
  int v2; // ecx
  char *v3; // rsi
  __int64 v4; // rax
  __int64 v5; // rdi

  v2 = 0;
  v3 = this + 96 * iPlayerID + 7340;
  v4 = 0;
  v5 = -1;
  do
  {
    if ( *&v3[4 * v4] >= v2 )
    {
      v5 = v4;
      v2 = *&v3[4 * v4];
    }
    ++v4;
  }
  while ( v4 != 24 );
  if ( v5 == -1 )
    return 0;
  else
    return *&v3[4 * v5];
}


// CDOTA_PlayerResource::ClearAssistsMatrix  (line 315, @0x000000000265d0e0, libserver.so)
void __fastcall CDOTA_PlayerResource::ClearAssistsMatrix(CDOTA_PlayerResource *const this, int iPlayerID)
{
  __int64 i; // rax

  for ( i = 0; i != 96; i += 4 )
    *(this + 96 * iPlayerID + i + 9648) = 0;
}


// CDOTA_PlayerResource::IsValidTeamPlayerID  (line 325, @0x0000000002653c90, libserver.so)
// callers: CDOTAGamerules::NumHumanPlayers, CDOTAGamerules::BroadcastItemDropBonusStatus, CDOTAGamerules::PrecacheNextARDMHeroForPlayer, CDOTAGamerules::OnARDMDuringMatchSpawnComplete, CDOTAGamerules::HeroPickState_Enter_Ability_Draft_SELECT, CDOTAGamerules::State_Enter_HERO_SELECTION, CDOTAGamerules::State_Enter_POST_GAME, DOTA_CreateItem, CDOTAHeroList::TriggerFirstBlood, CDOTAHeroList::GiveNearbyHeroGoldBonus, CDOTA_BaseNPC_Hero::KilledHero, CDOTAGCServerSystem::SendMatchDetailsToClients (15 total)
bool __fastcall CDOTA_PlayerResource::IsValidTeamPlayerID(const CDOTA_PlayerResource *const this, int iPlayerID)
{
  bool result; // al

  result = 0;
  if ( iPlayerID >= 0 )
    return iPlayerID < *(this + 194);
  return result;
}


// CDOTA_PlayerResource::NumTeamPlayers  (line 332, @0x000000000265d120, libserver.so)
// callers: CDOTA_CombatLog::GetHeroForName, DOTA_CombatLog_Record::FindPlayerIDForName, CDOTA_DataNonSpectator::ChangeTeam, CDOTACustomGameEvents::InputLevelAllHeroesUpOnce, CDOTAGamerules::SetupRepick, DOTAPrintPlayerStatus, CDOTAGamerules::HeroPickState_Enter_ARDM_SELECT, CDOTAGamerules::HeroPickState_Enter_FH_SELECT, CDOTAGamerules::HeroPickState_Enter_CUSTOMGAME_SELECT, CDOTAGamerules::HeroPickState_Leave_CM_PICK, CDOTAGamerules::HeroPickState_Leave_CD_PICK, CDOTAGamerules::HeroPickState_Enter_AR_SELECT (20 total)
int __fastcall CDOTA_PlayerResource::NumTeamPlayers(const CDOTA_PlayerResource *const this)
{
  return *(this + 194);
}


// CDOTA_PlayerResource::IsValidPlayerID  (line 339, @0x0000000002653cb0, libserver.so)
// callers: CDOTA_Item_BagOfGold::OnSpellStart, CDOTA_CombatLog::AddEndGameStatsEvent, CDOTA_CombatLog::AddAlliedGoldEvent, CDOTA_CombatLog::AddAegisTakenEvent, CDOTA_CombatLog::AddTreeCutDownEvent, CDOTA_CombatLog::AddSuccessfulScanEvent, CDOTAGamerules::ClientConnected, CVoiceGameMgrHelper::SetPlayerListenerState, CDOTAGamerules::ResetSelectedHeroes, TournamentItemEvent, CDOTAGamerules::PrecacheNextARDMHeroForPlayer, CDOTAGamerules::OnARDMDuringMatchSpawnComplete (16 total)
bool __fastcall CDOTA_PlayerResource::IsValidPlayerID(const CDOTA_PlayerResource *const this, int iPlayerID)
{
  bool result; // al

  result = 0;
  if ( iPlayerID >= 0 )
    return iPlayerID < *(this + 212);
  return result;
}


// CDOTA_PlayerResource::NumPlayers  (line 346, @0x000000000265d130, libserver.so)
// callers: CDOTA_BaseNPC::GetEconSpecifyingPlayerID, CVoiceGameMgrHelper::CanPlayerHearPlayer, CDOTAGamerules::CalcNumLoadingPlayersAndFailure, CDOTAGamerules::WaitForPlayersFailure, CDOTAGamerules::ClientDisconnected
int __fastcall CDOTA_PlayerResource::NumPlayers(const CDOTA_PlayerResource *const this)
{
  return *(this + 212);
}


// CDOTA_PlayerResource::ResourceThink  (line 377, @0x000000000266f000, libserver.so)  // inlines: DOTAGameRules, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetLobby, IndexToIdentity, IsAppDota2Main, IsGamePaused, IsValid, LookupEntity, ToDOTABaseNPC, curtime, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_PlayerResource::FlushPlayerResourceRequests, GDOTAGCClientSystem, CDOTA_PlayerResource::GetPlayerSelectedHeroHandle, CDOTA_CombatLog::AddLocationEvent, SetAppID, CBaseEntity::SetNextThink
// globals: CEntityHandle::gm_pEntityList, g_iGameAppID
void __fastcall CDOTA_PlayerResource::ResourceThink(CDOTA_PlayerResource *const this)
{
  __int64 v2; // rax
  double v3; // xmm1_8
  CGlobalVars *v4; // rax
  CGlobalVars *v5; // r14
  CGlobalVars *v6; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rdx
  float m_flCurrentTime; // xmm0_4
  void (__fastcall *v9)(__int64); // rax
  float v10; // xmm0_4
  int v11; // r12d
  int v12; // r11d
  CEntityIdentity *v13; // rdx
  CEntityIdentity *v14; // rdx
  CDOTA_BaseNPC *m_pInstance; // rsi
  double v16; // xmm0_8
  void (__fastcall *v17)(__int64); // rax
  _DWORD v18[12]; // [rsp+0h] [rbp-30h] BYREF

  (*(*this + 1664LL))(this);
  CDOTA_PlayerResource::FlushPlayerResourceRequests(this);
  v2 = *(GDOTAGCClientSystem() + 260);
  if ( v2 != 0 && *(v2 + 264) != 0 || (SetAppID(), g_iGameAppID == 816) )
  {
    v4 = gpGlobals;
    v5 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      v6 = gpGlobals;
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        v6 = gpGlobals;
        if ( m_pfnWarningFunc != 0 )
        {
          m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
          v6 = gpGlobals;
          v4 = gpGlobals;
        }
      }
      m_flCurrentTime = v5->m_flCurrentTime;
    }
    else
    {
      v6 = 0;
      m_flCurrentTime = 0.0;
    }
    if ( m_flCurrentTime > *(this + 8471) && (g_pGameRules == 0 || g_pGameRules[19].m_szQuestName[29] == 0) )
    {
      if ( v4 != 0 )
      {
        if ( !v6->m_bEnableAssertions && !v6->m_bInSimulation )
        {
          v9 = v6->m_pfnWarningFunc;
          if ( v9 != 0 )
            v9(1);
        }
        v10 = v6->m_flCurrentTime;
      }
      else
      {
        v10 = 0.0;
      }
      v11 = 0;
      v12 = *(this + 194);
      *(this + 8471) = v10 + dota_combatlog_location_interval.m_pParent->m_Value.m_fValue;
      if ( v12 > 0 )
      {
        do
        {
          while ( 1 )
          {
            CDOTA_PlayerResource::GetPlayerSelectedHeroHandle(v18, this, v11);
            if ( (v18[0] + 2) > 1 )
            {
              v13 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v18[0]) >> 9) & 0x3F];
              if ( v13 != 0 )
              {
                v14 = &v13[v18[0] & 0x1FF];
                if ( v14 != 0 && v18[0] == v14->m_EHandle.m_Index )
                {
                  m_pInstance = v14->m_pInstance;
                  if ( v14->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
                    break;
                }
              }
            }
            if ( ++v11 >= *(this + 194) )
              goto LABEL_28;
          }
          ++v11;
          CDOTA_CombatLog::AddLocationEvent(g_pDOTACombatLog, m_pInstance);
        }
        while ( v11 < *(this + 194) );
      }
LABEL_28:
      v6 = gpGlobals;
      if ( gpGlobals != 0 )
        goto LABEL_33;
LABEL_29:
      *&v16 = 1036831949;
      goto LABEL_38;
    }
  }
  else
  {
    v6 = gpGlobals;
    v4 = gpGlobals;
  }
  if ( v4 == 0 )
    goto LABEL_29;
LABEL_33:
  if ( !v6->m_bEnableAssertions && !v6->m_bInSimulation )
  {
    v17 = v6->m_pfnWarningFunc;
    if ( v17 != 0 )
      v17(1);
  }
  HIDWORD(v16) = 0;
  *&v16 = v6->m_flCurrentTime + 0.1;
LABEL_38:
  CBaseEntity::SetNextThink(this, v16, v3, 0);
}


// CDOTA_PlayerResource::InitPlayersWithLobby  (line 405, @0x000000000269b8f0, libserver.so)  // inlines: Get, Get<google::protobuf::RepeatedPtrField<CMsgLobbyEventPoints_AccountPoints>::TypeHandler>, Get<google::protobuf::RepeatedPtrField<CSODOTALobby_CExtraMsg>::TypeHandler>, GetAccountID, GetExtraMessage<CMsgLobbyBattleCupVictoryList>, GetExtraMessage<CMsgLobbyEventPoints>, GetGameMode, IsAddOnGame, IsValidPlayerID, NetworkStateChanged, Set, _M_data, account_points, c_str, end, extra_messages, operator*, operator=<unsigned int>, team, ~basic_string
// calls: CMsgLobbyEventPoints::CMsgLobbyEventPoints, CDOTALobby::FindFirstExtraMessage, google::protobuf::MessageLite::ParseFromString(std::string const&), CDOTALobby::GetFullNumMembers, CDOTALobby::GetFullMemberDetails, CDOTA_PlayerResource::FindOrCreatePlayerID, CDOTA_PlayerResource::SetPlayerName, CDOTA_PlayerResource::UpdateTeamSlot, CDOTA_PlayerResource::SetCoachTeam, CDOTA_PlayerResource::SetEventPoints, CMsgLobbyBattleCupVictoryList::CMsgLobbyBattleCupVictoryList, LoggingSystem_IsChannelEnabled (23 total)
// callers: CDOTA_PlayerResource::Spawn, CDOTAGCServerSystem::FinishActivateServerFromLobby
// strings: "Parsing CMsgBattleCupVictory: %s\n", "Lobby has CMsgBattleCupVictory with %d winners\n"
// globals: CSWTCH.15183
void __fastcall CDOTA_PlayerResource::InitPlayersWithLobby(CDOTA_PlayerResource *const this, const CDOTALobby *pLobby)
{
  int FirstExtraMessage; // eax
  CDOTALobby::FullMemberIndex_t v5; // r14d
  const CDOTALobbyMember *FullMemberDetails; // rax
  const CDOTALobbyMember *v7; // rbx
  uint64 v8; // rsi
  int v9; // edx
  int v10; // eax
  __int64 v11; // rax
  int v12; // eax
  int v13; // ecx
  int v14; // eax
  int v15; // r13d
  __int64 v16; // r12
  int i; // ebx
  __int64 v18; // rax
  int v19; // eax
  __int64 v20; // rbx
  AccountID_t **v21; // rbx
  AccountID_t **v22; // r14
  AccountID_t *v23; // r12
  int PlayerIDByAccountID; // eax
  bool bHasEventInfo; // [rsp+27h] [rbp-D9h]
  CDOTALobby::FullMemberIndex_t v26; // [rsp+28h] [rbp-D8h]
  int playerID; // [rsp+38h] [rbp-C8h]
  char v29; // [rsp+4Fh] [rbp-B1h] BYREF
  const char *v30; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v31[24]; // [rsp+60h] [rbp-A0h] BYREF
  AccountID_t **v32; // [rsp+78h] [rbp-88h]
  int v33; // [rsp+80h] [rbp-80h]
  _BYTE v34[24]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v35; // [rsp+A8h] [rbp-58h]
  int v36; // [rsp+B0h] [rbp-50h]
  int v37; // [rsp+C0h] [rbp-40h]

  CMsgLobbyEventPoints::CMsgLobbyEventPoints(v34);
  FirstExtraMessage = CDOTALobby::FindFirstExtraMessage(pLobby, 0x1D94u);
  if ( FirstExtraMessage != -1
    && google::protobuf::MessageLite::ParseFromString(v34, *(*(*(pLobby + 45) + 8LL * FirstExtraMessage) + 24LL)) != 0
    && v37 == 16 )
  {
    if ( *(this + 248) != 16 )
    {
      (*(*this + 176LL))(this, 992, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      *(this + 248) = 16;
    }
    bHasEventInfo = 1;
  }
  else
  {
    bHasEventInfo = 0;
  }
  v26.m_nIndex = CDOTALobby::GetFullNumMembers(pLobby).m_nIndex;
  if ( v26.m_nIndex != 0 )
  {
    for ( v5.m_nIndex = 0; v5.m_nIndex != v26.m_nIndex; ++v5.m_nIndex )
    {
      FullMemberDetails = CDOTALobby::GetFullMemberDetails(pLobby, v5);
      v7 = FullMemberDetails;
      if ( FullMemberDetails != 0 )
      {
        v8 = *(FullMemberDetails + 3);
        if ( v8 != 0 )
        {
          playerID = CDOTA_PlayerResource::FindOrCreatePlayerID(this, v8, 0, *(FullMemberDetails + 9) <= 1u);
          CDOTA_PlayerResource::SetPlayerName(this, playerID, **(v7 + 5));
          v9 = 5;
          v10 = *&g_pGameRules[6].m_szQuestName[68];
          if ( v10 != 15 && v10 != 19 )
          {
            v11 = *(v7 + 9);
            if ( v11 <= 4 )
              v9 = CSWTCH_15183[v11];
          }
          v12 = *(v7 + 14);
          v13 = v12 - 1;
          if ( v12 == 0 )
            v13 = -1;
          CDOTA_PlayerResource::UpdateTeamSlot(this, playerID, v9, v13);
          *(this + playerID + 8005) = *(v7 + 30);
          if ( *(v7 + 9) == 2 )
          {
            CDOTA_PlayerResource::SetBroadcaster(this, playerID, 1);
            CDOTA_PlayerResource::SetBroadcasterChannel(this, playerID, *(v7 + 20), *(v7 + 14), *(v7 + 184));
          }
          v14 = *(v7 + 31);
          if ( v14 != 0 )
          {
            if ( v14 == 1 )
              CDOTA_PlayerResource::SetCoachTeam(this, playerID, DOTATeam_t::DOTA_TEAM_BADGUYS);
            else
              CDOTA_PlayerResource::SetCoachTeam(this, playerID, -1);
          }
          else
          {
            CDOTA_PlayerResource::SetCoachTeam(this, playerID, DOTATeam_t::DOTA_TEAM_FIRST);
          }
          if ( bHasEventInfo )
          {
            v15 = *(v7 + 6);
            if ( v36 > 0 )
            {
              v16 = 0;
              for ( i = 0; i < v36; ++i )
              {
                while ( 1 )
                {
                  v18 = *(v35 + v16);
                  if ( *(v18 + 24) == v15 )
                    break;
                  ++i;
                  v16 += 8;
                  if ( i >= v36 )
                    goto LABEL_25;
                }
                CDOTA_PlayerResource::SetEventPoints(
                  this,
                  playerID,
                  *(v18 + 36),
                  *(v18 + 28),
                  *(v18 + 32),
                  0,
                  *(v18 + 60),
                  *(v18 + 72),
                  *(v18 + 64));
                v16 += 8;
              }
            }
          }
        }
      }
LABEL_25:
      ;
    }
  }
  v19 = CDOTALobby::FindFirstExtraMessage(pLobby, 0x1FFAu);
  v20 = v19;
  if ( v19 != -1 )
  {
    CMsgLobbyBattleCupVictoryList::CMsgLobbyBattleCupVictoryList(v31);
    if ( google::protobuf::MessageLite::ParseFromString(v31, *(*(*(pLobby + 45) + 8 * v20) + 24LL)) != 0 )
    {
      if ( LoggingSystem_IsChannelEnabled(LOG_SERVER, 1) != 0 )
        LoggingSystem_Log(LOG_SERVER, 1, "Lobby has CMsgBattleCupVictory with %d winners\n", v33);
      v21 = v32;
      v22 = &v32[v33];
      if ( v32 != v22 )
      {
        do
        {
          v23 = *v21;
          if ( LoggingSystem_IsChannelEnabled(LOG_SERVER, 1) != 0 )
          {
            google::protobuf::Message::ShortDebugString(&v30);
            LoggingSystem_Log(LOG_SERVER, 1, "Parsing CMsgBattleCupVictory: %s\n", v30);
            std::string::_Rep::_M_dispose(v30 - 24, &v29);
          }
          PlayerIDByAccountID = CDOTA_PlayerResource::GetPlayerIDByAccountID(this, v23[6]);
          if ( PlayerIDByAccountID >= 0 && PlayerIDByAccountID < *(this + 212) )
            CDOTA_PlayerResource::SetBattleCupVictory(this, PlayerIDByAccountID, v23);
          ++v21;
        }
        while ( v22 != v21 );
      }
    }
    CMsgLobbyBattleCupVictoryList::~CMsgLobbyBattleCupVictoryList(v31);
  }
  CDOTA_PlayerResource::FlushPlayerResourceRequests(this);
  CMsgLobbyEventPoints::~CMsgLobbyEventPoints(v34);
}


// CDOTA_PlayerResource::DataTeamSpawn  (line 498, @0x00000000026649b0, libserver.so)  // inlines: GetLobby, IsValid
// calls: GDOTAGCClientSystem, CDOTA_PlayerResource::GetPlayerIDBySteamID, CDOTAGCServerSystem::GetTeamForLobbyMember, CDOTA_PlayerResource::SetMetaExperience
// callers: CDOTA_DataNonSpectator::ChangeTeam
void __fastcall CDOTA_PlayerResource::DataTeamSpawn(
        CDOTA_PlayerResource *const this,
        CDOTA_DataNonSpectator *pTeamData,
        int iTeamNum)
{
  __int64 v5; // r15
  unsigned int i; // ebx
  char v7; // dl
  int PlayerIDBySteamID; // r12d
  CDOTAGCServerSystem *v9; // rax
  __int64 v10; // rax
  CSteamID steamID; // [rsp+10h] [rbp-40h] BYREF

  v5 = *(GDOTAGCClientSystem() + 260);
  if ( v5 != 0 )
  {
    for ( i = 0; ; ++i )
    {
      if ( i >= (*(*v5 + 96LL))(v5) )
        return;
      steamID.m_steamid.m_comp = (*(*v5 + 104LL))(v5, i);
      v7 = BYTE6(steamID.m_steamid.m_unAll64Bits) & 0xF0;
      if ( (steamID.m_steamid.m_unAll64Bits & 0xF0000000000000LL) != 0
        && BYTE6(steamID.m_steamid.m_unAll64Bits) <= 0xAFu
        && (HIBYTE(steamID.m_steamid.m_unAll64Bits) - 1) <= 3u )
      {
        if ( v7 == 16 )
        {
          if ( steamID.m_steamid.m_comp == 0 || (*(&steamID.m_steamid.m_comp + 1) & 0xFFFFFu) > 4 )
            continue;
        }
        else if ( v7 == 112 )
        {
          if ( steamID.m_steamid.m_comp == 0 || (*(&steamID.m_steamid.m_comp + 1) & 0xFFFFF) != 0 )
            continue;
        }
        else if ( v7 == 48 && steamID.m_steamid.m_comp == 0 )
        {
          continue;
        }
        PlayerIDBySteamID = CDOTA_PlayerResource::GetPlayerIDBySteamID(this, steamID.m_steamid.m_unAll64Bits);
        if ( PlayerIDBySteamID != -1 )
        {
          v9 = GDOTAGCClientSystem();
          if ( CDOTAGCServerSystem::GetTeamForLobbyMember(v9, &steamID) == iTeamNum )
          {
            v10 = (*(*v5 + 136LL))(v5, i);
            if ( v10 != 0 && *(v10 + 124) == 5 )
              CDOTA_PlayerResource::SetMetaExperience(this, PlayerIDBySteamID, *(v10 + 60), *(v10 + 64), *(v10 + 68));
          }
        }
      }
    }
  }
}


// CDOTA_PlayerResource::InitBroadcasterChannelsWithLobby  (line 537, @0x00000000026922e0, libserver.so)  // inlines: _M_data, c_str
// calls: CDOTALobby::FindBroadcastChannelInfo, CDOTA_PlayerResource::SetBroadcasterChannelInfo
// callers: CDOTA_PlayerResource::Spawn, CDOTAGCServerSystem::FinishActivateServerFromLobby
void __fastcall CDOTA_PlayerResource::InitBroadcasterChannelsWithLobby(
        CDOTA_PlayerResource *const this,
        const CDOTALobby *pLobby)
{
  uint32 v4; // ebx
  const char ***BroadcastChannelInfo; // rax

  v4 = 0;
  if ( *(pLobby + 82) > 0 )
  {
    do
    {
      BroadcastChannelInfo = CDOTALobby::FindBroadcastChannelInfo(pLobby, v4);
      if ( BroadcastChannelInfo != 0 )
        CDOTA_PlayerResource::SetBroadcasterChannelInfo(
          this,
          v4,
          *BroadcastChannelInfo[4],
          *BroadcastChannelInfo[3],
          *BroadcastChannelInfo[5]);
      ++v4;
    }
    while ( v4 != 6 );
  }
}


// CDOTA_PlayerResource::UpdatePlayerData  (line 554, @0x0000000002684270, libserver.so)  // inlines: DOTAGameRules, Element, Get, GetBinaryObject, GetEntityIdentity, GetEntryIndex, GetGameTime, GetInstance, GetLevel, IndexToIdentity, IsValid, LookupEntity, NetworkStateChanged, Set, ToDOTABaseNPC, ToDOTABaseNPCHero, entindex, operator CBaseEntity*, operator CEntityInstance*, operator=<bool>, operator=<int>, operator[]
// calls: Plat_FloatTime, CDOTA_PlayerResource::GetPlayer, CDOTAPlayer::IsAFK, CEntityInstance::GetEntityIndex, CDOTA_PlayerResource::ComputeNetWorth, CBaseEntity::GetAbsOrigin, CDOTAFogOfWarSystem::IsLocationVisible, CUtlVectorBase<sPendingTreeRemoval, CUtlMemory<sPendingTreeRemoval, int> >::Remove, CDOTA_PlayerResource::SetWorldTreeState
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_PlayerResource::UpdatePlayerData(CDOTA_PlayerResource *const this)
{
  __int64 v1; // r14
  int v2; // r13d
  CDOTAPlayer *Player; // rax
  const CEntityInstance *v5; // r15
  char IsAFK; // al
  _QWORD *v7; // rdi
  CEntityIndex v8; // eax
  __int64 v9; // rax
  int v10; // esi
  __int64 v11; // r12
  int v12; // eax
  CEntityIdentity *v13; // rdx
  CEntityIdentity *v14; // rdx
  CEntityInstance *m_pInstance; // r15
  int m_hScope_high; // eax
  _QWORD *v17; // rdi
  char v18; // al
  int v19; // r8d
  _QWORD *v20; // rdi
  int i; // r12d
  CDOTA_BinaryObject *v22; // rdi
  const Vector *AbsOrigin; // rax
  __int64 v24; // r15
  __int64 v25; // rax
  int v26; // esi
  int v27; // r12d
  __int64 v28; // r15
  float v29; // xmm0_4
  double now; // [rsp+0h] [rbp-40h]
  char v31; // [rsp+8h] [rbp-38h]
  __int64 (__fastcall *v32)(IVEngineServer2 *, _QWORD); // [rsp+8h] [rbp-38h]
  int v33; // [rsp+8h] [rbp-38h]
  int v34; // [rsp+8h] [rbp-38h]

  v1 = 0;
  v2 = 0;
  for ( now = Plat_FloatTime(); v2 < *(this + 194); v1 += 200 )
  {
    v11 = *(this + 98) + v1;
    v12 = *(v11 + 52);
    if ( (v12 + 2) > 1 )
    {
      v13 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(*(v11 + 52) >> 9) & 0x3F];
      if ( v13 != 0 )
      {
        v14 = &v13[*(v11 + 52) & 0x1FF];
        if ( v14 != 0 && v12 == v14->m_EHandle.m_Index )
        {
          m_pInstance = v14->m_pInstance;
          if ( v14->m_pInstance != 0
            && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
            && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
          {
            m_hScope_high = HIDWORD(m_pInstance[44].m_hPrivateScope.m_hScope);
            if ( m_hScope_high != *(v11 + 40) )
            {
              v17 = *(v11 + 8);
              if ( v17 != 0 && (*(v17[1] + 49LL) & 4) == 0 && *(v11 + 16) != 0xFFFF )
              {
                v33 = HIDWORD(m_pInstance[44].m_hPrivateScope.m_hScope);
                (*(*v17 + 176LL))(v17, 40, 0xFFFFFFFFLL, *(v11 + 16));
                m_hScope_high = v33;
              }
              *(v11 + 40) = m_hScope_high;
            }
            v18 = (*(m_pInstance->_vptr_IHandleEntity + 408))(m_pInstance);
            v19 = -1;
            if ( v18 == 0 )
              v19 = *(&m_pInstance[99].m_worldGroupId + 1);
            if ( v19 != *(v11 + 44) )
            {
              v20 = *(v11 + 8);
              if ( v20 != 0 && (*(v20[1] + 49LL) & 4) == 0 && *(v11 + 16) != 0xFFFF )
              {
                v34 = v19;
                (*(*v20 + 176LL))(v20, 44, 0xFFFFFFFFLL, *(v11 + 16));
                v19 = v34;
              }
              *(v11 + 44) = v19;
            }
          }
        }
      }
    }
    Player = CDOTA_PlayerResource::GetPlayer(this, v2);
    v5 = Player;
    if ( Player != 0 )
    {
      IsAFK = CDOTAPlayer::IsAFK(Player);
      if ( IsAFK != *(v11 + 56) )
      {
        v7 = *(v11 + 8);
        if ( v7 != 0 && (*(v7[1] + 49LL) & 4) == 0 && *(v11 + 16) != 0xFFFF )
        {
          v31 = IsAFK;
          (*(*v7 + 176LL))(v7, 56, 0xFFFFFFFFLL, *(v11 + 16));
          IsAFK = v31;
        }
        *(v11 + 56) = IsAFK;
      }
      v32 = *(*engine + 240LL);
      v8.m_Data = CEntityInstance::GetEntityIndex(v5).m_Data;
      v9 = v32(engine, v8.m_Data);
      if ( v9 != 0 )
        *(this + v2 + 1518) = now - (*(*v9 + 192LL))(v9);
    }
    v10 = v2++;
    CDOTA_PlayerResource::ComputeNetWorth(this, v10);
  }
  for ( i = 0; *(this + 458) > i; ++i )
  {
    while ( 1 )
    {
      v24 = 12LL * i;
      v25 = *(*(this + 230) + v24 + 4);
      if ( v25 >= 0 && v25 < g_CDOTA_BinaryObjectSystem.m_BinaryObjects.m_Size )
      {
        v22 = g_CDOTA_BinaryObjectSystem.m_BinaryObjects.m_Memory.m_pMemory[v25];
        if ( v22 != 0 )
          break;
      }
      v26 = i;
      v27 = i - 1;
      CUtlVectorBase<sPendingTreeRemoval,CUtlMemory<sPendingTreeRemoval,int>>::Remove((this + 1832), v26);
LABEL_42:
      i = v27 + 1;
      if ( *(this + 458) <= i )
        return;
    }
    AbsOrigin = CBaseEntity::GetAbsOrigin(v22);
    if ( CDOTAFogOfWarSystem::IsLocationVisible(&g_DOTAFogOfWarSystem, *(*(this + 230) + 12LL * i), AbsOrigin, 0.0) )
    {
      v28 = *(this + 230) + v24;
      if ( g_pGameRules != 0 )
        v29 = *&g_pGameRules[18].m_szQuestName[20] - 1.0;
      else
        v29 = -1.0;
      CDOTA_PlayerResource::SetWorldTreeState(this, *(v28 + 4), 0, 1, v29 > *(v28 + 8), -1);
      CUtlVectorBase<sPendingTreeRemoval,CUtlMemory<sPendingTreeRemoval,int>>::Remove((this + 1832), i);
      v27 = i - 1;
      goto LABEL_42;
    }
  }
}


// CDOTA_PlayerResource::AddPendingTreeRemoval  (line 627, @0x0000000002683e30, libserver.so)  // inlines: AddToTail, CopyConstruct<sPendingTreeRemoval>, Element, GrowMemory, operator[]
// calls: CUtlMemory<sPendingTreeRemoval, int>::Grow
// callers: CDOTA_PlayerResource::SetWorldTreeState
void __fastcall CDOTA_PlayerResource::AddPendingTreeRemoval(
        CUtlMemory<sPendingTreeRemoval,int> *this,
        int nTeamNumber,
        int nIndex,
        float fTimestamp)
{
  __int64 v6; // r13
  __int64 v7; // rax
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rax
  float fTimestampa; // [rsp+8h] [rbp-28h]
  int nIndexa; // [rsp+Ch] [rbp-24h]

  v6 = *(this + 458);
  if ( v6 <= 0 )
  {
LABEL_8:
    v9 = *(this + 458);
    if ( v6 == *(this + 462) )
    {
      nIndexa = nIndex;
      fTimestampa = fTimestamp;
      CUtlMemory<sPendingTreeRemoval,int>::Grow(this + 115, 1);
      v9 = *(this + 458);
      fTimestamp = fTimestampa;
      nIndex = nIndexa;
    }
    *(this + 458) = v9 + 1;
    v10 = *(this + 230) + 12 * v6;
    if ( v10 != 0 )
    {
      *v10 = nTeamNumber;
      *(v10 + 4) = nIndex;
      *(v10 + 8) = fTimestamp;
    }
  }
  else
  {
    v7 = *(this + 230);
    v8 = v7 + 12LL * (v6 - 1) + 12;
    while ( *v7 != nTeamNumber || *(v7 + 4) != nIndex )
    {
      v7 += 12;
      if ( v7 == v8 )
        goto LABEL_8;
    }
    *(v7 + 8) = fTimestamp;
  }
}


// CDOTA_PlayerResource::ClearPendingTreeRemoval  (line 648, @0x00000000026747a0, libserver.so)  // inlines: operator[]
// calls: CUtlVectorBase<sPendingTreeRemoval, CUtlMemory<sPendingTreeRemoval, int> >::Remove
// callers: CDOTA_PlayerResource::SetWorldTreeState
void __fastcall CDOTA_PlayerResource::ClearPendingTreeRemoval(CDOTA_PlayerResource *const this, int nIndex)
{
  CUtlVectorBase<sPendingTreeRemoval,CUtlMemory<sPendingTreeRemoval,int> > *v3; // r13
  int i; // ebx

  v3 = (this + 1832);
  for ( i = 0; *(this + 458) > i; CUtlVectorBase<sPendingTreeRemoval,CUtlMemory<sPendingTreeRemoval,int>>::Remove(v3, i) )
  {
    while ( *(*(this + 230) + 12LL * i + 4) != nIndex )
    {
      if ( *(this + 458) <= ++i )
        return;
    }
  }
}


// CDOTA_PlayerResource::SetWorldTreeState  (line 662, @0x0000000002683f00, libserver.so)  // inlines: DOTAGameRules, GetBinaryObject, GetForModify, GetGameTime, IsPlayerTeam, NetworkStateChanged, operator[]
// calls: CDOTA_PlayerResource::ClearPendingTreeRemoval, CDOTA_PlayerResource::AddPendingTreeRemoval, CBaseEntity::GetAbsOrigin, CDOTAFogOfWarSystem::IsLocationVisible
// callers: CDOTA_BinaryObject::SetActive, CDOTA_BinaryObjectSystem::PostSpawnGroupLoad, CDOTA_BinaryObjectSystem::RegisterServerObject, CDOTA_PlayerResource::UpdatePlayerData
// local variable allocation has failed, the output may be wrong!
void __fastcall CDOTA_PlayerResource::SetWorldTreeState(
        CDOTA_PlayerResource *const this,
        int iIndex,
        bool bState,
        bool bFoWTest,
        bool bQuiet,
        int nTeamNumberKnownTo)
{
  int v6; // r12d
  int v7; // ebx
  int v8; // ebx
  bool *v10; // rdi
  unsigned int i; // eax
  bool v12; // cl
  bool v13; // si
  __int64 v14; // r15
  __int64 v15; // r12
  ScriptClassDesc_t **v16; // r14
  __int64 v17; // r13
  ScriptClassDesc_t *v18; // rbx
  ScriptClassDesc_t *v19; // rbx
  __int64 v20; // r15
  float v21; // xmm0_4
  __int64 v22; // r14
  CDOTA_DataNonSpectator *v23; // r8
  CDOTA_DataNonSpectator *v24; // r14
  CDOTA_BinaryObject *v25; // r14
  int v26; // ebx
  bool *j; // r12
  const Vector *AbsOrigin; // rax
  bool IsLocationVisible; // al
  __int64 v31; // [rsp+10h] [rbp-70h]
  int iIndexa; // [rsp+18h] [rbp-68h]
  __int64 iIndexb; // [rsp+18h] [rbp-68h]
  int iIndexc; // [rsp+18h] [rbp-68h]
  unsigned int index64; // [rsp+20h] [rbp-60h]
  CDOTA_DataNonSpectator *index64a; // [rsp+20h] [rbp-60h]
  CDOTA_DataNonSpectator *index64b; // [rsp+20h] [rbp-60h]
  unsigned int v38; // [rsp+28h] [rbp-58h]
  unsigned int bQuietb; // [rsp+2Ch] [rbp-54h]
  int v42; // [rsp+38h] [rbp-48h]
  bool bVisibleToTeam[64]; // [rsp+40h] [rbp-40h] BYREF

  v6 = iIndex;
  v7 = iIndex + 63;
  if ( iIndex >= 0 )
    v7 = iIndex;
  v8 = v7 >> 6;
  if ( v8 <= 0x7F )
  {
    v10 = bVisibleToTeam;
    for ( i = -2; i != 12; ++i )
    {
      v12 = i - 4 <= 7;
      v13 = i <= 1;
      *v10++ = v13 || v12;
    }
    bVisibleToTeam[1] = 1;
    v14 = 1LL << (v6 % 64);
    if ( bState || !bFoWTest )
    {
      if ( bState )
      {
        iIndexa = v6;
        index64 = v8;
        v15 = v8;
        bQuietb = v8 + 128;
        v16 = &g_pDOTADataTeams[1];
        v17 = 8LL * (v8 + 128);
        do
        {
          v18 = *v16;
          if ( *v16 != 0 )
          {
            (*(v18->m_pszScriptName + 22))(*v16, 848, index64, 0xFFFFFFFFLL);
            *(&v18[10].m_FunctionBindings.m_Memory.m_nAllocationCount + v15) |= v14;
            v19 = *v16;
            (*((*v16)->m_pszScriptName + 22))(*v16, 848, bQuietb, 0xFFFFFFFFLL);
            *(&v19[10].m_FunctionBindings.m_Memory.m_nAllocationCount + v17) &= ~v14;
          }
          ++v16;
        }
        while ( v16 != &g_pCDOTA_CustomUIManager_ScriptDesc );
        CDOTA_PlayerResource::ClearPendingTreeRemoval(this, iIndexa);
        return;
      }
    }
    else if ( v6 >= 0 && v6 < g_CDOTA_BinaryObjectSystem.m_BinaryObjects.m_Size )
    {
      v25 = g_CDOTA_BinaryObjectSystem.m_BinaryObjects.m_Memory.m_pMemory[v6];
      if ( v25 != 0 )
      {
        v42 = v6;
        iIndexc = v8;
        v26 = 0;
        for ( j = &bVisibleToTeam[1]; ++v26 != 14; ++j )
        {
          if ( (v26 - 6) <= 7 || (v26 - 2) <= 1 )
          {
            if ( nTeamNumberKnownTo == v26 )
            {
              IsLocationVisible = 1;
            }
            else
            {
              AbsOrigin = CBaseEntity::GetAbsOrigin(v25);
              IsLocationVisible = CDOTAFogOfWarSystem::IsLocationVisible(&g_DOTAFogOfWarSystem, v26, AbsOrigin, 0.0);
            }
            *j = IsLocationVisible;
          }
        }
        v6 = v42;
        v8 = iIndexc;
      }
    }
    iIndexb = v14;
    v38 = v8 + 128;
    v20 = 0;
    v31 = v8 + 128;
    do
    {
      v22 = v20;
      v23 = g_pDOTADataTeams[v20 + 1];
      if ( v23 != 0 )
      {
        if ( bVisibleToTeam[v20 + 1] )
        {
          index64a = g_pDOTADataTeams[v20 + 1];
          (*(v23->_vptr_IHandleEntity + 22))(index64a, 848, v8, 0xFFFFFFFFLL, v23, *&nTeamNumberKnownTo);
          index64a->m_bWorldTreeState.m_Value[v8] &= ~iIndexb;
          if ( bQuiet )
          {
            v24 = g_pDOTADataTeams[v22 + 1];
            (*(v24->_vptr_IHandleEntity + 22))(v24, 848, v38, 0xFFFFFFFFLL);
            v24->m_bWorldTreeState.m_Value[v31] |= iIndexb;
          }
          else
          {
            index64b = g_pDOTADataTeams[v22 + 1];
            (*(index64b->_vptr_IHandleEntity + 22))(index64b, 848, v38, 0xFFFFFFFFLL);
            index64b->m_bWorldTreeState.m_Value[v31] &= ~iIndexb;
          }
        }
        else
        {
          v21 = 0.0;
          if ( g_pGameRules != 0 )
            v21 = *&g_pGameRules[18].m_szQuestName[20];
          CDOTA_PlayerResource::AddPendingTreeRemoval(this, v20 + 1, v6, v21);
        }
      }
      ++v20;
    }
    while ( v20 != 13 );
  }
}


// CDOTA_PlayerResource::GetLevel  (line 738, @0x0000000002656210, libserver.so)  // inlines: Element, IsValidTeamPlayerID, operator[]
// callers: CDOTA_RealtimeCombatAnalyzer::PerformStorageForEvent, CDOTA_RealtimeCombatAnalyzer::EvaluateGameState, CDOTA_OGS::LogItemEvent, CDOTA_OGS::LogHeroResults, CDOTA_OGS::LogHeroLevelUp, CDOTA_PlayerResource::GetBuybackCost, CDOTASpectatorGraphManager::RecordHeroInventorySnapshots, CDOTAGCServerSystem::WriteMatchMetadataTeamPlayer
int __fastcall CDOTA_PlayerResource::GetLevel(CDOTA_PlayerResource *const this, int iPlayerID)
{
  int result; // eax

  result = 0;
  if ( iPlayerID >= 0 && iPlayerID < *(this + 194) )
    return *(*(this + 98) + 200LL * iPlayerID + 40);
  return result;
}


// CDOTA_PlayerResource::SetCustomPlayerColor  (line 748, @0x0000000002657e80, libserver.so)  // inlines: Element, Get, IsValidTeamPlayerID, NetworkStateChanged, Set, SetRawColor, operator CEntityInstance*, operator=, operator=<Color>, operator[]
void __fastcall CDOTA_PlayerResource::SetCustomPlayerColor(
        CDOTA_PlayerResource *const this,
        int iPlayerID,
        int r,
        int g,
        int b)
{
  unsigned __int16 v5; // bx
  __int64 v6; // r12
  unsigned int v7; // ebx
  _QWORD *v8; // rdi

  if ( iPlayerID >= 0 && iPlayerID < *(this + 194) )
  {
    LOBYTE(v5) = r;
    HIBYTE(v5) = g;
    v6 = *(this + 98) + 200LL * iPlayerID;
    v7 = (b << 16) | v5 | 0xFF000000;
    if ( *(v6 + 112) != v7 )
    {
      v8 = *(v6 + 8);
      if ( v8 != 0 && (*(v8[1] + 49LL) & 4) == 0 && *(v6 + 16) != 0xFFFF )
        (*(*v8 + 176LL))(v8, 112, 0xFFFFFFFFLL, *(v6 + 16));
      *(v6 + 112) = v7;
    }
  }
}


// CDOTA_PlayerResource::IncrementKills  (line 758, @0x0000000002684a90, libserver.so)  // inlines: AddToTail, CopyConstruct<TimedKillEvent_t>, DOTAGameRules, Element, Get, GrowMemory, IsValidTeamPlayerID, NetworkStateChanged, Set, operator CEntityInstance*, operator++, operator+=<int>, operator[]
// calls: CDOTAGamerules::GetDOTATime, CUtlMemory<TimedKillEvent_t, int>::Grow
// callers: CDOTA_BaseNPC_Hero::IncrementKills, CDOTA_BaseNPC_Hero::KilledHero
void __fastcall CDOTA_PlayerResource::IncrementKills(CDOTA_PlayerResource *const this, int iPlayerID, int iVictimID)
{
  __int64 v5; // r13
  __int64 v7; // r14
  _QWORD *v8; // rdi
  int v9; // eax
  float DOTATime; // xmm0_4
  __int64 v11; // r13
  int v12; // r14d
  int v13; // eax
  int *v14; // rax
  int v15; // [rsp+Ch] [rbp-34h]

  if ( iPlayerID >= 0 && iPlayerID < *(this + 194) )
  {
    v5 = iPlayerID;
    v7 = *(this + 98) + 200LL * iPlayerID;
    v8 = *(v7 + 8);
    v9 = *(v7 + 24) + 1;
    if ( v8 != 0 && (*(v8[1] + 49LL) & 4) == 0 && *(v7 + 16) != 0xFFFF )
    {
      v15 = *(v7 + 24) + 1;
      (*(*v8 + 176LL))(v8, 24, 0xFFFFFFFFLL, *(v7 + 16));
      v9 = v15;
    }
    *(v7 + 24) = v9;
    ++*(this + 24 * v5 + iVictimID + 1835);
    if ( iVictimID >= 0 && g_pGameRules != 0 )
    {
      DOTATime = CDOTAGamerules::GetDOTATime(g_pGameRules, 0, 0, 0.0);
      v11 = *(this + 4644);
      v12 = (DOTATime / 60.0);
      v13 = *(this + 4644);
      if ( v11 == *(this + 4648) )
      {
        CUtlMemory<TimedKillEvent_t,int>::Grow((this + 18584), 1);
        v13 = *(this + 4644);
      }
      *(this + 4644) = v13 + 1;
      v14 = (*(this + 2323) + 12 * v11);
      if ( v14 != 0 )
      {
        *v14 = v12;
        v14[1] = 1065353216;
        v14[2] = iPlayerID;
      }
    }
  }
}


// CDOTA_PlayerResource::IncrementAssists  (line 780, @0x0000000002684940, libserver.so)  // inlines: AddToTail, CopyConstruct<TimedKillEvent_t>, DOTAGameRules, Element, Get, GrowMemory, IsValidTeamPlayerID, NetworkStateChanged, Set, operator CEntityInstance*, operator++, operator+=<int>, operator[]
// calls: CDOTAGamerules::GetDOTATime, CUtlMemory<TimedKillEvent_t, int>::Grow
// callers: CDOTA_BaseNPC_Hero::IncrementAssists, CDOTAHeroList::GiveAdditionalAssists, CDOTAHeroList::GivePlayerFullBountyGold, CDOTAHeroList::GiveKillerBountyGold
void __fastcall CDOTA_PlayerResource::IncrementAssists(CDOTA_PlayerResource *const this, int iPlayerID, int iVictimID)
{
  __int64 v3; // r15
  __int64 v6; // r14
  __int64 v7; // r13
  _QWORD *v8; // rdi
  int v9; // eax
  float DOTATime; // xmm0_4
  __int64 v11; // r13
  int v12; // r14d
  int v13; // eax
  int *v14; // rax
  int v15; // [rsp+Ch] [rbp-34h]

  v3 = iVictimID;
  if ( iPlayerID >= 0 && iPlayerID < *(this + 194) )
  {
    v6 = iPlayerID;
    v7 = *(this + 98) + 200LL * iPlayerID;
    v8 = *(v7 + 8);
    v9 = *(v7 + 28) + 1;
    if ( v8 != 0 && (*(v8[1] + 49LL) & 4) == 0 && *(v7 + 16) != 0xFFFF )
    {
      v15 = *(v7 + 28) + 1;
      (*(*v8 + 176LL))(v8, 28, 0xFFFFFFFFLL, *(v7 + 16));
      v9 = v15;
    }
    *(v7 + 28) = v9;
    if ( v3 >= 0 )
    {
      ++*(this + 24 * v6 + v3 + 2412);
      if ( g_pGameRules != 0 )
      {
        DOTATime = CDOTAGamerules::GetDOTATime(g_pGameRules, 0, 0, 0.0);
        v11 = *(this + 4650);
        v12 = (DOTATime / 60.0);
        v13 = *(this + 4650);
        if ( v11 == *(this + 4654) )
        {
          CUtlMemory<TimedKillEvent_t,int>::Grow(this + 1163, 1);
          v13 = *(this + 4650);
        }
        *(this + 4650) = v13 + 1;
        v14 = (*(this + 2326) + 12 * v11);
        if ( v14 != 0 )
        {
          *v14 = v12;
          v14[1] = 1065353216;
          v14[2] = iPlayerID;
        }
      }
    }
  }
}


// CDOTA_PlayerResource::IncrementDeaths  (line 802, @0x0000000002684630, libserver.so)  // inlines: AddToTail, Clamp<float>, CopyConstruct<TimedKillEvent_t>, DOTAGameRules, Element, Get, GrowMemory, IsValidTeamPlayerID, NetworkStateChanged, Set, operator CEntityInstance*, operator++, operator+=<int>, operator[]
// calls: CDOTAGamerules::GetDOTATime, CDOTA_CombatLog::RecordKillDamageBreakdown, CUtlMemory<TimedKillEvent_t, int>::Grow
// callers: CDOTA_BaseNPC_Hero::IncrementDeaths, CDOTA_BaseNPC_Hero::Event_Killed
void __fastcall CDOTA_PlayerResource::IncrementDeaths(CDOTA_PlayerResource *const this, int iPlayerID, int iKillerID)
{
  __int64 v5; // r9
  __int64 v7; // rbx
  _QWORD *v8; // rdi
  int v9; // r14d
  float DOTATime; // xmm0_4
  __int64 v11; // r14
  float v12; // xmm0_4
  __int64 v13; // r9
  int v14; // ecx
  int v15; // eax
  int *v16; // rax
  float *v17; // rax
  int v18; // edx
  float v19; // xmm7_4
  float v20; // xmm6_4
  float v21; // xmm4_4
  int *v22; // rax
  __m128 v23; // xmm3
  float v24; // xmm1_4
  __m128 v25; // xmm1
  __m128 v26; // xmm1
  __m128 v27; // xmm5
  float v28; // xmm1_4
  __int64 v29; // rcx
  float *v30; // rax
  int iEffectiveHealth; // r15d
  int v32; // r9d
  float v33; // xmm0_4
  int iDamageToKilla; // [rsp+10h] [rbp-A0h]
  int iDamageToKill[2]; // [rsp+10h] [rbp-A0h]
  __int64 flOtherDamagea; // [rsp+18h] [rbp-98h]
  __int64 flOtherDamage; // [rsp+18h] [rbp-98h]
  float flOtherDamagec; // [rsp+18h] [rbp-98h]
  int flOtherDamageb; // [rsp+18h] [rbp-98h]
  float flDamageArray[24]; // [rsp+20h] [rbp-90h] BYREF
  _BYTE v41[48]; // [rsp+80h] [rbp-30h] BYREF

  if ( iPlayerID >= 0 && iPlayerID < *(this + 194) )
  {
    v5 = iPlayerID;
    v7 = *(this + 98) + 200LL * iPlayerID;
    v8 = *(v7 + 8);
    v9 = *(v7 + 32) + 1;
    if ( v8 != 0 && (*(v8[1] + 49LL) & 4) == 0 && *(v7 + 16) != 0xFFFF )
    {
      flOtherDamagea = iPlayerID;
      (*(*v8 + 176LL))(v8, 32, 0xFFFFFFFFLL, *(v7 + 16));
      v5 = flOtherDamagea;
    }
    *(v7 + 32) = v9;
    flOtherDamage = v5;
    if ( g_pGameRules != 0 )
    {
      DOTATime = CDOTAGamerules::GetDOTATime(g_pGameRules, 0, 0, 0.0);
      v11 = *(this + 4656);
      v12 = DOTATime / 60.0;
      v13 = flOtherDamage;
      v14 = v12;
      v15 = *(this + 4656);
      if ( v11 == *(this + 4660) )
      {
        *iDamageToKill = flOtherDamage;
        flOtherDamageb = v12;
        CUtlMemory<TimedKillEvent_t,int>::Grow((this + 18632), 1);
        v15 = *(this + 4656);
        v13 = *iDamageToKill;
        v14 = flOtherDamageb;
      }
      *(this + 4656) = v15 + 1;
      v16 = (*(this + 2329) + 12 * v11);
      if ( v16 != 0 )
      {
        *v16 = v14;
        v16[1] = 1065353216;
        v16[2] = iPlayerID;
      }
      v17 = flDamageArray;
      do
        *v17++ = 0.0;
      while ( v17 != v41 );
      v18 = *(this + 6 * v13 + 4836) - 1;
      if ( v18 < 0 )
      {
        v32 = 0;
        iEffectiveHealth = 0;
        v19 = 0.0;
      }
      else
      {
        v19 = 0.0;
        v20 = 0.0;
        v21 = 0.0;
        v22 = (*(this + 3 * v13 + 2419) + 12LL * v18 + 8);
        do
        {
          while ( 1 )
          {
            v23 = *(v22 - 1);
            v24 = 0.0;
            if ( v23.m128_f32[0] >= 0.0 )
            {
              v25 = _mm_cmplt_ss(0x47C35000u, v23);
              LODWORD(v24) = _mm_andnot_ps(v25, v23).m128_u32[0] | v25.m128_i32[0] & 0x47C35000;
            }
            v21 = v21 + v24;
            v26.m128_i32[0] = *(v22 - 2);
            if ( v26.m128_f32[0] < 0.0 )
            {
              v28 = 0.0;
            }
            else
            {
              v27 = _mm_cmpge_ss(0x47C35000u, v26);
              LODWORD(v28) = _mm_andnot_ps(v27, 0x47C35000u).m128_u32[0] | v26.m128_i32[0] & v27.m128_i32[0];
            }
            v29 = *v22;
            v20 = v20 + v28;
            if ( v29 < 0 || v29 >= *(this + 194) )
              break;
            --v18;
            v22 -= 3;
            flDamageArray[v29] = v23.m128_f32[0] + flDamageArray[v29];
            if ( v18 == -1 )
              goto LABEL_24;
          }
          --v18;
          v19 = v19 + v23.m128_f32[0];
          v22 -= 3;
        }
        while ( v18 != -1 );
LABEL_24:
        v30 = flDamageArray;
        if ( v21 > 0.0 )
        {
          do
          {
            if ( *v30 > 0.0 )
              *v30 = *v30 / v21;
            ++v30;
          }
          while ( v30 != v41 );
          if ( v19 > 0.0 )
            v19 = v19 / v21;
        }
        iEffectiveHealth = v20;
        v32 = v21;
      }
      iDamageToKilla = v32;
      flOtherDamagec = v19;
      v33 = CDOTAGamerules::GetDOTATime(g_pGameRules, 0, 0, 0.0);
      CDOTA_CombatLog::RecordKillDamageBreakdown(
        g_pDOTACombatLog,
        iPlayerID,
        iKillerID,
        flDamageArray,
        flOtherDamagec,
        24,
        iDamageToKilla,
        v33,
        iEffectiveHealth);
    }
  }
}


// CDOTA_PlayerResource::GetKills  (line 864, @0x0000000002654ee0, libserver.so)  // inlines: Element, IsValidTeamPlayerID, operator[]
// callers: CDOTA_RealtimeCombatAnalyzer::EvaluateGameState, CDOTA_CombatLog::AddEndGameStatsEvent, CDOTA_CombatLog::GenerateExperimentalTimedStats, CDOTA_CombatLog::DoCombatAnalysis, DOTAPrintPlayerStatus, CDOTA_OGS::LogHeroResults, CDOTA_OGS::LogHeroLevelUp, CDOTA_OGS::LogMatchSnapshot, CDOTA_PlayerResource::WriteSaveGameInformation, CDOTA_PlayerResource::RecordBalanceForTime, RecordSocialFeedPostGameMatchEvents, CDOTASpectatorGraphManager::RecordHeroInventorySnapshots (24 total)
int __fastcall CDOTA_PlayerResource::GetKills(const CDOTA_PlayerResource *const this, int iPlayerID)
{
  int result; // eax

  result = 0;
  if ( iPlayerID >= 0 && iPlayerID < *(this + 194) )
    return *(*(this + 98) + 200LL * iPlayerID + 24);
  return result;
}


// CDOTA_PlayerResource::GetAssists  (line 872, @0x0000000002656310, libserver.so)  // inlines: Element, IsValidTeamPlayerID, operator[]
// callers: CDOTA_RealtimeCombatAnalyzer::EvaluateGameState, CDOTA_CombatLog::AddEndGameStatsEvent, CDOTA_CombatLog::DoCombatAnalysis, DOTAPrintPlayerStatus, CDOTA_OGS::LogHeroResults, CDOTA_OGS::LogHeroLevelUp, CDOTA_OGS::LogMatchSnapshot, CDOTA_PlayerResource::WriteSaveGameInformation, CDOTASpectatorGraphManager::RecordHeroInventorySnapshots, CDOTA_BaseNPC_Hero::GetAssists, CDOTAHeroList::GiveAdditionalAssists, CDOTA_BaseNPC_Hero::KilledHero (20 total)
int __fastcall CDOTA_PlayerResource::GetAssists(const CDOTA_PlayerResource *const this, int iPlayerID)
{
  int result; // eax

  result = 0;
  if ( iPlayerID >= 0 && iPlayerID < *(this + 194) )
    return *(*(this + 98) + 200LL * iPlayerID + 28);
  return result;
}


// CDOTA_PlayerResource::GetDeaths  (line 880, @0x00000000026562e0, libserver.so)  // inlines: Element, IsValidTeamPlayerID, operator[]
// callers: CDOTA_RealtimeCombatAnalyzer::EvaluateGameState, CDOTA_CombatLog::DoCombatAnalysis, DOTAPrintPlayerStatus, CDOTA_OGS::LogHeroResults, CDOTA_OGS::LogHeroDeath, CDOTA_OGS::LogHeroLevelUp, CDOTA_OGS::LogMatchSnapshot, CDOTA_PlayerResource::WriteSaveGameInformation, CDOTASpectatorGraphManager::RecordHeroInventorySnapshots, CDOTA_BaseNPC_Hero::GetDeaths, CDOTAHeroList::GiveAdditionalAssists, CDOTA_BaseNPC_Hero::KilledHero (22 total)
int __fastcall CDOTA_PlayerResource::GetDeaths(const CDOTA_PlayerResource *const this, int iPlayerID)
{
  int result; // eax

  result = 0;
  if ( iPlayerID >= 0 && iPlayerID < *(this + 194) )
    return *(*(this + 98) + 200LL * iPlayerID + 32);
  return result;
}


// CDOTA_PlayerResource::RecalculateTeamfightParticipation  (line 888, @0x000000000265d140, libserver.so)  // inlines: Element, Get, NetworkStateChanged, Set, operator CEntityInstance*, operator=<float>, operator==<int>, operator[]
// calls: CDOTAGamerules::GetTeamScore
// callers: CDOTAHeroList::GivePlayerFullBountyGold, CDOTAHeroList::GiveKillerBountyGold
void __fastcall CDOTA_PlayerResource::RecalculateTeamfightParticipation(CDOTA_PlayerResource *const this, int iTeam)
{
  __int64 v3; // r14
  __int64 v5; // r12
  int i; // ebx
  float TeamScore; // xmm1_4
  __int64 v8; // rax
  float v9; // xmm0_4
  _QWORD *v10; // rdi
  float v11; // [rsp+4h] [rbp-3Ch]
  float v12; // [rsp+8h] [rbp-38h]
  __int64 v13; // [rsp+8h] [rbp-38h]

  v3 = 0;
  v5 = 0;
  for ( i = 0; i < *(this + 194); v3 += 200 )
  {
    if ( iTeam == *(*(this + 107) + v5 + 32) )
    {
      v12 = (*(*(this + 98) + v3 + 28) + *(*(this + 98) + v3 + 24));
      TeamScore = CDOTAGamerules::GetTeamScore(g_pGameRules, iTeam);
      v8 = *(this + 98) + v3;
      v9 = v12 / TeamScore;
      if ( (v12 / TeamScore) != *(v8 + 184) )
      {
        v10 = *(v8 + 8);
        if ( v10 != 0 && (*(v10[1] + 49LL) & 4) == 0 && *(v8 + 16) != 0xFFFF )
        {
          v11 = v12 / TeamScore;
          v13 = *(this + 98) + v3;
          (*(*v10 + 176LL))(v10, 184, 0xFFFFFFFFLL, *(v8 + 16));
          v8 = v13;
          v9 = v11;
        }
        *(v8 + 184) = v9;
      }
    }
    ++i;
    v5 += 72;
  }
}


// CDOTA_PlayerResource::AddStun  (line 902, @0x0000000002663920, libserver.so)  // inlines: Get, NetworkStateChanged, Set, operator CEntityInstance*, operator+=<float>
// calls: CDOTA_PlayerResource::GetTeamDataForPlayer
// callers: CDOTA_CombatLog::AddModifierEvent
void __fastcall CDOTA_PlayerResource::AddStun(
        CDOTA_PlayerResource *const this,
        int iPlayerID,
        float a3,
        float fDuration)
{
  DataTeamPlayer_t *TeamDataForPlayer; // rax
  float m_Value; // xmm1_4
  float v6; // xmm0_4
  CEntityInstance *m_pObj; // rdi
  float v8; // [rsp+4h] [rbp-Ch]
  DataTeamPlayer_t *pTeamDataa; // [rsp+8h] [rbp-8h]

  TeamDataForPlayer = CDOTA_PlayerResource::GetTeamDataForPlayer(this, iPlayerID);
  if ( TeamDataForPlayer != 0 )
  {
    m_Value = TeamDataForPlayer->m_fStuns.m_Value;
    v6 = a3 + m_Value;
    if ( m_Value != (a3 + m_Value) )
    {
      m_pObj = TeamDataForPlayer->__m_pChainEntity.m_pObj;
      if ( m_pObj != 0 && (m_pObj->m_pEntity->m_flags & 0x400) == 0 && TeamDataForPlayer->__m_PathIndex.m_Value != -1 )
      {
        v8 = a3 + m_Value;
        pTeamDataa = TeamDataForPlayer;
        (*(m_pObj->_vptr_IHandleEntity + 22))(m_pObj, 120, 0xFFFFFFFFLL, TeamDataForPlayer->__m_PathIndex.m_Value);
        TeamDataForPlayer = pTeamDataa;
        v6 = v8;
      }
      TeamDataForPlayer->m_fStuns.m_Value = v6;
    }
  }
}


// CDOTA_PlayerResource::RemoveStun  (line 910, @0x00000000026639a0, libserver.so)  // inlines: Get, NetworkStateChanged, Set, operator CEntityInstance*, operator-=<float>
// calls: CDOTA_PlayerResource::GetTeamDataForPlayer
// callers: CDOTA_CombatLog::AddModifierEvent
void __fastcall CDOTA_PlayerResource::RemoveStun(
        CDOTA_PlayerResource *const this,
        int iPlayerID,
        float a3,
        float fDuration)
{
  DataTeamPlayer_t *TeamDataForPlayer; // rax
  float v5; // xmm0_4
  CEntityInstance *m_pObj; // rdi
  float v7; // [rsp+4h] [rbp-Ch]
  DataTeamPlayer_t *pTeamDataa; // [rsp+8h] [rbp-8h]

  TeamDataForPlayer = CDOTA_PlayerResource::GetTeamDataForPlayer(this, iPlayerID);
  if ( TeamDataForPlayer != 0 )
  {
    v5 = TeamDataForPlayer->m_fStuns.m_Value - a3;
    if ( TeamDataForPlayer->m_fStuns.m_Value != v5 )
    {
      m_pObj = TeamDataForPlayer->__m_pChainEntity.m_pObj;
      if ( m_pObj != 0 && (m_pObj->m_pEntity->m_flags & 0x400) == 0 && TeamDataForPlayer->__m_PathIndex.m_Value != -1 )
      {
        v7 = TeamDataForPlayer->m_fStuns.m_Value - a3;
        pTeamDataa = TeamDataForPlayer;
        (*(m_pObj->_vptr_IHandleEntity + 22))(m_pObj, 120, 0xFFFFFFFFLL, TeamDataForPlayer->__m_PathIndex.m_Value);
        TeamDataForPlayer = pTeamDataa;
        v5 = v7;
      }
      TeamDataForPlayer->m_fStuns.m_Value = v5;
    }
  }
}


// CDOTA_PlayerResource::AddHeal  (line 918, @0x0000000002663a30, libserver.so)  // inlines: Get, NetworkStateChanged, Set, operator CEntityInstance*, operator+=<float>
// calls: CDOTA_PlayerResource::GetTeamDataForPlayer
// callers: CDOTA_CombatLog::AddHealthEvent
void __fastcall CDOTA_PlayerResource::AddHeal(CDOTA_PlayerResource *const this, int iPlayerID, float a3, float fAmount)
{
  DataTeamPlayer_t *TeamDataForPlayer; // rax
  float m_Value; // xmm1_4
  float v6; // xmm0_4
  CEntityInstance *m_pObj; // rdi
  float v8; // [rsp+4h] [rbp-Ch]
  DataTeamPlayer_t *pTeamDataa; // [rsp+8h] [rbp-8h]

  TeamDataForPlayer = CDOTA_PlayerResource::GetTeamDataForPlayer(this, iPlayerID);
  if ( TeamDataForPlayer != 0 )
  {
    m_Value = TeamDataForPlayer->m_fHealing.m_Value;
    v6 = a3 + m_Value;
    if ( m_Value != (a3 + m_Value) )
    {
      m_pObj = TeamDataForPlayer->__m_pChainEntity.m_pObj;
      if ( m_pObj != 0 && (m_pObj->m_pEntity->m_flags & 0x400) == 0 && TeamDataForPlayer->__m_PathIndex.m_Value != -1 )
      {
        v8 = a3 + m_Value;
        pTeamDataa = TeamDataForPlayer;
        (*(m_pObj->_vptr_IHandleEntity + 22))(m_pObj, 124, 0xFFFFFFFFLL, TeamDataForPlayer->__m_PathIndex.m_Value);
        TeamDataForPlayer = pTeamDataa;
        v6 = v8;
      }
      TeamDataForPlayer->m_fHealing.m_Value = v6;
    }
  }
}


// CDOTA_PlayerResource::IncrementTowerKills  (line 926, @0x0000000002665160, libserver.so)  // inlines: Get, NetworkStateChanged, Set, operator CEntityInstance*, operator++, operator+=<int>
// calls: CDOTA_PlayerResource::GetTeamDataForPlayer
// callers: CDOTA_CombatLog::AddHealthEvent
void __fastcall CDOTA_PlayerResource::IncrementTowerKills(CDOTA_PlayerResource *const this, int iPlayerID)
{
  DataTeamPlayer_t *TeamDataForPlayer; // rax
  CEntityInstance *m_pObj; // rdi
  int v4; // ebx
  DataTeamPlayer_t *pTeamData; // [rsp+8h] [rbp-18h]

  TeamDataForPlayer = CDOTA_PlayerResource::GetTeamDataForPlayer(this, iPlayerID);
  if ( TeamDataForPlayer != 0 )
  {
    m_pObj = TeamDataForPlayer->__m_pChainEntity.m_pObj;
    v4 = TeamDataForPlayer->m_iTowerKills.m_Value + 1;
    if ( m_pObj != 0 && (m_pObj->m_pEntity->m_flags & 0x400) == 0 && TeamDataForPlayer->__m_PathIndex.m_Value != -1 )
    {
      pTeamData = TeamDataForPlayer;
      (*(m_pObj->_vptr_IHandleEntity + 22))(m_pObj, 128, 0xFFFFFFFFLL, TeamDataForPlayer->__m_PathIndex.m_Value);
      TeamDataForPlayer = pTeamData;
    }
    TeamDataForPlayer->m_iTowerKills.m_Value = v4;
  }
}


// CDOTA_PlayerResource::IncrementRoshanKills  (line 934, @0x00000000026651d0, libserver.so)  // inlines: Get, NetworkStateChanged, Set, operator CEntityInstance*, operator++, operator+=<int>
// calls: CDOTA_PlayerResource::GetTeamDataForPlayer
// callers: CDOTA_CombatLog::AddHealthEvent
void __fastcall CDOTA_PlayerResource::IncrementRoshanKills(CDOTA_PlayerResource *const this, int iPlayerID)
{
  DataTeamPlayer_t *TeamDataForPlayer; // rax
  CEntityInstance *m_pObj; // rdi
  int v4; // ebx
  DataTeamPlayer_t *pTeamData; // [rsp+8h] [rbp-18h]

  TeamDataForPlayer = CDOTA_PlayerResource::GetTeamDataForPlayer(this, iPlayerID);
  if ( TeamDataForPlayer != 0 )
  {
    m_pObj = TeamDataForPlayer->__m_pChainEntity.m_pObj;
    v4 = TeamDataForPlayer->m_iRoshanKills.m_Value + 1;
    if ( m_pObj != 0 && (m_pObj->m_pEntity->m_flags & 0x400) == 0 && TeamDataForPlayer->__m_PathIndex.m_Value != -1 )
    {
      pTeamData = TeamDataForPlayer;
      (*(m_pObj->_vptr_IHandleEntity + 22))(m_pObj, 132, 0xFFFFFFFFLL, TeamDataForPlayer->__m_PathIndex.m_Value);
      TeamDataForPlayer = pTeamData;
    }
    TeamDataForPlayer->m_iRoshanKills.m_Value = v4;
  }
}


// CDOTA_PlayerResource::GetTeamKills  (line 942, @0x00000000026563e0, libserver.so)
// callers: CDOTAGamerules::State_Enter_POST_GAME
int __fastcall CDOTA_PlayerResource::GetTeamKills(CDOTA_PlayerResource *const this, int iTeam)
{
  int v2; // eax
  __int64 v3; // rdx
  __int64 v4; // r8
  int result; // eax
  __int64 v6; // r8
  _DWORD *v7; // rcx

  v2 = *(this + 194);
  if ( v2 <= 0 )
    return 0;
  v3 = 0;
  v4 = 5 * (5LL * (v2 - 1) + 5);
  result = 0;
  v6 = 8 * v4;
  v7 = (*(this + 107) + 32LL);
  do
  {
    while ( *v7 != iTeam )
    {
      v3 += 200;
      v7 += 18;
      if ( v3 == v6 )
        return result;
    }
    v7 += 18;
    result += *(*(this + 98) + v3 + 24);
    v3 += 200;
  }
  while ( v3 != v6 );
  return result;
}


// CDOTA_PlayerResource::GetTeamTowerKills  (line 957, @0x000000000265d250, libserver.so)
int __fastcall CDOTA_PlayerResource::GetTeamTowerKills(CDOTA_PlayerResource *const this, int iTeam)
{
  CDOTA_DataNonSpectator *v2; // rax
  int m_Size; // ecx
  DataTeamPlayer_t *m_pMemory; // rsi
  __int64 p_m_iTowerKills; // rcx
  int result; // eax
  CNetworkVarBase<int,DataTeamPlayer_t::NetworkVar_m_iTowerKills> *v7; // rdx

  v2 = g_pDOTADataTeams[iTeam];
  if ( v2 == 0 )
    return 0;
  m_Size = v2->m_vecDataTeam.m_Vector.m_Size;
  if ( m_Size <= 0 )
    return 0;
  m_pMemory = v2->m_vecDataTeam.m_Vector.m_Memory.m_pMemory;
  p_m_iTowerKills = &m_pMemory[(m_Size - 1) + 1].m_iTowerKills;
  result = 0;
  v7 = &m_pMemory->m_iTowerKills;
  do
  {
    result += v7->m_Value;
    v7 += 96;
  }
  while ( v7 != p_m_iTowerKills );
  return result;
}


// CDOTA_PlayerResource::GetAvailableTeamLaneGold  (line 974, @0x000000000265d2c0, libserver.so)
// callers: CDOTA_CombatLog::GenerateExperimentalTimedStats
float __fastcall CDOTA_PlayerResource::GetAvailableTeamLaneGold(CDOTA_PlayerResource *const this, int iTeam)
{
  return *(this + (iTeam != 2) + 4822);
}


// CDOTA_PlayerResource::GetScaledKills  (line 982, @0x0000000002660ca0, libserver.so)  // inlines: IsValidTeamPlayerID
// calls: CDOTA_PlayerResource::CalculateEndgameBalanceStats
// callers: CDOTAGCServerSystem::FillMatchDetailsForTeam
float __fastcall CDOTA_PlayerResource::GetScaledKills(CDOTA_PlayerResource *const this, int iPlayerID)
{
  float result; // xmm0_4
  int v4; // [rsp-14h] [rbp-14h]

  if ( iPlayerID < 0 )
    return 0.0;
  result = 0.0;
  if ( iPlayerID < *(this + 194) )
  {
    if ( *(this + 18544) == 0 )
    {
      v4 = iPlayerID;
      CDOTA_PlayerResource::CalculateEndgameBalanceStats(this);
      iPlayerID = v4;
    }
    return *(this + iPlayerID + 4666);
  }
  return result;
}


// CDOTA_PlayerResource::GetScaledAssists  (line 993, @0x0000000002660cf0, libserver.so)  // inlines: IsValidTeamPlayerID
// calls: CDOTA_PlayerResource::CalculateEndgameBalanceStats
// callers: CDOTAGCServerSystem::FillMatchDetailsForTeam
float __fastcall CDOTA_PlayerResource::GetScaledAssists(CDOTA_PlayerResource *const this, int iPlayerID)
{
  float result; // xmm0_4
  int v4; // [rsp-14h] [rbp-14h]

  if ( iPlayerID < 0 )
    return 0.0;
  result = 0.0;
  if ( iPlayerID < *(this + 194) )
  {
    if ( *(this + 18544) == 0 )
    {
      v4 = iPlayerID;
      CDOTA_PlayerResource::CalculateEndgameBalanceStats(this);
      iPlayerID = v4;
    }
    return *(this + iPlayerID + 4714);
  }
  return result;
}


// CDOTA_PlayerResource::GetScaledDeaths  (line 1004, @0x0000000002660d40, libserver.so)  // inlines: IsValidTeamPlayerID
// calls: CDOTA_PlayerResource::CalculateEndgameBalanceStats
// callers: CDOTAGCServerSystem::FillMatchDetailsForTeam
float __fastcall CDOTA_PlayerResource::GetScaledDeaths(CDOTA_PlayerResource *const this, int iPlayerID)
{
  float result; // xmm0_4
  int v4; // [rsp-14h] [rbp-14h]

  if ( iPlayerID < 0 )
    return 0.0;
  result = 0.0;
  if ( iPlayerID < *(this + 194) )
  {
    if ( *(this + 18544) == 0 )
    {
      v4 = iPlayerID;
      CDOTA_PlayerResource::CalculateEndgameBalanceStats(this);
      iPlayerID = v4;
    }
    return *(this + iPlayerID + 4690);
  }
  return result;
}


// CDOTA_PlayerResource::GetDeathsForTeam  (line 1017, @0x000000000265d2e0, libserver.so)  // inlines: IsPlayerTeam
// callers: CDOTAGCServerSystem::CheckUpdateConnectedPlayers
int __fastcall CDOTA_PlayerResource::GetDeathsForTeam(CDOTA_PlayerResource *const this, int iTeam)
{
  int v2; // eax
  __int64 v3; // rdx
  __int64 v4; // r8
  int result; // eax
  __int64 v6; // r8
  _DWORD *v7; // rcx

  if ( (iTeam - 6) <= 7 || (result = 0, (iTeam - 2) <= 1) )
  {
    v2 = *(this + 194);
    if ( v2 <= 0 )
    {
      return 0;
    }
    else
    {
      v3 = 0;
      v4 = 5 * (5LL * (v2 - 1) + 5);
      result = 0;
      v6 = 8 * v4;
      v7 = (*(this + 107) + 32LL);
      do
      {
        while ( *v7 != iTeam )
        {
          v3 += 200;
          v7 += 18;
          if ( v3 == v6 )
            return result;
        }
        v7 += 18;
        result += *(*(this + 98) + v3 + 32);
        v3 += 200;
      }
      while ( v3 != v6 );
    }
  }
  return result;
}


// CDOTA_PlayerResource::IncrementStreak  (line 1037, @0x0000000002657540, libserver.so)  // inlines: Element, Get, IsValidTeamPlayerID, NetworkStateChanged, Set, operator CEntityInstance*, operator++, operator+=<int>, operator[]
// callers: CDOTA_BaseNPC_Hero::IncrementStreak, CDOTA_BaseNPC_Hero::KilledHero
void __fastcall CDOTA_PlayerResource::IncrementStreak(CDOTA_PlayerResource *const this, int iPlayerID)
{
  __int64 v2; // rbx
  _QWORD *v3; // rdi
  int v4; // r12d

  if ( iPlayerID >= 0 && iPlayerID < *(this + 194) )
  {
    v2 = *(this + 98) + 200LL * iPlayerID;
    v3 = *(v2 + 8);
    v4 = *(v2 + 36) + 1;
    if ( v3 != 0 && (*(v3[1] + 49LL) & 4) == 0 && *(v2 + 16) != 0xFFFF )
      (*(*v3 + 176LL))(v3, 36, 0xFFFFFFFFLL, *(v2 + 16));
    *(v2 + 36) = v4;
  }
}


// CDOTA_PlayerResource::ClearStreak  (line 1045, @0x0000000002657f20, libserver.so)  // inlines: Element, Get, IsValidTeamPlayerID, NetworkStateChanged, Set, operator CEntityInstance*, operator=<int>, operator[]
// callers: CDOTA_BaseNPC_Hero::ClearStreak, CDOTA_BaseNPC_Hero::Event_Killed
void __fastcall CDOTA_PlayerResource::ClearStreak(CDOTA_PlayerResource *const this, int iPlayerID)
{
  __int64 v2; // rbx
  _QWORD *v3; // rdi

  if ( iPlayerID >= 0 && iPlayerID < *(this + 194) )
  {
    v2 = *(this + 98) + 200LL * iPlayerID;
    if ( *(v2 + 36) != 0 )
    {
      v3 = *(v2 + 8);
      if ( v3 != 0 && (*(v3[1] + 49LL) & 4) == 0 && *(v2 + 16) != 0xFFFF )
        (*(*v3 + 176LL))(v3, 36, 0xFFFFFFFFLL, *(v2 + 16));
      *(v2 + 36) = 0;
    }
  }
}


// CDOTA_PlayerResource::GetStreak  (line 1053, @0x00000000026561e0, libserver.so)  // inlines: Element, IsValidTeamPlayerID, operator[]
// callers: GetHeroGoldBounty, CDOTA_OGS::LogHeroDeath, CDOTA_PlayerResource::WriteSaveGameInformation, CDOTA_BaseNPC_Hero::GetStreak, CDOTA_BaseNPC_Hero::GetGoldBounty, CDOTA_BaseNPC_Hero::ThinkSpeech, CDOTA_BaseNPC_Hero::KilledHero, CDOTAHeroList::DistributeRewardsForKill, CDOTA_BaseNPC::Event_Killed, CDOTA_BaseNPC_Hero::Event_Killed
int __fastcall CDOTA_PlayerResource::GetStreak(CDOTA_PlayerResource *const this, int iPlayerID)
{
  int result; // eax

  result = 0;
  if ( iPlayerID >= 0 && iPlayerID < *(this + 194) )
    return *(*(this + 98) + 200LL * iPlayerID + 36);
  return result;
}


// CDOTA_PlayerResource::ModifyGold  (line 1063, @0x0000000002679d90, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetReliableGold, GetUnreliableGold, IndexToIdentity, IsValid, LookupEntity, NetworkStateChanged, Set, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CBaseEntity*, operator CEntityInstance*, operator+=<int>
// calls: CDOTA_PlayerResource::GetTeamDataForPlayer, CDOTA_PlayerResource::GetPlayerSelectedHeroHandle, CDOTA_PlayerResource::SetReliableGold, CDOTA_PlayerResource::SetUnreliableGold, DataTeamPlayer_t::NetworkStateChanged, CDOTA_PlayerResource::GetSelectedHeroName, V_snprintf, CDOTA_PlayerResource::GetPlayer, CDotaStatManager::IncrementTimelineStat, CDOTA_PlayerResource::ComputeNetWorth, CDOTA_BaseNPC_Hero::IsBuybackLimited, CDOTA_BaseNPC_Hero::GetBuybackGoldFactor (17 total)
// callers: CDOTA_PlayerResource::ModifyGold
// strings: "%s.goldperminute"
// globals: CEntityHandle::gm_pEntityList, g_pDOTAPlayerResource
int __fastcall CDOTA_PlayerResource::ModifyGold(
        CDOTA_PlayerResource *const this,
        int iPlayerID,
        int iGoldChange,
        bool bReliable,
        int nReason)
{
  DataTeamPlayer_t *TeamDataForPlayer; // rax
  int v10; // edx
  int v11; // r13d
  CEntityIdentity *v12; // rdx
  CEntityIdentity *v13; // rdx
  DataTeamPlayer_t *v14; // rax
  int m_Value; // eax
  DataTeamPlayer_t *v16; // rax
  int v17; // eax
  DataTeamPlayer_t *v18; // rax
  DataTeamPlayer_t *v19; // r15
  int v20; // eax
  const char *SelectedHeroName; // rax
  CDOTAPlayer *Player; // rax
  CEntityIdentity *v24; // rdx
  CEntityIdentity *v25; // rdx
  CDOTA_BaseNPC_Hero *m_pInstance; // r13
  char *v27; // r14
  CEntityInstance *v28; // rsi
  int v30; // [rsp+Ch] [rbp-154h]
  unsigned __int16 v31[8]; // [rsp+10h] [rbp-150h] BYREF
  char szStatName[264]; // [rsp+20h] [rbp-140h] BYREF
  unsigned __int64 v33; // [rsp+128h] [rbp-38h]

  v33 = __readfsqword(0x28u);
  if ( (nReason - 11) <= 4 || nReason == 0 )
  {
    CDOTA_PlayerResource::GetPlayerSelectedHeroHandle(v31, this, iPlayerID);
    if ( (*v31 + 2) > 1 )
    {
      v24 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v31[0] >> 9) & 0x3F];
      if ( v24 != 0 )
      {
        v25 = &v24[v31[0] & 0x1FF];
        if ( v25 != 0 && *v31 == v25->m_EHandle.m_Index )
        {
          m_pInstance = v25->m_pInstance;
          if ( v25->m_pInstance != 0
            && m_pInstance->m_bIsDOTANPC
            && (m_pInstance->m_iUnitType & 1) != 0
            && CDOTA_BaseNPC_Hero::IsBuybackLimited(v25->m_pInstance) )
          {
            iGoldChange = (CDOTA_BaseNPC_Hero::GetBuybackGoldFactor(m_pInstance) * iGoldChange);
          }
        }
      }
    }
    if ( nReason == 13 )
    {
      CDOTA_PlayerResource::IncrementCreepKillGold(g_pDOTAPlayerResource, iPlayerID, iGoldChange);
      TeamDataForPlayer = CDOTA_PlayerResource::GetTeamDataForPlayer(this, iPlayerID);
      if ( TeamDataForPlayer != 0 )
        goto LABEL_6;
LABEL_44:
      v10 = 0;
LABEL_7:
      v11 = iGoldChange;
      if ( v10 + iGoldChange > 99999 )
        v11 = 99999 - v10;
      CDOTA_PlayerResource::GetPlayerSelectedHeroHandle(v31, this, iPlayerID);
      if ( (*v31 + 2) > 1 )
      {
        v12 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v31[0] >> 9) & 0x3F];
        if ( v12 != 0 )
        {
          v13 = &v12[v31[0] & 0x1FF];
          if ( v13 != 0 && *v31 == v13->m_EHandle.m_Index )
          {
            v28 = v13->m_pInstance;
            if ( v13->m_pInstance != 0
              && BYTE3(v28[7]._vptr_IHandleEntity) != 0
              && (v28[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
            {
              CDOTA_CombatLog::AddGoldEvent(g_pDOTACombatLog, v28, v11, nReason);
            }
          }
        }
      }
      if ( bReliable )
      {
        v14 = CDOTA_PlayerResource::GetTeamDataForPlayer(this, iPlayerID);
        if ( v14 != 0 )
          m_Value = v14->m_iReliableGold.m_Value;
        else
          m_Value = 0;
        if ( m_Value + v11 >= 0 )
        {
          CDOTA_PlayerResource::SetReliableGold(this, iPlayerID, m_Value + v11);
          if ( iGoldChange <= 0 )
            goto LABEL_18;
          goto LABEL_27;
        }
        v11 = -m_Value;
        CDOTA_PlayerResource::SetReliableGold(this, iPlayerID, 0);
      }
      else
      {
        v16 = CDOTA_PlayerResource::GetTeamDataForPlayer(this, iPlayerID);
        if ( v16 != 0 )
          v17 = v16->m_iUnreliableGold.m_Value;
        else
          v17 = 0;
        if ( v17 + v11 < 0 )
        {
          v11 = -v17;
          CDOTA_PlayerResource::SetUnreliableGold(this, iPlayerID, 0);
        }
        else
        {
          CDOTA_PlayerResource::SetUnreliableGold(this, iPlayerID, v17 + v11);
        }
      }
      if ( iGoldChange <= 0 )
      {
LABEL_18:
        if ( v11 < 0 )
        {
          if ( nReason == 1 )
          {
            v27 = this + 4 * iPlayerID;
            *(v27 + 3180) -= v11;
            *(v27 + 3516) = CDOTAGamerules::GetDOTATime(g_pGameRules, 0, 0, 0.0);
          }
          else if ( nReason == 2 )
          {
            *(this + iPlayerID + 3156) -= v11;
          }
        }
        goto LABEL_32;
      }
LABEL_27:
      if ( nReason != 6 )
      {
        v18 = CDOTA_PlayerResource::GetTeamDataForPlayer(this, iPlayerID);
        v19 = v18;
        if ( v18 != 0 )
        {
          v20 = v18->m_iTotalEarnedGold.m_Value;
          v30 = iGoldChange + v20;
          if ( v20 != iGoldChange + v20 )
          {
            DataTeamPlayer_t::NetworkStateChanged(v19, 32, 0xFFFFFFFFLL, -1);
            v19->m_iTotalEarnedGold.m_Value = v30;
          }
        }
        memset(szStatName, 0, 0x100u);
        SelectedHeroName = CDOTA_PlayerResource::GetSelectedHeroName(this, iPlayerID);
        V_snprintf(szStatName, 256, "%s.goldperminute", SelectedHeroName);
        Player = CDOTA_PlayerResource::GetPlayer(this, iPlayerID);
        CDotaStatManager::IncrementTimelineStat(g_pDotaStatManager, Player, iGoldChange, szStatName);
      }
LABEL_32:
      CDOTA_PlayerResource::ComputeNetWorth(this, iPlayerID);
      return v11;
    }
  }
  if ( nReason == 10 )
    CDOTA_PlayerResource::IncrementIncomeGold(g_pDOTAPlayerResource, iPlayerID, iGoldChange);
  TeamDataForPlayer = CDOTA_PlayerResource::GetTeamDataForPlayer(this, iPlayerID);
  if ( TeamDataForPlayer == 0 )
    goto LABEL_44;
LABEL_6:
  v10 = TeamDataForPlayer->m_iUnreliableGold.m_Value + TeamDataForPlayer->m_iReliableGold.m_Value;
  goto LABEL_7;
}


// CDOTA_PlayerResource::ModifyGold  (line 1063, @0x000000000267a1e0, libserver.so)  // inlines: IsValidTeamPlayerID
// calls: CDOTA_PlayerResource::ModifyGold
// callers: CDOTA_Item_BagOfGold::OnSpellStart, CDOTAGamerules::DeliverGoldToPlayers, CDOTAGamerules::SwapPlayers, CDOTAGamerules::State_Enter_GAME_IN_PROGRESS, CDOTAGamerules::DistributeAbandonedPlayerGold, CDOTAGamerules::MakeRandomHeroSelection, CDOTA_Modifier_Illusion::OnDeath, CDOTAPlayer::HandleHeroSelection, CDOTAPlayer::ClientCommand, CDOTA_Modifier_Special_Bonus_Gold_Income::OnIntervalThink, CDOTA_Tutorial::SetPlayerGold, CDOTA_UnitInventory::SellItem (24 total)
int __fastcall CDOTA_PlayerResource::ModifyGold(
        CDOTA_PlayerResource *const this,
        int iPlayerID,
        int iGoldChange,
        bool bReliable,
        int nReason)
{
  if ( iPlayerID < 0 || iPlayerID >= *(this + 194) )
    return 0;
  else
    return CDOTA_PlayerResource::ModifyGold(this, iPlayerID, iGoldChange, bReliable, nReason);
}


// CDOTA_PlayerResource::SetGold  (line 1182, @0x0000000002663c70, libserver.so)  // inlines: IsValidTeamPlayerID
// calls: CDOTA_PlayerResource::SetReliableGold, CDOTA_PlayerResource::SetUnreliableGold
// callers: CDOTA_PlayerResource::OnHeroReplaced, CDOTA_Tutorial::SetPlayerGold, CDOTA_BaseNPC_Hero::SetGold, Playtesting_SwapPlayers, Playtesting_ChangeToRandomHero, CDOTA_BaseNPC_Hero::Buyback
void __fastcall CDOTA_PlayerResource::SetGold(
        CDOTA_PlayerResource *const this,
        int iPlayerID,
        int iGold,
        bool bReliable)
{
  int v4; // eax
  int v5; // edx
  int v6; // eax
  int v7; // edx

  if ( iPlayerID >= 0 && iPlayerID < *(this + 194) )
  {
    if ( bReliable )
    {
      v4 = 0;
      if ( iGold >= 0 )
        v4 = iGold;
      v5 = 99999;
      if ( v4 <= 99999 )
        v5 = v4;
      CDOTA_PlayerResource::SetReliableGold(this, iPlayerID, v5);
    }
    else
    {
      v6 = 0;
      if ( iGold >= 0 )
        v6 = iGold;
      v7 = 99999;
      if ( v6 <= 99999 )
        v7 = v6;
      CDOTA_PlayerResource::SetUnreliableGold(this, iPlayerID, v7);
    }
  }
}


// CDOTA_PlayerResource::SpendGold  (line 1200, @0x0000000002663cd0, libserver.so)  // inlines: GetReliableGold, GetUnreliableGold, IsValidTeamPlayerID
// calls: CDOTA_PlayerResource::GetTeamDataForPlayer, CDOTA_PlayerResource::SetUnreliableGold, CDOTAGamerules::GetDOTATime, CDOTA_PlayerResource::SetReliableGold
// callers: CDOTABaseAbility::PayGoldCost, CDOTABaseAbility::PayGoldCostForUpgrade, SpendSelectPenaltyGold, CDOTAGamerules::DistributeAbandonedPlayerGold, CDOTA_BaseNPC_Hero::SpendGold, CDOTA_BaseNPC::AttemptToPurchaseItem
void __fastcall CDOTA_PlayerResource::SpendGold(
        CDOTA_PlayerResource *const this,
        int iPlayerID,
        int iCost,
        int iReason)
{
  __int64 v4; // rbx
  DataTeamPlayer_t *TeamDataForPlayer; // rax
  int m_Value; // edx
  char *v10; // rbx
  int v11; // ecx
  int v12; // edx
  char *v13; // rbx

  v4 = iPlayerID;
  if ( iPlayerID >= 0 && iPlayerID < *(this + 194) )
  {
    TeamDataForPlayer = CDOTA_PlayerResource::GetTeamDataForPlayer(this, iPlayerID);
    if ( TeamDataForPlayer != 0 )
    {
      m_Value = TeamDataForPlayer->m_iUnreliableGold.m_Value;
      if ( iCost <= m_Value )
        goto LABEL_5;
      v11 = iCost - m_Value;
      v12 = TeamDataForPlayer->m_iReliableGold.m_Value;
    }
    else
    {
      if ( iCost <= 0 )
      {
        m_Value = 0;
LABEL_5:
        CDOTA_PlayerResource::SetUnreliableGold(this, v4, m_Value - iCost);
        if ( iReason != 3 )
          goto LABEL_6;
        goto LABEL_11;
      }
      v11 = iCost;
      v12 = 0;
    }
    CDOTA_PlayerResource::SetReliableGold(this, v4, v12 - v11);
    CDOTA_PlayerResource::SetUnreliableGold(this, v4, 0);
    if ( iReason != 3 )
    {
LABEL_6:
      if ( iReason == 4 )
      {
        v10 = this + 4 * v4;
        *(v10 + 3132) += iCost;
        ++*(v10 + 3300);
        *(v10 + 3468) = CDOTAGamerules::GetDOTATime(g_pGameRules, 0, 0, 0.0);
      }
      return;
    }
LABEL_11:
    v13 = this + 4 * v4;
    *(v13 + 3108) += iCost;
    ++*(v13 + 3276);
    *(v13 + 3492) = CDOTAGamerules::GetDOTATime(g_pGameRules, 0, 0, 0.0);
  }
}


// CDOTA_PlayerResource::AddGoldSpentOnSupport  (line 1255, @0x0000000002663b20, libserver.so)  // inlines: Get, IsValidTeamPlayerID, NetworkStateChanged, Set, operator CEntityInstance*, operator=<int>
// calls: CDOTA_PlayerResource::GetTeamDataForPlayer
// callers: CDOTA_UnitInventory::SellItem, CDOTA_BaseNPC::AttemptToPurchaseItem
void __fastcall CDOTA_PlayerResource::AddGoldSpentOnSupport(CDOTA_PlayerResource *const this, int iPlayerID, int iCost)
{
  char *v3; // rax
  int v4; // ebx
  DataTeamPlayer_t *TeamDataForPlayer; // rax
  CEntityInstance *m_pObj; // rdi
  DataTeamPlayer_t *v7; // [rsp-20h] [rbp-20h]

  if ( iPlayerID >= 0 && iPlayerID < *(this + 194) )
  {
    v3 = this + 4 * iPlayerID;
    v4 = iCost + *(v3 + 3084);
    *(v3 + 3084) = v4;
    TeamDataForPlayer = CDOTA_PlayerResource::GetTeamDataForPlayer(this, iPlayerID);
    if ( TeamDataForPlayer != 0 && v4 != TeamDataForPlayer->m_iGoldSpentOnSupport.m_Value )
    {
      m_pObj = TeamDataForPlayer->__m_pChainEntity.m_pObj;
      if ( m_pObj != 0 && (m_pObj->m_pEntity->m_flags & 0x400) == 0 && TeamDataForPlayer->__m_PathIndex.m_Value != -1 )
      {
        v7 = TeamDataForPlayer;
        (*(m_pObj->_vptr_IHandleEntity + 22))(m_pObj, 164, 0xFFFFFFFFLL, TeamDataForPlayer->__m_PathIndex.m_Value);
        TeamDataForPlayer = v7;
      }
      TeamDataForPlayer->m_iGoldSpentOnSupport.m_Value = v4;
    }
  }
}


// CDOTA_PlayerResource::GetGoldSpentOnSupport  (line 1268, @0x0000000002653cd0, libserver.so)  // inlines: IsValidTeamPlayerID
// callers: CDOTA_RealtimeCombatAnalyzer::PerformStorageForEvent, CDOTA_RealtimeCombatAnalyzer::EvaluateGameState, CDOTA_OGS::LogMatchSnapshot, CDOTAGCServerSystem::FillMatchDetailsForTeam
int __fastcall CDOTA_PlayerResource::GetGoldSpentOnSupport(CDOTA_PlayerResource *const this, int iPlayerID)
{
  int result; // eax

  result = 0;
  if ( iPlayerID >= 0 && iPlayerID < *(this + 194) )
    return *(this + iPlayerID + 3084);
  return result;
}


// CDOTA_PlayerResource::SetReliableGold  (line 1276, @0x0000000002663bb0, libserver.so)  // inlines: Get, NetworkStateChanged, Set, operator CEntityInstance*, operator=<int>
// calls: CDOTA_PlayerResource::GetTeamDataForPlayer
// callers: CDOTA_PlayerResource::SetGold, CDOTA_PlayerResource::SpendGold, CDOTA_PlayerResource::ModifyGold, CDOTA_PlayerResource::LoadSaveGameInformation
void __fastcall CDOTA_PlayerResource::SetReliableGold(CDOTA_PlayerResource *const this, int iPlayerID, int iGoldAmount)
{
  DataTeamPlayer_t *TeamDataForPlayer; // rax
  CEntityInstance *m_pObj; // rdi
  DataTeamPlayer_t *pTeamData; // [rsp+8h] [rbp-18h]

  TeamDataForPlayer = CDOTA_PlayerResource::GetTeamDataForPlayer(this, iPlayerID);
  if ( TeamDataForPlayer != 0 && TeamDataForPlayer->m_iReliableGold.m_Value != iGoldAmount )
  {
    m_pObj = TeamDataForPlayer->__m_pChainEntity.m_pObj;
    if ( m_pObj != 0 && (m_pObj->m_pEntity->m_flags & 0x400) == 0 && TeamDataForPlayer->__m_PathIndex.m_Value != -1 )
    {
      pTeamData = TeamDataForPlayer;
      (*(m_pObj->_vptr_IHandleEntity + 22))(m_pObj, 20, 0xFFFFFFFFLL, TeamDataForPlayer->__m_PathIndex.m_Value);
      TeamDataForPlayer = pTeamData;
    }
    TeamDataForPlayer->m_iReliableGold.m_Value = iGoldAmount;
  }
}


// CDOTA_PlayerResource::SetUnreliableGold  (line 1284, @0x0000000002663c10, libserver.so)  // inlines: Get, NetworkStateChanged, Set, operator CEntityInstance*, operator=<int>
// calls: CDOTA_PlayerResource::GetTeamDataForPlayer
// callers: CDOTA_PlayerResource::SetGold, CDOTA_PlayerResource::SpendGold, CDOTA_PlayerResource::ModifyGold, CDOTA_PlayerResource::LoadSaveGameInformation
void __fastcall CDOTA_PlayerResource::SetUnreliableGold(
        CDOTA_PlayerResource *const this,
        int iPlayerID,
        int iGoldAmount)
{
  DataTeamPlayer_t *TeamDataForPlayer; // rax
  CEntityInstance *m_pObj; // rdi
  DataTeamPlayer_t *pTeamData; // [rsp+8h] [rbp-18h]

  TeamDataForPlayer = CDOTA_PlayerResource::GetTeamDataForPlayer(this, iPlayerID);
  if ( TeamDataForPlayer != 0 && TeamDataForPlayer->m_iUnreliableGold.m_Value != iGoldAmount )
  {
    m_pObj = TeamDataForPlayer->__m_pChainEntity.m_pObj;
    if ( m_pObj != 0 && (m_pObj->m_pEntity->m_flags & 0x400) == 0 && TeamDataForPlayer->__m_PathIndex.m_Value != -1 )
    {
      pTeamData = TeamDataForPlayer;
      (*(m_pObj->_vptr_IHandleEntity + 22))(m_pObj, 24, 0xFFFFFFFFLL, TeamDataForPlayer->__m_PathIndex.m_Value);
      TeamDataForPlayer = pTeamData;
    }
    TeamDataForPlayer->m_iUnreliableGold.m_Value = iGoldAmount;
  }
}


// CDOTA_PlayerResource::ResetTotalEarnedGold  (line 1294, @0x0000000002663ab0, libserver.so)  // inlines: Get, NetworkStateChanged, Set, operator CEntityInstance*, operator=<int>
// calls: CDOTA_PlayerResource::GetTeamDataForPlayer
// callers: CDOTAGamerules::MakeRandomHeroSelection, CDOTA_PlayerResource::ReplaceHeroWith
void __fastcall CDOTA_PlayerResource::ResetTotalEarnedGold(CDOTA_PlayerResource *const this, int iPlayerID)
{
  DataTeamPlayer_t *TeamDataForPlayer; // rax
  CEntityInstance *m_pObj; // rdi
  DataTeamPlayer_t *pTeamData; // [rsp+8h] [rbp-8h]

  TeamDataForPlayer = CDOTA_PlayerResource::GetTeamDataForPlayer(this, iPlayerID);
  if ( TeamDataForPlayer != 0 && TeamDataForPlayer->m_iTotalEarnedGold.m_Value != 0 )
  {
    m_pObj = TeamDataForPlayer->__m_pChainEntity.m_pObj;
    if ( m_pObj != 0 && (m_pObj->m_pEntity->m_flags & 0x400) == 0 && TeamDataForPlayer->__m_PathIndex.m_Value != -1 )
    {
      pTeamData = TeamDataForPlayer;
      (*(m_pObj->_vptr_IHandleEntity + 22))(m_pObj, 32, 0xFFFFFFFFLL, TeamDataForPlayer->__m_PathIndex.m_Value);
      TeamDataForPlayer = pTeamData;
    }
    TeamDataForPlayer->m_iTotalEarnedGold.m_Value = 0;
  }
}


// CDOTA_PlayerResource::IncrementSharedGold  (line 1304, @0x0000000002663de0, libserver.so)  // inlines: Get, NetworkStateChanged, Set, operator CEntityInstance*, operator+=<int>
// calls: CDOTA_PlayerResource::GetTeamDataForPlayer
// callers: CDOTAHeroList::GiveNearbyHeroGoldBonus
void __fastcall CDOTA_PlayerResource::IncrementSharedGold(CDOTA_PlayerResource *const this, int iPlayerID, int iGold)
{
  DataTeamPlayer_t *TeamDataForPlayer; // rax
  int m_Value; // ecx
  int v6; // ebx
  CEntityInstance *m_pObj; // rdi
  DataTeamPlayer_t *pTeamData; // [rsp+8h] [rbp-18h]

  TeamDataForPlayer = CDOTA_PlayerResource::GetTeamDataForPlayer(this, iPlayerID);
  if ( TeamDataForPlayer != 0 )
  {
    m_Value = TeamDataForPlayer->m_iSharedGold.m_Value;
    v6 = m_Value + iGold;
    if ( m_Value != v6 )
    {
      m_pObj = TeamDataForPlayer->__m_pChainEntity.m_pObj;
      if ( m_pObj != 0 && (m_pObj->m_pEntity->m_flags & 0x400) == 0 && TeamDataForPlayer->__m_PathIndex.m_Value != -1 )
      {
        pTeamData = TeamDataForPlayer;
        (*(m_pObj->_vptr_IHandleEntity + 22))(m_pObj, 40, 0xFFFFFFFFLL, TeamDataForPlayer->__m_PathIndex.m_Value);
        TeamDataForPlayer = pTeamData;
      }
      TeamDataForPlayer->m_iSharedGold.m_Value = v6;
    }
  }
}


// CDOTA_PlayerResource::IncrementHeroKillGold  (line 1314, @0x0000000002663e50, libserver.so)  // inlines: Get, NetworkStateChanged, Set, operator CEntityInstance*, operator+=<int>
// calls: CDOTA_PlayerResource::GetTeamDataForPlayer
// callers: CDOTAHeroList::GiveNearbyHeroGoldBonus, CDOTAHeroList::GivePlayerFullBountyGold, CDOTAHeroList::GiveKillerBountyGold
void __fastcall CDOTA_PlayerResource::IncrementHeroKillGold(CDOTA_PlayerResource *const this, int iPlayerID, int iGold)
{
  DataTeamPlayer_t *TeamDataForPlayer; // rax
  int m_Value; // ecx
  int v6; // ebx
  CEntityInstance *m_pObj; // rdi
  DataTeamPlayer_t *pTeamData; // [rsp+8h] [rbp-18h]

  TeamDataForPlayer = CDOTA_PlayerResource::GetTeamDataForPlayer(this, iPlayerID);
  if ( TeamDataForPlayer != 0 )
  {
    m_Value = TeamDataForPlayer->m_iHeroKillGold.m_Value;
    v6 = m_Value + iGold;
    if ( m_Value != v6 )
    {
      m_pObj = TeamDataForPlayer->__m_pChainEntity.m_pObj;
      if ( m_pObj != 0 && (m_pObj->m_pEntity->m_flags & 0x400) == 0 && TeamDataForPlayer->__m_PathIndex.m_Value != -1 )
      {
        pTeamData = TeamDataForPlayer;
        (*(m_pObj->_vptr_IHandleEntity + 22))(m_pObj, 44, 0xFFFFFFFFLL, TeamDataForPlayer->__m_PathIndex.m_Value);
        TeamDataForPlayer = pTeamData;
      }
      TeamDataForPlayer->m_iHeroKillGold.m_Value = v6;
    }
  }
}


// CDOTA_PlayerResource::IncrementCreepKillGold  (line 1324, @0x0000000002663ec0, libserver.so)  // inlines: Get, NetworkStateChanged, Set, operator CEntityInstance*, operator+=<int>
// calls: CDOTA_PlayerResource::GetTeamDataForPlayer
// callers: CDOTA_PlayerResource::ModifyGold
void __fastcall CDOTA_PlayerResource::IncrementCreepKillGold(
        CDOTA_PlayerResource *const this,
        int iPlayerID,
        int iGold)
{
  DataTeamPlayer_t *TeamDataForPlayer; // rax
  int m_Value; // ecx
  int v6; // ebx
  CEntityInstance *m_pObj; // rdi
  DataTeamPlayer_t *pTeamData; // [rsp+8h] [rbp-18h]

  TeamDataForPlayer = CDOTA_PlayerResource::GetTeamDataForPlayer(this, iPlayerID);
  if ( TeamDataForPlayer != 0 )
  {
    m_Value = TeamDataForPlayer->m_iCreepKillGold.m_Value;
    v6 = m_Value + iGold;
    if ( m_Value != v6 )
    {
      m_pObj = TeamDataForPlayer->__m_pChainEntity.m_pObj;
      if ( m_pObj != 0 && (m_pObj->m_pEntity->m_flags & 0x400) == 0 && TeamDataForPlayer->__m_PathIndex.m_Value != -1 )
      {
        pTeamData = TeamDataForPlayer;
        (*(m_pObj->_vptr_IHandleEntity + 22))(m_pObj, 48, 0xFFFFFFFFLL, TeamDataForPlayer->__m_PathIndex.m_Value);
        TeamDataForPlayer = pTeamData;
      }
      TeamDataForPlayer->m_iCreepKillGold.m_Value = v6;
    }
  }
}


// CDOTA_PlayerResource::IncrementIncomeGold  (line 1334, @0x0000000002663f30, libserver.so)  // inlines: Get, NetworkStateChanged, Set, operator CEntityInstance*, operator+=<int>
// calls: CDOTA_PlayerResource::GetTeamDataForPlayer
// callers: CDOTA_PlayerResource::ModifyGold
void __fastcall CDOTA_PlayerResource::IncrementIncomeGold(CDOTA_PlayerResource *const this, int iPlayerID, int iGold)
{
  DataTeamPlayer_t *TeamDataForPlayer; // rax
  int m_Value; // ecx
  int v6; // ebx
  CEntityInstance *m_pObj; // rdi
  DataTeamPlayer_t *pTeamData; // [rsp+8h] [rbp-18h]

  TeamDataForPlayer = CDOTA_PlayerResource::GetTeamDataForPlayer(this, iPlayerID);
  if ( TeamDataForPlayer != 0 )
  {
    m_Value = TeamDataForPlayer->m_iIncomeGold.m_Value;
    v6 = m_Value + iGold;
    if ( m_Value != v6 )
    {
      m_pObj = TeamDataForPlayer->__m_pChainEntity.m_pObj;
      if ( m_pObj != 0 && (m_pObj->m_pEntity->m_flags & 0x400) == 0 && TeamDataForPlayer->__m_PathIndex.m_Value != -1 )
      {
        pTeamData = TeamDataForPlayer;
        (*(m_pObj->_vptr_IHandleEntity + 22))(m_pObj, 52, 0xFFFFFFFFLL, TeamDataForPlayer->__m_PathIndex.m_Value);
        TeamDataForPlayer = pTeamData;
      }
      TeamDataForPlayer->m_iIncomeGold.m_Value = v6;
    }
  }
}


// CDOTA_PlayerResource::AddBonusGoldEarned  (line 1344, @0x000000000265d370, libserver.so)  // inlines: IsValidTeamPlayerID
// callers: CDOTAHeroList::GiveNearbyHeroGoldBonus
void __fastcall CDOTA_PlayerResource::AddBonusGoldEarned(CDOTA_PlayerResource *const this, int iPlayerID, int iGold)
{
  if ( iPlayerID >= 0 && iPlayerID < *(this + 194) )
    *(this + iPlayerID + 3204) += iGold;
}


// CDOTA_PlayerResource::GetBonusGoldEarned  (line 1355, @0x000000000265d390, libserver.so)  // inlines: IsValidTeamPlayerID
// callers: CDOTAGCServerSystem::MatchSignOut
int __fastcall CDOTA_PlayerResource::GetBonusGoldEarned(CDOTA_PlayerResource *const this, int iPlayerID)
{
  int result; // eax

  result = 0;
  if ( iPlayerID >= 0 && iPlayerID < *(this + 194) )
    return *(this + iPlayerID + 3204);
  return result;
}


// CDOTA_PlayerResource::IncrementTotalEarnedXP  (line 1366, @0x0000000002663fa0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, NetworkStateChanged, Set, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CBaseEntity*, operator CEntityInstance*, operator+=<int>
// calls: CDOTA_PlayerResource::GetTeamDataForPlayer, CDOTA_PlayerResource::GetSelectedHeroName, V_snprintf, CDOTA_PlayerResource::GetPlayer, CDotaStatManager::IncrementTimelineStat, CDOTA_PlayerResource::GetPlayerSelectedHeroHandle, __stack_chk_fail, CDOTA_CombatLog::AddXPEvent
// callers: CDOTA_PlayerResource::IncrementTotalEarnedXP
// strings: "%s.xpperminute"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_PlayerResource::IncrementTotalEarnedXP(
        CDOTA_PlayerResource *const this,
        int iPlayerID,
        int iXP,
        int nReason)
{
  DataTeamPlayer_t *TeamDataForPlayer; // rax
  int m_Value; // edx
  int v10; // r15d
  CEntityInstance *m_pObj; // rdi
  const char *SelectedHeroName; // rax
  CDOTAPlayer *Player; // rax
  CEntityIdentity *v14; // rdx
  CEntityIdentity *v15; // rdx
  CEntityInstance *m_pInstance; // rsi
  DataTeamPlayer_t *pTeamData; // [rsp+8h] [rbp-158h]
  int v18[4]; // [rsp+10h] [rbp-150h] BYREF
  char szStatName[264]; // [rsp+20h] [rbp-140h] BYREF
  unsigned __int64 v20; // [rsp+128h] [rbp-38h]

  v20 = __readfsqword(0x28u);
  TeamDataForPlayer = CDOTA_PlayerResource::GetTeamDataForPlayer(this, iPlayerID);
  if ( TeamDataForPlayer != 0 )
  {
    m_Value = TeamDataForPlayer->m_iTotalEarnedXP.m_Value;
    v10 = m_Value + iXP;
    if ( m_Value != m_Value + iXP )
    {
      m_pObj = TeamDataForPlayer->__m_pChainEntity.m_pObj;
      if ( m_pObj != 0 && (m_pObj->m_pEntity->m_flags & 0x400) == 0 && TeamDataForPlayer->__m_PathIndex.m_Value != -1 )
      {
        pTeamData = TeamDataForPlayer;
        (*(m_pObj->_vptr_IHandleEntity + 22))(m_pObj, 36, 0xFFFFFFFFLL, TeamDataForPlayer->__m_PathIndex.m_Value);
        TeamDataForPlayer = pTeamData;
      }
      TeamDataForPlayer->m_iTotalEarnedXP.m_Value = v10;
    }
  }
  memset(szStatName, 0, 0x100u);
  SelectedHeroName = CDOTA_PlayerResource::GetSelectedHeroName(this, iPlayerID);
  V_snprintf(szStatName, 256, "%s.xpperminute", SelectedHeroName);
  Player = CDOTA_PlayerResource::GetPlayer(this, iPlayerID);
  CDotaStatManager::IncrementTimelineStat(g_pDotaStatManager, Player, iXP, szStatName);
  CDOTA_PlayerResource::GetPlayerSelectedHeroHandle(v18, this, iPlayerID);
  if ( (v18[0] + 2) > 1 )
  {
    v14 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v18[0]) >> 9) & 0x3F];
    if ( v14 != 0 )
    {
      v15 = &v14[v18[0] & 0x1FF];
      if ( v15 != 0 && v18[0] == v15->m_EHandle.m_Index )
      {
        m_pInstance = v15->m_pInstance;
        if ( v15->m_pInstance != 0
          && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
          && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
        {
          CDOTA_CombatLog::AddXPEvent(g_pDOTACombatLog, m_pInstance, iXP, nReason);
        }
      }
    }
  }
}


// CDOTA_PlayerResource::IncrementTotalEarnedXP  (line 1366, @0x0000000002664150, libserver.so)  // inlines: IsValidTeamPlayerID
// calls: CDOTA_PlayerResource::IncrementTotalEarnedXP
// callers: CDOTA_BaseNPC_Hero::AddExperience
void __fastcall CDOTA_PlayerResource::IncrementTotalEarnedXP(
        CDOTA_PlayerResource *const this,
        int iPlayerID,
        int iXP,
        int nReason)
{
  if ( iPlayerID >= 0 && iPlayerID < *(this + 194) )
    CDOTA_PlayerResource::IncrementTotalEarnedXP(this, iPlayerID, iXP, nReason);
}


// CDOTA_PlayerResource::SetStartingPosition  (line 1389, @0x0000000002664180, libserver.so)  // inlines: Get, NetworkStateChanged, Set, operator CEntityInstance*, operator=<int>
// calls: CDOTA_PlayerResource::GetTeamDataForPlayer
// callers: CDOTAPlayer::HandleSelectStartingPosition
void __fastcall CDOTA_PlayerResource::SetStartingPosition(
        CDOTA_PlayerResource *const this,
        int iPlayerID,
        int nStartingPosition)
{
  DataTeamPlayer_t *TeamDataForPlayer; // rax
  CEntityInstance *m_pObj; // rdi
  DataTeamPlayer_t *pTeamData; // [rsp+8h] [rbp-18h]

  TeamDataForPlayer = CDOTA_PlayerResource::GetTeamDataForPlayer(this, iPlayerID);
  if ( TeamDataForPlayer != 0 && TeamDataForPlayer->m_iStartingPosition.m_Value != nStartingPosition )
  {
    m_pObj = TeamDataForPlayer->__m_pChainEntity.m_pObj;
    if ( m_pObj != 0 && (m_pObj->m_pEntity->m_flags & 0x400) == 0 && TeamDataForPlayer->__m_PathIndex.m_Value != -1 )
    {
      pTeamData = TeamDataForPlayer;
      (*(m_pObj->_vptr_IHandleEntity + 22))(m_pObj, 28, 0xFFFFFFFFLL, TeamDataForPlayer->__m_PathIndex.m_Value);
      TeamDataForPlayer = pTeamData;
    }
    TeamDataForPlayer->m_iStartingPosition.m_Value = nStartingPosition;
  }
}


// CDOTA_PlayerResource::SetEnemyStartingPosition  (line 1400, @0x000000000265d3b0, libserver.so)  // inlines: GetForModify, IsValidTeamPlayerID, NetworkStateChanged
// calls: CDOTA_PlayerResource::GetTeam
// callers: CDOTAGamerules::ClientMsg_SetEnemyStartingPosition
void __fastcall CDOTA_PlayerResource::SetEnemyStartingPosition(
        CDOTA_PlayerResource *const this,
        int nTeamNumber,
        int iEnemyPlayerID,
        DOTA_STARTING_POSITION_TYPE nEnemyStartingPosition)
{
  CDOTA_DataNonSpectator *v5; // r13
  __int64 v7; // rbx

  if ( nTeamNumber <= 0xD )
  {
    v5 = g_pDOTADataTeams[nTeamNumber];
    if ( v5 != 0
      && iEnemyPlayerID >= 0
      && iEnemyPlayerID < *(this + 194)
      && nTeamNumber != CDOTA_PlayerResource::GetTeam(this, iEnemyPlayerID) )
    {
      v7 = *(*(this + 98) + 200LL * iEnemyPlayerID + 124);
      if ( v7 <= 4 )
      {
        (*(v5->_vptr_IHandleEntity + 22))(v5, 2912, v7, 0xFFFFFFFFLL);
        v5->m_nEnemyStartingPosition.m_Value[v7] = nEnemyStartingPosition;
      }
    }
  }
}


// CDOTA_PlayerResource::GetEnemyStartingPosition  (line 1424, @0x000000000265d450, libserver.so)  // inlines: IsValidTeamPlayerID
// calls: CDOTA_PlayerResource::GetTeam
DOTA_STARTING_POSITION_TYPE __fastcall CDOTA_PlayerResource::GetEnemyStartingPosition(
        CDOTA_PlayerResource *const this,
        int nTeamNumber,
        int iEnemyPlayerID)
{
  DOTA_STARTING_POSITION_TYPE v3; // ebx
  CDOTA_DataNonSpectator *v4; // r14
  __int64 v6; // rax

  v3 = DOTA_STARTING_POSITION_TYPE::DOTA_STARTING_POSITION_NONE;
  if ( nTeamNumber <= 0xD )
  {
    v4 = g_pDOTADataTeams[nTeamNumber];
    if ( v4 != 0
      && iEnemyPlayerID >= 0
      && iEnemyPlayerID < *(this + 194)
      && nTeamNumber != CDOTA_PlayerResource::GetTeam(this, iEnemyPlayerID) )
    {
      v6 = *(*(this + 98) + 200LL * iEnemyPlayerID + 124);
      if ( v6 <= 4 )
        return v4->m_nEnemyStartingPosition.m_Value[v6];
    }
  }
  return v3;
}


// CDOTA_PlayerResource::GetDesiredWardPlacement  (line 1448, @0x000000000265d4e0, libserver.so)  // inlines: Vector2D
// globals: DOTA_DESIRED_WARD_PLACEMENT_INVALID
Vector2D *__fastcall CDOTA_PlayerResource::GetDesiredWardPlacement(
        Vector2D *a1,
        CDOTA_PlayerResource *const this,
        unsigned int nTeamNumber,
        unsigned int nWardIndex)
{
  Vector2D *result; // rax
  CDOTA_DataNonSpectator *v5; // rdx
  Vector2D *v6; // rdx

  result = a1;
  if ( nTeamNumber <= 0xD && (v5 = g_pDOTADataTeams[nTeamNumber]) != 0 && nWardIndex <= 1 )
  {
    v6 = &v5->m_vDesiredWardPlacement.m_Value[nWardIndex];
    a1->x = v6->x;
    a1->y = v6->y;
  }
  else
  {
    *a1 = DOTA_DESIRED_WARD_PLACEMENT_INVALID;
  }
  return result;
}


// CDOTA_PlayerResource::SetDesiredWardPlacement  (line 1465, @0x000000000265d540, libserver.so)  // inlines: GetForModify, NetworkStateChanged, operator=
// callers: CDOTAGamerules::ClientMsg_SetDesiredWardPlacement
void __fastcall CDOTA_PlayerResource::SetDesiredWardPlacement(
        CDOTA_PlayerResource *const this,
        int nTeamNumber,
        int nWardIndex,
        const Vector2D *const vPosition)
{
  __int64 v4; // rbx
  CDOTA_DataNonSpectator *v5; // r12

  v4 = nWardIndex;
  if ( nTeamNumber <= 0xD )
  {
    v5 = g_pDOTADataTeams[nTeamNumber];
    if ( v5 != 0 && nWardIndex <= 1 )
    {
      (*(v5->_vptr_IHandleEntity + 22))(v5, 2896, nWardIndex, 0xFFFFFFFFLL);
      v5->m_vDesiredWardPlacement.m_Value[v4] = *vPosition;
    }
  }
}


// CDOTA_PlayerResource::GetClaimedFarm  (line 1482, @0x0000000002653cf0, libserver.so)  // inlines: IsValidTeamPlayerID
// callers: CDOTA_CombatLog::GenerateExperimentalTimedStats, CDOTAGCServerSystem::FillMatchDetailsForTeam
float __fastcall CDOTA_PlayerResource::GetClaimedFarm(
        CDOTA_PlayerResource *const this,
        int iPlayerID,
        bool bOnlyEarned)
{
  if ( iPlayerID < 0 || iPlayerID >= *(this + 194) )
    return 0.0;
  if ( bOnlyEarned )
    return *(this + iPlayerID + 488);
  return *(this + iPlayerID + 464);
}


// CDOTA_PlayerResource::GetScaledPlayerDamage  (line 1490, @0x000000000265d5c0, libserver.so)  // inlines: IsValidTeamPlayerID
// callers: CDOTA_OGS::LogHeroResults, CDOTAGCServerSystem::FillMatchDetailsForTeam
int __fastcall CDOTA_PlayerResource::GetScaledPlayerDamage(CDOTA_PlayerResource *const this, int iPlayerID)
{
  int result; // eax

  result = 0;
  if ( iPlayerID >= 0 && iPlayerID < *(this + 194) )
    return *(this + iPlayerID + 512);
  return result;
}


// CDOTA_PlayerResource::GetScaledTowerDamage  (line 1498, @0x000000000265d5e0, libserver.so)  // inlines: IsValidTeamPlayerID
// callers: CDOTA_OGS::LogHeroResults, CDOTAGCServerSystem::FillMatchDetailsForTeam
int __fastcall CDOTA_PlayerResource::GetScaledTowerDamage(CDOTA_PlayerResource *const this, int iPlayerID)
{
  int result; // eax

  result = 0;
  if ( iPlayerID >= 0 && iPlayerID < *(this + 194) )
    return *(this + iPlayerID + 536);
  return result;
}


// CDOTA_PlayerResource::GetScaledHealing  (line 1506, @0x000000000265d600, libserver.so)  // inlines: IsValidTeamPlayerID
// callers: CDOTA_OGS::LogHeroResults, CDOTAGCServerSystem::FillMatchDetailsForTeam
int __fastcall CDOTA_PlayerResource::GetScaledHealing(CDOTA_PlayerResource *const this, int iPlayerID)
{
  int result; // eax

  result = 0;
  if ( iPlayerID >= 0 && iPlayerID < *(this + 194) )
    return *(this + iPlayerID + 560);
  return result;
}


// CDOTA_PlayerResource::GetSupportAbilityValue  (line 1514, @0x000000000265d620, libserver.so)  // inlines: IsValidTeamPlayerID
// callers: CDOTAGCServerSystem::FillMatchDetailsForTeam
int __fastcall CDOTA_PlayerResource::GetSupportAbilityValue(CDOTA_PlayerResource *const this, int iPlayerID)
{
  int result; // eax

  result = 0;
  if ( iPlayerID >= 0 && iPlayerID < *(this + 194) )
    return *(this + iPlayerID + 584);
  return result;
}


// CDOTA_PlayerResource::GetRawPlayerDamage  (line 1522, @0x0000000002653d30, libserver.so)  // inlines: IsValidTeamPlayerID
// callers: CDOTA_CombatLog::GenerateExperimentalTimedStats, CDOTA_OGS::LogHeroResults, CDOTAGCServerSystem::FillMatchDetailsForTeam, CDOTAGCServerSystem::SendMatchDetailsToClients, CDOTAGCServerSystem::UpdateRealtimeGameState
int __fastcall CDOTA_PlayerResource::GetRawPlayerDamage(CDOTA_PlayerResource *const this, int iPlayerID)
{
  int result; // eax

  result = 0;
  if ( iPlayerID >= 0 && iPlayerID < *(this + 194) )
    return *(this + iPlayerID + 608);
  return result;
}


// CDOTA_PlayerResource::GetRawTowerDamage  (line 1530, @0x000000000265d640, libserver.so)  // inlines: IsValidTeamPlayerID
// callers: CDOTA_CombatLog::GenerateExperimentalTimedStats, CDOTA_OGS::LogHeroResults, CDOTAGCServerSystem::FillMatchDetailsForTeam, CDOTAGCServerSystem::SendMatchDetailsToClients, CDOTAGCServerSystem::UpdateRealtimeGameState
int __fastcall CDOTA_PlayerResource::GetRawTowerDamage(CDOTA_PlayerResource *const this, int iPlayerID)
{
  int result; // eax

  result = 0;
  if ( iPlayerID >= 0 && iPlayerID < *(this + 194) )
    return *(this + iPlayerID + 632);
  return result;
}


// CDOTA_PlayerResource::GetRawHealing  (line 1538, @0x000000000265d660, libserver.so)  // inlines: IsValidTeamPlayerID
// callers: CDOTA_OGS::LogHeroResults, CDOTAGCServerSystem::FillMatchDetailsForTeam, CDOTAGCServerSystem::SendMatchDetailsToClients, CDOTAGCServerSystem::UpdateRealtimeGameState
int __fastcall CDOTA_PlayerResource::GetRawHealing(CDOTA_PlayerResource *const this, int iPlayerID)
{
  int result; // eax

  result = 0;
  if ( iPlayerID >= 0 && iPlayerID < *(this + 194) )
    return *(this + iPlayerID + 656);
  return result;
}


// CDOTA_PlayerResource::AddDamageTaken  (line 1548, @0x0000000002684be0, libserver.so)  // inlines: AddToTail, CEntityHandle, CopyConstruct<DamageShareEvent_t>, Element, Get, GetAssignedHero, GetAttacker, GetEntityIdentity, GetEntryIndex, GetHandleEntity, GetHealthDeficit, GetInstance, GetSerialNumber, GrowMemory, IndexToIdentity, Init, IsValid, IsValidTeamPlayerID, LookupEntity, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CBaseEntity*, operator CEntityInstance*, operator[]
// calls: __dynamic_cast, CDOTA_BaseNPC::IsBot, CDOTA_PlayerResource::GetPlayer, CBaseEntity::GetHealth, CDOTA_PlayerResource::RollUpDamageShareEntries, CUtlMemory<DamageShareEvent_t, int>::Grow
// callers: CDOTA_BaseNPC::OnTakeDamage_Alive
// globals: CEntityHandle::gm_pEntityList, g_pDOTAPlayerResource
void __fastcall CDOTA_PlayerResource::AddDamageTaken(
        CDOTA_PlayerResource *const this,
        int iPlayerID,
        const CTakeDamageInfo *const info)
{
  uint32 m_Index; // edx
  CEntityIdentity *v7; // rax
  CEntityIdentity *v8; // rax
  CDOTA_BaseNPC *v9; // rax
  CDOTA_BaseNPC *v10; // r15
  int v11; // r14d
  uint32 m_iUnitType; // eax
  int *v13; // rax
  float v14; // xmm0_4
  CDOTAPlayer *Player; // rax
  unsigned __int16 v16; // dx
  int v17; // esi
  int v18; // eax
  CEntityIdentity *v19; // rdx
  CEntityIdentity *v20; // rdx
  CEntityInstance *m_pInstance; // r15
  float v22; // xmm0_4
  int *v23; // r15
  __int64 v24; // rdx
  int v25; // ecx
  __int64 v26; // rsi
  __int64 v27; // rax
  float v28; // xmm0_4
  float *v29; // rax
  int v30; // eax
  float m_flDamage; // xmm0_4
  float m_flOriginalDamage; // xmm1_4
  float *v33; // rax
  int *v34; // rax
  float v35; // xmm0_4
  int *v36; // rax
  float v37; // xmm0_4
  float v38; // [rsp+4h] [rbp-4Ch]
  float v39; // [rsp+8h] [rbp-48h]
  int v40; // [rsp+Ch] [rbp-44h]
  int v41; // [rsp+Ch] [rbp-44h]

  if ( iPlayerID >= 0 && iPlayerID < *(this + 194) )
  {
    m_Index = info->m_hAttacker.m_Index;
    if ( m_Index + 2 > 1 )
    {
      v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(info->m_hAttacker.m_Index) >> 9) & 0x3F];
      if ( v7 != 0 )
      {
        v8 = &v7[info->m_hAttacker.m_Index & 0x1FF];
        if ( v8 != 0 && m_Index == v8->m_EHandle.m_Index && v8->m_pInstance != 0 )
        {
          v9 = __dynamic_cast(v8->m_pInstance, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTA_BaseNPC, 0);
          v10 = v9;
          if ( v9 != 0 )
          {
            v11 = (*(v9->_vptr_IHandleEntity + 414))(v9);
            if ( !CDOTA_BaseNPC::IsBot(v10) )
            {
              m_iUnitType = v10->m_iUnitType;
              if ( (m_iUnitType & 4) != 0 )
              {
                v13 = (this + 4 * iPlayerID);
                v14 = v13[3612];
                v13[3540] = (v13[3540] + info->m_flDamage);
                v13[3612] = (v14 + info->m_flDamage);
              }
              else if ( (m_iUnitType & 0x80u) == 0 )
              {
                if ( (m_iUnitType & 1) != 0 )
                {
                  v36 = (this + 4 * iPlayerID);
                  v37 = v36[3660];
                  v36[3588] = (v36[3588] + info->m_flDamage);
                  v36[3660] = (v37 + info->m_flDamage);
                }
              }
              else
              {
                v34 = (this + 4 * iPlayerID);
                v35 = v34[3636];
                v34[3564] = (v34[3564] + info->m_flDamage);
                v34[3636] = (v35 + info->m_flDamage);
              }
            }
            Player = CDOTA_PlayerResource::GetPlayer(g_pDOTAPlayerResource, iPlayerID);
            if ( Player != 0 )
            {
              if ( Player->m_hAssignedHero.m_Value.m_Index == -1 )
              {
                v16 = 0x7FFF;
                v17 = 0x7FFF;
              }
              else
              {
                v16 = Player->m_hAssignedHero.m_Value.m_Index & 0x7FFF;
                v17 = v16;
              }
              v18 = (Player->m_hAssignedHero.m_Value.m_Index >> 15 << 15) | v16 & 0x7FFF;
              if ( (v18 + 2) > 1 )
              {
                v19 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v17 >> 9];
                if ( v19 != 0 )
                {
                  v20 = &v19[v17 & 0x1FF];
                  if ( v20 != 0 && v18 == v20->m_EHandle.m_Index )
                  {
                    m_pInstance = v20->m_pInstance;
                    if ( v20->m_pInstance != 0
                      && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
                      && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
                    {
                      v40 = (*(m_pInstance->_vptr_IHandleEntity + 156))(v20->m_pInstance);
                      v22 = (v40 - CBaseEntity::GetHealth(m_pInstance));
                      v23 = (this + 24 * iPlayerID + 19344);
                      v24 = *v23;
                      v25 = v24 - 1;
                      if ( v24 - 1 > 0 )
                      {
                        v26 = *(this + 3 * iPlayerID + 2419);
                        v27 = 12LL * v25;
                        v28 = v22 - *(v26 + v27 + 4);
                        if ( v28 <= 0.0 )
                        {
LABEL_32:
                          CDOTA_PlayerResource::RollUpDamageShareEntries(this, iPlayerID, v25);
                          v24 = *v23;
                        }
                        else
                        {
                          v29 = (v26 + v27 - 8);
                          while ( --v25 != 0 )
                          {
                            v28 = v28 - *v29;
                            v29 -= 3;
                            if ( v28 <= 0.0 )
                              goto LABEL_32;
                          }
                        }
                      }
                      v30 = v24;
                      m_flDamage = info->m_flDamage;
                      m_flOriginalDamage = info->m_flOriginalDamage;
                      if ( v24 == *(this + 6 * iPlayerID + 4840) )
                      {
                        v38 = info->m_flOriginalDamage;
                        v39 = info->m_flDamage;
                        v41 = v24;
                        CUtlMemory<DamageShareEvent_t,int>::Grow((this + 24 * iPlayerID + 19352), 1);
                        v30 = *v23;
                        m_flOriginalDamage = v38;
                        m_flDamage = v39;
                        v24 = v41;
                      }
                      *v23 = v30 + 1;
                      v33 = (*(this + 3 * iPlayerID + 2419) + 12 * v24);
                      if ( v33 != 0 )
                      {
                        *v33 = m_flOriginalDamage;
                        v33[1] = m_flDamage;
                        *(v33 + 2) = v11;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
}


// CDOTA_PlayerResource::RollUpDamageShareEntries  (line 1605, @0x0000000002674820, libserver.so)  // inlines: RemoveMultipleFromHead, operator[]
// calls: CUtlVectorBase<DamageShareEvent_t, CUtlMemory<DamageShareEvent_t, int> >::ShiftElementsLeft
// callers: CDOTA_PlayerResource::AddDamageTaken
void __fastcall CDOTA_PlayerResource::RollUpDamageShareEntries(
        CDOTA_PlayerResource *const this,
        int iPlayerID,
        int iCount)
{
  CUtlVectorBase<DamageShareEvent_t,CUtlMemory<DamageShareEvent_t,int> > *v3; // rbx
  int m_Size; // r12d
  char *v5; // r8
  unsigned __int64 v6; // rax
  DamageShareEvent_t *v7; // rsi
  __int64 m_nPlayerID; // rcx
  char *v9; // rcx
  int v10; // esi

  v3 = (this + 24 * iPlayerID + 19344);
  m_Size = iCount;
  if ( iCount == -1 )
  {
    m_Size = v3->m_Size;
  }
  else if ( iCount > v3->m_Size )
  {
    m_Size = v3->m_Size;
  }
  if ( m_Size > 0 )
  {
    v5 = this + 300 * iPlayerID + 19924;
    v6 = 0;
    do
    {
      v7 = &v3->m_Memory.m_pMemory[v6 / 0xC];
      m_nPlayerID = v7->m_nPlayerID;
      if ( m_nPlayerID < 0 )
        m_nPlayerID = 10;
      v9 = &v5[12 * m_nPlayerID];
      *(v9 + 1) = *(v9 + 1) + v7->m_flTakenDamage;
      *v9 = *v9 + v3->m_Memory.m_pMemory[v6 / 0xC].m_flOriginalDamage;
      v10 = v3->m_Memory.m_pMemory[v6 / 0xC].m_nPlayerID;
      v6 += 12LL;
      *(v9 + 2) = v10;
    }
    while ( v6 != 4 * (3LL * (m_Size - 1) + 3) );
  }
  CUtlVectorBase<DamageShareEvent_t,CUtlMemory<DamageShareEvent_t,int>>::ShiftElementsLeft(v3, 0, m_Size);
  v3->m_Size -= m_Size;
}


// CDOTA_PlayerResource::AddManaSpent  (line 1623, @0x000000000265d680, libserver.so)  // inlines: IsValidTeamPlayerID
// callers: CDOTA_BaseNPC::SpendMana
void __fastcall CDOTA_PlayerResource::AddManaSpent(
        CDOTA_PlayerResource *const this,
        float flMana,
        CDOTA_BaseNPC *pCaster,
        CDOTABaseAbility *pAbility,
        CDOTA_BaseNPC *pTarget)
{
  int v8; // eax
  int v9; // edx
  int *v10; // rax

  if ( pCaster != 0 && (pCaster->m_iUnitType & 1) != 0 )
  {
    v8 = (*(pCaster->_vptr_IHandleEntity + 414))(pCaster);
    if ( v8 >= 0 && v8 < *(this + 194) )
    {
      if ( pCaster == pTarget )
      {
        v9 = 1;
      }
      else if ( pTarget != 0 )
      {
        if ( pTarget->m_iTeamNum.m_Value == pCaster->m_iTeamNum.m_Value )
          v9 = 3 - ((pTarget->m_iUnitType & 3) != 0);
        else
          v9 = 5 - ((pTarget->m_iUnitType & 3) != 0);
      }
      else
      {
        v9 = 0;
      }
      v10 = (this + 24 * v8 + 4 * v9 + 15948);
      *v10 = (*v10 + flMana);
    }
  }
}


// CDOTA_PlayerResource::GetManaSpent  (line 1653, @0x000000000265d750, libserver.so)
// callers: CDOTA_CombatLog::GenerateExperimentalTimedStats
int __fastcall CDOTA_PlayerResource::GetManaSpent(CDOTA_PlayerResource *const this, int iPlayerID, int iTargetType)
{
  return *(this + 6 * iPlayerID + iTargetType + 3987);
}


// CDOTA_PlayerResource::ClearDamageTaken  (line 1659, @0x000000000265d770, libserver.so)  // inlines: IsValidTeamPlayerID
// callers: CDOTA_BaseNPC_Hero::Event_Killed
void __fastcall CDOTA_PlayerResource::ClearDamageTaken(CDOTA_PlayerResource *const this, int iPlayerID)
{
  _DWORD *v2; // rax

  if ( iPlayerID >= 0 && iPlayerID < *(this + 194) )
  {
    v2 = (this + 4 * iPlayerID);
    v2[3540] = 0;
    v2[3564] = 0;
    v2[3588] = 0;
  }
}


// CDOTA_PlayerResource::GetTowerDamageTaken  (line 1669, @0x0000000002653d50, libserver.so)  // inlines: IsValidTeamPlayerID
// callers: CDOTA_OGS::LogHeroDeath, CDOTA_Tutorial::CalculateScore
int __fastcall CDOTA_PlayerResource::GetTowerDamageTaken(CDOTA_PlayerResource *const this, int iPlayerID, bool bTotal)
{
  int result; // eax

  result = 0;
  if ( iPlayerID >= 0 && iPlayerID < *(this + 194) )
  {
    if ( bTotal )
      return *(this + iPlayerID + 3612);
    else
      return *(this + iPlayerID + 3540);
  }
  return result;
}


// CDOTA_PlayerResource::GetCreepDamageTaken  (line 1677, @0x0000000002653d90, libserver.so)  // inlines: IsValidTeamPlayerID
// callers: CDOTA_OGS::LogHeroDeath, CDOTA_Tutorial::CalculateScore
int __fastcall CDOTA_PlayerResource::GetCreepDamageTaken(CDOTA_PlayerResource *const this, int iPlayerID, bool bTotal)
{
  int result; // eax

  result = 0;
  if ( iPlayerID >= 0 && iPlayerID < *(this + 194) )
  {
    if ( bTotal )
      return *(this + iPlayerID + 3636);
    else
      return *(this + iPlayerID + 3564);
  }
  return result;
}


// CDOTA_PlayerResource::GetHeroDamageTaken  (line 1685, @0x0000000002653dd0, libserver.so)  // inlines: IsValidTeamPlayerID
// callers: CDOTA_OGS::LogHeroDeath
int __fastcall CDOTA_PlayerResource::GetHeroDamageTaken(CDOTA_PlayerResource *const this, int iPlayerID, bool bTotal)
{
  int result; // eax

  result = 0;
  if ( iPlayerID >= 0 && iPlayerID < *(this + 194) )
  {
    if ( bTotal )
      return *(this + iPlayerID + 3660);
    else
      return *(this + iPlayerID + 3588);
  }
  return result;
}


// CDOTA_PlayerResource::GetTimeLastSeen  (line 1695, @0x000000000265d7b0, libserver.so)  // inlines: IsValidTeamPlayerID
// callers: CDOTA_OGS::LogHeroResults, CDOTAGCServerSystem::FillMatchDetailsForTeam
int __fastcall CDOTA_PlayerResource::GetTimeLastSeen(CDOTA_PlayerResource *const this, int iPlayerID)
{
  int result; // eax

  result = 0;
  if ( iPlayerID >= 0 && iPlayerID < *(this + 194) )
    return *(this + iPlayerID + 2988);
  return result;
}


// CDOTA_PlayerResource::GetTimeLastRecieved  (line 1705, @0x000000000265d7d0, libserver.so)  // inlines: IsValidTeamPlayerID
// callers: CDOTAGamerules::UpdateAutomaticSurrender, CDOTAGCServerSystem::CheckPoorNetworkConditions
double __fastcall CDOTA_PlayerResource::GetTimeLastRecieved(CDOTA_PlayerResource *const this, int iPlayerID)
{
  if ( iPlayerID < 0 || iPlayerID >= *(this + 194) )
    return 0.0;
  else
    return *(this + iPlayerID + 1518);
}


// CDOTA_PlayerResource::GetTotalDisconnectedTime  (line 1715, @0x000000000265d800, libserver.so)  // inlines: IsValidTeamPlayerID
// callers: CDOTAGamerules::CheckIdleAndDisconnectedPlayers
int __fastcall CDOTA_PlayerResource::GetTotalDisconnectedTime(CDOTA_PlayerResource *const this, int iPlayerID)
{
  int result; // eax

  result = 0;
  if ( iPlayerID >= 0 && iPlayerID < *(this + 194) )
    return *(this + iPlayerID + 3012);
  return result;
}


// CDOTA_PlayerResource::IncrementTotalDisconnectedTime  (line 1724, @0x000000000265d820, libserver.so)  // inlines: IsValidTeamPlayerID
// callers: CDOTAGamerules::CheckIdleAndDisconnectedPlayers
void __fastcall CDOTA_PlayerResource::IncrementTotalDisconnectedTime(
        CDOTA_PlayerResource *const this,
        int iPlayerID,
        int iSeconds)
{
  if ( iPlayerID >= 0 && iPlayerID < *(this + 194) )
    *(this + iPlayerID + 3012) += iSeconds;
}


// CDOTA_PlayerResource::GetDamageDoneToHero  (line 1734, @0x0000000002653e10, libserver.so)  // inlines: IsValidTeamPlayerID
int __fastcall CDOTA_PlayerResource::GetDamageDoneToHero(
        CDOTA_PlayerResource *const this,
        int iPlayerID,
        int iVictimID)
{
  int result; // eax
  int v4; // ecx

  result = 0;
  if ( iPlayerID >= 0 )
  {
    v4 = *(this + 194);
    if ( iPlayerID < v4 && iVictimID >= 0 && iVictimID < v4 )
      return *(this + 24 * iPlayerID + iVictimID + 1258);
  }
  return result;
}


// CDOTA_PlayerResource::GetTotalDamageDoneToHero  (line 1744, @0x000000000265d840, libserver.so)  // inlines: IsValidTeamPlayerID
// callers: CDOTA_CombatLog::GenerateExperimentalTimedStats
int __fastcall CDOTA_PlayerResource::GetTotalDamageDoneToHero(
        CDOTA_PlayerResource *const this,
        int iPlayerID,
        int iVictimID)
{
  int result; // eax
  int v4; // ecx

  result = 0;
  if ( iPlayerID >= 0 )
  {
    v4 = *(this + 194);
    if ( iPlayerID < v4 && iVictimID >= 0 && iVictimID < v4 )
      return *(this + 24 * iPlayerID + iVictimID + 681);
  }
  return result;
}


// CDOTA_PlayerResource::GetDamageAbsorbedFromSource  (line 1754, @0x000000000265d880, libserver.so)  // inlines: IsValidTeamPlayerID
// callers: CDOTA_CombatLog::GenerateExperimentalTimedStats
int __fastcall CDOTA_PlayerResource::GetDamageAbsorbedFromSource(
        CDOTA_PlayerResource *const this,
        int iPlayerID,
        int iSourceID)
{
  int result; // eax

  result = 0;
  if ( iPlayerID >= 0 && iPlayerID < *(this + 194) )
    return *(this + 75 * iPlayerID + 3 * iSourceID + 4982);
  return result;
}


// CDOTA_PlayerResource::GetKillsDoneToHero  (line 1765, @0x0000000002653e50, libserver.so)  // inlines: IsValidTeamPlayerID
// callers: CDOTAGCServerSystem::UpdateRealtimeGameState
int __fastcall CDOTA_PlayerResource::GetKillsDoneToHero(CDOTA_PlayerResource *const this, int iPlayerID, int iVictimID)
{
  int result; // eax
  int v4; // ecx

  result = 0;
  if ( iPlayerID >= 0 )
  {
    v4 = *(this + 194);
    if ( iPlayerID < v4 && iVictimID >= 0 && iVictimID < v4 )
      return *(this + 24 * iPlayerID + iVictimID + 1835);
  }
  return result;
}


// CDOTA_PlayerResource::GetAssistsDoneToHero  (line 1775, @0x000000000265d8c0, libserver.so)  // inlines: IsValidTeamPlayerID
// callers: CDOTAGCServerSystem::UpdateRealtimeGameState
int __fastcall CDOTA_PlayerResource::GetAssistsDoneToHero(
        CDOTA_PlayerResource *const this,
        int iPlayerID,
        int iVictimID)
{
  int result; // eax
  int v4; // ecx

  result = 0;
  if ( iPlayerID >= 0 )
  {
    v4 = *(this + 194);
    if ( iPlayerID < v4 && iVictimID >= 0 && iVictimID < v4 )
      return *(this + 24 * iPlayerID + iVictimID + 2412);
  }
  return result;
}


// CDOTA_PlayerResource::AddClaimedFarm  (line 1785, @0x0000000002654d50, libserver.so)  // inlines: IsValidTeamPlayerID
// callers: CDOTAHeroList::DistributeFarmClaim
void __fastcall CDOTA_PlayerResource::AddClaimedFarm(
        CDOTA_PlayerResource *const this,
        int iPlayerID,
        float flFarmValue,
        bool bEarnedValue)
{
  float *v4; // rax

  if ( iPlayerID >= 0 && iPlayerID < *(this + 194) )
  {
    v4 = (this + 4 * iPlayerID);
    v4[464] = v4[464] + flFarmValue;
    if ( bEarnedValue )
      v4[488] = flFarmValue + v4[488];
  }
}


// CDOTA_PlayerResource::AddScaledPlayerDamage  (line 1800, @0x0000000002664250, libserver.so)  // inlines: Get, IsValidTeamPlayerID, NetworkStateChanged, RemapValClamped, Set, clamp<float, float>, operator CEntityInstance*, operator=<int>
// calls: CDOTA_PlayerResource::GetTeamDataForPlayer
// callers: CDOTA_BaseNPC_Hero::OnTakeDamage_Alive
void __fastcall CDOTA_PlayerResource::AddScaledPlayerDamage(
        CDOTA_PlayerResource *const this,
        int iPlayerID,
        int iVictimID,
        int iDamage,
        int iTargetCurrentHealth,
        int iTargetMaxHealth)
{
  int v6; // eax
  float v7; // xmm1_4
  float v8; // xmm0_4
  __m128 v9; // xmm0
  __m128 v10; // xmm3
  float v11; // xmm3_4
  int v12; // r8d
  float v13; // xmm0_4
  char *v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rax
  DataTeamPlayer_t *TeamDataForPlayer; // rax
  int v18; // ebx
  CEntityInstance *m_pObj; // rdi
  float v20; // xmm0_4
  DataTeamPlayer_t *v21; // [rsp-20h] [rbp-20h]

  if ( iPlayerID >= 0 )
  {
    v6 = *(this + 194);
    if ( iPlayerID < v6 && iVictimID >= 0 && iVictimID < v6 && iTargetMaxHealth > 0 && iDamage >= 0 )
    {
      v7 = iTargetMaxHealth;
      v8 = iTargetCurrentHealth;
      if ( iTargetMaxHealth == 0.0 )
      {
        v9.m128_f32[0] = v8 - v7;
        v10 = _mm_cmple_ss(0LL, v9);
        LODWORD(v11) = _mm_andnot_ps(v10, 0x44BB8000u).m128_u32[0] | v10.m128_i32[0] & 0x43FA0000;
      }
      else
      {
        v20 = v8 / v7;
        if ( v20 < 0.0 )
        {
          v11 = 1500.0;
        }
        else
        {
          v11 = 500.0;
          if ( v20 <= 1.0 )
            v11 = (1.5 - v20) * 1000.0;
        }
      }
      v12 = 1000;
      v13 = (iDamage * v11) / v7;
      if ( v13 <= 1000.0 )
      {
        LOWORD(v12) = 0;
        if ( v13 >= 0.0 )
          v12 = v13;
      }
      v14 = this + 4 * iPlayerID;
      v15 = 4LL * iVictimID;
      *(v14 + 512) += v12;
      *(v14 + 608) += iDamage;
      v16 = 96LL * iPlayerID;
      *(this + v16 + v15 + 5032) += iDamage;
      *(this + v16 + v15 + 2724) += iDamage;
      TeamDataForPlayer = CDOTA_PlayerResource::GetTeamDataForPlayer(this, iPlayerID);
      if ( TeamDataForPlayer != 0 )
      {
        v18 = *(v14 + 608);
        if ( v18 != TeamDataForPlayer->m_iHeroDamage.m_Value )
        {
          m_pObj = TeamDataForPlayer->__m_pChainEntity.m_pObj;
          if ( m_pObj != 0
            && (m_pObj->m_pEntity->m_flags & 0x400) == 0
            && TeamDataForPlayer->__m_PathIndex.m_Value != -1 )
          {
            v21 = TeamDataForPlayer;
            (*(m_pObj->_vptr_IHandleEntity + 22))(m_pObj, 168, 0xFFFFFFFFLL, TeamDataForPlayer->__m_PathIndex.m_Value);
            TeamDataForPlayer = v21;
          }
          TeamDataForPlayer->m_iHeroDamage.m_Value = v18;
        }
      }
    }
  }
}


// CDOTA_PlayerResource::AddScaledTowerDamage  (line 1826, @0x000000000265d900, libserver.so)  // inlines: IsValidTeamPlayerID, RemapValClamped, clamp<float, float>
// callers: CDOTA_BaseNPC_Building::OnTakeDamage_Alive
void __fastcall CDOTA_PlayerResource::AddScaledTowerDamage(
        CDOTA_PlayerResource *const this,
        int iPlayerID,
        int iDamage,
        int iTargetCurrentHealth,
        int iTargetMaxHealth)
{
  float v5; // xmm1_4
  float v6; // xmm0_4
  __m128 v7; // xmm0
  __m128 v8; // xmm3
  float v9; // xmm3_4
  int v10; // ecx
  float v11; // xmm0_4
  char *v12; // rax
  float v13; // xmm0_4

  if ( iPlayerID >= 0 && iPlayerID < *(this + 194) && iTargetMaxHealth > 0 && iDamage >= 0 )
  {
    v5 = iTargetMaxHealth;
    v6 = iTargetCurrentHealth;
    if ( iTargetMaxHealth == 0.0 )
    {
      v7.m128_f32[0] = v6 - v5;
      v8 = _mm_cmple_ss(0LL, v7);
      LODWORD(v9) = _mm_andnot_ps(v8, 0x44BB8000u).m128_u32[0] | v8.m128_i32[0] & 0x43FA0000;
    }
    else
    {
      v13 = v6 / v5;
      if ( v13 < 0.0 )
      {
        v9 = 1500.0;
      }
      else
      {
        v9 = 500.0;
        if ( v13 <= 1.0 )
          v9 = (1.5 - v13) * 1000.0;
      }
    }
    v10 = 1000;
    v11 = (iDamage * v9) / v5;
    if ( v11 <= 1000.0 )
    {
      LOWORD(v10) = 0;
      if ( v11 >= 0.0 )
        v10 = v11;
    }
    v12 = this + 4 * iPlayerID;
    *(v12 + 536) += v10;
    *(v12 + 632) += iDamage;
  }
}


// CDOTA_PlayerResource::AddScaledHealing  (line 1841, @0x000000000265d9e0, libserver.so)  // inlines: IsValidTeamPlayerID, RemapValClamped, clamp<float, float>
// callers: CDOTA_BaseNPC::Heal
void __fastcall CDOTA_PlayerResource::AddScaledHealing(
        CDOTA_PlayerResource *const this,
        int iPlayerID,
        int iHealth,
        int iTargetCurrentHealth,
        int iTargetMaxHealth)
{
  float v5; // xmm1_4
  float v6; // xmm0_4
  __m128 v7; // xmm0
  __m128 v8; // xmm3
  float v9; // xmm3_4
  int v10; // ecx
  float v11; // xmm0_4
  char *v12; // rax
  float v13; // xmm0_4

  if ( iPlayerID >= 0 && iPlayerID < *(this + 194) && iTargetMaxHealth > 0 && iHealth >= 0 )
  {
    v5 = iTargetMaxHealth;
    v6 = iTargetCurrentHealth;
    if ( iTargetMaxHealth == 0.0 )
    {
      v7.m128_f32[0] = v6 - v5;
      v8 = _mm_cmple_ss(0LL, v7);
      LODWORD(v9) = _mm_andnot_ps(v8, 0x44BB8000u).m128_u32[0] | v8.m128_i32[0] & 0x43FA0000;
    }
    else
    {
      v13 = v6 / v5;
      if ( v13 < 0.0 )
      {
        v9 = 1500.0;
      }
      else
      {
        v9 = 500.0;
        if ( v13 <= 1.0 )
          v9 = (1.5 - v13) * 1000.0;
      }
    }
    v10 = 1000;
    v11 = (iHealth * v9) / v5;
    if ( v11 <= 1000.0 )
    {
      LOWORD(v10) = 0;
      if ( v11 >= 0.0 )
        v10 = v11;
    }
    v12 = this + 4 * iPlayerID;
    *(v12 + 560) += v10;
    *(v12 + 656) += iHealth;
  }
}


// CDOTA_PlayerResource::AddSupportAbilityValue  (line 1856, @0x000000000265dac0, libserver.so)  // inlines: IsValidTeamPlayerID
// callers: CDOTA_ModifierManager::AddNewModifier
void __fastcall CDOTA_PlayerResource::AddSupportAbilityValue(
        CDOTA_PlayerResource *const this,
        int iPlayerID,
        int iValue)
{
  if ( iPlayerID >= 0 && iPlayerID < *(this + 194) )
    *(this + iPlayerID + 584) += iValue;
}


// CDOTA_PlayerResource::SetPlayerName  (line 1865, @0x000000000265dae0, libserver.so)  // inlines: CSteamID, CUtlSymbolLarge, Element, Get, IsValidPlayerID, NetworkStateChanged, Set, SetFromUint64, operator CEntityInstance*, operator=, operator=<CUtlSymbolLarge>, operator[]
// calls: LoggingSystem_IsChannelEnabled, AllocPooledString, CDOTA_PlayerResource::GetSteamID, CSteamID::Render, LoggingSystem_Log
// callers: CDOTA_PlayerResource::InitPlayersWithLobby
// strings: "PR:SetPlayerName %d:%s \"%s\"\n"
void __fastcall CDOTA_PlayerResource::SetPlayerName(CDOTA_PlayerResource *const this, int iPlayerID, const char *name)
{
  __int64 v3; // rbx
  __int64 v6; // rax
  CSteamID::SteamID_t v7; // r12
  __int64 v8; // rbx
  _QWORD *v9; // rdi
  const char *v10; // rax
  CSteamID v11; // [rsp+0h] [rbp-40h] BYREF

  v3 = iPlayerID;
  if ( iPlayerID >= 0 && iPlayerID < *(this + 212) )
  {
    if ( LoggingSystem_IsChannelEnabled(LOG_SERVER, 1) != 0 )
    {
      v11.m_steamid.m_comp = CDOTA_PlayerResource::GetSteamID(this, v3);
      v10 = CSteamID::Render(&v11);
      LoggingSystem_Log(LOG_SERVER, 1, "PR:SetPlayerName %d:%s \"%s\"\n", v3, v10, name);
    }
    AllocPooledString(&v11, name);
    v6 = *(this + 107);
    v7.m_comp = v11.m_steamid.m_comp;
    v8 = v6 + 72 * v3;
    if ( v11.m_steamid.m_comp != *(v8 + 24) )
    {
      v9 = *(v8 + 8);
      if ( v9 != 0 && (*(v9[1] + 49LL) & 4) == 0 && *(v8 + 16) != 0xFFFF )
        (*(*v9 + 176LL))(v9, 24, 0xFFFFFFFFLL, *(v8 + 16));
      *(v8 + 24) = v7;
    }
  }
}


// CDOTA_PlayerResource::GetPlayerName  (line 1876, @0x00000000026563a0, libserver.so)  // inlines: Element, IsValidPlayerID, String, ToCStr, operator[]
// callers: GenerateLogStringForPlayerStats, CDOTAGamerules::ClientDisconnected, CDOTAGamerules::State_Enter_POST_GAME, CDOTAHLTVDirector::FinishRecording, AddChatEventMessageToChatLog, CDOTAGCServerSystem::UpdateRealtimeGameState
const char *__fastcall CDOTA_PlayerResource::GetPlayerName(CDOTA_PlayerResource *const this, int iPlayerID)
{
  const char *result; // rax
  __int64 v3; // rdx

  result = "";
  if ( iPlayerID >= 0 && iPlayerID < *(this + 212) )
  {
    v3 = *(this + 107) + 72LL * iPlayerID;
    if ( *(v3 + 24) != 0 )
      return *(v3 + 24);
  }
  return result;
}


// CDOTA_PlayerResource::SetSelectedHero  (line 1886, @0x0000000002678b40, libserver.so)  // inlines: Element, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetInt, IndexToIdentity, IsValid, IsValidTeamPlayerID, LookupEntity, NetworkStateChanged, Set, operator CEntityInstance*, operator=, operator=<CDOTA_BaseNPC*>, operator==<CBaseEntity>, operator==<long int>, operator[]
// calls: CDOTA_CombatLog::AddGoldEvent, CHandle<CBaseEntity>::CHandle, operator!=<CBaseEntity>, CDOTA_PlayerResource::SetSelectedHeroID
// callers: CDOTAGamerules::ResetSelectedHeroes, CDOTAGamerules::SwapPlayers, CDOTAGamerules::ARDMSelectHero, CDOTAGamerules::HeroPickState_Enter_Ability_Draft_SELECT, CDOTAGamerules::MakeRandomHeroSelection, CDOTAGamerules::PlayerSpawn, CDOTAGamerules::HeroPickState_Think_AP_SELECT, CDOTAGamerules::ClientDisconnected, CDOTAPlayer::SetWantsSpecificHero, CDOTAPlayer::UndoHeroSelection, CDOTAPlayer::SetWantsRandomHero, CDOTAPlayer::HandleHeroSelection (15 total)
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_PlayerResource::SetSelectedHero(
        CDOTA_PlayerResource *const this,
        int iPlayerID,
        const char *pHeroFilename,
        CDOTA_BaseNPC *pHero)
{
  __int64 v8; // rax
  __int64 v9; // r15
  int v10; // edx
  unsigned __int16 v11; // si
  CEntityIdentity *v12; // rcx
  CEntityIdentity *v13; // rcx
  __int64 v14; // r15
  _QWORD *v15; // rdi
  CHandle<CBaseEntity> v16; // [rsp+10h] [rbp-40h] BYREF

  if ( iPlayerID >= 0 && iPlayerID < *(this + 194) )
  {
    v8 = *(this + 98);
    v9 = 200LL * iPlayerID;
    v10 = *(v8 + v9 + 52);
    if ( (v10 + 2) <= 1
      || (v11 = *(v8 + v9 + 52), (v12 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v11 >> 9) & 0x3F]) == 0)
      || (v13 = &v12[v11 & 0x1FF]) == 0
      || v10 != v13->m_EHandle.m_Index
      || v13->m_pInstance == 0 )
    {
      CDOTA_CombatLog::AddGoldEvent(
        g_pDOTACombatLog,
        pHero,
        dota_default_gold.m_pParent->m_Value.m_nValue,
        EDOTA_ModifyGold_Reason::DOTA_ModifyGold_Unspecified);
      v8 = *(this + 98);
    }
    v14 = v8 + v9;
    CHandle<CBaseEntity>::CHandle(&v16, pHero);
    if ( operator!=<CBaseEntity>((v14 + 52), &v16) )
    {
      v15 = *(v14 + 8);
      if ( v15 != 0 && (*(v15[1] + 49LL) & 4) == 0 && *(v14 + 16) != 0xFFFF )
        (*(*v15 + 176LL))(v15, 52, 0xFFFFFFFFLL, *(v14 + 16));
      *(v14 + 52) = v16;
    }
    CDOTA_PlayerResource::SetSelectedHeroID(this, iPlayerID, pHeroFilename);
  }
}


// CDOTA_PlayerResource::SetSelectedHeroID  (line 1904, @0x000000000265dbf0, libserver.so)  // inlines: CSteamID, Element, Get, IsValidTeamPlayerID, NetworkStateChanged, Set, SetFromUint64, operator CEntityInstance*, operator=<int>, operator[]
// calls: DOTAGameManager, CDOTAGameManager::GetHeroIDByName, CDOTAGameManager::GetHeroDataByHeroID, KeyValues::GetInt, IncrementCommunityGoal, LoggingSystem_IsChannelEnabled, CDOTA_PlayerResource::GetSteamID, CSteamID::Render, LoggingSystem_Log
// callers: CDOTAGamerules::SwapPlayers, CDOTA_PlayerResource::SetSelectedHero, Script_SelectHero, CDOTA_TeamCommander::SelectHero, DOTA_Hero_Spawn_Synchronous, DOTA_Hero_Spawn
// strings: "Legs", "PR:SetSelectedHero %d:%s %s(%d)\n", "PR:SetSelectedHero called with bogus player id %d for hero %s, ignoring\n"
void __fastcall CDOTA_PlayerResource::SetSelectedHeroID(
        CDOTA_PlayerResource *const this,
        int iPlayerID,
        const char *pHeroFilename)
{
  CDOTAGameManager *v6; // rax
  int HeroIDByName; // r15d
  __int64 v8; // r14
  _QWORD *v9; // rdi
  CDOTAGameManager *v10; // rax
  KeyValues *HeroDataByHeroID; // rdi
  uint32 Int; // eax
  const char *v13; // rax
  CSteamID v14; // [rsp+10h] [rbp-40h] BYREF

  if ( iPlayerID < 0 || iPlayerID >= *(this + 194) )
  {
    if ( LoggingSystem_IsChannelEnabled(LOG_SERVER, 2) != 0 )
      LoggingSystem_Log(
        LOG_SERVER,
        2,
        "PR:SetSelectedHero called with bogus player id %d for hero %s, ignoring\n",
        iPlayerID,
        pHeroFilename);
  }
  else
  {
    v6 = DOTAGameManager();
    HeroIDByName = CDOTAGameManager::GetHeroIDByName(v6, pHeroFilename);
    v8 = *(this + 98) + 200LL * iPlayerID;
    if ( HeroIDByName != *(v8 + 20) )
    {
      v9 = *(v8 + 8);
      if ( v9 != 0 && (*(v9[1] + 49LL) & 4) == 0 && *(v8 + 16) != 0xFFFF )
        (*(*v9 + 176LL))(v9, 20, 0xFFFFFFFFLL, *(v8 + 16));
      *(v8 + 20) = HeroIDByName;
      v10 = DOTAGameManager();
      HeroDataByHeroID = CDOTAGameManager::GetHeroDataByHeroID(v10, HeroIDByName);
      if ( HeroDataByHeroID != 0 )
      {
        Int = KeyValues::GetInt(HeroDataByHeroID, "Legs", 0);
        IncrementCommunityGoal(
          EEvent::EVENT_ID_INTERNATIONAL_2016,
          EEventCommunityGoals_t::ECG_TI6_LegCount,
          Int,
          iPlayerID);
      }
      if ( LoggingSystem_IsChannelEnabled(LOG_SERVER, 1) != 0 )
      {
        v14.m_steamid.m_comp = CDOTA_PlayerResource::GetSteamID(this, iPlayerID);
        v13 = CSteamID::Render(&v14);
        LoggingSystem_Log(
          LOG_SERVER,
          1,
          "PR:SetSelectedHero %d:%s %s(%d)\n",
          iPlayerID,
          v13,
          pHeroFilename,
          HeroIDByName);
      }
    }
  }
}


// CDOTA_PlayerResource::GetSelectedHeroName  (line 1932, @0x0000000002656240, libserver.so)  // inlines: IsValidTeamPlayerID
// calls: DOTAGameManager, CDOTAGameManager::GetHeroDataByHeroID, KeyValues::GetName, LoggingSystem_IsChannelEnabled, LoggingSystem_Log
// callers: CDOTA_CombatLog::GetHeroForName, CDOTA_CombatLog::GetPlayerIDForName, DOTA_CombatLog_Record::GetColorForName, DOTA_CombatLog_Record::FindPlayerIDForName, DOTA_CombatLog_Record::FindNameForPlayerID, ICLSearchFields::ParseQueryStringID, CDOTA_CombatLog::SendLogToPlayer, CDOTA_CombatLog::AddNeutralCampStackedEvent, CDOTA_CombatLog::AddPickupRuneEvent, CDOTA_CombatLog::GetEventsForPlayer, CDOTA_CombatLog::AddPlayerStatsEvent, CDOTA_CombatLog::DoCombatAnalysis (43 total)
// strings: "PR:GetSelectedHeroName called with bogus player id %d, ignoring\n"
const char *__fastcall CDOTA_PlayerResource::GetSelectedHeroName(CDOTA_PlayerResource *const this, int iPlayerID)
{
  int v3; // ebx
  CDOTAGameManager *v4; // rax
  KeyValues *HeroDataByHeroID; // rax

  if ( iPlayerID >= 0 && iPlayerID < *(this + 194) )
  {
    v3 = *(*(this + 98) + 200LL * iPlayerID + 20);
    v4 = DOTAGameManager();
    HeroDataByHeroID = CDOTAGameManager::GetHeroDataByHeroID(v4, v3);
    if ( HeroDataByHeroID != 0 )
      return KeyValues::GetName(HeroDataByHeroID);
  }
  else if ( LoggingSystem_IsChannelEnabled(LOG_SERVER, 2) != 0 )
  {
    LoggingSystem_Log(LOG_SERVER, 2, "PR:GetSelectedHeroName called with bogus player id %d, ignoring\n", iPlayerID);
    return "";
  }
  return "";
}


// CDOTA_PlayerResource::SetCanRepick  (line 1946, @0x0000000002657630, libserver.so)  // inlines: Element, Get, IsValidTeamPlayerID, NetworkStateChanged, Set, operator CEntityInstance*, operator=<bool>, operator[]
// callers: CDOTAGamerules::SetupRepick, CDOTAGamerules::HeroPickState_Think_ALL_DRAFT_SELECT, CDOTAGamerules::AllDraftRunLatePenalties, CDOTAPlayer::UndoHeroSelection, CDOTAPlayer::HandleHeroSelection, CDOTA_PlayerResource::ReplaceHeroWith
void __fastcall CDOTA_PlayerResource::SetCanRepick(CDOTA_PlayerResource *const this, int iPlayerID, bool bCanRepick)
{
  __int64 v4; // r12
  _QWORD *v5; // rdi

  if ( iPlayerID >= 0 && iPlayerID < *(this + 194) )
  {
    v4 = *(this + 98) + 200LL * iPlayerID;
    if ( bCanRepick != *(v4 + 98) )
    {
      v5 = *(v4 + 8);
      if ( v5 != 0 && (*(v5[1] + 49LL) & 4) == 0 && *(v4 + 16) != 0xFFFF )
        (*(*v5 + 176LL))(v5, 98, 0xFFFFFFFFLL, *(v4 + 16));
      *(v4 + 98) = bCanRepick;
    }
  }
}


// CDOTA_PlayerResource::CanRepick  (line 1954, @0x00000000026561b0, libserver.so)  // inlines: Element, IsValidTeamPlayerID, operator[]
// callers: CDOTAGamerules::AllDraftGetDataForPhase, CDOTAGamerules::AllDraftGetRandomedPlayer, CDOTAGamerules::ClientMsg_SwapRequest, CDOTAGamerules::SwapPlayers, CDOTAGamerules::ClientMsg_SwapAccept, CDOTAGamerules::HeroPickState_Think_ALL_DRAFT_SELECT, CDOTAGamerules::MakeRandomHeroSelection, CDOTAGamerules::HeroPickState_Think_AR_SELECT, CDOTAGamerules::AllDraftRunLatePenalties, CDOTAPlayer::HandleHeroSelection
bool __fastcall CDOTA_PlayerResource::CanRepick(CDOTA_PlayerResource *const this, int iPlayerID)
{
  bool result; // al

  result = 0;
  if ( iPlayerID >= 0 && iPlayerID < *(this + 194) )
    return *(*(this + 98) + 200LL * iPlayerID + 98);
  return result;
}


// CDOTA_PlayerResource::SetHasRandomed  (line 1962, @0x0000000002657730, libserver.so)  // inlines: Element, Get, IsValidTeamPlayerID, NetworkStateChanged, Set, operator CEntityInstance*, operator=<bool>, operator[]
// callers: CDOTAPlayer::SetWantsRandomHero, CDOTAPlayer::HandleHeroSelection
void __fastcall CDOTA_PlayerResource::SetHasRandomed(CDOTA_PlayerResource *const this, int iPlayerID)
{
  __int64 v2; // rbx
  _QWORD *v3; // rdi

  if ( iPlayerID >= 0 && iPlayerID < *(this + 194) )
  {
    v2 = *(this + 98) + 200LL * iPlayerID;
    if ( *(v2 + 99) != 1 )
    {
      v3 = *(v2 + 8);
      if ( v3 != 0 && (*(v3[1] + 49LL) & 4) == 0 && *(v2 + 16) != 0xFFFF )
        (*(*v3 + 176LL))(v3, 99, 0xFFFFFFFFLL, *(v2 + 16));
      *(v2 + 99) = 1;
    }
  }
}


// CDOTA_PlayerResource::HasRandomed  (line 1970, @0x0000000002656180, libserver.so)  // inlines: Element, IsValidTeamPlayerID, operator[]
// callers: CDOTAGamerules::AllDraftGetDataForPhase, CDOTAGamerules::AllDraftGetRandomedPlayer, CDOTAGamerules::ClientMsg_SwapRequest, CDOTAGamerules::SwapPlayers, CDOTAGamerules::ClientMsg_SwapAccept, CDOTAGamerules::HeroPickState_Think_ALL_DRAFT_SELECT, CDOTAGamerules::AllDraftRunLatePenalties, CDOTAPlayer::HandleHeroSelection
bool __fastcall CDOTA_PlayerResource::HasRandomed(CDOTA_PlayerResource *const this, int iPlayerID)
{
  bool result; // al

  result = 0;
  if ( iPlayerID >= 0 && iPlayerID < *(this + 194) )
    return *(*(this + 98) + 200LL * iPlayerID + 99);
  return result;
}


// CDOTA_PlayerResource::SetRandomedHeroID  (line 1980, @0x000000000265dd90, libserver.so)  // inlines: Element, Get, IsValidTeamPlayerID, NetworkStateChanged, Set, operator CEntityInstance*, operator=<int>, operator[]
// callers: CDOTAGamerules::MakeRandomHeroSelection
void __fastcall CDOTA_PlayerResource::SetRandomedHeroID(CDOTA_PlayerResource *const this, int iPlayerID, int iHeroID)
{
  __int64 v4; // r12
  _QWORD *v5; // rdi

  if ( iPlayerID >= 0 && iPlayerID < *(this + 194) )
  {
    v4 = *(this + 98) + 200LL * iPlayerID;
    if ( *(v4 + 100) != iHeroID )
    {
      v5 = *(v4 + 8);
      if ( v5 != 0 && (*(v5[1] + 49LL) & 4) == 0 && *(v4 + 16) != 0xFFFF )
        (*(*v5 + 176LL))(v5, 100, 0xFFFFFFFFLL, *(v4 + 16));
      *(v4 + 100) = iHeroID;
    }
  }
}


// CDOTA_PlayerResource::GetRandomedHeroID  (line 1989, @0x000000000265de10, libserver.so)  // inlines: Element, IsValidTeamPlayerID, operator[]
// callers: CDOTAGamerules::MakeRandomHeroSelection
int __fastcall CDOTA_PlayerResource::GetRandomedHeroID(CDOTA_PlayerResource *const this, int iPlayerID)
{
  int result; // eax

  result = 0;
  if ( iPlayerID >= 0 && iPlayerID < *(this + 194) )
    return *(*(this + 98) + 200LL * iPlayerID + 100);
  return result;
}


// CDOTA_PlayerResource::GetSelectedHeroID  (line 1999, @0x0000000002656150, libserver.so)  // inlines: Element, IsValidTeamPlayerID, operator[]
// callers: CDOTAChallengeSystem::AttemptToGenerateChallengeQueryForPlayer, CDOTAChallengeSystem::AddResultToSignout, CDOTA_CombatLog::DoCombatAnalysis, CDOTAGamerules::AllDraftGetDataForPhase, TournamentItemEvent, CDOTAGamerules::ClientMsg_EnemyItemAlert, CDOTAGamerules::HeroPickState_Think_ALL_DRAFT_SELECT, CDOTAGamerules::HeroPickState_Think_SELECT_PENALTY, CDOTAGamerules::GetSmartRandomHeroList, CDOTAGamerules::OnGCObjectUpdated, CDOTAGamerules::FinalizeHeroSelections, CIngameEvent_WM2016::GenerateWeeklyAndDailyChallenges (20 total)
int __fastcall CDOTA_PlayerResource::GetSelectedHeroID(CDOTA_PlayerResource *const this, int iPlayerID)
{
  int result; // eax

  result = 0;
  if ( iPlayerID >= 0 && iPlayerID < *(this + 194) )
    return *(*(this + 98) + 200LL * iPlayerID + 20);
  return result;
}


// CDOTA_PlayerResource::HasSelectedHero  (line 2009, @0x0000000002656110, libserver.so)  // inlines: Element, IsValidTeamPlayerID, operator!=<int>, operator[]
// callers: DOTA_CombatLog_Record::GetColorForName, CDOTAGamerules::CanPlayersSwap, CDOTAGamerules::CheckIdleAndDisconnectedPlayers, CDOTAGamerules::SwapPlayers, CDOTAGamerules::ARDMSelectHero, CDOTAGamerules::PlayerSpawn, CDOTAGamerules::HeroPickState_Leave_CM_PICK, CDOTAGamerules::HeroPickState_Leave_CD_PICK, CDOTAGamerules::HeroPickState_Think_AR_SELECT, CDOTAGamerules::SpawnPlayerHeroes, CDOTAGamerules::FinalizeHeroSelections, CDOTAPlayer::HasSelectedHero (14 total)
bool __fastcall CDOTA_PlayerResource::HasSelectedHero(CDOTA_PlayerResource *const this, int iPlayerID)
{
  bool result; // al

  result = 0;
  if ( iPlayerID >= 0 && iPlayerID < *(this + 194) )
    return *(*(this + 98) + 200LL * iPlayerID + 20) != -1;
  return result;
}


// CDOTA_PlayerResource::SetPossibleHeroSelection  (line 2019, @0x0000000002664410, libserver.so)  // inlines: CSteamID, Get, IsValidTeamPlayerID, NetworkStateChanged, Set, SetFromUint64, operator CEntityInstance*, operator=<int>
// calls: UTIL_VarArgs, DOTAGameManager, CDOTAGameManager::GetHeroIDByName, CDOTAGameManager::IsHeroAvailableByHeroID, CDOTA_PlayerResource::GetTeamDataForPlayer, LoggingSystem_IsChannelEnabled, CDOTA_PlayerResource::GetSteamID, CSteamID::Render, LoggingSystem_Log
// callers: CDOTAPlayer::HandlePossibleHeroSelection
// strings: "npc_dota_hero_%s", "PR:SetPossibleHeroSelection %d:%s %s(%d)\n"
void __fastcall CDOTA_PlayerResource::SetPossibleHeroSelection(
        CDOTA_PlayerResource *const this,
        int iPlayerID,
        const char *pszHeroName)
{
  char *v6; // r14
  CDOTAGameManager *v7; // rax
  int HeroIDByName; // r14d
  CDOTAGameManager *v9; // rax
  DataTeamPlayer_t *TeamDataForPlayer; // rax
  CEntityInstance *m_pObj; // rdi
  char *v12; // r13
  const char *v13; // rax
  DataTeamPlayer_t *pTeamData; // [rsp+8h] [rbp-48h]
  CSteamID v15; // [rsp+10h] [rbp-40h] BYREF

  if ( iPlayerID >= 0 && iPlayerID < *(this + 194) )
  {
    v6 = UTIL_VarArgs("npc_dota_hero_%s", pszHeroName);
    v7 = DOTAGameManager();
    HeroIDByName = CDOTAGameManager::GetHeroIDByName(v7, v6);
    if ( HeroIDByName != -1 )
    {
      v9 = DOTAGameManager();
      if ( CDOTAGameManager::IsHeroAvailableByHeroID(v9, iPlayerID, HeroIDByName) )
      {
        TeamDataForPlayer = CDOTA_PlayerResource::GetTeamDataForPlayer(this, iPlayerID);
        if ( TeamDataForPlayer != 0 && HeroIDByName != TeamDataForPlayer->m_nPossibleHeroSelection.m_Value )
        {
          m_pObj = TeamDataForPlayer->__m_pChainEntity.m_pObj;
          if ( m_pObj != 0
            && (m_pObj->m_pEntity->m_flags & 0x400) == 0
            && TeamDataForPlayer->__m_PathIndex.m_Value != -1 )
          {
            pTeamData = TeamDataForPlayer;
            (*(m_pObj->_vptr_IHandleEntity + 22))(m_pObj, 92, 0xFFFFFFFFLL, TeamDataForPlayer->__m_PathIndex.m_Value);
            TeamDataForPlayer = pTeamData;
          }
          TeamDataForPlayer->m_nPossibleHeroSelection.m_Value = HeroIDByName;
        }
        if ( LoggingSystem_IsChannelEnabled(LOG_SERVER, 1) != 0 )
        {
          v12 = UTIL_VarArgs("npc_dota_hero_%s", pszHeroName);
          v15.m_steamid.m_comp = CDOTA_PlayerResource::GetSteamID(this, iPlayerID);
          v13 = CSteamID::Render(&v15);
          LoggingSystem_Log(
            LOG_SERVER,
            1,
            "PR:SetPossibleHeroSelection %d:%s %s(%d)\n",
            iPlayerID,
            v13,
            v12,
            HeroIDByName);
        }
      }
    }
  }
}


// CDOTA_PlayerResource::SetSuggestedHeroSelection  (line 2043, @0x000000000265de40, libserver.so)  // inlines: CSteamID, Get, IsValidTeamPlayerID, NetworkStateChanged, Set, SetFromUint64, operator CEntityInstance*
// calls: DOTAGameManager, CDOTAGameManager::IsHeroAvailableByHeroID, memcmp, LoggingSystem_IsChannelEnabled, CDOTA_PlayerResource::GetSteamID, CSteamID::Render, LoggingSystem_Log
// callers: CDOTAPlayer::HandleSuggestHeroSelection, CDOTAPlayer::HandleSuggestHeroPick
// strings: "PR:SetSuggestedHeroSelection %d:%s %d\n"
bool __fastcall CDOTA_PlayerResource::SetSuggestedHeroSelection(
        CDOTA_PlayerResource *const this,
        int iPlayerID,
        int nHeroID)
{
  int v5; // r14d
  CDOTAGameManager *v6; // rax
  bool IsHeroAvailableByHeroID; // bl
  int v8; // r15d
  __int64 v9; // rax
  __int64 v10; // rdx
  int v11; // ecx
  int v12; // eax
  __int64 v13; // r9
  __int64 v14; // r8
  char IsChannelEnabled; // al
  const char *v16; // rax
  _QWORD *v18; // rdi
  __int64 v19; // [rsp+10h] [rbp-50h]
  int nHeroIDa; // [rsp+1Ch] [rbp-44h] BYREF
  CSteamID v21; // [rsp+20h] [rbp-40h] BYREF

  nHeroIDa = nHeroID;
  if ( iPlayerID < 0 )
    return 0;
  if ( iPlayerID >= *(this + 194) )
    return 0;
  v5 = nHeroIDa;
  if ( nHeroIDa == -1 )
    return 0;
  v6 = DOTAGameManager();
  IsHeroAvailableByHeroID = CDOTAGameManager::IsHeroAvailableByHeroID(v6, iPlayerID, nHeroIDa);
  if ( !IsHeroAvailableByHeroID )
    return 0;
  v8 = -1;
  v9 = 0;
  v10 = *(this + 98) + 200LL * iPlayerID + 60;
  do
  {
    v11 = *(v10 + 4 * v9);
    if ( v8 == -1 && v11 == -1 )
    {
      v8 = v9;
    }
    else if ( nHeroIDa == v11 )
    {
      return 0;
    }
    ++v9;
  }
  while ( v9 != 4 );
  v19 = *(this + 98) + 200LL * iPlayerID;
  if ( v8 == -1 )
    return 0;
  v12 = memcmp((v10 + 4LL * v8), &nHeroIDa, 4u);
  v13 = v8;
  v14 = v19;
  if ( v12 != 0 )
  {
    v18 = *(v19 + 8);
    if ( v18 != 0 && (*(v18[1] + 49LL) & 4) == 0 && *(v19 + 16) != 0xFFFF )
    {
      (*(*v18 + 176LL))(v18, 60, v8, *(v19 + 16));
      v14 = v19;
      v13 = v8;
    }
    *(v14 + 4 * v13 + 60) = v5;
  }
  IsChannelEnabled = LoggingSystem_IsChannelEnabled(LOG_SERVER, 1);
  if ( IsChannelEnabled != 0 )
  {
    IsHeroAvailableByHeroID = IsChannelEnabled;
    v21.m_steamid.m_comp = CDOTA_PlayerResource::GetSteamID(this, iPlayerID);
    v16 = CSteamID::Render(&v21);
    LoggingSystem_Log(LOG_SERVER, 1, "PR:SetSuggestedHeroSelection %d:%s %d\n", iPlayerID, v16, v5);
  }
  return IsHeroAvailableByHeroID;
}


// CDOTA_PlayerResource::ClearSuggestedHeroSelection  (line 2082, @0x000000000265e070, libserver.so)  // inlines: Element, Get, IsValidTeamPlayerID, NetworkStateChanged, Set, operator CEntityInstance*, operator[]
// calls: memcmp
// callers: CDOTAPlayer::HandleSuggestHeroPick
void __fastcall CDOTA_PlayerResource::ClearSuggestedHeroSelection(
        CDOTA_PlayerResource *const this,
        int nPlayerID,
        int nHeroID)
{
  unsigned int v5; // ebx
  __int64 v6; // r14
  __int64 v7; // r12
  __int64 v8; // rax
  __int64 v9; // r13
  int v10; // eax
  _QWORD *v11; // rdi
  int v12; // [rsp-54h] [rbp-54h]
  int v13; // [rsp-3Ch] [rbp-3Ch] BYREF

  if ( nPlayerID >= 0 && nPlayerID < *(this + 194) )
  {
    v5 = 0;
    v6 = 200LL * nPlayerID;
    do
    {
      v7 = *(this + 98) + v6;
      v8 = 4LL * v5;
      v9 = v7 + v8;
      if ( *(v7 + v8 + 60) == nHeroID )
      {
        v12 = nHeroID;
        v13 = -1;
        v10 = memcmp((v7 + v8 + 60), &v13, 4u);
        nHeroID = v12;
        if ( v10 != 0 )
        {
          v11 = *(v7 + 8);
          if ( v11 != 0 && (*(v11[1] + 49LL) & 4) == 0 && *(v7 + 16) != 0xFFFF )
          {
            (*(*v11 + 176LL))(v11, 60, v5, *(v7 + 16));
            nHeroID = v12;
          }
          *(v9 + 60) = -1;
        }
      }
      ++v5;
    }
    while ( v5 != 4 );
  }
}


// CDOTA_PlayerResource::GetPlayerSuggestedHeroList  (line 2099, @0x000000000267a8e0, libserver.so)  // inlines: AddToTail, CopyConstruct<int>, Element, GrowMemory, IsValidTeamPlayerID, RemoveAll, operator[]
// calls: CUtlMemory<int, int>::Grow
// callers: CDOTAPlayer::HandleSuggestHeroPick
void __fastcall CDOTA_PlayerResource::GetPlayerSuggestedHeroList(
        CDOTA_PlayerResource *const this,
        int nPlayerID,
        CUtlVector<int,CUtlMemory<int,int> > *const heroIDList)
{
  CUtlVectorBase<int,CUtlMemory<int,int> >::CAllocator *p_m_Memory; // rcx
  int v5; // ebx
  __int64 v6; // r15
  int v7; // r12d
  __int64 m_Size; // r13
  int v9; // eax
  int *v10; // rax
  CUtlVector<int,CUtlMemory<int,int> > *v11; // [rsp-48h] [rbp-48h]
  CUtlVectorBase<int,CUtlMemory<int,int> >::CAllocator *v12; // [rsp-40h] [rbp-40h]

  heroIDList->m_Size = 0;
  if ( nPlayerID >= 0 && nPlayerID < *(this + 194) )
  {
    p_m_Memory = &heroIDList->m_Memory;
    v5 = 0;
    v6 = 200LL * nPlayerID;
    do
    {
      v7 = *(v6 + *(this + 98) + 4LL * v5 + 60);
      if ( v7 != -1 )
      {
        m_Size = heroIDList->m_Size;
        v9 = heroIDList->m_Size;
        if ( m_Size == heroIDList->m_Memory.m_nAllocationCount )
        {
          v11 = heroIDList;
          v12 = p_m_Memory;
          CUtlMemory<int,int>::Grow(p_m_Memory, 1);
          heroIDList = v11;
          p_m_Memory = v12;
          v9 = v11->m_Size;
        }
        heroIDList->m_Size = v9 + 1;
        v10 = &heroIDList->m_Memory.m_pMemory[m_Size];
        if ( v10 != 0 )
          *v10 = v7;
      }
      ++v5;
    }
    while ( v5 != 4 );
  }
}


// CDOTA_PlayerResource::GetSuggestedHeroList  (line 2121, @0x000000000267ad10, libserver.so)  // inlines: AddToTail, CopyConstruct<int>, Element, GrowMemory, RemoveAll, operator[]
// calls: CDOTA_PlayerResource::GetTeam, CDOTA_PlayerResource::GetCoachTeam, CUtlMemory<int, int>::Grow
// callers: CDOTAGamerules::GetSmartRandomHeroList
void __fastcall CDOTA_PlayerResource::GetSuggestedHeroList(
        CDOTA_PlayerResource *const this,
        int iTeamNumber,
        CUtlVector<int,CUtlMemory<int,int> > *const heroIDList)
{
  __int64 v3; // r8
  int v6; // r13d
  int Team; // eax
  __int64 v8; // r8
  DOTATeam_t CoachTeam; // eax
  int j; // ebx
  int v11; // r12d
  __int64 m_Size; // rax
  int v13; // esi
  int *v14; // rax
  CUtlVectorBase<int,CUtlMemory<int,int> >::CAllocator *i; // [rsp+8h] [rbp-48h]
  int v16; // [rsp+10h] [rbp-40h]
  __int64 v18; // [rsp+18h] [rbp-38h]
  __int64 v19; // [rsp+18h] [rbp-38h]

  v3 = 0;
  v6 = 0;
  heroIDList->m_Size = 0;
  for ( i = &heroIDList->m_Memory; v6 < *(this + 194); v3 = v8 + 200 )
  {
    v18 = v3;
    Team = CDOTA_PlayerResource::GetTeam(this, v6);
    v8 = v18;
    if ( Team == iTeamNumber
      || (CoachTeam = CDOTA_PlayerResource::GetCoachTeam(this, v6), v8 = v18, CoachTeam == iTeamNumber) )
    {
      for ( j = 0; j != 4; ++j )
      {
        v11 = *(v8 + *(this + 98) + 4LL * j + 60);
        if ( v11 != -1 )
        {
          m_Size = heroIDList->m_Size;
          v13 = heroIDList->m_Size;
          if ( m_Size == heroIDList->m_Memory.m_nAllocationCount )
          {
            v16 = heroIDList->m_Size;
            v19 = v8;
            CUtlMemory<int,int>::Grow(i, 1);
            v13 = heroIDList->m_Size;
            m_Size = v16;
            v8 = v19;
          }
          heroIDList->m_Size = v13 + 1;
          v14 = &heroIDList->m_Memory.m_pMemory[m_Size];
          if ( v14 != 0 )
            *v14 = v11;
        }
      }
    }
    ++v6;
  }
}


// CDOTA_PlayerResource::IsHeroSelected  (line 2144, @0x00000000026560f0, libserver.so)
// calls: CDOTA_PlayerResource::WhoSelectedHero
// callers: IsHeroAvailableByKV, CDOTAGamerules::MakeRandomHeroSelection, CDOTA_Tutorial::AddBot, CDOTA_Tutorial::AddBotWithSettings
bool __fastcall CDOTA_PlayerResource::IsHeroSelected(CDOTA_PlayerResource *const this, const char *pHeroFilename)
{
  return CDOTA_PlayerResource::WhoSelectedHero(this, pHeroFilename) != -1;
}


// CDOTA_PlayerResource::WhoSelectedHero  (line 2151, @0x0000000002656030, libserver.so)  // inlines: V_StripExtension<long unsigned int>
// calls: _V_StripExtension, DOTAGameManager, CDOTAGameManager::GetHeroIDByName, __stack_chk_fail
// callers: CDOTA_CombatLog::DoCombatAnalysis, CDOTA_PlayerResource::IsHeroSelected
int __fastcall CDOTA_PlayerResource::WhoSelectedHero(CDOTA_PlayerResource *const this, const char *pHeroFilename)
{
  CDOTAGameManager *v4; // rax
  int HeroIDByName; // eax
  int v6; // esi
  __int64 v7; // rcx
  __int64 v8; // rcx
  int v9; // edx
  char pHeroName[512]; // [rsp+0h] [rbp-220h] BYREF
  unsigned __int64 v12; // [rsp+208h] [rbp-18h]

  v12 = __readfsqword(0x28u);
  if ( pHeroFilename == 0 )
    return -1;
  _V_StripExtension(pHeroFilename, pHeroName, 512);
  v4 = DOTAGameManager();
  HeroIDByName = CDOTAGameManager::GetHeroIDByName(v4, pHeroFilename);
  if ( HeroIDByName == -1 )
    return -1;
  v6 = *(this + 194);
  if ( v6 <= 0 )
    return -1;
  v7 = *(this + 98);
  if ( HeroIDByName != *(v7 + 20) )
  {
    v8 = v7 + 220;
    v9 = 0;
    while ( ++v9 != v6 )
    {
      v8 += 200;
      if ( HeroIDByName == *(v8 - 200) )
        return v9;
    }
    return -1;
  }
  return 0;
}


// CDOTA_PlayerResource::GetPlayerSelectedHeroHandle  (line 2177, @0x000000000265e160, libserver.so)  // inlines: CEntityHandle, CHandle, Element, IsValidTeamPlayerID, operator[]
// callers: CDOTA_BaseNPC::IsInRangeOfShop, CDOTA_CombatLog::GetHeroForName, CDOTA_CombatLog::RecordKillDamageBreakdown, CDOTA_CombatLog::AddManaDamageEvent, CDOTA_CombatLog::AddPhysicalDamagePreventedEvent, CDOTA_CombatLog::AddHealthEvent, CDOTA_CombatLog::DoCombatAnalysis, CDOTACustomGameEvents::InputLevelAllHeroesUpOnce, CDOTACustomGameEvents::InputLevelAllHeroesToLevel, CDOTAGamerules::OnLobbyUpdated, CDOTAGamerules::CheckIdleAndDisconnectedPlayers, CDOTAGamerules::ResetSelectedHeroes (74 total)
_DWORD *__fastcall CDOTA_PlayerResource::GetPlayerSelectedHeroHandle(
        _DWORD *a1,
        CDOTA_PlayerResource *const this,
        int iPlayerID)
{
  _DWORD *result; // rax

  result = a1;
  if ( iPlayerID < 0 || iPlayerID >= *(this + 194) )
    *a1 = -1;
  else
    *a1 = *(*(this + 98) + 200LL * iPlayerID + 52);
  return result;
}


// CDOTA_PlayerResource::Script_GetSelectedHeroEntity  (line 2187, @0x000000000265e1a0, libserver.so)  // inlines: EntityToHScript, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetPublicScriptScope, IndexToIdentity, IsValid, LookupEntity, ToHScript, operator CEntityInstance*
// calls: CDOTA_PlayerResource::GetPlayerSelectedHeroHandle, CEntityInstance::CreatePublicScriptScope
// globals: CEntityHandle::gm_pEntityList
HSCRIPT __fastcall CDOTA_PlayerResource::Script_GetSelectedHeroEntity(CDOTA_PlayerResource *const this, int iPlayerID)
{
  HSCRIPT result; // rax
  CEntityIdentity *v3; // rcx
  CEntityIdentity *v4; // rcx
  CEntityInstance *m_pInstance; // rbx
  _DWORD v6[8]; // [rsp+0h] [rbp-20h] BYREF

  CDOTA_PlayerResource::GetPlayerSelectedHeroHandle(v6, this, iPlayerID);
  result = 0;
  if ( (v6[0] + 2) > 1 )
  {
    v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v6[0]) >> 9) & 0x3F];
    if ( v3 != 0 )
    {
      v4 = &v3[v6[0] & 0x1FF];
      if ( v4 != 0 && v6[0] == v4->m_EHandle.m_Index )
      {
        m_pInstance = v4->m_pInstance;
        if ( v4->m_pInstance != 0 )
        {
          result = m_pInstance->m_pEntity->m_hPublicScope.m_hScope;
          if ( result == 0 )
          {
            CEntityInstance::CreatePublicScriptScope(v4->m_pInstance, 0);
            return m_pInstance->m_pEntity->m_hPublicScope.m_hScope;
          }
        }
      }
    }
  }
  return result;
}


// CDOTA_PlayerResource::GetPlayer  (line 2194, @0x000000000265e240, libserver.so)  // inlines: Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, IndexToIdentity, IsValid, IsValidPlayerID, LookupEntity, Set, ToDOTAPlayer, operator CBaseEntity*, operator CEntityInstance*, operator bool, operator=
// calls: UTIL_PlayerByIndex
// callers: InitFilterFromPlayerID, CDOTA_BaseNPC::IsInRangeOfShop, CDOTA_RealtimeCombatAnalyzer::QueryFullyMatched, CDOTA_RealtimeCombatAnalyzer::QueryFailed, CDOTAChallengeSystem::FireGameEvent, CDOTAChallengeSystem::AddResultToSignout, CDOTA_CombatLog::DoCombatAnalysis, CDOTACustomGameEvents::InputLevelAllHeroesToMax, dota_pick_hero, DOTA_ReportInvalidOrder, DOTA_ReportCustomInvalidOrder, CDOTAGamerules::ClientMsg_Pause (72 total)
// globals: CEntityHandle::gm_pEntityList
CDOTAPlayer *__fastcall CDOTA_PlayerResource::GetPlayer(CDOTA_PlayerResource *const this, int iPlayerID)
{
  _WORD *v3; // r15
  CEntityIdentity *v4; // rax
  CEntityIdentity *v5; // rax
  CEntityIndex v6; // r12d
  CBasePlayer *v7; // rax
  CDOTAPlayer *v8; // rbx
  CDOTAPlayer *result; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v11; // eax
  __int16 v12; // cx
  CDOTAPlayer *m_pInstance; // rbx
  char v14; // dl

  if ( iPlayerID < 0 || iPlayerID >= *(this + 212) )
    return 0;
  v3 = (this + 4 * iPlayerID + 996);
  if ( (*v3 + 2) > 1 )
  {
    v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(*v3 >> 9) & 0x3F];
    if ( v4 != 0 )
    {
      v5 = &v4[*v3 & 0x1FF];
      if ( v5 != 0 && *v3 == v5->m_EHandle.m_Index )
      {
        m_pInstance = v5->m_pInstance;
        if ( v5->m_pInstance != 0 )
        {
          v14 = (*(m_pInstance->_vptr_IHandleEntity + 140))(m_pInstance);
          result = m_pInstance;
          if ( v14 != 0 )
            return result;
        }
        return 0;
      }
    }
  }
  v6.m_Data = 1;
  if ( gpGlobals->maxClients <= 0 )
    return 0;
  while ( 1 )
  {
    v7 = UTIL_PlayerByIndex(v6);
    v8 = v7;
    if ( v7 != 0 && (*(v7->_vptr_IHandleEntity + 140))(v7) != 0 && iPlayerID == (*(v8->_vptr_IHandleEntity + 393))(v8) )
      break;
    if ( gpGlobals->maxClients < ++v6.m_Data )
      return 0;
  }
  m_pEntity = v8->m_pEntity;
  if ( m_pEntity != 0 )
  {
    v11 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
    v12 = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      v12 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    *v3 = v12 | *v3 & 0x8000;
    *v3 = (v11 << 15) | *v3 & 0x7FFF;
    return v8;
  }
  else
  {
    *v3 = -1;
    return v8;
  }
}


// CDOTA_PlayerResource::ClearPlayer  (line 2221, @0x000000000265e660, libserver.so)  // inlines: IsValidPlayerID, operator=
// callers: CDOTAGamerules::ClientDisconnected
void __fastcall CDOTA_PlayerResource::ClearPlayer(CDOTA_PlayerResource *const this, int iPlayerID)
{
  if ( iPlayerID >= 0 && iPlayerID < *(this + 212) )
    *(this + iPlayerID + 249) = -1;
}


// CDOTA_PlayerResource::Script_GetPlayer  (line 2233, @0x000000000265e3d0, libserver.so)  // inlines: EntityToHScript, Get, GetPublicScriptScope, ToHScript
// calls: CDOTA_PlayerResource::GetPlayer, CEntityInstance::CreatePublicScriptScope
HSCRIPT __fastcall CDOTA_PlayerResource::Script_GetPlayer(CDOTA_PlayerResource *const this, int iPlayerID)
{
  CDOTAPlayer *Player; // rax
  CDOTAPlayer *v4; // [rsp+8h] [rbp-8h]

  Player = CDOTA_PlayerResource::GetPlayer(this, iPlayerID);
  if ( Player == 0 )
    return 0;
  if ( Player->m_pEntity->m_hPublicScope.m_hScope != 0 )
    return Player->m_pEntity->m_hPublicScope.m_hScope;
  v4 = Player;
  CEntityInstance::CreatePublicScriptScope(Player, 0);
  return v4->m_pEntity->m_hPublicScope.m_hScope;
}


// CDOTA_PlayerResource::GetNthPlayerIDOnTeam  (line 2240, @0x00000000026564d0, libserver.so)  // inlines: operator==<int>
// calls: CDOTA_PlayerResource::IsValidPlayer
// callers: CDOTAGamerules::HeroPickState_Leave_CM_CAPTAINPICK, CDOTAGamerules::HeroPickState_Leave_CD_CAPTAINPICK, CDOTAGamerules::AutoAssignCaptains, CDOTAGamerules::StartCreateHeroStatues, Script_GetTeamMember, CDOTA_TeamCommander::DoBotScriptLaneAssignments, CDOTAGCServerSystem::SendScoreboardUpdate, CDOTAGCServerSystem::UpdateRealtimeGameState, CDOTA_Ability_Rattletrap_RocketFlare::OnSpellStart
int __fastcall CDOTA_PlayerResource::GetNthPlayerIDOnTeam(
        CDOTA_PlayerResource *const this,
        int iTeamNumber,
        int iNthPlayer)
{
  int result; // eax
  int v5; // r12d
  __int64 v7; // r15
  int v8; // r14d

  result = -1;
  v5 = *(this + 212);
  if ( v5 > 0 )
  {
    v7 = 0;
    v8 = 0;
    do
    {
      if ( CDOTA_PlayerResource::IsValidPlayer(this, v7)
        && *(*(this + 107) + 72 * v7 + 32) == iTeamNumber
        && ++v8 == iNthPlayer )
      {
        return v7;
      }
      ++v7;
    }
    while ( v5 > v7 );
    return -1;
  }
  return result;
}


// CDOTA_PlayerResource::IncrementLastHits  (line 2259, @0x0000000002664d20, libserver.so)  // inlines: Get, NetworkStateChanged, Set, operator CEntityInstance*, operator++, operator+=<int>
// calls: CDOTA_PlayerResource::GetTeamDataForPlayer
// callers: CDOTA_BaseNPC_Hero::IncrementLastHits, CDOTA_BaseNPC_Hero::RecordLastHit
void __fastcall CDOTA_PlayerResource::IncrementLastHits(CDOTA_PlayerResource *const this, int iPlayerID)
{
  DataTeamPlayer_t *TeamDataForPlayer; // rax
  CEntityInstance *m_pObj; // rdi
  int v4; // ebx
  DataTeamPlayer_t *pTeamData; // [rsp+8h] [rbp-18h]

  TeamDataForPlayer = CDOTA_PlayerResource::GetTeamDataForPlayer(this, iPlayerID);
  if ( TeamDataForPlayer != 0 )
  {
    m_pObj = TeamDataForPlayer->__m_pChainEntity.m_pObj;
    v4 = TeamDataForPlayer->m_iLastHitCount.m_Value + 1;
    if ( m_pObj != 0 && (m_pObj->m_pEntity->m_flags & 0x400) == 0 && TeamDataForPlayer->__m_PathIndex.m_Value != -1 )
    {
      pTeamData = TeamDataForPlayer;
      (*(m_pObj->_vptr_IHandleEntity + 22))(m_pObj, 64, 0xFFFFFFFFLL, TeamDataForPlayer->__m_PathIndex.m_Value);
      TeamDataForPlayer = pTeamData;
    }
    TeamDataForPlayer->m_iLastHitCount.m_Value = v4;
  }
}


// CDOTA_PlayerResource::IncrementObserverWardsPlaced  (line 2269, @0x0000000002665240, libserver.so)  // inlines: Get, NetworkStateChanged, Set, operator CEntityInstance*, operator++, operator+=<int>
// calls: CDOTA_PlayerResource::GetTeamDataForPlayer
// callers: CDOTA_Item_Ward_Dispenser::OnSpellStart, CDOTA_Item_ObserverWard::OnSpellStart
void __fastcall CDOTA_PlayerResource::IncrementObserverWardsPlaced(CDOTA_PlayerResource *const this, int iPlayerID)
{
  DataTeamPlayer_t *TeamDataForPlayer; // rax
  CEntityInstance *m_pObj; // rdi
  int v4; // ebx
  DataTeamPlayer_t *pTeamData; // [rsp+8h] [rbp-18h]

  TeamDataForPlayer = CDOTA_PlayerResource::GetTeamDataForPlayer(this, iPlayerID);
  if ( TeamDataForPlayer != 0 )
  {
    m_pObj = TeamDataForPlayer->__m_pChainEntity.m_pObj;
    v4 = TeamDataForPlayer->m_iObserverWardsPlaced.m_Value + 1;
    if ( m_pObj != 0 && (m_pObj->m_pEntity->m_flags & 0x400) == 0 && TeamDataForPlayer->__m_PathIndex.m_Value != -1 )
    {
      pTeamData = TeamDataForPlayer;
      (*(m_pObj->_vptr_IHandleEntity + 22))(m_pObj, 144, 0xFFFFFFFFLL, TeamDataForPlayer->__m_PathIndex.m_Value);
      TeamDataForPlayer = pTeamData;
    }
    TeamDataForPlayer->m_iObserverWardsPlaced.m_Value = v4;
  }
}


// CDOTA_PlayerResource::GetObserverWardsPlaced  (line 2280, @0x0000000002662e90, libserver.so)
// calls: CDOTA_PlayerResource::GetTeamDataForPlayer
// callers: CDOTA_RealtimeCombatAnalyzer::EvaluateGameState, CDOTA_CombatLog::AddEndGameStatsEvent, CDOTA_CombatLog::DoCombatAnalysis, CDOTAHeroList::GiveAdditionalAssists, CDOTA_BaseNPC_Hero::KilledHero, CDOTAHeroList::GivePlayerFullBountyGold, CDOTAHeroList::GiveKillerBountyGold, CDOTAGCServerSystem::PopulateFantasyStats, CDOTA_Item_Ward_Dispenser::OnSpellStart, CDOTA_Item_ObserverWard::OnSpellStart
int __fastcall CDOTA_PlayerResource::GetObserverWardsPlaced(CDOTA_PlayerResource *const this, int iPlayerID)
{
  DataTeamPlayer_t *TeamDataForPlayer; // rax

  TeamDataForPlayer = CDOTA_PlayerResource::GetTeamDataForPlayer(this, iPlayerID);
  if ( TeamDataForPlayer != 0 )
    return TeamDataForPlayer->m_iObserverWardsPlaced.m_Value;
  else
    return 0;
}


// CDOTA_PlayerResource::IncrementSentryWardsPlaced  (line 2291, @0x00000000026652b0, libserver.so)  // inlines: Get, NetworkStateChanged, Set, operator CEntityInstance*, operator++, operator+=<int>
// calls: CDOTA_PlayerResource::GetTeamDataForPlayer
// callers: CDOTA_Item_Ward_Dispenser::OnSpellStart, CDOTA_Item_SentryWard::OnSpellStart
void __fastcall CDOTA_PlayerResource::IncrementSentryWardsPlaced(CDOTA_PlayerResource *const this, int iPlayerID)
{
  DataTeamPlayer_t *TeamDataForPlayer; // rax
  CEntityInstance *m_pObj; // rdi
  int v4; // ebx
  DataTeamPlayer_t *pTeamData; // [rsp+8h] [rbp-18h]

  TeamDataForPlayer = CDOTA_PlayerResource::GetTeamDataForPlayer(this, iPlayerID);
  if ( TeamDataForPlayer != 0 )
  {
    m_pObj = TeamDataForPlayer->__m_pChainEntity.m_pObj;
    v4 = TeamDataForPlayer->m_iSentryWardsPlaced.m_Value + 1;
    if ( m_pObj != 0 && (m_pObj->m_pEntity->m_flags & 0x400) == 0 && TeamDataForPlayer->__m_PathIndex.m_Value != -1 )
    {
      pTeamData = TeamDataForPlayer;
      (*(m_pObj->_vptr_IHandleEntity + 22))(m_pObj, 148, 0xFFFFFFFFLL, TeamDataForPlayer->__m_PathIndex.m_Value);
      TeamDataForPlayer = pTeamData;
    }
    TeamDataForPlayer->m_iSentryWardsPlaced.m_Value = v4;
  }
}


// CDOTA_PlayerResource::GetSentryWardsPlaced  (line 2302, @0x0000000002662ec0, libserver.so)
// calls: CDOTA_PlayerResource::GetTeamDataForPlayer
int __fastcall CDOTA_PlayerResource::GetSentryWardsPlaced(CDOTA_PlayerResource *const this, int iPlayerID)
{
  DataTeamPlayer_t *TeamDataForPlayer; // rax

  TeamDataForPlayer = CDOTA_PlayerResource::GetTeamDataForPlayer(this, iPlayerID);
  if ( TeamDataForPlayer != 0 )
    return TeamDataForPlayer->m_iSentryWardsPlaced.m_Value;
  else
    return 0;
}


// CDOTA_PlayerResource::GetTotalWardsPlaced  (line 2314, @0x0000000002662ef0, libserver.so)
// calls: CDOTA_PlayerResource::GetTeamDataForPlayer
// callers: CDOTA_CombatLog::GenerateExperimentalTimedStats
int __fastcall CDOTA_PlayerResource::GetTotalWardsPlaced(CDOTA_PlayerResource *const this, int iPlayerID)
{
  DataTeamPlayer_t *TeamDataForPlayer; // rax

  TeamDataForPlayer = CDOTA_PlayerResource::GetTeamDataForPlayer(this, iPlayerID);
  if ( TeamDataForPlayer != 0 )
    return TeamDataForPlayer->m_iObserverWardsPlaced.m_Value + TeamDataForPlayer->m_iSentryWardsPlaced.m_Value;
  else
    return 0;
}


// CDOTA_PlayerResource::AddToWardsPurchased  (line 2325, @0x00000000026645b0, libserver.so)  // inlines: Get, NetworkStateChanged, Set, operator CEntityInstance*, operator+=<int>
// calls: CDOTA_PlayerResource::GetTeamDataForPlayer
// callers: CDOTA_Item_SentryWard::OnPurchase, CDOTA_Item_ObserverWard::OnPurchase
void __fastcall CDOTA_PlayerResource::AddToWardsPurchased(CDOTA_PlayerResource *const this, int iPlayerID, int nCount)
{
  DataTeamPlayer_t *TeamDataForPlayer; // rax
  int m_Value; // ecx
  int v6; // ebx
  CEntityInstance *m_pObj; // rdi
  DataTeamPlayer_t *pTeamData; // [rsp+8h] [rbp-18h]

  TeamDataForPlayer = CDOTA_PlayerResource::GetTeamDataForPlayer(this, iPlayerID);
  if ( TeamDataForPlayer != 0 )
  {
    m_Value = TeamDataForPlayer->m_iWardsPurchased.m_Value;
    v6 = m_Value + nCount;
    if ( m_Value != v6 )
    {
      m_pObj = TeamDataForPlayer->__m_pChainEntity.m_pObj;
      if ( m_pObj != 0 && (m_pObj->m_pEntity->m_flags & 0x400) == 0 && TeamDataForPlayer->__m_PathIndex.m_Value != -1 )
      {
        pTeamData = TeamDataForPlayer;
        (*(m_pObj->_vptr_IHandleEntity + 22))(m_pObj, 172, 0xFFFFFFFFLL, TeamDataForPlayer->__m_PathIndex.m_Value);
        TeamDataForPlayer = pTeamData;
      }
      TeamDataForPlayer->m_iWardsPurchased.m_Value = v6;
    }
  }
}


// CDOTA_PlayerResource::IncrementWardsDestroyed  (line 2336, @0x0000000002665320, libserver.so)  // inlines: Get, NetworkStateChanged, Set, operator CEntityInstance*, operator++, operator+=<int>
// calls: CDOTA_PlayerResource::GetTeamDataForPlayer
// callers: CDOTA_NPC_Observer_Ward::Event_Killed
void __fastcall CDOTA_PlayerResource::IncrementWardsDestroyed(CDOTA_PlayerResource *const this, int iPlayerID)
{
  DataTeamPlayer_t *TeamDataForPlayer; // rax
  CEntityInstance *m_pObj; // rdi
  int v4; // ebx
  DataTeamPlayer_t *pTeamData; // [rsp+8h] [rbp-18h]

  TeamDataForPlayer = CDOTA_PlayerResource::GetTeamDataForPlayer(this, iPlayerID);
  if ( TeamDataForPlayer != 0 )
  {
    m_pObj = TeamDataForPlayer->__m_pChainEntity.m_pObj;
    v4 = TeamDataForPlayer->m_iWardsDestroyed.m_Value + 1;
    if ( m_pObj != 0 && (m_pObj->m_pEntity->m_flags & 0x400) == 0 && TeamDataForPlayer->__m_PathIndex.m_Value != -1 )
    {
      pTeamData = TeamDataForPlayer;
      (*(m_pObj->_vptr_IHandleEntity + 22))(m_pObj, 176, 0xFFFFFFFFLL, TeamDataForPlayer->__m_PathIndex.m_Value);
      TeamDataForPlayer = pTeamData;
    }
    TeamDataForPlayer->m_iWardsDestroyed.m_Value = v4;
  }
}


// CDOTA_PlayerResource::SetFirstBloodClaimed  (line 2347, @0x000000000265e680, libserver.so)  // inlines: Element, Get, IsValidPlayerID, NetworkStateChanged, Set, operator CEntityInstance*, operator=<int>, operator[]
// callers: CDOTAHeroList::TriggerFirstBlood
void __fastcall CDOTA_PlayerResource::SetFirstBloodClaimed(CDOTA_PlayerResource *const this, int iPlayerID)
{
  __int64 v2; // rbx
  _QWORD *v3; // rdi

  if ( iPlayerID >= 0 && iPlayerID < *(this + 212) )
  {
    v2 = *(this + 98) + 200LL * iPlayerID;
    if ( *(v2 + 188) != 1 )
    {
      v3 = *(v2 + 8);
      if ( v3 != 0 && (*(v3[1] + 49LL) & 4) == 0 && *(v2 + 16) != 0xFFFF )
        (*(*v3 + 176LL))(v3, 188, 0xFFFFFFFFLL, *(v2 + 16));
      *(v2 + 188) = 1;
    }
  }
}


// CDOTA_PlayerResource::SetFirstBloodGiven  (line 2357, @0x000000000265e710, libserver.so)  // inlines: Element, Get, IsValidPlayerID, NetworkStateChanged, Set, operator CEntityInstance*, operator=<int>, operator[]
// callers: CDOTAHeroList::TriggerFirstBlood
void __fastcall CDOTA_PlayerResource::SetFirstBloodGiven(CDOTA_PlayerResource *const this, int iPlayerID)
{
  __int64 v2; // rbx
  _QWORD *v3; // rdi

  if ( iPlayerID >= 0 && iPlayerID < *(this + 212) )
  {
    v2 = *(this + 98) + 200LL * iPlayerID;
    if ( *(v2 + 192) != 1 )
    {
      v3 = *(v2 + 8);
      if ( v3 != 0 && (*(v3[1] + 49LL) & 4) == 0 && *(v2 + 16) != 0xFFFF )
        (*(*v3 + 176LL))(v3, 192, 0xFFFFFFFFLL, *(v2 + 16));
      *(v2 + 192) = 1;
    }
  }
}


// CDOTA_PlayerResource::GetFirstBloodClaimed  (line 2368, @0x000000000265e7a0, libserver.so)  // inlines: Element, operator><int>, operator[]
// callers: CDOTAGCServerSystem::PopulateFantasyStats
bool __fastcall CDOTA_PlayerResource::GetFirstBloodClaimed(CDOTA_PlayerResource *const this, int iPlayerID)
{
  return *(*(this + 98) + 200LL * iPlayerID + 188) > 0;
}


// CDOTA_PlayerResource::GetFirstBloodGiven  (line 2375, @0x000000000265e7d0, libserver.so)  // inlines: Element, operator><int>, operator[]
bool __fastcall CDOTA_PlayerResource::GetFirstBloodGiven(CDOTA_PlayerResource *const this, int iPlayerID)
{
  return *(*(this + 98) + 200LL * iPlayerID + 192) > 0;
}


// CDOTA_PlayerResource::IncrementTeleportsUsed  (line 2382, @0x000000000265e800, libserver.so)  // inlines: IsValidTeamPlayerID
// callers: CDOTA_Item_TeleportScroll::OnChannelFinish
void __fastcall CDOTA_PlayerResource::IncrementTeleportsUsed(CDOTA_PlayerResource *const this, int iPlayerID)
{
  if ( iPlayerID >= 0 && iPlayerID < *(this + 194) )
    ++*(this + iPlayerID + 3252);
}


// CDOTA_PlayerResource::GetTeleportsUsed  (line 2392, @0x000000000265e820, libserver.so)  // inlines: IsValidTeamPlayerID
// callers: CDOTA_CombatLog::GenerateExperimentalTimedStats
int __fastcall CDOTA_PlayerResource::GetTeleportsUsed(CDOTA_PlayerResource *const this, int iPlayerID)
{
  int result; // eax

  result = 0;
  if ( iPlayerID >= 0 && iPlayerID < *(this + 194) )
    return *(this + iPlayerID + 3252);
  return result;
}


// CDOTA_PlayerResource::IncrementLastHitStreak  (line 2402, @0x0000000002664620, libserver.so)  // inlines: Get, NetworkStateChanged, Set, operator CEntityInstance*, operator++, operator+=<int>
// calls: CDOTA_PlayerResource::GetTeamDataForPlayer
// callers: CDOTA_BaseNPC_Hero::IncrementLastHitStreak, CDOTA_BaseNPC_Hero::RecordLastHit
void __fastcall CDOTA_PlayerResource::IncrementLastHitStreak(CDOTA_PlayerResource *const this, int iPlayerID)
{
  DataTeamPlayer_t *TeamDataForPlayer; // rax
  CEntityInstance *m_pObj; // rdi
  int v4; // ebx
  DataTeamPlayer_t *pTeamData; // [rsp+8h] [rbp-18h]

  TeamDataForPlayer = CDOTA_PlayerResource::GetTeamDataForPlayer(this, iPlayerID);
  if ( TeamDataForPlayer != 0 )
  {
    m_pObj = TeamDataForPlayer->__m_pChainEntity.m_pObj;
    v4 = TeamDataForPlayer->m_iLastHitStreak.m_Value + 1;
    if ( m_pObj != 0 && (m_pObj->m_pEntity->m_flags & 0x400) == 0 && TeamDataForPlayer->__m_PathIndex.m_Value != -1 )
    {
      pTeamData = TeamDataForPlayer;
      (*(m_pObj->_vptr_IHandleEntity + 22))(m_pObj, 68, 0xFFFFFFFFLL, TeamDataForPlayer->__m_PathIndex.m_Value);
      TeamDataForPlayer = pTeamData;
    }
    TeamDataForPlayer->m_iLastHitStreak.m_Value = v4;
  }
}


// CDOTA_PlayerResource::ClearLastHitStreak  (line 2410, @0x0000000002664680, libserver.so)  // inlines: Get, NetworkStateChanged, Set, operator CEntityInstance*, operator=<int>
// calls: CDOTA_PlayerResource::GetTeamDataForPlayer
// callers: CDOTA_BaseNPC_Hero::ClearLastHitStreak, CDOTAHeroList::GiveExperience
void __fastcall CDOTA_PlayerResource::ClearLastHitStreak(CDOTA_PlayerResource *const this, int iPlayerID)
{
  DataTeamPlayer_t *TeamDataForPlayer; // rax
  CEntityInstance *m_pObj; // rdi
  DataTeamPlayer_t *pTeamData; // [rsp+8h] [rbp-8h]

  TeamDataForPlayer = CDOTA_PlayerResource::GetTeamDataForPlayer(this, iPlayerID);
  if ( TeamDataForPlayer != 0 && TeamDataForPlayer->m_iLastHitStreak.m_Value != 0 )
  {
    m_pObj = TeamDataForPlayer->__m_pChainEntity.m_pObj;
    if ( m_pObj != 0 && (m_pObj->m_pEntity->m_flags & 0x400) == 0 && TeamDataForPlayer->__m_PathIndex.m_Value != -1 )
    {
      pTeamData = TeamDataForPlayer;
      (*(m_pObj->_vptr_IHandleEntity + 22))(m_pObj, 68, 0xFFFFFFFFLL, TeamDataForPlayer->__m_PathIndex.m_Value);
      TeamDataForPlayer = pTeamData;
    }
    TeamDataForPlayer->m_iLastHitStreak.m_Value = 0;
  }
}


// CDOTA_PlayerResource::IncrementLastHitMultikill  (line 2420, @0x00000000026646f0, libserver.so)  // inlines: Get, NetworkStateChanged, Set, operator CEntityInstance*, operator++, operator+=<int>
// calls: CDOTA_PlayerResource::GetTeamDataForPlayer
// callers: CDOTA_BaseNPC_Hero::IncrementLastHitMultikill, CDOTA_BaseNPC_Hero::RecordLastHit
void __fastcall CDOTA_PlayerResource::IncrementLastHitMultikill(CDOTA_PlayerResource *const this, int iPlayerID)
{
  DataTeamPlayer_t *TeamDataForPlayer; // rax
  CEntityInstance *m_pObj; // rdi
  int v4; // ebx
  DataTeamPlayer_t *pTeamData; // [rsp+8h] [rbp-18h]

  TeamDataForPlayer = CDOTA_PlayerResource::GetTeamDataForPlayer(this, iPlayerID);
  if ( TeamDataForPlayer != 0 )
  {
    m_pObj = TeamDataForPlayer->__m_pChainEntity.m_pObj;
    v4 = TeamDataForPlayer->m_iLastHitMultikill.m_Value + 1;
    if ( m_pObj != 0 && (m_pObj->m_pEntity->m_flags & 0x400) == 0 && TeamDataForPlayer->__m_PathIndex.m_Value != -1 )
    {
      pTeamData = TeamDataForPlayer;
      (*(m_pObj->_vptr_IHandleEntity + 22))(m_pObj, 72, 0xFFFFFFFFLL, TeamDataForPlayer->__m_PathIndex.m_Value);
      TeamDataForPlayer = pTeamData;
    }
    TeamDataForPlayer->m_iLastHitMultikill.m_Value = v4;
  }
}


// CDOTA_PlayerResource::ClearLastHitMultikill  (line 2428, @0x0000000002664750, libserver.so)  // inlines: Get, NetworkStateChanged, Set, operator CEntityInstance*, operator=<int>
// calls: CDOTA_PlayerResource::GetTeamDataForPlayer
// callers: CDOTA_BaseNPC_Hero::ClearLastHitMultikill, CDOTA_BaseNPC_Hero::Think
void __fastcall CDOTA_PlayerResource::ClearLastHitMultikill(CDOTA_PlayerResource *const this, int iPlayerID)
{
  DataTeamPlayer_t *TeamDataForPlayer; // rax
  CEntityInstance *m_pObj; // rdi
  DataTeamPlayer_t *pTeamData; // [rsp+8h] [rbp-8h]

  TeamDataForPlayer = CDOTA_PlayerResource::GetTeamDataForPlayer(this, iPlayerID);
  if ( TeamDataForPlayer != 0 && TeamDataForPlayer->m_iLastHitMultikill.m_Value != 0 )
  {
    m_pObj = TeamDataForPlayer->__m_pChainEntity.m_pObj;
    if ( m_pObj != 0 && (m_pObj->m_pEntity->m_flags & 0x400) == 0 && TeamDataForPlayer->__m_PathIndex.m_Value != -1 )
    {
      pTeamData = TeamDataForPlayer;
      (*(m_pObj->_vptr_IHandleEntity + 22))(m_pObj, 72, 0xFFFFFFFFLL, TeamDataForPlayer->__m_PathIndex.m_Value);
      TeamDataForPlayer = pTeamData;
    }
    TeamDataForPlayer->m_iLastHitMultikill.m_Value = 0;
  }
}


// CDOTA_PlayerResource::IncrementNearbyCreepDeaths  (line 2438, @0x0000000002665390, libserver.so)  // inlines: Get, NetworkStateChanged, Set, operator CEntityInstance*, operator++, operator+=<int>
// calls: CDOTA_PlayerResource::GetTeamDataForPlayer
// callers: CDOTA_BaseNPC_Hero::IncrementNearbyCreepDeaths, CDOTA_BaseNPC_Hero::RecordLastHit, CDOTAHeroList::GiveExperience
void __fastcall CDOTA_PlayerResource::IncrementNearbyCreepDeaths(CDOTA_PlayerResource *const this, int iPlayerID)
{
  DataTeamPlayer_t *TeamDataForPlayer; // rax
  CEntityInstance *m_pObj; // rdi
  int v4; // ebx
  DataTeamPlayer_t *pTeamData; // [rsp+8h] [rbp-18h]

  TeamDataForPlayer = CDOTA_PlayerResource::GetTeamDataForPlayer(this, iPlayerID);
  if ( TeamDataForPlayer != 0 )
  {
    m_pObj = TeamDataForPlayer->__m_pChainEntity.m_pObj;
    v4 = TeamDataForPlayer->m_iNearbyCreepDeathCount.m_Value + 1;
    if ( m_pObj != 0 && (m_pObj->m_pEntity->m_flags & 0x400) == 0 && TeamDataForPlayer->__m_PathIndex.m_Value != -1 )
    {
      pTeamData = TeamDataForPlayer;
      (*(m_pObj->_vptr_IHandleEntity + 22))(m_pObj, 76, 0xFFFFFFFFLL, TeamDataForPlayer->__m_PathIndex.m_Value);
      TeamDataForPlayer = pTeamData;
    }
    TeamDataForPlayer->m_iNearbyCreepDeathCount.m_Value = v4;
  }
}


// CDOTA_PlayerResource::GetNearbyCreepDeaths  (line 2446, @0x0000000002662f20, libserver.so)
// calls: CDOTA_PlayerResource::GetTeamDataForPlayer
int __fastcall CDOTA_PlayerResource::GetNearbyCreepDeaths(CDOTA_PlayerResource *const this, int iPlayerID)
{
  DataTeamPlayer_t *TeamDataForPlayer; // rax

  TeamDataForPlayer = CDOTA_PlayerResource::GetTeamDataForPlayer(this, iPlayerID);
  if ( TeamDataForPlayer != 0 )
    return TeamDataForPlayer->m_iNearbyCreepDeathCount.m_Value;
  else
    return 0;
}


// CDOTA_PlayerResource::IncrementCreepsStacked  (line 2457, @0x00000000026647c0, libserver.so)  // inlines: Get, NetworkStateChanged, Set, operator CEntityInstance*, operator+=<int>
// calls: CDOTA_PlayerResource::GetTeamDataForPlayer
// callers: CDOTA_NeutralSpawner::SpawnNextBatch
void __fastcall CDOTA_PlayerResource::IncrementCreepsStacked(
        CDOTA_PlayerResource *const this,
        int iPlayerID,
        int nCreeps)
{
  DataTeamPlayer_t *TeamDataForPlayer; // rax
  int m_Value; // ecx
  int v6; // ebx
  CEntityInstance *m_pObj; // rdi
  DataTeamPlayer_t *pTeamData; // [rsp+8h] [rbp-18h]

  TeamDataForPlayer = CDOTA_PlayerResource::GetTeamDataForPlayer(this, iPlayerID);
  if ( TeamDataForPlayer != 0 )
  {
    m_Value = TeamDataForPlayer->m_iCreepsStacked.m_Value;
    v6 = m_Value + nCreeps;
    if ( m_Value != v6 )
    {
      m_pObj = TeamDataForPlayer->__m_pChainEntity.m_pObj;
      if ( m_pObj != 0 && (m_pObj->m_pEntity->m_flags & 0x400) == 0 && TeamDataForPlayer->__m_PathIndex.m_Value != -1 )
      {
        pTeamData = TeamDataForPlayer;
        (*(m_pObj->_vptr_IHandleEntity + 22))(m_pObj, 152, 0xFFFFFFFFLL, TeamDataForPlayer->__m_PathIndex.m_Value);
        TeamDataForPlayer = pTeamData;
      }
      TeamDataForPlayer->m_iCreepsStacked.m_Value = v6;
    }
  }
}


// CDOTA_PlayerResource::IncrementCampsStacked  (line 2467, @0x00000000026653f0, libserver.so)  // inlines: Get, NetworkStateChanged, Set, operator CEntityInstance*, operator++, operator+=<int>
// calls: CDOTA_PlayerResource::GetTeamDataForPlayer
// callers: CDOTA_NeutralSpawner::SpawnNextBatch
void __fastcall CDOTA_PlayerResource::IncrementCampsStacked(CDOTA_PlayerResource *const this, int iPlayerID)
{
  DataTeamPlayer_t *TeamDataForPlayer; // rax
  CEntityInstance *m_pObj; // rdi
  int v4; // ebx
  DataTeamPlayer_t *pTeamData; // [rsp+8h] [rbp-18h]

  TeamDataForPlayer = CDOTA_PlayerResource::GetTeamDataForPlayer(this, iPlayerID);
  if ( TeamDataForPlayer != 0 )
  {
    m_pObj = TeamDataForPlayer->__m_pChainEntity.m_pObj;
    v4 = TeamDataForPlayer->m_iCampsStacked.m_Value + 1;
    if ( m_pObj != 0 && (m_pObj->m_pEntity->m_flags & 0x400) == 0 && TeamDataForPlayer->__m_PathIndex.m_Value != -1 )
    {
      pTeamData = TeamDataForPlayer;
      (*(m_pObj->_vptr_IHandleEntity + 22))(m_pObj, 156, 0xFFFFFFFFLL, TeamDataForPlayer->__m_PathIndex.m_Value);
      TeamDataForPlayer = pTeamData;
    }
    TeamDataForPlayer->m_iCampsStacked.m_Value = v4;
  }
}


// CDOTA_PlayerResource::GetCreepsStacked  (line 2477, @0x0000000002662f40, libserver.so)
// calls: CDOTA_PlayerResource::GetTeamDataForPlayer
int __fastcall CDOTA_PlayerResource::GetCreepsStacked(CDOTA_PlayerResource *const this, int iPlayerID)
{
  DataTeamPlayer_t *TeamDataForPlayer; // rax

  TeamDataForPlayer = CDOTA_PlayerResource::GetTeamDataForPlayer(this, iPlayerID);
  if ( TeamDataForPlayer != 0 )
    return TeamDataForPlayer->m_iCreepsStacked.m_Value;
  else
    return 0;
}


// CDOTA_PlayerResource::GetCampsStacked  (line 2488, @0x0000000002662f70, libserver.so)
// calls: CDOTA_PlayerResource::GetTeamDataForPlayer
// callers: CDOTA_CombatLog::AddNeutralCampStackedEvent, CDOTAGCServerSystem::PopulateFantasyStats
int __fastcall CDOTA_PlayerResource::GetCampsStacked(CDOTA_PlayerResource *const this, int iPlayerID)
{
  DataTeamPlayer_t *TeamDataForPlayer; // rax

  TeamDataForPlayer = CDOTA_PlayerResource::GetTeamDataForPlayer(this, iPlayerID);
  if ( TeamDataForPlayer != 0 )
    return TeamDataForPlayer->m_iCampsStacked.m_Value;
  else
    return 0;
}


// CDOTA_PlayerResource::IncrementDenies  (line 2499, @0x0000000002664cc0, libserver.so)  // inlines: Get, NetworkStateChanged, Set, operator CEntityInstance*, operator++, operator+=<int>
// calls: CDOTA_PlayerResource::GetTeamDataForPlayer
// callers: CDOTA_BaseNPC_Hero::IncrementDenies, CDOTAHeroList::DistributeRewardsForKill
void __fastcall CDOTA_PlayerResource::IncrementDenies(CDOTA_PlayerResource *const this, int iPlayerID)
{
  DataTeamPlayer_t *TeamDataForPlayer; // rax
  CEntityInstance *m_pObj; // rdi
  int v4; // ebx
  DataTeamPlayer_t *pTeamData; // [rsp+8h] [rbp-18h]

  TeamDataForPlayer = CDOTA_PlayerResource::GetTeamDataForPlayer(this, iPlayerID);
  if ( TeamDataForPlayer != 0 )
  {
    m_pObj = TeamDataForPlayer->__m_pChainEntity.m_pObj;
    v4 = TeamDataForPlayer->m_iDenyCount.m_Value + 1;
    if ( m_pObj != 0 && (m_pObj->m_pEntity->m_flags & 0x400) == 0 && TeamDataForPlayer->__m_PathIndex.m_Value != -1 )
    {
      pTeamData = TeamDataForPlayer;
      (*(m_pObj->_vptr_IHandleEntity + 22))(m_pObj, 60, 0xFFFFFFFFLL, TeamDataForPlayer->__m_PathIndex.m_Value);
      TeamDataForPlayer = pTeamData;
    }
    TeamDataForPlayer->m_iDenyCount.m_Value = v4;
  }
}


// CDOTA_PlayerResource::IncrementClaimedMisses  (line 2509, @0x0000000002665460, libserver.so)  // inlines: Get, NetworkStateChanged, Set, operator CEntityInstance*, operator++, operator+=<int>
// calls: CDOTA_PlayerResource::GetTeamDataForPlayer
// callers: CDOTAHeroList::DistributeFarmClaim
void __fastcall CDOTA_PlayerResource::IncrementClaimedMisses(CDOTA_PlayerResource *const this, int iPlayerID)
{
  DataTeamPlayer_t *TeamDataForPlayer; // rax
  CEntityInstance *m_pObj; // rdi
  int v4; // ebx
  DataTeamPlayer_t *pTeamData; // [rsp+8h] [rbp-18h]

  TeamDataForPlayer = CDOTA_PlayerResource::GetTeamDataForPlayer(this, iPlayerID);
  if ( TeamDataForPlayer != 0 )
  {
    m_pObj = TeamDataForPlayer->__m_pChainEntity.m_pObj;
    v4 = TeamDataForPlayer->m_iClaimedMissCount.m_Value + 1;
    if ( m_pObj != 0 && (m_pObj->m_pEntity->m_flags & 0x400) == 0 && TeamDataForPlayer->__m_PathIndex.m_Value != -1 )
    {
      pTeamData = TeamDataForPlayer;
      (*(m_pObj->_vptr_IHandleEntity + 22))(m_pObj, 84, 0xFFFFFFFFLL, TeamDataForPlayer->__m_PathIndex.m_Value);
      TeamDataForPlayer = pTeamData;
    }
    TeamDataForPlayer->m_iClaimedMissCount.m_Value = v4;
  }
}


// CDOTA_PlayerResource::IncrementClaimedDenies  (line 2519, @0x00000000026654c0, libserver.so)  // inlines: Get, NetworkStateChanged, Set, operator CEntityInstance*, operator++, operator+=<int>
// calls: CDOTA_PlayerResource::GetTeamDataForPlayer
// callers: CDOTAHeroList::DistributeRewardsForKill
void __fastcall CDOTA_PlayerResource::IncrementClaimedDenies(CDOTA_PlayerResource *const this, int iPlayerID)
{
  DataTeamPlayer_t *TeamDataForPlayer; // rax
  CEntityInstance *m_pObj; // rdi
  int v4; // ebx
  DataTeamPlayer_t *pTeamData; // [rsp+8h] [rbp-18h]

  TeamDataForPlayer = CDOTA_PlayerResource::GetTeamDataForPlayer(this, iPlayerID);
  if ( TeamDataForPlayer != 0 )
  {
    m_pObj = TeamDataForPlayer->__m_pChainEntity.m_pObj;
    v4 = TeamDataForPlayer->m_iClaimedDenyCount.m_Value + 1;
    if ( m_pObj != 0 && (m_pObj->m_pEntity->m_flags & 0x400) == 0 && TeamDataForPlayer->__m_PathIndex.m_Value != -1 )
    {
      pTeamData = TeamDataForPlayer;
      (*(m_pObj->_vptr_IHandleEntity + 22))(m_pObj, 80, 0xFFFFFFFFLL, TeamDataForPlayer->__m_PathIndex.m_Value);
      TeamDataForPlayer = pTeamData;
    }
    TeamDataForPlayer->m_iClaimedDenyCount.m_Value = v4;
  }
}


// CDOTA_PlayerResource::IncrementMisses  (line 2529, @0x0000000002665520, libserver.so)  // inlines: Get, NetworkStateChanged, Set, operator CEntityInstance*, operator++, operator+=<int>
// calls: CDOTA_PlayerResource::GetTeamDataForPlayer
// callers: CDOTAHeroList::DistributeFarmClaim
void __fastcall CDOTA_PlayerResource::IncrementMisses(CDOTA_PlayerResource *const this, int iPlayerID)
{
  DataTeamPlayer_t *TeamDataForPlayer; // rax
  CEntityInstance *m_pObj; // rdi
  int v4; // ebx
  DataTeamPlayer_t *pTeamData; // [rsp+8h] [rbp-18h]

  TeamDataForPlayer = CDOTA_PlayerResource::GetTeamDataForPlayer(this, iPlayerID);
  if ( TeamDataForPlayer != 0 )
  {
    m_pObj = TeamDataForPlayer->__m_pChainEntity.m_pObj;
    v4 = TeamDataForPlayer->m_iMissCount.m_Value + 1;
    if ( m_pObj != 0 && (m_pObj->m_pEntity->m_flags & 0x400) == 0 && TeamDataForPlayer->__m_PathIndex.m_Value != -1 )
    {
      pTeamData = TeamDataForPlayer;
      (*(m_pObj->_vptr_IHandleEntity + 22))(m_pObj, 88, 0xFFFFFFFFLL, TeamDataForPlayer->__m_PathIndex.m_Value);
      TeamDataForPlayer = pTeamData;
    }
    TeamDataForPlayer->m_iMissCount.m_Value = v4;
  }
}


// CDOTA_PlayerResource::SetLastBuybackTime  (line 2539, @0x00000000026576b0, libserver.so)  // inlines: Element, Get, IsValidTeamPlayerID, NetworkStateChanged, Set, operator CEntityInstance*, operator=<int>, operator[]
// callers: CDOTA_BaseNPC_Hero::Buyback
void __fastcall CDOTA_PlayerResource::SetLastBuybackTime(
        CDOTA_PlayerResource *const this,
        int iPlayerID,
        int iLastBuybackTime)
{
  __int64 v4; // r12
  _QWORD *v5; // rdi

  if ( iPlayerID >= 0 && iPlayerID < *(this + 194) )
  {
    v4 = *(this + 98) + 200LL * iPlayerID;
    if ( iLastBuybackTime != *(v4 + 48) )
    {
      v5 = *(v4 + 8);
      if ( v5 != 0 && (*(v5[1] + 49LL) & 4) == 0 && *(v4 + 16) != 0xFFFF )
        (*(*v5 + 176LL))(v5, 48, 0xFFFFFFFFLL, *(v4 + 16));
      *(v4 + 48) = iLastBuybackTime;
    }
  }
}


// CDOTA_PlayerResource::SetCoachTeam  (line 2549, @0x000000000265e840, libserver.so)  // inlines: Element, Get, IsValidPlayerID, NetworkStateChanged, Set, operator CEntityInstance*, operator=<DOTATeam_t>, operator[]
// callers: CDOTA_PlayerResource::InitPlayersWithLobby
void __fastcall CDOTA_PlayerResource::SetCoachTeam(CDOTA_PlayerResource *const this, int iPlayerID, DOTATeam_t eTeam)
{
  __int64 v4; // r12
  _QWORD *v5; // rdi

  if ( iPlayerID >= 0 && iPlayerID < *(this + 212) )
  {
    v4 = *(this + 107) + 72LL * iPlayerID;
    if ( eTeam != *(v4 + 64) )
    {
      v5 = *(v4 + 8);
      if ( v5 != 0 && (*(v5[1] + 49LL) & 4) == 0 && *(v4 + 16) != 0xFFFF )
        (*(*v5 + 176LL))(v5, 64, 0xFFFFFFFFLL, *(v4 + 16));
      *(v4 + 64) = eTeam;
    }
  }
}


// CDOTA_PlayerResource::GetCoachTeam  (line 2559, @0x000000000265e8c0, libserver.so)  // inlines: Element, IsValidPlayerID, operator[]
// callers: CDOTAPlayer::HandleSuggestHeroPick, CDOTA_PlayerResource::GetSuggestedHeroList
DOTATeam_t __fastcall CDOTA_PlayerResource::GetCoachTeam(CDOTA_PlayerResource *const this, int iPlayerID)
{
  DOTATeam_t result; // eax

  result = -1;
  if ( iPlayerID >= 0 && iPlayerID < *(this + 212) )
    return *(*(this + 107) + 72LL * iPlayerID + 64);
  return result;
}


// CDOTA_PlayerResource::SetBroadcaster  (line 2568, @0x000000000265e8f0, libserver.so)  // inlines: Element, Get, IsValidPlayerID, NetworkStateChanged, Set, operator CEntityInstance*, operator=<bool>, operator[]
// callers: CDOTA_PlayerResource::InitPlayersWithLobby
void __fastcall CDOTA_PlayerResource::SetBroadcaster(
        CDOTA_PlayerResource *const this,
        int iPlayerID,
        bool bIsBroadcaster)
{
  __int64 v4; // r12
  _QWORD *v5; // rdi

  if ( iPlayerID >= 0 && iPlayerID < *(this + 212) )
  {
    v4 = *(this + 107) + 72LL * iPlayerID;
    if ( *(v4 + 38) != bIsBroadcaster )
    {
      v5 = *(v4 + 8);
      if ( v5 != 0 && (*(v5[1] + 49LL) & 4) == 0 && *(v4 + 16) != 0xFFFF )
        (*(*v5 + 176LL))(v5, 38, 0xFFFFFFFFLL, *(v4 + 16));
      *(v4 + 38) = bIsBroadcaster;
    }
  }
}


// CDOTA_PlayerResource::IsBroadcaster  (line 2577, @0x0000000002656a20, libserver.so)  // inlines: Element, IsValidPlayerID, operator[]
// callers: CDOTAGamerules::ClientMsg_SendStatPopup, CVoiceGameMgrHelper::CanPlayerHearPlayer, CDOTAGamerules::ClientMsg_Pause, CDOTAGamerules::CalcNumLoadingPlayersAndFailure, CDOTAGamerules::ClientMsg_WorldLine, CDOTA_OGS::ShouldLog, SendCommentatorTable_UserGroupFunc, SendTeamMatesAndCommentatorTable_UserGroupFunc, CDOTA_PlayerResource::AreCoBroadcasters, CDOTAGCServerSystem::UpdateRealtimeGameState
bool __fastcall CDOTA_PlayerResource::IsBroadcaster(const CDOTA_PlayerResource *const this, int iPlayerID)
{
  bool result; // al

  result = 0;
  if ( iPlayerID >= 0 && iPlayerID < *(this + 212) )
    return *(*(this + 107) + 72LL * iPlayerID + 38);
  return result;
}


// CDOTA_PlayerResource::AreCoBroadcasters  (line 2586, @0x000000000265e970, libserver.so)
// calls: CDOTA_PlayerResource::IsBroadcaster, CDOTA_PlayerResource::GetBroadcasterChannel
bool __fastcall CDOTA_PlayerResource::AreCoBroadcasters(
        const CDOTA_PlayerResource *const this,
        int iPlayerID1,
        int iPlayerID2)
{
  uint32 BroadcasterChannel; // r12d

  if ( !CDOTA_PlayerResource::IsBroadcaster(this, iPlayerID1) || !CDOTA_PlayerResource::IsBroadcaster(this, iPlayerID2) )
    return 0;
  BroadcasterChannel = CDOTA_PlayerResource::GetBroadcasterChannel(this, iPlayerID1);
  return BroadcasterChannel == CDOTA_PlayerResource::GetBroadcasterChannel(this, iPlayerID2);
}


// CDOTA_PlayerResource::SetBroadcasterChannel  (line 2597, @0x000000000265e9e0, libserver.so)  // inlines: Element, Get, IsValidPlayerID, NetworkStateChanged, Set, operator CEntityInstance*, operator=<bool>, operator=<unsigned int>, operator[]
// callers: CDOTA_PlayerResource::InitPlayersWithLobby
void __fastcall CDOTA_PlayerResource::SetBroadcasterChannel(
        CDOTA_PlayerResource *const this,
        int iPlayerID,
        uint32 nChannel,
        uint32 nSlot,
        bool bCameraman)
{
  __int64 v6; // r15
  __int64 v7; // r14
  __int64 v10; // rax
  _QWORD *v11; // rdi
  _QWORD *v12; // rdi
  _QWORD *v13; // rdi
  bool v14; // [rsp-44h] [rbp-44h]
  bool v15; // [rsp-44h] [rbp-44h]
  bool v16; // [rsp-40h] [rbp-40h]
  __int64 v17; // [rsp-40h] [rbp-40h]
  __int64 v18; // [rsp-40h] [rbp-40h]

  if ( iPlayerID >= 0 && iPlayerID < *(this + 212) )
  {
    v6 = 72LL * iPlayerID;
    v7 = *(this + 107) + v6;
    if ( *(v7 + 38) != 0 && nChannel <= 5 )
    {
      v10 = *(this + 107) + 72LL * iPlayerID;
      if ( *(v7 + 40) != nChannel )
      {
        v11 = *(v7 + 8);
        if ( v11 != 0 && (*(v11[1] + 49LL) & 4) == 0 && *(v7 + 16) != 0xFFFF )
        {
          v16 = bCameraman;
          (*(*v11 + 176LL))(v11, 40, 0xFFFFFFFFLL, *(v7 + 16));
          bCameraman = v16;
        }
        *(v7 + 40) = nChannel;
        v10 = *(this + 107) + v6;
      }
      if ( *(v10 + 44) != nSlot )
      {
        v12 = *(v10 + 8);
        if ( v12 != 0 && (*(v12[1] + 49LL) & 4) == 0 && *(v10 + 16) != 0xFFFF )
        {
          v14 = bCameraman;
          v17 = v10;
          (*(*v12 + 176LL))(v12, 44, 0xFFFFFFFFLL, *(v10 + 16));
          v10 = v17;
          bCameraman = v14;
        }
        *(v10 + 44) = nSlot;
        v10 = *(this + 107) + v6;
      }
      if ( *(v10 + 48) != bCameraman )
      {
        v13 = *(v10 + 8);
        if ( v13 != 0 && (*(v13[1] + 49LL) & 4) == 0 && *(v10 + 16) != 0xFFFF )
        {
          v15 = bCameraman;
          v18 = v10;
          (*(*v13 + 176LL))(v13, 48, 0xFFFFFFFFLL, *(v10 + 16));
          v10 = v18;
          bCameraman = v15;
        }
        *(v10 + 48) = bCameraman;
      }
    }
  }
}


// CDOTA_PlayerResource::GetBroadcasterChannel  (line 2618, @0x00000000026569f0, libserver.so)  // inlines: Element, IsValidPlayerID, operator[]
// callers: CVoiceGameMgrHelper::CanPlayerHearPlayer, CDOTAGamerules::ClientMsg_WorldLine, SendCommentatorTable_UserGroupFunc, SendTeamMatesAndCommentatorTable_UserGroupFunc, CDOTA_PlayerResource::AreCoBroadcasters
uint32 __fastcall CDOTA_PlayerResource::GetBroadcasterChannel(const CDOTA_PlayerResource *const this, int iPlayerID)
{
  uint32 result; // eax

  result = 6;
  if ( iPlayerID >= 0 && iPlayerID < *(this + 212) )
    return *(*(this + 107) + 72LL * iPlayerID + 40);
  return result;
}


// CDOTA_PlayerResource::GetBroadcasterChannelSlot  (line 2627, @0x00000000026569c0, libserver.so)  // inlines: Element, IsValidPlayerID, operator[]
uint32 __fastcall CDOTA_PlayerResource::GetBroadcasterChannelSlot(
        const CDOTA_PlayerResource *const this,
        int iPlayerID)
{
  uint32 result; // eax

  result = 6;
  if ( iPlayerID >= 0 && iPlayerID < *(this + 212) )
    return *(*(this + 107) + 72LL * iPlayerID + 44);
  return result;
}


// CDOTA_PlayerResource::SetBroadcasterChannelInfo  (line 2636, @0x0000000002691b20, libserver.so)  // inlines: AssignPathIdToElement, CFieldPath, CUtlSymbolLarge, Clear, Element, Get, GetPathData, IsUsingFixedPaths, LeafCodeInfo_t, NetworkStateChanged, OnSizeChanged, Path_AddToTail, Path_RemoveAll, Path_SetCount, Push, ReassignPathIds, Resolve, Set, SetCount, V_memcpy, memcpy, operator CEntityInstance*, operator(), operator=, operator=<CUtlSymbolLarge>, operator[]
// calls: AllocPooledString, GetNetworkSerializerForEntityInstance, memcpy, EntityInstanceSetNetworkStateChanged, CUtlVectorBase<PlayerResourceBroadcasterData_t, CNetworkUtlVector_MemoryType<PlayerResourceBroadcasterData_t, -1> >::SetCount, __memcpy_chk, LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, EntityInstanceAddChangeAccessorPath, CUtlVectorEmbeddedNetworkVar<PlayerResourceBroadcasterData_t, CDOTA_PlayerResource::NetworkVar_m_vecBrodcasterData, -1>::Resolve, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...)
// callers: CDOTA_PlayerResource::InitBroadcasterChannelsWithLobby
// strings: "../../public/tier2/fieldpath.h", "Path_SetCount", "Path_SetCount failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)", "Path_AddToTail", "Path_AddToTail failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)", "Path_AddToTail failed for read only CFieldPath"
void __fastcall CDOTA_PlayerResource::SetBroadcasterChannelInfo(
        CDOTA_PlayerResource *const this,
        int nChannelID,
        const char *pszDescription,
        const char *pszCountryCode,
        const char *pszLanguageCode)
{
  __int64 v5; // r12
  int v6; // eax
  CDOTA_PlayerResource *v7; // rbx
  __int64 v10; // r13
  const char *m_szFile; // rax
  __int64 v12; // r15
  const char *v13; // rax
  __int64 v14; // r12
  const char *v15; // rbx
  CEntityInstance *v16; // rcx
  FlattenedSerializerHandle_t NetworkSerializerForEntityInstance; // rax
  __int64 v18; // rax
  void **v19; // rsi
  CEntityInstance *v20; // rcx
  FlattenedSerializerHandle_t v21; // rax
  __int64 v22; // rax
  void **v23; // rsi
  CEntityInstance *v24; // rcx
  FlattenedSerializerHandle_t v25; // rax
  __int64 v26; // rdx
  size_t v27; // rdx
  void **v28; // rsi
  __int64 v29; // rdx
  __int64 v30; // rdx
  char *v31; // rsi
  int16 v32; // dx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rdi
  __int64 v36; // rsi
  _QWORD *v37; // rdi
  _QWORD *v38; // rdi
  _QWORD *v39; // rdi
  __int64 m_nCount; // rax
  ChangeAccessorFieldPathIndex_t *v41; // rdx
  ChangeAccessorFieldPathIndex_t v42; // ax
  __int64 v43; // rax
  _QWORD *v44; // rax
  void (__fastcall *v45)(_QWORD); // rdx
  _QWORD *v46; // rdi
  const char *pszLanguageCodea; // [rsp+0h] [rbp-120h]
  const char *pszDescriptiona; // [rsp+8h] [rbp-118h]
  int v49; // [rsp+14h] [rbp-10Ch]
  void (__fastcall *v50)(void **, IFlattenedSerializers *, FlattenedSerializerHandle_t, CEntityInstance *, CUtlVectorBase<PlayerResourceBroadcasterData_t,CNetworkUtlVector_MemoryType<PlayerResourceBroadcasterData_t,-1> > *, char *); // [rsp+28h] [rbp-F8h]
  void (__fastcall *v51)(void **, IFlattenedSerializers *, FlattenedSerializerHandle_t, CEntityInstance *, CUtlVectorBase<PlayerResourceBroadcasterData_t,CNetworkUtlVector_MemoryType<PlayerResourceBroadcasterData_t,-1> > *, char *); // [rsp+30h] [rbp-F0h]
  CEntityInstance *v52; // [rsp+30h] [rbp-F0h]
  ChangeAccessorFieldPathIndex_t *v53; // [rsp+30h] [rbp-F0h]
  CUtlVectorBase<PlayerResourceBroadcasterData_t,CNetworkUtlVector_MemoryType<PlayerResourceBroadcasterData_t,-1> > *v54; // [rsp+38h] [rbp-E8h]
  CEntityInstance *desta; // [rsp+40h] [rbp-E0h]
  CEntityInstance *destb; // [rsp+40h] [rbp-E0h]
  void **dest; // [rsp+40h] [rbp-E0h]
  const char *destc; // [rsp+40h] [rbp-E0h]
  const char *pszCountryCodeb; // [rsp+48h] [rbp-D8h]
  void *src[2]; // [rsp+50h] [rbp-D0h] BYREF
  __int16 v62; // [rsp+60h] [rbp-C0h]
  char v63; // [rsp+62h] [rbp-BEh]
  void *v64[2]; // [rsp+70h] [rbp-B0h] BYREF
  __int16 v65; // [rsp+80h] [rbp-A0h]
  char v66; // [rsp+82h] [rbp-9Eh]
  CFieldPath path; // [rsp+90h] [rbp-90h] BYREF
  void *v68[2]; // [rsp+B0h] [rbp-70h] BYREF
  __int16 v69; // [rsp+C0h] [rbp-60h]
  char v70; // [rsp+C2h] [rbp-5Eh]
  LeafCodeInfo_t v71; // [rsp+D0h] [rbp-50h] BYREF

  v5 = nChannelID;
  if ( nChannelID > 5 )
    return;
  v6 = *(this + 230);
  v7 = this;
  if ( nChannelID >= v6 )
  {
    v10 = (nChannelID + 1);
    if ( v10 != v6 )
    {
      v54 = (this + 920);
      if ( *(this + 985) == 0 )
      {
        v16 = *(this + 118);
        *(this + 985) = 1;
        if ( v16 != 0 )
        {
          desta = v16;
          v51 = *(*g_pFlattenedSerializers + 272LL);
          NetworkSerializerForEntityInstance = GetNetworkSerializerForEntityInstance(v16);
          v51(src, g_pFlattenedSerializers, NetworkSerializerForEntityInstance, desta, v54, v7 + 984);
          if ( (v7 + 952) != src )
          {
            v18 = v62;
            *(v7 + 970) = 0;
            if ( v18 > 6 )
              goto LABEL_84;
            *(v7 + 484) = v18;
            if ( v18 > 0 )
            {
              v19 = src;
              if ( v63 != 0 )
                v19 = src[0];
              memcpy(v7 + 952, v19, 2 * v18);
            }
          }
        }
        else
        {
          if ( *(this + 970) != 0 )
            goto LABEL_79;
          *(this + 484) = 0;
        }
      }
      if ( *(v7 + 984) == 0 )
        EntityInstanceSetNetworkStateChanged(*(v7 + 118));
      CUtlVectorBase<PlayerResourceBroadcasterData_t,CNetworkUtlVector_MemoryType<PlayerResourceBroadcasterData_t,-1>>::SetCount(
        v54,
        v10);
      if ( *(v7 + 985) != 0 )
        goto LABEL_26;
      v20 = *(v7 + 118);
      *(v7 + 985) = 1;
      if ( v20 != 0 )
      {
        destb = v20;
        v10 = *(*g_pFlattenedSerializers + 272LL);
        v21 = GetNetworkSerializerForEntityInstance(v20);
        (v10)(v64, g_pFlattenedSerializers, v21, destb, v54, v7 + 984);
        this = (v7 + 952);
        if ( (v7 + 952) != v64 )
        {
          v22 = v65;
          *(v7 + 970) = 0;
          if ( v22 <= 6 )
          {
            *(v7 + 484) = v22;
            if ( v22 > 0 )
            {
              v23 = v64;
              if ( v66 != 0 )
                v23 = v64[0];
              memcpy(this, v23, 2 * v22);
            }
            goto LABEL_26;
          }
LABEL_84:
          v7 = &LOG_GENERAL;
          if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
          {
            v71.m_nLine = 442;
            v71.m_szFile = "../../public/tier2/fieldpath.h";
            v71.m_szFunction = "Path_SetCount";
            LoggingSystem_Log(
              LOG_GENERAL,
              LoggingSeverity_t::LS_ERROR,
              &v71,
              "Path_SetCount failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)",
              6);
          }
LABEL_45:
          if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v35, v36, v33, v34) != 0 )
            loc_0 = -559038737;
          m_szFile = Plat_ExitProcess(1);
          goto LABEL_48;
        }
LABEL_26:
        if ( *(v7 + 984) == 0 && *(v7 + 230) > 0 )
        {
          v49 = v5;
          v10 = 0;
          pszDescriptiona = pszDescription;
          v5 = 0;
          dest = (v7 + 952);
          pszDescription = v68;
          pszLanguageCodea = pszLanguageCode;
          pszLanguageCode = &path;
          while ( 1 )
          {
            if ( *(v7 + 985) == 0 )
            {
              v24 = *(v7 + 118);
              *(v7 + 985) = 1;
              if ( v24 != 0 )
              {
                v52 = v24;
                v50 = *(*g_pFlattenedSerializers + 272LL);
                v25 = GetNetworkSerializerForEntityInstance(v24);
                v50(v68, g_pFlattenedSerializers, v25, v52, v54, v7 + 984);
                if ( dest != v68 )
                {
                  v26 = v69;
                  *(v7 + 970) = 0;
                  if ( v26 > 6 )
                    goto LABEL_84;
                  *(v7 + 484) = v26;
                  if ( v26 > 0 )
                  {
                    v27 = 2 * v26;
                    v28 = v68;
                    if ( v70 != 0 )
                      v28 = v68[0];
                    memcpy(dest, v28, v27);
                  }
                }
              }
              else
              {
                if ( *(v7 + 970) != 0 )
                  goto LABEL_79;
                *(v7 + 484) = 0;
              }
            }
            if ( *(v7 + 984) == 0 )
            {
              v29 = *(v7 + 484);
              path.m_bUsingExternalPaths = 0;
              path.m_nCount = 0;
              if ( v29 > 6 )
                goto LABEL_84;
              path.m_nCount = v29;
              if ( v29 <= 0 )
              {
                v32 = v10;
              }
              else
              {
                v30 = 2 * v29;
                if ( *(v7 + 970) != 0 )
                  v31 = *(v7 + 119);
                else
                  v31 = v7 + 952;
                __memcpy_chk(&path, v31, v30, 24);
                v32 = v10;
                if ( path.m_bUsingExternalPaths )
                {
                  v7 = &LOG_GENERAL;
                  if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
                  {
                    v71.m_szFile = "../../public/tier2/fieldpath.h";
                    v71.m_szFunction = "Path_AddToTail";
                    v71.m_nLine = 428;
                    LoggingSystem_Log(
                      LOG_GENERAL,
                      LoggingSeverity_t::LS_ERROR,
                      &v71,
                      "Path_AddToTail failed for read only CFieldPath");
                  }
                  goto LABEL_45;
                }
              }
              m_nCount = path.m_nCount;
              if ( path.m_nCount > 5 )
              {
                v7 = &LOG_GENERAL;
                if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
                {
                  v71.m_szFile = "../../public/tier2/fieldpath.h";
                  v71.m_szFunction = "Path_AddToTail";
                  v71.m_nLine = 425;
                  LoggingSystem_Log(
                    LOG_GENERAL,
                    LoggingSeverity_t::LS_ERROR,
                    &v71,
                    "Path_AddToTail failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)",
                    6);
                }
                goto LABEL_45;
              }
              this = *(v7 + 118);
              ++path.m_nCount;
              path.u.m_FixedPaths[m_nCount].m_nValue = v32;
              v41 = (*(v7 + 116) + v5);
              if ( this != 0 )
              {
                v53 = (*(v7 + 116) + v5);
                v42.m_Value = EntityInstanceAddChangeAccessorPath(this, &path).m_Value;
                v41 = v53;
                v53[8].m_Value = v42.m_Value;
              }
              else
              {
                v41[8].m_Value = -1;
              }
              v43 = *(v7 + 118);
              if ( v43 != *&v41[4].m_Value )
                *&v41[4].m_Value = v43;
            }
            v10 = (v10 + 1);
            v5 += 48;
            if ( v10 >= *(v7 + 230) )
            {
              v5 = v49;
              pszDescription = pszDescriptiona;
              pszLanguageCode = pszLanguageCodea;
              break;
            }
          }
        }
        v44 = *(v7 + 122);
        if ( v44 != 0 )
        {
          v45 = v44[1];
          v46 = (v44[2] + *v44);
          if ( (v45 & 1) != 0 )
            v45 = *(v45 + *v46 - 1);
          v45(v46);
        }
        goto LABEL_3;
      }
      if ( *(v7 + 970) == 0 )
      {
        *(v7 + 484) = 0;
        goto LABEL_26;
      }
LABEL_79:
      CUtlVectorEmbeddedNetworkVar<PlayerResourceBroadcasterData_t,CDOTA_PlayerResource::NetworkVar_m_vecBrodcasterData,-1>::Resolve(this);
    }
  }
LABEL_3:
  v10 = &v71;
  v5 *= 48;
  AllocPooledString(&v71, pszDescription);
  pszDescription = (*(v7 + 116) + v5);
  m_szFile = v71.m_szFile;
  if ( v71.m_szFile != *(pszDescription + 3) )
  {
LABEL_48:
    v37 = *(pszDescription + 1);
    if ( v37 != 0 && (*(v37[1] + 49LL) & 4) == 0 && *(pszDescription + 8) != 0xFFFF )
    {
      destc = m_szFile;
      (*(*v37 + 176LL))(v37, 24, 0xFFFFFFFFLL, *(pszDescription + 8));
      m_szFile = destc;
    }
    *(pszDescription + 3) = m_szFile;
  }
  AllocPooledString(v10, pszCountryCode);
  v12 = *(v7 + 116) + v5;
  v13 = v71.m_szFile;
  if ( v71.m_szFile != *(v12 + 32) )
  {
    v38 = *(v12 + 8);
    if ( v38 != 0 && (*(v38[1] + 49LL) & 4) == 0 && *(v12 + 16) != 0xFFFF )
    {
      pszCountryCodeb = v71.m_szFile;
      (*(*v38 + 176LL))(v38, 32, 0xFFFFFFFFLL, *(v12 + 16));
      v13 = pszCountryCodeb;
    }
    *(v12 + 32) = v13;
  }
  AllocPooledString(v10, pszLanguageCode);
  v14 = *(v7 + 116) + v5;
  v15 = v71.m_szFile;
  if ( v71.m_szFile != *(v14 + 40) )
  {
    v39 = *(v14 + 8);
    if ( v39 != 0 && (*(v39[1] + 49LL) & 4) == 0 && *(v14 + 16) != 0xFFFF )
      (*(*v39 + 176LL))(v39, 40, 0xFFFFFFFFLL, *(v14 + 16));
    *(v14 + 40) = v15;
  }
}


// CDOTA_PlayerResource::UpdateTeamSlot  (line 2653, @0x0000000002692350, libserver.so)  // inlines: AssignPathIdToElement, CFieldPath, Clear, CreateEvent, DOTAGameRules, Element, Get, GetPathData, IsUsingFixedPaths, IsValidPlayerID, IsValidTeamPlayerID, LeafCodeInfo_t, NetworkStateChanged, OnSizeChanged, Path_AddToTail, Path_RemoveAll, Path_SetCount, Push, ReassignPathIds, Resolve, Set, SetCount, SetPreGamePlayerID, V_memcpy, memcpy, operator CEntityInstance*, operator!=<int>, operator=, operator=<int>, operator==<int>, operator[]
// calls: CDOTAGamerules::OnPlayerTeamChanged, PlayerResourcePlayerTeamData_t::NetworkStateChanged, CDOTA_PlayerResource::IsValidPlayer, LoggingSystem_IsChannelEnabled, LoggingSystem_Log, CUtlVectorEmbeddedNetworkVar<DataTeamPlayer_t, CDOTA_DataNonSpectator::NetworkVar_m_vecDataTeam, -1>::Resolve, EntityInstanceSetNetworkStateChanged, CUtlVectorBase<DataTeamPlayer_t, CNetworkUtlVector_MemoryType<DataTeamPlayer_t, -1> >::SetCount, GetNetworkSerializerForEntityInstance, memcpy, __memcpy_chk, Plat_ShouldCollectMiniDumpsForFatalErrors (16 total)
// callers: CDOTAPlayer::ChangeTeam, CDOTA_PlayerResource::InitPlayersWithLobby
// strings: "dota_player_team_changed", "CDOTA_PlayerResource::UpdateTeamSlot desired slot %d for player %d on team %d was already, "CDOTA_PlayerResource: Too many players on team %d!\n", "../../public/tier2/fieldpath.h", "Path_AddToTail", "Path_AddToTail failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)" (9 total)
void __fastcall CDOTA_PlayerResource::UpdateTeamSlot(
        CDOTA_PlayerResource *const this,
        int iPlayerID,
        int iTeamNumber,
        int desiredSlot)
{
  __int64 v4; // r10
  int v5; // ebx
  int v7; // r11d
  __int64 v8; // r15
  bool v9; // r14
  __int64 v10; // rcx
  __int64 v11; // r15
  int v12; // eax
  CDOTA_DataNonSpectator *v13; // r13
  int m_Size; // edx
  __int64 v15; // rax
  __int64 v16; // rsi
  _QWORD *v17; // rdi
  PlayerResourcePlayerTeamData_t *v18; // r13
  int v19; // r14d
  __int64 v20; // r15
  _DWORD *v21; // r13
  char IsChannelEnabled; // al
  int v23; // edx
  int v24; // r13d
  bool IsValidPlayer; // al
  char v26; // al
  int v27; // esi
  CUtlVectorEmbeddedNetworkVar<DataTeamPlayer_t,CDOTA_DataNonSpectator::NetworkVar_m_vecDataTeam,-1> *v28; // rdi
  int v29; // r15d
  unsigned int *v30; // rbx
  CEntityInstance *m_pObj; // rcx
  void (__fastcall *v32)(void **, IFlattenedSerializers *, FlattenedSerializerHandle_t, CEntityInstance *, CUtlVectorEmbeddedNetworkVar<DataTeamPlayer_t,CDOTA_DataNonSpectator::NetworkVar_m_vecDataTeam,-1> *, bool *); // r14
  FlattenedSerializerHandle_t NetworkSerializerForEntityInstance; // rax
  __int64 v34; // rax
  void **v35; // rsi
  __int64 m_nCount; // rax
  CFieldPath *m_pPaths; // rsi
  int16 v38; // dx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rdi
  __int64 v42; // rsi
  __int64 v43; // rax
  ChangeAccessorFieldPathIndex_t *v44; // rdx
  ChangeAccessorFieldPathIndex_t v45; // ax
  CEntityInstance *v46; // rax
  const FastDelegate0<void> *m_pArraySizeChangedDelegate; // rdi
  __int64 v48; // r13
  __int64 v49; // [rsp+10h] [rbp-D0h]
  int iPlayerIDa; // [rsp+18h] [rbp-C8h]
  bool v51; // [rsp+1Fh] [rbp-C1h]
  __int64 v52; // [rsp+30h] [rbp-B0h]
  CEntityInstance *v53; // [rsp+30h] [rbp-B0h]
  ChangeAccessorFieldPathIndex_t *v54; // [rsp+30h] [rbp-B0h]
  bool teamSlot; // [rsp+38h] [rbp-A8h]
  int teamSlota; // [rsp+38h] [rbp-A8h]
  CUtlVectorEmbeddedNetworkVar<DataTeamPlayer_t,CDOTA_DataNonSpectator::NetworkVar_m_vecDataTeam,-1> *teamSlotb; // [rsp+38h] [rbp-A8h]
  int desiredSlote; // [rsp+40h] [rbp-A0h]
  int desiredSlota; // [rsp+40h] [rbp-A0h]
  int desiredSlotb; // [rsp+40h] [rbp-A0h]
  void **desiredSlotc; // [rsp+40h] [rbp-A0h]
  int desiredSlotf; // [rsp+40h] [rbp-A0h]
  int counte; // [rsp+48h] [rbp-98h]
  int count; // [rsp+48h] [rbp-98h]
  int countf; // [rsp+48h] [rbp-98h]
  int counta; // [rsp+48h] [rbp-98h]
  int countb; // [rsp+48h] [rbp-98h]
  int countc; // [rsp+48h] [rbp-98h]
  CFieldPath path; // [rsp+50h] [rbp-90h] BYREF
  void *src[2]; // [rsp+70h] [rbp-70h] BYREF
  __int16 v73; // [rsp+80h] [rbp-60h]
  char v74; // [rsp+82h] [rbp-5Eh]
  LeafCodeInfo_t v75; // [rsp+90h] [rbp-50h] BYREF

  v4 = iTeamNumber;
  v5 = iPlayerID;
  if ( iPlayerID < 0 )
    return;
  if ( iPlayerID >= *(this + 212) )
    return;
  v7 = desiredSlot;
  if ( (iTeamNumber - 1) > 2 && (iTeamNumber - 5) > 8 )
    return;
  v8 = *(this + 107) + 72LL * iPlayerID;
  v9 = iTeamNumber != *(v8 + 32);
  if ( iTeamNumber == *(v8 + 32) )
  {
    if ( iPlayerID >= *(this + 194) )
      goto LABEL_11;
    v10 = *(this + 98);
    v11 = 200LL * iPlayerID;
    v12 = *(v10 + v11 + 124);
  }
  else
  {
    v17 = *(v8 + 8);
    if ( v17 != 0 && (*(v17[1] + 49LL) & 4) == 0 && *(v8 + 16) != 0xFFFF )
    {
      (*(*v17 + 176LL))(v17, 32, 0xFFFFFFFFLL, *(v8 + 16));
      v4 = iTeamNumber;
      v7 = desiredSlot;
    }
    *(v8 + 32) = v4;
    if ( v5 >= *(this + 194) )
      goto LABEL_11;
    v10 = *(this + 98);
    v11 = 200LL * v5;
    v18 = (v10 + v11);
    if ( *(v10 + v11 + 124) == -1 )
      goto LABEL_27;
    desiredSlote = v7;
    counte = v4;
    PlayerResourcePlayerTeamData_t::NetworkStateChanged(v18, 124, 0xFFFFFFFFLL, -1);
    v18->m_iTeamSlot.m_Value = -1;
    v7 = desiredSlote;
    v10 = *(this + 98);
    v4 = counte;
    v12 = *(v10 + v11 + 124);
  }
  if ( v12 != -1 )
    goto LABEL_8;
LABEL_27:
  if ( v7 == -1 )
  {
LABEL_37:
    v23 = *(this + 194);
    v7 = 0;
    if ( v23 > 0 )
    {
      while ( 1 )
      {
        v24 = 0;
        while ( 1 )
        {
          if ( v5 != v24 )
          {
            teamSlota = v7;
            desiredSlotb = v4;
            countf = v23;
            IsValidPlayer = CDOTA_PlayerResource::IsValidPlayer(this, v24);
            v23 = countf;
            v4 = desiredSlotb;
            v7 = teamSlota;
            if ( IsValidPlayer
              && desiredSlotb == *(*(this + 107) + 72LL * v24 + 32)
              && *(*(this + 98) + 200LL * v24 + 124) == teamSlota )
            {
              break;
            }
          }
          if ( ++v24 >= v23 )
            goto LABEL_48;
        }
        v7 = teamSlota + 1;
      }
    }
    goto LABEL_90;
  }
  if ( *(this + 194) > 0 )
  {
    teamSlot = v9;
    v52 = v11;
    v19 = *(this + 194);
    v20 = 0;
    count = v4;
    v21 = (v10 + 124);
    desiredSlota = v7;
    while ( v5 == v20
         || !CDOTA_PlayerResource::IsValidPlayer(this, v20)
         || count != *(*(this + 107) + 72 * v20 + 32)
         || desiredSlota != *v21 )
    {
      ++v20;
      v21 += 50;
      if ( v19 <= v20 )
      {
        v9 = teamSlot;
        v11 = v52;
        v4 = count;
        v7 = desiredSlota;
        goto LABEL_48;
      }
    }
    v9 = teamSlot;
    v11 = v52;
    IsChannelEnabled = LoggingSystem_IsChannelEnabled(LOG_SERVER, 2);
    v4 = count;
    if ( IsChannelEnabled != 0 )
    {
      LoggingSystem_Log(
        LOG_SERVER,
        2,
        "CDOTA_PlayerResource::UpdateTeamSlot desired slot %d for player %d on team %d was already taken!\n",
        desiredSlota,
        v5,
        count);
      v4 = count;
    }
    goto LABEL_37;
  }
LABEL_48:
  if ( v7 > 23 )
  {
    counta = v4;
    v26 = LoggingSystem_IsChannelEnabled(LOG_SERVER, 2);
    v4 = counta;
    if ( v26 != 0 )
    {
      LoggingSystem_Log(LOG_SERVER, 2, "CDOTA_PlayerResource: Too many players on team %d!\n", counta);
      v4 = counta;
    }
    goto LABEL_8;
  }
LABEL_90:
  countc = v7;
  v48 = *(this + 98) + v11;
  if ( v7 != *(v48 + 124) )
  {
    desiredSlotf = v4;
    PlayerResourcePlayerTeamData_t::NetworkStateChanged((*(this + 98) + v11), 124, 0xFFFFFFFFLL, -1);
    v4 = desiredSlotf;
    *(v48 + 124) = countc;
  }
LABEL_8:
  v13 = g_pDOTADataTeams[v4];
  if ( v13 != 0 )
  {
    m_Size = v13->m_vecDataTeam.m_Vector.m_Size;
    v15 = *(*(this + 98) + v11 + 124);
    if ( m_Size <= v15 )
    {
      countb = v15 + 1;
      if ( m_Size != v15 + 1 )
      {
        teamSlotb = &v13->m_vecDataTeam;
        CUtlVectorEmbeddedNetworkVar<DataTeamPlayer_t,CDOTA_DataNonSpectator::NetworkVar_m_vecDataTeam,-1>::Resolve(&v13->m_vecDataTeam);
        v27 = countb;
        if ( !v13->m_vecDataTeam.m_bIsNetworkVarExcluded )
        {
          EntityInstanceSetNetworkStateChanged(v13->m_vecDataTeam.m_pOwnerEntity.m_pObj);
          v27 = countb;
        }
        CUtlVectorBase<DataTeamPlayer_t,CNetworkUtlVector_MemoryType<DataTeamPlayer_t,-1>>::SetCount(
          &teamSlotb->m_Vector,
          v27);
        CUtlVectorEmbeddedNetworkVar<DataTeamPlayer_t,CDOTA_DataNonSpectator::NetworkVar_m_vecDataTeam,-1>::Resolve(teamSlotb);
        if ( !v13->m_vecDataTeam.m_bIsNetworkVarExcluded && v13->m_vecDataTeam.m_Vector.m_Size > 0 )
        {
          desiredSlotc = &v13->m_vecDataTeam.m_PathToVector;
          v49 = v11;
          v29 = 0;
          iPlayerIDa = v5;
          v30 = 0;
          v51 = v9;
          while ( 1 )
          {
            if ( !v13->m_vecDataTeam.m_bResolved )
            {
              m_pObj = v13->m_vecDataTeam.m_pOwnerEntity.m_pObj;
              v13->m_vecDataTeam.m_bResolved = 1;
              if ( m_pObj != 0 )
              {
                v53 = m_pObj;
                v32 = *(*g_pFlattenedSerializers + 272LL);
                NetworkSerializerForEntityInstance = GetNetworkSerializerForEntityInstance(m_pObj);
                v32(
                  src,
                  g_pFlattenedSerializers,
                  NetworkSerializerForEntityInstance,
                  v53,
                  teamSlotb,
                  &v13->m_vecDataTeam.m_bIsNetworkVarExcluded);
                if ( desiredSlotc != src )
                {
                  v34 = v73;
                  v13->m_vecDataTeam.m_PathToVector.m_bUsingExternalPaths = 0;
                  if ( v34 > 6 )
                    goto LABEL_96;
                  v13->m_vecDataTeam.m_PathToVector.m_nCount = v34;
                  if ( v34 > 0 )
                  {
                    v35 = src;
                    if ( v74 != 0 )
                      v35 = src[0];
                    memcpy(desiredSlotc, v35, 2 * v34);
                  }
                }
              }
              else
              {
                if ( v13->m_vecDataTeam.m_PathToVector.m_bUsingExternalPaths )
                  CUtlVectorEmbeddedNetworkVar<DataTeamPlayer_t,CDOTA_DataNonSpectator::NetworkVar_m_vecDataTeam,-1>::Resolve(v28);
                v28 = 0;
                v13->m_vecDataTeam.m_PathToVector.m_nCount = 0;
              }
            }
            if ( !v13->m_vecDataTeam.m_bIsNetworkVarExcluded )
            {
              m_nCount = v13->m_vecDataTeam.m_PathToVector.m_nCount;
              path.m_bUsingExternalPaths = 0;
              path.m_nCount = 0;
              if ( m_nCount <= 6 )
              {
                path.m_nCount = m_nCount;
                if ( m_nCount > 0 )
                {
                  if ( v13->m_vecDataTeam.m_PathToVector.m_bUsingExternalPaths )
                    m_pPaths = v13->m_vecDataTeam.m_PathToVector.u.m_pPaths;
                  else
                    m_pPaths = &v13->m_vecDataTeam.m_PathToVector;
                  __memcpy_chk(&path, m_pPaths, 2 * m_nCount, 24);
                  v38 = v29;
                  if ( path.m_bUsingExternalPaths )
                  {
                    v30 = &LOG_GENERAL;
                    if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
                    {
                      v75.m_szFile = "../../public/tier2/fieldpath.h";
                      v75.m_szFunction = "Path_AddToTail";
                      v75.m_nLine = 428;
                      LoggingSystem_Log(
                        LOG_GENERAL,
                        LoggingSeverity_t::LS_ERROR,
                        &v75,
                        "Path_AddToTail failed for read only CFieldPath");
                    }
                    goto LABEL_73;
                  }
                  goto LABEL_77;
                }
                goto LABEL_76;
              }
LABEL_96:
              v30 = &LOG_GENERAL;
              if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
              {
                v75.m_nLine = 442;
                v75.m_szFile = "../../public/tier2/fieldpath.h";
                v75.m_szFunction = "Path_SetCount";
                LoggingSystem_Log(
                  LOG_GENERAL,
                  LoggingSeverity_t::LS_ERROR,
                  &v75,
                  "Path_SetCount failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)",
                  6);
              }
              while ( 1 )
              {
LABEL_73:
                if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v41, v42, v39, v40) != 0 )
                  loc_0 = -559038737;
                Plat_ExitProcess(1);
LABEL_76:
                v38 = v29;
LABEL_77:
                v43 = path.m_nCount;
                if ( path.m_nCount <= 5 )
                  break;
                v30 = &LOG_GENERAL;
                if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
                {
                  v75.m_szFile = "../../public/tier2/fieldpath.h";
                  v75.m_szFunction = "Path_AddToTail";
                  v75.m_nLine = 425;
                  LoggingSystem_Log(
                    LOG_GENERAL,
                    LoggingSeverity_t::LS_ERROR,
                    &v75,
                    "Path_AddToTail failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)",
                    6);
                }
              }
              ++path.m_nCount;
              path.u.m_FixedPaths[v43].m_nValue = v38;
              v28 = v13->m_vecDataTeam.m_pOwnerEntity.m_pObj;
              v44 = (v13->m_vecDataTeam.m_Vector.m_Memory.m_pMemory + v30);
              if ( v28 != 0 )
              {
                v54 = (v13->m_vecDataTeam.m_Vector.m_Memory.m_pMemory + v30);
                v45.m_Value = EntityInstanceAddChangeAccessorPath(v28, &path).m_Value;
                v44 = v54;
                v54[8].m_Value = v45.m_Value;
              }
              else
              {
                v44[8].m_Value = -1;
              }
              v46 = v13->m_vecDataTeam.m_pOwnerEntity.m_pObj;
              if ( v46 != *&v44[4].m_Value )
                *&v44[4].m_Value = v46;
            }
            ++v29;
            v30 += 96;
            if ( v29 >= v13->m_vecDataTeam.m_Vector.m_Size )
            {
              v9 = v51;
              v11 = v49;
              v5 = iPlayerIDa;
              break;
            }
          }
        }
        m_pArraySizeChangedDelegate = v13->m_vecDataTeam.m_pArraySizeChangedDelegate;
        if ( m_pArraySizeChangedDelegate != 0 )
          FastDelegate0<void>::operator()(m_pArraySizeChangedDelegate);
        v15 = *(*(this + 98) + v11 + 124);
      }
    }
    v13->m_vecDataTeam.m_Vector.m_Memory.m_pMemory[v15].m_PreGameInventory.m_nPreGamePlayerID = v5;
  }
LABEL_11:
  if ( g_pGameRules != 0 )
  {
    if ( !v9 )
      return;
    CDOTAGamerules::OnPlayerTeamChanged(g_pGameRules);
  }
  else if ( !v9 )
  {
    return;
  }
  if ( gameeventmanager != 0 )
  {
    v16 = (*(gameeventmanager->_vptr_IBaseInterface + 7))(gameeventmanager, "dota_player_team_changed", 0, 0);
    if ( v16 != 0 )
      (*(gameeventmanager->_vptr_IBaseInterface + 8))(gameeventmanager, v16, 1);
  }
}


// CDOTA_PlayerResource::GetTeam  (line 2752, @0x0000000002656370, libserver.so)  // inlines: Element, IsValidPlayerID, operator[]
// callers: CDOTA_CombatLog::RecordKillDamageBreakdown, DOTA_CombatLog_Record::FindTeamNumberForName, CustomGameSetup_AssignUnassignedPlayerToTeams, CustomGameSetup_ShuffleTeamAssignements, CDOTA_DataNonSpectator::ChangeTeam, CDOTA_CombatLog::ProcessPlayerPosition, CDOTA_CombatLog::GenerateExperimentalTimedStats, CDOTA_CombatLog::ProcessTeamLanePerformance, CDOTA_CombatLog::GenerateTimedStats, CDOTA_CombatLog::DoCombatAnalysis, CDOTA_CombatLog::AddFirstBloodEvent, CVoiceGameMgrHelper::CanPlayerHearPlayer (111 total)
int __fastcall CDOTA_PlayerResource::GetTeam(CDOTA_PlayerResource *const this, int iPlayerID)
{
  int result; // eax

  result = 0;
  if ( iPlayerID >= 0 && iPlayerID < *(this + 212) )
    return *(*(this + 107) + 72LL * iPlayerID + 32);
  return result;
}


// CDOTA_PlayerResource::GetTeamSlot  (line 2760, @0x000000000265eb40, libserver.so)  // inlines: Element, IsValidTeamPlayerID, operator[]
// callers: CDOTA_DataNonSpectator::ChangeTeam, CDOTAGCServerSystem::WriteMatchPrivateMetadataTeamPlayer, CDOTAGCServerSystem::WriteMatchMetadataTeamPlayer, CDOTAGCServerSystem::SendMatchDetailsToClients
int __fastcall CDOTA_PlayerResource::GetTeamSlot(CDOTA_PlayerResource *const this, int iPlayerID)
{
  int result; // eax

  result = -1;
  if ( iPlayerID >= 0 && iPlayerID < *(this + 194) )
    return *(*(this + 98) + 200LL * iPlayerID + 124);
  return result;
}


// CDOTA_PlayerResource::FindOrCreatePlayerID  (line 2770, @0x0000000002692c50, libserver.so)  // inlines: AddToTail, AssignPathIdToElement, CFieldPath, Clear, CopyConstruct<unsigned int>, Element, Find, Get, GetAccountID, GetPathData, GrowMemory, IsUsingFixedPaths, IsValid, LeafCodeInfo_t, NetworkStateChanged, OnSizeChanged, Path_AddToTail, Path_RemoveAll, Path_SetCount, Push, ReassignPathIds, Resolve, Set, SetCount, V_memcpy, memcpy, operator CEntityInstance*, operator(), operator=, operator=<bool>, operator=<long long unsigned int>, operator[]
// calls: DOTACommander, CDOTA_Commander::ReplaceDisconnectedWithBots, LoggingSystem_IsChannelEnabled, CDOTA_PlayerResource::GetPlayer, CUtlVectorEmbeddedNetworkVar<PlayerResourcePlayerData_t, CDOTA_PlayerResource::NetworkVar_m_vecPlayerData, -1>::Resolve, EntityInstanceSetNetworkStateChanged, CUtlVectorBase<PlayerResourcePlayerData_t, CNetworkUtlVector_MemoryType<PlayerResourcePlayerData_t, -1> >::SetCount, GetNetworkSerializerForEntityInstance, memcpy, __memcpy_chk, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess (19 total)
// callers: CDOTAPlayer::UpdatePlayerIDFromSteamID, CDOTA_PlayerResource::InitPlayersWithLobby
// strings: "CDOTA_PlayerResource: Adding player SteamID %lld to slot %d FakeClient=%d preferred slot , "../../public/tier2/fieldpath.h", "Path_AddToTail", "Path_AddToTail failed for read only CFieldPath", "Path_SetCount", "Path_SetCount failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)" (7 total)
// globals: CDOTA_PlayerResource::s_unLobbySteamID
int __fastcall CDOTA_PlayerResource::FindOrCreatePlayerID(
        CDOTA_PlayerResource *const this,
        uint64 iSteamID,
        bool bFakeClient,
        bool bAllowTeamPlayerIds)
{
  __int64 v5; // r12
  CDOTA_PlayerResource *v6; // rbx
  CDOTA_Commander *v7; // rax
  uint64 v8; // rax
  int v9; // ecx
  __int64 v10; // rdx
  __int64 v11; // rdx
  int result; // eax
  __int64 v13; // rax
  int v14; // r15d
  int v15; // eax
  __int64 v16; // r14
  _QWORD *v17; // rdi
  _QWORD *v18; // rdi
  _QWORD *v19; // rdi
  void **v20; // r14
  __int64 v21; // r14
  int v22; // r15d
  CDOTAPlayer *Player; // rax
  CUtlVectorEmbeddedNetworkVar<PlayerResourcePlayerData_t,CDOTA_PlayerResource::NetworkVar_m_vecPlayerData,-1> *v24; // rdi
  int v25; // r15d
  CEntityInstance *v26; // rcx
  FlattenedSerializerHandle_t v27; // rax
  __int64 v28; // rax
  void **v29; // rsi
  __int64 v30; // rax
  char *v31; // rsi
  int16 v32; // cx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rdi
  __int64 v36; // rsi
  int v37; // r15d
  _DWORD *v38; // rdx
  _DWORD *v39; // rdx
  int v40; // eax
  _DWORD *v41; // rax
  __int64 v42; // rax
  ChangeAccessorFieldPathIndex_t *v43; // rdx
  ChangeAccessorFieldPathIndex_t v44; // ax
  __int64 v45; // rax
  _QWORD *v46; // rax
  void (__fastcall *v47)(_QWORD); // rdx
  _QWORD *v48; // rdi
  CUtlVectorEmbeddedNetworkVar<PlayerResourcePlayerTeamData_t,CDOTA_PlayerResource::NetworkVar_m_vecPlayerTeamData,-1> *v49; // rdi
  void (__fastcall *v50)(void **, IFlattenedSerializers *, FlattenedSerializerHandle_t, CEntityInstance *, CUtlVectorEmbeddedNetworkVar<PlayerResourcePlayerTeamData_t,CDOTA_PlayerResource::NetworkVar_m_vecPlayerTeamData,-1> *, char *); // r15
  FlattenedSerializerHandle_t NetworkSerializerForEntityInstance; // rax
  __int64 v52; // rax
  void **v53; // rsi
  __int64 v54; // rax
  char *v55; // rsi
  int16 v56; // cx
  __int64 m_nCount; // rax
  ChangeAccessorFieldPathIndex_t *v58; // rdx
  ChangeAccessorFieldPathIndex_t v59; // ax
  __int64 v60; // rax
  CEntityInstance *v61; // rcx
  const FastDelegate0<void> *v62; // rdi
  uint64 iSteamIDa; // [rsp+8h] [rbp-128h]
  int v64; // [rsp+10h] [rbp-120h]
  uint64 v65; // [rsp+10h] [rbp-120h]
  int v66; // [rsp+18h] [rbp-118h]
  CUtlVectorEmbeddedNetworkVar<PlayerResourcePlayerData_t,CDOTA_PlayerResource::NetworkVar_m_vecPlayerData,-1> *v67; // [rsp+20h] [rbp-110h]
  int v68; // [rsp+20h] [rbp-110h]
  CUtlVectorBase<PlayerResourcePlayerTeamData_t,CNetworkUtlVector_MemoryType<PlayerResourcePlayerTeamData_t,-1> > *v69; // [rsp+30h] [rbp-100h]
  CUtlVectorEmbeddedNetworkVar<PlayerResourcePlayerTeamData_t,CDOTA_PlayerResource::NetworkVar_m_vecPlayerTeamData,-1> *v70; // [rsp+30h] [rbp-100h]
  CEntityInstance *v71; // [rsp+38h] [rbp-F8h]
  ChangeAccessorFieldPathIndex_t *v72; // [rsp+38h] [rbp-F8h]
  void **dest; // [rsp+40h] [rbp-F0h]
  CEntityInstance *desta; // [rsp+40h] [rbp-F0h]
  ChangeAccessorFieldPathIndex_t *destb; // [rsp+40h] [rbp-F0h]
  int nSlot; // [rsp+48h] [rbp-E8h]
  void **nSlota; // [rsp+48h] [rbp-E8h]
  CFieldPath path; // [rsp+60h] [rbp-D0h] BYREF
  void *src[2]; // [rsp+80h] [rbp-B0h] BYREF
  __int16 v82; // [rsp+90h] [rbp-A0h]
  char v83; // [rsp+92h] [rbp-9Eh]
  CFieldPath v84; // [rsp+A0h] [rbp-90h] BYREF
  void *v85[2]; // [rsp+C0h] [rbp-70h] BYREF
  __int16 v86; // [rsp+D0h] [rbp-60h]
  char v87; // [rsp+D2h] [rbp-5Eh]
  LeafCodeInfo_t v88; // [rsp+E0h] [rbp-50h] BYREF

  LODWORD(v5) = -1;
  v6 = this;
  if ( !bFakeClient )
  {
LABEL_5:
    v8 = HIWORD(iSteamID) & 0xF0;
    if ( (iSteamID & 0xF0000000000000LL) == 0 )
      goto LABEL_43;
    goto LABEL_6;
  }
  if ( *(this + 8470) != -1 )
  {
    v7 = DOTACommander();
    if ( CDOTA_Commander::ReplaceDisconnectedWithBots(v7) || CDOTA_PlayerResource::GetPlayer(v6, *(v6 + 8470)) == 0 )
    {
      LODWORD(v5) = *(v6 + 8470);
      goto LABEL_5;
    }
  }
  LODWORD(v5) = -1;
  v8 = HIWORD(iSteamID) & 0xF0;
  if ( (iSteamID & 0xF0000000000000LL) == 0 )
    goto LABEL_43;
LABEL_6:
  if ( ((iSteamID >> 52) & 0xF) <= 0xA && (HIBYTE(iSteamID) - 1) <= 3u )
  {
    if ( v8 == 16 )
    {
      if ( iSteamID != 0 && (HIDWORD(iSteamID) & 0xFFFFFu) <= 4 )
        goto LABEL_11;
    }
    else
    {
      if ( v8 != 112 )
      {
        if ( v8 == 48 && iSteamID == 0 )
          goto LABEL_43;
LABEL_11:
        v9 = *(v6 + 212);
        if ( v9 > 0 )
        {
          v10 = *(v6 + 107);
          if ( iSteamID == *(v10 + 56) )
            return 0;
          v11 = v10 + 128;
          result = 0;
          while ( ++result != v9 )
          {
            v11 += 72;
            if ( iSteamID == *(v11 - 72) )
              return result;
          }
        }
        v13 = 0;
        while ( CDOTA_PlayerResource::s_unLobbySteamID.m_Memory[v13] != iSteamID )
        {
          if ( ++v13 == 64 )
            goto LABEL_49;
        }
        LODWORD(v5) = v13;
        goto LABEL_20;
      }
      if ( iSteamID != 0 && (iSteamID & 0xFFFFF00000000LL) == 0 )
        goto LABEL_11;
    }
  }
LABEL_43:
  v9 = *(v6 + 212);
  v21 = 0;
  v22 = 0;
  if ( v9 > 0 )
  {
    while ( 1 )
    {
      if ( *(*(v6 + 107) + v21 + 18) != 0 )
      {
        Player = CDOTA_PlayerResource::GetPlayer(v6, v22);
        v9 = *(v6 + 212);
        if ( Player == 0 )
          break;
      }
      ++v22;
      v21 += 72;
      if ( v22 >= v9 )
        goto LABEL_49;
    }
    LODWORD(v5) = v22;
  }
  else
  {
LABEL_49:
    nSlot = v9;
    if ( v5 == -1 )
      goto LABEL_50;
  }
LABEL_20:
  if ( v5 < v9 )
  {
    v14 = v5;
    goto LABEL_22;
  }
  nSlot = v5;
LABEL_50:
  if ( nSlot + 1 == v9 )
    goto LABEL_92;
  v67 = (v6 + 848);
  CUtlVectorEmbeddedNetworkVar<PlayerResourcePlayerData_t,CDOTA_PlayerResource::NetworkVar_m_vecPlayerData,-1>::Resolve((v6 + 848));
  if ( *(v6 + 912) == 0 )
    EntityInstanceSetNetworkStateChanged(*(v6 + 109));
  CUtlVectorBase<PlayerResourcePlayerData_t,CNetworkUtlVector_MemoryType<PlayerResourcePlayerData_t,-1>>::SetCount(
    &v67->m_Vector,
    nSlot + 1);
  CUtlVectorEmbeddedNetworkVar<PlayerResourcePlayerData_t,CDOTA_PlayerResource::NetworkVar_m_vecPlayerData,-1>::Resolve(v67);
  if ( *(v6 + 912) != 0 || *(v6 + 212) <= 0 )
  {
LABEL_104:
    v46 = *(v6 + 113);
    if ( v46 != 0 )
    {
      v47 = v46[1];
      v48 = (v46[2] + *v46);
      if ( (v47 & 1) != 0 )
        v47 = *(v47 + *v48 - 1);
      v47(v48);
      v14 = v5;
      LODWORD(v5) = nSlot;
LABEL_22:
      if ( bAllowTeamPlayerIds )
      {
        v15 = *(v6 + 194);
        if ( v15 <= v5 && v5 + 1 != v15 )
        {
          v70 = (v6 + 776);
          CUtlVectorEmbeddedNetworkVar<PlayerResourcePlayerTeamData_t,CDOTA_PlayerResource::NetworkVar_m_vecPlayerTeamData,-1>::Resolve((v6 + 776));
          if ( *(v6 + 840) == 0 )
            EntityInstanceSetNetworkStateChanged(*(v6 + 100));
          CUtlVectorBase<PlayerResourcePlayerTeamData_t,CNetworkUtlVector_MemoryType<PlayerResourcePlayerTeamData_t,-1>>::SetCount(
            &v70->m_Vector,
            v5 + 1);
          CUtlVectorEmbeddedNetworkVar<PlayerResourcePlayerTeamData_t,CDOTA_PlayerResource::NetworkVar_m_vecPlayerTeamData,-1>::Resolve(v70);
          if ( *(v6 + 840) == 0 && *(v6 + 194) > 0 )
          {
            v68 = v5;
            LODWORD(v20) = 0;
            v5 = 0;
            v65 = iSteamID;
            nSlota = (v6 + 808);
            v66 = v14;
            iSteamID = &v84;
            do
            {
              if ( *(v6 + 841) == 0 )
              {
                v61 = *(v6 + 100);
                *(v6 + 841) = 1;
                if ( v61 != 0 )
                {
                  desta = v61;
                  v50 = *(*g_pFlattenedSerializers + 272LL);
                  NetworkSerializerForEntityInstance = GetNetworkSerializerForEntityInstance(v61);
                  v50(v85, g_pFlattenedSerializers, NetworkSerializerForEntityInstance, desta, v70, v6 + 840);
                  if ( nSlota != v85 )
                  {
                    v52 = v86;
                    *(v6 + 826) = 0;
                    if ( v52 > 6 )
                      goto LABEL_157;
                    *(v6 + 412) = v52;
                    if ( v52 > 0 )
                    {
                      v53 = v85;
                      if ( v87 != 0 )
                        v53 = v85[0];
                      memcpy(nSlota, v53, 2 * v52);
                    }
                  }
                }
                else
                {
                  if ( *(v6 + 826) != 0 )
                    CUtlVectorEmbeddedNetworkVar<PlayerResourcePlayerTeamData_t,CDOTA_PlayerResource::NetworkVar_m_vecPlayerTeamData,-1>::Resolve(v49);
                  *(v6 + 412) = 0;
                }
              }
              if ( *(v6 + 840) == 0 )
              {
                v54 = *(v6 + 412);
                v84.m_bUsingExternalPaths = 0;
                v84.m_nCount = 0;
                if ( v54 > 6 )
                  goto LABEL_157;
                v84.m_nCount = v54;
                if ( v54 <= 0 )
                {
                  v56 = v20;
                }
                else
                {
                  if ( *(v6 + 826) != 0 )
                    v55 = *(v6 + 101);
                  else
                    v55 = v6 + 808;
                  __memcpy_chk(&v84, v55, 2 * v54, 24);
                  v56 = v20;
                  if ( v84.m_bUsingExternalPaths )
                    goto LABEL_70;
                }
                m_nCount = v84.m_nCount;
                if ( v84.m_nCount > 5 )
                  goto LABEL_159;
                v49 = *(v6 + 100);
                ++v84.m_nCount;
                v58 = (*(v6 + 98) + v5);
                v84.u.m_FixedPaths[m_nCount].m_nValue = v56;
                if ( v49 != 0 )
                {
                  destb = v58;
                  v59.m_Value = EntityInstanceAddChangeAccessorPath(v49, &v84).m_Value;
                  v58 = destb;
                  destb[8].m_Value = v59.m_Value;
                }
                else
                {
                  v58[8].m_Value = -1;
                }
                v60 = *(v6 + 100);
                if ( v60 != *&v58[4].m_Value )
                  *&v58[4].m_Value = v60;
              }
              LODWORD(v20) = v20 + 1;
              v5 += 200;
            }
            while ( v20 < *(v6 + 194) );
            LODWORD(v5) = v68;
            v14 = v66;
            iSteamID = v65;
          }
          v62 = *(v6 + 104);
          if ( v62 != 0 )
            FastDelegate0<void>::operator()(v62);
        }
      }
      v16 = *(v6 + 107) + 72LL * v5;
      if ( *(v16 + 18) != 1 )
      {
        v17 = *(v16 + 8);
        if ( v17 != 0 && (*(v17[1] + 49LL) & 4) == 0 && *(v16 + 16) != 0xFFFF )
          (*(*v17 + 176LL))(v17, 18, 0xFFFFFFFFLL, *(v16 + 16));
        *(v16 + 18) = 1;
      }
      if ( iSteamID != *(v16 + 56) )
      {
        v18 = *(v16 + 8);
        if ( v18 != 0 && (*(v18[1] + 49LL) & 4) == 0 && *(v16 + 16) != 0xFFFF )
          (*(*v18 + 176LL))(v18, 56, 0xFFFFFFFFLL, *(v16 + 16));
        *(v16 + 56) = iSteamID;
      }
      if ( bFakeClient != *(v16 + 37) )
      {
        v19 = *(v16 + 8);
        if ( v19 != 0 && (*(v19[1] + 49LL) & 4) == 0 && *(v16 + 16) != 0xFFFF )
          (*(*v19 + 176LL))(v19, 37, 0xFFFFFFFFLL, *(v16 + 16));
        *(v16 + 37) = bFakeClient;
      }
      if ( LoggingSystem_IsChannelEnabled(LOG_SERVER, 1) != 0 )
        LoggingSystem_Log(
          LOG_SERVER,
          1,
          "CDOTA_PlayerResource: Adding player SteamID %lld to slot %d FakeClient=%d preferred slot = %d\n",
          iSteamID,
          v5,
          bFakeClient,
          v14);
      LODWORD(v20) = iSteamID;
      if ( !bFakeClient )
        goto LABEL_75;
      return v5;
    }
LABEL_92:
    v14 = v5;
    LODWORD(v5) = nSlot;
    goto LABEL_22;
  }
  v24 = 0;
  v64 = v5;
  v25 = 0;
  v5 = 0;
  iSteamIDa = iSteamID;
  dest = (v6 + 880);
  v20 = src;
  iSteamID = &path;
  while ( 1 )
  {
    if ( *(v6 + 913) == 0 )
    {
      v26 = *(v6 + 109);
      *(v6 + 913) = 1;
      if ( v26 != 0 )
      {
        v71 = v26;
        v69 = *(*g_pFlattenedSerializers + 272LL);
        v27 = GetNetworkSerializerForEntityInstance(v26);
        (v69)(src, g_pFlattenedSerializers, v27, v71, v67, v6 + 912);
        if ( dest != src )
        {
          v28 = v82;
          *(v6 + 898) = 0;
          if ( v28 > 6 )
            goto LABEL_157;
          *(v6 + 448) = v28;
          if ( v28 > 0 )
          {
            v29 = src;
            if ( v83 != 0 )
              v29 = src[0];
            memcpy(dest, v29, 2 * v28);
          }
        }
      }
      else
      {
        if ( *(v6 + 898) != 0 )
          CUtlVectorEmbeddedNetworkVar<PlayerResourcePlayerData_t,CDOTA_PlayerResource::NetworkVar_m_vecPlayerData,-1>::Resolve(v24);
        *(v6 + 448) = 0;
      }
    }
    if ( *(v6 + 912) == 0 )
      break;
LABEL_102:
    ++v25;
    v5 += 72;
    if ( v25 >= *(v6 + 212) )
    {
      LODWORD(v5) = v64;
      iSteamID = iSteamIDa;
      goto LABEL_104;
    }
  }
  path.m_bUsingExternalPaths = 0;
  path.m_nCount = 0;
  v30 = *(v6 + 448);
  if ( v30 <= 6 )
  {
    path.m_nCount = *(v6 + 448);
    if ( v30 <= 0 )
    {
      v32 = v25;
    }
    else
    {
      if ( *(v6 + 898) != 0 )
        v31 = *(v6 + 110);
      else
        v31 = v6 + 880;
      __memcpy_chk(&path, v31, 2 * v30, 24);
      v32 = v25;
      if ( path.m_bUsingExternalPaths )
      {
LABEL_70:
        v6 = &LOG_GENERAL;
        if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
        {
          v88.m_nLine = 428;
          v88.m_szFile = "../../public/tier2/fieldpath.h";
          v88.m_szFunction = "Path_AddToTail";
          LoggingSystem_Log(
            LOG_GENERAL,
            LoggingSeverity_t::LS_ERROR,
            &v88,
            "Path_AddToTail failed for read only CFieldPath");
        }
        goto LABEL_72;
      }
    }
    v42 = path.m_nCount;
    if ( path.m_nCount > 5 )
    {
LABEL_159:
      v6 = &LOG_GENERAL;
      if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
      {
        v88.m_nLine = 425;
        v88.m_szFile = "../../public/tier2/fieldpath.h";
        v88.m_szFunction = "Path_AddToTail";
        LoggingSystem_Log(
          LOG_GENERAL,
          LoggingSeverity_t::LS_ERROR,
          &v88,
          "Path_AddToTail failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)",
          6);
      }
      goto LABEL_72;
    }
    v24 = *(v6 + 109);
    ++path.m_nCount;
    v43 = (*(v6 + 107) + v5);
    path.u.m_FixedPaths[v42].m_nValue = v32;
    if ( v24 != 0 )
    {
      v72 = v43;
      v44.m_Value = EntityInstanceAddChangeAccessorPath(v24, &path).m_Value;
      v43 = v72;
      v72[8].m_Value = v44.m_Value;
    }
    else
    {
      v43[8].m_Value = -1;
    }
    v45 = *(v6 + 109);
    if ( v45 != *&v43[4].m_Value )
      *&v43[4].m_Value = v45;
    goto LABEL_102;
  }
LABEL_157:
  v6 = &LOG_GENERAL;
  if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
  {
    v88.m_nLine = 442;
    v88.m_szFile = "../../public/tier2/fieldpath.h";
    v88.m_szFunction = "Path_SetCount";
    LoggingSystem_Log(
      LOG_GENERAL,
      LoggingSeverity_t::LS_ERROR,
      &v88,
      "Path_SetCount failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)",
      6);
  }
LABEL_72:
  if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v35, v36, v33, v34) != 0 )
    loc_0 = -559038737;
  Plat_ExitProcess(1);
LABEL_75:
  if ( (*(*engine + 176LL))(engine) == 0 && iSteamID != 0 )
  {
    v37 = *(v6 + 8472);
    if ( v37 <= 0 )
      goto LABEL_82;
    v38 = *(v6 + 4237);
    if ( iSteamID != *v38 )
    {
      v39 = v38 + 1;
      v40 = 0;
      while ( ++v40 != v37 )
      {
        if ( v20 == *v39++ )
        {
          if ( v40 != -1 )
            return v5;
          break;
        }
      }
LABEL_82:
      if ( v37 == *(v6 + 8476) )
        CUtlMemory<unsigned int,int>::Grow((v6 + 33896), 1);
      ++*(v6 + 8472);
      v41 = (*(v6 + 4237) + 4LL * v37);
      if ( v41 != 0 )
      {
        *v41 = iSteamID;
        return v5;
      }
    }
  }
  return v5;
}


// CDOTA_PlayerResource::FlushPlayerResourceRequests  (line 2911, @0x000000000265eb70, libserver.so)  // inlines: Add, AllocProto, CProtoBufMsg, CVProfScope, CopyArray, EDOTAPlayerMMRType_Name, FreeProto, Get, GetExtension<google::protobuf::internal::PrimitiveTypeTraits<int>, 5u, false>, GetLobby, GetPlayerMMRTypesForAccountID, IsEnabled, Lock, MoveArray, RemoveAll, Reserve, Unlock, add_account_ids, add_rank_types, memcpy, operator(), ~CProtoBufMsg, ~CVProfScope
// calls: GDOTAGCClientSystem, GCSDK::CProtoBufMsgBase::CProtoBufMsgBase, CVProfile::EnterScope, pthread_mutex_lock, operator new, CMsgDOTARequestBatchPlayerResources::descriptor, google::protobuf::internal::ExtensionSet::GetInt32(int,int), GCSDK::CProtoBufMsgMemoryPoolBase::CProtoBufMsgMemoryPoolBase, GCSDK::GProtoBufMsgMemoryPoolMgr, GCSDK::CProtoBufMsgMemoryPoolMgr::RegisterPool, pthread_mutex_unlock, GCSDK::CProtoBufMsgMemoryPoolBase::Alloc (32 total)
// callers: CDOTA_PlayerResource::ResourceThink, CDOTA_PlayerResource::InitPlayersWithLobby
// strings: "Networking", "CProtoBufMsg::CProtoBufMsg( MsgType_t )", "Requesting account %d resources, including %s rank.\n", "Requesting account %d resources without rank.\n", "Don't know which rank to request for Account %d, since they aren't in the lobby\n"
// globals: GCSDK::CProtoBufMsg<CMsgDOTARequestBatchPlayerResources>::s_bRegisteredWithMemoryPoolMgr, GCSDK::CProtoBufMsg<CMsgDOTARequestBatchPlayerResources>::s_pMemoryPool
void __fastcall CDOTA_PlayerResource::FlushPlayerResourceRequests(CDOTA_PlayerResource *const this)
{
  const CDOTALobby *v2; // r12
  int m_enabled; // edi
  bool v4; // r13
  GCSDK::CProtoBufMsgMemoryPool<CMsgDOTARequestBatchPlayerResources> *v5; // rbx
  const google::protobuf::Descriptor *v6; // rax
  const google::protobuf::Descriptor *v7; // rax
  uint32 Int32; // eax
  GCSDK::CProtoBufMsgMemoryPoolMgr *v9; // rax
  __int64 i; // r14
  CMsgDOTARequestBatchPlayerResources *m_pProtoBufBody; // rbx
  __int64 v12; // rdx
  _DWORD *v13; // rcx
  _DWORD *v14; // rbx
  unsigned int v15; // eax
  __int64 v16; // rax
  int v17; // edx
  const CDOTALobbyMember *FullMemberDetails; // rax
  const CDOTALobbyMember *v19; // r13
  uint32 j; // ebx
  const CDOTALobbyMember *v21; // rax
  google::protobuf::internal *v22; // rax
  int v23; // edx
  const char **v24; // rax
  CMsgDOTARequestBatchPlayerResources *v25; // rbx
  __int64 v26; // rdx
  _DWORD *v27; // rcx
  CGCClientSystem *v28; // rax
  CMsgDOTARequestBatchPlayerResources *v29; // rbx
  __int64 v30; // rdx
  _DWORD *v31; // rcx
  int v32; // eax
  int v33; // edx
  void *v34; // r13
  _DWORD *v35; // rax
  int v36; // eax
  int v37; // edx
  void *v38; // r13
  _DWORD *v39; // rax
  int v40; // eax
  int v41; // edx
  void *v42; // r13
  _DWORD *v43; // rax
  EDOTAPlayerMMRType eMMRTypePartied; // [rsp+14h] [rbp-6Ch]
  EDOTAPlayerMMRType eMMRType; // [rsp+18h] [rbp-68h]
  AccountID_t nAccountIDa; // [rsp+1Ch] [rbp-64h]
  AccountID_t nAccountID; // [rsp+1Ch] [rbp-64h]
  GCSDK::CProtoBufMsg<CMsgDOTARequestBatchPlayerResources> msg; // [rsp+20h] [rbp-60h] BYREF

  if ( *(this + 8472) != 0 )
  {
    v2 = *(GDOTAGCClientSystem() + 260);
    if ( v2 != 0 )
    {
      GCSDK::CProtoBufMsgBase::CProtoBufMsgBase(&msg, 0x1D1Au);
      msg._vptr_CProtoBufMsgBase = &off_416FAF0;
      msg.m_pProtoBufBody = 0;
      m_enabled = g_VProfCurrentProfile.m_enabled;
      v4 = m_enabled != 0;
      if ( m_enabled != 0 )
        CVProfile::EnterScope(&g_VProfCurrentProfile, "CProtoBufMsg::CProtoBufMsg( MsgType_t )", 0, "Networking", 0, 4);
      if ( !GCSDK::CProtoBufMsg<CMsgDOTARequestBatchPlayerResources>::s_bRegisteredWithMemoryPoolMgr )
      {
        pthread_mutex_lock(&GCSDK::CProtoBufMsgBase::s_PoolRegMutex.m_Mutex);
        if ( !GCSDK::CProtoBufMsg<CMsgDOTARequestBatchPlayerResources>::s_bRegisteredWithMemoryPoolMgr )
        {
          v5 = operator new(0x28u);
          v6 = CMsgDOTARequestBatchPlayerResources::descriptor();
          nAccountIDa = google::protobuf::internal::ExtensionSet::GetInt32(
                          (v6->options_ + 8),
                          msgpool_hard_limit.number_,
                          msgpool_hard_limit.default_value_);
          v7 = CMsgDOTARequestBatchPlayerResources::descriptor();
          Int32 = google::protobuf::internal::ExtensionSet::GetInt32(
                    (v7->options_ + 8),
                    msgpool_soft_limit.number_,
                    msgpool_soft_limit.default_value_);
          GCSDK::CProtoBufMsgMemoryPoolBase::CProtoBufMsgMemoryPoolBase(v5, Int32, nAccountIDa);
          v5->_vptr_CProtoBufMsgMemoryPoolBase = &off_41785D0;
          GCSDK::CProtoBufMsg<CMsgDOTARequestBatchPlayerResources>::s_pMemoryPool = v5;
          v9 = GCSDK::GProtoBufMsgMemoryPoolMgr();
          GCSDK::CProtoBufMsgMemoryPoolMgr::RegisterPool(v9, v5);
          GCSDK::CProtoBufMsg<CMsgDOTARequestBatchPlayerResources>::s_bRegisteredWithMemoryPoolMgr = 1;
        }
        pthread_mutex_unlock(&GCSDK::CProtoBufMsgBase::s_PoolRegMutex.m_Mutex);
      }
      msg.m_pProtoBufBody = GCSDK::CProtoBufMsgMemoryPoolBase::Alloc(GCSDK::CProtoBufMsg<CMsgDOTARequestBatchPlayerResources>::s_pMemoryPool);
      if ( v4 )
        CVProfile::ExitScope(&g_VProfCurrentProfile);
      if ( *(this + 8472) > 0 )
      {
        for ( i = 0; *(this + 8472) > i; ++i )
        {
          m_pProtoBufBody = msg.m_pProtoBufBody;
          v12 = *(msg.m_pProtoBufBody + 8);
          nAccountID = *(*(this + 4237) + 4 * i);
          if ( v12 == *(msg.m_pProtoBufBody + 9) )
          {
            v32 = v12 + 1;
            v33 = 2 * v12;
            v34 = *(msg.m_pProtoBufBody + 3);
            if ( v32 >= v33 )
              v33 = v32;
            if ( v33 < 4 )
              v33 = 4;
            *(msg.m_pProtoBufBody + 9) = v33;
            v35 = operator new[](4LL * v33);
            *(m_pProtoBufBody + 3) = v35;
            v12 = *(m_pProtoBufBody + 8);
            v13 = v35;
            if ( v34 != 0 )
            {
              memcpy(v35, v34, 4 * v12);
              operator delete[](v34);
              v13 = *(m_pProtoBufBody + 3);
              v12 = *(m_pProtoBufBody + 8);
            }
          }
          else
          {
            v13 = *(msg.m_pProtoBufBody + 3);
          }
          *(m_pProtoBufBody + 8) = v12 + 1;
          v13[v12] = nAccountID;
          v14 = *(GDOTAGCClientSystem() + 260);
          if ( v14 != 0 )
          {
            v15 = (*(*v14 + 120LL))(v14, nAccountID);
            if ( v15 != -1 )
            {
              v16 = (*(*v14 + 136LL))(v14, v15);
              if ( v16 != 0 )
              {
                v17 = v14[38];
                if ( v17 == 4 )
                  goto LABEL_60;
                if ( v17 <= 4 )
                {
                  if ( v17 == 0 )
                  {
LABEL_60:
                    eMMRTypePartied = EDOTAPlayerMMRType::k_EDOTAPlayerMMRType_GeneralHidden;
                    eMMRType = EDOTAPlayerMMRType::k_EDOTAPlayerMMRType_SoloHidden;
                    goto LABEL_23;
                  }
                }
                else
                {
                  if ( v17 == 7 )
                  {
                    eMMRTypePartied = 3 * (*(v16 + 192) == 8) + 3;
                    eMMRType = 3 * (*(v16 + 192) == 8) + 4;
LABEL_23:
                    FullMemberDetails = CDOTALobby::FindFullMemberDetails(v2, nAccountID);
                    v19 = FullMemberDetails;
                    if ( FullMemberDetails != 0 )
                    {
                      if ( *(FullMemberDetails + 6) != 0 )
                      {
                        for ( j = 0; j < CDOTALobby::GetFullNumMembers(v2).m_nIndex; ++j )
                        {
                          v21 = CDOTALobby::GetFullMemberDetails(v2, j);
                          if ( v19 != v21 && *(v21 + 6) == *(v19 + 6) && !CDOTALobby::IsMemberACoach(v21) )
                          {
                            eMMRType = eMMRTypePartied;
                            break;
                          }
                        }
                      }
                    }
                    else
                    {
                      Warning(
                        "Don't know which rank to request for Account %d, since they aren't in the lobby\n",
                        nAccountID);
                    }
                    if ( LoggingSystem_IsChannelEnabled(LOG_SERVER, 1) != 0 )
                    {
                      v22 = EDOTAPlayerMMRType_descriptor();
                      v24 = google::protobuf::internal::NameOfEnum(v22, eMMRType, v23);
                      LoggingSystem_Log(
                        LOG_SERVER,
                        1,
                        "Requesting account %d resources, including %s rank.\n",
                        nAccountID,
                        *v24);
                    }
                    v25 = msg.m_pProtoBufBody;
                    v26 = *(msg.m_pProtoBufBody + 14);
                    if ( v26 == *(msg.m_pProtoBufBody + 15) )
                    {
                      v36 = v26 + 1;
                      v37 = 2 * v26;
                      v38 = *(msg.m_pProtoBufBody + 6);
                      if ( v36 >= v37 )
                        v37 = v36;
                      if ( v37 < 4 )
                        v37 = 4;
                      *(msg.m_pProtoBufBody + 15) = v37;
                      v39 = operator new[](4LL * v37);
                      *(v25 + 6) = v39;
                      v26 = *(v25 + 14);
                      v27 = v39;
                      if ( v38 != 0 )
                      {
                        memcpy(v39, v38, 4 * v26);
                        operator delete[](v38);
                        v27 = *(v25 + 6);
                        v26 = *(v25 + 14);
                      }
                    }
                    else
                    {
                      v27 = *(msg.m_pProtoBufBody + 6);
                    }
                    *(v25 + 14) = v26 + 1;
                    v27[v26] = eMMRType;
                    continue;
                  }
                  if ( v17 == 8 )
                    goto LABEL_60;
                }
              }
            }
          }
          if ( LoggingSystem_IsChannelEnabled(LOG_SERVER, 1) != 0 )
            LoggingSystem_Log(LOG_SERVER, 1, "Requesting account %d resources without rank.\n", nAccountID);
          v29 = msg.m_pProtoBufBody;
          v30 = *(msg.m_pProtoBufBody + 14);
          if ( v30 == *(msg.m_pProtoBufBody + 15) )
          {
            v40 = v30 + 1;
            v41 = 2 * v30;
            v42 = *(msg.m_pProtoBufBody + 6);
            if ( v40 < v41 )
              v40 = v41;
            if ( v40 < 4 )
              v40 = 4;
            *(msg.m_pProtoBufBody + 15) = v40;
            v43 = operator new[](4LL * v40);
            *(v29 + 6) = v43;
            v30 = *(v29 + 14);
            v31 = v43;
            if ( v42 != 0 )
            {
              memcpy(v43, v42, 4 * v30);
              operator delete[](v42);
              v31 = *(v29 + 6);
              v30 = *(v29 + 14);
            }
          }
          else
          {
            v31 = *(msg.m_pProtoBufBody + 6);
          }
          *(v29 + 14) = v30 + 1;
          v31[v30] = 0;
        }
      }
      *(this + 8472) = 0;
      v28 = GCClientSystem();
      CGCClientSystem::BSendMessage(v28, &msg);
      msg._vptr_CProtoBufMsgBase = &off_416FAF0;
      if ( msg.m_pProtoBufBody != 0 )
      {
        GCSDK::CProtoBufMsgMemoryPoolBase::Free(
          GCSDK::CProtoBufMsg<CMsgDOTARequestBatchPlayerResources>::s_pMemoryPool,
          msg.m_pProtoBufBody);
        msg.m_pProtoBufBody = 0;
      }
      GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(&msg);
    }
  }
}


// CGCJobRequestBatchPlayerResourcesResponse::~CGCJobRequestBatchPlayerResourcesResponse  (line 2978, @0x00000000026a0c90, libserver.so)  // inlines: ~CGCClientJob
// calls: GCSDK::CJob::~CJob
void __fastcall CGCJobRequestBatchPlayerResourcesResponse::~CGCJobRequestBatchPlayerResourcesResponse(
        CGCJobRequestBatchPlayerResourcesResponse *const this)
{
  this->_vptr_CJob = off_40DB690;
  GCSDK::CJob::~CJob(this);
}


// CGCJobRequestBatchPlayerResourcesResponse::~CGCJobRequestBatchPlayerResourcesResponse  (line 2978, @0x00000000026a0cb0, libserver.so)  // inlines: ~CGCClientJob, ~CGCJobRequestBatchPlayerResourcesResponse
// calls: GCSDK::CJob::~CJob, operator delete
void __fastcall CGCJobRequestBatchPlayerResourcesResponse::~CGCJobRequestBatchPlayerResourcesResponse(
        CGCJobRequestBatchPlayerResourcesResponse *const this)
{
  this->_vptr_CJob = off_40DB690;
  GCSDK::CJob::~CJob(this);
  operator delete(this);
}


// CGCJobRequestBatchPlayerResourcesResponse::BYieldingRunGCJob  (line 2982, @0x00000000026a8dd0, libserver.so)  // inlines: AllocProto, CProtoBufMsg, FreeProto, Get, Get<google::protobuf::RepeatedPtrField<CMsgDOTARequestBatchPlayerResourcesResponse_Result>::TypeHandler>, GetExtension<google::protobuf::internal::PrimitiveTypeTraits<int>, 5u, false>, GetLobby, Lock, Unlock, results, ~CProtoBufMsg
// calls: GCSDK::CProtoBufMsgBase::CProtoBufMsgBase, pthread_mutex_lock, pthread_mutex_unlock, GCSDK::CProtoBufMsgMemoryPoolBase::Alloc, GCSDK::CProtoBufMsgBase::InitFromPacketInternal, LoggingSystem_IsChannelEnabled, LoggingSystem_Log, GDOTAGCClientSystem, CDOTA_PlayerResource::GetPlayerIDByAccountID, CDOTA_PlayerResource::SetTextChatBanned, CDOTA_PlayerResource::SetVoiceChatBanned, CDOTA_PlayerResource::SetLowPriority (25 total)
// strings: "CGCJobRequestBatchPlayerResourcesResponse: Received %d account resources.\n", "CMsgDOTARequestBatchPlayerResourcesResponse contained account ID %d, but no player has th
// globals: GCSDK::CProtoBufMsg<CMsgDOTARequestBatchPlayerResourcesResponse>::s_bRegisteredWithMemoryPoolMgr, GCSDK::CProtoBufMsg<CMsgDOTARequestBatchPlayerResourcesResponse>::s_pMemoryPool, g_pDOTAPlayerResource
bool __fastcall CGCJobRequestBatchPlayerResourcesResponse::BYieldingRunGCJob(
        CGCJobRequestBatchPlayerResourcesResponse *const this,
        GCSDK::IMsgNetPacket *pNetPacket)
{
  __int64 v3; // rax
  bool v4; // r15
  CMsgDOTARequestBatchPlayerResourcesResponse *m_pProtoBufBody; // rsi
  __int64 v6; // r13
  int v7; // r14d
  int PlayerIDByAccountID; // eax
  int v9; // r12d
  bool v10; // dl
  bool v11; // dl
  CDOTA_PlayerResource *v12; // r15
  __int64 v13; // rbx
  AccountID_t v14; // esi
  GCSDK::CProtoBufMsgMemoryPool<CMsgDOTARequestBatchPlayerResourcesResponse> *v16; // r13
  const google::protobuf::Descriptor *v17; // rax
  uint32 Int32; // r14d
  const google::protobuf::Descriptor *v19; // rax
  uint32 v20; // eax
  GCSDK::CProtoBufMsgMemoryPoolMgr *v21; // rax
  AccountID_t v22; // [rsp+8h] [rbp-68h]
  bool bBanned; // [rsp+Ch] [rbp-64h]
  GCSDK::CProtoBufMsg<CMsgDOTARequestBatchPlayerResourcesResponse> msg; // [rsp+10h] [rbp-60h] BYREF

  GCSDK::CProtoBufMsgBase::CProtoBufMsgBase(&msg);
  msg._vptr_CProtoBufMsgBase = &off_416FB90;
  msg.m_pProtoBufBody = 0;
  if ( !GCSDK::CProtoBufMsg<CMsgDOTARequestBatchPlayerResourcesResponse>::s_bRegisteredWithMemoryPoolMgr )
  {
    pthread_mutex_lock(&GCSDK::CProtoBufMsgBase::s_PoolRegMutex.m_Mutex);
    if ( !GCSDK::CProtoBufMsg<CMsgDOTARequestBatchPlayerResourcesResponse>::s_bRegisteredWithMemoryPoolMgr )
    {
      v16 = operator new(0x28u);
      v17 = CMsgDOTARequestBatchPlayerResourcesResponse::descriptor();
      Int32 = google::protobuf::internal::ExtensionSet::GetInt32(
                (v17->options_ + 8),
                msgpool_hard_limit.number_,
                msgpool_hard_limit.default_value_);
      v19 = CMsgDOTARequestBatchPlayerResourcesResponse::descriptor();
      v20 = google::protobuf::internal::ExtensionSet::GetInt32(
              (v19->options_ + 8),
              msgpool_soft_limit.number_,
              msgpool_soft_limit.default_value_);
      GCSDK::CProtoBufMsgMemoryPoolBase::CProtoBufMsgMemoryPoolBase(v16, v20, Int32);
      v16->_vptr_CProtoBufMsgMemoryPoolBase = &off_4178610;
      GCSDK::CProtoBufMsg<CMsgDOTARequestBatchPlayerResourcesResponse>::s_pMemoryPool = v16;
      v21 = GCSDK::GProtoBufMsgMemoryPoolMgr();
      GCSDK::CProtoBufMsgMemoryPoolMgr::RegisterPool(v21, v16);
      GCSDK::CProtoBufMsg<CMsgDOTARequestBatchPlayerResourcesResponse>::s_bRegisteredWithMemoryPoolMgr = 1;
    }
    pthread_mutex_unlock(&GCSDK::CProtoBufMsgBase::s_PoolRegMutex.m_Mutex);
  }
  msg.m_pProtoBufBody = GCSDK::CProtoBufMsgMemoryPoolBase::Alloc(GCSDK::CProtoBufMsg<CMsgDOTARequestBatchPlayerResourcesResponse>::s_pMemoryPool);
  GCSDK::CProtoBufMsgBase::InitFromPacketInternal(&msg, pNetPacket);
  if ( LoggingSystem_IsChannelEnabled(LOG_SERVER, 1) != 0 )
    LoggingSystem_Log(
      LOG_SERVER,
      1,
      "CGCJobRequestBatchPlayerResourcesResponse: Received %d account resources.\n",
      *(msg.m_pProtoBufBody + 8));
  v3 = *(GDOTAGCClientSystem() + 260);
  v4 = v3 != 0 && (*(v3 + 152) - 1) <= 1;
  m_pProtoBufBody = msg.m_pProtoBufBody;
  if ( *(msg.m_pProtoBufBody + 8) > 0 )
  {
    v6 = 0;
    v7 = 0;
    bBanned = !v4;
    do
    {
      v12 = g_pDOTAPlayerResource;
      v13 = *(*(m_pProtoBufBody + 3) + v6);
      if ( g_pDOTAPlayerResource != 0 )
      {
        v22 = *(v13 + 24);
        PlayerIDByAccountID = CDOTA_PlayerResource::GetPlayerIDByAccountID(g_pDOTAPlayerResource, v22);
        v9 = PlayerIDByAccountID;
        if ( PlayerIDByAccountID >= 0 )
        {
          v10 = 0;
          if ( *(v13 + 32) != 0 )
            v10 = bBanned;
          CDOTA_PlayerResource::SetTextChatBanned(v12, PlayerIDByAccountID, v10);
          v11 = 0;
          if ( *(v13 + 33) != 0 )
            v11 = bBanned;
          CDOTA_PlayerResource::SetVoiceChatBanned(g_pDOTAPlayerResource, v9, v11);
          CDOTA_PlayerResource::SetLowPriority(g_pDOTAPlayerResource, v9, *(v13 + 35));
          if ( (*(v13 + 16) & 8) != 0 )
            CDOTA_PlayerResource::SetRank(g_pDOTAPlayerResource, v9, *(v13 + 28), *(v13 + 34));
          goto LABEL_18;
        }
        v14 = v22;
      }
      else
      {
        v14 = *(v13 + 24);
      }
      Warning(
        "CMsgDOTARequestBatchPlayerResourcesResponse contained account ID %d, but no player has that account?\n",
        v14);
LABEL_18:
      m_pProtoBufBody = msg.m_pProtoBufBody;
      ++v7;
      v6 += 8;
    }
    while ( v7 < *(msg.m_pProtoBufBody + 8) );
  }
  msg._vptr_CProtoBufMsgBase = &off_416FB90;
  GCSDK::CProtoBufMsgMemoryPoolBase::Free(
    GCSDK::CProtoBufMsg<CMsgDOTARequestBatchPlayerResourcesResponse>::s_pMemoryPool,
    m_pProtoBufBody);
  msg.m_pProtoBufBody = 0;
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(&msg);
  return 1;
}


// CreateJob_CGCJobRequestBatchPlayerResourcesResponse  (line 3013, @0x0000000002654400, libserver.so)  // inlines: AllocateJob<CGCJobRequestBatchPlayerResourcesResponse, GCSDK::CGCClient>, CGCClientJob, CGCJobRequestBatchPlayerResourcesResponse, JobMgrAllocateJobClass<CGCJobRequestBatchPlayerResourcesResponse, GCSDK::CGCClient>, Job_SetJobType
// calls: operator new, GCSDK::CJob::CJob, operator delete, _Unwind_Resume
// globals: g_JobType_CGCJobRequestBatchPlayerResourcesResponse
GCSDK::CJob *__fastcall CreateJob_CGCJobRequestBatchPlayerResourcesResponse(GCSDK::CGCClient *pGC)
{
  GCSDK::CJob *v2; // rbx

  v2 = operator new(0x140u);
  GCSDK::CJob::CJob(v2, (pGC + 48));
  v2[1]._vptr_CJob = pGC;
  v2->_vptr_CJob = off_416FB30;
  v2->m_pJobType = &g_JobType_CGCJobRequestBatchPlayerResourcesResponse;
  *(&v2[1] + 2) = 4;
  return v2;
}


// CDOTA_PlayerResource::GetSteamIDIgnoringBot  (line 3017, @0x000000000265f110, libserver.so)  // inlines: BIndividualAccount, Element, IsValidPlayerID, operator[]
// callers: CDOTAGCServerSystem::FillMatchDetailsForTeam
uint64 __fastcall CDOTA_PlayerResource::GetSteamIDIgnoringBot(const CDOTA_PlayerResource *const this, int iPlayerID)
{
  uint64 result; // rax

  if ( iPlayerID < 0 )
    return 0;
  if ( iPlayerID >= *(this + 212) )
    return 0;
  result = *(*(this + 107) + 72LL * iPlayerID + 56);
  if ( (BYTE6(result) & 0x70) != 0x10 )
    return 0;
  return result;
}


// CDOTA_PlayerResource::GetSteamID  (line 3030, @0x0000000002656450, libserver.so)  // inlines: Element, IsValidPlayerID, operator[]
// callers: CDOTAGamerules::CheckReconnectAssignHero, CDOTAGamerules::CheckIdleAndDisconnectedPlayers, CDOTAGamerules::AllDraftGetDataForPhase, CDOTAGamerules::AutoAssignCaptains, CDOTAGamerules::WaitForPlayersFailure, EconEntity_OnOwnerKillEaterEvent, CDOTAGamerules::State_Enter_POST_GAME, GetFrostyBoostAmount, GetGoldFrostyBoostAmount, CDOTAHLTVDirector::FinishRecording, CDOTA_OGS::LogHeroResults, CDOTA_PlayerResource::GetSteamAccountID (52 total)
uint64 __fastcall CDOTA_PlayerResource::GetSteamID(const CDOTA_PlayerResource *const this, int iPlayerID)
{
  uint64 result; // rax
  __int64 v3; // rdx

  result = 0;
  if ( iPlayerID >= 0 && iPlayerID < *(this + 212) )
  {
    v3 = *(this + 107) + 72LL * iPlayerID;
    if ( *(v3 + 37) == 0 )
      return *(v3 + 56);
  }
  return result;
}


// CDOTA_PlayerResource::GetSteamAccountID  (line 3041, @0x0000000002656490, libserver.so)
// calls: CDOTA_PlayerResource::GetSteamID
// callers: CDOTA_BaseNPC::PrecacheWearables, BuildPlayerPartyGroups, CDOTA_BaseNPC::SpawnWearables, CDOTAChallengeSystem::AddResultToSignout, CDOTAGamerules::GetPlayerCustomGameAccountRecord, CDOTAGamerules::State_Enter_POST_GAME, GetFavoriteTeamAndQuality, CIngameEvent_WM2016::DoEndGameCoinWagerCalculations, CIngameEvent_FM2015::OnGameStarted, CIngameEvent_Base::AddResultToSignout, CIngameEvent_FM2015::AddResultToSignout, CIngameEvent_WM2016::AddResultToSignout (27 total)
AccountID_t __fastcall CDOTA_PlayerResource::GetSteamAccountID(const CDOTA_PlayerResource *const this, int iPlayerID)
{
  return CDOTA_PlayerResource::GetSteamID(this, iPlayerID);
}


// CDOTA_PlayerResource::GetPlayerIDBySteamID  (line 3047, @0x000000000265f150, libserver.so)
// callers: CDOTAGamerules::LogSteamKick, CDOTAGamerules::OnLobbyUpdated, CDOTAGamerules::UpdateAndDisplayPlayerBoosterState, CDOTAGamerules::BroadcastItemDropBonusStatus, CDOTAGamerules::HeroPickState_Enter_AP_SELECT, CDOTAGamerules::HeroPickState_Enter_FH_SELECT, CDOTAGamerules::OnGCObjectUpdated, GetFrostyBoostAmount, GetGoldFrostyBoostAmount, SendFrostyPointsMessageToGC, CIngameEvent_WM2016::GenerateWeeklyAndDailyChallenges, CDOTA_PlayerResource::DataTeamSpawn (16 total)
int __fastcall CDOTA_PlayerResource::GetPlayerIDBySteamID(const CDOTA_PlayerResource *const this, uint64 iSteamID)
{
  int v2; // ecx
  int result; // eax
  __int64 v4; // rdx
  __int64 v5; // rdx

  v2 = *(this + 212);
  result = -1;
  if ( v2 > 0 )
  {
    v4 = *(this + 107);
    if ( *(v4 + 56) == iSteamID )
    {
      return 0;
    }
    else
    {
      v5 = v4 + 128;
      result = 0;
      while ( ++result != v2 )
      {
        v5 += 72;
        if ( *(v5 - 72) == iSteamID )
          return result;
      }
      return -1;
    }
  }
  return result;
}


// CDOTA_PlayerResource::GetPlayerIDByAccountID  (line 3058, @0x000000000265f1a0, libserver.so)  // inlines: CSteamID, SetFromUint64
// callers: TournamentItemEvent, CIngameEvent_WM2016::TipValidated, CGCJobRequestBatchPlayerResourcesResponse::BYieldingRunGCJob, CDOTA_PlayerResource::InitPlayersWithLobby, CGCClientJobUploadMatchStats::BYieldingRunJob, CEconItemView::ComputeItemCriteria
int __fastcall CDOTA_PlayerResource::GetPlayerIDByAccountID(
        const CDOTA_PlayerResource *const this,
        AccountID_t unAccountID)
{
  int v2; // r8d
  __int64 v3; // rdx
  __int64 *v4; // rdx
  int result; // eax
  __int64 v6; // rcx

  v2 = *(this + 212);
  if ( v2 > 0 )
  {
    v3 = *(this + 107);
    if ( unAccountID == *(v3 + 56) )
      return 0;
    v4 = (v3 + 128);
    result = 0;
    while ( ++result != v2 )
    {
      v6 = *v4;
      v4 += 9;
      if ( unAccountID == v6 )
        return result;
    }
  }
  return -1;
}


// CDOTA_PlayerResource::SetRequestedBotSlot  (line 3070, @0x000000000265f1f0, libserver.so)
// callers: CDOTAGamerules::ClientDisconnected, CDOTA_TeamCommander::UpdateHeroSelections
void __fastcall CDOTA_PlayerResource::SetRequestedBotSlot(CDOTA_PlayerResource *const this, int iSlot)
{
  *(this + 8470) = iSlot;
}


// CDOTA_PlayerResource::IsFakeClient  (line 3077, @0x0000000002656910, libserver.so)  // inlines: Element, IsValidPlayerID, operator[]
// callers: CDOTA_BaseNPC::GetEconSpecifyingPlayerID, CDOTAGamerules::GetRealPlayerCount, CDOTAGamerules::ClientMsg_Pause, CDOTAGamerules::CheckIdleAndDisconnectedPlayers, CDOTAGamerules::CalcNumLoadingPlayersAndFailure, CDOTAGamerules::NumHumanPlayers, CDOTAGamerules::AllHumanPlayers, CDOTA_AutoSaveGameSystem::FrameUpdatePostEntityThink, CDOTAGamerules::UpdateAutomaticSurrender, EconEntity_OnOwnerKillEaterEvent, CDOTAGamerules::State_Enter_POST_GAME, CIngameEvent_WM2016::PreWagerTimeThink (26 total)
bool __fastcall CDOTA_PlayerResource::IsFakeClient(const CDOTA_PlayerResource *const this, int iPlayerID)
{
  bool result; // al

  result = 0;
  if ( iPlayerID >= 0 && iPlayerID < *(this + 212) )
    return *(*(this + 107) + 72LL * iPlayerID + 37);
  return result;
}


// CDOTA_PlayerResource::IsValidTeamPlayer  (line 3087, @0x00000000026566c0, libserver.so)  // inlines: Element, IsPlayerTeam, IsValidTeamPlayerID, operator[]
// callers: CDOTAChallengeSystem::AddResultToSignout, CDOTA_CombatLog::DoCombatAnalysis, CDOTACustomGameEvents::InputLevelAllHeroesToMax, CDOTACustomGameEvents::InputLevelAllHeroesUpOnce, CDOTACustomGameEvents::InputLevelAllHeroesToLevel, CDOTAGamerules::GetRealPlayerCount, CDOTAGamerules::ClientMsg_Pause, CDOTAGamerules::DeliverGoldToPlayers, CDOTAGamerules::CheckIdleAndDisconnectedPlayers, CDOTAGamerules::SetupRepick, DOTAPrintPlayerStatus, CreateFakeClients (53 total)
bool __fastcall CDOTA_PlayerResource::IsValidTeamPlayer(const CDOTA_PlayerResource *const this, int iPlayerID)
{
  bool result; // al
  __int64 v3; // rax

  result = 0;
  if ( iPlayerID >= 0 && iPlayerID < *(this + 194) )
  {
    v3 = *(this + 107) + 72LL * iPlayerID;
    return *(v3 + 18) != 0 && ((*(v3 + 32) - 2) <= 1 || (*(v3 + 32) - 6) <= 7);
  }
  return result;
}


// CDOTA_PlayerResource::IsValidPlayer  (line 3100, @0x00000000026564a0, libserver.so)  // inlines: Element, IsValidPlayerID, operator[]
// callers: CustomGameSetup_AssignUnassignedPlayerToTeams, CustomGameSetup_ShuffleTeamAssignements, CDOTAGamerules::CalcNumLoadingPlayersAndFailure, CreateFakeClients, CDOTA_AutoSaveGameSystem::FrameUpdatePostEntityThink, CIngameEvent_Base::ClearQuestQueryForPlayer, CDOTA_PlayerResource::GetNthPlayerIDOnTeam, CDOTA_PlayerResource::GetPlayerCountForTeam, CDOTA_PlayerResource::GetPlayerCount, CDOTA_PlayerResource::HaveAllPlayersJoined, CDOTA_PlayerResource::GetPlayerIDForTeamSlot, CDOTA_PlayerResource::GetPartnerType (18 total)
bool __fastcall CDOTA_PlayerResource::IsValidPlayer(const CDOTA_PlayerResource *const this, int iPlayerID)
{
  bool result; // al

  result = 0;
  if ( iPlayerID >= 0 && iPlayerID < *(this + 212) )
    return *(*(this + 107) + 72LL * iPlayerID + 18);
  return result;
}


// CDOTA_PlayerResource::CustomGame_AssignPlayerID  (line 3110, @0x000000000269a070, libserver.so)
// calls: CDOTAPlayer::UpdatePlayerIDFromSteamID
// callers: CDOTAGameConfiguration::OnClientFullyConnect
void __fastcall CDOTA_PlayerResource::CustomGame_AssignPlayerID(CDOTA_PlayerResource *const this, CDOTAPlayer *pPlayer)
{
  CDOTAPlayer::UpdatePlayerIDFromSteamID(pPlayer);
}


// CDOTA_PlayerResource::GetTeamPlayerCount  (line 3118, @0x0000000002656940, libserver.so)  // inlines: GetLeaverStatus, IsValidTeamPlayerID
// calls: CDOTA_PlayerResource::IsValidTeamPlayer, CDOTA_PlayerResource::IsFakeClient
// callers: CDOTAVoteSystem::CountVotes, CDOTAVoteSystem::VoteEnded, CDOTAVoteSystem::FrameUpdatePostEntityThink
int __fastcall CDOTA_PlayerResource::GetTeamPlayerCount(CDOTA_PlayerResource *const this)
{
  int v1; // r14d
  __int64 i; // rbx

  v1 = 0;
  for ( i = 0; i != 24; ++i )
  {
    while ( !CDOTA_PlayerResource::IsValidTeamPlayer(this, i)
         || CDOTA_PlayerResource::IsFakeClient(this, i)
         || *(this + 194) > i && *(this + i + 4372) != 0 )
    {
      if ( ++i == 24 )
        return v1;
    }
    ++v1;
  }
  return v1;
}


// CDOTA_PlayerResource::OnFullyJoinedServer  (line 3133, @0x000000000265fa90, libserver.so)  // inlines: CBroadcastRecipientFilter, CSteamID, Element, Get, IsValidPlayerID, MarkPlayerLoadedCompletely, NetworkStateChanged, Set, SetFromUint64, operator CEntityInstance*, operator=<bool>, operator[], ~CBroadcastRecipientFilter
// calls: LoggingSystem_IsChannelEnabled, CDOTA_PlayerResource::SetLeaverStatus, CDOTA_PlayerResource::SetConnectionState, CDOTA_PlayerResource::GetPlayer, CRecipientFilter::CRecipientFilter, CRecipientFilter::AddAllPlayers, CRecipientFilter::RemoveRecipient, SendChatEventMessage, CRecipientFilter::~CRecipientFilter, CDOTA_PlayerResource::GetSteamID, CSteamID::Render, LoggingSystem_Log (14 total)
// callers: CDOTAGameConfiguration::OnClientFullyConnect, CDOTAPlayer::ChangeTeam
// strings: "PR:OnFullyJoinedServer %d:%s\n"
// globals: g_pDOTAPlayerResource
void __fastcall CDOTA_PlayerResource::OnFullyJoinedServer(CDOTA_PlayerResource *const this, int iPlayerID)
{
  __int64 v4; // r13
  _QWORD *v5; // rdi
  CDOTAPlayer *Player; // rbx
  int v7; // eax
  const char *v8; // rax
  CSteamID v9; // [rsp+0h] [rbp-170h] BYREF
  CBroadcastRecipientFilter filterBroadcastAllButPlayer; // [rsp+10h] [rbp-160h] BYREF
  unsigned __int64 v11; // [rsp+148h] [rbp-28h]

  v11 = __readfsqword(0x28u);
  if ( iPlayerID >= 0 && iPlayerID < *(this + 212) )
  {
    if ( LoggingSystem_IsChannelEnabled(LOG_SERVER, 1) != 0 )
    {
      v9.m_steamid.m_comp = CDOTA_PlayerResource::GetSteamID(this, iPlayerID);
      v8 = CSteamID::Render(&v9);
      LoggingSystem_Log(LOG_SERVER, 1, "PR:OnFullyJoinedServer %d:%s\n", iPlayerID, v8);
    }
    v4 = *(this + 107) + 72LL * iPlayerID;
    if ( *(v4 + 36) != 1 )
    {
      v5 = *(v4 + 8);
      if ( v5 != 0 && (*(v5[1] + 49LL) & 4) == 0 && *(v4 + 16) != 0xFFFF )
        (*(*v5 + 176LL))(v5, 36, 0xFFFFFFFFLL, *(v4 + 16));
      *(v4 + 36) = 1;
    }
    CDOTA_PlayerResource::SetLeaverStatus(this, iPlayerID, DOTALeaverStatus_t::DOTA_LEAVER_NONE);
    CDOTA_PlayerResource::SetConnectionState(this, iPlayerID, DOTAConnectionState_t::DOTA_CONNECTION_STATE_CONNECTED, 0);
    if ( iPlayerID < *(this + 212) )
      *(this + iPlayerID + 14952) = 1;
    Player = CDOTA_PlayerResource::GetPlayer(g_pDOTAPlayerResource, iPlayerID);
    if ( Player != 0 )
    {
      CRecipientFilter::CRecipientFilter(&filterBroadcastAllButPlayer);
      filterBroadcastAllButPlayer._vptr_IRecipientFilter = &off_3FB63F0;
      CRecipientFilter::AddAllPlayers(&filterBroadcastAllButPlayer);
      CRecipientFilter::RemoveRecipient(&filterBroadcastAllButPlayer, Player);
      if ( Player->m_flLastReconnectTime != 0.0 )
      {
        v7 = (*(Player->_vptr_IHandleEntity + 393))(Player, 0.0);
        SendChatEventMessage(DOTA_CHAT_MESSAGE::CHAT_MESSAGE_RECONNECT, 0, v7, &filterBroadcastAllButPlayer);
      }
      filterBroadcastAllButPlayer._vptr_IRecipientFilter = &off_3FB63F0;
      CRecipientFilter::~CRecipientFilter(&filterBroadcastAllButPlayer);
    }
  }
}


// CDOTA_PlayerResource::HasFullyJoinedServer  (line 3168, @0x000000000265f200, libserver.so)  // inlines: Element, IsValidPlayerID, operator[]
// callers: CDOTAPlayer::ChangeTeam
bool __fastcall CDOTA_PlayerResource::HasFullyJoinedServer(const CDOTA_PlayerResource *const this, int iPlayerID)
{
  bool result; // al

  result = 0;
  if ( iPlayerID >= 0 && iPlayerID < *(this + 212) )
    return *(*(this + 107) + 72LL * iPlayerID + 36);
  return result;
}


// CDOTA_PlayerResource::HaveAllPlayersJoined  (line 3176, @0x0000000002656650, libserver.so)
// calls: CDOTA_PlayerResource::IsValidPlayer
bool __fastcall CDOTA_PlayerResource::HaveAllPlayersJoined(const CDOTA_PlayerResource *const this)
{
  int v2; // r13d
  __int64 v3; // rbx
  bool result; // al

  v2 = *(this + 212);
  if ( v2 <= 0 )
    return 1;
  v3 = 0;
  while ( 1 )
  {
    if ( CDOTA_PlayerResource::IsValidPlayer(this, v3) )
    {
      result = *(*(this + 107) + 72 * v3 + 36);
      if ( !result )
        break;
    }
    if ( v2 <= ++v3 )
      return 1;
  }
  return result;
}


// CGCClientJobSetLeaverDetected::~CGCClientJobSetLeaverDetected  (line 3191, @0x00000000026a44d0, libserver.so)  // inlines: FreeProto, ~CGCClientJob, ~CProtoBufMsg
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::Free, GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase, GCSDK::CJob::~CJob
// globals: GCSDK::CProtoBufMsg<CMsgLeaverDetected>::s_pMemoryPool
void __fastcall CGCClientJobSetLeaverDetected::~CGCClientJobSetLeaverDetected(
        CGCClientJobSetLeaverDetected *const this)
{
  google::protobuf::Message *m_pProtoBufBody; // rsi

  this->_vptr_CJob = off_416FC10;
  m_pProtoBufBody = this->m_msg.m_pProtoBufBody;
  this->m_msg._vptr_CProtoBufMsgBase = &off_416FBD0;
  if ( m_pProtoBufBody != 0 )
  {
    GCSDK::CProtoBufMsgMemoryPoolBase::Free(GCSDK::CProtoBufMsg<CMsgLeaverDetected>::s_pMemoryPool, m_pProtoBufBody);
    this->m_msg.m_pProtoBufBody = 0;
  }
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(&this->m_msg);
  this->_vptr_CJob = off_40DB690;
  GCSDK::CJob::~CJob(this);
}


// CGCClientJobSetLeaverDetected::~CGCClientJobSetLeaverDetected  (line 3191, @0x00000000026a47e0, libserver.so)  // inlines: FreeProto, ~CGCClientJob, ~CGCClientJobSetLeaverDetected, ~CProtoBufMsg
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::Free, GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase, GCSDK::CJob::~CJob, operator delete
// globals: GCSDK::CProtoBufMsg<CMsgLeaverDetected>::s_pMemoryPool
void __fastcall CGCClientJobSetLeaverDetected::~CGCClientJobSetLeaverDetected(
        CGCClientJobSetLeaverDetected *const this)
{
  google::protobuf::Message *m_pProtoBufBody; // rsi

  this->_vptr_CJob = off_416FC10;
  m_pProtoBufBody = this->m_msg.m_pProtoBufBody;
  this->m_msg._vptr_CProtoBufMsgBase = &off_416FBD0;
  if ( m_pProtoBufBody != 0 )
  {
    GCSDK::CProtoBufMsgMemoryPoolBase::Free(GCSDK::CProtoBufMsg<CMsgLeaverDetected>::s_pMemoryPool, m_pProtoBufBody);
    this->m_msg.m_pProtoBufBody = 0;
  }
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(&this->m_msg);
  this->_vptr_CJob = off_40DB690;
  GCSDK::CJob::~CJob(this);
  operator delete(this);
}


// CGCClientJobSetLeaverDetected::CGCClientJobSetLeaverDetected  (line 3194, @0x00000000026a88a0, libserver.so)  // inlines: Add, AllocProto, CGCClientJob, CMicroProfilerGuard, CMicroProfilerSample, CProtoBufMsg, CVProfScope, EnterScope, ExitScope, Get, GetElapsed, GetExtension<google::protobuf::internal::PrimitiveTypeTraits<int>, 5u, false>, GetInt, GetPoorNetworkConditionsMsg, GetTimebaseRegister, InTargetThread, IsEnabled, Lock, PLAT_CPU_TIME, Unlock, mutable_leaver_state, mutable_poor_network_conditions, operator=, set_disconnect_reason, set_has_disconnect_reason, set_has_leaver_state, set_has_leaver_status, set_has_poor_network_conditions, set_has_server_cluster, set_has_steam_id, set_leaver_status, set_server_cluster, set_steam_id, ~CGCClientJob, ~CMicroProfilerGuard, ~CVProfScope
// calls: GCSDK::CJob::CJob, GCSDK::CProtoBufMsgBase::CProtoBufMsgBase, ThreadGetCurrentId, pthread_mutex_lock, operator new, CMsgLeaverDetected::descriptor, google::protobuf::internal::ExtensionSet::GetInt32(int,int), GCSDK::CProtoBufMsgMemoryPoolBase::CProtoBufMsgMemoryPoolBase, GCSDK::GProtoBufMsgMemoryPoolMgr, GCSDK::CProtoBufMsgMemoryPoolMgr::RegisterPool, pthread_mutex_unlock, GCSDK::CProtoBufMsgMemoryPoolBase::Alloc (31 total)
// callers: CDOTA_PlayerResource::SetLeaverStatus
// strings: "sv_cluster", "CProtoBufMsg::CProtoBufMsg( MsgType_t )", "Networking"
// globals: GCSDK::CProtoBufMsg<CMsgLeaverDetected>::s_bRegisteredWithMemoryPoolMgr, GCSDK::CProtoBufMsg<CMsgLeaverDetected>::s_pMemoryPool, `guard variable for'CGCClientJobSetLeaverDetected::CGCClientJobSetLeaverDetected(GCSDK::CGCClient *,ulong long,DOTALeaverStatus_t,ENetworkDisconnectionReason,CM, CGCClientJobSetLeaverDetected::CGCClientJobSetLeaverDetected(GCSDK::CGCClient *,ulong long,DOTALeaverStatus_t,ENetworkDisconnectionReason,CMsgLeaverState const&
void __fastcall CGCClientJobSetLeaverDetected::CGCClientJobSetLeaverDetected(
        CGCClientJobSetLeaverDetected *const this,
        GCSDK::CGCClient *pGCClient,
        uint64 ulSteamID,
        DOTALeaverStatus_t eLeaverStatus,
        ENetworkDisconnectionReason eDisconnectReason,
        const CMsgLeaverState *const msgLeaverState)
{
  int m_enabled; // eax
  uint64 m_numTimeBaseTicks; // rcx
  const google::protobuf::Descriptor *v13; // rax
  const google::protobuf::Descriptor *v14; // rax
  uint32 Int32; // eax
  GCSDK::CProtoBufMsgMemoryPoolMgr *v16; // rax
  CMsgLeaverDetected *m_pProtoBufBody; // rax
  CMsgLeaverDetected *v18; // rax
  int m_nValue; // edx
  CMsgLeaverDetected *v20; // rax
  CMsgLeaverDetected *v21; // r12
  CMsgLeaverState *v22; // rdi
  CMsgLeaverDetected *v23; // rax
  CDOTAGCServerSystem *v24; // rax
  CMsgLeaverDetected *v25; // r13
  const CMsgPoorNetworkConditions *v26; // r12
  CMsgPoorNetworkConditions *v27; // rdi
  uint64 v28; // rcx
  CVProfNode *m_pCurNode; // rax
  CVProfile::CBudgetGroup *v30; // rax
  CVProfNode *m_pParent; // rax
  CMsgPoorNetworkConditions *v32; // r14
  CMsgLeaverState *v33; // r14
  uint32 unTargetHigh[2]; // [rsp+8h] [rbp-58h]
  uint32 unTargetHigha; // [rsp+8h] [rbp-58h]
  GCSDK::CProtoBufMsgMemoryPoolBase *pPool; // [rsp+18h] [rbp-48h]
  GCSDK::CProtoBufMsgMemoryPool<CMsgLeaverDetected> *pPoola; // [rsp+18h] [rbp-48h]
  GCSDK::CProtoBufMsgMemoryPoolBase *pPoolb; // [rsp+18h] [rbp-48h]
  bool v40; // [rsp+28h] [rbp-38h]
  unsigned __int64 v41; // [rsp+28h] [rbp-38h]

  GCSDK::CJob::CJob(this, (pGCClient + 48));
  this->_vptr_CJob = off_416FC10;
  this->m_pGCClient = pGCClient;
  this->m_cHeartbeatsBeforeTimeout = 4;
  GCSDK::CProtoBufMsgBase::CProtoBufMsgBase(&this->m_msg, 0x1BA0u);
  this->m_msg.m_pProtoBufBody = 0;
  this->m_msg._vptr_CProtoBufMsgBase = &off_416FBD0;
  m_enabled = g_VProfCurrentProfile.m_enabled;
  v40 = m_enabled != 0;
  if ( m_enabled != 0 )
  {
    pPool = __rdtsc();
    *unTargetHigh = g_VProfCurrentProfile.m_TargetThreadId;
    if ( *unTargetHigh == ThreadGetCurrentId() )
    {
      m_pCurNode = g_VProfCurrentProfile.m_pCurNode;
      if ( m_pCurNode->m_pszName != "CProtoBufMsg::CProtoBufMsg( MsgType_t )" )
      {
        m_pCurNode = CVProfNode::GetSubNode(
                       g_VProfCurrentProfile.m_pCurNode,
                       "CProtoBufMsg::CProtoBufMsg( MsgType_t )",
                       0,
                       "Networking",
                       4);
        g_VProfCurrentProfile.m_pCurNode = m_pCurNode;
      }
      v30 = &g_VProfCurrentProfile.m_pBudgetGroups[m_pCurNode->m_BudgetGroupID];
      v30->m_BudgetFlags |= 4u;
      CVProfNode::EnterScope(g_VProfCurrentProfile.m_pCurNode);
      g_VProfCurrentProfile.m_fAtRoot = 0;
    }
    m_numTimeBaseTicks = g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks;
    ++g_VProfCurrentProfile.m_ScopeProfiler.m_numCalls;
    g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks = m_numTimeBaseTicks - pPool + __rdtsc();
  }
  if ( !GCSDK::CProtoBufMsg<CMsgLeaverDetected>::s_bRegisteredWithMemoryPoolMgr )
  {
    pthread_mutex_lock(&GCSDK::CProtoBufMsgBase::s_PoolRegMutex.m_Mutex);
    if ( !GCSDK::CProtoBufMsg<CMsgLeaverDetected>::s_bRegisteredWithMemoryPoolMgr )
    {
      pPoola = operator new(0x28u);
      v13 = CMsgLeaverDetected::descriptor();
      unTargetHigha = google::protobuf::internal::ExtensionSet::GetInt32(
                        (v13->options_ + 8),
                        msgpool_hard_limit.number_,
                        msgpool_hard_limit.default_value_);
      v14 = CMsgLeaverDetected::descriptor();
      Int32 = google::protobuf::internal::ExtensionSet::GetInt32(
                (v14->options_ + 8),
                msgpool_soft_limit.number_,
                msgpool_soft_limit.default_value_);
      GCSDK::CProtoBufMsgMemoryPoolBase::CProtoBufMsgMemoryPoolBase(pPoola, Int32, unTargetHigha);
      pPoola->_vptr_CProtoBufMsgMemoryPoolBase = &off_4178650;
      GCSDK::CProtoBufMsg<CMsgLeaverDetected>::s_pMemoryPool = pPoola;
      v16 = GCSDK::GProtoBufMsgMemoryPoolMgr();
      GCSDK::CProtoBufMsgMemoryPoolMgr::RegisterPool(v16, pPoola);
      GCSDK::CProtoBufMsg<CMsgLeaverDetected>::s_bRegisteredWithMemoryPoolMgr = 1;
    }
    pthread_mutex_unlock(&GCSDK::CProtoBufMsgBase::s_PoolRegMutex.m_Mutex);
  }
  this->m_msg.m_pProtoBufBody = GCSDK::CProtoBufMsgMemoryPoolBase::Alloc(GCSDK::CProtoBufMsg<CMsgLeaverDetected>::s_pMemoryPool);
  if ( v40 )
  {
    v41 = __rdtsc();
    if ( !g_VProfCurrentProfile.m_fAtRoot || g_VProfCurrentProfile.m_enabled != 0 )
    {
      pPoolb = g_VProfCurrentProfile.m_TargetThreadId;
      if ( pPoolb == ThreadGetCurrentId() )
      {
        if ( CVProfNode::ExitScope(g_VProfCurrentProfile.m_pCurNode) != 0 )
        {
          m_pParent = g_VProfCurrentProfile.m_pCurNode->m_pParent;
          if ( m_pParent != 0 )
            g_VProfCurrentProfile.m_pCurNode = m_pParent;
          else
            m_pParent = g_VProfCurrentProfile.m_pCurNode;
        }
        else
        {
          m_pParent = g_VProfCurrentProfile.m_pCurNode;
        }
        g_VProfCurrentProfile.m_fAtRoot = m_pParent == &g_VProfCurrentProfile.m_Root;
      }
    }
    v28 = g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks;
    ++g_VProfCurrentProfile.m_ScopeProfiler.m_numCalls;
    g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks = v28 - v41 + __rdtsc();
  }
  if ( `guard variable for'CGCClientJobSetLeaverDetected::CGCClientJobSetLeaverDetected(GCSDK::CGCClient *,unsigned long long,DOTALeaverStatus_t,ENetworkDisconnectionReason,CMsgLeaverState const&)::sv_cluster == 0
    && __cxa_guard_acquire(&`guard variable for'CGCClientJobSetLeaverDetected::CGCClientJobSetLeaverDetected(GCSDK::CGCClient *,unsigned long long,DOTALeaverStatus_t,ENetworkDisconnectionReason,CMsgLeaverState const&)::sv_cluster) != 0 )
  {
    ConVarRef::ConVarRef(
      &CGCClientJobSetLeaverDetected::CGCClientJobSetLeaverDetected(GCSDK::CGCClient *,unsigned long long,DOTALeaverStatus_t,ENetworkDisconnectionReason,CMsgLeaverState const&)::sv_cluster,
      "sv_cluster");
    __cxa_guard_release(&`guard variable for'CGCClientJobSetLeaverDetected::CGCClientJobSetLeaverDetected(GCSDK::CGCClient *,unsigned long long,DOTALeaverStatus_t,ENetworkDisconnectionReason,CMsgLeaverState const&)::sv_cluster);
  }
  m_pProtoBufBody = this->m_msg.m_pProtoBufBody;
  *(m_pProtoBufBody + 4) |= 1u;
  *(m_pProtoBufBody + 3) = ulSteamID;
  v18 = this->m_msg.m_pProtoBufBody;
  *(v18 + 4) |= 2u;
  *(v18 + 10) = eLeaverStatus;
  m_nValue = CGCClientJobSetLeaverDetected::CGCClientJobSetLeaverDetected(GCSDK::CGCClient *,unsigned long long,DOTALeaverStatus_t,ENetworkDisconnectionReason,CMsgLeaverState const&)::sv_cluster.m_pConVarState->m_Value.m_nValue;
  v20 = this->m_msg.m_pProtoBufBody;
  *(v20 + 4) |= 8u;
  *(v20 + 11) = m_nValue;
  v21 = this->m_msg.m_pProtoBufBody;
  v22 = *(v21 + 4);
  *(v21 + 4) |= 4u;
  if ( v22 == 0 )
  {
    v33 = operator new(0x28u);
    CMsgLeaverState::CMsgLeaverState(v33);
    *(v21 + 4) = v33;
    v22 = v33;
  }
  CMsgLeaverState::CopyFrom(v22, msgLeaverState);
  if ( eDisconnectReason != ENetworkDisconnectionReason::NETWORK_DISCONNECT_INVALID )
  {
    v23 = this->m_msg.m_pProtoBufBody;
    *(v23 + 4) |= 0x10u;
    *(v23 + 14) = eDisconnectReason;
  }
  if ( *(GDOTAGCClientSystem() + 1752) != 0 )
  {
    v24 = GDOTAGCClientSystem();
    v25 = this->m_msg.m_pProtoBufBody;
    v26 = 0;
    v27 = *(v25 + 6);
    if ( *(v24 + 1752) != 0 )
      v26 = (v24 + 1760);
    *(v25 + 4) |= 0x20u;
    if ( v27 == 0 )
    {
      v32 = operator new(0x38u);
      CMsgPoorNetworkConditions::CMsgPoorNetworkConditions(v32);
      *(v25 + 6) = v32;
      v27 = v32;
    }
    CMsgPoorNetworkConditions::CopyFrom(v27, v26);
  }
}


// CGCClientJobSetLeaverDetected::BYieldingRunJob  (line 3210, @0x00000000026a59f0, libserver.so)  // inlines: AllocProto, BYldSendMessageAndGetReply, CProtoBufMsg, CSteamID, DOTALeaverStatus_t_Name, FreeProto, Get, GetExtension<google::protobuf::internal::PrimitiveTypeTraits<int>, 5u, false>, Lock, SetFromUint64, Unlock, _M_data, c_str, leaver_state, ~CProtoBufMsg, ~basic_string
// calls: GCSDK::CProtoBufMsgBase::CProtoBufMsgBase, pthread_mutex_lock, pthread_mutex_unlock, GCSDK::CProtoBufMsgMemoryPoolBase::Alloc, LoggingSystem_IsChannelEnabled, DOTALeaverStatus_t_descriptor, google::protobuf::internal::NameOfEnum(google::protobuf::EnumDescriptor const*,int), CSteamID::Render, LoggingSystem_Log, google::protobuf::Message::ShortDebugString(void), std::string::_Rep::_M_dispose(std::allocator<char> const&), GDOTAGCClientSystem (25 total)
// strings: "LeaverDetected[%s].  Message queued with state %s\n", "  LeaverState: %s\n", "LeaverDetected[%s].  Failed to send or receive reply.  Will retry in a bit\n", "LeaverDetected[%s].  Waited %d times to be connected to GC\n", "LeaverDetected[%s].  Message acknowledged\n"
// globals: GCSDK::CProtoBufMsg<CMsgLeaverDetectedResponse>::s_bRegisteredWithMemoryPoolMgr, GCSDK::CProtoBufMsg<CMsgLeaverDetectedResponse>::s_pMemoryPool
bool __fastcall CGCClientJobSetLeaverDetected::BYieldingRunJob(
        CGCClientJobSetLeaverDetected *const this,
        void *pvStartParam)
{
  unsigned int v3; // r12d
  google::protobuf::internal *v4; // rax
  int v5; // edx
  const char *v6; // r12
  const char *v7; // rax
  int v8; // r12d
  int v9; // r12d
  const char *v10; // rax
  GCSDK::CProtoBufMsgMemoryPool<CMsgLeaverDetectedResponse> *v12; // r13
  const google::protobuf::Descriptor *v13; // rax
  uint32 Int32; // r14d
  const google::protobuf::Descriptor *v15; // rax
  uint32 v16; // eax
  GCSDK::CProtoBufMsgMemoryPoolMgr *v17; // rax
  const char *v18; // rax
  const char *v19; // rax
  char v20; // [rsp+1Fh] [rbp-81h] BYREF
  CSteamID steamID; // [rsp+20h] [rbp-80h] BYREF
  const char *v22; // [rsp+30h] [rbp-70h] BYREF
  GCSDK::CProtoBufMsg<CMsgLeaverDetectedResponse> msgResponse; // [rsp+40h] [rbp-60h] BYREF

  GCSDK::CProtoBufMsgBase::CProtoBufMsgBase(&msgResponse);
  msgResponse._vptr_CProtoBufMsgBase = &off_416FC70;
  msgResponse.m_pProtoBufBody = 0;
  if ( !GCSDK::CProtoBufMsg<CMsgLeaverDetectedResponse>::s_bRegisteredWithMemoryPoolMgr )
  {
    pthread_mutex_lock(&GCSDK::CProtoBufMsgBase::s_PoolRegMutex.m_Mutex);
    if ( !GCSDK::CProtoBufMsg<CMsgLeaverDetectedResponse>::s_bRegisteredWithMemoryPoolMgr )
    {
      v12 = operator new(0x28u);
      v13 = CMsgLeaverDetectedResponse::descriptor();
      Int32 = google::protobuf::internal::ExtensionSet::GetInt32(
                (v13->options_ + 8),
                msgpool_hard_limit.number_,
                msgpool_hard_limit.default_value_);
      v15 = CMsgLeaverDetectedResponse::descriptor();
      v16 = google::protobuf::internal::ExtensionSet::GetInt32(
              (v15->options_ + 8),
              msgpool_soft_limit.number_,
              msgpool_soft_limit.default_value_);
      GCSDK::CProtoBufMsgMemoryPoolBase::CProtoBufMsgMemoryPoolBase(v12, v16, Int32);
      v12->_vptr_CProtoBufMsgMemoryPoolBase = &off_4178690;
      GCSDK::CProtoBufMsg<CMsgLeaverDetectedResponse>::s_pMemoryPool = v12;
      v17 = GCSDK::GProtoBufMsgMemoryPoolMgr();
      GCSDK::CProtoBufMsgMemoryPoolMgr::RegisterPool(v17, v12);
      GCSDK::CProtoBufMsg<CMsgLeaverDetectedResponse>::s_bRegisteredWithMemoryPoolMgr = 1;
    }
    pthread_mutex_unlock(&GCSDK::CProtoBufMsgBase::s_PoolRegMutex.m_Mutex);
  }
  msgResponse.m_pProtoBufBody = GCSDK::CProtoBufMsgMemoryPoolBase::Alloc(GCSDK::CProtoBufMsg<CMsgLeaverDetectedResponse>::s_pMemoryPool);
  steamID.m_steamid.m_comp = *(this->m_msg.m_pProtoBufBody + 3);
  if ( LoggingSystem_IsChannelEnabled(LOG_SERVER, 1) != 0 )
  {
    v3 = *(this->m_msg.m_pProtoBufBody + 10);
    v4 = DOTALeaverStatus_t_descriptor();
    v6 = *google::protobuf::internal::NameOfEnum(v4, v3, v5);
    v7 = CSteamID::Render(&steamID);
    LoggingSystem_Log(LOG_SERVER, 1, "LeaverDetected[%s].  Message queued with state %s\n", v7, v6);
  }
  if ( LoggingSystem_IsChannelEnabled(LOG_SERVER, 1) != 0 )
  {
    google::protobuf::Message::ShortDebugString(&v22);
    LoggingSystem_Log(LOG_SERVER, 1, "  LeaverState: %s\n", v22);
    std::string::_Rep::_M_dispose(v22 - 24, &v20);
  }
  v8 = 0;
  while ( *(GDOTAGCClientSystem() + 333) != 0 )
  {
    if ( v8 == 600 )
      goto LABEL_12;
    GCSDK::CJob::BYieldingWaitTime(this, 0xF4240u);
    ++v8;
  }
  if ( v8 != 0 )
  {
LABEL_12:
    if ( LoggingSystem_IsChannelEnabled(LOG_SERVER, 1) != 0 )
    {
      v18 = CSteamID::Render(&steamID);
      LoggingSystem_Log(LOG_SERVER, 1, "LeaverDetected[%s].  Waited %d times to be connected to GC\n", v18, v8);
    }
  }
  v9 = 10;
  while ( GCSDK::CGCClient::YldSendMessageAndGetReplyEx(
            this->m_pGCClient,
            &this->m_msg,
            &msgResponse,
            0x1BAFu,
            GCSDK::EExpectedReply::kExpectedReply_Optional,
            0) != GCSDK::ESendMessageAndGetReply::k_ESendMessageAndGetReply_OK )
  {
    if ( LoggingSystem_IsChannelEnabled(LOG_SERVER, 1) != 0 )
    {
      v10 = CSteamID::Render(&steamID);
      LoggingSystem_Log(
        LOG_SERVER,
        1,
        "LeaverDetected[%s].  Failed to send or receive reply.  Will retry in a bit\n",
        v10);
    }
    GCSDK::CJob::BYieldingWaitTime(this, 0xF4240u);
    if ( --v9 == 0 )
      goto LABEL_19;
  }
  if ( LoggingSystem_IsChannelEnabled(LOG_SERVER, 1) != 0 )
  {
    v19 = CSteamID::Render(&steamID);
    LoggingSystem_Log(LOG_SERVER, 1, "LeaverDetected[%s].  Message acknowledged\n", v19);
  }
LABEL_19:
  msgResponse._vptr_CProtoBufMsgBase = &off_416FC70;
  if ( msgResponse.m_pProtoBufBody != 0 )
  {
    GCSDK::CProtoBufMsgMemoryPoolBase::Free(
      GCSDK::CProtoBufMsg<CMsgLeaverDetectedResponse>::s_pMemoryPool,
      msgResponse.m_pProtoBufBody);
    msgResponse.m_pProtoBufBody = 0;
  }
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(&msgResponse);
  return 1;
}


// CDOTA_PlayerResource::SetLeaverStatus  (line 3249, @0x000000000265f230, libserver.so)  // inlines: CSteamID, DOTAGameRules, DOTALeaverStatus_t_Name, GetDisconnectionReason, GetGameMode, GetGameTime, GetIdleTime, GetLeaverStatus, GetLobby, GetPoorNetworkConditionsDetected, IsAddOnGame, IsRealPlayerTeam, IsValidPlayerID, IsValidTeamPlayerID, SetFromUint64, State_IsAfter, State_IsAfterWaitingForPlayers, State_Order, _M_data, c_str, set_first_blood_happened, set_has_first_blood_happened, set_has_mass_disconnect, set_mass_disconnect
// calls: GDOTAGCClientSystem, CDOTALobby::GetCurrentLeaverState, LoggingSystem_IsChannelEnabled, CDOTA_PlayerResource::GetTeam, CDOTA_PlayerResource::GetSteamID, CDOTALobby::FindFullMemberDetails, CDOTALobby::CalculateLeaverActionsForMember, GCClientSystem, operator new, CGCClientJobSetLeaverDetected::CGCClientJobSetLeaverDetected, GCSDK::CJob::StartJob, CDOTA_PlayerResource::GetPlayer (21 total)
// callers: CDOTAGamerules::OnLobbyUpdated, CDOTAGamerules::CheckIdleAndDisconnectedPlayers, CDOTAGamerules::ClientDisconnected, CDOTA_PlayerResource::OnFullyJoinedServer
// strings: "PR:SetLeaverStatus %d:%s %s\n", "  Leaver state has first blood marked, but they have not picked a hero.  Acting as if the, "  Player has been idle for %.1f\n", "  Last active time of %d was after first blood time of %d.\n", "  Last active time of %d was before first blood time of %d!  Marking player as leaving BE
// globals: DOTAGameRules_Common::State_Order(DOTA_GameState)::STATE_ORDERING
void __fastcall CDOTA_PlayerResource::SetLeaverStatus(
        CDOTA_PlayerResource *const this,
        int iPlayerID,
        DOTALeaverStatus_t iLeaverStatus)
{
  __int64 v5; // r13
  _DWORD *v7; // r12
  int v8; // ecx
  unsigned int v9; // ecx
  char *v10; // r13
  int Team; // eax
  int v12; // eax
  uint64 SteamID; // rax
  const CDOTALobbyMember *FullMemberDetails; // r8
  char v15; // cl
  CDOTAGCServerSystem *v16; // rax
  char v17; // dl
  unsigned int v18; // eax
  __int64 v19; // rax
  int v20; // edx
  uint32 v21; // eax
  bool v22; // cc
  ENetworkDisconnectionReason v23; // r14d
  CGCClientSystem *v24; // r12
  CGCClientJobSetLeaverDetected *v25; // rbx
  CDOTAPlayer *Player; // rax
  __int64 v27; // rcx
  __int64 v28; // r8
  float v29; // xmm0_4
  int v30; // eax
  google::protobuf::internal *v31; // rax
  int v32; // edx
  const char *v33; // rax
  float DOTATime; // xmm0_4
  int v35; // eax
  __int64 v36; // rdx
  int v37; // eax
  float v38; // xmm0_4
  char v39; // [rsp+Ch] [rbp-64h]
  char v40; // [rsp+10h] [rbp-60h]
  const CDOTALobbyMember *v41; // [rsp+10h] [rbp-60h]
  AccountID_t nAccountID[2]; // [rsp+18h] [rbp-58h]
  const CDOTALobbyMember *flIdleTime; // [rsp+20h] [rbp-50h]
  char flIdleTimee; // [rsp+20h] [rbp-50h]
  float flIdleTimea; // [rsp+20h] [rbp-50h]
  int flIdleTimeb; // [rsp+20h] [rbp-50h]
  const char *flIdleTimec; // [rsp+20h] [rbp-50h]
  CDOTAGCServerSystem *flIdleTimed; // [rsp+20h] [rbp-50h]
  CDOTALobby *v49; // [rsp+28h] [rbp-48h]
  CSteamID v50; // [rsp+30h] [rbp-40h] BYREF

  if ( iPlayerID < 0 )
    return;
  if ( iPlayerID >= *(this + 194) )
    return;
  v5 = iPlayerID;
  v7 = (this + 4 * iPlayerID);
  v8 = v7[4372];
  if ( v8 == iLeaverStatus )
    return;
  v9 = v8 - 2;
  if ( v9 <= 6 && ((1LL << v9) & 0x77) != 0 )
    return;
  v49 = *(GDOTAGCClientSystem() + 260);
  v10 = this + 40 * v5 + 17584;
  if ( iLeaverStatus != DOTALeaverStatus_t::DOTA_LEAVER_NONE )
  {
    if ( v7[4372] == 0 || (v10[16] & 2) == 0 )
    {
      (*(*v10 + 32LL))(v10);
      if ( v49 != 0 )
        CDOTALobby::GetCurrentLeaverState(v49, v10);
    }
  }
  else
  {
    (*(*v10 + 32LL))(v10);
  }
  v7[4372] = iLeaverStatus;
  if ( LoggingSystem_IsChannelEnabled(LOG_SERVER, 1) != 0 )
  {
    v31 = DOTALeaverStatus_t_descriptor();
    flIdleTimec = *google::protobuf::internal::NameOfEnum(v31, iLeaverStatus, v32);
    v50.m_steamid.m_comp = CDOTA_PlayerResource::GetSteamID(this, iPlayerID);
    v33 = CSteamID::Render(&v50);
    LoggingSystem_Log(LOG_SERVER, 1, "PR:SetLeaverStatus %d:%s %s\n", iPlayerID, v33, flIdleTimec);
  }
  if ( iLeaverStatus == DOTALeaverStatus_t::DOTA_LEAVER_NONE )
  {
    v7[2988] = 0;
    return;
  }
  if ( iLeaverStatus != DOTALeaverStatus_t::DOTA_LEAVER_AFK )
  {
    if ( v7[2988] == 0 )
    {
      DOTATime = CDOTAGamerules::GetDOTATime(g_pGameRules, 0, 0, 0.0);
      v35 = 1;
      if ( DOTATime >= 1.0 )
        v35 = CDOTAGamerules::GetDOTATime(g_pGameRules, 0, 0, 0.0);
      v7[2988] = v35;
    }
    goto LABEL_17;
  }
  if ( v10[33] != 0 && !CDOTA_PlayerResource::HasSelectedHero(this, iPlayerID) )
  {
    if ( LoggingSystem_IsChannelEnabled(LOG_SERVER, 1) != 0 )
      LoggingSystem_Log(
        LOG_SERVER,
        1,
        "  Leaver state has first blood marked, but they have not picked a hero.  Acting as if they abandoned before first blood.\n");
    *(v10 + 4) |= 8u;
    v10[33] = 0;
  }
  Player = CDOTA_PlayerResource::GetPlayer(this, iPlayerID);
  if ( Player != 0 )
  {
    if ( g_pGameRules != 0 )
    {
      if ( *&g_pGameRules[6].m_szQuestName[28] != 5 )
      {
        flIdleTimea = 0.0;
LABEL_53:
        if ( LoggingSystem_IsChannelEnabled(LOG_SERVER, 1) != 0 )
          LoggingSystem_Log(LOG_SERVER, 1, "  Player has been idle for %.1f\n", v27, v28, &g_pGameRules, flIdleTimea);
        v29 = CDOTAGamerules::GetDOTATime(g_pGameRules, 0, 0, 0.0);
        v30 = 0;
        if ( (v29 - flIdleTimea) >= 0.0 )
          v30 = (CDOTAGamerules::GetDOTATime(g_pGameRules, 0, 0, 0.0) - flIdleTimea);
        v7[2988] = v30;
        if ( v10[33] != 0 && g_pGameRules[61].m_szQuestName[114] == 0 )
        {
          flIdleTimeb = *&g_pGameRules[61].m_szQuestName[116];
          if ( v30 >= flIdleTimeb )
          {
            if ( LoggingSystem_IsChannelEnabled(LOG_SERVER, 1) != 0 )
              LoggingSystem_Log(
                LOG_SERVER,
                1,
                "  Last active time of %d was after first blood time of %d.\n",
                v7[2988],
                flIdleTimeb);
          }
          else
          {
            if ( LoggingSystem_IsChannelEnabled(LOG_SERVER, 1) != 0 )
              LoggingSystem_Log(
                LOG_SERVER,
                1,
                "  Last active time of %d was before first blood time of %d!  Marking player as leaving BEFORE first blood\n",
                v7[2988],
                flIdleTimeb);
            *(v10 + 4) |= 8u;
            v10[33] = 0;
          }
        }
        goto LABEL_17;
      }
      v38 = *&g_pGameRules[18].m_szQuestName[20];
    }
    else
    {
      v38 = 0.0;
    }
    flIdleTimea = v38 - Player->m_flLastOrderTime;
    goto LABEL_53;
  }
LABEL_17:
  Team = CDOTA_PlayerResource::GetTeam(this, iPlayerID);
  if ( (Team - 6) > 7 && (Team - 2) > 1 )
    return;
  if ( g_pGameRules == 0 )
    return;
  v12 = *&g_pGameRules[6].m_szQuestName[68];
  if ( v12 == 15 || v12 == 19 )
    return;
  SteamID = CDOTA_PlayerResource::GetSteamID(this, iPlayerID);
  FullMemberDetails = 0;
  *nAccountID = SteamID;
  if ( v49 != 0 )
    FullMemberDetails = CDOTALobby::FindFullMemberDetails(v49, SteamID);
  if ( (iLeaverStatus - 2) <= 6 && ((1LL << (iLeaverStatus - 2)) & 0x77) != 0 )
  {
    v15 = 1;
  }
  else
  {
    v15 = 0;
    if ( g_pGameRules == 0 || *&g_pGameRules[6].m_szQuestName[28] != 5 )
      goto LABEL_30;
    v36 = 0;
    v37 = 0;
    do
    {
      if ( *(this + 194) > v36 )
        v37 -= (*(this + v36 + 4372) == 0) - 1;
      ++v36;
    }
    while ( v36 != 24 );
    v15 = 0;
    if ( v37 <= 4 )
      goto LABEL_30;
  }
  v40 = v15;
  flIdleTime = FullMemberDetails;
  v16 = GDOTAGCClientSystem();
  FullMemberDetails = flIdleTime;
  v17 = *(v16 + 1752);
  v15 = v40;
  if ( v17 == 0 )
  {
    v39 = v40;
    v41 = flIdleTime;
    flIdleTimed = v16;
    CDOTAGCServerSystem::CheckPoorNetworkConditions(v16, 1);
    v15 = v39;
    FullMemberDetails = v41;
    v17 = *(flIdleTimed + 1752);
  }
  *(v10 + 4) |= 0x20u;
  v10[35] = v17;
LABEL_30:
  v18 = 0;
  if ( FullMemberDetails != 0 && (v10[16] & 2) != 0 )
  {
    v19 = *(v10 + 7);
    v20 = 0;
    if ( v19 <= 0xA )
      v20 = DOTAGameRules_Common::State_Order(DOTA_GameState)::STATE_ORDERING[v19];
    v18 = 0;
    if ( dword_491AD04 < v20 && iLeaverStatus != DOTALeaverStatus_t::DOTA_LEAVER_NEVER_CONNECTED )
    {
      flIdleTimee = v15;
      v21 = CDOTALobby::CalculateLeaverActionsForMember(v49, FullMemberDetails, v10);
      v15 = flIdleTimee;
      v18 = v21 & 0xFFFFFFFC;
    }
  }
  if ( v15 != 0 && ((v49 == 0 || *(v49 + 88) == 0) && *(this + 17484) == 0 || v18 != 0) )
  {
    v22 = iPlayerID < *(this + 212);
    *(this + 17484) = 1;
    if ( v22 )
      v23 = v7[3754];
    else
      v23 = ENetworkDisconnectionReason::NETWORK_DISCONNECT_INVALID;
    v24 = GCClientSystem();
    v25 = operator new(0x168u);
    CGCClientJobSetLeaverDetected::CGCClientJobSetLeaverDetected(v25, (v24 + 24), *nAccountID, iLeaverStatus, v23, v10);
    GCSDK::CJob::StartJob(v25, 0);
  }
}


// CDOTA_PlayerResource::GetLeaverStatus  (line 3415, @0x000000000265f8a0, libserver.so)  // inlines: IsValidTeamPlayerID
// callers: CDOTAGamerules::OnLobbyUpdated, CDOTAGamerules::ClientMsg_Pause, CDOTAGamerules::CheckIdleAndDisconnectedPlayers, CDOTA_AutoSaveGameSystem::FrameUpdatePostEntityThink, CDOTAGamerules::UpdateAutomaticSurrender, CDOTA_OGS::LogHeroResults, CDOTA_OGS::LogMatchSnapshot, CDOTAGCServerSystem::FillMatchDetailsForTeam
DOTALeaverStatus_t __fastcall CDOTA_PlayerResource::GetLeaverStatus(CDOTA_PlayerResource *const this, int iPlayerID)
{
  DOTALeaverStatus_t result; // eax

  result = DOTALeaverStatus_t::DOTA_LEAVER_NONE;
  if ( iPlayerID >= 0 && iPlayerID < *(this + 194) )
    return *(this + iPlayerID + 4372);
  return result;
}


// CDOTA_PlayerResource::GetLeaverState  (line 3425, @0x000000000265f8c0, libserver.so)  // inlines: IsValidTeamPlayerID
// callers: CDOTAGamerules::NotifyLeaverStatus, CDOTAGCServerSystem::CheckUpdateConnectedPlayers
const CMsgLeaverState *__fastcall CDOTA_PlayerResource::GetLeaverState(CDOTA_PlayerResource *const this, int iPlayerID)
{
  const CMsgLeaverState *result; // rax

  if ( iPlayerID < 0 )
    return 0;
  if ( iPlayerID >= *(this + 194) )
    return 0;
  result = (this + 40 * iPlayerID + 17584);
  if ( (*(this + 40 * iPlayerID + 17600) & 2) == 0 )
    return 0;
  return result;
}


// CDOTA_PlayerResource::SetConnectionState  (line 3445, @0x000000000265f900, libserver.so)  // inlines: CSteamID, DOTAConnectionState_t_Name, ENetworkDisconnectionReason_Name, Element, Get, IsValidPlayerID, NetworkStateChanged, Set, SetFromUint64, _M_data, c_str, operator CEntityInstance*, operator=<DOTAConnectionState_t>, operator==<DOTAConnectionState_t>, operator[]
// calls: LoggingSystem_IsChannelEnabled, ENetworkDisconnectionReason_descriptor, google::protobuf::internal::NameOfEnum(google::protobuf::EnumDescriptor const*,int), DOTAConnectionState_t_descriptor, CDOTA_PlayerResource::GetSteamID, CSteamID::Render, LoggingSystem_Log
// callers: CDOTAGamerules::ClientConnected, CDOTAGamerules::OnLobbyUpdated, CDOTAGamerules::CheckIdleAndDisconnectedPlayers, CDOTAGamerules::CalcNumLoadingPlayersAndFailure, CDOTAGamerules::WaitForPlayersFailure, CDOTAGamerules::PlayerSpawn, CDOTAGamerules::ClientDisconnected, CDOTA_PlayerResource::OnFullyJoinedServer
// strings: "PR:SetConnectionState %d:%s %s %s\n"
void __fastcall CDOTA_PlayerResource::SetConnectionState(
        CDOTA_PlayerResource *const this,
        int iPlayerID,
        DOTAConnectionState_t iConnectionState,
        int iReason)
{
  __int64 v7; // r11
  __int64 v9; // r15
  char IsChannelEnabled; // al
  __int64 v11; // r11
  __int64 v12; // r15
  _QWORD *v13; // rdi
  google::protobuf::internal *v14; // rax
  int v15; // edx
  google::protobuf::internal *v16; // rax
  int v17; // edx
  const char *v18; // rax
  __int64 v19; // [rsp+8h] [rbp-58h]
  const char *v20; // [rsp+10h] [rbp-50h]
  __int64 v21; // [rsp+18h] [rbp-48h]
  __int64 v22; // [rsp+18h] [rbp-48h]
  const char *v23; // [rsp+18h] [rbp-48h]
  CSteamID v24; // [rsp+20h] [rbp-40h] BYREF

  if ( iPlayerID >= 0 && iPlayerID < *(this + 212) )
  {
    if ( iConnectionState == DOTAConnectionState_t::DOTA_CONNECTION_STATE_ABANDONED )
    {
      v7 = iPlayerID;
      iReason = 2;
      v9 = 72LL * iPlayerID;
      if ( *(*(this + 107) + v9 + 52) == 3 )
        iReason = *(this + iPlayerID + 3754);
    }
    else
    {
      v7 = iPlayerID;
      v9 = 72LL * iPlayerID;
    }
    v21 = v7;
    IsChannelEnabled = LoggingSystem_IsChannelEnabled(LOG_SERVER, 1);
    v11 = v21;
    if ( IsChannelEnabled != 0 )
    {
      v19 = v21;
      v14 = ENetworkDisconnectionReason_descriptor();
      v20 = *google::protobuf::internal::NameOfEnum(v14, iReason, v15);
      v16 = DOTAConnectionState_t_descriptor();
      v23 = *google::protobuf::internal::NameOfEnum(v16, iConnectionState, v17);
      v24.m_steamid.m_comp = CDOTA_PlayerResource::GetSteamID(this, iPlayerID);
      v18 = CSteamID::Render(&v24);
      LoggingSystem_Log(LOG_SERVER, 1, "PR:SetConnectionState %d:%s %s %s\n", iPlayerID, v18, v23, v20);
      v11 = v19;
    }
    v12 = *(this + 107) + v9;
    if ( iConnectionState != *(v12 + 52) )
    {
      v13 = *(v12 + 8);
      if ( v13 != 0 && (*(v13[1] + 49LL) & 4) == 0 && *(v12 + 16) != 0xFFFF )
      {
        v22 = v11;
        (*(*v13 + 176LL))(v13, 52, 0xFFFFFFFFLL, *(v12 + 16));
        v11 = v22;
      }
      *(v12 + 52) = iConnectionState;
    }
    *(this + v11 + 3754) = iReason;
  }
}


// CDOTA_PlayerResource::GetConnectionState  (line 3473, @0x0000000002656340, libserver.so)  // inlines: Element, IsValidPlayerID, operator[]
// callers: CDOTAGamerules::CheckIdleAndDisconnectedPlayers, CDOTAGamerules::AllDraftGetDataForPhase, CDOTAGamerules::CalcNumLoadingPlayersAndFailure, CDOTAGamerules::DistributeAbandonedPlayerGold, CDOTAGamerules::WaitForPlayersFailure, CDOTAGamerules::Think, CDOTA_PlayerResource::HasPlayerAbandoned, CDOTA_TeamCommander::UpdateDisabledBots, CDOTA_BaseNPC_Hero::IsOwnerDisconnectedButNotAbandoned, CDOTA_BaseNPC::UpdateControllableMask
DOTAConnectionState_t __fastcall CDOTA_PlayerResource::GetConnectionState(
        CDOTA_PlayerResource *const this,
        int iPlayerID)
{
  DOTAConnectionState_t result; // eax

  result = DOTAConnectionState_t::DOTA_CONNECTION_STATE_UNKNOWN;
  if ( iPlayerID >= 0 && iPlayerID < *(this + 212) )
    return *(*(this + 107) + 72LL * iPlayerID + 52);
  return result;
}


// CDOTA_PlayerResource::HasPlayerAbandoned  (line 3482, @0x000000000265fcf0, libserver.so)
// calls: CDOTA_PlayerResource::GetConnectionState, CDOTA_PlayerResource::IsAFK
// callers: DOTA_ExecuteOrders, CDOTA_BaseNPC_Hero::HasOwnerAbandoned
bool __fastcall CDOTA_PlayerResource::HasPlayerAbandoned(CDOTA_PlayerResource *const this, int iPlayerID)
{
  return CDOTA_PlayerResource::GetConnectionState(this, iPlayerID) > DOTAConnectionState_t::DOTA_CONNECTION_STATE_DISCONNECTED
      || CDOTA_PlayerResource::IsAFK(this, iPlayerID);
}


// CDOTA_PlayerResource::GetDisconnectionReason  (line 3494, @0x000000000265fca0, libserver.so)  // inlines: IsValidPlayerID
// callers: CDOTAGCServerSystem::CheckPoorNetworkConditions, CDOTAGCServerSystem::CheckUpdateConnectedPlayers
int __fastcall CDOTA_PlayerResource::GetDisconnectionReason(CDOTA_PlayerResource *const this, int iPlayerID)
{
  int result; // eax

  result = 0;
  if ( iPlayerID >= 0 && iPlayerID < *(this + 212) )
    return *(this + iPlayerID + 3754);
  return result;
}


// CDOTA_PlayerResource::IsAFK  (line 3503, @0x000000000265fcc0, libserver.so)  // inlines: Element, IsValidTeamPlayerID, operator[]
// callers: CDOTAGamerules::DistributeAbandonedPlayerGold, CDOTA_PlayerResource::HasPlayerAbandoned
bool __fastcall CDOTA_PlayerResource::IsAFK(CDOTA_PlayerResource *const this, int iPlayerID)
{
  bool result; // al

  result = 0;
  if ( iPlayerID >= 0 && iPlayerID < *(this + 194) )
    return *(*(this + 98) + 200LL * iPlayerID + 56);
  return result;
}


// CDOTA_PlayerResource::AddAvailableTeamGold  (line 3513, @0x000000000265fd30, libserver.so)
// callers: CDOTAHeroList::DistributeFarmClaim
void __fastcall CDOTA_PlayerResource::AddAvailableTeamGold(
        CDOTA_PlayerResource *const this,
        float a2,
        float flBounty,
        int nTeamIdx)
{
  *(this + (nTeamIdx != 2) + 4822) = a2 + *(this + (nTeamIdx != 2) + 4822);
}


// CDOTA_PlayerResource::GetTotalGoldSpent  (line 3520, @0x0000000002653e90, libserver.so)  // inlines: IsValidTeamPlayerID
// callers: CDOTAGamerules::State_Enter_POST_GAME, CDOTAGCServerSystem::FillMatchDetailsForTeam
int __fastcall CDOTA_PlayerResource::GetTotalGoldSpent(CDOTA_PlayerResource *const this, int iPlayerID)
{
  int result; // eax

  result = 0;
  if ( iPlayerID >= 0 && iPlayerID < *(this + 194) )
    return *(this + iPlayerID + 3108) + *(this + iPlayerID + 3132);
  return result;
}


// CDOTA_PlayerResource::GetGoldSpentOnConsumables  (line 3530, @0x0000000002653ec0, libserver.so)  // inlines: IsValidTeamPlayerID
// callers: CDOTA_OGS::LogItemEvent, CDOTA_OGS::LogMatchSnapshot
int __fastcall CDOTA_PlayerResource::GetGoldSpentOnConsumables(CDOTA_PlayerResource *const this, int iPlayerID)
{
  int result; // eax

  result = 0;
  if ( iPlayerID >= 0 && iPlayerID < *(this + 194) )
    return *(this + iPlayerID + 3108);
  return result;
}


// CDOTA_PlayerResource::GetGoldSpentOnItems  (line 3540, @0x0000000002653ee0, libserver.so)  // inlines: IsValidTeamPlayerID
// callers: CDOTA_OGS::LogItemEvent, CDOTA_OGS::LogMatchSnapshot
int __fastcall CDOTA_PlayerResource::GetGoldSpentOnItems(CDOTA_PlayerResource *const this, int iPlayerID)
{
  int result; // eax

  result = 0;
  if ( iPlayerID >= 0 && iPlayerID < *(this + 194) )
    return *(this + iPlayerID + 3132);
  return result;
}


// CDOTA_PlayerResource::GetGoldLostToDeath  (line 3550, @0x0000000002653f00, libserver.so)  // inlines: IsValidTeamPlayerID
// callers: CDOTA_OGS::LogItemEvent, CDOTA_OGS::LogMatchSnapshot
int __fastcall CDOTA_PlayerResource::GetGoldLostToDeath(CDOTA_PlayerResource *const this, int iPlayerID)
{
  int result; // eax

  result = 0;
  if ( iPlayerID >= 0 && iPlayerID < *(this + 194) )
    return *(this + iPlayerID + 3180);
  return result;
}


// CDOTA_PlayerResource::GetGoldSpentOnBuybacks  (line 3560, @0x0000000002653f20, libserver.so)  // inlines: IsValidTeamPlayerID
// callers: CDOTA_OGS::LogItemEvent, CDOTA_OGS::LogMatchSnapshot
int __fastcall CDOTA_PlayerResource::GetGoldSpentOnBuybacks(CDOTA_PlayerResource *const this, int iPlayerID)
{
  int result; // eax

  result = 0;
  if ( iPlayerID >= 0 && iPlayerID < *(this + 194) )
    return *(this + iPlayerID + 3156);
  return result;
}


// CDOTA_PlayerResource::GetGoldPerMin  (line 3570, @0x0000000002663310, libserver.so)  // inlines: DOTAGameRules, GetTotalEarnedGold, IsValidTeamPlayerID
// calls: CDOTAGamerules::GetDOTATime, CDOTA_PlayerResource::GetTeamDataForPlayer
// callers: CDOTA_RealtimeCombatAnalyzer::EvaluateGameState, CDOTA_CombatLog::AddHeroLevelUpEvent, CDOTA_CombatLog::AddEndGameStatsEvent, CDOTA_CombatLog::DoCombatAnalysis, RecordSocialFeedPostGameMatchEvents, CDOTAHeroList::GiveAdditionalAssists, CDOTA_BaseNPC_Hero::KilledHero, CDOTAHeroList::GivePlayerFullBountyGold, CDOTAHeroList::GiveKillerBountyGold, CDOTAGCServerSystem::PopulateFantasyStats, CDOTAGCServerSystem::UpdateRealtimeGameState, CDOTA_Item_Ward_Dispenser::OnSpellStart (13 total)
// globals: g_pDOTAPlayerResource
float __fastcall CDOTA_PlayerResource::GetGoldPerMin(CDOTA_PlayerResource *const this, int iPlayerID)
{
  float result; // xmm0_4
  float DOTATime; // xmm1_4
  float v5; // xmm1_4
  DataTeamPlayer_t *TeamDataForPlayer; // rax
  float m_Value; // xmm0_4
  float flDotaMinutes; // [rsp+Ch] [rbp-14h]

  if ( iPlayerID < 0 || iPlayerID >= *(this + 194) )
    return 0.0;
  result = 0.0;
  if ( g_pGameRules != 0 )
  {
    DOTATime = CDOTAGamerules::GetDOTATime(g_pGameRules, 0, 0, 0.0);
    result = 0.0;
    v5 = DOTATime / 60.0;
    if ( v5 > 0.0 )
    {
      flDotaMinutes = v5;
      TeamDataForPlayer = CDOTA_PlayerResource::GetTeamDataForPlayer(g_pDOTAPlayerResource, iPlayerID);
      m_Value = 0.0;
      if ( TeamDataForPlayer != 0 )
        m_Value = TeamDataForPlayer->m_iTotalEarnedGold.m_Value;
      return m_Value / flDotaMinutes;
    }
  }
  return result;
}


// CDOTA_PlayerResource::GetXPPerMin  (line 3587, @0x00000000026633c0, libserver.so)  // inlines: DOTAGameRules, GetTotalEarnedXP, IsValidTeamPlayerID
// calls: CDOTAGamerules::GetDOTATime, CDOTA_PlayerResource::GetTeamDataForPlayer
// callers: CDOTA_RealtimeCombatAnalyzer::EvaluateGameState, CDOTA_CombatLog::AddHeroLevelUpEvent, CDOTA_CombatLog::AddEndGameStatsEvent, CDOTA_CombatLog::DoCombatAnalysis, CDOTAHeroList::GiveAdditionalAssists, CDOTA_BaseNPC_Hero::KilledHero, CDOTAHeroList::GivePlayerFullBountyGold, CDOTAHeroList::GiveKillerBountyGold, CDOTAGCServerSystem::UpdateRealtimeGameState, CDOTA_Item_Ward_Dispenser::OnSpellStart, CDOTA_Item_ObserverWard::OnSpellStart
// globals: g_pDOTAPlayerResource
float __fastcall CDOTA_PlayerResource::GetXPPerMin(CDOTA_PlayerResource *const this, int iPlayerID)
{
  float result; // xmm0_4
  float DOTATime; // xmm1_4
  float v5; // xmm1_4
  DataTeamPlayer_t *TeamDataForPlayer; // rax
  float m_Value; // xmm0_4
  float flDotaMinutes; // [rsp+Ch] [rbp-14h]

  if ( iPlayerID < 0 || iPlayerID >= *(this + 194) )
    return 0.0;
  result = 0.0;
  if ( g_pGameRules != 0 )
  {
    DOTATime = CDOTAGamerules::GetDOTATime(g_pGameRules, 0, 0, 0.0);
    result = 0.0;
    v5 = DOTATime / 60.0;
    if ( v5 > 0.0 )
    {
      flDotaMinutes = v5;
      TeamDataForPlayer = CDOTA_PlayerResource::GetTeamDataForPlayer(g_pDOTAPlayerResource, iPlayerID);
      m_Value = 0.0;
      if ( TeamDataForPlayer != 0 )
        m_Value = TeamDataForPlayer->m_iTotalEarnedXP.m_Value;
      return m_Value / flDotaMinutes;
    }
  }
  return result;
}


// CDOTA_PlayerResource::GetTeamFightParticipation  (line 3603, @0x000000000265fd60, libserver.so)  // inlines: Element, IsValidTeamPlayerID, operator[]
// callers: CDOTAGCServerSystem::PopulateFantasyStats
float __fastcall CDOTA_PlayerResource::GetTeamFightParticipation(CDOTA_PlayerResource *const this, int iPlayerID)
{
  if ( iPlayerID < 0 || iPlayerID >= *(this + 194) )
    return 0.0;
  else
    return *(*(this + 98) + 200LL * iPlayerID + 184);
}


// CDOTA_PlayerResource::GetAegisPickups  (line 3613, @0x0000000002653f40, libserver.so)  // inlines: IsValidTeamPlayerID
// callers: CDOTA_OGS::LogMatchSnapshot
int __fastcall CDOTA_PlayerResource::GetAegisPickups(CDOTA_PlayerResource *const this, int iPlayerID)
{
  int result; // eax

  result = 0;
  if ( iPlayerID >= 0 && iPlayerID < *(this + 194) )
    return *(this + iPlayerID + 3228);
  return result;
}


// CDOTA_PlayerResource::AddAegisPickup  (line 3623, @0x0000000002653f60, libserver.so)  // inlines: IsValidTeamPlayerID
// callers: CDOTA_Item_Aegis::OnEquip
void __fastcall CDOTA_PlayerResource::AddAegisPickup(CDOTA_PlayerResource *const this, int iPlayerID)
{
  if ( iPlayerID >= 0 && iPlayerID < *(this + 194) )
    ++*(this + iPlayerID + 3228);
}


// CDOTA_PlayerResource::GetRunePickups  (line 3633, @0x0000000002662fa0, libserver.so)
// calls: CDOTA_PlayerResource::GetTeamDataForPlayer
// callers: CDOTA_CombatLog::AddPickupRuneEvent, CDOTA_CombatLog::GenerateExperimentalTimedStats, CDOTA_OGS::LogMatchSnapshot, CDOTAGCServerSystem::PopulateFantasyStats
int __fastcall CDOTA_PlayerResource::GetRunePickups(CDOTA_PlayerResource *const this, int iPlayerID)
{
  DataTeamPlayer_t *TeamDataForPlayer; // rax

  TeamDataForPlayer = CDOTA_PlayerResource::GetTeamDataForPlayer(this, iPlayerID);
  if ( TeamDataForPlayer != 0 )
    return TeamDataForPlayer->m_iRunePickups.m_Value;
  else
    return 0;
}


// CDOTA_PlayerResource::AddRunePickup  (line 3644, @0x0000000002665580, libserver.so)  // inlines: Get, NetworkStateChanged, Set, operator CEntityInstance*, operator++, operator+=<int>
// calls: CDOTA_PlayerResource::GetTeamDataForPlayer
// callers: CDOTA_BaseNPC::HandleRunePickup
void __fastcall CDOTA_PlayerResource::AddRunePickup(CDOTA_PlayerResource *const this, int iPlayerID)
{
  DataTeamPlayer_t *TeamDataForPlayer; // rax
  CEntityInstance *m_pObj; // rdi
  int v4; // ebx
  DataTeamPlayer_t *pTeamData; // [rsp+8h] [rbp-18h]

  TeamDataForPlayer = CDOTA_PlayerResource::GetTeamDataForPlayer(this, iPlayerID);
  if ( TeamDataForPlayer != 0 )
  {
    m_pObj = TeamDataForPlayer->__m_pChainEntity.m_pObj;
    v4 = TeamDataForPlayer->m_iRunePickups.m_Value + 1;
    if ( m_pObj != 0 && (m_pObj->m_pEntity->m_flags & 0x400) == 0 && TeamDataForPlayer->__m_PathIndex.m_Value != -1 )
    {
      pTeamData = TeamDataForPlayer;
      (*(m_pObj->_vptr_IHandleEntity + 22))(m_pObj, 160, 0xFFFFFFFFLL, TeamDataForPlayer->__m_PathIndex.m_Value);
      TeamDataForPlayer = pTeamData;
    }
    TeamDataForPlayer->m_iRunePickups.m_Value = v4;
  }
}


// CDOTA_PlayerResource::GetNumConsumablesPurchased  (line 3655, @0x0000000002656710, libserver.so)
// calls: CDOTA_PlayerResource::IsValidTeamPlayer
// callers: CDOTA_OGS::LogItemEvent
int __fastcall CDOTA_PlayerResource::GetNumConsumablesPurchased(CDOTA_PlayerResource *const this, int iPlayerID)
{
  __int64 v2; // r12
  bool IsValidTeamPlayer; // al
  int v5; // edx

  v2 = iPlayerID;
  IsValidTeamPlayer = CDOTA_PlayerResource::IsValidTeamPlayer(this, iPlayerID);
  v5 = 0;
  if ( IsValidTeamPlayer )
    return *(this + v2 + 3276);
  return v5;
}


// CDOTA_PlayerResource::GetNumItemsPurchased  (line 3665, @0x0000000002653f80, libserver.so)  // inlines: IsValidTeamPlayerID
// callers: CDOTA_OGS::LogItemEvent
int __fastcall CDOTA_PlayerResource::GetNumItemsPurchased(CDOTA_PlayerResource *const this, int iPlayerID)
{
  int result; // eax

  result = 0;
  if ( iPlayerID >= 0 && iPlayerID < *(this + 194) )
    return *(this + iPlayerID + 3300);
  return result;
}


// CDOTA_PlayerResource::GetTimeOfLastItemPurchase  (line 3675, @0x0000000002653fa0, libserver.so)  // inlines: IsValidTeamPlayerID
// callers: CDOTA_OGS::LogItemEvent
float __fastcall CDOTA_PlayerResource::GetTimeOfLastItemPurchase(CDOTA_PlayerResource *const this, int iPlayerID)
{
  if ( iPlayerID < 0 || iPlayerID >= *(this + 194) )
    return 0.0;
  else
    return *(this + iPlayerID + 3468);
}


// CDOTA_PlayerResource::GetTimeOfLastConsumablePurchase  (line 3685, @0x0000000002653fd0, libserver.so)  // inlines: IsValidTeamPlayerID
// callers: CDOTA_OGS::LogItemEvent
float __fastcall CDOTA_PlayerResource::GetTimeOfLastConsumablePurchase(CDOTA_PlayerResource *const this, int iPlayerID)
{
  if ( iPlayerID < 0 || iPlayerID >= *(this + 194) )
    return 0.0;
  else
    return *(this + iPlayerID + 3492);
}


// CDOTA_PlayerResource::GetTimeOfLastDeath  (line 3695, @0x0000000002654000, libserver.so)  // inlines: IsValidTeamPlayerID
// callers: CDOTA_OGS::LogItemEvent
float __fastcall CDOTA_PlayerResource::GetTimeOfLastDeath(CDOTA_PlayerResource *const this, int iPlayerID)
{
  if ( iPlayerID < 0 || iPlayerID >= *(this + 194) )
    return 0.0;
  else
    return *(this + iPlayerID + 3516);
}


// CDOTA_PlayerResource::SetRank  (line 3705, @0x000000000265fda0, libserver.so)  // inlines: CSteamID, IsValidTeamPlayerID, SetFromUint64
// calls: LoggingSystem_IsChannelEnabled, CDOTA_PlayerResource::GetSteamID, CSteamID::Render, LoggingSystem_Log
// callers: CGCJobRequestBatchPlayerResourcesResponse::BYieldingRunGCJob
// strings: "PR:SetRank %d:%s %d (%d)\n"
void __fastcall CDOTA_PlayerResource::SetRank(
        CDOTA_PlayerResource *const this,
        int iPlayerID,
        int iValue,
        bool bCalibrated)
{
  const char *v8; // rax
  CSteamID v9; // [rsp+10h] [rbp-40h] BYREF

  if ( iPlayerID >= 0 && iPlayerID < *(this + 194) )
  {
    *(this + iPlayerID + 3684) = iValue;
    *(this + iPlayerID + 14832) = bCalibrated;
    if ( LoggingSystem_IsChannelEnabled(LOG_SERVER, 1) != 0 )
    {
      v9.m_steamid.m_comp = CDOTA_PlayerResource::GetSteamID(this, iPlayerID);
      v8 = CSteamID::Render(&v9);
      LoggingSystem_Log(LOG_SERVER, 1, "PR:SetRank %d:%s %d (%d)\n", iPlayerID, v8, iValue, bCalibrated);
    }
  }
}


// CDOTA_PlayerResource::PrintRanks  (line 3715, @0x000000000265fe40, libserver.so)  // inlines: CSteamID, IsValidTeamPlayerID, SetFromUint64
// calls: LoggingSystem_IsChannelEnabled, CDOTA_PlayerResource::GetSteamID, CSteamID::Render, LoggingSystem_Log
// callers: CDOTAGCServerSystem::SOChanged
// strings: "PR:SetRank %d:%s %d (%d)\n"
void __fastcall CDOTA_PlayerResource::PrintRanks(const CDOTA_PlayerResource *const this)
{
  __int64 i; // rbx
  int v3; // r15d
  uint64 SteamID; // rax
  int v5; // r13d
  const char *v6; // rax
  CSteamID v7; // [rsp+10h] [rbp-40h] BYREF

  for ( i = 0; i != 24; ++i )
  {
    if ( *(this + 194) > i && LoggingSystem_IsChannelEnabled(LOG_SERVER, 1) != 0 )
    {
      v3 = *(this + i + 3684);
      SteamID = CDOTA_PlayerResource::GetSteamID(this, i);
      v5 = *(this + i + 14832);
      v7.m_steamid.m_comp = SteamID;
      v6 = CSteamID::Render(&v7);
      LoggingSystem_Log(LOG_SERVER, 1, "PR:SetRank %d:%s %d (%d)\n", i, v6, v3, v5);
    }
  }
}


// CDOTA_PlayerResource::GetRank  (line 3726, @0x000000000265fef0, libserver.so)  // inlines: IsValidTeamPlayerID
// callers: CDOTAGamerules::AutoAssignCaptains, CDOTAGamerules::State_Enter_HERO_SELECTION, CDOTAGamerules::State_Enter_POST_GAME, CDOTA_OGS::LogHeroResults
int __fastcall CDOTA_PlayerResource::GetRank(CDOTA_PlayerResource *const this, int iPlayerID, bool *pbCalibrated)
{
  int result; // eax

  result = 0;
  if ( iPlayerID >= 0 && iPlayerID < *(this + 194) )
  {
    if ( pbCalibrated != 0 )
      *pbCalibrated = *(this + iPlayerID + 14832);
    return *(this + iPlayerID + 3684);
  }
  return result;
}


// CDOTA_PlayerResource::SetTextChatBanned  (line 3738, @0x000000000265ff20, libserver.so)  // inlines: CSteamID, IsValidTeamPlayerID, SetFromUint64
// calls: LoggingSystem_IsChannelEnabled, CDOTA_PlayerResource::GetSteamID, CSteamID::Render, LoggingSystem_Log
// callers: CGCJobRequestBatchPlayerResourcesResponse::BYieldingRunGCJob
// strings: "false", "true", "PR:SetTextChatBanned %d:%s %s\n"
void __fastcall CDOTA_PlayerResource::SetTextChatBanned(CDOTA_PlayerResource *const this, int iPlayerID, bool bBanned)
{
  const char *v5; // r14
  const char *v6; // rax
  CSteamID v8; // [rsp+10h] [rbp-30h] BYREF

  if ( iPlayerID >= 0 && iPlayerID < *(this + 194) )
  {
    *(this + iPlayerID + 14856) = bBanned;
    if ( LoggingSystem_IsChannelEnabled(LOG_SERVER, 1) != 0 )
    {
      v5 = "true";
      if ( !bBanned )
        v5 = "false";
      v8.m_steamid.m_comp = CDOTA_PlayerResource::GetSteamID(this, iPlayerID);
      v6 = CSteamID::Render(&v8);
      LoggingSystem_Log(LOG_SERVER, 1, "PR:SetTextChatBanned %d:%s %s\n", iPlayerID, v6, v5);
    }
  }
}


// CDOTA_PlayerResource::GetTextChatBanned  (line 3747, @0x000000000265ffc0, libserver.so)  // inlines: IsValidTeamPlayerID
bool __fastcall CDOTA_PlayerResource::GetTextChatBanned(CDOTA_PlayerResource *const this, int iPlayerID)
{
  bool result; // al

  result = 0;
  if ( iPlayerID >= 0 && iPlayerID < *(this + 194) )
    return *(this + iPlayerID + 14856);
  return result;
}


// CDOTA_PlayerResource::SetVoiceChatBanned  (line 3757, @0x000000000265ffe0, libserver.so)  // inlines: CSteamID, Element, Get, IsValidTeamPlayerID, NetworkStateChanged, Set, SetFromUint64, operator CEntityInstance*, operator=<bool>, operator[]
// calls: LoggingSystem_IsChannelEnabled, CDOTA_PlayerResource::GetSteamID, CSteamID::Render, LoggingSystem_Log
// callers: CGCJobRequestBatchPlayerResourcesResponse::BYieldingRunGCJob
// strings: "false", "true", "PR:SetVoiceChatBanned %d:%s %s\n"
void __fastcall CDOTA_PlayerResource::SetVoiceChatBanned(CDOTA_PlayerResource *const this, int iPlayerID, bool bBanned)
{
  __int64 v6; // r14
  _QWORD *v7; // rdi
  const char *v8; // r15
  const char *v9; // rax
  CSteamID v10; // [rsp+0h] [rbp-40h] BYREF

  if ( iPlayerID >= 0 && iPlayerID < *(this + 194) )
  {
    v6 = *(this + 98) + 200LL * iPlayerID;
    if ( *(v6 + 76) != bBanned )
    {
      v7 = *(v6 + 8);
      if ( v7 != 0 && (*(v7[1] + 49LL) & 4) == 0 && *(v6 + 16) != 0xFFFF )
        (*(*v7 + 176LL))(v7, 76, 0xFFFFFFFFLL, *(v6 + 16));
      *(v6 + 76) = bBanned;
    }
    if ( LoggingSystem_IsChannelEnabled(LOG_SERVER, 1) != 0 )
    {
      v8 = "true";
      if ( !bBanned )
        v8 = "false";
      v10.m_steamid.m_comp = CDOTA_PlayerResource::GetSteamID(this, iPlayerID);
      v9 = CSteamID::Render(&v10);
      LoggingSystem_Log(LOG_SERVER, 1, "PR:SetVoiceChatBanned %d:%s %s\n", iPlayerID, v9, v8);
    }
  }
}


// CDOTA_PlayerResource::GetVoiceChatBanned  (line 3766, @0x00000000026600e0, libserver.so)  // inlines: Element, IsValidTeamPlayerID, operator[]
// callers: CVoiceGameMgrHelper::CanPlayerHearPlayer
bool __fastcall CDOTA_PlayerResource::GetVoiceChatBanned(CDOTA_PlayerResource *const this, int iPlayerID)
{
  bool result; // al

  result = 0;
  if ( iPlayerID >= 0 && iPlayerID < *(this + 194) )
    return *(*(this + 98) + 200LL * iPlayerID + 76);
  return result;
}


// CDOTA_PlayerResource::SetLowPriority  (line 3776, @0x0000000002660110, libserver.so)  // inlines: CSteamID, IsValidTeamPlayerID, SetFromUint64
// calls: LoggingSystem_IsChannelEnabled, CDOTA_PlayerResource::GetSteamID, CSteamID::Render, LoggingSystem_Log
// callers: CGCJobRequestBatchPlayerResourcesResponse::BYieldingRunGCJob
// strings: "false", "true", "PR:SetLowPriority %d:%s %s\n"
void __fastcall CDOTA_PlayerResource::SetLowPriority(CDOTA_PlayerResource *const this, int iPlayerID, bool bBanned)
{
  const char *v5; // r14
  const char *v6; // rax
  CSteamID v8; // [rsp+10h] [rbp-30h] BYREF

  if ( iPlayerID >= 0 && iPlayerID < *(this + 194) )
  {
    *(this + iPlayerID + 14880) = bBanned;
    if ( LoggingSystem_IsChannelEnabled(LOG_SERVER, 1) != 0 )
    {
      v5 = "true";
      if ( !bBanned )
        v5 = "false";
      v8.m_steamid.m_comp = CDOTA_PlayerResource::GetSteamID(this, iPlayerID);
      v6 = CSteamID::Render(&v8);
      LoggingSystem_Log(LOG_SERVER, 1, "PR:SetLowPriority %d:%s %s\n", iPlayerID, v6, v5);
    }
  }
}


// CDOTA_PlayerResource::GetLowPriority  (line 3785, @0x00000000026601b0, libserver.so)  // inlines: IsValidTeamPlayerID
// callers: CDOTAGamerules::BroadcastItemDropBonusStatus
bool __fastcall CDOTA_PlayerResource::GetLowPriority(CDOTA_PlayerResource *const this, int iPlayerID)
{
  bool result; // al

  result = 0;
  if ( iPlayerID >= 0 && iPlayerID < *(this + 194) )
    return *(this + iPlayerID + 14880);
  return result;
}


// CDOTA_PlayerResource::ClearLobbySteamIDs  (line 3797, @0x00000000026601d0, libserver.so)
// callers: CDOTAGamerules::State_Think_DISCONNECT, CDOTAGCServerSystem::SetHibernation
// globals: CDOTA_PlayerResource::s_unLobbySteamID, g_pDOTAPlayerResource
void __cdecl CDOTA_PlayerResource::ClearLobbySteamIDs()
{
  CDOTA_PlayerResource **v0; // rax

  v0 = &CDOTA_PlayerResource::s_unLobbySteamID;
  do
    *v0++ = 0;
  while ( v0 != &g_pDOTAPlayerResource );
}


// CDOTA_PlayerResource::TrackPotentialAbilityAbuse  (line 3807, @0x0000000002691990, libserver.so)  // inlines: Element, Find, FindInsertionPosition, Insert, InsertAt, LeftChild, RightChild, operator(), operator[]
// calls: CUtlRBTree<CUtlMap<int, int>::Node_t, short unsigned int, CUtlMap<int, int>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, int>::Node_t, short unsigned int>, short unsigned int> >::Find, CUtlRBTree<CUtlMap<int, int>::Node_t, short unsigned int, CUtlMap<int, int>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, int>::Node_t, short unsigned int>, short unsigned int> >::NewNode, CUtlRBTree<CUtlMap<int, int>::Node_t, short unsigned int, CUtlMap<int, int>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, int>::Node_t, short unsigned int>, short unsigned int> >::LinkToParent
// callers: CDOTABaseAbility::CastAbility
void __fastcall CDOTA_PlayerResource::TrackPotentialAbilityAbuse(
        CDOTA_PlayerResource *const this,
        CDOTA_BaseNPC *pTarget,
        CDOTA_BaseNPC *pCaster,
        CDOTABaseAbility *pAbility)
{
  int v8; // r15d
  CUtlMap<int,int,short unsigned int,bool (*)(int const&,int const&)>::KeyType_t v9; // ebx
  CUtlRBTree<CUtlMap<int,int>::Node_t,short unsigned int,CUtlMap<int,int>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,int>::Node_t,short unsigned int>,short unsigned int> > *v10; // r12
  unsigned __int16 v11; // r15
  int (**vptr_IHandleEntity)(...); // rax
  int v13; // eax
  __int64 v14; // rdx
  CUtlMap<int,int,short unsigned int,bool (*)(int const&,int const&)>::ElemType_t v15; // eax
  unsigned __int16 m_Root; // r13
  unsigned __int16 m_Left; // ax
  char v18; // cl
  bool v19; // zf
  UtlRBTreeNode_t<CUtlMap<int,int>::Node_t,short unsigned int> *m_pMemory; // rax
  unsigned __int16 v21; // ax
  bool v22; // bl
  CUtlMap<int,int,short unsigned int,bool (*)(int const&,int const&)>::Node_t search; // [rsp+0h] [rbp-40h] BYREF

  if ( pTarget == 0
    || pCaster == 0
    || (*(pCaster->_vptr_IHandleEntity + 414))(pCaster) == -1
    || pAbility == 0
    || pTarget == pCaster )
  {
    return;
  }
  v8 = (*(pCaster->_vptr_IHandleEntity + 414))(pCaster);
  if ( pTarget->m_iTeamNum.m_Value == pCaster->m_iTeamNum.m_Value )
    v9 = (*(pAbility->_vptr_IHandleEntity + 240))(pAbility);
  else
    v9 = 0;
  search.key = v9;
  v10 = (this + 40 * v8 + 32536);
  v11 = CUtlRBTree<CUtlMap<int,int,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short,CUtlMap<int,int,unsigned short,bool (*)(int const&,int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,int,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short>,unsigned short>>::Find(
          v10,
          &search);
  vptr_IHandleEntity = pAbility->_vptr_IHandleEntity;
  if ( v11 != 0xFFFF )
  {
    v13 = vptr_IHandleEntity[273](pAbility, 0xFFFFFFFFLL);
    v14 = &v10->m_Elements.m_pMemory[v11];
    *(v14 + 12) += v13;
    return;
  }
  v15 = vptr_IHandleEntity[273](pAbility, 0xFFFFFFFFLL);
  m_Root = v10->m_Root;
  search.key = v9;
  search.elem = v15;
  if ( m_Root == 0xFFFF )
  {
    m_Root = -1;
    v22 = 0;
    goto LABEL_18;
  }
  while ( 1 )
  {
    v19 = !v10->m_LessFunc.m_LessFunc(&search, &v10->m_Elements.m_pMemory[m_Root].m_Data);
    m_pMemory = v10->m_Elements.m_pMemory;
    if ( v19 )
      break;
    m_Left = m_pMemory[m_Root].m_Left;
    v18 = 1;
    if ( m_Left == 0xFFFF )
      goto LABEL_17;
LABEL_14:
    m_Root = m_Left;
  }
  m_Left = m_pMemory[m_Root].m_Right;
  v18 = 0;
  if ( m_Left != 0xFFFF )
    goto LABEL_14;
LABEL_17:
  v22 = v18;
LABEL_18:
  v21 = CUtlRBTree<CUtlMap<int,int,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short,CUtlMap<int,int,unsigned short,bool (*)(int const&,int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,int,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short>,unsigned short>>::NewNode(
          v10,
          &search);
  CUtlRBTree<CUtlMap<int,int,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short,CUtlMap<int,int,unsigned short,bool (*)(int const&,int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,int,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short>,unsigned short>>::LinkToParent(
    v10,
    v21,
    m_Root,
    v22);
  ++v10->m_NumElements;
}


// CDOTA_PlayerResource::GetPotentialAbilityAbuse  (line 3827, @0x0000000002674900, libserver.so)  // inlines: Element, Find, operator[]
// calls: CUtlRBTree<CUtlMap<int, int>::Node_t, short unsigned int, CUtlMap<int, int>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, int>::Node_t, short unsigned int>, short unsigned int> >::Find
int __fastcall CDOTA_PlayerResource::GetPotentialAbilityAbuse(
        CDOTA_PlayerResource *const this,
        CDOTA_BaseNPC *pHero,
        int abuseType)
{
  int v5; // eax
  const CUtlRBTree<CUtlMap<int,int>::Node_t,short unsigned int,CUtlMap<int,int>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,int>::Node_t,short unsigned int>,short unsigned int> > *v6; // rbx
  unsigned __int16 v7; // ax
  CUtlMap<int,int,short unsigned int,bool (*)(int const&,int const&)>::Node_t search; // [rsp+0h] [rbp-20h] BYREF

  v5 = (*(pHero->_vptr_IHandleEntity + 414))(pHero);
  if ( v5 == -1 )
    return 0;
  search.key = abuseType;
  v6 = (this + 40 * v5 + 32536);
  v7 = CUtlRBTree<CUtlMap<int,int,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short,CUtlMap<int,int,unsigned short,bool (*)(int const&,int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,int,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short>,unsigned short>>::Find(
         v6,
         &search);
  if ( v7 == 0xFFFF )
    return 0;
  else
    return v6->m_Elements.m_pMemory[v7].m_Data.elem;
}


// CDOTA_PlayerResource::IncrementCouriersDeployed  (line 3844, @0x0000000002660200, libserver.so)  // inlines: IsValidTeamPlayerID
// callers: OnCourierSpawn
void __fastcall CDOTA_PlayerResource::IncrementCouriersDeployed(CDOTA_PlayerResource *const this, int iPlayerID)
{
  if ( iPlayerID >= 0 && iPlayerID < *(this + 194) )
    ++*(this + iPlayerID + 8374);
}


// CDOTA_PlayerResource::GetCouriersDeployed  (line 3854, @0x0000000002660220, libserver.so)  // inlines: IsValidTeamPlayerID
int __fastcall CDOTA_PlayerResource::GetCouriersDeployed(CDOTA_PlayerResource *const this, int iPlayerID)
{
  int result; // eax

  result = 0;
  if ( iPlayerID >= 0 && iPlayerID < *(this + 194) )
    return *(this + iPlayerID + 8374);
  return result;
}


// CDOTA_PlayerResource::IncrementCouriersPotentiallyKilled  (line 3864, @0x0000000002660240, libserver.so)  // inlines: IsValidTeamPlayerID
// callers: CDOTA_Modifier_Track_Order_Issuer::OnDeath
void __fastcall CDOTA_PlayerResource::IncrementCouriersPotentiallyKilled(
        CDOTA_PlayerResource *const this,
        int iPlayerID)
{
  if ( iPlayerID >= 0 && iPlayerID < *(this + 194) )
    ++*(this + iPlayerID + 8398);
}


// CDOTA_PlayerResource::GetCouriersPotentiallyKilled  (line 3874, @0x0000000002660260, libserver.so)  // inlines: IsValidTeamPlayerID
int __fastcall CDOTA_PlayerResource::GetCouriersPotentiallyKilled(CDOTA_PlayerResource *const this, int iPlayerID)
{
  int result; // eax

  result = 0;
  if ( iPlayerID >= 0 && iPlayerID < *(this + 194) )
    return *(this + iPlayerID + 8398);
  return result;
}


// CDOTA_PlayerResource::SetCourier  (line 3884, @0x0000000002678ed0, libserver.so)  // inlines: Element, Get, IsValidTeamPlayerID, NetworkStateChanged, Set, operator CEntityInstance*, operator=, operator=<CDOTA_BaseNPC*>, operator[]
// calls: CHandle<CBaseEntity>::CHandle, operator!=<CBaseEntity>
// callers: CDOTAPlayer::CheckForSpawningFreeCourier
void __fastcall CDOTA_PlayerResource::SetCourier(
        CDOTA_PlayerResource *const this,
        int iPlayerID,
        CDOTA_BaseNPC *pCourier)
{
  __int64 v3; // r12
  _QWORD *v4; // rdi
  CHandle<CBaseEntity> v5[10]; // [rsp-28h] [rbp-28h] BYREF

  if ( iPlayerID >= 0 && iPlayerID < *(this + 194) )
  {
    v3 = *(this + 98) + 200LL * iPlayerID;
    CHandle<CBaseEntity>::CHandle(v5, pCourier);
    if ( operator!=<CBaseEntity>((v3 + 152), v5) )
    {
      v4 = *(v3 + 8);
      if ( v4 != 0 && (*(v4[1] + 49LL) & 4) == 0 && *(v3 + 16) != 0xFFFF )
        (*(*v4 + 176LL))(v4, 152, 0xFFFFFFFFLL, *(v3 + 16));
      *(v3 + 152) = v5[0];
    }
  }
}


// CDOTA_PlayerResource::IncrementCommandsIssued  (line 3894, @0x0000000002660280, libserver.so)  // inlines: IsValidTeamPlayerID
void __fastcall CDOTA_PlayerResource::IncrementCommandsIssued(CDOTA_PlayerResource *const this, int iPlayerID)
{
  if ( iPlayerID >= 0 && iPlayerID < *(this + 194) )
    ++*(this + iPlayerID + 8422);
}


// CDOTA_PlayerResource::GetCommandsIssued  (line 3904, @0x00000000026602a0, libserver.so)  // inlines: IsValidTeamPlayerID
int __fastcall CDOTA_PlayerResource::GetCommandsIssued(CDOTA_PlayerResource *const this, int iPlayerID)
{
  int result; // eax

  result = 0;
  if ( iPlayerID >= 0 && iPlayerID < *(this + 194) )
    return *(this + iPlayerID + 8422);
  return result;
}


// CDOTA_PlayerResource::SetIdleInFountain  (line 3914, @0x00000000026602c0, libserver.so)  // inlines: CSteamID, IsValidTeamPlayerID, SetFromUint64
// calls: LoggingSystem_IsChannelEnabled, CDOTA_PlayerResource::GetSteamID, CSteamID::Render, LoggingSystem_Log
// strings: "false", "true", "PR:SetIdleInFountain %d:%s %s\n"
void __fastcall CDOTA_PlayerResource::SetIdleInFountain(CDOTA_PlayerResource *const this, int iPlayerID, bool bIdle)
{
  const char *v5; // r14
  const char *v6; // rax
  CSteamID v8; // [rsp+10h] [rbp-30h] BYREF

  if ( iPlayerID >= 0 && iPlayerID < *(this + 194) )
  {
    *(this + iPlayerID + 14904) = bIdle;
    if ( LoggingSystem_IsChannelEnabled(LOG_SERVER, 1) != 0 )
    {
      v5 = "true";
      if ( !bIdle )
        v5 = "false";
      v8.m_steamid.m_comp = CDOTA_PlayerResource::GetSteamID(this, iPlayerID);
      v6 = CSteamID::Render(&v8);
      LoggingSystem_Log(LOG_SERVER, 1, "PR:SetIdleInFountain %d:%s %s\n", iPlayerID, v6, v5);
    }
  }
}


// CDOTA_PlayerResource::GetIdleInFountain  (line 3925, @0x0000000002660360, libserver.so)  // inlines: IsValidTeamPlayerID
bool __fastcall CDOTA_PlayerResource::GetIdleInFountain(CDOTA_PlayerResource *const this, int iPlayerID)
{
  bool result; // al

  result = 0;
  if ( iPlayerID >= 0 && iPlayerID < *(this + 194) )
    return *(this + iPlayerID + 14904);
  return result;
}


// CDOTA_PlayerResource::SetLoggedInElsewhere  (line 3935, @0x0000000002660380, libserver.so)  // inlines: CSteamID, IsValidTeamPlayerID, SetFromUint64
// calls: LoggingSystem_IsChannelEnabled, CDOTA_PlayerResource::GetSteamID, CSteamID::Render, LoggingSystem_Log
// callers: CDOTAGamerules::LogSteamKick
// strings: "true", "PR:SetLoggedInElsewhere %d:%s %s\n"
void __fastcall CDOTA_PlayerResource::SetLoggedInElsewhere(CDOTA_PlayerResource *const this, int iPlayerID)
{
  const char *v4; // rax
  CSteamID v5; // [rsp+0h] [rbp-30h] BYREF

  if ( iPlayerID >= 0 && iPlayerID < *(this + 194) )
  {
    *(this + iPlayerID + 14928) = 1;
    if ( LoggingSystem_IsChannelEnabled(LOG_SERVER, 1) != 0 )
    {
      v5.m_steamid.m_comp = CDOTA_PlayerResource::GetSteamID(this, iPlayerID);
      v4 = CSteamID::Render(&v5);
      LoggingSystem_Log(LOG_SERVER, 1, "PR:SetLoggedInElsewhere %d:%s %s\n", iPlayerID, v4, "true");
    }
  }
}


// CDOTA_PlayerResource::GetLoggedInElsewhere  (line 3944, @0x0000000002660420, libserver.so)  // inlines: IsValidTeamPlayerID
bool __fastcall CDOTA_PlayerResource::GetLoggedInElsewhere(CDOTA_PlayerResource *const this, int iPlayerID)
{
  bool result; // al

  result = 0;
  if ( iPlayerID >= 0 && iPlayerID < *(this + 194) )
    return *(this + iPlayerID + 14928);
  return result;
}


// CDOTA_PlayerResource::MarkPlayerLoadedCompletely  (line 3954, @0x0000000002660440, libserver.so)  // inlines: IsValidPlayerID
void __fastcall CDOTA_PlayerResource::MarkPlayerLoadedCompletely(CDOTA_PlayerResource *const this, int iPlayerID)
{
  if ( iPlayerID >= 0 && iPlayerID < *(this + 212) )
    *(this + iPlayerID + 14952) = 1;
}


// CDOTA_PlayerResource::GetPlayerLoadedCompletely  (line 3962, @0x0000000002654030, libserver.so)  // inlines: IsValidPlayerID
// callers: CDOTAGamerules::WaitForPlayersFailure
bool __fastcall CDOTA_PlayerResource::GetPlayerLoadedCompletely(CDOTA_PlayerResource *const this, int iPlayerID)
{
  bool result; // al

  result = 0;
  if ( iPlayerID >= 0 && iPlayerID < *(this + 212) )
    return *(this + iPlayerID + 14952);
  return result;
}


// CDOTA_PlayerResource::SetPlayerQualifiesForPAContractReward  (line 3972, @0x0000000002660460, libserver.so)  // inlines: CSteamID, Element, Get, IsValidTeamPlayerID, NetworkStateChanged, Set, SetFromUint64, operator CEntityInstance*, operator=<bool>, operator[]
// calls: LoggingSystem_IsChannelEnabled, CDOTA_PlayerResource::GetSteamID, CSteamID::Render, LoggingSystem_Log
// strings: "false", "true", "PR:SetPlayerQualifiesForPAContractReward %d:%s %s\n"
void __fastcall CDOTA_PlayerResource::SetPlayerQualifiesForPAContractReward(
        CDOTA_PlayerResource *const this,
        int iPlayerID,
        bool bQualifies)
{
  __int64 v6; // r14
  _QWORD *v7; // rdi
  const char *v8; // r15
  const char *v9; // rax
  CSteamID v10; // [rsp+0h] [rbp-40h] BYREF

  if ( iPlayerID >= 0 && iPlayerID < *(this + 194) )
  {
    v6 = *(this + 98) + 200LL * iPlayerID;
    if ( *(v6 + 116) != bQualifies )
    {
      v7 = *(v6 + 8);
      if ( v7 != 0 && (*(v7[1] + 49LL) & 4) == 0 && *(v6 + 16) != 0xFFFF )
        (*(*v7 + 176LL))(v7, 116, 0xFFFFFFFFLL, *(v6 + 16));
      *(v6 + 116) = bQualifies;
    }
    if ( LoggingSystem_IsChannelEnabled(LOG_SERVER, 1) != 0 )
    {
      v8 = "true";
      if ( !bQualifies )
        v8 = "false";
      v10.m_steamid.m_comp = CDOTA_PlayerResource::GetSteamID(this, iPlayerID);
      v9 = CSteamID::Render(&v10);
      LoggingSystem_Log(LOG_SERVER, 1, "PR:SetPlayerQualifiesForPAContractReward %d:%s %s\n", iPlayerID, v9, v8);
    }
  }
}


// CDOTA_PlayerResource::GetPlayerQualifiesForPAContractReward  (line 3981, @0x0000000002660560, libserver.so)  // inlines: Element, IsValidTeamPlayerID, operator[]
bool __fastcall CDOTA_PlayerResource::GetPlayerQualifiesForPAContractReward(
        CDOTA_PlayerResource *const this,
        int iPlayerID)
{
  bool result; // al

  result = 0;
  if ( iPlayerID >= 0 && iPlayerID < *(this + 194) )
    return *(*(this + 98) + 200LL * iPlayerID + 116);
  return result;
}


// CDOTA_PlayerResource::RecordBalanceForTime  (line 3991, @0x0000000002684f80, libserver.so)  // inlines: AddToTail, CopyConstruct<TimedBalanceRecord_t>, DOTAGameRules, Element, GetBonusGoldEarned, GetTotalEarnedXP, GrowMemory, IsValidTeamPlayerID, operator[]
// calls: CDOTA_PlayerResource::GetKills, CDOTA_PlayerResource::GetTeamDataForPlayer, CDOTA_PlayerResource::GetNetWorth, CDOTAGamerules::GetNumTeamBarracks, CDOTAGamerules::GetTeamBarracks, CDOTAGamerules::GetNumTeamTowers, CDOTAGamerules::GetTeamTower, CUtlMemory<TimedBalanceRecord_t, int>::Grow
// callers: CDOTAGamerules::State_Think_GAME_IN_PROGRESS
void __fastcall CDOTA_PlayerResource::RecordBalanceForTime(CDOTA_PlayerResource *const this, int nMinute)
{
  int *v3; // r13
  int v4; // r14d
  _DWORD *v5; // r12
  DataTeamPlayer_t *v6; // rax
  int v7; // eax
  int v8; // eax
  DataTeamPlayer_t *TeamDataForPlayer; // rax
  int m_Value; // eax
  int v11; // eax
  int v12; // r13d
  int v13; // eax
  int v14; // r12d
  int v15; // r14d
  int v16; // r13d
  CDOTA_BaseNPC_Building *v17; // rax
  float v18; // xmm2_4
  float v19; // xmm1_4
  float v20; // xmm0_4
  float v21; // xmm1_4
  __int64 v22; // rbx
  int v23; // eax
  __int64 v24; // rax
  int NumTeamTowers; // r13d
  int v26; // r12d
  int v27; // r14d
  CDOTA_BaseNPC_Tower *TeamTower; // rax
  int v29; // r13d
  int v30; // r12d
  int v31; // r14d
  CDOTA_BaseNPC_Tower *v32; // rax
  int NumTeamBarracks; // r14d
  int v34; // r12d
  CDOTA_BaseNPC_Building *TeamBarracks; // rax
  int v36; // [rsp+8h] [rbp-68h]
  int v37; // [rsp+Ch] [rbp-64h]
  CDOTAGamerules *v38; // [rsp+10h] [rbp-60h]
  int v39; // [rsp+10h] [rbp-60h]
  int v40; // [rsp+18h] [rbp-58h]
  int nBadGuyBonusGold; // [rsp+1Ch] [rbp-54h]
  int nGoodGuyBonusGold; // [rsp+20h] [rbp-50h]
  int nBadGuyKills; // [rsp+24h] [rbp-4Ch]
  int nGoodGuyKills; // [rsp+28h] [rbp-48h]
  int nBadGuyGold; // [rsp+2Ch] [rbp-44h]
  int nGoodGuyGold; // [rsp+30h] [rbp-40h]
  int nBadGuyXP; // [rsp+34h] [rbp-3Ch]
  int nGoodGuyXP; // [rsp+38h] [rbp-38h]
  int flTeamBalance; // [rsp+3Ch] [rbp-34h]
  int flTeamBalancea; // [rsp+3Ch] [rbp-34h]
  float flTeamBalanceb; // [rsp+3Ch] [rbp-34h]

  v38 = g_pGameRules;
  if ( g_pGameRules != 0 )
  {
    flTeamBalance = *(this + 212);
    if ( flTeamBalance <= 0 )
    {
      v37 = 0;
      v40 = 0;
      nBadGuyBonusGold = 0;
      nGoodGuyBonusGold = 0;
      nBadGuyGold = 0;
      nGoodGuyGold = 0;
      nBadGuyXP = 0;
      nGoodGuyXP = 0;
      nBadGuyKills = 0;
      nGoodGuyKills = 0;
    }
    else
    {
      v3 = (this + 12816);
      v4 = 0;
      nBadGuyBonusGold = 0;
      nGoodGuyBonusGold = 0;
      nBadGuyGold = 0;
      v5 = (*(this + 107) + 32LL);
      nGoodGuyGold = 0;
      nBadGuyXP = 0;
      nGoodGuyXP = 0;
      nBadGuyKills = 0;
      nGoodGuyKills = 0;
      do
      {
        if ( *v5 == 2 )
        {
          nGoodGuyKills += CDOTA_PlayerResource::GetKills(this, v4);
          TeamDataForPlayer = CDOTA_PlayerResource::GetTeamDataForPlayer(this, v4);
          if ( TeamDataForPlayer != 0 )
            m_Value = TeamDataForPlayer->m_iTotalEarnedXP.m_Value;
          else
            m_Value = 0;
          nGoodGuyXP += m_Value;
          nGoodGuyGold += CDOTA_PlayerResource::GetNetWorth(this, v4);
          if ( *(this + 194) <= v4 )
            v11 = 0;
          else
            v11 = *v3;
          nGoodGuyBonusGold += v11;
        }
        else if ( *v5 == 3 )
        {
          nBadGuyKills += CDOTA_PlayerResource::GetKills(this, v4);
          v6 = CDOTA_PlayerResource::GetTeamDataForPlayer(this, v4);
          if ( v6 != 0 )
            v7 = v6->m_iTotalEarnedXP.m_Value;
          else
            v7 = 0;
          nBadGuyXP += v7;
          nBadGuyGold += CDOTA_PlayerResource::GetNetWorth(this, v4);
          if ( *(this + 194) <= v4 )
            v8 = 0;
          else
            v8 = *v3;
          nBadGuyBonusGold += v8;
        }
        ++v4;
        v5 += 18;
        ++v3;
      }
      while ( v4 != flTeamBalance );
      v40 = nGoodGuyGold - nBadGuyGold;
      v37 = nGoodGuyXP - nBadGuyXP;
    }
    NumTeamTowers = CDOTAGamerules::GetNumTeamTowers(v38, 2);
    if ( NumTeamTowers <= 0 )
    {
      flTeamBalancea = 0;
    }
    else
    {
      v26 = 0;
      v27 = 0;
      do
      {
        TeamTower = CDOTAGamerules::GetTeamTower(g_pGameRules, 2, v26);
        if ( TeamTower == 0 || (*(TeamTower->_vptr_IHandleEntity + 408))(TeamTower) == 0 )
          ++v27;
        ++v26;
      }
      while ( v26 != NumTeamTowers );
      flTeamBalancea = v27;
    }
    v29 = CDOTAGamerules::GetNumTeamTowers(g_pGameRules, 3);
    if ( v29 <= 0 )
    {
      v39 = 0;
    }
    else
    {
      v30 = 0;
      v31 = 0;
      do
      {
        v32 = CDOTAGamerules::GetTeamTower(g_pGameRules, 3, v30);
        if ( v32 == 0 || (*(v32->_vptr_IHandleEntity + 408))(v32) == 0 )
          ++v31;
        ++v30;
      }
      while ( v30 != v29 );
      v39 = v31;
    }
    NumTeamBarracks = CDOTAGamerules::GetNumTeamBarracks(g_pGameRules, 2);
    if ( NumTeamBarracks <= 0 )
    {
      v12 = 0;
    }
    else
    {
      v34 = 0;
      v12 = 0;
      do
      {
        TeamBarracks = CDOTAGamerules::GetTeamBarracks(g_pGameRules, 2, v34);
        if ( TeamBarracks == 0 || (*(TeamBarracks->_vptr_IHandleEntity + 408))(TeamBarracks) == 0 )
          ++v12;
        ++v34;
      }
      while ( v34 != NumTeamBarracks );
    }
    v13 = CDOTAGamerules::GetNumTeamBarracks(g_pGameRules, 3);
    if ( v13 <= 0 )
    {
      v18 = 0.0;
    }
    else
    {
      v36 = v12;
      v14 = 0;
      v15 = 0;
      v16 = v13;
      do
      {
        v17 = CDOTAGamerules::GetTeamBarracks(g_pGameRules, 3, v14);
        if ( v17 == 0 || (*(v17->_vptr_IHandleEntity + 408))(v17) == 0 )
          ++v15;
        ++v14;
      }
      while ( v14 != v16 );
      v12 = v36;
      v18 = v15 * 4.0;
    }
    v19 = ((((nGoodGuyKills + nGoodGuyKills) + (v39 * 3.0)) + v18) + (nGoodGuyGold * 0.001)) + (nGoodGuyXP * 0.001);
    v20 = ((((nBadGuyKills + nBadGuyKills) + (flTeamBalancea * 3.0)) + (v12 * 4.0)) + (nBadGuyGold * 0.001))
        + (nBadGuyXP * 0.001);
    if ( (v19 + v20) <= 0.0 )
      v21 = 0.0;
    else
      v21 = (v19 - v20) / (v19 + v20);
    v22 = *(this + 4638);
    v23 = *(this + 4638);
    if ( v22 == *(this + 4642) )
    {
      flTeamBalanceb = v21;
      CUtlMemory<TimedBalanceRecord_t,int>::Grow(this + 1160, 1);
      v23 = *(this + 4638);
      v21 = flTeamBalanceb;
    }
    *(this + 4638) = v23 + 1;
    v24 = *(this + 2320) + 20 * v22;
    if ( v24 != 0 )
    {
      *(v24 + 8) = v21;
      *v24 = v40;
      *(v24 + 4) = v37;
      *(v24 + 12) = nGoodGuyBonusGold;
      *(v24 + 16) = nBadGuyBonusGold;
    }
  }
}


// CDOTA_PlayerResource::GetGameBalance  (line 4105, @0x0000000002660590, libserver.so)
// callers: CDOTAGCServerSystem::MatchSignOut
float __fastcall CDOTA_PlayerResource::GetGameBalance(CDOTA_PlayerResource *const this)
{
  return *(this + 4662);
}


// CDOTA_PlayerResource::GetLosingTeamNetworthLead  (line 4112, @0x00000000026605a0, libserver.so)
// callers: CDOTAGCServerSystem::MatchSignOut
int __fastcall CDOTA_PlayerResource::GetLosingTeamNetworthLead(CDOTA_PlayerResource *const this)
{
  return *(this + 4665);
}


// CDOTA_PlayerResource::GetAverageNetworthDelta  (line 4119, @0x00000000026605b0, libserver.so)
// callers: CDOTAGCServerSystem::MatchSignOut
int __fastcall CDOTA_PlayerResource::GetAverageNetworthDelta(CDOTA_PlayerResource *const this)
{
  return *(this + 4663);
}


// CDOTA_PlayerResource::GetNetworthDeltaAtTime  (line 4126, @0x00000000026605c0, libserver.so)  // inlines: operator[]
// callers: CDOTAGCServerSystem::MatchSignOut
int __fastcall CDOTA_PlayerResource::GetNetworthDeltaAtTime(CDOTA_PlayerResource *const this, int nMinute)
{
  int result; // eax

  result = 0;
  if ( nMinute > 0 && nMinute <= *(this + 4638) )
    return *(*(this + 2320) + 20LL * (nMinute - 1));
  return result;
}


// CDOTA_PlayerResource::GetAverageExperienceDelta  (line 4136, @0x0000000002660600, libserver.so)
// callers: CDOTAGCServerSystem::MatchSignOut
int __fastcall CDOTA_PlayerResource::GetAverageExperienceDelta(CDOTA_PlayerResource *const this)
{
  return *(this + 4664);
}


// CDOTA_PlayerResource::GetExperienceDeltaAtTime  (line 4143, @0x0000000002660610, libserver.so)  // inlines: operator[]
// callers: CDOTAGCServerSystem::MatchSignOut
int __fastcall CDOTA_PlayerResource::GetExperienceDeltaAtTime(CDOTA_PlayerResource *const this, int nMinute)
{
  int result; // eax

  result = 0;
  if ( nMinute > 0 && nMinute <= *(this + 4638) )
    return *(*(this + 2320) + 20LL * (nMinute - 1) + 4);
  return result;
}


// CDOTA_PlayerResource::GetTeamBonusGoldEarnedAtTime  (line 4153, @0x0000000002660650, libserver.so)  // inlines: operator[]
// callers: CDOTAGCServerSystem::MatchSignOut
int __fastcall CDOTA_PlayerResource::GetTeamBonusGoldEarnedAtTime(
        CDOTA_PlayerResource *const this,
        int nMinute,
        int nTeam)
{
  int result; // eax

  result = 0;
  if ( nMinute > 0 && nMinute <= *(this + 4638) )
  {
    if ( nTeam == 2 )
      return *(*(this + 2320) + 20LL * (nMinute - 1) + 12);
    else
      return *(*(this + 2320) + 20LL * (nMinute - 1) + 16);
  }
  return result;
}


// CDOTA_PlayerResource::CalculateEndgameBalanceStats  (line 4163, @0x00000000026606b0, libserver.so)  // inlines: DOTAGameRules, RemapValClamped, Tail, abs<float>, clamp<float, float>, operator[]
// callers: CDOTA_PlayerResource::GetScaledKills, CDOTA_PlayerResource::GetScaledAssists, CDOTA_PlayerResource::GetScaledDeaths
void __fastcall CDOTA_PlayerResource::CalculateEndgameBalanceStats(CDOTA_PlayerResource *const this)
{
  CGameRules *v1; // rdx
  int v2; // r12d
  _DWORD *v3; // rcx
  __int64 v4; // r9
  int *v5; // rsi
  float v6; // xmm2_4
  int v7; // eax
  int v8; // esi
  int v9; // r11d
  _DWORD *v10; // r8
  int v11; // r10d
  __int64 v12; // rbx
  int v13; // edx
  int v14; // ebx
  int v15; // r8d
  unsigned __int64 v16; // r12
  int v17; // r9d
  bool v18; // zf
  int v19; // r9d
  bool v20; // zf
  __int64 v21; // r10
  float v22; // xmm3_4
  char *v23; // r11
  float v24; // xmm1_4
  float v25; // xmm5_4
  float v26; // xmm6_4
  int v27; // r9d
  int v28; // r13d
  __int64 v29; // rdx
  int v30; // r8d
  __int64 v31; // rax
  float v32; // xmm4_4
  float v33; // xmm2_4
  float v34; // xmm1_4
  int v35; // esi
  __int64 v36; // rax
  float v37; // xmm1_4
  int v38; // esi
  float v39; // xmm3_4
  __int64 v40; // rcx
  __int64 v41; // rax
  int v42; // edx
  __int64 v43; // r10
  float *v44; // r9
  int v45; // ecx
  __int64 v46; // rdx
  __int64 v47; // rax
  __int64 v48; // r8
  float *v49; // rcx
  float v50; // xmm1_4
  __int64 v51; // rcx
  __int64 v52; // rax
  int v53; // edx
  __int64 v54; // r9
  float *v55; // r8
  __int64 v56; // rdx
  __int64 v57; // rax
  float v58; // xmm2_4
  float v59; // xmm1_4
  __int64 v60; // rax
  int v61; // ecx
  float v62; // xmm1_4

  v1 = g_pGameRules;
  if ( g_pGameRules != 0 )
  {
    v2 = *(this + 4638);
    if ( v2 != 0 )
    {
      v3 = *(this + 2320);
      *(this + 18544) = 1;
      v4 = 20LL * (v2 - 1);
      v5 = (v3 + v4);
      v6 = *(v3 + v4 + 8);
      if ( v6 < 0.0 )
        v6 = -v6;
      v7 = *v5;
      v8 = v5[1];
      *(this + 4665) = 0;
      v9 = 2 * (*&v1[16].m_szQuestName[80] != 2) - 1;
      if ( v2 > 0 )
      {
        v10 = v3;
        v11 = 0;
        v12 = &v3[5 * (v2 - 1) + 5];
        while ( 1 )
        {
          v13 = v9 * *v10;
          if ( v13 <= v11 )
          {
            v10 += 5;
            if ( v10 == v12 )
              break;
          }
          else
          {
            v10 += 5;
            *(this + 4665) = v13;
            if ( v10 == v12 )
              break;
          }
          v11 = *(this + 4665);
        }
      }
      if ( v2 - 2 >= 0 )
      {
        v14 = v8;
        v15 = v7;
        v16 = 20 * (v2 - 2 - (v2 - 2));
        while ( 1 )
        {
          v21 = v4 - 20;
          v22 = *(v3 + v4 + 8);
          v23 = v3 + v4 - 20;
          v24 = *(v23 + 2);
          if ( v24 <= 0.0 || v22 >= 0.0 )
          {
            if ( v24 >= 0.0 )
            {
              v25 = *(v23 + 2);
              v26 = *(v3 + v4 + 8);
              if ( v22 < 0.0 )
                goto LABEL_65;
              goto LABEL_26;
            }
            if ( v22 <= 0.0 )
            {
              v26 = *(v3 + v4 + 8);
              v25 = -v24;
              if ( v22 < 0.0 )
LABEL_65:
                v26 = -v26;
LABEL_26:
              if ( v25 > v26 )
              {
                *(v23 + 2) = v22;
                v3 = *(this + 2320);
                v23 = v3 + v21;
                v24 = *(v3 + v21 + 8);
              }
              goto LABEL_28;
            }
          }
          *(v23 + 2) = 0;
          v3 = *(this + 2320);
          v23 = v3 + v21;
          v24 = *(v3 + v21 + 8);
LABEL_28:
          if ( v24 >= 0.0 )
          {
            v17 = *v23;
            v6 = v6 + v24;
            v18 = *v23 == 0;
            if ( *v23 > 0 )
              goto LABEL_14;
LABEL_30:
            if ( v18 || v15 <= 0 )
              goto LABEL_15;
LABEL_32:
            v19 = *(v23 + 1);
            v15 = 0;
            v20 = v19 == 0;
            if ( v19 <= 0 )
              goto LABEL_33;
LABEL_18:
            if ( v8 >= 0 )
              goto LABEL_19;
LABEL_35:
            v8 = 0;
            v4 = v21;
            if ( v21 == v16 )
              goto LABEL_36;
          }
          else
          {
            v17 = *v23;
            v6 = v6 - v24;
            v18 = *v23 == 0;
            if ( *v23 <= 0 )
              goto LABEL_30;
LABEL_14:
            if ( v15 < 0 )
              goto LABEL_32;
LABEL_15:
            if ( abs32(v17) <= v15 )
              v15 = v17;
            v19 = *(v23 + 1);
            v7 += v15;
            v20 = v19 == 0;
            if ( v19 > 0 )
              goto LABEL_18;
LABEL_33:
            if ( !v20 && v8 > 0 )
              goto LABEL_35;
LABEL_19:
            if ( v8 >= abs32(v19) )
              v8 = v19;
            v4 = v21;
            v14 += v8;
            if ( v21 == v16 )
            {
LABEL_36:
              v27 = *(this + 4638);
              goto LABEL_37;
            }
          }
        }
      }
      v27 = v2;
      v14 = v8;
LABEL_37:
      v28 = *(this + 4644);
      *(this + 4662) = v6 / v27;
      *(this + 4663) = v7 / v27;
      *(this + 4664) = v14 / v27;
      if ( v28 <= 0 )
      {
        v30 = 0;
        v32 = 0.0;
      }
      else
      {
        v29 = 0;
        v30 = 0;
        v31 = *(this + 2323);
        v32 = 0.0;
        while ( 1 )
        {
          v35 = v27 - 1;
          v36 = v29 + v31;
          if ( *v36 <= v27 - 1 )
            v35 = *v36;
          v37 = *&v3[5 * v35 + 2];
          if ( v37 < 0.0 )
            v37 = -v37;
          v33 = 1.0;
          v34 = (v37 - 0.050000001) / 0.32499999;
          if ( v34 >= 0.0 )
          {
            v33 = 0.19999999;
            if ( v34 <= 1.0 )
              v33 = (v34 * -0.80000001) + 1.0;
          }
          ++v30;
          *(v36 + 4) = v33 * *(v36 + 4);
          v31 = *(this + 2323);
          v32 = v32 + *(v31 + v29 + 4);
          v29 += 12;
          if ( *(this + 4644) <= v30 )
            break;
          v27 = *(this + 4638);
          v3 = *(this + 2320);
        }
      }
      if ( *(this + 4650) <= 0 )
      {
        v38 = 0;
        v39 = 0.0;
      }
      else
      {
        v56 = 0;
        v38 = 0;
        v57 = *(this + 2326);
        v39 = 0.0;
        do
        {
          v60 = v56 + v57;
          v61 = *(this + 4638) - 1;
          if ( *v60 <= v61 )
            v61 = *v60;
          v62 = *(*(this + 2320) + 20LL * v61 + 8);
          if ( v62 < 0.0 )
            v62 = -v62;
          v58 = 1.0;
          v59 = (v62 - 0.050000001) / 0.32499999;
          if ( v59 >= 0.0 )
          {
            v58 = 0.19999999;
            if ( v59 <= 1.0 )
              v58 = (v59 * -0.80000001) + 1.0;
          }
          ++v38;
          *(v60 + 4) = v58 * *(v60 + 4);
          v57 = *(this + 2326);
          v39 = v39 + *(v57 + v56 + 4);
          v56 += 12;
        }
        while ( *(this + 4650) > v38 );
      }
      if ( v32 > 0.0 && *(this + 4644) > 0 )
      {
        v40 = *(this + 2323);
        v41 = 0;
        v42 = 0;
        do
        {
          ++v42;
          *(v41 + v40 + 4) = *(v41 + v40 + 4) * (v30 / v32);
          v40 = *(this + 2323);
          v43 = v40 + v41;
          v41 += 12;
          v44 = (this + 4 * *(v43 + 8));
          v44[4666] = v44[4666] + *(v43 + 4);
        }
        while ( *(this + 4644) > v42 );
      }
      v45 = *(this + 4656);
      if ( v45 > 0 )
      {
        v46 = *(this + 2329);
        v47 = v46 + 12;
        v48 = v46 + 12 + 12LL * (v45 - 1);
        while ( 1 )
        {
          v49 = (this + 4 * *(v46 + 8));
          v50 = v49[4690] + *(v46 + 4);
          v46 = v47;
          v49[4690] = v50;
          if ( v47 == v48 )
            break;
          v47 += 12;
        }
      }
      if ( v39 > 0.0 && *(this + 4650) > 0 )
      {
        v51 = *(this + 2326);
        v52 = 0;
        v53 = 0;
        do
        {
          ++v53;
          *(v52 + v51 + 4) = *(v52 + v51 + 4) * (v38 / v39);
          v51 = *(this + 2326);
          v54 = v51 + v52;
          v52 += 12;
          v55 = (this + 4 * *(v54 + 8));
          v55[4714] = v55[4714] + *(v54 + 4);
        }
        while ( *(this + 4650) > v53 );
      }
    }
  }
}


// CDOTA_PlayerResource::ClearTimedRewards  (line 4290, @0x0000000002660d90, libserver.so)  // inlines: Element, Get, NetworkStateChanged, Set, operator CEntityInstance*, operator=<eEconItemOrigin>, operator=<int>, operator[]
// callers: CDOTA_PlayerResource::Spawn, CGCClientJobUploadMatchStats::BYieldingRunJob
void __fastcall CDOTA_PlayerResource::ClearTimedRewards(CDOTA_PlayerResource *const this)
{
  __int64 v2; // r13
  int i; // r12d
  __int64 v4; // rbx
  _QWORD *v5; // rdi
  int v6; // eax
  _QWORD *v7; // rdi
  int v8; // eax
  _QWORD *v9; // rdi
  int v10; // eax
  _QWORD *v11; // rdi

  v2 = 0;
  for ( i = 0; i < *(this + 194); ++i )
  {
    v4 = *(this + 98) + v2;
    if ( *(v4 + 80) != 0 )
    {
      v5 = *(v4 + 8);
      if ( v5 != 0 && (*(v5[1] + 49LL) & 4) == 0 && *(v4 + 16) != 0xFFFF )
        (*(*v5 + 176LL))(v5, 80, 0xFFFFFFFFLL, *(v4 + 16));
      v6 = *(v4 + 84);
      *(v4 + 80) = 0;
      if ( v6 == 0 )
      {
LABEL_4:
        if ( *(v4 + 88) != 0 )
          goto LABEL_18;
        goto LABEL_5;
      }
    }
    else if ( *(v4 + 84) == 0 )
    {
      goto LABEL_4;
    }
    v7 = *(v4 + 8);
    if ( v7 != 0 && (*(v7[1] + 49LL) & 4) == 0 && *(v4 + 16) != 0xFFFF )
      (*(*v7 + 176LL))(v7, 84, 0xFFFFFFFFLL, *(v4 + 16));
    v8 = *(v4 + 88);
    *(v4 + 84) = 0;
    if ( v8 != 0 )
    {
LABEL_18:
      v9 = *(v4 + 8);
      if ( v9 != 0 && (*(v9[1] + 49LL) & 4) == 0 && *(v4 + 16) != 0xFFFF )
        (*(*v9 + 176LL))(v9, 88, 0xFFFFFFFFLL, *(v4 + 16));
      v10 = *(v4 + 92);
      *(v4 + 88) = 0;
      if ( v10 == 0 )
        goto LABEL_6;
LABEL_23:
      v11 = *(v4 + 8);
      if ( v11 != 0 && (*(v11[1] + 49LL) & 4) == 0 && *(v4 + 16) != 0xFFFF )
        (*(*v11 + 176LL))(v11, 92, 0xFFFFFFFFLL, *(v4 + 16));
      *(v4 + 92) = 0;
      goto LABEL_6;
    }
LABEL_5:
    if ( *(v4 + 92) != 0 )
      goto LABEL_23;
LABEL_6:
    v2 += 200;
  }
}


// CDOTA_PlayerResource::AddTimedReward  (line 4305, @0x0000000002660f10, libserver.so)  // inlines: Element, Get, IsValidTeamPlayerID, NetworkStateChanged, Set, operator CEntityInstance*, operator=<unsigned int>, operator[]
// callers: CGCClientJobUploadMatchStats::BYieldingRunJob
void __fastcall CDOTA_PlayerResource::AddTimedReward(
        CDOTA_PlayerResource *const this,
        int iPlayerID,
        const CLobbyTimedRewardDetails *pRewardDetails)
{
  int v5; // r12d
  __int64 v6; // rbx
  _QWORD *v7; // rdi
  int v8; // eax
  __int64 v9; // r15
  __int64 v10; // r13
  __int64 v11; // r14
  _QWORD *v12; // rdi
  int v13; // r13d
  int v14; // eax
  _QWORD *v15; // rdi
  __int64 v16; // r15
  int v17; // ebx
  _QWORD *v18; // rdi
  int v19; // [rsp-3Ch] [rbp-3Ch]

  if ( iPlayerID >= 0 && iPlayerID < *(this + 194) )
  {
    if ( *(pRewardDetails + 28) != 0 )
    {
      v5 = *(pRewardDetails + 6);
      v6 = *(this + 98) + 200LL * iPlayerID;
      if ( v5 != *(v6 + 88) )
      {
        v7 = *(v6 + 8);
        if ( v7 != 0 && (*(v7[1] + 49LL) & 4) == 0 && *(v6 + 16) != 0xFFFF )
          (*(*v7 + 176LL))(v7, 88, 0xFFFFFFFFLL, *(v6 + 16));
        *(v6 + 88) = v5;
      }
    }
    else
    {
      v8 = *(pRewardDetails + 6);
      v9 = 200LL * iPlayerID;
      v10 = *(this + 98) + v9;
      v11 = v10;
      if ( v8 != *(v10 + 80) )
      {
        v12 = *(v10 + 8);
        if ( v12 != 0 && (*(v12[1] + 49LL) & 4) == 0 && *(v10 + 16) != 0xFFFF )
        {
          v19 = *(pRewardDetails + 6);
          (*(*v12 + 176LL))(v12, 80, 0xFFFFFFFFLL, *(v10 + 16));
          v8 = v19;
        }
        *(v10 + 80) = v8;
        v11 = *(this + 98) + v9;
      }
      v13 = *(pRewardDetails + 9);
      v14 = v13;
      if ( v13 != *(v11 + 84) )
      {
        v15 = *(v11 + 8);
        if ( v15 != 0 && (*(v15[1] + 49LL) & 4) == 0 && *(v11 + 16) != 0xFFFF )
          (*(*v15 + 176LL))(v15, 84, 0xFFFFFFFFLL, *(v11 + 16));
        *(v11 + 84) = v13;
        v14 = *(pRewardDetails + 9);
      }
      if ( v14 == 30 )
      {
        v16 = *(this + 98) + v9;
        v17 = *(pRewardDetails + 6);
        if ( v17 != *(v16 + 92) )
        {
          v18 = *(v16 + 8);
          if ( v18 != 0 && (*(v18[1] + 49LL) & 4) == 0 && *(v16 + 16) != 0xFFFF )
            (*(*v18 + 176LL))(v18, 92, 0xFFFFFFFFLL, *(v16 + 16));
          *(v16 + 92) = v17;
        }
      }
    }
  }
}


// CDOTA_PlayerResource::GetTimedEventDrop  (line 4326, @0x00000000026610d0, libserver.so)  // inlines: Element, IsValidTeamPlayerID, operator[]
int __fastcall CDOTA_PlayerResource::GetTimedEventDrop(CDOTA_PlayerResource *const this, int iPlayerID)
{
  int result; // eax

  result = 0;
  if ( iPlayerID >= 0 && iPlayerID < *(this + 194) )
    return *(*(this + 98) + 200LL * iPlayerID + 92);
  return result;
}


// CDOTA_PlayerResource::SetMetaExperience  (line 4335, @0x0000000002664830, libserver.so)  // inlines: CSteamID, Get, NetworkStateChanged, Set, SetFromUint64, operator CEntityInstance*, operator=<short unsigned int>
// calls: CDOTA_PlayerResource::GetTeamDataForPlayer, LoggingSystem_IsChannelEnabled, CDOTA_PlayerResource::GetSteamID, CSteamID::Render, LoggingSystem_Log
// callers: CDOTA_PlayerResource::DataTeamSpawn, CGCClientJobUploadMatchStats::BYieldingRunJob
// strings: "PR:SetMetaExperience %d:%s Level:%d, XP:%d, XPAwarded:%d\n"
void __fastcall CDOTA_PlayerResource::SetMetaExperience(
        CDOTA_PlayerResource *const this,
        int iPlayerID,
        uint16 unLevel,
        uint16 unXP,
        uint16 unXPAwarded)
{
  DataTeamPlayer_t *TeamDataForPlayer; // rax
  CEntityInstance *m_pObj; // rdi
  CEntityInstance *v12; // rdi
  CEntityInstance *v13; // rdi
  const char *v14; // rax
  DataTeamPlayer_t *pTeamData; // [rsp+18h] [rbp-48h]
  DataTeamPlayer_t *pTeamDataa; // [rsp+18h] [rbp-48h]
  DataTeamPlayer_t *pTeamDatab; // [rsp+18h] [rbp-48h]
  CSteamID v18; // [rsp+20h] [rbp-40h] BYREF

  TeamDataForPlayer = CDOTA_PlayerResource::GetTeamDataForPlayer(this, iPlayerID);
  if ( TeamDataForPlayer != 0 )
  {
    if ( TeamDataForPlayer->m_iMetaLevel.m_Value != unLevel )
    {
      m_pObj = TeamDataForPlayer->__m_pChainEntity.m_pObj;
      if ( m_pObj != 0 && (m_pObj->m_pEntity->m_flags & 0x400) == 0 && TeamDataForPlayer->__m_PathIndex.m_Value != -1 )
      {
        pTeamData = TeamDataForPlayer;
        (*(m_pObj->_vptr_IHandleEntity + 22))(m_pObj, 96, 0xFFFFFFFFLL, TeamDataForPlayer->__m_PathIndex.m_Value);
        TeamDataForPlayer = pTeamData;
      }
      TeamDataForPlayer->m_iMetaLevel.m_Value = unLevel;
    }
    if ( TeamDataForPlayer->m_iMetaExperience.m_Value != unXP )
    {
      v12 = TeamDataForPlayer->__m_pChainEntity.m_pObj;
      if ( v12 != 0 && (v12->m_pEntity->m_flags & 0x400) == 0 && TeamDataForPlayer->__m_PathIndex.m_Value != -1 )
      {
        pTeamDataa = TeamDataForPlayer;
        (*(v12->_vptr_IHandleEntity + 22))(v12, 98, 0xFFFFFFFFLL, TeamDataForPlayer->__m_PathIndex.m_Value);
        TeamDataForPlayer = pTeamDataa;
      }
      TeamDataForPlayer->m_iMetaExperience.m_Value = unXP;
    }
    if ( TeamDataForPlayer->m_iMetaExperienceAwarded.m_Value != unXPAwarded )
    {
      v13 = TeamDataForPlayer->__m_pChainEntity.m_pObj;
      if ( v13 != 0 && (v13->m_pEntity->m_flags & 0x400) == 0 && TeamDataForPlayer->__m_PathIndex.m_Value != -1 )
      {
        pTeamDatab = TeamDataForPlayer;
        (*(v13->_vptr_IHandleEntity + 22))(v13, 100, 0xFFFFFFFFLL, TeamDataForPlayer->__m_PathIndex.m_Value);
        TeamDataForPlayer = pTeamDatab;
      }
      TeamDataForPlayer->m_iMetaExperienceAwarded.m_Value = unXPAwarded;
    }
    if ( LoggingSystem_IsChannelEnabled(LOG_SERVER, 1) != 0 )
    {
      v18.m_steamid.m_comp = CDOTA_PlayerResource::GetSteamID(this, iPlayerID);
      v14 = CSteamID::Render(&v18);
      LoggingSystem_Log(
        LOG_SERVER,
        1,
        "PR:SetMetaExperience %d:%s Level:%d, XP:%d, XPAwarded:%d\n",
        iPlayerID,
        v14,
        unLevel,
        unXP,
        unXPAwarded);
    }
  }
}


// CDOTA_PlayerResource::SetEventPoints  (line 4347, @0x0000000002661100, libserver.so)  // inlines: CSteamID, Element, Get, IsValidTeamPlayerID, NetworkStateChanged, Set, SetFromUint64, operator CEntityInstance*, operator=<bool>, operator=<short unsigned int>, operator=<unsigned int>, operator[]
// calls: LoggingSystem_IsChannelEnabled, CDOTA_PlayerResource::GetSteamID, CSteamID::Render, LoggingSystem_Log
// callers: CDOTA_PlayerResource::InitPlayersWithLobby, CGCClientJobUploadMatchStats::BYieldingRunJob
// strings: "PR:SetEventPoints %d:%s Points:%d, PremiumPoints:%d, Rank:%d\n"
void __fastcall CDOTA_PlayerResource::SetEventPoints(
        CDOTA_PlayerResource *const this,
        int iPlayerID,
        bool bIsOwned,
        uint32 unEventPoints,
        uint32 unEventPremiumPoints,
        uint16 unEventRank,
        uint32 unWagerTokensRemaining,
        uint32 unWagerTokensMax,
        uint32 nEffectsMask)
{
  __int64 v14; // rax
  __int64 v15; // r8
  _QWORD *v16; // rdi
  __int64 v17; // rbx
  _QWORD *v18; // rdi
  _QWORD *v19; // rdi
  _QWORD *v20; // rdi
  _QWORD *v21; // rdi
  _QWORD *v22; // rdi
  _QWORD *v23; // rdi
  const char *v24; // rax
  __int64 v25; // [rsp+18h] [rbp-58h]
  __int64 v26; // [rsp+20h] [rbp-50h]
  __int64 v27; // [rsp+20h] [rbp-50h]
  __int64 v28; // [rsp+20h] [rbp-50h]
  __int64 v29; // [rsp+20h] [rbp-50h]
  __int64 v30; // [rsp+20h] [rbp-50h]
  __int64 v31; // [rsp+20h] [rbp-50h]
  CSteamID v33; // [rsp+30h] [rbp-40h] BYREF

  if ( iPlayerID >= 0 && iPlayerID < *(this + 194) )
  {
    v14 = 200LL * iPlayerID;
    v15 = *(this + 98) + v14;
    if ( *(v15 + 150) == bIsOwned )
    {
      v17 = *(this + 98) + 200LL * iPlayerID;
    }
    else
    {
      v16 = *(v15 + 8);
      if ( v16 != 0 && (*(v16[1] + 49LL) & 4) == 0 && *(v15 + 16) != 0xFFFF )
      {
        v25 = 200LL * iPlayerID;
        v26 = v15;
        (*(*v16 + 176LL))(v16, 150, 0xFFFFFFFFLL, *(v15 + 16));
        v15 = v26;
        v14 = v25;
      }
      *(v15 + 150) = bIsOwned;
      v17 = *(this + 98) + v14;
    }
    if ( *(v17 + 128) != unEventPoints )
    {
      v18 = *(v17 + 8);
      if ( v18 != 0 && (*(v18[1] + 49LL) & 4) == 0 && *(v17 + 16) != 0xFFFF )
      {
        v27 = v14;
        (*(*v18 + 176LL))(v18, 128, 0xFFFFFFFFLL, *(v17 + 16));
        v14 = v27;
      }
      *(v17 + 128) = unEventPoints;
      v17 = *(this + 98) + v14;
    }
    if ( *(v17 + 132) != unEventPremiumPoints )
    {
      v19 = *(v17 + 8);
      if ( v19 != 0 && (*(v19[1] + 49LL) & 4) == 0 && *(v17 + 16) != 0xFFFF )
      {
        v28 = v14;
        (*(*v19 + 176LL))(v19, 132, 0xFFFFFFFFLL, *(v17 + 16));
        v14 = v28;
      }
      *(v17 + 132) = unEventPremiumPoints;
      v17 = *(this + 98) + v14;
    }
    if ( *(v17 + 148) != unEventRank )
    {
      v20 = *(v17 + 8);
      if ( v20 != 0 && (*(v20[1] + 49LL) & 4) == 0 && *(v17 + 16) != 0xFFFF )
      {
        v29 = v14;
        (*(*v20 + 176LL))(v20, 148, 0xFFFFFFFFLL, *(v17 + 16));
        v14 = v29;
      }
      *(v17 + 148) = unEventRank;
      v17 = *(this + 98) + v14;
    }
    if ( *(v17 + 136) != unWagerTokensRemaining )
    {
      v21 = *(v17 + 8);
      if ( v21 != 0 && (*(v21[1] + 49LL) & 4) == 0 && *(v17 + 16) != 0xFFFF )
      {
        v30 = v14;
        (*(*v21 + 176LL))(v21, 136, 0xFFFFFFFFLL, *(v17 + 16));
        v14 = v30;
      }
      *(v17 + 136) = unWagerTokensRemaining;
      v17 = *(this + 98) + v14;
    }
    if ( *(v17 + 140) != unWagerTokensMax )
    {
      v22 = *(v17 + 8);
      if ( v22 != 0 && (*(v22[1] + 49LL) & 4) == 0 && *(v17 + 16) != 0xFFFF )
      {
        v31 = v14;
        (*(*v22 + 176LL))(v22, 140, 0xFFFFFFFFLL, *(v17 + 16));
        v14 = v31;
      }
      *(v17 + 140) = unWagerTokensMax;
      v17 = *(this + 98) + v14;
    }
    if ( *(v17 + 144) != nEffectsMask )
    {
      v23 = *(v17 + 8);
      if ( v23 != 0 && (*(v23[1] + 49LL) & 4) == 0 && *(v17 + 16) != 0xFFFF )
        (*(*v23 + 176LL))(v23, 144, 0xFFFFFFFFLL, *(v17 + 16));
      *(v17 + 144) = nEffectsMask;
    }
    if ( LoggingSystem_IsChannelEnabled(LOG_SERVER, 1) != 0 )
    {
      v33.m_steamid.m_comp = CDOTA_PlayerResource::GetSteamID(this, iPlayerID);
      v24 = CSteamID::Render(&v33);
      LoggingSystem_Log(
        LOG_SERVER,
        1,
        "PR:SetEventPoints %d:%s Points:%d, PremiumPoints:%d, Rank:%d\n",
        iPlayerID,
        v24,
        unEventPoints,
        unEventPremiumPoints,
        unEventRank);
    }
  }
}


// CDOTA_PlayerResource::SetBattleCupVictory  (line 4364, @0x0000000002661430, libserver.so)  // inlines: CSteamID, Element, Get, IsValidTeamPlayerID, NetworkStateChanged, Set, SetFromUint64, _M_data, c_str, operator CEntityInstance*, operator=<unsigned int>, operator[], ~basic_string
// calls: LoggingSystem_IsChannelEnabled, google::protobuf::Message::ShortDebugString(void), CDOTA_PlayerResource::GetSteamID, CSteamID::Render, LoggingSystem_Log, std::string::_Rep::_M_dispose(std::allocator<char> const&), _Unwind_Resume
// callers: CDOTA_PlayerResource::InitPlayersWithLobby
// strings: "PR:SetBattleCupVictory %d:%s %s\n"
void __fastcall CDOTA_PlayerResource::SetBattleCupVictory(
        CDOTA_PlayerResource *const this,
        int iPlayerID,
        const CMsgBattleCupVictory *const msgVictory)
{
  __int64 v3; // r12
  const char *v6; // r15
  const char *v7; // rax
  int v8; // eax
  __int64 v9; // r14
  __int64 v10; // r12
  _QWORD *v11; // rdi
  __int64 v12; // r15
  _QWORD *v13; // rdi
  int v14; // r15d
  _QWORD *v15; // rdi
  int v16; // r15d
  _QWORD *v17; // rdi
  int v18; // r15d
  _QWORD *v19; // rdi
  int v20; // ebx
  _QWORD *v21; // rdi
  int v22; // [rsp+Ch] [rbp-54h]
  CSteamID v23; // [rsp+10h] [rbp-50h] BYREF
  const char *v24; // [rsp+20h] [rbp-40h] BYREF

  v3 = iPlayerID;
  if ( iPlayerID >= 0 && iPlayerID < *(this + 194) )
  {
    if ( LoggingSystem_IsChannelEnabled(LOG_SERVER, 1) != 0 )
    {
      google::protobuf::Message::ShortDebugString(&v24);
      v6 = v24;
      v23.m_steamid.m_comp = CDOTA_PlayerResource::GetSteamID(this, v3);
      v7 = CSteamID::Render(&v23);
      LoggingSystem_Log(LOG_SERVER, 1, "PR:SetBattleCupVictory %d:%s %s\n", v3, v7, v6);
      std::string::_Rep::_M_dispose(v24 - 24, &v23);
    }
    v8 = *(msgVictory + 13);
    v9 = 200 * v3;
    v10 = *(this + 98) + 200 * v3;
    if ( v8 != *(v10 + 156) )
    {
      v11 = *(v10 + 8);
      if ( v11 != 0 && (*(v11[1] + 49LL) & 4) == 0 && *(v10 + 16) != 0xFFFF )
      {
        v22 = *(msgVictory + 13);
        (*(*v11 + 176LL))(v11, 156, 0xFFFFFFFFLL, *(v10 + 16));
        LOBYTE(v8) = v22;
      }
      *(v10 + 156) = v8;
      v10 = *(this + 98) + v9;
    }
    v12 = *(msgVictory + 7);
    if ( v12 != *(v10 + 160) )
    {
      v13 = *(v10 + 8);
      if ( v13 != 0 && (*(v13[1] + 49LL) & 4) == 0 && *(v10 + 16) != 0xFFFF )
        (*(*v13 + 176LL))(v13, 160, 0xFFFFFFFFLL, *(v10 + 16));
      *(v10 + 160) = v12;
      v10 = *(this + 98) + v9;
    }
    v14 = *(msgVictory + 9);
    if ( v14 != *(v10 + 168) )
    {
      v15 = *(v10 + 8);
      if ( v15 != 0 && (*(v15[1] + 49LL) & 4) == 0 && *(v10 + 16) != 0xFFFF )
        (*(*v15 + 176LL))(v15, 168, 0xFFFFFFFFLL, *(v10 + 16));
      *(v10 + 168) = v14;
      v10 = *(this + 98) + v9;
    }
    v16 = *(msgVictory + 12);
    if ( v16 != *(v10 + 172) )
    {
      v17 = *(v10 + 8);
      if ( v17 != 0 && (*(v17[1] + 49LL) & 4) == 0 && *(v10 + 16) != 0xFFFF )
        (*(*v17 + 176LL))(v17, 172, 0xFFFFFFFFLL, *(v10 + 16));
      *(v10 + 172) = v16;
      v10 = *(this + 98) + v9;
    }
    v18 = *(msgVictory + 10);
    if ( v18 != *(v10 + 176) )
    {
      v19 = *(v10 + 8);
      if ( v19 != 0 && (*(v19[1] + 49LL) & 4) == 0 && *(v10 + 16) != 0xFFFF )
        (*(*v19 + 176LL))(v19, 176, 0xFFFFFFFFLL, *(v10 + 16));
      *(v10 + 176) = v18;
      v10 = *(this + 98) + v9;
    }
    v20 = *(msgVictory + 11);
    if ( v20 != *(v10 + 180) )
    {
      v21 = *(v10 + 8);
      if ( v21 != 0 && (*(v21[1] + 49LL) & 4) == 0 && *(v10 + 16) != 0xFFFF )
        (*(*v21 + 176LL))(v21, 180, 0xFFFFFFFFLL, *(v10 + 16));
      *(v10 + 180) = v20;
    }
  }
}


// CDOTA_PlayerResource::InitLobbySteamIDs  (line 4380, @0x0000000002661720, libserver.so)  // inlines: ClearLobbySteamIDs
// calls: CDOTALobby::GetFullNumMembers, CDOTALobby::GetFullMemberDetails
// callers: CDOTA_PlayerResource::Spawn, CDOTAGCServerSystem::ActivateServerFromLobby
// globals: CDOTA_PlayerResource::s_unLobbySteamID, g_pDOTAPlayerResource
void __fastcall CDOTA_PlayerResource::InitLobbySteamIDs(const CDOTALobby *pLobby)
{
  CDOTA_PlayerResource **v1; // rax
  int v3; // r14d
  int i; // r13d
  CDOTALobby::FullMemberIndex_t v5; // r12d
  CDOTALobby::FullMemberIndex_t v6; // r15d
  uint32 v7; // edx
  const CDOTALobbyMember *FullMemberDetails; // rax
  unsigned __int64 v9; // rcx
  int v10; // eax
  int v11; // edi
  CDOTALobby::FullMemberIndex_t v12; // r15d
  CDOTALobby::FullMemberIndex_t v13; // r12d
  const CDOTALobbyMember *v14; // rax
  unsigned __int64 v15; // rax
  CDOTA_PlayerResource **v16; // rdx
  int nMaxGoodSlot; // [rsp+Ch] [rbp-34h]

  v1 = &CDOTA_PlayerResource::s_unLobbySteamID;
  do
    *v1++ = 0;
  while ( v1 != &g_pDOTAPlayerResource );
  if ( pLobby != 0 )
  {
    v3 = 0;
    nMaxGoodSlot = 0;
    for ( i = 0; i != 2; ++i )
    {
      v5.m_nIndex = CDOTALobby::GetFullNumMembers(pLobby).m_nIndex;
      if ( v5.m_nIndex != 0 )
      {
        for ( v6.m_nIndex = 0; ; v6.m_nIndex = v7 )
        {
          FullMemberDetails = CDOTALobby::GetFullMemberDetails(pLobby, v6);
          if ( FullMemberDetails != 0 && (v9 = *(FullMemberDetails + 3)) != 0 && i == *(FullMemberDetails + 9) )
          {
            v10 = *(FullMemberDetails + 14) - 1;
            if ( i == 1 )
            {
              v10 += nMaxGoodSlot + 1;
            }
            else
            {
              v11 = nMaxGoodSlot;
              if ( nMaxGoodSlot < v10 )
                v11 = v10;
              nMaxGoodSlot = v11;
            }
            v7 = v6.m_nIndex + 1;
            if ( v3 < v10 )
              v3 = v10;
            CDOTA_PlayerResource::s_unLobbySteamID.m_Memory[v10] = v9;
            if ( v7 == v5.m_nIndex )
              break;
          }
          else
          {
            v7 = v6.m_nIndex + 1;
            if ( v6.m_nIndex + 1 == v5.m_nIndex )
              break;
          }
        }
      }
    }
    v12.m_nIndex = 0;
    v13.m_nIndex = CDOTALobby::GetFullNumMembers(pLobby).m_nIndex;
    if ( v13.m_nIndex != 0 )
    {
      do
      {
LABEL_21:
        v14 = CDOTALobby::GetFullMemberDetails(pLobby, v12);
        if ( v14 != 0 )
        {
          v15 = *(v14 + 3);
          if ( v15 != 0 )
          {
            v16 = &CDOTA_PlayerResource::s_unLobbySteamID;
            while ( v15 != *v16 )
            {
              if ( ++v16 == &g_pDOTAPlayerResource )
              {
                ++v3;
                ++v12.m_nIndex;
                CDOTA_PlayerResource::s_unLobbySteamID.m_Memory[v3] = v15;
                if ( v12.m_nIndex != v13.m_nIndex )
                  goto LABEL_21;
                return;
              }
            }
          }
        }
        ++v12.m_nIndex;
      }
      while ( v12.m_nIndex != v13.m_nIndex );
    }
  }
}


// CDOTA_PlayerResource::SeenSteamID  (line 4458, @0x00000000026618a0, libserver.so)
// callers: CDOTAGCServerSystem::SteamIDAllowedToConnect, CDOTAGCServerSystem::SteamIDAllowedToP2PConnect
// globals: CDOTA_PlayerResource::s_unLobbySteamID
bool __fastcall CDOTA_PlayerResource::SeenSteamID(CSteamID steamID)
{
  CUtlArray<long long unsigned int,64ul> *v1; // rax

  v1 = &CDOTA_PlayerResource::s_unLobbySteamID;
  do
  {
    if ( v1->m_Memory[0] == steamID.m_steamid.m_comp )
      return 1;
    v1 = (v1 + 8);
  }
  while ( v1 != &CDOTA_PlayerResource::s_unLobbySteamID.m_Memory[24] );
  return 0;
}


// CDOTA_PlayerResource::OnCourierSpawned  (line 4473, @0x0000000002685440, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, CopyConstruct<CHandle<CDOTA_Unit_Courier> >, Element, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, GrowMemory, IndexToIdentity, LookupEntity, Set, operator CEntityInstance*, operator[]
// calls: CUtlMemory<CHandle<CDOTA_Unit_Courier>, int>::Grow
// callers: CDOTA_Unit_Courier::Spawn
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_PlayerResource::OnCourierSpawned(CDOTA_PlayerResource *const this, CDOTA_Unit_Courier *pCourier)
{
  char *v2; // r12
  __int64 v3; // rbx
  char *v4; // r13
  __int64 v5; // rax
  int v6; // edx
  CEntityIdentity *v7; // rcx
  CEntityIdentity *v8; // rcx
  CEntityIdentity *m_pEntity; // rdx
  __int16 v10; // cx
  int v11; // eax
  int *v12; // rax
  int v13; // [rsp-8h] [rbp-38h]

  if ( pCourier != 0 )
  {
    v2 = this + 24 * pCourier->m_iTeamNum.m_Value + 18944;
    v3 = *(this + 6 * pCourier->m_iTeamNum.m_Value + 4738);
    v4 = this + 24 * pCourier->m_iTeamNum.m_Value + 18952;
    if ( v3 <= 0 )
    {
LABEL_11:
      m_pEntity = pCourier->m_pEntity;
      v13 = -1;
      if ( m_pEntity != 0 )
      {
        v10 = 0x7FFF;
        if ( m_pEntity->m_EHandle.m_Index != -1 )
          v10 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        v13 = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v10 & 0x7FFF;
      }
      v11 = *(this + 6 * pCourier->m_iTeamNum.m_Value + 4738);
      if ( *(this + 6 * pCourier->m_iTeamNum.m_Value + 4742) == v3 )
      {
        CUtlMemory<CHandle<CDOTA_Unit_Courier>,int>::Grow((this + 24 * pCourier->m_iTeamNum.m_Value + 18960), 1);
        v11 = *(v2 + 2);
      }
      *(v2 + 2) = v11 + 1;
      v12 = (*(v4 + 1) + 4 * v3);
      if ( v12 != 0 )
        *v12 = v13;
    }
    else
    {
      v5 = 0;
      while ( 1 )
      {
        v6 = *(*(this + 3 * pCourier->m_iTeamNum.m_Value + 2370) + 4 * v5);
        if ( (v6 + 2) > 1 )
        {
          v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v6 >> 9) & 0x3F];
          if ( v7 != 0 )
          {
            v8 = &v7[v6 & 0x1FF];
            if ( v8 != 0 && v6 == v8->m_EHandle.m_Index && pCourier == v8->m_pInstance )
              break;
          }
        }
        if ( v3 <= ++v5 )
          goto LABEL_11;
      }
    }
  }
}


// CDOTA_PlayerResource::GetNumCouriersForTeam  (line 4500, @0x0000000002654050, libserver.so)
// callers: CDOTA_Bot::GetIncomingCourier, CDOTA_Bot::GetCourierValue, CDOTA_Bot::ConsiderCourierUsage, Script_IsCourierAvailable, CDOTA_Bot_Script::Action_Courier, Playtesting_MoveToOtherTeam, CDOTA_BaseNPC::AttemptToPurchaseItem, CDOTA_Item_Flying_Courier::Think, CDOTA_Item_Courier::OnPurchase
int __fastcall CDOTA_PlayerResource::GetNumCouriersForTeam(CDOTA_PlayerResource *const this, int nTeamNumber)
{
  return *(this + 6 * nTeamNumber + 4738);
}


// CDOTA_PlayerResource::GetNthCourierForTeam  (line 4507, @0x00000000026618e0, libserver.so)  // inlines: Element, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsPlayerTeam, IsValid, IsValidIndex, LookupEntity, operator CDOTA_Unit_Courier*, operator CEntityInstance*, operator[]
// callers: TimePathBuilding, CDOTA_PlayerResource::Script_GetNthCourierForTeam, CDOTA_PlayerResource::ComputeNetWorth, CDOTA_Tutorial::ParseLessonKeys, CDOTA_Bot::GetIncomingCourier, CDOTA_Bot::GetCourierValue, CDOTA_Bot::ConsiderCourierUsage, Script_IsCourierAvailable, CDOTA_Bot_Script::Action_Courier, Playtesting_MoveToOtherTeam, CDOTA_BaseNPC::AttemptToPurchaseItem, CDOTA_Item_Flying_Courier::Think
// globals: CEntityHandle::gm_pEntityList
CDOTA_Unit_Courier *__fastcall CDOTA_PlayerResource::GetNthCourierForTeam(
        CDOTA_PlayerResource *const this,
        int nCourierIndex,
        int nTeamNumber)
{
  CDOTA_Unit_Courier *result; // rax
  char *v4; // rdx
  unsigned __int16 *v5; // rdx
  int v6; // esi
  __int16 v7; // cx
  CEntityIdentity *v8; // rdx
  CEntityIdentity *v9; // rdx

  if ( (nTeamNumber - 6) > 7 && (nTeamNumber - 2) > 1 )
    return 0;
  result = 0;
  if ( nCourierIndex >= 0 )
  {
    v4 = this + 24 * nTeamNumber + 18944;
    if ( nCourierIndex < *(v4 + 2) )
    {
      v5 = (*(v4 + 2) + 4LL * nCourierIndex);
      result = 0;
      v6 = *v5;
      if ( (*v5 + 2) > 1 )
      {
        v7 = *v5;
        v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(*v5 >> 9) & 0x3F];
        if ( v8 != 0 )
        {
          v9 = &v8[v7 & 0x1FF];
          if ( v9 != 0 && v6 == v9->m_EHandle.m_Index )
            return v9->m_pInstance;
        }
      }
    }
  }
  return result;
}


// CDOTA_PlayerResource::Script_GetNthCourierForTeam  (line 4520, @0x0000000002661980, libserver.so)  // inlines: EntityToHScript, Get, GetPublicScriptScope, ToHScript
// calls: CDOTA_PlayerResource::GetNthCourierForTeam, CEntityInstance::CreatePublicScriptScope
HSCRIPT __fastcall CDOTA_PlayerResource::Script_GetNthCourierForTeam(
        CDOTA_PlayerResource *const this,
        int nCourierIndex,
        int nTeamNumber)
{
  CDOTA_Unit_Courier *NthCourierForTeam; // rax
  CDOTA_Unit_Courier *v5; // [rsp+8h] [rbp-8h]

  NthCourierForTeam = CDOTA_PlayerResource::GetNthCourierForTeam(this, nCourierIndex, nTeamNumber);
  if ( NthCourierForTeam == 0 )
    return 0;
  if ( NthCourierForTeam->m_pEntity->m_hPublicScope.m_hScope != 0 )
    return NthCourierForTeam->m_pEntity->m_hPublicScope.m_hScope;
  v5 = NthCourierForTeam;
  CEntityInstance::CreatePublicScriptScope(NthCourierForTeam, 0);
  return v5->m_pEntity->m_hPublicScope.m_hScope;
}


// CDOTA_PlayerResource::WriteSaveGameInformation  (line 4527, @0x00000000026634f0, libserver.so)  // inlines: Get, GetDenies, GetEntityIdentity, GetEntryIndex, GetInstance, GetLastHits, GetReliableGold, GetUnreliableGold, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: KeyValues::CreateNewKey, KeyValues::SetName, CDOTA_PlayerResource::GetStreak, KeyValues::SetInt, CDOTA_PlayerResource::GetTeamDataForPlayer, CDOTA_PlayerResource::GetSelectedHeroName, KeyValues::SetString, CDOTA_PlayerResource::GetPlayerSelectedHeroHandle, UTIL_VarArgs, CDOTA_PlayerResource::GetSteamID, KeyValues::SetUint64, CDOTA_PlayerResource::GetPlayer (16 total)
// callers: PerformDOTASaveGame
// strings: "unreliablegold", "lasthits", "denies", "radiant_deaths", "dire_deaths", "steamid" (8 total)
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_PlayerResource::WriteSaveGameInformation(CDOTA_PlayerResource *const this, KeyValues *pParentKV)
{
  __int64 v4; // r14
  int v5; // ebx
  int v6; // r15d
  int Streak; // eax
  DataTeamPlayer_t *TeamDataForPlayer; // rax
  int m_Value; // edx
  DataTeamPlayer_t *v10; // rax
  int v11; // edx
  const char *SelectedHeroName; // rax
  DataTeamPlayer_t *v13; // rax
  int v14; // edx
  DataTeamPlayer_t *v15; // rax
  int v16; // edx
  KeyValues *v17; // r12
  CEntityIdentity *v18; // rdx
  CEntityIdentity *v19; // rdx
  KeyValues *NewKey; // r12
  char *v21; // rax
  uint64 SteamID; // rax
  CDOTAPlayer *Player; // rax
  const char *v24; // rax
  int Kills; // eax
  int Assists; // eax
  CEntityInstance *m_pInstance; // rdi
  KeyValues *pHeroInfoBlock; // [rsp+10h] [rbp-60h]
  KeyValues *pPlayerInfoBlock; // [rsp+18h] [rbp-58h]
  int nRadiantDeaths; // [rsp+24h] [rbp-4Ch]
  int nTeam; // [rsp+28h] [rbp-48h]
  int nDeaths; // [rsp+2Ch] [rbp-44h]
  int v34[16]; // [rsp+30h] [rbp-40h] BYREF

  pPlayerInfoBlock = KeyValues::CreateNewKey(pParentKV);
  pHeroInfoBlock = KeyValues::CreateNewKey(pParentKV);
  KeyValues::SetName(pPlayerInfoBlock, "Players");
  KeyValues::SetName(pHeroInfoBlock, "Heroes");
  if ( *(this + 194) > 0 )
  {
    v4 = 0;
    v5 = 0;
    v6 = 0;
    nRadiantDeaths = 0;
    do
    {
      NewKey = KeyValues::CreateNewKey(pPlayerInfoBlock);
      if ( NewKey != 0 )
      {
        v21 = UTIL_VarArgs("%d", v5);
        KeyValues::SetName(NewKey, v21);
        SteamID = CDOTA_PlayerResource::GetSteamID(this, v5);
        KeyValues::SetUint64(NewKey, "steamid", SteamID);
        Player = CDOTA_PlayerResource::GetPlayer(this, v5);
        if ( Player != 0 )
        {
          v24 = (*(Player->_vptr_IHandleEntity + 106))(Player);
          KeyValues::SetString(NewKey, "name", v24);
        }
        else
        {
          KeyValues::SetString(NewKey, "name", 0);
        }
        KeyValues::SetInt(NewKey, "sharemask", *(*(this + 98) + v4 + 120));
        nTeam = CDOTA_PlayerResource::GetTeam(this, v5);
        KeyValues::SetInt(NewKey, "team", nTeam);
        Kills = CDOTA_PlayerResource::GetKills(this, v5);
        KeyValues::SetInt(NewKey, "kills", Kills);
        Assists = CDOTA_PlayerResource::GetAssists(this, v5);
        KeyValues::SetInt(NewKey, "assists", Assists);
        nDeaths = CDOTA_PlayerResource::GetDeaths(this, v5);
        KeyValues::SetInt(NewKey, "deaths", nDeaths);
        if ( nTeam == 2 )
        {
          nRadiantDeaths += nDeaths;
        }
        else if ( nTeam == 3 )
        {
          v6 += nDeaths;
        }
        Streak = CDOTA_PlayerResource::GetStreak(this, v5);
        KeyValues::SetInt(NewKey, "streak", Streak);
        TeamDataForPlayer = CDOTA_PlayerResource::GetTeamDataForPlayer(this, v5);
        if ( TeamDataForPlayer != 0 )
          m_Value = TeamDataForPlayer->m_iReliableGold.m_Value;
        else
          m_Value = 0;
        KeyValues::SetInt(NewKey, "reliablegold", m_Value);
        v10 = CDOTA_PlayerResource::GetTeamDataForPlayer(this, v5);
        if ( v10 != 0 )
          v11 = v10->m_iUnreliableGold.m_Value;
        else
          v11 = 0;
        KeyValues::SetInt(NewKey, "unreliablegold", v11);
        SelectedHeroName = CDOTA_PlayerResource::GetSelectedHeroName(this, v5);
        KeyValues::SetString(NewKey, "hero", SelectedHeroName);
        v13 = CDOTA_PlayerResource::GetTeamDataForPlayer(this, v5);
        if ( v13 != 0 )
          v14 = v13->m_iLastHitCount.m_Value;
        else
          v14 = 0;
        KeyValues::SetInt(NewKey, "lasthits", v14);
        v15 = CDOTA_PlayerResource::GetTeamDataForPlayer(this, v5);
        if ( v15 != 0 )
          v16 = v15->m_iDenyCount.m_Value;
        else
          v16 = 0;
        KeyValues::SetInt(NewKey, "denies", v16);
      }
      v17 = KeyValues::CreateNewKey(pHeroInfoBlock);
      if ( v17 != 0 )
      {
        CDOTA_PlayerResource::GetPlayerSelectedHeroHandle(v34, this, v5);
        if ( (v34[0] + 2) > 1 )
        {
          v18 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v34[0]) >> 9) & 0x3F];
          if ( v18 != 0 )
          {
            v19 = &v18[v34[0] & 0x1FF];
            if ( v19 != 0 && v34[0] == v19->m_EHandle.m_Index )
            {
              m_pInstance = v19->m_pInstance;
              if ( v19->m_pInstance != 0 && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 )
                (*(m_pInstance->_vptr_IHandleEntity + 466))(m_pInstance, v17);
            }
          }
        }
      }
      ++v5;
      v4 += 200;
      KeyValues::SetInt(pParentKV, "radiant_deaths", nRadiantDeaths);
      KeyValues::SetInt(pParentKV, "dire_deaths", v6);
    }
    while ( v5 < *(this + 194) );
  }
}


// CDOTA_PlayerResource::LoadSaveGameInformation  (line 4605, @0x0000000002685580, libserver.so)  // inlines: AddToTail, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<CDOTA_BaseNPC_Hero*>, CopyConstruct<KeyValues*>, Element, GrowMemory, IsValidTeamPlayerID, NetworkStateChanged, Purge, RemoveAll, Set, ToDOTAPlayer, __fill_n_a<int*, int, int>, fill_n<int*, int, int>, operator=<int>, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: KeyValues::FindKey, KeyValues::GetFirstTrueSubKey, KeyValues::GetNextTrueSubKey, KeyValues::GetInt, CDOTA_PlayerResource::GetTeam, CDOTA_PlayerResource::GetPlayer, CDOTA_PlayerResource::GetTeamDataForPlayer, PlayerResourcePlayerTeamData_t::NetworkStateChanged, CDOTA_PlayerResource::SetReliableGold, CDOTA_PlayerResource::SetUnreliableGold, DataTeamPlayer_t::NetworkStateChanged, KeyValues::GetString (20 total)
// callers: PerformDOTALoadGame
// strings: "assists", "unreliablegold", "sharemask", "denies", "lasthits"
void __fastcall CDOTA_PlayerResource::LoadSaveGameInformation(CDOTA_PlayerResource *const this, KeyValues *pParentKV)
{
  KeyValues *Key; // rbx
  int *v5; // rdx
  KeyValues *i; // r13
  int Int; // r12d
  int v8; // ebx
  bool v9; // cc
  CDOTAPlayer *Player; // r15
  PlayerResourcePlayerTeamData_t *v11; // r12
  int v12; // eax
  int v13; // eax
  int v14; // ebx
  int v15; // ebx
  int v16; // ebx
  const char *String; // rax
  CDOTA_BaseNPC *v18; // rbx
  const char *v19; // rax
  KeyValues *v20; // r12
  __int64 m_Size; // r15
  int v22; // eax
  CDOTA_BaseNPC_Hero **v23; // rax
  __int64 v24; // rbx
  int v25; // eax
  KeyValues **v26; // rax
  __int64 v27; // rbx
  int j; // r12d
  KeyValues *pHeroInfoBlock; // [rsp+18h] [rbp-C8h]
  int team; // [rsp+20h] [rbp-C0h]
  int teama; // [rsp+20h] [rbp-C0h]
  int teamb; // [rsp+20h] [rbp-C0h]
  int teamc; // [rsp+20h] [rbp-C0h]
  int pTeamData; // [rsp+28h] [rbp-B8h]
  DataTeamPlayer_t *pTeamDataa; // [rsp+28h] [rbp-B8h]
  CUtlVector<CDOTA_BaseNPC_Hero*,CUtlMemory<CDOTA_BaseNPC_Hero*,int> > heroesCreated; // [rsp+30h] [rbp-B0h] BYREF
  CUtlVector<KeyValues*,CUtlMemory<KeyValues*,int> > heroKeys; // [rsp+50h] [rbp-90h] BYREF
  int team_slot[14]; // [rsp+70h] [rbp-70h] BYREF
  __int64 v39; // [rsp+A8h] [rbp-38h] BYREF
  Vector v40; // 0:xmm0_8.8,8:xmm1_4.4

  Key = KeyValues::FindKey(pParentKV, "Players", 0);
  pHeroInfoBlock = KeyValues::FindKey(pParentKV, "Heroes", 0);
  if ( pHeroInfoBlock != 0 && Key != 0 )
  {
    v5 = team_slot;
    heroesCreated.m_Size = 0;
    heroesCreated.m_Memory.m_pMemory = 0;
    heroesCreated.m_Memory.m_nAllocationCount = 0;
    heroesCreated.m_Memory.m_nGrowSize = 0;
    heroKeys.m_Size = 0;
    heroKeys.m_Memory.m_pMemory = 0;
    heroKeys.m_Memory.m_nAllocationCount = 0;
    heroKeys.m_Memory.m_nGrowSize = 0;
    do
      *v5++ = 0;
    while ( v5 != &v39 );
    for ( i = KeyValues::GetFirstTrueSubKey(Key); i != 0; i = KeyValues::GetNextTrueSubKey(i) )
    {
      Int = KeyValues::GetInt(i, "team", 0);
      if ( (Int - 2) <= 1 )
      {
        v8 = 5 * (Int == 3);
        pTeamData = team_slot[Int];
        do
        {
          if ( Int == CDOTA_PlayerResource::GetTeam(this, v8) && v8 - 5 * (Int == 3) == pTeamData )
            break;
          ++v8;
        }
        while ( v8 <= 23 );
        v9 = *(this + 194) <= v8;
        team_slot[Int] = pTeamData + 1;
        if ( !v9 )
        {
          Player = CDOTA_PlayerResource::GetPlayer(this, v8);
          if ( Player != 0 && (*(Player->_vptr_IHandleEntity + 140))(Player) != 0 )
          {
            v11 = (*(this + 98) + 200LL * v8);
            pTeamDataa = CDOTA_PlayerResource::GetTeamDataForPlayer(this, v8);
            team = KeyValues::GetInt(i, "kills", 0);
            if ( team != v11->m_iKills.m_Value )
            {
              PlayerResourcePlayerTeamData_t::NetworkStateChanged(v11, 24, 0xFFFFFFFFLL, -1);
              v11->m_iKills.m_Value = team;
            }
            teama = KeyValues::GetInt(i, "assists", 0);
            if ( teama != v11->m_iAssists.m_Value )
            {
              PlayerResourcePlayerTeamData_t::NetworkStateChanged(v11, 28, 0xFFFFFFFFLL, -1);
              v11->m_iAssists.m_Value = teama;
            }
            teamb = KeyValues::GetInt(i, "deaths", 0);
            if ( teamb != v11->m_iDeaths.m_Value )
            {
              PlayerResourcePlayerTeamData_t::NetworkStateChanged(v11, 32, 0xFFFFFFFFLL, -1);
              v11->m_iDeaths.m_Value = teamb;
            }
            teamc = KeyValues::GetInt(i, "streak", 0);
            if ( teamc != v11->m_iStreak.m_Value )
            {
              PlayerResourcePlayerTeamData_t::NetworkStateChanged(v11, 36, 0xFFFFFFFFLL, -1);
              v11->m_iStreak.m_Value = teamc;
            }
            v12 = KeyValues::GetInt(i, "reliablegold", 0);
            CDOTA_PlayerResource::SetReliableGold(this, v8, v12);
            v13 = KeyValues::GetInt(i, "unreliablegold", 0);
            CDOTA_PlayerResource::SetUnreliableGold(this, v8, v13);
            v14 = KeyValues::GetInt(i, "sharemask", 0);
            if ( v14 != v11->m_UnitShareMasks.m_Value )
            {
              PlayerResourcePlayerTeamData_t::NetworkStateChanged(v11, 120, 0xFFFFFFFFLL, -1);
              v11->m_UnitShareMasks.m_Value = v14;
            }
            if ( pTeamDataa != 0 )
            {
              v15 = KeyValues::GetInt(i, "denies", 0);
              if ( v15 != pTeamDataa->m_iDenyCount.m_Value )
              {
                DataTeamPlayer_t::NetworkStateChanged(pTeamDataa, 60, 0xFFFFFFFFLL, -1);
                pTeamDataa->m_iDenyCount.m_Value = v15;
              }
              v16 = KeyValues::GetInt(i, "lasthits", 0);
              if ( v16 != pTeamDataa->m_iLastHitCount.m_Value )
              {
                DataTeamPlayer_t::NetworkStateChanged(pTeamDataa, 64, 0xFFFFFFFFLL, -1);
                pTeamDataa->m_iLastHitCount.m_Value = v16;
              }
            }
            String = KeyValues::GetString(i, "hero", "", 0, 0);
            v18 = DOTA_Hero_Spawn_Synchronous(String, Player);
            if ( v18 != 0 )
            {
              v19 = KeyValues::GetString(i, "hero", "", 0, 0);
              v20 = KeyValues::FindKey(pHeroInfoBlock, v19, 0);
              if ( v20 != 0 )
              {
                m_Size = heroesCreated.m_Size;
                v22 = heroesCreated.m_Size;
                if ( heroesCreated.m_Size == heroesCreated.m_Memory.m_nAllocationCount )
                {
                  CUtlMemory<CDOTA_BaseNPC_Hero *,int>::Grow(&heroesCreated.m_Memory, 1);
                  v22 = heroesCreated.m_Size;
                }
                heroesCreated.m_Size = v22 + 1;
                v23 = &heroesCreated.m_Memory.m_pMemory[m_Size];
                if ( v23 != 0 )
                  *v23 = v18;
                v24 = heroKeys.m_Size;
                v25 = heroKeys.m_Size;
                if ( heroKeys.m_Size == heroKeys.m_Memory.m_nAllocationCount )
                {
                  CUtlMemory<KeyValues *,int>::Grow(&heroKeys.m_Memory, 1);
                  v25 = heroKeys.m_Size;
                }
                heroKeys.m_Size = v25 + 1;
                v26 = &heroKeys.m_Memory.m_pMemory[v24];
                if ( v26 != 0 )
                  *v26 = v20;
              }
            }
          }
        }
      }
    }
    v27 = 0;
    for ( j = 0; heroesCreated.m_Size > j; ++v27 )
    {
      v40 = *CBaseEntity::GetAbsOrigin(heroesCreated.m_Memory.m_pMemory[v27]);
      FindClearSpaceForUnit(heroesCreated.m_Memory.m_pMemory[v27], v40, 1);
      (*(heroesCreated.m_Memory.m_pMemory[v27]->_vptr_IHandleEntity + 467))(
        heroesCreated.m_Memory.m_pMemory[v27],
        heroKeys.m_Memory.m_pMemory[v27]);
      ++j;
    }
    heroKeys.m_Size = 0;
    if ( (heroKeys.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<KeyValues *,int>::Purge(&heroKeys.m_Memory);
      if ( (heroKeys.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<KeyValues *,int>::Purge(&heroKeys.m_Memory);
    }
    if ( (heroesCreated.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<CDOTA_BaseNPC_Hero *,int>::Purge(&heroesCreated.m_Memory);
      if ( (heroesCreated.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<CDOTA_BaseNPC_Hero *,int>::Purge(&heroesCreated.m_Memory);
    }
  }
}


// dota_leaver_status  (line 4694, @0x0000000002654120, libserver.so)  // inlines: GetLeaverStatus, IsValidTeamPlayerID
// calls: LoggingSystem_IsChannelEnabled, LoggingSystem_Log
// strings: "[%d] Leaver = %d\n", "Leaver status:\n"
// globals: g_pDOTAPlayerResource
void __fastcall dota_leaver_status(const CCommandContext *const ctx, const CCommand *const args)
{
  int i; // ebx
  int v3; // r8d

  if ( g_pDOTAPlayerResource != 0 )
  {
    if ( LoggingSystem_IsChannelEnabled(LOG_SERVER, 1) != 0 )
      LoggingSystem_Log(LOG_SERVER, 1, "Leaver status:\n");
    for ( i = 0; i != 24; ++i )
    {
      if ( LoggingSystem_IsChannelEnabled(LOG_SERVER, 1) != 0 )
      {
        if ( *(g_pDOTAPlayerResource + 194) <= i )
          v3 = 0;
        else
          v3 = *(g_pDOTAPlayerResource + i + 4372);
        LoggingSystem_Log(LOG_SERVER, 1, "[%d] Leaver = %d\n", i, v3);
      }
    }
  }
}


// CDOTA_PlayerResource::SetUnitShareMaskForPlayer  (line 4709, @0x0000000002658500, libserver.so)  // inlines: Element, Get, GetForModify, IsValidTeamPlayerID, NetworkStateChanged, operator CEntityInstance*, operator[]
// calls: CDOTA_PlayerResource::GetTeam, CDOTA_BaseNPC::RecalculateControllableStateForNPCS
// callers: CDOTAGamerules::ClientMsg_SetUnitShareFlag, dota_test_npc, CreateUnitSpawnComplete
void __fastcall CDOTA_PlayerResource::SetUnitShareMaskForPlayer(
        CDOTA_PlayerResource *const this,
        int nPlayerID,
        int nOtherPlayerID,
        int nFlag,
        bool bState)
{
  int v6; // eax
  int v8; // r13d
  int Team; // r15d
  int v11; // eax
  bool v12; // r8
  __int64 v13; // r12
  _QWORD *v14; // rdi

  if ( nPlayerID >= 0 )
  {
    v6 = *(this + 194);
    if ( nPlayerID < v6 )
    {
      v8 = nOtherPlayerID;
      if ( nOtherPlayerID >= 0 && nOtherPlayerID < v6 )
      {
        Team = CDOTA_PlayerResource::GetTeam(this, nPlayerID);
        v11 = CDOTA_PlayerResource::GetTeam(this, v8);
        v12 = bState;
        if ( Team == v11 && (nFlag & 7) != 0 )
        {
          v13 = *(this + 98) + 200LL * nPlayerID;
          v14 = *(v13 + 8);
          if ( v14 != 0 && (*(v14[1] + 49LL) & 4) == 0 && *(v13 + 16) != 0xFFFF )
          {
            (*(*v14 + 176LL))(v14, 120, 0xFFFFFFFFLL, *(v13 + 16));
            v12 = bState;
          }
          if ( Team == 3 )
            LOBYTE(v8) = v8 - 5;
          if ( v12 )
            *(v13 + 120) |= nFlag << (4 * v8);
          else
            *(v13 + 120) &= ~(nFlag << (4 * v8));
          CDOTA_BaseNPC::RecalculateControllableStateForNPCS(Team, nFlag & 1, (nFlag & 2) != 0, nPlayerID);
        }
      }
    }
  }
}


// CDOTA_PlayerResource::GetUnitShareMaskForPlayer  (line 4750, @0x0000000002656740, libserver.so)
// calls: CDOTA_PlayerResource::IsValidTeamPlayer, CDOTA_PlayerResource::GetTeam
// callers: CDOTA_PlayerResource::IsHeroSharedWithPlayerID, CDOTA_PlayerResource::AreUnitsSharedWithPlayerID, CDOTA_PlayerResource::IsDisableHelpSetForPlayerID
int __fastcall CDOTA_PlayerResource::GetUnitShareMaskForPlayer(
        CDOTA_PlayerResource *const this,
        int nPlayerID,
        int nOtherPlayerID)
{
  __int64 v4; // r13
  int v6; // ebx
  int Team; // r15d

  v4 = nPlayerID;
  v6 = 0;
  if ( CDOTA_PlayerResource::IsValidTeamPlayer(this, nPlayerID)
    && CDOTA_PlayerResource::IsValidTeamPlayer(this, nOtherPlayerID) )
  {
    Team = CDOTA_PlayerResource::GetTeam(this, v4);
    if ( Team == CDOTA_PlayerResource::GetTeam(this, nOtherPlayerID) )
    {
      v6 = 7;
      if ( v4 != nOtherPlayerID )
      {
        if ( Team == 3 )
          LOBYTE(nOtherPlayerID) = nOtherPlayerID - 5;
        return (*(*(this + 98) + 200 * v4 + 120) >> (4 * nOtherPlayerID)) & 7;
      }
    }
  }
  return v6;
}


// CDOTA_PlayerResource::IsHeroSharedWithPlayerID  (line 4777, @0x00000000026567f0, libserver.so)
// calls: CDOTA_PlayerResource::GetUnitShareMaskForPlayer
// callers: CDOTA_BaseNPC::UpdateControllableMask
bool __fastcall CDOTA_PlayerResource::IsHeroSharedWithPlayerID(
        CDOTA_PlayerResource *const this,
        int nUnitOwnerPlayerID,
        int nOtherPlayerID)
{
  return CDOTA_PlayerResource::GetUnitShareMaskForPlayer(this, nUnitOwnerPlayerID, nOtherPlayerID) & 1;
}


// CDOTA_PlayerResource::AreUnitsSharedWithPlayerID  (line 4786, @0x0000000002656800, libserver.so)
// calls: CDOTA_PlayerResource::GetUnitShareMaskForPlayer
// callers: CDOTA_BaseNPC::UpdateControllableMask
bool __fastcall CDOTA_PlayerResource::AreUnitsSharedWithPlayerID(
        CDOTA_PlayerResource *const this,
        int nUnitOwnerPlayerID,
        int nOtherPlayerID)
{
  return (CDOTA_PlayerResource::GetUnitShareMaskForPlayer(this, nUnitOwnerPlayerID, nOtherPlayerID) & 2) != 0;
}


// CDOTA_PlayerResource::IsDisableHelpSetForPlayerID  (line 4795, @0x0000000002656810, libserver.so)
// calls: CDOTA_PlayerResource::GetUnitShareMaskForPlayer
// callers: CDOTA_Ability_Bane_Nightmare::CastFilterResult, CDOTA_Ability_Bloodseeker_Bloodrage::CastFilterResult, CDOTA_Ability_Kunkka_XMarksTheSpot::CastFilterResult, CDOTA_Ability_Chen_TestOfFaithTeleport::CastFilterResult, CDOTA_Ability_Obsidian_Destroyer_AstralImprisonment::CastFilterResult, CDOTA_Ability_Shadow_Demon_Disruption::CastFilterResult, CDOTA_Ability_KeeperOfTheLight_Recall::CastFilterResult, CDOTA_Ability_Oracle_PurifyingFlames::CastFilterResult, CDOTA_Ability_EarthSpirit_BoulderSmash::CastFilterResult, CDOTA_Ability_KeeperOfTheLight_Recall::OnSpellStart, CDOTA_Ability_Winter_Wyvern_Cold_Embrace::CastFilterResult, CDOTA_Modifier_Wisp_Relocate_Return::OnIntervalThink (16 total)
bool __fastcall CDOTA_PlayerResource::IsDisableHelpSetForPlayerID(
        CDOTA_PlayerResource *const this,
        int nPlayerID,
        int nOtherPlayerID)
{
  bool result; // al

  result = 0;
  if ( nPlayerID != nOtherPlayerID )
    return (CDOTA_PlayerResource::GetUnitShareMaskForPlayer(this, nPlayerID, nOtherPlayerID) & 4) != 0;
  return result;
}


// CDOTA_PlayerResource::GetPlayerIDsForTeam  (line 4809, @0x000000000267ae20, libserver.so)  // inlines: AddToTail, CopyConstruct<int>, Element, GrowMemory, RemoveAll, operator==<int>, operator[]
// calls: CDOTA_PlayerResource::IsValidPlayer, CUtlMemory<int, int>::Grow
// callers: CDOTAGamerules::AutoAssignCaptains, CDOTAGamerules::AddTeamCompToCriteria, CDOTAGamerules::State_Enter_HERO_SELECTION, CIngameEvent_FM2015::DoEndGameCoinWagerCalculations, CIngameEvent_Base::AddResultToSignout, CIngameEvent_FM2015::AddResultToSignout, CDOTA_BaseNPC_Building::PossiblyGiveSelfToPlayer, CDOTA_BaseNPC_Hero::OnTakeDamage_Alive
bool __fastcall CDOTA_PlayerResource::GetPlayerIDsForTeam(
        CDOTA_PlayerResource *const this,
        int iTeam,
        CUtlVector<int,CUtlMemory<int,int> > *const playerIDs)
{
  bool result; // al
  __int64 v7; // r12
  int v8; // ebx
  __int64 m_Size; // rcx
  int v10; // eax
  int *v11; // rax
  int v12; // [rsp+4h] [rbp-3Ch]
  CUtlVectorBase<int,CUtlMemory<int,int> >::CAllocator *p_m_Memory; // [rsp+8h] [rbp-38h]

  if ( (iTeam - 1) <= 2 || (result = 0, (iTeam - 5) <= 8) )
  {
    playerIDs->m_Size = 0;
    if ( *(this + 212) > 0 )
    {
      v7 = 0;
      v8 = 0;
      p_m_Memory = &playerIDs->m_Memory;
      do
      {
        while ( 1 )
        {
          if ( *(*(this + 107) + v7 + 32) == iTeam && CDOTA_PlayerResource::IsValidPlayer(this, v8) )
          {
            m_Size = playerIDs->m_Size;
            if ( m_Size == playerIDs->m_Memory.m_nAllocationCount )
            {
              v12 = playerIDs->m_Size;
              CUtlMemory<int,int>::Grow(p_m_Memory, 1);
              v10 = playerIDs->m_Size;
              m_Size = v12;
            }
            else
            {
              v10 = playerIDs->m_Size;
            }
            playerIDs->m_Size = v10 + 1;
            v11 = &playerIDs->m_Memory.m_pMemory[m_Size];
            if ( v11 != 0 )
              break;
          }
          ++v8;
          v7 += 72;
          if ( v8 >= *(this + 212) )
            return 1;
        }
        *v11 = v8++;
        v7 += 72;
      }
      while ( v8 < *(this + 212) );
    }
    return 1;
  }
  return result;
}


// CDOTA_PlayerResource::GetPlayerIDForTeamSlot  (line 4830, @0x00000000026619d0, libserver.so)  // inlines: operator==<int>
// calls: CDOTA_PlayerResource::IsValidPlayer, CDOTA_PlayerResource::IsValidTeamPlayer
int __fastcall CDOTA_PlayerResource::GetPlayerIDForTeamSlot(
        const CDOTA_PlayerResource *const this,
        int iTeam,
        int iTeamSlot)
{
  int result; // eax
  int v5; // r13d
  __int64 v7; // rbx
  __int64 v8; // r15

  result = -1;
  v5 = *(this + 194);
  if ( v5 > 0 )
  {
    v7 = 0;
    v8 = 0;
    do
    {
      if ( CDOTA_PlayerResource::IsValidPlayer(this, v8)
        && CDOTA_PlayerResource::IsValidTeamPlayer(this, v8)
        && *(*(this + 107) + 72 * v8 + 32) == iTeam
        && *(*(this + 98) + v7 + 124) == iTeamSlot )
      {
        return v8;
      }
      ++v8;
      v7 += 200;
    }
    while ( v5 > v8 );
    return -1;
  }
  return result;
}


// CDOTA_PlayerResource::GetAllPlayerIDs  (line 4847, @0x000000000267af10, libserver.so)  // inlines: AddToTail, CopyConstruct<int>, Element, GrowMemory, RemoveAll, operator[]
// calls: CDOTA_PlayerResource::IsValidPlayer, CUtlMemory<int, int>::Grow
// callers: CIngameEvent_WM2016::DoEndGameCoinWagerCalculations, CIngameEvent_FM2015::OnGameStarted, CIngameEvent_WM2016::PreWagerTimeThink, CDOTAInGamePredictionGameSystem::SelectInGamePredictions, CIngameEvent_FM2015::AddResultToSignout, CIngameEvent_WM2016::AddResultToSignout, CDOTA_PlayerResource::BHasAnyPlayerWithBattlePass, CDOTA_BaseNPC_Building::Event_Killed
void __fastcall CDOTA_PlayerResource::GetAllPlayerIDs(
        const CDOTA_PlayerResource *const this,
        CUtlVector<int,CUtlMemory<int,int> > *const playerIDs)
{
  CUtlVectorBase<int,CUtlMemory<int,int> >::CAllocator *p_m_Memory; // r14
  int v5; // ebx
  __int64 m_Size; // r15
  int v7; // eax
  int *v8; // rax

  p_m_Memory = &playerIDs->m_Memory;
  v5 = 0;
  for ( playerIDs->m_Size = 0; v5 < *(this + 212); ++v5 )
  {
    while ( 1 )
    {
      if ( CDOTA_PlayerResource::IsValidPlayer(this, v5) )
      {
        m_Size = playerIDs->m_Size;
        v7 = playerIDs->m_Size;
        if ( m_Size == playerIDs->m_Memory.m_nAllocationCount )
        {
          CUtlMemory<int,int>::Grow(p_m_Memory, 1);
          v7 = playerIDs->m_Size;
        }
        playerIDs->m_Size = v7 + 1;
        v8 = &playerIDs->m_Memory.m_pMemory[m_Size];
        if ( v8 != 0 )
          break;
      }
      if ( ++v5 >= *(this + 212) )
        return;
    }
    *v8 = v5;
  }
}


// CDOTA_PlayerResource::GetPlayerCountForTeam  (line 4863, @0x0000000002656570, libserver.so)
// calls: CDOTA_PlayerResource::IsValidPlayer
// callers: CDOTAGamerules::CustomGameSetup_SelectTeam
int __fastcall CDOTA_PlayerResource::GetPlayerCountForTeam(CDOTA_PlayerResource *const this, int iTeam)
{
  int result; // eax
  int v5; // r14d
  int v6; // edx
  int v7; // ebx
  _DWORD *v8; // r12

  if ( (iTeam - 1) <= 2 || (result = 0, (iTeam - 5) <= 8) )
  {
    v5 = *(this + 212);
    if ( v5 <= 0 )
    {
      return 0;
    }
    else
    {
      v6 = 0;
      v7 = 0;
      v8 = (*(this + 107) + 32LL);
      do
      {
        while ( iTeam != *v8 )
        {
          ++v7;
          v8 += 18;
          if ( v7 == v5 )
            return v6;
        }
        v6 -= !CDOTA_PlayerResource::IsValidPlayer(this, v7++) - 1;
        v8 += 18;
      }
      while ( v7 != v5 );
      return v6;
    }
  }
  return result;
}


// CDOTA_PlayerResource::GetPlayerCount  (line 4883, @0x0000000002656610, libserver.so)
// calls: CDOTA_PlayerResource::IsValidPlayer
int __fastcall CDOTA_PlayerResource::GetPlayerCount(CDOTA_PlayerResource *const this)
{
  int v2; // r12d
  int i; // ebx

  v2 = 0;
  for ( i = 0; i != 64; ++i )
    v2 -= !CDOTA_PlayerResource::IsValidPlayer(this, i) - 1;
  return v2;
}


// CDOTA_PlayerResource::SetBattlePointBonusActive  (line 4901, @0x0000000002661a90, libserver.so)  // inlines: CSteamID, Element, Get, NetworkStateChanged, Set, SetFromUint64, operator CEntityInstance*, operator=<bool>, operator[]
// calls: CDOTA_PlayerResource::IsValidTeamPlayer, LoggingSystem_IsChannelEnabled, CDOTA_PlayerResource::GetSteamID, CSteamID::Render, LoggingSystem_Log
// callers: CDOTAGamerules::BroadcastItemDropBonusStatus
// strings: "false", "true", "PR:SetBattlePointBonusActive %d:%s %s\n"
void __fastcall CDOTA_PlayerResource::SetBattlePointBonusActive(
        CDOTA_PlayerResource *const this,
        int nPlayerID,
        bool bBonusActive)
{
  __int64 v6; // r14
  _QWORD *v7; // rdi
  const char *v8; // r15
  const char *v9; // rax
  CSteamID v10; // [rsp+0h] [rbp-40h] BYREF

  if ( CDOTA_PlayerResource::IsValidTeamPlayer(this, nPlayerID) )
  {
    v6 = *(this + 98) + 200LL * nPlayerID;
    if ( *(v6 + 104) != bBonusActive )
    {
      v7 = *(v6 + 8);
      if ( v7 != 0 && (*(v7[1] + 49LL) & 4) == 0 && *(v6 + 16) != 0xFFFF )
        (*(*v7 + 176LL))(v7, 104, 0xFFFFFFFFLL, *(v6 + 16));
      *(v6 + 104) = bBonusActive;
    }
    if ( LoggingSystem_IsChannelEnabled(LOG_SERVER, 1) != 0 )
    {
      v8 = "true";
      if ( !bBonusActive )
        v8 = "false";
      v10.m_steamid.m_comp = CDOTA_PlayerResource::GetSteamID(this, nPlayerID);
      v9 = CSteamID::Render(&v10);
      LoggingSystem_Log(LOG_SERVER, 1, "PR:SetBattlePointBonusActive %d:%s %s\n", nPlayerID, v9, v8);
    }
  }
}


// CDOTA_PlayerResource::SetBattlePointRate  (line 4913, @0x0000000002661ba0, libserver.so)  // inlines: CSteamID, Element, Get, NetworkStateChanged, Set, SetFromUint64, operator CEntityInstance*, operator=<int>, operator[]
// calls: CDOTA_PlayerResource::IsValidTeamPlayer, LoggingSystem_IsChannelEnabled, CDOTA_PlayerResource::GetSteamID, CSteamID::Render, LoggingSystem_Log
// callers: CDOTAGamerules::BroadcastItemDropBonusStatus
// strings: "PR:SetBattlePointRate %d:%s %d\n"
void __fastcall CDOTA_PlayerResource::SetBattlePointRate(CDOTA_PlayerResource *const this, int nPlayerID, int nRate)
{
  __int64 v6; // r14
  _QWORD *v7; // rdi
  const char *v8; // rax
  CSteamID v9; // [rsp+0h] [rbp-30h] BYREF

  if ( CDOTA_PlayerResource::IsValidTeamPlayer(this, nPlayerID) )
  {
    v6 = *(this + 98) + 200LL * nPlayerID;
    if ( nRate != *(v6 + 106) )
    {
      v7 = *(v6 + 8);
      if ( v7 != 0 && (*(v7[1] + 49LL) & 4) == 0 && *(v6 + 16) != 0xFFFF )
        (*(*v7 + 176LL))(v7, 106, 0xFFFFFFFFLL, *(v6 + 16));
      *(v6 + 106) = nRate;
    }
    if ( LoggingSystem_IsChannelEnabled(LOG_SERVER, 1) != 0 )
    {
      v9.m_steamid.m_comp = CDOTA_PlayerResource::GetSteamID(this, nPlayerID);
      v8 = CSteamID::Render(&v9);
      LoggingSystem_Log(LOG_SERVER, 1, "PR:SetBattlePointRate %d:%s %d\n", nPlayerID, v8, nRate);
    }
  }
}


// CDOTA_PlayerResource::SetBuybackCooldownTime  (line 4925, @0x0000000002664d80, libserver.so)  // inlines: DOTAGameRules, Get, NetworkStateChanged, Set, operator CEntityInstance*, operator=<float>
// calls: CDOTAGamerules::GetGameModeEntity, CDOTA_PlayerResource::GetTeamDataForPlayer
// callers: CDOTA_BaseNPC_Hero::SetBuybackCooldownTime
void __fastcall CDOTA_PlayerResource::SetBuybackCooldownTime(
        CDOTA_PlayerResource *const this,
        int nPlayerID,
        __m128i a3,
        float flBuybackCooldown)
{
  float v4; // r14d
  DataTeamPlayer_t *TeamDataForPlayer; // rax
  CEntityInstance *m_pObj; // rdi
  DataTeamPlayer_t *pTeamData; // [rsp+0h] [rbp-28h]

  v4 = COERCE_FLOAT(_mm_cvtsi128_si32(a3));
  if ( g_pGameRules == 0
    || CDOTAGamerules::GetGameModeEntity(g_pGameRules) == 0
    || !CDOTAGamerules::GetGameModeEntity(g_pGameRules)->m_bUseCustomBuybackCooldown.m_Value )
  {
    TeamDataForPlayer = CDOTA_PlayerResource::GetTeamDataForPlayer(this, nPlayerID);
    if ( TeamDataForPlayer != 0 && v4 != TeamDataForPlayer->m_flBuybackCooldownTime.m_Value )
    {
      m_pObj = TeamDataForPlayer->__m_pChainEntity.m_pObj;
      if ( m_pObj != 0 && (m_pObj->m_pEntity->m_flags & 0x400) == 0 && TeamDataForPlayer->__m_PathIndex.m_Value != -1 )
      {
        pTeamData = TeamDataForPlayer;
        (*(m_pObj->_vptr_IHandleEntity + 22))(m_pObj, 104, 0xFFFFFFFFLL, TeamDataForPlayer->__m_PathIndex.m_Value);
        TeamDataForPlayer = pTeamData;
      }
      TeamDataForPlayer->m_flBuybackCooldownTime.m_Value = v4;
    }
  }
}


// CDOTA_PlayerResource::SetBuybackGoldLimitTime  (line 4938, @0x0000000002664e40, libserver.so)  // inlines: Get, NetworkStateChanged, Set, operator CEntityInstance*, operator=<float>
// calls: CDOTA_PlayerResource::GetTeamDataForPlayer
// callers: CDOTA_BaseNPC_Hero::SetBuybackGoldLimitTime
void __fastcall CDOTA_PlayerResource::SetBuybackGoldLimitTime(
        CDOTA_PlayerResource *const this,
        int nPlayerID,
        float a3,
        float flBuybackGoldLimit)
{
  DataTeamPlayer_t *TeamDataForPlayer; // rax
  float v5; // xmm0_4
  CEntityInstance *m_pObj; // rdi
  float v7; // [rsp+4h] [rbp-Ch]
  DataTeamPlayer_t *pTeamDataa; // [rsp+8h] [rbp-8h]

  TeamDataForPlayer = CDOTA_PlayerResource::GetTeamDataForPlayer(this, nPlayerID);
  if ( TeamDataForPlayer != 0 )
  {
    v5 = a3;
    if ( a3 != TeamDataForPlayer->m_flBuybackGoldLimitTime.m_Value )
    {
      m_pObj = TeamDataForPlayer->__m_pChainEntity.m_pObj;
      if ( m_pObj != 0 && (m_pObj->m_pEntity->m_flags & 0x400) == 0 && TeamDataForPlayer->__m_PathIndex.m_Value != -1 )
      {
        v7 = a3;
        pTeamDataa = TeamDataForPlayer;
        (*(m_pObj->_vptr_IHandleEntity + 22))(m_pObj, 108, 0xFFFFFFFFLL, TeamDataForPlayer->__m_PathIndex.m_Value);
        TeamDataForPlayer = pTeamDataa;
        v5 = v7;
      }
      TeamDataForPlayer->m_flBuybackGoldLimitTime.m_Value = v5;
    }
  }
}


// CDOTA_PlayerResource::ResetBuybackCostTime  (line 4946, @0x0000000002664ec0, libserver.so)  // inlines: Get, NetworkStateChanged, Set, operator CEntityInstance*, operator=<float>
// calls: CDOTA_PlayerResource::GetTeamDataForPlayer, CDOTAGamerules::GetDOTATime
void __fastcall CDOTA_PlayerResource::ResetBuybackCostTime(CDOTA_PlayerResource *const this, int nPlayerID)
{
  DataTeamPlayer_t *TeamDataForPlayer; // rbx
  float DOTATime; // xmm0_4
  CEntityInstance *m_pObj; // rdi
  float v5; // [rsp+Ch] [rbp-14h]

  TeamDataForPlayer = CDOTA_PlayerResource::GetTeamDataForPlayer(this, nPlayerID);
  if ( TeamDataForPlayer != 0 )
  {
    DOTATime = CDOTAGamerules::GetDOTATime(g_pGameRules, 0, 0, 0.0);
    if ( DOTATime != TeamDataForPlayer->m_flBuybackCostTime.m_Value )
    {
      m_pObj = TeamDataForPlayer->__m_pChainEntity.m_pObj;
      if ( m_pObj != 0 && (m_pObj->m_pEntity->m_flags & 0x400) == 0 && TeamDataForPlayer->__m_PathIndex.m_Value != -1 )
      {
        v5 = DOTATime;
        (*(m_pObj->_vptr_IHandleEntity + 22))(m_pObj, 112, 0xFFFFFFFFLL, TeamDataForPlayer->__m_PathIndex.m_Value);
        DOTATime = v5;
      }
      TeamDataForPlayer->m_flBuybackCostTime.m_Value = DOTATime;
    }
  }
}


// CDOTA_PlayerResource::SetCustomBuybackCooldown  (line 4954, @0x0000000002664f50, libserver.so)  // inlines: Get, NetworkStateChanged, Set, operator CEntityInstance*, operator=<float>
// calls: CDOTA_PlayerResource::GetTeamDataForPlayer
void __fastcall CDOTA_PlayerResource::SetCustomBuybackCooldown(
        CDOTA_PlayerResource *const this,
        int iPlayerID,
        float a3,
        float flCooldownTime)
{
  DataTeamPlayer_t *TeamDataForPlayer; // rax
  float v5; // xmm0_4
  CEntityInstance *m_pObj; // rdi
  float v7; // [rsp+4h] [rbp-Ch]
  DataTeamPlayer_t *pTeamDataa; // [rsp+8h] [rbp-8h]

  TeamDataForPlayer = CDOTA_PlayerResource::GetTeamDataForPlayer(this, iPlayerID);
  if ( TeamDataForPlayer != 0 )
  {
    v5 = a3;
    if ( a3 != TeamDataForPlayer->m_flCustomBuybackCooldown.m_Value )
    {
      m_pObj = TeamDataForPlayer->__m_pChainEntity.m_pObj;
      if ( m_pObj != 0 && (m_pObj->m_pEntity->m_flags & 0x400) == 0 && TeamDataForPlayer->__m_PathIndex.m_Value != -1 )
      {
        v7 = a3;
        pTeamDataa = TeamDataForPlayer;
        (*(m_pObj->_vptr_IHandleEntity + 22))(m_pObj, 116, 0xFFFFFFFFLL, TeamDataForPlayer->__m_PathIndex.m_Value);
        TeamDataForPlayer = pTeamDataa;
        v5 = v7;
      }
      TeamDataForPlayer->m_flCustomBuybackCooldown.m_Value = v5;
    }
  }
}


// CDOTA_PlayerResource::SetCustomBuybackCost  (line 4962, @0x0000000002657960, libserver.so)  // inlines: Element, Get, NetworkStateChanged, Set, operator CEntityInstance*, operator=<int>, operator[]
// calls: CDOTA_PlayerResource::IsValidTeamPlayer
void __fastcall CDOTA_PlayerResource::SetCustomBuybackCost(
        CDOTA_PlayerResource *const this,
        int iPlayerID,
        int iGoldCost)
{
  __int64 v4; // r12
  __int64 v6; // rbx
  _QWORD *v7; // rdi

  v4 = iPlayerID;
  if ( CDOTA_PlayerResource::IsValidTeamPlayer(this, iPlayerID) )
  {
    v6 = *(this + 98) + 200 * v4;
    if ( iGoldCost != *(v6 + 108) )
    {
      v7 = *(v6 + 8);
      if ( v7 != 0 && (*(v7[1] + 49LL) & 4) == 0 && *(v6 + 16) != 0xFFFF )
        (*(*v7 + 176LL))(v7, 108, 0xFFFFFFFFLL, *(v6 + 16));
      *(v6 + 108) = iGoldCost;
    }
  }
}


// CDOTA_PlayerResource::GetCustomBuybackCost  (line 4970, @0x0000000002656010, libserver.so)  // inlines: Element, operator[]
int __fastcall CDOTA_PlayerResource::GetCustomBuybackCost(CDOTA_PlayerResource *const this, int iPlayerID)
{
  return *(*(this + 98) + 200LL * iPlayerID + 108);
}


// CDOTA_PlayerResource::SetCustomTeamAssignment  (line 4975, @0x000000000265e420, libserver.so)
// calls: LoggingSystem_IsChannelEnabled, CDOTA_PlayerResource::GetPlayer, LoggingSystem_Log
// callers: AssignPlayersToCustomGameTeams, CustomGameSetup_ShuffleTeamAssignements, CDOTAGamerules::CustomGameSetup_SelectTeam
// strings: "CDOTA_PlayerResource::SetCustomTeamAssignment( player id %d, team %d )\n", "CDOTA_PlayerResource::SetCustomTeamAssignment - Immediate ChangeTeam of id %d to: %d (was
void __fastcall CDOTA_PlayerResource::SetCustomTeamAssignment(
        CDOTA_PlayerResource *const this,
        int iPlayerID,
        int iTeamAssignment)
{
  CDOTAPlayer *Player; // r14

  if ( LoggingSystem_IsChannelEnabled(LOG_SERVER, 0) != 0 )
    LoggingSystem_Log(
      LOG_SERVER,
      0,
      "CDOTA_PlayerResource::SetCustomTeamAssignment( player id %d, team %d )\n",
      iPlayerID,
      iTeamAssignment);
  if ( iPlayerID <= 0x17 )
  {
    *(this + iPlayerID + 3818) = iTeamAssignment;
    Player = CDOTA_PlayerResource::GetPlayer(this, iPlayerID);
    if ( Player != 0 )
    {
      if ( LoggingSystem_IsChannelEnabled(LOG_SERVER, 0) != 0 )
        LoggingSystem_Log(
          LOG_SERVER,
          0,
          "CDOTA_PlayerResource::SetCustomTeamAssignment - Immediate ChangeTeam of id %d to: %d (was %d)\n",
          iPlayerID,
          iTeamAssignment,
          Player->m_iTeamNum.m_Value);
      (*(Player->_vptr_IHandleEntity + 70))(Player, iTeamAssignment);
    }
  }
}


// CDOTA_PlayerResource::GetCustomTeamAssignment  (line 4991, @0x0000000002654070, libserver.so)
// callers: CDOTAGamerules::PlayerSpawn
int __fastcall CDOTA_PlayerResource::GetCustomTeamAssignment(CDOTA_PlayerResource *const this, int iPlayerID)
{
  return *(this + iPlayerID + 3818);
}


// CDOTA_PlayerResource::ApplyDelayedCustomTeamAssignment  (line 5032, @0x0000000002661c80, libserver.so)  // inlines: GetTeamNumber, IsValidTeamPlayerID
// calls: LoggingSystem_IsChannelEnabled, LoggingSystem_Log
// callers: CDOTAPlayer::UpdatePlayerIDFromSteamID, CDOTAPlayer::InitialSpawn
// strings: "CDOTA_PlayerResource::ApplyDelayedCustomTeamAssignment( player id %d )\n", "CDOTA_PlayerResource::ApplyDelayedCustomTeamAssignment - Delayed ChangeTeam of id %d to: 
void __fastcall CDOTA_PlayerResource::ApplyDelayedCustomTeamAssignment(
        CDOTA_PlayerResource *const this,
        CDOTAPlayer *pPlayer)
{
  int v4; // eax
  int v5; // r12d
  unsigned int v6; // r13d

  v4 = (*(pPlayer->_vptr_IHandleEntity + 393))(pPlayer);
  v5 = v4;
  if ( v4 >= 0 && v4 < *(this + 194) )
  {
    if ( LoggingSystem_IsChannelEnabled(LOG_SERVER, 0) != 0 )
      LoggingSystem_Log(LOG_SERVER, 0, "CDOTA_PlayerResource::ApplyDelayedCustomTeamAssignment( player id %d )\n", v5);
    v6 = *(this + v5 + 3818);
    if ( v6 != 0 && v6 != 5 && v6 != pPlayer->m_iTeamNum.m_Value )
    {
      if ( LoggingSystem_IsChannelEnabled(LOG_SERVER, 1) != 0 )
        LoggingSystem_Log(
          LOG_SERVER,
          1,
          "CDOTA_PlayerResource::ApplyDelayedCustomTeamAssignment - Delayed ChangeTeam of id %d to: %d (was %d)\n",
          v5,
          v6,
          pPlayer->m_iTeamNum.m_Value);
      (*(pPlayer->_vptr_IHandleEntity + 70))(pPlayer, v6);
    }
  }
}


// CDOTA_PlayerResource::GetRespawnSeconds  (line 5053, @0x0000000002656830, libserver.so)
// calls: CDOTA_PlayerResource::IsValidTeamPlayer
// callers: CDOTAGCServerSystem::SendScoreboardUpdate
int __fastcall CDOTA_PlayerResource::GetRespawnSeconds(CDOTA_PlayerResource *const this, int iPlayerID)
{
  __int64 v2; // r12
  bool IsValidTeamPlayer; // al
  int v5; // edx

  v2 = iPlayerID;
  IsValidTeamPlayer = CDOTA_PlayerResource::IsValidTeamPlayer(this, iPlayerID);
  v5 = 0;
  if ( IsValidTeamPlayer )
    return *(*(this + 98) + 200 * v2 + 44);
  return v5;
}


// CDOTA_PlayerResource::RecordVictoryPrediction  (line 5063, @0x0000000002685be0, libserver.so)  // inlines: AddToTail, Construct<std::pair<item_definition_index_t, itemid_t> >, Element, Get, GrowMemory, IsValidTeamPlayerID, NetworkStateChanged, Set, item_definition_index_t, itemid_t, operator CEntityInstance*, operator=<bool>, operator[], pair
// calls: CUtlMemory<std::pair<item_definition_index_t, itemid_t>, int>::Grow
// callers: CDOTAVictoryPrediction::ApplyEffects
void __fastcall CDOTA_PlayerResource::RecordVictoryPrediction(
        CDOTA_PlayerResource *const this,
        int iPlayerID,
        __int16 a3,
        itemid_t ulItemID)
{
  char *v4; // r15
  char *v6; // r12
  __int64 v8; // r13
  _QWORD *v9; // rdi
  __int64 v10; // r13
  itemid_t *v11; // rax
  itemid_t *v12; // rax
  itemid_t *v13; // rdx
  itemid_t *v14; // rsi
  int v15; // eax
  __int64 v16; // r13
  __int64 v17; // rax
  _WORD *v18; // rax

  if ( iPlayerID < 0 || iPlayerID >= *(this + 194) )
    return;
  v4 = this + 24 * iPlayerID + 1248;
  v6 = this + 24 * iPlayerID + 1256;
  v8 = *(this + 98) + 200LL * iPlayerID;
  if ( *(v8 + 117) != 1 )
  {
    v9 = *(v8 + 8);
    if ( v9 != 0 && (*(v9[1] + 49LL) & 4) == 0 && *(v8 + 16) != 0xFFFF )
      (*(*v9 + 176LL))(v9, 117, 0xFFFFFFFFLL, *(v8 + 16));
    *(v8 + 117) = 1;
  }
  v10 = *(v4 + 2);
  if ( v10 <= 0 )
    goto LABEL_14;
  v11 = *(v6 + 1);
  if ( a3 != LOWORD(v11->m_Data) )
  {
    v12 = v11 + 2;
    v13 = &v12[2 * (v10 - 1)];
    while ( v12 != v13 )
    {
      v14 = v12;
      v12 += 2;
      if ( LOWORD(v12[-2].m_Data) == a3 )
        goto LABEL_22;
    }
LABEL_14:
    v15 = *(v4 + 2);
    if ( v10 == *(v6 + 4) )
    {
      CUtlMemory<std::pair<item_definition_index_t,itemid_t>,int>::Grow((v6 + 8), 1);
      v15 = *(v4 + 2);
    }
    v16 = 16 * v10;
    *(v4 + 2) = v15 + 1;
    v17 = *(v6 + 1) + v16;
    if ( v17 != 0 )
    {
      *(v17 + 8) = 0;
      *v17 = 0;
      v18 = (*(v6 + 1) + v16);
    }
    else
    {
      v18 = 0;
    }
    *v18 = a3;
    *(*(v6 + 1) + v16 + 8) = ulItemID;
    return;
  }
  v14 = *(v6 + 1);
LABEL_22:
  v14[1].m_Data = ulItemID.m_Data;
}


// CDOTA_PlayerResource::GetVictoryPredictionItemID  (line 5092, @0x0000000002661d70, libserver.so)  // inlines: IsValidTeamPlayerID
// callers: CDOTAGamerules::State_Enter_POST_GAME, CDOTAVictoryPrediction::CanUse
const CDOTA_PlayerResource::TVictoryPredictionItems *__fastcall CDOTA_PlayerResource::GetVictoryPredictionItemID(
        const CDOTA_PlayerResource *const this,
        int iPlayerID)
{
  const CDOTA_PlayerResource::TVictoryPredictionItems *result; // rax

  result = 0;
  if ( iPlayerID >= 0 && iPlayerID < *(this + 194) )
    return (this + 24 * iPlayerID + 1256);
  return result;
}


// CDOTA_PlayerResource::GetPartnerType  (line 5102, @0x0000000002661da0, libserver.so)
// calls: CDOTA_PlayerResource::IsValidPlayer
// callers: CVoiceGameMgrHelper::CanPlayerHearPlayer
PartnerAccountType __fastcall CDOTA_PlayerResource::GetPartnerType(CDOTA_PlayerResource *const this, int nPlayerID)
{
  __int64 v2; // r12
  bool IsValidPlayer; // al
  PartnerAccountType v5; // edx

  v2 = nPlayerID;
  IsValidPlayer = CDOTA_PlayerResource::IsValidPlayer(this, nPlayerID);
  v5 = PartnerAccountType::PARTNER_NONE;
  if ( IsValidPlayer )
    return *(this + v2 + 8005);
  return v5;
}


// CDOTA_PlayerResource::RecordAbilityUpgrade  (line 5111, @0x0000000002661dd0, libserver.so)
// calls: CDOTA_PlayerResource::IsValidTeamPlayer
// callers: CDOTA_BaseNPC_Hero::UpgradeAbility
void __fastcall CDOTA_PlayerResource::RecordAbilityUpgrade(
        CDOTA_PlayerResource *const this,
        int nPlayerID,
        int nAbilityID,
        int nTime)
{
  __int64 v6; // r12
  char *v8; // rcx
  int v9; // esi
  char *v10; // rax

  v6 = nPlayerID;
  if ( CDOTA_PlayerResource::IsValidTeamPlayer(this, nPlayerID) )
  {
    v8 = this + 4 * v6;
    v9 = *(v8 + 7981);
    if ( v9 <= 0x18 )
    {
      *(v8 + 7981) = v9 + 1;
      v10 = this + 100 * v6 + 4 * v9;
      *(v10 + 6781) = nAbilityID;
      *(v10 + 7381) = nTime;
    }
  }
}


// CDOTA_PlayerResource::GetAbilityUpgradesForPlayer  (line 5127, @0x0000000002661e40, libserver.so)
// calls: CDOTA_PlayerResource::IsValidTeamPlayer
// callers: CDOTAGCServerSystem::WriteMatchMetadataTeamPlayer, CDOTAGCServerSystem::FillMatchDetailsForTeam, CDOTAGCServerSystem::SendMatchDetailsToClients
void __fastcall CDOTA_PlayerResource::GetAbilityUpgradesForPlayer(
        CDOTA_PlayerResource *const this,
        int nPlayerID,
        int *const upgradeCount,
        const int **const pAbilityUpgradeIDs,
        const int **const pAbilityUpgradeTimes)
{
  __int64 v8; // r12

  v8 = nPlayerID;
  if ( CDOTA_PlayerResource::IsValidTeamPlayer(this, nPlayerID) )
  {
    *upgradeCount = *(this + v8 + 7981);
    *pAbilityUpgradeIDs = (this + 100 * v8 + 27124);
    *pAbilityUpgradeTimes = (this + 100 * v8 + 29524);
  }
  else
  {
    *upgradeCount = 0;
    *pAbilityUpgradeIDs = 0;
    *pAbilityUpgradeTimes = 0;
  }
}


// CDOTA_PlayerResource::FakeMetaExperience  (line 5142, @0x0000000002664b20, libserver.so)  // inlines: Get, GetPlayTimePointsForLevel, NetworkStateChanged, Set, operator CEntityInstance*, operator=<int>
// calls: CDOTA_PlayerResource::GetTeamDataForPlayer, RandomInt, RandomFloat, CDOTA_PlayerResource::GetTeam
// callers: fake_meta_xp
void __fastcall CDOTA_PlayerResource::FakeMetaExperience(CDOTA_PlayerResource *const this)
{
  int i; // r12d
  DataTeamPlayer_t *TeamDataForPlayer; // rbx
  unsigned __int16 v4; // ax
  unsigned __int16 v5; // r14
  CEntityInstance *m_pObj; // rdi
  float v7; // xmm0_4
  int v8; // eax
  CEntityInstance *v9; // rdi
  bool v10; // zf
  __int16 v11; // ax
  CEntityInstance *v12; // rdi
  unsigned __int16 v13; // [rsp+Ch] [rbp-34h]
  int v14; // [rsp+Ch] [rbp-34h]
  __int16 v15; // [rsp+Ch] [rbp-34h]

  for ( i = 0; i < *(this + 194); ++i )
  {
    TeamDataForPlayer = CDOTA_PlayerResource::GetTeamDataForPlayer(this, i);
    if ( TeamDataForPlayer != 0 )
    {
      v4 = RandomInt(1, 30);
      v5 = v4;
      if ( TeamDataForPlayer->m_iMetaLevel.m_Value != v4 )
      {
        m_pObj = TeamDataForPlayer->__m_pChainEntity.m_pObj;
        if ( m_pObj != 0 && (m_pObj->m_pEntity->m_flags & 0x400) == 0 && TeamDataForPlayer->__m_PathIndex.m_Value != -1 )
        {
          v13 = v4;
          (*(m_pObj->_vptr_IHandleEntity + 22))(m_pObj, 96, 0xFFFFFFFFLL, TeamDataForPlayer->__m_PathIndex.m_Value);
          v4 = v13;
        }
        TeamDataForPlayer->m_iMetaLevel.m_Value = v4;
        v5 = v4;
      }
      v7 = RandomFloat(0.0, 1.0) * (3 * v5 + 90);
      v8 = v7;
      if ( v7 != TeamDataForPlayer->m_iMetaExperience.m_Value )
      {
        v9 = TeamDataForPlayer->__m_pChainEntity.m_pObj;
        if ( v9 != 0 && (v9->m_pEntity->m_flags & 0x400) == 0 && TeamDataForPlayer->__m_PathIndex.m_Value != -1 )
        {
          v14 = v7;
          (*(v9->_vptr_IHandleEntity + 22))(v9, 98, 0xFFFFFFFFLL, TeamDataForPlayer->__m_PathIndex.m_Value);
          LOWORD(v8) = v14;
        }
        TeamDataForPlayer->m_iMetaExperience.m_Value = v8;
      }
      v10 = CDOTA_PlayerResource::GetTeam(this, i) == 2;
      v11 = 100;
      if ( !v10 )
        v11 = 65;
      if ( TeamDataForPlayer->m_iMetaExperienceAwarded.m_Value != v11 )
      {
        v12 = TeamDataForPlayer->__m_pChainEntity.m_pObj;
        if ( v12 != 0 && (v12->m_pEntity->m_flags & 0x400) == 0 && TeamDataForPlayer->__m_PathIndex.m_Value != -1 )
        {
          v15 = v11;
          (*(v12->_vptr_IHandleEntity + 22))(v12, 100, 0xFFFFFFFFLL, TeamDataForPlayer->__m_PathIndex.m_Value);
          v11 = v15;
        }
        TeamDataForPlayer->m_iMetaExperienceAwarded.m_Value = v11;
      }
    }
  }
}


// fake_meta_xp  (line 5156, @0x0000000002664ca0, libserver.so)
// calls: CDOTA_PlayerResource::FakeMetaExperience
// globals: g_pDOTAPlayerResource
void __fastcall fake_meta_xp(const CCommandContext *const ctx, const CCommand *const args)
{
  CDOTA_PlayerResource::FakeMetaExperience(g_pDOTAPlayerResource);
}


// CDOTA_PlayerResource::OnHeroReplaced  (line 5162, @0x0000000002685d30, libserver.so)  // inlines: AddToTail, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<CDOTAWearableItem*>, Element, GetAbilityName, GetAbilityPoints, GetCurrentXP, GetUnitName, GrowMemory, NetworkStateChanged, Purge, RemoveAll, Set, SetAbilityPoints, SetPlayerID, String, ToCStr, Vector, operator=, operator=<int>, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CBaseEntity::GetAbsOrigin, CDOTA_ActiveModifiersList::ReplaceCasterWithCaster, CDOTA_BaseNPC::Kill, CDOTA_BaseNPC_Hero::SetTimeUntilRespawn, CBaseEntity::FirstMoveChild, CBaseEntity::NextMovePeer, __dynamic_cast, CUtlMemory<CDOTAWearableItem*, int>::Grow, UTIL_Remove, CBaseEntity::SetAbsOrigin, CDOTA_PlayerResource::SetGold, CUtlMemory<CDOTAWearableItem*, int>::Purge (20 total)
// callers: OnHeroReplacedAsync, CDOTA_PlayerResource::ReplaceHeroWith
// strings: "<NoAbilityName>"
void __fastcall CDOTA_PlayerResource::OnHeroReplaced(
        CDOTA_PlayerResource *const this,
        CDOTA_BaseNPC_Hero *pOldHero,
        CDOTA_BaseNPC_Hero *pNewHero,
        int nPlayerID,
        int nGold,
        int nXP)
{
  float v8; // xmm1_4
  CBaseEntity *i; // r12
  CDOTAWearableItem **v10; // rax
  CDOTAWearableItem *v11; // r14
  __int64 m_Size; // r13
  int v13; // eax
  __int64 v14; // r13
  int j; // r12d
  const char *v16; // rax
  const char *m_pAsString; // rcx
  int m; // r14d
  CDOTABaseAbility *AbilityByIndex; // rax
  CDOTABaseAbility *v20; // r13
  DOTAAbilityData_t *v21; // rax
  const char *v22; // rsi
  const char *v23; // rax
  CDOTABaseAbility *AbilityByName; // rax
  CDOTABaseAbility *v25; // r12
  int m_Value; // r12d
  CDOTA_UnitInventory *Inventory; // r13
  int k; // r12d
  CDOTA_Item *ItemInSlot; // rax
  DOTAAbilityData_t *m_pAbilityData; // rax
  const char *v31; // rsi
  const char *m_pszAbilityName; // rax
  Vector vOldHeroLoc; // [rsp+20h] [rbp-60h] BYREF
  CUtlVector<CDOTAWearableItem*,CUtlMemory<CDOTAWearableItem*,int> > vecWearableItemToDestroy; // [rsp+30h] [rbp-50h] BYREF

  if ( pNewHero != 0 )
  {
    vOldHeroLoc.x = 0.0;
    vOldHeroLoc.y = 0.0;
    vOldHeroLoc.z = 0.0;
    if ( pOldHero != 0 )
    {
      vOldHeroLoc = *CBaseEntity::GetAbsOrigin(pOldHero);
      CDOTA_ActiveModifiersList::ReplaceCasterWithCaster(g_pDOTAActiveModifiers, pOldHero, pNewHero);
      if ( pOldHero->m_iPlayerID.m_Value != -1 )
      {
        (*(pOldHero->_vptr_IHandleEntity + 22))(pOldHero, 4800, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        pOldHero->m_iPlayerID.m_Value = -1;
      }
      (*(pOldHero->_vptr_IHandleEntity + 40))(pOldHero, 0);
      CDOTA_BaseNPC::Kill(pOldHero, 0, 0, 0.0, 1);
      (*(pOldHero->_vptr_IHandleEntity + 387))(pOldHero);
      CDOTA_BaseNPC_Hero::SetTimeUntilRespawn(pOldHero, v8);
      vecWearableItemToDestroy.m_Size = 0;
      vecWearableItemToDestroy.m_Memory.m_pMemory = 0;
      vecWearableItemToDestroy.m_Memory.m_nAllocationCount = 0;
      vecWearableItemToDestroy.m_Memory.m_nGrowSize = 0;
      for ( i = CBaseEntity::FirstMoveChild(pOldHero); i != 0; i = CBaseEntity::NextMovePeer(i) )
      {
        v11 = __dynamic_cast(i, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTAWearableItem, 0);
        if ( v11 != 0 )
        {
          m_Size = vecWearableItemToDestroy.m_Size;
          v13 = vecWearableItemToDestroy.m_Size;
          if ( vecWearableItemToDestroy.m_Size == vecWearableItemToDestroy.m_Memory.m_nAllocationCount )
          {
            CUtlMemory<CDOTAWearableItem *,int>::Grow(&vecWearableItemToDestroy.m_Memory, 1);
            v13 = vecWearableItemToDestroy.m_Size;
          }
          vecWearableItemToDestroy.m_Size = v13 + 1;
          v10 = &vecWearableItemToDestroy.m_Memory.m_pMemory[m_Size];
          if ( v10 != 0 )
            *v10 = v11;
        }
      }
      v14 = 0;
      for ( j = 0; vecWearableItemToDestroy.m_Size > j; ++v14 )
      {
        UTIL_Remove(vecWearableItemToDestroy.m_Memory.m_pMemory[v14]);
        ++j;
      }
      CBaseEntity::SetAbsOrigin(pNewHero, &vOldHeroLoc);
      if ( nGold >= 0 )
      {
        CDOTA_PlayerResource::SetGold(this, nPlayerID, 0, 0);
        CDOTA_PlayerResource::SetGold(this, nPlayerID, nGold, 1);
      }
      v16 = "";
      m_pAsString = pOldHero->m_iszUnitName.m_Value.u.m_pAsString;
      if ( m_pAsString == 0 )
        m_pAsString = "";
      if ( pNewHero->m_iszUnitName.m_Value.u.m_Id != 0 )
        v16 = pNewHero->m_iszUnitName.m_Value.u.m_pAsString;
      if ( m_pAsString == v16 )
      {
        if ( (*(pOldHero->_vptr_IHandleEntity + 480))(pOldHero) != 0 )
        {
          Inventory = CDOTA_BaseNPC::GetInventory(pOldHero);
          if ( Inventory != 0 )
          {
            for ( k = 0; k != 17; ++k )
            {
              ItemInSlot = CDOTA_UnitInventory::GetItemInSlot(Inventory, k);
              if ( ItemInSlot != 0 )
              {
                m_pAbilityData = ItemInSlot->m_pAbilityData;
                v31 = "<NoAbilityName>";
                if ( m_pAbilityData != 0 )
                {
                  m_pszAbilityName = m_pAbilityData->m_pszAbilityName;
                  if ( m_pszAbilityName != 0 )
                    v31 = m_pszAbilityName;
                }
                CDOTA_BaseNPC::AddItem(pNewHero, v31, 3, -1, 0);
              }
            }
          }
        }
        for ( m = 0; m != 24; ++m )
        {
          AbilityByIndex = CDOTA_BaseNPC::GetAbilityByIndex(pOldHero, m);
          v20 = AbilityByIndex;
          if ( AbilityByIndex != 0 )
          {
            v21 = AbilityByIndex->m_pAbilityData;
            v22 = "<NoAbilityName>";
            if ( v21 != 0 )
            {
              v23 = v21->m_pszAbilityName;
              if ( v23 != 0 )
                v22 = v23;
            }
            AbilityByName = CDOTA_BaseNPC::FindAbilityByName(pNewHero, v22, 0);
            v25 = AbilityByName;
            if ( AbilityByName != 0 && v20->m_iLevel.m_Value > AbilityByName->m_iLevel.m_Value )
            {
              do
              {
                if ( v25->m_bHidden.m_Value )
                  break;
                if ( pNewHero->m_iAbilityPoints.m_Value != 1 )
                {
                  (*(pNewHero->_vptr_IHandleEntity + 22))(pNewHero, 4772, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
                  pNewHero->m_iAbilityPoints.m_Value = 1;
                }
                (*(pNewHero->_vptr_IHandleEntity + 495))(pNewHero, v25);
              }
              while ( v25->m_iLevel.m_Value < v20->m_iLevel.m_Value );
            }
            m_Value = pOldHero->m_iAbilityPoints.m_Value;
            if ( m_Value != pNewHero->m_iAbilityPoints.m_Value )
            {
              (*(pNewHero->_vptr_IHandleEntity + 22))(pNewHero, 4772, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
              pNewHero->m_iAbilityPoints.m_Value = m_Value;
            }
          }
        }
        if ( nXP < 0 )
          nXP = pOldHero->m_iCurrentXP.m_Value;
        (*(pNewHero->_vptr_IHandleEntity + 493))(pNewHero, 0, 1, 1, nXP);
      }
      vecWearableItemToDestroy.m_Size = 0;
      if ( (vecWearableItemToDestroy.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      {
        CUtlMemory<CDOTAWearableItem *,int>::Purge(&vecWearableItemToDestroy.m_Memory);
        if ( (vecWearableItemToDestroy.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
          CUtlMemory<CDOTAWearableItem *,int>::Purge(&vecWearableItemToDestroy.m_Memory);
      }
    }
    FindClearSpaceForUnit(pNewHero, vOldHeroLoc, 1);
    CDOTA_BaseNPC::Interrupt(pNewHero);
  }
}


// OnHeroReplacedAsync  (line 5268, @0x00000000026861b0, libserver.so)  // inlines: AssignTo, AssignTo<CBaseEntity>, Base, CEntityHandle, CHandle, Element, EmptyValue<CHandle<CBaseEntity> >, FindKeyHash, FromIndex, Get, Get<CHandle<CBaseEntity> >, Get<int>, GetEntityIdentity, GetEntryIndex, GetInstance, GetValue, GetValue<CHandle<CBaseEntity> >, GetValue<int>, IndexToIdentity, LookupEntity, Min<long long unsigned int>, Min<unsigned int>, ToDOTABaseNPC, ToDOTABaseNPCHero, atoi, operator CEntityInstance*, operator=, operator[]
// calls: VariantFieldTypeName, Warning, CDOTA_PlayerResource::OnHeroReplaced, strtol, CEntitySystem::FindFirstEntityHandleByName
// strings: "No free conversion of %s variant to CHandle<T> right now\n", "No conversion from %s to int now\n"
// globals: g_pDOTAPlayerResource, CEntityKeyValues::sm_EmptyVariant, CEntityHandle::gm_pEntityList, jpt_268634E, jpt_26864B6, jpt_2686616
void __fastcall OnHeroReplacedAsync(CDOTA_BaseNPC *pNewHero, const CEntityKeyValues *pKeyValues)
{
  int m_nCount; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t m_nAllocated; // cx
  __int64 v6; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v8; // rdx
  CEntityVariant *p_m_value; // rcx
  CEntityVariant *v10; // rax
  int16 v11; // di
  const char *v12; // rax
  uint64 v13; // r9
  unsigned int v14; // eax
  int m_int; // edi
  CDOTA_BaseNPC_Hero *v16; // rdx
  CEntityIdentity *v17; // rax
  CEntityIdentity *v18; // rax
  CEntityInstance *m_pInstance; // rsi
  int16 m_type; // ax
  uint64 m_uint64; // r12
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v22; // dx
  __int64 v23; // r8
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v24; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v25; // rdx
  CEntityVariant *v26; // rcx
  int v27; // eax
  const char *v28; // rax
  int16 v29; // ax
  uint64 v30; // r14
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v31; // ax
  __int64 v32; // r9
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v33; // r10
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v34; // rdx
  CEntityVariant *v35; // rcx
  int v36; // eax
  const char *v37; // rax
  int16 v38; // ax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v39; // dx
  __int64 v40; // r10
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v41; // r11
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v42; // rdx
  int v43; // eax
  const char *v44; // rax
  int v45; // [rsp-Ch] [rbp-4Ch]
  int v46; // [rsp-Ch] [rbp-4Ch]
  int v47; // [rsp-8h] [rbp-48h]
  int v48; // [rsp+8h] [rbp-38h]

  if ( g_pDOTAPlayerResource == 0 )
    return;
  m_nCount = pKeyValues->m_keyHashes.m_nCount;
  if ( m_nCount <= 0 )
  {
LABEL_29:
    p_m_value = &CEntityKeyValues::sm_EmptyVariant;
    goto LABEL_30;
  }
  m_nAllocated = pKeyValues->m_keyHashes.m_nAllocated;
  v6 = 0;
  while ( m_nAllocated == 0 )
  {
    if ( *(4 * v6) == 2034954718 )
      goto LABEL_10;
LABEL_7:
    if ( m_nCount <= ++v6 )
      goto LABEL_29;
  }
  m_pElements = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
  if ( m_nAllocated > 9 )
    m_pElements = pKeyValues->m_keyHashes.m_pElements;
  if ( m_pElements[v6] != 2034954718 )
    goto LABEL_7;
LABEL_10:
  if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
    v8 = pKeyValues->m_keyValues.m_pElements;
  else
    v8 = 0;
  p_m_value = &v8[v6].m_value;
LABEL_30:
  m_type = p_m_value->m_type;
  switch ( m_type )
  {
    case 0:
      LODWORD(m_uint64) = 0;
      break;
    case 1:
      LODWORD(m_uint64) = p_m_value->m_float;
      break;
    case 5:
      LODWORD(m_uint64) = p_m_value->m_int;
      break;
    case 6:
      LODWORD(m_uint64) = p_m_value->m_char;
      break;
    case 26:
      LODWORD(m_uint64) = 0x7FFFFFFF;
      if ( p_m_value->m_int64 <= 0x7FFFFFFF )
      {
        LODWORD(m_uint64) = 0x80000000;
        if ( p_m_value->m_uint64 >= 0xFFFFFFFF80000000LL )
          m_uint64 = p_m_value->m_uint64;
      }
      break;
    case 30:
      v27 = strtol(p_m_value->m_pszString, 0, 10);
      m_nCount = pKeyValues->m_keyHashes.m_nCount;
      LODWORD(m_uint64) = v27;
      break;
    case 33:
      LODWORD(m_uint64) = 0x7FFFFFFF;
      if ( p_m_value->m_uint64 <= 0x7FFFFFFE )
        LODWORD(m_uint64) = p_m_value->m_uint64;
      break;
    case 34:
      LODWORD(m_uint64) = p_m_value->m_float64;
      break;
    case 37:
      LODWORD(m_uint64) = 0x7FFFFFFF;
      if ( p_m_value->m_int <= 0x7FFFFFFEu )
        LODWORD(m_uint64) = p_m_value->m_int;
      break;
    default:
      LODWORD(m_uint64) = 0;
      v28 = VariantFieldTypeName(m_type);
      Warning("No conversion from %s to int now\n", v28);
      m_nCount = pKeyValues->m_keyHashes.m_nCount;
      break;
  }
  if ( m_nCount <= 0 )
  {
LABEL_59:
    v26 = &CEntityKeyValues::sm_EmptyVariant;
    goto LABEL_60;
  }
  v22 = pKeyValues->m_keyHashes.m_nAllocated;
  v23 = 0;
  while ( 2 )
  {
    if ( v22 == 0 )
    {
      if ( *(4 * v23) == 1698130080 )
        break;
      goto LABEL_37;
    }
    v24 = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
    if ( v22 > 9 )
      v24 = pKeyValues->m_keyHashes.m_pElements;
    if ( v24[v23] != 1698130080 )
    {
LABEL_37:
      if ( m_nCount <= ++v23 )
        goto LABEL_59;
      continue;
    }
    break;
  }
  if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
    v25 = pKeyValues->m_keyValues.m_pElements;
  else
    v25 = 0;
  v26 = &v25[v23].m_value;
LABEL_60:
  v29 = v26->m_type;
  switch ( v29 )
  {
    case 0:
      LODWORD(v30) = 0;
      break;
    case 1:
      LODWORD(v30) = v26->m_float;
      break;
    case 5:
      LODWORD(v30) = v26->m_int;
      break;
    case 6:
      LODWORD(v30) = v26->m_char;
      break;
    case 26:
      LODWORD(v30) = 0x7FFFFFFF;
      if ( v26->m_int64 <= 0x7FFFFFFF )
      {
        LODWORD(v30) = 0x80000000;
        if ( v26->m_uint64 >= 0xFFFFFFFF80000000LL )
          v30 = v26->m_uint64;
      }
      break;
    case 30:
      v36 = strtol(v26->m_pszString, 0, 10);
      m_nCount = pKeyValues->m_keyHashes.m_nCount;
      LODWORD(v30) = v36;
      break;
    case 33:
      LODWORD(v30) = 0x7FFFFFFF;
      if ( v26->m_uint64 <= 0x7FFFFFFE )
        LODWORD(v30) = v26->m_uint64;
      break;
    case 34:
      LODWORD(v30) = v26->m_float64;
      break;
    case 37:
      LODWORD(v30) = 0x7FFFFFFF;
      if ( v26->m_int <= 0x7FFFFFFEu )
        LODWORD(v30) = v26->m_int;
      break;
    default:
      LODWORD(v30) = 0;
      v37 = VariantFieldTypeName(v29);
      Warning("No conversion from %s to int now\n", v37);
      m_nCount = pKeyValues->m_keyHashes.m_nCount;
      break;
  }
  if ( m_nCount <= 0 )
  {
LABEL_89:
    v35 = &CEntityKeyValues::sm_EmptyVariant;
    goto LABEL_90;
  }
  v31 = pKeyValues->m_keyHashes.m_nAllocated;
  v32 = 0;
  while ( 2 )
  {
    if ( v31 == 0 )
    {
      if ( *(4 * v32) == -2017903622 )
        break;
      goto LABEL_67;
    }
    v33 = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
    if ( v31 > 9 )
      v33 = pKeyValues->m_keyHashes.m_pElements;
    if ( v33[v32] != -2017903622 )
    {
LABEL_67:
      if ( m_nCount <= ++v32 )
        goto LABEL_89;
      continue;
    }
    break;
  }
  if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
    v34 = pKeyValues->m_keyValues.m_pElements;
  else
    v34 = 0;
  v35 = &v34[v32].m_value;
LABEL_90:
  v38 = v35->m_type;
  switch ( v38 )
  {
    case 0:
      LODWORD(v13) = 0;
      break;
    case 1:
      LODWORD(v13) = v35->m_float;
      break;
    case 5:
      LODWORD(v13) = v35->m_int;
      break;
    case 6:
      LODWORD(v13) = v35->m_char;
      break;
    case 26:
      LODWORD(v13) = 0x7FFFFFFF;
      if ( v35->m_int64 <= 0x7FFFFFFF )
      {
        LODWORD(v13) = 0x80000000;
        if ( v35->m_uint64 >= 0xFFFFFFFF80000000LL )
          v13 = v35->m_uint64;
      }
      break;
    case 30:
      v43 = strtol(v35->m_pszString, 0, 10);
      m_nCount = pKeyValues->m_keyHashes.m_nCount;
      LODWORD(v13) = v43;
      break;
    case 33:
      LODWORD(v13) = 0x7FFFFFFF;
      if ( v35->m_uint64 <= 0x7FFFFFFE )
        LODWORD(v13) = v35->m_uint64;
      break;
    case 34:
      LODWORD(v13) = v35->m_float64;
      break;
    case 37:
      LODWORD(v13) = 0x7FFFFFFF;
      if ( v35->m_int <= 0x7FFFFFFEu )
        LODWORD(v13) = v35->m_int;
      break;
    default:
      v44 = VariantFieldTypeName(v38);
      Warning("No conversion from %s to int now\n", v44);
      m_nCount = pKeyValues->m_keyHashes.m_nCount;
      LODWORD(v13) = 0;
      break;
  }
  if ( m_nCount <= 0 )
  {
LABEL_13:
    v10 = &CEntityKeyValues::sm_EmptyVariant;
    goto LABEL_14;
  }
  v39 = pKeyValues->m_keyHashes.m_nAllocated;
  v40 = 0;
  while ( 2 )
  {
    if ( v39 == 0 )
    {
      if ( *(4 * v40) == -36062063 )
        break;
      goto LABEL_97;
    }
    v41 = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
    if ( v39 > 9 )
      v41 = pKeyValues->m_keyHashes.m_pElements;
    if ( v41[v40] != -36062063 )
    {
LABEL_97:
      if ( m_nCount <= ++v40 )
        goto LABEL_13;
      continue;
    }
    break;
  }
  if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
    v42 = pKeyValues->m_keyValues.m_pElements;
  else
    v42 = 0;
  v10 = &v42[v40].m_value;
LABEL_14:
  v11 = v10->m_type;
  LOWORD(v47) = -1;
  switch ( v11 )
  {
    case 13:
      m_int = v10->m_int;
      v47 = v10->m_int;
      v14 = v10->m_int + 2;
      break;
    case 30:
      v46 = v13;
      CEntitySystem::FindFirstEntityHandleByName(g_pEntitySystem, v10->m_pszString);
      m_int = v48;
      LODWORD(v13) = v46;
      LOWORD(v47) = v48;
      v14 = v48 + 2;
      break;
    case 0:
LABEL_18:
      v14 = 1;
      m_int = -1;
      break;
    default:
      v45 = v13;
      v12 = VariantFieldTypeName(v11);
      Warning("No free conversion of %s variant to CHandle<T> right now\n", v12);
      LODWORD(v13) = v45;
      goto LABEL_18;
  }
  if ( pNewHero != 0 && (pNewHero->m_iUnitType & 1) != 0 )
    v16 = pNewHero;
  else
    v16 = 0;
  if ( v14 <= 1
    || (v17 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v47 >> 9) & 0x3F]) == 0
    || (v18 = &v17[v47 & 0x1FF]) == 0
    || m_int != v18->m_EHandle.m_Index
    || (m_pInstance = v18->m_pInstance, v18->m_pInstance == 0)
    || BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0
    || (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) == 0 )
  {
    m_pInstance = 0;
  }
  CDOTA_PlayerResource::OnHeroReplaced(g_pDOTAPlayerResource, m_pInstance, v16, m_uint64, v30, v13);
}


// CDOTA_PlayerResource::ReplaceHeroWith  (line 5281, @0x0000000002686800, libserver.so)  // inlines: AddKeyValue<CEntityHandle>, AddToTail, Base, Bind, CDotaNPCSpawnerContext, CEntityHandle, CEntityKeyValuesModifyScope, CEntitySpawnerContext, CEntitySpawnerContextBase, CEntitySpawnerContextModifyScope, CUtlDelegate, CUtlMemory, CUtlVector, CUtlVectorBase, Convert<FastDelegate2<CDOTA_BaseNPC*, const CEntityKeyValues*, void>, void (FastDelegate2<CDOTA_BaseNPC*, const CEntityKeyValues*, void>::*)(CDOTA_BaseNPC*, const CEntityKeyValues*)const, void (detail::GenericClass::*)()>, CopyFrom<FastDelegate2<CDOTA_BaseNPC*, const CEntityKeyValues*, void> >, DOTAGameRules, Element, FastDelegate2, FindKeyHash, Free, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetGameTime, GetHandleEntity, GetInstance, GetOwnerEntity, GetSerialNumber, GetTeamNumber, IndexToIdentity, Init, IsControllableByPlayer, IsRealHero, IsValid, IsValidPlayerID, IsValidTeamPlayerID, LookupEntity, NetworkStateChanged, Purge, RemoveAll, Set, SetAssignedHero, SetHeroSpawnGroup, SetKillCamUnit, SetLastOrderTime, SetMementoFrom, SetValue<CEntityHandle>, SetValue<int>, ToDOTABaseNPC, ToDOTABaseNPCHero, ToDOTAPlayer, UtlMakeDelegate<CDOTA_BaseNPC*, const CEntityKeyValues*, void>, bindmemfunc<FastDelegate2<CDOTA_BaseNPC*, const CEntityKeyValues*, void>, void (FastDelegate2<CDOTA_BaseNPC*, const CEntityKeyValues*, void>::*)(CDOTA_BaseNPC*, const CEntityKeyValues*)const>, bindstaticfunc<FastDelegate2<CDOTA_BaseNPC*, const CEntityKeyValues*, void>, void (FastDelegate2<CDOTA_BaseNPC*, const CEntityKeyValues*, void>::*)(CDOTA_BaseNPC*, const CEntityKeyValues*)const>, end, operator CBaseEntity*, operator CEntityInstance*, operator!=, operator=, operator[], ~CDotaNPCSpawnerContext, ~CEntityKeyValuesModifyScope, ~CEntitySpawnerContext, ~CEntitySpawnerContextBase, ~CEntitySpawnerContextModifyScope, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: DOTAGameManager, CDOTAGameManager::GetDataForHeroOrUnit, CDOTA_PlayerResource::GetPlayerSelectedHeroHandle, CEntityHandle::operator CEntityInstance*, CDOTA_BaseNPC::Kill, CDOTA_BaseNPC_Hero::SetTimeUntilRespawn, UTIL_Remove, CDOTA_BaseNPC_Hero::GetAllPets, FindUnitsInRadius, CEntityHandle::GetHandleEntity, CDOTA_PlayerResource::SetCanRepick, CDOTA_PlayerResource::SetSelectedHero (34 total)
// callers: CDOTAGamerules::OnDemoHero, CDOTA_PlayerResource::Script_ReplaceHeroWith
// strings: "ReplaceHeroWith failed as player has no current hero to replace.\n", "Attempted to set attribute %s as if it was a non-attribute key!\n", "ReplaceHeroWith failed as the unit %s is invalid.\n"
// globals: CEntityHandle::gm_pEntityList, FastDelegate2<CDOTA_BaseNPC *,CEntityKeyValues const*,void>::InvokeStaticFunction(CDOTA_BaseNPC *,CEntityKeyValues const*), OnHeroReplacedAsync(CDOTA_BaseNPC *,CEntityKeyValues const*)
CDOTA_BaseNPC_Hero *__fastcall CDOTA_PlayerResource::ReplaceHeroWith(
        CDOTA_PlayerResource *const this,
        int nPlayerID,
        const char *pszHeroClass,
        int nGold,
        int nXP,
        bool bAsync)
{
  CDOTAGameManager *v7; // rax
  CEntityInstance *v8; // rax
  CDOTA_BaseNPC_Hero *v9; // r15
  __int64 v10; // r12
  int i; // ebx
  int v12; // edi
  __int64 v13; // r12
  int j; // ebx
  CHandle<CBaseEntity> *v15; // rdx
  uint32 m_Index; // eax
  __int16 v17; // cx
  CEntityIdentity *v18; // rdx
  CEntityIdentity *v19; // rdx
  CEntityInstance *m_pInstance; // rdi
  unsigned __int16 v21; // dx
  int v22; // esi
  int v23; // eax
  CEntityIdentity *v24; // rdx
  CEntityIdentity *v25; // rdx
  HSCRIPT m_hScope; // rdx
  IHandleEntity *HandleEntity; // rax
  IHandleEntity *v28; // rbx
  int vptr_IHandleEntity; // esi
  CEntityIdentity *v30; // rax
  __int64 v31; // rcx
  bool v32; // zf
  CEntityIdentity *v33; // rax
  CConcreteEntityList *v34; // rcx
  int vptr_IHandleEntity_high; // eax
  CEntityIdentity *v36; // rdx
  CEntityIdentity *v37; // rdx
  int v38; // xmm0_4
  int v39; // ebx
  int Team; // r12d
  const char *SelectedHeroName; // rax
  CDOTA_BaseNPC *v42; // rax
  CDOTA_BaseNPC_Hero *v43; // rbx
  void (*m_pPrevAllocator)(detail::GenericClass *); // rax
  CEntityIdentity *m_pEntity; // rax
  int v47; // edx
  __int16 v48; // cx
  int v49; // r12d
  int v50; // r15d
  const char *v51; // rax
  __int64 v52; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v53; // rdx
  __int64 v54; // r12
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rax
  int v56; // esi
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v57; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v58; // rax
  uint16 m_flags; // cx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v60; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v61; // rdx
  __int64 v62; // rax
  const char *m_pAttributeName; // rsi
  int v64; // ecx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v65; // rax
  uint16 v66; // dx
  int nXPa; // [rsp+44h] [rbp-16Ch] BYREF
  int nGolda; // [rsp+48h] [rbp-168h] BYREF
  int nPlayerIDa; // [rsp+4Ch] [rbp-164h] BYREF
  int v72; // [rsp+50h] [rbp-160h]
  CUtlVector<CDOTA_BaseNPC*,CUtlMemory<CDOTA_BaseNPC*,int> > vecOwnedUnits; // [rsp+60h] [rbp-150h] BYREF
  CUtlVector<CDOTA_BaseNPC_Pet*,CUtlMemory<CDOTA_BaseNPC_Pet*,int> > vecOwnedPets; // [rsp+80h] [rbp-130h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > vecUnits; // [rsp+A0h] [rbp-110h] BYREF
  CDotaNPCSpawnerContextModifyScope sg; // [rsp+C0h] [rbp-F0h] BYREF
  CDotaNPCSpawnerContext ctx; // [rsp+E0h] [rbp-D0h] BYREF
  unsigned __int64 v78; // [rsp+178h] [rbp-38h]

  nPlayerIDa = nPlayerID;
  v78 = __readfsqword(0x28u);
  nGolda = nGold;
  nXPa = nXP;
  if ( nPlayerID < 0 || nPlayerID >= *(this + 212) )
    return 0;
  v7 = DOTAGameManager();
  if ( CDOTAGameManager::GetDataForHeroOrUnit(v7, pszHeroClass) == 0 )
  {
    v43 = 0;
    Warning("ReplaceHeroWith failed as the unit %s is invalid.\n", pszHeroClass);
    return v43;
  }
  CDOTA_PlayerResource::GetPlayerSelectedHeroHandle(&sg, this, nPlayerIDa);
  v8 = CEntityHandle::operator CEntityInstance *(&sg);
  v9 = v8;
  if ( v8 == 0 || BYTE3(v8[7]._vptr_IHandleEntity) == 0 || (v8[43].m_iszPrivateVScripts.u.m_Id & 1) == 0 )
  {
    v43 = 0;
    Warning("ReplaceHeroWith failed as player has no current hero to replace.\n");
    return v43;
  }
  *(this + 6 * nPlayerIDa + 3842) = 0;
  vecOwnedUnits.m_Size = 0;
  vecOwnedUnits.m_Memory.m_pMemory = 0;
  vecOwnedUnits.m_Memory.m_nAllocationCount = 0;
  vecOwnedUnits.m_Memory.m_nGrowSize = 0;
  (*(v8->_vptr_IHandleEntity + 499))(v8);
  vecOwnedPets.m_Size = 0;
  vecOwnedPets.m_Memory.m_pMemory = 0;
  vecOwnedPets.m_Memory.m_nAllocationCount = 0;
  vecOwnedPets.m_Memory.m_nGrowSize = 0;
  CDOTA_BaseNPC_Hero::GetAllPets(v9, &vecOwnedPets);
  v10 = 0;
  for ( i = 0; vecOwnedPets.m_Size > i; ++v10 )
  {
    UTIL_Remove(vecOwnedPets.m_Memory.m_pMemory[v10]);
    ++i;
  }
  v12 = *(this + 383);
  vecUnits.m_Size = 0;
  vecUnits.m_Memory.m_pMemory = 0;
  vecUnits.m_Memory.m_nAllocationCount = 0;
  vecUnits.m_Memory.m_nGrowSize = 0;
  FindUnitsInRadius(v12, &vec3_origin, 0, -1.0, &vecUnits, 3, 3, 0, 0, 0);
  v13 = 0;
  for ( j = 0; vecUnits.m_Size > j; ++v13 )
  {
    while ( 1 )
    {
      v15 = &vecUnits.m_Memory.m_pMemory[v13];
      m_Index = vecUnits.m_Memory.m_pMemory[v13].m_Index;
      if ( m_Index + 2 > 1 )
      {
        v17 = v15->m_Index;
        v18 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v15->m_Index) >> 9) & 0x3F];
        if ( v18 != 0 )
        {
          v19 = &v18[v17 & 0x1FF];
          if ( v19 != 0 && m_Index == v19->m_EHandle.m_Index )
          {
            m_pInstance = v19->m_pInstance;
            if ( v19->m_pInstance != 0 && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 )
            {
              if ( HIDWORD(m_pInstance[11].m_pEntity) == -1 )
              {
                v21 = 0x7FFF;
                v22 = 0x7FFF;
              }
              else
              {
                v21 = WORD2(m_pInstance[11].m_pEntity) & 0x7FFF;
                v22 = v21;
              }
              v23 = (HIDWORD(m_pInstance[11].m_pEntity) >> 15 << 15) | v21 & 0x7FFF;
              LODWORD(sg.m_sg.m_pKeyValues) = v23;
              if ( (v23 + 2) > 1 )
              {
                v24 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v22 >> 9];
                if ( v24 != 0 )
                {
                  v25 = &v24[v22 & 0x1FF];
                  if ( v25 != 0 && v23 == v25->m_EHandle.m_Index && v9 == v25->m_pInstance )
                  {
                    m_hScope = m_pInstance[61].m_hPrivateScope.m_hScope;
                    if ( _bittest64(&m_hScope, nPlayerIDa) )
                    {
                      if ( (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 0x100) == 0 && v9 != m_pInstance )
                        break;
                    }
                  }
                }
              }
            }
          }
        }
      }
      ++j;
      ++v13;
      if ( vecUnits.m_Size <= j )
        goto LABEL_29;
    }
    UTIL_Remove(m_pInstance);
    ++j;
  }
LABEL_29:
  HandleEntity = CEntityHandle::GetHandleEntity(&v9->m_hOwnerEntity.m_Value);
  v28 = HandleEntity;
  if ( HandleEntity != 0 && (*(HandleEntity->_vptr_IHandleEntity + 140))(HandleEntity) != 0 )
  {
    vptr_IHandleEntity = v28[600]._vptr_IHandleEntity;
    if ( (vptr_IHandleEntity + 2) > 1
      && (v30 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v28[600]._vptr_IHandleEntity) >> 9) & 0x3F]) != 0 )
    {
      v31 = v28[600]._vptr_IHandleEntity & 0x1FF;
      v32 = &v30[v31] == 0;
      v33 = &v30[v31];
      v34 = CEntityHandle::gm_pEntityList;
      if ( !v32 && vptr_IHandleEntity == v33->m_EHandle.m_Index && v33->m_pInstance != 0 )
      {
        (*(v28->_vptr_IHandleEntity + 22))(v28, 4800, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        LODWORD(v28[600]._vptr_IHandleEntity) = -1;
        v34 = CEntityHandle::gm_pEntityList;
      }
    }
    else
    {
      v34 = CEntityHandle::gm_pEntityList;
    }
    vptr_IHandleEntity_high = HIDWORD(v28[602]._vptr_IHandleEntity);
    if ( (vptr_IHandleEntity_high + 2) > 1 )
    {
      v36 = v34->m_pIdentityChunks[(WORD2(v28[602]._vptr_IHandleEntity) >> 9) & 0x3F];
      if ( v36 != 0 )
      {
        v37 = &v36[WORD2(v28[602]._vptr_IHandleEntity) & 0x1FF];
        if ( v37 != 0 && vptr_IHandleEntity_high == v37->m_EHandle.m_Index && v37->m_pInstance != 0 )
        {
          (*(v28->_vptr_IHandleEntity + 22))(v28, 4820, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
          HIDWORD(v28[602]._vptr_IHandleEntity) = -1;
        }
      }
    }
    v38 = 0;
    if ( g_pGameRules != 0 )
      v38 = *&g_pGameRules[18].m_szQuestName[20];
    HIDWORD(v28[607]._vptr_IHandleEntity) = v38;
    LODWORD(v28[608]._vptr_IHandleEntity) = v38;
  }
  CDOTA_PlayerResource::SetCanRepick(this, nPlayerIDa, 0);
  CDOTA_PlayerResource::SetSelectedHero(this, nPlayerIDa, 0, 0);
  CDOTA_PlayerResource::SetSelectedHero(this, nPlayerIDa, pszHeroClass, 0);
  CDOTA_PlayerResource::ResetTotalEarnedGold(this, nPlayerIDa);
  v39 = nPlayerIDa;
  if ( nPlayerIDa >= 0 && nPlayerIDa < *(this + 194) )
    *(this + nPlayerIDa + 8446) = 0;
  if ( !bAsync )
  {
    Team = CDOTA_PlayerResource::GetTeam(this, v39);
    SelectedHeroName = CDOTA_PlayerResource::GetSelectedHeroName(this, v39);
    v42 = DOTA_Hero_SpawnNoPlayer_Synchronous(SelectedHeroName, v39, Team);
    if ( v42 != 0 && (v42->m_iUnitType & 1) != 0 )
      v43 = v42;
    else
      v43 = 0;
    CDOTA_PlayerResource::OnHeroReplaced(this, v9, v43, nPlayerIDa, nGolda, nXPa);
    goto LABEL_50;
  }
  sg.m_pContext = 0;
  sg.m_sg.m_pPrevAllocator = FastDelegate2<CDOTA_BaseNPC *,CEntityKeyValues const*,void>::InvokeStaticFunction;
  CEntityKeyValues::CEntityKeyValues(&ctx.m_entityKeyValues);
  m_pPrevAllocator = sg.m_sg.m_pPrevAllocator;
  ctx.m_pParent = 0;
  ctx.m_pCompletionListener = 0;
  sg.m_sg.m_pKeyValues = 0;
  sg.m_sg.m_pPrevAllocator = 0;
  ctx.m_callback.m_Closure.m_pFunction.__pfn = m_pPrevAllocator;
  ctx.m_callback.m_Closure.m_pFunction.__delta = sg.m_pContext;
  ctx.m_callback.m_Closure.m_pthis = OnHeroReplacedAsync;
  CEntityKeyValuesModifyScope::BeginModify(&sg.m_sg, &ctx.m_entityKeyValues);
  sg.m_pContext = &ctx;
  CEntityKeyValues::SetValue<int>(&ctx.m_entityKeyValues, 2034954718, &nPlayerIDa);
  CEntityKeyValues::SetValue<int>(&ctx.m_entityKeyValues, 1698130080, &nGolda);
  CEntityKeyValues::SetValue<int>(&ctx.m_entityKeyValues, -2017903622, &nXPa);
  m_pEntity = v9->m_pEntity;
  if ( m_pEntity != 0 )
  {
    v47 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
    v48 = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      v48 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    LOWORD(v72) = v48 | v72 & 0x8000;
    v72 = (v47 << 15) | v72 & 0x7FFF;
  }
  else
  {
    v72 = -1;
  }
  if ( ctx.m_entityKeyValues.m_nQueuedForSpawnCount <= 0 )
  {
    if ( ctx.m_entityKeyValues.m_keyHashes.m_nCount <= 0 )
    {
LABEL_80:
      CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int,(unsigned short)9,short>,unsigned int,short>::AddToTailGetPtr(&ctx.m_entityKeyValues.m_keyHashes);
      LOWORD(v54) = ctx.m_entityKeyValues.m_keyHashes.m_nCount - 1;
      if ( ctx.m_entityKeyValues.m_keyHashes.m_nAllocated != 0 )
      {
        m_pElements = (&ctx.m_entityKeyValues.m_keyHashes.m_nAllocAllocated + 1);
        if ( ctx.m_entityKeyValues.m_keyHashes.m_nAllocated >= 0xA )
          m_pElements = ctx.m_entityKeyValues.m_keyHashes.m_pElements;
      }
      else
      {
        m_pElements = 0;
      }
      v54 = v54;
      m_pElements[v54] = -36062063;
      CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&ctx.m_entityKeyValues.m_keyValues);
      v56 = v72;
      if ( ctx.m_entityKeyValues.m_keyValues.m_nAllocated != 0 )
        v57 = ctx.m_entityKeyValues.m_keyValues.m_pElements;
      else
        v57 = 0;
      v58 = &v57[v54];
      m_flags = v58->m_value.m_flags;
      if ( (m_flags & 1) != 0 )
        v58->m_value.m_flags = m_flags & 0xFFFE;
      v58->m_value.m_uint64 = 0;
      v58->m_value.m_type = 13;
      v58->m_value.m_int = v56;
      if ( ctx.m_entityKeyValues.m_keyValues.m_nAllocated != 0 )
        v60 = ctx.m_entityKeyValues.m_keyValues.m_pElements;
      else
        v60 = 0;
      v60[v54].m_pAttributeName = 0;
      goto LABEL_63;
    }
    v52 = 0;
    while ( 1 )
    {
      if ( ctx.m_entityKeyValues.m_keyHashes.m_nAllocated != 0 )
      {
        v53 = (&ctx.m_entityKeyValues.m_keyHashes.m_nAllocAllocated + 1);
        if ( ctx.m_entityKeyValues.m_keyHashes.m_nAllocated > 9 )
          v53 = ctx.m_entityKeyValues.m_keyHashes.m_pElements;
      }
      else
      {
        v53 = 0;
      }
      if ( v53[v52] == -36062063 )
        break;
      if ( ctx.m_entityKeyValues.m_keyHashes.m_nCount <= ++v52 )
        goto LABEL_80;
    }
    if ( ctx.m_entityKeyValues.m_keyValues.m_nAllocated != 0 )
    {
      v61 = ctx.m_entityKeyValues.m_keyValues.m_pElements;
      v62 = v52;
      m_pAttributeName = ctx.m_entityKeyValues.m_keyValues.m_pElements[v62].m_pAttributeName;
      if ( m_pAttributeName != 0 )
      {
LABEL_92:
        Warning("Attempted to set attribute %s as if it was a non-attribute key!\n", m_pAttributeName);
        goto LABEL_63;
      }
      v64 = v72;
    }
    else
    {
      v62 = v52;
      m_pAttributeName = *(v62 * 24 + 16);
      if ( m_pAttributeName != 0 )
        goto LABEL_92;
      v64 = v72;
      v61 = 0;
    }
    v65 = &v61[v62];
    v66 = v65->m_value.m_flags;
    if ( (v66 & 1) != 0 )
      v65->m_value.m_flags = v66 & 0xFFFE;
    v65->m_value.m_uint64 = 0;
    v65->m_value.m_type = 13;
    v65->m_value.m_int = v64;
  }
LABEL_63:
  CEntityKeyValuesModifyScope::Release(&sg.m_sg);
  v49 = nPlayerIDa;
  v50 = CDOTA_PlayerResource::GetTeam(this, nPlayerIDa);
  v51 = CDOTA_PlayerResource::GetSelectedHeroName(this, v49);
  DOTA_Hero_Spawn(v51, v49, v50, &ctx);
  v43 = 0;
  CEntityKeyValues::~CEntityKeyValues(&ctx.m_entityKeyValues);
LABEL_50:
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&vecUnits);
  if ( (vecUnits.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&vecUnits.m_Memory);
    if ( (vecUnits.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&vecUnits.m_Memory);
  }
  vecOwnedPets.m_Size = 0;
  if ( (vecOwnedPets.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CDOTA_BaseNPC_Pet *,int>::Purge(&vecOwnedPets.m_Memory);
    if ( (vecOwnedPets.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CDOTA_BaseNPC_Pet *,int>::Purge(&vecOwnedPets.m_Memory);
  }
  vecOwnedUnits.m_Size = 0;
  if ( (vecOwnedUnits.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CDOTA_BaseNPC *,int>::Purge(&vecOwnedUnits.m_Memory);
    if ( (vecOwnedUnits.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CDOTA_BaseNPC *,int>::Purge(&vecOwnedUnits.m_Memory);
  }
  return v43;
}


// CDOTA_PlayerResource::Script_ReplaceHeroWith  (line 5389, @0x0000000002687380, libserver.so)  // inlines: EntityToHScript, Get, GetPublicScriptScope, ToHScript
// calls: CDOTA_PlayerResource::ReplaceHeroWith, CEntityInstance::CreatePublicScriptScope
HSCRIPT __fastcall CDOTA_PlayerResource::Script_ReplaceHeroWith(
        CDOTA_PlayerResource *const this,
        int nPlayerID,
        const char *pszHeroClass,
        int nGold,
        int nXP)
{
  CDOTA_BaseNPC_Hero *v5; // rax
  CDOTA_BaseNPC_Hero *pNewHero; // [rsp+8h] [rbp-8h]

  v5 = CDOTA_PlayerResource::ReplaceHeroWith(this, nPlayerID, pszHeroClass, nGold, nXP, 0);
  if ( v5 == 0 )
    return 0;
  if ( v5->m_pEntity->m_hPublicScope.m_hScope != 0 )
    return v5->m_pEntity->m_hPublicScope.m_hScope;
  pNewHero = v5;
  CEntityInstance::CreatePublicScriptScope(v5, 0);
  return pNewHero->m_pEntity->m_hPublicScope.m_hScope;
}


// CDOTA_PlayerResource::IncrementFullUpdateCount  (line 5395, @0x0000000002661ed0, libserver.so)
// calls: CDOTA_PlayerResource::IsValidTeamPlayer
// callers: CDOTAGCServerSystem::FireGameEvent
void __fastcall CDOTA_PlayerResource::IncrementFullUpdateCount(CDOTA_PlayerResource *const this, int iPlayerID)
{
  __int64 v2; // r12

  v2 = iPlayerID;
  if ( CDOTA_PlayerResource::IsValidTeamPlayer(this, iPlayerID) )
    ++*(this + v2 + 8069);
}


// CDOTA_PlayerResource::GetFullUpdateCount  (line 5403, @0x0000000002661f00, libserver.so)
// calls: CDOTA_PlayerResource::IsValidTeamPlayer
// callers: dota_dump_connection_stats, CDOTAGCServerSystem::SendConnectionStats, CDOTAGCServerSystem::FireGameEvent
int __fastcall CDOTA_PlayerResource::GetFullUpdateCount(CDOTA_PlayerResource *const this, int iPlayerID)
{
  __int64 v2; // r12
  bool IsValidTeamPlayer; // al
  int v5; // edx

  v2 = iPlayerID;
  IsValidTeamPlayer = CDOTA_PlayerResource::IsValidTeamPlayer(this, iPlayerID);
  v5 = 0;
  if ( IsValidTeamPlayer )
    return *(this + v2 + 8069);
  return v5;
}


// CDOTA_PlayerResource::GetNetWorth  (line 5411, @0x0000000002662fd0, libserver.so)
// calls: CDOTA_PlayerResource::IsValidTeamPlayer, CDOTA_PlayerResource::GetTeamDataForPlayer
// callers: CDOTA_RealtimeCombatAnalyzer::PerformStorageForEvent, CDOTA_RealtimeCombatAnalyzer::EvaluateGameState, CDOTA_CombatLog::GenerateExperimentalTimedStats, CDOTA_CombatLog::GenerateTimedStats, CDOTA_CombatLog::AddHealthEvent, CDOTA_CombatLog::AddPurchaseItemEvent, CDOTA_CombatLog::AddPlayerStatsEvent, CDOTA_PlayerResource::GetNetWorthRank, CDOTA_PlayerResource::GetTeamNetWorth, CDOTA_PlayerResource::RecordBalanceForTime, CDOTASpectatorGraphManager::RecordTeamStats, NetworthSort (18 total)
int __fastcall CDOTA_PlayerResource::GetNetWorth(CDOTA_PlayerResource *const this, int iPlayerID)
{
  int v3; // r12d
  __int64 v4; // rbx
  CDOTA_DataNonSpectator *v5; // rax
  DataTeamPlayer_t *TeamDataForPlayer; // rax

  v3 = 0;
  v4 = iPlayerID;
  if ( CDOTA_PlayerResource::IsValidTeamPlayer(this, iPlayerID) )
  {
    v5 = g_pDOTADataTeams[1];
    if ( v5 != 0 )
    {
      return *(&v5[1].m_hPrivateScope.m_hScope + v4);
    }
    else
    {
      TeamDataForPlayer = CDOTA_PlayerResource::GetTeamDataForPlayer(this, v4);
      if ( TeamDataForPlayer != 0 )
        return TeamDataForPlayer->m_iNetWorth.m_Value;
    }
  }
  return v3;
}


// CDOTA_PlayerResource::GetNetWorthRank  (line 5428, @0x0000000002663030, libserver.so)
// calls: CDOTA_PlayerResource::IsValidTeamPlayer, CDOTA_PlayerResource::GetTeam, CDOTA_PlayerResource::GetNetWorth
// callers: CDOTA_PlayerResource::AddStatsResultToMetadata, CDOTA_PlayerResource::AddStatsResultToSignout
int __fastcall CDOTA_PlayerResource::GetNetWorthRank(CDOTA_PlayerResource *const this, int iPlayerID)
{
  bool IsValidTeamPlayer; // dl
  int result; // eax
  int v6; // r14d
  int Team; // r13d
  int v8; // r15d
  int NetWorth; // eax
  int nMyNetWorth; // [rsp+4h] [rbp-2Ch]

  IsValidTeamPlayer = CDOTA_PlayerResource::IsValidTeamPlayer(this, iPlayerID);
  result = 0;
  if ( IsValidTeamPlayer )
  {
    v6 = 0;
    Team = CDOTA_PlayerResource::GetTeam(this, iPlayerID);
    v8 = 0;
    nMyNetWorth = CDOTA_PlayerResource::GetNetWorth(this, iPlayerID);
    do
    {
      while ( iPlayerID == v8
           || !CDOTA_PlayerResource::IsValidTeamPlayer(this, v8)
           || Team != CDOTA_PlayerResource::GetTeam(this, v8) )
      {
        if ( ++v8 == 24 )
          return v6;
      }
      NetWorth = CDOTA_PlayerResource::GetNetWorth(this, v8++);
      v6 += nMyNetWorth < NetWorth;
    }
    while ( v8 != 24 );
    return v6;
  }
  return result;
}


// CDOTA_PlayerResource::ComputeNetWorth  (line 5449, @0x0000000002679810, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, CUtlVectorFixedGrowableCompat, CopyConstruct<CDOTA_BaseNPC*>, DOTAGameRules, Element, Get, GetAbilityData, GetContainedItem, GetDroppedItem, GetEntityIdentity, GetEntryIndex, GetInstance, GetNumCouriersForTeam, GetTeamNumber, GrowMemory, IndexToIdentity, IsValid, LookupEntity, NetworkStateChanged, Purge, RemoveAll, Set, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CBaseEntity*, operator CDOTA_Item*, operator CEntityInstance*, operator=<int>, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~CUtlVectorFixedGrowableCompat
// calls: CDOTA_PlayerResource::IsValidTeamPlayer, CDOTA_PlayerResource::GetGold, CDOTA_PlayerResource::GetPlayerSelectedHeroHandle, CEntityHandle::operator CEntityInstance*, CDOTA_PlayerResource::GetNthCourierForTeam, CUtlMemory<CDOTA_BaseNPC*, int>::Grow, memcmp, CDOTA_PlayerResource::GetTeamDataForPlayer, DataTeamPlayer_t::NetworkStateChanged, CDOTA_BaseNPC::GetInventory, CDOTA_UnitInventory::GetItemInSlot, __dynamic_cast (19 total)
// callers: CDOTA_PlayerResource::ModifyGold, CDOTA_PlayerResource::UpdatePlayerData
// strings: "modifier_item_ultimate_scepter_consumed", "item_ultimate_scepter", "modifier_item_moon_shard_consumed"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_PlayerResource::ComputeNetWorth(CDOTA_PlayerResource *const this, int iPlayerID)
{
  CEntityInstance *v3; // rax
  __int64 m_Size; // r12
  int m_Value; // edx
  int v6; // r14d
  int v7; // ebx
  int v8; // edx
  CDOTA_BaseNPC **v9; // rax
  CDOTA_Unit_Courier *NthCourierForTeam; // r13
  int v11; // eax
  CDOTA_BaseNPC *v12; // r12
  CDOTA_DataNonSpectator *v13; // rbx
  DataTeamPlayer_t *TeamDataForPlayer; // rax
  DataTeamPlayer_t *v15; // rbx
  int v16; // r12d
  __int64 v17; // r13
  int v18; // r14d
  CDOTA_BaseNPC *v19; // rbx
  CDOTA_UnitInventory *Inventory; // rax
  int v21; // ebx
  CDOTA_UnitInventory *v22; // r12
  CDOTA_Item *ItemInSlot; // rax
  __int64 v24; // r12
  int v25; // ebx
  CGameRules *i; // rax
  CConcreteEntityList *v27; // r13
  uint32 v28; // eax
  CEntityIdentity *v29; // rdx
  CEntityIdentity *v30; // rdx
  _DWORD *v31; // rax
  int v32; // edx
  unsigned __int16 v33; // cx
  CEntityIdentity *v34; // rax
  CEntityIdentity *v35; // rax
  CDOTABaseAbility *m_pInstance; // r13
  DOTAAbilityData_t *m_pAbilityData; // rax
  int v38; // eax
  int v39; // eax
  int ItemCost; // eax
  int v41; // eax
  CDOTA_BaseNPC *v42; // [rsp+10h] [rbp-170h]
  EHANDLE hItemPhysical; // [rsp+20h] [rbp-160h] BYREF
  int nValue; // [rsp+2Ch] [rbp-154h] BYREF
  CUtlVectorFixedGrowableCompat<CDOTA_BaseNPC*,32ul> vecOwnedUnits; // [rsp+30h] [rbp-150h] BYREF
  unsigned __int64 v47; // [rsp+148h] [rbp-38h]

  v47 = __readfsqword(0x28u);
  if ( !CDOTA_PlayerResource::IsValidTeamPlayer(this, iPlayerID) )
    return;
  nValue = CDOTA_PlayerResource::GetGold(this, iPlayerID);
  CDOTA_PlayerResource::GetPlayerSelectedHeroHandle(&hItemPhysical, this, iPlayerID);
  v3 = CEntityHandle::operator CEntityInstance *(&hItemPhysical);
  v42 = v3;
  if ( v3 != 0 && BYTE3(v3[7]._vptr_IHandleEntity) != 0 && (v3[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
  {
    vecOwnedUnits.m_Memory.m_nAllocationCount = 32;
    vecOwnedUnits.m_Memory.m_nGrowSize = 0x80000000;
    vecOwnedUnits.m_Memory.m_pMemory = &vecOwnedUnits.m_FixedMemory;
    vecOwnedUnits.m_Size = 1;
    *vecOwnedUnits.m_FixedMemory.m_Data = v3;
    (*(v3->_vptr_IHandleEntity + 499))(v3, &vecOwnedUnits);
    LODWORD(m_Size) = vecOwnedUnits.m_Size;
    m_Value = v42->m_iTeamNum.m_Value;
    v6 = *(this + 6 * m_Value + 4738);
    if ( v6 > 0 )
    {
      v7 = 0;
      m_Size = vecOwnedUnits.m_Size;
      while ( 1 )
      {
        NthCourierForTeam = CDOTA_PlayerResource::GetNthCourierForTeam(this, v7, m_Value);
        if ( NthCourierForTeam == 0 )
          goto LABEL_10;
        v11 = m_Size;
        if ( vecOwnedUnits.m_Memory.m_nAllocationCount == m_Size )
        {
          CUtlMemory<CDOTA_BaseNPC *,int>::Grow(&vecOwnedUnits.m_Memory, 1);
          v11 = vecOwnedUnits.m_Size;
        }
        v8 = v11 + 1;
        vecOwnedUnits.m_Size = v11 + 1;
        v9 = &vecOwnedUnits.m_Memory.m_pMemory[m_Size];
        if ( v9 != 0 )
          break;
        ++v7;
        m_Size = v8;
        if ( v7 == v6 )
          goto LABEL_24;
LABEL_11:
        m_Value = v42->m_iTeamNum.m_Value;
      }
      *v9 = NthCourierForTeam;
      m_Size = vecOwnedUnits.m_Size;
LABEL_10:
      if ( ++v7 == v6 )
        goto LABEL_24;
      goto LABEL_11;
    }
LABEL_24:
    if ( m_Size > 0 )
    {
      v17 = 0;
      v18 = 0;
      do
      {
        v19 = vecOwnedUnits.m_Memory.m_pMemory[v17];
        if ( v19 != 0 && (*(v19->_vptr_IHandleEntity + 480))(vecOwnedUnits.m_Memory.m_pMemory[v17]) != 0 )
        {
          Inventory = CDOTA_BaseNPC::GetInventory(v19);
          v21 = 0;
          v22 = Inventory;
          if ( Inventory != 0 )
          {
            do
            {
              ItemInSlot = CDOTA_UnitInventory::GetItemInSlot(v22, v21);
              if ( ItemInSlot != 0
                && !ItemInSlot->m_bIsClonedItemProxy
                && iPlayerID == ItemInSlot->m_iPlayerOwnerID.m_Value )
              {
                v39 = (*(ItemInSlot->_vptr_IHandleEntity + 359))(ItemInSlot);
                nValue += v39;
              }
              ++v21;
            }
            while ( v21 != 17 );
          }
        }
        ++v18;
        ++v17;
      }
      while ( vecOwnedUnits.m_Size > v18 );
    }
    v24 = 0;
    v25 = 0;
    for ( i = g_pGameRules; v25 < *&g_pGameRules[55].m_szQuestName[80]; v24 += 4 )
    {
      v27 = CEntityHandle::gm_pEntityList;
      v28 = *(*&i[55].m_szQuestName[88] + v24);
      hItemPhysical.m_Index = v28;
      if ( v28 + 2 > 1 )
      {
        v29 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(hItemPhysical.m_Index) >> 9) & 0x3F];
        if ( v29 != 0 )
        {
          v30 = &v29[hItemPhysical.m_Index & 0x1FF];
          if ( v30 != 0 && v28 == v30->m_EHandle.m_Index && v30->m_pInstance != 0 )
          {
            v31 = __dynamic_cast(v30->m_pInstance, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTA_Item_Physical, 0);
            if ( v31 != 0 )
            {
              v32 = v31[308];
              if ( (v32 + 2) > 1 )
              {
                v33 = *(v31 + 616);
                v34 = v27->m_pIdentityChunks[(v33 >> 9) & 0x3F];
                if ( v34 != 0 )
                {
                  v35 = &v34[v33 & 0x1FF];
                  if ( v35 != 0 && v32 == v35->m_EHandle.m_Index )
                  {
                    m_pInstance = v35->m_pInstance;
                    if ( v35->m_pInstance != 0
                      && iPlayerID == HIDWORD(m_pInstance[1].m_NetworkTransmitComponent.m_pChangeChangeAccessorFieldPathIndexInfo) )
                    {
                      m_pAbilityData = m_pInstance->m_pAbilityData;
                      if ( m_pAbilityData != 0
                        || (CDOTABaseAbility::LoadAbilityData(m_pInstance, 0),
                            (m_pAbilityData = m_pInstance->m_pAbilityData) != 0) )
                      {
                        if ( (*(m_pAbilityData + 377) & 2) != 0 )
                        {
                          v38 = (*(m_pInstance->_vptr_IHandleEntity + 359))(m_pInstance);
                          nValue += v38;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      i = g_pGameRules;
      ++v25;
    }
    if ( CDOTA_BaseNPC::FindModifierByName(v42, "modifier_item_ultimate_scepter_consumed", 0) != 0 )
    {
      ItemCost = GetItemCost("item_ultimate_scepter");
      nValue += ItemCost;
    }
    if ( CDOTA_BaseNPC::FindModifierByName(v42, "modifier_item_moon_shard_consumed", 0) != 0 )
    {
      v41 = GetItemCost("item_moon_shard");
      nValue += v41;
    }
    vecOwnedUnits.m_Size = 0;
    if ( (vecOwnedUnits.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<CDOTA_BaseNPC *,int>::Purge(&vecOwnedUnits.m_Memory);
      if ( (vecOwnedUnits.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<CDOTA_BaseNPC *,int>::Purge(&vecOwnedUnits.m_Memory);
    }
    v12 = v42;
  }
  else
  {
    v12 = 0;
  }
  v13 = g_pDOTADataTeams[1];
  if ( v13 != 0 && memcmp(&v13[1].m_hPrivateScope + 4 * iPlayerID, &nValue, 4u) != 0 )
  {
    (*(v13->_vptr_IHandleEntity + 22))(v13, 2952, iPlayerID, 0xFFFFFFFFLL);
    *(&v13[1].m_hPrivateScope.m_hScope + iPlayerID) = nValue;
  }
  if ( v12 != 0 )
  {
    TeamDataForPlayer = CDOTA_PlayerResource::GetTeamDataForPlayer(this, iPlayerID);
    v15 = TeamDataForPlayer;
    if ( TeamDataForPlayer != 0 )
    {
      v16 = nValue;
      if ( nValue != TeamDataForPlayer->m_iNetWorth.m_Value )
      {
        DataTeamPlayer_t::NetworkStateChanged(TeamDataForPlayer, 56, 0xFFFFFFFFLL, -1);
        v15->m_iNetWorth.m_Value = v16;
      }
    }
  }
}


// CDOTA_PlayerResource::GetTeamNetWorth  (line 5561, @0x0000000002663100, libserver.so)
// calls: CDOTA_PlayerResource::IsValidTeamPlayer, CDOTA_PlayerResource::GetTeam, CDOTA_PlayerResource::GetNetWorth
// callers: CDOTAGCServerSystem::CheckUpdateConnectedPlayers
int __fastcall CDOTA_PlayerResource::GetTeamNetWorth(CDOTA_PlayerResource *const this, int iTeamNumber)
{
  int v2; // r14d
  int i; // ebx
  int v6; // esi

  v2 = 0;
  for ( i = 0; i != 24; ++i )
  {
    while ( !CDOTA_PlayerResource::IsValidTeamPlayer(this, i) || CDOTA_PlayerResource::GetTeam(this, i) != iTeamNumber )
    {
      if ( ++i == 24 )
        return v2;
    }
    v6 = i;
    v2 += CDOTA_PlayerResource::GetNetWorth(this, v6);
  }
  return v2;
}


// CDOTA_PlayerResource::ComputePlayerFightValue  (line 5576, @0x0000000002661f30, libserver.so)  // inlines: AllocInts, Bitvec_Set, CBitVecT, CVarBitVec, CVarBitVecBase, CVarBitVecT, CalcNumIntsForBits, ClearAll, FreeInts, GetGameEndTime, GetNumBits, GetNumDWords, Max<float>, PopulationCount, Set, end, memset, ~CBitVecT, ~CVarBitVec, ~CVarBitVecBase, ~CVarBitVecT
// calls: CDOTA_PlayerResource::IsValidTeamPlayer, memset
// callers: CDOTA_PlayerResource::AddStatsResultToMetadata, CDOTA_PlayerResource::AddStatsResultToSignout
float __fastcall CDOTA_PlayerResource::ComputePlayerFightValue(CDOTA_PlayerResource *const this, int nPlayerID)
{
  bool IsValidTeamPlayer; // al
  float result; // xmm0_4
  float v6; // xmm0_4
  float v7; // xmm0_4
  int v8; // eax
  int v9; // eax
  size_t v10; // rdx
  uint32 *m_pInt; // rdi
  __int64 v12; // rdx
  __int64 v13; // rcx
  int *v14; // r8
  int *i; // rsi
  int v16; // ecx
  int *v17; // rdi
  int *j; // rsi
  int v19; // ecx
  __int64 v20; // rax
  __int64 v21; // r8
  float v22; // xmm0_4
  uint32 v23; // edx
  int v24; // edi
  float v25; // [rsp+Ch] [rbp-34h]
  CVarBitVec fightVector; // [rsp+10h] [rbp-30h] BYREF

  IsValidTeamPlayer = CDOTA_PlayerResource::IsValidTeamPlayer(this, nPlayerID);
  result = 0.0;
  if ( !IsValidTeamPlayer )
    return result;
  v6 = *&g_pGameRules[13].m_szQuestName[112] / 60.0;
  if ( v6 <= 1.0 )
  {
    v10 = 4;
    fightVector.m_numBits = 1;
    fightVector.m_numInts = 1;
    goto LABEL_26;
  }
  v7 = (v6 / 5.0) + 1.0;
  fightVector.m_pInt = 0;
  v8 = v7 + 62;
  fightVector.m_numBits = v7;
  if ( v7 + 31 >= 0 )
    v8 = v7 + 31;
  v9 = v8 >> 5;
  fightVector.m_numInts = v9;
  if ( v9 != 0 )
  {
    if ( v9 != 1 )
    {
      fightVector.m_pInt = (**g_pMemAlloc)(g_pMemAlloc, 4LL * v9);
      m_pInt = fightVector.m_pInt;
      v10 = 4LL * fightVector.m_numInts;
      goto LABEL_7;
    }
    v10 = 4LL * v9;
LABEL_26:
    m_pInt = fightVector.m_FixedStorage;
    fightVector.m_pInt = fightVector.m_FixedStorage;
    goto LABEL_7;
  }
  v10 = 4LL * v9;
  m_pInt = 0;
LABEL_7:
  memset(m_pInt, 0, v10);
  v14 = *(this + 2323);
  for ( i = &v14[3 * *(this + 4644)]; i != v14; fightVector.m_pInt[v12 >> 5] |= 1 << v12 )
  {
    while ( nPlayerID != v14[2] )
    {
      v14 += 3;
      if ( i == v14 )
        goto LABEL_12;
    }
    v16 = *v14;
    v14 += 3;
    v12 = (v16 / 5);
    v13 = v12;
  }
LABEL_12:
  v17 = *(this + 2326);
  for ( j = &v17[3 * *(this + 4650)]; j != v17; fightVector.m_pInt[v12 >> 5] |= 1 << v12 )
  {
    while ( nPlayerID != v17[2] )
    {
      v17 += 3;
      if ( j == v17 )
        goto LABEL_17;
    }
    v19 = *v17;
    v17 += 3;
    v12 = (v19 / 5);
    v13 = v12;
  }
LABEL_17:
  v20 = 0;
  v21 = 0;
  v22 = 0.0;
  if ( fightVector.m_numInts != 0 )
  {
    do
    {
      v23 = fightVector.m_pInt[v20++];
      v24 = (v23 >> 1) & 0x55555555;
      v13 = ((v23 - v24) & 0x33333333) + (((v23 - v24) >> 2) & 0x33333333);
      v12 = (16843009 * ((v13 + ((((v23 - v24) & 0x33333333) + (((v23 - v24) >> 2) & 0x33333333)) >> 4)) & 0xF0F0F0F)) >> 24;
      v21 = (v12 + v21);
    }
    while ( fightVector.m_numInts > v20 );
    v22 = v21;
  }
  result = v22 / fightVector.m_numBits;
  if ( fightVector.m_numInts > 1u )
  {
    v25 = result;
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, fightVector.m_pInt, v12, v13, v21);
    return v25;
  }
  return result;
}


// CDOTA_PlayerResource::AddPushingDamage  (line 5604, @0x00000000026621a0, libserver.so)
// calls: CDOTA_PlayerResource::IsValidTeamPlayer
// callers: CDOTA_BaseNPC_Building::OnTakeDamage_Alive
void __fastcall CDOTA_PlayerResource::AddPushingDamage(
        CDOTA_PlayerResource *const this,
        int nPlayerID,
        float a3,
        float flDamage)
{
  __int64 v4; // r12

  v4 = nPlayerID;
  if ( CDOTA_PlayerResource::IsValidTeamPlayer(this, nPlayerID) )
    *(this + v4 + 8598) = a3 + *(this + v4 + 8598);
}


// CDOTA_PlayerResource::AddStatsResultToSignout  (line 5611, @0x000000000269bfa0, libserver.so)  // inlines: Add, Add<google::protobuf::RepeatedPtrField<CMsgGameMatchSignOut_CAdditionalSignoutMsg>::TypeHandler>, Element, GetGameEndTime, GetGoldSpentOnSupport, GetHealing, GetSteamAccountID, GetTeamDataForPlayer, IsValidTeamPlayerID, Max<float>, New, add_additional_msgs, operator[], set_account_id, set_aegises_snatched, set_cheeses_eaten, set_contents, set_couriers_killed, set_creeps_stacked, set_farm_score, set_fight_score, set_first_blood_claimed, set_first_blood_given, set_has_account_id, set_has_cheeses_eaten, set_has_contents, set_has_creeps_stacked, set_has_fight_score, set_has_id, set_has_push_score, set_has_support_score, set_hero_id, set_id, set_push_score, set_rampages, set_support_score, set_triple_kills, ~basic_string
// calls: CDOTA_PlayerResource::GetSteamID, CMsgSignOutPlayerStats::CMsgSignOutPlayerStats, CDOTA_PlayerResource::GetSelectedHeroID, CDOTA_PlayerResource::GetTeamDataForPlayer, CDOTA_PlayerResource::ComputePlayerFightValue, CDOTA_PlayerResource::GetNetWorthRank, operator new, CMsgGameMatchSignOut_CAdditionalSignoutMsg::CMsgGameMatchSignOut_CAdditionalSignoutMsg, google::protobuf::MessageLite::SerializeAsString(void), std::string::assign(std::string const&), std::string::_Rep::_M_dispose(std::allocator<char> const&), CMsgSignOutPlayerStats::~CMsgSignOutPlayerStats (15 total)
// callers: CDOTAGCServerSystem::MatchSignOut
void __fastcall CDOTA_PlayerResource::AddStatsResultToSignout(
        CDOTA_PlayerResource *const this,
        const CDOTALobby *pLobby,
        GCSDK::CProtoBufMsg<CMsgGameMatchSignOut> *pMsgSignOut,
        int nPlayerID)
{
  int SteamID; // eax
  char *v8; // r13
  __int64 v9; // rax
  int v10; // edx
  int v11; // ecx
  DataTeamPlayer_t *TeamDataForPlayer; // rax
  int m_Value; // eax
  __m128 v14; // xmm0
  __m128 v15; // xmm1
  float v16; // xmm0_4
  int v17; // eax
  int v18; // xmm0_4
  DataTeamPlayer_t *v19; // rax
  int NetWorthRank; // eax
  float v21; // xmm1_4
  int v22; // eax
  CMsgGameMatchSignOut *m_pProtoBufBody; // rbx
  int v24; // esi
  __int64 v25; // rax
  CMsgGameMatchSignOut_CAdditionalSignoutMsg *v26; // r12
  __int64 v27; // rax
  __int64 v28; // rdx
  CMsgGameMatchSignOut_CAdditionalSignoutMsg *v29; // rbx
  __int64 v30; // rdx
  int v31; // [rsp+0h] [rbp-E0h]
  int v32; // [rsp+0h] [rbp-E0h]
  float flSupportItemGold; // [rsp+8h] [rbp-D8h]
  int flHealing; // [rsp+Ch] [rbp-D4h]
  float flHealingb; // [rsp+Ch] [rbp-D4h]
  float flHealinga; // [rsp+Ch] [rbp-D4h]
  char v37; // [rsp+1Fh] [rbp-C1h] BYREF
  std::string v38; // [rsp+20h] [rbp-C0h] BYREF
  _BYTE v39[16]; // [rsp+30h] [rbp-B0h] BYREF
  int v40; // [rsp+40h] [rbp-A0h]
  int v41; // [rsp+50h] [rbp-90h]
  int SelectedHeroID; // [rsp+58h] [rbp-88h]
  int v43; // [rsp+5Ch] [rbp-84h]
  int v44; // [rsp+60h] [rbp-80h]
  int v45; // [rsp+64h] [rbp-7Ch]
  int v46; // [rsp+68h] [rbp-78h]
  int v47; // [rsp+6Ch] [rbp-74h]
  int v48; // [rsp+70h] [rbp-70h]
  int v49; // [rsp+74h] [rbp-6Ch]
  int v50; // [rsp+78h] [rbp-68h]
  float v51; // [rsp+7Ch] [rbp-64h]
  float v52; // [rsp+80h] [rbp-60h]
  float v53; // [rsp+84h] [rbp-5Ch]
  int v54; // [rsp+88h] [rbp-58h]

  SteamID = CDOTA_PlayerResource::GetSteamID(this, nPlayerID);
  if ( SteamID != 0 )
  {
    v31 = SteamID;
    CMsgSignOutPlayerStats::CMsgSignOutPlayerStats(v39);
    flHealing = v40;
    v40 |= 1u;
    v41 = v31;
    SelectedHeroID = CDOTA_PlayerResource::GetSelectedHeroID(this, nPlayerID);
    v8 = this + 4 * nPlayerID;
    v9 = *(this + 98) + 200LL * nPlayerID;
    v10 = *(v9 + 188);
    v43 = *(v8 + 8478);
    LODWORD(v9) = *(v9 + 192);
    v11 = *(v8 + 8502);
    v45 = v10;
    v46 = v9;
    LODWORD(v9) = *(v8 + 8526);
    v44 = v11;
    v47 = v9;
    LODWORD(v9) = *(v8 + 8550);
    v40 = flHealing | 0x7F9;
    v48 = v9;
    v49 = *(v8 + 8574);
    TeamDataForPlayer = CDOTA_PlayerResource::GetTeamDataForPlayer(this, nPlayerID);
    if ( TeamDataForPlayer != 0 )
    {
      m_Value = TeamDataForPlayer->m_iCreepsStacked.m_Value;
      v40 = flHealing | 0xFF9;
      v50 = m_Value;
    }
    v14.m128_f32[0] = *&g_pGameRules[13].m_szQuestName[112] / 60.0;
    v15 = _mm_cmplt_ss(0x3F800000u, v14);
    LODWORD(flHealingb) = COERCE_UNSIGNED_INT(_mm_andnot_ps(v15, 0x3F800000u).m128_f32[0])
                        | v14.m128_i32[0] & v15.m128_i32[0];
    v16 = CDOTA_PlayerResource::ComputePlayerFightValue(this, nPlayerID);
    v17 = v40;
    v51 = v16;
    v52 = *(v8 + 464) / flHealingb;
    v18 = *(v8 + 8598);
    v32 = v40;
    BYTE1(v17) = BYTE1(v40) | 0xB0;
    v40 = v17;
    v54 = v18;
    v19 = CDOTA_PlayerResource::GetTeamDataForPlayer(this, nPlayerID);
    if ( v19 != 0 )
      flHealinga = v19->m_fHealing.m_Value;
    else
      flHealinga = 0.0;
    if ( nPlayerID < 0 )
    {
      flSupportItemGold = 0.0;
    }
    else if ( nPlayerID < *(this + 194) )
    {
      flSupportItemGold = *(v8 + 3084);
    }
    else
    {
      flSupportItemGold = 0.0;
    }
    NetWorthRank = CDOTA_PlayerResource::GetNetWorthRank(this, nPlayerID);
    v21 = 1.0;
    if ( NetWorthRank > 2 )
      v21 = 2.0;
    v22 = v32;
    m_pProtoBufBody = pMsgSignOut->m_pProtoBufBody;
    BYTE1(v22) = BYTE1(v32) | 0xF0;
    v40 = v22;
    v24 = *(m_pProtoBufBody + 59);
    v25 = *(m_pProtoBufBody + 58);
    v53 = (flSupportItemGold + flHealinga) * v21;
    if ( v25 < v24 )
    {
      v30 = *(m_pProtoBufBody + 28);
      *(m_pProtoBufBody + 58) = v25 + 1;
      v29 = *(v30 + 8 * v25);
    }
    else
    {
      if ( v24 == *(m_pProtoBufBody + 60) )
        google::protobuf::internal::RepeatedPtrFieldBase::Reserve((m_pProtoBufBody + 224), v24 + 1);
      v26 = operator new(0x28u);
      CMsgGameMatchSignOut_CAdditionalSignoutMsg::CMsgGameMatchSignOut_CAdditionalSignoutMsg(v26);
      v27 = *(m_pProtoBufBody + 58);
      v28 = *(m_pProtoBufBody + 28);
      ++*(m_pProtoBufBody + 59);
      *(m_pProtoBufBody + 58) = v27 + 1;
      v29 = v26;
      *(v28 + 8 * v27) = v26;
    }
    *(v29 + 4) |= 1u;
    *(v29 + 8) = 8013;
    google::protobuf::MessageLite::SerializeAsString(&v38);
    *(v29 + 4) |= 2u;
    std::string::assign(*(v29 + 3), &v38);
    std::string::_Rep::_M_dispose(v38._M_dataplus._M_p - 24, &v37);
    CMsgSignOutPlayerStats::~CMsgSignOutPlayerStats(v39);
  }
}


// CDOTA_PlayerResource::AddStatsResultToMetadata  (line 5650, @0x0000000002664fd0, libserver.so)  // inlines: GetGameEndTime, GetGoldSpentOnSupport, GetHealing, GetSteamAccountID, GetTeamDataForPlayer, IsValidTeamPlayerID, Max<float>, set_farm_score, set_fight_score, set_has_farm_score, set_has_fight_score, set_has_support_score, set_push_score, set_support_score
// calls: CDOTA_PlayerResource::GetSteamID, CDOTA_PlayerResource::GetTeamDataForPlayer, CDOTA_PlayerResource::GetNetWorthRank, CDOTA_PlayerResource::ComputePlayerFightValue
// callers: CDOTAGCServerSystem::WriteMatchMetadataTeamPlayer
void __fastcall CDOTA_PlayerResource::AddStatsResultToMetadata(
        CDOTA_PlayerResource *const this,
        CDOTAMatchMetadata_Team_Player *pMsgPlayer,
        int nPlayerID)
{
  __m128 v6; // xmm0
  __m128 v7; // xmm1
  DataTeamPlayer_t *TeamDataForPlayer; // rax
  __int64 v9; // r14
  int NetWorthRank; // eax
  int v11; // xmm1_4
  float v12; // xmm0_4
  int v13; // eax
  float *v14; // rdx
  float v15; // xmm0_4
  int v16; // xmm0_4
  float flSupportItemGold; // [rsp+0h] [rbp-30h]
  float flHealing; // [rsp+4h] [rbp-2Ch]
  float flLowNetWorthScale; // [rsp+8h] [rbp-28h]
  float v20; // [rsp+Ch] [rbp-24h]

  if ( CDOTA_PlayerResource::GetSteamID(this, nPlayerID) != 0 )
  {
    v6.m128_f32[0] = *&g_pGameRules[13].m_szQuestName[112] / 60.0;
    v7 = _mm_cmplt_ss(0x3F800000u, v6);
    LODWORD(v20) = COERCE_UNSIGNED_INT(_mm_andnot_ps(v7, 0x3F800000u).m128_f32[0]) | v6.m128_i32[0] & v7.m128_i32[0];
    TeamDataForPlayer = CDOTA_PlayerResource::GetTeamDataForPlayer(this, nPlayerID);
    if ( TeamDataForPlayer != 0 )
      flHealing = TeamDataForPlayer->m_fHealing.m_Value;
    else
      flHealing = 0.0;
    if ( nPlayerID < 0 )
    {
      v9 = nPlayerID;
      flSupportItemGold = 0.0;
    }
    else
    {
      v9 = nPlayerID;
      if ( nPlayerID < *(this + 194) )
        flSupportItemGold = *(this + nPlayerID + 3084);
      else
        flSupportItemGold = 0.0;
    }
    NetWorthRank = CDOTA_PlayerResource::GetNetWorthRank(this, nPlayerID);
    v11 = 1065353216;
    if ( NetWorthRank > 2 )
      v11 = 0x40000000;
    flLowNetWorthScale = *&v11;
    v12 = CDOTA_PlayerResource::ComputePlayerFightValue(this, nPlayerID);
    v13 = *(pMsgPlayer + 4);
    *(pMsgPlayer + 41) = v12;
    *(pMsgPlayer + 4) = v13 | 0x20000;
    v14 = (this + 4 * v9);
    v15 = v14[464];
    *(pMsgPlayer + 4) = v13 | 0x60000;
    *(pMsgPlayer + 42) = v15 / v20;
    v16 = *(v14 + 8598);
    *(pMsgPlayer + 4) = v13 | 0x1E0000;
    *(pMsgPlayer + 52) = v16;
    *(pMsgPlayer + 43) = (flHealing + flSupportItemGold) * flLowNetWorthScale;
  }
}


// CDOTA_PlayerResource::Script_SetOverrideSelectionEntity  (line 5669, @0x0000000002679440, libserver.so)  // inlines: Get, HScriptToEntity<CBaseEntity>, NetworkStateChanged, Set, ToEnt, operator CEntityInstance*, operator=, operator=<CBaseEntity*>
// calls: CDOTA_PlayerResource::GetTeamDataForPlayer, GetScriptDesc<CEntityInstance>, CHandle<CBaseEntity>::CHandle, operator!=<CBaseEntity>
void __fastcall CDOTA_PlayerResource::Script_SetOverrideSelectionEntity(
        CDOTA_PlayerResource *const this,
        int nPlayerID,
        HSCRIPT hEntity)
{
  DataTeamPlayer_t *TeamDataForPlayer; // rbx
  __int64 (__fastcall *v5)(IScriptVM *, HSCRIPT, ScriptClassDesc_t *); // r14
  ScriptClassDesc_t *Script; // rax
  CBaseEntity *v7; // rsi
  CEntityInstance *m_pObj; // rdi
  CHandle<CBaseEntity> b; // [rsp+0h] [rbp-30h] BYREF

  TeamDataForPlayer = CDOTA_PlayerResource::GetTeamDataForPlayer(this, nPlayerID);
  if ( TeamDataForPlayer != 0 )
  {
    if ( hEntity != 0 )
    {
      v5 = *(*g_pScriptVM + 208LL);
      Script = GetScriptDesc<CEntityInstance>(0);
      v7 = v5(g_pScriptVM, hEntity, Script);
    }
    else
    {
      v7 = 0;
    }
    CHandle<CBaseEntity>::CHandle(&b, v7);
    if ( operator!=<CBaseEntity>(&TeamDataForPlayer->m_hOverrideSelectionEntity.m_Value, &b) )
    {
      m_pObj = TeamDataForPlayer->__m_pChainEntity.m_pObj;
      if ( m_pObj != 0 && (m_pObj->m_pEntity->m_flags & 0x400) == 0 && TeamDataForPlayer->__m_PathIndex.m_Value != -1 )
        (*(m_pObj->_vptr_IHandleEntity + 22))(m_pObj, 140, 0xFFFFFFFFLL, TeamDataForPlayer->__m_PathIndex.m_Value);
      TeamDataForPlayer->m_hOverrideSelectionEntity.m_Value = b;
    }
  }
}


// CDOTA_PlayerResource::SetCameraTarget  (line 5677, @0x0000000002679520, libserver.so)  // inlines: CEntityHandle, CHandle, Get, NetworkStateChanged, Set, operator CEntityInstance*, operator=, operator=<CHandle<CBaseEntity> >
// calls: CDOTA_PlayerResource::GetTeamDataForPlayer, operator!=<CBaseEntity>
// callers: CDOTA_Tutorial::SetTargetEntity
void __fastcall CDOTA_PlayerResource::SetCameraTarget(CDOTA_PlayerResource *const this, int nPlayerID, uint32 *hTarget)
{
  DataTeamPlayer_t *TeamDataForPlayer; // rax
  DataTeamPlayer_t *v5; // rbx
  uint32 m_Index; // r12d
  CEntityInstance *m_pObj; // rdi
  CHandle<CBaseEntity> b; // [rsp+0h] [rbp-20h] BYREF

  TeamDataForPlayer = CDOTA_PlayerResource::GetTeamDataForPlayer(this, nPlayerID);
  v5 = TeamDataForPlayer;
  if ( TeamDataForPlayer != 0 )
  {
    m_Index = *hTarget;
    b.m_Index = m_Index;
    if ( operator!=<CBaseEntity>(&TeamDataForPlayer->m_hCameraTarget.m_Value, &b) )
    {
      m_pObj = v5->__m_pChainEntity.m_pObj;
      if ( m_pObj != 0 && (m_pObj->m_pEntity->m_flags & 0x400) == 0 && v5->__m_PathIndex.m_Value != -1 )
      {
        (*(m_pObj->_vptr_IHandleEntity + 22))(m_pObj, 136, 0xFFFFFFFFLL, v5->__m_PathIndex.m_Value);
        m_Index = b.m_Index;
      }
      v5->m_hCameraTarget.m_Value.m_Index = m_Index;
    }
  }
}


// CDOTA_PlayerResource::GetCameraTarget  (line 5686, @0x0000000002663170, libserver.so)  // inlines: CEntityHandle, CHandle
// calls: CDOTA_PlayerResource::GetTeamDataForPlayer
// callers: CDOTA_Tutorial::GetTargetEntity
uint32 *__fastcall CDOTA_PlayerResource::GetCameraTarget(uint32 *a1, CDOTA_PlayerResource *const this, int nPlayerID)
{
  DataTeamPlayer_t *TeamDataForPlayer; // rax

  TeamDataForPlayer = CDOTA_PlayerResource::GetTeamDataForPlayer(this, nPlayerID);
  if ( TeamDataForPlayer != 0 )
  {
    *a1 = TeamDataForPlayer->m_hCameraTarget.m_Value.m_Index;
    return a1;
  }
  else
  {
    *a1 = -1;
    return a1;
  }
}


// CDOTA_PlayerResource::Script_SetCameraTarget  (line 5696, @0x00000000026795b0, libserver.so)  // inlines: Get, HScriptToEntity<CBaseEntity>, NetworkStateChanged, Set, ToEnt, operator CEntityInstance*, operator=, operator=<CBaseEntity*>
// calls: CDOTA_PlayerResource::GetTeamDataForPlayer, GetScriptDesc<CEntityInstance>, CHandle<CBaseEntity>::CHandle, operator!=<CBaseEntity>
void __fastcall CDOTA_PlayerResource::Script_SetCameraTarget(
        CDOTA_PlayerResource *const this,
        int nPlayerID,
        HSCRIPT hTarget)
{
  DataTeamPlayer_t *TeamDataForPlayer; // rbx
  __int64 (__fastcall *v5)(IScriptVM *, HSCRIPT, ScriptClassDesc_t *); // r14
  ScriptClassDesc_t *Script; // rax
  CBaseEntity *v7; // rsi
  CEntityInstance *m_pObj; // rdi
  CHandle<CBaseEntity> b; // [rsp+0h] [rbp-30h] BYREF

  TeamDataForPlayer = CDOTA_PlayerResource::GetTeamDataForPlayer(this, nPlayerID);
  if ( TeamDataForPlayer != 0 )
  {
    if ( hTarget != 0 )
    {
      v5 = *(*g_pScriptVM + 208LL);
      Script = GetScriptDesc<CEntityInstance>(0);
      v7 = v5(g_pScriptVM, hTarget, Script);
    }
    else
    {
      v7 = 0;
    }
    CHandle<CBaseEntity>::CHandle(&b, v7);
    if ( operator!=<CBaseEntity>(&TeamDataForPlayer->m_hCameraTarget.m_Value, &b) )
    {
      m_pObj = TeamDataForPlayer->__m_pChainEntity.m_pObj;
      if ( m_pObj != 0 && (m_pObj->m_pEntity->m_flags & 0x400) == 0 && TeamDataForPlayer->__m_PathIndex.m_Value != -1 )
        (*(m_pObj->_vptr_IHandleEntity + 22))(m_pObj, 136, 0xFFFFFFFFLL, TeamDataForPlayer->__m_PathIndex.m_Value);
      TeamDataForPlayer->m_hCameraTarget.m_Value = b;
    }
  }
}


// CDOTA_PlayerResource::HasPredictedVictory  (line 5704, @0x00000000026621f0, libserver.so)  // inlines: Element, IsValidTeamPlayerID, operator[]
// callers: CDOTAVictoryPrediction::CanUse, CDOTAVictoryPrediction::ApplyEffects
bool __fastcall CDOTA_PlayerResource::HasPredictedVictory(CDOTA_PlayerResource *const this, int iPlayerID)
{
  bool result; // al

  result = 0;
  if ( iPlayerID >= 0 && iPlayerID < *(this + 194) )
    return *(*(this + 98) + 200LL * iPlayerID + 117);
  return result;
}


// CDOTA_PlayerResource::GetHeroSpawnGroup  (line 5713, @0x0000000002662220, libserver.so)  // inlines: IsValidTeamPlayerID
// callers: CDOTAGamerules::SpawnPlayerHeroes, CDOTA_TeamCommander::SelectHero, DOTA_Hero_Spawn
SpawnGroupHandle_t __fastcall CDOTA_PlayerResource::GetHeroSpawnGroup(
        const CDOTA_PlayerResource *const this,
        int iPlayerID)
{
  SpawnGroupHandle_t result; // eax

  result = 0;
  if ( iPlayerID >= 0 && iPlayerID < *(this + 194) )
    return *(this + iPlayerID + 8446);
  return result;
}


// CDOTA_PlayerResource::SetHeroSpawnGroup  (line 5724, @0x0000000002662240, libserver.so)  // inlines: IsValidTeamPlayerID
// callers: CDOTA_Hero_Recorder::SetHeroClass, DOTA_Hero_Spawn
void __fastcall CDOTA_PlayerResource::SetHeroSpawnGroup(
        CDOTA_PlayerResource *const this,
        int iPlayerID,
        SpawnGroupHandle_t h)
{
  if ( iPlayerID >= 0 && iPlayerID < *(this + 194) )
    *(this + iPlayerID + 8446) = h;
}


// CDOTA_PlayerResource::BHasAnyPlayerWithBattlePass  (line 5734, @0x000000000267afc0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Purge, RemoveAll, end, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTA_PlayerResource::GetAllPlayerIDs, CDOTA_PlayerResource::IsEventOwnedForPlayerID, CUtlMemory<int, int>::Purge, CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CDOTAHLTVDirector::UploadReplay, CDOTAGCServerSystem::SendMatchDetailsToClients, CDOTAGCServerSystem::MatchSignOut
// globals: g_pDOTAPlayerResource
bool __fastcall CDOTA_PlayerResource::BHasAnyPlayerWithBattlePass(const CDOTA_PlayerResource *const this)
{
  bool result; // al
  int *v2; // rbx
  __int64 v3; // r12
  CDOTA_PlayerResource *v4; // r13
  bool v5; // [rsp-Ch] [rbp-4Ch]
  int v6; // [rsp-8h] [rbp-48h] BYREF
  CUtlVector<int,CUtlMemory<int,int> > vecPlayerIDs; // [rsp+0h] [rbp-40h] BYREF

  result = 0;
  if ( *(this + 248) != 0 )
  {
    v6 = 0;
    *&vecPlayerIDs.m_Size = 0;
    vecPlayerIDs.m_Memory.m_pMemory = 0;
    CDOTA_PlayerResource::GetAllPlayerIDs(this, &v6);
    v2 = *&vecPlayerIDs.m_Size;
    v3 = *&vecPlayerIDs.m_Size + 4LL * v6;
    if ( *&vecPlayerIDs.m_Size == v3 )
    {
      result = 0;
    }
    else
    {
      v4 = g_pDOTAPlayerResource;
      do
      {
        result = CDOTA_PlayerResource::IsEventOwnedForPlayerID(v4, *v2);
        if ( result )
          break;
        ++v2;
      }
      while ( v3 != v2 );
    }
    v6 = 0;
    if ( (HIDWORD(vecPlayerIDs.m_Memory.m_pMemory) & 0xC0000000) == 0 )
    {
      v5 = result;
      CUtlMemory<int,int>::Purge(&vecPlayerIDs);
      result = v5;
      if ( (HIDWORD(vecPlayerIDs.m_Memory.m_pMemory) & 0xC0000000) == 0 )
      {
        CUtlMemory<int,int>::Purge(&vecPlayerIDs);
        return v5;
      }
    }
  }
  return result;
}


// CDOTA_PlayerResource::OnHeroLevelUp  (line 5756, @0x000000000267b2f0, libserver.so)  // inlines: AddToTail, CopyConstruct<float>, DOTAGameRules, Element, GrowMemory, IsValidTeamPlayerID, operator[]
// calls: CDOTAGamerules::GetDOTATime, CUtlMemory<float, int>::Grow
// callers: CDOTA_BaseNPC_Hero::HeroLevelUp
void __fastcall CDOTA_PlayerResource::OnHeroLevelUp(CDOTA_PlayerResource *const this, int iPlayerID, int iLevel)
{
  int *v3; // rbx
  __int64 v4; // r12
  float DOTATime; // xmm0_4
  int v6; // eax
  float *v7; // rax
  float v8; // [rsp-1Ch] [rbp-1Ch]

  if ( iPlayerID >= 0 && iPlayerID < *(this + 194) )
  {
    v3 = (this + 24 * iPlayerID + 15368);
    v4 = *v3;
    if ( v4 + 1 < iLevel )
    {
      DOTATime = 0.0;
      if ( g_pGameRules != 0 )
      {
        DOTATime = CDOTAGamerules::GetDOTATime(g_pGameRules, 0, 1, 0.0);
        v4 = *v3;
      }
      v6 = v4;
      if ( v4 == v3[4] )
      {
        v8 = DOTATime;
        CUtlMemory<float,int>::Grow((v3 + 2), 1);
        v6 = *v3;
        DOTATime = v8;
      }
      *v3 = v6 + 1;
      v7 = (*(v3 + 1) + 4 * v4);
      if ( v7 != 0 )
        *v7 = DOTATime;
    }
  }
}


// CDOTA_PlayerResource::GetHeroLevelUpTime  (line 5773, @0x0000000002662260, libserver.so)  // inlines: Element, IsValidTeamPlayerID, operator[]
// callers: CDOTAGCServerSystem::WriteMatchMetadataTeamPlayer
float __fastcall CDOTA_PlayerResource::GetHeroLevelUpTime(CDOTA_PlayerResource *const this, int iPlayerID, int iLevel)
{
  float result; // xmm0_4

  if ( iPlayerID < 0 || iPlayerID >= *(this + 194) || iLevel == 1 )
    return 0.0;
  result = 3.4028235e38;
  if ( iLevel - 1 <= *(this + 6 * iPlayerID + 3842) )
    return *(*(this + 3 * iPlayerID + 1922) + 4LL * (iLevel - 2));
  return result;
}


// CDOTA_PlayerResource::GetPlayerPreGameInventory  (line 5787, @0x00000000026631b0, libserver.so)
// calls: CDOTA_PlayerResource::GetTeamDataForPlayer
// callers: CDOTAGamerules::SwapPlayers, DOTA_ExecuteOrders, CDOTA_BaseNPC::AttemptToPurchaseItem, CDOTA_BaseNPC_Hero::Spawn
CDOTA_UnitInventory *__fastcall CDOTA_PlayerResource::GetPlayerPreGameInventory(
        CDOTA_PlayerResource *const this,
        int nPlayerID)
{
  DataTeamPlayer_t *TeamDataForPlayer; // rax

  TeamDataForPlayer = CDOTA_PlayerResource::GetTeamDataForPlayer(this, nPlayerID);
  if ( TeamDataForPlayer != 0 )
    return &TeamDataForPlayer->m_PreGameInventory;
  else
    return 0;
}


