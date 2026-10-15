
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CServerAchievementManager::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition  (line 67, @0x0000000001eb3020, libserver.so)
void __fastcall CServerAchievementManager::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition(
        CServerAchievementManager *const this)
{
  ;
}


// CServerAchievementManager::DoesGameSystemReallocate  (line 67, @0x0000000001eb3030, libserver.so)
// globals: CServerAchievementManager::sm_Factory
bool __fastcall CServerAchievementManager::DoesGameSystemReallocate(const CServerAchievementManager *const this)
{
  return (*(CServerAchievementManager::sm_Factory->_vptr_IGameSystemFactory + 8))(CServerAchievementManager::sm_Factory);
}


// CServerAchievementManager::SetGameSystemGlobalPtrs  (line 67, @0x0000000001eb3050, libserver.so)  // inlines: SetGameSystemGlobalPtrImpl
// globals: CServerAchievementManager::sm_Factory
void __fastcall CServerAchievementManager::SetGameSystemGlobalPtrs(CServerAchievementManager *const this, void *pValue)
{
  if ( CServerAchievementManager::sm_Factory != 0 )
    (*(CServerAchievementManager::sm_Factory->_vptr_IGameSystemFactory + 7))(
      CServerAchievementManager::sm_Factory,
      pValue);
}


// CServerAchievementManager::GetAwardByDisplayOrder  (line 85, @0x0000000001eb3080, libserver.so)
IAchievement *__fastcall CServerAchievementManager::GetAwardByDisplayOrder(
        CServerAchievementManager *const this,
        int orderIndex,
        int nPlayerSlot)
{
  return 0;
}


// CServerAchievementManager::InitializeAchievements  (line 90, @0x0000000001eb30a0, libserver.so)
void __fastcall CServerAchievementManager::InitializeAchievements(CServerAchievementManager *const this)
{
  ;
}


// CServerAchievementManager::WereCheatsEverOn  (line 96, @0x0000000001eb30c0, libserver.so)
bool __fastcall CServerAchievementManager::WereCheatsEverOn(CServerAchievementManager *const this)
{
  return this->m_bCheatsEverOn;
}


// CServerAchievementManager::GetMapName  (line 99, @0x0000000001eb30e0, libserver.so)
const char *__fastcall CServerAchievementManager::GetMapName(CServerAchievementManager *const this)
{
  return this->m_szMap;
}


// CServerAchievementManager::UseClientside  (line 100, @0x0000000001eb3100, libserver.so)
bool __fastcall CServerAchievementManager::UseClientside(CServerAchievementManager *const this)
{
  return 0;
}


// CServerAchievementManager::CheckSignInState  (line 106, @0x0000000001eb3120, libserver.so)
void __fastcall CServerAchievementManager::CheckSignInState(CServerAchievementManager *const this, bool bCheck)
{
  ;
}


// CServerAchievementManager::AchievementStatePersistsAfterDisconnect  (line 129, @0x0000000001eb3140, libserver.so)
bool __fastcall CServerAchievementManager::AchievementStatePersistsAfterDisconnect(
        CServerAchievementManager *const this)
{
  return 1;
}


