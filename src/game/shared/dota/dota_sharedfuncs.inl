
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// challenge_quest_t::challenge_t::~challenge_t  (line 270, @0x00000000026ab9e0, libserver.so)  // inlines: Destruct<challenge_quest_t::challenge_t::instance_t>, Element, Purge, RemoveAll, operator[], ~CUtlMemory, ~CUtlString, ~CUtlVector, ~CUtlVectorBase, ~instance_t
// calls: CUtlString::FreeMemoryBlock, CUtlMemory<challenge_quest_t::challenge_t::instance_t, int>::Purge, CUtlMemory<challenge_quest_t::challenge_t::prerequisite_t, int>::Purge, CUtlMemory<challenge_quest_t::challenge_t::complete_action_t, int>::Purge
// callers: ParseChallengeQuests
void __fastcall challenge_quest_t::challenge_t::~challenge_t(challenge_quest_t::challenge_t *const this)
{
  bool v2; // zf
  int m_Size; // ebx
  __int64 i; // r12
  CUtlString *v5; // rdi
  CUtlVectorBase<challenge_quest_t::challenge_t::complete_action_t,CUtlMemory<challenge_quest_t::challenge_t::complete_action_t,int> >::CAllocator *p_m_Memory; // rbx

  this->vecCompleteActions.m_Size = 0;
  if ( (this->vecCompleteActions.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    p_m_Memory = &this->vecCompleteActions.m_Memory;
    CUtlMemory<challenge_quest_t::challenge_t::complete_action_t,int>::Purge(&this->vecCompleteActions.m_Memory);
    if ( (this->vecCompleteActions.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<challenge_quest_t::challenge_t::complete_action_t,int>::Purge(p_m_Memory);
  }
  v2 = (this->vecPrerequisites.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->vecPrerequisites.m_Size = 0;
  if ( v2 )
  {
    CUtlMemory<challenge_quest_t::challenge_t::prerequisite_t,int>::Purge(&this->vecPrerequisites.m_Memory);
    if ( (this->vecPrerequisites.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<challenge_quest_t::challenge_t::prerequisite_t,int>::Purge(&this->vecPrerequisites.m_Memory);
  }
  m_Size = this->vecInstances.m_Size;
  for ( i = 24LL * m_Size - 24; --m_Size >= 0; i -= 24 )
  {
    v5 = (&this->vecInstances.m_Memory.m_pMemory->sInstanceName + i);
    if ( v5->m_pString != 0 )
      CUtlString::FreeMemoryBlock(v5);
  }
  v2 = (this->vecInstances.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->vecInstances.m_Size = 0;
  if ( v2 )
  {
    CUtlMemory<challenge_quest_t::challenge_t::instance_t,int>::Purge(&this->vecInstances.m_Memory);
    if ( (this->vecInstances.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<challenge_quest_t::challenge_t::instance_t,int>::Purge(&this->vecInstances.m_Memory);
  }
  if ( this->sChallengeImage.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->sChallengeImage);
  if ( this->sChallengeLore.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->sChallengeLore);
  if ( this->sChallengeTitle.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->sChallengeTitle);
  if ( this->sChallengeName.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->sChallengeName);
}


