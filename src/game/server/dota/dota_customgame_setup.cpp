// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/dota_customgame_setup.cpp:14
class CPlayerGroup {
private:

	int m_PlayerIDs[64];  // +0x0
	int m_nCount;  // +0x100
	CPlayerGroup();
	int operator[](int);
	void AddPlayer(int);
	int Count();
	int PopPlayer();

	// sizeof = 260
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// SortPlayerGroupsBySize  (line 54, @0x0000000002462a10, libserver.so)
int __fastcall SortPlayerGroupsBySize(const CPlayerGroup *pGroupA, const CPlayerGroup *pGroupB)
{
  int m_nCount; // edx
  int result; // eax

  m_nCount = pGroupB->m_nCount;
  result = 1;
  if ( pGroupA->m_nCount >= m_nCount )
    return -(pGroupA->m_nCount > m_nCount);
  return result;
}


// FindCustomGameTeamWithMostFreeSpaces  (line 66, @0x00000000024723d0, libserver.so)  // inlines: GetGlobalDOTATeam
// calls: GetGlobalTeam, CDOTAGamerules::GetCustomGameTeamMaxPlayers
// callers: AssignPlayersToCustomGameTeams
int __fastcall FindCustomGameTeamWithMostFreeSpaces(
        const CUtlVector<int,CUtlMemory<int,int> > *const teams,
        int *pOutNumFreeSpaces)
{
  unsigned __int64 v3; // rbx
  int v4; // r12d
  CTeam *GlobalTeam; // r14
  int CustomGameTeamMaxPlayers; // r13d
  int v7; // r13d
  __int64 v10; // [rsp+10h] [rbp-40h]
  int nTeamWithMostFreeSpaces; // [rsp+18h] [rbp-38h]
  int nMostFreeSpaces; // [rsp+1Ch] [rbp-34h]

  if ( teams->m_Size <= 0 )
  {
    nTeamWithMostFreeSpaces = -1;
    nMostFreeSpaces = 0;
  }
  else
  {
    v3 = 0;
    nTeamWithMostFreeSpaces = -1;
    nMostFreeSpaces = 0;
    v10 = 4LL * (teams->m_Size - 1) + 4;
    do
    {
      v4 = teams->m_Memory.m_pMemory[v3 / 4];
      GlobalTeam = GetGlobalTeam(v4);
      if ( GlobalTeam != 0 )
      {
        CustomGameTeamMaxPlayers = CDOTAGamerules::GetCustomGameTeamMaxPlayers(g_pGameRules, v4);
        v7 = CustomGameTeamMaxPlayers - (*(GlobalTeam->_vptr_IHandleEntity + 218))(GlobalTeam);
        if ( v7 > nMostFreeSpaces )
        {
          nTeamWithMostFreeSpaces = v4;
          nMostFreeSpaces = v7;
        }
      }
      v3 += 4LL;
    }
    while ( v3 != v10 );
  }
  if ( pOutNumFreeSpaces != 0 )
    *pOutNumFreeSpaces = nMostFreeSpaces;
  return nTeamWithMostFreeSpaces;
}


// BuildPlayerPartyGroups  (line 103, @0x0000000002480a60, libserver.so)  // inlines: AddPlayer, AddToTail, CPlayerGroup, CUtlVector, CUtlVectorBase, Construct<CPlayerGroup>, CopyConstruct<int>, Element, EnsureCapacity, GetBool, GetInt, GetLobby, GrowMemory, Purge, RemoveAll, memcpy, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: GDOTAGCClientSystem, CUtlMemory<int, int>::CUtlMemory, CUtlVectorBase<CPlayerGroup, CUtlMemory<CPlayerGroup, int> >::RemoveAll, CDOTA_PlayerResource::GetSteamAccountID, CDOTALobby::FindFullMemberDetails, CUtlVectorBase<int, CUtlMemory<int, int> >::Find, CUtlMemory<int, int>::Grow, CUtlMemory<CPlayerGroup, int>::Grow, CUtlVectorBase<CPlayerGroup, CUtlMemory<CPlayerGroup, int> >::Sort, CUtlMemory<int, int>::Purge, memcpy, CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase (13 total)
// callers: AssignPlayersToCustomGameTeams
// globals: SortPlayerGroupsBySize(CPlayerGroup const*,CPlayerGroup const*)
void __fastcall BuildPlayerPartyGroups(
        const CUtlVector<int,CUtlMemory<int,int> > *const players,
        CUtlVector<CPlayerGroup,CUtlMemory<CPlayerGroup,int> > *pOutPlayerGroups)
{
  CDOTAGCServerSystem *v4; // rax
  int m_Size; // ebx
  CDOTALobby *v6; // rax
  uint32 m_nGrowSize; // eax
  CPlayerGroup *v8; // rsi
  CPlayerGroup *v9; // rax
  __int64 v10; // rax
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // rax
  __int64 v13; // r12
  int v14; // eax
  int *v15; // rax
  int v16; // eax
  CPlayerGroup *v17; // rdx
  CPlayerGroup *v18; // rax
  CPlayerGroup *v19; // rax
  int m_nCount; // ecx
  int v21; // r13d
  AccountID_t SteamAccountID; // eax
  const CDOTALobbyMember *FullMemberDetails; // rax
  int v24; // eax
  CPlayerGroup *m_pMemory; // r12
  CPlayerGroup *v26; // rax
  CDOTALobby *v27; // [rsp+28h] [rbp-278h]
  __int64 v28; // [rsp+30h] [rbp-270h]
  int v29; // [rsp+3Ch] [rbp-264h]
  int v30; // [rsp+3Ch] [rbp-264h]
  int v31; // [rsp+4Ch] [rbp-254h] BYREF
  CUtlVector<int,CUtlMemory<int,int> > nPartyIDs; // [rsp+50h] [rbp-250h] BYREF
  unsigned __int64 TEST_PARTY_TABLE[70]; // [rsp+70h] [rbp-230h] BYREF

  memset(TEST_PARTY_TABLE, 0, 0x200u);
  TEST_PARTY_TABLE[0] = 1;
  TEST_PARTY_TABLE[1] = 1;
  TEST_PARTY_TABLE[2] = 1;
  TEST_PARTY_TABLE[3] = 2;
  TEST_PARTY_TABLE[4] = 2;
  TEST_PARTY_TABLE[5] = 3;
  TEST_PARTY_TABLE[6] = 3;
  TEST_PARTY_TABLE[7] = 3;
  TEST_PARTY_TABLE[8] = 3;
  TEST_PARTY_TABLE[9] = 3;
  v4 = GDOTAGCClientSystem();
  m_Size = players->m_Size;
  v6 = *(v4 + 260);
  nPartyIDs.m_Size = 0;
  v27 = v6;
  CUtlMemory<int,int>::CUtlMemory(&nPartyIDs.m_Memory, 0, m_Size);
  CUtlVectorBase<CPlayerGroup,CUtlMemory<CPlayerGroup,int>>::RemoveAll(pOutPlayerGroups);
  if ( m_Size > pOutPlayerGroups->m_Memory.m_nAllocationCount )
  {
    m_nGrowSize = pOutPlayerGroups->m_Memory.m_nGrowSize;
    if ( (m_nGrowSize & 0x40000000) == 0 )
    {
      if ( (m_nGrowSize & 0xC0000000) != 0 )
      {
        m_pMemory = pOutPlayerGroups->m_Memory.m_pMemory;
        v26 = (**g_pMemAlloc)(g_pMemAlloc, 260LL * m_Size);
        pOutPlayerGroups->m_Memory.m_pMemory = v26;
        if ( m_pMemory != 0 )
          memcpy(v26, m_pMemory, 260LL * pOutPlayerGroups->m_Memory.m_nAllocationCount);
        pOutPlayerGroups->m_Memory.m_nGrowSize &= 0x3FFFFFFFu;
      }
      else
      {
        v8 = pOutPlayerGroups->m_Memory.m_pMemory;
        if ( v8 != 0 )
          v9 = (*(*g_pMemAlloc + 8LL))(g_pMemAlloc, v8, 260LL * m_Size);
        else
          v9 = (**g_pMemAlloc)(g_pMemAlloc, 260LL * m_Size);
        pOutPlayerGroups->m_Memory.m_pMemory = v9;
      }
      pOutPlayerGroups->m_Memory.m_nAllocationCount = m_Size;
    }
  }
  if ( m_Size > 0 )
  {
    v10 = 4LL * (m_Size - 1) + 4;
    v11 = 0;
    v28 = v10;
    do
    {
      v21 = players->m_Memory.m_pMemory[v11 / 4];
      if ( customgamesetup_test_parties.m_pParent->m_Value.m_nValue != 0 )
      {
        v12 = TEST_PARTY_TABLE[v21];
        if ( v12 == 0 )
          goto LABEL_11;
      }
      else if ( v27 == 0
             || (SteamAccountID = CDOTA_PlayerResource::GetSteamAccountID(g_pDOTAPlayerResource, v21),
                 (FullMemberDetails = CDOTALobby::FindFullMemberDetails(v27, SteamAccountID)) == 0)
             || (v12 = *(FullMemberDetails + 6)) == 0 )
      {
LABEL_11:
        v29 = 0;
LABEL_12:
        v13 = nPartyIDs.m_Size;
        v14 = nPartyIDs.m_Size;
        if ( nPartyIDs.m_Size == nPartyIDs.m_Memory.m_nAllocationCount )
        {
          CUtlMemory<int,int>::Grow(&nPartyIDs.m_Memory, 1);
          v14 = nPartyIDs.m_Size;
        }
        nPartyIDs.m_Size = v14 + 1;
        v15 = &nPartyIDs.m_Memory.m_pMemory[v13];
        if ( v15 != 0 )
          *v15 = v29;
        v16 = pOutPlayerGroups->m_Size;
        v30 = pOutPlayerGroups->m_Size;
        if ( pOutPlayerGroups->m_Size == pOutPlayerGroups->m_Memory.m_nAllocationCount )
        {
          CUtlMemory<CPlayerGroup,int>::Grow(&pOutPlayerGroups->m_Memory, 1);
          v16 = pOutPlayerGroups->m_Size;
        }
        v17 = pOutPlayerGroups->m_Memory.m_pMemory;
        pOutPlayerGroups->m_Size = v16 + 1;
        v18 = &v17[v30];
        if ( v18 != 0 )
        {
          v18->m_nCount = 0;
          v17 = pOutPlayerGroups->m_Memory.m_pMemory;
        }
        goto LABEL_20;
      }
      v29 = v12;
      v31 = v12;
      v24 = CUtlVectorBase<int,CUtlMemory<int,int>>::Find(&nPartyIDs, &v31);
      if ( v24 == -1 )
        goto LABEL_12;
      v17 = pOutPlayerGroups->m_Memory.m_pMemory;
      v13 = v24;
LABEL_20:
      v19 = &v17[v13];
      m_nCount = v19->m_nCount;
      if ( m_nCount <= 0x3F )
      {
        v19->m_nCount = m_nCount + 1;
        v19->m_PlayerIDs[m_nCount] = v21;
      }
      v11 += 4LL;
    }
    while ( v11 != v28 );
  }
  CUtlVectorBase<CPlayerGroup,CUtlMemory<CPlayerGroup,int>>::Sort(pOutPlayerGroups, SortPlayerGroupsBySize);
  nPartyIDs.m_Size = 0;
  if ( (nPartyIDs.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<int,int>::Purge(&nPartyIDs.m_Memory);
    if ( (nPartyIDs.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<int,int>::Purge(&nPartyIDs.m_Memory);
  }
}


// AssignPlayersToCustomGameTeams  (line 162, @0x0000000002480e70, libserver.so)  // inlines: AddPlayer, CUtlMemory, CUtlVector, CUtlVectorBase, PopPlayer, Purge, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: BuildPlayerPartyGroups, FindCustomGameTeamWithMostFreeSpaces, CDOTA_PlayerResource::SetCustomTeamAssignment, CUtlVectorBase<CPlayerGroup, CUtlMemory<CPlayerGroup, int> >::RemoveAll, _Unwind_Resume, CUtlVectorBase<CPlayerGroup, CUtlMemory<CPlayerGroup, int> >::SetCount, CUtlMemory<CPlayerGroup, int>::Purge
// callers: CustomGameSetup_AssignUnassignedPlayerToTeams, CustomGameSetup_ShuffleTeamAssignements
void __fastcall AssignPlayersToCustomGameTeams(
        const CUtlVector<int,CUtlMemory<int,int> > *const players,
        const CUtlVector<int,CUtlMemory<int,int> > *const teams,
        bool bUseParties)
{
  CPlayerGroup *m_pMemory; // rax
  CPlayerGroup *v6; // r13
  int v7; // r12d
  int i; // ebx
  int v9; // eax
  int v10; // esi
  int v11; // eax
  CPlayerGroup *v12; // r12
  int CustomGameTeamWithMostFreeSpaces; // r13d
  int v14; // eax
  int v15; // ebx
  int v16; // eax
  int m_Size; // ebx
  __int64 v18; // rdx
  unsigned __int64 v19; // rax
  int v20; // r9d
  CPlayerGroup *v21; // rcx
  int m_nCount; // edi
  __int64 v23; // [rsp+10h] [rbp-80h]
  unsigned __int64 v24; // [rsp+20h] [rbp-70h]
  unsigned __int64 v25; // [rsp+20h] [rbp-70h]
  int nBestTeamID; // [rsp+28h] [rbp-68h]
  int nNumFreeSpaces; // [rsp+3Ch] [rbp-54h] BYREF
  CUtlVector<CPlayerGroup,CUtlMemory<CPlayerGroup,int> > playerGroups; // [rsp+40h] [rbp-50h] BYREF

  playerGroups.m_Size = 0;
  playerGroups.m_Memory.m_pMemory = 0;
  playerGroups.m_Memory.m_nAllocationCount = 0;
  playerGroups.m_Memory.m_nGrowSize = 0;
  if ( bUseParties )
  {
    BuildPlayerPartyGroups(players, &playerGroups);
  }
  else
  {
    m_Size = players->m_Size;
    CUtlVectorBase<CPlayerGroup,CUtlMemory<CPlayerGroup,int>>::SetCount(&playerGroups, players->m_Size);
    if ( m_Size > 0 )
    {
      v18 = 0;
      v19 = 0;
      do
      {
        v20 = players->m_Memory.m_pMemory[v19 / 4];
        v21 = &playerGroups.m_Memory.m_pMemory[v18];
        m_nCount = playerGroups.m_Memory.m_pMemory[v18].m_nCount;
        if ( m_nCount <= 0x3F )
        {
          v21->m_nCount = m_nCount + 1;
          v21->m_PlayerIDs[m_nCount] = v20;
        }
        v19 += 4LL;
        ++v18;
      }
      while ( v19 != 4LL * (m_Size - 1) + 4 );
    }
  }
  if ( playerGroups.m_Size > 0 )
  {
    m_pMemory = playerGroups.m_Memory.m_pMemory;
    v24 = 0;
    v23 = 260 * ((playerGroups.m_Size - 1) + 1LL);
    do
    {
      v6 = &m_pMemory[v24 / 0x104];
      v7 = m_pMemory[v24 / 0x104].m_nCount;
      if ( v7 > 1 )
      {
        nNumFreeSpaces = 0;
        nBestTeamID = FindCustomGameTeamWithMostFreeSpaces(teams, &nNumFreeSpaces);
        if ( nBestTeamID > 1 && v7 <= nNumFreeSpaces )
        {
          for ( i = 0; i != v7; ++i )
          {
            v9 = v6->m_nCount;
            v10 = -1;
            if ( v9 > 0 )
            {
              v11 = v9 - 1;
              v6->m_nCount = v11;
              v10 = v6->m_PlayerIDs[v11];
            }
            CDOTA_PlayerResource::SetCustomTeamAssignment(g_pDOTAPlayerResource, v10, nBestTeamID);
          }
        }
        m_pMemory = playerGroups.m_Memory.m_pMemory;
      }
      v24 += 260LL;
    }
    while ( v24 != v23 );
    v25 = 0;
    while ( 1 )
    {
      v12 = &m_pMemory[v25 / 0x104];
      if ( m_pMemory[v25 / 0x104].m_nCount > 0 )
      {
        do
        {
          nNumFreeSpaces = 0;
          CustomGameTeamWithMostFreeSpaces = FindCustomGameTeamWithMostFreeSpaces(teams, &nNumFreeSpaces);
          if ( CustomGameTeamWithMostFreeSpaces <= 1 || nNumFreeSpaces == 0 )
            break;
          v14 = v12->m_nCount;
          if ( nNumFreeSpaces > 0 )
          {
            if ( v14 <= 0 )
              break;
            v15 = 0;
            while ( 1 )
            {
              v16 = v14 - 1;
              v12->m_nCount = v16;
              CDOTA_PlayerResource::SetCustomTeamAssignment(
                g_pDOTAPlayerResource,
                v12->m_PlayerIDs[v16],
                CustomGameTeamWithMostFreeSpaces);
              ++v15;
              v14 = v12->m_nCount;
              if ( nNumFreeSpaces <= v15 )
                break;
              if ( v14 <= 0 )
                goto LABEL_24;
            }
          }
        }
        while ( v14 > 0 );
      }
LABEL_24:
      v25 += 260LL;
      if ( v25 == v23 )
        break;
      m_pMemory = playerGroups.m_Memory.m_pMemory;
    }
  }
  CUtlVectorBase<CPlayerGroup,CUtlMemory<CPlayerGroup,int>>::RemoveAll(&playerGroups);
  if ( (playerGroups.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CPlayerGroup,int>::Purge(&playerGroups.m_Memory);
    if ( (playerGroups.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CPlayerGroup,int>::Purge(&playerGroups.m_Memory);
  }
}


// CustomGameSetup_AssignUnassignedPlayerToTeams  (line 233, @0x0000000002481170, libserver.so)  // inlines: AddToTail, CUtlVector, CUtlVectorBase, CopyConstruct<int>, DOTAGameRules, Element, GetGameMode, GrowMemory, IsAddOnGame, Purge, RemoveAll, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlMemory<int, int>::CUtlMemory, CDOTAGamerules::GetCustomGameTeamMaxPlayers, CUtlMemory<int, int>::Grow, CDOTA_PlayerResource::IsValidPlayer, CDOTA_PlayerResource::GetTeam, AssignPlayersToCustomGameTeams, CUtlMemory<int, int>::Purge, CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: customgamesetup_auto_assign_players
void __cdecl CustomGameSetup_AssignUnassignedPlayerToTeams()
{
  int v0; // eax
  int v1; // ebx
  int *v2; // rax
  __int64 m_Size; // r12
  int v4; // eax
  int Team; // eax
  __int64 v6; // r12
  int v7; // eax
  int *v8; // rax
  CUtlVector<int,CUtlMemory<int,int> > availableTeams; // [rsp+10h] [rbp-70h] BYREF
  CUtlVector<int,CUtlMemory<int,int> > unassignedPlayers; // [rsp+30h] [rbp-50h] BYREF

  if ( g_pGameRules != 0 )
  {
    v0 = *&g_pGameRules[6].m_szQuestName[68];
    if ( (v0 == 15 || v0 == 19) && g_pDOTAPlayerResource != 0 )
    {
      availableTeams.m_Size = 0;
      v1 = 2;
      CUtlMemory<int,int>::CUtlMemory(&availableTeams.m_Memory, 0, 14);
      do
      {
        if ( CDOTAGamerules::GetCustomGameTeamMaxPlayers(g_pGameRules, v1) > 0 )
        {
          m_Size = availableTeams.m_Size;
          v4 = availableTeams.m_Size;
          if ( availableTeams.m_Size == availableTeams.m_Memory.m_nAllocationCount )
          {
            CUtlMemory<int,int>::Grow(&availableTeams.m_Memory, 1);
            v4 = availableTeams.m_Size;
          }
          availableTeams.m_Size = v4 + 1;
          v2 = &availableTeams.m_Memory.m_pMemory[m_Size];
          if ( v2 != 0 )
            *v2 = v1;
        }
        ++v1;
      }
      while ( v1 != 14 );
      unassignedPlayers.m_Size = 0;
      CUtlMemory<int,int>::CUtlMemory(&unassignedPlayers.m_Memory, 0, 64);
      LOBYTE(v1) = 0;
      do
      {
        while ( 1 )
        {
          if ( CDOTA_PlayerResource::IsValidPlayer(g_pDOTAPlayerResource, v1) )
          {
            Team = CDOTA_PlayerResource::GetTeam(g_pDOTAPlayerResource, v1);
            if ( Team == 5 || (Team + 1) <= 1 )
            {
              v6 = unassignedPlayers.m_Size;
              v7 = unassignedPlayers.m_Size;
              if ( unassignedPlayers.m_Size == unassignedPlayers.m_Memory.m_nAllocationCount )
              {
                CUtlMemory<int,int>::Grow(&unassignedPlayers.m_Memory, 1);
                v7 = unassignedPlayers.m_Size;
              }
              unassignedPlayers.m_Size = v7 + 1;
              v8 = &unassignedPlayers.m_Memory.m_pMemory[v6];
              if ( v8 != 0 )
                break;
            }
          }
          if ( ++v1 == 64 )
            goto LABEL_22;
        }
        *v8 = v1++;
      }
      while ( v1 != 64 );
LABEL_22:
      AssignPlayersToCustomGameTeams(&unassignedPlayers, &availableTeams, 1);
      unassignedPlayers.m_Size = 0;
      if ( (unassignedPlayers.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      {
        CUtlMemory<int,int>::Purge(&unassignedPlayers.m_Memory);
        if ( (unassignedPlayers.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
          CUtlMemory<int,int>::Purge(&unassignedPlayers.m_Memory);
      }
      availableTeams.m_Size = 0;
      if ( (availableTeams.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      {
        CUtlMemory<int,int>::Purge(&availableTeams.m_Memory);
        if ( (availableTeams.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
          CUtlMemory<int,int>::Purge(&availableTeams.m_Memory);
      }
    }
  }
}


// CustomGameSetup_ShuffleTeamAssignements  (line 269, @0x0000000002481400, libserver.so)  // inlines: AddToTail, CUtlVector, CUtlVectorBase, CopyConstruct<int>, DOTAGameRules, Element, GetGameMode, GrowMemory, IsAddOnGame, Purge, RemoveAll, Shuffle, V_swap<int>, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlMemory<int, int>::CUtlMemory, CDOTAGamerules::GetCustomGameTeamMaxPlayers, CUtlMemory<int, int>::Grow, CDOTA_PlayerResource::IsValidPlayer, CDOTA_PlayerResource::GetTeam, CDOTA_PlayerResource::SetCustomTeamAssignment, RandomInt, AssignPlayersToCustomGameTeams, CUtlMemory<int, int>::Purge, CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: customgamesetup_shuffle_players
void __cdecl CustomGameSetup_ShuffleTeamAssignements()
{
  int v0; // eax
  int v1; // ebx
  int *v2; // rax
  __int64 m_Size; // r13
  int v4; // eax
  int Team; // eax
  __int64 v6; // r13
  int v7; // eax
  int *v8; // rax
  int v9; // esi
  __int64 i; // rbx
  int v11; // eax
  int *v12; // rax
  int *v13; // rdx
  int v14; // ecx
  CUtlVector<int,CUtlMemory<int,int> > availableTeams; // [rsp+10h] [rbp-70h] BYREF
  CUtlVector<int,CUtlMemory<int,int> > assignedPlayers; // [rsp+30h] [rbp-50h] BYREF

  if ( g_pGameRules != 0 )
  {
    v0 = *&g_pGameRules[6].m_szQuestName[68];
    if ( (v0 == 15 || v0 == 19) && g_pDOTAPlayerResource != 0 )
    {
      availableTeams.m_Size = 0;
      v1 = 2;
      CUtlMemory<int,int>::CUtlMemory(&availableTeams.m_Memory, 0, 14);
      do
      {
        if ( CDOTAGamerules::GetCustomGameTeamMaxPlayers(g_pGameRules, v1) > 0 )
        {
          m_Size = availableTeams.m_Size;
          v4 = availableTeams.m_Size;
          if ( availableTeams.m_Size == availableTeams.m_Memory.m_nAllocationCount )
          {
            CUtlMemory<int,int>::Grow(&availableTeams.m_Memory, 1);
            v4 = availableTeams.m_Size;
          }
          availableTeams.m_Size = v4 + 1;
          v2 = &availableTeams.m_Memory.m_pMemory[m_Size];
          if ( v2 != 0 )
            *v2 = v1;
        }
        ++v1;
      }
      while ( v1 != 14 );
      assignedPlayers.m_Size = 0;
      CUtlMemory<int,int>::CUtlMemory(&assignedPlayers.m_Memory, 0, 64);
      LOBYTE(v1) = 0;
      do
      {
        while ( 1 )
        {
          if ( CDOTA_PlayerResource::IsValidPlayer(g_pDOTAPlayerResource, v1) )
          {
            Team = CDOTA_PlayerResource::GetTeam(g_pDOTAPlayerResource, v1);
            if ( Team != 5 && (Team + 1) > 1 )
              break;
          }
          if ( ++v1 == 64 )
            goto LABEL_23;
        }
        v6 = assignedPlayers.m_Size;
        v7 = assignedPlayers.m_Size;
        if ( assignedPlayers.m_Size == assignedPlayers.m_Memory.m_nAllocationCount )
        {
          CUtlMemory<int,int>::Grow(&assignedPlayers.m_Memory, 1);
          v7 = assignedPlayers.m_Size;
        }
        assignedPlayers.m_Size = v7 + 1;
        v8 = &assignedPlayers.m_Memory.m_pMemory[v6];
        if ( v8 != 0 )
          *v8 = v1;
        CDOTA_PlayerResource::SetCustomTeamAssignment(g_pDOTAPlayerResource, v1++, 5);
      }
      while ( v1 != 64 );
LABEL_23:
      v9 = assignedPlayers.m_Size;
      for ( i = 0; i < assignedPlayers.m_Size; ++i )
      {
        v11 = RandomInt(i, (v9 - 1));
        if ( i != v11 )
        {
          v12 = &assignedPlayers.m_Memory.m_pMemory[v11];
          v13 = &assignedPlayers.m_Memory.m_pMemory[i];
          v14 = *v13;
          *v13 = *v12;
          *v12 = v14;
        }
        v9 = assignedPlayers.m_Size;
      }
      AssignPlayersToCustomGameTeams(&assignedPlayers, &availableTeams, 0);
      assignedPlayers.m_Size = 0;
      if ( (assignedPlayers.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      {
        CUtlMemory<int,int>::Purge(&assignedPlayers.m_Memory);
        if ( (assignedPlayers.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
          CUtlMemory<int,int>::Purge(&assignedPlayers.m_Memory);
      }
      availableTeams.m_Size = 0;
      if ( (availableTeams.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      {
        CUtlMemory<int,int>::Purge(&availableTeams.m_Memory);
        if ( (availableTeams.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
          CUtlMemory<int,int>::Purge(&availableTeams.m_Memory);
      }
    }
  }
}


// customgamesetup_auto_assign_players  (line 312, @0x0000000002481390, libserver.so)  // inlines: DOTAGameRules, GetGameMode, IsAddOnGame, ToDOTAPlayer
// calls: UTIL_GetCommandClient, CDOTAGamerules::PlayerHasCustomGameHostPrivileges, CustomGameSetup_AssignUnassignedPlayerToTeams
void __fastcall customgamesetup_auto_assign_players(const CCommandContext *const ctx, const CCommand *const args)
{
  int v2; // eax
  CDOTAPlayer *CommandClient; // r12

  if ( g_pGameRules != 0 )
  {
    v2 = *&g_pGameRules[6].m_szQuestName[68];
    if ( v2 == 15 || v2 == 19 )
    {
      CommandClient = UTIL_GetCommandClient();
      if ( CommandClient != 0
        && (*(CommandClient->_vptr_IHandleEntity + 140))(CommandClient) != 0
        && CDOTAGamerules::PlayerHasCustomGameHostPrivileges(g_pGameRules, CommandClient) )
      {
        CustomGameSetup_AssignUnassignedPlayerToTeams();
      }
    }
  }
}


// customgamesetup_shuffle_players  (line 330, @0x0000000002481670, libserver.so)  // inlines: DOTAGameRules, GetGameMode, IsAddOnGame, ToDOTAPlayer
// calls: UTIL_GetCommandClient, CDOTAGamerules::PlayerHasCustomGameHostPrivileges, CustomGameSetup_ShuffleTeamAssignements
void __fastcall customgamesetup_shuffle_players(const CCommandContext *const ctx, const CCommand *const args)
{
  int v2; // eax
  CDOTAPlayer *CommandClient; // r12

  if ( g_pGameRules != 0 )
  {
    v2 = *&g_pGameRules[6].m_szQuestName[68];
    if ( v2 == 15 || v2 == 19 )
    {
      CommandClient = UTIL_GetCommandClient();
      if ( CommandClient != 0
        && (*(CommandClient->_vptr_IHandleEntity + 140))(CommandClient) != 0
        && CDOTAGamerules::PlayerHasCustomGameHostPrivileges(g_pGameRules, CommandClient) )
      {
        CustomGameSetup_ShuffleTeamAssignements();
      }
    }
  }
}


// customgamesetup_select_team  (line 348, @0x0000000002463d20, libserver.so)  // inlines: DOTAGameRules, GetGameMode, IsAddOnGame, State_Get, ToDOTAPlayer, atoi
// calls: UTIL_GetCommandClient, strtol, CDOTAGamerules::CustomGameSetup_SelectTeam, Msg
// strings: "Usage: customgamesetup_select_team <teamid>\n", "customgamesetup_select_team - can only change team during setup phase\n"
void __fastcall customgamesetup_select_team(const CCommandContext *const ctx, const CCommand *const args)
{
  int v2; // eax
  CDOTAPlayer *CommandClient; // r12
  const char *v5; // rdi
  int v6; // eax

  if ( g_pGameRules != 0 )
  {
    v2 = *&g_pGameRules[6].m_szQuestName[68];
    if ( v2 == 15 || v2 == 19 )
    {
      CommandClient = UTIL_GetCommandClient();
      if ( CommandClient != 0 && (*(CommandClient->_vptr_IHandleEntity + 140))(CommandClient) != 0 )
      {
        v5 = "Usage: customgamesetup_select_team <teamid>\n";
        if ( args->m_nArgc == 2 )
        {
          if ( *&g_pGameRules[6].m_szQuestName[28] == 9 )
          {
            v6 = strtol(args->m_ppArgv[1], 0, 10);
            CDOTAGamerules::CustomGameSetup_SelectTeam(g_pGameRules, CommandClient, v6);
            return;
          }
          v5 = "customgamesetup_select_team - can only change team during setup phase\n";
        }
        Msg(v5);
      }
    }
  }
}


// customgamesetup_set_remaining_time  (line 378, @0x0000000002463c60, libserver.so)  // inlines: DOTAGameRules, GetGameMode, IsAddOnGame, ToDOTAPlayer, atof
// calls: UTIL_GetCommandClient, CDOTAGamerules::PlayerHasCustomGameHostPrivileges, strtod, CDOTAGamerules::CustomGameSetup_SetRemainingTime, Msg
// strings: "Usage: customgamesetup_set_remaining_time <seconds>\n"
void __fastcall customgamesetup_set_remaining_time(const CCommandContext *const ctx, const CCommand *const args)
{
  int v2; // eax
  CDOTAPlayer *CommandClient; // r12
  float v5; // xmm1_4

  if ( g_pGameRules != 0 )
  {
    v2 = *&g_pGameRules[6].m_szQuestName[68];
    if ( v2 == 15 || v2 == 19 )
    {
      CommandClient = UTIL_GetCommandClient();
      if ( CommandClient != 0
        && (*(CommandClient->_vptr_IHandleEntity + 140))(CommandClient) != 0
        && CDOTAGamerules::PlayerHasCustomGameHostPrivileges(g_pGameRules, CommandClient) )
      {
        if ( args->m_nArgc == 2 )
        {
          strtod(args->m_ppArgv[1], 0);
          CDOTAGamerules::CustomGameSetup_SetRemainingTime(g_pGameRules, v5);
        }
        else
        {
          Msg("Usage: customgamesetup_set_remaining_time <seconds>\n");
        }
      }
    }
  }
}


// customgamesetup_lock_team_selection  (line 403, @0x0000000002463b70, libserver.so)  // inlines: Arg, DOTAGameRules, GetGameMode, IsAddOnGame, ToDOTAPlayer, operator[]
// calls: UTIL_GetCommandClient, CDOTAGamerules::PlayerHasCustomGameHostPrivileges, V_stricmp_fast, CDOTAGamerules::CustomGameSetup_SetTeamAssignmentLocked, Msg
// strings: "false", "Usage: customgamesetup_lock_team_selection <lock>\n"
void __fastcall customgamesetup_lock_team_selection(const CCommandContext *const ctx, const CCommand *const args)
{
  int v2; // eax
  CDOTAPlayer *CommandClient; // r12
  int v5; // eax
  char v6; // si
  const char *v7; // rdi

  if ( g_pGameRules != 0 )
  {
    v2 = *&g_pGameRules[6].m_szQuestName[68];
    if ( v2 == 15 || v2 == 19 )
    {
      CommandClient = UTIL_GetCommandClient();
      if ( CommandClient != 0
        && (*(CommandClient->_vptr_IHandleEntity + 140))(CommandClient) != 0
        && CDOTAGamerules::PlayerHasCustomGameHostPrivileges(g_pGameRules, CommandClient) )
      {
        if ( args->m_nArgc == 2 )
        {
          v5 = V_stricmp_fast(args->m_ppArgv[1], "0");
          v6 = 1;
          if ( v5 != 0 )
          {
            v7 = "";
            if ( args->m_nArgc > 1 )
              v7 = args->m_ppArgv[1];
            v6 = V_stricmp_fast(v7, "false") == 0;
          }
          CDOTAGamerules::CustomGameSetup_SetTeamAssignmentLocked(g_pGameRules, v6);
        }
        else
        {
          Msg("Usage: customgamesetup_lock_team_selection <lock>\n");
        }
      }
    }
  }
}


// customgamesetup_enable_auto_launch  (line 427, @0x0000000002463a80, libserver.so)  // inlines: Arg, DOTAGameRules, GetGameMode, IsAddOnGame, ToDOTAPlayer, operator[]
// calls: UTIL_GetCommandClient, CDOTAGamerules::PlayerHasCustomGameHostPrivileges, V_stricmp_fast, CDOTAGamerules::CustomGameSetup_SetAutoLaunchEnabled, Msg
// strings: "false", "Usage: customgamesetup_enable_auto_launch <enable>\n"
void __fastcall customgamesetup_enable_auto_launch(const CCommandContext *const ctx, const CCommand *const args)
{
  int v2; // eax
  CDOTAPlayer *CommandClient; // r12
  int v5; // eax
  char v6; // si
  const char *v7; // rdi

  if ( g_pGameRules != 0 )
  {
    v2 = *&g_pGameRules[6].m_szQuestName[68];
    if ( v2 == 15 || v2 == 19 )
    {
      CommandClient = UTIL_GetCommandClient();
      if ( CommandClient != 0
        && (*(CommandClient->_vptr_IHandleEntity + 140))(CommandClient) != 0
        && CDOTAGamerules::PlayerHasCustomGameHostPrivileges(g_pGameRules, CommandClient) )
      {
        if ( args->m_nArgc == 2 )
        {
          v5 = V_stricmp_fast(args->m_ppArgv[1], "0");
          v6 = 1;
          if ( v5 != 0 )
          {
            v7 = "";
            if ( args->m_nArgc > 1 )
              v7 = args->m_ppArgv[1];
            v6 = V_stricmp_fast(v7, "false") == 0;
          }
          CDOTAGamerules::CustomGameSetup_SetAutoLaunchEnabled(g_pGameRules, v6);
        }
        else
        {
          Msg("Usage: customgamesetup_enable_auto_launch <enable>\n");
        }
      }
    }
  }
}


// customgamesetup_set_auto_launch_delay  (line 451, @0x00000000024639c0, libserver.so)  // inlines: DOTAGameRules, GetGameMode, IsAddOnGame, ToDOTAPlayer, atof
// calls: UTIL_GetCommandClient, CDOTAGamerules::PlayerHasCustomGameHostPrivileges, strtod, CDOTAGamerules::CustomGameSetup_SetAutoLaunchDelay, Msg
// strings: "Usage: customgamesetup_set_auto_launch_delay <seconds>\n"
void __fastcall customgamesetup_set_auto_launch_delay(const CCommandContext *const ctx, const CCommand *const args)
{
  int v2; // eax
  CDOTAPlayer *CommandClient; // r12
  float v5; // xmm1_4

  if ( g_pGameRules != 0 )
  {
    v2 = *&g_pGameRules[6].m_szQuestName[68];
    if ( v2 == 15 || v2 == 19 )
    {
      CommandClient = UTIL_GetCommandClient();
      if ( CommandClient != 0
        && (*(CommandClient->_vptr_IHandleEntity + 140))(CommandClient) != 0
        && CDOTAGamerules::PlayerHasCustomGameHostPrivileges(g_pGameRules, CommandClient) )
      {
        if ( args->m_nArgc == 2 )
        {
          strtod(args->m_ppArgv[1], 0);
          CDOTAGamerules::CustomGameSetup_SetAutoLaunchDelay(g_pGameRules, v5);
        }
        else
        {
          Msg("Usage: customgamesetup_set_auto_launch_delay <seconds>\n");
        }
      }
    }
  }
}


