
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CBodyGameSystem::YouForgot::ToDefine_DEFINE_GAME_SYSTEM  (line 15, @0x0000000001f32030, libserver.so)
void __cdecl CBodyGameSystem::YouForgot::ToDefine_DEFINE_GAME_SYSTEM()
{
  ;
}


// CBodyGameSystem::CBodyGameSystem  (line 24, @0x0000000001f32040, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase
// callers: CGameSystemReallocatingFactory<CBodyGameSystem, CBodyGameSystem>::CreateGameSystem
void __fastcall CBodyGameSystem::CBodyGameSystem(CBodyGameSystem *const this)
{
  this->_vptr_IGameSystem = off_3FCB870;  // vptr: CBodyGameSystem
  this->m_extraPostDataUpdates.m_Size = 0;
  this->m_extraPostDataUpdates.m_Memory.m_pMemory = 0;
  this->m_extraPostDataUpdates.m_Memory.m_nAllocationCount = 0;
  this->m_extraPostDataUpdates.m_Memory.m_nGrowSize = 0;
}


// CBodyGameSystem::~CBodyGameSystem  (line 28, @0x0000000001f2ec30, libserver.so)  // inlines: Purge, RemoveAll, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: IGameSystem::~IGameSystem, CUtlMemory<CGameSceneNode*, int>::Purge
void __fastcall CBodyGameSystem::~CBodyGameSystem(CBodyGameSystem *const this)
{
  bool v2; // zf
  CUtlMemory<CGameSceneNode*,int> *p_m_Memory; // r12

  v2 = (this->m_extraPostDataUpdates.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IGameSystem = off_3FCB870;  // vptr: CBodyGameSystem
  this->m_extraPostDataUpdates.m_Size = 0;
  if ( !v2
    || (p_m_Memory = &this->m_extraPostDataUpdates.m_Memory,
        CUtlMemory<CGameSceneNode *,int>::Purge(&this->m_extraPostDataUpdates.m_Memory),
        (this->m_extraPostDataUpdates.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    IGameSystem::~IGameSystem(this);
  }
  else
  {
    CUtlMemory<CGameSceneNode *,int>::Purge(p_m_Memory);
    IGameSystem::~IGameSystem(this);
  }
}


// CBodyGameSystem::~CBodyGameSystem  (line 28, @0x0000000001f2ec90, libserver.so)  // inlines: Purge, RemoveAll, ~CBodyGameSystem, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: IGameSystem::~IGameSystem, operator delete, CUtlMemory<CGameSceneNode*, int>::Purge
void __fastcall CBodyGameSystem::~CBodyGameSystem(CBodyGameSystem *const this)
{
  bool v2; // zf
  CUtlMemory<CGameSceneNode*,int> *p_m_Memory; // r12

  v2 = (this->m_extraPostDataUpdates.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IGameSystem = off_3FCB870;  // vptr: CBodyGameSystem
  this->m_extraPostDataUpdates.m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_extraPostDataUpdates.m_Memory;
    CUtlMemory<CGameSceneNode *,int>::Purge(&this->m_extraPostDataUpdates.m_Memory);
    if ( (this->m_extraPostDataUpdates.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CGameSceneNode *,int>::Purge(p_m_Memory);
  }
  IGameSystem::~IGameSystem(this);
  operator delete(this);
}


// CBodyGameSystem::GameActivate  (line 36, @0x0000000001f29e40, libserver.so)
void __fastcall CBodyGameSystem::GameActivate(CBodyGameSystem *const this, const EventGameActivate_t *const msg)
{
  ;
}


// CBodyGameSystem::GameDeactivate  (line 40, @0x0000000001f29e50, libserver.so)
void __fastcall CBodyGameSystem::GameDeactivate(CBodyGameSystem *const this, const EventGameDeactivate_t *const msg)
{
  ;
}


// CBodyGameSystem::ComputeHierarchicalDepth  (line 48, @0x0000000001f32070, libserver.so)
// calls: CGameSceneNodeHandle::Get
int __fastcall CBodyGameSystem::ComputeHierarchicalDepth(const CBodyGameSystem *const this, CGameSceneNode *pNode)
{
  int v3; // ebx
  int v4; // r12d

  v3 = 0;
  do
  {
    v4 = v3++;
    pNode = CGameSceneNodeHandle::Get(&pNode->m_hParent);
  }
  while ( pNode != 0 );
  return v4;
}


// CBodyGameSystem::SortByHierarchicalDepth  (line 60, @0x0000000001f29e60, libserver.so)
bool __fastcall CBodyGameSystem::SortByHierarchicalDepth(
        const CBodyGameSystem::HierarchySetupWork_t *const left,
        const CBodyGameSystem::HierarchySetupWork_t *const right)
{
  bool result; // al

  result = 1;
  if ( left->m_nHierarchicalDepth >= right->m_nHierarchicalDepth )
  {
    result = 0;
    if ( left->m_nHierarchicalDepth <= right->m_nHierarchicalDepth )
      return left->m_nEntIndex < right->m_nEntIndex;
  }
  return result;
}


// CBodyGameSystem::DecodeAnimationsAtSpawn  (line 72, @0x0000000001f55790, libserver.so)  // inlines: CUtlMemory, CUtlMemoryFixedGrowable, CUtlMemoryFixedGrowable_Base, CUtlVectorBase, CUtlVectorFixedGrowable, ConvertToExternalMemory, GetModelData, Purge, Purge_FixedGrowable, RemoveAll, operator const RuntimeClass_t*, operator[], ~CUtlMemory, ~CUtlMemoryFixedGrowable, ~CUtlMemoryFixedGrowable_Base, ~CUtlVectorBase, ~CUtlVectorFixedGrowable
// calls: CUtlVectorBase<CSkeletonInstance*, CUtlMemoryFixedGrowable<CSkeletonInstance*, 64ul, int> >::SetCount, CModel::FirstSequence, CSkeletonInstance::SetupBones, CUtlMemory<CSkeletonInstance*, int>::Purge, CUtlVectorBase<CSkeletonInstance*, CUtlMemoryFixedGrowable<CSkeletonInstance*, 64ul, int> >::~CUtlVectorBase, _Unwind_Resume, __stack_chk_fail
// callers: CBodyGameSystem::OnRestoreHierarchically, CBodyGameSystem::SpawnDependencyIsland, CBodyGameSystem::PostDataUpdateHierarchySetup
void __fastcall CBodyGameSystem::DecodeAnimationsAtSpawn(
        CBodyGameSystem *const this,
        int nCount,
        CSkeletonAnimationController **ppAnimationControllers)
{
  int v5; // r13d
  CSkeletonAnimationController **v6; // r12
  const CModel *const *m_pBinding; // rax
  __int64 v8; // rdx
  uint32 v9; // eax
  CUtlVectorFixedGrowable<CSkeletonInstance*,64ul> actualSkeletons; // [rsp+0h] [rbp-240h] BYREF
  unsigned __int64 v11; // [rsp+218h] [rbp-28h]

  actualSkeletons.m_Size = 0;
  v11 = __readfsqword(0x28u);
  actualSkeletons.m_Memory.m_nAllocationCount = 64;
  actualSkeletons.m_Memory.m_nGrowSize = 0x80000000;
  actualSkeletons.m_Memory.m_pMemory = &actualSkeletons.m_Memory.m_FixedMemory;
  CUtlVectorBase<CSkeletonInstance *,CUtlMemoryFixedGrowable<CSkeletonInstance *,64ul,int>>::SetCount(
    &actualSkeletons,
    nCount);
  if ( nCount <= 0 )
  {
    v5 = 0;
  }
  else
  {
    v5 = 0;
    v6 = &ppAnimationControllers[(nCount - 1) + 1];
    do
    {
      m_pBinding = (*ppAnimationControllers)->m_pSkeletonInstance->m_modelState.m_hModel.m_Value.m_pBinding;
      if ( m_pBinding != 0 && *m_pBinding != 0 && CModel::FirstSequence(*m_pBinding).m_Data != -1 )
      {
        v8 = v5++;
        actualSkeletons.m_Memory.m_pMemory[v8] = (*ppAnimationControllers)->m_pSkeletonInstance;
      }
      ++ppAnimationControllers;
    }
    while ( ppAnimationControllers != v6 );
  }
  CSkeletonInstance::SetupBones(v5, actualSkeletons.m_Memory.m_pMemory, CModelSkeleton::BoneFlags_t::FLAG_ANIMATION, 0);
  actualSkeletons.m_Size = 0;
  v9 = actualSkeletons.m_Memory.m_nGrowSize & 0xC0000000;
  if ( actualSkeletons.m_Memory.m_nAllocationCount < 0
    || actualSkeletons.m_Memory.m_pMemory == &actualSkeletons.m_Memory.m_FixedMemory )
  {
    if ( v9 == 0 )
      CUtlMemory<CSkeletonInstance *,int>::Purge(&actualSkeletons.m_Memory);
  }
  else if ( actualSkeletons.m_Memory.m_pMemory != 0 && v9 == 0 )
  {
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
  }
}


// CBodyGameSystem::BuildWorkList  (line 94, @0x0000000001f48310, libserver.so)  // inlines: AddToTail, CEntityHandle, ComputeHierarchicalDepth, GetComponent<CBodyComponent>, GetEHandle, GetEntryIndex, GetGameSceneNodeByIndex, GetSerialNumber, GrowMemory, Init, __pop_heap<CBodyGameSystem::HierarchySetupWork_t*, bool (*)(const CBodyGameSystem::HierarchySetupWork_t&, const CBodyGameSystem::HierarchySetupWork_t&)>, make_heap<CBodyGameSystem::HierarchySetupWork_t*, bool (*)(const CBodyGameSystem::HierarchySetupWork_t&, const CBodyGameSystem::HierarchySetupWork_t&)>, operator[], sort_heap<CBodyGameSystem::HierarchySetupWork_t*, bool (*)(const CBodyGameSystem::HierarchySetupWork_t&, const CBodyGameSystem::HierarchySetupWork_t&)>
// calls: CGameSceneNodeHandle::Get, std::__adjust_heap<CBodyGameSystem::HierarchySetupWork_t*, long int, CBodyGameSystem::HierarchySetupWork_t, bool (*)(const CBodyGameSystem::HierarchySetupWork_t&, const CBodyGameSystem::HierarchySetupWork_t&)>, CUtlMemory<CBodyGameSystem::HierarchySetupWork_t, int>::Grow
// callers: CBodyGameSystem::OnSetDormant, CBodyGameSystem::UpdateOnRemove, CBodyGameSystem::OnRestore, CBodyGameSystem::PostDataUpdate
// globals: CBodyGameSystem::SortByHierarchicalDepth(CBodyGameSystem::HierarchySetupWork_t const&,CBodyGameSystem::HierarchySetupWork_t const&)
int __fastcall CBodyGameSystem::BuildWorkList(
        CBodyGameSystem *const this,
        int nCount,
        const EntityNotification_t *pNotification,
        int nStride,
        CUtlVectorFixedGrowable<CBodyGameSystem::HierarchySetupWork_t,256ul> *const workItems)
{
  CEntityInstance *m_pInstance; // rdx
  __int64 m_nBaseOffset; // rcx
  CBodyComponent *v8; // rax
  int m_Size; // eax
  unsigned __int64 v10; // r13
  __int64 v11; // r15
  CGameSceneNode *v12; // r14
  int v13; // eax
  int v14; // ebx
  CGameSceneNode *v15; // rax
  int v16; // eax
  CBodyGameSystem::HierarchySetupWork_t *v17; // rcx
  CEntityIdentity *m_pEntity; // rax
  int v19; // esi
  __int64 v20; // rax
  CBodyGameSystem::HierarchySetupWork_t *m_pMemory; // r12
  __int64 v22; // rax
  CBodyGameSystem::HierarchySetupWork_t *v23; // rbx
  __int64 v24; // r14
  __int64 v25; // r13
  CBodyGameSystem::HierarchySetupWork_t *v26; // r15
  __int64 v27; // rcx
  CBodyGameSystem::HierarchySetupWork_t __value; // [rsp+0h] [rbp-A0h]
  __int64 nStridea; // [rsp+20h] [rbp-80h]
  CUtlVectorBase<CBodyGameSystem::HierarchySetupWork_t,CUtlMemoryFixedGrowable<CBodyGameSystem::HierarchySetupWork_t,256ul,int> >::CAllocator *p_m_Memory; // [rsp+28h] [rbp-78h]
  __int64 v33; // [rsp+30h] [rbp-70h]
  CBodyComponent *pComponent; // [rsp+40h] [rbp-60h]
  int i; // [rsp+48h] [rbp-58h]
  int nMaxHierarchicalDepth; // [rsp+4Ch] [rbp-54h]
  CBodyGameSystem::HierarchySetupWork_t v38; // 0:^50.24

  if ( nCount <= 0 )
  {
    nMaxHierarchicalDepth = 0;
  }
  else
  {
    i = 0;
    nStridea = nStride;
    nMaxHierarchicalDepth = 0;
    p_m_Memory = &workItems->m_Memory;
    do
    {
      pComponent = 0;
      m_pInstance = pNotification->m_pEntity->m_pInstance;
      if ( m_pInstance != 0 )
      {
        m_nBaseOffset = pNotification->m_pEntity->m_pClass->m_ComponentOffsets.m_Memory.m_pMemory[CBodyComponent::s_EntComponentInfo.m_nRuntimeIndex].m_nBaseOffset;
        v8 = 0;
        if ( m_nBaseOffset != 0xFFFF )
          v8 = *(&m_pInstance->_vptr_IHandleEntity + m_nBaseOffset);
        pComponent = v8;
      }
      m_Size = pComponent->m_GameSceneNodeRegistry.m_Size;
      if ( m_Size > 0 )
      {
        v10 = 0;
        v33 = 8LL * (m_Size - 1) + 8;
        do
        {
          v11 = workItems->m_Size;
          v12 = pComponent->m_GameSceneNodeRegistry.m_Memory.m_pMemory[v10 / 8];
          v13 = workItems->m_Size;
          if ( v11 == workItems->m_Memory.m_nAllocationCount )
          {
            CUtlMemory<CBodyGameSystem::HierarchySetupWork_t,int>::Grow(p_m_Memory, 1);
            v13 = workItems->m_Size;
          }
          v14 = 0;
          workItems->m_Size = v13 + 1;
          v15 = v12;
          while ( 1 )
          {
            v15 = CGameSceneNodeHandle::Get(&v15->m_hParent);
            if ( v15 == 0 )
              break;
            ++v14;
          }
          v16 = nMaxHierarchicalDepth;
          if ( nMaxHierarchicalDepth < v14 )
            v16 = v14;
          nMaxHierarchicalDepth = v16;
          v17 = &workItems->m_Memory.m_pMemory[v11];
          v17->m_pNode = v12;
          v17->m_nHierarchicalDepth = v14;
          v17->m_pInfo = pNotification;
          m_pEntity = v12->m_pOwner->m_pEntity;
          if ( m_pEntity == 0 )
            goto LABEL_30;
          LOWORD(v19) = 0x7FFF;
          if ( m_pEntity->m_EHandle.m_Index != -1 )
            LOWORD(v19) = m_pEntity->m_EHandle.m_Index & 0x7FFF;
          if ( ((((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v19 & 0x7FFF) == 0xFFFFFFFF )
LABEL_30:
            v19 = 0x7FFF;
          else
            v19 = v19;
          v10 += 8LL;
          v17->m_nEntIndex = v19;
        }
        while ( v10 != v33 );
      }
      ++i;
      pNotification = (pNotification + nStridea);
    }
    while ( i != nCount );
  }
  v20 = workItems->m_Size;
  if ( v20 > 0 )
  {
    m_pMemory = workItems->m_Memory.m_pMemory;
    v22 = 3 * v20;
    v23 = &m_pMemory[v22 / 3];
    if ( 8 * v22 > 47 )
    {
      v24 = 0xAAAAAAAAAAAAAAABLL * ((8 * v22) >> 3);
      v25 = (v24 - 2) >> 1;
      v26 = &m_pMemory[v25];
      while ( 1 )
      {
        v27 = *&v26->m_nHierarchicalDepth;
        --v26;
        *&__value.m_nHierarchicalDepth = v27;
        *&__value.m_pInfo = *&v26[1].m_pInfo;
        std::__adjust_heap<CBodyGameSystem::HierarchySetupWork_t *,long,CBodyGameSystem::HierarchySetupWork_t,bool (*)(CBodyGameSystem::HierarchySetupWork_t const&,CBodyGameSystem::HierarchySetupWork_t const&)>(
          m_pMemory,
          v25,
          v24,
          CBodyGameSystem::SortByHierarchicalDepth,
          __value);
        if ( v25 == 0 )
          break;
        --v25;
      }
      do
      {
        v38 = *--v23;
        *&v23->m_nHierarchicalDepth = *&m_pMemory->m_nHierarchicalDepth;
        v23->m_pInfo = m_pMemory->m_pInfo;
        v23->m_pNode = m_pMemory->m_pNode;
        std::__adjust_heap<CBodyGameSystem::HierarchySetupWork_t *,long,CBodyGameSystem::HierarchySetupWork_t,bool (*)(CBodyGameSystem::HierarchySetupWork_t const&,CBodyGameSystem::HierarchySetupWork_t const&)>(
          m_pMemory,
          0,
          0xAAAAAAAAAAAAAAABLL * ((v23 - m_pMemory) >> 3),
          CBodyGameSystem::SortByHierarchicalDepth,
          v38);
      }
      while ( v23 - m_pMemory > 47 );
    }
  }
  return nMaxHierarchicalDepth;
}


// CBodyGameSystem::PostDataUpdateHierarchySetup  (line 133, @0x0000000001f658e0, libserver.so)  // inlines: CUtlMemory, CUtlMemoryFixedGrowable, CUtlMemoryFixedGrowable_Base, CUtlVector, CUtlVectorBase, CUtlVectorFixedGrowable, CopyArray, EnsureCapacity, Purge, Purge_FixedGrowable, RemoveAll, ~CUtlMemory, ~CUtlMemoryFixedGrowable, ~CUtlMemoryFixedGrowable_Base, ~CUtlVector, ~CUtlVectorBase, ~CUtlVectorFixedGrowable
// calls: CUtlMemory<CSkeletonAnimationController*, int>::EnsureCapacity, CBodyGameSystem::DecodeAnimationsAtSpawn, CUtlVectorBase<CGameSceneNode*, CUtlMemoryFixedGrowable<CGameSceneNode*, 16ul, int> >::SetCount, CUtlMemory<CGameSceneNode*, int>::ConvertToExternalMemory, CUtlMemory<CGameSceneNode*, int>::Purge, CUtlMemory<CSkeletonAnimationController*, int>::Purge, CUtlVectorBase<CSkeletonAnimationController*, CUtlMemory<CSkeletonAnimationController*, int> >::~CUtlVectorBase, _Unwind_Resume, __stack_chk_fail
// callers: CBodyGameSystem::PostDataUpdate
void __fastcall CBodyGameSystem::PostDataUpdateHierarchySetup(
        CBodyGameSystem *const this,
        CBodyGameSystem::HierarchySetupWork_t *pWork,
        int nCount)
{
  int m_Size; // r13d
  CBodyGameSystem::HierarchySetupWork_t *v6; // r12
  CBodyGameSystem::HierarchySetupWork_t *v7; // r14
  unsigned int *m_pInfo; // r13
  __int64 v9; // rax
  __int64 v10; // rdi
  CGameSceneNode **m_pMemory; // r12
  unsigned __int64 v12; // rax
  __int64 v13; // r13
  unsigned __int64 v14; // r12
  CUtlVector<CSkeletonAnimationController*,CUtlMemory<CSkeletonAnimationController*,int> > animSetups; // [rsp+10h] [rbp-F0h] BYREF
  CUtlVectorFixedGrowable<CGameSceneNode*,16ul> nodes; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int64 v18; // [rsp+C8h] [rbp-38h]

  v18 = __readfsqword(0x28u);
  m_Size = this->m_extraPostDataUpdates.m_Size;
  animSetups.m_Size = 0;
  animSetups.m_Memory.m_pMemory = 0;
  animSetups.m_Memory.m_nAllocationCount = 0;
  animSetups.m_Memory.m_nGrowSize = 0;
  CUtlMemory<CSkeletonAnimationController *,int>::EnsureCapacity(&animSetups.m_Memory, m_Size + nCount);
  if ( m_Size != 0 )
  {
    m_pMemory = this->m_extraPostDataUpdates.m_Memory.m_pMemory;
    nodes.m_Size = 0;
    nodes.m_Memory.m_nAllocationCount = 16;
    nodes.m_Memory.m_nGrowSize = 0x80000000;
    nodes.m_Memory.m_pMemory = &nodes.m_Memory.m_FixedMemory;
    CUtlVectorBase<CGameSceneNode *,CUtlMemoryFixedGrowable<CGameSceneNode *,16ul,int>>::SetCount(&nodes, m_Size);
    if ( m_Size <= 0 )
    {
      this->m_extraPostDataUpdates.m_Size = 0;
    }
    else
    {
      v12 = 0;
      v13 = 8LL * (m_Size - 1) + 8;
      do
      {
        nodes.m_Memory.m_pMemory[v12 / 8] = m_pMemory[v12 / 8];
        v12 += 8LL;
      }
      while ( v12 != v13 );
      this->m_extraPostDataUpdates.m_Size = 0;
      v14 = 0;
      do
      {
        (*(nodes.m_Memory.m_pMemory[v14 / 8]->_vptr_CGameSceneNode + 19))(
          nodes.m_Memory.m_pMemory[v14 / 8],
          1,
          &animSetups);
        v14 += 8LL;
      }
      while ( v14 != v13 );
    }
    nodes.m_Size = 0;
    CUtlMemory<CGameSceneNode *,int>::ConvertToExternalMemory(
      &nodes.m_Memory,
      &nodes.m_Memory.m_FixedMemory,
      16,
      0,
      1,
      0x3FFFFFFFu);
    if ( (nodes.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CGameSceneNode *,int>::Purge(&nodes.m_Memory);
  }
  if ( nCount > 0 )
  {
    v6 = pWork;
    v7 = &pWork[(nCount - 1) + 1];
    do
    {
      m_pInfo = v6->m_pInfo;
      (*(v6->m_pNode->_vptr_CGameSceneNode + 19))(v6->m_pNode, m_pInfo[2], &animSetups);
      v9 = (*(v6->m_pNode->_vptr_CGameSceneNode + 9))(v6->m_pNode);
      if ( v9 != 0 )
      {
        v10 = *(v9 + 736);
        if ( v10 != 0 )
          (*(*v10 + 88LL))(v10, v6->m_pNode->m_pOwner, m_pInfo[2]);
      }
      ++v6;
    }
    while ( v6 != v7 );
  }
  CBodyGameSystem::DecodeAnimationsAtSpawn(this, animSetups.m_Size, animSetups.m_Memory.m_pMemory);
  animSetups.m_Size = 0;
  if ( (animSetups.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CSkeletonAnimationController *,int>::Purge(&animSetups.m_Memory);
    if ( (animSetups.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CSkeletonAnimationController *,int>::Purge(&animSetups.m_Memory);
  }
}


// CBodyGameSystem::DoWorkAtDepth<CBodyGameSystem::HierarchySetupWork_t, void (CBodyGameSystem::*)(CBodyGameSystem::HierarchySetupWork_t*, int)>  (line 183, @0x0000000001f86b50, libserver.so)
// callers: CBodyGameSystem::OnRestore, CBodyGameSystem::PostDataUpdate
void __fastcall CBodyGameSystem::DoWorkAtDepth<CBodyGameSystem::HierarchySetupWork_t,void (CBodyGameSystem::*)(CBodyGameSystem::HierarchySetupWork_t*,int)>(
        __int64 a1,
        __int64 a2,
        char *a3,
        __int64 a4,
        int *a5,
        int a6,
        int nDepth)
{
  int v8; // r11d
  __int64 v10; // r8
  int *v11; // rsi
  __int64 v12; // rax
  int v13; // r9d
  unsigned int v14; // ebx
  _QWORD *v15; // rdi
  void (__fastcall *v16)(_QWORD *, int *, _QWORD); // rax

  v8 = *a5;
  if ( *a5 < a6 )
  {
    v10 = 24LL * v8;
    v11 = (a2 + v10);
    if ( nDepth >= *v11 )
    {
      v12 = a2 + v10 + 24;
      v13 = a6 - v8;
      v14 = 0;
      do
      {
        if ( ++v14 == v13 )
          break;
        v12 += 24;
      }
      while ( *(v12 - 24) <= nDepth );
      if ( v14 != 0 )
      {
        v15 = (a4 + a1);
        v16 = a3;
        if ( (a3 & 1) != 0 )
          v16 = *&a3[*v15 - 1];
        v16(v15, v11, v14);
        *a5 += v14;
      }
    }
  }
}


// CBodyGameSystem::Spawn  (line 205, @0x0000000001f320a0, libserver.so)  // inlines: GetComponent<CBodyComponent>, operator[]
// calls: CBodyComponent::Spawn
// callers: CGameEntitySystem::Spawn
void __fastcall CBodyGameSystem::Spawn(CBodyGameSystem *const this, int nCount, const EntitySpawnInfo_t *pSpawn)
{
  const EntitySpawnInfo_t *v3; // r12
  const EntitySpawnInfo_t *v4; // rbx
  CEntityInstance *m_pInstance; // rsi
  __int64 m_nBaseOffset; // rax
  CBodyComponent *v7; // rdi

  if ( nCount > 0 )
  {
    v3 = &pSpawn[(nCount - 1) + 1];
    v4 = pSpawn;
    do
    {
      m_pInstance = v4->m_pEntity->m_pInstance;
      if ( m_pInstance != 0 )
      {
        m_nBaseOffset = v4->m_pEntity->m_pClass->m_ComponentOffsets.m_Memory.m_pMemory[CBodyComponent::s_EntComponentInfo.m_nRuntimeIndex].m_nBaseOffset;
        if ( m_nBaseOffset != 0xFFFF )
        {
          v7 = *(&m_pInstance->_vptr_IHandleEntity + m_nBaseOffset);
          if ( v7 != 0 )
            CBodyComponent::Spawn(v7, m_pInstance, v4->m_pKeyValues);
        }
      }
      ++v4;
    }
    while ( v4 != v3 );
  }
}


// CBodyGameSystem::SpawnDependencyIsland  (line 227, @0x0000000001f654f0, libserver.so)  // inlines: AddToTail, CUtlMemory, CUtlMemoryFixedGrowable, CUtlMemoryFixedGrowable_Base, CUtlVector, CUtlVectorBase, CUtlVectorFixedGrowable, CopyConstruct<CGameSceneNode*>, Element, GetComponent<CBodyComponent>, GetGameSceneNodeByIndex, GrowMemory, Purge, Purge_FixedGrowable, RemoveAll, operator[], ~CUtlMemory, ~CUtlMemoryFixedGrowable, ~CUtlMemoryFixedGrowable_Base, ~CUtlVector, ~CUtlVectorBase, ~CUtlVectorFixedGrowable
// calls: CUtlMemory<CGameSceneNode*, int>::Grow, CUtlMemory<CGameSceneNode*, int>::ConvertToExternalMemory, CUtlMemory<CGameSceneNode*, int>::Purge, CBodyGameSystem::DecodeAnimationsAtSpawn, CUtlMemory<CSkeletonAnimationController*, int>::Purge, __stack_chk_fail, _Unwind_Resume, CUtlVectorBase<CSkeletonAnimationController*, CUtlMemory<CSkeletonAnimationController*, int> >::~CUtlVectorBase
// callers: CGameEntitySystem::Spawn
void __fastcall CBodyGameSystem::SpawnDependencyIsland(
        CBodyGameSystem *const this,
        SpawnPhaseType_t phase,
        int nCount,
        const EntitySpawnInfo_t *pSpawn)
{
  __int64 v4; // r12
  CEntityInstance *m_pInstance; // rdx
  __int64 m_nBaseOffset; // rax
  __int64 v7; // r14
  int v8; // eax
  __int64 v9; // rbx
  __int64 v10; // r15
  int v11; // edx
  CGameSceneNode **v12; // rax
  CGameSceneNode *v13; // r13
  int m_Size; // eax
  unsigned __int64 v15; // rbx
  __int64 v16; // r12
  void *v17; // rsp
  unsigned __int64 v18; // rbx
  int v19; // esi
  CSkeletonAnimationController **m_pMemory; // rdx
  CUtlMemory<CGameSceneNode*,int> *v21; // rbx
  CUtlVectorFixedGrowable<CGameSceneNode*,512ul> *p_nodes; // [rsp+10h] [rbp-1090h] BYREF
  const EntitySpawnInfo_t *v25; // [rsp+18h] [rbp-1088h]
  const EntitySpawnInfo_t *v26; // [rsp+20h] [rbp-1080h]
  CUtlMemory<CGameSceneNode*,int> *p_m_Memory; // [rsp+28h] [rbp-1078h]
  CUtlVector<CSkeletonAnimationController*,CUtlMemory<CSkeletonAnimationController*,int> > animSetups; // [rsp+30h] [rbp-1070h] BYREF
  CUtlVectorFixedGrowable<CGameSceneNode*,512ul> nodes; // [rsp+50h] [rbp-1050h] BYREF
  unsigned __int64 v30; // [rsp+1068h] [rbp-38h]

  v30 = __readfsqword(0x28u);
  p_nodes = &nodes;
  nodes.m_Size = 0;
  nodes.m_Memory.m_nAllocationCount = 512;
  nodes.m_Memory.m_nGrowSize = 0x80000000;
  nodes.m_Memory.m_pMemory = &nodes.m_Memory.m_FixedMemory;
  if ( nCount <= 0 )
    goto LABEL_19;
  v26 = pSpawn;
  v4 = 0;
  v25 = &pSpawn[(nCount - 1) + 1];
  p_m_Memory = &nodes.m_Memory;
  do
  {
    m_pInstance = v26->m_pEntity->m_pInstance;
    if ( m_pInstance != 0 )
    {
      m_nBaseOffset = v26->m_pEntity->m_pClass->m_ComponentOffsets.m_Memory.m_pMemory[CBodyComponent::s_EntComponentInfo.m_nRuntimeIndex].m_nBaseOffset;
      if ( m_nBaseOffset != 0xFFFF )
      {
        v7 = *(&m_pInstance->_vptr_IHandleEntity + m_nBaseOffset);
        if ( v7 != 0 )
        {
          v8 = *(v7 + 16);
          if ( v8 > 0 )
          {
            v9 = 0;
            v10 = 8LL * (v8 - 1) + 8;
            do
            {
              while ( 1 )
              {
                v13 = *(*(v7 + 24) + v9);
                m_Size = v4;
                if ( nodes.m_Memory.m_nAllocationCount == v4 )
                {
                  CUtlMemory<CGameSceneNode *,int>::Grow(p_m_Memory, 1);
                  m_Size = nodes.m_Size;
                }
                v11 = m_Size + 1;
                nodes.m_Size = m_Size + 1;
                v12 = &nodes.m_Memory.m_pMemory[v4];
                if ( v12 == 0 )
                  break;
                v9 += 8;
                *v12 = v13;
                v4 = nodes.m_Size;
                if ( v9 == v10 )
                  goto LABEL_13;
              }
              v9 += 8;
              v4 = v11;
            }
            while ( v9 != v10 );
          }
        }
      }
    }
LABEL_13:
    ++v26;
  }
  while ( v26 != v25 );
  if ( v4 == 0 )
    goto LABEL_19;
  if ( phase == SpawnPhaseType_t::SPAWN_PHASE_PRE_SPAWN )
  {
    if ( v4 > 0 )
    {
      v15 = 0;
      v16 = 8LL * (v4 - 1) + 8;
      do
      {
        (*(nodes.m_Memory.m_pMemory[v15 / 8]->_vptr_CGameSceneNode + 17))(nodes.m_Memory.m_pMemory[v15 / 8]);
        v15 += 8LL;
      }
      while ( v15 != v16 );
    }
LABEL_19:
    nodes.m_Size = 0;
    CUtlMemory<CGameSceneNode *,int>::ConvertToExternalMemory(
      &p_nodes->m_Memory,
      &p_nodes->m_Memory.m_FixedMemory,
      512,
      0,
      1,
      0x3FFFFFFFu);
    if ( (nodes.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CGameSceneNode *,int>::Purge(&p_nodes->m_Memory);
    return;
  }
  animSetups.m_Memory.m_nAllocationCount = v4;
  animSetups.m_Size = 0;
  animSetups.m_Memory.m_nGrowSize = 0x40000000;
  v17 = alloca(((8LL * v4 + 31) & 0xFFFFFFFFFFFFFFF0LL) + 16);
  animSetups.m_Memory.m_pMemory = (&p_nodes & 0xFFFFFFFFFFFFFFEFLL);
  if ( v4 <= 0 )
  {
    m_pMemory = (&p_nodes & 0xFFFFFFFFFFFFFFEFLL);
    v19 = 0;
  }
  else
  {
    v18 = 0;
    do
    {
      (*(nodes.m_Memory.m_pMemory[v18 / 8]->_vptr_CGameSceneNode + 18))(nodes.m_Memory.m_pMemory[v18 / 8], &animSetups);
      v18 += 8LL;
    }
    while ( v18 != 8LL * (v4 - 1) + 8 );
    v19 = animSetups.m_Size;
    m_pMemory = animSetups.m_Memory.m_pMemory;
  }
  CBodyGameSystem::DecodeAnimationsAtSpawn(this, v19, m_pMemory);
  animSetups.m_Size = 0;
  if ( (animSetups.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CSkeletonAnimationController *,int>::Purge(&animSetups.m_Memory);
    if ( (animSetups.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CSkeletonAnimationController *,int>::Purge(&animSetups.m_Memory);
  }
  nodes.m_Size = 0;
  v21 = &p_nodes->m_Memory;
  CUtlMemory<CGameSceneNode *,int>::ConvertToExternalMemory(
    &p_nodes->m_Memory,
    &p_nodes->m_Memory.m_FixedMemory,
    512,
    0,
    1,
    0x3FFFFFFFu);
  if ( (nodes.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<CGameSceneNode *,int>::Purge(v21);
}


// CBodyGameSystem::OnRestoreHierarchically  (line 308, @0x0000000001f55910, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, EnsureCapacity, Purge, RemoveAll, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CEntityInstance::IsAuthoritative, CBodyGameSystem::DecodeAnimationsAtSpawn, CUtlMemory<CSkeletonAnimationController*, int>::Purge, CUtlVectorBase<CSkeletonAnimationController*, CUtlMemory<CSkeletonAnimationController*, int> >::~CUtlVectorBase, _Unwind_Resume
void __fastcall CBodyGameSystem::OnRestoreHierarchically(
        CBodyGameSystem *const this,
        CBodyGameSystem::HierarchySetupWork_t *pWork,
        int nCount)
{
  __int64 v6; // rax
  CBodyGameSystem::HierarchySetupWork_t *v7; // r12
  __int64 v8; // rax
  __int64 v9; // rdi
  int v10; // esi
  CSkeletonAnimationController **v11; // rdx
  int v12; // [rsp+0h] [rbp-40h] BYREF
  CSkeletonAnimationController **ppAnimationControllers; // [rsp+8h] [rbp-38h] BYREF
  int nCounta; // [rsp+10h] [rbp-30h]
  int v15; // [rsp+14h] [rbp-2Ch]

  v12 = 0;
  ppAnimationControllers = 0;
  nCounta = 0;
  v15 = 0;
  if ( nCount <= 0 )
  {
    v11 = 0;
    v10 = 0;
  }
  else
  {
    v6 = (**g_pMemAlloc)(g_pMemAlloc, 8LL * nCount);
    nCounta = nCount;
    ppAnimationControllers = v6;
    v7 = &pWork[(nCount - 1) + 1];
    do
    {
      while ( 1 )
      {
        if ( CEntityInstance::IsAuthoritative(pWork->m_pNode->m_pOwner) )
        {
          (*(pWork->m_pNode->_vptr_CGameSceneNode + 20))(pWork->m_pNode, &v12);
          v8 = (*(pWork->m_pNode->_vptr_CGameSceneNode + 9))(pWork->m_pNode);
          if ( v8 != 0 )
          {
            v9 = *(v8 + 736);
            if ( v9 != 0 )
              break;
          }
        }
        if ( ++pWork == v7 )
          goto LABEL_8;
      }
      (*(*v9 + 96LL))(v9, pWork->m_pNode->m_pOwner);
      ++pWork;
    }
    while ( pWork != v7 );
LABEL_8:
    v10 = v12;
    v11 = ppAnimationControllers;
  }
  CBodyGameSystem::DecodeAnimationsAtSpawn(this, v10, v11);
  v12 = 0;
  if ( (v15 & 0xC0000000) == 0 )
  {
    CUtlMemory<CSkeletonAnimationController *,int>::Purge(&ppAnimationControllers);
    if ( (v15 & 0xC0000000) == 0 )
      CUtlMemory<CSkeletonAnimationController *,int>::Purge(&ppAnimationControllers);
  }
}


// CBodyGameSystem::OnRestore  (line 333, @0x0000000001f48a10, libserver.so)  // inlines: AddToTail, BuildWorkList<EntityNotification_t>, CUtlMemory, CUtlMemoryFixedGrowable, CUtlMemoryFixedGrowable_Base, CUtlVectorBase, CUtlVectorFixedGrowable, ConvertToExternalMemory, CopyConstruct<EntityNotification_t>, Element, GetEntityIdentity, GetEntryIndex, GrowMemory, IndexToIdentity, IsExternallyAllocated, IsValid, LookupEntity, Purge, Purge_FixedGrowable, RemoveAll, operator CEntityIdentity*, operator[], ~CUtlMemory, ~CUtlMemoryFixedGrowable, ~CUtlMemoryFixedGrowable_Base, ~CUtlVectorBase, ~CUtlVectorFixedGrowable
// calls: CBodyGameSystem::BuildWorkList, CBodyGameSystem::DoWorkAtDepth<CBodyGameSystem::HierarchySetupWork_t, void (CBodyGameSystem::*)(CBodyGameSystem::HierarchySetupWork_t*, int)>, CUtlMemory<CBodyGameSystem::HierarchySetupWork_t, int>::Purge, CUtlMemory<EntityNotification_t, int>::Purge, CUtlVectorBase<CBodyGameSystem::HierarchySetupWork_t, CUtlMemoryFixedGrowable<CBodyGameSystem::HierarchySetupWork_t, 256ul, int> >::~CUtlVectorBase, CUtlVectorBase<EntityNotification_t, CUtlMemoryFixedGrowable<EntityNotification_t, 256ul, int> >::~CUtlVectorBase, _Unwind_Resume, CUtlMemory<EntityNotification_t, int>::Grow, __stack_chk_fail
// callers: CEntity2SaveRestore::EndRestoreEntities
// globals: CEntityHandle::gm_pEntityList, CBodyGameSystem::OnRestoreHierarchically(CBodyGameSystem::HierarchySetupWork_t *,int)
void __fastcall CBodyGameSystem::OnRestore(CBodyGameSystem *const this, int nCount, const CEntityHandle *pRestore)
{
  const CEntityHandle *v4; // rbx
  const CEntityHandle *v5; // r15
  __int64 i; // r12
  CEntityIdentity *v7; // rdx
  int v8; // esi
  CEntityIdentity *v9; // r14
  const EntityNotification_t *m_pMemory; // rdx
  int v11; // eax
  int v12; // r12d
  int v13; // r14d
  int nDepth; // ebx
  uint32 m_nGrowSize; // edx
  uint32 v16; // eax
  uint32 v17; // eax
  uint32 v18; // eax
  int m_Size; // esi
  EntityNotification_t *v20; // rax
  int nFirstRestoreIndex; // [rsp+2Ch] [rbp-2074h] BYREF
  CUtlVectorFixedGrowable<EntityNotification_t,256ul> restore; // [rsp+30h] [rbp-2070h] BYREF
  CUtlVectorFixedGrowable<CBodyGameSystem::HierarchySetupWork_t,256ul> workItems; // [rsp+850h] [rbp-1850h] BYREF
  unsigned __int64 v24; // [rsp+2068h] [rbp-38h]

  restore.m_Size = 0;
  v24 = __readfsqword(0x28u);
  restore.m_Memory.m_nAllocationCount = 256;
  restore.m_Memory.m_pMemory = &restore.m_Memory.m_FixedMemory;
  restore.m_Memory.m_nGrowSize = 0x80000000;
  if ( nCount > 0 )
  {
    v4 = pRestore;
    v5 = &pRestore[nCount - 1 + 1];
    for ( i = 0; ; i = v8 )
    {
      if ( v4->m_Index + 2 > 1
        && (v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v4->m_Index) >> 9) & 0x3F]) != 0 )
      {
        v8 = i;
        v9 = &v7[v4->m_Index & 0x1FF];
        if ( v9 != 0 && v4->m_Index == v9->m_EHandle.m_Index && SLOBYTE(v9->m_flags) >= 0 )
        {
          if ( restore.m_Memory.m_nAllocationCount == i )
          {
            CUtlMemory<EntityNotification_t,int>::Grow(&restore.m_Memory, 1);
            m_Size = restore.m_Size;
          }
          else
          {
            m_Size = i;
          }
          v8 = m_Size + 1;
          restore.m_Size = v8;
          v20 = &restore.m_Memory.m_pMemory[i];
          if ( v20 != 0 )
          {
            v20->m_pEntity = v9;
            v8 = restore.m_Size;
          }
        }
        if ( ++v4 == v5 )
        {
LABEL_10:
          m_pMemory = restore.m_Memory.m_pMemory;
          goto LABEL_11;
        }
      }
      else
      {
        ++v4;
        v8 = i;
        if ( v4 == v5 )
          goto LABEL_10;
      }
    }
  }
  m_pMemory = &restore.m_Memory.m_FixedMemory;
  v8 = 0;
LABEL_11:
  workItems.m_Size = 0;
  workItems.m_Memory.m_nAllocationCount = 256;
  workItems.m_Memory.m_nGrowSize = 0x80000000;
  workItems.m_Memory.m_pMemory = &workItems.m_Memory.m_FixedMemory;
  v11 = CBodyGameSystem::BuildWorkList(this, v8, m_pMemory, 8, &workItems);
  v12 = workItems.m_Size;
  v13 = v11;
  if ( workItems.m_Size != 0 )
  {
    nFirstRestoreIndex = 0;
    nDepth = 0;
    if ( v11 >= 0 )
    {
      do
        CBodyGameSystem::DoWorkAtDepth<CBodyGameSystem::HierarchySetupWork_t,void (CBodyGameSystem::*)(CBodyGameSystem::HierarchySetupWork_t*,int)>(
          this,
          workItems.m_Memory.m_pMemory,
          CBodyGameSystem::OnRestoreHierarchically,
          0,
          &nFirstRestoreIndex,
          v12,
          nDepth++);
      while ( nDepth <= v13 );
    }
    workItems.m_Size = 0;
    if ( workItems.m_Memory.m_nAllocationCount < 0 )
    {
      v16 = workItems.m_Memory.m_nGrowSize & 0xC0000000;
    }
    else
    {
      m_nGrowSize = workItems.m_Memory.m_nGrowSize;
      v16 = workItems.m_Memory.m_nGrowSize & 0xC0000000;
      if ( workItems.m_Memory.m_pMemory != &workItems.m_Memory.m_FixedMemory )
      {
        if ( workItems.m_Memory.m_pMemory != 0 && v16 == 0 )
        {
          (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
          m_nGrowSize = workItems.m_Memory.m_nGrowSize;
        }
        workItems.m_Memory.m_nAllocationCount = 256;
        workItems.m_Memory.m_pMemory = &workItems.m_Memory.m_FixedMemory;
        workItems.m_Memory.m_nGrowSize = m_nGrowSize & 0x3FFFFFFF | 0x80000000;
LABEL_23:
        restore.m_Size = 0;
        v17 = restore.m_Memory.m_nGrowSize & 0xC0000000;
        if ( restore.m_Memory.m_nAllocationCount < 0 || restore.m_Memory.m_pMemory == &restore.m_Memory.m_FixedMemory )
        {
          if ( v17 == 0 )
            CUtlMemory<EntityNotification_t,int>::Purge(&restore.m_Memory);
        }
        else if ( restore.m_Memory.m_pMemory != 0 && v17 == 0 )
        {
          (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
        }
        return;
      }
    }
    if ( v16 == 0 )
      CUtlMemory<CBodyGameSystem::HierarchySetupWork_t,int>::Purge(&workItems.m_Memory);
    goto LABEL_23;
  }
  CUtlVectorBase<CBodyGameSystem::HierarchySetupWork_t,CUtlMemoryFixedGrowable<CBodyGameSystem::HierarchySetupWork_t,256ul,int>>::~CUtlVectorBase(&workItems);
  restore.m_Size = 0;
  v18 = restore.m_Memory.m_nGrowSize & 0xC0000000;
  if ( restore.m_Memory.m_nAllocationCount < 0 || restore.m_Memory.m_pMemory == &restore.m_Memory.m_FixedMemory )
  {
    if ( v18 == 0 )
      CUtlMemory<EntityNotification_t,int>::Purge(&restore.m_Memory);
  }
  else if ( restore.m_Memory.m_pMemory != 0 && v18 == 0 )
  {
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
  }
}


// CBodyGameSystem::PostDataUpdate  (line 366, @0x0000000001f65bc0, libserver.so)  // inlines: BuildWorkList<const PostDataUpdateInfo_t>, CUtlMemory, CUtlMemoryFixedGrowable, CUtlMemoryFixedGrowable_Base, CUtlVectorBase, CUtlVectorFixedGrowable, ConvertToExternalMemory, Purge, Purge_FixedGrowable, RemoveAll, ~CUtlMemory, ~CUtlMemoryFixedGrowable, ~CUtlMemoryFixedGrowable_Base, ~CUtlVectorBase, ~CUtlVectorFixedGrowable
// calls: CBodyGameSystem::BuildWorkList, CBodyGameSystem::DoWorkAtDepth<CBodyGameSystem::HierarchySetupWork_t, void (CBodyGameSystem::*)(CBodyGameSystem::HierarchySetupWork_t*, int)>, CBodyGameSystem::PostDataUpdateHierarchySetup, CUtlMemory<CBodyGameSystem::HierarchySetupWork_t, int>::Purge, CUtlVectorBase<CBodyGameSystem::HierarchySetupWork_t, CUtlMemoryFixedGrowable<CBodyGameSystem::HierarchySetupWork_t, 256ul, int> >::~CUtlVectorBase, _Unwind_Resume, __stack_chk_fail
// callers: CGameEntitySystem::PostDataUpdate
// globals: CBodyGameSystem::PostDataUpdateHierarchySetup(CBodyGameSystem::HierarchySetupWork_t *,int)
void __fastcall CBodyGameSystem::PostDataUpdate(
        CBodyGameSystem *const this,
        int nCount,
        const PostDataUpdateInfo_t *pInfo)
{
  int v4; // eax
  int m_Size; // r13d
  int v6; // r14d
  CBodyGameSystem::HierarchySetupWork_t *m_pMemory; // rdx
  CBodyGameSystem::HierarchySetupWork_t *v8; // rax
  CBodyGameSystem::HierarchySetupWork_t *v9; // rcx
  int nDepth; // ebx
  uint32 v11; // eax
  int nFirstPostDataUpdateIndex; // [rsp+1Ch] [rbp-1854h] BYREF
  CUtlVectorFixedGrowable<CBodyGameSystem::HierarchySetupWork_t,256ul> workItems; // [rsp+20h] [rbp-1850h] BYREF
  unsigned __int64 v14; // [rsp+1838h] [rbp-38h]

  workItems.m_Size = 0;
  v14 = __readfsqword(0x28u);
  workItems.m_Memory.m_nAllocationCount = 256;
  workItems.m_Memory.m_nGrowSize = 0x80000000;
  workItems.m_Memory.m_pMemory = &workItems.m_Memory.m_FixedMemory;
  v4 = CBodyGameSystem::BuildWorkList(this, nCount, pInfo, 16, &workItems);
  m_Size = workItems.m_Size;
  v6 = v4;
  if ( workItems.m_Size != 0 )
  {
    if ( workItems.m_Size > 0 )
    {
      m_pMemory = workItems.m_Memory.m_pMemory;
      v8 = workItems.m_Memory.m_pMemory + 1;
      v9 = &workItems.m_Memory.m_pMemory[(workItems.m_Size - 1) + 1];
      while ( 1 )
      {
        *(m_pMemory->m_pNode + 248) |= 0x20u;
        m_pMemory = v8;
        if ( v8 == v9 )
          break;
        ++v8;
      }
    }
    nFirstPostDataUpdateIndex = 0;
    nDepth = 0;
    if ( v6 < 0 )
      goto LABEL_10;
    do
      CBodyGameSystem::DoWorkAtDepth<CBodyGameSystem::HierarchySetupWork_t,void (CBodyGameSystem::*)(CBodyGameSystem::HierarchySetupWork_t*,int)>(
        this,
        workItems.m_Memory.m_pMemory,
        CBodyGameSystem::PostDataUpdateHierarchySetup,
        0,
        &nFirstPostDataUpdateIndex,
        m_Size,
        nDepth++);
    while ( nDepth <= v6 );
    while ( this->m_extraPostDataUpdates.m_Size > 0 )
    {
      CBodyGameSystem::PostDataUpdateHierarchySetup(this, 0, 0);
LABEL_10:
      ;
    }
    workItems.m_Size = 0;
    v11 = workItems.m_Memory.m_nGrowSize & 0xC0000000;
    if ( workItems.m_Memory.m_nAllocationCount < 0 || workItems.m_Memory.m_pMemory == &workItems.m_Memory.m_FixedMemory )
    {
      if ( v11 == 0 )
        CUtlMemory<CBodyGameSystem::HierarchySetupWork_t,int>::Purge(&workItems.m_Memory);
    }
    else if ( workItems.m_Memory.m_pMemory != 0 && v11 == 0 )
    {
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
    }
  }
  else
  {
    CUtlVectorBase<CBodyGameSystem::HierarchySetupWork_t,CUtlMemoryFixedGrowable<CBodyGameSystem::HierarchySetupWork_t,256ul,int>>::~CUtlVectorBase(&workItems);
  }
}


// CBodyGameSystem::QueueExtraPostDataUpdateCallIfNecessary  (line 405, @0x0000000001f48980, libserver.so)  // inlines: AddToTail, CopyConstruct<CGameSceneNode*>, Element, GrowMemory, operator[]
// calls: CUtlMemory<CGameSceneNode*, int>::Grow
// callers: CSkeletonInstance::PostDataUpdate
void __fastcall CBodyGameSystem::QueueExtraPostDataUpdateCallIfNecessary(
        CBodyGameSystem *const this,
        CGameSceneNode *pNode)
{
  char v3; // al
  __int64 m_Size; // r13
  int v6; // eax
  CGameSceneNode **v7; // rax

  v3 = *(pNode + 248);
  if ( (v3 & 0x20) == 0 )
  {
    *(pNode + 248) = v3 | 0x20;
    m_Size = this->m_extraPostDataUpdates.m_Size;
    v6 = this->m_extraPostDataUpdates.m_Size;
    if ( m_Size == this->m_extraPostDataUpdates.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<CGameSceneNode *,int>::Grow(&this->m_extraPostDataUpdates.m_Memory, 1);
      v6 = this->m_extraPostDataUpdates.m_Size;
    }
    this->m_extraPostDataUpdates.m_Size = v6 + 1;
    v7 = &this->m_extraPostDataUpdates.m_Memory.m_pMemory[m_Size];
    if ( v7 != 0 )
      *v7 = pNode;
  }
}


// CBodyGameSystem::OnSetDormant  (line 414, @0x0000000001f48610, libserver.so)  // inlines: BuildWorkList<const EntityDormancyChange_t>, CUtlMemory, CUtlMemoryFixedGrowable, CUtlMemoryFixedGrowable_Base, CUtlVectorBase, CUtlVectorFixedGrowable, ConvertToExternalMemory, IsExternallyAllocated, Purge, Purge_FixedGrowable, RemoveAll, operator[], ~CUtlMemory, ~CUtlMemoryFixedGrowable, ~CUtlMemoryFixedGrowable_Base, ~CUtlVectorBase, ~CUtlVectorFixedGrowable
// calls: CBodyGameSystem::BuildWorkList, CUtlMemory<CBodyGameSystem::HierarchySetupWork_t, int>::Purge, CUtlVectorBase<CBodyGameSystem::HierarchySetupWork_t, CUtlMemoryFixedGrowable<CBodyGameSystem::HierarchySetupWork_t, 256ul, int> >::~CUtlVectorBase, _Unwind_Resume, __stack_chk_fail
// callers: CGameEntitySystem::OnSetDormant
void __fastcall CBodyGameSystem::OnSetDormant(
        CBodyGameSystem *const this,
        int nCount,
        const EntityDormancyChange_t *pChanges,
        bool bNotifyAddedToPVS)
{
  int m_Size; // r13d
  int v6; // ebx
  int v7; // r14d
  __int64 v8; // r12
  uint32 v9; // eax
  CUtlVectorFixedGrowable<CBodyGameSystem::HierarchySetupWork_t,256ul> workItems; // [rsp+10h] [rbp-1850h] BYREF
  unsigned __int64 v11; // [rsp+1828h] [rbp-38h]

  workItems.m_Size = 0;
  v11 = __readfsqword(0x28u);
  workItems.m_Memory.m_nAllocationCount = 256;
  workItems.m_Memory.m_nGrowSize = 0x80000000;
  workItems.m_Memory.m_pMemory = &workItems.m_Memory.m_FixedMemory;
  CBodyGameSystem::BuildWorkList(this, nCount, pChanges, 16, &workItems);
  m_Size = workItems.m_Size;
  if ( workItems.m_Size == 0 )
  {
    CUtlVectorBase<CBodyGameSystem::HierarchySetupWork_t,CUtlMemoryFixedGrowable<CBodyGameSystem::HierarchySetupWork_t,256ul,int>>::~CUtlVectorBase(&workItems);
    return;
  }
  if ( bNotifyAddedToPVS )
  {
    v7 = 1;
    v6 = 0;
  }
  else
  {
    v6 = workItems.m_Size - 1;
    v7 = -1;
    m_Size = -1;
  }
  v8 = v6;
  do
  {
    (*(workItems.m_Memory.m_pMemory[v8].m_pNode->_vptr_CGameSceneNode + 8))(
      workItems.m_Memory.m_pMemory[v8].m_pNode,
      workItems.m_Memory.m_pMemory[v8].m_pNode->m_pOwner,
      *(workItems.m_Memory.m_pMemory[v8].m_pInfo + 2),
      *(workItems.m_Memory.m_pMemory[v8].m_pInfo + 3));
    v6 += v7;
    v8 += v7;
  }
  while ( m_Size != v6 );
  workItems.m_Size = 0;
  if ( workItems.m_Memory.m_nAllocationCount < 0 )
  {
    v9 = workItems.m_Memory.m_nGrowSize & 0xC0000000;
  }
  else
  {
    v9 = workItems.m_Memory.m_nGrowSize & 0xC0000000;
    if ( workItems.m_Memory.m_pMemory != &workItems.m_Memory.m_FixedMemory )
    {
      if ( workItems.m_Memory.m_pMemory != 0 && v9 == 0 )
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
      return;
    }
  }
  if ( v9 == 0 )
    CUtlMemory<CBodyGameSystem::HierarchySetupWork_t,int>::Purge(&workItems.m_Memory);
}


// CBodyGameSystem::UpdateOnRemove  (line 464, @0x0000000001f487d0, libserver.so)  // inlines: BuildWorkList<const EntityDeletion_t>, CUtlMemory, CUtlMemoryFixedGrowable, CUtlMemoryFixedGrowable_Base, CUtlVectorBase, CUtlVectorFixedGrowable, ConvertToExternalMemory, IsExternallyAllocated, Purge, Purge_FixedGrowable, RemoveAll, ~CUtlMemory, ~CUtlMemoryFixedGrowable, ~CUtlMemoryFixedGrowable_Base, ~CUtlVectorBase, ~CUtlVectorFixedGrowable
// calls: CBodyGameSystem::BuildWorkList, CUtlMemory<CBodyGameSystem::HierarchySetupWork_t, int>::Purge, CUtlVectorBase<CBodyGameSystem::HierarchySetupWork_t, CUtlMemoryFixedGrowable<CBodyGameSystem::HierarchySetupWork_t, 256ul, int> >::~CUtlVectorBase, _Unwind_Resume, __stack_chk_fail
// callers: CGameEntitySystem::UpdateOnRemove
void __fastcall CBodyGameSystem::UpdateOnRemove(
        CBodyGameSystem *const this,
        int nCount,
        const EntityDeletion_t *pDeletions)
{
  int v3; // eax
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // r12
  uint32 v6; // eax
  uint32 v7; // eax
  CUtlVectorFixedGrowable<CBodyGameSystem::HierarchySetupWork_t,256ul> workItems; // [rsp+0h] [rbp-1840h] BYREF
  unsigned __int64 v9; // [rsp+1818h] [rbp-28h]

  workItems.m_Size = 0;
  v9 = __readfsqword(0x28u);
  workItems.m_Memory.m_nAllocationCount = 256;
  workItems.m_Memory.m_nGrowSize = 0x80000000;
  workItems.m_Memory.m_pMemory = &workItems.m_Memory.m_FixedMemory;
  CBodyGameSystem::BuildWorkList(this, nCount, pDeletions, 8, &workItems);
  if ( workItems.m_Size == 0 )
  {
    workItems.m_Size = 0;
    v7 = workItems.m_Memory.m_nGrowSize & 0xC0000000;
    if ( workItems.m_Memory.m_nAllocationCount >= 0 && workItems.m_Memory.m_pMemory != &workItems.m_Memory.m_FixedMemory )
    {
      if ( workItems.m_Memory.m_pMemory != 0 && v7 == 0 )
        goto LABEL_9;
      return;
    }
    if ( v7 != 0 )
      return;
LABEL_12:
    CUtlMemory<CBodyGameSystem::HierarchySetupWork_t,int>::Purge(&workItems.m_Memory);
    return;
  }
  v3 = workItems.m_Size - 1;
  if ( workItems.m_Size - 1 >= 0 )
  {
    v4 = 24LL * v3;
    v5 = 24 * (v3 - v3) - 24;
    do
    {
      (*(workItems.m_Memory.m_pMemory[v4 / 0x18].m_pNode->_vptr_CGameSceneNode + 7))(
        workItems.m_Memory.m_pMemory[v4 / 0x18].m_pNode,
        workItems.m_Memory.m_pMemory[v4 / 0x18].m_pNode->m_pOwner);
      v4 -= 24LL;
    }
    while ( v4 != v5 );
  }
  workItems.m_Size = 0;
  if ( workItems.m_Memory.m_nAllocationCount < 0 )
  {
    v6 = workItems.m_Memory.m_nGrowSize & 0xC0000000;
LABEL_11:
    if ( v6 != 0 )
      return;
    goto LABEL_12;
  }
  v6 = workItems.m_Memory.m_nGrowSize & 0xC0000000;
  if ( workItems.m_Memory.m_pMemory == &workItems.m_Memory.m_FixedMemory )
    goto LABEL_11;
  if ( workItems.m_Memory.m_pMemory != 0 && v6 == 0 )
LABEL_9:
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
}


