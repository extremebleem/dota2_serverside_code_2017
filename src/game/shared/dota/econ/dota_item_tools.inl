
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CEconTool_LeagueViewPass::~CEconTool_LeagueViewPass  (line 12, @0x0000000002e5eed0, libserver.so)  // inlines: Purge, RemoveAll, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~IEconTool
// calls: CUtlVectorBase<CEconTool_LeagueViewPass::ItemContribution_t, CUtlMemory<CEconTool_LeagueViewPass::ItemContribution_t, int> >::RemoveAll, CUtlMemory<CEconTool_LeagueViewPass::ItemContribution_t, int>::Purge, CUtlMemory<unsigned int, int>::Purge, CUtlMemory<item_definition_index_t, int>::Purge
void __fastcall CEconTool_LeagueViewPass::~CEconTool_LeagueViewPass(CEconTool_LeagueViewPass *const this)
{
  bool v2; // zf

  this->_vptr_IEconTool = off_47A0ED0;
  CUtlVectorBase<CEconTool_LeagueViewPass::ItemContribution_t,CUtlMemory<CEconTool_LeagueViewPass::ItemContribution_t,int>>::RemoveAll(&this->m_vecItemContributions);
  if ( (this->m_vecItemContributions.m_Memory.m_nGrowSize & 0xC0000000) != 0
    || (CUtlMemory<CEconTool_LeagueViewPass::ItemContribution_t,int>::Purge(&this->m_vecItemContributions.m_Memory),
        (this->m_vecItemContributions.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    v2 = (this->m_vecTeams.m_Memory.m_nGrowSize & 0xC0000000) == 0;
    this->m_vecTeams.m_Size = 0;
    if ( !v2 )
      goto LABEL_3;
  }
  else
  {
    CUtlMemory<CEconTool_LeagueViewPass::ItemContribution_t,int>::Purge(&this->m_vecItemContributions.m_Memory);
    v2 = (this->m_vecTeams.m_Memory.m_nGrowSize & 0xC0000000) == 0;
    this->m_vecTeams.m_Size = 0;
    if ( !v2 )
      goto LABEL_3;
  }
  CUtlMemory<unsigned int,int>::Purge(&this->m_vecTeams.m_Memory);
  if ( (this->m_vecTeams.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<unsigned int,int>::Purge(&this->m_vecTeams.m_Memory);
LABEL_3:
  this->m_vecBonusItemDef.m_Size = 0;
  v2 = (this->m_vecBonusItemDef.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IEconTool = off_47A8E30;
  if ( v2 )
  {
    CUtlMemory<item_definition_index_t,int>::Purge(&this->m_vecBonusItemDef.m_Memory);
    if ( (this->m_vecBonusItemDef.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<item_definition_index_t,int>::Purge(&this->m_vecBonusItemDef.m_Memory);
  }
}


// CEconTool_LeagueViewPass::~CEconTool_LeagueViewPass  (line 12, @0x0000000002e5efb0, libserver.so)  // inlines: Purge, RemoveAll, ~CEconTool_LeagueViewPass, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~IEconTool
// calls: CUtlVectorBase<CEconTool_LeagueViewPass::ItemContribution_t, CUtlMemory<CEconTool_LeagueViewPass::ItemContribution_t, int> >::RemoveAll, operator delete, CUtlMemory<CEconTool_LeagueViewPass::ItemContribution_t, int>::Purge, CUtlMemory<unsigned int, int>::Purge, CUtlMemory<item_definition_index_t, int>::Purge
void __fastcall CEconTool_LeagueViewPass::~CEconTool_LeagueViewPass(CEconTool_LeagueViewPass *const this)
{
  bool v2; // zf

  this->_vptr_IEconTool = off_47A0ED0;
  CUtlVectorBase<CEconTool_LeagueViewPass::ItemContribution_t,CUtlMemory<CEconTool_LeagueViewPass::ItemContribution_t,int>>::RemoveAll(&this->m_vecItemContributions);
  if ( (this->m_vecItemContributions.m_Memory.m_nGrowSize & 0xC0000000) != 0
    || (CUtlMemory<CEconTool_LeagueViewPass::ItemContribution_t,int>::Purge(&this->m_vecItemContributions.m_Memory),
        (this->m_vecItemContributions.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    v2 = (this->m_vecTeams.m_Memory.m_nGrowSize & 0xC0000000) == 0;
    this->m_vecTeams.m_Size = 0;
    if ( !v2 )
      goto LABEL_3;
  }
  else
  {
    CUtlMemory<CEconTool_LeagueViewPass::ItemContribution_t,int>::Purge(&this->m_vecItemContributions.m_Memory);
    v2 = (this->m_vecTeams.m_Memory.m_nGrowSize & 0xC0000000) == 0;
    this->m_vecTeams.m_Size = 0;
    if ( !v2 )
      goto LABEL_3;
  }
  CUtlMemory<unsigned int,int>::Purge(&this->m_vecTeams.m_Memory);
  if ( (this->m_vecTeams.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<unsigned int,int>::Purge(&this->m_vecTeams.m_Memory);
LABEL_3:
  this->m_vecBonusItemDef.m_Size = 0;
  v2 = (this->m_vecBonusItemDef.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IEconTool = off_47A8E30;
  if ( !v2
    || (CUtlMemory<item_definition_index_t,int>::Purge(&this->m_vecBonusItemDef.m_Memory),
        (this->m_vecBonusItemDef.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    operator delete(this);
  }
  else
  {
    CUtlMemory<item_definition_index_t,int>::Purge(&this->m_vecBonusItemDef.m_Memory);
    operator delete(this);
  }
}


// CEconTool_LeagueViewPass::CEconTool_LeagueViewPass  (line 25, @0x0000000002e594d0, libserver.so)  // inlines: CEconSchemaSymbol, CUtlMemory, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, item_definition_index_t
// calls: IEconTool::IEconTool
// callers: CDOTAItemSchema::CreateEconToolImpl
void __fastcall CEconTool_LeagueViewPass::CEconTool_LeagueViewPass(
        CEconTool_LeagueViewPass *const this,
        const char *pszTypeName,
        const char *pszUseString,
        KeyValues *pUsageKV)
{
  IEconTool::IEconTool(this, pszTypeName, pszUseString, 0, item_capabilities_t::ITEM_CAP_NONE, pUsageKV);
  this->m_vecTeams.m_Size = 0;
  this->_vptr_IEconTool = off_47A0ED0;
  this->m_vecTeams.m_Memory.m_pMemory = 0;
  this->m_vecTeams.m_Memory.m_nAllocationCount = 0;
  this->m_vecTeams.m_Memory.m_nGrowSize = 0;
  this->m_vecItemContributions.m_Size = 0;
  this->m_vecItemContributions.m_Memory.m_pMemory = 0;
  this->m_vecItemContributions.m_Memory.m_nAllocationCount = 0;
  this->m_vecItemContributions.m_Memory.m_nGrowSize = 0;
  this->m_symTournamentLocation.u.m_Id = 0;
  this->m_symLocation.u.m_Id = 0;
  this->m_symOrganization.u.m_Id = 0;
  this->m_symSquareLogo.u.m_Id = 0;
  this->m_symLoadingScreen.u.m_Id = 0;
  this->m_nHudSkinItemDef.m_Data = 0;
}


// CEconTool_EventTicket::~CEconTool_EventTicket  (line 105, @0x0000000002e545c0, libserver.so)  // inlines: Purge, RemoveAll, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~IEconTool
// calls: CUtlMemory<item_definition_index_t, int>::Purge
void __fastcall CEconTool_EventTicket::~CEconTool_EventTicket(CEconTool_EventTicket *const this)
{
  bool v2; // zf
  CUtlVectorBase<item_definition_index_t,CUtlMemory<item_definition_index_t,int> >::CAllocator *p_m_Memory; // r12

  this->m_vecBonusItemDef.m_Size = 0;
  v2 = (this->m_vecBonusItemDef.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IEconTool = off_47A8E30;
  if ( v2 )
  {
    p_m_Memory = &this->m_vecBonusItemDef.m_Memory;
    CUtlMemory<item_definition_index_t,int>::Purge(&this->m_vecBonusItemDef.m_Memory);
    if ( (this->m_vecBonusItemDef.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<item_definition_index_t,int>::Purge(p_m_Memory);
  }
}


// CEconTool_EventTicket::~CEconTool_EventTicket  (line 105, @0x0000000002e55cc0, libserver.so)  // inlines: Purge, RemoveAll, ~CEconTool_EventTicket, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~IEconTool
// calls: operator delete, CUtlMemory<item_definition_index_t, int>::Purge
void __fastcall CEconTool_EventTicket::~CEconTool_EventTicket(CEconTool_EventTicket *const this)
{
  bool v2; // zf
  CUtlVectorBase<item_definition_index_t,CUtlMemory<item_definition_index_t,int> >::CAllocator *p_m_Memory; // r12

  this->m_vecBonusItemDef.m_Size = 0;
  v2 = (this->m_vecBonusItemDef.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IEconTool = off_47A8E30;
  if ( !v2
    || (p_m_Memory = &this->m_vecBonusItemDef.m_Memory,
        CUtlMemory<item_definition_index_t,int>::Purge(&this->m_vecBonusItemDef.m_Memory),
        (this->m_vecBonusItemDef.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    operator delete(this);
  }
  else
  {
    CUtlMemory<item_definition_index_t,int>::Purge(p_m_Memory);
    operator delete(this);
  }
}


// CEconTool_EventTicket::BInitFromKV  (line 113, @0x0000000002e52080, libserver.so)  // inlines: operator()
// calls: IEconTool::BInitFromKV, KeyValues::FindKey, KeyValues::GetInt, __cxa_guard_acquire, CKeySymbol::CKeySymbol, __cxa_guard_release, __cxa_guard_abort, _Unwind_Resume
// strings: "usage"
// globals: `guard variable for'CEconTool_EventTicket::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator() con, CEconTool_EventTicket::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator() const(char const*)::s_s
bool __fastcall CEconTool_EventTicket::BInitFromKV(
        CEconTool_EventTicket *const this,
        KeyValues *pToolKV,
        CUtlVector<CUtlString,CUtlMemory<CUtlString,int> > *pVecErrors)
{
  bool result; // al
  KeyValues *Key; // rax

  result = IEconTool::BInitFromKV(this, pToolKV, pVecErrors);
  if ( result )
  {
    this->m_iEventID = 0;
    if ( `guard variable for'CEconTool_EventTicket::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator() const(char const*)::s_sym == 0
      && __cxa_guard_acquire(&`guard variable for'CEconTool_EventTicket::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator() const(char const*)::s_sym) != 0 )
    {
      CKeySymbol::CKeySymbol(
        &CEconTool_EventTicket::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator() const(char const*)::s_sym,
        "usage");
      __cxa_guard_release(&`guard variable for'CEconTool_EventTicket::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator() const(char const*)::s_sym);
    }
    Key = KeyValues::FindKey(
            pToolKV,
            CEconTool_EventTicket::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator() const(char const*)::s_sym);
    if ( Key != 0 )
      this->m_iEventID = KeyValues::GetInt(Key, "event_id", 0);
    return pVecErrors == 0 || pVecErrors->m_Size == 0;
  }
  return result;
}


// CEconTool_TournamentPassport::~CEconTool_TournamentPassport  (line 145, @0x0000000002e54920, libserver.so)  // inlines: Purge, RemoveAll, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~IEconTool
// calls: CUtlMemory<item_definition_index_t, int>::Purge
void __fastcall CEconTool_TournamentPassport::~CEconTool_TournamentPassport(CEconTool_TournamentPassport *const this)
{
  bool v2; // zf
  CUtlVectorBase<item_definition_index_t,CUtlMemory<item_definition_index_t,int> >::CAllocator *p_m_Memory; // r12

  this->m_vecBonusItemDef.m_Size = 0;
  v2 = (this->m_vecBonusItemDef.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IEconTool = off_47A8E30;
  if ( v2 )
  {
    p_m_Memory = &this->m_vecBonusItemDef.m_Memory;
    CUtlMemory<item_definition_index_t,int>::Purge(&this->m_vecBonusItemDef.m_Memory);
    if ( (this->m_vecBonusItemDef.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<item_definition_index_t,int>::Purge(p_m_Memory);
  }
}


// CEconTool_TournamentPassport::~CEconTool_TournamentPassport  (line 145, @0x0000000002e554e0, libserver.so)  // inlines: Purge, RemoveAll, ~CEconTool_TournamentPassport, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~IEconTool
// calls: operator delete, CUtlMemory<item_definition_index_t, int>::Purge
void __fastcall CEconTool_TournamentPassport::~CEconTool_TournamentPassport(CEconTool_TournamentPassport *const this)
{
  bool v2; // zf
  CUtlVectorBase<item_definition_index_t,CUtlMemory<item_definition_index_t,int> >::CAllocator *p_m_Memory; // r12

  this->m_vecBonusItemDef.m_Size = 0;
  v2 = (this->m_vecBonusItemDef.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IEconTool = off_47A8E30;
  if ( !v2
    || (p_m_Memory = &this->m_vecBonusItemDef.m_Memory,
        CUtlMemory<item_definition_index_t,int>::Purge(&this->m_vecBonusItemDef.m_Memory),
        (this->m_vecBonusItemDef.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    operator delete(this);
  }
  else
  {
    CUtlMemory<item_definition_index_t,int>::Purge(p_m_Memory);
    operator delete(this);
  }
}


// CEconTool_TournamentPassport::BInitFromKV  (line 153, @0x0000000002e52170, libserver.so)  // inlines: operator()
// calls: IEconTool::BInitFromKV, KeyValues::FindKey, KeyValues::GetInt, __cxa_guard_acquire, CKeySymbol::CKeySymbol, __cxa_guard_release, __cxa_guard_abort, _Unwind_Resume
// strings: "usage"
// globals: `guard variable for'CEconTool_TournamentPassport::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operato, CEconTool_TournamentPassport::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator() const(char const
bool __fastcall CEconTool_TournamentPassport::BInitFromKV(
        CEconTool_TournamentPassport *const this,
        KeyValues *pToolKV,
        CUtlVector<CUtlString,CUtlMemory<CUtlString,int> > *pVecErrors)
{
  bool result; // al
  KeyValues *Key; // rax

  result = IEconTool::BInitFromKV(this, pToolKV, pVecErrors);
  if ( result )
  {
    this->m_iLeagueID = 0;
    if ( `guard variable for'CEconTool_TournamentPassport::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator() const(char const*)::s_sym == 0
      && __cxa_guard_acquire(&`guard variable for'CEconTool_TournamentPassport::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator() const(char const*)::s_sym) != 0 )
    {
      CKeySymbol::CKeySymbol(
        &CEconTool_TournamentPassport::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator() const(char const*)::s_sym,
        "usage");
      __cxa_guard_release(&`guard variable for'CEconTool_TournamentPassport::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator() const(char const*)::s_sym);
    }
    Key = KeyValues::FindKey(
            pToolKV,
            CEconTool_TournamentPassport::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator() const(char const*)::s_sym);
    if ( Key != 0 )
      this->m_iLeagueID = KeyValues::GetInt(Key, "league_id", 0);
    return pVecErrors == 0 || pVecErrors->m_Size == 0;
  }
  return result;
}


// CEconTool_DropRateBooster::~CEconTool_DropRateBooster  (line 185, @0x0000000002e54b60, libserver.so)  // inlines: Purge, RemoveAll, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~IEconTool
// calls: CUtlMemory<item_definition_index_t, int>::Purge
void __fastcall CEconTool_DropRateBooster::~CEconTool_DropRateBooster(CEconTool_DropRateBooster *const this)
{
  bool v2; // zf
  CUtlVectorBase<item_definition_index_t,CUtlMemory<item_definition_index_t,int> >::CAllocator *p_m_Memory; // r12

  this->m_vecBonusItemDef.m_Size = 0;
  v2 = (this->m_vecBonusItemDef.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IEconTool = off_47A8E30;
  if ( v2 )
  {
    p_m_Memory = &this->m_vecBonusItemDef.m_Memory;
    CUtlMemory<item_definition_index_t,int>::Purge(&this->m_vecBonusItemDef.m_Memory);
    if ( (this->m_vecBonusItemDef.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<item_definition_index_t,int>::Purge(p_m_Memory);
  }
}


// CEconTool_DropRateBooster::~CEconTool_DropRateBooster  (line 185, @0x0000000002e557f0, libserver.so)  // inlines: Purge, RemoveAll, ~CEconTool_DropRateBooster, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~IEconTool
// calls: operator delete, CUtlMemory<item_definition_index_t, int>::Purge
void __fastcall CEconTool_DropRateBooster::~CEconTool_DropRateBooster(CEconTool_DropRateBooster *const this)
{
  bool v2; // zf
  CUtlVectorBase<item_definition_index_t,CUtlMemory<item_definition_index_t,int> >::CAllocator *p_m_Memory; // r12

  this->m_vecBonusItemDef.m_Size = 0;
  v2 = (this->m_vecBonusItemDef.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IEconTool = off_47A8E30;
  if ( !v2
    || (p_m_Memory = &this->m_vecBonusItemDef.m_Memory,
        CUtlMemory<item_definition_index_t,int>::Purge(&this->m_vecBonusItemDef.m_Memory),
        (this->m_vecBonusItemDef.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    operator delete(this);
  }
  else
  {
    CUtlMemory<item_definition_index_t,int>::Purge(p_m_Memory);
    operator delete(this);
  }
}


// CEconTool_DropRateBooster::CEconTool_DropRateBooster  (line 188, @0x0000000002e57270, libserver.so)  // inlines: CEconSchemaSymbol, CUtlSymbolLarge
// calls: IEconTool::IEconTool
// callers: CDOTAItemSchema::CreateEconToolImpl
// globals: INVALID_ITEM_DEF_INDEX
void __fastcall CEconTool_DropRateBooster::CEconTool_DropRateBooster(
        CEconTool_DropRateBooster *const this,
        const char *pszTypeName,
        const char *pszUseString,
        KeyValues *pUsageKV)
{
  uint16 m_Data; // ax

  IEconTool::IEconTool(this, pszTypeName, pszUseString, 0, item_capabilities_t::ITEM_CAP_NONE, pUsageKV);
  this->m_symExpirationDate.u.m_Id = 0;
  this->_vptr_IEconTool = off_479FA30;
  m_Data = INVALID_ITEM_DEF_INDEX.m_Data;
  this->m_flDropRateBonus = 0.0;
  this->m_rtExpiration = 0;
  this->m_unBoosterDefIndex.m_Data = m_Data;
}


// CEconTool_DropRateBooster::BInitFromKV  (line 194, @0x0000000002e52260, libserver.so)  // inlines: GetBool, operator()
// calls: IEconTool::BInitFromKV, KeyValues::FindKey, KeyValues::GetFloat, KeyValues::GetInt, KeyValues::GetString, CEconSchemaSymbol::operator=, CRTime::RTime32FromFmtString, __cxa_guard_acquire, CKeySymbol::CKeySymbol, __cxa_guard_release, __cxa_guard_abort, _Unwind_Resume
// strings: "drop_rate_bonus", "duration_hours", "in_game_duration", "booster_def_index", "disable_merging", "expiration_date" (8 total)
// globals: `guard variable for'CEconTool_DropRateBooster::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator(), CEconTool_DropRateBooster::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator() const(char const*):, INVALID_ITEM_DEF_INDEX
bool __fastcall CEconTool_DropRateBooster::BInitFromKV(
        CEconTool_DropRateBooster *const this,
        KeyValues *pToolKV,
        CUtlVector<CUtlString,CUtlMemory<CUtlString,int> > *pVecErrors)
{
  bool result; // al
  KeyValues *Key; // rax
  float v8; // xmm1_4
  KeyValues *v9; // r13
  uint32 Int; // eax
  int m_Data; // edx
  const char *String; // rax
  const char *v13; // r13

  result = IEconTool::BInitFromKV(this, pToolKV, pVecErrors);
  if ( result )
  {
    if ( `guard variable for'CEconTool_DropRateBooster::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator() const(char const*)::s_sym == 0
      && __cxa_guard_acquire(&`guard variable for'CEconTool_DropRateBooster::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator() const(char const*)::s_sym) != 0 )
    {
      CKeySymbol::CKeySymbol(
        &CEconTool_DropRateBooster::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator() const(char const*)::s_sym,
        "usage");
      __cxa_guard_release(&`guard variable for'CEconTool_DropRateBooster::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator() const(char const*)::s_sym);
    }
    Key = KeyValues::FindKey(
            pToolKV,
            CEconTool_DropRateBooster::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator() const(char const*)::s_sym);
    v9 = Key;
    if ( Key != 0 )
    {
      this->m_flDropRateBonus = KeyValues::GetFloat(Key, "drop_rate_bonus", v8);
      this->m_unDurationHours = KeyValues::GetInt(v9, "duration_hours", 0);
      Int = KeyValues::GetInt(v9, "in_game_duration", 0);
      m_Data = INVALID_ITEM_DEF_INDEX.m_Data;
      this->m_unGameSeconds = Int;
      this->m_unBoosterDefIndex.m_Data = KeyValues::GetInt(v9, "booster_def_index", m_Data);
      this->m_unType = KeyValues::GetInt(v9, "type", 0);
      this->m_bDisableMerging = KeyValues::GetInt(v9, "disable_merging", 0) != 0;
      String = KeyValues::GetString(v9, "expiration_date", 0, 0, 0);
      v13 = String;
      if ( String != 0 )
      {
        CEconSchemaSymbol::operator=(&this->m_symExpirationDate, String);
        this->m_rtExpiration = CRTime::RTime32FromFmtString("YYYY-MM-DD hh:mm:ss", v13);
      }
    }
    return pVecErrors == 0 || pVecErrors->m_Size == 0;
  }
  return result;
}


// CEconTool_TeamShowcaseForge::~CEconTool_TeamShowcaseForge  (line 251, @0x0000000002e54740, libserver.so)  // inlines: Purge, RemoveAll, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~IEconTool
// calls: CUtlMemory<item_definition_index_t, int>::Purge
void __fastcall CEconTool_TeamShowcaseForge::~CEconTool_TeamShowcaseForge(CEconTool_TeamShowcaseForge *const this)
{
  bool v2; // zf
  CUtlVectorBase<item_definition_index_t,CUtlMemory<item_definition_index_t,int> >::CAllocator *p_m_Memory; // r12

  this->m_vecBonusItemDef.m_Size = 0;
  v2 = (this->m_vecBonusItemDef.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IEconTool = off_47A8E30;
  if ( v2 )
  {
    p_m_Memory = &this->m_vecBonusItemDef.m_Memory;
    CUtlMemory<item_definition_index_t,int>::Purge(&this->m_vecBonusItemDef.m_Memory);
    if ( (this->m_vecBonusItemDef.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<item_definition_index_t,int>::Purge(p_m_Memory);
  }
}


// CEconTool_TeamShowcaseForge::~CEconTool_TeamShowcaseForge  (line 251, @0x0000000002e555c0, libserver.so)  // inlines: Purge, RemoveAll, ~CEconTool_TeamShowcaseForge, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~IEconTool
// calls: operator delete, CUtlMemory<item_definition_index_t, int>::Purge
void __fastcall CEconTool_TeamShowcaseForge::~CEconTool_TeamShowcaseForge(CEconTool_TeamShowcaseForge *const this)
{
  bool v2; // zf
  CUtlVectorBase<item_definition_index_t,CUtlMemory<item_definition_index_t,int> >::CAllocator *p_m_Memory; // r12

  this->m_vecBonusItemDef.m_Size = 0;
  v2 = (this->m_vecBonusItemDef.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IEconTool = off_47A8E30;
  if ( !v2
    || (p_m_Memory = &this->m_vecBonusItemDef.m_Memory,
        CUtlMemory<item_definition_index_t,int>::Purge(&this->m_vecBonusItemDef.m_Memory),
        (this->m_vecBonusItemDef.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    operator delete(this);
  }
  else
  {
    CUtlMemory<item_definition_index_t,int>::Purge(p_m_Memory);
    operator delete(this);
  }
}


// CEconTool_TeamShowcaseForge::BInitFromKV  (line 259, @0x0000000002e52410, libserver.so)  // inlines: operator()
// calls: IEconTool::BInitFromKV, KeyValues::FindKey, KeyValues::GetInt, __cxa_guard_acquire, CKeySymbol::CKeySymbol, __cxa_guard_release, __cxa_guard_abort, _Unwind_Resume
// strings: "status_effect", "teamshowcase_itemdef_index", "usage"
// globals: `guard variable for'CEconTool_TeamShowcaseForge::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator, CEconTool_TeamShowcaseForge::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator() const(char const*, INVALID_ITEM_DEF_INDEX
bool __fastcall CEconTool_TeamShowcaseForge::BInitFromKV(
        CEconTool_TeamShowcaseForge *const this,
        KeyValues *pToolKV,
        CUtlVector<CUtlString,CUtlMemory<CUtlString,int> > *pVecErrors)
{
  bool result; // al
  bool v7; // zf
  KeyValues *Key; // rax
  KeyValues *v9; // r13
  int Int; // eax
  int m_Data; // edx

  result = IEconTool::BInitFromKV(this, pToolKV, pVecErrors);
  if ( result )
  {
    v7 = `guard variable for'CEconTool_TeamShowcaseForge::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator() const(char const*)::s_sym == 0;
    this->m_iStatusEffectIndex = 0;
    if ( v7
      && __cxa_guard_acquire(&`guard variable for'CEconTool_TeamShowcaseForge::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator() const(char const*)::s_sym) != 0 )
    {
      CKeySymbol::CKeySymbol(
        &CEconTool_TeamShowcaseForge::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator() const(char const*)::s_sym,
        "usage");
      __cxa_guard_release(&`guard variable for'CEconTool_TeamShowcaseForge::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator() const(char const*)::s_sym);
    }
    Key = KeyValues::FindKey(
            pToolKV,
            CEconTool_TeamShowcaseForge::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator() const(char const*)::s_sym);
    v9 = Key;
    if ( Key != 0 )
    {
      Int = KeyValues::GetInt(Key, "status_effect", 0);
      m_Data = INVALID_ITEM_DEF_INDEX.m_Data;
      this->m_iStatusEffectIndex = Int;
      this->m_iEffigyItemDefIndex.m_Data = KeyValues::GetInt(v9, "teamshowcase_itemdef_index", m_Data);
    }
    return pVecErrors == 0 || pVecErrors->m_Size == 0;
  }
  return result;
}


// CEconTool_EffigyReforgeItem::~CEconTool_EffigyReforgeItem  (line 294, @0x0000000002e54560, libserver.so)  // inlines: Purge, RemoveAll, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~IEconTool
// calls: CUtlMemory<item_definition_index_t, int>::Purge
void __fastcall CEconTool_EffigyReforgeItem::~CEconTool_EffigyReforgeItem(CEconTool_EffigyReforgeItem *const this)
{
  bool v2; // zf
  CUtlVectorBase<item_definition_index_t,CUtlMemory<item_definition_index_t,int> >::CAllocator *p_m_Memory; // r12

  this->m_vecBonusItemDef.m_Size = 0;
  v2 = (this->m_vecBonusItemDef.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IEconTool = off_47A8E30;
  if ( v2 )
  {
    p_m_Memory = &this->m_vecBonusItemDef.m_Memory;
    CUtlMemory<item_definition_index_t,int>::Purge(&this->m_vecBonusItemDef.m_Memory);
    if ( (this->m_vecBonusItemDef.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<item_definition_index_t,int>::Purge(p_m_Memory);
  }
}


// CEconTool_EffigyReforgeItem::~CEconTool_EffigyReforgeItem  (line 294, @0x0000000002e559b0, libserver.so)  // inlines: Purge, RemoveAll, ~CEconTool_EffigyReforgeItem, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~IEconTool
// calls: operator delete, CUtlMemory<item_definition_index_t, int>::Purge
void __fastcall CEconTool_EffigyReforgeItem::~CEconTool_EffigyReforgeItem(CEconTool_EffigyReforgeItem *const this)
{
  bool v2; // zf
  CUtlVectorBase<item_definition_index_t,CUtlMemory<item_definition_index_t,int> >::CAllocator *p_m_Memory; // r12

  this->m_vecBonusItemDef.m_Size = 0;
  v2 = (this->m_vecBonusItemDef.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IEconTool = off_47A8E30;
  if ( !v2
    || (p_m_Memory = &this->m_vecBonusItemDef.m_Memory,
        CUtlMemory<item_definition_index_t,int>::Purge(&this->m_vecBonusItemDef.m_Memory),
        (this->m_vecBonusItemDef.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    operator delete(this);
  }
  else
  {
    CUtlMemory<item_definition_index_t,int>::Purge(p_m_Memory);
    operator delete(this);
  }
}


// CEconTool_CompendiumSetSelection::~CEconTool_CompendiumSetSelection  (line 315, @0x0000000002e54800, libserver.so)  // inlines: Purge, RemoveAll, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~IEconTool
// calls: CUtlMemory<item_definition_index_t, int>::Purge
void __fastcall CEconTool_CompendiumSetSelection::~CEconTool_CompendiumSetSelection(
        CEconTool_CompendiumSetSelection *const this)
{
  bool v2; // zf
  CUtlVectorBase<item_definition_index_t,CUtlMemory<item_definition_index_t,int> >::CAllocator *p_m_Memory; // r12

  this->m_vecBonusItemDef.m_Size = 0;
  v2 = (this->m_vecBonusItemDef.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IEconTool = off_47A8E30;
  if ( v2 )
  {
    p_m_Memory = &this->m_vecBonusItemDef.m_Memory;
    CUtlMemory<item_definition_index_t,int>::Purge(&this->m_vecBonusItemDef.m_Memory);
    if ( (this->m_vecBonusItemDef.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<item_definition_index_t,int>::Purge(p_m_Memory);
  }
}


// CEconTool_CompendiumSetSelection::~CEconTool_CompendiumSetSelection  (line 315, @0x0000000002e556a0, libserver.so)  // inlines: Purge, RemoveAll, ~CEconTool_CompendiumSetSelection, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~IEconTool
// calls: operator delete, CUtlMemory<item_definition_index_t, int>::Purge
void __fastcall CEconTool_CompendiumSetSelection::~CEconTool_CompendiumSetSelection(
        CEconTool_CompendiumSetSelection *const this)
{
  bool v2; // zf
  CUtlVectorBase<item_definition_index_t,CUtlMemory<item_definition_index_t,int> >::CAllocator *p_m_Memory; // r12

  this->m_vecBonusItemDef.m_Size = 0;
  v2 = (this->m_vecBonusItemDef.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IEconTool = off_47A8E30;
  if ( !v2
    || (p_m_Memory = &this->m_vecBonusItemDef.m_Memory,
        CUtlMemory<item_definition_index_t,int>::Purge(&this->m_vecBonusItemDef.m_Memory),
        (this->m_vecBonusItemDef.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    operator delete(this);
  }
  else
  {
    CUtlMemory<item_definition_index_t,int>::Purge(p_m_Memory);
    operator delete(this);
  }
}


// CEconTool_CompendiumSetSelection::BInitFromKV  (line 331, @0x0000000002e52510, libserver.so)  // inlines: GetBool, operator()
// calls: IEconTool::BInitFromKV, KeyValues::FindKey, KeyValues::GetInt, __cxa_guard_acquire, CKeySymbol::CKeySymbol, __cxa_guard_release, __cxa_guard_abort, _Unwind_Resume
// strings: "selection_index", "selection_value", "selection_additive", "action_num_to_grant", "usage"
// globals: `guard variable for'CEconTool_CompendiumSetSelection::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::ope, CEconTool_CompendiumSetSelection::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator() const(char c
bool __fastcall CEconTool_CompendiumSetSelection::BInitFromKV(
        CEconTool_CompendiumSetSelection *const this,
        KeyValues *pToolKV,
        CUtlVector<CUtlString,CUtlMemory<CUtlString,int> > *pVecErrors)
{
  bool result; // al
  KeyValues *Key; // rax
  KeyValues *v8; // r13

  result = IEconTool::BInitFromKV(this, pToolKV, pVecErrors);
  if ( result )
  {
    if ( `guard variable for'CEconTool_CompendiumSetSelection::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator() const(char const*)::s_sym == 0
      && __cxa_guard_acquire(&`guard variable for'CEconTool_CompendiumSetSelection::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator() const(char const*)::s_sym) != 0 )
    {
      CKeySymbol::CKeySymbol(
        &CEconTool_CompendiumSetSelection::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator() const(char const*)::s_sym,
        "usage");
      __cxa_guard_release(&`guard variable for'CEconTool_CompendiumSetSelection::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator() const(char const*)::s_sym);
    }
    Key = KeyValues::FindKey(
            pToolKV,
            CEconTool_CompendiumSetSelection::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator() const(char const*)::s_sym);
    v8 = Key;
    if ( Key != 0 )
    {
      this->m_unCompendiumLeagueID = KeyValues::GetInt(Key, "league_id", 0);
      this->m_unSelectionIndex = KeyValues::GetInt(v8, "selection_index", 0);
      this->m_unSelectionValue = KeyValues::GetInt(v8, "selection_value", 0);
      this->m_bSelectionAdditive = KeyValues::GetInt(v8, "selection_additive", 0) != 0;
      this->m_unEventID = KeyValues::GetInt(v8, "event_id", 0);
      this->m_unActionID = KeyValues::GetInt(v8, "action_id", 0);
      this->m_unNumActionsToGrant = KeyValues::GetInt(v8, "action_num_to_grant", 1);
    }
    return pVecErrors == 0 || pVecErrors->m_Size == 0;
  }
  return result;
}


// CEconTool_PassportFantasyTeam::~CEconTool_PassportFantasyTeam  (line 414, @0x0000000002e54500, libserver.so)  // inlines: Purge, RemoveAll, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~IEconTool
// calls: CUtlMemory<item_definition_index_t, int>::Purge
void __fastcall CEconTool_PassportFantasyTeam::~CEconTool_PassportFantasyTeam(
        CEconTool_PassportFantasyTeam *const this)
{
  bool v2; // zf
  CUtlVectorBase<item_definition_index_t,CUtlMemory<item_definition_index_t,int> >::CAllocator *p_m_Memory; // r12

  this->m_vecBonusItemDef.m_Size = 0;
  v2 = (this->m_vecBonusItemDef.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IEconTool = off_47A8E30;
  if ( v2 )
  {
    p_m_Memory = &this->m_vecBonusItemDef.m_Memory;
    CUtlMemory<item_definition_index_t,int>::Purge(&this->m_vecBonusItemDef.m_Memory);
    if ( (this->m_vecBonusItemDef.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<item_definition_index_t,int>::Purge(p_m_Memory);
  }
}


// CEconTool_PassportFantasyTeam::~CEconTool_PassportFantasyTeam  (line 414, @0x0000000002e55940, libserver.so)  // inlines: Purge, RemoveAll, ~CEconTool_PassportFantasyTeam, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~IEconTool
// calls: operator delete, CUtlMemory<item_definition_index_t, int>::Purge
void __fastcall CEconTool_PassportFantasyTeam::~CEconTool_PassportFantasyTeam(
        CEconTool_PassportFantasyTeam *const this)
{
  bool v2; // zf
  CUtlVectorBase<item_definition_index_t,CUtlMemory<item_definition_index_t,int> >::CAllocator *p_m_Memory; // r12

  this->m_vecBonusItemDef.m_Size = 0;
  v2 = (this->m_vecBonusItemDef.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IEconTool = off_47A8E30;
  if ( !v2
    || (p_m_Memory = &this->m_vecBonusItemDef.m_Memory,
        CUtlMemory<item_definition_index_t,int>::Purge(&this->m_vecBonusItemDef.m_Memory),
        (this->m_vecBonusItemDef.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    operator delete(this);
  }
  else
  {
    CUtlMemory<item_definition_index_t,int>::Purge(p_m_Memory);
    operator delete(this);
  }
}


// CEconTool_FantasyTicket::~CEconTool_FantasyTicket  (line 441, @0x0000000002e54680, libserver.so)  // inlines: Purge, RemoveAll, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~IEconTool
// calls: CUtlMemory<item_definition_index_t, int>::Purge
void __fastcall CEconTool_FantasyTicket::~CEconTool_FantasyTicket(CEconTool_FantasyTicket *const this)
{
  bool v2; // zf
  CUtlVectorBase<item_definition_index_t,CUtlMemory<item_definition_index_t,int> >::CAllocator *p_m_Memory; // r12

  this->m_vecBonusItemDef.m_Size = 0;
  v2 = (this->m_vecBonusItemDef.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IEconTool = off_47A8E30;
  if ( v2 )
  {
    p_m_Memory = &this->m_vecBonusItemDef.m_Memory;
    CUtlMemory<item_definition_index_t,int>::Purge(&this->m_vecBonusItemDef.m_Memory);
    if ( (this->m_vecBonusItemDef.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<item_definition_index_t,int>::Purge(p_m_Memory);
  }
}


// CEconTool_FantasyTicket::~CEconTool_FantasyTicket  (line 441, @0x0000000002e55b70, libserver.so)  // inlines: Purge, RemoveAll, ~CEconTool_FantasyTicket, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~IEconTool
// calls: operator delete, CUtlMemory<item_definition_index_t, int>::Purge
void __fastcall CEconTool_FantasyTicket::~CEconTool_FantasyTicket(CEconTool_FantasyTicket *const this)
{
  bool v2; // zf
  CUtlVectorBase<item_definition_index_t,CUtlMemory<item_definition_index_t,int> >::CAllocator *p_m_Memory; // r12

  this->m_vecBonusItemDef.m_Size = 0;
  v2 = (this->m_vecBonusItemDef.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IEconTool = off_47A8E30;
  if ( !v2
    || (p_m_Memory = &this->m_vecBonusItemDef.m_Memory,
        CUtlMemory<item_definition_index_t,int>::Purge(&this->m_vecBonusItemDef.m_Memory),
        (this->m_vecBonusItemDef.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    operator delete(this);
  }
  else
  {
    CUtlMemory<item_definition_index_t,int>::Purge(p_m_Memory);
    operator delete(this);
  }
}


// CEconTool_FantasyTicket::BInitFromKV  (line 449, @0x0000000002e52680, libserver.so)  // inlines: operator()
// calls: IEconTool::BInitFromKV, KeyValues::FindKey, KeyValues::GetInt, __cxa_guard_acquire, CKeySymbol::CKeySymbol, __cxa_guard_release, __cxa_guard_abort, _Unwind_Resume
// strings: "season", "usage"
// globals: `guard variable for'CEconTool_FantasyTicket::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator() c, CEconTool_FantasyTicket::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator() const(char const*)::s
bool __fastcall CEconTool_FantasyTicket::BInitFromKV(
        CEconTool_FantasyTicket *const this,
        KeyValues *pToolKV,
        CUtlVector<CUtlString,CUtlMemory<CUtlString,int> > *pVecErrors)
{
  bool result; // al
  KeyValues *Key; // rax

  result = IEconTool::BInitFromKV(this, pToolKV, pVecErrors);
  if ( result )
  {
    if ( `guard variable for'CEconTool_FantasyTicket::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator() const(char const*)::s_sym == 0
      && __cxa_guard_acquire(&`guard variable for'CEconTool_FantasyTicket::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator() const(char const*)::s_sym) != 0 )
    {
      CKeySymbol::CKeySymbol(
        &CEconTool_FantasyTicket::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator() const(char const*)::s_sym,
        "usage");
      __cxa_guard_release(&`guard variable for'CEconTool_FantasyTicket::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator() const(char const*)::s_sym);
    }
    Key = KeyValues::FindKey(
            pToolKV,
            CEconTool_FantasyTicket::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator() const(char const*)::s_sym);
    if ( Key != 0 )
      this->m_unSeason = KeyValues::GetInt(Key, "season", 0);
    else
      this->m_unSeason = 0;
    return pVecErrors == 0 || pVecErrors->m_Size == 0;
  }
  return result;
}


// CEconTool_AwardEventPoints::~CEconTool_AwardEventPoints  (line 481, @0x0000000002e544a0, libserver.so)  // inlines: Purge, RemoveAll, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~IEconTool
// calls: CUtlMemory<item_definition_index_t, int>::Purge
void __fastcall CEconTool_AwardEventPoints::~CEconTool_AwardEventPoints(CEconTool_AwardEventPoints *const this)
{
  bool v2; // zf
  CUtlVectorBase<item_definition_index_t,CUtlMemory<item_definition_index_t,int> >::CAllocator *p_m_Memory; // r12

  this->m_vecBonusItemDef.m_Size = 0;
  v2 = (this->m_vecBonusItemDef.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IEconTool = off_47A8E30;
  if ( v2 )
  {
    p_m_Memory = &this->m_vecBonusItemDef.m_Memory;
    CUtlMemory<item_definition_index_t,int>::Purge(&this->m_vecBonusItemDef.m_Memory);
    if ( (this->m_vecBonusItemDef.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<item_definition_index_t,int>::Purge(p_m_Memory);
  }
}


// CEconTool_AwardEventPoints::~CEconTool_AwardEventPoints  (line 481, @0x0000000002e55a90, libserver.so)  // inlines: Purge, RemoveAll, ~CEconTool_AwardEventPoints, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~IEconTool
// calls: operator delete, CUtlMemory<item_definition_index_t, int>::Purge
void __fastcall CEconTool_AwardEventPoints::~CEconTool_AwardEventPoints(CEconTool_AwardEventPoints *const this)
{
  bool v2; // zf
  CUtlVectorBase<item_definition_index_t,CUtlMemory<item_definition_index_t,int> >::CAllocator *p_m_Memory; // r12

  this->m_vecBonusItemDef.m_Size = 0;
  v2 = (this->m_vecBonusItemDef.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IEconTool = off_47A8E30;
  if ( !v2
    || (p_m_Memory = &this->m_vecBonusItemDef.m_Memory,
        CUtlMemory<item_definition_index_t,int>::Purge(&this->m_vecBonusItemDef.m_Memory),
        (this->m_vecBonusItemDef.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    operator delete(this);
  }
  else
  {
    CUtlMemory<item_definition_index_t,int>::Purge(p_m_Memory);
    operator delete(this);
  }
}


// CEconTool_AwardEventPoints::BInitFromKV  (line 489, @0x0000000002e52770, libserver.so)  // inlines: operator()
// calls: IEconTool::BInitFromKV, KeyValues::FindKey, KeyValues::GetInt, KeyValues::GetString, CEconSchemaSymbol::operator=, __cxa_guard_acquire, CKeySymbol::CKeySymbol, __cxa_guard_release, __cxa_guard_abort, _Unwind_Resume
// strings: "require_league_id", "compendium_league", "compendium_selection", "compendium_add_value", "confirm_string", "#DOTA_Event_Points_Confirm" (7 total)
// globals: `guard variable for'CEconTool_AwardEventPoints::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator(, CEconTool_AwardEventPoints::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator() const(char const*)
bool __fastcall CEconTool_AwardEventPoints::BInitFromKV(
        CEconTool_AwardEventPoints *const this,
        KeyValues *pToolKV,
        CUtlVector<CUtlString,CUtlMemory<CUtlString,int> > *pVecErrors)
{
  bool result; // al
  KeyValues *Key; // rax
  KeyValues *v8; // r12
  const char *String; // rsi

  result = IEconTool::BInitFromKV(this, pToolKV, pVecErrors);
  if ( result )
  {
    if ( `guard variable for'CEconTool_AwardEventPoints::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator() const(char const*)::s_sym == 0
      && __cxa_guard_acquire(&`guard variable for'CEconTool_AwardEventPoints::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator() const(char const*)::s_sym) != 0 )
    {
      CKeySymbol::CKeySymbol(
        &CEconTool_AwardEventPoints::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator() const(char const*)::s_sym,
        "usage");
      __cxa_guard_release(&`guard variable for'CEconTool_AwardEventPoints::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator() const(char const*)::s_sym);
    }
    Key = KeyValues::FindKey(
            pToolKV,
            CEconTool_AwardEventPoints::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator() const(char const*)::s_sym);
    v8 = Key;
    if ( Key != 0 )
    {
      this->m_nRequireLeagueID = KeyValues::GetInt(Key, "require_league_id", 0);
      this->m_nEventID = KeyValues::GetInt(v8, "event_id", 0);
      this->m_nPoints = KeyValues::GetInt(v8, "points", 0);
      this->m_nPremiumPoints = KeyValues::GetInt(v8, "premium_points", 0);
      this->m_nCompendiumLeagueToAdd = KeyValues::GetInt(v8, "compendium_league", 0);
      this->m_nCompendiumSelectionToAdd = KeyValues::GetInt(v8, "compendium_selection", 0);
      this->m_nCompendiumAddValue = KeyValues::GetInt(v8, "compendium_add_value", 0);
      String = KeyValues::GetString(v8, "confirm_string", "#DOTA_Event_Points_Confirm", 0, 0);
    }
    else
    {
      this->m_nRequireLeagueID = 0;
      String = "#DOTA_Event_Points_Confirm";
      this->m_nEventID = 0;
      this->m_nPoints = 0;
      this->m_nPremiumPoints = 0;
      this->m_nCompendiumLeagueToAdd = 0;
      this->m_nCompendiumSelectionToAdd = 0;
      this->m_nCompendiumAddValue = 0;
    }
    CEconSchemaSymbol::operator=(&this->m_symConfirmString, String);
    return pVecErrors == 0 || pVecErrors->m_Size == 0;
  }
  return result;
}


// CEconTool_AwardEventPoints::BFinishInitialization  (line 507, @0x0000000002e4ef70, libserver.so)
bool __fastcall CEconTool_AwardEventPoints::BFinishInitialization(CEconTool_AwardEventPoints *const this)
{
  bool result; // al

  result = 0;
  if ( this->m_nEventID != 0 && (this->m_nPoints != 0 || this->m_nPremiumPoints != 0) )
    return 1;
  return result;
}


// CEconTool_Compendium::~CEconTool_Compendium  (line 541, @0x0000000002e55e40, libserver.so)  // inlines: Purge, RemoveAll, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~IEconTool
// calls: CUtlMemory<item_definition_index_t, int>::Purge, CUtlMemory<unsigned int, int>::Purge
void __fastcall CEconTool_Compendium::~CEconTool_Compendium(CEconTool_Compendium *const this)
{
  bool v2; // zf
  CUtlMemory<unsigned int,int> *p_m_Memory; // r12

  v2 = (this->m_vecGrantLeagueDefs.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IEconTool = off_479FCD0;
  this->m_vecGrantLeagueDefs.m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_vecGrantLeagueDefs.m_Memory;
    CUtlMemory<unsigned int,int>::Purge(&this->m_vecGrantLeagueDefs.m_Memory);
    if ( (this->m_vecGrantLeagueDefs.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<unsigned int,int>::Purge(p_m_Memory);
  }
  this->m_vecBonusItemDef.m_Size = 0;
  v2 = (this->m_vecBonusItemDef.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IEconTool = off_47A8E30;
  if ( v2 )
  {
    CUtlMemory<item_definition_index_t,int>::Purge(&this->m_vecBonusItemDef.m_Memory);
    if ( (this->m_vecBonusItemDef.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<item_definition_index_t,int>::Purge(&this->m_vecBonusItemDef.m_Memory);
  }
}


// CEconTool_Compendium::~CEconTool_Compendium  (line 541, @0x0000000002e560c0, libserver.so)  // inlines: Purge, RemoveAll, ~CEconTool_Compendium, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~IEconTool
// calls: operator delete, CUtlMemory<item_definition_index_t, int>::Purge, CUtlMemory<unsigned int, int>::Purge
void __fastcall CEconTool_Compendium::~CEconTool_Compendium(CEconTool_Compendium *const this)
{
  bool v2; // zf
  CUtlMemory<unsigned int,int> *p_m_Memory; // r12

  v2 = (this->m_vecGrantLeagueDefs.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IEconTool = off_479FCD0;
  this->m_vecGrantLeagueDefs.m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_vecGrantLeagueDefs.m_Memory;
    CUtlMemory<unsigned int,int>::Purge(&this->m_vecGrantLeagueDefs.m_Memory);
    if ( (this->m_vecGrantLeagueDefs.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<unsigned int,int>::Purge(p_m_Memory);
  }
  this->m_vecBonusItemDef.m_Size = 0;
  v2 = (this->m_vecBonusItemDef.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IEconTool = off_47A8E30;
  if ( !v2
    || (CUtlMemory<item_definition_index_t,int>::Purge(&this->m_vecBonusItemDef.m_Memory),
        (this->m_vecBonusItemDef.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    operator delete(this);
  }
  else
  {
    CUtlMemory<item_definition_index_t,int>::Purge(&this->m_vecBonusItemDef.m_Memory);
    operator delete(this);
  }
}


// CEconTool_Compendium::CEconTool_Compendium  (line 544, @0x0000000002e592e0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase
// calls: IEconTool::IEconTool
// callers: CDOTAItemSchema::CreateEconToolImpl
void __fastcall CEconTool_Compendium::CEconTool_Compendium(
        CEconTool_Compendium *const this,
        const char *pszTypeName,
        const char *pszUseString,
        KeyValues *pUsageKV)
{
  IEconTool::IEconTool(this, pszTypeName, pszUseString, 0, item_capabilities_t::ITEM_CAP_NONE, pUsageKV);
  this->m_vecGrantLeagueDefs.m_Size = 0;
  this->_vptr_IEconTool = off_479FCD0;
  this->m_vecGrantLeagueDefs.m_Memory.m_pMemory = 0;
  this->m_vecGrantLeagueDefs.m_Memory.m_nAllocationCount = 0;
  this->m_vecGrantLeagueDefs.m_Memory.m_nGrowSize = 0;
}


// CEconTool_Compendium::BInitFromKV  (line 549, @0x0000000002e5c570, libserver.so)  // inlines: AddToTail, CUtlMemory, CUtlStringList, CUtlStringList_Base, CUtlVector, CUtlVectorBase, CopyConstruct<unsigned int>, Element, GrowMemory, Purge, PurgeAndDeleteElements, RemoveAll, V_isempty, end, operator(), operator[], ~CUtlMemory, ~CUtlStringList, ~CUtlStringList_Base, ~CUtlVector, ~CUtlVectorBase
// calls: IEconTool::BInitFromKV, KeyValues::FindKey, KeyValues::GetString, V_SplitString(char const*,char const*,CUtlVector<char *,CUtlMemory<char *,int>> &), V_atoi, CUtlMemory<char*, int>::Purge, KeyValues::GetInt, __cxa_guard_acquire, CKeySymbol::CKeySymbol, __cxa_guard_release, CUtlMemory<unsigned int, int>::Grow, __cxa_guard_abort (15 total)
// strings: "grant_league_def", "grant_points_def", "grant_action_id", "original_purchaser_field", "grant_event_ownership", "grant_steam_package" (10 total)
// globals: `guard variable for'CEconTool_Compendium::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator() cons, CEconTool_Compendium::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator() const(char const*)::s_sy
bool __fastcall CEconTool_Compendium::BInitFromKV(
        CEconTool_Compendium *const this,
        KeyValues *pToolKV,
        CUtlVector<CUtlString,CUtlMemory<CUtlString,int> > *pVecErrors)
{
  bool v5; // r14
  const char *String; // rax
  int m_Size; // eax
  char **m_pMemory; // rbx
  unsigned int v10; // r13d
  __int64 v11; // r15
  int v12; // eax
  unsigned int *v13; // rax
  __int64 v14; // r15
  int v15; // r13d
  char *v16; // rsi
  uint32 Int; // eax
  KeyValues *pUsageKV; // [rsp+18h] [rbp-68h]
  char **__for_end; // [rsp+28h] [rbp-58h]
  CUtlStringList vecStrings; // [rsp+30h] [rbp-50h] BYREF

  v5 = IEconTool::BInitFromKV(this, pToolKV, pVecErrors);
  if ( v5 )
  {
    if ( `guard variable for'CEconTool_Compendium::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator() const(char const*)::s_sym == 0
      && __cxa_guard_acquire(&`guard variable for'CEconTool_Compendium::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator() const(char const*)::s_sym) != 0 )
    {
      CKeySymbol::CKeySymbol(
        &CEconTool_Compendium::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator() const(char const*)::s_sym,
        "usage");
      __cxa_guard_release(&`guard variable for'CEconTool_Compendium::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator() const(char const*)::s_sym);
    }
    pUsageKV = KeyValues::FindKey(
                 pToolKV,
                 CEconTool_Compendium::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator() const(char const*)::s_sym);
    if ( pUsageKV != 0 )
    {
      String = KeyValues::GetString(pUsageKV, "grant_league_def", 0, 0, 0);
      if ( String != 0 && *String != 0 )
      {
        vecStrings.m_Size = 0;
        vecStrings.m_Memory.m_pMemory = 0;
        vecStrings.m_Memory.m_nAllocationCount = 0;
        vecStrings.m_Memory.m_nGrowSize = 0;
        V_SplitString(String, ";", &vecStrings);
        m_Size = vecStrings.m_Size;
        m_pMemory = vecStrings.m_Memory.m_pMemory;
        __for_end = &vecStrings.m_Memory.m_pMemory[vecStrings.m_Size];
        if ( vecStrings.m_Memory.m_pMemory != __for_end )
        {
          do
          {
            v10 = V_atoi(*m_pMemory);
            if ( v10 != 0 )
            {
              v11 = this->m_vecGrantLeagueDefs.m_Size;
              v12 = this->m_vecGrantLeagueDefs.m_Size;
              if ( v11 == this->m_vecGrantLeagueDefs.m_Memory.m_nAllocationCount )
              {
                CUtlMemory<unsigned int,int>::Grow(&this->m_vecGrantLeagueDefs.m_Memory, 1);
                v12 = this->m_vecGrantLeagueDefs.m_Size;
              }
              this->m_vecGrantLeagueDefs.m_Size = v12 + 1;
              v13 = &this->m_vecGrantLeagueDefs.m_Memory.m_pMemory[v11];
              if ( v13 != 0 )
                *v13 = v10;
            }
            ++m_pMemory;
          }
          while ( __for_end != m_pMemory );
          m_Size = vecStrings.m_Size;
        }
        if ( m_Size > 0 )
        {
          v14 = 0;
          v15 = 0;
          do
          {
            ++v15;
            v16 = vecStrings.m_Memory.m_pMemory[v14++];
            (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v16);
          }
          while ( v15 < vecStrings.m_Size );
        }
        vecStrings.m_Size = 0;
        if ( (vecStrings.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        {
          CUtlMemory<char *,int>::Purge(&vecStrings.m_Memory);
          if ( (vecStrings.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
            CUtlMemory<char *,int>::Purge(&vecStrings.m_Memory);
        }
      }
      this->m_nGrantPointsDef = KeyValues::GetInt(pUsageKV, "grant_points_def", 0);
      this->m_nGrantActionID = KeyValues::GetInt(pUsageKV, "grant_action_id", 0);
      this->m_nOriginalPurchaserField = KeyValues::GetInt(pUsageKV, "original_purchaser_field", 0);
      this->m_nGrantEventOwnership = KeyValues::GetInt(pUsageKV, "grant_event_ownership", 0);
      this->m_nGrantSteamPackage = KeyValues::GetInt(pUsageKV, "grant_steam_package", 0);
      this->m_nGrantPoints = KeyValues::GetInt(pUsageKV, "grant_event_points", 0);
      this->m_nGrantPremiumPoints = KeyValues::GetInt(pUsageKV, "grant_event_premium_points", 0);
      Int = KeyValues::GetInt(pUsageKV, "already_owned_grant_points", 0);
    }
    else
    {
      this->m_nGrantPointsDef = 0;
      Int = 0;
      this->m_nGrantActionID = 0;
      this->m_nOriginalPurchaserField = 0;
      this->m_nGrantEventOwnership = 0;
      this->m_nGrantSteamPackage = 0;
      this->m_nGrantPoints = 0;
      this->m_nGrantPremiumPoints = 0;
    }
    this->m_nAlreadyOwnedGrantPoints = Int;
    if ( pVecErrors != 0 )
      return pVecErrors->m_Size == 0;
  }
  return v5;
}


// CEconTool_Compendium::BFinishInitialization  (line 587, @0x0000000002e4efa0, libserver.so)
bool __fastcall CEconTool_Compendium::BFinishInitialization(CEconTool_Compendium *const this)
{
  return 1;
}


// CEconTool_EmoticonUnlock::~CEconTool_EmoticonUnlock  (line 623, @0x0000000002e54b00, libserver.so)  // inlines: Purge, RemoveAll, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~IEconTool
// calls: CUtlMemory<item_definition_index_t, int>::Purge
void __fastcall CEconTool_EmoticonUnlock::~CEconTool_EmoticonUnlock(CEconTool_EmoticonUnlock *const this)
{
  bool v2; // zf
  CUtlVectorBase<item_definition_index_t,CUtlMemory<item_definition_index_t,int> >::CAllocator *p_m_Memory; // r12

  this->m_vecBonusItemDef.m_Size = 0;
  v2 = (this->m_vecBonusItemDef.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IEconTool = off_47A8E30;
  if ( v2 )
  {
    p_m_Memory = &this->m_vecBonusItemDef.m_Memory;
    CUtlMemory<item_definition_index_t,int>::Purge(&this->m_vecBonusItemDef.m_Memory);
    if ( (this->m_vecBonusItemDef.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<item_definition_index_t,int>::Purge(p_m_Memory);
  }
}


// CEconTool_EmoticonUnlock::~CEconTool_EmoticonUnlock  (line 623, @0x0000000002e55be0, libserver.so)  // inlines: Purge, RemoveAll, ~CEconTool_EmoticonUnlock, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~IEconTool
// calls: operator delete, CUtlMemory<item_definition_index_t, int>::Purge
void __fastcall CEconTool_EmoticonUnlock::~CEconTool_EmoticonUnlock(CEconTool_EmoticonUnlock *const this)
{
  bool v2; // zf
  CUtlVectorBase<item_definition_index_t,CUtlMemory<item_definition_index_t,int> >::CAllocator *p_m_Memory; // r12

  this->m_vecBonusItemDef.m_Size = 0;
  v2 = (this->m_vecBonusItemDef.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IEconTool = off_47A8E30;
  if ( !v2
    || (p_m_Memory = &this->m_vecBonusItemDef.m_Memory,
        CUtlMemory<item_definition_index_t,int>::Purge(&this->m_vecBonusItemDef.m_Memory),
        (this->m_vecBonusItemDef.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    operator delete(this);
  }
  else
  {
    CUtlMemory<item_definition_index_t,int>::Purge(p_m_Memory);
    operator delete(this);
  }
}


// CEconTool_EmoticonUnlock::BInitFromKV  (line 631, @0x0000000002e52950, libserver.so)  // inlines: operator()
// calls: IEconTool::BInitFromKV, KeyValues::FindKey, KeyValues::GetInt, __cxa_guard_acquire, CKeySymbol::CKeySymbol, __cxa_guard_release, __cxa_guard_abort, _Unwind_Resume
// strings: "emoticon_id_start", "emoticon_id_end", "usage"
// globals: `guard variable for'CEconTool_EmoticonUnlock::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator() , CEconTool_EmoticonUnlock::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator() const(char const*)::
bool __fastcall CEconTool_EmoticonUnlock::BInitFromKV(
        CEconTool_EmoticonUnlock *const this,
        KeyValues *pToolKV,
        CUtlVector<CUtlString,CUtlMemory<CUtlString,int> > *pVecErrors)
{
  bool result; // al
  KeyValues *Key; // rax
  KeyValues *v8; // r13
  uint32 Int; // eax

  result = IEconTool::BInitFromKV(this, pToolKV, pVecErrors);
  if ( result )
  {
    if ( `guard variable for'CEconTool_EmoticonUnlock::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator() const(char const*)::s_sym == 0
      && __cxa_guard_acquire(&`guard variable for'CEconTool_EmoticonUnlock::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator() const(char const*)::s_sym) != 0 )
    {
      CKeySymbol::CKeySymbol(
        &CEconTool_EmoticonUnlock::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator() const(char const*)::s_sym,
        "usage");
      __cxa_guard_release(&`guard variable for'CEconTool_EmoticonUnlock::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator() const(char const*)::s_sym);
    }
    Key = KeyValues::FindKey(
            pToolKV,
            CEconTool_EmoticonUnlock::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator() const(char const*)::s_sym);
    v8 = Key;
    if ( Key != 0 )
    {
      this->m_unEmoticonIDStart = KeyValues::GetInt(Key, "emoticon_id_start", 0);
      Int = KeyValues::GetInt(v8, "emoticon_id_end", 0);
    }
    else
    {
      this->m_unEmoticonIDStart = 0;
      Int = 0;
    }
    this->m_unEmoticonIDEnd = Int;
    return pVecErrors == 0 || pVecErrors->m_Size == 0;
  }
  return result;
}


// CEconTool_EmoticonUnlock::BFinishInitialization  (line 646, @0x0000000002e4efb0, libserver.so)
bool __fastcall CEconTool_EmoticonUnlock::BFinishInitialization(CEconTool_EmoticonUnlock *const this)
{
  return 1;
}


// CEconTool_CustomGameTicket::~CEconTool_CustomGameTicket  (line 668, @0x0000000002e54860, libserver.so)  // inlines: Purge, RemoveAll, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~IEconTool
// calls: CUtlMemory<item_definition_index_t, int>::Purge
void __fastcall CEconTool_CustomGameTicket::~CEconTool_CustomGameTicket(CEconTool_CustomGameTicket *const this)
{
  bool v2; // zf
  CUtlVectorBase<item_definition_index_t,CUtlMemory<item_definition_index_t,int> >::CAllocator *p_m_Memory; // r12

  this->m_vecBonusItemDef.m_Size = 0;
  v2 = (this->m_vecBonusItemDef.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IEconTool = off_47A8E30;
  if ( v2 )
  {
    p_m_Memory = &this->m_vecBonusItemDef.m_Memory;
    CUtlMemory<item_definition_index_t,int>::Purge(&this->m_vecBonusItemDef.m_Memory);
    if ( (this->m_vecBonusItemDef.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<item_definition_index_t,int>::Purge(p_m_Memory);
  }
}


// CEconTool_CustomGameTicket::~CEconTool_CustomGameTicket  (line 668, @0x0000000002e55550, libserver.so)  // inlines: Purge, RemoveAll, ~CEconTool_CustomGameTicket, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~IEconTool
// calls: operator delete, CUtlMemory<item_definition_index_t, int>::Purge
void __fastcall CEconTool_CustomGameTicket::~CEconTool_CustomGameTicket(CEconTool_CustomGameTicket *const this)
{
  bool v2; // zf
  CUtlVectorBase<item_definition_index_t,CUtlMemory<item_definition_index_t,int> >::CAllocator *p_m_Memory; // r12

  this->m_vecBonusItemDef.m_Size = 0;
  v2 = (this->m_vecBonusItemDef.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IEconTool = off_47A8E30;
  if ( !v2
    || (p_m_Memory = &this->m_vecBonusItemDef.m_Memory,
        CUtlMemory<item_definition_index_t,int>::Purge(&this->m_vecBonusItemDef.m_Memory),
        (this->m_vecBonusItemDef.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    operator delete(this);
  }
  else
  {
    CUtlMemory<item_definition_index_t,int>::Purge(p_m_Memory);
    operator delete(this);
  }
}


// CEconTool_CustomGameTicket::BInitFromKV  (line 676, @0x0000000002e52a50, libserver.so)  // inlines: operator()
// calls: IEconTool::BInitFromKV, KeyValues::FindKey, KeyValues::GetUint64, KeyValues::GetInt, __cxa_guard_acquire, CKeySymbol::CKeySymbol, __cxa_guard_release, __cxa_guard_abort, _Unwind_Resume
// strings: "published_file_id", "product_id", "duration_seconds", "usage"
// globals: `guard variable for'CEconTool_CustomGameTicket::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator(, CEconTool_CustomGameTicket::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator() const(char const*)
bool __fastcall CEconTool_CustomGameTicket::BInitFromKV(
        CEconTool_CustomGameTicket *const this,
        KeyValues *pToolKV,
        CUtlVector<CUtlString,CUtlMemory<CUtlString,int> > *pVecErrors)
{
  bool result; // al
  KeyValues *Key; // rax
  KeyValues *v8; // r13
  uint32 Int; // eax

  result = IEconTool::BInitFromKV(this, pToolKV, pVecErrors);
  if ( result )
  {
    if ( `guard variable for'CEconTool_CustomGameTicket::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator() const(char const*)::s_sym == 0
      && __cxa_guard_acquire(&`guard variable for'CEconTool_CustomGameTicket::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator() const(char const*)::s_sym) != 0 )
    {
      CKeySymbol::CKeySymbol(
        &CEconTool_CustomGameTicket::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator() const(char const*)::s_sym,
        "usage");
      __cxa_guard_release(&`guard variable for'CEconTool_CustomGameTicket::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator() const(char const*)::s_sym);
    }
    Key = KeyValues::FindKey(
            pToolKV,
            CEconTool_CustomGameTicket::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator() const(char const*)::s_sym);
    v8 = Key;
    if ( Key != 0 )
    {
      this->m_unPublishedFileID = KeyValues::GetUint64(Key, "published_file_id", 0);
      this->m_unProductID = KeyValues::GetInt(v8, "product_id", 0);
      Int = KeyValues::GetInt(v8, "duration_seconds", 0);
    }
    else
    {
      this->m_unPublishedFileID = 0;
      Int = 0;
      this->m_unProductID = 0;
    }
    this->m_unDurationSeconds = Int;
    return pVecErrors == 0 || pVecErrors->m_Size == 0;
  }
  return result;
}


// CEconTool_CustomGameTicket::BFinishInitialization  (line 696, @0x0000000002e4efc0, libserver.so)
bool __fastcall CEconTool_CustomGameTicket::BFinishInitialization(CEconTool_CustomGameTicket *const this)
{
  return 1;
}


// CEconTool_PennantUpgrade::~CEconTool_PennantUpgrade  (line 714, @0x0000000002e55da0, libserver.so)  // inlines: Purge, RemoveAll, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~IEconTool
// calls: CUtlMemory<item_definition_index_t, int>::Purge, CUtlMemory<int, int>::Purge
void __fastcall CEconTool_PennantUpgrade::~CEconTool_PennantUpgrade(CEconTool_PennantUpgrade *const this)
{
  bool v2; // zf
  CUtlVectorBase<int,CUtlMemory<int,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_vecRequiredTags.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IEconTool = off_47A0D50;
  this->m_vecRequiredTags.m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_vecRequiredTags.m_Memory;
    CUtlMemory<int,int>::Purge(&this->m_vecRequiredTags.m_Memory);
    if ( (this->m_vecRequiredTags.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<int,int>::Purge(p_m_Memory);
  }
  this->m_vecBonusItemDef.m_Size = 0;
  v2 = (this->m_vecBonusItemDef.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IEconTool = off_47A8E30;
  if ( v2 )
  {
    CUtlMemory<item_definition_index_t,int>::Purge(&this->m_vecBonusItemDef.m_Memory);
    if ( (this->m_vecBonusItemDef.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<item_definition_index_t,int>::Purge(&this->m_vecBonusItemDef.m_Memory);
  }
}


// CEconTool_PennantUpgrade::~CEconTool_PennantUpgrade  (line 714, @0x0000000002e55f80, libserver.so)  // inlines: Purge, RemoveAll, ~CEconTool_PennantUpgrade, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~IEconTool
// calls: operator delete, CUtlMemory<item_definition_index_t, int>::Purge, CUtlMemory<int, int>::Purge
void __fastcall CEconTool_PennantUpgrade::~CEconTool_PennantUpgrade(CEconTool_PennantUpgrade *const this)
{
  bool v2; // zf
  CUtlVectorBase<int,CUtlMemory<int,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_vecRequiredTags.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IEconTool = off_47A0D50;
  this->m_vecRequiredTags.m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_vecRequiredTags.m_Memory;
    CUtlMemory<int,int>::Purge(&this->m_vecRequiredTags.m_Memory);
    if ( (this->m_vecRequiredTags.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<int,int>::Purge(p_m_Memory);
  }
  this->m_vecBonusItemDef.m_Size = 0;
  v2 = (this->m_vecBonusItemDef.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IEconTool = off_47A8E30;
  if ( !v2
    || (CUtlMemory<item_definition_index_t,int>::Purge(&this->m_vecBonusItemDef.m_Memory),
        (this->m_vecBonusItemDef.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    operator delete(this);
  }
  else
  {
    CUtlMemory<item_definition_index_t,int>::Purge(&this->m_vecBonusItemDef.m_Memory);
    operator delete(this);
  }
}


// CEconTool_PennantUpgrade::CEconTool_PennantUpgrade  (line 717, @0x0000000002e59240, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase
// calls: IEconTool::IEconTool
// callers: CDOTAItemSchema::CreateEconToolImpl
void __fastcall CEconTool_PennantUpgrade::CEconTool_PennantUpgrade(
        CEconTool_PennantUpgrade *const this,
        const char *pszTypeName,
        const char *pszUseString,
        item_capabilities_t unCapabilities,
        KeyValues *pUsageKV)
{
  IEconTool::IEconTool(this, pszTypeName, pszUseString, 0, unCapabilities, pUsageKV);
  this->m_vecRequiredTags.m_Size = 0;
  this->_vptr_IEconTool = off_47A0D50;
  this->m_vecRequiredTags.m_Memory.m_pMemory = 0;
  this->m_vecRequiredTags.m_Memory.m_nAllocationCount = 0;
  this->m_vecRequiredTags.m_Memory.m_nGrowSize = 0;
}


// CEconTool_PennantUpgrade::BInitFromKV  (line 722, @0x0000000002e5ed40, libserver.so)  // inlines: AddToTail, CopyConstruct<int>, Element, GrowMemory, operator(), operator[]
// calls: IEconTool::BInitFromKV, KeyValues::FindKey, KeyValues::GetFirstSubKey, KeyValues::GetNextKey, KeyValues::GetName, GetItemSchema, CEconItemSchema::GetHandleForTag, CUtlMemory<int, int>::Grow, __cxa_guard_acquire, CKeySymbol::CKeySymbol, __cxa_guard_release, __cxa_guard_abort (13 total)
// strings: "required_tags", "usage"
// globals: `guard variable for'CEconTool_PennantUpgrade::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator() , CEconTool_PennantUpgrade::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator() const(char const*)::
bool __fastcall CEconTool_PennantUpgrade::BInitFromKV(
        CEconTool_PennantUpgrade *const this,
        KeyValues *pToolKV,
        CUtlVector<CUtlString,CUtlMemory<CUtlString,int> > *pVecErrors)
{
  bool result; // al
  KeyValues *Key; // rax
  KeyValues *v8; // rax
  KeyValues *i; // r12
  int *v10; // rdx
  const char *Name; // r13
  GameItemSchema_t *ItemSchema; // rax
  econ_tag_handle_t HandleForTag; // eax
  __int64 m_Size; // r13
  int v15; // edx
  econ_tag_handle_t v16; // [rsp+Ch] [rbp-34h]

  result = IEconTool::BInitFromKV(this, pToolKV, pVecErrors);
  if ( result )
  {
    if ( `guard variable for'CEconTool_PennantUpgrade::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator() const(char const*)::s_sym == 0
      && __cxa_guard_acquire(&`guard variable for'CEconTool_PennantUpgrade::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator() const(char const*)::s_sym) != 0 )
    {
      CKeySymbol::CKeySymbol(
        &CEconTool_PennantUpgrade::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator() const(char const*)::s_sym,
        "usage");
      __cxa_guard_release(&`guard variable for'CEconTool_PennantUpgrade::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator() const(char const*)::s_sym);
    }
    Key = KeyValues::FindKey(
            pToolKV,
            CEconTool_PennantUpgrade::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator() const(char const*)::s_sym);
    if ( Key != 0 )
    {
      v8 = KeyValues::FindKey(Key, "required_tags", 0);
      if ( v8 != 0 )
      {
        for ( i = KeyValues::GetFirstSubKey(v8); i != 0; i = KeyValues::GetNextKey(i) )
        {
          Name = KeyValues::GetName(i);
          ItemSchema = GetItemSchema();
          HandleForTag = CEconItemSchema::GetHandleForTag(ItemSchema, Name);
          m_Size = this->m_vecRequiredTags.m_Size;
          v15 = this->m_vecRequiredTags.m_Size;
          if ( m_Size == this->m_vecRequiredTags.m_Memory.m_nAllocationCount )
          {
            v16 = HandleForTag;
            CUtlMemory<int,int>::Grow(&this->m_vecRequiredTags.m_Memory, 1);
            v15 = this->m_vecRequiredTags.m_Size;
            HandleForTag = v16;
          }
          this->m_vecRequiredTags.m_Size = v15 + 1;
          v10 = &this->m_vecRequiredTags.m_Memory.m_pMemory[m_Size];
          if ( v10 != 0 )
            *v10 = HandleForTag;
        }
      }
    }
    return pVecErrors == 0 || pVecErrors->m_Size == 0;
  }
  return result;
}


// CEconTool_GemCombiner::~CEconTool_GemCombiner  (line 759, @0x0000000002e54440, libserver.so)  // inlines: Purge, RemoveAll, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~IEconTool
// calls: CUtlMemory<item_definition_index_t, int>::Purge
void __fastcall CEconTool_GemCombiner::~CEconTool_GemCombiner(CEconTool_GemCombiner *const this)
{
  bool v2; // zf
  CUtlVectorBase<item_definition_index_t,CUtlMemory<item_definition_index_t,int> >::CAllocator *p_m_Memory; // r12

  this->m_vecBonusItemDef.m_Size = 0;
  v2 = (this->m_vecBonusItemDef.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IEconTool = off_47A8E30;
  if ( v2 )
  {
    p_m_Memory = &this->m_vecBonusItemDef.m_Memory;
    CUtlMemory<item_definition_index_t,int>::Purge(&this->m_vecBonusItemDef.m_Memory);
    if ( (this->m_vecBonusItemDef.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<item_definition_index_t,int>::Purge(p_m_Memory);
  }
}


// CEconTool_GemCombiner::~CEconTool_GemCombiner  (line 759, @0x0000000002e55780, libserver.so)  // inlines: Purge, RemoveAll, ~CEconTool_GemCombiner, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~IEconTool
// calls: operator delete, CUtlMemory<item_definition_index_t, int>::Purge
void __fastcall CEconTool_GemCombiner::~CEconTool_GemCombiner(CEconTool_GemCombiner *const this)
{
  bool v2; // zf
  CUtlVectorBase<item_definition_index_t,CUtlMemory<item_definition_index_t,int> >::CAllocator *p_m_Memory; // r12

  this->m_vecBonusItemDef.m_Size = 0;
  v2 = (this->m_vecBonusItemDef.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IEconTool = off_47A8E30;
  if ( !v2
    || (p_m_Memory = &this->m_vecBonusItemDef.m_Memory,
        CUtlMemory<item_definition_index_t,int>::Purge(&this->m_vecBonusItemDef.m_Memory),
        (this->m_vecBonusItemDef.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    operator delete(this);
  }
  else
  {
    CUtlMemory<item_definition_index_t,int>::Purge(p_m_Memory);
    operator delete(this);
  }
}


// CEconTool_GemCombiner::BInitFromKV  (line 767, @0x0000000002e518a0, libserver.so)  // inlines: GetBool, operator()
// calls: IEconTool::BInitFromKV, KeyValues::FindKey, KeyValues::GetInt, __cxa_guard_acquire, CKeySymbol::CKeySymbol, __cxa_guard_release, __cxa_guard_abort, _Unwind_Resume
// strings: "filter_autograph_id", "usage"
// globals: `guard variable for'CEconTool_GemCombiner::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator() con, CEconTool_GemCombiner::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator() const(char const*)::s_s
bool __fastcall CEconTool_GemCombiner::BInitFromKV(
        CEconTool_GemCombiner *const this,
        KeyValues *pToolKV,
        CUtlVector<CUtlString,CUtlMemory<CUtlString,int> > *pVecErrors)
{
  bool v5; // bl
  bool v7; // zf
  KeyValues *Key; // rax

  v5 = IEconTool::BInitFromKV(this, pToolKV, pVecErrors);
  if ( !v5 )
    return v5;
  v7 = `guard variable for'CEconTool_GemCombiner::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator() const(char const*)::s_sym == 0;
  this->m_bFilterAutographID = 0;
  if ( v7
    && __cxa_guard_acquire(&`guard variable for'CEconTool_GemCombiner::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator() const(char const*)::s_sym) != 0 )
  {
    CKeySymbol::CKeySymbol(
      &CEconTool_GemCombiner::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator() const(char const*)::s_sym,
      "usage");
    __cxa_guard_release(&`guard variable for'CEconTool_GemCombiner::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator() const(char const*)::s_sym);
  }
  Key = KeyValues::FindKey(
          pToolKV,
          CEconTool_GemCombiner::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator() const(char const*)::s_sym);
  if ( Key == 0 )
    return v5;
  v7 = KeyValues::GetInt(Key, "filter_autograph_id", 0) == 0;
  this->m_bFilterAutographID = !v7;
  return v5;
}


// CEconTool_EggEssence::~CEconTool_EggEssence  (line 796, @0x0000000002e55ee0, libserver.so)  // inlines: Purge, RemoveAll, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~IEconTool
// calls: CUtlMemory<item_definition_index_t, int>::Purge, CUtlMemory<int, int>::Purge
void __fastcall CEconTool_EggEssence::~CEconTool_EggEssence(CEconTool_EggEssence *const this)
{
  bool v2; // zf
  CUtlVectorBase<int,CUtlMemory<int,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_vecRequiredTags.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IEconTool = off_47A0E70;
  this->m_vecRequiredTags.m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_vecRequiredTags.m_Memory;
    CUtlMemory<int,int>::Purge(&this->m_vecRequiredTags.m_Memory);
    if ( (this->m_vecRequiredTags.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<int,int>::Purge(p_m_Memory);
  }
  this->m_vecBonusItemDef.m_Size = 0;
  v2 = (this->m_vecBonusItemDef.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IEconTool = off_47A8E30;
  if ( v2 )
  {
    CUtlMemory<item_definition_index_t,int>::Purge(&this->m_vecBonusItemDef.m_Memory);
    if ( (this->m_vecBonusItemDef.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<item_definition_index_t,int>::Purge(&this->m_vecBonusItemDef.m_Memory);
  }
}


// CEconTool_EggEssence::~CEconTool_EggEssence  (line 796, @0x0000000002e56020, libserver.so)  // inlines: Purge, RemoveAll, ~CEconTool_EggEssence, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~IEconTool
// calls: operator delete, CUtlMemory<item_definition_index_t, int>::Purge, CUtlMemory<int, int>::Purge
void __fastcall CEconTool_EggEssence::~CEconTool_EggEssence(CEconTool_EggEssence *const this)
{
  bool v2; // zf
  CUtlVectorBase<int,CUtlMemory<int,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_vecRequiredTags.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IEconTool = off_47A0E70;
  this->m_vecRequiredTags.m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_vecRequiredTags.m_Memory;
    CUtlMemory<int,int>::Purge(&this->m_vecRequiredTags.m_Memory);
    if ( (this->m_vecRequiredTags.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<int,int>::Purge(p_m_Memory);
  }
  this->m_vecBonusItemDef.m_Size = 0;
  v2 = (this->m_vecBonusItemDef.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IEconTool = off_47A8E30;
  if ( !v2
    || (CUtlMemory<item_definition_index_t,int>::Purge(&this->m_vecBonusItemDef.m_Memory),
        (this->m_vecBonusItemDef.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    operator delete(this);
  }
  else
  {
    CUtlMemory<item_definition_index_t,int>::Purge(&this->m_vecBonusItemDef.m_Memory);
    operator delete(this);
  }
}


// CEconTool_EggEssence::CEconTool_EggEssence  (line 799, @0x0000000002e59290, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase
// calls: IEconTool::IEconTool
// callers: CDOTAItemSchema::CreateEconToolImpl
void __fastcall CEconTool_EggEssence::CEconTool_EggEssence(
        CEconTool_EggEssence *const this,
        const char *pszTypeName,
        const char *pszUseString,
        item_capabilities_t unCapabilities,
        KeyValues *pUsageKV)
{
  IEconTool::IEconTool(this, pszTypeName, pszUseString, 0, unCapabilities, pUsageKV);
  this->m_vecRequiredTags.m_Size = 0;
  this->_vptr_IEconTool = off_47A0E70;
  this->m_vecRequiredTags.m_Memory.m_pMemory = 0;
  this->m_vecRequiredTags.m_Memory.m_nAllocationCount = 0;
  this->m_vecRequiredTags.m_Memory.m_nGrowSize = 0;
}


// CEconTool_EggEssence::BInitFromKV  (line 804, @0x0000000002e5ebf0, libserver.so)  // inlines: AddToTail, CopyConstruct<int>, Element, GrowMemory, operator(), operator[]
// calls: IEconTool::BInitFromKV, KeyValues::FindKey, KeyValues::GetFirstSubKey, KeyValues::GetNextKey, KeyValues::GetName, GetItemSchema, CEconItemSchema::GetHandleForTag, CUtlMemory<int, int>::Grow, __cxa_guard_acquire, CKeySymbol::CKeySymbol, __cxa_guard_release, __cxa_guard_abort (13 total)
// strings: "required_tags", "usage"
// globals: `guard variable for'CEconTool_EggEssence::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator() cons, CEconTool_EggEssence::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator() const(char const*)::s_sy
bool __fastcall CEconTool_EggEssence::BInitFromKV(
        CEconTool_EggEssence *const this,
        KeyValues *pToolKV,
        CUtlVector<CUtlString,CUtlMemory<CUtlString,int> > *pVecErrors)
{
  bool v5; // r14
  KeyValues *Key; // rax
  KeyValues *v8; // rax
  KeyValues *i; // r12
  int *v10; // rdx
  const char *Name; // r13
  GameItemSchema_t *ItemSchema; // rax
  econ_tag_handle_t HandleForTag; // eax
  __int64 m_Size; // r13
  int v15; // edx
  econ_tag_handle_t v16; // [rsp+Ch] [rbp-34h]

  v5 = IEconTool::BInitFromKV(this, pToolKV, pVecErrors);
  if ( v5 )
  {
    if ( `guard variable for'CEconTool_EggEssence::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator() const(char const*)::s_sym == 0
      && __cxa_guard_acquire(&`guard variable for'CEconTool_EggEssence::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator() const(char const*)::s_sym) != 0 )
    {
      CKeySymbol::CKeySymbol(
        &CEconTool_EggEssence::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator() const(char const*)::s_sym,
        "usage");
      __cxa_guard_release(&`guard variable for'CEconTool_EggEssence::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator() const(char const*)::s_sym);
    }
    Key = KeyValues::FindKey(
            pToolKV,
            CEconTool_EggEssence::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator() const(char const*)::s_sym);
    if ( Key != 0 )
    {
      v8 = KeyValues::FindKey(Key, "required_tags", 0);
      if ( v8 != 0 )
      {
        for ( i = KeyValues::GetFirstSubKey(v8); i != 0; i = KeyValues::GetNextKey(i) )
        {
          Name = KeyValues::GetName(i);
          ItemSchema = GetItemSchema();
          HandleForTag = CEconItemSchema::GetHandleForTag(ItemSchema, Name);
          m_Size = this->m_vecRequiredTags.m_Size;
          v15 = this->m_vecRequiredTags.m_Size;
          if ( m_Size == this->m_vecRequiredTags.m_Memory.m_nAllocationCount )
          {
            v16 = HandleForTag;
            CUtlMemory<int,int>::Grow(&this->m_vecRequiredTags.m_Memory, 1);
            v15 = this->m_vecRequiredTags.m_Size;
            HandleForTag = v16;
          }
          this->m_vecRequiredTags.m_Size = v15 + 1;
          v10 = &this->m_vecRequiredTags.m_Memory.m_pMemory[m_Size];
          if ( v10 != 0 )
            *v10 = HandleForTag;
        }
      }
    }
  }
  return v5;
}


// CEconTool_UnusualPaint::~CEconTool_UnusualPaint  (line 841, @0x0000000002e54bc0, libserver.so)  // inlines: Purge, RemoveAll, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~IEconTool
// calls: CUtlMemory<item_definition_index_t, int>::Purge
void __fastcall CEconTool_UnusualPaint::~CEconTool_UnusualPaint(CEconTool_UnusualPaint *const this)
{
  bool v2; // zf
  CUtlVectorBase<item_definition_index_t,CUtlMemory<item_definition_index_t,int> >::CAllocator *p_m_Memory; // r12

  this->m_vecBonusItemDef.m_Size = 0;
  v2 = (this->m_vecBonusItemDef.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IEconTool = off_47A8E30;
  if ( v2 )
  {
    p_m_Memory = &this->m_vecBonusItemDef.m_Memory;
    CUtlMemory<item_definition_index_t,int>::Purge(&this->m_vecBonusItemDef.m_Memory);
    if ( (this->m_vecBonusItemDef.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<item_definition_index_t,int>::Purge(p_m_Memory);
  }
}


// CEconTool_UnusualPaint::~CEconTool_UnusualPaint  (line 841, @0x0000000002e55a20, libserver.so)  // inlines: Purge, RemoveAll, ~CEconTool_UnusualPaint, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~IEconTool
// calls: operator delete, CUtlMemory<item_definition_index_t, int>::Purge
void __fastcall CEconTool_UnusualPaint::~CEconTool_UnusualPaint(CEconTool_UnusualPaint *const this)
{
  bool v2; // zf
  CUtlVectorBase<item_definition_index_t,CUtlMemory<item_definition_index_t,int> >::CAllocator *p_m_Memory; // r12

  this->m_vecBonusItemDef.m_Size = 0;
  v2 = (this->m_vecBonusItemDef.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IEconTool = off_47A8E30;
  if ( !v2
    || (p_m_Memory = &this->m_vecBonusItemDef.m_Memory,
        CUtlMemory<item_definition_index_t,int>::Purge(&this->m_vecBonusItemDef.m_Memory),
        (this->m_vecBonusItemDef.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    operator delete(this);
  }
  else
  {
    CUtlMemory<item_definition_index_t,int>::Purge(p_m_Memory);
    operator delete(this);
  }
}


// CEconTool_PlayerCard::~CEconTool_PlayerCard  (line 861, @0x0000000002e547a0, libserver.so)  // inlines: Purge, RemoveAll, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~IEconTool
// calls: CUtlMemory<item_definition_index_t, int>::Purge
void __fastcall CEconTool_PlayerCard::~CEconTool_PlayerCard(CEconTool_PlayerCard *const this)
{
  bool v2; // zf
  CUtlVectorBase<item_definition_index_t,CUtlMemory<item_definition_index_t,int> >::CAllocator *p_m_Memory; // r12

  this->m_vecBonusItemDef.m_Size = 0;
  v2 = (this->m_vecBonusItemDef.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IEconTool = off_47A8E30;
  if ( v2 )
  {
    p_m_Memory = &this->m_vecBonusItemDef.m_Memory;
    CUtlMemory<item_definition_index_t,int>::Purge(&this->m_vecBonusItemDef.m_Memory);
    if ( (this->m_vecBonusItemDef.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<item_definition_index_t,int>::Purge(p_m_Memory);
  }
}


// CEconTool_PlayerCard::~CEconTool_PlayerCard  (line 861, @0x0000000002e55630, libserver.so)  // inlines: Purge, RemoveAll, ~CEconTool_PlayerCard, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~IEconTool
// calls: operator delete, CUtlMemory<item_definition_index_t, int>::Purge
void __fastcall CEconTool_PlayerCard::~CEconTool_PlayerCard(CEconTool_PlayerCard *const this)
{
  bool v2; // zf
  CUtlVectorBase<item_definition_index_t,CUtlMemory<item_definition_index_t,int> >::CAllocator *p_m_Memory; // r12

  this->m_vecBonusItemDef.m_Size = 0;
  v2 = (this->m_vecBonusItemDef.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IEconTool = off_47A8E30;
  if ( !v2
    || (p_m_Memory = &this->m_vecBonusItemDef.m_Memory,
        CUtlMemory<item_definition_index_t,int>::Purge(&this->m_vecBonusItemDef.m_Memory),
        (this->m_vecBonusItemDef.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    operator delete(this);
  }
  else
  {
    CUtlMemory<item_definition_index_t,int>::Purge(p_m_Memory);
    operator delete(this);
  }
}


// CEconTool_PlayerCard::CEconTool_PlayerCard  (line 864, @0x0000000002e572c0, libserver.so)  // inlines: CEconSchemaSymbol, CUtlSymbolLarge
// calls: IEconTool::IEconTool
// callers: CDOTAItemSchema::CreateEconToolImpl
void __fastcall CEconTool_PlayerCard::CEconTool_PlayerCard(
        CEconTool_PlayerCard *const this,
        const char *pszTypeName,
        const char *pszUseString,
        KeyValues *pUsageKV)
{
  IEconTool::IEconTool(this, pszTypeName, pszUseString, 0, item_capabilities_t::ITEM_CAP_NONE, pUsageKV);
  this->m_symName.u.m_Id = 0;
  this->_vptr_IEconTool = off_479FDF0;
  this->m_symTeamName.u.m_Id = 0;
  this->m_symCountryCode.u.m_Id = 0;
  this->m_symRole.u.m_Id = 0;
  this->m_symTeamImage.u.m_Id = 0;
  this->m_symPlayerImage.u.m_Id = 0;
}


// CEconTool_PlayerCard::BInitFromKV  (line 869, @0x0000000002e52b80, libserver.so)
// calls: IEconTool::BInitFromKV, KeyValues::GetUint64, KeyValues::GetString, CEconSchemaSymbol::operator=, CRTime::RTime32FromString, KeyValues::GetInt
// strings: "team_name", "country_code", "1970-01-01", "date_of_birth", "team_image", "playerimage" (10 total)
bool __fastcall CEconTool_PlayerCard::BInitFromKV(
        CEconTool_PlayerCard *const this,
        KeyValues *pToolKV,
        CUtlVector<CUtlString,CUtlMemory<CUtlString,int> > *pVecErrors)
{
  bool result; // al
  const char *String; // rax
  const char *v8; // rax
  const char *v9; // rax
  const char *v10; // rax
  const char *v11; // rax
  const char *v12; // rax
  const char *v13; // rax

  result = IEconTool::BInitFromKV(this, pToolKV, pVecErrors);
  if ( result )
  {
    this->m_nSteamID = KeyValues::GetUint64(pToolKV, "id", 0);
    String = KeyValues::GetString(pToolKV, "name", "", 0, 0);
    CEconSchemaSymbol::operator=(&this->m_symName, String);
    v8 = KeyValues::GetString(pToolKV, "team_name", "", 0, 0);
    CEconSchemaSymbol::operator=(&this->m_symTeamName, v8);
    v9 = KeyValues::GetString(pToolKV, "country_code", "", 0, 0);
    CEconSchemaSymbol::operator=(&this->m_symCountryCode, v9);
    v10 = KeyValues::GetString(pToolKV, "date_of_birth", "1970-01-01", 0, 0);
    this->m_nDateOfBirth = CRTime::RTime32FromString(v10);
    v11 = KeyValues::GetString(pToolKV, "role", "", 0, 0);
    CEconSchemaSymbol::operator=(&this->m_symRole, v11);
    v12 = KeyValues::GetString(pToolKV, "team_image", "", 0, 0);
    CEconSchemaSymbol::operator=(&this->m_symTeamImage, v12);
    v13 = KeyValues::GetString(pToolKV, "playerimage", "", 0, 0);
    CEconSchemaSymbol::operator=(&this->m_symPlayerImage, v13);
    this->m_nMatchID = KeyValues::GetUint64(pToolKV, "match_id", 0);
    this->m_pFavoriteHeroes[0] = KeyValues::GetInt(pToolKV, "hero_1", 0);
    this->m_pFavoriteHeroes[1] = KeyValues::GetInt(pToolKV, "hero_2", 0);
    this->m_pFavoriteHeroes[2] = KeyValues::GetInt(pToolKV, "hero_3", 0);
    return pVecErrors == 0 || pVecErrors->m_Size == 0;
  }
  return result;
}


// CEconTool_PlayerCardPack::~CEconTool_PlayerCardPack  (line 943, @0x0000000002e56160, libserver.so)  // inlines: Purge, RemoveAll, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~IEconTool
// calls: CUtlMemory<item_definition_index_t, int>::Purge, CUtlMemory<unsigned int, int>::Purge, CUtlMemory<CEconTool_PlayerCardPack::TeamInfo_t, int>::Purge
void __fastcall CEconTool_PlayerCardPack::~CEconTool_PlayerCardPack(CEconTool_PlayerCardPack *const this)
{
  bool v2; // zf
  CUtlVectorBase<CEconTool_PlayerCardPack::TeamInfo_t,CUtlMemory<CEconTool_PlayerCardPack::TeamInfo_t,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_vecTeams.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IEconTool = off_479FE50;
  this->m_vecTeams.m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_vecTeams.m_Memory;
    CUtlMemory<CEconTool_PlayerCardPack::TeamInfo_t,int>::Purge(&this->m_vecTeams.m_Memory);
    if ( (this->m_vecTeams.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CEconTool_PlayerCardPack::TeamInfo_t,int>::Purge(p_m_Memory);
  }
  v2 = (this->m_vecPlayerAccountIDs.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_vecPlayerAccountIDs.m_Size = 0;
  if ( v2 )
  {
    CUtlMemory<unsigned int,int>::Purge(&this->m_vecPlayerAccountIDs.m_Memory);
    if ( (this->m_vecPlayerAccountIDs.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<unsigned int,int>::Purge(&this->m_vecPlayerAccountIDs.m_Memory);
  }
  this->m_vecBonusItemDef.m_Size = 0;
  v2 = (this->m_vecBonusItemDef.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IEconTool = off_47A8E30;
  if ( v2 )
  {
    CUtlMemory<item_definition_index_t,int>::Purge(&this->m_vecBonusItemDef.m_Memory);
    if ( (this->m_vecBonusItemDef.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<item_definition_index_t,int>::Purge(&this->m_vecBonusItemDef.m_Memory);
  }
}


// CEconTool_PlayerCardPack::~CEconTool_PlayerCardPack  (line 943, @0x0000000002e56240, libserver.so)  // inlines: Purge, RemoveAll, ~CEconTool_PlayerCardPack, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~IEconTool
// calls: operator delete, CUtlMemory<item_definition_index_t, int>::Purge, CUtlMemory<unsigned int, int>::Purge, CUtlMemory<CEconTool_PlayerCardPack::TeamInfo_t, int>::Purge
void __fastcall CEconTool_PlayerCardPack::~CEconTool_PlayerCardPack(CEconTool_PlayerCardPack *const this)
{
  bool v2; // zf
  CUtlVectorBase<CEconTool_PlayerCardPack::TeamInfo_t,CUtlMemory<CEconTool_PlayerCardPack::TeamInfo_t,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_vecTeams.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IEconTool = off_479FE50;
  this->m_vecTeams.m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_vecTeams.m_Memory;
    CUtlMemory<CEconTool_PlayerCardPack::TeamInfo_t,int>::Purge(&this->m_vecTeams.m_Memory);
    if ( (this->m_vecTeams.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CEconTool_PlayerCardPack::TeamInfo_t,int>::Purge(p_m_Memory);
  }
  v2 = (this->m_vecPlayerAccountIDs.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_vecPlayerAccountIDs.m_Size = 0;
  if ( v2 )
  {
    CUtlMemory<unsigned int,int>::Purge(&this->m_vecPlayerAccountIDs.m_Memory);
    if ( (this->m_vecPlayerAccountIDs.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<unsigned int,int>::Purge(&this->m_vecPlayerAccountIDs.m_Memory);
  }
  this->m_vecBonusItemDef.m_Size = 0;
  v2 = (this->m_vecBonusItemDef.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IEconTool = off_47A8E30;
  if ( !v2
    || (CUtlMemory<item_definition_index_t,int>::Purge(&this->m_vecBonusItemDef.m_Memory),
        (this->m_vecBonusItemDef.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    operator delete(this);
  }
  else
  {
    CUtlMemory<item_definition_index_t,int>::Purge(&this->m_vecBonusItemDef.m_Memory);
    operator delete(this);
  }
}


// CEconTool_PlayerCardPack::CEconTool_PlayerCardPack  (line 946, @0x0000000002e59580, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, item_definition_index_t
// calls: IEconTool::IEconTool
// callers: CDOTAItemSchema::CreateEconToolImpl
void __fastcall CEconTool_PlayerCardPack::CEconTool_PlayerCardPack(
        CEconTool_PlayerCardPack *const this,
        const char *pszTypeName,
        const char *pszUseString,
        item_capabilities_t unCapabilities,
        KeyValues *pUsageKV)
{
  IEconTool::IEconTool(this, pszTypeName, pszUseString, 0, unCapabilities, pUsageKV);
  this->m_vecPlayerAccountIDs.m_Size = 0;
  this->_vptr_IEconTool = off_479FE50;
  this->m_unPlayerCardDefinitionIndex.m_Data = 0;
  this->m_vecPlayerAccountIDs.m_Memory.m_pMemory = 0;
  this->m_vecPlayerAccountIDs.m_Memory.m_nAllocationCount = 0;
  this->m_vecPlayerAccountIDs.m_Memory.m_nGrowSize = 0;
  this->m_vecTeams.m_Size = 0;
  this->m_vecTeams.m_Memory.m_pMemory = 0;
  this->m_vecTeams.m_Memory.m_nAllocationCount = 0;
  this->m_vecTeams.m_Memory.m_nGrowSize = 0;
}


// CEconTool_PlayerCardPack::BInitFromKV  (line 951, @0x0000000002e62040, libserver.so)  // inlines: AddToTail, AddToTailGetPtr, CopyConstruct<unsigned int>, Element, GrowMemory, V_strcpy_safe<64ul>, operator(), operator[]
// calls: IEconTool::BInitFromKV, KeyValues::FindKey, KeyValues::GetInt, IsAppDota2Main, KeyValues::GetFirstTrueSubKey, KeyValues::GetName, V_atoi, KeyValues::GetString, _V_strncpy, KeyValues::GetFirstValue, KeyValues::GetNextValue, KeyValues::GetNextTrueSubKey (19 total)
// strings: "card_count", "gold_rarity", "player_card_itemdef", "silver_bonus_count", "silver_bonus_min", "silver_bonus_max" (11 total)
// globals: `guard variable for'CEconTool_PlayerCardPack::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator() , CEconTool_PlayerCardPack::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator() const(char const*)::, `guard variable for'CEconTool_PlayerCardPack::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#2}::operator() , CEconTool_PlayerCardPack::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#2}::operator() const(char const*)::, `guard variable for'CEconTool_PlayerCardPack::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#3}::operator() , CEconTool_PlayerCardPack::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#3}::operator() const(char const*)::
bool __fastcall CEconTool_PlayerCardPack::BInitFromKV(
        CEconTool_PlayerCardPack *const this,
        KeyValues *pToolKV,
        CUtlVector<CUtlString,CUtlMemory<CUtlString,int> > *pVecErrors)
{
  KeyValues *Key; // rax
  KeyValues *v7; // r12
  const char *v8; // r13
  KeyValues *v9; // rax
  KeyValues *i; // r14
  __int64 m_Size; // r12
  int v12; // eax
  CEconTool_PlayerCardPack::TeamInfo_t *v13; // r13
  const char *Name; // rax
  const char *String; // rax
  KeyValues *v16; // rax
  KeyValues *FirstValue; // r15
  int v18; // r12d
  int Int; // eax
  __int64 v20; // rdx
  int v21; // esi
  unsigned int *v22; // rdx
  bool v23; // [rsp+17h] [rbp-39h]
  int v24; // [rsp+18h] [rbp-38h]
  int v25; // [rsp+1Ch] [rbp-34h]

  v23 = IEconTool::BInitFromKV(this, pToolKV, pVecErrors);
  if ( v23 )
  {
    if ( `guard variable for'CEconTool_PlayerCardPack::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator() const(char const*)::s_sym == 0
      && __cxa_guard_acquire(&`guard variable for'CEconTool_PlayerCardPack::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator() const(char const*)::s_sym) != 0 )
    {
      CKeySymbol::CKeySymbol(
        &CEconTool_PlayerCardPack::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator() const(char const*)::s_sym,
        "usage");
      __cxa_guard_release(&`guard variable for'CEconTool_PlayerCardPack::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator() const(char const*)::s_sym);
    }
    Key = KeyValues::FindKey(
            pToolKV,
            CEconTool_PlayerCardPack::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator() const(char const*)::s_sym);
    v7 = Key;
    if ( Key != 0 )
    {
      this->m_nCardCount = KeyValues::GetInt(Key, "card_count", 0);
      this->m_nGoldRarity = KeyValues::GetInt(v7, "gold_rarity", 0);
      this->m_unPlayerCardDefinitionIndex.m_Data = KeyValues::GetInt(v7, "player_card_itemdef", 0);
      this->m_nSilverBonusCount = KeyValues::GetInt(v7, "silver_bonus_count", 0);
      this->m_nSilverBonusStatMin = KeyValues::GetInt(v7, "silver_bonus_min", 0);
      this->m_nSilverBonusStatMax = KeyValues::GetInt(v7, "silver_bonus_max", 0);
      this->m_nGoldBonusCount = KeyValues::GetInt(v7, "gold_bonus_count", 0);
      this->m_nGoldBonusStatMin = KeyValues::GetInt(v7, "gold_bonus_min", 0);
      v8 = "teams_staging";
      this->m_nGoldBonusStatMax = KeyValues::GetInt(v7, "gold_bonus_max", 0);
      if ( !IsAppDota2Main() )
        v8 = "teams";
      if ( `guard variable for'CEconTool_PlayerCardPack::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#2}::operator() const(char const*)::s_sym == 0
        && __cxa_guard_acquire(&`guard variable for'CEconTool_PlayerCardPack::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#2}::operator() const(char const*)::s_sym) != 0 )
      {
        CKeySymbol::CKeySymbol(
          &CEconTool_PlayerCardPack::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#2}::operator() const(char const*)::s_sym,
          v8);
        __cxa_guard_release(&`guard variable for'CEconTool_PlayerCardPack::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#2}::operator() const(char const*)::s_sym);
      }
      v9 = KeyValues::FindKey(
             v7,
             CEconTool_PlayerCardPack::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#2}::operator() const(char const*)::s_sym);
      if ( v9 != 0 )
      {
        for ( i = KeyValues::GetFirstTrueSubKey(v9); i != 0; i = KeyValues::GetNextTrueSubKey(i) )
        {
          m_Size = this->m_vecTeams.m_Size;
          v12 = this->m_vecTeams.m_Size;
          if ( m_Size == this->m_vecTeams.m_Memory.m_nAllocationCount )
          {
            CUtlMemory<CEconTool_PlayerCardPack::TeamInfo_t,int>::Grow(&this->m_vecTeams.m_Memory, 1);
            v12 = this->m_vecTeams.m_Size;
          }
          this->m_vecTeams.m_Size = v12 + 1;
          v13 = &this->m_vecTeams.m_Memory.m_pMemory[m_Size];
          Name = KeyValues::GetName(i);
          v13->unTeamID = V_atoi(Name);
          String = KeyValues::GetString(i, "name", "", 0, 0);
          _V_strncpy(v13->pszTeamName, String, 64);
          if ( `guard variable for'CEconTool_PlayerCardPack::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#3}::operator() const(char const*)::s_sym == 0
            && __cxa_guard_acquire(&`guard variable for'CEconTool_PlayerCardPack::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#3}::operator() const(char const*)::s_sym) != 0 )
          {
            CKeySymbol::CKeySymbol(
              &CEconTool_PlayerCardPack::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#3}::operator() const(char const*)::s_sym,
              "players");
            __cxa_guard_release(&`guard variable for'CEconTool_PlayerCardPack::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#3}::operator() const(char const*)::s_sym);
          }
          v16 = KeyValues::FindKey(
                  i,
                  CEconTool_PlayerCardPack::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#3}::operator() const(char const*)::s_sym);
          if ( v16 != 0 )
          {
            FirstValue = KeyValues::GetFirstValue(v16);
            if ( FirstValue != 0 )
            {
              v18 = 0;
              do
              {
                Int = KeyValues::GetInt(FirstValue, 0, 0);
                v20 = this->m_vecPlayerAccountIDs.m_Size;
                v21 = this->m_vecPlayerAccountIDs.m_Size;
                if ( v20 == this->m_vecPlayerAccountIDs.m_Memory.m_nAllocationCount )
                {
                  v24 = this->m_vecPlayerAccountIDs.m_Size;
                  v25 = Int;
                  CUtlMemory<unsigned int,int>::Grow(&this->m_vecPlayerAccountIDs.m_Memory, 1);
                  v21 = this->m_vecPlayerAccountIDs.m_Size;
                  v20 = v24;
                  Int = v25;
                }
                this->m_vecPlayerAccountIDs.m_Size = v21 + 1;
                v22 = &this->m_vecPlayerAccountIDs.m_Memory.m_pMemory[v20];
                if ( v22 != 0 )
                  *v22 = Int;
                v13->unMembers[v18++] = KeyValues::GetInt(FirstValue, 0, 0);
                FirstValue = KeyValues::GetNextValue(FirstValue);
              }
              while ( FirstValue != 0 );
            }
          }
        }
      }
    }
  }
  return v23;
}


// CEconTool_HeroStatueForge::~CEconTool_HeroStatueForge  (line 1066, @0x0000000002e546e0, libserver.so)  // inlines: Purge, RemoveAll, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~IEconTool
// calls: CUtlMemory<item_definition_index_t, int>::Purge
void __fastcall CEconTool_HeroStatueForge::~CEconTool_HeroStatueForge(CEconTool_HeroStatueForge *const this)
{
  bool v2; // zf
  CUtlVectorBase<item_definition_index_t,CUtlMemory<item_definition_index_t,int> >::CAllocator *p_m_Memory; // r12

  this->m_vecBonusItemDef.m_Size = 0;
  v2 = (this->m_vecBonusItemDef.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IEconTool = off_47A8E30;
  if ( v2 )
  {
    p_m_Memory = &this->m_vecBonusItemDef.m_Memory;
    CUtlMemory<item_definition_index_t,int>::Purge(&this->m_vecBonusItemDef.m_Memory);
    if ( (this->m_vecBonusItemDef.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<item_definition_index_t,int>::Purge(p_m_Memory);
  }
}


// CEconTool_HeroStatueForge::~CEconTool_HeroStatueForge  (line 1066, @0x0000000002e55b00, libserver.so)  // inlines: Purge, RemoveAll, ~CEconTool_HeroStatueForge, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~IEconTool
// calls: operator delete, CUtlMemory<item_definition_index_t, int>::Purge
void __fastcall CEconTool_HeroStatueForge::~CEconTool_HeroStatueForge(CEconTool_HeroStatueForge *const this)
{
  bool v2; // zf
  CUtlVectorBase<item_definition_index_t,CUtlMemory<item_definition_index_t,int> >::CAllocator *p_m_Memory; // r12

  this->m_vecBonusItemDef.m_Size = 0;
  v2 = (this->m_vecBonusItemDef.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IEconTool = off_47A8E30;
  if ( !v2
    || (p_m_Memory = &this->m_vecBonusItemDef.m_Memory,
        CUtlMemory<item_definition_index_t,int>::Purge(&this->m_vecBonusItemDef.m_Memory),
        (this->m_vecBonusItemDef.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    operator delete(this);
  }
  else
  {
    CUtlMemory<item_definition_index_t,int>::Purge(p_m_Memory);
    operator delete(this);
  }
}


// CEconTool_HeroStatueForge::BInitFromKV  (line 1074, @0x0000000002e51970, libserver.so)  // inlines: operator()
// calls: IEconTool::BInitFromKV, KeyValues::FindKey, KeyValues::GetInt, __cxa_guard_acquire, CKeySymbol::CKeySymbol, __cxa_guard_release, __cxa_guard_abort, _Unwind_Resume
// strings: "status_effect", "effigy_itemdef_index", "usage"
// globals: `guard variable for'CEconTool_HeroStatueForge::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator(), CEconTool_HeroStatueForge::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator() const(char const*):, INVALID_ITEM_DEF_INDEX
bool __fastcall CEconTool_HeroStatueForge::BInitFromKV(
        CEconTool_HeroStatueForge *const this,
        KeyValues *pToolKV,
        CUtlVector<CUtlString,CUtlMemory<CUtlString,int> > *pVecErrors)
{
  bool v5; // bl
  KeyValues *Key; // rax
  KeyValues *v8; // r13
  int Int; // eax
  int m_Data; // edx

  v5 = IEconTool::BInitFromKV(this, pToolKV, pVecErrors);
  if ( !v5 )
    return v5;
  this->m_iStatusEffectIndex = 0;
  if ( `guard variable for'CEconTool_HeroStatueForge::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator() const(char const*)::s_sym == 0
    && __cxa_guard_acquire(&`guard variable for'CEconTool_HeroStatueForge::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator() const(char const*)::s_sym) != 0 )
  {
    CKeySymbol::CKeySymbol(
      &CEconTool_HeroStatueForge::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator() const(char const*)::s_sym,
      "usage");
    __cxa_guard_release(&`guard variable for'CEconTool_HeroStatueForge::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator() const(char const*)::s_sym);
  }
  Key = KeyValues::FindKey(
          pToolKV,
          CEconTool_HeroStatueForge::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator() const(char const*)::s_sym);
  v8 = Key;
  if ( Key == 0 )
    return v5;
  Int = KeyValues::GetInt(Key, "status_effect", 0);
  m_Data = INVALID_ITEM_DEF_INDEX.m_Data;
  this->m_iStatusEffectIndex = Int;
  this->m_iEffigyItemDefIndex.m_Data = KeyValues::GetInt(v8, "effigy_itemdef_index", m_Data);
  return v5;
}


// CEconTool_HeroStatueReforge::~CEconTool_HeroStatueReforge  (line 1112, @0x0000000002e54aa0, libserver.so)  // inlines: Purge, RemoveAll, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~IEconTool
// calls: CUtlMemory<item_definition_index_t, int>::Purge
void __fastcall CEconTool_HeroStatueReforge::~CEconTool_HeroStatueReforge(CEconTool_HeroStatueReforge *const this)
{
  bool v2; // zf
  CUtlVectorBase<item_definition_index_t,CUtlMemory<item_definition_index_t,int> >::CAllocator *p_m_Memory; // r12

  this->m_vecBonusItemDef.m_Size = 0;
  v2 = (this->m_vecBonusItemDef.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IEconTool = off_47A8E30;
  if ( v2 )
  {
    p_m_Memory = &this->m_vecBonusItemDef.m_Memory;
    CUtlMemory<item_definition_index_t,int>::Purge(&this->m_vecBonusItemDef.m_Memory);
    if ( (this->m_vecBonusItemDef.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<item_definition_index_t,int>::Purge(p_m_Memory);
  }
}


// CEconTool_HeroStatueReforge::~CEconTool_HeroStatueReforge  (line 1112, @0x0000000002e55860, libserver.so)  // inlines: Purge, RemoveAll, ~CEconTool_HeroStatueReforge, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~IEconTool
// calls: operator delete, CUtlMemory<item_definition_index_t, int>::Purge
void __fastcall CEconTool_HeroStatueReforge::~CEconTool_HeroStatueReforge(CEconTool_HeroStatueReforge *const this)
{
  bool v2; // zf
  CUtlVectorBase<item_definition_index_t,CUtlMemory<item_definition_index_t,int> >::CAllocator *p_m_Memory; // r12

  this->m_vecBonusItemDef.m_Size = 0;
  v2 = (this->m_vecBonusItemDef.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IEconTool = off_47A8E30;
  if ( !v2
    || (p_m_Memory = &this->m_vecBonusItemDef.m_Memory,
        CUtlMemory<item_definition_index_t,int>::Purge(&this->m_vecBonusItemDef.m_Memory),
        (this->m_vecBonusItemDef.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    operator delete(this);
  }
  else
  {
    CUtlMemory<item_definition_index_t,int>::Purge(p_m_Memory);
    operator delete(this);
  }
}


// CEconTool_Gift::~CEconTool_Gift  (line 1140, @0x0000000002e54980, libserver.so)  // inlines: Purge, RemoveAll, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~IEconTool
// calls: CUtlMemory<item_definition_index_t, int>::Purge
void __fastcall CEconTool_Gift::~CEconTool_Gift(CEconTool_Gift *const this)
{
  bool v2; // zf
  CUtlVectorBase<item_definition_index_t,CUtlMemory<item_definition_index_t,int> >::CAllocator *p_m_Memory; // r12

  this->m_vecBonusItemDef.m_Size = 0;
  v2 = (this->m_vecBonusItemDef.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IEconTool = off_47A8E30;
  if ( v2 )
  {
    p_m_Memory = &this->m_vecBonusItemDef.m_Memory;
    CUtlMemory<item_definition_index_t,int>::Purge(&this->m_vecBonusItemDef.m_Memory);
    if ( (this->m_vecBonusItemDef.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<item_definition_index_t,int>::Purge(p_m_Memory);
  }
}


// CEconTool_Gift::~CEconTool_Gift  (line 1140, @0x0000000002e55470, libserver.so)  // inlines: Purge, RemoveAll, ~CEconTool_Gift, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~IEconTool
// calls: operator delete, CUtlMemory<item_definition_index_t, int>::Purge
void __fastcall CEconTool_Gift::~CEconTool_Gift(CEconTool_Gift *const this)
{
  bool v2; // zf
  CUtlVectorBase<item_definition_index_t,CUtlMemory<item_definition_index_t,int> >::CAllocator *p_m_Memory; // r12

  this->m_vecBonusItemDef.m_Size = 0;
  v2 = (this->m_vecBonusItemDef.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IEconTool = off_47A8E30;
  if ( !v2
    || (p_m_Memory = &this->m_vecBonusItemDef.m_Memory,
        CUtlMemory<item_definition_index_t,int>::Purge(&this->m_vecBonusItemDef.m_Memory),
        (this->m_vecBonusItemDef.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    operator delete(this);
  }
  else
  {
    CUtlMemory<item_definition_index_t,int>::Purge(p_m_Memory);
    operator delete(this);
  }
}


// CEconTool_Gift::BInitFromKV  (line 1151, @0x0000000002e51a60, libserver.so)  // inlines: GetBool, operator()
// calls: IEconTool::BInitFromKV, KeyValues::FindKey, KeyValues::GetString, CEconSchemaSymbol::operator=, KeyValues::GetInt, V_stricmp_fast, __cxa_guard_acquire, CKeySymbol::CKeySymbol, __cxa_guard_release, __cxa_guard_abort, _Unwind_Resume
// strings: "max_recipients", "only_others", "target_rule", "only_self", "dont_require_usage_confirmation", "num_items" (7 total)
// globals: `guard variable for'CEconTool_Gift::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator() const(char, CEconTool_Gift::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator() const(char const*)::s_sym
bool __fastcall CEconTool_Gift::BInitFromKV(
        CEconTool_Gift *const this,
        KeyValues *pToolKV,
        CUtlVector<CUtlString,CUtlMemory<CUtlString,int> > *pVecErrors)
{
  bool v5; // r12
  KeyValues *Key; // rax
  KeyValues *v8; // r13
  const char *String; // rax
  const char *v10; // rax

  v5 = IEconTool::BInitFromKV(this, pToolKV, pVecErrors);
  if ( !v5 )
    return v5;
  if ( `guard variable for'CEconTool_Gift::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator() const(char const*)::s_sym == 0
    && __cxa_guard_acquire(&`guard variable for'CEconTool_Gift::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator() const(char const*)::s_sym) != 0 )
  {
    CKeySymbol::CKeySymbol(
      &CEconTool_Gift::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator() const(char const*)::s_sym,
      "usage");
    __cxa_guard_release(&`guard variable for'CEconTool_Gift::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator() const(char const*)::s_sym);
  }
  Key = KeyValues::FindKey(
          pToolKV,
          CEconTool_Gift::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator() const(char const*)::s_sym);
  v8 = Key;
  if ( Key == 0 )
    return v5;
  String = KeyValues::GetString(Key, "loot_list", 0, 0, 0);
  CEconSchemaSymbol::operator=(&this->m_symLootListName, String);
  this->m_iMaxRecipients = KeyValues::GetInt(v8, "max_recipients", 0);
  v10 = KeyValues::GetString(v8, "target_rule", "only_others", 0, 0);
  this->m_eTargetRule = V_stricmp_fast(v10, "only_self") == 0;
  this->m_bDontRequireUsageConfirmation = KeyValues::GetInt(v8, "dont_require_usage_confirmation", 0) != 0;
  this->m_iNumItems = KeyValues::GetInt(v8, "num_items", 1);
  return v5;
}


// CEconTool_Gift::BFinishInitialization  (line 1171, @0x0000000002e50450, libserver.so)  // inlines: String
// calls: GetItemSchema, CEconItemSchema::GetLootListByName
bool __fastcall CEconTool_Gift::BFinishInitialization(CEconTool_Gift *const this)
{
  const char *m_pAsString; // r12
  GameItemSchema_t *ItemSchema; // rax
  bool result; // al

  result = this->m_symLootListName.u.m_Id != 0
        && (m_pAsString = this->m_symLootListName.u.m_pAsString,
            ItemSchema = GetItemSchema(),
            CEconItemSchema::GetLootListByName(ItemSchema, m_pAsString, 0) != 0)
        && this->m_iMaxRecipients > 0;
  return result;
}


// CDOTAStaticRecipeComponentEvent::~CDOTAStaticRecipeComponentEvent  (line 1210, @0x0000000002e602f0, libserver.so)  // inlines: Purge, ~CStaticRecipeComponent, ~CUtlMap, ~CUtlMemory, ~CUtlRBTree
// calls: CUtlRBTree<CUtlMap<unsigned int, unsigned int>::Node_t, short unsigned int, CUtlMap<unsigned int, unsigned int>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, unsigned int>::Node_t, short unsigned int>, short unsigned int> >::RemoveAll, CEconTool_ItemDynamicRecipe::CBaseRecipeComponent::~CBaseRecipeComponent, CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, unsigned int>::Node_t, short unsigned int>, short unsigned int>::Purge
void __fastcall CDOTAStaticRecipeComponentEvent::~CDOTAStaticRecipeComponentEvent(
        CDOTAStaticRecipeComponentEvent *const this)
{
  bool v2; // zf

  this->_vptr_CBaseRecipeComponent = off_47A0F30;
  CUtlRBTree<CUtlMap<unsigned int,unsigned int,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short,CUtlMap<unsigned int,unsigned int,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,unsigned int,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>>::RemoveAll(&this->m_mapActionGrants.m_Tree);
  v2 = (this->m_mapActionGrants.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0;
  this->m_mapActionGrants.m_Tree.m_FirstFree = -1;
  if ( v2 )
  {
    CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,unsigned int,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>::Purge(&this->m_mapActionGrants.m_Tree.m_Elements);
    v2 = (this->m_mapActionGrants.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0;
    this->m_mapActionGrants.m_Tree.m_LastAlloc.index = -1;
    if ( v2 )
      CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,unsigned int,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>::Purge(&this->m_mapActionGrants.m_Tree.m_Elements);
  }
  else
  {
    this->m_mapActionGrants.m_Tree.m_LastAlloc.index = -1;
  }
  this->_vptr_CBaseRecipeComponent = off_47A91F0;
  CEconTool_ItemDynamicRecipe::CBaseRecipeComponent::~CBaseRecipeComponent(this);
}


// CDOTAStaticRecipeComponentEvent::~CDOTAStaticRecipeComponentEvent  (line 1210, @0x0000000002e60380, libserver.so)  // inlines: Purge, ~CDOTAStaticRecipeComponentEvent, ~CStaticRecipeComponent, ~CUtlMap, ~CUtlMemory, ~CUtlRBTree
// calls: CUtlRBTree<CUtlMap<unsigned int, unsigned int>::Node_t, short unsigned int, CUtlMap<unsigned int, unsigned int>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, unsigned int>::Node_t, short unsigned int>, short unsigned int> >::RemoveAll, CEconTool_ItemDynamicRecipe::CBaseRecipeComponent::~CBaseRecipeComponent, operator delete, CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, unsigned int>::Node_t, short unsigned int>, short unsigned int>::Purge
void __fastcall CDOTAStaticRecipeComponentEvent::~CDOTAStaticRecipeComponentEvent(
        CDOTAStaticRecipeComponentEvent *const this)
{
  bool v2; // zf

  this->_vptr_CBaseRecipeComponent = off_47A0F30;
  CUtlRBTree<CUtlMap<unsigned int,unsigned int,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short,CUtlMap<unsigned int,unsigned int,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,unsigned int,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>>::RemoveAll(&this->m_mapActionGrants.m_Tree);
  v2 = (this->m_mapActionGrants.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0;
  this->m_mapActionGrants.m_Tree.m_FirstFree = -1;
  if ( v2 )
  {
    CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,unsigned int,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>::Purge(&this->m_mapActionGrants.m_Tree.m_Elements);
    v2 = (this->m_mapActionGrants.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0;
    this->m_mapActionGrants.m_Tree.m_LastAlloc.index = -1;
    if ( v2 )
      CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,unsigned int,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>::Purge(&this->m_mapActionGrants.m_Tree.m_Elements);
  }
  else
  {
    this->m_mapActionGrants.m_Tree.m_LastAlloc.index = -1;
  }
  this->_vptr_CBaseRecipeComponent = off_47A91F0;
  CEconTool_ItemDynamicRecipe::CBaseRecipeComponent::~CBaseRecipeComponent(this);
  operator delete(this);
}


// CDOTAStaticRecipeComponentLeagueOwnership::~CDOTAStaticRecipeComponentLeagueOwnership  (line 1232, @0x0000000002e504a0, libserver.so)  // inlines: ~CStaticRecipeComponent
// calls: CEconTool_ItemDynamicRecipe::CBaseRecipeComponent::~CBaseRecipeComponent
void __fastcall CDOTAStaticRecipeComponentLeagueOwnership::~CDOTAStaticRecipeComponentLeagueOwnership(
        CDOTAStaticRecipeComponentLeagueOwnership *const this)
{
  this->_vptr_CBaseRecipeComponent = off_47A91F0;
  CEconTool_ItemDynamicRecipe::CBaseRecipeComponent::~CBaseRecipeComponent(this);
}


// CDOTAStaticRecipeComponentLeagueOwnership::~CDOTAStaticRecipeComponentLeagueOwnership  (line 1232, @0x0000000002e504c0, libserver.so)  // inlines: ~CDOTAStaticRecipeComponentLeagueOwnership, ~CStaticRecipeComponent
// calls: CEconTool_ItemDynamicRecipe::CBaseRecipeComponent::~CBaseRecipeComponent, operator delete
void __fastcall CDOTAStaticRecipeComponentLeagueOwnership::~CDOTAStaticRecipeComponentLeagueOwnership(
        CDOTAStaticRecipeComponentLeagueOwnership *const this)
{
  this->_vptr_CBaseRecipeComponent = off_47A91F0;
  CEconTool_ItemDynamicRecipe::CBaseRecipeComponent::~CBaseRecipeComponent(this);
  operator delete(this);
}


