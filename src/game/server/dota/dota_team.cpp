// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/dota_team.cpp:24
class C_CDOTATeam_MapInstall {
	C_CDOTATeam_MapInstall();

	// sizeof = 1
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTATeam::YouForgotToImplementOrDeclareServerClass  (line 24, @0x00000000026bd040, libserver.so)
int __fastcall CDOTATeam::YouForgotToImplementOrDeclareServerClass(CDOTATeam *const this)
{
  return 0;
}


// CDOTATeam::GetServerClass  (line 24, @0x00000000026ccac0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTATeam::GetServerClass(CDOTATeam *const this)
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


// CDOTATeam::CDOTATeam  (line 42, @0x00000000026f5410, libserver.so)  // inlines: CGameEventListener, CNetworkColorBase, CNetworkVarBase, Color, EnsureValidValue<bool>, EnsureValidValue<int>, EnsureValidValue<long long unsigned int>, EnsureValidValue<unsigned int>, GetForModify, Init, ListenForGameEvent, NetworkStateChanged, Set, SetAlpha, SetBlue, SetComponent, SetGreen, SetRed, SetVal, StopListeningForAllEvents, memset, operator=<bool>, operator=<int>, ~CGameEventListener, ~IGameEventListener2
// calls: CTeam::CTeam, CountdownTimer::CountdownTimer, CGameEventListener::StopListeningForAllEvents, CTeam::~CTeam, _Unwind_Resume
// callers: CDOTATeam::CEntityInstanceEntityClass::ConstructInstance
void __fastcall CDOTATeam::CDOTATeam(CDOTATeam *const this)
{
  bool v2; // zf
  int (**vptr_IHandleEntity)(...); // rax
  IGameEventManager2 *v4; // rdi
  int v5; // eax
  int m_Value; // r13d
  int v7; // r12d
  unsigned int v8; // r11d

  CTeam::CTeam(this);
  this->m_CustomHealthbarColor = 0;
  v2 = this->m_CustomHealthbarColor.m_Value._color[1] == 0;
  this->_vptr_IHandleEntity = &off_42AB8F0;
  this->m_bRegisteredForEvents = 0;
  this->_vptr_IGameEventListener2 = off_42AC020;
  this->m_iHeroKills.m_Value = 0;
  this->m_iTowerKills.m_Value = 0;
  this->m_iBarracksKills.m_Value = 0;
  this->m_unTournamentTeamID.m_Value = 0;
  this->m_ulTeamLogo.m_Value = 0;
  this->m_ulTeamBaseLogo.m_Value = 0;
  this->m_ulTeamBannerLogo.m_Value = 0;
  this->m_bTeamComplete.m_Value = 0;
  this->m_bTeamIsHomeTeam.m_Value = 0;
  if ( !v2 )
  {
    CBaseEntity::NetworkStateChanged(this, 0x40Au, -1, -1);
    this->m_CustomHealthbarColor.m_Value._color[1] = 0;
  }
  if ( this->m_CustomHealthbarColor.m_Value._color[2] != 0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1034, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_CustomHealthbarColor.m_Value._color[2] = 0;
  }
  if ( this->m_CustomHealthbarColor.m_Value._color[3] != 0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1034, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_CustomHealthbarColor.m_Value._color[3] = 0;
  }
  CountdownTimer::CountdownTimer(&this->m_RecentHeroKillTimer);
  if ( this->m_iHeroKills.m_Value != 0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 988, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    m_Value = this->m_iTowerKills.m_Value;
    this->m_iHeroKills.m_Value = 0;
    if ( m_Value == 0 )
    {
LABEL_9:
      if ( this->m_iBarracksKills.m_Value == 0 )
        goto LABEL_10;
      goto LABEL_28;
    }
  }
  else if ( this->m_iTowerKills.m_Value == 0 )
  {
    goto LABEL_9;
  }
  (*(this->_vptr_IHandleEntity + 22))(this, 992, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
  v7 = this->m_iBarracksKills.m_Value;
  this->m_iTowerKills.m_Value = 0;
  if ( v7 == 0 )
  {
LABEL_10:
    if ( this->m_unTournamentTeamID.m_Value == 0 )
      goto LABEL_11;
    goto LABEL_29;
  }
LABEL_28:
  (*(this->_vptr_IHandleEntity + 22))(this, 996, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
  v8 = this->m_unTournamentTeamID.m_Value;
  this->m_iBarracksKills.m_Value = 0;
  if ( v8 == 0 )
  {
LABEL_11:
    if ( this->m_ulTeamLogo.m_Value == 0 )
      goto LABEL_12;
    goto LABEL_30;
  }
LABEL_29:
  (*(this->_vptr_IHandleEntity + 22))(this, 1000, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
  v2 = this->m_ulTeamLogo.m_Value == 0;
  this->m_unTournamentTeamID.m_Value = 0;
  if ( v2 )
  {
LABEL_12:
    if ( this->m_ulTeamBaseLogo.m_Value == 0 )
      goto LABEL_13;
    goto LABEL_31;
  }
LABEL_30:
  (*(this->_vptr_IHandleEntity + 22))(this, 1008, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
  v2 = this->m_ulTeamBaseLogo.m_Value == 0;
  this->m_ulTeamLogo.m_Value = 0;
  if ( v2 )
  {
LABEL_13:
    if ( this->m_ulTeamBannerLogo.m_Value == 0 )
      goto LABEL_14;
LABEL_32:
    (*(this->_vptr_IHandleEntity + 22))(this, 1024, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    v2 = !this->m_bTeamComplete.m_Value;
    this->m_ulTeamBannerLogo.m_Value = 0;
    if ( v2 )
      goto LABEL_15;
    goto LABEL_33;
  }
LABEL_31:
  (*(this->_vptr_IHandleEntity + 22))(this, 1016, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
  v2 = this->m_ulTeamBannerLogo.m_Value == 0;
  this->m_ulTeamBaseLogo.m_Value = 0;
  if ( !v2 )
    goto LABEL_32;
LABEL_14:
  if ( this->m_bTeamComplete.m_Value )
  {
LABEL_33:
    (*(this->_vptr_IHandleEntity + 22))(this, 1032, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bTeamComplete.m_Value = 0;
  }
LABEL_15:
  if ( this->m_bTeamIsHomeTeam.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1033, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bTeamIsHomeTeam.m_Value = 0;
  }
  vptr_IHandleEntity = this->_vptr_IHandleEntity;
  this->m_nKillStreak = 0;
  vptr_IHandleEntity[22](this, 1038, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
  *this->m_szTag.m_Value = 0;
  *&this->m_szTag.m_Value[8] = 0;
  *&this->m_szTag.m_Value[16] = 0;
  v4 = gameeventmanager;
  *&this->m_szTag.m_Value[24] = 0;
  this->m_szTag.m_Value[32] = 0;
  this->m_bRegisteredForEvents = 1;
  v5 = (*(v4->_vptr_IBaseInterface + 4))(v4, &this->CGameEventListener, "lobby_updated", 1);
  v2 = this->m_CustomHealthbarColor.m_Value._color[0] == 0;
  this->m_event_lobby_updated = v5;
  if ( !v2 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1034, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_CustomHealthbarColor.m_Value._color[0] = 0;
  }
  if ( this->m_CustomHealthbarColor.m_Value._color[1] != 0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1034, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_CustomHealthbarColor.m_Value._color[1] = 0;
  }
  if ( this->m_CustomHealthbarColor.m_Value._color[2] != 0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1034, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_CustomHealthbarColor.m_Value._color[2] = 0;
  }
  if ( this->m_CustomHealthbarColor.m_Value._color[3] != 0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1034, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_CustomHealthbarColor.m_Value._color[3] = 0;
  }
}


// CDOTATeam::ShouldTransmitToPlayer  (line 62, @0x00000000026bd740, libserver.so)  // inlines: CanBeSeenByTeam, GetParent, GetTeamNumber
// calls: CGameSceneNode::GetOwnerEntity, CBaseModelEntity::CanBeSeenByTeam
int __fastcall CDOTATeam::ShouldTransmitToPlayer(
        CDOTATeam *const this,
        const CGameCheckTransmitInfo *pInfo,
        CBaseEntity *pEntity)
{
  int result; // eax
  int m_nRecipientCoachedTeamNumber; // ebx
  CGameSceneNode *m_pParent; // rdi
  CBaseEntity *OwnerEntity; // rax
  CBaseModelEntity *v8; // r12

  result = 4;
  if ( !pInfo->m_bGameOverState )
  {
    m_nRecipientCoachedTeamNumber = pInfo->m_nRecipientCoachedTeamNumber;
    if ( m_nRecipientCoachedTeamNumber == 0 )
      m_nRecipientCoachedTeamNumber = this->m_iTeamNum.m_Value;
    if ( pEntity->m_iTeamNum.m_Value != m_nRecipientCoachedTeamNumber )
    {
      m_pParent = pEntity->m_pGameSceneNode->m_pParent;
      if ( m_pParent == 0
        || (OwnerEntity = CGameSceneNode::GetOwnerEntity(m_pParent), v8 = OwnerEntity, OwnerEntity == 0)
        || (*(OwnerEntity->_vptr_IHandleEntity + 153))(OwnerEntity) == 0 )
      {
        v8 = pEntity;
      }
      if ( v8->m_pCollision != 0 && !CBaseModelEntity::CanBeSeenByTeam(v8, m_nRecipientCoachedTeamNumber) )
        return 8;
      else
        return 4;
    }
  }
  return result;
}


// CDOTATeam::GetPlayerTeamSlot  (line 101, @0x00000000026f5950, libserver.so)  // inlines: entindex
// calls: CEntityInstance::GetEntityIndex
int __fastcall CDOTATeam::GetPlayerTeamSlot(CDOTATeam *const this, int iIndex)
{
  unsigned int v4; // ebx
  const CEntityInstance *v5; // rax

  v4 = 0;
  if ( this->m_aPlayers.m_Vector.m_Size <= 0 )
    return 1;
  while ( 1 )
  {
    v5 = (*(this->_vptr_IHandleEntity + 219))(this, v4);
    if ( iIndex == CEntityInstance::GetEntityIndex(v5).m_Data )
      break;
    if ( ++v4 >= this->m_aPlayers.m_Vector.m_Size )
      return 1;
  }
  return v4 + 1;
}


// CDOTATeam::IsTeamFull  (line 112, @0x00000000026f59c0, libserver.so)  // inlines: DOTAGameRules, GetGameMode, GetTeamNumber, IsAddOnGame
// calls: CDOTAGamerules::GetCustomGameTeamMaxPlayers
// callers: CDOTAGamerules::CreateDemoPlayers, CDOTAGamerules::FinalizeHeroSelections, CDOTAPlayer::ChangeTeam, DebugCreateUnit
bool __fastcall CDOTATeam::IsTeamFull(CDOTATeam *const this)
{
  bool result; // al
  int m_Value; // esi
  int v3; // eax

  result = 0;
  m_Value = this->m_iTeamNum.m_Value;
  if ( m_Value != 0 )
  {
    v3 = *&g_pGameRules[6].m_szQuestName[68];
    if ( v3 == 15 || v3 == 19 )
    {
      result = 0;
      if ( m_Value != 5 )
        return CDOTAGamerules::GetCustomGameTeamMaxPlayers(g_pGameRules, m_Value) <= this->m_aPlayers.m_Vector.m_Size;
    }
    else if ( m_Value == 1 )
    {
      return this->m_aPlayers.m_Vector.m_Size > 39;
    }
    else
    {
      result = 1;
      if ( (m_Value - 2) <= 1u )
        return this->m_aPlayers.m_Vector.m_Size > 4;
    }
  }
  return result;
}


// CDOTATeam::IncrementKillStreak  (line 150, @0x00000000026f5a60, libserver.so)  // inlines: CEntityHandle, GetAssignedHero, GetEntryIndex, GetFloat, GetHandleEntity, GetInstance, GetSerialNumber, IndexToIdentity, Init, IsElapsed, LookupEntity, NetworkStateChanged, Set, Start, ToDOTABaseNPC, ToDOTABaseNPCHero, ToDOTAPlayer, operator CBaseEntity*, operator=<float>
// calls: CountdownTimer::Now, CDOTA_BaseNPC_Hero::PerformAutoTaunt
// callers: CDOTA_BaseNPC_Hero::KilledHero
void __fastcall CDOTATeam::IncrementKillStreak(CDOTATeam *const this)
{
  CountdownTimer *p_m_RecentHeroKillTimer; // r13
  float m_Value; // xmm0_4
  double v4; // xmm0_8
  double v5; // xmm1_8
  int v6; // eax
  bool v7; // sf
  int v8; // r12d
  __int64 v9; // rax
  __int64 v10; // r14
  float v11; // xmm1_4
  unsigned __int16 v12; // cx
  int v13; // esi
  int v14; // eax
  CEntityIdentity *v15; // rdx
  CEntityIdentity *v16; // rdx
  CEntityInstance *m_pInstance; // rdi
  float v18; // [rsp+8h] [rbp-38h]
  float m_fValue; // [rsp+Ch] [rbp-34h]

  p_m_RecentHeroKillTimer = &this->m_RecentHeroKillTimer;
  m_Value = this->m_RecentHeroKillTimer.m_timestamp.m_Value;
  ++this->m_nKillStreak;
  if ( m_Value > 0.0
    && CountdownTimer::Now(&this->m_RecentHeroKillTimer) < this->m_RecentHeroKillTimer.m_timestamp.m_Value )
  {
    v6 = this->m_iRecentKillCount + 1;
    v7 = this->m_iRecentKillCount - 3 < 0;
    this->m_iRecentKillCount = v6;
    if ( !(v7 ^ __OFSUB__(v6, 4) | (v6 == 4)) && this->m_aPlayers.m_Vector.m_Size > 0 )
    {
      v8 = 0;
      do
      {
        v9 = (*(this->_vptr_IHandleEntity + 219))(this, v8);
        v10 = v9;
        if ( v9 != 0 && (*(*v9 + 1120LL))(v9) != 0 )
        {
          if ( *(v10 + 4820) == -1 )
          {
            v12 = 0x7FFF;
            v13 = 0x7FFF;
          }
          else
          {
            v12 = *(v10 + 4820) & 0x7FFF;
            v13 = v12;
          }
          v14 = (*(v10 + 4820) >> 15 << 15) | v12 & 0x7FFF;
          if ( (v14 + 2) > 1 )
          {
            v15 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v13 >> 9];
            if ( v15 != 0 )
            {
              v16 = &v15[v13 & 0x1FF];
              if ( v16 != 0 && v14 == v16->m_EHandle.m_Index )
              {
                m_pInstance = v16->m_pInstance;
                if ( v16->m_pInstance != 0
                  && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
                  && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
                {
                  CDOTA_BaseNPC_Hero::PerformAutoTaunt(m_pInstance, v11, 1);
                }
              }
            }
          }
        }
        ++v8;
      }
      while ( v8 < this->m_aPlayers.m_Vector.m_Size );
    }
  }
  else
  {
    this->m_iRecentKillCount = 1;
  }
  m_fValue = dota_hero_multiple_kill_time.m_pParent->m_Value.m_fValue;
  *&v4 = CountdownTimer::Now(p_m_RecentHeroKillTimer) + m_fValue;
  if ( *&v4 != this->m_RecentHeroKillTimer.m_timestamp.m_Value )
  {
    v18 = *&v4;
    (*(this->m_RecentHeroKillTimer._vptr_CountdownTimer + 2))(p_m_RecentHeroKillTimer, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    *&v4 = LODWORD(v18);
    this->m_RecentHeroKillTimer.m_timestamp.m_Value = v18;
  }
  if ( m_fValue != this->m_RecentHeroKillTimer.m_duration.m_Value )
  {
    (*(this->m_RecentHeroKillTimer._vptr_CountdownTimer + 2))(
      p_m_RecentHeroKillTimer,
      8,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL,
      v4,
      v5,
      m_fValue);
    this->m_RecentHeroKillTimer.m_duration.m_Value = m_fValue;
  }
}


// CDOTATeam::FireGameEvent  (line 185, @0x00000000026f6180, libserver.so)
// calls: CDOTATeam::UpdateTeamNameFromLobby
void __fastcall CDOTATeam::FireGameEvent(CDOTATeam *const this, IGameEvent *event)
{
  if ( (*(event->_vptr_IGameEvent + 3))(event) == this->m_event_lobby_updated )
    CDOTATeam::UpdateTeamNameFromLobby(this);
}


// CDOTATeam::UpdateTeamNameFromLobby  (line 193, @0x00000000026f5ce0, libserver.so)  // inlines: GetForModify, GetLobby, GetTeamNumber, NetworkStateChanged, Set, V_strncpy<int>, _M_data, c_str, operator=<CNetworkVarBase<long long unsigned int, CDOTATeam::NetworkVar_m_ulTeamBaseLogo> >, operator=<bool>, operator=<int>, operator=<long unsigned int>, operator=<unsigned int>
// calls: GDOTAGCClientSystem, CDOTALobby::GetTeamDetails, _V_strncpy
// callers: CDOTATeam::FireGameEvent
// strings: "#DOTA_GoodGuys", "#DOTA_BadGuys"
void __fastcall CDOTATeam::UpdateTeamNameFromLobby(CDOTATeam *const this)
{
  int m_Value; // r12d
  const CDOTALobby *v3; // rdi
  const CLobbyTeamDetails *TeamDetails; // rax
  const CLobbyTeamDetails *v5; // r12
  __int64 v6; // r13
  __int64 v7; // r13
  unsigned __int64 v8; // r13
  unsigned __int64 v9; // r13
  unsigned __int64 v10; // r13
  char v11; // r13
  unsigned int v12; // r13d
  char v13; // r12
  unsigned __int64 v14; // r12
  const char *v15; // r13

  m_Value = this->m_iTeamNum.m_Value;
  v3 = *(GDOTAGCClientSystem() + 260);
  if ( v3 != 0 )
  {
    if ( (m_Value - 2) <= 1 )
    {
      TeamDetails = CDOTALobby::GetTeamDetails(v3, (m_Value != 2));
      v5 = TeamDetails;
      if ( TeamDetails != 0 )
      {
        if ( *(TeamDetails + 16) != 0 )
        {
          v6 = **(TeamDetails + 3);
          (*(this->_vptr_IHandleEntity + 22))(this, 832, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
          _V_strncpy(&this->m_szTeamname, v6, 129);
          v7 = **(v5 + 4);
          (*(this->_vptr_IHandleEntity + 22))(this, 1038, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
          _V_strncpy(&this->m_szTag, v7, 33);
          v8 = *(v5 + 6);
          if ( v8 != this->m_ulTeamBaseLogo.m_Value )
          {
            (*(this->_vptr_IHandleEntity + 22))(this, 1016, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
            this->m_ulTeamBaseLogo.m_Value = v8;
          }
          v9 = *(v5 + 5);
          if ( v9 != this->m_ulTeamLogo.m_Value )
          {
            (*(this->_vptr_IHandleEntity + 22))(this, 1008, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
            this->m_ulTeamLogo.m_Value = v9;
          }
          v10 = *(v5 + 7);
          if ( v10 != this->m_ulTeamBannerLogo.m_Value )
          {
            (*(this->_vptr_IHandleEntity + 22))(this, 1024, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
            this->m_ulTeamBannerLogo.m_Value = v10;
          }
          v11 = *(v5 + 104);
          if ( v11 != this->m_bTeamComplete.m_Value )
          {
            (*(this->_vptr_IHandleEntity + 22))(this, 1032, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
            this->m_bTeamComplete.m_Value = v11;
          }
          v12 = *(v5 + 16);
          if ( v12 != this->m_unTournamentTeamID.m_Value )
          {
            (*(this->_vptr_IHandleEntity + 22))(this, 1000, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
            this->m_unTournamentTeamID.m_Value = v12;
          }
          v13 = *(v5 + 105);
          if ( v13 != this->m_bTeamIsHomeTeam.m_Value )
          {
            (*(this->_vptr_IHandleEntity + 22))(this, 1033, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
            this->m_bTeamIsHomeTeam.m_Value = v13;
          }
          v14 = this->m_ulTeamBaseLogo.m_Value;
          if ( v14 != 0 && this->m_ulTeamLogo.m_Value == 0 )
          {
            (*(this->_vptr_IHandleEntity + 22))(this, 1008, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
            this->m_ulTeamLogo.m_Value = v14;
          }
        }
        else
        {
          (*(this->_vptr_IHandleEntity + 22))(this, 832, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
          _V_strncpy(&this->m_szTeamname, "", 129);
          (*(this->_vptr_IHandleEntity + 22))(this, 1038, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
          _V_strncpy(&this->m_szTag, "", 33);
          if ( this->m_ulTeamLogo.m_Value != 0 )
          {
            (*(this->_vptr_IHandleEntity + 22))(this, 1008, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
            this->m_ulTeamLogo.m_Value = 0;
          }
          if ( this->m_ulTeamBaseLogo.m_Value != 0 )
          {
            (*(this->_vptr_IHandleEntity + 22))(this, 1016, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
            this->m_ulTeamBaseLogo.m_Value = 0;
          }
          if ( this->m_ulTeamBannerLogo.m_Value != 0 )
          {
            (*(this->_vptr_IHandleEntity + 22))(this, 1024, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
            this->m_ulTeamBannerLogo.m_Value = 0;
          }
          if ( this->m_bTeamComplete.m_Value )
          {
            (*(this->_vptr_IHandleEntity + 22))(this, 1032, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
            this->m_bTeamComplete.m_Value = 0;
          }
          if ( this->m_unTournamentTeamID.m_Value != 0 )
          {
            (*(this->_vptr_IHandleEntity + 22))(this, 1000, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
            this->m_unTournamentTeamID.m_Value = 0;
          }
          if ( this->m_bTeamIsHomeTeam.m_Value )
          {
            (*(this->_vptr_IHandleEntity + 22))(this, 1033, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
            this->m_bTeamIsHomeTeam.m_Value = 0;
          }
        }
      }
    }
  }
  else
  {
    v15 = "#DOTA_GoodGuys";
    if ( m_Value != 2 )
    {
      v15 = "#DOTA_BadGuys";
      if ( m_Value != 3 )
        v15 = "";
    }
    (*(this->_vptr_IHandleEntity + 22))(this, 832, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    _V_strncpy(&this->m_szTeamname, v15, 129);
    (*(this->_vptr_IHandleEntity + 22))(this, 1038, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    _V_strncpy(&this->m_szTag, "", 33);
  }
}


