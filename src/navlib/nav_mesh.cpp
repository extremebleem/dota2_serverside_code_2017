
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// _GLOBAL__sub_I_nav_mesh.cpp  (line 0, @0x0000000001a6db00, libserver.so)  // inlines: Color, SetColor, Vector, __static_initialization_and_destruction_0
// calls: LoggingSystem_RegisterLoggingChannel
// strings: "NavMesh"
// globals: UNSPECIFIED_LOGGING_COLOR, LOG_NAV, WalkableTraceMins, WalkableTraceMaxs
void __cdecl GLOBAL__sub_I_nav_mesh_cpp()
{
  LoggingChannelID_t v0; // eax

  UNSPECIFIED_LOGGING_COLOR._color[0] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[1] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[2] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[3] = 0;
  v0 = LoggingSystem_RegisterLoggingChannel("NavMesh", 0, 0, 2, *&UNSPECIFIED_LOGGING_COLOR);
  WalkableTraceMins.z = 0.0;
  LOG_NAV = v0;
  WalkableTraceMins.x = -2.5;
  WalkableTraceMins.y = -2.5;
  WalkableTraceMaxs.z = 55.0;
  WalkableTraceMaxs.x = 2.5;
  WalkableTraceMaxs.y = 2.5;
}


// CNavGeneratorBase::CNavGeneratorBase  (line 35, @0x00000000031f2f30, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, ResetNavMesh
// callers: CNavGenerator::CNavGenerator
void __fastcall CNavGeneratorBase::CNavGeneratorBase(CNavGeneratorBase *const this, CNavMesh *const rNavMesh)
{
  this->_vptr_CNavGeneratorBase = &off_47CE290;
  this->m_rNavMesh = rNavMesh;
  this->m_rNavAreas = &rNavMesh->m_NavAreas;
  this->m_rNavLadders = &rNavMesh->m_Ladders;
  this->m_walkableSeeds.m_Size = 0;
  this->m_walkableSeeds.m_Memory.m_pMemory = 0;
  this->m_walkableSeeds.m_Memory.m_nAllocationCount = 0;
  this->m_walkableSeeds.m_Memory.m_nGrowSize = 0;
  this->m_generationMode = CNavGeneratorBase::GenerationModeType::GENERATE_NONE;
  this->m_bQuitWhenFinished = 0;
}


// CNavGeneratorBase::ResetNavMesh  (line 45, @0x00000000031f26b0, libserver.so)
void __fastcall CNavGeneratorBase::ResetNavMesh(CNavGeneratorBase *const this)
{
  this->m_generationMode = CNavGeneratorBase::GenerationModeType::GENERATE_NONE;
  this->m_bQuitWhenFinished = 0;
}


// GetScriptDesc<CNavScript>  (line 56, @0x00000000031fa0f0, libserver.so)  // inlines: AddParameterType, AddToTail, CUtlMemory, CUtlVector, CUtlVectorBase, Construct<ScriptFunctionBinding_t>, Finalize, GrowMemory, ScriptClassDesc_t, ScriptDeduceFunctionSignature<CNavScript*, CNavScript, CVariantBase<CVariantDefaultAllocator>, const Vector&, const Vector&>, ScriptFuncDescriptor_t, ScriptFunctionBinding_t, SetDescription, SetFunctionName, SetReturnType, SetScriptName
// calls: operator new, CUtlMemory<ScriptFunctionBinding_t, int>::Grow
// strings: "!Script interface for navigation system", "CNavScript", "Test a ray against the nav mesh.  - Inputs: vStart, vEnd  -- Outputs: bStartsInMesh, bExi, "Script_TestRayToMesh"
// globals: g_pCNavScript_ScriptDesc, CMemberScriptBinding2<CNavScript *,CVariantBase<CVariantDefaultAllocator> (CNavScript::*)(Vector const&,Vector const&),CVariantBase<CVariantDefaultAllocator>,Ve, CNavScript::Script_TestRayToMesh(Vector const&,Vector const&)
ScriptClassDesc_t *__fastcall GetScriptDesc<CNavScript>(CNavScript *pScriptDescObjectInstance)
{
  ScriptClassDesc_t *result; // rax
  ScriptClassDesc_t *v2; // rbx
  ScriptFunctionBinding_t *m_pMemory; // rcx
  int8 m_nNumParameters; // dl
  char v5; // al
  int v6; // edx
  int8 v7; // si

  result = g_pCNavScript_ScriptDesc;
  if ( g_pCNavScript_ScriptDesc == 0 )
  {
    v2 = operator new(0x50u);
    v2->m_pBaseDesc = 0;
    v2->m_FunctionBindings.m_Size = 0;
    v2->m_FunctionBindings.m_Memory.m_pMemory = 0;
    v2->m_FunctionBindings.m_Memory.m_nAllocationCount = 0;
    v2->m_FunctionBindings.m_Memory.m_nGrowSize = 0;
    v2->m_pfnConstruct = 0;
    v2->m_pfnDestruct = 0;
    v2->pHelper = 0;
    g_pCNavScript_ScriptDesc = v2;
    v2->m_pszDescription = "!Script interface for navigation system";
    v2->m_pszScriptName = "CNavScript";
    v2->m_pszClassname = "CNavScript";
    CUtlMemory<ScriptFunctionBinding_t,int>::Grow(&v2->m_FunctionBindings.m_Memory, 1);
    m_pMemory = v2->m_FunctionBindings.m_Memory.m_pMemory;
    ++v2->m_FunctionBindings.m_Size;
    if ( m_pMemory != 0 )
    {
      m_pMemory->m_desc.m_pszScriptName = 0;
      m_pMemory->m_desc.m_pszFunction = 0;
      m_pMemory->m_desc.m_pszDescription = 0;
      m_pMemory->m_desc.m_ReturnType = 29;
      m_pMemory->m_desc.m_nOptionalParameters = -1;
      m_pMemory->m_desc.m_nNumParameters = 0;
      m_pMemory->m_desc.m_pPackedParameterNames = 0;
      m_pMemory = v2->m_FunctionBindings.m_Memory.m_pMemory;
    }
    m_nNumParameters = m_pMemory->m_desc.m_nNumParameters;
    m_pMemory->m_desc.m_ReturnType = 32;
    m_pMemory->m_desc.m_pszDescription = "Test a ray against the nav mesh.  - Inputs: vStart, vEnd  -- Outputs: bStartsIn"
                                         "Mesh, bExitsMesh, vPos (vStart if not bStartsInMesh)";
    m_pMemory->m_desc.m_pszScriptName = "TestRayToMesh";
    m_pMemory->m_desc.m_pszFunction = "Script_TestRayToMesh";
    m_pMemory->m_desc.m_ParameterTypes[m_nNumParameters] = 3;
    v5 = m_nNumParameters + 1;
    m_nNumParameters += 2;
    m_pMemory->m_desc.m_ParameterTypes[v5] = 3;
    m_pMemory->m_desc.m_nNumParameters = m_nNumParameters;
    v6 = m_nNumParameters - 1;
    m_pMemory->m_desc.m_nOptionalParameters = 0;
    if ( v6 >= 0 && m_pMemory->m_desc.m_ParameterTypes[v6] == 32 )
    {
      v7 = 0;
      do
      {
        --v6;
        ++v7;
      }
      while ( v6 != -1 && m_pMemory->m_desc.m_ParameterTypes[v6] == 32 );
      m_pMemory->m_desc.m_nOptionalParameters = v7;
    }
    m_pMemory->m_flags = 1;
    m_pMemory->m_pfnBinding = CMemberScriptBinding2<CNavScript *,CVariantBase<CVariantDefaultAllocator> (CNavScript::*)(Vector const&,Vector const&),CVariantBase<CVariantDefaultAllocator>,Vector const&,Vector const&>::Call;
    m_pMemory->m_pFunction = CNavScript::Script_TestRayToMesh;
    return v2;
  }
  return result;
}


// CNavScript::Script_TestRayToMesh  (line 64, @0x00000000031f9770, libserver.so)  // inlines: CNavTraceResult, CVariantBase, CopyData<Vector>, Free, StartedOnAndExitedMesh, StartedOnMesh, TakeOwnership, ~CVariantBase
// calls: NavHull_t::NavHull_t, CNavMesh::TestRayToMesh, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// strings: "bStartsInMesh", "bExitsMesh"
// globals: TheNavMesh
__int64 *__fastcall CNavScript::Script_TestRayToMesh(
        __int64 *a1,
        CNavScript *const this,
        const Vector2D *vStart,
        const Vector2D *vEnd)
{
  __int64 v5; // r14
  vec_t z; // eax
  float v7; // xmm2_4
  float v8; // xmm3_4
  void (__fastcall *v9)(IScriptVM *, __int64, const char *, NavHull_t *); // r8
  bool v10; // dl
  void (__fastcall *v11)(IScriptVM *, __int64, const char *, NavHull_t *); // rax
  void (__fastcall *v12)(IScriptVM *, __int64, char *, NavHull_t *); // rax
  NavHull_t v16; // [rsp+10h] [rbp-60h] BYREF
  CNavTraceResult traceResult; // [rsp+20h] [rbp-50h] BYREF

  *(a1 + 4) = 0;
  *(a1 + 5) = 0;
  *a1 = 0;
  (*(*g_pScriptVM + 264LL))(g_pScriptVM, a1);
  v5 = *a1;
  traceResult.m_flEndT = -1.0;
  z = vec3_invalid.z;
  *&traceResult.m_vEndPos.x = *&vec3_invalid.x;
  traceResult.m_vEndPos.z = z;
  *&traceResult.m_vExitNormal.x = *&vec3_invalid.x;
  traceResult.m_vExitNormal.z = z;
  NavHull_t::NavHull_t(&v16, 0.0, v7, 1u);
  CNavMesh::TestRayToMesh(
    TheNavMesh,
    vStart,
    vEnd,
    *&v16.m_hullCategory,
    &traceResult,
    0,
    v16.m_flHullHeight,
    0xBF800000,
    0xBF800000,
    v8);
  v9 = *(*g_pScriptVM + 240LL);
  LODWORD(v16.m_flHullHeight) = 6;
  LOBYTE(v16.m_hullCategory) = traceResult.m_flEndT != 0.0;
  v9(g_pScriptVM, v5, "bStartsInMesh", &v16);
  if ( (BYTE2(v16.m_flHullHeight) & 1) != 0 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, *&v16.m_hullCategory);
  v10 = 0;
  v11 = *(*g_pScriptVM + 240LL);
  if ( traceResult.m_flEndT > 0.0 )
    v10 = traceResult.m_flEndT < 1.0;
  LOBYTE(v16.m_hullCategory) = v10;
  LODWORD(v16.m_flHullHeight) = 6;
  v11(g_pScriptVM, v5, "bExitsMesh", &v16);
  if ( (BYTE2(v16.m_flHullHeight) & 1) != 0 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, *&v16.m_hullCategory);
  v12 = *(*g_pScriptVM + 240LL);
  LODWORD(v16.m_flHullHeight) = 3;
  *&v16.m_hullCategory = &traceResult.m_vEndPos;
  v12(g_pScriptVM, v5, "vPos", &v16);
  if ( (BYTE2(v16.m_flHullHeight) & 1) != 0 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, *&v16.m_hullCategory);
  if ( *(a1 + 4) == 31 )
    *(a1 + 4) = 36;
  return a1;
}


// ChangeTheNavMesh  (line 92, @0x00000000031f2f80, libserver.so)  // inlines: OnChangeTheNavMesh
// callers: CNavGameSystem::SwitchNav, CNavGameSystem::LoadNavForSpawnGroup, CNavGameSystem::~CNavGameSystem, CNavGameSystem::GameShutdown, CNavGameSystem::EnsureUniqueNavMeshForActiveSpawnGroup, CNavGameSystem::PostSpawnGroupLoad, CNavGameSystem::PostSpawnGroupUnload, CNavMesh::CreateAndLoadNavMesh
// globals: TheNavMesh
void __fastcall ChangeTheNavMesh(CNavMesh *pNewNavMesh)
{
  INavObstructionManager *m_pObstructionManager; // rdi

  if ( TheNavMesh != 0 )
  {
    m_pObstructionManager = TheNavMesh->m_pObstructionManager;
    if ( m_pObstructionManager != 0 )
      (*(m_pObstructionManager->_vptr_INavObstructionManager + 3))(m_pObstructionManager);
  }
  TheNavMesh = pNewNavMesh;
}


// CNavMesh::CNavMesh  (line 103, @0x00000000031f9570, libserver.so)  // inlines: CNavSelectionSet, CUtlMemory, CUtlString, CUtlVector, CUtlVectorBase, Purge, RemoveAll, ~CNavSelectionSet, ~CUtlMemory, ~CUtlString, ~CUtlVector, ~CUtlVectorBase
// calls: CNavPlaceDatabase::CNavPlaceDatabase, CNavMesh::ResetNavMesh, CUtlVectorBase<CNavArea*, CUtlMemory<CNavArea*, int> >::~CUtlVectorBase, _Unwind_Resume, CUtlString::FreeMemoryBlock, CUtlVectorBase<CUtlVector<CNavArea*, CUtlMemory<CNavArea*, int> >, CUtlMemory<CUtlVector<CNavArea*, CUtlMemory<CNavArea*, int> >, int> >::RemoveAll, CNavPlaceDatabase::~CNavPlaceDatabase, CUtlMemory<CNavLadder*, int>::Purge, CUtlMemory<CUtlVector<CNavArea*, CUtlMemory<CNavArea*, int> >, int>::Purge
// callers: NavMeshFactory
void __fastcall CNavMesh::CNavMesh(CNavMesh *const this)
{
  this->_vptr_CNavMesh = off_47CE2F0;
  this->m_NavAreas.m_Size = 0;
  this->m_NavAreas.m_Memory.m_pMemory = 0;
  this->m_NavAreas.m_Memory.m_nAllocationCount = 0;
  this->m_NavAreas.m_Memory.m_nGrowSize = 0;
  this->m_SelectionSet.m_SetAreas.m_Size = 0;
  this->m_SelectionSet.m_SetAreas.m_Memory.m_pMemory = 0;
  this->m_SelectionSet.m_SetAreas.m_Memory.m_nAllocationCount = 0;
  this->m_SelectionSet.m_SetAreas.m_Memory.m_nGrowSize = 0;
  CNavPlaceDatabase::CNavPlaceDatabase(&this->m_PlaceDatabase);
  this->m_Grid.m_Size = 0;
  this->m_Grid.m_Memory.m_pMemory = 0;
  this->m_Grid.m_Memory.m_nAllocationCount = 0;
  this->m_Grid.m_Memory.m_nGrowSize = 0;
  this->m_Ladders.m_Size = 0;
  this->m_Ladders.m_Memory.m_pMemory = 0;
  this->m_Ladders.m_Memory.m_nAllocationCount = 0;
  this->m_Ladders.m_Memory.m_nGrowSize = 0;
  this->m_NavFilename.m_pString = 0;
  this->m_flGridCellSize = 300.0;
  this->m_bNavFilesEverWritable = 0;
  this->m_nFileSubVersion = 0;
  this->m_nVisMask = 540737;
  this->m_pNavMeshGameEventListener = 0;
  this->m_pEditor = 0;
  this->m_pObstructionManager = 0;
  this->m_pGenerator = 0;
  this->m_pEntityInterface = 0;
  this->m_pPhysicsInterface = 0;
  this->m_pTraceFilterWalkableEntities = 0;
  this->m_pTraceFilterGroundEntities = 0;
  this->m_pPrecacheInfo = 0;
  CNavMesh::ResetNavMesh(this);
}


// CNavMesh::RegisterNavMeshGameEventListener  (line 126, @0x00000000031f2fc0, libserver.so)
// callers: NavMeshFactory
void __fastcall CNavMesh::RegisterNavMeshGameEventListener(
        CNavMesh *const this,
        INavMeshGameEventListener *pGameEventListener)
{
  this->m_pNavMeshGameEventListener = pGameEventListener;
}


// CNavMesh::RegisterNavEditor  (line 134, @0x00000000031f2fd0, libserver.so)
// callers: NavMeshFactory
void __fastcall CNavMesh::RegisterNavEditor(CNavMesh *const this, INavEditor *pEditor)
{
  this->m_pEditor = pEditor;
}


// CNavMesh::RegisterObstructionManager  (line 142, @0x00000000031f2fe0, libserver.so)
// callers: NavMeshFactory
void __fastcall CNavMesh::RegisterObstructionManager(CNavMesh *const this, INavObstructionManager *pObstructionManager)
{
  this->m_pObstructionManager = pObstructionManager;
}


// CNavMesh::RegisterPhysicsInterface  (line 150, @0x00000000031f2ff0, libserver.so)
// callers: NavMeshFactory
void __fastcall CNavMesh::RegisterPhysicsInterface(CNavMesh *const this, INavPhysicsInterface *pPhysicsInterface)
{
  this->m_pPhysicsInterface = pPhysicsInterface;
}


// CNavMesh::RegisterGenerator  (line 158, @0x00000000031f3000, libserver.so)
// callers: NavMeshFactory
void __fastcall CNavMesh::RegisterGenerator(CNavMesh *const this, CNavGeneratorBase *pGenerator)
{
  this->m_pGenerator = pGenerator;
}


// CNavMesh::IsGenerating  (line 166, @0x00000000031f3010, libserver.so)  // inlines: IsGenerating
// callers: CBaseCombatCharacter::UpdateLastKnownArea, CNavEditor::DrawEditMode, CNavArea::SplitArea, CNavArea::SplitArea_Old
bool __fastcall CNavMesh::IsGenerating(const CNavMesh *const this)
{
  CNavGeneratorBase *m_pGenerator; // rax

  m_pGenerator = this->m_pGenerator;
  return m_pGenerator != 0 && m_pGenerator->m_generationMode != CNavGeneratorBase::GenerationModeType::GENERATE_NONE;
}


// CNavMesh::RegisterEntityInterface  (line 173, @0x00000000031f3040, libserver.so)
// callers: NavMeshFactory
void __fastcall CNavMesh::RegisterEntityInterface(CNavMesh *const this, INavEntityInterface *pElevatorManager)
{
  this->m_pEntityInterface = pElevatorManager;
}


// CNavMesh::RegisterFilterWalkableEntities  (line 181, @0x00000000031f3050, libserver.so)
// callers: NavMeshFactory
void __fastcall CNavMesh::RegisterFilterWalkableEntities(CNavMesh *const this, CTraceFilter *pTraceFilter)
{
  this->m_pTraceFilterWalkableEntities = pTraceFilter;
}


// CNavMesh::RegisterFilterGroundEntities  (line 188, @0x00000000031f3060, libserver.so)
// callers: NavMeshFactory
void __fastcall CNavMesh::RegisterFilterGroundEntities(CNavMesh *const this, CTraceFilter *pTraceFilter)
{
  this->m_pTraceFilterGroundEntities = pTraceFilter;
}


// CNavMesh::~CNavMesh  (line 195, @0x00000000031f93b0, libserver.so)  // inlines: Purge, RemoveAll, ~CNavSelectionSet, ~CUtlMemory, ~CUtlString, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlString::FreeMemoryBlock, CUtlVectorBase<CUtlVector<CNavArea*, CUtlMemory<CNavArea*, int> >, CUtlMemory<CUtlVector<CNavArea*, CUtlMemory<CNavArea*, int> >, int> >::RemoveAll, CNavPlaceDatabase::~CNavPlaceDatabase, CUtlMemory<CUtlVector<CNavArea*, CUtlMemory<CNavArea*, int> >, int>::Purge, CUtlMemory<CNavLadder*, int>::Purge, CUtlMemory<CNavArea*, int>::Purge
// callers: CNavMesh::~CNavMesh
// globals: TheNavMesh
void __fastcall CNavMesh::~CNavMesh(CNavMesh *const this)
{
  INavMeshGameEventListener *m_pNavMeshGameEventListener; // rdi
  INavEditor *m_pEditor; // rdi
  CNavGeneratorBase *m_pGenerator; // rdi
  CNavPrecacheInfo *m_pPrecacheInfo; // rdi
  bool v6; // zf

  this->_vptr_CNavMesh = off_47CE2F0;
  m_pNavMeshGameEventListener = this->m_pNavMeshGameEventListener;
  if ( m_pNavMeshGameEventListener != 0 )
    (*m_pNavMeshGameEventListener->_vptr_INavMeshGameEventListener)(m_pNavMeshGameEventListener);
  m_pEditor = this->m_pEditor;
  if ( m_pEditor != 0 )
    (*m_pEditor->_vptr_INavEditor)(m_pEditor);
  m_pGenerator = this->m_pGenerator;
  if ( m_pGenerator != 0 )
    (*(m_pGenerator->_vptr_CNavGeneratorBase + 1))(m_pGenerator);
  m_pPrecacheInfo = this->m_pPrecacheInfo;
  this->m_NavAreas.m_Size = 0;
  if ( m_pPrecacheInfo != 0 )
    (*(m_pPrecacheInfo->_vptr_CNavPrecacheInfo + 1))(m_pPrecacheInfo);
  if ( TheNavMesh == this )
    TheNavMesh = 0;
  if ( this->m_NavFilename.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->m_NavFilename);
  v6 = (this->m_Ladders.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_Ladders.m_Size = 0;
  if ( v6 )
  {
    CUtlMemory<CNavLadder *,int>::Purge(&this->m_Ladders.m_Memory);
    if ( (this->m_Ladders.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CNavLadder *,int>::Purge(&this->m_Ladders.m_Memory);
  }
  CUtlVectorBase<CUtlVector<CNavArea *,CUtlMemory<CNavArea *,int>>,CUtlMemory<CUtlVector<CNavArea *,CUtlMemory<CNavArea *,int>>,int>>::RemoveAll(&this->m_Grid);
  if ( (this->m_Grid.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CUtlVector<CNavArea *,CUtlMemory<CNavArea *,int>>,int>::Purge(&this->m_Grid.m_Memory);
    if ( (this->m_Grid.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CUtlVector<CNavArea *,CUtlMemory<CNavArea *,int>>,int>::Purge(&this->m_Grid.m_Memory);
  }
  CNavPlaceDatabase::~CNavPlaceDatabase(&this->m_PlaceDatabase);
  v6 = (this->m_SelectionSet.m_SetAreas.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_SelectionSet.m_SetAreas.m_Size = 0;
  if ( v6 )
  {
    CUtlMemory<CNavArea *,int>::Purge(&this->m_SelectionSet.m_SetAreas.m_Memory);
    if ( (this->m_SelectionSet.m_SetAreas.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CNavArea *,int>::Purge(&this->m_SelectionSet.m_SetAreas.m_Memory);
  }
  v6 = (this->m_NavAreas.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_NavAreas.m_Size = 0;
  if ( v6 )
  {
    CUtlMemory<CNavArea *,int>::Purge(&this->m_NavAreas.m_Memory);
    if ( (this->m_NavAreas.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CNavArea *,int>::Purge(&this->m_NavAreas.m_Memory);
  }
}


// CNavMesh::~CNavMesh  (line 195, @0x00000000031f9550, libserver.so)
// calls: CNavMesh::~CNavMesh, operator delete
void __fastcall CNavMesh::~CNavMesh(CNavMesh *const this)
{
  CNavMesh::~CNavMesh(this);
  operator delete(this);
}


// CNavMesh::OnChangeTheNavMesh  (line 224, @0x00000000031f3070, libserver.so)
void __fastcall CNavMesh::OnChangeTheNavMesh(CNavMesh *const this)
{
  INavObstructionManager *m_pObstructionManager; // rdi

  m_pObstructionManager = this->m_pObstructionManager;
  if ( m_pObstructionManager != 0 )
    (*(m_pObstructionManager->_vptr_INavObstructionManager + 3))(m_pObstructionManager);
}


// CNavMesh::ResetNavMesh  (line 235, @0x00000000031f9340, libserver.so)
// calls: CNavMesh::DestroyNavigationMesh
// callers: CNavMesh::CNavMesh
void __fastcall CNavMesh::ResetNavMesh(CNavMesh *const this)
{
  INavEditor *m_pEditor; // rdi
  INavObstructionManager *m_pObstructionManager; // rdi
  CNavGeneratorBase *m_pGenerator; // rdi

  m_pEditor = this->m_pEditor;
  if ( m_pEditor != 0 )
    (*(m_pEditor->_vptr_INavEditor + 2))(m_pEditor, 1, 1);
  m_pObstructionManager = this->m_pObstructionManager;
  if ( m_pObstructionManager != 0 )
    (*(m_pObstructionManager->_vptr_INavObstructionManager + 5))(m_pObstructionManager);
  m_pGenerator = this->m_pGenerator;
  if ( m_pGenerator != 0 )
    (*(m_pGenerator->_vptr_CNavGeneratorBase + 2))(m_pGenerator);
  CNavMesh::DestroyNavigationMesh(this, 0);
  this->m_bIsAnalyzed = 0;
  this->m_bIsOutOfDate = 0;
  CNavArea::ms_nNextID = 1;
}


// CNavMesh::DestroyNavigationMesh  (line 262, @0x00000000031f91d0, libserver.so)
// calls: CNavMesh::CompressAreaIDs, CNavLadder::CompressIDs, CNavMesh::DestroyLadders, CUtlVectorBase<CUtlVector<CNavArea*, CUtlMemory<CNavArea*, int> >, CUtlMemory<CUtlVector<CNavArea*, CUtlMemory<CNavArea*, int> >, int> >::RemoveAll
// callers: CNavGenerator::BeginGeneration, CNavMesh::ResetNavMesh
// globals: CNavMesh::m_id
void __fastcall CNavMesh::DestroyNavigationMesh(CNavMesh *const this, bool bIncremental)
{
  INavEditor *m_pEditor; // rdi
  INavObstructionManager *m_pObstructionManager; // rdi
  CNavGeneratorBase *m_pGenerator; // rdi
  __int64 i; // rax
  int m_Size; // eax
  unsigned __int64 v9; // r12
  __int64 v10; // r14
  INavEntityInterface *m_pEntityInterface; // rdi

  m_pEditor = this->m_pEditor;
  ++CNavMesh::m_id;
  if ( m_pEditor != 0 )
    (*(m_pEditor->_vptr_INavEditor + 2))(m_pEditor, !bIncremental, 0);
  m_pObstructionManager = this->m_pObstructionManager;
  if ( m_pObstructionManager != 0 )
    (*(m_pObstructionManager->_vptr_INavObstructionManager + 2))(m_pObstructionManager);
  m_pGenerator = this->m_pGenerator;
  if ( m_pGenerator != 0 )
    (*(m_pGenerator->_vptr_CNavGeneratorBase + 5))(m_pGenerator);
  if ( !bIncremental )
  {
    CNavArea::ms_bIsReset = 1;
    CNavMesh::DestroyLadders(this);
    m_Size = this->m_NavAreas.m_Size;
    if ( m_Size != 0 )
    {
      v9 = 0;
      v10 = 8LL * (m_Size - 1) + 8;
      do
      {
        m_pEntityInterface = this->m_pEntityInterface;
        if ( m_pEntityInterface != 0 )
          (*(m_pEntityInterface->_vptr_INavEntityInterface + 1))(
            m_pEntityInterface,
            this->m_NavAreas.m_Memory.m_pMemory[v9 / 8]);
        v9 += 8LL;
      }
      while ( v9 != v10 );
      while ( this->m_NavAreas.m_Size != 0 )
        (*(this->_vptr_CNavMesh + 5))(this, *this->m_NavAreas.m_Memory.m_pMemory);
    }
    CNavArea::ms_bIsReset = 0;
    CUtlVectorBase<CUtlVector<CNavArea *,CUtlMemory<CNavArea *,int>>,CUtlMemory<CUtlVector<CNavArea *,CUtlMemory<CNavArea *,int>>,int>>::RemoveAll(&this->m_Grid);
    this->m_nGridSizeX = 0;
    this->m_nGridSizeY = 0;
  }
  for ( i = 0; i != 1024; ++i )
    this->m_hashTable[i] = 0;
  if ( bIncremental )
  {
    this->m_bNavFilesEverWritable = 0;
  }
  else
  {
    this->m_nGridAreaCount = 0;
    CNavMesh::CompressAreaIDs(this);
    CNavLadder::CompressIDs(&this->m_Ladders);
    this->m_bNavFilesEverWritable = 0;
    this->m_bIsLoaded = 0;
  }
}


// CNavMesh::PostSpawnGroupLoad  (line 344, @0x00000000031f26d0, libserver.so)
void __fastcall CNavMesh::PostSpawnGroupLoad(CNavMesh *const this)
{
  (*(this->_vptr_CNavMesh + 17))(this);
}


// CNavMesh::ApplyMarkup  (line 351, @0x00000000031f26f0, libserver.so)
void __fastcall CNavMesh::ApplyMarkup(CNavMesh *const this)
{
  INavEntityInterface *m_pEntityInterface; // rax

  m_pEntityInterface = this->m_pEntityInterface;
  if ( m_pEntityInterface != 0 )
    (*m_pEntityInterface->_vptr_INavEntityInterface)(this->m_pEntityInterface, this);
}


// CNavMesh::Update  (line 361, @0x00000000031f2b60, libserver.so)  // inlines: Add, CMicroProfilerGuard, CMicroProfilerSample, CVProfScope, DrawClearance, DrawPlayerCounts, EnterScope, ExitScope, GetBool, GetElapsed, GetInt, GetTimebaseRegister, InTargetThread, IsEnabled, PLAT_CPU_TIME, ~CMicroProfilerGuard, ~CVProfScope
// calls: ThreadGetCurrentId, __cxa_guard_acquire, ConVarRef::ConVarRef, __cxa_guard_release, CVProfNode::ExitScope(void), CVProfNode::GetSubNode(char const*,int,char const*,int), CVProfNode::EnterScope(void), std::terminate(void), CVProfile::ExitScope, _Unwind_Resume, __cxa_guard_abort
// strings: "nav_show_clearance", "nav_show_player_counts", "CNavMesh::Update", "NextBot"
// globals: `guard variable for'CNavMesh::Update(void)::nav_show_player_counts, `guard variable for'CNavMesh::Update(void)::nav_show_clearance, CNavMesh::Update(void)::nav_show_clearance, CNavMesh::Update(void)::nav_show_player_counts
void __fastcall CNavMesh::Update(CNavMesh *const this)
{
  int m_enabled; // r9d
  bool v3; // r13
  CNavGeneratorBase *m_pGenerator; // rdi
  __int64 v5; // rdi
  INavObstructionManager *m_pObstructionManager; // rdi
  INavEditor *m_pEditor; // rdi
  unsigned __int64 m_nValue; // rdi
  unsigned __int64 v9; // r12
  ThreadId_t v10; // r13
  uint64 v11; // rcx
  ThreadId_t m_TargetThreadId; // r15
  unsigned __int64 v13; // r14
  uint64 m_numTimeBaseTicks; // rcx
  ThreadId_t v15; // r13
  CVProfNode *m_pParent; // rax
  CVProfNode *m_pCurNode; // rax
  CVProfile::CBudgetGroup *v18; // rax

  m_enabled = g_VProfCurrentProfile.m_enabled;
  v3 = m_enabled != 0;
  if ( m_enabled != 0 )
  {
    m_TargetThreadId = g_VProfCurrentProfile.m_TargetThreadId;
    v13 = __rdtsc();
    if ( m_TargetThreadId == ThreadGetCurrentId(this) )
    {
      m_pCurNode = g_VProfCurrentProfile.m_pCurNode;
      if ( m_pCurNode->m_pszName != "CNavMesh::Update" )
      {
        m_pCurNode = CVProfNode::GetSubNode(g_VProfCurrentProfile.m_pCurNode, "CNavMesh::Update", 0, "NextBot", 4);
        g_VProfCurrentProfile.m_pCurNode = m_pCurNode;
      }
      v18 = &g_VProfCurrentProfile.m_pBudgetGroups[m_pCurNode->m_BudgetGroupID];
      v18->m_BudgetFlags |= 4u;
      CVProfNode::EnterScope(g_VProfCurrentProfile.m_pCurNode);
      g_VProfCurrentProfile.m_fAtRoot = 0;
    }
    m_numTimeBaseTicks = g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks;
    ++g_VProfCurrentProfile.m_ScopeProfiler.m_numCalls;
    g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks = m_numTimeBaseTicks - v13 + __rdtsc();
  }
  if ( `guard variable for'CNavMesh::Update(void)::nav_show_player_counts == 0
    && __cxa_guard_acquire(&`guard variable for'CNavMesh::Update(void)::nav_show_player_counts) != 0 )
  {
    ConVarRef::ConVarRef(&CNavMesh::Update(void)::nav_show_player_counts, "nav_show_player_counts");
    __cxa_guard_release(&`guard variable for'CNavMesh::Update(void)::nav_show_player_counts);
  }
  if ( `guard variable for'CNavMesh::Update(void)::nav_show_clearance == 0
    && __cxa_guard_acquire(&`guard variable for'CNavMesh::Update(void)::nav_show_clearance) != 0 )
  {
    ConVarRef::ConVarRef(&CNavMesh::Update(void)::nav_show_clearance, "nav_show_clearance");
    __cxa_guard_release(&`guard variable for'CNavMesh::Update(void)::nav_show_clearance);
  }
  m_pGenerator = this->m_pGenerator;
  if ( m_pGenerator != 0 && (*m_pGenerator->_vptr_CNavGeneratorBase)(m_pGenerator) != 0 )
  {
    if ( !v3 )
      return;
    v9 = __rdtsc();
    if ( g_VProfCurrentProfile.m_fAtRoot && g_VProfCurrentProfile.m_enabled == 0
      || (v15 = g_VProfCurrentProfile.m_TargetThreadId) != ThreadGetCurrentId(v5) )
    {
LABEL_22:
      v11 = g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks;
      ++g_VProfCurrentProfile.m_ScopeProfiler.m_numCalls;
      g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks = v11 - v9 + __rdtsc();
      return;
    }
LABEL_32:
    if ( CVProfNode::ExitScope(g_VProfCurrentProfile.m_pCurNode) != 0 )
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
    goto LABEL_22;
  }
  m_pObstructionManager = this->m_pObstructionManager;
  if ( m_pObstructionManager != 0 )
    (*m_pObstructionManager->_vptr_INavObstructionManager)(m_pObstructionManager);
  m_pEditor = this->m_pEditor;
  if ( m_pEditor != 0 )
    (*(m_pEditor->_vptr_INavEditor + 1))(m_pEditor);
  if ( CNavMesh::Update(void)::nav_show_player_counts.m_pConVarState->m_Value.m_nValue != 0
    && INavDrawMesh::ms_pInst != 0 )
  {
    (*INavDrawMesh::ms_pInst->_vptr_INavDrawMesh)(INavDrawMesh::ms_pInst, this);
  }
  m_nValue = CNavMesh::Update(void)::nav_show_clearance.m_pConVarState->m_Value.m_nValue;
  if ( m_nValue != 0 )
  {
    m_nValue = INavDrawMesh::ms_pInst;
    if ( INavDrawMesh::ms_pInst != 0 )
      (*(INavDrawMesh::ms_pInst->_vptr_INavDrawMesh + 2))(INavDrawMesh::ms_pInst, this);
  }
  if ( v3 )
  {
    v9 = __rdtsc();
    if ( g_VProfCurrentProfile.m_fAtRoot && g_VProfCurrentProfile.m_enabled == 0 )
      goto LABEL_22;
    v10 = g_VProfCurrentProfile.m_TargetThreadId;
    if ( v10 != ThreadGetCurrentId(m_nValue) )
      goto LABEL_22;
    goto LABEL_32;
  }
}


// CNavMesh::DestroyArea  (line 422, @0x00000000031f2ab0, libserver.so)  // inlines: Element, FastRemove, memcpy, operator[]
// calls: CNavArea::SetAreaIndex
void __fastcall CNavMesh::DestroyArea(CNavMesh *const this, CNavArea *pArea)
{
  int32 m_nIndex; // ebx
  int m_Size; // eax
  CNavArea *v5; // rdi
  unsigned int v6; // r13d
  INavObstructionManager *m_pObstructionManager; // rdi

  m_nIndex = pArea->m_nIndex;
  (*(pArea->_vptr_CNavPoly + 2))(pArea);
  if ( m_nIndex != -1 )
  {
    m_Size = this->m_NavAreas.m_Size;
    if ( m_Size > 0 )
    {
      if ( m_nIndex != --m_Size )
      {
        this->m_NavAreas.m_Memory.m_pMemory[m_nIndex] = this->m_NavAreas.m_Memory.m_pMemory[m_Size];
        m_Size = this->m_NavAreas.m_Size - 1;
      }
      this->m_NavAreas.m_Size = m_Size;
    }
    if ( m_Size > m_nIndex )
    {
      v5 = this->m_NavAreas.m_Memory.m_pMemory[m_nIndex];
      v6 = v5->m_nIndex;
      CNavArea::SetAreaIndex(v5, m_nIndex);
      m_pObstructionManager = this->m_pObstructionManager;
      if ( m_pObstructionManager != 0 )
        (*(m_pObstructionManager->_vptr_INavObstructionManager + 8))(m_pObstructionManager, v6, m_nIndex);
    }
  }
}


// CNavMesh::CompressAreaIDs  (line 452, @0x00000000031f30a0, libserver.so)  // inlines: end
// callers: CommandNavCompressID, CNavMesh::DestroyNavigationMesh
void __fastcall CNavMesh::CompressAreaIDs(CNavMesh *const this)
{
  CNavArea **m_pMemory; // r12
  CNavArea **v3; // r15
  int v4; // eax
  CNavArea *v5; // r13

  m_pMemory = this->m_NavAreas.m_Memory.m_pMemory;
  v3 = &m_pMemory[this->m_NavAreas.m_Size];
  v4 = 1;
  CNavArea::ms_nNextID = 1;
  if ( m_pMemory != v3 )
  {
    while ( 1 )
    {
      v5 = *m_pMemory;
      CNavArea::ms_nNextID = v4 + 1;
      ++m_pMemory;
      v5->m_AreaId = v4;
      (*(this->_vptr_CNavMesh + 29))(this, v5);
      (*(this->_vptr_CNavMesh + 28))(this, v5);
      if ( v3 == m_pMemory )
        break;
      v4 = CNavArea::ms_nNextID;
    }
  }
}


// CNavMesh::RemoveInvalidNavAreas  (line 468, @0x00000000031f29a0, libserver.so)
// calls: CNavArea::IsValidArea
void __fastcall CNavMesh::RemoveInvalidNavAreas(CNavMesh *const this)
{
  INavEditor *m_pEditor; // rdi
  INavObstructionManager *m_pObstructionManager; // rdi
  int m_Size; // eax
  unsigned __int64 v5; // rbx
  __int64 v6; // r14
  const CNavArea *v7; // r12
  INavEntityInterface *m_pEntityInterface; // rdi

  m_pEditor = this->m_pEditor;
  if ( m_pEditor != 0 )
    (*(m_pEditor->_vptr_INavEditor + 3))(m_pEditor);
  m_pObstructionManager = this->m_pObstructionManager;
  if ( m_pObstructionManager != 0 )
    (*(m_pObstructionManager->_vptr_INavObstructionManager + 6))(m_pObstructionManager);
  m_Size = this->m_NavAreas.m_Size;
  if ( m_Size > 0 )
  {
    v5 = 0;
    v6 = 8LL * (m_Size - 1) + 8;
    do
    {
      while ( 1 )
      {
        v7 = this->m_NavAreas.m_Memory.m_pMemory[v5 / 8];
        if ( !CNavArea::IsValidArea(v7) )
          break;
        (*(v7->_vptr_CNavPoly + 25))(v7);
LABEL_8:
        v5 += 8LL;
        if ( v5 == v6 )
          return;
      }
      (*(this->_vptr_CNavMesh + 29))(this, v7);
      m_pEntityInterface = this->m_pEntityInterface;
      if ( m_pEntityInterface == 0 )
        goto LABEL_8;
      v5 += 8LL;
      (*(m_pEntityInterface->_vptr_INavEntityInterface + 1))(m_pEntityInterface, v7);
    }
    while ( v5 != v6 );
  }
}


// CNavMesh::PerformDeferredDeletion  (line 505, @0x00000000031fbab0, libserver.so)  // inlines: AddToTail, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<CNavArea*>, Element, EnsureCapacity, GrowMemory, Purge, RemoveAll, operator=, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<int, CUtlMemory<int, int> >::SetCount, CNavArea::IsValidArea, CUtlMemory<CNavArea*, int>::Grow, CUtlVectorBase<CNavArea*, CUtlMemory<CNavArea*, int> >::SetCount, CUtlMemory<int, int>::Purge, CUtlMemory<CNavArea*, int>::Purge, CUtlVectorBase<CNavArea*, CUtlMemory<CNavArea*, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CNavGeneratorAAQuad::MergeGeneratedAreas
void __fastcall CNavMesh::PerformDeferredDeletion(CNavMesh *const this)
{
  int m_Size; // ebx
  __int64 v3; // r15
  unsigned __int64 v4; // rbx
  int v5; // r12d
  int v6; // eax
  CNavArea **v7; // rax
  const CNavArea *v8; // r13
  int v9; // ebx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rbx
  __int64 v12; // r12
  NavAreaVector validNavAreas; // [rsp+20h] [rbp-70h] BYREF
  CUtlVector<int,CUtlMemory<int,int> > indexRemapTable; // [rsp+40h] [rbp-50h] BYREF

  (*(this->_vptr_CNavMesh + 30))(this);
  m_Size = this->m_NavAreas.m_Size;
  validNavAreas.m_Size = 0;
  validNavAreas.m_Memory.m_pMemory = 0;
  validNavAreas.m_Memory.m_nAllocationCount = 0;
  validNavAreas.m_Memory.m_nGrowSize = 0;
  if ( m_Size > 0 )
  {
    validNavAreas.m_Memory.m_pMemory = (**g_pMemAlloc)(g_pMemAlloc, 8LL * m_Size);
    validNavAreas.m_Memory.m_nAllocationCount = m_Size;
  }
  indexRemapTable.m_Size = 0;
  indexRemapTable.m_Memory.m_pMemory = 0;
  indexRemapTable.m_Memory.m_nAllocationCount = 0;
  indexRemapTable.m_Memory.m_nGrowSize = 0;
  CUtlVectorBase<int,CUtlMemory<int,int>>::SetCount(&indexRemapTable, m_Size);
  if ( m_Size > 0 )
  {
    v3 = 4LL * (m_Size - 1) + 4;
    v4 = 0;
    do
    {
      v8 = this->m_NavAreas.m_Memory.m_pMemory[v4 / 4];
      if ( CNavArea::IsValidArea(v8) )
      {
        v5 = validNavAreas.m_Size;
        v6 = validNavAreas.m_Size;
        if ( validNavAreas.m_Size == validNavAreas.m_Memory.m_nAllocationCount )
        {
          CUtlMemory<CNavArea *,int>::Grow(&validNavAreas.m_Memory, 1);
          v6 = validNavAreas.m_Size;
        }
        validNavAreas.m_Size = v6 + 1;
        v7 = &validNavAreas.m_Memory.m_pMemory[v5];
        if ( v7 != 0 )
          *v7 = v8;
      }
      else
      {
        (*(this->_vptr_CNavMesh + 5))(this, v8);
        v5 = -1;
      }
      indexRemapTable.m_Memory.m_pMemory[v4 / 4] = v5;
      v4 += 4LL;
    }
    while ( v4 != v3 );
  }
  if ( &this->m_NavAreas != &validNavAreas )
  {
    v9 = validNavAreas.m_Size;
    CUtlVectorBase<CNavArea *,CUtlMemory<CNavArea *,int>>::SetCount(&this->m_NavAreas, validNavAreas.m_Size);
    if ( v9 > 0 )
    {
      v10 = 0;
      do
      {
        this->m_NavAreas.m_Memory.m_pMemory[v10 / 8] = validNavAreas.m_Memory.m_pMemory[v10 / 8];
        v10 += 8LL;
      }
      while ( v10 != 8LL * (v9 - 1) + 8 );
    }
  }
  if ( validNavAreas.m_Size > 0 )
  {
    v11 = 0;
    v12 = 8LL * (validNavAreas.m_Size - 1) + 8;
    do
    {
      (*(this->m_NavAreas.m_Memory.m_pMemory[v11 / 8]->_vptr_CNavPoly + 3))(
        this->m_NavAreas.m_Memory.m_pMemory[v11 / 8],
        &indexRemapTable);
      v11 += 8LL;
    }
    while ( v11 != v12 );
  }
  indexRemapTable.m_Size = 0;
  if ( (indexRemapTable.m_Memory.m_nGrowSize & 0xC0000000) != 0
    || (CUtlMemory<int,int>::Purge(&indexRemapTable.m_Memory), (indexRemapTable.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    validNavAreas.m_Size = 0;
    if ( (validNavAreas.m_Memory.m_nGrowSize & 0xC0000000) != 0 )
      return;
  }
  else
  {
    CUtlMemory<int,int>::Purge(&indexRemapTable.m_Memory);
    validNavAreas.m_Size = 0;
    if ( (validNavAreas.m_Memory.m_nGrowSize & 0xC0000000) != 0 )
      return;
  }
  CUtlMemory<CNavArea *,int>::Purge(&validNavAreas.m_Memory);
  if ( (validNavAreas.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<CNavArea *,int>::Purge(&validNavAreas.m_Memory);
}


// CNavMesh::CreateArea  (line 574, @0x00000000031f9dd0, libserver.so)  // inlines: AddToTail, CopyConstruct<CNavArea*>, Element, GrowMemory, operator[]
// calls: operator new, CNavArea::CNavArea, CNavArea::SetAreaIndex, CUtlMemory<CNavArea*, int>::Grow, operator delete, _Unwind_Resume
CNavArea *__fastcall CNavMesh::CreateArea(CNavMesh *const this)
{
  CNavArea *v2; // rbx
  int m_Size; // r13d
  int v4; // eax
  CNavArea **v5; // rax

  v2 = operator new(0x158u);
  CNavArea::CNavArea(v2, this);
  if ( v2 != 0 )
  {
    m_Size = this->m_NavAreas.m_Size;
    v4 = m_Size;
    if ( m_Size == this->m_NavAreas.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<CNavArea *,int>::Grow(&this->m_NavAreas.m_Memory, 1);
      v4 = this->m_NavAreas.m_Size;
    }
    this->m_NavAreas.m_Size = v4 + 1;
    v5 = &this->m_NavAreas.m_Memory.m_pMemory[m_Size];
    if ( v5 != 0 )
      *v5 = v2;
    CNavArea::SetAreaIndex(v2, m_Size);
  }
  return v2;
}


// CNavMesh::MergeNavMesh  (line 587, @0x00000000031f99b0, libserver.so)  // inlines: Count, EnsureCapacity, GetAdjacentAreas, NavDirOpposite, operator[]
// calls: CUtlMemory<CNavArea*, int>::EnsureCapacity, CNavMesh::OnEditCreateNotify, CNavPoly::SetCorners, CNavArea::ConnectTo
// callers: CNavSplice::ExpandSpliceMesh
void __fastcall CNavMesh::MergeNavMesh(
        CNavMesh *const this,
        const CNavMesh *const rOtherMesh,
        CUtlVector<CNavCrossMeshConnection,CUtlMemory<CNavCrossMeshConnection,int> > *const vecCrossConnections)
{
  CNavMesh *v3; // r13
  CUtlVectorBase<CNavArea*,CUtlMemory<CNavArea*,int> >::CAllocator *p_m_Memory; // rdi
  int m_nAllocationCount; // r14d
  int m_Size; // eax
  unsigned __int64 v8; // rbx
  CNavMesh *v9; // r14
  CNavArea *v10; // r12
  CNavArea *v11; // rax
  CNavPoly *v12; // r13
  __int64 v13; // rbx
  __int64 v14; // r12
  CNavMesh *v15; // r15
  __int64 v16; // rax
  CNavArea **m_pMemory; // rdx
  int *v18; // rax
  int v19; // r14d
  CNavArea *v20; // rbx
  CNavArea *v21; // r13
  int v22; // eax
  CNavArea *v23; // r12
  int i; // r15d
  int v25; // edx
  __int64 v26; // rdx
  CUtlVectorUltraConservative<CNavConnect,CUtlVectorUltraConservativeAllocator>::Data_t *m_pData; // rax
  __int64 v28; // [rsp+8h] [rbp-68h]
  __int64 v29; // [rsp+10h] [rbp-60h]
  unsigned __int64 v32; // [rsp+28h] [rbp-48h]
  int rAreaOnThis; // [rsp+30h] [rbp-40h]
  int rAreaOnThisa; // [rsp+30h] [rbp-40h]
  CNavArea *rAreaOnThisb; // [rsp+30h] [rbp-40h]
  NavEdgeIndex nEdge[8]; // [rsp+38h] [rbp-38h]
  NavEdgeIndex nEdgea[8]; // [rsp+38h] [rbp-38h]

  v3 = this;
  p_m_Memory = &this->m_NavAreas.m_Memory;
  m_nAllocationCount = p_m_Memory[-1].m_nAllocationCount;
  CUtlMemory<CNavArea *,int>::EnsureCapacity(p_m_Memory, m_nAllocationCount + rOtherMesh->m_NavAreas.m_Size);
  m_Size = rOtherMesh->m_NavAreas.m_Size;
  if ( m_Size != 0 )
  {
    rAreaOnThis = m_nAllocationCount;
    v8 = 0;
    v9 = v3;
    *nEdge = 8LL * (m_Size - 1) + 8;
    while ( 1 )
    {
      v10 = rOtherMesh->m_NavAreas.m_Memory.m_pMemory[v8 / 8];
      v11 = (*(v9->_vptr_CNavMesh + 4))(v9);
      v12 = v11;
      if ( v11 == 0 )
        break;
      v8 += 8LL;
      CNavMesh::OnEditCreateNotify(v9, v11);
      CNavPoly::SetCorners(v12, v10);
      (*(v9->_vptr_CNavMesh + 28))(v9, v12);
      (*(v12->_vptr_CNavPoly + 27))(v12, v10, 0);
      if ( v8 == *nEdge )
      {
        v3 = v9;
        m_nAllocationCount = rAreaOnThis;
        v22 = rOtherMesh->m_NavAreas.m_Size;
        if ( v22 != 0 )
        {
          v32 = 0;
          v29 = 8LL * (v22 - 1) + 8;
          v28 = 8LL * rAreaOnThis;
          do
          {
            v13 = 0;
            v23 = rOtherMesh->m_NavAreas.m_Memory.m_pMemory[v32 / 8];
            rAreaOnThisb = *(&v3->m_NavAreas.m_Memory.m_pMemory[v32 / 8] + v28);
            do
            {
              for ( i = 0; ; ++i )
              {
                m_pData = v23->m_connect[v13].m_pData;
                v25 = m_pData != 0 ? m_pData->m_Size : 0;
                if ( i >= v25 )
                  break;
                v26 = i;
                CNavArea::ConnectTo(
                  rAreaOnThisb,
                  *(&v3->m_NavAreas.m_Memory.m_pMemory[m_nAllocationCount] + m_pData->m_Elements[v26].m_pArea->m_nIndex),
                  v13,
                  -1,
                  1);
              }
              ++v13;
            }
            while ( v13 != 4 );
            v32 += 8LL;
          }
          while ( v32 != v29 );
        }
        goto LABEL_8;
      }
    }
  }
  else
  {
LABEL_8:
    if ( vecCrossConnections->m_Size != 0 )
    {
      v14 = 0;
      rAreaOnThisa = m_nAllocationCount;
      v15 = v3;
      *nEdgea = 4 * (3LL * (vecCrossConnections->m_Size - 1) + 3);
      do
      {
        v16 = v14;
        m_pMemory = v15->m_NavAreas.m_Memory.m_pMemory;
        v14 += 12;
        v18 = (&vecCrossConnections->m_Memory.m_pMemory->m_nIndexOnMeshA + v16);
        v19 = *(v18 + 8);
        v20 = m_pMemory[*v18];
        v21 = *(&m_pMemory[v18[1]] + rAreaOnThisa);
        CNavArea::ConnectTo(v20, v21, *(v18 + 8), -1, 1);
        CNavArea::ConnectTo(v21, v20, (v19 + 2) % 4, -1, 1);
      }
      while ( v14 != *nEdgea );
    }
  }
}


// CNavMesh::ComputeBounds  (line 656, @0x00000000031f3130, libserver.so)  // inlines: Encompass, GetExtent, Init, operator=
// callers: CNavMesh::RebuildGrid, CNavGenOutput::ComputeBounds
void __fastcall CNavMesh::ComputeBounds(const CNavMesh *const this, Extent *pBounds)
{
  int m_Size; // eax
  unsigned __int64 v3; // rcx
  Vector *p_hi; // rdx
  __int64 v5; // r10
  CNavArea *v6; // rax
  vec_t y; // xmm2_4
  vec_t z; // xmm0_4
  vec_t v9; // xmm2_4
  float x; // xmm1_4
  float v11; // xmm0_4
  __int64 v12; // rax
  float v13; // xmm2_4
  __int64 v14; // rax
  Extent areaExtent; // [rsp+0h] [rbp-28h] BYREF

  pBounds->lo.x = 3.4028235e38;
  pBounds->lo.y = 3.4028235e38;
  pBounds->lo.z = 3.4028235e38;
  pBounds->hi.x = -3.4028235e38;
  pBounds->hi.y = -3.4028235e38;
  pBounds->hi.z = -3.4028235e38;
  m_Size = this->m_NavAreas.m_Size;
  if ( m_Size != 0 )
  {
    v3 = 0;
    p_hi = &pBounds->hi;
    v5 = 8LL * (m_Size - 1) + 8;
    do
    {
      v6 = this->m_NavAreas.m_Memory.m_pMemory[v3 / 8];
      y = v6->m_Extent.hi.y;
      areaExtent.lo.y = v6->m_Extent.lo.y;
      z = v6->m_Extent.lo.z;
      areaExtent.hi.y = y;
      v9 = v6->m_Extent.hi.z;
      x = v6->m_Extent.lo.x;
      areaExtent.lo.z = z;
      v11 = v6->m_Extent.hi.x;
      v12 = 0;
      areaExtent.hi.z = v9;
      v13 = pBounds->lo.x;
      areaExtent.lo.x = x;
      areaExtent.hi.x = v11;
      if ( v13 <= x )
        goto LABEL_5;
LABEL_4:
      *(&pBounds->lo.x + v12) = x;
      while ( 1 )
      {
LABEL_5:
        if ( x > *(&p_hi->x + v12) )
          *(&p_hi->x + v12) = x;
        v12 += 4;
        if ( v12 == 12 )
          break;
        x = *(&areaExtent.lo.x + v12);
        if ( *(&pBounds->lo.x + v12) > x )
          goto LABEL_4;
      }
      v14 = 0;
      if ( pBounds->lo.x <= v11 )
        goto LABEL_12;
LABEL_11:
      *(&pBounds->lo.x + v14) = v11;
      while ( 1 )
      {
LABEL_12:
        if ( v11 > *(&p_hi->x + v14) )
          *(&p_hi->x + v14) = v11;
        v14 += 4;
        if ( v14 == 12 )
          break;
        v11 = *(&areaExtent.hi.x + v14);
        if ( *(&pBounds->lo.x + v14) > v11 )
          goto LABEL_11;
      }
      v3 += 8LL;
    }
    while ( v3 != v5 );
  }
}


// CNavMesh::AllocateGrid  (line 669, @0x00000000031fbd70, libserver.so)
// calls: CUtlVectorBase<CUtlVector<CNavArea*, CUtlMemory<CNavArea*, int> >, CUtlMemory<CUtlVector<CNavArea*, CUtlMemory<CNavArea*, int> >, int> >::RemoveAll, CUtlVectorBase<CUtlVector<CNavArea*, CUtlMemory<CNavArea*, int> >, CUtlMemory<CUtlVector<CNavArea*, CUtlMemory<CNavArea*, int> >, int> >::SetCount
// callers: CNavGenerator::PostCreateNavAreas, CNavMesh::LoadNavMesh, CNavMesh::RebuildGrid, CNavMesh::AddNavArea, CNavMesh::BuildFromNavGen
void __fastcall CNavMesh::AllocateGrid(CNavMesh *const this, float a2, float minX, float maxX, float minY, float maxY)
{
  CUtlVector<CUtlVector<CNavArea*,CUtlMemory<CNavArea*,int> >,CUtlMemory<CUtlVector<CNavArea*,CUtlMemory<CNavArea*,int> >,int> > *p_m_Grid; // r12
  float m_flGridCellSize; // xmm4_4
  int v9; // esi
  int v10; // eax

  p_m_Grid = &this->m_Grid;
  CUtlVectorBase<CUtlVector<CNavArea *,CUtlMemory<CNavArea *,int>>,CUtlMemory<CUtlVector<CNavArea *,CUtlMemory<CNavArea *,int>>,int>>::RemoveAll(&this->m_Grid);
  this->m_flGridMinX = a2;
  this->m_flGridMinY = maxX;
  m_flGridCellSize = this->m_flGridCellSize;
  v9 = ((minX - a2) / m_flGridCellSize) + 1;
  this->m_nGridSizeX = v9;
  v10 = ((minY - maxX) / m_flGridCellSize) + 1;
  this->m_nGridSizeY = v10;
  CUtlVectorBase<CUtlVector<CNavArea *,CUtlMemory<CNavArea *,int>>,CUtlMemory<CUtlVector<CNavArea *,CUtlMemory<CNavArea *,int>>,int>>::SetCount(
    p_m_Grid,
    v10 * v9);
}


// CNavMesh::RebuildGrid  (line 684, @0x00000000031fbe10, libserver.so)  // inlines: Extent, Init
// calls: CNavMesh::ComputeBounds, CNavMesh::AllocateGrid
// callers: CNavGenerator::PostCreateNavAreas
void __fastcall CNavMesh::RebuildGrid(CNavMesh *const this)
{
  int m_Size; // eax
  unsigned __int64 v3; // r12
  __int64 v4; // r13
  float v5; // xmm4_4
  int v6; // eax
  unsigned __int64 v7; // r12
  __int64 v8; // r13
  CNavArea *v9; // rsi
  Extent meshExtent; // [rsp+0h] [rbp-40h] BYREF

  m_Size = this->m_NavAreas.m_Size;
  if ( m_Size != 0 )
  {
    v3 = 0;
    v4 = 8LL * (m_Size - 1) + 8;
    do
    {
      if ( this->m_NavAreas.m_Memory.m_pMemory[v3 / 8] != 0 )
        (*(this->_vptr_CNavMesh + 29))(this);
      v3 += 8LL;
    }
    while ( v3 != v4 );
    if ( this->m_NavAreas.m_Size > 0 )
    {
      meshExtent.lo.x = 3.4028235e38;
      meshExtent.lo.y = 3.4028235e38;
      meshExtent.lo.z = 3.4028235e38;
      meshExtent.hi.x = -3.4028235e38;
      meshExtent.hi.y = -3.4028235e38;
      meshExtent.hi.z = -3.4028235e38;
      CNavMesh::ComputeBounds(this, &meshExtent);
      CNavMesh::AllocateGrid(this, meshExtent.lo.x, meshExtent.hi.x, meshExtent.lo.y, meshExtent.hi.y, v5);
      v6 = this->m_NavAreas.m_Size;
      if ( v6 != 0 )
      {
        v7 = 0;
        v8 = 8LL * (v6 - 1) + 8;
        do
        {
          v9 = this->m_NavAreas.m_Memory.m_pMemory[v7 / 8];
          v7 += 8LL;
          v9->m_bIsInGrid = 0;
          (*(this->_vptr_CNavMesh + 28))(this);
        }
        while ( v7 != v8 );
      }
    }
  }
}


// CNavMesh::AddNavArea  (line 715, @0x00000000031fbf10, libserver.so)  // inlines: AddToTail, Clamp<int>, ComputeHashKey, CopyConstruct<CNavArea*>, Element, GetExtent, GetGridCellExtent, GrowMemory, Init, WorldToGridX, WorldToGridY, operator=, operator[]
// calls: CNavPoly::IsOverlappingExtent, CUtlMemory<CNavArea*, int>::Grow, Warning, CNavMesh::AllocateGrid
// strings: "CNavMesh::AddNavArea - Adding nav area to mesh with no grid extents defined."
void __fastcall CNavMesh::AddNavArea(CNavMesh *const this, CNavArea *const rArea)
{
  float m_flGridMinX; // xmm5_4
  float m_flGridCellSize; // xmm1_4
  float y; // xmm6_4
  int m_nGridSizeX; // edx
  int v8; // eax
  float m_flGridMinY; // xmm4_4
  int m_nGridSizeY; // eax
  int v11; // r14d
  int v12; // r12d
  int v13; // edi
  int v14; // edx
  CNavMesh *v15; // rax
  int v16; // r15d
  CNavMesh *v17; // r14
  int i; // r13d
  int v19; // esi
  int v20; // edx
  float v21; // xmm2_4
  int v22; // ecx
  int v23; // eax
  float v24; // xmm0_4
  float v25; // xmm1_4
  vec_t v26; // xmm2_4
  CUtlVector<CNavArea*,CUtlMemory<CNavArea*,int> > *v27; // rax
  __int64 m_Size; // rdx
  int v29; // ecx
  CNavArea **v30; // rax
  int (***v31)(...); // rax
  CNavArea *v32; // rdx
  float v33; // xmm4_4
  int v34; // [rsp+4h] [rbp-6Ch]
  CUtlVector<CNavArea*,CUtlMemory<CNavArea*,int> > *v35; // [rsp+8h] [rbp-68h]
  int x; // [rsp+10h] [rbp-60h]
  int v37; // [rsp+14h] [rbp-5Ch]
  Extent cellExtent; // [rsp+20h] [rbp-50h] BYREF

  (*(rArea->_vptr_CNavPoly + 4))(rArea);
  if ( this->m_Grid.m_Size == 0 )
  {
    Warning("CNavMesh::AddNavArea - Adding nav area to mesh with no grid extents defined.");
    CNavMesh::AllocateGrid(this, 0.0, 0.0, 0.0, 0.0, v33);
  }
  m_flGridMinX = this->m_flGridMinX;
  m_flGridCellSize = this->m_flGridCellSize;
  m_nGridSizeX = this->m_nGridSizeX;
  if ( ((rArea->m_Extent.lo.x - m_flGridMinX) / m_flGridCellSize) < 0 )
  {
    x = 0;
  }
  else
  {
    v8 = m_nGridSizeX - 1;
    if ( m_nGridSizeX > ((rArea->m_Extent.lo.x - m_flGridMinX) / m_flGridCellSize) )
      v8 = ((rArea->m_Extent.lo.x - m_flGridMinX) / m_flGridCellSize);
    x = v8;
  }
  m_flGridMinY = this->m_flGridMinY;
  m_nGridSizeY = this->m_nGridSizeY;
  v11 = ((rArea->m_Extent.lo.y - m_flGridMinY) / m_flGridCellSize);
  if ( v11 < 0 )
  {
    v11 = 0;
  }
  else if ( m_nGridSizeY <= v11 )
  {
    v11 = m_nGridSizeY - 1;
  }
  v12 = ((rArea->m_Extent.hi.x - m_flGridMinX) / m_flGridCellSize);
  if ( v12 < 0 )
  {
    v12 = 0;
  }
  else if ( m_nGridSizeX <= v12 )
  {
    v12 = m_nGridSizeX - 1;
  }
  y = rArea->m_Extent.hi.y;
  v13 = ((y - m_flGridMinY) / m_flGridCellSize);
  if ( v13 < 0 )
  {
    v37 = 0;
  }
  else
  {
    v14 = m_nGridSizeY - 1;
    if ( m_nGridSizeY > v13 )
      v14 = ((y - m_flGridMinY) / m_flGridCellSize);
    v37 = v14;
  }
  if ( v11 <= v37 )
  {
    v15 = this;
    v16 = v11;
    v17 = v15;
    do
    {
      for ( i = x; i <= v12; *v30 = rArea )
      {
        while ( 1 )
        {
          v19 = v17->m_nGridSizeX - 1;
          if ( i < 0 )
          {
            v21 = 0.0;
            v20 = 0;
          }
          else
          {
            v20 = v17->m_nGridSizeX - 1;
            if ( i <= v19 )
              v20 = i;
            v21 = v20;
          }
          v22 = v17->m_nGridSizeY - 1;
          if ( v16 < 0 )
          {
            v24 = 0.0;
            v23 = 0;
          }
          else
          {
            v23 = v17->m_nGridSizeY - 1;
            if ( v16 <= v22 )
              v23 = v16;
            v24 = v23;
          }
          v25 = v17->m_flGridCellSize;
          cellExtent.lo.z = -3.4028235e38;
          cellExtent.hi.z = 3.4028235e38;
          v26 = (v21 * v25) + v17->m_flGridMinX;
          cellExtent.lo.y = (v24 * v25) + v17->m_flGridMinY;
          cellExtent.lo.x = v26;
          cellExtent.hi.y = cellExtent.lo.y + v25;
          cellExtent.hi.x = v26 + v25;
          if ( v20 == 0 )
            cellExtent.lo.x = -3.4028235e38;
          if ( v19 == v20 )
            cellExtent.hi.x = 3.4028235e38;
          if ( v23 == 0 )
            cellExtent.lo.y = -3.4028235e38;
          if ( v22 == v23 )
            cellExtent.hi.y = 3.4028235e38;
          if ( CNavPoly::IsOverlappingExtent(rArea, &cellExtent) )
          {
            v27 = &v17->m_Grid.m_Memory.m_pMemory[i + v16 * v17->m_nGridSizeX];
            m_Size = v27->m_Size;
            v29 = v27->m_Size;
            if ( m_Size == v27->m_Memory.m_nAllocationCount )
            {
              v34 = v27->m_Size;
              v35 = &v17->m_Grid.m_Memory.m_pMemory[i + v16 * v17->m_nGridSizeX];
              CUtlMemory<CNavArea *,int>::Grow(&v27->m_Memory, 1);
              v27 = v35;
              m_Size = v34;
              v29 = v35->m_Size;
            }
            v27->m_Size = v29 + 1;
            v30 = &v27->m_Memory.m_pMemory[m_Size];
            if ( v30 != 0 )
              break;
          }
          if ( ++i > v12 )
            goto LABEL_43;
        }
        ++i;
      }
LABEL_43:
      ++v16;
    }
    while ( v16 <= v37 );
    this = v17;
  }
  v31 = &this->_vptr_CNavMesh + (rArea->m_AreaId & 0x3FF);
  v32 = v31[26];
  if ( v32 != 0 )
  {
    rArea->m_pNextHash = v32;
    v31[26] = rArea;
  }
  else
  {
    v31[26] = rArea;
    rArea->m_pNextHash = 0;
  }
  rArea->m_bIsInGrid = 1;
  ++this->m_nGridAreaCount;
}


// CNavMesh::RemoveNavArea  (line 780, @0x00000000031f8eb0, libserver.so)  // inlines: Clamp<int>, ComputeHashKey, GetExtent, GetGridCellExtent, Init, WorldToGridX, WorldToGridY, operator=, operator[]
// calls: CNavPoly::IsOverlappingExtent, CUtlVectorBase<CNavArea*, CUtlMemory<CNavArea*, int> >::FindAndRemove
void __fastcall CNavMesh::RemoveNavArea(CNavMesh *const this, CNavArea *const rArea)
{
  float m_flGridMinX; // xmm5_4
  float m_flGridCellSize; // xmm1_4
  float y; // xmm6_4
  int m_nGridSizeX; // ecx
  int v8; // eax
  float m_flGridMinY; // xmm4_4
  int m_nGridSizeY; // eax
  int v11; // ebx
  int v12; // r13d
  int v13; // edx
  int v14; // ecx
  int i; // r13d
  int v16; // eax
  int v17; // eax
  int v18; // r8d
  int v19; // esi
  float v20; // xmm2_4
  int v21; // edi
  int v22; // eax
  float v23; // xmm0_4
  float v24; // xmm1_4
  vec_t v25; // xmm2_4
  INavObstructionManager *m_pObstructionManager; // rdi
  int (***v27)(...); // rax
  CNavArea *v28; // rcx
  CNavArea *m_pNextHash; // rax
  int x; // [rsp+Ch] [rbp-74h]
  int v31; // [rsp+18h] [rbp-68h]
  int v32; // [rsp+1Ch] [rbp-64h]
  CNavArea *src; // [rsp+28h] [rbp-58h] BYREF
  Extent cellExtent; // [rsp+30h] [rbp-50h] BYREF

  if ( rArea->m_bIsInGrid )
  {
    m_flGridMinX = this->m_flGridMinX;
    m_flGridCellSize = this->m_flGridCellSize;
    y = rArea->m_Extent.hi.y;
    m_nGridSizeX = this->m_nGridSizeX;
    if ( ((rArea->m_Extent.lo.x - m_flGridMinX) / m_flGridCellSize) < 0 )
    {
      x = 0;
    }
    else
    {
      v8 = m_nGridSizeX - 1;
      if ( m_nGridSizeX > ((rArea->m_Extent.lo.x - m_flGridMinX) / m_flGridCellSize) )
        v8 = ((rArea->m_Extent.lo.x - m_flGridMinX) / m_flGridCellSize);
      x = v8;
    }
    m_flGridMinY = this->m_flGridMinY;
    m_nGridSizeY = this->m_nGridSizeY;
    v11 = ((rArea->m_Extent.lo.y - m_flGridMinY) / m_flGridCellSize);
    if ( v11 < 0 )
    {
      v11 = 0;
    }
    else if ( m_nGridSizeY <= v11 )
    {
      v11 = m_nGridSizeY - 1;
    }
    v12 = ((rArea->m_Extent.hi.x - m_flGridMinX) / m_flGridCellSize);
    if ( v12 < 0 )
    {
      v12 = 0;
    }
    else if ( m_nGridSizeX <= v12 )
    {
      v12 = m_nGridSizeX - 1;
    }
    v13 = ((y - m_flGridMinY) / m_flGridCellSize);
    if ( v13 < 0 )
    {
      v31 = 0;
    }
    else
    {
      v14 = m_nGridSizeY - 1;
      if ( m_nGridSizeY > v13 )
        v14 = ((y - m_flGridMinY) / m_flGridCellSize);
      v31 = v14;
    }
    if ( v11 <= v31 )
    {
      v32 = v12;
      do
      {
        for ( i = x; i <= v32; ++i )
        {
          v18 = this->m_nGridSizeX - 1;
          if ( i < 0 )
          {
            v20 = 0.0;
            v19 = 0;
          }
          else
          {
            v19 = this->m_nGridSizeX - 1;
            if ( i <= v18 )
              v19 = i;
            v20 = v19;
          }
          v21 = this->m_nGridSizeY - 1;
          if ( v11 < 0 )
          {
            v23 = 0.0;
            v22 = 0;
          }
          else
          {
            v22 = this->m_nGridSizeY - 1;
            if ( v11 <= v21 )
              v22 = v11;
            v23 = v22;
          }
          v24 = this->m_flGridCellSize;
          cellExtent.lo.z = -3.4028235e38;
          cellExtent.hi.z = 3.4028235e38;
          v25 = (v20 * v24) + this->m_flGridMinX;
          cellExtent.lo.y = (v23 * v24) + this->m_flGridMinY;
          cellExtent.lo.x = v25;
          cellExtent.hi.y = cellExtent.lo.y + v24;
          cellExtent.hi.x = v25 + v24;
          if ( v19 == 0 )
            cellExtent.lo.x = -3.4028235e38;
          if ( v18 == v19 )
            cellExtent.hi.x = 3.4028235e38;
          if ( v22 == 0 )
            cellExtent.lo.y = -3.4028235e38;
          if ( v21 == v22 )
            cellExtent.hi.y = 3.4028235e38;
          CNavPoly::IsOverlappingExtent(rArea, &cellExtent);
          v16 = this->m_nGridSizeX;
          src = rArea;
          v17 = i + v11 * v16;
          CUtlVectorBase<CNavArea *,CUtlMemory<CNavArea *,int>>::FindAndRemove(
            &this->m_Grid.m_Memory.m_pMemory[v17],
            &src);
        }
        ++v11;
      }
      while ( v11 <= v31 );
    }
    v27 = &this->_vptr_CNavMesh + (rArea->m_AreaId & 0x3FF);
    v28 = v27[26];
    if ( v28 == rArea )
    {
      v27[26] = rArea->m_pNextHash;
    }
    else if ( v28 != 0 )
    {
      m_pNextHash = v28->m_pNextHash;
      if ( m_pNextHash == rArea )
      {
        m_pNextHash = v28;
LABEL_53:
        m_pNextHash->m_pNextHash = rArea->m_pNextHash;
      }
      else
      {
        while ( m_pNextHash != 0 )
        {
          if ( m_pNextHash->m_pNextHash == rArea )
            goto LABEL_53;
          m_pNextHash = m_pNextHash->m_pNextHash;
        }
      }
    }
    rArea->m_bIsInGrid = 0;
    --this->m_nGridAreaCount;
  }
  m_pObstructionManager = this->m_pObstructionManager;
  if ( m_pObstructionManager != 0 )
    (*(m_pObstructionManager->_vptr_INavObstructionManager + 7))(m_pObstructionManager, rArea);
}


// CNavMesh::GetSnapGridSize  (line 846, @0x00000000031f3260, libserver.so)  // inlines: GetInt, IsGenerating
// calls: __cxa_guard_acquire, ConVarRef::ConVarRef, __cxa_guard_release, __cxa_guard_abort, _Unwind_Resume
// callers: CNavMesh::SnapToGrid
// strings: "nav_snap_to_grid"
// globals: `guard variable for'CNavMesh::GetSnapGridSize(bool)::nav_snap_to_grid, CNavMesh::GetSnapGridSize(bool)::nav_snap_to_grid
int __fastcall CNavMesh::GetSnapGridSize(const CNavMesh *const this, bool bForceGrid)
{
  CNavGeneratorBase *m_pGenerator; // rax
  int m_nValue; // edx
  int result; // eax

  m_pGenerator = this->m_pGenerator;
  if ( m_pGenerator == 0 || m_pGenerator->m_generationMode == CNavGeneratorBase::GenerationModeType::GENERATE_NONE )
  {
    if ( `guard variable for'CNavMesh::GetSnapGridSize(bool)::nav_snap_to_grid == 0
      && __cxa_guard_acquire(&`guard variable for'CNavMesh::GetSnapGridSize(bool)::nav_snap_to_grid) != 0 )
    {
      ConVarRef::ConVarRef(&CNavMesh::GetSnapGridSize(bool)const::nav_snap_to_grid, "nav_snap_to_grid");
      __cxa_guard_release(&`guard variable for'CNavMesh::GetSnapGridSize(bool)::nav_snap_to_grid);
    }
    m_nValue = CNavMesh::GetSnapGridSize(bool)const::nav_snap_to_grid.m_pConVarState->m_Value.m_nValue;
    if ( !bForceGrid )
    {
      if ( m_nValue == 0 )
        return 0;
      goto LABEL_12;
    }
    if ( m_nValue != 0 )
    {
LABEL_12:
      result = 5;
      if ( m_nValue != 2 )
      {
        if ( m_nValue == 3 )
          return 1;
        else
          return CNavGeneratorBase::sm_flGenerationStepSize;
      }
      return result;
    }
  }
  return CNavGeneratorBase::sm_flGenerationStepSize;
}


// CNavMesh::SnapToGrid  (line 885, @0x00000000031f3350, libserver.so)  // inlines: RoundToUnits
// calls: CNavMesh::GetSnapGridSize
// callers: CNavEditor::UpdateSelection
Vector __fastcall CNavMesh::SnapToGrid(
        const CNavMesh *const this,
        const Vector *const vIn,
        bool bSnapX,
        bool bSnapY,
        bool bForceGrid)
{
  int SnapGridSize; // eax
  float y; // xmm0_4
  float x; // xmm2_4
  float v12; // xmm3_4
  float v13; // xmm4_4
  float v14; // xmm0_4
  float v15; // xmm3_4
  float v16; // xmm4_4
  Vector v18; // 0:^4.12
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  v18 = *vIn;
  SnapGridSize = CNavMesh::GetSnapGridSize(this, bForceGrid);
  result.z = v18.z;
  y = v18.y;
  x = v18.x;
  if ( SnapGridSize != 0 )
  {
    if ( bSnapX )
    {
      v12 = SnapGridSize;
      if ( vIn->x < 0.0 )
        v13 = -v12 * 0.5;
      else
        v13 = 0.5 * v12;
      x = ((vIn->x + v13) / v12) * v12;
    }
    if ( bSnapY )
    {
      v14 = vIn->y;
      v15 = SnapGridSize;
      if ( v14 < 0.0 )
        v16 = -v15 * 0.5;
      else
        v16 = 0.5 * v15;
      y = ((v14 + v16) / v15) * v15;
    }
  }
  *&result.x = __PAIR64__(LODWORD(y), LODWORD(x));
  return result;
}


// CNavMesh::SnapToGrid  (line 908, @0x00000000031f3460, libserver.so)  // inlines: RoundToUnits
// calls: CNavMesh::GetSnapGridSize
// callers: splitX, splitY, Subdivider::SubdivideY, Subdivider::SubdivideX, nav_subdivide, CNavGeneratorAAQuad::LadderEndSearch, CNavGeneratorAAQuad::GenerationSampleStep, CNavEditor::CommandNavMarkWalkable, CNavGenerator::AddWalkableSeedsFromMarkup, CNavGenerator::AddWalkableSeeds, CNavGenerator::AddWalkableSeedsForMarkup, CNavGeneratorAAQuad::SimplifySelectedAreas (13 total)
float __fastcall CNavMesh::SnapToGrid(const CNavMesh *const this, float a2, float x, bool bForceGrid)
{
  int SnapGridSize; // eax
  float result; // xmm0_4
  float v6; // xmm1_4
  float v7; // xmm2_4

  SnapGridSize = CNavMesh::GetSnapGridSize(this, bForceGrid);
  result = a2;
  if ( SnapGridSize != 0 )
  {
    v6 = SnapGridSize;
    if ( a2 < 0.0 )
      v7 = -v6 * 0.5;
    else
      v7 = 0.5 * v6;
    return ((a2 + v7) / v6) * v6;
  }
  return result;
}


// CNavMesh::OnServerActivate  (line 917, @0x00000000031f2950, libserver.so)
void __fastcall CNavMesh::OnServerActivate(CNavMesh *const this)
{
  int m_Size; // eax
  unsigned __int64 v3; // rbx
  __int64 v4; // r12
  CNavArea *v5; // rdi

  m_Size = this->m_NavAreas.m_Size;
  if ( m_Size != 0 )
  {
    v3 = 0;
    v4 = 8LL * (m_Size - 1) + 8;
    do
    {
      v5 = this->m_NavAreas.m_Memory.m_pMemory[v3 / 8];
      v3 += 8LL;
      (*(v5->_vptr_CNavPoly + 14))(v5);
    }
    while ( v3 != v4 );
  }
}


// CNavMesh::OnRoundRestart  (line 928, @0x00000000031f2720, libserver.so)
void __fastcall CNavMesh::OnRoundRestart(CNavMesh *const this)
{
  INavEntityInterface *m_pEntityInterface; // rdi
  INavObstructionManager *m_pObstructionManager; // rdi

  m_pEntityInterface = this->m_pEntityInterface;
  if ( m_pEntityInterface != 0 )
    (*(m_pEntityInterface->_vptr_INavEntityInterface + 4))(m_pEntityInterface, this);
  m_pObstructionManager = this->m_pObstructionManager;
  if ( m_pObstructionManager != 0 )
    (*(m_pObstructionManager->_vptr_INavObstructionManager + 4))(m_pObstructionManager);
}


// CNavMesh::GetNavArea  (line 952, @0x00000000031f34d0, libserver.so)  // inlines: Add, CMicroProfilerGuard, CMicroProfilerSample, CVProfScope, CanSupportHull, EnterScope, ExitScope, GetElapsed, GetTimebaseRegister, GetZ, InTargetThread, IsEnabled, PLAT_CPU_TIME, WorldToGridX, WorldToGridY, end, operator[], ~CMicroProfilerGuard, ~CVProfScope
// calls: CNavPoly::IsOverlappingPointForHull, CNavPoly::GetZ, CNavArea::IsBlocked, ThreadGetCurrentId, CVProfNode::ExitScope(void), CVProfNode::GetSubNode(char const*,int,char const*,int), CVProfNode::EnterScope(void), _Unwind_Resume, std::terminate(void), CVProfile::ExitScope
// callers: CBaseCombatCharacter::UpdateLastKnownArea, IsNodeOverlapped, CNavGeneratorAAQuad::FixCornerOnCornerAreas, CNavMesh::StitchAreaIntoMesh<CNavGeneratorAAQuad::StitchGeneratedAreas()::IncrementallyGeneratedAreas>, CNavGeneratorAAQuad::ConnectGeneratedAreas, CNavGeneratorAAQuad::StitchGeneratedAreas, CNavEditor::CommandAutoBuildOffGridAreas, CNavEditor::UpdateSelection, FindFirstAreaInDirection, CNavMesh::TestRayToMesh, CNavMesh::StitchAreaIntoMesh<CNavMesh::StitchAreaSet(CUtlVector<CNavArea*>*)::CAreaSet>, CNavMesh::StitchAreaSet
// strings: "CNavMesh::GetNavArea", "NextBot"
CNavArea *__fastcall CNavMesh::GetNavArea(
        const CNavMesh *const this,
        const Vector2D *vPos,
        NavHull_t navHull,
        int32 nFlags,
        float *pZOut,
        float flBeneathLimit,
        __m128 flAboveLimit)
{
  char v8; // r12
  const CNavMesh *v9; // rbx
  int m_enabled; // eax
  float m_flGridCellSize; // xmm1_4
  int m_nGridSizeX; // edx
  int v13; // eax
  int v14; // esi
  int v15; // ecx
  CUtlVector<CNavArea*,CUtlMemory<CNavArea*,int> > *v16; // rax
  const CNavPoly *const *m_pMemory; // rbx
  const CNavPoly *const *v18; // r13
  const CNavArea *v19; // r12
  __m128 v20; // xmm0
  __m128 x_low; // xmm1
  float v22; // xmm2_4
  __m128 v23; // xmm1
  __m128 v24; // xmm3
  CNavArea *v25; // rbx
  unsigned __int64 v27; // r12
  ThreadId_t v28; // r13
  uint64 v29; // rcx
  unsigned __int64 v30; // r13
  ThreadId_t m_TargetThreadId; // r14
  uint64 m_numTimeBaseTicks; // rcx
  CVProfNode *m_pParent; // rax
  CVProfNode *m_pCurNode; // rax
  CVProfile::CBudgetGroup *v35; // rax
  NavHull_t v36; // [rsp+0h] [rbp-70h]
  float flBeneathLimita; // [rsp+Ch] [rbp-64h]
  bool VProf_954; // [rsp+1Bh] [rbp-55h]
  float flUseZ; // [rsp+1Ch] [rbp-54h]
  CNavArea *pUseArea; // [rsp+20h] [rbp-50h]
  float flAboveLimita; // [rsp+28h] [rbp-48h]
  int v43; // [rsp+2Ch] [rbp-44h]
  unsigned __int8 navHulla; // [rsp+30h] [rbp-40h]

  v8 = nFlags;
  v9 = this;
  flAboveLimita = flAboveLimit.m128_f32[0];
  navHulla = navHull.m_hullCategory;
  m_enabled = g_VProfCurrentProfile.m_enabled;
  VProf_954 = m_enabled != 0;
  if ( m_enabled != 0 )
  {
    v30 = __rdtsc();
    m_TargetThreadId = g_VProfCurrentProfile.m_TargetThreadId;
    if ( m_TargetThreadId == ThreadGetCurrentId(this) )
    {
      m_pCurNode = g_VProfCurrentProfile.m_pCurNode;
      if ( m_pCurNode->m_pszName != "CNavMesh::GetNavArea" )
      {
        m_pCurNode = CVProfNode::GetSubNode(g_VProfCurrentProfile.m_pCurNode, "CNavMesh::GetNavArea", 0, "NextBot", 4);
        g_VProfCurrentProfile.m_pCurNode = m_pCurNode;
      }
      v35 = &g_VProfCurrentProfile.m_pBudgetGroups[m_pCurNode->m_BudgetGroupID];
      v35->m_BudgetFlags |= 4u;
      CVProfNode::EnterScope(g_VProfCurrentProfile.m_pCurNode);
      g_VProfCurrentProfile.m_fAtRoot = 0;
    }
    m_numTimeBaseTicks = g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks;
    ++g_VProfCurrentProfile.m_ScopeProfiler.m_numCalls;
    g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks = m_numTimeBaseTicks - v30 + __rdtsc();
    if ( v9->m_Grid.m_Size != 0 )
      goto LABEL_3;
LABEL_33:
    v25 = 0;
    goto LABEL_22;
  }
  if ( this->m_Grid.m_Size == 0 )
    goto LABEL_33;
LABEL_3:
  m_flGridCellSize = v9->m_flGridCellSize;
  m_nGridSizeX = v9->m_nGridSizeX;
  v13 = ((vPos->x - v9->m_flGridMinX) / m_flGridCellSize);
  if ( v13 < 0 )
  {
    v13 = 0;
  }
  else if ( m_nGridSizeX <= v13 )
  {
    v13 = m_nGridSizeX - 1;
  }
  v14 = 0;
  this = v9->m_nGridSizeY;
  v15 = ((vPos->y - v9->m_flGridMinY) / m_flGridCellSize);
  if ( v15 >= 0 )
  {
    if ( this > v15 )
      v14 = v15 * m_nGridSizeX;
    else
      v14 = m_nGridSizeX * (this - 1);
  }
  v43 = v8 & 2;
  v16 = &v9->m_Grid.m_Memory.m_pMemory[v14 + v13];
  m_pMemory = v16->m_Memory.m_pMemory;
  v18 = &m_pMemory[v16->m_Size];
  if ( m_pMemory == v18 )
  {
    pUseArea = 0;
    flUseZ = -100000000.0;
  }
  else
  {
    pUseArea = 0;
    flUseZ = -100000000.0;
    do
    {
      while ( 1 )
      {
        v19 = *m_pMemory;
        if ( (navHulla & (*m_pMemory)->m_nHullSupport) != 0
          && CNavPoly::IsOverlappingPointForHull(*m_pMemory, vPos, v36, flAboveLimit.m128_f32[0])
          && (v43 != 0 || !CNavArea::IsBlocked(v19, -1, 0)) )
        {
          v20.m128_f32[0] = CNavPoly::GetZ(v19, vPos->y, flAboveLimit.m128_f32[0]);
          x_low = LODWORD(vPos[1].x);
          flAboveLimit.m128_f32[0] = flAboveLimita + x_low.m128_f32[0];
          if ( v20.m128_f32[0] <= (flAboveLimita + x_low.m128_f32[0]) )
          {
            flAboveLimit.m128_f32[0] = x_low.m128_f32[0] - flBeneathLimita;
            if ( (x_low.m128_f32[0] - flBeneathLimita) <= v20.m128_f32[0] )
              break;
          }
        }
        if ( v18 == ++m_pMemory )
          goto LABEL_20;
      }
      v22 = x_low.m128_f32[0] - v20.m128_f32[0];
      x_low.m128_f32[0] = x_low.m128_f32[0] - flUseZ;
      flAboveLimit.m128_i32[0] = fabs(v22);
      v23 = _mm_and_ps(x_low, *&angle);
      v24 = _mm_cmplt_ss(v23, flAboveLimit);
      if ( flAboveLimit.m128_f32[0] > v23.m128_f32[0] )
        v19 = pUseArea;
      ++m_pMemory;
      pUseArea = v19;
      LODWORD(flUseZ) = _mm_andnot_ps(v24, v20).m128_u32[0] | LODWORD(flUseZ) & v24.m128_i32[0];
    }
    while ( v18 != m_pMemory );
  }
LABEL_20:
  v25 = pUseArea;
  if ( pZOut != 0 )
    *pZOut = flUseZ;
LABEL_22:
  if ( VProf_954 )
  {
    v27 = __rdtsc();
    if ( !g_VProfCurrentProfile.m_fAtRoot || g_VProfCurrentProfile.m_enabled != 0 )
    {
      v28 = g_VProfCurrentProfile.m_TargetThreadId;
      if ( v28 == ThreadGetCurrentId(this) )
      {
        if ( CVProfNode::ExitScope(g_VProfCurrentProfile.m_pCurNode) != 0 )
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
    }
    v29 = g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks;
    ++g_VProfCurrentProfile.m_ScopeProfiler.m_numCalls;
    g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks = v29 - v27 + __rdtsc();
  }
  return v25;
}


// CNavMesh::GetNavAreaWithLargestPortal  (line 1016, @0x00000000031f39a0, libserver.so)  // inlines: Add, CMicroProfilerGuard, CMicroProfilerSample, CVProfScope, EnterScope, GetElapsed, GetTimebaseRegister, GetZ, InTargetThread, IsEnabled, IsOverlappingPoint, PLAT_CPU_TIME, VectorAdd, WorldToGridX, WorldToGridY, operator+, operator[], ~CMicroProfilerGuard, ~CVProfScope
// calls: CNavPoly::IsOverlappingPoint, CNavPoly::GetZ, CNavPoly::IsOverlappingPoly, CNavArea::GetBackEdgeIndex, CVProfile::ExitScope, ThreadGetCurrentId, CVProfNode::GetSubNode(char const*,int,char const*,int), CVProfNode::EnterScope(void), _Unwind_Resume
// callers: FindJumpDownArea
// strings: "CNavMesh::GetNavAreaWithLargestPortal", "NextBot"
CNavArea *__fastcall CNavMesh::GetNavAreaWithLargestPortal(
        const CNavMesh *const this,
        const Vector *const vPos,
        const CNavArea *const rSrcArea,
        NavEdgeIndex nEdge,
        float flBeneathLimit,
        NavEdgeIndex *pBackEdge)
{
  int m_enabled; // edx
  float m_flGridCellSize; // xmm1_4
  int m_nGridSizeX; // edx
  int v11; // eax
  int v12; // esi
  int m_nGridSizeY; // edi
  float y; // xmm2_4
  int v15; // ecx
  __int64 v16; // rdx
  CUtlVector<CNavArea*,CUtlMemory<CNavArea*,int> > *m_pMemory; // rax
  float v18; // xmm1_4
  CUtlVector<CNavArea*,CUtlMemory<CNavArea*,int> > *v19; // r13
  unsigned __int64 v20; // rbx
  __int64 v21; // r14
  const CNavArea *v22; // r12
  float v23; // xmm2_4
  float v24; // xmm4_4
  NavEdgeIndex BackEdgeIndex; // al
  float v26; // xmm0_4
  CNavArea *result; // rax
  unsigned __int64 v28; // r13
  ThreadId_t m_TargetThreadId; // r14
  uint64 m_numTimeBaseTicks; // rcx
  CVProfNode *m_pCurNode; // rax
  CVProfile::CBudgetGroup *v32; // rax
  float flUseHalfWidth; // [rsp+14h] [rbp-8Ch]
  CNavArea *pUseArea; // [rsp+20h] [rbp-80h]
  NavEdgeIndex nEdgea; // [rsp+28h] [rbp-78h]
  bool VProf_1018; // [rsp+2Fh] [rbp-71h]
  float flUseZ; // [rsp+38h] [rbp-68h]
  float z; // [rsp+48h] [rbp-58h]
  CNavArea *za; // [rsp+48h] [rbp-58h]
  float flOverlap; // [rsp+5Ch] [rbp-44h] BYREF
  Vector vTestPos; // [rsp+60h] [rbp-40h] BYREF

  m_enabled = g_VProfCurrentProfile.m_enabled;
  VProf_1018 = m_enabled != 0;
  if ( m_enabled != 0 )
  {
    v28 = __rdtsc();
    m_TargetThreadId = g_VProfCurrentProfile.m_TargetThreadId;
    if ( m_TargetThreadId == ThreadGetCurrentId(this) )
    {
      m_pCurNode = g_VProfCurrentProfile.m_pCurNode;
      if ( m_pCurNode->m_pszName != "CNavMesh::GetNavAreaWithLargestPortal" )
      {
        m_pCurNode = CVProfNode::GetSubNode(
                       g_VProfCurrentProfile.m_pCurNode,
                       "CNavMesh::GetNavAreaWithLargestPortal",
                       0,
                       "NextBot",
                       4);
        g_VProfCurrentProfile.m_pCurNode = m_pCurNode;
      }
      v32 = &g_VProfCurrentProfile.m_pBudgetGroups[m_pCurNode->m_BudgetGroupID];
      v32->m_BudgetFlags |= 4u;
      CVProfNode::EnterScope(g_VProfCurrentProfile.m_pCurNode);
      g_VProfCurrentProfile.m_fAtRoot = 0;
    }
    m_numTimeBaseTicks = g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks;
    ++g_VProfCurrentProfile.m_ScopeProfiler.m_numCalls;
    g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks = m_numTimeBaseTicks - v28 + __rdtsc();
    if ( this->m_Grid.m_Size == 0 )
      goto LABEL_30;
  }
  else if ( this->m_Grid.m_Size == 0 )
  {
LABEL_30:
    result = 0;
    goto LABEL_24;
  }
  m_flGridCellSize = this->m_flGridCellSize;
  m_nGridSizeX = this->m_nGridSizeX;
  v11 = ((vPos->x - this->m_flGridMinX) / m_flGridCellSize);
  if ( v11 < 0 )
  {
    v11 = 0;
  }
  else if ( m_nGridSizeX <= v11 )
  {
    v11 = m_nGridSizeX - 1;
  }
  v12 = 0;
  m_nGridSizeY = this->m_nGridSizeY;
  y = vPos->y;
  v15 = ((y - this->m_flGridMinY) / m_flGridCellSize);
  if ( v15 >= 0 )
  {
    if ( m_nGridSizeY > v15 )
      v12 = v15 * m_nGridSizeX;
    else
      v12 = m_nGridSizeX * (m_nGridSizeY - 1);
  }
  v16 = v12 + v11;
  m_pMemory = this->m_Grid.m_Memory.m_pMemory;
  v18 = y + 0.0;
  vTestPos.x = vPos->x + 0.0;
  vTestPos.y = y + 0.0;
  v19 = &m_pMemory[v16];
  vTestPos.z = vPos->z + 5.0;
  if ( v19->m_Size == 0 )
    goto LABEL_30;
  v20 = 0;
  v21 = 8LL * (v19->m_Size - 1) + 8;
  pUseArea = 0;
  flUseHalfWidth = 1.1754944e-38;
  flUseZ = -100000000.0;
  nEdgea = nEdge;
  do
  {
    v22 = v19->m_Memory.m_pMemory[v20 / 8];
    if ( CNavPoly::IsOverlappingPoint(v22, &vTestPos, v18) )
    {
      v24 = CNavPoly::GetZ(v22, vTestPos.y, v23);
      z = v24;
      if ( v24 <= vTestPos.z
        && (vPos->z - flBeneathLimit) <= v24
        && flUseZ <= v24
        && !CNavPoly::IsOverlappingPoly(v22, rSrcArea) )
      {
        BackEdgeIndex = CNavArea::GetBackEdgeIndex(rSrcArea, v22, nEdgea, &flOverlap);
        if ( BackEdgeIndex != -1 )
        {
          v26 = 0.5 * flOverlap;
          if ( (0.5 * flOverlap) >= 1.0 && flUseHalfWidth <= v26 )
          {
            if ( pBackEdge != 0 )
              *pBackEdge = BackEdgeIndex;
            flUseHalfWidth = v26;
            pUseArea = v22;
            flUseZ = z;
          }
        }
      }
    }
    v20 += 8LL;
  }
  while ( v20 != v21 );
  result = pUseArea;
LABEL_24:
  if ( VProf_1018 )
  {
    za = result;
    CVProfile::ExitScope(&g_VProfCurrentProfile);
    return za;
  }
  return result;
}


// CNavMesh::GetNearestNavArea  (line 1109, @0x00000000031f4f70, libserver.so)
// calls: CNavMesh::GetNearestNav
// callers: CBaseCombatCharacter::UpdateLastKnownArea, CNavEditor::EditCreateNavArea, CNavEditor::DoSelectionTrace, CPath::ComputePathTrivialCore, CPath::GetNearestNavAreaAndGroundHeight, CNavVolumeBreadthFirstSearch::ConvertStartPosToStartArea, CNavBreadthFirstSearch::BreadthFirstSearch, ChasePath::PredictTargetPosition, CNavLadder::ConnectGeneratedLadder
CNavArea *__fastcall CNavMesh::GetNearestNavArea(
        const CNavMesh *const this,
        const Vector *const vPos,
        NavHull_t navHull,
        char nGetNavFlags,
        float flMaxDist)
{
  return CNavMesh::GetNearestNav(this, vPos, navHull, nGetNavFlags, 0, flMaxDist);
}


// CNavMesh::GetNearestPointOnMeshWithHullClearance  (line 1116, @0x00000000031f4f80, libserver.so)
// calls: CNavMesh::GetNearestNav
// callers: CNavPathJumpProcessLandingZone::PostProcessJump, CNavEditor::UpdateSelection
bool __fastcall CNavMesh::GetNearestPointOnMeshWithHullClearance(
        const CNavMesh *const this,
        const Vector *const vPos,
        NavHull_t a3,
        Vector *pNearestPosOut,
        int32 nFlags)
{
  return CNavMesh::GetNearestNav(this, vPos, a3, nFlags, pNearestPosOut, 10000.0) != 0;
}


// CNavMesh::GetNearestNav  (line 1124, @0x00000000031f46b0, libserver.so)  // inlines: Add, BitVec_IsBitSet, Bitvec_Set, CBitVec, CBitVecT, CGameTrace, CMicroProfilerGuard, CMicroProfilerSample, CNavAreaMarker, CVProfScope, CanSupportHull, ClearAll, EnterScope, GetElapsed, GetTimebaseRegister, GetTraceMaskSolidBrushOnly, InTargetThread, IsBitSet, IsEnabled, IsMarked, PLAT_CPU_TIME, RnCollisionAttr_t, Set, SetMark, Vector, VectorAdd, WorldToGridX, WorldToGridY, end, memset, operator+, operator=, operator[], ~CMicroProfilerGuard, ~CVProfScope
// calls: memset, ceilf, CNavPoly::GetClosestPointOnPolyAndDistSqrThresholded, CNavArea::IsBlocked, CVProfile::ExitScope, CGameTrace::Init, _Unwind_Resume, CNavMesh::GetGroundHeight, ThreadGetCurrentId, CVProfNode::GetSubNode(char const*,int,char const*,int), CVProfNode::EnterScope(void)
// callers: CNavSearchHexLattice::DoSearch, CNavMesh::GetNearestNavArea, CNavMesh::GetNearestPointOnMeshWithHullClearance
// strings: "CNavMesh::GetNearestNavArea", "NextBot"
CNavArea *__fastcall CNavMesh::GetNearestNav(
        const CNavMesh *const this,
        const Vector *const vPos,
        NavHull_t navHull,
        char nGetNavFlags,
        Vector *pNearestPosOut,
        float flMaxDist)
{
  __int64 m_enabled; // rdi
  float m_flGridCellSize; // xmm1_4
  int m_nGridSizeX; // eax
  int v10; // edi
  int v11; // edx
  int m_nGridSizeY; // eax
  int v13; // edi
  int v14; // edx
  int v15; // r14d
  CUtlVector<CNavArea*,CUtlMemory<CNavArea*,int> > *v16; // rax
  CNavArea **m_pMemory; // rbx
  CNavArea **v18; // r13
  const CNavArea *v19; // r12
  int m_nIndex; // ecx
  int v21; // eax
  __int64 v22; // rdx
  int v23; // ecx
  CNavArea *v24; // rbx
  INavPhysicsInterface *m_pPhysicsInterface; // rdi
  float v27; // xmm0_4
  int (*v28)(...); // rax
  vec_t v29; // xmm2_4
  float z; // xmm1_4
  INavPhysicsInterface *v31; // rdi
  int (*v32)(...); // rax
  INavPhysicsInterface *v33; // rdi
  int (*v34)(...); // rax
  vec_t y; // xmm0_4
  unsigned __int64 v36; // r12
  ThreadId_t m_TargetThreadId; // r13
  uint64 m_numTimeBaseTicks; // rcx
  CVProfNode *m_pCurNode; // rax
  CVProfile::CBudgetGroup *v40; // rax
  int nShift; // [rsp+8h] [rbp-81A8h]
  int v42; // [rsp+14h] [rbp-819Ch]
  int v43; // [rsp+18h] [rbp-8198h]
  bool VProf_1126; // [rsp+1Fh] [rbp-8191h]
  int nShiftLimit; // [rsp+34h] [rbp-817Ch]
  CNavArea *pClose; // [rsp+38h] [rbp-8178h]
  int v48; // [rsp+40h] [rbp-8170h]
  int v49; // [rsp+44h] [rbp-816Ch]
  int v50; // [rsp+50h] [rbp-8160h]
  int v51; // [rsp+58h] [rbp-8158h]
  int x; // [rsp+5Ch] [rbp-8154h]
  int v54; // [rsp+68h] [rbp-8148h]
  float flDistSqra; // [rsp+6Ch] [rbp-8144h]
  float flCloseDistSq; // [rsp+70h] [rbp-8140h]
  int v58; // [rsp+74h] [rbp-813Ch]
  unsigned __int8 navHulla; // [rsp+80h] [rbp-8130h]
  Vector vAreaPos; // [rsp+90h] [rbp-8120h] BYREF
  Vector vSafePos; // [rsp+A0h] [rbp-8110h] BYREF
  float v63[4]; // [rsp+B0h] [rbp-8100h] BYREF
  vec_t v64; // [rsp+C0h] [rbp-80F0h] BYREF
  float v65; // [rsp+C4h] [rbp-80ECh]
  float v66; // [rsp+C8h] [rbp-80E8h]
  trace_t v67; // [rsp+D0h] [rbp-80E0h] BYREF
  CNavAreaMarker navAreaMarker; // [rsp+180h] [rbp-8030h] BYREF

  navHulla = navHull.m_hullCategory;
  m_enabled = g_VProfCurrentProfile.m_enabled;
  VProf_1126 = m_enabled != 0;
  if ( m_enabled != 0 )
  {
    v36 = __rdtsc();
    m_TargetThreadId = g_VProfCurrentProfile.m_TargetThreadId;
    if ( m_TargetThreadId == ThreadGetCurrentId(m_enabled) )
    {
      m_pCurNode = g_VProfCurrentProfile.m_pCurNode;
      if ( m_pCurNode->m_pszName != "CNavMesh::GetNearestNavArea" )
      {
        m_pCurNode = CVProfNode::GetSubNode(
                       g_VProfCurrentProfile.m_pCurNode,
                       "CNavMesh::GetNearestNavArea",
                       0,
                       "NextBot",
                       4);
        g_VProfCurrentProfile.m_pCurNode = m_pCurNode;
      }
      v40 = &g_VProfCurrentProfile.m_pBudgetGroups[m_pCurNode->m_BudgetGroupID];
      v40->m_BudgetFlags |= 4u;
      CVProfNode::EnterScope(g_VProfCurrentProfile.m_pCurNode);
      g_VProfCurrentProfile.m_fAtRoot = 0;
    }
    m_numTimeBaseTicks = g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks;
    ++g_VProfCurrentProfile.m_ScopeProfiler.m_numCalls;
    g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks = m_numTimeBaseTicks - v36 + __rdtsc();
  }
  memset(&navAreaMarker, 0, sizeof(navAreaMarker));
  if ( this->m_Grid.m_Size != 0 )
  {
    v58 = nGetNavFlags & 2;
    v50 = nGetNavFlags & 1;
    v51 = nGetNavFlags & 8;
    if ( (nGetNavFlags & 4) == 0 || CNavMesh::GetGroundHeight(this, vPos, &v67.startpos.x, 0) )
    {
      m_flGridCellSize = this->m_flGridCellSize;
      m_nGridSizeX = this->m_nGridSizeX;
      flCloseDistSq = flMaxDist * flMaxDist;
      v10 = ((vPos->x - this->m_flGridMinX) / m_flGridCellSize);
      if ( v10 < 0 )
      {
        v43 = 0;
      }
      else
      {
        v11 = m_nGridSizeX - 1;
        if ( m_nGridSizeX > v10 )
          v11 = ((vPos->x - this->m_flGridMinX) / m_flGridCellSize);
        v43 = v11;
      }
      m_nGridSizeY = this->m_nGridSizeY;
      v13 = ((vPos->y - this->m_flGridMinY) / m_flGridCellSize);
      if ( v13 < 0 )
      {
        v42 = 0;
      }
      else
      {
        v14 = m_nGridSizeY - 1;
        if ( m_nGridSizeY > v13 )
          v14 = ((vPos->y - this->m_flGridMinY) / m_flGridCellSize);
        v42 = v14;
      }
      nShiftLimit = ceilf(flMaxDist / m_flGridCellSize);
      if ( nShiftLimit >= 0 )
      {
        nShift = 0;
        pClose = 0;
        while ( 1 )
        {
          v48 = nShift;
          v49 = nShift + v43;
          if ( v43 - nShift <= nShift + v43 )
            break;
LABEL_44:
          ++nShift;
          if ( v48 + 1 > nShiftLimit )
          {
            v24 = pClose;
            goto LABEL_46;
          }
        }
        x = v43 - nShift;
        while ( 1 )
        {
          if ( x >= 0 && this->m_nGridSizeX > x )
          {
            v54 = v42 + nShift;
            if ( v42 + nShift >= v42 - nShift )
              break;
          }
LABEL_43:
          if ( ++x > v49 )
            goto LABEL_44;
        }
        v15 = v42 - nShift;
        while ( 1 )
        {
          if ( v15 >= 0
            && this->m_nGridSizeY > v15
            && (v43 - nShift >= x || v49 <= x || v15 <= v42 - nShift || v15 >= v54) )
          {
            v16 = &this->m_Grid.m_Memory.m_pMemory[x + v15 * this->m_nGridSizeX];
            m_pMemory = v16->m_Memory.m_pMemory;
            v18 = &m_pMemory[v16->m_Size];
            if ( m_pMemory != v18 )
              break;
          }
LABEL_42:
          if ( ++v15 > v54 )
            goto LABEL_43;
        }
        while ( 1 )
        {
          v19 = *m_pMemory;
          if ( ((*m_pMemory)->m_nHullSupport & navHulla) == 0 )
            goto LABEL_35;
          if ( v19->m_bShouldBeDestroyed )
            goto LABEL_35;
          m_nIndex = v19->m_nIndex;
          v21 = 1 << m_nIndex;
          v22 = m_nIndex >> 5;
          if ( ((1 << m_nIndex) & navAreaMarker.m_MarkedAreas.m_Ints[v22]) != 0 )
            goto LABEL_35;
          if ( v58 == 0 )
          {
            if ( CNavArea::IsBlocked(v19, -1, 0) )
              goto LABEL_35;
            v23 = v19->m_nIndex;
            v21 = 1 << v23;
            v22 = v23 >> 5;
          }
          navAreaMarker.m_MarkedAreas.m_Ints[v22] |= v21;
          flDistSqra = CNavPoly::GetClosestPointOnPolyAndDistSqrThresholded(v19, vPos, flCloseDistSq, &vAreaPos);
          if ( flDistSqra < 0.0 || v51 == 0 && vAreaPos.z > (vPos->z + 5.0) )
            goto LABEL_35;
          if ( v50 == 0 )
            goto LABEL_32;
          memset(&v67.m_ShapeAttributes, 0, 31);
          v67.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
          CGameTrace::Init(&v67);
          m_pPhysicsInterface = this->m_pPhysicsInterface;
          v27 = vPos->z + 18.0;
          v28 = *m_pPhysicsInterface->_vptr_INavPhysicsInterface;
          v29 = vPos->x + 0.0;
          v65 = vPos->y + 0.0;
          v66 = v27;
          v64 = v29;
          v28(m_pPhysicsInterface, vPos, &v64, CNavConfig::ms_TraceMaskSolidBrushOnly, 0, 4, &v67);
          if ( v67.startsolid )
          {
            z = v67.endpos.z + 1.0;
            vSafePos.y = v67.endpos.y + 0.0;
            vSafePos.z = v67.endpos.z + 1.0;
            vSafePos.x = v67.endpos.x + 0.0;
          }
          else
          {
            z = vPos->z;
            vSafePos.x = vPos->x;
            y = vPos->y;
            vSafePos.z = z;
            vSafePos.y = y;
          }
          if ( fabs(vAreaPos.z - z) > 18.0 )
          {
            v31 = this->m_pPhysicsInterface;
            v32 = *v31->_vptr_INavPhysicsInterface;
            v64 = vAreaPos.x;
            v65 = vAreaPos.y;
            v66 = z;
            v63[0] = vAreaPos.x + 0.0;
            v63[1] = vAreaPos.y + 0.0;
            v63[2] = vAreaPos.z + 18.0;
            v32(v31, v63, &v64, CNavConfig::ms_TraceMaskSolidBrushOnly, 0, 4, &v67);
            if ( v67.fraction != 1.0 )
              goto LABEL_35;
            z = vSafePos.z;
          }
          v33 = this->m_pPhysicsInterface;
          v34 = *v33->_vptr_INavPhysicsInterface;
          v64 = vAreaPos.x;
          v66 = z + 18.0;
          v65 = vAreaPos.y;
          v34(v33, &vSafePos, &v64, CNavConfig::ms_TraceMaskSolidBrushOnly, 0, 4, &v67);
          if ( v67.fraction == 1.0 )
          {
LABEL_32:
            if ( pNearestPosOut != 0 )
              *pNearestPosOut = vAreaPos;
            pClose = v19;
            flCloseDistSq = flDistSqra;
            nShiftLimit = nShift + 1;
          }
LABEL_35:
          if ( v18 == ++m_pMemory )
            goto LABEL_42;
        }
      }
    }
  }
  v24 = 0;
LABEL_46:
  if ( VProf_1126 )
    CVProfile::ExitScope(&g_VProfCurrentProfile);
  return v24;
}


// CNavMesh::GetNavAreasIntersectingSphere  (line 1298, @0x00000000031f9c20, libserver.so)  // inlines: Clamp<int>, EnsureCapacity, NavAreaCollectorExternal, memcpy
// calls: CNavMesh::ForAllAreasIntersectingSphere<NavAreaCollectorExternal>, memcpy
void __fastcall CNavMesh::GetNavAreasIntersectingSphere(
        CNavMesh *const this,
        NavAreaVector *const rAreasOut,
        const Vector *const vCenter,
        double flRadius,
        int nEnsureCapacity,
        double a6,
        double a7)
{
  int v8; // r13d
  bool v11; // cc
  double v12; // xmm3_8
  __int64 m_nGridSizeX; // rcx
  __int64 m_nGridSizeY; // rdx
  int m_Size; // eax
  uint32 m_nGrowSize; // eax
  CNavArea **v17; // rsi
  __int64 (__fastcall **v18)(_QWORD *, __int64, __int64, __int64, double, double, double, double); // rax
  CNavArea **v19; // rax
  CNavArea **m_pMemory; // r15
  CNavArea **v21; // rax
  int flRadiusa; // [rsp+Ch] [rbp-44h]
  int flRadiusb; // [rsp+Ch] [rbp-44h]
  NavAreaCollectorExternal navAreasCollector; // [rsp+10h] [rbp-40h] BYREF

  v8 = nEnsureCapacity;
  v11 = nEnsureCapacity <= 0;
  *&v12 = LODWORD(this->m_flGridCellSize);
  m_nGridSizeX = this->m_nGridSizeX;
  m_nGridSizeY = this->m_nGridSizeY;
  m_Size = this->m_NavAreas.m_Size;
  if ( v11 )
  {
    v8 = 50;
    a7 = ((m_nGridSizeX * *&v12) * (m_nGridSizeY * *&v12));
    a6 = (*&flRadius * *&flRadius) * 3.141592653589793 / a7;
    *&a7 = m_Size;
    *&a6 = (*&a6 + *&a6) * m_Size;
    if ( *&a6 > 49 )
    {
      LOWORD(v8) = 2000;
      if ( *&a6 <= 2000 )
        v8 = *&a6;
    }
  }
  if ( v8 > rAreasOut->m_Memory.m_nAllocationCount )
  {
    m_nGrowSize = rAreasOut->m_Memory.m_nGrowSize;
    if ( (m_nGrowSize & 0x40000000) == 0 )
    {
      if ( (m_nGrowSize & 0xC0000000) != 0 )
      {
        flRadiusb = LODWORD(flRadius);
        m_pMemory = rAreasOut->m_Memory.m_pMemory;
        v21 = (**g_pMemAlloc)(g_pMemAlloc, 8LL * v8, m_nGridSizeY, m_nGridSizeX, flRadius, a6, a7, v12);
        LODWORD(flRadius) = flRadiusb;
        rAreasOut->m_Memory.m_pMemory = v21;
        if ( m_pMemory != 0 )
        {
          memcpy(v21, m_pMemory, 8LL * rAreasOut->m_Memory.m_nAllocationCount);
          LODWORD(flRadius) = flRadiusb;
        }
        rAreasOut->m_Memory.m_nGrowSize &= 0x3FFFFFFFu;
      }
      else
      {
        flRadiusa = LODWORD(flRadius);
        v17 = rAreasOut->m_Memory.m_pMemory;
        v18 = *g_pMemAlloc;
        if ( v17 != 0 )
          v19 = v18[1](g_pMemAlloc, v17, 8LL * v8, m_nGridSizeX, flRadius, a6, a7, v12);
        else
          v19 = (*v18)(g_pMemAlloc, 8LL * v8, m_nGridSizeY, m_nGridSizeX, flRadius, a6, a7, v12);
        LODWORD(flRadius) = flRadiusa;
        rAreasOut->m_Memory.m_pMemory = v19;
      }
      rAreasOut->m_Memory.m_nAllocationCount = v8;
    }
  }
  navAreasCollector.m_rAreas = rAreasOut;
  navAreasCollector.m_bCheckForDuplicates = 0;
  CNavMesh::ForAllAreasIntersectingSphere<NavAreaCollectorExternal>(this, &navAreasCollector, vCenter, *&flRadius);
}


// CNavMesh::GetNavAreasInBox  (line 1315, @0x00000000031f9e80, libserver.so)  // inlines: AddToTail, CopyConstruct<CNavArea*>, Element, Extent, GrowMemory, WorldToGridX, WorldToGridY, operator=, operator[]
// calls: CNavPoly::IsOverlappingExtent, CUtlVectorBase<CNavArea*, CUtlMemory<CNavArea*, int> >::Find, CUtlMemory<CNavArea*, int>::Grow
// callers: AddAreaIfUnique
void __fastcall CNavMesh::GetNavAreasInBox(
        const CNavMesh *const this,
        NavAreaVector *const out,
        const Vector *const vMins,
        const Vector *const vMaxs)
{
  float m_flGridMinX; // xmm3_4
  float m_flGridCellSize; // xmm0_4
  int m_nGridSizeX; // esi
  int v8; // eax
  float v9; // xmm5_4
  float m_flGridMinY; // xmm2_4
  int m_nGridSizeY; // eax
  int v12; // ebx
  int v13; // edi
  vec_t v14; // xmm4_4
  int v15; // ebx
  int v16; // edi
  float v17; // xmm3_4
  int v18; // esi
  vec_t z; // xmm0_4
  vec_t v20; // xmm0_4
  __int64 v21; // r14
  CUtlVector<CNavArea*,CUtlMemory<CNavArea*,int> > *v22; // r15
  CNavArea *const *v23; // rbx
  __int64 m_Size; // rdx
  int v25; // eax
  CNavArea **v26; // rax
  int x; // [rsp+8h] [rbp-78h]
  int v28; // [rsp+Ch] [rbp-74h]
  int v30; // [rsp+20h] [rbp-60h]
  int v31; // [rsp+24h] [rbp-5Ch]
  int y; // [rsp+28h] [rbp-58h]
  int x_0; // [rsp+2Ch] [rbp-54h]
  Extent extent; // [rsp+30h] [rbp-50h] BYREF

  if ( this->m_Grid.m_Size != 0 )
  {
    m_flGridMinX = this->m_flGridMinX;
    m_flGridCellSize = this->m_flGridCellSize;
    m_nGridSizeX = this->m_nGridSizeX;
    if ( ((vMins->x - m_flGridMinX) / m_flGridCellSize) < 0 )
    {
      x = 0;
    }
    else
    {
      v8 = m_nGridSizeX - 1;
      if ( m_nGridSizeX > ((vMins->x - m_flGridMinX) / m_flGridCellSize) )
        v8 = ((vMins->x - m_flGridMinX) / m_flGridCellSize);
      x = v8;
    }
    v9 = vMins->y;
    m_flGridMinY = this->m_flGridMinY;
    m_nGridSizeY = this->m_nGridSizeY;
    v12 = ((v9 - m_flGridMinY) / m_flGridCellSize);
    if ( v12 < 0 )
    {
      y = 0;
    }
    else
    {
      v13 = m_nGridSizeY - 1;
      if ( m_nGridSizeY > v12 )
        v13 = ((vMins->y - m_flGridMinY) / m_flGridCellSize);
      y = v13;
    }
    v14 = vMaxs->x;
    v15 = ((vMaxs->x - m_flGridMinX) / m_flGridCellSize);
    if ( v15 < 0 )
    {
      v31 = 0;
    }
    else
    {
      v16 = m_nGridSizeX - 1;
      if ( m_nGridSizeX > v15 )
        v16 = ((vMaxs->x - m_flGridMinX) / m_flGridCellSize);
      v31 = v16;
    }
    v17 = vMaxs->y;
    if ( ((v17 - m_flGridMinY) / m_flGridCellSize) < 0 )
    {
      v28 = 0;
    }
    else
    {
      v18 = m_nGridSizeY - 1;
      if ( m_nGridSizeY > ((vMaxs->y - m_flGridMinY) / m_flGridCellSize) )
        v18 = ((vMaxs->y - m_flGridMinY) / m_flGridCellSize);
      v28 = v18;
    }
    extent.lo.x = vMins->x;
    z = vMins->z;
    extent.lo.y = v9;
    extent.hi.x = v14;
    extent.lo.z = z;
    v20 = vMaxs->z;
    extent.hi.y = v17;
    for ( extent.hi.z = v20; y <= v28; ++y )
    {
      if ( x <= v31 )
      {
        x_0 = x;
        do
        {
          v21 = 0;
          v22 = &this->m_Grid.m_Memory.m_pMemory[x_0 + this->m_nGridSizeX * y];
          if ( v22->m_Size > 0 )
          {
            do
            {
              while ( 1 )
              {
                if ( CNavPoly::IsOverlappingExtent(v22->m_Memory.m_pMemory[v21], &extent) )
                {
                  v23 = &v22->m_Memory.m_pMemory[v21];
                  if ( CUtlVectorBase<CNavArea *,CUtlMemory<CNavArea *,int>>::Find(out, v23) == -1 )
                  {
                    m_Size = out->m_Size;
                    if ( m_Size == out->m_Memory.m_nAllocationCount )
                    {
                      v30 = out->m_Size;
                      CUtlMemory<CNavArea *,int>::Grow(&out->m_Memory, 1);
                      v25 = out->m_Size;
                      m_Size = v30;
                    }
                    else
                    {
                      v25 = out->m_Size;
                    }
                    out->m_Size = v25 + 1;
                    v26 = &out->m_Memory.m_pMemory[m_Size];
                    if ( v26 != 0 )
                      break;
                  }
                }
                if ( v22->m_Size <= ++v21 )
                  goto LABEL_30;
              }
              *v26 = *v23;
              ++v21;
            }
            while ( v22->m_Size > v21 );
          }
LABEL_30:
          ++x_0;
        }
        while ( x_0 <= v31 );
      }
    }
  }
}


// CNavMesh::GetRandomAreaInVolume  (line 1345, @0x00000000031f3d70, libserver.so)
CNavArea *__fastcall CNavMesh::GetRandomAreaInVolume(CNavMesh *const this, const CNavVolume *const rVolume)
{
  return (*(rVolume->_vptr_CNavVolume + 4))(rVolume);
}


// CNavMesh::ForAllAreasOverlappingVolume  (line 1352, @0x00000000031f3d90, libserver.so)  // inlines: _Function_base, function, ~_Function_base, ~function
// calls: __stack_chk_fail, _Unwind_Resume
void __fastcall CNavMesh::ForAllAreasOverlappingVolume(
        CNavMesh *const this,
        const CNavVolume *const rNavVolume,
        __int64 a3)
{
  void (__fastcall *v5)(const CNavVolume *const, _BYTE *); // r13
  void (__fastcall *v6)(_BYTE *, _BYTE *, __int64); // rax
  __int64 v7; // rdx
  _BYTE v8[16]; // [rsp+0h] [rbp-50h] BYREF
  void (__fastcall *v9)(_BYTE *, _BYTE *, __int64); // [rsp+10h] [rbp-40h]
  __int64 v10; // [rsp+18h] [rbp-38h]
  unsigned __int64 v11; // [rsp+28h] [rbp-28h]

  v9 = 0;
  v11 = __readfsqword(0x28u);
  v5 = *(rNavVolume->_vptr_CNavVolume + 6);
  v6 = *(a3 + 16);
  if ( v6 != 0 )
  {
    v7 = *(a3 + 24);
    v9 = v6;
    v10 = v7;
    v6(v8, a3, 2);
  }
  v5(rNavVolume, v8);
  if ( v9 != 0 )
    v9(v8, v8, 3);
}


// CNavMesh::ForAllAreasOverlappingEntity  (line 1359, @0x00000000031f3e70, libserver.so)  // inlines: BitVec_IsBitSet, Bitvec_Set, CBitVec, CBitVecT, CNavAreaMarker, ClearAll, Extent, IsBitSet, IsMarked, Set, SetMark, WorldToGridX, WorldToGridY, end, memset, operator(), operator=, operator[]
// calls: memset, CNavPoly::IsOverlappingExtent, std::__throw_bad_function_call(void)
// callers: CFuncNavBlocker::BlockNav
void __fastcall CNavMesh::ForAllAreasOverlappingEntity(
        CNavMesh *const this,
        const CBaseEntity *const rEntity,
        __int64 bExtrudeHullHeight,
        unsigned __int8 a4)
{
  int m_nGridSizeX; // edx
  float m_flGridMinX; // xmm5_4
  float m_flGridCellSize; // xmm0_4
  int v9; // eax
  float m_flGridMinY; // xmm4_4
  int m_nGridSizeY; // eax
  int v12; // esi
  int v13; // ecx
  int v14; // esi
  int v15; // ecx
  int v16; // esi
  int v17; // edx
  CUtlVector<CNavArea*,CUtlMemory<CNavArea*,int> > *v18; // rax
  const CNavPoly *const *m_pMemory; // r14
  const CNavPoly *const *v20; // r15
  const CNavPoly *v21; // r12
  INavPhysicsInterface *m_pPhysicsInterface; // rdi
  int x; // [rsp+8h] [rbp-80A8h]
  int v24; // [rsp+Ch] [rbp-80A4h]
  int v25; // [rsp+10h] [rbp-80A0h]
  int y; // [rsp+14h] [rbp-809Ch]
  unsigned int v29; // [rsp+38h] [rbp-8078h]
  int x_0; // [rsp+3Ch] [rbp-8074h]
  Vector vMins; // [rsp+40h] [rbp-8070h] BYREF
  Vector vMaxs; // [rsp+50h] [rbp-8060h] BYREF
  Extent entityExtent; // [rsp+60h] [rbp-8050h] BYREF
  CNavAreaMarker navAreaMarker; // [rsp+80h] [rbp-8030h] BYREF

  if ( this->m_Grid.m_Size != 0 )
  {
    (*(this->m_pPhysicsInterface->_vptr_INavPhysicsInterface + 6))(this->m_pPhysicsInterface, rEntity, &vMins, &vMaxs);
    entityExtent.lo = vMins;
    entityExtent.hi.x = vMaxs.x;
    m_nGridSizeX = this->m_nGridSizeX;
    m_flGridMinX = this->m_flGridMinX;
    *&entityExtent.hi.y = *&vMaxs.y;
    m_flGridCellSize = this->m_flGridCellSize;
    if ( ((vMins.x - m_flGridMinX) / m_flGridCellSize) < 0 )
    {
      x = 0;
    }
    else
    {
      v9 = m_nGridSizeX - 1;
      if ( m_nGridSizeX > ((vMins.x - m_flGridMinX) / m_flGridCellSize) )
        v9 = ((vMins.x - m_flGridMinX) / m_flGridCellSize);
      x = v9;
    }
    m_flGridMinY = this->m_flGridMinY;
    m_nGridSizeY = this->m_nGridSizeY;
    v12 = ((vMins.y - m_flGridMinY) / m_flGridCellSize);
    if ( v12 < 0 )
    {
      y = 0;
    }
    else
    {
      v13 = m_nGridSizeY - 1;
      if ( m_nGridSizeY > v12 )
        v13 = ((vMins.y - m_flGridMinY) / m_flGridCellSize);
      y = v13;
    }
    v14 = ((vMaxs.x - m_flGridMinX) / m_flGridCellSize);
    if ( v14 < 0 )
    {
      v25 = 0;
    }
    else
    {
      v15 = m_nGridSizeX - 1;
      if ( m_nGridSizeX > v14 )
        v15 = ((vMaxs.x - m_flGridMinX) / m_flGridCellSize);
      v25 = v15;
    }
    v16 = ((vMaxs.y - m_flGridMinY) / m_flGridCellSize);
    if ( v16 < 0 )
    {
      v24 = 0;
    }
    else
    {
      v17 = m_nGridSizeY - 1;
      if ( m_nGridSizeY > v16 )
        v17 = ((vMaxs.y - m_flGridMinY) / m_flGridCellSize);
      v24 = v17;
    }
    memset(&navAreaMarker, 0, sizeof(navAreaMarker));
    if ( y <= v24 )
    {
      v29 = a4;
      do
      {
        if ( x <= v25 )
        {
          x_0 = x;
          do
          {
            v18 = &this->m_Grid.m_Memory.m_pMemory[x_0 + this->m_nGridSizeX * y];
            m_pMemory = v18->m_Memory.m_pMemory;
            v20 = &m_pMemory[v18->m_Size];
            while ( v20 != m_pMemory )
            {
              while ( 1 )
              {
                v21 = *m_pMemory;
                if ( *m_pMemory != 0
                  && ((1 << LODWORD(v21[1].m_vVerts[0].z))
                    & navAreaMarker.m_MarkedAreas.m_Ints[SLODWORD(v21[1].m_vVerts[0].z) >> 5]) == 0
                  && CNavPoly::IsOverlappingExtent(*m_pMemory, &entityExtent) )
                {
                  m_pPhysicsInterface = this->m_pPhysicsInterface;
                  navAreaMarker.m_MarkedAreas.m_Ints[SLODWORD(v21[1].m_vVerts[0].z) >> 5] |= 1 << LODWORD(v21[1].m_vVerts[0].z);
                  if ( (*(m_pPhysicsInterface->_vptr_INavPhysicsInterface + 5))(m_pPhysicsInterface, v21, rEntity, v29) != 0 )
                    break;
                }
                if ( v20 == ++m_pMemory )
                  goto LABEL_32;
              }
              if ( *(bExtrudeHullHeight + 16) == 0 )
                std::__throw_bad_function_call();
              ++m_pMemory;
              (*(bExtrudeHullHeight + 24))(bExtrudeHullHeight, v21);
            }
LABEL_32:
            ++x_0;
          }
          while ( x_0 <= v25 );
        }
        ++y;
      }
      while ( y <= v24 );
    }
  }
}


// CNavMesh::GetNavAreaByID  (line 1402, @0x00000000031f41c0, libserver.so)
// callers: CNavEditor::CommandNavRecallSelectionSet, CNavEditor::CommandNavAddToSelectionSetByID, CNavArea::PostLoad, CNavLadder::Load
CNavArea *__fastcall CNavMesh::GetNavAreaByID(const CNavMesh *const this, unsigned int id)
{
  CNavArea *result; // rax

  if ( id == 0 )
    return 0;
  result = this->m_hashTable[id & 0x3FF];
  if ( result == 0 )
    return 0;
  do
  {
    if ( id == result->m_AreaId )
      break;
    result = result->m_pNextHash;
  }
  while ( result != 0 );
  return result;
}


// CNavMesh::GetLadderByID  (line 1420, @0x00000000031f4210, libserver.so)
// callers: CNavEditor::CommandNavMark, CNavArea::PostLoad
CNavLadder *__fastcall CNavMesh::GetLadderByID(const CNavMesh *const this, unsigned int id)
{
  int m_Size; // ecx
  CNavLadder **m_pMemory; // rdx
  CNavLadder *result; // rax
  CNavLadder **v5; // rdx
  CNavLadder **v6; // rcx

  if ( id != 0 )
  {
    m_Size = this->m_Ladders.m_Size;
    if ( m_Size > 0 )
    {
      m_pMemory = this->m_Ladders.m_Memory.m_pMemory;
      result = *m_pMemory;
      if ( id == (*m_pMemory)->m_id )
        return result;
      v5 = m_pMemory + 1;
      v6 = &v5[m_Size - 1];
      while ( v5 != v6 )
      {
        result = *v5++;
        if ( id == result->m_id )
          return result;
      }
    }
  }
  return 0;
}


// CNavMesh::GetGroundHeight  (line 1438, @0x00000000031f4260, libserver.so)  // inlines: Add, CGameTrace, CMicroProfilerGuard, CMicroProfilerSample, CVProfScope, EnterScope, GetElapsed, GetTimebaseRegister, InTargetThread, Init, IsEnabled, IsZero, PLAT_CPU_TIME, RnCollisionAttr_t, Vector, operator=, ~CMicroProfilerGuard, ~CVProfScope
// calls: CGameTrace::Init, CVProfile::ExitScope, ThreadGetCurrentId, CVProfNode::GetSubNode(char const*,int,char const*,int), CVProfNode::EnterScope(void), _Unwind_Resume
// callers: CNavAreaExtended::ComputeLighting, CNavGeneratorAAQuad::LadderEndSearch, CPath::ComputePathDetails, CPath::GetNearestNavAreaAndGroundHeight, CNavEditor::UpdateSelection, CNavGenerator::UpdateGeneration, CNavArea::UpdateFlagUnderWater, CNavMesh::GetNearestNav, FindGroundZFromPoint
// strings: "CNavMesh::GetGroundHeight", "NextBot"
bool __fastcall CNavMesh::GetGroundHeight(
        const CNavMesh *const this,
        const Vector *const vPos,
        float *pHeightOut,
        Vector *pNormalOut)
{
  int m_enabled; // r9d
  __m128 z_low; // xmm1
  INavPhysicsInterface *m_pPhysicsInterface; // rdi
  float v9; // xmm3_4
  __m128 v10; // xmm1
  __m128d v11; // xmm0
  float v12; // xmm3_4
  __m128 v13; // xmm1
  __m128 v14; // xmm1
  __m128d v15; // xmm0
  bool result; // al
  vec_t x; // xmm0_4
  vec_t y; // xmm1_4
  vec_t z; // xmm2_4
  unsigned __int64 v20; // r13
  ThreadId_t m_TargetThreadId; // r14
  uint64 m_numTimeBaseTicks; // rcx
  CVProfNode *m_pCurNode; // rax
  CVProfile::CBudgetGroup *v24; // rax
  bool VProf_1440; // [rsp+Fh] [rbp-111h]
  bool v28; // [rsp+18h] [rbp-108h]
  Vector vTo; // [rsp+20h] [rbp-100h] BYREF
  Vector vFrom; // [rsp+30h] [rbp-F0h] BYREF
  trace_t v31; // [rsp+40h] [rbp-E0h] BYREF

  m_enabled = g_VProfCurrentProfile.m_enabled;
  VProf_1440 = m_enabled != 0;
  if ( m_enabled != 0 )
  {
    v20 = __rdtsc();
    m_TargetThreadId = g_VProfCurrentProfile.m_TargetThreadId;
    if ( m_TargetThreadId == ThreadGetCurrentId(this) )
    {
      m_pCurNode = g_VProfCurrentProfile.m_pCurNode;
      if ( m_pCurNode->m_pszName != "CNavMesh::GetGroundHeight" )
      {
        m_pCurNode = CVProfNode::GetSubNode(
                       g_VProfCurrentProfile.m_pCurNode,
                       "CNavMesh::GetGroundHeight",
                       0,
                       "NextBot",
                       4);
        g_VProfCurrentProfile.m_pCurNode = m_pCurNode;
      }
      v24 = &g_VProfCurrentProfile.m_pBudgetGroups[m_pCurNode->m_BudgetGroupID];
      v24->m_BudgetFlags |= 4u;
      CVProfNode::EnterScope(g_VProfCurrentProfile.m_pCurNode);
      g_VProfCurrentProfile.m_fAtRoot = 0;
    }
    m_numTimeBaseTicks = g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks;
    ++g_VProfCurrentProfile.m_ScopeProfiler.m_numCalls;
    g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks = m_numTimeBaseTicks - v20 + __rdtsc();
  }
  memset(&v31.m_ShapeAttributes, 0, 31);
  v31.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
  CGameTrace::Init(&v31);
  z_low = LODWORD(vPos->z);
  vTo.y = vPos->y;
  m_pPhysicsInterface = this->m_pPhysicsInterface;
  v9 = z_low.m128_f32[0];
  v10 = _mm_unpacklo_ps(z_low, z_low);
  vFrom.y = vTo.y;
  v11 = _mm_cvtps_pd(v10);
  v12 = v9 - 10000.0;
  v11.m128d_f64[0] = v11.m128d_f64[0] + 35.5 + 0.001;
  vTo.x = vPos->x;
  vTo.z = v12;
  vFrom.x = vTo.x;
  vFrom.z = _mm_movedup_pd(v11).m128d_f64[0];
  if ( m_pPhysicsInterface == 0 || (v12 - v10.m128_f32[0]) >= 100.0 )
  {
LABEL_11:
    *pHeightOut = 0.0;
    if ( pNormalOut != 0 )
    {
      pNormalOut->x = 0.0;
      pNormalOut->y = 0.0;
      pNormalOut->z = 1.0;
    }
    result = 0;
    goto LABEL_14;
  }
  (*(m_pPhysicsInterface->_vptr_INavPhysicsInterface + 1))(
    m_pPhysicsInterface,
    &vFrom,
    &vTo,
    CNavConfig::ms_TraceMaskSolidBrushOnly,
    this->m_pTraceFilterGroundEntities,
    &v31);
  while ( 1 )
  {
    if ( v31.startsolid )
    {
      v13 = LODWORD(vFrom.z);
      goto LABEL_7;
    }
    v13 = LODWORD(v31.endpos.z);
    if ( v31.fraction == 1.0 || (vFrom.z - v31.endpos.z) >= 35.5 )
      break;
LABEL_7:
    LODWORD(vTo.z) = v13.m128_i32[0];
    v14 = _mm_unpacklo_ps(v13, v13);
    v15 = _mm_cvtps_pd(v14);
    v14.m128_f32[0] = v14.m128_f32[0] - vPos->z;
    v15.m128d_f64[0] = v15.m128d_f64[0] + 35.5 + 0.001;
    vFrom.z = _mm_movedup_pd(v15).m128d_f64[0];
    if ( v14.m128_f32[0] >= 100.0 )
      goto LABEL_11;
    (*(this->m_pPhysicsInterface->_vptr_INavPhysicsInterface + 1))(
      this->m_pPhysicsInterface,
      &vFrom,
      &vTo,
      CNavConfig::ms_TraceMaskSolidBrushOnly,
      this->m_pTraceFilterGroundEntities,
      &v31);
  }
  *pHeightOut = v31.endpos.z;
  if ( pNormalOut != 0 )
  {
    x = v31.plane.normal.x;
    if ( v31.plane.normal.x <= -0.0099999998
      || v31.plane.normal.x >= 0.0099999998
      || (y = v31.plane.normal.y, v31.plane.normal.y <= -0.0099999998)
      || v31.plane.normal.y >= 0.0099999998 )
    {
      z = v31.plane.normal.z;
      y = v31.plane.normal.y;
    }
    else
    {
      z = v31.plane.normal.z;
      if ( v31.plane.normal.z > -0.0099999998 && v31.plane.normal.z < 0.0099999998 )
      {
        y = 0.0;
        z = 1.0;
        x = 0.0;
      }
    }
    pNormalOut->x = x;
    pNormalOut->y = y;
    pNormalOut->z = z;
    result = 1;
  }
  else
  {
    result = 1;
  }
LABEL_14:
  if ( VProf_1440 )
  {
    v28 = result;
    CVProfile::ExitScope(&g_VProfCurrentProfile);
    return v28;
  }
  return result;
}


// CNavMesh::FindGroundForNode  (line 1477, @0x00000000031f4fb0, libserver.so)  // inlines: CGameTrace, RnCollisionAttr_t, Vector, operator=
// calls: CGameTrace::Init
// callers: CNavEditor::CommandNavMarkWalkable, CNavGenerator::AddWalkableSeedsFromMarkup, CNavGenerator::AddWalkableSeeds, CNavGenerator::AddWalkableSeedsForMarkup, CNavGeneratorAAQuad::SimplifySelectedAreas
bool __fastcall CNavMesh::FindGroundForNode(CNavMesh *const this, Vector *vPos, Vector *vNormal)
{
  __int64 v6; // rax
  float z; // xmm1_4
  CTraceFilter *m_pTraceFilterWalkableEntities; // rcx
  INavPhysicsInterface *m_pPhysicsInterface; // rdi
  bool startsolid; // al
  Vector vStart; // [rsp+10h] [rbp-F0h] BYREF
  Vector vEnd; // [rsp+20h] [rbp-E0h] BYREF
  trace_t tr; // [rsp+30h] [rbp-D0h] BYREF

  memset(&tr.m_ShapeAttributes, 0, 31);
  tr.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
  CGameTrace::Init(&tr);
  v6 = *&vPos->x;
  z = vPos->z;
  vStart.y = vPos->y;
  m_pTraceFilterWalkableEntities = this->m_pTraceFilterWalkableEntities;
  *&vEnd.x = v6;
  m_pPhysicsInterface = this->m_pPhysicsInterface;
  vStart.x = vPos->x;
  vEnd.z = z - 400.0;
  vStart.z = (z + 55.0) - 0.1;
  (*(m_pPhysicsInterface->_vptr_INavPhysicsInterface + 3))(
    m_pPhysicsInterface,
    &vStart,
    &vEnd,
    &NavTraceMins,
    &NavTraceMaxs,
    CNavConfig::ms_TraceMaskSolidBrushOnly,
    m_pTraceFilterWalkableEntities,
    &tr);
  startsolid = tr.startsolid;
  *vPos = tr.endpos;
  *vNormal = tr.plane.normal;
  return !startsolid;
}


// CNavMesh::GetSimpleGroundHeight  (line 1498, @0x00000000031f5110, libserver.so)  // inlines: CGameTrace, RnCollisionAttr_t, operator=
// calls: CGameTrace::Init
// callers: CNavGenerator::MarkJumpAreas, CNavArea::ComputeGroundHeightChange
bool __fastcall CNavMesh::GetSimpleGroundHeight(
        const CNavMesh *const this,
        const Vector *const vPos,
        float *pHeightOut,
        Vector *pNormalOut)
{
  vec_t x; // xmm0_4
  float z; // xmm0_4
  bool result; // al
  Vector vTo; // [rsp+10h] [rbp-F0h] BYREF
  trace_t v12; // [rsp+20h] [rbp-E0h] BYREF

  x = vPos->x;
  memset(&v12.m_ShapeAttributes, 0, 31);
  vTo.x = x;
  vTo.y = vPos->y;
  z = vPos->z;
  v12.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
  vTo.z = z - 9999.9004;
  CGameTrace::Init(&v12);
  (*this->m_pPhysicsInterface->_vptr_INavPhysicsInterface)(
    this->m_pPhysicsInterface,
    vPos,
    &vTo,
    CNavConfig::ms_TraceMaskSolidBrushOnly,
    0,
    4,
    &v12);
  result = 0;
  if ( !v12.startsolid )
  {
    *pHeightOut = v12.endpos.z;
    if ( pNormalOut != 0 )
    {
      result = 1;
      *pNormalOut = v12.plane.normal;
    }
    else
    {
      return 1;
    }
  }
  return result;
}


// CNavMesh::Validate  (line 1528, @0x00000000031f2a50, libserver.so)
void __fastcall CNavMesh::Validate(const CNavMesh *const this)
{
  int m_Size; // eax
  unsigned __int64 v3; // rbx
  __int64 v4; // r12
  CNavArea *v5; // rdi

  m_Size = this->m_NavAreas.m_Size;
  if ( m_Size != 0 )
  {
    v3 = 0;
    v4 = 8LL * (m_Size - 1) + 8;
    do
    {
      v5 = this->m_NavAreas.m_Memory.m_pMemory[v3 / 8];
      v3 += 8LL;
      (*(v5->_vptr_CNavPoly + 4))(v5);
    }
    while ( v3 != v4 );
  }
}


// CNavMesh::DestroyLadders  (line 1540, @0x00000000031f5240, libserver.so)  // inlines: RemoveAll
// calls: CNavLadder::~CNavLadder, operator delete
// callers: CNavGenerator::BuildLadders, CNavGenerator::BeginGeneration, CNavMesh::DestroyNavigationMesh
void __fastcall CNavMesh::DestroyLadders(CNavMesh *const this)
{
  int v1; // r14d
  __int64 i; // r12
  CNavLadder **m_pMemory; // rax
  CNavLadder *v5; // r13
  INavEditor *m_pEditor; // rdi

  v1 = 0;
  for ( i = 0; this->m_Ladders.m_Size > v1; ++i )
  {
    (*(this->_vptr_CNavMesh + 26))(this, this->m_Ladders.m_Memory.m_pMemory[i]);
    m_pMemory = this->m_Ladders.m_Memory.m_pMemory;
    v5 = m_pMemory[i];
    if ( v5 != 0 )
    {
      CNavLadder::~CNavLadder(m_pMemory[i]);
      operator delete(v5);
    }
    ++v1;
  }
  this->m_Ladders.m_Size = 0;
  m_pEditor = this->m_pEditor;
  if ( m_pEditor != 0 )
    (*(m_pEditor->_vptr_INavEditor + 6))(m_pEditor);
}


// CNavMesh::StripNavigationAreas  (line 1558, @0x00000000031f2aa0, libserver.so)
void __fastcall CNavMesh::StripNavigationAreas(CNavMesh *const this)
{
  this->m_bIsAnalyzed = 0;
}


// CNavMesh::TestRayToMesh  (line 1689, @0x00000000031f52e0, libserver.so)  // inlines: Count, GetVert, GetVertIndexCCWForEdge, Init, IntersectSegmentWithSegment, IsOverlappingPoint, Min<float>, Ray2D_t, Ray_t, Vector2D, VectorAdd, VectorMultiply, VectorSubtract, operator(), operator*, operator+, operator-, operator=
// calls: CNavMesh::GetNavArea, CNavPoly::IntersectRayWithPolyEdge2D, IntersectRayWithRay, CNavArea::ClipRayToAreaInterior, CNavPoly::GetClosestPointOnPoly, CNavPoly::IsOverlappingPoint, Warning, std::__throw_bad_function_call(void)
// callers: CPathOptimizerNavmesh::FindNextOccludedNode, CNavEditor::CommandNavTestTestRayToMesh, CPathFollowerDirect::DirectChase, CNavScript::Script_TestRayToMesh
// strings: "CNavMesh::TestRayToMesh error.  Ray did not exit nav area.\n"
_BOOL8 __fastcall CNavMesh::TestRayToMesh(
        const CNavMesh *const this,
        const Vector2D *vStart,
        const Vector2D *vEnd,
        __int64 a4,
        CNavTraceResult *pTraceResultOut,
        FuncNavAreaTransition_t *pFuncTransition,
        float a7,
        __m128 a8,
        __m128 flBeneathLimit,
        float flAboveLimit)
{
  __m128 v11; // xmm5
  __m128 v12; // xmm1
  __m128 v17; // xmm4
  __m128 v18; // xmm1
  CNavArea *NavArea; // rax
  NavEdgeIndex v20; // al
  float v21; // xmm1_4
  CUtlVectorUltraConservative<CNavConnect,CUtlVectorUltraConservativeAllocator>::Data_t *m_pData; // rdx
  CNavConnectVector *v23; // r12
  int v24; // ebx
  CUtlVectorUltraConservative<CNavConnect,CUtlVectorUltraConservativeAllocator>::Data_t *v25; // rax
  __int64 m_nBackEdge; // rcx
  const CNavArea *m_pArea; // r13
  float *v28; // rax
  float v29; // xmm3_4
  float v30; // xmm2_4
  float *v31; // rax
  float v32; // xmm1_4
  float v33; // xmm0_4
  bool v34; // al
  __m128 v35; // xmm3
  float x; // xmm5_4
  float v37; // xmm2_4
  float v38; // xmm0_4
  vec_t v39; // xmm0_4
  float v40; // xmm2_4
  vec_t v41; // xmm0_4
  vec_t v42; // xmm0_4
  vec_t v44; // xmm0_4
  vec_t v45; // xmm2_4
  vec_t v46; // xmm0_4
  CNavTraceResult *v47; // rax
  CNavTraceResult *v48; // rsi
  vec_t v49; // xmm0_4
  vec_t v50; // xmm1_4
  __int64 v51; // xmm0_8
  vec_t z; // xmm1_4
  CNavArea *pEndArea; // [rsp+18h] [rbp-C8h]
  bool IsOverlappingPoint; // [rsp+27h] [rbp-B9h]
  const CNavArea *pCurrentArea; // [rsp+28h] [rbp-B8h]
  int v59; // [rsp+30h] [rbp-B0h]
  int m_Size; // [rsp+34h] [rbp-ACh]
  float v61; // [rsp+50h] [rbp-90h]
  float y; // [rsp+54h] [rbp-8Ch]
  unsigned __int32 flAboveLimita; // [rsp+58h] [rbp-88h]
  float flAboveLimitb; // [rsp+58h] [rbp-88h]
  float flBeneathLimita; // [rsp+5Ch] [rbp-84h]
  vec_t flBeneathLimitb; // [rsp+5Ch] [rbp-84h]
  bool flBeneathLimitc; // [rsp+5Ch] [rbp-84h]
  NavHull_t navHulla; // [rsp+60h] [rbp-80h]
  float flRayT; // [rsp+78h] [rbp-68h] BYREF
  float flClipT; // [rsp+7Ch] [rbp-64h] BYREF
  Vector vClipNormal; // [rsp+80h] [rbp-60h] BYREF
  Vector vClippedPos; // [rsp+90h] [rbp-50h] BYREF
  float v73; // [rsp+9Ch] [rbp-44h]
  Vector vClippedOnPoly; // [rsp+A0h] [rbp-40h] BYREF
  float v75; // [rsp+ACh] [rbp-34h]
  Vector v77; // 0:kr00_12.12
  Vector v78; // 0:kr20_12.12
  Vector ClosestPointOnPoly; // 0:kr34_12.12
  NavHull_t v80; // 0:kr40_12.12

  v11.m128_i32[0] = 0;
  v12 = _mm_cmpge_ss(flBeneathLimit, v11);
  *&navHulla.m_hullCategory = a4;
  navHulla.m_flHullHeight = a7;
  v17 = _mm_or_ps(_mm_andnot_ps(v12, 0x41900000u), _mm_and_ps(flBeneathLimit, v12));
  v11.m128_i32[0] = 0;
  v18 = _mm_cmpge_ss(a8, v11);
  flAboveLimita = v17.m128_i32[0];
  LODWORD(flBeneathLimita) = COERCE_UNSIGNED_INT(_mm_andnot_ps(v18, 0x42F00000u).m128_f32[0])
                           | a8.m128_i32[0] & v18.m128_i32[0];
  *&v80.m_hullCategory = a4;
  v80.m_flHullHeight = a7;
  NavArea = CNavMesh::GetNavArea(this, vStart, v80, 2, 0, flBeneathLimita, v17);
  pCurrentArea = NavArea;
  if ( pTraceResultOut != 0 )
  {
    pTraceResultOut->m_flEndT = 0.0;
    pTraceResultOut->m_vEndPos.x = vStart->x;
    pTraceResultOut->m_vEndPos.y = vStart->y;
    pTraceResultOut->m_vEndPos.z = vStart[1].x;
    pTraceResultOut->m_vExitNormal = vec3_invalid;
  }
  if ( NavArea == 0 )
    return 0;
  v59 = 100;
  pEndArea = CNavMesh::GetNavArea(this, vEnd, navHulla, 2, 0, flBeneathLimita, flAboveLimita);
  flBeneathLimitb = vStart->x;
  y = vStart->y;
  flAboveLimitb = vEnd->x - vStart->x;
  v61 = vEnd->y - y;
LABEL_5:
  IsOverlappingPoint = pEndArea != 0 && pCurrentArea == pEndArea;
  if ( IsOverlappingPoint )
  {
    if ( pTraceResultOut != 0 )
    {
      ClosestPointOnPoly = CNavPoly::GetClosestPointOnPoly(pEndArea, vEnd);
      v51 = *&ClosestPointOnPoly.x;
      z = ClosestPointOnPoly.z;
      v48 = pTraceResultOut;
      *&vClippedOnPoly.x = *&ClosestPointOnPoly.x;
      v47 = pTraceResultOut;
      pTraceResultOut->m_flEndT = 1.0;
      goto LABEL_35;
    }
    return 1;
  }
  vClippedOnPoly.x = flBeneathLimitb;
  vClippedOnPoly.y = y;
  flRayT = 3.4028235e38;
  vClippedOnPoly.z = flAboveLimitb;
  v75 = v61;
  v20 = CNavPoly::IntersectRayWithPolyEdge2D(pCurrentArea, &vClippedOnPoly, 0, &flRayT);
  if ( flRayT <= 0.99988079 && v20 != -1 )
  {
    m_pData = pCurrentArea->m_connect[v20].m_pData;
    if ( m_pData == 0 || (m_Size = m_pData->m_Size, m_pData->m_Size <= 0) )
    {
LABEL_24:
      if ( pTraceResultOut != 0 )
      {
        CNavArea::ClipRayToAreaInterior(pCurrentArea, vStart, vEnd, &flClipT, &vClipNormal);
        v35 = _mm_cmplt_ss(LODWORD(flClipT), 0x3F800000u);
        x = vStart->x;
        v37 = vStart[1].x;
        v35.m128_i32[0] = COERCE_UNSIGNED_INT(_mm_andnot_ps(v35, 0x3F800000u).m128_f32[0])
                        | LODWORD(flClipT) & v35.m128_i32[0];
        v38 = vEnd[1].x;
        vClippedPos.y = ((vEnd->y - vStart->y) * v35.m128_f32[0]) + vStart->y;
        v39 = ((v38 - v37) * v35.m128_f32[0]) + v37;
        v40 = vEnd->x;
        vClippedPos.z = v39;
        vClippedPos.x = ((v40 - x) * v35.m128_f32[0]) + x;
        v77 = CNavPoly::GetClosestPointOnPoly(pCurrentArea, &vClippedPos);
        *&vClippedOnPoly.x = *&v77.x;
        pTraceResultOut->m_vEndPos.x = v77.x;
        v41 = vClippedOnPoly.y;
        pTraceResultOut->m_vEndPos.z = v77.z;
        pTraceResultOut->m_vEndPos.y = v41;
        if ( flClipT < 1.0 )
        {
          pTraceResultOut->m_flEndT = flClipT;
          pTraceResultOut->m_vExitNormal = vClipNormal;
        }
        else
        {
          v42 = vec3_invalid.x;
          pTraceResultOut->m_flEndT = 1.0;
          pTraceResultOut->m_vExitNormal.x = v42;
          pTraceResultOut->m_vExitNormal.y = vec3_invalid.y;
          pTraceResultOut->m_vExitNormal.z = vec3_invalid.z;
        }
      }
      return IsOverlappingPoint;
    }
    v23 = &pCurrentArea->m_connect[v20];
    v24 = 0;
    while ( 1 )
    {
      v25 = m_pData + 2 * v24;
      m_nBackEdge = v25->m_Elements[0].m_nBackEdge;
      m_pArea = v25->m_Elements[0].m_pArea;
      v28 = (m_pArea + 12 * ((m_nBackEdge + 1) % m_pArea->m_nVerts));
      v29 = v28[2];
      v30 = v28[3];
      v31 = (m_pArea + 12 * m_nBackEdge);
      v32 = v31[2];
      v33 = v31[3];
      vClippedPos.x = v29;
      vClippedPos.y = v30;
      vClippedOnPoly.x = flBeneathLimitb;
      vClippedOnPoly.y = y;
      vClippedPos.z = v32 - v29;
      v73 = v33 - v30;
      vClippedOnPoly.z = flAboveLimitb;
      v75 = v61;
      v34 = IntersectRayWithRay(&vClippedOnPoly, &vClippedPos, &flClipT, &vClipNormal.x);
      if ( v34 )
      {
        if ( flClipT < 0.0 || flClipT > 1.0 || vClipNormal.x < 0.0 || vClipNormal.x > 1.0 )
        {
          if ( flClipT > 1.0 )
          {
            if ( pTraceResultOut != 0 )
            {
              flBeneathLimitc = v34;
              LODWORD(v50) = COERCE_UNSIGNED_INT(CNavPoly::GetClosestPointOnPoly(pCurrentArea, vEnd).z);
              v44 = vEnd->x;
              v45 = vEnd->y;
              pTraceResultOut->m_flEndT = 1.0;
              pTraceResultOut->m_vEndPos.x = v44;
              v34 = flBeneathLimitc;
              v46 = vec3_invalid.x;
              pTraceResultOut->m_vEndPos.y = v45;
              pTraceResultOut->m_vEndPos.z = v50;
              pTraceResultOut->m_vExitNormal.x = v46;
              pTraceResultOut->m_vExitNormal.y = vec3_invalid.y;
              pTraceResultOut->m_vExitNormal.z = vec3_invalid.z;
            }
            return v34;
          }
        }
        else
        {
          if ( pFuncTransition == 0 )
            goto LABEL_22;
          if ( pFuncTransition->_M_manager == 0 )
            std::__throw_bad_function_call();
          if ( pFuncTransition->_M_invoker(pFuncTransition, pCurrentArea, m_pArea) )
          {
LABEL_22:
            if ( --v59 == 0 )
              return 0;
            pCurrentArea = m_pArea;
            goto LABEL_5;
          }
        }
      }
      if ( ++v24 == m_Size )
        goto LABEL_24;
      m_pData = v23->m_pData;
    }
  }
  IsOverlappingPoint = CNavPoly::IsOverlappingPoint(pCurrentArea, vEnd, v21);
  if ( IsOverlappingPoint )
  {
    if ( pTraceResultOut != 0 )
    {
      v78 = CNavPoly::GetClosestPointOnPoly(pCurrentArea, vEnd);
      v51 = *&v78.x;
      z = v78.z;
      v47 = pTraceResultOut;
      pTraceResultOut->m_flEndT = 1.0;
      *&vClippedOnPoly.x = *&v78.x;
      v48 = pTraceResultOut;
LABEL_35:
      LODWORD(v47->m_vEndPos.x) = v51;
      v49 = vClippedOnPoly.y;
      v47->m_vEndPos.z = z;
      v47->m_vEndPos.y = v49;
      v48->m_vExitNormal = vec3_invalid;
      return IsOverlappingPoint;
    }
    return 1;
  }
  Warning("CNavMesh::TestRayToMesh error.  Ray did not exit nav area.\n");
  return IsOverlappingPoint;
}


// CNavMesh::ShiftMesh  (line 1854, @0x00000000031f59d0, libserver.so)
// calls: CNavArea::ShiftAreaAndLadders
// callers: CNavGameSystem::LoadNavForSpawnGroup
void __fastcall CNavMesh::ShiftMesh(CNavMesh *const this, const Vector *const vOffset)
{
  int m_Size; // eax
  unsigned __int64 v5; // rbx
  __int64 v6; // r13
  CNavArea *v7; // rdi

  m_Size = this->m_NavAreas.m_Size;
  if ( m_Size > 0 )
  {
    v5 = 0;
    v6 = 8LL * (m_Size - 1) + 8;
    do
    {
      v7 = this->m_NavAreas.m_Memory.m_pMemory[v5 / 8];
      v5 += 8LL;
      CNavArea::ShiftAreaAndLadders(v7, vOffset);
    }
    while ( v5 != v6 );
  }
  this->m_flGridMinX = this->m_flGridMinX + vOffset->x;
  this->m_flGridMinY = this->m_flGridMinY + vOffset->y;
}


// CNavMesh::RaiseVert  (line 1871, @0x00000000031f5a50, libserver.so)  // inlines: DistTo, FastSqrt, GetFloat, GetVert, IsMarked, Length, MakeNewMarker, Mark, VectorLength, VectorSubtract, WorldToGridX, WorldToGridY, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator[]
// calls: CNavPoly::RaiseVert, __cxa_guard_acquire, ConVarRef::ConVarRef, __cxa_guard_release, __cxa_guard_abort, _Unwind_Resume
// callers: CNavEditor::CommandNavCornerRaise, CNavEditor::CommandNavCornerLower, CNavMesh::PlaceVertOnGround
// strings: "nav_corner_adjust_adjacent"
// globals: `guard variable for'CNavMesh::RaiseVert(CNavArea &,int,float,bool)::nav_corner_adjust_adjacent, CNavMesh::RaiseVert(CNavArea &,int,float,bool)::nav_corner_adjust_adjacent
void __fastcall CNavMesh::RaiseVert(
        CNavMesh *const this,
        CNavArea *const rArea,
        int nVert,
        float flZDelta,
        bool bRaiseForAllAreas,
        float a6)
{
  __int64 v6; // r12
  float m_fValue; // xmm7_4
  int v9; // eax
  float *v10; // rdx
  float v11; // xmm6_4
  float v12; // xmm5_4
  float v13; // xmm4_4
  float m_flGridCellSize; // xmm1_4
  int m_nGridSizeX; // edx
  int v16; // eax
  int v17; // eax
  int m_nGridSizeY; // ecx
  int v19; // eax
  int v20; // esi
  CNavArea *v21; // r15
  int v22; // esi
  int v23; // eax
  CNavArea *v24; // r14
  unsigned __int64 v25; // rbx
  CNavArea *v26; // r15
  CNavArea *v27; // r14
  float *p_x; // r12
  int v29; // r13d
  float v30; // xmm1_4
  int v31; // esi
  int v32; // eax
  int v33; // eax
  int i; // r12d
  int v36; // edx
  int v37; // ecx
  int y; // [rsp+0h] [rbp-70h]
  int v39; // [rsp+4h] [rbp-6Ch]
  int v40; // [rsp+8h] [rbp-68h]
  int x; // [rsp+Ch] [rbp-64h]
  __int64 v43; // [rsp+18h] [rbp-58h]
  CUtlVector<CNavArea*,CUtlMemory<CNavArea*,int> > *v44; // [rsp+20h] [rbp-50h]
  int y_0; // [rsp+28h] [rbp-48h]
  float v47; // [rsp+30h] [rbp-40h]
  float v48; // [rsp+34h] [rbp-3Ch]
  float v49; // [rsp+38h] [rbp-38h]
  float v50; // [rsp+3Ch] [rbp-34h]

  v6 = nVert;
  if ( nVert < 0 )
  {
    for ( i = 0; rArea->m_nVerts > i; ++i )
    {
      v36 = i;
      CNavMesh::RaiseVert(this, rArea, v36, flZDelta, bRaiseForAllAreas);
    }
  }
  else if ( bRaiseForAllAreas )
  {
    if ( `guard variable for'CNavMesh::RaiseVert(CNavArea &,int,float,bool)::nav_corner_adjust_adjacent == 0
      && __cxa_guard_acquire(&`guard variable for'CNavMesh::RaiseVert(CNavArea &,int,float,bool)::nav_corner_adjust_adjacent) != 0 )
    {
      ConVarRef::ConVarRef(
        &CNavMesh::RaiseVert(CNavArea &,int,float,bool)::nav_corner_adjust_adjacent,
        "nav_corner_adjust_adjacent");
      __cxa_guard_release(&`guard variable for'CNavMesh::RaiseVert(CNavArea &,int,float,bool)::nav_corner_adjust_adjacent);
    }
    m_fValue = CNavMesh::RaiseVert(CNavArea &,int,float,bool)::nav_corner_adjust_adjacent.m_pConVarState->m_Value.m_fValue;
    ++CNavArea::ms_nMasterMarker;
    v9 = 1;
    if ( CNavArea::ms_nMasterMarker != 0 )
      v9 = CNavArea::ms_nMasterMarker;
    CNavArea::ms_nMasterMarker = v9;
    v10 = (rArea + 12 * v6);
    v11 = v10[2];
    v12 = v10[3];
    v13 = v10[4];
    m_flGridCellSize = this->m_flGridCellSize;
    m_nGridSizeX = this->m_nGridSizeX;
    v16 = ((v11 - this->m_flGridMinX) / m_flGridCellSize);
    if ( v16 < 0 )
    {
      v39 = 1;
      x = 0;
    }
    else if ( m_nGridSizeX > v16 )
    {
      v37 = v16 - 1;
      if ( v16 - 1 < 0 )
        v37 = 0;
      v39 = v16 + 1;
      x = v37;
    }
    else
    {
      v39 = this->m_nGridSizeX;
      v17 = m_nGridSizeX - 2;
      if ( m_nGridSizeX - 2 < 0 )
        v17 = 0;
      x = v17;
    }
    m_nGridSizeY = this->m_nGridSizeY;
    v19 = ((v12 - this->m_flGridMinY) / m_flGridCellSize);
    if ( v19 < 0 )
    {
      v19 = 0;
    }
    else if ( m_nGridSizeY <= v19 )
    {
      v19 = m_nGridSizeY - 1;
    }
    v20 = v39;
    if ( v39 > m_nGridSizeX )
      v20 = this->m_nGridSizeX;
    if ( v20 >= x )
    {
      v21 = rArea;
      v22 = 0;
      if ( v19 - 1 >= 0 )
        v22 = v19 - 1;
      v40 = v19 + 1;
      v23 = this->m_nGridSizeY;
      y = v22;
      while ( 1 )
      {
        if ( v23 > v40 )
          v23 = v40;
        if ( v23 >= y )
        {
          y_0 = y;
          v24 = v21;
          do
          {
            v44 = &this->m_Grid.m_Memory.m_pMemory[x + m_nGridSizeX * y_0];
            if ( v44->m_Size != 0 )
            {
              v25 = 0;
              v26 = v24;
              v43 = 8LL * (v44->m_Size - 1) + 8;
              do
              {
                v27 = v44->m_Memory.m_pMemory[v25 / 8];
                if ( v27->m_nMarker != CNavArea::ms_nMasterMarker )
                {
                  v27->m_nMarker = CNavArea::ms_nMasterMarker;
                  if ( v26->m_nVerts > 0 )
                  {
                    p_x = &v27->m_vVerts[0].x;
                    v29 = 0;
                    do
                    {
                      while ( 1 )
                      {
                        v30 = (p_x[1] - v12) * (p_x[1] - v12);
                        if ( m_fValue > fsqrt((((*p_x - v11) * (*p_x - v11)) + v30) + ((p_x[2] - v13) * (p_x[2] - v13))) )
                          break;
                        ++v29;
                        p_x += 3;
                        if ( v26->m_nVerts <= v29 )
                          goto LABEL_32;
                      }
                      v31 = v29++;
                      v47 = m_fValue;
                      p_x += 3;
                      v48 = v11;
                      v49 = v12;
                      v50 = v13;
                      CNavPoly::RaiseVert(v27, v31, v30);
                      m_fValue = v47;
                      v11 = v48;
                      v12 = v49;
                      v13 = v50;
                    }
                    while ( v26->m_nVerts > v29 );
                  }
                }
LABEL_32:
                v25 += 8LL;
              }
              while ( v25 != v43 );
              v24 = v26;
              m_nGridSizeX = this->m_nGridSizeX;
            }
            ++y_0;
            v32 = this->m_nGridSizeY;
            if ( v40 <= v32 )
              v32 = v40;
          }
          while ( y_0 <= v32 );
          v21 = v24;
        }
        v33 = v39;
        ++x;
        if ( m_nGridSizeX <= v39 )
          v33 = m_nGridSizeX;
        if ( x > v33 )
          break;
        v23 = this->m_nGridSizeY;
      }
    }
  }
  else
  {
    CNavPoly::RaiseVert(rArea, nVert, a6);
  }
}


// FindGroundZFromPoint  (line 1939, @0x00000000031f5e10, libserver.so)  // inlines: DistTo, FastSqrt, Length, Vector, Vector2DLength, Vector2DSubtract, VectorAdd, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator+, operator=
// calls: CNavMesh::GetGroundHeight
// callers: FindGroundZ
// globals: TheNavMesh
float __fastcall FindGroundZFromPoint(const Vector *const vEnd, const Vector *const vStart)
{
  float x; // xmm5_4
  float y; // xmm4_4
  float v5; // xmm3_4
  float v6; // xmm7_4
  float v7; // xmm6_4
  float v9; // [rsp+4h] [rbp-4Ch]
  float v10; // [rsp+8h] [rbp-48h]
  vec_t z; // [rsp+1Ch] [rbp-34h] BYREF
  Vector vPoint; // [rsp+20h] [rbp-30h] BYREF

  x = vEnd->x;
  y = vEnd->y;
  v5 = vStart->y;
  v6 = CNavGeneratorBase::sm_flGenerationStepSize;
  if ( fabs(vEnd->x - vStart->x) <= fabs(y - v5) )
  {
    v9 = CNavGeneratorBase::sm_flGenerationStepSize;
    v10 = 0.0;
    if ( v5 > y )
      v9 = -CNavGeneratorBase::sm_flGenerationStepSize;
  }
  else
  {
    v10 = CNavGeneratorBase::sm_flGenerationStepSize;
    v9 = 0.0;
    if ( vStart->x > x )
      v10 = -CNavGeneratorBase::sm_flGenerationStepSize;
  }
  *&vPoint.x = *&vStart->x;
  v7 = vStart->z;
  while ( fsqrt(((vPoint.x - x) * (vPoint.x - x)) + ((vPoint.y - y) * (vPoint.y - y))) > v6 )
  {
    vPoint.z = v7 + 18.0;
    vPoint.x = vPoint.x + v10;
    vPoint.y = vPoint.y + v9;
    z = v7 + 18.0;
    if ( CNavMesh::GetGroundHeight(TheNavMesh, &vPoint, &z, 0) )
    {
      v7 = z;
      vPoint.z = z;
    }
    else
    {
      vPoint.z = vPoint.z - 18.0;
      v7 = vPoint.z;
    }
    v6 = CNavGeneratorBase::sm_flGenerationStepSize;
    x = vEnd->x;
    y = vEnd->y;
  }
  vPoint.x = x;
  vPoint.y = y;
  z = v7 + 18.0;
  vPoint.z = v7 + 18.0;
  if ( CNavMesh::GetGroundHeight(TheNavMesh, &vPoint, &z, 0) )
    return z;
  else
    return vPoint.z - 18.0;
}


// FindGroundZ  (line 1997, @0x00000000031f6040, libserver.so)
// calls: FindGroundZFromPoint
// callers: CNavMesh::PlaceVertOnGround
float __fastcall FindGroundZ(const Vector *const original, const Vector *const corner1, const Vector *const corner2)
{
  float GroundZFromPoint; // xmm0_4
  __m128 z_low; // xmm1
  float v7; // xmm2_4
  __m128 v8; // xmm2
  __m128 v9; // xmm1
  float result; // xmm0_4
  float flFirst; // [rsp+Ch] [rbp-14h]

  flFirst = FindGroundZFromPoint(original, corner1);
  GroundZFromPoint = FindGroundZFromPoint(original, corner2);
  if ( fabs(flFirst - GroundZFromPoint) <= 18.0 )
    return flFirst;
  z_low = LODWORD(original->z);
  v7 = z_low.m128_f32[0] - flFirst;
  z_low.m128_f32[0] = z_low.m128_f32[0] - GroundZFromPoint;
  v8.m128_i32[0] = fabs(v7);
  v9 = _mm_cmplt_ss(_mm_and_ps(z_low, 0x7FFFFFFFu), v8);
  LODWORD(result) = _mm_andnot_ps(v9, LODWORD(flFirst)).m128_u32[0] | LODWORD(GroundZFromPoint) & v9.m128_i32[0];
  return result;
}


// CNavMesh::PlaceVertOnGround  (line 2020, @0x00000000031f60d0, libserver.so)  // inlines: GetNextVertIndexCCW, GetNextVertIndexCW, GetZ, operator=
// calls: CNavPoly::GetVertInset, CNavPoly::GetZ, FindGroundZ, CNavMesh::RaiseVert
// callers: CNavEditor::EditCreateNavArea, CNavEditor::CommandNavCornerPlaceOnGround, CNavArea::SplitArea, CNavArea::SplitArea_Old
void __fastcall CNavMesh::PlaceVertOnGround(
        CNavMesh *const this,
        CNavArea *const rArea,
        int nVert,
        float flInset,
        float a5)
{
  int m_nVerts; // ecx
  int v9; // ebx
  int v10; // r14d
  float v11; // xmm2_4
  float GroundZ; // xmm0_4
  float v13; // xmm1_4
  int i; // ebx
  int v15; // edx
  float flOrigZa; // [rsp+Ch] [rbp-74h]
  Vector vA; // [rsp+10h] [rbp-70h] BYREF
  Vector vB; // [rsp+20h] [rbp-60h] BYREF
  Vector vC; // [rsp+30h] [rbp-50h] BYREF
  __int64 v21; // [rsp+40h] [rbp-40h]
  Vector VertInset; // 0:kr20_12.12

  if ( nVert < 0 )
  {
    for ( i = 0; rArea->m_nVerts > i; ++i )
    {
      v15 = i;
      CNavMesh::PlaceVertOnGround(this, rArea, v15, flInset);
    }
  }
  else
  {
    m_nVerts = rArea->m_nVerts;
    v9 = (nVert + 1) % m_nVerts;
    v10 = (m_nVerts + nVert - 1) % m_nVerts;
    vA = CNavPoly::GetVertInset(rArea, nVert, a5);
    vB = CNavPoly::GetVertInset(rArea, v10, vA.z);
    VertInset = CNavPoly::GetVertInset(rArea, v9, vB.z);
    v21 = *&VertInset.x;
    vC = VertInset;
    flOrigZa = CNavPoly::GetZ(rArea, vA.y, v11);
    GroundZ = FindGroundZ(&vA, &vB, &vC);
    CNavMesh::RaiseVert(this, rArea, nVert, GroundZ - flOrigZa, 1, v13);
  }
}


// CNavMesh::FindNavAreaOrLadderAlongRay  (line 2049, @0x00000000031f6230, libserver.so)  // inlines: CanSupportHull, Encompass, Extent, Init, LengthSqr, Ray_t, Vector, VectorAdd, VectorAligned, VectorSubtract, WorldToGridX, WorldToGridY, operator*=, operator+, operator=, operator[]
// calls: VectorVectors, IntersectRayWithTriangle, CNavPoly::IntersectRayWithPoly
// callers: CNavEditor::DoSelectionTrace, TestOverlapping::OverlapsExistingArea
bool __fastcall CNavMesh::FindNavAreaOrLadderAlongRay(
        const CNavMesh *const this,
        const Vector *const vStart,
        const Vector *const vEnd,
        const NavHull_t *const rNavHull,
        int32 nFlags,
        CNavArea **pBestAreaOut,
        CNavLadder **pBestLadderOut,
        CNavArea *pIgnoreArea)
{
  bool result; // al
  CNavArea *v9; // r13
  const NavHull_t *v10; // r15
  float v11; // xmm0_4
  float v12; // xmm2_4
  float z; // xmm1_4
  float v14; // xmm7_4
  float v15; // xmm6_4
  float v16; // xmm5_4
  float v17; // xmm4_4
  float v18; // xmm3_4
  float v19; // xmm2_4
  float v20; // xmm0_4
  float v21; // xmm1_4
  int m_Size; // edx
  __int64 v23; // r12
  int v24; // ebx
  CNavLadder *v26; // r15
  float v27; // xmm0_4
  vec_t v28; // xmm4_4
  vec_t v29; // xmm3_4
  vec_t v30; // xmm4_4
  vec_t v31; // xmm3_4
  float v32; // xmm5_4
  float v33; // xmm4_4
  float v34; // xmm3_4
  float v35; // xmm0_4
  float v36; // xmm0_4
  vec_t v37; // xmm0_4
  vec_t v38; // xmm2_4
  float v39; // xmm0_4
  float v40; // xmm0_4
  float v41; // xmm0_4
  float m_flGridMinX; // xmm3_4
  float m_flGridCellSize; // xmm1_4
  int m_nGridSizeX; // edx
  int v45; // eax
  float m_flGridMinY; // xmm2_4
  int m_nGridSizeY; // eax
  int v48; // edi
  int v49; // ecx
  int v50; // esi
  int v51; // ecx
  int v52; // edi
  int v53; // edx
  CNavArea *v54; // r14
  Vector *v55; // r13
  int v56; // eax
  Vector *v57; // rdx
  unsigned __int64 v58; // r14
  __int64 v59; // r13
  const NavHull_t *v60; // r12
  CUtlVector<CNavArea*,CUtlMemory<CNavArea*,int> > *v61; // r15
  CNavArea *v62; // rbx
  float v63; // xmm0_4
  int xa; // [rsp+18h] [rbp-148h]
  int vEndb; // [rsp+20h] [rbp-140h]
  int up; // [rsp+38h] [rbp-128h]
  char nFlagsa; // [rsp+40h] [rbp-120h]
  float flBestDist; // [rsp+44h] [rbp-11Ch]
  int y; // [rsp+48h] [rbp-118h]
  int x_0; // [rsp+50h] [rbp-110h]
  Vector *v3; // [rsp+68h] [rbp-F8h]
  Vector vRight; // [rsp+70h] [rbp-F0h] BYREF
  Vector vUp; // [rsp+80h] [rbp-E0h] BYREF
  Vector c1; // [rsp+90h] [rbp-D0h] BYREF
  Vector c2; // [rsp+A0h] [rbp-C0h] BYREF
  Vector c3; // [rsp+B0h] [rbp-B0h] BYREF
  Vector c4; // [rsp+C0h] [rbp-A0h] BYREF
  float v83; // [rsp+CCh] [rbp-94h]
  float v84; // [rsp+D0h] [rbp-90h]
  float v85; // [rsp+D4h] [rbp-8Ch]
  Ray_t ray; // [rsp+E0h] [rbp-80h] BYREF

  result = 0;
  v9 = pIgnoreArea;
  nFlagsa = nFlags;
  if ( this->m_Grid.m_Size != 0 )
  {
    v10 = rNavHull;
    v11 = vEnd->x;
    ray.m_Start.w = 0.0;
    v12 = vEnd->y;
    ray.m_Delta.w = 0.0;
    z = vEnd->z;
    ray.m_StartOffset.w = 0.0;
    v14 = vStart->x;
    ray.m_Extents.w = 0.0;
    v15 = vStart->y;
    ray.m_flRadius = 0.0;
    v16 = vStart->z;
    ray.m_Delta.x = v11 - v14;
    ray.m_Delta.y = v12 - v15;
    ray.m_Delta.z = z - v16;
    ray.m_IsSwept = (((ray.m_Delta.x * ray.m_Delta.x) + (ray.m_Delta.y * ray.m_Delta.y))
                   + (ray.m_Delta.z * ray.m_Delta.z)) != 0.0;
    v17 = vec3_origin.y;
    v18 = vec3_origin.z;
    ray.m_Extents.x = (vec3_origin.x - vec3_origin.x) * 0.5;
    ray.m_Extents.y = (v17 - v17) * 0.5;
    ray.m_Extents.z = (v18 - v18) * 0.5;
    v19 = (vec3_origin.x + vec3_origin.x) * 0.5;
    ray.m_IsRay = (((ray.m_Extents.x * ray.m_Extents.x) + (ray.m_Extents.y * ray.m_Extents.y))
                 + (ray.m_Extents.z * ray.m_Extents.z)) < 0.000001;
    v20 = (v18 + v18) * 0.5;
    v21 = (v17 + v17) * 0.5;
    ray.m_Start.x = v14 + v19;
    ray.m_Start.y = v15 + v21;
    ray.m_Start.z = v16 + v20;
    *pBestAreaOut = 0;
    ray.m_StartOffset.x = -v19;
    ray.m_StartOffset.y = -v21;
    *pBestLadderOut = 0;
    m_Size = this->m_Ladders.m_Size;
    ray.m_StartOffset.z = -v20;
    if ( m_Size <= 0 )
    {
      flBestDist = 1.0;
    }
    else
    {
      v23 = 0;
      v24 = 0;
      flBestDist = 1.0;
      do
      {
        v26 = this->m_Ladders.m_Memory.m_pMemory[v23];
        vRight.x = 0.0;
        vRight.y = 0.0;
        vRight.z = 0.0;
        vUp.x = 0.0;
        vUp.y = 0.0;
        vUp.z = 0.0;
        VectorVectors(&v26->m_vNormal, &vRight, &vUp);
        v27 = 0.5 * v26->m_flWidth;
        vRight.x = vRight.x * v27;
        vRight.y = vRight.y * v27;
        vRight.z = v27 * vRight.z;
        v28 = v26->m_vTop.y + vRight.y;
        v29 = v26->m_vTop.z + vRight.z;
        c1.x = v26->m_vTop.x + vRight.x;
        c1.y = v28;
        c1.z = v29;
        v30 = v26->m_vTop.y - vRight.y;
        v31 = v26->m_vTop.z - vRight.z;
        c2.x = v26->m_vTop.x - vRight.x;
        v32 = v26->m_vBottom.x;
        c2.y = v30;
        v33 = v26->m_vBottom.y;
        c2.z = v31;
        v34 = v26->m_vBottom.z;
        c3.x = vRight.x + v32;
        c4.x = v32 - vRight.x;
        c3.y = vRight.y + v33;
        c4.y = v33 - vRight.y;
        c3.z = vRight.z + v34;
        c4.z = v34 - vRight.z;
        v35 = IntersectRayWithTriangle(&ray, &c1, &c2, &c4, 0);
        if ( v35 > 0.0 && flBestDist > v35 )
        {
          flBestDist = v35;
          *pBestLadderOut = v26;
        }
        v36 = IntersectRayWithTriangle(&ray, &c1, &c4, &c3, 0);
        if ( v36 > 0.0 && flBestDist > v36 )
        {
          flBestDist = v36;
          *pBestLadderOut = v26;
        }
        ++v24;
        ++v23;
      }
      while ( this->m_Ladders.m_Size > v24 );
      v10 = rNavHull;
      v9 = pIgnoreArea;
    }
    v37 = vStart->z;
    v38 = vStart->y;
    c4.x = vStart->x;
    c4.z = v37;
    v85 = v37;
    c4.y = v38;
    v83 = c4.x;
    v39 = vEnd->x;
    v84 = v38;
    if ( c4.x > v39 )
      c4.x = v39;
    if ( v39 > v83 )
      v83 = v39;
    v40 = vEnd->y;
    if ( c4.y > v40 )
      c4.y = vEnd->y;
    if ( v40 > v84 )
      v84 = v40;
    v41 = vEnd->z;
    if ( c4.z > v41 )
      c4.z = vEnd->z;
    if ( v41 > v85 )
      v85 = v41;
    m_flGridMinX = this->m_flGridMinX;
    m_flGridCellSize = this->m_flGridCellSize;
    m_nGridSizeX = this->m_nGridSizeX;
    if ( ((c4.x - m_flGridMinX) / m_flGridCellSize) < 0 )
    {
      xa = 0;
    }
    else
    {
      v45 = m_nGridSizeX - 1;
      if ( m_nGridSizeX > ((c4.x - m_flGridMinX) / m_flGridCellSize) )
        v45 = ((c4.x - m_flGridMinX) / m_flGridCellSize);
      xa = v45;
    }
    m_flGridMinY = this->m_flGridMinY;
    m_nGridSizeY = this->m_nGridSizeY;
    v48 = ((c4.y - m_flGridMinY) / m_flGridCellSize);
    if ( v48 < 0 )
    {
      y = 0;
    }
    else
    {
      v49 = m_nGridSizeY - 1;
      if ( m_nGridSizeY > v48 )
        v49 = ((c4.y - m_flGridMinY) / m_flGridCellSize);
      y = v49;
    }
    v50 = ((v83 - m_flGridMinX) / m_flGridCellSize);
    if ( v50 < 0 )
    {
      up = 0;
    }
    else
    {
      v51 = m_nGridSizeX - 1;
      if ( m_nGridSizeX > v50 )
        v51 = ((v83 - m_flGridMinX) / m_flGridCellSize);
      up = v51;
    }
    v52 = ((v84 - m_flGridMinY) / m_flGridCellSize);
    if ( v52 < 0 )
    {
      vEndb = 0;
    }
    else
    {
      v53 = m_nGridSizeY - 1;
      if ( m_nGridSizeY > v52 )
        v53 = ((v84 - m_flGridMinY) / m_flGridCellSize);
      vEndb = v53;
    }
    if ( y <= vEndb )
    {
      v54 = v9;
      do
      {
        if ( xa <= up )
        {
          x_0 = xa;
          v55 = v54;
          do
          {
            v56 = this->m_Grid.m_Memory.m_pMemory[x_0 + this->m_nGridSizeX * y].m_Size;
            if ( v56 != 0 )
            {
              v57 = v55;
              v58 = 0;
              v59 = 8LL * (v56 - 1) + 8;
              v60 = v10;
              v61 = &this->m_Grid.m_Memory.m_pMemory[x_0 + this->m_nGridSizeX * y];
              do
              {
                v62 = v61->m_Memory.m_pMemory[v58 / 8];
                if ( v62 != v57
                  && (v62->m_nHullSupport & v60->m_hullCategory) != 0
                  && ((nFlagsa & 2) != 0 || v62->m_isBlockedFlags == 0) )
                {
                  v3 = v57;
                  v63 = CNavPoly::IntersectRayWithPoly(v62, &ray);
                  v57 = v3;
                  if ( v63 > 0.0 )
                  {
                    flBestDist = v63;
                    *pBestAreaOut = v62;
                  }
                }
                v58 += 8LL;
              }
              while ( v58 != v59 );
              v10 = v60;
              v55 = v57;
            }
            ++x_0;
          }
          while ( x_0 <= up );
          v54 = v55;
        }
        ++y;
      }
      while ( y <= vEndb );
    }
    if ( *pBestAreaOut != 0 )
      *pBestLadderOut = 0;
    return flBestDist < 1.0;
  }
  return result;
}


// CNavMesh::BuildFromNavGen  (line 2149, @0x00000000031fc280, libserver.so)  // inlines: EnsureCapacity, Max, Min, memcpy, operator[]
// calls: CNavArea::BuildFromNavGen, CNavMesh::AllocateGrid, CNavMesh::BuildLaddersFromNavGen, CNavGenInput::GetNavGenParams, CNavGenParams::GetNavGenParamsToUse, WarnIfMeshNeedsAnalysis, memcpy
void __fastcall CNavMesh::BuildFromNavGen(
        CNavMesh *const this,
        const CUtlVector<VecDouble3,CUtlMemory<VecDouble3,int> > *const verts,
        const CUtlVector<CNavGenPoly,CUtlMemory<CNavGenPoly,int> > *const polys,
        const CNavGenInput *const inputData)
{
  int m_Size; // r12d
  uint32 m_nGrowSize; // eax
  CNavArea **v8; // rsi
  __int64 v9; // rax
  float v10; // xmm4_4
  int i; // r15d
  float v12; // xmm2_4
  __int64 v13; // rdx
  unsigned __int64 v14; // r15
  float v15; // xmm1_4
  __int64 v16; // r12
  float v17; // xmm0_4
  float v18; // xmm3_4
  const CNavGenPoly *v19; // rdx
  CNavArea *v20; // r14
  float v21; // xmm4_4
  unsigned __int64 v22; // r13
  CNavArea *v23; // rsi
  const CNavGenParams *NavGenParams; // rax
  CNavArea **m_pMemory; // r15
  CNavArea **v26; // rax
  float v29; // [rsp+10h] [rbp-40h]
  float v30; // [rsp+14h] [rbp-3Ch]
  float v31; // [rsp+18h] [rbp-38h]
  float v32; // [rsp+1Ch] [rbp-34h]

  (*(this->_vptr_CNavMesh + 7))(this);
  m_Size = polys->m_Size;
  if ( polys->m_Size > this->m_NavAreas.m_Memory.m_nAllocationCount )
  {
    m_nGrowSize = this->m_NavAreas.m_Memory.m_nGrowSize;
    if ( (m_nGrowSize & 0x40000000) == 0 )
    {
      if ( (m_nGrowSize & 0xC0000000) != 0 )
      {
        m_pMemory = this->m_NavAreas.m_Memory.m_pMemory;
        v26 = (**g_pMemAlloc)(g_pMemAlloc, 8LL * m_Size);
        this->m_NavAreas.m_Memory.m_pMemory = v26;
        if ( m_pMemory != 0 )
          memcpy(v26, m_pMemory, 8LL * this->m_NavAreas.m_Memory.m_nAllocationCount);
        this->m_NavAreas.m_Memory.m_nGrowSize &= 0x3FFFFFFFu;
      }
      else
      {
        v8 = this->m_NavAreas.m_Memory.m_pMemory;
        v9 = *g_pMemAlloc;
        if ( v8 != 0 )
          this->m_NavAreas.m_Memory.m_pMemory = (*(v9 + 8))(g_pMemAlloc, v8, 8LL * m_Size);
        else
          this->m_NavAreas.m_Memory.m_pMemory = (*v9)(g_pMemAlloc, 8LL * m_Size);
      }
      this->m_NavAreas.m_Memory.m_nAllocationCount = m_Size;
    }
  }
  (*(this->_vptr_CNavMesh + 2))(this, m_Size);
  if ( m_Size <= 0 )
  {
    CNavMesh::AllocateGrid(this, 3.4028235e38, -3.4028235e38, 3.4028235e38, -3.4028235e38, v10);
  }
  else
  {
    for ( i = 0; i != m_Size; ++i )
      (*(this->_vptr_CNavMesh + 4))(this);
    v12 = 3.4028235e38;
    v13 = (i - 1);
    v14 = 0;
    v15 = -3.4028235e38;
    v16 = 8 * v13 + 8;
    v17 = 3.4028235e38;
    v18 = -3.4028235e38;
    do
    {
      v29 = v18;
      v30 = v15;
      v19 = &polys->m_Memory.m_pMemory[v14 / 8];
      v31 = v12;
      v32 = v17;
      v20 = this->m_NavAreas.m_Memory.m_pMemory[v14 / 8];
      v14 += 8LL;
      CNavArea::BuildFromNavGen(v20, verts, v19);
      v12 = fminf(v31, v20->m_Extent.lo.y);
      v17 = fminf(v32, v20->m_Extent.lo.x);
      v18 = fmaxf(v29, v20->m_Extent.hi.y);
      v15 = fmaxf(v30, v20->m_Extent.hi.x);
    }
    while ( v14 != v16 );
    v22 = 0;
    CNavMesh::AllocateGrid(this, v17, v15, v12, v18, v21);
    do
    {
      v23 = this->m_NavAreas.m_Memory.m_pMemory[v22 / 8];
      v22 += 8LL;
      (*(this->_vptr_CNavMesh + 28))(this, v23);
    }
    while ( v16 != v22 );
  }
  (*(this->_vptr_CNavMesh + 31))(this, inputData);
  (*(this->_vptr_CNavMesh + 10))(this, 28);
  CNavMesh::BuildLaddersFromNavGen(this, inputData);
  NavGenParams = CNavGenInput::GetNavGenParams(inputData);
  this->m_NavGenParams = *CNavGenParams::GetNavGenParamsToUse(NavGenParams);
  WarnIfMeshNeedsAnalysis(this);
}


// CNavMesh::GetNavMarkupDesignerName  (line 2213, @0x00000000031f2770, libserver.so)
const char *__fastcall CNavMesh::GetNavMarkupDesignerName(CNavMesh *const this)
{
  return 0;
}


// CNavMesh::CreateLadder  (line 2221, @0x00000000031fa260, libserver.so)  // inlines: AddToTail, CGameTrace, CopyConstruct<CNavLadder*>, Element, FastSqrt, GetTraceMaskSolidBrushOnly, GrowMemory, Length, NormalizeInPlace, RnCollisionAttr_t, VectorAdd, VectorLength, VectorMultiply, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator*, operator+, operator-, operator=, operator[]
// calls: operator new, CNavLadder::CNavLadder, CGameTrace::Init, CNavLadder::SetDir, VectorNormalize, CNavLadder::ConnectGeneratedLadder, CUtlMemory<CNavLadder*, int>::Grow, operator delete, _Unwind_Resume
void __fastcall CNavMesh::CreateLadder(
        CNavMesh *const this,
        const Vector *const vMins,
        const Vector *const vMaxs,
        float flMaxHeightAboveTopArea)
{
  CNavLadder *v7; // rbx
  vec_t v8; // xmm1_4
  vec_t v9; // xmm0_4
  vec_t z; // xmm3_4
  float x; // xmm1_4
  float v12; // xmm1_4
  float v13; // xmm0_4
  float v14; // xmm4_4
  INavPhysicsInterface *v15; // rdi
  vec_t v16; // xmm3_4
  vec_t v17; // xmm2_4
  vec_t v18; // xmm0_4
  float v19; // xmm1_4
  float y; // xmm4_4
  INavPhysicsInterface *m_pPhysicsInterface; // rdi
  vec_t v22; // xmm1_4
  vec_t v23; // xmm4_4
  vec_t v24; // xmm1_4
  float v25; // xmm0_4
  vec_t v26; // xmm0_4
  vec_t v27; // xmm2_4
  float v28; // xmm0_4
  float v29; // xmm1_4
  INavPhysicsInterface *v30; // rdi
  vec_t v31; // xmm3_4
  vec_t v32; // xmm4_4
  vec_t v33; // xmm5_4
  vec_t v34; // xmm4_4
  float v35; // xmm3_4
  float v36; // xmm1_4
  float v37; // xmm4_4
  INavPhysicsInterface *v38; // rdi
  float v39; // xmm3_4
  vec_t v40; // xmm4_4
  float v41; // xmm3_4
  float v42; // xmm0_4
  float v43; // xmm2_4
  float v44; // xmm1_4
  NavDirType m_dir; // esi
  float v46; // xmm1_4
  __int64 m_Size; // r13
  int v48; // eax
  CNavLadder **v49; // rax
  float t; // [rsp+18h] [rbp-128h]
  float ta; // [rsp+18h] [rbp-128h]
  float v53; // [rsp+1Ch] [rbp-124h]
  float v54; // [rsp+1Ch] [rbp-124h]
  float xSize; // [rsp+20h] [rbp-120h]
  float ySize; // [rsp+2Ch] [rbp-114h]
  float ySizea; // [rsp+2Ch] [rbp-114h]
  Vector vAlong; // [rsp+30h] [rbp-110h] BYREF
  Vector vFrom; // [rsp+40h] [rbp-100h] BYREF
  Vector vTo; // [rsp+50h] [rbp-F0h] BYREF
  trace_t result; // [rsp+60h] [rbp-E0h] BYREF

  v7 = operator new(0x68u);
  CNavLadder::CNavLadder(v7, this);
  v8 = (vMins->x + vMaxs->x) * 0.5;
  v7->m_vTop.x = v8;
  v9 = (vMins->y + vMaxs->y) * 0.5;
  v7->m_vTop.y = v9;
  z = vMaxs->z;
  v7->m_vBottom.x = v8;
  v7->m_vBottom.y = v9;
  v7->m_vTop.z = z;
  v7->m_vBottom.z = vMins->z;
  x = vMaxs->x;
  memset(&result.m_ShapeAttributes, 0, 31);
  v12 = x - vMins->x;
  v13 = vMaxs->y - vMins->y;
  result.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
  xSize = v12;
  ySize = v13;
  CGameTrace::Init(&result);
  if ( xSize <= ySize )
  {
    y = v7->m_vBottom.y;
    m_pPhysicsInterface = this->m_pPhysicsInterface;
    v22 = (CNavGeneratorBase::sm_flGenerationStepSize * 0.5) + v7->m_vBottom.z;
    vFrom.x = v7->m_vBottom.x + CNavGeneratorBase::sm_flGenerationStepSize;
    vFrom.y = y + 0.0;
    vFrom.z = v22;
    v23 = v7->m_vTop.y + 0.0;
    v24 = (-CNavGeneratorBase::sm_flGenerationStepSize * 0.5) + v7->m_vTop.z;
    vTo.x = CNavGeneratorBase::sm_flGenerationStepSize + v7->m_vTop.x;
    vTo.y = v23;
    vTo.z = v24;
    (*m_pPhysicsInterface->_vptr_INavPhysicsInterface)(
      m_pPhysicsInterface,
      &vFrom,
      &vTo,
      CNavConfig::ms_TraceMaskSolidBrushOnly,
      0,
      4,
      &result);
    if ( result.fraction == 1.0 && !result.startsolid )
    {
      CNavLadder::SetDir(v7, NavDirType::EAST);
      v25 = ySize;
    }
    else
    {
      CNavLadder::SetDir(v7, NavDirType::WEST);
      v25 = ySize;
    }
    v7->m_flWidth = v25;
  }
  else
  {
    v14 = v7->m_vBottom.y;
    v15 = this->m_pPhysicsInterface;
    v16 = (CNavGeneratorBase::sm_flGenerationStepSize * 0.5) + v7->m_vBottom.z;
    vFrom.x = v7->m_vBottom.x + 0.0;
    vFrom.y = v14 + CNavGeneratorBase::sm_flGenerationStepSize;
    vFrom.z = v16;
    v17 = v7->m_vTop.x + 0.0;
    v18 = (-CNavGeneratorBase::sm_flGenerationStepSize * 0.5) + v7->m_vTop.z;
    vTo.y = v7->m_vTop.y + CNavGeneratorBase::sm_flGenerationStepSize;
    vTo.x = v17;
    vTo.z = v18;
    (*v15->_vptr_INavPhysicsInterface)(v15, &vFrom, &vTo, CNavConfig::ms_TraceMaskSolidBrushOnly, 0, 4, &result);
    if ( result.fraction == 1.0 && !result.startsolid )
    {
      CNavLadder::SetDir(v7, NavDirType::SOUTH);
      v19 = xSize;
    }
    else
    {
      CNavLadder::SetDir(v7, NavDirType::NORTH);
      v19 = xSize;
    }
    v7->m_flWidth = v19;
  }
  v26 = v7->m_vTop.z - v7->m_vBottom.z;
  v27 = v7->m_vTop.x - v7->m_vBottom.x;
  vAlong.y = v7->m_vTop.y - v7->m_vBottom.y;
  vAlong.z = v26;
  vAlong.x = v27;
  ySizea = VectorNormalize(&vAlong);
  v28 = 32.0;
  v29 = 0.0;
  if ( ySizea < 0.0 )
  {
LABEL_18:
    v42 = v7->m_vTop.x;
    v43 = v7->m_vTop.y;
    v44 = v7->m_vTop.z;
  }
  else
  {
    while ( 1 )
    {
      v30 = this->m_pPhysicsInterface;
      t = v29;
      v53 = v28;
      v31 = (v29 * vAlong.z) + v7->m_vBottom.z;
      v32 = (vAlong.y * v29) + v7->m_vBottom.y;
      vFrom.x = (vAlong.x * v29) + v7->m_vBottom.x;
      vFrom.z = v31;
      vFrom.y = v32;
      v33 = (v7->m_vNormal.y * v28) + v32;
      v34 = (v7->m_vNormal.z * v28) + v31;
      v35 = v28 * v7->m_vNormal.x;
      vTo.y = v33;
      vTo.z = v34;
      vTo.x = v35 + vFrom.x;
      (*v30->_vptr_INavPhysicsInterface)(v30, &vFrom, &vTo, CNavConfig::ms_TraceMaskSolidBrushOnly, 0, 4, &result);
      v28 = v53;
      if ( result.fraction == 1.0 && !result.startsolid )
        break;
      v29 = t + 10.0;
      if ( ySizea < (t + 10.0) )
        goto LABEL_14;
    }
    v7->m_vBottom = vFrom;
LABEL_14:
    v36 = 0.0;
    while ( 1 )
    {
      ta = v36;
      v37 = v7->m_vTop.y;
      v54 = v28;
      v38 = this->m_pPhysicsInterface;
      v39 = v7->m_vTop.z;
      vFrom.x = v7->m_vTop.x - (vAlong.x * v36);
      vFrom.y = v37 - (vAlong.y * v36);
      vFrom.z = v39 - (v36 * vAlong.z);
      v40 = (v7->m_vNormal.z * v28) + vFrom.z;
      v41 = v28 * v7->m_vNormal.x;
      vTo.y = (v7->m_vNormal.y * v28) + vFrom.y;
      vTo.z = v40;
      vTo.x = v41 + vFrom.x;
      (*v38->_vptr_INavPhysicsInterface)(v38, &vFrom, &vTo, CNavConfig::ms_TraceMaskSolidBrushOnly, 0, 4, &result);
      v28 = v54;
      if ( result.fraction == 1.0 && !result.startsolid )
        break;
      v36 = ta + 10.0;
      if ( ySizea < (ta + 10.0) )
        goto LABEL_18;
    }
    v42 = vFrom.x;
    v7->m_vTop.x = vFrom.x;
    v43 = vFrom.y;
    v7->m_vTop.y = vFrom.y;
    v44 = vFrom.z;
    v7->m_vTop.z = vFrom.z;
  }
  m_dir = v7->m_dir;
  v7->m_flLength = fsqrt(
                     (((v42 - v7->m_vBottom.x) * (v42 - v7->m_vBottom.x))
                    + ((v43 - v7->m_vBottom.y) * (v43 - v7->m_vBottom.y)))
                   + ((v44 - v7->m_vBottom.z) * (v44 - v7->m_vBottom.z)));
  CNavLadder::SetDir(v7, m_dir);
  v7->m_pBottomArea = 0;
  v7->m_pTopForwardArea = 0;
  v7->m_pTopLeftArea = 0;
  v7->m_pTopRightArea = 0;
  v7->m_pTopBehindArea = 0;
  CNavLadder::ConnectGeneratedLadder(v7, flMaxHeightAboveTopArea, v46);
  m_Size = this->m_Ladders.m_Size;
  v48 = this->m_Ladders.m_Size;
  if ( m_Size == this->m_Ladders.m_Memory.m_nAllocationCount )
  {
    CUtlMemory<CNavLadder *,int>::Grow(&this->m_Ladders.m_Memory, 1);
    v48 = this->m_Ladders.m_Size;
  }
  this->m_Ladders.m_Size = v48 + 1;
  v49 = &this->m_Ladders.m_Memory.m_pMemory[m_Size];
  if ( v49 != 0 )
    *v49 = v7;
}


// CNavMesh::CreateLadder  (line 2325, @0x00000000031faa20, libserver.so)  // inlines: AddToTail, CopyConstruct<CNavLadder*>, Element, GrowMemory, operator[]
// calls: operator new, CNavLadder::CNavLadder, CNavMesh::SetupLadder, CUtlMemory<CNavLadder*, int>::Grow, operator delete, _Unwind_Resume
// callers: CNavEditor::CommandNavBuildLadder, CNavEditor::CommandNavEndArea, CNavMesh::BuildLaddersFromNavGen
void __fastcall CNavMesh::CreateLadder(
        CNavMesh *const this,
        const Vector *const vTop,
        const Vector *const vBottom,
        float flWidth,
        const Vector2D *const vLadderDir,
        float flMaxHeightAboveTopArea)
{
  CNavLadder *v10; // r12
  __int64 m_Size; // r13
  int v12; // eax
  CNavLadder **v13; // rax

  v10 = operator new(0x68u);
  CNavLadder::CNavLadder(v10, this);
  CNavMesh::SetupLadder(this, v10, vTop, vBottom, flWidth, vLadderDir, flMaxHeightAboveTopArea);
  m_Size = this->m_Ladders.m_Size;
  v12 = this->m_Ladders.m_Size;
  if ( m_Size == this->m_Ladders.m_Memory.m_nAllocationCount )
  {
    CUtlMemory<CNavLadder *,int>::Grow(&this->m_Ladders.m_Memory, 1);
    v12 = this->m_Ladders.m_Size;
  }
  this->m_Ladders.m_Size = v12 + 1;
  v13 = &this->m_Ladders.m_Memory.m_pMemory[m_Size];
  if ( v13 != 0 )
    *v13 = v10;
}


// CNavMesh::SetupLadder  (line 2339, @0x00000000031f6a50, libserver.so)  // inlines: CGameTrace, FastSqrt, Length, NormalizeInPlace, RnCollisionAttr_t, VectorAdd, VectorLength, VectorMultiply, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator*, operator+, operator-, operator=
// calls: CNavLadder::SetDir, VectorNormalize, CGameTrace::Init, CNavLadder::ConnectGeneratedLadder
// callers: CNavMesh::CreateLadder
void __fastcall CNavMesh::SetupLadder(
        CNavMesh *const this,
        CNavLadder *pLadder,
        const Vector *const vTop,
        const Vector *const vBottom,
        float flWidth,
        const Vector2D *const vLadderDir,
        float flMaxHeightAboveTopArea)
{
  vec_t z; // xmm1_4
  float y; // xmm1_4
  NavDirType v11; // esi
  vec_t v12; // xmm2_4
  vec_t v13; // xmm0_4
  float v14; // xmm0_4
  float v15; // xmm1_4
  float v16; // xmm0_4
  float v17; // xmm5_4
  INavPhysicsInterface *m_pPhysicsInterface; // rdi
  vec_t v19; // xmm3_4
  float v20; // xmm4_4
  vec_t v21; // xmm2_4
  vec_t v22; // xmm4_4
  float v23; // xmm3_4
  float v24; // xmm1_4
  float v25; // xmm4_4
  INavPhysicsInterface *v26; // rdi
  vec_t v27; // xmm3_4
  float v28; // xmm5_4
  float v29; // xmm4_4
  vec_t v30; // xmm4_4
  float v31; // xmm3_4
  float x; // xmm0_4
  float v33; // xmm2_4
  float v34; // xmm1_4
  NavDirType m_dir; // esi
  float v36; // xmm1_4
  float t; // [rsp+18h] [rbp-128h]
  float ta; // [rsp+18h] [rbp-128h]
  float v40; // [rsp+1Ch] [rbp-124h]
  float v41; // [rsp+1Ch] [rbp-124h]
  float flLength; // [rsp+2Ch] [rbp-114h]
  Vector vAlong; // [rsp+30h] [rbp-110h] BYREF
  Vector vOn; // [rsp+40h] [rbp-100h] BYREF
  Vector vOut; // [rsp+50h] [rbp-F0h] BYREF
  trace_t result; // [rsp+60h] [rbp-E0h] BYREF

  if ( this->m_pPhysicsInterface != 0 )
  {
    pLadder->m_vTop = *vTop;
    pLadder->m_vBottom.x = vBottom->x;
    pLadder->m_vBottom.y = vBottom->y;
    z = vBottom->z;
    pLadder->m_flWidth = flWidth;
    pLadder->m_vBottom.z = z;
    y = vLadderDir->y;
    if ( fabs(vLadderDir->x) > fabs(y) )
      v11 = 2 * (vLadderDir->x <= 0.0) + 1;
    else
      v11 = 2 * (y > 0.0);
    CNavLadder::SetDir(pLadder, v11);
    v12 = pLadder->m_vTop.x - pLadder->m_vBottom.x;
    v13 = pLadder->m_vTop.z - pLadder->m_vBottom.z;
    vAlong.y = pLadder->m_vTop.y - pLadder->m_vBottom.y;
    vAlong.x = v12;
    vAlong.z = v13;
    v14 = VectorNormalize(&vAlong);
    memset(&result.m_ShapeAttributes, 0, 31);
    flLength = v14;
    result.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
    CGameTrace::Init(&result);
    v15 = 0.0;
    if ( flLength < 0.0 )
    {
LABEL_13:
      x = pLadder->m_vTop.x;
      v33 = pLadder->m_vTop.y;
      v34 = pLadder->m_vTop.z;
    }
    else
    {
      v16 = 32.0;
      while ( 1 )
      {
        v17 = pLadder->m_vNormal.y;
        m_pPhysicsInterface = this->m_pPhysicsInterface;
        t = v15;
        v40 = v16;
        v19 = (v15 * vAlong.z) + pLadder->m_vBottom.z;
        vOn.y = (vAlong.y * v15) + pLadder->m_vBottom.y;
        v20 = pLadder->m_vNormal.z;
        v21 = (vAlong.x * v15) + pLadder->m_vBottom.x;
        vOn.z = v19;
        vOut.y = (v17 * v16) + vOn.y;
        vOn.x = v21;
        v22 = (v20 * v16) + v19;
        v23 = v16 * pLadder->m_vNormal.x;
        vOut.z = v22;
        vOut.x = v23 + v21;
        (*m_pPhysicsInterface->_vptr_INavPhysicsInterface)(
          m_pPhysicsInterface,
          &vOn,
          &vOut,
          CNavConfig::ms_TraceMaskSolidBrushOnly,
          0,
          4,
          &result);
        v16 = v40;
        if ( result.fraction == 1.0 && !result.startsolid )
          break;
        v15 = t + 10.0;
        if ( flLength < (t + 10.0) )
          goto LABEL_9;
      }
      pLadder->m_vBottom = vOn;
LABEL_9:
      v24 = 0.0;
      while ( 1 )
      {
        ta = v24;
        v25 = pLadder->m_vTop.y;
        v41 = v16;
        v26 = this->m_pPhysicsInterface;
        vOn.x = pLadder->m_vTop.x - (vAlong.x * v24);
        v27 = pLadder->m_vTop.z - (v24 * vAlong.z);
        v28 = pLadder->m_vNormal.y;
        vOn.y = v25 - (vAlong.y * v24);
        vOn.z = v27;
        v29 = pLadder->m_vNormal.z;
        vOut.y = (v28 * v16) + vOn.y;
        v30 = (v29 * v16) + v27;
        v31 = v16 * pLadder->m_vNormal.x;
        vOut.z = v30;
        vOut.x = v31 + vOn.x;
        (*v26->_vptr_INavPhysicsInterface)(v26, &vOn, &vOut, CNavConfig::ms_TraceMaskSolidBrushOnly, 0, 4, &result);
        v16 = v41;
        if ( result.fraction == 1.0 && !result.startsolid )
          break;
        v24 = ta + 10.0;
        if ( flLength < (ta + 10.0) )
          goto LABEL_13;
      }
      x = vOn.x;
      v33 = vOn.y;
      v34 = vOn.z;
      pLadder->m_vTop = vOn;
    }
    m_dir = pLadder->m_dir;
    pLadder->m_flLength = fsqrt(
                            (((x - pLadder->m_vBottom.x) * (x - pLadder->m_vBottom.x))
                           + ((v33 - pLadder->m_vBottom.y) * (v33 - pLadder->m_vBottom.y)))
                          + ((v34 - pLadder->m_vBottom.z) * (v34 - pLadder->m_vBottom.z)));
    CNavLadder::SetDir(pLadder, m_dir);
    pLadder->m_pBottomArea = 0;
    pLadder->m_pTopForwardArea = 0;
    pLadder->m_pTopLeftArea = 0;
    pLadder->m_pTopRightArea = 0;
    pLadder->m_pTopBehindArea = 0;
    CNavLadder::ConnectGeneratedLadder(pLadder, flMaxHeightAboveTopArea, v36);
  }
}


// CNavMesh::BuildLaddersFromNavGen  (line 2413, @0x00000000031faaf0, libserver.so)  // inlines: EnsureCapacity, memcpy
// calls: CNavGenInput::GetLadderCount, CNavGenInput::GetLadderParameters, CNavMesh::CreateLadder, memcpy
// callers: CNavMesh::BuildFromNavGen
void __fastcall CNavMesh::BuildLaddersFromNavGen(CNavMesh *const this, const CNavGenInput *const inputData)
{
  int32 LadderCount; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx
  uint32 m_nGrowSize; // eax
  CNavLadder **v7; // rsi
  __int64 v8; // rax
  uint32 i; // r15d
  uint32 v10; // esi
  CNavLadder **m_pMemory; // rbx
  CNavLadder **v12; // rax
  int nNumLadders; // [rsp+1Ch] [rbp-74h]
  float flWidth; // [rsp+2Ch] [rbp-64h] BYREF
  Vector vTop; // [rsp+30h] [rbp-60h] BYREF
  Vector vBottom; // [rsp+40h] [rbp-50h] BYREF
  Vector vNormal; // [rsp+50h] [rbp-40h] BYREF

  LadderCount = CNavGenInput::GetLadderCount(inputData);
  v5 = LadderCount;
  nNumLadders = LadderCount;
  if ( LadderCount > this->m_Ladders.m_Memory.m_nAllocationCount )
  {
    m_nGrowSize = this->m_Ladders.m_Memory.m_nGrowSize;
    if ( (m_nGrowSize & 0x40000000) == 0 )
    {
      if ( (m_nGrowSize & 0xC0000000) != 0 )
      {
        m_pMemory = this->m_Ladders.m_Memory.m_pMemory;
        v12 = (**g_pMemAlloc)(g_pMemAlloc, 8LL * nNumLadders, v4, v5);
        this->m_Ladders.m_Memory.m_pMemory = v12;
        if ( m_pMemory != 0 )
          memcpy(v12, m_pMemory, 8LL * this->m_Ladders.m_Memory.m_nAllocationCount);
        this->m_Ladders.m_Memory.m_nGrowSize &= 0x3FFFFFFFu;
      }
      else
      {
        v7 = this->m_Ladders.m_Memory.m_pMemory;
        v8 = *g_pMemAlloc;
        if ( v7 != 0 )
          this->m_Ladders.m_Memory.m_pMemory = (*(v8 + 8))(g_pMemAlloc, v7, 8LL * v5);
        else
          this->m_Ladders.m_Memory.m_pMemory = (*v8)(g_pMemAlloc, 8LL * nNumLadders, v4, v5);
      }
      this->m_Ladders.m_Memory.m_nAllocationCount = nNumLadders;
    }
  }
  if ( nNumLadders > 0 )
  {
    for ( i = 0; i != nNumLadders; ++i )
    {
      v10 = i;
      CNavGenInput::GetLadderParameters(inputData, v10, &vTop, &vBottom, &vNormal, &flWidth);
      CNavMesh::CreateLadder(this, &vTop, &vBottom, flWidth, &vNormal, 0.0);
    }
  }
}


// CNavMesh::ValidateNavAreaConnections  (line 2432, @0x00000000031f6f90, libserver.so)  // inlines: Count, Find
// calls: Msg
// callers: CNavMesh::PostLoadNavMesh
// strings: "Area %d has one-way connect to area %d but does not appear on the latter's incoming list\, "Area %d has incoming connection from area %d but does not appear on latter's outgoing con, "Area %d has multiple outgoing connections to area %d in direction %d\n", "Area %d has area %d on both 2-way and incoming list, should only be on one\n", "Area %d has multiple incoming connections to area %d in direction %d\n"
void __fastcall CNavMesh::ValidateNavAreaConnections(CNavMesh *const this)
{
  CNavArea *v1; // r14
  int v2; // r13d
  CUtlVectorUltraConservative<CNavConnect,CUtlVectorUltraConservativeAllocator>::Data_t *m_pData; // rdx
  CNavArea *v4; // r12
  CUtlVectorUltraConservative<CNavConnect,CUtlVectorUltraConservativeAllocator>::Data_t *v5; // rax
  CNavArea *m_pArea; // r14
  __int64 m_nBackEdge; // r15
  int *v8; // rcx
  int v9; // esi
  int *v10; // rcx
  int v11; // eax
  int i; // ebx
  CUtlVectorUltraConservative<CNavConnect,CUtlVectorUltraConservativeAllocator>::Data_t *v13; // rcx
  int m_Size; // esi
  CNavConnect *v15; // rcx
  int v16; // eax
  CUtlVectorUltraConservative<CNavConnect,CUtlVectorUltraConservativeAllocator>::Data_t *v17; // rcx
  int v18; // esi
  CNavConnect *v19; // rcx
  int v20; // eax
  int v21; // r13d
  int *v22; // rdx
  __int64 v23; // rax
  int v24; // ebx
  int *v25; // rax
  __int64 v26; // r15
  int v27; // r8d
  __int64 v28; // rcx
  int v29; // esi
  __int64 v30; // rcx
  int v31; // eax
  int it; // [rsp+Ch] [rbp-54h]
  __int64 v34; // [rsp+10h] [rbp-50h]
  CNavConnectVector *v35; // [rsp+18h] [rbp-48h]
  CNavConnectVector *v36; // [rsp+20h] [rbp-40h]
  int v37; // [rsp+20h] [rbp-40h]
  NavEdgeIndex nEdge; // [rsp+2Bh] [rbp-35h]
  int v39; // [rsp+2Ch] [rbp-34h]

  v34 = 0;
  for ( it = 0; this->m_NavAreas.m_Size > it; ++it )
  {
    v39 = 0;
    nEdge = 0;
    v1 = this->m_NavAreas.m_Memory.m_pMemory[v34];
    if ( v1->m_nVerts <= 0 )
      goto LABEL_52;
    do
    {
      v2 = 0;
      m_pData = v1->m_connect[v39].m_pData;
      v36 = &v1->m_connect[v39];
      v35 = &v1->m_incomingConnect[v39];
      v4 = v1;
LABEL_4:
      if ( m_pData == 0 )
        goto LABEL_32;
LABEL_5:
      if ( v2 < m_pData->m_Size )
      {
LABEL_6:
        v5 = m_pData + 2 * v2;
        m_pArea = v5->m_Elements[0].m_pArea;
        m_nBackEdge = v5->m_Elements[0].m_nBackEdge;
        v8 = v35->m_pData;
        if ( v35->m_pData != 0 )
        {
          v9 = *v8;
          if ( *v8 > 0 )
          {
            if ( m_pArea == *(v8 + 1) )
              goto LABEL_55;
            v10 = v8 + 6;
            v11 = 0;
            do
            {
              if ( ++v11 == v9 )
                goto LABEL_12;
              v10 += 4;
            }
            while ( m_pArea != *(v10 - 2) );
            if ( v11 != -1 )
            {
LABEL_55:
              Msg(
                "Area %d has area %d on both 2-way and incoming list, should only be on one\n",
                v4->m_AreaId,
                m_pArea->m_AreaId);
              m_pData = v36->m_pData;
            }
          }
        }
LABEL_12:
        for ( i = ++v2; ; ++i )
        {
          if ( m_pData != 0 )
          {
            if ( i >= m_pData->m_Size )
              goto LABEL_19;
          }
          else if ( i >= 0 )
          {
LABEL_19:
            v13 = m_pArea->m_connect[m_nBackEdge].m_pData;
            if ( v13 != 0 )
            {
              m_Size = v13->m_Size;
              if ( v13->m_Size > 0 )
              {
                if ( v4 == v13->m_Elements[0].m_pArea )
                  goto LABEL_4;
                v15 = &v13->m_Elements[1];
                v16 = 0;
                do
                {
                  if ( ++v16 == m_Size )
                    goto LABEL_25;
                  ++v15;
                }
                while ( v4 != v15[-1].m_pArea );
                if ( v16 != -1 )
                  goto LABEL_4;
              }
            }
LABEL_25:
            v17 = m_pArea->m_incomingConnect[m_nBackEdge].m_pData;
            if ( v17 != 0 )
            {
              v18 = v17->m_Size;
              if ( v17->m_Size > 0 )
              {
                if ( v4 == v17->m_Elements[0].m_pArea )
                  goto LABEL_4;
                v19 = &v17->m_Elements[1];
                v20 = 0;
                do
                {
                  if ( ++v20 == v18 )
                    goto LABEL_31;
                  ++v19;
                }
                while ( v4 != v19[-1].m_pArea );
                if ( v20 != -1 )
                  goto LABEL_4;
              }
            }
LABEL_31:
            Msg(
              "Area %d has one-way connect to area %d but does not appear on the latter's incoming list\n",
              v4->m_AreaId,
              m_pArea->m_AreaId);
            m_pData = v36->m_pData;
            if ( v36->m_pData == 0 )
            {
LABEL_32:
              if ( v2 >= 0 )
                break;
              goto LABEL_6;
            }
            goto LABEL_5;
          }
          if ( m_pArea == m_pData->m_Elements[i].m_pArea )
          {
            Msg(
              "Area %d has multiple outgoing connections to area %d in direction %d\n",
              v4->m_AreaId,
              m_pArea->m_AreaId,
              v39);
            m_pData = v36->m_pData;
          }
        }
      }
      v1 = v4;
      v21 = 0;
      v22 = v35->m_pData;
LABEL_34:
      if ( v22 == 0 )
        goto LABEL_50;
LABEL_35:
      if ( v21 >= *v22 )
        goto LABEL_51;
      do
      {
        v23 = v21++;
        v24 = v21;
        v25 = &v22[4 * v23];
        v26 = *(v25 + 1);
        v27 = *(v25 + 16);
        while ( v22 != 0 )
        {
          if ( v24 >= *v22 )
            goto LABEL_43;
LABEL_38:
          if ( v26 == *&v22[4 * v24 + 2] )
          {
            v37 = v27;
            Msg(
              "Area %d has multiple incoming connections to area %d in direction %d\n",
              v4->m_AreaId,
              *(v26 + 212),
              v39);
            v22 = v35->m_pData;
            v27 = v37;
          }
          ++v24;
        }
        if ( v24 < 0 )
          goto LABEL_38;
LABEL_43:
        v28 = *(v26 + 8LL * v27 + 240);
        if ( v28 == 0 )
          goto LABEL_49;
        v29 = *v28;
        if ( *v28 > 0 )
        {
          if ( v4 == *(v28 + 8) )
            goto LABEL_34;
          v30 = v28 + 24;
          v31 = 0;
          while ( ++v31 != v29 )
          {
            v30 += 16;
            if ( v4 == *(v30 - 16) )
            {
              if ( v31 != -1 )
                goto LABEL_34;
              break;
            }
          }
        }
LABEL_49:
        Msg(
          "Area %d has incoming connection from area %d but does not appear on latter's outgoing connection list\n",
          v4->m_AreaId,
          *(v26 + 212));
        v22 = v35->m_pData;
        if ( v35->m_pData != 0 )
          goto LABEL_35;
LABEL_50:
        ;
      }
      while ( v21 < 0 );
LABEL_51:
      v39 = ++nEdge;
    }
    while ( nEdge < v4->m_nVerts );
LABEL_52:
    ++v34;
  }
}


// CNavMesh::OnEditCreateNotify  (line 2517, @0x00000000031f7390, libserver.so)
// callers: CNavEditor::EditCreateNavArea, CNavSplice::ExpandSpliceMeshIncremental, CNavSplice::ExpandSpliceMesh, CNavArea::SpliceEdit, CNavArea::MergeEdit, CNavArea::SplitArea, CNavArea::SplitArea_Old, CNavMesh::MergeNavMesh
void __fastcall CNavMesh::OnEditCreateNotify(CNavMesh *const this, CNavArea *const rNewArea)
{
  __int64 i; // rbx
  CNavArea *v5; // rdi

  for ( i = 0; this->m_NavAreas.m_Size > i; ++i )
  {
    v5 = this->m_NavAreas.m_Memory.m_pMemory[i];
    (*(v5->_vptr_CNavPoly + 22))(v5, rNewArea);
  }
}


// CNavMesh::OnEditDestroyNotify  (line 2527, @0x00000000031f28b0, libserver.so)
void __fastcall CNavMesh::OnEditDestroyNotify(CNavMesh *const this, CNavArea *pDeadArea)
{
  int m_Size; // eax
  unsigned __int64 v5; // rbx
  __int64 v6; // r13
  CNavArea *v7; // rdi
  INavEditor *m_pEditor; // rdi
  INavObstructionManager *m_pObstructionManager; // rdi
  INavEntityInterface *m_pEntityInterface; // rdi

  m_Size = this->m_NavAreas.m_Size;
  if ( m_Size != 0 )
  {
    v5 = 0;
    v6 = 8LL * (m_Size - 1) + 8;
    do
    {
      v7 = this->m_NavAreas.m_Memory.m_pMemory[v5 / 8];
      v5 += 8LL;
      (*(v7->_vptr_CNavPoly + 23))(v7, pDeadArea);
    }
    while ( v5 != v6 );
  }
  m_pEditor = this->m_pEditor;
  if ( m_pEditor != 0 )
    (*(m_pEditor->_vptr_INavEditor + 2))(m_pEditor, 1, 1);
  m_pObstructionManager = this->m_pObstructionManager;
  if ( m_pObstructionManager != 0 )
    (*(m_pObstructionManager->_vptr_INavObstructionManager + 7))(m_pObstructionManager, pDeadArea);
  m_pEntityInterface = this->m_pEntityInterface;
  if ( m_pEntityInterface != 0 )
    (*(m_pEntityInterface->_vptr_INavEntityInterface + 1))(m_pEntityInterface, pDeadArea);
}


// CNavMesh::OnEditDestroyNotify  (line 2553, @0x00000000031f2780, libserver.so)
void __fastcall CNavMesh::OnEditDestroyNotify(CNavMesh *const this, CNavLadder *pDeadLadder)
{
  INavEditor *m_pEditor; // rdi

  m_pEditor = this->m_pEditor;
  if ( m_pEditor != 0 )
    (*(m_pEditor->_vptr_INavEditor + 2))(m_pEditor, 1, 1);
}


// CNavMesh::GetNavMeshAsTriangles  (line 2572, @0x00000000031fb7b0, libserver.so)  // inlines: AddToTail, Begin, ComputeBC, CopyConstruct<Vector>, CopyConstruct<unsigned int>, Element, GetNextVertIndexCW, GetTri, GetVert, GrowMemory, NavTriIterator, Next, operator=, operator[]
// calls: CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::SetCount, CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::SetCount, CUtlMemory<unsigned int, int>::Grow, CUtlMemory<Vector, int>::Grow
void __fastcall CNavMesh::GetNavMeshAsTriangles(
        const CNavMesh *const this,
        CUtlVector<unsigned int,CUtlMemory<unsigned int,int> > *const indicesOut,
        CUtlVector<Vector,CUtlMemory<Vector,int> > *const positionsOut,
        uint32 a4)
{
  CUtlVector<Vector,CUtlMemory<Vector,int> > *v7; // r15
  unsigned int v8; // r14d
  vec_t *p_x; // r13
  Vector *v10; // r11
  CUtlVector<Vector,CUtlMemory<Vector,int> > *v11; // rcx
  CNavArea *v12; // r9
  int m_nVerts; // esi
  CNavArea *v14; // r15
  int v15; // r13d
  float *v16; // rdx
  vec_t v17; // xmm2_4
  vec_t v18; // xmm1_4
  vec_t v19; // xmm0_4
  float *v20; // rdx
  vec_t v21; // xmm5_4
  vec_t v22; // xmm4_4
  vec_t j; // xmm3_4
  unsigned int v24; // r13d
  Vector *v25; // rbx
  __int64 m_Size; // rax
  int v27; // esi
  __int64 v28; // rax
  __int64 v29; // rax
  int v30; // esi
  unsigned int *v31; // rax
  int v32; // esi
  float *v33; // rdx
  float *v34; // rdx
  __int64 v36; // [rsp+8h] [rbp-A8h]
  CUtlVectorBase<Vector,CUtlMemory<Vector,int> >::CAllocator *p_m_Memory; // [rsp+18h] [rbp-98h]
  Vector *v38; // [rsp+20h] [rbp-90h]
  Vector *v39; // [rsp+20h] [rbp-90h]
  CUtlVector<Vector,CUtlMemory<Vector,int> > *v40; // [rsp+28h] [rbp-88h]
  CUtlVector<Vector,CUtlMemory<Vector,int> > *v41; // [rsp+28h] [rbp-88h]
  int i; // [rsp+30h] [rbp-80h]
  int v43; // [rsp+34h] [rbp-7Ch]
  int v44; // [rsp+34h] [rbp-7Ch]
  vec_t z; // [rsp+40h] [rbp-70h]
  vec_t y; // [rsp+44h] [rbp-6Ch] BYREF
  vec_t x; // [rsp+48h] [rbp-68h]
  int v48; // [rsp+4Ch] [rbp-64h]
  Vector vVert[3]; // [rsp+50h] [rbp-60h] BYREF

  CUtlVectorBase<Vector,CUtlMemory<Vector,int>>::SetCount(positionsOut, 0);
  CUtlVectorBase<unsigned int,CUtlMemory<unsigned int,int>>::SetCount(indicesOut, 0);
  i = 0;
  v36 = 0;
  if ( this->m_NavAreas.m_Size > 0 )
  {
    p_m_Memory = &positionsOut->m_Memory;
    v7 = positionsOut;
    v8 = 0;
    p_x = &y;
    do
    {
      v10 = p_x;
      v11 = v7;
      v12 = this->m_NavAreas.m_Memory.m_pMemory[v36];
      m_nVerts = v12->m_nVerts;
      v14 = v12;
      z = v12->m_vVerts[0].z;
      x = v12->m_vVerts[0].x;
      y = v12->m_vVerts[0].y;
      v15 = (m_nVerts - 1) % m_nVerts;
      v16 = (v12 + 12 * v15);
      v17 = v16[2];
      v18 = v16[3];
      v19 = v16[4];
      v20 = (v12 + 12 * ((m_nVerts + v15 - 1) % m_nVerts));
      v21 = v20[2];
      v22 = v20[3];
      for ( j = v20[4]; v15 != 1; j = v34[4] )
      {
        v48 = v15;
        v24 = v8;
        vVert[1].x = v17;
        vVert[0].x = x;
        vVert[1].y = v18;
        vVert[0].y = y;
        vVert[0].z = z;
        v25 = &vVert[2];
        vVert[1].z = v19;
        vVert[2].x = v21;
        vVert[2].y = v22;
        vVert[2].z = j;
        do
        {
          m_Size = v11->m_Size;
          v27 = v11->m_Size;
          if ( m_Size == v11->m_Memory.m_nAllocationCount )
          {
            v44 = v11->m_Size;
            v39 = v10;
            v41 = v11;
            CUtlMemory<Vector,int>::Grow(p_m_Memory, 1);
            v11 = v41;
            v10 = v39;
            m_Size = v44;
            v27 = v41->m_Size;
          }
          v11->m_Size = v27 + 1;
          v28 = &v11->m_Memory.m_pMemory[m_Size];
          if ( v28 != 0 )
          {
            *v28 = *&v25->x;
            *(v28 + 8) = v25->z;
          }
          v29 = indicesOut->m_Size;
          v30 = indicesOut->m_Size;
          if ( v29 == indicesOut->m_Memory.m_nAllocationCount )
          {
            v43 = indicesOut->m_Size;
            v38 = v10;
            v40 = v11;
            CUtlMemory<unsigned int,int>::Grow(&indicesOut->m_Memory, 1);
            v30 = indicesOut->m_Size;
            v10 = v38;
            v11 = v40;
            v29 = v43;
          }
          indicesOut->m_Size = v30 + 1;
          v31 = &indicesOut->m_Memory.m_pMemory[v29];
          if ( v31 != 0 )
            *v31 = v24;
          --v25;
          ++v24;
        }
        while ( v25 != v10 );
        v32 = v14->m_nVerts;
        v8 += 3;
        v15 = (v32 + v48 - 1) % v32;
        v33 = (v14 + 12 * v15);
        v17 = v33[2];
        v18 = v33[3];
        v19 = v33[4];
        v34 = (v14 + 12 * ((v32 + v15 - 1) % v32));
        v21 = v34[2];
        v22 = v34[3];
      }
      ++i;
      v7 = v11;
      p_x = &v10->x;
      ++v36;
    }
    while ( this->m_NavAreas.m_Size > i );
  }
}


// CNavMesh::GetNavMeshEdges  (line 2600, @0x00000000031fb580, libserver.so)  // inlines: AddToTail, CopyConstruct<Vector>, CopyConstruct<unsigned int>, Element, GetVert, GrowMemory, operator=, operator[]
// calls: CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::SetCount, CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::SetCount, CUtlMemory<Vector, int>::Grow, CUtlMemory<unsigned int, int>::Grow
void __fastcall CNavMesh::GetNavMeshEdges(
        const CNavMesh *const this,
        CUtlVector<unsigned int,CUtlMemory<unsigned int,int> > *const indicesOut,
        CUtlVector<Vector,CUtlMemory<Vector,int> > *const positionsOut)
{
  CUtlVector<Vector,CUtlMemory<Vector,int> > *v6; // r14
  int v7; // r15d
  CNavArea *v8; // r10
  int m_nVerts; // esi
  Vector *m_vVerts; // rcx
  __int64 v11; // rbx
  vec_t z; // xmm0_4
  vec_t x; // xmm2_4
  vec_t *v14; // rax
  vec_t v15; // xmm0_4
  vec_t v16; // xmm2_4
  int m_Size; // eax
  __int64 v18; // r13
  int v19; // edx
  __int64 v20; // rdx
  int j; // ebx
  __int64 v22; // r13
  unsigned int v23; // r8d
  int v24; // edx
  unsigned int *v25; // rdx
  int i; // [rsp+14h] [rbp-8Ch]
  __int64 v28; // [rsp+18h] [rbp-88h]
  CUtlVectorBase<Vector,CUtlMemory<Vector,int> >::CAllocator *p_m_Memory; // [rsp+28h] [rbp-78h]
  Vector *v30; // [rsp+30h] [rbp-70h]
  Vector *v31; // [rsp+38h] [rbp-68h]
  int v32; // [rsp+38h] [rbp-68h]
  int v33; // [rsp+40h] [rbp-60h]
  CNavArea *v34; // [rsp+40h] [rbp-60h]
  CNavArea *v35; // [rsp+48h] [rbp-58h]
  unsigned int v36; // [rsp+48h] [rbp-58h]
  Vector v[2]; // [rsp+50h] [rbp-50h]

  CUtlVectorBase<Vector,CUtlMemory<Vector,int>>::SetCount(positionsOut, 0);
  CUtlVectorBase<unsigned int,CUtlMemory<unsigned int,int>>::SetCount(indicesOut, 0);
  p_m_Memory = &positionsOut->m_Memory;
  v28 = 0;
  i = 0;
  if ( this->m_NavAreas.m_Size > 0 )
  {
    v6 = positionsOut;
    while ( 1 )
    {
      v7 = 0;
      v8 = this->m_NavAreas.m_Memory.m_pMemory[v28];
      m_nVerts = v8->m_nVerts;
      m_vVerts = v8->m_vVerts;
      if ( m_nVerts > 0 )
        break;
LABEL_17:
      ++i;
      ++v28;
      if ( this->m_NavAreas.m_Size <= i )
        return;
    }
    while ( 1 )
    {
      ++v7;
      v11 = 0;
      z = m_vVerts->z;
      x = m_vVerts->x;
      v[0].y = m_vVerts->y;
      v[0].z = z;
      v[0].x = x;
      v14 = (v8 + 12 * (v7 % m_nVerts));
      v15 = v14[4];
      v16 = v14[2];
      v[1].y = v14[3];
      m_Size = v6->m_Size;
      v[1].z = v15;
      v[1].x = v16;
      v18 = m_Size;
      v19 = m_Size;
      if ( v6->m_Memory.m_nAllocationCount == m_Size )
        goto LABEL_9;
      while ( 1 )
      {
        v6->m_Size = v19 + 1;
        v20 = &v6->m_Memory.m_pMemory[v18];
        if ( v20 != 0 )
        {
          *v20 = *&v[v11].x;
          *(v20 + 8) = v[v11].z;
        }
        if ( ++v11 == 2 )
          break;
        v18 = v6->m_Size;
        v19 = v6->m_Size;
        if ( v6->m_Memory.m_nAllocationCount == v18 )
        {
LABEL_9:
          v31 = m_vVerts;
          v33 = m_Size;
          v35 = v8;
          CUtlMemory<Vector,int>::Grow(p_m_Memory, 1);
          v19 = v6->m_Size;
          m_vVerts = v31;
          m_Size = v33;
          v8 = v35;
        }
      }
      for ( j = 0; j != 2; ++j )
      {
        v22 = indicesOut->m_Size;
        v23 = j + m_Size;
        v24 = indicesOut->m_Size;
        if ( v22 == indicesOut->m_Memory.m_nAllocationCount )
        {
          v30 = m_vVerts;
          v32 = m_Size;
          v34 = v8;
          v36 = j + m_Size;
          CUtlMemory<unsigned int,int>::Grow(&indicesOut->m_Memory, 1);
          v24 = indicesOut->m_Size;
          m_vVerts = v30;
          m_Size = v32;
          v8 = v34;
          v23 = v36;
        }
        indicesOut->m_Size = v24 + 1;
        v25 = &indicesOut->m_Memory.m_pMemory[v22];
        if ( v25 != 0 )
          *v25 = v23;
      }
      m_nVerts = v8->m_nVerts;
      ++m_vVerts;
      if ( m_nVerts <= v7 )
        goto LABEL_17;
    }
  }
}


// CNavMesh::GetNavMeshConnectionsAsDebugGeometry  (line 2635, @0x00000000031fac60, libserver.so)  // inlines: AddToTail, Begin, CNavConnectOutIterator, ComputeOrientedPortal, CopyConstruct<Vector>, CopyConstruct<unsigned int>, Count, Element, FixupZ, GetAdjacentAreas, GetArea, GetBackEdgeIndex, GetVert, GetVertIndexCCWForEdge, GetZ, GrowMemory, Next, NormalizedSafe, VectorAdd, VectorMultiply, VectorSubtract, operator*, operator+, operator-, operator=, operator[]
// calls: CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::SetCount, CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::SetCount, CNavPoly::ComputeOrientedPortal, CNavPoly::GetEdgeNormal, CNavOrientedPortal::GetCenter, CNavPoly::GetZ, CNavPoly::GetClosestPointOnPoly, VectorNormalize, CUtlMemory<Vector, int>::Grow, CUtlMemory<unsigned int, int>::Grow
void __fastcall CNavMesh::GetNavMeshConnectionsAsDebugGeometry(
        const CNavMesh *const this,
        CUtlVector<unsigned int,CUtlMemory<unsigned int,int> > *const indicesOut,
        CUtlVector<Vector,CUtlMemory<Vector,int> > *const positionsOut)
{
  int v5; // r9d
  CUtlVector<Vector,CUtlMemory<Vector,int> > *v6; // r12
  CNavArea *v7; // r14
  int m_nVerts; // ecx
  int j; // ebx
  int *m_pData; // rax
  int v11; // r11d
  int v12; // r10d
  int v13; // r15d
  __int64 v14; // rdx
  float v15; // xmm2_4
  float *v16; // rdx
  float *v17; // rax
  vec_t v18; // xmm0_4
  vec_t v19; // xmm4_4
  float v20; // xmm0_4
  float v21; // xmm6_4
  float v22; // xmm3_4
  float v23; // xmm11_4
  float v24; // xmm0_4
  float v25; // xmm1_4
  float v26; // xmm5_4
  float v27; // xmm10_4
  float v28; // xmm4_4
  float x; // xmm15_4
  float v30; // xmm14_4
  int *v31; // rcx
  int v32; // r14d
  __int64 m; // rbx
  __int64 v34; // rdx
  __int64 v35; // rdx
  int v36; // esi
  unsigned int *v37; // rdx
  __int64 m_Size; // rdx
  int v39; // esi
  CNavConnectVector *n; // rax
  CUtlVectorUltraConservative<CNavConnect,CUtlVectorUltraConservativeAllocator>::Data_t *v41; // rdx
  int v42; // eax
  __int64 v44; // [rsp+8h] [rbp-188h]
  int i; // [rsp+14h] [rbp-17Ch]
  __int64 v46; // [rsp+18h] [rbp-178h]
  float z; // [rsp+20h] [rbp-170h]
  int v48; // [rsp+24h] [rbp-16Ch]
  float v49; // [rsp+30h] [rbp-160h]
  int k; // [rsp+38h] [rbp-158h]
  float ka; // [rsp+38h] [rbp-158h]
  float v52; // [rsp+3Ch] [rbp-154h]
  int y; // [rsp+40h] [rbp-150h]
  CNavArea *v54; // [rsp+48h] [rbp-148h]
  float v55; // [rsp+50h] [rbp-140h]
  NavEdgeIndex nBackEdgea; // [rsp+58h] [rbp-138h]
  float nBackEdge; // [rsp+58h] [rbp-138h]
  float nBackEdgeb; // [rsp+58h] [rbp-138h]
  float v59; // [rsp+60h] [rbp-130h]
  float v60; // [rsp+60h] [rbp-130h]
  NavEdgeIndex v61[8]; // [rsp+60h] [rbp-130h]
  NavEdgeIndex v62[8]; // [rsp+60h] [rbp-130h]
  CNavArea *rAdjacentAreaa; // [rsp+68h] [rbp-128h]
  int rAdjacentAreac; // [rsp+68h] [rbp-128h]
  int rAdjacentAreab; // [rsp+68h] [rbp-128h]
  Vector vTo; // [rsp+90h] [rbp-100h] BYREF
  Vector vDrawTo; // [rsp+A0h] [rbp-F0h]
  CNavOrientedPortal portalConnection; // [rsp+B0h] [rbp-E0h] BYREF
  int idx[9]; // [rsp+D0h] [rbp-C0h] BYREF
  Vector vVert[7]; // [rsp+100h] [rbp-90h] BYREF
  Vector ya; // 0:^40.12
  Vector EdgeNormal; // 0:kr00_12.12
  Vector v74; // 0:kr14_12.12
  Vector Center; // 0:kr20_12.12

  CUtlVectorBase<Vector,CUtlMemory<Vector,int>>::SetCount(positionsOut, 0);
  CUtlVectorBase<unsigned int,CUtlMemory<unsigned int,int>>::SetCount(indicesOut, 0);
  v44 = 0;
  i = 0;
  if ( this->m_NavAreas.m_Size > 0 )
  {
    v5 = 0;
    v6 = positionsOut;
    do
    {
      v7 = this->m_NavAreas.m_Memory.m_pMemory[v44];
      m_nVerts = v7->m_nVerts;
      if ( m_nVerts != 0 )
      {
        for ( j = 0; j != m_nVerts; ++j )
        {
          m_pData = v7->m_connect[j].m_pData;
          if ( m_pData != 0 && *m_pData > 0 )
          {
            v11 = 0;
            goto LABEL_9;
          }
        }
        v11 = -1;
      }
      else
      {
        v11 = -1;
        j = 0;
      }
LABEL_9:
      v12 = v5;
      v13 = v11;
LABEL_10:
      while ( j != m_nVerts )
      {
        while ( 2 )
        {
          k = v12;
          v14 = (v7->m_connect[j].m_pData + 2 * v13);
          v46 = &v7->m_connect[j];
          nBackEdgea = *(v14 + 16);
          rAdjacentAreaa = *(v14 + 8);
          CNavPoly::ComputeOrientedPortal(v7, rAdjacentAreaa, j, nBackEdgea, -1.0, &portalConnection);
          EdgeNormal = CNavPoly::GetEdgeNormal(v7, j);
          v74 = CNavPoly::GetEdgeNormal(rAdjacentAreaa, nBackEdgea);
          Center = CNavOrientedPortal::GetCenter(&portalConnection);
          vVert[0] = Center;
          vVert[0] = CNavOrientedPortal::GetCenter(&portalConnection);
          vTo.z = vVert[0].z + (0.40000001 * EdgeNormal.z);
          vTo.y = (0.40000001 * EdgeNormal.y) + vVert[0].y;
          nBackEdge = Center.x - (0.40000001 * EdgeNormal.x);
          vTo.x = (0.40000001 * EdgeNormal.x) + vVert[0].x;
          v59 = CNavPoly::GetZ(v7, Center.y - (0.40000001 * EdgeNormal.y), nBackEdge);
          vTo.z = CNavPoly::GetZ(rAdjacentAreaa, vTo.y, v15);
          vDrawTo = CNavPoly::GetClosestPointOnPoly(rAdjacentAreaa, &vTo);
          v16 = (v7 + 12 * j);
          v17 = (v7 + 12 * ((j + 1) % v7->m_nVerts));
          v18 = v16[4] - v17[4];
          v19 = v16[2] - v17[2];
          vVert[0].y = v16[3] - v17[3];
          vVert[0].z = v18;
          vVert[0].x = v19;
          v20 = VectorNormalize(vVert);
          v21 = v59;
          v22 = Center.y - (0.40000001 * EdgeNormal.y);
          if ( v20 == 0.0 )
          {
            v23 = 0.75;
            v24 = 0.0;
            v25 = 0.0;
            v26 = 0.25;
            v27 = 0.0;
            v28 = 0.0;
            x = 1.0;
            z = 0.0;
            v30 = 0.0;
          }
          else
          {
            v30 = vVert[0].y;
            x = vVert[0].x;
            v26 = vVert[0].x * 0.25;
            v28 = vVert[0].y * 0.25;
            v23 = vVert[0].x * 0.75;
            z = vVert[0].z;
            v27 = vVert[0].y * 0.75;
            v25 = 0.25 * vVert[0].z;
            v24 = 0.75 * vVert[0].z;
          }
          v48 = k;
          vVert[0].x = nBackEdge - v26;
          vVert[1].x = v26 + nBackEdge;
          *&idx[1] = vTo.y - v22;
          vVert[0].y = v22 - v28;
          vVert[1].y = v28 + v22;
          vVert[2].y = vDrawTo.y + v27;
          vVert[0].z = v59 - v25;
          vVert[1].z = v25 + v59;
          v49 = vDrawTo.y + v27;
          ya = vDrawTo;
          vVert[2].z = vDrawTo.z + v24;
          v52 = vDrawTo.z + v24;
          vVert[2].x = vDrawTo.x + v23;
          ka = vDrawTo.x + v23;
          vVert[3].x = vDrawTo.x - v23;
          v55 = vDrawTo.x - v23;
          vVert[3].y = vDrawTo.y - v27;
          nBackEdgeb = vDrawTo.y - v27;
          vVert[3].z = vDrawTo.z - v24;
          v60 = vDrawTo.z - v24;
          *idx = vTo.x - (Center.x - (0.40000001 * EdgeNormal.x));
          *&idx[2] = vTo.z - v21;
          VectorNormalize(idx);
          idx[0] = 0;
          idx[1] = 1;
          idx[2] = 2;
          idx[3] = 0;
          idx[4] = 2;
          idx[5] = 3;
          idx[6] = 4;
          idx[7] = 5;
          vVert[4].x = v55 - (x * 0.5);
          vVert[6].y = ya.y - (v74.y + v74.y);
          vVert[4].y = nBackEdgeb - (v30 * 0.5);
          vVert[4].z = v60 - (z * 0.5);
          vVert[5].x = (x * 0.5) + ka;
          vVert[6].z = ya.z - (v74.z + v74.z);
          vVert[5].y = (v30 * 0.5) + v49;
          vVert[5].z = (z * 0.5) + v52;
          vVert[6].x = ya.x - (v74.x + v74.x);
          idx[8] = 6;
          v31 = idx;
          v54 = v7;
          v32 = 0;
          y = j;
          for ( m = 0; ; v32 = v31[m] )
          {
            m_Size = v6->m_Size;
            v39 = v6->m_Size;
            if ( m_Size == v6->m_Memory.m_nAllocationCount )
            {
              *v61 = v31;
              rAdjacentAreac = v6->m_Size;
              CUtlMemory<Vector,int>::Grow(&v6->m_Memory, 1);
              v39 = v6->m_Size;
              v31 = *v61;
              m_Size = rAdjacentAreac;
            }
            v6->m_Size = v39 + 1;
            v34 = &v6->m_Memory.m_pMemory[m_Size];
            if ( v34 != 0 )
            {
              *v34 = *&vVert[v32].x;
              *(v34 + 8) = vVert[v32].z;
            }
            v35 = indicesOut->m_Size;
            v36 = indicesOut->m_Size;
            if ( v35 == indicesOut->m_Memory.m_nAllocationCount )
            {
              *v62 = v31;
              rAdjacentAreab = indicesOut->m_Size;
              CUtlMemory<unsigned int,int>::Grow(&indicesOut->m_Memory, 1);
              v36 = indicesOut->m_Size;
              v31 = *v62;
              v35 = rAdjacentAreab;
            }
            indicesOut->m_Size = v36 + 1;
            v37 = &indicesOut->m_Memory.m_pMemory[v35];
            if ( v37 != 0 )
              *v37 = v48 + m;
            if ( ++m == 9 )
              break;
          }
          v7 = v54;
          j = y;
          v12 = v48 + 9;
          m_nVerts = v54->m_nVerts;
          if ( y != m_nVerts )
          {
            for ( n = v46; ; n = &v54->m_connect[j] )
            {
              v41 = n->m_pData;
              v42 = -1;
              if ( v41 != 0 )
                v42 = v41->m_Size - 1;
              if ( v13 < v42 )
                break;
              if ( ++j == m_nVerts )
              {
                v13 = -1;
                goto LABEL_10;
              }
              v13 = -1;
            }
            ++v13;
            if ( j != m_nVerts )
              continue;
            goto LABEL_32;
          }
          break;
        }
      }
LABEL_32:
      ++i;
      v5 = v12;
      ++v44;
    }
    while ( this->m_NavAreas.m_Size > i );
  }
}


// DrawTrace  (line 2701, @0x00000000031f73e0, libserver.so)
void __fastcall DrawTrace(const trace_t *trace)
{
  ;
}


// TestJumpDown  (line 2719, @0x00000000031f73f0, libserver.so)  // inlines: CGameTrace, Init, Ray_t, RnCollisionAttr_t, VectorAligned, operator=
// calls: CGameTrace::Init, Ray_t::Init
// callers: JumpConnector::TryToConnect, CNavGenerator::StichAndRemoveJumpAreas, FindJumpDownArea
// globals: TheNavMesh
bool __fastcall TestJumpDown(const Vector *const vFromPos, const Vector *const vToPos)
{
  INavPhysicsInterface *m_pPhysicsInterface; // r12
  float v4; // xmm0_4
  bool startsolid; // r15
  int v7; // ebx
  float v8; // xmm0_4
  float z; // xmm1_4
  vec_t y; // xmm2_4
  vec_t x; // xmm3_4
  vec_t v12; // xmm2_4
  vec_t v13; // xmm3_4
  vec_t v14; // xmm1_4
  INavObstructionManager *m_pObstructionManager; // rbx
  vec_t v16; // xmm1_4
  vec_t v17; // xmm3_4
  vec_t v18; // xmm2_4
  vec_t v19; // xmm0_4
  vec_t v20; // xmm2_4
  vec_t v21; // [rsp+1Ch] [rbp-194h]
  vec_t v23; // [rsp+38h] [rbp-178h]
  float flUp; // [rsp+3Ch] [rbp-174h]
  vec_t flUpa; // [rsp+3Ch] [rbp-174h]
  Vector vFrom; // [rsp+40h] [rbp-170h] BYREF
  Vector vTo; // [rsp+50h] [rbp-160h] BYREF
  Vector vStart; // [rsp+60h] [rbp-150h] BYREF
  Vector vEnd; // [rsp+70h] [rbp-140h] BYREF
  Ray_t ray; // [rsp+80h] [rbp-130h] BYREF
  trace_t v31; // [rsp+D0h] [rbp-E0h] BYREF

  m_pPhysicsInterface = TheNavMesh->m_pPhysicsInterface;
  if ( m_pPhysicsInterface == 0 )
    return 0;
  v4 = vFromPos->z - vToPos->z;
  if ( v4 <= 64.0 || v4 >= 400.0 )
    return 0;
  memset(&v31.m_ShapeAttributes, 0, 31);
  v7 = 200;
  v31.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
  CGameTrace::Init(&v31);
  v8 = 1.0;
  do
  {
    flUp = v8;
    z = vFromPos->z;
    y = vFromPos->y;
    vFrom.x = vFromPos->x;
    vFrom.z = z;
    vFrom.y = y;
    vTo.x = vFrom.x;
    vTo.y = y;
    vTo.z = z + v8;
    (*(m_pPhysicsInterface->_vptr_INavPhysicsInterface + 2))(
      m_pPhysicsInterface,
      &vFrom,
      &vTo,
      &NavTraceMins,
      &NavTraceMaxs,
      CNavConfig::ms_TraceMaskSolidBrushOnly,
      0,
      4,
      &v31);
    v8 = flUp;
    if ( v31.fraction > 0.0 && !v31.startsolid )
    {
      x = vFromPos->x;
      vFrom.y = vFromPos->y;
      vFrom.x = x;
      v12 = vToPos->y;
      v13 = vToPos->x;
      vFrom.z = v31.endpos.z - 0.5;
      vTo.x = v13;
      vTo.y = v12;
      vTo.z = v31.endpos.z - 0.5;
      (*(m_pPhysicsInterface->_vptr_INavPhysicsInterface + 2))(
        m_pPhysicsInterface,
        &vFrom,
        &vTo,
        &NavTraceMins,
        &NavTraceMaxs,
        CNavConfig::ms_TraceMaskSolidBrushOnly,
        0,
        4,
        &v31);
      v8 = flUp;
      if ( v31.fraction == 1.0 && !v31.startsolid )
        break;
    }
    --v7;
    v8 = v8 + 1.0;
  }
  while ( v7 != 0 );
  if ( v8 > 200.0 )
    return 0;
  v14 = vToPos->z + 2.0;
  vFrom = vTo;
  flUpa = vTo.x;
  vTo.z = v14;
  v23 = vTo.y;
  v21 = vFrom.z;
  (*(m_pPhysicsInterface->_vptr_INavPhysicsInterface + 2))(
    m_pPhysicsInterface,
    &vFrom,
    &vTo,
    &NavTraceMins,
    &NavTraceMaxs,
    CNavConfig::ms_TraceMaskSolidBrushOnly,
    0,
    4,
    &v31);
  if ( v31.fraction <= 0.0 )
    return 0;
  startsolid = v31.startsolid;
  if ( v31.startsolid || v31.endpos.z > (vTo.z + 18.0) )
    return 0;
  m_pObstructionManager = TheNavMesh->m_pObstructionManager;
  if ( m_pObstructionManager == 0 )
    return 1;
  ray.m_Start.w = 0.0;
  v16 = vFromPos->y;
  v17 = vFromPos->z;
  vStart.x = vFromPos->x;
  vStart.y = v16;
  vStart.z = v17;
  vEnd.z = v21;
  vEnd.x = vStart.x;
  vEnd.y = v16;
  ray.m_Delta.w = 0.0;
  ray.m_StartOffset.w = 0.0;
  ray.m_Extents.w = 0.0;
  Ray_t::Init(&ray, &vStart, &vEnd, &NavTraceMins, &NavTraceMaxs);
  if ( (*(m_pObstructionManager->_vptr_INavObstructionManager + 9))(m_pObstructionManager, &ray) == 0 )
  {
    vStart.z = v21;
    vEnd.x = flUpa;
    vEnd.z = v21;
    v18 = vFromPos->x;
    vStart.y = vFromPos->y;
    vStart.x = v18;
    vEnd.y = v23;
    Ray_t::Init(&ray, &vStart, &vEnd, &NavTraceMins, &NavTraceMaxs);
    if ( (*(m_pObstructionManager->_vptr_INavObstructionManager + 9))(m_pObstructionManager, &ray) == 0 )
    {
      vStart.z = v21;
      vStart.x = flUpa;
      v19 = vToPos->z + 2.0;
      v20 = vToPos->x;
      vEnd.y = vToPos->y;
      vEnd.x = v20;
      vStart.y = v23;
      vEnd.z = v19;
      Ray_t::Init(&ray, &vStart, &vEnd, &NavTraceMins, &NavTraceMaxs);
      return (*(m_pObstructionManager->_vptr_INavObstructionManager + 9))(m_pObstructionManager, &ray) == 0;
    }
  }
  return startsolid;
}


// StayOnFloor  (line 2872, @0x00000000031f7960, libserver.so)  // inlines: GetFloat
// calls: __cxa_guard_acquire, ConVarRef::ConVarRef, __cxa_guard_release, __cxa_guard_abort, _Unwind_Resume
// callers: CNavGeneratorAAQuad::GenerationSampleStep, TraceAdjacentNode, TestStitchConnection
// strings: "nav_slope_limit"
// globals: TheNavMesh, `guard variable for'StayOnFloor(CGameTrace *,float)::nav_slope_limit, StayOnFloor(CGameTrace *,float)::nav_slope_limit
bool __fastcall StayOnFloor(trace_t *pTrace, float a2, float flZLimit)
{
  INavPhysicsInterface *m_pPhysicsInterface; // rdi
  __int64 v5; // rcx
  Vector vStart; // [rsp+10h] [rbp-30h] BYREF
  Vector vEnd; // [rsp+20h] [rbp-20h] BYREF

  m_pPhysicsInterface = TheNavMesh->m_pPhysicsInterface;
  if ( m_pPhysicsInterface == 0 )
    return 0;
  v5 = *&pTrace->endpos.x;
  vEnd.z = pTrace->endpos.z;
  *&vStart.x = v5;
  vStart.z = vEnd.z;
  *&vEnd.x = v5;
  vEnd.z = vEnd.z - a2;
  (*(m_pPhysicsInterface->_vptr_INavPhysicsInterface + 3))(
    m_pPhysicsInterface,
    &vStart,
    &vEnd,
    &NavTraceMins,
    &NavTraceMaxs,
    CNavConfig::ms_TraceMaskSolidBrushOnly,
    TheNavMesh->m_pTraceFilterWalkableEntities,
    pTrace);
  if ( pTrace->startsolid || pTrace->fraction >= 1.0 )
    return 0;
  if ( `guard variable for'StayOnFloor(CGameTrace *,float)::nav_slope_limit == 0
    && __cxa_guard_acquire(&`guard variable for'StayOnFloor(CGameTrace *,float)::nav_slope_limit) != 0 )
  {
    ConVarRef::ConVarRef(&StayOnFloor(CGameTrace *,float)::nav_slope_limit, "nav_slope_limit");
    __cxa_guard_release(&`guard variable for'StayOnFloor(CGameTrace *,float)::nav_slope_limit);
  }
  return StayOnFloor(CGameTrace *,float)::nav_slope_limit.m_pConVarState->m_Value.m_fValue <= pTrace->plane.normal.z;
}


// TraceAdjacentNode  (line 2904, @0x00000000031f7a70, libserver.so)  // inlines: DistToSqr, LengthSqr, Vector2DSubtract
// calls: StayOnFloor
// callers: CheckCliff, CNavGeneratorAAQuad::GenerationSampleStep, CNavGeneratorAAQuad::FixCornerOnCornerAreas, TestStitchConnection
// globals: TheNavMesh
bool __fastcall TraceAdjacentNode(
        int nDepth,
        const Vector *const vStart,
        const Vector *const vEnd,
        trace_t *pTrace,
        float zLimit)
{
  INavPhysicsInterface *m_pPhysicsInterface; // r12
  CTraceFilter *m_pTraceFilterWalkableEntities; // r13
  float x; // xmm1_4
  float v11; // xmm0_4
  float v12; // xmm1_4
  float v13; // xmm0_4
  __int64 v15; // rdx
  __int64 v16; // rax
  Vector vTestStart; // [rsp+20h] [rbp-70h] BYREF
  Vector vTestEnd; // [rsp+30h] [rbp-60h] BYREF
  Vector forwardTestStart; // [rsp+40h] [rbp-50h] BYREF
  Vector forwardTestEnd; // [rsp+50h] [rbp-40h] BYREF

  m_pPhysicsInterface = TheNavMesh->m_pPhysicsInterface;
  if ( m_pPhysicsInterface != 0 )
  {
    m_pTraceFilterWalkableEntities = TheNavMesh->m_pTraceFilterWalkableEntities;
    (*(m_pPhysicsInterface->_vptr_INavPhysicsInterface + 3))(
      TheNavMesh->m_pPhysicsInterface,
      vStart,
      vEnd,
      &NavTraceMins,
      &NavTraceMaxs,
      CNavConfig::ms_TraceMaskSolidBrushOnly,
      m_pTraceFilterWalkableEntities,
      pTrace);
    if ( !pTrace->startsolid )
    {
      x = pTrace->endpos.x;
      if ( x == vEnd->x && vEnd->y == pTrace->endpos.y )
        return StayOnFloor(pTrace, zLimit, x);
      if ( nDepth == 0
        || (v11 = vStart->x - x, v12 = vStart->y - pTrace->endpos.y,
                                 v13 = (v11 * v11) + (v12 * v12),
                                 x = 1.0,
                                 v13 >= 1.0) )
      {
        if ( StayOnFloor(pTrace, zLimit, x) )
        {
          v15 = *&pTrace->endpos.x;
          vTestEnd.z = pTrace->endpos.z;
          vTestStart.z = vTestEnd.z;
          *&vTestStart.x = v15;
          *&vTestEnd.x = v15;
          vTestEnd.z = vTestEnd.z + 18.0;
          (*(m_pPhysicsInterface->_vptr_INavPhysicsInterface + 3))(
            m_pPhysicsInterface,
            &vTestStart,
            &vTestEnd,
            &NavTraceMins,
            &NavTraceMaxs,
            CNavConfig::ms_TraceMaskSolidBrushOnly,
            m_pTraceFilterWalkableEntities,
            pTrace);
          forwardTestStart = pTrace->endpos;
          v16 = *&vEnd->x;
          forwardTestEnd.z = forwardTestStart.z;
          *&forwardTestEnd.x = v16;
          return TraceAdjacentNode(nDepth + 1, &forwardTestStart, &forwardTestEnd, pTrace, zLimit);
        }
      }
    }
  }
  return 0;
}


// TestStitchConnection  (line 2958, @0x00000000031f7c10, libserver.so)  // inlines: CGameTrace, RnCollisionAttr_t, operator=
// calls: CGameTrace::Init, TraceAdjacentNode, StayOnFloor
// callers: CNavMesh::StitchAreaIntoMesh<CNavGeneratorAAQuad::StitchGeneratedAreas()::IncrementallyGeneratedAreas>, CNavGeneratorAAQuad::ConnectGeneratedAreas, CNavGeneratorAAQuad::StitchGeneratedAreas, CNavMesh::StitchAreaIntoMesh<CNavMesh::StitchAreaSet(CUtlVector<CNavArea*>*)::CAreaSet>, CNavMesh::StitchAreaSet
// globals: TheNavMesh
bool __fastcall TestStitchConnection(
        CNavArea *a1,
        CNavArea *a2,
        const Vector *const vSourcePos,
        const Vector *const vTargetPos)
{
  INavPhysicsInterface *m_pPhysicsInterface; // r12
  CTraceFilter *m_pTraceFilterWalkableEntities; // r14
  bool result; // al
  int v9; // ebx
  float v10; // xmm1_4
  float height; // [rsp+2Ch] [rbp-1D4h]
  Vector vFrom; // [rsp+30h] [rbp-1D0h] BYREF
  Vector vPos; // [rsp+40h] [rbp-1C0h] BYREF
  Vector vStart; // [rsp+50h] [rbp-1B0h] BYREF
  Vector vEnd; // [rsp+60h] [rbp-1A0h] BYREF
  trace_t v16; // [rsp+70h] [rbp-190h] BYREF
  trace_t tr; // [rsp+120h] [rbp-E0h] BYREF

  m_pPhysicsInterface = TheNavMesh->m_pPhysicsInterface;
  if ( m_pPhysicsInterface == 0 )
    return 0;
  memset(&v16.m_ShapeAttributes, 0, 31);
  v16.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
  CGameTrace::Init(&v16);
  vFrom = *vSourcePos;
  vPos = *vTargetPos;
  m_pTraceFilterWalkableEntities = TheNavMesh->m_pTraceFilterWalkableEntities;
  result = TraceAdjacentNode(0, &vFrom, &vPos, &v16, 400.0);
  if ( !result )
  {
    v9 = 183;
    height = 18.0;
    while ( 1 )
    {
      memset(&tr.m_ShapeAttributes, 0, 31);
      tr.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
      CGameTrace::Init(&tr);
      *&vStart.x = *&vFrom.x;
      *&vEnd.x = *&vPos.x;
      vStart.z = vFrom.z + height;
      vEnd.z = vPos.z + height;
      (*(m_pPhysicsInterface->_vptr_INavPhysicsInterface + 3))(
        m_pPhysicsInterface,
        &vStart,
        &vEnd,
        &NavTraceMins,
        &NavTraceMaxs,
        CNavConfig::ms_TraceMaskSolidBrushOnly,
        m_pTraceFilterWalkableEntities,
        &tr);
      if ( !tr.startsolid && tr.fraction == 1.0 )
        break;
      --v9;
      height = height + 1.0;
      if ( v9 == 0 )
        return 0;
    }
    if ( StayOnFloor(&tr, 400.0, v10) )
    {
      vStart = vFrom;
      vEnd.x = vFrom.x;
      vEnd.y = vFrom.y;
      vEnd.z = vFrom.z + height;
      (*(m_pPhysicsInterface->_vptr_INavPhysicsInterface + 3))(
        m_pPhysicsInterface,
        &vStart,
        &vEnd,
        &NavTraceMins,
        &NavTraceMaxs,
        CNavConfig::ms_TraceMaskSolidBrushOnly,
        m_pTraceFilterWalkableEntities,
        &tr);
      return tr.fraction >= 1.0;
    }
    else
    {
      return 0;
    }
  }
  return result;
}


// IsValidJumpDownConnection  (line 3020, @0x00000000031f7f10, libserver.so)  // inlines: CGameTrace, ComputeOrientedPortal, DistToSqr, LengthSqr, RnCollisionAttr_t, Sqr, Vector2DSubtract, VectorAdd, VectorMultiply, operator*, operator+
// calls: CNavPoly::ComputeOrientedPortal, CNavOrientedPortal::GetCenter, CGameTrace::Init
// callers: JumpConnector::TryToConnect, CNavGenerator::StichAndRemoveJumpAreas, FindJumpDownArea
// globals: TheNavMesh, WalkableTraceMaxs, WalkableTraceMins
bool __fastcall IsValidJumpDownConnection(
        const CNavArea *const rStartArea,
        const CNavArea *const rDownArea,
        NavEdgeIndex nEdge,
        NavEdgeIndex nBackEdge)
{
  bool result; // al
  INavPhysicsInterface *m_pPhysicsInterface; // r13
  float z; // kr08_4
  float nBackEdgea; // [rsp+18h] [rbp-178h]
  Vector vStart; // [rsp+40h] [rbp-150h] BYREF
  Vector v13; // [rsp+50h] [rbp-140h]
  Vector vEnd; // [rsp+60h] [rbp-130h] BYREF
  CNavOrientedPortal portalOut; // [rsp+70h] [rbp-120h] BYREF
  CNavOrientedPortal portalIn; // [rsp+90h] [rbp-100h] BYREF
  trace_t v17; // [rsp+B0h] [rbp-E0h] BYREF
  Vector Center; // 0:kr34_12.12
  Vector v19; // 0:kr40_12.12

  result = 0;
  m_pPhysicsInterface = TheNavMesh->m_pPhysicsInterface;
  if ( m_pPhysicsInterface != 0 )
  {
    CNavPoly::ComputeOrientedPortal(rStartArea, rDownArea, nEdge, nBackEdge, -1.0, &portalOut);
    CNavPoly::ComputeOrientedPortal(rDownArea, rStartArea, nBackEdge, nEdge, -1.0, &portalIn);
    nBackEdgea = CNavGeneratorBase::sm_flGenerationStepSize;
    z = CNavOrientedPortal::GetCenter(&portalOut).z;
    if ( fabs(z - CNavOrientedPortal::GetCenter(&portalIn).z) > 5.0 )
      return 1;
    v17.startpos = CNavOrientedPortal::GetCenter(&portalIn);
    Center = CNavOrientedPortal::GetCenter(&portalOut);
    vEnd.z = Center.z;
    if ( (nBackEdgea * nBackEdgea) > (((Center.x - v17.startpos.x) * (Center.x - v17.startpos.x))
                                    + ((Center.y - v17.startpos.y) * (Center.y - v17.startpos.y))) )
      return 1;
    memset(&v17.m_ShapeAttributes, 0, 31);
    v17.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
    CGameTrace::Init(&v17);
    v19 = CNavOrientedPortal::GetCenter(&portalIn);
    *&vEnd.x = *&v19.x;
    v13 = CNavOrientedPortal::GetCenter(&portalOut);
    *&vStart.x = __PAIR64__((v13.y + v19.y) * 0.5, (v13.x + v19.x) * 0.5);
    vStart.z = (v13.z + v19.z) * 0.5;
    *&vEnd.x = __PAIR64__((v13.y + v19.y) * 0.5, (v13.x + v19.x) * 0.5);
    vEnd.z = vStart.z - 41.799999;
    (*(m_pPhysicsInterface->_vptr_INavPhysicsInterface + 3))(
      m_pPhysicsInterface,
      &vStart,
      &vEnd,
      &WalkableTraceMins,
      &WalkableTraceMaxs,
      CNavConfig::ms_TraceMaskSolidBrushOnly,
      TheNavMesh->m_pTraceFilterWalkableEntities,
      &v17);
    result = v17.startsolid;
    if ( v17.startsolid )
      return 0;
    if ( v17.fraction == 1.0 )
      return 1;
  }
  return result;
}


// FindJumpDownArea  (line 3058, @0x00000000031f8210, libserver.so)  // inlines: CGameTrace, FindFirstAreaOutFromEdge, RnCollisionAttr_t, VectorDivide, VectorMultiply, operator*, operator*=, operator+=, operator/
// calls: CNavPoly::GetEdgeNormalXY, CNavMesh::GetNavAreaWithLargestPortal, CGameTrace::Init, CNavPoly::GetZ, TestJumpDown, IsValidJumpDownConnection
// callers: CNavGeneratorAAQuad::ConnectAreaEdge, CNavMesh::StitchAreaIntoMesh<CNavGeneratorAAQuad::StitchGeneratedAreas()::IncrementallyGeneratedAreas>, CNavGeneratorAAQuad::ConnectGeneratedAreas, CNavGeneratorAAQuad::StitchGeneratedAreas, CNavMesh::StitchAreaIntoMesh<CNavMesh::StitchAreaSet(CUtlVector<CNavArea*>*)::CAreaSet>, CNavMesh::StitchAreaSet
// globals: TheNavMesh
CNavArea *__fastcall FindJumpDownArea(
        const Vector *const vFromPos,
        const CNavArea *const rStartArea,
        NavEdgeIndex nEdge,
        NavEdgeIndex *pBackEdge)
{
  INavPhysicsInterface *m_pPhysicsInterface; // r12
  vec_t v8; // xmm0_4
  vec_t v9; // xmm1_4
  int i; // ebx
  CNavArea *NavAreaWithLargestPortal; // rax
  float v12; // xmm2_4
  int v15; // [rsp+24h] [rbp-15Ch]
  float v16; // [rsp+28h] [rbp-158h]
  float v17; // [rsp+30h] [rbp-150h]
  float v18; // [rsp+34h] [rbp-14Ch]
  float rDownArea; // [rsp+38h] [rbp-148h]
  CNavArea *rDownAreaa; // [rsp+38h] [rbp-148h]
  Vector vStart; // [rsp+60h] [rbp-120h] BYREF
  Vector vToPos; // [rsp+70h] [rbp-110h] BYREF
  Vector vPos; // [rsp+80h] [rbp-100h] BYREF
  Vector v26; // [rsp+90h] [rbp-F0h]
  CGameTrace_2 v27; // [rsp+A0h] [rbp-E0h] BYREF
  Vector EdgeNormalXY; // 0:kr00_12.12

  EdgeNormalXY = CNavPoly::GetEdgeNormalXY(rStartArea, nEdge);
  m_pPhysicsInterface = TheNavMesh->m_pPhysicsInterface;
  v8 = (vFromPos->z + 35.5) + ((CNavGeneratorBase::sm_flGenerationStepSize * EdgeNormalXY.z) * 0.5);
  v16 = CNavGeneratorBase::sm_flGenerationStepSize * 4.0;
  v9 = ((EdgeNormalXY.x * CNavGeneratorBase::sm_flGenerationStepSize) * 0.5) + vFromPos->x;
  vStart.y = vFromPos->y + ((EdgeNormalXY.y * CNavGeneratorBase::sm_flGenerationStepSize) * 0.5);
  vStart.z = v8;
  vStart.x = v9;
  if ( m_pPhysicsInterface != 0 )
  {
    vPos = vStart;
    v26 = CNavPoly::GetEdgeNormalXY(rStartArea, nEdge);
    rDownArea = v26.x * CNavGeneratorBase::sm_flGenerationStepSize;
    v17 = CNavGeneratorBase::sm_flGenerationStepSize * v26.z;
    v18 = v26.y * CNavGeneratorBase::sm_flGenerationStepSize;
    v15 = ((v16 / CNavGeneratorBase::sm_flGenerationStepSize) + 0.5);
    if ( v15 > 0 )
    {
      for ( i = 1; v15 >= i; ++i )
      {
        memset(&v27.m_ShapeAttributes, 0, 31);
        vPos.x = rDownArea + vPos.x;
        v27.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
        vPos.y = v18 + vPos.y;
        vPos.z = v17 + vPos.z;
        CGameTrace::Init(&v27);
        (*(m_pPhysicsInterface->_vptr_INavPhysicsInterface + 2))(
          m_pPhysicsInterface,
          &vStart,
          &vPos,
          &NavTraceMins,
          &NavTraceMaxs,
          CNavConfig::ms_TraceMaskSolidBrushOnly,
          0,
          4,
          &v27);
        if ( v27.fraction < 1.0 )
          break;
        NavAreaWithLargestPortal = CNavMesh::GetNavAreaWithLargestPortal(
                                     TheNavMesh,
                                     &vPos,
                                     rStartArea,
                                     nEdge,
                                     400.0,
                                     pBackEdge);
        if ( NavAreaWithLargestPortal != 0 )
        {
          rDownAreaa = NavAreaWithLargestPortal;
          *&vToPos.x = *&vPos.x;
          vToPos.z = CNavPoly::GetZ(NavAreaWithLargestPortal, vPos.y, v12);
          if ( TestJumpDown(vFromPos, &vToPos) && IsValidJumpDownConnection(rStartArea, rDownAreaa, nEdge, *pBackEdge) )
            return rDownAreaa;
          return 0;
        }
      }
    }
  }
  return 0;
}


// CNavMesh::StitchAreaSet  (line 3085, @0x00000000031f8aa0, libserver.so)  // inlines: CAreaSet, GetCorner, GetVert, HasElement, NavHullAny, NormalizeInPlace, StitchAreaIntoMesh<CNavMesh::StitchAreaSet(CUtlVector<CNavArea*>*)::CAreaSet>, StitchMesh<CNavMesh::StitchAreaSet(CUtlVector<CNavArea*>*)::CAreaSet>, VectorAdd, VectorMultiply, VectorSubtract, operator(), operator*, operator+, operator-
// calls: CUtlVectorBase<CNavArea*, CUtlMemory<CNavArea*, int> >::Find, CNavMesh::StitchAreaIntoMesh<CNavMesh::StitchAreaSet(CUtlVector<CNavArea*>*)::CAreaSet>, VectorNormalize, NavHull_t::NavHull_t, CNavMesh::GetNavArea, FindJumpDownArea, CNavArea::ConnectTo, CNavPoly::GetZ, TestStitchConnection
// callers: CNavMesh::CommandNavMergeMesh
// globals: TheNavMesh
void __fastcall CNavMesh::StitchAreaSet(
        CNavMesh *const this,
        CUtlVector<CNavArea*,CUtlMemory<CNavArea*,int> > *pAreasToStitch)
{
  int m_Size; // eax
  CUtlVector<CNavArea*,CUtlMemory<CNavArea*,int> > *m_pAreas; // rdi
  CNavArea *v4; // rbx
  CNavMesh::StitchAreaSet::CAreaSet *v5; // rcx
  float v6; // xmm0_4
  float v7; // xmm1_4
  CNavMesh::StitchAreaSet::CAreaSet *const v8; // rcx
  float v9; // xmm0_4
  float v10; // xmm1_4
  CNavMesh::StitchAreaSet::CAreaSet *const v11; // rcx
  float v12; // xmm0_4
  float v13; // xmm1_4
  float x; // xmm7_4
  float y; // xmm6_4
  vec_t v16; // xmm1_4
  float v17; // xmm0_4
  bool v18; // cc
  CNavArea *NavArea; // rax
  CNavArea *v20; // r15
  float v21; // xmm2_4
  CNavArea *JumpDownArea; // rax
  __int64 v23; // [rsp+8h] [rbp-E8h]
  CNavArea *rArea; // [rsp+20h] [rbp-D0h]
  unsigned __int64 v26; // [rsp+28h] [rbp-C8h]
  float z; // [rsp+3Ch] [rbp-B4h]
  float v28; // [rsp+40h] [rbp-B0h]
  float v29; // [rsp+44h] [rbp-ACh]
  float v30; // [rsp+48h] [rbp-A8h]
  float v31; // [rsp+4Ch] [rbp-A4h]
  CNavMesh::StitchAreaSet::CAreaSet areaSet; // [rsp+50h] [rbp-A0h] BYREF
  CNavArea *v33; // [rsp+58h] [rbp-98h] BYREF
  CNavArea *v34; // [rsp+60h] [rbp-90h] BYREF
  CNavArea *v35; // [rsp+68h] [rbp-88h] BYREF
  Vector vec; // [rsp+70h] [rbp-80h] BYREF
  Vector vFromPos; // [rsp+80h] [rbp-70h] BYREF
  Vector vPos; // [rsp+90h] [rbp-60h] BYREF
  NavHull_t navHull; // [rsp+A0h] [rbp-50h]
  NavHull_t v40; // [rsp+B0h] [rbp-40h] BYREF

  m_Size = this->m_NavAreas.m_Size;
  areaSet.m_pAreas = pAreasToStitch;
  if ( m_Size != 0 )
  {
    m_pAreas = pAreasToStitch;
    v26 = 0;
    v23 = 8LL * (m_Size - 1) + 8;
    while ( 1 )
    {
      v4 = this->m_NavAreas.m_Memory.m_pMemory[v26 / 8];
      v33 = v4;
      if ( CUtlVectorBase<CNavArea *,CUtlMemory<CNavArea *,int>>::Find(m_pAreas, &v33) >= 0 )
      {
        CNavMesh::StitchAreaIntoMesh<CNavMesh::StitchAreaSet(CUtlVector<CNavArea *,CUtlMemory<CNavArea *,int>> *)::CAreaSet>(
          v4,
          0,
          &areaSet.m_pAreas,
          v5,
          v6,
          v7);
        CNavMesh::StitchAreaIntoMesh<CNavMesh::StitchAreaSet(CUtlVector<CNavArea *,CUtlMemory<CNavArea *,int>> *)::CAreaSet>(
          v4,
          &loc_2,
          &areaSet.m_pAreas,
          v8,
          v9,
          v10);
        CNavMesh::StitchAreaIntoMesh<CNavMesh::StitchAreaSet(CUtlVector<CNavArea *,CUtlMemory<CNavArea *,int>> *)::CAreaSet>(
          v4,
          (&loc_0 + 1),
          &areaSet.m_pAreas,
          v11,
          v12,
          v13);
        x = v4->m_vVerts[0].x;
        y = v4->m_vVerts[0].y;
        vec.z = 0.0;
        v29 = x;
        v28 = y;
        v16 = v4->m_vVerts[3].x - x;
        z = v4->m_vVerts[0].z;
        vec.y = v4->m_vVerts[3].y - y;
        vec.x = v16;
        v30 = VectorNormalize(&vec) - 1.0;
        if ( v30 > 0.0 )
        {
          v31 = 0.0;
          v17 = CNavGeneratorBase::sm_flGenerationStepSize;
          do
          {
            vFromPos.x = (vec.x * (v31 + 0.5)) + v29;
            vFromPos.y = (vec.y * (v31 + 0.5)) + v28;
            vFromPos.z = (((v31 + 0.5) * vec.z) + z) + 35.5;
            vPos.y = vFromPos.y;
            vPos.x = vFromPos.x - (v17 * 0.5);
            vPos.z = vFromPos.z;
            NavHull_t::NavHull_t(&v40, -1.0, vPos.x, 7u);
            navHull = v40;
            NavArea = CNavMesh::GetNavArea(TheNavMesh, &vPos, v40, 2, 0, 120.0, 0x40A00000u);
            v20 = NavArea;
            if ( NavArea != 0
              && (v34 = NavArea, CUtlVectorBase<CNavArea *,CUtlMemory<CNavArea *,int>>::Find(areaSet.m_pAreas, &v34) < 0) )
            {
              vPos.z = CNavPoly::GetZ(v20, vPos.y, v21) + 35.5;
              if ( TestStitchConnection(v4, v20, &vFromPos, &vPos) )
                CNavArea::ConnectTo(v4, v20, 3, -1, 1);
              if ( TestStitchConnection(v20, v4, &vPos, &vFromPos) )
                CNavArea::ConnectTo(v20, v4, 1, -1, 1);
            }
            else
            {
              vFromPos.z = (vFromPos.z - 35.5) + 1.0;
              JumpDownArea = FindJumpDownArea(&vFromPos, v4, 3, &v40);
              if ( v4 != JumpDownArea && JumpDownArea != 0 )
              {
                v35 = JumpDownArea;
                rArea = JumpDownArea;
                if ( CUtlVectorBase<CNavArea *,CUtlMemory<CNavArea *,int>>::Find(areaSet.m_pAreas, &v35) < 0 )
                  CNavArea::ConnectTo(v4, rArea, 3, v40.m_hullCategory, 1);
              }
            }
            v17 = CNavGeneratorBase::sm_flGenerationStepSize;
            v18 = v30 <= (v31 + CNavGeneratorBase::sm_flGenerationStepSize);
            v31 = v31 + CNavGeneratorBase::sm_flGenerationStepSize;
          }
          while ( !v18 );
        }
      }
      v26 += 8LL;
      if ( v26 == v23 )
        break;
      m_pAreas = areaSet.m_pAreas;
    }
  }
}


// CNavMesh::CalcAreaNavHullSupport  (line 3110, @0x00000000031f8580, libserver.so)
// callers: CNavArea::LoadCore
uint8 __fastcall CNavMesh::CalcAreaNavHullSupport(CNavMesh *const this, uint8 nAreaNavGenInfo)
{
  return 1 << nAreaNavGenInfo;
}


