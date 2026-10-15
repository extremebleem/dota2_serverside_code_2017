// Reconstructed from DWARF by pahole; not original source.

// src/game/server/nav_volume_game.cpp:156
class BreadthFirstSearchVolumeCollector {
protected:

	const NavAreaVector & m_rAreas;  // +0x0
	int m_nMaxAreaCount;  // +0x8
	BreadthFirstSearchVolumeCollector(NavAreaVector &, int);
	NavSearchAreaResult_t operator()(CNavArea &, NavSearchAreaInfo_t *);

	// sizeof = 16
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CreateNewNavVolumeFromScriptTables  (line 24, @0x0000000002ee7370, libserver.so)  // inlines: AddAttributeSet, CUtlMemory, CUtlVector, CUtlVectorBase, CVariantBase, CreateFromScriptTable<CNavVolume>, Free, Get, HScriptToEntity<CBaseEntity>, NavHullAny, Purge, RemoveAll, SchemaTypeOf<CNavVolume>, SchemaTypeOf<CUtlVector<NavAttributeEnum> >, SchemaTypeScope, SetFilter, SetNavMesh, SetParams, ToEnt, _Function_base, function, operator(), operator=, swap, swap<bool (*)(const std::_Any_data&, const CNavArea&)>, swap<bool (*)(std::_Any_data&, const std::_Any_data&, std::_Manager_operation)>, swap<std::_Any_data>, ~CNavAreaFilter, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~CVariantBase, ~_Function_base, ~function
// calls: CNavAreaFilter::CNavAreaFilter, __dynamic_cast, GetScriptDesc<CEntityInstance>, CUtlMemory<NavAttributeEnum, int>::Purge, GetNameOfModule, NavHull_t::NavHull_t, operator new, CNavVolumeAll::CNavVolumeAll, __stack_chk_fail, std::__throw_bad_function_call(void), _Unwind_Resume, CVariantBase<CVariantDefaultAllocator>::Free (13 total)
// callers: CNavQuery::Script_NavGetRandomPoints
// strings: "markupVolumeEntity", "NavAttributeEnum", "CUtlVector", "CNavVolume"
// globals: SchemaTypeOf<CNavVolume>(void)::s_pTypeOf, SchemaTypeOf<CUtlVector<NavAttributeEnum,CUtlMemory<NavAttributeEnum,int>>>(void)::s_pTypeOf, `typeinfo for'CNavVolumeMarkupVolume, CSchemaManipulator<CUtlVector<NavAttributeEnum,CUtlMemory<NavAttributeEnum,int>>>::StaticAccessor(void)::m, CAtomicManipulator<CUtlVector<NavAttributeEnum,CUtlMemory<NavAttributeEnum,int>>>::Get(void)::val
const CNavVolume *__fastcall CreateNewNavVolumeFromScriptTables(
        const CNavMesh *const rNavMesh,
        HSCRIPT hVolumeTable,
        HSCRIPT hFilterTable,
        std::function<CNavVolume*()> *pFuncCreateDefaultVolume)
{
  float v4; // xmm2_4
  __int64 v8; // rsi
  IScriptVM *v9; // rbx
  CNavVolumeAll *v10; // rbx
  int (**vptr_CNavVolume)(...); // rax
  __int64 v12; // rdx
  IScriptVM *v13; // rdi
  __int64 v14; // rax
  uint64 m_Flags; // rdx
  bool (*v16)(std::_Any_data *, const std::_Any_data *, std::_Manager_operation); // rcx
  __int64 delta; // rdx
  void *v18; // rsi
  __int64 v19; // rdi
  bool (*v20)(std::_Any_data *, const std::_Any_data *, std::_Manager_operation); // rax
  bool (*v21)(const std::_Any_data *, const CNavArea *); // rdx
  bool (*v22)(const std::_Any_data *, const CNavArea *); // rcx
  bool m_bDrawDetails; // al
  _QWORD *v24; // r15
  uint64 m_uint64; // r12
  ScriptClassDesc_t *Script; // rdx
  const void *v27; // rax
  void *v28; // rax
  const char *v30; // rsi
  __int64 v31; // r14
  __int64 v32; // r9
  const char *NameOfModule; // rax
  __int64 v34; // rax
  NavHull_t v35; // [rsp+0h] [rbp-C0h]
  __int64 (__fastcall *v36)(ISchemaSystem *, const char *); // [rsp+0h] [rbp-C0h]
  __int64 (__fastcall *v37)(__int64, const char *, __int64, __int64 (__fastcall ***)(), __int64 (__fastcall ***)(), __int64); // [rsp+0h] [rbp-C0h]
  void (__fastcall *v38)(IScriptVM *, ScriptVariant_t *, __int64, HSCRIPT); // [rsp+8h] [rbp-B8h]
  __int64 (__fastcall *v39)(IScriptVM *, uint64, ScriptClassDesc_t *); // [rsp+8h] [rbp-B8h]
  __int64 (__fastcall *v40)(ISchemaSystem *, const char *); // [rsp+8h] [rbp-B8h]
  ScriptVariant_t varMarkupVolumeEntity; // [rsp+10h] [rbp-B0h] BYREF
  int v42; // [rsp+20h] [rbp-A0h]
  int v43; // [rsp+24h] [rbp-9Ch]
  void *M_object; // [rsp+30h] [rbp-90h] BYREF
  __int64 v45; // [rsp+38h] [rbp-88h]
  std::_Function_base::_Manager_type M_manager; // [rsp+40h] [rbp-80h]
  std::function<bool(const CNavArea&)>::_Invoker_type M_invoker; // [rsp+48h] [rbp-78h]
  CNavAreaFilter areaFilter; // [rsp+50h] [rbp-70h] BYREF
  unsigned __int64 v49; // [rsp+88h] [rbp-38h]

  v49 = __readfsqword(0x28u);
  if ( hVolumeTable != 0 )
  {
    v8 = SchemaTypeOf<CNavVolume>(void)::s_pTypeOf;
    v9 = g_pScriptVM;
    if ( SchemaTypeOf<CNavVolume>(void)::s_pTypeOf == 0 )
    {
      v40 = *(*g_pSchemaSystem + 104LL);
      NameOfModule = GetNameOfModule();
      v34 = v40(g_pSchemaSystem, NameOfModule);
      v8 = (*(*v34 + 88LL))(v34, "CNavVolume");
      SchemaTypeOf<CNavVolume>(void)::s_pTypeOf = v8;
    }
    v10 = (*(*v9 + 504LL))(v9, v8, hVolumeTable, pFuncCreateDefaultVolume);
  }
  else if ( pFuncCreateDefaultVolume != 0 )
  {
    if ( pFuncCreateDefaultVolume->_M_manager == 0 )
      std::__throw_bad_function_call();
    v10 = pFuncCreateDefaultVolume->_M_invoker(pFuncCreateDefaultVolume);
  }
  else
  {
    NavHull_t::NavHull_t(&varMarkupVolumeEntity, -1.0, v4, 7u);
    v10 = operator new(0x88u);
    CNavVolumeAll::CNavVolumeAll(v10, 0, v35);
  }
  if ( v10 != 0 )
  {
    vptr_CNavVolume = v10->_vptr_CNavVolume;
    v10->m_pNavMesh = rNavMesh;
    vptr_CNavVolume[3](v10);
    if ( hFilterTable != 0 )
    {
      varMarkupVolumeEntity.m_int = 0;
      *&varMarkupVolumeEntity.m_type = 0;
      v12 = SchemaTypeOf<CUtlVector<NavAttributeEnum,CUtlMemory<NavAttributeEnum,int>>>(void)::s_pTypeOf;
      v42 = 0;
      v43 = 0;
      v13 = g_pScriptVM;
      v38 = *(*g_pScriptVM + 496LL);
      if ( SchemaTypeOf<CUtlVector<NavAttributeEnum,CUtlMemory<NavAttributeEnum,int>>>(void)::s_pTypeOf == 0 )
      {
        v36 = *(*g_pSchemaSystem + 104LL);
        v30 = GetNameOfModule();
        v31 = v36(g_pSchemaSystem, v30);
        v37 = *(*v31 + 64LL);
        v32 = (*(*v31 + 96LL))(v31, "NavAttributeEnum");
        v12 = v37(
                v31,
                "CUtlVector",
                3002,
                &CAtomicManipulator<CUtlVector<NavAttributeEnum,CUtlMemory<NavAttributeEnum,int>>>::Get(void)::val,
                CSchemaManipulator<CUtlVector<NavAttributeEnum,CUtlMemory<NavAttributeEnum,int>>>::StaticAccessor(void)::m,
                v32);
        SchemaTypeOf<CUtlVector<NavAttributeEnum,CUtlMemory<NavAttributeEnum,int>>>(void)::s_pTypeOf = v12;
        v13 = g_pScriptVM;
      }
      v38(v13, &varMarkupVolumeEntity, v12, hFilterTable);
      if ( varMarkupVolumeEntity.m_int != 0 )
      {
        CNavAreaFilter::CNavAreaFilter(&areaFilter);
        if ( varMarkupVolumeEntity.m_int != 0 )
        {
          v14 = 0;
          m_Flags = areaFilter.m_AttributesMatchAny.m_Flags;
          do
          {
            m_Flags |= *(*&varMarkupVolumeEntity.m_type + 8 * v14++);
            areaFilter.m_AttributesMatchAny.m_Flags = m_Flags;
          }
          while ( varMarkupVolumeEntity.m_int != v14 );
        }
        v16 = 0;
        M_manager = 0;
        v10->m_AreaFilter.m_AttributesMatchAny.m_Flags = areaFilter.m_AttributesMatchAny.m_Flags;
        v10->m_AreaFilter.m_AttributesExcludeAny.m_Flags = areaFilter.m_AttributesExcludeAny.m_Flags;
        if ( areaFilter.m_FilterFunc._M_manager != 0 )
        {
          M_manager = areaFilter.m_FilterFunc._M_manager;
          M_invoker = areaFilter.m_FilterFunc._M_invoker;
          (areaFilter.m_FilterFunc._M_manager)(&M_object, &areaFilter.m_FilterFunc, 2, 0);
          v16 = M_manager;
        }
        delta = v10->m_AreaFilter.m_FilterFunc._M_functor._M_unused._M_member_pointer.__delta;
        v18 = M_object;
        v19 = v45;
        M_object = v10->m_AreaFilter.m_FilterFunc._M_functor._M_unused._M_object;
        v20 = v10->m_AreaFilter.m_FilterFunc._M_manager;
        v45 = delta;
        v21 = M_invoker;
        v10->m_AreaFilter.m_FilterFunc._M_manager = v16;
        v22 = v10->m_AreaFilter.m_FilterFunc._M_invoker;
        v10->m_AreaFilter.m_FilterFunc._M_functor._M_unused._M_object = v18;
        v10->m_AreaFilter.m_FilterFunc._M_functor._M_unused._M_member_pointer.__delta = v19;
        M_manager = v20;
        M_invoker = v22;
        v10->m_AreaFilter.m_FilterFunc._M_invoker = v21;
        if ( v20 != 0 )
          v20(&M_object, &M_object, std::_Manager_operation::__destroy_functor);
        m_bDrawDetails = areaFilter.m_bDrawDetails;
        v10->m_bFilterActive = 1;
        v10->m_AreaFilter.m_bDrawDetails = m_bDrawDetails;
        (*(v10->_vptr_CNavVolume + 3))(v10);
        if ( areaFilter.m_FilterFunc._M_manager != 0 )
          areaFilter.m_FilterFunc._M_manager(
            &areaFilter.m_FilterFunc,
            &areaFilter.m_FilterFunc,
            std::_Manager_operation::__destroy_functor);
      }
      varMarkupVolumeEntity.m_int = 0;
      if ( (v43 & 0xC0000000) == 0 )
      {
        CUtlMemory<NavAttributeEnum,int>::Purge(&varMarkupVolumeEntity.m_type);
        if ( (v43 & 0xC0000000) == 0 )
          CUtlMemory<NavAttributeEnum,int>::Purge(&varMarkupVolumeEntity.m_type);
      }
    }
    v24 = __dynamic_cast(v10, &`typeinfo for'CNavVolume, &`typeinfo for'CNavVolumeMarkupVolume, 0);
    if ( v24 != 0 )
    {
      varMarkupVolumeEntity.m_type = 0;
      varMarkupVolumeEntity.m_flags = 0;
      varMarkupVolumeEntity.m_uint64 = 0;
      if ( (*(*g_pScriptVM + 312LL))(g_pScriptVM, hVolumeTable, "markupVolumeEntity", &varMarkupVolumeEntity) != 0 )
      {
        m_uint64 = varMarkupVolumeEntity.m_uint64;
        if ( varMarkupVolumeEntity.m_uint64 != 0 )
        {
          v39 = *(*g_pScriptVM + 208LL);
          Script = GetScriptDesc<CEntityInstance>(0);
          v27 = v39(g_pScriptVM, m_uint64, Script);
          if ( v27 != 0 )
          {
            v28 = __dynamic_cast(v27, &`typeinfo for'CBaseEntity, &`typeinfo for'CMarkupVolume, 0);
            if ( v28 != 0 )
            {
              v24[12] = v28;
              (*(*v24 + 24LL))(v24);
            }
          }
        }
      }
      if ( (varMarkupVolumeEntity.m_flags & 1) != 0 )
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, varMarkupVolumeEntity.m_uint64);
    }
  }
  return v10;
}


// CNavVolumeMarkupVolume::CNavVolumeMarkupVolume  (line 83, @0x0000000002ee5c00, libserver.so)  // inlines: SetParams, ~CNavAreaFilter, ~CNavVolume, ~_Function_base, ~function
// calls: CNavVolume::CNavVolume, CNavVolumeMarkupVolume::ParamsChanged, _Unwind_Resume
// callers: CSchemaClassBinding<CNavVolumeMarkupVolume>::ConstructInPlace, CSchemaClassBinding<CNavVolumeMarkupVolume>::Allocate, CSchemaClassBinding<CNavVolumeMarkupVolume>::AllocateAndCopyConstruct, CNavEntityInterface::ApplyMarkup
void __fastcall CNavVolumeMarkupVolume::CNavVolumeMarkupVolume(
        CNavVolumeMarkupVolume *const this,
        const CNavMesh *pNavMesh,
        __int64 a3,
        const CMarkupVolume *pMarkupVolume)
{
  NavHull_t navHulla; // [rsp+0h] [rbp-20h]

  CNavVolume::CNavVolume(this, pNavMesh, navHulla);
  this->m_pMarkupVolume = pMarkupVolume;
  this->_vptr_CNavVolume = &off_47B0F10;
  CNavVolumeMarkupVolume::ParamsChanged(this);
}


// CNavVolumeMarkupVolume::ParamsChanged  (line 91, @0x0000000002ec7350, libserver.so)  // inlines: SetToIdentity, operator=
// calls: CMarkupVolume::GetOBBBounds, TransformAABB, SetIdentityMatrix
// callers: CNavVolumeMarkupVolume::CNavVolumeMarkupVolume
void __fastcall CNavVolumeMarkupVolume::ParamsChanged(CNavVolumeMarkupVolume *const this)
{
  const CMarkupVolume *m_pMarkupVolume; // rdi
  vec_t x; // xmm2_4
  vec_t y; // xmm1_4
  vec_t z; // xmm0_4

  m_pMarkupVolume = this->m_pMarkupVolume;
  if ( m_pMarkupVolume != 0 )
  {
    CMarkupVolume::GetOBBBounds(m_pMarkupVolume, &this->m_vLocalMins, &this->m_vLocalMaxs, &this->m_mTransform);
    TransformAABB(
      &this->m_mTransform,
      &this->m_vLocalMins,
      &this->m_vLocalMaxs,
      &this->m_vWorldMins,
      &this->m_vWorldMaxs);
  }
  else
  {
    x = vec3_origin.x;
    y = vec3_origin.y;
    z = vec3_origin.z;
    this->m_vLocalMins.x = vec3_origin.x;
    this->m_vLocalMins.y = y;
    this->m_vLocalMins.z = z;
    this->m_vLocalMaxs.x = x;
    this->m_vLocalMaxs.y = y;
    this->m_vLocalMaxs.z = z;
    this->m_vWorldMins.x = x;
    this->m_vWorldMins.y = y;
    this->m_vWorldMins.z = z;
    this->m_vWorldMaxs.x = x;
    this->m_vWorldMaxs.y = y;
    this->m_vWorldMaxs.z = z;
    SetIdentityMatrix(&this->m_mTransform);
  }
}


// CNavVolumeMarkupVolume::OverlapsExtent  (line 110, @0x0000000002ec70c0, libserver.so)
// calls: CMarkupVolume::OverlapsExtent
bool __fastcall CNavVolumeMarkupVolume::OverlapsExtent(
        const CNavVolumeMarkupVolume *const this,
        const Extent *const rTestExtent)
{
  const CMarkupVolume *m_pMarkupVolume; // rdi

  m_pMarkupVolume = this->m_pMarkupVolume;
  return m_pMarkupVolume != 0 && CMarkupVolume::OverlapsExtent(m_pMarkupVolume, rTestExtent);
}


// CNavVolumeMarkupVolume::ContainsArea  (line 121, @0x0000000002ec9680, libserver.so)  // inlines: FilterArea
// calls: CNavPoly::IsOverlappingOBB, CNavVolume::DrawAreaGeometryReject, CNavAreaFilter::FilterArea
bool __fastcall CNavVolumeMarkupVolume::ContainsArea(
        const CNavVolumeMarkupVolume *const this,
        const CNavArea *const rTestArea)
{
  bool result; // al

  if ( CNavPoly::IsOverlappingOBB(rTestArea, &this->m_vLocalMins, &this->m_vLocalMaxs, &this->m_mTransform) )
  {
    result = 1;
    if ( this->m_bFilterActive )
      return CNavAreaFilter::FilterArea(&this->m_AreaFilter, rTestArea);
  }
  else if ( this->m_nDebugLevel <= 1 )
  {
    return 0;
  }
  else
  {
    CNavVolume::DrawAreaGeometryReject(rTestArea);
    return 0;
  }
  return result;
}


// CNavVolumeMarkupVolume::DrawDebug  (line 141, @0x0000000002ec6b30, libserver.so)  // inlines: Box, VertexColor_t
void __fastcall CNavVolumeMarkupVolume::DrawDebug(const CNavVolumeMarkupVolume *const this, float a2, float flDuration)
{
  __int64 v3; // rbp
  int (**vptr_ISceneViewDebugOverlays)(...); // rax
  _QWORD v5[3]; // [rsp+10h] [rbp-18h] BYREF

  if ( this->m_pMarkupVolume != 0 )
  {
    v5[2] = v3;
    vptr_ISceneViewDebugOverlays = debugoverlay->_vptr_ISceneViewDebugOverlays;
    LODWORD(v5[0]) = -6908216;
    vptr_ISceneViewDebugOverlays[15](
      debugoverlay,
      &vec3_origin,
      &this->m_vWorldMins,
      &this->m_vWorldMaxs,
      &quat_identity,
      v5,
      a2,
      flDuration,
      1);
  }
}


// CNavVolumeBreadthFirstSearch::~CNavVolumeBreadthFirstSearch  (line 188, @0x0000000002eca980, libserver.so)  // inlines: Purge, RemoveAll, ~CNavAreaFilter, ~CNavVolume, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~_Function_base, ~function
// calls: operator delete, CUtlMemory<CNavArea*, int>::Purge
// callers: CNavVolumeBreadthFirstSearch::~CNavVolumeBreadthFirstSearch
void __fastcall CNavVolumeBreadthFirstSearch::~CNavVolumeBreadthFirstSearch(CNavVolumeBreadthFirstSearch *const this)
{
  bool v2; // zf
  std::_Function_base::_Manager_type M_manager; // rax

  this->_vptr_CNavVolume = &off_47B0F90;
  operator delete(this->m_pNavAreaMarker);
  v2 = (this->m_vecBFSNavAreas.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_vecBFSNavAreas.m_Size = 0;
  if ( v2 )
  {
    CUtlMemory<CNavArea *,int>::Purge(&this->m_vecBFSNavAreas.m_Memory);
    if ( (this->m_vecBFSNavAreas.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CNavArea *,int>::Purge(&this->m_vecBFSNavAreas.m_Memory);
  }
  this->_vptr_CNavVolume = &off_47CE530;
  M_manager = this->m_AreaFilter.m_FilterFunc._M_manager;
  if ( M_manager != 0 )
    M_manager(
      &this->m_AreaFilter.m_FilterFunc._M_functor,
      &this->m_AreaFilter.m_FilterFunc._M_functor,
      std::_Manager_operation::__destroy_functor);
}


// CNavVolumeBreadthFirstSearch::~CNavVolumeBreadthFirstSearch  (line 188, @0x0000000002ecaa10, libserver.so)
// calls: CNavVolumeBreadthFirstSearch::~CNavVolumeBreadthFirstSearch, operator delete
void __fastcall CNavVolumeBreadthFirstSearch::~CNavVolumeBreadthFirstSearch(CNavVolumeBreadthFirstSearch *const this)
{
  CNavVolumeBreadthFirstSearch::~CNavVolumeBreadthFirstSearch(this);
  operator delete(this);
}


// CNavVolumeBreadthFirstSearch::SetParams  (line 195, @0x0000000002ee5c70, libserver.so)  // inlines: operator=
// callers: CSchemaClassBinding<CNavVolumeBreadthFirstSearch>::ConstructInPlace, CSchemaClassBinding<CNavVolumeBreadthFirstSearch>::Allocate, CSchemaClassBinding<CNavVolumeBreadthFirstSearch>::AllocateAndCopyConstruct
void __fastcall CNavVolumeBreadthFirstSearch::SetParams(
        CNavVolumeBreadthFirstSearch *const this,
        CNavArea *pStartArea,
        float a3,
        float flSearchDist)
{
  int (**vptr_CNavVolume)(...); // rax

  this->m_pStartArea = pStartArea;
  this->m_flSearchDist = a3;
  this->m_vStartPos.x = vec3_invalid.x;
  this->m_vStartPos.y = vec3_invalid.y;
  vptr_CNavVolume = this->_vptr_CNavVolume;
  this->m_vStartPos.z = vec3_invalid.z;
  vptr_CNavVolume[3]();
}


// CNavVolumeBreadthFirstSearch::SetParams  (line 205, @0x0000000002ee5d80, libserver.so)  // inlines: operator=
// calls: CNavVolumeBreadthFirstSearch::ConvertStartPosToStartArea
void __fastcall CNavVolumeBreadthFirstSearch::SetParams(
        CNavVolumeBreadthFirstSearch *const this,
        const Vector *const vStartPos,
        float a3,
        float flSearchDist)
{
  vec_t z; // xmm0_4

  this->m_flSearchDist = a3;
  this->m_vStartPos.x = vStartPos->x;
  this->m_vStartPos.y = vStartPos->y;
  z = vStartPos->z;
  this->m_pStartArea = 0;
  this->m_vStartPos.z = z;
  CNavVolumeBreadthFirstSearch::ConvertStartPosToStartArea(this);
  (*(this->_vptr_CNavVolume + 3))(this);
}


// CNavVolumeBreadthFirstSearch::ConvertStartPosToStartArea  (line 216, @0x0000000002ee5cb0, libserver.so)  // inlines: DistTo, FastSqrt, Length, VectorLength, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator=
// calls: CNavMesh::GetNearestNavArea, CNavPoly::GetClosestPointOnPoly
// callers: CNavVolumeBreadthFirstSearch::SetParams, CNavVolumeBreadthFirstSearch::DoSearch
void __fastcall CNavVolumeBreadthFirstSearch::ConvertStartPosToStartArea(
        const CNavVolumeBreadthFirstSearch *const this)
{
  Vector *p_m_vStartPos; // r12
  CNavArea *NearestNavArea; // rax
  Vector ClosestPointOnPoly; // 0:kr00_12.12

  p_m_vStartPos = &this->m_vStartPos;
  NearestNavArea = CNavMesh::GetNearestNavArea(this->m_pNavMesh, &this->m_vStartPos, this->m_NavHull, 4, 10000.0);
  this->m_pStartArea = NearestNavArea;
  if ( NearestNavArea != 0 )
  {
    ClosestPointOnPoly = CNavPoly::GetClosestPointOnPoly(NearestNavArea, p_m_vStartPos);
    this->m_flSearchDist = this->m_flSearchDist
                         - fsqrt(
                             (((ClosestPointOnPoly.x - this->m_vStartPos.x)
                             * (ClosestPointOnPoly.x - this->m_vStartPos.x))
                            + ((ClosestPointOnPoly.y - this->m_vStartPos.y)
                             * (ClosestPointOnPoly.y - this->m_vStartPos.y)))
                           + ((ClosestPointOnPoly.z - this->m_vStartPos.z) * (ClosestPointOnPoly.z - this->m_vStartPos.z)));
  }
  this->m_vStartPos = vec3_invalid;
}


// CNavVolumeBreadthFirstSearch::ParamsChanged  (line 230, @0x0000000002ec6b90, libserver.so)  // inlines: RemoveAll
void __fastcall CNavVolumeBreadthFirstSearch::ParamsChanged(CNavVolumeBreadthFirstSearch *const this)
{
  if ( this->m_bSearchRun )
    this->m_vecBFSNavAreas.m_Size = 0;
  this->m_bSearchRun = 0;
}


// CNavVolumeBreadthFirstSearch::DoSearch  (line 241, @0x0000000002efaee0, libserver.so)  // inlines: BreadthFirstSearchVolumeCollector, CNavBreadthFirstSearch, CNavBreadthFirstSearch<BreadthFirstSearchVolumeCollector>, CNavSearchHash, CUtlHashtable, CUtlMemory, NavBreadthFirstSearch<BreadthFirstSearchVolumeCollector>, Purge, SetFlags, SetTeamIdForBlockedCheck, operator!=, operator=<BreadthFirstSearchVolumeCollector>, swap, swap<NavSearchAreaResult_t (*)(const std::_Any_data&, CNavArea&, NavSearchAreaInfo_t*)>, swap<bool (*)(std::_Any_data&, const std::_Any_data&, std::_Manager_operation)>, swap<std::_Any_data>, ~CNavBreadthFirstSearch, ~CNavSearchHash, ~CUtlHashtable, ~CUtlMemory, ~_Function_base, ~function
// calls: CNavBreadthFirstSearch::BreadthFirstSearch, CUtlHashtable<int, CNavSearchElement, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, CNavSearchElement>, int> >::RemoveAll, CUtlMemory<CUtlHashtableEntry<int, CNavSearchElement>, int>::Purge, CNavVolumeBreadthFirstSearch::ConvertStartPosToStartArea, __stack_chk_fail, CNavBreadthFirstSearch::~CNavBreadthFirstSearch, _Unwind_Resume
// callers: CNavVolumeBreadthFirstSearch::GetRandomArea, CNavVolumeBreadthFirstSearch::GetOrFindAreasOverlapping, CNavVolumeBreadthFirstSearch::ForAreasOverlapping, CNavVolumeBreadthFirstSearch::ContainsArea, CNavVolumeBreadthFirstSearch::DrawDebug
// globals: std::_Function_handler<NavSearchAreaResult_t ()(CNavArea &,NavSearchAreaInfo_t *),std::reference_wrapper<BreadthFirstSearchVolumeCollector>>::_M_invoke(std::_An
void __fastcall CNavVolumeBreadthFirstSearch::DoSearch(const CNavVolumeBreadthFirstSearch *const this)
{
  CNavArea *m_pStartArea; // rsi
  int m_nMaxAreasStored; // eax
  float m_flHullRadius; // xmm2_4
  float m_flHullHeight; // xmm1_4
  float m_flSearchDist; // xmm0_4
  uint32 m_hullCategory; // eax
  BreadthFirstSearchVolumeCollector collectorScan; // [rsp+0h] [rbp-C0h] BYREF
  BreadthFirstSearchVolumeCollector *p_collectorScan; // [rsp+10h] [rbp-B0h]
  __int64 v10; // [rsp+18h] [rbp-A8h]
  CNavBreadthFirstSearch v11; // [rsp+30h] [rbp-90h] BYREF
  unsigned __int64 v12; // [rsp+A8h] [rbp-18h]

  v12 = __readfsqword(0x28u);
  m_pStartArea = this->m_pStartArea;
  if ( m_pStartArea != 0
    || (vec3_invalid.x != this->m_vStartPos.x
     || vec3_invalid.y != this->m_vStartPos.y
     || vec3_invalid.z != this->m_vStartPos.z)
    && (CNavVolumeBreadthFirstSearch::ConvertStartPosToStartArea(this), (m_pStartArea = this->m_pStartArea) != 0) )
  {
    if ( this->m_vecBFSNavAreas.m_Size == 0 )
    {
      m_nMaxAreasStored = this->m_nMaxAreasStored;
      v11.m_SearchHash.m_bSizeLocked = 0;
      m_flHullRadius = this->m_NavHull.m_flHullRadius;
      m_flHullHeight = this->m_NavHull.m_flHullHeight;
      collectorScan.m_rAreas = &this->m_vecBFSNavAreas;
      m_flSearchDist = this->m_flSearchDist;
      v11.m_NavHull.m_flHullRadius = m_flHullRadius;
      collectorScan.m_nMaxAreaCount = m_nMaxAreasStored;
      m_hullCategory = this->m_NavHull.m_hullCategory;
      v11._vptr_CNavBreadthFirstSearch = off_47AE210;
      memset(&v11.m_SearchHash, 0, 20);
      v11.m_NavHull.m_hullCategory = m_hullCategory;
      p_collectorScan = &collectorScan;
      v11.m_funcOnSearchArea._M_functor._M_unused._M_object = &collectorScan;
      v11.m_SearchHash.m_nMinSize = 1024;
      v11.m_funcOnSearchArea._M_functor._M_unused._M_member_pointer.__delta = v10;
      v11.m_pCostFunc = 0;
      v11.m_NavHull.m_flHullHeight = m_flHullHeight;
      v11.m_nConnectionFlags = 29;
      v11.m_funcOnSearchArea._M_manager = std::_Function_base::_Ref_manager<BreadthFirstSearchVolumeCollector>::_M_manager;
      v11.m_funcOnSearchArea._M_invoker = std::_Function_handler<NavSearchAreaResult_t ()(CNavArea &,NavSearchAreaInfo_t *),std::reference_wrapper<BreadthFirstSearchVolumeCollector>>::_M_invoke;
      v11.m_nTeamIdForBlockedCheck = -1;
      CNavBreadthFirstSearch::BreadthFirstSearch(&v11, m_pStartArea, m_flSearchDist, m_flHullHeight);
      v11._vptr_CNavBreadthFirstSearch = off_47AE210;
      if ( v11.m_funcOnSearchArea._M_manager != 0 )
        v11.m_funcOnSearchArea._M_manager(
          &v11.m_funcOnSearchArea,
          &v11.m_funcOnSearchArea,
          std::_Manager_operation::__destroy_functor);
      CUtlHashtable<int,CNavSearchElement,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,CNavSearchElement>,int>>::RemoveAll(&v11.m_SearchHash);
      if ( (v11.m_SearchHash.m_table.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<CUtlHashtableEntry<int,CNavSearchElement>,int>::Purge(&v11.m_SearchHash.m_table);
    }
    this->m_bSearchRun = 1;
  }
}


// CNavVolumeBreadthFirstSearch::GetRandomArea  (line 268, @0x0000000002efb0d0, libserver.so)  // inlines: operator[]
// calls: RandomInt, CNavVolumeBreadthFirstSearch::DoSearch
CNavArea *__fastcall CNavVolumeBreadthFirstSearch::GetRandomArea(const CNavVolumeBreadthFirstSearch *const this)
{
  int m_Size; // esi
  CNavArea *result; // rax

  if ( !this->m_bSearchRun )
    CNavVolumeBreadthFirstSearch::DoSearch(this);
  m_Size = this->m_vecBFSNavAreas.m_Size;
  result = 0;
  if ( m_Size != 0 )
    return this->m_vecBFSNavAreas.m_Memory.m_pMemory[RandomInt(0, (m_Size - 1))];
  return result;
}


// CNavVolumeBreadthFirstSearch::GetOrFindAreasOverlapping  (line 286, @0x0000000002efb120, libserver.so)
// calls: CNavVolumeBreadthFirstSearch::DoSearch
const NavAreaVector *__fastcall CNavVolumeBreadthFirstSearch::GetOrFindAreasOverlapping(
        const CNavVolumeBreadthFirstSearch *const this,
        NavAreaVector *const rAreasOverlapped)
{
  const NavAreaVector *result; // rax

  if ( this->m_nDebugLevel > 1 )
    (*(this->_vptr_CNavVolume + 11))(this, rAreasOverlapped, 10.0);
  if ( !this->m_bSearchRun )
    CNavVolumeBreadthFirstSearch::DoSearch(this);
  result = 0;
  if ( this->m_vecBFSNavAreas.m_Size != 0 )
    return &this->m_vecBFSNavAreas;
  return result;
}


// CNavVolumeBreadthFirstSearch::ForAreasOverlapping  (line 310, @0x0000000002efb180, libserver.so)  // inlines: operator()
// calls: CNavVolumeBreadthFirstSearch::DoSearch, std::__throw_bad_function_call(void)
void __fastcall CNavVolumeBreadthFirstSearch::ForAreasOverlapping(
        const CNavVolumeBreadthFirstSearch *const this,
        __int64 a2)
{
  int m_Size; // eax
  unsigned __int64 v5; // rbx
  __int64 v6; // r13

  if ( !this->m_bSearchRun )
    CNavVolumeBreadthFirstSearch::DoSearch(this);
  m_Size = this->m_vecBFSNavAreas.m_Size;
  if ( m_Size != 0 )
  {
    v5 = 0;
    v6 = 8LL * (m_Size - 1) + 8;
    do
    {
      if ( this->m_vecBFSNavAreas.m_Memory.m_pMemory[v5 / 8] != 0 )
      {
        if ( *(a2 + 16) == 0 )
          std::__throw_bad_function_call();
        (*(a2 + 24))(a2);
      }
      v5 += 8LL;
    }
    while ( v5 != v6 );
  }
}


// CNavVolumeBreadthFirstSearch::ContainsArea  (line 328, @0x0000000002efb200, libserver.so)  // inlines: BitVec_IsBitSet, Bitvec_Set, CBitVec, CBitVecT, CNavAreaMarker, ClearAll, IsBitSet, IsMarked, Set, SetMark, memset
// calls: CNavVolumeBreadthFirstSearch::DoSearch, operator new, memset
bool __fastcall CNavVolumeBreadthFirstSearch::ContainsArea(
        const CNavVolumeBreadthFirstSearch *const this,
        const CNavArea *const rTestArea)
{
  CNavAreaMarker *m_pNavAreaMarker; // rax
  CNavAreaMarker *v6; // r13
  int m_Size; // eax
  unsigned __int64 v8; // rdx
  __int64 v9; // r9
  CNavArea *v10; // rcx

  if ( this->m_pNavMesh == 0 )
    return 0;
  if ( !this->m_bSearchRun )
    CNavVolumeBreadthFirstSearch::DoSearch(this);
  m_pNavAreaMarker = this->m_pNavAreaMarker;
  if ( this->m_vecBFSNavAreas.m_Size != 0 )
  {
    if ( m_pNavAreaMarker != 0 )
      return ((1 << rTestArea->m_nIndex) & m_pNavAreaMarker->m_MarkedAreas.m_Ints[rTestArea->m_nIndex >> 5]) != 0;
    v6 = operator new(0x8000u);
    memset(v6, 0, sizeof(CNavAreaMarker));
    m_Size = this->m_vecBFSNavAreas.m_Size;
    this->m_pNavAreaMarker = v6;
    if ( m_Size != 0 )
    {
      v8 = 0;
      v9 = 8LL * (m_Size - 1) + 8;
      m_pNavAreaMarker = v6;
      do
      {
        v10 = this->m_vecBFSNavAreas.m_Memory.m_pMemory[v8 / 8];
        v8 += 8LL;
        m_pNavAreaMarker->m_MarkedAreas.m_Ints[v10->m_nIndex >> 5] |= 1 << v10->m_nIndex;
        m_pNavAreaMarker = this->m_pNavAreaMarker;
      }
      while ( v8 != v9 );
      if ( m_pNavAreaMarker != 0 )
        return ((1 << rTestArea->m_nIndex) & m_pNavAreaMarker->m_MarkedAreas.m_Ints[rTestArea->m_nIndex >> 5]) != 0;
      return 0;
    }
    m_pNavAreaMarker = v6;
  }
  if ( m_pNavAreaMarker != 0 )
    return ((1 << rTestArea->m_nIndex) & m_pNavAreaMarker->m_MarkedAreas.m_Ints[rTestArea->m_nIndex >> 5]) != 0;
  return 0;
}


// CNavVolumeBreadthFirstSearch::DrawDebug  (line 355, @0x0000000002efb320, libserver.so)  // inlines: DrawPolyOutline, GetCenter, SetOrigin, SetToIdentity, Sphere, VertexColor_t
// calls: SetIdentityMatrix, CNavVolumeBreadthFirstSearch::DoSearch
void __fastcall CNavVolumeBreadthFirstSearch::DrawDebug(
        const CNavVolumeBreadthFirstSearch *const this,
        float a2,
        float flDuration)
{
  CNavArea *m_pStartArea; // rax
  vec_t x; // xmm3_4
  ISceneViewDebugOverlays *v6; // rbx
  int m_Size; // eax
  unsigned __int64 v8; // rbx
  __int64 v9; // r12
  CNavArea *v10; // rsi
  float m_flSearchDist; // [rsp+Ch] [rbp-74h]
  float v12; // [rsp+10h] [rbp-70h]
  float y; // [rsp+14h] [rbp-6Ch]
  float z; // [rsp+18h] [rbp-68h]
  _BYTE v16[16]; // [rsp+20h] [rbp-60h] BYREF
  matrix3x4_t matrix; // [rsp+30h] [rbp-50h] BYREF

  if ( !this->m_bSearchRun )
    CNavVolumeBreadthFirstSearch::DoSearch(this);
  m_pStartArea = this->m_pStartArea;
  if ( m_pStartArea != 0 )
  {
    x = m_pStartArea->m_vCenter.x;
    memset(v16, 150, 3);
    v12 = x;
    y = m_pStartArea->m_vCenter.y;
    z = m_pStartArea->m_vCenter.z;
    m_flSearchDist = this->m_flSearchDist;
    v6 = debugoverlay;
    v16[3] = -1;
    SetIdentityMatrix(&matrix);
    matrix.m_flMatVal[2][3] = z;
    matrix.m_flMatVal[0][3] = v12;
    matrix.m_flMatVal[1][3] = y;
    (*(v6->_vptr_ISceneViewDebugOverlays + 18))(v6, &matrix, v16, 0, m_flSearchDist, a2);
  }
  m_Size = this->m_vecBFSNavAreas.m_Size;
  if ( m_Size != 0 )
  {
    v8 = 0;
    v9 = 8LL * (m_Size - 1) + 8;
    do
    {
      v10 = this->m_vecBFSNavAreas.m_Memory.m_pMemory[v8 / 8];
      if ( v10 != 0 && INavDrawArea::ms_pInst != 0 )
        (*(INavDrawArea::ms_pInst->_vptr_INavDrawArea + 1))(
          INavDrawArea::ms_pInst,
          v10,
          4294927460LL,
          1,
          &vec3_origin,
          a2,
          0.0);
      v8 += 8LL;
    }
    while ( v8 != v9 );
  }
}


