// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/econ/econ_item_constants.cpp:147
struct kill_eater_attr_pair_t {
	CSchemaAttributeDefHandle m_attrScore;  // +0x0
	CSchemaAttributeDefHandle m_attrType;  // +0x18
	bool m_bIsUserCustomizable;  // +0x30
	kill_eater_attr_pair_t(const char *, const char *, bool);
	~kill_eater_attr_pair_t();

	// sizeof = 56
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// EconQuality_GetQualityString  (line 16, @0x0000000002e3bae0, libserver.so)  // inlines: GetName, String
// calls: GEconItemSchema, CEconItemSchema::GetQualityDefinition
// callers: CEconEntity::DebugDescribe
const char *__fastcall EconQuality_GetQualityString(EEconItemQuality eQuality)
{
  CEconItemSchema *v2; // rax
  const CEconItemQualityDefinition *QualityDefinition; // rdx
  const char *result; // rax

  v2 = GEconItemSchema();
  QualityDefinition = CEconItemSchema::GetQualityDefinition(v2, eQuality);
  if ( QualityDefinition == 0 )
    return 0;
  result = "unknown";
  if ( QualityDefinition->m_symName.u.m_Id != 0 )
    return QualityDefinition->m_symName.u.m_pAsString;
  return result;
}


// EconQuality_GetQualityFromString  (line 22, @0x0000000002e3bbf0, libserver.so)
// calls: GEconItemSchema, CEconItemSchema::GetQualityDefinitionByName
// callers: CEconTool_StyleUnlock::BInitFromKV, CEconTool_ItemDynamicRecipe::CBaseRecipeComponent::ParseKV
EEconItemQuality __fastcall EconQuality_GetQualityFromString(const char *pszQuality)
{
  CEconItemSchema *v2; // rax
  EEconItemQuality *QualityDefinitionByName; // rax

  v2 = GEconItemSchema();
  QualityDefinitionByName = CEconItemSchema::GetQualityDefinitionByName(v2, pszQuality);
  if ( QualityDefinitionByName != 0 )
    return *QualityDefinitionByName;
  else
    return EEconItemQuality::AE_UNDEFINED;
}


// EconQuality_GetLocalizationString  (line 28, @0x0000000002e3bc30, libserver.so)  // inlines: GetDisplayName, String
// calls: GEconItemSchema, CEconItemSchema::GetQualityDefinition
const char *__fastcall EconQuality_GetLocalizationString(EEconItemQuality eQuality)
{
  CEconItemSchema *v2; // rax
  const CEconItemQualityDefinition *QualityDefinition; // rdx
  const char *result; // rax

  v2 = GEconItemSchema();
  QualityDefinition = CEconItemSchema::GetQualityDefinition(v2, eQuality);
  if ( QualityDefinition == 0 )
    return 0;
  result = "";
  if ( QualityDefinition->m_symDisplayName.u.m_Id != 0 )
    return QualityDefinition->m_symDisplayName.u.m_pAsString;
  return result;
}


// EconQuality_GetSortPriority  (line 34, @0x0000000002e3bc90, libserver.so)  // inlines: GetSortPriority
// calls: GEconItemSchema, CEconItemSchema::GetQualityDefinition
int __fastcall EconQuality_GetSortPriority(EEconItemQuality eQuality)
{
  CEconItemSchema *v2; // rax
  const CEconItemQualityDefinition *QualityDefinition; // rax

  v2 = GEconItemSchema();
  QualityDefinition = CEconItemSchema::GetQualityDefinition(v2, eQuality);
  if ( QualityDefinition != 0 )
    return QualityDefinition->m_nSortPriority;
  else
    return 0;
}


// GetAttribColorIndexForName  (line 69, @0x0000000002e3bcd0, libserver.so)  // inlines: _V_strcmp
// calls: strcmp
// callers: CEconItemRarityDefinition::BInitFromKV, CEconItemDefinition::BInitFromKVOverride
// globals: g_AttribColorDefs
attrib_colors_t __fastcall GetAttribColorIndexForName(const char *pszName)
{
  attrib_colors_t v2; // r12d
  CSchemaColorDefHandle *i; // rbx

  v2 = attrib_colors_t::ATTRIB_COL_LEVEL;
  for ( i = g_AttribColorDefs; strcmp(i->m_szName, pszName) != 0; ++i )
  {
    if ( ++v2 == attrib_colors_t::NUM_ATTRIB_COLORS )
      return attrib_colors_t::ATTRIB_COL_LEVEL;
  }
  return v2;
}


// GetColorNameForAttribColor  (line 80, @0x0000000002e3bd30, libserver.so)  // inlines: Get, GetColorName, GetTypedRef, String, operator const CEconColorDefinition*, operator->
// calls: GEconItemSchema, CEconItemSchema::GetColorDefinitionByName
// strings: "ItemAttribNeutral"
// globals: g_AttribColorDefs
const char *__fastcall GetColorNameForAttribColor(attrib_colors_t unAttribColor)
{
  CSchemaColorDefHandle *v1; // rbx
  uint32 m_unResetCount; // r12d
  const char *m_szName; // r13
  CEconItemSchema *v4; // rax
  const CEconColorDefinition *ColorDefinitionByName; // rax
  uint32 v6; // r12d
  const CEconColorDefinition *m_pRef; // rdx
  const char *result; // rax
  const char *v9; // r13
  CEconItemSchema *v10; // rax
  const CEconColorDefinition *v11; // rax

  v1 = &g_AttribColorDefs[unAttribColor];
  if ( v1->m_szName == 0 )
    return "ItemAttribNeutral";
  m_unResetCount = GEconItemSchema()->m_unResetCount;
  if ( m_unResetCount == v1->m_unSchemaGeneration )
  {
    if ( v1->m_pRef != 0 )
      goto LABEL_4;
    return "ItemAttribNeutral";
  }
  m_szName = v1->m_szName;
  v4 = GEconItemSchema();
  ColorDefinitionByName = CEconItemSchema::GetColorDefinitionByName(v4, m_szName);
  v1->m_unSchemaGeneration = m_unResetCount;
  v1->m_pRef = ColorDefinitionByName;
  if ( ColorDefinitionByName == 0 )
    return "ItemAttribNeutral";
LABEL_4:
  if ( v1->m_szName != 0 )
  {
    v6 = GEconItemSchema()->m_unResetCount;
    if ( v6 == v1->m_unSchemaGeneration )
    {
      m_pRef = v1->m_pRef;
    }
    else
    {
      v9 = v1->m_szName;
      v10 = GEconItemSchema();
      v11 = CEconItemSchema::GetColorDefinitionByName(v10, v9);
      v1->m_unSchemaGeneration = v6;
      m_pRef = v11;
      v1->m_pRef = v11;
    }
  }
  else
  {
    m_pRef = 0;
  }
  result = "";
  if ( m_pRef->m_symColorName.u.m_Id != 0 )
    return m_pRef->m_symColorName.u.m_pAsString;
  return result;
}


// GetHexColorForAttribColor  (line 90, @0x0000000002e3be10, libserver.so)  // inlines: Get, GetHexColor, GetTypedRef, String, operator const CEconColorDefinition*, operator->
// calls: GEconItemSchema, CEconItemSchema::GetColorDefinitionByName
// callers: CEconItemSchema::GetRarityColor
// strings: "#ebe2ca"
// globals: g_AttribColorDefs
const char *__fastcall GetHexColorForAttribColor(attrib_colors_t unAttribColor)
{
  CSchemaColorDefHandle *v1; // rbx
  uint32 m_unResetCount; // r12d
  const char *m_szName; // r13
  CEconItemSchema *v4; // rax
  const CEconColorDefinition *ColorDefinitionByName; // rax
  uint32 v6; // r12d
  const CEconColorDefinition *m_pRef; // rdx
  const char *result; // rax
  const char *v9; // r13
  CEconItemSchema *v10; // rax
  const CEconColorDefinition *v11; // rax

  v1 = &g_AttribColorDefs[unAttribColor];
  if ( v1->m_szName == 0 )
    return "#ebe2ca";
  m_unResetCount = GEconItemSchema()->m_unResetCount;
  if ( m_unResetCount == v1->m_unSchemaGeneration )
  {
    if ( v1->m_pRef != 0 )
      goto LABEL_4;
    return "#ebe2ca";
  }
  m_szName = v1->m_szName;
  v4 = GEconItemSchema();
  ColorDefinitionByName = CEconItemSchema::GetColorDefinitionByName(v4, m_szName);
  v1->m_unSchemaGeneration = m_unResetCount;
  v1->m_pRef = ColorDefinitionByName;
  if ( ColorDefinitionByName == 0 )
    return "#ebe2ca";
LABEL_4:
  if ( v1->m_szName != 0 )
  {
    v6 = GEconItemSchema()->m_unResetCount;
    if ( v6 == v1->m_unSchemaGeneration )
    {
      m_pRef = v1->m_pRef;
    }
    else
    {
      v9 = v1->m_szName;
      v10 = GEconItemSchema();
      v11 = CEconItemSchema::GetColorDefinitionByName(v10, v9);
      v1->m_unSchemaGeneration = v6;
      m_pRef = v11;
      v1->m_pRef = v11;
    }
  }
  else
  {
    m_pRef = 0;
  }
  result = "";
  if ( m_pRef->m_symHexColor.u.m_Id != 0 )
    return m_pRef->m_symHexColor.u.m_pAsString;
  return result;
}


// kill_eater_attr_pair_t::~kill_eater_attr_pair_t  (line 147, @0x0000000002e591e0, libserver.so)  // inlines: ~CSchemaFieldHandle
// callers: __static_initialization_and_destruction_0
void __fastcall kill_eater_attr_pair_t::~kill_eater_attr_pair_t(kill_eater_attr_pair_t *const this)
{
  if ( this->m_attrType.m_bDestructName )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, this->m_attrType.m_szName);
  if ( this->m_attrScore.m_bDestructName )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, this->m_attrScore.m_szName);
}


// kill_eater_attr_pair_t::kill_eater_attr_pair_t  (line 149, @0x0000000002e59140, libserver.so)  // inlines: CSchemaFieldHandle, GetTypedRef, ~CSchemaFieldHandle
// calls: GEconItemSchema, CEconItemSchema::GetAttributeDefinitionByName, _Unwind_Resume
// callers: __static_initialization_and_destruction_0
void __fastcall kill_eater_attr_pair_t::kill_eater_attr_pair_t(
        kill_eater_attr_pair_t *const this,
        const char *pScoreAttrName,
        const char *pTypeAttrName,
        bool bIsUserCustomizable)
{
  CEconItemSchema *v8; // rax
  uint32 m_unResetCount; // eax
  CEconItemSchema *v10; // rax
  uint32 v11; // eax

  this->m_attrScore.m_szName = pScoreAttrName;
  v8 = GEconItemSchema();
  this->m_attrScore.m_pRef = CEconItemSchema::GetAttributeDefinitionByName(v8, pScoreAttrName);
  m_unResetCount = GEconItemSchema()->m_unResetCount;
  this->m_attrScore.m_bDestructName = 0;
  this->m_attrType.m_szName = pTypeAttrName;
  this->m_attrScore.m_unSchemaGeneration = m_unResetCount;
  v10 = GEconItemSchema();
  this->m_attrType.m_pRef = CEconItemSchema::GetAttributeDefinitionByName(v10, pTypeAttrName);
  v11 = GEconItemSchema()->m_unResetCount;
  this->m_bIsUserCustomizable = bIsUserCustomizable;
  this->m_attrType.m_bDestructName = 0;
  this->m_attrType.m_unSchemaGeneration = v11;
}


// GetKillEaterAttrPairCount  (line 173, @0x0000000002e3bef0, libserver.so)
// callers: EconEntity_OnOwnerKillEaterEvent, CEconTool_StrangePart::CanApplyTo
int __cdecl GetKillEaterAttrPairCount()
{
  return 5;
}


// GetKillEaterAttrPair_Score  (line 178, @0x0000000002e3bf00, libserver.so)  // inlines: Get, GetTypedRef, operator const CEconItemAttributeDefinition*
// calls: GEconItemSchema, CEconItemSchema::GetAttributeDefinitionByName
// callers: EconEntity_OnOwnerKillEaterEvent
// globals: g_KillEaterAttr
const CEconItemAttributeDefinition *__fastcall GetKillEaterAttrPair_Score(int i)
{
  kill_eater_attr_pair_t *v1; // rbx
  uint32 m_unResetCount; // r12d
  const char *m_szName; // r13
  CEconItemSchema *v4; // rax
  const CEconItemAttributeDefinition *result; // rax

  v1 = &g_KillEaterAttr[i];
  if ( v1->m_attrScore.m_szName == 0 )
    return 0;
  m_unResetCount = GEconItemSchema()->m_unResetCount;
  if ( m_unResetCount == v1->m_attrScore.m_unSchemaGeneration )
    return v1->m_attrScore.m_pRef;
  m_szName = v1->m_attrScore.m_szName;
  v4 = GEconItemSchema();
  result = CEconItemSchema::GetAttributeDefinitionByName(v4, m_szName);
  v1->m_attrScore.m_unSchemaGeneration = m_unResetCount;
  v1->m_attrScore.m_pRef = result;
  return result;
}


// GetKillEaterAttrPair_Type  (line 186, @0x0000000002e3bf90, libserver.so)  // inlines: Get, GetTypedRef, operator const CEconItemAttributeDefinition*
// calls: GEconItemSchema, CEconItemSchema::GetAttributeDefinitionByName
// callers: EconEntity_OnOwnerKillEaterEvent, CEconTool_StrangePart::CanApplyTo
// globals: g_KillEaterAttr
const CEconItemAttributeDefinition *__fastcall GetKillEaterAttrPair_Type(int i)
{
  __int64 v1; // rdi
  uint32 *p_m_unSchemaGeneration; // rbx
  CSchemaAttributeDefHandle *p_m_attrType; // r12
  uint32 m_unResetCount; // r13d
  const char *v5; // rbx
  CEconItemSchema *v6; // rax
  const CEconItemAttributeDefinition *result; // rax

  v1 = i;
  p_m_unSchemaGeneration = &g_KillEaterAttr[v1].m_attrScore.m_unSchemaGeneration;
  p_m_attrType = &g_KillEaterAttr[v1].m_attrType;
  if ( p_m_attrType->m_szName == 0 )
    return 0;
  m_unResetCount = GEconItemSchema()->m_unResetCount;
  if ( m_unResetCount == p_m_attrType->m_unSchemaGeneration )
    return p_m_attrType->m_pRef;
  v5 = *(p_m_unSchemaGeneration + 1);
  v6 = GEconItemSchema();
  result = CEconItemSchema::GetAttributeDefinitionByName(v6, v5);
  p_m_attrType->m_unSchemaGeneration = m_unResetCount;
  p_m_attrType->m_pRef = result;
  return result;
}


// GetKillEaterAttrPair_IsUserCustomizable  (line 194, @0x0000000002e3c020, libserver.so)
// callers: CEconTool_StrangePart::CanApplyTo
bool __fastcall GetKillEaterAttrPair_IsUserCustomizable(int i)
{
  return g_KillEaterAttr[i].m_bIsUserCustomizable;
}


// EventRequiresVictim  (line 202, @0x0000000002e3c050, libserver.so)
// callers: EconEntity_OnOwnerKillEaterEvent
// globals: jpt_2E3C06C
bool __fastcall EventRequiresVictim(kill_eater_event_t ke_event)
{
  bool result; // al

  switch ( ke_event )
  {
    case kill_eater_event_t::kKillEaterEvent_Wins:
    case kill_eater_event_t::kKillEaterEvent_Treants_Created:
    case kill_eater_event_t::kKillEaterEvent_Blade_Fury_Damage:
    case kill_eater_event_t::kKillEaterEvent_Wards_Placed:
    case kill_eater_event_t::kKillEaterEvent_Trees_Created:
    case kill_eater_event_t::kKillEaterEvent_Gold_Earned:
    case kill_eater_event_t::kKillEaterEvent_Gold_Spent:
    case kill_eater_event_t::kKillEaterEvent_Towers_Destroyed:
    case kill_eater_event_t::kKillEaterEventType_Bounty_TrackGold:
    case kill_eater_event_t::kKillEaterEventType_Tide_GoodRavages:
    case kill_eater_event_t::kKillEaterEventType_Windrunner_GoodPowershots:
    case kill_eater_event_t::kKillEaterEventType_Couriers_Purchased:
    case kill_eater_event_t::kKillEaterEventType_Wards_Purchased:
    case kill_eater_event_t::kKillEaterEventType_Axe_CalledDamageDone:
    case kill_eater_event_t::kKillEaterEventType_Axe_CalledDamageTaken:
    case kill_eater_event_t::kKillEaterEventType_Sven_DoubleStuns:
    case kill_eater_event_t::kKillEaterEventType_Sven_CleaveDoubleKills:
    case kill_eater_event_t::kKillEaterEventType_Faceless_MultiChrono:
    case kill_eater_event_t::kKillEaterEventType_Ursa_MultiShocks:
    case kill_eater_event_t::kKillEaterEventType_RoshanKills:
    case kill_eater_event_t::kKillEaterEventType_OD_IntStolen:
    case kill_eater_event_t::kKillEaterEventType_HeroesRevealedWithDust:
    case kill_eater_event_t::kKillEaterEventType_Abaddon_BorrowedTimeDamageAbsorbed:
    case kill_eater_event_t::kKillEaterEventType_Enchantress_CreepsConverted:
    case kill_eater_event_t::kKillEaterEventType_Slark_DebuffsPurged:
    case kill_eater_event_t::kKillEaterEventType_Rubick_SpellsStolen:
    case kill_eater_event_t::kKillEaterEventType_Rubick_UltimatesStolen:
    case kill_eater_event_t::kKillEaterEventType_Doom_CreepsDevoured:
    case kill_eater_event_t::kKillEaterEventType_OgreMagi_4xIgnites:
    case kill_eater_event_t::kKillEaterEventType_Warlock_FiveHeroFatalBonds:
    case kill_eater_event_t::kKillEaterEventType_Warlock_GolemsSummoned:
    case kill_eater_event_t::kKillEaterEventType_CrystalMaiden_CrystalNovas:
    case kill_eater_event_t::kKillEaterEventType_Kunkka_DoubleHeroTorrents:
    case kill_eater_event_t::kKillEaterEventType_Kunkka_TripleHeroGhostShips:
    case kill_eater_event_t::kKillEaterEventType_NagaSiren_TripleHeroRipTides:
    case kill_eater_event_t::kKillEaterEventType_Lycan_WolvesSummoned:
    case kill_eater_event_t::kKillEaterEventType_Pudge_FleshHeapTotal:
    case kill_eater_event_t::kKillEaterEventType_DrowRanger_EnemiesSilenced:
    case kill_eater_event_t::kKillEaterEventType_DrowRanger_MultiHeroSilences:
    case kill_eater_event_t::kKillEaterEventType_Morphling_MorphReplicates:
    case kill_eater_event_t::kKillEaterEventType_Morphling_HeroesReplicated:
    case kill_eater_event_t::kKillEaterEventType_WitchDoctor_MultiHeroMaledicts:
    case kill_eater_event_t::kKillEaterEventType_WitchDoctor_VoodooHealed:
    case kill_eater_event_t::kKillEaterEventType_Medusa_MysticSnakeManaStolen:
    case kill_eater_event_t::kKillEaterEventType_Earthshaker_3HeroEchoslams:
    case kill_eater_event_t::kKillEaterEventType_Ward_RuneSpawnsSeen:
    case kill_eater_event_t::kKillEaterEventType_Ward_TimesPlaced:
    case kill_eater_event_t::kKillEaterEventType_LegionCommander_DuelsWon:
    case kill_eater_event_t::kKillEaterEventType_LegionCommander_DuelsLost:
    case kill_eater_event_t::kKillEaterEventType_Beastmaster_HawksSummoned:
    case kill_eater_event_t::kKillEaterEventType_Beastmaster_BoarsSummoned:
    case kill_eater_event_t::kKillEaterEventType_Beastmaster_RoarMultiKills:
    case kill_eater_event_t::kKillEaterEventType_Windrunner_FocusFireBuildings:
    case kill_eater_event_t::kKillEaterEventType_PhantomAssassin_DaggerLastHits:
    case kill_eater_event_t::kKillEaterEventType_DeathProphet_ExorcismBuildingKills:
    case kill_eater_event_t::kKillEaterEventType_DeathProphet_ExorcismSpiritsSummoned:
    case kill_eater_event_t::kKillEaterEventType_DeathProphet_MultiHeroSilences:
    case kill_eater_event_t::kKillEaterEventType_Lich_Sacrifices:
    case kill_eater_event_t::kKillEaterEventType_Lich_ChainFrostTripleKills:
    case kill_eater_event_t::kKillEaterEventType_Lich_ChainFrostMultiKills:
    case kill_eater_event_t::kKillEaterEventType_Lich_ChainFrostBounces:
    case kill_eater_event_t::kKillEaterEventType_Lich_IceArmorCasts:
    case kill_eater_event_t::kKillEaterEvent_Barracks_Destroyed:
    case kill_eater_event_t::kKillEaterEvent_Buildings_Destroyed:
    case kill_eater_event_t::kKillEaterEvent_TemplarAssassin_DamageAbsorbed:
    case kill_eater_event_t::kKillEaterEvent_Sniper_ShrapnelTowerDamage:
    case kill_eater_event_t::kKillEaterEvent_EarthSpirit_SpeedingBoulders:
    case kill_eater_event_t::kKillEaterEvent_ShadowShaman_WardsSummoned:
    case kill_eater_event_t::kKillEaterEvent_Centaur_EnemiesStomped:
    case kill_eater_event_t::kKillEaterEvent_EmberSpirit_SleightOfFistMultiKills:
    case kill_eater_event_t::kKillEaterEvent_EmberSpirit_FlameGuardDamageAbsorbed:
    case kill_eater_event_t::kKillEaterEvent_LegionCommander_TripleHeroOdds:
    case kill_eater_event_t::kKillEaterEvent_LegionCommander_MomentOfCourageLifeStolen:
    case kill_eater_event_t::kKillEaterEvent_LegionCommander_SecondsSpentDueling:
    case kill_eater_event_t::kKillEaterEvent_Puck_GoodCoils:
    case kill_eater_event_t::kKillEaterEvent_Puck_GoodWaningRifts:
    case kill_eater_event_t::kKillEaterEvent_Puck_OrbKills:
    case kill_eater_event_t::kKillEaterEvent_VengefulSpirit_EnemiesStunned:
    case kill_eater_event_t::kKillEaterEvent_VengefulSpirit_EnemiesSwapped:
    case kill_eater_event_t::kKillEaterEvent_VengefulSpirit_MultiTerrors:
    case kill_eater_event_t::kKillEaterEvent_Lifestealer_InfestKills:
    case kill_eater_event_t::kKillEaterEvent_ElderTitan_GoodSplitters:
    case kill_eater_event_t::kKillEaterEvent_ElderTitan_SpiritKills:
    case kill_eater_event_t::kKillEaterEvent_ElderTitan_GoodStomps:
    case kill_eater_event_t::kKillEaterEvent_Clockwerk_2Cogs:
    case kill_eater_event_t::kKillEaterEvent_Clockwerk_RocketKills:
    case kill_eater_event_t::kKillEaterEvent_Clockwerk_BlindRocketKills:
    case kill_eater_event_t::kKillEaterEvent_GamesPlayed:
    case kill_eater_event_t::kKillEaterEvent_DreamLeague_DreamPoints:
    case kill_eater_event_t::kKillEaterEvent_StormSpirit_BallDamage:
    case kill_eater_event_t::kKillEaterEvent_StormSpirit_DoubleRemnantKills:
    case kill_eater_event_t::kKillEaterEvent_Tinker_Rearms:
    case kill_eater_event_t::kKillEaterEvent_Tinker_TPsToBase:
    case kill_eater_event_t::kKillEaterEvent_Tinker_DoubleMissileKills:
    case kill_eater_event_t::kKillEaterEvent_Techies_SuicideKills:
    case kill_eater_event_t::kKillEaterEvent_Techies_LandMineKills:
    case kill_eater_event_t::kKillEaterEvent_Techies_StatisTrapStuns:
    case kill_eater_event_t::kKillEaterEvent_Techies_RemoteMineKills:
    case kill_eater_event_t::kKillEaterEvent_ShadowFiend_TripleRaze:
    case kill_eater_event_t::kKillEaterEvent_ShadowFiend_RequiemMultiKills:
    case kill_eater_event_t::kKillEaterEvent_PhantomAssassin_ArcanaEventWins:
    case kill_eater_event_t::kKillEaterEvent_Statue_Commends:
    case kill_eater_event_t::kKillEaterEvent_EnemyWardKills:
      result = 0;
      break;
    default:
      result = 1;
      break;
  }
  return result;
}


// GetHexStringFromPaintColor  (line 320, @0x0000000002e3c090, libserver.so)  // inlines: V_binarytohex<int, int>
// calls: _V_binarytohex
void __fastcall GetHexStringFromPaintColor(float a1, float flPaint, char *pszRGB)
{
  uint8 b; // [rsp+1h] [rbp-1Bh] BYREF
  uint8 g; // [rsp+2h] [rbp-1Ah] BYREF
  uint8 r[25]; // [rsp+3h] [rbp-19h] BYREF

  b = a1;
  g = a1 >> 8;
  r[0] = a1 >> 16;
  _V_binarytohex(r, 1, pszRGB, 3);
  _V_binarytohex(&g, 1, pszRGB + 2, 3);
  _V_binarytohex(&b, 1, pszRGB + 4, 3);
}


