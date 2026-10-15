// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/npc/dota_npc_creature.cpp:31
class C_CDOTA_BaseNPC_Creature_MapInstall {
	C_CDOTA_BaseNPC_Creature_MapInstall();

	// sizeof = 1
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_BaseNPC_Creature::YouForgotToImplementOrDeclareServerClass  (line 31, @0x00000000028f53f0, libserver.so)
int __fastcall CDOTA_BaseNPC_Creature::YouForgotToImplementOrDeclareServerClass(CDOTA_BaseNPC_Creature *const this)
{
  return 0;
}


// CDOTA_BaseNPC_Creature::GetServerClass  (line 31, @0x0000000002900810, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_BaseNPC_Creature::GetServerClass(CDOTA_BaseNPC_Creature *const this)
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


// dota_unit_setvalue  (line 33, @0x00000000028f6430, libserver.so)  // inlines: Arg, operator[]
// calls: DOTAGameManager, CDOTAGameManager::GetDataForHeroOrUnit, KeyValues::SetString, Msg
// strings: "usage: dota_unit_setvalue <unit name> <value name> <value>\n", "%s is not a known unit type.\n"
void __fastcall dota_unit_setvalue(const CCommandContext *const ctx, const CCommand *const args)
{
  const char *v2; // r13
  const char *v3; // rbx
  const char *v4; // r12
  CDOTAGameManager *v5; // rax
  KeyValues *DataForHeroOrUnit; // rdi

  if ( args->m_nArgc == 4 )
  {
    v2 = args->m_ppArgv[1];
    v3 = args->m_ppArgv[2];
    v4 = args->m_ppArgv[3];
    v5 = DOTAGameManager();
    DataForHeroOrUnit = CDOTAGameManager::GetDataForHeroOrUnit(v5, v2);
    if ( DataForHeroOrUnit != 0 )
      KeyValues::SetString(DataForHeroOrUnit, v3, v4);
    else
      Msg("%s is not a known unit type.\n", v2);
  }
  else
  {
    Msg("usage: dota_unit_setvalue <unit name> <value name> <value>\n");
  }
}


// CDOTA_BaseNPC_Creature::Precache  (line 55, @0x000000000294bb60, libserver.so)
// calls: CDOTA_BaseNPC::Precache, CDOTA_BaseNPC_Creature::InitializeWearableItemDefs, CDOTA_BaseNPC_Creature::PrecacheEconItem
// callers: CDOTA_Unit_Nian::Precache
void __fastcall CDOTA_BaseNPC_Creature::Precache(
        CDOTA_BaseNPC_Creature *const this,
        const CEntityPrecacheContext *pContext)
{
  __int64 v4; // rbx

  v4 = 0;
  CDOTA_BaseNPC::Precache(this, pContext);
  CDOTA_BaseNPC_Creature::InitializeWearableItemDefs(this);
  if ( this->m_vecAttachWearableItemDefs.m_Size > 0 )
  {
    do
      CDOTA_BaseNPC_Creature::PrecacheEconItem(
        this,
        this->m_vecAttachWearableItemDefs.m_Memory.m_pMemory[v4++],
        pContext);
    while ( this->m_vecAttachWearableItemDefs.m_Size > v4 );
  }
}


// CDOTA_BaseNPC_Creature::Spawn  (line 67, @0x0000000002951080, libserver.so)  // inlines: GetAbilityData, GetLevel, GetMaxLevel, Spawn, operator=
// calls: CDOTA_BaseNPC::Spawn, CDOTA_BaseNPC::GetAbilityByIndex, CDOTABaseAbility::UpgradeAbility, CDOTA_BaseNPC_Creature::InitializeCreature, CDOTA_BaseNPC_Creature::AttachEconItem, CDOTABaseAbility::LoadAbilityData, CBaseEntity::ClearFlags, CBaseEntity::SetLifeState, CDOTA_BaseNPC::ModifyHealth
// callers: CDOTA_Unit_Nian::Spawn
void __fastcall CDOTA_BaseNPC_Creature::Spawn(CDOTA_BaseNPC_Creature *const this, const CEntityKeyValues *pKeyValues)
{
  int v4; // r14d
  CDOTABaseAbility *AbilityByIndex; // rax
  CDOTABaseAbility *v6; // rbx
  DOTAAbilityData_t *m_pAbilityData; // rax
  int m_Value; // r15d
  int m_iMaxLevel; // r12d
  vec_t x; // xmm2_4
  vec_t y; // xmm1_4
  vec_t z; // xmm0_4
  __int64 v13; // r12
  int v14; // ebx
  uint16 m_Data; // si

  this->m_iUnitType |= 0x10000u;
  if ( this->m_bCanRespawn && this->m_bInitialized )
  {
    CBaseEntity::ClearFlags(this);
    CBaseEntity::SetLifeState(this, LifeState_t::LIFE_ALIVE);
    CDOTA_BaseNPC::ModifyHealth(this, this->m_flBaseMaxHealth, 0, 0, 0);
  }
  v4 = 0;
  CDOTA_BaseNPC::Spawn(this, pKeyValues);
  this->m_iUnitType |= 0x80u;
  if ( !this->m_bInitialized )
  {
    do
    {
      AbilityByIndex = CDOTA_BaseNPC::GetAbilityByIndex(this, v4);
      v6 = AbilityByIndex;
      if ( AbilityByIndex != 0 )
      {
        m_pAbilityData = AbilityByIndex->m_pAbilityData;
        m_Value = this->m_iCurrentLevel.m_Value;
        if ( m_pAbilityData == 0 )
        {
          CDOTABaseAbility::LoadAbilityData(v6, 0);
          m_pAbilityData = v6->m_pAbilityData;
        }
        m_iMaxLevel = m_pAbilityData->m_iMaxLevel;
        if ( m_Value < m_iMaxLevel )
          m_iMaxLevel = this->m_iCurrentLevel.m_Value;
        while ( m_iMaxLevel > v6->m_iLevel.m_Value )
          CDOTABaseAbility::UpgradeAbility(v6, 0);
      }
      ++v4;
    }
    while ( v4 != 24 );
    this->m_bCanRespawn = 0;
    this->m_pszDefaultState = 0;
    this->m_pszCurrentState = 0;
    this->m_flDisableResistance = 0.0;
    x = vec3_invalid.x;
    this->m_bIsBuildingAggressive = 0;
    y = vec3_invalid.y;
    this->m_nHPGain = 0;
    z = vec3_invalid.z;
    this->m_vDesiredCastLocation.x = x;
    this->m_vDesiredCastLocation.y = y;
    this->m_vDesiredCastLocation.z = z;
    this->m_vLastDamageSource.x = x;
    this->m_vLastDamageSource.y = y;
    this->m_nManaGain = 0;
    this->m_flHPRegenGain = 0.0;
    this->m_flManaRegenGain = 0.0;
    this->m_nDamageGain = 0;
    this->m_flArmorGain = 0.0;
    this->m_flDisableResistGain = 0.0;
    this->m_flMagicResistGain = 0.0;
    this->m_flAttackTimeGain = 0.0;
    this->m_nMoveSpeedGain = 0;
    this->m_nBountyGain = 0;
    this->m_nXPGain = 0;
    this->m_nPermanentDesire = -1;
    this->m_nCreatureDesire = -1;
    this->m_bIsHeroAggressive = 1;
    this->m_bHasOffensiveAbility = 0;
    this->m_bHasDefensiveAbility = 0;
    this->m_bHasEscapeAbility = 0;
    this->m_pDesiredNPCTarget = 0;
    this->m_vLastDamageSource.z = z;
    this->m_bIsChampion = 0;
    CDOTA_BaseNPC_Creature::InitializeCreature(this);
    if ( this->m_vecAttachWearableItemDefs.m_Size > 0 )
    {
      v13 = 0;
      v14 = 0;
      do
      {
        ++v14;
        m_Data = this->m_vecAttachWearableItemDefs.m_Memory.m_pMemory[v13++].m_Data;
        CDOTA_BaseNPC_Creature::AttachEconItem(this, m_Data);
      }
      while ( this->m_vecAttachWearableItemDefs.m_Size > v14 );
    }
  }
}


// CDOTA_BaseNPC_Creature::InitializeWearableItemDefs  (line 148, @0x000000000293e450, libserver.so)  // inlines: AddToTail, CopyConstruct<item_definition_index_t>, Element, GetUnitName, GrowMemory, String, ToCStr, operator[]
// calls: DOTAGameManager, CDOTAGameManager::GetDataForHeroOrUnit, KeyValues::FindKey, KeyValues::GetFirstSubKey, KeyValues::GetNextKey, KeyValues::GetInt, CUtlMemory<item_definition_index_t, int>::Grow
// callers: CDOTA_BaseNPC_Creature::Precache
// strings: "AttachWearables", "ItemDef"
void __fastcall CDOTA_BaseNPC_Creature::InitializeWearableItemDefs(CDOTA_BaseNPC_Creature *const this)
{
  const char *m_pAsString; // rbx
  CDOTAGameManager *v3; // rax
  KeyValues *DataForHeroOrUnit; // rax
  KeyValues *Key; // rax
  KeyValues *v6; // rax
  KeyValues *i; // rbx
  int Int; // eax
  __int64 m_Size; // r13
  uint16 v10; // r15
  int v11; // edx
  item_definition_index_t *v12; // rdx

  m_pAsString = "";
  if ( this->m_iszUnitName.m_Value.u.m_Id != 0 )
    m_pAsString = this->m_iszUnitName.m_Value.u.m_pAsString;
  v3 = DOTAGameManager();
  DataForHeroOrUnit = CDOTAGameManager::GetDataForHeroOrUnit(v3, m_pAsString);
  if ( DataForHeroOrUnit != 0 )
  {
    Key = KeyValues::FindKey(DataForHeroOrUnit, "Creature", 0);
    if ( Key != 0 )
    {
      v6 = KeyValues::FindKey(Key, "AttachWearables", 0);
      if ( v6 != 0 )
      {
        for ( i = KeyValues::GetFirstSubKey(v6); i != 0; i = KeyValues::GetNextKey(i) )
        {
          while ( 1 )
          {
            Int = KeyValues::GetInt(i, "ItemDef", 0);
            if ( Int != 0 )
            {
              m_Size = this->m_vecAttachWearableItemDefs.m_Size;
              v10 = Int;
              v11 = this->m_vecAttachWearableItemDefs.m_Size;
              if ( m_Size == this->m_vecAttachWearableItemDefs.m_Memory.m_nAllocationCount )
              {
                CUtlMemory<item_definition_index_t,int>::Grow(&this->m_vecAttachWearableItemDefs.m_Memory, 1);
                v11 = this->m_vecAttachWearableItemDefs.m_Size;
              }
              this->m_vecAttachWearableItemDefs.m_Size = v11 + 1;
              v12 = &this->m_vecAttachWearableItemDefs.m_Memory.m_pMemory[m_Size];
              if ( v12 != 0 )
                break;
            }
            i = KeyValues::GetNextKey(i);
            if ( i == 0 )
              return;
          }
          v12->m_Data = v10;
        }
      }
    }
  }
}


// CDOTA_BaseNPC_Creature::InitializeCreature  (line 174, @0x000000000294fc90, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<CreatureAbilityData_t>, CopyConstruct<CreatureStateData_t>, CopyConstruct<ItemDropData_t>, CreatureAbilityData_t, Element, FStrEq, Get, GetAbilityData, GetBool, GetEHandle, GetEntryIndex, GetInstance, GetLevel, GetMaxLevel, GetSerialNumber, GetTeamNumber, GetUnitName, GrowMemory, NetworkStateChanged, Set, SetChaseEntity, SetEscortTarget, SetInitialGoalEntity, SetLastUsedAbility, String, ToCStr, ToDOTABaseNPC, _V_strcmp, operator CBaseEntity*, operator=, operator=<bool>, operator[], ~CUtlVector
// calls: DOTAGameManager, CDOTAGameManager::GetDataForHeroOrUnit, KeyValues::FindKey, KeyValues::GetInt, KeyValues::GetFirstSubKey, KeyValues::GetNextKey, KeyValues::GetString, KeyValues::GetFloat, CUtlMemory<CreatureStateData_t, int>::Grow, CDOTA_BaseNPC::FindAbilityByName, CUtlMemory<CreatureAbilityData_t, int>::Grow, CBaseEntity::GetAbsOrigin (30 total)
// callers: CDOTA_BaseNPC_Creature::Spawn
// strings: "UsesGestureBasedAttackAnimation", "Escort", "EquippedItems", "ItemDrops", "RequiredChampion", "SetSkin" (14 total)
// globals: `typeinfo for'CDOTA_BaseNPC, `typeinfo for'CDOTA_BaseNPC_Creature
void __fastcall CDOTA_BaseNPC_Creature::InitializeCreature(CDOTA_BaseNPC_Creature *const this)
{
  CDOTA_BaseNPC_Creature *v1; // r15
  const char *m_pAsString; // rbx
  CDOTAGameManager *v3; // rax
  KeyValues *DataForHeroOrUnit; // rax
  KeyValues *Key; // rax
  KeyValues *v6; // rbx
  bool v7; // bl
  KeyValues *v8; // rax
  KeyValues *FirstSubKey; // rbx
  CUtlMemory<CreatureStateData_t,int> *p_m_Memory; // r13
  CDOTA_BaseNPC_Creature *v11; // r12
  __int64 v12; // rax
  const char *String; // r15
  float v14; // xmm1_4
  float v15; // xmm1_4
  float v16; // xmm1_4
  float v17; // xmm1_4
  float v18; // xmm0_4
  int m_Size; // r14d
  int v20; // edx
  char *v21; // rax
  float v22; // xmm1_4
  float v23; // xmm1_4
  float v24; // xmm1_4
  float v25; // xmm1_4
  float v26; // xmm1_4
  float v27; // xmm1_4
  float v28; // xmm1_4
  KeyValues *v29; // rax
  KeyValues *i; // rbx
  __int64 v31; // rdx
  uint32 m_Index; // ecx
  KeyValues *v33; // rax
  const char *v34; // rax
  CDOTABaseAbility *AbilityByName; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v37; // eax
  __int16 v38; // cx
  int Int; // r14d
  int v40; // r13d
  int v41; // r12d
  int v42; // eax
  __int64 v43; // rdx
  int v44; // ecx
  const Vector *AbsOrigin; // rax
  const CEntityHandle *v46; // rbx
  __int64 v47; // r12
  CEntityInstance *v48; // rax
  KeyValues *v49; // rax
  KeyValues *j; // rbx
  __int64 v51; // rax
  uint32 v52; // edx
  KeyValues *v53; // rax
  const char *v54; // rax
  CDOTABaseAbility *v55; // rax
  CEntityIdentity *v56; // rdx
  int v57; // eax
  __int16 v58; // cx
  int v59; // r14d
  int v60; // r13d
  int v61; // r12d
  bool v62; // zf
  __int64 v63; // rax
  bool v64; // cl
  int v65; // edx
  KeyValues *v66; // rax
  KeyValues *k; // rbx
  __int64 v68; // rdx
  uint32 v69; // eax
  KeyValues *v70; // rax
  const char *v71; // rax
  CDOTABaseAbility *v72; // rax
  CEntityIdentity *v73; // rdx
  int v74; // eax
  __int16 v75; // cx
  bool v76; // r14
  KeyValues *v77; // rax
  __int64 v78; // r13
  int v79; // eax
  KeyValues *v80; // rax
  KeyValues *m; // rbx
  const char *v82; // r12
  int v83; // eax
  CDOTA_Item *Item; // rax
  CDOTA_Item *v85; // r12
  int v86; // eax
  KeyValues *v87; // rax
  KeyValues *n; // rbx
  __int64 v89; // rax
  const char *v90; // r14
  int v91; // r13d
  int v92; // r12d
  bool v93; // zf
  __int64 v94; // rax
  bool v95; // cl
  int v96; // edx
  int v97; // eax
  char *m_pszCurrentState; // rax
  KeyValues *v99; // rax
  KeyValues *NextKey; // r13
  const char *v101; // rax
  CDOTABaseAbility *v102; // r12
  int v103; // r15d
  int ii; // ebx
  DOTAAbilityData_t *m_pAbilityData; // rdx
  int m_Value; // r14d
  const char *v107; // r12
  float v108; // xmm1_4
  CBaseEntity *v109; // r14
  CBaseEntity *v110; // rax
  const char **v111; // rax
  const char **v112; // r13
  const char *v113; // rdi
  const char *v114; // rdx
  int v115; // eax
  __int16 v116; // cx
  const char *v117; // r12
  CBaseEntity *v118; // r14
  CBaseEntity *EntityByClassname; // rax
  const char **v120; // rax
  const char **v121; // r13
  const char *v122; // rdi
  const char *v123; // rdx
  int v124; // eax
  __int16 v125; // cx
  int v126; // [rsp+24h] [rbp-BCh]
  KeyValues *pCreatureData; // [rsp+28h] [rbp-B8h]
  bool v128; // [rsp+30h] [rbp-B0h]
  int v129; // [rsp+38h] [rbp-A8h]
  bool v130; // [rsp+3Ch] [rbp-A4h]
  int v131; // [rsp+3Ch] [rbp-A4h]
  bool v132; // [rsp+40h] [rbp-A0h]
  bool v133; // [rsp+40h] [rbp-A0h]
  bool v134; // [rsp+47h] [rbp-99h]
  bool v135; // [rsp+47h] [rbp-99h]
  float v136; // [rsp+48h] [rbp-98h]
  bool v137; // [rsp+48h] [rbp-98h]
  bool v138; // [rsp+48h] [rbp-98h]
  float v139; // [rsp+50h] [rbp-90h]
  bool v140; // [rsp+50h] [rbp-90h]
  bool v141; // [rsp+50h] [rbp-90h]
  float Float; // [rsp+54h] [rbp-8Ch]
  bool v143; // [rsp+54h] [rbp-8Ch]
  bool v144; // [rsp+54h] [rbp-8Ch]
  int v145; // [rsp+54h] [rbp-8Ch]
  float pszChaseTarget; // [rsp+58h] [rbp-88h]
  int pszChaseTargeta; // [rsp+58h] [rbp-88h]
  unsigned int pszChaseTargetb; // [rsp+58h] [rbp-88h]
  bool pszChaseTargete; // [rsp+58h] [rbp-88h]
  CDOTA_BaseNPC *pszChaseTargetc; // [rsp+58h] [rbp-88h]
  const char *pszChaseTargetd; // [rsp+58h] [rbp-88h]
  CreatureAbilityData_t sAbilityData; // [rsp+60h] [rbp-80h] BYREF
  KeyValues kv; // [rsp+90h] [rbp-50h] BYREF
  unsigned __int64 v154; // [rsp+A8h] [rbp-38h]

  v1 = this;
  m_pAsString = "";
  v154 = __readfsqword(0x28u);
  if ( this->m_iszUnitName.m_Value.u.m_Id != 0 )
    m_pAsString = this->m_iszUnitName.m_Value.u.m_pAsString;
  v3 = DOTAGameManager();
  DataForHeroOrUnit = CDOTAGameManager::GetDataForHeroOrUnit(v3, m_pAsString);
  if ( DataForHeroOrUnit != 0 )
  {
    Key = KeyValues::FindKey(DataForHeroOrUnit, "Creature", 0);
    v6 = Key;
    pCreatureData = Key;
    if ( Key != 0 )
    {
      v1->m_bCanRespawn = KeyValues::GetInt(Key, "CanRespawn", 0) != 0;
      v1->m_bUsesGestureBasedAttackAnimation = KeyValues::GetInt(v6, "UsesGestureBasedAttackAnimation", 0) != 0;
      v1->m_bIsHybridFlyer = KeyValues::GetInt(v6, "IsHybridFlyer", 0) != 0;
      v7 = KeyValues::GetInt(v6, "ShouldDoFlyHeightVisual", 1) != 0;
      if ( v7 != v1->m_bShouldDoFlyHeightVisual.m_Value )
      {
        (*(v1->_vptr_IHandleEntity + 22))(v1, 4188, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        v1->m_bShouldDoFlyHeightVisual.m_Value = v7;
      }
      v8 = KeyValues::FindKey(pCreatureData, "States", 0);
      if ( v8 != 0 )
      {
        FirstSubKey = KeyValues::GetFirstSubKey(v8);
        if ( FirstSubKey != 0 )
        {
          p_m_Memory = &v1->m_vCreatureStates.m_Memory;
          v11 = v1;
          do
          {
            String = KeyValues::GetString(FirstSubKey, "Name", "", 0, 0);
            pszChaseTarget = KeyValues::GetFloat(FirstSubKey, "Aggression", v14);
            Float = KeyValues::GetFloat(FirstSubKey, "Avoidance", v15);
            v136 = KeyValues::GetFloat(FirstSubKey, "Support", v16);
            v18 = KeyValues::GetFloat(FirstSubKey, "RoamDistance", v17);
            m_Size = v11->m_vCreatureStates.m_Size;
            v20 = m_Size;
            if ( m_Size == v11->m_vCreatureStates.m_Memory.m_nAllocationCount )
            {
              v139 = v18;
              CUtlMemory<CreatureStateData_t,int>::Grow(p_m_Memory, 1);
              v20 = v11->m_vCreatureStates.m_Size;
              v18 = v139;
            }
            v11->m_vCreatureStates.m_Size = v20 + 1;
            v12 = &v11->m_vCreatureStates.m_Memory.m_pMemory[m_Size];
            if ( v12 != 0 )
            {
              *v12 = String;
              *(v12 + 20) = v18;
              *(v12 + 8) = pszChaseTarget;
              *(v12 + 12) = Float;
              *(v12 + 16) = v136;
            }
            FirstSubKey = KeyValues::GetNextKey(FirstSubKey);
          }
          while ( FirstSubKey != 0 );
          v1 = v11;
        }
      }
      v21 = KeyValues::GetString(pCreatureData, "DefaultState", "", 0, 0);
      v1->m_pEscortTarget = 0;
      v1->m_pszDefaultState = v21;
      v1->m_pszCurrentState = v21;
      if ( v21 == "Escort" || strcmp(v21, "Escort") == 0 )
      {
        sAbilityData.hAbility.m_Index = 0;
        *&sAbilityData.bIsLinear = 0;
        sAbilityData.nUseAtHealthPercent = 0;
        sAbilityData.nRadius = 0;
        AbsOrigin = CBaseEntity::GetAbsOrigin(v1);
        FindUnitsInRadius(v1->m_iTeamNum.m_Value, AbsOrigin, v1, -1.0, &sAbilityData, 1, 3, 1, 0, 0);
        if ( sAbilityData.hAbility.m_Index <= 0 )
        {
LABEL_44:
          CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&sAbilityData);
        }
        else
        {
          v46 = *&sAbilityData.bIsLinear;
          v47 = *&sAbilityData.bIsLinear + 4LL * (sAbilityData.hAbility.m_Index - 1) + 4;
          while ( 1 )
          {
            v48 = CEntityHandle::operator CEntityInstance *(v46);
            if ( v48 != 0
              && BYTE3(v48[7]._vptr_IHandleEntity) != 0
              && (BYTE2(v48[43].m_iszPrivateVScripts.u.m_pAsString) & 1) != 0
              && BYTE4(v48[99].m_pEntity) != 0 )
            {
              break;
            }
            if ( ++v46 == v47 )
              goto LABEL_44;
          }
          v1->m_pEscortTarget = v48;
          CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&sAbilityData);
        }
      }
      v1->m_nPermanentDesire = KeyValues::GetInt(pCreatureData, "PermanentDesire", -1);
      v1->m_flDisableResistance = KeyValues::GetFloat(pCreatureData, "DisableResistance", v22);
      v1->m_nHPGain = KeyValues::GetInt(pCreatureData, "HPGain", 0);
      v1->m_nManaGain = KeyValues::GetInt(pCreatureData, "ManaGain", 0);
      v1->m_flHPRegenGain = KeyValues::GetFloat(pCreatureData, "HPRegenGain", v23);
      v1->m_flManaRegenGain = KeyValues::GetFloat(pCreatureData, "ManaRegenGain", v24);
      v1->m_nDamageGain = KeyValues::GetInt(pCreatureData, "DamageGain", 0);
      v1->m_flArmorGain = KeyValues::GetFloat(pCreatureData, "ArmorGain", v25);
      v1->m_flMagicResistGain = KeyValues::GetFloat(pCreatureData, "MagicResistGain", v26);
      v1->m_flDisableResistGain = KeyValues::GetFloat(pCreatureData, "DisableResistGain", v27);
      v1->m_flAttackTimeGain = KeyValues::GetFloat(pCreatureData, "AttackTimeGain", v28);
      v1->m_nMoveSpeedGain = KeyValues::GetInt(pCreatureData, "MoveSpeedGain", 0);
      v1->m_nBountyGain = KeyValues::GetInt(pCreatureData, "BountyGain", 0);
      v1->m_nXPGain = KeyValues::GetInt(pCreatureData, "XPGain", 0);
      v1->m_bIsBuildingAggressive = KeyValues::GetInt(pCreatureData, "BuildingAggressive", 0) != 0;
      v1->m_bDisableClumpingBehavior = KeyValues::GetInt(pCreatureData, "DisableClumpingBehavior", 0) != 0;
      v29 = KeyValues::FindKey(pCreatureData, "OffensiveAbilities", 0);
      if ( v29 != 0 )
      {
        v1->m_bHasOffensiveAbility = 1;
        for ( i = KeyValues::GetFirstSubKey(v29); i != 0; i = KeyValues::GetNextKey(i) )
        {
          sAbilityData.hAbility.m_Index = -1;
          v33 = KeyValues::FindKey(i, "Name", 0);
          if ( v33 != 0 )
          {
            v34 = KeyValues::GetString(v33, 0, "", 0, 0);
            AbilityByName = CDOTA_BaseNPC::FindAbilityByName(v1, v34, 0);
            if ( AbilityByName == 0 )
              break;
            m_pEntity = AbilityByName->m_pEntity;
            if ( m_pEntity != 0 )
            {
              v37 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
              v38 = 0x7FFF;
              if ( m_pEntity->m_EHandle.m_Index != -1 )
                v38 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
              LOWORD(sAbilityData.hAbility.m_Index) = v38 | sAbilityData.hAbility.m_Index & 0x8000;
              sAbilityData.hAbility.m_Index = (v37 << 15) | sAbilityData.hAbility.m_Index & 0x7FFF;
            }
          }
          v143 = KeyValues::GetInt(i, "Damage", 0) != 0;
          v137 = KeyValues::GetInt(i, "Debuff", 0) != 0;
          v140 = KeyValues::GetInt(i, "Stun", 0) != 0;
          v134 = KeyValues::GetInt(i, "AOE", 0) != 0;
          v132 = KeyValues::GetInt(i, "Linear", 0) != 0;
          v130 = KeyValues::GetInt(i, "UseOnCreeps", 0) != 0;
          Int = KeyValues::GetInt(i, "Radius", 0);
          pszChaseTargeta = KeyValues::GetInt(i, "MinimumTargets", 0);
          v40 = KeyValues::GetInt(i, "MinimumHP", 0);
          v128 = KeyValues::GetInt(i, "UseOnTrees", 0) != 0;
          v41 = KeyValues::GetInt(i, "MinimumRange", 0);
          v42 = KeyValues::GetInt(i, "UseAtHealthPercent", 0);
          v43 = v1->m_vOffensiveAbilities.m_Size;
          v44 = v1->m_vOffensiveAbilities.m_Size;
          if ( v43 == v1->m_vOffensiveAbilities.m_Memory.m_nAllocationCount )
          {
            v126 = v1->m_vOffensiveAbilities.m_Size;
            v129 = v42;
            CUtlMemory<CreatureAbilityData_t,int>::Grow(&v1->m_vOffensiveAbilities.m_Memory, 1);
            v44 = v1->m_vOffensiveAbilities.m_Size;
            v43 = v126;
            v42 = v129;
          }
          v1->m_vOffensiveAbilities.m_Size = v44 + 1;
          v31 = &v1->m_vOffensiveAbilities.m_Memory.m_pMemory[v43];
          if ( v31 != 0 )
          {
            m_Index = sAbilityData.hAbility.m_Index;
            *(v31 + 16) = v42;
            *(v31 + 10) = 0;
            *(v31 + 11) = 0;
            *(v31 + 12) = 0;
            *v31 = m_Index;
            *(v31 + 13) = 0;
            *(v31 + 15) = 0;
            *(v31 + 20) = Int;
            *(v31 + 4) = v143;
            *(v31 + 24) = pszChaseTargeta;
            *(v31 + 28) = v40;
            *(v31 + 32) = v41;
            *(v31 + 5) = v137;
            *(v31 + 36) = 0;
            *(v31 + 6) = v140;
            *(v31 + 7) = v134;
            *(v31 + 8) = v132;
            *(v31 + 9) = v130;
            *(v31 + 14) = v128;
          }
        }
      }
      else
      {
        v1->m_bHasOffensiveAbility = 0;
      }
      v49 = KeyValues::FindKey(pCreatureData, "DefensiveAbilities", 0);
      if ( v49 != 0 )
      {
        v1->m_bHasDefensiveAbility = 1;
        for ( j = KeyValues::GetFirstSubKey(v49); j != 0; j = KeyValues::GetNextKey(j) )
        {
          sAbilityData.hAbility.m_Index = -1;
          v53 = KeyValues::FindKey(j, "Name", 0);
          if ( v53 != 0 )
          {
            v54 = KeyValues::GetString(v53, 0, "", 0, 0);
            v55 = CDOTA_BaseNPC::FindAbilityByName(v1, v54, 0);
            if ( v55 == 0 )
              break;
            v56 = v55->m_pEntity;
            if ( v56 != 0 )
            {
              v57 = (v56->m_EHandle.m_Index >> 15) - (v56->m_flags & 1);
              v58 = 0x7FFF;
              if ( v56->m_EHandle.m_Index != -1 )
                v58 = v56->m_EHandle.m_Index & 0x7FFF;
              LOWORD(sAbilityData.hAbility.m_Index) = v58 | sAbilityData.hAbility.m_Index & 0x8000;
              sAbilityData.hAbility.m_Index = (v57 << 15) | sAbilityData.hAbility.m_Index & 0x7FFF;
            }
          }
          v144 = KeyValues::GetInt(j, "Buff", 0) != 0;
          v138 = KeyValues::GetInt(j, "Heal", 0) != 0;
          v141 = KeyValues::GetInt(j, "UseSelfishly", 0) != 0;
          v59 = KeyValues::GetInt(j, "UseAtHealthPercent", 0);
          v135 = KeyValues::GetInt(j, "AOE", 0) != 0;
          v60 = KeyValues::GetInt(j, "Radius", 0);
          v61 = KeyValues::GetInt(j, "MinimumTargets", 0);
          pszChaseTargetb = KeyValues::GetInt(j, "MinimumRange", 0);
          v62 = KeyValues::GetInt(j, "UseOnStrongestAlly", 0) == 0;
          v63 = v1->m_vDefensiveAbilities.m_Size;
          v64 = !v62;
          v65 = v1->m_vDefensiveAbilities.m_Size;
          if ( v63 == v1->m_vDefensiveAbilities.m_Memory.m_nAllocationCount )
          {
            v131 = v1->m_vDefensiveAbilities.m_Size;
            v133 = !v62;
            CUtlMemory<CreatureAbilityData_t,int>::Grow(&v1->m_vDefensiveAbilities.m_Memory, 1);
            v65 = v1->m_vDefensiveAbilities.m_Size;
            v63 = v131;
            v64 = v133;
          }
          v1->m_vDefensiveAbilities.m_Size = v65 + 1;
          v51 = &v1->m_vDefensiveAbilities.m_Memory.m_pMemory[v63];
          if ( v51 != 0 )
          {
            v52 = sAbilityData.hAbility.m_Index;
            *(v51 + 15) = v64;
            *(v51 + 4) = 0;
            *(v51 + 5) = 0;
            *(v51 + 7) = v135;
            *v51 = v52;
            *(v51 + 6) = 0;
            *(v51 + 8) = 0;
            *(v51 + 10) = v138;
            *(v51 + 9) = 0;
            *(v51 + 13) = 0;
            *(v51 + 14) = 0;
            *(v51 + 11) = v144;
            *(v51 + 16) = v59;
            *(v51 + 20) = v60;
            *(v51 + 24) = v61;
            *(v51 + 12) = v141;
            *(v51 + 28) = 0;
            *(v51 + 32) = pszChaseTargetb;
          }
        }
      }
      else
      {
        v1->m_bHasDefensiveAbility = 0;
      }
      v66 = KeyValues::FindKey(pCreatureData, "EscapeAbilities", 0);
      if ( v66 != 0 )
      {
        v1->m_bHasEscapeAbility = 1;
        for ( k = KeyValues::GetFirstSubKey(v66); k != 0; k = KeyValues::GetNextKey(k) )
        {
          sAbilityData.hAbility.m_Index = -1;
          v70 = KeyValues::FindKey(k, "Name", 0);
          if ( v70 != 0 )
          {
            v71 = KeyValues::GetString(v70, 0, "", 0, 0);
            v72 = CDOTA_BaseNPC::FindAbilityByName(v1, v71, 0);
            if ( v72 == 0 )
              break;
            v73 = v72->m_pEntity;
            if ( v73 != 0 )
            {
              v74 = (v73->m_EHandle.m_Index >> 15) - (v73->m_flags & 1);
              v75 = 0x7FFF;
              if ( v73->m_EHandle.m_Index != -1 )
                v75 = v73->m_EHandle.m_Index & 0x7FFF;
              LOWORD(sAbilityData.hAbility.m_Index) = v75 | sAbilityData.hAbility.m_Index & 0x8000;
              sAbilityData.hAbility.m_Index = (v74 << 15) | sAbilityData.hAbility.m_Index & 0x7FFF;
            }
          }
          v76 = 0;
          v77 = KeyValues::FindKey(k, "CanHelpOthersEscape", 0);
          if ( v77 != 0 )
            v76 = KeyValues::GetInt(v77, 0, 0) != 0;
          v78 = v1->m_vEscapeAbilities.m_Size;
          v79 = v1->m_vEscapeAbilities.m_Size;
          if ( v78 == v1->m_vEscapeAbilities.m_Memory.m_nAllocationCount )
          {
            CUtlMemory<CreatureAbilityData_t,int>::Grow(&v1->m_vEscapeAbilities.m_Memory, 1);
            v79 = v1->m_vEscapeAbilities.m_Size;
          }
          v1->m_vEscapeAbilities.m_Size = v79 + 1;
          v68 = &v1->m_vEscapeAbilities.m_Memory.m_pMemory[v78];
          if ( v68 != 0 )
          {
            v69 = sAbilityData.hAbility.m_Index;
            *(v68 + 4) = 0;
            *(v68 + 5) = 0;
            *(v68 + 6) = 0;
            *(v68 + 7) = 0;
            *v68 = v69;
            *(v68 + 8) = 0;
            *(v68 + 9) = 0;
            *(v68 + 10) = 0;
            *(v68 + 11) = 0;
            *(v68 + 12) = 0;
            *(v68 + 13) = v76;
            *(v68 + 14) = 0;
            *(v68 + 15) = 0;
            *(v68 + 16) = 100;
            *(v68 + 20) = 0;
            *(v68 + 24) = 1;
            *(v68 + 28) = 0;
            *(v68 + 32) = 0;
            *(v68 + 36) = 0;
          }
        }
      }
      else
      {
        v1->m_bHasEscapeAbility = 0;
      }
      v80 = KeyValues::FindKey(pCreatureData, "EquippedItems", 0);
      if ( v80 != 0 )
      {
        for ( m = KeyValues::GetFirstSubKey(v80); m != 0; m = KeyValues::GetNextKey(m) )
        {
          v82 = KeyValues::GetString(m, "Item", "", 0, 0);
          v83 = (*(v1->_vptr_IHandleEntity + 414))(v1);
          Item = DOTA_CreateItem(v82, v1, v83);
          v85 = Item;
          if ( Item != 0 && v1->m_bHasInventory )
          {
            CDOTA_UnitInventory::AddItem(&v1->m_Inventory, Item, 3, -1, 0, 0);
            v86 = KeyValues::GetInt(m, "Charges", 0);
            CDOTA_Item::SetCurrentCharges(v85, v86);
          }
        }
      }
      v87 = KeyValues::FindKey(pCreatureData, "ItemDrops", 0);
      if ( v87 != 0 )
      {
        for ( n = KeyValues::GetFirstSubKey(v87); n != 0; n = KeyValues::GetNextKey(n) )
        {
          v90 = KeyValues::GetString(n, "Item", "", 0, 0);
          v91 = KeyValues::GetInt(n, "Chance", 0);
          v92 = KeyValues::GetInt(n, "RequiredLevel", 1);
          v93 = KeyValues::GetInt(n, "RequiredChampion", 0) == 0;
          v94 = v1->m_vItemDropData.m_Size;
          v95 = !v93;
          v96 = v1->m_vItemDropData.m_Size;
          if ( v94 == v1->m_vItemDropData.m_Memory.m_nAllocationCount )
          {
            v145 = v1->m_vItemDropData.m_Size;
            pszChaseTargete = !v93;
            CUtlMemory<ItemDropData_t,int>::Grow(&v1->m_vItemDropData.m_Memory, 1);
            v96 = v1->m_vItemDropData.m_Size;
            v94 = v145;
            v95 = pszChaseTargete;
          }
          v1->m_vItemDropData.m_Size = v96 + 1;
          v89 = &v1->m_vItemDropData.m_Memory.m_pMemory[v94];
          if ( v89 != 0 )
          {
            *v89 = v90;
            *(v89 + 8) = v91;
            *(v89 + 12) = v92;
            *(v89 + 16) = v95;
          }
        }
      }
      v97 = KeyValues::GetInt(pCreatureData, "SetSkin", -1);
      if ( v97 != -1 )
        CBaseAnimating::SetSkin(v1, v97);
      m_pszCurrentState = v1->m_pszCurrentState;
      if ( m_pszCurrentState == "Companion" || strcmp(v1->m_pszCurrentState, "Companion") == 0 )
      {
        v1->m_iUnitType |= 0x2000u;
        v117 = KeyValues::GetString(pCreatureData, "CompanionOwner", 0, 0, 0);
        if ( v117 != 0 )
        {
          v118 = 0;
          while ( 1 )
          {
            EntityByClassname = CGameEntitySystem::FindEntityByClassname(g_pGameEntitySystem, v118, "npc_dota_creature");
            v118 = EntityByClassname;
            if ( EntityByClassname == 0 )
              break;
            v120 = __dynamic_cast(
                     EntityByClassname,
                     &`typeinfo for'CBaseEntity,
                     &`typeinfo for'CDOTA_BaseNPC_Creature,
                     0);
            v121 = v120;
            if ( v120 != 0 )
            {
              v122 = v120[423];
              if ( v122 == 0 )
                v122 = "";
              if ( strcmp(v122, v117) == 0 )
              {
                v123 = v121[1];
                if ( v123 != 0 )
                {
                  v124 = (*(v123 + 4) >> 15) - (*(v123 + 12) & 1);
                  v125 = 0x7FFF;
                  if ( *(v123 + 4) != -1 )
                    v125 = *(v123 + 8) & 0x7FFF;
                  LOWORD(v1->m_initialGoalEntity.m_Index) = v125 | v1->m_initialGoalEntity.m_Index & 0x8000;
                  v1->m_initialGoalEntity.m_Index = (v124 << 15) | v1->m_initialGoalEntity.m_Index & 0x7FFF;
                  m_pszCurrentState = v1->m_pszCurrentState;
                }
                else
                {
                  v1->m_initialGoalEntity.m_Index = -1;
                  m_pszCurrentState = v1->m_pszCurrentState;
                }
                goto LABEL_96;
              }
            }
          }
        }
        m_pszCurrentState = v1->m_pszCurrentState;
      }
LABEL_96:
      if ( m_pszCurrentState == "Chase" || strcmp(m_pszCurrentState, "Chase") == 0 )
      {
        pszChaseTargetd = KeyValues::GetString(pCreatureData, "ChaseTarget", 0, 0, 0);
        v107 = KeyValues::GetString(pCreatureData, "ChaseTargetType", 0, 0, 0);
        v1->m_flChaseDistance = KeyValues::GetFloat(pCreatureData, "ChaseDistance", v108);
        v1->m_bChaseTargetMoves = KeyValues::GetInt(pCreatureData, "ChaseTargetMobile", 1) != 0;
        if ( v107 != 0 && pszChaseTargetd != 0 )
        {
          v109 = 0;
          while ( 1 )
          {
            v110 = CGameEntitySystem::FindEntityByClassname(g_pGameEntitySystem, v109, v107);
            v109 = v110;
            if ( v110 == 0 )
              break;
            v111 = __dynamic_cast(v110, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTA_BaseNPC, 0);
            v112 = v111;
            if ( v111 != 0 )
            {
              v113 = v111[423];
              if ( v113 == 0 )
                v113 = "";
              if ( strcmp(v113, pszChaseTargetd) == 0 )
              {
                v1->m_initialGoalEntity.m_Index = -1;
                v114 = v112[1];
                if ( v114 != 0 )
                {
                  v115 = (*(v114 + 4) >> 15) - (*(v114 + 12) & 1);
                  v116 = 0x7FFF;
                  if ( *(v114 + 4) != -1 )
                    v116 = *(v114 + 8) & 0x7FFF;
                  LOWORD(v1->m_hChaseEntity.m_Index) = v116 | v1->m_hChaseEntity.m_Index & 0x8000;
                  v1->m_hChaseEntity.m_Index = (v115 << 15) | v1->m_hChaseEntity.m_Index & 0x7FFF;
                }
                else
                {
                  v1->m_hChaseEntity.m_Index = -1;
                }
                break;
              }
            }
          }
        }
      }
      v99 = KeyValues::FindKey(pCreatureData, "AbilityLevels", 0);
      if ( v99 != 0 )
      {
        NextKey = KeyValues::GetFirstSubKey(v99);
        if ( NextKey != 0 )
        {
          pszChaseTargetc = v1;
          do
          {
            v101 = KeyValues::GetString(NextKey, "Ability", "", 0, 0);
            v102 = CDOTA_BaseNPC::FindAbilityByName(pszChaseTargetc, v101, 0);
            v103 = KeyValues::GetInt(NextKey, "Level", -1);
            if ( v103 >= 0 && v102 != 0 )
            {
              (*(v102->_vptr_IHandleEntity + 212))(v102, 0);
              if ( v103 != 0 )
              {
                for ( ii = 0; ii != v103; ++ii )
                {
                  m_pAbilityData = v102->m_pAbilityData;
                  m_Value = v102->m_iLevel.m_Value;
                  if ( m_pAbilityData == 0 )
                  {
                    CDOTABaseAbility::LoadAbilityData(v102, 0);
                    m_pAbilityData = v102->m_pAbilityData;
                  }
                  if ( m_Value < m_pAbilityData->m_iMaxLevel )
                    CDOTABaseAbility::UpgradeAbility(v102, 0);
                }
              }
            }
            NextKey = KeyValues::GetNextKey(NextKey);
          }
          while ( NextKey != 0 );
          v1 = pszChaseTargetc;
        }
      }
      if ( (*(v1->_vptr_IHandleEntity + 491))(v1) != 0 )
      {
        KeyValues::KeyValues(&kv, "modifier_creature_hybrid_flyer");
        CDOTA_BaseNPC::AddNewModifier(v1, v1, 0, "modifier_creature_hybrid_flyer", &kv, 0);
        KeyValues::~KeyValues(&kv);
      }
      v1->m_pLastUsedAbility = 0;
      v1->m_bInitialized = 1;
    }
  }
}


// CDOTA_BaseNPC_Creature::GetCreatureAggression  (line 477, @0x00000000028fa030, libserver.so)  // inlines: FStrEq, _V_strcmp, operator[]
// calls: strcmp
float __fastcall CDOTA_BaseNPC_Creature::GetCreatureAggression(
        CDOTA_BaseNPC_Creature *const this,
        const char *pStateName)
{
  int m_Size; // eax
  CreatureStateData_t *m_pMemory; // r13
  const char *pszName; // rdi
  CreatureStateData_t *v6; // rbx
  __int64 v7; // r14

  m_Size = this->m_vCreatureStates.m_Size;
  if ( m_Size <= 0 )
    return 0.0;
  m_pMemory = this->m_vCreatureStates.m_Memory.m_pMemory;
  pszName = m_pMemory->pszName;
  if ( m_pMemory->pszName != pStateName )
  {
    v6 = m_pMemory + 1;
    v7 = &m_pMemory[(m_Size - 1) + 1];
    while ( strcmp(pszName, pStateName) != 0 )
    {
      if ( v6 == v7 )
        return 0.0;
      m_pMemory = v6++;
      pszName = v6[-1].pszName;
      if ( pszName == pStateName )
        return m_pMemory->flAggression;
    }
  }
  return m_pMemory->flAggression;
}


// CDOTA_BaseNPC_Creature::SetCreatureAggression  (line 492, @0x000000000290bce0, libserver.so)  // inlines: FStrEq, _V_strcmp, operator[]
// calls: strcmp
void __fastcall CDOTA_BaseNPC_Creature::SetCreatureAggression(
        CDOTA_BaseNPC_Creature *const this,
        __m128i a2,
        float flAggression)
{
  int v3; // r15d
  __int64 v4; // r13
  int i; // r12d
  const char *m_pszCurrentState; // rsi
  CreatureStateData_t *v8; // r14

  v3 = _mm_cvtsi128_si32(a2);
  v4 = 0;
  for ( i = 0; this->m_vCreatureStates.m_Size > i; ++v4 )
  {
    m_pszCurrentState = this->m_pszCurrentState;
    v8 = &this->m_vCreatureStates.m_Memory.m_pMemory[v4];
    if ( m_pszCurrentState == v8->pszName || strcmp(v8->pszName, m_pszCurrentState) == 0 )
      LODWORD(v8->flAggression) = v3;
    ++i;
  }
}


// CDOTA_BaseNPC_Creature::GetCreatureAvoidance  (line 505, @0x00000000028f9fb0, libserver.so)  // inlines: FStrEq, _V_strcmp, operator[]
// calls: strcmp
float __fastcall CDOTA_BaseNPC_Creature::GetCreatureAvoidance(
        CDOTA_BaseNPC_Creature *const this,
        const char *pStateName)
{
  int m_Size; // eax
  CreatureStateData_t *m_pMemory; // r13
  const char *pszName; // rdi
  CreatureStateData_t *v6; // rbx
  __int64 v7; // r14

  m_Size = this->m_vCreatureStates.m_Size;
  if ( m_Size <= 0 )
    return 0.0;
  m_pMemory = this->m_vCreatureStates.m_Memory.m_pMemory;
  pszName = m_pMemory->pszName;
  if ( m_pMemory->pszName != pStateName )
  {
    v6 = m_pMemory + 1;
    v7 = &m_pMemory[(m_Size - 1) + 1];
    while ( strcmp(pszName, pStateName) != 0 )
    {
      if ( v6 == v7 )
        return 0.0;
      m_pMemory = v6++;
      pszName = v6[-1].pszName;
      if ( pszName == pStateName )
        return m_pMemory->flAvoidance;
    }
  }
  return m_pMemory->flAvoidance;
}


// CDOTA_BaseNPC_Creature::SetCreatureAvoidance  (line 520, @0x000000000290bd60, libserver.so)  // inlines: FStrEq, _V_strcmp, operator[]
// calls: strcmp
// callers: CDOTA_Modifier_Creature_Full_Avoidance::OnDestroy, CDOTA_Modifier_Creature_Full_Avoidance::OnCreated
void __fastcall CDOTA_BaseNPC_Creature::SetCreatureAvoidance(
        CDOTA_BaseNPC_Creature *const this,
        __m128i a2,
        float flAvoidance)
{
  int v3; // r15d
  __int64 v4; // r13
  int i; // r12d
  const char *m_pszCurrentState; // rsi
  CreatureStateData_t *v8; // r14

  v3 = _mm_cvtsi128_si32(a2);
  v4 = 0;
  for ( i = 0; this->m_vCreatureStates.m_Size > i; ++v4 )
  {
    m_pszCurrentState = this->m_pszCurrentState;
    v8 = &this->m_vCreatureStates.m_Memory.m_pMemory[v4];
    if ( m_pszCurrentState == v8->pszName || strcmp(v8->pszName, m_pszCurrentState) == 0 )
      LODWORD(v8->flAvoidance) = v3;
    ++i;
  }
}


// CDOTA_BaseNPC_Creature::GetCreatureSupport  (line 532, @0x00000000028f9f30, libserver.so)  // inlines: FStrEq, _V_strcmp, operator[]
// calls: strcmp
float __fastcall CDOTA_BaseNPC_Creature::GetCreatureSupport(CDOTA_BaseNPC_Creature *const this, const char *pStateName)
{
  int m_Size; // eax
  CreatureStateData_t *m_pMemory; // r13
  const char *pszName; // rdi
  CreatureStateData_t *v6; // rbx
  __int64 v7; // r14

  m_Size = this->m_vCreatureStates.m_Size;
  if ( m_Size <= 0 )
    return 0.0;
  m_pMemory = this->m_vCreatureStates.m_Memory.m_pMemory;
  pszName = m_pMemory->pszName;
  if ( m_pMemory->pszName != pStateName )
  {
    v6 = m_pMemory + 1;
    v7 = &m_pMemory[(m_Size - 1) + 1];
    while ( strcmp(pszName, pStateName) != 0 )
    {
      if ( v6 == v7 )
        return 0.0;
      m_pMemory = v6++;
      pszName = v6[-1].pszName;
      if ( pszName == pStateName )
        return m_pMemory->flSupport;
    }
  }
  return m_pMemory->flSupport;
}


// CDOTA_BaseNPC_Creature::SetCreatureSupport  (line 547, @0x000000000290bde0, libserver.so)  // inlines: FStrEq, _V_strcmp, operator[]
// calls: strcmp
void __fastcall CDOTA_BaseNPC_Creature::SetCreatureSupport(
        CDOTA_BaseNPC_Creature *const this,
        __m128i a2,
        float flSupport)
{
  int v3; // r15d
  __int64 v4; // r13
  int i; // r12d
  const char *m_pszCurrentState; // rsi
  CreatureStateData_t *v8; // r14

  v3 = _mm_cvtsi128_si32(a2);
  v4 = 0;
  for ( i = 0; this->m_vCreatureStates.m_Size > i; ++v4 )
  {
    m_pszCurrentState = this->m_pszCurrentState;
    v8 = &this->m_vCreatureStates.m_Memory.m_pMemory[v4];
    if ( m_pszCurrentState == v8->pszName || strcmp(v8->pszName, m_pszCurrentState) == 0 )
      LODWORD(v8->flSupport) = v3;
    ++i;
  }
}


// CDOTA_BaseNPC_Creature::GetCreatureRoamDistance  (line 560, @0x00000000028f9eb0, libserver.so)  // inlines: FStrEq, _V_strcmp, operator[]
// calls: strcmp
float __fastcall CDOTA_BaseNPC_Creature::GetCreatureRoamDistance(
        CDOTA_BaseNPC_Creature *const this,
        const char *pStateName)
{
  int m_Size; // eax
  CreatureStateData_t *m_pMemory; // r13
  const char *pszName; // rdi
  CreatureStateData_t *v6; // rbx
  __int64 v7; // r14

  m_Size = this->m_vCreatureStates.m_Size;
  if ( m_Size <= 0 )
    return 0.0;
  m_pMemory = this->m_vCreatureStates.m_Memory.m_pMemory;
  pszName = m_pMemory->pszName;
  if ( m_pMemory->pszName != pStateName )
  {
    v6 = m_pMemory + 1;
    v7 = &m_pMemory[(m_Size - 1) + 1];
    while ( strcmp(pszName, pStateName) != 0 )
    {
      if ( v6 == v7 )
        return 0.0;
      m_pMemory = v6++;
      pszName = v6[-1].pszName;
      if ( pszName == pStateName )
        return m_pMemory->flRoamDistance;
    }
  }
  return m_pMemory->flRoamDistance;
}


// CDOTA_BaseNPC_Creature::CreatureLevelUp  (line 575, @0x00000000029094d0, libserver.so)  // inlines: GetAbilityData, GetLevel, GetMaxLevel, GetMaxMana, GetMaximumGoldBounty, GetMinimumGoldBounty, NetworkStateChanged, Set, SetBaseAttackTime, SetBaseHealthRegen, SetBaseMagicalResistanceValue, SetBaseManaRegen, SetBaseMoveSpeed, SetDisableResistance, SetMaxMana, SetPhysicalArmorBaseValue, operator=<float>, operator=<int>
// calls: CDOTA_BaseNPC::ModifyHealth, CDOTA_BaseNPC::SetMana, CDOTA_BaseNPC::GetBaseAttackTime, CDOTA_BaseNPC::GetAbilityByIndex, CDOTABaseAbility::UpgradeAbility, CDOTABaseAbility::LoadAbilityData
void __fastcall CDOTA_BaseNPC_Creature::CreatureLevelUp(CDOTA_BaseNPC_Creature *const this, int iLevels)
{
  int v4; // ebx
  int v5; // ebx
  int (**vptr_IHandleEntity)(...); // rax
  int v7; // eax
  int v8; // eax
  float v9; // xmm0_4
  float v10; // xmm1_4
  float v11; // xmm0_4
  int (**v12)(...); // rax
  float v13; // xmm0_4
  int (**v14)(...); // rax
  int v15; // ebx
  int v16; // ebx
  int (**v17)(...); // rax
  int v18; // ebx
  int v19; // ebx
  int (**v20)(...); // rax
  double v21; // xmm0_8
  double v22; // xmm1_8
  float v23; // xmm0_4
  int (**v24)(...); // rax
  float v25; // xmm0_4
  float v26; // xmm0_4
  int (**v27)(...); // rax
  int v28; // ebx
  int v29; // r13d
  int v30; // ebx
  int v31; // ebx
  int (**v32)(...); // rax
  int m_iGoldBountyMin; // ebx
  int v34; // ebx
  int (**v35)(...); // rax
  int m_iGoldBountyMax; // ebx
  CDOTABaseAbility *AbilityByIndex; // rax
  CDOTABaseAbility *v38; // rbx
  int v39; // edx
  DOTAAbilityData_t *m_pAbilityData; // rax
  int v41; // ecx
  int m_iMaxLevel; // r12d
  float v43; // [rsp+8h] [rbp-38h]
  float v44; // [rsp+8h] [rbp-38h]
  float v45; // [rsp+8h] [rbp-38h]
  float m_flDisableResistance; // [rsp+8h] [rbp-38h]
  float v47; // [rsp+8h] [rbp-38h]
  float BaseAttackTime; // [rsp+8h] [rbp-38h]
  float v49; // [rsp+8h] [rbp-38h]
  unsigned int v50; // [rsp+8h] [rbp-38h]
  float m_Value; // [rsp+Ch] [rbp-34h]
  float v52; // [rsp+Ch] [rbp-34h]
  float v53; // [rsp+Ch] [rbp-34h]
  int v54; // [rsp+Ch] [rbp-34h]
  float v55; // [rsp+Ch] [rbp-34h]

  (*(this->_vptr_IHandleEntity + 388))(this, (iLevels + this->m_iCurrentLevel.m_Value));
  v4 = (*(this->_vptr_IHandleEntity + 156))(this);
  v5 = iLevels * (*(this->_vptr_IHandleEntity + 499))(this) + v4;
  vptr_IHandleEntity = this->_vptr_IHandleEntity;
  this->m_flBaseMaxHealth = v5;
  v7 = vptr_IHandleEntity[156](this);
  CDOTA_BaseNPC::ModifyHealth(this, v7, 0, 0, 0);
  m_Value = this->m_flMaxMana.m_Value;
  v8 = (*(this->_vptr_IHandleEntity + 500))(this);
  v9 = this->m_flMaxMana.m_Value;
  v10 = (iLevels * v8) + m_Value;
  if ( v10 != v9 )
  {
    v55 = (iLevels * v8) + m_Value;
    (*(this->_vptr_IHandleEntity + 22))(this, 2144, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    v10 = v55;
    this->m_flMaxMana.m_Value = v55;
    v9 = v55;
  }
  CDOTA_BaseNPC::SetMana(this, v9, v10);
  v43 = (*(this->_vptr_IHandleEntity + 429))(this);
  v11 = (*(this->_vptr_IHandleEntity + 501))(this);
  v12 = this->_vptr_IHandleEntity;
  v52 = iLevels;
  this->m_flHealthRegen = (v11 * iLevels) + v43;
  v44 = (v12[431])(this);
  v13 = (*(this->_vptr_IHandleEntity + 502))(this);
  v14 = this->_vptr_IHandleEntity;
  this->m_flManaRegen = (v13 * iLevels) + v44;
  v15 = v14[416](this);
  v16 = iLevels * (*(this->_vptr_IHandleEntity + 503))(this) + v15;
  v17 = this->_vptr_IHandleEntity;
  this->m_iBaseDamageMin = v16;
  v18 = v17[417](this);
  v19 = iLevels * (*(this->_vptr_IHandleEntity + 503))(this) + v18;
  v20 = this->_vptr_IHandleEntity;
  this->m_iBaseDamageMax = v19;
  v45 = (v20[424])(this);
  *&v21 = (*(this->_vptr_IHandleEntity + 504))(this);
  *&v22 = LODWORD(v45);
  *&v21 = *&v21 * iLevels;
  *&v22 = v45 + *&v21;
  if ( (v45 + *&v21) != this->m_flPhysicalArmorValue.m_Value )
  {
    *&v50 = v45 + *&v21;
    (*(this->_vptr_IHandleEntity + 22))(this, 2424, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    *&v22 = v50;
    this->m_flPhysicalArmorValue.m_Value = *&v50;
  }
  m_flDisableResistance = this->m_flDisableResistance;
  v23 = (*(this->_vptr_IHandleEntity + 506))(this, v21, v22);
  v24 = this->_vptr_IHandleEntity;
  this->m_flDisableResistance = (v23 * v52) + m_flDisableResistance;
  v47 = (v24[425])(this);
  v25 = (*(this->_vptr_IHandleEntity + 505))(this) * v52;
  if ( (v47 + v25) != this->m_flMagicalResistanceValue.m_Value )
  {
    v49 = v47 + v25;
    (*(this->_vptr_IHandleEntity + 22))(this, 2428, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_flMagicalResistanceValue.m_Value = v49;
  }
  BaseAttackTime = CDOTA_BaseNPC::GetBaseAttackTime(this);
  v26 = (*(this->_vptr_IHandleEntity + 507))(this);
  v27 = this->_vptr_IHandleEntity;
  this->m_flBaseAttackTime = (v26 * v52) + BaseAttackTime;
  v53 = (v27[433])(this);
  v28 = ((iLevels * (*(this->_vptr_IHandleEntity + 508))(this)) + v53);
  if ( v28 != this->m_iMoveSpeed.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 2280, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_iMoveSpeed.m_Value = v28;
  }
  v29 = 0;
  v30 = (*(this->_vptr_IHandleEntity + 409))(this);
  v31 = iLevels * (*(this->_vptr_IHandleEntity + 510))(this) + v30;
  v32 = this->_vptr_IHandleEntity;
  this->m_iXPBounty = v31;
  m_iGoldBountyMin = this->m_iGoldBountyMin;
  v34 = iLevels * (v32[509])(this) + m_iGoldBountyMin;
  v35 = this->_vptr_IHandleEntity;
  this->m_iGoldBountyMin = v34;
  m_iGoldBountyMax = this->m_iGoldBountyMax;
  this->m_iGoldBountyMax = iLevels * (v35[509])(this) + m_iGoldBountyMax;
  do
  {
    AbilityByIndex = CDOTA_BaseNPC::GetAbilityByIndex(this, v29);
    v38 = AbilityByIndex;
    if ( AbilityByIndex != 0 )
    {
      v39 = AbilityByIndex->m_iLevel.m_Value;
      m_pAbilityData = AbilityByIndex->m_pAbilityData;
      v41 = v39;
      if ( m_pAbilityData == 0 )
      {
        v54 = v39;
        CDOTABaseAbility::LoadAbilityData(v38, 0);
        v41 = v38->m_iLevel.m_Value;
        m_pAbilityData = v38->m_pAbilityData;
        v39 = v54;
      }
      m_iMaxLevel = m_pAbilityData->m_iMaxLevel;
      if ( iLevels + v39 < m_iMaxLevel )
        m_iMaxLevel = iLevels + v41;
      if ( m_iMaxLevel > v41 )
      {
        do
          CDOTABaseAbility::UpgradeAbility(v38, 0);
        while ( m_iMaxLevel > v38->m_iLevel.m_Value );
      }
    }
    ++v29;
  }
  while ( v29 != 24 );
  (*(this->_vptr_IHandleEntity + 384))(this);
}


// CDOTA_BaseNPC_Creature::CalculateCreatureDesire  (line 611, @0x0000000002919500, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetAcquisitionRange, GetEntityIdentity, GetEntryIndex, GetHealthPercent, GetInstance, GetTeamNumber, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlVector
// calls: CBaseEntity::GetHealth, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CDOTABehaviorCommandMoveToPosition::Update, CDOTABehaviorIdle::Update, CDOTA_BaseNPC_Creature::ConsiderUsingAbilities
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_BaseNPC_Creature::CalculateCreatureDesire(CDOTA_BaseNPC_Creature *const this)
{
  int v2; // eax
  __int64 v3; // r13
  __int64 v4; // r12
  int v5; // eax
  __int64 v6; // rbx
  __int64 v7; // rbx
  int v8; // eax
  __m128i v9; // xmm6
  float v10; // xmm5_4
  float v11; // ebx
  const Vector *AbsOrigin; // rax
  __int64 v13; // r12
  int v14; // ebx
  int v15; // r14d
  CHandle<CBaseEntity> *v16; // rdx
  uint32 m_Index; // eax
  __int16 v18; // cx
  CEntityIdentity *v19; // rdx
  CEntityIdentity *v20; // rdx
  CEntityInstance *m_pInstance; // r13
  float v22; // xmm0_4
  float v23; // [rsp+20h] [rbp-60h]
  float flCurrentAvoidance; // [rsp+28h] [rbp-58h]
  float flCurrentAvoidancea; // [rsp+28h] [rbp-58h]
  float flCurrentAggression; // [rsp+2Ch] [rbp-54h]
  float flCurrentAggressiona; // [rsp+2Ch] [rbp-54h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hUnits; // [rsp+30h] [rbp-50h] BYREF

  v2 = (*(this->_vptr_IHandleEntity + 496))(this);
  if ( v2 == -1 )
  {
    v3 = 1;
    flCurrentAggression = (*(this->_vptr_IHandleEntity + 492))(this, this->m_pszCurrentState);
    v4 = 100LL * CBaseEntity::GetHealth(this);
    v5 = (*(this->_vptr_IHandleEntity + 156))(this);
    v6 = v5;
    if ( v5 <= 0 )
      v6 = 1;
    flCurrentAggressiona = flCurrentAggression
                         - ((100.0 - (v4 / v6))
                          * ((*(this->_vptr_IHandleEntity + 492))(this, this->m_pszCurrentState) / 100.0));
    flCurrentAvoidance = (*(this->_vptr_IHandleEntity + 493))(this, this->m_pszCurrentState, v4 % v6);
    v23 = (*(this->_vptr_IHandleEntity + 493))(this, this->m_pszCurrentState);
    v7 = 100LL * CBaseEntity::GetHealth(this);
    v8 = (*(this->_vptr_IHandleEntity + 156))(this);
    if ( v8 > 0 )
      v3 = v8;
    hUnits.m_Size = 0;
    *v9.m128i_i32 = this->m_iAcquisitionRange;
    hUnits.m_Memory.m_pMemory = 0;
    hUnits.m_Memory.m_nAllocationCount = 0;
    hUnits.m_Memory.m_nGrowSize = 0;
    v10 = 100.0 - (v7 / v3);
    v11 = COERCE_FLOAT(_mm_cvtsi128_si32(v9));
    flCurrentAvoidancea = (((v10 * v23) / 100.0) * 0.5) + flCurrentAvoidance;
    AbsOrigin = CBaseEntity::GetAbsOrigin(this);
    FindUnitsInRadius(this->m_iTeamNum.m_Value, AbsOrigin, this, v11, &hUnits, 1, 3, 0, 0, 0);
    if ( hUnits.m_Size <= 0 )
    {
      v15 = 1;
    }
    else
    {
      v13 = 0;
      v14 = 0;
      v15 = 1;
      do
      {
        while ( 1 )
        {
          v16 = &hUnits.m_Memory.m_pMemory[v13];
          m_Index = hUnits.m_Memory.m_pMemory[v13].m_Index;
          if ( m_Index + 2 > 1 )
          {
            v18 = v16->m_Index;
            v19 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v16->m_Index) >> 9) & 0x3F];
            if ( v19 != 0 )
            {
              v20 = &v19[v18 & 0x1FF];
              if ( v20 != 0 && m_Index == v20->m_EHandle.m_Index )
              {
                m_pInstance = v20->m_pInstance;
                if ( v20->m_pInstance != 0
                  && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
                  && (BYTE2(m_pInstance[43].m_iszPrivateVScripts.u.m_pAsString) & 1) != 0 )
                {
                  break;
                }
              }
            }
          }
          ++v14;
          ++v13;
          if ( hUnits.m_Size <= v14 )
            goto LABEL_20;
        }
        v15 += (*(m_pInstance->_vptr_IHandleEntity + 497))(v20->m_pInstance) == 1;
        if ( (*(m_pInstance->_vptr_IHandleEntity + 497))(m_pInstance) == 2 )
          v15 += 2;
        ++v14;
        ++v13;
      }
      while ( hUnits.m_Size > v14 );
    }
LABEL_20:
    v22 = (*(this->_vptr_IHandleEntity + 494))(this, this->m_pszCurrentState) * v15;
    if ( flCurrentAvoidancea <= flCurrentAggressiona || flCurrentAvoidancea <= v22 )
      this->m_nCreatureDesire = 0;
    else
      this->m_nCreatureDesire = 2;
    if ( v22 > flCurrentAggressiona && v22 > flCurrentAvoidancea )
      this->m_nCreatureDesire = 1;
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hUnits);
  }
  else
  {
    this->m_nCreatureDesire = v2;
  }
}


// CDOTA_BaseNPC_Creature::AddItemDrop  (line 667, @0x000000000293f210, libserver.so)  // inlines: AddToTail, CopyConstruct<ItemDropData_t>, Element, GrowMemory, operator[]
// calls: CUtlMemory<ItemDropData_t, int>::Grow
void __fastcall CDOTA_BaseNPC_Creature::AddItemDrop(
        CDOTA_BaseNPC_Creature *const this,
        ItemDropData_t *const sDropData)
{
  __int64 m_Size; // r12
  int v5; // eax
  ItemDropData_t *v6; // rax

  m_Size = this->m_vItemDropData.m_Size;
  v5 = this->m_vItemDropData.m_Size;
  if ( m_Size == this->m_vItemDropData.m_Memory.m_nAllocationCount )
  {
    CUtlMemory<ItemDropData_t,int>::Grow(&this->m_vItemDropData.m_Memory, 1);
    v5 = this->m_vItemDropData.m_Size;
  }
  this->m_vItemDropData.m_Size = v5 + 1;
  v6 = &this->m_vItemDropData.m_Memory.m_pMemory[m_Size];
  if ( v6 != 0 )
  {
    v6->pszItemName = sDropData->pszItemName;
    *&v6->nChance = *&sDropData->nChance;
    *&v6->bMustBeChampion = *&sDropData->bMustBeChampion;
  }
}


// CDOTA_BaseNPC_Creature::Script_AddItemDrop  (line 678, @0x000000000293e6f0, libserver.so)  // inlines: AddItemDrop, AddToTail, AssignTo, CVariantBase, CopyConstruct<ItemDropData_t>, Element, GrowMemory, Min<long long unsigned int>, Min<unsigned int>, String, TempString, ToCStr, ToString, _V_strcmp, atoi, operator[], ~CVariantBase
// calls: AllocPooledString, V_snprintf, VariantFieldTypeName, Warning, CVariantBase<CVariantDefaultAllocator>::Free, strtol, CUtlMemory<ItemDropData_t, int>::Grow, _Unwind_Resume
// strings: "%g %g %g %g", "No conversion from %s to string at the moment!\n", "false", "true", "%d %d %d %d", "nChance" (11 total)
// globals: jpt_293E82B, CVariantBase<CVariantDefaultAllocator>::ToString(void)::szBuf, jpt_293EB0C, jpt_293EC3B, jpt_293EED7, jpt_293F01B
void __fastcall CDOTA_BaseNPC_Creature::Script_AddItemDrop(CDOTA_BaseNPC_Creature *const this, HSCRIPT hDropData)
{
  const char *v2; // r13
  int v3; // ebx
  unsigned int i; // eax
  const char *m_uint64; // rax
  const char *v6; // rsi
  unsigned int v7; // r12d
  const char *v8; // rax
  const char *v9; // rcx
  double m_float; // xmm0_8
  __int64 m_Size; // rbx
  int v12; // eax
  ItemDropData_t *v13; // rax
  const char *v14; // rax
  const char *v15; // rcx
  double m_float64; // xmm0_8
  int16 m_type; // ax
  int v18; // eax
  int v19; // eax
  int v20; // edx
  const char *v21; // rax
  int v22; // eax
  int v23; // eax
  int v24; // edx
  const char *v25; // rax
  int m_char; // [rsp+10h] [rbp-B0h]
  int m_int; // [rsp+20h] [rbp-A0h]
  char v29; // [rsp+37h] [rbp-89h]
  int v30; // [rsp+44h] [rbp-7Ch]
  const char *v32; // [rsp+60h] [rbp-60h] BYREF
  ScriptVariant_t vKey; // [rsp+70h] [rbp-50h] BYREF
  ScriptVariant_t vValue; // [rsp+80h] [rbp-40h] BYREF

  vKey.m_type = 0;
  vKey.m_flags = 0;
  vValue.m_type = 0;
  vKey.m_uint64 = 0;
  vValue.m_flags = 0;
  vValue.m_uint64 = 0;
  v30 = (*(*g_pScriptVM + 280LL))(g_pScriptVM);
  if ( v30 > 0 )
  {
    v3 = 0;
    for ( i = (*(*g_pScriptVM + 296LL))(g_pScriptVM, hDropData, 0, &vKey, &vValue);
          ;
          i = (*(*g_pScriptVM + 296LL))(g_pScriptVM, hDropData, v7, &vKey, &vValue) )
    {
      v7 = i;
      if ( vKey.m_type == 30 )
      {
        m_uint64 = vKey.m_uint64;
      }
      else
      {
        switch ( vKey.m_type )
        {
          case 0:
            goto LABEL_18;
          case 1:
            m_float = vKey.m_float;
            goto LABEL_24;
          case 3:
          case 0x27:
            V_snprintf(
              &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
              512,
              "%g %g %g",
              *vKey.m_pszString,
              *(vKey.m_uint64 + 4),
              *(vKey.m_uint64 + 8));
            break;
          case 4:
          case 0x1B:
            V_snprintf(
              &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
              512,
              "%g %g %g %g",
              *vKey.m_pszString,
              *(vKey.m_uint64 + 4),
              *(vKey.m_uint64 + 8),
              *(vKey.m_uint64 + 12));
            break;
          case 5:
            V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%d", vKey.m_int);
            break;
          case 6:
            v9 = "true";
            if ( vKey.m_char == 0 )
              v9 = "false";
            V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%s", v9);
            break;
          case 8:
            V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%c", vKey.m_char);
            break;
          case 9:
            V_snprintf(
              &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
              512,
              "%d %d %d %d",
              vKey.m_char,
              BYTE1(vKey.m_int),
              BYTE2(vKey.m_uint),
              HIBYTE(vKey.m_float));
            break;
          case 0x19:
            V_snprintf(
              &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
              512,
              "%g %g",
              *vKey.m_pszString,
              *(vKey.m_uint64 + 4));
            break;
          case 0x1A:
            V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%lld", vKey.m_uint64);
            break;
          case 0x21:
            V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%llu", vKey.m_uint64);
            break;
          case 0x22:
            m_float = vKey.m_float64;
LABEL_24:
            V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%g", m_float);
            break;
          case 0x25:
            V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%u", vKey.m_int);
            break;
          default:
            v8 = VariantFieldTypeName(vKey.m_type);
            Warning("No conversion from %s to string at the moment!\n", v8);
LABEL_18:
            CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf = 0;
            break;
        }
        m_uint64 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
      }
      if ( m_uint64 != 0 )
      {
        if ( strcmp(m_uint64, "szItemName") == 0 )
        {
          if ( vValue.m_type == 30 )
          {
            v6 = vValue.m_uint64;
          }
          else
          {
            switch ( vValue.m_type )
            {
              case 0:
                goto LABEL_52;
              case 1:
                m_float64 = vValue.m_float;
                goto LABEL_58;
              case 3:
              case 0x27:
                V_snprintf(
                  &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
                  512,
                  "%g %g %g",
                  *vValue.m_pszString,
                  *(vValue.m_uint64 + 4),
                  *(vValue.m_uint64 + 8));
                break;
              case 4:
              case 0x1B:
                V_snprintf(
                  &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
                  512,
                  "%g %g %g %g",
                  *vValue.m_pszString,
                  *(vValue.m_uint64 + 4),
                  *(vValue.m_uint64 + 8),
                  *(vValue.m_uint64 + 12));
                break;
              case 5:
                V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%d", vValue.m_int);
                break;
              case 6:
                v15 = "true";
                if ( vValue.m_char == 0 )
                  v15 = "false";
                V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%s", v15);
                break;
              case 8:
                V_snprintf(
                  &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
                  512,
                  "%c",
                  vValue.m_char);
                break;
              case 9:
                V_snprintf(
                  &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
                  512,
                  "%d %d %d %d",
                  vValue.m_char,
                  BYTE1(vValue.m_int),
                  BYTE2(vValue.m_uint),
                  HIBYTE(vValue.m_float));
                break;
              case 0x19:
                V_snprintf(
                  &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
                  512,
                  "%g %g",
                  *vValue.m_pszString,
                  *(vValue.m_uint64 + 4));
                break;
              case 0x1A:
                V_snprintf(
                  &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
                  512,
                  "%lld",
                  vValue.m_uint64);
                break;
              case 0x21:
                V_snprintf(
                  &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
                  512,
                  "%llu",
                  vValue.m_uint64);
                break;
              case 0x22:
                m_float64 = vValue.m_float64;
LABEL_58:
                V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%g", m_float64);
                break;
              case 0x25:
                V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%u", vValue.m_int);
                break;
              default:
                v14 = VariantFieldTypeName(vValue.m_type);
                Warning("No conversion from %s to string at the moment!\n", v14);
LABEL_52:
                CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf = 0;
                break;
            }
            v6 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
          }
          AllocPooledString(&v32, v6);
          v2 = "";
          if ( v32 != 0 )
            v2 = v32;
        }
        else if ( strcmp(m_uint64, "nChance") == 0 )
        {
          m_type = vValue.m_type;
          switch ( vValue.m_type )
          {
            case 0:
              m_int = 0;
              break;
            case 1:
              m_int = vValue.m_float;
              break;
            case 5:
              m_int = vValue.m_int;
              break;
            case 6:
              m_int = vValue.m_char;
              break;
            case 0x1A:
              m_int = 0x7FFFFFFF;
              if ( vValue.m_int64 <= 0x7FFFFFFF )
              {
                v20 = 0x80000000;
                if ( vValue.m_int64 >= 0xFFFFFFFF80000000LL )
                  v20 = vValue.m_int;
                m_int = v20;
              }
              break;
            case 0x1E:
              m_int = strtol(vValue.m_pszString, 0, 10);
              break;
            case 0x21:
              v19 = vValue.m_int;
              if ( vValue.m_uint64 > 0x7FFFFFFE )
                v19 = 0x7FFFFFFF;
              m_int = v19;
              break;
            case 0x22:
              m_int = vValue.m_float64;
              break;
            case 0x25:
              v18 = vValue.m_int;
              if ( vValue.m_int > 0x7FFFFFFEu )
                v18 = 0x7FFFFFFF;
              m_int = v18;
              break;
            default:
LABEL_83:
              v21 = VariantFieldTypeName(m_type);
              Warning("No conversion from %s to int now\n", v21);
              break;
          }
        }
        else if ( strcmp(m_uint64, "nReqLevel") == 0 )
        {
          m_type = vValue.m_type;
          switch ( vValue.m_type )
          {
            case 0:
              m_char = 0;
              break;
            case 1:
              m_char = vValue.m_float;
              break;
            case 5:
              m_char = vValue.m_int;
              break;
            case 6:
              m_char = vValue.m_char;
              break;
            case 0x1A:
              m_char = 0x7FFFFFFF;
              if ( vValue.m_int64 <= 0x7FFFFFFF )
              {
                v24 = 0x80000000;
                if ( vValue.m_int64 >= 0xFFFFFFFF80000000LL )
                  v24 = vValue.m_int;
                m_char = v24;
              }
              break;
            case 0x1E:
              m_char = strtol(vValue.m_pszString, 0, 10);
              break;
            case 0x21:
              v23 = vValue.m_int;
              if ( vValue.m_uint64 > 0x7FFFFFFE )
                v23 = 0x7FFFFFFF;
              m_char = v23;
              break;
            case 0x22:
              m_char = vValue.m_float64;
              break;
            case 0x25:
              v22 = vValue.m_int;
              if ( vValue.m_int > 0x7FFFFFFEu )
                v22 = 0x7FFFFFFF;
              m_char = v22;
              break;
            default:
              goto LABEL_83;
          }
        }
        else if ( strcmp(m_uint64, "bMustBeChampion") == 0 )
        {
          switch ( vValue.m_type )
          {
            case 0:
              goto LABEL_46;
            case 1:
              v29 = vValue.m_float != 0.0;
              break;
            case 5:
            case 0x25:
              v29 = vValue.m_int != 0;
              break;
            case 6:
              v29 = vValue.m_char;
              break;
            case 0x1A:
            case 0x21:
              v29 = vValue.m_uint64 != 0;
              if ( ++v3 != v30 )
                continue;
              goto LABEL_37;
            case 0x1E:
              if ( strcmp(vValue.m_pszString, "0") == 0
                || strcmp(vValue.m_pszString, "false") == 0
                || strcmp(vValue.m_pszString, "no") == 0 )
              {
LABEL_46:
                v29 = 0;
              }
              else if ( strcmp(vValue.m_pszString, "1") == 0
                     || strcmp(vValue.m_pszString, "true") == 0
                     || strcmp(vValue.m_pszString, "yes") == 0 )
              {
                v29 = 1;
              }
              else
              {
                Warning("Invalid conversion : CString '%s' to bool\n", vValue.m_pszString);
              }
              break;
            case 0x22:
              v29 = vValue.m_float64 != 0.0;
              break;
            default:
              v25 = VariantFieldTypeName(vValue.m_type);
              Warning("No conversion from %s to bool now\n", v25);
              break;
          }
        }
      }
      if ( ++v3 == v30 )
        break;
    }
  }
LABEL_37:
  m_Size = this->m_vItemDropData.m_Size;
  v12 = this->m_vItemDropData.m_Size;
  if ( m_Size == this->m_vItemDropData.m_Memory.m_nAllocationCount )
  {
    CUtlMemory<ItemDropData_t,int>::Grow(&this->m_vItemDropData.m_Memory, 1);
    v12 = this->m_vItemDropData.m_Size;
  }
  this->m_vItemDropData.m_Size = v12 + 1;
  v13 = &this->m_vItemDropData.m_Memory.m_pMemory[m_Size];
  if ( v13 != 0 )
  {
    v13->pszItemName = v2;
    v13->nChance = m_int;
    v13->nReqLevel = m_char;
    v13->bMustBeChampion = v29;
  }
  CVariantBase<CVariantDefaultAllocator>::Free(&vValue);
  CVariantBase<CVariantDefaultAllocator>::Free(&vKey);
}


// CDOTA_BaseNPC_Creature::OnTakeDamage_Alive  (line 717, @0x000000000291be70, libserver.so)  // inlines: Get, GetAttacker, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, SetLocationOfLastDamageSource, operator CBaseEntity*, operator CEntityInstance*, operator=
// calls: CDOTA_BaseNPC::OnTakeDamage_Alive, CBaseEntity::GetAbsOrigin
// callers: CDOTA_Unit_Nian::OnTakeDamage_Alive
// globals: CEntityHandle::gm_pEntityList
int __fastcall CDOTA_BaseNPC_Creature::OnTakeDamage_Alive(
        CDOTA_BaseNPC_Creature *const this,
        const CTakeDamageInfo *const info)
{
  int v4; // r13d
  uint32 m_Index; // eax
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  const Vector *AbsOrigin; // rax
  vec_t x; // xmm2_4
  vec_t y; // xmm1_4
  vec_t z; // xmm0_4

  v4 = CDOTA_BaseNPC::OnTakeDamage_Alive(this, info);
  if ( v4 <= 0 )
    return v4;
  m_Index = info->m_hAttacker.m_Index;
  if ( m_Index + 2 <= 1 )
    return v4;
  v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(info->m_hAttacker.m_Index) >> 9) & 0x3F];
  if ( v6 == 0 )
    return v4;
  v7 = &v6[info->m_hAttacker.m_Index & 0x1FF];
  if ( v7 == 0 || m_Index != v7->m_EHandle.m_Index || v7->m_pInstance == 0 )
    return v4;
  AbsOrigin = CBaseEntity::GetAbsOrigin(v7->m_pInstance);
  x = AbsOrigin->x;
  y = AbsOrigin->y;
  z = AbsOrigin->z;
  this->m_vLastDamageSource.x = x;
  this->m_vLastDamageSource.y = y;
  this->m_vLastDamageSource.z = z;
  return v4;
}


// CDOTA_BaseNPC_Creature::HasOffensiveAbilityReady  (line 729, @0x000000000290be60, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsFullyCastable, IsTrained, IsValid, LookupEntity, ToDOTAAbility, operator CBaseEntity*, operator CEntityInstance*, operator[]
// calls: __dynamic_cast, CDOTABaseAbility::GetEffectiveLevel, CDOTABaseAbility::IsOwnersManaEnough, CDOTABaseAbility::IsOwnersGoldEnough
// callers: CDOTA_BaseNPC_Creature::GetDesiredOffensiveAbility
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CDOTA_BaseNPC_Creature::HasOffensiveAbilityReady(CDOTA_BaseNPC_Creature *const this)
{
  __int64 v2; // r12
  int v3; // ebx
  CreatureAbilityData_t *v4; // rdx
  uint32 m_Index; // eax
  __int16 v6; // cx
  CEntityIdentity *v7; // rdx
  CEntityIdentity *v8; // rdx
  CDOTABaseAbility *v9; // rax
  CDOTABaseAbility *v10; // r13

  v2 = 0;
  v3 = 0;
  if ( this->m_vOffensiveAbilities.m_Size <= 0 )
    return 0;
  while ( 1 )
  {
    v4 = &this->m_vOffensiveAbilities.m_Memory.m_pMemory[v2];
    m_Index = v4->hAbility.m_Index;
    if ( v4->hAbility.m_Index + 2 > 1 )
    {
      v6 = v4->hAbility.m_Index;
      v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v4->hAbility.m_Index) >> 9) & 0x3F];
      if ( v7 != 0 )
      {
        v8 = &v7[v6 & 0x1FF];
        if ( v8 != 0 && m_Index == v8->m_EHandle.m_Index && v8->m_pInstance != 0 )
        {
          v9 = __dynamic_cast(v8->m_pInstance, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTABaseAbility, 0);
          v10 = v9;
          if ( v9 != 0
            && CDOTABaseAbility::GetEffectiveLevel(v9) >= 0
            && (*(v10->_vptr_IHandleEntity + 245))(v10) != 0
            && CDOTABaseAbility::IsOwnersManaEnough(v10)
            && CDOTABaseAbility::IsOwnersGoldEnough(v10, -1) )
          {
            break;
          }
        }
      }
    }
    ++v3;
    ++v2;
    if ( this->m_vOffensiveAbilities.m_Size <= v3 )
      return 0;
  }
  return 1;
}


// CDOTA_BaseNPC_Creature::HasDefensiveAbilityReady  (line 747, @0x000000000290bf80, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsFullyCastable, IsTrained, IsValid, LookupEntity, ToDOTAAbility, operator CBaseEntity*, operator CEntityInstance*, operator[]
// calls: __dynamic_cast, CDOTABaseAbility::GetEffectiveLevel, CDOTABaseAbility::IsOwnersManaEnough, CDOTABaseAbility::IsOwnersGoldEnough
// callers: CDOTA_BaseNPC_Creature::GetDesiredDefensiveAbility
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CDOTA_BaseNPC_Creature::HasDefensiveAbilityReady(CDOTA_BaseNPC_Creature *const this)
{
  __int64 v2; // r12
  int v3; // ebx
  CreatureAbilityData_t *v4; // rdx
  uint32 m_Index; // eax
  __int16 v6; // cx
  CEntityIdentity *v7; // rdx
  CEntityIdentity *v8; // rdx
  CDOTABaseAbility *v9; // rax
  CDOTABaseAbility *v10; // r13

  v2 = 0;
  v3 = 0;
  if ( this->m_vDefensiveAbilities.m_Size <= 0 )
    return 0;
  while ( 1 )
  {
    v4 = &this->m_vDefensiveAbilities.m_Memory.m_pMemory[v2];
    m_Index = v4->hAbility.m_Index;
    if ( v4->hAbility.m_Index + 2 > 1 )
    {
      v6 = v4->hAbility.m_Index;
      v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v4->hAbility.m_Index) >> 9) & 0x3F];
      if ( v7 != 0 )
      {
        v8 = &v7[v6 & 0x1FF];
        if ( v8 != 0 && m_Index == v8->m_EHandle.m_Index && v8->m_pInstance != 0 )
        {
          v9 = __dynamic_cast(v8->m_pInstance, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTABaseAbility, 0);
          v10 = v9;
          if ( v9 != 0
            && CDOTABaseAbility::GetEffectiveLevel(v9) >= 0
            && (*(v10->_vptr_IHandleEntity + 245))(v10) != 0
            && CDOTABaseAbility::IsOwnersManaEnough(v10)
            && CDOTABaseAbility::IsOwnersGoldEnough(v10, -1) )
          {
            break;
          }
        }
      }
    }
    ++v3;
    ++v2;
    if ( this->m_vDefensiveAbilities.m_Size <= v3 )
      return 0;
  }
  return 1;
}


// CDOTA_BaseNPC_Creature::HasEscapeAbilityReady  (line 765, @0x000000000290c0a0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsFullyCastable, IsTrained, IsValid, LookupEntity, ToDOTAAbility, operator CBaseEntity*, operator CEntityInstance*, operator[]
// calls: __dynamic_cast, CDOTABaseAbility::GetEffectiveLevel, CDOTABaseAbility::IsOwnersManaEnough, CDOTABaseAbility::IsOwnersGoldEnough
// callers: CDOTA_BaseNPC_Creature::GetDesiredEscapeAbility
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CDOTA_BaseNPC_Creature::HasEscapeAbilityReady(CDOTA_BaseNPC_Creature *const this)
{
  __int64 v2; // r12
  int v3; // ebx
  CreatureAbilityData_t *v4; // rdx
  uint32 m_Index; // eax
  __int16 v6; // cx
  CEntityIdentity *v7; // rdx
  CEntityIdentity *v8; // rdx
  CDOTABaseAbility *v9; // rax
  CDOTABaseAbility *v10; // r13

  v2 = 0;
  v3 = 0;
  if ( this->m_vEscapeAbilities.m_Size <= 0 )
    return 0;
  while ( 1 )
  {
    v4 = &this->m_vEscapeAbilities.m_Memory.m_pMemory[v2];
    m_Index = v4->hAbility.m_Index;
    if ( v4->hAbility.m_Index + 2 > 1 )
    {
      v6 = v4->hAbility.m_Index;
      v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v4->hAbility.m_Index) >> 9) & 0x3F];
      if ( v7 != 0 )
      {
        v8 = &v7[v6 & 0x1FF];
        if ( v8 != 0 && m_Index == v8->m_EHandle.m_Index && v8->m_pInstance != 0 )
        {
          v9 = __dynamic_cast(v8->m_pInstance, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTABaseAbility, 0);
          v10 = v9;
          if ( v9 != 0
            && CDOTABaseAbility::GetEffectiveLevel(v9) >= 0
            && (*(v10->_vptr_IHandleEntity + 245))(v10) != 0
            && CDOTABaseAbility::IsOwnersManaEnough(v10)
            && CDOTABaseAbility::IsOwnersGoldEnough(v10, -1) )
          {
            break;
          }
        }
      }
    }
    ++v3;
    ++v2;
    if ( this->m_vEscapeAbilities.m_Size <= v3 )
      return 0;
  }
  return 1;
}


// CDOTA_BaseNPC_Creature::GetDesiredOffensiveAbility  (line 785, @0x000000000293fb70, libserver.so)  // inlines: AddToTail, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<CDOTA_BaseNPC*>, Element, Get, GetAbilityData, GetAcquisitionRange, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeamNumber, GrowMemory, HasFlyMovementCapability, HasMovementCapability, InState, IndexToIdentity, IsConsideredHero, IsFullyCastable, IsHero, IsTrained, IsValid, LookupEntity, Purge, RemoveAll, SetCurrentCastBehavior, SetDesiredCastLocation, SetDesiredNPCTarget, SetLastUsedAbility, ToDOTAAbility, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator!=, operator=, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~CUtlVectorFixedGrowableCompat
// calls: CDOTA_BaseNPC_Creature::HasOffensiveAbilityReady, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, CEntityHandle::operator CEntityInstance*, __dynamic_cast, CDOTABaseAbility::GetEffectiveLevel, CUtlMemory<CDOTA_BaseNPC*, int>::Purge, CDOTABaseAbility::IsOwnersManaEnough, CDOTABaseAbility::IsOwnersGoldEnough, CDOTA_BaseNPC::IsEntityInRangeForCast, CBaseEntity::GetHealth (26 total)
// callers: CDOTA_BaseNPC_Creature::ConsiderUsingAbilities
// globals: CEntityHandle::gm_pEntityList
CDOTABaseAbility *__fastcall CDOTA_BaseNPC_Creature::GetDesiredOffensiveAbility(CDOTA_BaseNPC_Creature *const this)
{
  __m128i v3; // xmm4
  float v4; // ebx
  const Vector *AbsOrigin; // rax
  __int64 v6; // r12
  int v7; // ebx
  CHandle<CBaseEntity> *v8; // rdx
  uint32 m_Index; // eax
  __int16 v10; // cx
  CEntityIdentity *v11; // rdx
  CEntityIdentity *v12; // rdx
  CDOTA_BaseNPC *m_pInstance; // r14
  uint32 m_iUnitType; // eax
  __int64 v15; // r13
  CDOTA_BaseNPC **v16; // rax
  uint32 v17; // eax
  CreatureAbilityData_t *v18; // r14
  CEntityInstance *v19; // rax
  int v20; // ebx
  float v21; // xmm1_4
  DOTAAbilityData_t *v22; // rax
  DOTAAbilityData_t *v23; // rax
  CDOTA_BaseNPC *v24; // rsi
  __int64 v25; // rbx
  int v26; // r12d
  float v27; // xmm1_4
  CDOTA_BaseNPC **m_pMemory; // rax
  CDOTA_BaseNPC *v29; // rax
  DOTAAbilityData_t *m_pAbilityData; // rax
  __int64 v31; // rbx
  int v32; // r12d
  CDOTA_BaseNPC *v33; // r13
  const Vector *v34; // rax
  int v35; // r12d
  int m_iAbilityBehavior; // eax
  CreatureAbilityData_t *v37; // rdx
  int v38; // ebx
  int nMinimumRange; // r12d
  int v40; // r13d
  const Vector *v41; // r8
  float v42; // xmm3_4
  int v43; // xmm0_4
  vec_t v44; // xmm0_4
  int v45; // r12d
  float v46; // xmm1_4
  __int64 v47; // r13
  int v48; // r12d
  CDOTA_BaseNPC *v49; // rbx
  const Vector *v50; // rax
  int v51; // r12d
  int nRadius; // r13d
  const Vector *v53; // r8
  __int64 m_Size; // r13
  __int64 v55; // r13
  int v56; // eax
  int v57; // r13d
  int v58; // r12d
  int v59; // r12d
  const Vector *v60; // rax
  int v61; // r13d
  int v62; // r12d
  int v63; // r12d
  const Vector *v64; // rax
  __m128i v65; // xmm7
  float v66; // r12d
  const CBaseEntity *v67; // rax
  const Vector *v68; // rax
  vec_t y; // xmm1_4
  vec_t z; // xmm0_4
  float v71; // [rsp+3Ch] [rbp-184h]
  __int64 v72; // [rsp+48h] [rbp-178h]
  int n; // [rsp+50h] [rbp-170h]
  float flRadius; // [rsp+54h] [rbp-16Ch]
  float flRadiusa; // [rsp+54h] [rbp-16Ch]
  int flRadiusb; // [rsp+54h] [rbp-16Ch]
  int flRadiusc; // [rsp+54h] [rbp-16Ch]
  char v78; // [rsp+60h] [rbp-160h]
  CDOTABaseAbility *v79; // [rsp+68h] [rbp-158h]
  int nTargetCount; // [rsp+7Ch] [rbp-144h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hUnits; // [rsp+80h] [rbp-140h] BYREF
  CUtlVector<CDOTA_BaseNPC*,CUtlMemory<CDOTA_BaseNPC*,int> > vHeroes; // [rsp+A0h] [rbp-120h] BYREF
  CUtlVector<CDOTA_BaseNPC*,CUtlMemory<CDOTA_BaseNPC*,int> > vCreeps; // [rsp+C0h] [rbp-100h] BYREF
  CUtlVector<CDOTA_BaseNPC*,CUtlMemory<CDOTA_BaseNPC*,int> > vBuildings; // [rsp+E0h] [rbp-E0h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hUnitTargetEntities; // [rsp+100h] [rbp-C0h] BYREF
  GridNavTreeStackVec_t trees; // [rsp+120h] [rbp-A0h] BYREF
  unsigned __int64 v87; // [rsp+188h] [rbp-38h]
  Vector v88; // 0:xmm0_8.8,8:xmm1_4.4

  v87 = __readfsqword(0x28u);
  if ( (*(this->_vptr_IHandleEntity + 497))(this) != 0
    || !this->m_bHasOffensiveAbility
    || !CDOTA_BaseNPC_Creature::HasOffensiveAbilityReady(this) )
  {
    return 0;
  }
  *v3.m128i_i32 = this->m_iAcquisitionRange;
  hUnits.m_Size = 0;
  hUnits.m_Memory.m_pMemory = 0;
  hUnits.m_Memory.m_nAllocationCount = 0;
  hUnits.m_Memory.m_nGrowSize = 0;
  v4 = COERCE_FLOAT(_mm_cvtsi128_si32(v3));
  AbsOrigin = CBaseEntity::GetAbsOrigin(this);
  FindUnitsInRadius(this->m_iTeamNum.m_Value, AbsOrigin, this, v4, &hUnits, 2, 7, 144, 1, 0);
  vHeroes.m_Size = 0;
  vHeroes.m_Memory.m_pMemory = 0;
  vHeroes.m_Memory.m_nAllocationCount = 0;
  vHeroes.m_Memory.m_nGrowSize = 0;
  vCreeps.m_Size = 0;
  vCreeps.m_Memory.m_pMemory = 0;
  vCreeps.m_Memory.m_nAllocationCount = 0;
  vCreeps.m_Memory.m_nGrowSize = 0;
  vBuildings.m_Size = 0;
  vBuildings.m_Memory.m_pMemory = 0;
  vBuildings.m_Memory.m_nAllocationCount = 0;
  vBuildings.m_Memory.m_nGrowSize = 0;
  if ( hUnits.m_Size == 0 )
  {
    vBuildings.m_Size = 0;
    v79 = 0;
    goto LABEL_40;
  }
  if ( hUnits.m_Size <= 0 )
    goto LABEL_29;
  v6 = 0;
  v7 = 0;
  do
  {
    while ( 1 )
    {
      v8 = &hUnits.m_Memory.m_pMemory[v6];
      m_Index = hUnits.m_Memory.m_pMemory[v6].m_Index;
      if ( m_Index + 2 <= 1 )
        goto LABEL_9;
      v10 = v8->m_Index;
      v11 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v8->m_Index) >> 9) & 0x3F];
      if ( v11 == 0 )
        goto LABEL_9;
      v12 = &v11[v10 & 0x1FF];
      if ( v12 == 0 )
        goto LABEL_9;
      if ( m_Index != v12->m_EHandle.m_Index )
        goto LABEL_9;
      m_pInstance = v12->m_pInstance;
      if ( v12->m_pInstance == 0 || !m_pInstance->m_bIsDOTANPC )
        goto LABEL_9;
      m_iUnitType = m_pInstance->m_iUnitType;
      if ( (m_iUnitType & 3) != 0 )
      {
        m_Size = vHeroes.m_Size;
        if ( vHeroes.m_Size == vHeroes.m_Memory.m_nAllocationCount )
          CUtlMemory<CDOTA_BaseNPC *,int>::Grow(&vHeroes.m_Memory, 1);
        ++vHeroes.m_Size;
        v16 = &vHeroes.m_Memory.m_pMemory[m_Size];
        if ( v16 == 0 )
          goto LABEL_9;
        goto LABEL_21;
      }
      if ( (m_iUnitType & 0x10) == 0 )
        break;
      v15 = vBuildings.m_Size;
      if ( vBuildings.m_Size == vBuildings.m_Memory.m_nAllocationCount )
        CUtlMemory<CDOTA_BaseNPC *,int>::Grow(&vBuildings.m_Memory, 1);
      ++vBuildings.m_Size;
      v16 = &vBuildings.m_Memory.m_pMemory[v15];
      if ( v16 != 0 )
        goto LABEL_21;
LABEL_9:
      ++v7;
      ++v6;
      if ( hUnits.m_Size <= v7 )
        goto LABEL_22;
    }
    v55 = vCreeps.m_Size;
    v56 = vCreeps.m_Size;
    if ( vCreeps.m_Size == vCreeps.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<CDOTA_BaseNPC *,int>::Grow(&vCreeps.m_Memory, 1);
      v56 = vCreeps.m_Size;
    }
    vCreeps.m_Size = v56 + 1;
    v16 = &vCreeps.m_Memory.m_pMemory[v55];
    if ( v16 == 0 )
      goto LABEL_9;
LABEL_21:
    *v16 = m_pInstance;
    ++v7;
    ++v6;
  }
  while ( hUnits.m_Size > v7 );
LABEL_22:
  if ( vBuildings.m_Size != 0 && this->m_bIsBuildingAggressive )
    goto LABEL_24;
LABEL_29:
  v78 = 1;
  if ( (this->m_iMoveCapabilities & 3) == 0 )
    v78 = BYTE3(this->m_nUnitState64.m_Value) & 1 | ((this->m_nUnitState64.m_Value & 0x200000000LL) != 0);
  if ( this->m_vOffensiveAbilities.m_Size <= 0 )
  {
LABEL_38:
    this->m_nCurrentCastBehavior = -1;
LABEL_24:
    v79 = 0;
    v17 = vBuildings.m_Memory.m_nGrowSize & 0xC0000000;
    goto LABEL_25;
  }
  v72 = 0;
  n = 0;
  while ( 2 )
  {
    v18 = &this->m_vOffensiveAbilities.m_Memory.m_pMemory[v72];
    v19 = CEntityHandle::operator CEntityInstance *(&v18->hAbility);
    if ( v19 != 0 )
      v79 = __dynamic_cast(v19, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTABaseAbility, 0);
    else
      v79 = 0;
    v20 = (*(v79->_vptr_IHandleEntity + 226))(v79, &vec3_origin, 0);
    if ( CDOTABaseAbility::GetEffectiveLevel(v79) < 0
      || (*(v79->_vptr_IHandleEntity + 245))(v79) == 0
      || !CDOTABaseAbility::IsOwnersManaEnough(v79)
      || !CDOTABaseAbility::IsOwnersGoldEnough(v79, -1) )
    {
      goto LABEL_37;
    }
    v71 = v20;
    if ( v18->bIsAOE )
    {
      if ( v18->bUseOnTrees )
      {
        CUtlVectorFixedGrowableCompat<CDOTA_Tree *,10ul>::CUtlVectorFixedGrowableCompat(&trees, 0);
        *v65.m128i_i32 = (*(v79->_vptr_IHandleEntity + 226))(v79, &vec3_origin, 0);
        v66 = COERCE_FLOAT(_mm_cvtsi128_si32(v65));
        v88 = *CBaseEntity::GetAbsOrigin(this);
        CGridNav::GetStandingTreesAroundPoint(&g_GridNav, v88, v66, 0, &trees);
        if ( trees.m_Size != 0 && v18->nMinimumTargets <= trees.m_Size )
        {
          v67 = (*(**trees.m_Memory.m_pMemory + 64LL))(*trees.m_Memory.m_pMemory);
          v68 = CBaseEntity::GetAbsOrigin(v67);
          y = v68->y;
          z = v68->z;
          this->m_vDesiredCastLocation.x = v68->x;
          this->m_vDesiredCastLocation.y = y;
          this->m_vDesiredCastLocation.z = z;
          this->m_nCurrentCastBehavior = 16;
          this->m_pLastUsedAbility = v79;
        }
        else
        {
          v79 = 0;
        }
        CUtlVectorBase<CDOTA_Tree *,CUtlMemory<CDOTA_Tree *,int>>::~CUtlVectorBase(&trees);
        goto LABEL_89;
      }
      m_pAbilityData = v79->m_pAbilityData;
      if ( m_pAbilityData == 0 )
      {
        CDOTABaseAbility::LoadAbilityData(v79, 0);
        m_pAbilityData = v79->m_pAbilityData;
      }
      if ( (m_pAbilityData->m_iAbilityBehavior & 8) == 0 )
      {
LABEL_96:
        m_iAbilityBehavior = m_pAbilityData->m_iAbilityBehavior;
        if ( (m_iAbilityBehavior & 0xFFFFFFF7) == 0 )
          goto LABEL_37;
        v37 = &this->m_vOffensiveAbilities.m_Memory.m_pMemory[v72];
        v38 = !v37->bUseOnCreeps ? 1 : 3;
        if ( v18->bIsLinear )
        {
          if ( (m_iAbilityBehavior & 4) != 0 )
          {
            v51 = v37->nMinimumRange;
            nRadius = v37->nRadius;
            v53 = CBaseEntity::GetAbsOrigin(this);
            CDOTA_BaseNPC_Creature::FindTargetLinearLocation(
              this,
              this->m_iTeamNum.m_Value,
              v38,
              2,
              v53,
              0,
              0.0,
              nRadius,
              &hUnitTargetEntities,
              &nTargetCount,
              v51);
            goto LABEL_100;
          }
          v57 = v37->nMinimumRange;
          flRadiusb = v37->nRadius;
          v58 = (*(v79->_vptr_IHandleEntity + 226))(v79, &vec3_origin, 0);
          v59 = RandomInt(50, 100) + v58;
          v60 = CBaseEntity::GetAbsOrigin(this);
          CDOTA_BaseNPC_Creature::FindTargetLinearLocation(
            this,
            this->m_iTeamNum.m_Value,
            v38,
            2,
            v60,
            v59,
            0.0,
            flRadiusb,
            &hUnitTargetEntities,
            &nTargetCount,
            v57);
        }
        else
        {
          if ( (m_iAbilityBehavior & 4) != 0 )
          {
            nMinimumRange = v37->nMinimumRange;
            v40 = v37->nRadius;
            v41 = CBaseEntity::GetAbsOrigin(this);
            CDOTA_BaseNPC_Creature::FindTargetAoELocation(
              this,
              this->m_iTeamNum.m_Value,
              v38,
              2,
              v41,
              0,
              0.0,
              v40,
              &hUnitTargetEntities,
              &nTargetCount,
              nMinimumRange);
LABEL_100:
            this->m_nCurrentCastBehavior = 4;
            goto LABEL_101;
          }
          v61 = v37->nMinimumRange;
          flRadiusc = v37->nRadius;
          v62 = (*(v79->_vptr_IHandleEntity + 226))(v79, &vec3_origin, 0);
          v63 = RandomInt(50, 100) + v62;
          v64 = CBaseEntity::GetAbsOrigin(this);
          CDOTA_BaseNPC_Creature::FindTargetAoELocation(
            this,
            this->m_iTeamNum.m_Value,
            v38,
            2,
            v64,
            v63,
            0.0,
            flRadiusc,
            &hUnitTargetEntities,
            &nTargetCount,
            v61);
        }
        this->m_nCurrentCastBehavior = 16;
LABEL_101:
        if ( v18->nMinimumTargets <= nTargetCount )
        {
          v43 = hUnitTargetEntities.m_Size;
          if ( *&hUnitTargetEntities.m_Size != vec3_invalid.x
            || vec3_invalid.y != *(&hUnitTargetEntities.m_Size + 1)
            || vec3_invalid.z != *&hUnitTargetEntities.m_Memory.m_pMemory )
          {
            if ( v78 != 0 )
              goto LABEL_106;
            if ( CDOTA_BaseNPC::IsPositionInRange(
                   this,
                   *&hUnitTargetEntities.m_Size,
                   COERCE_DOUBLE(LODWORD(hUnitTargetEntities.m_Memory.m_pMemory)),
                   v71,
                   v42) )
            {
              v43 = hUnitTargetEntities.m_Size;
LABEL_106:
              LODWORD(this->m_vDesiredCastLocation.x) = v43;
              this->m_vDesiredCastLocation.y = *(&hUnitTargetEntities.m_Size + 1);
              v44 = *&hUnitTargetEntities.m_Memory.m_pMemory;
              this->m_pLastUsedAbility = v79;
              this->m_vDesiredCastLocation.z = v44;
LABEL_89:
              v17 = vBuildings.m_Memory.m_nGrowSize & 0xC0000000;
              goto LABEL_25;
            }
          }
        }
        goto LABEL_37;
      }
      if ( vHeroes.m_Size != 0 )
      {
        if ( vHeroes.m_Size > 0 )
        {
          v31 = 0;
          v32 = 0;
          while ( 1 )
          {
            hUnitTargetEntities.m_Size = 0;
            hUnitTargetEntities.m_Memory.m_pMemory = 0;
            hUnitTargetEntities.m_Memory.m_nAllocationCount = 0;
            hUnitTargetEntities.m_Memory.m_nGrowSize = 0;
            v33 = vHeroes.m_Memory.m_pMemory[v31];
            if ( v33 != 0 )
            {
              flRadius = v18->nRadius;
              v34 = CBaseEntity::GetAbsOrigin(vHeroes.m_Memory.m_pMemory[v31]);
              FindUnitsInRadius(this->m_iTeamNum.m_Value, v34, this, flRadius, &hUnitTargetEntities, 2, 1, 144, 1, 0);
              if ( hUnitTargetEntities.m_Size >= v18->nMinimumTargets )
                break;
            }
            CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&hUnitTargetEntities);
            if ( (hUnitTargetEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
            {
              CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hUnitTargetEntities.m_Memory);
              if ( (hUnitTargetEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
                CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hUnitTargetEntities.m_Memory);
            }
            ++v32;
            ++v31;
            if ( vHeroes.m_Size <= v32 )
              goto LABEL_93;
          }
          this->m_pDesiredNPCTarget = v33;
          goto LABEL_123;
        }
LABEL_93:
        if ( !v18->bUseOnCreeps )
          goto LABEL_94;
      }
      else if ( !v18->bUseOnCreeps || vCreeps.m_Size == 0 )
      {
        goto LABEL_96;
      }
      if ( vCreeps.m_Size > 0 )
      {
        v47 = 0;
        v48 = 0;
        while ( 1 )
        {
          hUnitTargetEntities.m_Size = 0;
          hUnitTargetEntities.m_Memory.m_pMemory = 0;
          hUnitTargetEntities.m_Memory.m_nAllocationCount = 0;
          hUnitTargetEntities.m_Memory.m_nGrowSize = 0;
          v49 = vCreeps.m_Memory.m_pMemory[v47];
          if ( v49 != 0 )
          {
            flRadiusa = v18->nRadius;
            v50 = CBaseEntity::GetAbsOrigin(vCreeps.m_Memory.m_pMemory[v47]);
            FindUnitsInRadius(this->m_iTeamNum.m_Value, v50, this, flRadiusa, &hUnitTargetEntities, 2, 3, 144, 1, 0);
            if ( hUnitTargetEntities.m_Size >= v18->nMinimumTargets )
              break;
          }
          ++v48;
          ++v47;
          CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hUnitTargetEntities);
          if ( vCreeps.m_Size <= v48 )
            goto LABEL_94;
        }
        this->m_pDesiredNPCTarget = v49;
LABEL_123:
        this->m_nCurrentCastBehavior = 8;
        this->m_pLastUsedAbility = v79;
        CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hUnitTargetEntities);
        goto LABEL_89;
      }
LABEL_94:
      m_pAbilityData = v79->m_pAbilityData;
      if ( m_pAbilityData == 0 )
      {
        CDOTABaseAbility::LoadAbilityData(v79, 0);
        m_pAbilityData = v79->m_pAbilityData;
      }
      goto LABEL_96;
    }
    v22 = v79->m_pAbilityData;
    if ( v22 == 0 )
    {
      CDOTABaseAbility::LoadAbilityData(v79, 0);
      v22 = v79->m_pAbilityData;
    }
    if ( (v22->m_iAbilityTargetType & 4) != 0 && vBuildings.m_Size > 0 )
    {
      v25 = 0;
      v35 = 0;
      while ( (*(v79->_vptr_IHandleEntity + 256))(v79, vBuildings.m_Memory.m_pMemory[v25]) != 0
           || v78 == 0
           && !CDOTA_BaseNPC::IsEntityInRangeForCast(this, vBuildings.m_Memory.m_pMemory[v25], LODWORD(v71), v21) )
      {
        ++v35;
        ++v25;
        if ( vBuildings.m_Size <= v35 )
          goto LABEL_52;
      }
      m_pMemory = vBuildings.m_Memory.m_pMemory;
LABEL_87:
      v29 = m_pMemory[v25];
LABEL_88:
      this->m_pDesiredNPCTarget = v29;
      this->m_nCurrentCastBehavior = 8;
      this->m_pLastUsedAbility = v79;
      goto LABEL_89;
    }
LABEL_52:
    if ( vHeroes.m_Size == 0 && (!v18->bUseOnCreeps || vCreeps.m_Size == 0) )
      goto LABEL_24;
    v23 = v79->m_pAbilityData;
    if ( v23 == 0 )
    {
      CDOTABaseAbility::LoadAbilityData(v79, 0);
      v23 = v79->m_pAbilityData;
    }
    if ( (v23->m_iAbilityBehavior & 4) == 0 )
    {
      if ( v18->nMinimumHP == 0 )
      {
        if ( v78 != 0
          || (vHeroes.m_Size == 0 ? (v24 = *vCreeps.m_Memory.m_pMemory) : (v24 = *vHeroes.m_Memory.m_pMemory),
              CDOTA_BaseNPC::IsEntityInRangeForCast(this, v24, LODWORD(v71), v21)) )
        {
          if ( vHeroes.m_Size != 0 )
            v29 = *vHeroes.m_Memory.m_pMemory;
          else
            v29 = *vCreeps.m_Memory.m_pMemory;
          goto LABEL_88;
        }
      }
      v25 = 0;
      v26 = 0;
      if ( vHeroes.m_Size > 0 )
      {
        while ( CBaseEntity::GetHealth(vHeroes.m_Memory.m_pMemory[v25]) < v18->nMinimumHP
             || v78 == 0
             && !CDOTA_BaseNPC::IsEntityInRangeForCast(this, vHeroes.m_Memory.m_pMemory[v25], LODWORD(v71), v27) )
        {
          ++v26;
          ++v25;
          if ( vHeroes.m_Size <= v26 )
            goto LABEL_109;
        }
        m_pMemory = vHeroes.m_Memory.m_pMemory;
        goto LABEL_87;
      }
LABEL_109:
      if ( v18->bUseOnCreeps && vCreeps.m_Size > 0 )
      {
        v25 = 0;
        v45 = 0;
        while ( CBaseEntity::GetHealth(vCreeps.m_Memory.m_pMemory[v25]) < v18->nMinimumHP
             || v78 == 0
             && !CDOTA_BaseNPC::IsEntityInRangeForCast(this, vCreeps.m_Memory.m_pMemory[v25], LODWORD(v71), v46) )
        {
          ++v45;
          ++v25;
          if ( vCreeps.m_Size <= v45 )
            goto LABEL_37;
        }
        m_pMemory = vCreeps.m_Memory.m_pMemory;
        goto LABEL_87;
      }
LABEL_37:
      ++n;
      ++v72;
      if ( this->m_vOffensiveAbilities.m_Size <= n )
        goto LABEL_38;
      continue;
    }
    break;
  }
  this->m_nCurrentCastBehavior = 4;
  this->m_pLastUsedAbility = v79;
  v17 = vBuildings.m_Memory.m_nGrowSize & 0xC0000000;
LABEL_25:
  vBuildings.m_Size = 0;
  if ( v17 == 0 )
  {
LABEL_40:
    CUtlMemory<CDOTA_BaseNPC *,int>::Purge(&vBuildings.m_Memory);
    if ( (vBuildings.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CDOTA_BaseNPC *,int>::Purge(&vBuildings.m_Memory);
  }
  vCreeps.m_Size = 0;
  if ( (vCreeps.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CDOTA_BaseNPC *,int>::Purge(&vCreeps.m_Memory);
    if ( (vCreeps.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CDOTA_BaseNPC *,int>::Purge(&vCreeps.m_Memory);
  }
  vHeroes.m_Size = 0;
  if ( (vHeroes.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CDOTA_BaseNPC *,int>::Purge(&vHeroes.m_Memory);
    if ( (vHeroes.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CDOTA_BaseNPC *,int>::Purge(&vHeroes.m_Memory);
  }
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hUnits);
  return v79;
}


// CDOTA_BaseNPC_Creature::GetDesiredDefensiveAbility  (line 1037, @0x0000000002940be0, libserver.so)  // inlines: AddToTail, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<CDOTA_BaseNPC*>, Element, Get, GetAbilityData, GetAcquisitionRange, GetHealthPercent, GetInstance, GetTeamNumber, GrowMemory, IsConsideredHero, IsFullyCastable, IsTrained, SetCurrentCastBehavior, SetDesiredCastLocation, SetDesiredNPCTarget, SetLastUsedAbility, ToDOTAAbility, ToDOTABaseNPC, operator CBaseEntity*, operator!=, operator=, operator[], ~CUtlVector
// calls: CDOTA_BaseNPC_Creature::HasDefensiveAbilityReady, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, CEntityHandle::operator CEntityInstance*, CUtlMemory<CDOTA_BaseNPC*, int>::Grow, __dynamic_cast, CDOTABaseAbility::GetEffectiveLevel, CDOTABaseAbility::IsOwnersManaEnough, CDOTABaseAbility::IsOwnersGoldEnough, CBaseEntity::GetHealth, CUtlVectorBase<CDOTA_BaseNPC*, CUtlMemory<CDOTA_BaseNPC*, int> >::~CUtlVectorBase, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase (17 total)
// callers: CDOTA_BaseNPC_Creature::ConsiderUsingAbilities
CDOTABaseAbility *__fastcall CDOTA_BaseNPC_Creature::GetDesiredDefensiveAbility(CDOTA_BaseNPC_Creature *const this)
{
  __m128i v3; // xmm7
  float v4; // ebx
  const Vector *AbsOrigin; // rax
  __int64 i; // r12
  __int64 v7; // r13
  int v8; // eax
  CDOTA_BaseNPC **v9; // rax
  CEntityInstance *v10; // rax
  CDOTA_BaseNPC *v11; // rbx
  __int64 m_Size; // r13
  __int64 v13; // r13
  __int64 v14; // rbx
  int v15; // r12d
  CEntityInstance *v16; // rax
  CDOTABaseAbility *v17; // rax
  CDOTABaseAbility *v18; // r15
  CreatureAbilityData_t *v19; // rax
  char v20; // r13
  DOTAAbilityData_t *v21; // rax
  CreatureAbilityData_t *v22; // rbx
  __int64 v23; // rbx
  CDOTA_BaseNPC_Creature *v24; // r13
  int v25; // eax
  CDOTABaseAbility *v26; // rax
  int v27; // r13d
  DOTAAbilityData_t *m_pAbilityData; // rax
  int m_iAbilityBehavior; // eax
  CreatureAbilityData_t *v30; // rdx
  int nMinimumRange; // r13d
  const Vector *v32; // rax
  vec_t y; // xmm2_4
  vec_t z; // xmm1_4
  __int64 v35; // rbx
  float v36; // xmm0_4
  __int64 v37; // r13
  int v38; // eax
  __int64 v39; // rcx
  CDOTA_BaseNPC *v40; // rax
  int v41; // r13d
  const Vector *v42; // rax
  int v43; // r13d
  int v44; // r13d
  const Vector *v45; // rax
  int v46; // r13d
  int v47; // r13d
  const Vector *v48; // rax
  CreatureAbilityData_t *v49; // rbx
  __int64 v50; // rbx
  CDOTA_BaseNPC_Creature *v51; // r13
  int v52; // eax
  __int64 v53; // rbx
  float Health; // xmm0_4
  CDOTA_BaseNPC *v55; // rax
  int nRadius; // [rsp+20h] [rbp-110h]
  int v57; // [rsp+20h] [rbp-110h]
  int iRadius; // [rsp+24h] [rbp-10Ch]
  int iRadiusa; // [rsp+24h] [rbp-10Ch]
  int iRadiusb; // [rsp+24h] [rbp-10Ch]
  int iRadiusc; // [rsp+24h] [rbp-10Ch]
  float flHighestHealth; // [rsp+58h] [rbp-D8h]
  CDOTABaseAbility *flHighestHealthe; // [rsp+58h] [rbp-D8h]
  int flHighestHealtha; // [rsp+58h] [rbp-D8h]
  float flHighestHealthb; // [rsp+58h] [rbp-D8h]
  float flHighestHealthc; // [rsp+58h] [rbp-D8h]
  float flHighestHealthd; // [rsp+58h] [rbp-D8h]
  int nTargetCount; // [rsp+6Ch] [rbp-C4h] BYREF
  Vector vTargetLoc; // [rsp+70h] [rbp-C0h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hUnits; // [rsp+80h] [rbp-B0h] BYREF
  CUtlVector<CDOTA_BaseNPC*,CUtlMemory<CDOTA_BaseNPC*,int> > vFriendlyCreatures; // [rsp+A0h] [rbp-90h] BYREF
  CUtlVector<CDOTA_BaseNPC*,CUtlMemory<CDOTA_BaseNPC*,int> > vEnemyHeroes; // [rsp+C0h] [rbp-70h] BYREF
  CUtlVector<CDOTA_BaseNPC*,CUtlMemory<CDOTA_BaseNPC*,int> > vEnemyCreeps; // [rsp+E0h] [rbp-50h] BYREF

  if ( (*(this->_vptr_IHandleEntity + 497))(this) != 1
    || !this->m_bHasDefensiveAbility
    || !CDOTA_BaseNPC_Creature::HasDefensiveAbilityReady(this) )
  {
    return 0;
  }
  *v3.m128i_i32 = this->m_iAcquisitionRange;
  hUnits.m_Size = 0;
  hUnits.m_Memory.m_pMemory = 0;
  hUnits.m_Memory.m_nAllocationCount = 0;
  hUnits.m_Memory.m_nGrowSize = 0;
  v4 = COERCE_FLOAT(_mm_cvtsi128_si32(v3));
  AbsOrigin = CBaseEntity::GetAbsOrigin(this);
  FindUnitsInRadius(this->m_iTeamNum.m_Value, AbsOrigin, this, v4, &hUnits, 3, 3, 144, 1, 0);
  vFriendlyCreatures.m_Size = 0;
  vFriendlyCreatures.m_Memory.m_pMemory = 0;
  vFriendlyCreatures.m_Memory.m_nAllocationCount = 0;
  vFriendlyCreatures.m_Memory.m_nGrowSize = 0;
  vEnemyHeroes.m_Size = 0;
  vEnemyHeroes.m_Memory.m_pMemory = 0;
  vEnemyHeroes.m_Memory.m_nAllocationCount = 0;
  vEnemyHeroes.m_Memory.m_nGrowSize = 0;
  vEnemyCreeps.m_Size = 0;
  vEnemyCreeps.m_Memory.m_pMemory = 0;
  vEnemyCreeps.m_Memory.m_nAllocationCount = 0;
  vEnemyCreeps.m_Memory.m_nGrowSize = 0;
  if ( hUnits.m_Size == 0 )
  {
    v26 = 0;
    goto LABEL_53;
  }
  if ( hUnits.m_Size > 0 )
  {
    for ( i = 0; hUnits.m_Size > i; ++i )
    {
      v10 = CEntityHandle::operator CEntityInstance *(&hUnits.m_Memory.m_pMemory[i]);
      v11 = v10;
      if ( v10 != 0 && BYTE3(v10[7]._vptr_IHandleEntity) != 0 )
      {
        if ( HIBYTE(v10[7].m_CScriptComponent) != this->m_iTeamNum.m_Value || this == v10 )
        {
          if ( (v10[43].m_iszPrivateVScripts.u.m_Id & 3) != 0 )
          {
            m_Size = vEnemyHeroes.m_Size;
            if ( vEnemyHeroes.m_Size == vEnemyHeroes.m_Memory.m_nAllocationCount )
              CUtlMemory<CDOTA_BaseNPC *,int>::Grow(&vEnemyHeroes.m_Memory, 1);
            ++vEnemyHeroes.m_Size;
            v9 = &vEnemyHeroes.m_Memory.m_pMemory[m_Size];
            if ( v9 == 0 )
              continue;
          }
          else
          {
            v7 = vEnemyCreeps.m_Size;
            v8 = vEnemyCreeps.m_Size;
            if ( vEnemyCreeps.m_Size == vEnemyCreeps.m_Memory.m_nAllocationCount )
            {
              CUtlMemory<CDOTA_BaseNPC *,int>::Grow(&vEnemyCreeps.m_Memory, 1);
              v8 = vEnemyCreeps.m_Size;
            }
            vEnemyCreeps.m_Size = v8 + 1;
            v9 = &vEnemyCreeps.m_Memory.m_pMemory[v7];
            if ( v9 == 0 )
              continue;
          }
        }
        else
        {
          v13 = vFriendlyCreatures.m_Size;
          if ( vFriendlyCreatures.m_Size == vFriendlyCreatures.m_Memory.m_nAllocationCount )
            CUtlMemory<CDOTA_BaseNPC *,int>::Grow(&vFriendlyCreatures.m_Memory, 1);
          ++vFriendlyCreatures.m_Size;
          v9 = &vFriendlyCreatures.m_Memory.m_pMemory[v13];
          if ( v9 == 0 )
            continue;
        }
        *v9 = v11;
      }
    }
  }
  if ( this->m_vDefensiveAbilities.m_Size <= 0 )
  {
LABEL_77:
    this->m_nCurrentCastBehavior = -1;
LABEL_78:
    v26 = 0;
    goto LABEL_53;
  }
  v14 = 0;
  v15 = 0;
  while ( 1 )
  {
    v16 = CEntityHandle::operator CEntityInstance *(&this->m_vDefensiveAbilities.m_Memory.m_pMemory[v14].hAbility);
    if ( v16 == 0 )
      goto LABEL_28;
    v17 = __dynamic_cast(v16, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTABaseAbility, 0);
    v18 = v17;
    if ( v17 == 0
      || CDOTABaseAbility::GetEffectiveLevel(v17) < 0
      || (*(v18->_vptr_IHandleEntity + 245))(v18) == 0
      || !CDOTABaseAbility::IsOwnersManaEnough(v18)
      || !CDOTABaseAbility::IsOwnersGoldEnough(v18, -1) )
    {
      goto LABEL_28;
    }
    v19 = &this->m_vDefensiveAbilities.m_Memory.m_pMemory[v14];
    if ( !v19->bIsBuff && !v19->bIsHeal )
      break;
    if ( !v19->bIsAOE )
    {
      if ( vFriendlyCreatures.m_Size == 0 )
        goto LABEL_78;
      v20 = 1;
      goto LABEL_39;
    }
    v27 = 1;
LABEL_57:
    m_pAbilityData = v18->m_pAbilityData;
    if ( m_pAbilityData == 0 )
    {
      CDOTABaseAbility::LoadAbilityData(v18, 0);
      m_pAbilityData = v18->m_pAbilityData;
    }
    m_iAbilityBehavior = m_pAbilityData->m_iAbilityBehavior;
    if ( (m_iAbilityBehavior & 8) != 0 )
    {
      if ( v27 != 0 )
      {
        v49 = &this->m_vDefensiveAbilities.m_Memory.m_pMemory[v14];
        if ( v49->bUseSelfishly )
          goto LABEL_85;
        if ( v49->bUseOnStrongestAlly )
        {
          if ( vFriendlyCreatures.m_Size > 0 )
          {
            v53 = 0;
            flHighestHealthd = 0.0;
            v51 = 0;
            do
            {
              Health = CBaseEntity::GetHealth(vFriendlyCreatures.m_Memory.m_pMemory[v53]);
              if ( Health > flHighestHealthd )
              {
                flHighestHealthd = Health;
                v51 = vFriendlyCreatures.m_Memory.m_pMemory[v53];
              }
              ++v53;
            }
            while ( v53 < vFriendlyCreatures.m_Size );
            goto LABEL_105;
          }
        }
        else if ( vFriendlyCreatures.m_Size > 0 )
        {
          v50 = 0;
          v51 = 0;
          flHighestHealthc = 99999.0;
          do
          {
            while ( 1 )
            {
              v52 = CBaseEntity::GetHealth(vFriendlyCreatures.m_Memory.m_pMemory[v50]);
              if ( v52 > 0.0 && flHighestHealthc > v52 )
                break;
              if ( vFriendlyCreatures.m_Size <= ++v50 )
                goto LABEL_105;
            }
            flHighestHealthc = v52;
            v51 = vFriendlyCreatures.m_Memory.m_pMemory[v50++];
          }
          while ( vFriendlyCreatures.m_Size > v50 );
LABEL_105:
          if ( v51 != 0 )
          {
LABEL_106:
            this->m_pDesiredNPCTarget = v51;
            this->m_nCurrentCastBehavior = 8;
            this->m_pLastUsedAbility = v18;
            goto LABEL_86;
          }
        }
        v51 = this;
        goto LABEL_106;
      }
      if ( vEnemyHeroes.m_Size != 0 )
      {
        v55 = *vEnemyHeroes.m_Memory.m_pMemory;
        this->m_pLastUsedAbility = v18;
        this->m_nCurrentCastBehavior = 8;
        this->m_pDesiredNPCTarget = v55;
        goto LABEL_86;
      }
      flHighestHealtha = 2;
    }
    else
    {
      flHighestHealtha = (v27 << 31 >> 31) + 2;
    }
    v30 = &this->m_vDefensiveAbilities.m_Memory.m_pMemory[v14];
    if ( v30->bIsLinear )
    {
      if ( (m_iAbilityBehavior & 4) != 0 )
      {
        nMinimumRange = v30->nMinimumRange;
        iRadius = v30->nRadius;
        v32 = CBaseEntity::GetAbsOrigin(this);
        CDOTA_BaseNPC_Creature::FindTargetLinearLocation(
          this,
          this->m_iTeamNum.m_Value,
          3,
          flHighestHealtha,
          v32,
          0,
          0.0,
          iRadius,
          &vTargetLoc,
          &nTargetCount,
          nMinimumRange);
LABEL_66:
        this->m_nCurrentCastBehavior = 4;
        goto LABEL_67;
      }
      iRadiusb = v30->nMinimumRange;
      nRadius = v30->nRadius;
      v43 = (*(v18->_vptr_IHandleEntity + 226))(v18, &vec3_origin, 0);
      v44 = RandomInt(50, 100) + v43;
      v45 = CBaseEntity::GetAbsOrigin(this);
      CDOTA_BaseNPC_Creature::FindTargetLinearLocation(
        this,
        this->m_iTeamNum.m_Value,
        3,
        flHighestHealtha,
        v45,
        v44,
        0.0,
        nRadius,
        &vTargetLoc,
        &nTargetCount,
        iRadiusb);
    }
    else
    {
      if ( (m_iAbilityBehavior & 4) != 0 )
      {
        v41 = v30->nMinimumRange;
        iRadiusa = v30->nRadius;
        v42 = CBaseEntity::GetAbsOrigin(this);
        CDOTA_BaseNPC_Creature::FindTargetAoELocation(
          this,
          this->m_iTeamNum.m_Value,
          3,
          flHighestHealtha,
          v42,
          0,
          0.0,
          iRadiusa,
          &vTargetLoc,
          &nTargetCount,
          v41);
        goto LABEL_66;
      }
      iRadiusc = v30->nMinimumRange;
      v57 = v30->nRadius;
      v46 = (*(v18->_vptr_IHandleEntity + 226))(v18, &vec3_origin, 0);
      v47 = RandomInt(50, 100) + v46;
      v48 = CBaseEntity::GetAbsOrigin(this);
      CDOTA_BaseNPC_Creature::FindTargetAoELocation(
        this,
        this->m_iTeamNum.m_Value,
        3,
        flHighestHealtha,
        v48,
        v47,
        0.0,
        v57,
        &vTargetLoc,
        &nTargetCount,
        iRadiusc);
    }
    this->m_nCurrentCastBehavior = 16;
LABEL_67:
    if ( this->m_vDefensiveAbilities.m_Memory.m_pMemory[v14].nMinimumTargets <= nTargetCount )
    {
      if ( vTargetLoc.x != vec3_invalid.x || (y = vTargetLoc.y, vTargetLoc.y != vec3_invalid.y) )
      {
        z = vTargetLoc.z;
        y = vTargetLoc.y;
LABEL_71:
        this->m_vDesiredCastLocation.x = vTargetLoc.x;
        this->m_vDesiredCastLocation.y = y;
        this->m_vDesiredCastLocation.z = z;
        this->m_pLastUsedAbility = v18;
        goto LABEL_86;
      }
      z = vTargetLoc.z;
      if ( vTargetLoc.z != vec3_invalid.z )
        goto LABEL_71;
    }
LABEL_28:
    ++v15;
    ++v14;
    if ( this->m_vDefensiveAbilities.m_Size <= v15 )
      goto LABEL_77;
  }
  if ( v19->bIsAOE )
  {
    v27 = 0;
    goto LABEL_57;
  }
  if ( vEnemyHeroes.m_Size == 0 )
    goto LABEL_78;
  v20 = 0;
LABEL_39:
  v21 = v18->m_pAbilityData;
  if ( v21 == 0 )
  {
    CDOTABaseAbility::LoadAbilityData(v18, 0);
    v21 = v18->m_pAbilityData;
  }
  if ( (v21->m_iAbilityBehavior & 4) != 0 )
  {
    v37 = 100LL * CBaseEntity::GetHealth(this);
    v38 = (*(this->_vptr_IHandleEntity + 156))(this);
    v39 = 1;
    if ( v38 > 0 )
      v39 = v38;
    if ( this->m_vDefensiveAbilities.m_Memory.m_pMemory[v14].nUseAtHealthPercent > (v37 / v39) )
    {
      this->m_nCurrentCastBehavior = 4;
      v26 = v18;
      this->m_pLastUsedAbility = v18;
      goto LABEL_53;
    }
    goto LABEL_28;
  }
  if ( v20 != 0 )
  {
    v22 = &this->m_vDefensiveAbilities.m_Memory.m_pMemory[v14];
    if ( !v22->bUseSelfishly )
    {
      if ( v22->bUseOnStrongestAlly )
      {
        if ( vFriendlyCreatures.m_Size > 0 )
        {
          v35 = 0;
          flHighestHealthb = 0.0;
          v24 = 0;
          do
          {
            v36 = CBaseEntity::GetHealth(vFriendlyCreatures.m_Memory.m_pMemory[v35]);
            if ( v36 > flHighestHealthb )
            {
              flHighestHealthb = v36;
              v24 = vFriendlyCreatures.m_Memory.m_pMemory[v35];
            }
            ++v35;
          }
          while ( vFriendlyCreatures.m_Size > v35 );
          goto LABEL_51;
        }
      }
      else if ( vFriendlyCreatures.m_Size > 0 )
      {
        v23 = 0;
        v24 = 0;
        flHighestHealth = 99999.0;
        do
        {
          while ( 1 )
          {
            v25 = CBaseEntity::GetHealth(vFriendlyCreatures.m_Memory.m_pMemory[v23]);
            if ( v25 > 0.0 && flHighestHealth > v25 )
              break;
            if ( vFriendlyCreatures.m_Size <= ++v23 )
              goto LABEL_51;
          }
          flHighestHealth = v25;
          v24 = vFriendlyCreatures.m_Memory.m_pMemory[v23++];
        }
        while ( vFriendlyCreatures.m_Size > v23 );
LABEL_51:
        if ( v24 != 0 )
        {
LABEL_52:
          this->m_pDesiredNPCTarget = v24;
          v26 = v18;
          this->m_nCurrentCastBehavior = 8;
          this->m_pLastUsedAbility = v18;
          goto LABEL_53;
        }
      }
      v24 = this;
      goto LABEL_52;
    }
LABEL_85:
    this->m_pDesiredNPCTarget = this;
    this->m_nCurrentCastBehavior = 8;
    this->m_pLastUsedAbility = v18;
LABEL_86:
    v26 = v18;
    goto LABEL_53;
  }
  v40 = *vEnemyHeroes.m_Memory.m_pMemory;
  this->m_pLastUsedAbility = v18;
  this->m_nCurrentCastBehavior = 8;
  this->m_pDesiredNPCTarget = v40;
  v26 = v18;
LABEL_53:
  flHighestHealthe = v26;
  CUtlVectorBase<CDOTA_BaseNPC *,CUtlMemory<CDOTA_BaseNPC *,int>>::~CUtlVectorBase(&vEnemyCreeps);
  CUtlVectorBase<CDOTA_BaseNPC *,CUtlMemory<CDOTA_BaseNPC *,int>>::~CUtlVectorBase(&vEnemyHeroes);
  CUtlVectorBase<CDOTA_BaseNPC *,CUtlMemory<CDOTA_BaseNPC *,int>>::~CUtlVectorBase(&vFriendlyCreatures);
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hUnits);
  return flHighestHealthe;
}


// CDOTA_BaseNPC_Creature::GetDesiredEscapeAbility  (line 1294, @0x0000000002926fd0, libserver.so)  // inlines: AddToTail, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<CDOTA_BaseNPC*>, Element, Get, GetAbilityData, GetAcquisitionRange, GetInstance, GetTeamNumber, GrowMemory, IsFullyCastable, IsTrained, SetCurrentCastBehavior, SetDesiredNPCTarget, SetLastUsedAbility, ToDOTAAbility, ToDOTABaseNPC, operator CBaseEntity*, operator[], ~CUtlVector
// calls: CDOTA_BaseNPC_Creature::HasEscapeAbilityReady, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, CEntityHandle::operator CEntityInstance*, __dynamic_cast, CDOTABaseAbility::GetEffectiveLevel, CDOTABaseAbility::IsOwnersManaEnough, CDOTABaseAbility::IsOwnersGoldEnough, CBaseEntity::GetHealth, CDOTABaseAbility::LoadAbilityData, CUtlVectorBase<CDOTA_BaseNPC*, CUtlMemory<CDOTA_BaseNPC*, int> >::~CUtlVectorBase, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase (14 total)
// callers: CDOTABehaviorCommandMoveToPosition::Update
CDOTABaseAbility *__fastcall CDOTA_BaseNPC_Creature::GetDesiredEscapeAbility(CDOTA_BaseNPC_Creature *const this)
{
  __m128i v3; // xmm3
  float v4; // ebx
  const Vector *AbsOrigin; // rax
  __int64 v6; // r13
  int v7; // r12d
  CEntityInstance *v8; // rax
  CDOTA_BaseNPC *v9; // rbx
  __int64 m_Size; // r15
  CDOTA_BaseNPC **v11; // rax
  __int64 v12; // r15
  CEntityInstance *v13; // rax
  CDOTABaseAbility *v14; // rax
  CDOTABaseAbility *v15; // r12
  bool bCanHelpOthersEscape; // bl
  DOTAAbilityData_t *m_pAbilityData; // rax
  __int64 v18; // rbx
  int Health; // eax
  CDOTABaseAbility *v20; // rax
  CDOTA_BaseNPC *pLowestHealthFriendly; // [rsp+28h] [rbp-88h]
  int n; // [rsp+34h] [rbp-7Ch]
  float flLowestHealth; // [rsp+38h] [rbp-78h]
  CDOTABaseAbility *flLowestHealtha; // [rsp+38h] [rbp-78h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hUnits; // [rsp+40h] [rbp-70h] BYREF
  CUtlVector<CDOTA_BaseNPC*,CUtlMemory<CDOTA_BaseNPC*,int> > vFriendlyCreatures; // [rsp+60h] [rbp-50h] BYREF

  if ( (*(this->_vptr_IHandleEntity + 497))(this) != 2
    || !this->m_bHasEscapeAbility
    || !CDOTA_BaseNPC_Creature::HasEscapeAbilityReady(this) )
  {
    return 0;
  }
  *v3.m128i_i32 = this->m_iAcquisitionRange;
  hUnits.m_Size = 0;
  hUnits.m_Memory.m_pMemory = 0;
  hUnits.m_Memory.m_nAllocationCount = 0;
  hUnits.m_Memory.m_nGrowSize = 0;
  v4 = COERCE_FLOAT(_mm_cvtsi128_si32(v3));
  AbsOrigin = CBaseEntity::GetAbsOrigin(this);
  FindUnitsInRadius(this->m_iTeamNum.m_Value, AbsOrigin, this, v4, &hUnits, 1, 3, 144, 1, 0);
  vFriendlyCreatures.m_Size = 0;
  vFriendlyCreatures.m_Memory.m_pMemory = 0;
  vFriendlyCreatures.m_Memory.m_nAllocationCount = 0;
  vFriendlyCreatures.m_Memory.m_nGrowSize = 0;
  if ( hUnits.m_Size == 0 )
    goto LABEL_42;
  if ( hUnits.m_Size > 0 )
  {
    v6 = 0;
    v7 = 0;
    do
    {
      while ( 1 )
      {
        v8 = CEntityHandle::operator CEntityInstance *(&hUnits.m_Memory.m_pMemory[v6]);
        v9 = v8;
        if ( v8 != 0
          && BYTE3(v8[7]._vptr_IHandleEntity) != 0
          && HIBYTE(v8[7].m_CScriptComponent) == this->m_iTeamNum.m_Value
          && (*(v8->_vptr_IHandleEntity + 497))(v8) == 2 )
        {
          m_Size = vFriendlyCreatures.m_Size;
          if ( vFriendlyCreatures.m_Size == vFriendlyCreatures.m_Memory.m_nAllocationCount )
            CUtlMemory<CDOTA_BaseNPC *,int>::Grow(&vFriendlyCreatures.m_Memory, 1);
          ++vFriendlyCreatures.m_Size;
          v11 = &vFriendlyCreatures.m_Memory.m_pMemory[m_Size];
          if ( v11 != 0 )
            break;
        }
        ++v7;
        ++v6;
        if ( hUnits.m_Size <= v7 )
          goto LABEL_17;
      }
      *v11 = v9;
      ++v7;
      ++v6;
    }
    while ( hUnits.m_Size > v7 );
  }
LABEL_17:
  if ( this->m_vEscapeAbilities.m_Size <= 0 )
  {
LABEL_42:
    v20 = 0;
    goto LABEL_41;
  }
  v12 = 0;
  n = 0;
  while ( 1 )
  {
    v13 = CEntityHandle::operator CEntityInstance *(&this->m_vEscapeAbilities.m_Memory.m_pMemory[v12].hAbility);
    if ( v13 == 0 )
      goto LABEL_19;
    v14 = __dynamic_cast(v13, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTABaseAbility, 0);
    v15 = v14;
    if ( v14 == 0
      || CDOTABaseAbility::GetEffectiveLevel(v14) < 0
      || (*(v15->_vptr_IHandleEntity + 245))(v15) == 0
      || !CDOTABaseAbility::IsOwnersManaEnough(v15)
      || !CDOTABaseAbility::IsOwnersGoldEnough(v15, -1) )
    {
      goto LABEL_19;
    }
    bCanHelpOthersEscape = this->m_vEscapeAbilities.m_Memory.m_pMemory[v12].bCanHelpOthersEscape;
    m_pAbilityData = v15->m_pAbilityData;
    if ( m_pAbilityData == 0 )
    {
      CDOTABaseAbility::LoadAbilityData(v15, 0);
      m_pAbilityData = v15->m_pAbilityData;
    }
    if ( (m_pAbilityData->m_iAbilityBehavior & 8) != 0 )
    {
      if ( !bCanHelpOthersEscape )
      {
        this->m_pDesiredNPCTarget = this;
        v20 = v15;
        this->m_nCurrentCastBehavior = 8;
        this->m_pLastUsedAbility = v15;
        goto LABEL_41;
      }
      if ( vFriendlyCreatures.m_Size > 0 )
        break;
    }
LABEL_39:
    if ( (m_pAbilityData->m_iAbilityBehavior & 4) != 0 )
    {
      this->m_nCurrentCastBehavior = 4;
      v20 = v15;
      this->m_pLastUsedAbility = v15;
      goto LABEL_41;
    }
LABEL_19:
    ++n;
    ++v12;
    if ( this->m_vEscapeAbilities.m_Size <= n )
      goto LABEL_42;
  }
  v18 = 0;
  flLowestHealth = 99999.0;
  pLowestHealthFriendly = 0;
  do
  {
    while ( 1 )
    {
      Health = CBaseEntity::GetHealth(vFriendlyCreatures.m_Memory.m_pMemory[v18]);
      if ( Health > 0.0 && flLowestHealth > Health )
        break;
      if ( vFriendlyCreatures.m_Size <= ++v18 )
        goto LABEL_36;
    }
    flLowestHealth = Health;
    pLowestHealthFriendly = vFriendlyCreatures.m_Memory.m_pMemory[v18++];
  }
  while ( vFriendlyCreatures.m_Size > v18 );
LABEL_36:
  if ( pLowestHealthFriendly == 0 )
  {
    m_pAbilityData = v15->m_pAbilityData;
    if ( m_pAbilityData == 0 )
    {
      CDOTABaseAbility::LoadAbilityData(v15, 0);
      m_pAbilityData = v15->m_pAbilityData;
    }
    goto LABEL_39;
  }
  this->m_pLastUsedAbility = v15;
  this->m_nCurrentCastBehavior = 8;
  this->m_pDesiredNPCTarget = pLowestHealthFriendly;
  v20 = v15;
LABEL_41:
  flLowestHealtha = v20;
  CUtlVectorBase<CDOTA_BaseNPC *,CUtlMemory<CDOTA_BaseNPC *,int>>::~CUtlVectorBase(&vFriendlyCreatures);
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hUnits);
  return flLowestHealtha;
}


// CDOTA_BaseNPC_Creature::ConsiderUsingAbilities  (line 1393, @0x00000000029417d0, libserver.so)  // inlines: ActionResult, Continue, GetDesiredCastLocation, HasFlyMovementCapability, HasMovementCapability, IActionResult, InState, SuspendFor
// calls: CDOTA_BaseNPC_Creature::CalculateCreatureDesire, CDOTA_BaseNPC_Creature::GetDesiredOffensiveAbility, operator new, CDOTABehaviorCommandMoveToTargetToCast::CDOTABehaviorCommandMoveToTargetToCast, CDOTABehaviorCommandMoveToPositionToCast::CDOTABehaviorCommandMoveToPositionToCast, CBaseEntity::GetAbsOrigin, CDOTALocomotor::GetCastAngle, CDOTALocomotor::IsFacingLocation, CDOTABehaviorCommandCastHere::CDOTABehaviorCommandCastHere, CDOTABehaviorAbility::CDOTABehaviorAbility, CDOTA_BaseNPC_Creature::GetDesiredDefensiveAbility, operator delete (13 total)
// callers: CDOTABehaviorMoveToNPCToAttack::Update, CDOTABehaviorIdle::Update
// strings: "Cast my offensive spell on a unit.", "Cast my offensive spell on a position.", "Cast my offensive spell with no target.", "Casting on entity", "Casting on point"
ActionResult<CDOTA_BaseNPC> *__fastcall CDOTA_BaseNPC_Creature::ConsiderUsingAbilities(
        ActionResult<CDOTA_BaseNPC> *__return_ptr retstr,
        CDOTA_BaseNPC_Creature *const this,
        Action<CDOTA_BaseNPC> *pAction,
        CDOTA_BaseNPC *pCurrentTarget)
{
  CDOTABaseAbility *DesiredOffensiveAbility; // r13
  __int64 v9; // rsi
  __int64 v10; // rdx
  int m_nCurrentCastBehavior; // eax
  CDOTA_BaseNPC *m_pDesiredNPCTarget; // r15
  CDOTABehaviorCommandMoveToTargetToCast *v14; // rbx
  vec_t z; // xmm0_4
  vec_t x; // xmm2_4
  CDOTABehaviorCommandMoveToPositionToCast *v17; // rbx
  CDOTALocomotor *v18; // rax
  const Vector *AbsOrigin; // r15
  CDOTALocomotor *v20; // rax
  float v21; // xmm1_4
  CDOTABehaviorCommandCastHere *v22; // rbx
  CDOTABehaviorAbility *v23; // rbx
  CDOTABehaviorAbility *v24; // rbx
  const Vector *flTargetAngle; // [rsp+8h] [rbp-48h]
  Vector vPosition; // [rsp+10h] [rbp-40h] BYREF

  DesiredOffensiveAbility = 0;
  CDOTA_BaseNPC_Creature::CalculateCreatureDesire(this);
  if ( (*(this->_vptr_IHandleEntity + 497))(this) == 0 )
    DesiredOffensiveAbility = CDOTA_BaseNPC_Creature::GetDesiredOffensiveAbility(this);
  if ( (*(this->_vptr_IHandleEntity + 497))(this) == 1 )
    DesiredOffensiveAbility = CDOTA_BaseNPC_Creature::GetDesiredDefensiveAbility(this);
  v10 = 1;
  if ( (this->m_iMoveCapabilities & 3) == 0 )
    v10 = BYTE3(this->m_nUnitState64.m_Value) & 1 | ((this->m_nUnitState64.m_Value & 0x200000000LL) != 0);
  if ( DesiredOffensiveAbility == 0 )
    goto LABEL_11;
  m_nCurrentCastBehavior = this->m_nCurrentCastBehavior;
  switch ( m_nCurrentCastBehavior )
  {
    case 8:
      m_pDesiredNPCTarget = this->m_pDesiredNPCTarget;
      if ( v10 != 0 )
      {
        v14 = operator new(0x170u);
        CDOTABehaviorCommandMoveToTargetToCast::CDOTABehaviorCommandMoveToTargetToCast(
          v14,
          DesiredOffensiveAbility,
          m_pDesiredNPCTarget);
        pAction->m_eventResult.m_type = ActionResultType::CONTINUE;
        pAction->m_eventResult.m_action = 0;
        pAction->m_eventResult.m_reason = 0;
        pAction->m_eventResult.m_priority = EventResultPriorityType::RESULT_NONE;
        retstr->m_type = ActionResultType::SUSPEND_FOR;
        retstr->m_action = v14;
        retstr->m_reason = "Cast my offensive spell on a unit.";
      }
      else
      {
        v23 = operator new(0x80u);
        CDOTABehaviorAbility::CDOTABehaviorAbility(v23, DesiredOffensiveAbility, m_pDesiredNPCTarget);
        pAction->m_eventResult.m_type = ActionResultType::CONTINUE;
        pAction->m_eventResult.m_action = 0;
        pAction->m_eventResult.m_reason = 0;
        pAction->m_eventResult.m_priority = EventResultPriorityType::RESULT_NONE;
        retstr->m_type = ActionResultType::SUSPEND_FOR;
        retstr->m_action = v23;
        retstr->m_reason = "Casting on entity";
      }
      break;
    case 16:
      z = this->m_vDesiredCastLocation.z;
      x = this->m_vDesiredCastLocation.x;
      vPosition.y = this->m_vDesiredCastLocation.y;
      vPosition.z = z;
      vPosition.x = x;
      if ( v10 != 0 )
      {
        v17 = operator new(0x168u);
        CDOTABehaviorCommandMoveToPositionToCast::CDOTABehaviorCommandMoveToPositionToCast(
          v17,
          DesiredOffensiveAbility,
          &vPosition);
        pAction->m_eventResult.m_type = ActionResultType::CONTINUE;
        pAction->m_eventResult.m_action = 0;
        pAction->m_eventResult.m_reason = 0;
        pAction->m_eventResult.m_priority = EventResultPriorityType::RESULT_NONE;
        retstr->m_type = ActionResultType::SUSPEND_FOR;
        retstr->m_action = v17;
        retstr->m_reason = "Cast my offensive spell on a position.";
      }
      else
      {
        v24 = operator new(0x80u);
        CDOTABehaviorAbility::CDOTABehaviorAbility(v24, DesiredOffensiveAbility, &vPosition);
        pAction->m_eventResult.m_type = ActionResultType::CONTINUE;
        pAction->m_eventResult.m_action = 0;
        pAction->m_eventResult.m_reason = 0;
        pAction->m_eventResult.m_priority = EventResultPriorityType::RESULT_NONE;
        retstr->m_type = ActionResultType::SUSPEND_FOR;
        retstr->m_action = v24;
        retstr->m_reason = "Casting on point";
      }
      break;
    case 4:
      if ( pCurrentTarget != 0 )
      {
        flTargetAngle = CBaseEntity::GetAbsOrigin(pCurrentTarget);
        v18 = (*(this->_vptr_IHandleEntity + 376))(this);
        LODWORD(flTargetAngle) = CDOTALocomotor::GetCastAngle(v18, this, flTargetAngle);
        AbsOrigin = CBaseEntity::GetAbsOrigin(pCurrentTarget);
        v20 = (*(this->_vptr_IHandleEntity + 376))(this);
        if ( !CDOTALocomotor::IsFacingLocation(v20, AbsOrigin, flTargetAngle, v21) )
          goto LABEL_11;
      }
      else
      {
        (*(this->_vptr_IHandleEntity + 376))(this, v9, v10);
      }
      v22 = operator new(0x68u);
      CDOTABehaviorCommandCastHere::CDOTABehaviorCommandCastHere(v22, DesiredOffensiveAbility);
      pAction->m_eventResult.m_type = ActionResultType::CONTINUE;
      pAction->m_eventResult.m_action = 0;
      pAction->m_eventResult.m_reason = 0;
      pAction->m_eventResult.m_priority = EventResultPriorityType::RESULT_NONE;
      retstr->m_type = ActionResultType::SUSPEND_FOR;
      retstr->m_action = v22;
      retstr->m_reason = "Cast my offensive spell with no target.";
      return retstr;
    default:
LABEL_11:
      retstr->m_type = ActionResultType::CONTINUE;
      retstr->m_action = 0;
      retstr->m_reason = 0;
      return retstr;
  }
  return retstr;
}


// CDOTA_BaseNPC_Creature::Event_Killed  (line 1451, @0x00000000029653c0, libserver.so)  // inlines: AddDeny, AddKill, AddLastHit, CUtlAbstractDelegate, CUtlDelegate, ClosurePtr, Event_Killed, FastDelegate2, Get, GetAttacker, GetInstance, NetworkStateChanged, QAngle, RandomYawVector, Set, SetPurchaseTime, SetStacksWithOtherOwners, ToDOTABaseNPC, VectorAdd, VectorMultiply, operator CBaseEntity*, operator*, operator+, operator=<float>, operator[]
// calls: CEntityHandle::operator CEntityInstance*, CDOTA_BaseNPC::Event_Killed, RollPercentage, DOTA_CreateItem, RandomFloat, AngleVectors, CBaseEntity::GetAbsOrigin, CreateItemOnPositionAsync
// globals: iLastHits, iKills, iDenies
void __fastcall CDOTA_BaseNPC_Creature::Event_Killed(
        CDOTA_BaseNPC_Creature *const this,
        const CTakeDamageInfo *const info)
{
  EHANDLE *p_m_hAttacker; // r12
  CEntityInstance *v5; // rax
  CEntityInstance *v6; // r14
  __int64 v7; // r12
  int v8; // r13d
  ItemDropData_t *v9; // rax
  ItemDropData_t *v10; // rax
  const char *pszItemName; // rdi
  int v12; // edx
  CBaseEntity *v13; // rsi
  CDOTA_Item *Item; // rax
  double v15; // xmm0_8
  double v16; // xmm1_8
  double v17; // xmm2_8
  CDOTA_Item *v18; // r15
  const Vector *AbsOrigin; // rax
  int (**vptr_IHandleEntity)(...); // rax
  float v21; // [rsp+14h] [rbp-8Ch]
  float v22; // [rsp+18h] [rbp-88h]
  float v23; // [rsp+1Ch] [rbp-84h]
  __int64 vLocation; // [rsp+20h] [rbp-80h]
  QAngle v25; // [rsp+30h] [rbp-70h] BYREF
  Vector v26; // [rsp+40h] [rbp-60h] BYREF
  _QWORD v27[10]; // [rsp+50h] [rbp-50h] BYREF
  Vector v28; // 0:xmm0_8.8,8:xmm1_4.4

  p_m_hAttacker = &info->m_hAttacker;
  v5 = CEntityHandle::operator CEntityInstance *(&info->m_hAttacker);
  if ( v5 != 0 && BYTE3(v5[7]._vptr_IHandleEntity) != 0 )
  {
    if ( (v5[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
    {
      if ( HIBYTE(v5[7].m_CScriptComponent) == this->m_iTeamNum.m_Value )
        ++iDenies;
      else
        ++iLastHits;
    }
    else
    {
      ++iKills;
    }
  }
  CDOTA_BaseNPC::Event_Killed(this, info);
  v6 = CEntityHandle::operator CEntityInstance *(p_m_hAttacker);
  if ( v6 != 0 && this->m_vItemDropData.m_Size > 0 )
  {
    v7 = 0;
    v8 = 0;
    while ( 1 )
    {
      v9 = &this->m_vItemDropData.m_Memory.m_pMemory[v7];
      if ( v9->bMustBeChampion && !this->m_bIsChampion )
        return;
      if ( RollPercentage(v9->nChance) )
      {
        v10 = &this->m_vItemDropData.m_Memory.m_pMemory[v7];
        if ( v10->nReqLevel <= this->m_iCurrentLevel.m_Value )
        {
          pszItemName = v10->pszItemName;
          if ( v10->pszItemName == 0 )
            return;
          if ( BYTE3(v6[7]._vptr_IHandleEntity) == 0
            || (v12 = (*(v6->_vptr_IHandleEntity + 414))(v6),
                pszItemName = this->m_vItemDropData.m_Memory.m_pMemory[v7].pszItemName,
                v12 == -1) )
          {
            v12 = -1;
            v13 = 0;
          }
          else
          {
            v13 = v6;
          }
          Item = DOTA_CreateItem(pszItemName, v13, v12);
          v18 = Item;
          if ( Item != 0 )
            break;
        }
      }
LABEL_6:
      ++v8;
      ++v7;
      if ( this->m_vItemDropData.m_Size <= v8 )
        return;
    }
    if ( Item->m_flPurchaseTime.m_Value == 0.0 )
    {
      if ( (*(Item->_vptr_IHandleEntity + 345))(Item, v15, v16, v17, 0.0) != 0 )
      {
LABEL_17:
        memset(v27, 0, 24);
        v25.y = RandomFloat(0.0, 360.0);
        v25.x = 0.0;
        v25.z = 0.0;
        AngleVectors(&v25, &v26, 0, 0);
        v21 = 50.0 * v26.x;
        v22 = 50.0 * v26.y;
        v23 = 50.0 * v26.z;
        AbsOrigin = CBaseEntity::GetAbsOrigin(this);
        *(&vLocation + 1) = v22 + AbsOrigin->y;
        v28.z = v23 + AbsOrigin->z;
        *&vLocation = v21 + AbsOrigin->x;
        *&v28.x = vLocation;
        CreateItemOnPositionAsync(v28, v18, v27, 0);
        goto LABEL_6;
      }
    }
    else
    {
      (*(Item->_vptr_IHandleEntity + 22))(Item, 964, 0xFFFFFFFFLL, 0xFFFFFFFFLL, v15, v16, v17, 0.0);
      vptr_IHandleEntity = v18->_vptr_IHandleEntity;
      v18->m_flPurchaseTime.m_Value = 0.0;
      if ( vptr_IHandleEntity[345](v18) != 0 )
        goto LABEL_17;
    }
    if ( (*(v18->_vptr_IHandleEntity + 355))(v18) == 0 )
      v18->m_bStackWithOtherOwners = 1;
    goto LABEL_17;
  }
}


// CDOTA_BaseNPC_Creature::GainedModifier  (line 1492, @0x0000000002949650, libserver.so)  // inlines: CDOTABuffState, FStrEq, Min<float>, _V_strcmp
// calls: CDOTA_BaseNPC::GainedModifier, CDOTA_Buff::GetCaster, CDOTA_Buff::GetName, CDOTA_Buff::Destroy
// callers: CDOTA_Unit_Nian::GainedModifier
// strings: "modifier_knockback"
// local variable allocation has failed, the output may be wrong!
void __fastcall CDOTA_BaseNPC_Creature::GainedModifier(CDOTA_BaseNPC_Creature *const this, CDOTA_Buff *pBuff)
{
  int (**vptr_CDOTA_Buff)(...); // rax
  __m128 m_flDisableResistance_low; // xmm2
  __m128 v6; // rt1
  __m128 v7; // xmm1
  float v8; // r12d
  __int64 v9; // rcx
  modifierstate *v10; // rax
  unsigned __int64 i; // rdx
  const char *Name; // rax
  _BYTE v13[20]; // [rsp+Ch] [rbp-54h] OVERLAPPED BYREF
  modifierstate StateNames[16]; // [rsp+20h] [rbp-40h] BYREF

  CDOTA_BaseNPC::GainedModifier(this, pBuff);
  if ( this != CDOTA_Buff::GetCaster(pBuff) )
  {
    vptr_CDOTA_Buff = pBuff->_vptr_CDOTA_Buff;
    StateNames[0] = modifierstate::MODIFIER_STATE_STUNNED;
    m_flDisableResistance_low = LODWORD(this->m_flDisableResistance);
    StateNames[1] = modifierstate::MODIFIER_STATE_HEXED;
    StateNames[2] = modifierstate::MODIFIER_STATE_SILENCED;
    StateNames[3] = modifierstate::MODIFIER_STATE_ROOTED;
    v6.m128_i32[0] = 1120403456;
    v7 = _mm_cmplt_ss(m_flDisableResistance_low, v6);
    StateNames[4] = modifierstate::MODIFIER_STATE_NIGHTMARED;
    v8 = COERCE_FLOAT(_mm_cvtsi128_si32(m_flDisableResistance_low));
    StateNames[5] = modifierstate::MODIFIER_STATE_DISARMED;
    StateNames[6] = modifierstate::MODIFIER_STATE_FROZEN;
    StateNames[7] = modifierstate::MODIFIER_STATE_MUTED;
    StateNames[8] = modifierstate::MODIFIER_STATE_BLIND;
    *&v13[8] = 0;
    *v13 = COERCE_UNSIGNED_INT(_mm_andnot_ps(v7, 0x42C80000u).m128_f32[0])
         | m_flDisableResistance_low.m128_i32[0] & v7.m128_i32[0];
    *&v13[12] = 0;
    vptr_CDOTA_Buff[5](pBuff, &v13[4]);
    v9 = *&v13[4];
    v10 = &StateNames[1];
    for ( i = 5; !_bittest64(&v9, i); i = *v10++ )
    {
      if ( v10 == &StateNames[8] )
        goto LABEL_6;
    }
    if ( ((*(pBuff->_vptr_CDOTA_Buff + 31))(pBuff, &StateNames[8]) * ((100.0 - *v13) / 100.0)) == 0.0 )
      CDOTA_Buff::Destroy(pBuff, 0, 0, 0);
    else
      (*(pBuff->_vptr_CDOTA_Buff + 63))(pBuff, 1);
LABEL_6:
    Name = CDOTA_Buff::GetName(pBuff);
    if ( (Name == "modifier_knockback" || strcmp(Name, "modifier_knockback") == 0) && v8 > 0.0 )
      CDOTA_Buff::Destroy(pBuff, 0, 0, 0);
  }
}


// CDOTA_BaseNPC_Creature::AddNewAbility  (line 1547, @0x000000000293e590, libserver.so)  // inlines: GetEHandle, GetEntryIndex, GetSerialNumber, Set, operator=
// calls: CDOTA_BaseNPC::GetAbilityByIndex, DOTA_CreateAbility, CDOTA_BaseNPC::SetAbilityByIndex, CUtlVectorBase<CreatureAbilityData_t, CUtlMemory<CreatureAbilityData_t, int> >::AddToTail
CDOTABaseAbility *__fastcall CDOTA_BaseNPC_Creature::AddNewAbility(
        CDOTA_BaseNPC_Creature *const this,
        const char *pszAbilityName,
        __int64 a3)
{
  int v6; // ebx
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v8; // r15
  CEntityIdentity *m_pEntity; // rdx
  int v10; // eax
  __int16 v11; // cx
  int v12; // eax

  if ( pszAbilityName == 0 )
    return 0;
  v6 = 0;
  while ( 1 )
  {
    if ( CDOTA_BaseNPC::GetAbilityByIndex(this, v6) == 0 )
    {
      Ability = DOTA_CreateAbility(pszAbilityName, this);
      v8 = Ability;
      if ( Ability != 0 )
        break;
    }
    if ( ++v6 == 24 )
      return 0;
  }
  CDOTA_BaseNPC::SetAbilityByIndex(this, Ability, v6);
  (*(v8->_vptr_IHandleEntity + 262))(v8);
  m_pEntity = v8->m_pEntity;
  if ( m_pEntity != 0 )
  {
    v10 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
    v11 = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      v11 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    *a3 = v11 | *a3 & 0x8000;
    *a3 = (v10 << 15) | *a3 & 0x7FFF;
  }
  else
  {
    *a3 = -1;
  }
  v12 = *(a3 + 36);
  if ( v12 != 0 )
  {
    if ( v12 == 1 )
    {
      this->m_bHasDefensiveAbility = 1;
      CUtlVectorBase<CreatureAbilityData_t,CUtlMemory<CreatureAbilityData_t,int>>::AddToTail(
        &this->m_vDefensiveAbilities,
        a3);
    }
    else
    {
      this->m_bHasEscapeAbility = 1;
      CUtlVectorBase<CreatureAbilityData_t,CUtlMemory<CreatureAbilityData_t,int>>::AddToTail(
        &this->m_vEscapeAbilities,
        a3);
    }
    return v8;
  }
  else
  {
    this->m_bHasOffensiveAbility = 1;
    CUtlVectorBase<CreatureAbilityData_t,CUtlMemory<CreatureAbilityData_t,int>>::AddToTail(
      &this->m_vOffensiveAbilities,
      a3);
    return v8;
  }
}


// CDOTA_BaseNPC_Creature::RemoveCreatureAbility  (line 1588, @0x0000000002923da0, libserver.so)  // inlines: FStrEq, Get, GetAbilityName, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTAAbility, _V_strcmp, operator CBaseEntity*, operator CEntityInstance*
// calls: __dynamic_cast, strcmp, CEntityHandle::operator CEntityInstance*, CUtlVectorBase<CreatureAbilityData_t, CUtlMemory<CreatureAbilityData_t, int> >::Remove, CDOTA_BaseNPC::Script_RemoveAbility
// strings: "<NoAbilityName>"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_BaseNPC_Creature::RemoveCreatureAbility(
        CDOTA_BaseNPC_Creature *const this,
        const char *pszAbilityName)
{
  int m_Size; // r13d
  int v5; // r12d
  CreatureAbilityData_t *m_pMemory; // r15
  CEntityIdentity *v7; // rdx
  CEntityIdentity *v8; // rdx
  _QWORD *v9; // rax
  const char **v10; // rax
  const char *v11; // rsi
  const char *v12; // rax
  CUtlVector<CreatureAbilityData_t,CUtlMemory<CreatureAbilityData_t,int> > *p_m_vOffensiveAbilities; // rdi
  int v14; // r15d
  CreatureAbilityData_t *v15; // r13
  CEntityInstance *v16; // rax
  _QWORD *v17; // rax
  const char **v18; // rax
  const char *v19; // rsi
  const char *v20; // rax
  int v21; // r15d
  CreatureAbilityData_t *v22; // r13
  CEntityInstance *v23; // rax
  _QWORD *v24; // rax
  const char **v25; // rax
  const char *v26; // rsi
  const char *v27; // rax
  CConcreteEntityList *v28; // [rsp+8h] [rbp-38h]

  if ( pszAbilityName != 0 )
  {
    m_Size = this->m_vOffensiveAbilities.m_Size;
    if ( m_Size > 0 )
    {
      v5 = 0;
      m_pMemory = this->m_vOffensiveAbilities.m_Memory.m_pMemory;
      v28 = CEntityHandle::gm_pEntityList;
      while ( 1 )
      {
        if ( m_pMemory->hAbility.m_Index + 2 > 1 )
        {
          v7 = v28->m_pIdentityChunks[(LOWORD(m_pMemory->hAbility.m_Index) >> 9) & 0x3F];
          if ( v7 != 0 )
          {
            v8 = &v7[m_pMemory->hAbility.m_Index & 0x1FF];
            if ( v8 != 0 && m_pMemory->hAbility.m_Index == v8->m_EHandle.m_Index && v8->m_pInstance != 0 )
            {
              v9 = __dynamic_cast(v8->m_pInstance, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTABaseAbility, 0);
              if ( v9 != 0 )
              {
                v10 = v9[111];
                v11 = "<NoAbilityName>";
                if ( v10 != 0 )
                {
                  v12 = *v10;
                  if ( v12 != 0 )
                    v11 = v12;
                }
                if ( pszAbilityName == v11 || strcmp(pszAbilityName, v11) == 0 )
                  break;
              }
            }
          }
        }
        ++v5;
        ++m_pMemory;
        if ( v5 == m_Size )
          goto LABEL_17;
      }
      p_m_vOffensiveAbilities = &this->m_vOffensiveAbilities;
      goto LABEL_28;
    }
LABEL_17:
    v14 = this->m_vDefensiveAbilities.m_Size;
    if ( v14 > 0 )
    {
      v15 = this->m_vDefensiveAbilities.m_Memory.m_pMemory;
      v5 = 0;
      while ( 1 )
      {
        v16 = CEntityHandle::operator CEntityInstance *(&v15->hAbility);
        if ( v16 != 0 )
        {
          v17 = __dynamic_cast(v16, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTABaseAbility, 0);
          if ( v17 != 0 )
          {
            v18 = v17[111];
            v19 = "<NoAbilityName>";
            if ( v18 != 0 )
            {
              v20 = *v18;
              if ( v20 != 0 )
                v19 = v20;
            }
            if ( pszAbilityName == v19 || strcmp(pszAbilityName, v19) == 0 )
              break;
          }
        }
        ++v5;
        ++v15;
        if ( v5 == v14 )
          goto LABEL_29;
      }
      p_m_vOffensiveAbilities = &this->m_vDefensiveAbilities;
      goto LABEL_28;
    }
LABEL_29:
    v21 = this->m_vEscapeAbilities.m_Size;
    if ( v21 > 0 )
    {
      v22 = this->m_vEscapeAbilities.m_Memory.m_pMemory;
      v5 = 0;
      while ( 1 )
      {
        v23 = CEntityHandle::operator CEntityInstance *(&v22->hAbility);
        if ( v23 != 0 )
        {
          v24 = __dynamic_cast(v23, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTABaseAbility, 0);
          if ( v24 != 0 )
          {
            v25 = v24[111];
            v26 = "<NoAbilityName>";
            if ( v25 != 0 )
            {
              v27 = *v25;
              if ( v27 != 0 )
                v26 = v27;
            }
            if ( pszAbilityName == v26 || strcmp(pszAbilityName, v26) == 0 )
              break;
          }
        }
        ++v5;
        ++v22;
        if ( v5 == v21 )
          return;
      }
      p_m_vOffensiveAbilities = &this->m_vEscapeAbilities;
LABEL_28:
      CUtlVectorBase<CreatureAbilityData_t,CUtlMemory<CreatureAbilityData_t,int>>::Remove(p_m_vOffensiveAbilities, v5);
      CDOTA_BaseNPC::Script_RemoveAbility(this, pszAbilityName);
    }
  }
}


// CDOTA_BaseNPC_Creature::FindTargetAoELocation  (line 1629, @0x000000000293f5b0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Purge, operator=, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTA_BaseNPC_Creature::BuildLocationList, CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::RemoveAll, CDOTA_BaseNPC_Creature::FindOptimalTargetLocation, CUtlMemory<Vector, int>::Purge, CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CDOTA_BaseNPC_Creature::GetDesiredOffensiveAbility, CDOTA_BaseNPC_Creature::GetDesiredDefensiveAbility
void __fastcall CDOTA_BaseNPC_Creature::FindTargetAoELocation(
        CDOTA_BaseNPC_Creature *const this,
        int iTeamNumber,
        int iTargetType,
        int iTargetRelationship,
        const Vector *const vBaseLocation,
        int iRangeFromBase,
        float fTimeInFuture,
        int iRadius,
        Vector *pTargetLoc,
        int *pTargetCount,
        int nMinimumRange)
{
  CUtlVector<Vector,CUtlMemory<Vector,int> > vLocations; // [rsp+20h] [rbp-50h] BYREF

  vLocations.m_Size = 0;
  vLocations.m_Memory.m_pMemory = 0;
  vLocations.m_Memory.m_nAllocationCount = 0;
  vLocations.m_Memory.m_nGrowSize = 0;
  if ( CDOTA_BaseNPC_Creature::BuildLocationList(
         this,
         iTeamNumber,
         iTargetType,
         iTargetRelationship,
         vBaseLocation,
         iRangeFromBase,
         fTimeInFuture,
         iRadius,
         &vLocations,
         nMinimumRange) > 0 )
  {
    CDOTA_BaseNPC_Creature::FindOptimalTargetLocation(this, &vLocations, iRadius, pTargetLoc, pTargetCount);
  }
  else
  {
    if ( pTargetCount != 0 )
      *pTargetCount = 0;
    if ( pTargetLoc != 0 )
      *pTargetLoc = vec3_invalid;
  }
  CUtlVectorBase<Vector,CUtlMemory<Vector,int>>::RemoveAll(&vLocations);
  if ( (vLocations.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<Vector,int>::Purge(&vLocations.m_Memory);
    if ( (vLocations.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<Vector,int>::Purge(&vLocations.m_Memory);
  }
}


// CDOTA_BaseNPC_Creature::FindTargetLinearLocation  (line 1645, @0x000000000293f6c0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, DotProduct, FastRSqrt, FastRSqrtFast, Length2DSqr, Purge, VectorAdd, VectorMultiply, VectorNormalizeFast, VectorSubtract, _mm_load_ss, _mm_rsqrt_ss, _mm_set_ss, operator*, operator+, operator+=, operator-, operator=, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTA_BaseNPC_Creature::BuildLocationList, VectorNormalize, CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::FastRemove, CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::RemoveAll, CUtlMemory<Vector, int>::Purge, CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CDOTA_BaseNPC_Creature::GetDesiredOffensiveAbility, CDOTA_BaseNPC_Creature::GetDesiredDefensiveAbility
void __fastcall CDOTA_BaseNPC_Creature::FindTargetLinearLocation(
        CDOTA_BaseNPC_Creature *const this,
        int iTeamNumber,
        int iTargetType,
        int iTargetRelationship,
        const Vector *const vBaseLocation,
        int iRangeFromBase,
        float fTimeInFuture,
        int iRadius,
        Vector *pTargetLoc,
        int *pTargetCount,
        int nMinimumRange)
{
  int m_Size; // ecx
  float v13; // xmm7_4
  float v14; // xmm6_4
  float x; // xmm8_4
  Vector *m_pMemory; // rax
  Vector *v17; // rdx
  Vector *v18; // rcx
  float v19; // xmm3_4
  float v20; // xmm4_4
  float z; // xmm2_4
  float v22; // xmm3_4
  float v23; // xmm2_4
  float v24; // xmm5_4
  float v25; // xmm1_4
  float v26; // xmm2_4
  float v27; // xmm1_4
  __int64 v28; // r14
  int v29; // ebx
  int v30; // r13d
  vec_t v31; // xmm7_4
  vec_t v32; // xmm0_4
  float v33; // xmm0_4
  float v34; // xmm1_4
  vec_t v35; // xmm1_4
  vec_t v36; // xmm0_4
  float v38; // [rsp+20h] [rbp-A0h]
  float vBestDir; // [rsp+24h] [rbp-9Ch]
  float vBestDir_4; // [rsp+28h] [rbp-98h]
  vec_t vBestDir_8; // [rsp+2Ch] [rbp-94h]
  vec_t y; // [rsp+38h] [rbp-88h]
  int iBestHit; // [rsp+3Ch] [rbp-84h]
  int iFurthest; // [rsp+40h] [rbp-80h]
  float v45; // [rsp+48h] [rbp-78h]
  float v46; // [rsp+4Ch] [rbp-74h]
  float v47; // [rsp+50h] [rbp-70h]
  float fFurthestDot; // [rsp+54h] [rbp-6Ch]
  float v49; // [rsp+58h] [rbp-68h]
  float v50; // [rsp+5Ch] [rbp-64h]
  vec_t v51; // [rsp+5Ch] [rbp-64h]
  Vector vToLocNorm; // [rsp+60h] [rbp-60h] BYREF
  CUtlVector<Vector,CUtlMemory<Vector,int> > vLocations; // [rsp+70h] [rbp-50h] BYREF

  vLocations.m_Size = 0;
  vLocations.m_Memory.m_pMemory = 0;
  vLocations.m_Memory.m_nAllocationCount = 0;
  vLocations.m_Memory.m_nGrowSize = 0;
  if ( CDOTA_BaseNPC_Creature::BuildLocationList(
         this,
         iTeamNumber,
         iTargetType,
         iTargetRelationship,
         vBaseLocation,
         iRangeFromBase,
         fTimeInFuture,
         iRadius,
         &vLocations,
         nMinimumRange) != 0 )
  {
    iBestHit = 0;
    m_Size = vLocations.m_Size;
    if ( vLocations.m_Size > 0 )
    {
      y = vec3_origin.y;
      vBestDir_8 = vec3_origin.z;
      do
      {
        v13 = y;
        v14 = vBestDir_8;
        x = vec3_origin.x;
        if ( m_Size > 0 )
        {
          m_pMemory = vLocations.m_Memory.m_pMemory;
          v17 = vLocations.m_Memory.m_pMemory + 1;
          v18 = &vLocations.m_Memory.m_pMemory[(m_Size - 1) + 1];
          while ( 1 )
          {
            v19 = m_pMemory->y;
            v20 = m_pMemory->x - vBaseLocation->x;
            z = m_pMemory->z;
            m_pMemory = v17;
            v22 = v19 - vBaseLocation->y;
            v23 = z - vBaseLocation->z;
            v24 = 1.0 / fsqrt((((v20 * v20) + 0.00000011920929) + (v22 * v22)) + (v23 * v23));
            v25 = (0.5 * v24) * (3.0 - ((((((v20 * v20) + 0.00000011920929) + (v22 * v22)) + (v23 * v23)) * v24) * v24));
            x = x + (v20 * v25);
            v13 = v13 + (v22 * v25);
            v14 = v14 + (v25 * v23);
            if ( v17 == v18 )
              break;
            ++v17;
          }
        }
        v50 = (((x * x) + 0.00000011920929) + (v13 * v13)) + (v14 * v14);
        v26 = 1.0 / fsqrt(v50);
        v27 = (0.5 * v26) * (3.0 - ((v50 * v26) * v26));
        v47 = x * v27;
        v46 = v13 * v27;
        v45 = v27 * v14;
        if ( vLocations.m_Size <= 0 )
        {
          CUtlVectorBase<Vector,CUtlMemory<Vector,int>>::FastRemove(&vLocations, -1);
        }
        else
        {
          v28 = 0;
          v29 = 0;
          fFurthestDot = 1.1;
          iFurthest = -1;
          v30 = 0;
          do
          {
            v31 = vLocations.m_Memory.m_pMemory[v28].y - vBaseLocation->y;
            v32 = vLocations.m_Memory.m_pMemory[v28].z - vBaseLocation->z;
            vToLocNorm.x = vLocations.m_Memory.m_pMemory[v28].x - vBaseLocation->x;
            v51 = vToLocNorm.x;
            v49 = v31;
            vToLocNorm.y = v31;
            vToLocNorm.z = v32;
            v33 = VectorNormalize(&vToLocNorm);
            v34 = ((vToLocNorm.x * v47) + (vToLocNorm.y * v46)) + (v45 * vToLocNorm.z);
            if ( (iRadius * iRadius) > (((v51 - ((v47 * v34) * v33)) * (v51 - ((v47 * v34) * v33)))
                                      + ((v49 - ((v46 * v34) * v33)) * (v49 - ((v46 * v34) * v33)))) )
              ++v30;
            if ( fFurthestDot > v34 )
            {
              fFurthestDot = ((vToLocNorm.x * v47) + (vToLocNorm.y * v46)) + (v45 * vToLocNorm.z);
              iFurthest = v29;
            }
            ++v29;
            ++v28;
          }
          while ( vLocations.m_Size > v29 );
          if ( v30 > iBestHit )
          {
            iBestHit = v30;
            v38 = v45;
            vBestDir_4 = v46;
            vBestDir = v47;
          }
          CUtlVectorBase<Vector,CUtlMemory<Vector,int>>::FastRemove(&vLocations, iFurthest);
        }
        m_Size = vLocations.m_Size;
      }
      while ( iBestHit < vLocations.m_Size );
    }
    if ( pTargetCount != 0 )
      *pTargetCount = iBestHit;
    if ( pTargetLoc != 0 )
    {
      v35 = ((v38 * iRangeFromBase) * 0.5) + vBaseLocation->z;
      v36 = ((iRangeFromBase * vBestDir) * 0.5) + vBaseLocation->x;
      pTargetLoc->y = ((vBestDir_4 * iRangeFromBase) * 0.5) + vBaseLocation->y;
      pTargetLoc->z = v35;
      pTargetLoc->x = v36;
    }
  }
  else
  {
    if ( pTargetCount != 0 )
      *pTargetCount = 0;
    if ( pTargetLoc != 0 )
      *pTargetLoc = vec3_invalid;
  }
  CUtlVectorBase<Vector,CUtlMemory<Vector,int>>::RemoveAll(&vLocations);
  if ( (vLocations.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<Vector,int>::Purge(&vLocations.m_Memory);
    if ( (vLocations.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<Vector,int>::Purge(&vLocations.m_Memory);
  }
}


// CDOTA_BaseNPC_Creature::BuildLocationList  (line 1718, @0x000000000293f2a0, libserver.so)  // inlines: AddToTail, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<Vector>, Element, FastSqrt, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GrowMemory, InState, IndexToIdentity, IsInvulnerable, IsMagicImmune, IsValid, Length2D, LookupEntity, Set, ToDOTABaseNPC, VectorAdd, VectorMultiply, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CBaseEntity*, operator CEntityInstance*, operator*, operator+, operator-, operator=, operator[], ~CUtlVector
// calls: FindUnitsInRadius, CEntityHandle::operator CEntityInstance*, CBaseEntity::GetAbsOrigin, IsInvisibleToBots, CDOTALocomotor::GetAverageVelocityOverTime, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, CUtlMemory<Vector, int>::Grow, _Unwind_Resume
// callers: CDOTA_BaseNPC_Creature::FindTargetAoELocation, CDOTA_BaseNPC_Creature::FindTargetLinearLocation
// globals: CEntityHandle::gm_pEntityList
__int64 __fastcall CDOTA_BaseNPC_Creature::BuildLocationList(
        CDOTA_BaseNPC_Creature *const this,
        int iTeamNumber,
        int iTargetType,
        int iTargetRelationship,
        const Vector *const vBaseLocation,
        int iRangeFromBase,
        float fTimeInFuture,
        int iRadius,
        CUtlVector<Vector,CUtlMemory<Vector,int> > *const vLocations,
        int nMinimumRange)
{
  __int64 v11; // r12
  const CBaseEntity *v12; // rax
  CDOTA_BaseNPC *v13; // rbx
  const Vector *AbsOrigin; // rax
  float x; // xmm0_4
  float y; // xmm1_4
  unsigned __int64 m_Value; // rax
  __int64 v18; // r12
  int v19; // ebx
  CHandle<CBaseEntity> *v20; // rdx
  uint32 m_Index; // eax
  __int16 v22; // cx
  CEntityIdentity *v23; // rdx
  CEntityIdentity *v24; // rdx
  const CBaseEntity *m_pInstance; // r14
  CDOTALocomotor *v26; // rax
  float v27; // xmm1_4
  float v28; // xmm1_4
  const Vector *v29; // rax
  __int64 m_Size; // r14
  float v31; // xmm2_4
  float v32; // xmm3_4
  float v33; // xmm1_4
  int v34; // eax
  Vector *v35; // rax
  bool v36; // cc
  unsigned int v37; // ebx
  float v40; // [rsp+28h] [rbp-78h]
  float v41; // [rsp+28h] [rbp-78h]
  float v42; // [rsp+2Ch] [rbp-74h]
  float v43; // [rsp+30h] [rbp-70h]
  float v44; // [rsp+30h] [rbp-70h]
  unsigned __int64 v45; // [rsp+40h] [rbp-60h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hTargets; // [rsp+50h] [rbp-50h] BYREF

  hTargets.m_Size = 0;
  hTargets.m_Memory.m_pMemory = 0;
  hTargets.m_Memory.m_nAllocationCount = 0;
  hTargets.m_Memory.m_nGrowSize = 0;
  FindUnitsInRadius(
    iTeamNumber,
    vBaseLocation,
    0,
    (iRadius + iRangeFromBase),
    &hTargets,
    iTargetRelationship,
    iTargetType,
    128,
    0,
    0);
  if ( hTargets.m_Size > 0 )
  {
    v11 = 0;
    do
    {
      v12 = CEntityHandle::operator CEntityInstance *(&hTargets.m_Memory.m_pMemory[v11]);
      v13 = v12;
      if ( v12 != 0 && v12->m_bIsDOTANPC )
      {
        AbsOrigin = CBaseEntity::GetAbsOrigin(v12);
        x = AbsOrigin->x;
        y = AbsOrigin->y;
        m_Value = v13->m_nUnitState64.m_Value;
        v43 = fsqrt(((x - vBaseLocation->x) * (x - vBaseLocation->x)) + ((y - vBaseLocation->y) * (y - vBaseLocation->y)));
        if ( (m_Value & 0x200) != 0
          || v13->m_bIsWaitingToSpawn.m_Value
          || (m_Value & 0x100) != 0
          || IsInvisibleToBots(v13)
          || v43 < nMinimumRange )
        {
          hTargets.m_Memory.m_pMemory[v11].m_Index = -1;
        }
      }
      ++v11;
    }
    while ( hTargets.m_Size > v11 );
    if ( hTargets.m_Size > 0 )
    {
      v18 = 0;
      v19 = 0;
      do
      {
        while ( 1 )
        {
          v20 = &hTargets.m_Memory.m_pMemory[v18];
          m_Index = hTargets.m_Memory.m_pMemory[v18].m_Index;
          if ( m_Index + 2 > 1 )
          {
            v22 = v20->m_Index;
            v23 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v20->m_Index) >> 9) & 0x3F];
            if ( v23 != 0 )
            {
              v24 = &v23[v22 & 0x1FF];
              if ( v24 != 0 && m_Index == v24->m_EHandle.m_Index )
              {
                m_pInstance = v24->m_pInstance;
                if ( v24->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
                {
                  v26 = (*(m_pInstance->_vptr_IHandleEntity + 376))(v24->m_pInstance);
                  v45 = CDOTALocomotor::GetAverageVelocityOverTime(v26, 2.0, v27).m128i_u64[0];
                  v40 = v28 * fTimeInFuture;
                  v29 = CBaseEntity::GetAbsOrigin(m_pInstance);
                  m_Size = vLocations->m_Size;
                  v31 = (*&v45 * fTimeInFuture) + v29->x;
                  v32 = (*(&v45 + 1) * fTimeInFuture) + v29->y;
                  v33 = v40 + v29->z;
                  v34 = vLocations->m_Size;
                  v44 = v31;
                  v42 = v32;
                  v41 = v33;
                  if ( m_Size == vLocations->m_Memory.m_nAllocationCount )
                  {
                    CUtlMemory<Vector,int>::Grow(&vLocations->m_Memory, 1);
                    v34 = vLocations->m_Size;
                  }
                  vLocations->m_Size = v34 + 1;
                  v35 = &vLocations->m_Memory.m_pMemory[m_Size];
                  if ( v35 != 0 )
                    break;
                }
              }
            }
          }
          ++v19;
          ++v18;
          if ( hTargets.m_Size <= v19 )
            goto LABEL_25;
        }
        ++v19;
        ++v18;
        v35->x = v44;
        v36 = hTargets.m_Size <= v19;
        v35->y = v42;
        v35->z = v41;
      }
      while ( !v36 );
    }
  }
LABEL_25:
  v37 = vLocations->m_Size;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hTargets);
  return v37;
}


// CDOTA_BaseNPC_Creature::FindOptimalTargetLocation  (line 1759, @0x00000000029185e0, libserver.so)  // inlines: Length2DSqr, VectorSubtract, operator+=, operator-, operator/=, operator=
// calls: CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::FastRemove
// callers: CDOTA_BaseNPC_Creature::FindTargetAoELocation
void __fastcall CDOTA_BaseNPC_Creature::FindOptimalTargetLocation(
        CDOTA_BaseNPC_Creature *const this,
        CUtlVector<Vector,CUtlMemory<Vector,int> > *const vLocations,
        int iRadius,
        Vector *pTargetLoc,
        int *pTargetCount)
{
  int v5; // r15d
  float v7; // xmm5_4
  int m_Size; // edi
  float x; // xmm2_4
  int v12; // esi
  float v13; // xmm4_4
  float v14; // xmm0_4
  Vector *m_pMemory; // rax
  Vector *v16; // rax
  int v17; // edx
  int v18; // ecx
  float v19; // xmm7_4
  float v20; // xmm3_4
  float v21; // xmm2_4
  float v22; // xmm4_4
  float v23; // xmm6_4
  float v24; // xmm0_4
  vec_t y; // [rsp+0h] [rbp-48h]
  vec_t z; // [rsp+4h] [rbp-44h]
  vec_t vBestLoc; // [rsp+8h] [rbp-40h]
  vec_t vBestLoc_4; // [rsp+Ch] [rbp-3Ch]
  vec_t vBestLoc_8; // [rsp+10h] [rbp-38h]
  float v30; // [rsp+14h] [rbp-34h]

  v5 = 0;
  v7 = (iRadius * iRadius);
  m_Size = vLocations->m_Size;
  vBestLoc = vec3_invalid.x;
  y = vec3_invalid.y;
  z = vec3_invalid.z;
  if ( vLocations->m_Size > 0 )
  {
    vBestLoc_8 = vec3_origin.y;
    vBestLoc_4 = vec3_origin.z;
    do
    {
      x = vec3_origin.x;
      v12 = -1;
      v13 = vBestLoc_8;
      v14 = vBestLoc_4;
      if ( m_Size > 0 )
      {
        m_pMemory = vLocations->m_Memory.m_pMemory;
        do
        {
          x = x + m_pMemory->x;
          ++m_pMemory;
          v13 = v13 + m_pMemory[-1].y;
          v14 = v14 + m_pMemory[-1].z;
        }
        while ( m_pMemory != &vLocations->m_Memory.m_pMemory[(m_Size - 1) + 1] );
        v16 = vLocations->m_Memory.m_pMemory;
        v17 = 0;
        v12 = -1;
        v18 = 0;
        v19 = 1.0 / m_Size;
        v20 = 0.0;
        v21 = x * v19;
        v22 = v13 * v19;
        v23 = v14 * v19;
        do
        {
          v24 = ((v16->x - v21) * (v16->x - v21)) + ((v16->y - v22) * (v16->y - v22));
          if ( v7 > v24 )
            ++v18;
          if ( v24 >= v20 )
          {
            v20 = ((v16->x - v21) * (v16->x - v21)) + ((v16->y - v22) * (v16->y - v22));
            v12 = v17;
          }
          ++v17;
          ++v16;
        }
        while ( v17 != m_Size );
        if ( v18 > v5 )
        {
          z = v23;
          v5 = v18;
          y = v22;
          vBestLoc = v21;
        }
      }
      v30 = v7;
      CUtlVectorBase<Vector,CUtlMemory<Vector,int>>::FastRemove(vLocations, v12);
      m_Size = vLocations->m_Size;
      v7 = v30;
    }
    while ( v5 < vLocations->m_Size );
  }
  if ( pTargetCount != 0 )
    *pTargetCount = v5;
  if ( pTargetLoc != 0 )
  {
    pTargetLoc->x = vBestLoc;
    pTargetLoc->y = y;
    pTargetLoc->z = z;
  }
}


// CDOTA_BaseNPC_Creature::PrecacheEconItem  (line 1808, @0x000000000290c1c0, libserver.so)  // inlines: GetStaticDataForItemByDefIndex
// calls: ItemSystem, CEconItemSchema::GetItemDefinition, LoggingSystem_IsChannelEnabled, LoggingSystem_Log
// callers: CDOTA_BaseNPC_Creature::Precache
// strings: "CDOTA_BaseNPC_Creature::PrecacheEconItem Cannot find item defintion for index %u"
void __fastcall CDOTA_BaseNPC_Creature::PrecacheEconItem(
        CDOTA_BaseNPC_Creature *const this,
        item_definition_index_t nItemDef,
        const CEntityPrecacheContext *pContext)
{
  CEconItemSystem *v5; // rax
  const CEconItemDefinition *ItemDefinition; // rax

  v5 = ItemSystem();
  ItemDefinition = CEconItemSchema::GetItemDefinition(&v5->m_itemSchema, nItemDef, 0);
  if ( ItemDefinition != 0 )
  {
    (*(ItemDefinition->_vptr_IEconItemDefinition + 25))(ItemDefinition, pContext);
  }
  else if ( LoggingSystem_IsChannelEnabled(LOG_SERVER, 2) != 0 )
  {
    LoggingSystem_Log(
      LOG_SERVER,
      2,
      "CDOTA_BaseNPC_Creature::PrecacheEconItem Cannot find item defintion for index %u",
      nItemDef.m_Data);
  }
}


// CDOTA_BaseNPC_Creature::AttachEconItem  (line 1821, @0x000000000290c240, libserver.so)
// calls: CBaseEntity::GetAbsAngles, CBaseEntity::GetAbsOrigin, ItemGeneration, CItemGeneration::GenerateItemFromDefIndex
// callers: CDOTA_BaseNPC_Creature::Spawn
void __fastcall CDOTA_BaseNPC_Creature::AttachEconItem(
        CDOTA_BaseNPC_Creature *const this,
        item_definition_index_t nItemDef)
{
  const QAngle *AbsAngles; // r14
  const Vector *AbsOrigin; // r13
  CItemGeneration *v6; // rax
  CBaseEntity *ItemFromDefIndex; // rax

  AbsAngles = CBaseEntity::GetAbsAngles(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(this);
  v6 = ItemGeneration();
  ItemFromDefIndex = CItemGeneration::GenerateItemFromDefIndex(v6, nItemDef, AbsOrigin, AbsAngles, 0);
  if ( ItemFromDefIndex != 0 )
    (*(ItemFromDefIndex->_vptr_IHandleEntity + 262))(ItemFromDefIndex, this);
}


