
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTAGameAccountClient::GetHybridLevel  (line 2000, @0x0000000002991ba0, libserver.so)
uint32 __fastcall CDOTAGameAccountClient::GetHybridLevel(const CDOTAGameAccountClient *const this)
{
  return *(this + 12) + *(this + 59);
}


// CDOTAPlayerChallenge::IsComplete  (line 2406, @0x0000000002991bb0, libserver.so)
// callers: CIngameEvent_WM2016::GenerateWeeklyAndDailyChallenges
bool __fastcall CDOTAPlayerChallenge::IsComplete(const CDOTAPlayerChallenge *const this)
{
  unsigned int v1; // eax

  v1 = 1;
  if ( *(this + 20) != 0 )
    v1 = *(this + 20);
  return v1 <= *(this + 15);
}


// CDOTAPlayerChallenge::IsFullyComplete  (line 2412, @0x0000000002991bd0, libserver.so)  // inlines: IsComplete
// calls: GDOTAChallengeSystem, CDOTAChallengeSystem::GetChallengeTemplateByType
bool __fastcall CDOTAPlayerChallenge::IsFullyComplete(const CDOTAPlayerChallenge *const this)
{
  bool v1; // r12
  int v3; // r13d
  CDOTAChallengeSystem *v4; // rax
  const challenge_template_t *ChallengeTemplateByType; // rax
  unsigned int v6; // edx

  v1 = 0;
  if ( GDOTAChallengeSystem() != 0 )
  {
    v3 = *(this + 11);
    v4 = GDOTAChallengeSystem();
    ChallengeTemplateByType = CDOTAChallengeSystem::GetChallengeTemplateByType(v4, v3);
    v6 = 1;
    if ( *(this + 20) != 0 )
      v6 = *(this + 20);
    if ( *(this + 15) >= v6 )
      return ChallengeTemplateByType->nChallengeRanks == *(this + 21);
  }
  return v1;
}


// CDOTAPlayerChallenge::GetRequiredHeroID  (line 2514, @0x0000000002991c30, libserver.so)  // inlines: FStrEq, _V_strcmp, atoi, operator char const*, operator[]
// calls: GDOTAChallengeSystem, CDOTAChallengeSystem::GetChallengeTemplateByType, KeyValues::GetString, strtol, DOTAGameManager, CDOTAGameManager::GetHeroIDByName, strcmp, CUtlString::Get
// callers: CDOTAChallengeSystem::AttemptToGenerateChallengeQueryForPlayer, CIngameEvent_WM2016::GenerateWeeklyAndDailyChallenges
// strings: "requiredhero"
uint32 __fastcall CDOTAPlayerChallenge::GetRequiredHeroID(CDOTAPlayerChallenge *const this)
{
  int v2; // ebx
  CDOTAChallengeSystem *v3; // rax
  const challenge_template_t *ChallengeTemplateByType; // rax
  const challenge_template_t *v5; // rbx
  const char *String; // rax
  const char *v7; // r12
  uint32 result; // eax
  CDOTAGameManager *v9; // rax
  __int64 v10; // r14
  const char *v11; // rax

  if ( GDOTAChallengeSystem() == 0 )
    return 0;
  v2 = *(this + 11);
  v3 = GDOTAChallengeSystem();
  ChallengeTemplateByType = CDOTAChallengeSystem::GetChallengeTemplateByType(v3, v2);
  v5 = ChallengeTemplateByType;
  if ( ChallengeTemplateByType == 0 )
    return 0;
  String = KeyValues::GetString(ChallengeTemplateByType->pKeyValues, "requiredhero", "", 0, 0);
  v7 = String;
  if ( String == 0 || *String == 0 )
    return 0;
  result = strtol(String, 0, 10);
  if ( result == 0 )
  {
    v9 = DOTAGameManager();
    result = CDOTAGameManager::GetHeroIDByName(v9, v7);
    if ( result == -1 )
    {
      v10 = 0;
      if ( v5->vecDynamicVars.m_Size <= 0 )
        return 0;
      while ( 1 )
      {
        v11 = CUtlString::Get(&v5->vecDynamicVars.m_Memory.m_pMemory[v10].sName);
        if ( v7 == v11 || strcmp(v7, v11) == 0 )
          break;
        if ( ++v10 >= v5->vecDynamicVars.m_Size )
          return 0;
      }
      if ( v5->vecDynamicVars.m_Memory.m_pMemory[v10].nIndex != 0 )
        return *(this + 13);
      else
        return *(this + 12);
    }
  }
  return result;
}


