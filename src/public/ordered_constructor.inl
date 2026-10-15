
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// COrderedConstructor_Create<void, CResolveOrderedFunc<void, ResolveOrderedSystem_EarlyInit_Common>, false>::~COrderedConstructor_Create  (line 549, @0x0000000001a6f150, libserver.so)  // inlines: CallReleaseFunc, InternalLock, PrematurelyReleaseWrapperInstanceRef, Release, ReleaseDependencies, ThreadInterlockedAnd, ThreadInterlockedDecrement, ThreadInterlockedOr, ~COrderedConstructor_DependencyManagement
void __fastcall COrderedConstructor_Create<void,CResolveOrderedFunc<void,&(ResolveOrderedSystem_EarlyInit_Common(COrderedConstructor_DependencyManagement<void> &))>,false>::~COrderedConstructor_Create(
        COrderedConstructor_Create<void,CResolveOrderedFunc<void,ResolveOrderedSystem_EarlyInit_Common>,false> *const this)
{
  volatile uint32 m_nRefCount; // eax
  volatile uint32 v3; // edx
  volatile uint32 v4; // ett
  volatile uint32 v5; // eax
  int v6; // edx
  volatile uint32 v7; // ett
  OrderedDependency_t *i; // r12

  _InterlockedOr(this, 0x10000000u);
  if ( (this->m_nRefCount & 0x4000000) != 0 )
  {
    m_nRefCount = this->m_nRefCount;
    do
    {
      v3 = m_nRefCount;
      v4 = m_nRefCount;
      m_nRefCount = _InterlockedCompareExchange(this, m_nRefCount & 0xFBFFFFFF, m_nRefCount);
    }
    while ( v4 != m_nRefCount );
    if ( (v3 & 0x4000000) != 0 && (_InterlockedDecrement(this) & 0x1FFFFFF) == 0 )
    {
      do
      {
        v5 = this->m_nRefCount;
        do
        {
          v6 = v5;
          v7 = v5;
          v5 = _InterlockedCompareExchange(this, v5 | 0x80000000, v5);
        }
        while ( v7 != v5 );
      }
      while ( v6 < 0 );
      if ( (this->m_nRefCount & 0x1FFFFFF) == 0 )
      {
        if ( (this->m_nRefCount & 0x2000000) != 0 )
          _InterlockedAnd(this, 0xFDFFFFFF);
        for ( i = this->m_pDependencyLL; i != 0; i = i->m_pNext )
          i->m_pFN_Release(i->m_pReleaseInstance);
        this->m_pDependencyLL = 0;
      }
      _InterlockedAnd(this, 0x7FFFFFFFu);
    }
  }
}


// COrderedConstructor_DependencyManagement<void>::PrematurelyReleaseWrapperInstanceRef  (line 1129, @0x0000000001a6f350, libserver.so)  // inlines: CallReleaseFunc, InternalLock, Release, ReleaseDependencies, ThreadInterlockedAnd, ThreadInterlockedDecrement, ThreadInterlockedOr
// callers: __static_initialization_and_destruction_0
bool __fastcall COrderedConstructor_DependencyManagement<void>::PrematurelyReleaseWrapperInstanceRef(
        COrderedConstructor_DependencyManagement<void> *const this)
{
  bool result; // al
  volatile uint32 m_nRefCount; // eax
  volatile uint32 v4; // edx
  volatile uint32 v5; // ett
  volatile uint32 v6; // eax
  int v7; // edx
  volatile uint32 v8; // ett
  OrderedDependency_t *i; // r12

  if ( (this->m_nRefCount & 0x4000000) == 0 )
    return 0;
  m_nRefCount = this->m_nRefCount;
  do
  {
    v4 = m_nRefCount;
    v5 = m_nRefCount;
    m_nRefCount = _InterlockedCompareExchange(this, m_nRefCount & 0xFBFFFFFF, m_nRefCount);
  }
  while ( v5 != m_nRefCount );
  if ( (v4 & 0x4000000) == 0 )
    return 0;
  result = 1;
  if ( (_InterlockedDecrement(this) & 0x1FFFFFF) == 0 )
  {
    do
    {
      v6 = this->m_nRefCount;
      do
      {
        v7 = v6;
        v8 = v6;
        v6 = _InterlockedCompareExchange(this, v6 | 0x80000000, v6);
      }
      while ( v8 != v6 );
    }
    while ( v7 < 0 );
    if ( (this->m_nRefCount & 0x1FFFFFF) == 0 )
    {
      if ( (this->m_nRefCount & 0x2000000) != 0 )
        _InterlockedAnd(this, 0xFDFFFFFF);
      for ( i = this->m_pDependencyLL; i != 0; i = i->m_pNext )
        i->m_pFN_Release(i->m_pReleaseInstance);
      this->m_pDependencyLL = 0;
    }
    _InterlockedAnd(this, 0x7FFFFFFFu);
    return 1;
  }
  return result;
}


// COrderedConstructor_Create<void, CResolveOrderedFunc<void, ResolveOrderedSystem_EarlyInit_Common>, false>::AddRef  (line 1280, @0x0000000001a6f210, libserver.so)  // inlines: CallReleaseFunc, InternalLock, Release, ReleaseDependencies, ResolveOrderedSystem_EarlyInit_Common, ThreadInterlockedAnd, ThreadInterlockedDecrement, ThreadInterlockedIncrement, ThreadInterlockedOr, ThreadPause
// calls: EarlyInit_Tier0
// callers: __static_initialization_and_destruction_0
void __fastcall COrderedConstructor_Create<void,CResolveOrderedFunc<void,&(ResolveOrderedSystem_EarlyInit_Common(COrderedConstructor_DependencyManagement<void> &))>,false>::AddRef(
        COrderedConstructor_Create<void,CResolveOrderedFunc<void,ResolveOrderedSystem_EarlyInit_Common>,false> *const this,
        bool bIsWrapperRef)
{
  volatile signed int m_nRefCount; // eax
  volatile uint32 v4; // eax
  volatile uint32 v5; // edx
  volatile uint32 v6; // ett
  volatile uint32 v7; // eax
  int v8; // edx
  volatile uint32 v9; // ett
  volatile uint32 v10; // eax
  int v11; // edx
  volatile uint32 v12; // ett
  OrderedDependency_t *i; // r12
  bool v14; // [rsp+Ch] [rbp-14h]

  m_nRefCount = _InterlockedIncrement(this);
  if ( m_nRefCount < 0 )
  {
    do
    {
      _mm_pause();
      m_nRefCount = this->m_nRefCount;
    }
    while ( (this->m_nRefCount & 0x80000000) != 0 );
  }
  if ( (m_nRefCount & 0x2000000) != 0 )
  {
    if ( bIsWrapperRef )
      goto LABEL_5;
  }
  else
  {
    do
    {
      v7 = this->m_nRefCount;
      do
      {
        v8 = v7;
        v9 = v7;
        v7 = _InterlockedCompareExchange(this, v7 | 0x80000000, v7);
      }
      while ( v9 != v7 );
    }
    while ( v8 < 0 );
    if ( (this->m_nRefCount & 0x2000000) == 0 )
    {
      v14 = bIsWrapperRef;
      EarlyInit_Tier0(this);
      _InterlockedOr(this, 0x2000000u);
      bIsWrapperRef = v14;
    }
    _InterlockedAnd(this, 0x7FFFFFFFu);
    if ( bIsWrapperRef )
      goto LABEL_5;
  }
  if ( (this->m_nRefCount & 0xC000000) != 0 )
    return;
  _InterlockedAdd(this, 1u);
LABEL_5:
  v4 = this->m_nRefCount;
  do
  {
    v5 = v4;
    v6 = v4;
    v4 = _InterlockedCompareExchange(this, v4 | 0x4000000, v4);
  }
  while ( v6 != v4 );
  if ( (v5 & 0x4000000) != 0 && (_InterlockedDecrement(this) & 0x1FFFFFF) == 0 )
  {
    do
    {
      v10 = this->m_nRefCount;
      do
      {
        v11 = v10;
        v12 = v10;
        v10 = _InterlockedCompareExchange(this, v10 | 0x80000000, v10);
      }
      while ( v12 != v10 );
    }
    while ( v11 < 0 );
    if ( (this->m_nRefCount & 0x1FFFFFF) == 0 )
    {
      if ( (this->m_nRefCount & 0x2000000) != 0 )
        _InterlockedAnd(this, 0xFDFFFFFF);
      for ( i = this->m_pDependencyLL; i != 0; i = i->m_pNext )
        i->m_pFN_Release(i->m_pReleaseInstance);
      this->m_pDependencyLL = 0;
    }
    _InterlockedAnd(this, 0x7FFFFFFFu);
  }
}


