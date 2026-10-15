
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CBaseGameStats::~CBaseGameStats  (line 123, @0x0000000002280fa0, libserver.so)  // inlines: Purge, ~BasicGameStats_t, ~CUtlDict, ~CUtlMap, ~CUtlMemory, ~CUtlRBTree
// calls: CUtlDict<BasicGameStatsRecord_t, short unsigned int>::Purge, CUtlRBTree<CUtlMap<char const*, BasicGameStatsRecord_t, short unsigned int, bool (*)(char const* const&, char const* const&)>::Node_t, short unsigned int, CUtlMap<char const*, BasicGameStatsRecord_t, short unsigned int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, BasicGameStatsRecord_t, short unsigned int, bool (*)(char const* const&, char const* const&)>::Node_t, short unsigned int>, short unsigned int> >::Purge, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, BasicGameStatsRecord_t, short unsigned int, bool (*)(char const* const&, char const* const&)>::Node_t, short unsigned int>, short unsigned int>::Purge
void __fastcall CBaseGameStats::~CBaseGameStats(CBaseGameStats *const this)
{
  CUtlDict<BasicGameStatsRecord_t,short unsigned int> *p_m_MapTotals; // r12

  p_m_MapTotals = &this->m_BasicStats.m_MapTotals;
  this->_vptr_CBaseGameStats = &off_40502D0;
  CUtlDict<BasicGameStatsRecord_t,unsigned short>::Purge(&this->m_BasicStats.m_MapTotals);
  CUtlRBTree<CUtlMap<char const*,BasicGameStatsRecord_t,unsigned short,bool (*)(char const* const&,char const* const&)>::Node_t,unsigned short,CUtlMap<char const*,BasicGameStatsRecord_t,unsigned short,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,BasicGameStatsRecord_t,unsigned short,bool (*)(char const* const&,char const* const&)>::Node_t,unsigned short>,unsigned short>>::Purge(&p_m_MapTotals->m_Elements.m_Tree);
  if ( (this->m_BasicStats.m_MapTotals.m_Elements.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,BasicGameStatsRecord_t,unsigned short,bool (*)(char const* const&,char const* const&)>::Node_t,unsigned short>,unsigned short>::Purge(&this->m_BasicStats.m_MapTotals.m_Elements.m_Tree.m_Elements);
}


// CBaseGameStats::UseOldFormat  (line 129, @0x000000000227abf0, libserver.so)
bool __fastcall CBaseGameStats::UseOldFormat(CBaseGameStats *const this)
{
  return 1;
}


// CBaseGameStats::AddDataForSend  (line 140, @0x000000000227ac00, libserver.so)
bool __fastcall CBaseGameStats::AddDataForSend(CBaseGameStats *const this, KeyValues *pKV, StatSendType_t sendType)
{
  return 0;
}


// CBaseGameStats::ShouldSendDataOnLevelShutdown  (line 143, @0x000000000227ac10, libserver.so)
bool __fastcall CBaseGameStats::ShouldSendDataOnLevelShutdown(CBaseGameStats *const this)
{
  return 0;
}


// CBaseGameStats::ShouldSendDataOnAppShutdown  (line 159, @0x000000000227ac20, libserver.so)
bool __fastcall CBaseGameStats::ShouldSendDataOnAppShutdown(CBaseGameStats *const this)
{
  return 0;
}


// CBaseGameStats::OnInit  (line 185, @0x000000000227ac30, libserver.so)
CBaseGameStats *__fastcall CBaseGameStats::OnInit(
        CBaseGameStats *const this,
        CBaseGameStats *pCurrentGameStats,
        const char *gamedir)
{
  return pCurrentGameStats;
}


// CBaseGameStats::StatTrackingEnabledForMod  (line 190, @0x000000000227ac40, libserver.so)
bool __fastcall CBaseGameStats::StatTrackingEnabledForMod(CBaseGameStats *const this)
{
  return 0;
}


// CBaseGameStats::HaveValidData  (line 192, @0x000000000227ac50, libserver.so)
bool __fastcall CBaseGameStats::HaveValidData(CBaseGameStats *const this)
{
  return 1;
}


// CBaseGameStats::ShouldTrackStandardStats  (line 194, @0x000000000227ac60, libserver.so)
bool __fastcall CBaseGameStats::ShouldTrackStandardStats(CBaseGameStats *const this)
{
  return 1;
}


// CBaseGameStats::UserPlayedAllTheMaps  (line 201, @0x000000000227ac70, libserver.so)
bool __fastcall CBaseGameStats::UserPlayedAllTheMaps(CBaseGameStats *const this)
{
  return 0;
}


// CBaseGameStats::AppendCustomDataToSaveBuffer  (line 223, @0x000000000227ac80, libserver.so)
void __fastcall CBaseGameStats::AppendCustomDataToSaveBuffer(CBaseGameStats *const this, CUtlBuffer *const SaveBuffer)
{
  ;
}


// CBaseGameStats::LoadCustomDataFromBuffer  (line 224, @0x000000000227ac90, libserver.so)
void __fastcall CBaseGameStats::LoadCustomDataFromBuffer(CBaseGameStats *const this, CUtlBuffer *const LoadBuffer)
{
  ;
}


// CBaseGameStats::AutoSave_OnInit  (line 237, @0x000000000227aca0, libserver.so)
bool __fastcall CBaseGameStats::AutoSave_OnInit(CBaseGameStats *const this)
{
  return 0;
}


// CBaseGameStats::AutoSave_OnShutdown  (line 238, @0x000000000227acb0, libserver.so)
bool __fastcall CBaseGameStats::AutoSave_OnShutdown(CBaseGameStats *const this)
{
  return 1;
}


// CBaseGameStats::AutoSave_OnMapChange  (line 239, @0x000000000227acc0, libserver.so)
bool __fastcall CBaseGameStats::AutoSave_OnMapChange(CBaseGameStats *const this)
{
  return 0;
}


// CBaseGameStats::AutoSave_OnLevelInit  (line 240, @0x000000000227acd0, libserver.so)
bool __fastcall CBaseGameStats::AutoSave_OnLevelInit(CBaseGameStats *const this)
{
  return 0;
}


// CBaseGameStats::AutoSave_OnLevelShutdown  (line 241, @0x000000000227ace0, libserver.so)
bool __fastcall CBaseGameStats::AutoSave_OnLevelShutdown(CBaseGameStats *const this)
{
  return 1;
}


// CBaseGameStats::AutoUpload_OnInit  (line 244, @0x000000000227acf0, libserver.so)
bool __fastcall CBaseGameStats::AutoUpload_OnInit(CBaseGameStats *const this)
{
  return 0;
}


// CBaseGameStats::AutoUpload_OnShutdown  (line 245, @0x000000000227ad00, libserver.so)
bool __fastcall CBaseGameStats::AutoUpload_OnShutdown(CBaseGameStats *const this)
{
  return 1;
}


// CBaseGameStats::AutoUpload_OnMapChange  (line 246, @0x000000000227ad10, libserver.so)
bool __fastcall CBaseGameStats::AutoUpload_OnMapChange(CBaseGameStats *const this)
{
  return 0;
}


// CBaseGameStats::AutoUpload_OnLevelInit  (line 247, @0x000000000227ad20, libserver.so)
bool __fastcall CBaseGameStats::AutoUpload_OnLevelInit(CBaseGameStats *const this)
{
  return 0;
}


// CBaseGameStats::AutoUpload_OnLevelShutdown  (line 248, @0x000000000227ad30, libserver.so)
bool __fastcall CBaseGameStats::AutoUpload_OnLevelShutdown(CBaseGameStats *const this)
{
  return 0;
}


