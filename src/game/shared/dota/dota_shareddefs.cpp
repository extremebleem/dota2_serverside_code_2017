
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// IsColorBlind  (line 105, @0x000000000266c1b0, libserver.so)
bool __cdecl IsColorBlind()
{
  return 0;
}


// IsColorSelfFocus  (line 110, @0x000000000266c1c0, libserver.so)
bool __cdecl IsColorSelfFocus()
{
  return 0;
}


// SelfHeroColor  (line 116, @0x000000000266c1d0, libserver.so)
// globals: g_FriendlyUnitColor
const Vector *__cdecl SelfHeroColor()
{
  return &g_FriendlyUnitColor;
}


// FriendlyUnitColor  (line 128, @0x000000000266c1e0, libserver.so)
// globals: g_FriendlyUnitColor
const Vector *__cdecl FriendlyUnitColor()
{
  return &g_FriendlyUnitColor;
}


// EnemyUnitColor  (line 144, @0x000000000266c1f0, libserver.so)
// globals: g_EnemyUnitColor
const Vector *__cdecl EnemyUnitColor()
{
  return &g_EnemyUnitColor;
}


// NeutralUnitColor  (line 156, @0x000000000266c200, libserver.so)
// globals: g_NeutralUnitColor
const Vector *__cdecl NeutralUnitColor()
{
  return &g_NeutralUnitColor;
}


// InvalidUnitColor  (line 168, @0x000000000266c210, libserver.so)
// globals: g_InvalidUnitColor
const Vector *__cdecl InvalidUnitColor()
{
  return &g_InvalidUnitColor;
}


// CompileTimeAssertInvalidOrderText  (line 352, @0x000000000266c220, libserver.so)
void __cdecl CompileTimeAssertInvalidOrderText()
{
  ;
}


// CompileTimeAssertAbilityBehaviorText  (line 419, @0x000000000266c230, libserver.so)
void __cdecl CompileTimeAssertAbilityBehaviorText()
{
  ;
}


// CompileTimeAssertNeutralCampTypeText  (line 433, @0x000000000266c240, libserver.so)
void __cdecl CompileTimeAssertNeutralCampTypeText()
{
  ;
}


// CompileTimeAssertRuneTypeText  (line 449, @0x000000000266c250, libserver.so)
void __cdecl CompileTimeAssertRuneTypeText()
{
  ;
}


// UnitFilter  (line 463, @0x000000000266c260, libserver.so)  // inlines: GetTeamNumber, InState, IsConsideredHero, IsInvulnerable
// calls: CBaseModelEntity::CanBeSeenByTeam, CDOTA_BaseNPC::IsInvisibleTo
// callers: CDOTABaseAbility::CastFilterResult, CDOTA_ActionRunner::SelectActionTargets, CDOTA_Ability_SatyrTrickster_Purge::CastFilterResult, CDOTA_ProjectileManager::FrameUpdatePostEntityThink, Script_UnitFilter, Script_FindUnitsInLine, DeAggroUnitsAggroedOn, CancelAttacksOfNPCsAttacking, FindUnitsInRadius, dota_dev, CDOTA_TeamCommander::CalculateLaneFronts, CDOTA_BaseNPC::Teleport (40 total)
int __fastcall UnitFilter(
        CDOTA_BaseNPC *pNPC,
        int iUnitTargetTeam,
        int iUnitTargetType,
        int iUnitTargetFlags,
        int iTeamNumber)
{
  int m_Value; // eax
  bool v7; // r12
  __int64 v8; // rsi
  int result; // eax
  uint32 v10; // esi
  uint32 m_iUnitType; // eax
  char v12; // al
  char v13; // dl
  bool CanBeSeenByTeam; // al
  bool IsInvisibleTo; // al
  bool v16; // dl
  int iTeamNumbera; // [rsp+8h] [rbp-18h]
  int iTeamNumberb; // [rsp+8h] [rbp-18h]
  int iUnitTargetFlagsa; // [rsp+Ch] [rbp-14h]
  int iUnitTargetFlagsb; // [rsp+Ch] [rbp-14h]
  int iUnitTargetFlagsc; // [rsp+Ch] [rbp-14h]

  m_Value = pNPC->m_iTeamNum.m_Value;
  v7 = iTeamNumber == m_Value;
  if ( iTeamNumber == m_Value )
  {
    v8 = iUnitTargetTeam & 1;
    result = 1;
    if ( v8 == 0 )
      return result;
  }
  else
  {
    v8 = iUnitTargetTeam & 2;
    result = 2;
    if ( v8 == 0 )
      return result;
  }
  if ( iUnitTargetType == -1 )
    goto LABEL_70;
  if ( (iUnitTargetType & 1) != 0
    || (v10 = pNPC->m_iUnitType, result = 3, (v10 & 1) == 0) && (v8 = v10 & 3, LOBYTE(result) = 4, v8 == 0) )
  {
    if ( (iUnitTargetType & 2) == 0 )
    {
      m_iUnitType = pNPC->m_iUnitType;
      if ( (m_iUnitType & 0x80u) != 0 && (m_iUnitType & 3) == 0 )
        return 5;
    }
    if ( (iUnitTargetType & 4) != 0 || (result = 6, (pNPC->m_iUnitType & 0x10) == 0) )
    {
      if ( (iUnitTargetType & 0x10) != 0 || (result = 7, (pNPC->m_iUnitType & 0x100) == 0) )
      {
        if ( (iUnitTargetType & 0x20) != 0 || (result = 8, (pNPC->m_iUnitType & 0x193) != 0) )
        {
LABEL_70:
          if ( (iUnitTargetFlags & 0x200) == 0 || (result = 9, !pNPC->m_bIsAncient.m_Value) )
          {
            if ( (iUnitTargetFlags & 0x20000) == 0 || (result = 4, (pNPC->m_iUnitType & 2) == 0) )
            {
              if ( (iUnitTargetFlags & 0x2000) == 0 || (result = 10, !pNPC->m_bIsIllusion.m_Value) )
              {
                if ( (iUnitTargetFlags & 0x1000) == 0 || (result = 11, !pNPC->m_bIsSummoned.m_Value) )
                {
                  if ( (iUnitTargetFlags & 0x800) == 0
                    || (result = 12, (pNPC->m_nUnitState64.m_Value & 0x20000000) == 0) )
                  {
                    if ( (iUnitTargetFlags & 2) == 0 || (result = 13, (pNPC->m_iAttackCapabilities.m_Value & 2) != 0) )
                    {
                      if ( (iUnitTargetFlags & 4) == 0 || (result = 14, (pNPC->m_iAttackCapabilities.m_Value & 2) == 0) )
                      {
                        if ( (iUnitTargetFlags & 0x8000) == 0 || (result = 23, pNPC->m_flMaxMana.m_Value != 0.0) )
                        {
                          if ( (iUnitTargetFlags & 8) != 0
                            || (iTeamNumbera = iTeamNumber,
                                iUnitTargetFlagsa = iUnitTargetFlags,
                                v12 = (*(pNPC->_vptr_IHandleEntity + 408))(pNPC, v8),
                                iUnitTargetFlags = iUnitTargetFlagsa,
                                v13 = v12,
                                iTeamNumber = iTeamNumbera,
                                result = 15,
                                v13 != 0) )
                          {
                            if ( v7 )
                            {
                              if ( (iUnitTargetFlags & 0x20) != 0 )
                              {
                                result = 16;
                                if ( (pNPC->m_nUnitState64.m_Value & 0x200) != 0 )
                                  return result;
                              }
                            }
                            else if ( (iUnitTargetFlags & 0x10) == 0 )
                            {
                              result = 17;
                              if ( (pNPC->m_nUnitState64.m_Value & 0x200) != 0 )
                                return result;
                            }
                            if ( (iUnitTargetFlags & 0x40) != 0
                              || (result = 18, !pNPC->m_bIsWaitingToSpawn.m_Value)
                              && (pNPC->m_nUnitState64.m_Value & 0x100) == 0 )
                            {
                              if ( (iUnitTargetFlags & 0x80u) != 0 )
                              {
                                iTeamNumberb = iUnitTargetFlags;
                                iUnitTargetFlagsb = iTeamNumber;
                                CanBeSeenByTeam = CBaseModelEntity::CanBeSeenByTeam(pNPC, iTeamNumber);
                                iTeamNumber = iUnitTargetFlagsb;
                                iUnitTargetFlags = iTeamNumberb;
                                if ( !CanBeSeenByTeam )
                                  return 19;
                              }
                              if ( v7
                                || (iUnitTargetFlags & 0x100) == 0
                                || (iUnitTargetFlagsc = iUnitTargetFlags,
                                    IsInvisibleTo = CDOTA_BaseNPC::IsInvisibleTo(pNPC, iTeamNumber),
                                    iUnitTargetFlags = iUnitTargetFlagsc,
                                    v16 = IsInvisibleTo,
                                    result = 20,
                                    !v16) )
                              {
                                if ( (iUnitTargetFlags & 0x400) == 0
                                  || (result = 21, pNPC->m_iIsControllableByPlayer64.m_Value != 0) )
                                {
                                  if ( (iUnitTargetFlags & 0x4000) == 0
                                    || (result = 22, (pNPC->m_nUnitState64.m_Value & 4) == 0) )
                                  {
                                    if ( (iUnitTargetFlags & 0x40000) == 0
                                      && (pNPC->m_nUnitState64.m_Value & 0x80000000) != 0 )
                                    {
                                      return 19;
                                    }
                                    if ( (iUnitTargetFlags & 0x80000) == 0 )
                                      return 0;
                                    result = 27;
                                    if ( (pNPC->m_nUnitState64.m_Value & 0x800) == 0 )
                                      return 0;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return result;
}


// OrderCancelsChannel  (line 558, @0x000000000266c5b0, libserver.so)
// callers: CDOTA_Modifier_Life_Stealer_Assimilate::OnOrder, CDOTA_Modifier_Item_Lotus_Orb_ChannelCheck::OnOrder
bool __fastcall OrderCancelsChannel(int iUnitOrder)
{
  bool result; // al

  result = 0;
  if ( (iUnitOrder - 1) <= 0x1C )
    return ((1LL << (iUnitOrder - 1)) & 0x1A1001FF) != 0;
  return result;
}


// IsLeaguePassFree  (line 585, @0x000000000266c5d0, libserver.so)
// calls: GEconItemSchema, CDOTAItemSchema::GetFlagsForLeagueID
bool __fastcall IsLeaguePassFree(uint unLeagueID)
{
  bool result; // al
  const CDOTAItemSchema *v3; // rax

  result = unLeagueID - 1 <= 2 || unLeagueID > 0xFDE7;
  if ( !result )
  {
    result = 1;
    if ( unLeagueID != 223 )
    {
      v3 = GEconItemSchema();
      return CDOTAItemSchema::GetFlagsForLeagueID(v3, unLeagueID) & 1;
    }
  }
  return result;
}


// GetHeroRole  (line 616, @0x000000000266c620, libserver.so)
// callers: CDOTAGamerules::AddTeamCompToCriteria
// globals: g_pszHeroRoles
const char *__fastcall GetHeroRole(EDOTAHeroRole nRole)
{
  if ( nRole > EDOTAHeroRole::DOTA_HERO_ROLE_ESCAPE )
    return 0;
  else
    return g_pszHeroRoles[nRole];
}


// GetAddictionSystemStatus  (line 624, @0x000000000266c650, libserver.so)
int __fastcall GetAddictionSystemStatus(uint32 unTimeAccumulated)
{
  __int64 v1; // rax

  LODWORD(v1) = 2;
  if ( unTimeAccumulated <= 0x464F )
    return unTimeAccumulated > 0x2A2F;
  return v1;
}


// GetSourceReferenceIDFromCartItemSources  (line 646, @0x000000000266c680, libserver.so)
// local variable allocation has failed, the output may be wrong!
DOTASourceReferenceID_t __fastcall GetSourceReferenceIDFromCartItemSources(
        DOTACartItemSource_t eFirstRecent,
        DOTACartItemSource_t eSecondRecent,
        DOTACartItemSource_t eThirdRecent,
        DOTACartItemSource_t eFourthRecent)
{
  return ((*&eFourthRecent << 48) | (*&eThirdRecent << 32) | eFirstRecent | (eSecondRecent << 16));
}


// AppendMoreRecentCartItemSource  (line 658, @0x000000000266c6a0, libserver.so)
DOTASourceReferenceID_t __fastcall AppendMoreRecentCartItemSource(
        DOTASourceReferenceID_t sourceReferenceID,
        DOTACartItemSource_t eMoreRecent)
{
  return ((sourceReferenceID.m_ulRepresentation << 16) | eMoreRecent);
}


// GetLevelAtWhichGameModeUnlocks  (line 709, @0x000000000266c6b0, libserver.so)
// globals: g_GameModeUnlockLevels
uint8 __fastcall GetLevelAtWhichGameModeUnlocks(DOTA_GameMode nMode)
{
  return g_GameModeUnlockLevels[nMode];
}


// GetGameModeUnlockedAtLevel  (line 715, @0x000000000266c6d0, libserver.so)
// globals: g_GameModeUnlockLevels
DOTA_GameMode __fastcall GetGameModeUnlockedAtLevel(uint16 nLevel)
{
  DOTA_GameMode result; // eax
  int *v2; // rdx

  result = DOTA_GameMode::DOTA_GAMEMODE_NONE;
  if ( nLevel != 0 && g_GameModeUnlockLevels[0] != nLevel )
  {
    v2 = &g_GameModeUnlockLevels[1];
    LOBYTE(result) = 1;
    while ( *v2 != nLevel )
    {
      ++result;
      ++v2;
      if ( result == (DOTA_GameMode::DOTA_GAMEMODE_ALL_DRAFT|DOTA_GameMode::DOTA_GAMEMODE_AP) )
      {
        LOBYTE(result) = 0;
        return result;
      }
    }
  }
  return result;
}


// GetGameModeMaskUnlockedByLevel  (line 728, @0x000000000266c720, libserver.so)
uint32 __fastcall GetGameModeMaskUnlockedByLevel(uint16 nLevel)
{
  int v1; // ecx
  uint32 result; // eax
  int v3; // edx

  v1 = 0;
  result = 0;
  do
  {
    v3 = 1 << v1++;
    result |= v3;
  }
  while ( v1 != 23 );
  return result;
}


// GetCombatLogEventType  (line 817, @0x000000000266c740, libserver.so)
// calls: StringFieldToInt
// callers: CDOTA_CombatAnalyzer::ParseEventSearchFields
// globals: g_DOTA_CombatLogTypes
int __fastcall GetCombatLogEventType(const char *pszEventType)
{
  return StringFieldToInt(pszEventType, g_DOTA_CombatLogTypes, 38, -1, 1);
}


// GetCompendiumStatCollector  (line 838, @0x000000000266c770, libserver.so)
// calls: StringFieldToInt
// globals: g_szCompendiumStatCollectors
int __fastcall GetCompendiumStatCollector(const char *pszStatCollector)
{
  return StringFieldToInt(pszStatCollector, g_szCompendiumStatCollectors, 10, -1, 1);
}


// GetCompendiumStatAggregator  (line 855, @0x000000000266c7a0, libserver.so)
// calls: StringFieldToInt
// callers: CDOTA_RealtimeCombatAnalyzer::ParseStorage
// globals: g_szCompendiumStatAggregators
int __fastcall GetCompendiumStatAggregator(const char *pszStatAggregator)
{
  return StringFieldToInt(pszStatAggregator, g_szCompendiumStatAggregators, 6, -1, 1);
}


// GetCompendiumStatStorage  (line 876, @0x000000000266c7d0, libserver.so)
// calls: StringFieldToInt
// globals: g_szCompendiumStatStorage
int __fastcall GetCompendiumStatStorage(const char *pszStatStorage)
{
  return StringFieldToInt(pszStatStorage, g_szCompendiumStatStorage, 10, -1, 1);
}


// GetAttributeIndexFromString  (line 883, @0x000000000266c800, libserver.so)  // inlines: _V_strcmp
// callers: CDOTAGameManager::GetHeroRowColumnInLegacySelection, CDOTAGamerules::HeroPickState_Enter_SD_SELECT, CDOTAGamerules::HeroPickState_Enter_CD_INTRO, FindLeastPickedHeroClassForTeam, CDOTA_BaseNPC_Hero::LoadNPCData
// strings: "DOTA_ATTRIBUTE_STRENGTH", "DOTA_ATTRIBUTE_AGILITY", "DOTA_ATTRIBUTE_INTELLECT"
Attributes __fastcall GetAttributeIndexFromString(const char *pszPrimaryAttribute)
{
  Attributes result; // eax

  if ( pszPrimaryAttribute == 0 )
    return Attributes::DOTA_ATTRIBUTE_INVALID;
  result = Attributes::DOTA_ATTRIBUTE_STRENGTH;
  if ( strcmp(pszPrimaryAttribute, "DOTA_ATTRIBUTE_STRENGTH") != 0 )
  {
    LOBYTE(result) = 1;
    if ( strcmp(pszPrimaryAttribute, "DOTA_ATTRIBUTE_AGILITY") != 0 )
      return strcmp(pszPrimaryAttribute, "DOTA_ATTRIBUTE_INTELLECT") == 0 ? 2 : -1;
  }
  return result;
}


// DOTAGCTeamToGameTeam  (line 900, @0x000000000266c880, libserver.so)
// callers: CDOTAGCServerSystem::GetTeamForLobbyMember
// globals: CSWTCH.15183
int __fastcall DOTAGCTeamToGameTeam(DOTA_GC_TEAM nGCTeam)
{
  int result; // eax

  result = 5;
  if ( nGCTeam <= DOTA_GC_TEAM::DOTA_GC_TEAM_PLAYER_POOL )
    return CSWTCH_15183[nGCTeam];
  return result;
}


// WearableSpawnInfo_t::~WearableSpawnInfo_t  (line 986, @0x000000000266c8a0, libserver.so)
// callers: CUtlVectorBase<WearableSpawnInfo_t, CUtlMemory<WearableSpawnInfo_t, int> >::RemoveAll, CDOTA_BaseNPC::BuildWearableSpawnListInternal, CDOTA_BaseNPC::BuildWearableSpawnList, CDOTA_BaseNPC::CDOTA_BaseNPC, CDOTA_BaseNPC::~CDOTA_BaseNPC, CDOTA_BaseNPC_Hero::BuildWearableSpawnList
void __fastcall WearableSpawnInfo_t::~WearableSpawnInfo_t(WearableSpawnInfo_t *const this)
{
  CEconItemView *m_pItem; // rdi

  if ( this->m_bDeleteEconItemOnDestroy )
  {
    m_pItem = this->m_pItem;
    if ( m_pItem != 0 )
      (*(m_pItem->_vptr_IEconItemInterface + 2))(m_pItem);
  }
}


