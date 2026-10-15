
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTALobby::CDOTALobby  (line 139, @0x0000000002995310, libserver.so)  // inlines: CProtoBufCachedSharedObject, CProtoBufSharedObject, ~CProtoBufSharedObjectBase, ~CSharedObject
// calls: CSODOTALobby::CSODOTALobby, _Unwind_Resume
// callers: GCSDK::CreateSharedObjectSubclass<CDOTALobby>
void __fastcall CDOTALobby::CDOTALobby(CDOTALobby *const this)
{
  CSODOTALobby *v2; // rdi

  v2 = (this + 8);
  *(v2 - 1) = &off_4304110;
  CSODOTALobby::CSODOTALobby(v2);
  *this = off_4305DD0;
  *(this + 68) = off_4305EE0;
}


// CDOTALobby::~CDOTALobby  (line 155, @0x0000000002990d90, libserver.so)  // inlines: ~CProtoBufCachedSharedObject, ~CProtoBufSharedObject, ~CProtoBufSharedObjectBase, ~CSharedObject, ~ILobby, ~IPlayerGroup
// calls: CSODOTALobby::~CSODOTALobby
void __fastcall CDOTALobby::~CDOTALobby(CDOTALobby *const this)
{
  CSODOTALobby *v2; // rdi

  v2 = (this + 8);
  *(v2 + 67) = off_4303FD0;
  *(v2 - 1) = &off_4304110;
  CSODOTALobby::~CSODOTALobby(v2);
  *this = off_40DB630;
}


// CDOTALobby::~CDOTALobby  (line 155, @0x0000000002990de0, libserver.so)  // inlines: ~CDOTALobby, ~CProtoBufCachedSharedObject, ~CProtoBufSharedObject, ~CProtoBufSharedObjectBase, ~CSharedObject, ~ILobby, ~IPlayerGroup
// calls: CSODOTALobby::~CSODOTALobby, operator delete
void __fastcall CDOTALobby::~CDOTALobby(CDOTALobby *const this)
{
  CSODOTALobby *v2; // rdi

  v2 = (this + 8);
  *(v2 + 67) = off_4303FD0;
  *(v2 - 1) = &off_4304110;
  CSODOTALobby::~CSODOTALobby(v2);
  *this = off_40DB630;
  operator delete(this);
}


// CDOTALobby::Dump  (line 186, @0x0000000002990f80, libserver.so)
// calls: GCSDK::CProtoBufSharedObjectBase::Dump
void __fastcall CDOTALobby::Dump(const CDOTALobby *const this)
{
  GCSDK::CProtoBufSharedObjectBase::Dump((this + 8));
}


// CDOTALobby::DumpToTextBuffer  (line 205, @0x00000000029997f0, libserver.so)  // inlines: CUtlMemory, CUtlStringList, CUtlStringList_Base, CUtlVector, CUtlVectorBase, Purge, PurgeAndDeleteElements, RemoveAll, ~CUtlMemory, ~CUtlStringList, ~CUtlStringList_Base, ~CUtlVector, ~CUtlVectorBase, ~basic_string
// calls: google::protobuf::Message::DebugString(void), V_SplitString(char const*,char const*,CUtlVector<char *,CUtlMemory<char *,int>> &), std::string::_Rep::_M_dispose(std::allocator<char> const&), CUtlBuffer::Printf, CUtlMemory<char*, int>::Purge, CUtlStringList_Base<CUtlVector<char*, CUtlMemory<char*, int> > >::PurgeAndDeleteElements, CUtlVectorBase<char*, CUtlMemory<char*, int> >::~CUtlVectorBase, _Unwind_Resume
void __fastcall CDOTALobby::DumpToTextBuffer(const CDOTALobby *const this, CUtlBuffer *const buf)
{
  __int64 v3; // r12
  int v4; // ebx
  __int64 v5; // r12
  int v6; // ebx
  char *v7; // rsi
  char v8; // [rsp+Fh] [rbp-51h] BYREF
  __int64 v9; // [rsp+10h] [rbp-50h] BYREF
  CUtlStringList lines; // [rsp+20h] [rbp-40h] BYREF

  lines.m_Size = 0;
  lines.m_Memory.m_pMemory = 0;
  lines.m_Memory.m_nAllocationCount = 0;
  lines.m_Memory.m_nGrowSize = 0;
  google::protobuf::Message::DebugString(&v9);
  V_SplitString(v9, "\n", &lines);
  v3 = 0;
  v4 = 0;
  std::string::_Rep::_M_dispose(v9 - 24, &v8);
  if ( lines.m_Size > 0 )
  {
    do
    {
      CUtlBuffer::Printf(buf, "%s\n", lines.m_Memory.m_pMemory[v3]);
      ++v4;
      ++v3;
    }
    while ( lines.m_Size > v4 );
    if ( lines.m_Size > 0 )
    {
      v5 = 0;
      v6 = 0;
      do
      {
        ++v6;
        v7 = lines.m_Memory.m_pMemory[v5++];
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v7);
      }
      while ( v6 < lines.m_Size );
    }
  }
  lines.m_Size = 0;
  if ( (lines.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<char *,int>::Purge(&lines.m_Memory);
    if ( (lines.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<char *,int>::Purge(&lines.m_Memory);
  }
}


// CDOTALobby::GetBonusForTypeForMember  (line 215, @0x0000000002995370, libserver.so)  // inlines: Get, Get<google::protobuf::RepeatedPtrField<CDOTALobbyMember_CDOTALobbyMemberXPBonus>::TypeHandler>, xp_bonuses
float __fastcall CDOTALobby::GetBonusForTypeForMember(
        const CDOTALobby *const this,
        const CDOTALobbyMember *pMember,
        uint32 unType,
        uint64 *pnOutSource)
{
  int v4; // eax
  __int64 *v5; // r9
  __int64 v6; // rdi
  __int64 v7; // r10
  __int64 i; // rax

  if ( pnOutSource != 0 )
    *pnOutSource = 0;
  if ( pMember == 0 )
    return 0.0;
  v4 = *(pMember + 38);
  if ( v4 <= 0 )
    return 0.0;
  v5 = *(pMember + 18);
  v6 = *v5;
  if ( *(*v5 + 24) != unType )
  {
    v7 = 8LL * (v4 - 1) + 8;
    for ( i = 8; i != v7; i += 8 )
    {
      v6 = v5[i / 8];
      if ( *(v6 + 24) == unType )
        goto LABEL_12;
    }
    return 0.0;
  }
  i = 0;
LABEL_12:
  if ( pnOutSource != 0 )
  {
    *pnOutSource = *(v6 + 32);
    v5 = *(pMember + 18);
  }
  return *(v5[i / 8] + 28);
}


// CDOTALobby::GetLeader  (line 239, @0x0000000002990410, libserver.so)
CSteamID __fastcall CDOTALobby::GetLeader(const CDOTALobby *const this)
{
  return *(this + 12);
}


// CDOTALobby::GetMember  (line 245, @0x0000000002991330, libserver.so)  // inlines: Get, Get<google::protobuf::RepeatedPtrField<CDOTALobbyMember>::TypeHandler>, members
CSteamID __fastcall CDOTALobby::GetMember(const CDOTALobby *const this, int i)
{
  if ( i >= 0 && i < *(this + 14) )
    return *(*(*(this + 6) + 8LL * i) + 24LL);
  else
    return 0;
}


// CDOTALobby::GetMemberIndexBySteamID  (line 254, @0x0000000002990430, libserver.so)  // inlines: ConvertToUint64
int __fastcall CDOTALobby::GetMemberIndexBySteamID(const CDOTALobby *const this, const CSteamID *const steamID)
{
  int v2; // r8d
  int result; // eax
  __int64 *v4; // rdx
  CSteamID::SteamID_t v5; // rsi
  __int64 *v6; // rdx
  __int64 v7; // rcx

  v2 = *(this + 14);
  result = -1;
  if ( v2 > 0 )
  {
    v4 = *(this + 6);
    v5.m_comp = steamID->m_steamid;
    if ( *(*v4 + 24) == v5.m_unAll64Bits )
    {
      return 0;
    }
    else
    {
      v6 = v4 + 1;
      result = 0;
      while ( ++result != v2 )
      {
        v7 = *v6++;
        if ( *(v7 + 24) == v5.m_unAll64Bits )
          return result;
      }
      return -1;
    }
  }
  return result;
}


// CDOTALobby::GetMemberIndexByAccountID  (line 264, @0x0000000002990490, libserver.so)
int __fastcall CDOTALobby::GetMemberIndexByAccountID(const CDOTALobby *const this, AccountID_t accountID)
{
  int v2; // r8d
  __int64 *v3; // rdx
  __int64 *v4; // rdx
  int result; // eax
  __int64 v6; // rcx

  v2 = *(this + 14);
  if ( v2 > 0 )
  {
    v3 = *(this + 6);
    if ( accountID == *(*v3 + 24) )
      return 0;
    v4 = v3 + 1;
    result = 0;
    while ( ++result != v2 )
    {
      v6 = *v4++;
      if ( accountID == *(v6 + 24) )
        return result;
    }
  }
  return -1;
}


// CDOTALobby::GetLeftMemberIndexByAccountID  (line 275, @0x00000000029904e0, libserver.so)
int __fastcall CDOTALobby::GetLeftMemberIndexByAccountID(const CDOTALobby *const this, AccountID_t accountID)
{
  int v2; // r8d
  __int64 *v3; // rdx
  __int64 *v4; // rdx
  int result; // eax
  __int64 v6; // rcx

  v2 = *(this + 20);
  if ( v2 > 0 )
  {
    v3 = *(this + 9);
    if ( accountID == *(*v3 + 24) )
      return 0;
    v4 = v3 + 1;
    result = 0;
    while ( ++result != v2 )
    {
      v6 = *v4++;
      if ( accountID == *(v6 + 24) )
        return result;
    }
  }
  return -1;
}


// CDOTALobby::GetMemberDetails  (line 286, @0x0000000002990530, libserver.so)  // inlines: BAssertValidMemberIndex, Get, Get<google::protobuf::RepeatedPtrField<CDOTALobbyMember>::TypeHandler>, members
const CDOTALobbyMember *__fastcall CDOTALobby::GetMemberDetails(const CDOTALobby *const this, int i)
{
  const CDOTALobbyMember *result; // rax

  result = 0;
  if ( i >= 0 && i < *(this + 14) )
    return *(*(this + 6) + 8LL * i);
  return result;
}


// CDOTALobby::BAssertValidMemberIndex  (line 294, @0x00000000029953f0, libserver.so)
bool __fastcall CDOTALobby::BAssertValidMemberIndex(const CDOTALobby *const this, int iMemberIndex)
{
  bool result; // al

  result = 0;
  if ( iMemberIndex >= 0 )
    return iMemberIndex < *(this + 14);
  return result;
}


// CDOTALobby::FindMemberDetailsByTeamSlot  (line 301, @0x0000000002990550, libserver.so)  // inlines: Get, Get<google::protobuf::RepeatedPtrField<CDOTALobbyMember>::TypeHandler>, members
const CDOTALobbyMember *__fastcall CDOTALobby::FindMemberDetailsByTeamSlot(
        const CDOTALobby *const this,
        DOTA_GC_TEAM nGCTeam,
        uint32 nSlot)
{
  int v6; // eax
  __int64 v7; // rsi
  __int64 v8; // rcx
  __int64 v9; // rdi

  v6 = (*(*this + 96LL))(this);
  if ( v6 <= 0 )
    return 0;
  v8 = 0;
  while ( 1 )
  {
    v7 = *(this + 6);
    v9 = *(v7 + 8 * v8);
    if ( nGCTeam == *(v9 + 36) && *(v9 + 56) == nSlot )
      break;
    if ( v6 <= ++v8 )
      return 0;
  }
  return *(v7 + 8 * v8);
}


// CDOTALobby::FindFirstExtraMessage  (line 313, @0x0000000002995410, libserver.so)
// callers: CDOTAGamerules::GetWaitingForPlayersBonusPresentationTime, dota_call_gg, CDOTA_PlayerResource::InitPlayersWithLobby, RequestEndGame
int __fastcall CDOTALobby::FindFirstExtraMessage(const CDOTALobby *const this, GCSDK::MsgType_t eType)
{
  int v2; // r8d
  int result; // eax
  __int64 *v4; // rdx
  __int64 *v5; // rdx
  __int64 v6; // rcx

  v2 = *(this + 92);
  result = -1;
  if ( v2 > 0 )
  {
    v4 = *(this + 45);
    if ( *(*v4 + 32) == eType )
    {
      return 0;
    }
    else
    {
      v5 = v4 + 1;
      result = 0;
      while ( ++result != v2 )
      {
        v6 = *v5++;
        if ( *(v6 + 32) == eType )
          return result;
      }
      return -1;
    }
  }
  return result;
}


// CDOTALobby::GetLeftMemberDetails  (line 323, @0x0000000002995460, libserver.so)  // inlines: Get, Get<google::protobuf::RepeatedPtrField<CDOTALobbyMember>::TypeHandler>, left_members
// callers: CDOTAGamerules::OnLobbyUpdated
const CDOTALobbyMember *__fastcall CDOTALobby::GetLeftMemberDetails(const CDOTALobby *const this, int i)
{
  const CDOTALobbyMember *result; // rax

  result = 0;
  if ( i >= 0 && i < *(this + 20) )
    return *(*(this + 9) + 8LL * i);
  return result;
}


// CDOTALobby::GetFullNumMembers  (line 334, @0x0000000002995490, libserver.so)
// callers: CDOTA_PlayerResource::FlushPlayerResourceRequests, CDOTA_PlayerResource::InitLobbySteamIDs, CDOTA_PlayerResource::InitPlayersWithLobby, UpdateEventPoints
CDOTALobby::FullMemberIndex_t __fastcall CDOTALobby::GetFullNumMembers(const CDOTALobby *const this)
{
  return (*(this + 14) + *(this + 20));
}


// CDOTALobby::GetWriteableFullMemberDetails  (line 341, @0x00000000029954a0, libserver.so)  // inlines: Mutable, Mutable<google::protobuf::RepeatedPtrField<CDOTALobbyMember>::TypeHandler>, mutable_left_members, mutable_members
CDOTALobbyMember *__fastcall CDOTALobby::GetWriteableFullMemberDetails(
        CDOTALobby *const this,
        CDOTALobby::FullMemberIndex_t i)
{
  int v2; // eax
  signed int v3; // esi

  v2 = *(this + 14);
  if ( i.m_nIndex < v2 )
    return *(*(this + 6) + 8LL * i.m_nIndex);
  v3 = i.m_nIndex - v2;
  if ( v3 >= *(this + 20) )
    return 0;
  else
    return *(*(this + 9) + 8LL * v3);
}


// CDOTALobby::GetFullMemberDetails  (line 355, @0x00000000029954e0, libserver.so)  // inlines: Get, Get<google::protobuf::RepeatedPtrField<CDOTALobbyMember>::TypeHandler>, left_members, members
// callers: CDOTA_PlayerResource::FlushPlayerResourceRequests, CDOTA_PlayerResource::InitLobbySteamIDs, CDOTA_PlayerResource::InitPlayersWithLobby, UpdateEventPoints
const CDOTALobbyMember *__fastcall CDOTALobby::GetFullMemberDetails(
        const CDOTALobby *const this,
        CDOTALobby::FullMemberIndex_t i)
{
  int v2; // eax
  signed int v3; // esi

  v2 = *(this + 14);
  if ( i.m_nIndex < v2 )
    return *(*(this + 6) + 8LL * i.m_nIndex);
  v3 = i.m_nIndex - v2;
  if ( v3 >= *(this + 20) )
    return 0;
  else
    return *(*(this + 9) + 8LL * v3);
}


// CDOTALobby::FindFullMemberDetails  (line 369, @0x0000000002995520, libserver.so)  // inlines: Get, Get<google::protobuf::RepeatedPtrField<CDOTALobbyMember>::TypeHandler>, left_members, members
// callers: BuildPlayerPartyGroups, CDOTA_PlayerResource::FlushPlayerResourceRequests, CDOTA_PlayerResource::SetLeaverStatus, CDOTAGCServerSystem::GetPartyIDForLobbyMember, CDOTAGCServerSystem::SendScoreboardUpdate, CDOTALobby::IsPermanentLeaver, CDOTALobby::IsMemberACoach, CDOTALobby::GetMemberPartyID, CDOTALobby::BMemberCanSubmitMVPVote, CDOTALobby::HasPlayersPartyForfeitedMatch, CDOTALobby::GetLeaverActionsForMember
const CDOTALobbyMember *__fastcall CDOTALobby::FindFullMemberDetails(
        const CDOTALobby *const this,
        AccountID_t nAccountID)
{
  int v2; // ecx
  const CDOTALobbyMember **v3; // rdx
  const CDOTALobbyMember *result; // rax
  const CDOTALobbyMember **v5; // rdx
  const CDOTALobbyMember **v6; // rcx
  int v7; // ecx
  const CDOTALobbyMember **v8; // rdx
  const CDOTALobbyMember **v9; // rdx
  const CDOTALobbyMember **v10; // rcx

  v2 = *(this + 14);
  if ( v2 > 0 )
  {
    v3 = *(this + 6);
    result = *v3;
    if ( nAccountID == *(*v3 + 6) )
      return result;
    v5 = v3 + 1;
    v6 = &v5[v2 - 1];
    while ( v5 != v6 )
    {
      result = *v5++;
      if ( nAccountID == *(result + 6) )
        return result;
    }
  }
  v7 = *(this + 20);
  if ( v7 > 0 )
  {
    v8 = *(this + 9);
    result = *v8;
    if ( nAccountID == *(*v8 + 6) )
      return result;
    v9 = v8 + 1;
    v10 = &v9[v7 - 1];
    while ( v9 != v10 )
    {
      result = *v9++;
      if ( nAccountID == *(result + 6) )
        return result;
    }
  }
  return 0;
}


// CDOTALobby::FindWriteableFullMemberDetails  (line 388, @0x00000000029963c0, libserver.so)  // inlines: Get, Get<google::protobuf::RepeatedPtrField<CDOTALobbyMember>::TypeHandler>, left_members, members
CDOTALobbyMember *__fastcall CDOTALobby::FindWriteableFullMemberDetails(CDOTALobby *const this, AccountID_t nAccountID)
{
  int v2; // ecx
  CDOTALobbyMember **v3; // rdx
  CDOTALobbyMember *result; // rax
  CDOTALobbyMember **v5; // rdx
  CDOTALobbyMember **v6; // rcx
  int v7; // ecx
  CDOTALobbyMember **v8; // rdx
  CDOTALobbyMember **v9; // rdx
  CDOTALobbyMember **v10; // rcx

  v2 = *(this + 14);
  if ( v2 > 0 )
  {
    v3 = *(this + 6);
    result = *v3;
    if ( nAccountID == *(*v3 + 6) )
      return result;
    v5 = v3 + 1;
    v6 = &v5[v2 - 1];
    while ( v5 != v6 )
    {
      result = *v5++;
      if ( nAccountID == *(result + 6) )
        return result;
    }
  }
  v7 = *(this + 20);
  if ( v7 > 0 )
  {
    v8 = *(this + 9);
    result = *v8;
    if ( nAccountID == *(*v8 + 6) )
      return result;
    v9 = v8 + 1;
    v10 = &v9[v7 - 1];
    while ( v9 != v10 )
    {
      result = *v9++;
      if ( nAccountID == *(result + 6) )
        return result;
    }
  }
  return 0;
}


// CDOTALobby::GetSentInviteID  (line 407, @0x00000000029905c0, libserver.so)  // inlines: Get, pending_invites
void __fastcall CDOTALobby::GetSentInviteID(const CDOTALobby *const this, int i, uint64 *const id, bool *const bGroup)
{
  if ( i >= 0 && i < *(this + 30) )
  {
    *id = *(*(this + 14) + 8LL * i);
    *bGroup = 0;
  }
  else
  {
    *id = 0;
    *bGroup = 0;
  }
}


// CDOTALobby::GetSentInviteIndexBySteamID  (line 421, @0x0000000002990610, libserver.so)
int __fastcall CDOTALobby::GetSentInviteIndexBySteamID(const CDOTALobby *const this, CSteamID steamID)
{
  int v2; // ecx
  int result; // eax
  _QWORD *v4; // rdx
  _QWORD *v5; // rdx

  v2 = *(this + 30);
  result = -1;
  if ( v2 > 0 )
  {
    v4 = *(this + 14);
    if ( steamID.m_steamid.m_comp == *v4 )
    {
      return 0;
    }
    else
    {
      v5 = v4 + 1;
      result = 0;
      while ( ++result != v2 )
      {
        if ( steamID.m_steamid.m_comp == *v5++ )
          return result;
      }
      return -1;
    }
  }
  return result;
}


// CDOTALobby::GetSentInviteIndexByGroupID  (line 431, @0x0000000002990670, libserver.so)
int __fastcall CDOTALobby::GetSentInviteIndexByGroupID(const CDOTALobby *const this, GCSDK::PlayerGroupID_t nGroupID)
{
  return -1;
}


// CDOTALobby::GetRecvInviteIndexByGroupID  (line 437, @0x0000000002990690, libserver.so)
int __fastcall CDOTALobby::GetRecvInviteIndexByGroupID(const CDOTALobby *const this, GCSDK::PlayerGroupID_t nGroupID)
{
  return -1;
}


// CDOTALobby::GetTeamDetails  (line 443, @0x0000000002996440, libserver.so)  // inlines: Get, Get<google::protobuf::RepeatedPtrField<CLobbyTeamDetails>::TypeHandler>, team_details
// callers: CDOTAGamerules::State_Enter_POST_GAME, CDOTATeam::UpdateTeamNameFromLobby
const CLobbyTeamDetails *__fastcall CDOTALobby::GetTeamDetails(const CDOTALobby *const this, DOTA_GC_TEAM nTeam)
{
  const CLobbyTeamDetails *result; // rax

  if ( nTeam > DOTA_GC_TEAM::DOTA_GC_TEAM_BAD_GUYS )
    return 0;
  if ( nTeam >= *(this + 42) )
    return 0;
  result = *(*(this + 20) + 8LL * nTeam);
  if ( *(result + 16) == 0 )
    return 0;
  return result;
}


// CDOTALobby::GetTeamAverageRank  (line 456, @0x0000000002996470, libserver.so)  // inlines: Get, Get<google::protobuf::RepeatedPtrField<CLobbyTeamDetails>::TypeHandler>, team_details
int __fastcall CDOTALobby::GetTeamAverageRank(const CDOTALobby *const this, DOTA_GC_TEAM nTeam)
{
  int result; // eax
  __int64 v3; // rdx

  result = -1;
  if ( nTeam <= DOTA_GC_TEAM::DOTA_GC_TEAM_BAD_GUYS && nTeam < *(this + 42) )
  {
    v3 = *(*(this + 20) + 8LL * nTeam);
    if ( (*(v3 + 17) & 0x20) != 0 )
      return *(v3 + 108);
  }
  return result;
}


// CDOTALobby::SpewDebug  (line 478, @0x0000000002990e40, libserver.so)  // inlines: Get, Get<google::protobuf::RepeatedPtrField<CDOTALobbyMember>::TypeHandler>, GetMemberTeam, left_members, members
// calls: Msg, CSteamID::Render
// strings: "DOTALobby: ID:%llu  %d member(s) allow_spectators: %d\n", "  Member[%d] %s  team = %d\n", "  Left Member[%d] %lld\n", " Dump:\n"
void __fastcall CDOTALobby::SpewDebug(const CDOTALobby *const this)
{
  int v2; // r13d
  int v3; // r12d
  __int64 v4; // rax
  unsigned __int64 v5; // xmm0_8
  unsigned int i; // r12d
  int v7; // r13d
  int v8; // eax
  const char *v9; // rax
  __int64 v10; // r13
  int v11; // r12d
  int v12; // esi
  __int64 v13; // rax
  double v14; // xmm0_8
  CSteamID v15; // [rsp+0h] [rbp-50h] BYREF
  __int64 v16[8]; // [rsp+10h] [rbp-40h] BYREF

  v2 = *(this + 159);
  v3 = (*(*this + 96LL))();
  v4 = (*(*this + 88LL))(this);
  v5 = Msg("DOTALobby: ID:%llu  %d member(s) allow_spectators: %d\n", v4, v3, v2).m128_u64[0];
  for ( i = 0; i < (*(*this + 96LL))(this, *&v5); ++i )
  {
    v7 = 5;
    v16[0] = (*(*this + 104LL))(this, i);
    v8 = (*(*this + 112LL))(this, v16);
    if ( v8 != -1 )
      v7 = *(*(*(this + 6) + 8LL * v8) + 36LL);
    v15.m_steamid.m_comp = (*(*this + 104LL))(this, i);
    v9 = CSteamID::Render(&v15);
    v5 = Msg("  Member[%d] %s  team = %d\n", i, v9, v7).m128_u64[0];
  }
  v10 = 0;
  v11 = 0;
  while ( v11 < *(this + 20) )
  {
    v12 = v11++;
    v13 = *(*(this + 9) + v10);
    v10 += 8;
    Msg("  Left Member[%d] %lld\n", v12, *(v13 + 24));
  }
  *&v14 = Msg(" Dump:\n").m128_u64[0];
  (*(*this + 56LL))(this, v14);
}


// CDOTALobby::GetMemberTeam  (line 493, @0x00000000029964b0, libserver.so)  // inlines: Get, Get<google::protobuf::RepeatedPtrField<CDOTALobbyMember>::TypeHandler>, members, team
// callers: CDOTAGamerules::CreateDemoPlayers
DOTA_GC_TEAM __fastcall CDOTALobby::GetMemberTeam(const CDOTALobby *const this, const CSteamID *const steamID)
{
  int v3; // eax
  DOTA_GC_TEAM v4; // edx

  v3 = (*(*this + 112LL))(this, steamID);
  v4 = DOTA_GC_TEAM::DOTA_GC_TEAM_NOTEAM;
  if ( v3 != -1 )
    return *(*(*(this + 6) + 8LL * v3) + 36LL);
  return v4;
}


// CDOTALobby::GetMemberTeamDetails  (line 502, @0x00000000029964f0, libserver.so)  // inlines: Get, Get<google::protobuf::RepeatedPtrField<CDOTALobbyMember>::TypeHandler>, Get<google::protobuf::RepeatedPtrField<CLobbyTeamDetails>::TypeHandler>, GetMemberTeam, GetTeamDetails, members, team_details
// callers: CDOTALobby::GetMemberTeamID
const CLobbyTeamDetails *__fastcall CDOTALobby::GetMemberTeamDetails(
        const CDOTALobby *const this,
        const CSteamID *const steamID)
{
  int v3; // eax
  __int64 v4; // rax
  const CLobbyTeamDetails *result; // rax

  v3 = (*(*this + 112LL))(this, steamID);
  if ( v3 == -1 )
    return 0;
  v4 = *(*(*(this + 6) + 8LL * v3) + 36LL);
  if ( v4 > 1 )
    return 0;
  if ( v4 >= *(this + 42) )
    return 0;
  result = *(*(this + 20) + 8 * v4);
  if ( *(result + 16) == 0 )
    return 0;
  return result;
}


// CDOTALobby::GetMemberTeamID  (line 508, @0x0000000002996550, libserver.so)
// calls: CDOTALobby::GetMemberTeamDetails
uint32 __fastcall CDOTALobby::GetMemberTeamID(const CDOTALobby *const this, const CSteamID *const steamID)
{
  const CLobbyTeamDetails *MemberTeamDetails; // rax

  MemberTeamDetails = CDOTALobby::GetMemberTeamDetails(this, steamID);
  if ( MemberTeamDetails != 0 )
    return *(MemberTeamDetails + 16);
  else
    return 0;
}


// CDOTALobby::GetMemberBroadcastChannel  (line 516, @0x0000000002996570, libserver.so)  // inlines: Get, Get<google::protobuf::RepeatedPtrField<CDOTALobbyMember>::TypeHandler>, members
uint32 __fastcall CDOTALobby::GetMemberBroadcastChannel(const CDOTALobby *const this, const CSteamID *const steamID)
{
  int v3; // eax
  uint32 v4; // edx

  v3 = (*(*this + 112LL))(this, steamID);
  v4 = 6;
  if ( v3 != -1 )
    return *(*(*(this + 6) + 8LL * v3) + 80LL);
  return v4;
}


// CDOTALobby::GetMemberBroadcastChannelSlot  (line 525, @0x00000000029965b0, libserver.so)  // inlines: Get, Get<google::protobuf::RepeatedPtrField<CDOTALobbyMember>::TypeHandler>, members
uint32 __fastcall CDOTALobby::GetMemberBroadcastChannelSlot(
        const CDOTALobby *const this,
        const CSteamID *const steamID)
{
  int v3; // eax
  uint32 v4; // edx

  v3 = (*(*this + 112LL))(this, steamID);
  v4 = 6;
  if ( v3 != -1 )
    return *(*(*(this + 6) + 8LL * v3) + 56LL);
  return v4;
}


// CDOTALobby::GetBroadcastChannelCount  (line 534, @0x00000000029965f0, libserver.so)
int __fastcall CDOTALobby::GetBroadcastChannelCount(const CDOTALobby *const this)
{
  return *(this + 82);
}


// CDOTALobby::GetBroadcastChannelByIndex  (line 539, @0x0000000002996600, libserver.so)  // inlines: Get, Get<google::protobuf::RepeatedPtrField<CLobbyBroadcastChannelInfo>::TypeHandler>, broadcast_channel_info
const CLobbyBroadcastChannelInfo *__fastcall CDOTALobby::GetBroadcastChannelByIndex(
        const CDOTALobby *const this,
        int index)
{
  const CLobbyBroadcastChannelInfo *result; // rax

  result = 0;
  if ( index >= 0 && index < *(this + 82) )
    return *(*(this + 40) + 8LL * index);
  return result;
}


// CDOTALobby::IsMemberConnected  (line 547, @0x0000000002996630, libserver.so)  // inlines: BAssertValidMemberIndex, Get, Get<google::protobuf::RepeatedPtrField<CDOTALobbyMember>::TypeHandler>, members
bool __fastcall CDOTALobby::IsMemberConnected(const CDOTALobby *const this, int iMemberIndex)
{
  bool result; // al

  result = 0;
  if ( iMemberIndex >= 0 && iMemberIndex < *(this + 14) )
    return *(*(*(this + 6) + 8LL * iMemberIndex) + 72LL) == 0;
  return result;
}


// CDOTALobby::IsPermanentLeaver  (line 574, @0x0000000002996660, libserver.so)  // inlines: IsPermanentLeaver
// calls: CDOTALobby::FindFullMemberDetails, IsPermanentLeaverState
// callers: CIngameEvent_Base::AddResultToSignout, CIngameEvent_FM2015::AddResultToSignout
bool __fastcall CDOTALobby::IsPermanentLeaver(const CDOTALobby *const this, AccountID_t nAccountID)
{
  const CDOTALobbyMember *FullMemberDetails; // rax

  FullMemberDetails = CDOTALobby::FindFullMemberDetails(this, nAccountID);
  return FullMemberDetails != 0 && IsPermanentLeaverState(*(FullMemberDetails + 18));
}


// CDOTALobby::IsPermanentLeaver  (line 583, @0x0000000002996690, libserver.so)
// calls: IsPermanentLeaverState
bool __fastcall CDOTALobby::IsPermanentLeaver(const CDOTALobby *const this, const CDOTALobbyMember *const member)
{
  return IsPermanentLeaverState(*(member + 18));
}


// CDOTALobby::AreCoachesAllowed  (line 588, @0x00000000029966a0, libserver.so)
bool __fastcall CDOTALobby::AreCoachesAllowed(const CDOTALobby *const this)
{
  int v1; // edx
  bool result; // al

  v1 = *(this + 38);
  result = v1 == 2 || v1 == 7;
  if ( result )
    return 0;
  if ( (v1 & 0xFFFFFFFD) != 9 )
    return *(this + 66) == 0;
  return result;
}


// CDOTALobby::IsMemberACoach  (line 603, @0x00000000029966e0, libserver.so)
// callers: CDOTA_PlayerResource::FlushPlayerResourceRequests
bool __fastcall CDOTALobby::IsMemberACoach(const CDOTALobbyMember *pMember)
{
  bool result; // al

  result = 0;
  if ( pMember != 0 && (*(pMember + 18) & 1) != 0 )
    return *(pMember + 31) != 5;
  return result;
}


// CDOTALobby::IsMemberACoach  (line 613, @0x0000000002996700, libserver.so)  // inlines: IsMemberACoach
// calls: CDOTALobby::FindFullMemberDetails
// callers: CDOTAPlayer::IsACoach
bool __fastcall CDOTALobby::IsMemberACoach(const CDOTALobby *const this, const CSteamID *const steamID)
{
  const CDOTALobbyMember *FullMemberDetails; // rdx
  bool result; // al

  FullMemberDetails = CDOTALobby::FindFullMemberDetails(this, steamID->m_steamid.m_unAll64Bits);
  result = 0;
  if ( FullMemberDetails != 0 && (*(FullMemberDetails + 18) & 1) != 0 )
    return *(FullMemberDetails + 31) != 5;
  return result;
}


// CDOTALobby::IsMemberACoach  (line 621, @0x0000000002996730, libserver.so)  // inlines: BAssertValidMemberIndex, Get, Get<google::protobuf::RepeatedPtrField<CDOTALobbyMember>::TypeHandler>, IsMemberACoach, members
bool __fastcall CDOTALobby::IsMemberACoach(const CDOTALobby *const this, int iMemberIndex)
{
  bool result; // al
  __int64 v3; // rdx

  result = 0;
  if ( iMemberIndex >= 0 && iMemberIndex < *(this + 14) )
  {
    v3 = *(*(this + 6) + 8LL * iMemberIndex);
    if ( v3 != 0 && (*(v3 + 18) & 1) != 0 )
      return *(v3 + 124) != 5;
  }
  return result;
}


// CDOTALobby::GetMemberCoachTeam  (line 629, @0x0000000002996760, libserver.so)  // inlines: Get, Get<google::protobuf::RepeatedPtrField<CDOTALobbyMember>::TypeHandler>, coach_team, members
// callers: CDOTAPlayer::GetCoachedTeamNum
DOTA_GC_TEAM __fastcall CDOTALobby::GetMemberCoachTeam(const CDOTALobby *const this, const CSteamID *const steamID)
{
  int v3; // eax
  DOTA_GC_TEAM v4; // edx

  v3 = (*(*this + 112LL))(this, steamID);
  v4 = DOTA_GC_TEAM::DOTA_GC_TEAM_NOTEAM;
  if ( v3 != -1 )
    return *(*(*(this + 6) + 8LL * v3) + 124LL);
  return v4;
}


// CDOTALobby::GetMemberPartyID  (line 638, @0x00000000029967a0, libserver.so)
// calls: CDOTALobby::FindFullMemberDetails
// callers: CDOTAGamerules::AutoAssignCaptains
GCSDK::PlayerGroupID_t __fastcall CDOTALobby::GetMemberPartyID(
        const CDOTALobby *const this,
        const CSteamID *const steamID)
{
  const CDOTALobbyMember *FullMemberDetails; // rax

  FullMemberDetails = CDOTALobby::FindFullMemberDetails(this, steamID->m_steamid.m_unAll64Bits);
  if ( FullMemberDetails != 0 )
    return *(FullMemberDetails + 6);
  else
    return 0;
}


// CDOTALobby::BLeaversMatterForLobbyType  (line 647, @0x00000000029967d0, libserver.so)
// callers: CDOTAGamerules::OnLobbyUpdated, CDOTAGamerules::CheckIdleAndDisconnectedPlayers, CDOTAGamerules::ClientDisconnected
bool __fastcall CDOTALobby::BLeaversMatterForLobbyType(CSODOTALobby::LobbyType eLobbyType)
{
  bool result; // al

  result = 0;
  if ( eLobbyType <= CSODOTALobby_LobbyType::CSODOTALobby_LobbyType_CASUAL_1V1_MATCH )
    return ((1LL << eLobbyType) & 0x1D1) != 0;
  return result;
}


// CDOTALobby::ContributesToStrangeCounts  (line 673, @0x00000000029967f0, libserver.so)
// callers: EconEntity_OnOwnerKillEaterEvent
bool __fastcall CDOTALobby::ContributesToStrangeCounts(const CDOTALobby *const this)
{
  unsigned int v1; // ecx
  bool v2; // si
  int v3; // edx
  bool result; // al

  v1 = *(this + 38);
  v2 = 0;
  if ( v1 <= 9 )
    v2 = ((1LL << v1) & 0x2E1) != 0;
  v3 = *(this + 32);
  result = 0;
  if ( v3 != 15 && v3 != 19 )
    return v2;
  return result;
}


// CDOTALobby::ContributesToSocialFeedMatchEvents  (line 692, @0x0000000002996830, libserver.so)
bool __fastcall CDOTALobby::ContributesToSocialFeedMatchEvents(const CDOTALobby *const this)
{
  unsigned int v1; // ecx
  bool v2; // si
  int v3; // edx
  bool result; // al

  v1 = *(this + 38);
  v2 = 0;
  if ( v1 <= 9 )
    v2 = ((1LL << v1) & 0x2E1) != 0;
  v3 = *(this + 32);
  result = 0;
  if ( v3 != 15 && v3 != 19 && v2 )
    return *(this + 350) ^ 1;
  return result;
}


// CDOTALobby::ShowMMROnScoreboardAtGameEnd  (line 712, @0x0000000002996880, libserver.so)
// callers: CDOTAGamerules::State_Enter_HERO_SELECTION, CDOTAGamerules::State_Enter_POST_GAME
bool __fastcall CDOTALobby::ShowMMROnScoreboardAtGameEnd(const CDOTALobby *const this)
{
  int v1; // eax

  v1 = *(this + 38);
  return v1 == 5 || v1 == 7;
}


// CDOTALobby::IsHostAutomaticallySelected  (line 737, @0x00000000029968b0, libserver.so)
bool __fastcall CDOTALobby::IsHostAutomaticallySelected(const CDOTALobby *const this)
{
  bool result; // al

  result = 0;
  if ( *(this + 349) != 0 )
    return *(this + 449);
  return result;
}


// CDOTALobby::GetLeaverActions  (line 744, @0x00000000029968d0, libserver.so)
// callers: CDOTALobby::CalculateLeaverActionsForMember, CDOTALobby::GetLeaverActionsForCurrentState
// globals: jpt_299692A
uint32 __fastcall CDOTALobby::GetLeaverActions(
        CSODOTALobby::LobbyType eLobbyType,
        DOTA_GameMode eGameMode,
        bool bLowPriorityMatch,
        const CMsgLeaverState *const msgLeaverState)
{
  uint32 result; // eax
  unsigned int v6; // r10d
  unsigned int v7; // ecx
  __int64 v8; // r11
  int v9; // r8d
  int v10; // ecx
  int v11; // ecx
  char v12; // r10
  int v13; // eax
  int v14; // ecx
  int v15; // edx

  result = 0;
  v6 = *(msgLeaverState + 6);
  if ( v6 - 1 <= 5 && ((1LL << (v6 - 1)) & 0x2B) != 0 )
  {
    v7 = *(msgLeaverState + 7);
    if ( v7 <= 0xA )
    {
      v8 = 1LL << v7;
      if ( ((1LL << v7) & 0x73F) != 0 )
      {
        switch ( eLobbyType )
        {
          case CSODOTALobby_LobbyType::CSODOTALobby_LobbyType_CASUAL_MATCH:
          case CSODOTALobby_LobbyType::CSODOTALobby_LobbyType_COOP_BOT_MATCH:
          case CSODOTALobby_LobbyType::CSODOTALobby_LobbyType_LEGACY_SOLO_QUEUE_MATCH:
            v9 = 783;
            v10 = !bLowPriorityMatch ? 1 : 513;
            goto LABEL_11;
          case CSODOTALobby_LobbyType::CSODOTALobby_LobbyType_PRACTICE:
          case CSODOTALobby_LobbyType::CSODOTALobby_LobbyType_LEGACY_TEAM_MATCH:
          case CSODOTALobby_LobbyType::CSODOTALobby_LobbyType_LOCAL_BOT_MATCH:
          case CSODOTALobby_LobbyType::CSODOTALobby_LobbyType_SPECTATOR:
            goto LABEL_8;
          case CSODOTALobby_LobbyType::CSODOTALobby_LobbyType_COMPETITIVE_MATCH:
            v9 = 511;
            v10 = 1;
            goto LABEL_11;
          case CSODOTALobby_LobbyType::CSODOTALobby_LobbyType_CASUAL_1V1_MATCH:
            v9 = 87;
            v10 = 1;
            goto LABEL_11;
          case CSODOTALobby_LobbyType::CSODOTALobby_LobbyType_WEEKEND_TOURNEY:
            return 1;
          default:
            v9 = 3;
            v10 = 1;
LABEL_11:
            if ( v6 == 2 )
            {
              if ( (v8 & 0x73C) != 0 )
              {
                result = 1;
                if ( *(msgLeaverState + 34) == 0 && *(msgLeaverState + 35) == 0 )
                {
                  v12 = *(msgLeaverState + 32);
                  v13 = v10;
                  if ( v12 == 0 )
                  {
                    v13 = v10 | 0x18;
                    if ( bLowPriorityMatch )
                    {
                      v13 = v10 | 0x1C;
                    }
                    else if ( (*(msgLeaverState + 16) & 8) != 0 )
                    {
                      v14 = v10 | 0x118;
                      if ( *(msgLeaverState + 33) == 0 )
                        v13 = v14;
                    }
                  }
                  if ( eLobbyType == CSODOTALobby_LobbyType::CSODOTALobby_LobbyType_COMPETITIVE_MATCH )
                  {
                    if ( (*(msgLeaverState + 16) & 8) != 0 && *(msgLeaverState + 33) == 0 )
                    {
                      v15 = v13;
                      if ( v12 == 0 )
                      {
                        LOBYTE(v15) = v13 | 0xA0;
                        v13 = v15;
                      }
                    }
                    v13 |= 0x50u;
                  }
                  if ( (v13 & 0x100) == 0
                    && (v12 != 1 || eLobbyType == CSODOTALobby_LobbyType::CSODOTALobby_LobbyType_COMPETITIVE_MATCH) )
                  {
                    v13 |= 2u;
                  }
                  if ( eGameMode == DOTA_GameMode::DOTA_GAMEMODE_POOL1 )
                    v13 &= 0xFFFFFE07;
                  result = v9 & v13;
                }
              }
              else
              {
                result = 0;
                if ( (v8 & 3) != 0 )
                {
                  LOBYTE(result) = 1;
                  if ( *(msgLeaverState + 34) == 0 )
                  {
                    v11 = v10 | 4;
                    if ( *(msgLeaverState + 35) == 0 )
                      result = v11;
                  }
                }
              }
            }
            else if ( v6 <= 2 || v6 == 4 || v6 == 6 )
            {
              result = v10 | 4;
            }
            else
            {
LABEL_8:
              result = 0;
            }
            break;
        }
      }
    }
  }
  return result;
}


// CDOTALobby::GetCurrentLeaverState  (line 979, @0x0000000002996a70, libserver.so)  // inlines: DOTAGameRules, GetDiscardMatchResults, GetLeaverDetected, GetState, State_Get, set_discard_match_results, set_first_blood_happened, set_game_state, set_has_discard_match_results, set_has_first_blood_happened, set_has_game_state, set_has_leaver_detected, set_has_lobby_state, set_has_mass_disconnect, set_leaver_detected, set_lobby_state, set_mass_disconnect, state
// callers: CDOTA_PlayerResource::SetLeaverStatus, CDOTAGCServerSystem::CheckUpdateConnectedPlayers, CDOTALobby::GetLeaverActionsForCurrentState, CDOTALobby::GetLeaverActionsForMember
void __fastcall CDOTALobby::GetCurrentLeaverState(const CDOTALobby *const this, CMsgLeaverState *const msgResult)
{
  int v2; // edx
  int v3; // eax
  bool v4; // cl
  int v5; // eax
  char v6; // cl
  bool v7; // dl
  char v8; // dl
  CGameRules *v9; // rdx
  int v10; // ecx
  char v11; // dl

  v2 = *(msgResult + 4);
  *(msgResult + 6) = *(this + 33);
  *(msgResult + 4) = v2 | 1;
  v3 = *(this + 50);
  *(msgResult + 4) = v2 | 3;
  *(msgResult + 7) = v3;
  v4 = *(this + 88) != 0;
  v5 = v2 | 7;
  *(msgResult + 4) = v2 | 7;
  *(msgResult + 32) = v4;
  if ( (*(this + 30) & 4) != 0 )
  {
    v6 = *(this + 351);
    v5 = v2 | 0xF;
    *(msgResult + 4) = v2 | 0xF;
    *(msgResult + 33) = v6;
  }
  v7 = *(this + 100) > 63;
  *(msgResult + 4) = v5 | 0x10;
  *(msgResult + 34) = v7;
  v8 = *(this + 448);
  *(msgResult + 4) = v5 | 0x30;
  *(msgResult + 35) = v8;
  v9 = g_pGameRules;
  if ( g_pGameRules != 0 )
  {
    v10 = *&g_pGameRules[6].m_szQuestName[28];
    *(msgResult + 4) = v5 | 0x32;
    *(msgResult + 7) = v10;
    v11 = v9[61].m_szQuestName[114] ^ 1;
    if ( v11 != 0 || (v5 & 8) == 0 )
    {
      *(msgResult + 33) = v11;
      *(msgResult + 4) = v5 | 0x3A;
    }
    if ( byte_4C4A558 != 0 )
    {
      *(msgResult + 4) |= 0x20u;
      *(msgResult + 35) = 1;
    }
  }
  if ( g_pDOTAPlayerResource != 0 && *(g_pDOTAPlayerResource + 17484) != 0 )
  {
    *(msgResult + 4) |= 4u;
    *(msgResult + 32) = 1;
  }
}


// CDOTALobby::GetLeaverActionsForCurrentState  (line 1036, @0x00000000029a3110, libserver.so)
// calls: CMsgLeaverState::CMsgLeaverState, CDOTALobby::GetCurrentLeaverState, CDOTALobby::GetLeaverActions, CMsgLeaverState::~CMsgLeaverState
// callers: CDOTAGamerules::OnLobbyUpdated
uint32 __fastcall CDOTALobby::GetLeaverActionsForCurrentState(const CDOTALobby *const this)
{
  _BYTE v3[64]; // [rsp+0h] [rbp-40h] BYREF

  CMsgLeaverState::CMsgLeaverState(v3);
  CDOTALobby::GetCurrentLeaverState(this, v3);
  LODWORD(this) = CDOTALobby::GetLeaverActions(*(this + 38), *(this + 32), *(this + 350), v3);
  CMsgLeaverState::~CMsgLeaverState(v3);
  return this;
}


// CDOTALobby::BPlayersAllowedToLeave  (line 1048, @0x0000000002996b70, libserver.so)
bool __fastcall CDOTALobby::BPlayersAllowedToLeave(const CDOTALobby *const this)
{
  bool result; // al

  result = 1;
  if ( *(this + 38) == 9 )
    return *(this + 33) == 3;
  return result;
}


// CDOTALobby::BKickingAllowed  (line 1075, @0x0000000002991270, libserver.so)
bool __fastcall CDOTALobby::BKickingAllowed(const CDOTALobby *const this)
{
  bool result; // al
  int v2; // edx

  result = 0;
  if ( *(this + 33) == 0 )
  {
    v2 = *(this + 38);
    result = 1;
    if ( (v2 - 1) > 1 )
      return v2 == 11;
  }
  return result;
}


// CDOTALobby::CalculateLeaverActionsForMember  (line 1094, @0x0000000002996ba0, libserver.so)  // inlines: IsMemberACoach
// calls: CDOTALobby::GetLeaverActions
// callers: CDOTAGamerules::NotifyLeaverStatus, CDOTA_PlayerResource::SetLeaverStatus, CDOTAGCServerSystem::CheckUpdateConnectedPlayers, CDOTALobby::GetLeaverActionsForMember
uint32 __fastcall CDOTALobby::CalculateLeaverActionsForMember(
        const CDOTALobby *const this,
        const CDOTALobbyMember *pMember,
        const CMsgLeaverState *const msgLeaverState)
{
  uint32 LeaverActions; // eax
  uint32 v6; // r14d
  int i; // r12d
  __int64 v8; // rax
  int v10; // eax

  LeaverActions = CDOTALobby::GetLeaverActions(*(this + 38), *(this + 32), *(this + 350), msgLeaverState);
  v6 = LeaverActions;
  if ( pMember != 0 && (*(pMember + 18) & 1) != 0 )
  {
    v10 = LeaverActions & 1;
    if ( *(pMember + 31) != 5 )
      v6 = v10;
  }
  if ( (v6 & 0xA0) == 0 || *(pMember + 6) == 0 )
    return v6;
  for ( i = 0; i < (*(*this + 96LL))(this); ++i )
  {
    v8 = (*(*this + 136LL))(this, i);
    if ( *(v8 + 48) == *(pMember + 6) && ((*(v8 + 18) & 1) == 0 || *(v8 + 124) == 5) && *(v8 + 24) != *(pMember + 3) )
      return v6;
  }
  LOBYTE(v6) = v6 & 0x5F;
  return v6;
}


// CDOTALobby::GetLeaverActionsForMember  (line 1130, @0x00000000029a3170, libserver.so)
// calls: CDOTALobby::FindFullMemberDetails, CMsgLeaverState::CMsgLeaverState, CDOTALobby::GetCurrentLeaverState, CDOTALobby::CalculateLeaverActionsForMember, CMsgLeaverState::~CMsgLeaverState, _Unwind_Resume
// callers: CDOTAGamerules::NotifyLeaverStatus
uint32 __fastcall CDOTALobby::GetLeaverActionsForMember(const CDOTALobby *const this, CSteamID player)
{
  const CDOTALobbyMember *FullMemberDetails; // rax
  const CDOTALobbyMember *v4; // rbx
  uint32 v6; // [rsp+Ch] [rbp-54h]
  _BYTE v7[80]; // [rsp+10h] [rbp-50h] BYREF

  FullMemberDetails = CDOTALobby::FindFullMemberDetails(this, player.m_steamid.m_unAll64Bits);
  v4 = FullMemberDetails;
  if ( FullMemberDetails != 0 && (*(FullMemberDetails + 17) & 4) != 0 )
    return *(FullMemberDetails + 19);
  CMsgLeaverState::CMsgLeaverState(v7);
  CDOTALobby::GetCurrentLeaverState(this, v7);
  v6 = CDOTALobby::CalculateLeaverActionsForMember(this, v4, v7);
  CMsgLeaverState::~CMsgLeaverState(v7);
  return v6;
}


// BDoIndividualEloUpdateForLobbyType  (line 1154, @0x0000000002996c70, libserver.so)
bool __fastcall BDoIndividualEloUpdateForLobbyType(CSODOTALobby_LobbyType eLobbyType)
{
  bool result; // al

  result = 0;
  if ( eLobbyType <= CSODOTALobby_LobbyType::CSODOTALobby_LobbyType_COMPETITIVE_MATCH )
    return ((1LL << eLobbyType) & 0xE1) != 0;
  return result;
}


// CDOTALobby::IsMatchmadeLobbyType  (line 1181, @0x0000000002996c90, libserver.so)
// callers: CDOTAGamerules::UpdateAndDisplayPlayerBoosterState, CDOTAGamerules::AutoAssignCaptains, CDOTAGamerules::BroadcastItemDropBonusStatus, CDOTA_OGS::IsMatchLobby
bool __fastcall CDOTALobby::IsMatchmadeLobbyType(const CDOTALobby *const this)
{
  unsigned int v1; // ecx
  bool result; // al

  v1 = *(this + 38);
  result = 0;
  if ( v1 <= 9 )
    return ((1LL << v1) & 0x3F1) != 0;
  return result;
}


// CDOTALobby::ContributesToBehaviorScore  (line 1205, @0x0000000002996cc0, libserver.so)
bool __fastcall CDOTALobby::ContributesToBehaviorScore(const CDOTALobby *const this)
{
  unsigned int v1; // ecx
  bool result; // al

  v1 = *(this + 38);
  result = 0;
  if ( v1 <= 9 )
    return ((1LL << v1) & 0x2F1) != 0;
  return result;
}


// CDOTALobby::GetServerID  (line 1229, @0x0000000002996cf0, libserver.so)
CSteamID __fastcall CDOTALobby::GetServerID(const CDOTALobby *const this)
{
  CSteamID result; // rax

  if ( (*(this + 24) & 0x10) == 0 )
    return 0;
  result.m_steamid.m_comp = *(this + 13);
  if ( result.m_steamid.m_comp == 0 )
    return 0;
  return result;
}


// CDOTALobby::IsCompetitiveMatchWithAtLeastOneTeamID  (line 1238, @0x0000000002996d10, libserver.so)
bool __fastcall CDOTALobby::IsCompetitiveMatchWithAtLeastOneTeamID(const CDOTALobby *const this)
{
  bool result; // al
  int v2; // edx
  __int64 *v3; // rax
  __int64 *v4; // rax
  __int64 *v5; // rcx
  __int64 v6; // rdx

  result = 0;
  if ( *(this + 38) == 7 )
  {
    v2 = *(this + 42);
    if ( v2 > 0 )
    {
      v3 = *(this + 20);
      if ( *(*v3 + 64) != 0 )
      {
        return 1;
      }
      else
      {
        v4 = v3 + 1;
        v5 = &v4[v2 - 1];
        while ( v4 != v5 )
        {
          v6 = *v4++;
          if ( *(v6 + 64) != 0 )
            return 1;
        }
        return 0;
      }
    }
  }
  return result;
}


// CDOTALobby::GetBotDifficulty  (line 1252, @0x0000000002996d80, libserver.so)  // inlines: bot_difficulty_dire, bot_difficulty_radiant
// callers: PostCreateDemoPlayerCallback, CDOTAGamerules::State_Enter_GAME_IN_PROGRESS, CDOTA_TeamCommander::GetRequestedBotDifficulty, CDOTA_TeamCommander::UpdateHeroSelections
DOTABotDifficulty __fastcall CDOTALobby::GetBotDifficulty(const CDOTALobby *const this, DOTATeam_t eTeam)
{
  if ( eTeam == DOTATeam_t::DOTA_TEAM_FIRST )
    return *(this + 56);
  if ( eTeam == DOTATeam_t::DOTA_TEAM_BADGUYS )
    return *(this + 131);
  return DOTABotDifficulty::BOT_DIFFICULTY_INVALID;
}


// CDOTALobby::GetBotScript  (line 1263, @0x0000000002996dc0, libserver.so)
// callers: CDOTA_TeamCommander::InitScripting
uint64 __fastcall CDOTALobby::GetBotScript(const CDOTALobby *const this, DOTATeam_t eTeam)
{
  if ( eTeam == DOTATeam_t::DOTA_TEAM_FIRST )
    return *(this + 66);
  if ( eTeam == DOTATeam_t::DOTA_TEAM_BADGUYS )
    return *(this + 67);
  return 0;
}


// CDOTALobby::IsIngameEventActive  (line 1275, @0x0000000002996e00, libserver.so)  // inlines: active_ingame_events
// callers: CDOTA_BaseNPC_Hero::EvaluateEventsForKill
bool __fastcall CDOTALobby::IsIngameEventActive(const CDOTALobby *const this, EEvent nEvent)
{
  int v2; // edx
  _DWORD *v3; // rax
  int *v4; // rax
  int *v5; // rcx
  int v6; // edx

  v2 = *(this + 104);
  if ( v2 <= 0 )
    return 0;
  v3 = *(this + 51);
  if ( nEvent != *v3 )
  {
    v4 = v3 + 1;
    v5 = &v4[v2 - 1];
    while ( v4 != v5 )
    {
      v6 = *v4++;
      if ( nEvent == v6 )
        return 1;
    }
    return 0;
  }
  return 1;
}


// CDOTALobby::GetActiveIngameEventCount  (line 1285, @0x0000000002996e50, libserver.so)
// callers: CDOTAGamerules::State_Enter_WAIT_FOR_PLAYERS_TO_LOAD, UpdateEventPoints
uint32 __fastcall CDOTALobby::GetActiveIngameEventCount(const CDOTALobby *const this)
{
  return *(this + 104);
}


// CDOTALobby::GetActiveIngameEvent  (line 1290, @0x0000000002996e60, libserver.so)  // inlines: Get, active_ingame_events
// callers: CDOTAGamerules::State_Enter_WAIT_FOR_PLAYERS_TO_LOAD, UpdateEventPoints
EEvent __fastcall CDOTALobby::GetActiveIngameEvent(const CDOTALobby *const this, uint32 unIndex)
{
  return *(*(this + 51) + 4LL * unIndex);
}


// CDOTALobby::GetTVDelayEnum  (line 1295, @0x0000000002996e80, libserver.so)
LobbyDotaTVDelay __fastcall CDOTALobby::GetTVDelayEnum(const CDOTALobby *const this)
{
  return *(this + 75);
}


// CDOTALobby::GetPauseSetting  (line 1300, @0x0000000002996e90, libserver.so)
// callers: CDOTAGamerules::ClientMsg_Pause, CDOTAGamerules::Think
LobbyDotaPauseSetting __fastcall CDOTALobby::GetPauseSetting(const CDOTALobby *const this)
{
  return *(this + 126);
}


// CDOTALobby::GetTVDelay  (line 1305, @0x0000000002996ea0, libserver.so)
// callers: CDOTAInGamePredictionGameSystem::SelectInGamePredictions
float __fastcall CDOTALobby::GetTVDelay(const CDOTALobby *const this)
{
  int v1; // eax
  float result; // xmm0_4

  v1 = *(this + 75);
  if ( v1 == 0 )
    return 10.0;
  result = 300.0;
  if ( v1 != 2 )
    return 120.0;
  return result;
}


// CDOTALobby::FindChannelInfoByID  (line 1320, @0x0000000002996ee0, libserver.so)  // inlines: Get, Get<google::protobuf::RepeatedPtrField<CLobbyBroadcastChannelInfo>::TypeHandler>, broadcast_channel_info
int32 __fastcall CDOTALobby::FindChannelInfoByID(const CDOTALobby *const this, uint32 unChannelID)
{
  int32 result; // eax
  int v3; // ecx
  __int64 v4; // rdi

  result = -1;
  v3 = *(this + 82);
  if ( v3 != 0 )
  {
    v4 = *(this + 40);
    result = 0;
    if ( *(*v4 + 48LL) != unChannelID )
    {
      while ( v3 != ++result )
      {
        if ( *(*(v4 + 8LL * result) + 48LL) == unChannelID )
          return result;
      }
      return -1;
    }
  }
  return result;
}


// CDOTALobby::FindBroadcastChannelInfo  (line 1332, @0x0000000002996f30, libserver.so)  // inlines: FindChannelInfoByID, Get, Get<google::protobuf::RepeatedPtrField<CLobbyBroadcastChannelInfo>::TypeHandler>, broadcast_channel_info
// callers: CDOTA_PlayerResource::InitBroadcasterChannelsWithLobby
const CLobbyBroadcastChannelInfo *__fastcall CDOTALobby::FindBroadcastChannelInfo(
        const CDOTALobby *const this,
        uint32 nChannelID)
{
  int v2; // ecx
  __int64 v3; // rdi
  const CLobbyBroadcastChannelInfo *result; // rax
  int v5; // edx

  v2 = *(this + 82);
  if ( v2 != 0 )
  {
    v3 = *(this + 40);
    result = *v3;
    if ( nChannelID == *(*v3 + 48LL) )
      return result;
    v5 = 0;
    while ( v2 != ++v5 )
    {
      result = *(v3 + 8LL * v5);
      if ( nChannelID == *(result + 12) )
      {
        if ( v5 < 0 )
          return 0;
        return result;
      }
    }
  }
  return 0;
}


// CDOTALobby::GetNumBroadcastChannelInfos  (line 1340, @0x0000000002996f80, libserver.so)
uint32 __fastcall CDOTALobby::GetNumBroadcastChannelInfos(const CDOTALobby *const this)
{
  return *(this + 82);
}


// CDOTALobby::ParseSaveGameInstance  (line 1378, @0x0000000002996f90, libserver.so)  // inlines: Add, Add<google::protobuf::RepeatedPtrField<CDOTASaveGame_SaveInstance_PlayerPositions>::TypeHandler>, GCUTIL_StringToFloatArray, New, V_strncpy<long unsigned int>, add_player_positions, atof, set_game_time, set_has_game_time, set_has_save_time, set_has_team1_score, set_has_team2_score, set_has_x, set_has_y, set_save_time, set_team1_score, set_team2_score, set_x, set_y
// calls: KeyValues::GetInt, KeyValues::FindKey, KeyValues::GetFirstSubKey, operator new, CDOTASaveGame_SaveInstance_PlayerPositions::CDOTASaveGame_SaveInstance_PlayerPositions, KeyValues::GetString, _V_strncpy, strtod, KeyValues::GetNextKey, google::protobuf::internal::RepeatedPtrFieldBase::Reserve(int), operator delete, _Unwind_Resume (13 total)
// callers: CDOTALobby::ParseSaveGame
// strings: "dotatime", "savetime", "dire_deaths", "radiant_deaths", "0 0 0", "m_vecOrigin"
bool __fastcall CDOTALobby::ParseSaveGameInstance(
        KeyValues *pSaveGameKV,
        CDOTASaveGame_SaveInstance *pSaveGameInstance)
{
  int Int; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  KeyValues *Key; // rax
  __int64 v10; // rdx
  int v11; // eax
  CDOTASaveGame_SaveInstance_PlayerPositions *v12; // r14
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r14
  const char *String; // rax
  const char *v17; // r15
  __m128d v18; // xmm0
  char v19; // dl
  int v20; // eax
  int v21; // edx
  float *v22; // rax
  float *v23; // rdx
  __int64 v24; // rax
  CDOTASaveGame_SaveInstance_PlayerPositions *v25; // [rsp+20h] [rbp-E0h]
  KeyValues *pHero; // [rsp+28h] [rbp-D8h]
  float flVec[4]; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v28[136]; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v29; // [rsp+C8h] [rbp-38h]

  v29 = __readfsqword(0x28u);
  if ( pSaveGameInstance == 0 || pSaveGameKV == 0 )
    return 0;
  Int = KeyValues::GetInt(pSaveGameKV, "dotatime", 0);
  *(pSaveGameInstance + 4) |= 1u;
  *(pSaveGameInstance + 6) = Int;
  v6 = KeyValues::GetInt(pSaveGameKV, "savetime", 0);
  *(pSaveGameInstance + 4) |= 0x20u;
  *(pSaveGameInstance + 16) = v6;
  v7 = KeyValues::GetInt(pSaveGameKV, "dire_deaths", 0);
  *(pSaveGameInstance + 4) |= 2u;
  *(pSaveGameInstance + 7) = v7;
  v8 = KeyValues::GetInt(pSaveGameKV, "radiant_deaths", 0);
  *(pSaveGameInstance + 4) |= 4u;
  *(pSaveGameInstance + 14) = v8;
  Key = KeyValues::FindKey(pSaveGameKV, "Heroes", 0);
  if ( Key != 0 )
  {
    for ( pHero = KeyValues::GetFirstSubKey(Key); pHero != 0; pHero = KeyValues::GetNextKey(pHero) )
    {
      v10 = *(pSaveGameInstance + 10);
      v11 = *(pSaveGameInstance + 11);
      if ( v10 < v11 )
      {
        v24 = *(pSaveGameInstance + 4);
        *(pSaveGameInstance + 10) = v10 + 1;
        v25 = *(v24 + 8 * v10);
      }
      else
      {
        if ( v11 == *(pSaveGameInstance + 12) )
          google::protobuf::internal::RepeatedPtrFieldBase::Reserve((pSaveGameInstance + 32), v11 + 1);
        v12 = operator new(0x20u);
        CDOTASaveGame_SaveInstance_PlayerPositions::CDOTASaveGame_SaveInstance_PlayerPositions(v12);
        v13 = *(pSaveGameInstance + 10);
        v25 = v12;
        v14 = *(pSaveGameInstance + 4);
        ++*(pSaveGameInstance + 11);
        *(pSaveGameInstance + 10) = v13 + 1;
        *(v14 + 8 * v13) = v12;
      }
      v15 = 0;
      String = KeyValues::GetString(pHero, "m_vecOrigin", "0 0 0", 0, 0);
      v17 = v28;
      _V_strncpy(v28, String, 128);
      while ( 1 )
      {
        v18.m128d_f64[0] = strtod(v17, 0);
        flVec[v15] = _mm_movedup_pd(v18).m128d_f64[0];
        v19 = *v17;
        if ( *v17 <= 32 )
        {
          while ( v19 != 0 )
          {
            v19 = *++v17;
            if ( *v17 > 32 )
              goto LABEL_17;
          }
        }
        else
        {
LABEL_17:
          while ( v19 > 32 )
            v19 = *++v17;
        }
        if ( v19 == 0 )
          break;
        ++v15;
        ++v17;
        if ( v15 == 3 )
          goto LABEL_20;
      }
      v21 = v15 + 1;
      if ( v15 != 2 )
      {
        v22 = &flVec[v21];
        v23 = &flVec[(1 - v15) + 1 + v21];
        do
          *v22++ = 0.0;
        while ( v22 != v23 );
      }
LABEL_20:
      v20 = *(v25 + 4);
      *(v25 + 6) = flVec[0];
      *(v25 + 7) = flVec[1];
      *(v25 + 4) = v20 | 3;
    }
  }
  return 1;
}


// CDOTALobby::ParseSaveGame  (line 1415, @0x0000000002997290, libserver.so)  // inlines: Add, Add<google::protobuf::RepeatedPtrField<CDOTASaveGame_Player>::TypeHandler>, Add<google::protobuf::RepeatedPtrField<CDOTASaveGame_SaveInstance>::TypeHandler>, New, StringAfterPrefix<char const>, add_players, add_save_instances, assign, length, set_has_hero, set_has_match_id, set_has_name, set_has_save_time, set_has_team, set_hero, set_match_id, set_name, set_save_time, set_team
// calls: KeyValues::GetUint64, KeyValues::FindKey, KeyValues::GetFirstSubKey, operator new, CDOTASaveGame_Player::CDOTASaveGame_Player, KeyValues::GetInt, KeyValues::GetString, strlen, std::string::assign(char const*,ulong), _V_StringAfterPrefix, KeyValues::GetNextKey, CDOTASaveGame_SaveInstance::CDOTASaveGame_SaveInstance (16 total)
// strings: "matchid", "npc_dota_hero_"
bool __fastcall CDOTALobby::ParseSaveGame(KeyValues *pSaveGameKV, CDOTASaveGame *pSaveGame, bool includeInstance)
{
  uint64 Uint64; // rax
  KeyValues *Key; // rax
  KeyValues *i; // r12
  std::string **v8; // r13
  __int64 v9; // rax
  __int64 v10; // rdx
  int Int; // eax
  const char *String; // rax
  const char *v13; // r15
  size_t v14; // rax
  const char *v15; // rax
  const char *v16; // rax
  const char *v17; // r15
  size_t v18; // rax
  __int64 v19; // rax
  int v20; // esi
  __int64 v21; // rdx
  bool result; // al
  __int64 v23; // rax
  int v24; // edx
  CDOTASaveGame_SaveInstance *v25; // r12
  __int64 v26; // rax
  __int64 v27; // rdx
  int v28; // edx
  __int64 v29; // rdx

  if ( pSaveGame == 0 )
    return 0;
  Uint64 = KeyValues::GetUint64(pSaveGameKV, "matchid", 0);
  *(pSaveGame + 4) |= 1u;
  *(pSaveGame + 3) = Uint64;
  Key = KeyValues::FindKey(pSaveGameKV, "Players", 0);
  if ( Key != 0 )
  {
    for ( i = KeyValues::GetFirstSubKey(Key); i != 0; i = KeyValues::GetNextKey(i) )
    {
      v19 = *(pSaveGame + 10);
      v20 = *(pSaveGame + 11);
      if ( v19 >= v20 )
      {
        if ( v20 == *(pSaveGame + 12) )
          google::protobuf::internal::RepeatedPtrFieldBase::Reserve((pSaveGame + 32), v20 + 1);
        v8 = operator new(0x30u);
        CDOTASaveGame_Player::CDOTASaveGame_Player(v8);
        v9 = *(pSaveGame + 10);
        v10 = *(pSaveGame + 4);
        ++*(pSaveGame + 11);
        *(pSaveGame + 10) = v9 + 1;
        *(v10 + 8 * v9) = v8;
      }
      else
      {
        v21 = *(pSaveGame + 4);
        *(pSaveGame + 10) = v19 + 1;
        v8 = *(v21 + 8 * v19);
      }
      Int = KeyValues::GetInt(i, "team", 0);
      *(v8 + 4) |= 1u;
      *(v8 + 10) = Int != 2;
      String = KeyValues::GetString(i, "name", "", 0, 0);
      *(v8 + 4) |= 2u;
      v13 = String;
      v14 = strlen(String);
      std::string::assign(v8[3], v13, v14);
      v15 = KeyValues::GetString(i, "hero", "", 0, 0);
      v16 = _V_StringAfterPrefix(v15, "npc_dota_hero_");
      v17 = v16;
      if ( v16 != 0 )
      {
        *(v8 + 4) |= 4u;
        v18 = strlen(v16);
        std::string::assign(v8[4], v17, v18);
      }
    }
  }
  result = 1;
  if ( includeInstance )
  {
    v23 = *(pSaveGame + 16);
    v24 = *(pSaveGame + 17);
    if ( v23 < v24 )
    {
      v29 = *(pSaveGame + 7);
      *(pSaveGame + 16) = v23 + 1;
      v25 = *(v29 + 8 * v23);
    }
    else
    {
      if ( v24 == *(pSaveGame + 18) )
        google::protobuf::internal::RepeatedPtrFieldBase::Reserve((pSaveGame + 56), v24 + 1);
      v25 = operator new(0x48u);
      CDOTASaveGame_SaveInstance::CDOTASaveGame_SaveInstance(v25);
      v26 = *(pSaveGame + 16);
      v27 = *(pSaveGame + 7);
      ++*(pSaveGame + 17);
      *(pSaveGame + 16) = v26 + 1;
      *(v27 + 8 * v26) = v25;
    }
    result = CDOTALobby::ParseSaveGameInstance(pSaveGameKV, v25);
    if ( result )
    {
      v28 = *(v25 + 16);
      *(pSaveGame + 4) |= 2u;
      *(pSaveGame + 20) = v28;
      return result;
    }
    return 0;
  }
  return result;
}


// CDOTALobby::HasSaveGame  (line 1462, @0x0000000002997530, libserver.so)  // inlines: has_save_game
// callers: CDOTAGamerules::State_Think_WAIT_FOR_PLAYERS_TO_LOAD
bool __fastcall CDOTALobby::HasSaveGame(const CDOTALobby *const this)
{
  return (*(this + 7) & 0x20000) != 0;
}


// CDOTALobby::BLobbyTypeAllowOverrideVPK  (line 1471, @0x0000000002997540, libserver.so)
// callers: CDOTAGamerules::OnLobbyUpdated
bool __fastcall CDOTALobby::BLobbyTypeAllowOverrideVPK(const CDOTALobby *const this)
{
  bool result; // al
  unsigned int v2; // ecx

  result = 0;
  v2 = *(this + 38) - 1;
  if ( v2 <= 0xA )
    return ((1LL << v2) & 0x601) != 0;
  return result;
}


// CDOTALobby::GetSaveGame  (line 1483, @0x0000000002997570, libserver.so)  // inlines: save_game
const CDOTASaveGame *__fastcall CDOTALobby::GetSaveGame(const CDOTALobby *const this)
{
  const CDOTASaveGame *result; // rax

  result = *(this + 48);
  if ( result == 0 )
    return *&CSODOTALobby::default_instance_[2].extension_range_count_;
  return result;
}


// CDOTALobby::BMVPVotingActive  (line 1491, @0x00000000029975a0, libserver.so)
bool __fastcall CDOTALobby::BMVPVotingActive(const CDOTALobby *const this)
{
  bool result; // al

  result = 0;
  if ( *(this + 33) == 3 && (*(this + 100) - 2) <= 1 )
    return *(this + 127) == 0;
  return result;
}


// CDOTALobby::BMemberCanSubmitMVPVote  (line 1510, @0x0000000002997650, libserver.so)  // inlines: BMVPVotingActive, GetMatchOutcome, match_outcome, team
// calls: CDOTALobby::FindFullMemberDetails, CDOTALobby::BHasMemberSubmittedLobbyMVPVote
bool __fastcall CDOTALobby::BMemberCanSubmitMVPVote(const CDOTALobby *const this, const CSteamID *const steamID)
{
  int v4; // r14d
  const CDOTALobbyMember *FullMemberDetails; // rax
  int v7; // eax

  if ( *(this + 33) != 3 )
    return 0;
  v4 = *(this + 100);
  if ( (v4 - 2) > 1 )
    return 0;
  if ( *(this + 127) != 0 )
    return 0;
  FullMemberDetails = CDOTALobby::FindFullMemberDetails(this, steamID->m_steamid.m_unAll64Bits);
  if ( FullMemberDetails == 0 )
    return 0;
  v7 = *(FullMemberDetails + 9);
  if ( v7 != 0 )
  {
    if ( v7 == 1 && v4 != 2 )
      return !CDOTALobby::BHasMemberSubmittedLobbyMVPVote(this, steamID);
    return 0;
  }
  if ( v4 == 3 )
    return 0;
  return !CDOTALobby::BHasMemberSubmittedLobbyMVPVote(this, steamID);
}


// CDOTALobby::BHasAwardedLobbyMVP  (line 1539, @0x00000000029975e0, libserver.so)
bool __fastcall CDOTALobby::BHasAwardedLobbyMVP(const CDOTALobby *const this)
{
  return *(this + 127) != 0;
}


// CDOTALobby::BHasMemberSubmittedLobbyMVPVote  (line 1544, @0x0000000002997600, libserver.so)
// callers: CDOTALobby::BMemberCanSubmitMVPVote
bool __fastcall CDOTALobby::BHasMemberSubmittedLobbyMVPVote(
        const CDOTALobby *const this,
        const CSteamID *const submitterSteamID)
{
  unsigned int v3; // eax
  __int64 v4; // rax

  v3 = (*(*this + 112LL))(this, submitterSteamID);
  return v3 != -1 && (v4 = (*(*this + 136LL))(this, v3)) != 0 && *(v4 + 188) != 0;
}


// CDOTALobby::GetNumMVPVotesForPlayer  (line 1557, @0x00000000029976e0, libserver.so)  // inlines: BIndividualAccount, Get, Get<google::protobuf::RepeatedPtrField<CDOTALobbyMember>::TypeHandler>, GetAccountID, GetFullMemberDetails, IsValid, left_members, members
int __fastcall CDOTALobby::GetNumMVPVotesForPlayer(const CDOTALobby *const this, const CSteamID *const steamID)
{
  int result; // eax
  unsigned __int8 v3; // dl
  int v4; // r8d
  int m_comp; // r10d
  int v6; // edx
  int v7; // esi
  __int64 v8; // rcx

  result = 0;
  v3 = BYTE6(steamID->m_steamid.m_unAll64Bits);
  if ( (v3 & 0xF0) != 0 && v3 <= 0xAFu && (HIBYTE(steamID->m_steamid.m_unAll64Bits) - 1) <= 3u )
  {
    if ( (BYTE6(steamID->m_steamid.m_unAll64Bits) & 0xF0) == 0x10 )
    {
      if ( steamID->m_steamid.m_comp == 0 || (WORD2(steamID->m_steamid.m_unAll64Bits) | ((v3 & 0xF) << 16)) > 4u )
        return result;
    }
    else if ( (v3 & 0xB0) == 0x30 )
    {
      return result;
    }
    result = 0;
    if ( (v3 & 0x70) == 0x10 )
    {
      v4 = *(this + 14);
      m_comp = steamID->m_steamid.m_comp;
      result = v4 + *(this + 20);
      if ( result != 0 )
      {
        v6 = 0;
        v7 = 0;
        while ( v4 <= v6 )
        {
          if ( v6 - v4 < *(this + 20) )
          {
            v8 = *(*(this + 9) + 8LL * (v6 - v4));
LABEL_10:
            if ( v8 != 0 )
              v7 += *(v8 + 188) == m_comp;
          }
          if ( result == ++v6 )
            return v7;
        }
        v8 = *(*(this + 6) + 8LL * v6);
        goto LABEL_10;
      }
    }
  }
  return result;
}


// CDOTALobby::HasPlayersPartyForfeitedMatch  (line 1729, @0x00000000029977d0, libserver.so)  // inlines: Get, Get<google::protobuf::RepeatedPtrField<CDOTALobbyMember>::TypeHandler>, GetLeftMemberDetails, GetMemberPartyID, left_members
// calls: CDOTALobby::FindFullMemberDetails
bool __fastcall CDOTALobby::HasPlayersPartyForfeitedMatch(const CDOTALobby *const this, const CSteamID *const steamID)
{
  const CDOTALobbyMember *FullMemberDetails; // rax
  __int64 v4; // rcx
  bool result; // al
  int v6; // esi
  __int64 v7; // rax
  __int64 v8; // rdx

  FullMemberDetails = CDOTALobby::FindFullMemberDetails(this, steamID->m_steamid.m_unAll64Bits);
  if ( FullMemberDetails == 0 )
    return 0;
  v4 = *(FullMemberDetails + 6);
  result = 0;
  if ( v4 != 0 )
  {
    v6 = *(this + 20);
    if ( v6 > 0 )
    {
      v7 = 0;
      while ( 1 )
      {
        v8 = *(*(this + 9) + 8 * v7);
        if ( *(v8 + 48) == v4 && (*(v8 + 72) & 0x20) != 0 )
          break;
        if ( v6 <= ++v7 )
          return 0;
      }
      return 1;
    }
  }
  return result;
}


// CDOTALobbyInvite::GetMember  (line 1747, @0x0000000002997840, libserver.so)  // inlines: Get, Get<google::protobuf::RepeatedPtrField<CSODOTALobbyInvite_LobbyMember>::TypeHandler>, members
CSteamID __fastcall CDOTALobbyInvite::GetMember(const CDOTALobbyInvite *const this, int i)
{
  if ( i >= 0 && i < *(this + 16) )
    return *(*(*(this + 7) + 8LL * i) + 32LL);
  else
    return 0;
}


// CDOTALobbyInvite::GetMemberName  (line 1756, @0x0000000002997870, libserver.so)  // inlines: Get, Get<google::protobuf::RepeatedPtrField<CSODOTALobbyInvite_LobbyMember>::TypeHandler>, _M_data, c_str, members
// strings: "Unknown"
const char *__fastcall CDOTALobbyInvite::GetMemberName(const CDOTALobbyInvite *const this, int i)
{
  const char *result; // rax

  result = "Unknown";
  if ( i >= 0 && i < *(this + 16) )
    return **(*(*(this + 7) + 8LL * i) + 24LL);
  return result;
}


// CDOTALobby::CheckCustomGameVersion  (line 1765, @0x00000000029978b0, libserver.so)
// calls: Warning
// strings: "Custom game %llu timestamp %u CRC mismatch!  Lobby has %016llX, client invite has %016llX
bool __fastcall CDOTALobby::CheckCustomGameVersion(const CDOTALobby *const this, uint32 nTimestamp, uint64 ulCRC)
{
  int v3; // r9d
  bool result; // al
  __int64 v5; // rcx

  v3 = *(this + 115);
  if ( v3 != 0 )
  {
    if ( nTimestamp != 0 )
    {
      result = 0;
      if ( nTimestamp != v3 )
        return result;
      LOBYTE(nTimestamp) = 1;
    }
  }
  else
  {
    LOBYTE(nTimestamp) = 0;
  }
  v5 = *(this + 55);
  result = 1;
  if ( v5 != 0 && ulCRC != 0 && ulCRC != v5 )
  {
    if ( nTimestamp != 0 )
      Warning(
        "Custom game %llu timestamp %u CRC mismatch!  Lobby has %016llX, client invite has %016llX\n",
        *(this + 49),
        v3,
        v5,
        ulCRC);
    return 0;
  }
  return result;
}


