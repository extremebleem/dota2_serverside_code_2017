
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// _GLOBAL__sub_I_physaggregatedata.cpp  (line 0, @0x0000000001a6d010, libserver.so)  // inlines: Color, SetColor, __static_initialization_and_destruction_0
// calls: LoggingSystem_RegisterLoggingChannel
// globals: UNSPECIFIED_LOGGING_COLOR, LOG_PHYSICS
void __cdecl GLOBAL__sub_I_physaggregatedata_cpp()
{
  UNSPECIFIED_LOGGING_COLOR._color[0] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[1] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[2] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[3] = 0;
  LOG_PHYSICS = LoggingSystem_RegisterLoggingChannel("Physics", 0, 0, 2, 4286644096LL);
}


// CPhysAggregateData::CPhysAggregateData  (line 22, @0x00000000031aaf70, libserver.so)  // inlines: CInterlockedIntT, CUtlMemory, CUtlMemoryConservative, CUtlVectorBase, CUtlVectorConservative, CUtlVectorUltraConservative, Count, Free, Purge, RememberAllocSize, RemoveAll, ~CUtlMemory, ~CUtlVectorBase, ~CUtlVectorConservative, ~CUtlVectorUltraConservative
// calls: CPhysAggregateData::Init, CUtlMemory<matrix3x4_t, int>::Purge, CUtlMemory<short unsigned int, int>::Purge, CUtlMemory<unsigned int, int>::Purge, _Unwind_Resume
// callers: CreateSphereAggregateData, CreateBoxAggregateData, SubAggregateData, CreateAggregateData
void __fastcall CPhysAggregateData::CPhysAggregateData(CPhysAggregateData *const this, uint16 nFlags)
{
  this->m_nRefCounter.m_value = 0;
  this->m_BoneNames.m_pData = 0;
  this->m_BonesHash.m_pMemory = 0;
  this->m_BonesHash.m_nAllocationCount = 0;
  this->m_BonesHash.m_nGrowSize = 0;
  this->m_IndexNames.m_pMemory = 0;
  this->m_IndexNames.m_nAllocationCount = 0;
  this->m_IndexNames.m_nGrowSize = 0;
  this->m_IndexHash.m_pMemory = 0;
  this->m_IndexHash.m_nAllocationCount = 0;
  this->m_IndexHash.m_nGrowSize = 0;
  this->m_BoneParents.m_pMemory = 0;
  this->m_BoneParents.m_nAllocationCount = 0;
  this->m_BoneParents.m_nGrowSize = 0;
  this->m_BindPose.m_pMemory = 0;
  this->m_BindPose.m_nAllocationCount = 0;
  this->m_BindPose.m_nGrowSize = 0;
  this->m_Parts.m_Size = 0;
  this->m_Parts.m_Memory.m_pMemory = 0;
  this->m_Parts.m_Memory.m_nCurAllocSize = 0;
  this->m_Constraints.m_pData = 0;
  this->m_Joints.m_pData = 0;
  this->m_CollisionAttributes.m_pData = 0;
  this->m_SurfaceProperties.m_pData = 0;
  this->m_ParentResources.m_pData = 0;
  CPhysAggregateData::Init(this);
}


// CPhysAggregateData::Init  (line 29, @0x00000000031aaeb0, libserver.so)  // inlines: AddToTail, CopyConstruct<CPhysAggregateData*>, Element, GrowMemory, SetIndex, ThreadInterlockedExchange, operator=, operator[]
// calls: CUtlMemory<CPhysAggregateData*, int>::Grow
// callers: CPhysAggregateData::CPhysAggregateData
// globals: s_nAggDataCounter
void __fastcall CPhysAggregateData::Init(CPhysAggregateData *const this)
{
  IVPhysics2 *v2; // r12
  __int64 m_Size; // r13
  int v4; // eax
  CPhysAggregateData **v5; // rax
  int v6; // eax

  v2 = g_pVPhysics2;
  this->m_nIncrementalVectorIndex = g_pVPhysics2->m_AggDataRegistry.m_data.m_Size;
  m_Size = v2->m_AggDataRegistry.m_data.m_Size;
  v4 = v2->m_AggDataRegistry.m_data.m_Size;
  if ( m_Size == v2->m_AggDataRegistry.m_data.m_Memory.m_nAllocationCount )
  {
    CUtlMemory<CPhysAggregateData *,int>::Grow(&v2->m_AggDataRegistry.m_data.m_Memory, 1);
    v4 = v2->m_AggDataRegistry.m_data.m_Size;
  }
  v2->m_AggDataRegistry.m_data.m_Size = v4 + 1;
  v5 = &v2->m_AggDataRegistry.m_data.m_Memory.m_pMemory[m_Size];
  if ( v5 != 0 )
    *v5 = this;
  _InterlockedExchange(this, 0);
  this->m_pEmbeddedKeyvalues = 0;
  v6 = s_nAggDataCounter;
  this->m_nFlags = 0;
  this->m_pDebugPartNames = 0;
  this->m_pFeModel = 0;
  this->m_nReserved = v6;
  s_nAggDataCounter = v6 + 1;
}


// CPhysAggregateData::~CPhysAggregateData  (line 43, @0x00000000031a9b70, libserver.so)  // inlines: Count, FastRemove, FindAndFastRemove, Free, GetIndex, Purge, RememberAllocSize, RemoveAll, RemoveMultipleFromTail, SetIndex, Tail, operator[], ~CUtlMemory, ~CUtlVectorBase, ~CUtlVectorConservative, ~CUtlVectorUltraConservative
// calls: CPhysAggregateData::Release, operator delete [], operator delete, CUtlMemory<unsigned int, int>::Purge, CUtlMemory<short unsigned int, int>::Purge, CUtlMemory<matrix3x4_t, int>::Purge
// callers: CPhysAggregateData::Release
void __fastcall CPhysAggregateData::~CPhysAggregateData(CPhysAggregateData *const this)
{
  int v2; // ebx
  int16 m_nIncrementalVectorIndex; // cx
  IVPhysics2 *v4; // rax
  CPhysAggregateData **m_pMemory; // rsi
  CPhysAggregateData *v6; // rdx
  __int64 v7; // rax
  CUtlVectorUltraConservative<const CPhysAggregateData*,CUtlVectorUltraConservativeAllocator>::Data_t *m_pData; // rsi
  uint16 m_nFlags; // ax
  VPhysXConstraintParams_t *m_pParams; // rdi
  bool v11; // zf
  int v12; // ebx
  CUtlVectorUltraConservative<CPhysConstraintData,CUtlVectorUltraConservativeAllocator>::Data_t *v13; // rax
  __int64 v14; // rdx

  v2 = 0;
  m_nIncrementalVectorIndex = this->m_nIncrementalVectorIndex;
  v4 = g_pVPhysics2;
  m_pMemory = g_pVPhysics2->m_AggDataRegistry.m_data.m_Memory.m_pMemory;
  v6 = m_pMemory[g_pVPhysics2->m_AggDataRegistry.m_data.m_Size - 1];
  m_pMemory[m_nIncrementalVectorIndex] = v6;
  --v4->m_AggDataRegistry.m_data.m_Size;
  v6->m_nIncrementalVectorIndex = m_nIncrementalVectorIndex;
  while ( 1 )
  {
    m_pData = this->m_ParentResources.m_pData;
    if ( m_pData == 0 )
      break;
    if ( v2 >= m_pData->m_Size )
      goto LABEL_6;
LABEL_3:
    v7 = v2++;
    CPhysAggregateData::Release(m_pData->m_Elements[v7]);
  }
  if ( v2 < 0 )
    goto LABEL_3;
LABEL_6:
  m_nFlags = this->m_nFlags;
  if ( m_nFlags != 0 )
  {
    if ( (m_nFlags & 0x400) != 0 )
    {
      m_pParams = this->m_Constraints.m_pData->m_Elements[0].m_pParams;
      if ( m_pParams != 0 )
      {
        operator delete[](m_pParams);
        m_pData = this->m_ParentResources.m_pData;
      }
    }
    else
    {
      v12 = 0;
      if ( (m_nFlags & 0x200) != 0 )
      {
        v13 = this->m_Constraints.m_pData;
        if ( v13 == 0 )
          goto LABEL_37;
        while ( v12 < v13->m_Size )
        {
          while ( 1 )
          {
            v14 = v12++;
            operator delete(v13->m_Elements[v14].m_pParams);
            v13 = this->m_Constraints.m_pData;
            if ( v13 != 0 )
              break;
LABEL_37:
            if ( v12 >= 0 )
              goto LABEL_38;
          }
        }
LABEL_38:
        m_pData = this->m_ParentResources.m_pData;
      }
    }
  }
  if ( m_pData != 0 )
  {
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
    this->m_ParentResources.m_pData = 0;
  }
  if ( this->m_SurfaceProperties.m_pData != 0 )
  {
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
    this->m_SurfaceProperties.m_pData = 0;
  }
  if ( this->m_CollisionAttributes.m_pData != 0 )
  {
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
    this->m_CollisionAttributes.m_pData = 0;
  }
  if ( this->m_Joints.m_pData != 0 )
  {
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
    this->m_Joints.m_pData = 0;
  }
  if ( this->m_Constraints.m_pData != 0 )
  {
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
    this->m_Constraints.m_pData = 0;
  }
  this->m_Parts.m_Size = 0;
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, this->m_Parts.m_Memory.m_pMemory);
  v11 = (this->m_BindPose.m_nGrowSize & 0xC0000000) == 0;
  this->m_Parts.m_Memory.m_nCurAllocSize = 0;
  this->m_Parts.m_Memory.m_pMemory = 0;
  if ( v11 )
    CUtlMemory<matrix3x4_t,int>::Purge(&this->m_BindPose);
  if ( (this->m_BoneParents.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<unsigned short,int>::Purge(&this->m_BoneParents);
  if ( (this->m_IndexHash.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<unsigned short,int>::Purge(&this->m_IndexHash);
  if ( (this->m_IndexNames.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<unsigned short,int>::Purge(&this->m_IndexNames);
  if ( (this->m_BonesHash.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<unsigned int,int>::Purge(&this->m_BonesHash);
  if ( this->m_BoneNames.m_pData != 0 )
  {
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
    this->m_BoneNames.m_pData = 0;
  }
}


// CPhysAggregateData::AddRef  (line 68, @0x00000000031a9ae0, libserver.so)  // inlines: ThreadInterlockedIncrement, operator++
// callers: CPhysicsGameSystem::CreateDebugRenderBuffers, CModel::AcquirePhysicsRef, CreateSphereAggregateData, CreateBoxAggregateData
void __fastcall CPhysAggregateData::AddRef(const CPhysAggregateData *const this)
{
  _InterlockedAdd(this, 1u);
}


// CPhysAggregateData::Release  (line 75, @0x00000000031a9af0, libserver.so)  // inlines: MemAlloc_FreeAlignedFunc, operator delete
// calls: CPhysAggregateData::~CPhysAggregateData
// callers: Physics_CreateAggregate, CPhysicsGameSystem::CreateDebugRenderBuffers, CPhysicsGameSystem::SetPhysGroupMask, CBaseAnimating::DrawVCollide, CBaseEntity::DrawVCollide, CModel::AcquirePhysicsRef, CModelBuilder::AddPhysicsBody, CreateSphereAggregateData, CreateBoxAggregateData, CPhysAggregateData::~CPhysAggregateData, SplitAggregateDataSinglePiece, SubAggregateData (15 total)
void __fastcall CPhysAggregateData::Release(const CPhysAggregateData *const this)
{
  if ( _InterlockedSub(this, 1u) == 0 )
  {
    if ( (this->m_nFlags & 0x100) != 0 )
    {
      CPhysAggregateData::~CPhysAggregateData(this);
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, *((this & 0xFFFFFFFFFFFFFFF8LL) - 8));
    }
    else
    {
      CPhysAggregateData::~CPhysAggregateData(this);
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, this);
    }
  }
}


// ShallowCopy<CUtlVectorUltraConservative<char const*> >  (line 98, @0x00000000031aeb40, libserver.so)  // inlines: Alloc, Count, EnsureCapacity, EnsureCount, Free, GetSize, Realloc, RemoveAll, operator[]
// callers: CPhysAggregateData::CPhysAggregateData
void __fastcall ShallowCopy<CUtlVectorUltraConservative<char const*,CUtlVectorUltraConservativeAllocator>>(
        CUtlVectorUltraConservative<char const*,CUtlVectorUltraConservativeAllocator> *const dst,
        const CUtlVectorUltraConservative<char const*,CUtlVectorUltraConservativeAllocator> *const src)
{
  CUtlVectorUltraConservative<char const*,CUtlVectorUltraConservativeAllocator>::Data_t *m_pData; // rdx
  int m_Size; // r13d
  int v6; // eax
  __int64 v7; // rcx
  CUtlVectorUltraConservative<char const*,CUtlVectorUltraConservativeAllocator>::Data_t *v8; // rsi
  unsigned __int64 v9; // r15
  CUtlVectorUltraConservative<char const*,CUtlVectorUltraConservativeAllocator>::Data_t *v10; // rax
  CUtlVectorUltraConservative<char const*,CUtlVectorUltraConservativeAllocator>::Data_t *v11; // rax

  m_pData = src->m_pData;
  if ( src->m_pData != 0 && (m_Size = m_pData->m_Size, m_pData->m_Size != 0) )
  {
    v8 = dst->m_pData;
    if ( dst->m_pData != 0 )
    {
      if ( m_Size > v8->m_Size )
      {
        v9 = 8LL * m_Size + 8;
        if ( v9 > (*(*g_pMemAlloc + 128LL))(g_pMemAlloc) )
        {
          v11 = (*(*g_pMemAlloc + 8LL))(g_pMemAlloc, dst->m_pData, v9);
          dst->m_pData = v11;
          v8 = v11;
        }
        else
        {
          v8 = dst->m_pData;
        }
      }
    }
    else if ( m_Size > 0 )
    {
      v10 = (**g_pMemAlloc)(g_pMemAlloc, 8LL * m_Size + 8);
      dst->m_pData = v10;
      v10->m_Size = 0;
      v8 = dst->m_pData;
    }
    v8->m_Size = m_Size;
    m_pData = src->m_pData;
  }
  else if ( dst->m_pData != 0 )
  {
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
    dst->m_pData = 0;
    m_pData = src->m_pData;
  }
  v6 = 0;
  while ( m_pData != 0 )
  {
    if ( v6 >= m_pData->m_Size )
      return;
LABEL_7:
    v7 = v6++;
    dst->m_pData->m_Elements[v7] = m_pData->m_Elements[v7];
    m_pData = src->m_pData;
  }
  if ( v6 < 0 )
    goto LABEL_7;
}


// ShallowCopy<CUtlVectorUltraConservative<RnCollisionAttr_t> >  (line 98, @0x00000000031aec60, libserver.so)  // inlines: Alloc, Construct<RnCollisionAttr_t>, Count, EnsureCapacity, EnsureCount, Free, GetSize, Realloc, RemoveAll, RnCollisionAttr_t
// callers: CPhysAggregateData::CPhysAggregateData
void __fastcall ShallowCopy<CUtlVectorUltraConservative<RnCollisionAttr_t,CUtlVectorUltraConservativeAllocator>>(
        CUtlVectorUltraConservative<RnCollisionAttr_t,CUtlVectorUltraConservativeAllocator> *const dst,
        const CUtlVectorUltraConservative<RnCollisionAttr_t,CUtlVectorUltraConservativeAllocator> *const src)
{
  CUtlVectorUltraConservative<RnCollisionAttr_t,CUtlVectorUltraConservativeAllocator>::Data_t *m_pData; // rdx
  int m_Size; // r15d
  CUtlVectorUltraConservative<RnCollisionAttr_t,CUtlVectorUltraConservativeAllocator>::Data_t *v6; // rsi
  int v7; // r13d
  unsigned __int64 v8; // r14
  CUtlVectorUltraConservative<RnCollisionAttr_t,CUtlVectorUltraConservativeAllocator>::Data_t *v9; // rax
  RnCollisionAttr_t *v10; // rdx
  int v11; // r8d
  __int64 v12; // rcx
  _QWORD *v13; // rdx
  _QWORD *v14; // rax
  CUtlVectorUltraConservative<RnCollisionAttr_t,CUtlVectorUltraConservativeAllocator>::Data_t *v15; // rax

  m_pData = src->m_pData;
  if ( src->m_pData == 0 || (m_Size = m_pData->m_Size, m_pData->m_Size == 0) )
  {
    if ( dst->m_pData != 0 )
    {
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
      dst->m_pData = 0;
      m_pData = src->m_pData;
    }
    goto LABEL_13;
  }
  v6 = dst->m_pData;
  if ( dst->m_pData != 0 )
  {
    v7 = v6->m_Size;
    if ( m_Size > v6->m_Size )
    {
      v8 = 32LL * m_Size + 8;
      if ( v8 > (*(*g_pMemAlloc + 128LL))(g_pMemAlloc) )
      {
        v9 = (*(*g_pMemAlloc + 8LL))(g_pMemAlloc, dst->m_pData, v8);
        dst->m_pData = v9;
      }
      else
      {
        v9 = dst->m_pData;
      }
LABEL_7:
      v9->m_Size = m_Size;
      while ( 1 )
      {
        v10 = &dst->m_pData->m_Elements[v7];
        if ( dst->m_pData + 4 * v7 != -8LL )
        {
          dst->m_pData->m_Elements[v7].m_nInteractsAs = 0;
          v10->m_nInteractsWith = 0;
          v10->m_nInteractsExclude = 0;
          v10->m_nCollisionGroup = 0;
          v10->m_nCollisionFunctionMask = 7;
          v10->m_nEntityId = 0;
          v10->m_nHierarchyId = 0;
        }
        if ( m_Size <= v7 + 1 )
          break;
        ++v7;
      }
      m_pData = src->m_pData;
      goto LABEL_13;
    }
  }
  else if ( m_Size > 0 )
  {
    v7 = 0;
    v15 = (**g_pMemAlloc)(g_pMemAlloc, 32LL * m_Size + 8);
    dst->m_pData = v15;
    v15->m_Size = 0;
    v9 = dst->m_pData;
    goto LABEL_7;
  }
  v6->m_Size = m_Size;
  m_pData = src->m_pData;
LABEL_13:
  v11 = 0;
  while ( m_pData != 0 )
  {
    if ( v11 >= m_pData->m_Size )
      return;
LABEL_15:
    v12 = v11++;
    v12 *= 32;
    v13 = (m_pData + v12);
    v14 = (dst->m_pData + v12);
    v14[1] = v13[1];
    v14[2] = v13[2];
    v14[3] = v13[3];
    v14[4] = v13[4];
    m_pData = src->m_pData;
  }
  if ( v11 < 0 )
    goto LABEL_15;
}


// ShallowCopy<CUtlVectorUltraConservative<const CPhysSurfaceProperties*> >  (line 98, @0x00000000031aee30, libserver.so)  // inlines: Alloc, Count, EnsureCapacity, EnsureCount, Free, GetSize, Realloc, RemoveAll, operator[]
// callers: CPhysAggregateData::CPhysAggregateData
void __fastcall ShallowCopy<CUtlVectorUltraConservative<CPhysSurfaceProperties const*,CUtlVectorUltraConservativeAllocator>>(
        CUtlVectorUltraConservative<const CPhysSurfaceProperties*,CUtlVectorUltraConservativeAllocator> *const dst,
        const CUtlVectorUltraConservative<const CPhysSurfaceProperties*,CUtlVectorUltraConservativeAllocator> *const src)
{
  CUtlVectorUltraConservative<const CPhysSurfaceProperties*,CUtlVectorUltraConservativeAllocator>::Data_t *m_pData; // rdx
  int m_Size; // r13d
  int v6; // eax
  __int64 v7; // rcx
  CUtlVectorUltraConservative<const CPhysSurfaceProperties*,CUtlVectorUltraConservativeAllocator>::Data_t *v8; // rsi
  unsigned __int64 v9; // r15
  CUtlVectorUltraConservative<const CPhysSurfaceProperties*,CUtlVectorUltraConservativeAllocator>::Data_t *v10; // rax
  CUtlVectorUltraConservative<const CPhysSurfaceProperties*,CUtlVectorUltraConservativeAllocator>::Data_t *v11; // rax

  m_pData = src->m_pData;
  if ( src->m_pData != 0 && (m_Size = m_pData->m_Size, m_pData->m_Size != 0) )
  {
    v8 = dst->m_pData;
    if ( dst->m_pData != 0 )
    {
      if ( m_Size > v8->m_Size )
      {
        v9 = 8LL * m_Size + 8;
        if ( v9 > (*(*g_pMemAlloc + 128LL))(g_pMemAlloc) )
        {
          v11 = (*(*g_pMemAlloc + 8LL))(g_pMemAlloc, dst->m_pData, v9);
          dst->m_pData = v11;
          v8 = v11;
        }
        else
        {
          v8 = dst->m_pData;
        }
      }
    }
    else if ( m_Size > 0 )
    {
      v10 = (**g_pMemAlloc)(g_pMemAlloc, 8LL * m_Size + 8);
      dst->m_pData = v10;
      v10->m_Size = 0;
      v8 = dst->m_pData;
    }
    v8->m_Size = m_Size;
    m_pData = src->m_pData;
  }
  else if ( dst->m_pData != 0 )
  {
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
    dst->m_pData = 0;
    m_pData = src->m_pData;
  }
  v6 = 0;
  while ( m_pData != 0 )
  {
    if ( v6 >= m_pData->m_Size )
      return;
LABEL_7:
    v7 = v6++;
    dst->m_pData->m_Elements[v7] = m_pData->m_Elements[v7];
    m_pData = src->m_pData;
  }
  if ( v6 < 0 )
    goto LABEL_7;
}


// CPhysAggregateData::CPhysAggregateData  (line 108, @0x00000000031ab990, libserver.so)  // inlines: AddMultipleToTail, AddRef, CInterlockedIntT, CUtlMemory, CUtlMemoryConservative, CUtlVectorBase, CUtlVectorConservative, CUtlVectorUltraConservative, Count, EnsureCapacity, EnsureCount, Free, InsertMultipleBefore, Purge, RememberAllocSize, RemoveAll, SetExternalBuffer, ShallowCopy<CUtlVectorConservative<const VPhysXBodyPart_t*> >, ThreadInterlockedIncrement, memcpy, operator++, operator[], ~CUtlMemory, ~CUtlVectorBase, ~CUtlVectorConservative, ~CUtlVectorUltraConservative
// calls: CPhysAggregateData::Init, CUtlVectorUltraConservative<const CPhysAggregateData*, CUtlVectorUltraConservativeAllocator>::EnsureCapacity, CUtlVectorBase<const VPhysXBodyPart_t*, CUtlMemoryConservative<const VPhysXBodyPart_t*> >::SetCount, CUtlVectorUltraConservative<char const*, CUtlVectorUltraConservativeAllocator>::EnsureCount, CUtlMemory<short unsigned int, int>::EnsureCapacity, CUtlVectorUltraConservative<const CPhysSurfaceProperties*, CUtlVectorUltraConservativeAllocator>::EnsureCount, CUtlVectorUltraConservative<RnCollisionAttr_t, CUtlVectorUltraConservativeAllocator>::EnsureCount, CUtlMemory<matrix3x4_t, int>::Purge, ShallowCopy<CUtlVectorUltraConservative<char const*> >, CUtlMemory<short unsigned int, int>::Purge, ShallowCopy<CUtlVectorUltraConservative<RnCollisionAttr_t> >, ShallowCopy<CUtlVectorUltraConservative<const CPhysSurfaceProperties*> > (18 total)
// callers: CombineAggregateData
void __fastcall CPhysAggregateData::CPhysAggregateData(
        CPhysAggregateData *const this,
        const CPhysAggregateData **ppAggregateData,
        uint nAggregateShapeCount)
{
  const CPhysAggregateData **v5; // rdx
  int v6; // eax
  const CPhysAggregateData *v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // rdx
  const CPhysAggregateData *v10; // r14
  int v11; // r13d
  uint v12; // r11d
  int v13; // esi
  unsigned int v14; // r8d
  int v15; // r9d
  int v16; // edi
  unsigned int v17; // r12d
  CUtlVectorUltraConservative<RnCollisionAttr_t,CUtlVectorUltraConservativeAllocator>::Data_t *m_pData; // rbx
  CUtlVectorUltraConservative<const CPhysSurfaceProperties*,CUtlVectorUltraConservativeAllocator>::Data_t *v19; // rbx
  int v20; // ebx
  CUtlVectorUltraConservative<CPhysConstraintData,CUtlVectorUltraConservativeAllocator>::Data_t *v21; // rax
  int v22; // eax
  const CPhysAggregateData *v23; // rax
  int m_Size; // ebx
  int m_nAllocationCount; // r14d
  uint32 m_nGrowSize; // eax
  matrix3x4_t *v27; // rsi
  matrix3x4_t *v28; // rax
  uint32 v29; // eax
  unsigned int *v30; // rsi
  __int64 v31; // rax
  unsigned int *v32; // rax
  int v33; // r13d
  int v34; // r8d
  int v35; // r9d
  int v36; // edx
  const CPhysAggregateData *v37; // rax
  const CPhysSurfaceProperties *v38; // rcx
  CUtlVectorUltraConservative<const CPhysSurfaceProperties*,CUtlVectorUltraConservativeAllocator>::Data_t *v39; // rcx
  int j; // r12d
  int v41; // ecx
  __int64 v42; // rdi
  CUtlVectorUltraConservative<RnCollisionAttr_t,CUtlVectorUltraConservativeAllocator>::Data_t *v43; // rsi
  CUtlVectorUltraConservative<RnCollisionAttr_t,CUtlVectorUltraConservativeAllocator>::Data_t *v44; // rdx
  CUtlVectorUltraConservative<RnCollisionAttr_t,CUtlVectorUltraConservativeAllocator>::Data_t *v45; // rsi
  int v46; // edx
  int v47; // edx
  int v48; // r14d
  int v49; // esi
  int v50; // edx
  unsigned __int16 *v51; // rcx
  unsigned __int16 v52; // di
  int v53; // esi
  int v54; // edx
  unsigned __int16 v55; // di
  __int64 v56; // rsi
  int v57; // edx
  int v58; // r12d
  __int64 v59; // r14
  __int64 v60; // rbx
  __int64 v61; // r11
  __int64 v62; // r10
  __int64 v63; // r9
  __int64 v64; // r8
  matrix3x4_t *v65; // rsi
  int i; // ecx
  unsigned int v67; // r8d
  int v68; // edi
  int v69; // r11d
  int v70; // esi
  unsigned __int16 *v71; // rcx
  int v72; // r12d
  unsigned __int16 v73; // r8
  unsigned __int16 v74; // di
  __int64 v75; // rdi
  __int64 v76; // rdx
  int k; // esi
  matrix3x4_t *v78; // r8
  __int64 v79; // r9
  matrix3x4_t *v80; // rcx
  __int64 v81; // r8
  int v82; // r12d
  matrix3x4_t *m_pMemory; // r13
  int v84; // r12d
  unsigned int *v85; // r13
  bool v86; // zf
  int v87; // r12d
  unsigned __int16 *v88; // r13
  int v89; // r12d
  unsigned __int16 *v90; // r13
  int v91; // r12d
  int v92; // ecx
  __int64 v93; // rax
  int v94; // edx
  __int64 v95; // r9
  int v96; // edi
  const CPhysAggregateData *v97; // r8
  int v98; // edx
  __int64 v99; // rsi
  CUtlVectorUltraConservative<CPhysConstraintData,CUtlVectorUltraConservativeAllocator>::Data_t *v100; // rax
  CUtlVectorUltraConservative<CPhysConstraintData,CUtlVectorUltraConservativeAllocator>::Data_t *v101; // rcx
  CUtlVectorUltraConservative<CPhysConstraintData,CUtlVectorUltraConservativeAllocator>::Data_t *v102; // rcx
  unsigned int *v103; // r12
  unsigned int *v104; // rax
  matrix3x4_t *v105; // r12
  matrix3x4_t *v106; // rax
  uint nCollisionAttributeCount; // [rsp+Ch] [rbp-64h]
  CUtlMemory<matrix3x4_t,int> *p_m_BindPose; // [rsp+10h] [rbp-60h]
  CUtlMemory<unsigned int,int> *p_m_BonesHash; // [rsp+18h] [rbp-58h]
  int v110; // [rsp+18h] [rbp-58h]
  CUtlMemory<short unsigned int,int> *nCollisionAttributeIndex; // [rsp+28h] [rbp-48h]
  int nCollisionAttributeIndexa; // [rsp+28h] [rbp-48h]
  CUtlMemory<short unsigned int,int> *p_m_IndexHash; // [rsp+30h] [rbp-40h]
  CUtlMemory<short unsigned int,int> *v115; // [rsp+30h] [rbp-40h]
  int nSurfacePropertyIndex; // [rsp+3Ch] [rbp-34h]
  int nSurfacePropertyIndexa; // [rsp+3Ch] [rbp-34h]
  int nSurfacePropertyIndexb; // [rsp+3Ch] [rbp-34h]

  p_m_BonesHash = &this->m_BonesHash;
  p_m_IndexHash = &this->m_IndexHash;
  nCollisionAttributeIndex = &this->m_BoneParents;
  this->m_nRefCounter.m_value = 0;
  this->m_BoneNames.m_pData = 0;
  this->m_BonesHash.m_pMemory = 0;
  this->m_BonesHash.m_nAllocationCount = 0;
  this->m_BonesHash.m_nGrowSize = 0;
  this->m_IndexNames.m_pMemory = 0;
  this->m_IndexNames.m_nAllocationCount = 0;
  this->m_IndexNames.m_nGrowSize = 0;
  this->m_IndexHash.m_pMemory = 0;
  this->m_IndexHash.m_nAllocationCount = 0;
  this->m_IndexHash.m_nGrowSize = 0;
  this->m_BoneParents.m_pMemory = 0;
  this->m_BoneParents.m_nAllocationCount = 0;
  this->m_BoneParents.m_nGrowSize = 0;
  p_m_BindPose = &this->m_BindPose;
  this->m_BindPose.m_pMemory = 0;
  this->m_BindPose.m_nAllocationCount = 0;
  this->m_BindPose.m_nGrowSize = 0;
  this->m_Parts.m_Size = 0;
  this->m_Parts.m_Memory.m_pMemory = 0;
  this->m_Parts.m_Memory.m_nCurAllocSize = 0;
  this->m_Constraints.m_pData = 0;
  this->m_Joints.m_pData = 0;
  this->m_CollisionAttributes.m_pData = 0;
  this->m_SurfaceProperties.m_pData = 0;
  this->m_ParentResources.m_pData = 0;
  CPhysAggregateData::Init(this);
  if ( nAggregateShapeCount == 0 )
  {
    if ( this->m_ParentResources.m_pData != 0 )
    {
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
      this->m_ParentResources.m_pData = 0;
    }
    return;
  }
  CUtlVectorUltraConservative<CPhysAggregateData const*,CUtlVectorUltraConservativeAllocator>::EnsureCapacity(
    &this->m_ParentResources,
    nAggregateShapeCount);
  this->m_ParentResources.m_pData->m_Size = nAggregateShapeCount;
  v5 = ppAggregateData;
  v6 = 0;
  do
  {
    _InterlockedAdd(*v5, 1u);
    v7 = *v5;
    v8 = v6++;
    ++v5;
    this->m_ParentResources.m_pData->m_Elements[v8] = v7;
  }
  while ( v6 != nAggregateShapeCount );
  v9 = 0;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  do
  {
    v23 = ppAggregateData[v9];
    m_Size = v23->m_Parts.m_Size;
    if ( m_Size == 0 )
      goto LABEL_12;
    m_nAllocationCount = v23->m_BonesHash.m_nAllocationCount;
    ++v17;
    if ( m_nAllocationCount != 0 )
    {
      m_pData = v23->m_CollisionAttributes.m_pData;
      v15 += m_nAllocationCount;
      if ( m_pData != 0 )
      {
LABEL_9:
        v12 += m_pData->m_Size;
        v19 = v23->m_SurfaceProperties.m_pData;
        if ( v19 == 0 )
          goto LABEL_20;
        goto LABEL_10;
      }
    }
    else
    {
      v14 += m_Size;
      m_pData = v23->m_CollisionAttributes.m_pData;
      if ( m_pData != 0 )
        goto LABEL_9;
    }
    v19 = v23->m_SurfaceProperties.m_pData;
    if ( v19 == 0 )
    {
LABEL_20:
      v20 = 0;
      goto LABEL_11;
    }
LABEL_10:
    v20 = v19->m_Size;
LABEL_11:
    v11 += v20;
    v10 = ppAggregateData[v9];
LABEL_12:
    v21 = v23->m_Constraints.m_pData;
    if ( v21 != 0 )
    {
      v22 = v21->m_Size;
      if ( v22 != 0 )
      {
        ++v16;
        v13 += v22;
      }
    }
    ++v9;
  }
  while ( nAggregateShapeCount > v9 );
  nCollisionAttributeCount = v12;
  if ( v14 > 1 || (nSurfacePropertyIndex = 0, v15 != 0) )
  {
    nSurfacePropertyIndex = v15 + v14;
    if ( v16 == 0 )
      goto LABEL_23;
  }
  else if ( v16 == 0 )
  {
    goto LABEL_23;
  }
  CUtlVectorUltraConservative<CPhysConstraintData,CUtlVectorUltraConservativeAllocator>::EnsureCount(
    &this->m_Constraints,
    v13);
  v95 = 0;
  v96 = 0;
  while ( 2 )
  {
    v97 = ppAggregateData[v95];
    v98 = 0;
    while ( 2 )
    {
      v102 = v97->m_Constraints.m_pData;
      if ( v102 != 0 )
      {
        if ( v98 >= v102->m_Size )
          break;
      }
      else if ( v98 >= 0 )
      {
        break;
      }
      v99 = v98;
      v100 = this->m_Constraints.m_pData;
      ++v98;
      v101 = v102 + 2 * v99;
      v100->m_Elements[0].m_pParams = v101->m_Elements[0].m_pParams;
      v100->m_Elements[0].m_nChild = v101->m_Elements[0].m_nChild + v96;
      v100->m_Elements[0].m_nParent = v101->m_Elements[0].m_nParent + v96;
      v100->m_Elements[0].m_nFlags = v101->m_Elements[0].m_nFlags;
      continue;
    }
    ++v95;
    v96 += v97->m_Parts.m_Size;
    if ( nAggregateShapeCount > v95 )
      continue;
    break;
  }
LABEL_23:
  if ( v17 <= 1 )
  {
    if ( v10 != 0 )
    {
      v82 = v10->m_BindPose.m_nAllocationCount;
      m_pMemory = v10->m_BindPose.m_pMemory;
      if ( (this->m_BindPose.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<matrix3x4_t,int>::Purge(p_m_BindPose);
      this->m_BindPose.m_pMemory = m_pMemory;
      this->m_BindPose.m_nAllocationCount = v82;
      this->m_BindPose.m_nGrowSize = -1073741824;
      ShallowCopy<CUtlVectorUltraConservative<char const*,CUtlVectorUltraConservativeAllocator>>(
        &this->m_BoneNames,
        &v10->m_BoneNames);
      v84 = v10->m_BonesHash.m_nAllocationCount;
      v85 = v10->m_BonesHash.m_pMemory;
      if ( (this->m_BonesHash.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<unsigned int,int>::Purge(p_m_BonesHash);
      v86 = (this->m_IndexHash.m_nGrowSize & 0xC0000000) == 0;
      this->m_BonesHash.m_pMemory = v85;
      this->m_BonesHash.m_nAllocationCount = v84;
      this->m_BonesHash.m_nGrowSize = -1073741824;
      v87 = v10->m_IndexHash.m_nAllocationCount;
      v88 = v10->m_IndexHash.m_pMemory;
      if ( v86 )
        CUtlMemory<unsigned short,int>::Purge(p_m_IndexHash);
      v86 = (this->m_BoneParents.m_nGrowSize & 0xC0000000) == 0;
      this->m_IndexHash.m_pMemory = v88;
      this->m_IndexHash.m_nAllocationCount = v87;
      this->m_IndexHash.m_nGrowSize = -1073741824;
      v89 = v10->m_BoneParents.m_nAllocationCount;
      v90 = v10->m_BoneParents.m_pMemory;
      if ( v86 )
        CUtlMemory<unsigned short,int>::Purge(nCollisionAttributeIndex);
      this->m_BoneParents.m_nAllocationCount = v89;
      v91 = this->m_Parts.m_Size;
      this->m_BoneParents.m_pMemory = v90;
      this->m_BoneParents.m_nGrowSize = -1073741824;
      v92 = v10->m_Parts.m_Size;
      if ( v92 > v91 )
      {
        nSurfacePropertyIndexb = v92 - v91;
        if ( v92 != v91 )
        {
          CUtlVectorBase<VPhysXBodyPart_t const*,CUtlMemoryConservative<VPhysXBodyPart_t const*>>::GrowVector(
            &this->m_Parts,
            v92 - v91);
          CUtlVectorBase<VPhysXBodyPart_t const*,CUtlMemoryConservative<VPhysXBodyPart_t const*>>::ShiftElementsRight(
            &this->m_Parts,
            v91,
            nSurfacePropertyIndexb);
          v92 = v10->m_Parts.m_Size;
        }
      }
      v93 = 0;
      v94 = 0;
      if ( v92 > 0 )
      {
        do
        {
          ++v94;
          this->m_Parts.m_Memory.m_pMemory[v93] = v10->m_Parts.m_Memory.m_pMemory[v93];
          ++v93;
        }
        while ( v94 < v10->m_Parts.m_Size );
      }
      ShallowCopy<CUtlVectorUltraConservative<RnCollisionAttr_t,CUtlVectorUltraConservativeAllocator>>(
        &this->m_CollisionAttributes,
        &v10->m_CollisionAttributes);
      ShallowCopy<CUtlVectorUltraConservative<CPhysSurfaceProperties const*,CUtlVectorUltraConservativeAllocator>>(
        &this->m_SurfaceProperties,
        &v10->m_SurfaceProperties);
    }
    return;
  }
  if ( nSurfacePropertyIndex > this->m_BindPose.m_nAllocationCount )
  {
    m_nGrowSize = this->m_BindPose.m_nGrowSize;
    if ( (m_nGrowSize & 0x40000000) == 0 )
    {
      if ( (m_nGrowSize & 0xC0000000) != 0 )
      {
        v105 = this->m_BindPose.m_pMemory;
        v106 = (**g_pMemAlloc)(g_pMemAlloc, 48LL * nSurfacePropertyIndex);
        this->m_BindPose.m_pMemory = v106;
        if ( v105 != 0 )
          memcpy(v106, v105, 48LL * this->m_BindPose.m_nAllocationCount);
        this->m_BindPose.m_nGrowSize &= 0x3FFFFFFFu;
      }
      else
      {
        v27 = this->m_BindPose.m_pMemory;
        if ( v27 != 0 )
          v28 = (*(*g_pMemAlloc + 8LL))(g_pMemAlloc, v27, 48LL * nSurfacePropertyIndex);
        else
          v28 = (**g_pMemAlloc)(g_pMemAlloc, 48LL * nSurfacePropertyIndex);
        this->m_BindPose.m_pMemory = v28;
      }
      this->m_BindPose.m_nAllocationCount = nSurfacePropertyIndex;
    }
  }
  CUtlVectorBase<VPhysXBodyPart_t const*,CUtlMemoryConservative<VPhysXBodyPart_t const*>>::SetCount(
    &this->m_Parts,
    nSurfacePropertyIndex);
  CUtlVectorUltraConservative<char const*,CUtlVectorUltraConservativeAllocator>::EnsureCount(
    &this->m_BoneNames,
    nSurfacePropertyIndex);
  if ( nSurfacePropertyIndex > this->m_BonesHash.m_nAllocationCount )
  {
    v29 = this->m_BonesHash.m_nGrowSize;
    if ( (v29 & 0x40000000) == 0 )
    {
      if ( (v29 & 0xC0000000) != 0 )
      {
        v103 = this->m_BonesHash.m_pMemory;
        v104 = (**g_pMemAlloc)(g_pMemAlloc, 4LL * nSurfacePropertyIndex);
        this->m_BonesHash.m_pMemory = v104;
        if ( v103 != 0 )
          memcpy(v104, v103, 4LL * this->m_BonesHash.m_nAllocationCount);
        this->m_BonesHash.m_nGrowSize &= 0x3FFFFFFFu;
      }
      else
      {
        v30 = this->m_BonesHash.m_pMemory;
        v31 = *g_pMemAlloc;
        if ( v30 != 0 )
          v32 = (*(v31 + 8))(g_pMemAlloc, v30, 4LL * nSurfacePropertyIndex);
        else
          v32 = (*v31)(g_pMemAlloc, 4LL * nSurfacePropertyIndex);
        this->m_BonesHash.m_pMemory = v32;
      }
      this->m_BonesHash.m_nAllocationCount = nSurfacePropertyIndex;
    }
  }
  if ( nSurfacePropertyIndex > this->m_IndexHash.m_nAllocationCount )
    CUtlMemory<unsigned short,int>::EnsureCapacity(p_m_IndexHash, nSurfacePropertyIndex);
  if ( nSurfacePropertyIndex > this->m_BoneParents.m_nAllocationCount )
    CUtlMemory<unsigned short,int>::EnsureCapacity(nCollisionAttributeIndex, nSurfacePropertyIndex);
  CUtlVectorUltraConservative<CPhysSurfaceProperties const*,CUtlVectorUltraConservativeAllocator>::EnsureCount(
    &this->m_SurfaceProperties,
    v11);
  CUtlVectorUltraConservative<RnCollisionAttr_t,CUtlVectorUltraConservativeAllocator>::EnsureCount(
    &this->m_CollisionAttributes,
    nCollisionAttributeCount);
  if ( nAggregateShapeCount == 0 )
    return;
  v115 = 0;
  v33 = 0;
  v34 = 0;
  v35 = 0;
  while ( 2 )
  {
    v36 = 0;
    v37 = ppAggregateData[v115];
    while ( 2 )
    {
      v39 = v37->m_SurfaceProperties.m_pData;
      j = v36 + v35;
      if ( v39 != 0 )
      {
        if ( v36 >= v39->m_Size )
          break;
      }
      else if ( v36 >= 0 )
      {
        break;
      }
      v38 = v39->m_Elements[v36++];
      this->m_SurfaceProperties.m_pData->m_Elements[j] = v38;
      continue;
    }
    v41 = 0;
    while ( 1 )
    {
      v45 = v37->m_CollisionAttributes.m_pData;
      v46 = v41 + v34;
      if ( v45 == 0 )
        break;
      if ( v41 >= v45->m_Size )
        goto LABEL_54;
LABEL_51:
      v42 = v41++;
      v43 = v45 + 4 * v42;
      v44 = this->m_CollisionAttributes.m_pData + 4 * v46;
      v44->m_Elements[0].m_nInteractsAs = v43->m_Elements[0].m_nInteractsAs;
      v44->m_Elements[0].m_nInteractsWith = v43->m_Elements[0].m_nInteractsWith;
      v44->m_Elements[0].m_nInteractsExclude = v43->m_Elements[0].m_nInteractsExclude;
      *&v44->m_Elements[0].m_nEntityId = *&v43->m_Elements[0].m_nEntityId;
    }
    if ( v41 < 0 )
      goto LABEL_51;
LABEL_54:
    nCollisionAttributeIndexa = v41 + v34;
    v47 = v37->m_BonesHash.m_nAllocationCount;
    v48 = v37->m_Parts.m_Size;
    if ( v47 != 0 )
    {
      for ( i = 0; i != v47; ++i )
      {
        v67 = v37->m_BonesHash.m_pMemory[i];
        v68 = i + v33;
        this->m_BonesHash.m_pMemory[v68] = v67;
      }
      v69 = v48 + v33;
      v70 = v33;
      v110 = j;
LABEL_69:
      if ( v70 != 0 )
      {
        while ( v47 != 0 )
        {
          v71 = this->m_IndexHash.m_pMemory;
          v72 = v70 - 1;
          --v69;
          v73 = v71[v70 - 1];
          v74 = v37->m_IndexHash.m_pMemory[v47 - 1];
          if ( this->m_BonesHash.m_pMemory[v73] <= v37->m_BonesHash.m_pMemory[v74] )
          {
            v71[v69] = v33 + v74;
            --v47;
            goto LABEL_69;
          }
          v71[v69] = v73;
          --v70;
          if ( v72 == 0 )
            break;
        }
      }
      for ( j = v110; v47 != 0; this->m_IndexHash.m_pMemory[v47] = v37->m_IndexHash.m_pMemory[v47] + v33 )
        --v47;
      v75 = 0;
      v76 = 0;
      for ( k = 0; k < v37->m_BonesHash.m_nAllocationCount; this->m_BoneParents.m_pMemory[v79] = v80 )
      {
        v78 = v37->m_BindPose.m_pMemory;
        v79 = v33;
        v80 = &this->m_BindPose.m_pMemory[v33];
        *&v80->m_flMatVal[0][0] = *&v78[v76].m_flMatVal[0][0];
        *&v80->m_flMatVal[0][2] = *&v78[v76].m_flMatVal[0][2];
        *&v80->m_flMatVal[1][0] = *&v78[v76].m_flMatVal[1][0];
        *&v80->m_flMatVal[1][2] = *&v78[v76].m_flMatVal[1][2];
        *&v80->m_flMatVal[2][0] = *&v78[v76].m_flMatVal[2][0];
        v81 = *&v78[v76++].m_flMatVal[2][2];
        *&v80->m_flMatVal[2][2] = v81;
        this->m_Parts.m_Memory.m_pMemory[v33] = v37->m_Parts.m_Memory.m_pMemory[v75];
        this->m_BoneNames.m_pData->m_Elements[v33] = v37->m_BoneNames.m_pData->m_Elements[k];
        LOWORD(v80) = v33++;
        LOWORD(v80) = v80 - k++;
        LOWORD(v80) = v37->m_BoneParents.m_pMemory[v75++] + v80;
      }
    }
    else
    {
      if ( v48 != 0 )
      {
        do
        {
          v49 = v47 + v33;
          ++v47;
          this->m_BonesHash.m_pMemory[v49] = 0;
        }
        while ( v48 != v47 );
      }
      v50 = v33 - 1;
      if ( v33 != 0 )
      {
        do
        {
          v51 = this->m_IndexHash.m_pMemory;
          v52 = v51[v50];
          v53 = v48 + v50--;
          v51[v53] = v52;
        }
        while ( v50 != -1 );
      }
      v54 = 0;
      if ( v48 != 0 )
      {
        do
        {
          v55 = v33 + v54;
          v56 = v54++;
          this->m_IndexHash.m_pMemory[v56] = v55;
        }
        while ( v48 != v54 );
        nSurfacePropertyIndexa = j;
        v57 = v33;
        v58 = v48 + v33;
        v59 = *&g_MatrixIdentity.m_flMatVal[0][0];
        v60 = *&g_MatrixIdentity.m_flMatVal[0][2];
        v61 = *&g_MatrixIdentity.m_flMatVal[1][0];
        v62 = *&g_MatrixIdentity.m_flMatVal[1][2];
        v63 = *&g_MatrixIdentity.m_flMatVal[2][0];
        v64 = *&g_MatrixIdentity.m_flMatVal[2][2];
        do
        {
          v65 = &this->m_BindPose.m_pMemory[v57];
          *&v65->m_flMatVal[0][0] = v59;
          *&v65->m_flMatVal[0][2] = v60;
          *&v65->m_flMatVal[1][0] = v61;
          *&v65->m_flMatVal[1][2] = v62;
          *&v65->m_flMatVal[2][0] = v63;
          *&v65->m_flMatVal[2][2] = v64;
          this->m_Parts.m_Memory.m_pMemory[v57] = v37->m_Parts.m_Memory.m_pMemory[v57 - v33];
          this->m_BoneNames.m_pData->m_Elements[v57] = 0;
          this->m_BoneParents.m_pMemory[v57] = v57;
          ++v57;
        }
        while ( v57 != v58 );
        j = nSurfacePropertyIndexa;
        v33 = v57;
      }
    }
    v115 = (v115 + 1);
    if ( nAggregateShapeCount > v115 )
    {
      v34 = nCollisionAttributeIndexa;
      v35 = j;
      continue;
    }
    break;
  }
}


// CPhysAggregateData::GetUsedGroupMask  (line 322, @0x00000000031a9e00, libserver.so)  // inlines: Count, GetUsedGroupMask
uint64 __fastcall CPhysAggregateData::GetUsedGroupMask(const CPhysAggregateData *const this)
{
  int v1; // edx
  uint64 result; // rax
  CUtlVectorUltraConservative<RnCollisionAttr_t,CUtlVectorUltraConservativeAllocator>::Data_t *m_pData; // rdi
  uint8 *p_m_nCollisionGroup; // rsi
  uint8 v5; // cl

  v1 = 0;
  result = 0;
  m_pData = this->m_CollisionAttributes.m_pData;
  p_m_nCollisionGroup = &m_pData->m_Elements[0].m_nCollisionGroup;
  while ( m_pData != 0 )
  {
    if ( v1 >= m_pData->m_Size )
      return result;
LABEL_3:
    v5 = *p_m_nCollisionGroup;
    ++v1;
    p_m_nCollisionGroup += 32;
    result |= 1LL << v5;
  }
  if ( v1 < 0 )
    goto LABEL_3;
  return result;
}


// CPhysAggregateData::GetUsedLayerMask  (line 333, @0x00000000031a9e50, libserver.so)  // inlines: Count, GetUsedLayerMask
uint64 __fastcall CPhysAggregateData::GetUsedLayerMask(const CPhysAggregateData *const this)
{
  int v1; // esi
  uint64 result; // rax
  CUtlVectorUltraConservative<RnCollisionAttr_t,CUtlVectorUltraConservativeAllocator>::Data_t *m_pData; // rdi
  CUtlVectorUltraConservative<RnCollisionAttr_t,CUtlVectorUltraConservativeAllocator>::Data_t *v4; // rcx

  v1 = 0;
  result = 0;
  m_pData = this->m_CollisionAttributes.m_pData;
  v4 = m_pData;
  while ( m_pData != 0 )
  {
    v4 += 4;
    if ( v1 >= m_pData->m_Size )
      return result;
LABEL_3:
    ++v1;
    result |= *(v4 - 1) | *(v4 - 3) | *(v4 - 2);
  }
  v4 += 4;
  if ( v1 < 0 )
    goto LABEL_3;
  return result;
}


// InitSurfaceProperties  (line 345, @0x00000000031a9ea0, libserver.so)  // inlines: Alloc, Count, EnsureCapacity, EnsureCount, Free, GetPtr, GetRawPtr, GetSize, Realloc, RemoveAll, ResolveOffset, operator[]
void __fastcall InitSurfaceProperties(
        const CResourceArray<unsigned int> *const surfacePropertyHashes,
        CUtlVectorUltraConservative<const CPhysSurfaceProperties*,CUtlVectorUltraConservativeAllocator> *const surfaceProperties)
{
  signed int m_nCount; // ebx
  __int64 v4; // r15
  __int64 v5; // r12
  signed int v6; // ebx
  char *v7; // rdx
  __int64 v8; // rsi
  CUtlVectorUltraConservative<const CPhysSurfaceProperties*,CUtlVectorUltraConservativeAllocator>::Data_t *v9; // r14
  __int64 v10; // rax
  __int64 v11; // rdx
  CUtlVectorUltraConservative<const CPhysSurfaceProperties*,CUtlVectorUltraConservativeAllocator>::Data_t *m_pData; // rsi
  unsigned __int64 v13; // r15
  CUtlVectorUltraConservative<const CPhysSurfaceProperties*,CUtlVectorUltraConservativeAllocator>::Data_t *v14; // rax
  CUtlVectorUltraConservative<const CPhysSurfaceProperties*,CUtlVectorUltraConservativeAllocator>::Data_t *v15; // rsi

  m_nCount = surfacePropertyHashes->m_nCount;
  if ( m_nCount != 0 )
  {
    m_pData = surfaceProperties->m_pData;
    if ( m_pData != 0 )
    {
      if ( m_nCount > m_pData->m_Size )
      {
        v13 = 8LL * m_nCount + 8;
        if ( v13 > (*(*g_pMemAlloc + 128LL))(g_pMemAlloc) )
        {
          v15 = (*(*g_pMemAlloc + 8LL))(g_pMemAlloc, surfaceProperties->m_pData, v13);
          surfaceProperties->m_pData = v15;
          v15->m_Size = m_nCount;
          goto LABEL_4;
        }
        m_pData = surfaceProperties->m_pData;
      }
    }
    else if ( m_nCount > 0 )
    {
      v14 = (**g_pMemAlloc)(g_pMemAlloc, 8LL * m_nCount + 8);
      surfaceProperties->m_pData = v14;
      v14->m_Size = 0;
      surfaceProperties->m_pData->m_Size = m_nCount;
      goto LABEL_4;
    }
    m_pData->m_Size = m_nCount;
  }
  else
  {
    if ( surfaceProperties->m_pData == 0 )
      return;
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
    surfaceProperties->m_pData = 0;
  }
LABEL_4:
  if ( surfacePropertyHashes->m_nCount > 0 )
  {
    v4 = (*(g_pVPhysics2->_vptr_IAppSystem + 18))(g_pVPhysics2);
    if ( surfacePropertyHashes->m_nCount > 0 )
    {
      v5 = 0;
      v6 = 0;
      do
      {
        v7 = 0;
        if ( surfacePropertyHashes->m_nOffset != 0 )
          v7 = surfacePropertyHashes + surfacePropertyHashes->m_nOffset;
        v8 = *&v7[v5];
        v5 += 4;
        v9 = surfaceProperties->m_pData;
        v10 = (*(*v4 + 16LL))(v4, v8, 0);
        v11 = v6++;
        v9->m_Elements[v11] = v10;
      }
      while ( v6 < surfacePropertyHashes->m_nCount );
    }
  }
}


// CombineAggregateData  (line 363, @0x00000000031ac540, libserver.so)  // inlines: AddRef, AddRef<CPhysAggregateData>, CSmartPtr, ConvertToExternalMemory, Purge, Purge_FixedGrowable, Release<CPhysAggregateData>, RemoveAll, ThreadInterlockedIncrement, operator new, operator++, operator=, ~CFeModelCombiner, ~CUtlMemory, ~CUtlMemoryFixedGrowable, ~CUtlMemoryFixedGrowable_Base, ~CUtlVector, ~CUtlVectorBase, ~CUtlVectorFixedGrowable
// calls: CFeModelCombiner::CFeModelCombiner, CFeModelCombiner::Add, CFeModelCombiner::GetDataSize, CPhysAggregateData::CPhysAggregateData, CFeModelCombiner::Combine, CPhysAggregateData::Release, CUtlMemory<CFeModelCombiner::Model_t, int>::Purge, CUtlMemory<short unsigned int, int>::Purge, __stack_chk_fail, CUtlVectorBase<CFeModelCombiner::Model_t, CUtlMemoryFixedGrowable<CFeModelCombiner::Model_t, 8ul, int> >::~CUtlVectorBase, _Unwind_Resume
CSmartPtr<CPhysAggregateData,CRefCountAccessor> __fastcall CombineAggregateData(
        const CPhysAggregateData **a1,
        CPhysAggregateData **ppAggregateData,
        uint nAggregateShapeCount)
{
  const CPhysAggregateData **v5; // rbx
  __int64 DataSize; // r13
  CPhysAggregateData *v7; // rbx
  bool v8; // zf
  uint32 v9; // eax
  CPhysAggregateData *v10; // rbx
  const CPhysAggregateData *v11; // rdi
  CFeModelCombiner_0 feComb; // [rsp+10h] [rbp-140h] BYREF
  unsigned __int64 v15; // [rsp+118h] [rbp-38h]

  v15 = __readfsqword(0x28u);
  if ( nAggregateShapeCount != 0 )
  {
    if ( nAggregateShapeCount == 1 )
    {
      v10 = *ppAggregateData;
      *a1 = 0;
      if ( v10 != 0 )
      {
        _InterlockedAdd(v10, 1u);
        v11 = *a1;
        if ( v11 != 0 )
          CPhysAggregateData::Release(v11);
        *a1 = v10;
      }
    }
    else
    {
      CFeModelCombiner::CFeModelCombiner(&feComb);
      if ( nAggregateShapeCount != 0 )
      {
        v5 = ppAggregateData;
        do
          CFeModelCombiner::Add(&feComb, (*v5++)->m_pFeModel);
        while ( v5 != &ppAggregateData[nAggregateShapeCount] );
      }
      DataSize = CFeModelCombiner::GetDataSize(&feComb);
      v7 = (**g_pMemAlloc)(g_pMemAlloc, DataSize + 192);
      CPhysAggregateData::CPhysAggregateData(v7, ppAggregateData, nAggregateShapeCount);
      v7->m_pFeModel = CFeModelCombiner::Combine(&feComb, &v7[1], DataSize);
      *a1 = 0;
      _InterlockedAdd(v7, 1u);
      if ( *a1 != 0 )
        CPhysAggregateData::Release(*a1);
      v8 = (feComb.m_OldToNewNode.m_Memory.m_nGrowSize & 0xC0000000) == 0;
      *a1 = v7;
      feComb.m_OldToNewNode.m_Size = 0;
      if ( v8 )
      {
        CUtlMemory<unsigned short,int>::Purge(&feComb.m_OldToNewNode.m_Memory);
        if ( (feComb.m_OldToNewNode.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
          CUtlMemory<unsigned short,int>::Purge(&feComb.m_OldToNewNode.m_Memory);
      }
      feComb.m_Models.m_Size = 0;
      v9 = feComb.m_Models.m_Memory.m_nGrowSize & 0xC0000000;
      if ( feComb.m_Models.m_Memory.m_nAllocationCount < 0
        || feComb.m_Models.m_Memory.m_pMemory == &feComb.m_Models.m_Memory.m_FixedMemory )
      {
        if ( v9 == 0 )
          CUtlMemory<CFeModelCombiner::Model_t,int>::Purge(&feComb.m_Models.m_Memory);
      }
      else if ( feComb.m_Models.m_Memory.m_pMemory != 0 && v9 == 0 )
      {
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
      }
    }
  }
  else
  {
    *a1 = 0;
  }
  return a1;
}


// CPhysicsDataCombiner::Add  (line 394, @0x00000000031aa970, libserver.so)  // inlines: AddToTail, CopyConstruct<const CPhysAggregateData*>, Element, GetData, GrowMemory, Init, IsValid, operator=, operator[]
// calls: CModel::GetPhysicsHandle_Internal, CUtlMemory<const CPhysAggregateData*, int>::Grow
void __fastcall CPhysicsDataCombiner::Add(CPhysicsDataCombiner *const this, const CModel *pModel)
{
  const ResourceBindingBase_t *m_pBinding; // rax
  __int64 m_Size; // r12
  const CPhysAggregateData *m_pData; // r13
  int v6; // eax
  const CPhysAggregateData **v7; // rax
  HPhysAggregateData_Internal hModelPhysics; // [rsp+0h] [rbp-30h] BYREF

  CModel::GetPhysicsHandle_Internal(&hModelPhysics.m_pBinding, pModel);
  m_pBinding = hModelPhysics.m_pBinding;
  if ( hModelPhysics.m_pBinding != 0 )
  {
    m_Size = this->m_Data.m_Size;
    this->m_hLastPhys = hModelPhysics;
    m_pData = m_pBinding->m_pData;
    v6 = m_Size;
    if ( m_Size == this->m_Data.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<CPhysAggregateData const*,int>::Grow(&this->m_Data.m_Memory, 1);
      v6 = this->m_Data.m_Size;
    }
    this->m_Data.m_Size = v6 + 1;
    v7 = &this->m_Data.m_Memory.m_pMemory[m_Size];
    if ( v7 != 0 )
      *v7 = m_pData;
  }
}


// CPhysAggregateData::HasBreakablePartData  (line 406, @0x00000000031aa000, libserver.so)  // inlines: IsNull
// callers: SplitAggregateData
bool __fastcall CPhysAggregateData::HasBreakablePartData(const CPhysAggregateData *const this)
{
  int m_Size; // edx
  const VPhysXBodyPart_t **m_pMemory; // rax
  __int64 *v3; // rax
  __int64 *v4; // rcx
  __int64 v5; // rdx

  m_Size = this->m_Parts.m_Size;
  if ( m_Size <= 0 )
    return 0;
  m_pMemory = this->m_Parts.m_Memory.m_pMemory;
  if ( (*m_pMemory)->m_pBreakablePartData.m_nOffset == 0 )
  {
    v3 = (m_pMemory + 1);
    v4 = &v3[m_Size - 1];
    while ( v3 != v4 )
    {
      v5 = *v3++;
      if ( *(v5 + 48) != 0 )
        return 1;
    }
    return 0;
  }
  return 1;
}


// SplitAggregateDataSinglePiece  (line 418, @0x00000000031aa9e0, libserver.so)  // inlines: AddRef, AddRef<CPhysAggregateData>, AddToTail, CSmartPtr, CopyConstruct<CSmartPtr<CPhysAggregateData> >, Element, GrowMemory, Release<CPhysAggregateData>, ThreadInterlockedIncrement, operator++, operator=, operator[], ~CSmartPtr
// calls: CPhysAggregateData::Release, CUtlMemory<CSmartPtr<CPhysAggregateData, CRefCountAccessor>, int>::Grow, _Unwind_Resume
// callers: SplitAggregateData
void __fastcall SplitAggregateDataSinglePiece(
        const CPhysAggregateData *pCombined,
        uint nFlags,
        CUtlVector<CSmartPtr<CPhysAggregateData,CRefCountAccessor>,CUtlMemory<CSmartPtr<CPhysAggregateData,CRefCountAccessor>,int> > *pSplit)
{
  __int64 m_Size; // r13
  int v6; // eax
  CSmartPtr<CPhysAggregateData,CRefCountAccessor> *v7; // r12

  if ( (nFlags & 4) == 0 )
  {
    _InterlockedAdd(pCombined, 1u);
    if ( pCombined != 0 )
      _InterlockedAdd(pCombined, 1u);
    m_Size = pSplit->m_Size;
    v6 = pSplit->m_Size;
    if ( m_Size == pSplit->m_Memory.m_nAllocationCount )
    {
      CUtlMemory<CSmartPtr<CPhysAggregateData,CRefCountAccessor>,int>::Grow(&pSplit->m_Memory, 1);
      v6 = pSplit->m_Size;
    }
    pSplit->m_Size = v6 + 1;
    v7 = &pSplit->m_Memory.m_pMemory[m_Size];
    if ( v7 != 0 )
    {
      v7->m_pObj = 0;
      if ( pCombined == 0 )
        return;
      _InterlockedAdd(pCombined, 1u);
      if ( v7->m_pObj != 0 )
        CPhysAggregateData::Release(v7->m_pObj);
      v7->m_pObj = pCombined;
      goto LABEL_11;
    }
    if ( pCombined != 0 )
LABEL_11:
      CPhysAggregateData::Release(pCombined);
  }
}


// SetExternalBuffer<short unsigned int>  (line 431, @0x00000000031aeff0, libserver.so)  // inlines: Purge, SetExternalBuffer, Stride<short unsigned int>
// calls: CUtlMemory<short unsigned int, int>::Purge
// callers: SubAggregateData
void __fastcall SetExternalBuffer<unsigned short>(
        CBufferStrider *const buffer,
        CUtlMemory<short unsigned int,int> *mem,
        int nElements)
{
  unsigned __int16 *m_pBuffer; // r13

  m_pBuffer = buffer->m_pBuffer;
  buffer->m_pBuffer += 2 * nElements;
  if ( (mem->m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<unsigned short,int>::Purge(mem);
  mem->m_pMemory = m_pBuffer;
  mem->m_nAllocationCount = nElements;
  mem->m_nGrowSize = 0x40000000;
}


// SubAggregateData  (line 436, @0x00000000031ab1b0, libserver.so)  // inlines: AddRef, AddRef<CPhysAggregateData>, AddToTail, Alloc, AllocAligned, CBufferStrider, CSmartPtr, CUtlMemory, CUtlMemoryFixedGrowable, CUtlMemoryFixedGrowable_Base, CUtlVectorBase, CUtlVectorFixedGrowable, Construct<CPhysAggregateData>, ConvertToExternalMemory, CopyConstruct<int>, Count, Element, EnsureCapacity, EnsureCount, FillWithValue, Free, GetSize, GrowMemory, IsExternallyAllocated, MemAlloc_AllocAlignedFunc, Purge, Purge_FixedGrowable, Realloc, Release<CPhysAggregateData>, RemoveAll, SetExternalBuffer, SetExternalBuffer<matrix3x4_t>, SetExternalBuffer<unsigned int>, Stride<matrix3x4_t>, Stride<unsigned int>, ThreadInterlockedIncrement, operator++, operator=, operator[], ~CUtlMemory, ~CUtlMemoryFixedGrowable, ~CUtlMemoryFixedGrowable_Base, ~CUtlVectorBase, ~CUtlVectorFixedGrowable
// calls: CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 8ul, int> >::SetCount, CPhysAggregateData::CPhysAggregateData, SetExternalBuffer<short unsigned int>, CPhysAggregateData::Release, CUtlMemory<int, int>::Grow, CUtlMemory<int, int>::Purge, CUtlMemory<unsigned int, int>::Purge, CUtlMemory<matrix3x4_t, int>::Purge, CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 8ul, int> >::~CUtlVectorBase, _Unwind_Resume, __stack_chk_fail
// callers: SplitAggregateData
CSmartPtr<CPhysAggregateData,CRefCountAccessor> __fastcall SubAggregateData(
        const CPhysAggregateData **a1,
        CPhysAggregateData *pSource,
        uint16 *pParts,
        uint16 nPartCount,
        uint nFlags)
{
  int m_Size; // eax
  __int64 v9; // rdx
  int i; // eax
  int v11; // r14d
  __int64 j; // rax
  int v13; // ebx
  CUtlVectorUltraConservative<CPhysConstraintData,CUtlVectorUltraConservativeAllocator>::Data_t *m_pData; // rdx
  __int64 v15; // r13
  int *v16; // rax
  __int64 v17; // rax
  unsigned __int64 v18; // rbx
  int *v19; // rsi
  __int64 v20; // r13
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rdx
  __int64 v23; // rax
  int v24; // r13d
  int *v25; // rsi
  int v26; // eax
  __int64 v27; // r8
  int v28; // ecx
  __int64 v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rax
  CUtlVectorUltraConservative<CPhysConstraintData,CUtlVectorUltraConservativeAllocator>::Data_t *v32; // rdx
  bool v33; // cc
  uint8 *v34; // r13
  bool v35; // zf
  __int64 v36; // rdx
  unsigned __int64 v37; // rsi
  __int64 v38; // rdi
  __int64 v39; // rcx
  matrix3x4_t *v40; // rax
  int v41; // edi
  int v42; // esi
  unsigned __int64 v43; // rax
  int *m_pMemory; // rdx
  int v45; // ecx
  __int64 v46; // r9
  int v47; // edx
  __int64 v48; // r9
  bool v49; // sf
  uint32 m_nGrowSize; // edx
  uint32 v51; // eax
  uint32 v52; // eax
  _DWORD *v54; // rax
  _DWORD *v55; // rax
  __int64 v56; // rax
  int nSourcePartCount; // [rsp+14h] [rbp-DCh]
  uint8 *m_pBuffer; // [rsp+20h] [rbp-D0h]
  CUtlMemory<int,int> *v60; // [rsp+20h] [rbp-D0h]
  CBufferStrider buffer; // [rsp+30h] [rbp-C0h] BYREF
  CUtlVectorFixedGrowable<int,8ul> constrIndices; // [rsp+40h] [rbp-B0h] BYREF
  CUtlVectorFixedGrowable<int,8ul> partToSub; // [rsp+80h] [rbp-70h] BYREF
  unsigned __int64 v65; // [rsp+B8h] [rbp-38h]

  v65 = __readfsqword(0x28u);
  constrIndices.m_Memory.m_pMemory = &constrIndices.m_Memory.m_FixedMemory;
  partToSub.m_Memory.m_pMemory = &partToSub.m_Memory.m_FixedMemory;
  m_Size = pSource->m_Parts.m_Size;
  constrIndices.m_Size = 0;
  constrIndices.m_Memory.m_nAllocationCount = 8;
  constrIndices.m_Memory.m_nGrowSize = 0x80000000;
  partToSub.m_Size = 0;
  partToSub.m_Memory.m_nAllocationCount = 8;
  partToSub.m_Memory.m_nGrowSize = 0x80000000;
  nSourcePartCount = m_Size;
  CUtlVectorBase<int,CUtlMemoryFixedGrowable<int,8ul,int>>::SetCount(&partToSub, m_Size);
  v9 = 0;
  for ( i = 0; i < partToSub.m_Size; ++v9 )
  {
    ++i;
    partToSub.m_Memory.m_pMemory[v9] = -1;
  }
  v11 = nPartCount;
  for ( j = 0; nPartCount > j; ++j )
    partToSub.m_Memory.m_pMemory[pParts[j]] = j;
  v13 = 0;
  m_pData = pSource->m_Constraints.m_pData;
  while ( m_pData != 0 )
  {
    if ( v13 >= m_pData->m_Size )
      goto LABEL_17;
LABEL_7:
    if ( partToSub.m_Memory.m_pMemory[m_pData->m_Elements[v13].m_nChild] >= 0
      && partToSub.m_Memory.m_pMemory[m_pData->m_Elements[v13].m_nParent] >= 0 )
    {
      v15 = constrIndices.m_Size;
      if ( constrIndices.m_Size == constrIndices.m_Memory.m_nAllocationCount )
        CUtlMemory<int,int>::Grow(&constrIndices.m_Memory, 1);
      ++constrIndices.m_Size;
      v16 = &constrIndices.m_Memory.m_pMemory[v15];
      if ( v16 != 0 )
        *v16 = v13;
      m_pData = pSource->m_Constraints.m_pData;
    }
    ++v13;
  }
  if ( v13 < 0 )
    goto LABEL_7;
LABEL_17:
  v17 = (**g_pMemAlloc)(g_pMemAlloc, (72 * v11) + 215LL);
  v18 = (v17 + 23) & 0xFFFFFFFFFFFFFFF0LL;
  *(v18 - 8) = v17;
  CPhysAggregateData::CPhysAggregateData(v18, 0);
  *(v18 + 4) |= 0x100u;
  _InterlockedAdd(pSource, 1u);
  v19 = *(v18 + 168);
  if ( v19 != 0 )
  {
    v20 = *v19;
    v21 = (*(*g_pMemAlloc + 128LL))(g_pMemAlloc);
    v22 = 8LL * (v20 + 1) + 8;
    if ( v22 > v21 )
    {
      v23 = (*(*g_pMemAlloc + 8LL))(g_pMemAlloc, *(v18 + 168), v22);
      *(v18 + 168) = v23;
    }
    else
    {
      v23 = *(v18 + 168);
    }
  }
  else
  {
    v54 = (**g_pMemAlloc)(g_pMemAlloc, 16);
    *(v18 + 168) = v54;
    v20 = 0;
    *v54 = 0;
    v23 = *(v18 + 168);
  }
  *(v23 + 8 * v20 + 8) = pSource;
  ++**(v18 + 168);
  v24 = constrIndices.m_Size;
  v25 = *(v18 + 128);
  if ( constrIndices.m_Size != 0 )
  {
    if ( v25 != 0 )
    {
      if ( constrIndices.m_Size > *v25 )
      {
        v60 = (16LL * constrIndices.m_Size + 8);
        if ( v60 > (*(*g_pMemAlloc + 128LL))(g_pMemAlloc) )
        {
          v56 = (*(*g_pMemAlloc + 8LL))(g_pMemAlloc, *(v18 + 128), v60);
          *(v18 + 128) = v56;
          v25 = v56;
        }
        else
        {
          v25 = *(v18 + 128);
        }
      }
    }
    else if ( constrIndices.m_Size > 0 )
    {
      v55 = (**g_pMemAlloc)(g_pMemAlloc, 16LL * constrIndices.m_Size + 8);
      *(v18 + 128) = v55;
      *v55 = 0;
      v25 = *(v18 + 128);
    }
    *v25 = v24;
    v26 = constrIndices.m_Size;
LABEL_23:
    buffer.m_pBuffer = (v18 + 192);
    if ( v26 <= 0 )
    {
      m_pBuffer = (v18 + 192);
    }
    else
    {
      v27 = 0;
      v28 = 0;
      do
      {
        v29 = constrIndices.m_Memory.m_pMemory[v27];
        v30 = v28++;
        ++v27;
        v31 = *(v18 + 128) + 16 * v30;
        v32 = pSource->m_Constraints.m_pData + 2 * v29;
        *(v31 + 16) = v32->m_Elements[0].m_pParams;
        *(v31 + 8) = v32->m_Elements[0].m_nFlags;
        v33 = constrIndices.m_Size <= v28;
        *(v31 + 14) = partToSub.m_Memory.m_pMemory[v32->m_Elements[0].m_nChild];
        *(v31 + 12) = partToSub.m_Memory.m_pMemory[v32->m_Elements[0].m_nParent];
      }
      while ( !v33 );
      m_pBuffer = buffer.m_pBuffer;
    }
  }
  else
  {
    if ( v25 != 0 )
    {
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
      v26 = constrIndices.m_Size;
      *(v18 + 128) = 0;
      goto LABEL_23;
    }
    m_pBuffer = (v18 + 192);
  }
  v34 = &m_pBuffer[48 * nPartCount];
  v35 = (*(v18 + 100) & 0xC0000000) == 0;
  buffer.m_pBuffer = v34;
  if ( v35 )
  {
    CUtlMemory<matrix3x4_t,int>::Purge((v18 + 88));
    v34 = buffer.m_pBuffer;
  }
  *(v18 + 96) = v11;
  v35 = (*(v18 + 36) & 0xC0000000) == 0;
  *(v18 + 100) = 0x40000000;
  *(v18 + 88) = m_pBuffer;
  buffer.m_pBuffer = &v34[4 * nPartCount];
  if ( v35 )
    CUtlMemory<unsigned int,int>::Purge((v18 + 24));
  *(v18 + 24) = v34;
  *(v18 + 32) = v11;
  *(v18 + 36) = 0x40000000;
  SetExternalBuffer<unsigned short>(&buffer, (v18 + 40), v11);
  SetExternalBuffer<unsigned short>(&buffer, (v18 + 56), v11);
  SetExternalBuffer<unsigned short>(&buffer, (v18 + 72), v11);
  if ( v11 != 0 )
  {
    v36 = 0;
    v37 = 0;
    do
    {
      v38 = pParts[v37 / 2];
      v39 = *(v18 + 88);
      v40 = &pSource->m_BindPose.m_pMemory[v38];
      *(v39 + v36) = *&v40->m_flMatVal[0][0];
      *(v39 + v36 + 8) = *&v40->m_flMatVal[0][2];
      *(v39 + v36 + 16) = *&v40->m_flMatVal[1][0];
      *(v39 + v36 + 24) = *&v40->m_flMatVal[1][2];
      *(v39 + v36 + 32) = *&v40->m_flMatVal[2][0];
      *(v39 + v36 + 40) = *&v40->m_flMatVal[2][2];
      v36 += 48;
      *(*(v18 + 24) + 2 * v37) = pSource->m_BonesHash.m_pMemory[v38];
      *(*(v18 + 72) + v37) = partToSub.m_Memory.m_pMemory[pSource->m_BoneParents.m_pMemory[v38]];
      v37 += 2LL;
    }
    while ( v37 != 2LL * (v11 - 1) + 2 );
  }
  if ( nSourcePartCount > 0 )
  {
    v41 = 0;
    v42 = 0;
    v43 = 0;
    do
    {
      m_pMemory = partToSub.m_Memory.m_pMemory;
      v45 = partToSub.m_Memory.m_pMemory[pSource->m_IndexHash.m_pMemory[v43 / 2]];
      if ( v45 >= 0 )
      {
        v46 = v42++;
        *(*(v18 + 56) + 2 * v46) = v45;
        m_pMemory = partToSub.m_Memory.m_pMemory;
      }
      v47 = m_pMemory[pSource->m_IndexNames.m_pMemory[v43 / 2]];
      if ( v47 >= 0 )
      {
        v48 = v41++;
        *(*(v18 + 40) + 2 * v48) = v47;
      }
      v43 += 2LL;
    }
    while ( v43 != 2LL * (nSourcePartCount - 1) + 2 );
  }
  *a1 = 0;
  _InterlockedAdd(v18, 1u);
  if ( *a1 != 0 )
    CPhysAggregateData::Release(*a1);
  partToSub.m_Size = 0;
  v49 = partToSub.m_Memory.m_nAllocationCount < 0;
  *a1 = v18;
  if ( v49 )
  {
    v51 = partToSub.m_Memory.m_nGrowSize & 0xC0000000;
  }
  else
  {
    m_nGrowSize = partToSub.m_Memory.m_nGrowSize;
    v51 = partToSub.m_Memory.m_nGrowSize & 0xC0000000;
    if ( partToSub.m_Memory.m_pMemory != &partToSub.m_Memory.m_FixedMemory )
    {
      if ( partToSub.m_Memory.m_pMemory != 0 && v51 == 0 )
      {
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
        m_nGrowSize = partToSub.m_Memory.m_nGrowSize;
      }
      partToSub.m_Memory.m_nAllocationCount = 8;
      partToSub.m_Memory.m_pMemory = &partToSub.m_Memory.m_FixedMemory;
      partToSub.m_Memory.m_nGrowSize = m_nGrowSize & 0x3FFFFFFF | 0x80000000;
      goto LABEL_49;
    }
  }
  if ( v51 == 0 )
    CUtlMemory<int,int>::Purge(&partToSub.m_Memory);
LABEL_49:
  constrIndices.m_Size = 0;
  v52 = constrIndices.m_Memory.m_nGrowSize & 0xC0000000;
  if ( constrIndices.m_Memory.m_nAllocationCount < 0
    || constrIndices.m_Memory.m_pMemory == &constrIndices.m_Memory.m_FixedMemory )
  {
    if ( v52 == 0 )
      CUtlMemory<int,int>::Purge(&constrIndices.m_Memory);
  }
  else if ( constrIndices.m_Memory.m_pMemory != 0 && v52 == 0 )
  {
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
  }
  return a1;
}


// SplitAggregateData  (line 511, @0x00000000031ac790, libserver.so)  // inlines: AddRef, AddRef<CPhysAggregateData>, AddToTail, CDisjointSetForest, CSmartPtr, CUtlMemory, CUtlMemoryFixedGrowable, CUtlMemoryFixedGrowable_Base, CUtlVector, CUtlVectorBase, CUtlVectorFixedGrowable, CopyConstruct<CSmartPtr<CPhysAggregateData> >, CopyConstruct<short unsigned int>, Count, Element, Find, GrowMemory, Purge, Purge_FixedGrowable, Release<CPhysAggregateData>, RemoveAll, Sort, Tail, ThreadInterlockedIncrement, Union, __final_insertion_sort<SplitAggregateData(const CPhysAggregateData*, uint, CUtlVector<CSmartPtr<CPhysAggregateData> >*)::PartDesc_t*>, __lg, __unguarded_insertion_sort<SplitAggregateData(const CPhysAggregateData*, uint, CUtlVector<CSmartPtr<CPhysAggregateData> >*)::PartDesc_t*>, operator++, operator=, operator[], sort<SplitAggregateData(const CPhysAggregateData*, uint, CUtlVector<CSmartPtr<CPhysAggregateData> >*)::PartDesc_t*>, ~CDisjointSetForest, ~CSmartPtr, ~CUtlMemory, ~CUtlMemoryFixedGrowable, ~CUtlMemoryFixedGrowable_Base, ~CUtlVector, ~CUtlVectorBase, ~CUtlVectorFixedGrowable
// calls: CUtlVectorBase<CDisjointSetForest::Node_t, CUtlMemory<CDisjointSetForest::Node_t, int> >::SetCount, std::__introsort_loop<SplitAggregateData(const CPhysAggregateData*, uint, CUtlVector<CSmartPtr<CPhysAggregateData> >*)::PartDesc_t*, long int>, std::__insertion_sort<SplitAggregateData(const CPhysAggregateData*, uint, CUtlVector<CSmartPtr<CPhysAggregateData> >*)::PartDesc_t*>, std::__unguarded_linear_insert<SplitAggregateData(const CPhysAggregateData*, uint, CUtlVector<CSmartPtr<CPhysAggregateData> >*)::PartDesc_t*>, SubAggregateData, CPhysAggregateData::Release, CUtlMemory<short unsigned int, int>::ConvertToExternalMemory, CUtlMemory<short unsigned int, int>::Grow, CUtlMemory<CSmartPtr<CPhysAggregateData, CRefCountAccessor>, int>::Grow, CPhysAggregateData::HasBreakablePartData, SplitAggregateDataSinglePiece, CUtlMemory<CDisjointSetForest::Node_t, int>::Purge (17 total)
void __fastcall SplitAggregateData(
        const CPhysAggregateData *pCombined,
        uint nFlags,
        CUtlVector<CSmartPtr<CPhysAggregateData,CRefCountAccessor>,CUtlMemory<CSmartPtr<CPhysAggregateData,CRefCountAccessor>,int> > *pSplit)
{
  __int64 v5; // rax
  int v6; // edi
  CUtlVectorUltraConservative<CPhysConstraintData,CUtlVectorUltraConservativeAllocator>::Data_t *m_pData; // rax
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 v10; // r11
  CDisjointSetForest::Node_t *m_pMemory; // rax
  int v12; // r8d
  int i; // ecx
  int nParent; // edx
  CDisjointSetForest::Node_t *v15; // rcx
  int v16; // esi
  int j; // esi
  int v18; // ecx
  CDisjointSetForest::Node_t *v19; // rsi
  int v20; // r8d
  CDisjointSetForest::Node_t *v21; // r8
  CDisjointSetForest::Node_t *v22; // rax
  __int64 v23; // rdi
  SplitAggregateData::PartDesc_t *v24; // rax
  __int64 v25; // rsi
  int v26; // edx
  SplitAggregateData::PartDesc_t *v27; // r8
  int v28; // eax
  CDisjointSetForest::Node_t *v29; // rdx
  int v30; // ecx
  int m_Size; // eax
  SplitAggregateData::PartDesc_t *v32; // r15
  SplitAggregateData::PartDesc_t *v33; // rbx
  __int64 v34; // r14
  unsigned __int64 v35; // rax
  SplitAggregateData::PartDesc_t *v36; // r14
  SplitAggregateData::PartDesc_t *v37; // rdi
  __int64 v38; // r12
  int v39; // ebx
  __int64 v40; // rax
  int v41; // ecx
  unsigned __int16 *v42; // rax
  __int64 v43; // r14
  __int64 v44; // r12
  int v45; // eax
  CSmartPtr<CPhysAggregateData,CRefCountAccessor> *v46; // r12
  CPhysAggregateData *v47; // r15
  unsigned __int16 v48; // r15
  int v49; // eax
  __int64 v50; // rbx
  int v51; // eax
  CSmartPtr<CPhysAggregateData,CRefCountAccessor> *v52; // rbx
  CPhysAggregateData *v53; // r12
  int nPartCount; // [rsp+3Ch] [rbp-D4h]
  CPhysAggregateData *v56; // [rsp+40h] [rbp-D0h] BYREF
  CPhysAggregateData *v57; // [rsp+50h] [rbp-C0h] BYREF
  CDisjointSetForest forest; // [rsp+60h] [rbp-B0h] BYREF
  CUtlVector<SplitAggregateData(const CPhysAggregateData*,uint,CUtlVector<CSmartPtr<CPhysAggregateData> >*)::PartDesc_t,CUtlMemory<SplitAggregateData(const CPhysAggregateData*,uint,CUtlVector<CSmartPtr<CPhysAggregateData> >*)::PartDesc_t,int> > parts; // [rsp+80h] [rbp-90h] BYREF
  CUtlVectorFixedGrowable<short unsigned int,16ul> partIndices; // [rsp+A0h] [rbp-70h] BYREF
  unsigned __int64 v61; // [rsp+D8h] [rbp-38h]

  v61 = __readfsqword(0x28u);
  nPartCount = pCombined->m_Parts.m_Size;
  if ( nPartCount <= 1 || (nFlags & 2) != 0 && !CPhysAggregateData::HasBreakablePartData(pCombined) )
  {
    SplitAggregateDataSinglePiece(pCombined, nFlags, pSplit);
    return;
  }
  forest.m_Nodes.m_Size = 0;
  forest.m_Nodes.m_Memory.m_pMemory = 0;
  forest.m_Nodes.m_Memory.m_nAllocationCount = 0;
  forest.m_Nodes.m_Memory.m_nGrowSize = 0;
  CUtlVectorBase<CDisjointSetForest::Node_t,CUtlMemory<CDisjointSetForest::Node_t,int>>::SetCount(
    &forest.m_Nodes,
    nPartCount);
  v5 = 0;
  do
  {
    forest.m_Nodes.m_Memory.m_pMemory[v5].nRank = 0;
    forest.m_Nodes.m_Memory.m_pMemory[v5].nParent = v5;
    ++v5;
  }
  while ( nPartCount > v5 );
  if ( (nFlags & 1) != 0 )
  {
    v6 = 0;
    m_pData = pCombined->m_Constraints.m_pData;
    if ( m_pData == 0 )
      goto LABEL_27;
    while ( v6 < m_pData->m_Size )
    {
      while ( 1 )
      {
        v8 = &m_pData->m_Elements[v6];
        v9 = *(v8 + 4);
        v10 = *(v8 + 6);
        m_pMemory = forest.m_Nodes.m_Memory.m_pMemory;
        v12 = v9;
        for ( i = v9; ; i = forest.m_Nodes.m_Memory.m_pMemory[i].nParent )
        {
          nParent = forest.m_Nodes.m_Memory.m_pMemory[i].nParent;
          if ( i == nParent )
            break;
        }
        v15 = &forest.m_Nodes.m_Memory.m_pMemory[v9];
        v16 = v15->nParent;
        if ( v12 != v16 )
        {
          while ( 1 )
          {
            v15->nParent = nParent;
            m_pMemory = forest.m_Nodes.m_Memory.m_pMemory;
            v15 = &forest.m_Nodes.m_Memory.m_pMemory[v16];
            if ( v16 == v15->nParent )
              break;
            v16 = v15->nParent;
          }
        }
        for ( j = v10; ; j = m_pMemory[j].nParent )
        {
          v18 = m_pMemory[j].nParent;
          if ( j == v18 )
            break;
        }
        v19 = &m_pMemory[v10];
        v20 = v19->nParent;
        if ( v10 != v20 )
        {
          while ( 1 )
          {
            v19->nParent = v18;
            m_pMemory = forest.m_Nodes.m_Memory.m_pMemory;
            v19 = &forest.m_Nodes.m_Memory.m_pMemory[v20];
            if ( v19->nParent == v20 )
              break;
            v20 = v19->nParent;
          }
        }
        v21 = &m_pMemory[nParent];
        v22 = &m_pMemory[v18];
        if ( v21->nRank > v22->nRank )
        {
          v22->nParent = nParent;
        }
        else if ( v21->nRank < v22->nRank )
        {
          v21->nParent = v18;
        }
        else if ( nParent != v18 )
        {
          v22->nParent = nParent;
          ++forest.m_Nodes.m_Memory.m_pMemory[nParent].nRank;
        }
        m_pData = pCombined->m_Constraints.m_pData;
        ++v6;
        if ( m_pData != 0 )
          break;
LABEL_27:
        if ( v6 >= 0 )
          goto LABEL_28;
      }
    }
  }
LABEL_28:
  parts.m_Memory.m_nAllocationCount = 0;
  v23 = 0;
  parts.m_Size = 0;
  v24 = 0;
  parts.m_Memory.m_pMemory = 0;
  parts.m_Memory.m_nGrowSize = 0;
  while ( 1 )
  {
    v25 = v23;
    v26 = v23;
    v24[v23].nPart = v23;
    v27 = &parts.m_Memory.m_pMemory[v23];
    while ( 1 )
    {
      v28 = forest.m_Nodes.m_Memory.m_pMemory[v26].nParent;
      if ( v26 == v28 )
        break;
      v26 = forest.m_Nodes.m_Memory.m_pMemory[v26].nParent;
    }
    v29 = &forest.m_Nodes.m_Memory.m_pMemory[v25];
    v30 = forest.m_Nodes.m_Memory.m_pMemory[v25].nParent;
    if ( v30 != v23 )
    {
      while ( 1 )
      {
        v29->nParent = v28;
        v29 = &forest.m_Nodes.m_Memory.m_pMemory[v30];
        if ( v29->nParent == v30 )
          break;
        v30 = v29->nParent;
      }
    }
    ++v23;
    v27->nSubforest = v28;
    if ( nPartCount <= v23 )
      break;
    v24 = parts.m_Memory.m_pMemory;
  }
  m_Size = parts.m_Size;
  v32 = parts.m_Memory.m_pMemory;
  v33 = &parts.m_Memory.m_pMemory[parts.m_Size];
  if ( parts.m_Memory.m_pMemory != v33 )
  {
    v34 = 8LL * parts.m_Size;
    _BitScanReverse64(&v35, v34 >> 3);
    std::__introsort_loop<SplitAggregateData(CPhysAggregateData const*,unsigned int,CUtlVector<CSmartPtr<CPhysAggregateData,CRefCountAccessor>,CUtlMemory<CSmartPtr<CPhysAggregateData,CRefCountAccessor>,int>> *)::PartDesc_t *,long>(
      parts.m_Memory.m_pMemory,
      &parts.m_Memory.m_pMemory[v34 / 8],
      2 * (63LL - (v35 ^ 0x3F)));
    if ( v34 <= 135 )
    {
      std::__insertion_sort<SplitAggregateData(CPhysAggregateData const*,unsigned int,CUtlVector<CSmartPtr<CPhysAggregateData,CRefCountAccessor>,CUtlMemory<CSmartPtr<CPhysAggregateData,CRefCountAccessor>,int>> *)::PartDesc_t *>(
        v32,
        v33);
    }
    else
    {
      v36 = v32 + 16;
      std::__insertion_sort<SplitAggregateData(CPhysAggregateData const*,unsigned int,CUtlVector<CSmartPtr<CPhysAggregateData,CRefCountAccessor>,CUtlMemory<CSmartPtr<CPhysAggregateData,CRefCountAccessor>,int>> *)::PartDesc_t *>(
        v32,
        v32 + 16);
      if ( v33 != &v32[16] )
      {
        do
        {
          v37 = v36++;
          std::__unguarded_linear_insert<SplitAggregateData(CPhysAggregateData const*,unsigned int,CUtlVector<CSmartPtr<CPhysAggregateData,CRefCountAccessor>,CUtlMemory<CSmartPtr<CPhysAggregateData,CRefCountAccessor>,int>> *)::PartDesc_t *>(v37);
        }
        while ( v33 != v36 );
        v32 = parts.m_Memory.m_pMemory;
        m_Size = parts.m_Size;
        goto LABEL_44;
      }
    }
    v32 = parts.m_Memory.m_pMemory;
    if ( parts.m_Memory.m_pMemory->nSubforest != parts.m_Memory.m_pMemory[parts.m_Size - 1].nSubforest )
      goto LABEL_45;
LABEL_82:
    SplitAggregateDataSinglePiece(pCombined, nFlags, pSplit);
    parts.m_Size = 0;
    if ( (parts.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<SplitAggregateData(CPhysAggregateData const*,unsigned int,CUtlVector<CSmartPtr<CPhysAggregateData,CRefCountAccessor>,CUtlMemory<CSmartPtr<CPhysAggregateData,CRefCountAccessor>,int>> *)::PartDesc_t,int>::Purge(&parts.m_Memory);
      if ( (parts.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<SplitAggregateData(CPhysAggregateData const*,unsigned int,CUtlVector<CSmartPtr<CPhysAggregateData,CRefCountAccessor>,CUtlMemory<CSmartPtr<CPhysAggregateData,CRefCountAccessor>,int>> *)::PartDesc_t,int>::Purge(&parts.m_Memory);
    }
    forest.m_Nodes.m_Size = 0;
    if ( (forest.m_Nodes.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<CDisjointSetForest::Node_t,int>::Purge(&forest.m_Nodes.m_Memory);
      if ( (forest.m_Nodes.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<CDisjointSetForest::Node_t,int>::Purge(&forest.m_Nodes.m_Memory);
    }
    return;
  }
LABEL_44:
  if ( v32->nSubforest == v32[m_Size - 1].nSubforest )
    goto LABEL_82;
LABEL_45:
  partIndices.m_Memory.m_nAllocationCount = 16;
  v38 = 1;
  partIndices.m_Memory.m_nGrowSize = 0x80000000;
  v39 = 1;
  v40 = 0;
  partIndices.m_Memory.m_pMemory = partIndices.m_Memory.m_FixedMemory.m_Data;
  partIndices.m_Size = 1;
  *partIndices.m_Memory.m_FixedMemory.m_Data = 0;
  while ( 1 )
  {
    v43 = v40 + 8;
    if ( *(&v32[1].nSubforest + v40) == *(&v32->nSubforest + v40) )
      goto LABEL_60;
    SubAggregateData(&v56, pCombined, partIndices.m_Memory.m_pMemory, v38, 0);
    v44 = pSplit->m_Size;
    v45 = pSplit->m_Size;
    if ( v44 == pSplit->m_Memory.m_nAllocationCount )
    {
      CUtlMemory<CSmartPtr<CPhysAggregateData,CRefCountAccessor>,int>::Grow(&pSplit->m_Memory, 1);
      v45 = pSplit->m_Size;
    }
    pSplit->m_Size = v45 + 1;
    v46 = &pSplit->m_Memory.m_pMemory[v44];
    if ( v46 == 0 )
      goto LABEL_57;
    v46->m_pObj = 0;
    v47 = v56;
    if ( v56 != 0 )
    {
      _InterlockedAdd(v56, 1u);
      if ( v46->m_pObj != 0 )
        CPhysAggregateData::Release(v46->m_pObj);
      v46->m_pObj = v47;
LABEL_57:
      if ( v56 != 0 )
        CPhysAggregateData::Release(v56);
    }
    partIndices.m_Size = 0;
    CUtlMemory<unsigned short,int>::ConvertToExternalMemory(
      &partIndices.m_Memory,
      partIndices.m_Memory.m_FixedMemory.m_Data,
      16,
      0,
      1,
      0x3FFFFFFFu);
    v38 = partIndices.m_Size;
LABEL_60:
    v48 = v39;
    v49 = v38;
    if ( v38 == partIndices.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<unsigned short,int>::Grow(&partIndices.m_Memory, 1);
      v49 = partIndices.m_Size;
    }
    v41 = v49 + 1;
    partIndices.m_Size = v49 + 1;
    v42 = &partIndices.m_Memory.m_pMemory[v38];
    if ( v42 == 0 )
      break;
    ++v39;
    *v42 = v48;
    v38 = partIndices.m_Size;
    if ( v39 == nPartCount )
      goto LABEL_63;
LABEL_48:
    v32 = parts.m_Memory.m_pMemory;
    v40 = v43;
  }
  ++v39;
  v38 = v41;
  if ( v39 != nPartCount )
    goto LABEL_48;
LABEL_63:
  SubAggregateData(&v57, pCombined, partIndices.m_Memory.m_pMemory, v38, 0);
  v50 = pSplit->m_Size;
  v51 = pSplit->m_Size;
  if ( v50 == pSplit->m_Memory.m_nAllocationCount )
  {
    CUtlMemory<CSmartPtr<CPhysAggregateData,CRefCountAccessor>,int>::Grow(&pSplit->m_Memory, 1);
    v51 = pSplit->m_Size;
  }
  pSplit->m_Size = v51 + 1;
  v52 = &pSplit->m_Memory.m_pMemory[v50];
  if ( v52 != 0 )
  {
    v52->m_pObj = 0;
    v53 = v57;
    if ( v57 != 0 )
    {
      _InterlockedAdd(v57, 1u);
      if ( v52->m_pObj != 0 )
        CPhysAggregateData::Release(v52->m_pObj);
      v52->m_pObj = v53;
      goto LABEL_70;
    }
  }
  else
  {
LABEL_70:
    if ( v57 != 0 )
      CPhysAggregateData::Release(v57);
  }
  partIndices.m_Size = 0;
  CUtlMemory<unsigned short,int>::ConvertToExternalMemory(
    &partIndices.m_Memory,
    partIndices.m_Memory.m_FixedMemory.m_Data,
    16,
    0,
    1,
    0x3FFFFFFFu);
  if ( (partIndices.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<unsigned short,int>::Purge(&partIndices.m_Memory);
  parts.m_Size = 0;
  if ( (parts.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<SplitAggregateData(CPhysAggregateData const*,unsigned int,CUtlVector<CSmartPtr<CPhysAggregateData,CRefCountAccessor>,CUtlMemory<CSmartPtr<CPhysAggregateData,CRefCountAccessor>,int>> *)::PartDesc_t,int>::Purge(&parts.m_Memory);
    if ( (parts.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<SplitAggregateData(CPhysAggregateData const*,unsigned int,CUtlVector<CSmartPtr<CPhysAggregateData,CRefCountAccessor>,CUtlMemory<CSmartPtr<CPhysAggregateData,CRefCountAccessor>,int>> *)::PartDesc_t,int>::Purge(&parts.m_Memory);
  }
  forest.m_Nodes.m_Size = 0;
  if ( (forest.m_Nodes.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CDisjointSetForest::Node_t,int>::Purge(&forest.m_Nodes.m_Memory);
    if ( (forest.m_Nodes.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CDisjointSetForest::Node_t,int>::Purge(&forest.m_Nodes.m_Memory);
  }
}


// CPhysBodyDesc::CPhysBodyDesc  (line 579, @0x00000000031aa060, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase
// callers: Physics_GetAggregateData, CShatterGlassShard::GenerateProceduralShatterGlassShardModel
void __fastcall CPhysBodyDesc::CPhysBodyDesc(CPhysBodyDesc *const this, bool bOwnsShapes)
{
  __int64 v2; // rdx
  __int64 v3; // rdx
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rax

  this->m_Spheres.m_Size = 0;
  this->m_Spheres.m_Memory.m_pMemory = 0;
  this->m_Spheres.m_Memory.m_nAllocationCount = 0;
  v2 = *&g_MatrixIdentity.m_flMatVal[0][0];
  this->m_Spheres.m_Memory.m_nGrowSize = 0;
  this->m_Capsules.m_Size = 0;
  this->m_Capsules.m_Memory.m_pMemory = 0;
  this->m_Capsules.m_Memory.m_nAllocationCount = 0;
  *&this->m_BindPose.m_flMatVal[0][0] = v2;
  v3 = *&g_MatrixIdentity.m_flMatVal[0][2];
  this->m_Capsules.m_Memory.m_nGrowSize = 0;
  this->m_Hulls.m_Size = 0;
  this->m_Hulls.m_Memory.m_pMemory = 0;
  *&this->m_BindPose.m_flMatVal[0][2] = v3;
  v4 = *&g_MatrixIdentity.m_flMatVal[1][0];
  this->m_Hulls.m_Memory.m_nAllocationCount = 0;
  this->m_Hulls.m_Memory.m_nGrowSize = 0;
  this->m_Meshes.m_Size = 0;
  *&this->m_BindPose.m_flMatVal[1][0] = v4;
  v5 = *&g_MatrixIdentity.m_flMatVal[1][2];
  this->m_Meshes.m_Memory.m_pMemory = 0;
  this->m_Meshes.m_Memory.m_nAllocationCount = 0;
  this->m_Meshes.m_Memory.m_nGrowSize = 0;
  *&this->m_BindPose.m_flMatVal[1][2] = v5;
  v6 = *&g_MatrixIdentity.m_flMatVal[2][0];
  v7 = *&g_MatrixIdentity.m_flMatVal[2][2];
  this->m_bOwnsShapes = bOwnsShapes;
  this->m_flMass = 0.0;
  this->m_pSurfaceProp = 0;
  this->m_pBoneName = 0;
  *&this->m_BindPose.m_flMatVal[2][0] = v6;
  *&this->m_BindPose.m_flMatVal[2][2] = v7;
}


// CPhysBodyDesc::~CPhysBodyDesc  (line 590, @0x00000000031aa150, libserver.so)  // inlines: Purge, RemoveAll, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlMemory<CPhysBodyDesc::MeshAndAttr_t, int>::Purge, CUtlMemory<CPhysBodyDesc::SphereAndAttr_t, int>::Purge, CUtlMemory<CPhysBodyDesc::CapsuleAndAttr_t, int>::Purge, CUtlMemory<CPhysBodyDesc::HullAndAttr_t, int>::Purge
// callers: Physics_GetAggregateData, CShatterGlassShard::GenerateProceduralShatterGlassShardModel
void __fastcall CPhysBodyDesc::~CPhysBodyDesc(CPhysBodyDesc *const this)
{
  __int64 v2; // r13
  int v3; // r12d
  RnHull_t *m_pHull; // rsi
  __int64 v5; // r13
  int v6; // r12d
  RnMesh_t *m_pMesh; // rsi
  bool v8; // zf

  if ( this->m_bOwnsShapes )
  {
    if ( this->m_Hulls.m_Size > 0 )
    {
      v2 = 0;
      v3 = 0;
      do
      {
        ++v3;
        m_pHull = this->m_Hulls.m_Memory.m_pMemory[v2++].m_pHull;
        (*(g_pVPhysics2->_vptr_IAppSystem + 33))(g_pVPhysics2, m_pHull, 0, 0);
      }
      while ( this->m_Hulls.m_Size > v3 );
    }
    if ( this->m_Meshes.m_Size > 0 )
    {
      v5 = 0;
      v6 = 0;
      do
      {
        ++v6;
        m_pMesh = this->m_Meshes.m_Memory.m_pMemory[v5++].m_pMesh;
        (*(g_pVPhysics2->_vptr_IAppSystem + 37))(g_pVPhysics2, m_pMesh, 0, 0);
      }
      while ( this->m_Meshes.m_Size > v6 );
    }
  }
  v8 = (this->m_Meshes.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_Meshes.m_Size = 0;
  if ( v8 )
  {
    CUtlMemory<CPhysBodyDesc::MeshAndAttr_t,int>::Purge(&this->m_Meshes.m_Memory);
    if ( (this->m_Meshes.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CPhysBodyDesc::MeshAndAttr_t,int>::Purge(&this->m_Meshes.m_Memory);
  }
  v8 = (this->m_Hulls.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_Hulls.m_Size = 0;
  if ( v8 )
  {
    CUtlMemory<CPhysBodyDesc::HullAndAttr_t,int>::Purge(&this->m_Hulls.m_Memory);
    if ( (this->m_Hulls.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CPhysBodyDesc::HullAndAttr_t,int>::Purge(&this->m_Hulls.m_Memory);
  }
  v8 = (this->m_Capsules.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_Capsules.m_Size = 0;
  if ( v8 )
  {
    CUtlMemory<CPhysBodyDesc::CapsuleAndAttr_t,int>::Purge(&this->m_Capsules.m_Memory);
    if ( (this->m_Capsules.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CPhysBodyDesc::CapsuleAndAttr_t,int>::Purge(&this->m_Capsules.m_Memory);
  }
  v8 = (this->m_Spheres.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_Spheres.m_Size = 0;
  if ( v8 )
  {
    CUtlMemory<CPhysBodyDesc::SphereAndAttr_t,int>::Purge(&this->m_Spheres.m_Memory);
    if ( (this->m_Spheres.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CPhysBodyDesc::SphereAndAttr_t,int>::Purge(&this->m_Spheres.m_Memory);
  }
}


// CPhysBodyDesc::AddSphere  (line 607, @0x00000000031aaac0, libserver.so)  // inlines: AddToTail, CopyConstruct<CPhysBodyDesc::SphereAndAttr_t>, Element, GrowMemory, operator=, operator[]
// calls: CUtlMemory<CPhysBodyDesc::SphereAndAttr_t, int>::Grow
void __fastcall CPhysBodyDesc::AddSphere(
        CPhysBodyDesc *const this,
        const RnSphere_t *const rSphere,
        const RnCollisionAttr_t *const rAttributes)
{
  __int64 m_Size; // r12
  uint64 m_nInteractsAs; // r9
  uint64 m_nInteractsWith; // r8
  uint64 m_nInteractsExclude; // rcx
  int v8; // eax
  uint32 m_nEntityId; // r15d
  uint16 m_nHierarchyId; // r14
  uint8 m_nCollisionGroup; // r13
  vec_t x; // xmm3_4
  vec_t y; // xmm2_4
  vec_t z; // xmm1_4
  float32 m_flRadius; // xmm0_4
  uint8 m_nCollisionFunctionMask; // dl
  CPhysBodyDesc::SphereAndAttr_t *v17; // rax
  uint8 v18; // [rsp+4h] [rbp-5Ch]
  uint64 v19; // [rsp+8h] [rbp-58h]
  uint64 v20; // [rsp+10h] [rbp-50h]
  float32 v21; // [rsp+18h] [rbp-48h]
  vec_t v22; // [rsp+1Ch] [rbp-44h]
  vec_t v23; // [rsp+20h] [rbp-40h]
  vec_t v24; // [rsp+24h] [rbp-3Ch]
  uint64 v25; // [rsp+28h] [rbp-38h]

  m_Size = this->m_Spheres.m_Size;
  m_nInteractsAs = rAttributes->m_nInteractsAs;
  m_nInteractsWith = rAttributes->m_nInteractsWith;
  m_nInteractsExclude = rAttributes->m_nInteractsExclude;
  v8 = this->m_Spheres.m_Size;
  m_nEntityId = rAttributes->m_nEntityId;
  m_nHierarchyId = rAttributes->m_nHierarchyId;
  m_nCollisionGroup = rAttributes->m_nCollisionGroup;
  x = rSphere->m_vCenter.x;
  y = rSphere->m_vCenter.y;
  z = rSphere->m_vCenter.z;
  m_flRadius = rSphere->m_flRadius;
  m_nCollisionFunctionMask = rAttributes->m_nCollisionFunctionMask;
  if ( m_Size == this->m_Spheres.m_Memory.m_nAllocationCount )
  {
    v18 = m_nCollisionFunctionMask;
    v19 = m_nInteractsAs;
    v20 = m_nInteractsExclude;
    v21 = rSphere->m_flRadius;
    v22 = rSphere->m_vCenter.z;
    v23 = rSphere->m_vCenter.y;
    v24 = rSphere->m_vCenter.x;
    v25 = m_nInteractsWith;
    CUtlMemory<CPhysBodyDesc::SphereAndAttr_t,int>::Grow(&this->m_Spheres.m_Memory, 1);
    v8 = this->m_Spheres.m_Size;
    m_nCollisionFunctionMask = v18;
    m_nInteractsAs = v19;
    m_nInteractsExclude = v20;
    m_flRadius = v21;
    z = v22;
    y = v23;
    x = v24;
    m_nInteractsWith = v25;
  }
  this->m_Spheres.m_Size = v8 + 1;
  v17 = &this->m_Spheres.m_Memory.m_pMemory[m_Size];
  if ( v17 != 0 )
  {
    v17->m_Sphere.m_vCenter.x = x;
    v17->m_Sphere.m_vCenter.y = y;
    v17->m_Sphere.m_vCenter.z = z;
    v17->m_Sphere.m_flRadius = m_flRadius;
    v17->m_Attr.m_nInteractsAs = m_nInteractsAs;
    v17->m_Attr.m_nInteractsWith = m_nInteractsWith;
    v17->m_Attr.m_nInteractsExclude = m_nInteractsExclude;
    v17->m_Attr.m_nEntityId = m_nEntityId;
    v17->m_Attr.m_nHierarchyId = m_nHierarchyId;
    v17->m_Attr.m_nCollisionGroup = m_nCollisionGroup;
    v17->m_Attr.m_nCollisionFunctionMask = m_nCollisionFunctionMask;
  }
}


// CPhysBodyDesc::AddCapsule  (line 617, @0x00000000031aabd0, libserver.so)  // inlines: AddToTail, CopyConstruct<CPhysBodyDesc::CapsuleAndAttr_t>, Element, GrowMemory, operator=, operator[]
// calls: CUtlMemory<CPhysBodyDesc::CapsuleAndAttr_t, int>::Grow
// callers: Physics_GetAggregateData
void __fastcall CPhysBodyDesc::AddCapsule(
        CPhysBodyDesc *const this,
        const RnCapsule_t *const rCapsule,
        const RnCollisionAttr_t *const rAttributes)
{
  int m_Size; // r12d
  uint64 m_nInteractsAs; // r9
  uint64 m_nInteractsWith; // r8
  uint64 m_nInteractsExclude; // rcx
  int v8; // eax
  uint32 m_nEntityId; // r15d
  uint16 m_nHierarchyId; // r14
  uint8 m_nCollisionGroup; // r13
  vec_t x; // xmm6_4
  vec_t y; // xmm5_4
  vec_t z; // xmm4_4
  vec_t v15; // xmm3_4
  vec_t v16; // xmm2_4
  vec_t v17; // xmm1_4
  float32 m_flRadius; // xmm0_4
  uint8 m_nCollisionFunctionMask; // dl
  CPhysBodyDesc::CapsuleAndAttr_t *v20; // rax
  vec_t v21; // [rsp+8h] [rbp-68h]
  vec_t v22; // [rsp+Ch] [rbp-64h]
  uint64 v23; // [rsp+10h] [rbp-60h]
  vec_t v24; // [rsp+18h] [rbp-58h]
  vec_t v25; // [rsp+1Ch] [rbp-54h]
  vec_t v26; // [rsp+20h] [rbp-50h]
  vec_t v27; // [rsp+24h] [rbp-4Ch]
  uint64 v28; // [rsp+28h] [rbp-48h]
  uint64 v29; // [rsp+30h] [rbp-40h]
  uint8 v30; // [rsp+38h] [rbp-38h]
  float32 v31; // [rsp+3Ch] [rbp-34h]

  m_Size = this->m_Capsules.m_Size;
  m_nInteractsAs = rAttributes->m_nInteractsAs;
  m_nInteractsWith = rAttributes->m_nInteractsWith;
  m_nInteractsExclude = rAttributes->m_nInteractsExclude;
  v8 = m_Size;
  m_nEntityId = rAttributes->m_nEntityId;
  m_nHierarchyId = rAttributes->m_nHierarchyId;
  m_nCollisionGroup = rAttributes->m_nCollisionGroup;
  x = rCapsule->m_vCenter[0].x;
  y = rCapsule->m_vCenter[0].y;
  z = rCapsule->m_vCenter[0].z;
  v15 = rCapsule->m_vCenter[1].x;
  v16 = rCapsule->m_vCenter[1].y;
  v17 = rCapsule->m_vCenter[1].z;
  m_flRadius = rCapsule->m_flRadius;
  m_nCollisionFunctionMask = rAttributes->m_nCollisionFunctionMask;
  if ( m_Size == this->m_Capsules.m_Memory.m_nAllocationCount )
  {
    v21 = rCapsule->m_vCenter[1].z;
    v22 = rCapsule->m_vCenter[1].y;
    v24 = rCapsule->m_vCenter[1].x;
    v23 = m_nInteractsExclude;
    v25 = rCapsule->m_vCenter[0].z;
    v26 = rCapsule->m_vCenter[0].y;
    v27 = rCapsule->m_vCenter[0].x;
    v30 = m_nCollisionFunctionMask;
    v28 = m_nInteractsWith;
    v29 = m_nInteractsAs;
    v31 = rCapsule->m_flRadius;
    CUtlMemory<CPhysBodyDesc::CapsuleAndAttr_t,int>::Grow(&this->m_Capsules.m_Memory, 1);
    v8 = this->m_Capsules.m_Size;
    v17 = v21;
    v16 = v22;
    v15 = v24;
    m_nInteractsExclude = v23;
    z = v25;
    y = v26;
    x = v27;
    m_nCollisionFunctionMask = v30;
    m_nInteractsWith = v28;
    m_nInteractsAs = v29;
    m_flRadius = v31;
  }
  this->m_Capsules.m_Size = v8 + 1;
  v20 = &this->m_Capsules.m_Memory.m_pMemory[m_Size];
  if ( v20 != 0 )
  {
    v20->m_Capsule.m_vCenter[0].x = x;
    v20->m_Capsule.m_vCenter[0].y = y;
    v20->m_Capsule.m_vCenter[0].z = z;
    v20->m_Capsule.m_vCenter[1].x = v15;
    v20->m_Capsule.m_vCenter[1].y = v16;
    v20->m_Capsule.m_vCenter[1].z = v17;
    v20->m_Capsule.m_flRadius = m_flRadius;
    v20->m_Attr.m_nInteractsAs = m_nInteractsAs;
    v20->m_Attr.m_nInteractsWith = m_nInteractsWith;
    v20->m_Attr.m_nInteractsExclude = m_nInteractsExclude;
    v20->m_Attr.m_nEntityId = m_nEntityId;
    v20->m_Attr.m_nHierarchyId = m_nHierarchyId;
    v20->m_Attr.m_nCollisionGroup = m_nCollisionGroup;
    v20->m_Attr.m_nCollisionFunctionMask = m_nCollisionFunctionMask;
  }
}


// CPhysBodyDesc::AddHull  (line 627, @0x00000000031aad10, libserver.so)  // inlines: AddToTail, CopyConstruct<CPhysBodyDesc::HullAndAttr_t>, Element, GrowMemory, operator[]
// calls: CUtlMemory<CPhysBodyDesc::HullAndAttr_t, int>::Grow
// callers: Physics_GetAggregateData, CShatterGlassShard::GenerateProceduralShatterGlassShardModel
void __fastcall CPhysBodyDesc::AddHull(
        CPhysBodyDesc *const this,
        RnHull_t *pHull,
        const RnCollisionAttr_t *const rAttributes)
{
  __int64 m_Size; // r12
  uint64 m_nInteractsAs; // r10
  uint64 m_nInteractsWith; // r9
  uint64 m_nInteractsExclude; // r8
  int v9; // eax
  uint32 m_nEntityId; // ecx
  uint16 m_nHierarchyId; // r15
  uint8 m_nCollisionGroup; // r14
  uint8 m_nCollisionFunctionMask; // dl
  CPhysBodyDesc::HullAndAttr_t *v14; // rax
  uint32 v15; // [rsp+0h] [rbp-50h]
  uint8 v16; // [rsp+4h] [rbp-4Ch]
  uint64 v17; // [rsp+8h] [rbp-48h]
  uint64 v18; // [rsp+10h] [rbp-40h]
  uint64 v19; // [rsp+18h] [rbp-38h]

  m_Size = this->m_Hulls.m_Size;
  m_nInteractsAs = rAttributes->m_nInteractsAs;
  m_nInteractsWith = rAttributes->m_nInteractsWith;
  m_nInteractsExclude = rAttributes->m_nInteractsExclude;
  v9 = this->m_Hulls.m_Size;
  m_nEntityId = rAttributes->m_nEntityId;
  m_nHierarchyId = rAttributes->m_nHierarchyId;
  m_nCollisionGroup = rAttributes->m_nCollisionGroup;
  m_nCollisionFunctionMask = rAttributes->m_nCollisionFunctionMask;
  if ( m_Size == this->m_Hulls.m_Memory.m_nAllocationCount )
  {
    v15 = m_nEntityId;
    v16 = m_nCollisionFunctionMask;
    v17 = m_nInteractsExclude;
    v18 = m_nInteractsAs;
    v19 = m_nInteractsWith;
    CUtlMemory<CPhysBodyDesc::HullAndAttr_t,int>::Grow(&this->m_Hulls.m_Memory, 1);
    v9 = this->m_Hulls.m_Size;
    m_nEntityId = v15;
    m_nCollisionFunctionMask = v16;
    m_nInteractsExclude = v17;
    m_nInteractsAs = v18;
    m_nInteractsWith = v19;
  }
  this->m_Hulls.m_Size = v9 + 1;
  v14 = &this->m_Hulls.m_Memory.m_pMemory[m_Size];
  if ( v14 != 0 )
  {
    v14->m_pHull = pHull;
    v14->m_Attr.m_nInteractsAs = m_nInteractsAs;
    v14->m_Attr.m_nInteractsWith = m_nInteractsWith;
    v14->m_Attr.m_nInteractsExclude = m_nInteractsExclude;
    v14->m_Attr.m_nEntityId = m_nEntityId;
    v14->m_Attr.m_nHierarchyId = m_nHierarchyId;
    v14->m_Attr.m_nCollisionGroup = m_nCollisionGroup;
    v14->m_Attr.m_nCollisionFunctionMask = m_nCollisionFunctionMask;
  }
}


// CPhysBodyDesc::AddMesh  (line 637, @0x00000000031aade0, libserver.so)  // inlines: AddToTail, CopyConstruct<CPhysBodyDesc::MeshAndAttr_t>, Element, GrowMemory, operator[]
// calls: CUtlMemory<CPhysBodyDesc::MeshAndAttr_t, int>::Grow
void __fastcall CPhysBodyDesc::AddMesh(
        CPhysBodyDesc *const this,
        RnMesh_t *pMesh,
        const RnCollisionAttr_t *const rAttributes)
{
  __int64 m_Size; // r12
  uint64 m_nInteractsAs; // r10
  uint64 m_nInteractsWith; // r9
  uint64 m_nInteractsExclude; // r8
  int v9; // eax
  uint32 m_nEntityId; // ecx
  uint16 m_nHierarchyId; // r15
  uint8 m_nCollisionGroup; // r14
  uint8 m_nCollisionFunctionMask; // dl
  CPhysBodyDesc::MeshAndAttr_t *v14; // rax
  uint32 v15; // [rsp+0h] [rbp-50h]
  uint8 v16; // [rsp+4h] [rbp-4Ch]
  uint64 v17; // [rsp+8h] [rbp-48h]
  uint64 v18; // [rsp+10h] [rbp-40h]
  uint64 v19; // [rsp+18h] [rbp-38h]

  m_Size = this->m_Meshes.m_Size;
  m_nInteractsAs = rAttributes->m_nInteractsAs;
  m_nInteractsWith = rAttributes->m_nInteractsWith;
  m_nInteractsExclude = rAttributes->m_nInteractsExclude;
  v9 = this->m_Meshes.m_Size;
  m_nEntityId = rAttributes->m_nEntityId;
  m_nHierarchyId = rAttributes->m_nHierarchyId;
  m_nCollisionGroup = rAttributes->m_nCollisionGroup;
  m_nCollisionFunctionMask = rAttributes->m_nCollisionFunctionMask;
  if ( m_Size == this->m_Meshes.m_Memory.m_nAllocationCount )
  {
    v15 = m_nEntityId;
    v16 = m_nCollisionFunctionMask;
    v17 = m_nInteractsExclude;
    v18 = m_nInteractsAs;
    v19 = m_nInteractsWith;
    CUtlMemory<CPhysBodyDesc::MeshAndAttr_t,int>::Grow(&this->m_Meshes.m_Memory, 1);
    v9 = this->m_Meshes.m_Size;
    m_nEntityId = v15;
    m_nCollisionFunctionMask = v16;
    m_nInteractsExclude = v17;
    m_nInteractsAs = v18;
    m_nInteractsWith = v19;
  }
  this->m_Meshes.m_Size = v9 + 1;
  v14 = &this->m_Meshes.m_Memory.m_pMemory[m_Size];
  if ( v14 != 0 )
  {
    v14->m_pMesh = pMesh;
    v14->m_Attr.m_nInteractsAs = m_nInteractsAs;
    v14->m_Attr.m_nInteractsWith = m_nInteractsWith;
    v14->m_Attr.m_nInteractsExclude = m_nInteractsExclude;
    v14->m_Attr.m_nEntityId = m_nEntityId;
    v14->m_Attr.m_nHierarchyId = m_nHierarchyId;
    v14->m_Attr.m_nCollisionGroup = m_nCollisionGroup;
    v14->m_Attr.m_nCollisionFunctionMask = m_nCollisionFunctionMask;
  }
}


// CreateAggregateData  (line 647, @0x00000000031ad010, libserver.so)  // inlines: AddRef, AddRef<CPhysAggregateData>, AddToTail, AllocAligned, Allocate<CResourceString>, Allocate<RnCapsuleDesc_t>, Allocate<RnHullDesc_t>, Allocate<RnMeshDesc_t>, Allocate<RnSphereDesc_t>, Allocate<VPhysXBodyPart_t>, Allocate<char>, Allocate<matrix3x4_t>, Allocate<short unsigned int>, Allocate<unsigned int>, AllocateUnaligned<CResourceString>, AllocateUnaligned<RnCapsuleDesc_t>, AllocateUnaligned<RnHullDesc_t>, AllocateUnaligned<RnMeshDesc_t>, AllocateUnaligned<RnSphereDesc_t>, AllocateUnaligned<VPhysXBodyPart_t>, AllocateUnaligned<char>, AllocateUnaligned<matrix3x4_t>, AllocateUnaligned<short unsigned int>, AllocateUnaligned<unsigned int>, CResourceArray, CResourceArrayBase, CResourcePointer, CResourcePointerBase, CResourceString, CSmartPtr, CUnlockedResource, CUtlMemory, CUtlMemoryFixedGrowable, CUtlMemoryFixedGrowable_Base, CUtlVector, CUtlVectorBase, CUtlVectorFixedGrowable, Construct<CPhysAggregateData>, Construct<CResourceString>, Construct<RnHullDesc_t>, Construct<RnMeshDesc_t>, Construct<RnSphereDesc_t>, Construct<VPhysXBodyPart_t>, ConvertToExternalMemory, CopyConstruct<RnCollisionAttr_t>, Destruct<CJointIndexData>, Element, GetDataPtr, GetPtr, GetRawPtr, GrowMemory, IsExternallyAllocated, MakeStringToken, MemAlloc_AllocAlignedFunc, OffsetPointer<CResourceString>, OffsetPointer<VPhysXBodyPart_t>, OffsetPointer<matrix3x4_t>, OffsetPointer<short unsigned int>, OffsetPointer<unsigned int>, Purge, Purge_FixedGrowable, Release<CPhysAggregateData>, RemoveAll, ResolveOffset, RnHullDesc_t, RnHull_t, RnMeshDesc_t, RnMesh_t, RnSphereDesc_t, RnSphere_t, SetDesc, SetExternalBuffer, SetPtr, SetRawPtr, ThreadInterlockedIncrement, VPhysXBodyPart_t, VPhysics2ShapeDef_t, V_memcpy, V_memset, V_strlen, WriteString, memcpy, memset, operator CResourceString*, operator RnCapsuleDesc_t*, operator RnHullDesc_t*, operator RnMeshDesc_t*, operator RnSphereDesc_t*, operator VPhysXBodyPart_t*, operator char*, operator matrix3x4_t*, operator short unsigned int*, operator unsigned int*, operator++, operator=, operator[], ~CJointIndexData, ~CUtlMemory, ~CUtlMemoryFixedGrowable, ~CUtlMemoryFixedGrowable_Base, ~CUtlString, ~CUtlVector, ~CUtlVectorBase, ~CUtlVectorFixedGrowable
// calls: CResourceStreamVM::CResourceStreamVM, CResourceStream::Align, CResourceStream::AllocateBytes, CUtlMemory<RnCollisionAttr_t, int>::Grow, CUtlVectorBase<CJointIndexData, CUtlMemory<CJointIndexData, int> >::SetCount, memcpy, CUtlString::operator=, strlen, MurmurHash2LowerCase, RegisterStringToken, CUtlVectorBase<CJointIndexData, CUtlMemory<CJointIndexData, int> >::Sort, CUtlString::FreeMemoryBlock (27 total)
// callers: Physics_GetAggregateData, CModelBuilder::AddPhysicsBody
// globals: CJointIndexData::CompareHash(CJointIndexData const*,CJointIndexData const*), CJointIndexData::CompareString(CJointIndexData const*,CJointIndexData const*)
CSmartPtr<CPhysAggregateData,CRefCountAccessor> __fastcall CreateAggregateData(
        const CPhysAggregateData **a1,
        const CPhysBodyDesc *pDesc,
        int nPartCount)
{
  unsigned int v3; // eax
  uint8 *v4; // r15
  uint v5; // eax
  char *v6; // rax
  int v7; // ecx
  uint8 *v8; // rsi
  signed __int64 v9; // rdx
  __int64 v10; // r14
  int v11; // ebx
  int v12; // ebx
  int v13; // ebx
  int v14; // ebx
  unsigned int v15; // eax
  uint8 *v16; // rcx
  uint v17; // eax
  char *v18; // rdx
  int v19; // esi
  signed __int64 v20; // rax
  int v21; // ecx
  int v22; // eax
  unsigned __int64 v23; // rbx
  __int64 v24; // r13
  bool v25; // zf
  RnCollisionAttr_t *v26; // r13
  uint8 *v27; // rcx
  __int64 v28; // r13
  CPhysBodyDesc::MeshAndAttr_t *v29; // r12
  int v30; // eax
  int v31; // ebx
  unsigned int v32; // eax
  uint v33; // edx
  uint v34; // eax
  uint8 *v35; // rsi
  int v36; // edx
  __int64 v37; // rax
  uint8 *v38; // rsi
  int v39; // ecx
  uint8 *v40; // rdi
  __int64 v41; // rdx
  int i; // eax
  int v43; // esi
  char *v44; // rcx
  __int64 v45; // rdx
  int j; // eax
  int v47; // esi
  uint8 *v48; // rcx
  __int64 v49; // rdx
  int k; // eax
  int v51; // esi
  uint8 *v52; // rcx
  __int64 v53; // rdx
  int m; // eax
  int v55; // esi
  uint8 *v56; // rcx
  unsigned int v57; // eax
  uint v58; // eax
  unsigned int v59; // eax
  uint v60; // eax
  CResourceString *v61; // rax
  int v62; // edx
  unsigned int v63; // eax
  uint v64; // eax
  unsigned int v65; // eax
  uint v66; // eax
  unsigned int v67; // eax
  uint v68; // eax
  const CPhysBodyDesc *v69; // rbx
  __int64 v70; // r14
  _QWORD *v71; // r12
  unsigned int v72; // eax
  uint v73; // eax
  void *v74; // rax
  const char *v75; // r13
  uint32 v76; // edx
  __int64 v77; // rax
  const char *v78; // r13
  int v79; // eax
  unsigned int v80; // eax
  uint8 *v81; // rcx
  uint v82; // eax
  char *v83; // rdx
  int v84; // esi
  signed __int64 v85; // rax
  int v86; // ecx
  int v87; // eax
  __int64 v88; // rbx
  __int64 v89; // r13
  RnCollisionAttr_t *v90; // r13
  uint8 *v91; // rcx
  __int64 v92; // r13
  _QWORD *v93; // r12
  int v94; // eax
  unsigned int v95; // eax
  uint v96; // edx
  uint v97; // eax
  int v98; // edx
  int v99; // eax
  __int64 v100; // rbx
  __int64 v101; // r13
  RnCollisionAttr_t *v102; // r13
  uint8 *v103; // rcx
  _DWORD *v104; // rdx
  uint8 *v105; // rax
  __int64 v106; // r13
  _QWORD *v107; // r12
  int v108; // eax
  unsigned int v109; // eax
  uint8 *v110; // rcx
  uint v111; // eax
  uint8 *v112; // rax
  int v113; // r9d
  vec_t z; // edi
  int v115; // ecx
  unsigned __int64 v116; // rbx
  __int64 v117; // r13
  RnCollisionAttr_t *v118; // r13
  _DWORD *p_x; // rdx
  char *v120; // rax
  char *v121; // rax
  __int64 v122; // r13
  _QWORD *v123; // r12
  int v124; // eax
  __int64 v125; // rax
  __int64 v126; // rax
  int v127; // ebx
  __int64 n; // r12
  size_t m_nUsed; // rbx
  uint8 *m_pData; // r12
  __int64 v131; // rax
  CPhysAggregateData *v132; // r14
  _BYTE *v133; // rax
  int v134; // edi
  __int64 ii; // rcx
  __int64 v136; // rdx
  __int64 v137; // rax
  RnCollisionAttr_t *v138; // rdx
  CUtlVectorUltraConservative<RnCollisionAttr_t,CUtlVectorUltraConservativeAllocator>::Data_t *v139; // rax
  const CPhysBodyDesc *v140; // r13
  uint8 *v141; // r12
  __int64 v142; // rbx
  __int64 v143; // r15
  const VPhysXBodyPart_t *v144; // rdx
  __int64 m_pSurfaceProp; // rax
  __int64 v146; // rax
  int *v147; // rax
  const CResourceString *v148; // r12
  int v149; // edx
  __int64 v150; // rsi
  const char *v151; // rcx
  const char *v152; // rsi
  __int64 v153; // rsi
  unsigned int *v154; // rbx
  matrix3x4_t *v155; // rbx
  unsigned __int16 *v156; // rbx
  unsigned __int16 *v157; // rbx
  bool v158; // sf
  uint32 m_nGrowSize; // edx
  uint32 v160; // eax
  const char *m_pBoneName; // rax
  uint8 *v165; // [rsp+20h] [rbp-570h]
  uint8 *v166; // [rsp+28h] [rbp-568h]
  uint8 *v167; // [rsp+30h] [rbp-560h]
  uint8 *v168; // [rsp+38h] [rbp-558h]
  uint8 *v170; // [rsp+48h] [rbp-548h]
  CUtlVector<CPhysBodyDesc::SphereAndAttr_t,CUtlMemory<CPhysBodyDesc::SphereAndAttr_t,int> > *rSpheres; // [rsp+50h] [rbp-540h]
  CUtlVector<CPhysBodyDesc::HullAndAttr_t,CUtlMemory<CPhysBodyDesc::HullAndAttr_t,int> > *p_m_Hulls; // [rsp+58h] [rbp-538h]
  CUtlVector<CPhysBodyDesc::MeshAndAttr_t,CUtlMemory<CPhysBodyDesc::MeshAndAttr_t,int> > *p_m_Meshes; // [rsp+60h] [rbp-530h]
  CUtlVector<CPhysBodyDesc::CapsuleAndAttr_t,CUtlMemory<CPhysBodyDesc::CapsuleAndAttr_t,int> > *p_m_Capsules; // [rsp+68h] [rbp-528h]
  _DWORD *v175; // [rsp+70h] [rbp-520h]
  _DWORD *v176; // [rsp+78h] [rbp-518h]
  _DWORD *v177; // [rsp+80h] [rbp-510h]
  _DWORD *v178; // [rsp+88h] [rbp-508h]
  int nPart; // [rsp+90h] [rbp-500h]
  int m_Size; // [rsp+94h] [rbp-4FCh]
  VPhysics2ShapeDef_t *rShapeDef; // [rsp+98h] [rbp-4F8h]
  VPhysics2ShapeDef_t *rShapeDefa; // [rsp+98h] [rbp-4F8h]
  uint16 *pIndexNames; // [rsp+A0h] [rbp-4F0h]
  matrix3x4_t *pBindPose; // [rsp+A8h] [rbp-4E8h]
  CResourceString *pBoneNames; // [rsp+B0h] [rbp-4E0h]
  CResourceString *pBoneNamesa; // [rsp+B0h] [rbp-4E0h]
  CUtlVectorBase<CPhysBodyDesc::SphereAndAttr_t,CUtlMemory<CPhysBodyDesc::SphereAndAttr_t,int> >::CAllocator *v187; // [rsp+B8h] [rbp-4D8h]
  uint numBytes[2]; // [rsp+C0h] [rbp-4D0h]
  signed int numBytesa; // [rsp+C0h] [rbp-4D0h]
  uint numBytesb[2]; // [rsp+C0h] [rbp-4D0h]
  uint32 numBytesc; // [rsp+C0h] [rbp-4D0h]
  char numBytesd; // [rsp+C0h] [rbp-4D0h]
  uint32 *pBonesHash; // [rsp+C8h] [rbp-4C8h]
  uint32 *pBonesHasha; // [rsp+C8h] [rbp-4C8h]
  intp nOffsetBytes; // [rsp+E0h] [rbp-4B0h]
  intp nOffsetBytesa; // [rsp+E0h] [rbp-4B0h]
  int nOffsetBytesb; // [rsp+E0h] [rbp-4B0h]
  intp nOffsetBytesc; // [rsp+E0h] [rbp-4B0h]
  intp nOffsetBytesd; // [rsp+E0h] [rbp-4B0h]
  CUtlVectorBase<CPhysBodyDesc::MeshAndAttr_t,CUtlMemory<CPhysBodyDesc::MeshAndAttr_t,int> >::CAllocator *p_m_Memory; // [rsp+E8h] [rbp-4A8h]
  CResourceString *v201; // [rsp+E8h] [rbp-4A8h]
  CUtlVectorUltraConservative<const CPhysSurfaceProperties*,CUtlVectorUltraConservativeAllocator>::Data_t *v202; // [rsp+E8h] [rbp-4A8h]
  CUtlVector<CJointIndexData,CUtlMemory<CJointIndexData,int> > arrJoints; // [rsp+F0h] [rbp-4A0h] BYREF
  CResourceStreamVM stream; // [rsp+110h] [rbp-480h] BYREF
  CUtlVectorFixedGrowable<RnCollisionAttr_t,32ul> collisionAttrTemp; // [rsp+140h] [rbp-450h] BYREF
  unsigned __int64 v206; // [rsp+558h] [rbp-38h]

  v206 = __readfsqword(0x28u);
  if ( nPartCount <= 0 )
  {
    *a1 = 0;
    return a1;
  }
  CResourceStreamVM::CResourceStreamVM(&stream, 0x20000u);
  collisionAttrTemp.m_Size = 0;
  collisionAttrTemp.m_Memory.m_nAllocationCount = 32;
  collisionAttrTemp.m_Memory.m_nGrowSize = 0x80000000;
  collisionAttrTemp.m_Memory.m_pMemory = &collisionAttrTemp.m_Memory.m_FixedMemory;
  CResourceStream::Align(&stream, 4u, 0);
  v3 = CResourceStream::AllocateBytes(&stream, 76 * nPartCount);
  v4 = 0;
  v5 = v3 - LODWORD(stream.m_pData);
  if ( stream.m_nUsed >= v5 )
    v4 = &stream.m_pData[v5];
  v6 = v4;
  v7 = 0;
  v166 = v4 + 8;
  v8 = v4 + 8;
  do
  {
    if ( v6 != 0 )
    {
      v9 = v6 - v4;
      *&v8[v9] = 0;
      *&v8[v9 + 4] = 0;
      *(v6 + 4) = 0;
      *&v4[v9 + 20] = 0;
      *(v6 + 6) = 0;
      *&v4[v9 + 28] = 0;
      *(v6 + 8) = 0;
      *&v4[v9 + 36] = 0;
      *(v6 + 10) = 0;
      *&v4[v9 + 44] = 0;
      *(v6 + 12) = 0;
      *(v6 + 13) = 0;
      *&v4[v9 + 56] = 0;
    }
    ++v7;
    v6 += 76;
  }
  while ( nPartCount != v7 );
  v170 = v4;
  v10 = 0;
  nPart = 0;
  rSpheres = &pDesc->m_Spheres;
  v175 = v4 + 36;
  v176 = v4 + 28;
  v177 = v4 + 20;
  v178 = v4 + 12;
  p_m_Meshes = &pDesc->m_Meshes;
  p_m_Memory = &pDesc->m_Meshes.m_Memory;
  p_m_Hulls = &pDesc->m_Hulls;
  pBonesHash = &pDesc->m_Hulls.m_Memory;
  p_m_Capsules = &pDesc->m_Capsules;
  v187 = &pDesc->m_Spheres.m_Memory;
  pBoneNames = &pDesc->m_Capsules.m_Memory;
  v168 = v4 + 16;
  v165 = v4 + 24;
  v167 = v4 + 32;
  do
  {
    *(v170 + 1) = LODWORD(pDesc->m_flMass);
    *(v170 + 16) = 1065353216;
    *(v170 + 17) = 0;
    *(v170 + 18) = 0;
    rShapeDef = &v166[v10];
    m_Size = collisionAttrTemp.m_Size;
    v11 = rSpheres->m_Size;
    if ( rSpheres->m_Size != 0 )
    {
      CResourceStream::Align(&stream, 4u, 0);
      v109 = CResourceStream::AllocateBytes(&stream, 24 * v11);
      v110 = 0;
      v111 = v109 - LODWORD(stream.m_pData);
      if ( stream.m_nUsed >= v111 )
        v110 = &stream.m_pData[v111];
      v112 = v110;
      v113 = 0;
      do
      {
        if ( v112 != 0 )
        {
          z = vec3_origin.z;
          *(v112 + 1) = *&vec3_origin.x;
          *(v112 + 2) = LODWORD(z);
        }
        ++v113;
        v112 += 24;
      }
      while ( v11 != v113 );
      v115 = v110 - rShapeDef;
      *&v166[v10 + 4] = v11;
      *&v166[v10] = v115;
      if ( rSpheres->m_Size != 0 )
      {
        v116 = 0;
        nOffsetBytesc = 8 * (3LL * (rSpheres->m_Size - 1) + 3);
        while ( 1 )
        {
          p_x = &v187->m_pMemory[v116 / 0x18].m_Sphere.m_vCenter.x;
          v120 = 0;
          if ( v115 != 0 )
            v120 = rShapeDef + v115;
          v121 = &v120[v116];
          v122 = collisionAttrTemp.m_Size;
          *(v121 + 2) = *p_x;
          *(v121 + 3) = p_x[1];
          *(v121 + 4) = p_x[2];
          *(v121 + 5) = p_x[3];
          v123 = &v187->m_pMemory[v116 / 0x18].m_Sphere.m_vCenter.x;
          v124 = v122;
          if ( v122 == collisionAttrTemp.m_Memory.m_nAllocationCount )
          {
            CUtlMemory<RnCollisionAttr_t,int>::Grow(&collisionAttrTemp.m_Memory, 1);
            v124 = collisionAttrTemp.m_Size;
          }
          v117 = v122;
          v25 = &collisionAttrTemp.m_Memory.m_pMemory[v117] == 0;
          v118 = &collisionAttrTemp.m_Memory.m_pMemory[v117];
          collisionAttrTemp.m_Size = v124 + 1;
          if ( !v25 )
          {
            v118->m_nInteractsAs = v123[2];
            v118->m_nInteractsWith = v123[3];
            v118->m_nInteractsExclude = v123[4];
            *&v118->m_nEntityId = v123[5];
          }
          v116 += 24LL;
          if ( v116 == nOffsetBytesc )
            break;
          v115 = *&v4[v10 + 8];
        }
      }
    }
    v12 = p_m_Capsules->m_Size;
    if ( p_m_Capsules->m_Size != 0 )
    {
      CResourceStream::Align(&stream, 4u, 0);
      v95 = CResourceStream::AllocateBytes(&stream, 36 * v12);
      v96 = 0;
      v97 = v95 - LODWORD(stream.m_pData);
      if ( stream.m_nUsed >= v97 )
        v96 = LODWORD(stream.m_pData) + v97;
      *&v168[v10 + 4] = v12;
      v98 = v96 - (v10 + v168);
      *&v168[v10] = v98;
      v99 = v98;
      nOffsetBytesb = p_m_Capsules->m_Size;
      if ( p_m_Capsules->m_Size != 0 )
      {
        v100 = 0;
        while ( 1 )
        {
          v103 = 0;
          v104 = (*&pBoneNames->m_nOffset + (v100 << 6));
          if ( v99 != 0 )
            v103 = &v168[v10 + v99];
          v105 = &v103[36 * v100];
          v106 = collisionAttrTemp.m_Size;
          *(v105 + 2) = *v104;
          *(v105 + 3) = v104[1];
          *(v105 + 4) = v104[2];
          *(v105 + 5) = v104[3];
          *(v105 + 6) = v104[4];
          *(v105 + 7) = v104[5];
          *(v105 + 8) = v104[6];
          v107 = (*&pBoneNames->m_nOffset + (v100 << 6));
          v108 = v106;
          if ( v106 == collisionAttrTemp.m_Memory.m_nAllocationCount )
          {
            CUtlMemory<RnCollisionAttr_t,int>::Grow(&collisionAttrTemp.m_Memory, 1);
            v108 = collisionAttrTemp.m_Size;
          }
          v101 = v106;
          v25 = &collisionAttrTemp.m_Memory.m_pMemory[v101] == 0;
          v102 = &collisionAttrTemp.m_Memory.m_pMemory[v101];
          collisionAttrTemp.m_Size = v108 + 1;
          if ( !v25 )
          {
            v102->m_nInteractsAs = v107[4];
            v102->m_nInteractsWith = v107[5];
            v102->m_nInteractsExclude = v107[6];
            *&v102->m_nEntityId = v107[7];
          }
          if ( nOffsetBytesb == ++v100 )
            break;
          v99 = *&v4[v10 + 16];
        }
      }
    }
    v13 = p_m_Hulls->m_Size;
    if ( p_m_Hulls->m_Size != 0 )
    {
      CResourceStream::Align(&stream, 4u, 0);
      v80 = CResourceStream::AllocateBytes(&stream, 156 * v13);
      v81 = 0;
      v82 = v80 - LODWORD(stream.m_pData);
      if ( stream.m_nUsed >= v82 )
        v81 = &stream.m_pData[v82];
      v83 = v81;
      v84 = 0;
      do
      {
        if ( v83 != 0 )
        {
          *(v83 + 6) = 0;
          v85 = v83 - v81;
          *&v81[v85 + 28] = 0;
          *(v83 + 8) = 0;
          *&v81[v85 + 36] = 0;
          *(v83 + 10) = 0;
          *&v81[v85 + 44] = 0;
          *(v83 + 12) = 0;
          *&v81[v85 + 52] = 0;
        }
        ++v84;
        v83 += 156;
      }
      while ( v13 != v84 );
      *&v165[v10 + 4] = v13;
      v86 = v81 - (v10 + v165);
      *&v165[v10] = v86;
      v87 = v86;
      if ( p_m_Hulls->m_Size != 0 )
      {
        nOffsetBytesa = 0;
        *numBytesb = 8 * (5LL * (p_m_Hulls->m_Size - 1) + 5);
        v88 = 0;
        while ( 1 )
        {
          v91 = 0;
          if ( v87 != 0 )
            v91 = &v165[v10 + v87];
          (*(g_pVPhysics2->_vptr_IAppSystem + 34))(g_pVPhysics2, &v91[nOffsetBytesa + 8], *(*pBonesHash + v88), &stream);
          v92 = collisionAttrTemp.m_Size;
          v93 = (*pBonesHash + v88);
          v94 = collisionAttrTemp.m_Size;
          if ( collisionAttrTemp.m_Size == collisionAttrTemp.m_Memory.m_nAllocationCount )
          {
            CUtlMemory<RnCollisionAttr_t,int>::Grow(&collisionAttrTemp.m_Memory, 1);
            v94 = collisionAttrTemp.m_Size;
          }
          v89 = v92;
          v25 = &collisionAttrTemp.m_Memory.m_pMemory[v89] == 0;
          v90 = &collisionAttrTemp.m_Memory.m_pMemory[v89];
          collisionAttrTemp.m_Size = v94 + 1;
          if ( !v25 )
          {
            v90->m_nInteractsAs = v93[1];
            v90->m_nInteractsWith = v93[2];
            v90->m_nInteractsExclude = v93[3];
            *&v90->m_nEntityId = v93[4];
          }
          nOffsetBytesa += 156LL;
          v88 += 40;
          if ( v88 == *numBytesb )
            break;
          v87 = *&v4[v10 + 24];
        }
      }
    }
    v14 = p_m_Meshes->m_Size;
    if ( p_m_Meshes->m_Size != 0 )
    {
      CResourceStream::Align(&stream, 4u, 0);
      v15 = CResourceStream::AllocateBytes(&stream, 76 * v14);
      v16 = 0;
      v17 = v15 - LODWORD(stream.m_pData);
      if ( stream.m_nUsed >= v17 )
        v16 = &stream.m_pData[v17];
      v18 = v16;
      v19 = 0;
      do
      {
        if ( v18 != 0 )
        {
          *(v18 + 8) = 0;
          v20 = v18 - v16;
          *&v16[v20 + 36] = 0;
          *(v18 + 10) = 0;
          *&v16[v20 + 44] = 0;
          *(v18 + 12) = 0;
          *&v16[v20 + 52] = 0;
          *(v18 + 14) = 0;
          *&v16[v20 + 60] = 0;
        }
        ++v19;
        v18 += 76;
      }
      while ( v14 != v19 );
      *&v167[v10 + 4] = v14;
      v21 = v16 - (v10 + v167);
      *&v167[v10] = v21;
      v22 = v21;
      if ( p_m_Meshes->m_Size != 0 )
      {
        nOffsetBytes = 0;
        *numBytes = 8 * (5LL * (p_m_Meshes->m_Size - 1) + 5);
        v23 = 0;
        while ( 1 )
        {
          v27 = 0;
          if ( v22 != 0 )
            v27 = &v167[v10 + v22];
          (*(g_pVPhysics2->_vptr_IAppSystem + 38))(
            g_pVPhysics2,
            &v27[nOffsetBytes + 8],
            p_m_Memory->m_pMemory[v23 / 0x28].m_pMesh,
            &stream);
          v28 = collisionAttrTemp.m_Size;
          v29 = &p_m_Memory->m_pMemory[v23 / 0x28];
          v30 = collisionAttrTemp.m_Size;
          if ( collisionAttrTemp.m_Size == collisionAttrTemp.m_Memory.m_nAllocationCount )
          {
            CUtlMemory<RnCollisionAttr_t,int>::Grow(&collisionAttrTemp.m_Memory, 1);
            v30 = collisionAttrTemp.m_Size;
          }
          v24 = v28;
          v25 = &collisionAttrTemp.m_Memory.m_pMemory[v24] == 0;
          v26 = &collisionAttrTemp.m_Memory.m_pMemory[v24];
          collisionAttrTemp.m_Size = v30 + 1;
          if ( !v25 )
          {
            v26->m_nInteractsAs = v29->m_Attr.m_nInteractsAs;
            v26->m_nInteractsWith = v29->m_Attr.m_nInteractsWith;
            v26->m_nInteractsExclude = v29->m_Attr.m_nInteractsExclude;
            *&v26->m_nEntityId = *&v29->m_Attr.m_nEntityId;
          }
          nOffsetBytes += 76LL;
          v23 += 40LL;
          if ( v23 == *numBytes )
            break;
          v22 = *&v4[v10 + 32];
        }
      }
    }
    v31 = collisionAttrTemp.m_Size - m_Size;
    CResourceStream::Align(&stream, 2u, 0);
    v32 = CResourceStream::AllocateBytes(&stream, 2 * v31);
    v33 = 0;
    v34 = v32 - LODWORD(stream.m_pData);
    if ( stream.m_nUsed >= v34 )
      v33 = LODWORD(stream.m_pData) + v34;
    v35 = v4 + 40;
    if ( v31 != 0 )
      v36 = v33 - (v4 + 40 + v10);
    else
      v36 = 0;
    *&v35[v10 + 4] = v31;
    v37 = 0;
    *&v35[v10] = v36;
    v38 = &v35[v10];
    v39 = m_Size;
    if ( m_Size < collisionAttrTemp.m_Size )
    {
      while ( 1 )
      {
        v40 = 0;
        if ( v36 != 0 )
          v40 = &v38[v36];
        *&v40[v37] = v39++;
        v37 += 2;
        if ( collisionAttrTemp.m_Size <= v39 )
          break;
        v36 = *&v4[v10 + 40];
      }
    }
    v41 = 0;
    arrJoints.m_Size = 0;
    *(&arrJoints.m_Size + 1) = nPart;
    for ( i = 0; i < *v178; v41 += 24 )
    {
      v43 = *&v4[v10 + 8];
      v44 = 0;
      if ( v43 != 0 )
        v44 = rShapeDef + v43;
      ++i;
      *&v44[v41] = *&arrJoints.m_Size;
    }
    v45 = 0;
    for ( j = 0; j < *v177; v45 += 36 )
    {
      v47 = *&v4[v10 + 16];
      v48 = 0;
      if ( v47 != 0 )
        v48 = &v168[v10 + v47];
      ++j;
      *&v48[v45] = *&arrJoints.m_Size;
    }
    v49 = 0;
    for ( k = 0; k < *v176; v49 += 156 )
    {
      v51 = *&v4[v10 + 24];
      v52 = 0;
      if ( v51 != 0 )
        v52 = &v165[v10 + v51];
      ++k;
      *&v52[v49] = *&arrJoints.m_Size;
    }
    v53 = 0;
    for ( m = 0; m < *v175; v53 += 76 )
    {
      v55 = *&v4[v10 + 32];
      v56 = 0;
      if ( v55 != 0 )
        v56 = &v167[v10 + v55];
      ++m;
      *&v56[v53] = *&arrJoints.m_Size;
    }
    ++nPart;
    v10 += 76;
    v170 += 76;
    rSpheres = (rSpheres + 176);
    v175 += 19;
    v176 += 19;
    v177 += 19;
    v178 += 19;
    p_m_Meshes = (p_m_Meshes + 176);
    p_m_Memory += 11;
    p_m_Hulls = (p_m_Hulls + 176);
    pBonesHash += 44;
    p_m_Capsules = (p_m_Capsules + 176);
    pBoneNames += 44;
    v187 += 11;
  }
  while ( nPart != nPartCount );
  if ( nPartCount == 1 )
  {
    m_pBoneName = pDesc->m_pBoneName;
    if ( m_pBoneName == 0 || *m_pBoneName == 0 )
    {
      numBytesd = 0;
      rShapeDefa = 0;
      pIndexNames = 0;
      pBonesHasha = 0;
      pBoneNamesa = 0;
      pBindPose = 0;
      goto LABEL_141;
    }
  }
  CResourceStream::Align(&stream, 4u, 0);
  v57 = CResourceStream::AllocateBytes(&stream, 48 * nPartCount);
  pBindPose = 0;
  v58 = v57 - LODWORD(stream.m_pData);
  if ( stream.m_nUsed >= v58 )
    pBindPose = &stream.m_pData[v58];
  CResourceStream::Align(&stream, 4u, 0);
  v59 = CResourceStream::AllocateBytes(&stream, 4 * nPartCount);
  pBoneNamesa = 0;
  v60 = v59 - LODWORD(stream.m_pData);
  if ( stream.m_nUsed >= v60 )
    pBoneNamesa = &stream.m_pData[v60];
  v61 = pBoneNamesa;
  v62 = 0;
  do
  {
    if ( v61 != 0 )
      v61->m_nOffset = 0;
    ++v62;
    ++v61;
  }
  while ( nPartCount != v62 );
  CResourceStream::Align(&stream, 4u, 0);
  v63 = CResourceStream::AllocateBytes(&stream, 4 * nPartCount);
  pBonesHasha = 0;
  v64 = v63 - LODWORD(stream.m_pData);
  if ( stream.m_nUsed >= v64 )
    pBonesHasha = &stream.m_pData[v64];
  CResourceStream::Align(&stream, 2u, 0);
  v65 = CResourceStream::AllocateBytes(&stream, 2 * nPartCount);
  pIndexNames = 0;
  v66 = v65 - LODWORD(stream.m_pData);
  if ( stream.m_nUsed >= v66 )
    pIndexNames = &stream.m_pData[v66];
  CResourceStream::Align(&stream, 2u, 0);
  v67 = CResourceStream::AllocateBytes(&stream, 2 * nPartCount);
  rShapeDefa = 0;
  v68 = v67 - LODWORD(stream.m_pData);
  if ( stream.m_nUsed >= v68 )
    rShapeDefa = &stream.m_pData[v68];
  arrJoints.m_Size = 0;
  arrJoints.m_Memory.m_pMemory = 0;
  arrJoints.m_Memory.m_nAllocationCount = 0;
  arrJoints.m_Memory.m_nGrowSize = 0;
  CUtlVectorBase<CJointIndexData,CUtlMemory<CJointIndexData,int>>::SetCount(&arrJoints, nPartCount);
  v69 = pDesc;
  v70 = 0;
  v71 = pBindPose->m_flMatVal[0];
  v201 = pBoneNamesa;
  do
  {
    *v71 = *&v69->m_BindPose.m_flMatVal[0][0];
    v71[1] = *&v69->m_BindPose.m_flMatVal[0][2];
    v71[2] = *&v69->m_BindPose.m_flMatVal[1][0];
    v71[3] = *&v69->m_BindPose.m_flMatVal[1][2];
    v71[4] = *&v69->m_BindPose.m_flMatVal[2][0];
    v71[5] = *&v69->m_BindPose.m_flMatVal[2][2];
    v78 = v69->m_pBoneName;
    if ( v78 == 0 )
      goto LABEL_80;
    v79 = strlen(v69->m_pBoneName);
    if ( v79 == 0 )
      goto LABEL_80;
    numBytesa = v79 + 1;
    CResourceStream::Align(&stream, 1u, 0);
    v72 = CResourceStream::AllocateBytes(&stream, numBytesa);
    v73 = v72 - LODWORD(stream.m_pData);
    if ( stream.m_nUsed < v73 )
    {
      memcpy(0, v78, numBytesa);
      v201->m_nOffset = 0;
      goto LABEL_75;
    }
    v74 = memcpy(&stream.m_pData[v73], v78, numBytesa);
    if ( v74 != 0 )
      v201->m_nOffset = v74 - v201;
    else
LABEL_80:
      v201->m_nOffset = 0;
LABEL_75:
    v75 = v69->m_pBoneName;
    v76 = 0;
    if ( v75 != 0 && *v75 != 0 )
    {
      numBytesc = MurmurHash2LowerCase(v69->m_pBoneName, 0x31415926u);
      if ( g_bUpdateStringTokenDatabase )
        RegisterStringToken(numBytesc, v75, 0, 1);
      v76 = numBytesc;
    }
    pBonesHasha[v70] = v76;
    v77 = v70;
    arrJoints.m_Memory.m_pMemory[v77].m_hash.m_nHashCode = v76;
    arrJoints.m_Memory.m_pMemory[v77].m_nIndex = v70;
    CUtlString::operator=(&arrJoints.m_Memory.m_pMemory[v70++].m_String, v69->m_pBoneName);
    ++v69;
    v71 += 6;
    ++v201;
  }
  while ( v70 != (nPartCount - 1) + 1LL );
  CUtlVectorBase<CJointIndexData,CUtlMemory<CJointIndexData,int>>::Sort(&arrJoints, CJointIndexData::CompareHash);
  v125 = 0;
  do
  {
    *(&rShapeDefa->m_spheres.m_nOffset + v125) = arrJoints.m_Memory.m_pMemory[v125].m_nIndex;
    ++v125;
  }
  while ( nPartCount > v125 );
  CUtlVectorBase<CJointIndexData,CUtlMemory<CJointIndexData,int>>::Sort(&arrJoints, CJointIndexData::CompareString);
  v126 = 0;
  do
  {
    pIndexNames[v126] = arrJoints.m_Memory.m_pMemory[v126].m_nIndex;
    ++v126;
  }
  while ( nPartCount > v126 );
  v127 = arrJoints.m_Size;
  for ( n = 16LL * arrJoints.m_Size - 16; --v127 >= 0; n -= 16 )
  {
    if ( *(&arrJoints.m_Memory.m_pMemory->m_String.m_pString + n) != 0 )
      CUtlString::FreeMemoryBlock((&arrJoints.m_Memory.m_pMemory->m_String + n));
  }
  arrJoints.m_Size = 0;
  if ( (arrJoints.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CJointIndexData,int>::Purge(&arrJoints.m_Memory);
    if ( (arrJoints.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CJointIndexData,int>::Purge(&arrJoints.m_Memory);
  }
  numBytesd = 1;
LABEL_141:
  m_nUsed = stream.m_nUsed;
  m_pData = stream.m_pData;
  v131 = (**g_pMemAlloc)(g_pMemAlloc, stream.m_nUsed + 215LL);
  v132 = ((v131 + 23) & 0xFFFFFFFFFFFFFFF0LL);
  v132[-1].m_pEmbeddedKeyvalues = v131;
  CPhysAggregateData::CPhysAggregateData(v132, 0);
  v132->m_nFlags |= 0x100u;
  v133 = memcpy(&v132[1], m_pData, m_nUsed);
  nOffsetBytesd = v133 - stream.m_pData;
  CUtlVectorUltraConservative<RnCollisionAttr_t,CUtlVectorUltraConservativeAllocator>::EnsureCount(
    &v132->m_CollisionAttributes,
    collisionAttrTemp.m_Size);
  v134 = collisionAttrTemp.m_Size;
  for ( ii = 0; v134 != ii; *&v139->m_Elements[0].m_nEntityId = *&v138->m_nEntityId )
  {
    v136 = ii;
    v137 = ii++;
    v138 = &collisionAttrTemp.m_Memory.m_pMemory[v136];
    v139 = v132->m_CollisionAttributes.m_pData + 4 * v137;
    v139->m_Elements[0].m_nInteractsAs = v138->m_nInteractsAs;
    v139->m_Elements[0].m_nInteractsWith = v138->m_nInteractsWith;
    v139->m_Elements[0].m_nInteractsExclude = v138->m_nInteractsExclude;
  }
  CUtlVectorBase<VPhysXBodyPart_t const*,CUtlMemoryConservative<VPhysXBodyPart_t const*>>::SetCount(
    &v132->m_Parts,
    nPartCount);
  CUtlVectorUltraConservative<CPhysSurfaceProperties const*,CUtlVectorUltraConservativeAllocator>::EnsureCount(
    &v132->m_SurfaceProperties,
    nPartCount);
  v140 = pDesc;
  v141 = v4;
  v142 = 0;
  do
  {
    v143 = v142;
    v144 = &v141[nOffsetBytesd];
    if ( v141 == 0 )
      v144 = 0;
    v132->m_Parts.m_Memory.m_pMemory[v142] = v144;
    v202 = v132->m_SurfaceProperties.m_pData;
    m_pSurfaceProp = v140->m_pSurfaceProp;
    if ( m_pSurfaceProp == 0 )
    {
      v146 = (*(g_pVPhysics2->_vptr_IAppSystem + 18))(g_pVPhysics2);
      m_pSurfaceProp = (*(*v146 + 48LL))(v146);
    }
    ++v142;
    v141 += 76;
    ++v140;
    v202->m_Elements[v143] = m_pSurfaceProp;
  }
  while ( v142 != (nPartCount - 1) + 1LL );
  if ( numBytesd != 0 )
  {
    CUtlVectorUltraConservative<char const*,CUtlVectorUltraConservativeAllocator>::EnsureCount(
      &v132->m_BoneNames,
      nPartCount);
    v147 = 0;
    v148 = (pBoneNamesa + nOffsetBytesd);
    if ( pBoneNamesa != 0 )
      v147 = (&pBoneNamesa->m_nOffset + nOffsetBytesd);
    v149 = 0;
    do
    {
      v150 = *v147;
      v151 = "";
      if ( v150 != 0 )
      {
        v152 = v147 + v150;
        if ( v152 != 0 )
          v151 = v152;
      }
      v153 = v149++;
      ++v147;
      v132->m_BoneNames.m_pData->m_Elements[v153] = v151;
    }
    while ( v149 != nPartCount );
    v154 = 0;
    if ( pBonesHasha != 0 )
      v154 = (pBonesHasha + nOffsetBytesd);
    if ( (v132->m_BonesHash.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<unsigned int,int>::Purge(&v132->m_BonesHash);
    v132->m_BonesHash.m_pMemory = v154;
    v155 = 0;
    v132->m_BonesHash.m_nGrowSize = -1073741824;
    v132->m_BonesHash.m_nAllocationCount = nPartCount;
    if ( pBindPose != 0 )
      v155 = (pBindPose + nOffsetBytesd);
    if ( (v132->m_BindPose.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<matrix3x4_t,int>::Purge(&v132->m_BindPose);
    v132->m_BindPose.m_pMemory = v155;
    v132->m_BindPose.m_nGrowSize = -1073741824;
    v132->m_BindPose.m_nAllocationCount = nPartCount;
    if ( pBoneNamesa == 0 )
      v148 = 0;
    v156 = (rShapeDefa + nOffsetBytesd);
    v132->m_pDebugPartNames = v148;
    if ( rShapeDefa == 0 )
      v156 = 0;
    if ( (v132->m_IndexHash.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<unsigned short,int>::Purge(&v132->m_IndexHash);
    v132->m_IndexHash.m_pMemory = v156;
    v157 = 0;
    v132->m_IndexHash.m_nGrowSize = -1073741824;
    v132->m_IndexHash.m_nAllocationCount = nPartCount;
    if ( pIndexNames != 0 )
      v157 = (pIndexNames + nOffsetBytesd);
    if ( (v132->m_IndexNames.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<unsigned short,int>::Purge(&v132->m_IndexNames);
    v132->m_IndexNames.m_pMemory = v157;
    v132->m_IndexNames.m_nGrowSize = -1073741824;
    v132->m_IndexNames.m_nAllocationCount = nPartCount;
  }
  _InterlockedAdd(v132, 1u);
  *a1 = 0;
  _InterlockedAdd(v132, 1u);
  if ( *a1 != 0 )
    CPhysAggregateData::Release(*a1);
  collisionAttrTemp.m_Size = 0;
  v158 = collisionAttrTemp.m_Memory.m_nAllocationCount < 0;
  *a1 = v132;
  if ( v158 )
  {
    v160 = collisionAttrTemp.m_Memory.m_nGrowSize & 0xC0000000;
  }
  else
  {
    m_nGrowSize = collisionAttrTemp.m_Memory.m_nGrowSize;
    v160 = collisionAttrTemp.m_Memory.m_nGrowSize & 0xC0000000;
    if ( collisionAttrTemp.m_Memory.m_pMemory != &collisionAttrTemp.m_Memory.m_FixedMemory )
    {
      if ( collisionAttrTemp.m_Memory.m_pMemory != 0 && v160 == 0 )
      {
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
        m_nGrowSize = collisionAttrTemp.m_Memory.m_nGrowSize;
      }
      collisionAttrTemp.m_Memory.m_nAllocationCount = 32;
      collisionAttrTemp.m_Memory.m_pMemory = &collisionAttrTemp.m_Memory.m_FixedMemory;
      collisionAttrTemp.m_Memory.m_nGrowSize = m_nGrowSize & 0x3FFFFFFF | 0x80000000;
      goto LABEL_184;
    }
  }
  if ( v160 == 0 )
    CUtlMemory<RnCollisionAttr_t,int>::Purge(&collisionAttrTemp.m_Memory);
LABEL_184:
  CResourceStreamVM::~CResourceStreamVM(&stream);
  return a1;
}


// CPhysAggregateData::GetRuntimeSize  (line 836, @0x00000000031aa300, libserver.so)  // inlines: Count, GetRuntimeSizeOfArray<CUtlMemory<matrix3x4_t> >, GetRuntimeSizeOfArray<CUtlMemory<short unsigned int, int> >, GetRuntimeSizeOfArray<CUtlMemory<unsigned int, int> >, GetRuntimeSizeOfArray<CUtlVectorConservative<const VPhysXBodyPart_t*> >, GetRuntimeSizeOfArray<CUtlVectorUltraConservative<CPhysConstraintData> >, GetRuntimeSizeOfArray<CUtlVectorUltraConservative<RnCollisionAttr_t> >, GetRuntimeSizeOfArray<CUtlVectorUltraConservative<char const*> >, GetRuntimeSizeOfArray<CUtlVectorUltraConservative<const CPhysAggregateData*> >, GetRuntimeSizeOfArray<CUtlVectorUltraConservative<const CPhysSurfaceProperties*> >, MemAlloc_GetSizeAlignedFunc
// callers: DumpAggregateDataRegistry
uintp __fastcall CPhysAggregateData::GetRuntimeSize(const CPhysAggregateData *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rdx
  uint16 m_nFlags; // ax
  CUtlVectorUltraConservative<CPhysConstraintData,CUtlVectorUltraConservativeAllocator>::Data_t *m_pData; // rsi
  __int64 v6; // rax
  CUtlVectorUltraConservative<char const*,CUtlVectorUltraConservativeAllocator>::Data_t *v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  uintp v10; // rax
  int m_Size; // ecx
  CUtlVectorUltraConservative<RnCollisionAttr_t,CUtlVectorUltraConservativeAllocator>::Data_t *v12; // rsi
  int v13; // edx
  CUtlVectorUltraConservative<const CPhysSurfaceProperties*,CUtlVectorUltraConservativeAllocator>::Data_t *v14; // rsi
  uintp v15; // rdx
  CUtlVectorUltraConservative<const CPhysAggregateData*,CUtlVectorUltraConservativeAllocator>::Data_t *v16; // rsi

  v2 = 192;
  m_nFlags = this->m_nFlags;
  if ( (m_nFlags & 0x100) != 0 )
  {
    v2 = (*(*g_pMemAlloc + 128LL))(g_pMemAlloc, *((this & 0xFFFFFFFFFFFFFFF8LL) - 8), 192) + v1 - this;
    m_nFlags = this->m_nFlags;
  }
  m_pData = this->m_Constraints.m_pData;
  if ( (m_nFlags & 0x600) != 0 )
  {
    if ( m_pData != 0 )
      v6 = 248LL * m_pData->m_Size;
    else
      v6 = 0;
    v2 += v6;
  }
  v7 = this->m_BoneNames.m_pData;
  if ( v7 != 0 )
    v8 = 8 * v7->m_Size;
  else
    v8 = 0;
  v9 = v2 + v8;
  if ( (this->m_BonesHash.m_nGrowSize & 0xC0000000) == 0 )
    v9 += 4 * this->m_BonesHash.m_nAllocationCount;
  if ( (this->m_IndexNames.m_nGrowSize & 0xC0000000) == 0 )
    v9 += 2 * this->m_IndexNames.m_nAllocationCount;
  if ( (this->m_IndexHash.m_nGrowSize & 0xC0000000) == 0 )
    v9 += 2 * this->m_IndexHash.m_nAllocationCount;
  if ( (this->m_BindPose.m_nGrowSize & 0xC0000000) == 0 )
    v9 += 48 * this->m_BindPose.m_nAllocationCount;
  v10 = 8 * this->m_Parts.m_Size + v9;
  if ( m_pData != 0 )
  {
    m_Size = m_pData->m_Size;
    v12 = this->m_CollisionAttributes.m_pData;
    v10 += 16 * m_Size;
    if ( v12 != 0 )
      goto LABEL_19;
  }
  else
  {
    v12 = this->m_CollisionAttributes.m_pData;
    if ( v12 != 0 )
    {
LABEL_19:
      v13 = v12->m_Size;
      v14 = this->m_SurfaceProperties.m_pData;
      v15 = v10 + 32 * v13;
      if ( v14 != 0 )
        goto LABEL_20;
LABEL_25:
      v16 = this->m_ParentResources.m_pData;
      if ( v16 != 0 )
        return v15 + 8 * v16->m_Size;
      return v15;
    }
  }
  v14 = this->m_SurfaceProperties.m_pData;
  v15 = v10;
  if ( v14 == 0 )
    goto LABEL_25;
LABEL_20:
  v15 += 8 * v14->m_Size;
  v16 = this->m_ParentResources.m_pData;
  if ( v16 != 0 )
    return v15 + 8 * v16->m_Size;
  return v15;
}


// DumpAggregateDataRegistry  (line 873, @0x00000000031aa730, libserver.so)  // inlines: operator[]
// calls: CPhysAggregateData::GetRuntimeSize, Msg, V_pretifymem, CPhysAggregateData::GetChecksum
// strings: "Currently allocated agg data: {", "  0x%08X %s,\n", "}\n %llu aggs, %s total data\n"
void __cdecl DumpAggregateDataRegistry()
{
  __int64 v0; // rbx
  CPhysAggregateData *v1; // r12
  int RuntimeSize; // r15d
  __int64 v3; // r13
  const char *v4; // r15
  uint32 Checksum; // eax
  float v6; // xmm0_4
  const char *v7; // rax

  if ( g_pVPhysics2->m_AggDataRegistry.m_data.m_Size > 0 )
  {
    v0 = 0;
    v1 = *g_pVPhysics2->m_AggDataRegistry.m_data.m_Memory.m_pMemory;
    RuntimeSize = CPhysAggregateData::GetRuntimeSize(v1);
    v3 = RuntimeSize;
    Msg("Currently allocated agg data: {");
    while ( 1 )
    {
      ++v0;
      v4 = V_pretifymem(2, 0, RuntimeSize);
      Checksum = CPhysAggregateData::GetChecksum(v1);
      Msg("  0x%08X %s,\n", Checksum, v4);
      if ( g_pVPhysics2->m_AggDataRegistry.m_data.m_Size <= v0 )
        break;
      v1 = g_pVPhysics2->m_AggDataRegistry.m_data.m_Memory.m_pMemory[v0];
      RuntimeSize = CPhysAggregateData::GetRuntimeSize(v1);
      v3 += RuntimeSize;
    }
    if ( v3 < 0 )
      v6 = (v3 & 1 | (v3 >> 1)) + (v3 & 1 | (v3 >> 1));
    else
      v6 = v3;
    v7 = V_pretifymem(2, 0, v6);
    Msg("}\n %llu aggs, %s total data\n", v0, v7);
  }
}


// CRC32_ProcessPlainArray<CResourceArray<Vector> >  (line 909, @0x00000000031af0e0, libserver.so)  // inlines: Base, GetRawPtr, ResolveOffset
// calls: CRC32_ProcessBuffer
// callers: CRC32_Process<RnHull_t>, CRC32_Process<RnMesh_t>
void __fastcall CRC32_ProcessPlainArray<CResourceArray<Vector>>(
        CRC32_t *pCrc,
        const CResourceArray<Vector> *const array)
{
  uint32 m_nCount; // edx
  int32 m_nOffset; // ecx
  char *v5; // rsi
  int v6; // edx

  m_nCount = array->m_nCount;
  m_nOffset = array->m_nOffset;
  v5 = 0;
  v6 = 12 * m_nCount;
  if ( m_nOffset != 0 )
    v5 = array + m_nOffset;
  CRC32_ProcessBuffer(pCrc, v5, v6);
}


// CRC32_Process<RnHull_t>  (line 917, @0x00000000031aa840, libserver.so)  // inlines: Base, CRC32_ProcessPlainArray<CResourceArray<RnFace_t> >, CRC32_ProcessPlainArray<CResourceArray<RnHalfEdge_t> >, CRC32_ProcessPlainArray<CResourceArray<RnPlane_t> >, Count, GetRawPtr, ResolveOffset
// calls: CRC32_ProcessBuffer, CRC32_ProcessPlainArray<CResourceArray<Vector> >
// callers: CRC32_Process<RnHullDesc_t>
void __fastcall CRC32_Process<RnHull_t>(CRC32_t *pCrc, const RnHull_t *const data)
{
  char *v4; // rsi
  __int64 m_nOffset; // rax
  char *v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rax
  char *v9; // rsi

  CRC32_ProcessBuffer(pCrc, data, 148);
  CRC32_ProcessPlainArray<CResourceArray<Vector>>(pCrc, &data->m_Vertices);
  v4 = 0;
  m_nOffset = data->m_Planes.m_nOffset;
  if ( m_nOffset != 0 )
    v4 = &data->m_Planes + m_nOffset;
  CRC32_ProcessBuffer(pCrc, v4, 16 * data->m_Planes.m_nCount);
  v6 = 0;
  v7 = data->m_Edges.m_nOffset;
  if ( v7 != 0 )
    v6 = &data->m_Edges + v7;
  CRC32_ProcessBuffer(pCrc, v6, 4 * data->m_Edges.m_nCount);
  v8 = data->m_Faces.m_nOffset;
  v9 = 0;
  if ( v8 != 0 )
    v9 = &data->m_Faces + v8;
  CRC32_ProcessBuffer(pCrc, v9, data->m_Faces.m_nCount);
}


// CRC32_Process<RnMesh_t>  (line 929, @0x00000000031aa8f0, libserver.so)  // inlines: Base, CRC32_ProcessPlainArray<CResourceArray<RnNode_t> >, CRC32_ProcessPlainArray<CResourceArray<RnTriangle_t> >, CRC32_ProcessPlainArray<CResourceArray<unsigned char> >, Count, GetRawPtr, ResolveOffset
// calls: CRC32_ProcessBuffer, CRC32_ProcessPlainArray<CResourceArray<Vector> >
void __fastcall CRC32_Process<RnMesh_t>(CRC32_t *pCrc, const RnMesh_t *const data)
{
  char *v4; // rsi
  __int64 m_nOffset; // rax
  char *v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rax
  char *v9; // rsi

  CRC32_ProcessBuffer(pCrc, data, 68);
  CRC32_ProcessPlainArray<CResourceArray<Vector>>(pCrc, &data->m_Vertices);
  v4 = 0;
  m_nOffset = data->m_Nodes.m_nOffset;
  if ( m_nOffset != 0 )
    v4 = &data->m_Nodes + m_nOffset;
  CRC32_ProcessBuffer(pCrc, v4, 32 * data->m_Nodes.m_nCount);
  v6 = 0;
  v7 = data->m_Triangles.m_nOffset;
  if ( v7 != 0 )
    v6 = &data->m_Triangles + v7;
  CRC32_ProcessBuffer(pCrc, v6, 12 * data->m_Triangles.m_nCount);
  v8 = data->m_Materials.m_nOffset;
  v9 = 0;
  if ( v8 != 0 )
    v9 = &data->m_Materials + v8;
  CRC32_ProcessBuffer(pCrc, v9, data->m_Materials.m_nCount);
}


// CRC32_Process<RnHullDesc_t>  (line 941, @0x00000000031aa8c0, libserver.so)  // inlines: CRC32_Process<RnShapeDesc_t>
// calls: CRC32_ProcessBuffer, CRC32_Process<RnHull_t>
void __fastcall CRC32_Process<RnHullDesc_t>(CRC32_t *pCrc, const RnHullDesc_t *const data)
{
  CRC32_ProcessBuffer(pCrc, data, 8);
  CRC32_Process<RnHull_t>(pCrc, &data->m_Hull);
}


// CRC32_Process<VPhysics2ShapeDef_t>  (line 950, @0x00000000031aa4e0, libserver.so)  // inlines: Base, CRC32_Process<CResourceArray<RnCapsuleDesc_t> >, CRC32_Process<CResourceArray<RnHullDesc_t> >, CRC32_Process<CResourceArray<RnMeshDesc_t> >, CRC32_Process<CResourceArray<RnSphereDesc_t> >, CRC32_ProcessPlainArray<CResourceArray<short unsigned int> >, GetRawPtr, ResolveOffset
// calls: CRC32_ProcessBuffer
void __fastcall CRC32_Process<VPhysics2ShapeDef_t>(CRC32_t *pCrc, const VPhysics2ShapeDef_t *const data)
{
  char *v4; // rsi
  __int64 m_nOffset; // rax

  CRC32_ProcessBuffer(pCrc, data, 8);
  CRC32_ProcessBuffer(pCrc, &data->m_capsules, 8);
  CRC32_ProcessBuffer(pCrc, &data->m_hulls, 8);
  CRC32_ProcessBuffer(pCrc, &data->m_meshes, 8);
  v4 = 0;
  m_nOffset = data->m_CollisionAttributeIndices.m_nOffset;
  if ( m_nOffset != 0 )
    v4 = &data->m_CollisionAttributeIndices + m_nOffset;
  CRC32_ProcessBuffer(pCrc, v4, 2 * data->m_CollisionAttributeIndices.m_nCount);
}


// CRC32_Process<CPhysConstraintData>  (line 962, @0x00000000031aa550, libserver.so)  // inlines: CRC32_Process<short unsigned int>, CRC32_Process<unsigned int>
// calls: CRC32_ProcessBuffer
// callers: CPhysAggregateData::GetChecksum
void __fastcall CRC32_Process<CPhysConstraintData>(CRC32_t *pCrc, const CPhysConstraintData *const data)
{
  CRC32_ProcessBuffer(pCrc, &data->m_nChild, 2);
  CRC32_ProcessBuffer(pCrc, &data->m_nParent, 2);
  CRC32_ProcessBuffer(pCrc, data, 4);
  CRC32_ProcessBuffer(pCrc, data->m_pParams, 248);
}


// VPhysXAggregateData_t::GetChecksum  (line 994, @0x00000000031aa5b0, libserver.so)  // inlines: CRC32_Process<VPhysXBodyPart_t>, CRC32_Process<VPhysXConstraint2_t>, CRC32_ProcessArray<CResourceArray<VPhysXBodyPart_t> >, CRC32_ProcessArray<CResourceArray<VPhysXConstraint2_t> >, GetPtr, GetRawPtr, ResolveOffset, operator[]
// calls: CRC32_Init, CRC32_ProcessBuffer, CRC32_Final
uint32 __fastcall VPhysXAggregateData_t::GetChecksum(const VPhysXAggregateData_t *const this)
{
  __int64 v1; // r13
  signed int v2; // r12d
  CResourceArray<VPhysXBodyPart_t> *p_m_parts; // r15
  int32 m_nOffset; // eax
  char *v6; // rsi
  __int64 i; // r12
  int32 v8; // edx
  char *v9; // rax
  CRC32_t crc[13]; // [rsp+Ch] [rbp-34h] BYREF

  v1 = 0;
  v2 = 0;
  p_m_parts = &this->m_parts;
  CRC32_Init(crc);
  if ( this->m_parts.m_nCount > 0 )
  {
    do
    {
      m_nOffset = this->m_parts.m_nOffset;
      v6 = 0;
      if ( m_nOffset != 0 )
        v6 = p_m_parts + m_nOffset;
      CRC32_ProcessBuffer(crc, &v6[v1], 76);
      ++v2;
      v1 += 76;
    }
    while ( v2 < this->m_parts.m_nCount );
  }
  for ( i = 0; i < this->m_constraints2.m_nCount; ++i )
  {
    v8 = this->m_constraints2.m_nOffset;
    v9 = 0;
    if ( v8 != 0 )
      v9 = &this->m_constraints2 + v8;
    CRC32_ProcessBuffer(crc, &v9[256 * i], 256);
  }
  CRC32_Final(crc);
  return crc[0];
}


// CPhysAggregateData::GetChecksum  (line 1006, @0x00000000031aa680, libserver.so)  // inlines: CRC32_Process<VPhysXBodyPart_t>, CRC32_ProcessArray<CUtlVectorUltraConservative<CPhysConstraintData> >, CRC32_ProcessArrayOfPtrs<CUtlVectorConservative<const VPhysXBodyPart_t*> >, Count
// calls: CRC32_Init, CRC32_ProcessBuffer, CRC32_Process<CPhysConstraintData>, CRC32_Final
// callers: DumpAggregateDataRegistry
uint32 __fastcall CPhysAggregateData::GetChecksum(const CPhysAggregateData *const this)
{
  __int64 v1; // r14
  int v3; // ebx
  const VPhysXBodyPart_t *v4; // rsi
  int i; // ebx
  __int64 v6; // rdx
  CUtlVectorUltraConservative<CPhysConstraintData,CUtlVectorUltraConservativeAllocator>::Data_t *m_pData; // rax
  CRC32_t crc[9]; // [rsp+Ch] [rbp-24h] BYREF

  v1 = 0;
  v3 = 0;
  CRC32_Init(crc);
  if ( this->m_Parts.m_Size > 0 )
  {
    do
    {
      ++v3;
      v4 = this->m_Parts.m_Memory.m_pMemory[v1++];
      CRC32_ProcessBuffer(crc, v4, 76);
    }
    while ( v3 < this->m_Parts.m_Size );
  }
  for ( i = 0; ; ++i )
  {
    m_pData = this->m_Constraints.m_pData;
    if ( m_pData == 0 )
      break;
    if ( i >= m_pData->m_Size )
      goto LABEL_8;
LABEL_5:
    v6 = i;
    CRC32_Process<CPhysConstraintData>(crc, &m_pData->m_Elements[v6]);
  }
  if ( i < 0 )
    goto LABEL_5;
LABEL_8:
  CRC32_Final(crc);
  return crc[0];
}


