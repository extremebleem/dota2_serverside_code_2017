// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/dota_combatlog.cpp:2089
struct sHeroCombatInfo {
	int iDamageDoneToHero[64];  // +0x0
	int iDamageDoneToTower;  // +0x100
	int iDamageDone;  // +0x104
	int iHealingDone;  // +0x108
	float fStunDuration;  // +0x10c
	float fSlowDuration;  // +0x110
	int iDamageDoneWithAbility[16];  // +0x114

	// sizeof = 340
};

// src/game/server/dota/dota_combatlog.cpp:2940
class CKillCamBase {
	int ()() * * _vptr.CKillCamBase;  // +0x0
	CKillCamBase(CKillCamBase &);
	CKillCamBase(const CKillCamBase &);
	CKillCamBase();
	virtual int GetTotalDamage();
	virtual bool ShouldBeBumped();

	// vtable[0] GetTotalDamage
	// vtable[1] ShouldBeBumped
	// sizeof = 8
};

// src/game/server/dota/dota_combatlog.cpp:2953
class CKillCamAbilityDamage : public CKillCamBase {
public:

	int m_iAbilityName;  // +0x8
	short unsigned int m_usAbilityIndex;  // +0xc

	int m_iTotalDamage;  // +0x10
	CKillCamAbilityDamage(CKillCamAbilityDamage &);
	CKillCamAbilityDamage(const CKillCamAbilityDamage &);
	CKillCamAbilityDamage();
	virtual int GetTotalDamage();
	virtual bool ShouldBeBumped();

	// vtable[0] GetTotalDamage
	// vtable[1] ShouldBeBumped
	// sizeof = 24
};

// src/game/server/dota/dota_combatlog.cpp:2976
class CKillCamAttackerEntry : public CKillCamBase {
public:

	uint32 m_unAttackerNameID;  // +0x8
	int m_iTotalDamage;  // +0xc
	int m_iPlayerID;  // +0x10
	EHANDLE m_hAttacker;  // +0x14
	CKillCamAttackerEntry(const CKillCamAttackerEntry &);
	CKillCamAttackerEntry();
	~CKillCamAttackerEntry();
	void UpdateAbilityInfo(int, int, short unsigned int);
	virtual int GetTotalDamage();
	virtual bool ShouldBeBumped();
	bool IsHero();

	// vtable[0] GetTotalDamage
	// vtable[1] ShouldBeBumped
	// sizeof = 56
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// ICLSearchFieldFactory::CreateSearchFields  (line 50, @0x000000000246cf70, libserver.so)
// callers: CDOTA_CombatAnalyzer::ParseEventSearchFields
// globals: ICLSearchFieldFactory::sm_pFirst
ICLSearchFields *__fastcall ICLSearchFieldFactory::CreateSearchFields(
        DOTA_COMBATLOG_TYPES nType,
        CDOTAPlayer *pPlayer,
        KeyValues *pKeyValues)
{
  ICLSearchFieldFactory *v4; // rdi
  ICLSearchFields *result; // rax

  v4 = ICLSearchFieldFactory::sm_pFirst;
  if ( ICLSearchFieldFactory::sm_pFirst == 0 )
    return 0;
  while ( v4->m_nType != nType )
  {
    v4 = v4->m_pNext;
    if ( v4 == 0 )
      return 0;
  }
  result = v4->CreateSearchFields(pPlayer, pKeyValues);
  result->m_iType = nType;
  return result;
}


// ICLSearchFields::~ICLSearchFields  (line 64, @0x0000000002465800, libserver.so)  // inlines: Purge, RemoveAll, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: operator delete, CUtlMemory<ICLSearchFields::DynamicValueLookup_t, int>::Purge
// callers: ICLSearchFields::~ICLSearchFields, SCLEndKillstreakFields::~SCLEndKillstreakFields, SCLSuccessfulScanFields::~SCLSuccessfulScanFields, SCLTreeCutDownFields::~SCLTreeCutDownFields, SCLGoldChangeFields::~SCLGoldChangeFields, SCLAttackEvadeFields::~SCLAttackEvadeFields, SCLUnitSummonedFields::~SCLUnitSummonedFields, SCLPhysicalDamagePreventedFields::~SCLPhysicalDamagePreventedFields, SCLManaDamageFields::~SCLManaDamageFields, SCLAegisTakenFields::~SCLAegisTakenFields, SCLAlliedGoldFields::~SCLAlliedGoldFields, SCLInterruptChannelFields::~SCLInterruptChannelFields (69 total)
void __fastcall ICLSearchFields::~ICLSearchFields(ICLSearchFields *const this)
{
  CUtlVector<ICLSearchFields::DynamicValueLookup_t,CUtlMemory<ICLSearchFields::DynamicValueLookup_t,int> > *m_pDynamicValues; // rbx
  bool v3; // zf

  this->_vptr_ICLSearchFields = off_40DF690;  // vptr: ICLSearchFields
  m_pDynamicValues = this->m_pDynamicValues;
  if ( m_pDynamicValues != 0 )
  {
    v3 = (m_pDynamicValues->m_Memory.m_nGrowSize & 0xC0000000) == 0;
    m_pDynamicValues->m_Size = 0;
    if ( v3 )
    {
      CUtlMemory<ICLSearchFields::DynamicValueLookup_t,int>::Purge(&m_pDynamicValues->m_Memory);
      if ( (m_pDynamicValues->m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<ICLSearchFields::DynamicValueLookup_t,int>::Purge(&m_pDynamicValues->m_Memory);
    }
    operator delete(m_pDynamicValues);
    this->m_pDynamicValues = 0;
  }
}


// ICLSearchFields::~ICLSearchFields  (line 64, @0x0000000002465870, libserver.so)
// calls: ICLSearchFields::~ICLSearchFields, operator delete
void __fastcall ICLSearchFields::~ICLSearchFields(ICLSearchFields *const this)
{
  ICLSearchFields::~ICLSearchFields(this);
  operator delete(this);
}


// ICLSearchFields::ParseQueryStringID  (line 73, @0x00000000024801d0, libserver.so)  // inlines: AddToTail, CEntityHandle, CUtlMemory, CUtlVectorBase, CopyConstruct<ICLSearchFields::DynamicValueLookup_t>, Element, FStrEq, GetAssignedHero, GetClassNameAsCStr, GetClassname, GetEntryIndex, GetHandleEntity, GetInstance, GetSerialNumber, GetTeamNumber, GrowMemory, IndexToIdentity, Init, LookupEntity, String, ToDOTABaseNPC, ToDOTABaseNPCHero, V_isdigit, V_isempty, _V_strcmp, atoi, operator CBaseEntity*, operator[]
// calls: strtol, CDOTA_PlayerResource::GetSelectedHeroName, CDOTA_CombatLog::FindOrAddName, operator new, CUtlMemory<ICLSearchFields::DynamicValueLookup_t, int>::Grow
// callers: CCLSearchFieldFactory<SCLEndKillstreakFields, (DOTA_COMBATLOG_TYPES)37>::CreateSearchFields, CCLSearchFieldFactory<SCLPlayerStatsFields, (DOTA_COMBATLOG_TYPES)14>::CreateSearchFields, CCLSearchFieldFactory<SCLEndGameStatsFields, (DOTA_COMBATLOG_TYPES)27>::CreateSearchFields, CCLSearchFieldFactory<SCLInterruptChannelFields, (DOTA_COMBATLOG_TYPES)28>::CreateSearchFields, CCLSearchFieldFactory<SCLAlliedGoldFields, (DOTA_COMBATLOG_TYPES)29>::CreateSearchFields, CCLSearchFieldFactory<SCLPhysicalDamagePreventedFields, (DOTA_COMBATLOG_TYPES)32>::CreateSearchFields, CCLSearchFieldFactory<SCLGoldChangeFields, (DOTA_COMBATLOG_TYPES)8>::CreateSearchFields, CCLSearchFieldFactory<SCLTreeCutDownFields, (DOTA_COMBATLOG_TYPES)35>::CreateSearchFields, CCLSearchFieldFactory<SCLSuccessfulScanFields, (DOTA_COMBATLOG_TYPES)36>::CreateSearchFields, CCLSearchFieldFactory<SCLAegisTakenFields, (DOTA_COMBATLOG_TYPES)30>::CreateSearchFields, CCLSearchFieldFactory<SCLAttackEvadeFields, (DOTA_COMBATLOG_TYPES)34>::CreateSearchFields, CCLSearchFieldFactory<SCLItemPurchaseFields, (DOTA_COMBATLOG_TYPES)11>::CreateSearchFields (34 total)
// strings: "!hero", "!playerid", "!team", "!enemyteam"
// globals: g_DOTACombatLog
void __fastcall ICLSearchFields::ParseQueryStringID(
        ICLSearchFields *const this,
        CombatLogStringID_t *pStringID,
        CDOTAPlayer *pPlayer,
        const char *pszName)
{
  const char *SelectedHeroName; // rax
  char v6; // cl
  const char *v8; // rdi
  bool v9; // zf
  __int64 v10; // rcx
  char *v11; // rsi
  const char *v12; // rdi
  bool v13; // zf
  __int64 v14; // rcx
  int v15; // eax
  CUtlVector<ICLSearchFields::DynamicValueLookup_t,CUtlMemory<ICLSearchFields::DynamicValueLookup_t,int> > *m_pDynamicValues; // r13
  int v17; // r14d
  int m_Size; // r12d
  int v19; // edx
  __int64 v20; // rdx
  unsigned __int16 v21; // cx
  int v22; // edi
  uint32 v23; // eax
  CEntitySystem *v24; // rsi
  CEntityIdentity *v25; // rcx
  __int64 v26; // rdi
  CEntityIdentity *v27; // rcx
  int v28; // eax
  const char *m_pAsString; // rsi
  unsigned __int8 m_Value; // al
  CUtlVector<ICLSearchFields::DynamicValueLookup_t,CUtlMemory<ICLSearchFields::DynamicValueLookup_t,int> > *v31; // rax
  CEntityInstance *m_pInstance; // rax
  CEntityIdentity *m_pEntity; // rax

  SelectedHeroName = pszName;
  *pStringID = -1;
  if ( pszName == 0 )
    return;
  v6 = *pszName;
  if ( v6 == 0 )
    return;
  if ( v6 != 33 )
    goto LABEL_35;
  v8 = "!hero";
  v9 = SelectedHeroName == "!hero";
  if ( SelectedHeroName == "!hero" )
    goto LABEL_26;
  v10 = 6;
  v11 = SelectedHeroName;
  do
  {
    if ( v10 == 0 )
      break;
    v9 = *v11++ == *v8++;
    --v10;
  }
  while ( v9 );
  if ( v9 )
  {
LABEL_26:
    if ( pPlayer == 0 )
      return;
    if ( pPlayer->m_hAssignedHero.m_Value.m_Index == -1 )
    {
      v21 = 0x7FFF;
      v22 = 0x7FFF;
    }
    else
    {
      v21 = pPlayer->m_hAssignedHero.m_Value.m_Index & 0x7FFF;
      v22 = v21;
    }
    v23 = (pPlayer->m_hAssignedHero.m_Value.m_Index >> 15 << 15) | v21 & 0x7FFF;
    v24 = g_pEntitySystem;
    if ( v23 + 2 > 1 )
    {
      v25 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v22 >> 9];
      if ( v25 != 0 )
      {
        v26 = v22 & 0x1FF;
        v24 = (8 * v26);
        v27 = &v25[v26];
        if ( v27 != 0 && v23 == v27->m_EHandle.m_Index )
        {
          m_pInstance = v27->m_pInstance;
          if ( v27->m_pInstance != 0
            && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
            && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
          {
            m_pEntity = m_pInstance->m_pEntity;
            m_pAsString = "";
            if ( m_pEntity->m_designerName.u.m_Id != 0 )
              m_pAsString = m_pEntity->m_designerName.u.m_pAsString;
            goto LABEL_36;
          }
        }
      }
    }
    v28 = (*(pPlayer->_vptr_IHandleEntity + 393))(pPlayer, v24);
    SelectedHeroName = CDOTA_PlayerResource::GetSelectedHeroName(g_pDOTAPlayerResource, v28);
    if ( SelectedHeroName == 0 || *SelectedHeroName == 0 )
      return;
LABEL_35:
    m_pAsString = SelectedHeroName;
LABEL_36:
    *pStringID = CDOTA_CombatLog::FindOrAddName(&g_DOTACombatLog, m_pAsString);
    return;
  }
  v12 = "!playerid";
  v13 = SelectedHeroName == "!playerid";
  if ( SelectedHeroName == "!playerid" )
    goto LABEL_37;
  v14 = 10;
  v11 = SelectedHeroName;
  do
  {
    if ( v14 == 0 )
      break;
    v13 = *v11++ == *v12++;
    --v14;
  }
  while ( v13 );
  if ( v13 )
  {
LABEL_37:
    if ( pPlayer != 0 )
      *pStringID = (*(pPlayer->_vptr_IHandleEntity + 393))(pPlayer, v11);
  }
  else if ( SelectedHeroName == "!team" || strcmp(SelectedHeroName, "!team") == 0 )
  {
    if ( pPlayer != 0 )
      *pStringID = pPlayer->m_iTeamNum.m_Value;
  }
  else if ( SelectedHeroName == "!enemyteam" || strcmp(SelectedHeroName, "!enemyteam") == 0 )
  {
    if ( pPlayer != 0 )
    {
      m_Value = pPlayer->m_iTeamNum.m_Value;
      if ( m_Value == 2 )
      {
        *pStringID = 3;
      }
      else if ( m_Value == 3 )
      {
        *pStringID = 2;
      }
    }
  }
  else if ( (SelectedHeroName[1] - 48) <= 9u )
  {
    v15 = strtol(SelectedHeroName + 1, 0, 10);
    m_pDynamicValues = this->m_pDynamicValues;
    v17 = v15;
    if ( m_pDynamicValues == 0 )
    {
      v31 = operator new(0x18u);
      v31->m_Size = 0;
      m_pDynamicValues = v31;
      v31->m_Memory.m_pMemory = 0;
      v31->m_Memory.m_nAllocationCount = 0;
      v31->m_Memory.m_nGrowSize = 0;
      this->m_pDynamicValues = v31;
    }
    m_Size = m_pDynamicValues->m_Size;
    v19 = m_pDynamicValues->m_Size;
    if ( m_pDynamicValues->m_Size == m_pDynamicValues->m_Memory.m_nAllocationCount )
    {
      CUtlMemory<ICLSearchFields::DynamicValueLookup_t,int>::Grow(&m_pDynamicValues->m_Memory, 1);
      v19 = m_pDynamicValues->m_Size;
    }
    m_pDynamicValues->m_Size = v19 + 1;
    v20 = &m_pDynamicValues->m_Memory.m_pMemory[m_Size];
    if ( v20 != 0 )
    {
      *v20 = pStringID;
      *(v20 + 8) = v17;
    }
  }
}


// ICLSearchFields::UpdateDynamicValues  (line 151, @0x0000000002476c10, libserver.so)  // inlines: Element, Find, GetName, operator[]
// calls: CUtlRBTree<CUtlMap<int, float>::Node_t, short unsigned int, CUtlMap<int, float>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, float>::Node_t, short unsigned int>, short unsigned int> >::Find, LoggingSystem_IsChannelEnabled, LoggingSystem_Log
// callers: CDOTA_RealtimeCombatAnalyzer::RecursiveEvaluateQueryFromEvent
// strings: "   REPLACED dynamic string with '%s' from slot %d\n", "ABORTED matching because event requires data stored in storage slot %d, but nothing is th
// globals: LOG_COMBAT_ANALYZER, DOTA_CombatLog_Record::sm_pStringTableCombatLogNames
bool __fastcall ICLSearchFields::UpdateDynamicValues(
        ICLSearchFields *const this,
        const CombatQueryStorage_t *pStorage,
        bool bDebug)
{
  CUtlVector<ICLSearchFields::DynamicValueLookup_t,CUtlMemory<ICLSearchFields::DynamicValueLookup_t,int> > *m_pDynamicValues; // rax
  unsigned __int64 v6; // r15
  __int64 v7; // r12
  CUtlMap<int,float,short unsigned int,bool (*)(int const&,int const&)>::KeyType_t m_nStorageIndex; // ebx
  unsigned __int16 v9; // ax
  const char *v10; // rcx
  __int64 v11; // rax
  __int64 v13; // [rsp+8h] [rbp-58h]
  CUtlMap<int,float,short unsigned int,bool (*)(int const&,int const&)>::Node_t v16; // [rsp+20h] [rbp-40h] BYREF

  m_pDynamicValues = this->m_pDynamicValues;
  if ( m_pDynamicValues == 0 || m_pDynamicValues->m_Size <= 0 )
    return 1;
  v6 = 0;
  v7 = 16 * ((m_pDynamicValues->m_Size - 1) + 1LL);
  while ( 1 )
  {
    m_nStorageIndex = m_pDynamicValues->m_Memory.m_pMemory[v6 / 0x10].m_nStorageIndex;
    v16.key = m_nStorageIndex;
    v9 = CUtlRBTree<CUtlMap<int,float,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short,CUtlMap<int,float,unsigned short,bool (*)(int const&,int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,float,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short>,unsigned short>>::Find(
           &pStorage->m_Tree,
           &v16);
    if ( v9 == 0xFFFF )
      break;
    *this->m_pDynamicValues->m_Memory.m_pMemory[v6 / 0x10].m_pStringID = pStorage->m_Tree.m_Elements.m_pMemory[v9].m_Data.elem;
    if ( bDebug && (v13 = v9, LoggingSystem_IsChannelEnabled(LOG_COMBAT_ANALYZER, 0) != 0) )
    {
      v10 = "";
      if ( DOTA_CombatLog_Record::sm_pStringTableCombatLogNames != 0 )
      {
        v11 = (*(DOTA_CombatLog_Record::sm_pStringTableCombatLogNames->_vptr_INetworkStringTable + 9))(
                DOTA_CombatLog_Record::sm_pStringTableCombatLogNames,
                pStorage->m_Tree.m_Elements.m_pMemory[v13].m_Data.elem,
                1);
        v10 = "";
        if ( v11 != 0 )
          v10 = v11;
      }
      v6 += 16LL;
      LoggingSystem_Log(
        LOG_COMBAT_ANALYZER,
        0,
        "   REPLACED dynamic string with '%s' from slot %d\n",
        v10,
        m_nStorageIndex);
      if ( v6 == v7 )
        return 1;
    }
    else
    {
      v6 += 16LL;
      if ( v6 == v7 )
        return 1;
    }
    m_pDynamicValues = this->m_pDynamicValues;
  }
  if ( !bDebug || LoggingSystem_IsChannelEnabled(LOG_COMBAT_ANALYZER, 0) == 0 )
    return 0;
  LoggingSystem_Log(
    LOG_COMBAT_ANALYZER,
    0,
    "ABORTED matching because event requires data stored in storage slot %d, but nothing is there.\n",
    m_nStorageIndex);
  return 0;
}


// ICLSearchFields::MatchCommonEventFields  (line 181, @0x000000000246d080, libserver.so)  // inlines: DOTAGameRules
// calls: CDOTAGamerules::GetDOTATime
// callers: SCLPlayerStatsFields::MatchEventFields, SCLAbilityTriggerFields::MatchEventFields, SCLRevealInvisibleFields::MatchEventFields, SCLBottleHealedAllyFields::MatchEventFields, SCLEndGameStatsFields::MatchEventFields, SCLInterruptChannelFields::MatchEventFields, SCLAlliedGoldFields::MatchEventFields, SCLUnitSummonedFields::MatchEventFields, SCLGoldChangeFields::MatchEventFields, SCLTreeCutDownFields::MatchEventFields, SCLSuccessfulScanFields::MatchEventFields, SCLHeroGainedLevelFields::MatchEventFields (34 total)
bool __fastcall ICLSearchFields::MatchCommonEventFields(
        const ICLSearchFields *const this,
        const CMsgDOTACombatLogEntry *pEntry)
{
  CombatLogStringID_t m_iTargetName; // edx
  bool result; // al
  CombatLogStringID_t m_iInflictorName; // edx
  CombatLogStringID_t m_iAttackerName; // edx

  m_iTargetName = this->m_iTargetName;
  if ( m_iTargetName == -1 || (result = 0, m_iTargetName == *(pEntry + 7)) )
  {
    m_iInflictorName = this->m_iInflictorName;
    if ( m_iInflictorName == -1 || (result = 0, m_iInflictorName == *(pEntry + 11)) )
    {
      m_iAttackerName = this->m_iAttackerName;
      if ( m_iAttackerName == -1 )
        return this->m_flGameTime <= 0.0
            || g_pGameRules == 0
            || CDOTAGamerules::GetDOTATime(g_pGameRules, 0, 0, *(pEntry + 15)) <= this->m_flGameTime;
      result = 0;
      if ( m_iAttackerName == *(pEntry + 9) )
        return this->m_flGameTime <= 0.0
            || g_pGameRules == 0
            || CDOTAGamerules::GetDOTATime(g_pGameRules, 0, 0, *(pEntry + 15)) <= this->m_flGameTime;
    }
  }
  return result;
}


// ICLSearchFields::AttackerTeamMatches  (line 203, @0x000000000246d110, libserver.so)
bool __fastcall ICLSearchFields::AttackerTeamMatches(int iAttackerTeam, const CMsgDOTACombatLogEntry *pEntry)
{
  return iAttackerTeam == -1 || iAttackerTeam == *(pEntry + 27);
}


// ICLSearchFields::TargetTeamMatches  (line 208, @0x000000000246d130, libserver.so)
bool __fastcall ICLSearchFields::TargetTeamMatches(int iTargetTeam, const CMsgDOTACombatLogEntry *pEntry)
{
  return iTargetTeam == -1 || iTargetTeam == *(pEntry + 28);
}


// ICLSearchFields::TargetHeroLevelMatches  (line 213, @0x000000000246d150, libserver.so)
bool __fastcall ICLSearchFields::TargetHeroLevelMatches(int iTargetHeroLevel, const CMsgDOTACombatLogEntry *pEntry)
{
  return iTargetHeroLevel == -1 || iTargetHeroLevel == *(pEntry + 43);
}


// ICLSearchFields::TargetSourceNameMatches  (line 218, @0x000000000246d170, libserver.so)
bool __fastcall ICLSearchFields::TargetSourceNameMatches(int iTargetSourceName, const CMsgDOTACombatLogEntry *pEntry)
{
  return iTargetSourceName == -1 || iTargetSourceName == *(pEntry + 8);
}


// ICLSearchFields::DamageSourceNameMatches  (line 223, @0x000000000246d190, libserver.so)
bool __fastcall ICLSearchFields::DamageSourceNameMatches(int iDamageSourceName, const CMsgDOTACombatLogEntry *pEntry)
{
  return iDamageSourceName == -1 || iDamageSourceName == *(pEntry + 10);
}


// ICLSearchFields::DamageTypeMatches  (line 228, @0x000000000246d1b0, libserver.so)
bool __fastcall ICLSearchFields::DamageTypeMatches(int iDamageType, const CMsgDOTACombatLogEntry *pEntry)
{
  bool result; // al

  result = 1;
  if ( iDamageType != 0 )
    return iDamageType == *(pEntry + 47);
  return result;
}


// ICLSearchFields::DamageCategoryMatches  (line 233, @0x000000000246d1d0, libserver.so)
bool __fastcall ICLSearchFields::DamageCategoryMatches(int iDamageCategory, const CMsgDOTACombatLogEntry *pEntry)
{
  return iDamageCategory == -1 || iDamageCategory == *(pEntry + 48);
}


// ICLSearchFields::LastHitsMatches  (line 238, @0x000000000246d1f0, libserver.so)
bool __fastcall ICLSearchFields::LastHitsMatches(int iLastHits, const CMsgDOTACombatLogEntry *pEntry)
{
  return iLastHits == -1 || iLastHits == *(pEntry + 26);
}


// ICLSearchFields::EventLocationMatches  (line 243, @0x000000000246d210, libserver.so)
bool __fastcall ICLSearchFields::EventLocationMatches(int iEventLocation, const CMsgDOTACombatLogEntry *pEntry)
{
  return iEventLocation == -1 || iEventLocation == *(pEntry + 46);
}


// ICLSearchFields::NeutralCampTypeMatches  (line 248, @0x000000000246d230, libserver.so)
bool __fastcall ICLSearchFields::NeutralCampTypeMatches(int iNeutralCampType, const CMsgDOTACombatLogEntry *pEntry)
{
  return iNeutralCampType == -1 || iNeutralCampType == *(pEntry + 35);
}


// ICLSearchFields::RuneTypeMatches  (line 253, @0x000000000246d250, libserver.so)
bool __fastcall ICLSearchFields::RuneTypeMatches(int iRuneType, const CMsgDOTACombatLogEntry *pEntry)
{
  return iRuneType == -1 || iRuneType == *(pEntry + 36);
}


// ICLSearchFields::ValueMatches  (line 258, @0x000000000246d270, libserver.so)
bool __fastcall ICLSearchFields::ValueMatches(int iValue, const CMsgDOTACombatLogEntry *pEntry)
{
  return iValue == -1 || iValue == *(pEntry + 13);
}


// ICLSearchFields::AssistPlayerIDMatches  (line 263, @0x000000000246d290, libserver.so)
bool __fastcall ICLSearchFields::AssistPlayerIDMatches(int iAssistPlayerID, const CMsgDOTACombatLogEntry *pEntry)
{
  bool result; // al
  int v3; // ecx
  __int64 v4; // rax
  char v5; // dl

  result = 1;
  if ( iAssistPlayerID != -1 )
  {
    v3 = *(pEntry + 40);
    if ( v3 <= 0 )
      return 0;
    v4 = 0;
    v5 = 0;
    do
    {
      if ( iAssistPlayerID == *(*(pEntry + 19) + 4 * v4) )
        v5 = 1;
      ++v4;
    }
    while ( v3 > v4 );
    return v5 != 0;
  }
  return result;
}


// ICLSearchFields::TargetMustBeHeroMatches  (line 283, @0x000000000246d2f0, libserver.so)
bool __fastcall ICLSearchFields::TargetMustBeHeroMatches(bool bTargetMustBeHero, const CMsgDOTACombatLogEntry *pEntry)
{
  bool result; // al

  result = 1;
  if ( bTargetMustBeHero )
  {
    result = *(pEntry + 51);
    if ( !result || *(pEntry + 50) != 0 )
      return 0;
  }
  return result;
}


// ICLSearchFields::AttackerMustBeHeroMatches  (line 297, @0x000000000246d320, libserver.so)
bool __fastcall ICLSearchFields::AttackerMustBeHeroMatches(
        bool bAttackerMustBeHero,
        const CMsgDOTACombatLogEntry *pEntry)
{
  bool result; // al

  result = 1;
  if ( bAttackerMustBeHero )
    return *(pEntry + 49);
  return result;
}


// ICLSearchFields::HealSaveMatches  (line 308, @0x000000000246d340, libserver.so)
bool __fastcall ICLSearchFields::HealSaveMatches(bool bIsHealSave, const CMsgDOTACombatLogEntry *pEntry)
{
  bool result; // al

  result = 1;
  if ( bIsHealSave )
    return *(pEntry + 150);
  return result;
}


// ICLSearchFields::LifestealHealMatches  (line 318, @0x000000000246d360, libserver.so)
bool __fastcall ICLSearchFields::LifestealHealMatches(bool bIsLifestealHeal, const CMsgDOTACombatLogEntry *pEntry)
{
  bool result; // al

  result = 1;
  if ( bIsLifestealHeal )
    return *(pEntry + 203);
  return result;
}


// ICLSearchFields::ModifierPurgedMatches  (line 328, @0x000000000246d380, libserver.so)
bool __fastcall ICLSearchFields::ModifierPurgedMatches(bool bModifierPurged, const CMsgDOTACombatLogEntry *pEntry)
{
  bool result; // al

  result = 1;
  if ( bModifierPurged )
    return *(pEntry + 212);
  return result;
}


// ICLSearchFields::SpellEvadeMatches  (line 338, @0x000000000246d3a0, libserver.so)
bool __fastcall ICLSearchFields::SpellEvadeMatches(bool bSpellEvade, const CMsgDOTACombatLogEntry *pEntry)
{
  bool result; // al

  result = 1;
  if ( bSpellEvade )
    return *(pEntry + 213);
  return result;
}


// ICLSearchFields::TargetBuildingMatches  (line 348, @0x000000000246d3c0, libserver.so)
bool __fastcall ICLSearchFields::TargetBuildingMatches(
        bool bTargetMustBeBuilding,
        int iBuildingType,
        const CMsgDOTACombatLogEntry *pEntry)
{
  bool result; // al

  result = 1;
  if ( bTargetMustBeBuilding )
  {
    result = *(pEntry + 149);
    if ( result && iBuildingType != 0 )
      return iBuildingType == *(pEntry + 51);
  }
  return result;
}


// ICLSearchFields::TargetIsNotSelfMatches  (line 361, @0x000000000246d400, libserver.so)
bool __fastcall ICLSearchFields::TargetIsNotSelfMatches(bool bTargetIsNotSelf, const CMsgDOTACombatLogEntry *pEntry)
{
  bool result; // al

  result = 1;
  if ( bTargetIsNotSelf )
    return *(pEntry + 200) ^ 1;
  return result;
}


// ICLSearchFields::StackCountMatches  (line 371, @0x000000000246d420, libserver.so)
bool __fastcall ICLSearchFields::StackCountMatches(int iStackCount, const CMsgDOTACombatLogEntry *pEntry)
{
  bool result; // al

  result = 1;
  if ( iStackCount != -1 )
    return *(pEntry + 34) >= iStackCount;
  return result;
}


// ICLSearchFields::IsDebuffMatches  (line 381, @0x000000000246d440, libserver.so)
bool __fastcall ICLSearchFields::IsDebuffMatches(bool bIsDebuff, const CMsgDOTACombatLogEntry *pEntry)
{
  bool result; // al

  result = 1;
  if ( bIsDebuff )
    return *(pEntry + 13) != 0;
  return result;
}


// ICLSearchFields::IsStunDebuffMatches  (line 391, @0x000000000246d460, libserver.so)
bool __fastcall ICLSearchFields::IsStunDebuffMatches(bool bIsStunDebuff, const CMsgDOTACombatLogEntry *pEntry)
{
  bool result; // al

  result = 1;
  if ( bIsStunDebuff )
    return *(pEntry + 17) > 0.0;
  return result;
}


// ICLSearchFields::IsSlowDebuffMatches  (line 401, @0x000000000246d480, libserver.so)
bool __fastcall ICLSearchFields::IsSlowDebuffMatches(bool bIsSlowDebuff, const CMsgDOTACombatLogEntry *pEntry)
{
  bool result; // al

  result = 1;
  if ( bIsSlowDebuff )
    return *(pEntry + 18) > 0.0;
  return result;
}


// ICLSearchFields::IsInvisibilityBuffMatches  (line 411, @0x000000000246d4a0, libserver.so)
bool __fastcall ICLSearchFields::IsInvisibilityBuffMatches(
        bool bIsInvisibilityBuff,
        const CMsgDOTACombatLogEntry *pEntry)
{
  bool result; // al

  result = 1;
  if ( bIsInvisibilityBuff )
    return *(pEntry + 201);
  return result;
}


// ICLSearchFields::IsSilenceDebuffMatches  (line 421, @0x000000000246d4c0, libserver.so)
bool __fastcall ICLSearchFields::IsSilenceDebuffMatches(bool bIsSilenceDebuff, const CMsgDOTACombatLogEntry *pEntry)
{
  bool result; // al

  result = 1;
  if ( bIsSilenceDebuff )
    return *(pEntry + 202);
  return result;
}


// ICLSearchFields::AttackIsUltimateMatches  (line 431, @0x000000000246d4e0, libserver.so)
bool __fastcall ICLSearchFields::AttackIsUltimateMatches(bool bAttackIsUltimate, const CMsgDOTACombatLogEntry *pEntry)
{
  bool result; // al

  result = 1;
  if ( bAttackIsUltimate )
    return *(pEntry + 151);
  return result;
}


// ICLSearchFields::AegisSnatchedMatches  (line 441, @0x000000000246d500, libserver.so)
bool __fastcall ICLSearchFields::AegisSnatchedMatches(bool bAegisSnatched, const CMsgDOTACombatLogEntry *pEntry)
{
  bool result; // al

  result = 1;
  if ( bAegisSnatched )
    return *(pEntry + 13) != 0;
  return result;
}


// ICLSearchFields::ValueGreaterThanMatches  (line 451, @0x000000000246d520, libserver.so)
bool __fastcall ICLSearchFields::ValueGreaterThanMatches(
        float a1,
        float flValueGreaterThan,
        const CMsgDOTACombatLogEntry *pEntry)
{
  bool result; // al

  result = 1;
  if ( a1 > 0.0 )
    return a1 <= *(pEntry + 13);
  return result;
}


// ICLSearchFields::DurationGreaterThanMatches  (line 461, @0x000000000246d550, libserver.so)
// callers: SCLModifierAddFields::MatchEventFields
_BOOL8 __fastcall ICLSearchFields::DurationGreaterThanMatches(
        float a1,
        float flDurationGreaterThan,
        const CMsgDOTACombatLogEntry *pEntry)
{
  _BOOL8 result; // rax
  int v4; // edx

  result = 1;
  if ( a1 > 0.0 )
  {
    v4 = *(pEntry + 4);
    if ( (v4 & 0x8000) == 0 || a1 <= *(pEntry + 17) )
    {
      result = 1;
      if ( (v4 & 0x10000) != 0 )
        return a1 <= *(pEntry + 18);
    }
    else
    {
      return 0;
    }
  }
  return result;
}


// ICLSearchFields::IsMotionControllerBuffMatches  (line 474, @0x000000000246d5a0, libserver.so)
bool __fastcall ICLSearchFields::IsMotionControllerBuffMatches(
        bool bIsMotionControllerBuff,
        const CMsgDOTACombatLogEntry *pEntry)
{
  bool result; // al

  result = 1;
  if ( bIsMotionControllerBuff )
    return *(pEntry + 214);
  return result;
}


// ICLSearchFields::IsLongRangeKillMatches  (line 484, @0x000000000246d5c0, libserver.so)
bool __fastcall ICLSearchFields::IsLongRangeKillMatches(bool bIsLongRangeKill, const CMsgDOTACombatLogEntry *pEntry)
{
  bool result; // al

  result = 1;
  if ( bIsLongRangeKill )
    return *(pEntry + 215);
  return result;
}


// ICLSearchFields::PurgeNPCMatches  (line 494, @0x000000000246d5e0, libserver.so)
bool __fastcall ICLSearchFields::PurgeNPCMatches(int iPurgeNPC, const CMsgDOTACombatLogEntry *pEntry)
{
  return iPurgeNPC == -1 || iPurgeNPC == *(pEntry + 55);
}


// ICLSearchFields::PurgeAbilityMatches  (line 499, @0x000000000246d600, libserver.so)
bool __fastcall ICLSearchFields::PurgeAbilityMatches(int iPurgeAbility, const CMsgDOTACombatLogEntry *pEntry)
{
  return iPurgeAbility == -1 || iPurgeAbility == *(pEntry + 54);
}


// CDOTA_CombatLog::YouForgot::ToDefine_DEFINE_GAME_SYSTEM  (line 509, @0x000000000246d620, libserver.so)
void __cdecl CDOTA_CombatLog::YouForgot::ToDefine_DEFINE_GAME_SYSTEM()
{
  ;
}


// CDOTA_CombatLog::CDOTA_CombatLog  (line 513, @0x0000000002473ab0, libserver.so)  // inlines: CUtlMap, CUtlMemory, CUtlRBTree, CUtlVector, CUtlVectorBase, ResetDbgInfo
// callers: _GLOBAL__sub_I__unity_dota_02.cpp
void __fastcall CDOTA_CombatLog::CDOTA_CombatLog(CDOTA_CombatLog *const this)
{
  this->_vptr_IGameSystem = off_40DF730;  // vptr: CDOTA_CombatLog
  this->m_MemoryStack.m_Size = 0;
  this->m_MemoryStack.m_Memory.m_pMemory = 0;
  this->m_MemoryStack.m_Memory.m_nAllocationCount = 0;
  this->m_MemoryStack.m_Memory.m_nGrowSize = 0;
  this->m_vecEntryReferences.m_Size = 0;
  this->m_vecEntryReferences.m_Memory.m_pMemory = 0;
  this->m_vecEntryReferences.m_Memory.m_nAllocationCount = 0;
  this->m_vecEntryReferences.m_Memory.m_nGrowSize = 0;
  this->m_LogTickIndex.m_Size = 0;
  this->m_LogTickIndex.m_Memory.m_pMemory = 0;
  this->m_LogTickIndex.m_Memory.m_nAllocationCount = 0;
  this->m_LogTickIndex.m_Memory.m_nGrowSize = 0;
  this->m_vecTimedStats.m_Size = 0;
  this->m_vecTimedStats.m_Memory.m_pMemory = 0;
  this->m_vecTimedStats.m_Memory.m_nAllocationCount = 0;
  this->m_vecTimedStats.m_Memory.m_nGrowSize = 0;
  this->m_mapLastRequestTime.m_Tree.m_Elements.m_pMemory = 0;
  this->m_mapLastRequestTime.m_Tree.m_Elements.m_nAllocationCount = 0;
  this->m_mapLastRequestTime.m_Tree.m_Elements.m_nGrowSize = 0;
  this->m_mapLastRequestTime.m_Tree.m_Root = -1;
  this->m_mapLastRequestTime.m_Tree.m_NumElements = 0;
  this->m_mapLastRequestTime.m_Tree.m_FirstFree = -1;
  this->m_mapLastRequestTime.m_Tree.m_LastAlloc.index = -1;
  this->m_mapLastRequestTime.m_Tree.m_pElements = 0;
  this->m_StatsMsg = 0;
  this->m_LastExperimentalUpdateTick = 0;
  this->m_LastBalanceUpdateTick = 0;
}


// CDOTA_CombatLog::~CDOTA_CombatLog  (line 522, @0x0000000002476da0, libserver.so)  // inlines: Purge, RemoveAll, ~CAutoGameSystem, ~CUtlMap, ~CUtlMemory, ~CUtlRBTree, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlRBTree<CUtlMap<int, float, int, CDefLess<int> >::Node_t, int, CUtlMap<int, float, int, CDefLess<int> >::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, float, int, CDefLess<int> >::Node_t, int>, int> >::RemoveAll, IGameSystem::~IGameSystem, CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, float, int, CDefLess<int> >::Node_t, int>, int>::Purge, CUtlMemory<SCombatLogGraphStats, int>::Purge, CUtlMemory<int, int>::Purge, CUtlMemory<SCombatLogReference, int>::Purge, CUtlMemory<unsigned char, int>::Purge
// callers: CDOTA_CombatLog::~CDOTA_CombatLog
void __fastcall CDOTA_CombatLog::~CDOTA_CombatLog(CDOTA_CombatLog *const this)
{
  CDOTAUserMsg_StatsMatchDetails_t *m_StatsMsg; // rdi
  bool v3; // zf

  this->_vptr_IGameSystem = off_40DF730;  // vptr: CDOTA_CombatLog
  m_StatsMsg = this->m_StatsMsg;
  if ( m_StatsMsg != 0 )
  {
    (*(*m_StatsMsg + 8LL))(m_StatsMsg);
    this->m_StatsMsg = 0;
  }
  CUtlRBTree<CUtlMap<int,float,int,CDefLess<int>>::Node_t,int,CUtlMap<int,float,int,CDefLess<int>>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,float,int,CDefLess<int>>::Node_t,int>,int>>::RemoveAll(&this->m_mapLastRequestTime.m_Tree);
  v3 = (this->m_mapLastRequestTime.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0;
  this->m_mapLastRequestTime.m_Tree.m_FirstFree = -1;
  if ( !v3 )
  {
    this->m_mapLastRequestTime.m_Tree.m_LastAlloc.index = -1;
    goto LABEL_5;
  }
  CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,float,int,CDefLess<int>>::Node_t,int>,int>::Purge(&this->m_mapLastRequestTime.m_Tree.m_Elements);
  v3 = (this->m_mapLastRequestTime.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0;
  this->m_mapLastRequestTime.m_Tree.m_LastAlloc.index = -1;
  if ( !v3 )
  {
LABEL_5:
    v3 = (this->m_vecTimedStats.m_Memory.m_nGrowSize & 0xC0000000) == 0;
    this->m_vecTimedStats.m_Size = 0;
    if ( !v3 )
      goto LABEL_6;
    goto LABEL_12;
  }
  CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,float,int,CDefLess<int>>::Node_t,int>,int>::Purge(&this->m_mapLastRequestTime.m_Tree.m_Elements);
  v3 = (this->m_vecTimedStats.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_vecTimedStats.m_Size = 0;
  if ( !v3 )
    goto LABEL_6;
LABEL_12:
  CUtlMemory<SCombatLogGraphStats,int>::Purge(&this->m_vecTimedStats.m_Memory);
  if ( (this->m_vecTimedStats.m_Memory.m_nGrowSize & 0xC0000000) != 0 )
  {
LABEL_6:
    v3 = (this->m_LogTickIndex.m_Memory.m_nGrowSize & 0xC0000000) == 0;
    this->m_LogTickIndex.m_Size = 0;
    if ( !v3 )
      goto LABEL_7;
    goto LABEL_14;
  }
  CUtlMemory<SCombatLogGraphStats,int>::Purge(&this->m_vecTimedStats.m_Memory);
  v3 = (this->m_LogTickIndex.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_LogTickIndex.m_Size = 0;
  if ( !v3 )
    goto LABEL_7;
LABEL_14:
  CUtlMemory<int,int>::Purge(&this->m_LogTickIndex.m_Memory);
  if ( (this->m_LogTickIndex.m_Memory.m_nGrowSize & 0xC0000000) != 0 )
  {
LABEL_7:
    v3 = (this->m_vecEntryReferences.m_Memory.m_nGrowSize & 0xC0000000) == 0;
    this->m_vecEntryReferences.m_Size = 0;
    if ( !v3 )
      goto LABEL_8;
    goto LABEL_16;
  }
  CUtlMemory<int,int>::Purge(&this->m_LogTickIndex.m_Memory);
  v3 = (this->m_vecEntryReferences.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_vecEntryReferences.m_Size = 0;
  if ( !v3 )
    goto LABEL_8;
LABEL_16:
  CUtlMemory<SCombatLogReference,int>::Purge(&this->m_vecEntryReferences.m_Memory);
  if ( (this->m_vecEntryReferences.m_Memory.m_nGrowSize & 0xC0000000) != 0 )
  {
LABEL_8:
    v3 = (this->m_MemoryStack.m_Memory.m_nGrowSize & 0xC0000000) == 0;
    this->m_MemoryStack.m_Size = 0;
    if ( !v3 )
      goto LABEL_9;
    goto LABEL_18;
  }
  CUtlMemory<SCombatLogReference,int>::Purge(&this->m_vecEntryReferences.m_Memory);
  v3 = (this->m_MemoryStack.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_MemoryStack.m_Size = 0;
  if ( v3 )
  {
LABEL_18:
    CUtlMemory<unsigned char,int>::Purge(&this->m_MemoryStack.m_Memory);
    if ( (this->m_MemoryStack.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<unsigned char,int>::Purge(&this->m_MemoryStack.m_Memory);
  }
LABEL_9:
  this->_vptr_IGameSystem = off_3F7C1B0;  // vptr: CAutoGameSystem
  IGameSystem::~IGameSystem(this);
}


// CDOTA_CombatLog::~CDOTA_CombatLog  (line 522, @0x0000000002476f80, libserver.so)
// calls: CDOTA_CombatLog::~CDOTA_CombatLog, operator delete
void __fastcall CDOTA_CombatLog::~CDOTA_CombatLog(CDOTA_CombatLog *const this)
{
  CDOTA_CombatLog::~CDOTA_CombatLog(this);
  operator delete(this);
}


// CDOTA_CombatLog::FrameUpdatePostEntityThink  (line 533, @0x000000000248e990, libserver.so)  // inlines: DOTAGameRules, GetInt
// calls: IsAppDota2Main, CDOTAGamerules::GetDOTATime, CDOTA_CombatLog::GenerateTimedStats, CDOTA_CombatLog::GenerateExperimentalTimedStats
void __fastcall CDOTA_CombatLog::FrameUpdatePostEntityThink(
        CDOTA_CombatLog *const this,
        const EventServerPostEntityThink_t *const msg)
{
  float DOTATime; // xmm0_4
  int v4; // eax
  float v5; // xmm0_4
  int m_LastBalanceUpdateTick; // eax

  if ( g_pGameRules != 0 )
  {
    if ( IsAppDota2Main() && dota_experimental_stats_interval.m_pParent->m_Value.m_nValue > 0 )
    {
      DOTATime = CDOTAGamerules::GetDOTATime(g_pGameRules, 0, 0, 0.0);
      v4 = this->m_LastExperimentalUpdateTick + 1;
      if ( DOTATime > (v4 * dota_experimental_stats_interval.m_pParent->m_Value.m_nValue) )
      {
        this->m_LastExperimentalUpdateTick = v4;
        if ( IsAppDota2Main() )
          CDOTA_CombatLog::GenerateExperimentalTimedStats(this, this->m_LastExperimentalUpdateTick);
      }
    }
    v5 = CDOTAGamerules::GetDOTATime(g_pGameRules, 0, 0, 0.0);
    m_LastBalanceUpdateTick = this->m_LastBalanceUpdateTick;
    if ( v5 > (10 * m_LastBalanceUpdateTick) )
    {
      this->m_LastBalanceUpdateTick = m_LastBalanceUpdateTick + 1;
      CDOTA_CombatLog::GenerateTimedStats(this);
    }
  }
}


// CDOTA_CombatLog::GameInit  (line 558, @0x0000000002476fa0, libserver.so)  // inlines: CNetMessagePB, CUserMessagePB, GetStringTable, Purge, RemoveAll
// calls: operator new, CDOTAUserMsg_StatsMatchDetails::CDOTAUserMsg_StatsMatchDetails, CUtlRBTree<CUtlMap<int, float, int, CDefLess<int> >::Node_t, int, CUtlMap<int, float, int, CDefLess<int> >::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, float, int, CDefLess<int> >::Node_t, int>, int> >::RemoveAll, CUtlMemory<unsigned char, int>::Purge, operator delete, _Unwind_Resume
// strings: "dota_unknown"
// globals: DOTA_CombatLog_Record::sm_pStringTableCombatLogNames
void __fastcall CDOTA_CombatLog::GameInit(CDOTA_CombatLog *const this, const EventGameInit_t *const msg)
{
  CDOTAUserMsg_StatsMatchDetails_t *m_StatsMsg; // rdi
  bool v4; // zf
  _QWORD *v5; // r12

  this->m_vecEntryReferences.m_Size = 0;
  this->m_LogTickIndex.m_Size = 0;
  m_StatsMsg = this->m_StatsMsg;
  if ( m_StatsMsg != 0 )
    (*(*m_StatsMsg + 8LL))(m_StatsMsg, msg);
  v4 = (this->m_MemoryStack.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_MemoryStack.m_Size = 0;
  if ( v4 )
    CUtlMemory<unsigned char,int>::Purge(&this->m_MemoryStack.m_Memory);
  v5 = operator new(0xA8u);
  memset(v5, 0, 0xA8u);
  CDOTAUserMsg_StatsMatchDetails::CDOTAUserMsg_StatsMatchDetails(v5);
  *v5 = off_40DBFD0;
  this->m_StatsMsg = v5;
  CUtlRBTree<CUtlMap<int,float,int,CDefLess<int>>::Node_t,int,CUtlMap<int,float,int,CDefLess<int>>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,float,int,CDefLess<int>>::Node_t,int>,int>>::RemoveAll(&this->m_mapLastRequestTime.m_Tree);
  (*(DOTA_CombatLog_Record::sm_pStringTableCombatLogNames->_vptr_INetworkStringTable + 8))(
    DOTA_CombatLog_Record::sm_pStringTableCombatLogNames,
    1,
    "dota_unknown",
    0xFFFFFFFFLL,
    0);
}


// CDOTA_CombatLog::AddEntry  (line 578, @0x00000000024833c0, libserver.so)  // inlines: AddMultipleToTail, AddToTail, CopyConstruct<SCombatLogReference>, CopyConstruct<int>, DOTAGameRules, Element, GrowMemory, InsertMultipleBefore, V_memcpy, _M_data, _M_dispose, _M_rep, __exchange_and_add, __exchange_and_add_dispatch, __exchange_and_add_single, memcpy, operator[], size, ~basic_string
// calls: google::protobuf::MessageLite::SerializeAsString(void), memcpy, CDOTAGamerules::GetDOTATime, CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::GrowVector, CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::ShiftElementsRight, CUtlMemory<SCombatLogReference, int>::Grow, CUtlMemory<int, int>::Grow, std::string::_Rep::_M_destroy(std::allocator<char> const&), std::string::_Rep::_M_dispose(std::allocator<char> const&), _Unwind_Resume
// callers: CDOTA_CombatLog::AddLocationEvent, CDOTA_CombatLog::AddNeutralCampStackedEvent, CDOTA_CombatLog::AddPickupRuneEvent, CDOTA_CombatLog::AddRevealInvisibleEvent, CDOTA_CombatLog::AddHeroSavedEvent, CDOTA_CombatLog::AddManaRestoredEvent, CDOTA_CombatLog::AddHeroLevelUpEvent, CDOTA_CombatLog::AddBottleHealAllyEvent, CDOTA_CombatLog::AddEndGameStatsEvent, CDOTA_CombatLog::AddInterruptChannelEvent, CDOTA_CombatLog::AddAlliedGoldEvent, CDOTA_CombatLog::AddAegisTakenEvent (31 total)
int __fastcall CDOTA_CombatLog::AddEntry(CDOTA_CombatLog *const this, const CMsgDOTACombatLogEntry *const entry)
{
  char *M_p; // rsi
  int v5; // r14d
  int m_Size; // r12d
  size_t v7; // rdx
  uint16 v8; // r13
  int v9; // r15d
  int v10; // eax
  SCombatLogReference *v11; // rax
  float DOTATime; // xmm0_4
  __int64 v13; // r12
  int *v14; // rax
  char *v15; // rdi
  int v17; // r15d
  int v18; // eax
  int v19; // edx
  char v20; // [rsp+1Fh] [rbp-41h] BYREF
  std::string stringToAdd; // [rsp+20h] [rbp-40h] BYREF

  google::protobuf::MessageLite::SerializeAsString(&stringToAdd);
  M_p = stringToAdd._M_dataplus._M_p;
  v5 = *(entry + 6);
  m_Size = this->m_MemoryStack.m_Size;
  v7 = *(stringToAdd._M_dataplus._M_p - 3);
  v8 = v7;
  if ( v7 != 0 )
  {
    v17 = v7;
    CUtlVectorBase<unsigned char,CUtlMemory<unsigned char,int>>::GrowVector(&this->m_MemoryStack, v7);
    CUtlVectorBase<unsigned char,CUtlMemory<unsigned char,int>>::ShiftElementsRight(&this->m_MemoryStack, m_Size, v17);
    M_p = stringToAdd._M_dataplus._M_p;
    v7 = *(stringToAdd._M_dataplus._M_p - 3);
  }
  memcpy(&this->m_MemoryStack.m_Memory.m_pMemory[m_Size], M_p, v7);
  v9 = this->m_vecEntryReferences.m_Size;
  v10 = v9;
  if ( v9 == this->m_vecEntryReferences.m_Memory.m_nAllocationCount )
  {
    CUtlMemory<SCombatLogReference,int>::Grow(&this->m_vecEntryReferences.m_Memory, 1);
    v10 = this->m_vecEntryReferences.m_Size;
  }
  this->m_vecEntryReferences.m_Size = v10 + 1;
  v11 = &this->m_vecEntryReferences.m_Memory.m_pMemory[v9];
  if ( v11 != 0 )
  {
    v11->m_unType = v5;
    v11->m_unSize = v8;
    v11->m_unOffset = m_Size;
  }
  if ( g_pGameRules != 0 )
  {
    DOTATime = CDOTAGamerules::GetDOTATime(g_pGameRules, 0, 0, 0.0);
    v13 = this->m_LogTickIndex.m_Size;
    if ( DOTATime > (10 * v13) )
    {
      if ( v13 == this->m_LogTickIndex.m_Memory.m_nAllocationCount )
        CUtlMemory<int,int>::Grow(&this->m_LogTickIndex.m_Memory, 1);
      ++this->m_LogTickIndex.m_Size;
      v14 = &this->m_LogTickIndex.m_Memory.m_pMemory[v13];
      if ( v14 != 0 )
        *v14 = v9;
    }
  }
  v15 = stringToAdd._M_dataplus._M_p - 24;
  if ( stringToAdd._M_dataplus._M_p - 24 != &std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create != 0 )
    {
      v18 = _InterlockedExchangeAdd(v15 + 4, 0xFFFFFFFF);
    }
    else
    {
      v19 = *(stringToAdd._M_dataplus._M_p - 2);
      *(stringToAdd._M_dataplus._M_p - 2) = v19 - 1;
      v18 = v19;
    }
    if ( v18 <= 0 )
      std::string::_Rep::_M_destroy(v15, &v20);
  }
  return v9;
}


// CDOTA_CombatLog::GetEntry  (line 605, @0x000000000246d630, libserver.so)  // inlines: _M_data, _M_dispose, _M_rep, __exchange_and_add, __exchange_and_add_dispatch, __exchange_and_add_single, operator[], ~basic_string
// calls: std::string::string(char const*,ulong,std::allocator<char> const&), google::protobuf::MessageLite::ParseFromString(std::string const&), std::string::_Rep::_M_destroy(std::allocator<char> const&), std::string::_Rep::_M_dispose(std::allocator<char> const&), _Unwind_Resume
// callers: CDOTA_CombatLog::SendDeathLogToPlayer, CDOTA_CombatLog::SendLogToPlayer, CDOTA_RealtimeCombatAnalyzer::RecursiveEvaluateQueryFromEvent, CDOTA_RealtimeCombatAnalyzer::EvaluateTimeblockBeforeTrigger, CDOTA_RealtimeCombatAnalyzer::EvaluateTimeblockAfterTrigger, CDOTA_RealtimeCombatAnalyzer::EvaluateTimeblock, CDOTA_CombatLog::MatchEventFields, CDOTA_CombatLog::GetEventsTillTimeOffset, CDOTA_CombatLog::GetEventsForPlayer, CDOTA_CombatLog::ProcessPlayerPosition, CDOTA_CombatLog::ProcessTeamLanePerformance, CDOTA_CombatLog::SendKillCamInformation (15 total)
void __fastcall CDOTA_CombatLog::GetEntry(CDOTA_CombatLog *const this, int iEntry, CMsgDOTACombatLogEntry *pEntry)
{
  SCombatLogReference *v4; // rax
  char *v5; // rdi
  int v6; // eax
  int v7; // edx
  char v8; // [rsp+Fh] [rbp-31h] BYREF
  std::string stringToParse; // [rsp+10h] [rbp-30h] BYREF

  v4 = &this->m_vecEntryReferences.m_Memory.m_pMemory[iEntry];
  std::string::string(&stringToParse, &this->m_MemoryStack.m_Memory.m_pMemory[v4->m_unOffset], v4->m_unSize, &v8);
  google::protobuf::MessageLite::ParseFromString(pEntry, &stringToParse);
  v5 = stringToParse._M_dataplus._M_p - 24;
  if ( stringToParse._M_dataplus._M_p - 24 != &std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create != 0 )
    {
      v6 = _InterlockedExchangeAdd(v5 + 4, 0xFFFFFFFF);
    }
    else
    {
      v7 = *(stringToParse._M_dataplus._M_p - 2);
      *(stringToParse._M_dataplus._M_p - 2) = v7 - 1;
      v6 = v7;
    }
    if ( v6 <= 0 )
      std::string::_Rep::_M_destroy(v5, &v8);
  }
}


// BroadcastCombatLogMessage  (line 614, @0x0000000002490bf0, libserver.so)  // inlines: FindGameEvent<CDOTAUserMsg_CombatLogDataHLTV_t>, FindOrCreateGameEvent<CDOTAUserMsg_CombatLogDataHLTV_t>, PostEvent<CDOTAUserMsg_CombatLogDataHLTV_t>, SendUserMessage<CDOTAUserMsg_CombatLogDataHLTV_t>
// calls: DOTA_CombatLog_Record::HandleCombatLogData, CRecipientFilter::CRecipientFilter, CRecipientFilter::AddRecipientsByTeamNumber, CRecipientFilter::MakeReliable, CRecipientFilter::~CRecipientFilter, __stack_chk_fail, _Unwind_Resume
// callers: CDOTA_CombatLog::AddHealthEvent, CDOTA_CombatLog::AddModifierEvent, CDOTA_CombatLog::AddAbilityEvent, CDOTA_CombatLog::AddGoldEvent, CDOTA_CombatLog::AddXPEvent, CDOTA_CombatLog::AddPurchaseItemEvent, CDOTA_CombatLog::AddGameEvent, CDOTA_CombatLog::AddPlayerStatsEvent, CDOTA_CombatLog::AddMultiKillEvent, CDOTA_CombatLog::AddKillstreakEvent, CDOTA_CombatLog::AddTeamBuildingKillEvent, CDOTA_CombatLog::AddFirstBloodEvent
// globals: g_DOTACombatLogRecord, IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_CombatLogDataHLTV_t>(bool)::s_hEvent
void __fastcall BroadcastCombatLogMessage(const CDOTAUserMsg_CombatLogDataHLTV_t *const newEntry)
{
  __int64 v2; // r13
  IGameEventSystem *v3; // r12
  void (__fastcall *v4)(IGameEventSystem *, _QWORD, _QWORD, CRecipientFilter *, __int64, const CDOTAUserMsg_CombatLogDataHLTV_t *const, __int64); // r15
  CRecipientFilter spectatorFilter; // [rsp+10h] [rbp-170h] BYREF
  unsigned __int64 v6; // [rsp+148h] [rbp-38h]

  v6 = __readfsqword(0x28u);
  DOTA_CombatLog_Record::HandleCombatLogData(&g_DOTACombatLogRecord, newEntry);
  CRecipientFilter::CRecipientFilter(&spectatorFilter);
  CRecipientFilter::AddRecipientsByTeamNumber(&spectatorFilter, 1);
  CRecipientFilter::MakeReliable(&spectatorFilter);
  v2 = IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_CombatLogDataHLTV_t>(bool)::s_hEvent;
  v3 = g_pGameEventSystem;
  v4 = *(*g_pGameEventSystem + 128LL);
  (*(*g_pNetworkMessages + 96LL))(
    g_pNetworkMessages,
    IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_CombatLogDataHLTV_t>(bool)::s_hEvent);
  v4(v3, 0, 0, &spectatorFilter, v2, newEntry, 232);
  CRecipientFilter::~CRecipientFilter(&spectatorFilter);
}


// CDOTA_CombatLog::AddHealthEvent  (line 632, @0x0000000002490ce0, libserver.so)  // inlines: Add, CDOTAUserMsg_CombatLogDataHLTV_t, CMicroProfilerGuard, CMicroProfilerSample, CNetMessagePB, CUserMessagePB, CVProfScope, CopyArray, DOTAGameRules, EnterScope, ExitScope, FastSqrt, Get, GetClassNameAsCStr, GetClassname, GetElapsed, GetEntityIdentity, GetEntryIndex, GetGameTime, GetInstance, GetTimebaseRegister, GetUnitName, InTargetThread, IndexToIdentity, IsBuilding, IsEnabled, IsHero, IsValid, Length2D, LookupEntity, MoveArray, PLAT_CPU_TIME, Reserve, String, ToCStr, ToDOTAAbility, ToDOTABaseNPC, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, add_assist_players, curtime, memcpy, operator CBaseEntity*, operator CEntityInstance*, operator(), operator-, set_attacker_name, set_attacker_team, set_building_type, set_damage_category, set_damage_source_name, set_damage_type, set_event_location, set_has_building_type, set_has_damage_category, set_has_damage_type, set_has_event_location, set_has_heal_from_lifesteal, set_has_health, set_has_is_target_building, set_has_is_ultimate_ability, set_has_is_visible_dire, set_has_is_visible_radiant, set_has_last_hits, set_has_long_range_kill, set_has_networth, set_has_neutral_camp_type, set_has_target_team, set_has_timestamp, set_has_timestamp_raw, set_has_type, set_heal_from_lifesteal, set_health, set_inflictor_name, set_is_attacker_illusion, set_is_target_building, set_is_target_illusion, set_is_ultimate_ability, set_is_visible_dire, set_is_visible_radiant, set_last_hits, set_long_range_kill, set_networth, set_neutral_camp_type, set_target_name, set_target_source_name, set_target_team, set_timestamp, set_timestamp_raw, set_type, set_value, ~CDOTAUserMsg_CombatLogDataHLTV_t, ~CMicroProfilerGuard, ~CNetMessagePB, ~CUserMessagePB, ~CVProfScope
// calls: __dynamic_cast, CDOTA_PlayerResource::GetPlayerSelectedHeroHandle, CDOTA_PlayerResource::GetLastHits, CDOTA_PlayerResource::GetNetWorth, ThreadGetCurrentId, CDOTA_CombatLog::FindOrAddName, CMsgDOTACombatLogEntry::CMsgDOTACombatLogEntry, CBaseEntity::GetHealth, CDOTA_BaseNPC_Hero::GetNumAttackers, operator new [], memcpy, operator delete [] (28 total)
// callers: CDOTA_BaseNPC::ModifyHealth, CDOTA_BaseNPC::OnTakeDamage_Alive, CDOTA_BaseNPC::Heal, CDOTA_BaseNPC::Event_Killed, CDOTA_Modifier_Legion_Commander_PressTheAttack::OnIntervalThink, CDOTA_Modifier_Winter_Wyvern_Cold_Embrace::OnIntervalThink, CDOTA_Modifier_Treant_LivingArmor::OnIntervalThink, CDOTA_Modifier_BottleRegeneration::OnDestroy, CDOTA_Modifier_FlaskHealing::OnDestroy
// strings: "CDOTA_CombatLog::AddHealthEvent", "Unaccounted"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_CombatLog::AddHealthEvent(
        CDOTA_CombatLog *const this,
        int iEventType,
        CDOTA_BaseNPC *pTarget,
        CDOTA_BaseNPC *pAttacker,
        CBaseEntity *pInflictor,
        int iValue,
        int nDamageType,
        int nDamageCategory,
        bool bLifesteal)
{
  int m_enabled; // esi
  bool v13; // zf
  CBaseEntity *v14; // rax
  __int64 v15; // rax
  __int64 v16; // r12
  int v17; // eax
  CConcreteEntityList *v18; // rsi
  CEntityIdentity *v19; // rdx
  __int64 v20; // rcx
  CEntityIdentity *v21; // rdx
  int v22; // eax
  int v23; // eax
  unsigned __int64 v24; // rbx
  ThreadId_t m_TargetThreadId; // r12
  uint64 v26; // rcx
  unsigned __int64 v27; // r12
  uint64 m_numTimeBaseTicks; // rcx
  __int64 v29; // rax
  int v30; // eax
  CEntityIdentity *v31; // rdx
  CEntityIdentity *v32; // rdx
  CDOTA_BaseNPC *m_pInstance; // r12
  const char *m_pAsString; // rsi
  const char *v35; // rsi
  const char *v36; // rsi
  const char *v37; // rsi
  CEntityIdentity *m_pEntity; // rax
  const char *v39; // rsi
  int v40; // xmm0_4
  int v41; // eax
  CGlobalVars *v42; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rdx
  float m_flCurrentTime; // xmm0_4
  int v45; // edx
  bool m_Value; // al
  uint32 m_iUnitType; // eax
  int v48; // ecx
  int v49; // ecx
  int v50; // eax
  int Health; // eax
  int i; // r12d
  int v53; // edx
  void *v54; // rax
  __int64 v55; // rdx
  int Attacker; // eax
  void *v57; // rax
  int v58; // eax
  int v59; // eax
  ThreadId_t v60; // r12
  char v61; // al
  CVProfNode *m_pParent; // rax
  DOTA_POSITION_CATEGORY v63; // eax
  const Vector *AbsOrigin; // r12
  const Vector *v65; // rax
  DOTA_NEUTRAL_TYPE m_NeutralType; // eax
  CVProfNode *m_pCurNode; // rax
  CVProfile::CBudgetGroup *v68; // rax
  int v69; // eax
  float v70; // xmm1_4
  int v71; // eax
  Vector v72; // [rsp+0h] [rbp-190h]
  int nLastHits; // [rsp+Ch] [rbp-184h]
  int iInflictorName; // [rsp+10h] [rbp-180h]
  int iDamageSourceName; // [rsp+14h] [rbp-17Ch]
  CDOTA_BaseNPC *pDamageSource; // [rsp+18h] [rbp-178h]
  int iAttackerName; // [rsp+20h] [rbp-170h]
  void *iAttackerNamea; // [rsp+20h] [rbp-170h]
  int iTargetSourceName; // [rsp+28h] [rbp-168h]
  int NumAttackers; // [rsp+2Ch] [rbp-164h]
  int iTargetName; // [rsp+38h] [rbp-158h]
  ThreadId_t iTargetNameb; // [rsp+38h] [rbp-158h]
  int iTargetNamea; // [rsp+38h] [rbp-158h]
  bool VProf_634; // [rsp+4Bh] [rbp-145h]
  int v88; // [rsp+50h] [rbp-140h]
  int v89; // [rsp+60h] [rbp-130h]
  _QWORD v90[2]; // [rsp+70h] [rbp-120h] BYREF
  int v91; // [rsp+80h] [rbp-110h]
  int v92; // [rsp+84h] [rbp-10Ch]
  int v93; // [rsp+88h] [rbp-108h]
  int v94; // [rsp+8Ch] [rbp-104h]
  int v95; // [rsp+90h] [rbp-100h]
  int v96; // [rsp+94h] [rbp-FCh]
  int v97; // [rsp+98h] [rbp-F8h]
  int v98; // [rsp+9Ch] [rbp-F4h]
  bool v99; // [rsp+A0h] [rbp-F0h]
  char v100; // [rsp+A1h] [rbp-EFh]
  bool v101; // [rsp+A2h] [rbp-EEh]
  char v102; // [rsp+A3h] [rbp-EDh]
  int v103; // [rsp+A4h] [rbp-ECh]
  int v104; // [rsp+A8h] [rbp-E8h]
  int v105; // [rsp+ACh] [rbp-E4h]
  char v106; // [rsp+B0h] [rbp-E0h]
  char v107; // [rsp+B1h] [rbp-DFh]
  float v108; // [rsp+CCh] [rbp-C4h]
  int v109; // [rsp+D8h] [rbp-B8h]
  int v110; // [rsp+DCh] [rbp-B4h]
  int v111; // [rsp+E0h] [rbp-B0h]
  DOTA_NEUTRAL_TYPE v112; // [rsp+FCh] [rbp-94h]
  bool v113; // [rsp+105h] [rbp-8Bh]
  bool v114; // [rsp+107h] [rbp-89h]
  void *v115; // [rsp+108h] [rbp-88h]
  int v116; // [rsp+110h] [rbp-80h]
  int v117; // [rsp+114h] [rbp-7Ch]
  DOTA_POSITION_CATEGORY v118; // [rsp+128h] [rbp-68h]
  int v119; // [rsp+12Ch] [rbp-64h]
  int v120; // [rsp+130h] [rbp-60h]
  vec_t z; // [rsp+134h] [rbp-5Ch]
  bool v122; // [rsp+13Bh] [rbp-55h]
  int v123; // [rsp+13Ch] [rbp-54h]
  char v124; // [rsp+147h] [rbp-49h]

  m_enabled = g_VProfCurrentProfile.m_enabled;
  VProf_634 = m_enabled != 0;
  if ( m_enabled != 0 )
  {
    v27 = __rdtsc();
    iTargetNameb = g_VProfCurrentProfile.m_TargetThreadId;
    if ( iTargetNameb == ThreadGetCurrentId() )
    {
      m_pCurNode = g_VProfCurrentProfile.m_pCurNode;
      if ( m_pCurNode->m_pszName != "CDOTA_CombatLog::AddHealthEvent" )
      {
        m_pCurNode = CVProfNode::GetSubNode(
                       g_VProfCurrentProfile.m_pCurNode,
                       "CDOTA_CombatLog::AddHealthEvent",
                       0,
                       "Unaccounted",
                       4);
        g_VProfCurrentProfile.m_pCurNode = m_pCurNode;
      }
      v68 = &g_VProfCurrentProfile.m_pBudgetGroups[m_pCurNode->m_BudgetGroupID];
      v68->m_BudgetFlags |= 4u;
      CVProfNode::EnterScope(g_VProfCurrentProfile.m_pCurNode);
      g_VProfCurrentProfile.m_fAtRoot = 0;
    }
    m_numTimeBaseTicks = g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks;
    ++g_VProfCurrentProfile.m_ScopeProfiler.m_numCalls;
    g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks = m_numTimeBaseTicks - v27 + __rdtsc();
  }
  if ( pInflictor != 0 )
  {
    v13 = __dynamic_cast(pInflictor, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTABaseAbility, 0) == 0;
    v14 = 0;
    if ( !v13 )
      v14 = pInflictor;
    pInflictor = v14;
  }
  if ( iEventType != 0 )
  {
    if ( iValue < 0 && iEventType == 1 )
    {
      iValue = -iValue;
      iEventType = 0;
      goto LABEL_10;
    }
  }
  else if ( iValue < 0 )
  {
    iValue = -iValue;
    iEventType = 1;
  }
  if ( (iEventType | iValue) == 0 )
    goto LABEL_25;
LABEL_10:
  if ( pTarget == 0 || pTarget->m_iIsControllableByPlayer64.m_Value == 0 )
  {
    if ( pAttacker != 0 )
    {
      if ( pAttacker->m_iIsControllableByPlayer64.m_Value != 0 )
        goto LABEL_13;
      if ( !VProf_634 )
        return;
LABEL_30:
      v24 = __rdtsc();
      if ( g_VProfCurrentProfile.m_fAtRoot && g_VProfCurrentProfile.m_enabled == 0 )
        goto LABEL_33;
      m_TargetThreadId = g_VProfCurrentProfile.m_TargetThreadId;
      if ( m_TargetThreadId != ThreadGetCurrentId() )
        goto LABEL_33;
      v61 = CVProfNode::ExitScope(g_VProfCurrentProfile.m_pCurNode);
      goto LABEL_129;
    }
LABEL_25:
    if ( !VProf_634 )
      return;
    goto LABEL_30;
  }
  if ( pAttacker == 0 )
  {
    pDamageSource = 0;
    v72.z = 0.0;
    nLastHits = 0;
    goto LABEL_37;
  }
LABEL_13:
  v15 = (*(pAttacker->_vptr_IHandleEntity + 413))(pAttacker);
  v16 = v15;
  if ( v15 != 0 )
  {
    v17 = (*(*v15 + 3144LL))(v15);
    CDOTA_PlayerResource::GetPlayerSelectedHeroHandle(g_pDOTAPlayerResource, v17);
    v18 = CEntityHandle::gm_pEntityList;
    if ( (v88 + 2) <= 1
      || (v19 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v88 >> 9) & 0x3F]) == 0
      || (v20 = v88 & 0x1FF, v18 = (8 * v20), (v21 = &v19[v20]) == 0)
      || v88 != v21->m_EHandle.m_Index
      || (pDamageSource = v21->m_pInstance, v21->m_pInstance == 0)
      || BYTE3(v21->m_pInstance[7]._vptr_IHandleEntity) == 0 )
    {
      pDamageSource = 0;
    }
    v22 = (*(*v16 + 3144LL))(v16, v18);
    nLastHits = CDOTA_PlayerResource::GetLastHits(g_pDOTAPlayerResource, v22);
    v23 = (*(*v16 + 3144LL))(v16);
    LODWORD(v72.z) = CDOTA_PlayerResource::GetNetWorth(g_pDOTAPlayerResource, v23);
  }
  else
  {
    pDamageSource = pAttacker;
    v72.z = 0.0;
    nLastHits = 0;
  }
  if ( pTarget == 0 )
  {
    iTargetName = 0;
    iTargetSourceName = 0;
    goto LABEL_49;
  }
LABEL_37:
  v29 = (*(pTarget->_vptr_IHandleEntity + 413))(pTarget);
  if ( v29 != 0 )
  {
    v30 = (*(*v29 + 3144LL))(v29);
    CDOTA_PlayerResource::GetPlayerSelectedHeroHandle(g_pDOTAPlayerResource, v30);
    if ( (v89 + 2) <= 1
      || (v31 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v89 >> 9) & 0x3F]) == 0
      || (v32 = &v31[v89 & 0x1FF]) == 0
      || v89 != v32->m_EHandle.m_Index
      || (m_pInstance = v32->m_pInstance, v32->m_pInstance == 0)
      || !m_pInstance->m_bIsDOTANPC )
    {
      m_pInstance = 0;
    }
  }
  else
  {
    m_pInstance = pTarget;
  }
  m_pAsString = "";
  if ( pTarget->m_iszUnitName.m_Value.u.m_Id != 0 )
    m_pAsString = pTarget->m_iszUnitName.m_Value.u.m_pAsString;
  iTargetName = CDOTA_CombatLog::FindOrAddName(this, m_pAsString);
  if ( m_pInstance != 0 )
  {
    v35 = "";
    if ( m_pInstance->m_iszUnitName.m_Value.u.m_Id != 0 )
      v35 = m_pInstance->m_iszUnitName.m_Value.u.m_pAsString;
    iTargetSourceName = CDOTA_CombatLog::FindOrAddName(this, v35);
  }
  else
  {
    iTargetSourceName = 0;
  }
LABEL_49:
  if ( pAttacker != 0 )
  {
    v36 = "";
    if ( pAttacker->m_iszUnitName.m_Value.u.m_Id != 0 )
      v36 = pAttacker->m_iszUnitName.m_Value.u.m_pAsString;
    iAttackerName = CDOTA_CombatLog::FindOrAddName(this, v36);
  }
  else
  {
    iAttackerName = 0;
  }
  if ( pDamageSource != 0 )
  {
    v37 = "";
    if ( pDamageSource->m_iszUnitName.m_Value.u.m_Id != 0 )
      v37 = pDamageSource->m_iszUnitName.m_Value.u.m_pAsString;
    iDamageSourceName = CDOTA_CombatLog::FindOrAddName(this, v37);
  }
  else
  {
    iDamageSourceName = 0;
  }
  if ( pInflictor != 0 )
  {
    m_pEntity = pInflictor->m_pEntity;
    v39 = "";
    if ( m_pEntity->m_designerName.u.m_Id != 0 )
      v39 = m_pEntity->m_designerName.u.m_pAsString;
    iInflictorName = CDOTA_CombatLog::FindOrAddName(this, v39);
  }
  else
  {
    iInflictorName = 0;
  }
  CMsgDOTACombatLogEntry::CMsgDOTACombatLogEntry(v90);
  v40 = 0;
  v90[0] = off_40DC8D0;
  v93 = iEventType;
  if ( g_pGameRules != 0 )
    v40 = *&g_pGameRules[18].m_szQuestName[20];
  v105 = v40;
  v41 = v91 | 0x4001;
  v91 |= 0x4001u;
  v42 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
      {
        m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
        v41 = v91;
      }
    }
    m_flCurrentTime = v42->m_flCurrentTime;
  }
  else
  {
    m_flCurrentTime = 0.0;
  }
  v108 = m_flCurrentTime;
  v45 = v41 | 0x800000;
  if ( iEventType != 0 )
  {
    if ( iEventType == 1 )
    {
      v92 |= 0x800000u;
      v122 = bLifesteal;
    }
  }
  else
  {
    v92 |= 0x50000u;
    v119 = nDamageType;
    v120 = nDamageCategory;
  }
  if ( iTargetName != 0 )
  {
    v45 = v41 | 0x800002;
    v94 = iTargetName;
  }
  if ( iTargetSourceName != 0 )
  {
    v45 |= 4u;
    v95 = iTargetSourceName;
  }
  if ( iAttackerName != 0 )
  {
    v45 |= 8u;
    v96 = iAttackerName;
  }
  if ( iDamageSourceName != 0 )
  {
    v45 |= 0x10u;
    v97 = iDamageSourceName;
  }
  if ( iInflictorName != 0 )
  {
    v45 |= 0x20u;
    v98 = iInflictorName;
  }
  if ( iTargetName != 0 )
  {
    m_Value = pTarget->m_bIsIllusion.m_Value;
    v92 |= 0x10u;
    v101 = m_Value;
    m_iUnitType = pTarget->m_iUnitType;
    v102 = m_iUnitType & 1;
    v48 = m_iUnitType & 0x10;
    v113 = v48 != 0;
    BYTE1(v45) |= 3u;
  }
  else
  {
    if ( pTarget == 0 )
      goto LABEL_87;
    m_iUnitType = pTarget->m_iUnitType;
    v48 = m_iUnitType & 0x10;
  }
  if ( v48 != 0 )
  {
    v49 = 1;
    if ( (m_iUnitType & 4) == 0 )
    {
      v49 = 2;
      if ( (m_iUnitType & 0x40) == 0 )
      {
        v49 = m_iUnitType & 0x20;
        if ( (m_iUnitType & 0x20) != 0 )
          v49 = 3;
      }
    }
    v92 |= 0x100000u;
    v123 = v49;
  }
LABEL_87:
  if ( iAttackerName != 0 )
  {
    v45 |= 0x80000C0u;
    v99 = pAttacker->m_bIsIllusion.m_Value;
    v100 = pAttacker->m_iUnitType & 1;
    v110 = pAttacker->m_iTeamNum.m_Value;
  }
  if ( iTargetName != 0 )
  {
    v50 = pTarget->m_iTeamNum.m_Value;
    v91 = v45 | 0x10000000;
    v111 = v50;
    Health = CBaseEntity::GetHealth(pTarget);
    v45 = v91;
    v104 = Health;
    BYTE1(v45) = BYTE1(v91) | 0x20;
  }
  v92 |= 0x80000u;
  v91 = v45 | 0x4001000;
  v103 = iValue;
  v109 = nLastHits;
  z = v72.z;
  if ( pTarget != 0 && iEventType == 4 )
  {
    CBaseEntity::GetAbsOrigin(pTarget);
    v63 = CDOTAGamerules::CategorizePosition(g_pGameRules, v72);
    v92 |= 0x4000u;
    v118 = v63;
    if ( pAttacker != 0 )
    {
      AbsOrigin = CBaseEntity::GetAbsOrigin(pAttacker);
      v65 = CBaseEntity::GetAbsOrigin(pTarget);
      if ( fsqrt(((v65->x - AbsOrigin->x) * (v65->x - AbsOrigin->x)) + ((v65->y - AbsOrigin->y) * (v65->y - AbsOrigin->y))) > 1300.0 )
      {
        v92 |= 0x8000000u;
        v124 = 1;
      }
      if ( pTarget->m_iTeamNum.m_Value == 4 )
      {
        m_NeutralType = pTarget->m_NeutralType;
        v92 |= 0x20u;
        v112 = m_NeutralType;
      }
    }
  }
  if ( (pTarget->m_iUnitType & 1) != 0 && CDOTA_BaseNPC_Hero::GetNumAttackers(pTarget) > 0 )
  {
    NumAttackers = CDOTA_BaseNPC_Hero::GetNumAttackers(pTarget);
    if ( NumAttackers > 0 )
    {
      for ( i = 0; i != NumAttackers; ++i )
      {
        Attacker = CDOTA_BaseNPC_Hero::GetAttacker(pTarget, i);
        v55 = v116;
        iTargetNamea = Attacker;
        v54 = v115;
        if ( v116 == v117 )
        {
          iAttackerNamea = v115;
          v53 = 2 * v116;
          if ( v116 + 1 >= 2 * v116 )
            v53 = v116 + 1;
          if ( v53 < 4 )
            v53 = 4;
          v117 = v53;
          v54 = operator new[](4LL * v53);
          v115 = v54;
          v55 = v116;
          if ( iAttackerNamea != 0 )
          {
            memcpy(v54, iAttackerNamea, 4LL * v116);
            operator delete[](iAttackerNamea);
            v54 = v115;
            v55 = v116;
          }
        }
        v116 = v55 + 1;
        *(v54 + v55) = iTargetNamea;
      }
    }
  }
  if ( pInflictor != 0 )
  {
    v57 = __dynamic_cast(pInflictor, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTABaseAbility, 0);
    if ( v57 != 0 )
    {
      v58 = (*(*v57 + 1712LL))(v57);
      v92 |= 0x200u;
      v114 = v58 == 1;
    }
  }
  if ( pAttacker != 0 && CBaseModelEntity::CanBeSeenByTeam(pAttacker, 2)
    || CBaseModelEntity::CanBeSeenByTeam(pTarget, 2) )
  {
    v91 |= 0x400u;
    v106 = 1;
  }
  if ( pAttacker != 0 && CBaseModelEntity::CanBeSeenByTeam(pAttacker, 3)
    || CBaseModelEntity::CanBeSeenByTeam(pTarget, 3) )
  {
    v91 |= 0x800u;
    v107 = 1;
  }
  CDOTA_CombatLog::AddEntry(this, v90);
  BroadcastCombatLogMessage(v90);
  if ( pAttacker != 0 )
  {
    if ( iEventType == 1 && pAttacker != pTarget && (pTarget->m_iUnitType & 1) != 0 )
    {
      v69 = (*(pAttacker->_vptr_IHandleEntity + 414))(pAttacker);
      CDOTA_PlayerResource::AddHeal(g_pDOTAPlayerResource, v69, v70);
    }
    if ( pTarget != 0 && iEventType == 4 )
    {
      if ( (pTarget->m_iUnitType & 4) != 0 )
      {
        v59 = (*(pAttacker->_vptr_IHandleEntity + 414))(pAttacker);
        CDOTA_PlayerResource::IncrementTowerKills(g_pDOTAPlayerResource, v59);
      }
      if ( (*(pTarget->_vptr_IHandleEntity + 403))(pTarget) != 0 )
      {
        v71 = (*(pAttacker->_vptr_IHandleEntity + 414))(pAttacker);
        CDOTA_PlayerResource::IncrementRoshanKills(g_pDOTAPlayerResource, v71);
      }
    }
  }
  v90[0] = &off_40DC750;
  CMsgDOTACombatLogEntry::~CMsgDOTACombatLogEntry(v90);
  if ( VProf_634 )
  {
    v24 = __rdtsc();
    if ( !g_VProfCurrentProfile.m_fAtRoot || g_VProfCurrentProfile.m_enabled != 0 )
    {
      v60 = g_VProfCurrentProfile.m_TargetThreadId;
      if ( v60 != ThreadGetCurrentId() )
        goto LABEL_33;
      v61 = CVProfNode::ExitScope(g_VProfCurrentProfile.m_pCurNode);
LABEL_129:
      if ( v61 != 0 )
      {
        m_pParent = g_VProfCurrentProfile.m_pCurNode->m_pParent;
        if ( m_pParent != 0 )
          g_VProfCurrentProfile.m_pCurNode = m_pParent;
        else
          m_pParent = g_VProfCurrentProfile.m_pCurNode;
      }
      else
      {
        m_pParent = g_VProfCurrentProfile.m_pCurNode;
      }
      g_VProfCurrentProfile.m_fAtRoot = m_pParent == &g_VProfCurrentProfile.m_Root;
    }
LABEL_33:
    v26 = g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks;
    ++g_VProfCurrentProfile.m_ScopeProfiler.m_numCalls;
    g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks = v26 - v24 + __rdtsc();
  }
}


// CDOTA_CombatLog::AddModifierEvent  (line 836, @0x0000000002491ac0, libserver.so)  // inlines: Add, CDOTABuffState, CDOTAUserMsg_CombatLogDataHLTV_t, CMicroProfilerGuard, CMicroProfilerSample, CNetMessagePB, CUserMessagePB, CVProfScope, DOTAGameRules, EnterScope, ExitScope, GetAbilityName, GetElapsed, GetGameTime, GetTimebaseRegister, GetUnitName, InTargetThread, IsEnabled, IsHero, ModifierVariant_t, PLAT_CPU_TIME, String, ToCStr, curtime, set_attacker_name, set_damage_source_name, set_has_attacker_name, set_has_damage_source_name, set_has_health, set_has_hidden_modifier, set_has_inflictor_name, set_has_invisibility_modifier, set_has_is_attacker_hero, set_has_is_attacker_illusion, set_has_is_target_hero, set_has_is_target_illusion, set_has_is_visible_dire, set_has_is_visible_radiant, set_has_modifier_duration, set_has_modifier_elapsed_duration, set_has_modifier_purge_ability, set_has_modifier_purge_npc, set_has_modifier_purged, set_has_motion_controller_modifier, set_has_silence_modifier, set_has_slow_duration, set_has_stack_count, set_has_stun_duration, set_has_target_name, set_has_timestamp, set_has_timestamp_raw, set_has_type, set_has_value, set_health, set_hidden_modifier, set_inflictor_name, set_invisibility_modifier, set_is_attacker_hero, set_is_attacker_illusion, set_is_target_hero, set_is_target_illusion, set_is_visible_dire, set_is_visible_radiant, set_modifier_duration, set_modifier_elapsed_duration, set_modifier_purge_ability, set_modifier_purge_npc, set_modifier_purged, set_motion_controller_modifier, set_silence_modifier, set_slow_duration, set_stack_count, set_stun_duration, set_target_name, set_timestamp, set_timestamp_raw, set_type, set_value, ~CDOTAUserMsg_CombatLogDataHLTV_t, ~CMicroProfilerGuard, ~CNetMessagePB, ~CUserMessagePB, ~CVProfScope
// calls: CDOTA_CombatLog::FindOrAddName, CDOTA_Buff::GetName, CMsgDOTACombatLogEntry::CMsgDOTACombatLogEntry, CDOTA_PlayerResource::RemoveStun, CDOTA_Buff::GetFunctionValue, CBaseModelEntity::CanBeSeenByTeam, CDOTA_CombatLog::AddEntry, BroadcastCombatLogMessage, CMsgDOTACombatLogEntry::~CMsgDOTACombatLogEntry, ThreadGetCurrentId, CBaseEntity::GetHealth, CVProfNode::ExitScope(void) (18 total)
// callers: CDOTA_Buff::Destroy, CDOTA_ModifierManager::AddNewModifier, CDOTA_Modifier_Pudge_FleshHeap::OnIntervalThink, CDOTA_Modifier_Legion_Commander_Duel_DamageBoost::OnStackCountChanged, CDOTA_Modifier_Slark_EssenceShift::OnAttackLanded
// strings: "<NoAbilityName>", "CDOTA_CombatLog::AddModifierEvent", "Unaccounted"
void __fastcall CDOTA_CombatLog::AddModifierEvent(
        CDOTA_CombatLog *const this,
        int iEventType,
        CDOTA_BaseNPC *pTarget,
        CDOTA_BaseNPC *pAttacker,
        CDOTA_Buff *pBuff,
        bool bPurged,
        CDOTA_BaseNPC *pPurgeNPC,
        CDOTABaseAbility *pPurgeAbility)
{
  int m_enabled; // r14d
  int v12; // r14d
  const char *m_pAsString; // rsi
  const char *v14; // rsi
  const char *Name; // rax
  int v16; // xmm0_4
  int v17; // eax
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rdx
  int m_szVal_high; // xmm0_4
  int v20; // eax
  char m_iUnitType; // dl
  int v22; // eax
  char v23; // dl
  unsigned __int8 v24; // al
  char v25; // al
  __int64 v26; // rax
  int v27; // eax
  int (**vptr_CDOTA_Buff)(...); // rax
  float v29; // xmm0_4
  int (**v30)(...); // rax
  int v31; // eax
  float v32; // xmm1_4
  bool v33; // zf
  float v34; // xmm0_4
  unsigned __int64 v35; // rbx
  ThreadId_t v36; // r13
  uint64 v37; // rcx
  unsigned __int64 v38; // r14
  uint64 m_numTimeBaseTicks; // rcx
  int Health; // eax
  ThreadId_t m_TargetThreadId; // r13
  char v42; // al
  CVProfNode *m_pParent; // rax
  float v44; // xmm0_4
  const char *v45; // rsi
  int v46; // r13d
  const char *v47; // rsi
  DOTAAbilityData_t *m_pAbilityData; // rax
  const char *m_pszAbilityName; // rax
  int v50; // eax
  CVProfNode *m_pCurNode; // rax
  CVProfile::CBudgetGroup *v52; // rax
  float v53; // xmm0_4
  float v54; // xmm0_4
  int (**v55)(...); // rax
  int v56; // eax
  float v57; // xmm1_4
  ModifierVariant_t *returnvalue; // [rsp+8h] [rbp-158h]
  int iAttackerName; // [rsp+10h] [rbp-150h]
  ThreadId_t iAttackerNamea; // [rsp+10h] [rbp-150h]
  int iInflictorName; // [rsp+18h] [rbp-148h]
  bool VProf_838; // [rsp+23h] [rbp-13Dh]
  CDOTABuffState buffState; // [rsp+30h] [rbp-130h] BYREF
  _QWORD v67[2]; // [rsp+40h] [rbp-120h] BYREF
  int v68; // [rsp+50h] [rbp-110h]
  int v69; // [rsp+54h] [rbp-10Ch]
  int v70; // [rsp+58h] [rbp-108h]
  int v71; // [rsp+5Ch] [rbp-104h]
  int v72; // [rsp+64h] [rbp-FCh]
  int v73; // [rsp+68h] [rbp-F8h]
  int v74; // [rsp+6Ch] [rbp-F4h]
  bool v75; // [rsp+70h] [rbp-F0h]
  char v76; // [rsp+71h] [rbp-EFh]
  bool m_Value; // [rsp+72h] [rbp-EEh]
  char v78; // [rsp+73h] [rbp-EDh]
  int v79; // [rsp+74h] [rbp-ECh]
  int v80; // [rsp+78h] [rbp-E8h]
  int v81; // [rsp+7Ch] [rbp-E4h]
  char v82; // [rsp+80h] [rbp-E0h]
  char v83; // [rsp+81h] [rbp-DFh]
  float v84; // [rsp+84h] [rbp-DCh]
  float v85; // [rsp+88h] [rbp-D8h]
  int v86; // [rsp+9Ch] [rbp-C4h]
  float v87; // [rsp+A0h] [rbp-C0h]
  int v88; // [rsp+C8h] [rbp-98h]
  char v89; // [rsp+D4h] [rbp-8Ch]
  float v90; // [rsp+110h] [rbp-50h]
  bool v91; // [rsp+114h] [rbp-4Ch]
  char v92; // [rsp+116h] [rbp-4Ah]
  int v93; // [rsp+118h] [rbp-48h]
  int v94; // [rsp+11Ch] [rbp-44h]

  m_enabled = g_VProfCurrentProfile.m_enabled;
  VProf_838 = m_enabled != 0;
  if ( m_enabled != 0 )
  {
    v38 = __rdtsc();
    iAttackerNamea = g_VProfCurrentProfile.m_TargetThreadId;
    if ( iAttackerNamea == ThreadGetCurrentId() )
    {
      m_pCurNode = g_VProfCurrentProfile.m_pCurNode;
      if ( m_pCurNode->m_pszName != "CDOTA_CombatLog::AddModifierEvent" )
      {
        m_pCurNode = CVProfNode::GetSubNode(
                       g_VProfCurrentProfile.m_pCurNode,
                       "CDOTA_CombatLog::AddModifierEvent",
                       0,
                       "Unaccounted",
                       4);
        g_VProfCurrentProfile.m_pCurNode = m_pCurNode;
      }
      v52 = &g_VProfCurrentProfile.m_pBudgetGroups[m_pCurNode->m_BudgetGroupID];
      v52->m_BudgetFlags |= 4u;
      CVProfNode::EnterScope(g_VProfCurrentProfile.m_pCurNode);
      g_VProfCurrentProfile.m_fAtRoot = 0;
    }
    m_numTimeBaseTicks = g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks;
    ++g_VProfCurrentProfile.m_ScopeProfiler.m_numCalls;
    g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks = m_numTimeBaseTicks - v38 + __rdtsc();
  }
  if ( pBuff != 0
    && (*(pBuff->_vptr_CDOTA_Buff + 11))(pBuff) != 0
    && (*(pBuff->_vptr_CDOTA_Buff + 16))(pBuff) == 0
    && (*(pBuff->_vptr_CDOTA_Buff + 21))(pBuff) == 0 )
  {
    goto LABEL_8;
  }
  if ( pTarget == 0 || (pTarget->m_iUnitType & 1) == 0 )
  {
    if ( pAttacker == 0 || (pAttacker->m_iUnitType & 1) == 0 )
    {
LABEL_8:
      if ( !VProf_838 )
        return;
      v35 = __rdtsc();
      if ( g_VProfCurrentProfile.m_fAtRoot && g_VProfCurrentProfile.m_enabled == 0
        || (m_TargetThreadId = g_VProfCurrentProfile.m_TargetThreadId) != ThreadGetCurrentId() )
      {
LABEL_72:
        v37 = g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks;
        ++g_VProfCurrentProfile.m_ScopeProfiler.m_numCalls;
        g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks = v37 - v35 + __rdtsc();
        return;
      }
      v42 = CVProfNode::ExitScope(g_VProfCurrentProfile.m_pCurNode);
LABEL_83:
      if ( v42 != 0 )
      {
        m_pParent = g_VProfCurrentProfile.m_pCurNode->m_pParent;
        if ( m_pParent != 0 )
          g_VProfCurrentProfile.m_pCurNode = m_pParent;
        else
          m_pParent = g_VProfCurrentProfile.m_pCurNode;
      }
      else
      {
        m_pParent = g_VProfCurrentProfile.m_pCurNode;
      }
      g_VProfCurrentProfile.m_fAtRoot = m_pParent == &g_VProfCurrentProfile.m_Root;
      goto LABEL_72;
    }
    v12 = 0;
    if ( pTarget == 0 )
      goto LABEL_14;
  }
  m_pAsString = "";
  if ( pTarget->m_iszUnitName.m_Value.u.m_Id != 0 )
    m_pAsString = pTarget->m_iszUnitName.m_Value.u.m_pAsString;
  v12 = CDOTA_CombatLog::FindOrAddName(this, m_pAsString);
  if ( pAttacker == 0 )
  {
    iAttackerName = 0;
  }
  else
  {
LABEL_14:
    v14 = "";
    if ( pAttacker->m_iszUnitName.m_Value.u.m_Id != 0 )
      v14 = pAttacker->m_iszUnitName.m_Value.u.m_pAsString;
    iAttackerName = CDOTA_CombatLog::FindOrAddName(this, v14);
  }
  if ( pBuff != 0 )
  {
    Name = CDOTA_Buff::GetName(pBuff);
    iInflictorName = CDOTA_CombatLog::FindOrAddName(this, Name);
  }
  else
  {
    iInflictorName = 0;
  }
  CMsgDOTACombatLogEntry::CMsgDOTACombatLogEntry(v67);
  v16 = 0;
  v67[0] = off_40DC8D0;
  v70 = iEventType;
  if ( g_pGameRules != 0 )
    v16 = *&g_pGameRules[18].m_szQuestName[20];
  v81 = v16;
  v17 = v68 | 0x4001;
  v68 |= 0x4001u;
  returnvalue = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
      {
        m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
        v17 = v68;
      }
    }
    m_szVal_high = HIDWORD(returnvalue->m_szVal);
  }
  else
  {
    m_szVal_high = 0;
  }
  v86 = m_szVal_high;
  v68 = v17 | 0x800000;
  if ( v12 != 0 )
  {
    v71 = v12;
    v68 = v17 | 0x800002;
  }
  if ( iAttackerName != 0 )
  {
    v68 |= 8u;
    v72 = iAttackerName;
  }
  if ( iInflictorName != 0 )
  {
    v68 |= 0x20u;
    v74 = iInflictorName;
  }
  if ( v12 != 0 )
  {
    v20 = v68;
    m_Value = pTarget->m_bIsIllusion.m_Value;
    m_iUnitType = pTarget->m_iUnitType;
    BYTE1(v20) = BYTE1(v68) | 3;
    v68 = v20;
    v78 = m_iUnitType & 1;
  }
  if ( iAttackerName != 0 )
  {
    v22 = v68;
    v75 = pAttacker->m_bIsIllusion.m_Value;
    v23 = pAttacker->m_iUnitType;
    LOBYTE(v22) = v68 | 0xC0;
    v68 = v22;
    v76 = v23 & 1;
  }
  if ( v12 != 0 )
  {
    Health = CBaseEntity::GetHealth(pTarget);
    v68 |= 0x2000u;
    v80 = Health;
  }
  if ( pBuff != 0 )
  {
    v24 = (*(pBuff->_vptr_CDOTA_Buff + 12))(pBuff);
    v68 |= 0x1000u;
    v79 = v24;
    v25 = (*(pBuff->_vptr_CDOTA_Buff + 11))(pBuff);
  }
  else
  {
    v68 |= 0x1000u;
    v25 = 0;
    v79 = 0;
  }
  v69 |= 8u;
  v89 = v25;
  if ( pAttacker != 0 )
  {
    v26 = (*(pAttacker->_vptr_IHandleEntity + 413))(pAttacker);
    if ( v26 != 0 )
    {
      v27 = (*(*v26 + 3144LL))(v26);
      v68 |= 0x10u;
      v73 = v27;
    }
  }
  if ( pBuff != 0 && pTarget != 0 && (pTarget->m_iUnitType & 1) != 0 )
  {
    if ( (*(pBuff->_vptr_CDOTA_Buff + 35))(pBuff) == 0 && (*(pBuff->_vptr_CDOTA_Buff + 31))(pBuff) != 0.0 )
    {
      v53 = (*(pBuff->_vptr_CDOTA_Buff + 31))(pBuff);
      v68 |= 0x1000000u;
      v87 = v53;
    }
    vptr_CDOTA_Buff = pBuff->_vptr_CDOTA_Buff;
    buffState.m_nEnabledStateMask = 0;
    buffState.m_nDisabledStateMask = 0;
    vptr_CDOTA_Buff[5](pBuff);
    if ( pAttacker != 0
      && pAttacker->m_iTeamNum.m_Value != pTarget->m_iTeamNum.m_Value
      && ((buffState.m_nEnabledStateMask & 1 | ((buffState.m_nEnabledStateMask & 0x20) != 0)) != 0
       || (*(pBuff->_vptr_CDOTA_Buff + 17))(pBuff) != 0
       || (*(pBuff->_vptr_CDOTA_Buff + 16))(pBuff) != 0) )
    {
      if ( iEventType == 2 )
      {
        v54 = (*(pBuff->_vptr_CDOTA_Buff + 31))(pBuff);
        v55 = pBuff->_vptr_CDOTA_Buff;
        v84 = v54;
        v68 |= 0x8000u;
        v55[31](pBuff);
        v56 = (*(pAttacker->_vptr_IHandleEntity + 414))(pAttacker);
        CDOTA_PlayerResource::AddStun(g_pDOTAPlayerResource, v56, v57);
      }
      else if ( iEventType == 3 )
      {
        v29 = (*(pBuff->_vptr_CDOTA_Buff + 34))(pBuff);
        v30 = pBuff->_vptr_CDOTA_Buff;
        v84 = v29;
        v68 |= 0x8000u;
        v30[33](pBuff);
        v31 = (*(pAttacker->_vptr_IHandleEntity + 414))(pAttacker);
        CDOTA_PlayerResource::RemoveStun(g_pDOTAPlayerResource, v31, v32);
      }
    }
    v33 = (pTarget->m_iUnitType & 1) == 0;
    buffState.m_nEnabledStateMask = 0;
    buffState.m_nDisabledStateMask = 0;
    if ( !v33
      && CDOTA_Buff::GetFunctionValue(pBuff, 13, &buffState, &CModifierParams::s_Default)
      && *(&buffState.m_nEnabledStateMask + 1) <= 0.0 )
    {
      v34 = (*(pBuff->_vptr_CDOTA_Buff + 31))(pBuff);
      v68 |= 0x10000u;
      v85 = v34;
    }
  }
  else
  {
    buffState.m_nEnabledStateMask = 0;
    buffState.m_nDisabledStateMask = 0;
  }
  if ( pAttacker != 0 && CBaseModelEntity::CanBeSeenByTeam(pAttacker, 2)
    || pTarget != 0 && CBaseModelEntity::CanBeSeenByTeam(pTarget, 2) )
  {
    v68 |= 0x400u;
    v82 = 1;
  }
  if ( pAttacker != 0 && CBaseModelEntity::CanBeSeenByTeam(pAttacker, 3)
    || pTarget != 0 && CBaseModelEntity::CanBeSeenByTeam(pTarget, 3) )
  {
    v68 |= 0x800u;
    v83 = 1;
  }
  if ( iEventType == 3 )
  {
    v44 = 0.0;
    if ( g_pGameRules != 0 )
      v44 = *&g_pGameRules[18].m_szQuestName[20];
    v90 = v44 - pBuff->m_flCreationTime;
    v69 |= 0x1200000u;
    v91 = bPurged;
    if ( bPurged )
    {
      if ( pPurgeNPC != 0 )
      {
        v45 = "";
        if ( pPurgeNPC->m_iszUnitName.m_Value.u.m_Id != 0 )
          v45 = pPurgeNPC->m_iszUnitName.m_Value.u.m_pAsString;
        v46 = CDOTA_CombatLog::FindOrAddName(this, v45);
      }
      else
      {
        v46 = 0;
      }
      if ( pPurgeAbility != 0 )
      {
        v47 = "<NoAbilityName>";
        m_pAbilityData = pPurgeAbility->m_pAbilityData;
        if ( m_pAbilityData != 0 )
        {
          m_pszAbilityName = m_pAbilityData->m_pszAbilityName;
          if ( m_pszAbilityName != 0 )
            v47 = m_pszAbilityName;
        }
        v50 = CDOTA_CombatLog::FindOrAddName(this, v47);
      }
      else
      {
        v50 = 0;
      }
      if ( v46 != 0 )
      {
        v69 |= 0x20000000u;
        v94 = v46;
      }
      if ( v50 != 0 )
      {
        v69 |= 0x10000000u;
        v93 = v50;
      }
    }
  }
  else if ( pBuff == 0 )
  {
    goto LABEL_68;
  }
  if ( (*(pBuff->_vptr_CDOTA_Buff + 21))(pBuff) != 0 )
  {
    v69 |= 0x4000000u;
    v92 = 1;
  }
LABEL_68:
  v88 = (*(pBuff->_vptr_CDOTA_Buff + 27))(pBuff);
  v69 |= 4u;
  CDOTA_CombatLog::AddEntry(this, v67);
  BroadcastCombatLogMessage(v67);
  v67[0] = &off_40DC750;
  CMsgDOTACombatLogEntry::~CMsgDOTACombatLogEntry(v67);
  if ( VProf_838 )
  {
    v35 = __rdtsc();
    if ( g_VProfCurrentProfile.m_fAtRoot && g_VProfCurrentProfile.m_enabled == 0 )
      goto LABEL_72;
    v36 = g_VProfCurrentProfile.m_TargetThreadId;
    if ( v36 != ThreadGetCurrentId() )
      goto LABEL_72;
    v42 = CVProfNode::ExitScope(g_VProfCurrentProfile.m_pCurNode);
    goto LABEL_83;
  }
}


// CDOTA_CombatLog::AddAbilityEvent  (line 971, @0x0000000002492640, libserver.so)  // inlines: CDOTAUserMsg_CombatLogDataHLTV_t, CNetMessagePB, CUserMessagePB, DOTAGameRules, GetAbilityName, GetGameTime, GetUnitName, IsHero, IsToggle, String, ToCStr, curtime, operator==, set_ability_level, set_attacker_name, set_has_attacker_name, set_has_health, set_has_inflictor_name, set_has_is_ability_toggle_on, set_has_is_attacker_hero, set_has_is_attacker_illusion, set_has_is_target_hero, set_has_is_target_illusion, set_has_is_visible_dire, set_has_is_visible_radiant, set_has_last_hits, set_has_target_is_self, set_has_target_name, set_has_timestamp, set_has_timestamp_raw, set_has_type, set_has_value, set_health, set_inflictor_name, set_is_ability_toggle_off, set_is_ability_toggle_on, set_is_attacker_hero, set_is_attacker_illusion, set_is_target_hero, set_is_target_illusion, set_is_visible_dire, set_is_visible_radiant, set_last_hits, set_target_is_self, set_target_name, set_timestamp, set_timestamp_raw, set_type, set_value, ~CDOTAUserMsg_CombatLogDataHLTV_t, ~CNetMessagePB, ~CUserMessagePB
// calls: CDOTA_CombatLog::FindOrAddName, CMsgDOTACombatLogEntry::CMsgDOTACombatLogEntry, CBaseModelEntity::CanBeSeenByTeam, CDOTA_CombatLog::AddEntry, BroadcastCombatLogMessage, CMsgDOTACombatLogEntry::~CMsgDOTACombatLogEntry, CBaseEntity::GetHealth, _Unwind_Resume
// callers: CDOTABaseAbility::ToggleAbility, CDOTABaseAbility::CastAbility, CDOTA_BaseNPC::CreateAbilityTriggerRecord, CDOTA_Modifier_AntiMage_SpellShield::ReflectSpell, CDOTA_Modifier_SkeletonKing_Reincarnation::ReincarnateTime, CDOTA_Modifier_Item_Lotus_Orb_Active::ReflectSpell
// strings: "<NoAbilityName>"
void __fastcall CDOTA_CombatLog::AddAbilityEvent(
        CDOTA_CombatLog *const this,
        int iEventType,
        CDOTA_BaseNPC *pTarget,
        CDOTA_BaseNPC *pAttacker,
        CDOTABaseAbility *pAbility,
        bool bToggleOn,
        Vector vCastLocation)
{
  const char *v11; // rsi
  int v12; // r15d
  const char *m_pAsString; // rsi
  DOTAAbilityData_t *m_pAbilityData; // rax
  const char *v15; // rsi
  const char *m_pszAbilityName; // rax
  int v17; // xmm0_4
  int v18; // eax
  float m_flCurrentTime; // xmm0_4
  int v20; // eax
  char m_iUnitType; // dl
  int v22; // eax
  char v23; // dl
  __int64 v24; // rax
  int v25; // edx
  int v26; // eax
  _BOOL4 v27; // eax
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rdx
  int Health; // eax
  int iInflictorName; // [rsp+8h] [rbp-148h]
  int iValueBits; // [rsp+10h] [rbp-140h]
  int iAttackerName; // [rsp+14h] [rbp-13Ch]
  CGlobalVars *iEventTypeb; // [rsp+18h] [rbp-138h]
  _QWORD v36[2]; // [rsp+30h] [rbp-120h] BYREF
  int v37; // [rsp+40h] [rbp-110h]
  int v38; // [rsp+44h] [rbp-10Ch]
  int v39; // [rsp+48h] [rbp-108h]
  int v40; // [rsp+4Ch] [rbp-104h]
  int v41; // [rsp+54h] [rbp-FCh]
  int v42; // [rsp+5Ch] [rbp-F4h]
  bool v43; // [rsp+60h] [rbp-F0h]
  char v44; // [rsp+61h] [rbp-EFh]
  bool m_Value; // [rsp+62h] [rbp-EEh]
  char v46; // [rsp+63h] [rbp-EDh]
  int v47; // [rsp+64h] [rbp-ECh]
  int v48; // [rsp+68h] [rbp-E8h]
  int v49; // [rsp+6Ch] [rbp-E4h]
  char v50; // [rsp+70h] [rbp-E0h]
  char v51; // [rsp+71h] [rbp-DFh]
  bool v52; // [rsp+72h] [rbp-DEh]
  bool v53; // [rsp+73h] [rbp-DDh]
  int v54; // [rsp+7Ch] [rbp-D4h]
  float v55; // [rsp+8Ch] [rbp-C4h]
  _BOOL4 v56; // [rsp+98h] [rbp-B8h]
  bool v57; // [rsp+F8h] [rbp-58h]

  if ( pTarget != 0 && (pTarget->m_iUnitType & 1) != 0 )
  {
    if ( pAbility == 0 )
      return;
  }
  else
  {
    if ( pAttacker == 0 || (pAttacker->m_iUnitType & 1) == 0 || pAbility == 0 )
      return;
    if ( pTarget == 0 )
    {
      v12 = 0;
LABEL_10:
      m_pAsString = "";
      if ( pAttacker->m_iszUnitName.m_Value.u.m_Id != 0 )
        m_pAsString = pAttacker->m_iszUnitName.m_Value.u.m_pAsString;
      iAttackerName = CDOTA_CombatLog::FindOrAddName(this, m_pAsString);
      goto LABEL_13;
    }
  }
  v11 = "";
  if ( pTarget->m_iszUnitName.m_Value.u.m_Id != 0 )
    v11 = pTarget->m_iszUnitName.m_Value.u.m_pAsString;
  v12 = CDOTA_CombatLog::FindOrAddName(this, v11);
  if ( pAttacker != 0 )
    goto LABEL_10;
  iAttackerName = 0;
LABEL_13:
  m_pAbilityData = pAbility->m_pAbilityData;
  v15 = "<NoAbilityName>";
  if ( m_pAbilityData != 0 )
  {
    m_pszAbilityName = m_pAbilityData->m_pszAbilityName;
    if ( m_pszAbilityName != 0 )
      v15 = m_pszAbilityName;
  }
  iValueBits = 3;
  iInflictorName = CDOTA_CombatLog::FindOrAddName(this, v15);
  if ( iEventType != 13 )
  {
    iValueBits = 0;
    if ( ((*(pAbility->_vptr_IHandleEntity + 251))(pAbility) & 0x200) != 0 )
      iValueBits = 2 - !bToggleOn;
  }
  CMsgDOTACombatLogEntry::CMsgDOTACombatLogEntry(v36);
  v36[0] = off_40DC8D0;
  v17 = 0;
  v39 = iEventType;
  if ( g_pGameRules != 0 )
    v17 = *&g_pGameRules[18].m_szQuestName[20];
  v49 = v17;
  v18 = v37 | 0x4001;
  v37 |= 0x4001u;
  iEventTypeb = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
      {
        m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
        v18 = v37;
      }
    }
    m_flCurrentTime = iEventTypeb->m_flCurrentTime;
  }
  else
  {
    m_flCurrentTime = 0.0;
  }
  v55 = m_flCurrentTime;
  v37 = v18 | 0x800000;
  if ( v12 != 0 )
  {
    v40 = v12;
    v37 = v18 | 0x800002;
  }
  if ( iAttackerName != 0 )
  {
    v37 |= 8u;
    v41 = iAttackerName;
  }
  if ( iInflictorName != 0 )
  {
    v37 |= 0x20u;
    v42 = iInflictorName;
  }
  if ( v12 != 0 )
  {
    v20 = v37;
    m_Value = pTarget->m_bIsIllusion.m_Value;
    m_iUnitType = pTarget->m_iUnitType;
    BYTE1(v20) = BYTE1(v37) | 3;
    v37 = v20;
    v46 = m_iUnitType & 1;
  }
  if ( iAttackerName != 0 )
  {
    v22 = v37;
    v43 = pAttacker->m_bIsIllusion.m_Value;
    v23 = pAttacker->m_iUnitType;
    LOBYTE(v22) = v37 | 0xC0;
    v37 = v22;
    v44 = v23 & 1;
  }
  if ( v12 != 0 )
  {
    Health = CBaseEntity::GetHealth(pTarget);
    v37 |= 0x2000u;
    v48 = Health;
  }
  if ( iValueBits != 0 )
  {
    v37 |= 0x1000u;
    v47 = iValueBits;
  }
  v24 = (*(pAbility->_vptr_IHandleEntity + 251))(pAbility);
  v25 = v37;
  if ( (v24 & 0x200) != 0 )
  {
    v25 = v37 | 0x60000;
    v52 = bToggleOn;
    v53 = !bToggleOn;
  }
  v26 = pAbility->m_iLevel.m_Value;
  v38 |= 0x8000u;
  v54 = v26;
  v57 = pTarget == 0 || pTarget == pAttacker;
  v27 = vec3_origin.x != vCastLocation.x || vec3_origin.y != vCastLocation.y || vec3_origin.z != vCastLocation.z;
  v56 = v27;
  v37 = v25 | 0x4080000;
  if ( pAttacker != 0 && CBaseModelEntity::CanBeSeenByTeam(pAttacker, 2)
    || pTarget != 0 && CBaseModelEntity::CanBeSeenByTeam(pTarget, 2) )
  {
    v37 |= 0x400u;
    v50 = 1;
  }
  if ( pAttacker != 0 && CBaseModelEntity::CanBeSeenByTeam(pAttacker, 3)
    || pTarget != 0 && CBaseModelEntity::CanBeSeenByTeam(pTarget, 3) )
  {
    v37 |= 0x800u;
    v51 = 1;
  }
  CDOTA_CombatLog::AddEntry(this, v36);
  BroadcastCombatLogMessage(v36);
  v36[0] = &off_40DC750;
  CMsgDOTACombatLogEntry::~CMsgDOTACombatLogEntry(v36);
}


// CDOTA_CombatLog::AddLocationEvent  (line 1033, @0x000000000248b090, libserver.so)  // inlines: DOTAGameRules, GetBadGuysFountain, GetGameTime, GetGoodGuysFountain, GetUnitName, String, ToCStr, ToDOTABaseNPC, set_has_location_x, set_has_location_y, set_has_target_name, set_has_timestamp, set_has_type, set_location_x, set_location_y, set_target_name, set_timestamp, set_type
// calls: CMsgDOTACombatLogEntry::CMsgDOTACombatLogEntry, CDOTA_CombatLog::FindOrAddName, CBaseEntity::GetAbsOrigin, CDOTA_CombatLog::AddEntry, CMsgDOTACombatLogEntry::~CMsgDOTACombatLogEntry, CDOTAGamerules::GetFountain, _Unwind_Resume
// callers: CDOTA_PlayerResource::ResourceThink
void __fastcall CDOTA_CombatLog::AddLocationEvent(CDOTA_CombatLog *const this, CDOTA_BaseNPC *pNPC)
{
  int v4; // xmm0_4
  bool v5; // zf
  const char *m_pAsString; // rsi
  int v7; // eax
  vec_t x; // xmm0_4
  vec_t y; // xmm0_4
  CDOTA_BaseNPC *Fountain; // rax
  const Vector *AbsOrigin; // rax
  vec_t v12; // xmm0_4
  _BYTE v13[16]; // [rsp+0h] [rbp-110h] BYREF
  int v14; // [rsp+10h] [rbp-100h]
  int v15; // [rsp+18h] [rbp-F8h]
  int v16; // [rsp+1Ch] [rbp-F4h]
  int v17; // [rsp+3Ch] [rbp-D4h]
  vec_t v18; // [rsp+50h] [rbp-C0h]
  vec_t v19; // [rsp+54h] [rbp-BCh]

  if ( pNPC != 0 && (pNPC->m_iUnitType & 1) != 0 )
  {
    CMsgDOTACombatLogEntry::CMsgDOTACombatLogEntry(v13);
    v4 = 0;
    v15 = 7;
    if ( g_pGameRules != 0 )
      v4 = *&g_pGameRules[18].m_szQuestName[20];
    v5 = pNPC->m_iszUnitName.m_Value.u.m_Id == 0;
    v17 = v4;
    v14 |= 0x4001u;
    m_pAsString = "";
    if ( !v5 )
      m_pAsString = pNPC->m_iszUnitName.m_Value.u.m_pAsString;
    v7 = CDOTA_CombatLog::FindOrAddName(this, m_pAsString);
    v14 |= 2u;
    v16 = v7;
    if ( (*(pNPC->_vptr_IHandleEntity + 408))(pNPC) != 0 || (*(pNPC->_vptr_IHandleEntity + 438))(pNPC) != 0 )
    {
      x = CBaseEntity::GetAbsOrigin(pNPC)->x;
      v14 |= 0x100000u;
      v18 = x;
      y = CBaseEntity::GetAbsOrigin(pNPC)->y;
      v14 |= 0x200000u;
      v19 = y;
    }
    else
    {
      if ( pNPC->m_iTeamNum.m_Value == 2 )
        Fountain = CDOTAGamerules::GetFountain(g_pGameRules, 2);
      else
        Fountain = CDOTAGamerules::GetFountain(g_pGameRules, 3);
      if ( Fountain == 0 || !Fountain->m_bIsDOTANPC )
        goto LABEL_10;
      AbsOrigin = CBaseEntity::GetAbsOrigin(Fountain);
      v12 = AbsOrigin->y;
      v18 = AbsOrigin->x;
      v19 = v12;
      v14 |= 0x300000u;
    }
    CDOTA_CombatLog::AddEntry(this, v13);
LABEL_10:
    CMsgDOTACombatLogEntry::~CMsgDOTACombatLogEntry(v13);
  }
}


// CDOTA_CombatLog::AddGoldEvent  (line 1067, @0x0000000002492ba0, libserver.so)  // inlines: CDOTAUserMsg_CombatLogDataHLTV_t, CNetMessagePB, CUserMessagePB, DOTAGameRules, GetGameTime, GetUnitName, String, ToCStr, curtime, set_gold_reason, set_has_location_x, set_has_location_y, set_has_target_name, set_has_timestamp, set_has_timestamp_raw, set_has_type, set_has_value, set_location_x, set_location_y, set_target_name, set_timestamp, set_timestamp_raw, set_type, set_value, ~CDOTAUserMsg_CombatLogDataHLTV_t, ~CNetMessagePB, ~CUserMessagePB
// calls: CMsgDOTACombatLogEntry::CMsgDOTACombatLogEntry, CDOTA_CombatLog::FindOrAddName, CBaseEntity::GetAbsOrigin, CDOTA_CombatLog::AddEntry, BroadcastCombatLogMessage, CMsgDOTACombatLogEntry::~CMsgDOTACombatLogEntry, _Unwind_Resume
// callers: CDOTA_PlayerResource::SetSelectedHero, CDOTA_PlayerResource::ModifyGold
void __fastcall CDOTA_CombatLog::AddGoldEvent(
        CDOTA_CombatLog *const this,
        CDOTA_BaseNPC *pNPC,
        int nValue,
        EDOTA_ModifyGold_Reason nReason)
{
  int v8; // xmm0_4
  int v9; // eax
  CGlobalVars *v10; // r15
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rdx
  float m_flCurrentTime; // xmm0_4
  bool v13; // zf
  const char *m_pAsString; // rsi
  vec_t x; // xmm0_4
  vec_t y; // xmm0_4
  _QWORD v17[2]; // [rsp+10h] [rbp-120h] BYREF
  int v18; // [rsp+20h] [rbp-110h]
  int v19; // [rsp+28h] [rbp-108h]
  int v20; // [rsp+2Ch] [rbp-104h]
  int v21; // [rsp+44h] [rbp-ECh]
  int v22; // [rsp+4Ch] [rbp-E4h]
  vec_t v23; // [rsp+60h] [rbp-D0h]
  vec_t v24; // [rsp+64h] [rbp-CCh]
  EDOTA_ModifyGold_Reason v25; // [rsp+68h] [rbp-C8h]
  float v26; // [rsp+6Ch] [rbp-C4h]

  if ( pNPC != 0 && (pNPC->m_iUnitType & 1) != 0 && (nValue + 4) > 8 )
  {
    CMsgDOTACombatLogEntry::CMsgDOTACombatLogEntry(v17);
    v17[0] = off_40DC8D0;
    v8 = 0;
    v19 = 8;
    if ( g_pGameRules != 0 )
      v8 = *&g_pGameRules[18].m_szQuestName[20];
    v22 = v8;
    v9 = v18 | 0x4001;
    v18 |= 0x4001u;
    v10 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
        {
          m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
          v9 = v18;
        }
      }
      m_flCurrentTime = v10->m_flCurrentTime;
    }
    else
    {
      m_flCurrentTime = 0.0;
    }
    v13 = pNPC->m_iszUnitName.m_Value.u.m_Id == 0;
    v26 = m_flCurrentTime;
    v18 = v9 | 0x800000;
    m_pAsString = "";
    if ( !v13 )
      m_pAsString = pNPC->m_iszUnitName.m_Value.u.m_pAsString;
    v20 = CDOTA_CombatLog::FindOrAddName(this, m_pAsString);
    v25 = nReason;
    v21 = nValue;
    v18 |= 0x401002u;
    x = CBaseEntity::GetAbsOrigin(pNPC)->x;
    v18 |= 0x100000u;
    v23 = x;
    y = CBaseEntity::GetAbsOrigin(pNPC)->y;
    v18 |= 0x200000u;
    v24 = y;
    CDOTA_CombatLog::AddEntry(this, v17);
    BroadcastCombatLogMessage(v17);
    v17[0] = &off_40DC750;
    CMsgDOTACombatLogEntry::~CMsgDOTACombatLogEntry(v17);
  }
}


// CDOTA_CombatLog::AddXPEvent  (line 1096, @0x0000000002492da0, libserver.so)  // inlines: CDOTAUserMsg_CombatLogDataHLTV_t, CNetMessagePB, CUserMessagePB, DOTAGameRules, GetGameTime, GetUnitName, String, ToCStr, curtime, set_has_location_x, set_has_location_y, set_has_target_name, set_has_timestamp, set_has_type, set_has_value, set_has_xp_reason, set_location_x, set_location_y, set_target_name, set_timestamp, set_timestamp_raw, set_type, set_value, set_xp_reason, ~CDOTAUserMsg_CombatLogDataHLTV_t, ~CNetMessagePB, ~CUserMessagePB
// calls: CMsgDOTACombatLogEntry::CMsgDOTACombatLogEntry, CBaseEntity::GetAbsOrigin, CDOTA_CombatLog::FindOrAddName, CDOTA_CombatLog::AddEntry, BroadcastCombatLogMessage, CMsgDOTACombatLogEntry::~CMsgDOTACombatLogEntry, _Unwind_Resume
// callers: CDOTA_PlayerResource::IncrementTotalEarnedXP
void __fastcall CDOTA_CombatLog::AddXPEvent(
        CDOTA_CombatLog *const this,
        CDOTA_BaseNPC *pNPC,
        int nValue,
        EDOTA_ModifyXP_Reason nReason)
{
  int v8; // xmm0_4
  int v9; // eax
  float m_flCurrentTime; // xmm0_4
  vec_t x; // xmm0_4
  vec_t y; // xmm0_4
  const char *m_pAsString; // rsi
  bool v14; // zf
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rdx
  CGlobalVars *v16; // [rsp+8h] [rbp-128h]
  _QWORD v17[2]; // [rsp+10h] [rbp-120h] BYREF
  int v18; // [rsp+20h] [rbp-110h]
  int v19; // [rsp+28h] [rbp-108h]
  int v20; // [rsp+2Ch] [rbp-104h]
  int v21; // [rsp+44h] [rbp-ECh]
  int v22; // [rsp+4Ch] [rbp-E4h]
  vec_t v23; // [rsp+60h] [rbp-D0h]
  vec_t v24; // [rsp+64h] [rbp-CCh]
  float v25; // [rsp+6Ch] [rbp-C4h]
  EDOTA_ModifyXP_Reason v26; // [rsp+74h] [rbp-BCh]

  if ( pNPC != 0 && (pNPC->m_iUnitType & 1) != 0 )
  {
    CMsgDOTACombatLogEntry::CMsgDOTACombatLogEntry(v17);
    v17[0] = off_40DC8D0;
    v8 = 0;
    v19 = 10;
    if ( g_pGameRules != 0 )
      v8 = *&g_pGameRules[18].m_szQuestName[20];
    v22 = v8;
    v9 = v18 | 0x4001;
    v18 |= 0x4001u;
    v16 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
        {
          m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
          v9 = v18;
        }
      }
      m_flCurrentTime = v16->m_flCurrentTime;
    }
    else
    {
      m_flCurrentTime = 0.0;
    }
    v25 = m_flCurrentTime;
    v18 = v9 | 0x2800000;
    v26 = nReason;
    x = CBaseEntity::GetAbsOrigin(pNPC)->x;
    v18 |= 0x100000u;
    v23 = x;
    y = CBaseEntity::GetAbsOrigin(pNPC)->y;
    m_pAsString = "";
    v18 |= 0x200000u;
    v14 = pNPC->m_iszUnitName.m_Value.u.m_Id == 0;
    v24 = y;
    if ( !v14 )
      m_pAsString = pNPC->m_iszUnitName.m_Value.u.m_pAsString;
    v20 = CDOTA_CombatLog::FindOrAddName(this, m_pAsString);
    v21 = nValue;
    v18 |= 0x1002u;
    CDOTA_CombatLog::AddEntry(this, v17);
    BroadcastCombatLogMessage(v17);
    v17[0] = &off_40DC750;
    CMsgDOTACombatLogEntry::~CMsgDOTACombatLogEntry(v17);
  }
}


// CDOTA_CombatLog::AddPurchaseItemEvent  (line 1122, @0x0000000002492fa0, libserver.so)  // inlines: CDOTAUserMsg_CombatLogDataHLTV_t, CNetMessagePB, CUserMessagePB, DOTAGameRules, GetGameTime, GetTeamNumber, GetUnitName, String, ToCStr, curtime, set_has_is_visible_dire, set_has_is_visible_radiant, set_has_networth, set_has_target_name, set_has_timestamp, set_has_timestamp_raw, set_has_type, set_has_value, set_is_visible_dire, set_is_visible_radiant, set_networth, set_target_name, set_timestamp, set_timestamp_raw, set_type, set_value, ~CDOTAUserMsg_CombatLogDataHLTV_t, ~CNetMessagePB, ~CUserMessagePB
// calls: CMsgDOTACombatLogEntry::CMsgDOTACombatLogEntry, CDOTA_CombatLog::FindOrAddName, CDOTA_PlayerResource::GetNetWorth, CDOTA_CombatLog::AddEntry, BroadcastCombatLogMessage, CMsgDOTACombatLogEntry::~CMsgDOTACombatLogEntry, _Unwind_Resume
// callers: CDOTA_Item::OnPurchase
void __fastcall CDOTA_CombatLog::AddPurchaseItemEvent(
        CDOTA_CombatLog *const this,
        CDOTA_BaseNPC *pNPC,
        const char *pszItem)
{
  int v6; // xmm0_4
  int v7; // eax
  CGlobalVars *v8; // r15
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rdx
  float m_flCurrentTime; // xmm0_4
  bool v11; // zf
  const char *m_pAsString; // rsi
  int v13; // r15d
  int (**vptr_IHandleEntity)(...); // rax
  int v15; // eax
  int NetWorth; // eax
  unsigned __int8 m_Value; // dl
  int v18; // eax
  _QWORD v19[2]; // [rsp+0h] [rbp-120h] BYREF
  int v20; // [rsp+10h] [rbp-110h]
  int v21; // [rsp+14h] [rbp-10Ch]
  int v22; // [rsp+18h] [rbp-108h]
  int v23; // [rsp+1Ch] [rbp-104h]
  int iItemName; // [rsp+34h] [rbp-ECh]
  int v25; // [rsp+3Ch] [rbp-E4h]
  char v26; // [rsp+40h] [rbp-E0h]
  char v27; // [rsp+41h] [rbp-DFh]
  float v28; // [rsp+5Ch] [rbp-C4h]
  int v29; // [rsp+C4h] [rbp-5Ch]

  if ( pNPC != 0 && (pNPC->m_iUnitType & 1) != 0 )
  {
    CMsgDOTACombatLogEntry::CMsgDOTACombatLogEntry(v19);
    v19[0] = off_40DC8D0;
    v6 = 0;
    v22 = 11;
    if ( g_pGameRules != 0 )
      v6 = *&g_pGameRules[18].m_szQuestName[20];
    v25 = v6;
    v7 = v20 | 0x4001;
    v20 |= 0x4001u;
    v8 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
        {
          m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
          v7 = v20;
        }
      }
      m_flCurrentTime = v8->m_flCurrentTime;
    }
    else
    {
      m_flCurrentTime = 0.0;
    }
    v11 = pNPC->m_iszUnitName.m_Value.u.m_Id == 0;
    v28 = m_flCurrentTime;
    v20 = v7 | 0x800000;
    m_pAsString = "";
    if ( !v11 )
      m_pAsString = pNPC->m_iszUnitName.m_Value.u.m_pAsString;
    v13 = CDOTA_CombatLog::FindOrAddName(this, m_pAsString);
    iItemName = CDOTA_CombatLog::FindOrAddName(this, pszItem);
    vptr_IHandleEntity = pNPC->_vptr_IHandleEntity;
    v23 = v13;
    v20 |= 0x1002u;
    v15 = vptr_IHandleEntity[414](pNPC);
    if ( v15 == -1 )
      NetWorth = 0;
    else
      NetWorth = CDOTA_PlayerResource::GetNetWorth(g_pDOTAPlayerResource, v15);
    m_Value = pNPC->m_iTeamNum.m_Value;
    v29 = NetWorth;
    v21 |= 0x80000u;
    v18 = v20;
    if ( m_Value == 3 || (BYTE1(v18) = BYTE1(v20) | 4, v26 = 1, v20 = v18, m_Value != 2) )
    {
      BYTE1(v18) |= 8u;
      v27 = 1;
      v20 = v18;
    }
    CDOTA_CombatLog::AddEntry(this, v19);
    BroadcastCombatLogMessage(v19);
    v19[0] = &off_40DC750;
    CMsgDOTACombatLogEntry::~CMsgDOTACombatLogEntry(v19);
  }
}


// CDOTA_CombatLog::AddGameEvent  (line 1164, @0x00000000024931d0, libserver.so)  // inlines: CDOTAUserMsg_CombatLogDataHLTV_t, CNetMessagePB, CUserMessagePB, DOTAGameRules, GetGameTime, curtime, set_has_timestamp, set_has_type, set_has_value, set_timestamp, set_timestamp_raw, set_type, set_value, ~CDOTAUserMsg_CombatLogDataHLTV_t, ~CNetMessagePB, ~CUserMessagePB
// calls: CMsgDOTACombatLogEntry::CMsgDOTACombatLogEntry, CDOTA_CombatLog::AddEntry, BroadcastCombatLogMessage, CMsgDOTACombatLogEntry::~CMsgDOTACombatLogEntry, _Unwind_Resume
// callers: CDOTAGamerules::State_Transition, CDOTA_BaseNPC_Hero::Buyback
void __fastcall CDOTA_CombatLog::AddGameEvent(CDOTA_CombatLog *const this, int iEventType, int iValue)
{
  int v6; // xmm0_4
  int v7; // eax
  CGlobalVars *v8; // r12
  float m_flCurrentTime; // xmm0_4
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rdx
  _QWORD v11[2]; // [rsp+0h] [rbp-110h] BYREF
  int v12; // [rsp+10h] [rbp-100h]
  int iEventTypea; // [rsp+18h] [rbp-F8h]
  int v14; // [rsp+34h] [rbp-DCh]
  int v15; // [rsp+3Ch] [rbp-D4h]
  float v16; // [rsp+5Ch] [rbp-B4h]

  CMsgDOTACombatLogEntry::CMsgDOTACombatLogEntry(v11);
  v6 = 0;
  v11[0] = off_40DC8D0;
  iEventTypea = iEventType;
  if ( g_pGameRules != 0 )
    v6 = *&g_pGameRules[18].m_szQuestName[20];
  v15 = v6;
  v7 = v12 | 0x4001;
  v12 |= 0x4001u;
  v8 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
      {
        m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
        v7 = v12;
      }
    }
    m_flCurrentTime = v8->m_flCurrentTime;
  }
  else
  {
    m_flCurrentTime = 0.0;
  }
  v16 = m_flCurrentTime;
  v12 = v7 | 0x801000;
  v14 = iValue;
  CDOTA_CombatLog::AddEntry(this, v11);
  BroadcastCombatLogMessage(v11);
  v11[0] = &off_40DC750;
  CMsgDOTACombatLogEntry::~CMsgDOTACombatLogEntry(v11);
}


// CDOTA_CombatLog::AddPlayerStatsEvent  (line 1179, @0x0000000002493320, libserver.so)  // inlines: CDOTAUserMsg_CombatLogDataHLTV_t, CNetMessagePB, CUserMessagePB, DOTAGameRules, FindName, GetGameTime, GetStringTable, curtime, set_attacker_name, set_damage_source_name, set_has_networth, set_has_obs_wards_placed, set_has_target_name, set_has_timestamp, set_has_type, set_has_value, set_last_hits, set_networth, set_obs_wards_placed, set_slow_duration, set_stun_duration, set_target_name, set_target_source_name, set_timestamp, set_timestamp_raw, set_type, set_value, ~CDOTAUserMsg_CombatLogDataHLTV_t, ~CNetMessagePB, ~CUserMessagePB
// calls: CMsgDOTACombatLogEntry::CMsgDOTACombatLogEntry, CDOTA_PlayerResource::GetSelectedHeroName, CDOTA_PlayerResource::GetNetWorth, CDOTA_CombatLog::AddEntry, BroadcastCombatLogMessage, CMsgDOTACombatLogEntry::~CMsgDOTACombatLogEntry, _Unwind_Resume
// callers: CDOTA_CombatLog::DoCombatAnalysis, CDOTAHeroList::GiveAdditionalAssists, CDOTA_BaseNPC_Hero::KilledHero, CDOTAHeroList::GivePlayerFullBountyGold, CDOTAHeroList::GiveKillerBountyGold, CDOTA_Item_Ward_Dispenser::OnSpellStart, CDOTA_Item_ObserverWard::OnSpellStart
// globals: DOTA_CombatLog_Record::sm_pStringTableCombatLogNames
void __fastcall CDOTA_CombatLog::AddPlayerStatsEvent(
        CDOTA_CombatLog *const this,
        int nPlayerID,
        int nKills,
        int nDeaths,
        int nAssists,
        float flGPM,
        float flXPM,
        int nLastHits,
        int nWardsPlaced)
{
  int v12; // xmm0_4
  int v13; // eax
  CGlobalVars *v14; // r12
  float m_flCurrentTime; // xmm0_4
  const char *SelectedHeroName; // rax
  int v17; // eax
  int v18; // edx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rdx
  _QWORD v25[2]; // [rsp+20h] [rbp-120h] BYREF
  int v26; // [rsp+30h] [rbp-110h]
  int v27; // [rsp+34h] [rbp-10Ch]
  int v28; // [rsp+38h] [rbp-108h]
  int v29; // [rsp+3Ch] [rbp-104h]
  int v30; // [rsp+40h] [rbp-100h]
  int v31; // [rsp+44h] [rbp-FCh]
  int v32; // [rsp+48h] [rbp-F8h]
  int v33; // [rsp+54h] [rbp-ECh]
  int v34; // [rsp+5Ch] [rbp-E4h]
  float v35; // [rsp+64h] [rbp-DCh]
  float v36; // [rsp+68h] [rbp-D8h]
  float v37; // [rsp+7Ch] [rbp-C4h]
  int v38; // [rsp+88h] [rbp-B8h]
  int v39; // [rsp+94h] [rbp-ACh]
  int NetWorth; // [rsp+E4h] [rbp-5Ch]

  CMsgDOTACombatLogEntry::CMsgDOTACombatLogEntry(v25);
  v25[0] = off_40DC8D0;
  v12 = 0;
  v28 = 14;
  if ( g_pGameRules != 0 )
    v12 = *&g_pGameRules[18].m_szQuestName[20];
  v34 = v12;
  v13 = v26 | 0x4001;
  v26 |= 0x4001u;
  v14 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
      {
        m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
        v13 = v26;
      }
    }
    m_flCurrentTime = v14->m_flCurrentTime;
  }
  else
  {
    m_flCurrentTime = 0.0;
  }
  v37 = m_flCurrentTime;
  v26 = v13 | 0x800002;
  v29 = nPlayerID;
  SelectedHeroName = CDOTA_PlayerResource::GetSelectedHeroName(g_pDOTAPlayerResource, nPlayerID);
  if ( DOTA_CombatLog_Record::sm_pStringTableCombatLogNames != 0 )
  {
    v17 = (*(DOTA_CombatLog_Record::sm_pStringTableCombatLogNames->_vptr_INetworkStringTable + 12))(
            DOTA_CombatLog_Record::sm_pStringTableCombatLogNames,
            SelectedHeroName);
    v18 = -1;
    if ( v17 != 0xFFFF )
      v18 = v17;
  }
  else
  {
    v18 = -1;
  }
  v33 = v18;
  v32 = nAssists;
  v38 = nLastHits;
  v30 = nKills;
  v26 |= 0x2401901Cu;
  v35 = flGPM;
  v36 = flXPM;
  v31 = nDeaths;
  v39 = nWardsPlaced;
  NetWorth = CDOTA_PlayerResource::GetNetWorth(g_pDOTAPlayerResource, nPlayerID);
  v27 |= 0x80000u;
  CDOTA_CombatLog::AddEntry(this, v25);
  BroadcastCombatLogMessage(v25);
  v25[0] = &off_40DC750;
  CMsgDOTACombatLogEntry::~CMsgDOTACombatLogEntry(v25);
}


// CDOTA_CombatLog::AddMultiKillEvent  (line 1204, @0x0000000002494a10, libserver.so)  // inlines: CDOTAUserMsg_CombatLogDataHLTV_t, CNetMessagePB, CUserMessagePB, DOTAGameRules, FindName, GetGameTime, GetStringTable, GetUnitName, String, ToCStr, curtime, set_attacker_name, set_has_attacker_name, set_has_target_name, set_has_target_source_name, set_has_timestamp, set_has_timestamp_raw, set_has_type, set_has_value, set_target_name, set_target_source_name, set_timestamp, set_timestamp_raw, set_type, set_value, ~CDOTAUserMsg_CombatLogDataHLTV_t, ~CNetMessagePB, ~CUserMessagePB
// calls: CMsgDOTACombatLogEntry::CMsgDOTACombatLogEntry, CDOTA_PlayerResource::GetSelectedHeroName, CDOTA_CombatLog::FindOrAddName, CDOTA_CombatLog::AddEntry, BroadcastCombatLogMessage, CMsgDOTACombatLogEntry::~CMsgDOTACombatLogEntry, _Unwind_Resume
// callers: CDOTA_BaseNPC_Hero::KilledHero
// globals: DOTA_CombatLog_Record::sm_pStringTableCombatLogNames
void __fastcall CDOTA_CombatLog::AddMultiKillEvent(
        CDOTA_CombatLog *const this,
        int nPlayerID,
        CDOTA_BaseNPC *pKiller,
        int nKills)
{
  int v8; // xmm0_4
  int v9; // eax
  CGlobalVars *v10; // r15
  float m_flCurrentTime; // xmm0_4
  const char *SelectedHeroName; // rax
  int v13; // eax
  int v14; // edx
  const char *m_pAsString; // rsi
  bool v16; // zf
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rdx
  _QWORD v18[2]; // [rsp+10h] [rbp-120h] BYREF
  int v19; // [rsp+20h] [rbp-110h]
  int v20; // [rsp+28h] [rbp-108h]
  int v21; // [rsp+2Ch] [rbp-104h]
  int v22; // [rsp+30h] [rbp-100h]
  int v23; // [rsp+34h] [rbp-FCh]
  int v24; // [rsp+44h] [rbp-ECh]
  int v25; // [rsp+4Ch] [rbp-E4h]
  float v26; // [rsp+6Ch] [rbp-C4h]

  if ( pKiller != 0 && nKills > 1 )
  {
    CMsgDOTACombatLogEntry::CMsgDOTACombatLogEntry(v18);
    v18[0] = off_40DC8D0;
    v8 = 0;
    v20 = 15;
    if ( g_pGameRules != 0 )
      v8 = *&g_pGameRules[18].m_szQuestName[20];
    v25 = v8;
    v9 = v19 | 0x4001;
    v19 |= 0x4001u;
    v10 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
        {
          m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
          v9 = v19;
        }
      }
      m_flCurrentTime = v10->m_flCurrentTime;
    }
    else
    {
      m_flCurrentTime = 0.0;
    }
    v26 = m_flCurrentTime;
    v19 = v9 | 0x800000;
    SelectedHeroName = CDOTA_PlayerResource::GetSelectedHeroName(g_pDOTAPlayerResource, nPlayerID);
    if ( DOTA_CombatLog_Record::sm_pStringTableCombatLogNames != 0 )
    {
      v13 = (*(DOTA_CombatLog_Record::sm_pStringTableCombatLogNames->_vptr_INetworkStringTable + 12))(
              DOTA_CombatLog_Record::sm_pStringTableCombatLogNames,
              SelectedHeroName);
      v14 = -1;
      if ( v13 != 0xFFFF )
        v14 = v13;
    }
    else
    {
      v14 = -1;
    }
    v21 = v14;
    m_pAsString = "";
    v22 = nPlayerID;
    v16 = pKiller->m_iszUnitName.m_Value.u.m_Id == 0;
    v19 |= 6u;
    if ( !v16 )
      m_pAsString = pKiller->m_iszUnitName.m_Value.u.m_pAsString;
    v23 = CDOTA_CombatLog::FindOrAddName(this, m_pAsString);
    v24 = nKills;
    v19 |= 0x1008u;
    CDOTA_CombatLog::AddEntry(this, v18);
    BroadcastCombatLogMessage(v18);
    v18[0] = &off_40DC750;
    CMsgDOTACombatLogEntry::~CMsgDOTACombatLogEntry(v18);
  }
}


// CDOTA_CombatLog::AddKillstreakEvent  (line 1228, @0x0000000002494c30, libserver.so)  // inlines: CDOTAUserMsg_CombatLogDataHLTV_t, CNetMessagePB, CUserMessagePB, DOTAGameRules, FindName, GetGameTime, GetStringTable, GetUnitName, String, ToCStr, curtime, set_attacker_name, set_has_attacker_name, set_has_target_name, set_has_target_source_name, set_has_timestamp, set_has_timestamp_raw, set_has_type, set_has_value, set_target_name, set_target_source_name, set_timestamp, set_timestamp_raw, set_type, set_value, ~CDOTAUserMsg_CombatLogDataHLTV_t, ~CNetMessagePB, ~CUserMessagePB
// calls: CMsgDOTACombatLogEntry::CMsgDOTACombatLogEntry, CDOTA_PlayerResource::GetSelectedHeroName, CDOTA_CombatLog::FindOrAddName, CDOTA_CombatLog::AddEntry, BroadcastCombatLogMessage, CMsgDOTACombatLogEntry::~CMsgDOTACombatLogEntry, _Unwind_Resume
// callers: CDOTA_BaseNPC_Hero::KilledHero
// globals: DOTA_CombatLog_Record::sm_pStringTableCombatLogNames
void __fastcall CDOTA_CombatLog::AddKillstreakEvent(
        CDOTA_CombatLog *const this,
        int nPlayerID,
        CDOTA_BaseNPC *pKiller,
        int nKillstreak)
{
  int v7; // xmm0_4
  int v8; // eax
  CGlobalVars *v9; // r12
  float m_flCurrentTime; // xmm0_4
  const char *SelectedHeroName; // rax
  int v12; // eax
  int v13; // edx
  const char *m_pAsString; // rsi
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rdx
  _QWORD v17[2]; // [rsp+10h] [rbp-120h] BYREF
  int v18; // [rsp+20h] [rbp-110h]
  int v19; // [rsp+28h] [rbp-108h]
  int v20; // [rsp+2Ch] [rbp-104h]
  int v21; // [rsp+30h] [rbp-100h]
  int nKiller; // [rsp+34h] [rbp-FCh]
  int v23; // [rsp+44h] [rbp-ECh]
  int v24; // [rsp+4Ch] [rbp-E4h]
  float v25; // [rsp+6Ch] [rbp-C4h]

  CMsgDOTACombatLogEntry::CMsgDOTACombatLogEntry(v17);
  v17[0] = off_40DC8D0;
  v7 = 0;
  v19 = 16;
  if ( g_pGameRules != 0 )
    v7 = *&g_pGameRules[18].m_szQuestName[20];
  v24 = v7;
  v8 = v18 | 0x4001;
  v18 |= 0x4001u;
  v9 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
      {
        m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
        v8 = v18;
      }
    }
    m_flCurrentTime = v9->m_flCurrentTime;
  }
  else
  {
    m_flCurrentTime = 0.0;
  }
  v25 = m_flCurrentTime;
  v18 = v8 | 0x800000;
  SelectedHeroName = CDOTA_PlayerResource::GetSelectedHeroName(g_pDOTAPlayerResource, nPlayerID);
  if ( DOTA_CombatLog_Record::sm_pStringTableCombatLogNames != 0 )
  {
    v12 = (*(DOTA_CombatLog_Record::sm_pStringTableCombatLogNames->_vptr_INetworkStringTable + 12))(
            DOTA_CombatLog_Record::sm_pStringTableCombatLogNames,
            SelectedHeroName);
    v13 = -1;
    if ( v12 != 0xFFFF )
      v13 = v12;
  }
  else
  {
    v13 = -1;
  }
  v20 = v13;
  v21 = nPlayerID;
  v18 |= 6u;
  if ( pKiller != 0 )
  {
    m_pAsString = "";
    if ( pKiller->m_iszUnitName.m_Value.u.m_Id != 0 )
      m_pAsString = pKiller->m_iszUnitName.m_Value.u.m_pAsString;
    nKiller = CDOTA_CombatLog::FindOrAddName(this, m_pAsString);
    v18 |= 0x1008u;
    v23 = nKillstreak;
    CDOTA_CombatLog::AddEntry(this, v17);
    BroadcastCombatLogMessage(v17);
  }
  v17[0] = &off_40DC750;
  CMsgDOTACombatLogEntry::~CMsgDOTACombatLogEntry(v17);
}


// CDOTA_CombatLog::AddTeamBuildingKillEvent  (line 1260, @0x0000000002494e40, libserver.so)  // inlines: CDOTAUserMsg_CombatLogDataHLTV_t, CNetMessagePB, CUserMessagePB, DOTAGameRules, GetGameTime, GetUnitName, String, ToCStr, curtime, set_attacker_team, set_has_target_name, set_has_target_team, set_has_timestamp, set_has_type, set_has_value, set_target_name, set_target_team, set_timestamp, set_timestamp_raw, set_type, set_value, ~CDOTAUserMsg_CombatLogDataHLTV_t, ~CNetMessagePB, ~CUserMessagePB
// calls: CMsgDOTACombatLogEntry::CMsgDOTACombatLogEntry, CDOTA_CombatLog::FindOrAddName, CDOTA_CombatLog::AddEntry, BroadcastCombatLogMessage, CMsgDOTACombatLogEntry::~CMsgDOTACombatLogEntry, _Unwind_Resume
// callers: CDOTA_BaseNPC_Building::Event_Killed
void __fastcall CDOTA_CombatLog::AddTeamBuildingKillEvent(
        CDOTA_CombatLog *const this,
        CDOTA_BaseNPC *pAttacker,
        CDOTA_BaseNPC *pBuilding)
{
  int v6; // xmm0_4
  int v7; // eax
  CGlobalVars *v8; // r13
  float m_flCurrentTime; // xmm0_4
  int m_Value; // ecx
  int v11; // edx
  bool v12; // zf
  const char *m_pAsString; // rsi
  int v14; // eax
  uint32 m_iUnitType; // edx
  int v16; // eax
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rdx
  _QWORD v18[2]; // [rsp+0h] [rbp-120h] BYREF
  int v19; // [rsp+10h] [rbp-110h]
  int v20; // [rsp+18h] [rbp-108h]
  int nBuildingID; // [rsp+1Ch] [rbp-104h]
  int v22; // [rsp+34h] [rbp-ECh]
  int v23; // [rsp+3Ch] [rbp-E4h]
  float v24; // [rsp+5Ch] [rbp-C4h]
  int v25; // [rsp+6Ch] [rbp-B4h]
  int v26; // [rsp+70h] [rbp-B0h]

  CMsgDOTACombatLogEntry::CMsgDOTACombatLogEntry(v18);
  v18[0] = off_40DC8D0;
  v6 = 0;
  v20 = 17;
  if ( g_pGameRules != 0 )
    v6 = *&g_pGameRules[18].m_szQuestName[20];
  v23 = v6;
  v7 = v19 | 0x4001;
  v19 |= 0x4001u;
  v8 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
      {
        m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
        v7 = v19;
      }
    }
    m_flCurrentTime = v8->m_flCurrentTime;
  }
  else
  {
    m_flCurrentTime = 0.0;
  }
  v24 = m_flCurrentTime;
  if ( pAttacker != 0 )
  {
    m_Value = pAttacker->m_iTeamNum.m_Value;
    if ( pBuilding != 0 )
    {
LABEL_8:
      v11 = pBuilding->m_iTeamNum.m_Value;
      goto LABEL_9;
    }
  }
  else
  {
    m_Value = 0;
    if ( pBuilding != 0 )
      goto LABEL_8;
  }
  v11 = 0;
LABEL_9:
  v12 = pBuilding->m_iszUnitName.m_Value.u.m_Id == 0;
  v25 = m_Value;
  v19 = v7 | 0x18800000;
  v26 = v11;
  m_pAsString = "";
  if ( !v12 )
    m_pAsString = pBuilding->m_iszUnitName.m_Value.u.m_pAsString;
  v14 = CDOTA_CombatLog::FindOrAddName(this, m_pAsString);
  m_iUnitType = pBuilding->m_iUnitType;
  nBuildingID = v14;
  v16 = 1;
  if ( (m_iUnitType & 4) == 0 )
  {
    LOBYTE(v16) = 2;
    if ( (m_iUnitType & 0x40) == 0 )
    {
      v16 = m_iUnitType & 0x20;
      if ( (m_iUnitType & 0x20) != 0 )
        v16 = 3;
    }
  }
  v19 |= 0x1002u;
  v22 = v16;
  CDOTA_CombatLog::AddEntry(this, v18);
  BroadcastCombatLogMessage(v18);
  v18[0] = &off_40DC750;
  CMsgDOTACombatLogEntry::~CMsgDOTACombatLogEntry(v18);
}


// CDOTA_CombatLog::AddFirstBloodEvent  (line 1292, @0x0000000002495050, libserver.so)  // inlines: Add, CDOTAUserMsg_CombatLogDataHLTV_t, CNetMessagePB, CUserMessagePB, CopyArray, DOTAGameRules, GetGameTime, MoveArray, Reserve, add_assist_players, curtime, memcpy, operator(), set_attacker_team, set_has_attacker_team, set_has_timestamp, set_has_timestamp_raw, set_has_type, set_timestamp, set_timestamp_raw, set_type, ~CDOTAUserMsg_CombatLogDataHLTV_t, ~CNetMessagePB, ~CUserMessagePB
// calls: CMsgDOTACombatLogEntry::CMsgDOTACombatLogEntry, CDOTA_PlayerResource::GetTeam, operator new [], memcpy, operator delete [], CMsgDOTACombatLogEntry::~CMsgDOTACombatLogEntry, CDOTA_CombatLog::AddEntry, BroadcastCombatLogMessage, _Unwind_Resume
// callers: CDOTAHeroList::GivePlayerFullBountyGold, CDOTAHeroList::GiveKillerBountyGold
void __fastcall CDOTA_CombatLog::AddFirstBloodEvent(
        CDOTA_CombatLog *const this,
        CUtlVector<int,CUtlMemory<int,int> > *pAttackerIDs)
{
  int v3; // xmm0_4
  int v4; // eax
  CGlobalVars *v5; // rbx
  float m_flCurrentTime; // xmm0_4
  int m_Size; // ebx
  __int64 v8; // r14
  unsigned __int64 v9; // rbx
  void *v10; // rax
  __int64 v11; // rdx
  int v12; // r12d
  int v13; // edx
  void *v14; // r15
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rdx
  _QWORD v17[2]; // [rsp+10h] [rbp-120h] BYREF
  int v18; // [rsp+20h] [rbp-110h]
  int v19; // [rsp+28h] [rbp-108h]
  int v20; // [rsp+4Ch] [rbp-E4h]
  float v21; // [rsp+6Ch] [rbp-C4h]
  int Team; // [rsp+7Ch] [rbp-B4h]
  void *src; // [rsp+A8h] [rbp-88h]
  int v24; // [rsp+B0h] [rbp-80h]
  int v25; // [rsp+B4h] [rbp-7Ch]

  CMsgDOTACombatLogEntry::CMsgDOTACombatLogEntry(v17);
  v17[0] = off_40DC8D0;
  v3 = 0;
  v19 = 18;
  if ( g_pGameRules != 0 )
    v3 = *&g_pGameRules[18].m_szQuestName[20];
  v20 = v3;
  v4 = v18 | 0x4001;
  v18 |= 0x4001u;
  v5 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
      {
        m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
        v4 = v18;
      }
    }
    m_flCurrentTime = v5->m_flCurrentTime;
  }
  else
  {
    m_flCurrentTime = 0.0;
  }
  v21 = m_flCurrentTime;
  v18 = v4 | 0x800000;
  if ( pAttackerIDs != 0 && (m_Size = pAttackerIDs->m_Size, pAttackerIDs->m_Size > 0) )
  {
    Team = CDOTA_PlayerResource::GetTeam(g_pDOTAPlayerResource, *pAttackerIDs->m_Memory.m_pMemory);
    v8 = 4LL * (m_Size - 1) + 4;
    v9 = 0;
    v18 |= 0x8000000u;
    do
    {
      v11 = v24;
      v12 = pAttackerIDs->m_Memory.m_pMemory[v9 / 4];
      if ( v24 == v25 )
      {
        v13 = 2 * v24;
        v14 = src;
        if ( v24 + 1 >= 2 * v24 )
          v13 = v24 + 1;
        if ( v13 < 4 )
          v13 = 4;
        v25 = v13;
        v10 = operator new[](4LL * v13);
        src = v10;
        v11 = v24;
        if ( v14 != 0 )
        {
          memcpy(v10, v14, 4LL * v24);
          operator delete[](v14);
          v10 = src;
          v11 = v24;
        }
      }
      else
      {
        v10 = src;
      }
      v9 += 4LL;
      v24 = v11 + 1;
      *(v10 + v11) = v12;
    }
    while ( v9 != v8 );
    CDOTA_CombatLog::AddEntry(this, v17);
    BroadcastCombatLogMessage(v17);
    v17[0] = &off_40DC750;
    CMsgDOTACombatLogEntry::~CMsgDOTACombatLogEntry(v17);
  }
  else
  {
    v17[0] = &off_40DC750;
    CMsgDOTACombatLogEntry::~CMsgDOTACombatLogEntry(v17);
  }
}


// CDOTA_CombatLog::AddNeutralCampStackedEvent  (line 1320, @0x000000000248b260, libserver.so)  // inlines: DOTAGameRules, FindName, GetGameTime, GetStringTable, curtime, set_has_neutral_camp_type, set_has_target_name, set_has_target_source_name, set_has_timestamp, set_has_timestamp_raw, set_has_type, set_has_value, set_neutral_camp_type, set_target_name, set_target_source_name, set_timestamp, set_timestamp_raw, set_type, set_value
// calls: CMsgDOTACombatLogEntry::CMsgDOTACombatLogEntry, CDOTA_PlayerResource::GetSelectedHeroName, CDOTA_PlayerResource::GetCampsStacked, CDOTA_CombatLog::AddEntry, CMsgDOTACombatLogEntry::~CMsgDOTACombatLogEntry, _Unwind_Resume
// callers: CDOTA_NeutralSpawner::SpawnNextBatch
// globals: DOTA_CombatLog_Record::sm_pStringTableCombatLogNames
void __fastcall CDOTA_CombatLog::AddNeutralCampStackedEvent(CDOTA_CombatLog *const this, int nPlayerID, int nCampType)
{
  int v6; // xmm0_4
  int v7; // eax
  CGlobalVars *v8; // rbx
  float m_flCurrentTime; // xmm0_4
  const char *SelectedHeroName; // rax
  int v11; // eax
  int v12; // edx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rdx
  _BYTE v14[16]; // [rsp+0h] [rbp-120h] BYREF
  int v15; // [rsp+10h] [rbp-110h]
  int v16; // [rsp+14h] [rbp-10Ch]
  int v17; // [rsp+18h] [rbp-108h]
  int v18; // [rsp+1Ch] [rbp-104h]
  int v19; // [rsp+20h] [rbp-100h]
  int CampsStacked; // [rsp+34h] [rbp-ECh]
  int v21; // [rsp+3Ch] [rbp-E4h]
  float v22; // [rsp+5Ch] [rbp-C4h]
  int v23; // [rsp+8Ch] [rbp-94h]

  CMsgDOTACombatLogEntry::CMsgDOTACombatLogEntry(v14);
  v6 = 0;
  v17 = 20;
  if ( g_pGameRules != 0 )
    v6 = *&g_pGameRules[18].m_szQuestName[20];
  v21 = v6;
  v7 = v15 | 0x4001;
  v15 |= 0x4001u;
  v8 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
      {
        m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
        v7 = v15;
      }
    }
    m_flCurrentTime = v8->m_flCurrentTime;
  }
  else
  {
    m_flCurrentTime = 0.0;
  }
  v22 = m_flCurrentTime;
  v15 = v7 | 0x800000;
  if ( nPlayerID != -1 )
  {
    SelectedHeroName = CDOTA_PlayerResource::GetSelectedHeroName(g_pDOTAPlayerResource, nPlayerID);
    if ( DOTA_CombatLog_Record::sm_pStringTableCombatLogNames != 0 )
    {
      v11 = (*(DOTA_CombatLog_Record::sm_pStringTableCombatLogNames->_vptr_INetworkStringTable + 12))(
              DOTA_CombatLog_Record::sm_pStringTableCombatLogNames,
              SelectedHeroName);
      v12 = -1;
      if ( v11 != 0xFFFF )
        v12 = v11;
    }
    else
    {
      v12 = -1;
    }
    v18 = v12;
    v19 = nPlayerID;
    v16 |= 0x20u;
    v23 = nCampType;
    v15 |= 6u;
    CampsStacked = CDOTA_PlayerResource::GetCampsStacked(g_pDOTAPlayerResource, nPlayerID);
    v15 |= 0x1000u;
    CDOTA_CombatLog::AddEntry(this, v14);
  }
  CMsgDOTACombatLogEntry::~CMsgDOTACombatLogEntry(v14);
}


// CDOTA_CombatLog::AddPickupRuneEvent  (line 1341, @0x000000000248b410, libserver.so)  // inlines: DOTAGameRules, FindName, GetGameTime, GetStringTable, curtime, set_has_rune_type, set_has_target_name, set_has_target_source_name, set_has_timestamp, set_has_timestamp_raw, set_has_type, set_has_value, set_rune_type, set_target_name, set_target_source_name, set_timestamp, set_timestamp_raw, set_type, set_value
// calls: CMsgDOTACombatLogEntry::CMsgDOTACombatLogEntry, CDOTA_PlayerResource::GetSelectedHeroName, CDOTA_PlayerResource::GetRunePickups, CDOTA_CombatLog::AddEntry, CMsgDOTACombatLogEntry::~CMsgDOTACombatLogEntry, _Unwind_Resume
// callers: CDOTA_BaseNPC::HandleRunePickup
// globals: DOTA_CombatLog_Record::sm_pStringTableCombatLogNames
void __fastcall CDOTA_CombatLog::AddPickupRuneEvent(CDOTA_CombatLog *const this, int nPlayerID, int nRuneType)
{
  int v6; // xmm0_4
  int v7; // eax
  CGlobalVars *v8; // rbx
  float m_flCurrentTime; // xmm0_4
  const char *SelectedHeroName; // rax
  int v11; // eax
  int v12; // edx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rdx
  _BYTE v14[16]; // [rsp+0h] [rbp-120h] BYREF
  int v15; // [rsp+10h] [rbp-110h]
  int v16; // [rsp+14h] [rbp-10Ch]
  int v17; // [rsp+18h] [rbp-108h]
  int v18; // [rsp+1Ch] [rbp-104h]
  int v19; // [rsp+20h] [rbp-100h]
  int RunePickups; // [rsp+34h] [rbp-ECh]
  int v21; // [rsp+3Ch] [rbp-E4h]
  float v22; // [rsp+5Ch] [rbp-C4h]
  int v23; // [rsp+90h] [rbp-90h]

  CMsgDOTACombatLogEntry::CMsgDOTACombatLogEntry(v14);
  v6 = 0;
  v17 = 21;
  if ( g_pGameRules != 0 )
    v6 = *&g_pGameRules[18].m_szQuestName[20];
  v21 = v6;
  v7 = v15 | 0x4001;
  v15 |= 0x4001u;
  v8 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
      {
        m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
        v7 = v15;
      }
    }
    m_flCurrentTime = v8->m_flCurrentTime;
  }
  else
  {
    m_flCurrentTime = 0.0;
  }
  v22 = m_flCurrentTime;
  v15 = v7 | 0x800000;
  if ( nPlayerID != -1 )
  {
    SelectedHeroName = CDOTA_PlayerResource::GetSelectedHeroName(g_pDOTAPlayerResource, nPlayerID);
    if ( DOTA_CombatLog_Record::sm_pStringTableCombatLogNames != 0 )
    {
      v11 = (*(DOTA_CombatLog_Record::sm_pStringTableCombatLogNames->_vptr_INetworkStringTable + 12))(
              DOTA_CombatLog_Record::sm_pStringTableCombatLogNames,
              SelectedHeroName);
      v12 = -1;
      if ( v11 != 0xFFFF )
        v12 = v11;
    }
    else
    {
      v12 = -1;
    }
    v18 = v12;
    v19 = nPlayerID;
    v16 |= 0x40u;
    v23 = nRuneType;
    v15 |= 6u;
    RunePickups = CDOTA_PlayerResource::GetRunePickups(g_pDOTAPlayerResource, nPlayerID);
    v15 |= 0x1000u;
    CDOTA_CombatLog::AddEntry(this, v14);
  }
  CMsgDOTACombatLogEntry::~CMsgDOTACombatLogEntry(v14);
}


// CDOTA_CombatLog::AddRevealInvisibleEvent  (line 1360, @0x000000000248b5c0, libserver.so)  // inlines: DOTAGameRules, GetAbilityName, GetGameTime, GetUnitName, String, ToCStr, curtime, set_attacker_name, set_has_attacker_name, set_has_inflictor_name, set_has_target_name, set_has_timestamp, set_has_timestamp_raw, set_has_type, set_inflictor_name, set_target_name, set_timestamp, set_timestamp_raw, set_type
// calls: CMsgDOTACombatLogEntry::CMsgDOTACombatLogEntry, CDOTA_CombatLog::FindOrAddName, CDOTA_CombatLog::AddEntry, CMsgDOTACombatLogEntry::~CMsgDOTACombatLogEntry, _Unwind_Resume
// callers: CDOTA_Modifier_TrueSight::OnCreated, CDOTA_Modifier_Item_DustofAppearance::OnCreated
// strings: "<NoAbilityName>"
void __fastcall CDOTA_CombatLog::AddRevealInvisibleEvent(
        CDOTA_CombatLog *const this,
        CDOTABaseAbility *pRevealSource,
        CDOTA_BaseNPC *pRevealOwner,
        CDOTA_BaseNPC *pRevealTarget)
{
  int v7; // xmm0_4
  int v8; // eax
  CGlobalVars *v9; // r12
  float m_flCurrentTime; // xmm0_4
  const char *m_pAsString; // rsi
  int v12; // r12d
  const char *v13; // rsi
  int v14; // r14d
  CDOTABaseAbility *v15; // rax
  DOTAAbilityData_t *m_pAbilityData; // rax
  const char *v17; // rsi
  const char *m_pszAbilityName; // rax
  int v19; // eax
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rdx
  _BYTE v22[16]; // [rsp+10h] [rbp-120h] BYREF
  int v23; // [rsp+20h] [rbp-110h]
  int v24; // [rsp+28h] [rbp-108h]
  int v25; // [rsp+2Ch] [rbp-104h]
  int v26; // [rsp+34h] [rbp-FCh]
  int v27; // [rsp+3Ch] [rbp-F4h]
  int v28; // [rsp+4Ch] [rbp-E4h]
  float v29; // [rsp+6Ch] [rbp-C4h]

  CMsgDOTACombatLogEntry::CMsgDOTACombatLogEntry(v22);
  v7 = 0;
  v24 = 22;
  if ( g_pGameRules != 0 )
    v7 = *&g_pGameRules[18].m_szQuestName[20];
  v28 = v7;
  v8 = v23 | 0x4001;
  v23 |= 0x4001u;
  v9 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
      {
        m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
        v8 = v23;
      }
    }
    m_flCurrentTime = v9->m_flCurrentTime;
  }
  else
  {
    m_flCurrentTime = 0.0;
  }
  v29 = m_flCurrentTime;
  v23 = v8 | 0x800000;
  if ( pRevealTarget != 0 )
  {
    m_pAsString = "";
    if ( pRevealTarget->m_iszUnitName.m_Value.u.m_Id != 0 )
      m_pAsString = pRevealTarget->m_iszUnitName.m_Value.u.m_pAsString;
    v12 = CDOTA_CombatLog::FindOrAddName(this, m_pAsString);
  }
  else
  {
    v12 = 0;
  }
  if ( pRevealOwner != 0 )
  {
    v13 = "";
    if ( pRevealOwner->m_iszUnitName.m_Value.u.m_Id != 0 )
      v13 = pRevealOwner->m_iszUnitName.m_Value.u.m_pAsString;
    v14 = CDOTA_CombatLog::FindOrAddName(this, v13);
    v15 = pRevealSource;
    if ( pRevealSource != 0 )
      goto LABEL_14;
LABEL_29:
    v19 = 0;
    goto LABEL_18;
  }
  v15 = pRevealSource;
  v14 = 0;
  if ( pRevealSource == 0 )
    goto LABEL_29;
LABEL_14:
  m_pAbilityData = v15->m_pAbilityData;
  v17 = "<NoAbilityName>";
  if ( m_pAbilityData != 0 )
  {
    m_pszAbilityName = m_pAbilityData->m_pszAbilityName;
    if ( m_pszAbilityName != 0 )
      v17 = m_pszAbilityName;
  }
  v19 = CDOTA_CombatLog::FindOrAddName(this, v17);
LABEL_18:
  if ( v12 != 0 )
  {
    v23 |= 2u;
    v25 = v12;
  }
  if ( v14 != 0 )
  {
    v23 |= 8u;
    v26 = v14;
  }
  if ( v19 != 0 )
  {
    v23 |= 0x20u;
    v27 = v19;
  }
  CDOTA_CombatLog::AddEntry(this, v22);
  CMsgDOTACombatLogEntry::~CMsgDOTACombatLogEntry(v22);
}


// CDOTA_CombatLog::AddHeroSavedEvent  (line 1387, @0x000000000248b7f0, libserver.so)  // inlines: DOTAGameRules, GetAbilityName, GetGameTime, GetUnitName, String, ToCStr, curtime, set_attacker_name, set_has_attacker_name, set_has_inflictor_name, set_has_is_heal_save, set_has_target_name, set_has_timestamp, set_has_timestamp_raw, set_has_type, set_inflictor_name, set_is_heal_save, set_target_name, set_timestamp, set_timestamp_raw, set_type
// calls: CMsgDOTACombatLogEntry::CMsgDOTACombatLogEntry, CDOTA_CombatLog::FindOrAddName, CDOTA_CombatLog::AddEntry, CMsgDOTACombatLogEntry::~CMsgDOTACombatLogEntry, _Unwind_Resume
// callers: CDOTA_BaseNPC_Hero::OnTakeDamage_Alive, CDOTA_Modifier_Dazzle_Shallow_Grave::OnTakeDamage, CDOTA_Modifier_Item_Crimson_Guard_Extra::GetModifierPhysical_ConstantBlock, CDOTA_Modifier_GlimmerCape_Fade::OnTakeDamage, CDOTA_Modifier_Item_Pipe_Barrier::GetModifierIncomingSpellDamageConstant, CDOTA_Modifier_Item_Solar_Crest_Armor_Addition::OnAttackFail, CDOTA_Modifier_Item_Solar_Crest_Armor_Addition::OnTakeDamage
// strings: "<NoAbilityName>"
void __fastcall CDOTA_CombatLog::AddHeroSavedEvent(
        CDOTA_CombatLog *const this,
        CDOTABaseAbility *pSaveAbility,
        CDOTA_BaseNPC *pSaveCaster,
        CDOTA_BaseNPC *pSaveTarget,
        bool bIsHealSave)
{
  int v8; // xmm0_4
  int v9; // eax
  CGlobalVars *v10; // r12
  float m_flCurrentTime; // xmm0_4
  const char *m_pAsString; // rsi
  int v13; // r12d
  const char *v14; // rsi
  int v15; // r14d
  CDOTABaseAbility *v16; // rax
  DOTAAbilityData_t *m_pAbilityData; // rax
  const char *v18; // rsi
  const char *m_pszAbilityName; // rax
  int v20; // eax
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rdx
  _BYTE v24[16]; // [rsp+10h] [rbp-120h] BYREF
  int v25; // [rsp+20h] [rbp-110h]
  int v26; // [rsp+24h] [rbp-10Ch]
  int v27; // [rsp+28h] [rbp-108h]
  int v28; // [rsp+2Ch] [rbp-104h]
  int v29; // [rsp+34h] [rbp-FCh]
  int v30; // [rsp+3Ch] [rbp-F4h]
  int v31; // [rsp+4Ch] [rbp-E4h]
  float v32; // [rsp+6Ch] [rbp-C4h]
  bool v33; // [rsp+A6h] [rbp-8Ah]

  CMsgDOTACombatLogEntry::CMsgDOTACombatLogEntry(v24);
  v8 = 0;
  v27 = 23;
  if ( g_pGameRules != 0 )
    v8 = *&g_pGameRules[18].m_szQuestName[20];
  v31 = v8;
  v9 = v25 | 0x4001;
  v25 |= 0x4001u;
  v10 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
      {
        m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
        v9 = v25;
      }
    }
    m_flCurrentTime = v10->m_flCurrentTime;
  }
  else
  {
    m_flCurrentTime = 0.0;
  }
  v32 = m_flCurrentTime;
  v25 = v9 | 0x800000;
  if ( pSaveTarget != 0 )
  {
    m_pAsString = "";
    if ( pSaveTarget->m_iszUnitName.m_Value.u.m_Id != 0 )
      m_pAsString = pSaveTarget->m_iszUnitName.m_Value.u.m_pAsString;
    v13 = CDOTA_CombatLog::FindOrAddName(this, m_pAsString);
  }
  else
  {
    v13 = 0;
  }
  if ( pSaveCaster != 0 )
  {
    v14 = "";
    if ( pSaveCaster->m_iszUnitName.m_Value.u.m_Id != 0 )
      v14 = pSaveCaster->m_iszUnitName.m_Value.u.m_pAsString;
    v15 = CDOTA_CombatLog::FindOrAddName(this, v14);
    v16 = pSaveAbility;
    if ( pSaveAbility != 0 )
      goto LABEL_14;
LABEL_29:
    v20 = 0;
    goto LABEL_18;
  }
  v16 = pSaveAbility;
  v15 = 0;
  if ( pSaveAbility == 0 )
    goto LABEL_29;
LABEL_14:
  m_pAbilityData = v16->m_pAbilityData;
  v18 = "<NoAbilityName>";
  if ( m_pAbilityData != 0 )
  {
    m_pszAbilityName = m_pAbilityData->m_pszAbilityName;
    if ( m_pszAbilityName != 0 )
      v18 = m_pszAbilityName;
  }
  v20 = CDOTA_CombatLog::FindOrAddName(this, v18);
LABEL_18:
  if ( v13 != 0 )
  {
    v25 |= 2u;
    v28 = v13;
  }
  if ( v15 != 0 )
  {
    v25 |= 8u;
    v29 = v15;
  }
  if ( v20 != 0 )
  {
    v25 |= 0x20u;
    v30 = v20;
  }
  v26 |= 0x100u;
  v33 = bIsHealSave;
  CDOTA_CombatLog::AddEntry(this, v24);
  CMsgDOTACombatLogEntry::~CMsgDOTACombatLogEntry(v24);
}


// CDOTA_CombatLog::AddManaRestoredEvent  (line 1419, @0x000000000248ba40, libserver.so)  // inlines: DOTAGameRules, GetAbilityName, GetGameTime, GetUnitName, IsHero, String, ToCStr, curtime, set_attacker_name, set_has_target_name, set_has_timestamp, set_has_timestamp_raw, set_has_type, set_has_value, set_inflictor_name, set_is_target_hero, set_target_name, set_timestamp, set_timestamp_raw, set_type, set_value
// calls: CMsgDOTACombatLogEntry::CMsgDOTACombatLogEntry, CDOTA_CombatLog::FindOrAddName, CDOTA_CombatLog::AddEntry, CMsgDOTACombatLogEntry::~CMsgDOTACombatLogEntry, _Unwind_Resume
// callers: CDOTA_BaseNPC::GiveMana, CDOTA_Modifier_Wisp_Tether::OnManaGained
// strings: "<NoAbilityName>"
void __fastcall CDOTA_CombatLog::AddManaRestoredEvent(
        CDOTA_CombatLog *const this,
        CDOTABaseAbility *pManaRestoreAbility,
        CDOTA_BaseNPC *pCaster,
        CDOTA_BaseNPC *pTarget,
        float flValue)
{
  int v8; // xmm0_4
  int v9; // eax
  CGlobalVars *v10; // r13
  float m_flCurrentTime; // xmm0_4
  const char *m_pAsString; // rsi
  int v13; // r13d
  const char *v14; // rsi
  int v15; // r15d
  CDOTABaseAbility *v16; // rax
  DOTAAbilityData_t *m_pAbilityData; // rax
  const char *v18; // rsi
  const char *m_pszAbilityName; // rax
  int v20; // eax
  int v21; // edx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rdx
  _BYTE v25[16]; // [rsp+10h] [rbp-120h] BYREF
  int v26; // [rsp+20h] [rbp-110h]
  int v27; // [rsp+28h] [rbp-108h]
  int v28; // [rsp+2Ch] [rbp-104h]
  int v29; // [rsp+34h] [rbp-FCh]
  int v30; // [rsp+3Ch] [rbp-F4h]
  char v31; // [rsp+43h] [rbp-EDh]
  int v32; // [rsp+44h] [rbp-ECh]
  int v33; // [rsp+4Ch] [rbp-E4h]
  float v34; // [rsp+6Ch] [rbp-C4h]

  CMsgDOTACombatLogEntry::CMsgDOTACombatLogEntry(v25);
  v8 = 0;
  v27 = 24;
  if ( g_pGameRules != 0 )
    v8 = *&g_pGameRules[18].m_szQuestName[20];
  v33 = v8;
  v9 = v26 | 0x4001;
  v26 |= 0x4001u;
  v10 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
      {
        m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
        v9 = v26;
      }
    }
    m_flCurrentTime = v10->m_flCurrentTime;
  }
  else
  {
    m_flCurrentTime = 0.0;
  }
  v34 = m_flCurrentTime;
  v26 = v9 | 0x800000;
  if ( pTarget != 0 )
  {
    m_pAsString = "";
    if ( pTarget->m_iszUnitName.m_Value.u.m_Id != 0 )
      m_pAsString = pTarget->m_iszUnitName.m_Value.u.m_pAsString;
    v13 = CDOTA_CombatLog::FindOrAddName(this, m_pAsString);
  }
  else
  {
    v13 = 0;
  }
  if ( pCaster != 0 )
  {
    v14 = "";
    if ( pCaster->m_iszUnitName.m_Value.u.m_Id != 0 )
      v14 = pCaster->m_iszUnitName.m_Value.u.m_pAsString;
    v15 = CDOTA_CombatLog::FindOrAddName(this, v14);
    v16 = pManaRestoreAbility;
    if ( pManaRestoreAbility != 0 )
      goto LABEL_14;
LABEL_31:
    v20 = 0;
    goto LABEL_18;
  }
  v16 = pManaRestoreAbility;
  v15 = 0;
  if ( pManaRestoreAbility == 0 )
    goto LABEL_31;
LABEL_14:
  m_pAbilityData = v16->m_pAbilityData;
  v18 = "<NoAbilityName>";
  if ( m_pAbilityData != 0 )
  {
    m_pszAbilityName = m_pAbilityData->m_pszAbilityName;
    if ( m_pszAbilityName != 0 )
      v18 = m_pszAbilityName;
  }
  v20 = CDOTA_CombatLog::FindOrAddName(this, v18);
LABEL_18:
  v21 = v26;
  if ( v13 != 0 )
  {
    v28 = v13;
    v21 = v26 | 2;
  }
  if ( v15 != 0 )
  {
    v29 = v15;
    v21 |= 8u;
  }
  if ( v20 != 0 )
  {
    v30 = v20;
    v21 |= 0x20u;
  }
  if ( pTarget != 0 )
  {
    BYTE1(v21) |= 2u;
    v31 = pTarget->m_iUnitType & 1;
  }
  BYTE1(v21) |= 0x10u;
  v26 = v21;
  v32 = flValue;
  CDOTA_CombatLog::AddEntry(this, v25);
  CMsgDOTACombatLogEntry::~CMsgDOTACombatLogEntry(v25);
}


// CDOTA_CombatLog::AddHeroLevelUpEvent  (line 1455, @0x000000000248bcb0, libserver.so)  // inlines: DOTAGameRules, GetGameTime, GetUnitName, String, ToCStr, curtime, set_gpm, set_has_gpm, set_has_target_hero_level, set_has_target_name, set_has_timestamp, set_has_timestamp_raw, set_has_type, set_has_xpm, set_target_hero_level, set_target_name, set_timestamp, set_timestamp_raw, set_type, set_xpm
// calls: CMsgDOTACombatLogEntry::CMsgDOTACombatLogEntry, CDOTA_CombatLog::FindOrAddName, CDOTA_PlayerResource::GetXPPerMin, CDOTA_PlayerResource::GetGoldPerMin, CDOTA_CombatLog::AddEntry, CMsgDOTACombatLogEntry::~CMsgDOTACombatLogEntry, _Unwind_Resume
// callers: CDOTA_BaseNPC_Hero::HeroLevelUp
void __fastcall CDOTA_CombatLog::AddHeroLevelUpEvent(CDOTA_CombatLog *const this, CDOTA_BaseNPC_Hero *pHero)
{
  int v4; // xmm0_4
  int v5; // eax
  CGlobalVars *v6; // r12
  float m_flCurrentTime; // xmm0_4
  const char *m_pAsString; // rsi
  int m_Value; // esi
  int v10; // eax
  float XPPerMin; // xmm0_4
  int v12; // esi
  float GoldPerMin; // xmm0_4
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rdx
  _BYTE v15[16]; // [rsp+0h] [rbp-110h] BYREF
  int v16; // [rsp+10h] [rbp-100h]
  int v17; // [rsp+14h] [rbp-FCh]
  int v18; // [rsp+18h] [rbp-F8h]
  int iHeroName; // [rsp+1Ch] [rbp-F4h]
  int v20; // [rsp+3Ch] [rbp-D4h]
  float v21; // [rsp+5Ch] [rbp-B4h]
  int v22; // [rsp+ACh] [rbp-64h]
  int v23; // [rsp+B0h] [rbp-60h]
  int v24; // [rsp+B4h] [rbp-5Ch]

  CMsgDOTACombatLogEntry::CMsgDOTACombatLogEntry(v15);
  v4 = 0;
  v18 = 25;
  if ( g_pGameRules != 0 )
    v4 = *&g_pGameRules[18].m_szQuestName[20];
  v20 = v4;
  v5 = v16 | 0x4001;
  v16 |= 0x4001u;
  v6 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
      {
        m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
        v5 = v16;
      }
    }
    m_flCurrentTime = v6->m_flCurrentTime;
  }
  else
  {
    m_flCurrentTime = 0.0;
  }
  v21 = m_flCurrentTime;
  v16 = v5 | 0x800000;
  if ( pHero != 0 )
  {
    m_pAsString = "";
    if ( pHero->m_iszUnitName.m_Value.u.m_Id != 0 )
      m_pAsString = pHero->m_iszUnitName.m_Value.u.m_pAsString;
    iHeroName = CDOTA_CombatLog::FindOrAddName(this, m_pAsString);
    m_Value = pHero->m_iPlayerID.m_Value;
    v10 = pHero->m_iCurrentLevel.m_Value;
    v16 |= 2u;
    v17 |= 0x800u;
    v22 = v10;
    XPPerMin = CDOTA_PlayerResource::GetXPPerMin(g_pDOTAPlayerResource, m_Value);
    v12 = pHero->m_iPlayerID.m_Value;
    v17 |= 0x1000u;
    v23 = XPPerMin;
    GoldPerMin = CDOTA_PlayerResource::GetGoldPerMin(g_pDOTAPlayerResource, v12);
    v17 |= 0x2000u;
    v24 = GoldPerMin;
    CDOTA_CombatLog::AddEntry(this, v15);
  }
  CMsgDOTACombatLogEntry::~CMsgDOTACombatLogEntry(v15);
}


// CDOTA_CombatLog::AddBottleHealAllyEvent  (line 1477, @0x000000000248be70, libserver.so)  // inlines: DOTAGameRules, GetGameTime, GetUnitName, String, ToCStr, curtime, set_attacker_name, set_has_attacker_name, set_has_target_name, set_has_timestamp, set_has_timestamp_raw, set_has_type, set_target_name, set_timestamp, set_timestamp_raw, set_type
// calls: CMsgDOTACombatLogEntry::CMsgDOTACombatLogEntry, CDOTA_CombatLog::FindOrAddName, CDOTA_CombatLog::AddEntry, CMsgDOTACombatLogEntry::~CMsgDOTACombatLogEntry, _Unwind_Resume
// callers: CDOTA_Item_EmptyBottle::CheckForBottleHealChallengeEvent
void __fastcall CDOTA_CombatLog::AddBottleHealAllyEvent(
        CDOTA_CombatLog *const this,
        CDOTA_BaseNPC *pCaster,
        CDOTA_BaseNPC *pTarget)
{
  int v6; // xmm0_4
  int v7; // eax
  CGlobalVars *v8; // rbx
  float m_flCurrentTime; // xmm0_4
  const char *m_pAsString; // rsi
  int v11; // eax
  const char *v12; // rsi
  int v13; // ebx
  int v14; // eax
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rdx
  _BYTE v16[16]; // [rsp+0h] [rbp-120h] BYREF
  int v17; // [rsp+10h] [rbp-110h]
  int v18; // [rsp+18h] [rbp-108h]
  int v19; // [rsp+1Ch] [rbp-104h]
  int v20; // [rsp+24h] [rbp-FCh]
  int v21; // [rsp+3Ch] [rbp-E4h]
  float v22; // [rsp+5Ch] [rbp-C4h]

  CMsgDOTACombatLogEntry::CMsgDOTACombatLogEntry(v16);
  v6 = 0;
  v18 = 26;
  if ( g_pGameRules != 0 )
    v6 = *&g_pGameRules[18].m_szQuestName[20];
  v21 = v6;
  v7 = v17 | 0x4001;
  v17 |= 0x4001u;
  v8 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
      {
        m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
        v7 = v17;
      }
    }
    m_flCurrentTime = v8->m_flCurrentTime;
  }
  else
  {
    m_flCurrentTime = 0.0;
  }
  v22 = m_flCurrentTime;
  v17 = v7 | 0x800000;
  if ( pCaster != 0 && pTarget != 0 )
  {
    m_pAsString = "";
    if ( pCaster->m_iszUnitName.m_Value.u.m_Id != 0 )
      m_pAsString = pCaster->m_iszUnitName.m_Value.u.m_pAsString;
    v11 = CDOTA_CombatLog::FindOrAddName(this, m_pAsString);
    v12 = "";
    v13 = v11;
    if ( pTarget->m_iszUnitName.m_Value.u.m_Id != 0 )
      v12 = pTarget->m_iszUnitName.m_Value.u.m_pAsString;
    v14 = CDOTA_CombatLog::FindOrAddName(this, v12);
    if ( v13 != 0 )
    {
      v17 |= 8u;
      v20 = v13;
    }
    if ( v14 != 0 )
    {
      v17 |= 2u;
      v19 = v14;
    }
    CDOTA_CombatLog::AddEntry(this, v16);
  }
  CMsgDOTACombatLogEntry::~CMsgDOTACombatLogEntry(v16);
}


// CDOTA_CombatLog::AddEndGameStatsEvent  (line 1504, @0x000000000248c010, libserver.so)  // inlines: DOTAGameRules, GetGameTime, curtime, set_damage_source_name, set_gpm, set_has_damage_source_name, set_has_gpm, set_has_last_hits, set_has_obs_wards_placed, set_has_target_name, set_has_target_source_name, set_has_timestamp, set_has_timestamp_raw, set_has_type, set_has_xpm, set_last_hits, set_obs_wards_placed, set_target_name, set_target_source_name, set_timestamp, set_timestamp_raw, set_type, set_xpm
// calls: CMsgDOTACombatLogEntry::CMsgDOTACombatLogEntry, CDOTA_PlayerResource::IsValidPlayerID, CDOTA_PlayerResource::GetKills, CDOTA_PlayerResource::GetLastHits, CDOTA_PlayerResource::GetXPPerMin, CDOTA_PlayerResource::GetGoldPerMin, CDOTA_PlayerResource::GetObserverWardsPlaced, CDOTA_PlayerResource::GetAssists, CDOTA_CombatLog::AddEntry, CMsgDOTACombatLogEntry::~CMsgDOTACombatLogEntry, _Unwind_Resume
// callers: CDOTA_BaseNPC_Building::Event_Killed
void __fastcall CDOTA_CombatLog::AddEndGameStatsEvent(CDOTA_CombatLog *const this, int nPlayerID)
{
  int v4; // xmm0_4
  int v5; // eax
  CGlobalVars *v6; // r12
  float m_flCurrentTime; // xmm0_4
  float XPPerMin; // xmm0_4
  float GoldPerMin; // xmm0_4
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rdx
  _BYTE v11[16]; // [rsp+0h] [rbp-110h] BYREF
  int v12; // [rsp+10h] [rbp-100h]
  int v13; // [rsp+14h] [rbp-FCh]
  int v14; // [rsp+18h] [rbp-F8h]
  int v15; // [rsp+1Ch] [rbp-F4h]
  int Kills; // [rsp+20h] [rbp-F0h]
  int Assists; // [rsp+28h] [rbp-E8h]
  int v18; // [rsp+3Ch] [rbp-D4h]
  float v19; // [rsp+5Ch] [rbp-B4h]
  int LastHits; // [rsp+68h] [rbp-A8h]
  int ObserverWardsPlaced; // [rsp+74h] [rbp-9Ch]
  int v22; // [rsp+B0h] [rbp-60h]
  int v23; // [rsp+B4h] [rbp-5Ch]

  CMsgDOTACombatLogEntry::CMsgDOTACombatLogEntry(v11);
  v4 = 0;
  v14 = 27;
  if ( g_pGameRules != 0 )
    v4 = *&g_pGameRules[18].m_szQuestName[20];
  v18 = v4;
  v5 = v12 | 0x4001;
  v12 |= 0x4001u;
  v6 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
      {
        m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
        v5 = v12;
      }
    }
    m_flCurrentTime = v6->m_flCurrentTime;
  }
  else
  {
    m_flCurrentTime = 0.0;
  }
  v12 = v5 | 0x800000;
  v19 = m_flCurrentTime;
  if ( CDOTA_PlayerResource::IsValidPlayerID(g_pDOTAPlayerResource, nPlayerID) )
  {
    v15 = nPlayerID;
    v12 |= 2u;
    Kills = CDOTA_PlayerResource::GetKills(g_pDOTAPlayerResource, nPlayerID);
    v12 |= 4u;
    LastHits = CDOTA_PlayerResource::GetLastHits(g_pDOTAPlayerResource, nPlayerID);
    v12 |= 0x4000000u;
    XPPerMin = CDOTA_PlayerResource::GetXPPerMin(g_pDOTAPlayerResource, nPlayerID);
    v13 |= 0x1000u;
    v22 = XPPerMin;
    GoldPerMin = CDOTA_PlayerResource::GetGoldPerMin(g_pDOTAPlayerResource, nPlayerID);
    v13 |= 0x2000u;
    v23 = GoldPerMin;
    ObserverWardsPlaced = CDOTA_PlayerResource::GetObserverWardsPlaced(g_pDOTAPlayerResource, nPlayerID);
    v12 |= 0x20000000u;
    Assists = CDOTA_PlayerResource::GetAssists(g_pDOTAPlayerResource, nPlayerID);
    v12 |= 0x10u;
    CDOTA_CombatLog::AddEntry(this, v11);
  }
  CMsgDOTACombatLogEntry::~CMsgDOTACombatLogEntry(v11);
}


// CDOTA_CombatLog::AddInterruptChannelEvent  (line 1527, @0x000000000248c1f0, libserver.so)  // inlines: DOTAGameRules, GetGameTime, GetUnitName, String, ToCStr, curtime, set_has_target_name, set_has_timestamp, set_has_timestamp_raw, set_has_type, set_target_name, set_timestamp, set_timestamp_raw, set_type
// calls: CMsgDOTACombatLogEntry::CMsgDOTACombatLogEntry, CDOTA_CombatLog::FindOrAddName, CDOTA_CombatLog::AddEntry, CMsgDOTACombatLogEntry::~CMsgDOTACombatLogEntry, _Unwind_Resume
// callers: CDOTABaseAbility::EndChannel
void __fastcall CDOTA_CombatLog::AddInterruptChannelEvent(CDOTA_CombatLog *const this, CDOTA_BaseNPC *pTarget)
{
  int v4; // xmm0_4
  int v5; // eax
  CGlobalVars *v6; // rbx
  float m_flCurrentTime; // xmm0_4
  const char *m_pAsString; // rsi
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rdx
  _BYTE v10[16]; // [rsp+0h] [rbp-110h] BYREF
  int v11; // [rsp+10h] [rbp-100h]
  int v12; // [rsp+18h] [rbp-F8h]
  int v13; // [rsp+1Ch] [rbp-F4h]
  int v14; // [rsp+3Ch] [rbp-D4h]
  float v15; // [rsp+5Ch] [rbp-B4h]

  CMsgDOTACombatLogEntry::CMsgDOTACombatLogEntry(v10);
  v4 = 0;
  v12 = 28;
  if ( g_pGameRules != 0 )
    v4 = *&g_pGameRules[18].m_szQuestName[20];
  v14 = v4;
  v5 = v11 | 0x4001;
  v11 |= 0x4001u;
  v6 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
      {
        m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
        v5 = v11;
      }
    }
    m_flCurrentTime = v6->m_flCurrentTime;
  }
  else
  {
    m_flCurrentTime = 0.0;
  }
  v15 = m_flCurrentTime;
  v11 = v5 | 0x800000;
  if ( pTarget != 0 )
  {
    m_pAsString = "";
    if ( pTarget->m_iszUnitName.m_Value.u.m_Id != 0 )
      m_pAsString = pTarget->m_iszUnitName.m_Value.u.m_pAsString;
    v13 = CDOTA_CombatLog::FindOrAddName(this, m_pAsString);
    v11 |= 2u;
    CDOTA_CombatLog::AddEntry(this, v10);
  }
  CMsgDOTACombatLogEntry::~CMsgDOTACombatLogEntry(v10);
}


// CDOTA_CombatLog::AddAlliedGoldEvent  (line 1546, @0x000000000248c340, libserver.so)  // inlines: DOTAGameRules, GetGameTime, curtime, set_has_target_name, set_has_timestamp, set_has_timestamp_raw, set_has_type, set_has_value, set_target_name, set_timestamp, set_timestamp_raw, set_type, set_value
// calls: CMsgDOTACombatLogEntry::CMsgDOTACombatLogEntry, CDOTA_PlayerResource::IsValidPlayerID, CDOTA_CombatLog::AddEntry, CMsgDOTACombatLogEntry::~CMsgDOTACombatLogEntry, _Unwind_Resume
// callers: CDOTAHeroList::GiveNearbyHeroGoldBonus, CDOTAHeroList::GiveTeamGoldReward, CDOTA_Modifier_BountyHunter_Track::OnDestroy
void __fastcall CDOTA_CombatLog::AddAlliedGoldEvent(CDOTA_CombatLog *const this, int nPlayerID, int nGoldAmount)
{
  int v6; // xmm0_4
  int v7; // eax
  CGlobalVars *v8; // rbx
  float m_flCurrentTime; // xmm0_4
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rdx
  _BYTE v11[16]; // [rsp+0h] [rbp-120h] BYREF
  int v12; // [rsp+10h] [rbp-110h]
  int v13; // [rsp+18h] [rbp-108h]
  int v14; // [rsp+1Ch] [rbp-104h]
  int v15; // [rsp+34h] [rbp-ECh]
  int v16; // [rsp+3Ch] [rbp-E4h]
  float v17; // [rsp+5Ch] [rbp-C4h]

  CMsgDOTACombatLogEntry::CMsgDOTACombatLogEntry(v11);
  v6 = 0;
  v13 = 29;
  if ( g_pGameRules != 0 )
    v6 = *&g_pGameRules[18].m_szQuestName[20];
  v16 = v6;
  v7 = v12 | 0x4001;
  v12 |= 0x4001u;
  v8 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
      {
        m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
        v7 = v12;
      }
    }
    m_flCurrentTime = v8->m_flCurrentTime;
  }
  else
  {
    m_flCurrentTime = 0.0;
  }
  v17 = m_flCurrentTime;
  v12 = v7 | 0x800000;
  if ( CDOTA_PlayerResource::IsValidPlayerID(g_pDOTAPlayerResource, nPlayerID) )
  {
    v14 = nPlayerID;
    v15 = nGoldAmount;
    v12 |= 0x1002u;
    CDOTA_CombatLog::AddEntry(this, v11);
  }
  CMsgDOTACombatLogEntry::~CMsgDOTACombatLogEntry(v11);
}


// CDOTA_CombatLog::AddAegisTakenEvent  (line 1564, @0x000000000248c490, libserver.so)  // inlines: DOTAGameRules, GetGameTime, curtime, set_has_target_name, set_has_timestamp, set_has_timestamp_raw, set_has_type, set_has_value, set_target_name, set_timestamp, set_timestamp_raw, set_type, set_value
// calls: CMsgDOTACombatLogEntry::CMsgDOTACombatLogEntry, CDOTA_PlayerResource::IsValidPlayerID, CDOTA_CombatLog::AddEntry, CMsgDOTACombatLogEntry::~CMsgDOTACombatLogEntry, _Unwind_Resume
// callers: CDOTA_Item_Aegis::OnEquip
void __fastcall CDOTA_CombatLog::AddAegisTakenEvent(CDOTA_CombatLog *const this, int nPlayerID, bool bSnatched)
{
  int v6; // xmm0_4
  int v7; // eax
  CGlobalVars *v8; // rbx
  float m_flCurrentTime; // xmm0_4
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rdx
  _BYTE v11[16]; // [rsp+0h] [rbp-120h] BYREF
  int v12; // [rsp+10h] [rbp-110h]
  int v13; // [rsp+18h] [rbp-108h]
  int v14; // [rsp+1Ch] [rbp-104h]
  _BOOL4 v15; // [rsp+34h] [rbp-ECh]
  int v16; // [rsp+3Ch] [rbp-E4h]
  float v17; // [rsp+5Ch] [rbp-C4h]

  CMsgDOTACombatLogEntry::CMsgDOTACombatLogEntry(v11);
  v6 = 0;
  v13 = 30;
  if ( g_pGameRules != 0 )
    v6 = *&g_pGameRules[18].m_szQuestName[20];
  v16 = v6;
  v7 = v12 | 0x4001;
  v12 |= 0x4001u;
  v8 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
      {
        m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
        v7 = v12;
      }
    }
    m_flCurrentTime = v8->m_flCurrentTime;
  }
  else
  {
    m_flCurrentTime = 0.0;
  }
  v17 = m_flCurrentTime;
  v12 = v7 | 0x800000;
  if ( CDOTA_PlayerResource::IsValidPlayerID(g_pDOTAPlayerResource, nPlayerID) )
  {
    v14 = nPlayerID;
    v15 = bSnatched;
    v12 |= 0x1002u;
    CDOTA_CombatLog::AddEntry(this, v11);
  }
  CMsgDOTACombatLogEntry::~CMsgDOTACombatLogEntry(v11);
}


// CDOTA_CombatLog::AddManaDamageEvent  (line 1582, @0x000000000248c5e0, libserver.so)  // inlines: DOTAGameRules, Get, GetAbilityName, GetEntityIdentity, GetEntryIndex, GetGameTime, GetInstance, GetUnitName, IndexToIdentity, IsHero, IsValid, LookupEntity, String, ToCStr, ToDOTABaseNPC, curtime, operator CBaseEntity*, operator CEntityInstance*, set_attacker_name, set_damage_source_name, set_has_target_name, set_has_timestamp, set_has_timestamp_raw, set_has_type, set_has_value, set_inflictor_name, set_is_target_hero, set_target_name, set_timestamp, set_timestamp_raw, set_type, set_value
// calls: CMsgDOTACombatLogEntry::CMsgDOTACombatLogEntry, CDOTA_CombatLog::FindOrAddName, CDOTABaseAbility::GetCaster, CDOTA_PlayerResource::GetPlayerSelectedHeroHandle, CDOTA_CombatLog::AddEntry, CMsgDOTACombatLogEntry::~CMsgDOTACombatLogEntry, _Unwind_Resume
// callers: CDOTA_Ability_SatyrSoulstealer_ManaBurn::OnSpellStart, CDOTA_Modifier_Bane_FiendsGrip::OnIntervalThink, CDOTA_Modifier_AntiMage_ManaBreak::GetModifierProcAttack_Feedback, CDOTA_Modifier_Lion_ManaDrain::PerformDrain, CDOTA_Modifier_Invoker_EMP::OnDestroy, CDOTA_Modifier_Rattletrap_CogPush::OnDestroy, CDOTA_Ability_Nyx_Assassin_ManaBurn::OnSpellStart, CDOTA_Modifier_KeeperOfTheLight_ManaLeak::OnIntervalThink, CDOTA_Ability_Medusa_MysticSnake::OnProjectileHit, CDOTA_Modifier_Item_Diffusal_Blade::GetModifierProcAttack_Feedback, CDOTA_Modifier_Necronomicon_Warrior_ManaBurn::GetModifierProcAttack_Feedback, CDOTA_Ability_Necronomicon_Archer_ManaBurn::OnSpellStart
// strings: "<NoAbilityName>"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_CombatLog::AddManaDamageEvent(
        CDOTA_CombatLog *const this,
        CDOTABaseAbility *pInflictor,
        CDOTA_BaseNPC *pTarget,
        int nAmount)
{
  int v7; // xmm0_4
  int v8; // eax
  CGlobalVars *v9; // r15
  float m_flCurrentTime; // xmm0_4
  const char *m_pAsString; // rsi
  DOTAAbilityData_t *m_pAbilityData; // rax
  const char *v13; // rsi
  const char *m_pszAbilityName; // rax
  int v15; // r15d
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v17; // r14
  const char *v18; // rsi
  __int64 v19; // rax
  int v20; // eax
  CEntityIdentity *v21; // rdx
  CEntityIdentity *v22; // rdx
  int v23; // eax
  int v24; // edx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rdx
  CEntityInstance *m_pInstance; // rax
  const char *v27; // rsi
  int iAttackerName; // [rsp+8h] [rbp-138h]
  int iTargetName; // [rsp+Ch] [rbp-134h]
  int v31; // [rsp+10h] [rbp-130h]
  _BYTE v32[16]; // [rsp+20h] [rbp-120h] BYREF
  int v33; // [rsp+30h] [rbp-110h]
  int v34; // [rsp+38h] [rbp-108h]
  int v35; // [rsp+3Ch] [rbp-104h]
  int v36; // [rsp+44h] [rbp-FCh]
  int v37; // [rsp+48h] [rbp-F8h]
  int v38; // [rsp+4Ch] [rbp-F4h]
  char v39; // [rsp+53h] [rbp-EDh]
  int v40; // [rsp+54h] [rbp-ECh]
  int v41; // [rsp+5Ch] [rbp-E4h]
  float v42; // [rsp+7Ch] [rbp-C4h]

  CMsgDOTACombatLogEntry::CMsgDOTACombatLogEntry(v32);
  v7 = 0;
  v34 = 31;
  if ( g_pGameRules != 0 )
    v7 = *&g_pGameRules[18].m_szQuestName[20];
  v41 = v7;
  v8 = v33 | 0x4001;
  v33 |= 0x4001u;
  v9 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
      {
        m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
        v8 = v33;
      }
    }
    m_flCurrentTime = v9->m_flCurrentTime;
  }
  else
  {
    m_flCurrentTime = 0.0;
  }
  v42 = m_flCurrentTime;
  v33 = v8 | 0x800000;
  if ( pTarget != 0 )
  {
    m_pAsString = "";
    if ( pTarget->m_iszUnitName.m_Value.u.m_Id != 0 )
      m_pAsString = pTarget->m_iszUnitName.m_Value.u.m_pAsString;
    iTargetName = CDOTA_CombatLog::FindOrAddName(this, m_pAsString);
    if ( pInflictor != 0 )
      goto LABEL_10;
LABEL_37:
    iAttackerName = 0;
    v15 = 0;
    v23 = 0;
    goto LABEL_22;
  }
  iTargetName = 0;
  if ( pInflictor == 0 )
    goto LABEL_37;
LABEL_10:
  m_pAbilityData = pInflictor->m_pAbilityData;
  v13 = "<NoAbilityName>";
  if ( m_pAbilityData != 0 )
  {
    m_pszAbilityName = m_pAbilityData->m_pszAbilityName;
    if ( m_pszAbilityName != 0 )
      v13 = m_pszAbilityName;
  }
  v15 = CDOTA_CombatLog::FindOrAddName(this, v13);
  Caster = CDOTABaseAbility::GetCaster(pInflictor);
  v17 = Caster;
  if ( Caster != 0 )
  {
    v18 = "";
    if ( Caster->m_iszUnitName.m_Value.u.m_Id != 0 )
      v18 = Caster->m_iszUnitName.m_Value.u.m_pAsString;
    iAttackerName = CDOTA_CombatLog::FindOrAddName(this, v18);
    v19 = (*(v17->_vptr_IHandleEntity + 413))(v17);
    if ( v19 != 0
      && (v20 = (*(*v19 + 3144LL))(v19),
          CDOTA_PlayerResource::GetPlayerSelectedHeroHandle(g_pDOTAPlayerResource, v20),
          (v31 + 2) > 1)
      && (v21 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v31 >> 9) & 0x3F]) != 0
      && (v22 = &v21[v31 & 0x1FF]) != 0
      && v31 == v22->m_EHandle.m_Index
      && (m_pInstance = v22->m_pInstance, v22->m_pInstance != 0)
      && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 )
    {
      v27 = "";
      if ( m_pInstance[70].m_iszPrivateVScripts.u.m_Id != 0 )
        v27 = m_pInstance[70].m_iszPrivateVScripts.u.m_pAsString;
      v23 = CDOTA_CombatLog::FindOrAddName(this, v27);
    }
    else
    {
      v23 = 0;
    }
  }
  else
  {
    iAttackerName = 0;
    v23 = 0;
  }
LABEL_22:
  v24 = v33;
  if ( iTargetName != 0 )
  {
    v24 = v33 | 2;
    v35 = iTargetName;
  }
  if ( iAttackerName != 0 )
  {
    v24 |= 8u;
    v36 = iAttackerName;
  }
  if ( v15 != 0 )
  {
    v38 = v15;
    v24 |= 0x20u;
  }
  if ( v23 != 0 )
  {
    v37 = v23;
    v24 |= 0x10u;
  }
  if ( pTarget != 0 )
  {
    BYTE1(v24) |= 2u;
    v39 = pTarget->m_iUnitType & 1;
  }
  BYTE1(v24) |= 0x10u;
  v33 = v24;
  v40 = nAmount;
  CDOTA_CombatLog::AddEntry(this, v32);
  CMsgDOTACombatLogEntry::~CMsgDOTACombatLogEntry(v32);
}


// CDOTA_CombatLog::AddPhysicalDamagePreventedEvent  (line 1642, @0x000000000248c950, libserver.so)  // inlines: DOTAGameRules, Get, GetEntityIdentity, GetEntryIndex, GetGameTime, GetInstance, GetUnitName, IndexToIdentity, IsValid, LookupEntity, String, ToCStr, ToDOTABaseNPC, curtime, operator CBaseEntity*, operator CEntityInstance*, set_damage_source_name, set_has_damage_source_name, set_has_timestamp, set_has_timestamp_raw, set_has_type, set_has_value, set_timestamp, set_timestamp_raw, set_type, set_value
// calls: CMsgDOTACombatLogEntry::CMsgDOTACombatLogEntry, CDOTA_PlayerResource::GetPlayerSelectedHeroHandle, CDOTA_CombatLog::AddEntry, CMsgDOTACombatLogEntry::~CMsgDOTACombatLogEntry, _Unwind_Resume, CDOTA_CombatLog::FindOrAddName
// callers: CDOTA_BaseNPC_Hero::OnTakeDamage_Alive, CDOTA_Modifier_Abaddon_AphoticShield::GetModifierTotal_ConstantBlock
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_CombatLog::AddPhysicalDamagePreventedEvent(
        CDOTA_CombatLog *const this,
        int nPreventingPlayerID,
        int nDamagePrevented)
{
  int v6; // xmm0_4
  int v7; // eax
  CGlobalVars *v8; // rbx
  float m_flCurrentTime; // xmm0_4
  CEntityIdentity *v10; // rdx
  CEntityIdentity *v11; // rdx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rdx
  CEntityInstance *m_pInstance; // rax
  const char *m_pAsString; // rsi
  int v15; // eax
  int v16; // [rsp+0h] [rbp-130h]
  _BYTE v17[16]; // [rsp+10h] [rbp-120h] BYREF
  int v18; // [rsp+20h] [rbp-110h]
  int v19; // [rsp+28h] [rbp-108h]
  int v20; // [rsp+38h] [rbp-F8h]
  int v21; // [rsp+44h] [rbp-ECh]
  int v22; // [rsp+4Ch] [rbp-E4h]
  float v23; // [rsp+6Ch] [rbp-C4h]

  CMsgDOTACombatLogEntry::CMsgDOTACombatLogEntry(v17);
  v6 = 0;
  v19 = 32;
  if ( g_pGameRules != 0 )
    v6 = *&g_pGameRules[18].m_szQuestName[20];
  v22 = v6;
  v7 = v18 | 0x4001;
  v18 |= 0x4001u;
  v8 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
      {
        m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
        v7 = v18;
      }
    }
    m_flCurrentTime = v8->m_flCurrentTime;
  }
  else
  {
    m_flCurrentTime = 0.0;
  }
  v23 = m_flCurrentTime;
  v18 = v7 | 0x800000;
  CDOTA_PlayerResource::GetPlayerSelectedHeroHandle(g_pDOTAPlayerResource, nPreventingPlayerID);
  if ( (v16 + 2) > 1 )
  {
    v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v16 >> 9) & 0x3F];
    if ( v10 != 0 )
    {
      v11 = &v10[v16 & 0x1FF];
      if ( v11 != 0 && v16 == v11->m_EHandle.m_Index )
      {
        m_pInstance = v11->m_pInstance;
        if ( v11->m_pInstance != 0 && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 )
        {
          m_pAsString = "";
          if ( m_pInstance[70].m_iszPrivateVScripts.u.m_Id != 0 )
            m_pAsString = m_pInstance[70].m_iszPrivateVScripts.u.m_pAsString;
          v15 = CDOTA_CombatLog::FindOrAddName(this, m_pAsString);
          if ( v15 != 0 )
          {
            v18 |= 0x10u;
            v20 = v15;
          }
        }
      }
    }
  }
  if ( nDamagePrevented > 0 )
  {
    v21 = nDamagePrevented;
    v18 |= 0x1000u;
    CDOTA_CombatLog::AddEntry(this, v17);
  }
  CMsgDOTACombatLogEntry::~CMsgDOTACombatLogEntry(v17);
}


// CDOTA_CombatLog::AddUnitSummonedEvent  (line 1670, @0x000000000248cb40, libserver.so)  // inlines: DOTAGameRules, GetAbilityName, GetGameTime, GetUnitName, String, ToCStr, curtime, set_attacker_name, set_has_attacker_name, set_has_timestamp, set_has_timestamp_raw, set_has_type, set_has_value, set_inflictor_name, set_target_name, set_timestamp, set_timestamp_raw, set_type, set_value
// calls: CMsgDOTACombatLogEntry::CMsgDOTACombatLogEntry, CDOTA_CombatLog::FindOrAddName, CDOTA_CombatLog::AddEntry, CMsgDOTACombatLogEntry::~CMsgDOTACombatLogEntry, _Unwind_Resume
// callers: CDOTA_Modifier_Furion_WrathOfNature_Spawn::OnDestroy, CDOTA_Ability_Furion_ForceOfNature::OnSpellStart
// strings: "<NoAbilityName>"
void __fastcall CDOTA_CombatLog::AddUnitSummonedEvent(
        CDOTA_CombatLog *const this,
        CDOTA_BaseNPC *pSummoner,
        CDOTABaseAbility *pSummoningAbility,
        const char *pszSummonedClassName,
        int nCount)
{
  int v8; // xmm0_4
  int v9; // eax
  CGlobalVars *v10; // rbx
  float m_flCurrentTime; // xmm0_4
  const char *m_pAsString; // rsi
  int v13; // ebx
  int v14; // r14d
  DOTAAbilityData_t *m_pAbilityData; // rax
  const char *v16; // rsi
  const char *m_pszAbilityName; // rax
  int v18; // eax
  int v19; // edx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rdx
  _BYTE v23[16]; // [rsp+10h] [rbp-120h] BYREF
  int v24; // [rsp+20h] [rbp-110h]
  int v25; // [rsp+28h] [rbp-108h]
  int v26; // [rsp+2Ch] [rbp-104h]
  int v27; // [rsp+34h] [rbp-FCh]
  int v28; // [rsp+3Ch] [rbp-F4h]
  int v29; // [rsp+44h] [rbp-ECh]
  int v30; // [rsp+4Ch] [rbp-E4h]
  float v31; // [rsp+6Ch] [rbp-C4h]

  CMsgDOTACombatLogEntry::CMsgDOTACombatLogEntry(v23);
  v8 = 0;
  v25 = 33;
  if ( g_pGameRules != 0 )
    v8 = *&g_pGameRules[18].m_szQuestName[20];
  v30 = v8;
  v9 = v24 | 0x4001;
  v24 |= 0x4001u;
  v10 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
      {
        m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
        v9 = v24;
      }
    }
    m_flCurrentTime = v10->m_flCurrentTime;
  }
  else
  {
    m_flCurrentTime = 0.0;
  }
  v31 = m_flCurrentTime;
  v24 = v9 | 0x800000;
  if ( pSummoner != 0 )
  {
    m_pAsString = "";
    if ( pSummoner->m_iszUnitName.m_Value.u.m_Id != 0 )
      m_pAsString = pSummoner->m_iszUnitName.m_Value.u.m_pAsString;
    v13 = CDOTA_CombatLog::FindOrAddName(this, m_pAsString);
  }
  else
  {
    v13 = 0;
  }
  if ( pszSummonedClassName != 0 )
  {
    v14 = CDOTA_CombatLog::FindOrAddName(this, pszSummonedClassName);
    if ( pSummoningAbility != 0 )
      goto LABEL_12;
LABEL_27:
    v18 = 0;
    goto LABEL_16;
  }
  v14 = 0;
  if ( pSummoningAbility == 0 )
    goto LABEL_27;
LABEL_12:
  m_pAbilityData = pSummoningAbility->m_pAbilityData;
  v16 = "<NoAbilityName>";
  if ( m_pAbilityData != 0 )
  {
    m_pszAbilityName = m_pAbilityData->m_pszAbilityName;
    if ( m_pszAbilityName != 0 )
      v16 = m_pszAbilityName;
  }
  v18 = CDOTA_CombatLog::FindOrAddName(this, v16);
LABEL_16:
  v19 = v24;
  if ( v13 != 0 )
  {
    v27 = v13;
    v19 = v24 | 8;
  }
  if ( v14 != 0 )
  {
    v26 = v14;
    v19 |= 2u;
  }
  if ( v18 != 0 )
  {
    v28 = v18;
    v19 |= 0x20u;
  }
  BYTE1(v19) |= 0x10u;
  v24 = v19;
  v29 = nCount;
  CDOTA_CombatLog::AddEntry(this, v23);
  CMsgDOTACombatLogEntry::~CMsgDOTACombatLogEntry(v23);
}


// CDOTA_CombatLog::AddAttackEvadeEvent  (line 1701, @0x000000000248cd50, libserver.so)  // inlines: DOTAGameRules, GetGameTime, GetUnitName, String, ToCStr, curtime, set_has_spell_evaded, set_has_target_name, set_has_timestamp, set_has_timestamp_raw, set_has_type, set_spell_evaded, set_target_name, set_timestamp, set_timestamp_raw, set_type
// calls: CMsgDOTACombatLogEntry::CMsgDOTACombatLogEntry, CDOTA_CombatLog::FindOrAddName, CDOTA_CombatLog::AddEntry, CMsgDOTACombatLogEntry::~CMsgDOTACombatLogEntry, _Unwind_Resume
// callers: CDOTA_ProjectileManager::ProjectileDodge, CDOTA_ProjectileManager::FinishTrackingProjectile, DamageImpact
void __fastcall CDOTA_CombatLog::AddAttackEvadeEvent(
        CDOTA_CombatLog *const this,
        CDOTA_BaseNPC *pEvadingUnit,
        bool bSpellEvade)
{
  int v6; // xmm0_4
  int v7; // eax
  CGlobalVars *v8; // rbx
  float m_flCurrentTime; // xmm0_4
  const char *m_pAsString; // rsi
  int v11; // eax
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rdx
  _BYTE v13[16]; // [rsp+0h] [rbp-120h] BYREF
  int v14; // [rsp+10h] [rbp-110h]
  int v15; // [rsp+14h] [rbp-10Ch]
  int v16; // [rsp+18h] [rbp-108h]
  int v17; // [rsp+1Ch] [rbp-104h]
  int v18; // [rsp+3Ch] [rbp-E4h]
  float v19; // [rsp+5Ch] [rbp-C4h]
  bool v20; // [rsp+D5h] [rbp-4Bh]

  CMsgDOTACombatLogEntry::CMsgDOTACombatLogEntry(v13);
  v6 = 0;
  v16 = 34;
  if ( g_pGameRules != 0 )
    v6 = *&g_pGameRules[18].m_szQuestName[20];
  v18 = v6;
  v7 = v14 | 0x4001;
  v14 |= 0x4001u;
  v8 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
      {
        m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
        v7 = v14;
      }
    }
    m_flCurrentTime = v8->m_flCurrentTime;
  }
  else
  {
    m_flCurrentTime = 0.0;
  }
  v19 = m_flCurrentTime;
  v14 = v7 | 0x800000;
  if ( pEvadingUnit != 0 )
  {
    m_pAsString = "";
    if ( pEvadingUnit->m_iszUnitName.m_Value.u.m_Id != 0 )
      m_pAsString = pEvadingUnit->m_iszUnitName.m_Value.u.m_pAsString;
    v11 = CDOTA_CombatLog::FindOrAddName(this, m_pAsString);
    if ( v11 != 0 )
    {
      v14 |= 2u;
      v17 = v11;
    }
  }
  v15 |= 0x2000000u;
  v20 = bSpellEvade;
  CDOTA_CombatLog::AddEntry(this, v13);
  CMsgDOTACombatLogEntry::~CMsgDOTACombatLogEntry(v13);
}


// CDOTA_CombatLog::AddTreeCutDownEvent  (line 1720, @0x000000000248ceb0, libserver.so)  // inlines: DOTAGameRules, GetGameTime, curtime, set_has_target_name, set_has_timestamp, set_has_timestamp_raw, set_has_type, set_has_value, set_target_name, set_timestamp, set_timestamp_raw, set_type, set_value
// calls: CMsgDOTACombatLogEntry::CMsgDOTACombatLogEntry, CDOTA_PlayerResource::IsValidPlayerID, CDOTA_CombatLog::AddEntry, CMsgDOTACombatLogEntry::~CMsgDOTACombatLogEntry, _Unwind_Resume
// callers: CGridNav::DestroyTreesAroundPoint, CDOTA_Modifier_Shredder_TimberChain::UpdateHorizontalMotion, CDOTA_Item_Battlefury::OnSpellStart, CDOTA_Item_Iron_Talon::OnSpellStart, CDOTA_Item_QuellingBlade::OnSpellStart, UseTangoOnTarget
void __fastcall CDOTA_CombatLog::AddTreeCutDownEvent(CDOTA_CombatLog *const this, int nPlayerID, int nCount)
{
  int v6; // xmm0_4
  int v7; // eax
  CGlobalVars *v8; // rbx
  float m_flCurrentTime; // xmm0_4
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rdx
  _BYTE v11[16]; // [rsp+0h] [rbp-120h] BYREF
  int v12; // [rsp+10h] [rbp-110h]
  int v13; // [rsp+18h] [rbp-108h]
  int v14; // [rsp+1Ch] [rbp-104h]
  int v15; // [rsp+34h] [rbp-ECh]
  int v16; // [rsp+3Ch] [rbp-E4h]
  float v17; // [rsp+5Ch] [rbp-C4h]

  CMsgDOTACombatLogEntry::CMsgDOTACombatLogEntry(v11);
  v6 = 0;
  v13 = 35;
  if ( g_pGameRules != 0 )
    v6 = *&g_pGameRules[18].m_szQuestName[20];
  v16 = v6;
  v7 = v12 | 0x4001;
  v12 |= 0x4001u;
  v8 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
      {
        m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
        v7 = v12;
      }
    }
    m_flCurrentTime = v8->m_flCurrentTime;
  }
  else
  {
    m_flCurrentTime = 0.0;
  }
  v17 = m_flCurrentTime;
  v12 = v7 | 0x800000;
  if ( CDOTA_PlayerResource::IsValidPlayerID(g_pDOTAPlayerResource, nPlayerID) )
  {
    v14 = nPlayerID;
    v15 = nCount;
    v12 |= 0x1002u;
    CDOTA_CombatLog::AddEntry(this, v11);
  }
  CMsgDOTACombatLogEntry::~CMsgDOTACombatLogEntry(v11);
}


// CDOTA_CombatLog::AddSuccessfulScanEvent  (line 1738, @0x000000000248d000, libserver.so)  // inlines: DOTAGameRules, GetGameTime, curtime, set_has_target_name, set_has_timestamp, set_has_timestamp_raw, set_has_type, set_target_name, set_timestamp, set_timestamp_raw, set_type
// calls: CMsgDOTACombatLogEntry::CMsgDOTACombatLogEntry, CDOTA_PlayerResource::IsValidPlayerID, CDOTA_CombatLog::AddEntry, CMsgDOTACombatLogEntry::~CMsgDOTACombatLogEntry, _Unwind_Resume
// callers: CDOTA_Modifier_Radar_Thinker::OnIntervalThink
void __fastcall CDOTA_CombatLog::AddSuccessfulScanEvent(CDOTA_CombatLog *const this, int nPlayerID)
{
  int v4; // xmm0_4
  int v5; // eax
  CGlobalVars *v6; // rbx
  float m_flCurrentTime; // xmm0_4
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rdx
  _BYTE v9[16]; // [rsp+0h] [rbp-110h] BYREF
  int v10; // [rsp+10h] [rbp-100h]
  int v11; // [rsp+18h] [rbp-F8h]
  int v12; // [rsp+1Ch] [rbp-F4h]
  int v13; // [rsp+3Ch] [rbp-D4h]
  float v14; // [rsp+5Ch] [rbp-B4h]

  CMsgDOTACombatLogEntry::CMsgDOTACombatLogEntry(v9);
  v4 = 0;
  v11 = 36;
  if ( g_pGameRules != 0 )
    v4 = *&g_pGameRules[18].m_szQuestName[20];
  v13 = v4;
  v5 = v10 | 0x4001;
  v10 |= 0x4001u;
  v6 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
      {
        m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
        v5 = v10;
      }
    }
    m_flCurrentTime = v6->m_flCurrentTime;
  }
  else
  {
    m_flCurrentTime = 0.0;
  }
  v14 = m_flCurrentTime;
  v10 = v5 | 0x800000;
  if ( CDOTA_PlayerResource::IsValidPlayerID(g_pDOTAPlayerResource, nPlayerID) )
  {
    v12 = nPlayerID;
    v10 |= 2u;
    CDOTA_CombatLog::AddEntry(this, v9);
  }
  CMsgDOTACombatLogEntry::~CMsgDOTACombatLogEntry(v9);
}


// CDOTA_CombatLog::AddEndKillstreakEvent  (line 1755, @0x000000000248d130, libserver.so)  // inlines: Add, CopyArray, DOTAGameRules, GetGameTime, MoveArray, Reserve, add_assist_players, curtime, memcpy, operator(), set_has_timestamp, set_has_timestamp_raw, set_has_type, set_has_value, set_timestamp, set_timestamp_raw, set_type, set_value
// calls: CMsgDOTACombatLogEntry::CMsgDOTACombatLogEntry, operator new [], memcpy, operator delete [], CDOTA_CombatLog::AddEntry, CMsgDOTACombatLogEntry::~CMsgDOTACombatLogEntry, _Unwind_Resume
// callers: CDOTA_BaseNPC_Hero::Event_Killed
void __fastcall CDOTA_CombatLog::AddEndKillstreakEvent(
        CDOTA_CombatLog *const this,
        CUtlVector<int,CUtlMemory<int,int> > *pAttackerIDs,
        int nKillstreak)
{
  int v4; // xmm0_4
  int v5; // eax
  CGlobalVars *v6; // rbx
  float m_flCurrentTime; // xmm0_4
  unsigned __int64 v8; // rbx
  __int64 v9; // r14
  void *v10; // rax
  __int64 v11; // rdx
  int v12; // r12d
  int v13; // edx
  void *v14; // r15
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rdx
  _BYTE v18[16]; // [rsp+20h] [rbp-120h] BYREF
  int v19; // [rsp+30h] [rbp-110h]
  int v20; // [rsp+38h] [rbp-108h]
  int v21; // [rsp+54h] [rbp-ECh]
  int v22; // [rsp+5Ch] [rbp-E4h]
  float v23; // [rsp+7Ch] [rbp-C4h]
  void *src; // [rsp+B8h] [rbp-88h]
  int v25; // [rsp+C0h] [rbp-80h]
  int v26; // [rsp+C4h] [rbp-7Ch]

  CMsgDOTACombatLogEntry::CMsgDOTACombatLogEntry(v18);
  v4 = 0;
  v20 = 37;
  if ( g_pGameRules != 0 )
    v4 = *&g_pGameRules[18].m_szQuestName[20];
  v22 = v4;
  v5 = v19 | 0x4001;
  v19 |= 0x4001u;
  v6 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
      {
        m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
        v5 = v19;
      }
    }
    m_flCurrentTime = v6->m_flCurrentTime;
  }
  else
  {
    m_flCurrentTime = 0.0;
  }
  v23 = m_flCurrentTime;
  v19 = v5 | 0x800000;
  if ( pAttackerIDs != 0 && pAttackerIDs->m_Size > 0 )
  {
    v8 = 0;
    v9 = 4LL * (pAttackerIDs->m_Size - 1) + 4;
    do
    {
      v11 = v25;
      v12 = pAttackerIDs->m_Memory.m_pMemory[v8 / 4];
      if ( v25 == v26 )
      {
        v13 = 2 * v25;
        v14 = src;
        if ( v25 + 1 >= 2 * v25 )
          v13 = v25 + 1;
        if ( v13 < 4 )
          v13 = 4;
        v26 = v13;
        v10 = operator new[](4LL * v13);
        src = v10;
        v11 = v25;
        if ( v14 != 0 )
        {
          memcpy(v10, v14, 4LL * v25);
          operator delete[](v14);
          v10 = src;
          v11 = v25;
        }
      }
      else
      {
        v10 = src;
      }
      v8 += 4LL;
      v25 = v11 + 1;
      *(v10 + v11) = v12;
    }
    while ( v8 != v9 );
    v19 |= 0x1000u;
    v21 = nKillstreak;
    CDOTA_CombatLog::AddEntry(this, v18);
    CMsgDOTACombatLogEntry::~CMsgDOTACombatLogEntry(v18);
  }
  else
  {
    CMsgDOTACombatLogEntry::~CMsgDOTACombatLogEntry(v18);
  }
}


// CDOTA_CombatLog::FindName  (line 1781, @0x000000000246d6e0, libserver.so)  // inlines: GetStringTable
// globals: DOTA_CombatLog_Record::sm_pStringTableCombatLogNames
int __fastcall CDOTA_CombatLog::FindName(CDOTA_CombatLog *const this, const char *pName)
{
  int v2; // eax
  int v3; // edx

  if ( DOTA_CombatLog_Record::sm_pStringTableCombatLogNames == 0 )
    return -1;
  v2 = (*(DOTA_CombatLog_Record::sm_pStringTableCombatLogNames->_vptr_INetworkStringTable + 12))(
         DOTA_CombatLog_Record::sm_pStringTableCombatLogNames,
         pName);
  v3 = -1;
  if ( v2 != 0xFFFF )
    return v2;
  return v3;
}


// CDOTA_CombatLog::FindOrAddName  (line 1799, @0x000000000246d720, libserver.so)  // inlines: FindName, GetStringTable
// callers: ICLSearchFields::ParseQueryStringID, CDOTA_CombatLog::AddLocationEvent, CDOTA_CombatLog::AddRevealInvisibleEvent, CDOTA_CombatLog::AddHeroSavedEvent, CDOTA_CombatLog::AddManaRestoredEvent, CDOTA_CombatLog::AddHeroLevelUpEvent, CDOTA_CombatLog::AddBottleHealAllyEvent, CDOTA_CombatLog::AddInterruptChannelEvent, CDOTA_CombatLog::AddManaDamageEvent, CDOTA_CombatLog::AddPhysicalDamagePreventedEvent, CDOTA_CombatLog::AddUnitSummonedEvent, CDOTA_CombatLog::AddAttackEvadeEvent (21 total)
// globals: DOTA_CombatLog_Record::sm_pStringTableCombatLogNames
int __fastcall CDOTA_CombatLog::FindOrAddName(CDOTA_CombatLog *const this, const char *pName)
{
  int result; // eax
  int v4; // edx

  if ( DOTA_CombatLog_Record::sm_pStringTableCombatLogNames == 0 )
    return -1;
  result = (*(DOTA_CombatLog_Record::sm_pStringTableCombatLogNames->_vptr_INetworkStringTable + 12))(DOTA_CombatLog_Record::sm_pStringTableCombatLogNames);
  if ( result == 0xFFFF || result == -1 )
  {
    v4 = (*(DOTA_CombatLog_Record::sm_pStringTableCombatLogNames->_vptr_INetworkStringTable + 8))(
           DOTA_CombatLog_Record::sm_pStringTableCombatLogNames,
           1,
           pName,
           0xFFFFFFFFLL,
           0);
    result = -1;
    if ( v4 != 0xFFFF )
      return v4;
  }
  return result;
}


// CDOTA_CombatLog::GetName  (line 1819, @0x000000000246d7a0, libserver.so)  // inlines: GetStringTable
// globals: DOTA_CombatLog_Record::sm_pStringTableCombatLogNames
const char *__fastcall CDOTA_CombatLog::GetName(CDOTA_CombatLog *const this, int iNameIndex)
{
  if ( DOTA_CombatLog_Record::sm_pStringTableCombatLogNames != 0 )
    return (*(DOTA_CombatLog_Record::sm_pStringTableCombatLogNames->_vptr_INetworkStringTable + 9))(
             DOTA_CombatLog_Record::sm_pStringTableCombatLogNames,
             iNameIndex,
             0);
  else
    return "";
}


// CDOTA_CombatLog::GetHeroForName  (line 1833, @0x000000000246d7d0, libserver.so)  // inlines: CEntityHandle, CHandle, FindName, GetStringTable
// calls: CDOTA_PlayerResource::GetSelectedHeroName, CDOTA_PlayerResource::NumTeamPlayers, CDOTA_PlayerResource::GetPlayerSelectedHeroHandle
// callers: CDOTA_CombatLog::SendKillCamInformation, CAnnouncerSharedThinker::Think
// globals: DOTA_CombatLog_Record::sm_pStringTableCombatLogNames
_DWORD *__fastcall CDOTA_CombatLog::GetHeroForName(_DWORD *a1, CDOTA_CombatLog *const this, int iNameIndex)
{
  const CDOTA_PlayerResource *v4; // rdi
  int i; // ebx
  int v7; // r12d
  const char *SelectedHeroName; // rax
  int v9; // eax

  v4 = g_pDOTAPlayerResource;
  if ( g_pDOTAPlayerResource != 0 )
  {
    for ( i = 0; i < CDOTA_PlayerResource::NumTeamPlayers(v4); ++i )
    {
      v7 = -1;
      SelectedHeroName = CDOTA_PlayerResource::GetSelectedHeroName(g_pDOTAPlayerResource, i);
      if ( DOTA_CombatLog_Record::sm_pStringTableCombatLogNames != 0 )
      {
        v9 = (*(DOTA_CombatLog_Record::sm_pStringTableCombatLogNames->_vptr_INetworkStringTable + 12))(
               DOTA_CombatLog_Record::sm_pStringTableCombatLogNames,
               SelectedHeroName);
        if ( v9 != 0xFFFF )
          v7 = v9;
      }
      if ( iNameIndex == v7 )
      {
        CDOTA_PlayerResource::GetPlayerSelectedHeroHandle(g_pDOTAPlayerResource, i);
        return a1;
      }
      v4 = g_pDOTAPlayerResource;
    }
  }
  *a1 = -1;
  return a1;
}


// CDOTA_CombatLog::GetPlayerIDForName  (line 1851, @0x000000000246d870, libserver.so)  // inlines: FindName, GetStringTable
// calls: CDOTA_PlayerResource::GetSelectedHeroName
// callers: CDOTA_CombatLog::SendDeathLogToPlayer
// globals: DOTA_CombatLog_Record::sm_pStringTableCombatLogNames
int __fastcall CDOTA_CombatLog::GetPlayerIDForName(CDOTA_CombatLog *const this, const char *pName)
{
  int v2; // eax
  int v3; // r13d
  int v4; // ebx
  const char *SelectedHeroName; // rax
  int v6; // eax

  if ( g_pDOTAPlayerResource == 0 )
    return -1;
  if ( DOTA_CombatLog_Record::sm_pStringTableCombatLogNames == 0 )
    return -1;
  v2 = (*(DOTA_CombatLog_Record::sm_pStringTableCombatLogNames->_vptr_INetworkStringTable + 12))(
         DOTA_CombatLog_Record::sm_pStringTableCombatLogNames,
         pName);
  v3 = v2;
  if ( v2 == 0xFFFF || v2 == -1 )
    return -1;
  v4 = 0;
  while ( 1 )
  {
    SelectedHeroName = CDOTA_PlayerResource::GetSelectedHeroName(g_pDOTAPlayerResource, v4);
    if ( DOTA_CombatLog_Record::sm_pStringTableCombatLogNames != 0 )
    {
      v6 = (*(DOTA_CombatLog_Record::sm_pStringTableCombatLogNames->_vptr_INetworkStringTable + 12))(
             DOTA_CombatLog_Record::sm_pStringTableCombatLogNames,
             SelectedHeroName);
      if ( v6 != 0xFFFF && v3 == v6 )
        break;
    }
    if ( ++v4 == 24 )
      return -1;
  }
  return v4;
}


// CDOTA_CombatLog::SendDeathLogToPlayer  (line 1874, @0x00000000024836c0, libserver.so)  // inlines: CDOTAUserMsg_CombatLogData_t, CNetMessagePB, CSingleUserRecipientFilter, CUserMessagePB, FindGameEvent<CDOTAUserMsg_CombatLogData_t>, FindOrCreateGameEvent<CDOTAUserMsg_CombatLogData_t>, GetName, GetStringTable, PostEvent<CDOTAUserMsg_CombatLogData_t>, SendUserMessage<CDOTAUserMsg_CombatLogData_t>, ToDOTAPlayer, ~CDOTAUserMsg_CombatLogData_t, ~CNetMessagePB, ~CSingleUserRecipientFilter, ~CUserMessagePB
// calls: CRecipientFilter::CRecipientFilter, CRecipientFilter::AddRecipient, CRecipientFilter::MakeReliable, CMsgDOTACombatLogEntry::CMsgDOTACombatLogEntry, CDOTA_CombatLog::GetEntry, CDOTA_CombatLog::GetPlayerIDForName, CMsgDOTACombatLogEntry::~CMsgDOTACombatLogEntry, CRecipientFilter::~CRecipientFilter, _Unwind_Resume, __stack_chk_fail
// callers: CMD_CombatLog_SendDeath
// globals: DOTA_CombatLog_Record::sm_pStringTableCombatLogNames, IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_CombatLogData_t>(bool)::s_hEvent
void __fastcall CDOTA_CombatLog::SendDeathLogToPlayer(CDOTA_CombatLog *const this, CBasePlayer *pPlayer)
{
  int v4; // ebx
  __int64 v5; // r14
  const char *v6; // rsi
  __int64 v7; // rbx
  const char *v8; // rsi
  int PlayerIDForName; // r14d
  IGameEventSystem *v10; // r14
  __int64 v11; // [rsp+10h] [rbp-280h]
  void (__fastcall *v12)(IGameEventSystem *, _QWORD, _QWORD, CSingleUserRecipientFilter *, __int64, _QWORD *, __int64); // [rsp+18h] [rbp-278h]
  float fDeathTimestamp; // [rsp+28h] [rbp-268h]
  int fEarliestTimestamp; // [rsp+2Ch] [rbp-264h]
  _QWORD v15[3]; // [rsp+30h] [rbp-260h] BYREF
  unsigned int v16; // [rsp+4Ch] [rbp-244h]
  float v17; // [rsp+6Ch] [rbp-224h]
  CSingleUserRecipientFilter filter; // [rsp+120h] [rbp-170h] BYREF
  unsigned __int64 v19; // [rsp+258h] [rbp-38h]

  v19 = __readfsqword(0x28u);
  if ( pPlayer != 0 && (*(pPlayer->_vptr_IHandleEntity + 140))(pPlayer) != 0 )
  {
    CRecipientFilter::CRecipientFilter(&filter);
    filter._vptr_IRecipientFilter = &off_3FCB0D0;
    CRecipientFilter::AddRecipient(&filter, pPlayer);
    CRecipientFilter::MakeReliable(&filter);
    v4 = this->m_vecEntryReferences.m_Size - 1;
    if ( v4 >= 0 )
    {
      v5 = v4;
      while ( 1 )
      {
        while ( this->m_vecEntryReferences.m_Memory.m_pMemory[v5].m_unType != 4 )
        {
          --v4;
          --v5;
          if ( v4 == -1 )
            goto LABEL_11;
        }
        CMsgDOTACombatLogEntry::CMsgDOTACombatLogEntry(v15);
        v15[0] = off_40DBB50;
        CDOTA_CombatLog::GetEntry(this, v4, v15);
        v6 = DOTA_CombatLog_Record::sm_pStringTableCombatLogNames != 0
           ? (*(DOTA_CombatLog_Record::sm_pStringTableCombatLogNames->_vptr_INetworkStringTable + 9))(
               DOTA_CombatLog_Record::sm_pStringTableCombatLogNames,
               v16,
               0)
           : "";
        fEarliestTimestamp = CDOTA_CombatLog::GetPlayerIDForName(this, v6);
        if ( fEarliestTimestamp == (*(pPlayer->_vptr_IHandleEntity + 393))(pPlayer) )
          break;
        --v4;
        v15[0] = &off_40DB9D0;
        --v5;
        CMsgDOTACombatLogEntry::~CMsgDOTACombatLogEntry(v15);
        if ( v4 == -1 )
          goto LABEL_11;
      }
      v15[0] = &off_40DB9D0;
      fDeathTimestamp = v17;
      CMsgDOTACombatLogEntry::~CMsgDOTACombatLogEntry(v15);
      if ( fDeathTimestamp >= 0.0 && this->m_vecEntryReferences.m_Size > 0 )
      {
        v7 = 0;
        do
        {
          if ( this->m_vecEntryReferences.m_Memory.m_pMemory[v7].m_unType <= 4u )
          {
            CMsgDOTACombatLogEntry::CMsgDOTACombatLogEntry(v15);
            v15[0] = off_40DBB50;
            CDOTA_CombatLog::GetEntry(this, v7, v15);
            if ( (fDeathTimestamp - 10.0) <= v17 && v17 <= fDeathTimestamp )
            {
              if ( DOTA_CombatLog_Record::sm_pStringTableCombatLogNames != 0 )
                v8 = (*(DOTA_CombatLog_Record::sm_pStringTableCombatLogNames->_vptr_INetworkStringTable + 9))(
                       DOTA_CombatLog_Record::sm_pStringTableCombatLogNames,
                       v16,
                       0);
              else
                v8 = "";
              PlayerIDForName = CDOTA_CombatLog::GetPlayerIDForName(this, v8);
              if ( PlayerIDForName == (*(pPlayer->_vptr_IHandleEntity + 393))(pPlayer) )
              {
                v10 = g_pGameEventSystem;
                v12 = *(*g_pGameEventSystem + 128LL);
                v11 = IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_CombatLogData_t>(bool)::s_hEvent;
                (*(*g_pNetworkMessages + 96LL))(
                  g_pNetworkMessages,
                  IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_CombatLogData_t>(bool)::s_hEvent);
                v12(v10, 0, 0, &filter, v11, v15, 232);
              }
            }
            v15[0] = &off_40DB9D0;
            CMsgDOTACombatLogEntry::~CMsgDOTACombatLogEntry(v15);
          }
          ++v7;
        }
        while ( this->m_vecEntryReferences.m_Size > v7 );
      }
    }
LABEL_11:
    filter._vptr_IRecipientFilter = &off_3FCB0D0;
    CRecipientFilter::~CRecipientFilter(&filter);
  }
}


// CDOTA_CombatLog::SendLogToPlayer  (line 1938, @0x0000000002487390, libserver.so)  // inlines: CDOTAUserMsg_CombatLogData_t, CNetMessagePB, CSingleUserRecipientFilter, CUserMessagePB, Element, Find, FindElement, FindInsertionPosition, FindName, GetStringTable, GetTeamNumber, Insert, InsertAt, InsertOrReplace, LeftChild, RightChild, SendUserMessage<CDOTAUserMsg_CombatLogData_t>, V_strncpy<int>, operator[], ~CDOTAUserMsg_CombatLogData_t, ~CNetMessagePB, ~CSingleUserRecipientFilter, ~CUserMessagePB
// calls: CUtlRBTree<CUtlMap<int, float, int, CDefLess<int> >::Node_t, int, CUtlMap<int, float, int, CDefLess<int> >::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, float, int, CDefLess<int> >::Node_t, int>, int> >::Find, Plat_FloatTime, CDOTA_PlayerResource::GetSelectedHeroName, _V_strncpy, CRecipientFilter::CRecipientFilter, CRecipientFilter::AddRecipient, CRecipientFilter::MakeReliable, CRecipientFilter::~CRecipientFilter, CMsgDOTACombatLogEntry::CMsgDOTACombatLogEntry, CDOTA_CombatLog::GetEntry, IsAppDota2Main, IGameEventSystem::PostEvent<CDOTAUserMsg_CombatLogData_t> (17 total)
// callers: CMD_CombatLog_Update
// globals: DOTA_CombatLog_Record::sm_pStringTableCombatLogNames
void __fastcall CDOTA_CombatLog::SendLogToPlayer(
        CDOTA_CombatLog *const this,
        CBasePlayer *pPlayer,
        int iAttackFilter,
        int iTargetFilter,
        char iTypeFilter,
        int iInterval,
        float fTime)
{
  int v9; // eax
  UtlRBTreeNode_t<CUtlMap<int,float,int,CDefLess<int> >::Node_t,int> *v10; // rax
  CUtlMap<int,float,int,CDefLess<int> >::ElemType_t v11; // xmm0_4
  CUtlMap<int,float,int,CDefLess<int> >::KeyType_t v12; // r13d
  int v13; // eax
  const char *SelectedHeroName; // rsi
  const char *v15; // rsi
  int v16; // r13d
  int v17; // eax
  int v18; // eax
  __int64 v19; // rbx
  uint16 m_unType; // ax
  unsigned __int8 m_Value; // al
  int m_Root; // r15d
  UtlRBTreeNode_t<CUtlMap<int,float,int,CDefLess<int> >::Node_t,int> *v23; // rax
  int m_Right; // ecx
  bool v25; // al
  bool v26; // r13
  int v27; // eax
  uint32 unAttackerFilterIndex; // [rsp+4h] [rbp-49Ch]
  uint32 unTargetFilterIndex; // [rsp+8h] [rbp-498h]
  float elem; // [rsp+3Ch] [rbp-464h]
  CUtlMap<int,float,int,CDefLess<int> >::ElemType_t v36; // [rsp+3Ch] [rbp-464h]
  CUtlMap<int,float,int,CDefLess<int> >::Node_t search; // [rsp+40h] [rbp-460h] BYREF
  int v38; // [rsp+5Ch] [rbp-444h]
  int v39; // [rsp+60h] [rbp-440h]
  int v40; // [rsp+64h] [rbp-43Ch]
  int v41; // [rsp+68h] [rbp-438h]
  float v42; // [rsp+7Ch] [rbp-424h]
  char v43; // [rsp+80h] [rbp-420h]
  char v44; // [rsp+81h] [rbp-41Fh]
  char attackerName[256]; // [rsp+130h] [rbp-370h] BYREF
  char targetName[256]; // [rsp+230h] [rbp-270h] BYREF
  CSingleUserRecipientFilter filter; // [rsp+330h] [rbp-170h] BYREF
  unsigned __int64 v48; // [rsp+468h] [rbp-38h]

  v48 = __readfsqword(0x28u);
  if ( pPlayer != 0 )
  {
    search.key = (*(pPlayer->_vptr_IHandleEntity + 393))(pPlayer);
    v9 = CUtlRBTree<CUtlMap<int,float,int,CDefLess<int>>::Node_t,int,CUtlMap<int,float,int,CDefLess<int>>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,float,int,CDefLess<int>>::Node_t,int>,int>>::Find(
           &this->m_mapLastRequestTime.m_Tree,
           &search);
    if ( v9 == -1
      || (v10 = &this->m_mapLastRequestTime.m_Tree.m_Elements.m_pMemory[v9])->m_Data.elem == 0.0
      || (elem = v10->m_Data.elem, (Plat_FloatTime() - elem) >= 1.0) )
    {
      v11 = Plat_FloatTime();
      v36 = v11;
      v12 = (*(pPlayer->_vptr_IHandleEntity + 393))(pPlayer);
      search.key = v12;
      v13 = CUtlRBTree<CUtlMap<int,float,int,CDefLess<int>>::Node_t,int,CUtlMap<int,float,int,CDefLess<int>>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,float,int,CDefLess<int>>::Node_t,int>,int>>::Find(
              &this->m_mapLastRequestTime.m_Tree,
              &search);
      if ( v13 == -1 )
      {
        m_Root = this->m_mapLastRequestTime.m_Tree.m_Root;
        search.key = v12;
        search.elem = v36;
        if ( m_Root == -1 )
        {
          v26 = 0;
        }
        else
        {
          while ( 1 )
          {
            v23 = &this->m_mapLastRequestTime.m_Tree.m_Elements.m_pMemory[m_Root];
            m_Right = v23->m_Right;
            if ( v12 < v23->m_Data.key )
              m_Right = v23->m_Left;
            v25 = v12 < v23->m_Data.key;
            if ( m_Right == -1 )
              break;
            m_Root = m_Right;
          }
          v26 = v25;
        }
        v27 = CUtlRBTree<CUtlMap<int,float,int,CDefLess<int>>::Node_t,int,CUtlMap<int,float,int,CDefLess<int>>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,float,int,CDefLess<int>>::Node_t,int>,int>>::NewNode(
                &this->m_mapLastRequestTime.m_Tree,
                &search);
        CUtlRBTree<CUtlMap<int,float,int,CDefLess<int>>::Node_t,int,CUtlMap<int,float,int,CDefLess<int>>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,float,int,CDefLess<int>>::Node_t,int>,int>>::LinkToParent(
          &this->m_mapLastRequestTime.m_Tree,
          v27,
          m_Root,
          v26);
        ++this->m_mapLastRequestTime.m_Tree.m_NumElements;
      }
      else
      {
        this->m_mapLastRequestTime.m_Tree.m_Elements.m_pMemory[v13].m_Data.elem = v36;
      }
      SelectedHeroName = "";
      if ( iAttackFilter >= 0 )
        SelectedHeroName = CDOTA_PlayerResource::GetSelectedHeroName(g_pDOTAPlayerResource, iAttackFilter);
      _V_strncpy(attackerName, SelectedHeroName, 256);
      v15 = "";
      if ( iTargetFilter >= 0 )
        v15 = CDOTA_PlayerResource::GetSelectedHeroName(g_pDOTAPlayerResource, iTargetFilter);
      _V_strncpy(targetName, v15, 256);
      if ( DOTA_CombatLog_Record::sm_pStringTableCombatLogNames != 0 )
      {
        v16 = -1;
        v17 = (*(DOTA_CombatLog_Record::sm_pStringTableCombatLogNames->_vptr_INetworkStringTable + 12))(
                DOTA_CombatLog_Record::sm_pStringTableCombatLogNames,
                attackerName);
        if ( v17 == 0xFFFF )
          v17 = -1;
        unAttackerFilterIndex = v17;
        if ( DOTA_CombatLog_Record::sm_pStringTableCombatLogNames != 0 )
        {
          v18 = (*(DOTA_CombatLog_Record::sm_pStringTableCombatLogNames->_vptr_INetworkStringTable + 12))(
                  DOTA_CombatLog_Record::sm_pStringTableCombatLogNames,
                  targetName);
          if ( v18 != 0xFFFF )
            v16 = v18;
          unTargetFilterIndex = v16;
        }
        else
        {
          unTargetFilterIndex = -1;
        }
      }
      else
      {
        unTargetFilterIndex = -1;
        unAttackerFilterIndex = -1;
      }
      CRecipientFilter::CRecipientFilter(&filter);
      filter._vptr_IRecipientFilter = &off_3FCB0D0;
      CRecipientFilter::AddRecipient(&filter, pPlayer);
      CRecipientFilter::MakeReliable(&filter);
      if ( this->m_vecEntryReferences.m_Size > 0 )
      {
        v19 = 0;
        while ( 1 )
        {
          m_unType = this->m_vecEntryReferences.m_Memory.m_pMemory[v19].m_unType;
          if ( m_unType == 0 )
          {
            if ( (iTypeFilter & 1) == 0 )
              goto LABEL_24;
            goto LABEL_21;
          }
          if ( m_unType == 1 )
            break;
          switch ( m_unType )
          {
            case 2u:
              if ( (iTypeFilter & 4) != 0 )
                goto LABEL_21;
              if ( ++v19 >= this->m_vecEntryReferences.m_Size )
                goto LABEL_30;
              break;
            case 3u:
              if ( (iTypeFilter & 4) == 0 )
                goto LABEL_24;
LABEL_36:
              if ( m_unType != 12 )
              {
                CMsgDOTACombatLogEntry::CMsgDOTACombatLogEntry(&search);
                search = off_40DBB50;
                CDOTA_CombatLog::GetEntry(this, v19, &search);
                if ( (fTime - iInterval) > v42 || v42 > fTime )
                  goto LABEL_49;
                m_Value = pPlayer->m_iTeamNum.m_Value;
                if ( m_Value != 2 )
                {
                  if ( m_Value == 3 && v44 == 0 )
                    goto LABEL_49;
LABEL_41:
                  if ( IsAppDota2Main() )
                  {
                    if ( iAttackFilter != -2 && unAttackerFilterIndex != v40 && unAttackerFilterIndex != v41 )
                      goto LABEL_49;
                    if ( iTargetFilter != -2 )
                      goto LABEL_46;
                  }
                  else if ( iAttackFilter < 0 || unAttackerFilterIndex != v40 && unAttackerFilterIndex != v41 )
                  {
                    if ( iTargetFilter >= 0 )
                    {
LABEL_46:
                      if ( v38 == unTargetFilterIndex || v39 == unTargetFilterIndex )
                        goto LABEL_48;
                    }
LABEL_49:
                    search = &off_40DB9D0;
                    CMsgDOTACombatLogEntry::~CMsgDOTACombatLogEntry(&search);
                    goto LABEL_24;
                  }
LABEL_48:
                  IGameEventSystem::PostEvent<CDOTAUserMsg_CombatLogData_t>(g_pGameEventSystem, 0, 0, &filter, &search);
                  goto LABEL_49;
                }
                if ( v43 != 0 )
                  goto LABEL_41;
                goto LABEL_49;
              }
LABEL_24:
              if ( ++v19 >= this->m_vecEntryReferences.m_Size )
                goto LABEL_30;
              break;
            case 4u:
              if ( (iTypeFilter & 8) == 0 )
                goto LABEL_24;
LABEL_23:
              if ( (m_unType - 7) <= 3u )
                goto LABEL_24;
              goto LABEL_36;
            case 5u:
            case 0xDu:
              if ( (iTypeFilter & 0x10) == 0 )
                goto LABEL_24;
              goto LABEL_23;
            default:
LABEL_21:
              if ( (m_unType == 11 || m_unType == 6) && (iTypeFilter & 0x20) == 0 )
                goto LABEL_24;
              goto LABEL_23;
          }
        }
        if ( (iTypeFilter & 2) == 0 )
          goto LABEL_24;
        goto LABEL_21;
      }
LABEL_30:
      filter._vptr_IRecipientFilter = &off_3FCB0D0;
      CRecipientFilter::~CRecipientFilter(&filter);
    }
  }
}


// CDOTA_CombatLog::Localize  (line 2048, @0x0000000002472580, libserver.so)  // inlines: V_strncpy<int>
// calls: CFmtStrN<256, false>::CFmtStrN, _V_strncpy, __stack_chk_fail
// callers: CDOTA_CombatLog::DoCombatAnalysis
// strings: "#%s", "#DOTA_ItemName_%s", "#DOTA_Tooltip_Ability_%s", "#DOTA_Tooltip_%s"
void __fastcall CDOTA_CombatLog::Localize(
        CDOTA_CombatLog *const this,
        const char *pToken,
        char *pBuffer,
        int iBufferSize)
{
  __int64 (__fastcall *v6)(ILocalize *, char *); // r15
  __int64 v7; // rax
  __int64 v8; // rcx
  unsigned int v9; // [rsp+Ch] [rbp-164h]
  __int64 (__fastcall *iBufferSizeb)(ILocalize *, char *); // [rsp+18h] [rbp-158h]
  __int64 (__fastcall *iBufferSizec)(ILocalize *, char *); // [rsp+18h] [rbp-158h]
  __int64 (__fastcall *iBufferSized)(ILocalize *, char *); // [rsp+18h] [rbp-158h]
  CFmtStrN<256,false> v14; // [rsp+20h] [rbp-150h] BYREF
  unsigned __int64 v15; // [rsp+138h] [rbp-38h]

  v15 = __readfsqword(0x28u);
  if ( pToken != 0 )
  {
    v6 = *(*g_pVGuiLocalize + 104LL);
    CFmtStrN<256,false>::CFmtStrN(&v14, "#%s", pToken);
    v7 = v6(g_pVGuiLocalize, v14.m_szBuf);
    v8 = iBufferSize;
    if ( v7 != 0 )
      goto LABEL_3;
    v9 = iBufferSize;
    iBufferSizeb = *(*g_pVGuiLocalize + 104LL);
    CFmtStrN<256,false>::CFmtStrN(&v14, "#DOTA_ItemName_%s", pToken);
    v7 = iBufferSizeb(g_pVGuiLocalize, v14.m_szBuf);
    v8 = v9;
    if ( v7 != 0 )
      goto LABEL_3;
    iBufferSizec = *(*g_pVGuiLocalize + 104LL);
    CFmtStrN<256,false>::CFmtStrN(&v14, "#DOTA_Tooltip_Ability_%s", pToken);
    v7 = iBufferSizec(g_pVGuiLocalize, v14.m_szBuf);
    v8 = v9;
    if ( v7 != 0
      || (iBufferSized = *(*g_pVGuiLocalize + 104LL),
          CFmtStrN<256,false>::CFmtStrN(&v14, "#DOTA_Tooltip_%s", pToken),
          v7 = iBufferSized(g_pVGuiLocalize, v14.m_szBuf),
          v8 = v9,
          v7 != 0) )
    {
LABEL_3:
      (*(*g_pVGuiLocalize + 128LL))(g_pVGuiLocalize, v7, pBuffer, v8);
    }
    else
    {
      _V_strncpy(pBuffer, pToken, v9);
    }
  }
  else
  {
    *pBuffer = 0;
  }
}


// CDOTA_CombatLog::DoCombatAnalysis  (line 2100, @0x0000000002493570, libserver.so)  // inlines: Add, Add<google::protobuf::RepeatedPtrField<CDOTAUserMsg_StatsHeroLookup>::TypeHandler>, Add<google::protobuf::RepeatedPtrField<CDOTAUserMsg_StatsMatchDetails_CDOTAUserMsg_StatsFightDetails>::TypeHandler>, CBroadcastRecipientFilter, CReliableBroadcastRecipientFilter, CopyArray, FindGameEvent<CDOTAUserMsg_StatsMatchDetails_t>, FindName, FindOrCreateGameEvent<CDOTAUserMsg_StatsMatchDetails_t>, Get, GetAbilityByIndex, GetAbilityName, GetEntityIdentity, GetEntryIndex, GetFightInfo, GetInstance, GetName, GetStringTable, HasHeroDeath, HasInvolvedHero, IndexToIdentity, IsValid, LookupEntity, MoveArray, New, PostEvent<CDOTAUserMsg_StatsMatchDetails_t>, Reserve, SendUserMessage<CDOTAUserMsg_StatsMatchDetails_t>, ToDOTABaseNPC, ToDOTABaseNPCHero, V_memset, add_deaths, add_fight_details, add_hero_lookup, add_participants, assign, length, memcpy, memset, mutable_dire_fight_details, mutable_radiant_fight_details, operator CBaseEntity*, operator CEntityInstance*, operator!=<CBaseEntity>, operator(), operator[], set_end_time, set_gold_delta, set_has_dire_fight_details, set_has_gold_delta, set_has_hero_id, set_has_hero_name, set_has_persona, set_has_player_id, set_has_radiant_fight_details, set_has_start_time, set_has_xp_delta, set_hero_id, set_hero_name, set_persona, set_player_id, set_start_time, set_xp_delta, ~CBroadcastRecipientFilter, ~CReliableBroadcastRecipientFilter
// calls: memset, CDOTA_PlayerResource::IsValidTeamPlayer, CDOTA_PlayerResource::GetPlayerSelectedHeroHandle, CEntityHandle::operator CEntityInstance*, CDOTA_PlayerResource::GetObserverWardsPlaced, CDOTA_PlayerResource::GetLastHits, CDOTA_PlayerResource::GetXPPerMin, CDOTA_PlayerResource::GetGoldPerMin, CDOTA_PlayerResource::GetAssists, CDOTA_PlayerResource::GetDeaths, CDOTA_PlayerResource::GetKills, CDOTA_CombatLog::AddPlayerStatsEvent (45 total)
// callers: CMD_CombatLog_CombatSummary, CDOTAGamerules::State_Enter_POST_GAME
// strings: "<NoAbilityName>", "\nCOMBAT SUMMARY\n", "--- %s ---\n", "  Total Damage Done: %d\n", "    to %s: %d\n", "    - ability damage -\n" (14 total)
// globals: g_DOTACombatLog, DOTA_CombatLog_Record::sm_pStringTableCombatLogNames, CEntityHandle::gm_pEntityList, IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_StatsMatchDetails_t>(bool)::s_hEvent, g_DOTACombatLogRecord
void __fastcall CDOTA_CombatLog::DoCombatAnalysis(CDOTA_CombatLog *const this)
{
  const CDOTA_PlayerResource *v1; // rbx
  bool i; // al
  int nWardsPlaced; // r14d
  int LastHits; // ebx
  int Assists; // r12d
  int Deaths; // r13d
  int Kills; // eax
  const char *SelectedHeroName; // rax
  int v9; // eax
  int v10; // r14d
  const char *v11; // rsi
  int v12; // eax
  int v13; // edx
  CEntityIdentity *v14; // rdx
  CEntityIdentity *v15; // rdx
  CEntityInstance *m_pInstance; // r15
  WorldGroupId_t *p_m_worldGroupId; // r12
  int *v18; // r13
  int j; // ebx
  CEntityIdentity *v20; // rax
  CEntityIdentity *v21; // rax
  CEntityInstance *v22; // rax
  const char **m_Id; // rax
  const char *v24; // rsi
  const char *v25; // rax
  int v26; // eax
  int v27; // edx
  __int64 v28; // r13
  CDOTAUserMsg_StatsMatchDetails_t *v29; // r15
  IGameEventSystem *v30; // r12
  void (__fastcall *v31)(IGameEventSystem *, _QWORD, _QWORD, CReliableBroadcastRecipientFilter *, __int64, CDOTAUserMsg_StatsMatchDetails_t *, __int64); // r14
  sHeroCombatInfo *v32; // rbx
  bool k; // al
  const char *v34; // rax
  __int64 m; // r12
  int v36; // r15d
  const char *v37; // rax
  CEntityInstance *v38; // rax
  __int64 v39; // r15
  CNetworkArrayBase<CHandle<CBaseEntity>,24,CDOTA_BaseNPC::NetworkVar_m_hAbilities> *p_m_hAbilities; // r14
  int v41; // ebx
  CEntityIdentity *v42; // rdx
  CEntityIdentity *v43; // rdx
  int iHealingDone; // edx
  float fStunDuration; // xmm0_4
  float fSlowDuration; // xmm0_4
  int v47; // ebx
  google::protobuf::internal::RepeatedPtrFieldBase *m_StatsMsg; // r12
  __int64 current_size; // rdx
  int allocated_size; // eax
  std::string **v51; // r14
  __int64 v52; // rax
  void **v53; // rdx
  int SelectedHeroID; // eax
  const char *v55; // rax
  CDOTAPlayer *Player; // rax
  const char *v57; // rax
  const char *v58; // r12
  size_t v59; // rax
  bool *v60; // r12
  __int64 v61; // r13
  sFightInfo *v62; // rbx
  bool IsValidTeamPlayer; // r14
  const char *v64; // rax
  int v65; // eax
  int v66; // ecx
  __int64 v67; // rdx
  bool v68; // al
  __int64 n; // rdx
  bool *v70; // rax
  __int64 v71; // r12
  bool *v72; // r15
  int GoldDelta; // r14d
  int XPDelta; // r13d
  google::protobuf::internal::RepeatedPtrFieldBase *v75; // rbx
  __int64 v76; // rax
  int v77; // edx
  CDOTAUserMsg_StatsMatchDetails_CDOTAUserMsg_StatsFightDetails *v78; // r13
  __int64 v79; // rax
  void **v80; // rdx
  int v81; // eax
  CDOTAUserMsg_StatsMatchDetails_CDOTAUserMsg_StatsFightTeamDetails *v82; // rbx
  int v83; // xmm0_4
  CDOTAUserMsg_StatsMatchDetails_CDOTAUserMsg_StatsFightTeamDetails *v84; // rbx
  CDOTAUserMsg_StatsMatchDetails_CDOTAUserMsg_StatsFightTeamDetails *v85; // rbx
  CDOTAUserMsg_StatsMatchDetails_CDOTAUserMsg_StatsFightTeamDetails *v86; // rbx
  __int64 v87; // rbx
  CDOTAUserMsg_StatsMatchDetails_CDOTAUserMsg_StatsFightTeamDetails *v88; // r14
  __int64 v89; // rdx
  _DWORD *v90; // rcx
  CDOTAUserMsg_StatsMatchDetails_CDOTAUserMsg_StatsFightTeamDetails *v91; // r14
  __int64 v92; // rdx
  _DWORD *v93; // rcx
  void **elements; // rax
  int v95; // eax
  int v96; // edx
  _DWORD *v97; // rax
  int v98; // eax
  int v99; // edx
  _DWORD *v100; // rax
  void **v101; // rdx
  const char **v102; // rax
  const char *v103; // rdx
  const char *v104; // rax
  __int64 v105; // [rsp+8h] [rbp-5CE8h]
  float iFightb; // [rsp+20h] [rbp-5CD0h]
  int iFight; // [rsp+20h] [rbp-5CD0h]
  sHeroCombatInfo *iFighta; // [rsp+20h] [rbp-5CD0h]
  int *nXPTotalRadiant; // [rsp+28h] [rbp-5CC8h]
  int nXPTotalRadianta; // [rsp+28h] [rbp-5CC8h]
  int nXPTotalRadiantb; // [rsp+28h] [rbp-5CC8h]
  int nGoldTotalRadiant; // [rsp+30h] [rbp-5CC0h]
  CDOTA_BaseNPC *nGoldTotalRadianta; // [rsp+30h] [rbp-5CC0h]
  int nGoldTotalRadiantb; // [rsp+30h] [rbp-5CC0h]
  float iOtherDamaged; // [rsp+38h] [rbp-5CB8h]
  int iOtherDamage; // [rsp+38h] [rbp-5CB8h]
  int iOtherDamagea; // [rsp+38h] [rbp-5CB8h]
  int iOtherDamageb; // [rsp+38h] [rbp-5CB8h]
  void *iOtherDamagec; // [rsp+38h] [rbp-5CB8h]
  int nGoldTotalDire; // [rsp+40h] [rbp-5CB0h]
  void *nGoldTotalDirea; // [rsp+40h] [rbp-5CB0h]
  bool bPlayerInvolved[24]; // [rsp+50h] [rbp-5CA0h] BYREF
  bool bPlayerKilled[32]; // [rsp+70h] [rbp-5C80h] BYREF
  _DWORD v125[60]; // [rsp+90h] [rbp-5C60h] BYREF
  CEntityHandle v126[6]; // [rsp+180h] [rbp-5B70h] BYREF
  int v127; // [rsp+198h] [rbp-5B58h]
  unsigned int v128; // [rsp+19Ch] [rbp-5B54h]
  int v129; // [rsp+1A4h] [rbp-5B4Ch]
  int v130; // [rsp+1A8h] [rbp-5B48h]
  int v131; // [rsp+1ACh] [rbp-5B44h]
  char v132; // [rsp+1B2h] [rbp-5B3Eh]
  int v133; // [rsp+1B4h] [rbp-5B3Ch]
  int v134; // [rsp+1BCh] [rbp-5B34h]
  float v135; // [rsp+1C4h] [rbp-5B2Ch]
  float v136; // [rsp+1C8h] [rbp-5B28h]
  sHeroCombatInfo combatInfo[64]; // [rsp+270h] [rbp-5A80h] BYREF
  CReliableBroadcastRecipientFilter filterbroadcast; // [rsp+5770h] [rbp-580h] BYREF
  char buffer[1032]; // [rsp+58B0h] [rbp-440h] BYREF
  unsigned __int64 v140; // [rsp+5CB8h] [rbp-38h]

  v140 = __readfsqword(0x28u);
  v1 = g_pDOTAPlayerResource;
  if ( g_pDOTAPlayerResource != 0 )
  {
    memset(combatInfo, 0, sizeof(combatInfo));
    nGoldTotalRadiant = 0;
    nXPTotalRadiant = combatInfo[0].iDamageDoneWithAbility;
    for ( i = CDOTA_PlayerResource::IsValidTeamPlayer(v1, 0);
          ;
          i = CDOTA_PlayerResource::IsValidTeamPlayer(g_pDOTAPlayerResource, nGoldTotalRadiant) )
    {
      if ( i )
      {
        CDOTA_PlayerResource::GetPlayerSelectedHeroHandle(g_pDOTAPlayerResource, nGoldTotalRadiant);
        if ( CEntityHandle::operator CEntityInstance *(v126) != 0 )
        {
          nWardsPlaced = CDOTA_PlayerResource::GetObserverWardsPlaced(g_pDOTAPlayerResource, nGoldTotalRadiant);
          LastHits = CDOTA_PlayerResource::GetLastHits(g_pDOTAPlayerResource, nGoldTotalRadiant);
          iFightb = CDOTA_PlayerResource::GetXPPerMin(g_pDOTAPlayerResource, nGoldTotalRadiant);
          iOtherDamaged = CDOTA_PlayerResource::GetGoldPerMin(g_pDOTAPlayerResource, nGoldTotalRadiant);
          Assists = CDOTA_PlayerResource::GetAssists(g_pDOTAPlayerResource, nGoldTotalRadiant);
          Deaths = CDOTA_PlayerResource::GetDeaths(g_pDOTAPlayerResource, nGoldTotalRadiant);
          Kills = CDOTA_PlayerResource::GetKills(g_pDOTAPlayerResource, nGoldTotalRadiant);
          CDOTA_CombatLog::AddPlayerStatsEvent(
            &g_DOTACombatLog,
            nGoldTotalRadiant,
            Kills,
            Deaths,
            Assists,
            iOtherDamaged,
            iFightb,
            LastHits,
            nWardsPlaced);
          SelectedHeroName = CDOTA_PlayerResource::GetSelectedHeroName(g_pDOTAPlayerResource, nGoldTotalRadiant);
          if ( DOTA_CombatLog_Record::sm_pStringTableCombatLogNames != 0 )
          {
            v9 = (*(DOTA_CombatLog_Record::sm_pStringTableCombatLogNames->_vptr_INetworkStringTable + 12))(
                   DOTA_CombatLog_Record::sm_pStringTableCombatLogNames,
                   SelectedHeroName);
            iOtherDamage = v9;
            if ( v9 != 0xFFFF && v9 != -1 && this->m_vecEntryReferences.m_Size > 0 )
            {
              v10 = 0;
              do
              {
                CMsgDOTACombatLogEntry::CMsgDOTACombatLogEntry(v126);
                CDOTA_CombatLog::GetEntry(this, v10, v126);
                if ( v129 != v128 && (iOtherDamage == v129 || iOtherDamage == v130) )
                {
                  if ( v127 != 0 )
                  {
                    if ( v127 == 1 )
                    {
                      *(nXPTotalRadiant - 3) += v133;
                    }
                    else if ( v127 == 2 )
                    {
                      *(nXPTotalRadiant - 2) = *(nXPTotalRadiant - 2) + v135;
                      *(nXPTotalRadiant - 1) = *(nXPTotalRadiant - 1) + v136;
                    }
                  }
                  else
                  {
                    if ( DOTA_CombatLog_Record::sm_pStringTableCombatLogNames != 0 )
                      v11 = (*(DOTA_CombatLog_Record::sm_pStringTableCombatLogNames->_vptr_INetworkStringTable + 9))(
                              DOTA_CombatLog_Record::sm_pStringTableCombatLogNames,
                              v128,
                              0);
                    else
                      v11 = "";
                    v12 = CDOTA_PlayerResource::WhoSelectedHero(g_pDOTAPlayerResource, v11);
                    if ( v12 != -1 && v132 == 0 )
                    {
                      v13 = v133;
                      combatInfo[nGoldTotalRadiant].iDamageDoneToHero[v12] += v133;
                      *(nXPTotalRadiant - 4) += v13;
                      CDOTA_PlayerResource::GetPlayerSelectedHeroHandle(g_pDOTAPlayerResource, nGoldTotalRadiant);
                      if ( (v125[0] + 2) > 1 )
                      {
                        v14 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v125[0]) >> 9) & 0x3F];
                        if ( v14 != 0 )
                        {
                          v15 = &v14[v125[0] & 0x1FF];
                          if ( v15 != 0 && v125[0] == v15->m_EHandle.m_Index )
                          {
                            m_pInstance = v15->m_pInstance;
                            if ( v15->m_pInstance != 0
                              && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
                              && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
                            {
                              p_m_worldGroupId = &m_pInstance[61].m_worldGroupId;
                              v18 = nXPTotalRadiant;
                              for ( j = 0; j < CDOTA_BaseNPC::GetAbilityCount(m_pInstance) && j != 16; ++j )
                              {
                                if ( p_m_worldGroupId->m_nHashCode + 2 > 1 )
                                {
                                  v20 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(p_m_worldGroupId->m_nHashCode) >> 9)
                                                                                       & 0x3F];
                                  if ( v20 != 0 )
                                  {
                                    v21 = &v20[p_m_worldGroupId->m_nHashCode & 0x1FF];
                                    if ( v21 != 0 && p_m_worldGroupId->m_nHashCode == v21->m_EHandle.m_Index )
                                    {
                                      v22 = v21->m_pInstance;
                                      if ( v22 != 0 )
                                      {
                                        m_Id = v22[18].m_iszPrivateVScripts.u.m_Id;
                                        v24 = "<NoAbilityName>";
                                        if ( m_Id != 0 )
                                        {
                                          v25 = *m_Id;
                                          if ( v25 != 0 )
                                            v24 = v25;
                                        }
                                        if ( DOTA_CombatLog_Record::sm_pStringTableCombatLogNames != 0 )
                                        {
                                          v26 = (*(DOTA_CombatLog_Record::sm_pStringTableCombatLogNames->_vptr_INetworkStringTable
                                                 + 12))(
                                                  DOTA_CombatLog_Record::sm_pStringTableCombatLogNames,
                                                  v24);
                                          v27 = -1;
                                          if ( v26 != 0xFFFF )
                                            v27 = v26;
                                        }
                                        else
                                        {
                                          v27 = -1;
                                        }
                                        if ( v131 == v27 )
                                          *v18 += v133;
                                      }
                                    }
                                  }
                                }
                                ++v18;
                                ++p_m_worldGroupId;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
                ++v10;
                CMsgDOTACombatLogEntry::~CMsgDOTACombatLogEntry(v126);
              }
              while ( v10 < this->m_vecEntryReferences.m_Size );
            }
          }
        }
      }
      ++nGoldTotalRadiant;
      nXPTotalRadiant += 85;
      if ( nGoldTotalRadiant == 64 )
        break;
    }
    UTIL_ClientPrintAll(2, "\nCOMBAT SUMMARY\n", 0, 0, 0, 0);
    v32 = combatInfo;
    nXPTotalRadianta = 0;
    for ( k = CDOTA_PlayerResource::IsValidTeamPlayer(g_pDOTAPlayerResource, 0);
          ;
          k = CDOTA_PlayerResource::IsValidTeamPlayer(g_pDOTAPlayerResource, nXPTotalRadianta) )
    {
      if ( k )
      {
        CDOTA_PlayerResource::GetPlayerSelectedHeroHandle(g_pDOTAPlayerResource, nXPTotalRadianta);
        if ( CEntityHandle::operator CEntityInstance *(v126) != 0 )
        {
          v34 = CDOTA_PlayerResource::GetSelectedHeroName(g_pDOTAPlayerResource, nXPTotalRadianta);
          CDOTA_CombatLog::Localize(this, v34, buffer, 1024);
          CFmtStrN<256,false>::CFmtStrN(&filterbroadcast, "--- %s ---\n", buffer);
          UTIL_ClientPrintAll(2, &filterbroadcast.m_nBufType + 1, 0, 0, 0, 0);
          iOtherDamagea = v32->iDamageDone;
          CFmtStrN<256,false>::CFmtStrN(&filterbroadcast, "  Total Damage Done: %d\n", iOtherDamagea);
          UTIL_ClientPrintAll(2, &filterbroadcast.m_nBufType + 1, 0, 0, 0, 0);
          for ( m = 0; m != 64; ++m )
          {
            v36 = v32->iDamageDoneToHero[m];
            if ( v36 > 0 )
            {
              v37 = CDOTA_PlayerResource::GetSelectedHeroName(g_pDOTAPlayerResource, m);
              CDOTA_CombatLog::Localize(this, v37, buffer, 1024);
              CFmtStrN<256,false>::CFmtStrN(&filterbroadcast, "    to %s: %d\n", buffer, v36);
              UTIL_ClientPrintAll(2, &filterbroadcast.m_nBufType + 1, 0, 0, 0, 0);
            }
          }
          CDOTA_PlayerResource::GetPlayerSelectedHeroHandle(g_pDOTAPlayerResource, nXPTotalRadianta);
          v38 = CEntityHandle::operator CEntityInstance *(v126);
          nGoldTotalRadianta = v38;
          if ( v38 != 0 && BYTE3(v38[7]._vptr_IHandleEntity) != 0 && (v38[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
          {
            v39 = 0;
            UTIL_ClientPrintAll(2, "    - ability damage -\n", 0, 0, 0, 0);
            iFighta = v32;
            p_m_hAbilities = &nGoldTotalRadianta->m_hAbilities;
            while ( v39 < CDOTA_BaseNPC::GetAbilityCount(nGoldTotalRadianta) && v39 != 16 )
            {
              v41 = iFighta->iDamageDoneWithAbility[v39];
              if ( v41 > 0 && p_m_hAbilities->m_Value[0].m_Index + 2 > 1 )
              {
                v42 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(p_m_hAbilities->m_Value[0].m_Index) >> 9)
                                                                     & 0x3F];
                if ( v42 != 0 )
                {
                  v43 = &v42[p_m_hAbilities->m_Value[0].m_Index & 0x1FF];
                  if ( v43 != 0 && p_m_hAbilities->m_Value[0].m_Index == v43->m_EHandle.m_Index && v43->m_pInstance != 0 )
                  {
                    v102 = v43->m_pInstance[18].m_iszPrivateVScripts.u.m_Id;
                    v103 = "<NoAbilityName>";
                    if ( v102 != 0 )
                    {
                      v104 = *v102;
                      if ( v104 != 0 )
                        v103 = v104;
                    }
                    CFmtStrN<256,false>::CFmtStrN(&filterbroadcast, "    with %s(%d): %d\n", v103, v39, v41);
                    UTIL_ClientPrintAll(2, &filterbroadcast.m_nBufType + 1, 0, 0, 0, 0);
                    iOtherDamagea -= v41;
                  }
                }
              }
              ++v39;
              p_m_hAbilities = (p_m_hAbilities + 4);
            }
            v32 = iFighta;
            CFmtStrN<256,false>::CFmtStrN(&filterbroadcast, "    other damage done: %d\n", iOtherDamagea);
            UTIL_ClientPrintAll(2, &filterbroadcast.m_nBufType + 1, 0, 0, 0, 0);
          }
          iHealingDone = v32->iHealingDone;
          if ( iHealingDone > 0 )
          {
            CFmtStrN<256,false>::CFmtStrN(&filterbroadcast, "  Total Healing Done: %d\n", iHealingDone);
            UTIL_ClientPrintAll(2, &filterbroadcast.m_nBufType + 1, 0, 0, 0, 0);
          }
          fStunDuration = v32->fStunDuration;
          if ( fStunDuration > 0.0 )
          {
            CFmtStrN<256,false>::CFmtStrN(&filterbroadcast, "  Total Stuns: %.2f seconds\n", fStunDuration);
            UTIL_ClientPrintAll(2, &filterbroadcast.m_nBufType + 1, 0, 0, 0, 0);
          }
          fSlowDuration = v32->fSlowDuration;
          if ( fSlowDuration > 0.0 )
          {
            CFmtStrN<256,false>::CFmtStrN(&filterbroadcast, "  Total Slows: %.2f seconds\n", fSlowDuration);
            UTIL_ClientPrintAll(2, &filterbroadcast.m_nBufType + 1, 0, 0, 0, 0);
          }
        }
      }
      ++nXPTotalRadianta;
      ++v32;
      if ( nXPTotalRadianta == 64 )
        break;
    }
    UTIL_ClientPrintAll(2, "\n", 0, 0, 0, 0);
    if ( IsAppDota2Main() )
    {
      v47 = 0;
      do
      {
        while ( 1 )
        {
          if ( CDOTA_PlayerResource::IsValidTeamPlayer(g_pDOTAPlayerResource, v47) )
          {
            m_StatsMsg = this->m_StatsMsg;
            current_size = m_StatsMsg[1].current_size_;
            allocated_size = m_StatsMsg[1].allocated_size_;
            if ( current_size < allocated_size )
            {
              elements = m_StatsMsg[1].elements_;
              m_StatsMsg[1].current_size_ = current_size + 1;
              v51 = elements[current_size];
            }
            else
            {
              if ( allocated_size == m_StatsMsg[1].total_size_ )
                google::protobuf::internal::RepeatedPtrFieldBase::Reserve(m_StatsMsg + 1, allocated_size + 1);
              v51 = operator new(0x30u);
              CDOTAUserMsg_StatsHeroLookup::CDOTAUserMsg_StatsHeroLookup(v51);
              v52 = m_StatsMsg[1].current_size_;
              v53 = m_StatsMsg[1].elements_;
              ++m_StatsMsg[1].allocated_size_;
              m_StatsMsg[1].current_size_ = v52 + 1;
              v53[v52] = v51;
            }
            *(v51 + 6) = v47;
            *(v51 + 4) |= 1u;
            SelectedHeroID = CDOTA_PlayerResource::GetSelectedHeroID(g_pDOTAPlayerResource, v47);
            *(v51 + 4) |= 2u;
            *(v51 + 7) = SelectedHeroID;
            v55 = CDOTA_PlayerResource::GetSelectedHeroName(g_pDOTAPlayerResource, v47);
            CDOTA_CombatLog::Localize(this, v55, buffer, 1024);
            *(v51 + 4) |= 4u;
            std::string::assign(v51[4], buffer, strlen(buffer));
            Player = CDOTA_PlayerResource::GetPlayer(g_pDOTAPlayerResource, v47);
            if ( Player != 0 )
              break;
          }
          if ( ++v47 == 64 )
            goto LABEL_91;
        }
        ++v47;
        v57 = (*(Player->_vptr_IHandleEntity + 106))(Player);
        *(v51 + 4) |= 8u;
        v58 = v57;
        v59 = strlen(v57);
        std::string::assign(v51[5], v58, v59);
      }
      while ( v47 != 64 );
LABEL_91:
      if ( g_DOTACombatLogRecord.m_vecFightInfo.m_Size > 0 )
      {
        v105 = 0;
        v60 = bPlayerInvolved;
        iFight = 0;
LABEL_93:
        v61 = 0;
        v62 = &g_DOTACombatLogRecord.m_vecFightInfo.m_Memory.m_pMemory[v105];
        Msg("fight %d\n", iFight);
        memset(bPlayerInvolved, 0, sizeof(bPlayerInvolved));
        memset(bPlayerKilled, 0, 24);
        do
        {
          while ( 1 )
          {
            v60[v61] = 0;
            IsValidTeamPlayer = CDOTA_PlayerResource::IsValidTeamPlayer(g_pDOTAPlayerResource, v61);
            if ( IsValidTeamPlayer )
              break;
            if ( ++v61 == 24 )
              goto LABEL_108;
          }
          v64 = CDOTA_PlayerResource::GetSelectedHeroName(g_pDOTAPlayerResource, v61);
          if ( DOTA_CombatLog_Record::sm_pStringTableCombatLogNames == 0
            || (v65 = (*(DOTA_CombatLog_Record::sm_pStringTableCombatLogNames->_vptr_INetworkStringTable + 12))(
                        DOTA_CombatLog_Record::sm_pStringTableCombatLogNames,
                        v64),
                v66 = v65,
                v65 == 0xFFFF)
            || v65 == -1 )
          {
            v60[v61] = 0;
            bPlayerKilled[v61] = 0;
          }
          else
          {
            v67 = 0;
            while ( v65 != v62->involvedHeroNames[v67] )
            {
              if ( ++v67 == 24 )
              {
                v68 = 0;
                goto LABEL_103;
              }
            }
            v68 = IsValidTeamPlayer;
LABEL_103:
            v60[v61] = v68;
            for ( n = 0; n != 24; ++n )
            {
              if ( v66 == v62->deathHeroNames[n] )
              {
                bPlayerKilled[v61] = IsValidTeamPlayer;
                goto LABEL_107;
              }
            }
            bPlayerKilled[v61] = 0;
          }
LABEL_107:
          ++v61;
        }
        while ( v61 != 24 );
LABEL_108:
        iOtherDamageb = 0;
        v70 = v60;
        nXPTotalRadiantb = 0;
        v71 = 0;
        v72 = v70;
        nGoldTotalDire = 0;
        nGoldTotalRadiantb = 0;
        while ( 1 )
        {
          while ( !v72[v71] )
          {
LABEL_109:
            if ( ++v71 == 24 )
              goto LABEL_113;
          }
          GoldDelta = DOTA_CombatLog_Record::GetGoldDelta(
                        &g_DOTACombatLogRecord,
                        v71,
                        v62->iFirstEntry,
                        v62->iLastEntry);
          XPDelta = DOTA_CombatLog_Record::GetXPDelta(&g_DOTACombatLogRecord, v71, v62->iFirstEntry, v62->iLastEntry);
          if ( CDOTA_PlayerResource::GetTeam(g_pDOTAPlayerResource, v71) == 2 )
          {
            nGoldTotalRadiantb += GoldDelta;
            nXPTotalRadiantb += XPDelta;
            goto LABEL_109;
          }
          nGoldTotalDire += GoldDelta;
          ++v71;
          iOtherDamageb += XPDelta;
          if ( v71 == 24 )
          {
LABEL_113:
            v60 = v72;
            Msg("Initial participants %d - %d, Remaining %d - %d\n", 0, 0, 0, 0);
            Msg("XP Delta %d\n", nGoldTotalRadiantb - nGoldTotalDire);
            Msg("XP Delta %d\n", nXPTotalRadiantb - iOtherDamageb);
            CMsgDOTACombatLogEntry::CMsgDOTACombatLogEntry(v125);
            CMsgDOTACombatLogEntry::CMsgDOTACombatLogEntry(v126);
            CDOTA_CombatLog::GetEntry(this, v62->iFirstEntry, v125);
            CDOTA_CombatLog::GetEntry(this, v62->iLastEntry, v126);
            v75 = this->m_StatsMsg;
            v76 = v75[6].current_size_;
            v77 = v75[6].allocated_size_;
            if ( v76 < v77 )
            {
              v101 = v75[6].elements_;
              v75[6].current_size_ = v76 + 1;
              v78 = v101[v76];
            }
            else
            {
              if ( v77 == v75[6].total_size_ )
                google::protobuf::internal::RepeatedPtrFieldBase::Reserve(v75 + 6, v77 + 1);
              v78 = operator new(0x30u);
              CDOTAUserMsg_StatsMatchDetails_CDOTAUserMsg_StatsFightDetails::CDOTAUserMsg_StatsMatchDetails_CDOTAUserMsg_StatsFightDetails(v78);
              v79 = v75[6].current_size_;
              v80 = v75[6].elements_;
              ++v75[6].allocated_size_;
              v75[6].current_size_ = v79 + 1;
              v80[v79] = v78;
            }
            v81 = *(v78 + 4);
            v82 = *(v78 + 4);
            *(v78 + 6) = v125[15];
            *(v78 + 4) = v81 | 1;
            v83 = v134;
            *(v78 + 4) = v81 | 7;
            *(v78 + 7) = v83;
            if ( v82 == 0 )
            {
              v82 = operator new(0x40u);
              CDOTAUserMsg_StatsMatchDetails_CDOTAUserMsg_StatsFightTeamDetails::CDOTAUserMsg_StatsMatchDetails_CDOTAUserMsg_StatsFightTeamDetails(v82);
              *(v78 + 4) = v82;
            }
            *(v82 + 4) |= 4u;
            *(v82 + 14) = nGoldTotalRadiantb;
            v84 = *(v78 + 4);
            *(v78 + 4) |= 4u;
            if ( v84 == 0 )
            {
              v84 = operator new(0x40u);
              CDOTAUserMsg_StatsMatchDetails_CDOTAUserMsg_StatsFightTeamDetails::CDOTAUserMsg_StatsMatchDetails_CDOTAUserMsg_StatsFightTeamDetails(v84);
              *(v78 + 4) = v84;
            }
            *(v84 + 4) |= 8u;
            *(v84 + 15) = nXPTotalRadiantb;
            v85 = *(v78 + 5);
            *(v78 + 4) |= 8u;
            if ( v85 == 0 )
            {
              v85 = operator new(0x40u);
              CDOTAUserMsg_StatsMatchDetails_CDOTAUserMsg_StatsFightTeamDetails::CDOTAUserMsg_StatsMatchDetails_CDOTAUserMsg_StatsFightTeamDetails(v85);
              *(v78 + 5) = v85;
            }
            *(v85 + 4) |= 4u;
            *(v85 + 14) = nGoldTotalDire;
            v86 = *(v78 + 5);
            *(v78 + 4) |= 8u;
            if ( v86 == 0 )
            {
              v86 = operator new(0x40u);
              CDOTAUserMsg_StatsMatchDetails_CDOTAUserMsg_StatsFightTeamDetails::CDOTAUserMsg_StatsMatchDetails_CDOTAUserMsg_StatsFightTeamDetails(v86);
              *(v78 + 5) = v86;
            }
            *(v86 + 4) |= 8u;
            *(v86 + 15) = iOtherDamageb;
            v87 = 0;
            while ( 2 )
            {
              if ( v72[v87] )
              {
                if ( CDOTA_PlayerResource::GetTeam(g_pDOTAPlayerResource, v87) == 2 )
                {
                  v88 = *(v78 + 4);
                  *(v78 + 4) |= 4u;
                  if ( v88 != 0 )
                    goto LABEL_132;
                  v88 = operator new(0x40u);
                  CDOTAUserMsg_StatsMatchDetails_CDOTAUserMsg_StatsFightTeamDetails::CDOTAUserMsg_StatsMatchDetails_CDOTAUserMsg_StatsFightTeamDetails(v88);
                  *(v78 + 4) = v88;
                  v89 = *(v88 + 8);
                  if ( v89 == *(v88 + 9) )
                    goto LABEL_148;
LABEL_133:
                  v90 = *(v88 + 3);
                }
                else
                {
                  v88 = *(v78 + 5);
                  *(v78 + 4) |= 8u;
                  if ( v88 == 0 )
                  {
                    v88 = operator new(0x40u);
                    CDOTAUserMsg_StatsMatchDetails_CDOTAUserMsg_StatsFightTeamDetails::CDOTAUserMsg_StatsMatchDetails_CDOTAUserMsg_StatsFightTeamDetails(v88);
                    *(v78 + 5) = v88;
                  }
LABEL_132:
                  v89 = *(v88 + 8);
                  if ( v89 != *(v88 + 9) )
                    goto LABEL_133;
LABEL_148:
                  iOtherDamagec = *(v88 + 3);
                  v95 = v89 + 1;
                  v96 = 2 * v89;
                  if ( v95 < v96 )
                    v95 = v96;
                  if ( v95 < 4 )
                    v95 = 4;
                  *(v88 + 9) = v95;
                  v97 = operator new[](4LL * v95);
                  *(v88 + 3) = v97;
                  v89 = *(v88 + 8);
                  v90 = v97;
                  if ( iOtherDamagec != 0 )
                  {
                    memcpy(v97, iOtherDamagec, 4 * v89);
                    operator delete[](iOtherDamagec);
                    v90 = *(v88 + 3);
                    v89 = *(v88 + 8);
                  }
                }
                *(v88 + 8) = v89 + 1;
                v90[v89] = v87;
                if ( bPlayerKilled[v87] )
                {
LABEL_135:
                  if ( CDOTA_PlayerResource::GetTeam(g_pDOTAPlayerResource, v87) == 2 )
                  {
                    v91 = *(v78 + 4);
                    *(v78 + 4) |= 4u;
                    if ( v91 != 0 )
                      goto LABEL_138;
                    v91 = operator new(0x40u);
                    CDOTAUserMsg_StatsMatchDetails_CDOTAUserMsg_StatsFightTeamDetails::CDOTAUserMsg_StatsMatchDetails_CDOTAUserMsg_StatsFightTeamDetails(v91);
                    *(v78 + 4) = v91;
                    v92 = *(v91 + 12);
                    if ( v92 == *(v91 + 13) )
                      goto LABEL_156;
LABEL_139:
                    v93 = *(v91 + 5);
                  }
                  else
                  {
                    v91 = *(v78 + 5);
                    *(v78 + 4) |= 8u;
                    if ( v91 == 0 )
                    {
                      v91 = operator new(0x40u);
                      CDOTAUserMsg_StatsMatchDetails_CDOTAUserMsg_StatsFightTeamDetails::CDOTAUserMsg_StatsMatchDetails_CDOTAUserMsg_StatsFightTeamDetails(v91);
                      *(v78 + 5) = v91;
                    }
LABEL_138:
                    v92 = *(v91 + 12);
                    if ( v92 != *(v91 + 13) )
                      goto LABEL_139;
LABEL_156:
                    nGoldTotalDirea = *(v91 + 5);
                    v98 = v92 + 1;
                    v99 = 2 * v92;
                    if ( v98 < v99 )
                      v98 = v99;
                    if ( v98 < 4 )
                      v98 = 4;
                    *(v91 + 13) = v98;
                    v100 = operator new[](4LL * v98);
                    *(v91 + 5) = v100;
                    v92 = *(v91 + 12);
                    v93 = v100;
                    if ( nGoldTotalDirea != 0 )
                    {
                      memcpy(v100, nGoldTotalDirea, 4 * v92);
                      operator delete[](nGoldTotalDirea);
                      v93 = *(v91 + 5);
                      v92 = *(v91 + 12);
                    }
                  }
                  *(v91 + 12) = v92 + 1;
                  v93[v92] = v87;
                }
              }
              else if ( bPlayerKilled[v87] )
              {
                goto LABEL_135;
              }
              if ( ++v87 != 24 )
                continue;
              break;
            }
            CMsgDOTACombatLogEntry::~CMsgDOTACombatLogEntry(v126);
            CMsgDOTACombatLogEntry::~CMsgDOTACombatLogEntry(v125);
            ++iFight;
            ++v105;
            if ( iFight >= g_DOTACombatLogRecord.m_vecFightInfo.m_Size )
              break;
            goto LABEL_93;
          }
        }
      }
      CRecipientFilter::CRecipientFilter(&filterbroadcast);
      filterbroadcast._vptr_IRecipientFilter = &off_3FB63F0;
      CRecipientFilter::AddAllPlayers(&filterbroadcast);
      filterbroadcast._vptr_IRecipientFilter = &off_3FCB130;
      CRecipientFilter::MakeReliable(&filterbroadcast);
      v28 = IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_StatsMatchDetails_t>(bool)::s_hEvent;
      v29 = this->m_StatsMsg;
      v30 = g_pGameEventSystem;
      v31 = *(*g_pGameEventSystem + 128LL);
      (*(*g_pNetworkMessages + 96LL))(
        g_pNetworkMessages,
        IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_StatsMatchDetails_t>(bool)::s_hEvent);
      v31(v30, 0, 0, &filterbroadcast, v28, v29, 168);
      filterbroadcast._vptr_IRecipientFilter = &off_3FB63F0;
      CRecipientFilter::~CRecipientFilter(&filterbroadcast);
    }
  }
}


// CDOTA_CombatLog::SendHeroPositions  (line 2338, @0x000000000246d910, libserver.so)  // inlines: CDOTAUserMsg_CombatHeroPositions_t, CNetMessagePB, CSingleUserRecipientFilter, CUserMessagePB, Element, Find, FindGameEvent<CDOTAUserMsg_CombatHeroPositions_t>, FindOrCreateGameEvent<CDOTAUserMsg_CombatHeroPositions_t>, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, IsValidIndex, LeftChild, LookupEntity, PostEvent<CDOTAUserMsg_CombatHeroPositions_t>, RightChild, SendUserMessage<CDOTAUserMsg_CombatHeroPositions_t>, entindex, mutable_world_pos, operator CEntityInstance*, operator(), operator->, operator=, operator==<CBaseEntity>, operator[], set_has_health, set_has_index, set_has_time, set_has_world_pos, set_has_x, set_has_y, set_health, set_index, set_time, set_x, set_y, ~CDOTAUserMsg_CombatHeroPositions_t, ~CNetMessagePB, ~CSingleUserRecipientFilter, ~CUserMessagePB
// calls: CEntityHandle::operator CEntityInstance*, CRecipientFilter::CRecipientFilter, CRecipientFilter::AddRecipient, CRecipientFilter::MakeReliable, CRecipientFilter::~CRecipientFilter, CDOTAUserMsg_CombatHeroPositions::CDOTAUserMsg_CombatHeroPositions, CEntityInstance::GetEntityIndex, floorf, CDOTAUserMsg_CombatHeroPositions::~CDOTAUserMsg_CombatHeroPositions, operator new, CMsgVector2D::CMsgVector2D, _Unwind_Resume (14 total)
// globals: CEntityHandle::gm_pEntityList, IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_CombatHeroPositions_t>(bool)::s_hEvent
__int64 __fastcall CDOTA_CombatLog::SendHeroPositions(
        CDOTA_CombatLog *const this,
        CBasePlayer *pPlayer,
        const CEntityHandle *hHero)
{
  unsigned __int64 m_Root; // rax
  unsigned __int64 v5; // r13
  unsigned __int64 v6; // r14
  bool v7; // zf
  UtlRBTreeNode_t<CUtlMap<CHandle<CBaseEntity>,CDOTAHeroPositions*>::Node_t,short unsigned int> *m_pMemory; // rax
  CUtlMap<CHandle<CBaseEntity>,CDOTAHeroPositions*,short unsigned int,bool (*)(const CHandle<CBaseEntity>&,const CHandle<CBaseEntity>&)>::ElemType_t elem; // rax
  __int64 m_Tail; // rbx
  const CEntityInstance *m_pInstance; // rdi
  unsigned __int64 m_Index_low; // rcx
  CEntityIdentity *v14; // rdx
  CEntityIdentity *v15; // rdx
  CEntityIndex v16; // eax
  int v17; // r13d
  float v18; // xmm0_4
  int v19; // r14d
  CMsgVector2D *v20; // r13
  CMsgVector2D *v21; // r13
  int v22; // r14d
  __int64 v23; // r14
  int v24; // eax
  IGameEventSystem *v25; // r13
  void (__fastcall *v26)(IGameEventSystem *, _QWORD, _QWORD, CSingleUserRecipientFilter *, __int64, _QWORD *, __int64); // r15
  unsigned int iNodes; // [rsp+Ch] [rbp-1B4h]
  _QWORD v29[2]; // [rsp+20h] [rbp-1A0h] BYREF
  int v30; // [rsp+30h] [rbp-190h]
  int32 m_Data; // [rsp+38h] [rbp-188h]
  int v32; // [rsp+3Ch] [rbp-184h]
  CMsgVector2D *v33; // [rsp+40h] [rbp-180h]
  int v34; // [rsp+48h] [rbp-178h]
  CSingleUserRecipientFilter filter; // [rsp+50h] [rbp-170h] BYREF
  unsigned __int64 v36; // [rsp+188h] [rbp-38h]

  v36 = __readfsqword(0x28u);
  if ( pPlayer == 0 || CEntityHandle::operator CEntityInstance *(hHero) == 0 )
    return 0;
  CRecipientFilter::CRecipientFilter(&filter);
  filter._vptr_IRecipientFilter = &off_3FCB0D0;
  CRecipientFilter::AddRecipient(&filter, pPlayer);
  CRecipientFilter::MakeReliable(&filter);
  LODWORD(v29[0]) = hHero->m_Index;
  m_Root = g_HeroList.m_HeroPositionHistory.m_Tree.m_Root;
  if ( m_Root == 0xFFFF )
  {
LABEL_9:
    iNodes = 0;
  }
  else
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v5 = m_Root;
        v6 = m_Root;
        if ( !g_HeroList.m_HeroPositionHistory.m_Tree.m_LessFunc.m_LessFunc(
                v29,
                &g_HeroList.m_HeroPositionHistory.m_Tree.m_Elements.m_pMemory[m_Root].m_Data) )
          break;
        m_Root = g_HeroList.m_HeroPositionHistory.m_Tree.m_Elements.m_pMemory[v5].m_Left;
        if ( m_Root == 0xFFFF )
          goto LABEL_9;
      }
      v7 = !g_HeroList.m_HeroPositionHistory.m_Tree.m_LessFunc.m_LessFunc(
              &g_HeroList.m_HeroPositionHistory.m_Tree.m_Elements.m_pMemory[v6].m_Data,
              v29);
      m_pMemory = g_HeroList.m_HeroPositionHistory.m_Tree.m_Elements.m_pMemory;
      if ( v7 )
        break;
      m_Root = m_pMemory[v6].m_Right;
      if ( m_Root == 0xFFFF )
        goto LABEL_9;
    }
    elem = m_pMemory[v6].m_Data.elem;
    m_Tail = elem->m_pPositionList.m_Tail;
    iNodes = elem->m_pPositionList.m_ElementCount;
    if ( m_Tail != 0 )
    {
      if ( m_Tail == *(m_Tail + 24) )
        goto LABEL_25;
      while ( 1 )
      {
        CDOTAUserMsg_CombatHeroPositions::CDOTAUserMsg_CombatHeroPositions(v29);
        m_pInstance = 0;
        v29[0] = off_40DB910;
        if ( hHero->m_Index + 2 > 1 )
        {
          m_Index_low = LOWORD(hHero->m_Index);
          v14 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(m_Index_low >> 9) & 0x3F];
          if ( v14 != 0 )
          {
            v15 = &v14[m_Index_low & 0x1FF];
            if ( v15 != 0 && hHero->m_Index == v15->m_EHandle.m_Index )
              m_pInstance = v15->m_pInstance;
          }
        }
        v16.m_Data = CEntityInstance::GetEntityIndex(m_pInstance).m_Data;
        v17 = v30;
        m_Data = v16.m_Data;
        v30 |= 1u;
        v18 = floorf(*m_Tail);
        v30 = v17 | 3;
        v32 = v18;
        v19 = *(m_Tail + 4);
        v30 = v17 | 7;
        v20 = v33;
        if ( v33 == 0 )
        {
          v20 = operator new(0x20u);
          CMsgVector2D::CMsgVector2D(v20);
          v33 = v20;
        }
        *(v20 + 4) |= 1u;
        *(v20 + 6) = v19;
        v21 = v33;
        v22 = *(m_Tail + 8);
        v30 |= 4u;
        if ( v33 == 0 )
        {
          v21 = operator new(0x20u);
          CMsgVector2D::CMsgVector2D(v21);
          v33 = v21;
        }
        *(v21 + 4) |= 2u;
        *(v21 + 7) = v22;
        v23 = IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_CombatHeroPositions_t>(bool)::s_hEvent;
        v24 = *(m_Tail + 20);
        v30 |= 8u;
        v34 = v24;
        v25 = g_pGameEventSystem;
        v26 = *(*g_pGameEventSystem + 128LL);
        (*(*g_pNetworkMessages + 96LL))(
          g_pNetworkMessages,
          IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_CombatHeroPositions_t>(bool)::s_hEvent);
        v26(v25, 0, 0, &filter, v23, v29, 48);
        v29[0] = &off_40DB790;
        CDOTAUserMsg_CombatHeroPositions::~CDOTAUserMsg_CombatHeroPositions(v29);
        m_Tail = *(m_Tail + 24);
        if ( m_Tail == 0 )
          break;
        if ( m_Tail == *(m_Tail + 24) )
        {
LABEL_25:
          if ( m_Tail != *(m_Tail + 32) )
            break;
        }
      }
    }
  }
  filter._vptr_IRecipientFilter = &off_3FCB0D0;
  CRecipientFilter::~CRecipientFilter(&filter);
  return iNodes;
}


// CDOTA_CombatLog::GetStartEventIndexForMinute  (line 2385, @0x000000000246dd40, libserver.so)
// calls: CDOTA_CombatLog::GetStartEventIndexForStatsTick
int __fastcall CDOTA_CombatLog::GetStartEventIndexForMinute(CDOTA_CombatLog *const this, int iMinute)
{
  return CDOTA_CombatLog::GetStartEventIndexForStatsTick(this, 6 * iMinute);
}


// CDOTA_CombatLog::GetEndEventIndexForMinute  (line 2392, @0x000000000246dd80, libserver.so)
// calls: CDOTA_CombatLog::GetEndEventIndexForStatsTick
int __fastcall CDOTA_CombatLog::GetEndEventIndexForMinute(CDOTA_CombatLog *const this, int iMinute)
{
  return CDOTA_CombatLog::GetEndEventIndexForStatsTick(this, 6 * iMinute);
}


// CDOTA_CombatLog::GetStartEventIndexForStatsTick  (line 2399, @0x000000000246dd10, libserver.so)  // inlines: operator[]
// callers: CDOTA_CombatLog::GetStartEventIndexForMinute, CDOTA_CombatLog::ProcessPlayerPosition, CDOTA_CombatLog::ProcessTeamLanePerformance
int __fastcall CDOTA_CombatLog::GetStartEventIndexForStatsTick(CDOTA_CombatLog *const this, int iTick)
{
  int result; // eax

  if ( iTick <= 0 )
    return 0;
  result = -1;
  if ( iTick <= this->m_LogTickIndex.m_Size )
    return this->m_LogTickIndex.m_Memory.m_pMemory[iTick - 1];
  return result;
}


// CDOTA_CombatLog::GetEndEventIndexForStatsTick  (line 2415, @0x000000000246dd50, libserver.so)  // inlines: operator[]
// callers: CDOTA_CombatLog::GetEndEventIndexForMinute, CDOTA_CombatLog::ProcessPlayerPosition, CDOTA_CombatLog::ProcessTeamLanePerformance
int __fastcall CDOTA_CombatLog::GetEndEventIndexForStatsTick(CDOTA_CombatLog *const this, int iTick)
{
  int result; // eax

  if ( this->m_LogTickIndex.m_Size > iTick )
    return this->m_LogTickIndex.m_Memory.m_pMemory[iTick] - 1;
  result = -1;
  if ( this->m_LogTickIndex.m_Size == iTick )
    return this->m_vecEntryReferences.m_Size - 1;
  return result;
}


// CDOTA_CombatLog::MatchEventFields  (line 2430, @0x000000000248d350, libserver.so)  // inlines: GetEntryType, operator[]
// calls: CMsgDOTACombatLogEntry::CMsgDOTACombatLogEntry, CDOTA_CombatLog::GetEntry, CDOTA_CombatLog::MatchEventFields, CMsgDOTACombatLogEntry::~CMsgDOTACombatLogEntry, _Unwind_Resume
// callers: CDOTA_CombatLog::FindAllMatchingEvents, CDOTA_CombatLog::GetEventsTillTimeOffset
bool __fastcall CDOTA_CombatLog::MatchEventFields(
        CDOTA_CombatLog *const this,
        int iEventIndex,
        const ICLSearchFields *pSearchFields)
{
  DOTA_COMBATLOG_TYPES m_iType; // eax
  int iEventIndexa; // [rsp+Ch] [rbp-114h]
  _BYTE v8[272]; // [rsp+10h] [rbp-110h] BYREF

  if ( pSearchFields == 0 )
    return 1;
  m_iType = pSearchFields->m_iType;
  if ( m_iType != DOTA_COMBATLOG_TYPES::DOTA_COMBATLOG_INVALID
    && m_iType != this->m_vecEntryReferences.m_Memory.m_pMemory[iEventIndex].m_unType )
  {
    return 0;
  }
  iEventIndexa = iEventIndex;
  CMsgDOTACombatLogEntry::CMsgDOTACombatLogEntry(v8);
  CDOTA_CombatLog::GetEntry(this, iEventIndexa, v8);
  LOBYTE(iEventIndexa) = CDOTA_CombatLog::MatchEventFields(this, v8, pSearchFields);
  CMsgDOTACombatLogEntry::~CMsgDOTACombatLogEntry(v8);
  return iEventIndexa;
}


// CDOTA_CombatLog::MatchEventFields  (line 2444, @0x000000000246dd90, libserver.so)
// callers: CDOTA_RealtimeCombatAnalyzer::RecursiveEvaluateQueryFromEvent, CDOTA_RealtimeCombatAnalyzer::EvaluateTimeblockBeforeTrigger, CDOTA_RealtimeCombatAnalyzer::EvaluateTimeblockAfterTrigger, CDOTA_RealtimeCombatAnalyzer::EvaluateTimeblock, CDOTA_CombatLog::MatchEventFields
bool __fastcall CDOTA_CombatLog::MatchEventFields(
        CDOTA_CombatLog *const this,
        CMsgDOTACombatLogEntry *pEntry,
        const ICLSearchFields *pISearchFields)
{
  DOTA_COMBATLOG_TYPES m_iType; // eax

  m_iType = pISearchFields->m_iType;
  return (m_iType == DOTA_COMBATLOG_TYPES::DOTA_COMBATLOG_INVALID || m_iType == *(pEntry + 6))
      && (*(pISearchFields->_vptr_ICLSearchFields + 2))(pISearchFields, pEntry) == 1;
}


// CDOTA_CombatLog::FindEventsUntilEndOfFrame  (line 2455, @0x000000000248d720, libserver.so)  // inlines: SCLSearchOptions
// calls: CDOTA_CombatLog::GetEventsTillTimeOffset
void __fastcall CDOTA_CombatLog::FindEventsUntilEndOfFrame(
        CDOTA_CombatLog *const this,
        int iStartEvent,
        CUtlVector<int,CUtlMemory<int,int> > *pEventIndicies,
        const ICLSearchFields *pSearchFields)
{
  SCLSearchOptions searchOptions; // [rsp+0h] [rbp-10h] BYREF

  searchOptions.m_flTimeOut = 0.0;
  searchOptions.m_unFlags = 0;
  CDOTA_CombatLog::GetEventsTillTimeOffset(this, iStartEvent, pEventIndicies, &searchOptions, pSearchFields, 0);
}


// CDOTA_CombatLog::GetEventsTillTimeOffset  (line 2463, @0x000000000248d4f0, libserver.so)  // inlines: AddToTail, CopyConstruct<int>, Element, GrowMemory, RemoveAll, operator[]
// calls: CMsgDOTACombatLogEntry::CMsgDOTACombatLogEntry, CDOTA_CombatLog::GetEntry, CDOTA_CombatLog::MatchEventFields, CMsgDOTACombatLogEntry::~CMsgDOTACombatLogEntry, CUtlMemory<int, int>::Grow, _Unwind_Resume
// callers: CDOTA_CombatLog::FindEventsUntilEndOfFrame
void __fastcall CDOTA_CombatLog::GetEventsTillTimeOffset(
        CDOTA_CombatLog *const this,
        int iStartEvent,
        CUtlVector<int,CUtlMemory<int,int> > *pEventIndicies,
        const SCLSearchOptions *pSearchOptions,
        const ICLSearchFields *pSearchFields,
        const ICLSearchFields *pStopFields)
{
  float m_flTimeOut; // xmm1_4
  __int64 v11; // r13
  int v12; // eax
  int *v13; // rax
  int m_Size; // eax
  int *v15; // rax
  float flEndTime; // [rsp+28h] [rbp-218h]
  int v19; // [rsp+2Ch] [rbp-214h]
  _BYTE v20[60]; // [rsp+30h] [rbp-210h] BYREF
  float v21; // [rsp+6Ch] [rbp-1D4h]
  _BYTE v22[60]; // [rsp+120h] [rbp-120h] BYREF
  float v23; // [rsp+15Ch] [rbp-E4h]

  CMsgDOTACombatLogEntry::CMsgDOTACombatLogEntry(v20);
  CDOTA_CombatLog::GetEntry(this, iStartEvent, v20);
  m_flTimeOut = 0.0;
  if ( pSearchOptions != 0 )
    m_flTimeOut = pSearchOptions->m_flTimeOut;
  flEndTime = m_flTimeOut + v21;
  if ( iStartEvent >= this->m_vecEntryReferences.m_Size )
    goto LABEL_10;
  while ( 1 )
  {
    CMsgDOTACombatLogEntry::CMsgDOTACombatLogEntry(v22);
    CDOTA_CombatLog::GetEntry(this, iStartEvent, v22);
    if ( pStopFields == 0 )
    {
      if ( v23 > flEndTime )
        goto LABEL_9;
      goto LABEL_17;
    }
    if ( CDOTA_CombatLog::MatchEventFields(this, iStartEvent, pStopFields) )
      break;
    if ( v23 > flEndTime )
    {
      pEventIndicies->m_Size = 0;
      goto LABEL_9;
    }
LABEL_17:
    if ( CDOTA_CombatLog::MatchEventFields(this, iStartEvent, pSearchFields) && (pSearchOptions->m_unFlags & 1) == 0 )
    {
      m_Size = pEventIndicies->m_Size;
      v19 = pEventIndicies->m_Size;
      if ( pEventIndicies->m_Size == pEventIndicies->m_Memory.m_nAllocationCount )
      {
        CUtlMemory<int,int>::Grow(&pEventIndicies->m_Memory, 1);
        m_Size = pEventIndicies->m_Size;
      }
      pEventIndicies->m_Size = m_Size + 1;
      v15 = &pEventIndicies->m_Memory.m_pMemory[v19];
      if ( v15 != 0 )
        *v15 = iStartEvent;
    }
    ++iStartEvent;
    CMsgDOTACombatLogEntry::~CMsgDOTACombatLogEntry(v22);
    if ( iStartEvent >= this->m_vecEntryReferences.m_Size )
      goto LABEL_10;
  }
  if ( pSearchFields == 0 && (pSearchOptions->m_unFlags & 1) != 0 )
  {
    v11 = pEventIndicies->m_Size;
    v12 = pEventIndicies->m_Size;
    if ( v11 == pEventIndicies->m_Memory.m_nAllocationCount )
    {
      CUtlMemory<int,int>::Grow(&pEventIndicies->m_Memory, 1);
      v12 = pEventIndicies->m_Size;
    }
    pEventIndicies->m_Size = v12 + 1;
    v13 = &pEventIndicies->m_Memory.m_pMemory[v11];
    if ( v13 != 0 )
      *v13 = iStartEvent;
  }
LABEL_9:
  CMsgDOTACombatLogEntry::~CMsgDOTACombatLogEntry(v22);
LABEL_10:
  CMsgDOTACombatLogEntry::~CMsgDOTACombatLogEntry(v20);
}


// CDOTA_CombatLog::FindAllMatchingEvents  (line 2504, @0x000000000248d430, libserver.so)  // inlines: AddToTail, CopyConstruct<int>, Element, GrowMemory, operator[]
// calls: CDOTA_CombatLog::MatchEventFields, CUtlMemory<int, int>::Grow
void __fastcall CDOTA_CombatLog::FindAllMatchingEvents(
        CDOTA_CombatLog *const this,
        CUtlVector<int,CUtlMemory<int,int> > *pEventIndicies,
        const ICLSearchFields *pSearchFields,
        int iStartEvent,
        int iEndEvent)
{
  int v6; // ebx
  __int64 m_Size; // rax
  int v11; // edx
  int *v12; // rax
  CUtlVectorBase<int,CUtlMemory<int,int> >::CAllocator *p_m_Memory; // [rsp+0h] [rbp-40h]
  int v14; // [rsp+Ch] [rbp-34h]

  v6 = iStartEvent;
  if ( iStartEvent <= iEndEvent && iStartEvent < this->m_vecEntryReferences.m_Size )
  {
    p_m_Memory = &pEventIndicies->m_Memory;
    do
    {
      if ( CDOTA_CombatLog::MatchEventFields(this, v6, pSearchFields) )
      {
        m_Size = pEventIndicies->m_Size;
        v11 = pEventIndicies->m_Size;
        if ( m_Size == pEventIndicies->m_Memory.m_nAllocationCount )
        {
          v14 = pEventIndicies->m_Size;
          CUtlMemory<int,int>::Grow(p_m_Memory, 1);
          v11 = pEventIndicies->m_Size;
          m_Size = v14;
        }
        pEventIndicies->m_Size = v11 + 1;
        v12 = &pEventIndicies->m_Memory.m_pMemory[m_Size];
        if ( v12 != 0 )
          *v12 = v6;
      }
      ++v6;
    }
    while ( iEndEvent >= v6 && this->m_vecEntryReferences.m_Size > v6 );
  }
}


// CDOTA_CombatLog::GetEventsForPlayer  (line 2518, @0x000000000248d750, libserver.so)  // inlines: AddToTail, CopyConstruct<int>, Element, FindName, GetStringTable, GrowMemory, operator[]
// calls: CDOTA_PlayerResource::GetSelectedHeroName, CMsgDOTACombatLogEntry::CMsgDOTACombatLogEntry, CDOTA_CombatLog::GetEntry, CMsgDOTACombatLogEntry::~CMsgDOTACombatLogEntry, CUtlMemory<int, int>::Grow, _Unwind_Resume
// callers: CDOTA_CombatLog::ProcessPlayerPosition, CDOTA_CombatLog::ProcessTeamLanePerformance
// globals: DOTA_CombatLog_Record::sm_pStringTableCombatLogNames
void __fastcall CDOTA_CombatLog::GetEventsForPlayer(
        CDOTA_CombatLog *const this,
        int iPlayerID,
        uint32 unEventType,
        int iStartEvent,
        int iEndEvent,
        CUtlVector<int,CUtlMemory<int,int> > *pEventIndicies)
{
  const char *SelectedHeroName; // rax
  int v10; // eax
  __int64 v11; // r12
  int m_Size; // eax
  int *v13; // rax
  int v14; // [rsp+Ch] [rbp-134h]
  uint32 unHeroName; // [rsp+18h] [rbp-128h]
  _BYTE v18[28]; // [rsp+20h] [rbp-120h] BYREF
  int v19; // [rsp+3Ch] [rbp-104h]

  SelectedHeroName = CDOTA_PlayerResource::GetSelectedHeroName(g_pDOTAPlayerResource, iPlayerID);
  unHeroName = -1;
  if ( DOTA_CombatLog_Record::sm_pStringTableCombatLogNames != 0 )
  {
    v10 = (*(DOTA_CombatLog_Record::sm_pStringTableCombatLogNames->_vptr_INetworkStringTable + 12))(
            DOTA_CombatLog_Record::sm_pStringTableCombatLogNames,
            SelectedHeroName);
    if ( v10 == 0xFFFF )
      v10 = -1;
    unHeroName = v10;
  }
  if ( iStartEvent <= iEndEvent && iStartEvent < this->m_vecEntryReferences.m_Size )
  {
    v11 = iStartEvent;
    do
    {
      if ( this->m_vecEntryReferences.m_Memory.m_pMemory[v11].m_unType == unEventType )
      {
        CMsgDOTACombatLogEntry::CMsgDOTACombatLogEntry(v18);
        CDOTA_CombatLog::GetEntry(this, iStartEvent, v18);
        if ( v19 == unHeroName )
        {
          m_Size = pEventIndicies->m_Size;
          v14 = pEventIndicies->m_Size;
          if ( pEventIndicies->m_Size == pEventIndicies->m_Memory.m_nAllocationCount )
          {
            CUtlMemory<int,int>::Grow(&pEventIndicies->m_Memory, 1);
            m_Size = pEventIndicies->m_Size;
          }
          pEventIndicies->m_Size = m_Size + 1;
          v13 = &pEventIndicies->m_Memory.m_pMemory[v14];
          if ( v13 != 0 )
            *v13 = iStartEvent;
        }
        CMsgDOTACombatLogEntry::~CMsgDOTACombatLogEntry(v18);
      }
      if ( iEndEvent < ++iStartEvent )
        break;
      ++v11;
    }
    while ( this->m_vecEntryReferences.m_Size > iStartEvent );
  }
}


// CDOTA_CombatLog::GenerateTimedStats  (line 2541, @0x000000000248e820, libserver.so)  // inlines: AddToTail, Construct<SCombatLogGraphStats>, Element, GetGlobalDOTATeam, GrowMemory, SCombatLogGraphStats, operator[]
// calls: GetGlobalTeam, CDOTA_PlayerResource::GetTeam, CDOTA_PlayerResource::GetNetWorth, CDOTA_PlayerResource::GetTotalEarnedXP, CDOTA_CombatLog::ProcessTeamLanePerformance, CUtlMemory<SCombatLogGraphStats, int>::Grow
// callers: CDOTA_CombatLog::FrameUpdatePostEntityThink
void __fastcall CDOTA_CombatLog::GenerateTimedStats(CDOTA_CombatLog *const this)
{
  int m_Size; // eax
  SCombatLogGraphStats *v3; // rax
  int i; // ebx
  CTeam *GlobalTeam; // rax
  int v6; // r14d
  int v7; // r15d
  int NetWorth; // eax
  int v9; // esi
  CDOTA_PlayerResource *v10; // rdi
  int iTick; // [rsp+4h] [rbp-3Ch]
  __int64 v12; // [rsp+8h] [rbp-38h]

  m_Size = this->m_vecTimedStats.m_Size;
  iTick = m_Size;
  if ( m_Size == this->m_vecTimedStats.m_Memory.m_nAllocationCount )
  {
    CUtlMemory<SCombatLogGraphStats,int>::Grow(&this->m_vecTimedStats.m_Memory, 1);
    m_Size = this->m_vecTimedStats.m_Size;
  }
  this->m_vecTimedStats.m_Size = m_Size + 1;
  v12 = iTick;
  v3 = &this->m_vecTimedStats.m_Memory.m_pMemory[v12];
  if ( v3 != 0 )
  {
    v3->m_nKills = 0;
    v3->m_nTowers = 0;
    v3->m_nBarracks = 0;
    v3->m_nGold = 0;
    v3->m_nXP = 0;
  }
  for ( i = 2; i != 4; ++i )
  {
    GlobalTeam = GetGlobalTeam(i);
    v6 = 2 * (i == 2) - 1;
    if ( GlobalTeam != 0 )
    {
      v7 = 0;
      this->m_vecTimedStats.m_Memory.m_pMemory[iTick].m_nKills += v6 * HIDWORD(GlobalTeam[1].m_pEntity);
      this->m_vecTimedStats.m_Memory.m_pMemory[v12].m_nTowers += v6 * LODWORD(GlobalTeam[1].m_hPrivateScope.m_hScope);
      this->m_vecTimedStats.m_Memory.m_pMemory[v12].m_nBarracks += v6 * HIDWORD(GlobalTeam[1].m_hPrivateScope.m_hScope);
      do
      {
        while ( i != CDOTA_PlayerResource::GetTeam(g_pDOTAPlayerResource, v7) )
        {
          if ( ++v7 == 24 )
            goto LABEL_11;
        }
        NetWorth = CDOTA_PlayerResource::GetNetWorth(g_pDOTAPlayerResource, v7);
        v9 = v7;
        v10 = g_pDOTAPlayerResource;
        ++v7;
        this->m_vecTimedStats.m_Memory.m_pMemory[v12].m_nGold += v6 * NetWorth;
        this->m_vecTimedStats.m_Memory.m_pMemory[v12].m_nXP += v6 * CDOTA_PlayerResource::GetTotalEarnedXP(v10, v9);
      }
      while ( v7 != 24 );
LABEL_11:
      CDOTA_CombatLog::ProcessTeamLanePerformance(this, i, iTick);
    }
  }
}


// CDOTA_CombatLog::GetDiscreteSnapshotIdx  (line 2569, @0x000000000246ddc0, libserver.so)
// calls: floorf
// callers: CDOTA_CombatLog::GetKillSnapshot, CDOTA_CombatLog::GetTowerSnapshot, CDOTA_CombatLog::GetBarracksSnapshot
__int64 __fastcall CDOTA_CombatLog::GetDiscreteSnapshotIdx(CDOTA_CombatLog *const this, float a2, float fFraction)
{
  int m_Size; // ebx
  float v4; // xmm0_4
  __int64 result; // rax

  m_Size = this->m_vecTimedStats.m_Size;
  v4 = floorf(m_Size * a2);
  result = (m_Size - 1);
  if ( v4 <= result )
    return v4;
  return result;
}


// CDOTA_CombatLog::GetInterpolatedSnapshotValues  (line 2575, @0x000000000246ddf0, libserver.so)  // inlines: Clamp<int>
// calls: floorf, ceilf
// callers: CDOTA_CombatLog::GetGoldSnapshot, CDOTA_CombatLog::GetXPSnapshot, CDOTA_CombatLog::GetTeamLocationPerformanceSnapshot
void __fastcall CDOTA_CombatLog::GetInterpolatedSnapshotValues(
        CDOTA_CombatLog *const this,
        float fFraction,
        float *flDesiredSnapshot,
        int *nSnapshotStart,
        int *nSnapshotEnd)
{
  float v9; // xmm1_4
  int m_Size; // r14d
  float v11; // xmm0_4
  int v12; // ecx
  int v13; // ebx
  int v14; // eax
  int v15; // ebx

  v9 = this->m_vecTimedStats.m_Size * fFraction;
  *flDesiredSnapshot = v9;
  m_Size = this->m_vecTimedStats.m_Size;
  v11 = floorf(v9);
  v12 = 0;
  if ( v11 >= 0 )
  {
    v12 = m_Size - 1;
    if ( v11 <= m_Size - 1 )
      v12 = v11;
  }
  *nSnapshotStart = v12;
  v13 = this->m_vecTimedStats.m_Size;
  v14 = ceilf(*flDesiredSnapshot);
  v15 = v13 - 1;
  if ( v14 < 0 )
  {
    v14 = 0;
  }
  else if ( v14 > v15 )
  {
    v14 = v15;
  }
  *nSnapshotEnd = v14;
}


// CDOTA_CombatLog::GetKillSnapshot  (line 2582, @0x000000000246de80, libserver.so)  // inlines: operator[]
// calls: CDOTA_CombatLog::GetDiscreteSnapshotIdx
// callers: CDOTAGCServerSystem::UpdateRealtimeGameState
__int64 __fastcall CDOTA_CombatLog::GetKillSnapshot(CDOTA_CombatLog *const this, float a2, float fFraction)
{
  int DiscreteSnapshotIdx; // eax
  unsigned int v5; // edx

  DiscreteSnapshotIdx = CDOTA_CombatLog::GetDiscreteSnapshotIdx(this, a2, fFraction);
  v5 = 0;
  if ( DiscreteSnapshotIdx >= 0 )
    return this->m_vecTimedStats.m_Memory.m_pMemory[DiscreteSnapshotIdx].m_nKills;
  return v5;
}


// CDOTA_CombatLog::GetTowerSnapshot  (line 2588, @0x000000000246deb0, libserver.so)  // inlines: operator[]
// calls: CDOTA_CombatLog::GetDiscreteSnapshotIdx
// callers: CDOTAGCServerSystem::UpdateRealtimeGameState
__int64 __fastcall CDOTA_CombatLog::GetTowerSnapshot(CDOTA_CombatLog *const this, float a2, float fFraction)
{
  int DiscreteSnapshotIdx; // eax
  unsigned int v5; // edx

  DiscreteSnapshotIdx = CDOTA_CombatLog::GetDiscreteSnapshotIdx(this, a2, fFraction);
  v5 = 0;
  if ( DiscreteSnapshotIdx >= 0 )
    return this->m_vecTimedStats.m_Memory.m_pMemory[DiscreteSnapshotIdx].m_nTowers;
  return v5;
}


// CDOTA_CombatLog::GetBarracksSnapshot  (line 2594, @0x000000000246dee0, libserver.so)  // inlines: operator[]
// calls: CDOTA_CombatLog::GetDiscreteSnapshotIdx
// callers: CDOTAGCServerSystem::UpdateRealtimeGameState
__int64 __fastcall CDOTA_CombatLog::GetBarracksSnapshot(CDOTA_CombatLog *const this, float a2, float fFraction)
{
  int DiscreteSnapshotIdx; // eax
  unsigned int v5; // edx

  DiscreteSnapshotIdx = CDOTA_CombatLog::GetDiscreteSnapshotIdx(this, a2, fFraction);
  v5 = 0;
  if ( DiscreteSnapshotIdx >= 0 )
    return this->m_vecTimedStats.m_Memory.m_pMemory[DiscreteSnapshotIdx].m_nBarracks;
  return v5;
}


// CDOTA_CombatLog::GetGoldSnapshot  (line 2600, @0x000000000246df10, libserver.so)  // inlines: RemapValClamped, clamp<float, float>, operator[]
// calls: CDOTA_CombatLog::GetInterpolatedSnapshotValues
// callers: CDOTAGCServerSystem::UpdateRealtimeGameState
__int64 __fastcall CDOTA_CombatLog::GetGoldSnapshot(CDOTA_CombatLog *const this, float a2, float fFraction)
{
  __m128 v4; // xmm3
  __int64 result; // rax
  SCombatLogGraphStats *m_pMemory; // rax
  float v7; // xmm2_4
  float v8; // xmm1_4
  float m_nGold; // xmm0_4
  float v10; // xmm4_4
  float v11; // xmm2_4
  float v12; // xmm1_4
  float v13; // xmm4_4
  __m128 v14; // xmm4
  __m128 v15; // xmm1
  float flDesiredSnapshot; // [rsp+4h] [rbp-1Ch] BYREF
  int nSnapshotStart; // [rsp+8h] [rbp-18h] BYREF
  int nSnapshotEnd[5]; // [rsp+Ch] [rbp-14h] BYREF

  CDOTA_CombatLog::GetInterpolatedSnapshotValues(this, a2, &flDesiredSnapshot, &nSnapshotStart, nSnapshotEnd);
  if ( nSnapshotStart < 0 )
    return 0;
  result = 0;
  if ( nSnapshotEnd[0] >= 0 )
  {
    m_pMemory = this->m_vecTimedStats.m_Memory.m_pMemory;
    v7 = nSnapshotEnd[0];
    v8 = nSnapshotStart;
    m_nGold = m_pMemory[nSnapshotEnd[0]].m_nGold;
    v4.m128_f32[0] = m_pMemory[nSnapshotStart].m_nGold;
    if ( nSnapshotEnd[0] == nSnapshotStart )
    {
      v14.m128_f32[0] = flDesiredSnapshot - v7;
      v15 = _mm_cmple_ss(0LL, v14);
      return COERCE_FLOAT(_mm_andnot_ps(v15, v4).m128_u32[0] | LODWORD(m_nGold) & v15.m128_i32[0]);
    }
    else
    {
      v10 = flDesiredSnapshot - v8;
      v11 = v7 - v8;
      v12 = 0.0;
      v13 = v10 / v11;
      if ( v13 >= 0.0 )
        v12 = fminf(1.0, v13);
      return (((m_nGold - v4.m128_f32[0]) * v12) + v4.m128_f32[0]);
    }
  }
  return result;
}


// CDOTA_CombatLog::GetXPSnapshot  (line 2608, @0x000000000246dff0, libserver.so)  // inlines: RemapValClamped, clamp<float, float>, operator[]
// calls: CDOTA_CombatLog::GetInterpolatedSnapshotValues
// callers: CDOTAGCServerSystem::UpdateRealtimeGameState
__int64 __fastcall CDOTA_CombatLog::GetXPSnapshot(CDOTA_CombatLog *const this, float a2, float fFraction)
{
  __m128 v4; // xmm3
  __int64 result; // rax
  SCombatLogGraphStats *m_pMemory; // rax
  float v7; // xmm2_4
  float v8; // xmm1_4
  float m_nXP; // xmm0_4
  float v10; // xmm4_4
  float v11; // xmm2_4
  float v12; // xmm1_4
  float v13; // xmm4_4
  __m128 v14; // xmm4
  __m128 v15; // xmm1
  float flDesiredSnapshot; // [rsp+4h] [rbp-1Ch] BYREF
  int nSnapshotStart; // [rsp+8h] [rbp-18h] BYREF
  int nSnapshotEnd[5]; // [rsp+Ch] [rbp-14h] BYREF

  CDOTA_CombatLog::GetInterpolatedSnapshotValues(this, a2, &flDesiredSnapshot, &nSnapshotStart, nSnapshotEnd);
  if ( nSnapshotStart < 0 )
    return 0;
  result = 0;
  if ( nSnapshotEnd[0] >= 0 )
  {
    m_pMemory = this->m_vecTimedStats.m_Memory.m_pMemory;
    v7 = nSnapshotEnd[0];
    v8 = nSnapshotStart;
    m_nXP = m_pMemory[nSnapshotEnd[0]].m_nXP;
    v4.m128_f32[0] = m_pMemory[nSnapshotStart].m_nXP;
    if ( nSnapshotEnd[0] == nSnapshotStart )
    {
      v14.m128_f32[0] = flDesiredSnapshot - v7;
      v15 = _mm_cmple_ss(0LL, v14);
      return COERCE_FLOAT(_mm_andnot_ps(v15, v4).m128_u32[0] | LODWORD(m_nXP) & v15.m128_i32[0]);
    }
    else
    {
      v10 = flDesiredSnapshot - v8;
      v11 = v7 - v8;
      v12 = 0.0;
      v13 = v10 / v11;
      if ( v13 >= 0.0 )
        v12 = fminf(1.0, v13);
      return (((m_nXP - v4.m128_f32[0]) * v12) + v4.m128_f32[0]);
    }
  }
  return result;
}


// CDOTA_CombatLog::GetTeamLocationPerformanceSnapshot  (line 2616, @0x000000000246e0d0, libserver.so)  // inlines: RemapValClamped, clamp<float, float>, operator[]
// calls: CDOTA_CombatLog::GetInterpolatedSnapshotValues
// callers: CDOTAGCServerSystem::UpdateRealtimeGameState
__int64 __fastcall CDOTA_CombatLog::GetTeamLocationPerformanceSnapshot(
        CDOTA_CombatLog *const this,
        float fFraction,
        int nTeam,
        int nLoc,
        int nStat)
{
  __int64 v7; // r12
  __int64 v8; // rbx
  __m128 v9; // xmm3
  __int64 result; // rax
  SCombatLogGraphStats *m_pMemory; // rdx
  float v12; // xmm2_4
  float v13; // xmm1_4
  __int64 v14; // rax
  float v15; // xmm0_4
  float v16; // xmm4_4
  float v17; // xmm2_4
  float v18; // xmm1_4
  float v19; // xmm4_4
  __m128 v20; // xmm4
  __m128 v21; // xmm1
  float flDesiredSnapshot; // [rsp+4h] [rbp-2Ch] BYREF
  int nSnapshotStart; // [rsp+8h] [rbp-28h] BYREF
  int nSnapshotEnd[9]; // [rsp+Ch] [rbp-24h] BYREF

  v7 = nStat;
  v8 = nLoc;
  CDOTA_CombatLog::GetInterpolatedSnapshotValues(this, fFraction, &flDesiredSnapshot, &nSnapshotStart, nSnapshotEnd);
  if ( nSnapshotStart < 0 )
    return 0;
  result = 0;
  if ( nSnapshotEnd[0] >= 0 )
  {
    m_pMemory = this->m_vecTimedStats.m_Memory.m_pMemory;
    v12 = nSnapshotEnd[0];
    v13 = nSnapshotStart;
    v14 = v7 + 4 * (v8 + 6LL * (nTeam != 2)) + 4;
    v15 = *(&m_pMemory[nSnapshotEnd[0]].m_nTowers + v14);
    v9.m128_f32[0] = *(&m_pMemory[nSnapshotStart].m_nTowers + v14);
    if ( nSnapshotEnd[0] == nSnapshotStart )
    {
      v20.m128_f32[0] = flDesiredSnapshot - v12;
      v21 = _mm_cmple_ss(0LL, v20);
      return COERCE_FLOAT(_mm_andnot_ps(v21, v9).m128_u32[0] | LODWORD(v15) & v21.m128_i32[0]);
    }
    else
    {
      v16 = flDesiredSnapshot - v13;
      v17 = v12 - v13;
      v18 = 0.0;
      v19 = v16 / v17;
      if ( v19 >= 0.0 )
        v18 = fminf(1.0, v19);
      return (((v15 - v9.m128_f32[0]) * v18) + v9.m128_f32[0]);
    }
  }
  return result;
}


// CDOTA_CombatLog::RecordKillDamageBreakdown  (line 2632, @0x000000000246e1f0, libserver.so)  // inlines: Add, Add<google::protobuf::RepeatedPtrField<CDOTAUserMsg_StatsKillDetails>::TypeHandler>, Add<google::protobuf::RepeatedPtrField<CDOTAUserMsg_StatsPlayerKillShare>::TypeHandler>, Get, GetEntityIdentity, GetEntryIndex, GetHealthPercent, GetInstance, GetManaPercent, IndexToIdentity, IsValid, LookupEntity, New, ToDOTABaseNPC, ToDOTABaseNPCHero, add_dire_kills, add_kill_shares, add_radiant_kills, operator CBaseEntity*, operator CEntityInstance*, set_damage_to_kill, set_death_time, set_effective_health, set_has_death_time, set_has_health_percent, set_has_kill_share_percent, set_has_killer_id, set_has_mana_percent, set_has_player_id, set_has_player_loc_x, set_has_player_loc_y, set_health_percent, set_kill_share_percent, set_killer_id, set_mana_percent, set_player_id, set_player_loc_x, set_player_loc_y, set_victim_id
// calls: IsAppDota2Main, CDOTA_PlayerResource::GetTeam, operator new, CDOTAUserMsg_StatsKillDetails::CDOTAUserMsg_StatsKillDetails, CDOTAUserMsg_StatsPlayerKillShare::CDOTAUserMsg_StatsPlayerKillShare, CDOTA_PlayerResource::GetPlayerSelectedHeroHandle, google::protobuf::internal::RepeatedPtrFieldBase::Reserve(int), operator delete, _Unwind_Resume, CBaseEntity::GetAbsOrigin, CBaseEntity::GetHealth
// callers: CDOTA_PlayerResource::IncrementDeaths
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_CombatLog::RecordKillDamageBreakdown(
        CDOTA_CombatLog *const this,
        int iVictimID,
        int iKillerID,
        const float *flHeroDamageShare,
        float flOtherDamageShare,
        int iHeroCount,
        int iDamageToKill,
        float flDeathTime,
        int iEffectiveHealth)
{
  int Team; // eax
  google::protobuf::internal::RepeatedPtrFieldBase *m_StatsMsg; // r12
  __int64 v13; // rax
  int v14; // edx
  google::protobuf::internal::RepeatedPtrFieldBase *v15; // rbx
  __int64 v16; // rax
  void **v17; // rdx
  int v18; // r12d
  CDOTAUserMsg_StatsPlayerKillShare *v19; // r14
  __int64 v20; // rax
  void **v21; // rdx
  int v22; // eax
  int v23; // xmm0_4
  CEntityIdentity *v24; // rdx
  CEntityIdentity *v25; // rdx
  __int64 v26; // rax
  int v27; // esi
  void **v28; // rdx
  void **v29; // rdx
  __int64 v30; // rax
  int v31; // edx
  CDOTAUserMsg_StatsPlayerKillShare *v32; // r12
  __int64 v33; // rax
  void **v34; // rdx
  int v35; // eax
  int total_size; // eax
  void **v37; // rdx
  __int64 current_size; // rax
  int allocated_size; // edx
  __int64 v40; // rax
  void **v41; // rdx
  void **elements; // rdx
  const CBaseEntity *m_pInstance; // r15
  const Vector *AbsOrigin; // rax
  vec_t y; // xmm0_4
  vec_t x; // xmm1_4
  int v47; // eax
  int v48; // esi
  __int64 v49; // rdi
  int v50; // eax
  google::protobuf::internal::RepeatedPtrFieldBase *v51; // [rsp+0h] [rbp-70h]
  __int64 v56; // [rsp+18h] [rbp-58h]
  int v59; // [rsp+30h] [rbp-40h]

  if ( IsAppDota2Main() )
  {
    Team = CDOTA_PlayerResource::GetTeam(g_pDOTAPlayerResource, iVictimID);
    m_StatsMsg = this->m_StatsMsg;
    if ( Team == 2 )
    {
      current_size = m_StatsMsg[5].current_size_;
      allocated_size = m_StatsMsg[5].allocated_size_;
      if ( current_size < allocated_size )
      {
        elements = m_StatsMsg[5].elements_;
        m_StatsMsg[5].current_size_ = current_size + 1;
        v15 = elements[current_size];
      }
      else
      {
        if ( allocated_size == m_StatsMsg[5].total_size_ )
          google::protobuf::internal::RepeatedPtrFieldBase::Reserve(m_StatsMsg + 5, allocated_size + 1);
        v15 = operator new(0x48u);
        CDOTAUserMsg_StatsKillDetails::CDOTAUserMsg_StatsKillDetails(v15);
        v40 = m_StatsMsg[5].current_size_;
        v41 = m_StatsMsg[5].elements_;
        ++m_StatsMsg[5].allocated_size_;
        m_StatsMsg[5].current_size_ = v40 + 1;
        v41[v40] = v15;
      }
    }
    else
    {
      v13 = m_StatsMsg[4].current_size_;
      v14 = m_StatsMsg[4].allocated_size_;
      if ( v13 < v14 )
      {
        v29 = m_StatsMsg[4].elements_;
        m_StatsMsg[4].current_size_ = v13 + 1;
        v15 = v29[v13];
      }
      else
      {
        if ( v14 == m_StatsMsg[4].total_size_ )
          google::protobuf::internal::RepeatedPtrFieldBase::Reserve(m_StatsMsg + 4, v14 + 1);
        v15 = operator new(0x48u);
        CDOTAUserMsg_StatsKillDetails::CDOTAUserMsg_StatsKillDetails(v15);
        v16 = m_StatsMsg[4].current_size_;
        v17 = m_StatsMsg[4].elements_;
        ++m_StatsMsg[4].allocated_size_;
        m_StatsMsg[4].current_size_ = v16 + 1;
        v17[v16] = v15;
      }
    }
    v18 = 0;
    v51 = v15 + 1;
    if ( iHeroCount > 0 )
    {
      do
      {
        v26 = v15[1].current_size_;
        v27 = v15[1].allocated_size_;
        if ( v26 >= v27 )
        {
          if ( v27 == v15[1].total_size_ )
            google::protobuf::internal::RepeatedPtrFieldBase::Reserve(v51, v27 + 1);
          v19 = operator new(0x30u);
          CDOTAUserMsg_StatsPlayerKillShare::CDOTAUserMsg_StatsPlayerKillShare(v19);
          v20 = v15[1].current_size_;
          v21 = v15[1].elements_;
          ++v15[1].allocated_size_;
          v15[1].current_size_ = v20 + 1;
          v21[v20] = v19;
        }
        else
        {
          v28 = v15[1].elements_;
          v15[1].current_size_ = v26 + 1;
          v19 = v28[v26];
        }
        v22 = *(v19 + 4);
        *(v19 + 6) = v18;
        *(v19 + 4) = v22 | 1;
        v23 = *flHeroDamageShare;
        *(v19 + 4) = v22 | 3;
        *(v19 + 7) = v23;
        CDOTA_PlayerResource::GetPlayerSelectedHeroHandle(g_pDOTAPlayerResource, v18);
        if ( (v59 + 2) > 1 )
        {
          v24 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v59 >> 9) & 0x3F];
          if ( v24 != 0 )
          {
            v25 = &v24[v59 & 0x1FF];
            if ( v25 != 0 && v59 == v25->m_EHandle.m_Index )
            {
              m_pInstance = v25->m_pInstance;
              if ( v25->m_pInstance != 0
                && m_pInstance->m_bIsDOTANPC
                && (m_pInstance[2].m_hEffectEntity.m_Value.m_Index & 1) != 0 )
              {
                AbsOrigin = CBaseEntity::GetAbsOrigin(v25->m_pInstance);
                y = AbsOrigin->y;
                x = AbsOrigin->x;
                LODWORD(AbsOrigin) = *(v19 + 4);
                *(v19 + 9) = y;
                *(v19 + 8) = x;
                *(v19 + 4) = AbsOrigin | 0xC;
                v56 = 100LL * CBaseEntity::GetHealth(m_pInstance);
                v47 = (*(m_pInstance->_vptr_IHandleEntity + 156))(m_pInstance);
                v48 = *(v19 + 4);
                v49 = v47;
                if ( v47 <= 0 )
                  v49 = 1;
                *(v19 + 4) = v48 | 0x10;
                *(v19 + 10) = (v56 / v49);
                v50 = ((100.0 * *&m_pInstance[2].m_DamageModifiers.m_Memory.m_nAllocationCount)
                     / *&m_pInstance[2].m_DamageModifiers.m_Head);
                *(v19 + 4) = v48 | 0x30;
                *(v19 + 11) = v50;
              }
            }
          }
        }
        ++v18;
        ++flHeroDamageShare;
      }
      while ( v18 != iHeroCount );
    }
    v30 = v15[1].current_size_;
    v31 = v15[1].allocated_size_;
    if ( v30 < v31 )
    {
      v37 = v15[1].elements_;
      v15[1].current_size_ = v30 + 1;
      v32 = v37[v30];
    }
    else
    {
      if ( v31 == v15[1].total_size_ )
        google::protobuf::internal::RepeatedPtrFieldBase::Reserve(v51, v31 + 1);
      v32 = operator new(0x30u);
      CDOTAUserMsg_StatsPlayerKillShare::CDOTAUserMsg_StatsPlayerKillShare(v32);
      v33 = v15[1].current_size_;
      v34 = v15[1].elements_;
      ++v15[1].allocated_size_;
      v15[1].current_size_ = v33 + 1;
      v34[v33] = v32;
    }
    v35 = *(v32 + 4);
    *(v32 + 6) = -1;
    *(v32 + 7) = flOtherDamageShare;
    *(v32 + 4) = v35 | 3;
    v15[2].total_size_ = iKillerID;
    total_size = v15->total_size_;
    v15[2].current_size_ = iEffectiveHealth;
    *&v15[2].allocated_size_ = flDeathTime;
    LODWORD(v15[2].elements_) = iVictimID;
    v15->total_size_ = total_size | 0x3D;
    HIDWORD(v15[2].elements_) = iDamageToKill;
  }
}


// CDOTA_CombatLog::GenerateExperimentalTimedStats  (line 2670, @0x000000000248dde0, libserver.so)  // inlines: Add, Add<google::protobuf::RepeatedPtrField<CDOTAUserMsg_StatsHeroMinuteDetails>::TypeHandler>, Add<google::protobuf::RepeatedPtrField<CDOTAUserMsg_StatsTeamMinuteDetails>::TypeHandler>, CopyArray, GetGlobalDOTATeam, MoveArray, New, Reserve, add_damage_absorbed, add_damage_done, add_dire_stats, add_mana_spent, add_player_stats, add_radiant_stats, memcpy, mutable_position_info, operator(), set_available_lane_creep_gold, set_balance_kill_value, set_balance_tower_value, set_balance_xp_value, set_barrack_kills, set_claimed_farm, set_harvested_creep_gold, set_has_available_lane_creep_gold, set_has_balance_kill_value, set_has_balance_tower_value, set_has_balance_xp_value, set_has_barrack_kills, set_has_claimed_farm, set_has_harvested_creep_gold, set_has_hero_damage, set_has_hero_kills, set_has_last_hits, set_has_net_worth, set_has_position_info, set_has_runes_collected, set_has_total_xp, set_has_tower_damage, set_has_tower_kills, set_has_tps_used, set_has_wards_placed, set_hero_damage, set_hero_kills, set_last_hits, set_net_worth, set_runes_collected, set_total_xp, set_tower_damage, set_tower_kills, set_tps_used, set_wards_placed
// calls: GetGlobalTeam, operator new, CDOTAUserMsg_StatsTeamMinuteDetails::CDOTAUserMsg_StatsTeamMinuteDetails, CDOTA_PlayerResource::GetTeam, CDOTA_PlayerResource::GetKills, CDOTA_PlayerResource::GetNetWorth, CDOTA_PlayerResource::GetTotalEarnedXP, CDOTAUserMsg_StatsHeroMinuteDetails::CDOTAUserMsg_StatsHeroMinuteDetails, CDOTA_PlayerResource::GetLastHits, CDOTA_PlayerResource::GetRawPlayerDamage, CDOTA_PlayerResource::GetRawTowerDamage, CDOTA_CombatLog::ProcessPlayerPosition (27 total)
// callers: CDOTA_CombatLog::FrameUpdatePostEntityThink
void __fastcall CDOTA_CombatLog::GenerateExperimentalTimedStats(CDOTA_CombatLog *const this, int iMinute)
{
  google::protobuf::internal::RepeatedPtrFieldBase *m_StatsMsg; // rbx
  __int64 current_size; // rax
  int allocated_size; // edx
  google::protobuf::internal::RepeatedPtrFieldBase *v5; // r15
  __int64 v6; // rax
  void **v7; // rdx
  int v8; // r12d
  int TotalEarnedXP; // eax
  int v10; // edx
  __int64 v11; // rax
  CDOTAUserMsg_StatsHeroPositionInfo **v12; // rbx
  __int64 v13; // rax
  void **v14; // rdx
  int LastHits; // eax
  const CDOTA_PlayerResource *v16; // rdi
  int Kills; // eax
  CDOTA_PlayerResource *v18; // rdi
  int RawPlayerDamage; // eax
  CDOTA_PlayerResource *v20; // rdi
  int RawTowerDamage; // eax
  int v22; // edx
  CDOTAUserMsg_StatsHeroPositionInfo *v23; // rcx
  int v24; // eax
  CDOTA_PlayerResource *v25; // rdi
  int NetWorth; // eax
  CDOTA_PlayerResource *v27; // rdi
  float ClaimedFarm; // xmm0_4
  float v29; // xmm0_4
  CDOTA_PlayerResource *v30; // rdi
  int TotalWardsPlaced; // eax
  CDOTA_PlayerResource *v32; // rdi
  int RunePickups; // eax
  CDOTA_PlayerResource *v34; // rdi
  int TeleportsUsed; // eax
  int v36; // r15d
  int ManaSpent; // eax
  __int64 v38; // rcx
  int v39; // r14d
  CDOTAUserMsg_StatsHeroPositionInfo *v40; // rax
  int v41; // eax
  int v42; // ecx
  void **v43; // rdx
  int total_size; // eax
  float m_Value; // xmm0_4
  int v46; // edx
  int v47; // edx
  CDOTA_PlayerResource *v48; // rdi
  float AvailableTeamLaneGold; // xmm0_4
  int v50; // r14d
  CDOTAUserMsg_StatsHeroPositionInfo **v51; // r15
  int TotalDamageDoneToHero; // eax
  __int64 v53; // rdx
  int v54; // ebx
  CDOTAUserMsg_StatsHeroPositionInfo *v55; // rax
  int DamageAbsorbedFromSource; // eax
  __int64 v57; // rdx
  int v58; // ebx
  CDOTAUserMsg_StatsHeroPositionInfo *v59; // rax
  int v60; // eax
  int v61; // edx
  __int64 v62; // rdx
  CDOTAUserMsg_StatsHeroPositionInfo *v63; // rax
  int v64; // eax
  int v65; // edx
  void **elements; // rdx
  CDOTAUserMsg_StatsHeroPositionInfo *v67; // r14
  google::protobuf::internal::RepeatedPtrFieldBase *v68; // rbx
  __int64 v69; // rax
  int v70; // edx
  __int64 v71; // rax
  void **v72; // rdx
  void **v73; // rdx
  google::protobuf::internal::RepeatedPtrFieldBase *v74; // [rsp+8h] [rbp-78h]
  CDOTATeam *pTeam; // [rsp+10h] [rbp-70h]
  google::protobuf::internal::RepeatedPtrFieldBase *v76; // [rsp+18h] [rbp-68h]
  int teamIdx; // [rsp+24h] [rbp-5Ch]
  int v80; // [rsp+34h] [rbp-4Ch]
  int iXPTotal; // [rsp+38h] [rbp-48h]
  int iGoldTotal; // [rsp+3Ch] [rbp-44h]
  CDOTAUserMsg_StatsHeroPositionInfo *src; // [rsp+40h] [rbp-40h]
  CDOTAUserMsg_StatsHeroPositionInfo *srca; // [rsp+40h] [rbp-40h]
  CDOTAUserMsg_StatsHeroPositionInfo *srcb; // [rsp+40h] [rbp-40h]
  int iKillTotal; // [rsp+48h] [rbp-38h]
  int iTeam; // [rsp+4Ch] [rbp-34h]

  teamIdx = 0;
  v80 = iMinute % 10;
  do
  {
    if ( teamIdx != 0 )
    {
      pTeam = GetGlobalTeam(3);
      m_StatsMsg = this->m_StatsMsg;
      current_size = m_StatsMsg[3].current_size_;
      allocated_size = m_StatsMsg[3].allocated_size_;
      if ( current_size < allocated_size )
      {
        elements = m_StatsMsg[3].elements_;
        m_StatsMsg[3].current_size_ = current_size + 1;
        v5 = elements[current_size];
      }
      else
      {
        if ( allocated_size == m_StatsMsg[3].total_size_ )
          google::protobuf::internal::RepeatedPtrFieldBase::Reserve(m_StatsMsg + 3, allocated_size + 1);
        v5 = operator new(0x68u);
        CDOTAUserMsg_StatsTeamMinuteDetails::CDOTAUserMsg_StatsTeamMinuteDetails(v5);
        v6 = m_StatsMsg[3].current_size_;
        v7 = m_StatsMsg[3].elements_;
        ++m_StatsMsg[3].allocated_size_;
        m_StatsMsg[3].current_size_ = v6 + 1;
        v7[v6] = v5;
      }
      iTeam = 3;
    }
    else
    {
      pTeam = GetGlobalTeam(2);
      v68 = this->m_StatsMsg;
      v69 = v68[2].current_size_;
      v70 = v68[2].allocated_size_;
      if ( v69 < v70 )
      {
        v73 = v68[2].elements_;
        v68[2].current_size_ = v69 + 1;
        v5 = v73[v69];
      }
      else
      {
        if ( v70 == v68[2].total_size_ )
          google::protobuf::internal::RepeatedPtrFieldBase::Reserve(v68 + 2, v70 + 1);
        v5 = operator new(0x68u);
        CDOTAUserMsg_StatsTeamMinuteDetails::CDOTAUserMsg_StatsTeamMinuteDetails(v5);
        v71 = v68[2].current_size_;
        v72 = v68[2].elements_;
        ++v68[2].allocated_size_;
        v68[2].current_size_ = v71 + 1;
        v72[v71] = v5;
      }
      iTeam = 2;
    }
    v8 = 0;
    iXPTotal = 0;
    iGoldTotal = 0;
    iKillTotal = 0;
    v74 = v5 + 1;
    do
    {
      if ( iTeam == CDOTA_PlayerResource::GetTeam(g_pDOTAPlayerResource, v8) )
      {
        iKillTotal += CDOTA_PlayerResource::GetKills(g_pDOTAPlayerResource, v8);
        iGoldTotal += CDOTA_PlayerResource::GetNetWorth(g_pDOTAPlayerResource, v8);
        TotalEarnedXP = CDOTA_PlayerResource::GetTotalEarnedXP(g_pDOTAPlayerResource, v8);
        v10 = v5[1].allocated_size_;
        iXPTotal += TotalEarnedXP;
        v11 = v5[1].current_size_;
        if ( v11 < v10 )
        {
          v43 = v5[1].elements_;
          v5[1].current_size_ = v11 + 1;
          v12 = v43[v11];
        }
        else
        {
          if ( v10 == v5[1].total_size_ )
            google::protobuf::internal::RepeatedPtrFieldBase::Reserve(v74, v10 + 1);
          v12 = operator new(0x80u);
          CDOTAUserMsg_StatsHeroMinuteDetails::CDOTAUserMsg_StatsHeroMinuteDetails(v12);
          v13 = v5[1].current_size_;
          v14 = v5[1].elements_;
          ++v5[1].allocated_size_;
          v5[1].current_size_ = v13 + 1;
          v14[v13] = v12;
        }
        LastHits = CDOTA_PlayerResource::GetLastHits(g_pDOTAPlayerResource, v8);
        v16 = g_pDOTAPlayerResource;
        *(v12 + 4) |= 1u;
        *(v12 + 6) = LastHits;
        Kills = CDOTA_PlayerResource::GetKills(v16, v8);
        v18 = g_pDOTAPlayerResource;
        *(v12 + 4) |= 2u;
        *(v12 + 7) = Kills;
        RawPlayerDamage = CDOTA_PlayerResource::GetRawPlayerDamage(v18, v8);
        v20 = g_pDOTAPlayerResource;
        *(v12 + 4) |= 4u;
        *(v12 + 8) = RawPlayerDamage;
        RawTowerDamage = CDOTA_PlayerResource::GetRawTowerDamage(v20, v8);
        v22 = *(v12 + 4);
        v23 = v12[5];
        *(v12 + 9) = RawTowerDamage;
        *(v12 + 4) = v22 | 0x18;
        if ( v23 == 0 )
        {
          v67 = operator new(0x38u);
          CDOTAUserMsg_StatsHeroPositionInfo::CDOTAUserMsg_StatsHeroPositionInfo(v67);
          v12[5] = v67;
          v23 = v67;
        }
        CDOTA_CombatLog::ProcessPlayerPosition(this, v8, iMinute, v23);
        v24 = CDOTA_PlayerResource::GetTotalEarnedXP(g_pDOTAPlayerResource, v8);
        v25 = g_pDOTAPlayerResource;
        *(v12 + 4) |= 0x20u;
        *(v12 + 12) = v24;
        NetWorth = CDOTA_PlayerResource::GetNetWorth(v25, v8);
        v27 = g_pDOTAPlayerResource;
        *(v12 + 4) |= 0x40u;
        *(v12 + 13) = NetWorth;
        ClaimedFarm = CDOTA_PlayerResource::GetClaimedFarm(v27, v8, 1);
        *(v12 + 4) |= 0x80u;
        *(v12 + 14) = ClaimedFarm;
        if ( iMinute > 0 && v80 == 0 )
        {
          v29 = CDOTA_PlayerResource::GetClaimedFarm(g_pDOTAPlayerResource, v8, 0);
          v30 = g_pDOTAPlayerResource;
          *(v12 + 4) |= 0x100u;
          *(v12 + 15) = v29;
          TotalWardsPlaced = CDOTA_PlayerResource::GetTotalWardsPlaced(v30, v8);
          v32 = g_pDOTAPlayerResource;
          *(v12 + 4) |= 0x200u;
          *(v12 + 16) = TotalWardsPlaced;
          RunePickups = CDOTA_PlayerResource::GetRunePickups(v32, v8);
          v34 = g_pDOTAPlayerResource;
          *(v12 + 4) |= 0x400u;
          *(v12 + 17) = RunePickups;
          TeleportsUsed = CDOTA_PlayerResource::GetTeleportsUsed(v34, v8);
          v76 = v5;
          v36 = 0;
          *(v12 + 4) |= 0x800u;
          *(v12 + 30) = TeleportsUsed;
          do
          {
            ManaSpent = CDOTA_PlayerResource::GetManaSpent(g_pDOTAPlayerResource, v8, v36);
            v38 = *(v12 + 20);
            v39 = ManaSpent;
            v40 = v12[9];
            if ( v38 == *(v12 + 21) )
            {
              src = v12[9];
              v41 = v38 + 1;
              v42 = 2 * v38;
              if ( v41 >= v42 )
                v42 = v41;
              if ( v42 < 4 )
                v42 = 4;
              *(v12 + 21) = v42;
              v40 = operator new[](4LL * v42);
              v12[9] = v40;
              if ( src != 0 )
              {
                memcpy(v40, src, 4LL * *(v12 + 20));
                operator delete[](src);
                v40 = v12[9];
              }
              v38 = *(v12 + 20);
            }
            ++v36;
            *(v12 + 20) = v38 + 1;
            *(v40 + v38) = v39;
          }
          while ( v36 != 6 );
          v50 = 0;
          v51 = v12;
          while ( 1 )
          {
            DamageAbsorbedFromSource = CDOTA_PlayerResource::GetDamageAbsorbedFromSource(g_pDOTAPlayerResource, v8, v50);
            v57 = *(v51 + 24);
            v58 = DamageAbsorbedFromSource;
            v59 = v51[11];
            if ( v57 != *(v51 + 25) )
              goto LABEL_33;
            srca = v51[11];
            v60 = v57 + 1;
            v61 = 2 * v57;
            if ( v60 >= v61 )
              v61 = v60;
            if ( v61 < 4 )
              v61 = 4;
            *(v51 + 25) = v61;
            v59 = operator new[](4LL * v61);
            v51[11] = v59;
            v57 = *(v51 + 24);
            if ( srca != 0 )
            {
              memcpy(v59, srca, 4 * v57);
              operator delete[](srca);
              v62 = *(v51 + 24);
              v63 = v51[11];
              *(v51 + 24) = v62 + 1;
              *(v63 + v62) = v58;
              if ( v50 == 24 )
              {
LABEL_43:
                v5 = v76;
                break;
              }
            }
            else
            {
LABEL_33:
              *(v51 + 24) = v57 + 1;
              *(v59 + v57) = v58;
              if ( v50 == 24 )
                goto LABEL_43;
            }
            TotalDamageDoneToHero = CDOTA_PlayerResource::GetTotalDamageDoneToHero(g_pDOTAPlayerResource, v8, v50);
            v53 = *(v51 + 28);
            v54 = TotalDamageDoneToHero;
            v55 = v51[13];
            if ( v53 == *(v51 + 29) )
            {
              srcb = v51[13];
              v64 = v53 + 1;
              v65 = 2 * v53;
              if ( v64 >= v65 )
                v65 = v64;
              if ( v65 < 4 )
                v65 = 4;
              *(v51 + 29) = v65;
              v55 = operator new[](4LL * v65);
              v51[13] = v55;
              v53 = *(v51 + 28);
              if ( srcb != 0 )
              {
                memcpy(v55, srcb, 4 * v53);
                operator delete[](srcb);
                v55 = v51[13];
                v53 = *(v51 + 28);
              }
            }
            ++v50;
            *(v51 + 28) = v53 + 1;
            *(v55 + v53) = v54;
          }
        }
      }
      ++v8;
    }
    while ( v8 != 24 );
    total_size = v5->total_size_;
    v5->total_size_ = total_size | 0x10;
    v5[2].allocated_size_ = (iKillTotal * 100.0);
    m_Value = pTeam->m_iTowerKills.m_Value;
    v5->total_size_ = total_size | 0x30;
    v5[2].total_size_ = (m_Value * 300.0);
    *(&v5[2].total_size_ + 1) = (pTeam->m_iBarracksKills.m_Value * 500.0);
    LODWORD(v5[3].elements_) = (iGoldTotal * 0.1);
    v5->total_size_ = total_size | 0x1F0;
    HIDWORD(v5[3].elements_) = (iXPTotal * 0.1);
    v46 = pTeam->m_iTowerKills.m_Value;
    v5->total_size_ = total_size | 0x1F2;
    LODWORD(v5[2].elements_) = v46;
    v47 = pTeam->m_iBarracksKills.m_Value;
    v5->total_size_ = total_size | 0x1F6;
    v48 = g_pDOTAPlayerResource;
    HIDWORD(v5[2].elements_) = v47;
    AvailableTeamLaneGold = CDOTA_PlayerResource::GetAvailableTeamLaneGold(v48, iTeam);
    ++teamIdx;
    v5->total_size_ |= 8u;
    v5[2].current_size_ = AvailableTeamLaneGold;
  }
  while ( teamIdx != 2 );
}


// CDOTA_CombatLog::ProcessPlayerPosition  (line 2747, @0x000000000248d8c0, libserver.so)  // inlines: Add, Add<google::protobuf::RepeatedPtrField<CDOTAUserMsg_StatsHeroPositionInfo_PositionPair>::TypeHandler>, CUtlMemory, CUtlVector, CUtlVectorBase, DOTAGameRules, FastSqrt, GetBadGuysFountain, GetEndEventIndexForMinute, GetGoodGuysFountain, GetStartEventIndexForMinute, Length2D, New, Purge, RemoveAll, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, add_position_details, operator-, operator=, set_average_position, set_has_average_position, set_has_position_category, set_has_position_count, set_position_category, set_position_count, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTAGamerules::GetFountain, CDOTA_CombatLog::GetStartEventIndexForStatsTick, CDOTA_CombatLog::GetEndEventIndexForStatsTick, CBaseEntity::GetAbsOrigin, CDOTA_CombatLog::GetEventsForPlayer, CDOTA_PlayerResource::GetTeam, CMsgDOTACombatLogEntry::CMsgDOTACombatLogEntry, CDOTA_CombatLog::GetEntry, CDOTAGamerules::CategorizePosition, CMsgDOTACombatLogEntry::~CMsgDOTACombatLogEntry, operator new, CDOTAUserMsg_StatsHeroPositionInfo_PositionPair::CDOTAUserMsg_StatsHeroPositionInfo_PositionPair (17 total)
// callers: CDOTA_CombatLog::GenerateExperimentalTimedStats
void __fastcall CDOTA_CombatLog::ProcessPlayerPosition(
        CDOTA_CombatLog *const this,
        int iPlayerID,
        int iMinute,
        CDOTAUserMsg_StatsHeroPositionInfo *pPlayerPositionInfo)
{
  int v6; // r13d
  int StartEventIndexForStatsTick; // r12d
  int EndEventIndexForStatsTick; // r13d
  vec_t z; // eax
  CDOTA_BaseNPC *Fountain; // rax
  CDOTA_BaseNPC *v11; // rax
  int *v12; // rax
  __int64 v13; // r13
  int v14; // ebx
  DOTA_POSITION_CATEGORY v15; // eax
  __int64 i; // r12
  CDOTAUserMsg_StatsHeroPositionInfo_PositionPair *v17; // r15
  __int64 v18; // rax
  __int64 v19; // rdx
  int v20; // eax
  int v21; // r13d
  __int64 v22; // rax
  int v23; // edx
  __int64 v24; // rdx
  float v25; // xmm0_4
  __int128 v26; // [rsp+0h] [rbp-200h]
  int Team; // [rsp+24h] [rbp-1DCh]
  float flDistToEnemy; // [rsp+30h] [rbp-1D0h]
  float flDistToHome; // [rsp+40h] [rbp-1C0h]
  float flPositionSum; // [rsp+48h] [rbp-1B8h]
  Vector vecFountainPos[2]; // [rsp+60h] [rbp-1A0h] BYREF
  CUtlVector<int,CUtlMemory<int,int> > eventIndicies; // [rsp+80h] [rbp-180h] BYREF
  int nPositionCategoryCount[15]; // [rsp+A0h] [rbp-160h] BYREF
  int v36; // [rsp+DCh] [rbp-124h] BYREF
  _BYTE v37[80]; // [rsp+E0h] [rbp-120h] BYREF
  float v38; // [rsp+130h] [rbp-D0h]
  float v39; // [rsp+134h] [rbp-CCh]

  if ( CDOTAGamerules::GetFountain(g_pGameRules, 2) != 0 && CDOTAGamerules::GetFountain(g_pGameRules, 3) != 0 )
  {
    v6 = 6 * iMinute;
    StartEventIndexForStatsTick = CDOTA_CombatLog::GetStartEventIndexForStatsTick(this, 6 * iMinute);
    EndEventIndexForStatsTick = CDOTA_CombatLog::GetEndEventIndexForStatsTick(this, v6);
    if ( EndEventIndexForStatsTick != -1 && StartEventIndexForStatsTick != -1 )
    {
      z = vec3_origin.z;
      *&vecFountainPos[0].x = *&vec3_origin.x;
      vecFountainPos[0].z = z;
      *&vecFountainPos[1].x = *&vec3_origin.x;
      vecFountainPos[1].z = z;
      if ( g_pGameRules != 0 )
      {
        if ( CDOTAGamerules::GetFountain(g_pGameRules, 2) != 0 )
        {
          Fountain = CDOTAGamerules::GetFountain(g_pGameRules, 2);
          vecFountainPos[0] = *CBaseEntity::GetAbsOrigin(Fountain);
        }
        if ( CDOTAGamerules::GetFountain(g_pGameRules, 3) != 0 )
        {
          v11 = CDOTAGamerules::GetFountain(g_pGameRules, 3);
          vecFountainPos[1] = *CBaseEntity::GetAbsOrigin(v11);
        }
      }
      eventIndicies.m_Size = 0;
      eventIndicies.m_Memory.m_pMemory = 0;
      eventIndicies.m_Memory.m_nAllocationCount = 0;
      eventIndicies.m_Memory.m_nGrowSize = 0;
      *(&v26 + 1) = &eventIndicies;
      CDOTA_CombatLog::GetEventsForPlayer(
        this,
        iPlayerID,
        7u,
        StartEventIndexForStatsTick,
        EndEventIndexForStatsTick,
        &eventIndicies);
      Team = CDOTA_PlayerResource::GetTeam(g_pDOTAPlayerResource, iPlayerID);
      v12 = nPositionCategoryCount;
      do
        *v12++ = 0;
      while ( v12 != &v36 );
      if ( eventIndicies.m_Size <= 0 )
      {
        v14 = 0;
        flPositionSum = 0.0;
      }
      else
      {
        v13 = 0;
        flPositionSum = 0.0;
        v14 = 0;
        do
        {
          CMsgDOTACombatLogEntry::CMsgDOTACombatLogEntry(v37);
          CDOTA_CombatLog::GetEntry(this, eventIndicies.m_Memory.m_pMemory[v13], v37);
          flDistToHome = fsqrt(
                           ((v38 - vecFountainPos[Team != 2].x) * (v38 - vecFountainPos[Team != 2].x))
                         + ((v39 - vecFountainPos[Team != 2].y) * (v39 - vecFountainPos[Team != 2].y)));
          flDistToEnemy = fsqrt(
                            ((v38 - vecFountainPos[Team == 2].x) * (v38 - vecFountainPos[Team == 2].x))
                          + ((v39 - vecFountainPos[Team == 2].y) * (v39 - vecFountainPos[Team == 2].y)));
          v15 = CDOTAGamerules::CategorizePosition(g_pGameRules, v26);
          ++v14;
          ++nPositionCategoryCount[v15];
          if ( flDistToHome > 0.0 )
            flPositionSum = flPositionSum + (flDistToHome / (flDistToEnemy + flDistToHome));
          ++v13;
          CMsgDOTACombatLogEntry::~CMsgDOTACombatLogEntry(v37);
        }
        while ( eventIndicies.m_Size > v14 );
      }
      for ( i = 0; i != 15; ++i )
      {
        v21 = nPositionCategoryCount[i];
        if ( v21 > 0 )
        {
          v22 = *(pPlayerPositionInfo + 8);
          v23 = *(pPlayerPositionInfo + 9);
          if ( v22 >= v23 )
          {
            if ( v23 == *(pPlayerPositionInfo + 10) )
              google::protobuf::internal::RepeatedPtrFieldBase::Reserve(pPlayerPositionInfo + 1, v23 + 1);
            v17 = operator new(0x20u);
            CDOTAUserMsg_StatsHeroPositionInfo_PositionPair::CDOTAUserMsg_StatsHeroPositionInfo_PositionPair(v17);
            v18 = *(pPlayerPositionInfo + 8);
            v19 = *(pPlayerPositionInfo + 3);
            ++*(pPlayerPositionInfo + 9);
            *(pPlayerPositionInfo + 8) = v18 + 1;
            *(v19 + 8 * v18) = v17;
          }
          else
          {
            v24 = *(pPlayerPositionInfo + 3);
            *(pPlayerPositionInfo + 8) = v22 + 1;
            v17 = *(v24 + 8 * v22);
          }
          v20 = *(v17 + 4);
          *(v17 + 6) = i;
          *(v17 + 7) = v21;
          *(v17 + 4) = v20 | 3;
        }
      }
      v25 = 0.0;
      if ( v14 != 0 )
        v25 = flPositionSum / v14;
      eventIndicies.m_Size = 0;
      *(pPlayerPositionInfo + 4) |= 1u;
      *(pPlayerPositionInfo + 12) = v25;
      if ( (eventIndicies.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      {
        CUtlMemory<int,int>::Purge((*(&v26 + 1) + 8LL));
        if ( (eventIndicies.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
          CUtlMemory<int,int>::Purge((*(&v26 + 1) + 8LL));
      }
    }
  }
}


// CDOTA_CombatLog::ProcessTeamLanePerformance  (line 2827, @0x000000000248e4d0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Purge, RemoveAll, Vector, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTA_CombatLog::GetStartEventIndexForStatsTick, CDOTA_CombatLog::GetEndEventIndexForStatsTick, CDOTA_PlayerResource::GetTeam, CDOTA_CombatLog::GetEventsForPlayer, CMsgDOTACombatLogEntry::~CMsgDOTACombatLogEntry, CMsgDOTACombatLogEntry::CMsgDOTACombatLogEntry, CDOTA_CombatLog::GetEntry, CDOTAGamerules::CategorizePosition, CUtlMemory<int, int>::Purge, CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CDOTA_CombatLog::GenerateTimedStats
// globals: CSWTCH.25307, CSWTCH.25306
void __fastcall CDOTA_CombatLog::ProcessTeamLanePerformance(CDOTA_CombatLog *const this, int iTeam, int iTick)
{
  int StartEventIndexForStatsTick; // r15d
  bool v7; // r12
  int v8; // esi
  unsigned __int64 v9; // r15
  int v10; // eax
  __int64 v11; // r8
  SCombatLogGraphStats *m_pMemory; // rcx
  SCombatLogGraphStats *v13; // rdi
  __int64 v14; // rdx
  int v15; // ecx
  int i; // eax
  __int64 v17; // rbx
  int v18; // r13d
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rdx
  Vector v23; // [rsp+0h] [rbp-170h]
  int iEndEvent; // [rsp+Ch] [rbp-164h]
  int iPlayerID; // [rsp+1Ch] [rbp-154h]
  CUtlVector<int,CUtlMemory<int,int> > eventIndicies; // [rsp+30h] [rbp-140h] BYREF
  _BYTE v28[52]; // [rsp+50h] [rbp-120h] BYREF
  int v29; // [rsp+84h] [rbp-ECh]
  int v30; // [rsp+A8h] [rbp-C8h]

  StartEventIndexForStatsTick = CDOTA_CombatLog::GetStartEventIndexForStatsTick(this, iTick);
  LODWORD(v23.z) = StartEventIndexForStatsTick;
  iEndEvent = CDOTA_CombatLog::GetEndEventIndexForStatsTick(this, iTick);
  if ( iEndEvent != -1 && StartEventIndexForStatsTick != -1 )
  {
    v7 = iTeam != 2;
    v8 = 0;
    v9 = 212LL * iTick;
    do
    {
      v10 = 0;
      v11 = 4 * (6LL * (iTeam != 2) + v8);
      do
      {
        m_pMemory = this->m_vecTimedStats.m_Memory.m_pMemory;
        v13 = &m_pMemory[v9 / 0xD4];
        if ( iTick <= 0 )
        {
          v15 = 0;
          v14 = v10;
        }
        else
        {
          v14 = v10;
          v15 = m_pMemory[-1].m_nLocationPerformanceDetails[0][0][v10 + v11 + v9 / 4];
        }
        ++v10;
        v13->m_nLocationPerformanceDetails[0][0][v14 + v11] = v15;
      }
      while ( v10 != 4 );
      ++v8;
    }
    while ( v8 != 6 );
    iPlayerID = 0;
    for ( i = CDOTA_PlayerResource::GetTeam(g_pDOTAPlayerResource, 0);
          ;
          i = CDOTA_PlayerResource::GetTeam(g_pDOTAPlayerResource, iPlayerID) )
    {
      if ( iTeam == i )
      {
        eventIndicies.m_Size = 0;
        eventIndicies.m_Memory.m_pMemory = 0;
        eventIndicies.m_Memory.m_nAllocationCount = 0;
        *&v23.x = &eventIndicies;
        eventIndicies.m_Memory.m_nGrowSize = 0;
        CDOTA_CombatLog::GetEventsForPlayer(this, iPlayerID, 8u, SLODWORD(v23.z), iEndEvent, &eventIndicies);
        CDOTA_CombatLog::GetEventsForPlayer(this, iPlayerID, 0xAu, SLODWORD(v23.z), iEndEvent, &eventIndicies);
        if ( eventIndicies.m_Size > 0 )
        {
          v17 = 0;
          v18 = 0;
          do
          {
            CMsgDOTACombatLogEntry::CMsgDOTACombatLogEntry(v28);
            CDOTA_CombatLog::GetEntry(this, eventIndicies.m_Memory.m_pMemory[v17], v28);
            v21 = (CDOTAGamerules::CategorizePosition(g_pGameRules, v23) - 1);
            v22 = 5;
            if ( v21 <= 8 )
              v22 = CSWTCH_25306[v21];
            if ( this->m_vecEntryReferences.m_Memory.m_pMemory[eventIndicies.m_Memory.m_pMemory[v17]].m_unType == 10 )
            {
              v20 = 3;
            }
            else
            {
              v19 = (v30 - 1);
              if ( v19 > 0xC )
                goto LABEL_18;
              v20 = CSWTCH_25307[v19];
              if ( v20 == -1 )
                goto LABEL_18;
            }
            this->m_vecTimedStats.m_Memory.m_pMemory[v9 / 0xD4].m_nLocationPerformanceDetails[v7][v22][v20] += v29;
LABEL_18:
            ++v18;
            ++v17;
            CMsgDOTACombatLogEntry::~CMsgDOTACombatLogEntry(v28);
          }
          while ( eventIndicies.m_Size > v18 );
        }
        eventIndicies.m_Size = 0;
        if ( (eventIndicies.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        {
          CUtlMemory<int,int>::Purge((*&v23.x + 8LL));
          if ( (eventIndicies.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
            CUtlMemory<int,int>::Purge((*&v23.x + 8LL));
        }
      }
      if ( ++iPlayerID == 64 )
        return;
    }
  }
}


// CKillCamBase::GetTotalDamage  (line 2944, @0x0000000002497770, libserver.so)
int __fastcall CKillCamBase::GetTotalDamage(CKillCamBase *const this)
{
  return 0;
}


// CKillCamBase::ShouldBeBumped  (line 2948, @0x00000000024625e0, libserver.so)
bool __fastcall CKillCamBase::ShouldBeBumped(CKillCamBase *const this)
{
  return 0;
}


// CKillCamAbilityDamage::GetTotalDamage  (line 2968, @0x0000000002497780, libserver.so)
int __fastcall CKillCamAbilityDamage::GetTotalDamage(CKillCamAbilityDamage *const this)
{
  return this->m_iTotalDamage;
}


// CKillCamAbilityDamage::ShouldBeBumped  (line 2972, @0x00000000024625f0, libserver.so)
bool __fastcall CKillCamAbilityDamage::ShouldBeBumped(CKillCamAbilityDamage *const this)
{
  return this->m_iAbilityName == -1;
}


// CKillCamAttackerEntry::CKillCamAttackerEntry  (line 2980, @0x00000000024a2d60, libserver.so)  // inlines: CEntityHandle, CHandle, CUtlMemory, CUtlString, CUtlVector, CUtlVectorBase, Purge, PurgeAndDeleteElements, RemoveAll, ~CUtlMemory, ~CUtlString, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlString::operator=, operator delete, CUtlMemory<CKillCamAbilityDamage*, int>::Purge, CUtlString::FreeMemoryBlock, _Unwind_Resume
// callers: CDOTA_CombatLog::SendKillCamInformation
void __fastcall CKillCamAttackerEntry::CKillCamAttackerEntry(CKillCamAttackerEntry *const this)
{
  int m_Size; // r11d
  __int64 v3; // r13
  int v4; // r12d
  CKillCamAbilityDamage *v5; // rdi
  bool v6; // zf

  this->_vptr_CKillCamBase = off_40DF8D0;  // vptr: CKillCamAttackerEntry
  this->m_hAttacker.m_Index = -1;
  this->m_strAttackerName.m_pString = 0;
  this->m_abilityinfo.m_Size = 0;
  this->m_abilityinfo.m_Memory.m_pMemory = 0;
  this->m_abilityinfo.m_Memory.m_nAllocationCount = 0;
  this->m_abilityinfo.m_Memory.m_nGrowSize = 0;
  CUtlString::operator=(&this->m_strAttackerName, "");
  m_Size = this->m_abilityinfo.m_Size;
  v3 = 0;
  v4 = 0;
  this->m_unAttackerNameID = 0;
  this->m_iTotalDamage = 0;
  if ( m_Size > 0 )
  {
    do
    {
      ++v4;
      v5 = this->m_abilityinfo.m_Memory.m_pMemory[v3++];
      operator delete(v5);
    }
    while ( v4 < this->m_abilityinfo.m_Size );
  }
  v6 = (this->m_abilityinfo.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_abilityinfo.m_Size = 0;
  if ( v6 )
    CUtlMemory<CKillCamAbilityDamage *,int>::Purge(&this->m_abilityinfo.m_Memory);
}


// CKillCamAttackerEntry::GetTotalDamage  (line 3030, @0x0000000002497790, libserver.so)
int __fastcall CKillCamAttackerEntry::GetTotalDamage(CKillCamAttackerEntry *const this)
{
  return this->m_iTotalDamage;
}


// CKillCamAttackerEntry::ShouldBeBumped  (line 3055, @0x0000000002466160, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsHero, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator bool
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CKillCamAttackerEntry::ShouldBeBumped(CKillCamAttackerEntry *const this)
{
  bool result; // al
  uint32 m_Index; // edx
  CEntityIdentity *v3; // rcx
  CEntityIdentity *v4; // rcx
  CEntityInstance *m_pInstance; // rdx

  result = 1;
  m_Index = this->m_hAttacker.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hAttacker.m_Index) >> 9) & 0x3F];
    if ( v3 != 0 )
    {
      v4 = &v3[this->m_hAttacker.m_Index & 0x1FF];
      if ( v4 != 0 && m_Index == v4->m_EHandle.m_Index )
      {
        m_pInstance = v4->m_pInstance;
        if ( v4->m_pInstance != 0 && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 )
          return !(m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1);
      }
    }
  }
  return result;
}


// SortKillCam<CKillCamAttackerEntry>  (line 3060, @0x00000000024a69a0, libserver.so)  // inlines: Element, V_swap<CKillCamAttackerEntry*>, operator[]
// calls: CUtlVectorBase<CKillCamAttackerEntry*, CUtlMemory<CKillCamAttackerEntry*, int> >::Remove
// callers: CDOTA_CombatLog::SendKillCamInformation
void __fastcall SortKillCam<CKillCamAttackerEntry>(
        CUtlVector<CKillCamAttackerEntry*,CUtlMemory<CKillCamAttackerEntry*,int> > *pVector)
{
  unsigned int v1; // ecx
  CKillCamAttackerEntry *v2; // rsi
  int m_Size; // eax
  __int64 v5; // rdx
  int v6; // r15d
  int v7; // r13d
  __int64 v8; // r14
  int v9; // r12d
  __int64 v10; // r13
  CKillCamAttackerEntry **m_pMemory; // rax
  CKillCamAttackerEntry **v12; // r13
  CKillCamAttackerEntry **v13; // rax
  int v14; // r12d
  __int64 v15; // r13
  int iGap; // [rsp+8h] [rbp-38h]
  bool bSwapped; // [rsp+Fh] [rbp-31h]

  m_Size = pVector->m_Size;
  iGap = pVector->m_Size;
  LOBYTE(v5) = pVector->m_Size > 1;
  do
  {
    if ( v5 != 0 )
    {
      v1 = (iGap / 1.3);
      iGap = v1;
    }
    if ( iGap >= m_Size )
    {
      bSwapped = 0;
    }
    else
    {
      v6 = iGap + 1;
      v7 = iGap;
      v8 = 0;
      bSwapped = 0;
      do
      {
        v9 = (*pVector->m_Memory.m_pMemory[v8]->_vptr_CKillCamBase)(pVector->m_Memory.m_pMemory[v8]);
        v10 = v7;
        if ( v9 < (*pVector->m_Memory.m_pMemory[v10]->_vptr_CKillCamBase)(pVector->m_Memory.m_pMemory[v10]) )
        {
          m_pMemory = pVector->m_Memory.m_pMemory;
          bSwapped = 1;
          v12 = &m_pMemory[v10];
          v13 = &m_pMemory[v8];
          v2 = *v13;
          *v13 = *v12;
          *v12 = v2;
        }
        m_Size = pVector->m_Size;
        v7 = v6;
        ++v8;
        ++v6;
      }
      while ( v7 < pVector->m_Size );
    }
    LOBYTE(v1) = iGap > 1;
    v5 = v1;
  }
  while ( bSwapped || iGap > 1 );
  if ( m_Size > 5 )
  {
    v14 = m_Size - 1;
    v15 = m_Size - 1;
    do
    {
      if ( (*(pVector->m_Memory.m_pMemory[v15]->_vptr_CKillCamBase + 1))(pVector->m_Memory.m_pMemory[v15], v2, v5) != 0 )
        CUtlVectorBase<CKillCamAttackerEntry *,CUtlMemory<CKillCamAttackerEntry *,int>>::Remove(pVector, v14);
      --v14;
      --v15;
    }
    while ( v14 != -1 );
    while ( pVector->m_Size > 5 )
      CUtlVectorBase<CKillCamAttackerEntry *,CUtlMemory<CKillCamAttackerEntry *,int>>::Remove(
        pVector,
        pVector->m_Size - 1);
  }
}


// SortKillCam<CKillCamAbilityDamage>  (line 3060, @0x00000000024a6b30, libserver.so)  // inlines: Element, V_swap<CKillCamAbilityDamage*>, operator[]
// calls: CUtlVectorBase<CKillCamAbilityDamage*, CUtlMemory<CKillCamAbilityDamage*, int> >::Remove
// callers: CDOTA_CombatLog::SendKillCamInformation
void __fastcall SortKillCam<CKillCamAbilityDamage>(
        CUtlVector<CKillCamAbilityDamage*,CUtlMemory<CKillCamAbilityDamage*,int> > *pVector)
{
  unsigned int v1; // ecx
  CKillCamAbilityDamage *v2; // rsi
  int m_Size; // eax
  __int64 v5; // rdx
  int v6; // r15d
  int v7; // r13d
  __int64 v8; // r14
  int v9; // r12d
  __int64 v10; // r13
  CKillCamAbilityDamage **m_pMemory; // rax
  CKillCamAbilityDamage **v12; // r13
  CKillCamAbilityDamage **v13; // rax
  int v14; // r12d
  __int64 v15; // r13
  int iGap; // [rsp+8h] [rbp-38h]
  bool bSwapped; // [rsp+Fh] [rbp-31h]

  m_Size = pVector->m_Size;
  iGap = pVector->m_Size;
  LOBYTE(v5) = pVector->m_Size > 1;
  do
  {
    if ( v5 != 0 )
    {
      v1 = (iGap / 1.3);
      iGap = v1;
    }
    if ( iGap >= m_Size )
    {
      bSwapped = 0;
    }
    else
    {
      v6 = iGap + 1;
      v7 = iGap;
      v8 = 0;
      bSwapped = 0;
      do
      {
        v9 = (*pVector->m_Memory.m_pMemory[v8]->_vptr_CKillCamBase)(pVector->m_Memory.m_pMemory[v8]);
        v10 = v7;
        if ( v9 < (*pVector->m_Memory.m_pMemory[v10]->_vptr_CKillCamBase)(pVector->m_Memory.m_pMemory[v10]) )
        {
          m_pMemory = pVector->m_Memory.m_pMemory;
          bSwapped = 1;
          v12 = &m_pMemory[v10];
          v13 = &m_pMemory[v8];
          v2 = *v13;
          *v13 = *v12;
          *v12 = v2;
        }
        m_Size = pVector->m_Size;
        v7 = v6;
        ++v8;
        ++v6;
      }
      while ( v7 < pVector->m_Size );
    }
    LOBYTE(v1) = iGap > 1;
    v5 = v1;
  }
  while ( bSwapped || iGap > 1 );
  if ( m_Size > 5 )
  {
    v14 = m_Size - 1;
    v15 = m_Size - 1;
    do
    {
      if ( (*(pVector->m_Memory.m_pMemory[v15]->_vptr_CKillCamBase + 1))(pVector->m_Memory.m_pMemory[v15], v2, v5) != 0 )
        CUtlVectorBase<CKillCamAbilityDamage *,CUtlMemory<CKillCamAbilityDamage *,int>>::Remove(pVector, v14);
      --v14;
      --v15;
    }
    while ( v14 != -1 );
    while ( pVector->m_Size > 5 )
      CUtlVectorBase<CKillCamAbilityDamage *,CUtlMemory<CKillCamAbilityDamage *,int>>::Remove(
        pVector,
        pVector->m_Size - 1);
  }
}


// CDOTA_CombatLog::SendKillCamInformation  (line 3107, @0x000000000248ea60, libserver.so)  // inlines: Add, Add<google::protobuf::RepeatedPtrField<CDOTAUserMsg_MiniKillCamInfo_Attacker>::TypeHandler>, Add<google::protobuf::RepeatedPtrField<CDOTAUserMsg_MiniKillCamInfo_Attacker_Ability>::TypeHandler>, AddToTail, CDOTAUserMsg_MiniKillCamInfo_t, CKillCamAbilityDamage, CNetMessagePB, CSingleUserRecipientFilter, CUserMessagePB, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<CKillCamAbilityDamage*>, CopyConstruct<CKillCamAttackerEntry*>, DOTAGameRules, Element, FindGameEvent<CDOTAUserMsg_MiniKillCamInfo_t>, FindOrCreateGameEvent<CDOTAUserMsg_MiniKillCamInfo_t>, Get, GetEntityIdentity, GetEntryIndex, GetEntryType, GetGameTime, GetInstance, GetName, GetStringTable, GrowMemory, IndexToIdentity, IsValid, LookupEntity, New, PostEvent<CDOTAUserMsg_MiniKillCamInfo_t>, Purge, PurgeAndDeleteElements, RemoveAll, SendUserMessage<CDOTAUserMsg_MiniKillCamInfo_t>, UpdateAbilityInfo, add_abilities, add_attackers, assign, length, operator CBaseEntity*, operator CEntityInstance*, operator char const*, operator!=<CBaseEntity>, operator=, operator==, operator[], set_ability, set_attacker, set_attacker_name, set_damage, set_has_ability, set_has_attacker, set_has_attacker_name, set_has_damage, set_has_total_damage, set_total_damage, strstr, ~CDOTAUserMsg_MiniKillCamInfo_t, ~CKillCamAttackerEntry, ~CNetMessagePB, ~CSingleUserRecipientFilter, ~CUserMessagePB, ~CUtlMemory, ~CUtlString, ~CUtlVector, ~CUtlVectorBase
// calls: CMsgDOTACombatLogEntry::CMsgDOTACombatLogEntry, CDOTA_CombatLog::GetEntry, CMsgDOTACombatLogEntry::~CMsgDOTACombatLogEntry, SortKillCam<CKillCamAttackerEntry>, CRecipientFilter::CRecipientFilter, CRecipientFilter::AddRecipient, CRecipientFilter::MakeReliable, CDOTAUserMsg_MiniKillCamInfo::CDOTAUserMsg_MiniKillCamInfo, operator new, CDOTAUserMsg_MiniKillCamInfo_Attacker::CDOTAUserMsg_MiniKillCamInfo_Attacker, GetEntitySerial, CUtlString::Get (36 total)
// callers: CDOTA_BaseNPC_Hero::Event_Killed
// strings: "npc_dota_techies", "npc_dota_hero_techies"
// globals: CEntityHandle::gm_pEntityList, g_pDOTACombatLog, DOTA_CombatLog_Record::sm_pStringTableCombatLogNames, IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_MiniKillCamInfo_t>(bool)::s_hEvent
void __fastcall CDOTA_CombatLog::SendKillCamInformation(
        CDOTA_CombatLog *const this,
        const CEntityHandle *hVictim,
        CDOTAPlayer *pPlayer,
        CDOTA_BaseNPC *pKiller)
{
  int m_Size; // eax
  __int64 v6; // rbx
  CKillCamAttackerEntry *v7; // r13
  __int64 current_size; // rax
  int *v9; // r12
  __int64 v10; // rax
  uint32 m_Index; // eax
  CBaseEntity *m_pInstance; // rdi
  CEntityIdentity *v13; // rdx
  CEntityIdentity *v14; // rdx
  int EntitySerial; // eax
  int v16; // edx
  int m_iTotalDamage; // eax
  const char *v18; // rax
  const char *v19; // rbx
  size_t v20; // rax
  __int64 i; // rbx
  CDOTAUserMsg_MiniKillCamInfo_Attacker_Ability *v22; // r15
  __int64 v23; // rax
  __int64 v24; // rdx
  int v25; // eax
  int v26; // edx
  __int64 v27; // rax
  int v28; // esi
  __int64 v29; // rdx
  CEntityInstance *v30; // r14
  const char *v31; // r14
  bool v32; // zf
  const char *v33; // rax
  __int64 v34; // r12
  IGameEventSystem *v35; // rbx
  void (__fastcall *v36)(IGameEventSystem *, _QWORD, _QWORD, CSingleUserRecipientFilter *, __int64, _QWORD *, __int64); // r13
  __int64 v37; // r12
  int j; // ebx
  CKillCamAttackerEntry *v39; // r13
  __int64 v40; // r15
  int v41; // r14d
  CKillCamAbilityDamage *v42; // rdi
  int v43; // r14d
  CKillCamAttackerEntry *v44; // r15
  INetworkStringTable *v45; // rdi
  const char *v46; // r14
  CDOTAGameManager *v47; // rax
  int v48; // edx
  int v49; // eax
  int v50; // edi
  void **m_pMemory; // rax
  _DWORD *v52; // r14
  void **v53; // rax
  void **v54; // rdx
  CDOTAGameManager *v55; // rax
  int v56; // eax
  CKillCamAbilityDamage **v57; // rax
  __int64 v58; // r14
  int v59; // eax
  CKillCamAttackerEntry **v60; // rax
  int v62; // [rsp+20h] [rbp-2D0h]
  int v63; // [rsp+28h] [rbp-2C8h]
  __int64 hVictimb; // [rsp+38h] [rbp-2B8h]
  int usAbilityIndex; // [rsp+40h] [rbp-2B0h]
  const char *usAbilityIndexa; // [rsp+40h] [rbp-2B0h]
  unsigned __int16 usAbilityIndexb; // [rsp+40h] [rbp-2B0h]
  float flTime; // [rsp+48h] [rbp-2A8h]
  __int64 flTimea; // [rsp+48h] [rbp-2A8h]
  int flTimeb; // [rsp+48h] [rbp-2A8h]
  CEntityHandle v72; // [rsp+50h] [rbp-2A0h] BYREF
  uint32 v73[4]; // [rsp+60h] [rbp-290h] BYREF
  CUtlVector<CKillCamAttackerEntry*,CUtlMemory<CKillCamAttackerEntry*,int> > m_KillCam; // [rsp+70h] [rbp-280h] BYREF
  _QWORD v75[3]; // [rsp+90h] [rbp-260h] BYREF
  google::protobuf::internal::RepeatedPtrFieldBase iNameIndex; // [rsp+A8h] [rbp-248h] BYREF
  char v77; // [rsp+C2h] [rbp-22Eh]
  int v78; // [rsp+C4h] [rbp-22Ch]
  float v79; // [rsp+CCh] [rbp-224h]
  CSingleUserRecipientFilter filter; // [rsp+180h] [rbp-170h] BYREF
  unsigned __int64 v81; // [rsp+2B8h] [rbp-38h]

  v81 = __readfsqword(0x28u);
  if ( pPlayer != 0 )
  {
    m_KillCam.m_Size = 0;
    m_Size = this->m_vecEntryReferences.m_Size;
    m_KillCam.m_Memory.m_pMemory = 0;
    m_KillCam.m_Memory.m_nAllocationCount = 0;
    m_KillCam.m_Memory.m_nGrowSize = 0;
    if ( m_Size > 0 )
    {
      v6 = 0;
      while ( 1 )
      {
        while ( 1 )
        {
          if ( g_pGameRules != 0 )
            flTime = *&g_pGameRules[18].m_szQuestName[20];
          else
            flTime = 0.0;
          if ( this->m_vecEntryReferences.m_Memory.m_pMemory[v6].m_unType != 0 )
            goto LABEL_4;
          CMsgDOTACombatLogEntry::CMsgDOTACombatLogEntry(v75);
          CDOTA_CombatLog::GetEntry(this, v6, v75);
          if ( (flTime - 10.0) <= v79 && v79 <= flTime )
          {
            CDOTA_CombatLog::GetHeroForName(&v72, g_pDOTACombatLog, SHIDWORD(iNameIndex.elements_));
            v30 = CEntityHandle::operator CEntityInstance *(&v72);
            if ( v30 == CEntityHandle::operator CEntityInstance *(hVictim) && v77 == 0 )
              break;
          }
          CMsgDOTACombatLogEntry::~CMsgDOTACombatLogEntry(v75);
          if ( this->m_vecEntryReferences.m_Size <= ++v6 )
            goto LABEL_11;
        }
        if ( DOTA_CombatLog_Record::sm_pStringTableCombatLogNames != 0 )
        {
          v31 = (*(DOTA_CombatLog_Record::sm_pStringTableCombatLogNames->_vptr_INetworkStringTable + 9))(
                  DOTA_CombatLog_Record::sm_pStringTableCombatLogNames,
                  iNameIndex.allocated_size_,
                  0);
          v32 = strstr(v31, "npc_dota_techies") == 0;
          v33 = "npc_dota_hero_techies";
          if ( v32 )
            v33 = v31;
          usAbilityIndexa = v33;
        }
        else
        {
          usAbilityIndexa = "";
        }
        v43 = 0;
        flTimea = 0;
        if ( m_KillCam.m_Size <= 0 )
          goto LABEL_81;
        while ( 1 )
        {
          v44 = m_KillCam.m_Memory.m_pMemory[flTimea];
          if ( CUtlString::IsEqual_CaseSensitive(&v44->m_strAttackerName, usAbilityIndexa) )
            break;
          ++flTimea;
          if ( m_KillCam.m_Size <= ++v43 )
            goto LABEL_81;
        }
        if ( v44 == 0 )
        {
LABEL_81:
          v44 = operator new(0x38u);
          CKillCamAttackerEntry::CKillCamAttackerEntry(v44);
          v58 = m_KillCam.m_Size;
          v59 = m_KillCam.m_Size;
          if ( m_KillCam.m_Size == m_KillCam.m_Memory.m_nAllocationCount )
          {
            CUtlMemory<CKillCamAttackerEntry *,int>::Grow(&m_KillCam.m_Memory, 1);
            v59 = m_KillCam.m_Size;
          }
          m_KillCam.m_Size = v59 + 1;
          v60 = &m_KillCam.m_Memory.m_pMemory[v58];
          if ( v60 != 0 )
            *v60 = v44;
        }
        CDOTA_CombatLog::GetHeroForName(v73, g_pDOTACombatLog, iNameIndex.allocated_size_);
        v44->m_hAttacker.m_Index = v73[0];
        CUtlString::operator=(&v44->m_strAttackerName, usAbilityIndexa);
        v45 = DOTA_CombatLog_Record::sm_pStringTableCombatLogNames;
        v44->m_unAttackerNameID = iNameIndex.allocated_size_;
        if ( v45 != 0 )
          v46 = (*(v45->_vptr_INetworkStringTable + 9))(v45, *(&iNameIndex.total_size_ + 1), 0);
        else
          v46 = "";
        v47 = DOTAGameManager();
        usAbilityIndexb = CDOTAGameManager::GetAbilityIndex(v47, v46);
        v48 = v44->m_abilityinfo.m_Size;
        v63 = v78;
        v49 = -1;
        if ( *(&iNameIndex.total_size_ + 1) != 0 )
          v49 = *(&iNameIndex.total_size_ + 1);
        v50 = v49;
        flTimeb = v49;
        if ( v48 <= 0 )
          goto LABEL_76;
        m_pMemory = v44->m_abilityinfo.m_Memory.m_pMemory;
        v52 = *m_pMemory;
        if ( *(*m_pMemory + 2) != v50 )
          break;
LABEL_80:
        v52[2] = flTimeb;
        *(v52 + 6) = usAbilityIndexb;
        v52[4] += v63;
        v44->m_iTotalDamage += v63;
        CMsgDOTACombatLogEntry::~CMsgDOTACombatLogEntry(v75);
LABEL_4:
        if ( this->m_vecEntryReferences.m_Size <= ++v6 )
          goto LABEL_11;
      }
      v53 = m_pMemory + 1;
      v54 = &v53[v48 - 1];
      while ( v53 != v54 )
      {
        v52 = *v53++;
        if ( v52[2] == flTimeb )
          goto LABEL_80;
      }
LABEL_76:
      v52 = operator new(0x18u);
      v52[2] = 0;
      *v52 = off_40DF8B0;
      v55 = DOTAGameManager();
      *(v52 + 6) = CDOTAGameManager::GetInvalidAbilityIndex(v55);
      v52[4] = 0;
      v56 = v44->m_abilityinfo.m_Size;
      v62 = v56;
      if ( v56 == v44->m_abilityinfo.m_Memory.m_nAllocationCount )
      {
        CUtlMemory<CKillCamAbilityDamage *,int>::Grow(&v44->m_abilityinfo.m_Memory, 1);
        v56 = v44->m_abilityinfo.m_Size;
      }
      v44->m_abilityinfo.m_Size = v56 + 1;
      v57 = &v44->m_abilityinfo.m_Memory.m_pMemory[v62];
      if ( v57 != 0 )
        *v57 = v52;
      goto LABEL_80;
    }
LABEL_11:
    SortKillCam<CKillCamAttackerEntry>(&m_KillCam);
    CRecipientFilter::CRecipientFilter(&filter);
    filter._vptr_IRecipientFilter = &off_3FCB0D0;
    CRecipientFilter::AddRecipient(&filter, pPlayer);
    CRecipientFilter::MakeReliable(&filter);
    CDOTAUserMsg_MiniKillCamInfo::CDOTAUserMsg_MiniKillCamInfo(v75);
    v75[0] = off_40DBD90;
    if ( m_KillCam.m_Size > 0 )
    {
      hVictimb = 0;
      usAbilityIndex = 0;
      do
      {
        v7 = m_KillCam.m_Memory.m_pMemory[hVictimb];
        current_size = iNameIndex.current_size_;
        if ( iNameIndex.current_size_ < iNameIndex.allocated_size_ )
        {
          ++iNameIndex.current_size_;
          v9 = iNameIndex.elements_[current_size];
        }
        else
        {
          if ( iNameIndex.allocated_size_ == iNameIndex.total_size_ )
            google::protobuf::internal::RepeatedPtrFieldBase::Reserve(&iNameIndex, iNameIndex.allocated_size_ + 1);
          v9 = operator new(0x40u);
          CDOTAUserMsg_MiniKillCamInfo_Attacker::CDOTAUserMsg_MiniKillCamInfo_Attacker(v9);
          v10 = iNameIndex.current_size_;
          ++iNameIndex.allocated_size_;
          ++iNameIndex.current_size_;
          iNameIndex.elements_[v10] = v9;
        }
        m_Index = v7->m_hAttacker.m_Index;
        m_pInstance = 0;
        if ( m_Index + 2 > 1 )
        {
          v13 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v7->m_hAttacker.m_Index) >> 9) & 0x3F];
          if ( v13 != 0 )
          {
            v14 = &v13[v7->m_hAttacker.m_Index & 0x1FF];
            if ( v14 != 0 && m_Index == v14->m_EHandle.m_Index )
              m_pInstance = v14->m_pInstance;
          }
        }
        EntitySerial = GetEntitySerial(m_pInstance);
        v16 = v9[4];
        v9[6] = EntitySerial;
        v9[4] = v16 | 1;
        m_iTotalDamage = v7->m_iTotalDamage;
        v9[4] = v16 | 3;
        v9[7] = m_iTotalDamage;
        v18 = CUtlString::Get(&v7->m_strAttackerName);
        v9[4] |= 8u;
        v19 = v18;
        v20 = strlen(v18);
        std::string::assign(*(v9 + 7), v19, v20);
        SortKillCam<CKillCamAbilityDamage>(&v7->m_abilityinfo);
        for ( i = 0; v7->m_abilityinfo.m_Size > i; ++i )
        {
          if ( v7->m_abilityinfo.m_Memory.m_pMemory[i] != 0 )
          {
            v27 = v9[10];
            v28 = v9[11];
            if ( v27 >= v28 )
            {
              if ( v28 == v9[12] )
                google::protobuf::internal::RepeatedPtrFieldBase::Reserve((v9 + 8), v28 + 1);
              v22 = operator new(0x20u);
              CDOTAUserMsg_MiniKillCamInfo_Attacker_Ability::CDOTAUserMsg_MiniKillCamInfo_Attacker_Ability(v22);
              v23 = v9[10];
              v24 = *(v9 + 4);
              ++v9[11];
              v9[10] = v23 + 1;
              *(v24 + 8 * v23) = v22;
            }
            else
            {
              v29 = *(v9 + 4);
              v9[10] = v27 + 1;
              v22 = *(v29 + 8 * v27);
            }
            v25 = *(v22 + 4);
            *(v22 + 6) = v7->m_abilityinfo.m_Memory.m_pMemory[i]->m_usAbilityIndex;
            *(v22 + 4) = v25 | 1;
            v26 = v7->m_abilityinfo.m_Memory.m_pMemory[i]->m_iTotalDamage;
            *(v22 + 4) = v25 | 3;
            *(v22 + 7) = v26;
          }
        }
        if ( m_KillCam.m_Size <= ++usAbilityIndex )
          break;
        ++hVictimb;
      }
      while ( hVictimb != 5 );
    }
    v34 = IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_MiniKillCamInfo_t>(bool)::s_hEvent;
    v35 = g_pGameEventSystem;
    v36 = *(*g_pGameEventSystem + 128LL);
    (*(*g_pNetworkMessages + 96LL))(
      g_pNetworkMessages,
      IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_MiniKillCamInfo_t>(bool)::s_hEvent);
    v36(v35, 0, 0, &filter, v34, v75, 48);
    v37 = 0;
    for ( j = 0; j < m_KillCam.m_Size; ++v37 )
    {
      v39 = m_KillCam.m_Memory.m_pMemory[v37];
      if ( v39 != 0 )
      {
        v40 = 0;
        v41 = 0;
        v39->_vptr_CKillCamBase = off_40DF8D0;  // vptr: CKillCamAttackerEntry
        while ( v41 < v39->m_abilityinfo.m_Size )
        {
          ++v41;
          v42 = v39->m_abilityinfo.m_Memory.m_pMemory[v40++];
          operator delete(v42);
        }
        v32 = (v39->m_abilityinfo.m_Memory.m_nGrowSize & 0xC0000000) == 0;
        v39->m_abilityinfo.m_Size = 0;
        if ( v32 )
        {
          CUtlMemory<CKillCamAbilityDamage *,int>::Purge(&v39->m_abilityinfo.m_Memory);
          v32 = (v39->m_abilityinfo.m_Memory.m_nGrowSize & 0xC0000000) == 0;
          v39->m_abilityinfo.m_Size = 0;
          if ( v32 )
          {
            CUtlMemory<CKillCamAbilityDamage *,int>::Purge(&v39->m_abilityinfo.m_Memory);
            if ( (v39->m_abilityinfo.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
              CUtlMemory<CKillCamAbilityDamage *,int>::Purge(&v39->m_abilityinfo.m_Memory);
          }
        }
        else
        {
          v39->m_abilityinfo.m_Size = 0;
        }
        if ( v39->m_strAttackerName.m_pString != 0 )
          CUtlString::FreeMemoryBlock(&v39->m_strAttackerName);
        operator delete(v39);
      }
      ++j;
    }
    m_KillCam.m_Size = 0;
    if ( (m_KillCam.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CKillCamAttackerEntry *,int>::Purge(&m_KillCam.m_Memory);
    v75[0] = &off_40DBC10;
    CDOTAUserMsg_MiniKillCamInfo::~CDOTAUserMsg_MiniKillCamInfo(v75);
    filter._vptr_IRecipientFilter = &off_3FCB0D0;
    CRecipientFilter::~CRecipientFilter(&filter);
    m_KillCam.m_Size = 0;
    if ( (m_KillCam.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<CKillCamAttackerEntry *,int>::Purge(&m_KillCam.m_Memory);
      if ( (m_KillCam.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<CKillCamAttackerEntry *,int>::Purge(&m_KillCam.m_Memory);
    }
  }
}


// CDOTA_CombatLog::SaveCombatLog  (line 3202, @0x0000000002495bb0, libserver.so)  // inlines: Add, Add<google::protobuf::RepeatedPtrField<CMsgDOTACombatLogEntry>::TypeHandler>, Add<google::protobuf::RepeatedPtrField<CSerializedCombatLog_Dictionary_DictString>::TypeHandler>, GetStringTable, New, Purge, Reserve, _Alloc_hider, _M_data, _M_rep, add_entries, add_strings, assign, basic_string, length, mutable_dictionary, set_has_dictionary, set_has_id, set_has_value, set_has_version, set_id, set_value, set_version, size, ~CUtlBuffer, ~CUtlMemory, ~basic_string
// calls: CSerializedCombatLog::CSerializedCombatLog, google::protobuf::internal::RepeatedPtrFieldBase::Reserve(int), operator new, CSerializedCombatLog_Dictionary_DictString::CSerializedCombatLog_Dictionary_DictString, strlen, std::string::assign(char const*,ulong), CMsgDOTACombatLogEntry::CMsgDOTACombatLogEntry, CMsgDOTACombatLogEntry::CopyFrom, CMsgDOTACombatLogEntry::~CMsgDOTACombatLogEntry, CDOTA_CombatLog::GetEntry, google::protobuf::MessageLite::SerializeToString(std::string *), CUtlBuffer::CUtlBuffer (19 total)
// callers: CDOTAHLTVDirector::UploadReplay
// globals: DOTA_CombatLog_Record::sm_pStringTableCombatLogNames
bool __fastcall CDOTA_CombatLog::SaveCombatLog(CDOTA_CombatLog *const this, const char *pszFilename)
{
  google::protobuf::internal::RepeatedPtrFieldBase *v3; // r12
  unsigned int i; // r13d
  std::string **v5; // rbx
  __int64 v6; // rax
  void **elements; // rdx
  const char *v8; // rax
  const char *v9; // r15
  size_t v10; // rax
  __int64 current_size; // rax
  int allocated_size; // esi
  void **v13; // rdx
  int v14; // r12d
  CMsgDOTACombatLogEntry *v15; // r13
  __int64 v16; // rax
  CMsgDOTACombatLogEntry *v17; // rdi
  __int64 v18; // rax
  char v19; // r12
  uint32 unNumStrs; // [rsp+1Ch] [rbp-184h]
  char v23; // [rsp+2Fh] [rbp-171h] BYREF
  std::string sSerialized; // [rsp+30h] [rbp-170h] BYREF
  _BYTE v25[16]; // [rsp+40h] [rbp-160h] BYREF
  int v26; // [rsp+50h] [rbp-150h]
  google::protobuf::internal::RepeatedPtrFieldBase *v27; // [rsp+58h] [rbp-148h]
  google::protobuf::internal::RepeatedPtrFieldBase v28; // [rsp+60h] [rbp-140h] BYREF
  int v29; // [rsp+78h] [rbp-128h]
  CUtlBuffer src; // [rsp+80h] [rbp-120h] BYREF

  CSerializedCombatLog::CSerializedCombatLog(v25);
  v29 = 1;
  v3 = v27;
  v26 |= 3u;
  if ( v27 == 0 )
  {
    v3 = operator new(0x30u);
    CSerializedCombatLog_Dictionary::CSerializedCombatLog_Dictionary(v3);
    v27 = v3;
  }
  unNumStrs = (*(DOTA_CombatLog_Record::sm_pStringTableCombatLogNames->_vptr_INetworkStringTable + 4))(DOTA_CombatLog_Record::sm_pStringTableCombatLogNames);
  google::protobuf::internal::RepeatedPtrFieldBase::Reserve(v3 + 1, unNumStrs);
  for ( i = 0; unNumStrs != i; ++i )
  {
    current_size = v3[1].current_size_;
    allocated_size = v3[1].allocated_size_;
    if ( current_size >= allocated_size )
    {
      if ( allocated_size == v3[1].total_size_ )
        google::protobuf::internal::RepeatedPtrFieldBase::Reserve(v3 + 1, allocated_size + 1);
      v5 = operator new(0x28u);
      CSerializedCombatLog_Dictionary_DictString::CSerializedCombatLog_Dictionary_DictString(v5);
      v6 = v3[1].current_size_;
      elements = v3[1].elements_;
      ++v3[1].allocated_size_;
      v3[1].current_size_ = v6 + 1;
      elements[v6] = v5;
    }
    else
    {
      v13 = v3[1].elements_;
      v3[1].current_size_ = current_size + 1;
      v5 = v13[current_size];
    }
    *(v5 + 4) |= 1u;
    *(v5 + 8) = i;
    v8 = (*(DOTA_CombatLog_Record::sm_pStringTableCombatLogNames->_vptr_INetworkStringTable + 9))(
           DOTA_CombatLog_Record::sm_pStringTableCombatLogNames,
           i,
           0);
    *(v5 + 4) |= 2u;
    v9 = v8;
    v10 = strlen(v8);
    std::string::assign(v5[3], v9, v10);
  }
  google::protobuf::internal::RepeatedPtrFieldBase::Reserve(&v28, this->m_vecEntryReferences.m_Size);
  if ( this->m_vecEntryReferences.m_Size > 0 )
  {
    v14 = 0;
    do
    {
      CMsgDOTACombatLogEntry::CMsgDOTACombatLogEntry(&src);
      CDOTA_CombatLog::GetEntry(this, v14, &src);
      v18 = v28.current_size_;
      if ( v28.current_size_ >= v28.allocated_size_ )
      {
        if ( v28.allocated_size_ == v28.total_size_ )
          google::protobuf::internal::RepeatedPtrFieldBase::Reserve(&v28, v28.allocated_size_ + 1);
        v15 = operator new(0xE8u);
        CMsgDOTACombatLogEntry::CMsgDOTACombatLogEntry(v15);
        v16 = v28.current_size_;
        v17 = v15;
        ++v28.allocated_size_;
        ++v28.current_size_;
        v28.elements_[v16] = v15;
      }
      else
      {
        ++v28.current_size_;
        v17 = v28.elements_[v18];
      }
      CMsgDOTACombatLogEntry::CopyFrom(v17, &src);
      ++v14;
      CMsgDOTACombatLogEntry::~CMsgDOTACombatLogEntry(&src);
    }
    while ( this->m_vecEntryReferences.m_Size > v14 );
  }
  sSerialized._M_dataplus._M_p = &std::string::_Rep::_S_empty_rep_storage + 24;
  google::protobuf::MessageLite::SerializeToString(v25, &sSerialized);
  CUtlBuffer::CUtlBuffer(&src, 0, 0, 0);
  CUtlBuffer::SetExternalBuffer(
    &src,
    sSerialized._M_dataplus._M_p,
    *(sSerialized._M_dataplus._M_p - 3),
    *(sSerialized._M_dataplus._M_p - 3),
    0);
  v19 = (*(g_pFullFileSystem->_vptr_IBaseFileSystem + 15))(&g_pFullFileSystem->IBaseFileSystem, pszFilename, 0, &src);
  if ( (src.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<unsigned char,int>::Purge(&src.m_Memory);
  std::string::_Rep::_M_dispose(sSerialized._M_dataplus._M_p - 24, &v23);
  CSerializedCombatLog::~CSerializedCombatLog(v25);
  return v19;
}


// CMD_CombatLog_CombatSummary  (line 3247, @0x00000000024949f0, libserver.so)
// calls: CDOTA_CombatLog::DoCombatAnalysis
// globals: g_pDOTACombatLog
void __fastcall CMD_CombatLog_CombatSummary(const CCommandContext *const ctx, const CCommand *const args)
{
  CDOTA_CombatLog::DoCombatAnalysis(g_pDOTACombatLog);
}


// CMD_CombatLog_Update  (line 3255, @0x0000000002487a10, libserver.so)  // inlines: Arg, atof, atoi, operator[]
// calls: strtod, strtol, UTIL_GetCommandClient, CDOTA_CombatLog::SendLogToPlayer
// globals: g_pDOTACombatLog
void __fastcall CMD_CombatLog_Update(const CCommandContext *const ctx, const CCommand *const args)
{
  const char *v2; // rdi
  __m128d v4; // xmm0
  const char *v5; // rdi
  float v6; // r15d
  int v7; // eax
  const char *v8; // rdi
  int v9; // r13d
  char v10; // al
  const char *v11; // rdi
  char v12; // r12
  int v13; // eax
  const char *v14; // rdi
  int v15; // r14d
  int v16; // ebx
  CBasePlayer *CommandClient; // rax

  v2 = "";
  if ( args->m_nArgc > 5 )
    v2 = args->m_ppArgv[5];
  v4.m128d_f64[0] = strtod(v2, 0);
  v5 = "";
  v6 = COERCE_FLOAT(_mm_cvtsi128_si32(_mm_cvtpd_ps(_mm_movedup_pd(v4))));
  if ( args->m_nArgc > 4 )
    v5 = args->m_ppArgv[4];
  v7 = strtol(v5, 0, 10);
  v8 = "";
  v9 = v7;
  if ( args->m_nArgc > 3 )
    v8 = args->m_ppArgv[3];
  v10 = strtol(v8, 0, 10);
  v11 = "";
  v12 = v10;
  if ( args->m_nArgc > 2 )
    v11 = args->m_ppArgv[2];
  v13 = strtol(v11, 0, 10);
  v14 = "";
  v15 = v13;
  if ( args->m_nArgc > 1 )
    v14 = args->m_ppArgv[1];
  v16 = strtol(v14, 0, 10);
  CommandClient = UTIL_GetCommandClient();
  CDOTA_CombatLog::SendLogToPlayer(g_pDOTACombatLog, CommandClient, v16, v15, v12, v9, v6);
}


// CMD_CombatLog_SendDeath  (line 3262, @0x0000000002483a70, libserver.so)
// calls: UTIL_GetCommandClient, CDOTA_CombatLog::SendDeathLogToPlayer
// globals: g_pDOTACombatLog
void __fastcall CMD_CombatLog_SendDeath(const CCommandContext *const ctx, const CCommand *const args)
{
  CBasePlayer *CommandClient; // rax

  CommandClient = UTIL_GetCommandClient();
  CDOTA_CombatLog::SendDeathLogToPlayer(g_pDOTACombatLog, CommandClient);
}


// CMD_CombatLog_Size  (line 3271, @0x0000000002462b70, libserver.so)  // inlines: AllocSize, GetAllocSize
// calls: Msg
// strings: "Combatlog allocations: %dKB\n"
// globals: g_pDOTACombatLog
void __fastcall CMD_CombatLog_Size(const CCommandContext *const ctx, const CCommand *const args)
{
  Msg(
    "Combatlog allocations: %dKB\n",
    (g_pDOTACombatLog->m_MemoryStack.m_Memory.m_nAllocationCount
   + 8 * g_pDOTACombatLog->m_vecEntryReferences.m_Memory.m_nAllocationCount) >> 10);
}


