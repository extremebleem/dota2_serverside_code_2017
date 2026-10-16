
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CNavObstructionManager::~CNavObstructionManager  (line 23, @0x00000000020337a0, libserver.so)  // inlines: MarkInvalid, Purge, RemoveAll, ~CUtlHashtable, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlMemory<CFuncNavConnectionBlocker*, int>::Purge, CUtlMemory<CNavDoorBlocker*, int>::Purge, CUtlMemory<CNavArea*, int>::Purge
void __fastcall CNavObstructionManager::~CNavObstructionManager(CNavObstructionManager *const this)
{
  bool v2; // zf
  int m_nUsed; // ecx
  int v4; // edx
  CUtlHashtableEntry<int,INavObstacle*> *v5; // rax
  CUtlVectorBase<CNavDoorBlocker*,CUtlMemory<CNavDoorBlocker*,int> >::CAllocator *p_m_Memory; // r12

  this->m_doorBlockers.m_Size = 0;
  v2 = (this->m_doorBlockers.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_INavObstructionManager = off_47B0D30;  // vptr: CNavObstructionManager
  if ( v2 )
  {
    p_m_Memory = &this->m_doorBlockers.m_Memory;
    CUtlMemory<CNavDoorBlocker *,int>::Purge(&this->m_doorBlockers.m_Memory);
    if ( (this->m_doorBlockers.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CNavDoorBlocker *,int>::Purge(p_m_Memory);
  }
  v2 = (this->m_connectionBlockers.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_connectionBlockers.m_Size = 0;
  if ( v2 )
  {
    CUtlMemory<CFuncNavConnectionBlocker *,int>::Purge(&this->m_connectionBlockers.m_Memory);
    if ( (this->m_connectionBlockers.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CFuncNavConnectionBlocker *,int>::Purge(&this->m_connectionBlockers.m_Memory);
  }
  m_nUsed = this->m_avoidanceObstacles.m_nUsed;
  if ( m_nUsed != 0 )
  {
    v4 = this->m_avoidanceObstacles.m_table.m_nAllocationCount - 1;
    if ( v4 >= 0 )
    {
      v5 = &this->m_avoidanceObstacles.m_table.m_pMemory[v4];
      do
      {
        if ( v5->flags_and_hash >= 0 )
        {
          --m_nUsed;
          v5->flags_and_hash = 0x80000000;
          if ( m_nUsed == 0 )
            break;
        }
        --v4;
        --v5;
      }
      while ( v4 != -1 );
    }
    this->m_avoidanceObstacles.m_nUsed = 0;
  }
  if ( (this->m_avoidanceObstacles.m_table.m_nGrowSize & 0xC0000000) == 0 )
  {
    if ( this->m_avoidanceObstacles.m_table.m_pMemory != 0 )
    {
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
      this->m_avoidanceObstacles.m_table.m_pMemory = 0;
    }
    this->m_avoidanceObstacles.m_table.m_nAllocationCount = 0;
  }
  v2 = (this->m_avoidanceObstacleAreas.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_avoidanceObstacleAreas.m_Size = 0;
  if ( v2 )
  {
    CUtlMemory<CNavArea *,int>::Purge(&this->m_avoidanceObstacleAreas.m_Memory);
    if ( (this->m_avoidanceObstacleAreas.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CNavArea *,int>::Purge(&this->m_avoidanceObstacleAreas.m_Memory);
  }
  v2 = (this->m_blockedAreas.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_blockedAreas.m_Size = 0;
  if ( v2 )
  {
    CUtlMemory<CNavArea *,int>::Purge(&this->m_blockedAreas.m_Memory);
    if ( (this->m_blockedAreas.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CNavArea *,int>::Purge(&this->m_blockedAreas.m_Memory);
  }
}


// CNavObstructionManager::GetNavObstacleMgr  (line 43, @0x0000000002f04df0, libserver.so)
CNavObstacleMgr *__fastcall CNavObstructionManager::GetNavObstacleMgr(CNavObstructionManager *const this)
{
  return this->m_pObstacleMgr;
}


