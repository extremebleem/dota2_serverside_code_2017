
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// DOTA_ExecuteOrders  (line 27, @0x00000000025440b0, libserver.so)  // inlines: AddToTail, CEntityHandle, CUtlMemory, CUtlVector, CUtlVectorBase, CVProfScope, CVariantBase, ClearHolding, CopyConstruct<CEntityIndex>, CopyConstruct<Vector>, Count, CreateEvent, CreateTableFromKeyValues, DOTAGameRules, Element, FStrEq, FastSqrt, Free, Get, GetAbilityData, GetAbilityName, GetAbilityTargetFlags, GetBinaryObject, GetBool, GetContainedItem, GetEHandle, GetEntryIndex, GetForceAttackTarget, GetGameModeEntity, GetGameTime, GetGlyphCooldown, GetHandleEntity, GetInstance, GetInt, GetOwnerEntity, GetParent, GetPlayerOwnerID, GetRadarCooldown, GetRaw, GetSerialNumber, GetTeamNumber, GetUnitName, GrowMemory, HasAttackCapability, HasExecuteOrderFilter, HasFlyMovementCapability, HasScriptFilter, InState, IndexToIdentity, Init, IsClone, IsConsideredHero, IsControllableByPlayer, IsEnabled, IsGamePaused, IsInvulnerable, IsPositionValidForMovement, IsShop, IsSpecialIllusion, IsSpecialIllusionWithUltimate, IsTempestDouble, IsUnselectable, Length2D, LookupEntity, NetworkStateChanged, NormalizeInPlace, Normalized, QAngle, QueueLength, RandomYawVector, Rules_DisableAllAI, RunExecuteOrderFilter, RunScriptFilter, Set, SetBool, SetIdleAcquire, SetInt, SetRaw, SetTarget, SetUnit, State_Get, State_IsBefore, State_IsBeforePreGame, State_Order, String, ToCStr, ToDOTABaseNPC, ToDOTABaseNPCHero, ToDOTAItem, ToggleAutoCast, VectorAdd, VectorMultiply, VectorSubtract, _V_strcmp, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, entindex, operator CBaseEntity*, operator CDOTA_Item*, operator!=, operator*, operator+, operator+=, operator-, operator<, operator=, operator=<bool>, operator==, operator[], ~CCopyableUtlVector, ~CUnitOrders, ~CUtlVector, ~CVProfScope, ~CVariantBase
// calls: DOTA_ReportInvalidOrder, CDOTA_PlayerResource::GetPlayer, CDOTAPlayer::GetAssignedHero, UTIL_EntityByIndex, __dynamic_cast, CVProfile::EnterScope, CVProfile::ExitScope, KeyValues::operator new, KeyValues::KeyValues, KeyValues::SetInt, KeyValues::AddKey, CFmtStrN<256, false>::CFmtStrN (124 total)
// callers: CDOTA_Modifier_Lesser_NightCrawler_Pounce::UpdateHorizontalMotion, Script_ExecuteOrderFromTable, CDOTAGamerules::ClientDisconnected, CDOTA_Modifier_ForestTrollHighPriest_HealAutocast::OnIntervalThink, CDOTAPlayer::ExecuteOrders, CDOTA_Bot::ExecuteOrder, CDOTA_Bot::ConsiderCourierUsage, CDOTA_Bot::Think, CDOTA_TeamCommander::UpdateCourierBoostUsage, CDOTA_TeamCommander::OnDeath, CDOTA_Bot_Script::Action_LevelAbility, CDOTA_Bot_Script::Action_SwapItems (45 total)
// strings: "DOTA_ExecuteOrders", "ExecuteOrderData", "issuer_player_id_const", "sequence_number_const", "order_type", "entindex_target" (25 total)
// globals: g_bSendHudErrorToClient, DOTAGameRules_Common::State_Order(DOTA_GameState)::STATE_ORDERING, g_nPlayerIndex, g_bIsClientOrdered, g_DOTAGameManager, g_GridNav, jpt_2544E9E, `guard variable for'DOTA_ExecuteOrders(CUnitOrders &,bool,bool,bool)::dota_suppress_invalid_orders (13 total)
void __fastcall DOTA_ExecuteOrders(
        CUnitOrders *const orders,
        bool bIsClientOrdered,
        bool bForceThroughPseudoQueue,
        bool bUpdateImmediately)
{
  int m_enabled; // edi
  CGameRules *v6; // rdx
  unsigned __int16 v7; // cx
  int v8; // edi
  int v9; // eax
  CEntityIdentity *v10; // rcx
  CEntityIdentity *v11; // rcx
  unsigned int v12; // eax
  int v13; // edx
  unsigned int m_nIssuerPlayerIndex; // r13d
  CDOTAPlayer *Player; // rax
  CBaseEntity *v16; // rax
  CDOTA_Item *v17; // rax
  CDOTA_Item *v18; // rbx
  CEntityInstance *m_pInstance; // rax
  KeyValues *v20; // r14
  __int64 i; // rbx
  int32 m_Data; // r12d
  float v23; // xmm1_4
  float v24; // xmm1_4
  float v25; // xmm1_4
  IScriptVM *v26; // r12
  char v27; // r12
  char v28; // bl
  KeyValues *Key; // rax
  KeyValues *j; // rbx
  CEntityIndex *v31; // rax
  int Int; // eax
  __int64 m_Size; // r12
  int32 v34; // r13d
  int v35; // eax
  int v36; // eax
  int32 v37; // edx
  int32 v38; // eax
  int32 v39; // edx
  int32 v40; // eax
  _BOOL4 m_bQueue; // edx
  float v42; // xmm1_4
  float v43; // xmm1_4
  float v44; // xmm1_4
  __int64 (__fastcall *v45)(IScriptVM *, HSCRIPT, const char *, _QWORD, _QWORD); // r12
  const char *Name; // rax
  __int64 v47; // r12
  const CGameSceneNode *m_pParent; // rdi
  CDOTA_BaseNPC *OwnerEntity; // rax
  int ItemSlotInInventory; // eax
  __int64 v51; // rax
  __int64 v52; // rdx
  int v53; // eax
  __int64 v54; // rax
  int v55; // ecx
  CBaseEntity *v56; // rax
  _BYTE *v57; // r12
  char v58; // al
  const char **p_m_pszAbilityName; // rax
  const char *v60; // rax
  const char *v61; // rsi
  CDOTA_BinaryObject *v62; // rdi
  int m_Value; // edx
  CEntityInstance *v64; // rax
  int v65; // eax
  __int64 v66; // r13
  __int64 v67; // r12
  int m_nAllocationCount; // eax
  char v69; // cl
  int v70; // edx
  Vector *v71; // rax
  CBaseEntity *v72; // rax
  CBaseEntity *v73; // r12
  const Vector *AbsOrigin; // rax
  CBaseEntity *v75; // rax
  const Vector *v76; // rax
  const Vector *v77; // rax
  int v78; // xmm1_4
  int v79; // xmm0_4
  __int64 v80; // r13
  int v81; // r12d
  CBaseEntity *v82; // rax
  const Vector *v83; // r14
  const Vector *v84; // rax
  vec_t v85; // xmm1_4
  vec_t v86; // xmm0_4
  float v87; // xmm0_4
  Vector *v88; // rax
  vec_t v89; // xmm2_4
  vec_t v90; // xmm1_4
  __int64 v91; // r14
  int v92; // eax
  CEntityIndex *m_pMemory; // rax
  CBaseEntity *v94; // rax
  CBaseEntity *v95; // r12
  bool m_bIsDOTANPC; // r13
  CUtlLinkedList<CDamageModifier*,int,false,int,CUtlMemory<UtlLinkedListElem_t<CDamageModifier*,int>,int> >::ListElem_t *m_pElements; // rdx
  char v98; // cl
  unsigned __int64 v99; // rdx
  int v100; // esi
  CDOTAGCServerSystem *v101; // rax
  int v102; // esi
  __int64 v103; // rax
  CEntityInstance *v104; // rax
  CDOTA_UnitInventory *Inventory; // rax
  CDOTAPlayer *v106; // rax
  const char *v107; // rax
  int v108; // eax
  const char *m_pAsString; // rdx
  const char **v110; // rax
  const char *v111; // rax
  const char *v112; // rsi
  DOTAAbilityData_t *m_pAbilityData; // rax
  const char *m_pszAbilityName; // rsi
  bool v115; // r13
  bool v116; // r13
  char v117; // cl
  unsigned int m_pDesc; // edx
  unsigned int m_pDesc_high; // eax
  int v120; // eax
  const CUnitOrders *QueuedOrder; // rax
  char v122; // dl
  unsigned int v123; // edx
  unsigned int v124; // eax
  int v125; // eax
  CDOTAPlayer *v126; // rax
  CDOTAPlayer *v127; // r13
  char v128; // r13
  bool v129; // dl
  bool v130; // al
  CEntityIdentity *m_pEntity; // rdx
  int v132; // eax
  __int16 v133; // cx
  CEntityIdentity *v134; // rdx
  int v135; // eax
  __int16 v136; // cx
  const Vector *v137; // rax
  CEntityIdentity *v138; // rdx
  int v139; // eax
  __int16 v140; // cx
  ConVar *v141; // rax
  ConVar *v142; // r13
  CEntityIndex v143; // eax
  CEntityIndex v144; // eax
  unsigned int v145; // eax
  const char **v146; // rax
  const char *v147; // rax
  const char *v148; // rdx
  __int64 v149; // rax
  Behavior<CDOTA_BaseNPC> *v150; // rax
  float v151; // xmm1_4
  const char **v152; // rdx
  const char *v153; // rdx
  const char *v154; // rsi
  const Vector *v155; // r13
  const Vector *v156; // rax
  __m128i v157; // xmm0
  Vector *v158; // rax
  CEntityHandle v159; // xmm2_4
  float v160; // xmm1_4
  CEntityHandle v161; // xmm1_4
  Vector *v162; // rax
  CEntityHandle v163; // xmm2_4
  float v164; // xmm1_4
  CEntityHandle v165; // xmm1_4
  DOTA_INVALID_ORDERS v166; // eax
  bool v167; // r13
  int v168; // r13d
  const char *v169; // rax
  DOTA_INVALID_ORDERS v170; // eax
  HSCRIPT m_hScope; // rcx
  CEntityInstance *v172; // rax
  __int64 v173; // rax
  char v174; // cl
  CBaseEntity *v175; // rax
  CDOTA_BaseNPC *v176; // r12
  CDOTA_BaseNPC *v177; // rax
  uint32 m_iUnitType; // eax
  bool v179; // r12
  CBaseEntity *v180; // rax
  CDOTA_BaseNPC *v181; // r12
  const char **v182; // rax
  const char *v183; // rsi
  const char *v184; // rax
  int SpecialAbilityIndex; // eax
  CDOTAPlayer *v186; // r12
  CDOTA_BaseNPC *Caster; // rax
  unsigned __int64 v188; // rcx
  CDOTAGCServerSystem *v189; // rax
  bool IsCompetitiveGame; // al
  int v191; // esi
  __int64 v192; // rdx
  float v193; // xmm0_4
  bool v194; // r13
  __int64 v195; // rdx
  float v196; // xmm0_4
  int v197; // r13d
  float v198; // xmm0_4
  IHandleEntity *HandleEntity; // rax
  int v200; // r13d
  CEntityInstance *v201; // rax
  float AttackRange; // xmm0_4
  float v203; // xmm1_4
  __int64 (__fastcall *v204)(CDOTA_Item *, const Vector *); // r13
  const Vector *v205; // rax
  __int64 (__fastcall *v206)(CDOTA_Item *, const Vector *); // r12
  const Vector *v207; // rax
  const char **v208; // rax
  const char *v209; // rax
  const char *v210; // rsi
  DOTAAbilityData_t *v211; // rax
  const char *v212; // rdi
  DOTAAbilityData_t *v213; // rax
  const char *v214; // rdi
  CEntityInstance *v215; // rax
  int v216; // ebx
  const char *v217; // rax
  DOTA_INVALID_ORDERS v218; // eax
  Vector v219; // [rsp+0h] [rbp-3E0h]
  bool bAutoattackAfterSpell; // [rsp+2Ch] [rbp-3B4h]
  float bAutoattackAfterSpella; // [rsp+2Ch] [rbp-3B4h]
  __int64 v222; // [rsp+50h] [rbp-390h]
  char autoattackType; // [rsp+64h] [rbp-37Ch]
  AutoattackUnitType_t autoattackTypea; // [rsp+64h] [rbp-37Ch]
  AutoattackUnitType_t autoattackTypeb; // [rsp+64h] [rbp-37Ch]
  __int64 v226; // [rsp+68h] [rbp-378h]
  char bNeedAnchorPosition; // [rsp+78h] [rbp-368h]
  float z; // [rsp+88h] [rbp-358h]
  unsigned int v229; // [rsp+94h] [rbp-34Ch]
  unsigned int v230; // [rsp+98h] [rbp-348h]
  float bAutoAttackAlways; // [rsp+9Ch] [rbp-344h]
  char bAutoAttackAlwaysa; // [rsp+9Ch] [rbp-344h]
  char bAutoAttackAlwaysb; // [rsp+9Ch] [rbp-344h]
  float x; // [rsp+A0h] [rbp-340h]
  void (__fastcall *v235)(ConVar *, char *, _QWORD); // [rsp+A0h] [rbp-340h]
  int v236[2]; // [rsp+A8h] [rbp-338h]
  CDOTAPlayer *v237; // [rsp+A8h] [rbp-338h]
  int32 v238; // [rsp+A8h] [rbp-338h]
  CBaseEntity *pTargetTree; // [rsp+B0h] [rbp-330h]
  CBaseEntity *v240; // [rsp+B8h] [rbp-328h]
  Vector *vec; // [rsp+C0h] [rbp-320h]
  CDOTA_Item_Rune *pRuneItem; // [rsp+C8h] [rbp-318h]
  CDOTA_BaseNPC *pNPCHoldingItem; // [rsp+D0h] [rbp-310h]
  const KeyValues *pAbilityKV; // [rsp+D8h] [rbp-308h]
  unsigned int v245; // [rsp+E0h] [rbp-300h]
  bool v246; // [rsp+E5h] [rbp-2FBh]
  bool bSellingOrder; // [rsp+E6h] [rbp-2FAh]
  bool bUsePseudoFormation; // [rsp+E7h] [rbp-2F9h]
  CBaseEntity *pTargetEntity; // [rsp+E8h] [rbp-2F8h]
  CDOTA_Item_Physical *pPhysicalItem; // [rsp+F0h] [rbp-2F0h]
  bool bInstantOrder; // [rsp+F8h] [rbp-2E8h]
  int v252; // [rsp+FCh] [rbp-2E4h]
  CDOTA_UnitInventory *pInventory; // [rsp+100h] [rbp-2E0h]
  CEntityInstance *bAbilityOwnershipValidation; // [rsp+108h] [rbp-2D8h]
  int bAbilityOwnershipValidationa; // [rsp+108h] [rbp-2D8h]
  int bAbilityOwnershipValidatione; // [rsp+108h] [rbp-2D8h]
  bool bAbilityOwnershipValidationb; // [rsp+108h] [rbp-2D8h]
  CDOTA_Item *bAbilityOwnershipValidationc; // [rsp+108h] [rbp-2D8h]
  CDOTA_BaseNPC_Hero *bAbilityOwnershipValidationd; // [rsp+108h] [rbp-2D8h]
  CDOTA_BaseNPC *pTargetNPCa; // [rsp+110h] [rbp-2D0h]
  unsigned int v262; // [rsp+118h] [rbp-2C8h]
  bool VProf_29; // [rsp+11Fh] [rbp-2C1h]
  KeyValues *pFilterKeys; // [rsp+120h] [rbp-2C0h]
  CDOTA_Item *pFilterKeysa; // [rsp+120h] [rbp-2C0h]
  unsigned int nOrderType; // [rsp+128h] [rbp-2B8h]
  CEntityHandle v270; // [rsp+130h] [rbp-2B0h] BYREF
  CEntityHandle v271[20]; // [rsp+140h] [rbp-2A0h] BYREF
  __int64 v272; // [rsp+190h] [rbp-250h]
  vec_t vPos; // [rsp+198h] [rbp-248h]
  QAngle angles; // [rsp+1A0h] [rbp-240h] BYREF
  Vector forward; // [rsp+1B0h] [rbp-230h] BYREF
  Vector v276; // [rsp+1C0h] [rbp-220h] BYREF
  HSCRIPT hTable; // [rsp+1D0h] [rbp-210h] BYREF
  __int16 v278; // [rsp+1D8h] [rbp-208h]
  __int16 v279; // [rsp+1DAh] [rbp-206h]
  CUtlVector<Vector,CUtlMemory<Vector,int> > positionOffsets; // [rsp+1E0h] [rbp-200h] BYREF
  CUnitOrders ordersForThisUnit; // [rsp+200h] [rbp-1E0h] BYREF
  unsigned int v282; // [rsp+25Ch] [rbp-184h]
  vec_t v283; // [rsp+26Ch] [rbp-174h]
  vec_t y; // [rsp+270h] [rbp-170h]
  vec_t v285; // [rsp+274h] [rbp-16Ch]
  int v286; // [rsp+288h] [rbp-158h]
  int v287; // [rsp+28Ch] [rbp-154h]
  CFmtStrN<256,false> v288; // [rsp+290h] [rbp-150h] BYREF
  unsigned __int64 v289; // [rsp+3A8h] [rbp-38h]
  Vector v290; // 0:xmm0_8.8,8:xmm1_4.4

  v289 = __readfsqword(0x28u);
  m_enabled = g_VProfCurrentProfile.m_enabled;
  VProf_29 = m_enabled != 0;
  if ( m_enabled != 0 )
    CVProfile::EnterScope(&g_VProfCurrentProfile, "DOTA_ExecuteOrders", 0, "NPCs", 0, 4);
  g_bSendHudErrorToClient = 1;
  v6 = g_pGameRules;
  if ( g_pGameRules != 0 )
  {
    if ( *&g_pGameRules[6].m_szQuestName[72] == -1 )
    {
      v7 = 0x7FFF;
      v8 = 0x7FFF;
    }
    else
    {
      v7 = *&g_pGameRules[6].m_szQuestName[72] & 0x7FFF;
      v8 = v7;
    }
    v9 = (*&g_pGameRules[6].m_szQuestName[72] >> 15 << 15) | v7 & 0x7FFF;
    ordersForThisUnit.m_nIssuerPlayerIndex = v9;
    if ( (v9 + 2) > 1 )
    {
      v10 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v8 >> 9];
      if ( v10 != 0 )
      {
        v11 = &v10[v8 & 0x1FF];
        if ( v11 != 0 && v9 == v11->m_EHandle.m_Index )
        {
          m_pInstance = v11->m_pInstance;
          bAbilityOwnershipValidation = v11->m_pInstance;
          if ( v11->m_pInstance != 0 && m_pInstance[20]._vptr_IHandleEntity != 0 && m_pInstance[20].m_pEntity != 0 )
          {
            pFilterKeys = KeyValues::operator new(0x14u);
            KeyValues::KeyValues(pFilterKeys, "ExecuteOrderData");
            KeyValues::SetInt(pFilterKeys, "issuer_player_id_const", orders->m_nIssuerPlayerIndex);
            KeyValues::SetInt(pFilterKeys, "sequence_number_const", orders->m_nOrderSequenceNumber);
            v20 = KeyValues::AddKey(pFilterKeys, "units");
            for ( i = 0; orders->m_nUnits.m_Size > i; ++i )
            {
              m_Data = orders->m_nUnits.m_Memory.m_pMemory[i].m_Data;
              CFmtStrN<256,false>::CFmtStrN(&v288, "%d", i);
              KeyValues::SetInt(v20, v288.m_szBuf, m_Data);
            }
            KeyValues::SetInt(pFilterKeys, "order_type", orders->m_nOrderType);
            KeyValues::SetInt(pFilterKeys, "entindex_target", orders->m_nTargetIndex.m_Data);
            KeyValues::SetInt(pFilterKeys, "entindex_ability", orders->m_nAbilityIndex.m_Data);
            KeyValues::SetInt(pFilterKeys, "queue", orders->m_bQueue);
            KeyValues::SetFloat(pFilterKeys, "position_x", v23);
            KeyValues::SetFloat(pFilterKeys, "position_y", v24);
            KeyValues::SetFloat(pFilterKeys, "position_z", v25);
            if ( bAbilityOwnershipValidation[20]._vptr_IHandleEntity == 0
              || bAbilityOwnershipValidation[20].m_pEntity == 0
              || pFilterKeys == 0 )
            {
              goto LABEL_76;
            }
            v278 = 0;
            v279 = 0;
            hTable = 0;
            v26 = g_pScriptVM;
            (*(*g_pScriptVM + 264LL))(g_pScriptVM, &hTable);
            if ( hTable != 0 )
              Recursive_ConvertKeyValuesToTable(pFilterKeys, v26, hTable);
            ordersForThisUnit.m_nUnits.m_Size = 0;
            *&ordersForThisUnit.m_nIssuerPlayerIndex = 0;
            LODWORD(v219.x) = 1;
            (*(*g_pScriptVM + 160LL))(
              g_pScriptVM,
              bAbilityOwnershipValidation[20]._vptr_IHandleEntity,
              &hTable,
              1,
              &ordersForThisUnit,
              bAbilityOwnershipValidation[20].m_pEntity);
            v27 = 0;
            if ( LOWORD(ordersForThisUnit.m_nUnits.m_Size) == 6 && LOBYTE(ordersForThisUnit.m_nIssuerPlayerIndex) != 0 )
            {
              v45 = *(*g_pScriptVM + 304LL);
              Name = KeyValues::GetName(pFilterKeys);
              v47 = v45(g_pScriptVM, hTable, Name, 0, 0);
              if ( v47 != 0 )
              {
                KeyValues::~KeyValues(pFilterKeys);
                KeyValues::operator delete(pFilterKeys);
                pFilterKeys = v47;
              }
              v27 = 1;
            }
            (*(*g_pScriptVM + 344LL))(g_pScriptVM, &hTable);
            if ( (ordersForThisUnit.m_nUnits.m_Size & 0x10000) != 0 )
            {
              (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, *&ordersForThisUnit.m_nIssuerPlayerIndex);
              HIWORD(ordersForThisUnit.m_nUnits.m_Size) &= ~1u;
            }
            *&ordersForThisUnit.m_nIssuerPlayerIndex = 0;
            LOWORD(ordersForThisUnit.m_nUnits.m_Size) = 0;
            if ( (v279 & 1) != 0 )
              (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, hTable);
            if ( v27 == 0 )
            {
              v28 = 0;
            }
            else
            {
LABEL_76:
              CUtlVectorBase<CEntityIndex,CUtlMemory<CEntityIndex,int>>::RemoveAll(&orders->m_nUnits);
              Key = KeyValues::FindKey(pFilterKeys, "units", 0);
              for ( j = KeyValues::GetFirstSubKey(Key); j != 0; j = KeyValues::GetNextKey(j) )
              {
                Int = KeyValues::GetInt(j, 0, 0);
                m_Size = orders->m_nUnits.m_Size;
                v34 = Int;
                v35 = orders->m_nUnits.m_Size;
                if ( m_Size == orders->m_nUnits.m_Memory.m_nAllocationCount )
                {
                  CUtlMemory<CEntityIndex,int>::Grow(&orders->m_nUnits.m_Memory, 1);
                  v35 = orders->m_nUnits.m_Size;
                }
                orders->m_nUnits.m_Size = v35 + 1;
                v31 = &orders->m_nUnits.m_Memory.m_pMemory[m_Size];
                if ( v31 != 0 )
                  v31->m_Data = v34;
              }
              v36 = KeyValues::GetInt(pFilterKeys, "order_type", orders->m_nOrderType);
              v37 = orders->m_nTargetIndex.m_Data;
              orders->m_nOrderType = v36;
              v38 = KeyValues::GetInt(pFilterKeys, "entindex_target", v37);
              v39 = orders->m_nAbilityIndex.m_Data;
              orders->m_nTargetIndex.m_Data = v38;
              v40 = KeyValues::GetInt(pFilterKeys, "entindex_ability", v39);
              m_bQueue = orders->m_bQueue;
              orders->m_nAbilityIndex.m_Data = v40;
              orders->m_bQueue = KeyValues::GetInt(pFilterKeys, "queue", m_bQueue) != 0;
              orders->m_vPosition.x = KeyValues::GetFloat(pFilterKeys, "position_x", v42);
              orders->m_vPosition.y = KeyValues::GetFloat(pFilterKeys, "position_y", v43);
              orders->m_vPosition.z = KeyValues::GetFloat(pFilterKeys, "position_z", v44);
              if ( pFilterKeys == 0 )
              {
LABEL_52:
                v6 = g_pGameRules;
                goto LABEL_10;
              }
              v28 = 1;
            }
            KeyValues::~KeyValues(pFilterKeys);
            KeyValues::operator delete(pFilterKeys);
            if ( v28 == 0 )
              goto LABEL_15;
            goto LABEL_52;
          }
        }
      }
    }
  }
LABEL_10:
  if ( bIsClientOrdered
    && v6 != 0
    && v6[19].m_szQuestName[29] != 0
    && dota_allow_orders_while_paused.m_pParent->m_Value.m_nValue == 0 )
  {
    DOTA_ReportInvalidOrder(94);
    goto LABEL_15;
  }
  nOrderType = orders->m_nOrderType;
  v12 = *&v6[6].m_szQuestName[28];
  v13 = 0;
  if ( v12 <= 0xA )
    v13 = DOTAGameRules_Common::State_Order(DOTA_GameState)::STATE_ORDERING[v12];
  if ( dword_491AD10 > v13 && nOrderType - 16 > 1 || v12 == 8 )
    goto LABEL_15;
  m_nIssuerPlayerIndex = orders->m_nIssuerPlayerIndex;
  if ( orders->m_nIssuerPlayerIndex != -1 )
  {
    Player = CDOTA_PlayerResource::GetPlayer(g_pDOTAPlayerResource, orders->m_nIssuerPlayerIndex);
    if ( Player == 0 || CDOTAPlayer::GetAssignedHero(Player) == 0 && nOrderType - 16 > 1 )
      goto LABEL_15;
    m_nIssuerPlayerIndex = orders->m_nIssuerPlayerIndex;
  }
  g_nPlayerIndex = m_nIssuerPlayerIndex;
  g_bIsClientOrdered = bIsClientOrdered;
  if ( nOrderType == 16 )
  {
    pAbilityKV = CDOTAGameManager::GetItemDataByItemID(&g_DOTAGameManager, orders->m_nAbilityIndex.m_Data);
    if ( pAbilityKV == 0 )
    {
      DOTA_ReportInvalidOrder(33);
      goto LABEL_15;
    }
    if ( !DOTA_ServerHasEntitySpace() )
      goto LABEL_15;
    v262 = 11;
    v18 = 0;
    v252 = 16;
    goto LABEL_55;
  }
  if ( orders->m_nAbilityIndex.m_Data <= 0 )
  {
    v18 = 0;
  }
  else
  {
    v16 = UTIL_EntityByIndex(orders->m_nAbilityIndex);
    if ( v16 == 0
      || (v17 = __dynamic_cast(v16, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTABaseAbility, 0), v18 = v17, v17 == 0)
      || (v17->m_pEntity->m_flags & 0x200) != 0 )
    {
      DOTA_ReportInvalidOrder(2);
      goto LABEL_15;
    }
  }
  pAbilityKV = 0;
  v252 = nOrderType;
  v262 = nOrderType - 5;
  if ( nOrderType - 5 > 0x1B )
    goto LABEL_55;
  if ( ((1LL << v262) & 0xA60D1DF) != 0 && v18 == 0 )
  {
    DOTA_ReportInvalidOrder(4);
    goto LABEL_15;
  }
  pAbilityKV = 0;
  if ( nOrderType != 7 )
    goto LABEL_55;
  if ( ((*(v18->_vptr_IHandleEntity + 252))(v18) & 0x40) == 0 )
    goto LABEL_116;
  if ( ((*(v18->_vptr_IHandleEntity + 252))(v18) & 0x40) != 0 )
  {
    v54 = orders->m_nTargetIndex.m_Data;
    v55 = g_CDOTA_BinaryObjectSystem.m_BinaryObjects.m_Size;
    if ( v54 >= 0 )
    {
      if ( v55 > v54 )
      {
        v62 = g_CDOTA_BinaryObjectSystem.m_BinaryObjects.m_Memory.m_pMemory[v54];
        if ( v62 == 0 )
          goto LABEL_168;
        v57 = __dynamic_cast(v62, &`typeinfo for'CDOTA_BinaryObject, &`typeinfo for'CDOTA_Tree, -2);
        if ( v57 == 0 )
          goto LABEL_168;
        goto LABEL_167;
      }
      if ( (v54 - v55) <= 0x3FFF )
      {
        v56 = UTIL_EntityByIndex((v54 - v55));
        if ( v56 != 0 )
        {
          v57 = __dynamic_cast(v56, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTA_Tree, -2);
          if ( v57 != 0 )
          {
LABEL_167:
            pTargetTree = (*(*v57 + 64LL))(v57);
            pAbilityKV = 0;
            if ( v57[20] != 0 )
              goto LABEL_56;
LABEL_168:
            DOTA_ReportInvalidOrder(43);
            goto LABEL_15;
          }
        }
      }
    }
LABEL_116:
    DOTA_ReportInvalidOrder(6);
    goto LABEL_15;
  }
  pAbilityKV = 0;
LABEL_55:
  pTargetTree = 0;
LABEL_56:
  v245 = v252 - 2;
  if ( (v252 - 2) <= 0x18 && ((1LL << v245) & 0x1003815) != 0 )
  {
    if ( orders->m_nTargetIndex.m_Data > 0x3FFFu )
    {
      DOTA_ReportInvalidOrder(7);
      goto LABEL_15;
    }
    pTargetEntity = UTIL_EntityByIndex(orders->m_nTargetIndex);
  }
  else
  {
    pTargetEntity = 0;
  }
  if ( (v252 - 4) <= 0x16 && ((1LL << (v252 - 4)) & 0x400C01) != 0 && pTargetEntity != 0 )
  {
    pPhysicalItem = __dynamic_cast(pTargetEntity, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTA_Item_Physical, 0);
    pRuneItem = __dynamic_cast(pTargetEntity, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTA_Item_Rune, 0);
  }
  else
  {
    pRuneItem = 0;
    pPhysicalItem = 0;
  }
  if ( nOrderType == 13 || nOrderType == 2 || nOrderType == 6 || nOrderType == 4 && pRuneItem == 0 && pPhysicalItem == 0 )
  {
    if ( pTargetEntity == 0 || !pTargetEntity->m_bIsDOTANPC )
    {
      DOTA_ReportInvalidOrder(5);
      goto LABEL_15;
    }
    if ( LOBYTE(pTargetEntity[2].m_DamageModifiers.m_LastAlloc.index) != 0
      && ((pTargetEntity[2].m_hEffectEntity.m_Value.m_Index & 0x200) == 0 || nOrderType != 13 && nOrderType != 2) )
    {
      DOTA_ReportInvalidOrder(18);
      goto LABEL_15;
    }
    pTargetNPCa = pTargetEntity;
    if ( (*(pTargetEntity->_vptr_IHandleEntity + 408))(pTargetEntity) == 0 )
    {
      DOTA_ReportInvalidOrder(19);
      goto LABEL_15;
    }
  }
  else
  {
    pTargetNPCa = 0;
  }
  if ( v262 <= 0x19 && (((1LL << v262) & 0x220000F) != 0 || ((1LL << v262) & 0x10) != 0 && !v18->m_bToggleState.m_Value) )
  {
    if ( !CDOTABaseAbility::IsOwnersManaEnough(v18) )
    {
      DOTA_ReportInvalidOrder(14);
      goto LABEL_15;
    }
    if ( !CDOTABaseAbility::IsOwnersGoldEnough(v18, g_nPlayerIndex) )
    {
LABEL_197:
      DOTA_ReportInvalidOrder(63);
      goto LABEL_15;
    }
    if ( (*(v18->_vptr_IHandleEntity + 245))(v18) == 0 )
    {
      v58 = (*(v18->_vptr_IHandleEntity + 223))(v18);
      DOTA_ReportInvalidOrder(v58 == 0 ? 15 : 61);
      if ( `guard variable for'DOTA_ExecuteOrders(CUnitOrders &,bool,bool,bool)::dota_suppress_invalid_orders == 0
        && __cxa_guard_acquire(&`guard variable for'DOTA_ExecuteOrders(CUnitOrders &,bool,bool,bool)::dota_suppress_invalid_orders) != 0 )
      {
        ConVarRef::ConVarRef(
          &DOTA_ExecuteOrders(CUnitOrders &,bool,bool,bool)::dota_suppress_invalid_orders,
          "dota_suppress_invalid_orders");
        __cxa_guard_release(&`guard variable for'DOTA_ExecuteOrders(CUnitOrders &,bool,bool,bool)::dota_suppress_invalid_orders);
      }
      if ( DOTA_ExecuteOrders(CUnitOrders &,bool,bool,bool)::dota_suppress_invalid_orders.m_pConVarState->m_Value.m_nValue == 0 )
      {
        p_m_pszAbilityName = &v18->m_pAbilityData->m_pszAbilityName;
        if ( p_m_pszAbilityName != 0 )
        {
          v60 = *p_m_pszAbilityName;
          v61 = "<NoAbilityName>";
          if ( v60 != 0 )
            v61 = v60;
        }
        else
        {
          v61 = "<NoAbilityName>";
        }
        DevMsg(" Ability: %s\n", v61);
      }
      goto LABEL_15;
    }
  }
  v230 = v252 - 12;
  if ( (v252 - 12) <= 0x14 && ((1LL << v230) & 0x1020E3) != 0 )
  {
    if ( v18 == 0 || (*(v18->_vptr_IHandleEntity + 223))(v18) == 0 )
    {
      DOTA_ReportInvalidOrder(8);
      goto LABEL_15;
    }
    pFilterKeysa = v18;
  }
  else
  {
    pFilterKeysa = 0;
  }
  if ( v262 > 0x19 )
    goto LABEL_127;
  if ( ((1LL << v262) & 0x220801F) != 0 )
  {
    if ( v18->m_bHidden.m_Value && (*(v18->_vptr_IHandleEntity + 218))(v18) == 0 )
    {
LABEL_195:
      DOTA_ReportInvalidOrder(60);
      goto LABEL_15;
    }
    if ( ((*(v18->_vptr_IHandleEntity + 251))(v18) & 2) != 0 )
    {
      DOTA_ReportInvalidOrder(17);
      goto LABEL_15;
    }
    if ( v18->m_iLevel.m_Value == 0 && (*(v18->_vptr_IHandleEntity + 223))(v18) == 0 )
    {
      DOTA_ReportInvalidOrder(16);
      goto LABEL_15;
    }
    if ( !v18->m_bActivated.m_Value )
    {
      DOTA_ReportInvalidOrder(84);
      goto LABEL_15;
    }
    if ( CDOTAGamerules::IsCheatMode()
      && dota_ability_debug.m_pParent->m_Value.m_nValue != 0
      && !DOTA_ServerHasEntitySpace() )
    {
LABEL_15:
      if ( !VProf_29 )
        return;
      goto LABEL_16;
    }
    if ( (*(v18->_vptr_IHandleEntity + 223))(v18) != 0 )
    {
      if ( v18->m_iState != 1 )
      {
        DOTA_ReportInvalidOrder(37);
        goto LABEL_15;
      }
      if ( (*(v18->_vptr_IHandleEntity + 354))(v18) != 0 && v18->m_iCurrentCharges.m_Value == 0 )
      {
        DOTA_ReportInvalidOrder(55);
        goto LABEL_15;
      }
      pFilterKeysa = v18;
    }
    else
    {
      pFilterKeysa = 0;
    }
  }
  bSellingOrder = 1;
  if ( nOrderType != 17 )
  {
LABEL_127:
    bSellingOrder = 0;
    if ( nOrderType == 13 )
      bSellingOrder = (pTargetNPCa->m_iUnitType & 0x200) != 0;
  }
  if ( pFilterKeysa != 0 )
  {
    m_pParent = pFilterKeysa->m_pGameSceneNode->m_pParent;
    if ( m_pParent != 0
      && (OwnerEntity = CGameSceneNode::GetOwnerEntity(m_pParent), pNPCHoldingItem = OwnerEntity, OwnerEntity != 0)
      && OwnerEntity->m_bIsDOTANPC )
    {
      pInventory = CDOTA_BaseNPC::GetInventory(OwnerEntity);
    }
    else
    {
      if ( g_pGameRules == 0 )
        goto LABEL_170;
      v52 = *&g_pGameRules[6].m_szQuestName[28];
      v53 = 0;
      if ( v52 <= 0xA )
        v53 = DOTAGameRules_Common::State_Order(DOTA_GameState)::STATE_ORDERING[v52];
      if ( dword_491AD10 <= v53 )
      {
LABEL_170:
        pNPCHoldingItem = 0;
        goto LABEL_171;
      }
      pInventory = CDOTA_PlayerResource::GetPlayerPreGameInventory(g_pDOTAPlayerResource, orders->m_nIssuerPlayerIndex);
      pNPCHoldingItem = 0;
    }
    if ( pInventory != 0 )
    {
      ItemSlotInInventory = CDOTA_UnitInventory::FindItemSlotInInventory(pInventory, pFilterKeysa, 3);
LABEL_136:
      if ( ItemSlotInInventory == -1 && !pFilterKeysa->m_bCanBeUsedOutOfInventory.m_Value )
        goto LABEL_182;
      if ( nOrderType - 12 <= 1 && (*(pFilterKeysa->_vptr_IHandleEntity + 349))(pFilterKeysa) == 0 )
      {
        DOTA_ReportInvalidOrder(42);
        goto LABEL_15;
      }
      if ( bSellingOrder )
      {
        if ( (*(pFilterKeysa->_vptr_IHandleEntity + 351))(pFilterKeysa) == 0
          || (m_Value = pFilterKeysa->m_iPlayerOwnerID.m_Value, g_nPlayerIndex != m_Value)
          && ((CDOTA_PlayerResource::GetPlayerSelectedHeroHandle(g_pDOTAPlayerResource, m_Value),
               (v64 = CEntityHandle::operator CEntityInstance *(&v270)) == 0)
           || BYTE3(v64[7]._vptr_IHandleEntity) == 0
           || (v64[43].m_iszPrivateVScripts.u.m_Id & 1) == 0
           || (m_hScope = v64[61].m_hPrivateScope.m_hScope, !_bittest64(&m_hScope, g_nPlayerIndex))
           || !CDOTA_BaseNPC_Hero::HasOwnerAbandoned(v64)) )
        {
          DOTA_ReportInvalidOrder(70);
          goto LABEL_15;
        }
        CDOTA_PlayerResource::GetPlayerSelectedHeroHandle(g_pDOTAPlayerResource, g_nPlayerIndex);
        v172 = CEntityHandle::operator CEntityInstance *(v271);
        if ( v172 != 0
          && BYTE3(v172[7]._vptr_IHandleEntity) != 0
          && (v172[43].m_iszPrivateVScripts.u.m_Id & 1) != 0
          && (*(v172->_vptr_IHandleEntity + 408))(v172) == 0
          && !pFilterKeysa->m_bPurchasedWhileDead.m_Value )
        {
          DOTA_ReportInvalidOrder(71);
          goto LABEL_15;
        }
      }
      if ( nOrderType == 13 )
      {
        if ( GDOTAGCClientSystem() != 0 )
        {
          v189 = GDOTAGCClientSystem();
          IsCompetitiveGame = CDOTAGCServerSystem::IsCompetitiveGame(v189);
        }
        else
        {
          IsCompetitiveGame = 0;
        }
        if ( !IsCompetitiveGame
          && pNPCHoldingItem != 0
          && (pNPCHoldingItem->m_iUnitType & 0x100) != 0
          && (*(pFilterKeysa->_vptr_IHandleEntity + 355))(pFilterKeysa) != 0 )
        {
          v191 = pFilterKeysa->m_iPlayerOwnerID.m_Value;
          if ( v191 != -1
            && g_nPlayerIndex != v191
            && !CDOTA_PlayerResource::HasPlayerAbandoned(g_pDOTAPlayerResource, v191) )
          {
LABEL_654:
            DOTA_ReportInvalidOrder(57);
            goto LABEL_15;
          }
        }
      }
      if ( nOrderType - 12 <= 1
        && CDOTA_UnitInventory::FindItemSlotInInventory(pInventory, pFilterKeysa, 1) == -1
        && !pFilterKeysa->m_bCanBeUsedOutOfInventory.m_Value )
      {
        DOTA_ReportInvalidOrder(85);
        goto LABEL_15;
      }
      goto LABEL_141;
    }
LABEL_171:
    if ( !pFilterKeysa->m_bCanBeUsedOutOfInventory.m_Value )
    {
LABEL_182:
      DOTA_ReportInvalidOrder(34);
      goto LABEL_15;
    }
    pInventory = 0;
    ItemSlotInInventory = CDOTA_UnitInventory::FindItemSlotInInventory(0, pFilterKeysa, 3);
    goto LABEL_136;
  }
  pNPCHoldingItem = 0;
  pInventory = 0;
LABEL_141:
  if ( v245 <= 0xB
    && ((1LL << v245) & 0x815) != 0
    && pTargetNPCa != 0
    && (pTargetNPCa->m_bIsWaitingToSpawn.m_Value || (pTargetNPCa->m_nUnitState64.m_Value & 0x4000) != 0) )
  {
    DOTA_ReportInvalidOrder(36);
    goto LABEL_15;
  }
  if ( (nOrderType == 4 || nOrderType == 6)
    && pTargetNPCa != 0
    && (pTargetNPCa->m_bIsWaitingToSpawn.m_Value || (pTargetNPCa->m_nUnitState64.m_Value & 0x100) != 0) )
  {
    if ( nOrderType != 6 )
      goto LABEL_190;
    if ( v18->m_pAbilityData == 0 )
      CDOTABaseAbility::LoadAbilityData(v18, 0);
    if ( (v18->m_pAbilityData->m_iAbilityTargetFlags & 0x40) == 0 )
    {
LABEL_190:
      DOTA_ReportInvalidOrder(22);
      goto LABEL_15;
    }
  }
  v51 = *&orders->m_vPosition.x;
  vPos = orders->m_vPosition.z;
  v290.z = vPos;
  *&v290.x = v51;
  v272 = v51;
  if ( !CGridNavBase::IsInWorld(&g_GridNav, v290, 0.5 * g_GridNav.m_flEdgeSize) )
  {
    DOTA_ReportInvalidOrder(45);
    goto LABEL_15;
  }
  bInstantOrder = 0;
  v229 = v252 - 11;
  if ( (v252 - 11) <= 0x15 )
    bInstantOrder = ((1LL << v229) & 0x316361) != 0;
  if ( (v252 - 8) <= 1 )
  {
    v173 = (*(v18->_vptr_IHandleEntity + 251))(v18);
    v174 = bInstantOrder;
    if ( (v173 & 0x200000) != 0 )
      v174 = 1;
    bInstantOrder = v174;
  }
  v246 = m_nIssuerPlayerIndex <= 0x40;
  switch ( nOrderType )
  {
    case 1u:
    case 2u:
    case 3u:
    case 0xAu:
    case 0xCu:
    case 0x10u:
    case 0x11u:
    case 0x15u:
    case 0x16u:
    case 0x17u:
    case 0x18u:
    case 0x1Cu:
    case 0x1Du:
    case 0x1Fu:
    case 0x20u:
    case 0x21u:
      goto LABEL_210;
    case 4u:
      if ( pTargetNPCa != 0 )
      {
        v177 = UTIL_EntityByIndex(orders->m_nUnits.m_Memory.m_pMemory->m_Data);
        if ( v177 == 0 || !v177->m_bIsDOTANPC )
        {
          if ( (pTargetNPCa->m_nUnitState64.m_Value & 4) == 0 )
            goto LABEL_210;
          goto LABEL_633;
        }
        if ( (pTargetNPCa->m_nUnitState64.m_Value & 4) != 0
          && CDOTA_BaseNPC::FindModifierByName(v177, "MODIFIER_PROPERTY_OVERRIDE_ATTACK_MAGICAL", 0) == 0 )
        {
LABEL_633:
          DOTA_ReportInvalidOrder(23);
          goto LABEL_15;
        }
      }
LABEL_210:
      positionOffsets.m_Size = 0;
      v65 = orders->m_nUnits.m_Size;
      positionOffsets.m_Memory.m_pMemory = 0;
      positionOffsets.m_Memory.m_nAllocationCount = 0;
      positionOffsets.m_Memory.m_nGrowSize = 0;
      if ( v65 <= 1 )
      {
        bUsePseudoFormation = 0;
      }
      else
      {
        v66 = 0;
        v67 = 0;
        bNeedAnchorPosition = 1;
        bUsePseudoFormation = 0;
        x = vec3_origin.x;
        m_nAllocationCount = 0;
        bAutoAttackAlways = vec3_origin.y;
        z = vec3_origin.z;
        while ( 1 )
        {
          v70 = v67;
          if ( m_nAllocationCount == v67 )
          {
            CUtlMemory<Vector,int>::Grow(&positionOffsets.m_Memory, 1);
            v70 = positionOffsets.m_Size;
          }
          positionOffsets.m_Size = v70 + 1;
          v71 = &positionOffsets.m_Memory.m_pMemory[v67];
          if ( v71 != 0 )
            *v71 = vec3_origin;
          v72 = UTIL_EntityByIndex(orders->m_nUnits.m_Memory.m_pMemory[v66]);
          v73 = v72;
          if ( v72 != 0 && v72->m_bIsDOTANPC )
          {
            if ( (v72[2].m_hEffectEntity.m_Value.m_Index & 1) != 0 )
            {
              AbsOrigin = CBaseEntity::GetAbsOrigin(v72);
              bNeedAnchorPosition = 0;
              x = AbsOrigin->x;
              bAutoAttackAlways = AbsOrigin->y;
              z = AbsOrigin->z;
            }
            if ( (v73[3].m_NetworkTransmitComponent.m_PVSInfo.m_pClustersInline[0] & 2) != 0 )
            {
              bUsePseudoFormation = 1;
            }
            else
            {
              v69 = bUsePseudoFormation;
              if ( (BYTE3(*&v73[3].m_vecVelocity.m_Value.x) & 1
                  | ((*&v73[3].m_vecVelocity.m_Value.x & 0x200000000LL) != 0)) != 0 )
                v69 = 1;
              bUsePseudoFormation = v69;
            }
          }
          v65 = orders->m_nUnits.m_Size;
          if ( v65 <= ++v66 )
            break;
          v67 = positionOffsets.m_Size;
          m_nAllocationCount = positionOffsets.m_Memory.m_nAllocationCount;
        }
        if ( bUsePseudoFormation )
        {
          if ( bNeedAnchorPosition != 0 )
          {
            x = orders->m_vPosition.x;
            bAutoAttackAlways = orders->m_vPosition.y;
            z = orders->m_vPosition.z;
          }
          if ( v65 > 0 )
          {
            *v236 = 0;
            for ( bAbilityOwnershipValidationa = 0; bAbilityOwnershipValidationa < v65; ++bAbilityOwnershipValidationa )
            {
              v75 = UTIL_EntityByIndex(*(orders->m_nUnits.m_Memory.m_pMemory + *v236));
              v240 = v75;
              if ( v75 != 0 && v75->m_bIsDOTANPC )
              {
                v76 = CBaseEntity::GetAbsOrigin(v75);
                if ( x != v76->x || bAutoAttackAlways != v76->y || z != v76->z )
                {
                  v77 = CBaseEntity::GetAbsOrigin(v240);
                  *&v78 = v77->y - bAutoAttackAlways;
                  *&v79 = v77->z - z;
                  *&ordersForThisUnit.m_nIssuerPlayerIndex = v77->x - x;
                  ordersForThisUnit.m_nOrderSequenceNumber = v78;
                  ordersForThisUnit.m_nUnits.m_Size = v79;
                  if ( *&ordersForThisUnit.m_nIssuerPlayerIndex == vec3_origin.x
                    && *&v78 == vec3_origin.y
                    && *&v79 == vec3_origin.z )
                  {
                    angles.y = RandomFloat(0.0, 360.0);
                    angles.x = 0.0;
                    angles.z = 0.0;
                    AngleVectors(&angles, &forward, 0, 0);
                    ordersForThisUnit.m_nIssuerPlayerIndex = LODWORD(forward.x);
                    ordersForThisUnit.m_nOrderSequenceNumber = LODWORD(forward.y);
                    ordersForThisUnit.m_nUnits.m_Size = LODWORD(forward.z);
                  }
                  else
                  {
                    VectorNormalize(&ordersForThisUnit);
                  }
                  if ( orders->m_nUnits.m_Size > 0 )
                  {
                    v80 = 0;
                    v81 = 0;
                    do
                    {
                      if ( v81 != bAbilityOwnershipValidationa )
                      {
                        v82 = UTIL_EntityByIndex(orders->m_nUnits.m_Memory.m_pMemory[v80]);
                        if ( v82 != 0 && v82->m_bIsDOTANPC )
                        {
                          v83 = CBaseEntity::GetAbsOrigin(v82);
                          v84 = CBaseEntity::GetAbsOrigin(v240);
                          v85 = v84->y - v83->y;
                          v86 = v84->z - v83->z;
                          v276.x = v84->x - v83->x;
                          v276.y = v85;
                          v276.z = v86;
                          VectorNormalize(&v276);
                          *&ordersForThisUnit.m_nIssuerPlayerIndex = (v276.x + v276.x)
                                                                   + *&ordersForThisUnit.m_nIssuerPlayerIndex;
                          *&ordersForThisUnit.m_nOrderSequenceNumber = (v276.y + v276.y)
                                                                     + *&ordersForThisUnit.m_nOrderSequenceNumber;
                          *&ordersForThisUnit.m_nUnits.m_Size = (v276.z + v276.z) + *&ordersForThisUnit.m_nUnits.m_Size;
                        }
                      }
                      ++v81;
                      ++v80;
                    }
                    while ( orders->m_nUnits.m_Size > v81 );
                  }
                  VectorNormalize(&ordersForThisUnit);
                  v87 = 1.0;
                  if ( bNeedAnchorPosition != 0 )
                    v87 = 0.5;
                  v88 = (positionOffsets.m_Memory.m_pMemory + 3 * *v236);
                  v89 = (96.0 * *&ordersForThisUnit.m_nUnits.m_Size) * v87;
                  v90 = (96.0 * *&ordersForThisUnit.m_nIssuerPlayerIndex) * v87;
                  v88->y = (96.0 * *&ordersForThisUnit.m_nOrderSequenceNumber) * v87;
                  v88->z = v89;
                  v88->x = v90;
                }
              }
              v65 = orders->m_nUnits.m_Size;
              *v236 += 4LL;
            }
          }
        }
      }
      if ( v65 == 0 )
      {
        if ( nOrderType == 16 )
        {
          v216 = g_nPlayerIndex;
          v217 = KeyValues::GetName(pAbilityKV);
          v218 = CDOTA_BaseNPC::AttemptToPurchaseItem(0, v217, v216, 0);
          if ( v218 != DOTA_INVALID_ORDERS::DOTA_ORDER_SUCCESS )
            DOTA_ReportInvalidOrder(v218);
        }
        else
        {
          if ( nOrderType != 17 )
            goto LABEL_383;
          if ( pInventory != 0 )
            CDOTA_UnitInventory::SellItem(pInventory, pFilterKeysa);
          else
            DOTA_ReportInvalidOrder(34);
        }
LABEL_373:
        CUtlVectorBase<Vector,CUtlMemory<Vector,int>>::~CUtlVectorBase(&positionOffsets);
        goto LABEL_15;
      }
      if ( v65 > 0 )
      {
        v91 = 0;
        vec = 0;
        v226 = (1LL << v262) & 0x200001F;
        v222 = (1LL << v262) & 0x220001F;
        while ( 1 )
        {
          m_pMemory = orders->m_nUnits.m_Memory.m_pMemory;
          g_bSendHudErrorToClient = v91 == 0;
          v94 = UTIL_EntityByIndex(m_pMemory[v91]);
          v95 = v94;
          if ( v94 == 0 || !(m_bIsDOTANPC = v94->m_bIsDOTANPC) )
          {
            DOTA_ReportInvalidOrder(1);
LABEL_263:
            v92 = orders->m_nUnits.m_Size;
            goto LABEL_259;
          }
          if ( v229 <= 0x15 && ((1LL << v229) & 0x317161) != 0
            || (*(v94->_vptr_IHandleEntity + 408))(v94) != 0
            || v18 != 0 && ((*(v18->_vptr_IHandleEntity + 251))(v18) & 0x100000) != 0 )
          {
            break;
          }
          v92 = orders->m_nUnits.m_Size;
          if ( v92 == 1 )
          {
            DOTA_ReportInvalidOrder(20);
            goto LABEL_263;
          }
LABEL_259:
          ++vec;
          if ( ++v91 >= v92 )
            goto LABEL_383;
        }
        if ( nOrderType != 27 && v246 )
        {
          m_pElements = v95[3].m_DamageModifiers.m_pElements;
          if ( !_bittest64(&m_pElements, g_nPlayerIndex) && (v18 == 0 || (*(v18->_vptr_IHandleEntity + 220))(v18) == 0) )
          {
LABEL_269:
            DOTA_ReportInvalidOrder(0);
            goto LABEL_263;
          }
        }
        if ( (BYTE2(v95[3].m_vecVelocity.m_Value.x) & 8) != 0
          && !bInstantOrder
          && (v18 == 0 || ((*(v18->_vptr_IHandleEntity + 251))(v18) & 0x100000) == 0) )
        {
          DOTA_ReportInvalidOrder(74);
          goto LABEL_263;
        }
        if ( (v252 - 1) > 0x1C )
          goto LABEL_289;
        if ( ((1LL << (v252 - 1)) & 0x18006007) != 0 && !CDOTA_BaseNPC::HasMovementCapability(v95) )
        {
          DOTA_ReportInvalidOrder(31);
          goto LABEL_263;
        }
        if ( nOrderType == 29 )
        {
          if ( BYTE3(v95[5].m_NetworkTransmitComponent._vptr_IEventRegisterCallback) != 0 )
          {
            v98 = bInstantOrder;
            if ( orders->m_bQueue )
              v98 = 1;
            bInstantOrder = v98;
          }
        }
        else
        {
LABEL_289:
          if ( nOrderType == 19 )
          {
            v238 = orders->m_nTargetIndex.m_Data;
            Inventory = CDOTA_BaseNPC::GetInventory(v95);
            bAbilityOwnershipValidationc = CDOTA_UnitInventory::GetItemInSlot(Inventory, v238);
            if ( CDOTA_UnitInventory::FindItemSlotInInventory(pInventory, pFilterKeysa, 2) != -1 || (v238 - 9) <= 5 )
            {
              if ( (*(pFilterKeysa->_vptr_IHandleEntity + 349))(pFilterKeysa) == 0 )
                goto LABEL_849;
              if ( bAbilityOwnershipValidationc != 0 )
              {
                if ( (*(bAbilityOwnershipValidationc->_vptr_IHandleEntity + 349))(bAbilityOwnershipValidationc) == 0 )
                {
LABEL_849:
                  DOTA_ReportInvalidOrder(51);
                  goto LABEL_373;
                }
                if ( pFilterKeysa->m_bChanneling || bAbilityOwnershipValidationc->m_bChanneling )
                {
LABEL_372:
                  DOTA_ReportInvalidOrder(87);
                  goto LABEL_373;
                }
              }
              else if ( pFilterKeysa->m_bChanneling )
              {
                goto LABEL_372;
              }
            }
          }
          else if ( nOrderType - 3 <= 1 && (v95[3].m_NetworkTransmitComponent.m_PVSInfo.m_nHeadNode & 3) == 0 )
          {
            DOTA_ReportInvalidOrder(41);
            goto LABEL_263;
          }
        }
        if ( pInventory != 0 && pNPCHoldingItem != v95 )
        {
          if ( (v95[2].m_hEffectEntity.m_Value.m_Index & 0x102) == 0
            || !v246
            || (v99 = pNPCHoldingItem->m_iIsControllableByPlayer64.m_Value, !_bittest64(&v99, g_nPlayerIndex)) )
          {
            DOTA_ReportInvalidOrder(35);
            goto LABEL_263;
          }
        }
        if ( v262 <= 0x19 && v226 != 0 )
        {
          if ( pFilterKeysa == 0 )
            goto LABEL_319;
          if ( (*(pFilterKeysa->_vptr_IHandleEntity + 348))(pFilterKeysa) != 0 )
          {
LABEL_297:
            DOTA_ReportInvalidOrder(11);
            goto LABEL_263;
          }
        }
        if ( pFilterKeysa != 0 )
        {
          bAbilityOwnershipValidatione = pFilterKeysa->m_iPlayerOwnerID.m_Value;
          if ( (*(v95->_vptr_IHandleEntity + 414))(v95) != bAbilityOwnershipValidatione )
          {
            if ( v262 > 0x1B )
            {
              bAbilityOwnershipValidationb = 1;
            }
            else if ( ((1LL << v262) & 0x8104180) != 0 )
            {
              bAbilityOwnershipValidationb = 0;
            }
            else
            {
              bAbilityOwnershipValidationb = 1;
              if ( v226 != 0 )
                bAbilityOwnershipValidationb = (*(pFilterKeysa->_vptr_IHandleEntity + 355))(pFilterKeysa) == 2;
            }
            if ( bSellingOrder )
            {
              v100 = pFilterKeysa->m_iPlayerOwnerID.m_Value;
              bAbilityOwnershipValidationb = v100 != -1
                                          && g_nPlayerIndex != v100
                                          && !CDOTA_PlayerResource::HasPlayerAbandoned(g_pDOTAPlayerResource, v100);
            }
            if ( GDOTAGCClientSystem() != 0 )
            {
              v101 = GDOTAGCClientSystem();
              m_bIsDOTANPC = !CDOTAGCServerSystem::IsCompetitiveGame(v101);
            }
            if ( nOrderType == 12
              && m_bIsDOTANPC
              && pNPCHoldingItem != 0
              && (pNPCHoldingItem->m_iUnitType & 0x100) != 0
              && (*(pFilterKeysa->_vptr_IHandleEntity + 355))(pFilterKeysa) != 0 )
            {
              v102 = pFilterKeysa->m_iPlayerOwnerID.m_Value;
              if ( v102 != -1
                && g_nPlayerIndex != v102
                && !CDOTA_PlayerResource::HasPlayerAbandoned(g_pDOTAPlayerResource, v102) )
              {
                goto LABEL_297;
              }
            }
            else if ( bAbilityOwnershipValidationb )
            {
              goto LABEL_297;
            }
          }
        }
LABEL_319:
        if ( (v95[2].m_hEffectEntity.m_Value.m_Index & 1) != 0
          && CDOTA_BaseNPC_Hero::IsOwnerDisconnectedButNotAbandoned(v95)
          && v230 <= 0x14
          && ((1LL << v230) & 0x1000A3) != 0 )
        {
          goto LABEL_269;
        }
        LOBYTE(v235) = v18 != 0;
        if ( pFilterKeysa == 0
          && v18 != 0
          && nOrderType != 27
          && v95 != CEntityHandle::GetHandleEntity(&v18->m_hOwnerEntity.m_Value) )
        {
          goto LABEL_297;
        }
        LOBYTE(v237) = pTargetNPCa != 0;
        if ( (pTargetNPCa != 0 || pRuneItem != 0 || pPhysicalItem != 0)
          && (nOrderType != 2 || BYTE1(v95[5].m_iszPrivateVScripts.u.m_Id) == 0)
          && pTargetNPCa != 0 )
        {
          if ( CDOTA_BaseNPC::IsInvisibleTo(pTargetNPCa, v95) )
          {
LABEL_401:
            DOTA_ReportInvalidOrder(27);
            goto LABEL_263;
          }
          if ( !CDOTA_BaseNPC::WasSeenRecently(pTargetNPCa, v95->m_iTeamNum.m_Value) )
          {
LABEL_334:
            DOTA_ReportInvalidOrder(26);
            goto LABEL_263;
          }
        }
        if ( v262 <= 0x19 && v222 != 0 )
        {
          v103 = *&v95[3].m_vecVelocity.m_Value.x;
          if ( (v103 & 8) != 0 )
          {
            if ( (*(v18->_vptr_IHandleEntity + 223))(v18) == 0 )
            {
              DOTA_ReportInvalidOrder(24);
              goto LABEL_263;
            }
            v103 = *&v95[3].m_vecVelocity.m_Value.x;
          }
          if ( (v103 & 0x10) != 0 )
          {
            if ( (*(v18->_vptr_IHandleEntity + 223))(v18) != 0 )
            {
              DOTA_ReportInvalidOrder(75);
              goto LABEL_263;
            }
            v103 = *&v95[3].m_vecVelocity.m_Value.x;
          }
          if ( (v103 & 0x20) == 0 && (v103 & 1) != 0 && ((*(v18->_vptr_IHandleEntity + 251))(v18) & 0x80000) != 0 )
          {
            DOTA_ReportInvalidOrder(73);
            goto LABEL_263;
          }
        }
        if ( v245 <= 0xB && ((1LL << v245) & 0x815) != 0 && SBYTE1(v95[3].m_vecVelocity.m_Value.x) < 0 )
        {
          DOTA_ReportInvalidOrder(36);
          goto LABEL_373;
        }
        if ( (v95[2].m_hEffectEntity.m_Value.m_Index & 3) == 0
          || LOBYTE(v95[4].m_pfnMoveDone.__delta) != 0
          || BYTE4(v95[5]._vptr_IHandleEntity) == 0
          || CDOTA_ModifierManager::GetModifier_Constant_First(
               &v95[4],
               modifierfunction::MODIFIER_PROPERTY_TEMPEST_DOUBLE,
               &CModifierParams::s_Default) == 1.0 )
        {
          if ( (*(v95->_vptr_IHandleEntity + 390))(v95) == 0 && nOrderType == 15 )
          {
            DOTA_ReportInvalidOrder(38);
            goto LABEL_263;
          }
          if ( ((*(v95->_vptr_IHandleEntity + 436))(v95) != 0
             || (v95[2].m_hEffectEntity.m_Value.m_Index & 0x100) == 0
             && (pPhysicalItem == 0
              || (v104 = CEntityHandle::operator CEntityInstance *(&pPhysicalItem->m_hItem.m_Value)) == 0
              || (*(v104->_vptr_IHandleEntity + 357))(v104) == 0)
             && BYTE4(v95[5]._vptr_IHandleEntity) == 0)
            && v230 <= 0x14
            && ((1LL << v230) & 0x1000F7) != 0 )
          {
            DOTA_ReportInvalidOrder(39);
            goto LABEL_263;
          }
        }
        if ( LOBYTE(v95[4].m_pfnMoveDone.__delta) != 0
          && (CDOTA_ModifierManager::GetModifier_Constant_First(
                &v95[4],
                modifierfunction::MODIFIER_PROPERTY_SUPER_ILLUSION,
                &CModifierParams::s_Default) != 1.0
           || v18 == 0
           || (*(v18->_vptr_IHandleEntity + 223))(v18) != 0
           || (*(v18->_vptr_IHandleEntity + 214))(v18) == 1
           && CDOTA_ModifierManager::GetModifier_Constant_First(
                &v95[4],
                modifierfunction::MODIFIER_PROPERTY_SUPER_ILLUSION_WITH_ULTIMATE,
                &CModifierParams::s_Default) != 1.0
           || (*(v18->_vptr_IHandleEntity + 221))(v18) != 0) )
        {
          if ( v262 > 0x19 )
            goto LABEL_355;
          if ( ((1LL << v262) & 0x220805F) != 0 )
            goto LABEL_396;
          if ( ((1LL << v262) & 0x400000) != 0 )
          {
            v106 = CDOTA_PlayerResource::GetPlayer(g_pDOTAPlayerResource, g_nPlayerIndex);
            if ( v106 == 0 )
              goto LABEL_269;
            if ( v106->m_iTeamNum.m_Value == v18->m_iTeamNum.m_Value )
            {
LABEL_396:
              DOTA_ReportInvalidOrder(40);
              goto LABEL_263;
            }
          }
        }
        if ( nOrderType == 8 )
        {
          if ( (*(v18->_vptr_IHandleEntity + 260))(v18) == 23 )
          {
            v107 = (*(v18->_vptr_IHandleEntity + 261))(v18);
LABEL_404:
            DOTA_ReportCustomInvalidOrder(v107);
            goto LABEL_263;
          }
LABEL_357:
          switch ( nOrderType )
          {
            case 4u:
              if ( pTargetNPCa != 0 && (*(v95->_vptr_IHandleEntity + 391))(v95, pTargetNPCa) == 0 )
              {
                DOTA_ReportInvalidOrder(54);
                goto LABEL_263;
              }
              if ( !CDOTA_BaseNPC::HasMovementCapability(v95) )
              {
                AttackRange = CDOTA_BaseNPC::GetAttackRange(v95);
                if ( !CDOTA_BaseNPC::IsEntityInRange(v95, pTargetEntity, AttackRange, v203) )
                {
                  DOTA_ReportInvalidOrder(46);
                  goto LABEL_263;
                }
              }
              if ( pPhysicalItem != 0 )
              {
                v201 = CEntityHandle::operator CEntityInstance *(&pPhysicalItem->m_hItem.m_Value);
                if ( v201 != 0 && (*(v201->_vptr_IHandleEntity + 352))(v201) == 0 )
                {
LABEL_796:
                  DOTA_ReportInvalidOrder(23);
                  goto LABEL_263;
                }
              }
              goto LABEL_415;
            case 6u:
              if ( pTargetNPCa != 0 )
              {
                v200 = (*(v18->_vptr_IHandleEntity + 256))(v18, pTargetNPCa);
                switch ( v200 )
                {
                  case 0:
                    goto LABEL_415;
                  case 1:
                    goto LABEL_818;
                  case 2:
                    goto LABEL_817;
                  case 3:
                    goto LABEL_816;
                  case 4:
                    goto LABEL_815;
                  case 5:
                    goto LABEL_814;
                  case 6:
                    goto LABEL_813;
                  case 7:
                    goto LABEL_812;
                  case 8:
                    goto LABEL_811;
                  case 9:
                    goto LABEL_810;
                  case 10:
                    goto LABEL_396;
                  case 11:
                    goto LABEL_809;
                  case 12:
                    goto LABEL_808;
                  case 15:
                    goto LABEL_807;
                  case 16:
                    goto LABEL_806;
                  case 17:
                    goto LABEL_805;
                  case 18:
                    goto LABEL_799;
                  case 19:
                    goto LABEL_334;
                  case 20:
                    goto LABEL_401;
                  case 21:
                    goto LABEL_269;
                  case 22:
                    goto LABEL_796;
                  case 23:
                    v107 = (*(v18->_vptr_IHandleEntity + 257))(v18, pTargetNPCa);
                    goto LABEL_404;
                  case 25:
                    goto LABEL_800;
                  default:
                    m_pAsString = "";
                    if ( pTargetNPCa->m_iszUnitName.m_Value.u.m_Id != 0 )
                      m_pAsString = pTargetNPCa->m_iszUnitName.m_Value.u.m_pAsString;
                    v110 = &v18->m_pAbilityData->m_pszAbilityName;
                    if ( v110 != 0 )
                    {
                      v111 = *v110;
                      v112 = "<NoAbilityName>";
                      if ( v111 != 0 )
                        v112 = v111;
                    }
                    else
                    {
                      v112 = "<NoAbilityName>";
                    }
                    Warning(
                      "Cast failed, but not sure why! (ability: %s, target: %s, result: %d)",
                      v112,
                      m_pAsString,
                      v200);
                    goto LABEL_414;
                }
              }
              if ( pTargetTree != 0 )
              {
                v204 = *(v18->_vptr_IHandleEntity + 258);
                v205 = CBaseEntity::GetAbsOrigin(pTargetTree);
                v200 = v204(v18, v205);
                switch ( v200 )
                {
                  case 0:
                    goto LABEL_415;
                  case 1:
LABEL_818:
                    DOTA_ReportInvalidOrder(29);
                    goto LABEL_263;
                  case 2:
LABEL_817:
                    DOTA_ReportInvalidOrder(30);
                    goto LABEL_263;
                  case 3:
LABEL_816:
                    DOTA_ReportInvalidOrder(47);
                    goto LABEL_263;
                  case 4:
LABEL_815:
                    DOTA_ReportInvalidOrder(95);
                    goto LABEL_263;
                  case 5:
LABEL_814:
                    DOTA_ReportInvalidOrder(56);
                    goto LABEL_263;
                  case 6:
LABEL_813:
                    DOTA_ReportInvalidOrder(49);
                    goto LABEL_263;
                  case 7:
LABEL_812:
                    DOTA_ReportInvalidOrder(59);
                    goto LABEL_263;
                  case 8:
LABEL_811:
                    DOTA_ReportInvalidOrder(48);
                    goto LABEL_263;
                  case 9:
LABEL_810:
                    DOTA_ReportInvalidOrder(50);
                    goto LABEL_263;
                  case 10:
                    goto LABEL_396;
                  case 11:
LABEL_809:
                    DOTA_ReportInvalidOrder(76);
                    goto LABEL_263;
                  case 12:
LABEL_808:
                    DOTA_ReportInvalidOrder(79);
                    goto LABEL_263;
                  case 15:
LABEL_807:
                    DOTA_ReportInvalidOrder(19);
                    goto LABEL_263;
                  case 16:
LABEL_806:
                    DOTA_ReportInvalidOrder(77);
                    goto LABEL_263;
                  case 17:
LABEL_805:
                    DOTA_ReportInvalidOrder(21);
                    goto LABEL_263;
                  case 18:
LABEL_799:
                    DOTA_ReportInvalidOrder(22);
                    goto LABEL_263;
                  case 19:
                    goto LABEL_334;
                  case 20:
                    goto LABEL_401;
                  case 21:
                    goto LABEL_269;
                  case 22:
                    goto LABEL_796;
                  case 23:
                    v206 = *(v18->_vptr_IHandleEntity + 259);
                    v207 = CBaseEntity::GetAbsOrigin(pTargetTree);
                    v107 = v206(v18, v207);
                    goto LABEL_404;
                  case 25:
LABEL_800:
                    SendHudErrorToPlayer(108, v95);
                    goto LABEL_263;
                  default:
                    v208 = &v18->m_pAbilityData->m_pszAbilityName;
                    if ( v208 != 0 )
                    {
                      v209 = *v208;
                      v210 = "<NoAbilityName>";
                      if ( v209 != 0 )
                        v210 = v209;
                    }
                    else
                    {
                      v210 = "<NoAbilityName>";
                    }
                    Warning("Cast failed on tree, but not sure why! (ability: %s, result: %d)", v210, v200);
LABEL_414:
                    if ( v200 == 0 )
                      goto LABEL_415;
                    goto LABEL_263;
                }
              }
              goto LABEL_415;
            case 0xBu:
              if ( (v95[2].m_hEffectEntity.m_Value.m_Index & 1) != 0 )
              {
                if ( *v95[6].m_NetworkTransmitComponent.m_PVSInfo.m_pClustersInline > 0 )
                  goto LABEL_779;
                bAbilityOwnershipValidationd = v95;
              }
              else
              {
                bAbilityOwnershipValidationd = 0;
              }
              if ( BYTE5(v95[2].m_DamageModifiers.m_pElements) != 0 )
                goto LABEL_416;
              DOTA_ReportInvalidOrder(13);
              goto LABEL_263;
            case 0xDu:
              if ( v95->m_iTeamNum.m_Value == pTargetNPCa->m_iTeamNum.m_Value || (pTargetNPCa->m_iUnitType & 0x200) != 0 )
                goto LABEL_415;
              DOTA_ReportInvalidOrder(58);
              goto LABEL_263;
            case 0x11u:
              v194 = 0;
              if ( dota_easybuy.m_pParent->m_Value.m_nValue != 0 )
                v194 = bIsClientOrdered;
              if ( (*(v95->_vptr_IHandleEntity + 408))(v95) == 0
                || v194
                || CDOTA_UnitInventory::FindItemSlotInInventory(pInventory, pFilterKeysa, 2) != -1
                || CDOTA_BaseNPC::IsInRangeOfShop(v95, DOTA_SHOP_TYPE::DOTA_SHOP_HOME, 0)
                || CDOTA_BaseNPC::IsInRangeOfShop(v95, DOTA_SHOP_TYPE::DOTA_SHOP_SIDE, 0)
                || CDOTA_BaseNPC::IsInRangeOfShop(v95, DOTA_SHOP_TYPE::DOTA_SHOP_SECRET, 0) )
              {
                goto LABEL_415;
              }
              DOTA_ReportInvalidOrder(69);
              goto LABEL_263;
            case 0x12u:
              if ( CDOTA_BaseNPC::IsInRangeOfShop(v95, DOTA_SHOP_TYPE::DOTA_SHOP_HOME, 0)
                || CDOTA_UnitInventory::FindItemSlotInInventory(pInventory, pFilterKeysa, 2) == -1 )
              {
                goto LABEL_415;
              }
              DOTA_ReportInvalidOrder(92);
              goto LABEL_263;
            case 0x17u:
              if ( (v95[2].m_hEffectEntity.m_Value.m_Index & 1) == 0 )
              {
                DOTA_ReportInvalidOrder(88);
                goto LABEL_263;
              }
              if ( (*(v95->_vptr_IHandleEntity + 408))(v95) != 0 )
                goto LABEL_750;
              v197 = (*(v95->_vptr_IHandleEntity + 397))(v95);
              if ( v197 < CDOTA_BaseNPC_Hero::GetBuybackCost(v95) )
              {
                DOTA_ReportInvalidOrder(90);
                goto LABEL_263;
              }
              v198 = 0.0;
              if ( g_pGameRules != 0 )
                v198 = *&g_pGameRules[18].m_szQuestName[20];
              if ( *(&v95[6].m_iszPrivateVScripts.u.m_pAsString + 1) > v198 )
              {
                DOTA_ReportInvalidOrder(91);
                goto LABEL_263;
              }
              if ( (*(v95->_vptr_IHandleEntity + 438))(v95) != 0 )
              {
LABEL_750:
                DOTA_ReportInvalidOrder(89);
                goto LABEL_263;
              }
              if ( BYTE1(v95[7].m_isSteadyState.m_Ints[0]) != 0 )
              {
                DOTA_ReportInvalidOrder(98);
                goto LABEL_263;
              }
              if ( g_pGameRules != 0 )
              {
                HandleEntity = CEntityHandle::GetHandleEntity(&g_pGameRules[6].m_szQuestName[72]);
                if ( HandleEntity != 0 && BYTE5(HandleEntity[98]._vptr_IHandleEntity) == 0 )
                {
                  DOTA_ReportInvalidOrder(99);
                  goto LABEL_263;
                }
              }
LABEL_779:
              bAbilityOwnershipValidationd = v95;
LABEL_416:
              if ( orders->m_nOrderType == 29 )
              {
                if ( !bInstantOrder )
                {
                  if ( v95[3].m_MoveCollide.m_Value != MoveCollide_t::MOVECOLLIDE_DEFAULT
                    || (m_pDesc = v95[4].m_OnKilled.m_pDesc) == -1
                    || ((m_pDesc_high = HIDWORD(v95[4].m_OnKilled.m_pDesc), m_pDesc > m_pDesc_high)
                      ? (v120 = LODWORD(v95[4].m_OnKilled.m_pConnections) + m_pDesc_high + 1 - m_pDesc)
                      : (v120 = m_pDesc_high + 1 - m_pDesc),
                        v120 <= 0
                     || (QueuedOrder = CDOTA_BaseNPC::PeekLastQueuedOrder(v95), v122 = 1,
                                                                                QueuedOrder->m_nOrderType != 29)) )
                  {
                    v122 = 0;
                  }
                  if ( orders->m_bQueue || v122 != 0 )
                  {
LABEL_458:
                    v123 = v95[4].m_OnKilled.m_pDesc;
                    if ( v123 == -1
                      || ((v124 = HIDWORD(v95[4].m_OnKilled.m_pDesc), v123 > v124)
                        ? (v125 = LODWORD(v95[4].m_OnKilled.m_pConnections) + v124 + 1 - v123)
                        : (v125 = v124 + 1 - v123),
                          v125 <= 31) )
                    {
                      CUnitOrders::CUnitOrders(&ordersForThisUnit);
                      CUnitOrders::operator=(&ordersForThisUnit, orders);
                      ordersForThisUnit.m_bQueue = 0;
                      CUtlVectorBase<CEntityIndex,CUtlMemory<CEntityIndex,int>>::RemoveAll(&ordersForThisUnit.m_nUnits);
                      LODWORD(hTable) = CEntityInstance::GetEntityIndex(v95);
                      CUtlVectorBase<CEntityIndex,CUtlMemory<CEntityIndex,int>>::AddToTail(
                        &ordersForThisUnit.m_nUnits,
                        &hTable);
                      CDOTA_BaseNPC::QueueOrder(v95, &ordersForThisUnit);
                      CUtlVectorBase<CEntityIndex,CUtlMemory<CEntityIndex,int>>::~CUtlVectorBase(&ordersForThisUnit.m_nUnits);
                    }
                    else
                    {
                      v126 = CDOTA_PlayerResource::GetPlayer(g_pDOTAPlayerResource, g_nPlayerIndex);
                      SendHudErrorToPlayer(107, v126);
                    }
                    goto LABEL_263;
                  }
                }
              }
              else if ( orders->m_bQueue && !bInstantOrder )
              {
                goto LABEL_458;
              }
              if ( nOrderType == 9 || bInstantOrder || nOrderType == 33 )
                goto LABEL_466;
              if ( nOrderType == 8 )
              {
                if ( ((*(v18->_vptr_IHandleEntity + 251))(v18) & 0x800) != 0 )
                  goto LABEL_466;
              }
              else if ( nOrderType == 6
                     && ((*(v18->_vptr_IHandleEntity + 251))(v18) & 0x800) != 0
                     && v237 != 0
                     && pTargetNPCa == v95 )
              {
LABEL_466:
                autoattackType = 0;
                goto LABEL_427;
              }
              if ( g_bIsClientOrdered )
                CDOTA_BaseNPC::ClearQueuedOrders(v95);
              autoattackType = 1;
LABEL_427:
              v115 = 0;
              if ( CDOTA_BaseNPC::GetCurrentActiveAbility(v95) != 0 )
              {
                if ( (m_pAbilityData = CDOTA_BaseNPC::GetCurrentActiveAbility(v95)->m_pAbilityData) != 0
                  && (m_pszAbilityName = m_pAbilityData->m_pszAbilityName, m_pAbilityData->m_pszAbilityName != 0)
                  && (m_pszAbilityName == "item_tpscroll" || strcmp(m_pszAbilityName, "item_tpscroll") == 0)
                  || (v211 = CDOTA_BaseNPC::GetCurrentActiveAbility(v95)->m_pAbilityData) != 0
                  && (v212 = v211->m_pszAbilityName, v211->m_pszAbilityName != 0)
                  && (v212 == "item_travel_boots" || strcmp(v212, "item_travel_boots") == 0)
                  || (v213 = CDOTA_BaseNPC::GetCurrentActiveAbility(v95)->m_pAbilityData) != 0
                  && (v214 = v213->m_pszAbilityName, v213->m_pszAbilityName != 0)
                  && (v214 == "item_travel_boots_2" || strcmp(v214, "item_travel_boots_2") == 0) )
                {
                  v115 = 1;
                }
              }
              if ( CDOTA_BaseNPC::IsChanneling(v95) && (*(v95->_vptr_IHandleEntity + 413))(v95) != 0 && v115 )
                bAutoAttackAlwaysa = *((*(v95->_vptr_IHandleEntity + 413))(v95) + 4840);
              else
                bAutoAttackAlwaysa = 0;
              if ( v237 != 0 )
              {
                if ( v235 == 0 )
                  goto LABEL_441;
                v116 = 1;
                if ( ((*(v18->_vptr_IHandleEntity + 251))(v18) & 8) != 0 )
                {
                  v155 = CBaseEntity::GetAbsOrigin(pTargetNPCa);
                  v156 = CBaseEntity::GetAbsOrigin(v95);
                  bAutoattackAfterSpella = ((v156->x - v155->x) * (v156->x - v155->x))
                                         + ((v156->y - v155->y) * (v156->y - v155->y));
                  v157 = LODWORD(bAutoattackAfterSpella);
                  *v157.m128i_i32 = fsqrt(bAutoattackAfterSpella);
                  v116 = COERCE_FLOAT(_mm_cvtsi128_si32(v157)) <= (*(v18->_vptr_IHandleEntity + 226))(
                                                                    v18,
                                                                    &vec3_origin,
                                                                    0);
                }
              }
              else
              {
                v116 = 1;
                if ( v235 == 0 )
                  goto LABEL_441;
              }
              if ( ((*(v18->_vptr_IHandleEntity + 251))(v18) & 0x400200) != 0 )
              {
                v117 = bAutoAttackAlwaysa;
                if ( v116 )
                  v117 = 0;
                bAutoAttackAlwaysa = v117;
              }
LABEL_441:
              if ( (LOBYTE(v95[3].m_flFriction.m_Value) != 0
                 || CDOTA_BaseNPC::IsChanneling(v95) && orders->m_nUnits.m_Size > 1
                 || bAutoAttackAlwaysa != 0)
                && !bInstantOrder
                && !bForceThroughPseudoQueue
                && (nOrderType != 10 && nOrderType != 21 && nOrderType != 33
                 || (v215 = CEntityHandle::operator CEntityInstance *(&v95[3].m_iHammerID)) != 0
                 && BYTE3(v215[7]._vptr_IHandleEntity) != 0) )
              {
                CUnitOrders::CUnitOrders(&ordersForThisUnit);
                CUnitOrders::operator=(&ordersForThisUnit, orders);
                CUtlVectorBase<CEntityIndex,CUtlMemory<CEntityIndex,int>>::RemoveAll(&ordersForThisUnit.m_nUnits);
                LODWORD(hTable) = CEntityInstance::GetEntityIndex(v95);
                CUtlVectorBase<CEntityIndex,CUtlMemory<CEntityIndex,int>>::AddToTail(
                  &ordersForThisUnit.m_nUnits,
                  &hTable);
                CDOTA_BaseNPC::SetPseudoQueuedOrder(v95, &ordersForThisUnit);
                CUtlVectorBase<CEntityIndex,CUtlMemory<CEntityIndex,int>>::~CUtlVectorBase(&ordersForThisUnit.m_nUnits);
                v92 = orders->m_nUnits.m_Size;
                bInstantOrder = 0;
                goto LABEL_259;
              }
              if ( autoattackType != 0 )
              {
                CDOTA_BaseNPC::ClearPseudoQueuedOrder(v95);
                v95[3].m_MoveType.m_Value = MoveType_t::MOVETYPE_NONE;
              }
              else if ( nOrderType != 33 )
              {
                goto LABEL_490;
              }
              v127 = (*(v95->_vptr_IHandleEntity + 413))(v95);
              if ( v127 != 0 )
              {
                autoattackTypea = CDOTA_BaseNPC::GetAutoattackUnitType(v95);
                if ( CDOTAPlayer::GetUnitsAutoAttackMode(v127, autoattackTypea) == CDOTAClientMsg_UnitsAutoAttackMode_EMode::CDOTAClientMsg_UnitsAutoAttackMode_EMode_ALWAYS )
                  bAutoAttackAlwaysb = 1;
                else
                  bAutoAttackAlwaysb = (*(v95->_vptr_IHandleEntity + 448))(v95);
                bAutoattackAfterSpell = CDOTAPlayer::GetUnitsAutoAttackMode(v127, autoattackTypea) == CDOTAClientMsg_UnitsAutoAttackMode_EMode::CDOTAClientMsg_UnitsAutoAttackMode_EMode_AFTER_SPELLCAST;
                autoattackTypeb = CDOTAPlayer::GetUnitsAutoAttackMode(v127, autoattackTypea);
                if ( v235 != 0 )
                  v128 = (*(v18->_vptr_IHandleEntity + 222))(v18);
                else
                  v128 = 0;
                v129 = v237 != 0
                    && CDOTA_BaseNPC::IsDeniable(pTargetNPCa)
                    && v95->m_iTeamNum.m_Value == pTargetNPCa->m_iTeamNum.m_Value;
                v130 = 1;
                if ( bAutoAttackAlwaysb == 0 && (!bAutoattackAfterSpell || v262 > 3 || v128 == 0) )
                  v130 = !v129 && (v252 - 3) <= 1 && autoattackTypeb != AutoattackUnitType_t::AUTO_ATTACK_UNIT_NORMAL;
                LOBYTE(v95[5].m_iszPrivateVScripts.u.m_Id) = v130;
              }
LABEL_490:
              CModifierParams::CModifierParams(&ordersForThisUnit);
              m_pEntity = v95->m_pEntity;
              if ( m_pEntity != 0 )
              {
                v132 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
                v133 = 0x7FFF;
                if ( m_pEntity->m_EHandle.m_Index != -1 )
                  v133 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
                LOWORD(v287) = v133 | v287 & 0x8000;
                v287 = (v132 << 15) | v287 & 0x7FFF;
              }
              else
              {
                v287 = -1;
              }
              v282 = nOrderType;
              if ( v235 != 0 && (v134 = v18->m_pEntity) != 0 )
              {
                v135 = (v134->m_EHandle.m_Index >> 15) - (v134->m_flags & 1);
                v136 = 0x7FFF;
                if ( v134->m_EHandle.m_Index != -1 )
                  v136 = v134->m_EHandle.m_Index & 0x7FFF;
                LOWORD(ordersForThisUnit.m_nIssuerPlayerIndex) = v136 | ordersForThisUnit.m_nIssuerPlayerIndex & 0x8000;
                ordersForThisUnit.m_nIssuerPlayerIndex = (v135 << 15) | ordersForThisUnit.m_nIssuerPlayerIndex & 0x7FFF;
              }
              else
              {
                ordersForThisUnit.m_nIssuerPlayerIndex = -1;
              }
              ordersForThisUnit.m_nAbilityIndex.m_Data = orders->m_nIssuerPlayerIndex;
              if ( pRuneItem != 0 )
              {
                v137 = CBaseEntity::GetAbsOrigin(pRuneItem);
LABEL_501:
                v283 = v137->x;
                y = v137->y;
                v285 = v137->z;
                goto LABEL_502;
              }
              if ( pPhysicalItem != 0 )
              {
                v137 = CBaseEntity::GetAbsOrigin(pPhysicalItem);
                goto LABEL_501;
              }
              v283 = orders->m_vPosition.x;
              y = orders->m_vPosition.y;
              v285 = orders->m_vPosition.z;
LABEL_502:
              if ( v237 != 0 )
              {
                v138 = pTargetNPCa->m_pEntity;
                if ( v138 == 0 )
                  goto LABEL_526;
              }
              else
              {
                if ( pTargetTree == 0 )
                  goto LABEL_507;
                v138 = pTargetTree->m_pEntity;
                if ( v138 == 0 )
                {
LABEL_526:
                  v286 = -1;
                  goto LABEL_507;
                }
              }
              v139 = (v138->m_EHandle.m_Index >> 15) - (v138->m_flags & 1);
              if ( v138->m_EHandle.m_Index == -1 )
                v140 = 0x7FFF;
              else
                v140 = v138->m_EHandle.m_Index & 0x7FFF;
              LOWORD(v286) = v140 | v286 & 0x8000;
              v286 = (v139 << 15) | v286 & 0x7FFF;
LABEL_507:
              FireModifierEvent(modifierfunction::MODIFIER_EVENT_ON_ORDER, &ordersForThisUnit);
              v141 = dota_tutorial_game.m_pParent;
              if ( v141->m_Value.m_nValue != 0 && v262 <= 0x19 && v222 != 0 && v235 != 0 )
              {
                LODWORD(v141) = (*(v18->_vptr_IHandleEntity + 223))(v18);
                if ( v141 != 0 )
                {
                  v141 = (*(gameeventmanager->_vptr_IBaseInterface + 7))(gameeventmanager, "dota_item_used", 0, 0);
                  v142 = v141;
                  if ( v141 != 0 )
                  {
                    v237 = CDOTA_PlayerResource::GetPlayer(g_pDOTAPlayerResource, g_nPlayerIndex);
                    v143.m_Data = CEntityInstance::GetEntityIndex(v18).m_Data;
                    (*(v142->_vptr_ConCommandBase + 14))(v142, "ItemEntityIndex", v143.m_Data);
                    v144.m_Data = CEntityInstance::GetEntityIndex(v95).m_Data;
                    (*(v142->_vptr_ConCommandBase + 14))(v142, "UnitEntityIndex", v144.m_Data);
                    v235 = *(v142->_vptr_ConCommandBase + 14);
                    if ( v237 != 0 )
                      v145 = (*(v237->_vptr_IHandleEntity + 393))(v237);
                    else
                      v145 = 0;
                    v235(v142, "PlayerID", v145);
                    v146 = &v18->m_pAbilityData->m_pszAbilityName;
                    if ( v146 != 0 )
                    {
                      v147 = *v146;
                      v148 = "<NoAbilityName>";
                      if ( v147 != 0 )
                        v148 = v147;
                    }
                    else
                    {
                      v148 = "<NoAbilityName>";
                    }
                    (*(v142->_vptr_ConCommandBase + 17))(v142, "itemname", v148);
                    LODWORD(v141) = (*(gameeventmanager->_vptr_IBaseInterface + 8))(gameeventmanager, v142, 1);
                  }
                }
              }
              if ( nOrderType > 0x20 )
              {
LABEL_521:
                if ( bUpdateImmediately && dota_orders_update_bots_immediately.m_pParent->m_Value.m_nValue != 0 )
                {
                  v149 = (*(v95->_vptr_IHandleEntity + 375))(v95);
                  v150 = (*(*v149 + 24LL))(v149);
                  Behavior<CDOTA_BaseNPC>::Update(v150, v95, 0.0, v151);
                }
              }
              else
              {
                switch ( v141 )
                {
                  case 0:
                    CDOTA_BaseNPC::MoveToTargetToAttack(v95, pTargetEntity);
                    goto LABEL_521;
                  case 1:
                    CDOTA_BaseNPC::CastAbilityOnPosition(v95, v219, v18, g_nPlayerIndex);
                    goto LABEL_521;
                  case 2:
                    CDOTA_BaseNPC::CastAbilityOnTarget(v95, pTargetNPCa, v18, g_nPlayerIndex);
                    goto LABEL_521;
                  case 3:
                    CDOTA_BaseNPC::CastAbilityOnTarget(v95, pTargetTree, v18, g_nPlayerIndex);
                    goto LABEL_521;
                  case 4:
                    CDOTA_BaseNPC::CastAbilityNoTarget(v95, v18, g_nPlayerIndex);
                    goto LABEL_521;
                  case 5:
                    CDOTA_BaseNPC::CastAbilityToggle(v95, v18, g_nPlayerIndex);
                    goto LABEL_521;
                  case 6:
                    CDOTA_BaseNPC::Hold(v95);
                    goto LABEL_521;
                  case 7:
                    CDOTABaseAbility::PayGoldCostForUpgrade(v18);
                    if ( bAbilityOwnershipValidationd != 0 )
                      (*(bAbilityOwnershipValidationd->_vptr_IHandleEntity + 495))(bAbilityOwnershipValidationd, v18);
                    else
                      CDOTABaseAbility::UpgradeAbility(v18, 0);
                    goto LABEL_521;
                  case 8:
                    CDOTA_BaseNPC::DropItemAtPosition(v95, v219, pFilterKeysa);
                    goto LABEL_521;
                  case 9:
                    CDOTA_BaseNPC::MoveToNPCToGiveItem(v95, pTargetNPCa, pFilterKeysa);
                    goto LABEL_521;
                  case 10:
                    CDOTA_BaseNPC::PickupDroppedItem(v95, pPhysicalItem);
                    goto LABEL_521;
                  case 11:
                    CDOTA_BaseNPC::PickupRune(v95, pRuneItem);
                    goto LABEL_521;
                  case 12:
                    v168 = g_nPlayerIndex;
                    v169 = KeyValues::GetName(pAbilityKV);
                    v170 = CDOTA_BaseNPC::AttemptToPurchaseItem(v95, v169, v168, 0);
                    if ( v170 == DOTA_INVALID_ORDERS::DOTA_ORDER_SUCCESS )
                      goto LABEL_521;
                    DOTA_ReportInvalidOrder(v170);
                    break;
                  case 13:
                    CDOTA_BaseNPC::SellItem(v95, pFilterKeysa);
                    goto LABEL_521;
                  case 14:
                    CDOTA_BaseNPC::DisassembleItem(v95, pFilterKeysa);
                    goto LABEL_521;
                  case 15:
                    CDOTA_BaseNPC::MoveItem(v95, pFilterKeysa, orders->m_nTargetIndex.m_Data);
                    goto LABEL_521;
                  case 16:
                    v167 = !v18->m_bAutoCastState.m_Value;
                    if ( v18->m_bAutoCastState.m_Value != v167 )
                    {
                      (*(v18->_vptr_IHandleEntity + 22))(v18, 836, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
                      v18->m_bAutoCastState.m_Value = v167;
                    }
                    goto LABEL_521;
                  case 17:
                    if ( orders->m_nTargetIndex.m_Data != 0 )
                      LOBYTE(v95[5].m_iszPrivateVScripts.u.m_Id) = 0;
                    CDOTA_BaseNPC::Stop(v95);
                    goto LABEL_521;
                  case 18:
                    goto LABEL_521;
                  case 19:
                    CDOTA_BaseNPC_Hero::Buyback(bAbilityOwnershipValidationd);
                    goto LABEL_521;
                  case 20:
                    CDOTAGamerules::Glyph(g_pGameRules, v95->m_iTeamNum.m_Value);
                    goto LABEL_521;
                  case 21:
                    v166 = CDOTA_BaseNPC::EjectItemFromStash(v95, pFilterKeysa);
                    if ( v166 != DOTA_INVALID_ORDERS::DOTA_ORDER_SUCCESS )
                      DOTA_ReportInvalidOrder(v166);
                    goto LABEL_521;
                  case 22:
                    CDOTA_BaseNPC::CastAbilityOnTarget(v95, pRuneItem, v18, g_nPlayerIndex);
                    goto LABEL_521;
                  case 23:
                    (*(v18->_vptr_IHandleEntity + 215))(v18, g_nPlayerIndex);
                    goto LABEL_521;
                  case 24:
                    if ( bUsePseudoFormation )
                      v162 = (positionOffsets.m_Memory.m_pMemory + vec);
                    else
                      v162 = &vec3_origin;
                    *&v163.m_Index = orders->m_vPosition.x + v162->x;
                    v164 = orders->m_vPosition.z;
                    *&v271[9].m_Index = orders->m_vPosition.y + v162->y;
                    *&v165.m_Index = v164 + v162->z;
                    v271[8] = v163;
                    v271[10] = v165;
                    CDOTA_BaseNPC::MoveToDirection(v95, v219);
                    goto LABEL_521;
                  case 25:
                    if ( bUsePseudoFormation )
                      v158 = (positionOffsets.m_Memory.m_pMemory + vec);
                    else
                      v158 = &vec3_origin;
                    *&v159.m_Index = orders->m_vPosition.x + v158->x;
                    v160 = orders->m_vPosition.z;
                    *&v271[17].m_Index = orders->m_vPosition.y + v158->y;
                    *&v161.m_Index = v160 + v158->z;
                    v271[16] = v159;
                    v271[18] = v161;
                    CDOTA_BaseNPC::PatrolToPosition(v95, v219);
                    goto LABEL_521;
                  case 26:
                    (*(v18->_vptr_IHandleEntity + 319))(v18, *&orders->m_vPosition.x, orders->m_vPosition.z);
                    goto LABEL_521;
                  case 27:
                    CDOTAGamerules::Radar(g_pGameRules, v95, &orders->m_vPosition);
                    goto LABEL_521;
                  default:
                    goto LABEL_415;
                }
              }
              break;
            case 0x18u:
              v192 = v95->m_iTeamNum.m_Value;
              if ( v192 == 2 )
              {
                v193 = *g_pGameRules[14].m_szQuestName;
              }
              else if ( v192 == 3 )
              {
                v193 = *&g_pGameRules[14].m_szQuestName[4];
              }
              else
              {
                v193 = *&g_pGameRules[14].m_szQuestName[4 * v192 + 8];
              }
              if ( v193 <= *&g_pGameRules[18].m_szQuestName[20] )
                goto LABEL_415;
              DOTA_ReportInvalidOrder(86);
              goto LABEL_263;
            case 0x1Fu:
              v195 = v95->m_iTeamNum.m_Value;
              if ( v195 == 2 )
              {
                v196 = *&g_pGameRules[14].m_szQuestName[64];
              }
              else if ( v195 == 3 )
              {
                v196 = *&g_pGameRules[14].m_szQuestName[68];
              }
              else
              {
                v196 = *&g_pGameRules[14].m_szQuestName[4 * v195 + 72];
              }
              if ( v196 <= *&g_pGameRules[18].m_szQuestName[20] )
                goto LABEL_415;
              DOTA_ReportInvalidOrder(104);
              goto LABEL_263;
            default:
LABEL_415:
              bAbilityOwnershipValidationd = 0;
              goto LABEL_416;
          }
          goto LABEL_263;
        }
LABEL_355:
        if ( nOrderType == 30 || nOrderType == 5 )
        {
          SnapToGround(&orders->m_vPosition, 0);
          v108 = (*(v18->_vptr_IHandleEntity + 258))(v18, &orders->m_vPosition);
          if ( v108 != 0 )
          {
            if ( v108 != 23 )
            {
              v152 = &v18->m_pAbilityData->m_pszAbilityName;
              if ( v152 != 0 )
              {
                v153 = *v152;
                v154 = "<NoAbilityName>";
                if ( v153 != 0 )
                  v154 = v153;
              }
              else
              {
                v154 = "<NoAbilityName>";
              }
              Warning(
                "Cast failed, but not sure why! (ability: %s, target loc: %2.2f %2.2f %2.2f, result: %d)",
                v154,
                orders->m_vPosition.x,
                orders->m_vPosition.y,
                orders->m_vPosition.z,
                v108);
              goto LABEL_263;
            }
            v107 = (*(v18->_vptr_IHandleEntity + 259))(v18, &orders->m_vPosition);
            goto LABEL_404;
          }
        }
        goto LABEL_357;
      }
LABEL_383:
      CUtlVectorBase<Vector,CUtlMemory<Vector,int>>::~CUtlVectorBase(&positionOffsets);
      if ( VProf_29 )
LABEL_16:
        CVProfile::ExitScope(&g_VProfCurrentProfile);
      return;
    case 5u:
      if ( ((*(v18->_vptr_IHandleEntity + 255))(v18) & 0x10) == 0
        && ((*(v18->_vptr_IHandleEntity + 255))(v18) & 0x4000) == 0 )
      {
        goto LABEL_638;
      }
      goto LABEL_210;
    case 6u:
      if ( ((*(v18->_vptr_IHandleEntity + 255))(v18) & 8) == 0 )
        goto LABEL_623;
      if ( pTargetNPCa == 0 )
        goto LABEL_210;
      v175 = UTIL_EntityByIndex(orders->m_nUnits.m_Memory.m_pMemory->m_Data);
      if ( v175 != 0 && v175->m_bIsDOTANPC )
        v176 = v175;
      else
        v176 = 0;
      if ( ((*(v18->_vptr_IHandleEntity + 255))(v18) & 0x20000) != 0
        && (pTargetNPCa->m_nUnitState64.m_Value & 4) != 0
        && (v176 == 0 || CDOTA_BaseNPC::FindModifierByName(v176, "MODIFIER_PROPERTY_OVERRIDE_ATTACK_MAGICAL", 0) == 0) )
      {
        DOTA_ReportInvalidOrder(32);
        goto LABEL_15;
      }
      if ( pTargetNPCa->m_bIsAncient.m_Value )
      {
        if ( v18->m_pAbilityData == 0 )
          CDOTABaseAbility::LoadAbilityData(v18, 0);
        if ( (v18->m_pAbilityData->m_iAbilityTargetFlags & 0x200) != 0 )
        {
          DOTA_ReportInvalidOrder(50);
          goto LABEL_15;
        }
      }
      if ( pTargetNPCa->m_bIsSummoned.m_Value )
      {
        if ( v18->m_pAbilityData == 0 )
          CDOTABaseAbility::LoadAbilityData(v18, 0);
        if ( (v18->m_pAbilityData->m_iAbilityTargetFlags & 0x1000) != 0 )
        {
          DOTA_ReportInvalidOrder(76);
          goto LABEL_15;
        }
      }
      if ( (pTargetNPCa->m_nUnitState64.m_Value & 0x20000000) != 0 )
      {
        if ( v18->m_pAbilityData == 0 )
          CDOTABaseAbility::LoadAbilityData(v18, 0);
        if ( (v18->m_pAbilityData->m_iAbilityTargetFlags & 0x800) != 0 )
        {
          DOTA_ReportInvalidOrder(79);
          goto LABEL_15;
        }
      }
      if ( !pTargetNPCa->m_bIsIllusion.m_Value )
        goto LABEL_210;
      if ( v18->m_pAbilityData == 0 )
        CDOTABaseAbility::LoadAbilityData(v18, 0);
      if ( (v18->m_pAbilityData->m_iAbilityTargetFlags & 0x2000) == 0 )
        goto LABEL_210;
      DOTA_ReportInvalidOrder(40);
      goto LABEL_15;
    case 7u:
      if ( ((*(v18->_vptr_IHandleEntity + 255))(v18) & 8) != 0 )
        goto LABEL_210;
LABEL_623:
      DOTA_ReportInvalidOrder(102);
      goto LABEL_15;
    case 8u:
      if ( ((*(v18->_vptr_IHandleEntity + 255))(v18) & 4) != 0
        || (((*(v18->_vptr_IHandleEntity + 255))(v18) >> 8) & 0x80u) != 0 )
      {
        goto LABEL_210;
      }
      DOTA_ReportInvalidOrder(103);
      goto LABEL_15;
    case 9u:
      if ( ((*(v18->_vptr_IHandleEntity + 255))(v18) & 0x200) != 0 )
        goto LABEL_210;
      DOTA_ReportInvalidOrder(25);
      goto LABEL_15;
    case 0xBu:
      if ( CDOTABaseAbility::CanAbilityBeUpgraded(v18) != AbilityLearnResult_t::ABILITY_CAN_BE_UPGRADED )
        goto LABEL_672;
      if ( v18->m_bHidden.m_Value )
        goto LABEL_195;
      if ( !CDOTABaseAbility::IsOwnersGoldEnoughForUpgrade(v18) )
        goto LABEL_197;
      if ( (*(v18->_vptr_IHandleEntity + 214))(v18) != 2 )
        goto LABEL_210;
      v180 = UTIL_EntityByIndex(orders->m_nUnits.m_Memory.m_pMemory->m_Data);
      v181 = v180;
      if ( v180 == 0 || !v180->m_bIsDOTANPC )
      {
LABEL_672:
        DOTA_ReportInvalidOrder(12);
        goto LABEL_15;
      }
      v182 = &v18->m_pAbilityData->m_pszAbilityName;
      v183 = "<NoAbilityName>";
      if ( v182 != 0 )
      {
        v184 = *v182;
        v183 = "<NoAbilityName>";
        if ( v184 != 0 )
          v183 = v184;
      }
      SpecialAbilityIndex = CDOTA_BaseNPC::GetSpecialAbilityIndex(v181, v183);
      if ( CDOTA_BaseNPC::CanUpgradeSpecialAbility(v181, SpecialAbilityIndex) )
        goto LABEL_210;
      DOTA_ReportInvalidOrder(13);
      goto LABEL_15;
    case 0xDu:
      if ( pTargetNPCa->m_bHasInventory )
      {
        m_iUnitType = pTargetNPCa->m_iUnitType;
      }
      else
      {
        m_iUnitType = pTargetNPCa->m_iUnitType;
        if ( (m_iUnitType & 0x200) == 0 )
          goto LABEL_654;
      }
      v179 = 0;
      if ( (m_iUnitType & 3) != 0 )
        v179 = !pTargetNPCa->m_bIsIllusion.m_Value;
      if ( (*(pTargetNPCa->_vptr_IHandleEntity + 436))(pTargetNPCa) != 0
        || !v179 && (pTargetNPCa->m_iUnitType & 0x300) == 0 )
      {
        goto LABEL_654;
      }
      goto LABEL_210;
    case 0xEu:
      if ( pPhysicalItem != 0 )
        goto LABEL_210;
      DOTA_ReportInvalidOrder(9);
      goto LABEL_15;
    case 0xFu:
    case 0x1Au:
      if ( pRuneItem != 0 )
        goto LABEL_210;
      DOTA_ReportInvalidOrder(10);
      goto LABEL_15;
    case 0x12u:
      if ( (*(pFilterKeysa->_vptr_IHandleEntity + 353))(pFilterKeysa) != 0 )
        goto LABEL_210;
      DOTA_ReportInvalidOrder(81);
      goto LABEL_15;
    case 0x13u:
      if ( orders->m_nTargetIndex.m_Data <= 0xEu )
        goto LABEL_210;
      DOTA_ReportInvalidOrder(52);
      goto LABEL_15;
    case 0x14u:
      if ( ((*(v18->_vptr_IHandleEntity + 255))(v18) & 0x1000) != 0 )
        goto LABEL_210;
      DOTA_ReportInvalidOrder(44);
      goto LABEL_15;
    case 0x19u:
      if ( CDOTA_UnitInventory::FindItemSlotInInventory(pInventory, pFilterKeysa, 2) != -1 )
        goto LABEL_210;
      DOTA_ReportInvalidOrder(93);
      goto LABEL_15;
    case 0x1Bu:
      if ( m_nIssuerPlayerIndex > 0x40
        || (v186 = CDOTA_PlayerResource::GetPlayer(g_pDOTAPlayerResource, g_nPlayerIndex)) == 0 )
      {
        DOTA_ReportInvalidOrder(0);
        goto LABEL_15;
      }
      Caster = CDOTABaseAbility::GetCaster(v18);
      v188 = Caster->m_iIsControllableByPlayer64.m_Value;
      if ( !_bittest64(&v188, g_nPlayerIndex)
        && CDOTA_BaseNPC::GetOpposingTeamNumber(Caster) != v186->m_iTeamNum.m_Value )
      {
        DOTA_ReportInvalidOrder(100);
        goto LABEL_15;
      }
      if ( !v18->m_bHidden.m_Value )
        goto LABEL_210;
      goto LABEL_195;
    case 0x1Eu:
      if ( ((*(v18->_vptr_IHandleEntity + 251))(v18) & 0x40000000) != 0 )
        goto LABEL_210;
LABEL_638:
      DOTA_ReportInvalidOrder(101);
      goto LABEL_15;
    default:
      DOTA_ReportInvalidOrder(3);
      goto LABEL_15;
  }
}


// DOTA_ReportInvalidOrder  (line 2036, @0x00000000024c02b0, libserver.so)  // inlines: GetBool, GetInt
// calls: DevMsg(char const*,...), CDOTA_PlayerResource::GetPlayer, SendHudErrorToPlayer
// callers: DOTA_ExecuteOrders
// strings: "Game code", "%s tried to execute invalid order (%d). %s\n"
// globals: g_bIsClientOrdered, g_bSendHudErrorToClient, g_nPlayerIndex
void __fastcall DOTA_ReportInvalidOrder(int nOrderID)
{
  const char *v2; // rsi
  CDOTAPlayer *Player; // rax

  if ( dota_suppress_invalid_orders.m_pParent->m_Value.m_nValue == 0 )
  {
    v2 = "Client";
    if ( !g_bIsClientOrdered )
      v2 = "Game code";
    DevMsg("%s tried to execute invalid order (%d). %s\n", v2, nOrderID, g_DOTAInvalidOrderText[nOrderID]);
  }
  if ( g_bSendHudErrorToClient )
  {
    Player = CDOTA_PlayerResource::GetPlayer(g_pDOTAPlayerResource, g_nPlayerIndex);
    SendHudErrorToPlayer(nOrderID, Player);
  }
}


// DOTA_ReportCustomInvalidOrder  (line 2049, @0x00000000024c0340, libserver.so)
// calls: DevMsg(char const*,...), CDOTA_PlayerResource::GetPlayer, SendHudErrorToPlayer
// callers: DOTA_ExecuteOrders
// strings: "Game code", "%s tried to execute a custom invalid order: %s\n"
// globals: g_bIsClientOrdered, g_bSendHudErrorToClient, g_nPlayerIndex
void __fastcall DOTA_ReportCustomInvalidOrder(const char *pErrorName)
{
  __int64 v2; // rax
  const char *v3; // rsi
  CDOTAPlayer *Player; // rax

  v2 = (*(*g_pLocalize + 288LL))(g_pLocalize, pErrorName);
  v3 = "Client";
  if ( !g_bIsClientOrdered )
    v3 = "Game code";
  DevMsg("%s tried to execute a custom invalid order: %s\n", v3, v2);
  if ( g_bSendHudErrorToClient )
  {
    Player = CDOTA_PlayerResource::GetPlayer(g_pDOTAPlayerResource, g_nPlayerIndex);
    SendHudErrorToPlayer(pErrorName, Player);
  }
}


// Script_ExecuteOrderFromTable  (line 2059, @0x0000000002548380, libserver.so)  // inlines: AddToTail, CCopyableUtlVector, CUnitOrders, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<CEntityIndex>, Element, GetBool, GrowMemory, Purge, Reset, SetRaw, operator(), operator=, operator[], ~CCopyableUtlVector, ~CUnitOrders, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~unique_ptr
// calls: ScriptTableToKeyValues, KeyValues::GetInt, KeyValues::GetString, sscanf, DOTA_ExecuteOrders, CUtlVectorBase<CEntityIndex, CUtlMemory<CEntityIndex, int> >::RemoveAll, KeyValues::~KeyValues, KeyValues::operator delete, CUtlMemory<CEntityIndex, int>::Purge, CUtlMemory<CEntityIndex, int>::Grow, CUtlVectorBase<CEntityIndex, CUtlMemory<CEntityIndex, int> >::~CUtlVectorBase, _Unwind_Resume
// strings: "order_keys", "UnitIndex"
void __fastcall Script_ExecuteOrderFromTable(HSCRIPT hOrderTable)
{
  KeyValues *v1; // rbx
  vec_t y; // xmm0_4
  vec_t z; // xmm0_4
  int32 Int; // r15d
  const char *String; // rax
  CUnitOrders orders; // [rsp+0h] [rbp-70h] BYREF

  orders.m_bQueue = 0;
  v1 = ScriptTableToKeyValues(g_pScriptVM, "order_keys", hOrderTable);
  orders.m_nUnits.m_Size = 0;
  memset(&orders.m_nUnits.m_Memory, 0, 28);
  orders.m_vPosition.x = vec3_origin.x;
  y = vec3_origin.y;
  orders.m_nOrderSequenceNumber = 0;
  orders.m_vPosition.y = y;
  z = vec3_origin.z;
  orders.m_nIssuerPlayerIndex = -1;
  orders.m_vPosition.z = z;
  Int = KeyValues::GetInt(v1, "UnitIndex", -1);
  CUtlMemory<CEntityIndex,int>::Grow(&orders.m_nUnits.m_Memory, 1);
  orders.m_nUnits.m_Size = 1;
  if ( orders.m_nUnits.m_Memory.m_pMemory != 0 )
    orders.m_nUnits.m_Memory.m_pMemory->m_Data = Int;
  orders.m_nOrderType = KeyValues::GetInt(v1, "OrderType", 0);
  orders.m_nTargetIndex.m_Data = KeyValues::GetInt(v1, "TargetIndex", -1);
  orders.m_nAbilityIndex.m_Data = KeyValues::GetInt(v1, "AbilityIndex", -1);
  String = KeyValues::GetString(v1, "Position", 0, 0, 0);
  orders.m_vPosition = vec3_origin;
  if ( String != 0 )
    sscanf(String, "%f %f %f", &orders.m_vPosition, &orders.m_vPosition.y, &orders.m_vPosition.z);
  orders.m_bQueue = KeyValues::GetInt(v1, "Queue", 0) != 0;
  DOTA_ExecuteOrders(&orders, 0, 0, 0);
  CUtlVectorBase<CEntityIndex,CUtlMemory<CEntityIndex,int>>::RemoveAll(&orders.m_nUnits);
  if ( (orders.m_nUnits.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CEntityIndex,int>::Purge(&orders.m_nUnits.m_Memory);
    if ( (orders.m_nUnits.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CEntityIndex,int>::Purge(&orders.m_nUnits.m_Memory);
  }
  if ( v1 != 0 )
  {
    KeyValues::~KeyValues(v1);
    KeyValues::operator delete(v1);
  }
}


