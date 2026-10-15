
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CTeamplayRules::Schema_DynamicBinding  (line 48, @0x00000000023e9200, libserver.so)
// calls: CTeamplayRules::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CTeamplayRules::Schema_DynamicBinding(const CTeamplayRules *const this)
{
  CTeamplayRules::Schema_VerifyBindingIsRegistered();
  return CTeamplayRules::s_pSchemaBinding;
}


// CTeamplayRules::GetCaptureValueForPlayer  (line 52, @0x00000000023e5220, libserver.so)
int __fastcall CTeamplayRules::GetCaptureValueForPlayer(CTeamplayRules *const this, CBasePlayer *pPlayer)
{
  return 1;
}


// CTeamplayRules::TeamMayCapturePoint  (line 53, @0x00000000023e5230, libserver.so)
bool __fastcall CTeamplayRules::TeamMayCapturePoint(CTeamplayRules *const this, int iTeam, int iPointIndex)
{
  return 1;
}


// CTeamplayRules::PlayerMayCapturePoint  (line 54, @0x00000000023e5240, libserver.so)
bool __fastcall CTeamplayRules::PlayerMayCapturePoint(
        CTeamplayRules *const this,
        CBasePlayer *pPlayer,
        int iPointIndex,
        char *pszReason,
        int iMaxReasonLength)
{
  return 1;
}


// CTeamplayRules::PlayerMayBlockPoint  (line 55, @0x00000000023e5250, libserver.so)
bool __fastcall CTeamplayRules::PlayerMayBlockPoint(
        CTeamplayRules *const this,
        CBasePlayer *pPlayer,
        int iPointIndex,
        char *pszReason,
        int iMaxReasonLength)
{
  return 0;
}


// CTeamplayRules::PointsMayBeCaptured  (line 58, @0x00000000023e5260, libserver.so)
bool __fastcall CTeamplayRules::PointsMayBeCaptured(CTeamplayRules *const this)
{
  return 1;
}


// CTeamplayRules::SetLastCapPointChanged  (line 59, @0x00000000023e5270, libserver.so)
void __fastcall CTeamplayRules::SetLastCapPointChanged(CTeamplayRules *const this, int iIndex)
{
  ;
}


// CTeamplayRules::~CTeamplayRules  (line 66, @0x00000000023f7c40, libserver.so)  // inlines: Purge, ~CMultiplayRules, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CUtlVector<VoiceCommandMenuItem_t, CUtlMemory<VoiceCommandMenuItem_t, int> >, CUtlMemory<CUtlVector<VoiceCommandMenuItem_t, CUtlMemory<VoiceCommandMenuItem_t, int> >, int> >::RemoveAll, CUtlVectorBase<CMultiplayRules::ResponseRules_t, CUtlMemory<CMultiplayRules::ResponseRules_t, int> >::RemoveAll, CGameRules::~CGameRules, CUtlMemory<CUtlVector<VoiceCommandMenuItem_t, CUtlMemory<VoiceCommandMenuItem_t, int> >, int>::Purge, CUtlMemory<CMultiplayRules::ResponseRules_t, int>::Purge
void __fastcall CTeamplayRules::~CTeamplayRules(CTeamplayRules *const this)
{
  CUtlVector<CUtlVector<VoiceCommandMenuItem_t,CUtlMemory<VoiceCommandMenuItem_t,int> >,CUtlMemory<CUtlVector<VoiceCommandMenuItem_t,CUtlMemory<VoiceCommandMenuItem_t,int> >,int> > *p_m_VoiceCommandMenus; // rdi

  p_m_VoiceCommandMenus = &this->m_VoiceCommandMenus;
  *&p_m_VoiceCommandMenus[-8].m_Memory.m_nAllocationCount = &off_4070F50;
  CUtlVectorBase<CUtlVector<VoiceCommandMenuItem_t,CUtlMemory<VoiceCommandMenuItem_t,int>>,CUtlMemory<CUtlVector<VoiceCommandMenuItem_t,CUtlMemory<VoiceCommandMenuItem_t,int>>,int>>::RemoveAll(p_m_VoiceCommandMenus);
  if ( (this->m_VoiceCommandMenus.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CUtlVector<VoiceCommandMenuItem_t,CUtlMemory<VoiceCommandMenuItem_t,int>>,int>::Purge(&this->m_VoiceCommandMenus.m_Memory);
    if ( (this->m_VoiceCommandMenus.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CUtlVector<VoiceCommandMenuItem_t,CUtlMemory<VoiceCommandMenuItem_t,int>>,int>::Purge(&this->m_VoiceCommandMenus.m_Memory);
  }
  CUtlVectorBase<CMultiplayRules::ResponseRules_t,CUtlMemory<CMultiplayRules::ResponseRules_t,int>>::RemoveAll(&this->m_ResponseRules);
  if ( (this->m_ResponseRules.m_Memory.m_nGrowSize & 0xC0000000) != 0
    || (CUtlMemory<CMultiplayRules::ResponseRules_t,int>::Purge(&this->m_ResponseRules.m_Memory),
        (this->m_ResponseRules.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    CGameRules::~CGameRules(this);
  }
  else
  {
    CUtlMemory<CMultiplayRules::ResponseRules_t,int>::Purge(&this->m_ResponseRules.m_Memory);
    CGameRules::~CGameRules(this);
  }
}


// CTeamplayRules::~CTeamplayRules  (line 66, @0x00000000023f7d00, libserver.so)  // inlines: Purge, operator delete, ~CMultiplayRules, ~CTeamplayRules, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CUtlVector<VoiceCommandMenuItem_t, CUtlMemory<VoiceCommandMenuItem_t, int> >, CUtlMemory<CUtlVector<VoiceCommandMenuItem_t, CUtlMemory<VoiceCommandMenuItem_t, int> >, int> >::RemoveAll, CUtlVectorBase<CMultiplayRules::ResponseRules_t, CUtlMemory<CMultiplayRules::ResponseRules_t, int> >::RemoveAll, CGameRules::~CGameRules, CUtlMemory<CUtlVector<VoiceCommandMenuItem_t, CUtlMemory<VoiceCommandMenuItem_t, int> >, int>::Purge, CUtlMemory<CMultiplayRules::ResponseRules_t, int>::Purge
void __fastcall CTeamplayRules::~CTeamplayRules(CTeamplayRules *const this)
{
  CUtlVector<CUtlVector<VoiceCommandMenuItem_t,CUtlMemory<VoiceCommandMenuItem_t,int> >,CUtlMemory<CUtlVector<VoiceCommandMenuItem_t,CUtlMemory<VoiceCommandMenuItem_t,int> >,int> > *p_m_VoiceCommandMenus; // rdi

  p_m_VoiceCommandMenus = &this->m_VoiceCommandMenus;
  *&p_m_VoiceCommandMenus[-8].m_Memory.m_nAllocationCount = &off_4070F50;
  CUtlVectorBase<CUtlVector<VoiceCommandMenuItem_t,CUtlMemory<VoiceCommandMenuItem_t,int>>,CUtlMemory<CUtlVector<VoiceCommandMenuItem_t,CUtlMemory<VoiceCommandMenuItem_t,int>>,int>>::RemoveAll(p_m_VoiceCommandMenus);
  if ( (this->m_VoiceCommandMenus.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CUtlVector<VoiceCommandMenuItem_t,CUtlMemory<VoiceCommandMenuItem_t,int>>,int>::Purge(&this->m_VoiceCommandMenus.m_Memory);
    if ( (this->m_VoiceCommandMenus.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CUtlVector<VoiceCommandMenuItem_t,CUtlMemory<VoiceCommandMenuItem_t,int>>,int>::Purge(&this->m_VoiceCommandMenus.m_Memory);
  }
  CUtlVectorBase<CMultiplayRules::ResponseRules_t,CUtlMemory<CMultiplayRules::ResponseRules_t,int>>::RemoveAll(&this->m_ResponseRules);
  if ( (this->m_ResponseRules.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CMultiplayRules::ResponseRules_t,int>::Purge(&this->m_ResponseRules.m_Memory);
    if ( (this->m_ResponseRules.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CMultiplayRules::ResponseRules_t,int>::Purge(&this->m_ResponseRules.m_Memory);
  }
  CGameRules::~CGameRules(this);
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, this);
}


// CTeamplayRules::GetGameDescription  (line 85, @0x00000000023e5280, libserver.so)
// strings: "Teamplay"
const char *__fastcall CTeamplayRules::GetGameDescription(CTeamplayRules *const this)
{
  return "Teamplay";
}


// CTeamplayRules::TimerMayExpire  (line 94, @0x00000000023e5290, libserver.so)
bool __fastcall CTeamplayRules::TimerMayExpire(CTeamplayRules *const this)
{
  return 1;
}


// CTeamplayRules::SetWinningTeam  (line 97, @0x00000000023e52a0, libserver.so)
void __fastcall CTeamplayRules::SetWinningTeam(
        CTeamplayRules *const this,
        int team,
        int iWinReason,
        bool bForceMapReset,
        bool bSwitchTeams,
        bool bDontAddScore)
{
  ;
}


// CTeamplayRules::SetStalemate  (line 98, @0x00000000023e52b0, libserver.so)
void __fastcall CTeamplayRules::SetStalemate(
        CTeamplayRules *const this,
        int iReason,
        bool bForceMapReset,
        bool bSwitchTeams)
{
  ;
}


// CTeamplayRules::SetSwitchTeams  (line 101, @0x00000000023e52c0, libserver.so)
void __fastcall CTeamplayRules::SetSwitchTeams(CTeamplayRules *const this, bool bSwitch)
{
  this->m_bSwitchTeams = bSwitch;
}


// CTeamplayRules::ShouldSwitchTeams  (line 102, @0x00000000023e52d0, libserver.so)
bool __fastcall CTeamplayRules::ShouldSwitchTeams(CTeamplayRules *const this)
{
  return this->m_bSwitchTeams;
}


// CTeamplayRules::HandleSwitchTeams  (line 103, @0x00000000023e52e0, libserver.so)
void __fastcall CTeamplayRules::HandleSwitchTeams(CTeamplayRules *const this)
{
  ;
}


// CTeamplayRules::SetScrambleTeams  (line 106, @0x00000000023e52f0, libserver.so)
void __fastcall CTeamplayRules::SetScrambleTeams(CTeamplayRules *const this, bool bScramble)
{
  this->m_bScrambleTeams = bScramble;
}


// CTeamplayRules::ShouldScrambleTeams  (line 107, @0x00000000023e5300, libserver.so)
bool __fastcall CTeamplayRules::ShouldScrambleTeams(CTeamplayRules *const this)
{
  return this->m_bScrambleTeams;
}


// CTeamplayRules::HandleScrambleTeams  (line 108, @0x00000000023e5310, libserver.so)
void __fastcall CTeamplayRules::HandleScrambleTeams(CTeamplayRules *const this)
{
  ;
}


