
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CUtlFixedMemory<UtlLinkedListElem_t<CRenderComponent*, long long int> >::Grow  (line 266, @0x0000000001f9ad80, libserver.so)  // inlines: LeafCodeInfo_t
// calls: LoggingSystem_IsChannelEnabled, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...), Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess
// callers: CUtlLinkedList<CRenderComponent*, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<CRenderComponent*, long long int> > >::AllocInternal
// strings: "../../public/tier1/utlfixedmemory.h", "Grow", "CUtlFixedMemory overflow!\n"
void __fastcall CUtlFixedMemory<UtlLinkedListElem_t<CRenderComponent *,long long>>::Grow(
        CUtlFixedMemory<UtlLinkedListElem_t<CRenderComponent*,long long int> > *const this,
        int num)
{
  int m_nGrowSize; // ecx
  int m_nAllocationCount; // edi
  intp v5; // r12
  CUtlFixedMemory<UtlLinkedListElem_t<CRenderComponent*,long long int> >::BlockHeader_t *v6; // rax
  CUtlFixedMemory<UtlLinkedListElem_t<CRenderComponent*,long long int> >::BlockHeader_t *m_pBlocks; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // r8
  __int64 v13; // r9
  LeafCodeInfo_t v14; // [rsp-38h] [rbp-38h] BYREF

  if ( num > 0 )
  {
    m_nGrowSize = this->m_nGrowSize;
    if ( m_nGrowSize != 0 )
    {
      m_nAllocationCount = this->m_nAllocationCount;
    }
    else
    {
      m_nAllocationCount = this->m_nAllocationCount;
      m_nGrowSize = m_nAllocationCount;
      if ( m_nAllocationCount == 0 )
        m_nGrowSize = 2;
    }
    if ( m_nGrowSize < num )
      m_nGrowSize *= (m_nGrowSize + num - 1) / m_nGrowSize;
    v5 = m_nGrowSize;
    this->m_nAllocationCount = m_nGrowSize + m_nAllocationCount;
    v6 = (**g_pMemAlloc)(g_pMemAlloc, 24LL * m_nGrowSize + 16);
    if ( v6 == 0 )
    {
      if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
      {
        v14.m_szFile = "../../public/tier1/utlfixedmemory.h";
        v14.m_szFunction = "Grow";
        v14.m_nLine = 303;
        LoggingSystem_Log(LOG_GENERAL, LoggingSeverity_t::LS_ERROR, &v14, "CUtlFixedMemory overflow!\n", v12, v13);
      }
      if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v10, v11, v8, v9) != 0 )
        loc_0 = -559038737;
      Plat_ExitProcess(1);
      JUMPOUT(0x1F9AE8D);
    }
    v6->m_pNext = 0;
    v6->m_nBlockSize = v5;
    m_pBlocks = this->m_pBlocks;
    if ( this->m_pBlocks != 0 )
    {
      while ( m_pBlocks->m_pNext != 0 )
        m_pBlocks = m_pBlocks->m_pNext;
      m_pBlocks->m_pNext = v6;
    }
    else
    {
      this->m_pBlocks = v6;
    }
  }
}


// CUtlFixedMemory<UtlLinkedListElem_t<CResponseQueue::CDeferredResponse, long long int> >::Grow  (line 266, @0x00000000021813d0, libserver.so)  // inlines: LeafCodeInfo_t
// calls: LoggingSystem_IsChannelEnabled, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...), Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess
// callers: CUtlLinkedList<CResponseQueue::CDeferredResponse, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<CResponseQueue::CDeferredResponse, long long int> > >::AllocInternal
// strings: "../../public/tier1/utlfixedmemory.h", "Grow", "CUtlFixedMemory overflow!\n"
void __fastcall CUtlFixedMemory<UtlLinkedListElem_t<CResponseQueue::CDeferredResponse,long long>>::Grow(
        CUtlFixedMemory<UtlLinkedListElem_t<CResponseQueue::CDeferredResponse,long long int> > *const this,
        int num)
{
  int m_nGrowSize; // ecx
  int m_nAllocationCount; // edi
  intp v5; // r12
  CUtlFixedMemory<UtlLinkedListElem_t<CResponseQueue::CDeferredResponse,long long int> >::BlockHeader_t *v6; // rax
  CUtlFixedMemory<UtlLinkedListElem_t<CResponseQueue::CDeferredResponse,long long int> >::BlockHeader_t *m_pBlocks; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // r8
  __int64 v13; // r9
  LeafCodeInfo_t v14; // [rsp-38h] [rbp-38h] BYREF

  if ( num > 0 )
  {
    m_nGrowSize = this->m_nGrowSize;
    if ( m_nGrowSize != 0 )
    {
      m_nAllocationCount = this->m_nAllocationCount;
    }
    else
    {
      m_nAllocationCount = this->m_nAllocationCount;
      m_nGrowSize = m_nAllocationCount;
      if ( m_nAllocationCount == 0 )
        m_nGrowSize = 1;
    }
    if ( m_nGrowSize < num )
      m_nGrowSize *= (m_nGrowSize + num - 1) / m_nGrowSize;
    v5 = m_nGrowSize;
    this->m_nAllocationCount = m_nGrowSize + m_nAllocationCount;
    v6 = (**g_pMemAlloc)(g_pMemAlloc, 104LL * m_nGrowSize + 16);
    if ( v6 == 0 )
    {
      if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
      {
        v14.m_szFile = "../../public/tier1/utlfixedmemory.h";
        v14.m_szFunction = "Grow";
        v14.m_nLine = 303;
        LoggingSystem_Log(LOG_GENERAL, LoggingSeverity_t::LS_ERROR, &v14, "CUtlFixedMemory overflow!\n", v12, v13);
      }
      if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v10, v11, v8, v9) != 0 )
        loc_0 = -559038737;
      Plat_ExitProcess(1);
      JUMPOUT(0x21814DD);
    }
    v6->m_pNext = 0;
    v6->m_nBlockSize = v5;
    m_pBlocks = this->m_pBlocks;
    if ( this->m_pBlocks != 0 )
    {
      while ( m_pBlocks->m_pNext != 0 )
        m_pBlocks = m_pBlocks->m_pNext;
      m_pBlocks->m_pNext = v6;
    }
    else
    {
      this->m_pBlocks = v6;
    }
  }
}


// CUtlFixedMemory<UtlLinkedListElem_t<CParticleSystemQueryGameSystem::QueryInfo_t, long long int> >::Grow  (line 266, @0x000000000231a560, libserver.so)  // inlines: LeafCodeInfo_t
// calls: LoggingSystem_IsChannelEnabled, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...), Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess
// callers: CUtlLinkedList<CParticleSystemQueryGameSystem::QueryInfo_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<CParticleSystemQueryGameSystem::QueryInfo_t, long long int> > >::AllocInternal
// strings: "../../public/tier1/utlfixedmemory.h", "Grow", "CUtlFixedMemory overflow!\n"
void __fastcall CUtlFixedMemory<UtlLinkedListElem_t<CParticleSystemQueryGameSystem::QueryInfo_t,long long>>::Grow(
        CUtlFixedMemory<UtlLinkedListElem_t<CParticleSystemQueryGameSystem::QueryInfo_t,long long int> > *const this,
        int num)
{
  int m_nGrowSize; // ecx
  int m_nAllocationCount; // edi
  intp v5; // r12
  CUtlFixedMemory<UtlLinkedListElem_t<CParticleSystemQueryGameSystem::QueryInfo_t,long long int> >::BlockHeader_t *v6; // rax
  CUtlFixedMemory<UtlLinkedListElem_t<CParticleSystemQueryGameSystem::QueryInfo_t,long long int> >::BlockHeader_t *m_pBlocks; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // r8
  __int64 v13; // r9
  LeafCodeInfo_t v14; // [rsp-38h] [rbp-38h] BYREF

  if ( num > 0 )
  {
    m_nGrowSize = this->m_nGrowSize;
    if ( m_nGrowSize != 0 )
    {
      m_nAllocationCount = this->m_nAllocationCount;
    }
    else
    {
      m_nAllocationCount = this->m_nAllocationCount;
      m_nGrowSize = m_nAllocationCount;
      if ( m_nAllocationCount == 0 )
        m_nGrowSize = 1;
    }
    if ( m_nGrowSize < num )
      m_nGrowSize *= (m_nGrowSize + num - 1) / m_nGrowSize;
    v5 = m_nGrowSize;
    this->m_nAllocationCount = m_nGrowSize + m_nAllocationCount;
    v6 = (**g_pMemAlloc)(g_pMemAlloc, 32LL * m_nGrowSize + 16);
    if ( v6 == 0 )
    {
      if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
      {
        v14.m_szFile = "../../public/tier1/utlfixedmemory.h";
        v14.m_szFunction = "Grow";
        v14.m_nLine = 303;
        LoggingSystem_Log(LOG_GENERAL, LoggingSeverity_t::LS_ERROR, &v14, "CUtlFixedMemory overflow!\n", v12, v13);
      }
      if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v10, v11, v8, v9) != 0 )
        loc_0 = -559038737;
      Plat_ExitProcess(1);
      JUMPOUT(0x231A66D);
    }
    v6->m_pNext = 0;
    v6->m_nBlockSize = v5;
    m_pBlocks = this->m_pBlocks;
    if ( this->m_pBlocks != 0 )
    {
      while ( m_pBlocks->m_pNext != 0 )
        m_pBlocks = m_pBlocks->m_pNext;
      m_pBlocks->m_pNext = v6;
    }
    else
    {
      this->m_pBlocks = v6;
    }
  }
}


// CUtlFixedMemory<UtlLinkedListElem_t<LagRecord, long long int> >::Grow  (line 266, @0x0000000002347670, libserver.so)  // inlines: LeafCodeInfo_t
// calls: LoggingSystem_IsChannelEnabled, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...), Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess
// callers: CUtlLinkedList<LagRecord, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<LagRecord, long long int> > >::AllocInternal
// strings: "../../public/tier1/utlfixedmemory.h", "Grow", "CUtlFixedMemory overflow!\n"
void __fastcall CUtlFixedMemory<UtlLinkedListElem_t<LagRecord,long long>>::Grow(
        CUtlFixedMemory<UtlLinkedListElem_t<LagRecord,long long int> > *const this,
        int num)
{
  int m_nGrowSize; // ecx
  int m_nAllocationCount; // edi
  intp v5; // r12
  CUtlFixedMemory<UtlLinkedListElem_t<LagRecord,long long int> >::BlockHeader_t *v6; // rax
  CUtlFixedMemory<UtlLinkedListElem_t<LagRecord,long long int> >::BlockHeader_t *m_pBlocks; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // r8
  __int64 v13; // r9
  LeafCodeInfo_t v14; // [rsp-38h] [rbp-38h] BYREF

  if ( num > 0 )
  {
    m_nGrowSize = this->m_nGrowSize;
    if ( m_nGrowSize != 0 )
    {
      m_nAllocationCount = this->m_nAllocationCount;
    }
    else
    {
      m_nAllocationCount = this->m_nAllocationCount;
      m_nGrowSize = m_nAllocationCount;
      if ( m_nAllocationCount == 0 )
        m_nGrowSize = 1;
    }
    if ( m_nGrowSize < num )
      m_nGrowSize *= (m_nGrowSize + num - 1) / m_nGrowSize;
    v5 = m_nGrowSize;
    this->m_nAllocationCount = m_nGrowSize + m_nAllocationCount;
    v6 = (**g_pMemAlloc)(g_pMemAlloc, 320LL * m_nGrowSize + 16);
    if ( v6 == 0 )
    {
      if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
      {
        v14.m_szFile = "../../public/tier1/utlfixedmemory.h";
        v14.m_szFunction = "Grow";
        v14.m_nLine = 303;
        LoggingSystem_Log(LOG_GENERAL, LoggingSeverity_t::LS_ERROR, &v14, "CUtlFixedMemory overflow!\n", v12, v13);
      }
      if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v10, v11, v8, v9) != 0 )
        loc_0 = -559038737;
      Plat_ExitProcess(1);
      JUMPOUT(0x234777D);
    }
    v6->m_pNext = 0;
    v6->m_nBlockSize = v5;
    m_pBlocks = this->m_pBlocks;
    if ( this->m_pBlocks != 0 )
    {
      while ( m_pBlocks->m_pNext != 0 )
        m_pBlocks = m_pBlocks->m_pNext;
      m_pBlocks->m_pNext = v6;
    }
    else
    {
      this->m_pBlocks = v6;
    }
  }
}


// CUtlFixedMemory<UtlLinkedListElem_t<CDOTAHeroPositionsElement, long long int> >::Grow  (line 266, @0x000000000298d1c0, libserver.so)  // inlines: LeafCodeInfo_t
// calls: LoggingSystem_IsChannelEnabled, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...), Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess
// callers: CUtlLinkedList<CDOTAHeroPositionsElement, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<CDOTAHeroPositionsElement, long long int> > >::AllocInternal
// strings: "../../public/tier1/utlfixedmemory.h", "Grow", "CUtlFixedMemory overflow!\n"
void __fastcall CUtlFixedMemory<UtlLinkedListElem_t<CDOTAHeroPositionsElement,long long>>::Grow(
        CUtlFixedMemory<UtlLinkedListElem_t<CDOTAHeroPositionsElement,long long int> > *const this,
        int num)
{
  int m_nGrowSize; // ecx
  int m_nAllocationCount; // edi
  intp v5; // r12
  CUtlFixedMemory<UtlLinkedListElem_t<CDOTAHeroPositionsElement,long long int> >::BlockHeader_t *v6; // rax
  CUtlFixedMemory<UtlLinkedListElem_t<CDOTAHeroPositionsElement,long long int> >::BlockHeader_t *m_pBlocks; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // r8
  __int64 v13; // r9
  LeafCodeInfo_t v14; // [rsp-38h] [rbp-38h] BYREF

  if ( num > 0 )
  {
    m_nGrowSize = this->m_nGrowSize;
    if ( m_nGrowSize != 0 )
    {
      m_nAllocationCount = this->m_nAllocationCount;
    }
    else
    {
      m_nAllocationCount = this->m_nAllocationCount;
      m_nGrowSize = m_nAllocationCount;
      if ( m_nAllocationCount == 0 )
        m_nGrowSize = 1;
    }
    if ( m_nGrowSize < num )
      m_nGrowSize *= (m_nGrowSize + num - 1) / m_nGrowSize;
    v5 = m_nGrowSize;
    this->m_nAllocationCount = m_nGrowSize + m_nAllocationCount;
    v6 = (**g_pMemAlloc)(g_pMemAlloc, 40LL * m_nGrowSize + 16);
    if ( v6 == 0 )
    {
      if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
      {
        v14.m_szFile = "../../public/tier1/utlfixedmemory.h";
        v14.m_szFunction = "Grow";
        v14.m_nLine = 303;
        LoggingSystem_Log(LOG_GENERAL, LoggingSeverity_t::LS_ERROR, &v14, "CUtlFixedMemory overflow!\n", v12, v13);
      }
      if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v10, v11, v8, v9) != 0 )
        loc_0 = -559038737;
      Plat_ExitProcess(1);
      JUMPOUT(0x298D2CD);
    }
    v6->m_pNext = 0;
    v6->m_nBlockSize = v5;
    m_pBlocks = this->m_pBlocks;
    if ( this->m_pBlocks != 0 )
    {
      while ( m_pBlocks->m_pNext != 0 )
        m_pBlocks = m_pBlocks->m_pNext;
      m_pBlocks->m_pNext = v6;
    }
    else
    {
      this->m_pBlocks = v6;
    }
  }
}


// CUtlFixedMemory<UtlLinkedListElem_t<CRenderComponent*, long long int> >::Purge  (line 343, @0x0000000001f97170, libserver.so)
// callers: CRenderGameSystem::~CRenderGameSystem, CRenderGameSystem::CRenderGameSystem
void __fastcall CUtlFixedMemory<UtlLinkedListElem_t<CRenderComponent *,long long>>::Purge(
        CUtlFixedMemory<UtlLinkedListElem_t<CRenderComponent*,long long int> > *const this)
{
  CUtlFixedMemory<UtlLinkedListElem_t<CRenderComponent*,long long int> >::BlockHeader_t *m_pBlocks; // rsi
  CUtlFixedMemory<UtlLinkedListElem_t<CRenderComponent*,long long int> >::BlockHeader_t *m_pNext; // rbx

  m_pBlocks = this->m_pBlocks;
  if ( this->m_pBlocks != 0 )
  {
    while ( 1 )
    {
      m_pNext = m_pBlocks->m_pNext;
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
      if ( m_pNext == 0 )
        break;
      m_pBlocks = m_pNext;
    }
    this->m_pBlocks = 0;
    this->m_nAllocationCount = 0;
  }
}


// CUtlFixedMemory<UtlLinkedListElem_t<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t, long long int> >::Purge  (line 343, @0x0000000001f971d0, libserver.so)
// callers: CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::~CWorkListTransient, CRenderGameSystem::~CRenderGameSystem, CRenderGameSystem::CRenderGameSystem
void __fastcall CUtlFixedMemory<UtlLinkedListElem_t<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t,4>::InternalInfo_t,long long>>::Purge(
        CUtlFixedMemory<UtlLinkedListElem_t<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t,4>::InternalInfo_t,long long int> > *const this)
{
  CUtlFixedMemory<UtlLinkedListElem_t<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t,4>::InternalInfo_t,long long int> >::BlockHeader_t *m_pBlocks; // rsi
  CUtlFixedMemory<UtlLinkedListElem_t<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t,4>::InternalInfo_t,long long int> >::BlockHeader_t *m_pNext; // rbx

  m_pBlocks = this->m_pBlocks;
  if ( this->m_pBlocks != 0 )
  {
    while ( 1 )
    {
      m_pNext = m_pBlocks->m_pNext;
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
      if ( m_pNext == 0 )
        break;
      m_pBlocks = m_pNext;
    }
    this->m_pBlocks = 0;
    this->m_nAllocationCount = 0;
  }
}


// CUtlFixedMemory<UtlLinkedListElem_t<CResponseQueue::CDeferredResponse, long long int> >::Purge  (line 343, @0x00000000021809c0, libserver.so)
// callers: CResponseQueue::CResponseQueue, CResponseQueueManager::GameShutdown, CResponseQueueManager::~CResponseQueueManager
void __fastcall CUtlFixedMemory<UtlLinkedListElem_t<CResponseQueue::CDeferredResponse,long long>>::Purge(
        CUtlFixedMemory<UtlLinkedListElem_t<CResponseQueue::CDeferredResponse,long long int> > *const this)
{
  CUtlFixedMemory<UtlLinkedListElem_t<CResponseQueue::CDeferredResponse,long long int> >::BlockHeader_t *m_pBlocks; // rsi
  CUtlFixedMemory<UtlLinkedListElem_t<CResponseQueue::CDeferredResponse,long long int> >::BlockHeader_t *m_pNext; // rbx

  m_pBlocks = this->m_pBlocks;
  if ( this->m_pBlocks != 0 )
  {
    while ( 1 )
    {
      m_pNext = m_pBlocks->m_pNext;
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
      if ( m_pNext == 0 )
        break;
      m_pBlocks = m_pNext;
    }
    this->m_pBlocks = 0;
    this->m_nAllocationCount = 0;
  }
}


// CUtlFixedMemory<UtlLinkedListElem_t<CParticleSystemQueryGameSystem::QueryInfo_t, long long int> >::Purge  (line 343, @0x0000000002318770, libserver.so)
// callers: CParticleSystemQueryGameSystem::~CParticleSystemQueryGameSystem, _GLOBAL__sub_I__unity_base_08.cpp
void __fastcall CUtlFixedMemory<UtlLinkedListElem_t<CParticleSystemQueryGameSystem::QueryInfo_t,long long>>::Purge(
        CUtlFixedMemory<UtlLinkedListElem_t<CParticleSystemQueryGameSystem::QueryInfo_t,long long int> > *const this)
{
  CUtlFixedMemory<UtlLinkedListElem_t<CParticleSystemQueryGameSystem::QueryInfo_t,long long int> >::BlockHeader_t *m_pBlocks; // rsi
  CUtlFixedMemory<UtlLinkedListElem_t<CParticleSystemQueryGameSystem::QueryInfo_t,long long int> >::BlockHeader_t *m_pNext; // rbx

  m_pBlocks = this->m_pBlocks;
  if ( this->m_pBlocks != 0 )
  {
    while ( 1 )
    {
      m_pNext = m_pBlocks->m_pNext;
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
      if ( m_pNext == 0 )
        break;
      m_pBlocks = m_pNext;
    }
    this->m_pBlocks = 0;
    this->m_nAllocationCount = 0;
  }
}


// CUtlFixedMemory<UtlLinkedListElem_t<LagRecord, long long int> >::Purge  (line 343, @0x0000000002344f40, libserver.so)
// callers: CLagCompensationManager::Shutdown, CLagCompensationManager::GameShutdown, CLagCompensationManager::StartLagCompensation, CLagCompensationManager::FrameUpdatePostEntityThink
void __fastcall CUtlFixedMemory<UtlLinkedListElem_t<LagRecord,long long>>::Purge(
        CUtlFixedMemory<UtlLinkedListElem_t<LagRecord,long long int> > *const this)
{
  CUtlFixedMemory<UtlLinkedListElem_t<LagRecord,long long int> >::BlockHeader_t *m_pBlocks; // rsi
  CUtlFixedMemory<UtlLinkedListElem_t<LagRecord,long long int> >::BlockHeader_t *m_pNext; // rbx

  m_pBlocks = this->m_pBlocks;
  if ( this->m_pBlocks != 0 )
  {
    while ( 1 )
    {
      m_pNext = m_pBlocks->m_pNext;
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
      if ( m_pNext == 0 )
        break;
      m_pBlocks = m_pNext;
    }
    this->m_pBlocks = 0;
    this->m_nAllocationCount = 0;
  }
}


// CUtlFixedMemory<UtlLinkedListElem_t<CDOTAHeroPositionsElement, long long int> >::Purge  (line 343, @0x000000000298bf80, libserver.so)
// callers: CDOTAHeroList::RemoveAllHeroPositions, CDOTAHeroList::UpdateHeroPositions
void __fastcall CUtlFixedMemory<UtlLinkedListElem_t<CDOTAHeroPositionsElement,long long>>::Purge(
        CUtlFixedMemory<UtlLinkedListElem_t<CDOTAHeroPositionsElement,long long int> > *const this)
{
  CUtlFixedMemory<UtlLinkedListElem_t<CDOTAHeroPositionsElement,long long int> >::BlockHeader_t *m_pBlocks; // rsi
  CUtlFixedMemory<UtlLinkedListElem_t<CDOTAHeroPositionsElement,long long int> >::BlockHeader_t *m_pNext; // rbx

  m_pBlocks = this->m_pBlocks;
  if ( this->m_pBlocks != 0 )
  {
    while ( 1 )
    {
      m_pNext = m_pBlocks->m_pNext;
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
      if ( m_pNext == 0 )
        break;
      m_pBlocks = m_pNext;
    }
    this->m_pBlocks = 0;
    this->m_nAllocationCount = 0;
  }
}


