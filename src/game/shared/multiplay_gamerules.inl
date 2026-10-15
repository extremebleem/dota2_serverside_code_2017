
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CMultiplayRules::Schema_DynamicBinding  (line 98, @0x00000000022a9ad0, libserver.so)
// calls: CMultiplayRules::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CMultiplayRules::Schema_DynamicBinding(const CMultiplayRules *const this)
{
  CMultiplayRules::Schema_VerifyBindingIsRegistered();
  return CMultiplayRules::s_pSchemaBinding;
}


// CMultiplayRules::~CMultiplayRules  (line 121, @0x00000000022b60c0, libserver.so)  // inlines: Purge, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CUtlVector<VoiceCommandMenuItem_t, CUtlMemory<VoiceCommandMenuItem_t, int> >, CUtlMemory<CUtlVector<VoiceCommandMenuItem_t, CUtlMemory<VoiceCommandMenuItem_t, int> >, int> >::RemoveAll, CUtlVectorBase<CMultiplayRules::ResponseRules_t, CUtlMemory<CMultiplayRules::ResponseRules_t, int> >::RemoveAll, CGameRules::~CGameRules, CUtlMemory<CUtlVector<VoiceCommandMenuItem_t, CUtlMemory<VoiceCommandMenuItem_t, int> >, int>::Purge, CUtlMemory<CMultiplayRules::ResponseRules_t, int>::Purge
// callers: CTeamplayRules::CTeamplayRules, CDOTAGamerules::CDOTAGamerules
void __fastcall CMultiplayRules::~CMultiplayRules(CMultiplayRules *const this)
{
  this->_vptr_CGameRules = &off_4070F50;
  CUtlVectorBase<CUtlVector<VoiceCommandMenuItem_t,CUtlMemory<VoiceCommandMenuItem_t,int>>,CUtlMemory<CUtlVector<VoiceCommandMenuItem_t,CUtlMemory<VoiceCommandMenuItem_t,int>>,int>>::RemoveAll(&this->m_VoiceCommandMenus);
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


// CMultiplayRules::~CMultiplayRules  (line 121, @0x00000000022b6170, libserver.so)  // inlines: Purge, operator delete, ~CMultiplayRules, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CUtlVector<VoiceCommandMenuItem_t, CUtlMemory<VoiceCommandMenuItem_t, int> >, CUtlMemory<CUtlVector<VoiceCommandMenuItem_t, CUtlMemory<VoiceCommandMenuItem_t, int> >, int> >::RemoveAll, CUtlVectorBase<CMultiplayRules::ResponseRules_t, CUtlMemory<CMultiplayRules::ResponseRules_t, int> >::RemoveAll, CGameRules::~CGameRules, CUtlMemory<CUtlVector<VoiceCommandMenuItem_t, CUtlMemory<VoiceCommandMenuItem_t, int> >, int>::Purge, CUtlMemory<CMultiplayRules::ResponseRules_t, int>::Purge
void __fastcall CMultiplayRules::~CMultiplayRules(CMultiplayRules *const this)
{
  this->_vptr_CGameRules = &off_4070F50;
  CUtlVectorBase<CUtlVector<VoiceCommandMenuItem_t,CUtlMemory<VoiceCommandMenuItem_t,int>>,CUtlMemory<CUtlVector<VoiceCommandMenuItem_t,CUtlMemory<VoiceCommandMenuItem_t,int>>,int>>::RemoveAll(&this->m_VoiceCommandMenus);
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


// CMultiplayRules::PlayTextureSounds  (line 206, @0x00000000022a5340, libserver.so)
bool __fastcall CMultiplayRules::PlayTextureSounds(CMultiplayRules *const this)
{
  return 0;
}


// CMultiplayRules::EndMultiplayerGame  (line 213, @0x00000000022a5350, libserver.so)
void __fastcall CMultiplayRules::EndMultiplayerGame(CMultiplayRules *const this)
{
  (*(this->_vptr_CGameRules + 164))(this);
}


// CMultiplayRules::ResetMapCycleTimeStamp  (line 222, @0x00000000022a5370, libserver.so)
// globals: CMultiplayRules::m_nMapCycleTimeStamp
void __fastcall CMultiplayRules::ResetMapCycleTimeStamp(CMultiplayRules *const this)
{
  CMultiplayRules::m_nMapCycleTimeStamp = 0;
}


// CMultiplayRules::HandleTimeLimitChange  (line 224, @0x00000000022a5380, libserver.so)
void __fastcall CMultiplayRules::HandleTimeLimitChange(CMultiplayRules *const this)
{
  ;
}


// CMultiplayRules::InitCustomResponseRulesDicts  (line 240, @0x00000000022a5390, libserver.so)
void __fastcall CMultiplayRules::InitCustomResponseRulesDicts(CMultiplayRules *const this)
{
  ;
}


// CMultiplayRules::ShutdownCustomResponseRulesDicts  (line 241, @0x00000000022a53a0, libserver.so)
void __fastcall CMultiplayRules::ShutdownCustomResponseRulesDicts(CMultiplayRules *const this)
{
  ;
}


// CMultiplayRules::UseSuicidePenalty  (line 244, @0x00000000022a53b0, libserver.so)
bool __fastcall CMultiplayRules::UseSuicidePenalty(CMultiplayRules *const this)
{
  return 1;
}


