// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/dota_base_game_mode.cpp:30
class C_CDOTABaseGameMode_MapInstall {
	C_CDOTABaseGameMode_MapInstall();

	// sizeof = 1
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTABaseGameMode::YouForgotToImplementOrDeclareServerClass  (line 30, @0x0000000002462550, libserver.so)
int __fastcall CDOTABaseGameMode::YouForgotToImplementOrDeclareServerClass(CDOTABaseGameMode *const this)
{
  return 0;
}


// CDOTABaseGameMode::GetServerClass  (line 30, @0x0000000002466bc0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTABaseGameMode::GetServerClass(CDOTABaseGameMode *const this)
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


// CDOTABaseGameMode::CDOTABaseGameMode  (line 94, @0x0000000002466cc0, libserver.so)  // inlines: CEntityHandle, CHandle, CNetworkUtlVectorBase, CNetworkUtlVector_MemoryType, CNetworkVarBase, CUtlMemory, CUtlVector, CUtlVectorBase, EnsureValidValue<bool>, EnsureValidValue<float>, EnsureValidValue<int>, EnsureValidValue<unsigned int>, GetFloat, NetworkStateChanged, Purge, RemoveAll, Set, VScriptFilter, operator=<bool>, operator=<float>, operator=<int>, operator=<unsigned int>, ~CNetworkUtlVectorBase, ~CNetworkUtlVector_MemoryType, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~VScriptFilter
// calls: CBaseEntity::CBaseEntity, CBaseEntity::NetworkStateChanged, VScriptFilter::ClearFilterFunction, CBaseEntity::~CBaseEntity, _Unwind_Resume, CUtlMemory<int, int>::Purge
// callers: CDOTABaseGameMode::CEntityInstanceEntityClass::ConstructInstance
void __fastcall CDOTABaseGameMode::CDOTABaseGameMode(CDOTABaseGameMode *const this)
{
  int m_Value; // edx
  __int64 v3; // xmm0_8
  __m128i m_fValue_low; // xmm1
  float v5; // r13d
  __m128i v6; // xmm2
  float v7; // r12d

  CBaseEntity::CBaseEntity(this);
  this->_vptr_IHandleEntity = &off_40DCBD0;
  this->m_nCustomGameForceHeroSelectionId.m_Value = 0;
  this->m_bAlwaysShowPlayerInventory.m_Value = 0;
  this->m_bGoldSoundDisabled.m_Value = 0;
  this->m_bRecommendedItemsDisabled.m_Value = 0;
  this->m_bStickyItemDisabled.m_Value = 0;
  this->m_bStashPurchasingDisabled.m_Value = 0;
  this->m_bFogOfWarDisabled.m_Value = 0;
  this->m_bUseUnseenFOW.m_Value = 0;
  this->m_bUseCustomBuybackCost.m_Value = 0;
  this->m_bUseCustomBuybackCooldown.m_Value = 0;
  this->m_bBuybackEnabled.m_Value = 0;
  this->m_flCameraDistanceOverride.m_Value = 0.0;
  this->m_hOverrideSelectionEntity.m_Value.m_Index = -1;
  this->m_bTopBarTeamValuesOverride.m_Value = 0;
  this->m_bTopBarTeamValuesVisible.m_Value = 0;
  this->m_nTeamGoodGuysTopBarValue.m_Value = 0;
  this->m_nTeamBadGuysTopBarValue.m_Value = 0;
  this->m_bAlwaysShowPlayerNames.m_Value = 0;
  this->m_bUseCustomHeroLevels.m_Value = 0;
  this->m_nCustomXPRequiredToReachNextLevel.m_Vector.m_Size = 0;
  this->m_nCustomXPRequiredToReachNextLevel.m_Vector.m_Memory.m_pMemory = 0;
  this->m_nCustomXPRequiredToReachNextLevel.m_Vector.m_Memory.m_nAllocationCount = 0;
  this->m_nCustomXPRequiredToReachNextLevel.m_Vector.m_Memory.m_nGrowSize = 0;
  this->m_bTowerBackdoorProtectionEnabled.m_Value = 0;
  this->m_bBotThinkingEnabled.m_Value = 0;
  this->m_bAnnouncerDisabled.m_Value = 0;
  this->m_bKillingSpreeAnnouncerDisabled.m_Value = 0;
  this->m_flFixedRespawnTime.m_Value = 0.0;
  this->m_nHUDVisibilityBits.m_Value = 0;
  this->m_flMinimumAttackSpeed.m_Value = 0.0;
  this->m_flMaximumAttackSpeed.m_Value = 0.0;
  this->m_bIsDaynightCycleDisabled.m_Value = 0;
  this->m_bAreWeatherEffectsDisabled.m_Value = 0;
  this->m_BountyRunePickupFilter.m_hFunction = 0;
  this->m_BountyRunePickupFilter.m_hContext = 0;
  this->m_ModifyGoldFilter.m_hFunction = 0;
  this->m_ModifyGoldFilter.m_hContext = 0;
  this->m_ModifyExperienceFilter.m_hFunction = 0;
  this->m_ModifyExperienceFilter.m_hContext = 0;
  this->m_RuneSpawnFilter.m_hFunction = 0;
  this->m_RuneSpawnFilter.m_hContext = 0;
  this->m_ExecuteOrderFilter.m_hFunction = 0;
  this->m_ExecuteOrderFilter.m_hContext = 0;
  this->m_DamageFilter.m_hFunction = 0;
  this->m_DamageFilter.m_hContext = 0;
  this->m_TrackingProjectileFilter.m_hFunction = 0;
  this->m_TrackingProjectileFilter.m_hContext = 0;
  this->m_AbilityTuningValueFilter.m_hFunction = 0;
  this->m_AbilityTuningValueFilter.m_hContext = 0;
  this->m_ModifierGainedFilter.m_hFunction = 0;
  this->m_ModifierGainedFilter.m_hContext = 0;
  this->m_ItemAddedToInventoryFilter.m_hFunction = 0;
  this->m_ItemAddedToInventoryFilter.m_hContext = 0;
  CBaseEntity::NetworkStateChanged(this, 0x321u, -1, -1);
  m_Value = this->m_nTeamGoodGuysTopBarValue.m_Value;
  this->m_bTopBarTeamValuesVisible.m_Value = 1;
  if ( m_Value != 0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 804, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_nTeamGoodGuysTopBarValue.m_Value = 0;
    if ( this->m_nTeamBadGuysTopBarValue.m_Value == 0 )
      goto LABEL_3;
  }
  else if ( this->m_nTeamBadGuysTopBarValue.m_Value == 0 )
  {
    goto LABEL_3;
  }
  (*(this->_vptr_IHandleEntity + 22))(this, 808, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
  this->m_nTeamBadGuysTopBarValue.m_Value = 0;
LABEL_3:
  if ( !this->m_bBuybackEnabled.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 789, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bBuybackEnabled.m_Value = 1;
  }
  if ( this->m_bRecommendedItemsDisabled.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 782, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bRecommendedItemsDisabled.m_Value = 0;
  }
  if ( this->m_bTowerBackdoorProtectionEnabled.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 840, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bTowerBackdoorProtectionEnabled.m_Value = 0;
  }
  if ( this->m_bBotThinkingEnabled.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 841, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bBotThinkingEnabled.m_Value = 0;
  }
  if ( this->m_nCustomGameForceHeroSelectionId.m_Value != 0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 776, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_nCustomGameForceHeroSelectionId.m_Value = 0;
  }
  v3 = 3212836864LL;
  if ( this->m_flFixedRespawnTime.m_Value != -1.0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 844, 0xFFFFFFFFLL, 0xFFFFFFFFLL, -1.0);
    this->m_flFixedRespawnTime.m_Value = -1.0;
  }
  m_fValue_low = LODWORD(dota_min_haste.m_pParent->m_Value.m_fValue);
  v5 = COERCE_FLOAT(_mm_cvtsi128_si32(m_fValue_low));
  if ( *m_fValue_low.m128i_i32 != this->m_flMinimumAttackSpeed.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 852, 0xFFFFFFFFLL, 0xFFFFFFFFLL, *&v3);
    this->m_flMinimumAttackSpeed.m_Value = v5;
  }
  v6 = LODWORD(dota_max_haste.m_pParent->m_Value.m_fValue);
  v7 = COERCE_FLOAT(_mm_cvtsi128_si32(v6));
  if ( *v6.m128i_i32 != this->m_flMaximumAttackSpeed.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 856, 0xFFFFFFFFLL, 0xFFFFFFFFLL, *&v3);
    this->m_flMaximumAttackSpeed.m_Value = v7;
  }
  if ( this->m_nHUDVisibilityBits.m_Value != -1 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 848, 0xFFFFFFFFLL, 0xFFFFFFFFLL, *&v3);
    this->m_nHUDVisibilityBits.m_Value = -1;
  }
}


// CDOTABaseGameMode::Spawn  (line 123, @0x0000000002462c40, libserver.so)
// calls: CDOTAGamerules::SetGameModeEntity, CBaseEntity::Spawn
void __fastcall CDOTABaseGameMode::Spawn(CDOTABaseGameMode *const this, const CEntityKeyValues *pKeyValues)
{
  __int64 v4; // rax

  CDOTAGamerules::SetGameModeEntity(g_pGameRules, this);
  this->m_bRemoveIllusionsOnDeath = 0;
  v4 = 0;
  this->m_bLoseGoldOnDeath = 1;
  this->m_bOverrideBotLateGame = 0;
  this->m_bBotsInLateGame = 0;
  this->m_bBotsAlwaysPushWithHuman = 0;
  this->m_nBotMaxPushTier = -1;
  this->m_flFountainPercentageHealthRegen = -1.0;
  this->m_flFountainPercentageManaRegen = -1.0;
  this->m_flFountainConstantManaRegen = -1.0;
  do
    this->m_bRuneTypeEnabled[v4++] = 1;
  while ( v4 != 7 );
  CBaseEntity::Spawn(this, pKeyValues);
}


// CDOTABaseGameMode::SetFogOfWarDisabled  (line 148, @0x0000000002465570, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<bool>
// calls: CDOTAFogOfWarSystem::EnableFogOfWar
// callers: CDOTACustomGameEvents::InputSetFogOfWarDisabled, CmdDotaFowDisable, CDOTACustomGameEvents::Spawn
void __fastcall CDOTABaseGameMode::SetFogOfWarDisabled(CDOTABaseGameMode *const this, bool bDisabled)
{
  if ( this->m_bFogOfWarDisabled.m_Value != bDisabled )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 785, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bFogOfWarDisabled.m_Value = bDisabled;
  }
  CDOTAFogOfWarSystem::EnableFogOfWar(&g_DOTAFogOfWarSystem, !bDisabled);
}


// CDOTABaseGameMode::SetUnseenFogOfWarEnabled  (line 157, @0x00000000024655c0, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<bool>
// calls: CDOTAFogOfWarSystem::GetFoW, CFoW::EnableUnseenVisbility
// callers: CDOTACustomGameEvents::InputSetUnseenFogOfWarEnabled, CDOTACustomGameEvents::Spawn
void __fastcall CDOTABaseGameMode::SetUnseenFogOfWarEnabled(CDOTABaseGameMode *const this, bool bEnabled)
{
  bool m_Value; // bl
  CFoW *FoW; // rax

  if ( this->m_bUseUnseenFOW.m_Value != bEnabled )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 786, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bUseUnseenFOW.m_Value = bEnabled;
  }
  if ( CDOTAFogOfWarSystem::GetFoW(&g_DOTAFogOfWarSystem, 0) != 0 )
  {
    m_Value = this->m_bUseUnseenFOW.m_Value;
    FoW = CDOTAFogOfWarSystem::GetFoW(&g_DOTAFogOfWarSystem, 0);
    CFoW::EnableUnseenVisbility(FoW, m_Value);
  }
}


// CDOTABaseGameMode::SetCustomXPRequiredToReachNextLevel  (line 170, @0x00000000024787b0, libserver.so)  // inlines: AddToTail, CVariantBase, CopyConstruct<int>, Element, Free, GrowMemory, NetworkStateChanged, RemoveAll, operator float, operator int, operator[], ~CVariantBase
// calls: CUtlMemory<int, int>::Grow, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
void __fastcall CDOTABaseGameMode::SetCustomXPRequiredToReachNextLevel(CDOTABaseGameMode *const this, HSCRIPT hTable)
{
  int m_Size; // eax
  unsigned int v4; // r12d
  float m_float64; // xmm0_4
  unsigned int v6; // r13d
  int v7; // eax
  int *v8; // rax
  int v9; // eax
  int *v10; // rax
  CUtlVectorBase<int,CNetworkUtlVector_MemoryType<int,-1> >::CAllocator *p_m_Memory; // [rsp+0h] [rbp-70h]
  int v12; // [rsp+Ch] [rbp-64h]
  int m_int; // [rsp+Ch] [rbp-64h]
  ScriptVariant_t vKey; // [rsp+20h] [rbp-50h] BYREF
  ScriptVariant_t vValue; // [rsp+30h] [rbp-40h] BYREF

  m_Size = this->m_nCustomXPRequiredToReachNextLevel.m_Vector.m_Size;
  vKey.m_type = 0;
  vKey.m_flags = 0;
  vKey.m_uint64 = 0;
  vValue.m_type = 0;
  vValue.m_flags = 0;
  vValue.m_uint64 = 0;
  this->m_nCustomXPRequiredToReachNextLevel.m_Vector.m_Size = 0;
  if ( m_Size > 0 )
    (*(this->_vptr_IHandleEntity + 22))(this, 816, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
  v4 = 0;
  p_m_Memory = &this->m_nCustomXPRequiredToReachNextLevel.m_Vector.m_Memory;
  while ( 1 )
  {
    v4 = (*(*g_pScriptVM + 296LL))(g_pScriptVM, hTable, v4, &vKey, &vValue);
    if ( v4 == -1 )
      break;
    switch ( vValue.m_type )
    {
      case 5:
        v6 = this->m_nCustomXPRequiredToReachNextLevel.m_Vector.m_Size;
        m_int = vValue.m_int;
        v9 = v6;
        if ( v6 == this->m_nCustomXPRequiredToReachNextLevel.m_Vector.m_Memory.m_nAllocationCount )
        {
          CUtlMemory<int,int>::Grow(p_m_Memory, 1);
          v9 = this->m_nCustomXPRequiredToReachNextLevel.m_Vector.m_Size;
        }
        this->m_nCustomXPRequiredToReachNextLevel.m_Vector.m_Size = v9 + 1;
        v10 = &this->m_nCustomXPRequiredToReachNextLevel.m_Vector.m_Memory.m_pMemory[v6];
        if ( v10 != 0 )
          *v10 = m_int;
LABEL_13:
        (*(this->_vptr_IHandleEntity + 22))(this, 816, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        (*(this->_vptr_IHandleEntity + 22))(this, 816, v6, 0xFFFFFFFFLL);
        break;
      case 0x22:
        m_float64 = vValue.m_float64;
        goto LABEL_9;
      case 1:
        m_float64 = vValue.m_float;
LABEL_9:
        v6 = this->m_nCustomXPRequiredToReachNextLevel.m_Vector.m_Size;
        v12 = m_float64;
        v7 = v6;
        if ( v6 == this->m_nCustomXPRequiredToReachNextLevel.m_Vector.m_Memory.m_nAllocationCount )
        {
          CUtlMemory<int,int>::Grow(p_m_Memory, 1);
          v7 = this->m_nCustomXPRequiredToReachNextLevel.m_Vector.m_Size;
        }
        this->m_nCustomXPRequiredToReachNextLevel.m_Vector.m_Size = v7 + 1;
        v8 = &this->m_nCustomXPRequiredToReachNextLevel.m_Vector.m_Memory.m_pMemory[v6];
        if ( v8 != 0 )
          *v8 = v12;
        goto LABEL_13;
      default:
        break;
    }
  }
  if ( (vValue.m_flags & 1) != 0 )
  {
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, vValue.m_uint64);
    vValue.m_flags &= ~1u;
  }
  vValue.m_uint64 = 0;
  vValue.m_type = 0;
  if ( (vKey.m_flags & 1) != 0 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, vKey.m_uint64);
}


// CDOTABaseGameMode::SetRuneEnabled  (line 193, @0x0000000002462560, libserver.so)
void __fastcall CDOTABaseGameMode::SetRuneEnabled(CDOTABaseGameMode *const this, int nRune, bool bEnabled)
{
  if ( nRune <= 6 )
    this->m_bRuneTypeEnabled[nRune] = bEnabled;
}


// CDOTABaseGameMode::GetTopBarTeamValue  (line 205, @0x0000000002467270, libserver.so)
int __fastcall CDOTABaseGameMode::GetTopBarTeamValue(CDOTABaseGameMode *const this, int iTeam)
{
  if ( iTeam == 2 )
    return this->m_nTeamGoodGuysTopBarValue.m_Value;
  else
    return this->m_nTeamBadGuysTopBarValue.m_Value;
}


// CDOTABaseGameMode::SetTopBarTeamValue  (line 214, @0x0000000002465780, libserver.so)  // inlines: NetworkStateChanged, Set
void __fastcall CDOTABaseGameMode::SetTopBarTeamValue(CDOTABaseGameMode *const this, int iTeam, int nValue)
{
  if ( iTeam == 2 )
  {
    if ( this->m_nTeamGoodGuysTopBarValue.m_Value != nValue )
    {
      LOWORD(iTeam) = 804;
      (*(this->_vptr_IHandleEntity + 22))(this, iTeam, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_nTeamGoodGuysTopBarValue.m_Value = nValue;
    }
  }
  else if ( iTeam == 3 && nValue != this->m_nTeamBadGuysTopBarValue.m_Value )
  {
    LOWORD(iTeam) = 808;
    (*(this->_vptr_IHandleEntity + 22))(this, iTeam, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_nTeamBadGuysTopBarValue.m_Value = nValue;
  }
}


// CDOTABaseGameMode::SetHUDVisible  (line 232, @0x0000000002465890, libserver.so)  // inlines: NetworkStateChanged, Set, operator+=<int>, operator-=<int>
// calls: Msg
// strings: "Setting element %d, %s\n", "Visibility = %d\n"
void __fastcall CDOTABaseGameMode::SetHUDVisible(CDOTABaseGameMode *const this, int iHUDElement, bool bVisible)
{
  char v3; // r12
  unsigned __int64 v5; // xmm0_8
  unsigned int m_Value; // esi
  unsigned int v7; // r12d

  v3 = iHUDElement;
  if ( bVisible )
  {
    v5 = Msg("Setting element %d, %s\n", iHUDElement, "visible").m128_u64[0];
    m_Value = this->m_nHUDVisibilityBits.m_Value;
    if ( (m_Value & (1 << v3)) == 0 )
    {
      v7 = (1 << v3) + m_Value;
      if ( m_Value != v7 )
      {
LABEL_4:
        (*(this->_vptr_IHandleEntity + 22))(this, 848, 0xFFFFFFFFLL, 0xFFFFFFFFLL, *&v5);
        this->m_nHUDVisibilityBits.m_Value = v7;
        m_Value = v7;
      }
    }
  }
  else
  {
    v5 = Msg("Setting element %d, %s\n", iHUDElement, "invisible").m128_u64[0];
    m_Value = this->m_nHUDVisibilityBits.m_Value;
    if ( (m_Value & (1 << v3)) != 0 )
    {
      v7 = m_Value - (1 << v3);
      if ( m_Value != v7 )
        goto LABEL_4;
    }
  }
  Msg("Visibility = %d\n", m_Value);
}


// CDOTABaseGameMode::GetFilteredRuneType  (line 255, @0x00000000024765d0, libserver.so)  // inlines: CVariantBase, CreateTableFromKeyValues, Free, HasRuneSpawnFilter, HasScriptFilter, RunRuneSpawnFilter, RunScriptFilter, entindex, ~CVariantBase
// calls: KeyValues::operator new, KeyValues::KeyValues, CEntityInstance::GetEntityIndex, KeyValues::SetInt, KeyValues::~KeyValues, KeyValues::operator delete, KeyValues::GetInt, Recursive_ConvertKeyValuesToTable, KeyValues::GetName, _Unwind_Resume, CVariantBase<CVariantDefaultAllocator>::Free
// callers: CDOTABaseGameMode::SpawnRunes
// strings: "RuneSpawnData", "spawner_entindex_const", "rune_type"
int __fastcall CDOTABaseGameMode::GetFilteredRuneType(
        CDOTABaseGameMode *const this,
        int nDesiredType,
        CBaseEntity *pSpawner)
{
  KeyValues *v6; // r12
  CEntityIndex v7; // eax
  IScriptVM *v8; // r15
  HSCRIPT m_hContext; // r9
  char v10; // bl
  __int64 (__fastcall *v12)(IScriptVM *, HSCRIPT, const char *, _QWORD, _QWORD); // rbx
  const char *Name; // rax
  __int64 v14; // rbx
  HSCRIPT hTable; // [rsp+10h] [rbp-50h] BYREF
  __int16 v16; // [rsp+18h] [rbp-48h]
  __int16 v17; // [rsp+1Ah] [rbp-46h]
  __int64 v18; // [rsp+20h] [rbp-40h] BYREF
  __int16 v19; // [rsp+28h] [rbp-38h]
  __int16 v20; // [rsp+2Ah] [rbp-36h]

  if ( this->m_RuneSpawnFilter.m_hFunction != 0 && this->m_RuneSpawnFilter.m_hContext != 0 )
  {
    v6 = KeyValues::operator new(0x14u);
    KeyValues::KeyValues(v6, "RuneSpawnData");
    v7.m_Data = CEntityInstance::GetEntityIndex(pSpawner).m_Data;
    KeyValues::SetInt(v6, "spawner_entindex_const", v7.m_Data);
    KeyValues::SetInt(v6, "rune_type", nDesiredType);
    if ( this->m_RuneSpawnFilter.m_hFunction != 0 && this->m_RuneSpawnFilter.m_hContext != 0 && v6 != 0 )
    {
      hTable = 0;
      v16 = 0;
      v17 = 0;
      v8 = g_pScriptVM;
      (*(*g_pScriptVM + 264LL))(g_pScriptVM, &hTable);
      if ( hTable != 0 )
        Recursive_ConvertKeyValuesToTable(v6, v8, hTable);
      v18 = 0;
      v19 = 0;
      m_hContext = this->m_RuneSpawnFilter.m_hContext;
      v20 = 0;
      (*(*g_pScriptVM + 160LL))(g_pScriptVM, this->m_RuneSpawnFilter.m_hFunction, &hTable, 1, &v18, m_hContext, 1);
      v10 = 0;
      if ( v19 == 6 && v18 != 0 )
      {
        v12 = *(*g_pScriptVM + 304LL);
        Name = KeyValues::GetName(v6);
        v14 = v12(g_pScriptVM, hTable, Name, 0, 0);
        if ( v14 != 0 )
        {
          KeyValues::~KeyValues(v6);
          KeyValues::operator delete(v6);
          v6 = v14;
        }
        v10 = 1;
      }
      (*(*g_pScriptVM + 344LL))(g_pScriptVM, &hTable);
      if ( (v20 & 1) != 0 )
      {
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v18);
        v20 &= ~1u;
      }
      v18 = 0;
      v19 = 0;
      if ( (v17 & 1) != 0 )
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, hTable);
      if ( v10 == 0 )
      {
        nDesiredType = -1;
LABEL_15:
        KeyValues::~KeyValues(v6);
        KeyValues::operator delete(v6);
        return nDesiredType;
      }
    }
    nDesiredType = KeyValues::GetInt(v6, "rune_type", nDesiredType);
    if ( v6 != 0 )
      goto LABEL_15;
  }
  return nDesiredType;
}


// CDOTABaseGameMode::IsValidRune  (line 277, @0x0000000002467290, libserver.so)
bool __fastcall CDOTABaseGameMode::IsValidRune(CDOTABaseGameMode *const this, int nRuneType)
{
  return nRuneType <= 6;
}


// CDOTABaseGameMode::SpawnRunes  (line 289, @0x0000000002478a30, libserver.so)  // inlines: AcquireEntitySpawnerEntityVariantAllocator, AddKeyValue<char const*>, AddToTail, Allocate, Base, CEntityHandle, CEntityKeyValuesModifyScope, CEntitySpawner, CEntitySpawnerBase, CHandle, CUtlMemory, CUtlString, CUtlVector, CUtlVectorBase, CopyConstruct<CHandle<CBaseEntity> >, CopyConstruct<int>, CopyData, Element, FindKeyHash, Free, Get, GetEHandle, GetEntityClass, GetEntityIdentity, GetEntryIndex, GetInstance, GetRuneTypeEnabled, GetSerialNumber, GrowMemory, IndexToIdentity, Init, IsValid, IsValidRune, LookupEntity, OverrideAllocator, Purge, Release, ReleaseEntitySpawnerEntityVariantAllocator, RemoveAll, Set, SetClassName, SetSpawner, SetValue, memcpy, operator CBaseEntity*, operator CDOTA_Item_Rune*, operator CEntityInstance*, operator!=<CBaseEntity>, operator=, operator==, operator[], ~CEntityKeyValuesModifyScope, ~CEntitySpawner, ~CEntitySpawnerBase, ~CUtlMemory, ~CUtlString, ~CUtlVector, ~CUtlVectorBase
// calls: CGameEntitySystem::FindEntityByClassname, RandomInt, CBaseEntity::GetAbsOrigin, CGameEntitySystem::FindEntityByClassnameNearest, __dynamic_cast, CDOTA_Item_Rune::GetRuneType, UTIL_RemoveImmediate, CDOTABaseGameMode::GetFilteredRuneType, CEntityKeyValuesModifyScope::BeginModify, CEntitySystem::GetActiveSpawnGroupHandle, CEntitySystem::GetSpawnOriginOffset, CEntitySystem::FindClassByDesignName (35 total)
// callers: CDOTAGamerules::SpawnRune
// strings: "dota_item_rune_spawner", "dota_item_rune", "Attempted to set attribute %s as if it was a non-attribute key!\n"
// globals: CEntityHandle::gm_pEntityList, CEntityKeyValuesModifyScope::sm_pAllocatorOverride
void __fastcall CDOTABaseGameMode::SpawnRunes(CDOTABaseGameMode *const this, bool bFirstRune)
{
  CBaseEntity *EntityByClassname; // rdx
  int v3; // eax
  CEntityIdentity *m_pEntity; // rdx
  __int16 v5; // cx
  __int64 v6; // r14
  CEntityIdentity *v7; // rdx
  __int64 v8; // r13
  CEntityIdentity *v9; // rdx
  uint32 m_Index; // r12d
  __int64 v11; // r12
  int v12; // r13d
  __int64 v13; // r14
  int v14; // eax
  int *v15; // rax
  __int64 v16; // r13
  int RuneType; // r12d
  const Vector *AbsOrigin; // rax
  CBaseEntity *EntityByClassnameNearest; // rax
  const CDOTA_Item_Rune *v20; // rax
  CEntityInstance *v21; // r14
  int v22; // esi
  unsigned int FilteredRuneType; // r12d
  CUtlScratchMemoryPool *v24; // rax
  CEntitySystem *v25; // rdi
  const matrix3x4a_t *SpawnOriginOffset; // rax
  __int64 v27; // rax
  char v28; // al
  CEntityKeyValues *m_pEntityKeyValues; // rbx
  CDOTA_Item_Rune *v30; // rbx
  const Vector *v31; // rax
  CEntityIdentity *v32; // rax
  int v33; // edx
  __int16 v34; // cx
  uint32 v35; // eax
  CDOTA_Commander *v36; // rax
  CUtlScratchMemoryPool *v37; // rdi
  CEntityKeyValues *v38; // rbx
  bool v39; // cc
  CHandle<CBaseEntity> *v40; // rdx
  uint32 v41; // eax
  __int16 v42; // cx
  CEntityIdentity *v43; // rdx
  CEntityIdentity *v44; // rdx
  int v45; // esi
  unsigned int v46; // r12d
  CUtlScratchMemoryPool *v47; // rax
  CEntitySystem *v48; // rdi
  const matrix3x4a_t *v49; // rax
  __int64 v50; // rax
  char v51; // al
  CEntityIdentity *v52; // rdx
  CEntityIdentity *v53; // rdx
  CUtlScratchMemoryPool *v54; // rdi
  CEntityKeyValues *v55; // rbx
  int v56; // ebx
  int m_nCount; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v58; // cx
  __int64 v59; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v60; // rdx
  int m_nEntitySpawnerDataUseCount; // ebx
  unsigned __int64 m_nAllocated; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v64; // rax
  uint16 m_flags; // ax
  char *v66; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v67; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v68; // rdx
  __int64 v69; // rax
  __int64 v70; // rbx
  bool v71; // zf
  __int16 v72; // ax
  char *v73; // rax
  __int64 m_Size; // rbx
  int v75; // eax
  CHandle<CBaseEntity> *v76; // rax
  CEntityIdentity *v77; // rax
  CBaseEntity *m_pInstance; // rsi
  CEntityIdentity *v79; // r13
  CBaseEntity *v80; // rax
  CEntityIdentity *v81; // rdx
  __int16 v82; // cx
  CDOTA_Item_Rune *v83; // rbx
  const Vector *v84; // rax
  CEntityIdentity *v85; // rax
  int v86; // edx
  __int16 v87; // cx
  uint32 v88; // eax
  CDOTA_Commander *v89; // rax
  __int64 v90; // [rsp+0h] [rbp-190h]
  __int64 v91; // [rsp+8h] [rbp-188h]
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v92; // [rsp+8h] [rbp-188h]
  bool bSpawnBountyRune; // [rsp+3Dh] [rbp-153h]
  bool v94; // [rsp+3Eh] [rbp-152h]
  CBaseEntity *pSpawner; // [rsp+40h] [rbp-150h]
  __int16 hRuneSpawner; // [rsp+50h] [rbp-140h]
  int v99[4]; // [rsp+60h] [rbp-130h] BYREF
  CEntityHandle v100[4]; // [rsp+70h] [rbp-120h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hRuneSpawners; // [rsp+80h] [rbp-110h] BYREF
  CUtlVector<int,CUtlMemory<int,int> > vecAvailableRunes; // [rsp+A0h] [rbp-F0h] BYREF
  CEntitySpawner<CDOTA_Item_Rune> spawnerPrimary; // [rsp+C0h] [rbp-D0h] BYREF

  hRuneSpawners.m_Size = 0;
  hRuneSpawners.m_Memory.m_pMemory = 0;
  hRuneSpawners.m_Memory.m_nAllocationCount = 0;
  hRuneSpawners.m_Memory.m_nGrowSize = 0;
  hRuneSpawner = -1;
  EntityByClassname = CGameEntitySystem::FindEntityByClassname(g_pGameEntitySystem, 0, "dota_item_rune_spawner");
  v3 = -1;
  if ( EntityByClassname != 0 )
  {
    m_pEntity = EntityByClassname->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v5 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v5 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      v3 = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v5 & 0x7FFF;
      hRuneSpawner = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v5 & 0x7FFF;
    }
  }
  while ( (v3 + 2) > 1 )
  {
    v6 = (hRuneSpawner & 0x7FFF) >> 9;
    v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[v6];
    if ( v7 == 0 )
      break;
    v8 = hRuneSpawner & 0x1FF;
    v9 = &v7[v8];
    if ( v9 == 0 )
      break;
    m_Index = v9->m_EHandle.m_Index;
    if ( m_Index != v3 || v9->m_pInstance == 0 )
      break;
    m_Size = hRuneSpawners.m_Size;
    v75 = hRuneSpawners.m_Size;
    if ( hRuneSpawners.m_Size == hRuneSpawners.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<CHandle<CBaseEntity>,int>::Grow(&hRuneSpawners.m_Memory, 1);
      v75 = hRuneSpawners.m_Size;
    }
    hRuneSpawners.m_Size = v75 + 1;
    v76 = &hRuneSpawners.m_Memory.m_pMemory[m_Size];
    if ( v76 != 0 )
      v76->m_Index = m_Index;
    v77 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[v6];
    if ( v77 != 0 )
    {
      m_pInstance = 0;
      v79 = &v77[v8];
      if ( v79 != 0 && v79->m_EHandle.m_Index == m_Index )
        m_pInstance = v79->m_pInstance;
    }
    else
    {
      m_pInstance = 0;
    }
    v80 = CGameEntitySystem::FindEntityByClassname(g_pGameEntitySystem, m_pInstance, "dota_item_rune_spawner");
    if ( v80 != 0 && (v81 = v80->m_pEntity) != 0 )
    {
      v82 = 0x7FFF;
      if ( v81->m_EHandle.m_Index != -1 )
        v82 = v81->m_EHandle.m_Index & 0x7FFF;
      v3 = (((v81->m_EHandle.m_Index >> 15) - (v81->m_flags & 1)) << 15) | v82 & 0x7FFF;
      hRuneSpawner = (((v81->m_EHandle.m_Index >> 15) - (v81->m_flags & 1)) << 15) | v82 & 0x7FFF;
    }
    else
    {
      hRuneSpawner = -1;
      v3 = -1;
    }
  }
  vecAvailableRunes.m_Size = 0;
  vecAvailableRunes.m_Memory.m_pMemory = 0;
  vecAvailableRunes.m_Memory.m_nAllocationCount = 0;
  vecAvailableRunes.m_Memory.m_nGrowSize = 0;
  if ( hRuneSpawners.m_Size == 0 )
  {
    vecAvailableRunes.m_Size = 0;
LABEL_75:
    CUtlMemory<int,int>::Purge(&vecAvailableRunes.m_Memory);
    if ( (vecAvailableRunes.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<int,int>::Purge(&vecAvailableRunes.m_Memory);
    goto LABEL_77;
  }
  v11 = 0;
  v94 = this->m_bRuneTypeEnabled[5];
  do
  {
    while ( 1 )
    {
      v12 = v11;
      if ( this->m_bRuneTypeEnabled[v11] )
      {
        v13 = vecAvailableRunes.m_Size;
        v14 = vecAvailableRunes.m_Size;
        if ( vecAvailableRunes.m_Size == vecAvailableRunes.m_Memory.m_nAllocationCount )
        {
          CUtlMemory<int,int>::Grow(&vecAvailableRunes.m_Memory, 1);
          v14 = vecAvailableRunes.m_Size;
        }
        vecAvailableRunes.m_Size = v14 + 1;
        v15 = &vecAvailableRunes.m_Memory.m_pMemory[v13];
        if ( v15 != 0 )
          break;
      }
      if ( ++v11 == 5 )
        goto LABEL_18;
    }
    ++v11;
    *v15 = v12;
  }
  while ( v11 != 5 );
LABEL_18:
  if ( !v94 && vecAvailableRunes.m_Size == 0 )
  {
    vecAvailableRunes.m_Size = 0;
    if ( (vecAvailableRunes.m_Memory.m_nGrowSize & 0xC0000000) != 0 )
      goto LABEL_77;
    goto LABEL_75;
  }
  bSpawnBountyRune = RandomInt(0, 1) == 1;
  if ( hRuneSpawners.m_Size > 0 )
  {
    v16 = 0;
    while ( 1 )
    {
      v40 = &hRuneSpawners.m_Memory.m_pMemory[v16];
      v41 = v40->m_Index;
      if ( v40->m_Index + 2 <= 1 )
        goto LABEL_45;
      v42 = v40->m_Index;
      v43 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v40->m_Index) >> 9) & 0x3F];
      if ( v43 == 0 )
        goto LABEL_45;
      v44 = &v43[v42 & 0x1FF];
      if ( v44 == 0 )
        goto LABEL_45;
      if ( v41 != v44->m_EHandle.m_Index )
        goto LABEL_45;
      pSpawner = v44->m_pInstance;
      if ( v44->m_pInstance == 0 )
        goto LABEL_45;
      if ( !bFirstRune )
      {
        RuneType = vecAvailableRunes.m_Memory.m_pMemory[RandomInt(0, (vecAvailableRunes.m_Size - 1))];
        AbsOrigin = CBaseEntity::GetAbsOrigin(pSpawner);
        EntityByClassnameNearest = CGameEntitySystem::FindEntityByClassnameNearest(
                                     g_pGameEntitySystem,
                                     "dota_item_rune",
                                     AbsOrigin,
                                     100.0);
        if ( EntityByClassnameNearest != 0 )
        {
          v20 = __dynamic_cast(EntityByClassnameNearest, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTA_Item_Rune, 0);
          v21 = &v20->CBaseAnimating;
          if ( v20 != 0 )
          {
            RuneType = CDOTA_Item_Rune::GetRuneType(v20);
            UTIL_RemoveImmediate(v21);
          }
        }
        do
          v22 = vecAvailableRunes.m_Memory.m_pMemory[RandomInt(0, (vecAvailableRunes.m_Size - 1))];
        while ( RuneType == v22 );
        if ( bSpawnBountyRune && v94 )
          v22 = 5;
        FilteredRuneType = CDOTABaseGameMode::GetFilteredRuneType(this, v22, pSpawner);
        if ( FilteredRuneType > 6 )
          goto LABEL_45;
        spawnerPrimary._vptr_CEntitySpawnerBase = off_40DD270;
        spawnerPrimary.m_modifyScope.m_pKeyValues = 0;
        spawnerPrimary.m_modifyScope.m_pPrevAllocator = 0;
        CEntityKeyValuesModifyScope::BeginModify(&spawnerPrimary.m_modifyScope, 0);
        spawnerPrimary.m_scriptClassName.m_pString = 0;
        spawnerPrimary._vptr_CEntitySpawnerBase = off_40DD290;
        v24 = CEntityKeyValuesModifyScope::sm_pAllocatorOverride;
        spawnerPrimary.m_pContext = 0;
        spawnerPrimary.m_pSpawnBatch = 0;
        v25 = g_pEntitySystem;
        ++g_pEntitySystem->m_nEntitySpawnerDataUseCount;
        spawnerPrimary.m_pPrevAllocator = v24;
        CEntityKeyValuesModifyScope::sm_pAllocatorOverride = &v25->m_entitySpawnerData;
        spawnerPrimary.m_hSpawnGroupHandle = CEntitySystem::GetActiveSpawnGroupHandle(v25);
        SpawnOriginOffset = CEntitySystem::GetSpawnOriginOffset(g_pEntitySystem);
        *&spawnerPrimary.m_mSpawnGroupToWorld.m_flMatVal[0][0] = *&SpawnOriginOffset->m_flMatVal[0][0];
        qmemcpy(spawnerPrimary.m_mSpawnGroupToWorld.m_flMatVal[1], SpawnOriginOffset->m_flMatVal[1], 24);
        v27 = *&SpawnOriginOffset->m_flMatVal[2][2];
        spawnerPrimary.m_pEntityKeyValues = 0;
        *&spawnerPrimary.m_mSpawnGroupToWorld.m_flMatVal[2][2] = v27;
        spawnerPrimary.m_pEntityClass = g_pEntityCDOTA_Item_RuneClass;
        if ( g_pApplication != 0 )
          v28 = (*(g_pApplication->_vptr_IAppSystem + 24))(g_pApplication);
        else
          v28 = 0;
        spawnerPrimary.m_bValidateKeys = v28;
        spawnerPrimary.m_nMode = EntityNetworkingMode_t::ENTITY_NETWORKING_MODE_DEFAULT;
        (*spawnerPrimary._vptr_CEntitySpawnerBase)(&spawnerPrimary);
        m_pEntityKeyValues = spawnerPrimary.m_pEntityKeyValues;
        if ( spawnerPrimary.m_pEntityKeyValues->m_nQueuedForSpawnCount > 0 )
          goto LABEL_32;
        m_nCount = spawnerPrimary.m_pEntityKeyValues->m_keyHashes.m_nCount;
        if ( m_nCount <= 0 )
        {
LABEL_93:
          CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int,(unsigned short)9,short>,unsigned int,short>::AddToTailGetPtr(&spawnerPrimary.m_pEntityKeyValues->m_keyHashes);
          m_nAllocated = m_pEntityKeyValues->m_keyHashes.m_nAllocated;
          if ( m_nAllocated != 0 )
          {
            if ( m_nAllocated <= 9 )
              m_pElements = (&m_pEntityKeyValues->m_keyHashes.m_nAllocAllocated + 1);
            else
              m_pElements = m_pEntityKeyValues->m_keyHashes.m_pElements;
          }
          else
          {
            m_pElements = 0;
          }
          v91 = (m_pEntityKeyValues->m_keyHashes.m_nCount - 1);
          m_pElements[v91] = -971301790;
          CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&m_pEntityKeyValues->m_keyValues);
          if ( m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
            v64 = m_pEntityKeyValues->m_keyValues.m_pElements;
          else
            v64 = 0;
          v90 = v91;
          v92 = &v64[v91];
          m_flags = v92->m_value.m_flags;
          if ( (m_flags & 1) != 0 )
            v92->m_value.m_flags = m_flags & 0xFFFE;
          v92->m_value.m_uint64 = 0;
          v92->m_value.m_type = 30;
          v66 = CEntityVariantAllocator::Allocate(0xFu);
          v92->m_value.m_uint64 = v66;
          strcpy(v66, "dota_item_rune");
          v92->m_value.m_flags |= 1u;
          if ( m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
            v67 = m_pEntityKeyValues->m_keyValues.m_pElements;
          else
            v67 = 0;
          v67[v90].m_pAttributeName = 0;
        }
        else
        {
          v58 = spawnerPrimary.m_pEntityKeyValues->m_keyHashes.m_nAllocated;
          v59 = 0;
          while ( 1 )
          {
            if ( v58 != 0 )
            {
              v60 = (&spawnerPrimary.m_pEntityKeyValues->m_keyHashes.m_nAllocAllocated + 1);
              if ( v58 > 9 )
                v60 = spawnerPrimary.m_pEntityKeyValues->m_keyHashes.m_pElements;
            }
            else
            {
              v60 = 0;
            }
            if ( v60[v59] == -971301790 )
              break;
            if ( m_nCount <= ++v59 )
              goto LABEL_93;
          }
          if ( spawnerPrimary.m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
          {
            v68 = spawnerPrimary.m_pEntityKeyValues->m_keyValues.m_pElements;
            v69 = v59;
            v70 = &v68[v69];
            if ( v68[v69].m_pAttributeName != 0 )
              goto LABEL_105;
LABEL_107:
            v72 = *(v70 + 10);
            if ( (v72 & 1) != 0 )
              *(v70 + 10) = v72 & 0xFFFE;
            *v70 = 0;
            *(v70 + 8) = 30;
            v73 = CEntityVariantAllocator::Allocate(0xFu);
            *v70 = v73;
            strcpy(v73, "dota_item_rune");
            *(v70 + 10) |= 1u;
          }
          else
          {
            v68 = 0;
            v71 = *(&stru_10.m_Lock.gap0 + 3 * v59) == 0;
            v70 = 24 * v59;
            v69 = v59;
            if ( v71 )
              goto LABEL_107;
LABEL_105:
            Warning("Attempted to set attribute %s as if it was a non-attribute key!\n", v68[v69].m_pAttributeName);
          }
        }
LABEL_32:
        spawnerPrimary.m_pEntityClass = CEntitySystem::FindClassByDesignName(
                                          g_pEntitySystem,
                                          "dota_item_rune",
                                          &spawnerPrimary.m_scriptClassName);
        CEntitySpawner<CDOTA_Item_Rune>::Spawn(v100, &spawnerPrimary);
        v30 = CEntityHandle::operator CEntityInstance *(v100);
        if ( v30 != 0 )
        {
          v31 = CBaseEntity::GetAbsOrigin(pSpawner);
          CBaseEntity::SetAbsOrigin(v30, v31);
          CDOTA_Item_Rune::SetRuneType(v30, FilteredRuneType);
          (*(v30->_vptr_IHandleEntity + 70))(v30, 4);
          v100[0].m_Index = -1;
          v32 = pSpawner->m_pEntity;
          if ( v32 != 0 )
          {
            v33 = (v32->m_EHandle.m_Index >> 15) - (v32->m_flags & 1);
            v34 = 0x7FFF;
            if ( v32->m_EHandle.m_Index != -1 )
              v34 = v32->m_EHandle.m_Index & 0x7FFF;
            LOWORD(v100[0].m_Index) = v34 | v100[0].m_Index & 0x8000;
            v35 = (v33 << 15) | v100[0].m_Index & 0x7FFF;
            v100[0].m_Index = v35;
          }
          else
          {
            v35 = -1;
          }
          v30->m_hRuneSpawner.m_Index = v35;
          v36 = DOTACommander();
          CDOTA_Commander::OnRuneSpawn(v36);
          bSpawnBountyRune = FilteredRuneType != 5;
        }
        v37 = CEntityKeyValuesModifyScope::sm_pAllocatorOverride;
        spawnerPrimary._vptr_CEntitySpawnerBase = off_40DD270;
        CEntityKeyValuesModifyScope::sm_pAllocatorOverride = spawnerPrimary.m_pPrevAllocator;
        if ( v37 == &g_pEntitySystem->m_entitySpawnerData )
        {
          m_nEntitySpawnerDataUseCount = g_pEntitySystem->m_nEntitySpawnerDataUseCount;
          g_pEntitySystem->m_nEntitySpawnerDataUseCount = m_nEntitySpawnerDataUseCount - 1;
          if ( m_nEntitySpawnerDataUseCount == 1 )
            CUtlScratchMemoryPool::FreeAll(v37);
        }
        if ( spawnerPrimary.m_pEntityKeyValues != 0 )
        {
          CEntityKeyValuesModifyScope::Release(&spawnerPrimary.m_modifyScope);
          v38 = spawnerPrimary.m_pEntityKeyValues;
          v39 = --spawnerPrimary.m_pEntityKeyValues->m_nRefCount <= 0;
          if ( v39 )
          {
            CEntityKeyValues::~CEntityKeyValues(v38);
            operator delete(v38);
          }
        }
        if ( spawnerPrimary.m_scriptClassName.m_pString != 0 )
          CUtlString::FreeMemoryBlock(&spawnerPrimary.m_scriptClassName);
        CEntityKeyValuesModifyScope::Release(&spawnerPrimary.m_modifyScope);
        goto LABEL_45;
      }
      v45 = v94 ? 5 : vecAvailableRunes.m_Memory.m_pMemory[RandomInt(0, (vecAvailableRunes.m_Size - 1))];
      v46 = CDOTABaseGameMode::GetFilteredRuneType(this, v45, pSpawner);
      if ( v46 <= 6 )
      {
        spawnerPrimary._vptr_CEntitySpawnerBase = off_40DD270;
        spawnerPrimary.m_modifyScope.m_pKeyValues = 0;
        spawnerPrimary.m_modifyScope.m_pPrevAllocator = 0;
        CEntityKeyValuesModifyScope::BeginModify(&spawnerPrimary.m_modifyScope, 0);
        spawnerPrimary.m_scriptClassName.m_pString = 0;
        spawnerPrimary._vptr_CEntitySpawnerBase = off_40DD290;
        v47 = CEntityKeyValuesModifyScope::sm_pAllocatorOverride;
        spawnerPrimary.m_pContext = 0;
        spawnerPrimary.m_pSpawnBatch = 0;
        v48 = g_pEntitySystem;
        ++g_pEntitySystem->m_nEntitySpawnerDataUseCount;
        spawnerPrimary.m_pPrevAllocator = v47;
        CEntityKeyValuesModifyScope::sm_pAllocatorOverride = &v48->m_entitySpawnerData;
        spawnerPrimary.m_hSpawnGroupHandle = CEntitySystem::GetActiveSpawnGroupHandle(v48);
        v49 = CEntitySystem::GetSpawnOriginOffset(g_pEntitySystem);
        *&spawnerPrimary.m_mSpawnGroupToWorld.m_flMatVal[0][0] = *&v49->m_flMatVal[0][0];
        qmemcpy(spawnerPrimary.m_mSpawnGroupToWorld.m_flMatVal[1], v49->m_flMatVal[1], 24);
        v50 = *&v49->m_flMatVal[2][2];
        spawnerPrimary.m_pEntityKeyValues = 0;
        *&spawnerPrimary.m_mSpawnGroupToWorld.m_flMatVal[2][2] = v50;
        spawnerPrimary.m_pEntityClass = g_pEntityCDOTA_Item_RuneClass;
        if ( g_pApplication != 0 )
          v51 = (*(g_pApplication->_vptr_IAppSystem + 24))(g_pApplication);
        else
          v51 = 0;
        spawnerPrimary.m_bValidateKeys = v51;
        spawnerPrimary.m_nMode = EntityNetworkingMode_t::ENTITY_NETWORKING_MODE_DEFAULT;
        (*spawnerPrimary._vptr_CEntitySpawnerBase)(&spawnerPrimary);
        CEntityKeyValues::SetValue(spawnerPrimary.m_pEntityKeyValues, -971301790, "dota_item_rune");
        spawnerPrimary.m_pEntityClass = CEntitySystem::FindClassByDesignName(
                                          g_pEntitySystem,
                                          "dota_item_rune",
                                          &spawnerPrimary.m_scriptClassName);
        CEntitySpawner<CDOTA_Item_Rune>::Spawn(v99, &spawnerPrimary);
        if ( (v99[0] + 2) > 1 )
        {
          v52 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v99[0]) >> 9) & 0x3F];
          if ( v52 != 0 )
          {
            v53 = &v52[v99[0] & 0x1FF];
            if ( v53 != 0 && v99[0] == v53->m_EHandle.m_Index )
            {
              v83 = v53->m_pInstance;
              if ( v53->m_pInstance != 0 )
              {
                v84 = CBaseEntity::GetAbsOrigin(pSpawner);
                CBaseEntity::SetAbsOrigin(v83, v84);
                CDOTA_Item_Rune::SetRuneType(v83, v46);
                (*(v83->_vptr_IHandleEntity + 70))(v83, 4);
                v100[0].m_Index = -1;
                v85 = pSpawner->m_pEntity;
                if ( v85 != 0 )
                {
                  v86 = (v85->m_EHandle.m_Index >> 15) - (v85->m_flags & 1);
                  v87 = 0x7FFF;
                  if ( v85->m_EHandle.m_Index != -1 )
                    v87 = v85->m_EHandle.m_Index & 0x7FFF;
                  LOWORD(v100[0].m_Index) = v87 | v100[0].m_Index & 0x8000;
                  v88 = (v86 << 15) | v100[0].m_Index & 0x7FFF;
                  v100[0].m_Index = v88;
                }
                else
                {
                  v88 = -1;
                }
                v83->m_hRuneSpawner.m_Index = v88;
                v89 = DOTACommander();
                CDOTA_Commander::OnRuneSpawn(v89);
              }
            }
          }
        }
        v54 = CEntityKeyValuesModifyScope::sm_pAllocatorOverride;
        spawnerPrimary._vptr_CEntitySpawnerBase = off_40DD270;
        CEntityKeyValuesModifyScope::sm_pAllocatorOverride = spawnerPrimary.m_pPrevAllocator;
        if ( v54 == &g_pEntitySystem->m_entitySpawnerData )
        {
          v56 = g_pEntitySystem->m_nEntitySpawnerDataUseCount;
          g_pEntitySystem->m_nEntitySpawnerDataUseCount = v56 - 1;
          if ( v56 == 1 )
            CUtlScratchMemoryPool::FreeAll(v54);
        }
        if ( spawnerPrimary.m_pEntityKeyValues != 0 )
        {
          CEntityKeyValuesModifyScope::Release(&spawnerPrimary.m_modifyScope);
          v55 = spawnerPrimary.m_pEntityKeyValues;
          v39 = --spawnerPrimary.m_pEntityKeyValues->m_nRefCount <= 0;
          if ( v39 )
          {
            CEntityKeyValues::~CEntityKeyValues(v55);
            operator delete(v55);
          }
        }
        if ( spawnerPrimary.m_scriptClassName.m_pString != 0 )
          CUtlString::FreeMemoryBlock(&spawnerPrimary.m_scriptClassName);
        CEntityKeyValuesModifyScope::Release(&spawnerPrimary.m_modifyScope);
        if ( hRuneSpawners.m_Size <= ++v16 )
          break;
      }
      else
      {
LABEL_45:
        if ( hRuneSpawners.m_Size <= ++v16 )
          break;
      }
    }
  }
  vecAvailableRunes.m_Size = 0;
  if ( (vecAvailableRunes.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<int,int>::Purge(&vecAvailableRunes.m_Memory);
    if ( (vecAvailableRunes.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<int,int>::Purge(&vecAvailableRunes.m_Memory);
  }
LABEL_77:
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hRuneSpawners);
}


// CDOTABaseGameMode::IsCustomHeroSelectEnabled  (line 612, @0x00000000024672a0, libserver.so)  // inlines: operator><int>
// callers: CDOTAGamerules::IsRebornHeroPickingEnabled, CDOTAGamerules::IsHeroUnavailableToPlayer, CDOTAGamerules::State_Enter_HERO_SELECTION
bool __fastcall CDOTABaseGameMode::IsCustomHeroSelectEnabled(CDOTABaseGameMode *const this)
{
  return this->m_nCustomGameForceHeroSelectionId.m_Value > 0;
}


// CDOTABaseGameMode::SetCustomGameForceHero  (line 621, @0x0000000002465950, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<int>
// calls: DOTAGameManager, CDOTAGameManager::GetHeroIDByName, Warning
// callers: CDOTACustomGameEvents::Spawn, CDOTAGamerules::OnDemoHero
// strings: "Unrecognized custom hero name '%s'\n"
void __fastcall CDOTABaseGameMode::SetCustomGameForceHero(CDOTABaseGameMode *const this, const char *pHeroName)
{
  CDOTAGameManager *v4; // rax
  int HeroIDByName; // eax
  int v6; // r13d

  if ( pHeroName == 0 || *pHeroName == 0 )
    goto LABEL_3;
  v4 = DOTAGameManager();
  HeroIDByName = CDOTAGameManager::GetHeroIDByName(v4, pHeroName);
  v6 = HeroIDByName;
  if ( HeroIDByName <= 0 )
  {
    Warning("Unrecognized custom hero name '%s'\n", pHeroName);
LABEL_3:
    if ( this->m_nCustomGameForceHeroSelectionId.m_Value != 0 )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 776, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_nCustomGameForceHeroSelectionId.m_Value = 0;
    }
    return;
  }
  if ( HeroIDByName != this->m_nCustomGameForceHeroSelectionId.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 776, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_nCustomGameForceHeroSelectionId.m_Value = v6;
  }
}


// CDOTABaseGameMode::GetCustomHeroListForPlayer  (line 644, @0x0000000002478740, libserver.so)  // inlines: AddMultipleToTail, GrowMemory, GrowVector, InsertMultipleBefore, RemoveMultipleFromTail, SetCount
// calls: CUtlMemory<int, int>::Grow
// callers: CDOTAGamerules::HeroPickState_Enter_CUSTOMGAME_SELECT
void __fastcall CDOTABaseGameMode::GetCustomHeroListForPlayer(
        CDOTABaseGameMode *const this,
        int iPlayerID,
        CUtlVector<int,CUtlMemory<int,int> > *pOutHeroIdsForPlayer,
        int *pOutForceHeroId)
{
  int m_nAllocationCount; // esi
  int *pOutForceHeroIda; // [rsp+0h] [rbp-20h]
  CUtlVector<int,CUtlMemory<int,int> > *pOutHeroIdsForPlayera; // [rsp+8h] [rbp-18h]

  if ( -pOutHeroIdsForPlayer->m_Size < 0 || pOutHeroIdsForPlayer->m_Size == 0 )
  {
    if ( pOutHeroIdsForPlayer->m_Size == 0 )
    {
      *pOutForceHeroId = this->m_nCustomGameForceHeroSelectionId.m_Value;
      return;
    }
  }
  else
  {
    m_nAllocationCount = pOutHeroIdsForPlayer->m_Memory.m_nAllocationCount;
    if ( m_nAllocationCount < 0 )
    {
      pOutForceHeroIda = pOutForceHeroId;
      pOutHeroIdsForPlayera = pOutHeroIdsForPlayer;
      CUtlMemory<int,int>::Grow(&pOutHeroIdsForPlayer->m_Memory, -m_nAllocationCount);
      pOutForceHeroId = pOutForceHeroIda;
      pOutHeroIdsForPlayer = pOutHeroIdsForPlayera;
    }
  }
  pOutHeroIdsForPlayer->m_Size = 0;
  *pOutForceHeroId = this->m_nCustomGameForceHeroSelectionId.m_Value;
}


