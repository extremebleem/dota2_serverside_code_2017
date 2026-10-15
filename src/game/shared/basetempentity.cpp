
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CBaseTempEntity::GetList  (line 29, @0x0000000002f4b780, libserver.so)
// globals: CBaseTempEntity::s_pTempEntities
CBaseTempEntity *__cdecl CBaseTempEntity::GetList()
{
  return CBaseTempEntity::s_pTempEntities;
}


// CBaseTempEntity::CBaseTempEntity  (line 38, @0x0000000002f4b790, libserver.so)  // inlines: CCopyableLock, CThreadFastMutex, CUtlMemory, CUtlSlot, CUtlVector, CUtlVectorBase, CUtlVectorMT
// callers: CTEBeamEntPoint::CTEBeamEntPoint, CTEExplosion::CTEExplosion, __static_initialization_and_destruction_0
// globals: CBaseTempEntity::s_pTempEntities
void __fastcall CBaseTempEntity::CBaseTempEntity(CBaseTempEntity *const this)
{
  CBaseTempEntity *v1; // rax

  this->_vptr_CBaseTempEntity = off_47B7A30;
  v1 = CBaseTempEntity::s_pTempEntities;
  this->m_ConnectedSignallers.m_Size = 0;
  this->m_ConnectedSignallers.m_Memory.m_pMemory = 0;
  this->m_ConnectedSignallers.m_Memory.m_nAllocationCount = 0;
  this->m_ConnectedSignallers.m_Memory.m_nGrowSize = 0;
  this->m_ConnectedSignallers.m_ownerID = 0;
  this->m_ConnectedSignallers.m_depth = 0;
  this->m_ConnectedSignallers.Mutex_t.m_ownerID = 0;
  this->m_ConnectedSignallers.Mutex_t.m_depth = 0;
  this->m_pNext = v1;
  CBaseTempEntity::s_pTempEntities = this;
}


// CBaseTempEntity::GetNext  (line 49, @0x0000000002f4b7f0, libserver.so)
CBaseTempEntity *__fastcall CBaseTempEntity::GetNext(CBaseTempEntity *const this)
{
  return this->m_pNext;
}


// CBaseTempEntity::StaticInitTempEnts  (line 57, @0x0000000002f4b800, libserver.so)  // inlines: GetList, GetNext
// callers: CLoopModeGame::StaticInit
// globals: CBaseTempEntity::s_pTempEntities
void __cdecl CBaseTempEntity::StaticInitTempEnts()
{
  CBaseTempEntity *i; // rbx

  for ( i = CBaseTempEntity::s_pTempEntities; i != 0; i = i->m_pNext )
    (*(i->_vptr_CBaseTempEntity + 3))(i);
}


// CBaseTempEntity::StaticShutdownTempEnts  (line 67, @0x0000000002f4b840, libserver.so)  // inlines: GetList, GetNext
// callers: CLoopModeFactory<CLoopModeGame>::Shutdown, CLoopModeGame::StaticShutdown
// globals: CBaseTempEntity::s_pTempEntities
void __cdecl CBaseTempEntity::StaticShutdownTempEnts()
{
  CBaseTempEntity *i; // rbx

  for ( i = CBaseTempEntity::s_pTempEntities; i != 0; i = i->m_pNext )
    (*(i->_vptr_CBaseTempEntity + 4))(i);
}


