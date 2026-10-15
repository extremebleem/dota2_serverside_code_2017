// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/dota_sharedfuncs.cpp:2591
class CSeriesScores {
private:

	uint8 m_unSeriesType;  // +0x0

	CSeriesScores(uint32);
	void AddScore(float);
	float GetSeriesScore();

	// sizeof = 28
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// SetAppID  (line 57, @0x000000000266efc0, libserver.so)
// callers: CDOTA_PlayerResource::ResourceThink, IsAppDota2Main, IsAppDota2Test, IsAppDota2Rel, IsAppMain, IsAppRel, IsAppDota2Experimental, GetMapNameForGameMode
// globals: g_iGameAppID
void __cdecl SetAppID()
{
  if ( g_iGameAppID == 215 || g_iGameAppID == 0 )
    g_iGameAppID = (*(*engine + 536LL))(engine);
}


// IsAppDota2Main  (line 69, @0x000000000266f280, libserver.so)
// calls: SetAppID
// callers: CDOTA_CombatLog::RecordKillDamageBreakdown, CDOTA_CombatLog::SendLogToPlayer, CDOTA_CombatLog::FrameUpdatePostEntityThink, CDOTA_CombatLog::DoCombatAnalysis, DOTAStartAutoSaveTest, CDOTAGameManager::GetFirstHero, CDOTAGameManager::GetNextHero, CDOTAGamerules::IsHeroUnavailableToPlayer, IsHeroAvailableByKV, CDOTAGamerules::UpdateAutomaticSurrender, CDOTAEventDefinition::InitFromKeyValues, CDOTAGamerules::HeroPickState_Enter_AP_SELECT (25 total)
// globals: g_iGameAppID
bool __cdecl IsAppDota2Main()
{
  SetAppID();
  return g_iGameAppID == 816;
}


// IsAppDota2Test  (line 75, @0x000000000266f2a0, libserver.so)
// calls: SetAppID
// globals: g_iGameAppID
bool __cdecl IsAppDota2Test()
{
  SetAppID();
  return g_iGameAppID == 205790;
}


// IsAppDota2Rel  (line 81, @0x000000000266f2c0, libserver.so)
// calls: SetAppID
// globals: g_iGameAppID
bool __cdecl IsAppDota2Rel()
{
  SetAppID();
  return g_iGameAppID == 570;
}


// IsAppMain  (line 87, @0x000000000266f2e0, libserver.so)  // inlines: IsAppDota2Main
// calls: SetAppID
// globals: g_iGameAppID
bool __cdecl IsAppMain()
{
  SetAppID();
  return g_iGameAppID == 816;
}


// IsAppRel  (line 92, @0x000000000266f300, libserver.so)  // inlines: IsAppDota2Rel
// calls: SetAppID
// globals: g_iGameAppID
bool __cdecl IsAppRel()
{
  SetAppID();
  return g_iGameAppID == 570;
}


// IsAppDota2Experimental  (line 97, @0x000000000266f320, libserver.so)
// calls: SetAppID
// callers: CDOTAGamerules::IsHeroUnavailableToPlayer, CDOTAGamerules::State_Enter_WAIT_FOR_PLAYERS_TO_LOAD, CDOTAGamerules::HeroPickState_Enter_AP_SELECT, CDOTAEventSchema::Initialize, CDOTAGCServerSystem::CheckPoorNetworkConditions, CDOTAItemDefinition::IsValidForNexonPCBang
// globals: g_iGameAppID
bool __cdecl IsAppDota2Experimental()
{
  SetAppID();
  return g_iGameAppID == 247040;
}


// IsPermanentLeaverState  (line 117, @0x000000000266f340, libserver.so)
// callers: CDOTAGamerules::OnLobbyUpdated, CDOTAGamerules::UpdateAutomaticSurrender, CDOTALobby::IsPermanentLeaver, CDOTAGCServerSystem::CheckUpdateConnectedPlayers
bool __fastcall IsPermanentLeaverState(DOTALeaverStatus_t state)
{
  bool result; // al

  result = 0;
  if ( (state - 2) <= 6 )
    return ((1LL << (state - 2)) & 0x77) != 0;
  return result;
}


// GetBaseRespawnDuration  (line 201, @0x000000000266f360, libserver.so)
// callers: CDOTA_BaseNPC_Hero::GetRespawnTime
// globals: g_iHeroRespawn
int __fastcall GetBaseRespawnDuration(int iLevel)
{
  return g_iHeroRespawn[iLevel - 1];
}


// GetXPNeededToReachNextLevel  (line 207, @0x000000000266f380, libserver.so)  // inlines: DOTAGameRules, GetCustomXPRequiredToReachNextLevel
// calls: CDOTAGamerules::GetGameModeEntity
// callers: CDOTAPlayer::ClientCommand, dota_dev, dota_bot_give_level, CDOTA_Bot_Script::GetXPNeededToLevel, CDOTA_BaseNPC_Hero::AddExperience
// globals: g_iXPRequiredToReachNextLevel
int __fastcall GetXPNeededToReachNextLevel(int nCurrentLevel)
{
  __int64 v1; // r12
  CDOTABaseGameMode *GameModeEntity; // rdx
  int result; // eax

  v1 = nCurrentLevel;
  if ( CDOTAGamerules::GetGameModeEntity(g_pGameRules) == 0
    || !CDOTAGamerules::GetGameModeEntity(g_pGameRules)->m_bUseCustomHeroLevels.m_Value )
  {
    return g_iXPRequiredToReachNextLevel[v1];
  }
  GameModeEntity = CDOTAGamerules::GetGameModeEntity(g_pGameRules);
  result = 0;
  if ( v1 != GameModeEntity->m_nCustomXPRequiredToReachNextLevel.m_Vector.m_Size )
    return GameModeEntity->m_nCustomXPRequiredToReachNextLevel.m_Vector.m_Memory.m_pMemory[v1];
  return result;
}


// GetHeroMaxLevel  (line 219, @0x000000000266f3f0, libserver.so)  // inlines: DOTAGameRules
// calls: CDOTAGamerules::GetGameModeEntity
// callers: CDOTACustomGameEvents::InputLevelAllHeroesToLevel, CDOTAPlayer::ClientCommand, HeroMaxLevel, dota_bot_give_level, CDOTA_BaseNPC_Hero::AddExperience, CDOTA_BaseNPC_Hero::HeroLevelUp
int __cdecl GetHeroMaxLevel()
{
  if ( CDOTAGamerules::GetGameModeEntity(g_pGameRules) != 0
    && CDOTAGamerules::GetGameModeEntity(g_pGameRules)->m_bUseCustomHeroLevels.m_Value )
  {
    return CDOTAGamerules::GetGameModeEntity(g_pGameRules)->m_nCustomXPRequiredToReachNextLevel.m_Vector.m_Size;
  }
  else
  {
    return 25;
  }
}


// GetPlayTimeMinutesToPointsScale  (line 233, @0x000000000266f450, libserver.so)
float __cdecl GetPlayTimeMinutesToPointsScale()
{
  return 1.5;
}


// GetPlayTimePointsForLevel  (line 239, @0x000000000266f460, libserver.so)
uint32 __fastcall GetPlayTimePointsForLevel(uint32 unLevel)
{
  return 3 * unLevel + 90;
}


// GetEssenceCounts  (line 260, @0x000000000266f470, libserver.so)  // inlines: CAttributeIterator_GetTypedAttributeValue, CSchemaFieldHandle, FindAttribute<IEconItemInterface, unsigned int>, FindAttribute<unsigned int>, FindAttribute_UnsafeBitwiseCast<unsigned int, unsigned int, IEconItemInterface>, Get, GetInt, GetTypedRef, V_memset, memset, operator const CEconItemAttributeDefinition*
// calls: GEconItemSchema, CEconItemSchema::GetAttributeDefinitionByName, __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit, __cxa_guard_abort, _Unwind_Resume
// callers: GetAbilityForGreevil
// strings: "black power", "white power", "courier seed", "orange power", "red power", "purple power" (9 total)
// globals: `guard variable for'GetEssenceCounts(IEconItemInterface const*,uint *,uint *)::pAttr_RedValue, `guard variable for'GetEssenceCounts(IEconItemInterface const*,uint *,uint *)::pAttr_OrangeValue, `guard variable for'GetEssenceCounts(IEconItemInterface const*,uint *,uint *)::pAttr_YellowValue, `guard variable for'GetEssenceCounts(IEconItemInterface const*,uint *,uint *)::pAttr_GreenValue, `guard variable for'GetEssenceCounts(IEconItemInterface const*,uint *,uint *)::pAttr_BlueValue, `guard variable for'GetEssenceCounts(IEconItemInterface const*,uint *,uint *)::pAttr_PurpleValue, `guard variable for'GetEssenceCounts(IEconItemInterface const*,uint *,uint *)::pAttr_WhiteValue, `guard variable for'GetEssenceCounts(IEconItemInterface const*,uint *,uint *)::pAttr_BlackValue (20 total)
void __fastcall GetEssenceCounts(const IEconItemInterface *pItem, uint32 *iEssenceCounts, uint32 *pSeed)
{
  bool v6; // zf
  uint32 v7; // r14d
  const CEconItemAttributeDefinition *m_pRef; // rax
  const char *m_szName; // r15
  CEconItemSchema *v10; // rax
  int (**vptr_IEconItemInterface)(...); // rax
  uint32 v12; // r14d
  const CEconItemAttributeDefinition *AttributeDefinitionByName; // rax
  const char *v14; // r15
  CEconItemSchema *v15; // rax
  int (**v16)(...); // rax
  uint32 v17; // r14d
  const CEconItemAttributeDefinition *v18; // rax
  const char *v19; // r15
  CEconItemSchema *v20; // rax
  int (**v21)(...); // rax
  uint32 v22; // r14d
  const CEconItemAttributeDefinition *v23; // rax
  const char *v24; // r15
  CEconItemSchema *v25; // rax
  int (**v26)(...); // rax
  uint32 v27; // r14d
  const CEconItemAttributeDefinition *v28; // rax
  const char *v29; // r15
  CEconItemSchema *v30; // rax
  int (**v31)(...); // rax
  uint32 v32; // r14d
  const CEconItemAttributeDefinition *v33; // rax
  const char *v34; // r15
  CEconItemSchema *v35; // rax
  int (**v36)(...); // rax
  uint32 v37; // r14d
  const CEconItemAttributeDefinition *v38; // rax
  const char *v39; // r15
  CEconItemSchema *v40; // rax
  int (**v41)(...); // rax
  uint32 v42; // r14d
  const CEconItemAttributeDefinition *v43; // rax
  const char *v44; // r15
  CEconItemSchema *v45; // rax
  int (**v46)(...); // rax
  int m_nValue; // eax
  int v48; // eax
  int v49; // eax
  int v50; // eax
  int v51; // eax
  int v52; // eax
  int v53; // eax
  int v54; // eax
  uint32 v55; // r14d
  const CEconItemAttributeDefinition *v56; // rax
  const char *v57; // r15
  CEconItemSchema *v58; // rax
  int (**v59)(...); // rax
  CEconItemSchema *v60; // rax
  uint32 v61; // eax
  CEconItemSchema *v62; // rax
  uint32 v63; // eax
  CEconItemSchema *v64; // rax
  uint32 v65; // eax
  CEconItemSchema *v66; // rax
  uint32 v67; // eax
  CEconItemSchema *v68; // rax
  uint32 m_unResetCount; // eax
  CEconItemSchema *v70; // rax
  uint32 v71; // eax
  CEconItemSchema *v72; // rax
  uint32 v73; // eax
  CEconItemSchema *v74; // rax
  uint32 v75; // eax
  CEconItemSchema *v76; // rax
  uint32 v77; // eax
  CIterateAllAttributes *v78; // [rsp+0h] [rbp-50h] BYREF
  const CEconItemAttributeDefinition *v79; // [rsp+8h] [rbp-48h]
  uint32 *v80; // [rsp+10h] [rbp-40h]
  char v81; // [rsp+18h] [rbp-38h]

  *iEssenceCounts = 0;
  v6 = `guard variable for'GetEssenceCounts(IEconItemInterface const*,unsigned int *,unsigned int *)::pAttr_RedValue == 0;
  *(iEssenceCounts + 1) = 0;
  *(iEssenceCounts + 2) = 0;
  *(iEssenceCounts + 3) = 0;
  iEssenceCounts[8] = 0;
  if ( v6
    && __cxa_guard_acquire(&`guard variable for'GetEssenceCounts(IEconItemInterface const*,unsigned int *,unsigned int *)::pAttr_RedValue) != 0 )
  {
    GetEssenceCounts(IEconItemInterface const*,unsigned int *,unsigned int *)::pAttr_RedValue.m_szName = "red power";
    v68 = GEconItemSchema();
    GetEssenceCounts(IEconItemInterface const*,unsigned int *,unsigned int *)::pAttr_RedValue.m_pRef = CEconItemSchema::GetAttributeDefinitionByName(v68, "red power");
    m_unResetCount = GEconItemSchema()->m_unResetCount;
    GetEssenceCounts(IEconItemInterface const*,unsigned int *,unsigned int *)::pAttr_RedValue.m_bDestructName = 0;
    GetEssenceCounts(IEconItemInterface const*,unsigned int *,unsigned int *)::pAttr_RedValue.m_unSchemaGeneration = m_unResetCount;
    __cxa_guard_release(&`guard variable for'GetEssenceCounts(IEconItemInterface const*,unsigned int *,unsigned int *)::pAttr_RedValue);
    __cxa_atexit(
      CSchemaFieldHandle<CEconItemAttributeDefinition>::~CSchemaFieldHandle,
      &GetEssenceCounts(IEconItemInterface const*,unsigned int *,unsigned int *)::pAttr_RedValue,
      &_dso_handle);
  }
  if ( `guard variable for'GetEssenceCounts(IEconItemInterface const*,unsigned int *,unsigned int *)::pAttr_OrangeValue == 0
    && __cxa_guard_acquire(&`guard variable for'GetEssenceCounts(IEconItemInterface const*,unsigned int *,unsigned int *)::pAttr_OrangeValue) != 0 )
  {
    GetEssenceCounts(IEconItemInterface const*,unsigned int *,unsigned int *)::pAttr_OrangeValue.m_szName = "orange power";
    v66 = GEconItemSchema();
    GetEssenceCounts(IEconItemInterface const*,unsigned int *,unsigned int *)::pAttr_OrangeValue.m_pRef = CEconItemSchema::GetAttributeDefinitionByName(v66, "orange power");
    v67 = GEconItemSchema()->m_unResetCount;
    GetEssenceCounts(IEconItemInterface const*,unsigned int *,unsigned int *)::pAttr_OrangeValue.m_bDestructName = 0;
    GetEssenceCounts(IEconItemInterface const*,unsigned int *,unsigned int *)::pAttr_OrangeValue.m_unSchemaGeneration = v67;
    __cxa_guard_release(&`guard variable for'GetEssenceCounts(IEconItemInterface const*,unsigned int *,unsigned int *)::pAttr_OrangeValue);
    __cxa_atexit(
      CSchemaFieldHandle<CEconItemAttributeDefinition>::~CSchemaFieldHandle,
      &GetEssenceCounts(IEconItemInterface const*,unsigned int *,unsigned int *)::pAttr_OrangeValue,
      &_dso_handle);
  }
  if ( `guard variable for'GetEssenceCounts(IEconItemInterface const*,unsigned int *,unsigned int *)::pAttr_YellowValue == 0
    && __cxa_guard_acquire(&`guard variable for'GetEssenceCounts(IEconItemInterface const*,unsigned int *,unsigned int *)::pAttr_YellowValue) != 0 )
  {
    GetEssenceCounts(IEconItemInterface const*,unsigned int *,unsigned int *)::pAttr_YellowValue.m_szName = "yellow power";
    v76 = GEconItemSchema();
    GetEssenceCounts(IEconItemInterface const*,unsigned int *,unsigned int *)::pAttr_YellowValue.m_pRef = CEconItemSchema::GetAttributeDefinitionByName(v76, "yellow power");
    v77 = GEconItemSchema()->m_unResetCount;
    GetEssenceCounts(IEconItemInterface const*,unsigned int *,unsigned int *)::pAttr_YellowValue.m_bDestructName = 0;
    GetEssenceCounts(IEconItemInterface const*,unsigned int *,unsigned int *)::pAttr_YellowValue.m_unSchemaGeneration = v77;
    __cxa_guard_release(&`guard variable for'GetEssenceCounts(IEconItemInterface const*,unsigned int *,unsigned int *)::pAttr_YellowValue);
    __cxa_atexit(
      CSchemaFieldHandle<CEconItemAttributeDefinition>::~CSchemaFieldHandle,
      &GetEssenceCounts(IEconItemInterface const*,unsigned int *,unsigned int *)::pAttr_YellowValue,
      &_dso_handle);
  }
  if ( `guard variable for'GetEssenceCounts(IEconItemInterface const*,unsigned int *,unsigned int *)::pAttr_GreenValue == 0
    && __cxa_guard_acquire(&`guard variable for'GetEssenceCounts(IEconItemInterface const*,unsigned int *,unsigned int *)::pAttr_GreenValue) != 0 )
  {
    GetEssenceCounts(IEconItemInterface const*,unsigned int *,unsigned int *)::pAttr_GreenValue.m_szName = "green power";
    v74 = GEconItemSchema();
    GetEssenceCounts(IEconItemInterface const*,unsigned int *,unsigned int *)::pAttr_GreenValue.m_pRef = CEconItemSchema::GetAttributeDefinitionByName(v74, "green power");
    v75 = GEconItemSchema()->m_unResetCount;
    GetEssenceCounts(IEconItemInterface const*,unsigned int *,unsigned int *)::pAttr_GreenValue.m_bDestructName = 0;
    GetEssenceCounts(IEconItemInterface const*,unsigned int *,unsigned int *)::pAttr_GreenValue.m_unSchemaGeneration = v75;
    __cxa_guard_release(&`guard variable for'GetEssenceCounts(IEconItemInterface const*,unsigned int *,unsigned int *)::pAttr_GreenValue);
    __cxa_atexit(
      CSchemaFieldHandle<CEconItemAttributeDefinition>::~CSchemaFieldHandle,
      &GetEssenceCounts(IEconItemInterface const*,unsigned int *,unsigned int *)::pAttr_GreenValue,
      &_dso_handle);
  }
  if ( `guard variable for'GetEssenceCounts(IEconItemInterface const*,unsigned int *,unsigned int *)::pAttr_BlueValue == 0
    && __cxa_guard_acquire(&`guard variable for'GetEssenceCounts(IEconItemInterface const*,unsigned int *,unsigned int *)::pAttr_BlueValue) != 0 )
  {
    GetEssenceCounts(IEconItemInterface const*,unsigned int *,unsigned int *)::pAttr_BlueValue.m_szName = "blue power";
    v72 = GEconItemSchema();
    GetEssenceCounts(IEconItemInterface const*,unsigned int *,unsigned int *)::pAttr_BlueValue.m_pRef = CEconItemSchema::GetAttributeDefinitionByName(v72, "blue power");
    v73 = GEconItemSchema()->m_unResetCount;
    GetEssenceCounts(IEconItemInterface const*,unsigned int *,unsigned int *)::pAttr_BlueValue.m_bDestructName = 0;
    GetEssenceCounts(IEconItemInterface const*,unsigned int *,unsigned int *)::pAttr_BlueValue.m_unSchemaGeneration = v73;
    __cxa_guard_release(&`guard variable for'GetEssenceCounts(IEconItemInterface const*,unsigned int *,unsigned int *)::pAttr_BlueValue);
    __cxa_atexit(
      CSchemaFieldHandle<CEconItemAttributeDefinition>::~CSchemaFieldHandle,
      &GetEssenceCounts(IEconItemInterface const*,unsigned int *,unsigned int *)::pAttr_BlueValue,
      &_dso_handle);
  }
  if ( `guard variable for'GetEssenceCounts(IEconItemInterface const*,unsigned int *,unsigned int *)::pAttr_PurpleValue == 0
    && __cxa_guard_acquire(&`guard variable for'GetEssenceCounts(IEconItemInterface const*,unsigned int *,unsigned int *)::pAttr_PurpleValue) != 0 )
  {
    GetEssenceCounts(IEconItemInterface const*,unsigned int *,unsigned int *)::pAttr_PurpleValue.m_szName = "purple power";
    v70 = GEconItemSchema();
    GetEssenceCounts(IEconItemInterface const*,unsigned int *,unsigned int *)::pAttr_PurpleValue.m_pRef = CEconItemSchema::GetAttributeDefinitionByName(v70, "purple power");
    v71 = GEconItemSchema()->m_unResetCount;
    GetEssenceCounts(IEconItemInterface const*,unsigned int *,unsigned int *)::pAttr_PurpleValue.m_bDestructName = 0;
    GetEssenceCounts(IEconItemInterface const*,unsigned int *,unsigned int *)::pAttr_PurpleValue.m_unSchemaGeneration = v71;
    __cxa_guard_release(&`guard variable for'GetEssenceCounts(IEconItemInterface const*,unsigned int *,unsigned int *)::pAttr_PurpleValue);
    __cxa_atexit(
      CSchemaFieldHandle<CEconItemAttributeDefinition>::~CSchemaFieldHandle,
      &GetEssenceCounts(IEconItemInterface const*,unsigned int *,unsigned int *)::pAttr_PurpleValue,
      &_dso_handle);
  }
  if ( `guard variable for'GetEssenceCounts(IEconItemInterface const*,unsigned int *,unsigned int *)::pAttr_WhiteValue == 0
    && __cxa_guard_acquire(&`guard variable for'GetEssenceCounts(IEconItemInterface const*,unsigned int *,unsigned int *)::pAttr_WhiteValue) != 0 )
  {
    GetEssenceCounts(IEconItemInterface const*,unsigned int *,unsigned int *)::pAttr_WhiteValue.m_szName = "white power";
    v62 = GEconItemSchema();
    GetEssenceCounts(IEconItemInterface const*,unsigned int *,unsigned int *)::pAttr_WhiteValue.m_pRef = CEconItemSchema::GetAttributeDefinitionByName(v62, "white power");
    v63 = GEconItemSchema()->m_unResetCount;
    GetEssenceCounts(IEconItemInterface const*,unsigned int *,unsigned int *)::pAttr_WhiteValue.m_bDestructName = 0;
    GetEssenceCounts(IEconItemInterface const*,unsigned int *,unsigned int *)::pAttr_WhiteValue.m_unSchemaGeneration = v63;
    __cxa_guard_release(&`guard variable for'GetEssenceCounts(IEconItemInterface const*,unsigned int *,unsigned int *)::pAttr_WhiteValue);
    __cxa_atexit(
      CSchemaFieldHandle<CEconItemAttributeDefinition>::~CSchemaFieldHandle,
      &GetEssenceCounts(IEconItemInterface const*,unsigned int *,unsigned int *)::pAttr_WhiteValue,
      &_dso_handle);
  }
  if ( `guard variable for'GetEssenceCounts(IEconItemInterface const*,unsigned int *,unsigned int *)::pAttr_BlackValue == 0
    && __cxa_guard_acquire(&`guard variable for'GetEssenceCounts(IEconItemInterface const*,unsigned int *,unsigned int *)::pAttr_BlackValue) != 0 )
  {
    GetEssenceCounts(IEconItemInterface const*,unsigned int *,unsigned int *)::pAttr_BlackValue.m_szName = "black power";
    v60 = GEconItemSchema();
    GetEssenceCounts(IEconItemInterface const*,unsigned int *,unsigned int *)::pAttr_BlackValue.m_pRef = CEconItemSchema::GetAttributeDefinitionByName(v60, "black power");
    v61 = GEconItemSchema()->m_unResetCount;
    GetEssenceCounts(IEconItemInterface const*,unsigned int *,unsigned int *)::pAttr_BlackValue.m_bDestructName = 0;
    GetEssenceCounts(IEconItemInterface const*,unsigned int *,unsigned int *)::pAttr_BlackValue.m_unSchemaGeneration = v61;
    __cxa_guard_release(&`guard variable for'GetEssenceCounts(IEconItemInterface const*,unsigned int *,unsigned int *)::pAttr_BlackValue);
    __cxa_atexit(
      CSchemaFieldHandle<CEconItemAttributeDefinition>::~CSchemaFieldHandle,
      &GetEssenceCounts(IEconItemInterface const*,unsigned int *,unsigned int *)::pAttr_BlackValue,
      &_dso_handle);
  }
  if ( `guard variable for'GetEssenceCounts(IEconItemInterface const*,unsigned int *,unsigned int *)::pAttr_CourierSeed == 0
    && __cxa_guard_acquire(&`guard variable for'GetEssenceCounts(IEconItemInterface const*,unsigned int *,unsigned int *)::pAttr_CourierSeed) != 0 )
  {
    GetEssenceCounts(IEconItemInterface const*,unsigned int *,unsigned int *)::pAttr_CourierSeed.m_szName = "courier seed";
    v64 = GEconItemSchema();
    GetEssenceCounts(IEconItemInterface const*,unsigned int *,unsigned int *)::pAttr_CourierSeed.m_pRef = CEconItemSchema::GetAttributeDefinitionByName(v64, "courier seed");
    v65 = GEconItemSchema()->m_unResetCount;
    GetEssenceCounts(IEconItemInterface const*,unsigned int *,unsigned int *)::pAttr_CourierSeed.m_bDestructName = 0;
    GetEssenceCounts(IEconItemInterface const*,unsigned int *,unsigned int *)::pAttr_CourierSeed.m_unSchemaGeneration = v65;
    __cxa_guard_release(&`guard variable for'GetEssenceCounts(IEconItemInterface const*,unsigned int *,unsigned int *)::pAttr_CourierSeed);
    __cxa_atexit(
      CSchemaFieldHandle<CEconItemAttributeDefinition>::~CSchemaFieldHandle,
      &GetEssenceCounts(IEconItemInterface const*,unsigned int *,unsigned int *)::pAttr_CourierSeed,
      &_dso_handle);
  }
  if ( pItem != 0 )
  {
    if ( GetEssenceCounts(IEconItemInterface const*,unsigned int *,unsigned int *)::pAttr_RedValue.m_szName != 0 )
    {
      v7 = GEconItemSchema()->m_unResetCount;
      m_pRef = GetEssenceCounts(IEconItemInterface const*,unsigned int *,unsigned int *)::pAttr_RedValue.m_pRef;
      if ( v7 != GetEssenceCounts(IEconItemInterface const*,unsigned int *,unsigned int *)::pAttr_RedValue.m_unSchemaGeneration )
      {
        m_szName = GetEssenceCounts(IEconItemInterface const*,unsigned int *,unsigned int *)::pAttr_RedValue.m_szName;
        v10 = GEconItemSchema();
        m_pRef = CEconItemSchema::GetAttributeDefinitionByName(v10, m_szName);
        GetEssenceCounts(IEconItemInterface const*,unsigned int *,unsigned int *)::pAttr_RedValue.m_unSchemaGeneration = v7;
        GetEssenceCounts(IEconItemInterface const*,unsigned int *,unsigned int *)::pAttr_RedValue.m_pRef = m_pRef;
      }
      if ( m_pRef != 0 )
      {
        v79 = m_pRef;
        v80 = iEssenceCounts + 1;
        vptr_IEconItemInterface = pItem->_vptr_IEconItemInterface;
        v78 = &wrapper;
        v81 = 0;
        vptr_IEconItemInterface[28](pItem, &v78);
      }
    }
    if ( GetEssenceCounts(IEconItemInterface const*,unsigned int *,unsigned int *)::pAttr_OrangeValue.m_szName != 0 )
    {
      v12 = GEconItemSchema()->m_unResetCount;
      AttributeDefinitionByName = GetEssenceCounts(IEconItemInterface const*,unsigned int *,unsigned int *)::pAttr_OrangeValue.m_pRef;
      if ( v12 != GetEssenceCounts(IEconItemInterface const*,unsigned int *,unsigned int *)::pAttr_OrangeValue.m_unSchemaGeneration )
      {
        v14 = GetEssenceCounts(IEconItemInterface const*,unsigned int *,unsigned int *)::pAttr_OrangeValue.m_szName;
        v15 = GEconItemSchema();
        AttributeDefinitionByName = CEconItemSchema::GetAttributeDefinitionByName(v15, v14);
        GetEssenceCounts(IEconItemInterface const*,unsigned int *,unsigned int *)::pAttr_OrangeValue.m_unSchemaGeneration = v12;
        GetEssenceCounts(IEconItemInterface const*,unsigned int *,unsigned int *)::pAttr_OrangeValue.m_pRef = AttributeDefinitionByName;
      }
      if ( AttributeDefinitionByName != 0 )
      {
        v79 = AttributeDefinitionByName;
        v80 = iEssenceCounts + 2;
        v16 = pItem->_vptr_IEconItemInterface;
        v78 = &wrapper;
        v81 = 0;
        v16[28](pItem, &v78);
      }
    }
    if ( GetEssenceCounts(IEconItemInterface const*,unsigned int *,unsigned int *)::pAttr_YellowValue.m_szName != 0 )
    {
      v17 = GEconItemSchema()->m_unResetCount;
      v18 = GetEssenceCounts(IEconItemInterface const*,unsigned int *,unsigned int *)::pAttr_YellowValue.m_pRef;
      if ( v17 != GetEssenceCounts(IEconItemInterface const*,unsigned int *,unsigned int *)::pAttr_YellowValue.m_unSchemaGeneration )
      {
        v19 = GetEssenceCounts(IEconItemInterface const*,unsigned int *,unsigned int *)::pAttr_YellowValue.m_szName;
        v20 = GEconItemSchema();
        v18 = CEconItemSchema::GetAttributeDefinitionByName(v20, v19);
        GetEssenceCounts(IEconItemInterface const*,unsigned int *,unsigned int *)::pAttr_YellowValue.m_unSchemaGeneration = v17;
        GetEssenceCounts(IEconItemInterface const*,unsigned int *,unsigned int *)::pAttr_YellowValue.m_pRef = v18;
      }
      if ( v18 != 0 )
      {
        v79 = v18;
        v80 = iEssenceCounts + 3;
        v21 = pItem->_vptr_IEconItemInterface;
        v78 = &wrapper;
        v81 = 0;
        v21[28](pItem, &v78);
      }
    }
    if ( GetEssenceCounts(IEconItemInterface const*,unsigned int *,unsigned int *)::pAttr_GreenValue.m_szName != 0 )
    {
      v22 = GEconItemSchema()->m_unResetCount;
      v23 = GetEssenceCounts(IEconItemInterface const*,unsigned int *,unsigned int *)::pAttr_GreenValue.m_pRef;
      if ( v22 != GetEssenceCounts(IEconItemInterface const*,unsigned int *,unsigned int *)::pAttr_GreenValue.m_unSchemaGeneration )
      {
        v24 = GetEssenceCounts(IEconItemInterface const*,unsigned int *,unsigned int *)::pAttr_GreenValue.m_szName;
        v25 = GEconItemSchema();
        v23 = CEconItemSchema::GetAttributeDefinitionByName(v25, v24);
        GetEssenceCounts(IEconItemInterface const*,unsigned int *,unsigned int *)::pAttr_GreenValue.m_unSchemaGeneration = v22;
        GetEssenceCounts(IEconItemInterface const*,unsigned int *,unsigned int *)::pAttr_GreenValue.m_pRef = v23;
      }
      if ( v23 != 0 )
      {
        v79 = v23;
        v80 = iEssenceCounts + 4;
        v26 = pItem->_vptr_IEconItemInterface;
        v78 = &wrapper;
        v81 = 0;
        v26[28](pItem, &v78);
      }
    }
    if ( GetEssenceCounts(IEconItemInterface const*,unsigned int *,unsigned int *)::pAttr_BlueValue.m_szName != 0 )
    {
      v27 = GEconItemSchema()->m_unResetCount;
      v28 = GetEssenceCounts(IEconItemInterface const*,unsigned int *,unsigned int *)::pAttr_BlueValue.m_pRef;
      if ( v27 != GetEssenceCounts(IEconItemInterface const*,unsigned int *,unsigned int *)::pAttr_BlueValue.m_unSchemaGeneration )
      {
        v29 = GetEssenceCounts(IEconItemInterface const*,unsigned int *,unsigned int *)::pAttr_BlueValue.m_szName;
        v30 = GEconItemSchema();
        v28 = CEconItemSchema::GetAttributeDefinitionByName(v30, v29);
        GetEssenceCounts(IEconItemInterface const*,unsigned int *,unsigned int *)::pAttr_BlueValue.m_unSchemaGeneration = v27;
        GetEssenceCounts(IEconItemInterface const*,unsigned int *,unsigned int *)::pAttr_BlueValue.m_pRef = v28;
      }
      if ( v28 != 0 )
      {
        v79 = v28;
        v80 = iEssenceCounts + 5;
        v31 = pItem->_vptr_IEconItemInterface;
        v78 = &wrapper;
        v81 = 0;
        v31[28](pItem, &v78);
      }
    }
    if ( GetEssenceCounts(IEconItemInterface const*,unsigned int *,unsigned int *)::pAttr_PurpleValue.m_szName != 0 )
    {
      v32 = GEconItemSchema()->m_unResetCount;
      v33 = GetEssenceCounts(IEconItemInterface const*,unsigned int *,unsigned int *)::pAttr_PurpleValue.m_pRef;
      if ( v32 != GetEssenceCounts(IEconItemInterface const*,unsigned int *,unsigned int *)::pAttr_PurpleValue.m_unSchemaGeneration )
      {
        v34 = GetEssenceCounts(IEconItemInterface const*,unsigned int *,unsigned int *)::pAttr_PurpleValue.m_szName;
        v35 = GEconItemSchema();
        v33 = CEconItemSchema::GetAttributeDefinitionByName(v35, v34);
        GetEssenceCounts(IEconItemInterface const*,unsigned int *,unsigned int *)::pAttr_PurpleValue.m_unSchemaGeneration = v32;
        GetEssenceCounts(IEconItemInterface const*,unsigned int *,unsigned int *)::pAttr_PurpleValue.m_pRef = v33;
      }
      if ( v33 != 0 )
      {
        v79 = v33;
        v80 = iEssenceCounts + 6;
        v36 = pItem->_vptr_IEconItemInterface;
        v78 = &wrapper;
        v81 = 0;
        v36[28](pItem, &v78);
      }
    }
    if ( GetEssenceCounts(IEconItemInterface const*,unsigned int *,unsigned int *)::pAttr_WhiteValue.m_szName != 0 )
    {
      v37 = GEconItemSchema()->m_unResetCount;
      v38 = GetEssenceCounts(IEconItemInterface const*,unsigned int *,unsigned int *)::pAttr_WhiteValue.m_pRef;
      if ( v37 != GetEssenceCounts(IEconItemInterface const*,unsigned int *,unsigned int *)::pAttr_WhiteValue.m_unSchemaGeneration )
      {
        v39 = GetEssenceCounts(IEconItemInterface const*,unsigned int *,unsigned int *)::pAttr_WhiteValue.m_szName;
        v40 = GEconItemSchema();
        v38 = CEconItemSchema::GetAttributeDefinitionByName(v40, v39);
        GetEssenceCounts(IEconItemInterface const*,unsigned int *,unsigned int *)::pAttr_WhiteValue.m_unSchemaGeneration = v37;
        GetEssenceCounts(IEconItemInterface const*,unsigned int *,unsigned int *)::pAttr_WhiteValue.m_pRef = v38;
      }
      if ( v38 != 0 )
      {
        v79 = v38;
        v80 = iEssenceCounts + 7;
        v41 = pItem->_vptr_IEconItemInterface;
        v78 = &wrapper;
        v81 = 0;
        v41[28](pItem, &v78);
      }
    }
    if ( GetEssenceCounts(IEconItemInterface const*,unsigned int *,unsigned int *)::pAttr_BlackValue.m_szName != 0 )
    {
      v42 = GEconItemSchema()->m_unResetCount;
      v43 = GetEssenceCounts(IEconItemInterface const*,unsigned int *,unsigned int *)::pAttr_BlackValue.m_pRef;
      if ( v42 != GetEssenceCounts(IEconItemInterface const*,unsigned int *,unsigned int *)::pAttr_BlackValue.m_unSchemaGeneration )
      {
        v44 = GetEssenceCounts(IEconItemInterface const*,unsigned int *,unsigned int *)::pAttr_BlackValue.m_szName;
        v45 = GEconItemSchema();
        v43 = CEconItemSchema::GetAttributeDefinitionByName(v45, v44);
        GetEssenceCounts(IEconItemInterface const*,unsigned int *,unsigned int *)::pAttr_BlackValue.m_unSchemaGeneration = v42;
        GetEssenceCounts(IEconItemInterface const*,unsigned int *,unsigned int *)::pAttr_BlackValue.m_pRef = v43;
      }
      if ( v43 != 0 )
      {
        v79 = v43;
        v80 = iEssenceCounts + 8;
        v46 = pItem->_vptr_IEconItemInterface;
        v78 = &wrapper;
        v81 = 0;
        v46[28](pItem, &v78);
      }
    }
    if ( pSeed != 0
      && GetEssenceCounts(IEconItemInterface const*,unsigned int *,unsigned int *)::pAttr_CourierSeed.m_szName != 0 )
    {
      v55 = GEconItemSchema()->m_unResetCount;
      v56 = GetEssenceCounts(IEconItemInterface const*,unsigned int *,unsigned int *)::pAttr_CourierSeed.m_pRef;
      if ( v55 != GetEssenceCounts(IEconItemInterface const*,unsigned int *,unsigned int *)::pAttr_CourierSeed.m_unSchemaGeneration )
      {
        v57 = GetEssenceCounts(IEconItemInterface const*,unsigned int *,unsigned int *)::pAttr_CourierSeed.m_szName;
        v58 = GEconItemSchema();
        v56 = CEconItemSchema::GetAttributeDefinitionByName(v58, v57);
        GetEssenceCounts(IEconItemInterface const*,unsigned int *,unsigned int *)::pAttr_CourierSeed.m_unSchemaGeneration = v55;
        GetEssenceCounts(IEconItemInterface const*,unsigned int *,unsigned int *)::pAttr_CourierSeed.m_pRef = v56;
      }
      if ( v56 != 0 )
      {
        v79 = v56;
        v59 = pItem->_vptr_IEconItemInterface;
        v78 = &wrapper;
        v80 = pSeed;
        v81 = 0;
        v59[28](pItem, &v78);
      }
    }
  }
  m_nValue = dota_greevil_red_essence.m_pParent->m_Value.m_nValue;
  if ( m_nValue >= 0 )
    iEssenceCounts[1] = m_nValue;
  v48 = dota_greevil_orange_essence.m_pParent->m_Value.m_nValue;
  if ( v48 >= 0 )
    iEssenceCounts[2] = v48;
  v49 = dota_greevil_yellow_essence.m_pParent->m_Value.m_nValue;
  if ( v49 >= 0 )
    iEssenceCounts[3] = v49;
  v50 = dota_greevil_green_essence.m_pParent->m_Value.m_nValue;
  if ( v50 >= 0 )
    iEssenceCounts[4] = v50;
  v51 = dota_greevil_blue_essence.m_pParent->m_Value.m_nValue;
  if ( v51 >= 0 )
    iEssenceCounts[5] = v51;
  v52 = dota_greevil_purple_essence.m_pParent->m_Value.m_nValue;
  if ( v52 >= 0 )
    iEssenceCounts[6] = v52;
  v53 = dota_greevil_white_essence.m_pParent->m_Value.m_nValue;
  if ( v53 >= 0 )
    iEssenceCounts[7] = v53;
  v54 = dota_greevil_black_essence.m_pParent->m_Value.m_nValue;
  if ( v54 < 0 )
    v54 = iEssenceCounts[8];
  else
    iEssenceCounts[8] = v54;
  if ( v54 != 0 )
  {
    iEssenceCounts[1] = 3;
    iEssenceCounts[2] = 2;
    iEssenceCounts[3] = 3;
    iEssenceCounts[4] = 2;
    iEssenceCounts[5] = 3;
    iEssenceCounts[6] = 2;
  }
}


// GetAbilityForGreevil  (line 308, @0x000000000269c350, libserver.so)  // inlines: AddToTail, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<int>, Element, GrowMemory, Purge, RemoveAll, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: GetEssenceCounts, CUtlMemory<int, int>::Grow, CUniformRandomStream::CUniformRandomStream(void), CUniformRandomStream::SetSeed(int), CUniformRandomStream::RandomInt(int,int), CUtlVectorBase<int, CUtlMemory<int, int> >::Remove, CUtlMemory<int, int>::Purge, RandomInt, CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase, _Unwind_Resume
// strings: "greevil_decrepify", "greevil_rot", "greevil_fatal_bonds", "greevil_blade_fury", "greevil_phantom_strike", "greevil_time_lock" (20 total)
const char *__fastcall GetAbilityForGreevil(
        const IEconItemInterface *pItem,
        int iSlot,
        int *pSlotScore,
        uint32 iDefaultSeed)
{
  CUtlVectorBase<int,CUtlMemory<int,int> >::CAllocator *p_m_Memory; // rax
  CUtlVectorBase<int,CUtlMemory<int,int> >::CAllocator *v5; // rdx
  signed __int64 v6; // rdx
  __int64 m_Size; // r12
  int v8; // ebx
  int v9; // ebx
  int *v10; // rax
  int v11; // eax
  int *v12; // rax
  __int64 v13; // r12
  int v14; // ebx
  int v15; // ebx
  int *v16; // rax
  int v17; // eax
  int *v18; // rax
  __int64 v19; // r12
  int v20; // ebx
  int v21; // ebx
  int *v22; // rax
  int v23; // eax
  int *v24; // rax
  __int64 v25; // r12
  int v26; // ebx
  int v27; // ebx
  int *v28; // rax
  int v29; // eax
  int *v30; // rax
  __int64 v31; // r12
  int v32; // ebx
  int v33; // ebx
  int *v34; // rax
  int v35; // eax
  int *v36; // rax
  __int64 v37; // r12
  int v38; // ebx
  int v39; // ebx
  int *v40; // rax
  int v41; // eax
  int *v42; // rax
  unsigned int *v43; // rcx
  int v44; // eax
  signed int v45; // r8d
  int v46; // r9d
  bool v47; // zf
  int v48; // edx
  unsigned int v49; // eax
  __int64 i; // r13
  unsigned int v51; // r12d
  int *v52; // rax
  __int64 v53; // rbx
  int v54; // eax
  __int64 j; // rbx
  int v56; // eax
  int v57; // r15d
  CUtlVector<int,CUtlMemory<int,int> > *v58; // r14
  int v59; // eax
  int v60; // eax
  const char *v61; // r13
  CUtlVectorBase<int,CUtlMemory<int,int> >::CAllocator *v62; // rbx
  CUtlMemory<int,int> *v63; // rdi
  __int64 v65; // rax
  bool bIsNaked; // [rsp+13h] [rbp-30Dh]
  unsigned int iUltiCount; // [rsp+18h] [rbp-308h]
  int iUltiColor; // [rsp+1Ch] [rbp-304h]
  uint32 iSeed; // [rsp+4Ch] [rbp-2D4h] BYREF
  int iAbilityIndices[4]; // [rsp+50h] [rbp-2D0h]
  int iAbilityCount[4]; // [rsp+60h] [rbp-2C0h]
  CUtlVector<int,CUtlMemory<int,int> > colorRolls; // [rsp+70h] [rbp-2B0h] BYREF
  uint32 iEssenceCounts[12]; // [rsp+90h] [rbp-290h] BYREF
  const char *pszUltiNames[9]; // [rsp+C0h] [rbp-260h]
  const char *pszAbilityNames[12]; // [rsp+110h] [rbp-210h]
  _BYTE v78[144]; // [rsp+170h] [rbp-1B0h] BYREF
  _BYTE v79[16]; // [rsp+200h] [rbp-120h] BYREF
  CUtlVector<int,CUtlMemory<int,int> > colorAbilities[9]; // [rsp+210h] [rbp-110h] BYREF
  char v81; // [rsp+2F0h] [rbp-30h] BYREF

  iSeed = iDefaultSeed;
  GetEssenceCounts(pItem, iEssenceCounts, &iSeed);
  pszAbilityNames[0] = "greevil_decrepify";
  pszAbilityNames[1] = "greevil_rot";
  pszAbilityNames[2] = "greevil_fatal_bonds";
  pszAbilityNames[3] = "greevil_blade_fury";
  pszAbilityNames[4] = "greevil_phantom_strike";
  pszAbilityNames[5] = "greevil_time_lock";
  pszAbilityNames[6] = "greevil_shadow_wave";
  pszAbilityNames[7] = "greevil_leech_seed";
  pszAbilityNames[8] = "greevil_ice_wall";
  pszAbilityNames[9] = "greevil_magic_missile";
  pszAbilityNames[10] = "greevil_maledict";
  pszAbilityNames[11] = "greevil_hook";
  p_m_Memory = &colorAbilities[0].m_Memory;
  do
  {
    p_m_Memory[-1].m_nAllocationCount = 0;
    v5 = p_m_Memory;
    p_m_Memory = (p_m_Memory + 24);
    v6 = v5 - colorAbilities;
    *(&colorAbilities[0].m_Memory + v6 - 8) = 0;
    *(&colorAbilities[0].m_Memory.m_pMemory + v6) = 0;
    *(&colorAbilities[0].m_Memory.m_pMemory + v6 + 4) = 0;
  }
  while ( p_m_Memory != &v81 );
  m_Size = colorAbilities[1].m_Size;
  v8 = colorAbilities[1].m_Size;
  if ( colorAbilities[1].m_Size == colorAbilities[1].m_Memory.m_nAllocationCount )
  {
    CUtlMemory<int,int>::Grow(&colorAbilities[1].m_Memory, 1);
    v8 = colorAbilities[1].m_Size;
  }
  v9 = v8 + 1;
  colorAbilities[1].m_Size = v9;
  v10 = &colorAbilities[1].m_Memory.m_pMemory[m_Size];
  if ( v10 != 0 )
  {
    *v10 = 0;
    v9 = colorAbilities[1].m_Size;
  }
  v11 = v9;
  if ( v9 == colorAbilities[1].m_Memory.m_nAllocationCount )
  {
    CUtlMemory<int,int>::Grow(&colorAbilities[1].m_Memory, 1);
    v11 = colorAbilities[1].m_Size;
  }
  colorAbilities[1].m_Size = v11 + 1;
  v12 = &colorAbilities[1].m_Memory.m_pMemory[v9];
  if ( v12 != 0 )
    *v12 = 1;
  v13 = colorAbilities[2].m_Size;
  v14 = colorAbilities[2].m_Size;
  if ( colorAbilities[2].m_Size == colorAbilities[2].m_Memory.m_nAllocationCount )
  {
    CUtlMemory<int,int>::Grow(&colorAbilities[2].m_Memory, 1);
    v14 = colorAbilities[2].m_Size;
  }
  v15 = v14 + 1;
  colorAbilities[2].m_Size = v15;
  v16 = &colorAbilities[2].m_Memory.m_pMemory[v13];
  if ( v16 != 0 )
  {
    *v16 = 2;
    v15 = colorAbilities[2].m_Size;
  }
  v17 = v15;
  if ( colorAbilities[2].m_Memory.m_nAllocationCount == v15 )
  {
    CUtlMemory<int,int>::Grow(&colorAbilities[2].m_Memory, 1);
    v17 = colorAbilities[2].m_Size;
  }
  colorAbilities[2].m_Size = v17 + 1;
  v18 = &colorAbilities[2].m_Memory.m_pMemory[v15];
  if ( v18 != 0 )
    *v18 = 3;
  v19 = colorAbilities[3].m_Size;
  v20 = colorAbilities[3].m_Size;
  if ( colorAbilities[3].m_Size == colorAbilities[3].m_Memory.m_nAllocationCount )
  {
    CUtlMemory<int,int>::Grow(&colorAbilities[3].m_Memory, 1);
    v20 = colorAbilities[3].m_Size;
  }
  v21 = v20 + 1;
  colorAbilities[3].m_Size = v21;
  v22 = &colorAbilities[3].m_Memory.m_pMemory[v19];
  if ( v22 != 0 )
  {
    *v22 = 4;
    v21 = colorAbilities[3].m_Size;
  }
  v23 = v21;
  if ( colorAbilities[3].m_Memory.m_nAllocationCount == v21 )
  {
    CUtlMemory<int,int>::Grow(&colorAbilities[3].m_Memory, 1);
    v23 = colorAbilities[3].m_Size;
  }
  colorAbilities[3].m_Size = v23 + 1;
  v24 = &colorAbilities[3].m_Memory.m_pMemory[v21];
  if ( v24 != 0 )
    *v24 = 5;
  v25 = colorAbilities[4].m_Size;
  v26 = colorAbilities[4].m_Size;
  if ( colorAbilities[4].m_Size == colorAbilities[4].m_Memory.m_nAllocationCount )
  {
    CUtlMemory<int,int>::Grow(&colorAbilities[4].m_Memory, 1);
    v26 = colorAbilities[4].m_Size;
  }
  v27 = v26 + 1;
  colorAbilities[4].m_Size = v27;
  v28 = &colorAbilities[4].m_Memory.m_pMemory[v25];
  if ( v28 != 0 )
  {
    *v28 = 6;
    v27 = colorAbilities[4].m_Size;
  }
  v29 = v27;
  if ( v27 == colorAbilities[4].m_Memory.m_nAllocationCount )
  {
    CUtlMemory<int,int>::Grow(&colorAbilities[4].m_Memory, 1);
    v29 = colorAbilities[4].m_Size;
  }
  colorAbilities[4].m_Size = v29 + 1;
  v30 = &colorAbilities[4].m_Memory.m_pMemory[v27];
  if ( v30 != 0 )
    *v30 = 7;
  v31 = colorAbilities[5].m_Size;
  v32 = colorAbilities[5].m_Size;
  if ( colorAbilities[5].m_Size == colorAbilities[5].m_Memory.m_nAllocationCount )
  {
    CUtlMemory<int,int>::Grow(&colorAbilities[5].m_Memory, 1);
    v32 = colorAbilities[5].m_Size;
  }
  v33 = v32 + 1;
  colorAbilities[5].m_Size = v33;
  v34 = &colorAbilities[5].m_Memory.m_pMemory[v31];
  if ( v34 != 0 )
  {
    *v34 = 8;
    v33 = colorAbilities[5].m_Size;
  }
  v35 = v33;
  if ( v33 == colorAbilities[5].m_Memory.m_nAllocationCount )
  {
    CUtlMemory<int,int>::Grow(&colorAbilities[5].m_Memory, 1);
    v35 = colorAbilities[5].m_Size;
  }
  colorAbilities[5].m_Size = v35 + 1;
  v36 = &colorAbilities[5].m_Memory.m_pMemory[v33];
  if ( v36 != 0 )
    *v36 = 9;
  v37 = colorAbilities[6].m_Size;
  v38 = colorAbilities[6].m_Size;
  if ( colorAbilities[6].m_Size == colorAbilities[6].m_Memory.m_nAllocationCount )
  {
    CUtlMemory<int,int>::Grow(&colorAbilities[6].m_Memory, 1);
    v38 = colorAbilities[6].m_Size;
  }
  v39 = v38 + 1;
  colorAbilities[6].m_Size = v39;
  v40 = &colorAbilities[6].m_Memory.m_pMemory[v37];
  if ( v40 != 0 )
  {
    *v40 = 10;
    v39 = colorAbilities[6].m_Size;
  }
  v41 = v39;
  if ( v39 == colorAbilities[6].m_Memory.m_nAllocationCount )
  {
    CUtlMemory<int,int>::Grow(&colorAbilities[6].m_Memory, 1);
    v41 = colorAbilities[6].m_Size;
  }
  colorAbilities[6].m_Size = v41 + 1;
  v42 = &colorAbilities[6].m_Memory.m_pMemory[v39];
  if ( v42 != 0 )
    *v42 = 11;
  iAbilityIndices[0] = -1;
  pszUltiNames[0] = "";
  pszUltiNames[1] = "greevil_laguna_blade";
  pszUltiNames[2] = "greevil_echo_slam";
  pszUltiNames[3] = "greevil_bloodlust";
  iAbilityIndices[1] = -1;
  pszUltiNames[4] = "greevil_natures_attendants";
  pszUltiNames[5] = "greevil_black_hole";
  pszUltiNames[6] = "greevil_poison_nova";
  pszUltiNames[7] = "greevil_purification";
  pszUltiNames[8] = "greevil_flesh_golem";
  iAbilityCount[0] = 0;
  iAbilityCount[1] = 0;
  colorRolls.m_Size = 0;
  colorRolls.m_Memory.m_pMemory = 0;
  colorRolls.m_Memory.m_nAllocationCount = 0;
  colorRolls.m_Memory.m_nGrowSize = 0;
  if ( iEssenceCounts[8] != 0 )
  {
    iUltiCount = 3;
    iUltiColor = 8;
  }
  else
  {
    if ( iEssenceCounts[7] == 0 )
    {
      v43 = &iEssenceCounts[1];
      v44 = 1;
      v45 = 0;
      v46 = 0;
      while ( 1 )
      {
        while ( 1 )
        {
          v48 = *v43;
          if ( *v43 <= 0 )
            goto LABEL_58;
          if ( v44 != 4 && v44 != 2 && v44 != 6 )
            break;
          v47 = ++v48 == v45;
          if ( v48 <= v45 )
            goto LABEL_57;
LABEL_62:
          v46 = v44++;
          ++v43;
          v45 = v48;
          if ( v44 == 7 )
          {
LABEL_63:
            iUltiColor = v46;
            iUltiCount = v45;
            goto LABEL_65;
          }
        }
        if ( v48 != 1 )
        {
          v47 = v48 == v45;
          if ( v48 > v45 )
            goto LABEL_62;
LABEL_57:
          if ( v47 )
          {
            if ( v44 == 4 || v44 == 2 )
            {
              v46 = v44;
            }
            else if ( v44 == 6 )
            {
              iUltiCount = v45;
              iUltiColor = 6;
              goto LABEL_65;
            }
          }
        }
LABEL_58:
        ++v44;
        ++v43;
        if ( v44 == 7 )
          goto LABEL_63;
      }
    }
    iUltiCount = iEssenceCounts[7];
    iUltiColor = 7;
  }
LABEL_65:
  bIsNaked = 0;
  v49 = iEssenceCounts[1];
  if ( iEssenceCounts[1] <= 1 && iEssenceCounts[3] <= 1 && iEssenceCounts[5] <= 1 )
  {
    iEssenceCounts[1] = 1;
    iEssenceCounts[2] = 1;
    iEssenceCounts[3] = 1;
    iEssenceCounts[4] = 1;
    iEssenceCounts[5] = 1;
    iEssenceCounts[6] = 1;
    iUltiColor = RandomInt(1, 6);
    v49 = iEssenceCounts[1];
    bIsNaked = 1;
    iUltiCount = 1;
  }
  for ( i = 0; ; v49 = iEssenceCounts[i + 1] )
  {
    if ( v49 != 0 )
    {
      v51 = 0;
      do
      {
        v53 = colorRolls.m_Size;
        v54 = colorRolls.m_Size;
        if ( colorRolls.m_Size == colorRolls.m_Memory.m_nAllocationCount )
        {
          CUtlMemory<int,int>::Grow(&colorRolls.m_Memory, 1);
          v54 = colorRolls.m_Size;
        }
        colorRolls.m_Size = v54 + 1;
        v52 = &colorRolls.m_Memory.m_pMemory[v53];
        if ( v52 != 0 )
          *v52 = i + 1;
        ++v51;
      }
      while ( iEssenceCounts[i + 1] > v51 );
    }
    if ( ++i == 6 )
      break;
  }
  CUniformRandomStream::CUniformRandomStream(v78);
  CUniformRandomStream::SetSeed(v78, iSeed);
  for ( j = 0; j != 2; ++j )
  {
    if ( colorRolls.m_Size > 0 )
    {
      v56 = CUniformRandomStream::RandomInt(v78, 0, colorRolls.m_Size - 1);
      v57 = colorRolls.m_Memory.m_pMemory[v56];
      CUtlVectorBase<int,CUtlMemory<int,int>>::Remove(&colorRolls, v56);
      v58 = &colorAbilities[v57];
      if ( v58->m_Size > 0 )
      {
        v59 = CUniformRandomStream::RandomInt(v78, 0, v58->m_Size - 1);
        iAbilityIndices[j] = v58->m_Memory.m_pMemory[v59];
        CUtlVectorBase<int,CUtlMemory<int,int>>::Remove(v58, v59);
        v60 = iEssenceCounts[v57];
        iAbilityCount[j] = v60;
        if ( !bIsNaked )
        {
          if ( (v57 & 0xFFFFFFFB) == 2 )
          {
            iAbilityCount[j] = v60 + 1;
          }
          else if ( v57 == 4 )
          {
            iAbilityCount[j] = v60 + 1;
          }
        }
      }
    }
  }
  if ( iSlot < 0 )
    goto LABEL_97;
  if ( iSlot <= 1 )
  {
    if ( pSlotScore != 0 )
      *pSlotScore = iAbilityCount[iSlot];
    v65 = iAbilityIndices[iSlot];
    v61 = "";
    if ( v65 >= 0 )
      v61 = pszAbilityNames[v65];
    goto LABEL_87;
  }
  if ( iSlot == 3 )
  {
    if ( pSlotScore != 0 )
      *pSlotScore = iUltiCount;
    v61 = pszUltiNames[iUltiColor];
  }
  else
  {
LABEL_97:
    v61 = "";
  }
LABEL_87:
  colorRolls.m_Size = 0;
  if ( (colorRolls.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<int,int>::Purge(&colorRolls.m_Memory);
    if ( (colorRolls.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<int,int>::Purge(&colorRolls.m_Memory);
  }
  v62 = &colorAbilities[8].m_Memory;
  do
  {
    while ( 1 )
    {
      v47 = (v62->m_nGrowSize & 0xC0000000) == 0;
      v62[-1].m_nAllocationCount = 0;
      if ( v47 )
      {
        CUtlMemory<int,int>::Purge(v62);
        if ( (v62->m_nGrowSize & 0xC0000000) == 0 )
          break;
      }
      v62 = (v62 - 24);
      if ( v62 == v79 )
        return v61;
    }
    v63 = v62;
    v62 = (v62 - 24);
    CUtlMemory<int,int>::Purge(v63);
  }
  while ( v62 != v79 );
  return v61;
}


// GetEggColor  (line 494, @0x000000000266ffb0, libserver.so)  // inlines: CAttributeIterator_GetTypedAttributeValue, CSchemaFieldHandle, FindAttribute<IEconItemInterface, unsigned int>, FindAttribute<unsigned int>, FindAttribute_UnsafeBitwiseCast<unsigned int, unsigned int, IEconItemInterface>, Get, GetTypedRef, operator const CEconItemAttributeDefinition*
// calls: __cxa_guard_acquire, GEconItemSchema, CEconItemSchema::GetAttributeDefinitionByName, __cxa_guard_release, __cxa_atexit, __cxa_guard_abort, _Unwind_Resume
// callers: CEconItemView::GetInventoryImage
// strings: "black power", "unusual power", "skin index", "green power", "purple power", "yellow power" (9 total)
// globals: `guard variable for'GetEggColor(IEconItemInterface const*)::pAttrib_BlackPower, GetEggColor(IEconItemInterface const*)::pAttrib_BlackPower, `guard variable for'GetEggColor(IEconItemInterface const*)::pAttrib_RedPower, GetEggColor(IEconItemInterface const*)::pAttrib_RedPower, `guard variable for'GetEggColor(IEconItemInterface const*)::pAttrib_BluePower, GetEggColor(IEconItemInterface const*)::pAttrib_BluePower, `guard variable for'GetEggColor(IEconItemInterface const*)::pAttrib_YellowPower, GetEggColor(IEconItemInterface const*)::pAttrib_YellowPower (20 total)
DOTA_EGG_COLOR __fastcall GetEggColor(const IEconItemInterface *pEggItem)
{
  uint32 v2; // r12d
  const CEconItemAttributeDefinition *m_pRef; // rax
  const char *m_szName; // r13
  CEconItemSchema *v5; // rax
  int (**vptr_IEconItemInterface)(...); // rax
  uint32 v7; // r12d
  const CEconItemAttributeDefinition *AttributeDefinitionByName; // rax
  const char *v9; // r13
  CEconItemSchema *v10; // rax
  int (**v11)(...); // rax
  uint32 v12; // r12d
  const CEconItemAttributeDefinition *v13; // rax
  const char *v14; // r13
  CEconItemSchema *v15; // rax
  int (**v16)(...); // rax
  uint32 v17; // r12d
  const CEconItemAttributeDefinition *v18; // rax
  const char *v19; // r13
  CEconItemSchema *v20; // rax
  int (**v21)(...); // rax
  uint32 v22; // r12d
  const CEconItemAttributeDefinition *v23; // rax
  const char *v24; // r13
  CEconItemSchema *v25; // rax
  int (**v26)(...); // rax
  uint32 v27; // r12d
  const CEconItemAttributeDefinition *v28; // rax
  const char *v29; // r13
  CEconItemSchema *v30; // rax
  int (**v31)(...); // rax
  uint32 v32; // r12d
  const CEconItemAttributeDefinition *v33; // rax
  const char *v34; // r13
  CEconItemSchema *v35; // rax
  int (**v36)(...); // rax
  uint32 v37; // r12d
  const CEconItemAttributeDefinition *v38; // rax
  const char *v39; // r13
  CEconItemSchema *v40; // rax
  int (**v41)(...); // rax
  uint32 v42; // r12d
  const CEconItemAttributeDefinition *v43; // rax
  const char *v44; // r13
  CEconItemSchema *v45; // rax
  int (**v46)(...); // rax
  DOTA_EGG_COLOR result; // eax
  uint32 v48; // edx
  uint32 v49; // ecx
  uint32 v50; // edi
  uint32 v51; // r8d
  uint32 v52; // r9d
  uint32 v53; // r10d
  CEconItemSchema *v54; // rax
  uint32 m_unResetCount; // eax
  CEconItemSchema *v56; // rax
  uint32 v57; // eax
  CEconItemSchema *v58; // rax
  uint32 v59; // eax
  CEconItemSchema *v60; // rax
  uint32 v61; // eax
  CEconItemSchema *v62; // rax
  uint32 v63; // eax
  CEconItemSchema *v64; // rax
  uint32 v65; // eax
  CEconItemSchema *v66; // rax
  uint32 v67; // eax
  CEconItemSchema *v68; // rax
  uint32 v69; // eax
  CEconItemSchema *v70; // rax
  uint32 v71; // eax
  uint32 iBlackPower; // [rsp+Ch] [rbp-64h] BYREF
  uint32 iRedPower; // [rsp+10h] [rbp-60h] BYREF
  uint32 iBluePower; // [rsp+14h] [rbp-5Ch] BYREF
  uint32 iYellowPower; // [rsp+18h] [rbp-58h] BYREF
  uint32 iOrangePower; // [rsp+1Ch] [rbp-54h] BYREF
  uint32 iGreenPower; // [rsp+20h] [rbp-50h] BYREF
  uint32 iPurplePower; // [rsp+24h] [rbp-4Ch] BYREF
  uint32 iUnusualPower; // [rsp+28h] [rbp-48h] BYREF
  uint32 iSkinIndex; // [rsp+2Ch] [rbp-44h] BYREF
  CIterateAllAttributes *v81; // [rsp+30h] [rbp-40h] BYREF
  const CEconItemAttributeDefinition *v82; // [rsp+38h] [rbp-38h]
  uint32 *p_iBlackPower; // [rsp+40h] [rbp-30h]
  char v84; // [rsp+48h] [rbp-28h]

  iBlackPower = 0;
  if ( `guard variable for'GetEggColor(IEconItemInterface const*)::pAttrib_BlackPower == 0
    && __cxa_guard_acquire(&`guard variable for'GetEggColor(IEconItemInterface const*)::pAttrib_BlackPower) != 0 )
  {
    GetEggColor(IEconItemInterface const*)::pAttrib_BlackPower.m_szName = "black power";
    v54 = GEconItemSchema();
    GetEggColor(IEconItemInterface const*)::pAttrib_BlackPower.m_pRef = CEconItemSchema::GetAttributeDefinitionByName(
                                                                          v54,
                                                                          "black power");
    m_unResetCount = GEconItemSchema()->m_unResetCount;
    GetEggColor(IEconItemInterface const*)::pAttrib_BlackPower.m_bDestructName = 0;
    GetEggColor(IEconItemInterface const*)::pAttrib_BlackPower.m_unSchemaGeneration = m_unResetCount;
    __cxa_guard_release(&`guard variable for'GetEggColor(IEconItemInterface const*)::pAttrib_BlackPower);
    __cxa_atexit(
      CSchemaFieldHandle<CEconItemAttributeDefinition>::~CSchemaFieldHandle,
      &GetEggColor(IEconItemInterface const*)::pAttrib_BlackPower,
      &_dso_handle);
  }
  if ( GetEggColor(IEconItemInterface const*)::pAttrib_BlackPower.m_szName != 0 )
  {
    v2 = GEconItemSchema()->m_unResetCount;
    m_pRef = GetEggColor(IEconItemInterface const*)::pAttrib_BlackPower.m_pRef;
    if ( v2 != GetEggColor(IEconItemInterface const*)::pAttrib_BlackPower.m_unSchemaGeneration )
    {
      m_szName = GetEggColor(IEconItemInterface const*)::pAttrib_BlackPower.m_szName;
      v5 = GEconItemSchema();
      m_pRef = CEconItemSchema::GetAttributeDefinitionByName(v5, m_szName);
      GetEggColor(IEconItemInterface const*)::pAttrib_BlackPower.m_unSchemaGeneration = v2;
      GetEggColor(IEconItemInterface const*)::pAttrib_BlackPower.m_pRef = m_pRef;
    }
    if ( m_pRef != 0 )
    {
      v82 = m_pRef;
      p_iBlackPower = &iBlackPower;
      vptr_IEconItemInterface = pEggItem->_vptr_IEconItemInterface;
      v81 = &wrapper;
      v84 = 0;
      vptr_IEconItemInterface[28](pEggItem, &v81);
    }
  }
  iRedPower = 0;
  if ( `guard variable for'GetEggColor(IEconItemInterface const*)::pAttrib_RedPower == 0
    && __cxa_guard_acquire(&`guard variable for'GetEggColor(IEconItemInterface const*)::pAttrib_RedPower) != 0 )
  {
    GetEggColor(IEconItemInterface const*)::pAttrib_RedPower.m_szName = "red power";
    v68 = GEconItemSchema();
    GetEggColor(IEconItemInterface const*)::pAttrib_RedPower.m_pRef = CEconItemSchema::GetAttributeDefinitionByName(
                                                                        v68,
                                                                        "red power");
    v69 = GEconItemSchema()->m_unResetCount;
    GetEggColor(IEconItemInterface const*)::pAttrib_RedPower.m_bDestructName = 0;
    GetEggColor(IEconItemInterface const*)::pAttrib_RedPower.m_unSchemaGeneration = v69;
    __cxa_guard_release(&`guard variable for'GetEggColor(IEconItemInterface const*)::pAttrib_RedPower);
    __cxa_atexit(
      CSchemaFieldHandle<CEconItemAttributeDefinition>::~CSchemaFieldHandle,
      &GetEggColor(IEconItemInterface const*)::pAttrib_RedPower,
      &_dso_handle);
  }
  if ( GetEggColor(IEconItemInterface const*)::pAttrib_RedPower.m_szName != 0 )
  {
    v7 = GEconItemSchema()->m_unResetCount;
    AttributeDefinitionByName = GetEggColor(IEconItemInterface const*)::pAttrib_RedPower.m_pRef;
    if ( v7 != GetEggColor(IEconItemInterface const*)::pAttrib_RedPower.m_unSchemaGeneration )
    {
      v9 = GetEggColor(IEconItemInterface const*)::pAttrib_RedPower.m_szName;
      v10 = GEconItemSchema();
      AttributeDefinitionByName = CEconItemSchema::GetAttributeDefinitionByName(v10, v9);
      GetEggColor(IEconItemInterface const*)::pAttrib_RedPower.m_unSchemaGeneration = v7;
      GetEggColor(IEconItemInterface const*)::pAttrib_RedPower.m_pRef = AttributeDefinitionByName;
    }
    if ( AttributeDefinitionByName != 0 )
    {
      v82 = AttributeDefinitionByName;
      p_iBlackPower = &iRedPower;
      v11 = pEggItem->_vptr_IEconItemInterface;
      v81 = &wrapper;
      v84 = 0;
      v11[28](pEggItem, &v81);
    }
  }
  iBluePower = 0;
  if ( `guard variable for'GetEggColor(IEconItemInterface const*)::pAttrib_BluePower == 0
    && __cxa_guard_acquire(&`guard variable for'GetEggColor(IEconItemInterface const*)::pAttrib_BluePower) != 0 )
  {
    GetEggColor(IEconItemInterface const*)::pAttrib_BluePower.m_szName = "blue power";
    v70 = GEconItemSchema();
    GetEggColor(IEconItemInterface const*)::pAttrib_BluePower.m_pRef = CEconItemSchema::GetAttributeDefinitionByName(
                                                                         v70,
                                                                         "blue power");
    v71 = GEconItemSchema()->m_unResetCount;
    GetEggColor(IEconItemInterface const*)::pAttrib_BluePower.m_bDestructName = 0;
    GetEggColor(IEconItemInterface const*)::pAttrib_BluePower.m_unSchemaGeneration = v71;
    __cxa_guard_release(&`guard variable for'GetEggColor(IEconItemInterface const*)::pAttrib_BluePower);
    __cxa_atexit(
      CSchemaFieldHandle<CEconItemAttributeDefinition>::~CSchemaFieldHandle,
      &GetEggColor(IEconItemInterface const*)::pAttrib_BluePower,
      &_dso_handle);
  }
  if ( GetEggColor(IEconItemInterface const*)::pAttrib_BluePower.m_szName != 0 )
  {
    v12 = GEconItemSchema()->m_unResetCount;
    v13 = GetEggColor(IEconItemInterface const*)::pAttrib_BluePower.m_pRef;
    if ( v12 != GetEggColor(IEconItemInterface const*)::pAttrib_BluePower.m_unSchemaGeneration )
    {
      v14 = GetEggColor(IEconItemInterface const*)::pAttrib_BluePower.m_szName;
      v15 = GEconItemSchema();
      v13 = CEconItemSchema::GetAttributeDefinitionByName(v15, v14);
      GetEggColor(IEconItemInterface const*)::pAttrib_BluePower.m_unSchemaGeneration = v12;
      GetEggColor(IEconItemInterface const*)::pAttrib_BluePower.m_pRef = v13;
    }
    if ( v13 != 0 )
    {
      v82 = v13;
      p_iBlackPower = &iBluePower;
      v16 = pEggItem->_vptr_IEconItemInterface;
      v81 = &wrapper;
      v84 = 0;
      v16[28](pEggItem, &v81);
    }
  }
  iYellowPower = 0;
  if ( `guard variable for'GetEggColor(IEconItemInterface const*)::pAttrib_YellowPower == 0
    && __cxa_guard_acquire(&`guard variable for'GetEggColor(IEconItemInterface const*)::pAttrib_YellowPower) != 0 )
  {
    GetEggColor(IEconItemInterface const*)::pAttrib_YellowPower.m_szName = "yellow power";
    v64 = GEconItemSchema();
    GetEggColor(IEconItemInterface const*)::pAttrib_YellowPower.m_pRef = CEconItemSchema::GetAttributeDefinitionByName(
                                                                           v64,
                                                                           "yellow power");
    v65 = GEconItemSchema()->m_unResetCount;
    GetEggColor(IEconItemInterface const*)::pAttrib_YellowPower.m_bDestructName = 0;
    GetEggColor(IEconItemInterface const*)::pAttrib_YellowPower.m_unSchemaGeneration = v65;
    __cxa_guard_release(&`guard variable for'GetEggColor(IEconItemInterface const*)::pAttrib_YellowPower);
    __cxa_atexit(
      CSchemaFieldHandle<CEconItemAttributeDefinition>::~CSchemaFieldHandle,
      &GetEggColor(IEconItemInterface const*)::pAttrib_YellowPower,
      &_dso_handle);
  }
  if ( GetEggColor(IEconItemInterface const*)::pAttrib_YellowPower.m_szName != 0 )
  {
    v17 = GEconItemSchema()->m_unResetCount;
    v18 = GetEggColor(IEconItemInterface const*)::pAttrib_YellowPower.m_pRef;
    if ( v17 != GetEggColor(IEconItemInterface const*)::pAttrib_YellowPower.m_unSchemaGeneration )
    {
      v19 = GetEggColor(IEconItemInterface const*)::pAttrib_YellowPower.m_szName;
      v20 = GEconItemSchema();
      v18 = CEconItemSchema::GetAttributeDefinitionByName(v20, v19);
      GetEggColor(IEconItemInterface const*)::pAttrib_YellowPower.m_unSchemaGeneration = v17;
      GetEggColor(IEconItemInterface const*)::pAttrib_YellowPower.m_pRef = v18;
    }
    if ( v18 != 0 )
    {
      v82 = v18;
      p_iBlackPower = &iYellowPower;
      v21 = pEggItem->_vptr_IEconItemInterface;
      v81 = &wrapper;
      v84 = 0;
      v21[28](pEggItem, &v81);
    }
  }
  iOrangePower = 0;
  if ( `guard variable for'GetEggColor(IEconItemInterface const*)::pAttrib_OrangePower == 0
    && __cxa_guard_acquire(&`guard variable for'GetEggColor(IEconItemInterface const*)::pAttrib_OrangePower) != 0 )
  {
    GetEggColor(IEconItemInterface const*)::pAttrib_OrangePower.m_szName = "orange power";
    v66 = GEconItemSchema();
    GetEggColor(IEconItemInterface const*)::pAttrib_OrangePower.m_pRef = CEconItemSchema::GetAttributeDefinitionByName(
                                                                           v66,
                                                                           "orange power");
    v67 = GEconItemSchema()->m_unResetCount;
    GetEggColor(IEconItemInterface const*)::pAttrib_OrangePower.m_bDestructName = 0;
    GetEggColor(IEconItemInterface const*)::pAttrib_OrangePower.m_unSchemaGeneration = v67;
    __cxa_guard_release(&`guard variable for'GetEggColor(IEconItemInterface const*)::pAttrib_OrangePower);
    __cxa_atexit(
      CSchemaFieldHandle<CEconItemAttributeDefinition>::~CSchemaFieldHandle,
      &GetEggColor(IEconItemInterface const*)::pAttrib_OrangePower,
      &_dso_handle);
  }
  if ( GetEggColor(IEconItemInterface const*)::pAttrib_OrangePower.m_szName != 0 )
  {
    v22 = GEconItemSchema()->m_unResetCount;
    v23 = GetEggColor(IEconItemInterface const*)::pAttrib_OrangePower.m_pRef;
    if ( v22 != GetEggColor(IEconItemInterface const*)::pAttrib_OrangePower.m_unSchemaGeneration )
    {
      v24 = GetEggColor(IEconItemInterface const*)::pAttrib_OrangePower.m_szName;
      v25 = GEconItemSchema();
      v23 = CEconItemSchema::GetAttributeDefinitionByName(v25, v24);
      GetEggColor(IEconItemInterface const*)::pAttrib_OrangePower.m_unSchemaGeneration = v22;
      GetEggColor(IEconItemInterface const*)::pAttrib_OrangePower.m_pRef = v23;
    }
    if ( v23 != 0 )
    {
      v82 = v23;
      p_iBlackPower = &iOrangePower;
      v26 = pEggItem->_vptr_IEconItemInterface;
      v81 = &wrapper;
      v84 = 0;
      v26[28](pEggItem, &v81);
    }
  }
  iGreenPower = 0;
  if ( `guard variable for'GetEggColor(IEconItemInterface const*)::pAttrib_GreenPower == 0
    && __cxa_guard_acquire(&`guard variable for'GetEggColor(IEconItemInterface const*)::pAttrib_GreenPower) != 0 )
  {
    GetEggColor(IEconItemInterface const*)::pAttrib_GreenPower.m_szName = "green power";
    v60 = GEconItemSchema();
    GetEggColor(IEconItemInterface const*)::pAttrib_GreenPower.m_pRef = CEconItemSchema::GetAttributeDefinitionByName(
                                                                          v60,
                                                                          "green power");
    v61 = GEconItemSchema()->m_unResetCount;
    GetEggColor(IEconItemInterface const*)::pAttrib_GreenPower.m_bDestructName = 0;
    GetEggColor(IEconItemInterface const*)::pAttrib_GreenPower.m_unSchemaGeneration = v61;
    __cxa_guard_release(&`guard variable for'GetEggColor(IEconItemInterface const*)::pAttrib_GreenPower);
    __cxa_atexit(
      CSchemaFieldHandle<CEconItemAttributeDefinition>::~CSchemaFieldHandle,
      &GetEggColor(IEconItemInterface const*)::pAttrib_GreenPower,
      &_dso_handle);
  }
  if ( GetEggColor(IEconItemInterface const*)::pAttrib_GreenPower.m_szName != 0 )
  {
    v27 = GEconItemSchema()->m_unResetCount;
    v28 = GetEggColor(IEconItemInterface const*)::pAttrib_GreenPower.m_pRef;
    if ( v27 != GetEggColor(IEconItemInterface const*)::pAttrib_GreenPower.m_unSchemaGeneration )
    {
      v29 = GetEggColor(IEconItemInterface const*)::pAttrib_GreenPower.m_szName;
      v30 = GEconItemSchema();
      v28 = CEconItemSchema::GetAttributeDefinitionByName(v30, v29);
      GetEggColor(IEconItemInterface const*)::pAttrib_GreenPower.m_unSchemaGeneration = v27;
      GetEggColor(IEconItemInterface const*)::pAttrib_GreenPower.m_pRef = v28;
    }
    if ( v28 != 0 )
    {
      v82 = v28;
      p_iBlackPower = &iGreenPower;
      v31 = pEggItem->_vptr_IEconItemInterface;
      v81 = &wrapper;
      v84 = 0;
      v31[28](pEggItem, &v81);
    }
  }
  iPurplePower = 0;
  if ( `guard variable for'GetEggColor(IEconItemInterface const*)::pAttrib_PurplePower == 0
    && __cxa_guard_acquire(&`guard variable for'GetEggColor(IEconItemInterface const*)::pAttrib_PurplePower) != 0 )
  {
    GetEggColor(IEconItemInterface const*)::pAttrib_PurplePower.m_szName = "purple power";
    v62 = GEconItemSchema();
    GetEggColor(IEconItemInterface const*)::pAttrib_PurplePower.m_pRef = CEconItemSchema::GetAttributeDefinitionByName(
                                                                           v62,
                                                                           "purple power");
    v63 = GEconItemSchema()->m_unResetCount;
    GetEggColor(IEconItemInterface const*)::pAttrib_PurplePower.m_bDestructName = 0;
    GetEggColor(IEconItemInterface const*)::pAttrib_PurplePower.m_unSchemaGeneration = v63;
    __cxa_guard_release(&`guard variable for'GetEggColor(IEconItemInterface const*)::pAttrib_PurplePower);
    __cxa_atexit(
      CSchemaFieldHandle<CEconItemAttributeDefinition>::~CSchemaFieldHandle,
      &GetEggColor(IEconItemInterface const*)::pAttrib_PurplePower,
      &_dso_handle);
  }
  if ( GetEggColor(IEconItemInterface const*)::pAttrib_PurplePower.m_szName != 0 )
  {
    v32 = GEconItemSchema()->m_unResetCount;
    v33 = GetEggColor(IEconItemInterface const*)::pAttrib_PurplePower.m_pRef;
    if ( v32 != GetEggColor(IEconItemInterface const*)::pAttrib_PurplePower.m_unSchemaGeneration )
    {
      v34 = GetEggColor(IEconItemInterface const*)::pAttrib_PurplePower.m_szName;
      v35 = GEconItemSchema();
      v33 = CEconItemSchema::GetAttributeDefinitionByName(v35, v34);
      GetEggColor(IEconItemInterface const*)::pAttrib_PurplePower.m_unSchemaGeneration = v32;
      GetEggColor(IEconItemInterface const*)::pAttrib_PurplePower.m_pRef = v33;
    }
    if ( v33 != 0 )
    {
      v82 = v33;
      p_iBlackPower = &iPurplePower;
      v36 = pEggItem->_vptr_IEconItemInterface;
      v81 = &wrapper;
      v84 = 0;
      v36[28](pEggItem, &v81);
    }
  }
  iUnusualPower = 0;
  if ( `guard variable for'GetEggColor(IEconItemInterface const*)::pAttrib_UnusualPower == 0
    && __cxa_guard_acquire(&`guard variable for'GetEggColor(IEconItemInterface const*)::pAttrib_UnusualPower) != 0 )
  {
    GetEggColor(IEconItemInterface const*)::pAttrib_UnusualPower.m_szName = "unusual power";
    v56 = GEconItemSchema();
    GetEggColor(IEconItemInterface const*)::pAttrib_UnusualPower.m_pRef = CEconItemSchema::GetAttributeDefinitionByName(
                                                                            v56,
                                                                            "unusual power");
    v57 = GEconItemSchema()->m_unResetCount;
    GetEggColor(IEconItemInterface const*)::pAttrib_UnusualPower.m_bDestructName = 0;
    GetEggColor(IEconItemInterface const*)::pAttrib_UnusualPower.m_unSchemaGeneration = v57;
    __cxa_guard_release(&`guard variable for'GetEggColor(IEconItemInterface const*)::pAttrib_UnusualPower);
    __cxa_atexit(
      CSchemaFieldHandle<CEconItemAttributeDefinition>::~CSchemaFieldHandle,
      &GetEggColor(IEconItemInterface const*)::pAttrib_UnusualPower,
      &_dso_handle);
  }
  if ( GetEggColor(IEconItemInterface const*)::pAttrib_UnusualPower.m_szName != 0 )
  {
    v37 = GEconItemSchema()->m_unResetCount;
    v38 = GetEggColor(IEconItemInterface const*)::pAttrib_UnusualPower.m_pRef;
    if ( v37 != GetEggColor(IEconItemInterface const*)::pAttrib_UnusualPower.m_unSchemaGeneration )
    {
      v39 = GetEggColor(IEconItemInterface const*)::pAttrib_UnusualPower.m_szName;
      v40 = GEconItemSchema();
      v38 = CEconItemSchema::GetAttributeDefinitionByName(v40, v39);
      GetEggColor(IEconItemInterface const*)::pAttrib_UnusualPower.m_unSchemaGeneration = v37;
      GetEggColor(IEconItemInterface const*)::pAttrib_UnusualPower.m_pRef = v38;
    }
    if ( v38 != 0 )
    {
      v82 = v38;
      p_iBlackPower = &iUnusualPower;
      v41 = pEggItem->_vptr_IEconItemInterface;
      v81 = &wrapper;
      v84 = 0;
      v41[28](pEggItem, &v81);
    }
  }
  iSkinIndex = 0;
  if ( `guard variable for'GetEggColor(IEconItemInterface const*)::pAttrib_SkinIndex == 0
    && __cxa_guard_acquire(&`guard variable for'GetEggColor(IEconItemInterface const*)::pAttrib_SkinIndex) != 0 )
  {
    GetEggColor(IEconItemInterface const*)::pAttrib_SkinIndex.m_szName = "skin index";
    v58 = GEconItemSchema();
    GetEggColor(IEconItemInterface const*)::pAttrib_SkinIndex.m_pRef = CEconItemSchema::GetAttributeDefinitionByName(
                                                                         v58,
                                                                         "skin index");
    v59 = GEconItemSchema()->m_unResetCount;
    GetEggColor(IEconItemInterface const*)::pAttrib_SkinIndex.m_bDestructName = 0;
    GetEggColor(IEconItemInterface const*)::pAttrib_SkinIndex.m_unSchemaGeneration = v59;
    __cxa_guard_release(&`guard variable for'GetEggColor(IEconItemInterface const*)::pAttrib_SkinIndex);
    __cxa_atexit(
      CSchemaFieldHandle<CEconItemAttributeDefinition>::~CSchemaFieldHandle,
      &GetEggColor(IEconItemInterface const*)::pAttrib_SkinIndex,
      &_dso_handle);
  }
  if ( GetEggColor(IEconItemInterface const*)::pAttrib_SkinIndex.m_szName != 0 )
  {
    v42 = GEconItemSchema()->m_unResetCount;
    v43 = GetEggColor(IEconItemInterface const*)::pAttrib_SkinIndex.m_pRef;
    if ( v42 != GetEggColor(IEconItemInterface const*)::pAttrib_SkinIndex.m_unSchemaGeneration )
    {
      v44 = GetEggColor(IEconItemInterface const*)::pAttrib_SkinIndex.m_szName;
      v45 = GEconItemSchema();
      v43 = CEconItemSchema::GetAttributeDefinitionByName(v45, v44);
      GetEggColor(IEconItemInterface const*)::pAttrib_SkinIndex.m_unSchemaGeneration = v42;
      GetEggColor(IEconItemInterface const*)::pAttrib_SkinIndex.m_pRef = v43;
    }
    if ( v43 != 0 )
    {
      v82 = v43;
      p_iBlackPower = &iSkinIndex;
      v46 = pEggItem->_vptr_IEconItemInterface;
      v81 = &wrapper;
      v84 = 0;
      v46[28](pEggItem, &v81);
    }
  }
  if ( iRedPower > 1 || iYellowPower > 1 || iBluePower > 1 )
  {
    if ( iRedPower > iYellowPower && (result = DOTA_EGG_COLOR::DOTA_EGG_RED, iRedPower > iBluePower)
      || iRedPower < iYellowPower && (result = DOTA_EGG_COLOR::DOTA_EGG_YELLOW, iBluePower < iYellowPower) )
    {
LABEL_76:
      v48 = iOrangePower;
      v49 = iPurplePower;
      if ( iOrangePower == 0 )
        goto LABEL_77;
      goto LABEL_97;
    }
    if ( iRedPower < iBluePower && iBluePower > iYellowPower )
    {
      v48 = iOrangePower;
      result = DOTA_EGG_COLOR::DOTA_EGG_BLUE;
      v49 = iPurplePower;
      if ( iOrangePower == 0 )
      {
LABEL_77:
        v50 = iGreenPower;
        if ( v49 == 0 && iGreenPower == 0 )
          goto LABEL_89;
        v51 = v49 + 1;
        v52 = iGreenPower + 1;
        goto LABEL_80;
      }
LABEL_97:
      v50 = iGreenPower;
      v51 = v49 + 1;
      v52 = iGreenPower + 1;
      if ( v48 <= v49
        || v48 <= iGreenPower
        || (v53 = v48 + 1, iRedPower > v48 + 1)
        || v53 < iYellowPower
        || v53 < iBluePower )
      {
LABEL_80:
        if ( v48 >= v49 || v49 <= v50 || iRedPower > v51 || iYellowPower > v51 || iBluePower > v51 )
        {
          if ( v49 < v50 && v48 < v50 && iRedPower <= v52 && iYellowPower <= v52 && iBluePower <= v52 )
            result = DOTA_EGG_COLOR::DOTA_EGG_GREEN;
        }
        else
        {
          result = DOTA_EGG_COLOR::DOTA_EGG_PURPLE;
        }
        goto LABEL_86;
      }
      result = DOTA_EGG_COLOR::DOTA_EGG_ORANGE;
LABEL_86:
      if ( v48 == 1 )
      {
        if ( v49 == 1 && v50 == 1 && iRedPower == 2 && iYellowPower == 2 )
        {
          LOBYTE(v48) = 7;
          if ( iBluePower == 2 )
            result = v48;
        }
      }
      else if ( v48 == 2 && v49 == 2 && v50 == 2 && iRedPower == 3 && iYellowPower == 3 )
      {
        LOBYTE(v48) = 7;
        if ( iBluePower == 3 )
          result = v48;
      }
LABEL_89:
      if ( iBlackPower != 0 )
        return DOTA_EGG_COLOR::DOTA_EGG_BLACK;
      return result;
    }
  }
  result = DOTA_EGG_COLOR::DOTA_EGG_NATURAL;
  goto LABEL_76;
}


// GetGreevilStatBonus  (line 578, @0x0000000002670bf0, libserver.so)
// globals: jpt_2670C90
float __fastcall GetGreevilStatBonus(uint32 *iEssenceCounts, DOTA_GREEVIL_STAT_BONUS bonusType)
{
  uint32 v2; // r11d
  int v3; // r10d
  uint32 *v4; // rcx
  int v5; // eax
  int v6; // ebx
  int v7; // edx
  float result; // xmm0_4

  v2 = iEssenceCounts[8];
  v3 = 0;
  if ( v2 == 0 )
  {
    v3 = 0;
    if ( iEssenceCounts[7] == 0 )
    {
      v4 = iEssenceCounts + 1;
      v5 = 1;
      v6 = 0;
      do
      {
        while ( 1 )
        {
          v7 = *v4;
          if ( *v4 <= 0 )
            goto LABEL_8;
          if ( v5 != 4 && v5 != 2 && v5 != 6 )
            break;
          if ( v6 >= ++v7 )
            goto LABEL_7;
LABEL_12:
          v3 = v5++;
          ++v4;
          v6 = v7;
          if ( v5 == 7 )
            goto LABEL_13;
        }
        if ( v7 != 1 )
        {
          if ( v6 < v7 )
            goto LABEL_12;
LABEL_7:
          if ( v7 == v6 )
          {
            if ( v5 == 4 || v5 == 2 )
            {
              v3 = v5;
            }
            else if ( v5 == 6 )
            {
              v3 = 6;
              break;
            }
          }
        }
LABEL_8:
        ++v5;
        ++v4;
      }
      while ( v5 != 7 );
    }
  }
LABEL_13:
  result = 0.0;
  switch ( bonusType )
  {
    case DOTA_GREEVIL_STAT_BONUS::DOTA_GSB_CRITICAL_STRIKE_CHANCE:
      result = (iEssenceCounts[1] + (v3 == 1)) * 8.0;
      break;
    case DOTA_GREEVIL_STAT_BONUS::DOTA_GSB_CRITICAL_STRIKE_AMOUNT:
      result = 150.0;
      break;
    case DOTA_GREEVIL_STAT_BONUS::DOTA_GSB_MOVE_SPEED:
      result = (iEssenceCounts[2] + (v3 == 2)) * 20.0;
      break;
    case DOTA_GREEVIL_STAT_BONUS::DOTA_GSB_ATTACK_SPEED:
      result = (iEssenceCounts[3] + (v3 == 3)) * 15.0;
      break;
    case DOTA_GREEVIL_STAT_BONUS::DOTA_GSB_HEALTH:
      result = (iEssenceCounts[4] + (v3 == 4)) * 100.0;
      break;
    case DOTA_GREEVIL_STAT_BONUS::DOTA_GSB_MAGICAL_ARMOR:
      result = (iEssenceCounts[5] + (v3 == 5)) * 8.0;
      break;
    case DOTA_GREEVIL_STAT_BONUS::DOTA_GSB_PRE_ATTACK_DAMAGE:
      result = (iEssenceCounts[6] + (v3 == 6)) * 8.0;
      break;
    case DOTA_GREEVIL_STAT_BONUS::DOTA_GSB_PHYSICAL_ARMOR:
      result = iEssenceCounts[7] + iEssenceCounts[7];
      break;
    case DOTA_GREEVIL_STAT_BONUS::DOTA_GSB_BLOCK_CHANCE:
      result = 0.0;
      if ( v2 != 0 )
        result = 30.0;
      break;
    default:
      return result;
  }
  return result;
}


// GetGreevilStatBonusName  (line 620, @0x0000000002670dc0, libserver.so)
// strings: "#dota_gsb_critical_strike_amount", "#dota_gsb_move_speed", "#dota_gsb_attack_speed", "#dota_gsb_health", "#dota_gsb_magical_armor", "#dota_gsb_attack_damage" (9 total)
// globals: jpt_2670DDD
const char *__fastcall GetGreevilStatBonusName(DOTA_GREEVIL_STAT_BONUS bonusType)
{
  const char *result; // rax

  switch ( bonusType )
  {
    case DOTA_GREEVIL_STAT_BONUS::DOTA_GSB_CRITICAL_STRIKE_CHANCE:
      result = "#dota_gsb_critical_strike_chance";
      break;
    case DOTA_GREEVIL_STAT_BONUS::DOTA_GSB_CRITICAL_STRIKE_AMOUNT:
      result = "#dota_gsb_critical_strike_amount";
      break;
    case DOTA_GREEVIL_STAT_BONUS::DOTA_GSB_MOVE_SPEED:
      result = "#dota_gsb_move_speed";
      break;
    case DOTA_GREEVIL_STAT_BONUS::DOTA_GSB_ATTACK_SPEED:
      result = "#dota_gsb_attack_speed";
      break;
    case DOTA_GREEVIL_STAT_BONUS::DOTA_GSB_HEALTH:
      result = "#dota_gsb_health";
      break;
    case DOTA_GREEVIL_STAT_BONUS::DOTA_GSB_MAGICAL_ARMOR:
      result = "#dota_gsb_magical_armor";
      break;
    case DOTA_GREEVIL_STAT_BONUS::DOTA_GSB_PRE_ATTACK_DAMAGE:
      result = "#dota_gsb_attack_damage";
      break;
    case DOTA_GREEVIL_STAT_BONUS::DOTA_GSB_PHYSICAL_ARMOR:
      result = "#dota_gsb_physical_armor";
      break;
    case DOTA_GREEVIL_STAT_BONUS::DOTA_GSB_BLOCK_CHANCE:
      result = "#dota_gsb_block_chance";
      break;
    default:
      result = 0;
      break;
  }
  return result;
}


// GetTournamentEventString  (line 803, @0x0000000002670e80, libserver.so)
// globals: g_DOTA_TournamentEvents
const char *__fastcall GetTournamentEventString(int i)
{
  const char *result; // rax

  result = g_DOTA_TournamentEvents[0];
  if ( i <= 0xB )
    return g_DOTA_TournamentEvents[i];
  return result;
}


// GetTournamentEventString_MultiKill  (line 811, @0x0000000002670eb0, libserver.so)
// globals: g_DOTA_MultiKill
const char *__fastcall GetTournamentEventString_MultiKill(int i)
{
  const char *result; // rax

  result = g_DOTA_MultiKill[0];
  if ( i <= 5 )
    return g_DOTA_MultiKill[i];
  return result;
}


// GetTournamentEventString_MultiKillTE  (line 819, @0x0000000002670ee0, libserver.so)
// globals: g_DOTA_MultiKillTE
const char *__fastcall GetTournamentEventString_MultiKillTE(int i)
{
  const char *result; // rax

  result = g_DOTA_MultiKillTE[0];
  if ( i <= 5 )
    return g_DOTA_MultiKillTE[i];
  return result;
}


// GetMapNameForGameMode  (line 827, @0x0000000002670f10, libserver.so)  // inlines: GetCustomMapName, IsAppDota2Experimental, _M_data, c_str
// calls: SetAppID
// callers: CDOTA_AutoSaveGameSystem::FrameUpdatePostEntityThink, CDOTAGCServerSystem::FinishActivateServerFromLobby
// strings: "tutorial_m1"
// globals: g_iGameAppID
const char *__fastcall GetMapNameForGameMode(const CDOTALobby *pLobby)
{
  const char *result; // rax

  if ( pLobby == 0 )
    return 0;
  result = **(pLobby + 39);
  if ( *result == 0 )
  {
    if ( *(pLobby + 66) != 0 || *(pLobby + 57) == 1 )
    {
      return "dota";
    }
    else
    {
      SetAppID();
      if ( g_iGameAppID == 247040 )
      {
        return "dota";
      }
      else
      {
        result = "dota";
        if ( *(pLobby + 32) == 10 )
          return "tutorial_m1";
      }
    }
  }
  return result;
}


// CCompendiumDataFileTemplateHandler::ResolveTemplates  (line 912, @0x0000000002688f00, libserver.so)
// calls: CCompendiumDataFileTemplateHandler::ExtractTemplates, KeyValues::FindKey, KeyValues::GetFirstSubKey, KeyValues::GetNextKey, CCompendiumDataFileTemplateHandler::ResolveTemplatesRecursive
// strings: "embedded_pages", "preregister_selections"
bool __fastcall CCompendiumDataFileTemplateHandler::ResolveTemplates(CCompendiumDataFileTemplateHandler *const this)
{
  bool Templates; // r13
  KeyValues *Key; // rax
  KeyValues *FirstSubKey; // rbx
  KeyValues *v6; // rax
  KeyValues *NextKey; // rbx
  KeyValues *v8; // rax

  if ( this->m_pCompendiumKV == 0 )
    return 0;
  Templates = CCompendiumDataFileTemplateHandler::ExtractTemplates(this);
  if ( !Templates )
    return 0;
  Key = KeyValues::FindKey(this->m_pCompendiumKV, "pages", 0);
  if ( Key == 0 )
    return 0;
  FirstSubKey = KeyValues::GetFirstSubKey(Key);
  if ( FirstSubKey != 0 )
  {
    while ( CCompendiumDataFileTemplateHandler::ResolveTemplatesRecursive(this, FirstSubKey) )
    {
      FirstSubKey = KeyValues::GetNextKey(FirstSubKey);
      if ( FirstSubKey == 0 )
        goto LABEL_11;
    }
    return 0;
  }
LABEL_11:
  v6 = KeyValues::FindKey(this->m_pCompendiumKV, "embedded_pages", 0);
  if ( v6 != 0 )
  {
    NextKey = KeyValues::GetFirstSubKey(v6);
    if ( NextKey != 0 )
    {
      while ( CCompendiumDataFileTemplateHandler::ResolveTemplatesRecursive(this, NextKey) )
      {
        NextKey = KeyValues::GetNextKey(NextKey);
        if ( NextKey == 0 )
          goto LABEL_13;
      }
      return 0;
    }
  }
LABEL_13:
  v8 = KeyValues::FindKey(this->m_pCompendiumKV, "preregister_selections", 0);
  if ( v8 == 0 )
    return Templates;
  return CCompendiumDataFileTemplateHandler::ResolveTemplatesRecursive(this, v8);
}


// CCompendiumDataFileTemplateHandler::ExtractTemplates  (line 965, @0x0000000002688d50, libserver.so)  // inlines: Purge, RemoveAll, operator[]
// calls: KeyValues::deleteThis, CUtlMemory<CCompendiumDataFileTemplateHandler::templatekeytoremove_t, int>::Purge, KeyValues::FindKey, KeyValues::MakeCopy, KeyValues::GetFirstSubKey, KeyValues::GetNextKey, CCompendiumDataFileTemplateHandler::ExtractTemplatesRecursive, KeyValues::RemoveSubKey, KeyValues::operator new, KeyValues::KeyValues, KeyValues::operator delete, _Unwind_Resume
// callers: CCompendiumDataFileTemplateHandler::ResolveTemplates
// strings: "templates", "embedded_pages"
bool __fastcall CCompendiumDataFileTemplateHandler::ExtractTemplates(CCompendiumDataFileTemplateHandler *const this)
{
  KeyValues *m_pTemplateKV; // rdi
  KeyValues *Key; // rax
  KeyValues *v4; // rax
  KeyValues *FirstSubKey; // r12
  KeyValues *v7; // rax
  KeyValues *NextKey; // r12
  __int64 v9; // r14
  int i; // r12d
  CCompendiumDataFileTemplateHandler::templatekeytoremove_t *v11; // rax
  KeyValues *v12; // r12

  if ( this->m_pCompendiumKV == 0 )
    return 0;
  m_pTemplateKV = this->m_pTemplateKV;
  if ( m_pTemplateKV != 0 )
    KeyValues::deleteThis(m_pTemplateKV);
  this->m_vecTemplatesToRemove.m_Size = 0;
  CUtlMemory<CCompendiumDataFileTemplateHandler::templatekeytoremove_t,int>::Purge(&this->m_vecTemplatesToRemove.m_Memory);
  Key = KeyValues::FindKey(this->m_pCompendiumKV, "templates", 0);
  if ( Key != 0 )
  {
    this->m_pTemplateKV = KeyValues::MakeCopy(Key);
  }
  else
  {
    v12 = KeyValues::operator new(0x14u);
    KeyValues::KeyValues(v12, "templates");
    this->m_pTemplateKV = v12;
  }
  v4 = KeyValues::FindKey(this->m_pCompendiumKV, "pages", 0);
  if ( v4 != 0 )
  {
    FirstSubKey = KeyValues::GetFirstSubKey(v4);
    if ( FirstSubKey != 0 )
    {
      while ( CCompendiumDataFileTemplateHandler::ExtractTemplatesRecursive(this, FirstSubKey, this->m_pCompendiumKV) )
      {
        FirstSubKey = KeyValues::GetNextKey(FirstSubKey);
        if ( FirstSubKey == 0 )
          goto LABEL_12;
      }
      return 0;
    }
  }
LABEL_12:
  v7 = KeyValues::FindKey(this->m_pCompendiumKV, "embedded_pages", 0);
  if ( v7 != 0 )
  {
    NextKey = KeyValues::GetFirstSubKey(v7);
    if ( NextKey != 0 )
    {
      while ( CCompendiumDataFileTemplateHandler::ExtractTemplatesRecursive(this, NextKey, this->m_pCompendiumKV) )
      {
        NextKey = KeyValues::GetNextKey(NextKey);
        if ( NextKey == 0 )
          goto LABEL_18;
      }
      return 0;
    }
  }
LABEL_18:
  v9 = 0;
  for ( i = 0; this->m_vecTemplatesToRemove.m_Size > i; ++i )
  {
    v11 = &this->m_vecTemplatesToRemove.m_Memory.m_pMemory[v9++];
    KeyValues::RemoveSubKey(v11->pKVParent, v11->pKVChildToRemove, 0);
  }
  this->m_vecTemplatesToRemove.m_Size = 0;
  CUtlMemory<CCompendiumDataFileTemplateHandler::templatekeytoremove_t,int>::Purge(&this->m_vecTemplatesToRemove.m_Memory);
  return 1;
}


// CCompendiumDataFileTemplateHandler::ExtractTemplatesRecursive  (line 1019, @0x0000000002688c30, libserver.so)  // inlines: AddToTail, GrowMemory, operator[]
// calls: KeyValues::GetFirstTrueSubKey, KeyValues::GetNextTrueSubKey, KeyValues::FindKey, KeyValues::GetName, KeyValues::MakeCopy, KeyValues::RemoveSubKey, KeyValues::AddSubKey, CUtlMemory<CCompendiumDataFileTemplateHandler::templatekeytoremove_t, int>::Grow
// callers: CCompendiumDataFileTemplateHandler::ExtractTemplates
// strings: "embedded_template"
bool __fastcall CCompendiumDataFileTemplateHandler::ExtractTemplatesRecursive(
        CCompendiumDataFileTemplateHandler *const this,
        KeyValues *pKV,
        KeyValues *pKVParent)
{
  KeyValues *FirstTrueSubKey; // rbx
  const char *Name; // rax
  KeyValues *Copy; // rbx
  KeyValues *Key; // rax
  int m_Size; // ebx
  int v12; // eax
  CCompendiumDataFileTemplateHandler::templatekeytoremove_t *m_pMemory; // rdx
  __int64 v14; // rax

  FirstTrueSubKey = KeyValues::GetFirstTrueSubKey(pKV);
  if ( FirstTrueSubKey != 0 )
  {
    while ( CCompendiumDataFileTemplateHandler::ExtractTemplatesRecursive(this, FirstTrueSubKey, pKV) )
    {
      FirstTrueSubKey = KeyValues::GetNextTrueSubKey(FirstTrueSubKey);
      if ( FirstTrueSubKey == 0 )
        goto LABEL_6;
    }
    return 0;
  }
LABEL_6:
  if ( KeyValues::FindKey(pKV, "embedded_template", 0) != 0 )
  {
    Name = KeyValues::GetName(pKV);
    if ( KeyValues::FindKey(this->m_pTemplateKV, Name, 0) == 0 )
    {
      Copy = KeyValues::MakeCopy(pKV);
      Key = KeyValues::FindKey(Copy, "embedded_template", 0);
      KeyValues::RemoveSubKey(Copy, Key, 0);
      KeyValues::AddSubKey(this->m_pTemplateKV, Copy);
      m_Size = this->m_vecTemplatesToRemove.m_Size;
      v12 = m_Size;
      if ( m_Size == this->m_vecTemplatesToRemove.m_Memory.m_nAllocationCount )
      {
        CUtlMemory<CCompendiumDataFileTemplateHandler::templatekeytoremove_t,int>::Grow(
          &this->m_vecTemplatesToRemove.m_Memory,
          1);
        v12 = this->m_vecTemplatesToRemove.m_Size;
      }
      m_pMemory = this->m_vecTemplatesToRemove.m_Memory.m_pMemory;
      this->m_vecTemplatesToRemove.m_Size = v12 + 1;
      v14 = m_Size;
      m_pMemory[v14].pKVParent = pKVParent;
      this->m_vecTemplatesToRemove.m_Memory.m_pMemory[v14].pKVChildToRemove = pKV;
      return 1;
    }
    return 0;
  }
  return 1;
}


// CCompendiumDataFileTemplateHandler::MergeTemplateIntoKV  (line 1059, @0x0000000002670fa0, libserver.so)
// calls: KeyValues::GetFirstTrueSubKey, KeyValues::GetNextTrueSubKey, KeyValues::GetName, KeyValues::FindKey, KeyValues::MakeCopy, KeyValues::AddSubKey, KeyValues::GetFirstValue, KeyValues::GetNextValue
// callers: CCompendiumDataFileTemplateHandler::ResolveTemplatesRecursive
bool __fastcall CCompendiumDataFileTemplateHandler::MergeTemplateIntoKV(
        CCompendiumDataFileTemplateHandler *const this,
        KeyValues *pKV,
        KeyValues *pKVMerge)
{
  KeyValues *i; // rbx
  bool result; // al
  const char *Name; // rax
  KeyValues *Key; // rax
  KeyValues *Copy; // rax
  KeyValues *j; // rbx
  const char *v12; // rax
  KeyValues *v13; // rax

  for ( i = KeyValues::GetFirstTrueSubKey(pKVMerge); i != 0; i = KeyValues::GetNextTrueSubKey(i) )
  {
    while ( 1 )
    {
      Name = KeyValues::GetName(i);
      Key = KeyValues::FindKey(pKV, Name, 0);
      if ( Key != 0 )
        break;
      Copy = KeyValues::MakeCopy(i);
      KeyValues::AddSubKey(pKV, Copy);
      i = KeyValues::GetNextTrueSubKey(i);
      if ( i == 0 )
        goto LABEL_7;
    }
    result = CCompendiumDataFileTemplateHandler::MergeTemplateIntoKV(this, Key, i);
    if ( !result )
      return result;
  }
LABEL_7:
  for ( j = KeyValues::GetFirstValue(pKVMerge); j != 0; j = KeyValues::GetNextValue(j) )
  {
    v12 = KeyValues::GetName(j);
    if ( KeyValues::FindKey(pKV, v12, 0) == 0 )
    {
      v13 = KeyValues::MakeCopy(j);
      KeyValues::AddSubKey(pKV, v13);
    }
  }
  return 1;
}


// CCompendiumDataFileTemplateHandler::ResolveDefines  (line 1091, @0x0000000002671420, libserver.so)  // inlines: V_strnicmp_fast<int>
// calls: KeyValues::FindKey, KeyValues::GetFirstSubKey, KeyValues::GetString, _V_strnicmp_fast, CCompendiumDataFileTemplateHandler::ResolveDefinesRecursive, KeyValues::GetNextKey, KeyValues::GetName, KeyValues::RemoveSubKey
// callers: CCompendiumDataFileTemplateHandler::ResolveTemplatesRecursive
// strings: "required_defines", "%def"
bool __fastcall CCompendiumDataFileTemplateHandler::ResolveDefines(
        CCompendiumDataFileTemplateHandler *const this,
        KeyValues *pKV,
        KeyValues *pKVMerge,
        const char *pszRestrictToKey)
{
  KeyValues *Key; // rbx
  KeyValues *v6; // r13
  KeyValues *NextKey; // rbx
  const char *String; // r15
  const char *Name; // rax
  const char *v10; // r12
  KeyValues *v12; // rax
  KeyValues *v13; // rax

  Key = KeyValues::FindKey(pKVMerge, "required_defines", 0);
  if ( Key != 0 && (v6 = KeyValues::FindKey(pKV, "defines", 0), (NextKey = KeyValues::GetFirstSubKey(Key)) != 0) )
  {
    while ( 1 )
    {
      Name = KeyValues::GetName(NextKey);
      v10 = Name;
      if ( v6 == 0 || (String = KeyValues::GetString(v6, Name, 0, 0, 0)) == 0 )
        String = KeyValues::GetString(NextKey, 0, "", 0, 0);
      if ( _V_strnicmp_fast(v10, "%def", 4) != 0
        || !CCompendiumDataFileTemplateHandler::ResolveDefinesRecursive(this, pKV, v10, 0, String, pszRestrictToKey) )
      {
        return 0;
      }
      NextKey = KeyValues::GetNextKey(NextKey);
      if ( NextKey == 0 )
        goto LABEL_10;
    }
  }
  else
  {
LABEL_10:
    if ( pszRestrictToKey == 0 )
    {
      if ( KeyValues::FindKey(pKV, "defines", 0) != 0 )
      {
        v12 = KeyValues::FindKey(pKV, "defines", 0);
        KeyValues::RemoveSubKey(pKV, v12, 0);
      }
      if ( KeyValues::FindKey(pKV, "required_defines", 0) != 0 )
      {
        v13 = KeyValues::FindKey(pKV, "required_defines", 0);
        KeyValues::RemoveSubKey(pKV, v13, 0);
      }
    }
    return 1;
  }
}


// CCompendiumDataFileTemplateHandler::ResolveDefinesRecursive  (line 1148, @0x00000000026710b0, libserver.so)  // inlines: V_strcat_safe<1024ul>, V_strlen, V_strncpy<long int>
// calls: KeyValues::GetName, V_stricmp_fast, KeyValues::GetFirstSubKey, _V_strncpy, _V_strncat, KeyValues::SetName, KeyValues::GetNextKey, KeyValues::GetString, V_stristr_fast(char const*,char const*), strlen, KeyValues::GetFirstTrueSubKey, KeyValues::GetNextTrueSubKey (14 total)
// callers: CCompendiumDataFileTemplateHandler::ResolveDefines
// strings: "required_defines"
bool __fastcall CCompendiumDataFileTemplateHandler::ResolveDefinesRecursive(
        CCompendiumDataFileTemplateHandler *const this,
        KeyValues *pKV,
        const char *pszDefName,
        const wchar_t *pwszDefName,
        const char *pszDefValue,
        const char *pszRestrictToKey)
{
  const char *Name; // rax
  const char *v9; // rax
  KeyValues *i; // rbx
  const char *v11; // r13
  const char *String; // rax
  const char *v13; // r14
  __int64 v14; // r14
  KeyValues *FirstTrueSubKey; // rbx
  __int64 v18; // [rsp+18h] [rbp-468h]
  const char *pszKeyPos; // [rsp+28h] [rbp-458h]
  const char *pszKeyPosa; // [rsp+28h] [rbp-458h]
  char szTemp[1032]; // [rsp+40h] [rbp-440h] BYREF
  unsigned __int64 v25; // [rsp+448h] [rbp-38h]

  v25 = __readfsqword(0x28u);
  Name = KeyValues::GetName(pKV);
  if ( V_stricmp_fast(Name, "defines") == 0 )
    return 1;
  v9 = KeyValues::GetName(pKV);
  if ( V_stricmp_fast(v9, "required_defines") == 0 )
    return 1;
  for ( i = KeyValues::GetFirstSubKey(pKV); i != 0; i = KeyValues::GetNextKey(i) )
  {
    while ( 1 )
    {
      v11 = KeyValues::GetName(i);
      if ( pszRestrictToKey == 0 || *pszRestrictToKey == 0 || V_stricmp_fast(pszRestrictToKey, v11) == 0 )
        break;
      i = KeyValues::GetNextKey(i);
      if ( i == 0 )
        goto LABEL_21;
    }
    if ( pszDefValue == 0 )
      return 0;
    String = KeyValues::GetString(i, 0, "", 0, 0);
    v13 = String;
    if ( String != 0 && *String != 0 )
    {
      pszKeyPosa = V_stristr_fast(String, pszDefName);
      if ( pszKeyPosa != 0 )
      {
        if ( pszDefName != 0 )
          v18 = strlen(pszDefName);
        else
          v18 = 0;
        if ( pszKeyPosa - v13 <= 0 )
          szTemp[0] = 0;
        else
          _V_strncpy(szTemp, v13, pszKeyPosa - v13);
        _V_strncat(szTemp, pszDefValue, 1024, 0xFFFFFFFFLL);
        _V_strncat(szTemp, &pszKeyPosa[v18], 1024, 0xFFFFFFFFLL);
        KeyValues::SetString(pKV, v11, szTemp);
      }
    }
    v14 = V_stristr_fast(v11, pszDefName);
    if ( v14 != 0 )
    {
      if ( pszDefName != 0 )
        pszKeyPos = strlen(pszDefName);
      else
        pszKeyPos = 0;
      if ( v14 - v11 > 0 )
        _V_strncpy(szTemp, v11, v14 - v11);
      else
        szTemp[0] = 0;
      _V_strncat(szTemp, pszDefValue, 1024, 0xFFFFFFFFLL);
      _V_strncat(szTemp, &pszKeyPos[v14], 1024, 0xFFFFFFFFLL);
      KeyValues::SetName(i, szTemp);
    }
  }
LABEL_21:
  FirstTrueSubKey = KeyValues::GetFirstTrueSubKey(pKV);
  if ( FirstTrueSubKey == 0 )
    return 1;
  while ( CCompendiumDataFileTemplateHandler::ResolveDefinesRecursive(
            this,
            FirstTrueSubKey,
            pszDefName,
            pwszDefName,
            pszDefValue,
            pszRestrictToKey) )
  {
    FirstTrueSubKey = KeyValues::GetNextTrueSubKey(FirstTrueSubKey);
    if ( FirstTrueSubKey == 0 )
      return 1;
  }
  return 0;
}


// CCompendiumDataFileTemplateHandler::ResolveTemplatesRecursive  (line 1257, @0x00000000026715f0, libserver.so)
// calls: CCompendiumDataFileTemplateHandler::GetTemplateKV, CCompendiumDataFileTemplateHandler::MergeTemplateIntoKV, CCompendiumDataFileTemplateHandler::ResolveDefines, KeyValues::FindKey, KeyValues::GetString, KeyValues::RemoveSubKey, KeyValues::GetFirstTrueSubKey, KeyValues::GetNextTrueSubKey
// callers: CCompendiumDataFileTemplateHandler::ResolveTemplates
bool __fastcall CCompendiumDataFileTemplateHandler::ResolveTemplatesRecursive(
        CCompendiumDataFileTemplateHandler *const this,
        KeyValues *pKV)
{
  KeyValues *TemplateKV; // rax
  KeyValues *v5; // r12
  KeyValues *Key; // rax
  KeyValues *v7; // r12
  const char *String; // r14
  KeyValues *FirstTrueSubKey; // r12

  while ( 1 )
  {
    Key = KeyValues::FindKey(pKV, "t", 0);
    v7 = Key;
    if ( Key == 0 )
      break;
    String = KeyValues::GetString(Key, 0, "", 0, 0);
    KeyValues::RemoveSubKey(pKV, v7, 0);
    if ( String == 0 && loc_0 != 0 )
      break;
    TemplateKV = CCompendiumDataFileTemplateHandler::GetTemplateKV(this, String);
    v5 = TemplateKV;
    if ( TemplateKV == 0
      || !CCompendiumDataFileTemplateHandler::MergeTemplateIntoKV(this, pKV, TemplateKV)
      || !CCompendiumDataFileTemplateHandler::ResolveDefines(this, pKV, v5, "t") )
    {
      return 0;
    }
  }
  FirstTrueSubKey = KeyValues::GetFirstTrueSubKey(pKV);
  if ( FirstTrueSubKey != 0 )
  {
    while ( CCompendiumDataFileTemplateHandler::ResolveTemplatesRecursive(this, FirstTrueSubKey) )
    {
      FirstTrueSubKey = KeyValues::GetNextTrueSubKey(FirstTrueSubKey);
      if ( FirstTrueSubKey == 0 )
        return CCompendiumDataFileTemplateHandler::ResolveDefines(this, pKV, pKV, 0);
    }
    return 0;
  }
  return CCompendiumDataFileTemplateHandler::ResolveDefines(this, pKV, pKV, 0);
}


// CCompendiumDataFileTemplateHandler::GetTemplateKV  (line 1311, @0x00000000026715c0, libserver.so)
// calls: KeyValues::FindKey
// callers: CCompendiumDataFileTemplateHandler::ResolveTemplatesRecursive
KeyValues *__fastcall CCompendiumDataFileTemplateHandler::GetTemplateKV(
        CCompendiumDataFileTemplateHandler *const this,
        const char *pszTemplateName)
{
  KeyValues *m_pTemplateKV; // rdi

  if ( this->m_pCompendiumKV != 0 && (m_pTemplateKV = this->m_pTemplateKV) != 0 )
    return KeyValues::FindKey(m_pTemplateKV, pszTemplateName, 0);
  else
    return 0;
}


// EvaluateScriptedComparison  (line 1329, @0x0000000002671710, libserver.so)
// callers: CDOTA_RealtimeCombatAnalyzer::PreStorageTestsPass, CDOTA_RealtimeCombatAnalyzer::PostTestsPass
// globals: jpt_2671729
bool __fastcall EvaluateScriptedComparison(int nAmount, int nAgainst, ScriptedComparisons_t nComparison)
{
  bool result; // al

  switch ( nComparison )
  {
    case ScriptedComparisons_t::CVC_EQUALS:
      result = nAmount == nAgainst;
      break;
    case ScriptedComparisons_t::CVC_NOT_EQUALS:
      result = nAmount != nAgainst;
      break;
    case ScriptedComparisons_t::CVC_GREATER:
      result = nAmount > nAgainst;
      break;
    case ScriptedComparisons_t::CVC_GREATEREQUAL:
      result = nAmount >= nAgainst;
      break;
    case ScriptedComparisons_t::CVC_LESSER:
      result = nAmount < nAgainst;
      break;
    case ScriptedComparisons_t::CVC_LESSEREQUAL:
      result = nAmount <= nAgainst;
      break;
    default:
      result = 0;
      break;
  }
  return result;
}


// ParseChallengeTemplates  (line 1354, @0x0000000002689020, libserver.so)  // inlines: AddToTail, CUtlMemory, CUtlString, CUtlVector, CUtlVectorBase, Construct<challenge_template_t>, Construct<challenge_variable_t>, Element, GetBool, GrowMemory, challenge_template_t, challenge_variable_t, operator[]
// calls: KeyValues::GetFirstSubKey, KeyValues::MakeCopy, KeyValues::GetName, CUtlString::operator=, KeyValues::GetInt, KeyValues::FindKey, KeyValues::GetString, StringFieldToInt, KeyValues::GetNextKey, CUtlMemory<challenge_variable_t, int>::Grow, CUtlMemory<challenge_template_t, int>::Grow
// callers: CDOTAChallengeSystem::LoadTemplates, CDOTAInGamePredictionGameSystem::StaticInit
// strings: "multi_match", "challengetype", "challenge_ranks", "variables"
// globals: g_szChallengeVariableFormatTypes
bool __fastcall ParseChallengeTemplates(
        KeyValues *pKV,
        CUtlVector<challenge_template_t,CUtlMemory<challenge_template_t,int> > *pOutTemplates,
        const char **pszErrChallenge)
{
  KeyValues *FirstSubKey; // r13
  int m_Size; // ebx
  int v6; // eax
  challenge_template_t *v7; // r15
  challenge_template_t *v8; // rax
  const char *Name; // rax
  KeyValues *Key; // rax
  KeyValues *NextKey; // rbx
  __int64 v12; // r12
  challenge_variable_t *v13; // rax
  challenge_variable_t *v14; // r12
  const char *v15; // rax
  const char *String; // rax
  int v17; // eax
  __int64 v18; // r12
  int v19; // eax

  *pszErrChallenge = 0;
  if ( pKV == 0 )
    return 1;
  FirstSubKey = KeyValues::GetFirstSubKey(pKV);
  if ( FirstSubKey == 0 )
    return 1;
  while ( 1 )
  {
    m_Size = pOutTemplates->m_Size;
    v6 = pOutTemplates->m_Size;
    if ( pOutTemplates->m_Size == pOutTemplates->m_Memory.m_nAllocationCount )
    {
      CUtlMemory<challenge_template_t,int>::Grow(&pOutTemplates->m_Memory, 1);
      v6 = pOutTemplates->m_Size;
    }
    v7 = 0;
    pOutTemplates->m_Size = v6 + 1;
    v8 = &pOutTemplates->m_Memory.m_pMemory[m_Size];
    if ( v8 != 0 )
    {
      v8->sName.m_pString = 0;
      v8->vecDynamicVars.m_Size = 0;
      v8->vecDynamicVars.m_Memory.m_pMemory = 0;
      v8->vecDynamicVars.m_Memory.m_nAllocationCount = 0;
      v8->vecDynamicVars.m_Memory.m_nGrowSize = 0;
      v8->pKeyValues = 0;
      v8->nChallengeRanks = 1;
      v7 = &pOutTemplates->m_Memory.m_pMemory[m_Size];
    }
    v7->pKeyValues = KeyValues::MakeCopy(FirstSubKey);
    Name = KeyValues::GetName(FirstSubKey);
    CUtlString::operator=(&v7->sName, Name);
    v7->bMultiMatchChallenge = KeyValues::GetInt(FirstSubKey, "multi_match", 0) != 0;
    v7->nChallengeType = KeyValues::GetInt(FirstSubKey, "challengetype", 0);
    v7->nChallengeRanks = KeyValues::GetInt(FirstSubKey, "challenge_ranks", 1);
    Key = KeyValues::FindKey(FirstSubKey, "variables", 0);
    if ( Key != 0 )
    {
      NextKey = KeyValues::GetFirstSubKey(Key);
      if ( NextKey != 0 )
        break;
    }
LABEL_17:
    FirstSubKey = KeyValues::GetNextKey(FirstSubKey);
    if ( FirstSubKey == 0 )
      return 1;
  }
  while ( 1 )
  {
    v18 = v7->vecDynamicVars.m_Size;
    v19 = v7->vecDynamicVars.m_Size;
    if ( v18 == v7->vecDynamicVars.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<challenge_variable_t,int>::Grow(&v7->vecDynamicVars.m_Memory, 1);
      v19 = v7->vecDynamicVars.m_Size;
    }
    v12 = v18;
    v7->vecDynamicVars.m_Size = v19 + 1;
    v13 = &v7->vecDynamicVars.m_Memory.m_pMemory[v12];
    if ( v13 != 0 )
    {
      v13->sName.m_pString = 0;
      v14 = &v7->vecDynamicVars.m_Memory.m_pMemory[v12];
    }
    else
    {
      v14 = 0;
    }
    v15 = KeyValues::GetName(NextKey);
    CUtlString::operator=(&v14->sName, v15);
    v14->nIndex = KeyValues::GetInt(NextKey, "index", 0);
    String = KeyValues::GetString(NextKey, "format", "", 0, 0);
    v17 = StringFieldToInt(String, g_szChallengeVariableFormatTypes, 8, -1, 0);
    v14->nFormat = v17;
    if ( v17 == -1 )
      break;
    NextKey = KeyValues::GetNextKey(NextKey);
    if ( NextKey == 0 )
      goto LABEL_17;
  }
  *pszErrChallenge = KeyValues::GetName(NextKey);
  return 0;
}


// ParseChallengeVariable  (line 1460, @0x0000000002671790, libserver.so)  // inlines: GetAbilitiesKeyValues, IsAddOnGame, atoi
// calls: DOTAGameManager, CDOTAGameManager::GetHeroDataByName, KeyValues::GetInt, StringFieldToInt, KeyValues::FindKey, strtol
// callers: CCLSearchFieldFactory<SCLKillstreakFields, (DOTA_COMBATLOG_TYPES)16>::CreateSearchFields, CCLSearchFieldFactory<SCLMultiKillFields, (DOTA_COMBATLOG_TYPES)15>::CreateSearchFields, ParseInstanceValue
// globals: s_DOTAKillSpreeTypeText, s_DOTAMultiKillTypeText
int __fastcall ParseChallengeVariable(
        const char *pValue,
        ChallengeVariableFormats_t eFormat,
        int nDefaultValue,
        bool *pSuccess)
{
  int v4; // r12d
  CDOTAGameManager *v6; // rax
  KeyValues *Key; // rax
  const char *v8; // rsi
  CDOTAGameManager *v10; // rax
  KeyValues *m_pkvAddOnAbilities; // rax

  v4 = nDefaultValue;
  if ( pSuccess != 0 )
    *pSuccess = 1;
  if ( eFormat != ChallengeVariableFormats_t::CVT_MULTIKILL )
  {
    if ( eFormat <= ChallengeVariableFormats_t::CVT_MULTIKILL )
    {
      if ( eFormat == ChallengeVariableFormats_t::CVT_ITEMID )
      {
        v10 = DOTAGameManager();
        if ( *&v10->m_bCustomGame != 0 )
          m_pkvAddOnAbilities = v10->m_pkvAddOnAbilities;
        else
          m_pkvAddOnAbilities = v10->m_pkvAbilities;
        Key = KeyValues::FindKey(m_pkvAddOnAbilities, pValue, 0);
        v8 = "ID";
        if ( Key != 0 )
          return KeyValues::GetInt(Key, v8, 0);
        goto LABEL_14;
      }
    }
    else
    {
      if ( eFormat == ChallengeVariableFormats_t::CVT_KILLSTREAK )
        return StringFieldToInt(pValue, s_DOTAKillSpreeTypeText, 11, nDefaultValue, 0);
      if ( eFormat == ChallengeVariableFormats_t::CVT_HEROID )
      {
        v6 = DOTAGameManager();
        Key = CDOTAGameManager::GetHeroDataByName(v6, pValue);
        v8 = "HeroID";
        if ( Key != 0 )
          return KeyValues::GetInt(Key, v8, 0);
LABEL_14:
        if ( pSuccess != 0 )
        {
          *pSuccess = 0;
          return v4;
        }
        return v4;
      }
    }
    return strtol(pValue, 0, 10);
  }
  return StringFieldToInt(pValue, s_DOTAMultiKillTypeText, 6, nDefaultValue, 0);
}


// GenerateChallengeVariableString  (line 1530, @0x0000000002671930, libserver.so)
// calls: DOTAGameManager, CDOTAGameManager::GetHeroNameByID, V_snprintf, CDOTAGameManager::GetAbilityDataByItemID
// callers: CDOTAChallengeSystem::SetChallengeDynamicVarForTemplateIndex
// globals: s_DOTAKillSpreeTypeText, s_DOTAMultiKillTypeText
void __fastcall GenerateChallengeVariableString(
        int nValue,
        ChallengeVariableFormats_t eFormat,
        char *pBuf,
        int nBufLen)
{
  CDOTAGameManager *v7; // rax
  const char *m_pszAbilityName; // rcx
  CDOTAGameManager *v9; // rax
  DOTAAbilityData_t *AbilityDataByItemID; // rax

  if ( eFormat == ChallengeVariableFormats_t::CVT_MULTIKILL )
  {
    m_pszAbilityName = s_DOTAMultiKillTypeText[nValue];
    goto LABEL_6;
  }
  if ( eFormat <= ChallengeVariableFormats_t::CVT_MULTIKILL )
  {
    if ( eFormat == ChallengeVariableFormats_t::CVT_ITEMID )
    {
      v9 = DOTAGameManager();
      AbilityDataByItemID = CDOTAGameManager::GetAbilityDataByItemID(v9, nValue);
      if ( AbilityDataByItemID != 0 )
        m_pszAbilityName = AbilityDataByItemID->m_pszAbilityName;
      else
        m_pszAbilityName = "";
      goto LABEL_6;
    }
  }
  else
  {
    if ( eFormat == ChallengeVariableFormats_t::CVT_KILLSTREAK )
    {
      m_pszAbilityName = s_DOTAKillSpreeTypeText[nValue];
      goto LABEL_6;
    }
    if ( eFormat == ChallengeVariableFormats_t::CVT_HEROID )
    {
      v7 = DOTAGameManager();
      m_pszAbilityName = CDOTAGameManager::GetHeroNameByID(v7, nValue);
LABEL_6:
      V_snprintf(pBuf, nBufLen, "%s", m_pszAbilityName);
      return;
    }
  }
  V_snprintf(pBuf, nBufLen, "%d", nValue);
}


// ParseInstanceValue  (line 1587, @0x00000000026718e0, libserver.so)
// calls: KeyValues::GetInt, KeyValues::GetName, ParseChallengeVariable
// callers: ParseInstanceValueSet
bool __fastcall ParseInstanceValue(
        KeyValues *pKVar,
        challenge_var_set_t::var_value_t *pVarVal,
        ChallengeVariableFormats_t eFormat)
{
  const char *Name; // rax
  bool bSuccess; // [rsp+Fh] [rbp-21h] BYREF

  pVarVal->nVarWeight = KeyValues::GetInt(pKVar, 0, 0);
  Name = KeyValues::GetName(pKVar);
  pVarVal->nVarValue = ParseChallengeVariable(Name, eFormat, 0, &bSuccess);
  return bSuccess;
}


// ParseInstanceValueSet  (line 1595, @0x00000000026892b0, libserver.so)  // inlines: AddToTail, CUtlMemory, CUtlString, CUtlVector, CUtlVectorBase, Construct<challenge_var_set_t>, Element, GrowMemory, atoi, challenge_var_set_t, operator[]
// calls: KeyValues::FindKey, CUtlString::operator=, KeyValues::GetFirstSubKey, KeyValues::GetName, strtol, ParseInstanceValue, KeyValues::GetNextKey, CUtlMemory<challenge_var_set_t::var_value_t, int>::Grow, CUtlMemory<challenge_var_set_t, int>::Grow
// callers: ParseChallengeInstances
__int64 __fastcall ParseInstanceValueSet(
        challenge_instance_t *pInstance,
        KeyValues *pInstanceKV,
        const char *pszVarName,
        int nVarIndex,
        ChallengeVariableFormats_t eFormat,
        const challenge_template_t *pTemplate)
{
  KeyValues *Key; // r8
  __int64 m_Size; // rbx
  int v12; // eax
  __int64 v13; // rdx
  char *v14; // rbx
  __int64 v15; // rdx
  char *v16; // rcx
  KeyValues *NextKey; // r13
  KeyValues *v18; // r12
  challenge_var_set_t::var_value_t *v19; // r15
  const char *Name; // rax
  int v21; // r15d
  int v22; // edx
  KeyValues *FirstSubKey; // r12
  challenge_var_set_t::var_value_t *v25; // rsi
  __int64 v26; // r13
  int v27; // eax
  KeyValues *pKVVar; // [rsp+0h] [rbp-40h]
  KeyValues *pKVVara; // [rsp+0h] [rbp-40h]

  Key = KeyValues::FindKey(pInstanceKV, pszVarName, 0);
  if ( Key == 0 )
    return 0;
  m_Size = pInstance->vecVariables.m_Size;
  v12 = pInstance->vecVariables.m_Size;
  if ( m_Size == pInstance->vecVariables.m_Memory.m_nAllocationCount )
  {
    pKVVara = Key;
    CUtlMemory<challenge_var_set_t,int>::Grow(&pInstance->vecVariables.m_Memory, 1);
    v12 = pInstance->vecVariables.m_Size;
    Key = pKVVara;
  }
  v13 = 5 * m_Size;
  v14 = 0;
  v15 = 8 * v13;
  pInstance->vecVariables.m_Size = v12 + 1;
  v16 = pInstance->vecVariables.m_Memory.m_pMemory + v15;
  if ( v16 != 0 )
  {
    *v16 = 0;
    *(v16 + 4) = 0;
    *(v16 + 3) = 0;
    *(v16 + 8) = 0;
    *(v16 + 9) = 0;
    v14 = pInstance->vecVariables.m_Memory.m_pMemory + v15;
  }
  pKVVar = Key;
  CUtlString::operator=(v14, pszVarName);
  *(v14 + 2) = nVarIndex;
  if ( SLODWORD(pTemplate->sName.m_pString) <= 1 )
  {
    FirstSubKey = KeyValues::GetFirstSubKey(pKVVar);
    if ( FirstSubKey != 0 )
    {
      while ( 1 )
      {
        v26 = *(v14 + 4);
        v27 = *(v14 + 4);
        if ( v26 == *(v14 + 8) )
        {
          CUtlMemory<challenge_var_set_t::var_value_t,int>::Grow((v14 + 24), 1);
          v27 = *(v14 + 4);
        }
        *(v14 + 4) = v27 + 1;
        v25 = (*(v14 + 3) + 12 * v26);
        v25->nVarRank = 1;
        if ( !ParseInstanceValue(FirstSubKey, v25, eFormat) )
          break;
        FirstSubKey = KeyValues::GetNextKey(FirstSubKey);
        if ( FirstSubKey == 0 )
          return 1;
      }
      return 0;
    }
  }
  else
  {
    NextKey = KeyValues::GetFirstSubKey(pKVVar);
    if ( NextKey != 0 )
    {
      while ( 1 )
      {
        v18 = KeyValues::GetFirstSubKey(NextKey);
        if ( v18 != 0 )
          break;
LABEL_15:
        NextKey = KeyValues::GetNextKey(NextKey);
        if ( NextKey == 0 )
          return 1;
      }
      while ( 1 )
      {
        v21 = *(v14 + 4);
        v22 = v21;
        if ( v21 == *(v14 + 8) )
        {
          CUtlMemory<challenge_var_set_t::var_value_t,int>::Grow((v14 + 24), 1);
          v22 = *(v14 + 4);
        }
        *(v14 + 4) = v22 + 1;
        v19 = (*(v14 + 3) + 12LL * v21);
        Name = KeyValues::GetName(NextKey);
        v19->nVarRank = strtol(Name, 0, 10);
        if ( !ParseInstanceValue(v18, v19, eFormat) )
          return 0;
        v18 = KeyValues::GetNextKey(v18);
        if ( v18 == 0 )
          goto LABEL_15;
      }
    }
  }
  return 1;
}


// ParseChallengeInstances  (line 1636, @0x0000000002689500, libserver.so)  // inlines: AddToTail, CUtlMemory, CUtlString, CUtlVector, CUtlVectorBase, Construct<challenge_instance_t>, Element, GrowMemory, _V_strcmp, challenge_instance_t, operator[]
// calls: KeyValues::GetFirstSubKey, KeyValues::GetName, CUtlString::operator=, KeyValues::GetString, CUtlString::Get, strcmp, DevMsg(char const*,...), KeyValues::GetInt, ParseInstanceValueSet, KeyValues::GetNextKey, CUtlMemory<challenge_instance_t, int>::Grow
// callers: CDOTAChallengeSystem::LoadInstances
// strings: "No Challenge template found named %s for instance %s!\n", "tier", "[complete_limit]"
bool __fastcall ParseChallengeInstances(
        KeyValues *pKV,
        CUtlVector<challenge_instance_t,CUtlMemory<challenge_instance_t,int> > *pOutChallenges,
        const CUtlVector<challenge_template_t,CUtlMemory<challenge_template_t,int> > *pTemplates,
        const char **pszErrChallenge)
{
  int m_Size; // r12d
  int v7; // eax
  challenge_instance_t *v8; // rax
  const char *Name; // rax
  const char *String; // r12
  __int64 v11; // r15
  int v12; // r14d
  const char *v13; // rax
  challenge_template_t *v14; // r15
  ChallengeType_t nChallengeType; // eax
  const char *v16; // rax
  int v18; // r12d
  __int64 v19; // r14
  challenge_variable_t *v20; // rbx
  const char *v21; // rax
  const CUtlVector<challenge_template_t,CUtlMemory<challenge_template_t,int> > *v22; // [rsp+0h] [rbp-60h]
  KeyValues *pKVChallenge; // [rsp+20h] [rbp-40h]
  challenge_instance_t *v25; // [rsp+28h] [rbp-38h]

  *pszErrChallenge = 0;
  if ( pKV == 0 )
    return 1;
  pKVChallenge = KeyValues::GetFirstSubKey(pKV);
  if ( pKVChallenge == 0 )
    return 1;
  while ( 1 )
  {
    m_Size = pOutChallenges->m_Size;
    v7 = pOutChallenges->m_Size;
    if ( pOutChallenges->m_Size == pOutChallenges->m_Memory.m_nAllocationCount )
    {
      CUtlMemory<challenge_instance_t,int>::Grow(&pOutChallenges->m_Memory, 1);
      v7 = pOutChallenges->m_Size;
    }
    v25 = 0;
    pOutChallenges->m_Size = v7 + 1;
    v8 = &pOutChallenges->m_Memory.m_pMemory[m_Size];
    if ( v8 != 0 )
    {
      v8->sInstanceName.m_pString = 0;
      v8->vecVariables.m_Size = 0;
      v8->vecVariables.m_Memory.m_pMemory = 0;
      v8->vecVariables.m_Memory.m_nAllocationCount = 0;
      v8->vecVariables.m_Memory.m_nGrowSize = 0;
      v8->nChallengeType = -1;
      v8->nChallengeTier = -1;
      v8->nWeight = 1;
      v8->bQuestOnly = 0;
      v25 = &pOutChallenges->m_Memory.m_pMemory[m_Size];
    }
    Name = KeyValues::GetName(pKVChallenge);
    CUtlString::operator=(&v25->sInstanceName, Name);
    String = KeyValues::GetString(pKVChallenge, "template", 0, 0, 0);
    if ( String == 0 )
      break;
    if ( pTemplates->m_Size <= 0 )
      goto LABEL_13;
    v11 = 0;
    v12 = 0;
    while ( 1 )
    {
      v13 = CUtlString::Get(&pTemplates->m_Memory.m_pMemory[v11].sName);
      if ( strcmp(String, v13) == 0 )
        break;
      ++v12;
      ++v11;
      if ( pTemplates->m_Size <= v12 )
        goto LABEL_13;
    }
    v14 = &pTemplates->m_Memory.m_pMemory[v11];
    nChallengeType = v14->nChallengeType;
    v25->nChallengeType = nChallengeType;
    if ( nChallengeType == -1 )
    {
LABEL_13:
      v16 = CUtlString::Get(&v25->sInstanceName);
      DevMsg("No Challenge template found named %s for instance %s!\n", String, v16);
      *pszErrChallenge = String;
      return 0;
    }
    v18 = 0;
    v25->nChallengeTier = KeyValues::GetInt(pKVChallenge, "tier", 1);
    v25->nWeight = KeyValues::GetInt(pKVChallenge, "weight", 1);
    if ( v14->vecDynamicVars.m_Size > 0 )
    {
      v19 = 0;
      v22 = pTemplates;
      do
      {
        v20 = &v14->vecDynamicVars.m_Memory.m_pMemory[v19];
        if ( v20 != 0 )
        {
          v21 = CUtlString::Get(&v14->vecDynamicVars.m_Memory.m_pMemory[v19].sName);
          if ( v21 != 0
            && ParseInstanceValueSet(v25, pKVChallenge, v21, v20->nIndex, v20->nFormat, &v14->nChallengeRanks) == 0 )
          {
            break;
          }
        }
        if ( v14->vecDynamicVars.m_Size <= ++v18 )
        {
          pTemplates = v22;
          goto LABEL_23;
        }
        ++v19;
      }
      while ( v19 != 2 );
      return 0;
    }
LABEL_23:
    if ( v14->bMultiMatchChallenge
      && ParseInstanceValueSet(
           v25,
           pKVChallenge,
           "[complete_limit]",
           200,
           ChallengeVariableFormats_t::CVT_INT,
           &v14->nChallengeRanks) == 0 )
    {
      return 0;
    }
    pKVChallenge = KeyValues::GetNextKey(pKVChallenge);
    if ( pKVChallenge == 0 )
      return 1;
  }
  *pszErrChallenge = KeyValues::GetName(pKVChallenge);
  return 0;
}


// challenge_quest_t::challenge_quest_t  (line 1711, @0x0000000002671a20, libserver.so)  // inlines: CUtlMemory, CUtlString, CUtlVector, CUtlVectorBase
// callers: ParseChallengeQuests
void __fastcall challenge_quest_t::challenge_quest_t(challenge_quest_t *const this)
{
  this->sQuestName.m_pString = 0;
  this->sQuestTitle.m_pString = 0;
  this->sQuestDesc.m_pString = 0;
  this->sQuestLore.m_pString = 0;
  this->sQuestImage.m_pString = 0;
  this->sQuestLayoutFile.m_pString = 0;
  this->nQuestID = 0;
  this->unEventID = 0;
  this->vecChallenges.m_Size = 0;
  this->vecChallenges.m_Memory.m_pMemory = 0;
  this->vecChallenges.m_Memory.m_nAllocationCount = 0;
  this->vecChallenges.m_Memory.m_nGrowSize = 0;
  this->bLocked = 0;
}


// challenge_quest_t::~challenge_quest_t  (line 1718, @0x0000000002671a90, libserver.so)  // inlines: Destruct<challenge_quest_t::challenge_t::instance_t>, Element, Purge, PurgeAndDeleteElements, RemoveAll, operator[], ~CUtlMemory, ~CUtlString, ~CUtlVector, ~CUtlVectorBase, ~challenge_t, ~instance_t
// calls: CUtlString::FreeMemoryBlock, operator delete, CUtlMemory<challenge_quest_t::challenge_t::instance_t, int>::Purge, CUtlMemory<challenge_quest_t::challenge_t::prerequisite_t, int>::Purge, CUtlMemory<challenge_quest_t::challenge_t::complete_action_t, int>::Purge, CUtlMemory<challenge_quest_t::challenge_t*, int>::Purge
// callers: ParseChallengeQuests
void __fastcall challenge_quest_t::~challenge_quest_t(challenge_quest_t *const this)
{
  __int64 v1; // r15
  challenge_quest_t::challenge_t *v3; // r14
  bool v4; // zf
  int m_Size; // ebx
  __int64 j; // r12
  CUtlString *v7; // rdi
  int i; // [rsp+Ch] [rbp-34h]

  v1 = 0;
  for ( i = 0; i < this->vecChallenges.m_Size; ++v1 )
  {
    v3 = this->vecChallenges.m_Memory.m_pMemory[v1];
    if ( v3 != 0 )
    {
      v4 = (v3->vecCompleteActions.m_Memory.m_nGrowSize & 0xC0000000) == 0;
      v3->vecCompleteActions.m_Size = 0;
      if ( v4 )
      {
        CUtlMemory<challenge_quest_t::challenge_t::complete_action_t,int>::Purge(&v3->vecCompleteActions.m_Memory);
        if ( (v3->vecCompleteActions.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
          CUtlMemory<challenge_quest_t::challenge_t::complete_action_t,int>::Purge(&v3->vecCompleteActions.m_Memory);
      }
      v4 = (v3->vecPrerequisites.m_Memory.m_nGrowSize & 0xC0000000) == 0;
      v3->vecPrerequisites.m_Size = 0;
      if ( v4 )
      {
        CUtlMemory<challenge_quest_t::challenge_t::prerequisite_t,int>::Purge(&v3->vecPrerequisites.m_Memory);
        if ( (v3->vecPrerequisites.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
          CUtlMemory<challenge_quest_t::challenge_t::prerequisite_t,int>::Purge(&v3->vecPrerequisites.m_Memory);
      }
      m_Size = v3->vecInstances.m_Size;
      for ( j = 24LL * m_Size - 24; --m_Size >= 0; j -= 24 )
      {
        v7 = (&v3->vecInstances.m_Memory.m_pMemory->sInstanceName + j);
        if ( v7->m_pString != 0 )
          CUtlString::FreeMemoryBlock(v7);
      }
      v4 = (v3->vecInstances.m_Memory.m_nGrowSize & 0xC0000000) == 0;
      v3->vecInstances.m_Size = 0;
      if ( v4 )
      {
        CUtlMemory<challenge_quest_t::challenge_t::instance_t,int>::Purge(&v3->vecInstances.m_Memory);
        if ( (v3->vecInstances.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
          CUtlMemory<challenge_quest_t::challenge_t::instance_t,int>::Purge(&v3->vecInstances.m_Memory);
      }
      if ( v3->sChallengeImage.m_pString != 0 )
        CUtlString::FreeMemoryBlock(&v3->sChallengeImage);
      if ( v3->sChallengeLore.m_pString != 0 )
        CUtlString::FreeMemoryBlock(&v3->sChallengeLore);
      if ( v3->sChallengeTitle.m_pString != 0 )
        CUtlString::FreeMemoryBlock(&v3->sChallengeTitle);
      if ( v3->sChallengeName.m_pString != 0 )
        CUtlString::FreeMemoryBlock(&v3->sChallengeName);
      operator delete(v3);
    }
    ++i;
  }
  v4 = (this->vecChallenges.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->vecChallenges.m_Size = 0;
  if ( v4 )
  {
    CUtlMemory<challenge_quest_t::challenge_t *,int>::Purge(&this->vecChallenges.m_Memory);
    v4 = (this->vecChallenges.m_Memory.m_nGrowSize & 0xC0000000) == 0;
    this->vecChallenges.m_Size = 0;
    if ( v4 )
    {
      CUtlMemory<challenge_quest_t::challenge_t *,int>::Purge(&this->vecChallenges.m_Memory);
      if ( (this->vecChallenges.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<challenge_quest_t::challenge_t *,int>::Purge(&this->vecChallenges.m_Memory);
    }
  }
  else
  {
    this->vecChallenges.m_Size = 0;
  }
  if ( this->sQuestLayoutFile.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->sQuestLayoutFile);
  if ( this->sQuestImage.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->sQuestImage);
  if ( this->sQuestLore.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->sQuestLore);
  if ( this->sQuestDesc.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->sQuestDesc);
  if ( this->sQuestTitle.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->sQuestTitle);
  if ( this->sQuestName.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->sQuestName);
}


// ParseChallengeQuests  (line 2022, @0x0000000002693860, libserver.so)  // inlines: AddToTail, CUtlDict, CUtlMap, CUtlMemory, CUtlRBTree, CUtlString, CUtlVector, CUtlVectorBase, Construct<challenge_quest_t::challenge_t::instance_t>, CopyConstruct<challenge_quest_t*>, CopyConstruct<challenge_quest_t::challenge_t*>, CopyConstruct<challenge_quest_t::challenge_t::complete_action_t>, CopyConstruct<challenge_quest_t::challenge_t::prerequisite_t>, Element, Find, GetBool, GrowMemory, HasElement, IsIdxAfter, IsIdxValid, IsValidIndex, LeftChild, ParseAliasedValue, ParseQuest, ParseQuestChallenge, ParseQuestCompleteAction, ParseQuestPrerequisite, Purge, PurgeAndDeleteElements, RemoveAll, ResetDbgInfo, RightChild, SetCompareType, SetLessFunc, V_isdigit, _V_strcmp, challenge_t, instance_t, operator char const*, operator(), operator[], ~CUtlDict, ~CUtlMap, ~CUtlMemory, ~CUtlRBTree
// calls: KeyValues::GetFirstSubKey, operator new, challenge_quest_t::challenge_quest_t, KeyValues::GetName, CUtlString::operator=, KeyValues::GetString, KeyValues::GetInt, KeyValues::FindKey, KeyValues::GetFirstValue, CUtlDict<int, int>::Insert, KeyValues::GetNextValue, CDOTAEventSchema::Get (43 total)
// callers: CDOTAChallengeSystem::LoadQuests
// strings: "quest_title", "quest_desc", "quest_lore", "quest_image", "selection_names", "event_goal_id" (24 total)
// globals: FastCaselessStringLessThan(char const* const&,char const* const&), ParseQuestPrerequisite(char const*)::pszPrequisites, ParseQuestCompleteAction(char const*)::pszActions
bool __fastcall ParseChallengeQuests(
        KeyValues *pKV,
        CUtlVector<challenge_quest_t*,CUtlMemory<challenge_quest_t*,int> > *pOutQuests,
        const CUtlVector<challenge_instance_t,CUtlMemory<challenge_instance_t,int> > *pInstances,
        CUtlString *const sErrorMsg)
{
  const char *String; // rax
  const char *v6; // rax
  const char *v7; // rax
  const char *v8; // rax
  const char *v9; // rax
  int Int; // eax
  KeyValues *Key; // rax
  KeyValues *i; // rbx
  const char *v13; // rax
  EEvent unEventID; // ebx
  CDOTAEventSchema *v15; // rax
  const CDOTAEventDefinition *EventDefinition; // rax
  const CDOTAEventDefinition *v17; // r13
  int v18; // eax
  __int64 v19; // rbx
  __int64 v20; // r12
  const char *v21; // rax
  const char *v22; // rax
  KeyValues *v23; // rax
  KeyValues *v24; // r13
  KeyValues *FirstTrueSubKey; // rbx
  const char *v26; // rax
  const char *v27; // r12
  int v28; // eax
  int Uint64; // ecx
  __int64 v30; // rax
  UtlRBTreeNode_t<CUtlMap<char const*,unsigned int,int,bool (*)(char const* const&,char const* const&)>::Node_t,int> *m_pMemory; // rdx
  challenge_quest_t::challenge_t *v32; // rax
  challenge_quest_t::challenge_t *v33; // r14
  const char *v34; // rax
  int v35; // eax
  KeyValues *v36; // rax
  const char *v37; // r13
  int v38; // eax
  __int64 m_Size; // r12
  int v40; // ebx
  int v41; // eax
  challenge_quest_t::challenge_t::instance_t *v42; // rax
  __int64 v43; // rbx
  int v44; // r12d
  const char *v45; // rax
  challenge_instance_t *v46; // rbx
  KeyValues *v47; // rax
  const char *v48; // r12
  __int64 v49; // rbx
  const char *v50; // rbx
  QuestChallengeID_t v51; // r12d
  const char *v52; // rax
  CFmtStrN<256,false> *v53; // r13
  const char *v54; // rbx
  const char *v55; // rax
  bool v56; // bl
  __int64 v57; // r12
  challenge_quest_t **v58; // rax
  QuestID_t nQuestID; // ebx
  __int64 *v60; // rax
  __int64 *v61; // rcx
  __int64 v62; // rdx
  int v63; // eax
  challenge_quest_t **v64; // rax
  __int64 v65; // r13
  const char *v66; // rax
  int v67; // r12d
  challenge_quest_t **v68; // rax
  challenge_quest_t *v69; // rbx
  bool v70; // zf
  QuestChallengeID_t nChallengeID; // ebx
  const char *v73; // rax
  const char *v74; // rax
  const char *v75; // rbx
  int v76; // eax
  __int64 v77; // rbx
  CUtlMap<char const*,unsigned int,int,bool (*)(char const* const&,char const* const&)>::ElemType_t elem; // r12d
  int v79; // eax
  challenge_quest_t::challenge_t::prerequisite_t *v80; // rax
  KeyValues *v81; // rax
  __int64 v82; // rbx
  const char *v83; // rax
  CUtlDict<int,int> *v84; // r13
  const char *v85; // rax
  char v86; // dl
  const char *v87; // rsi
  unsigned int v88; // ecx
  CUtlMap<char const*,int,int,bool (*)(char const* const&,char const* const&)>::ElemType_t v89; // r12d
  __int64 v90; // rbx
  int *v91; // rax
  __int64 v92; // rbx
  challenge_quest_t::challenge_t **v93; // rax
  QuestChallengeID_t v94; // r12d
  const char *v95; // rax
  QuestChallengeID_t v96; // r12d
  const char *v97; // rax
  const char *v98; // rbx
  QuestChallengeID_t v99; // r13d
  const char *v100; // rax
  __int64 v101; // r13
  const char *v102; // rax
  int v103; // r12d
  challenge_quest_t **v104; // rax
  challenge_quest_t *v105; // r14
  int m_Root; // r12d
  UtlRBTreeNode_t<CUtlMap<char const*,int,int,bool (*)(char const* const&,char const* const&)>::Node_t,int> *v107; // rax
  __int64 v108; // rbx
  const char *v109; // rbx
  const char *v110; // r12
  const char *v111; // rax
  KeyValues *FirstSubKey; // [rsp+40h] [rbp-7C0h]
  int v115; // [rsp+50h] [rbp-7B0h]
  KeyValues *NextTrueSubKey; // [rsp+58h] [rbp-7A8h]
  challenge_quest_t *pQuest; // [rsp+68h] [rbp-798h]
  KeyValues *pkvQuest; // [rsp+70h] [rbp-790h]
  const char *Name; // [rsp+80h] [rbp-780h]
  CUtlString *p_sInstanceName; // [rsp+80h] [rbp-780h]
  challenge_quest_t::EPrerequisite v121; // [rsp+80h] [rbp-780h]
  KeyValues *FirstValue; // [rsp+80h] [rbp-780h]
  KeyValues *j; // [rsp+88h] [rbp-778h]
  KeyValues *k; // [rsp+88h] [rbp-778h]
  KeyValues *v125; // [rsp+88h] [rbp-778h]
  int v126; // [rsp+88h] [rbp-778h]
  char *s2; // [rsp+90h] [rbp-770h]
  QuestChallengeID_t s2a; // [rsp+90h] [rbp-770h]
  CUtlMap<char const*,unsigned int,int,bool (*)(char const* const&,char const* const&)>::Node_t search; // [rsp+A0h] [rbp-760h] BYREF
  CUtlMap<char const*,unsigned int,int,bool (*)(char const* const&,char const* const&)>::Node_t v130; // [rsp+B0h] [rbp-750h] BYREF
  _QWORD v131[2]; // [rsp+C0h] [rbp-740h] BYREF
  CUtlDict<int,int> v132; // [rsp+D0h] [rbp-730h] BYREF
  CUtlDict<int,int> v133; // [rsp+100h] [rbp-700h] BYREF
  CUtlDict<unsigned int,int> element; // [rsp+130h] [rbp-6D0h] BYREF
  CFmtStrN<256,false> v135; // [rsp+160h] [rbp-6A0h] BYREF
  CFmtStrN<256,false> v136; // [rsp+270h] [rbp-590h] BYREF
  CFmtStrN<256,false> v137; // [rsp+380h] [rbp-480h] BYREF
  CFmtStrN<256,false> v138; // [rsp+490h] [rbp-370h] BYREF
  CFmtStrN<256,false> v139; // [rsp+5A0h] [rbp-260h] BYREF
  CFmtStrN<256,false> v140; // [rsp+6B0h] [rbp-150h] BYREF
  unsigned __int64 v141; // [rsp+7C8h] [rbp-38h]

  v141 = __readfsqword(0x28u);
  if ( pKV == 0 )
    return 0;
  pkvQuest = KeyValues::GetFirstSubKey(pKV);
  if ( pkvQuest == 0 )
    return 1;
  while ( 2 )
  {
    pQuest = operator new(0x60u);
    challenge_quest_t::challenge_quest_t(pQuest);
    Name = KeyValues::GetName(pkvQuest);
    CUtlString::operator=(&pQuest->sQuestName, Name);
    String = KeyValues::GetString(pkvQuest, "quest_title", "", 0, 0);
    CUtlString::operator=(&pQuest->sQuestTitle, String);
    v6 = KeyValues::GetString(pkvQuest, "quest_desc", "", 0, 0);
    CUtlString::operator=(&pQuest->sQuestDesc, v6);
    v7 = KeyValues::GetString(pkvQuest, "quest_lore", "", 0, 0);
    CUtlString::operator=(&pQuest->sQuestLore, v7);
    v8 = KeyValues::GetString(pkvQuest, "quest_image", "", 0, 0);
    CUtlString::operator=(&pQuest->sQuestImage, v8);
    v9 = KeyValues::GetString(pkvQuest, "layout_file", "", 0, 0);
    CUtlString::operator=(&pQuest->sQuestLayoutFile, v9);
    pQuest->unEventID = KeyValues::GetInt(pkvQuest, "event_id", 0);
    pQuest->unEventGoalID = 0;
    pQuest->nQuestID = KeyValues::GetInt(pkvQuest, "quest_id", 0);
    Int = KeyValues::GetInt(pkvQuest, "locked", 0);
    v132.m_Elements.m_Tree.m_Elements.m_pMemory = 0;
    pQuest->bLocked = Int != 0;
    v132.m_Elements.m_Tree.m_Elements.m_nAllocationCount = 0;
    v132.m_Elements.m_Tree.m_Elements.m_nGrowSize = 0;
    v132.m_Elements.m_Tree.m_Root = -1;
    v132.m_Elements.m_Tree.m_NumElements = 0;
    v132.m_Elements.m_Tree.m_FirstFree = -1;
    v132.m_Elements.m_Tree.m_LastAlloc.index = -1;
    v132.m_Elements.m_Tree.m_pElements = 0;
    v132.m_Elements.m_Tree.m_LessFunc.m_LessFunc = FastCaselessStringLessThan;
    Key = KeyValues::FindKey(pkvQuest, "selection_names", 0);
    if ( Key != 0 )
    {
      for ( i = KeyValues::GetFirstValue(Key); i != 0; i = KeyValues::GetNextValue(i) )
      {
        LODWORD(element.m_Elements.m_Tree.m_LessFunc.m_LessFunc) = KeyValues::GetInt(i, 0, 0);
        v13 = KeyValues::GetName(i);
        CUtlDict<int,int>::Insert(&v132, v13, &element);
      }
    }
    v133.m_Elements.m_Tree.m_Elements.m_pMemory = 0;
    v133.m_Elements.m_Tree.m_LessFunc.m_LessFunc = FastCaselessStringLessThan;
    v133.m_Elements.m_Tree.m_Elements.m_nAllocationCount = 0;
    v133.m_Elements.m_Tree.m_Elements.m_nGrowSize = 0;
    v133.m_Elements.m_Tree.m_Root = -1;
    v133.m_Elements.m_Tree.m_NumElements = 0;
    unEventID = pQuest->unEventID;
    v133.m_Elements.m_Tree.m_FirstFree = -1;
    v133.m_Elements.m_Tree.m_LastAlloc.index = -1;
    v133.m_Elements.m_Tree.m_pElements = 0;
    v15 = CDOTAEventSchema::Get();
    EventDefinition = CDOTAEventSchema::GetEventDefinition(v15, unEventID);
    v17 = EventDefinition;
    if ( EventDefinition != 0 )
    {
      v18 = *(EventDefinition + 168);
      if ( v18 > 0 )
      {
        v19 = 0;
        do
        {
          if ( v19 < v18 && *(v17 + 173) >= v19 )
          {
            v20 = *(v17 + 83) + 80 * v19;
            if ( *v20 != v19 )
            {
              LODWORD(element.m_Elements.m_Tree.m_LessFunc.m_LessFunc) = *(v20 + 24);
              v21 = CUtlString::Get((v20 + 32));
              CUtlDict<int,int>::Insert(&v133, v21, &element);
              s2 = KeyValues::GetString(pkvQuest, "event_goal_id", "", 0, 0);
              v22 = CUtlString::Get((v20 + 32));
              if ( strcmp(v22, s2) == 0 )
                pQuest->unEventGoalID = *(v20 + 24);
              v18 = *(v17 + 168);
            }
          }
          ++v19;
        }
        while ( v18 > v19 );
      }
    }
    v23 = KeyValues::FindKey(pkvQuest, "challenges", 0);
    v24 = v23;
    if ( v23 == 0 )
    {
      CFmtStrN<256,false>::CFmtStrN(&v140, "Quest %s is missing a challenge block\n", Name);
      CUtlString::operator+=(sErrorMsg, v140.m_szBuf);
      v56 = 0;
      goto LABEL_58;
    }
    element.m_Elements.m_Tree.m_Elements.m_pMemory = 0;
    element.m_Elements.m_Tree.m_LessFunc.m_LessFunc = FastCaselessStringLessThan;
    element.m_Elements.m_Tree.m_Elements.m_nAllocationCount = 0;
    element.m_Elements.m_Tree.m_Elements.m_nGrowSize = 0;
    element.m_Elements.m_Tree.m_Root = -1;
    element.m_Elements.m_Tree.m_NumElements = 0;
    element.m_Elements.m_Tree.m_FirstFree = -1;
    element.m_Elements.m_Tree.m_LastAlloc.index = -1;
    element.m_Elements.m_Tree.m_pElements = 0;
    FirstTrueSubKey = KeyValues::GetFirstTrueSubKey(v23);
    if ( FirstTrueSubKey != 0 )
    {
      while ( 1 )
      {
        v26 = KeyValues::GetName(FirstTrueSubKey);
        v27 = v26;
        if ( v26 != 0 )
        {
          search.key = v26;
          v28 = CUtlRBTree<CUtlMap<char const*,unsigned int,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,unsigned int,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,unsigned int,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::Find(
                  &element.m_Elements.m_Tree,
                  &search);
          if ( v28 >= 0LL
            && v28 < element.m_Elements.m_Tree.m_Elements.m_nAllocationCount
            && v28 <= element.m_Elements.m_Tree.m_LastAlloc.index
            && v28 != -1
            && v28 != element.m_Elements.m_Tree.m_Elements.m_pMemory[v28].m_Left )
          {
            break;
          }
        }
        Uint64 = KeyValues::GetUint64(FirstTrueSubKey, "challenge_id", 0);
        LODWORD(v131[0]) = Uint64;
        if ( element.m_Elements.m_Tree.m_Elements.m_nAllocationCount > 0 )
        {
          v30 = 0;
          m_pMemory = element.m_Elements.m_Tree.m_Elements.m_pMemory;
          while ( element.m_Elements.m_Tree.m_Elements.m_nAllocationCount <= v30
               || v30 > element.m_Elements.m_Tree.m_LastAlloc.index
               || v30 == m_pMemory->m_Left
               || Uint64 != m_pMemory->m_Data.elem )
          {
            ++v30;
            ++m_pMemory;
            if ( element.m_Elements.m_Tree.m_Elements.m_nAllocationCount <= v30 )
              goto LABEL_31;
          }
          CFmtStrN<256,false>::CFmtStrN(
            &v140,
            "Quest %s has multiple challenges with the same ID: %u - %s and %s\n",
            Name,
            Uint64,
            v27,
            m_pMemory->m_Data.key);
LABEL_75:
          CUtlString::operator+=(sErrorMsg, v140.m_szBuf);
          goto LABEL_55;
        }
LABEL_31:
        CUtlDict<unsigned int,int>::Insert(&element, v27, v131);
        FirstTrueSubKey = KeyValues::GetNextTrueSubKey(FirstTrueSubKey);
        if ( FirstTrueSubKey == 0 )
          goto LABEL_32;
      }
      CFmtStrN<256,false>::CFmtStrN(&v140, "Quest %s has multiple challenges with the same name: %s\n", Name, v27);
      goto LABEL_75;
    }
LABEL_32:
    NextTrueSubKey = KeyValues::GetFirstTrueSubKey(v24);
    if ( NextTrueSubKey == 0 )
    {
LABEL_126:
      v56 = 1;
      goto LABEL_56;
    }
    while ( 1 )
    {
      v32 = operator new(0x78u);
      v32->sChallengeName.m_pString = 0;
      v33 = v32;
      v32->sChallengeTitle.m_pString = 0;
      v32->sChallengeLore.m_pString = 0;
      v32->sChallengeImage.m_pString = 0;
      v32->vecInstances.m_Size = 0;
      v32->vecInstances.m_Memory.m_pMemory = 0;
      v32->vecInstances.m_Memory.m_nAllocationCount = 0;
      v32->vecInstances.m_Memory.m_nGrowSize = 0;
      v32->vecPrerequisites.m_Size = 0;
      v32->vecPrerequisites.m_Memory.m_pMemory = 0;
      v32->vecPrerequisites.m_Memory.m_nAllocationCount = 0;
      v32->vecPrerequisites.m_Memory.m_nGrowSize = 0;
      v32->vecCompleteActions.m_Size = 0;
      v32->vecCompleteActions.m_Memory.m_pMemory = 0;
      v32->vecCompleteActions.m_Memory.m_nAllocationCount = 0;
      v32->vecCompleteActions.m_Memory.m_nGrowSize = 0;
      v34 = KeyValues::GetName(NextTrueSubKey);
      CUtlString::operator=(&v33->sChallengeName, v34);
      v33->nChallengeID = KeyValues::GetInt(NextTrueSubKey, "challenge_id", 0);
      v35 = KeyValues::GetInt(NextTrueSubKey, "optional", 0);
      v33->unTotalInstanceWeight = 0;
      v33->bOptional = v35 != 0;
      v36 = KeyValues::FindKey(NextTrueSubKey, "challenge_instances", 0);
      if ( v36 != 0 )
      {
        for ( j = KeyValues::GetFirstValue(v36); j != 0; j = KeyValues::GetNextValue(j) )
        {
          v37 = KeyValues::GetName(j);
          if ( KeyValues::GetInt(j, 0, 0) <= 0 )
          {
            m_Size = v33->vecInstances.m_Size;
            v40 = 1;
            v41 = v33->vecInstances.m_Size;
            if ( m_Size != v33->vecInstances.m_Memory.m_nAllocationCount )
              goto LABEL_37;
          }
          else
          {
            v38 = KeyValues::GetInt(j, 0, 0);
            m_Size = v33->vecInstances.m_Size;
            v40 = v38;
            v41 = v33->vecInstances.m_Size;
            if ( m_Size != v33->vecInstances.m_Memory.m_nAllocationCount )
              goto LABEL_37;
          }
          CUtlMemory<challenge_quest_t::challenge_t::instance_t,int>::Grow(&v33->vecInstances.m_Memory, 1);
          v41 = v33->vecInstances.m_Size;
LABEL_37:
          v33->vecInstances.m_Size = v41 + 1;
          v42 = &v33->vecInstances.m_Memory.m_pMemory[m_Size];
          if ( v42 != 0 )
          {
            v42->sInstanceName.m_pString = 0;
            p_sInstanceName = &v33->vecInstances.m_Memory.m_pMemory[m_Size].sInstanceName;
          }
          else
          {
            p_sInstanceName = 0;
          }
          CUtlString::operator=(p_sInstanceName, v37);
          LODWORD(p_sInstanceName[2].m_pString) = v40;
          p_sInstanceName[1].m_pString = 0;
          v33->unTotalInstanceWeight += v40;
          if ( pInstances != 0 )
          {
            v43 = 0;
            v44 = 0;
            if ( pInstances->m_Size > 0 )
            {
              while ( 1 )
              {
                v45 = CUtlString::Get(&pInstances->m_Memory.m_pMemory[v43].sInstanceName);
                if ( V_stricmp_fast(v45, v37) == 0 )
                  break;
                ++v44;
                ++v43;
                if ( v44 >= pInstances->m_Size )
                  goto LABEL_87;
              }
              v46 = &pInstances->m_Memory.m_pMemory[v43];
              p_sInstanceName[1].m_pString = v46;
              if ( v46 == 0 )
              {
LABEL_88:
                nChallengeID = v33->nChallengeID;
                v73 = CUtlString::Get(&v33->sChallengeName);
                CFmtStrN<256,false>::CFmtStrN(
                  &v140,
                  "Challenge %s (id %u) could not find a challenge instance named '%s'\n",
                  v73,
                  nChallengeID,
                  v37);
                CUtlString::operator+=(sErrorMsg, v140.m_szBuf);
                goto LABEL_54;
              }
            }
            else
            {
LABEL_87:
              if ( p_sInstanceName[1].m_pString == 0 )
                goto LABEL_88;
            }
          }
        }
      }
      if ( v33->vecInstances.m_Size == 0 )
      {
        v96 = v33->nChallengeID;
        v97 = CUtlString::Get(&v33->sChallengeName);
        CFmtStrN<256,false>::CFmtStrN(&v139, "Challenge %s (id %u) has no challenge instances specified\n", v97, v96);
        CUtlString::operator+=(sErrorMsg, v139.m_szBuf);
        goto LABEL_54;
      }
      v47 = KeyValues::FindKey(NextTrueSubKey, "prerequisites", 0);
      if ( v47 != 0 )
      {
        for ( k = KeyValues::GetFirstValue(v47); k != 0; k = KeyValues::GetNextValue(k) )
        {
          v48 = KeyValues::GetName(k);
          v49 = 0;
          while ( 1 )
          {
            v121 = v49;
            if ( V_stricmp_fast(v48, ParseQuestPrerequisite(char const*)::pszPrequisites[v49]) == 0 )
              break;
            if ( ++v49 == 3 )
            {
              v50 = KeyValues::GetName(k);
              v51 = v33->nChallengeID;
              v52 = CUtlString::Get(&v33->sChallengeName);
              v53 = &v138;
              CFmtStrN<256,false>::CFmtStrN(
                &v138,
                "Challenge %s (id %u) has an unknown prerequisite type - %s\n",
                v52,
                v51,
                v50);
              goto LABEL_53;
            }
          }
          v74 = KeyValues::GetString(k, 0, "", 0, 0);
          v75 = v74;
          if ( v74 == 0
            || (v130.key = v74,
                (v76 = CUtlRBTree<CUtlMap<char const*,unsigned int,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,unsigned int,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,unsigned int,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::Find(
                         &element.m_Elements.m_Tree,
                         &v130)) == -1) )
          {
            v94 = v33->nChallengeID;
            v95 = CUtlString::Get(&v33->sChallengeName);
            CFmtStrN<256,false>::CFmtStrN(
              &v137,
              "Challenge %s (id %u) references a challenge that can't be found - %s\n",
              v95,
              v94,
              v75);
            CUtlString::operator+=(sErrorMsg, v137.m_szBuf);
            goto LABEL_54;
          }
          v77 = v33->vecPrerequisites.m_Size;
          elem = element.m_Elements.m_Tree.m_Elements.m_pMemory[v76].m_Data.elem;
          v79 = v33->vecPrerequisites.m_Size;
          if ( v77 == v33->vecPrerequisites.m_Memory.m_nAllocationCount )
          {
            CUtlMemory<challenge_quest_t::challenge_t::prerequisite_t,int>::Grow(&v33->vecPrerequisites.m_Memory, 1);
            v79 = v33->vecPrerequisites.m_Size;
          }
          v33->vecPrerequisites.m_Size = v79 + 1;
          v80 = &v33->vecPrerequisites.m_Memory.m_pMemory[v77];
          if ( v80 != 0 )
          {
            v80->m_nChallengeID = elem;
            v80->m_ePrerequisite = v121;
          }
        }
      }
      v81 = KeyValues::FindKey(NextTrueSubKey, "on_completion", 0);
      if ( v81 != 0 )
      {
        FirstSubKey = KeyValues::GetFirstSubKey(v81);
        if ( FirstSubKey != 0 )
          break;
      }
LABEL_121:
      v92 = pQuest->vecChallenges.m_Size;
      if ( v92 == pQuest->vecChallenges.m_Memory.m_nAllocationCount )
        CUtlMemory<challenge_quest_t::challenge_t *,int>::Grow(&pQuest->vecChallenges.m_Memory, 1);
      ++pQuest->vecChallenges.m_Size;
      v93 = &pQuest->vecChallenges.m_Memory.m_pMemory[v92];
      if ( v93 != 0 )
        *v93 = v33;
      NextTrueSubKey = KeyValues::GetNextTrueSubKey(NextTrueSubKey);
      if ( NextTrueSubKey == 0 )
        goto LABEL_126;
    }
    while ( 1 )
    {
      FirstValue = KeyValues::GetFirstValue(FirstSubKey);
      if ( FirstValue != 0 )
        break;
LABEL_120:
      FirstSubKey = KeyValues::GetNextKey(FirstSubKey);
      if ( FirstSubKey == 0 )
        goto LABEL_121;
    }
    while ( 1 )
    {
      v125 = KeyValues::GetName(FirstValue);
      v82 = 0;
      while ( V_stricmp_fast(v125, *(&ParseQuestCompleteAction(char const*)::pszActions + v82)) != 0 )
      {
        if ( ++v82 == 7 )
        {
          v126 = 7;
          goto LABEL_106;
        }
      }
      v126 = v82;
LABEL_106:
      v83 = KeyValues::GetName(FirstSubKey);
      v115 = V_atoi(v83);
      if ( v126 == 7 )
      {
        v98 = KeyValues::GetName(FirstValue);
        v99 = v33->nChallengeID;
        v100 = CUtlString::Get(&v33->sChallengeName);
        CFmtStrN<256,false>::CFmtStrN(
          &v136,
          "Challenge %s (id %u) has an unknown completion action type - %s\n",
          v100,
          v99,
          v98);
        CUtlString::operator+=(sErrorMsg, v136.m_szBuf);
        goto LABEL_54;
      }
      v84 = &v132;
      if ( v126 == 5 )
        v84 = &v133;
      v85 = KeyValues::GetString(FirstValue, 0, "", 0, 0);
      v86 = *v85;
      if ( *v85 != 0 )
        break;
LABEL_114:
      v89 = V_atoi(v85);
LABEL_115:
      v90 = v33->vecCompleteActions.m_Size;
      if ( v90 == v33->vecCompleteActions.m_Memory.m_nAllocationCount )
        CUtlMemory<challenge_quest_t::challenge_t::complete_action_t,int>::Grow(&v33->vecCompleteActions.m_Memory, 1);
      ++v33->vecCompleteActions.m_Size;
      v91 = &v33->vecCompleteActions.m_Memory.m_pMemory[v90];
      if ( v91 != 0 )
      {
        v91[1] = v89;
        *v91 = v126;
        v91[2] = v115;
      }
      FirstValue = KeyValues::GetNextValue(FirstValue);
      if ( FirstValue == 0 )
        goto LABEL_120;
    }
    v87 = v85;
    while ( 1 )
    {
      while ( 1 )
      {
        v88 = v86 - 9;
        if ( v88 > 0x17 || ((1LL << v88) & 0x80001F) == 0 )
          break;
        v86 = *++v87;
        if ( *v87 == 0 )
          goto LABEL_114;
      }
      if ( (v86 - 48) > 9u )
        break;
      v86 = *++v87;
      if ( *v87 == 0 )
        goto LABEL_114;
    }
    m_Root = v84->m_Elements.m_Tree.m_Root;
    v131[0] = v85;
    if ( m_Root != -1 )
    {
      v107 = v84->m_Elements.m_Tree.m_Elements.m_pMemory;
      while ( 1 )
      {
        while ( 1 )
        {
          v108 = m_Root;
          if ( !v84->m_Elements.m_Tree.m_LessFunc.m_LessFunc(v131, &v107[v108].m_Data.key) )
            break;
          v107 = v84->m_Elements.m_Tree.m_Elements.m_pMemory;
          m_Root = v107[m_Root].m_Left;
          if ( m_Root == -1 )
            goto LABEL_150;
        }
        if ( !v84->m_Elements.m_Tree.m_LessFunc.m_LessFunc(
                &v84->m_Elements.m_Tree.m_Elements.m_pMemory[v108].m_Data.key,
                v131) )
          break;
        v107 = v84->m_Elements.m_Tree.m_Elements.m_pMemory;
        m_Root = v107[v108].m_Right;
        if ( m_Root == -1 )
          goto LABEL_150;
      }
      v89 = v84->m_Elements.m_Tree.m_Elements.m_pMemory[v108].m_Data.elem;
      goto LABEL_115;
    }
LABEL_150:
    v109 = KeyValues::GetName(FirstValue);
    v110 = KeyValues::GetString(FirstValue, 0, "", 0, 0);
    s2a = v33->nChallengeID;
    v111 = CUtlString::Get(&v33->sChallengeName);
    v53 = &v135;
    CFmtStrN<256,false>::CFmtStrN(
      &v135,
      "Challenge %s (id %u) references unknown value %s for completion action %s\n",
      v111,
      s2a,
      v110,
      v109);
LABEL_53:
    CUtlString::operator+=(sErrorMsg, v53->m_szBuf);
LABEL_54:
    v54 = KeyValues::GetName(NextTrueSubKey);
    v55 = CUtlString::Get(&pQuest->sQuestName);
    CFmtStrN<256,false>::CFmtStrN(&v140, "Quest %s failed to parse challenge %s\n", v55, v54);
    CUtlString::operator+=(sErrorMsg, v140.m_szBuf);
    challenge_quest_t::challenge_t::~challenge_t(v33);
    operator delete(v33);
LABEL_55:
    v56 = 0;
LABEL_56:
    CUtlDict<unsigned int,int>::Purge(&element);
    CUtlRBTree<CUtlMap<char const*,unsigned int,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,unsigned int,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,unsigned int,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::Purge(&element.m_Elements.m_Tree);
    if ( (element.m_Elements.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,unsigned int,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>::Purge(&element.m_Elements.m_Tree.m_Elements);
LABEL_58:
    CUtlDict<int,int>::Purge(&v133);
    CUtlRBTree<CUtlMap<char const*,int,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,int,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,int,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::Purge(&v133.m_Elements.m_Tree);
    if ( (v133.m_Elements.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,int,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>::Purge(&v133.m_Elements.m_Tree.m_Elements);
    CUtlDict<int,int>::Purge(&v132);
    CUtlRBTree<CUtlMap<char const*,int,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,int,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,int,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::Purge(&v132.m_Elements.m_Tree);
    if ( (v132.m_Elements.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,int,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>::Purge(&v132.m_Elements.m_Tree.m_Elements);
    if ( v56 )
    {
      v57 = pOutQuests->m_Size;
      if ( v57 <= 0 )
        goto LABEL_68;
      v58 = pOutQuests->m_Memory.m_pMemory;
      nQuestID = pQuest->nQuestID;
      if ( nQuestID != (*v58)->nQuestID )
      {
        v60 = (v58 + 1);
        v61 = &v60[(v57 - 1)];
        while ( v60 != v61 )
        {
          v62 = *v60++;
          if ( *(v62 + 48) == nQuestID )
            goto LABEL_76;
        }
LABEL_68:
        v63 = pOutQuests->m_Size;
        if ( pOutQuests->m_Memory.m_nAllocationCount == v57 )
        {
          CUtlMemory<challenge_quest_t *,int>::Grow(&pOutQuests->m_Memory, 1);
          v63 = pOutQuests->m_Size;
        }
        pOutQuests->m_Size = v63 + 1;
        v64 = &pOutQuests->m_Memory.m_pMemory[v57];
        if ( v64 != 0 )
          *v64 = pQuest;
        pkvQuest = KeyValues::GetNextKey(pkvQuest);
        if ( pkvQuest == 0 )
          return 1;
        continue;
      }
LABEL_76:
      v65 = 0;
      v66 = CUtlString::Get(&pQuest->sQuestName);
      CFmtStrN<256,false>::CFmtStrN(&v140, "Quest %s has duplicate quest ID: %u\n", v66, nQuestID);
      v67 = 0;
      CUtlString::operator+=(sErrorMsg, v140.m_szBuf);
      challenge_quest_t::~challenge_quest_t(pQuest);
      operator delete(pQuest);
      if ( pOutQuests->m_Size > 0 )
      {
        do
        {
          v68 = pOutQuests->m_Memory.m_pMemory;
          v69 = v68[v65];
          if ( v69 != 0 )
          {
            challenge_quest_t::~challenge_quest_t(v68[v65]);
            operator delete(v69);
          }
          ++v67;
          ++v65;
        }
        while ( v67 < pOutQuests->m_Size );
      }
      v70 = (pOutQuests->m_Memory.m_nGrowSize & 0xC0000000) == 0;
      pOutQuests->m_Size = 0;
      if ( v70 )
      {
        if ( pOutQuests->m_Memory.m_pMemory != 0 )
        {
          (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
          pOutQuests->m_Memory.m_pMemory = 0;
        }
        pOutQuests->m_Memory.m_nAllocationCount = 0;
      }
      return 0;
    }
    break;
  }
  v101 = 0;
  v102 = KeyValues::GetName(pkvQuest);
  CFmtStrN<256,false>::CFmtStrN(&v140, "Failed to parse quest %s\n", v102);
  v103 = 0;
  CUtlString::operator+=(sErrorMsg, v140.m_szBuf);
  challenge_quest_t::~challenge_quest_t(pQuest);
  operator delete(pQuest);
  if ( pOutQuests->m_Size > 0 )
  {
    do
    {
      v104 = pOutQuests->m_Memory.m_pMemory;
      v105 = v104[v101];
      if ( v105 != 0 )
      {
        challenge_quest_t::~challenge_quest_t(v104[v101]);
        operator delete(v105);
      }
      ++v103;
      ++v101;
    }
    while ( v103 < pOutQuests->m_Size );
  }
  v70 = (pOutQuests->m_Memory.m_nGrowSize & 0xC0000000) == 0;
  pOutQuests->m_Size = 0;
  if ( !v70 )
    return 0;
  if ( pOutQuests->m_Memory.m_pMemory != 0 )
  {
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
    pOutQuests->m_Memory.m_pMemory = 0;
  }
  pOutQuests->m_Memory.m_nAllocationCount = 0;
  return v56;
}


// DumpChallengeInstances  (line 2059, @0x0000000002671d20, libserver.so)  // inlines: operator[]
// calls: CUtlString::Get, DevMsg(char const*,...)
// strings: "Challenge Name: %s\n", "  Challenge Type: %d\n", "  Challenge Tier: %d\n", "  Var %s Index%d\n", "    Val %d Weight %d Rank %d\n"
void __fastcall DumpChallengeInstances(
        CUtlVector<challenge_instance_t,CUtlMemory<challenge_instance_t,int> > *pInstances)
{
  challenge_instance_t *v1; // r13
  const char *v2; // rax
  __int64 v3; // r12
  int v4; // r15d
  challenge_var_set_t *v5; // r14
  int nVarIndex; // ebx
  const char *v7; // rax
  int v8; // edx
  __int64 v9; // rbx
  challenge_var_set_t::var_value_t *v10; // rax
  __int64 v12; // [rsp+10h] [rbp-40h]
  int i; // [rsp+18h] [rbp-38h]
  int nVar; // [rsp+1Ch] [rbp-34h]

  v12 = 0;
  for ( i = 0; pInstances->m_Size > i; ++v12 )
  {
    v1 = &pInstances->m_Memory.m_pMemory[v12];
    if ( v1 != 0 )
    {
      v2 = CUtlString::Get(&pInstances->m_Memory.m_pMemory[v12].sInstanceName);
      DevMsg("Challenge Name: %s\n", v2);
      DevMsg("  Challenge Type: %d\n", v1->nChallengeType);
      DevMsg("  Challenge Tier: %d\n", v1->nChallengeTier);
      if ( v1->vecVariables.m_Size > 0 )
      {
        v3 = 0;
        nVar = 0;
        do
        {
          v4 = 0;
          v5 = &v1->vecVariables.m_Memory.m_pMemory[v3];
          nVarIndex = v5->nVarIndex;
          v7 = CUtlString::Get(&v5->sVarName);
          v8 = nVarIndex;
          v9 = 0;
          DevMsg("  Var %s Index%d\n", v7, v8);
          if ( v5->vecValues.m_Size > 0 )
          {
            do
            {
              ++v4;
              v10 = &v5->vecValues.m_Memory.m_pMemory[v9++];
              DevMsg("    Val %d Weight %d Rank %d\n", v10->nVarValue, v10->nVarWeight, v10->nVarRank);
            }
            while ( v5->vecValues.m_Size > v4 );
          }
          ++nVar;
          ++v3;
        }
        while ( v1->vecVariables.m_Size > nVar );
      }
    }
    ++i;
  }
}


// GetRerollRulesForEvent  (line 2092, @0x0000000002671e60, libserver.so)
bool __fastcall GetRerollRulesForEvent(
        const CDOTAPlayerChallenge *const challenge,
        uint32 *pnRerollTimer,
        uint32 *pnRerollBackupSpacing)
{
  Elf64_Rela *v3; // rax

  v3 = &stru_13560;
  if ( *(challenge + 10) != 2 )
    v3 = &stru_93A80;
  *pnRerollTimer = v3;
  *pnRerollBackupSpacing = 100;
  return 1;
}


// CanChallengeBeRerolled  (line 2117, @0x0000000002671e90, libserver.so)  // inlines: GetRerollRulesForEvent
// callers: CDOTAChallengeSystem::ClientMsg_ChallengeReroll
bool __fastcall CanChallengeBeRerolled(const CDOTAPlayerChallenge *const challenge, uint32 *pnTimeRerollIsAvailable)
{
  unsigned int v2; // edx
  bool result; // al
  Elf64_Rela *v4; // rdx
  uint32 v5; // edx

  if ( pnTimeRerollIsAvailable != 0 )
    *pnTimeRerollIsAvailable = 0;
  v2 = *(challenge + 10);
  result = 0;
  if ( v2 == 2 )
  {
    v4 = &stru_13560;
    if ( (*(challenge + 72) & 2) != 0 )
      return result;
  }
  else
  {
    if ( (*(challenge + 72) & 2) != 0 || v2 > 0x63 )
      return result;
    v4 = &stru_93A80;
  }
  v5 = *(challenge + 14) + v4;
  result = 1;
  if ( v5 >= CRTime::sm_nTimeCur )
  {
    if ( pnTimeRerollIsAvailable != 0 )
    {
      *pnTimeRerollIsAvailable = v5;
      return 0;
    }
    else
    {
      return 0;
    }
  }
  return result;
}


// GetDOTAPlayerChallenge  (line 2165, @0x0000000002671f00, libserver.so)  // inlines: FindTypeCache, GetObject, operator[]
// calls: CDOTA_PlayerResource::GetSteamID, GCClientSystem, CGCClientSystem::GetSOCache, GCSDK::CSharedObjectCache::FindBaseTypeCache
// callers: CDOTAChallengeSystem::ClientMsg_ChallengeReroll, CIngameEvent_Base::GetPlayerCompendiumChallenge
// globals: g_pDOTAPlayerResource
CDOTAPlayerChallenge *__fastcall GetDOTAPlayerChallenge(CDOTAPlayer *pPlayer, uint32 unEventID, uint32 unSequenceID)
{
  int v5; // eax
  GCSDK::SOID_t::ID_t SteamID; // r13
  CGCClientSystem *v7; // rax
  GCSDK::CGCClientSharedObjectCache *SOCache; // rax
  GCSDK::CSharedObjectTypeCache *BaseTypeCache; // rax
  int m_Size; // edi
  GCSDK::CSharedObject **m_pMemory; // r8
  int v12; // ecx
  CDOTAPlayerChallenge *result; // rax
  GCSDK::SOID_t v14; // 0:rsi.8,8:rdx.8

  v5 = (*(pPlayer->_vptr_IHandleEntity + 393))(pPlayer);
  SteamID = CDOTA_PlayerResource::GetSteamID(g_pDOTAPlayerResource, v5);
  v7 = GCClientSystem();
  v14.m_id = SteamID;
  *&v14.m_type = 1;
  SOCache = CGCClientSystem::GetSOCache(v7, v14);
  if ( SOCache == 0 )
    return 0;
  BaseTypeCache = GCSDK::CSharedObjectCache::FindBaseTypeCache(SOCache, 2010);
  if ( BaseTypeCache == 0 )
    return 0;
  m_Size = BaseTypeCache->m_vecObjects.m_Size;
  if ( m_Size == 0 )
    return 0;
  m_pMemory = BaseTypeCache->m_vecObjects.m_Memory.m_pMemory;
  v12 = 0;
  while ( 1 )
  {
    result = m_pMemory[v12];
    if ( result != 0 && unEventID == *(result + 9) && unSequenceID == *(result + 16) )
      break;
    if ( ++v12 == m_Size )
      return 0;
  }
  return result;
}


// GetDOTAPlayerQuestChallenge  (line 2191, @0x0000000002671fb0, libserver.so)  // inlines: FindTypeCache, GetObject, operator[]
// calls: CDOTA_PlayerResource::GetSteamID, GCClientSystem, CGCClientSystem::GetSOCache, GCSDK::CSharedObjectCache::FindBaseTypeCache
// callers: CDOTAChallengeSystem::HandleQuestSelectForPlayer
// globals: g_pDOTAPlayerResource
CDOTAPlayerChallenge *__fastcall GetDOTAPlayerQuestChallenge(
        CDOTAPlayer *pPlayer,
        uint32 unQuestID,
        uint32 unChallengeID)
{
  int v5; // eax
  GCSDK::SOID_t::ID_t SteamID; // r13
  CGCClientSystem *v7; // rax
  GCSDK::CGCClientSharedObjectCache *SOCache; // rax
  GCSDK::CSharedObjectTypeCache *BaseTypeCache; // rax
  int m_Size; // edi
  GCSDK::CSharedObject **m_pMemory; // rdx
  int v12; // ecx
  CDOTAPlayerChallenge *result; // rax
  GCSDK::SOID_t v14; // 0:rsi.8,8:rdx.8

  v5 = (*(pPlayer->_vptr_IHandleEntity + 393))(pPlayer);
  SteamID = CDOTA_PlayerResource::GetSteamID(g_pDOTAPlayerResource, v5);
  v7 = GCClientSystem();
  v14.m_id = SteamID;
  *&v14.m_type = 1;
  SOCache = CGCClientSystem::GetSOCache(v7, v14);
  if ( SOCache == 0 )
    return 0;
  BaseTypeCache = GCSDK::CSharedObjectCache::FindBaseTypeCache(SOCache, 2010);
  if ( BaseTypeCache == 0 )
    return 0;
  m_Size = BaseTypeCache->m_vecObjects.m_Size;
  if ( m_Size == 0 )
    return 0;
  m_pMemory = BaseTypeCache->m_vecObjects.m_Memory.m_pMemory;
  v12 = 0;
  while ( 1 )
  {
    result = m_pMemory[v12];
    if ( result != 0 && (*(result + 72) & 2) != 0 && unQuestID == *(result + 9) && unChallengeID == *(result + 10) )
      break;
    if ( ++v12 == m_Size )
      return 0;
  }
  return result;
}


// TI2015_GetTeamLevelSplashBonus  (line 2220, @0x0000000002672060, libserver.so)
uint32 __fastcall TI2015_GetTeamLevelSplashBonus(uint32 unTeamLevel)
{
  uint32 result; // eax

  result = unTeamLevel / 0x64 + 5;
  if ( result > 0xA )
    return 10;
  return result;
}


// TI2015_GetCoinBonusRate  (line 2233, @0x0000000002672080, libserver.so)
uint32 __fastcall TI2015_GetCoinBonusRate(uint32 unCompendiumLevel)
{
  const unsigned int *v1; // rax
  int v2; // edx

  v1 = TI2015_GetCoinBonusRate(unsigned int)::unLevelToRate[1];
  v2 = 1;
  while ( *v1 <= unCompendiumLevel )
  {
    ++v2;
    v1 += 2;
    if ( v2 == 7 )
      return 1000;
  }
  return TI2015_GetCoinBonusRate(unsigned int)::unLevelToRate[v2 - 1][1];
}


// TI2015_GetChallengeCoinsValue  (line 2262, @0x00000000026720c0, libserver.so)
uint32 __fastcall TI2015_GetChallengeCoinsValue(uint32 unChallengeTier, bool bIsJackpot)
{
  int v2; // eax
  uint32 result; // eax

  if ( unChallengeTier >= 0xA )
    unChallengeTier -= 9;
  v2 = -(unChallengeTier < 2);
  LOBYTE(v2) = v2 & 0x38;
  result = v2 + 300;
  if ( bIsJackpot )
    result *= 3;
  return result;
}


// TI2015_GetCompletedChallengeCoins  (line 2286, @0x00000000026720f0, libserver.so)  // inlines: TI2015_GetChallengeCoinsValue, TI2015_GetCoinBonusRate, TI2015_GetTeamLevelSplashBonus
// calls: RandomFloat
// callers: CIngameEvent_Base::SetPlayerCompendiumChallengeCompleted
void __fastcall TI2015_GetCompletedChallengeCoins(
        uint32 unChallengeTier,
        uint32 unCompendiumLevel,
        uint32 unTeamCompendiumLevel,
        uint32 *pnOwnerCoins,
        uint32 *pnSplashCoins)
{
  float v10; // xmm0_4
  int v11; // r9d
  const unsigned int *v12; // rdi
  int v13; // r10d
  int v14; // r10d
  unsigned int v15; // eax
  uint32 v16; // r10d
  uint32 v17; // r12d

  v10 = RandomFloat(0.0, 1.0);
  if ( unChallengeTier >= 0xA )
    unChallengeTier -= 9;
  v11 = 1;
  v12 = TI2015_GetCoinBonusRate(unsigned int)::unLevelToRate[1];
  v13 = -(unChallengeTier < 2);
  LOBYTE(v13) = v13 & 0x38;
  v14 = v13 + 300;
  if ( v10 <= 0.050000001 )
    v14 *= 3;
  while ( unCompendiumLevel >= *v12 )
  {
    ++v11;
    v12 += 2;
    if ( v11 == 7 )
    {
      v15 = 1000;
      goto LABEL_8;
    }
  }
  v15 = TI2015_GetCoinBonusRate(unsigned int)::unLevelToRate[v11 - 1][1];
LABEL_8:
  v16 = v15 * v14 / 0x64;
  *pnOwnerCoins = v16;
  v17 = unTeamCompendiumLevel / 0x64 + 5;
  if ( v17 > 0xA )
    v17 = 10;
  *pnSplashCoins = v17 * v16 / 0x64;
}


// TI2015_GetChallengePointsValue  (line 2302, @0x00000000026721e0, libserver.so)
// callers: CIngameEvent_Base::SetPlayerCompendiumChallengeCompleted
uint32 __fastcall TI2015_GetChallengePointsValue(uint32 unChallengeTier, uint32 unSlot)
{
  uint32 result; // eax

  result = 0;
  if ( unSlot == 3 )
  {
    LOBYTE(result) = 50;
    if ( unChallengeTier != 11 )
      return 25;
  }
  return result;
}


// TI2015_GetTeamCompendiumLevelTrophy  (line 2318, @0x0000000002672200, libserver.so)
bool __fastcall TI2015_GetTeamCompendiumLevelTrophy(uint32 unTeamCompendiumLevel, CUtlString *psTrophyFile)
{
  return 0;
}


// EncodeProfileCardHero  (line 2333, @0x0000000002672210, libserver.so)
// local variable allocation has failed, the output may be wrong!
uint64 __fastcall EncodeProfileCardHero(int nHeroID, EProfileCardHeroStyle eHeroStyle)
{
  return nHeroID | (*&eHeroStyle << 32);
}


// DecodeProfileCardHero  (line 2339, @0x0000000002672230, libserver.so)
void __fastcall DecodeProfileCardHero(uint64 unValue, int *const nHeroID, EProfileCardHeroStyle *const eHeroStyle)
{
  *nHeroID = unValue;
  *eHeroStyle = SHIDWORD(unValue);
}


// GetBadgeLevelFromPoints  (line 2348, @0x0000000002672240, libserver.so)
uint32 __fastcall GetBadgeLevelFromPoints(uint32 unBadgePoints)
{
  return unBadgePoints / 0x64 + 1;
}


// GetBadgeLevelProgress  (line 2353, @0x0000000002672260, libserver.so)  // inlines: GetBadgeLevelFromPoints, GetBadgePointsEarnedThisLevel
float __fastcall GetBadgeLevelProgress(uint32 unBadgePoints)
{
  return (unBadgePoints + 100 - 100 * (unBadgePoints / 0x64 + 1)) / 100.0;
}


// GetBadgePointsEarnedThisLevel  (line 2359, @0x0000000002672290, libserver.so)  // inlines: GetBadgeLevelFromPoints
uint32 __fastcall GetBadgePointsEarnedThisLevel(uint32 unBadgePoints)
{
  return unBadgePoints + 100 - 100 * (unBadgePoints / 0x64 + 1);
}


// IsPublicChatChannelType  (line 2366, @0x00000000026722c0, libserver.so)
bool __fastcall IsPublicChatChannelType(DOTAChatChannelType_t nChannelType)
{
  return nChannelType <= DOTAChatChannelType_t::DOTAChannelType_Custom
      || nChannelType == DOTAChatChannelType_t::DOTAChannelType_CustomGame
      || (nChannelType - 19) <= 1
      || nChannelType == DOTAChatChannelType_t::DOTAChannelType_Private;
}


// DoesChatChannelTypeAllowOverflow  (line 2376, @0x00000000026722f0, libserver.so)  // inlines: IsPublicChatChannelType
bool __fastcall DoesChatChannelTypeAllowOverflow(DOTAChatChannelType_t nChannelType)
{
  return (nChannelType <= DOTAChatChannelType_t::DOTAChannelType_Custom
       || nChannelType == DOTAChatChannelType_t::DOTAChannelType_CustomGame
       || (nChannelType - 19) <= 1)
      && nChannelType != DOTAChatChannelType_t::DOTAChannelType_Private;
}


// StripInstanceNumberFromChatChannelName  (line 2381, @0x0000000002672320, libserver.so)  // inlines: CUtlString
// calls: CUtlString::Set, CUtlString::GetForModify, V_UnicodeAdvance(char *,int), V_UTF8CharsToUTF32, CUtlString::FreeMemoryBlock, _Unwind_Resume
CUtlString __fastcall StripInstanceNumberFromChatChannelName(CUtlString *a1, const char *pszCompoundChannelName)
{
  char *v3; // r14
  char *v4; // rbx
  int v5; // r13d
  char *v6; // r12
  wchar_t wszCharacter[16]; // [rsp+10h] [rbp-40h] BYREF

  a1->m_pString = 0;
  CUtlString::Set(a1, pszCompoundChannelName);
  v3 = 0;
  v4 = CUtlString::GetForModify(a1);
  v5 = 512;
  if ( *v4 != 0 )
  {
    while ( 1 )
    {
      v6 = V_UnicodeAdvance(v4, 1);
      memset(wszCharacter, 0, 12);
      V_UTF8CharsToUTF32(v4, 1, wszCharacter, 12, 4);
      if ( wszCharacter[0] == 8209 )
        v3 = v4;
      if ( *v6 == 0 )
        break;
      if ( --v5 == 0 )
        break;
      v4 = v6;
    }
    if ( v3 != 0 )
      *v3 = 0;
  }
  return a1;
}


// ParseEventIDFromString  (line 2414, @0x0000000002672400, libserver.so)  // inlines: EEvent_Parse, ParseNamedEnum<EEvent>, _M_data, _M_dispose, _M_rep, __exchange_and_add, __exchange_and_add_dispatch, __exchange_and_add_single, ~basic_string
// calls: std::string::string(char const*,std::allocator<char> const&), EEvent_descriptor, google::protobuf::internal::ParseNamedEnum(google::protobuf::EnumDescriptor const*,std::string const&,int *), V_atoi, EEvent_IsValid, std::string::_Rep::_M_destroy(std::allocator<char> const&), std::string::_Rep::_M_dispose(std::allocator<char> const&), _Unwind_Resume
EEvent __fastcall ParseEventIDFromString(const char *pszEventID)
{
  google::protobuf::internal *v2; // rax
  int *v3; // rcx
  char v4; // al
  EEvent v5; // ebx
  __int64 v6; // rdi
  EEvent v7; // edx
  __int32 v8; // ebx
  bool IsValid; // al
  int v11; // edx
  int v12; // ecx
  char v13; // [rsp+Ch] [rbp-44h]
  char v14; // [rsp+1Ah] [rbp-36h] BYREF
  EEvent v15; // [rsp+1Ch] [rbp-34h] BYREF
  _QWORD v16[6]; // [rsp+20h] [rbp-30h] BYREF

  std::string::string(v16, pszEventID, &v14);
  v2 = EEvent_descriptor();
  v4 = google::protobuf::internal::ParseNamedEnum(v2, v16, &v15, v3);
  v5 = EEvent::EVENT_ID_NONE;
  if ( v4 != 0 )
    v5 = v15;
  v6 = v16[0] - 24LL;
  if ( (v16[0] - 24LL) != &std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create != 0 )
    {
      v11 = _InterlockedExchangeAdd((v6 + 16), 0xFFFFFFFF);
    }
    else
    {
      v12 = *(v16[0] - 8LL);
      *(v16[0] - 8LL) = v12 - 1;
      v11 = v12;
    }
    if ( v11 <= 0 )
    {
      v13 = v4;
      std::string::_Rep::_M_destroy(v6, &v15);
      v4 = v13;
    }
  }
  v7 = v5;
  if ( v4 == 0 )
  {
    v8 = V_atoi(pszEventID);
    IsValid = EEvent_IsValid(v8);
    v7 = EEvent::EVENT_ID_NONE;
    if ( IsValid )
      return v8;
  }
  return v7;
}


// CPlayerCardBonusAttributePacked::HasBonus  (line 2429, @0x00000000026724d0, libserver.so)  // inlines: GetBonusValue, end
bool __fastcall CPlayerCardBonusAttributePacked::HasBonus(
        const CPlayerCardBonusAttributePacked *const this,
        int nBonusType)
{
  CPlayerCardBonusAttributePacked::PlayerCardBonus_t *m_pMemory; // rax
  CPlayerCardBonusAttributePacked::PlayerCardBonus_t *v3; // rcx
  CPlayerCardBonusAttributePacked::PlayerCardBonus_t *v4; // rax
  CPlayerCardBonusAttributePacked::PlayerCardBonus_t *v5; // rdx

  m_pMemory = this->m_vecPlayerCardBonuses.m_Memory.m_pMemory;
  v3 = &m_pMemory[this->m_vecPlayerCardBonuses.m_Size];
  if ( m_pMemory == v3 )
    return 0;
  if ( nBonusType != m_pMemory->nBonusType )
  {
    v4 = m_pMemory + 1;
    while ( 1 )
    {
      v5 = v4;
      if ( v3 == v4 )
        break;
      ++v4;
      if ( nBonusType == v5->nBonusType )
        return v4[-1].nValue != -1;
    }
    return 0;
  }
  return m_pMemory->nValue != -1;
}


// CPlayerCardBonusAttributePacked::GetBonusValue  (line 2434, @0x0000000002672520, libserver.so)  // inlines: end
int __fastcall CPlayerCardBonusAttributePacked::GetBonusValue(
        const CPlayerCardBonusAttributePacked *const this,
        int nBonusType)
{
  CPlayerCardBonusAttributePacked::PlayerCardBonus_t *m_pMemory; // rdx
  CPlayerCardBonusAttributePacked::PlayerCardBonus_t *v3; // rdi
  int result; // eax
  CPlayerCardBonusAttributePacked::PlayerCardBonus_t *v5; // rdx
  CPlayerCardBonusAttributePacked::PlayerCardBonus_t *v6; // rcx

  m_pMemory = this->m_vecPlayerCardBonuses.m_Memory.m_pMemory;
  v3 = &m_pMemory[this->m_vecPlayerCardBonuses.m_Size];
  result = -1;
  if ( m_pMemory != v3 )
  {
    result = m_pMemory->nValue;
    if ( nBonusType != m_pMemory->nBonusType )
    {
      v5 = m_pMemory + 1;
      while ( 1 )
      {
        v6 = v5;
        if ( v5 == v3 )
          break;
        ++v5;
        result = v5[-1].nValue;
        if ( nBonusType == v6->nBonusType )
          return result;
      }
      return -1;
    }
  }
  return result;
}


// CPlayerCardBonusAttributePacked::IsCommon  (line 2445, @0x0000000002672570, libserver.so)
bool __fastcall CPlayerCardBonusAttributePacked::IsCommon(const CPlayerCardBonusAttributePacked *const this)
{
  return this->m_vecPlayerCardBonuses.m_Size == 0;
}


// CPlayerCardBonusAttributePacked::IsSilver  (line 2450, @0x0000000002672580, libserver.so)
bool __fastcall CPlayerCardBonusAttributePacked::IsSilver(const CPlayerCardBonusAttributePacked *const this)
{
  return this->m_vecPlayerCardBonuses.m_Size == 3;
}


// CPlayerCardBonusAttributePacked::IsGold  (line 2455, @0x0000000002672590, libserver.so)
bool __fastcall CPlayerCardBonusAttributePacked::IsGold(const CPlayerCardBonusAttributePacked *const this)
{
  return this->m_vecPlayerCardBonuses.m_Size == 5;
}


// CPlayerCardBonusAttributePacked::AddBonus  (line 2461, @0x00000000026897d0, libserver.so)  // inlines: AddToTail, CopyConstruct<CPlayerCardBonusAttributePacked::PlayerCardBonus_t>, Element, GrowMemory, SortPredicate<CPlayerCardBonusAttributePacked::AddBonus(int, int)::__lambda36>, __final_insertion_sort<CPlayerCardBonusAttributePacked::PlayerCardBonus_t*, CPlayerCardBonusAttributePacked::AddBonus(int, int)::__lambda36>, __lg, __unguarded_insertion_sort<CPlayerCardBonusAttributePacked::PlayerCardBonus_t*, CPlayerCardBonusAttributePacked::AddBonus(int, int)::__lambda36>, __unguarded_linear_insert<CPlayerCardBonusAttributePacked::PlayerCardBonus_t*, CPlayerCardBonusAttributePacked::AddBonus(int, int)::__lambda36>, operator[], sort<CPlayerCardBonusAttributePacked::PlayerCardBonus_t*, CPlayerCardBonusAttributePacked::AddBonus(int, int)::__lambda36>
// calls: std::__introsort_loop<CPlayerCardBonusAttributePacked::PlayerCardBonus_t*, long int, CPlayerCardBonusAttributePacked::AddBonus(int, int)::__lambda36>, std::__insertion_sort<CPlayerCardBonusAttributePacked::PlayerCardBonus_t*, CPlayerCardBonusAttributePacked::AddBonus(int, int)::__lambda36>, CUtlMemory<CPlayerCardBonusAttributePacked::PlayerCardBonus_t, int>::Grow
// callers: CPlayerCardBonusAttributePacked::FromPacked
void __fastcall CPlayerCardBonusAttributePacked::AddBonus(
        CPlayerCardBonusAttributePacked *const this,
        int nBonusType,
        int nValue)
{
  __int64 m_Size; // r12
  int v6; // eax
  CPlayerCardBonusAttributePacked::PlayerCardBonus_t *m_pMemory; // r13
  int v8; // ecx
  CPlayerCardBonusAttributePacked::PlayerCardBonus_t *v9; // rax
  CPlayerCardBonusAttributePacked::PlayerCardBonus_t *v10; // r12
  __int64 v11; // rbx
  unsigned __int64 v12; // rax
  CPlayerCardBonusAttributePacked::PlayerCardBonus_t *v13; // rbx
  int v14; // edi
  CPlayerCardBonusAttributePacked::PlayerCardBonus_t *v15; // rax
  int v16; // esi
  CPlayerCardBonusAttributePacked::PlayerCardBonus_t *i; // rcx
  CPlayerCardBonusAttributePacked::PlayerCardBonus_t *v18; // rax
  int nValuea; // [rsp+Ch] [rbp-24h]

  m_Size = this->m_vecPlayerCardBonuses.m_Size;
  v6 = this->m_vecPlayerCardBonuses.m_Size;
  if ( m_Size == this->m_vecPlayerCardBonuses.m_Memory.m_nAllocationCount )
  {
    nValuea = nValue;
    CUtlMemory<CPlayerCardBonusAttributePacked::PlayerCardBonus_t,int>::Grow(&this->m_vecPlayerCardBonuses.m_Memory, 1);
    v6 = this->m_vecPlayerCardBonuses.m_Size;
    nValue = nValuea;
  }
  m_pMemory = this->m_vecPlayerCardBonuses.m_Memory.m_pMemory;
  v8 = v6 + 1;
  this->m_vecPlayerCardBonuses.m_Size = v6 + 1;
  v9 = &m_pMemory[m_Size];
  if ( v9 != 0 )
  {
    v9->nBonusType = nBonusType;
    v9->nValue = nValue;
    m_pMemory = this->m_vecPlayerCardBonuses.m_Memory.m_pMemory;
    v8 = this->m_vecPlayerCardBonuses.m_Size;
  }
  v10 = &m_pMemory[v8];
  if ( v10 != m_pMemory )
  {
    v11 = 8LL * v8;
    _BitScanReverse64(&v12, v11 >> 3);
    std::__introsort_loop<CPlayerCardBonusAttributePacked::PlayerCardBonus_t *,long,CPlayerCardBonusAttributePacked::AddBonus(int,int)::{lambda(CPlayerCardBonusAttributePacked::PlayerCardBonus_t,CPlayerCardBonusAttributePacked::PlayerCardBonus_t)#1}>(
      m_pMemory,
      &m_pMemory[v11 / 8],
      2 * (63LL - (v12 ^ 0x3F)));
    if ( v11 <= 135 )
    {
      std::__insertion_sort<CPlayerCardBonusAttributePacked::PlayerCardBonus_t *,CPlayerCardBonusAttributePacked::AddBonus(int,int)::{lambda(CPlayerCardBonusAttributePacked::PlayerCardBonus_t,CPlayerCardBonusAttributePacked::PlayerCardBonus_t)#1}>(
        m_pMemory,
        v10);
    }
    else
    {
      v13 = m_pMemory + 16;
      std::__insertion_sort<CPlayerCardBonusAttributePacked::PlayerCardBonus_t *,CPlayerCardBonusAttributePacked::AddBonus(int,int)::{lambda(CPlayerCardBonusAttributePacked::PlayerCardBonus_t,CPlayerCardBonusAttributePacked::PlayerCardBonus_t)#1}>(
        m_pMemory,
        m_pMemory + 16);
      if ( v10 != &m_pMemory[16] )
      {
        do
        {
          while ( 1 )
          {
            v14 = v13->nBonusType;
            v15 = v13 - 1;
            v16 = v13->nValue;
            if ( v13->nBonusType < v13[-1].nBonusType )
              break;
            v18 = v13++;
            v18->nBonusType = v14;
            v18->nValue = v16;
            if ( v10 == v13 )
              return;
          }
          for ( i = v13; ; i = v15-- )
          {
            *i = *v15;
            if ( v14 >= v15[-1].nBonusType )
              break;
          }
          ++v13;
          v15->nBonusType = v14;
          v15->nValue = v16;
        }
        while ( v10 != v13 );
      }
    }
  }
}


// CPlayerCardBonusAttributePacked::GetPacked  (line 2489, @0x00000000026725a0, libserver.so)
// globals: unBonusValueShift
uint64 __fastcall CPlayerCardBonusAttributePacked::GetPacked(const CPlayerCardBonusAttributePacked *const this)
{
  int m_Size; // r8d
  CPlayerCardBonusAttributePacked::PlayerCardBonus_t *m_pMemory; // rdi
  __int64 v3; // rdx
  uint64 result; // rax
  __int64 v5; // rsi
  int nBonusType; // ecx

  m_Size = this->m_vecPlayerCardBonuses.m_Size;
  if ( this->m_vecPlayerCardBonuses.m_Size <= 0 )
    return 0;
  m_pMemory = this->m_vecPlayerCardBonuses.m_Memory.m_pMemory;
  v3 = 0;
  result = 0;
  do
  {
    v5 = m_pMemory[v3].nValue << unBonusValueShift[v3];
    nBonusType = m_pMemory[v3++].nBonusType;
    result |= (1LL << nBonusType << 48) | v5;
  }
  while ( m_Size > v3 );
  return result;
}


// CPlayerCardBonusAttributePacked::FromPacked  (line 2504, @0x0000000002689910, libserver.so)  // inlines: RemoveAll
// calls: CPlayerCardBonusAttributePacked::AddBonus
// globals: ulBonusValueMasks, unBonusValueShift
void __fastcall CPlayerCardBonusAttributePacked::FromPacked(
        CPlayerCardBonusAttributePacked *const this,
        uint64 ulPacked)
{
  int v2; // r15d
  uint64 v5; // r12
  unsigned int v6; // ebx
  __int64 v7; // rax
  int v8; // esi

  v2 = 0;
  v5 = HIWORD(ulPacked);
  v6 = 0;
  this->m_vecPlayerCardBonuses.m_Size = 0;
  do
  {
    while ( !_bittest(&v5, v6) )
    {
      if ( ++v6 == 12 )
        return;
    }
    v7 = v2++;
    v8 = v6++;
    CPlayerCardBonusAttributePacked::AddBonus(this, v8, (ulBonusValueMasks[v7] & ulPacked) >> unBonusValueShift[v7]);
  }
  while ( v6 != 12 );
}


// CalculateCardFantasyScoreForMatch  (line 2526, @0x00000000026727e0, libserver.so)
// calls: CalculateCardFantasyStatScoreForMatch
float __fastcall CalculateCardFantasyScoreForMatch(
        const CMsgDOTAFantasyPlayerStats *const match,
        const CPlayerCardBonusAttributePacked *const packedBonuses)
{
  float v2; // xmm1_4
  DOTAFantasy_Scoring i; // ebx
  DOTAFantasy_Scoring v6; // edx
  float v7; // xmm0_4
  float v9; // [rsp-24h] [rbp-2Ch]

  v2 = 0.0;
  for ( i = DOTAFantasy_Scoring::FANTASY_SCORING_KILLS; i != DOTAFantasy_Scoring::FANTASY_SCORING_TYPES; ++i )
  {
    v6 = i;
    v9 = v2;
    v7 = CalculateCardFantasyStatScoreForMatch(match, packedBonuses, v6);
    v2 = v9 + v7;
  }
  return v9 + v7;
}


// CalculateCardFantasyStatScoreForMatch  (line 2544, @0x0000000002672600, libserver.so)  // inlines: GetBonusValue, GetFantasyScoringFactor, HasBonus, end
// calls: CDOTAEventSchema::Get, CDOTAEventSchema::GetEventDefinition
// callers: CalculateCardFantasyScoreForMatch
// globals: jpt_267263F
float __fastcall CalculateCardFantasyStatScoreForMatch(
        const CMsgDOTAFantasyPlayerStats *const match,
        const CPlayerCardBonusAttributePacked *const packedBonuses,
        DOTAFantasy_Scoring eScoringStat)
{
  CDOTAEventSchema *v6; // rax
  const CDOTAEventDefinition *EventDefinition; // rax
  float v8; // xmm0_4
  float result; // xmm0_4
  CPlayerCardBonusAttributePacked::PlayerCardBonus_t *m_pMemory; // rax
  CPlayerCardBonusAttributePacked::PlayerCardBonus_t *v11; // rdx
  int nValue; // ecx
  CPlayerCardBonusAttributePacked::PlayerCardBonus_t *v13; // rdi
  CPlayerCardBonusAttributePacked::PlayerCardBonus_t *v14; // rax
  CPlayerCardBonusAttributePacked::PlayerCardBonus_t *v15; // rcx
  float v16; // xmm1_4
  CPlayerCardBonusAttributePacked::PlayerCardBonus_t *v17; // rax
  CPlayerCardBonusAttributePacked::PlayerCardBonus_t *v18; // rcx

  v6 = CDOTAEventSchema::Get();
  EventDefinition = CDOTAEventSchema::GetEventDefinition(v6, EEvent::EVENT_ID_WINTER_MAJOR_2017);
  v8 = 0.0;
  switch ( eScoringStat )
  {
    case DOTAFantasy_Scoring::FANTASY_SCORING_KILLS:
      v8 = *(match + 15);
      break;
    case DOTAFantasy_Scoring::FANTASY_SCORING_DEATHS:
      v8 = *(match + 16);
      break;
    case DOTAFantasy_Scoring::FANTASY_SCORING_CS:
      v8 = *(match + 17);
      break;
    case DOTAFantasy_Scoring::FANTASY_SCORING_GPM:
      v8 = *(match + 18);
      break;
    case DOTAFantasy_Scoring::FANTASY_SCORING_TOWER_KILLS:
      v8 = *(match + 19);
      break;
    case DOTAFantasy_Scoring::FANTASY_SCORING_ROSHAN_KILLS:
      v8 = *(match + 20);
      break;
    case DOTAFantasy_Scoring::FANTASY_SCORING_TEAMFIGHT_PARTICIPATION:
      v8 = *(match + 21);
      break;
    case DOTAFantasy_Scoring::FANTASY_SCORING_WARDS_PLANTED:
      v8 = *(match + 22);
      break;
    case DOTAFantasy_Scoring::FANTASY_SCORING_CAMPS_STACKED:
      v8 = *(match + 23);
      break;
    case DOTAFantasy_Scoring::FANTASY_SCORING_RUNES_GRABBED:
      v8 = *(match + 24);
      break;
    case DOTAFantasy_Scoring::FANTASY_SCORING_FIRST_BLOOD:
      v8 = *(match + 25);
      break;
    case DOTAFantasy_Scoring::FANTASY_SCORING_STUNS:
      v8 = *(match + 26);
      break;
    default:
      break;
  }
  result = v8 * *(EventDefinition + eScoringStat + 278);
  if ( eScoringStat == DOTAFantasy_Scoring::FANTASY_SCORING_DEATHS )
    result = 3.0 - result;
  m_pMemory = packedBonuses->m_vecPlayerCardBonuses.m_Memory.m_pMemory;
  v11 = &m_pMemory[packedBonuses->m_vecPlayerCardBonuses.m_Size];
  if ( m_pMemory != v11 )
  {
    nValue = m_pMemory->nValue;
    if ( eScoringStat == m_pMemory->nBonusType )
    {
      if ( nValue != -1 )
      {
        v16 = (nValue / 100.0) + 1.0;
        return result * v16;
      }
    }
    else
    {
      v13 = m_pMemory + 1;
      v14 = m_pMemory + 1;
      while ( 1 )
      {
        v15 = v14;
        if ( v11 == v14 )
          break;
        ++v14;
        if ( eScoringStat == v15->nBonusType )
        {
          if ( v14[-1].nValue == -1 )
            return result;
          v17 = v13;
          do
          {
            v18 = v17;
            if ( v11 == v17 )
            {
              v16 = 0.99000001;
              return result * v16;
            }
            ++v17;
          }
          while ( eScoringStat != v18->nBonusType );
          v16 = (v17[-1].nValue / 100.0) + 1.0;
          return result * v16;
        }
      }
    }
  }
  return result;
}


// YieldingCalculateCardFantasyOwnerScore  (line 2619, @0x0000000002672990, libserver.so)
// calls: YieldingCalculateCardFantasyPlayerScores
float __fastcall YieldingCalculateCardFantasyOwnerScore(
        uint32 unLeagueID,
        AccountID_t unOwnerAccountID,
        RTime32 unTimestamp)
{
  float *v3; // rcx
  float result; // xmm0_4
  float fScores[5]; // [rsp+0h] [rbp-30h] BYREF
  int v6; // [rsp+14h] [rbp-1Ch] BYREF

  memset(fScores, 0, sizeof(fScores));
  YieldingCalculateCardFantasyPlayerScores(
    unLeagueID,
    unOwnerAccountID,
    unTimestamp,
    fScores,
    DOTAFantasy_Scoring::FANTASY_SCORING_INVALID);
  v3 = fScores;
  result = 0.0;
  do
    result = result + *v3++;
  while ( v3 != &v6 );
  return result;
}


// YieldingCalculateCardFantasyPlayerScores  (line 2636, @0x0000000002672840, libserver.so)  // inlines: CPlayerCardBonusAttributePacked, CUtlMemory, CUtlVector, CUtlVectorBase, Purge, RemoveAll, itemid_t, ~CPlayerCardBonusAttributePacked, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CMsgDOTAFantasyPlayerMatchStats::CMsgDOTAFantasyPlayerMatchStats, CUtlMemory<CPlayerCardBonusAttributePacked::PlayerCardBonus_t, int>::Purge, _Unwind_Resume
// callers: YieldingCalculateCardFantasyOwnerScore
void __fastcall YieldingCalculateCardFantasyPlayerScores(
        uint32 unLeagueID,
        AccountID_t unOwnerAccountID,
        RTime32 unTimestamp,
        float *fScores,
        DOTAFantasy_Scoring eScoringStat)
{
  __int64 v5; // r13
  CMsgDOTAFantasyPlayerMatchStats *v6; // r14
  CPlayerCardBonusAttributePacked *v8; // rsi
  CPlayerCardBonusAttributePacked *v9; // rax
  CPlayerCardBonusAttributePacked *v10; // rcx
  signed __int64 v11; // rcx
  itemid_t *v12; // rax
  __int64 *v13; // rdx
  __int64 i; // rax
  CUtlVectorBase<CPlayerCardBonusAttributePacked::PlayerCardBonus_t,CUtlMemory<CPlayerCardBonusAttributePacked::PlayerCardBonus_t,int> >::CAllocator *p_m_Memory; // rbx
  bool v16; // zf
  CPlayerCardBonusAttributePacked *v17; // rbx
  void (__fastcall **v18)(CPlayerCardBonusAttributePacked *, CPlayerCardBonusAttributePacked *, __int64 *); // rax
  CPlayerCardBonusAttributePacked *v19; // rdi
  itemid_t ulPlayerCards[5]; // [rsp+0h] [rbp-1C0h] BYREF
  __int64 v21; // [rsp+28h] [rbp-198h] BYREF
  CPlayerCardBonusAttributePacked packedBonuses[5]; // [rsp+30h] [rbp-190h] BYREF
  __int64 v23; // [rsp+A8h] [rbp-118h] BYREF
  char v24; // [rsp+B0h] [rbp-110h] BYREF
  __int64 v25; // [rsp+170h] [rbp-50h] BYREF

  v5 = 4;
  v6 = &v24;
  do
  {
    CMsgDOTAFantasyPlayerMatchStats::CMsgDOTAFantasyPlayerMatchStats(v6);
    --v5;
    v6 = (v6 + 48);
  }
  while ( v5 != -1 );
  v8 = packedBonuses;
  v9 = packedBonuses;
  do
  {
    v9->m_vecPlayerCardBonuses.m_Size = 0;
    v10 = v9++;
    v9[-1].m_vecPlayerCardBonuses.m_Memory.m_pMemory = 0;
    v11 = v10 - packedBonuses;
    *(&packedBonuses[0].m_vecPlayerCardBonuses.m_Memory.m_nAllocationCount + v11) = 0;
    *(&packedBonuses[0].m_vecPlayerCardBonuses.m_Memory.m_nGrowSize + v11) = 0;
  }
  while ( v9 != &v23 );
  v12 = ulPlayerCards;
  v13 = &v21;
  do
  {
    v12->m_Data = 0;
    ++v12;
  }
  while ( v12 != &v21 );
  for ( i = 0; i != 5; ++i )
    fScores[i] = 0.0;
  p_m_Memory = &packedBonuses[4].m_vecPlayerCardBonuses.m_Memory;
  do
  {
    v16 = (p_m_Memory->m_nGrowSize & 0xC0000000) == 0;
    p_m_Memory[-1].m_nAllocationCount = 0;
    if ( v16 )
    {
      CUtlMemory<CPlayerCardBonusAttributePacked::PlayerCardBonus_t,int>::Purge(p_m_Memory);
      if ( (p_m_Memory->m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<CPlayerCardBonusAttributePacked::PlayerCardBonus_t,int>::Purge(p_m_Memory);
    }
    p_m_Memory = (p_m_Memory - 24);
  }
  while ( p_m_Memory != &ulPlayerCards[4] );
  v17 = &v25;
  do
  {
    v18 = *&v17->m_vecPlayerCardBonuses.m_Size;
    v19 = v17;
    v17 -= 2;
    (*v18)(v19, v8, v13);
  }
  while ( v17 != &packedBonuses[3].m_vecPlayerCardBonuses.m_Memory );
}


// BBotMatchValidForSignOut  (line 2766, @0x00000000026729e0, libserver.so)
// callers: CGCClientJobUploadMatchStats::BYieldingRunJob
bool __fastcall BBotMatchValidForSignOut(const CMsgGameMatchSignOut *pSignOutData)
{
  bool result; // al
  _QWORD *v2; // rdx

  if ( pSignOutData == 0 )
    return 0;
  result = 0;
  if ( (*(pSignOutData + 8) - 300) <= 0x13EC
    && *(pSignOutData + 30) == 0
    && *(pSignOutData + 31) != 0
    && *(pSignOutData + 16) == 2 )
  {
    v2 = *(pSignOutData + 7);
    if ( *(*v2 + 32LL) == 5 )
      return *(v2[1] + 32LL) == 5;
  }
  return result;
}


// ParseDotaTeam  (line 2796, @0x0000000002672a40, libserver.so)  // inlines: V_isempty, V_strlen, V_strncmp<long unsigned int>
// calls: V_stricmp_fast, strlen, _V_strncmp, __stack_chk_fail
// callers: CDOTA_BaseNPC::LoadNPCData
// strings: "DOTA_TEAM_GOODGUYS", "DOTA_TEAM_BADGUYS", "DOTA_TEAM_NEUTRALS", "TEAM_UNASSIGNED", "TEAM_SPECTATOR"
bool __fastcall ParseDotaTeam(const char *pszValue, int *pTeam)
{
  char k_szCustomTeamBase[24]; // [rsp+0h] [rbp-30h] BYREF
  unsigned __int64 v6; // [rsp+18h] [rbp-18h]

  *pTeam = -1;
  v6 = __readfsqword(0x28u);
  if ( pszValue == 0 || *pszValue == 0 )
    return 0;
  if ( V_stricmp_fast(pszValue, "DOTA_TEAM_GOODGUYS") != 0 )
  {
    if ( V_stricmp_fast(pszValue, "DOTA_TEAM_BADGUYS") != 0 )
    {
      if ( V_stricmp_fast(pszValue, "DOTA_TEAM_NEUTRALS") != 0 )
      {
        if ( V_stricmp_fast(pszValue, "TEAM_UNASSIGNED") != 0 )
        {
          if ( V_stricmp_fast(pszValue, "TEAM_SPECTATOR") != 0 )
          {
            strcpy(k_szCustomTeamBase, "DOTA_TEAM_CUSTOM");
            if ( strlen(pszValue) != 17 || _V_strncmp(pszValue, k_szCustomTeamBase, 16) != 0 || (pszValue[16] - 49) > 7u )
              return 0;
            *pTeam = pszValue[16] - 43;
            return 1;
          }
          else
          {
            *pTeam = 1;
            return 1;
          }
        }
        else
        {
          *pTeam = 0;
          return 1;
        }
      }
      else
      {
        *pTeam = 4;
        return 1;
      }
    }
    else
    {
      *pTeam = 3;
      return 1;
    }
  }
  else
  {
    *pTeam = 2;
    return 1;
  }
}


// ParseStartingPositionType  (line 2848, @0x0000000002672bc0, libserver.so)  // inlines: V_strncmp<long unsigned int>, _V_strcmp
// calls: _V_strncmp, __stack_chk_fail
// strings: "RADIANT_JUNGLE", "DIRE_JUNGLE"
bool __fastcall ParseStartingPositionType(const char *pszString, DOTA_STARTING_POSITION_TYPE *pOut)
{
  const char *v4; // rbx
  char k_szPrefix[24]; // [rsp+0h] [rbp-30h] BYREF
  unsigned __int64 v7; // [rsp+18h] [rbp-18h]

  v7 = __readfsqword(0x28u);
  if ( pszString == 0 )
    return 0;
  strcpy(k_szPrefix, "DOTA_STARTING_POSITION_");
  if ( _V_strncmp(pszString, k_szPrefix, 23) != 0 )
    return 0;
  v4 = pszString + 23;
  if ( strcmp(v4, "NONE") == 0 )
  {
    *pOut = DOTA_STARTING_POSITION_TYPE::DOTA_STARTING_POSITION_NONE;
    return 1;
  }
  else if ( strcmp(v4, "TOP") == 0 )
  {
    *pOut = DOTA_STARTING_POSITION_TYPE::DOTA_STARTING_POSITION_TOP;
    return 1;
  }
  else if ( strcmp(v4, "MID") == 0 )
  {
    *pOut = DOTA_STARTING_POSITION_TYPE::DOTA_STARTING_POSITION_MID;
    return 1;
  }
  else if ( strcmp(v4, "BOTTOM") == 0 )
  {
    *pOut = DOTA_STARTING_POSITION_TYPE::DOTA_STARTING_POSITION_BOTTOM;
    return 1;
  }
  else
  {
    if ( strcmp(v4, "RADIANT_JUNGLE") != 0 )
    {
      if ( strcmp(v4, "DIRE_JUNGLE") == 0 )
      {
        *pOut = DOTA_STARTING_POSITION_TYPE::DOTA_STARTING_POSITION_DIRE_JUNGLE;
        return 1;
      }
      return 0;
    }
    *pOut = DOTA_STARTING_POSITION_TYPE::DOTA_STARTING_POSITION_RADIANT_JUNGLE;
    return 1;
  }
}


