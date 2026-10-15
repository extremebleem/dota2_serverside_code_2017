// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/dota_challenges.cpp:533
class CGCClientJobRerollPlayerChallenge : public CGCClientJob {
public:

private:

	CGCClientJobRerollPlayerChallenge(CGCClientJobRerollPlayerChallenge &);
	CGCClientJobRerollPlayerChallenge(CGCClientJobRerollPlayerChallenge &);
	CGCClientJobRerollPlayerChallenge(CGCClient *, CDOTAPlayer *);
	void SetChallengeData(uint32, uint32);
	virtual bool BYieldingRunJob(void *);
	virtual ~CGCClientJobRerollPlayerChallenge();

	// vtable[2] BYieldingRunJob
	// sizeof = 360
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTAChallengeSystem::YouForgot::ToDefine_DEFINE_GAME_SYSTEM  (line 30, @0x000000000246b9e0, libserver.so)
void __cdecl CDOTAChallengeSystem::YouForgot::ToDefine_DEFINE_GAME_SYSTEM()
{
  ;
}


// GDOTAChallengeSystem  (line 32, @0x000000000246b9f0, libserver.so)
// callers: CIngameEvent_WM2016::GenerateWeeklyAndDailyChallenges, CIngameEvent_WM2016::PreWagerTimeThink, CDOTAPlayerChallenge::IsFullyComplete, CDOTAPlayerChallenge::GetRequiredHeroID, CDOTAGCServerSystem::MatchSignOut
// globals: g_pDOTAChallengeSystemImp
CDOTAChallengeSystem *__cdecl GDOTAChallengeSystem()
{
  return g_pDOTAChallengeSystemImp;
}


// CDOTAChallengeSystem::Init  (line 39, @0x0000000002462590, libserver.so)
bool __fastcall CDOTAChallengeSystem::Init(CDOTAChallengeSystem *const this)
{
  return 1;
}


// CDOTAChallengeSystem::PostInit  (line 46, @0x0000000002476b70, libserver.so)
// calls: CDOTAChallengeSystem::LoadTemplates, CDOTAChallengeSystem::LoadInstances, CDOTAChallengeSystem::LoadQuests
void __fastcall CDOTAChallengeSystem::PostInit(CDOTAChallengeSystem *const this)
{
  CDOTAChallengeSystem::LoadTemplates(this);
  CDOTAChallengeSystem::LoadInstances(this);
  CDOTAChallengeSystem::LoadQuests(this);
}


// CDOTAChallengeSystem::LoadTemplates  (line 57, @0x0000000002476910, libserver.so)  // inlines: Purge
// calls: KeyValues::operator new, KeyValues::KeyValues, KeyValues::LoadFromFile, ParseChallengeTemplates, KeyValues::~KeyValues, KeyValues::operator delete, KeyValues::deleteThis, Warning, CUtlVectorBase<challenge_template_t, CUtlMemory<challenge_template_t, int> >::RemoveAll, CUtlMemory<challenge_template_t, int>::Purge, _Unwind_Resume
// callers: CDOTAChallengeSystem::PostInit, DebugTestChallenge, DebugTestQuestChallenge
// strings: "scripts/tournaments/challenge_templates.txt", "Couldn't find templates for the Challenge System in file %s\n", "Failed to parse templates for the Challenge System in file %s. Challenge parsing failed i
void __fastcall CDOTAChallengeSystem::LoadTemplates(CDOTAChallengeSystem *const this)
{
  KeyValues *v2; // rbx
  IBaseFileSystem *v3; // rsi
  const char *pszErr; // [rsp+8h] [rbp-28h] BYREF

  v2 = KeyValues::operator new(0x14u);
  KeyValues::KeyValues(v2, "scripts/tournaments/challenge_templates.txt");
  v3 = 0;
  if ( g_pFullFileSystem != 0 )
    v3 = &g_pFullFileSystem->IBaseFileSystem;
  if ( KeyValues::LoadFromFile(v2, v3, "scripts/tournaments/challenge_templates.txt", "GAME", 0) )
  {
    pszErr = 0;
    if ( !ParseChallengeTemplates(v2, &this->m_pTemplates, &pszErr) )
    {
      Warning(
        "Failed to parse templates for the Challenge System in file %s. Challenge parsing failed in challenge: %s\n",
        "scripts/tournaments/challenge_templates.txt",
        pszErr);
      CUtlVectorBase<challenge_template_t,CUtlMemory<challenge_template_t,int>>::RemoveAll(&this->m_pTemplates);
      if ( (this->m_pTemplates.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<challenge_template_t,int>::Purge(&this->m_pTemplates.m_Memory);
    }
    if ( v2 != 0 )
    {
      KeyValues::~KeyValues(v2);
      KeyValues::operator delete(v2);
    }
  }
  else
  {
    KeyValues::deleteThis(v2);
    Warning(
      "Couldn't find templates for the Challenge System in file %s\n",
      "scripts/tournaments/challenge_templates.txt");
  }
}


// CDOTAChallengeSystem::LoadInstances  (line 81, @0x0000000002476a30, libserver.so)  // inlines: Purge
// calls: KeyValues::operator new, KeyValues::KeyValues, KeyValues::LoadFromFile, ParseChallengeInstances, KeyValues::~KeyValues, KeyValues::operator delete, KeyValues::deleteThis, Warning, CUtlVectorBase<challenge_instance_t, CUtlMemory<challenge_instance_t, int> >::RemoveAll, CUtlMemory<challenge_instance_t, int>::Purge, _Unwind_Resume
// callers: CDOTAChallengeSystem::PostInit
// strings: "scripts/tournaments/challenge_instances.txt", "Couldn't find instances for the Challenge System in file %s\n", "Failed to parse instances for the Challenge System in file %s. Challenge parsing failed i
void __fastcall CDOTAChallengeSystem::LoadInstances(CDOTAChallengeSystem *const this)
{
  KeyValues *v2; // rbx
  IBaseFileSystem *v3; // rsi
  const char *pszErr; // [rsp+8h] [rbp-28h] BYREF

  v2 = KeyValues::operator new(0x14u);
  KeyValues::KeyValues(v2, "scripts/tournaments/challenge_instances.txt");
  v3 = 0;
  if ( g_pFullFileSystem != 0 )
    v3 = &g_pFullFileSystem->IBaseFileSystem;
  if ( KeyValues::LoadFromFile(v2, v3, "scripts/tournaments/challenge_instances.txt", "GAME", 0) )
  {
    pszErr = 0;
    if ( !ParseChallengeInstances(v2, &this->m_pInstances, &this->m_pTemplates, &pszErr) )
    {
      Warning(
        "Failed to parse instances for the Challenge System in file %s. Challenge parsing failed in challenge: %s\n",
        "scripts/tournaments/challenge_instances.txt",
        pszErr);
      CUtlVectorBase<challenge_instance_t,CUtlMemory<challenge_instance_t,int>>::RemoveAll(&this->m_pInstances);
      if ( (this->m_pInstances.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<challenge_instance_t,int>::Purge(&this->m_pInstances.m_Memory);
    }
    if ( v2 != 0 )
    {
      KeyValues::~KeyValues(v2);
      KeyValues::operator delete(v2);
    }
  }
  else
  {
    KeyValues::deleteThis(v2);
    Warning(
      "Couldn't find instances for the Challenge System in file %s\n",
      "scripts/tournaments/challenge_instances.txt");
  }
}


// CDOTAChallengeSystem::LoadQuests  (line 104, @0x000000000246ba00, libserver.so)  // inlines: CUtlString, Purge, RemoveAll, ~CUtlString
// calls: KeyValues::operator new, KeyValues::KeyValues, KeyValues::LoadFromFile, ParseChallengeQuests, KeyValues::~KeyValues, KeyValues::operator delete, CUtlString::FreeMemoryBlock, KeyValues::deleteThis, Warning, CUtlString::Get, CUtlMemory<challenge_quest_t*, int>::Purge, _Unwind_Resume
// callers: CDOTAChallengeSystem::PostInit
// strings: "scripts/tournaments/challenge_quests.txt", "Couldn't find quests for the Challenge System in file %s\n", "Failed to parse quests for the Challenge System in file %s. Challenge parsing failed in c
void __fastcall CDOTAChallengeSystem::LoadQuests(CDOTAChallengeSystem *const this)
{
  KeyValues *v2; // rbx
  IBaseFileSystem *v3; // rsi
  const char *v4; // rax
  bool v5; // zf
  CUtlString sError; // [rsp+0h] [rbp-30h] BYREF

  v2 = KeyValues::operator new(0x14u);
  KeyValues::KeyValues(v2, "scripts/tournaments/challenge_quests.txt");
  v3 = 0;
  if ( g_pFullFileSystem != 0 )
    v3 = &g_pFullFileSystem->IBaseFileSystem;
  if ( KeyValues::LoadFromFile(v2, v3, "scripts/tournaments/challenge_quests.txt", "GAME", 0) )
  {
    sError.m_pString = 0;
    if ( !ParseChallengeQuests(v2, &this->m_pQuests, &this->m_pInstances, &sError) )
    {
      v4 = CUtlString::Get(&sError);
      Warning(
        "Failed to parse quests for the Challenge System in file %s. Challenge parsing failed in challenge: %s\n",
        "scripts/tournaments/challenge_quests.txt",
        v4);
      v5 = (this->m_pQuests.m_Memory.m_nGrowSize & 0xC0000000) == 0;
      this->m_pQuests.m_Size = 0;
      if ( v5 )
        CUtlMemory<challenge_quest_t *,int>::Purge(&this->m_pQuests.m_Memory);
    }
    if ( v2 != 0 )
    {
      KeyValues::~KeyValues(v2);
      KeyValues::operator delete(v2);
    }
    if ( sError.m_pString != 0 )
      CUtlString::FreeMemoryBlock(&sError);
  }
  else
  {
    KeyValues::deleteThis(v2);
    Warning("Couldn't find quests for the Challenge System in file %s\n", "scripts/tournaments/challenge_quests.txt");
  }
}


// CDOTAChallengeSystem::GetQuestChallengeInstanceByIDs  (line 127, @0x000000000246bb70, libserver.so)  // inlines: _V_strcmp, operator[]
// calls: CUtlString::Get, strcmp
// callers: CDOTAChallengeSystem::SetChallengeDynamicVarForTemplateIndex, CDOTAChallengeSystem::DebugTestQuest
challenge_instance_t *__fastcall CDOTAChallengeSystem::GetQuestChallengeInstanceByIDs(
        CDOTAChallengeSystem *const this,
        int nQuestID,
        int nChallengeID)
{
  int m_Size; // r9d
  challenge_quest_t **m_pMemory; // r10
  __int64 v6; // rcx
  challenge_quest_t::challenge_t *v7; // rbx
  challenge_quest_t *v8; // rax
  int v9; // edi
  challenge_quest_t::challenge_t **v10; // r8
  __int64 v11; // rax
  __int64 v12; // r14
  int v13; // r13d
  const CUtlString *p_sInstanceName; // rdi
  const char *v15; // r15
  const char *v16; // rax

  m_Size = this->m_pQuests.m_Size;
  if ( m_Size <= 0 )
    return 0;
  m_pMemory = this->m_pQuests.m_Memory.m_pMemory;
  v6 = 0;
  v7 = 0;
  do
  {
LABEL_4:
    v8 = m_pMemory[v6];
    if ( v8 != 0 && v8->nQuestID == nQuestID )
    {
      v9 = v8->vecChallenges.m_Size;
      if ( v9 > 0 )
      {
        v10 = v8->vecChallenges.m_Memory.m_pMemory;
        v11 = 0;
        while ( 1 )
        {
          v7 = v10[v11];
          if ( v7 != 0 && v7->nChallengeID == nChallengeID )
            break;
          if ( v9 <= ++v11 )
          {
            ++v6;
            v7 = 0;
            if ( m_Size > v6 )
              goto LABEL_4;
            goto LABEL_12;
          }
        }
      }
    }
    ++v6;
  }
  while ( m_Size > v6 );
LABEL_12:
  if ( v7 == 0 || v7->vecInstances.m_Size > 1 || this->m_pInstances.m_Size <= 0 )
    return 0;
  v12 = 0;
  v13 = 0;
  while ( 1 )
  {
    p_sInstanceName = &v7->vecInstances.m_Memory.m_pMemory->sInstanceName;
    if ( p_sInstanceName != 0 )
    {
      v15 = CUtlString::Get(p_sInstanceName);
      v16 = CUtlString::Get(&this->m_pInstances.m_Memory.m_pMemory[v12].sInstanceName);
      if ( strcmp(v16, v15) == 0 )
        break;
    }
    ++v13;
    ++v12;
    if ( this->m_pInstances.m_Size <= v13 )
      return 0;
  }
  return &this->m_pInstances.m_Memory.m_pMemory[v12];
}


// CDOTAChallengeSystem::OnQueryProgressChanged  (line 176, @0x0000000002472750, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, Purge, RemoveAll, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTAGamerules::GetIngameEvents, CUtlMemory<CHandle<CBaseEntity>, int>::Purge, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, _Unwind_Resume
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTAChallengeSystem::OnQueryProgressChanged(
        CDOTAChallengeSystem *const this,
        int nQueryID,
        int nProgress)
{
  __int64 v5; // rbx
  CHandle<CBaseEntity> *v6; // rdx
  uint32 m_Index; // eax
  __int16 v8; // cx
  CEntityIdentity *v9; // rdx
  CEntityIdentity *v10; // rdx
  CEntityInstance *m_pInstance; // r15
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > events; // [rsp+0h] [rbp-50h] BYREF

  events.m_Size = 0;
  events.m_Memory.m_pMemory = 0;
  events.m_Memory.m_nAllocationCount = 0;
  events.m_Memory.m_nGrowSize = 0;
  CDOTAGamerules::GetIngameEvents(g_pGameRules, &events);
  if ( events.m_Size != 0 )
  {
    if ( events.m_Size > 0 )
    {
      v5 = 0;
      do
      {
        while ( 1 )
        {
          v6 = &events.m_Memory.m_pMemory[v5];
          m_Index = v6->m_Index;
          if ( v6->m_Index + 2 > 1 )
          {
            v8 = v6->m_Index;
            v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v6->m_Index) >> 9) & 0x3F];
            if ( v9 != 0 )
            {
              v10 = &v9[v8 & 0x1FF];
              if ( v10 != 0 && m_Index == v10->m_EHandle.m_Index )
              {
                m_pInstance = v10->m_pInstance;
                if ( v10->m_pInstance != 0 && (*(m_pInstance->_vptr_IHandleEntity + 211))(v10->m_pInstance) != 0 )
                  break;
              }
            }
          }
          if ( events.m_Size <= ++v5 )
            goto LABEL_12;
        }
        (*(m_pInstance->_vptr_IHandleEntity + 223))(m_pInstance, nQueryID, nProgress);
        ++v5;
      }
      while ( events.m_Size > v5 );
    }
LABEL_12:
    events.m_Size = 0;
    if ( (events.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&events.m_Memory);
      if ( (events.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        goto LABEL_18;
    }
  }
  else
  {
    events.m_Size = 0;
    if ( (events.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&events.m_Memory);
      if ( (events.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
LABEL_18:
        CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&events.m_Memory);
    }
  }
}


// CDOTAChallengeSystem::OnQueryFailed  (line 196, @0x0000000002472910, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, Purge, RemoveAll, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTAGamerules::GetIngameEvents, CDOTA_RealtimeCombatAnalyzer::FindQueryForID, CIngameEvent_Base::SetPlayerCompendiumChallengeFailed, CUtlMemory<CHandle<CBaseEntity>, int>::Purge, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, _Unwind_Resume
// globals: CEntityHandle::gm_pEntityList, g_DOTARealtimeCombatAnalyzer
void __fastcall CDOTAChallengeSystem::OnQueryFailed(CDOTAChallengeSystem *const this, int nQueryID)
{
  __int64 v3; // r12
  int v4; // ebx
  CHandle<CBaseEntity> *v5; // rdx
  uint32 m_Index; // eax
  __int16 v7; // cx
  CEntityIdentity *v8; // rdx
  CEntityIdentity *v9; // rdx
  CIngameEvent_Base *m_pInstance; // r15
  const CombatLogQuery *QueryForID; // rax
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > events; // [rsp+0h] [rbp-50h] BYREF

  events.m_Size = 0;
  events.m_Memory.m_pMemory = 0;
  events.m_Memory.m_nAllocationCount = 0;
  events.m_Memory.m_nGrowSize = 0;
  CDOTAGamerules::GetIngameEvents(g_pGameRules, &events);
  if ( events.m_Size != 0 )
  {
    if ( events.m_Size > 0 )
    {
      v3 = 0;
      v4 = 0;
      do
      {
        while ( 1 )
        {
          v5 = &events.m_Memory.m_pMemory[v3];
          m_Index = events.m_Memory.m_pMemory[v3].m_Index;
          if ( m_Index + 2 > 1 )
          {
            v7 = v5->m_Index;
            v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v5->m_Index) >> 9) & 0x3F];
            if ( v8 != 0 )
            {
              v9 = &v8[v7 & 0x1FF];
              if ( v9 != 0 && m_Index == v9->m_EHandle.m_Index )
              {
                m_pInstance = v9->m_pInstance;
                if ( v9->m_pInstance != 0 && (*(m_pInstance->_vptr_IHandleEntity + 211))(v9->m_pInstance) != 0 )
                  break;
              }
            }
          }
          ++v4;
          ++v3;
          if ( events.m_Size <= v4 )
            goto LABEL_12;
        }
        QueryForID = CDOTA_RealtimeCombatAnalyzer::FindQueryForID(&g_DOTARealtimeCombatAnalyzer, nQueryID);
        CIngameEvent_Base::SetPlayerCompendiumChallengeFailed(m_pInstance, QueryForID->m_nPlayerID);
        ++v4;
        ++v3;
      }
      while ( events.m_Size > v4 );
    }
LABEL_12:
    events.m_Size = 0;
    if ( (events.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&events.m_Memory);
      if ( (events.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        goto LABEL_18;
    }
  }
  else
  {
    events.m_Size = 0;
    if ( (events.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&events.m_Memory);
      if ( (events.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
LABEL_18:
        CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&events.m_Memory);
    }
  }
}


// CDOTAChallengeSystem::OnQuerySucceeded  (line 218, @0x0000000002472ac0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEntityIdentity, GetEntryIndex, GetInstance, HasElement, IndexToIdentity, IsValid, LookupEntity, Purge, RemoveAll, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTAGamerules::GetIngameEvents, CIngameEvent_Base::GetGoalForCombatLogQuery, CDOTA_RealtimeCombatAnalyzer::FindQueryForID, CIngameEvent_Base::GetCombatLogQueryIDsForPlayer, CUtlVectorBase<int, CUtlMemory<int, int> >::Find, CIngameEvent_Base::GetPlayerQuestRankCompleted, CIngameEvent_Base::SetPlayerQuestRankCompleted, CIngameEvent_Base::SetPlayerCompendiumChallengeCompleted, CUtlMemory<int, int>::Purge, CUtlMemory<CHandle<CBaseEntity>, int>::Purge, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase (13 total)
// globals: CEntityHandle::gm_pEntityList, g_DOTARealtimeCombatAnalyzer
void __fastcall CDOTAChallengeSystem::OnQuerySucceeded(CDOTAChallengeSystem *const this, int nQueryID)
{
  __int64 v2; // r12
  int v3; // ebx
  CHandle<CBaseEntity> *v4; // rdx
  uint32 m_Index; // eax
  __int16 v6; // cx
  CEntityIdentity *v7; // rdx
  CEntityIdentity *v8; // rdx
  CIngameEvent_Base *m_pInstance; // r13
  unsigned int v10; // r14d
  const CombatLogQuery *QueryForID; // rax
  const CombatLogQuery *v12; // r14
  int m_nPlayerID; // esi
  int PlayerQuestRankCompleted; // eax
  int m_nQueryRank; // edx
  int nQueryIDa; // [rsp+1Ch] [rbp-74h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > events; // [rsp+20h] [rbp-70h] BYREF
  CUtlVector<int,CUtlMemory<int,int> > vecQueryIDs; // [rsp+40h] [rbp-50h] BYREF

  nQueryIDa = nQueryID;
  events.m_Size = 0;
  events.m_Memory.m_pMemory = 0;
  events.m_Memory.m_nAllocationCount = 0;
  events.m_Memory.m_nGrowSize = 0;
  CDOTAGamerules::GetIngameEvents(g_pGameRules, &events);
  if ( events.m_Size != 0 )
  {
    if ( events.m_Size > 0 )
    {
      v2 = 0;
      v3 = 0;
      do
      {
        while ( 1 )
        {
          v4 = &events.m_Memory.m_pMemory[v2];
          m_Index = events.m_Memory.m_pMemory[v2].m_Index;
          if ( m_Index + 2 > 1 )
          {
            v6 = v4->m_Index;
            v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v4->m_Index) >> 9) & 0x3F];
            if ( v7 != 0 )
            {
              v8 = &v7[v6 & 0x1FF];
              if ( v8 != 0 && m_Index == v8->m_EHandle.m_Index )
              {
                m_pInstance = v8->m_pInstance;
                if ( v8->m_pInstance != 0 && (*(m_pInstance->_vptr_IHandleEntity + 211))(v8->m_pInstance) != 0 )
                {
                  v10 = nQueryIDa;
                  if ( CIngameEvent_Base::GetGoalForCombatLogQuery(m_pInstance, nQueryIDa) == 1 )
                    (*(m_pInstance->_vptr_IHandleEntity + 223))(m_pInstance, v10, 1);
                  QueryForID = CDOTA_RealtimeCombatAnalyzer::FindQueryForID(&g_DOTARealtimeCombatAnalyzer, v10);
                  vecQueryIDs.m_Memory.m_pMemory = 0;
                  vecQueryIDs.m_Memory.m_nAllocationCount = 0;
                  v12 = QueryForID;
                  vecQueryIDs.m_Memory.m_nGrowSize = 0;
                  m_nPlayerID = QueryForID->m_nPlayerID;
                  vecQueryIDs.m_Size = 0;
                  CIngameEvent_Base::GetCombatLogQueryIDsForPlayer(m_pInstance, m_nPlayerID, &vecQueryIDs);
                  if ( CUtlVectorBase<int,CUtlMemory<int,int>>::Find(&vecQueryIDs, &nQueryIDa) >= 0 )
                  {
                    if ( (*(v12 + 340) & 8) != 0 )
                    {
                      PlayerQuestRankCompleted = CIngameEvent_Base::GetPlayerQuestRankCompleted(
                                                   m_pInstance,
                                                   v12->m_nPlayerID);
                      m_nQueryRank = v12->m_nQueryRank;
                      if ( PlayerQuestRankCompleted >= m_nQueryRank )
                        m_nQueryRank = PlayerQuestRankCompleted;
                      CIngameEvent_Base::SetPlayerQuestRankCompleted(m_pInstance, v12->m_nPlayerID, m_nQueryRank);
                    }
                    CIngameEvent_Base::SetPlayerCompendiumChallengeCompleted(m_pInstance, v12->m_nPlayerID);
                  }
                  vecQueryIDs.m_Size = 0;
                  if ( (vecQueryIDs.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
                  {
                    CUtlMemory<int,int>::Purge(&vecQueryIDs.m_Memory);
                    if ( (vecQueryIDs.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
                      break;
                  }
                }
              }
            }
          }
          ++v3;
          ++v2;
          if ( events.m_Size <= v3 )
            goto LABEL_22;
        }
        ++v3;
        ++v2;
        CUtlMemory<int,int>::Purge(&vecQueryIDs.m_Memory);
      }
      while ( events.m_Size > v3 );
    }
LABEL_22:
    events.m_Size = 0;
    if ( (events.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&events.m_Memory);
      if ( (events.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&events.m_Memory);
    }
  }
  else
  {
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&events);
  }
}


// CDOTAChallengeSystem::GameInit  (line 261, @0x0000000002482b80, libserver.so)  // inlines: AddToTail, CUtlDelegate<CClientMessageDelegateHook<CDOTAClientMsg_ChallengeReroll_t>, CClientMessageDelegateHook<CDOTAClientMsg_ChallengeReroll_t> >, CUtlDelegate<CClientMessageDelegateHook<CDOTAClientMsg_ChallengeSelect_t>, CClientMessageDelegateHook<CDOTAClientMsg_ChallengeSelect_t> >, CUtlDelegate<CDOTAChallengeSystem, CDOTAChallengeSystem>, Convert<CClientMessageDelegateHook<CDOTAClientMsg_ChallengeReroll_t>, bool (CClientMessageDelegateHook<CDOTAClientMsg_ChallengeReroll_t>::*)(const CDOTAClientMsg_ChallengeReroll_t&), void (detail::GenericClass::*)()>, Convert<CClientMessageDelegateHook<CDOTAClientMsg_ChallengeSelect_t>, bool (CClientMessageDelegateHook<CDOTAClientMsg_ChallengeSelect_t>::*)(const CDOTAClientMsg_ChallengeSelect_t&), void (detail::GenericClass::*)()>, Convert<CDOTAChallengeSystem, bool (CDOTAChallengeSystem::*)(CEntityIndex, const CDOTAClientMsg_ChallengeReroll_t&), void (detail::GenericClass::*)()>, Convert<CDOTAChallengeSystem, bool (CDOTAChallengeSystem::*)(CEntityIndex, const CDOTAClientMsg_ChallengeSelect_t&), void (detail::GenericClass::*)()>, CopyConstruct<IClientMessageDelegateHook*>, CopyFrom<FastDelegate2<CEntityIndex, const CDOTAClientMsg_ChallengeReroll_t&, bool> >, CopyFrom<FastDelegate2<CEntityIndex, const CDOTAClientMsg_ChallengeSelect_t&, bool> >, Element, FastDelegate1<CClientMessageDelegateHook<CDOTAClientMsg_ChallengeReroll_t>, CClientMessageDelegateHook<CDOTAClientMsg_ChallengeReroll_t> >, FastDelegate1<CClientMessageDelegateHook<CDOTAClientMsg_ChallengeSelect_t>, CClientMessageDelegateHook<CDOTAClientMsg_ChallengeSelect_t> >, FastDelegate2<CDOTAChallengeSystem, CDOTAChallengeSystem>, GrowMemory, ListenForGameEvent, Purge, RegisterGameEventHandler<CDOTAClientMsg_ChallengeReroll_t>, RegisterGameEventHandler<CDOTAClientMsg_ChallengeSelect_t>, SetDelegate, SetMementoFrom, SetReleased, UtlMakeDelegate<CClientMessageDelegateHook<CDOTAClientMsg_ChallengeReroll_t>, CClientMessageDelegateHook<CDOTAClientMsg_ChallengeReroll_t>, const CDOTAClientMsg_ChallengeReroll_t&, bool>, UtlMakeDelegate<CClientMessageDelegateHook<CDOTAClientMsg_ChallengeSelect_t>, CClientMessageDelegateHook<CDOTAClientMsg_ChallengeSelect_t>, const CDOTAClientMsg_ChallengeSelect_t&, bool>, UtlMakeDelegate<CDOTAChallengeSystem, CDOTAChallengeSystem, CEntityIndex, const CDOTAClientMsg_ChallengeReroll_t&, bool>, UtlMakeDelegate<CDOTAChallengeSystem, CDOTAChallengeSystem, CEntityIndex, const CDOTAClientMsg_ChallengeSelect_t&, bool>, V_memset, bindmemfunc<CClientMessageDelegateHook<CDOTAClientMsg_ChallengeReroll_t>, bool (CClientMessageDelegateHook<CDOTAClientMsg_ChallengeReroll_t>::*)(const CDOTAClientMsg_ChallengeReroll_t&)>, bindmemfunc<CClientMessageDelegateHook<CDOTAClientMsg_ChallengeSelect_t>, bool (CClientMessageDelegateHook<CDOTAClientMsg_ChallengeSelect_t>::*)(const CDOTAClientMsg_ChallengeSelect_t&)>, bindmemfunc<CDOTAChallengeSystem, bool (CDOTAChallengeSystem::*)(CEntityIndex, const CDOTAClientMsg_ChallengeReroll_t&)>, bindmemfunc<CDOTAChallengeSystem, bool (CDOTAChallengeSystem::*)(CEntityIndex, const CDOTAClientMsg_ChallengeSelect_t&)>, memset, operator=, operator[]
// calls: LoggingSystem_IsChannelEnabled, CUtlVectorBase<IClientMessageDelegateHook*, CUtlMemory<IClientMessageDelegateHook*, int> >::Find, CUtlVectorBase<CMsgServerToGCRerollPlayerChallenge, CUtlMemory<CMsgServerToGCRerollPlayerChallenge, int> >::RemoveAll, CUtlMemory<CMsgServerToGCRerollPlayerChallenge, int>::Purge, LoggingSystem_Log, CUtlMemory<IClientMessageDelegateHook*, int>::Grow
// strings: "dota_hero_swap", "dota_hero_undoselection", "CClientMessageDelegateHook::Registered twice (no intervening Release)\n"
// globals: CDOTAChallengeSystem::ClientMsg_ChallengeSelect(CEntityIndex,CDOTAClientMsg_ChallengeSelect_t const&), CDOTAChallengeSystem::ClientMsg_ChallengeReroll(CEntityIndex,CDOTAClientMsg_ChallengeReroll_t const&), CClientMessageDelegateHook<CDOTAClientMsg_ChallengeSelect_t>::Dispatch(CDOTAClientMsg_ChallengeSelect_t const&), IGameEventSystem::FindOrCreateGameEvent<CDOTAClientMsg_ChallengeSelect_t>(bool)::s_hEvent, CClientMessageDelegateHook<CDOTAClientMsg_ChallengeReroll_t>::Dispatch(CDOTAClientMsg_ChallengeReroll_t const&), IGameEventSystem::FindOrCreateGameEvent<CDOTAClientMsg_ChallengeReroll_t>(bool)::s_hEvent
void __fastcall CDOTAChallengeSystem::GameInit(CDOTAChallengeSystem *const this, const EventGameInit_t *const msg)
{
  CClientMessageDelegateHook<CDOTAClientMsg_ChallengeSelect_t> *p_m_CDOTAClientMsg_ChallengeSelect_tHook; // r14
  bool v4; // zf
  int v5; // eax
  IGameEventManager2 *v6; // rdi
  __int64 v7; // r12
  int v8; // eax
  IClientMessageDelegateHook **v9; // rax
  __int64 m_Size; // r15
  int v11; // eax
  IClientMessageDelegateHook **v12; // rax
  IClientMessageDelegateHook *src; // [rsp+40h] [rbp-50h] BYREF
  void *v14; // [rsp+48h] [rbp-48h]
  __int64 v15; // [rsp+50h] [rbp-40h]

  p_m_CDOTAClientMsg_ChallengeSelect_tHook = &this->m_CDOTAClientMsg_ChallengeSelect_tHook;
  *this->m_bPlayerSelectedChallenge = 0;
  v4 = !this->m_CDOTAClientMsg_ChallengeSelect_tHook.m_bInitialized;
  *&this->m_bPlayerSelectedChallenge[8] = 0;
  *&this->m_bPlayerSelectedChallenge[16] = 0;
  this->m_CDOTAClientMsg_ChallengeSelect_tHook.m_bDestructionAllowed = 0;
  if ( v4 )
  {
    src = &this->m_CDOTAClientMsg_ChallengeSelect_tHook;
    v14 = CClientMessageDelegateHook<CDOTAClientMsg_ChallengeSelect_t>::Dispatch;
    this->m_CDOTAClientMsg_ChallengeSelect_tHook.m_bInitialized = 1;
    v15 = 0;
    (*(*g_pGameEventSystem + 96LL))(
      g_pGameEventSystem,
      &this->m_CDOTAClientMsg_ChallengeSelect_tHook.CUtlSlot,
      &src,
      IGameEventSystem::FindOrCreateGameEvent<CDOTAClientMsg_ChallengeSelect_t>(bool)::s_hEvent,
      0);
    this->m_CDOTAClientMsg_ChallengeSelect_tHook.m_delegate.m_Closure.m_pFunction.__delta = 0;
    this->m_CDOTAClientMsg_ChallengeSelect_tHook.m_delegate.m_Closure.m_pFunction.__pfn = CDOTAChallengeSystem::ClientMsg_ChallengeSelect;
    this->m_CDOTAClientMsg_ChallengeSelect_tHook.m_delegate.m_Closure.m_pthis = this;
  }
  else if ( LoggingSystem_IsChannelEnabled(LOG_SERVER, 2) != 0 )
  {
    LoggingSystem_Log(LOG_SERVER, 2, "CClientMessageDelegateHook::Registered twice (no intervening Release)\n");
  }
  src = p_m_CDOTAClientMsg_ChallengeSelect_tHook;
  this->m_ClientMessageContainer.m_bReleased = 0;
  if ( CUtlVectorBase<IClientMessageDelegateHook *,CUtlMemory<IClientMessageDelegateHook *,int>>::Find(
         &this->m_ClientMessageContainer,
         &src) == -1 )
  {
    m_Size = this->m_ClientMessageContainer.m_Size;
    v11 = this->m_ClientMessageContainer.m_Size;
    if ( m_Size == this->m_ClientMessageContainer.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<IClientMessageDelegateHook *,int>::Grow(&this->m_ClientMessageContainer.m_Memory, 1);
      v11 = this->m_ClientMessageContainer.m_Size;
    }
    this->m_ClientMessageContainer.m_Size = v11 + 1;
    v12 = &this->m_ClientMessageContainer.m_Memory.m_pMemory[m_Size];
    if ( v12 != 0 )
      *v12 = p_m_CDOTAClientMsg_ChallengeSelect_tHook;
  }
  v4 = !this->m_CDOTAClientMsg_ChallengeReroll_tHook.m_bInitialized;
  this->m_CDOTAClientMsg_ChallengeReroll_tHook.m_bDestructionAllowed = 0;
  if ( v4 )
  {
    src = &this->m_CDOTAClientMsg_ChallengeReroll_tHook;
    v14 = CClientMessageDelegateHook<CDOTAClientMsg_ChallengeReroll_t>::Dispatch;
    this->m_CDOTAClientMsg_ChallengeReroll_tHook.m_bInitialized = 1;
    v15 = 0;
    (*(*g_pGameEventSystem + 96LL))(
      g_pGameEventSystem,
      &this->m_CDOTAClientMsg_ChallengeReroll_tHook.CUtlSlot,
      &src,
      IGameEventSystem::FindOrCreateGameEvent<CDOTAClientMsg_ChallengeReroll_t>(bool)::s_hEvent,
      0);
    this->m_CDOTAClientMsg_ChallengeReroll_tHook.m_delegate.m_Closure.m_pFunction.__delta = 0;
    this->m_CDOTAClientMsg_ChallengeReroll_tHook.m_delegate.m_Closure.m_pFunction.__pfn = CDOTAChallengeSystem::ClientMsg_ChallengeReroll;
    this->m_CDOTAClientMsg_ChallengeReroll_tHook.m_delegate.m_Closure.m_pthis = this;
  }
  else if ( LoggingSystem_IsChannelEnabled(LOG_SERVER, 2) != 0 )
  {
    LoggingSystem_Log(LOG_SERVER, 2, "CClientMessageDelegateHook::Registered twice (no intervening Release)\n");
  }
  this->m_ClientMessageContainer.m_bReleased = 0;
  src = &this->m_CDOTAClientMsg_ChallengeReroll_tHook;
  if ( CUtlVectorBase<IClientMessageDelegateHook *,CUtlMemory<IClientMessageDelegateHook *,int>>::Find(
         &this->m_ClientMessageContainer,
         &src) == -1 )
  {
    v7 = this->m_ClientMessageContainer.m_Size;
    v8 = this->m_ClientMessageContainer.m_Size;
    if ( v7 == this->m_ClientMessageContainer.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<IClientMessageDelegateHook *,int>::Grow(&this->m_ClientMessageContainer.m_Memory, 1);
      v8 = this->m_ClientMessageContainer.m_Size;
    }
    this->m_ClientMessageContainer.m_Size = v8 + 1;
    v9 = &this->m_ClientMessageContainer.m_Memory.m_pMemory[v7];
    if ( v9 != 0 )
      *v9 = &this->m_CDOTAClientMsg_ChallengeReroll_tHook;
  }
  this->m_bRegisteredForEvents = 1;
  v5 = (*(gameeventmanager->_vptr_IBaseInterface + 4))(gameeventmanager, &this->CGameEventListener, "dota_hero_swap", 1);
  v6 = gameeventmanager;
  this->m_bRegisteredForEvents = 1;
  this->m_event_dota_hero_swap = v5;
  this->m_event_dota_hero_undoselection = (*(v6->_vptr_IBaseInterface + 4))(
                                            v6,
                                            &this->CGameEventListener,
                                            "dota_hero_undoselection",
                                            1);
  CUtlVectorBase<CMsgServerToGCRerollPlayerChallenge,CUtlMemory<CMsgServerToGCRerollPlayerChallenge,int>>::RemoveAll(&this->m_vecRerollsToSendAtSignout);
  if ( (this->m_vecRerollsToSendAtSignout.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<CMsgServerToGCRerollPlayerChallenge,int>::Purge(&this->m_vecRerollsToSendAtSignout.m_Memory);
}


// CDOTAChallengeSystem::GameShutdown  (line 278, @0x00000000024656f0, libserver.so)  // inlines: Purge, RemoveAll, SetReleased
// calls: CUtlMemory<IClientMessageDelegateHook*, int>::Purge
void __fastcall CDOTAChallengeSystem::GameShutdown(
        CDOTAChallengeSystem *const this,
        const EventGameShutdown_t *const msg)
{
  int v2; // r13d
  __int64 v4; // rbx
  IClientMessageDelegateHook *v5; // rdi
  bool v6; // zf

  v2 = 0;
  v4 = 0;
  while ( this->m_ClientMessageContainer.m_Size > v2 )
  {
    ++v2;
    (*(this->m_ClientMessageContainer.m_Memory.m_pMemory[v4]->_vptr_IClientMessageDelegateHook + 1))(
      this->m_ClientMessageContainer.m_Memory.m_pMemory[v4],
      msg);
    v5 = this->m_ClientMessageContainer.m_Memory.m_pMemory[v4++];
    (*v5->_vptr_IClientMessageDelegateHook)(v5);
  }
  v6 = (this->m_ClientMessageContainer.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_ClientMessageContainer.m_Size = 0;
  if ( v6 )
    CUtlMemory<IClientMessageDelegateHook *,int>::Purge(&this->m_ClientMessageContainer.m_Memory);
  this->m_ClientMessageContainer.m_bReleased = 1;
}


// CDOTAChallengeSystem::GetChallengeTemplateByType  (line 289, @0x000000000246bca0, libserver.so)  // inlines: operator[]
// callers: CDOTAChallengeSystem::AttemptToGenerateChallengeQueryForPlayer, CDOTAChallengeSystem::AddResultToSignout, CDOTAPlayerChallenge::IsFullyComplete, CDOTAPlayerChallenge::GetRequiredHeroID
const challenge_template_t *__fastcall CDOTAChallengeSystem::GetChallengeTemplateByType(
        CDOTAChallengeSystem *const this,
        int nType)
{
  int m_Size; // ecx
  challenge_template_t *m_pMemory; // rdx
  const challenge_template_t *v4; // rdx
  const challenge_template_t *v5; // rcx
  const challenge_template_t *result; // rax

  m_Size = this->m_pTemplates.m_Size;
  if ( m_Size > 0 )
  {
    m_pMemory = this->m_pTemplates.m_Memory.m_pMemory;
    if ( m_pMemory->nChallengeType == nType )
      return this->m_pTemplates.m_Memory.m_pMemory;
    v4 = m_pMemory + 1;
    v5 = &v4[m_Size - 1];
    while ( v4 != v5 )
    {
      result = v4++;
      if ( v4[-1].nChallengeType == nType )
        return result;
    }
  }
  return 0;
}


// CDOTAChallengeSystem::FindChallengeTemplateByName  (line 300, @0x000000000246bcf0, libserver.so)  // inlines: operator char const*, operator[]
// calls: CUtlString::Get, V_stricmp_fast
const challenge_template_t *__fastcall CDOTAChallengeSystem::FindChallengeTemplateByName(
        CDOTAChallengeSystem *const this,
        const char *pTemplateName)
{
  int v4; // r12d
  __int64 v5; // rbx
  const char *v6; // rax

  v4 = 0;
  v5 = 0;
  if ( this->m_pTemplates.m_Size <= 0 )
    return 0;
  while ( 1 )
  {
    v6 = CUtlString::Get(&this->m_pTemplates.m_Memory.m_pMemory[v5].sName);
    if ( V_stricmp_fast(v6, pTemplateName) == 0 )
      break;
    ++v4;
    ++v5;
    if ( this->m_pTemplates.m_Size <= v4 )
      return 0;
  }
  return &this->m_pTemplates.m_Memory.m_pMemory[v5];
}


// CDOTAChallengeSystem::AddRerollToSignoutList  (line 350, @0x000000000247eec0, libserver.so)  // inlines: AddToTail, CopyConstruct<CMsgServerToGCRerollPlayerChallenge>, Element, GrowMemory, operator[]
// calls: CMsgServerToGCRerollPlayerChallenge::CMsgServerToGCRerollPlayerChallenge, CUtlMemory<CMsgServerToGCRerollPlayerChallenge, int>::Grow
void __fastcall CDOTAChallengeSystem::AddRerollToSignoutList(
        CDOTAChallengeSystem *const this,
        CMsgServerToGCRerollPlayerChallenge *pMsg)
{
  __int64 m_Size; // r12
  int v5; // eax
  CMsgServerToGCRerollPlayerChallenge *v6; // rdi

  m_Size = this->m_vecRerollsToSendAtSignout.m_Size;
  v5 = this->m_vecRerollsToSendAtSignout.m_Size;
  if ( m_Size == this->m_vecRerollsToSendAtSignout.m_Memory.m_nAllocationCount )
  {
    CUtlMemory<CMsgServerToGCRerollPlayerChallenge,int>::Grow(&this->m_vecRerollsToSendAtSignout.m_Memory, 1);
    v5 = this->m_vecRerollsToSendAtSignout.m_Size;
  }
  this->m_vecRerollsToSendAtSignout.m_Size = v5 + 1;
  v6 = (this->m_vecRerollsToSendAtSignout.m_Memory.m_pMemory + 40 * m_Size);
  if ( v6 != 0 )
    CMsgServerToGCRerollPlayerChallenge::CMsgServerToGCRerollPlayerChallenge(v6, pMsg);
}


// CDOTAChallengeSystem::AddResultToSignout  (line 355, @0x0000000002488b50, libserver.so)  // inlines: Add, Add<google::protobuf::RepeatedPtrField<CMsgGameMatchSignOut_CAdditionalSignoutMsg>::TypeHandler>, Add<google::protobuf::RepeatedPtrField<CMsgSignOutUpdatePlayerChallenge_Challenge>::TypeHandler>, CUtlMemory, CUtlVector, CUtlVectorBase, Destruct<CMsgServerToGCRerollPlayerChallenge>, Element, Get, GetGameWinner, GetInstance, GetTeamNumber, New, Purge, Remove, RemoveAll, ShiftElementsLeft, Tail, V_memmove, _M_data, _M_dispose, _M_rep, __exchange_and_add, __exchange_and_add_dispatch, __exchange_and_add_single, add_additional_msgs, add_completed, add_rerolled, memmove, operator CBaseEntity*, operator>=<CNetworkVarBase<int, CDOTASubChallengeInfo::NetworkVar_nCompletionThreshold> >, operator[], reroll_msg, set_account_id, set_challenge_rank, set_contents, set_event_id, set_has_account_id, set_has_challenge_rank, set_has_contents, set_has_event_id, set_has_hero_id, set_has_id, set_has_match_id, set_has_progress, set_has_sequence_id, set_hero_id, set_id, set_match_id, set_progress, set_sequence_id, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~basic_string
// calls: CDOTAGamerules::GetIngameEvents, CEntityHandle::operator CEntityInstance*, CDOTA_PlayerResource::IsValidTeamPlayer, CDOTA_PlayerResource::GetSteamAccountID, CIngameEvent_Base::GetPlayerCompendiumChallengeCompleted, CDOTA_PlayerResource::GetPlayer, CMsgSignOutUpdatePlayerChallenge::CMsgSignOutUpdatePlayerChallenge, CDOTA_PlayerResource::GetSelectedHeroID, CIngameEvent_Base::GetPlayerCompendiumChallenge, operator new, CMsgSignOutUpdatePlayerChallenge_Challenge::CMsgSignOutUpdatePlayerChallenge_Challenge, CDOTAChallengeSystem::GetChallengeTemplateByType (31 total)
// callers: CDOTAGCServerSystem::MatchSignOut
// strings: "-----Challenge Event: %d Sequence: %d\n", "-----Challenge is complete, %d of %d\n", "-----Updating with %u\n", "----Updating Weekly/Daily challenge for player %d, challenge %d of %d\n", "-----Challenge Type: %d QueryID: %d Event: %d Sequence: %d\n", "-----Challenge is not complete, %d of %d\n"
void __fastcall CDOTAChallengeSystem::AddResultToSignout(
        CDOTAChallengeSystem *const this,
        const CDOTALobby *pLobby,
        GCSDK::CProtoBufMsg<CMsgGameMatchSignOut> *pMsgSignOut)
{
  CEntityInstance *v4; // rax
  int i; // r15d
  int m_Size; // edx
  CMsgServerToGCRerollPlayerChallenge *m_pMemory; // rax
  char *v8; // rax
  char *v9; // rdx
  bool PlayerCompendiumChallengeCompleted; // r12
  int v11; // ebx
  CDOTAPlayer *Player; // rax
  int SelectedHeroID; // eax
  CDOTAPlayerChallenge *PlayerCompendiumChallenge; // r13
  __int64 current_size; // rax
  CMsgSignOutUpdatePlayerChallenge_Challenge *v16; // rbx
  __int64 v17; // rax
  int v18; // ecx
  int v19; // edx
  int ProgressForCombatLogQuery; // eax
  int v21; // edx
  int v22; // r12d
  __int64 v23; // rbx
  char *v24; // rax
  __int64 v25; // rdx
  CMsgSignOutUpdatePlayerChallenge_Challenge *v26; // r13
  __int64 v27; // rax
  const google::protobuf::Descriptor *v28; // rax
  int v29; // edx
  const google::protobuf::Descriptor *containing_type; // rax
  int containing_type_high; // eax
  int v32; // eax
  CMsgGameMatchSignOut *m_pProtoBufBody; // rbx
  __int64 v34; // rax
  int v35; // edx
  std::string **v36; // r12
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rdi
  __int64 v40; // rdx
  int v41; // r12d
  __int64 v42; // r13
  __int64 v43; // rax
  CMsgSignOutUpdatePlayerChallenge_Challenge *v44; // rax
  int v45; // edx
  int v46; // ecx
  int v47; // ecx
  _DWORD *v48; // rbx
  __int64 v49; // rax
  __int64 v50; // rax
  CMsgSignOutUpdatePlayerChallenge_Challenge *v51; // rax
  int v52; // edx
  int v53; // ecx
  int v54; // ecx
  int v55; // eax
  int v56; // edx
  int nEventIter; // [rsp+24h] [rbp-13Ch]
  __int64 v58; // [rsp+28h] [rbp-138h]
  bool bFoundReroll; // [rsp+53h] [rbp-10Dh]
  int nProgress; // [rsp+54h] [rbp-10Ch]
  int nProgressa; // [rsp+54h] [rbp-10Ch]
  CMsgSignOutUpdatePlayerChallenge_Challenge *unProgress; // [rsp+58h] [rbp-108h]
  int unProgressa; // [rsp+58h] [rbp-108h]
  CMsgSignOutUpdatePlayerChallenge_Challenge *unProgressb; // [rsp+58h] [rbp-108h]
  int unProgressc; // [rsp+58h] [rbp-108h]
  CIngameEvent_WM2017 *pWM2017; // [rsp+60h] [rbp-100h]
  int nCompletionThreshold; // [rsp+68h] [rbp-F8h]
  int nCompletionThresholda; // [rsp+68h] [rbp-F8h]
  int nQuestRankCompleted; // [rsp+6Ch] [rbp-F4h]
  int nQuestRankCompleteda; // [rsp+6Ch] [rbp-F4h]
  const challenge_template_t *pChallengeTemplate; // [rsp+70h] [rbp-F0h]
  int pChallengeTemplatea; // [rsp+70h] [rbp-F0h]
  bool bWinningTeam; // [rsp+7Bh] [rbp-E5h]
  AccountID_t nAccountID; // [rsp+7Ch] [rbp-E4h]
  char v77; // [rsp+8Fh] [rbp-D1h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > events; // [rsp+90h] [rbp-D0h] BYREF
  CUtlVector<int,CUtlMemory<int,int> > vecIDs; // [rsp+B0h] [rbp-B0h] BYREF
  _BYTE v80[16]; // [rsp+D0h] [rbp-90h] BYREF
  int v81; // [rsp+E0h] [rbp-80h]
  google::protobuf::internal::RepeatedPtrFieldBase v82; // [rsp+E8h] [rbp-78h] BYREF
  google::protobuf::internal::RepeatedPtrFieldBase v83; // [rsp+100h] [rbp-60h] BYREF
  AccountID_t v84; // [rsp+118h] [rbp-48h]
  int v85; // [rsp+11Ch] [rbp-44h]
  __int64 v86; // [rsp+120h] [rbp-40h]

  events.m_Size = 0;
  events.m_Memory.m_pMemory = 0;
  events.m_Memory.m_nAllocationCount = 0;
  events.m_Memory.m_nGrowSize = 0;
  CDOTAGamerules::GetIngameEvents(g_pGameRules, &events);
  if ( events.m_Size > 0 )
  {
    v58 = 0;
    for ( nEventIter = 0; events.m_Size > nEventIter; ++nEventIter )
    {
      v4 = CEntityHandle::operator CEntityInstance *(&events.m_Memory.m_pMemory[v58]);
      pWM2017 = v4;
      if ( v4 == 0 || (*(v4->_vptr_IHandleEntity + 211))(v4) == 0 )
        break;
      for ( i = 0; i != 24; ++i )
      {
        while ( 1 )
        {
          if ( CDOTA_PlayerResource::IsValidTeamPlayer(g_pDOTAPlayerResource, i) )
          {
            nAccountID = CDOTA_PlayerResource::GetSteamAccountID(g_pDOTAPlayerResource, i);
            if ( nAccountID != 0 )
              break;
          }
          if ( ++i == 24 )
            goto LABEL_50;
        }
        m_Size = this->m_vecRerollsToSendAtSignout.m_Size;
        if ( m_Size <= 0 )
          goto LABEL_14;
        m_pMemory = this->m_vecRerollsToSendAtSignout.m_Memory.m_pMemory;
        if ( nAccountID != *(m_pMemory + 8) )
        {
          v8 = m_pMemory + 72;
          v9 = &v8[40 * (m_Size - 1)];
          while ( v8 != v9 )
          {
            v8 += 40;
            if ( nAccountID == *(v8 - 10) )
              goto LABEL_54;
          }
LABEL_14:
          bFoundReroll = 0;
          goto LABEL_15;
        }
LABEL_54:
        bFoundReroll = 1;
LABEL_15:
        PlayerCompendiumChallengeCompleted = CIngameEvent_Base::GetPlayerCompendiumChallengeCompleted(pWM2017, i);
        v11 = *&g_pGameRules[16].m_szQuestName[80];
        Player = CDOTA_PlayerResource::GetPlayer(g_pDOTAPlayerResource, i);
        bWinningTeam = Player != 0 && v11 == Player->m_iTeamNum.m_Value;
        CMsgSignOutUpdatePlayerChallenge::CMsgSignOutUpdatePlayerChallenge(v80);
        v84 = nAccountID;
        v81 |= 9u;
        v86 = *(pLobby + 27);
        SelectedHeroID = CDOTA_PlayerResource::GetSelectedHeroID(g_pDOTAPlayerResource, i);
        v81 |= 0x10u;
        v85 = SelectedHeroID;
        if ( bWinningTeam )
        {
          PlayerCompendiumChallenge = CIngameEvent_Base::GetPlayerCompendiumChallenge(pWM2017, i);
          if ( PlayerCompendiumChallenge != 0 )
          {
            current_size = v82.current_size_;
            if ( v82.current_size_ < v82.allocated_size_ )
            {
              ++v82.current_size_;
              v16 = v82.elements_[current_size];
            }
            else
            {
              if ( v82.allocated_size_ == v82.total_size_ )
                google::protobuf::internal::RepeatedPtrFieldBase::Reserve(&v82, v82.allocated_size_ + 1);
              v16 = operator new(0x28u);
              CMsgSignOutUpdatePlayerChallenge_Challenge::CMsgSignOutUpdatePlayerChallenge_Challenge(v16);
              v17 = v82.current_size_;
              ++v82.allocated_size_;
              ++v82.current_size_;
              v82.elements_[v17] = v16;
            }
            v18 = *(v16 + 4);
            *(v16 + 6) = *(PlayerCompendiumChallenge + 9);
            *(v16 + 4) = v18 | 1;
            v19 = *(PlayerCompendiumChallenge + 16);
            *(v16 + 4) = v18 | 3;
            *(v16 + 7) = v19;
            pChallengeTemplate = CDOTAChallengeSystem::GetChallengeTemplateByType(
                                   this,
                                   *(PlayerCompendiumChallenge + 11));
            if ( pChallengeTemplate == 0 )
              goto LABEL_49;
            vecIDs.m_Size = 0;
            vecIDs.m_Memory.m_pMemory = 0;
            vecIDs.m_Memory.m_nAllocationCount = 0;
            vecIDs.m_Memory.m_nGrowSize = 0;
            CIngameEvent_Base::GetCombatLogQueryIDsForPlayer(pWM2017, i, &vecIDs);
            nQuestRankCompleted = CIngameEvent_Base::GetPlayerQuestRankCompleted(pWM2017, i);
            if ( pChallengeTemplate->bMultiMatchChallenge && vecIDs.m_Size != 0 )
            {
              CIngameEvent_Base::GetProgressForCombatLogQuery(pWM2017, vecIDs.m_Memory.m_pMemory[vecIDs.m_Size - 1]);
              ProgressForCombatLogQuery = CIngameEvent_Base::GetProgressForCombatLogQuery(
                                            pWM2017,
                                            vecIDs.m_Memory.m_pMemory[vecIDs.m_Size - 1]);
              v21 = *(v16 + 4);
              *(v16 + 8) = ProgressForCombatLogQuery - *(PlayerCompendiumChallenge + 15);
              *(v16 + 4) = v21 | 4;
              if ( PlayerCompendiumChallengeCompleted )
                goto LABEL_27;
            }
            else if ( PlayerCompendiumChallengeCompleted )
            {
              v21 = *(v16 + 4);
              *(v16 + 8) = *(PlayerCompendiumChallenge + 20) - *(PlayerCompendiumChallenge + 15);
LABEL_27:
              *(v16 + 4) = v21 | 0xC;
              *(v16 + 9) = nQuestRankCompleted;
            }
            else
            {
              *(v16 + 4) |= 4u;
              *(v16 + 8) = 0;
            }
            vecIDs.m_Size = 0;
            if ( (vecIDs.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
            {
              CUtlMemory<int,int>::Purge(&vecIDs.m_Memory);
              if ( (vecIDs.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
                CUtlMemory<int,int>::Purge(&vecIDs.m_Memory);
            }
          }
        }
        if ( (*(pWM2017->_vptr_IHandleEntity + 207))(pWM2017) == 16 )
        {
          vecIDs.m_Size = 0;
          vecIDs.m_Memory.m_pMemory = 0;
          vecIDs.m_Memory.m_nAllocationCount = 0;
          vecIDs.m_Memory.m_nGrowSize = 0;
          CIngameEvent_WM2016::GetSubChallengesForPlayer(pWM2017, i, &vecIDs);
          nQuestRankCompleteda = vecIDs.m_Size;
          if ( vecIDs.m_Size > 0 )
          {
            v41 = 1;
            v42 = 0;
            do
            {
              pChallengeTemplatea = v41;
              v48 = *&vecIDs.m_Memory.m_pMemory[v42];
              if ( v48 != 0 )
              {
                Msg(
                  "----Updating Weekly/Daily challenge for player %d, challenge %d of %d\n",
                  i,
                  v41,
                  nQuestRankCompleteda);
                if ( bWinningTeam )
                {
                  v49 = v82.current_size_;
                  if ( v48[8] >= v48[9] )
                  {
                    if ( v82.current_size_ < v82.allocated_size_ )
                    {
                      ++v82.current_size_;
                      v44 = v82.elements_[v49];
                    }
                    else
                    {
                      if ( v82.allocated_size_ == v82.total_size_ )
                        google::protobuf::internal::RepeatedPtrFieldBase::Reserve(&v82, v82.allocated_size_ + 1);
                      unProgress = operator new(0x28u);
                      CMsgSignOutUpdatePlayerChallenge_Challenge::CMsgSignOutUpdatePlayerChallenge_Challenge(unProgress);
                      v43 = v82.current_size_;
                      ++v82.allocated_size_;
                      ++v82.current_size_;
                      v82.elements_[v43] = unProgress;
                      v44 = unProgress;
                    }
                    v45 = *(v44 + 4);
                    *(v44 + 6) = v48[12];
                    *(v44 + 4) = v45 | 1;
                    v46 = v48[13];
                    *(v44 + 4) = v45 | 3;
                    *(v44 + 7) = v46;
                    v47 = v48[9] - v48[15];
                    *(v44 + 9) = 1;
                    if ( v47 < 0 )
                      v47 = 0;
                    *(v44 + 4) = v45 | 0xF;
                    *(v44 + 8) = v47;
                    unProgressa = v47;
                    nCompletionThreshold = v48[9];
                    nProgress = v48[8];
                    Msg("-----Challenge Event: %d Sequence: %d\n", v48[12], v48[13]);
                    Msg("-----Challenge is complete, %d of %d\n", nProgress, nCompletionThreshold);
                    Msg("-----Updating with %u\n", unProgressa);
                  }
                  else
                  {
                    if ( v82.current_size_ < v82.allocated_size_ )
                    {
                      ++v82.current_size_;
                      v51 = v82.elements_[v49];
                    }
                    else
                    {
                      if ( v82.allocated_size_ == v82.total_size_ )
                        google::protobuf::internal::RepeatedPtrFieldBase::Reserve(&v82, v82.allocated_size_ + 1);
                      unProgressb = operator new(0x28u);
                      CMsgSignOutUpdatePlayerChallenge_Challenge::CMsgSignOutUpdatePlayerChallenge_Challenge(unProgressb);
                      v50 = v82.current_size_;
                      ++v82.allocated_size_;
                      ++v82.current_size_;
                      v82.elements_[v50] = unProgressb;
                      v51 = unProgressb;
                    }
                    v52 = *(v51 + 4);
                    *(v51 + 6) = v48[12];
                    *(v51 + 4) = v52 | 1;
                    v53 = v48[13];
                    *(v51 + 4) = v52 | 3;
                    *(v51 + 7) = v53;
                    v54 = v48[8] - v48[15];
                    *(v51 + 9) = 0;
                    if ( v54 < 0 )
                      v54 = 0;
                    *(v51 + 4) = v52 | 0xF;
                    *(v51 + 8) = v54;
                    unProgressc = v54;
                    nCompletionThresholda = v48[9];
                    nProgressa = v48[8];
                    Msg(
                      "-----Challenge Type: %d QueryID: %d Event: %d Sequence: %d\n",
                      v48[5],
                      v48[11],
                      v48[12],
                      v48[13]);
                    Msg("-----Challenge is not complete, %d of %d\n", nProgressa, nCompletionThresholda);
                    Msg("-----Updating with %u\n", unProgressc);
                  }
                }
              }
              v42 += 2;
              ++v41;
            }
            while ( vecIDs.m_Size > pChallengeTemplatea );
          }
          vecIDs.m_Size = 0;
          if ( (vecIDs.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
          {
            CUtlMemory<CDOTASubChallengeInfo const*,int>::Purge(&vecIDs.m_Memory);
            if ( (vecIDs.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
              CUtlMemory<CDOTASubChallengeInfo const*,int>::Purge(&vecIDs.m_Memory);
          }
        }
        if ( bFoundReroll )
        {
          v22 = this->m_vecRerollsToSendAtSignout.m_Size - 1;
          if ( v22 >= 0 )
          {
            v23 = 40LL * v22;
            while ( 1 )
            {
              while ( 1 )
              {
                v24 = this->m_vecRerollsToSendAtSignout.m_Memory.m_pMemory + v23;
                if ( nAccountID == *(v24 + 8) )
                  break;
                --v22;
                v23 -= 40;
                if ( v22 == -1 )
                  goto LABEL_44;
              }
              v25 = v83.current_size_;
              if ( v83.current_size_ >= v83.allocated_size_ )
                break;
              ++v83.current_size_;
              v28 = *(v24 + 3);
              v26 = v83.elements_[v25];
              if ( v28 == 0 )
                goto LABEL_53;
LABEL_39:
              v29 = *(v26 + 4);
              *(v26 + 6) = v28->containing_type_;
              *(v26 + 4) = v29 | 1;
              containing_type = *(this->m_vecRerollsToSendAtSignout.m_Memory.m_pMemory + v23 + 24);
              if ( containing_type == 0 )
                containing_type = CMsgServerToGCRerollPlayerChallenge::default_instance_->containing_type_;
              containing_type_high = HIDWORD(containing_type->containing_type_);
              *(v26 + 4) = v29 | 3;
              *(v26 + 7) = containing_type_high;
              (**(this->m_vecRerollsToSendAtSignout.m_Memory.m_pMemory + v23))(this->m_vecRerollsToSendAtSignout.m_Memory.m_pMemory + v23);
              v32 = this->m_vecRerollsToSendAtSignout.m_Size;
              if ( v32 - v22 - 1 > 0 )
              {
                memmove(
                  this->m_vecRerollsToSendAtSignout.m_Memory.m_pMemory + v23,
                  this->m_vecRerollsToSendAtSignout.m_Memory.m_pMemory + v23 + 40,
                  40LL * (this->m_vecRerollsToSendAtSignout.m_Size - v22 - 1));
                v32 = this->m_vecRerollsToSendAtSignout.m_Size;
              }
              --v22;
              v23 -= 40;
              this->m_vecRerollsToSendAtSignout.m_Size = v32 - 1;
              if ( v22 == -1 )
                goto LABEL_44;
            }
            if ( v83.allocated_size_ == v83.total_size_ )
              google::protobuf::internal::RepeatedPtrFieldBase::Reserve(&v83, v83.allocated_size_ + 1);
            v26 = operator new(0x28u);
            CMsgSignOutUpdatePlayerChallenge_Challenge::CMsgSignOutUpdatePlayerChallenge_Challenge(v26);
            v27 = v83.current_size_;
            ++v83.allocated_size_;
            ++v83.current_size_;
            v83.elements_[v27] = v26;
            v28 = *(this->m_vecRerollsToSendAtSignout.m_Memory.m_pMemory + v23 + 24);
            if ( v28 != 0 )
              goto LABEL_39;
LABEL_53:
            v28 = CMsgServerToGCRerollPlayerChallenge::default_instance_->containing_type_;
            goto LABEL_39;
          }
        }
LABEL_44:
        m_pProtoBufBody = pMsgSignOut->m_pProtoBufBody;
        v34 = *(m_pProtoBufBody + 58);
        v35 = *(m_pProtoBufBody + 59);
        if ( v34 < v35 )
        {
          v40 = *(m_pProtoBufBody + 28);
          *(m_pProtoBufBody + 58) = v34 + 1;
          v36 = *(v40 + 8 * v34);
        }
        else
        {
          if ( v35 == *(m_pProtoBufBody + 60) )
            google::protobuf::internal::RepeatedPtrFieldBase::Reserve((m_pProtoBufBody + 224), v35 + 1);
          v36 = operator new(0x28u);
          CMsgGameMatchSignOut_CAdditionalSignoutMsg::CMsgGameMatchSignOut_CAdditionalSignoutMsg(v36);
          v37 = *(m_pProtoBufBody + 58);
          v38 = *(m_pProtoBufBody + 28);
          ++*(m_pProtoBufBody + 59);
          *(m_pProtoBufBody + 58) = v37 + 1;
          *(v38 + 8 * v37) = v36;
        }
        *(v36 + 8) = 7587;
        *(v36 + 4) |= 1u;
        google::protobuf::MessageLite::SerializeAsString(&vecIDs);
        *(v36 + 4) |= 2u;
        std::string::assign(v36[3], &vecIDs);
        v39 = *&vecIDs.m_Size - 24LL;
        if ( (*&vecIDs.m_Size - 24LL) != &std::string::_Rep::_S_empty_rep_storage )
        {
          if ( &_pthread_key_create != 0 )
          {
            v55 = _InterlockedExchangeAdd((v39 + 16), 0xFFFFFFFF);
          }
          else
          {
            v56 = *(*&vecIDs.m_Size - 8LL);
            *(*&vecIDs.m_Size - 8LL) = v56 - 1;
            v55 = v56;
          }
          if ( v55 <= 0 )
            std::string::_Rep::_M_destroy(v39, &v77);
        }
LABEL_49:
        CMsgSignOutUpdatePlayerChallenge::~CMsgSignOutUpdatePlayerChallenge(v80);
      }
LABEL_50:
      ++v58;
    }
  }
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&events);
}


// CGCClientJobRerollPlayerChallenge::~CGCClientJobRerollPlayerChallenge  (line 533, @0x00000000024b3f70, libserver.so)  // inlines: ~CGCClientJob
// calls: CMsgServerToGCRerollPlayerChallenge::~CMsgServerToGCRerollPlayerChallenge, GCSDK::CJob::~CJob
void __fastcall CGCClientJobRerollPlayerChallenge::~CGCClientJobRerollPlayerChallenge(
        CGCClientJobRerollPlayerChallenge *const this)
{
  CMsgServerToGCRerollPlayerChallenge *v2; // rdi

  v2 = (this + 320);
  *(v2 - 40) = &off_40DE5D0;
  CMsgServerToGCRerollPlayerChallenge::~CMsgServerToGCRerollPlayerChallenge(v2);
  *this = off_40DB690;
  GCSDK::CJob::~CJob(this);
}


// CGCClientJobRerollPlayerChallenge::~CGCClientJobRerollPlayerChallenge  (line 533, @0x00000000024b3fb0, libserver.so)  // inlines: ~CGCClientJob, ~CGCClientJobRerollPlayerChallenge
// calls: CMsgServerToGCRerollPlayerChallenge::~CMsgServerToGCRerollPlayerChallenge, GCSDK::CJob::~CJob, operator delete
void __fastcall CGCClientJobRerollPlayerChallenge::~CGCClientJobRerollPlayerChallenge(
        CGCClientJobRerollPlayerChallenge *const this)
{
  CMsgServerToGCRerollPlayerChallenge *v2; // rdi

  v2 = (this + 320);
  *(v2 - 40) = &off_40DE5D0;
  CMsgServerToGCRerollPlayerChallenge::~CMsgServerToGCRerollPlayerChallenge(v2);
  *this = off_40DB690;
  GCSDK::CJob::~CJob(this);
  operator delete(this);
}


// CGCClientJobRerollPlayerChallenge::BYieldingRunJob  (line 557, @0x00000000024b3e60, libserver.so)  // inlines: AddRerollToSignoutList, AddToTail, BYldSendMessageAndGetReply, CopyConstruct<CMsgServerToGCRerollPlayerChallenge>, Element, GDOTAChallengeSystem, GrowMemory, operator[]
// calls: CMsgGCRerollPlayerChallengeResponse::CMsgGCRerollPlayerChallengeResponse, GCSDK::CGCClient::YldSendMessageAndGetReplyEx, CMsgGCRerollPlayerChallengeResponse::~CMsgGCRerollPlayerChallengeResponse, CMsgServerToGCRerollPlayerChallenge::CMsgServerToGCRerollPlayerChallenge, CUtlMemory<CMsgServerToGCRerollPlayerChallenge, int>::Grow, _Unwind_Resume
// globals: g_pDOTAChallengeSystemImp
bool __fastcall CGCClientJobRerollPlayerChallenge::BYieldingRunJob(
        CGCClientJobRerollPlayerChallenge *const this,
        void *pvStartParam)
{
  bool result; // al
  const CMsgServerToGCRerollPlayerChallenge *v4; // r13
  CDOTAChallengeSystem *v5; // rbx
  __int64 m_Size; // r14
  int v7; // eax
  CMsgServerToGCRerollPlayerChallenge *v8; // rdi
  _BYTE v9[24]; // [rsp+10h] [rbp-40h] BYREF
  int v10; // [rsp+28h] [rbp-28h]

  result = 0;
  if ( *(this + 88) != 0 )
  {
    v4 = (this + 320);
    CMsgGCRerollPlayerChallengeResponse::CMsgGCRerollPlayerChallengeResponse(v9);
    if ( GCSDK::CGCClient::YldSendMessageAndGetReplyEx(
           *(this + 38),
           (this + 320),
           0x1DA1u,
           v9,
           0x1DA2u,
           GCSDK::EExpectedReply::kExpectedReply_Critical,
           0) == GCSDK::ESendMessageAndGetReply::k_ESendMessageAndGetReply_OK
      && v10 != 1 )
    {
      goto LABEL_4;
    }
    v5 = g_pDOTAChallengeSystemImp;
    m_Size = g_pDOTAChallengeSystemImp->m_vecRerollsToSendAtSignout.m_Size;
    v7 = g_pDOTAChallengeSystemImp->m_vecRerollsToSendAtSignout.m_Size;
    if ( m_Size == g_pDOTAChallengeSystemImp->m_vecRerollsToSendAtSignout.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<CMsgServerToGCRerollPlayerChallenge,int>::Grow(
        &g_pDOTAChallengeSystemImp->m_vecRerollsToSendAtSignout.m_Memory,
        1);
      v7 = v5->m_vecRerollsToSendAtSignout.m_Size;
    }
    v5->m_vecRerollsToSendAtSignout.m_Size = v7 + 1;
    v8 = (v5->m_vecRerollsToSendAtSignout.m_Memory.m_pMemory + 40 * m_Size);
    if ( v8 != 0 )
    {
      CMsgServerToGCRerollPlayerChallenge::CMsgServerToGCRerollPlayerChallenge(v8, v4);
      CMsgGCRerollPlayerChallengeResponse::~CMsgGCRerollPlayerChallengeResponse(v9);
      return 1;
    }
    else
    {
LABEL_4:
      CMsgGCRerollPlayerChallengeResponse::~CMsgGCRerollPlayerChallengeResponse(v9);
      return 1;
    }
  }
  return result;
}


// CDOTAChallengeSystem::ClientMsg_ChallengeReroll  (line 580, @0x0000000002489740, libserver.so)  // inlines: CGCClientJob, CGCClientJobRerollPlayerChallenge, CSteamID, GetInstance, IndexToIdentity, Instance, IsUsed, LookupEntityByIndex, LookupEntityByNetworkIndex, SetChallengeData, mutable_reroll_msg, set_account_id, set_event_id, set_has_account_id, set_has_event_id, set_has_reroll_msg, set_has_sequence_id, set_sequence_id, ~CGCClientJob
// calls: GetDOTAPlayerChallenge, CanChallengeBeRerolled, GCClientSystem, operator new, GCSDK::CJob::CJob, CMsgServerToGCRerollPlayerChallenge::CMsgServerToGCRerollPlayerChallenge, CBaseMultiplayerPlayer::GetSteamID, GCSDK::CJob::StartJob, CMsgClientToGCRerollPlayerChallenge::CMsgClientToGCRerollPlayerChallenge, operator delete, _Unwind_Resume, CMsgServerToGCRerollPlayerChallenge::~CMsgServerToGCRerollPlayerChallenge (13 total)
bool __fastcall CDOTAChallengeSystem::ClientMsg_ChallengeReroll(
        CDOTAChallengeSystem *const this,
        CEntityIndex nEntityIndex,
        const CDOTAClientMsg_ChallengeReroll_t *const msg)
{
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rax
  CDOTAPlayer *m_pInstance; // r13
  CDOTAPlayerChallenge *DOTAPlayerChallenge; // rax
  CGCClientSystem *v8; // rax
  int (**v9)(...); // r15
  CGCClientSystem *v10; // r14
  GCSDK::CJob *v11; // rbx
  bool v12; // zf
  int m_pvStartParam; // eax
  CMsgClientToGCRerollPlayerChallenge *v14; // rdi
  int v15; // r13d
  int v16; // r12d
  CMsgClientToGCRerollPlayerChallenge *v17; // rdi
  int v19; // edx
  CMsgClientToGCRerollPlayerChallenge *v20; // r14
  CMsgClientToGCRerollPlayerChallenge *v21; // r12
  uint32 v22; // [rsp-8h] [rbp-4Ch] BYREF
  int v23; // [rsp-4h] [rbp-48h] BYREF
  uint32 pnTimeRerollIsAvailable; // [rsp+0h] [rbp-44h]

  if ( nEntityIndex.m_Data > 0x7FFE )
    return 1;
  v4 = g_pGameEntitySystem->m_EntityList.m_pIdentityChunks[nEntityIndex.m_Data >> 9];
  if ( v4 != 0 )
  {
    v5 = &v4[nEntityIndex.m_Data & 0x1FF];
    if ( v5 != 0 && nEntityIndex.m_Data == (v5->m_EHandle.m_Index & 0x7FFF) )
    {
      m_pInstance = v5->m_pInstance;
      if ( v5->m_pInstance != 0 )
      {
        DOTAPlayerChallenge = GetDOTAPlayerChallenge(v5->m_pInstance, *(msg + 6), *(msg + 8));
        if ( DOTAPlayerChallenge != 0 && CanChallengeBeRerolled(DOTAPlayerChallenge, &v22) )
        {
          v8 = GCClientSystem();
          v9 = (v8 + 24);
          v10 = v8;
          v11 = operator new(0x168u);
          GCSDK::CJob::CJob(v11, (v10 + 72));
          v11[1]._vptr_CJob = v9;
          v11->_vptr_CJob = &off_40DE5D0;
          *(&v11[1] + 2) = 4;
          CMsgServerToGCRerollPlayerChallenge::CMsgServerToGCRerollPlayerChallenge(&v11[1].m_JobID);
          LODWORD(v11[1].m_pvStartParam) |= 1u;
          HIWORD(pnTimeRerollIsAvailable) = BYTE2(pnTimeRerollIsAvailable) & 0xF;
          v23 = 0;
          v11[1].m_cLocksWaitedFor = 0;
          pnTimeRerollIsAvailable &= 0xFFF00000;
          v12 = !CBaseMultiplayerPlayer::GetSteamID(m_pInstance, &v23);
          m_pvStartParam = v11[1].m_pvStartParam;
          if ( !v12 )
          {
            v19 = v23;
            m_pvStartParam |= 1u;
            LODWORD(v11[1].m_pvStartParam) = m_pvStartParam;
            v11[1].m_cLocksWaitedFor = v19;
          }
          v14 = *&v11[1].m_flags.m_bits;
          v15 = *(msg + 8);
          v16 = *(msg + 6);
          LODWORD(v11[1].m_pvStartParam) = m_pvStartParam | 2;
          if ( v14 == 0 )
          {
            v20 = operator new(0x20u);
            CMsgClientToGCRerollPlayerChallenge::CMsgClientToGCRerollPlayerChallenge(v20);
            *&v11[1].m_flags.m_bits = v20;
            v14 = v20;
          }
          *(v14 + 4) |= 1u;
          *(v14 + 6) = v16;
          v17 = *&v11[1].m_flags.m_bits;
          LODWORD(v11[1].m_pvStartParam) |= 2u;
          if ( v17 == 0 )
          {
            v21 = operator new(0x20u);
            CMsgClientToGCRerollPlayerChallenge::CMsgClientToGCRerollPlayerChallenge(v21);
            *&v11[1].m_flags.m_bits = v21;
            v17 = v21;
          }
          *(v17 + 4) |= 2u;
          *(v17 + 7) = v15;
          GCSDK::CJob::StartJob(v11, 0);
        }
      }
    }
  }
  return 1;
}


// CDOTAChallengeSystem::CanSelectChallenges  (line 602, @0x000000000246bd60, libserver.so)  // inlines: DOTAGameRules, State_Get, State_IsBefore, State_IsBeforeGameInProgress, State_Order
// globals: DOTAGameRules_Common::State_Order(DOTA_GameState)::STATE_ORDERING
bool __fastcall CDOTAChallengeSystem::CanSelectChallenges(CDOTAChallengeSystem *const this, CDOTAPlayer *pPlayer)
{
  __int64 v2; // rdx
  int v3; // eax

  if ( g_pGameRules == 0 || this->m_bPlayerSelectedChallenge[(*(pPlayer->_vptr_IHandleEntity + 393))(pPlayer)] )
    return 0;
  v2 = *&g_pGameRules[6].m_szQuestName[28];
  v3 = 0;
  if ( v2 <= 0xA )
    v3 = DOTAGameRules_Common::State_Order(DOTA_GameState)::STATE_ORDERING[v2];
  return dword_491AD14 > v3;
}


// CDOTAChallengeSystem::ClientMsg_ChallengeSelect  (line 613, @0x0000000002485de0, libserver.so)  // inlines: GetInstance, IndexToIdentity, Instance, IsUsed, LookupEntityByIndex, LookupEntityByNetworkIndex
// calls: Msg, CDOTAChallengeSystem::HandleQuestSelectForPlayer
// strings: "Received client msg ChallengeSelect from playerID %d\n"
bool __fastcall CDOTAChallengeSystem::ClientMsg_ChallengeSelect(
        CDOTAChallengeSystem *const this,
        CEntityIndex nEntityIndex,
        const CDOTAClientMsg_ChallengeSelect_t *const msg)
{
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rax
  CDOTAPlayer *m_pInstance; // rbx
  int v8; // eax

  if ( nEntityIndex.m_Data > 0x7FFE )
    return 1;
  v4 = g_pGameEntitySystem->m_EntityList.m_pIdentityChunks[nEntityIndex.m_Data >> 9];
  if ( v4 != 0 )
  {
    v5 = &v4[nEntityIndex.m_Data & 0x1FF];
    if ( v5 != 0 && nEntityIndex.m_Data == (v5->m_EHandle.m_Index & 0x7FFF) )
    {
      m_pInstance = v5->m_pInstance;
      if ( v5->m_pInstance != 0 )
      {
        v8 = (*(m_pInstance->_vptr_IHandleEntity + 393))(m_pInstance);
        Msg("Received client msg ChallengeSelect from playerID %d\n", v8);
        CDOTAChallengeSystem::HandleQuestSelectForPlayer(this, m_pInstance, *(msg + 6), *(msg + 7));
      }
    }
  }
  return 1;
}


// CDOTAChallengeSystem::HandleQuestSelectForPlayer  (line 624, @0x0000000002485d60, libserver.so)
// calls: GetDOTAPlayerQuestChallenge, CDOTAChallengeSystem::InternalSetPlayerChallenge, Msg
// callers: CDOTAChallengeSystem::ClientMsg_ChallengeSelect
// strings: "ChallengeSelect failed for playerID %d, unable to find Challenge QuestID: %u  ChallengeID
void __fastcall CDOTAChallengeSystem::HandleQuestSelectForPlayer(
        CDOTAChallengeSystem *const this,
        CDOTAPlayer *pPlayer,
        uint32 unQuestID,
        uint32 unChallengeID)
{
  CDOTAPlayerChallenge *DOTAPlayerQuestChallenge; // rax
  int v9; // eax

  DOTAPlayerQuestChallenge = GetDOTAPlayerQuestChallenge(pPlayer, unQuestID, unChallengeID);
  if ( DOTAPlayerQuestChallenge != 0 )
  {
    CDOTAChallengeSystem::InternalSetPlayerChallenge(this, pPlayer, DOTAPlayerQuestChallenge, 0);
  }
  else
  {
    v9 = (*(pPlayer->_vptr_IHandleEntity + 393))(pPlayer);
    Msg(
      "ChallengeSelect failed for playerID %d, unable to find Challenge QuestID: %u  ChallengeID: %u !\n",
      v9,
      unQuestID,
      unChallengeID);
  }
}


// CDOTAChallengeSystem::ClearChallengeForPlayer  (line 636, @0x000000000247fd00, libserver.so)  // inlines: DOTAGameRules
// calls: CDOTAGamerules::GetFirstIngameEvent, CIngameEvent_Base::ClearPlayerCompendiumChallenge, CDOTA_RealtimeCombatAnalyzer::RemoveQueriesForPlayer
// globals: g_DOTARealtimeCombatAnalyzer
void __fastcall CDOTAChallengeSystem::ClearChallengeForPlayer(CDOTAChallengeSystem *const this, CDOTAPlayer *pPlayer)
{
  CIngameEvent_Base *FirstIngameEvent; // rax
  CIngameEvent_Base *v5; // r12
  int v6; // eax

  if ( pPlayer != 0 )
  {
    FirstIngameEvent = CDOTAGamerules::GetFirstIngameEvent(g_pGameRules);
    v5 = FirstIngameEvent;
    if ( FirstIngameEvent != 0 && (*(FirstIngameEvent->_vptr_IHandleEntity + 211))(FirstIngameEvent) != 0 )
    {
      v6 = (*(pPlayer->_vptr_IHandleEntity + 393))(pPlayer);
      CIngameEvent_Base::ClearPlayerCompendiumChallenge(v5, v6);
    }
    this->m_bPlayerSelectedChallenge[(*(pPlayer->_vptr_IHandleEntity + 393))(pPlayer)] = 0;
    CDOTA_RealtimeCombatAnalyzer::RemoveQueriesForPlayer(&g_DOTARealtimeCombatAnalyzer, pPlayer);
  }
}


// CDOTAChallengeSystem::InternalSetPlayerChallenge  (line 651, @0x0000000002485c10, libserver.so)  // inlines: GetCurrentIngameEvent, GetWagerTimer
// calls: CDOTAGamerules::GetIngameEventByID, CIngameEvent_Base::SetPlayerCompendiumChallenge, CDOTA_RealtimeCombatAnalyzer::RemoveQueriesForPlayer, CDOTAChallengeSystem::AttemptToGenerateChallengeQueryForPlayer
// callers: CDOTAChallengeSystem::HandleQuestSelectForPlayer, CDOTAChallengeSystem::DebugTestChallenge, CDOTAChallengeSystem::DebugTestQuest
// globals: g_DOTARealtimeCombatAnalyzer
int __fastcall CDOTAChallengeSystem::InternalSetPlayerChallenge(
        CDOTAChallengeSystem *const this,
        CDOTAPlayer *pPlayer,
        CDOTAPlayerChallenge *pChallenge,
        bool bDebug)
{
  CIngameEvent_Base *IngameEventByID; // rax
  CIngameEvent_Base *v8; // r14
  float v9; // xmm0_4
  int nParam0; // r15d
  int v11; // eax
  int nSlotID; // [rsp+44h] [rbp-4Ch]
  int nEventID; // [rsp+48h] [rbp-48h]
  int nParam1; // [rsp+4Ch] [rbp-44h]
  int nTier; // [rsp+50h] [rbp-40h]
  int nType; // [rsp+54h] [rbp-3Ch]
  int nSequenceID; // [rsp+58h] [rbp-38h]
  int nQuestRank; // [rsp+5Ch] [rbp-34h]

  IngameEventByID = CDOTAGamerules::GetIngameEventByID(g_pGameRules, EEvent::EVENT_ID_WINTER_MAJOR_2017);
  v8 = IngameEventByID;
  if ( IngameEventByID == 0 )
    return -1;
  if ( (*(IngameEventByID->_vptr_IHandleEntity + 211))(IngameEventByID) == 0 )
    return -1;
  v9 = *(&v8[1].m_OnKilled.m_pConnections + 1);
  if ( v9 <= 0.0 && v9 != -1.0 )
    return -1;
  nQuestRank = *(pChallenge + 21);
  nSlotID = *(pChallenge + 10);
  nEventID = *(pChallenge + 9);
  nParam1 = *(pChallenge + 13);
  nTier = *(pChallenge + 17);
  nParam0 = *(pChallenge + 12);
  nType = *(pChallenge + 11);
  nSequenceID = *(pChallenge + 16);
  v11 = (*(pPlayer->_vptr_IHandleEntity + 393))(pPlayer);
  CIngameEvent_Base::SetPlayerCompendiumChallenge(
    v8,
    v11,
    nEventID,
    nSequenceID,
    nType,
    nTier,
    nParam0,
    nParam1,
    nSlotID,
    nEventID,
    nSlotID,
    nQuestRank);
  if ( !bDebug )
    return -1;
  CDOTA_RealtimeCombatAnalyzer::RemoveQueriesForPlayer(&g_DOTARealtimeCombatAnalyzer, pPlayer);
  return CDOTAChallengeSystem::AttemptToGenerateChallengeQueryForPlayer(this, pPlayer, pChallenge, 1);
}


// CDOTAChallengeSystem::GenerateBasicQuery  (line 671, @0x0000000002484bf0, libserver.so)  // inlines: CombatQueryDesc_t
// calls: Msg, KeyValues::FindKey, CUtlString::Get, CDOTA_RealtimeCombatAnalyzer::ParseAndAddQuery, KeyValues::GetFirstSubKey, KeyValues::GetInt, KeyValues::GetNextKey, CIngameEvent_Base::SetGoalForQuery, CIngameEvent_Base::AddPlayerCombatLogIndexForProgress, KeyValues::MakeCopy, CDOTAChallengeSystem::RecursiveReplaceTemplateVariable, KeyValues::deleteThis
// callers: CDOTAChallengeSystem::GenerateCombatAnalyzerQuery
// strings: "---Adding non-multi query for challenge type %d for playerID %d\n", "post_tests"
// globals: g_DOTARealtimeCombatAnalyzer
int __fastcall CDOTAChallengeSystem::GenerateBasicQuery(
        CDOTAChallengeSystem *const this,
        CDOTAPlayer *pPlayer,
        CIngameEvent_Base *pEvent,
        const challenge_template_t *pTemplate,
        CDOTAPlayerChallenge *pChallenge,
        bool bEventTracksProgress)
{
  int v10; // eax
  KeyValues *Key; // rax
  KeyValues *Copy; // r12
  int v13; // eax
  unsigned int v14; // r14d
  KeyValues *v15; // rax
  KeyValues *NextKey; // r15
  int Int; // r13d
  int v18; // edx
  int result; // eax
  int v20; // eax
  CombatQueryDesc_t desc; // [rsp+10h] [rbp-80h] BYREF

  v10 = (*(pPlayer->_vptr_IHandleEntity + 393))(pPlayer);
  Msg("---Adding non-multi query for challenge type %d for playerID %d\n", pTemplate->nChallengeType, v10);
  Key = KeyValues::FindKey(pTemplate->pKeyValues, "events", 0);
  Copy = Key;
  if ( Key == 0 )
    return -1;
  if ( pTemplate->vecDynamicVars.m_Size != 0 )
  {
    Copy = KeyValues::MakeCopy(Key);
    CDOTAChallengeSystem::RecursiveReplaceTemplateVariable(this, Copy, pTemplate, pChallenge, 1);
  }
  desc.m_bMultiQuery = 0;
  desc.m_pszMultiQueryName = 0;
  desc.m_nProgress = 0;
  desc.m_bRankedQuery = 0;
  desc.m_pszRankedQueryName = 0;
  desc.m_nQueryRank = 1;
  desc.m_pNotify = &this->ICombatAnalyzerQueryUpdateNotify;
  desc.m_pName = CUtlString::Get(&pTemplate->sName);
  v13 = *(pChallenge + 15);
  desc.m_pKV = Copy;
  desc.m_pPlayer = pPlayer;
  desc.m_nProgress = v13;
  v14 = CDOTA_RealtimeCombatAnalyzer::ParseAndAddQuery(&g_DOTARealtimeCombatAnalyzer, &desc);
  if ( bEventTracksProgress )
  {
    v20 = (*(pPlayer->_vptr_IHandleEntity + 393))(pPlayer);
    CIngameEvent_Base::AddPlayerCombatLogIndexForProgress(pEvent, v20, v14, 1, 1);
    (*(pEvent->_vptr_IHandleEntity + 223))(pEvent, v14, *(pChallenge + 15));
  }
  v15 = KeyValues::FindKey(Copy, "post_tests", 0);
  if ( v15 != 0 && (NextKey = KeyValues::GetFirstSubKey(v15)) != 0 )
  {
    do
    {
      Int = KeyValues::GetInt(NextKey, "amount", 0);
      NextKey = KeyValues::GetNextKey(NextKey);
      if ( NextKey == 0 )
      {
        v18 = 1;
        if ( Int > 0 )
          v18 = Int;
        goto LABEL_13;
      }
    }
    while ( Int == 0 );
    v18 = 1;
    if ( Int > 0 )
      v18 = Int;
  }
  else
  {
    v18 = 1;
  }
LABEL_13:
  CIngameEvent_Base::SetGoalForQuery(pEvent, v14, v18);
  result = v14;
  if ( pTemplate->vecDynamicVars.m_Size != 0 )
  {
    KeyValues::deleteThis(Copy);
    return v14;
  }
  return result;
}


// CDOTAChallengeSystem::GenerateMultiQuery  (line 730, @0x0000000002484e30, libserver.so)  // inlines: CombatQueryDesc_t
// calls: Msg, KeyValues::FindKey, CUtlString::Get, KeyValues::GetFirstSubKey, V_sprintf_safe<256ul>, CDOTA_RealtimeCombatAnalyzer::ParseAndAddQuery, KeyValues::GetInt, KeyValues::GetNextKey, CIngameEvent_Base::SetGoalForQuery, KeyValues::deleteThis, KeyValues::MakeCopy, CDOTAChallengeSystem::RecursiveReplaceTemplateVariable (14 total)
// callers: CDOTAChallengeSystem::GenerateCombatAnalyzerQuery
// strings: "---Adding multi query for challenge type %d for playerID %d\n", "%s [%d]", "post_tests"
// globals: g_DOTARealtimeCombatAnalyzer
int __fastcall CDOTAChallengeSystem::GenerateMultiQuery(
        CDOTAChallengeSystem *const this,
        CDOTAPlayer *pPlayer,
        CIngameEvent_Base *pEvent,
        const challenge_template_t *pTemplate,
        CDOTAPlayerChallenge *pChallenge,
        bool bEventTracksProgress)
{
  int v7; // eax
  KeyValues *Key; // rbx
  KeyValues *FirstSubKey; // r12
  KeyValues *Copy; // r13
  const char *v11; // rax
  KeyValues *v12; // rax
  KeyValues *NextKey; // r15
  int Int; // ebx
  int v15; // edx
  int v17; // eax
  int nIndex; // [rsp+38h] [rbp-198h]
  unsigned int nQueryID; // [rsp+3Ch] [rbp-194h]
  CombatQueryDesc_t desc; // [rsp+40h] [rbp-190h] BYREF
  char pBuf[256]; // [rsp+90h] [rbp-140h] BYREF
  unsigned __int64 v27; // [rsp+198h] [rbp-38h]

  v27 = __readfsqword(0x28u);
  v7 = (*(pPlayer->_vptr_IHandleEntity + 393))(pPlayer);
  Msg("---Adding multi query for challenge type %d for playerID %d\n", pTemplate->nChallengeType, v7);
  Key = KeyValues::FindKey(pTemplate->pKeyValues, "events", 0);
  if ( Key == 0 )
    return -1;
  desc.m_nProgress = 0;
  desc.m_bRankedQuery = 0;
  desc.m_pszRankedQueryName = 0;
  desc.m_pPlayer = pPlayer;
  desc.m_nQueryRank = 1;
  desc.m_bMultiQuery = 1;
  desc.m_pNotify = &this->ICombatAnalyzerQueryUpdateNotify;
  desc.m_pszMultiQueryName = CUtlString::Get(&pTemplate->sName);
  FirstSubKey = KeyValues::GetFirstSubKey(Key);
  if ( FirstSubKey == 0 )
    return -1;
  nIndex = 0;
  do
  {
    Copy = FirstSubKey;
    if ( pTemplate->vecDynamicVars.m_Size != 0 )
    {
      Copy = KeyValues::MakeCopy(FirstSubKey);
      CDOTAChallengeSystem::RecursiveReplaceTemplateVariable(this, Copy, pTemplate, pChallenge, 1);
    }
    v11 = CUtlString::Get(&pTemplate->sName);
    V_sprintf_safe<256ul>(pBuf, "%s [%d]", v11, nIndex++);
    desc.m_pName = pBuf;
    desc.m_pKV = Copy;
    nQueryID = CDOTA_RealtimeCombatAnalyzer::ParseAndAddQuery(&g_DOTARealtimeCombatAnalyzer, &desc);
    if ( bEventTracksProgress )
    {
      v17 = (*(pPlayer->_vptr_IHandleEntity + 393))(pPlayer);
      CIngameEvent_Base::AddPlayerCombatLogIndexForProgress(pEvent, v17, nQueryID, 1, 1);
      (*(pEvent->_vptr_IHandleEntity + 223))(pEvent, nQueryID, *(pChallenge + 15));
    }
    v12 = KeyValues::FindKey(Copy, "post_tests", 0);
    if ( v12 != 0 && (NextKey = KeyValues::GetFirstSubKey(v12)) != 0 )
    {
      do
      {
        Int = KeyValues::GetInt(NextKey, "amount", 0);
        NextKey = KeyValues::GetNextKey(NextKey);
        if ( NextKey == 0 )
        {
          v15 = 1;
          if ( Int > 0 )
            v15 = Int;
          goto LABEL_15;
        }
      }
      while ( Int == 0 );
      v15 = 1;
      if ( Int > 0 )
        v15 = Int;
    }
    else
    {
      v15 = 1;
    }
LABEL_15:
    CIngameEvent_Base::SetGoalForQuery(pEvent, nQueryID, v15);
    if ( pTemplate->vecDynamicVars.m_Size != 0 )
      KeyValues::deleteThis(Copy);
    FirstSubKey = KeyValues::GetNextKey(FirstSubKey);
  }
  while ( FirstSubKey != 0 );
  return nQueryID;
}


// CDOTAChallengeSystem::GenerateRankedQuery  (line 798, @0x0000000002485170, libserver.so)  // inlines: CombatQueryDesc_t
// calls: Msg, KeyValues::FindKey, CUtlString::Get, V_sprintf_safe<256ul>, CDOTA_RealtimeCombatAnalyzer::ParseAndAddQuery, KeyValues::GetFirstSubKey, KeyValues::GetInt, KeyValues::GetNextKey, CIngameEvent_Base::SetGoalForQuery, KeyValues::deleteThis, CIngameEvent_Base::AddPlayerCombatLogIndexForProgress, KeyValues::MakeCopy (15 total)
// callers: CDOTAChallengeSystem::GenerateCombatAnalyzerQuery
// strings: "---Adding ranked query for challenge type %d for playerID %d\n", "%s [%d]", "post_tests"
// globals: g_DOTARealtimeCombatAnalyzer
int __fastcall CDOTAChallengeSystem::GenerateRankedQuery(
        CDOTAChallengeSystem *const this,
        CDOTAPlayer *pPlayer,
        CIngameEvent_Base *pEvent,
        const challenge_template_t *pTemplate,
        CDOTAPlayerChallenge *pChallenge,
        bool bEventTracksProgress)
{
  int v10; // eax
  int v11; // eax
  int v12; // r12d
  int v13; // eax
  const char *v14; // rax
  bool v15; // cc
  KeyValues *Copy; // r14
  const char *v17; // rax
  KeyValues *Key; // rax
  KeyValues *NextKey; // r15
  int Int; // ebx
  int v21; // edx
  int v23; // eax
  int v24; // ebx
  int v25; // eax
  const KeyValues *pKVToUse; // [rsp+38h] [rbp-1A8h]
  unsigned int nQueryID; // [rsp+4Ch] [rbp-194h]
  CombatQueryDesc_t desc; // [rsp+50h] [rbp-190h] BYREF
  char pBuf[256]; // [rsp+A0h] [rbp-140h] BYREF
  unsigned __int64 v36; // [rsp+1A8h] [rbp-38h]

  v36 = __readfsqword(0x28u);
  v10 = (*(pPlayer->_vptr_IHandleEntity + 393))(pPlayer);
  Msg("---Adding ranked query for challenge type %d for playerID %d\n", pTemplate->nChallengeType, v10);
  pKVToUse = KeyValues::FindKey(pTemplate->pKeyValues, "events", 0);
  if ( pKVToUse == 0 )
    return -1;
  v11 = *(pChallenge + 21);
  desc.m_bMultiQuery = 0;
  desc.m_pszMultiQueryName = 0;
  desc.m_pszRankedQueryName = 0;
  desc.m_nQueryRank = 1;
  v12 = v11 + 1;
  desc.m_pPlayer = pPlayer;
  desc.m_pNotify = &this->ICombatAnalyzerQueryUpdateNotify;
  v13 = *(pChallenge + 15);
  desc.m_bRankedQuery = 1;
  desc.m_nProgress = v13;
  v14 = CUtlString::Get(&pTemplate->sName);
  v15 = v12 <= pTemplate->nChallengeRanks;
  nQueryID = -1;
  desc.m_pszRankedQueryName = v14;
  if ( v15 )
  {
    do
    {
      Copy = pKVToUse;
      if ( pTemplate->vecDynamicVars.m_Size != 0 )
      {
        Copy = KeyValues::MakeCopy(pKVToUse);
        CDOTAChallengeSystem::RecursiveReplaceTemplateVariable(this, Copy, pTemplate, pChallenge, v12);
      }
      v17 = CUtlString::Get(&pTemplate->sName);
      V_sprintf_safe<256ul>(pBuf, "%s [%d]", v17, v12);
      desc.m_pName = pBuf;
      desc.m_pKV = Copy;
      desc.m_nQueryRank = v12;
      nQueryID = CDOTA_RealtimeCombatAnalyzer::ParseAndAddQuery(&g_DOTARealtimeCombatAnalyzer, &desc);
      if ( bEventTracksProgress )
      {
        v23 = (*(pPlayer->_vptr_IHandleEntity + 393))(pPlayer);
        CIngameEvent_Base::AddPlayerCombatLogIndexForProgress(pEvent, v23, nQueryID, v12, 1);
        (*(pEvent->_vptr_IHandleEntity + 223))(pEvent, nQueryID, *(pChallenge + 15));
      }
      Key = KeyValues::FindKey(Copy, "post_tests", 0);
      if ( Key != 0 && (NextKey = KeyValues::GetFirstSubKey(Key)) != 0 )
      {
        do
        {
          Int = KeyValues::GetInt(NextKey, "amount", 0);
          NextKey = KeyValues::GetNextKey(NextKey);
          if ( NextKey == 0 )
          {
            v21 = 1;
            if ( Int > 0 )
              v21 = Int;
            goto LABEL_14;
          }
        }
        while ( Int == 0 );
        v21 = 1;
        if ( Int > 0 )
          v21 = Int;
      }
      else
      {
        v21 = 1;
      }
LABEL_14:
      CIngameEvent_Base::SetGoalForQuery(pEvent, nQueryID, v21);
      if ( pTemplate->vecDynamicVars.m_Size != 0 )
        KeyValues::deleteThis(Copy);
      ++v12;
    }
    while ( pTemplate->nChallengeRanks >= v12 );
  }
  if ( bEventTracksProgress )
  {
    v24 = *(pChallenge + 21);
    v25 = (*(pPlayer->_vptr_IHandleEntity + 393))(pPlayer);
    CIngameEvent_Base::SetPlayerQuestRankCompleted(pEvent, v25, v24);
  }
  return nQueryID;
}


// CDOTAChallengeSystem::GenerateRankedMultiQuery  (line 877, @0x00000000024854f0, libserver.so)  // inlines: CombatQueryDesc_t, atoi
// calls: Msg, KeyValues::FindKey, CUtlString::Get, KeyValues::GetFirstSubKey, KeyValues::GetName, strtol, CFmtStrN<256, false>::CFmtStrN, CDOTA_RealtimeCombatAnalyzer::ParseAndAddQuery, KeyValues::GetInt, KeyValues::GetNextKey, CIngameEvent_Base::SetGoalForQuery, KeyValues::deleteThis (17 total)
// callers: CDOTAChallengeSystem::GenerateCombatAnalyzerQuery
// strings: "---Adding ranked query for challenge type %d for playerID %d\n", "%s_query%d_ranked", "post_tests"
// globals: g_DOTARealtimeCombatAnalyzer
int __fastcall CDOTAChallengeSystem::GenerateRankedMultiQuery(
        CDOTAChallengeSystem *const this,
        CDOTAPlayer *pPlayer,
        CIngameEvent_Base *pEvent,
        const challenge_template_t *pTemplate,
        CDOTAPlayerChallenge *pChallenge,
        bool bEventTracksProgress)
{
  int v10; // eax
  int v11; // eax
  int v12; // r13d
  const char *v13; // rax
  bool v14; // cc
  KeyValues *j; // r13
  KeyValues *Copy; // r12
  const char *Name; // rax
  int v18; // ebx
  const char *v19; // rax
  KeyValues *Key; // rax
  KeyValues *NextKey; // r15
  int Int; // ebx
  int v23; // edx
  const char *v25; // rax
  int v26; // ebx
  int v27; // eax
  int v28; // ebx
  int v29; // eax
  const KeyValues *pQueryKV; // [rsp+0h] [rbp-1F0h]
  int i; // [rsp+48h] [rbp-1A8h]
  unsigned int nQueryID; // [rsp+4Ch] [rbp-1A4h]
  CombatQueryDesc_t desc; // [rsp+50h] [rbp-1A0h] BYREF
  CFmtStrN<256,false> v40; // [rsp+A0h] [rbp-150h] BYREF
  unsigned __int64 v41; // [rsp+1B8h] [rbp-38h]

  v41 = __readfsqword(0x28u);
  v10 = (*(pPlayer->_vptr_IHandleEntity + 393))(pPlayer, pPlayer, pEvent, 0);
  Msg("---Adding ranked query for challenge type %d for playerID %d\n", pTemplate->nChallengeType, v10);
  pQueryKV = KeyValues::FindKey(pTemplate->pKeyValues, "events", 0);
  if ( pQueryKV == 0 )
    return -1;
  v11 = *(pChallenge + 21);
  desc.m_bRankedQuery = 0;
  desc.m_pszMultiQueryName = 0;
  desc.m_nProgress = 0;
  desc.m_pszRankedQueryName = 0;
  v12 = v11 + 1;
  i = v11 + 1;
  desc.m_pPlayer = pPlayer;
  desc.m_nQueryRank = 1;
  desc.m_pNotify = &this->ICombatAnalyzerQueryUpdateNotify;
  desc.m_bMultiQuery = 1;
  v13 = CUtlString::Get(&pTemplate->sName);
  v14 = v12 <= pTemplate->nChallengeRanks;
  desc.m_bRankedQuery = 1;
  desc.m_pszMultiQueryName = v13;
  nQueryID = -1;
  desc.m_nProgress = *(pChallenge + 15);
  if ( v14 )
  {
    do
    {
      for ( j = KeyValues::GetFirstSubKey(pQueryKV); j != 0; j = KeyValues::GetNextKey(j) )
      {
        Copy = j;
        if ( pTemplate->vecDynamicVars.m_Size != 0 )
        {
          Copy = KeyValues::MakeCopy(j);
          CDOTAChallengeSystem::RecursiveReplaceTemplateVariable(this, Copy, pTemplate, pChallenge, i);
        }
        Name = KeyValues::GetName(Copy);
        v18 = strtol(Name, 0, 10);
        v19 = CUtlString::Get(&pTemplate->sName);
        CFmtStrN<256,false>::CFmtStrN(&v40, "%s_query%d_ranked", v19, v18);
        desc.m_pKV = Copy;
        desc.m_pName = v40.m_szBuf;
        desc.m_pszRankedQueryName = v40.m_szBuf;
        desc.m_nQueryRank = i;
        nQueryID = CDOTA_RealtimeCombatAnalyzer::ParseAndAddQuery(&g_DOTARealtimeCombatAnalyzer, &desc);
        if ( bEventTracksProgress )
        {
          v25 = KeyValues::GetName(Copy);
          v26 = strtol(v25, 0, 10);
          v27 = (*(pPlayer->_vptr_IHandleEntity + 393))(pPlayer);
          CIngameEvent_Base::AddPlayerCombatLogIndexForProgress(pEvent, v27, nQueryID, i, v26);
          (*(pEvent->_vptr_IHandleEntity + 223))(pEvent, nQueryID, *(pChallenge + 15));
        }
        Key = KeyValues::FindKey(Copy, "post_tests", 0);
        if ( Key != 0 && (NextKey = KeyValues::GetFirstSubKey(Key)) != 0 )
        {
          do
          {
            Int = KeyValues::GetInt(NextKey, "amount", 0);
            NextKey = KeyValues::GetNextKey(NextKey);
            if ( NextKey == 0 )
            {
              v23 = 1;
              if ( Int > 0 )
                v23 = Int;
              goto LABEL_15;
            }
          }
          while ( Int == 0 );
          v23 = 1;
          if ( Int > 0 )
            v23 = Int;
        }
        else
        {
          v23 = 1;
        }
LABEL_15:
        CIngameEvent_Base::SetGoalForQuery(pEvent, nQueryID, v23);
        if ( pTemplate->vecDynamicVars.m_Size != 0 )
          KeyValues::deleteThis(Copy);
      }
      ++i;
    }
    while ( pTemplate->nChallengeRanks >= i );
  }
  if ( bEventTracksProgress )
  {
    v28 = *(pChallenge + 21);
    v29 = (*(pPlayer->_vptr_IHandleEntity + 393))(pPlayer);
    CIngameEvent_Base::SetPlayerQuestRankCompleted(pEvent, v29, v28);
  }
  return nQueryID;
}


// CDOTAChallengeSystem::GenerateCombatAnalyzerQuery  (line 958, @0x0000000002485910, libserver.so)  // inlines: GetBool
// calls: KeyValues::GetInt, CDOTAChallengeSystem::GenerateRankedMultiQuery, CDOTAChallengeSystem::GenerateBasicQuery, CDOTAChallengeSystem::GenerateRankedQuery, CDOTAChallengeSystem::GenerateMultiQuery
// callers: CDOTAChallengeSystem::AttemptToGenerateChallengeQueryForPlayer
// strings: "multi_query"
int __fastcall CDOTAChallengeSystem::GenerateCombatAnalyzerQuery(
        CDOTAChallengeSystem *const this,
        CDOTAPlayer *pPlayer,
        CIngameEvent_Base *pEvent,
        const challenge_template_t *pTemplate,
        CDOTAPlayerChallenge *pChallenge,
        bool bTracksEventProgress)
{
  bool v11; // al

  v11 = KeyValues::GetInt(pTemplate->pKeyValues, "multi_query", 0) != 0;
  if ( !v11 && pTemplate->nChallengeRanks <= 1 )
    return CDOTAChallengeSystem::GenerateBasicQuery(this, pPlayer, pEvent, pTemplate, pChallenge, bTracksEventProgress);
  if ( v11 && pTemplate->nChallengeRanks <= 1 )
    return CDOTAChallengeSystem::GenerateMultiQuery(this, pPlayer, pEvent, pTemplate, pChallenge, bTracksEventProgress);
  if ( !v11 && pTemplate->nChallengeRanks > 1 )
    return CDOTAChallengeSystem::GenerateRankedQuery(this, pPlayer, pEvent, pTemplate, pChallenge, bTracksEventProgress);
  if ( v11 && pTemplate->nChallengeRanks > 1 )
    return CDOTAChallengeSystem::GenerateRankedMultiQuery(
             this,
             pPlayer,
             pEvent,
             pTemplate,
             pChallenge,
             bTracksEventProgress);
  return -1;
}


// CDOTAChallengeSystem::AttemptToGenerateChallengeQueryForPlayer  (line 990, @0x0000000002485a50, libserver.so)  // inlines: DOTAGameRules
// calls: Msg, CDOTA_PlayerResource::GetSelectedHeroID, CDOTAGamerules::GetFirstIngameEvent, CDOTAPlayerChallenge::GetRequiredHeroID, CDOTAChallengeSystem::GetChallengeTemplateByType, CDOTAChallengeSystem::GenerateCombatAnalyzerQuery, CIngameEvent_Base::GetPlayerCompendiumChallenge
// callers: CDOTAChallengeSystem::InternalSetPlayerChallenge, CDOTAChallengeSystem::FireGameEvent, CIngameEvent_WM2016::GenerateWeeklyAndDailyChallenges, CIngameEvent_WM2016::PreWagerTimeThink
// strings: "Attempting to generate query for playerID %d\n", "Query refused for player ID %d: player's hero ID of %d does not match required hero ID of, "Cannot generate query, player ID %d has no selected challenge!\n", "Cannot generate query, player ID %d has no selected hero!\n", "Attempted to generate query for an invalid player ID\n"
// globals: g_pDOTAChallengeSystemImp
int __fastcall CDOTAChallengeSystem::AttemptToGenerateChallengeQueryForPlayer(
        CDOTAChallengeSystem *const this,
        CDOTAPlayer *pPlayer,
        CDOTAPlayerChallenge *pChallenge,
        bool bEventTracksProgress)
{
  int *PlayerCompendiumChallenge; // r12
  int v7; // eax
  double v8; // xmm0_8
  int v9; // eax
  int SelectedHeroID; // r14d
  CIngameEvent_Base *FirstIngameEvent; // rax
  CIngameEvent_Base *v12; // r13
  const challenge_template_t *ChallengeTemplateByType; // rcx
  uint32 RequiredHeroID; // r12d
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax

  if ( pPlayer != 0 )
  {
    PlayerCompendiumChallenge = pChallenge;
    v7 = (*(pPlayer->_vptr_IHandleEntity + 393))(pPlayer);
    *&v8 = Msg("Attempting to generate query for playerID %d\n", v7).m128_u64[0];
    v9 = (*(pPlayer->_vptr_IHandleEntity + 393))(pPlayer, v8);
    SelectedHeroID = CDOTA_PlayerResource::GetSelectedHeroID(g_pDOTAPlayerResource, v9);
    if ( SelectedHeroID == -1 )
    {
      v19 = (*(pPlayer->_vptr_IHandleEntity + 393))(pPlayer);
      Msg("Cannot generate query, player ID %d has no selected hero!\n", v19);
    }
    else
    {
      FirstIngameEvent = CDOTAGamerules::GetFirstIngameEvent(g_pGameRules);
      v12 = FirstIngameEvent;
      if ( FirstIngameEvent != 0 && (*(FirstIngameEvent->_vptr_IHandleEntity + 211))(FirstIngameEvent) != 0 )
      {
        if ( PlayerCompendiumChallenge != 0
          || (v17 = (*(pPlayer->_vptr_IHandleEntity + 393))(pPlayer),
              (PlayerCompendiumChallenge = CIngameEvent_Base::GetPlayerCompendiumChallenge(v12, v17)) != 0) )
        {
          if ( CDOTAPlayerChallenge::GetRequiredHeroID(PlayerCompendiumChallenge) == 0
            || SelectedHeroID == CDOTAPlayerChallenge::GetRequiredHeroID(PlayerCompendiumChallenge) )
          {
            ChallengeTemplateByType = CDOTAChallengeSystem::GetChallengeTemplateByType(
                                        g_pDOTAChallengeSystemImp,
                                        PlayerCompendiumChallenge[11]);
            if ( ChallengeTemplateByType != 0 )
              return CDOTAChallengeSystem::GenerateCombatAnalyzerQuery(
                       this,
                       pPlayer,
                       v12,
                       ChallengeTemplateByType,
                       PlayerCompendiumChallenge,
                       bEventTracksProgress);
          }
          else
          {
            RequiredHeroID = CDOTAPlayerChallenge::GetRequiredHeroID(PlayerCompendiumChallenge);
            v16 = (*(pPlayer->_vptr_IHandleEntity + 393))(pPlayer);
            Msg(
              "Query refused for player ID %d: player's hero ID of %d does not match required hero ID of %d\n",
              v16,
              SelectedHeroID,
              RequiredHeroID);
          }
        }
        else
        {
          v18 = (*(pPlayer->_vptr_IHandleEntity + 393))(pPlayer);
          Msg("Cannot generate query, player ID %d has no selected challenge!\n", v18);
        }
      }
    }
  }
  else
  {
    Msg("Attempted to generate query for an invalid player ID\n", 0, pChallenge, bEventTracksProgress);
  }
  return -1;
}


// CDOTAChallengeSystem::DebugTestChallenge  (line 1044, @0x0000000002485ea0, libserver.so)  // inlines: CProtoBufSharedObject, set_challenge_type, set_has_challenge_type, set_has_int_param_1, set_int_param_0, set_int_param_1, ~CProtoBufSharedObjectBase, ~CSharedObject
// calls: operator new, CSODOTAPlayerChallenge::CSODOTAPlayerChallenge, CDOTAChallengeSystem::InternalSetPlayerChallenge, CDOTA_RealtimeCombatAnalyzer::FindQueryForID, CUtlString::Get, ConVar::SetValue, operator delete, _Unwind_Resume
// callers: DebugTestChallenge
// globals: g_DOTARealtimeCombatAnalyzer, dota_realtimeanalyzer_debug_query
void __fastcall CDOTAChallengeSystem::DebugTestChallenge(
        CDOTAChallengeSystem *const this,
        CDOTAPlayer *pPlayer,
        int nChallengeType,
        int nVar0,
        int nVar1)
{
  _DWORD *v9; // rbx
  int v10; // eax
  int v11; // eax
  const CombatLogQuery *QueryForID; // rax
  const char *v13; // rax

  if ( pPlayer != 0 )
  {
    v9 = operator new(0x58u);
    memset(v9, 0, 0x58u);
    *v9 = &off_40DE2B0;
    CSODOTAPlayerChallenge::CSODOTAPlayerChallenge((v9 + 2));
    *v9 = off_40DE330;
    v10 = v9[6];
    v9[11] = nChallengeType;
    v9[13] = nVar1;
    v9[12] = nVar0;
    v9[6] = v10 | 0x38;
    v11 = CDOTAChallengeSystem::InternalSetPlayerChallenge(this, pPlayer, v9, 1);
    this->m_pDebugChallenge = v9;
    QueryForID = CDOTA_RealtimeCombatAnalyzer::FindQueryForID(&g_DOTARealtimeCombatAnalyzer, v11);
    if ( QueryForID != 0 )
    {
      v13 = CUtlString::Get(&QueryForID->m_Name);
      ConVar::SetValue(&dota_realtimeanalyzer_debug_query, v13);
    }
  }
}


// CDOTAChallengeSystem::DebugTestQuest  (line 1065, @0x00000000024860c0, libserver.so)  // inlines: CProtoBufSharedObject, set_challenge_type, set_event_id, set_has_challenge_type, set_has_slot_id, set_slot_id, ~CProtoBufSharedObjectBase, ~CSharedObject
// calls: CDOTAChallengeSystem::GetQuestChallengeInstanceByIDs, operator new, CSODOTAPlayerChallenge::CSODOTAPlayerChallenge, CDOTAChallengeSystem::InternalSetPlayerChallenge, CDOTA_RealtimeCombatAnalyzer::FindQueryForID, CUtlString::Get, ConVar::SetValue, operator delete, _Unwind_Resume
// callers: DebugTestQuestChallenge
// globals: g_DOTARealtimeCombatAnalyzer, dota_realtimeanalyzer_debug_query
void __fastcall CDOTAChallengeSystem::DebugTestQuest(
        CDOTAChallengeSystem *const this,
        CDOTAPlayer *pPlayer,
        int nQuestID,
        int nChallengeID)
{
  challenge_instance_t *QuestChallengeInstanceByIDs; // r15
  _DWORD *v8; // rbx
  int v9; // eax
  ChallengeType_t nChallengeType; // edx
  int v11; // eax
  const CombatLogQuery *QueryForID; // rax
  const char *v13; // rax

  if ( pPlayer != 0 )
  {
    QuestChallengeInstanceByIDs = CDOTAChallengeSystem::GetQuestChallengeInstanceByIDs(this, nQuestID, nChallengeID);
    if ( QuestChallengeInstanceByIDs != 0 )
    {
      v8 = operator new(0x58u);
      memset(v8, 0, 0x58u);
      *v8 = &off_40DE2B0;
      CSODOTAPlayerChallenge::CSODOTAPlayerChallenge((v8 + 2));
      *v8 = off_40DE330;
      v9 = v8[6];
      nChallengeType = QuestChallengeInstanceByIDs->nChallengeType;
      v8[9] = nQuestID;
      v8[6] = v9 | 0xE;
      v8[11] = nChallengeType;
      v8[10] = nChallengeID;
      v11 = CDOTAChallengeSystem::InternalSetPlayerChallenge(this, pPlayer, v8, 1);
      this->m_pDebugChallenge = v8;
      QueryForID = CDOTA_RealtimeCombatAnalyzer::FindQueryForID(&g_DOTARealtimeCombatAnalyzer, v11);
      if ( QueryForID != 0 )
      {
        v13 = CUtlString::Get(&QueryForID->m_Name);
        ConVar::SetValue(&dota_realtimeanalyzer_debug_query, v13);
      }
    }
  }
}


// DebugTestChallenge  (line 1089, @0x0000000002485fa0, libserver.so)  // inlines: Arg, DOTAGameRules, atoi, operator[]
// calls: CDOTAChallengeSystem::LoadTemplates, CDOTAGamerules::InternalCreateIngameEvent, strtol, CDOTAPlayer::GetPlayerByPlayerID, CDOTAChallengeSystem::DebugTestChallenge, Msg
// strings: "Format: dota_test_challenge <challenge type> <int var 0> <int var 1>\n"
// globals: g_pDOTAChallengeSystemImp
void __fastcall DebugTestChallenge(const CCommandContext *const ctx, const CCommand *const args)
{
  const char *v3; // rdi
  int v4; // eax
  const char *v5; // rdi
  int v6; // r12d
  int v7; // eax
  const char *v8; // rdi
  int v9; // r13d
  int v10; // ebx
  CDOTAPlayer *PlayerByPlayerID; // rax

  if ( args->m_nArgc <= 3 )
  {
    Msg("Format: dota_test_challenge <challenge type> <int var 0> <int var 1>\n");
  }
  else if ( g_pGameRules != 0 )
  {
    CDOTAChallengeSystem::LoadTemplates(g_pDOTAChallengeSystemImp);
    CDOTAGamerules::InternalCreateIngameEvent(g_pGameRules, EEvent::EVENT_ID_WINTER_MAJOR_2017);
    v3 = "";
    if ( args->m_nArgc > 3 )
      v3 = args->m_ppArgv[3];
    v4 = strtol(v3, 0, 10);
    v5 = "";
    v6 = v4;
    if ( args->m_nArgc > 2 )
      v5 = args->m_ppArgv[2];
    v7 = strtol(v5, 0, 10);
    v8 = "";
    v9 = v7;
    if ( args->m_nArgc > 1 )
      v8 = args->m_ppArgv[1];
    v10 = strtol(v8, 0, 10);
    PlayerByPlayerID = CDOTAPlayer::GetPlayerByPlayerID(0);
    CDOTAChallengeSystem::DebugTestChallenge(g_pDOTAChallengeSystemImp, PlayerByPlayerID, v10, v9, v6);
  }
}


// DebugTestQuestChallenge  (line 1109, @0x00000000024861d0, libserver.so)  // inlines: Arg, DOTAGameRules, atoi, operator[]
// calls: CDOTAChallengeSystem::LoadTemplates, CDOTAGamerules::InternalCreateIngameEvent, strtol, CDOTAPlayer::GetPlayerByPlayerID, CDOTAChallengeSystem::DebugTestQuest, Msg
// strings: "Format: dota_test_quest <quest id> <challenge id>\n"
// globals: g_pDOTAChallengeSystemImp
void __fastcall DebugTestQuestChallenge(const CCommandContext *const ctx, const CCommand *const args)
{
  const char *v3; // rdi
  int v4; // eax
  const char *v5; // rdi
  int v6; // r12d
  int v7; // ebx
  CDOTAPlayer *PlayerByPlayerID; // rax

  if ( args->m_nArgc <= 2 )
  {
    Msg("Format: dota_test_quest <quest id> <challenge id>\n");
  }
  else if ( g_pGameRules != 0 )
  {
    CDOTAChallengeSystem::LoadTemplates(g_pDOTAChallengeSystemImp);
    CDOTAGamerules::InternalCreateIngameEvent(g_pGameRules, EEvent::EVENT_ID_WINTER_MAJOR_2017);
    v3 = "";
    if ( args->m_nArgc > 2 )
      v3 = args->m_ppArgv[2];
    v4 = strtol(v3, 0, 10);
    v5 = "";
    v6 = v4;
    if ( args->m_nArgc > 1 )
      v5 = args->m_ppArgv[1];
    v7 = strtol(v5, 0, 10);
    PlayerByPlayerID = CDOTAPlayer::GetPlayerByPlayerID(0);
    CDOTAChallengeSystem::DebugTestQuest(g_pDOTAChallengeSystemImp, PlayerByPlayerID, v7, v6);
  }
}


// CDOTAChallengeSystem::RecursiveReplaceTemplateVariable  (line 1132, @0x000000000246c070, libserver.so)  // inlines: operator char const*, operator[]
// calls: KeyValues::GetFirstSubKey, KeyValues::GetNextKey, KeyValues::GetString, CUtlString::Get, V_stristr_fast(char const*,char const*), CDOTAChallengeSystem::SetChallengeDynamicVarForTemplateIndex
// callers: CDOTAChallengeSystem::GenerateBasicQuery, CDOTAChallengeSystem::GenerateMultiQuery, CDOTAChallengeSystem::GenerateRankedQuery, CDOTAChallengeSystem::GenerateRankedMultiQuery
bool __fastcall CDOTAChallengeSystem::RecursiveReplaceTemplateVariable(
        CDOTAChallengeSystem *const this,
        KeyValues *pKV,
        const challenge_template_t *pTemplate,
        CDOTAPlayerChallenge *pChallenge,
        int nRank)
{
  KeyValues *FirstSubKey; // r12
  bool result; // al
  __int64 i; // r12
  const char *v12; // rax
  const char *v13; // rax
  const char *pszValue; // [rsp+18h] [rbp-38h]

  FirstSubKey = KeyValues::GetFirstSubKey(pKV);
  if ( FirstSubKey != 0 )
  {
    while ( 1 )
    {
      result = CDOTAChallengeSystem::RecursiveReplaceTemplateVariable(this, FirstSubKey, pTemplate, pChallenge, nRank);
      if ( !result )
        break;
      FirstSubKey = KeyValues::GetNextKey(FirstSubKey);
      if ( FirstSubKey == 0 )
        goto LABEL_6;
    }
  }
  else
  {
LABEL_6:
    for ( i = 0; i < pTemplate->vecDynamicVars.m_Size; ++i )
    {
      pszValue = KeyValues::GetString(pKV, 0, "", 0, 0);
      v12 = CUtlString::Get(&pTemplate->vecDynamicVars.m_Memory.m_pMemory[i].sName);
      v13 = V_stristr_fast(pszValue, v12);
      if ( v13 != 0 )
        CDOTAChallengeSystem::SetChallengeDynamicVarForTemplateIndex(this, pKV, v13, i, pTemplate, pChallenge, nRank);
    }
    return 1;
  }
  return result;
}


// CDOTAChallengeSystem::SetChallengeDynamicVarForTemplateIndex  (line 1153, @0x000000000246bdd0, libserver.so)  // inlines: Min<int>, SetStringValue, V_strcat_safe<512ul>, V_strlen, V_strncpy<int>, _V_strcmp, operator char const*, operator[]
// calls: KeyValues::GetString, CUtlString::Get, strlen, CDOTAChallengeSystem::GetQuestChallengeInstanceByIDs, strcmp, GenerateChallengeVariableString, _V_strncpy, _V_strncat, CKeyValues_Data::Internal_SetString, __stack_chk_fail
// callers: CDOTAChallengeSystem::RecursiveReplaceTemplateVariable
// globals: CDOTAChallengeSystem::SetChallengeDynamicVarForTemplateIndex(KeyValues *,char const*,int,challenge_template_t const*,CDOTAPlayerChallenge *,int)::szTemp
void __fastcall CDOTAChallengeSystem::SetChallengeDynamicVarForTemplateIndex(
        CDOTAChallengeSystem *const this,
        KeyValues *pKV,
        const char *pszKeyPos,
        int nVarIndex,
        const challenge_template_t *pTemplate,
        CDOTAPlayerChallenge *pChallenge,
        int nRank)
{
  __int64 v9; // r12
  const char *v11; // rax
  const challenge_template_t *v12; // rax
  challenge_instance_t *QuestChallengeInstanceByIDs; // rax
  challenge_instance_t *v14; // r14
  __int64 v15; // r13
  int v16; // r15d
  challenge_var_set_t *v17; // rbx
  const char *v18; // rax
  int v19; // edi
  challenge_variable_t *v20; // r12
  int v21; // eax
  __int64 v22; // rdx
  int m_Size; // edx
  int *p_nVarValue; // rax
  __int64 v25; // rdx
  __int64 v26; // [rsp+0h] [rbp-F0h]
  const char *pszValue; // [rsp+10h] [rbp-E0h]
  char *s2; // [rsp+28h] [rbp-C8h]
  char pszDynamicString[136]; // [rsp+30h] [rbp-C0h] BYREF
  unsigned __int64 v33; // [rsp+B8h] [rbp-38h]

  v9 = nVarIndex;
  v33 = __readfsqword(0x28u);
  pszValue = KeyValues::GetString(pKV, 0, "", 0, 0);
  v11 = CUtlString::Get(&pTemplate->vecDynamicVars.m_Memory.m_pMemory[v9].sName);
  if ( v11 != 0 )
    v26 = strlen(v11);
  else
    v26 = 0;
  v12 = pTemplate;
  pszDynamicString[0] = 0;
  if ( pTemplate->nChallengeRanks == 1 )
    goto LABEL_17;
  QuestChallengeInstanceByIDs = CDOTAChallengeSystem::GetQuestChallengeInstanceByIDs(
                                  this,
                                  *(pChallenge + 9),
                                  *(pChallenge + 10));
  v14 = QuestChallengeInstanceByIDs;
  if ( QuestChallengeInstanceByIDs == 0 )
  {
    v12 = pTemplate;
LABEL_17:
    v20 = &v12->vecDynamicVars.m_Memory.m_pMemory[v9];
    if ( v20->nIndex != 0 )
      v19 = *(pChallenge + 13);
    else
      v19 = *(pChallenge + 12);
    goto LABEL_10;
  }
  v15 = 0;
  v16 = 0;
  if ( QuestChallengeInstanceByIDs->vecVariables.m_Size <= 0 )
    goto LABEL_9;
  while ( 1 )
  {
    v17 = &v14->vecVariables.m_Memory.m_pMemory[v15];
    if ( v17 != 0 )
    {
      s2 = CUtlString::Get(&pTemplate->vecDynamicVars.m_Memory.m_pMemory[v9].sName);
      v18 = CUtlString::Get(&v17->sVarName);
      if ( strcmp(v18, s2) == 0 )
        break;
    }
    ++v16;
    ++v15;
    if ( v14->vecVariables.m_Size <= v16 )
      goto LABEL_9;
  }
  m_Size = v17->vecValues.m_Size;
  if ( m_Size <= 0 )
  {
LABEL_9:
    v19 = 0;
    v20 = &pTemplate->vecDynamicVars.m_Memory.m_pMemory[v9];
  }
  else
  {
    p_nVarValue = &v17->vecValues.m_Memory.m_pMemory->nVarValue;
    v25 = &p_nVarValue[3 * (m_Size - 1) + 3];
    while ( p_nVarValue == 0 || p_nVarValue[2] != nRank )
    {
      p_nVarValue += 3;
      if ( p_nVarValue == v25 )
        goto LABEL_9;
    }
    v19 = *p_nVarValue;
    v20 = &pTemplate->vecDynamicVars.m_Memory.m_pMemory[v9];
  }
LABEL_10:
  GenerateChallengeVariableString(v19, v20->nFormat, pszDynamicString, 128);
  v21 = pszKeyPos - pszValue;
  if ( pszKeyPos == pszValue )
  {
    CDOTAChallengeSystem::SetChallengeDynamicVarForTemplateIndex(KeyValues *,char const*,int,challenge_template_t const*,CDOTAPlayerChallenge *,int)::szTemp[0] = 0;
  }
  else
  {
    v22 = 512;
    if ( v21 <= 511 )
      v22 = v21;
    _V_strncpy(
      CDOTAChallengeSystem::SetChallengeDynamicVarForTemplateIndex(KeyValues *,char const*,int,challenge_template_t const*,CDOTAPlayerChallenge *,int)::szTemp,
      pszValue,
      v22);
  }
  _V_strncat(
    CDOTAChallengeSystem::SetChallengeDynamicVarForTemplateIndex(KeyValues *,char const*,int,challenge_template_t const*,CDOTAPlayerChallenge *,int)::szTemp,
    pszDynamicString,
    512,
    0xFFFFFFFFLL);
  _V_strncat(
    CDOTAChallengeSystem::SetChallengeDynamicVarForTemplateIndex(KeyValues *,char const*,int,challenge_template_t const*,CDOTAPlayerChallenge *,int)::szTemp,
    &pszKeyPos[v26],
    512,
    0xFFFFFFFFLL);
  CKeyValues_Data::Internal_SetString(
    pKV,
    CDOTAChallengeSystem::SetChallengeDynamicVarForTemplateIndex(KeyValues *,char const*,int,challenge_template_t const*,CDOTAPlayerChallenge *,int)::szTemp);
}


// CDOTAChallengeSystem::FireGameEvent  (line 1228, @0x00000000024862a0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Purge, RemoveAll, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTAGamerules::GetIngameEventByID, CIngameEvent_Base::GetCombatLogQueryIDsForPlayer, CDOTA_RealtimeCombatAnalyzer::RemoveQueryByID, CIngameEvent_Base::ClearQuestQueryForPlayer, CDOTA_PlayerResource::GetPlayer, CDOTAChallengeSystem::AttemptToGenerateChallengeQueryForPlayer, CUtlMemory<int, int>::Purge, CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase, _Unwind_Resume
// strings: "playerid1", "playerid2"
// globals: g_DOTARealtimeCombatAnalyzer
void __fastcall CDOTAChallengeSystem::FireGameEvent(CDOTAChallengeSystem *const this, IGameEvent *event)
{
  int v4; // r15d
  CIngameEvent_Base *IngameEventByID; // r14
  __int64 v6; // r12
  int i; // ebx
  __int64 v8; // r12
  int j; // ebx
  CDOTAPlayer *Player; // rax
  CDOTAPlayer *v11; // rax
  int nPlayerId2; // [rsp+14h] [rbp-7Ch]
  CUtlVector<int,CUtlMemory<int,int> > vecQueryIDs1; // [rsp+20h] [rbp-70h] BYREF
  CUtlVector<int,CUtlMemory<int,int> > vecQueryIDs2; // [rsp+40h] [rbp-50h] BYREF

  if ( (*(event->_vptr_IGameEvent + 3))(event) == this->m_event_dota_hero_swap )
  {
    v4 = (*(event->_vptr_IGameEvent + 8))(event, "playerid1", 0xFFFFFFFFLL);
    nPlayerId2 = (*(event->_vptr_IGameEvent + 8))(event, "playerid2", 0xFFFFFFFFLL);
    IngameEventByID = CDOTAGamerules::GetIngameEventByID(g_pGameRules, EEvent::EVENT_ID_INTERNATIONAL_2016);
    if ( IngameEventByID != 0 )
    {
      vecQueryIDs1.m_Size = 0;
      vecQueryIDs1.m_Memory.m_pMemory = 0;
      vecQueryIDs1.m_Memory.m_nAllocationCount = 0;
      vecQueryIDs1.m_Memory.m_nGrowSize = 0;
      vecQueryIDs2.m_Size = 0;
      vecQueryIDs2.m_Memory.m_pMemory = 0;
      vecQueryIDs2.m_Memory.m_nAllocationCount = 0;
      vecQueryIDs2.m_Memory.m_nGrowSize = 0;
      CIngameEvent_Base::GetCombatLogQueryIDsForPlayer(IngameEventByID, v4, &vecQueryIDs1);
      CIngameEvent_Base::GetCombatLogQueryIDsForPlayer(IngameEventByID, nPlayerId2, &vecQueryIDs2);
      v6 = 0;
      for ( i = 0; vecQueryIDs1.m_Size > i; ++v6 )
      {
        CDOTA_RealtimeCombatAnalyzer::RemoveQueryByID(
          &g_DOTARealtimeCombatAnalyzer,
          vecQueryIDs1.m_Memory.m_pMemory[v6]);
        ++i;
      }
      v8 = 0;
      for ( j = 0; vecQueryIDs2.m_Size > j; ++v8 )
      {
        CDOTA_RealtimeCombatAnalyzer::RemoveQueryByID(
          &g_DOTARealtimeCombatAnalyzer,
          vecQueryIDs2.m_Memory.m_pMemory[v8]);
        ++j;
      }
      CIngameEvent_Base::ClearQuestQueryForPlayer(IngameEventByID, v4);
      CIngameEvent_Base::ClearQuestQueryForPlayer(IngameEventByID, nPlayerId2);
      Player = CDOTA_PlayerResource::GetPlayer(g_pDOTAPlayerResource, v4);
      CDOTAChallengeSystem::AttemptToGenerateChallengeQueryForPlayer(this, Player, 0, 1);
      v11 = CDOTA_PlayerResource::GetPlayer(g_pDOTAPlayerResource, nPlayerId2);
      CDOTAChallengeSystem::AttemptToGenerateChallengeQueryForPlayer(this, v11, 0, 1);
      vecQueryIDs2.m_Size = 0;
      if ( (vecQueryIDs2.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      {
        CUtlMemory<int,int>::Purge(&vecQueryIDs2.m_Memory);
        if ( (vecQueryIDs2.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
          CUtlMemory<int,int>::Purge(&vecQueryIDs2.m_Memory);
      }
      vecQueryIDs1.m_Size = 0;
      if ( (vecQueryIDs1.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      {
        CUtlMemory<int,int>::Purge(&vecQueryIDs1.m_Memory);
        if ( (vecQueryIDs1.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
          CUtlMemory<int,int>::Purge(&vecQueryIDs1.m_Memory);
      }
    }
  }
}


