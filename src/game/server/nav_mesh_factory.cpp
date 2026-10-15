
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// GetNavObstructionMgr  (line 38, @0x0000000002032050, libserver.so)
// calls: __cxa_guard_acquire, CNavObstructionManager::CNavObstructionManager, __cxa_guard_release, __cxa_atexit, __cxa_guard_abort, _Unwind_Resume
// callers: NavMeshFactory, CPhysicsProp::UpdateOnRemove, CPhysicsProp::VPhysicsUpdate, CPhysicsProp::Spawn, CFuncNavBlocker::BlockArea, CFuncNavBlocker::operator(), CNavMeshGameEventListener::FireGameEvent, CNavDoorBlocker::~CNavDoorBlocker, CNavSplice::BlockBackgroundMesh, CFuncNavBlocker::UpdateBlocked, CNavGenerator::BeginGeneration, CNavSplice::ExpandSpliceMesh (16 total)
// globals: `guard variable for'GetNavObstructionMgr(void)::obstructionMgr, GetNavObstructionMgr(void)::obstructionMgr, __dso_handle, CNavObstructionManager::~CNavObstructionManager()
CNavObstructionManager *__cdecl GetNavObstructionMgr()
{
  if ( `guard variable for'GetNavObstructionMgr(void)::obstructionMgr != 0 )
    return &GetNavObstructionMgr(void)::obstructionMgr;
  if ( __cxa_guard_acquire(&`guard variable for'GetNavObstructionMgr(void)::obstructionMgr) != 0 )
  {
    CNavObstructionManager::CNavObstructionManager(&GetNavObstructionMgr(void)::obstructionMgr);
    __cxa_guard_release(&`guard variable for'GetNavObstructionMgr(void)::obstructionMgr);
    __cxa_atexit(
      CNavObstructionManager::~CNavObstructionManager,
      &GetNavObstructionMgr(void)::obstructionMgr,
      &_dso_handle);
  }
  return &GetNavObstructionMgr(void)::obstructionMgr;
}


// NavMeshFactory  (line 50, @0x00000000020320f0, libserver.so)  // inlines: CNavDraw, CNavDrawArea, CNavDrawMesh, CNavGeneratorAAQuad, CTraceFilterGroundEntities, CTraceFilterWalkableEntities, CUtlHashtable, CUtlMemory, EnableInteractsExclude, IsAttributeTableEmpty
// calls: operator new, CNavMesh::CNavMesh, CNavMeshGameEventListener::CNavMeshGameEventListener, CNavMesh::RegisterNavMeshGameEventListener, CNavEditor::CNavEditor, CNavMesh::RegisterNavEditor, GetNavObstructionMgr, CNavMesh::RegisterObstructionManager, CNavGenerator::CNavGenerator, CNavMesh::RegisterGenerator, CNavMesh::RegisterEntityInterface, CNavMesh::RegisterPhysicsInterface (18 total)
// callers: CNavGameSystem::CNavGameSystem, CNavGameSystem::EnsureUniqueNavMeshForActiveSpawnGroup
CNavMesh *__cdecl NavMeshFactory()
{
  CNavMesh *v0; // rbx
  CNavMeshGameEventListener *v1; // r12
  INavMeshGameEventListener *v2; // rsi
  CNavEditor *v3; // r12
  CNavObstructionManager *NavObstructionMgr; // rax
  CNavGenerator *v5; // r12
  INavEntityInterface *v6; // rax
  INavPhysicsInterface *v7; // rax
  CTraceFilterSimple *v8; // r12
  CTraceFilterSimple *v9; // r12
  INavDrawMesh *v11; // rax
  INavDrawArea *v12; // rax
  INavDraw *v13; // rax

  if ( INavDraw::ms_pInst == 0 )
  {
    v13 = operator new(8u);
    v13->_vptr_INavDraw = &off_3FE70D0;
    INavDraw::ms_pInst = v13;
  }
  if ( INavDrawMesh::ms_pInst == 0 )
  {
    v11 = operator new(8u);
    v11->_vptr_INavDrawMesh = &off_47AE2D0;
    INavDrawMesh::ms_pInst = v11;
  }
  if ( CNavConfig::ms_AttributeTable.m_Size == 0 )
    CNavConfig::FillAttributeTableBase();
  if ( INavDrawArea::ms_pInst == 0 )
  {
    v12 = operator new(8u);
    v12->_vptr_INavDrawArea = off_47AE250;
    INavDrawArea::ms_pInst = v12;
  }
  v0 = operator new(0x2150u);
  CNavMesh::CNavMesh(v0);
  if ( v0 != 0 )
  {
    v1 = operator new(0x20u);
    CNavMeshGameEventListener::CNavMeshGameEventListener(v1, v0);
    v2 = 0;
    if ( v1 != 0 )
      v2 = &v1->INavMeshGameEventListener;
    CNavMesh::RegisterNavMeshGameEventListener(v0, v2);
    v3 = operator new(0x150u);
    CNavEditor::CNavEditor(v3, v0);
    CNavMesh::RegisterNavEditor(v0, v3);
    NavObstructionMgr = GetNavObstructionMgr();
    CNavMesh::RegisterObstructionManager(v0, NavObstructionMgr);
    v5 = operator new(0xC0u);
    CNavGenerator::CNavGenerator(v5, v0);
    v5[1]._vptr_CNavGeneratorBase = 0;
    LODWORD(v5[1].m_rNavMesh) = 0;
    HIDWORD(v5[1].m_rNavMesh) = 0;
    LODWORD(v5[1].m_rNavAreas) = 0;
    v5->_vptr_CNavGeneratorBase = off_47B0C90;
    HIDWORD(v5[1].m_rNavAreas) = 32;
    LOBYTE(v5[1].m_rNavLadders) = 0;
    CNavMesh::RegisterGenerator(v0, v5);
    v6 = operator new(8u);
    v6->_vptr_INavEntityInterface = &off_47B0050;
    CNavMesh::RegisterEntityInterface(v0, v6);
    v7 = operator new(8u);
    v7->_vptr_INavPhysicsInterface = &off_47AE370;
    CNavMesh::RegisterPhysicsInterface(v0, v7);
    v8 = operator new(0x48u);
    CTraceFilterSimple::CTraceFilterSimple(v8, 0, 4, 0);
    v8->m_attr.m_nInteractsExclude |= 0xC0000uLL;
    LODWORD(v8[1]._vptr_CTraceFilter) = 15;
    v8->_vptr_CTraceFilter = off_3FE6A90;
    CNavMesh::RegisterFilterGroundEntities(v0, v8);
    v9 = operator new(0x48u);
    CTraceFilterSimple::CTraceFilterSimple(v9, 0, 11, 0);
    v9->m_attr.m_nInteractsExclude |= 0xC0000uLL;
    LODWORD(v9[1]._vptr_CTraceFilter) = 15;
    v9->_vptr_CTraceFilter = off_3FE6A50;
    CNavMesh::RegisterFilterWalkableEntities(v0, v9);
  }
  return v0;
}


