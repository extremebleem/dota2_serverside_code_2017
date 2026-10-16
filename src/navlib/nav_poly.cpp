
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// _GLOBAL__sub_I_nav_poly.cpp  (line 0, @0x0000000001a6dd30, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Color, SetColor, Vector, __static_initialization_and_destruction_0
// calls: __cxa_atexit
// globals: __dso_handle, UNSPECIFIED_LOGGING_COLOR, NavTraceMins, CNavConfig::ms_AttributeTable, CUtlVector<CNavAttributeLookup,CUtlMemory<CNavAttributeLookup,int>>::~CUtlVector(), NavTraceMaxs
void __cdecl GLOBAL__sub_I_nav_poly_cpp()
{
  UNSPECIFIED_LOGGING_COLOR._color[0] = 0;
  NavTraceMins.x = -0.44999999;
  NavTraceMins.y = -0.44999999;
  UNSPECIFIED_LOGGING_COLOR._color[1] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[2] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[3] = 0;
  NavTraceMins.z = 0.0;
  NavTraceMaxs.x = 0.44999999;
  NavTraceMaxs.y = 0.44999999;
  NavTraceMaxs.z = 55.0;
  CNavConfig::ms_AttributeTable.m_Size = 0;
  CNavConfig::ms_AttributeTable.m_Memory.m_pMemory = 0;
  CNavConfig::ms_AttributeTable.m_Memory.m_nAllocationCount = 0;
  CNavConfig::ms_AttributeTable.m_Memory.m_nGrowSize = 0;
  __cxa_atexit(
    CUtlVector<CNavAttributeLookup,CUtlMemory<CNavAttributeLookup,int>>::~CUtlVector,
    &CNavConfig::ms_AttributeTable,
    &_dso_handle);
}


// NavHull_t::NavHull_t  (line 36, @0x00000000031ff9b0, libserver.so)
// callers: CSchemaClassBinding<CNavVolumeMarkupVolume>::ConstructInPlace, CSchemaClassBinding<CNavVolumeMarkupVolume>::Allocate, CSchemaClassBinding<CNavVolumeMarkupVolume>::AllocateAndCopyConstruct, CSchemaClassBinding<CNavVolumeBreadthFirstSearch>::ConstructInPlace, CSchemaClassBinding<CNavVolumeBreadthFirstSearch>::Allocate, CSchemaClassBinding<CNavVolumeBreadthFirstSearch>::AllocateAndCopyConstruct, CBaseCombatCharacter::GetNavHull, NavHull_t::NavHullAny, CNavEditor::CommandNavTestTestRayToMesh, NavHullCalcFromGenParamsGameDefaults, GetNavHullForSelectionConstraints, CNavMesh::StitchAreaIntoMesh<CNavGeneratorAAQuad::StitchGeneratedAreas()::IncrementallyGeneratedAreas> (36 total)
void __fastcall NavHull_t::NavHull_t(
        NavHull_t *const this,
        float a2,
        float flHullRadius,
        float flHullHeight,
        uint32 hullCategory)
{
  this->m_hullCategory = hullCategory;
  this->m_flHullRadius = a2;
  this->m_flHullHeight = flHullRadius;
}


// NavHull_t::Set  (line 45, @0x00000000031ff9d0, libserver.so)
void __fastcall NavHull_t::Set(
        NavHull_t *const this,
        float a2,
        float flHullRadius,
        float flHullHeight,
        uint32 hullCategory)
{
  this->m_flHullRadius = a2;
  this->m_flHullHeight = flHullRadius;
  this->m_hullCategory = hullCategory;
}


// CNavConfig::GetAttributeTable  (line 65, @0x00000000031ff9f0, libserver.so)
// callers: CNavEditor::DrawEditMode
// globals: CNavConfig::ms_AttributeTable
const CUtlVector<CNavAttributeLookup,CUtlMemory<CNavAttributeLookup,int> > *__cdecl CNavConfig::GetAttributeTable()
{
  return &CNavConfig::ms_AttributeTable;
}


// CNavConfig::NavAttributeAutocomplete  (line 73, @0x0000000003206b20, libserver.so)  // inlines: AddToTail, CUtlString, Construct<CUtlString>, Element, GrowMemory, V_strlen, V_strncpy<long unsigned int>, V_strnicmp_fast<int>, operator[]
// calls: strlen, _V_strncpy, _V_strrchr, _V_strnicmp_fast, CUtlString::Format, CUtlMemory<CUtlString, int>::Grow, __stack_chk_fail
// globals: CNavConfig::ms_AttributeTable
void __fastcall CNavConfig::NavAttributeAutocomplete(
        const char *pInput,
        CUtlVector<CUtlString,CUtlMemory<CUtlString,int> > *const rCommands)
{
  char *v4; // rax
  bool v5; // zf
  const char *v6; // rax
  const char *v7; // r13
  __int64 v8; // r14
  int v9; // ebx
  __int64 m_Size; // rax
  int v11; // edx
  __int64 v12; // rdi
  CUtlString *v13; // rax
  CUtlString *v14; // rdi
  int v15; // [rsp+8h] [rbp-88h]
  unsigned int v16; // [rsp+Ch] [rbp-84h]
  char command[72]; // [rsp+10h] [rbp-80h] BYREF
  unsigned __int64 v18; // [rsp+58h] [rbp-38h]

  v18 = __readfsqword(0x28u);
  if ( pInput == 0 || strlen(pInput) <= 63 )
  {
    _V_strncpy(command, pInput, 65);
    v4 = _V_strrchr(command, 32);
    if ( v4 != 0 )
    {
      *v4 = 0;
      v5 = v4 + 1 == 0;
      v6 = v4 + 1;
      v7 = v6;
      v16 = v5 ? 0 : strlen(v6);
      if ( CNavConfig::ms_AttributeTable.m_Size > 0 && rCommands->m_Size <= 63 )
      {
        v8 = 0;
        v9 = 0;
        do
        {
          if ( _V_strnicmp_fast(CNavConfig::ms_AttributeTable.m_Memory.m_pMemory[v8].m_Name, v7, v16) == 0 )
          {
            m_Size = rCommands->m_Size;
            v11 = rCommands->m_Size;
            if ( m_Size == rCommands->m_Memory.m_nAllocationCount )
            {
              v15 = rCommands->m_Size;
              CUtlMemory<CUtlString,int>::Grow(&rCommands->m_Memory, 1);
              v11 = rCommands->m_Size;
              m_Size = v15;
            }
            v12 = m_Size;
            rCommands->m_Size = v11 + 1;
            v13 = &rCommands->m_Memory.m_pMemory[m_Size];
            if ( v13 != 0 )
            {
              v13->m_pString = 0;
              v14 = &rCommands->m_Memory.m_pMemory[v12];
            }
            else
            {
              v14 = 0;
            }
            CUtlString::Format(v14, "%s %s", command, CNavConfig::ms_AttributeTable.m_Memory.m_pMemory[v8].m_Name);
          }
          if ( CNavConfig::ms_AttributeTable.m_Size <= ++v9 )
            break;
          ++v8;
        }
        while ( rCommands->m_Size <= 63 );
      }
    }
  }
}


// CNavConfig::NameToNavAttribute  (line 106, @0x00000000031ffa00, libserver.so)
// calls: V_stricmp_fast
// callers: CommandNavMarkAttribute, CommandNavClearAttribute, CommandNavSelectWithAttribute, CNavArea::SetNavDataProperty
// globals: CNavConfig::ms_AttributeTable
CNavAttribute __fastcall CNavConfig::NameToNavAttribute(const char *pName)
{
  int v2; // r12d
  __int64 v3; // rbx

  v2 = 0;
  v3 = 0;
  if ( CNavConfig::ms_AttributeTable.m_Size <= 0 )
    return 0;
  while ( V_stricmp_fast(CNavConfig::ms_AttributeTable.m_Memory.m_pMemory[v3].m_Name, pName) != 0 )
  {
    ++v2;
    ++v3;
    if ( CNavConfig::ms_AttributeTable.m_Size <= v2 )
      return 0;
  }
  return CNavConfig::ms_AttributeTable.m_Memory.m_pMemory[v3].m_NavAttribute.m_Flags;
}


// CNavConfig::NavAttributeToName  (line 121, @0x00000000031ffa80, libserver.so)  // inlines: operator[]
// callers: CNavEntityInterface::ApplyMarkup, CNavArea::GetNavDataProperties
// globals: CNavConfig::ms_AttributeTable
const char *__fastcall CNavConfig::NavAttributeToName(CNavAttribute navAttribute)
{
  CNavAttributeLookup *v1; // rax
  CNavAttributeLookup *m_pMemory; // r9

  if ( CNavConfig::ms_AttributeTable.m_Size <= 0 )
    return 0;
  if ( navAttribute.m_Flags != CNavConfig::ms_AttributeTable.m_Memory.m_pMemory->m_NavAttribute.m_Flags )
  {
    v1 = CNavConfig::ms_AttributeTable.m_Memory.m_pMemory + 1;
    while ( v1 != &CNavConfig::ms_AttributeTable.m_Memory.m_pMemory[(CNavConfig::ms_AttributeTable.m_Size - 1) + 1] )
    {
      m_pMemory = v1++;
      if ( navAttribute.m_Flags == *(CNavConfig::ms_AttributeTable.m_Memory.m_pMemory
                                   + (v1 - CNavConfig::ms_AttributeTable.m_Memory.m_pMemory)
                                   - 8) )
        return m_pMemory->m_Name;
    }
    return 0;
  }
  m_pMemory = CNavConfig::ms_AttributeTable.m_Memory.m_pMemory;
  return m_pMemory->m_Name;
}


// CNavConfig::FillAttributeTableBase  (line 135, @0x0000000003206cd0, libserver.so)  // inlines: AddToTail, CopyConstruct<CNavAttributeLookup>, Element, GrowMemory, operator[]
// calls: CUtlMemory<CNavAttributeLookup, int>::Grow
// callers: NavMeshFactory
// globals: CNavConfig::ms_AttributeTable
void __cdecl CNavConfig::FillAttributeTableBase()
{
  int m_Size; // eax
  int v1; // r12d
  CNavAttributeLookup *m_pMemory; // rax
  int v3; // ebx
  int v4; // ebx
  CNavAttributeLookup *v5; // r12
  int v6; // r12d
  int v7; // r12d
  CNavAttributeLookup *v8; // rbx
  int v9; // ebx
  int v10; // ebx
  CNavAttributeLookup *v11; // r12
  int v12; // r12d
  int v13; // r12d
  CNavAttributeLookup *v14; // rbx
  int v15; // ebx
  int v16; // ebx
  CNavAttributeLookup *v17; // r12
  int v18; // r12d
  int v19; // r12d
  CNavAttributeLookup *v20; // rbx
  int v21; // ebx
  int v22; // ebx
  CNavAttributeLookup *v23; // r12
  int v24; // eax
  CNavAttributeLookup *v25; // rbx

  m_Size = CNavConfig::ms_AttributeTable.m_Size;
  if ( CNavConfig::ms_AttributeTable.m_Size == 0 )
  {
    if ( CNavConfig::ms_AttributeTable.m_Memory.m_nAllocationCount == 0 )
    {
      CUtlMemory<CNavAttributeLookup,int>::Grow(&CNavConfig::ms_AttributeTable.m_Memory, 1);
      m_Size = CNavConfig::ms_AttributeTable.m_Size;
    }
    v1 = m_Size + 1;
    m_pMemory = CNavConfig::ms_AttributeTable.m_Memory.m_pMemory;
    CNavConfig::ms_AttributeTable.m_Size = v1;
    if ( CNavConfig::ms_AttributeTable.m_Memory.m_pMemory != 0 )
    {
      CNavConfig::ms_AttributeTable.m_Memory.m_pMemory->m_NavAttribute.m_Flags = 1;
      m_pMemory->m_Name = "CROUCH";
      v1 = CNavConfig::ms_AttributeTable.m_Size;
    }
    v3 = v1;
    if ( CNavConfig::ms_AttributeTable.m_Memory.m_nAllocationCount == v1 )
    {
      CUtlMemory<CNavAttributeLookup,int>::Grow(&CNavConfig::ms_AttributeTable.m_Memory, 1);
      v3 = CNavConfig::ms_AttributeTable.m_Size;
    }
    v4 = v3 + 1;
    CNavConfig::ms_AttributeTable.m_Size = v4;
    v5 = &CNavConfig::ms_AttributeTable.m_Memory.m_pMemory[v1];
    if ( v5 != 0 )
    {
      v5->m_NavAttribute.m_Flags = 2;
      v5->m_Name = "JUMP";
      v4 = CNavConfig::ms_AttributeTable.m_Size;
    }
    v6 = v4;
    if ( CNavConfig::ms_AttributeTable.m_Memory.m_nAllocationCount == v4 )
    {
      CUtlMemory<CNavAttributeLookup,int>::Grow(&CNavConfig::ms_AttributeTable.m_Memory, 1);
      v6 = CNavConfig::ms_AttributeTable.m_Size;
    }
    v7 = v6 + 1;
    CNavConfig::ms_AttributeTable.m_Size = v7;
    v8 = &CNavConfig::ms_AttributeTable.m_Memory.m_pMemory[v4];
    if ( v8 != 0 )
    {
      v8->m_NavAttribute.m_Flags = 4;
      v8->m_Name = "PRECISE";
      v7 = CNavConfig::ms_AttributeTable.m_Size;
    }
    v9 = v7;
    if ( CNavConfig::ms_AttributeTable.m_Memory.m_nAllocationCount == v7 )
    {
      CUtlMemory<CNavAttributeLookup,int>::Grow(&CNavConfig::ms_AttributeTable.m_Memory, 1);
      v9 = CNavConfig::ms_AttributeTable.m_Size;
    }
    v10 = v9 + 1;
    CNavConfig::ms_AttributeTable.m_Size = v10;
    v11 = &CNavConfig::ms_AttributeTable.m_Memory.m_pMemory[v7];
    if ( v11 != 0 )
    {
      v11->m_NavAttribute.m_Flags = 8;
      v11->m_Name = "NO_JUMP";
      v10 = CNavConfig::ms_AttributeTable.m_Size;
    }
    v12 = v10;
    if ( v10 == CNavConfig::ms_AttributeTable.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<CNavAttributeLookup,int>::Grow(&CNavConfig::ms_AttributeTable.m_Memory, 1);
      v12 = CNavConfig::ms_AttributeTable.m_Size;
    }
    v13 = v12 + 1;
    CNavConfig::ms_AttributeTable.m_Size = v13;
    v14 = &CNavConfig::ms_AttributeTable.m_Memory.m_pMemory[v10];
    if ( v14 != 0 )
    {
      v14->m_NavAttribute.m_Flags = 128;
      v14->m_Name = "AVOID";
      v13 = CNavConfig::ms_AttributeTable.m_Size;
    }
    v15 = v13;
    if ( CNavConfig::ms_AttributeTable.m_Memory.m_nAllocationCount == v13 )
    {
      CUtlMemory<CNavAttributeLookup,int>::Grow(&CNavConfig::ms_AttributeTable.m_Memory, 1);
      v15 = CNavConfig::ms_AttributeTable.m_Size;
    }
    v16 = v15 + 1;
    CNavConfig::ms_AttributeTable.m_Size = v16;
    v17 = &CNavConfig::ms_AttributeTable.m_Memory.m_pMemory[v13];
    if ( v17 != 0 )
    {
      v17->m_NavAttribute.m_Flags = 4096;
      v17->m_Name = "STAIRS";
      v16 = CNavConfig::ms_AttributeTable.m_Size;
    }
    v18 = v16;
    if ( CNavConfig::ms_AttributeTable.m_Memory.m_nAllocationCount == v16 )
    {
      CUtlMemory<CNavAttributeLookup,int>::Grow(&CNavConfig::ms_AttributeTable.m_Memory, 1);
      v18 = CNavConfig::ms_AttributeTable.m_Size;
    }
    v19 = v18 + 1;
    CNavConfig::ms_AttributeTable.m_Size = v19;
    v20 = &CNavConfig::ms_AttributeTable.m_Memory.m_pMemory[v16];
    if ( v20 != 0 )
    {
      v20->m_NavAttribute.m_Flags = 0x2000;
      v20->m_Name = "NO_MERGE";
      v19 = CNavConfig::ms_AttributeTable.m_Size;
    }
    v21 = v19;
    if ( CNavConfig::ms_AttributeTable.m_Memory.m_nAllocationCount == v19 )
    {
      CUtlMemory<CNavAttributeLookup,int>::Grow(&CNavConfig::ms_AttributeTable.m_Memory, 1);
      v21 = CNavConfig::ms_AttributeTable.m_Size;
    }
    v22 = v21 + 1;
    CNavConfig::ms_AttributeTable.m_Size = v22;
    v23 = &CNavConfig::ms_AttributeTable.m_Memory.m_pMemory[v19];
    if ( v23 != 0 )
    {
      v23->m_NavAttribute.m_Flags = 0x4000;
      v23->m_Name = "OBSTACLE_TOP";
      v22 = CNavConfig::ms_AttributeTable.m_Size;
    }
    v24 = v22;
    if ( CNavConfig::ms_AttributeTable.m_Memory.m_nAllocationCount == v22 )
    {
      CUtlMemory<CNavAttributeLookup,int>::Grow(&CNavConfig::ms_AttributeTable.m_Memory, 1);
      v24 = CNavConfig::ms_AttributeTable.m_Size;
    }
    CNavConfig::ms_AttributeTable.m_Size = v24 + 1;
    v25 = &CNavConfig::ms_AttributeTable.m_Memory.m_pMemory[v22];
    if ( v25 != 0 )
    {
      v25->m_NavAttribute.m_Flags = 0x8000;
      v25->m_Name = "CLIFF";
    }
  }
}


// GenerateAABBHull  (line 157, @0x00000000031ffaf0, libserver.so)  // inlines: VectorAdd, VectorSubtract, operator+, operator-, operator=
// callers: CMarkupVolume::OverlapsMarkupVolume, GenerateMarkupLocalHull, DoesHullOverlapNavMarkup, DoesPosOverlapNavMarkupHull, DoesPosOverlapNavMarkup
void __fastcall GenerateAABBHull(
        const Vector *const bbMin,
        const Vector *const bbMax,
        const Vector *const vInflate,
        Vector (*const markupHullPoints)[8])
{
  float y; // xmm4_4
  float z; // xmm3_4
  vec_t v6; // xmm0_4
  vec_t v7; // xmm1_4
  vec_t v8; // xmm5_4
  vec_t v9; // xmm4_4
  vec_t v10; // xmm2_4
  vec_t v11; // xmm3_4

  y = vInflate->y;
  z = vInflate->z;
  v6 = bbMin->x - vInflate->x;
  v7 = bbMin->y - y;
  v8 = vInflate->x + bbMax->x;
  v9 = y + bbMax->y;
  v10 = bbMin->z - z;
  v11 = z + bbMax->z;
  (*markupHullPoints)[0].x = v6;
  (*markupHullPoints)[0].y = v7;
  (*markupHullPoints)[0].z = v10;
  (*markupHullPoints)[1].x = v8;
  (*markupHullPoints)[1].y = v7;
  (*markupHullPoints)[1].z = v10;
  (*markupHullPoints)[2].x = v6;
  (*markupHullPoints)[2].y = v9;
  (*markupHullPoints)[2].z = v10;
  (*markupHullPoints)[3].x = v8;
  (*markupHullPoints)[3].y = v9;
  (*markupHullPoints)[3].z = v10;
  (*markupHullPoints)[4].x = v6;
  (*markupHullPoints)[4].y = v7;
  (*markupHullPoints)[4].z = v11;
  (*markupHullPoints)[5].x = v8;
  (*markupHullPoints)[5].y = v7;
  (*markupHullPoints)[5].z = v11;
  (*markupHullPoints)[6].x = v6;
  (*markupHullPoints)[6].y = v9;
  (*markupHullPoints)[6].z = v11;
  (*markupHullPoints)[7].x = v8;
  (*markupHullPoints)[7].y = v9;
  (*markupHullPoints)[7].z = v11;
}


// GenerateMarkupLocalHull  (line 173, @0x00000000031ffbb0, libserver.so)  // inlines: Vector
// calls: GenerateAABBHull
void __fastcall GenerateMarkupLocalHull(
        const Vector *const bbMin,
        const Vector *const bbMax,
        Vector (*const markupHullPoints)[8])
{
  Vector vInflate; // [rsp+0h] [rbp-10h] BYREF

  vInflate.x = 1.0;
  vInflate.y = 1.0;
  vInflate.z = 1.0;
  GenerateAABBHull(bbMin, bbMax, &vInflate, markupHullPoints);
}


// DoesHullOverlapNavMarkup  (line 186, @0x00000000031ffbe0, libserver.so)  // inlines: GenerateMarkupLocalHull, Vector
// calls: GenerateAABBHull
// callers: CNavPoly::IsOverlappingOBB
bool __fastcall DoesHullOverlapNavMarkup(
        const Vector *const bbMin,
        const Vector *const bbMax,
        const matrix3x4_t *const matBB,
        const Vector *pTestHullPoints,
        int nTestHullPoints)
{
  Vector vInflate; // [rsp+10h] [rbp-90h] BYREF
  Vector markupHullPoints[8]; // [rsp+20h] [rbp-80h] BYREF

  vInflate.x = 1.0;
  vInflate.y = 1.0;
  vInflate.z = 1.0;
  GenerateAABBHull(bbMin, bbMax, &vInflate, markupHullPoints);
  return (*(g_pVPhysics2->_vptr_IAppSystem + 58))(
           g_pVPhysics2,
           matBB,
           markupHullPoints,
           8,
           &g_MatrixIdentity,
           pTestHullPoints,
           nTestHullPoints) <= 0.0;
}


// DoesPosOverlapNavMarkupHull  (line 203, @0x00000000031ffc70, libserver.so)  // inlines: Vector
// calls: GenerateAABBHull
// callers: DoesPosOverlapNavMarkup
// local variable allocation has failed, the output may be wrong!
bool __fastcall DoesPosOverlapNavMarkupHull(
        unsigned int nMarkupHullPoints,
        Vector *pMarkupHullPoints,
        const matrix3x4_t *const rMarkupHullTransform,
        const Vector *const vPos,
        vec_t flInflate)
{
  float v8; // xmm0_4
  Vector v10; // [rsp+10h] [rbp-98h] BYREF
  Vector v11[8]; // [rsp+20h] [rbp-88h] OVERLAPPED BYREF

  if ( flInflate <= 0.0 )
  {
    (*(g_pVPhysics2->_vptr_IAppSystem + 58))(
      g_pVPhysics2,
      rMarkupHullTransform,
      pMarkupHullPoints,
      nMarkupHullPoints,
      &g_MatrixIdentity,
      vPos,
      1);
  }
  else
  {
    v10.x = flInflate;
    v10.y = flInflate;
    v10.z = flInflate;
    GenerateAABBHull(vPos, vPos, &v10, v11);
    v8 = (*(g_pVPhysics2->_vptr_IAppSystem + 58))(
           g_pVPhysics2,
           rMarkupHullTransform,
           pMarkupHullPoints,
           nMarkupHullPoints,
           &g_MatrixIdentity,
           v11,
           8);
  }
  return v8 <= 0.0;
}


// DoesPosOverlapNavMarkup  (line 228, @0x00000000031ffd40, libserver.so)  // inlines: GenerateMarkupLocalHull, Vector
// calls: GenerateAABBHull, DoesPosOverlapNavMarkupHull
bool __fastcall DoesPosOverlapNavMarkup(
        const Vector *const vHullBBMin,
        const Vector *const vHullBBMax,
        const matrix3x4_t *const mtxHull,
        const Vector *const vPos,
        vec_t flInflate)
{
  Vector vInflate; // [rsp+10h] [rbp-90h] BYREF
  Vector markupHullPoints[8]; // [rsp+20h] [rbp-80h] BYREF

  vInflate.x = 1.0;
  vInflate.y = 1.0;
  vInflate.z = 1.0;
  GenerateAABBHull(vHullBBMin, vHullBBMax, &vInflate, markupHullPoints);
  return DoesPosOverlapNavMarkupHull(8u, markupHullPoints, mtxHull, vPos, flInflate);
}


// DoesPosOverlapNavMarkup  (line 240, @0x00000000031ffdc0, libserver.so)  // inlines: GenerateMarkupLocalHull, Vector
// calls: GenerateAABBHull, DoesPosOverlapNavMarkupHull
// callers: CNavGenerator::AddWalkableSeedsForMarkup
bool __fastcall DoesPosOverlapNavMarkup(
        const NavGenDataMarkup_t *pMarkup,
        const Vector *const vPos,
        vec_t a3,
        float flInflate)
{
  Vector vInflate; // [rsp+10h] [rbp-90h] BYREF
  Vector markupHullPoints[8]; // [rsp+20h] [rbp-80h] BYREF

  vInflate.x = 1.0;
  vInflate.y = 1.0;
  vInflate.z = 1.0;
  GenerateAABBHull(&pMarkup->m_bbMin, &pMarkup->m_bbMax, &vInflate, markupHullPoints);
  return DoesPosOverlapNavMarkupHull(8u, markupHullPoints, &pMarkup->m_transform, vPos, a3);
}


// CNavPoly::CNavPoly  (line 256, @0x0000000003202480, libserver.so)  // inlines: Extent, Init, operator=
// calls: CNavPoly::GeometryChanged
// callers: CNavArea::CNavArea
void __fastcall CNavPoly::CNavPoly(CNavPoly *const this, CNavMesh *const rNavMesh)
{
  CNavPoly *v2; // rax
  int v3; // edx
  vec_t x; // xmm2_4
  vec_t y; // xmm1_4
  vec_t z; // xmm0_4

  this->_vptr_CNavPoly = &off_47CE410;
  v2 = this;
  this->m_Extent.lo.x = 3.4028235e38;
  v3 = 0;
  this->m_Extent.lo.y = 3.4028235e38;
  x = vec3_origin.x;
  this->m_Extent.lo.z = 3.4028235e38;
  y = vec3_origin.y;
  this->m_Extent.hi.x = -3.4028235e38;
  z = vec3_origin.z;
  this->m_Extent.hi.y = -3.4028235e38;
  this->m_Extent.hi.z = -3.4028235e38;
  this->m_nVerts = 4;
  this->m_flClearance = 0.0;
  this->m_nGenIndex = 0;
  this->m_rNavMesh = rNavMesh;
  this->m_nBoundaryEdges = 0;
  do
  {
    v2->m_vVerts[0].x = x;
    ++v3;
    v2 = (v2 + 12);
    *&v2->_vptr_CNavPoly = y;
    *(&v2->_vptr_CNavPoly + 1) = z;
    *&v2->m_rNavMesh = x;
    *(&v2->m_rNavMesh + 1) = y;
    *&v2->m_nHullSupport = z;
  }
  while ( this->m_nVerts > v3 );
  CNavPoly::GeometryChanged(this);
}


// CNavPoly::SavePoly  (line 277, @0x00000000031ffe40, libserver.so)  // inlines: LowLevelByteSwap<float>, LowLevelByteSwap<int>, PeekPut, PutFloat, PutInt, PutType<float>, PutType<int>, PutTypeBin<float>, PutTypeBin<int>, SwapBufferToTargetEndian<float>, SwapBufferToTargetEndian<int>, V_memcpy, memcpy, operator[]
// calls: CUtlBuffer::Printf, CUtlBuffer::Put, CUtlBuffer::CheckPut, CUtlBuffer::AddNullTermination
// callers: CNavArea::Save
void __fastcall CNavPoly::SavePoly(const CNavPoly *const this, CUtlBuffer *const rFileBuffer)
{
  int m_nVerts; // ebx
  Vector *m_vVerts; // r12
  int i; // ebx
  int m_Put; // eax
  int v8; // eax
  unsigned __int8 *v9; // rdx
  unsigned __int8 *v10; // rdx
  float m_flClearance; // [rsp+18h] [rbp-28h]
  int v12; // [rsp+1Ch] [rbp-24h]
  int v13; // [rsp+1Ch] [rbp-24h]

  m_nVerts = this->m_nVerts;
  if ( (rFileBuffer->m_Flags & 1) != 0 )
  {
    CUtlBuffer::Printf(rFileBuffer, "%d", m_nVerts);
  }
  else if ( CUtlBuffer::CheckPut(rFileBuffer, 4) )
  {
    if ( (*&rFileBuffer->m_Byteswap & 1) != 0 )
    {
      m_Put = rFileBuffer->m_Put;
      v10 = &rFileBuffer->m_Memory.m_pMemory[m_Put - rFileBuffer->m_nOffset];
      if ( v10 != 0 )
      {
        LOBYTE(v13) = HIBYTE(m_nVerts);
        BYTE1(v13) = BYTE2(m_nVerts);
        BYTE2(v13) = BYTE1(m_nVerts);
        HIBYTE(v13) = m_nVerts;
        *v10 = v13;
        m_Put = rFileBuffer->m_Put;
      }
    }
    else
    {
      *&rFileBuffer->m_Memory.m_pMemory[rFileBuffer->m_Put - rFileBuffer->m_nOffset] = m_nVerts;
      m_Put = rFileBuffer->m_Put;
    }
    rFileBuffer->m_Put = m_Put + 4;
    CUtlBuffer::AddNullTermination(rFileBuffer);
  }
  m_vVerts = this->m_vVerts;
  for ( i = 0; this->m_nVerts > i; ++m_vVerts )
  {
    CUtlBuffer::Put(rFileBuffer, m_vVerts, 12);
    ++i;
  }
  if ( (rFileBuffer->m_Flags & 1) != 0 )
  {
    CUtlBuffer::Printf(rFileBuffer, "%f", this->m_flClearance);
  }
  else
  {
    m_flClearance = this->m_flClearance;
    if ( CUtlBuffer::CheckPut(rFileBuffer, 4) )
    {
      if ( (*&rFileBuffer->m_Byteswap & 1) != 0 )
      {
        v8 = rFileBuffer->m_Put;
        v9 = &rFileBuffer->m_Memory.m_pMemory[v8 - rFileBuffer->m_nOffset];
        if ( v9 != 0 )
        {
          LOBYTE(v12) = HIBYTE(m_flClearance);
          BYTE1(v12) = BYTE2(m_flClearance);
          BYTE2(v12) = BYTE1(m_flClearance);
          HIBYTE(v12) = LOBYTE(m_flClearance);
          *v9 = v12;
          v8 = rFileBuffer->m_Put;
        }
      }
      else
      {
        *&rFileBuffer->m_Memory.m_pMemory[rFileBuffer->m_Put - rFileBuffer->m_nOffset] = m_flClearance;
        v8 = rFileBuffer->m_Put;
      }
      rFileBuffer->m_Put = v8 + 4;
      CUtlBuffer::AddNullTermination(rFileBuffer);
    }
  }
}


// CNavPoly::LoadPoly  (line 291, @0x00000000032002d0, libserver.so)  // inlines: GetFloat, GetInt, GetType<float>, GetType<int>, GetTypeBin<float>, GetTypeBin<int>, GetTypeText<float>, GetTypeText<int>, LowLevelByteSwap<float>, LowLevelByteSwap<int>, PeekGet, StringToNumber<float>, StringToNumber<int>, SwapBufferToTargetEndian<float>, SwapBufferToTargetEndian<int>, V_memcpy, memcpy, operator[]
// calls: CUtlBuffer::Get, CUtlBuffer::CheckArbitraryPeekGet, CNavPoly::IsDegenerate, DevWarning(char const*,...), CUtlBuffer::CheckGet, V_strtod, V_strtoi64
// callers: CNavArea::LoadCore
// strings: "Degenerate Navigation Area at ( %0.2f, %0.2f, %0.2f )\n"
NavErrorType __fastcall CNavPoly::LoadPoly(
        CNavPoly *const this,
        CUtlBuffer *const rFileBuffer,
        unsigned int nVersion,
        unsigned int nSubVersion)
{
  bool v7; // al
  float v8; // xmm0_4
  bool v9; // al
  float v10; // xmm0_4
  bool v12; // al
  __int64 v13; // rdx
  Vector *m_vVerts; // r13
  int v15; // r12d
  bool v16; // al
  float v17; // xmm0_4
  int v18; // ecx
  unsigned __int8 *v19; // rax
  bool v20; // al
  int m_Get; // eax
  bool v22; // zf
  int v23; // r12d
  int v24; // r12d
  int v25; // r12d
  bool v26; // al
  int v27; // eax
  bool v28; // al
  int v29; // eax
  int v30; // r12d
  float v31; // [rsp+0h] [rbp-40h] BYREF
  int nIncrement; // [rsp+4h] [rbp-3Ch] BYREF
  _QWORD v33[7]; // [rsp+8h] [rbp-38h] BYREF

  if ( nVersion <= 0x13 )
  {
    this->m_nVerts = 4;
    CUtlBuffer::Get(rFileBuffer, this->m_vVerts, 12);
    CUtlBuffer::Get(rFileBuffer, &this->m_vVerts[2], 12);
    this->m_vVerts[1].x = this->m_vVerts[2].x;
    this->m_vVerts[1].y = this->m_vVerts[0].y;
    if ( (rFileBuffer->m_Flags & 1) != 0 )
    {
      nIncrement = 128;
      v7 = CUtlBuffer::CheckArbitraryPeekGet(rFileBuffer, 0, &nIncrement);
      v8 = 0.0;
      if ( v7 )
      {
        v33[0] = &rFileBuffer->m_Memory.m_pMemory[rFileBuffer->m_Get - rFileBuffer->m_nOffset];
        v23 = v33[0];
        v8 = V_strtod(v33[0], v33);
        v31 = v8;
        if ( LODWORD(v33[0]) != v23 )
          rFileBuffer->m_Get += LODWORD(v33[0]) - v23;
      }
    }
    else
    {
      v20 = CUtlBuffer::CheckGet(rFileBuffer, 4);
      v8 = 0.0;
      if ( v20 )
      {
        m_Get = rFileBuffer->m_Get;
        v22 = (*&rFileBuffer->m_Byteswap & 1) == 0;
        v8 = *&rFileBuffer->m_Memory.m_pMemory[m_Get - rFileBuffer->m_nOffset];
        v31 = v8;
        if ( !v22 )
        {
          LOBYTE(v33[0]) = HIBYTE(v31);
          BYTE1(v33[0]) = BYTE2(v31);
          BYTE2(v33[0]) = BYTE1(v31);
          BYTE3(v33[0]) = LOBYTE(v31);
          v8 = *v33;
        }
        rFileBuffer->m_Get = m_Get + 4;
      }
    }
    this->m_vVerts[1].z = v8;
    this->m_vVerts[3].x = this->m_vVerts[0].x;
    this->m_vVerts[3].y = this->m_vVerts[2].y;
    if ( (rFileBuffer->m_Flags & 1) != 0 )
    {
      nIncrement = 128;
      v9 = CUtlBuffer::CheckArbitraryPeekGet(rFileBuffer, 0, &nIncrement);
      v10 = 0.0;
      if ( v9 )
      {
        v33[0] = &rFileBuffer->m_Memory.m_pMemory[rFileBuffer->m_Get - rFileBuffer->m_nOffset];
        v25 = v33[0];
        v10 = V_strtod(v33[0], v33);
        v31 = v10;
        if ( LODWORD(v33[0]) != v25 )
          rFileBuffer->m_Get += LODWORD(v33[0]) - v25;
      }
    }
    else
    {
      v28 = CUtlBuffer::CheckGet(rFileBuffer, 4);
      v10 = 0.0;
      if ( v28 )
      {
        v29 = rFileBuffer->m_Get;
        v22 = (*&rFileBuffer->m_Byteswap & 1) == 0;
        v10 = *&rFileBuffer->m_Memory.m_pMemory[v29 - rFileBuffer->m_nOffset];
        v31 = v10;
        if ( !v22 )
        {
          LOBYTE(v33[0]) = HIBYTE(v31);
          BYTE1(v33[0]) = BYTE2(v31);
          BYTE2(v33[0]) = BYTE1(v31);
          BYTE3(v33[0]) = LOBYTE(v31);
          v10 = *v33;
        }
        rFileBuffer->m_Get = v29 + 4;
      }
    }
    this->m_vVerts[3].z = v10;
    goto LABEL_7;
  }
  if ( (rFileBuffer->m_Flags & 1) != 0 )
  {
    nIncrement = 128;
    v12 = CUtlBuffer::CheckArbitraryPeekGet(rFileBuffer, 0, &nIncrement);
    v13 = 0;
    if ( v12 )
    {
      LOBYTE(v13) = 10;
      v33[0] = &rFileBuffer->m_Memory.m_pMemory[rFileBuffer->m_Get - rFileBuffer->m_nOffset];
      v24 = v33[0];
      LODWORD(v31) = V_strtoi64(v33[0], v33, v13);
      *&v13 = v31;
      if ( LODWORD(v33[0]) != v24 )
        rFileBuffer->m_Get += LODWORD(v33[0]) - v24;
    }
LABEL_12:
    this->m_nVerts = v13;
    if ( v13 > 0 )
    {
      m_vVerts = this->m_vVerts;
      v15 = 0;
      do
      {
        CUtlBuffer::Get(rFileBuffer, m_vVerts, 12);
        ++v15;
        ++m_vVerts;
      }
      while ( this->m_nVerts > v15 );
    }
    goto LABEL_15;
  }
  if ( CUtlBuffer::CheckGet(rFileBuffer, 4) )
  {
    if ( (*&rFileBuffer->m_Byteswap & 1) != 0 )
    {
      v18 = rFileBuffer->m_Get;
      v19 = &rFileBuffer->m_Memory.m_pMemory[v18 - rFileBuffer->m_nOffset];
      if ( v19 == 0 )
        v19 = &v31;
      *v33 = v31;
      LOBYTE(v33[0]) = v19[3];
      BYTE1(v33[0]) = v19[2];
      BYTE2(v33[0]) = v19[1];
      BYTE3(v33[0]) = *v19;
      LODWORD(v13) = v33[0];
    }
    else
    {
      v18 = rFileBuffer->m_Get;
      LODWORD(v13) = *&rFileBuffer->m_Memory.m_pMemory[v18 - rFileBuffer->m_nOffset];
    }
    rFileBuffer->m_Get = v18 + 4;
    goto LABEL_12;
  }
  this->m_nVerts = 0;
LABEL_15:
  if ( nVersion > 0x17 )
  {
    if ( (rFileBuffer->m_Flags & 1) != 0 )
    {
      nIncrement = 128;
      v16 = CUtlBuffer::CheckArbitraryPeekGet(rFileBuffer, 0, &nIncrement);
      v17 = 0.0;
      if ( v16 )
      {
        v33[0] = &rFileBuffer->m_Memory.m_pMemory[rFileBuffer->m_Get - rFileBuffer->m_nOffset];
        v30 = v33[0];
        v17 = V_strtod(v33[0], v33);
        v31 = v17;
        if ( LODWORD(v33[0]) != v30 )
          rFileBuffer->m_Get += LODWORD(v33[0]) - v30;
      }
    }
    else
    {
      v26 = CUtlBuffer::CheckGet(rFileBuffer, 4);
      v17 = 0.0;
      if ( v26 )
      {
        v27 = rFileBuffer->m_Get;
        v22 = (*&rFileBuffer->m_Byteswap & 1) == 0;
        v17 = *&rFileBuffer->m_Memory.m_pMemory[v27 - rFileBuffer->m_nOffset];
        v31 = v17;
        if ( !v22 )
        {
          LOBYTE(v33[0]) = HIBYTE(v31);
          BYTE1(v33[0]) = BYTE2(v31);
          BYTE2(v33[0]) = BYTE1(v31);
          BYTE3(v33[0]) = LOBYTE(v31);
          v17 = *v33;
        }
        rFileBuffer->m_Get = v27 + 4;
      }
    }
    this->m_flClearance = v17;
  }
LABEL_7:
  this->GeometryChanged();
  if ( CNavPoly::IsDegenerate(this) )
    DevWarning(
      "Degenerate Navigation Area at ( %0.2f, %0.2f, %0.2f )\n",
      this->m_vCenter.x,
      this->m_vCenter.y,
      this->m_vCenter.z);
  return NavErrorType::NAV_FILE_OK;
}


// CNavPoly::GeometryChanged  (line 341, @0x0000000003202390, libserver.so)  // inlines: ComputeMinMaxVertZ, GetVert, UpdateFlagMostlyFlat
// calls: CNavPoly::ComputeCenter, CNavPoly::ComputeExtent, CNavPoly::ComputeSurfaceArea, CNavPoly::ComputeDiameters, CNavPoly::ComputeNormal_New
// callers: CNavArea::GeometryChanged, CNavPoly::CNavPoly
void __fastcall CNavPoly::GeometryChanged(CNavPoly *const this)
{
  int m_nVerts; // ecx
  char v3; // si
  float v4; // xmm1_4
  int v5; // eax
  float v6; // xmm2_4
  vec_t *p_z; // rdx
  char v8; // di
  char v9; // di
  char v10; // si

  CNavPoly::ComputeCenter(this);
  CNavPoly::ComputeExtent(this);
  m_nVerts = this->m_nVerts;
  if ( m_nVerts <= 0 )
  {
    v10 = 3;
    v9 = 3;
  }
  else
  {
    v3 = -1;
    v4 = -3.4028235e38;
    v5 = 0;
    v6 = 3.4028235e38;
    p_z = &this->m_vVerts[0].z;
    v8 = -1;
    do
    {
      if ( v6 > *p_z )
      {
        v8 = v5;
        v6 = *p_z;
      }
      if ( *p_z > v4 )
      {
        v3 = v5;
        v4 = *p_z;
      }
      ++v5;
      p_z += 3;
    }
    while ( v5 != m_nVerts );
    v9 = v8 & 3;
    v10 = v3 & 3;
  }
  *(this + 124) = v10 | (4 * v9) | *(this + 124) & 0xF0;
  CNavPoly::ComputeSurfaceArea(this);
  CNavPoly::ComputeDiameters(this);
  CNavPoly::ComputeNormal_New(this);
  *(this + 124) = (16
                 * ((this->m_vVerts[*(this + 124) & 3].z - this->m_vVerts[(*(this + 124) >> 2) & 3].z) < 0.050000001))
                | *(this + 124) & 0xEF;
}


// CNavPoly::ComputeCenter  (line 354, @0x0000000003200e00, libserver.so)  // inlines: Begin, ComputeBC, Cross, CrossProduct, FastSqrt, GetArea, GetCenter, GetNextVertIndexCW, GetVert, Length, NavTriIterator, Next, VectorAdd, VectorDivide, VectorLength, VectorMultiply, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator*, operator+, operator+=, operator-, operator/, operator/=, operator=
// callers: CNavPoly::GeometryChanged
void __fastcall CNavPoly::ComputeCenter(CNavPoly *const this)
{
  int m_nVerts; // ecx
  float x; // xmm3_4
  float y; // xmm2_4
  float z; // xmm1_4
  int v5; // esi
  float *v6; // rdx
  float v7; // xmm4_4
  float v8; // xmm14_4
  float v9; // xmm15_4
  float *v10; // rdx
  float v11; // xmm7_4
  float v12; // xmm6_4
  float v13; // xmm5_4
  float v14; // xmm0_4
  float v15; // xmm0_4
  vec_t v16; // xmm14_4
  vec_t v17; // xmm15_4
  float *v18; // rdx
  float *v19; // rdx
  vec_t v20; // xmm0_4
  float flTotalArea; // [rsp+4h] [rbp-4h]

  m_nVerts = this->m_nVerts;
  x = this->m_vVerts[0].x;
  y = this->m_vVerts[0].y;
  z = this->m_vVerts[0].z;
  this->m_vCenter = vec3_origin;
  flTotalArea = 0.0;
  v5 = (m_nVerts - 1) % m_nVerts;
  v6 = (this + 12 * v5);
  v7 = v6[2];
  v8 = v6[3];
  v9 = v6[4];
  v10 = (this + 12 * ((m_nVerts + v5 - 1) % m_nVerts));
  v11 = v10[2];
  v12 = v10[3];
  v13 = v10[4];
  while ( v5 != 1 )
  {
    v14 = ((v8 - y) * (v13 - z)) - ((v9 - z) * (v12 - y));
    v15 = fsqrt(
            ((v14 * v14)
           + ((((v9 - z) * (v11 - x)) - ((v13 - z) * (v7 - x))) * (((v9 - z) * (v11 - x)) - ((v13 - z) * (v7 - x)))))
          + ((((v12 - y) * (v7 - x)) - ((v8 - y) * (v11 - x))) * (((v12 - y) * (v7 - x)) - ((v8 - y) * (v11 - x)))))
        * 0.5;
    flTotalArea = flTotalArea + v15;
    v5 = (m_nVerts + v5 - 1) % m_nVerts;
    v16 = ((((v8 + y) + v12) * 0.33333334) * v15) + this->m_vCenter.y;
    v17 = ((((v9 + z) + v13) * 0.33333334) * v15) + this->m_vCenter.z;
    v18 = (this + 12 * v5);
    this->m_vCenter.x = ((((v7 + x) + v11) * 0.33333334) * v15) + this->m_vCenter.x;
    this->m_vCenter.y = v16;
    this->m_vCenter.z = v17;
    v7 = v18[2];
    v8 = v18[3];
    v9 = v18[4];
    v19 = (this + 12 * ((m_nVerts + v5 - 1) % m_nVerts));
    v11 = v19[2];
    v12 = v19[3];
    v13 = v19[4];
  }
  if ( flTotalArea > 0.000001 )
  {
    this->m_vCenter.x = this->m_vCenter.x * (1.0 / flTotalArea);
    v20 = (1.0 / flTotalArea) * this->m_vCenter.z;
    this->m_vCenter.y = this->m_vCenter.y * (1.0 / flTotalArea);
    this->m_vCenter.z = v20;
  }
  else
  {
    this->m_vCenter.x = x;
    this->m_vCenter.y = y;
    this->m_vCenter.z = z;
  }
}


// CNavPoly::ComputeExtent  (line 379, @0x0000000003200020, libserver.so)  // inlines: Encompass, GetVert, Init
// callers: CNavPoly::GeometryChanged
void __fastcall CNavPoly::ComputeExtent(CNavPoly *const this)
{
  int m_nVerts; // esi
  Extent *p_m_Extent; // rsi
  int v3; // r8d
  Vector *p_hi; // rcx
  Vector *m_vVerts; // rdx
  __int64 v6; // rax
  float x; // xmm0_4
  float v8; // xmm1_4
  vec_t y; // xmm2_4
  _BYTE v10[8]; // [rsp-8h] [rbp-8h] BYREF

  m_nVerts = this->m_nVerts;
  this->m_Extent.lo.x = 3.4028235e38;
  this->m_Extent.lo.y = 3.4028235e38;
  this->m_Extent.lo.z = 3.4028235e38;
  this->m_Extent.hi.x = -3.4028235e38;
  this->m_Extent.hi.y = -3.4028235e38;
  this->m_Extent.hi.z = -3.4028235e38;
  if ( m_nVerts > 0 )
  {
    p_m_Extent = &this->m_Extent;
    v3 = 0;
    p_hi = &this->m_Extent.hi;
    m_vVerts = this->m_vVerts;
    do
    {
      v6 = 0;
      x = m_vVerts->x;
      *&v10[-8] = m_vVerts->z;
      v8 = p_m_Extent->lo.x;
      y = m_vVerts->y;
      *&v10[-16] = x;
      *&v10[-12] = y;
      if ( v8 <= x )
        goto LABEL_5;
LABEL_4:
      *(&p_m_Extent->lo.x + v6) = x;
      while ( 1 )
      {
LABEL_5:
        if ( x > *(&p_hi->x + v6) )
          *(&p_hi->x + v6) = x;
        v6 += 4;
        if ( v6 == 12 )
          break;
        x = *&v10[v6 - 16];
        if ( *(&p_m_Extent->lo.x + v6) > x )
          goto LABEL_4;
      }
      ++v3;
      ++m_vVerts;
    }
    while ( this->m_nVerts > v3 );
  }
}


// CNavPoly::ComputeSurfaceArea  (line 390, @0x0000000003200cc0, libserver.so)  // inlines: Begin, ComputeBC, Cross, CrossProduct, FastSqrt, GetArea, GetNextVertIndexCW, GetVert, Length, NavTriIterator, Next, VectorLength, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator-
// callers: CNavPoly::GeometryChanged
void __fastcall CNavPoly::ComputeSurfaceArea(CNavPoly *const this)
{
  int m_nVerts; // ecx
  float x; // xmm9_4
  float y; // xmm8_4
  float z; // xmm7_4
  int v5; // esi
  float *v6; // rdx
  float v7; // xmm5_4
  float v8; // xmm4_4
  float v9; // xmm2_4
  float *v10; // rdx
  float v11; // xmm3_4
  float v12; // xmm1_4
  float v13; // xmm6_4
  float v14; // xmm4_4
  float v15; // xmm2_4
  float v16; // xmm5_4
  float v17; // xmm1_4
  float *v18; // rdx
  float *v19; // rdx

  this->m_flSurfaceArea = 0.0;
  m_nVerts = this->m_nVerts;
  x = this->m_vVerts[0].x;
  y = this->m_vVerts[0].y;
  z = this->m_vVerts[0].z;
  v5 = (m_nVerts - 1) % m_nVerts;
  v6 = (this + 12 * v5);
  v7 = v6[2];
  v8 = v6[3];
  v9 = v6[4];
  v10 = (this + 12 * ((m_nVerts + v5 - 1) % m_nVerts));
  v11 = v10[2];
  v12 = v10[3];
  v13 = v10[4];
  while ( v5 != 1 )
  {
    v14 = v8 - y;
    v15 = v9 - z;
    v16 = v7 - x;
    v17 = v12 - y;
    this->m_flSurfaceArea = (fsqrt(
                               ((((v14 * (v13 - z)) - (v15 * v17)) * ((v14 * (v13 - z)) - (v15 * v17)))
                              + (((v15 * (v11 - x)) - ((v13 - z) * v16)) * ((v15 * (v11 - x)) - ((v13 - z) * v16))))
                             + (((v17 * v16) - ((v11 - x) * v14)) * ((v17 * v16) - ((v11 - x) * v14))))
                           * 0.5)
                          + this->m_flSurfaceArea;
    v5 = (m_nVerts + v5 - 1) % m_nVerts;
    v18 = (this + 12 * v5);
    v7 = v18[2];
    v8 = v18[3];
    v9 = v18[4];
    v19 = (this + 12 * ((m_nVerts + v5 - 1) % m_nVerts));
    v11 = v19[2];
    v12 = v19[3];
    v13 = v19[4];
  }
}


// CNavPoly::ComputeDiameters  (line 401, @0x00000000032008e0, libserver.so)  // inlines: DistTo, Dot, DotProduct, FastSqrt, GetVert, GetVertIndexCCWForEdge, Length, Max<float>, Min<float>, VectorLength, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator-
// calls: CNavPoly::GetEdgeNormal
// callers: CNavPoly::GeometryChanged
void __fastcall CNavPoly::ComputeDiameters(CNavPoly *const this)
{
  int v1; // esi
  Vector *v3; // rbx
  Vector *v4; // rdx
  int m_nVerts; // r10d
  __int64 v6; // rdi
  int v7; // r8d
  float m_flDiameterMax; // xmm3_4
  Vector *v9; // rax
  float v10; // xmm0_4
  float v11; // xmm0_4
  int v12; // ecx
  int v13; // esi
  int v14; // r13d
  float *v15; // rdx
  float v16; // xmm3_4
  Vector *m_vVerts; // rax
  float x; // xmm0_4
  float v19; // [rsp+4h] [rbp-4Ch]
  float v20; // [rsp+8h] [rbp-48h]
  float v21; // [rsp+Ch] [rbp-44h]
  Vector EdgeNormal; // 0:kr00_12.12

  v1 = 0;
  v3 = &this->m_vVerts[1];
  v4 = &this->m_vVerts[1];
  this->m_flDiameterMax = -3.4028235e38;
  m_nVerts = this->m_nVerts;
  v6 = 1;
  v7 = m_nVerts - 2;
  if ( m_nVerts - 2 > 0 )
  {
    do
    {
      if ( ++v1 < m_nVerts - 1 )
      {
        m_flDiameterMax = this->m_flDiameterMax;
        v9 = v4;
        while ( 1 )
        {
          ++v9;
          v10 = v4[-1].x - v9[-1].x;
          v11 = fmaxf(
                  fsqrt(
                    ((v10 * v10) + ((v4[-1].y - v9[-1].y) * (v4[-1].y - v9[-1].y)))
                  + ((v4[-1].z - v9[-1].z) * (v4[-1].z - v9[-1].z))),
                  m_flDiameterMax);
          this->m_flDiameterMax = v11;
          if ( v9 == &v3[v6 + (v7 - v1)] )
            break;
          m_flDiameterMax = v11;
        }
      }
      ++v4;
      ++v6;
    }
    while ( v1 < v7 );
  }
  this->m_flDiameterMin = 3.4028235e38;
  if ( m_nVerts > 0 )
  {
    v12 = m_nVerts;
    v13 = 0;
    v14 = 0;
    do
    {
      v15 = (this + 12 * ((v13 + 1) % v12));
      v19 = v15[2];
      v20 = v15[3];
      v21 = v15[4];
      EdgeNormal = CNavPoly::GetEdgeNormal(this, v13);
      v12 = this->m_nVerts;
      if ( v12 <= 0 )
      {
        v16 = -3.4028235e38;
      }
      else
      {
        v16 = -3.4028235e38;
        m_vVerts = this->m_vVerts;
        do
        {
          x = m_vVerts->x;
          ++m_vVerts;
          v16 = fmaxf(
                  v16,
                  (((x - v19) * -EdgeNormal.x) + ((m_vVerts[-1].y - v20) * -EdgeNormal.y))
                + ((m_vVerts[-1].z - v21) * -EdgeNormal.z));
        }
        while ( m_vVerts != &v3[v12 - 1] );
      }
      v13 = ++v14;
      this->m_flDiameterMin = fminf(v16, this->m_flDiameterMin);
    }
    while ( v14 < v12 );
  }
}


// CNavPoly::ComputeMinMaxVertZ  (line 434, @0x00000000032000e0, libserver.so)  // inlines: GetVert
void __fastcall CNavPoly::ComputeMinMaxVertZ(CNavPoly *const this)
{
  int m_nVerts; // ecx
  char v2; // si
  float v3; // xmm2_4
  int v4; // eax
  float v5; // xmm1_4
  vec_t *p_z; // rdx
  char v7; // r8
  char v8; // si
  char v9; // r8

  m_nVerts = this->m_nVerts;
  if ( m_nVerts <= 0 )
  {
    v9 = 3;
    v8 = 3;
  }
  else
  {
    v2 = -1;
    v3 = 3.4028235e38;
    v4 = 0;
    v5 = -3.4028235e38;
    p_z = &this->m_vVerts[0].z;
    v7 = -1;
    do
    {
      if ( v3 > *p_z )
      {
        v2 = v4;
        v3 = *p_z;
      }
      if ( *p_z > v5 )
      {
        v7 = v4;
        v5 = *p_z;
      }
      ++v4;
      p_z += 3;
    }
    while ( v4 != m_nVerts );
    v8 = v2 & 3;
    v9 = v7 & 3;
  }
  *(this + 124) = v9 | (4 * v8) | *(this + 124) & 0xF0;
}


// CNavPoly::UpdateFlagMostlyFlat  (line 466, @0x0000000003200160, libserver.so)  // inlines: GetVert
void __fastcall CNavPoly::UpdateFlagMostlyFlat(CNavPoly *const this)
{
  *(this + 124) = (16
                 * ((this->m_vVerts[*(this + 124) & 3].z - this->m_vVerts[(*(this + 124) >> 2) & 3].z) < 0.050000001))
                | *(this + 124) & 0xEF;
}


// CNavPoly::IsDegenerate  (line 476, @0x00000000032001b0, libserver.so)  // inlines: DistToSqr, GetVert, LengthSqr
// callers: CNavDrawArea::DrawArea_Internal, CNavPoly::LoadPoly
bool __fastcall CNavPoly::IsDegenerate(const CNavPoly *const this)
{
  int m_nVerts; // r10d
  Vector *v2; // rcx
  __int64 v3; // r9
  int v4; // esi
  Vector *v5; // rdi
  int v6; // r8d
  float x; // xmm5_4
  float y; // xmm3_4
  float z; // xmm4_4
  float *p_x; // rax
  float v11; // xmm0_4
  bool result; // al

  result = 1;
  if ( this->m_flSurfaceArea != 0.0 )
  {
    m_nVerts = this->m_nVerts;
    v2 = &this->m_vVerts[2];
    v3 = 1;
    v4 = 0;
    v5 = &this->m_vVerts[1];
    v6 = m_nVerts - 1;
    while ( v4 < v6 )
    {
      ++v4;
      x = v2[-2].x;
      y = v2[-2].y;
      z = v2[-2].z;
      if ( v4 < m_nVerts )
      {
        if ( ((((x - v2[-1].x) * (x - v2[-1].x)) + ((y - v2[-1].y) * (y - v2[-1].y))) + ((z - v2[-1].z) * (z - v2[-1].z))) < 1.0e-10 )
          return 1;
        p_x = &v2->x;
        while ( p_x != &v5[v3 + (v6 - v4)] )
        {
          v11 = x - *p_x;
          p_x += 3;
          if ( (((v11 * v11) + ((y - *(p_x - 2)) * (y - *(p_x - 2)))) + ((z - *(p_x - 1)) * (z - *(p_x - 1)))) < 1.0e-10 )
            return 1;
        }
      }
      ++v2;
      ++v3;
    }
    return 0;
  }
  return result;
}


// CNavPoly::GetEdgeLength  (line 506, @0x0000000003200790, libserver.so)  // inlines: DistTo, FastSqrt, GetVert, GetVertIndexCCWForEdge, Length, VectorLength, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss
// callers: CNavArea::UpdateFlagBottleneck
float __fastcall CNavPoly::GetEdgeLength(const CNavPoly *const this, NavEdgeIndex nEdge)
{
  float *v2; // r8
  float *v3; // rcx
  float v4; // xmm0_4

  v2 = (this + 12 * ((nEdge + 1) % this->m_nVerts));
  v3 = (this + 12 * nEdge);
  v4 = v2[2] - v3[2];
  return fsqrt(((v4 * v4) + ((v2[3] - v3[3]) * (v2[3] - v3[3]))) + ((v2[4] - v3[4]) * (v2[4] - v3[4])));
}


// CNavPoly::GetEdgeNormal  (line 515, @0x0000000003200800, libserver.so)  // inlines: Cross, CrossProduct, GetVert, GetVertIndexCCWForEdge, NormalizedSafe, VectorSubtract, operator-
// calls: VectorNormalize
// callers: CNavDrawArea::DrawPolyOutline_Internal, CNavDrawArea::DrawAreaConnection, CPath::ComputePathDetails, FindBoundaryVert, CNavMesh::GetNavMeshConnectionsAsDebugGeometry, CNavPoly::ComputeDiameters, CNavPoly::GetVertInset, CNavPoly::ClipPolyVertsToHullClearance
Vector __fastcall CNavPoly::GetEdgeNormal(const CNavPoly *const this, NavEdgeIndex nEdge)
{
  float y; // xmm5_4
  float z; // xmm3_4
  float x; // xmm6_4
  __int64 v5; // rax
  float *v6; // rsi
  float *v7; // rcx
  float v8; // xmm1_4
  float v9; // xmm2_4
  float v10; // xmm0_4
  float v11; // xmm0_4
  vec_t v13; // xmm2_4
  vec_t v14; // xmm0_4
  Vector vec; // [rsp+10h] [rbp-10h] BYREF
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  y = this->m_vNormal_New.y;
  z = this->m_vNormal_New.z;
  x = this->m_vNormal_New.x;
  v5 = (nEdge + 1) % this->m_nVerts;
  v6 = (this + 12 * nEdge);
  v7 = (this + 12 * v5);
  v8 = v6[3] - v7[3];
  v9 = v6[4] - v7[4];
  v10 = v6[2] - v7[2];
  vec.x = (v9 * y) - (v8 * z);
  vec.y = (z * v10) - (v9 * x);
  vec.z = (v8 * x) - (v10 * y);
  v11 = VectorNormalize(&vec);
  result.z = 0.0;
  if ( v11 == 0.0 )
  {
    v13 = 1.0;
    v14 = 0.0;
  }
  else
  {
    v13 = vec.x;
    v14 = vec.y;
    result.z = vec.z;
  }
  *&result.x = __PAIR64__(LODWORD(v14), LODWORD(v13));
  return result;
}


// CNavPoly::GetEdgeNormalXY  (line 527, @0x0000000003200ae0, libserver.so)  // inlines: Cross, CrossProduct, GetVertIndexCCWForEdge, NormalizeInPlace, VectorSubtract, operator-
// calls: VectorNormalize
// callers: CNavPathJumpProcessLandingZone::FindLandingBoxExit, CNavArea::GetBackEdgeIndex, FindBoundaryEdgeAroundVert, FindJumpDownArea, CNavPoly::IsOverlappingPoint, CNavPoly::IsOverlappingPointForHull
Vector __fastcall CNavPoly::GetEdgeNormalXY(const CNavPoly *const this, NavEdgeIndex nEdge)
{
  float *v2; // rdx
  float *v3; // rax
  float v4; // xmm1_4
  Vector vN; // [rsp+10h] [rbp-20h] BYREF
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  v2 = (this + 12 * nEdge);
  v3 = (this + 12 * ((nEdge + 1) % this->m_nVerts));
  v4 = v2[3] - v3[3];
  vN.y = v2[2] - v3[2];
  vN.x = 0.0 - v4;
  vN.z = (v4 * 0.0) - (vN.y * 0.0);
  VectorNormalize(&vN);
  *&result.x = *&vN.x;
  result.z = vN.z;
  return result;
}


// CNavPoly::GetVertInset  (line 540, @0x0000000003200b60, libserver.so)  // inlines: Dot, DotProduct, GetEdgeIndexCWFromVert, GetVert, Min<float>, Normalized, VectorAdd, VectorMultiply, VectorSubtract, operator*, operator+, operator-
// calls: CNavPoly::GetEdgeNormal, VectorNormalize
// callers: CNavAreaExtended::ComputeLighting, CNavDrawArea::DrawPolyOutline_Internal, CNavDrawArea::DrawPolyFilled_Internal, CNavMesh::PlaceVertOnGround
__m128i __fastcall CNavPoly::GetVertInset(const CNavPoly *const this, int nVert, float a3, float flInset)
{
  __int64 v4; // r12
  float *v6; // rdx
  float v7; // xmm6_4
  float v8; // xmm5_4
  float v9; // xmm0_4
  float v11; // [rsp+10h] [rbp-40h]
  float v12; // [rsp+14h] [rbp-3Ch]
  float v13; // [rsp+18h] [rbp-38h]
  __m128i vec[2]; // [rsp+30h] [rbp-20h] BYREF
  Vector EdgeNormal; // 0:kr00_12.12
  Vector v17; // 0:kr14_12.12

  v4 = nVert;
  EdgeNormal = CNavPoly::GetEdgeNormal(this, (this->m_nVerts + nVert - 1) % this->m_nVerts);
  vec[0].m128i_i32[2] = LODWORD(EdgeNormal.z);
  v17 = CNavPoly::GetEdgeNormal(this, v4);
  vec[0].m128i_i64[0] = *&v17.x;
  v6 = (this + 12 * v4);
  v7 = v6[2];
  v8 = v6[3];
  *vec[0].m128i_i32 = -EdgeNormal.x - v17.x;
  v11 = v7;
  v12 = v8;
  v13 = v6[4];
  *&vec[0].m128i_i32[1] = -EdgeNormal.y - v17.y;
  *&vec[0].m128i_i32[2] = -EdgeNormal.z - v17.z;
  VectorNormalize(vec);
  v9 = fminf(
         ((((this->m_vCenter.x - v11) * *vec[0].m128i_i32) + ((this->m_vCenter.y - v12) * *&vec[0].m128i_i32[1]))
        + ((this->m_vCenter.z - v13) * *&vec[0].m128i_i32[2]))
       - 1.0,
         a3);
  *vec[0].m128i_i32 = (*vec[0].m128i_i32 * v9) + v11;
  *&vec[0].m128i_i32[1] = (*&vec[0].m128i_i32[1] * v9) + v12;
  return _mm_loadl_epi64(vec);
}


// CNavPoly::IsClosestPointFartherThanThreshold2D  (line 561, @0x00000000032033a0, libserver.so)  // inlines: DistSqToPoint2D, DistToSqr, LengthSqr, Square<float>, Vector2DSubtract
// calls: CNavPoly::GetClosestPointOnPoly2D
bool __fastcall CNavPoly::IsClosestPointFartherThanThreshold2D(
        const CNavPoly *const this,
        const Vector2D *const vPos,
        float a3,
        float flThresholdDist)
{
  float v4; // xmm2_4
  float x; // xmm1_4
  float v7; // xmm0_4
  float v8; // xmm0_4
  float y; // xmm1_4
  float v10; // xmm3_4
  float v11; // xmm3_4
  bool result; // al
  float v13; // xmm0_4
  float v14; // [rsp-24h] [rbp-2Ch]
  Vector ClosestPointOnPoly2D; // 0:kr00_12.12

  v4 = a3 * a3;
  x = vPos->x;
  v7 = this->m_Extent.lo.x;
  if ( v7 > vPos->x )
  {
    v8 = v7 - x;
    goto LABEL_3;
  }
  v13 = this->m_Extent.hi.x;
  if ( x <= v13 )
  {
    v8 = 0.0;
LABEL_3:
    y = vPos->y;
    v10 = this->m_Extent.lo.y;
    if ( v10 <= y )
      goto LABEL_4;
LABEL_11:
    v8 = v10 - y;
    goto LABEL_6;
  }
  v10 = this->m_Extent.lo.y;
  v8 = x - v13;
  y = vPos->y;
  if ( v10 > y )
    goto LABEL_11;
LABEL_4:
  v11 = this->m_Extent.hi.y;
  if ( y > v11 )
    v8 = y - v11;
LABEL_6:
  result = 0;
  if ( v4 >= ((v8 * v8) + 0.0) )
  {
    v14 = v4;
    ClosestPointOnPoly2D = CNavPoly::GetClosestPointOnPoly2D(this, vPos);
    return v14 > (((vPos->x - ClosestPointOnPoly2D.x) * (vPos->x - ClosestPointOnPoly2D.x))
                + ((vPos->y - ClosestPointOnPoly2D.y) * (vPos->y - ClosestPointOnPoly2D.y)));
  }
  return result;
}


// CNavPoly::FindClosestVertIndex  (line 575, @0x0000000003201060, libserver.so)  // inlines: DistToSqr, LengthSqr
// callers: CNavAreaExtended::GetLightIntensity
int __fastcall CNavPoly::FindClosestVertIndex(const CNavPoly *const this, const Vector *const vPos)
{
  int result; // eax
  int m_nVerts; // ecx
  float x; // xmm6_4
  Vector *m_vVerts; // rdi
  int v6; // edx
  float z; // xmm4_4
  float v8; // xmm3_4

  result = -1;
  m_nVerts = this->m_nVerts;
  if ( m_nVerts > 0 )
  {
    m_vVerts = this->m_vVerts;
    v6 = 0;
    v8 = 3.4028235e38;
    do
    {
      z = vPos->z;
      x = vPos->x;
      if ( v8 > ((((x - m_vVerts->x) * (x - m_vVerts->x)) + ((vPos->y - m_vVerts->y) * (vPos->y - m_vVerts->y)))
               + ((z - m_vVerts->z) * (z - m_vVerts->z))) )
      {
        v8 = (((x - m_vVerts->x) * (x - m_vVerts->x)) + ((vPos->y - m_vVerts->y) * (vPos->y - m_vVerts->y)))
           + ((z - m_vVerts->z) * (z - m_vVerts->z));
        result = v6;
      }
      ++v6;
      ++m_vVerts;
    }
    while ( v6 != m_nVerts );
  }
  return result;
}


// CNavPoly::FindClosestVertIndex2D  (line 592, @0x00000000032010e0, libserver.so)  // inlines: DistToSqr, LengthSqr, Vector2DSubtract
int __fastcall CNavPoly::FindClosestVertIndex2D(const CNavPoly *const this, const Vector2D *const vPos)
{
  int result; // eax
  int m_nVerts; // ecx
  float x; // xmm4_4
  Vector *m_vVerts; // rdi
  int v6; // edx
  float v7; // xmm2_4

  result = -1;
  m_nVerts = this->m_nVerts;
  if ( m_nVerts > 0 )
  {
    m_vVerts = this->m_vVerts;
    v6 = 0;
    v7 = 3.4028235e38;
    do
    {
      x = vPos->x;
      if ( v7 > (((x - m_vVerts->x) * (x - m_vVerts->x)) + ((vPos->y - m_vVerts->y) * (vPos->y - m_vVerts->y))) )
      {
        v7 = ((x - m_vVerts->x) * (x - m_vVerts->x)) + ((vPos->y - m_vVerts->y) * (vPos->y - m_vVerts->y));
        result = v6;
      }
      ++v6;
      ++m_vVerts;
    }
    while ( v6 != m_nVerts );
  }
  return result;
}


// CNavPoly::SetCorner  (line 610, @0x0000000003201150, libserver.so)  // inlines: operator=
void __fastcall CNavPoly::SetCorner(CNavPoly *const this, NavCornerType corner, const Vector *const vPos)
{
  this->m_vVerts[corner] = *vPos;
  this->GeometryChanged();
}


// CNavPoly::SetCorners  (line 623, @0x00000000032028e0, libserver.so)  // inlines: GetZ, IsOverlappingPoint, operator=
// calls: CNavPoly::IsOverlappingPoint, CNavPoly::GetZ
// callers: CNavPoly::MergeWithPoly
void __fastcall CNavPoly::SetCorners(
        CNavPoly *const this,
        const Vector *const vNW,
        const Vector *const vSE,
        const CNavPoly *const rPolyForHeight,
        const CNavPoly *pPolyForHeightAlt)
{
  float y; // xmm1_4
  vec_t x; // xmm0_4
  float z; // xmm2_4
  char IsOverlappingPoint; // al
  float v12; // xmm2_4
  const CNavPoly *v13; // rdi
  float v14; // xmm0_4
  float v15; // xmm1_4
  float v16; // xmm2_4
  float v17; // xmm0_4
  int (**vptr_CNavPoly)(...); // rax
  float v19; // xmm0_4

  this->m_vVerts[0].x = vNW->x;
  y = vNW->y;
  this->m_vVerts[0].y = y;
  this->m_vVerts[0].z = vNW->z;
  x = vSE->x;
  this->m_vVerts[2].x = vSE->x;
  this->m_vVerts[2].y = vSE->y;
  z = vSE->z;
  this->m_vVerts[1].x = x;
  this->m_vVerts[1].y = y;
  this->m_vVerts[2].z = z;
  this->m_vVerts[1].z = 0.0;
  if ( pPolyForHeightAlt != 0 )
  {
    IsOverlappingPoint = CNavPoly::IsOverlappingPoint(pPolyForHeightAlt, &this->m_vVerts[1], 1.0, y);
    v13 = rPolyForHeight;
    if ( IsOverlappingPoint != 0 )
      v13 = pPolyForHeightAlt;
    v14 = CNavPoly::GetZ(v13, this->m_vVerts[1].x, this->m_vVerts[1].y, v12);
    this->m_vVerts[3].z = 0.0;
    this->m_vVerts[1].z = v14;
    this->m_vVerts[3].x = this->m_vVerts[0].x;
    this->m_vVerts[3].y = this->m_vVerts[2].y;
    if ( CNavPoly::IsOverlappingPoint(pPolyForHeightAlt, &this->m_vVerts[3], 1.0, v15) != 0 )
    {
      v17 = CNavPoly::GetZ(pPolyForHeightAlt, this->m_vVerts[1].x, this->m_vVerts[1].y, v16);
      goto LABEL_6;
    }
  }
  else
  {
    v19 = CNavPoly::GetZ(rPolyForHeight, x, y, z);
    this->m_vVerts[3].z = 0.0;
    this->m_vVerts[1].z = v19;
    this->m_vVerts[3].x = this->m_vVerts[0].x;
    this->m_vVerts[3].y = this->m_vVerts[2].y;
  }
  v17 = CNavPoly::GetZ(rPolyForHeight, this->m_vVerts[1].x, this->m_vVerts[1].y, v16);
LABEL_6:
  vptr_CNavPoly = this->_vptr_CNavPoly;
  this->m_vVerts[3].z = v17;
  (*vptr_CNavPoly)(this);
}


// CNavPoly::SetCorners  (line 656, @0x00000000032013c0, libserver.so)  // inlines: GetCorner, GetVert
// calls: CNavPoly::SetCorners
// callers: CNavSplice::ExpandSpliceMesh, CNavMesh::MergeNavMesh
void __fastcall CNavPoly::SetCorners(CNavPoly *const this, const CNavPoly *const rSrc)
{
  vec_t z; // xmm0_4
  vec_t x; // xmm2_4
  vec_t y; // xmm1_4
  vec_t v5; // xmm0_4
  vec_t v6; // xmm2_4
  vec_t v7; // xmm1_4
  vec_t v8; // xmm0_4
  vec_t v9; // xmm2_4
  vec_t v10; // xmm1_4
  vec_t v11; // xmm0_4
  vec_t v12; // xmm2_4
  Vector nwCorner; // [rsp+0h] [rbp-40h] BYREF
  Vector neCorner; // [rsp+10h] [rbp-30h] BYREF
  Vector seCorner; // [rsp+20h] [rbp-20h] BYREF
  Vector swCorner; // [rsp+30h] [rbp-10h] BYREF

  z = rSrc->m_vVerts[3].z;
  x = rSrc->m_vVerts[3].x;
  swCorner.y = rSrc->m_vVerts[3].y;
  y = rSrc->m_vVerts[2].y;
  swCorner.z = z;
  swCorner.x = x;
  v5 = rSrc->m_vVerts[2].z;
  v6 = rSrc->m_vVerts[2].x;
  seCorner.y = y;
  seCorner.z = v5;
  v7 = rSrc->m_vVerts[1].y;
  v8 = rSrc->m_vVerts[1].z;
  seCorner.x = v6;
  v9 = rSrc->m_vVerts[1].x;
  neCorner.y = v7;
  neCorner.z = v8;
  v10 = rSrc->m_vVerts[0].y;
  neCorner.x = v9;
  v11 = rSrc->m_vVerts[0].z;
  v12 = rSrc->m_vVerts[0].x;
  nwCorner.y = v10;
  nwCorner.z = v11;
  nwCorner.x = v12;
  CNavPoly::SetCorners(this, &nwCorner, &neCorner, &seCorner, &swCorner);
}


// CNavPoly::SetCorners  (line 664, @0x0000000003201460, libserver.so)
// calls: CNavPoly::SetCorners
// callers: CNavSplice::ExpandSpliceMeshIncremental
void __fastcall CNavPoly::SetCorners(
        CNavPoly *const this,
        NavCornerType startCorner,
        const Vector *const vC0,
        const Vector *const vC1,
        const Vector *const vC2,
        const Vector *const vC3)
{
  if ( startCorner == NavCornerType::NORTH_EAST )
  {
    CNavPoly::SetCorners(this, vC1, vC0, vC3, vC2);
  }
  else if ( startCorner <= NavCornerType::NORTH_EAST )
  {
    if ( startCorner == NavCornerType::NORTH_WEST )
      CNavPoly::SetCorners(this, vC0, vC3, vC2, vC1);
  }
  else if ( startCorner == NavCornerType::SOUTH_EAST )
  {
    CNavPoly::SetCorners(this, vC2, vC1, vC0, vC3);
  }
  else if ( startCorner == NavCornerType::SOUTH_WEST )
  {
    CNavPoly::SetCorners(this, vC3, vC2, vC1, vC0);
  }
}


// CNavPoly::SetCorners  (line 691, @0x0000000003201190, libserver.so)  // inlines: Init
// callers: CNavEditor::EditCreateNavArea, CNavPoly::SplitByPlane_Old
void __fastcall CNavPoly::SetCorners(
        CNavPoly *const this,
        const Vector *const vCorner,
        const Vector *const vOtherCorner)
{
  float y; // xmm0_4
  float v4; // xmm1_4
  vec_t v5; // xmm3_4
  vec_t x; // xmm2_4
  float v7; // xmm5_4
  float v8; // xmm6_4
  float z; // xmm4_4
  float v10; // xmm7_4
  int (**vptr_CNavPoly)(...); // rax

  y = vCorner->y;
  v4 = vOtherCorner->y;
  if ( v4 <= y )
  {
    x = vCorner->x;
    v5 = vOtherCorner->x;
    if ( vOtherCorner->x > vCorner->x )
    {
      z = vOtherCorner->z;
      v5 = vCorner->x;
      v10 = vCorner->z;
      x = vOtherCorner->x;
      y = vOtherCorner->y;
      v4 = vCorner->y;
      v7 = (z + v10) * 0.5;
      v8 = v7;
    }
    else
    {
      v7 = vOtherCorner->z;
      y = vOtherCorner->y;
      v8 = vCorner->z;
      v4 = vCorner->y;
      z = (v7 + v8) * 0.5;
      v10 = z;
    }
  }
  else
  {
    v5 = vCorner->x;
    x = vOtherCorner->x;
    if ( vOtherCorner->x <= vCorner->x )
    {
      z = vCorner->z;
      v5 = vOtherCorner->x;
      v10 = vOtherCorner->z;
      x = vCorner->x;
      v7 = (z + v10) * 0.5;
      v8 = v7;
    }
    else
    {
      v7 = vCorner->z;
      v8 = vOtherCorner->z;
      z = (v7 + v8) * 0.5;
      v10 = z;
    }
  }
  vptr_CNavPoly = this->_vptr_CNavPoly;
  this->m_vVerts[0].x = v5;
  this->m_vVerts[0].y = y;
  this->m_vVerts[0].z = v7;
  this->m_vVerts[1].x = x;
  this->m_vVerts[1].y = y;
  this->m_vVerts[1].z = z;
  this->m_vVerts[3].x = v5;
  this->m_vVerts[3].y = v4;
  this->m_vVerts[3].z = v10;
  this->m_vVerts[2].x = x;
  this->m_vVerts[2].y = v4;
  this->m_vVerts[2].z = v8;
  (*vptr_CNavPoly)();
}


// CNavPoly::SetCorners  (line 763, @0x00000000032012c0, libserver.so)  // inlines: operator=
// callers: CNavArea::BuildFromNavGen
void __fastcall CNavPoly::SetCorners(
        CNavPoly *const this,
        const Vector *const v0,
        const Vector *const v1,
        const Vector *const v2)
{
  int (**vptr_CNavPoly)(...); // rax

  this->m_nVerts = 3;
  vptr_CNavPoly = this->_vptr_CNavPoly;
  this->m_vVerts[0] = *v0;
  this->m_vVerts[1] = *v1;
  this->m_vVerts[2] = *v2;
  (*vptr_CNavPoly)();
}


// CNavPoly::SetCorners  (line 779, @0x0000000003201330, libserver.so)  // inlines: operator=
// callers: CNavGeneratorAAQuad::FixCornerOnCornerAreas, CNavGeneratorAAQuad::BuildAreaFromNodes, CNavGeneratorAAQuad::MergeNavAreaInDirectionForArea, CNavGeneratorAAQuad::FinishSplitEdit, CNavGeneratorAAQuad::CreateObstacleTopAreaIfNecessary, CNavGeneratorAAQuad::RaiseAreasWithInternalObstacles, CNavArea::BuildFromNavGen, CNavMesh::CommandNavMergeMesh, CNavPoly::SetCorners, CNavPoly::SpliceWithPoly, CNavPoly::SplitByPlane
void __fastcall CNavPoly::SetCorners(
        CNavPoly *const this,
        const Vector *const nwCorner,
        const Vector *const neCorner,
        const Vector *const seCorner,
        const Vector *const swCorner)
{
  int (**vptr_CNavPoly)(...); // rax

  vptr_CNavPoly = this->_vptr_CNavPoly;
  this->m_vVerts[0] = *nwCorner;
  this->m_vVerts[1] = *neCorner;
  this->m_vVerts[2] = *seCorner;
  this->m_vVerts[3] = *swCorner;
  (*vptr_CNavPoly)();
}


// CNavPoly::HasLowAspectRatio  (line 795, @0x00000000032014f0, libserver.so)
// callers: splitX, splitY, CNavGeneratorAAQuad::SquareUpAreas
bool __fastcall CNavPoly::HasLowAspectRatio(const CNavPoly *const this)
{
  return (this->m_flDiameterMax / this->m_flDiameterMin) < 4.2567825;
}


// CNavPoly::IsOverlappingPoint  (line 803, @0x0000000003201510, libserver.so)  // inlines: Contains2D, Dot, DotProduct2D, GetVert, GetVertIndexCCWForEdge, Vector2DSubtract, operator-
// calls: CNavPoly::GetEdgeNormalXY
// callers: CNavAreaExtended::SetupPVS, CNavAreaExtended::ComputeVisibility, CNavGeneratorAAQuad::FinishSplitEdit, CNavBreadthFirstSearchLattice::operator(), CNavSearchHexLattice::AddHexesForArea, CNavSplice::ExpandSpliceMeshIncremental, CNavSplice::ExpandSpliceMesh, CNavMesh::GetNavAreaWithLargestPortal, CNavMesh::TestRayToMesh, CNavPoly::SetCorners, CNavPoly::ContainsPoint, CNavPoly::IsOverlappingSegment2D
__int64 __fastcall CNavPoly::IsOverlappingPoint(
        const CNavPoly *const this,
        const Vector2D *const vPos,
        float a3,
        float flTolerance)
{
  float x; // xmm3_4
  float y; // xmm2_4
  int m_nVerts; // ecx
  int v10; // r12d
  int v11; // esi
  float *v12; // rax
  float v14; // [rsp+8h] [rbp-38h]
  float v15; // [rsp+Ch] [rbp-34h]
  Vector EdgeNormalXY; // 0:kr00_12.12

  x = vPos->x;
  if ( vPos->x < (this->m_Extent.lo.x - a3) )
    return 0;
  if ( (a3 + this->m_Extent.hi.x) < x )
    return 0;
  y = vPos->y;
  if ( y < (this->m_Extent.lo.y - a3) || (a3 + this->m_Extent.hi.y) < y )
    return 0;
  m_nVerts = this->m_nVerts;
  v10 = 0;
  v11 = 0;
  if ( m_nVerts > 0 )
  {
    while ( 1 )
    {
      v12 = (this + 12 * ((v11 + 1) % m_nVerts));
      v14 = x - v12[2];
      v15 = y - v12[3];
      EdgeNormalXY = CNavPoly::GetEdgeNormalXY(this, v11);
      if ( ((v14 * EdgeNormalXY.x) + (EdgeNormalXY.y * v15)) > a3 )
        break;
      m_nVerts = this->m_nVerts;
      v11 = ++v10;
      if ( v10 >= m_nVerts )
        return 1;
      x = vPos->x;
      y = vPos->y;
    }
    return 0;
  }
  return 1;
}


// CNavPoly::IsOverlappingPointForHull  (line 828, @0x0000000003201620, libserver.so)  // inlines: CanSupportHull, Contains2D, Dot, DotProduct2D, GetVert, GetVertIndexCCWForEdge, Vector2DSubtract, operator-
// calls: CNavPoly::GetEdgeNormalXY
// callers: CBaseCombatCharacter::UpdateLastKnownArea, CNavMesh::GetNavArea
__int64 __fastcall CNavPoly::IsOverlappingPointForHull(
        const CNavPoly *const this,
        const Vector2D *const vPos,
        unsigned __int8 a3,
        double a4,
        float a5,
        float flTol)
{
  float x; // xmm3_4
  float y; // xmm2_4
  int m_nVerts; // ecx
  int v12; // esi
  int v13; // r12d
  float *v14; // rax
  float v16; // [rsp+8h] [rbp-48h]
  float v17; // [rsp+Ch] [rbp-44h]
  Vector EdgeNormalXY; // 0:kr00_12.12

  if ( (a3 & this->m_nHullSupport) == 0 )
    return 0;
  x = vPos->x;
  if ( vPos->x < (this->m_Extent.lo.x - a5) )
    return 0;
  if ( (a5 + this->m_Extent.hi.x) < x )
    return 0;
  y = vPos->y;
  if ( y < (this->m_Extent.lo.y - a5) || (a5 + this->m_Extent.hi.y) < y )
    return 0;
  m_nVerts = this->m_nVerts;
  v12 = 0;
  v13 = 0;
  if ( m_nVerts > 0 )
  {
    while ( 1 )
    {
      v14 = (this + 12 * ((v12 + 1) % m_nVerts));
      v16 = x - v14[2];
      v17 = y - v14[3];
      EdgeNormalXY = CNavPoly::GetEdgeNormalXY(this, v12);
      if ( ((v16 * EdgeNormalXY.x) + (EdgeNormalXY.y * v17)) > a5 )
        break;
      m_nVerts = this->m_nVerts;
      v12 = ++v13;
      if ( v13 >= m_nVerts )
        return 1;
      x = vPos->x;
      y = vPos->y;
    }
    return 0;
  }
  return 1;
}


// CNavPoly::IsOverlappingPoly  (line 896, @0x0000000003201750, libserver.so)  // inlines: Dot, DotProduct, GetVertIndexCCWForEdge, Max<float>, Min<float>, OverlappingProjectionsAlongAxis, VectorSubtract, operator-
// callers: CNavGenerator::SplitAreasUnderOverhangs, CNavGeneratorAAQuad::RemoveOverlappingObstacleTopAreas, CNavMesh::GetNavAreaWithLargestPortal
bool __fastcall CNavPoly::IsOverlappingPoly(const CNavPoly *const this, const CNavPoly *const rArea)
{
  int m_nVerts; // ecx
  int v3; // r10d
  float y; // xmm10_4
  int v5; // r11d
  float x; // xmm11_4
  float v7; // xmm4_4
  float i; // xmm5_4
  float *v9; // rax
  float v10; // xmm5_4
  float v11; // xmm4_4
  float v12; // xmm2_4
  float v13; // xmm6_4
  const CNavPoly *v14; // rax
  float v15; // xmm0_4
  float v16; // xmm7_4
  float v17; // xmm1_4
  float v18; // xmm7_4
  const CNavPoly *v19; // rax
  float v20; // xmm0_4
  float v21; // xmm14_4
  float *v22; // rax
  float v24; // xmm10_4
  int v25; // r11d
  float v26; // xmm11_4
  float v27; // xmm4_4
  float j; // xmm5_4
  float *v29; // rax
  float v30; // xmm5_4
  float v31; // xmm4_4
  float v32; // xmm2_4
  float v33; // xmm6_4
  const CNavPoly *v34; // rax
  float v35; // xmm0_4
  float v36; // xmm7_4
  float v37; // xmm1_4
  float v38; // xmm7_4
  const CNavPoly *v39; // rax
  float v40; // xmm0_4
  float v41; // xmm15_4
  float *v42; // rax

  m_nVerts = this->m_nVerts;
  v3 = rArea->m_nVerts;
  if ( m_nVerts > 0 )
  {
    y = this->m_vVerts[0].y;
    v5 = 0;
    x = this->m_vVerts[0].x;
    v7 = y;
    for ( i = x; ; i = v22[2] )
    {
      v9 = (this + 12 * ((v5 + 1) % m_nVerts));
      v10 = i - v9[2];
      v11 = -(v7 - v9[3]);
      v12 = ((v11 * x) + (v10 * y)) + 0.0;
      v13 = v12;
      if ( m_nVerts != 1 )
      {
        v14 = this;
        do
        {
          v15 = v14->m_vVerts[1].x;
          v14 = (v14 + 12);
          v16 = ((v15 * v11) + (v14->m_vVerts[0].y * v10)) + 0.0;
          v13 = fmaxf(v16, v13);
          v12 = fminf(v16, v12);
        }
        while ( v14 != &this->m_vVerts[m_nVerts - 2].y );
      }
      v17 = ((v11 * rArea->m_vVerts[0].x) + (v10 * rArea->m_vVerts[0].y)) + 0.0;
      v18 = v17;
      if ( v3 > 1 )
      {
        v19 = rArea;
        do
        {
          v20 = v19->m_vVerts[1].x;
          v19 = (v19 + 12);
          v21 = ((v20 * v11) + (v19->m_vVerts[0].y * v10)) + 0.0;
          v17 = fmaxf(v21, v17);
          v18 = fminf(v21, v18);
        }
        while ( v19 != &rArea->m_vVerts[v3 - 2].y );
      }
      if ( v18 >= v13 || v12 >= v17 )
        break;
      if ( ++v5 == m_nVerts )
        goto LABEL_14;
      v22 = (this + 12 * v5);
      v7 = v22[3];
    }
    return 0;
  }
LABEL_14:
  if ( v3 > 0 )
  {
    v24 = rArea->m_vVerts[0].y;
    v25 = 0;
    v26 = rArea->m_vVerts[0].x;
    v27 = v24;
    for ( j = v26; ; j = v42[2] )
    {
      v29 = (rArea + 12 * ((v25 + 1) % v3));
      v30 = j - v29[2];
      v31 = -(v27 - v29[3]);
      v32 = ((v31 * this->m_vVerts[0].x) + (v30 * this->m_vVerts[0].y)) + 0.0;
      v33 = v32;
      if ( m_nVerts > 1 )
      {
        v34 = this;
        do
        {
          v35 = v34->m_vVerts[1].x;
          v34 = (v34 + 12);
          v36 = ((v35 * v31) + (v34->m_vVerts[0].y * v30)) + 0.0;
          v33 = fmaxf(v36, v33);
          v32 = fminf(v36, v32);
        }
        while ( v34 != &this->m_vVerts[m_nVerts - 2].y );
      }
      v37 = ((v31 * v26) + (v30 * v24)) + 0.0;
      v38 = v37;
      if ( v3 != 1 )
      {
        v39 = rArea;
        do
        {
          v40 = v39->m_vVerts[1].x;
          v39 = (v39 + 12);
          v41 = ((v40 * v31) + (v39->m_vVerts[0].y * v30)) + 0.0;
          v37 = fmaxf(v41, v37);
          v38 = fminf(v41, v38);
        }
        while ( v39 != &rArea->m_vVerts[v3 - 2].y );
      }
      if ( v38 >= v33 || v32 >= v37 )
        break;
      if ( ++v25 == v3 )
        return 1;
      v42 = (rArea + 12 * v25);
      v27 = v42[3];
    }
    return 0;
  }
  return 1;
}


// CNavPoly::IsOverlappingExtent  (line 941, @0x0000000003201a30, libserver.so)  // inlines: Begin, ComputeBC, Dot, DotProduct2D, GetNextVertIndexCW, GetVert, IsOverlapping2D, IsOverlappingHalfPlane2D, IsOverlappingTriangle, Max<float>, Min<float>, NavTriIterator, Negate, Next, Vector2DSubtract, operator-
// callers: CNavEntityInterface::ConnectElevatorToArea, CNavEntityInterface::ConnectElevators, CNavEditor::UpdateDragSelectionSet, CNavMesh::ForAllAreasOverlappingEntity, CNavMesh::RemoveNavArea, CNavMesh::GetNavAreasInBox, CNavMesh::AddNavArea
bool __fastcall CNavPoly::IsOverlappingExtent(const CNavPoly *const this, const Extent *const rExtent)
{
  __m128 x_low; // xmm6
  float x; // xmm5_4
  __m128 y_low; // xmm14
  float y; // xmm13_4
  int m_nVerts; // ecx
  float v7; // xmm2_4
  float v8; // xmm8_4
  int v9; // edx
  int v10; // esi
  float *v11; // rax
  float v12; // xmm1_4
  __m128i v13; // xmm4
  float *v14; // rax
  float v15; // xmm0_4
  float v16; // xmm3_4
  __m128i v17; // xmm7
  __m128 v18; // xmm10
  int v19; // eax
  __m128 v20; // xmm12
  __m128 v21; // xmm9
  __m128 v22; // xmm7
  __m128 v23; // xmm12
  __m128 v24; // xmm11
  __m128 v25; // xmm9
  __m128 v26; // xmm7
  __m128 v27; // xmm10
  __m128 v28; // xmm12
  __m128 v29; // xmm4
  __m128 v30; // xmm1
  float *v32; // rax
  float *v33; // rax
  __int64 v34; // [rsp-8h] [rbp-8h]

  x_low = LODWORD(rExtent->lo.x);
  if ( this->m_Extent.hi.x < x_low.m128_f32[0] )
    return 0;
  x = rExtent->hi.x;
  if ( x < this->m_Extent.lo.x )
    return 0;
  y_low = LODWORD(rExtent->lo.y);
  if ( this->m_Extent.hi.y < y_low.m128_f32[0] )
    return 0;
  y = rExtent->hi.y;
  if ( y < this->m_Extent.lo.y )
    return 0;
  m_nVerts = this->m_nVerts;
  v7 = this->m_vVerts[0].x;
  v8 = this->m_vVerts[0].y;
  v9 = (m_nVerts - 1) % m_nVerts;
  v10 = v9;
  v11 = (this + 12 * v9);
  v12 = v11[2];
  v13 = *(v11 + 3);
  v14 = (this + 12 * ((v9 + m_nVerts - 1) % m_nVerts));
  v15 = v14[2];
  v16 = v14[3];
  if ( v9 == 1 )
    return 0;
  while ( 1 )
  {
    if ( fminf(v7, fminf(v12, v15)) <= x
      && x_low.m128_f32[0] <= fmaxf(v7, fmaxf(v12, v15))
      && fminf(v8, fminf(*v13.m128i_i32, v16)) <= y
      && y_low.m128_f32[0] <= fmaxf(v8, fmaxf(*v13.m128i_i32, v16)) )
    {
      v17 = v13;
      *v17.m128i_i32 = *v13.m128i_i32 - v8;
      v18.m128_f32[0] = v12 - v7;
      v19 = _mm_cvtsi128_si32(v17);
      *(&v34 - 1) = v16 - *v13.m128i_i32;
      v20.m128_f32[0] = -(*v13.m128i_i32 - v8);
      *(&v34 - 3) = v15 - v12;
      *(&v34 - 4) = v7 - v15;
      *(&v34 - 2) = v8 - v16;
      if ( (((v15 - v7) * v20.m128_f32[0]) + ((v16 - v8) * (v12 - v7))) < 0.0 )
      {
        v18.m128_f32[0] = -v18.m128_f32[0];
        v20.m128_i32[0] = v19;
        *(&v34 - 3) = -*(&v34 - 3);
        *(&v34 - 4) = -*(&v34 - 4);
      }
      else
      {
        *(&v34 - 1) = -*(&v34 - 1);
        *(&v34 - 2) = -(v8 - v16);
      }
      v21 = _mm_cmple_ss(0LL, v18);
      v22 = _mm_cmple_ss(0LL, v20);
      if ( (((COERCE_FLOAT(_mm_andnot_ps(v22, x_low).m128_u32[0] | LODWORD(x) & v22.m128_i32[0]) - v7) * v20.m128_f32[0])
          + ((COERCE_FLOAT(_mm_andnot_ps(v21, y_low).m128_u32[0] | LODWORD(y) & v21.m128_i32[0]) - v8) * v18.m128_f32[0])) >= 0.0 )
      {
        v23.m128_i32[0] = *(&v34 - 3);
        v24.m128_i32[0] = *(&v34 - 1);
        v25 = _mm_cmple_ss(0LL, v23);
        v26 = _mm_cmple_ss(0LL, v24);
        if ( (((COERCE_FLOAT(_mm_andnot_ps(v26, x_low).m128_u32[0] | LODWORD(x) & v26.m128_i32[0]) - v12)
             * v24.m128_f32[0])
            + ((COERCE_FLOAT(_mm_andnot_ps(v25, y_low).m128_u32[0] | LODWORD(y) & v25.m128_i32[0]) - *v13.m128i_i32)
             * v23.m128_f32[0])) >= 0.0 )
        {
          v27.m128_i32[0] = *(&v34 - 4);
          v28.m128_i32[0] = *(&v34 - 2);
          v29 = _mm_cmple_ss(0LL, v27);
          v30 = _mm_cmple_ss(0LL, v28);
          if ( (((COERCE_FLOAT(_mm_andnot_ps(v30, x_low).m128_u32[0] | LODWORD(x) & v30.m128_i32[0]) - v15)
               * v28.m128_f32[0])
              + ((COERCE_FLOAT(_mm_andnot_ps(v29, y_low).m128_u32[0] | LODWORD(y) & v29.m128_i32[0]) - v16)
               * v27.m128_f32[0])) >= 0.0 )
            break;
        }
      }
    }
    v10 = (v10 + m_nVerts - 1) % m_nVerts;
    v32 = (this + 12 * v10);
    v12 = v32[2];
    v13 = *(v32 + 3);
    v33 = (this + 12 * ((v10 + m_nVerts - 1) % m_nVerts));
    v15 = v33[2];
    v16 = v33[3];
    if ( v10 == 1 )
      return 0;
  }
  return 1;
}


// CNavPoly::IsOverlappingSphere  (line 963, @0x0000000003203600, libserver.so)  // inlines: Square<float>
// calls: CNavPoly::GetClosestPointOnPolyAndDistSqrThresholded
// callers: CNavMesh::ForAllAreasIntersectingSphere<NavAreaCollectorExternal>, CNavVolumeSphere::ContainsArea, CNavVolumeSphericalShell::ContainsArea
bool __fastcall CNavPoly::IsOverlappingSphere(
        const CNavPoly *const this,
        const Vector *const vCenter,
        float a3,
        float flRadius)
{
  return CNavPoly::GetClosestPointOnPolyAndDistSqrThresholded(this, vCenter, a3 * a3, 0) >= 0.0;
}


// CNavPoly::IsOverlappingX  (line 971, @0x0000000003201d80, libserver.so)  // inlines: GetCorner, GetVert
// callers: CNavArea::FinishSplitEdit
bool __fastcall CNavPoly::IsOverlappingX(
        const CNavPoly *const this,
        const CNavPoly *const rArea,
        float a3,
        float flMinOverlap)
{
  bool result; // al

  result = 0;
  if ( this->m_vVerts[2].x > (rArea->m_vVerts[0].x + a3) )
    return (rArea->m_vVerts[2].x - a3) > this->m_vVerts[0].x;
  return result;
}


// CNavPoly::IsOverlappingY  (line 987, @0x0000000003201db0, libserver.so)  // inlines: GetCorner, GetVert
// callers: CNavArea::FinishSplitEdit
bool __fastcall CNavPoly::IsOverlappingY(
        const CNavPoly *const this,
        const CNavPoly *const rArea,
        float a3,
        float flMinOverlap)
{
  bool result; // al

  result = 0;
  if ( this->m_vVerts[2].y > (rArea->m_vVerts[0].y + a3) )
    return (rArea->m_vVerts[2].y - a3) > this->m_vVerts[0].y;
  return result;
}


// CNavPoly::IsOverlappingOBB  (line 1003, @0x0000000003201de0, libserver.so)  // inlines: GetVert, operator=
// calls: DoesHullOverlapNavMarkup
// callers: CNavVolumeMarkupVolume::ContainsArea, CNavGenerator::FindAreasInNavGenMarkup
bool __fastcall CNavPoly::IsOverlappingOBB(
        const CNavPoly *const this,
        const Vector *const vLocalMin,
        const Vector *const vLocalMax,
        const matrix3x4_t *const mTransform)
{
  int m_nVerts; // r8d
  Vector *v5; // r9
  Vector *m_vVerts; // rax
  vec_t y; // xmm1_4
  vec_t z; // xmm0_4
  vec_t x; // xmm2_4
  Vector vAreaHullPoints[4]; // [rsp+0h] [rbp-30h] BYREF

  m_nVerts = this->m_nVerts;
  if ( m_nVerts > 0 )
  {
    v5 = vAreaHullPoints;
    m_vVerts = this->m_vVerts;
    do
    {
      y = m_vVerts->y;
      ++m_vVerts;
      ++v5;
      z = m_vVerts[-1].z;
      x = m_vVerts[-1].x;
      v5[-1].y = y;
      v5[-1].z = z;
      v5[-1].x = x;
    }
    while ( m_vVerts != &this->m_vVerts[(m_nVerts - 1) + 1] );
  }
  return DoesHullOverlapNavMarkup(vLocalMin, vLocalMax, mTransform, vAreaHullPoints, m_nVerts);
}


// CNavPoly::IsOverlappingSegment2D  (line 1018, @0x0000000003204aa0, libserver.so)  // inlines: Ray2D_t, Vector2D
// calls: CNavPoly::IsOverlappingPoint, CNavPoly::IntersectRayWithPolyEdge2D
// callers: CNavObstacleMgr::DrawIntersectingAreas, CNavObstacleMgr::SplitEdge
bool __fastcall CNavPoly::IsOverlappingSegment2D(
        const CNavPoly *const this,
        const Vector2D *const vA,
        const Vector2D *const vB)
{
  float v3; // xmm1_4
  bool result; // al
  float y; // xmm1_4
  float x; // xmm2_4
  float v10; // xmm0_4
  vec_t v11; // xmm0_4
  vec_t v12; // xmm1_4
  NavEdgeIndex v13; // al
  bool v14; // dl
  float flRayT; // [rsp+0h] [rbp-3Ch] BYREF
  Ray2D_t testRay; // [rsp+4h] [rbp-38h] BYREF

  result = CNavPoly::IsOverlappingPoint(this, vA, 0.0, v3);
  if ( !result )
  {
    y = vA->y;
    x = vA->x;
    flRayT = 3.4028235e38;
    v10 = vB->y;
    testRay.m_start.y = y;
    testRay.m_start.x = x;
    v11 = v10 - y;
    v12 = vB->x - x;
    testRay.m_delta.y = v11;
    testRay.m_delta.x = v12;
    v13 = CNavPoly::IntersectRayWithPolyEdge2D(this, &testRay, 1, &flRayT);
    v14 = 0;
    if ( v13 != -1 )
      return flRayT <= 1.0;
    return v14;
  }
  return result;
}


// CNavPoly::ContainsPoint  (line 1035, @0x0000000003202a30, libserver.so)  // inlines: GetZ, IsOverlappingPoint
// calls: CNavPoly::IsOverlappingPoint, CNavPoly::GetZ
// callers: CNavGeneratorAAQuad::CreateObstacleTopAreaIfNecessary, CPath::AssemblePrecomputedPath, CPath::FinishAndPostProcessPath, NavAreaBuildPath, CNavPoly::ContainsPoly
bool __fastcall CNavPoly::ContainsPoint(const CNavPoly *const this, const Vector *const vPos)
{
  float v2; // xmm1_4
  bool result; // al
  float v6; // xmm2_4

  result = CNavPoly::IsOverlappingPoint(this, vPos, 0.0, v2);
  if ( result )
    return (CNavPoly::GetZ(this, vPos->x, vPos->y, v6) - 18.0) <= vPos->z;
  return result;
}


// CNavPoly::ContainsPoly  (line 1057, @0x0000000003202a70, libserver.so)  // inlines: GetVert
// calls: CNavPoly::ContainsPoint
// callers: CNavGeneratorAAQuad::RemoveOverlappingObstacleTopAreas
bool __fastcall CNavPoly::ContainsPoly(const CNavPoly *const this, const CNavPoly *const rArea)
{
  Vector *m_vVerts; // rbx
  int v5; // r12d
  vec_t z; // xmm0_4
  vec_t x; // xmm2_4
  bool result; // al
  Vector vPos; // [rsp+0h] [rbp-40h] BYREF

  if ( rArea->m_nVerts <= 0 )
    return 1;
  m_vVerts = rArea->m_vVerts;
  v5 = 0;
  while ( 1 )
  {
    z = m_vVerts->z;
    x = m_vVerts->x;
    vPos.y = m_vVerts->y;
    vPos.z = z;
    vPos.x = x;
    result = CNavPoly::ContainsPoint(this, &vPos);
    if ( !result )
      break;
    ++v5;
    ++m_vVerts;
    if ( rArea->m_nVerts <= v5 )
      return 1;
  }
  return result;
}


// CNavPoly::IsExtentIntersectingBox  (line 1073, @0x0000000003201e60, libserver.so)
// calls: IsBoxIntersectingBox
// callers: CNavObstructionManager::UpdateAreaAvoidanceObstacles
bool __fastcall CNavPoly::IsExtentIntersectingBox(
        const CNavPoly *const this,
        const Vector *const vBoxMin,
        const Vector *const vBoxMax,
        float flExtrudeHeight)
{
  Vector vPolyMins; // [rsp+0h] [rbp-20h] BYREF
  Vector vPolyMaxs; // [rsp+10h] [rbp-10h] BYREF

  vPolyMins = this->m_Extent.lo;
  *&vPolyMaxs.x = *&this->m_Extent.hi.x;
  vPolyMaxs.z = flExtrudeHeight + this->m_Extent.hi.z;
  return IsBoxIntersectingBox(&vPolyMins, &vPolyMaxs, vBoxMin, vBoxMax);
}


// CNavPoly::ComputeNormal_Old  (line 1083, @0x0000000003201eb0, libserver.so)  // inlines: CrossProduct, GetCorner, GetVert, NormalizeInPlace, operator=
// calls: VectorNormalize
// callers: CNavGenerator::TestAreaForStairs, CNavPoly::IsPlanar, CNavPoly::IsCoplanar
void __fastcall CNavPoly::ComputeNormal_Old(const CNavPoly *const this, Vector *pNormalOut, bool bAlternate)
{
  float x; // xmm5_4
  float y; // xmm3_4
  float z; // xmm6_4
  float v6; // xmm4_4
  float v7; // xmm2_4
  float v8; // xmm1_4
  float v9; // xmm0_4
  float v10; // xmm7_4
  float v11; // xmm3_4
  float v12; // xmm4_4
  float v13; // xmm2_4
  float v14; // xmm5_4

  if ( pNormalOut != 0 )
  {
    x = this->m_vVerts[0].x;
    y = this->m_vVerts[0].y;
    z = this->m_vVerts[0].z;
    v6 = this->m_vVerts[1].z;
    v7 = this->m_vVerts[2].x;
    v8 = this->m_vVerts[2].y;
    v9 = this->m_vVerts[2].z;
    v10 = this->m_vVerts[3].z;
    if ( bAlternate )
    {
      v11 = y - v8;
      v12 = v6 - v9;
      v13 = x - v7;
      v14 = v10 - v9;
    }
    else
    {
      v13 = v7 - x;
      v14 = v6 - z;
      v11 = v8 - y;
      v12 = v10 - z;
    }
    pNormalOut->z = v13 * v11;
    pNormalOut->x = (v12 * 0.0) - (v11 * v14);
    pNormalOut->y = (0.0 * v14) - (v12 * v13);
    VectorNormalize(pNormalOut);
  }
}


// CNavPoly::IsPlanar  (line 1125, @0x0000000003201f70, libserver.so)  // inlines: DotProduct, GetFloat
// calls: CNavPoly::ComputeNormal_Old, __cxa_guard_acquire, ConVarRef::ConVarRef, __cxa_guard_release, __cxa_guard_abort, _Unwind_Resume
// callers: CNavPoly::IsCoplanar
// strings: "nav_coplanar_slope_limit"
// globals: `guard variable for'CNavPoly::IsPlanar(float)::nav_coplanar_slope_limit, CNavPoly::IsPlanar(float)::nav_coplanar_slope_limit
bool __fastcall CNavPoly::IsPlanar(const CNavPoly *const this, float m_fValue, float flTolerance)
{
  float v5; // [rsp-8h] [rbp-3Ch]
  float v6; // [rsp-4h] [rbp-38h] BYREF
  float flTolerancea; // [rsp+0h] [rbp-34h]
  Vector vNormal; // [rsp+4h] [rbp-30h] BYREF
  float v9; // [rsp+10h] [rbp-24h]
  Vector vOtherNormal; // [rsp+14h] [rbp-20h]

  if ( m_fValue < 0.0 )
  {
    if ( `guard variable for'CNavPoly::IsPlanar(float)::nav_coplanar_slope_limit == 0
      && __cxa_guard_acquire(&`guard variable for'CNavPoly::IsPlanar(float)::nav_coplanar_slope_limit) != 0 )
    {
      ConVarRef::ConVarRef(&CNavPoly::IsPlanar(float)const::nav_coplanar_slope_limit, "nav_coplanar_slope_limit");
      __cxa_guard_release(&`guard variable for'CNavPoly::IsPlanar(float)::nav_coplanar_slope_limit);
    }
    m_fValue = CNavPoly::IsPlanar(float)const::nav_coplanar_slope_limit.m_pConVarState->m_Value.m_fValue;
  }
  v5 = m_fValue;
  CNavPoly::ComputeNormal_Old(this, &v6, 0);
  CNavPoly::ComputeNormal_Old(this, &vNormal.z, 1);
  return (((v6 * vNormal.z) + (flTolerancea * v9)) + (vNormal.x * vOtherNormal.x)) > v5;
}


// CNavPoly::IsCoplanar  (line 1147, @0x0000000003202050, libserver.so)  // inlines: DotProduct, GetFloat
// calls: CNavPoly::IsPlanar, CNavPoly::ComputeNormal_Old, __cxa_guard_acquire, ConVarRef::ConVarRef, __cxa_guard_release, __cxa_guard_abort, _Unwind_Resume
// callers: CNavGeneratorAAQuad::MergeNavAreaInDirectionForArea
// strings: "nav_coplanar_slope_limit"
// globals: `guard variable for'CNavPoly::IsCoplanar(CNavPoly const&,float)::nav_coplanar_slope_limit, CNavPoly::IsCoplanar(CNavPoly const&,float)::nav_coplanar_slope_limit
bool __fastcall CNavPoly::IsCoplanar(
        const CNavPoly *const this,
        const CNavPoly *const rOtherPoly,
        float a3,
        float flTolerance)
{
  float m_fValue; // xmm1_4
  float v8; // [rsp-8h] [rbp-3Ch]
  float v9; // [rsp-4h] [rbp-38h] BYREF
  float flTolerancea; // [rsp+0h] [rbp-34h]
  Vector vNormal; // [rsp+4h] [rbp-30h] BYREF
  float v12; // [rsp+10h] [rbp-24h]
  Vector vOtherNormal; // [rsp+14h] [rbp-20h]

  m_fValue = a3;
  if ( a3 < 0.0 )
  {
    if ( `guard variable for'CNavPoly::IsCoplanar(CNavPoly const&,float)::nav_coplanar_slope_limit == 0
      && __cxa_guard_acquire(&`guard variable for'CNavPoly::IsCoplanar(CNavPoly const&,float)::nav_coplanar_slope_limit) != 0 )
    {
      ConVarRef::ConVarRef(
        &CNavPoly::IsCoplanar(CNavPoly const&,float)const::nav_coplanar_slope_limit,
        "nav_coplanar_slope_limit");
      __cxa_guard_release(&`guard variable for'CNavPoly::IsCoplanar(CNavPoly const&,float)::nav_coplanar_slope_limit);
    }
    m_fValue = CNavPoly::IsCoplanar(CNavPoly const&,float)const::nav_coplanar_slope_limit.m_pConVarState->m_Value.m_fValue;
  }
  v8 = m_fValue;
  if ( !CNavPoly::IsPlanar(this, m_fValue, m_fValue) || !CNavPoly::IsPlanar(rOtherPoly, v8, v8) )
    return 0;
  CNavPoly::ComputeNormal_Old(this, &v9, 0);
  CNavPoly::ComputeNormal_Old(rOtherPoly, &vNormal.z, 0);
  return (((v9 * vNormal.z) + (flTolerancea * v12)) + (vNormal.x * vOtherNormal.x)) > v8;
}


// CNavPoly::ComputeNormal_New  (line 1172, @0x0000000003202180, libserver.so)  // inlines: Begin, ComputeBC, Cross, CrossProduct, FastSqrt, GetNextVertIndexCW, GetNormalAndArea, GetVert, Init, Length, NavTriIterator, Next, VectorDivide, VectorLength, VectorMultiply, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator*, operator+=, operator-, operator/, operator=
// callers: CNavPoly::GeometryChanged
void __fastcall CNavPoly::ComputeNormal_New(CNavPoly *const this)
{
  float v1; // xmm7_4
  int m_nVerts; // ecx
  float x; // xmm13_4
  float y; // xmm12_4
  float v5; // xmm10_4
  float v6; // xmm9_4
  float z; // xmm8_4
  float v8; // xmm11_4
  int v9; // esi
  float *v10; // rdx
  float v11; // xmm2_4
  float v12; // xmm4_4
  float v13; // xmm5_4
  float *v14; // rdx
  float v15; // xmm3_4
  float v16; // xmm1_4
  float v17; // xmm6_4
  float v18; // xmm4_4
  float v19; // xmm6_4
  float v20; // xmm0_4
  float v21; // xmm1_4
  float *v22; // rdx
  float *v23; // rdx
  float v24; // xmm4_4
  float v25; // xmm5_4
  float v26; // xmm1_4
  float v27; // xmm2_4
  float v28; // xmm3_4
  float v29; // xmm6_4
  float v30; // xmm0_4
  float v31; // xmm6_4
  float v32; // xmm4_4
  float v33; // xmm1_4
  __int64 v34; // [rsp+0h] [rbp-8h]

  v1 = 0.0;
  m_nVerts = this->m_nVerts;
  x = this->m_vVerts[0].x;
  y = this->m_vVerts[0].y;
  v5 = vec3_origin.x;
  v6 = vec3_origin.y;
  z = vec3_origin.z;
  v8 = this->m_vVerts[0].z;
  v9 = (m_nVerts - 1) % m_nVerts;
  v10 = (this + 12 * v9);
  v11 = v10[2];
  v12 = v10[3];
  v13 = v10[4];
  v14 = (this + 12 * ((m_nVerts + v9 - 1) % m_nVerts));
  v15 = v14[2];
  v16 = v14[3];
  v17 = v14[4];
  while ( v9 != 1 )
  {
    v24 = v12 - y;
    v25 = v13 - v8;
    v26 = v16 - y;
    v27 = v11 - x;
    v28 = v15 - x;
    v29 = v17 - v8;
    v30 = (v25 * v26) - (v24 * v29);
    v31 = (v29 * v27) - (v25 * v28);
    v32 = (v24 * v28) - (v27 * v26);
    *(&v34 - 1) = ((v30 * v30) + (v31 * v31)) + (v32 * v32);
    v33 = fsqrt(*(&v34 - 1));
    if ( v33 <= 9.9999997e-10 )
    {
      v18 = 1.0;
      v19 = 0.0;
      v20 = 0.0;
    }
    else
    {
      v20 = v30 * (1.0 / v33);
      v19 = v31 * (1.0 / v33);
      v18 = v32 * (1.0 / v33);
    }
    v21 = v33 * 0.5;
    v1 = v1 + v21;
    v6 = v6 + (v19 * v21);
    v5 = v5 + (v20 * v21);
    z = z + (v21 * v18);
    v9 = (m_nVerts + v9 - 1) % m_nVerts;
    v22 = (this + 12 * v9);
    v11 = v22[2];
    v12 = v22[3];
    v13 = v22[4];
    v23 = (this + 12 * ((m_nVerts + v9 - 1) % m_nVerts));
    v15 = v23[2];
    v16 = v23[3];
    v17 = v23[4];
  }
  if ( v1 > 0.000001 )
  {
    this->m_vNormal_New.x = v5 * (1.0 / v1);
    this->m_vNormal_New.y = v6 * (1.0 / v1);
    this->m_vNormal_New.z = z * (1.0 / v1);
  }
  else
  {
    this->m_vNormal_New.x = 0.0;
    this->m_vNormal_New.y = 0.0;
    this->m_vNormal_New.z = 1.0;
  }
}


// GetBarycentric2D  (line 1197, @0x0000000003202530, libserver.so)  // inlines: Vector2DSubtract, operator-
// callers: CNavPoly::GetZ
float __fastcall GetBarycentric2D(
        const Vector2D *const vA,
        const Vector2D *const vB,
        const Vector2D *const vC,
        const Vector2D *const vPos,
        float *pAlphaOut,
        float *pBetaOut)
{
  float y; // xmm5_4
  float v7; // xmm2_4
  float v8; // xmm1_4
  float v9; // xmm4_4
  float v10; // xmm3_4
  float result; // xmm0_4
  float v12; // xmm9_4
  float v13; // xmm8_4
  float v14; // xmm5_4
  float v15; // xmm3_4

  y = vB->y;
  v7 = vA->x - vB->x;
  v8 = vA->y - y;
  v9 = vC->x - vB->x;
  v10 = vC->y - y;
  result = (v8 * v9) - (v7 * v10);
  if ( result <= 0.00000011920929 )
  {
    *pAlphaOut = 0.0;
    *pBetaOut = 0.0;
  }
  else
  {
    v12 = vPos->x - vB->x;
    v13 = vPos->y - y;
    v14 = ((v8 * v12) - (v7 * v13)) / result;
    if ( fabs(v7) > fabs(v8) )
      v15 = (v12 - (v9 * v14)) / v7;
    else
      v15 = (v13 - (v10 * v14)) / v8;
    *pAlphaOut = v15;
    *pBetaOut = v14;
  }
  return result;
}


// CNavPoly::GetZ  (line 1235, @0x0000000003202610, libserver.so)  // inlines: DistToSqr, FindClosestVertIndex2D, GetNextVertIndexCCW, GetNextVertIndexCW, GetVert, LengthSqr, Vector2D, Vector2DSubtract, operator=
// calls: GetBarycentric2D
// callers: CBaseCombatCharacter::UpdateLastKnownArea, CNavAreaExtended::ComputeLighting, CNavAreaExtended::SetupPVS, CNavAreaExtended::ComputeVisibility, CNavDrawArea::DrawAreaConnection, CNavMesh::StitchAreaIntoMesh<CNavGeneratorAAQuad::StitchGeneratedAreas()::IncrementallyGeneratedAreas>, CNavGeneratorAAQuad::ConnectGeneratedAreas, CNavGeneratorAAQuad::StitchGeneratedAreas, CNavGeneratorAAQuad::CreateObstacleTopAreaIfNecessary, CPath::ComputePathDetails, CPath::ComputePathTrivialCore, CPath::GetNearestNavAreaAndGroundHeight (27 total)
float __fastcall CNavPoly::GetZ(const CNavPoly *const this, vec_t a2, vec_t x, float y)
{
  int m_nVerts; // esi
  float v6; // xmm4_4
  Vector *m_vVerts; // rdx
  int v8; // ecx
  int v9; // ebx
  int v10; // edi
  float *v11; // rcx
  vec_t v12; // xmm0_4
  vec_t v13; // xmm2_4
  float *v14; // rcx
  vec_t v15; // xmm0_4
  float *v16; // rax
  vec_t v17; // xmm2_4
  vec_t v18; // xmm1_4
  vec_t v19; // xmm0_4
  vec_t v20; // xmm2_4
  float v21; // xmm3_4
  float v22; // xmm4_4
  int v23; // esi
  float z; // xmm0_4
  float v25; // xmm2_4
  float v26; // xmm1_4
  int v28; // ecx
  float *v29; // rax
  vec_t v30; // xmm0_4
  vec_t v31; // xmm2_4
  float *v32; // rax
  vec_t v33; // xmm0_4
  vec_t v34; // xmm2_4
  float *v35; // rax
  vec_t v36; // xmm2_4
  vec_t v37; // xmm0_4
  float flAlpha; // [rsp+0h] [rbp-A0h] BYREF
  float flBeta; // [rsp+4h] [rbp-9Ch] BYREF
  float flAlphaAlt; // [rsp+8h] [rbp-98h] BYREF
  float flBetaAlt; // [rsp+Ch] [rbp-94h] BYREF
  Vector2D vPos; // [rsp+10h] [rbp-90h] BYREF
  Vector vA; // [rsp+20h] [rbp-80h] BYREF
  Vector vB; // [rsp+30h] [rbp-70h] BYREF
  Vector vC; // [rsp+40h] [rbp-60h] BYREF
  Vector vAAlt; // [rsp+50h] [rbp-50h] BYREF
  Vector vBAlt; // [rsp+60h] [rbp-40h] BYREF
  Vector vCAlt; // [rsp+70h] [rbp-30h] BYREF

  vPos.x = a2;
  m_nVerts = this->m_nVerts;
  vPos.y = x;
  if ( m_nVerts <= 0 )
  {
    v10 = 0;
    v9 = -1;
  }
  else
  {
    v6 = 3.4028235e38;
    m_vVerts = this->m_vVerts;
    v8 = 0;
    v9 = -1;
    do
    {
      if ( v6 > (((a2 - m_vVerts->x) * (a2 - m_vVerts->x)) + ((x - m_vVerts->y) * (x - m_vVerts->y))) )
      {
        v6 = ((a2 - m_vVerts->x) * (a2 - m_vVerts->x)) + ((x - m_vVerts->y) * (x - m_vVerts->y));
        v9 = v8;
      }
      ++v8;
      ++m_vVerts;
    }
    while ( v8 != m_nVerts );
    v10 = (v9 + 1) % m_nVerts;
  }
  v11 = (this + 12 * ((v9 + m_nVerts - 1) % m_nVerts));
  v12 = v11[4];
  v13 = v11[2];
  vA.y = v11[3];
  vA.z = v12;
  v14 = (this + 12 * v9);
  vA.x = v13;
  v15 = v14[4];
  v16 = (this + 12 * v10);
  v17 = v14[2];
  vB.y = v14[3];
  vB.z = v15;
  v18 = v16[3];
  vB.x = v17;
  v19 = v16[4];
  v20 = v16[2];
  vC.y = v18;
  vC.z = v19;
  vC.x = v20;
  GetBarycentric2D(&vA, &vB, &vC, &vPos, &flAlpha, &flBeta);
  v21 = flAlpha;
  v22 = flBeta;
  if ( (flAlpha + flBeta) > 1.0 && (v23 = this->m_nVerts) > 3 )
  {
    v28 = (v9 + 2) % v23;
    v29 = (this + 12 * ((v23 + v28 - 1) % v23));
    v30 = v29[4];
    v31 = v29[2];
    vAAlt.y = v29[3];
    vAAlt.z = v30;
    v32 = (this + 12 * v28);
    vAAlt.x = v31;
    v33 = v32[4];
    v34 = v32[2];
    vBAlt.y = v32[3];
    vBAlt.z = v33;
    vBAlt.x = v34;
    v35 = (this + 12 * ((v28 + 1) % v23));
    v36 = v35[2];
    v37 = v35[4];
    vCAlt.y = v35[3];
    vCAlt.x = v36;
    vCAlt.z = v37;
    GetBarycentric2D(&vAAlt, &vBAlt, &vCAlt, &vPos, &flAlphaAlt, &flBetaAlt);
    v21 = flAlphaAlt;
    v22 = flBetaAlt;
    if ( (fabs(flAlpha) + fabs(flBeta)) <= (fabs(flAlphaAlt) + fabs(flBetaAlt)) )
    {
      z = vA.z;
      v22 = flBeta;
      v21 = flAlpha;
      v25 = vB.z;
      v26 = vC.z;
    }
    else
    {
      v26 = vCAlt.z;
      v25 = vBAlt.z;
      z = vAAlt.z;
    }
  }
  else
  {
    z = vA.z;
    v25 = vB.z;
    v26 = vC.z;
  }
  return (((z - v25) * v21) + v25) + ((v26 - v25) * v22);
}


// CNavPoly::TestRayToVertHotspots  (line 1276, @0x0000000003202d40, libserver.so)  // inlines: Init, LengthSqr, Ray_t, VectorAdd, VectorAligned, VectorSubtract, operator*=
// calls: IntersectRayWithTriangle, CNavPoly::GetVertHotspot
// callers: CNavEditor::GetVertUnderCursor
int __fastcall CNavPoly::TestRayToVertHotspots(
        const CNavPoly *const this,
        const Vector *const vStart,
        const Vector *const vEnd)
{
  float x; // xmm7_4
  float v5; // xmm0_4
  float y; // xmm6_4
  float v7; // xmm2_4
  float z; // xmm5_4
  float v9; // xmm1_4
  float v10; // xmm9_4
  float v11; // xmm8_4
  float v12; // xmm4_4
  float v13; // xmm3_4
  float v14; // xmm2_4
  float v15; // xmm1_4
  int m_nVerts; // r9d
  int v17; // ebx
  __int64 v19; // [rsp-8h] [rbp-B8h] BYREF
  Vector vHotspotVerts[4]; // [rsp+0h] [rbp-B0h] BYREF
  Ray_t ray; // [rsp+30h] [rbp-80h]

  ray.m_Start.y = 0.0;
  x = vStart->x;
  ray.m_Delta.y = 0.0;
  v5 = vEnd->x;
  ray.m_StartOffset.y = 0.0;
  y = vStart->y;
  ray.m_Extents.y = 0.0;
  v7 = vEnd->y;
  ray.m_Extents.z = 0.0;
  z = vStart->z;
  v9 = vEnd->z;
  ray.m_Start.z = v5 - x;
  ray.m_Start.w = v7 - y;
  ray.m_Delta.x = v9 - z;
  BYTE1(ray.m_Extents.w) = (((ray.m_Start.z * ray.m_Start.z) + (ray.m_Start.w * ray.m_Start.w))
                          + (ray.m_Delta.x * ray.m_Delta.x)) != 0.0;
  v10 = vec3_origin.x;
  v11 = vec3_origin.y;
  v12 = vec3_origin.z;
  ray.m_StartOffset.z = (v10 - v10) * 0.5;
  ray.m_StartOffset.w = (v11 - v11) * 0.5;
  ray.m_Extents.x = (v12 - v12) * 0.5;
  v13 = (v10 + v10) * 0.5;
  LOBYTE(ray.m_Extents.w) = (((ray.m_StartOffset.z * ray.m_StartOffset.z) + (ray.m_StartOffset.w * ray.m_StartOffset.w))
                           + (ray.m_Extents.x * ray.m_Extents.x)) < 0.000001;
  v14 = (v11 + v11) * 0.5;
  v15 = (v12 + v12) * 0.5;
  vHotspotVerts[3].y = x + v13;
  vHotspotVerts[3].z = y + v14;
  m_nVerts = this->m_nVerts;
  ray.m_Start.x = z + v15;
  ray.m_Delta.z = -v13;
  ray.m_Delta.w = -v14;
  ray.m_StartOffset.x = -v15;
  if ( m_nVerts <= 0 )
    return -1;
  v17 = 0;
  while ( 1 )
  {
    CNavPoly::GetVertHotspot(this, v17, &v19);
    if ( IntersectRayWithTriangle(&vHotspotVerts[3].y, &v19, &vHotspotVerts[0].y, &vHotspotVerts[1].y, 0) > 0.0
      || IntersectRayWithTriangle(&vHotspotVerts[3].y, &vHotspotVerts[1].y, &vHotspotVerts[2].y, &v19, 0) > 0.0 )
    {
      break;
    }
    if ( this->m_nVerts <= ++v17 )
      return -1;
  }
  return v17;
}


// CNavPoly::GetVertHotspot  (line 1300, @0x0000000003202b10, libserver.so)  // inlines: DistTo, FastSqrt, GetNextVertIndexCCW, GetNextVertIndexCW, GetVert, Length, Lerp<Vector>, Min<float>, VectorAdd, VectorLength, VectorMultiply, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator*, operator+, operator-, operator=
// callers: CNavDrawPoly::DrawVertHotspot, CNavPoly::TestRayToVertHotspots
void __fastcall CNavPoly::GetVertHotspot(const CNavPoly *const this, int nVert, Vector *vHotspotVertsOut)
{
  float *v4; // rdx
  int m_nVerts; // r8d
  float v6; // xmm9_4
  float v7; // xmm8_4
  float v8; // xmm7_4
  float *v9; // rdx
  float v10; // xmm2_4
  float v11; // xmm1_4
  float v12; // xmm0_4
  __m128 v13; // xmm6
  float v14; // xmm12_4
  float *v15; // rdx
  float v16; // xmm5_4
  float v17; // xmm4_4
  float v18; // xmm3_4
  __m128 v19; // xmm10
  float v20; // xmm14_4
  __m128 v21; // xmm6
  float y; // xmm11_4
  float v23; // xmm13_4
  float x; // xmm12_4
  float v25; // xmm5_4
  vec_t v26; // xmm2_4
  vec_t v27; // xmm1_4
  vec_t v28; // xmm0_4
  float v29; // xmm5_4
  float v30; // xmm4_4
  float v31; // xmm3_4
  float v32; // [rsp+0h] [rbp-4h]

  v4 = (this + 12 * nVert);
  m_nVerts = this->m_nVerts;
  v6 = v4[2];
  v7 = v4[3];
  v8 = v4[4];
  v9 = (this + 12 * ((m_nVerts + nVert - 1) % m_nVerts));
  v10 = v9[2];
  v11 = v9[3];
  v12 = v9[4];
  v32 = (((v6 - v10) * (v6 - v10)) + ((v7 - v11) * (v7 - v11))) + ((v8 - v12) * (v8 - v12));
  v13 = LODWORD(v32);
  v13.m128_f32[0] = fsqrt(v32);
  v14 = v13.m128_f32[0];
  v15 = (this + 12 * ((nVert + 1) % m_nVerts));
  v16 = v15[2];
  v17 = v15[3];
  v18 = v15[4];
  vHotspotVertsOut->x = v6;
  vHotspotVertsOut->y = v7;
  vHotspotVertsOut->z = v8;
  v19 = v13;
  v20 = fsqrt((((v6 - v16) * (v6 - v16)) + ((v7 - v17) * (v7 - v17))) + ((v8 - v18) * (v8 - v18)));
  v19.m128_f32[0] = fminf(v13.m128_f32[0], v20) * 0.5;
  v21 = _mm_cmplt_ss(0x41100000u, v19);
  v21.m128_i32[0] = _mm_andnot_ps(v21, v19).m128_u32[0] | v21.m128_i32[0] & 0x41100000;
  y = vec3_origin.y;
  v23 = v21.m128_f32[0] / v14;
  v19.m128_i32[0] = LODWORD(vec3_origin.z);
  x = vec3_origin.x;
  v25 = (v16 - v6) - vec3_origin.x;
  v21.m128_f32[0] = v21.m128_f32[0] / v20;
  v26 = ((((v10 - v6) - vec3_origin.x) * v23) + vec3_origin.x) + v6;
  v27 = ((((v11 - v7) - y) * v23) + y) + v7;
  v28 = ((((v12 - v8) - v19.m128_f32[0]) * v23) + v19.m128_f32[0]) + v8;
  vHotspotVertsOut[1].x = v26;
  vHotspotVertsOut[1].y = v27;
  vHotspotVertsOut[1].z = v28;
  v29 = (v25 * v21.m128_f32[0]) + x;
  v30 = (((v17 - v7) - y) * v21.m128_f32[0]) + y;
  v31 = (((v18 - v8) - v19.m128_f32[0]) * v21.m128_f32[0]) + v19.m128_f32[0];
  vHotspotVertsOut[2].x = v26 + v29;
  vHotspotVertsOut[2].y = v27 + v30;
  vHotspotVertsOut[2].z = v28 + v31;
  vHotspotVertsOut[3].x = v29 + v6;
  vHotspotVertsOut[3].y = v30 + v7;
  vHotspotVertsOut[3].z = v31 + v8;
}


// CNavPoly::GetClosestPointOnPoly  (line 1322, @0x0000000003202f70, libserver.so)  // inlines: Begin, ComputeBC, DistToSqr, GetNextVertIndexCW, GetTri, GetVert, LengthSqr, NavTriIterator, Next, operator=
// calls: CalcClosestPointOnTriangle
// callers: CNavDrawArea::DrawAreaConnection, JumpConnector::TryToConnect, CPath::ComputePathDetails, CPath::ComputeSpecialSegments, CPath::FinishAndPostProcessPath, CNavVolumeBreadthFirstSearch::ConvertStartPosToStartArea, CNavGenerator::StichAndRemoveJumpAreas, nav_select_radius, CNavGeneratorAAQuad::FixConnections, CNavBreadthFirstSearch::BreadthFirstSearch, NextBotGroundLocomotion::TraverseLadder, CPathFollower::Climbing (18 total)
Vector __fastcall CNavPoly::GetClosestPointOnPoly(const CNavPoly *const this, const Vector *const vPos)
{
  int m_nVerts; // ecx
  int v5; // r14d
  float *v6; // rdx
  vec_t v7; // xmm2_4
  vec_t v8; // xmm1_4
  vec_t v9; // xmm0_4
  float *v10; // rdx
  vec_t v11; // xmm5_4
  vec_t v12; // xmm4_4
  vec_t v13; // xmm3_4
  float v14; // xmm3_4
  float v15; // xmm0_4
  float v16; // xmm0_4
  int v17; // r8d
  float *v18; // rdx
  float *v19; // rdx
  vec_t v22; // [rsp+Ch] [rbp-A4h]
  __int64 vClosest; // [rsp+10h] [rbp-A0h]
  vec_t z; // [rsp+20h] [rbp-90h]
  vec_t y; // [rsp+24h] [rbp-8Ch]
  vec_t x; // [rsp+28h] [rbp-88h]
  float flClosestDist2; // [rsp+2Ch] [rbp-84h]
  Vector vA; // [rsp+40h] [rbp-70h] BYREF
  Vector vB; // [rsp+50h] [rbp-60h] BYREF
  Vector vC; // [rsp+60h] [rbp-50h] BYREF
  Vector vClosestToTri; // [rsp+70h] [rbp-40h]
  Vector v32; // 0:kr00_12.12
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  m_nVerts = this->m_nVerts;
  x = this->m_vVerts[0].x;
  y = this->m_vVerts[0].y;
  z = this->m_vVerts[0].z;
  flClosestDist2 = 3.4028235e38;
  v5 = (m_nVerts - 1) % m_nVerts;
  v6 = (this + 12 * v5);
  v7 = v6[2];
  v8 = v6[3];
  v9 = v6[4];
  v10 = (this + 12 * ((m_nVerts + v5 - 1) % m_nVerts));
  v11 = v10[2];
  v12 = v10[3];
  v13 = v10[4];
  while ( v5 != 1 )
  {
    vB.x = v7;
    vA.x = x;
    vB.z = v9;
    vA.y = y;
    vC.x = v11;
    vC.y = v12;
    vC.z = v13;
    vA.z = z;
    vB.y = v8;
    v32 = CalcClosestPointOnTriangle(vPos, &vA, &vB, &vC);
    v14 = vPos->y;
    *&vClosestToTri.x = *&v32.x;
    v15 = vPos->x;
    vClosestToTri.z = v32.z;
    v16 = (((v15 - v32.x) * (v15 - v32.x)) + ((v14 - v32.y) * (v14 - v32.y)))
        + ((vPos->z - vClosestToTri.z) * (vPos->z - vClosestToTri.z));
    if ( flClosestDist2 > v16 )
    {
      v22 = v32.z;
      vClosest = *&vClosestToTri.x;
      flClosestDist2 = v16;
    }
    v17 = this->m_nVerts;
    v5 = (v17 + v5 - 1) % v17;
    v18 = (this + 12 * v5);
    v7 = v18[2];
    v8 = v18[3];
    v9 = v18[4];
    v19 = (this + 12 * ((v17 + v5 - 1) % v17));
    v11 = v19[2];
    v12 = v19[3];
    v13 = v19[4];
  }
  result.z = v22;
  *&result.x = vClosest;
  return result;
}


// CNavPoly::GetClosestPointOnPoly2D  (line 1343, @0x0000000003203190, libserver.so)  // inlines: Begin, ComputeBC, DistToSqr, GetNextVertIndexCW, GetTri, GetVert, LengthSqr, NavTriIterator, Next, Vector, Vector2DSubtract, operator=
// calls: CalcClosestPointOnTriangle
// callers: CNavPoly::IsClosestPointFartherThanThreshold2D
Vector __fastcall CNavPoly::GetClosestPointOnPoly2D(const CNavPoly *const this, const Vector2D *const vPos)
{
  int m_nVerts; // ecx
  vec_t x; // xmm1_4
  vec_t v6; // xmm5_4
  int v7; // edx
  int v8; // r15d
  float *v9; // rax
  vec_t v10; // xmm1_4
  vec_t v11; // xmm0_4
  float *v12; // rax
  vec_t v13; // xmm3_4
  vec_t v14; // xmm2_4
  float v15; // xmm2_4
  float v16; // xmm0_4
  float v17; // xmm0_4
  int v18; // r8d
  float *v19; // rax
  float *v20; // rax
  vec_t z; // [rsp+8h] [rbp-B8h]
  vec_t v24; // [rsp+Ch] [rbp-B4h]
  vec_t v25; // [rsp+20h] [rbp-A0h]
  vec_t y; // [rsp+24h] [rbp-9Ch]
  vec_t v27; // [rsp+28h] [rbp-98h]
  float flClosestDist2; // [rsp+2Ch] [rbp-94h]
  Vector vPos3D; // [rsp+40h] [rbp-80h] BYREF
  Vector vA; // [rsp+50h] [rbp-70h] BYREF
  Vector vB; // [rsp+60h] [rbp-60h] BYREF
  Vector vC; // [rsp+70h] [rbp-50h] BYREF
  Vector vClosestToTri; // [rsp+80h] [rbp-40h]
  Vector v34; // 0:kr00_12.12
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  vPos3D.z = 0.0;
  m_nVerts = this->m_nVerts;
  x = vPos->x;
  vPos3D.y = vPos->y;
  v6 = this->m_vVerts[0].x;
  vPos3D.x = x;
  v27 = v6;
  v7 = (m_nVerts - 1) % m_nVerts;
  y = this->m_vVerts[0].y;
  flClosestDist2 = 3.4028235e38;
  v8 = v7;
  v9 = (this + 12 * v7);
  v10 = v9[2];
  v11 = v9[3];
  v12 = (this + 12 * ((m_nVerts + v7 - 1) % m_nVerts));
  v13 = v12[2];
  v14 = v12[3];
  while ( v8 != 1 )
  {
    vB.y = v11;
    vC.x = v13;
    vC.y = v14;
    vA.x = v27;
    vA.y = y;
    vB.x = v10;
    vA.z = 0.0;
    vB.z = 0.0;
    vC.z = 0.0;
    v34 = CalcClosestPointOnTriangle(&vPos3D, &vA, &vB, &vC);
    v15 = vPos->y;
    *&vClosestToTri.x = *&v34.x;
    v16 = vPos->x;
    vClosestToTri.z = v34.z;
    v17 = ((v16 - v34.x) * (v16 - v34.x)) + ((v15 - v34.y) * (v15 - v34.y));
    if ( flClosestDist2 > v17 )
    {
      z = v34.z;
      v25 = vClosestToTri.y;
      v24 = vClosestToTri.x;
      flClosestDist2 = v17;
    }
    v18 = this->m_nVerts;
    v8 = (v18 + v8 - 1) % v18;
    v19 = (this + 12 * v8);
    v10 = v19[2];
    v11 = v19[3];
    v20 = (this + 12 * ((v18 + v8 - 1) % v18));
    v13 = v20[2];
    v14 = v20[3];
  }
  result.z = z;
  *&result.x = __PAIR64__(LODWORD(v25), LODWORD(v24));
  return result;
}


// CNavPoly::GetClosestPointOnPolyAndDistSqrThresholded  (line 1368, @0x0000000003203490, libserver.so)  // inlines: DistSqToPoint, DistToSqr, LengthSqr, Square<float>, operator=
// calls: CNavPoly::GetClosestPointOnPoly
// callers: CNavMesh::GetNearestNav, CNavPoly::IsOverlappingSphere
float __fastcall CNavPoly::GetClosestPointOnPolyAndDistSqrThresholded(
        const CNavPoly *const this,
        const Vector *const vPos,
        float flMaxDistSqr,
        Vector *pPosOut)
{
  float x; // xmm2_4
  float v8; // xmm1_4
  float v9; // xmm1_4
  float y; // xmm2_4
  float v11; // xmm3_4
  float z; // xmm3_4
  float v13; // xmm2_4
  float v14; // xmm0_4
  float v15; // xmm2_4
  float v17; // xmm0_4
  float v18; // xmm0_4
  float v19; // xmm2_4
  float flMaxDistSqra; // [rsp+Ch] [rbp-24h]
  Vector ClosestPointOnPoly; // 0:kr00_12.12

  x = vPos->x;
  v8 = this->m_Extent.lo.x;
  if ( v8 <= vPos->x )
  {
    v18 = this->m_Extent.hi.x;
    v9 = 0.0;
    if ( x > v18 )
      v9 = x - v18;
  }
  else
  {
    v9 = v8 - x;
  }
  y = vPos->y;
  v11 = this->m_Extent.lo.y;
  if ( v11 > y )
  {
    v9 = v11 - y;
    goto LABEL_5;
  }
  v17 = this->m_Extent.hi.y;
  if ( y <= v17 )
  {
LABEL_5:
    z = vPos->z;
    v13 = this->m_Extent.lo.z;
    if ( v13 <= z )
      goto LABEL_6;
LABEL_12:
    v15 = (v13 - z) * (v13 - z);
    goto LABEL_8;
  }
  z = vPos->z;
  v13 = this->m_Extent.lo.z;
  v9 = vPos->y - v17;
  if ( v13 > z )
    goto LABEL_12;
LABEL_6:
  v14 = this->m_Extent.hi.z;
  v15 = 0.0;
  if ( z > v14 )
    v15 = (z - v14) * (z - v14);
LABEL_8:
  if ( flMaxDistSqr <= (((v9 * v9) + 0.0) + v15) )
    return -1.0;
  flMaxDistSqra = flMaxDistSqr;
  ClosestPointOnPoly = CNavPoly::GetClosestPointOnPoly(this, vPos);
  v19 = (((vPos->x - ClosestPointOnPoly.x) * (vPos->x - ClosestPointOnPoly.x))
       + ((vPos->y - ClosestPointOnPoly.y) * (vPos->y - ClosestPointOnPoly.y)))
      + ((vPos->z - ClosestPointOnPoly.z) * (vPos->z - ClosestPointOnPoly.z));
  if ( flMaxDistSqra <= v19 )
    return -1.0;
  if ( pPosOut != 0 )
    *pPosOut = ClosestPointOnPoly;
  return v19;
}


// CNavPoly::GetRandomPoint  (line 1389, @0x0000000003203620, libserver.so)  // inlines: Begin, ComputeBC, Cross, CrossProduct, FastSqrt, GetArea, GetCenter, GetNextVertIndexCW, GetVert, Length, NavTriIterator, Next, VectorAdd, VectorLength, VectorMultiply, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator*, operator+, operator-
// calls: RandomFloat, sqrtf
// callers: std::_Function_handler<bool(CNavArea&), CNavQuery::Script_NavGetRandomPoints(int, HSCRIPT, HSCRIPT)::__lambda21>::_M_invoke
Vector __fastcall CNavPoly::GetRandomPoint(const CNavPoly *const this)
{
  float v2; // xmm0_4
  int m_nVerts; // ecx
  float x; // xmm10_4
  float y; // xmm9_4
  int v6; // esi
  float *v7; // rdx
  float v8; // xmm13_4
  float v9; // xmm15_4
  float v10; // xmm11_4
  __int64 i; // rax
  float *v12; // rdx
  float *v13; // rdx
  float v14; // xmm8_4
  float v15; // xmm14_4
  float v16; // xmm12_4
  float v17; // xmm3_4
  float v18; // xmm0_4
  float v19; // xmm1_4
  float v20; // xmm2_4
  float v21; // xmm0_4
  float v22; // xmm1_4
  float z; // [rsp+10h] [rbp-40h]
  float v26; // [rsp+14h] [rbp-3Ch]
  __int64 v27; // [rsp+28h] [rbp-28h]
  float v28; // [rsp+30h] [rbp-20h]
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  v2 = RandomFloat(0.0, this->m_flSurfaceArea);
  m_nVerts = this->m_nVerts;
  x = this->m_vVerts[0].x;
  y = this->m_vVerts[0].y;
  z = this->m_vVerts[0].z;
  v6 = (m_nVerts - 1) % m_nVerts;
  v7 = (this + 12 * v6);
  v8 = v7[2];
  v9 = v7[3];
  v10 = v7[4];
  for ( i = 3LL * ((m_nVerts + v6 - 1) % m_nVerts); ; i = 3LL * ((m_nVerts + v6 - 1) % m_nVerts) )
  {
    v13 = (this + 4 * i);
    v14 = v13[2];
    v15 = v13[3];
    v16 = v13[4];
    if ( v6 == 1 )
      break;
    v17 = v10 - z;
    v2 = v2
       - (fsqrt(
            (((((v9 - y) * (v16 - z)) - (v17 * (v15 - y))) * (((v9 - y) * (v16 - z)) - (v17 * (v15 - y))))
           + (((v17 * (v14 - x)) - ((v16 - z) * (v8 - x))) * ((v17 * (v14 - x)) - ((v16 - z) * (v8 - x)))))
          + ((((v15 - y) * (v8 - x)) - ((v14 - x) * (v9 - y))) * (((v15 - y) * (v8 - x)) - ((v14 - x) * (v9 - y)))))
        * 0.5);
    if ( v2 <= 0.0 || v6 == 2 )
    {
      v26 = RandomFloat(0.0, 1.0);
      v18 = RandomFloat(0.0, 1.0);
      v19 = fsqrt(v26);
      v20 = v18 * v19;
      v21 = (1.0 - v18) * v19;
      v22 = 1.0 - v19;
      *&v27 = (v14 * v20) + ((v8 * v21) + (x * v22));
      v28 = (v16 * v20) + ((v10 * v21) + (z * v22));
      *(&v27 + 1) = (v15 * v20) + ((v9 * v21) + (y * v22));
      goto LABEL_7;
    }
    v6 = (m_nVerts + v6 - 1) % m_nVerts;
    v12 = (this + 12 * v6);
    v8 = v12[2];
    v9 = v12[3];
    v10 = v12[4];
  }
  v27 = *&this->m_vCenter.x;
  v28 = this->m_vCenter.z;
LABEL_7:
  *&result.x = v27;
  result.z = v28;
  return result;
}


// GetNavTriArea  (line 1412, @0x00000000031ff910, libserver.so)  // inlines: Cross, CrossProduct, FastSqrt, Length, VectorLength, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator-
// callers: CalcRandomPointOnPoly
float __fastcall GetNavTriArea(const Vector *const vA, const Vector *const vB, const Vector *const vC)
{
  float y; // xmm6_4
  float v4; // xmm5_4
  float v5; // xmm3_4
  float z; // xmm0_4
  float v7; // xmm4_4
  float v8; // xmm1_4
  float v9; // xmm2_4
  float v10; // xmm6_4

  y = vA->y;
  v4 = vB->x - vA->x;
  v5 = vC->x - vA->x;
  z = vA->z;
  v7 = vB->y - y;
  v8 = vC->y - y;
  v9 = vB->z - z;
  v10 = vC->z - z;
  return fsqrt(
           ((((v7 * v10) - (v9 * v8)) * ((v7 * v10) - (v9 * v8))) + (((v9 * v5) - (v10 * v4)) * ((v9 * v5) - (v10 * v4))))
         + (((v8 * v4) - (v5 * v7)) * ((v8 * v4) - (v5 * v7))))
       * 0.5;
}


// CalcRandomPointOnPoly  (line 1421, @0x0000000003203960, libserver.so)  // inlines: VectorAdd, VectorMultiply, operator*, operator+
// calls: GetNavTriArea, RandomFloat, sqrtf
// callers: CNavPoly::GetRandomPointWithHullClearance
Vector __fastcall CalcRandomPointOnPoly(int nVerts, Vector *pVerts)
{
  __int64 v2; // r12
  vec_t v3; // ebx
  Vector *v4; // r15
  float v5; // xmm1_4
  __int64 v6; // rdx
  float v7; // xmm1_4
  Vector *v8; // r15
  __int64 v9; // r12
  vec_t v10; // ebx
  __int64 v11; // rdx
  float v12; // xmm0_4
  float v13; // xmm1_4
  float v14; // xmm2_4
  float v15; // xmm0_4
  vec_t z; // eax
  Vector *v19; // [rsp+0h] [rbp-B0h]
  Vector *nVertsb; // [rsp+10h] [rbp-A0h]
  Vector *flR2; // [rsp+20h] [rbp-90h]
  float flR1; // [rsp+2Ch] [rbp-84h]
  Vector vA_0; // [rsp+40h] [rbp-70h] BYREF
  Vector vB_0; // [rsp+50h] [rbp-60h] BYREF
  Vector vC_0; // [rsp+60h] [rbp-50h] BYREF
  Vector vC; // [rsp+70h] [rbp-40h] BYREF
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  if ( nVerts <= 2 )
  {
    RandomFloat(0.0, 0.0);
LABEL_11:
    z = vec3_origin.z;
    *&vC.x = *&vec3_origin.x;
    vC.z = z;
  }
  else
  {
    v2 = *&pVerts->x;
    v3 = pVerts->z;
    v4 = pVerts + 1;
    v19 = pVerts + 1;
    v5 = 0.0;
    flR2 = &pVerts[(nVerts - 3) + 2];
    do
    {
      v6 = *&v4->x;
      ++v4;
      *&vB_0.x = v2;
      vB_0.z = v3;
      *&vC_0.x = v6;
      vC_0.z = v4[-1].z;
      vC = *v4;
      v5 = v5 + GetNavTriArea(&vB_0, &vC_0, &vC);
    }
    while ( v4 != flR2 );
    v7 = RandomFloat(0.0, v5);
    v8 = v19;
    nVertsb = &v19[nVerts - 2];
    v9 = *&pVerts->x;
    v10 = pVerts->z;
    while ( 1 )
    {
      v11 = *&v8->x;
      *&vA_0.x = v9;
      vA_0.z = v10;
      *&vB_0.x = v11;
      vB_0.z = v8->z;
      vC_0 = v8[1];
      v7 = v7 - GetNavTriArea(&vA_0, &vB_0, &vC_0);
      if ( v7 <= 0.0 || v8 == nVertsb )
        break;
      if ( ++v8 == flR2 )
        goto LABEL_11;
    }
    flR1 = RandomFloat(0.0, 1.0);
    v12 = RandomFloat(0.0, 1.0);
    v13 = fsqrt(flR1);
    v14 = v12;
    v15 = (1.0 - v12) * v13;
    vC.y = (vC_0.y * (v14 * v13)) + ((vB_0.y * v15) + (vA_0.y * (1.0 - v13)));
    vC.z = (vC_0.z * (v14 * v13)) + ((vB_0.z * v15) + (vA_0.z * (1.0 - v13)));
    vC.x = ((v14 * v13) * vC_0.x) + ((v15 * vB_0.x) + ((1.0 - v13) * vA_0.x));
  }
  *&result.x = *&vC.x;
  result.z = vC.z;
  return result;
}


// CalcClosestPointOnPoly  (line 1456, @0x0000000003203c10, libserver.so)  // inlines: DistToSqr, LengthSqr, operator=
// calls: CalcClosestPointOnTriangle
// callers: CNavPoly::GetClosestPointOnPolyWithHullClearance
Vector __fastcall CalcClosestPointOnPoly(const Vector *const vPos, int nVerts, Vector *pVerts)
{
  Vector *v3; // r15
  Vector *v5; // r14
  float y; // xmm3_4
  float x; // xmm0_4
  float v9; // xmm0_4
  vec_t z; // [rsp+0h] [rbp-A0h]
  vec_t v13; // [rsp+4h] [rbp-9Ch]
  vec_t v14; // [rsp+18h] [rbp-88h]
  float flClosestDist2; // [rsp+1Ch] [rbp-84h]
  Vector vA; // [rsp+30h] [rbp-70h] BYREF
  Vector vB; // [rsp+40h] [rbp-60h] BYREF
  Vector vC; // [rsp+50h] [rbp-50h] BYREF
  Vector vClosestToTri; // [rsp+60h] [rbp-40h]
  Vector v20; // 0:kr00_12.12
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  if ( nVerts > 2 )
  {
    v3 = pVerts + 1;
    flClosestDist2 = 3.4028235e38;
    v5 = &pVerts[(nVerts - 3) + 2];
    do
    {
      vA = *pVerts;
      vB = *v3;
      vC = v3[1];
      v20 = CalcClosestPointOnTriangle(vPos, &vA, &vB, &vC);
      y = vPos->y;
      *&vClosestToTri.x = *&v20.x;
      x = vPos->x;
      vClosestToTri.z = v20.z;
      v9 = (((x - v20.x) * (x - v20.x)) + ((y - v20.y) * (y - v20.y)))
         + ((vPos->z - vClosestToTri.z) * (vPos->z - vClosestToTri.z));
      if ( flClosestDist2 > v9 )
      {
        z = v20.z;
        v13 = vClosestToTri.y;
        v14 = vClosestToTri.x;
        flClosestDist2 = v9;
      }
      ++v3;
    }
    while ( v3 != v5 );
  }
  result.z = z;
  *&result.x = __PAIR64__(LODWORD(v13), LODWORD(v14));
  return result;
}


// CNavPoly::ClipPolyVertsToHullClearance  (line 1481, @0x0000000003203d70, libserver.so)  // inlines: Dot, DotProduct, GetVert, Max<float>, operator-, operator=
// calls: CNavPoly::GetEdgeNormal, ClipPolyToPlane
// callers: CNavPoly::GetRandomPointWithHullClearance
__int64 __fastcall CNavPoly::ClipPolyVertsToHullClearance(
        const CNavPoly *const this,
        float a2,
        float flHullRadius,
        Vector *pClippedVerts)
{
  unsigned int m_nVerts; // r12d
  int v6; // r15d
  Vector *m_vVerts; // rdx
  __int64 v8; // rcx
  Vector *v9; // rsi
  Vector *v10; // rdi
  vec_t x; // xmm0_4
  vec_t y; // xmm2_4
  vec_t z; // xmm1_4
  int v14; // r13d
  int v15; // edx
  float *v16; // rsi
  float v17; // xmm2_4
  __int64 v20; // [rsp+10h] [rbp-A0h]
  float v21; // [rsp+1Ch] [rbp-94h]
  Vector vClipPlaneNormal; // [rsp+20h] [rbp-90h] BYREF
  Vector EdgeNormal; // [rsp+30h] [rbp-80h]
  Vector *pClippedVertsWorking[2]; // [rsp+40h] [rbp-70h]
  Vector vClippedVertsSet2[4]; // [rsp+50h] [rbp-60h] BYREF

  m_nVerts = this->m_nVerts;
  pClippedVertsWorking[0] = pClippedVerts;
  pClippedVertsWorking[1] = vClippedVertsSet2;
  v6 = m_nVerts & 1;
  if ( m_nVerts <= 0 )
    return m_nVerts;
  m_vVerts = this->m_vVerts;
  v8 = m_nVerts & 1;
  v9 = pClippedVertsWorking[v8];
  v10 = &this->m_vVerts[m_nVerts];
  do
  {
    x = m_vVerts->x;
    ++m_vVerts;
    ++v9;
    y = m_vVerts[-1].y;
    z = m_vVerts[-1].z;
    v9[-1].x = x;
    v9[-1].y = y;
    v9[-1].z = z;
  }
  while ( m_vVerts != v10 );
  if ( this->m_nVerts <= 0 )
    return m_nVerts;
  v14 = 0;
  while ( 1 )
  {
    v20 = v8;
    v21 = fmaxf(0.0, a2 - this->m_flClearance);
    EdgeNormal = CNavPoly::GetEdgeNormal(this, v14);
    vClipPlaneNormal.z = -EdgeNormal.z;
    vClipPlaneNormal.y = -EdgeNormal.y;
    v16 = (this + 12 * v14);
    v17 = -EdgeNormal.y * v16[3];
    vClipPlaneNormal.x = -EdgeNormal.x;
    m_nVerts = ClipPolyToPlane(
                 pClippedVertsWorking[v20],
                 m_nVerts,
                 pClippedVertsWorking[1 - v6],
                 &vClipPlaneNormal,
                 (((-EdgeNormal.x * v16[2]) + v17) + (-EdgeNormal.z * v16[4])) + v21,
                 0.0099999998);
    if ( m_nVerts == 0 )
      break;
    v15 = this->m_nVerts;
    if ( v15 - 1 > v14 )
      v6 = 1 - v6;
    if ( v15 <= ++v14 )
      return m_nVerts;
    v8 = v6;
  }
  return 0;
}


// CNavPoly::GetRandomPointWithHullClearance  (line 1520, @0x0000000003203f50, libserver.so)  // inlines: GetCenter, GetExpectHullClearance, Max<float>, operator=
// calls: CNavPoly::ClipPolyVertsToHullClearance, CalcRandomPointOnPoly
// globals: CNavConfig::ms_bExpectHullClearance
__int64 __fastcall CNavPoly::GetRandomPointWithHullClearance(
        CNavPoly *const this,
        float a2,
        float flHullRadius,
        Vector *pRandomPosOut)
{
  int v6; // eax
  __int64 result; // rax
  vec_t y; // xmm1_4
  vec_t z; // xmm0_4
  Vector vClippedVerts[4]; // [rsp+10h] [rbp-50h] BYREF

  if ( pRandomPosOut == 0 )
    return 0;
  v6 = CNavPoly::ClipPolyVertsToHullClearance(this, fmaxf(this->m_flClearance + 0.1, a2), a2, vClippedVerts);
  if ( v6 != 0 )
  {
    *pRandomPosOut = CalcRandomPointOnPoly(v6, vClippedVerts);
    return 1;
  }
  else
  {
    result = CNavConfig::ms_bExpectHullClearance;
    if ( !CNavConfig::ms_bExpectHullClearance )
      return 0;
    y = this->m_vCenter.y;
    z = this->m_vCenter.z;
    pRandomPosOut->x = this->m_vCenter.x;
    pRandomPosOut->y = y;
    pRandomPosOut->z = z;
  }
  return result;
}


// CNavPoly::GetClosestPointOnPolyWithHullClearance  (line 1555, @0x0000000003205ec0, libserver.so)  // inlines: CanSupportHull, operator=
// calls: CNavPoly::GetVertWithHullMargin, CalcClosestPointOnPoly
// callers: CNavEditor::UpdateSelection
__int64 __fastcall CNavPoly::GetClosestPointOnPolyWithHullClearance(
        const CNavPoly *const this,
        const Vector *const vPos,
        __int64 a3,
        Vector *pClosestPosOut,
        double a5,
        float a6)
{
  __int64 result; // rax
  int m_nVerts; // esi
  int v11; // r15d
  Vector *v12; // rbx
  int v13; // esi
  unsigned __int64 v14; // xmm0_8
  float navHull_4; // [rsp+14h] [rbp-7Ch]
  Vector vClippedVerts[4]; // [rsp+30h] [rbp-60h] BYREF
  Vector v18; // 0:kr00_12.12

  navHull_4 = *(&a3 + 1);
  if ( pClosestPosOut == 0 )
    return 0;
  result = 0;
  if ( (this->m_nHullSupport & a3) != 0 )
  {
    m_nVerts = this->m_nVerts;
    if ( m_nVerts > 0 )
    {
      v11 = 0;
      v12 = vClippedVerts;
      do
      {
        v13 = v11++;
        ++v12;
        v14 = CNavPoly::GetVertWithHullMargin(this, v13, navHull_4, a6).m128i_u64[0];
        m_nVerts = this->m_nVerts;
        v12[-1].z = a6;
        *&v12[-1].x = v14;
      }
      while ( m_nVerts > v11 );
    }
    v18 = CalcClosestPointOnPoly(vPos, m_nVerts, vClippedVerts);
    result = 1;
    *pClosestPosOut = v18;
  }
  return result;
}


// CNavPoly::GetZDeltaAtEdgeToPoly  (line 1586, @0x0000000003204020, libserver.so)  // inlines: GetCenter, operator=
// calls: CNavPoly::GetClosestPointOnPoly
// callers: CNavShortestPathCost::IsNeighborReachable, std::_Function_handler<bool(const CNavArea&, const CNavArea&), TestRayToNavMesh(const Vector&, const Vector&, NavHull_t, CNavTraceResult*, CNavTestRayParams*, FuncNavAreaTransition_t*)::__lambda11>::_M_invoke, CNavShortestPathCost::CalcCostFloorAreas, CNavArea::ConnectTo
float __fastcall CNavPoly::GetZDeltaAtEdgeToPoly(const CNavPoly *const this, const CNavPoly *const rPoly)
{
  bool v3; // zf
  float z; // xmm1_4
  Vector vPointOnPassed; // [rsp+0h] [rbp-30h] BYREF
  __int64 v7; // [rsp+10h] [rbp-20h]
  Vector ClosestPointOnPoly; // 0:kr00_12.12

  if ( (*(this + 124) & 0x10) == 0 )
  {
    if ( (*(rPoly + 124) & 0x10) != 0 )
    {
      vPointOnPassed = rPoly->m_vCenter;
      goto LABEL_7;
    }
LABEL_3:
    ClosestPointOnPoly = CNavPoly::GetClosestPointOnPoly(rPoly, &this->m_vCenter);
    v3 = (*(this + 124) & 0x10) == 0;
    v7 = *&ClosestPointOnPoly.x;
    vPointOnPassed = ClosestPointOnPoly;
    if ( !v3 )
    {
      z = this->m_vCenter.z;
      return vPointOnPassed.z - z;
    }
LABEL_7:
    LODWORD(z) = COERCE_UNSIGNED_INT(CNavPoly::GetClosestPointOnPoly(this, &vPointOnPassed).z);
    return vPointOnPassed.z - z;
  }
  if ( (*(rPoly + 124) & 0x10) == 0 )
    goto LABEL_3;
  return rPoly->m_vCenter.z - this->m_vCenter.z;
}


// CNavPoly::CalcDistanceSquaredFarthestToPoint  (line 1625, @0x00000000032040d0, libserver.so)  // inlines: DistToSqr, LengthSqr, Max<float>
float __fastcall CNavPoly::CalcDistanceSquaredFarthestToPoint(const CNavPoly *const this, const Vector *const vPos)
{
  int m_nVerts; // edx
  float result; // xmm0_4
  Vector *m_vVerts; // rax
  Vector *v5; // rdx
  float v6; // xmm1_4

  m_nVerts = this->m_nVerts;
  result = 0.0;
  if ( m_nVerts > 0 )
  {
    m_vVerts = this->m_vVerts;
    result = 0.0;
    v5 = &this->m_vVerts[(m_nVerts - 1) + 1];
    do
    {
      v6 = vPos->x - m_vVerts->x;
      ++m_vVerts;
      result = fmaxf(
                 ((v6 * v6) + ((vPos->y - m_vVerts[-1].y) * (vPos->y - m_vVerts[-1].y)))
               + ((vPos->z - m_vVerts[-1].z) * (vPos->z - m_vVerts[-1].z)),
                 result);
    }
    while ( m_vVerts != v5 );
  }
  return result;
}


// CNavPoly::CalcDistanceSquaredToPoint  (line 1638, @0x0000000003204140, libserver.so)  // inlines: Begin, ComputeBC, DistToSqr, GetNextVertIndexCW, GetTri, GetVert, LengthSqr, NavTriIterator, Next, operator=
// calls: CalcClosestPointOnTriangle
// callers: CNavArea::SplitArea, CNavArea::SplitArea_Old, CNavLadder::OnSplit
float __fastcall CNavPoly::CalcDistanceSquaredToPoint(const CNavPoly *const this, const Vector *const vPos)
{
  int m_nVerts; // ecx
  float v5; // xmm5_4
  int v6; // r14d
  float *v7; // rdx
  vec_t v8; // xmm2_4
  vec_t v9; // xmm1_4
  vec_t v10; // xmm0_4
  float *v11; // rdx
  vec_t v12; // xmm6_4
  vec_t v13; // xmm4_4
  vec_t v14; // xmm3_4
  int v15; // r8d
  float v16; // xmm2_4
  float v17; // xmm4_4
  float *v18; // rdx
  float *v19; // rdx
  vec_t z; // [rsp+10h] [rbp-80h]
  vec_t y; // [rsp+14h] [rbp-7Ch]
  vec_t x; // [rsp+18h] [rbp-78h]
  float flClosestDist2; // [rsp+1Ch] [rbp-74h]
  Vector vA; // [rsp+20h] [rbp-70h] BYREF
  Vector vB; // [rsp+30h] [rbp-60h] BYREF
  Vector vC; // [rsp+40h] [rbp-50h] BYREF
  Vector vClosestToTri; // [rsp+50h] [rbp-40h]
  Vector v29; // 0:kr00_12.12

  m_nVerts = this->m_nVerts;
  v5 = 3.4028235e38;
  x = this->m_vVerts[0].x;
  y = this->m_vVerts[0].y;
  z = this->m_vVerts[0].z;
  v6 = (m_nVerts - 1) % m_nVerts;
  v7 = (this + 12 * v6);
  v8 = v7[2];
  v9 = v7[3];
  v10 = v7[4];
  v11 = (this + 12 * ((m_nVerts + v6 - 1) % m_nVerts));
  v12 = v11[2];
  v13 = v11[3];
  v14 = v11[4];
  while ( v6 != 1 )
  {
    flClosestDist2 = v5;
    vA.x = x;
    vB.x = v8;
    vA.y = y;
    vB.y = v9;
    vB.z = v10;
    vC.x = v12;
    vC.y = v13;
    vC.z = v14;
    vA.z = z;
    v29 = CalcClosestPointOnTriangle(vPos, &vA, &vB, &vC);
    v15 = this->m_nVerts;
    v16 = vPos->x;
    *&vClosestToTri.x = *&v29.x;
    v17 = vPos->y;
    vClosestToTri.z = v29.z;
    v5 = fminf(
           (((v16 - v29.x) * (v16 - v29.x)) + ((v17 - v29.y) * (v17 - v29.y)))
         + ((vPos->z - vClosestToTri.z) * (vPos->z - vClosestToTri.z)),
           flClosestDist2);
    v6 = (v6 + v15 - 1) % v15;
    v18 = (this + 12 * v6);
    v8 = v18[2];
    v9 = v18[3];
    v10 = v18[4];
    v19 = (this + 12 * ((v6 + v15 - 1) % v15));
    v12 = v19[2];
    v13 = v19[3];
    v14 = v19[4];
  }
  return v5;
}


// CNavPoly::ComputePortal_Old  (line 1657, @0x00000000032042f0, libserver.so)  // inlines: GetVert, Max<float>, Min<float>
// calls: CNavPoly::GetZ
// callers: CNavGeneratorAAQuad::CreateObstacleTopAreaIfNecessary, CNavGeneratorAAQuad::FixConnections, CNavPoly::ComputeLargestPortal
void __fastcall CNavPoly::ComputePortal_Old(
        const CNavPoly *const this,
        const CNavPoly *const rPolyTo,
        NavEdgeIndex nEdge,
        Vector *pCenterOut,
        float *pHalfWidthOut)
{
  float x; // xmm3_4
  float y; // xmm2_4
  float v7; // xmm0_4
  float v8; // xmm1_4
  float v9; // xmm7_4
  float v10; // xmm5_4
  float v11; // xmm6_4
  float v12; // xmm4_4
  float v13; // xmm2_4
  float v14; // xmm5_4
  float v15; // xmm0_4
  float v16; // xmm3_4
  float v17; // xmm7_4
  float v18; // xmm1_4
  float v19; // xmm2_4
  vec_t v20; // xmm0_4

  x = this->m_vVerts[0].x;
  y = this->m_vVerts[0].y;
  v7 = this->m_vVerts[2].x;
  v8 = this->m_vVerts[2].y;
  v9 = rPolyTo->m_vVerts[0].x;
  v10 = rPolyTo->m_vVerts[0].y;
  v11 = rPolyTo->m_vVerts[2].x;
  v12 = rPolyTo->m_vVerts[2].y;
  if ( (nEdge & 0xFD) != 0 )
  {
    if ( nEdge == 3 )
      pCenterOut->x = x;
    else
      pCenterOut->x = v7;
    v17 = fminf(v8, v12);
    v18 = fminf(v8, fmaxf(y, v10));
    v19 = fmaxf(y, v17);
    v20 = (v18 + v19) * 0.5;
    v13 = (v19 - v18) * 0.5;
    pCenterOut->y = v20;
    *pHalfWidthOut = v13;
  }
  else
  {
    if ( nEdge != 0 )
      pCenterOut->y = v8;
    else
      pCenterOut->y = y;
    v13 = 0.5;
    v14 = fminf(v7, v11);
    v15 = fminf(v7, fmaxf(x, v9));
    v16 = fmaxf(x, v14);
    pCenterOut->x = (v15 + v16) * 0.5;
    *pHalfWidthOut = (v16 - v15) * 0.5;
  }
  pCenterOut->z = CNavPoly::GetZ(this, pCenterOut->x, pCenterOut->y, v13);
}


// CNavPoly::ComputeOrientedPortal  (line 1724, @0x0000000003204400, libserver.so)  // inlines: DistTo, FastSqrt, GetVert, GetVertIndexCCWForEdge, GetVertIndexCWForEdge, Length, Vector2DLength, Vector2DSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss
// calls: NavUtilsCalcSegmentOverlap
// callers: CNavShortestPathCost::CalcCostFloorAreas, CNavDrawArea::DrawAreaConnection, JumpConnector::TryToConnect, CNavGenerator::StichAndRemoveJumpAreas, CNavArea::IsLineToPointWithinPortal, CNavArea::ConnectTo, CNavArea::ConnectSplitEdge, IsValidJumpDownConnection, CNavMesh::GetNavMeshConnectionsAsDebugGeometry
void __fastcall CNavPoly::ComputeOrientedPortal(
        const CNavPoly *const this,
        const CNavPoly *const rPolyTo,
        NavEdgeIndex nEdge,
        NavEdgeIndex nBackEdge,
        float flHullRadius,
        CNavOrientedPortal *pPortalOut)
{
  float *v7; // r9
  vec_t v8; // xmm1_4
  int v9; // edx
  vec_t v10; // xmm0_4
  float *v11; // rdi
  int v12; // eax
  vec_t v13; // xmm2_4
  float *v14; // rcx
  vec_t v15; // xmm0_4
  int v16; // edx
  vec_t v17; // xmm2_4
  vec_t v18; // xmm0_4
  float *v19; // rdx
  vec_t v20; // xmm1_4
  vec_t v21; // xmm0_4
  Vector vSrcEdge0; // [rsp+20h] [rbp-50h] BYREF
  Vector vSrcEdge1; // [rsp+30h] [rbp-40h] BYREF
  Vector vDstEdge0; // [rsp+40h] [rbp-30h] BYREF
  Vector vDstEdge1; // [rsp+50h] [rbp-20h] BYREF

  v7 = (this + 12 * nEdge);
  v8 = v7[3];
  v9 = (nEdge + 1) % this->m_nVerts;
  v10 = v7[4];
  vSrcEdge0.x = v7[2];
  vSrcEdge0.y = v8;
  vSrcEdge0.z = v10;
  v11 = (this + 12 * v9);
  v12 = nBackEdge + 1;
  v13 = v11[2];
  v14 = (rPolyTo + 12 * nBackEdge);
  v15 = v11[4];
  v16 = v12 % rPolyTo->m_nVerts;
  vSrcEdge1.y = v11[3];
  vSrcEdge1.z = v15;
  vSrcEdge1.x = v13;
  v17 = v14[2];
  v18 = v14[4];
  vDstEdge0.y = v14[3];
  vDstEdge0.x = v17;
  vDstEdge0.z = v18;
  v19 = (rPolyTo + 12 * v16);
  v20 = v19[3];
  v21 = v19[4];
  vDstEdge1.x = v19[2];
  vDstEdge1.y = v20;
  vDstEdge1.z = v21;
  NavUtilsCalcSegmentOverlap(
    &vSrcEdge0,
    &vSrcEdge1,
    &vDstEdge0,
    &vDstEdge1,
    &pPortalOut->m_vRight,
    &pPortalOut->m_vLeft,
    0,
    0);
  pPortalOut->m_flWidth = fsqrt(
                            ((pPortalOut->m_vLeft.x - pPortalOut->m_vRight.x)
                           * (pPortalOut->m_vLeft.x - pPortalOut->m_vRight.x))
                          + ((pPortalOut->m_vLeft.y - pPortalOut->m_vRight.y)
                           * (pPortalOut->m_vLeft.y - pPortalOut->m_vRight.y)));
}


// CNavPoly::ComputeLargestPortal  (line 1756, @0x0000000003204530, libserver.so)  // inlines: VectorSubtract, operator-, operator=
// calls: CNavPoly::ComputePortal_Old
// callers: CNavEditor::CommandNavConnect
NavEdgeIndex __fastcall CNavPoly::ComputeLargestPortal(
        const CNavPoly *const this,
        const CNavPoly *const rToPoly,
        Vector *pCenterOut,
        float *pHalfWidthOut)
{
  NavEdgeIndex v6; // dl
  int v7; // r15d
  NavEdgeIndex nBestEdge; // [rsp+17h] [rbp-69h]
  vec_t x; // [rsp+18h] [rbp-68h]
  vec_t z; // [rsp+1Ch] [rbp-64h]
  vec_t y; // [rsp+20h] [rbp-60h]
  float v15; // [rsp+24h] [rbp-5Ch]
  float v16; // [rsp+28h] [rbp-58h]
  float flBestHalfWidth; // [rsp+2Ch] [rbp-54h]
  float flTestHalfWidth; // [rsp+3Ch] [rbp-44h] BYREF
  Vector vTestCenter; // [rsp+40h] [rbp-40h] BYREF

  v16 = rToPoly->m_vCenter.x - this->m_vCenter.x;
  x = vec3_origin.x;
  y = vec3_origin.y;
  z = vec3_origin.z;
  v15 = rToPoly->m_vCenter.y - this->m_vCenter.y;
  if ( this->m_nVerts > 0 )
  {
    v6 = 0;
    v7 = 0;
    flBestHalfWidth = 0.0;
    nBestEdge = -1;
    while ( 1 )
    {
      if ( v7 == 1 )
      {
        if ( v16 <= 0.0 )
          goto LABEL_6;
      }
      else if ( v7 > 1 )
      {
        if ( v7 == 2 )
        {
          if ( v15 <= 0.0 )
            goto LABEL_6;
        }
        else if ( v7 == 3 && v16 >= 0.0 )
        {
          goto LABEL_6;
        }
      }
      else if ( v7 == 0 && v15 >= 0.0 )
      {
        goto LABEL_6;
      }
      CNavPoly::ComputePortal_Old(this, rToPoly, v6, &vTestCenter, &flTestHalfWidth);
      if ( flTestHalfWidth <= flBestHalfWidth )
      {
LABEL_6:
        v6 = ++v7;
        if ( v7 >= this->m_nVerts )
          goto LABEL_13;
      }
      else
      {
        nBestEdge = v7++;
        v6 = v7;
        flBestHalfWidth = flTestHalfWidth;
        x = vTestCenter.x;
        y = vTestCenter.y;
        z = vTestCenter.z;
        if ( v7 >= this->m_nVerts )
          goto LABEL_13;
      }
    }
  }
  nBestEdge = -1;
  flBestHalfWidth = 0.0;
LABEL_13:
  pCenterOut->x = x;
  pCenterOut->y = y;
  pCenterOut->z = z;
  *pHalfWidthOut = flBestHalfWidth;
  return nBestEdge;
}


// CNavPoly::IntersectRayWithPoly  (line 1813, @0x00000000032046f0, libserver.so)  // inlines: Begin, ComputeBC, GetNextVertIndexCW, GetTri, GetVert, NavTriIterator, Next, operator=
// calls: IntersectRayWithTriangle
// callers: CNavMesh::FindNavAreaOrLadderAlongRay
float __fastcall CNavPoly::IntersectRayWithPoly(const CNavPoly *const this, const Ray_t *const ray)
{
  int m_nVerts; // ecx
  int v5; // r15d
  float *v6; // rdx
  vec_t v7; // xmm2_4
  vec_t v8; // xmm1_4
  vec_t v9; // xmm0_4
  float *v10; // rdx
  vec_t v11; // xmm5_4
  vec_t v12; // xmm4_4
  vec_t v13; // xmm3_4
  int v14; // r8d
  float *v15; // rdx
  float *v16; // rdx
  float result; // xmm0_4
  vec_t z; // [rsp+14h] [rbp-6Ch]
  vec_t y; // [rsp+18h] [rbp-68h]
  vec_t x; // [rsp+1Ch] [rbp-64h]
  Vector vA; // [rsp+20h] [rbp-60h] BYREF
  Vector vB; // [rsp+30h] [rbp-50h] BYREF
  Vector vC; // [rsp+40h] [rbp-40h] BYREF

  m_nVerts = this->m_nVerts;
  x = this->m_vVerts[0].x;
  y = this->m_vVerts[0].y;
  z = this->m_vVerts[0].z;
  v5 = (m_nVerts - 1) % m_nVerts;
  v6 = (this + 12 * v5);
  v7 = v6[2];
  v8 = v6[3];
  v9 = v6[4];
  v10 = (this + 12 * ((m_nVerts + v5 - 1) % m_nVerts));
  v11 = v10[2];
  v12 = v10[3];
  v13 = v10[4];
  while ( v5 != 1 )
  {
    vA.x = x;
    vB.x = v7;
    vA.y = y;
    vA.z = z;
    vB.y = v8;
    vB.z = v9;
    vC.x = v11;
    vC.y = v12;
    vC.z = v13;
    result = IntersectRayWithTriangle(ray, &vA, &vB, &vC, 0);
    if ( result > 0.0 )
      return result;
    v14 = this->m_nVerts;
    v5 = (v14 + v5 - 1) % v14;
    v15 = (this + 12 * v5);
    v7 = v15[2];
    v8 = v15[3];
    v9 = v15[4];
    v16 = (this + 12 * ((v14 + v5 - 1) % v14));
    v11 = v16[2];
    v12 = v16[3];
    v13 = v16[4];
  }
  return -1.0;
}


// CNavPoly::IntersectRayWithPolyEdge2D  (line 1830, @0x0000000003204860, libserver.so)  // inlines: Dot, DotProduct2D, FastSqrt, IsFinite, IsValid, Length, LengthSqr, Lerp<float>, Negate, NormalizeInPlace, Vector2D, Vector2DLength, Vector2DNormalize, Vector2DSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator-, operator/=
// callers: CNavEditor::UpdateSelection, CNavMesh::TestRayToMesh, CNavPoly::IsOverlappingSegment2D
NavEdgeIndex __fastcall CNavPoly::IntersectRayWithPolyEdge2D(
        const CNavPoly *const this,
        const Ray2D_t *const rSeg,
        bool bIncoming,
        float *pTOut)
{
  __m128i x_low; // xmm7
  NavEdgeIndex result; // al
  __m128i y_low; // xmm8
  float x; // r10d
  float y; // ebx
  float v9; // xmm0_4
  float v10; // xmm9_4
  float v11; // xmm10_4
  float v12; // xmm15_4
  int v13; // r9d
  float v14; // xmm11_4
  int m_nVerts; // r8d
  float i; // xmm3_4
  float *v17; // rax
  float v18; // xmm5_4
  float v19; // xmm4_4
  float v20; // xmm0_4
  float v21; // xmm0_4
  float v22; // xmm2_4
  float v23; // xmm1_4
  __int64 v24; // [rsp-8h] [rbp-8h]

  x_low = LODWORD(rSeg->m_start.x);
  result = -1;
  if ( (_mm_cvtsi128_si32(x_low) & 0x7F800000) != 0x7F800000 )
  {
    y_low = LODWORD(rSeg->m_start.y);
    if ( (_mm_cvtsi128_si32(y_low) & 0x7F800000) != 0x7F800000 )
    {
      x = rSeg->m_delta.x;
      if ( (LODWORD(x) & 0x7F800000) != 0x7F800000 )
      {
        y = rSeg->m_delta.y;
        if ( (LODWORD(y) & 0x7F800000) != 0x7F800000 )
        {
          *(&v24 - 6) = x * x;
          *(&v24 - 5) = (-y * -y) + (x * x);
          v9 = fsqrt(*(&v24 - 5));
          if ( v9 == 0.0 )
          {
            v11 = 0.0;
            v10 = 0.0;
          }
          else
          {
            v10 = -y * (1.0 / v9);
            v11 = (1.0 / v9) * x;
          }
          if ( bIncoming )
          {
            v10 = -v10;
            v11 = -v11;
          }
          v12 = this->m_vVerts[0].x;
          v13 = 0;
          v14 = this->m_vVerts[0].y;
          m_nVerts = this->m_nVerts;
          for ( i = ((v12 - *x_low.m128i_i32) * v10) + ((v14 - *y_low.m128i_i32) * v11); ; i = (v18 * v10) + (v19 * v11) )
          {
            if ( v13 >= m_nVerts )
              return -1;
            v17 = (this + 12 * ((v13 + 1) % m_nVerts));
            v18 = v17[2] - *x_low.m128i_i32;
            v19 = v17[3] - *y_low.m128i_i32;
            v20 = (v18 * v10) + (v19 * v11);
            if ( i <= 0.0 && v20 >= 0.0 )
              break;
            v14 = v17[3];
            v12 = v17[2];
            ++v13;
          }
          if ( pTOut != 0 )
          {
            v21 = v20 - i;
            v22 = (y * y) + *(&v24 - 6);
            v23 = (((v12 - *x_low.m128i_i32) * x) + ((v14 - *y_low.m128i_i32) * y)) / v22;
            if ( v21 <= 0.00000011920929 )
              *pTOut = v23;
            else
              *pTOut = ((-i / v21) * ((((x * v18) + (y * v19)) / v22) - v23)) + v23;
          }
          return v13;
        }
      }
    }
  }
  return result;
}


// CNavPoly::MergeWithPoly  (line 1881, @0x0000000003204b40, libserver.so)  // inlines: GetVert, operator=
// calls: CNavPoly::SetCorners
// callers: CNavArea::MergeEdit
bool __fastcall CNavPoly::MergeWithPoly(CNavPoly *const this, const CNavPoly *const rPolyOther)
{
  bool v2; // dl
  float x; // xmm3_4
  float v4; // xmm4_4
  float y; // xmm5_4
  vec_t z; // xmm12_4
  float v7; // xmm7_4
  float v8; // xmm9_4
  vec_t v9; // xmm11_4
  float v10; // xmm6_4
  vec_t v11; // xmm14_4
  float v12; // xmm8_4
  float v13; // xmm10_4
  vec_t v14; // xmm13_4
  bool result; // al
  Vector vNewNWCorner; // [rsp+0h] [rbp-20h] BYREF
  Vector vNewSECorner; // [rsp+10h] [rbp-10h] BYREF

  v2 = 0;
  x = this->m_vVerts[0].x;
  v4 = rPolyOther->m_vVerts[0].x;
  y = this->m_vVerts[0].y;
  z = this->m_vVerts[0].z;
  v7 = this->m_vVerts[2].x;
  v8 = this->m_vVerts[2].y;
  v9 = this->m_vVerts[2].z;
  v10 = rPolyOther->m_vVerts[0].y;
  v11 = rPolyOther->m_vVerts[0].z;
  v12 = rPolyOther->m_vVerts[2].x;
  v13 = rPolyOther->m_vVerts[2].y;
  v14 = rPolyOther->m_vVerts[2].z;
  if ( fabs(x - v4) < 1.0 )
    v2 = fabs(v7 - v12) < 1.0;
  if ( fabs(y - v10) < 1.0 && fabs(v8 - v13) < 1.0 || (result = 0, v2) )
  {
    vNewNWCorner.x = this->m_vVerts[0].x;
    vNewNWCorner.y = y;
    vNewNWCorner.z = z;
    vNewSECorner.x = v7;
    vNewSECorner.y = v8;
    vNewSECorner.z = v9;
    if ( x > v4 || y > v10 )
    {
      vNewNWCorner.x = v4;
      vNewNWCorner.y = v10;
      vNewNWCorner.z = v11;
    }
    if ( v12 > v7 || v13 > v8 )
    {
      vNewSECorner.x = v12;
      vNewSECorner.y = v13;
      vNewSECorner.z = v14;
    }
    CNavPoly::SetCorners(this, &vNewNWCorner, &vNewSECorner, this, rPolyOther);
    return 1;
  }
  return result;
}


// IntersectSegmentToPlane  (line 1931, @0x0000000003204c80, libserver.so)  // inlines: DistTo, Dot, DotProduct, FastSqrt, Length, VectorAdd, VectorLength, VectorMultiply, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator*, operator+, operator-, operator=
// callers: SplitConvexPolyByPlane_Old
__int64 __fastcall IntersectSegmentToPlane(
        const Vector *const vPlaneNorm,
        float flPlaneD,
        const Vector *const vP1,
        const Vector *const vP2,
        float flMinClipDist,
        Vector *vIsectOut)
{
  float x; // xmm6_4
  float y; // xmm5_4
  float v8; // xmm8_4
  float z; // xmm4_4
  float v10; // xmm7_4
  float v11; // xmm11_4
  float v12; // xmm10_4
  float v13; // xmm9_4
  float v14; // xmm2_4
  float v15; // xmm3_4
  __int64 result; // rax
  float v17; // xmm2_4

  x = vP1->x;
  y = vP1->y;
  v8 = vPlaneNorm->y;
  z = vP1->z;
  v10 = vPlaneNorm->z;
  v11 = vP2->x;
  v12 = vP2->y;
  v13 = vP2->z;
  v14 = (((vP1->x * vPlaneNorm->x) + (y * v8)) + (z * v10)) - flPlaneD;
  v15 = (((vPlaneNorm->x * vP2->x) + (v8 * v12)) + (v10 * v13)) - flPlaneD;
  if ( v14 < 0.0 )
  {
    if ( v15 >= 0.0 )
    {
      v17 = 1.0 - (v15 / (v15 - v14));
      if ( (fsqrt((((x - v11) * (x - v11)) + ((y - v12) * (y - v12))) + ((z - v13) * (z - v13))) * v17) > flMinClipDist )
        goto LABEL_6;
    }
    return 0;
  }
  result = 0;
  if ( v15 < 0.0 )
  {
    v17 = v14 / (v14 - v15);
    if ( (fsqrt((((x - v11) * (x - v11)) + ((y - v12) * (y - v12))) + ((z - v13) * (z - v13))) * v17) > flMinClipDist )
    {
LABEL_6:
      vIsectOut->x = ((v11 - x) * v17) + x;
      vIsectOut->y = ((v12 - y) * v17) + y;
      vIsectOut->z = ((v13 - z) * v17) + z;
      return 1;
    }
    return 0;
  }
  return result;
}


// SplitConvexPolyByPlane_Old  (line 1982, @0x0000000003204e30, libserver.so)  // inlines: Dot, DotProduct, operator=
// calls: IntersectSegmentToPlane
// callers: CNavPoly::SplitByPlane_Old
__int64 __fastcall SplitConvexPolyByPlane_Old(
        int nVerts,
        Vector *vVerts,
        const Vector *const vCutNorm,
        float flCutPlaneD,
        int *nVertsPolyNearOut,
        Vector *vVertsPolyNearOut,
        int *nVertsPolyFarOut,
        Vector *vVertsPolyFarOut)
{
  Vector *v9; // r14
  int v10; // r13d
  int v11; // r12d
  const Vector *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rax
  vec_t x; // xmm0_4
  Vector *v16; // rdx
  const Vector *v17; // r15
  int v19; // r10d
  int v20; // esi
  int v21; // edi
  __int64 v22; // rax
  int v23; // r13d
  const Vector *v24; // rdx
  float v25; // xmm0_4
  int v26; // ecx
  float v27; // xmm1_4
  __int64 v28; // rax
  Vector *v29; // rax
  const Vector *v30; // rdx
  __int64 v31; // rax
  Vector *v32; // rax
  __int64 v33; // r13
  __int64 v34; // rcx
  Vector *v35; // rdx
  __int64 v36; // rax
  Vector *v37; // rax
  vec_t z; // xmm0_4
  _DWORD *p_x; // rdx
  Vector *v40; // rax
  __int64 v41; // rax
  int vP2; // [rsp+28h] [rbp-B8h]
  int vP1; // [rsp+30h] [rbp-B0h]
  int vVertsb; // [rsp+48h] [rbp-98h]
  int nEdgesIntersected[4]; // [rsp+50h] [rbp-90h]
  Vector vE0; // [rsp+60h] [rbp-80h] BYREF
  Vector vE1; // [rsp+70h] [rbp-70h] BYREF
  Vector vC; // [rsp+80h] [rbp-60h] BYREF
  Vector vIntersectionPositions[2]; // [rsp+90h] [rbp-50h] BYREF

  if ( nVerts > 0 )
  {
    v9 = vVerts;
    v10 = 0;
    v11 = 0;
    while ( 1 )
    {
      vE0 = *v9;
      v12 = &vVerts[(v10 + 1) % nVerts];
      v13 = *&v12->x;
      *&v12 = v12->z;
      *&vE1.x = v13;
      LODWORD(vE1.z) = v12;
      if ( IntersectSegmentToPlane(vCutNorm, flCutPlaneD, &vE0, &vE1, 1.0, &vC) != 0 )
      {
        v14 = v11++;
        x = vC.x;
        nEdgesIntersected[v14] = v10;
        v16 = &vIntersectionPositions[v14];
        v16->x = x;
        v16->y = vC.y;
        v16->z = vC.z;
      }
      ++v9;
      if ( v11 > 1 || nVerts <= v10 + 1 )
        break;
      ++v10;
    }
    v17 = vVerts;
    if ( v11 == 2 )
    {
      v19 = 0;
      v20 = 0;
      v21 = 0;
      vP2 = 2;
      vVertsb = nEdgesIntersected[0];
      vP1 = nEdgesIntersected[1];
      while ( 2 )
      {
        v22 = v19;
        v23 = v19;
        v24 = &v17[v19];
        v25 = v24->x;
        v26 = -1;
        v27 = (((vCutNorm->x * v24->x) + (v24->y * vCutNorm->y)) + (v24->z * vCutNorm->z)) - flCutPlaneD;
        while ( 1 )
        {
          v30 = &v17[v22];
          if ( v27 < 0.0 )
          {
            v28 = v21++;
            v29 = &vVertsPolyNearOut[v28];
            v29->x = v25;
            v29->y = v30->y;
            v29->z = v30->z;
            if ( vVertsb == v23 )
              goto LABEL_18;
          }
          else
          {
            v31 = v20++;
            v32 = &vVertsPolyFarOut[v31];
            v32->x = v25;
            v32->y = v30->y;
            v32->z = v30->z;
            if ( vVertsb == v23 )
            {
LABEL_18:
              v33 = 1;
              v34 = 0;
              goto LABEL_19;
            }
          }
          if ( vP1 == v23 )
            break;
          v23 = (v23 + 1) % nVerts;
          if ( v23 == v19 )
            goto LABEL_22;
LABEL_15:
          v22 = v23;
          v25 = v17[v23].x;
        }
        v33 = 0;
        v34 = 1;
LABEL_19:
        v35 = &vIntersectionPositions[v34];
        if ( v27 >= 0.0 )
        {
          v41 = v20;
          v20 += 2;
          v37 = &vVertsPolyFarOut[v41];
        }
        else
        {
          v36 = v21;
          v21 += 2;
          v37 = &vVertsPolyNearOut[v36];
        }
        v37->x = v35->x;
        v37->y = v35->y;
        z = v35->z;
        p_x = &v37[1].x;
        v37->z = z;
        v40 = &vIntersectionPositions[v33];
        *p_x = LODWORD(v40->x);
        p_x[1] = LODWORD(v40->y);
        p_x[2] = LODWORD(v40->z);
        v23 = (nEdgesIntersected[v33] + 1) % nVerts;
        v26 = (nEdgesIntersected[v34] + 1) % nVerts;
        if ( v23 != v19 )
          goto LABEL_15;
LABEL_22:
        if ( --vP2 != 0 )
        {
          v19 = v26;
          continue;
        }
        break;
      }
      *nVertsPolyNearOut = v21;
      *nVertsPolyFarOut = v20;
      return 1;
    }
  }
  return 0;
}


// SplitConvexPolyByPlane_New  (line 2108, @0x0000000003205200, libserver.so)  // inlines: Dot, DotProduct, Lerp<Vector>, SplitType_t, VectorAdd, VectorMultiply, VectorSubtract, operator*, operator+, operator-, operator=
// callers: CNavPoly::SplitByPlane
__int64 __fastcall SplitConvexPolyByPlane_New(
        int nMaxOutputPolys,
        int nVertsIn,
        const Vector *pVertsIn,
        const Vector *const vCutNorm,
        float flCutPlaneD,
        int *nNumVertsOut,
        Vector (*vVertsOut)[4],
        CNavPoly::CSplitInfo_t *splitInfoOut)
{
  int v8; // r13d
  float x; // xmm6_4
  float y; // xmm7_4
  float z; // xmm8_4
  float v13; // xmm1_4
  float v14; // xmm12_4
  const Vector *v15; // r11
  int v16; // r10d
  int v17; // r12d
  __int64 v18; // rdx
  int v19; // ecx
  const Vector *v20; // rdx
  float v21; // xmm5_4
  float v22; // xmm4_4
  float v23; // xmm3_4
  float v24; // xmm1_4
  float v25; // xmm2_4
  float v26; // xmm14_4
  float v27; // xmm13_4
  __int64 v28; // rdx
  SplitConvexPolyByPlane_New::SplitType_t *v29; // r10
  float v30; // xmm12_4
  vec_t v31; // xmm3_4
  __int64 v33; // r11
  int v34; // r13d
  __int64 v35; // rsi
  CNavPoly::CSplitInfo_t *v36; // r10
  int nSplitVert; // eax
  Vector *v38; // rcx
  const Vector *v39; // rdx
  int v40; // eax
  const Vector *v41; // rdx
  int v42; // edx
  int v43; // ecx
  __int64 v44; // rdi
  const Vector *v45; // rax
  vec_t v46; // xmm2_4
  Vector *v47; // r14
  vec_t v48; // xmm1_4
  __int64 v49; // r15
  vec_t v50; // xmm0_4
  int *v51; // r12
  __int64 v52; // rax
  vec_t *p_x; // rcx
  __int64 v54; // rax
  char v55; // cl
  CNavPoly::CSplitInfo_t *v56; // rdx
  __int64 v57; // rax
  CNavPoly::CSplitInfo_t *v58; // rax
  Vector *v59; // rcx
  char v60; // di
  int *v61; // rcx
  int v62; // [rsp+Ch] [rbp-8Ch]
  int *p_nSplitEdge; // [rsp+10h] [rbp-88h]
  SplitConvexPolyByPlane_New::SplitType_t *nSplitVertA; // [rsp+18h] [rbp-80h]
  int nLastV; // [rsp+24h] [rbp-74h]
  int nSplitPolys[4]; // [rsp+28h] [rbp-70h]
  SplitConvexPolyByPlane_New::SplitType_t splitResults[2]; // [rsp+38h] [rbp-60h] BYREF

  v8 = 2;
  splitResults[0].nSplitVert = -1;
  splitResults[0].nSplitEdge = -1;
  splitResults[1].nSplitVert = -1;
  splitResults[1].nSplitEdge = -1;
  x = vCutNorm->x;
  y = vCutNorm->y;
  z = vCutNorm->z;
  v13 = (((pVertsIn->x * vCutNorm->x) + (pVertsIn->y * y)) + (pVertsIn->z * z)) - flCutPlaneD;
  v14 = fabs(v13);
  if ( v14 >= 2.0 )
    v8 = v13 < 0.0;
  v15 = pVertsIn;
  v16 = 0;
  v17 = 0;
  while ( v17 <= 1 && v16 < nVertsIn )
  {
    v19 = v16 + 1;
    v20 = &pVertsIn[(v16 + 1) % nVertsIn];
    v21 = v20->x;
    v22 = v20->y;
    v23 = v20->z;
    v24 = (((x * v20->x) + (y * v22)) + (z * v23)) - flCutPlaneD;
    v25 = fabs(v24);
    if ( v25 >= 2.0 )
    {
      if ( v8 == 2 )
      {
        v18 = v17;
        v8 = v24 < 0.0;
        ++v17;
        splitResults[v18].nSplitVert = v16;
      }
      else if ( (((v24 < 0.0) ^ v8) & 1) != 0 )
      {
        v26 = v15->x;
        v27 = v15->y;
        v28 = v17++;
        splitResults[v28].nSplitEdge = v16;
        v29 = &splitResults[v28];
        v30 = v14 / (v14 + v25);
        v8 = v24 < 0.0;
        v31 = ((v23 - v15->z) * v30) + v15->z;
        v29->vSplitEdgeLocation.x = ((v21 - v26) * v30) + v26;
        v29->vSplitEdgeLocation.y = ((v22 - v27) * v30) + v27;
        v29->vSplitEdgeLocation.z = v31;
      }
      else
      {
        v8 = v24 < 0.0;
      }
    }
    else
    {
      if ( v8 == 2 )
        return 1;
      v8 = 2;
    }
    ++v15;
    v16 = v19;
    v14 = v25;
  }
  if ( v17 <= 1 )
    return 1;
  v33 = 0;
  v34 = 0;
  nSplitVertA = splitResults;
  p_nSplitEdge = &splitResults[1].nSplitEdge;
  v62 = nMaxOutputPolys - 1;
  do
  {
    v35 = v34;
    nSplitPolys[v33] = v34;
    v36 = &splitInfoOut[v34];
    nSplitVert = nSplitVertA->nSplitVert;
    if ( nSplitVertA->nSplitVert == -1 )
    {
      v38 = &(*vVertsOut)[4 * v34];
      v38->x = nSplitVertA->vSplitEdgeLocation.x;
      v38->y = nSplitVertA->vSplitEdgeLocation.y;
      v38->z = nSplitVertA->vSplitEdgeLocation.z;
      v36->nVertsInSrc[0] = -1;
      nLastV = nSplitVertA->nSplitEdge;
      v40 = *(p_nSplitEdge - 1);
      if ( v40 == -1 )
      {
LABEL_29:
        LODWORD(v38[1].x) = p_nSplitEdge[1];
        LODWORD(v38[1].y) = p_nSplitEdge[2];
        LODWORD(v38[1].z) = p_nSplitEdge[3];
        v36->nVertsInSrc[1] = v40;
        v42 = (*p_nSplitEdge + 1) % nVertsIn;
        goto LABEL_20;
      }
    }
    else
    {
      v38 = &(*vVertsOut)[4 * v34];
      v39 = &pVertsIn[nSplitVert];
      v38->x = v39->x;
      v38->y = v39->y;
      v38->z = v39->z;
      v36->nVertsInSrc[0] = nSplitVert;
      LODWORD(v39) = (nSplitVert + nVertsIn - 1) % nVertsIn;
      v40 = *(p_nSplitEdge - 1);
      nLastV = v39;
      if ( v40 == -1 )
        goto LABEL_29;
    }
    v41 = &pVertsIn[v40];
    v38[1].x = v41->x;
    v38[1].y = v41->y;
    v38[1].z = v41->z;
    v36->nVertsInSrc[1] = v40;
    v42 = (v40 + 1) % nVertsIn;
LABEL_20:
    nNumVertsOut[v34] = 2;
    v43 = 2;
    while ( 1 )
    {
      v44 = 4 * v35;
      v45 = &pVertsIn[v42];
      v46 = v45->x;
      v47 = &(*vVertsOut)[4 * v35];
      v48 = v45->y;
      v49 = v35;
      v50 = v45->z;
      v51 = &nNumVertsOut[v35];
      v52 = v43;
      p_x = &v47[v43].x;
      *p_x = v46;
      p_x[1] = v48;
      p_x[2] = v50;
      v36->nVertsInSrc[v52] = v42;
      v54 = *v51;
      v43 = v54 + 1;
      *v51 = v54 + 1;
      if ( nLastV == v42 )
        break;
      if ( v54 == 3 )
      {
        if ( v62 <= v34 )
          return 1;
        v36->nInternalEdgeOtherPoly[v54] = ++v34;
        v35 = v34;
        v36->nInternalEdgeOtherPoly[*v51 + 3] = 0;
        v59 = &(*vVertsOut)[v44 + 4];
        v59->x = v47->x;
        v59->y = v47->y;
        v59->z = v47->z;
        v60 = v36->nVertsInSrc[0];
        v36 = &splitInfoOut[v34];
        v36->nVertsInSrc[0] = v60;
        v59[1].x = v46;
        v59[1].y = v48;
        v59[1].z = v50;
        v61 = &nNumVertsOut[v49 + 1];
        v36->nVertsInSrc[1] = v42;
        *v61 = 2;
        v36->nInternalEdgeOtherPoly[0] = v34 - 1;
        v36->nInternalEdgeOtherEdge[0] = nNumVertsOut[v49] - 1;
        v43 = *v61;
      }
      v42 = (v42 + 1) % nVertsIn;
    }
    ++nSplitVertA;
    ++v33;
    ++v34;
    p_nSplitEdge -= 5;
  }
  while ( v33 != 2 );
  v55 = nSplitPolys[0];
  v56 = &splitInfoOut[nSplitPolys[0]];
  v57 = nSplitPolys[1];
  v56->nInternalEdgeOtherPoly[0] = nSplitPolys[1];
  v58 = &splitInfoOut[v57];
  v58->nInternalEdgeOtherPoly[0] = v55;
  v56->nInternalEdgeOtherEdge[0] = 0;
  v58->nInternalEdgeOtherEdge[0] = 0;
  return v34;
}


// CNavPoly::SplitByPlane_Old  (line 2280, @0x00000000032064e0, libserver.so)
// calls: SplitConvexPolyByPlane_Old, std::function<CNavPoly*()>::operator(), Warning, CNavPoly::SetCorners
// callers: CNavArea::SplitArea_Old
// strings: "Split created a polygon with more than %d verts"
__int64 __fastcall CNavPoly::SplitByPlane_Old(
        CNavPoly *const this,
        const Vector *const vCutNorm,
        float flCutPlaneD,
        FuncPolyFactory_t *const funcPolyFactory,
        CNavPoly **ppPolyNearOut,
        CNavPoly **ppPolyFarOut)
{
  CNavPoly *v10; // rax
  int nVertsPolyNear; // [rsp+18h] [rbp-B8h] BYREF
  int nVertsPolyFar; // [rsp+1Ch] [rbp-B4h] BYREF
  Vector vVertsPolyNear[5]; // [rsp+20h] [rbp-B0h] BYREF
  Vector vVertsPolyFar[5]; // [rsp+60h] [rbp-70h] BYREF

  if ( SplitConvexPolyByPlane_Old(
         this->m_nVerts,
         this->m_vVerts,
         vCutNorm,
         flCutPlaneD,
         &nVertsPolyNear,
         vVertsPolyNear,
         &nVertsPolyFar,
         vVertsPolyFar) == 0 )
    return 0;
  *ppPolyNearOut = std::function<CNavPoly * ()(void)>::operator()(funcPolyFactory);
  v10 = std::function<CNavPoly * ()(void)>::operator()(funcPolyFactory);
  *ppPolyFarOut = v10;
  if ( *ppPolyNearOut == 0 || v10 == 0 )
    return 0;
  if ( nVertsPolyNear > 4 || nVertsPolyFar > 4 )
  {
    Warning("Split created a polygon with more than %d verts", 4);
    return 0;
  }
  CNavPoly::SetCorners(*ppPolyNearOut, vVertsPolyNear, &vVertsPolyNear[2]);
  CNavPoly::SetCorners(*ppPolyFarOut, vVertsPolyFar, &vVertsPolyFar[2]);
  return 1;
}


// CNavPoly::DumpSplitInfo  (line 2326, @0x0000000003206760, libserver.so)  // inlines: DrawText, GetVert
// calls: Msg, V_sprintf_safe<256ul>, __stack_chk_fail
// strings: "DumpSplitInfo - v %d = %0.2f, %0.2f, %0.2f\n", "(src %d)", "DumpSplitInfo - poly %d, v %d, src %d, { %0.2f, %0.2f, %0.2f }\n", "(p %d, v %d, s %d)", "DumpSplitInfo - poly %d, edge %d, nInternalEdgeOtherPoly %d, nInternalEdgeOtherEdge %d\n"
void __fastcall CNavPoly::DumpSplitInfo(
        CNavPoly *const this,
        int nNumPolys,
        CNavPoly **pPolys,
        CNavPoly::CSplitInfo_t *splitInfo)
{
  int v5; // ebx
  Vector *m_vVerts; // r15
  vec_t z; // xmm0_4
  vec_t x; // xmm2_4
  __int64 v9; // r14
  CNavPoly *v10; // rax
  CNavPoly::CSplitInfo_t *v11; // rbx
  int v12; // r13d
  float *v13; // r12
  float v14; // xmm1_4
  float v15; // xmm0_4
  CNavPoly **v16; // r15
  int v17; // r13d
  CNavPoly::CSplitInfo_t *v18; // r14
  CNavPoly::CSplitInfo_t *v19; // r12
  int v20; // ebx
  int v21; // ecx
  int v22; // edx
  int v23; // r8d
  int v26; // [rsp+2Ch] [rbp-184h]
  CNavPoly::CSplitInfo_t *v28; // [rsp+48h] [rbp-168h]
  unsigned int nSrcV; // [rsp+54h] [rbp-15Ch]
  vec_t v30; // [rsp+60h] [rbp-150h] BYREF
  vec_t y; // [rsp+64h] [rbp-14Ch]
  vec_t v32; // [rsp+68h] [rbp-148h]
  char textMsg[256]; // [rsp+70h] [rbp-140h] BYREF
  unsigned __int64 v34; // [rsp+178h] [rbp-38h]

  v34 = __readfsqword(0x28u);
  if ( this->m_nVerts > 0 )
  {
    v5 = 0;
    m_vVerts = this->m_vVerts;
    do
    {
      Msg("DumpSplitInfo - v %d = %0.2f, %0.2f, %0.2f\n", v5, m_vVerts->x, m_vVerts->y, m_vVerts->z);
      V_sprintf_safe<256ul>(textMsg, "(src %d)", v5);
      z = m_vVerts->z;
      x = m_vVerts->x;
      y = m_vVerts->y;
      v32 = z;
      v30 = x;
      if ( INavDraw::ms_pInst != 0 )
        (*(INavDraw::ms_pInst->_vptr_INavDraw + 3))(
          INavDraw::ms_pInst,
          &v30,
          0,
          255,
          255,
          255,
          10000.0,
          10.0,
          255,
          textMsg);
      ++v5;
      ++m_vVerts;
    }
    while ( this->m_nVerts > v5 );
  }
  v9 = 0;
  v28 = splitInfo;
  if ( nNumPolys > 0 )
  {
    do
    {
      v10 = pPolys[v9];
      if ( v10->m_nVerts <= 0 )
      {
        v26 = v9 + 1;
      }
      else
      {
        v26 = v9 + 1;
        v11 = v28;
        do
        {
          v12 = v11;
          nSrcV = v11->nVertsInSrc[0];
          v13 = (v10 + 12 * (v11 - v28));
          Msg(
            "DumpSplitInfo - poly %d, v %d, src %d, { %0.2f, %0.2f, %0.2f }\n",
            (v11 - v28),
            v9,
            nSrcV,
            v13[2],
            v13[3],
            v13[4]);
          V_sprintf_safe<256ul>(textMsg, "(p %d, v %d, s %d)", v9, v11 - v28, nSrcV);
          v14 = v13[3];
          v15 = v13[4];
          v30 = v13[2];
          y = v14;
          v32 = v15;
          if ( INavDraw::ms_pInst != 0 )
            (*(INavDraw::ms_pInst->_vptr_INavDraw + 3))(
              INavDraw::ms_pInst,
              &v30,
              v26,
              255,
              255,
              255,
              10000.0,
              10.0,
              255,
              textMsg);
          v11 = (v11 + 1);
          v10 = pPolys[v9];
        }
        while ( v10->m_nVerts > 1 - v28 + v12 );
      }
      ++v9;
      ++v28;
    }
    while ( nNumPolys > v26 );
    v16 = pPolys;
    v17 = 0;
    v18 = splitInfo;
    do
    {
      if ( (*v16)->m_nVerts > 0 )
      {
        v19 = v18;
        v20 = 0;
        do
        {
          v21 = v19->nInternalEdgeOtherPoly[0];
          v22 = v20;
          v23 = v19->nInternalEdgeOtherEdge[0];
          ++v20;
          v19 = (v19 + 1);
          Msg(
            "DumpSplitInfo - poly %d, edge %d, nInternalEdgeOtherPoly %d, nInternalEdgeOtherEdge %d\n",
            v17,
            v22,
            v21,
            v23);
        }
        while ( (*v16)->m_nVerts > v20 );
      }
      ++v17;
      ++v16;
      ++v18;
    }
    while ( v17 != nNumPolys );
  }
}


// ShiftVertsAndInfoForAAQUadMode  (line 2362, @0x0000000003205700, libserver.so)  // inlines: CSplitInfo_t, Dot, DotProduct, memcpy, memset, operator=
// callers: CNavPoly::SplitByPlane
void __fastcall ShiftVertsAndInfoForAAQUadMode(
        const CNavPoly *const rOrigPoly,
        int nPolys,
        int *nVerts,
        Vector (*vVertsInOut)[4],
        CNavPoly::CSplitInfo_t *splitInfoInOut)
{
  CNavPoly::CSplitInfo_t *v5; // rax
  Vector *v6; // r11
  __int64 v7; // r9
  __int64 v8; // rdi
  __int64 v9; // rax
  int v10; // edx
  float v11; // xmm2_4
  float *p_x; // rax
  float v13; // xmm0_4
  CNavPoly::CSplitInfo_t *v14; // r12
  __int64 v15; // r11
  int v16; // ebx
  CNavPoly::CSplitInfo_t *v17; // rdx
  int i; // r9d
  char *v19; // rdi
  int v20; // eax
  __int64 v21; // rdi
  __int64 v22; // rbx
  Vector *v23; // rdx
  int v24; // r8d
  int v25; // r9d
  int v26; // eax
  Vector *v27; // rax
  int nNWVerts[4]; // [rsp+0h] [rbp-80h]
  CNavPoly::CSplitInfo_t splitInfoTemp[3]; // [rsp+10h] [rbp-70h] BYREF
  int v30; // [rsp+34h] [rbp-4Ch] BYREF
  Vector vTemp[4]; // [rsp+40h] [rbp-40h] BYREF
  _DWORD v32[4]; // [rsp+70h] [rbp-10h] BYREF

  v5 = splitInfoTemp;
  do
  {
    *v5->nVertsInSrc = -1;
    ++v5;
    *v5[-1].nInternalEdgeOtherEdge = -1;
  }
  while ( v5 != &v30 );
  if ( nPolys > 0 )
  {
    v6 = vVertsInOut;
    v7 = 0;
    v8 = 0;
    do
    {
      v9 = *splitInfoInOut[v7].nVertsInSrc;
      nNWVerts[v8] = -1;
      v10 = 0;
      v11 = -9999999.0;
      *splitInfoTemp[v7].nVertsInSrc = v9;
      *splitInfoTemp[v7].nInternalEdgeOtherEdge = *splitInfoInOut[v7].nInternalEdgeOtherEdge;
      p_x = &v6->x;
      do
      {
        v13 = (-*p_x - p_x[1]) + (p_x[2] * 0.0);
        if ( v13 > v11 )
        {
          nNWVerts[v8] = v10;
          v11 = v13;
        }
        ++v10;
        p_x += 3;
      }
      while ( v10 != 4 );
      ++v8;
      ++v7;
      v6 += 4;
    }
    while ( nPolys > v8 );
    v14 = splitInfoInOut;
    v15 = 0;
    do
    {
      v16 = nNWVerts[v15];
      v17 = v14;
      for ( i = 0; i != 4; ++i )
      {
        v19 = &v32[3 * v15] + (i + v16) % 4;
        v17->nVertsInSrc[0] = *(v19 - 96);
        v20 = *(v19 - 88);
        v17->nInternalEdgeOtherEdge[0] = *(v19 - 88);
        v21 = *(v19 - 92);
        v17->nInternalEdgeOtherPoly[0] = v21;
        if ( v20 != -1 )
          v17->nInternalEdgeOtherEdge[0] = (v20 + 4 - nNWVerts[v21]) % 4;
        v17 = (v17 + 1);
      }
      ++v15;
      ++v14;
    }
    while ( nPolys > v15 );
    v22 = 0;
    do
    {
      v23 = vVertsInOut;
      v24 = 0;
      v25 = nNWVerts[v22];
      *&vTemp[0].x = *&(*vVertsInOut)[0].x;
      *&vTemp[0].z = *&(*vVertsInOut)[0].z;
      *&vTemp[1].y = *&(*vVertsInOut)[1].y;
      *&vTemp[2].x = *&(*vVertsInOut)[2].x;
      *&vTemp[2].z = *&(*vVertsInOut)[2].z;
      *&vTemp[3].y = *&(*vVertsInOut)[3].y;
      do
      {
        v26 = v24 + v25;
        ++v24;
        ++v23;
        v27 = &vTemp[v26 % 4];
        v23[-1].x = v27->x;
        v23[-1].y = v27->y;
        v23[-1].z = v27->z;
      }
      while ( v24 != 4 );
      ++v22;
      ++vVertsInOut;
    }
    while ( nPolys > v22 );
  }
}


// CNavPoly::SplitByPlane  (line 2435, @0x00000000032065d0, libserver.so)  // inlines: SetCorners, operator=
// calls: SplitConvexPolyByPlane_New, std::function<CNavPoly*()>::operator(), CNavPoly::SetCorners, ShiftVertsAndInfoForAAQUadMode
// callers: CNavArea::SplitArea
__int64 __fastcall CNavPoly::SplitByPlane(
        CNavPoly *const this,
        const Vector *const vCutNorm,
        float flCutPlaneD,
        FuncPolyFactory_t *const funcPolyFactory,
        CNavPoly **pNewPolysOut,
        CNavPoly::CSplitInfo_t *splitInfoOut,
        bool bAAQuadMode)
{
  __int64 result; // rax
  int v10; // ebx
  Vector *v11; // r15
  __int64 v12; // r13
  CNavPoly *v13; // rax
  bool v14; // zf
  void (__fastcall **vptr_CNavPoly)(CNavPoly *); // rdx
  int nVerts[4]; // [rsp+20h] [rbp-D0h] BYREF
  Vector vVerts[4][4]; // [rsp+30h] [rbp-C0h] BYREF

  LODWORD(result) = SplitConvexPolyByPlane_New(
                      3,
                      this->m_nVerts,
                      this->m_vVerts,
                      vCutNorm,
                      flCutPlaneD,
                      nVerts,
                      vVerts,
                      splitInfoOut);
  v10 = result;
  if ( result > 3 || result == 1 )
    return 1;
  if ( bAAQuadMode )
  {
    ShiftVertsAndInfoForAAQUadMode(this, result, nVerts, vVerts, splitInfoOut);
    result = v10;
    if ( v10 <= 0 )
      return result;
  }
  else
  {
    result = result;
    if ( result <= 0 )
      return result;
  }
  v11 = vVerts[0];
  v12 = 0;
  do
  {
    v13 = std::function<CNavPoly * ()(void)>::operator()(funcPolyFactory);
    v14 = nVerts[v12] == 4;
    pNewPolysOut[v12] = v13;
    if ( v14 )
    {
      CNavPoly::SetCorners(v13, v11, v11 + 1, v11 + 2, v11 + 3);
    }
    else
    {
      v13->m_nVerts = 3;
      vptr_CNavPoly = v13->_vptr_CNavPoly;
      v13->m_vVerts[0].x = v11->x;
      v13->m_vVerts[0].y = v11->y;
      v13->m_vVerts[0].z = v11->z;
      v13->m_vVerts[1].x = v11[1].x;
      v13->m_vVerts[1].y = v11[1].y;
      v13->m_vVerts[1].z = v11[1].z;
      v13->m_vVerts[2].x = v11[2].x;
      v13->m_vVerts[2].y = v11[2].y;
      v13->m_vVerts[2].z = v11[2].z;
      (*vptr_CNavPoly)(v13);
    }
    ++v12;
    v11 += 4;
  }
  while ( v10 > v12 );
  return v10;
}


// CNavPoly::SpliceWithPoly  (line 2476, @0x00000000032058e0, libserver.so)  // inlines: FixupZ, GetVert, GetZ, Max<float>, Min<float>
// calls: CNavPoly::GetZ, CNavPoly::SetCorners
// callers: CNavArea::SpliceEdit
bool __fastcall CNavPoly::SpliceWithPoly(
        CNavPoly *const this,
        CNavPoly *const rPolyOther,
        CNavPoly *const rPolyNew,
        int *pEdgeThisToSpliceOut,
        int *pEdgeSpliceToThisOut,
        int *pEdgeSpliceToOtherOut,
        int *pEdgeOtherToSpliceOut)
{
  bool result; // al
  float x; // xmm3_4
  float v14; // xmm2_4
  float y; // xmm5_4
  float v16; // xmm7_4
  float v17; // xmm9_4
  float v18; // xmm6_4
  float v19; // xmm8_4
  float v20; // xmm4_4
  float v21; // xmm2_4
  float v22; // xmm2_4
  float v23; // xmm2_4
  float v24; // xmm2_4
  float v25; // xmm2_4
  float v26; // xmm2_4
  float v27; // xmm2_4
  float v28; // xmm2_4
  float v29; // xmm2_4
  float v30; // xmm2_4
  float v31; // xmm2_4
  float v32; // xmm2_4
  float pEdgeSpliceToOtherOutc; // [rsp+8h] [rbp-88h]
  vec_t vOtherOrigNWa; // [rsp+10h] [rbp-80h]
  vec_t vOtherOrigNWb; // [rsp+10h] [rbp-80h]
  vec_t vOtherOrigNWc; // [rsp+10h] [rbp-80h]
  Vector vNW; // [rsp+1Ch] [rbp-74h] BYREF
  float v42; // [rsp+28h] [rbp-68h]
  Vector vNE; // [rsp+30h] [rbp-60h] BYREF
  Vector vSE; // [rsp+40h] [rbp-50h] BYREF
  Vector vSW; // [rsp+50h] [rbp-40h] BYREF

  result = pEdgeThisToSpliceOut == 0 || pEdgeSpliceToThisOut == 0;
  if ( result )
    return 0;
  if ( pEdgeOtherToSpliceOut != 0 && pEdgeSpliceToOtherOut != 0 )
  {
    x = this->m_vVerts[0].x;
    v14 = rPolyOther->m_vVerts[2].x;
    y = this->m_vVerts[0].y;
    v16 = this->m_vVerts[2].x;
    v17 = this->m_vVerts[2].y;
    v18 = rPolyOther->m_vVerts[0].x;
    v19 = rPolyOther->m_vVerts[0].y;
    v20 = rPolyOther->m_vVerts[2].y;
    if ( x > v14 )
    {
      vNW.y = rPolyOther->m_vVerts[2].x;
      vNW.z = fmaxf(y, v19);
      vOtherOrigNWb = x;
      vNW.x = fminf(v17, v20);
      v42 = CNavPoly::GetZ(rPolyOther, vNW.y, vNW.z, v14);
      vSE.x = vOtherOrigNWb;
      vSE.y = vNW.x;
      vSE.z = CNavPoly::GetZ(this, vOtherOrigNWb, vNW.x, v24);
      vNE.y = vNW.z;
      vNE.x = vOtherOrigNWb;
      vNE.z = CNavPoly::GetZ(this, vOtherOrigNWb, vNW.z, v25);
      vSW.y = vNW.x;
      vSW.x = vNW.y;
      vSW.z = CNavPoly::GetZ(rPolyOther, vNW.y, vNW.x, v26);
      CNavPoly::SetCorners(rPolyNew, &vNW.y, &vNE, &vSE, &vSW);
      *pEdgeThisToSpliceOut = 3;
      *pEdgeSpliceToThisOut = 1;
      *pEdgeSpliceToOtherOut = 3;
      *pEdgeOtherToSpliceOut = 1;
      return 1;
    }
    else if ( v18 <= v16 )
    {
      if ( y > v20 )
      {
        vNW.z = rPolyOther->m_vVerts[2].y;
        vNW.y = fmaxf(x, v18);
        vOtherOrigNWc = y;
        vNW.x = fminf(v16, v14);
        v42 = CNavPoly::GetZ(rPolyOther, vNW.y, vNW.z, v14);
        vSE.x = vNW.x;
        vSE.y = vOtherOrigNWc;
        vSE.z = CNavPoly::GetZ(this, vNW.x, vOtherOrigNWc, v30);
        vNE.y = vNW.z;
        vNE.x = vNW.x;
        vNE.z = CNavPoly::GetZ(rPolyOther, vNW.x, vNW.z, v31);
        vSW.y = vOtherOrigNWc;
        vSW.x = vNW.y;
        vSW.z = CNavPoly::GetZ(this, vNW.y, vOtherOrigNWc, v32);
        CNavPoly::SetCorners(rPolyNew, &vNW.y, &vNE, &vSE, &vSW);
        *pEdgeThisToSpliceOut = 0;
        *pEdgeSpliceToThisOut = 2;
        *pEdgeSpliceToOtherOut = 0;
        *pEdgeOtherToSpliceOut = 2;
        return 1;
      }
      else if ( v19 > v17 )
      {
        vNW.z = this->m_vVerts[2].y;
        vNW.y = fmaxf(x, v18);
        pEdgeSpliceToOtherOutc = fminf(v16, v14);
        v42 = CNavPoly::GetZ(this, vNW.y, v17, v14);
        vSE.x = pEdgeSpliceToOtherOutc;
        vSE.y = v19;
        vSE.z = CNavPoly::GetZ(rPolyOther, pEdgeSpliceToOtherOutc, v19, v27);
        vNE.y = v17;
        vNE.x = pEdgeSpliceToOtherOutc;
        vNE.z = CNavPoly::GetZ(this, pEdgeSpliceToOtherOutc, v17, v28);
        vSW.y = v19;
        vSW.x = vNW.y;
        vSW.z = CNavPoly::GetZ(rPolyOther, vNW.y, v19, v29);
        CNavPoly::SetCorners(rPolyNew, &vNW.y, &vNE, &vSE, &vSW);
        *pEdgeThisToSpliceOut = 2;
        *pEdgeSpliceToThisOut = 0;
        *pEdgeSpliceToOtherOut = 2;
        *pEdgeOtherToSpliceOut = 0;
        return 1;
      }
    }
    else
    {
      vNW.y = this->m_vVerts[2].x;
      vOtherOrigNWa = v18;
      vNW.z = fmaxf(y, v19);
      vNW.x = fminf(v17, v20);
      v42 = CNavPoly::GetZ(this, vNW.y, vNW.z, v14);
      vSE.x = vOtherOrigNWa;
      vSE.y = vNW.x;
      vSE.z = CNavPoly::GetZ(rPolyOther, vOtherOrigNWa, vNW.x, v21);
      vNE.y = vNW.z;
      vNE.x = vOtherOrigNWa;
      vNE.z = CNavPoly::GetZ(rPolyOther, vOtherOrigNWa, vNW.z, v22);
      vSW.y = vNW.x;
      vSW.x = vNW.y;
      vSW.z = CNavPoly::GetZ(this, vNW.y, vNW.x, v23);
      CNavPoly::SetCorners(rPolyNew, &vNW.y, &vNE, &vSE, &vSW);
      *pEdgeThisToSpliceOut = 1;
      *pEdgeSpliceToThisOut = 3;
      *pEdgeSpliceToOtherOut = 1;
      *pEdgeOtherToSpliceOut = 3;
      return 1;
    }
  }
  return result;
}


// CNavPoly::RaiseVert  (line 2620, @0x0000000003205d70, libserver.so)
// callers: CNavMesh::RaiseVert
void __fastcall CNavPoly::RaiseVert(CNavPoly *const this, int nVert, float a3, float flDeltaZ)
{
  float *v5; // rax
  float v6; // xmm0_4
  int i; // ebx

  if ( nVert < 0 )
  {
    for ( i = 0; this->m_nVerts > i; ++i )
      CNavPoly::RaiseVert(this, i, flDeltaZ);
  }
  else if ( nVert < this->m_nVerts )
  {
    v5 = (this + 12 * nVert);
    v6 = a3 + v5[4];
    v5[4] = v6;
    (*this->_vptr_CNavPoly)(this, v6, flDeltaZ);
  }
}


// CNavPoly::GetHullSupportRadius  (line 2638, @0x0000000003205e10, libserver.so)
float __fastcall CNavPoly::GetHullSupportRadius(const CNavPoly *const this)
{
  return this->m_rNavMesh->m_NavGenParams.m_flAgentRadius[this->m_nGenIndex];
}


// CNavPoly::GetVertWithHullMargin  (line 2646, @0x0000000003205e30, libserver.so)  // inlines: GetHullSupportRadius, GetVert, VectorAdd, VectorMultiply, operator*, operator+
// callers: CNavDrawArea::DrawPolyOutlineWithHullMargin_Internal, CNavPoly::GetClosestPointOnPolyWithHullClearance
__m128i __fastcall CNavPoly::GetVertWithHullMargin(const CNavPoly *const this, int nVert, float a3, float flHullRadius)
{
  float *v4; // rdx
  float v5; // xmm5_4
  float v6; // xmm2_4
  float v7; // xmm0_4
  float v8; // xmm2_4
  __int64 v10; // [rsp+0h] [rbp-8h] BYREF

  v4 = (this + 12 * nVert);
  v5 = v4[2];
  if ( a3 < 0.0 )
    v6 = 0.0;
  else
    v6 = this->m_rNavMesh->m_NavGenParams.m_flAgentRadius[this->m_nGenIndex] - a3;
  v7 = (this->m_vBoundaryVerts[nVert].y * v6) + v4[3];
  v8 = v6 * this->m_vBoundaryVerts[nVert].x;
  *(&v10 - 3) = v7;
  *(&v10 - 4) = v8 + v5;
  return _mm_loadl_epi64(&v10 - 1);
}


// CNavOrientedPortal::GetCenter  (line 2665, @0x0000000003205fd0, libserver.so)  // inlines: VectorAdd, VectorMultiply, operator*, operator+
// callers: CNavDrawArea::DrawAreaConnection, JumpConnector::TryToConnect, CPath::ComputePathDetails, CNavGenerator::StichAndRemoveJumpAreas, IsValidJumpDownConnection, CNavMesh::GetNavMeshConnectionsAsDebugGeometry
Vector __fastcall CNavOrientedPortal::GetCenter(const CNavOrientedPortal *const this)
{
  float v1; // xmm2_4
  float v2; // xmm3_4
  float v5[4]; // [rsp+0h] [rbp-10h]
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  v1 = (this->m_vLeft.x + this->m_vRight.x) * 0.5;
  v2 = this->m_vLeft.z + this->m_vRight.z;
  v5[1] = (this->m_vLeft.y + this->m_vRight.y) * 0.5;
  result.z = 0.5 * v2;
  v5[0] = v1;
  *&result.x = *v5;
  return result;
}


// CNavOrientedPortal::ExpandPortal  (line 2672, @0x0000000003206020, libserver.so)  // inlines: Lerp<Vector>, Max<float>, Min<float>, VectorAdd, VectorMultiply, VectorSubtract, operator*, operator+, operator-, operator=
// callers: CNavArea::IsLineToPointWithinPortal
void __fastcall CNavOrientedPortal::ExpandPortal(
        CNavOrientedPortal *const this,
        float a2,
        float flExpandLeft,
        float flExpandRight)
{
  float m_flWidth; // xmm2_4
  float x; // xmm6_4
  float v6; // xmm0_4
  float y; // xmm9_4
  float z; // xmm8_4
  float v9; // xmm1_4
  float v10; // xmm10_4
  float v11; // xmm3_4
  float v12; // xmm0_4
  float v13; // xmm1_4
  float v14; // xmm3_4
  vec_t v15; // xmm5_4
  vec_t v16; // xmm4_4
  vec_t v17; // xmm3_4

  m_flWidth = this->m_flWidth;
  x = this->m_vRight.x;
  v6 = fminf(-a2, m_flWidth);
  y = this->m_vRight.y;
  z = this->m_vRight.z;
  v9 = fmaxf(flExpandLeft + m_flWidth, -m_flWidth);
  v10 = this->m_vLeft.z;
  v11 = (v6 + v9) * 0.5;
  v12 = fminf(v6, v11);
  v13 = fmaxf(v9, v11);
  v14 = this->m_vLeft.y;
  v15 = ((x - this->m_vLeft.x) * (v12 / m_flWidth)) + this->m_vLeft.x;
  this->m_vLeft.x = v15;
  v16 = ((y - v14) * (v12 / m_flWidth)) + v14;
  this->m_vLeft.y = v16;
  v17 = ((z - v10) * (v12 / m_flWidth)) + v10;
  this->m_vLeft.z = v17;
  this->m_flWidth = ((v13 - v12) * m_flWidth) + m_flWidth;
  this->m_vRight.x = ((x - v15) * (v13 / m_flWidth)) + v15;
  this->m_vRight.y = ((y - v16) * (v13 / m_flWidth)) + v16;
  this->m_vRight.z = ((z - v17) * (v13 / m_flWidth)) + v17;
}


// CNavOrientedPortal::CalcClosestPoint  (line 2689, @0x0000000003206120, libserver.so)  // inlines: Clamp<float>, Lerp<Vector>, Min<float>, VectorAdd, VectorMultiply, VectorSubtract, operator*, operator+, operator-
// calls: CalcClosestPointOnLineSegment
__m128i __fastcall CNavOrientedPortal::CalcClosestPoint(
        const CNavOrientedPortal *const this,
        const Vector *const vTestPos,
        float a3,
        float flMargin)
{
  float v5; // xmm0_4
  float v6; // xmm3_4
  float v7; // xmm1_4
  float v8; // xmm3_4
  float v9; // xmm2_4
  float flClosestT; // [rsp+2Ch] [rbp-34h] BYREF
  Vector vClosestPoint; // [rsp+30h] [rbp-30h] BYREF
  __m128i v14; // [rsp+40h] [rbp-20h] BYREF

  CalcClosestPointOnLineSegment(vTestPos, &this->m_vLeft, &this->m_vRight, &vClosestPoint, &flClosestT);
  v5 = a3 / this->m_flWidth;
  if ( v5 > 0.5 )
  {
    v7 = 0.5;
    v6 = flClosestT;
    v5 = 0.5;
    if ( flClosestT >= 0.5 )
      goto LABEL_3;
LABEL_6:
    v8 = v5;
    goto LABEL_4;
  }
  v6 = flClosestT;
  v7 = 1.0 - v5;
  if ( v5 > flClosestT )
    goto LABEL_6;
LABEL_3:
  v8 = fminf(v7, v6);
LABEL_4:
  v9 = ((this->m_vRight.x - this->m_vLeft.x) * v8) + this->m_vLeft.x;
  *&v14.m128i_i32[1] = ((this->m_vRight.y - this->m_vLeft.y) * v8) + this->m_vLeft.y;
  *v14.m128i_i32 = v9;
  return _mm_loadl_epi64(&v14);
}


// CNavOrientedPortal::CalcClosestPointToRay  (line 2722, @0x00000000032061f0, libserver.so)  // inlines: Clamp<float>, Init, Ray2D_t, Vector2D
// calls: IntersectRayWithRay, CalcClosestPointOnLineSegment
// callers: CNavShortestPathCost::CalcCostFloorAreas
void __fastcall CNavOrientedPortal::CalcClosestPointToRay(
        const CNavOrientedPortal *const this,
        const Vector *const vRayStart,
        const Vector *const vRayEnd,
        Vector *pPosOut)
{
  float y; // xmm0_4
  float x; // xmm2_4
  float v10; // xmm1_4
  vec_t v11; // xmm1_4
  float v12; // xmm2_4
  float v13; // xmm0_4
  vec_t v14; // xmm0_4
  float v15; // xmm1_4
  float v16; // xmm0_4
  vec_t v17; // xmm2_4
  vec_t v18; // xmm1_4
  float t0; // [rsp+8h] [rbp-48h] BYREF
  float t1; // [rsp+Ch] [rbp-44h] BYREF
  Ray2D_t ray; // [rsp+10h] [rbp-40h] BYREF
  Ray2D_t portalRay; // [rsp+20h] [rbp-30h] BYREF

  if ( pPosOut != 0 )
  {
    y = vRayEnd->y;
    x = vRayStart->x;
    ray.m_start.y = vRayStart->y;
    v10 = vRayEnd->x;
    ray.m_start.x = x;
    v11 = v10 - x;
    v12 = this->m_vLeft.x;
    ray.m_delta.y = y - ray.m_start.y;
    v13 = this->m_vRight.y;
    portalRay.m_start.x = v12;
    ray.m_delta.x = v11;
    v14 = v13 - this->m_vLeft.y;
    portalRay.m_start.y = this->m_vLeft.y;
    v15 = this->m_vRight.x;
    portalRay.m_delta.y = v14;
    portalRay.m_delta.x = v15 - v12;
    if ( IntersectRayWithRay(&ray, &portalRay, &t0, &t1) )
    {
      v16 = 0.0;
      if ( t0 < 0.0 )
      {
        CalcClosestPointOnLineSegment(vRayStart, &this->m_vLeft, &this->m_vRight, pPosOut, 0);
      }
      else
      {
        if ( t1 >= 0.0 )
          v16 = fminf(1.0, t1);
        v17 = (portalRay.m_delta.y * v16) + this->m_vLeft.y;
        v18 = (v16 * portalRay.m_delta.x) + this->m_vLeft.x;
        pPosOut->z = ((this->m_vRight.z - this->m_vLeft.z) * v16) + this->m_vLeft.z;
        pPosOut->y = v17;
        pPosOut->x = v18;
      }
    }
    else
    {
      CalcClosestPointOnLineSegment(vRayEnd, &this->m_vLeft, &this->m_vRight, pPosOut, 0);
    }
  }
}


// CNavOrientedPortal::CalcClosestPointWithWindowedOffset  (line 2758, @0x0000000003206350, libserver.so)  // inlines: Lerp<Vector>, Lerp<float>, Max<float>, Min<float>, VectorAdd, VectorMultiply, VectorSubtract, operator*, operator+, operator-
// calls: CalcClosestPointOnLineSegment
__m128i __fastcall CNavOrientedPortal::CalcClosestPointWithWindowedOffset(
        const CNavOrientedPortal *const this,
        const Vector *const vTestPos,
        float a3,
        float flOffset,
        float flOffsetWindowHalfWidth,
        float flMargin)
{
  float m_flWidth; // xmm3_4
  float v8; // xmm2_4
  float v9; // xmm6_4
  float v10; // xmm3_4
  float v11; // xmm2_4
  float v12; // xmm0_4
  __int32 v13; // xmm2_4
  float flClosestT; // [rsp+2Ch] [rbp-34h] BYREF
  Vector vClosestPoint; // [rsp+30h] [rbp-30h] BYREF
  __m128i v20; // [rsp+40h] [rbp-20h] BYREF

  CalcClosestPointOnLineSegment(vTestPos, &this->m_vLeft, &this->m_vRight, &vClosestPoint, &flClosestT);
  m_flWidth = this->m_flWidth;
  v8 = flOffsetWindowHalfWidth / m_flWidth;
  v9 = flOffset / m_flWidth;
  if ( (flOffsetWindowHalfWidth / m_flWidth) > 0.5 )
  {
    v10 = 0.5;
    v8 = 0.5;
  }
  else
  {
    v10 = 1.0 - v8;
  }
  v11 = fmaxf(v8, flClosestT - v9);
  v12 = (((a3 / flOffset) + 0.5) * (fminf(v10, flClosestT + v9) - v11)) + v11;
  *&v13 = ((this->m_vRight.y - this->m_vLeft.y) * v12) + this->m_vLeft.y;
  *v20.m128i_i32 = ((this->m_vRight.x - this->m_vLeft.x) * v12) + this->m_vLeft.x;
  v20.m128i_i32[1] = v13;
  return _mm_loadl_epi64(&v20);
}


// CNavOrientedPortal::TestLineToPortalXY  (line 2805, @0x0000000003206460, libserver.so)
// calls: CalcDistanceToLine2D
// callers: CNavArea::IsLineToPointWithinPortal
bool __fastcall CNavOrientedPortal::TestLineToPortalXY(
        const CNavOrientedPortal *const this,
        const Vector2D *vA,
        const Vector2D *vB,
        float flMargin)
{
  float v7; // xmm0_4
  float m_flWidth; // xmm3_4
  float flDL; // [rsp+Ch] [rbp-24h]

  flDL = CalcDistanceToLine2D(this, vA, vB, 0);
  v7 = CalcDistanceToLine2D(&this->m_vRight, vA, vB, 0);
  return flDL > flMargin && (m_flWidth = this->m_flWidth) > flDL && v7 > flMargin && m_flWidth > v7;
}


