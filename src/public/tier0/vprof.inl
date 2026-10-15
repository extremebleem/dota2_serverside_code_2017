
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CVProfile::EnterScope  (line 1221, @0x0000000001f7a560, libserver.so)  // inlines: Add, CMicroProfilerGuard, CMicroProfilerSample, GetElapsed, GetTimebaseRegister, InTargetThread, PLAT_CPU_TIME, ~CMicroProfilerGuard
// calls: ThreadGetCurrentId, CVProfNode::GetSubNode(char const*,int,char const*,int), CVProfNode::EnterScope(void), _Unwind_Resume
// callers: CPhysicsGameSystem::PullSoftbodyTransforms, CreateTriggerInternal, Script_CreateTriggerRadiusApproximate, CScriptEntityIterator::CreateByClassname, CPhysicsGameSystem::PullKinematicTransformsWorker, Script_SpawnEntityListFromTableSynchronous, Script_SpawnEntityFromTableSynchronous, Script_SpawnEntityGroupFromTable, CPhysicsGameSystem::OnSimulate, ExplosionCreate, CFire::SpawnEffect, CNavMesh::ForAllAreasOverlappingExtent<NavAreaCollector> (122 total)
void __fastcall CVProfile::EnterScope(
        CVProfile *const this,
        const tchar *pszName,
        int detailLevel,
        const tchar *pBudgetGroupName,
        bool bAssertAccounted,
        int budgetFlags)
{
  unsigned __int64 v10; // r12
  uint64 m_numTimeBaseTicks; // rcx
  CVProfNode *m_pCurNode; // rax
  CVProfile::CBudgetGroup *v13; // rax
  ThreadId_t m_TargetThreadId; // [rsp+0h] [rbp-40h]

  v10 = __rdtsc();
  if ( this->m_enabled != 0 || !this->m_fAtRoot )
  {
    m_TargetThreadId = this->m_TargetThreadId;
    if ( m_TargetThreadId == ThreadGetCurrentId(this) )
    {
      m_pCurNode = this->m_pCurNode;
      if ( m_pCurNode->m_pszName != pszName )
      {
        m_pCurNode = CVProfNode::GetSubNode(this->m_pCurNode, pszName, detailLevel, pBudgetGroupName, budgetFlags);
        this->m_pCurNode = m_pCurNode;
      }
      v13 = &this->m_pBudgetGroups[m_pCurNode->m_BudgetGroupID];
      v13->m_BudgetFlags |= budgetFlags;
      CVProfNode::EnterScope(this->m_pCurNode);
      this->m_fAtRoot = 0;
    }
  }
  m_numTimeBaseTicks = this->m_ScopeProfiler.m_numTimeBaseTicks;
  ++this->m_ScopeProfiler.m_numCalls;
  this->m_ScopeProfiler.m_numTimeBaseTicks = m_numTimeBaseTicks - v10 + __rdtsc();
}


// CVProfile::ExitScope  (line 1260, @0x0000000001ea29b0, libserver.so)  // inlines: Add, CMicroProfilerGuard, CMicroProfilerSample, GetElapsed, GetTimebaseRegister, InTargetThread, PLAT_CPU_TIME, ~CMicroProfilerGuard
// calls: ThreadGetCurrentId, CVProfNode::ExitScope(void), _Unwind_Resume
// callers: CDevtestHierarchy2::Spawn, CServerAchievementManager::AwardAchievement, CBaseEntity::PhysicsDispatchThink, CPhysicsGameSystem::PullSoftbodyTransforms, CreateTriggerInternal, Script_CreateTriggerRadiusApproximate, CScriptEntityIterator::CreateByClassname, CPhysicsGameSystem::PullKinematicTransformsWorker, Script_SpawnEntityListFromTableSynchronous, Script_SpawnEntityFromTableSynchronous, Script_SpawnEntityGroupFromTable, CPhysicsGameSystem::OnSimulate (240 total)
void __fastcall CVProfile::ExitScope(CVProfile *const this)
{
  unsigned __int64 v2; // r12
  ThreadId_t m_TargetThreadId; // r13
  uint64 m_numTimeBaseTicks; // rcx
  CVProfNode *m_pParent; // rax

  v2 = __rdtsc();
  if ( !this->m_fAtRoot || this->m_enabled != 0 )
  {
    m_TargetThreadId = this->m_TargetThreadId;
    if ( m_TargetThreadId == ThreadGetCurrentId() )
    {
      if ( CVProfNode::ExitScope(this->m_pCurNode) != 0 )
      {
        m_pParent = this->m_pCurNode->m_pParent;
        if ( m_pParent != 0 )
          this->m_pCurNode = m_pParent;
        else
          m_pParent = this->m_pCurNode;
      }
      else
      {
        m_pParent = this->m_pCurNode;
      }
      this->m_fAtRoot = m_pParent == &this->m_Root;
    }
  }
  m_numTimeBaseTicks = this->m_ScopeProfiler.m_numTimeBaseTicks;
  ++this->m_ScopeProfiler.m_numCalls;
  this->m_ScopeProfiler.m_numTimeBaseTicks = m_numTimeBaseTicks - v2 + __rdtsc();
}


// CVProfCounter::~CVProfCounter  (line 1527, @0x000000000227a460, libserver.so)
void __fastcall CVProfCounter::~CVProfCounter(CVProfCounter *const this)
{
  ;
}


