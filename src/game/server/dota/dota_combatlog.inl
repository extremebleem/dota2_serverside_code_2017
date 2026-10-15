
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CCLSearchFieldFactory<SCLEndKillstreakFields, (DOTA_COMBATLOG_TYPES)37>::CreateSearchFields  (line 177, @0x00000000024ab3c0, libserver.so)  // inlines: ICLSearchFields, SCLEndKillstreakFields
// calls: operator new, KeyValues::GetString, ICLSearchFields::ParseQueryStringID, ICLSearchFields::~ICLSearchFields, operator delete, _Unwind_Resume
// strings: "assist_player_id"
ICLSearchFields *__fastcall CCLSearchFieldFactory<SCLEndKillstreakFields,(DOTA_COMBATLOG_TYPES)37>::CreateSearchFields(
        CCLSearchFieldFactory<SCLEndKillstreakFields,(DOTA_COMBATLOG_TYPES)37> *const this,
        CDOTAPlayer *pPlayer,
        KeyValues *pKeyValues)
{
  _DWORD *v5; // rbx
  const char *String; // rax

  v5 = operator new(0x30u);
  v5[2] = -1;
  v5[3] = 0;
  *(v5 + 16) = 0;
  v5[5] = -1;
  v5[6] = -1;
  v5[7] = -1;
  *(v5 + 4) = 0;
  *v5 = off_40DF630;
  String = KeyValues::GetString(pKeyValues, "assist_player_id", "", 0, 0);
  ICLSearchFields::ParseQueryStringID(v5, v5 + 10, pPlayer, String);
  return v5;
}


// CCLSearchFieldFactory<SCLPlayerStatsFields, (DOTA_COMBATLOG_TYPES)14>::CreateSearchFields  (line 177, @0x00000000024ab470, libserver.so)  // inlines: ICLSearchFields, SCLPlayerStatsFields
// calls: operator new, KeyValues::GetString, ICLSearchFields::ParseQueryStringID, ICLSearchFields::~ICLSearchFields, operator delete, _Unwind_Resume
ICLSearchFields *__fastcall CCLSearchFieldFactory<SCLPlayerStatsFields,(DOTA_COMBATLOG_TYPES)14>::CreateSearchFields(
        CCLSearchFieldFactory<SCLPlayerStatsFields,(DOTA_COMBATLOG_TYPES)14> *const this,
        CDOTAPlayer *pPlayer,
        KeyValues *pKeyValues)
{
  ICLSearchFields *v5; // rbx
  const char *String; // rax

  v5 = operator new(0x28u);
  v5->m_iType = DOTA_COMBATLOG_TYPES::DOTA_COMBATLOG_INVALID;
  v5->m_flGameTime = 0.0;
  v5->m_bMatchPreviousTarget = 0;
  v5->m_iTargetName = -1;
  v5->m_iAttackerName = -1;
  v5->m_iInflictorName = -1;
  v5->m_pDynamicValues = 0;
  v5->_vptr_ICLSearchFields = off_40DEA90;
  String = KeyValues::GetString(pKeyValues, "playerid", "", 0, 0);
  ICLSearchFields::ParseQueryStringID(v5, &v5->m_iTargetName, pPlayer, String);
  return v5;
}


// CCLSearchFieldFactory<SCLEndGameStatsFields, (DOTA_COMBATLOG_TYPES)27>::CreateSearchFields  (line 177, @0x00000000024ab520, libserver.so)  // inlines: ICLSearchFields, SCLEndGameStatsFields
// calls: operator new, KeyValues::GetString, ICLSearchFields::ParseQueryStringID, ICLSearchFields::~ICLSearchFields, operator delete, _Unwind_Resume
ICLSearchFields *__fastcall CCLSearchFieldFactory<SCLEndGameStatsFields,(DOTA_COMBATLOG_TYPES)27>::CreateSearchFields(
        CCLSearchFieldFactory<SCLEndGameStatsFields,(DOTA_COMBATLOG_TYPES)27> *const this,
        CDOTAPlayer *pPlayer,
        KeyValues *pKeyValues)
{
  ICLSearchFields *v5; // rbx
  const char *String; // rax

  v5 = operator new(0x28u);
  v5->m_iType = DOTA_COMBATLOG_TYPES::DOTA_COMBATLOG_INVALID;
  v5->m_flGameTime = 0.0;
  v5->m_bMatchPreviousTarget = 0;
  v5->m_iTargetName = -1;
  v5->m_iAttackerName = -1;
  v5->m_iInflictorName = -1;
  v5->m_pDynamicValues = 0;
  v5->_vptr_ICLSearchFields = off_40DF210;
  String = KeyValues::GetString(pKeyValues, "playerid", "", 0, 0);
  ICLSearchFields::ParseQueryStringID(v5, &v5->m_iTargetName, pPlayer, String);
  return v5;
}


// CCLSearchFieldFactory<SCLInterruptChannelFields, (DOTA_COMBATLOG_TYPES)28>::CreateSearchFields  (line 177, @0x00000000024ab5d0, libserver.so)  // inlines: ICLSearchFields, SCLInterruptChannelFields
// calls: operator new, KeyValues::GetString, ICLSearchFields::ParseQueryStringID, ICLSearchFields::~ICLSearchFields, operator delete, _Unwind_Resume
ICLSearchFields *__fastcall CCLSearchFieldFactory<SCLInterruptChannelFields,(DOTA_COMBATLOG_TYPES)28>::CreateSearchFields(
        CCLSearchFieldFactory<SCLInterruptChannelFields,(DOTA_COMBATLOG_TYPES)28> *const this,
        CDOTAPlayer *pPlayer,
        KeyValues *pKeyValues)
{
  ICLSearchFields *v5; // rbx
  const char *String; // rax

  v5 = operator new(0x28u);
  v5->m_iType = DOTA_COMBATLOG_TYPES::DOTA_COMBATLOG_INVALID;
  v5->m_flGameTime = 0.0;
  v5->m_bMatchPreviousTarget = 0;
  v5->m_iTargetName = -1;
  v5->m_iAttackerName = -1;
  v5->m_iInflictorName = -1;
  v5->m_pDynamicValues = 0;
  v5->_vptr_ICLSearchFields = off_40DF270;
  String = KeyValues::GetString(pKeyValues, "target", "", 0, 0);
  ICLSearchFields::ParseQueryStringID(v5, &v5->m_iTargetName, pPlayer, String);
  return v5;
}


// CCLSearchFieldFactory<SCLAlliedGoldFields, (DOTA_COMBATLOG_TYPES)29>::CreateSearchFields  (line 177, @0x00000000024ab680, libserver.so)  // inlines: ICLSearchFields, SCLAlliedGoldFields
// calls: operator new, KeyValues::GetString, ICLSearchFields::ParseQueryStringID, ICLSearchFields::~ICLSearchFields, operator delete, _Unwind_Resume
ICLSearchFields *__fastcall CCLSearchFieldFactory<SCLAlliedGoldFields,(DOTA_COMBATLOG_TYPES)29>::CreateSearchFields(
        CCLSearchFieldFactory<SCLAlliedGoldFields,(DOTA_COMBATLOG_TYPES)29> *const this,
        CDOTAPlayer *pPlayer,
        KeyValues *pKeyValues)
{
  ICLSearchFields *v5; // rbx
  const char *String; // rax

  v5 = operator new(0x28u);
  v5->m_iType = DOTA_COMBATLOG_TYPES::DOTA_COMBATLOG_INVALID;
  v5->m_flGameTime = 0.0;
  v5->m_bMatchPreviousTarget = 0;
  v5->m_iTargetName = -1;
  v5->m_iAttackerName = -1;
  v5->m_iInflictorName = -1;
  v5->m_pDynamicValues = 0;
  v5->_vptr_ICLSearchFields = off_40DF2D0;
  String = KeyValues::GetString(pKeyValues, "playerid", "", 0, 0);
  ICLSearchFields::ParseQueryStringID(v5, &v5->m_iTargetName, pPlayer, String);
  return v5;
}


// CCLSearchFieldFactory<SCLPhysicalDamagePreventedFields, (DOTA_COMBATLOG_TYPES)32>::CreateSearchFields  (line 177, @0x00000000024ab730, libserver.so)  // inlines: ICLSearchFields, SCLPhysicalDamagePreventedFields
// calls: operator new, KeyValues::GetString, ICLSearchFields::ParseQueryStringID, ICLSearchFields::~ICLSearchFields, operator delete, _Unwind_Resume
// strings: "prevention_source"
ICLSearchFields *__fastcall CCLSearchFieldFactory<SCLPhysicalDamagePreventedFields,(DOTA_COMBATLOG_TYPES)32>::CreateSearchFields(
        CCLSearchFieldFactory<SCLPhysicalDamagePreventedFields,(DOTA_COMBATLOG_TYPES)32> *const this,
        CDOTAPlayer *pPlayer,
        KeyValues *pKeyValues)
{
  _DWORD *v5; // rbx
  const char *String; // rax

  v5 = operator new(0x30u);
  v5[2] = -1;
  v5[3] = 0;
  *(v5 + 16) = 0;
  v5[5] = -1;
  v5[6] = -1;
  v5[7] = -1;
  *(v5 + 4) = 0;
  *v5 = off_40DF3F0;
  String = KeyValues::GetString(pKeyValues, "prevention_source", "", 0, 0);
  ICLSearchFields::ParseQueryStringID(v5, v5 + 10, pPlayer, String);
  return v5;
}


// CCLSearchFieldFactory<SCLGoldChangeFields, (DOTA_COMBATLOG_TYPES)8>::CreateSearchFields  (line 177, @0x00000000024ab7e0, libserver.so)  // inlines: ICLSearchFields, SCLGoldChangeFields
// calls: operator new, KeyValues::GetString, ICLSearchFields::ParseQueryStringID, ICLSearchFields::~ICLSearchFields, operator delete, _Unwind_Resume
ICLSearchFields *__fastcall CCLSearchFieldFactory<SCLGoldChangeFields,(DOTA_COMBATLOG_TYPES)8>::CreateSearchFields(
        CCLSearchFieldFactory<SCLGoldChangeFields,(DOTA_COMBATLOG_TYPES)8> *const this,
        CDOTAPlayer *pPlayer,
        KeyValues *pKeyValues)
{
  ICLSearchFields *v5; // rbx
  const char *String; // rax

  v5 = operator new(0x28u);
  v5->m_iType = DOTA_COMBATLOG_TYPES::DOTA_COMBATLOG_INVALID;
  v5->m_flGameTime = 0.0;
  v5->m_bMatchPreviousTarget = 0;
  v5->m_iTargetName = -1;
  v5->m_iAttackerName = -1;
  v5->m_iInflictorName = -1;
  v5->m_pDynamicValues = 0;
  v5->_vptr_ICLSearchFields = off_40DF510;
  String = KeyValues::GetString(pKeyValues, "hero", "", 0, 0);
  ICLSearchFields::ParseQueryStringID(v5, &v5->m_iTargetName, pPlayer, String);
  return v5;
}


// CCLSearchFieldFactory<SCLTreeCutDownFields, (DOTA_COMBATLOG_TYPES)35>::CreateSearchFields  (line 177, @0x00000000024ab890, libserver.so)  // inlines: ICLSearchFields, SCLTreeCutDownFields
// calls: operator new, KeyValues::GetString, ICLSearchFields::ParseQueryStringID, ICLSearchFields::~ICLSearchFields, operator delete, _Unwind_Resume
ICLSearchFields *__fastcall CCLSearchFieldFactory<SCLTreeCutDownFields,(DOTA_COMBATLOG_TYPES)35>::CreateSearchFields(
        CCLSearchFieldFactory<SCLTreeCutDownFields,(DOTA_COMBATLOG_TYPES)35> *const this,
        CDOTAPlayer *pPlayer,
        KeyValues *pKeyValues)
{
  ICLSearchFields *v5; // rbx
  const char *String; // rax

  v5 = operator new(0x28u);
  v5->m_iType = DOTA_COMBATLOG_TYPES::DOTA_COMBATLOG_INVALID;
  v5->m_flGameTime = 0.0;
  v5->m_bMatchPreviousTarget = 0;
  v5->m_iTargetName = -1;
  v5->m_iAttackerName = -1;
  v5->m_iInflictorName = -1;
  v5->m_pDynamicValues = 0;
  v5->_vptr_ICLSearchFields = off_40DF570;
  String = KeyValues::GetString(pKeyValues, "playerid", "", 0, 0);
  ICLSearchFields::ParseQueryStringID(v5, &v5->m_iTargetName, pPlayer, String);
  return v5;
}


// CCLSearchFieldFactory<SCLSuccessfulScanFields, (DOTA_COMBATLOG_TYPES)36>::CreateSearchFields  (line 177, @0x00000000024ab940, libserver.so)  // inlines: ICLSearchFields, SCLSuccessfulScanFields
// calls: operator new, KeyValues::GetString, ICLSearchFields::ParseQueryStringID, ICLSearchFields::~ICLSearchFields, operator delete, _Unwind_Resume
ICLSearchFields *__fastcall CCLSearchFieldFactory<SCLSuccessfulScanFields,(DOTA_COMBATLOG_TYPES)36>::CreateSearchFields(
        CCLSearchFieldFactory<SCLSuccessfulScanFields,(DOTA_COMBATLOG_TYPES)36> *const this,
        CDOTAPlayer *pPlayer,
        KeyValues *pKeyValues)
{
  ICLSearchFields *v5; // rbx
  const char *String; // rax

  v5 = operator new(0x28u);
  v5->m_iType = DOTA_COMBATLOG_TYPES::DOTA_COMBATLOG_INVALID;
  v5->m_flGameTime = 0.0;
  v5->m_bMatchPreviousTarget = 0;
  v5->m_iTargetName = -1;
  v5->m_iAttackerName = -1;
  v5->m_iInflictorName = -1;
  v5->m_pDynamicValues = 0;
  v5->_vptr_ICLSearchFields = off_40DF5D0;
  String = KeyValues::GetString(pKeyValues, "playerid", "", 0, 0);
  ICLSearchFields::ParseQueryStringID(v5, &v5->m_iTargetName, pPlayer, String);
  return v5;
}


// CCLSearchFieldFactory<SCLAegisTakenFields, (DOTA_COMBATLOG_TYPES)30>::CreateSearchFields  (line 177, @0x00000000024ab9f0, libserver.so)  // inlines: ICLSearchFields, SCLAegisTakenFields
// calls: operator new, KeyValues::GetString, ICLSearchFields::ParseQueryStringID, KeyValues::GetInt, ICLSearchFields::~ICLSearchFields, operator delete, _Unwind_Resume
// strings: "snatched"
ICLSearchFields *__fastcall CCLSearchFieldFactory<SCLAegisTakenFields,(DOTA_COMBATLOG_TYPES)30>::CreateSearchFields(
        CCLSearchFieldFactory<SCLAegisTakenFields,(DOTA_COMBATLOG_TYPES)30> *const this,
        CDOTAPlayer *pPlayer,
        KeyValues *pKeyValues)
{
  ICLSearchFields *v5; // rbx
  const char *String; // rax
  bool v7; // zf

  v5 = operator new(0x30u);
  v5->m_iType = DOTA_COMBATLOG_TYPES::DOTA_COMBATLOG_INVALID;
  v5->m_flGameTime = 0.0;
  v5->m_bMatchPreviousTarget = 0;
  v5->m_iTargetName = -1;
  v5->m_iAttackerName = -1;
  v5->m_iInflictorName = -1;
  v5->m_pDynamicValues = 0;
  v5->_vptr_ICLSearchFields = off_40DF330;
  String = KeyValues::GetString(pKeyValues, "playerid", "", 0, 0);
  ICLSearchFields::ParseQueryStringID(v5, &v5->m_iTargetName, pPlayer, String);
  v7 = KeyValues::GetInt(pKeyValues, "snatched", 0) == 1;
  LOBYTE(v5[1]._vptr_ICLSearchFields) = v7;
  return v5;
}


// CCLSearchFieldFactory<SCLAttackEvadeFields, (DOTA_COMBATLOG_TYPES)34>::CreateSearchFields  (line 177, @0x00000000024abac0, libserver.so)  // inlines: ICLSearchFields, SCLAttackEvadeFields
// calls: operator new, KeyValues::GetString, ICLSearchFields::ParseQueryStringID, KeyValues::GetInt, ICLSearchFields::~ICLSearchFields, operator delete, _Unwind_Resume
// strings: "evading_unit", "spell_dodge"
ICLSearchFields *__fastcall CCLSearchFieldFactory<SCLAttackEvadeFields,(DOTA_COMBATLOG_TYPES)34>::CreateSearchFields(
        CCLSearchFieldFactory<SCLAttackEvadeFields,(DOTA_COMBATLOG_TYPES)34> *const this,
        CDOTAPlayer *pPlayer,
        KeyValues *pKeyValues)
{
  ICLSearchFields *v5; // rbx
  const char *String; // rax
  bool v7; // zf

  v5 = operator new(0x30u);
  v5->m_iType = DOTA_COMBATLOG_TYPES::DOTA_COMBATLOG_INVALID;
  v5->m_flGameTime = 0.0;
  v5->m_bMatchPreviousTarget = 0;
  v5->m_iTargetName = -1;
  v5->m_iAttackerName = -1;
  v5->m_iInflictorName = -1;
  v5->m_pDynamicValues = 0;
  v5->_vptr_ICLSearchFields = off_40DF4B0;
  String = KeyValues::GetString(pKeyValues, "evading_unit", "", 0, 0);
  ICLSearchFields::ParseQueryStringID(v5, &v5->m_iTargetName, pPlayer, String);
  v7 = KeyValues::GetInt(pKeyValues, "spell_dodge", 0) == 1;
  LOBYTE(v5[1]._vptr_ICLSearchFields) = v7;
  return v5;
}


// CCLSearchFieldFactory<SCLItemPurchaseFields, (DOTA_COMBATLOG_TYPES)11>::CreateSearchFields  (line 177, @0x00000000024abb90, libserver.so)  // inlines: ICLSearchFields, SCLItemPurchaseFields
// calls: operator new, GetItemNameFromEventBlock, ICLSearchFields::ParseQueryStringID, KeyValues::GetString, ICLSearchFields::~ICLSearchFields, operator delete, _Unwind_Resume
ICLSearchFields *__fastcall CCLSearchFieldFactory<SCLItemPurchaseFields,(DOTA_COMBATLOG_TYPES)11>::CreateSearchFields(
        CCLSearchFieldFactory<SCLItemPurchaseFields,(DOTA_COMBATLOG_TYPES)11> *const this,
        CDOTAPlayer *pPlayer,
        KeyValues *pKeyValues)
{
  _DWORD *v5; // rbx
  const char *ItemNameFromEventBlock; // rax
  const char *String; // rax

  v5 = operator new(0x30u);
  v5[2] = -1;
  v5[3] = 0;
  *(v5 + 16) = 0;
  v5[5] = -1;
  v5[6] = -1;
  v5[7] = -1;
  *(v5 + 4) = 0;
  *v5 = off_40DEE50;
  ItemNameFromEventBlock = GetItemNameFromEventBlock(pKeyValues);
  ICLSearchFields::ParseQueryStringID(v5, v5 + 10, pPlayer, ItemNameFromEventBlock);
  String = KeyValues::GetString(pKeyValues, "target", "", 0, 0);
  ICLSearchFields::ParseQueryStringID(v5, v5 + 5, pPlayer, String);
  return v5;
}


// CCLSearchFieldFactory<SCLBottleHealedAllyFields, (DOTA_COMBATLOG_TYPES)26>::CreateSearchFields  (line 177, @0x00000000024abc60, libserver.so)  // inlines: ICLSearchFields, SCLBottleHealedAllyFields
// calls: operator new, KeyValues::GetString, ICLSearchFields::ParseQueryStringID, ICLSearchFields::~ICLSearchFields, operator delete, _Unwind_Resume
ICLSearchFields *__fastcall CCLSearchFieldFactory<SCLBottleHealedAllyFields,(DOTA_COMBATLOG_TYPES)26>::CreateSearchFields(
        CCLSearchFieldFactory<SCLBottleHealedAllyFields,(DOTA_COMBATLOG_TYPES)26> *const this,
        CDOTAPlayer *pPlayer,
        KeyValues *pKeyValues)
{
  ICLSearchFields *v5; // rbx
  const char *String; // rax
  const char *v7; // rax

  v5 = operator new(0x28u);
  v5->m_iType = DOTA_COMBATLOG_TYPES::DOTA_COMBATLOG_INVALID;
  v5->m_flGameTime = 0.0;
  v5->m_bMatchPreviousTarget = 0;
  v5->m_iTargetName = -1;
  v5->m_iAttackerName = -1;
  v5->m_iInflictorName = -1;
  v5->m_pDynamicValues = 0;
  v5->_vptr_ICLSearchFields = off_40DF1B0;
  String = KeyValues::GetString(pKeyValues, "caster", "", 0, 0);
  ICLSearchFields::ParseQueryStringID(v5, &v5->m_iAttackerName, pPlayer, String);
  v7 = KeyValues::GetString(pKeyValues, "target", "", 0, 0);
  ICLSearchFields::ParseQueryStringID(v5, &v5->m_iTargetName, pPlayer, v7);
  return v5;
}


// CCLSearchFieldFactory<SCLFirstBloodFields, (DOTA_COMBATLOG_TYPES)18>::CreateSearchFields  (line 177, @0x00000000024abd40, libserver.so)  // inlines: ICLSearchFields, SCLFirstBloodFields
// calls: operator new, KeyValues::GetString, ICLSearchFields::ParseQueryStringID, ICLSearchFields::~ICLSearchFields, operator delete, _Unwind_Resume
// strings: "assist_player_id"
ICLSearchFields *__fastcall CCLSearchFieldFactory<SCLFirstBloodFields,(DOTA_COMBATLOG_TYPES)18>::CreateSearchFields(
        CCLSearchFieldFactory<SCLFirstBloodFields,(DOTA_COMBATLOG_TYPES)18> *const this,
        CDOTAPlayer *pPlayer,
        KeyValues *pKeyValues)
{
  _DWORD *v5; // rbx
  const char *String; // rax
  const char *v7; // rax

  v5 = operator new(0x30u);
  v5[2] = -1;
  v5[3] = 0;
  *(v5 + 16) = 0;
  v5[5] = -1;
  v5[6] = -1;
  v5[7] = -1;
  *(v5 + 4) = 0;
  *v5 = off_40DEF10;
  String = KeyValues::GetString(pKeyValues, "team", "", 0, 0);
  ICLSearchFields::ParseQueryStringID(v5, v5 + 10, pPlayer, String);
  v7 = KeyValues::GetString(pKeyValues, "assist_player_id", "", 0, 0);
  ICLSearchFields::ParseQueryStringID(v5, v5 + 11, pPlayer, v7);
  return v5;
}


// CCLSearchFieldFactory<SCLHeroGainedLevelFields, (DOTA_COMBATLOG_TYPES)25>::CreateSearchFields  (line 177, @0x00000000024abe20, libserver.so)  // inlines: ICLSearchFields, SCLHeroGainedLevelFields
// calls: operator new, KeyValues::GetString, ICLSearchFields::ParseQueryStringID, KeyValues::GetInt, ICLSearchFields::~ICLSearchFields, operator delete, _Unwind_Resume
// strings: "xpm", "gpm"
ICLSearchFields *__fastcall CCLSearchFieldFactory<SCLHeroGainedLevelFields,(DOTA_COMBATLOG_TYPES)25>::CreateSearchFields(
        CCLSearchFieldFactory<SCLHeroGainedLevelFields,(DOTA_COMBATLOG_TYPES)25> *const this,
        CDOTAPlayer *pPlayer,
        KeyValues *pKeyValues)
{
  ICLSearchFields *v5; // rbx
  const char *String; // rax

  v5 = operator new(0x38u);
  v5->m_iType = DOTA_COMBATLOG_TYPES::DOTA_COMBATLOG_INVALID;
  v5->m_flGameTime = 0.0;
  v5->m_bMatchPreviousTarget = 0;
  v5->m_iTargetName = -1;
  v5->m_iAttackerName = -1;
  v5->m_iInflictorName = -1;
  v5->m_pDynamicValues = 0;
  v5->_vptr_ICLSearchFields = off_40DF150;
  String = KeyValues::GetString(pKeyValues, "hero", "", 0, 0);
  ICLSearchFields::ParseQueryStringID(v5, &v5->m_iTargetName, pPlayer, String);
  LODWORD(v5[1]._vptr_ICLSearchFields) = KeyValues::GetInt(pKeyValues, "level", -1);
  HIDWORD(v5[1]._vptr_ICLSearchFields) = KeyValues::GetInt(pKeyValues, "xpm", -1);
  v5[1].m_iType = KeyValues::GetInt(pKeyValues, "gpm", -1);
  return v5;
}


// CCLSearchFieldFactory<SCLNeutralCampStackFields, (DOTA_COMBATLOG_TYPES)20>::CreateSearchFields  (line 177, @0x00000000024abf20, libserver.so)  // inlines: ICLSearchFields, SCLNeutralCampStackFields
// calls: operator new, KeyValues::GetString, ICLSearchFields::ParseQueryStringID, StringFieldToInt, KeyValues::GetInt, ICLSearchFields::~ICLSearchFields, operator delete, _Unwind_Resume
ICLSearchFields *__fastcall CCLSearchFieldFactory<SCLNeutralCampStackFields,(DOTA_COMBATLOG_TYPES)20>::CreateSearchFields(
        CCLSearchFieldFactory<SCLNeutralCampStackFields,(DOTA_COMBATLOG_TYPES)20> *const this,
        CDOTAPlayer *pPlayer,
        KeyValues *pKeyValues)
{
  _DWORD *v5; // rbx
  const char *String; // rax
  const char *v7; // rax

  v5 = operator new(0x38u);
  v5[2] = -1;
  v5[3] = 0;
  *(v5 + 16) = 0;
  v5[5] = -1;
  v5[6] = -1;
  v5[7] = -1;
  *(v5 + 4) = 0;
  *v5 = off_40DEF70;
  String = KeyValues::GetString(pKeyValues, "playerid", "", 0, 0);
  ICLSearchFields::ParseQueryStringID(v5, v5 + 10, pPlayer, String);
  v7 = KeyValues::GetString(pKeyValues, "camp_type", "", 0, 0);
  v5[11] = StringFieldToInt(v7, g_DOTANeutralCampTypeText, 4, -1, 0);
  v5[12] = KeyValues::GetInt(pKeyValues, "count", -1);
  return v5;
}


// CCLSearchFieldFactory<SCLPickupRuneFields, (DOTA_COMBATLOG_TYPES)21>::CreateSearchFields  (line 177, @0x00000000024ac020, libserver.so)  // inlines: ICLSearchFields, SCLPickupRuneFields
// calls: operator new, KeyValues::GetString, ICLSearchFields::ParseQueryStringID, StringFieldToInt, KeyValues::GetInt, ICLSearchFields::~ICLSearchFields, operator delete, _Unwind_Resume
// strings: "rune_type"
ICLSearchFields *__fastcall CCLSearchFieldFactory<SCLPickupRuneFields,(DOTA_COMBATLOG_TYPES)21>::CreateSearchFields(
        CCLSearchFieldFactory<SCLPickupRuneFields,(DOTA_COMBATLOG_TYPES)21> *const this,
        CDOTAPlayer *pPlayer,
        KeyValues *pKeyValues)
{
  _DWORD *v5; // rbx
  const char *String; // rax
  const char *v7; // rax

  v5 = operator new(0x38u);
  v5[2] = -1;
  v5[3] = 0;
  *(v5 + 16) = 0;
  v5[5] = -1;
  v5[6] = -1;
  v5[7] = -1;
  *(v5 + 4) = 0;
  *v5 = off_40DEFD0;
  String = KeyValues::GetString(pKeyValues, "playerid", "", 0, 0);
  ICLSearchFields::ParseQueryStringID(v5, v5 + 10, pPlayer, String);
  v7 = KeyValues::GetString(pKeyValues, "rune_type", "", 0, 0);
  v5[11] = StringFieldToInt(v7, g_DOTARuneTypeText, 7, -1, 0);
  v5[12] = KeyValues::GetInt(pKeyValues, "count", -1);
  return v5;
}


// CCLSearchFieldFactory<SCLKillstreakFields, (DOTA_COMBATLOG_TYPES)16>::CreateSearchFields  (line 177, @0x00000000024ac120, libserver.so)  // inlines: ICLSearchFields, SCLKillstreakFields
// calls: operator new, KeyValues::GetString, ICLSearchFields::ParseQueryStringID, ParseChallengeVariable, ICLSearchFields::~ICLSearchFields, operator delete, _Unwind_Resume
// strings: "spree_type"
ICLSearchFields *__fastcall CCLSearchFieldFactory<SCLKillstreakFields,(DOTA_COMBATLOG_TYPES)16>::CreateSearchFields(
        CCLSearchFieldFactory<SCLKillstreakFields,(DOTA_COMBATLOG_TYPES)16> *const this,
        CDOTAPlayer *pPlayer,
        KeyValues *pKeyValues)
{
  _DWORD *v5; // rbx
  const char *String; // rax
  const char *v7; // rax
  const char *v8; // rax

  v5 = operator new(0x30u);
  v5[2] = -1;
  v5[3] = 0;
  *(v5 + 16) = 0;
  v5[5] = -1;
  v5[6] = -1;
  v5[7] = -1;
  *(v5 + 4) = 0;
  *v5 = off_40DEA30;
  String = KeyValues::GetString(pKeyValues, "playerid", "", 0, 0);
  ICLSearchFields::ParseQueryStringID(v5, v5 + 10, pPlayer, String);
  v7 = KeyValues::GetString(pKeyValues, "attacker", "", 0, 0);
  ICLSearchFields::ParseQueryStringID(v5, v5 + 6, pPlayer, v7);
  v8 = KeyValues::GetString(pKeyValues, "spree_type", "", 0, 0);
  v5[11] = ParseChallengeVariable(v8, ChallengeVariableFormats_t::CVT_KILLSTREAK, -1, 0);
  return v5;
}


// CCLSearchFieldFactory<SCLMultiKillFields, (DOTA_COMBATLOG_TYPES)15>::CreateSearchFields  (line 177, @0x00000000024ac230, libserver.so)  // inlines: ICLSearchFields, SCLMultiKillFields
// calls: operator new, KeyValues::GetString, ICLSearchFields::ParseQueryStringID, ParseChallengeVariable, ICLSearchFields::~ICLSearchFields, operator delete, _Unwind_Resume
// strings: "multi_kill"
ICLSearchFields *__fastcall CCLSearchFieldFactory<SCLMultiKillFields,(DOTA_COMBATLOG_TYPES)15>::CreateSearchFields(
        CCLSearchFieldFactory<SCLMultiKillFields,(DOTA_COMBATLOG_TYPES)15> *const this,
        CDOTAPlayer *pPlayer,
        KeyValues *pKeyValues)
{
  _DWORD *v5; // rbx
  const char *String; // rax
  const char *v7; // rax
  const char *v8; // rax

  v5 = operator new(0x30u);
  v5[2] = -1;
  v5[3] = 0;
  *(v5 + 16) = 0;
  v5[5] = -1;
  v5[6] = -1;
  v5[7] = -1;
  *(v5 + 4) = 0;
  *v5 = off_40DEC70;
  String = KeyValues::GetString(pKeyValues, "playerid", "", 0, 0);
  ICLSearchFields::ParseQueryStringID(v5, v5 + 10, pPlayer, String);
  v7 = KeyValues::GetString(pKeyValues, "attacker", "", 0, 0);
  ICLSearchFields::ParseQueryStringID(v5, v5 + 6, pPlayer, v7);
  v8 = KeyValues::GetString(pKeyValues, "multi_kill", "", 0, 0);
  v5[11] = ParseChallengeVariable(v8, ChallengeVariableFormats_t::CVT_MULTIKILL, -1, 0);
  return v5;
}


// CCLSearchFieldFactory<SCLAbilityTriggerFields, (DOTA_COMBATLOG_TYPES)13>::CreateSearchFields  (line 177, @0x00000000024ac340, libserver.so)  // inlines: ICLSearchFields, SCLAbilityTriggerFields
// calls: operator new, KeyValues::GetString, ICLSearchFields::ParseQueryStringID, ICLSearchFields::~ICLSearchFields, operator delete, _Unwind_Resume
ICLSearchFields *__fastcall CCLSearchFieldFactory<SCLAbilityTriggerFields,(DOTA_COMBATLOG_TYPES)13>::CreateSearchFields(
        CCLSearchFieldFactory<SCLAbilityTriggerFields,(DOTA_COMBATLOG_TYPES)13> *const this,
        CDOTAPlayer *pPlayer,
        KeyValues *pKeyValues)
{
  ICLSearchFields *v5; // rbx
  const char *String; // rax
  const char *v7; // rax
  const char *v8; // rax

  v5 = operator new(0x28u);
  v5->m_iType = DOTA_COMBATLOG_TYPES::DOTA_COMBATLOG_INVALID;
  v5->m_flGameTime = 0.0;
  v5->m_bMatchPreviousTarget = 0;
  v5->m_iTargetName = -1;
  v5->m_iAttackerName = -1;
  v5->m_iInflictorName = -1;
  v5->m_pDynamicValues = 0;
  v5->_vptr_ICLSearchFields = off_40DED30;
  String = KeyValues::GetString(pKeyValues, "ability", "", 0, 0);
  ICLSearchFields::ParseQueryStringID(v5, &v5->m_iInflictorName, pPlayer, String);
  v7 = KeyValues::GetString(pKeyValues, "caster", "", 0, 0);
  ICLSearchFields::ParseQueryStringID(v5, &v5->m_iAttackerName, pPlayer, v7);
  v8 = KeyValues::GetString(pKeyValues, "target", "", 0, 0);
  ICLSearchFields::ParseQueryStringID(v5, &v5->m_iTargetName, pPlayer, v8);
  return v5;
}


// CCLSearchFieldFactory<SCLRevealInvisibleFields, (DOTA_COMBATLOG_TYPES)22>::CreateSearchFields  (line 177, @0x00000000024ac450, libserver.so)  // inlines: ICLSearchFields, SCLRevealInvisibleFields
// calls: operator new, KeyValues::GetString, ICLSearchFields::ParseQueryStringID, ICLSearchFields::~ICLSearchFields, operator delete, _Unwind_Resume
ICLSearchFields *__fastcall CCLSearchFieldFactory<SCLRevealInvisibleFields,(DOTA_COMBATLOG_TYPES)22>::CreateSearchFields(
        CCLSearchFieldFactory<SCLRevealInvisibleFields,(DOTA_COMBATLOG_TYPES)22> *const this,
        CDOTAPlayer *pPlayer,
        KeyValues *pKeyValues)
{
  ICLSearchFields *v5; // rbx
  const char *String; // rax
  const char *v7; // rax
  const char *v8; // rax

  v5 = operator new(0x28u);
  v5->m_iType = DOTA_COMBATLOG_TYPES::DOTA_COMBATLOG_INVALID;
  v5->m_flGameTime = 0.0;
  v5->m_bMatchPreviousTarget = 0;
  v5->m_iTargetName = -1;
  v5->m_iAttackerName = -1;
  v5->m_iInflictorName = -1;
  v5->m_pDynamicValues = 0;
  v5->_vptr_ICLSearchFields = off_40DF030;
  String = KeyValues::GetString(pKeyValues, "ability", "", 0, 0);
  ICLSearchFields::ParseQueryStringID(v5, &v5->m_iInflictorName, pPlayer, String);
  v7 = KeyValues::GetString(pKeyValues, "caster", "", 0, 0);
  ICLSearchFields::ParseQueryStringID(v5, &v5->m_iAttackerName, pPlayer, v7);
  v8 = KeyValues::GetString(pKeyValues, "target", "", 0, 0);
  ICLSearchFields::ParseQueryStringID(v5, &v5->m_iTargetName, pPlayer, v8);
  return v5;
}


// CCLSearchFieldFactory<SCLUnitSummonedFields, (DOTA_COMBATLOG_TYPES)33>::CreateSearchFields  (line 177, @0x00000000024ac560, libserver.so)  // inlines: ICLSearchFields, SCLUnitSummonedFields
// calls: operator new, KeyValues::GetString, ICLSearchFields::ParseQueryStringID, ICLSearchFields::~ICLSearchFields, operator delete, _Unwind_Resume
// strings: "summoner", "summoned_unit"
ICLSearchFields *__fastcall CCLSearchFieldFactory<SCLUnitSummonedFields,(DOTA_COMBATLOG_TYPES)33>::CreateSearchFields(
        CCLSearchFieldFactory<SCLUnitSummonedFields,(DOTA_COMBATLOG_TYPES)33> *const this,
        CDOTAPlayer *pPlayer,
        KeyValues *pKeyValues)
{
  ICLSearchFields *v5; // rbx
  const char *String; // rax
  const char *v7; // rax
  const char *v8; // rax

  v5 = operator new(0x28u);
  v5->m_iType = DOTA_COMBATLOG_TYPES::DOTA_COMBATLOG_INVALID;
  v5->m_flGameTime = 0.0;
  v5->m_bMatchPreviousTarget = 0;
  v5->m_iTargetName = -1;
  v5->m_iAttackerName = -1;
  v5->m_iInflictorName = -1;
  v5->m_pDynamicValues = 0;
  v5->_vptr_ICLSearchFields = off_40DF450;
  String = KeyValues::GetString(pKeyValues, "summoner", "", 0, 0);
  ICLSearchFields::ParseQueryStringID(v5, &v5->m_iAttackerName, pPlayer, String);
  v7 = KeyValues::GetString(pKeyValues, "ability", "", 0, 0);
  ICLSearchFields::ParseQueryStringID(v5, &v5->m_iInflictorName, pPlayer, v7);
  v8 = KeyValues::GetString(pKeyValues, "summoned_unit", "", 0, 0);
  ICLSearchFields::ParseQueryStringID(v5, &v5->m_iTargetName, pPlayer, v8);
  return v5;
}


// CCLSearchFieldFactory<SCLAbilityUseFields, (DOTA_COMBATLOG_TYPES)5>::CreateSearchFields  (line 177, @0x00000000024ac670, libserver.so)  // inlines: ICLSearchFields, SCLAbilityUseFields
// calls: operator new, KeyValues::GetString, ICLSearchFields::ParseQueryStringID, KeyValues::GetInt, ICLSearchFields::~ICLSearchFields, operator delete, _Unwind_Resume
// strings: "target_is_not_self"
ICLSearchFields *__fastcall CCLSearchFieldFactory<SCLAbilityUseFields,(DOTA_COMBATLOG_TYPES)5>::CreateSearchFields(
        CCLSearchFieldFactory<SCLAbilityUseFields,(DOTA_COMBATLOG_TYPES)5> *const this,
        CDOTAPlayer *pPlayer,
        KeyValues *pKeyValues)
{
  ICLSearchFields *v5; // rbx
  const char *String; // rax
  const char *v7; // rax
  const char *v8; // rax
  bool v9; // zf

  v5 = operator new(0x30u);
  v5->m_iType = DOTA_COMBATLOG_TYPES::DOTA_COMBATLOG_INVALID;
  v5->m_flGameTime = 0.0;
  v5->m_bMatchPreviousTarget = 0;
  v5->m_iTargetName = -1;
  v5->m_iAttackerName = -1;
  v5->m_iInflictorName = -1;
  v5->m_pDynamicValues = 0;
  v5->_vptr_ICLSearchFields = off_40DECD0;
  String = KeyValues::GetString(pKeyValues, "ability", "", 0, 0);
  ICLSearchFields::ParseQueryStringID(v5, &v5->m_iInflictorName, pPlayer, String);
  v7 = KeyValues::GetString(pKeyValues, "caster", "", 0, 0);
  ICLSearchFields::ParseQueryStringID(v5, &v5->m_iAttackerName, pPlayer, v7);
  v8 = KeyValues::GetString(pKeyValues, "target", "", 0, 0);
  ICLSearchFields::ParseQueryStringID(v5, &v5->m_iTargetName, pPlayer, v8);
  v9 = KeyValues::GetInt(pKeyValues, "target_is_not_self", 0) == 1;
  LOBYTE(v5[1]._vptr_ICLSearchFields) = v9;
  return v5;
}


// CCLSearchFieldFactory<SCLManaRestoreFields, (DOTA_COMBATLOG_TYPES)24>::CreateSearchFields  (line 177, @0x00000000024ac7a0, libserver.so)  // inlines: ICLSearchFields, SCLManaRestoreFields
// calls: operator new, KeyValues::GetString, ICLSearchFields::ParseQueryStringID, KeyValues::GetInt, ICLSearchFields::~ICLSearchFields, operator delete, _Unwind_Resume
// strings: "target_must_be_hero"
ICLSearchFields *__fastcall CCLSearchFieldFactory<SCLManaRestoreFields,(DOTA_COMBATLOG_TYPES)24>::CreateSearchFields(
        CCLSearchFieldFactory<SCLManaRestoreFields,(DOTA_COMBATLOG_TYPES)24> *const this,
        CDOTAPlayer *pPlayer,
        KeyValues *pKeyValues)
{
  ICLSearchFields *v5; // rbx
  const char *String; // rax
  const char *v7; // rax
  const char *v8; // rax
  bool v9; // zf

  v5 = operator new(0x30u);
  v5->m_iType = DOTA_COMBATLOG_TYPES::DOTA_COMBATLOG_INVALID;
  v5->m_flGameTime = 0.0;
  v5->m_bMatchPreviousTarget = 0;
  v5->m_iTargetName = -1;
  v5->m_iAttackerName = -1;
  v5->m_iInflictorName = -1;
  v5->m_pDynamicValues = 0;
  v5->_vptr_ICLSearchFields = off_40DF0F0;
  String = KeyValues::GetString(pKeyValues, "ability", "", 0, 0);
  ICLSearchFields::ParseQueryStringID(v5, &v5->m_iInflictorName, pPlayer, String);
  v7 = KeyValues::GetString(pKeyValues, "caster", "", 0, 0);
  ICLSearchFields::ParseQueryStringID(v5, &v5->m_iAttackerName, pPlayer, v7);
  v8 = KeyValues::GetString(pKeyValues, "target", "", 0, 0);
  ICLSearchFields::ParseQueryStringID(v5, &v5->m_iTargetName, pPlayer, v8);
  v9 = KeyValues::GetInt(pKeyValues, "target_must_be_hero", 0) == 1;
  LOBYTE(v5[1]._vptr_ICLSearchFields) = v9;
  return v5;
}


// CCLSearchFieldFactory<SCLHeroSavedFields, (DOTA_COMBATLOG_TYPES)23>::CreateSearchFields  (line 177, @0x00000000024ac8d0, libserver.so)  // inlines: ICLSearchFields, SCLHeroSavedFields
// calls: operator new, KeyValues::GetString, ICLSearchFields::ParseQueryStringID, KeyValues::GetInt, ICLSearchFields::~ICLSearchFields, operator delete, _Unwind_Resume
// strings: "is_heal_save"
ICLSearchFields *__fastcall CCLSearchFieldFactory<SCLHeroSavedFields,(DOTA_COMBATLOG_TYPES)23>::CreateSearchFields(
        CCLSearchFieldFactory<SCLHeroSavedFields,(DOTA_COMBATLOG_TYPES)23> *const this,
        CDOTAPlayer *pPlayer,
        KeyValues *pKeyValues)
{
  ICLSearchFields *v5; // rbx
  const char *String; // rax
  const char *v7; // rax
  const char *v8; // rax
  bool v9; // zf

  v5 = operator new(0x30u);
  v5->m_iType = DOTA_COMBATLOG_TYPES::DOTA_COMBATLOG_INVALID;
  v5->m_flGameTime = 0.0;
  v5->m_bMatchPreviousTarget = 0;
  v5->m_iTargetName = -1;
  v5->m_iAttackerName = -1;
  v5->m_iInflictorName = -1;
  v5->m_pDynamicValues = 0;
  v5->_vptr_ICLSearchFields = off_40DF090;
  String = KeyValues::GetString(pKeyValues, "ability", "", 0, 0);
  ICLSearchFields::ParseQueryStringID(v5, &v5->m_iInflictorName, pPlayer, String);
  v7 = KeyValues::GetString(pKeyValues, "caster", "", 0, 0);
  ICLSearchFields::ParseQueryStringID(v5, &v5->m_iAttackerName, pPlayer, v7);
  v8 = KeyValues::GetString(pKeyValues, "target", "", 0, 0);
  ICLSearchFields::ParseQueryStringID(v5, &v5->m_iTargetName, pPlayer, v8);
  v9 = KeyValues::GetInt(pKeyValues, "is_heal_save", 0) == 1;
  LOBYTE(v5[1]._vptr_ICLSearchFields) = v9;
  return v5;
}


// CCLSearchFieldFactory<SCLTeamBuildingKillFields, (DOTA_COMBATLOG_TYPES)17>::CreateSearchFields  (line 177, @0x00000000024aca00, libserver.so)  // inlines: ICLSearchFields, SCLTeamBuildingKillFields
// calls: operator new, KeyValues::GetString, ICLSearchFields::ParseQueryStringID, StringFieldToInt, ICLSearchFields::~ICLSearchFields, operator delete, _Unwind_Resume
// strings: "building_type"
// globals: g_szBuildingKill_Types
ICLSearchFields *__fastcall CCLSearchFieldFactory<SCLTeamBuildingKillFields,(DOTA_COMBATLOG_TYPES)17>::CreateSearchFields(
        CCLSearchFieldFactory<SCLTeamBuildingKillFields,(DOTA_COMBATLOG_TYPES)17> *const this,
        CDOTAPlayer *pPlayer,
        KeyValues *pKeyValues)
{
  _DWORD *v5; // rbx
  const char *String; // rax
  const char *v7; // rax
  const char *v8; // rax
  const char *v9; // rax

  v5 = operator new(0x38u);
  v5[2] = -1;
  v5[3] = 0;
  *(v5 + 16) = 0;
  v5[5] = -1;
  v5[6] = -1;
  v5[7] = -1;
  *(v5 + 4) = 0;
  *v5 = off_40DEEB0;
  String = KeyValues::GetString(pKeyValues, "team", "", 0, 0);
  ICLSearchFields::ParseQueryStringID(v5, v5 + 10, pPlayer, String);
  v7 = KeyValues::GetString(pKeyValues, "enemyteam", "", 0, 0);
  ICLSearchFields::ParseQueryStringID(v5, v5 + 11, pPlayer, v7);
  v8 = KeyValues::GetString(pKeyValues, "building", "", 0, 0);
  ICLSearchFields::ParseQueryStringID(v5, v5 + 5, pPlayer, v8);
  v9 = KeyValues::GetString(pKeyValues, "building_type", "", 0, 0);
  v5[12] = StringFieldToInt(v9, g_szBuildingKill_Types, 4, 0, 0);
  return v5;
}


// CCLSearchFieldFactory<SCLItemUseFields, (DOTA_COMBATLOG_TYPES)6>::CreateSearchFields  (line 177, @0x00000000024acb40, libserver.so)  // inlines: ICLSearchFields, SCLItemUseFields
// calls: operator new, GetItemNameFromEventBlock, ICLSearchFields::ParseQueryStringID, KeyValues::GetString, KeyValues::GetInt, ICLSearchFields::~ICLSearchFields, operator delete, _Unwind_Resume
// strings: "target_must_be_hero", "cast_on_location", "target_is_not_self"
ICLSearchFields *__fastcall CCLSearchFieldFactory<SCLItemUseFields,(DOTA_COMBATLOG_TYPES)6>::CreateSearchFields(
        CCLSearchFieldFactory<SCLItemUseFields,(DOTA_COMBATLOG_TYPES)6> *const this,
        CDOTAPlayer *pPlayer,
        KeyValues *pKeyValues)
{
  ICLSearchFields *v5; // rbx
  const char *ItemNameFromEventBlock; // rax
  const char *String; // rax
  const char *v8; // rax
  bool v9; // zf

  v5 = operator new(0x30u);
  v5->m_iType = DOTA_COMBATLOG_TYPES::DOTA_COMBATLOG_INVALID;
  v5->m_flGameTime = 0.0;
  v5->m_bMatchPreviousTarget = 0;
  v5->m_iTargetName = -1;
  v5->m_iAttackerName = -1;
  v5->m_iInflictorName = -1;
  v5->m_pDynamicValues = 0;
  v5->_vptr_ICLSearchFields = off_40DEDF0;
  ItemNameFromEventBlock = GetItemNameFromEventBlock(pKeyValues);
  ICLSearchFields::ParseQueryStringID(v5, &v5->m_iInflictorName, pPlayer, ItemNameFromEventBlock);
  String = KeyValues::GetString(pKeyValues, "caster", "", 0, 0);
  ICLSearchFields::ParseQueryStringID(v5, &v5->m_iAttackerName, pPlayer, String);
  v8 = KeyValues::GetString(pKeyValues, "target", "", 0, 0);
  ICLSearchFields::ParseQueryStringID(v5, &v5->m_iTargetName, pPlayer, v8);
  BYTE4(v5[1]._vptr_ICLSearchFields) = KeyValues::GetInt(pKeyValues, "target_must_be_hero", 0) == 1;
  LODWORD(v5[1]._vptr_ICLSearchFields) = 2 * (KeyValues::GetInt(pKeyValues, "cast_on_location", -1) == 1) - 1;
  v9 = KeyValues::GetInt(pKeyValues, "target_is_not_self", 0) == 1;
  BYTE5(v5[1]._vptr_ICLSearchFields) = v9;
  return v5;
}


// CCLSearchFieldFactory<SCLHealFields, (DOTA_COMBATLOG_TYPES)1>::CreateSearchFields  (line 177, @0x00000000024acc90, libserver.so)  // inlines: ICLSearchFields, SCLHealFields
// calls: operator new, KeyValues::GetString, ICLSearchFields::ParseQueryStringID, KeyValues::GetInt, ICLSearchFields::~ICLSearchFields, operator delete, _Unwind_Resume
// strings: "target_must_be_hero", "target_must_be_building"
ICLSearchFields *__fastcall CCLSearchFieldFactory<SCLHealFields,(DOTA_COMBATLOG_TYPES)1>::CreateSearchFields(
        CCLSearchFieldFactory<SCLHealFields,(DOTA_COMBATLOG_TYPES)1> *const this,
        CDOTAPlayer *pPlayer,
        KeyValues *pKeyValues)
{
  ICLSearchFields *v5; // rbx
  const char *String; // rax
  const char *v7; // rax
  const char *v8; // rax
  bool v9; // zf

  v5 = operator new(0x30u);
  v5->m_iType = DOTA_COMBATLOG_TYPES::DOTA_COMBATLOG_INVALID;
  v5->m_flGameTime = 0.0;
  v5->m_bMatchPreviousTarget = 0;
  v5->m_iTargetName = -1;
  v5->m_iAttackerName = -1;
  v5->m_iInflictorName = -1;
  v5->m_pDynamicValues = 0;
  v5->_vptr_ICLSearchFields = off_40DED90;
  String = KeyValues::GetString(pKeyValues, "source", "", 0, 0);
  ICLSearchFields::ParseQueryStringID(v5, &v5->m_iInflictorName, pPlayer, String);
  v7 = KeyValues::GetString(pKeyValues, "healer", "", 0, 0);
  ICLSearchFields::ParseQueryStringID(v5, &v5->m_iAttackerName, pPlayer, v7);
  v8 = KeyValues::GetString(pKeyValues, "target", "", 0, 0);
  ICLSearchFields::ParseQueryStringID(v5, &v5->m_iTargetName, pPlayer, v8);
  LOBYTE(v5[1]._vptr_ICLSearchFields) = KeyValues::GetInt(pKeyValues, "target_must_be_hero", 0) == 1;
  BYTE1(v5[1]._vptr_ICLSearchFields) = KeyValues::GetInt(pKeyValues, "target_must_be_building", 0) == 1;
  v9 = KeyValues::GetInt(pKeyValues, "lifesteal", 0) == 1;
  BYTE2(v5[1]._vptr_ICLSearchFields) = v9;
  return v5;
}


// CCLSearchFieldFactory<SCLManaDamageFields, (DOTA_COMBATLOG_TYPES)31>::CreateSearchFields  (line 177, @0x00000000024acdf0, libserver.so)  // inlines: ICLSearchFields, SCLManaDamageFields
// calls: operator new, KeyValues::GetString, ICLSearchFields::ParseQueryStringID, KeyValues::GetInt, ICLSearchFields::~ICLSearchFields, operator delete, _Unwind_Resume
// strings: "damage_source", "target_must_be_hero"
ICLSearchFields *__fastcall CCLSearchFieldFactory<SCLManaDamageFields,(DOTA_COMBATLOG_TYPES)31>::CreateSearchFields(
        CCLSearchFieldFactory<SCLManaDamageFields,(DOTA_COMBATLOG_TYPES)31> *const this,
        CDOTAPlayer *pPlayer,
        KeyValues *pKeyValues)
{
  void *v5; // rbx
  const char *String; // rax
  const char *v7; // rax
  const char *v8; // rax
  const char *v9; // rax
  bool v10; // zf

  v5 = operator new(0x30u);
  *(v5 + 2) = -1;
  *(v5 + 3) = 0;
  *(v5 + 16) = 0;
  *(v5 + 5) = -1;
  *(v5 + 6) = -1;
  *(v5 + 7) = -1;
  *(v5 + 4) = 0;
  *v5 = off_40DF390;
  String = KeyValues::GetString(pKeyValues, "inflictor", "", 0, 0);
  ICLSearchFields::ParseQueryStringID(v5, v5 + 7, pPlayer, String);
  v7 = KeyValues::GetString(pKeyValues, "attacker", "", 0, 0);
  ICLSearchFields::ParseQueryStringID(v5, v5 + 6, pPlayer, v7);
  v8 = KeyValues::GetString(pKeyValues, "target", "", 0, 0);
  ICLSearchFields::ParseQueryStringID(v5, v5 + 5, pPlayer, v8);
  v9 = KeyValues::GetString(pKeyValues, "damage_source", "", 0, 0);
  ICLSearchFields::ParseQueryStringID(v5, v5 + 10, pPlayer, v9);
  v10 = KeyValues::GetInt(pKeyValues, "target_must_be_hero", 0) == 1;
  *(v5 + 44) = v10;
  return v5;
}


// CCLSearchFieldFactory<SCLModifierRefreshFields, (DOTA_COMBATLOG_TYPES)19>::CreateSearchFields  (line 177, @0x00000000024acf40, libserver.so)  // inlines: ICLSearchFields, SCLModifierRefreshFields
// calls: operator new, KeyValues::GetString, ICLSearchFields::ParseQueryStringID, KeyValues::GetInt, ICLSearchFields::~ICLSearchFields, operator delete, _Unwind_Resume
// strings: "target_must_be_hero", "is_stun", "match_start_target", "stack_count"
ICLSearchFields *__fastcall CCLSearchFieldFactory<SCLModifierRefreshFields,(DOTA_COMBATLOG_TYPES)19>::CreateSearchFields(
        CCLSearchFieldFactory<SCLModifierRefreshFields,(DOTA_COMBATLOG_TYPES)19> *const this,
        CDOTAPlayer *pPlayer,
        KeyValues *pKeyValues)
{
  ICLSearchFields *v5; // rbx
  const char *String; // rax
  const char *v7; // rax
  const char *v8; // rax

  v5 = operator new(0x30u);
  v5->m_iType = DOTA_COMBATLOG_TYPES::DOTA_COMBATLOG_INVALID;
  v5->m_flGameTime = 0.0;
  v5->m_bMatchPreviousTarget = 0;
  v5->m_iTargetName = -1;
  v5->m_iAttackerName = -1;
  v5->m_iInflictorName = -1;
  v5->m_pDynamicValues = 0;
  v5->_vptr_ICLSearchFields = off_40DEC10;
  String = KeyValues::GetString(pKeyValues, "modifier", "", 0, 0);
  ICLSearchFields::ParseQueryStringID(v5, &v5->m_iInflictorName, pPlayer, String);
  v7 = KeyValues::GetString(pKeyValues, "caster", "", 0, 0);
  ICLSearchFields::ParseQueryStringID(v5, &v5->m_iAttackerName, pPlayer, v7);
  v8 = KeyValues::GetString(pKeyValues, "target", "", 0, 0);
  ICLSearchFields::ParseQueryStringID(v5, &v5->m_iTargetName, pPlayer, v8);
  LOBYTE(v5[1]._vptr_ICLSearchFields) = KeyValues::GetInt(pKeyValues, "target_must_be_hero", 0) == 1;
  BYTE1(v5[1]._vptr_ICLSearchFields) = KeyValues::GetInt(pKeyValues, "is_stun", 0) == 1;
  v5->m_bMatchPreviousTarget = KeyValues::GetInt(pKeyValues, "match_start_target", 0) == 1;
  HIDWORD(v5[1]._vptr_ICLSearchFields) = KeyValues::GetInt(pKeyValues, "stack_count", -1);
  return v5;
}


// CCLSearchFieldFactory<SCLModifierAddFields, (DOTA_COMBATLOG_TYPES)2>::CreateSearchFields  (line 177, @0x00000000024ad0b0, libserver.so)  // inlines: ICLSearchFields, SCLModifierAddFields
// calls: operator new, KeyValues::GetString, ICLSearchFields::ParseQueryStringID, KeyValues::GetInt, ICLSearchFields::~ICLSearchFields, operator delete, _Unwind_Resume
// strings: "caster_playerid", "target_must_be_hero", "is_stun", "match_start_target", "duration_greater_than_mseconds"
ICLSearchFields *__fastcall CCLSearchFieldFactory<SCLModifierAddFields,(DOTA_COMBATLOG_TYPES)2>::CreateSearchFields(
        CCLSearchFieldFactory<SCLModifierAddFields,(DOTA_COMBATLOG_TYPES)2> *const this,
        CDOTAPlayer *pPlayer,
        KeyValues *pKeyValues)
{
  void *v5; // rbx
  const char *String; // rax
  const char *v7; // rax
  const char *v8; // rax
  const char *v9; // rax
  float Int; // xmm0_4

  v5 = operator new(0x38u);
  *(v5 + 2) = -1;
  *(v5 + 3) = 0;
  *(v5 + 16) = 0;
  *(v5 + 5) = -1;
  *(v5 + 6) = -1;
  *(v5 + 7) = -1;
  *(v5 + 4) = 0;
  *v5 = off_40DEB50;
  String = KeyValues::GetString(pKeyValues, "modifier", "", 0, 0);
  ICLSearchFields::ParseQueryStringID(v5, v5 + 7, pPlayer, String);
  v7 = KeyValues::GetString(pKeyValues, "caster", "", 0, 0);
  ICLSearchFields::ParseQueryStringID(v5, v5 + 6, pPlayer, v7);
  v8 = KeyValues::GetString(pKeyValues, "target", "", 0, 0);
  ICLSearchFields::ParseQueryStringID(v5, v5 + 5, pPlayer, v8);
  v9 = KeyValues::GetString(pKeyValues, "caster_playerid", "", 0, 0);
  ICLSearchFields::ParseQueryStringID(v5, v5 + 10, pPlayer, v9);
  *(v5 + 44) = KeyValues::GetInt(pKeyValues, "target_must_be_hero", 0) == 1;
  *(v5 + 45) = KeyValues::GetInt(pKeyValues, "is_stun", 0) == 1;
  *(v5 + 16) = KeyValues::GetInt(pKeyValues, "match_start_target", 0) == 1;
  Int = KeyValues::GetInt(pKeyValues, "duration_greater_than_mseconds", 0);
  *(v5 + 12) = Int / 1000.0;
  return v5;
}


// CCLSearchFieldFactory<SCLModifierRemoveFields, (DOTA_COMBATLOG_TYPES)3>::CreateSearchFields  (line 177, @0x00000000024ad250, libserver.so)  // inlines: ICLSearchFields, SCLModifierRemoveFields
// calls: operator new, KeyValues::GetString, ICLSearchFields::ParseQueryStringID, KeyValues::GetInt, ICLSearchFields::~ICLSearchFields, operator delete, _Unwind_Resume
// strings: "caster_playerid", "purge_npc", "purge_ability", "target_must_be_hero", "is_stun", "is_debuff" (12 total)
ICLSearchFields *__fastcall CCLSearchFieldFactory<SCLModifierRemoveFields,(DOTA_COMBATLOG_TYPES)3>::CreateSearchFields(
        CCLSearchFieldFactory<SCLModifierRemoveFields,(DOTA_COMBATLOG_TYPES)3> *const this,
        CDOTAPlayer *pPlayer,
        KeyValues *pKeyValues)
{
  void *v5; // rbx
  const char *String; // rax
  const char *v7; // rax
  const char *v8; // rax
  const char *v9; // rax
  const char *v10; // rax
  const char *v11; // rax
  bool v12; // zf

  v5 = operator new(0x40u);
  *(v5 + 2) = -1;
  *(v5 + 3) = 0;
  *(v5 + 16) = 0;
  *(v5 + 5) = -1;
  *(v5 + 6) = -1;
  *(v5 + 7) = -1;
  *(v5 + 4) = 0;
  *v5 = off_40DEBB0;
  String = KeyValues::GetString(pKeyValues, "modifier", "", 0, 0);
  ICLSearchFields::ParseQueryStringID(v5, v5 + 7, pPlayer, String);
  v7 = KeyValues::GetString(pKeyValues, "caster", "", 0, 0);
  ICLSearchFields::ParseQueryStringID(v5, v5 + 6, pPlayer, v7);
  v8 = KeyValues::GetString(pKeyValues, "target", "", 0, 0);
  ICLSearchFields::ParseQueryStringID(v5, v5 + 5, pPlayer, v8);
  v9 = KeyValues::GetString(pKeyValues, "caster_playerid", "", 0, 0);
  ICLSearchFields::ParseQueryStringID(v5, v5 + 10, pPlayer, v9);
  v10 = KeyValues::GetString(pKeyValues, "purge_npc", "", 0, 0);
  ICLSearchFields::ParseQueryStringID(v5, v5 + 13, pPlayer, v10);
  v11 = KeyValues::GetString(pKeyValues, "purge_ability", "", 0, 0);
  ICLSearchFields::ParseQueryStringID(v5, v5 + 14, pPlayer, v11);
  *(v5 + 44) = KeyValues::GetInt(pKeyValues, "target_must_be_hero", 0) == 1;
  *(v5 + 45) = KeyValues::GetInt(pKeyValues, "is_stun", 0) == 1;
  *(v5 + 46) = KeyValues::GetInt(pKeyValues, "is_debuff", 0) == 1;
  *(v5 + 47) = KeyValues::GetInt(pKeyValues, "is_slow", 0) == 1;
  *(v5 + 48) = KeyValues::GetInt(pKeyValues, "is_silence", 0) == 1;
  *(v5 + 49) = KeyValues::GetInt(pKeyValues, "is_invisibility_buff", 0) == 1;
  *(v5 + 16) = KeyValues::GetInt(pKeyValues, "match_start_target", 0) == 1;
  *(v5 + 50) = KeyValues::GetInt(pKeyValues, "purged", 0) == 1;
  v12 = KeyValues::GetInt(pKeyValues, "is_motion_controller_buff", 0) == 1;
  *(v5 + 51) = v12;
  return v5;
}


// CCLSearchFieldFactory<SCLDeathFields, (DOTA_COMBATLOG_TYPES)4>::CreateSearchFields  (line 177, @0x00000000024ad4c0, libserver.so)  // inlines: ICLSearchFields, SCLDeathFields
// calls: operator new, KeyValues::GetString, ICLSearchFields::ParseQueryStringID, KeyValues::GetInt, StringFieldToInt, ICLSearchFields::~ICLSearchFields, operator delete, _Unwind_Resume
// strings: "last_hits", "attacker_team", "target_team", "damage_source", "assist_player_id", "target_must_be_hero" (9 total)
// globals: SCLDeathFields::SCLDeathFields(CDOTAPlayer *,KeyValues *)::s_DOTAPositionNames
ICLSearchFields *__fastcall CCLSearchFieldFactory<SCLDeathFields,(DOTA_COMBATLOG_TYPES)4>::CreateSearchFields(
        CCLSearchFieldFactory<SCLDeathFields,(DOTA_COMBATLOG_TYPES)4> *const this,
        CDOTAPlayer *pPlayer,
        KeyValues *pKeyValues)
{
  void *v5; // rbx
  const char *String; // rax
  const char *v7; // rax
  const char *v8; // rax
  const char *v9; // rax
  const char *v10; // rax
  const char *v11; // rax
  const char *v12; // rax
  const char *v13; // rax
  const char *v14; // rax

  v5 = operator new(0x48u);
  *(v5 + 2) = -1;
  *(v5 + 3) = 0;
  *(v5 + 16) = 0;
  *(v5 + 5) = -1;
  *(v5 + 6) = -1;
  *(v5 + 7) = -1;
  *(v5 + 4) = 0;
  *v5 = off_40DE9D0;
  String = KeyValues::GetString(pKeyValues, "inflictor", "", 0, 0);
  ICLSearchFields::ParseQueryStringID(v5, v5 + 7, pPlayer, String);
  v7 = KeyValues::GetString(pKeyValues, "attacker", "", 0, 0);
  ICLSearchFields::ParseQueryStringID(v5, v5 + 6, pPlayer, v7);
  v8 = KeyValues::GetString(pKeyValues, "target", "", 0, 0);
  ICLSearchFields::ParseQueryStringID(v5, v5 + 5, pPlayer, v8);
  *(v5 + 10) = KeyValues::GetInt(pKeyValues, "last_hits", -1);
  v9 = KeyValues::GetString(pKeyValues, "attacker_team", "", 0, 0);
  ICLSearchFields::ParseQueryStringID(v5, v5 + 11, pPlayer, v9);
  v10 = KeyValues::GetString(pKeyValues, "target_team", "", 0, 0);
  ICLSearchFields::ParseQueryStringID(v5, v5 + 12, pPlayer, v10);
  v11 = KeyValues::GetString(pKeyValues, "damage_source", "", 0, 0);
  ICLSearchFields::ParseQueryStringID(v5, v5 + 13, pPlayer, v11);
  v12 = KeyValues::GetString(pKeyValues, "assist_player_id", "", 0, 0);
  ICLSearchFields::ParseQueryStringID(v5, v5 + 14, pPlayer, v12);
  *(v5 + 60) = KeyValues::GetInt(pKeyValues, "target_must_be_hero", 0) == 1;
  *(v5 + 16) = KeyValues::GetInt(pKeyValues, "match_start_target", 0) == 1;
  *(v5 + 61) = KeyValues::GetInt(pKeyValues, "long_range_kill", 0) == 1;
  v13 = KeyValues::GetString(pKeyValues, "location", "", 0, 0);
  *(v5 + 16) = StringFieldToInt(
                 v13,
                 &SCLDeathFields::SCLDeathFields(CDOTAPlayer *,KeyValues *)::s_DOTAPositionNames,
                 16,
                 -1,
                 0);
  v14 = KeyValues::GetString(pKeyValues, "is_creep_from_camp_type", "", 0, 0);
  *(v5 + 17) = StringFieldToInt(v14, g_DOTANeutralCampTypeText, 4, -1, 0);
  return v5;
}


// CCLSearchFieldFactory<SCLAttackFields, (DOTA_COMBATLOG_TYPES)0>::CreateSearchFields  (line 177, @0x00000000024ad750, libserver.so)  // inlines: ICLSearchFields, SCLAttackFields
// calls: operator new, KeyValues::GetInt, KeyValues::GetString, ICLSearchFields::ParseQueryStringID, StringFieldToInt, ICLSearchFields::~ICLSearchFields, operator delete, _Unwind_Resume
// strings: "auto_attack", "attacker_team", "target_team", "damage_source", "damage_category", "building_type" (11 total)
// globals: SCLAttackFields::SCLAttackFields(CDOTAPlayer *,KeyValues *)::s_pDOTADamageCategory, g_szBuildingKill_Types
ICLSearchFields *__fastcall CCLSearchFieldFactory<SCLAttackFields,(DOTA_COMBATLOG_TYPES)0>::CreateSearchFields(
        CCLSearchFieldFactory<SCLAttackFields,(DOTA_COMBATLOG_TYPES)0> *const this,
        CDOTAPlayer *pPlayer,
        KeyValues *pKeyValues)
{
  void *v5; // rbx
  int Int; // eax
  bool v7; // r14
  const char *String; // rcx
  const char *v9; // rax
  const char *v10; // rax
  const char *v11; // rax
  const char *v12; // rax
  const char *v13; // rax
  const char *v14; // rax
  int v15; // eax
  const char *v16; // rax
  const char *v17; // rax

  v5 = operator new(0x48u);
  *(v5 + 2) = -1;
  *(v5 + 3) = 0;
  *(v5 + 16) = 0;
  *(v5 + 5) = -1;
  *(v5 + 6) = -1;
  *(v5 + 7) = -1;
  *(v5 + 4) = 0;
  *v5 = off_40DEAF0;
  Int = KeyValues::GetInt(pKeyValues, "auto_attack", 0);
  v7 = Int == 1;
  if ( Int == 1 )
    String = "";
  else
    String = KeyValues::GetString(pKeyValues, "attack", "", 0, 0);
  ICLSearchFields::ParseQueryStringID(v5, v5 + 7, pPlayer, String);
  if ( v7 )
    *(v5 + 7) = 0;
  v9 = KeyValues::GetString(pKeyValues, "attacker", "", 0, 0);
  ICLSearchFields::ParseQueryStringID(v5, v5 + 6, pPlayer, v9);
  v10 = KeyValues::GetString(pKeyValues, "target", "", 0, 0);
  ICLSearchFields::ParseQueryStringID(v5, v5 + 5, pPlayer, v10);
  v11 = KeyValues::GetString(pKeyValues, "attacker_team", "", 0, 0);
  ICLSearchFields::ParseQueryStringID(v5, v5 + 10, pPlayer, v11);
  v12 = KeyValues::GetString(pKeyValues, "target_team", "", 0, 0);
  ICLSearchFields::ParseQueryStringID(v5, v5 + 11, pPlayer, v12);
  v13 = KeyValues::GetString(pKeyValues, "damage_source", "", 0, 0);
  ICLSearchFields::ParseQueryStringID(v5, v5 + 12, pPlayer, v13);
  v14 = KeyValues::GetString(pKeyValues, "damage_type", "", 0, 0);
  v15 = StringFieldToInt(v14, g_DOTADamageTypeText, 3, -1, 0);
  *(v5 + 13) = v15;
  if ( v15 == -1 )
    *(v5 + 13) = 0;
  else
    *(v5 + 13) = 1 << v15;
  v16 = KeyValues::GetString(pKeyValues, "damage_category", "", 0, 0);
  *(v5 + 14) = StringFieldToInt(
                 v16,
                 &SCLAttackFields::SCLAttackFields(CDOTAPlayer *,KeyValues *)::s_pDOTADamageCategory,
                 2,
                 -1,
                 0);
  v17 = KeyValues::GetString(pKeyValues, "building_type", "", 0, 0);
  *(v5 + 15) = StringFieldToInt(v17, g_szBuildingKill_Types, 4, 0, 0);
  *(v5 + 64) = KeyValues::GetInt(pKeyValues, "target_must_be_hero", 0) == 1;
  *(v5 + 67) = KeyValues::GetInt(pKeyValues, "attacker_must_be_hero", 0) == 1;
  *(v5 + 65) = KeyValues::GetInt(pKeyValues, "target_must_be_building", 0) == 1;
  *(v5 + 66) = KeyValues::GetInt(pKeyValues, "attack_is_ultimate_ability", 0) == 1;
  *(v5 + 17) = KeyValues::GetInt(pKeyValues, "damage_greater_than", 0);
  return v5;
}


// CDOTA_CombatLog::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition  (line 200, @0x00000000024976b0, libserver.so)
void __fastcall CDOTA_CombatLog::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition(CDOTA_CombatLog *const this)
{
  ;
}


// CDOTA_CombatLog::DoesGameSystemReallocate  (line 200, @0x00000000024976c0, libserver.so)
// globals: CDOTA_CombatLog::sm_Factory
bool __fastcall CDOTA_CombatLog::DoesGameSystemReallocate(const CDOTA_CombatLog *const this)
{
  return (*(CDOTA_CombatLog::sm_Factory->_vptr_IGameSystemFactory + 8))(CDOTA_CombatLog::sm_Factory);
}


// CDOTA_CombatLog::SetGameSystemGlobalPtrs  (line 200, @0x00000000024976e0, libserver.so)  // inlines: SetGameSystemGlobalPtrImpl
// globals: CDOTA_CombatLog::sm_Factory
void __fastcall CDOTA_CombatLog::SetGameSystemGlobalPtrs(CDOTA_CombatLog *const this, void *pValue)
{
  if ( CDOTA_CombatLog::sm_Factory != 0 )
    (*(CDOTA_CombatLog::sm_Factory->_vptr_IGameSystemFactory + 7))(CDOTA_CombatLog::sm_Factory, pValue);
}


