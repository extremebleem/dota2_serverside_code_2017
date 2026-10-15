// Reconstructed from DWARF by pahole; not original source.

// src/game/server/nav_game.cpp:18
class NavRoundRestart {
	bool operator()(CNavArea *);
	bool operator()(CNavLadder *);

	// sizeof = 1
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CNavMeshGameEventListener::CNavMeshGameEventListener  (line 36, @0x0000000002ed7620, libserver.so)  // inlines: ListenForGameEvent
// calls: CGameEventListener::~CGameEventListener, _Unwind_Resume
// callers: NavMeshFactory
// strings: "break_prop", "break_breakable", "teamplay_round_start"
void __fastcall CNavMeshGameEventListener::CNavMeshGameEventListener(
        CNavMeshGameEventListener *const this,
        CNavMesh *const rNavMesh)
{
  IGameEventManager2 *v3; // rdi
  IGameEventManager2 *v4; // rdi
  IGameEventManager2 *v5; // rdi

  this->_vptr_IGameEventListener2 = off_47B09B0;
  this->_vptr_INavMeshGameEventListener = &off_47B09E0;
  this->m_rNavMesh = rNavMesh;
  this->m_bRegisteredForEvents = 1;
  (*(gameeventmanager->_vptr_IBaseInterface + 4))(gameeventmanager, this, "round_start", 1);
  v3 = gameeventmanager;
  this->m_bRegisteredForEvents = 1;
  (*(v3->_vptr_IBaseInterface + 4))(v3, this, "break_prop", 1);
  v4 = gameeventmanager;
  this->m_bRegisteredForEvents = 1;
  (*(v4->_vptr_IBaseInterface + 4))(v4, this, "break_breakable", 1);
  v5 = gameeventmanager;
  this->m_bRegisteredForEvents = 1;
  (*(v5->_vptr_IBaseInterface + 4))(v5, this, "teamplay_round_start", 1);
}


// CNavMeshGameEventListener::OnNavMeshDestroy  (line 47, @0x0000000002ec6970, libserver.so)
void __fastcall CNavMeshGameEventListener::OnNavMeshDestroy(CNavMeshGameEventListener *const this)
{
  if ( this != 0 )
    (*(this->_vptr_IGameEventListener2 + 1))(this);
}


// CNavMeshGameEventListener::FireGameEvent  (line 54, @0x0000000002ee6d20, libserver.so)  // inlines: FStrEq, ForAllAreas<NavRoundRestart>, ForAllLadders<NavRoundRestart>, _V_strcmp, operator()
// calls: UTIL_EntityByIndex, GetNavObstructionMgr, CNavObstructionManager::UpdateOnBreakableBreak, CNavLadder::OnRoundRestart
// strings: "break_prop", "break_breakable", "teamplay_round_start", "round_start_pre_entity"
void __fastcall CNavMeshGameEventListener::FireGameEvent(CNavMeshGameEventListener *const this, IGameEvent *pEvent)
{
  char *v4; // rax
  const char *v5; // rdi
  bool v6; // zf
  __int64 v7; // rcx
  char *v8; // rsi
  CEntityIndex v9; // eax
  CBaseEntity *v10; // rbx
  CNavObstructionManager *NavObstructionMgr; // rax
  char *v12; // rax
  const char *v13; // rdi
  bool v14; // zf
  __int64 v15; // rcx
  char *v16; // rsi
  char *v17; // rax
  char *v18; // rdi
  bool v19; // zf
  char *v20; // rsi
  __int64 v21; // rcx
  CNavMesh *m_rNavMesh; // r12
  int m_Size; // eax
  unsigned __int64 v24; // rbx
  __int64 v25; // r14
  CNavArea *v26; // rdi
  __int64 v27; // r13
  int i; // ebx
  CNavLadder *v29; // rdi
  char *v30; // rax
  const char *v31; // rdi
  bool v32; // zf
  __int64 v33; // rcx
  char *v34; // rax
  const char *v35; // rdi
  bool v36; // zf
  char *v37; // rsi
  __int64 v38; // rcx
  CNavMesh *v39; // r13
  int v40; // eax
  unsigned __int64 v41; // rbx
  __int64 v42; // r12
  CNavArea *v43; // rdi

  v4 = (*(pEvent->_vptr_IGameEvent + 2))(pEvent);
  v5 = "break_prop";
  v6 = v4 == "break_prop";
  if ( v4 == "break_prop" )
    goto LABEL_6;
  v7 = 11;
  v8 = v4;
  do
  {
    if ( v7 == 0 )
      break;
    v6 = *v8++ == *v5++;
    --v7;
  }
  while ( v6 );
  if ( v6 )
    goto LABEL_6;
  v12 = (*(pEvent->_vptr_IGameEvent + 2))(pEvent, v8);
  v13 = "break_breakable";
  v14 = v12 == "break_breakable";
  if ( v12 == "break_breakable" )
    goto LABEL_6;
  v15 = 16;
  v16 = v12;
  do
  {
    if ( v15 == 0 )
      break;
    v14 = *v16++ == *v13++;
    --v15;
  }
  while ( v14 );
  if ( v14 )
  {
LABEL_6:
    v9.m_Data = (*(pEvent->_vptr_IGameEvent + 8))(pEvent, "entindex", 0);
    v10 = UTIL_EntityByIndex(v9);
    NavObstructionMgr = GetNavObstructionMgr();
    CNavObstructionManager::UpdateOnBreakableBreak(NavObstructionMgr, v10);
  }
  else
  {
    v17 = (*(pEvent->_vptr_IGameEvent + 2))(pEvent, v16);
    v18 = "round_start";
    v19 = v17 == "round_start";
    v20 = v17;
    if ( v17 == "round_start" )
      goto LABEL_17;
    v21 = 12;
    do
    {
      if ( v21 == 0 )
        break;
      v19 = *v20++ == *v18++;
      --v21;
    }
    while ( v19 );
    if ( v19 )
      goto LABEL_17;
    v30 = (*(pEvent->_vptr_IGameEvent + 2))(pEvent, v20);
    v31 = "teamplay_round_start";
    v32 = v30 == "teamplay_round_start";
    if ( v30 == "teamplay_round_start" )
      goto LABEL_17;
    v33 = 21;
    v20 = v30;
    do
    {
      if ( v33 == 0 )
        break;
      v32 = *v20++ == *v31++;
      --v33;
    }
    while ( v32 );
    if ( v32 )
    {
LABEL_17:
      (*(this->m_rNavMesh->_vptr_CNavMesh + 21))(this->m_rNavMesh, v20);
      m_rNavMesh = this->m_rNavMesh;
      m_Size = m_rNavMesh->m_NavAreas.m_Size;
      if ( m_Size != 0 )
      {
        v24 = 0;
        v25 = 8LL * (m_Size - 1) + 8;
        do
        {
          v26 = m_rNavMesh->m_NavAreas.m_Memory.m_pMemory[v24 / 8];
          v24 += 8LL;
          (*(v26->_vptr_CNavPoly + 15))(v26);
        }
        while ( v24 != v25 );
        m_rNavMesh = this->m_rNavMesh;
      }
      v27 = 0;
      for ( i = 0; i < m_rNavMesh->m_Ladders.m_Size; ++i )
      {
        v29 = m_rNavMesh->m_Ladders.m_Memory.m_pMemory[v27++];
        CNavLadder::OnRoundRestart(v29);
      }
    }
    else
    {
      v34 = (*(pEvent->_vptr_IGameEvent + 2))(pEvent, v20);
      v35 = "round_start_pre_entity";
      v36 = v34 == "round_start_pre_entity";
      v37 = v34;
      if ( v34 == "round_start_pre_entity" )
        goto LABEL_34;
      v38 = 23;
      do
      {
        if ( v38 == 0 )
          break;
        v36 = *v37++ == *v35++;
        --v38;
      }
      while ( v36 );
      if ( v36 )
      {
LABEL_34:
        (*(this->m_rNavMesh->_vptr_CNavMesh + 22))(this->m_rNavMesh, v37);
        v39 = this->m_rNavMesh;
        v40 = v39->m_NavAreas.m_Size;
        if ( v40 != 0 )
        {
          v41 = 0;
          v42 = 8LL * (v40 - 1) + 8;
          do
          {
            v43 = v39->m_NavAreas.m_Memory.m_pMemory[v41 / 8];
            v41 += 8LL;
            (*(v43->_vptr_CNavPoly + 16))(v43);
          }
          while ( v41 != v42 );
        }
      }
    }
  }
}


