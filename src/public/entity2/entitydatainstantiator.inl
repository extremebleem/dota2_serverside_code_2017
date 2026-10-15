
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// IEntityDataInstantiator::~IEntityDataInstantiator  (line 24, @0x00000000020f1410, libserver.so)
void __fastcall IEntityDataInstantiator::~IEntityDataInstantiator(IEntityDataInstantiator *const this)
{
  this->_vptr_IEntityDataInstantiator = off_3FF60F0;
}


// IEntityDataInstantiator::~IEntityDataInstantiator  (line 24, @0x00000000020f4b70, libserver.so)  // inlines: ~IEntityDataInstantiator
// calls: operator delete
void __fastcall IEntityDataInstantiator::~IEntityDataInstantiator(IEntityDataInstantiator *const this)
{
  this->_vptr_IEntityDataInstantiator = off_3FF60F0;
  operator delete(this);
}


// CEntityDataInstantiator<touchlink_t>::~CEntityDataInstantiator  (line 35, @0x00000000021189a0, libserver.so)  // inlines: Purge, operator[], ~CEntityDataInstantiator, ~CUtlHash, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~IEntityDataInstantiator
// calls: CUtlVectorBase<CEntityDataInstantiator<touchlink_t>::HashEntry, CUtlMemory<CEntityDataInstantiator<touchlink_t>::HashEntry, int> >::RemoveAll, CUtlMemory<CEntityDataInstantiator<touchlink_t>::HashEntry, int>::Purge, CUtlVectorBase<CUtlVector<CEntityDataInstantiator<touchlink_t>::HashEntry, CUtlMemory<CEntityDataInstantiator<touchlink_t>::HashEntry, int> >, CUtlMemory<CUtlVector<CEntityDataInstantiator<touchlink_t>::HashEntry, CUtlMemory<CEntityDataInstantiator<touchlink_t>::HashEntry, int> >, int> >::RemoveAll, operator delete, CUtlMemory<CUtlVector<CEntityDataInstantiator<touchlink_t>::HashEntry, CUtlMemory<CEntityDataInstantiator<touchlink_t>::HashEntry, int> >, int>::Purge
void __fastcall CEntityDataInstantiator<touchlink_t>::~CEntityDataInstantiator(
        CEntityDataInstantiator<touchlink_t> *const this)
{
  CUtlHash<CEntityDataInstantiator<touchlink_t>::HashEntry,bool (*)(const CEntityDataInstantiator<touchlink_t>::HashEntry&,const CEntityDataInstantiator<touchlink_t>::HashEntry&),unsigned int (*)(const CEntityDataInstantiator<touchlink_t>::HashEntry&)> *p_m_HashTable; // r15
  int m_Size; // eax
  unsigned __int64 v4; // rbx
  __int64 v5; // r14
  CUtlVector<CEntityDataInstantiator<touchlink_t>::HashEntry,CUtlMemory<CEntityDataInstantiator<touchlink_t>::HashEntry,int> > *v6; // r12

  p_m_HashTable = &this->m_HashTable;
  this->_vptr_IEntityDataInstantiator = &off_3FF61B0;
  m_Size = this->m_HashTable.m_Buckets.m_Size;
  if ( m_Size > 0 )
  {
    v4 = 0;
    v5 = 8 * (3LL * (m_Size - 1) + 3);
    do
    {
      v6 = &this->m_HashTable.m_Buckets.m_Memory.m_pMemory[v4 / 0x18];
      CUtlVectorBase<CEntityDataInstantiator<touchlink_t>::HashEntry,CUtlMemory<CEntityDataInstantiator<touchlink_t>::HashEntry,int>>::RemoveAll(v6);
      if ( (v6->m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<CEntityDataInstantiator<touchlink_t>::HashEntry,int>::Purge(&v6->m_Memory);
      v4 += 24LL;
    }
    while ( v4 != v5 );
  }
  CUtlVectorBase<CUtlVector<CEntityDataInstantiator<touchlink_t>::HashEntry,CUtlMemory<CEntityDataInstantiator<touchlink_t>::HashEntry,int>>,CUtlMemory<CUtlVector<CEntityDataInstantiator<touchlink_t>::HashEntry,CUtlMemory<CEntityDataInstantiator<touchlink_t>::HashEntry,int>>,int>>::RemoveAll(&p_m_HashTable->m_Buckets);
  if ( (this->m_HashTable.m_Buckets.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CUtlVector<CEntityDataInstantiator<touchlink_t>::HashEntry,CUtlMemory<CEntityDataInstantiator<touchlink_t>::HashEntry,int>>,int>::Purge(&this->m_HashTable.m_Buckets.m_Memory);
    if ( (this->m_HashTable.m_Buckets.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CUtlVector<CEntityDataInstantiator<touchlink_t>::HashEntry,CUtlMemory<CEntityDataInstantiator<touchlink_t>::HashEntry,int>>,int>::Purge(&this->m_HashTable.m_Buckets.m_Memory);
  }
  this->_vptr_IEntityDataInstantiator = off_3FF60F0;
  operator delete(this);
}


// CEntityDataInstantiator<touchlink_t>::~CEntityDataInstantiator  (line 35, @0x0000000002118a60, libserver.so)  // inlines: Purge, operator[], ~CUtlHash, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~IEntityDataInstantiator
// calls: CUtlVectorBase<CEntityDataInstantiator<touchlink_t>::HashEntry, CUtlMemory<CEntityDataInstantiator<touchlink_t>::HashEntry, int> >::RemoveAll, CUtlMemory<CEntityDataInstantiator<touchlink_t>::HashEntry, int>::Purge, CUtlVectorBase<CUtlVector<CEntityDataInstantiator<touchlink_t>::HashEntry, CUtlMemory<CEntityDataInstantiator<touchlink_t>::HashEntry, int> >, CUtlMemory<CUtlVector<CEntityDataInstantiator<touchlink_t>::HashEntry, CUtlMemory<CEntityDataInstantiator<touchlink_t>::HashEntry, int> >, int> >::RemoveAll, CUtlMemory<CUtlVector<CEntityDataInstantiator<touchlink_t>::HashEntry, CUtlMemory<CEntityDataInstantiator<touchlink_t>::HashEntry, int> >, int>::Purge
void __fastcall CEntityDataInstantiator<touchlink_t>::~CEntityDataInstantiator(
        CEntityDataInstantiator<touchlink_t> *const this)
{
  CUtlHash<CEntityDataInstantiator<touchlink_t>::HashEntry,bool (*)(const CEntityDataInstantiator<touchlink_t>::HashEntry&,const CEntityDataInstantiator<touchlink_t>::HashEntry&),unsigned int (*)(const CEntityDataInstantiator<touchlink_t>::HashEntry&)> *p_m_HashTable; // r15
  int m_Size; // eax
  unsigned __int64 v4; // rbx
  __int64 v5; // r14
  CUtlVector<CEntityDataInstantiator<touchlink_t>::HashEntry,CUtlMemory<CEntityDataInstantiator<touchlink_t>::HashEntry,int> > *v6; // r12

  p_m_HashTable = &this->m_HashTable;
  this->_vptr_IEntityDataInstantiator = &off_3FF61B0;
  m_Size = this->m_HashTable.m_Buckets.m_Size;
  if ( m_Size > 0 )
  {
    v4 = 0;
    v5 = 8 * (3LL * (m_Size - 1) + 3);
    do
    {
      v6 = &this->m_HashTable.m_Buckets.m_Memory.m_pMemory[v4 / 0x18];
      CUtlVectorBase<CEntityDataInstantiator<touchlink_t>::HashEntry,CUtlMemory<CEntityDataInstantiator<touchlink_t>::HashEntry,int>>::RemoveAll(v6);
      if ( (v6->m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<CEntityDataInstantiator<touchlink_t>::HashEntry,int>::Purge(&v6->m_Memory);
      v4 += 24LL;
    }
    while ( v4 != v5 );
  }
  CUtlVectorBase<CUtlVector<CEntityDataInstantiator<touchlink_t>::HashEntry,CUtlMemory<CEntityDataInstantiator<touchlink_t>::HashEntry,int>>,CUtlMemory<CUtlVector<CEntityDataInstantiator<touchlink_t>::HashEntry,CUtlMemory<CEntityDataInstantiator<touchlink_t>::HashEntry,int>>,int>>::RemoveAll(&p_m_HashTable->m_Buckets);
  if ( (this->m_HashTable.m_Buckets.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CUtlVector<CEntityDataInstantiator<touchlink_t>::HashEntry,CUtlMemory<CEntityDataInstantiator<touchlink_t>::HashEntry,int>>,int>::Purge(&this->m_HashTable.m_Buckets.m_Memory);
    if ( (this->m_HashTable.m_Buckets.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CUtlVector<CEntityDataInstantiator<touchlink_t>::HashEntry,CUtlMemory<CEntityDataInstantiator<touchlink_t>::HashEntry,int>>,int>::Purge(&this->m_HashTable.m_Buckets.m_Memory);
  }
  this->_vptr_IEntityDataInstantiator = off_3FF60F0;
}


// CEntityDataInstantiator<groundlink_t>::~CEntityDataInstantiator  (line 35, @0x0000000002118bc0, libserver.so)  // inlines: Purge, operator[], ~CEntityDataInstantiator, ~CUtlHash, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~IEntityDataInstantiator
// calls: CUtlVectorBase<CEntityDataInstantiator<groundlink_t>::HashEntry, CUtlMemory<CEntityDataInstantiator<groundlink_t>::HashEntry, int> >::RemoveAll, CUtlMemory<CEntityDataInstantiator<groundlink_t>::HashEntry, int>::Purge, CUtlVectorBase<CUtlVector<CEntityDataInstantiator<groundlink_t>::HashEntry, CUtlMemory<CEntityDataInstantiator<groundlink_t>::HashEntry, int> >, CUtlMemory<CUtlVector<CEntityDataInstantiator<groundlink_t>::HashEntry, CUtlMemory<CEntityDataInstantiator<groundlink_t>::HashEntry, int> >, int> >::RemoveAll, operator delete, CUtlMemory<CUtlVector<CEntityDataInstantiator<groundlink_t>::HashEntry, CUtlMemory<CEntityDataInstantiator<groundlink_t>::HashEntry, int> >, int>::Purge
void __fastcall CEntityDataInstantiator<groundlink_t>::~CEntityDataInstantiator(
        CEntityDataInstantiator<groundlink_t> *const this)
{
  CUtlHash<CEntityDataInstantiator<groundlink_t>::HashEntry,bool (*)(const CEntityDataInstantiator<groundlink_t>::HashEntry&,const CEntityDataInstantiator<groundlink_t>::HashEntry&),unsigned int (*)(const CEntityDataInstantiator<groundlink_t>::HashEntry&)> *p_m_HashTable; // r15
  int m_Size; // eax
  unsigned __int64 v4; // rbx
  __int64 v5; // r14
  CUtlVector<CEntityDataInstantiator<groundlink_t>::HashEntry,CUtlMemory<CEntityDataInstantiator<groundlink_t>::HashEntry,int> > *v6; // r12

  p_m_HashTable = &this->m_HashTable;
  this->_vptr_IEntityDataInstantiator = &off_3FF61F0;
  m_Size = this->m_HashTable.m_Buckets.m_Size;
  if ( m_Size > 0 )
  {
    v4 = 0;
    v5 = 8 * (3LL * (m_Size - 1) + 3);
    do
    {
      v6 = &this->m_HashTable.m_Buckets.m_Memory.m_pMemory[v4 / 0x18];
      CUtlVectorBase<CEntityDataInstantiator<groundlink_t>::HashEntry,CUtlMemory<CEntityDataInstantiator<groundlink_t>::HashEntry,int>>::RemoveAll(v6);
      if ( (v6->m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<CEntityDataInstantiator<groundlink_t>::HashEntry,int>::Purge(&v6->m_Memory);
      v4 += 24LL;
    }
    while ( v4 != v5 );
  }
  CUtlVectorBase<CUtlVector<CEntityDataInstantiator<groundlink_t>::HashEntry,CUtlMemory<CEntityDataInstantiator<groundlink_t>::HashEntry,int>>,CUtlMemory<CUtlVector<CEntityDataInstantiator<groundlink_t>::HashEntry,CUtlMemory<CEntityDataInstantiator<groundlink_t>::HashEntry,int>>,int>>::RemoveAll(&p_m_HashTable->m_Buckets);
  if ( (this->m_HashTable.m_Buckets.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CUtlVector<CEntityDataInstantiator<groundlink_t>::HashEntry,CUtlMemory<CEntityDataInstantiator<groundlink_t>::HashEntry,int>>,int>::Purge(&this->m_HashTable.m_Buckets.m_Memory);
    if ( (this->m_HashTable.m_Buckets.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CUtlVector<CEntityDataInstantiator<groundlink_t>::HashEntry,CUtlMemory<CEntityDataInstantiator<groundlink_t>::HashEntry,int>>,int>::Purge(&this->m_HashTable.m_Buckets.m_Memory);
  }
  this->_vptr_IEntityDataInstantiator = off_3FF60F0;
  operator delete(this);
}


// CEntityDataInstantiator<groundlink_t>::~CEntityDataInstantiator  (line 35, @0x0000000002118c80, libserver.so)  // inlines: Purge, operator[], ~CUtlHash, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~IEntityDataInstantiator
// calls: CUtlVectorBase<CEntityDataInstantiator<groundlink_t>::HashEntry, CUtlMemory<CEntityDataInstantiator<groundlink_t>::HashEntry, int> >::RemoveAll, CUtlMemory<CEntityDataInstantiator<groundlink_t>::HashEntry, int>::Purge, CUtlVectorBase<CUtlVector<CEntityDataInstantiator<groundlink_t>::HashEntry, CUtlMemory<CEntityDataInstantiator<groundlink_t>::HashEntry, int> >, CUtlMemory<CUtlVector<CEntityDataInstantiator<groundlink_t>::HashEntry, CUtlMemory<CEntityDataInstantiator<groundlink_t>::HashEntry, int> >, int> >::RemoveAll, CUtlMemory<CUtlVector<CEntityDataInstantiator<groundlink_t>::HashEntry, CUtlMemory<CEntityDataInstantiator<groundlink_t>::HashEntry, int> >, int>::Purge
void __fastcall CEntityDataInstantiator<groundlink_t>::~CEntityDataInstantiator(
        CEntityDataInstantiator<groundlink_t> *const this)
{
  CUtlHash<CEntityDataInstantiator<groundlink_t>::HashEntry,bool (*)(const CEntityDataInstantiator<groundlink_t>::HashEntry&,const CEntityDataInstantiator<groundlink_t>::HashEntry&),unsigned int (*)(const CEntityDataInstantiator<groundlink_t>::HashEntry&)> *p_m_HashTable; // r15
  int m_Size; // eax
  unsigned __int64 v4; // rbx
  __int64 v5; // r14
  CUtlVector<CEntityDataInstantiator<groundlink_t>::HashEntry,CUtlMemory<CEntityDataInstantiator<groundlink_t>::HashEntry,int> > *v6; // r12

  p_m_HashTable = &this->m_HashTable;
  this->_vptr_IEntityDataInstantiator = &off_3FF61F0;
  m_Size = this->m_HashTable.m_Buckets.m_Size;
  if ( m_Size > 0 )
  {
    v4 = 0;
    v5 = 8 * (3LL * (m_Size - 1) + 3);
    do
    {
      v6 = &this->m_HashTable.m_Buckets.m_Memory.m_pMemory[v4 / 0x18];
      CUtlVectorBase<CEntityDataInstantiator<groundlink_t>::HashEntry,CUtlMemory<CEntityDataInstantiator<groundlink_t>::HashEntry,int>>::RemoveAll(v6);
      if ( (v6->m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<CEntityDataInstantiator<groundlink_t>::HashEntry,int>::Purge(&v6->m_Memory);
      v4 += 24LL;
    }
    while ( v4 != v5 );
  }
  CUtlVectorBase<CUtlVector<CEntityDataInstantiator<groundlink_t>::HashEntry,CUtlMemory<CEntityDataInstantiator<groundlink_t>::HashEntry,int>>,CUtlMemory<CUtlVector<CEntityDataInstantiator<groundlink_t>::HashEntry,CUtlMemory<CEntityDataInstantiator<groundlink_t>::HashEntry,int>>,int>>::RemoveAll(&p_m_HashTable->m_Buckets);
  if ( (this->m_HashTable.m_Buckets.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CUtlVector<CEntityDataInstantiator<groundlink_t>::HashEntry,CUtlMemory<CEntityDataInstantiator<groundlink_t>::HashEntry,int>>,int>::Purge(&this->m_HashTable.m_Buckets.m_Memory);
    if ( (this->m_HashTable.m_Buckets.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CUtlVector<CEntityDataInstantiator<groundlink_t>::HashEntry,CUtlMemory<CEntityDataInstantiator<groundlink_t>::HashEntry,int>>,int>::Purge(&this->m_HashTable.m_Buckets.m_Memory);
  }
  this->_vptr_IEntityDataInstantiator = off_3FF60F0;
}


// CEntityDataInstantiator<StepSimulationData>::~CEntityDataInstantiator  (line 35, @0x0000000002118de0, libserver.so)  // inlines: Purge, operator[], ~CEntityDataInstantiator, ~CUtlHash, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~IEntityDataInstantiator
// calls: CUtlVectorBase<CEntityDataInstantiator<StepSimulationData>::HashEntry, CUtlMemory<CEntityDataInstantiator<StepSimulationData>::HashEntry, int> >::RemoveAll, CUtlMemory<CEntityDataInstantiator<StepSimulationData>::HashEntry, int>::Purge, CUtlVectorBase<CUtlVector<CEntityDataInstantiator<StepSimulationData>::HashEntry, CUtlMemory<CEntityDataInstantiator<StepSimulationData>::HashEntry, int> >, CUtlMemory<CUtlVector<CEntityDataInstantiator<StepSimulationData>::HashEntry, CUtlMemory<CEntityDataInstantiator<StepSimulationData>::HashEntry, int> >, int> >::RemoveAll, operator delete, CUtlMemory<CUtlVector<CEntityDataInstantiator<StepSimulationData>::HashEntry, CUtlMemory<CEntityDataInstantiator<StepSimulationData>::HashEntry, int> >, int>::Purge
void __fastcall CEntityDataInstantiator<StepSimulationData>::~CEntityDataInstantiator(
        CEntityDataInstantiator<StepSimulationData> *const this)
{
  CUtlHash<CEntityDataInstantiator<StepSimulationData>::HashEntry,bool (*)(const CEntityDataInstantiator<StepSimulationData>::HashEntry&,const CEntityDataInstantiator<StepSimulationData>::HashEntry&),unsigned int (*)(const CEntityDataInstantiator<StepSimulationData>::HashEntry&)> *p_m_HashTable; // r15
  int m_Size; // eax
  unsigned __int64 v4; // rbx
  __int64 v5; // r14
  CUtlVector<CEntityDataInstantiator<StepSimulationData>::HashEntry,CUtlMemory<CEntityDataInstantiator<StepSimulationData>::HashEntry,int> > *v6; // r12

  p_m_HashTable = &this->m_HashTable;
  this->_vptr_IEntityDataInstantiator = &off_3FF6230;
  m_Size = this->m_HashTable.m_Buckets.m_Size;
  if ( m_Size > 0 )
  {
    v4 = 0;
    v5 = 8 * (3LL * (m_Size - 1) + 3);
    do
    {
      v6 = &this->m_HashTable.m_Buckets.m_Memory.m_pMemory[v4 / 0x18];
      CUtlVectorBase<CEntityDataInstantiator<StepSimulationData>::HashEntry,CUtlMemory<CEntityDataInstantiator<StepSimulationData>::HashEntry,int>>::RemoveAll(v6);
      if ( (v6->m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<CEntityDataInstantiator<StepSimulationData>::HashEntry,int>::Purge(&v6->m_Memory);
      v4 += 24LL;
    }
    while ( v4 != v5 );
  }
  CUtlVectorBase<CUtlVector<CEntityDataInstantiator<StepSimulationData>::HashEntry,CUtlMemory<CEntityDataInstantiator<StepSimulationData>::HashEntry,int>>,CUtlMemory<CUtlVector<CEntityDataInstantiator<StepSimulationData>::HashEntry,CUtlMemory<CEntityDataInstantiator<StepSimulationData>::HashEntry,int>>,int>>::RemoveAll(&p_m_HashTable->m_Buckets);
  if ( (this->m_HashTable.m_Buckets.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CUtlVector<CEntityDataInstantiator<StepSimulationData>::HashEntry,CUtlMemory<CEntityDataInstantiator<StepSimulationData>::HashEntry,int>>,int>::Purge(&this->m_HashTable.m_Buckets.m_Memory);
    if ( (this->m_HashTable.m_Buckets.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CUtlVector<CEntityDataInstantiator<StepSimulationData>::HashEntry,CUtlMemory<CEntityDataInstantiator<StepSimulationData>::HashEntry,int>>,int>::Purge(&this->m_HashTable.m_Buckets.m_Memory);
  }
  this->_vptr_IEntityDataInstantiator = off_3FF60F0;
  operator delete(this);
}


// CEntityDataInstantiator<StepSimulationData>::~CEntityDataInstantiator  (line 35, @0x0000000002118ea0, libserver.so)  // inlines: Purge, operator[], ~CUtlHash, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~IEntityDataInstantiator
// calls: CUtlVectorBase<CEntityDataInstantiator<StepSimulationData>::HashEntry, CUtlMemory<CEntityDataInstantiator<StepSimulationData>::HashEntry, int> >::RemoveAll, CUtlMemory<CEntityDataInstantiator<StepSimulationData>::HashEntry, int>::Purge, CUtlVectorBase<CUtlVector<CEntityDataInstantiator<StepSimulationData>::HashEntry, CUtlMemory<CEntityDataInstantiator<StepSimulationData>::HashEntry, int> >, CUtlMemory<CUtlVector<CEntityDataInstantiator<StepSimulationData>::HashEntry, CUtlMemory<CEntityDataInstantiator<StepSimulationData>::HashEntry, int> >, int> >::RemoveAll, CUtlMemory<CUtlVector<CEntityDataInstantiator<StepSimulationData>::HashEntry, CUtlMemory<CEntityDataInstantiator<StepSimulationData>::HashEntry, int> >, int>::Purge
void __fastcall CEntityDataInstantiator<StepSimulationData>::~CEntityDataInstantiator(
        CEntityDataInstantiator<StepSimulationData> *const this)
{
  CUtlHash<CEntityDataInstantiator<StepSimulationData>::HashEntry,bool (*)(const CEntityDataInstantiator<StepSimulationData>::HashEntry&,const CEntityDataInstantiator<StepSimulationData>::HashEntry&),unsigned int (*)(const CEntityDataInstantiator<StepSimulationData>::HashEntry&)> *p_m_HashTable; // r15
  int m_Size; // eax
  unsigned __int64 v4; // rbx
  __int64 v5; // r14
  CUtlVector<CEntityDataInstantiator<StepSimulationData>::HashEntry,CUtlMemory<CEntityDataInstantiator<StepSimulationData>::HashEntry,int> > *v6; // r12

  p_m_HashTable = &this->m_HashTable;
  this->_vptr_IEntityDataInstantiator = &off_3FF6230;
  m_Size = this->m_HashTable.m_Buckets.m_Size;
  if ( m_Size > 0 )
  {
    v4 = 0;
    v5 = 8 * (3LL * (m_Size - 1) + 3);
    do
    {
      v6 = &this->m_HashTable.m_Buckets.m_Memory.m_pMemory[v4 / 0x18];
      CUtlVectorBase<CEntityDataInstantiator<StepSimulationData>::HashEntry,CUtlMemory<CEntityDataInstantiator<StepSimulationData>::HashEntry,int>>::RemoveAll(v6);
      if ( (v6->m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<CEntityDataInstantiator<StepSimulationData>::HashEntry,int>::Purge(&v6->m_Memory);
      v4 += 24LL;
    }
    while ( v4 != v5 );
  }
  CUtlVectorBase<CUtlVector<CEntityDataInstantiator<StepSimulationData>::HashEntry,CUtlMemory<CEntityDataInstantiator<StepSimulationData>::HashEntry,int>>,CUtlMemory<CUtlVector<CEntityDataInstantiator<StepSimulationData>::HashEntry,CUtlMemory<CEntityDataInstantiator<StepSimulationData>::HashEntry,int>>,int>>::RemoveAll(&p_m_HashTable->m_Buckets);
  if ( (this->m_HashTable.m_Buckets.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CUtlVector<CEntityDataInstantiator<StepSimulationData>::HashEntry,CUtlMemory<CEntityDataInstantiator<StepSimulationData>::HashEntry,int>>,int>::Purge(&this->m_HashTable.m_Buckets.m_Memory);
    if ( (this->m_HashTable.m_Buckets.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CUtlVector<CEntityDataInstantiator<StepSimulationData>::HashEntry,CUtlMemory<CEntityDataInstantiator<StepSimulationData>::HashEntry,int>>,int>::Purge(&this->m_HashTable.m_Buckets.m_Memory);
  }
  this->_vptr_IEntityDataInstantiator = off_3FF60F0;
}


// CEntityDataInstantiator<ModelScale>::~CEntityDataInstantiator  (line 35, @0x0000000002119000, libserver.so)  // inlines: Purge, operator[], ~CEntityDataInstantiator, ~CUtlHash, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~IEntityDataInstantiator
// calls: CUtlVectorBase<CEntityDataInstantiator<ModelScale>::HashEntry, CUtlMemory<CEntityDataInstantiator<ModelScale>::HashEntry, int> >::RemoveAll, CUtlMemory<CEntityDataInstantiator<ModelScale>::HashEntry, int>::Purge, CUtlVectorBase<CUtlVector<CEntityDataInstantiator<ModelScale>::HashEntry, CUtlMemory<CEntityDataInstantiator<ModelScale>::HashEntry, int> >, CUtlMemory<CUtlVector<CEntityDataInstantiator<ModelScale>::HashEntry, CUtlMemory<CEntityDataInstantiator<ModelScale>::HashEntry, int> >, int> >::RemoveAll, operator delete, CUtlMemory<CUtlVector<CEntityDataInstantiator<ModelScale>::HashEntry, CUtlMemory<CEntityDataInstantiator<ModelScale>::HashEntry, int> >, int>::Purge
void __fastcall CEntityDataInstantiator<ModelScale>::~CEntityDataInstantiator(
        CEntityDataInstantiator<ModelScale> *const this)
{
  CUtlHash<CEntityDataInstantiator<ModelScale>::HashEntry,bool (*)(const CEntityDataInstantiator<ModelScale>::HashEntry&,const CEntityDataInstantiator<ModelScale>::HashEntry&),unsigned int (*)(const CEntityDataInstantiator<ModelScale>::HashEntry&)> *p_m_HashTable; // r15
  int m_Size; // eax
  unsigned __int64 v4; // rbx
  __int64 v5; // r14
  CUtlVector<CEntityDataInstantiator<ModelScale>::HashEntry,CUtlMemory<CEntityDataInstantiator<ModelScale>::HashEntry,int> > *v6; // r12

  p_m_HashTable = &this->m_HashTable;
  this->_vptr_IEntityDataInstantiator = &off_3FF6270;
  m_Size = this->m_HashTable.m_Buckets.m_Size;
  if ( m_Size > 0 )
  {
    v4 = 0;
    v5 = 8 * (3LL * (m_Size - 1) + 3);
    do
    {
      v6 = &this->m_HashTable.m_Buckets.m_Memory.m_pMemory[v4 / 0x18];
      CUtlVectorBase<CEntityDataInstantiator<ModelScale>::HashEntry,CUtlMemory<CEntityDataInstantiator<ModelScale>::HashEntry,int>>::RemoveAll(v6);
      if ( (v6->m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<CEntityDataInstantiator<ModelScale>::HashEntry,int>::Purge(&v6->m_Memory);
      v4 += 24LL;
    }
    while ( v4 != v5 );
  }
  CUtlVectorBase<CUtlVector<CEntityDataInstantiator<ModelScale>::HashEntry,CUtlMemory<CEntityDataInstantiator<ModelScale>::HashEntry,int>>,CUtlMemory<CUtlVector<CEntityDataInstantiator<ModelScale>::HashEntry,CUtlMemory<CEntityDataInstantiator<ModelScale>::HashEntry,int>>,int>>::RemoveAll(&p_m_HashTable->m_Buckets);
  if ( (this->m_HashTable.m_Buckets.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CUtlVector<CEntityDataInstantiator<ModelScale>::HashEntry,CUtlMemory<CEntityDataInstantiator<ModelScale>::HashEntry,int>>,int>::Purge(&this->m_HashTable.m_Buckets.m_Memory);
    if ( (this->m_HashTable.m_Buckets.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CUtlVector<CEntityDataInstantiator<ModelScale>::HashEntry,CUtlMemory<CEntityDataInstantiator<ModelScale>::HashEntry,int>>,int>::Purge(&this->m_HashTable.m_Buckets.m_Memory);
  }
  this->_vptr_IEntityDataInstantiator = off_3FF60F0;
  operator delete(this);
}


// CEntityDataInstantiator<ModelScale>::~CEntityDataInstantiator  (line 35, @0x00000000021190c0, libserver.so)  // inlines: Purge, operator[], ~CUtlHash, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~IEntityDataInstantiator
// calls: CUtlVectorBase<CEntityDataInstantiator<ModelScale>::HashEntry, CUtlMemory<CEntityDataInstantiator<ModelScale>::HashEntry, int> >::RemoveAll, CUtlMemory<CEntityDataInstantiator<ModelScale>::HashEntry, int>::Purge, CUtlVectorBase<CUtlVector<CEntityDataInstantiator<ModelScale>::HashEntry, CUtlMemory<CEntityDataInstantiator<ModelScale>::HashEntry, int> >, CUtlMemory<CUtlVector<CEntityDataInstantiator<ModelScale>::HashEntry, CUtlMemory<CEntityDataInstantiator<ModelScale>::HashEntry, int> >, int> >::RemoveAll, CUtlMemory<CUtlVector<CEntityDataInstantiator<ModelScale>::HashEntry, CUtlMemory<CEntityDataInstantiator<ModelScale>::HashEntry, int> >, int>::Purge
void __fastcall CEntityDataInstantiator<ModelScale>::~CEntityDataInstantiator(
        CEntityDataInstantiator<ModelScale> *const this)
{
  CUtlHash<CEntityDataInstantiator<ModelScale>::HashEntry,bool (*)(const CEntityDataInstantiator<ModelScale>::HashEntry&,const CEntityDataInstantiator<ModelScale>::HashEntry&),unsigned int (*)(const CEntityDataInstantiator<ModelScale>::HashEntry&)> *p_m_HashTable; // r15
  int m_Size; // eax
  unsigned __int64 v4; // rbx
  __int64 v5; // r14
  CUtlVector<CEntityDataInstantiator<ModelScale>::HashEntry,CUtlMemory<CEntityDataInstantiator<ModelScale>::HashEntry,int> > *v6; // r12

  p_m_HashTable = &this->m_HashTable;
  this->_vptr_IEntityDataInstantiator = &off_3FF6270;
  m_Size = this->m_HashTable.m_Buckets.m_Size;
  if ( m_Size > 0 )
  {
    v4 = 0;
    v5 = 8 * (3LL * (m_Size - 1) + 3);
    do
    {
      v6 = &this->m_HashTable.m_Buckets.m_Memory.m_pMemory[v4 / 0x18];
      CUtlVectorBase<CEntityDataInstantiator<ModelScale>::HashEntry,CUtlMemory<CEntityDataInstantiator<ModelScale>::HashEntry,int>>::RemoveAll(v6);
      if ( (v6->m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<CEntityDataInstantiator<ModelScale>::HashEntry,int>::Purge(&v6->m_Memory);
      v4 += 24LL;
    }
    while ( v4 != v5 );
  }
  CUtlVectorBase<CUtlVector<CEntityDataInstantiator<ModelScale>::HashEntry,CUtlMemory<CEntityDataInstantiator<ModelScale>::HashEntry,int>>,CUtlMemory<CUtlVector<CEntityDataInstantiator<ModelScale>::HashEntry,CUtlMemory<CEntityDataInstantiator<ModelScale>::HashEntry,int>>,int>>::RemoveAll(&p_m_HashTable->m_Buckets);
  if ( (this->m_HashTable.m_Buckets.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CUtlVector<CEntityDataInstantiator<ModelScale>::HashEntry,CUtlMemory<CEntityDataInstantiator<ModelScale>::HashEntry,int>>,int>::Purge(&this->m_HashTable.m_Buckets.m_Memory);
    if ( (this->m_HashTable.m_Buckets.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CUtlVector<CEntityDataInstantiator<ModelScale>::HashEntry,CUtlMemory<CEntityDataInstantiator<ModelScale>::HashEntry,int>>,int>::Purge(&this->m_HashTable.m_Buckets.m_Memory);
  }
  this->_vptr_IEntityDataInstantiator = off_3FF60F0;
}


// CEntityDataInstantiator<CWatcherList>::~CEntityDataInstantiator  (line 35, @0x0000000002119270, libserver.so)  // inlines: Purge, operator[], ~CEntityDataInstantiator, ~CUtlHash, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~IEntityDataInstantiator
// calls: CUtlVectorBase<CEntityDataInstantiator<CWatcherList>::HashEntry, CUtlMemory<CEntityDataInstantiator<CWatcherList>::HashEntry, int> >::RemoveAll, CUtlMemory<CEntityDataInstantiator<CWatcherList>::HashEntry, int>::Purge, CUtlVectorBase<CUtlVector<CEntityDataInstantiator<CWatcherList>::HashEntry, CUtlMemory<CEntityDataInstantiator<CWatcherList>::HashEntry, int> >, CUtlMemory<CUtlVector<CEntityDataInstantiator<CWatcherList>::HashEntry, CUtlMemory<CEntityDataInstantiator<CWatcherList>::HashEntry, int> >, int> >::RemoveAll, operator delete, CUtlMemory<CUtlVector<CEntityDataInstantiator<CWatcherList>::HashEntry, CUtlMemory<CEntityDataInstantiator<CWatcherList>::HashEntry, int> >, int>::Purge
void __fastcall CEntityDataInstantiator<CWatcherList>::~CEntityDataInstantiator(
        CEntityDataInstantiator<CWatcherList> *const this)
{
  CUtlHash<CEntityDataInstantiator<CWatcherList>::HashEntry,bool (*)(const CEntityDataInstantiator<CWatcherList>::HashEntry&,const CEntityDataInstantiator<CWatcherList>::HashEntry&),unsigned int (*)(const CEntityDataInstantiator<CWatcherList>::HashEntry&)> *p_m_HashTable; // r15
  int m_Size; // eax
  unsigned __int64 v4; // rbx
  __int64 v5; // r14
  CUtlVector<CEntityDataInstantiator<CWatcherList>::HashEntry,CUtlMemory<CEntityDataInstantiator<CWatcherList>::HashEntry,int> > *v6; // r12

  p_m_HashTable = &this->m_HashTable;
  this->_vptr_IEntityDataInstantiator = &off_3FF62B0;
  m_Size = this->m_HashTable.m_Buckets.m_Size;
  if ( m_Size > 0 )
  {
    v4 = 0;
    v5 = 8 * (3LL * (m_Size - 1) + 3);
    do
    {
      v6 = &this->m_HashTable.m_Buckets.m_Memory.m_pMemory[v4 / 0x18];
      CUtlVectorBase<CEntityDataInstantiator<CWatcherList>::HashEntry,CUtlMemory<CEntityDataInstantiator<CWatcherList>::HashEntry,int>>::RemoveAll(v6);
      if ( (v6->m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<CEntityDataInstantiator<CWatcherList>::HashEntry,int>::Purge(&v6->m_Memory);
      v4 += 24LL;
    }
    while ( v4 != v5 );
  }
  CUtlVectorBase<CUtlVector<CEntityDataInstantiator<CWatcherList>::HashEntry,CUtlMemory<CEntityDataInstantiator<CWatcherList>::HashEntry,int>>,CUtlMemory<CUtlVector<CEntityDataInstantiator<CWatcherList>::HashEntry,CUtlMemory<CEntityDataInstantiator<CWatcherList>::HashEntry,int>>,int>>::RemoveAll(&p_m_HashTable->m_Buckets);
  if ( (this->m_HashTable.m_Buckets.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CUtlVector<CEntityDataInstantiator<CWatcherList>::HashEntry,CUtlMemory<CEntityDataInstantiator<CWatcherList>::HashEntry,int>>,int>::Purge(&this->m_HashTable.m_Buckets.m_Memory);
    if ( (this->m_HashTable.m_Buckets.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CUtlVector<CEntityDataInstantiator<CWatcherList>::HashEntry,CUtlMemory<CEntityDataInstantiator<CWatcherList>::HashEntry,int>>,int>::Purge(&this->m_HashTable.m_Buckets.m_Memory);
  }
  this->_vptr_IEntityDataInstantiator = off_3FF60F0;
  operator delete(this);
}


// CEntityDataInstantiator<CWatcherList>::~CEntityDataInstantiator  (line 35, @0x0000000002119330, libserver.so)  // inlines: Purge, operator[], ~CUtlHash, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~IEntityDataInstantiator
// calls: CUtlVectorBase<CEntityDataInstantiator<CWatcherList>::HashEntry, CUtlMemory<CEntityDataInstantiator<CWatcherList>::HashEntry, int> >::RemoveAll, CUtlMemory<CEntityDataInstantiator<CWatcherList>::HashEntry, int>::Purge, CUtlVectorBase<CUtlVector<CEntityDataInstantiator<CWatcherList>::HashEntry, CUtlMemory<CEntityDataInstantiator<CWatcherList>::HashEntry, int> >, CUtlMemory<CUtlVector<CEntityDataInstantiator<CWatcherList>::HashEntry, CUtlMemory<CEntityDataInstantiator<CWatcherList>::HashEntry, int> >, int> >::RemoveAll, CUtlMemory<CUtlVector<CEntityDataInstantiator<CWatcherList>::HashEntry, CUtlMemory<CEntityDataInstantiator<CWatcherList>::HashEntry, int> >, int>::Purge
void __fastcall CEntityDataInstantiator<CWatcherList>::~CEntityDataInstantiator(
        CEntityDataInstantiator<CWatcherList> *const this)
{
  CUtlHash<CEntityDataInstantiator<CWatcherList>::HashEntry,bool (*)(const CEntityDataInstantiator<CWatcherList>::HashEntry&,const CEntityDataInstantiator<CWatcherList>::HashEntry&),unsigned int (*)(const CEntityDataInstantiator<CWatcherList>::HashEntry&)> *p_m_HashTable; // r15
  int m_Size; // eax
  unsigned __int64 v4; // rbx
  __int64 v5; // r14
  CUtlVector<CEntityDataInstantiator<CWatcherList>::HashEntry,CUtlMemory<CEntityDataInstantiator<CWatcherList>::HashEntry,int> > *v6; // r12

  p_m_HashTable = &this->m_HashTable;
  this->_vptr_IEntityDataInstantiator = &off_3FF62B0;
  m_Size = this->m_HashTable.m_Buckets.m_Size;
  if ( m_Size > 0 )
  {
    v4 = 0;
    v5 = 8 * (3LL * (m_Size - 1) + 3);
    do
    {
      v6 = &this->m_HashTable.m_Buckets.m_Memory.m_pMemory[v4 / 0x18];
      CUtlVectorBase<CEntityDataInstantiator<CWatcherList>::HashEntry,CUtlMemory<CEntityDataInstantiator<CWatcherList>::HashEntry,int>>::RemoveAll(v6);
      if ( (v6->m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<CEntityDataInstantiator<CWatcherList>::HashEntry,int>::Purge(&v6->m_Memory);
      v4 += 24LL;
    }
    while ( v4 != v5 );
  }
  CUtlVectorBase<CUtlVector<CEntityDataInstantiator<CWatcherList>::HashEntry,CUtlMemory<CEntityDataInstantiator<CWatcherList>::HashEntry,int>>,CUtlMemory<CUtlVector<CEntityDataInstantiator<CWatcherList>::HashEntry,CUtlMemory<CEntityDataInstantiator<CWatcherList>::HashEntry,int>>,int>>::RemoveAll(&p_m_HashTable->m_Buckets);
  if ( (this->m_HashTable.m_Buckets.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CUtlVector<CEntityDataInstantiator<CWatcherList>::HashEntry,CUtlMemory<CEntityDataInstantiator<CWatcherList>::HashEntry,int>>,int>::Purge(&this->m_HashTable.m_Buckets.m_Memory);
    if ( (this->m_HashTable.m_Buckets.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CUtlVector<CEntityDataInstantiator<CWatcherList>::HashEntry,CUtlMemory<CEntityDataInstantiator<CWatcherList>::HashEntry,int>>,int>::Purge(&this->m_HashTable.m_Buckets.m_Memory);
  }
  this->_vptr_IEntityDataInstantiator = off_3FF60F0;
}


// CEntityDataInstantiator<physicspushlist_t>::~CEntityDataInstantiator  (line 35, @0x0000000002119490, libserver.so)  // inlines: Purge, operator[], ~CEntityDataInstantiator, ~CUtlHash, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~IEntityDataInstantiator
// calls: CUtlVectorBase<CEntityDataInstantiator<physicspushlist_t>::HashEntry, CUtlMemory<CEntityDataInstantiator<physicspushlist_t>::HashEntry, int> >::RemoveAll, CUtlMemory<CEntityDataInstantiator<physicspushlist_t>::HashEntry, int>::Purge, CUtlVectorBase<CUtlVector<CEntityDataInstantiator<physicspushlist_t>::HashEntry, CUtlMemory<CEntityDataInstantiator<physicspushlist_t>::HashEntry, int> >, CUtlMemory<CUtlVector<CEntityDataInstantiator<physicspushlist_t>::HashEntry, CUtlMemory<CEntityDataInstantiator<physicspushlist_t>::HashEntry, int> >, int> >::RemoveAll, operator delete, CUtlMemory<CUtlVector<CEntityDataInstantiator<physicspushlist_t>::HashEntry, CUtlMemory<CEntityDataInstantiator<physicspushlist_t>::HashEntry, int> >, int>::Purge
void __fastcall CEntityDataInstantiator<physicspushlist_t>::~CEntityDataInstantiator(
        CEntityDataInstantiator<physicspushlist_t> *const this)
{
  CUtlHash<CEntityDataInstantiator<physicspushlist_t>::HashEntry,bool (*)(const CEntityDataInstantiator<physicspushlist_t>::HashEntry&,const CEntityDataInstantiator<physicspushlist_t>::HashEntry&),unsigned int (*)(const CEntityDataInstantiator<physicspushlist_t>::HashEntry&)> *p_m_HashTable; // r15
  int m_Size; // eax
  unsigned __int64 v4; // rbx
  __int64 v5; // r14
  CUtlVector<CEntityDataInstantiator<physicspushlist_t>::HashEntry,CUtlMemory<CEntityDataInstantiator<physicspushlist_t>::HashEntry,int> > *v6; // r12

  p_m_HashTable = &this->m_HashTable;
  this->_vptr_IEntityDataInstantiator = &off_3FF62F0;
  m_Size = this->m_HashTable.m_Buckets.m_Size;
  if ( m_Size > 0 )
  {
    v4 = 0;
    v5 = 8 * (3LL * (m_Size - 1) + 3);
    do
    {
      v6 = &this->m_HashTable.m_Buckets.m_Memory.m_pMemory[v4 / 0x18];
      CUtlVectorBase<CEntityDataInstantiator<physicspushlist_t>::HashEntry,CUtlMemory<CEntityDataInstantiator<physicspushlist_t>::HashEntry,int>>::RemoveAll(v6);
      if ( (v6->m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<CEntityDataInstantiator<physicspushlist_t>::HashEntry,int>::Purge(&v6->m_Memory);
      v4 += 24LL;
    }
    while ( v4 != v5 );
  }
  CUtlVectorBase<CUtlVector<CEntityDataInstantiator<physicspushlist_t>::HashEntry,CUtlMemory<CEntityDataInstantiator<physicspushlist_t>::HashEntry,int>>,CUtlMemory<CUtlVector<CEntityDataInstantiator<physicspushlist_t>::HashEntry,CUtlMemory<CEntityDataInstantiator<physicspushlist_t>::HashEntry,int>>,int>>::RemoveAll(&p_m_HashTable->m_Buckets);
  if ( (this->m_HashTable.m_Buckets.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CUtlVector<CEntityDataInstantiator<physicspushlist_t>::HashEntry,CUtlMemory<CEntityDataInstantiator<physicspushlist_t>::HashEntry,int>>,int>::Purge(&this->m_HashTable.m_Buckets.m_Memory);
    if ( (this->m_HashTable.m_Buckets.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CUtlVector<CEntityDataInstantiator<physicspushlist_t>::HashEntry,CUtlMemory<CEntityDataInstantiator<physicspushlist_t>::HashEntry,int>>,int>::Purge(&this->m_HashTable.m_Buckets.m_Memory);
  }
  this->_vptr_IEntityDataInstantiator = off_3FF60F0;
  operator delete(this);
}


// CEntityDataInstantiator<physicspushlist_t>::~CEntityDataInstantiator  (line 35, @0x0000000002119550, libserver.so)  // inlines: Purge, operator[], ~CUtlHash, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~IEntityDataInstantiator
// calls: CUtlVectorBase<CEntityDataInstantiator<physicspushlist_t>::HashEntry, CUtlMemory<CEntityDataInstantiator<physicspushlist_t>::HashEntry, int> >::RemoveAll, CUtlMemory<CEntityDataInstantiator<physicspushlist_t>::HashEntry, int>::Purge, CUtlVectorBase<CUtlVector<CEntityDataInstantiator<physicspushlist_t>::HashEntry, CUtlMemory<CEntityDataInstantiator<physicspushlist_t>::HashEntry, int> >, CUtlMemory<CUtlVector<CEntityDataInstantiator<physicspushlist_t>::HashEntry, CUtlMemory<CEntityDataInstantiator<physicspushlist_t>::HashEntry, int> >, int> >::RemoveAll, CUtlMemory<CUtlVector<CEntityDataInstantiator<physicspushlist_t>::HashEntry, CUtlMemory<CEntityDataInstantiator<physicspushlist_t>::HashEntry, int> >, int>::Purge
void __fastcall CEntityDataInstantiator<physicspushlist_t>::~CEntityDataInstantiator(
        CEntityDataInstantiator<physicspushlist_t> *const this)
{
  CUtlHash<CEntityDataInstantiator<physicspushlist_t>::HashEntry,bool (*)(const CEntityDataInstantiator<physicspushlist_t>::HashEntry&,const CEntityDataInstantiator<physicspushlist_t>::HashEntry&),unsigned int (*)(const CEntityDataInstantiator<physicspushlist_t>::HashEntry&)> *p_m_HashTable; // r15
  int m_Size; // eax
  unsigned __int64 v4; // rbx
  __int64 v5; // r14
  CUtlVector<CEntityDataInstantiator<physicspushlist_t>::HashEntry,CUtlMemory<CEntityDataInstantiator<physicspushlist_t>::HashEntry,int> > *v6; // r12

  p_m_HashTable = &this->m_HashTable;
  this->_vptr_IEntityDataInstantiator = &off_3FF62F0;
  m_Size = this->m_HashTable.m_Buckets.m_Size;
  if ( m_Size > 0 )
  {
    v4 = 0;
    v5 = 8 * (3LL * (m_Size - 1) + 3);
    do
    {
      v6 = &this->m_HashTable.m_Buckets.m_Memory.m_pMemory[v4 / 0x18];
      CUtlVectorBase<CEntityDataInstantiator<physicspushlist_t>::HashEntry,CUtlMemory<CEntityDataInstantiator<physicspushlist_t>::HashEntry,int>>::RemoveAll(v6);
      if ( (v6->m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<CEntityDataInstantiator<physicspushlist_t>::HashEntry,int>::Purge(&v6->m_Memory);
      v4 += 24LL;
    }
    while ( v4 != v5 );
  }
  CUtlVectorBase<CUtlVector<CEntityDataInstantiator<physicspushlist_t>::HashEntry,CUtlMemory<CEntityDataInstantiator<physicspushlist_t>::HashEntry,int>>,CUtlMemory<CUtlVector<CEntityDataInstantiator<physicspushlist_t>::HashEntry,CUtlMemory<CEntityDataInstantiator<physicspushlist_t>::HashEntry,int>>,int>>::RemoveAll(&p_m_HashTable->m_Buckets);
  if ( (this->m_HashTable.m_Buckets.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CUtlVector<CEntityDataInstantiator<physicspushlist_t>::HashEntry,CUtlMemory<CEntityDataInstantiator<physicspushlist_t>::HashEntry,int>>,int>::Purge(&this->m_HashTable.m_Buckets.m_Memory);
    if ( (this->m_HashTable.m_Buckets.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CUtlVector<CEntityDataInstantiator<physicspushlist_t>::HashEntry,CUtlMemory<CEntityDataInstantiator<physicspushlist_t>::HashEntry,int>>,int>::Purge(&this->m_HashTable.m_Buckets.m_Memory);
  }
  this->_vptr_IEntityDataInstantiator = off_3FF60F0;
}


// CEntityDataInstantiator<vphysicsupdateai_t>::~CEntityDataInstantiator  (line 35, @0x00000000021196b0, libserver.so)  // inlines: Purge, operator[], ~CEntityDataInstantiator, ~CUtlHash, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~IEntityDataInstantiator
// calls: CUtlVectorBase<CEntityDataInstantiator<vphysicsupdateai_t>::HashEntry, CUtlMemory<CEntityDataInstantiator<vphysicsupdateai_t>::HashEntry, int> >::RemoveAll, CUtlMemory<CEntityDataInstantiator<vphysicsupdateai_t>::HashEntry, int>::Purge, CUtlVectorBase<CUtlVector<CEntityDataInstantiator<vphysicsupdateai_t>::HashEntry, CUtlMemory<CEntityDataInstantiator<vphysicsupdateai_t>::HashEntry, int> >, CUtlMemory<CUtlVector<CEntityDataInstantiator<vphysicsupdateai_t>::HashEntry, CUtlMemory<CEntityDataInstantiator<vphysicsupdateai_t>::HashEntry, int> >, int> >::RemoveAll, operator delete, CUtlMemory<CUtlVector<CEntityDataInstantiator<vphysicsupdateai_t>::HashEntry, CUtlMemory<CEntityDataInstantiator<vphysicsupdateai_t>::HashEntry, int> >, int>::Purge
void __fastcall CEntityDataInstantiator<vphysicsupdateai_t>::~CEntityDataInstantiator(
        CEntityDataInstantiator<vphysicsupdateai_t> *const this)
{
  CUtlHash<CEntityDataInstantiator<vphysicsupdateai_t>::HashEntry,bool (*)(const CEntityDataInstantiator<vphysicsupdateai_t>::HashEntry&,const CEntityDataInstantiator<vphysicsupdateai_t>::HashEntry&),unsigned int (*)(const CEntityDataInstantiator<vphysicsupdateai_t>::HashEntry&)> *p_m_HashTable; // r15
  int m_Size; // eax
  unsigned __int64 v4; // rbx
  __int64 v5; // r14
  CUtlVector<CEntityDataInstantiator<vphysicsupdateai_t>::HashEntry,CUtlMemory<CEntityDataInstantiator<vphysicsupdateai_t>::HashEntry,int> > *v6; // r12

  p_m_HashTable = &this->m_HashTable;
  this->_vptr_IEntityDataInstantiator = &off_3FF6330;
  m_Size = this->m_HashTable.m_Buckets.m_Size;
  if ( m_Size > 0 )
  {
    v4 = 0;
    v5 = 8 * (3LL * (m_Size - 1) + 3);
    do
    {
      v6 = &this->m_HashTable.m_Buckets.m_Memory.m_pMemory[v4 / 0x18];
      CUtlVectorBase<CEntityDataInstantiator<vphysicsupdateai_t>::HashEntry,CUtlMemory<CEntityDataInstantiator<vphysicsupdateai_t>::HashEntry,int>>::RemoveAll(v6);
      if ( (v6->m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<CEntityDataInstantiator<vphysicsupdateai_t>::HashEntry,int>::Purge(&v6->m_Memory);
      v4 += 24LL;
    }
    while ( v4 != v5 );
  }
  CUtlVectorBase<CUtlVector<CEntityDataInstantiator<vphysicsupdateai_t>::HashEntry,CUtlMemory<CEntityDataInstantiator<vphysicsupdateai_t>::HashEntry,int>>,CUtlMemory<CUtlVector<CEntityDataInstantiator<vphysicsupdateai_t>::HashEntry,CUtlMemory<CEntityDataInstantiator<vphysicsupdateai_t>::HashEntry,int>>,int>>::RemoveAll(&p_m_HashTable->m_Buckets);
  if ( (this->m_HashTable.m_Buckets.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CUtlVector<CEntityDataInstantiator<vphysicsupdateai_t>::HashEntry,CUtlMemory<CEntityDataInstantiator<vphysicsupdateai_t>::HashEntry,int>>,int>::Purge(&this->m_HashTable.m_Buckets.m_Memory);
    if ( (this->m_HashTable.m_Buckets.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CUtlVector<CEntityDataInstantiator<vphysicsupdateai_t>::HashEntry,CUtlMemory<CEntityDataInstantiator<vphysicsupdateai_t>::HashEntry,int>>,int>::Purge(&this->m_HashTable.m_Buckets.m_Memory);
  }
  this->_vptr_IEntityDataInstantiator = off_3FF60F0;
  operator delete(this);
}


// CEntityDataInstantiator<vphysicsupdateai_t>::~CEntityDataInstantiator  (line 35, @0x0000000002119770, libserver.so)  // inlines: Purge, operator[], ~CUtlHash, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~IEntityDataInstantiator
// calls: CUtlVectorBase<CEntityDataInstantiator<vphysicsupdateai_t>::HashEntry, CUtlMemory<CEntityDataInstantiator<vphysicsupdateai_t>::HashEntry, int> >::RemoveAll, CUtlMemory<CEntityDataInstantiator<vphysicsupdateai_t>::HashEntry, int>::Purge, CUtlVectorBase<CUtlVector<CEntityDataInstantiator<vphysicsupdateai_t>::HashEntry, CUtlMemory<CEntityDataInstantiator<vphysicsupdateai_t>::HashEntry, int> >, CUtlMemory<CUtlVector<CEntityDataInstantiator<vphysicsupdateai_t>::HashEntry, CUtlMemory<CEntityDataInstantiator<vphysicsupdateai_t>::HashEntry, int> >, int> >::RemoveAll, CUtlMemory<CUtlVector<CEntityDataInstantiator<vphysicsupdateai_t>::HashEntry, CUtlMemory<CEntityDataInstantiator<vphysicsupdateai_t>::HashEntry, int> >, int>::Purge
void __fastcall CEntityDataInstantiator<vphysicsupdateai_t>::~CEntityDataInstantiator(
        CEntityDataInstantiator<vphysicsupdateai_t> *const this)
{
  CUtlHash<CEntityDataInstantiator<vphysicsupdateai_t>::HashEntry,bool (*)(const CEntityDataInstantiator<vphysicsupdateai_t>::HashEntry&,const CEntityDataInstantiator<vphysicsupdateai_t>::HashEntry&),unsigned int (*)(const CEntityDataInstantiator<vphysicsupdateai_t>::HashEntry&)> *p_m_HashTable; // r15
  int m_Size; // eax
  unsigned __int64 v4; // rbx
  __int64 v5; // r14
  CUtlVector<CEntityDataInstantiator<vphysicsupdateai_t>::HashEntry,CUtlMemory<CEntityDataInstantiator<vphysicsupdateai_t>::HashEntry,int> > *v6; // r12

  p_m_HashTable = &this->m_HashTable;
  this->_vptr_IEntityDataInstantiator = &off_3FF6330;
  m_Size = this->m_HashTable.m_Buckets.m_Size;
  if ( m_Size > 0 )
  {
    v4 = 0;
    v5 = 8 * (3LL * (m_Size - 1) + 3);
    do
    {
      v6 = &this->m_HashTable.m_Buckets.m_Memory.m_pMemory[v4 / 0x18];
      CUtlVectorBase<CEntityDataInstantiator<vphysicsupdateai_t>::HashEntry,CUtlMemory<CEntityDataInstantiator<vphysicsupdateai_t>::HashEntry,int>>::RemoveAll(v6);
      if ( (v6->m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<CEntityDataInstantiator<vphysicsupdateai_t>::HashEntry,int>::Purge(&v6->m_Memory);
      v4 += 24LL;
    }
    while ( v4 != v5 );
  }
  CUtlVectorBase<CUtlVector<CEntityDataInstantiator<vphysicsupdateai_t>::HashEntry,CUtlMemory<CEntityDataInstantiator<vphysicsupdateai_t>::HashEntry,int>>,CUtlMemory<CUtlVector<CEntityDataInstantiator<vphysicsupdateai_t>::HashEntry,CUtlMemory<CEntityDataInstantiator<vphysicsupdateai_t>::HashEntry,int>>,int>>::RemoveAll(&p_m_HashTable->m_Buckets);
  if ( (this->m_HashTable.m_Buckets.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CUtlVector<CEntityDataInstantiator<vphysicsupdateai_t>::HashEntry,CUtlMemory<CEntityDataInstantiator<vphysicsupdateai_t>::HashEntry,int>>,int>::Purge(&this->m_HashTable.m_Buckets.m_Memory);
    if ( (this->m_HashTable.m_Buckets.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CUtlVector<CEntityDataInstantiator<vphysicsupdateai_t>::HashEntry,CUtlMemory<CEntityDataInstantiator<vphysicsupdateai_t>::HashEntry,int>>,int>::Purge(&this->m_HashTable.m_Buckets.m_Memory);
  }
  this->_vptr_IEntityDataInstantiator = off_3FF60F0;
}


// CEntityDataInstantiator<touchlink_t>::GetDataObject  (line 43, @0x00000000020fcbc0, libserver.so)  // inlines: BuildHandle, DoFind, Element, Find, GetBucketIndex, HashEntry, operator[]
void *__fastcall CEntityDataInstantiator<touchlink_t>::GetDataObject(
        CEntityDataInstantiator<touchlink_t> *const this,
        const CEntityInstance *instance)
{
  unsigned int v3; // eax
  CUtlVector<CEntityDataInstantiator<touchlink_t>::HashEntry,CUtlMemory<CEntityDataInstantiator<touchlink_t>::HashEntry,int> > *v4; // r13
  int m_Size; // r12d
  __int64 v6; // r14
  int v7; // r15d
  unsigned int v9; // [rsp+4h] [rbp-4Ch]
  CEntityDataInstantiator<touchlink_t>::HashEntry entry; // [rsp+10h] [rbp-40h] BYREF

  entry.data = 0;
  entry.key = instance;
  v3 = this->m_HashTable.m_KeyFunc(&entry);
  if ( this->m_HashTable.m_bPowerOfTwo )
    v9 = this->m_HashTable.m_ModMask & v3;
  else
    v9 = v3 % this->m_HashTable.m_Buckets.m_Size;
  v4 = &this->m_HashTable.m_Buckets.m_Memory.m_pMemory[v9];
  m_Size = v4->m_Size;
  if ( v4->m_Size <= 0 )
  {
    v7 = 0;
  }
  else
  {
    v6 = 0;
    v7 = 0;
    while ( !this->m_HashTable.m_CompareFunc(&v4->m_Memory.m_pMemory[v6], &entry) )
    {
      ++v7;
      ++v6;
      if ( v7 == m_Size )
        return 0;
    }
  }
  if ( m_Size == v7 || (v7 | (v9 << 16)) == 0xFFFFFFFF )
    return 0;
  else
    return this->m_HashTable.m_Buckets.m_Memory.m_pMemory[(v7 | (v9 << 16)) >> 16].m_Memory.m_pMemory[v7].data;
}


// CEntityDataInstantiator<groundlink_t>::GetDataObject  (line 43, @0x00000000020fccc0, libserver.so)  // inlines: BuildHandle, DoFind, Element, Find, GetBucketIndex, HashEntry, operator[]
void *__fastcall CEntityDataInstantiator<groundlink_t>::GetDataObject(
        CEntityDataInstantiator<groundlink_t> *const this,
        const CEntityInstance *instance)
{
  unsigned int v3; // eax
  CUtlVector<CEntityDataInstantiator<groundlink_t>::HashEntry,CUtlMemory<CEntityDataInstantiator<groundlink_t>::HashEntry,int> > *v4; // r13
  int m_Size; // r12d
  __int64 v6; // r14
  int v7; // r15d
  unsigned int v9; // [rsp+4h] [rbp-4Ch]
  CEntityDataInstantiator<groundlink_t>::HashEntry entry; // [rsp+10h] [rbp-40h] BYREF

  entry.data = 0;
  entry.key = instance;
  v3 = this->m_HashTable.m_KeyFunc(&entry);
  if ( this->m_HashTable.m_bPowerOfTwo )
    v9 = this->m_HashTable.m_ModMask & v3;
  else
    v9 = v3 % this->m_HashTable.m_Buckets.m_Size;
  v4 = &this->m_HashTable.m_Buckets.m_Memory.m_pMemory[v9];
  m_Size = v4->m_Size;
  if ( v4->m_Size <= 0 )
  {
    v7 = 0;
  }
  else
  {
    v6 = 0;
    v7 = 0;
    while ( !this->m_HashTable.m_CompareFunc(&v4->m_Memory.m_pMemory[v6], &entry) )
    {
      ++v7;
      ++v6;
      if ( v7 == m_Size )
        return 0;
    }
  }
  if ( m_Size == v7 || (v7 | (v9 << 16)) == 0xFFFFFFFF )
    return 0;
  else
    return this->m_HashTable.m_Buckets.m_Memory.m_pMemory[(v7 | (v9 << 16)) >> 16].m_Memory.m_pMemory[v7].data;
}


// CEntityDataInstantiator<CWatcherList>::GetDataObject  (line 43, @0x00000000020fcdc0, libserver.so)  // inlines: BuildHandle, DoFind, Element, Find, GetBucketIndex, HashEntry, operator[]
void *__fastcall CEntityDataInstantiator<CWatcherList>::GetDataObject(
        CEntityDataInstantiator<CWatcherList> *const this,
        const CEntityInstance *instance)
{
  unsigned int v3; // eax
  CUtlVector<CEntityDataInstantiator<CWatcherList>::HashEntry,CUtlMemory<CEntityDataInstantiator<CWatcherList>::HashEntry,int> > *v4; // r13
  int m_Size; // r12d
  __int64 v6; // r14
  int v7; // r15d
  unsigned int v9; // [rsp+4h] [rbp-4Ch]
  CEntityDataInstantiator<CWatcherList>::HashEntry entry; // [rsp+10h] [rbp-40h] BYREF

  entry.data = 0;
  entry.key = instance;
  v3 = this->m_HashTable.m_KeyFunc(&entry);
  if ( this->m_HashTable.m_bPowerOfTwo )
    v9 = this->m_HashTable.m_ModMask & v3;
  else
    v9 = v3 % this->m_HashTable.m_Buckets.m_Size;
  v4 = &this->m_HashTable.m_Buckets.m_Memory.m_pMemory[v9];
  m_Size = v4->m_Size;
  if ( v4->m_Size <= 0 )
  {
    v7 = 0;
  }
  else
  {
    v6 = 0;
    v7 = 0;
    while ( !this->m_HashTable.m_CompareFunc(&v4->m_Memory.m_pMemory[v6], &entry) )
    {
      ++v7;
      ++v6;
      if ( v7 == m_Size )
        return 0;
    }
  }
  if ( m_Size == v7 || (v7 | (v9 << 16)) == 0xFFFFFFFF )
    return 0;
  else
    return this->m_HashTable.m_Buckets.m_Memory.m_pMemory[(v7 | (v9 << 16)) >> 16].m_Memory.m_pMemory[v7].data;
}


// CEntityDataInstantiator<vphysicsupdateai_t>::GetDataObject  (line 43, @0x00000000020fcec0, libserver.so)  // inlines: BuildHandle, DoFind, Element, Find, GetBucketIndex, HashEntry, operator[]
void *__fastcall CEntityDataInstantiator<vphysicsupdateai_t>::GetDataObject(
        CEntityDataInstantiator<vphysicsupdateai_t> *const this,
        const CEntityInstance *instance)
{
  unsigned int v3; // eax
  CUtlVector<CEntityDataInstantiator<vphysicsupdateai_t>::HashEntry,CUtlMemory<CEntityDataInstantiator<vphysicsupdateai_t>::HashEntry,int> > *v4; // r13
  int m_Size; // r12d
  __int64 v6; // r14
  int v7; // r15d
  unsigned int v9; // [rsp+4h] [rbp-4Ch]
  CEntityDataInstantiator<vphysicsupdateai_t>::HashEntry entry; // [rsp+10h] [rbp-40h] BYREF

  entry.data = 0;
  entry.key = instance;
  v3 = this->m_HashTable.m_KeyFunc(&entry);
  if ( this->m_HashTable.m_bPowerOfTwo )
    v9 = this->m_HashTable.m_ModMask & v3;
  else
    v9 = v3 % this->m_HashTable.m_Buckets.m_Size;
  v4 = &this->m_HashTable.m_Buckets.m_Memory.m_pMemory[v9];
  m_Size = v4->m_Size;
  if ( v4->m_Size <= 0 )
  {
    v7 = 0;
  }
  else
  {
    v6 = 0;
    v7 = 0;
    while ( !this->m_HashTable.m_CompareFunc(&v4->m_Memory.m_pMemory[v6], &entry) )
    {
      ++v7;
      ++v6;
      if ( v7 == m_Size )
        return 0;
    }
  }
  if ( m_Size == v7 || (v7 | (v9 << 16)) == 0xFFFFFFFF )
    return 0;
  else
    return this->m_HashTable.m_Buckets.m_Memory.m_pMemory[(v7 | (v9 << 16)) >> 16].m_Memory.m_pMemory[v7].data;
}


// CEntityDataInstantiator<StepSimulationData>::GetDataObject  (line 43, @0x00000000020fcfc0, libserver.so)  // inlines: BuildHandle, DoFind, Element, Find, GetBucketIndex, HashEntry, operator[]
void *__fastcall CEntityDataInstantiator<StepSimulationData>::GetDataObject(
        CEntityDataInstantiator<StepSimulationData> *const this,
        const CEntityInstance *instance)
{
  unsigned int v3; // eax
  CUtlVector<CEntityDataInstantiator<StepSimulationData>::HashEntry,CUtlMemory<CEntityDataInstantiator<StepSimulationData>::HashEntry,int> > *v4; // r13
  int m_Size; // r12d
  __int64 v6; // r14
  int v7; // r15d
  unsigned int v9; // [rsp+4h] [rbp-4Ch]
  CEntityDataInstantiator<StepSimulationData>::HashEntry entry; // [rsp+10h] [rbp-40h] BYREF

  entry.data = 0;
  entry.key = instance;
  v3 = this->m_HashTable.m_KeyFunc(&entry);
  if ( this->m_HashTable.m_bPowerOfTwo )
    v9 = this->m_HashTable.m_ModMask & v3;
  else
    v9 = v3 % this->m_HashTable.m_Buckets.m_Size;
  v4 = &this->m_HashTable.m_Buckets.m_Memory.m_pMemory[v9];
  m_Size = v4->m_Size;
  if ( v4->m_Size <= 0 )
  {
    v7 = 0;
  }
  else
  {
    v6 = 0;
    v7 = 0;
    while ( !this->m_HashTable.m_CompareFunc(&v4->m_Memory.m_pMemory[v6], &entry) )
    {
      ++v7;
      ++v6;
      if ( v7 == m_Size )
        return 0;
    }
  }
  if ( m_Size == v7 || (v7 | (v9 << 16)) == 0xFFFFFFFF )
    return 0;
  else
    return this->m_HashTable.m_Buckets.m_Memory.m_pMemory[(v7 | (v9 << 16)) >> 16].m_Memory.m_pMemory[v7].data;
}


// CEntityDataInstantiator<physicspushlist_t>::GetDataObject  (line 43, @0x00000000020fd0c0, libserver.so)  // inlines: BuildHandle, DoFind, Element, Find, GetBucketIndex, HashEntry, operator[]
void *__fastcall CEntityDataInstantiator<physicspushlist_t>::GetDataObject(
        CEntityDataInstantiator<physicspushlist_t> *const this,
        const CEntityInstance *instance)
{
  unsigned int v3; // eax
  CUtlVector<CEntityDataInstantiator<physicspushlist_t>::HashEntry,CUtlMemory<CEntityDataInstantiator<physicspushlist_t>::HashEntry,int> > *v4; // r13
  int m_Size; // r12d
  __int64 v6; // r14
  int v7; // r15d
  unsigned int v9; // [rsp+4h] [rbp-4Ch]
  CEntityDataInstantiator<physicspushlist_t>::HashEntry entry; // [rsp+10h] [rbp-40h] BYREF

  entry.data = 0;
  entry.key = instance;
  v3 = this->m_HashTable.m_KeyFunc(&entry);
  if ( this->m_HashTable.m_bPowerOfTwo )
    v9 = this->m_HashTable.m_ModMask & v3;
  else
    v9 = v3 % this->m_HashTable.m_Buckets.m_Size;
  v4 = &this->m_HashTable.m_Buckets.m_Memory.m_pMemory[v9];
  m_Size = v4->m_Size;
  if ( v4->m_Size <= 0 )
  {
    v7 = 0;
  }
  else
  {
    v6 = 0;
    v7 = 0;
    while ( !this->m_HashTable.m_CompareFunc(&v4->m_Memory.m_pMemory[v6], &entry) )
    {
      ++v7;
      ++v6;
      if ( v7 == m_Size )
        return 0;
    }
  }
  if ( m_Size == v7 || (v7 | (v9 << 16)) == 0xFFFFFFFF )
    return 0;
  else
    return this->m_HashTable.m_Buckets.m_Memory.m_pMemory[(v7 | (v9 << 16)) >> 16].m_Memory.m_pMemory[v7].data;
}


// CEntityDataInstantiator<ModelScale>::GetDataObject  (line 43, @0x00000000020fd1c0, libserver.so)  // inlines: BuildHandle, DoFind, Element, Find, GetBucketIndex, HashEntry, operator[]
void *__fastcall CEntityDataInstantiator<ModelScale>::GetDataObject(
        CEntityDataInstantiator<ModelScale> *const this,
        const CEntityInstance *instance)
{
  unsigned int v3; // eax
  CUtlVector<CEntityDataInstantiator<ModelScale>::HashEntry,CUtlMemory<CEntityDataInstantiator<ModelScale>::HashEntry,int> > *v4; // r13
  int m_Size; // r12d
  __int64 v6; // r14
  int v7; // r15d
  unsigned int v9; // [rsp+4h] [rbp-4Ch]
  CEntityDataInstantiator<ModelScale>::HashEntry entry; // [rsp+10h] [rbp-40h] BYREF

  entry.data = 0;
  entry.key = instance;
  v3 = this->m_HashTable.m_KeyFunc(&entry);
  if ( this->m_HashTable.m_bPowerOfTwo )
    v9 = this->m_HashTable.m_ModMask & v3;
  else
    v9 = v3 % this->m_HashTable.m_Buckets.m_Size;
  v4 = &this->m_HashTable.m_Buckets.m_Memory.m_pMemory[v9];
  m_Size = v4->m_Size;
  if ( v4->m_Size <= 0 )
  {
    v7 = 0;
  }
  else
  {
    v6 = 0;
    v7 = 0;
    while ( !this->m_HashTable.m_CompareFunc(&v4->m_Memory.m_pMemory[v6], &entry) )
    {
      ++v7;
      ++v6;
      if ( v7 == m_Size )
        return 0;
    }
  }
  if ( m_Size == v7 || (v7 | (v9 << 16)) == 0xFFFFFFFF )
    return 0;
  else
    return this->m_HashTable.m_Buckets.m_Memory.m_pMemory[(v7 | (v9 << 16)) >> 16].m_Memory.m_pMemory[v7].data;
}


// CEntityDataInstantiator<touchlink_t>::CreateDataObject  (line 58, @0x00000000021215b0, libserver.so)  // inlines: AddToTail, Alloc, BuildHandle, CEntityHandle, CHandle, CopyConstruct<CEntityDataInstantiator<touchlink_t>::HashEntry>, DoFind, Element, Find, GetBucketIndex, GrowMemory, HashEntry, Insert, V_memset, memset, operator new, operator[], touchlink_t
// calls: CUtlMemoryPoolBase::Alloc, CUtlMemory<CEntityDataInstantiator<touchlink_t>::HashEntry, int>::Grow
void *__fastcall CEntityDataInstantiator<touchlink_t>::CreateDataObject(
        CEntityDataInstantiator<touchlink_t> *const this,
        const CEntityInstance *instance)
{
  unsigned int v3; // eax
  CUtlVector<CEntityDataInstantiator<touchlink_t>::HashEntry,CUtlMemory<CEntityDataInstantiator<touchlink_t>::HashEntry,int> > *v4; // r14
  __int64 v5; // r13
  int v6; // r15d
  unsigned int v7; // ecx
  __int64 v8; // r15
  __int64 v9; // rdx
  unsigned int v11; // eax
  CUtlVector<CEntityDataInstantiator<touchlink_t>::HashEntry,CUtlMemory<CEntityDataInstantiator<touchlink_t>::HashEntry,int> > *v12; // r14
  __int64 v13; // r13
  int v14; // r15d
  unsigned int v15; // r12d
  touchlink_t *v16; // rax
  __int64 v17; // rcx
  CEntityDataInstantiator<touchlink_t>::HashEntry *v18; // rsi
  touchlink_t *data; // rax
  CUtlVector<CEntityDataInstantiator<touchlink_t>::HashEntry,CUtlMemory<CEntityDataInstantiator<touchlink_t>::HashEntry,int> > *v20; // r12
  int v21; // r13d
  CEntityDataInstantiator<touchlink_t>::HashEntry *v22; // rcx
  __int64 v23; // [rsp+0h] [rbp-50h]
  unsigned int v24; // [rsp+8h] [rbp-48h]
  signed int v25; // [rsp+8h] [rbp-48h]
  int m_Size; // [rsp+Ch] [rbp-44h]
  int v27; // [rsp+Ch] [rbp-44h]
  CEntityDataInstantiator<touchlink_t>::HashEntry entry; // [rsp+10h] [rbp-40h] BYREF

  entry.data = 0;
  entry.key = instance;
  v3 = this->m_HashTable.m_KeyFunc(&entry);
  if ( this->m_HashTable.m_bPowerOfTwo )
    v24 = this->m_HashTable.m_ModMask & v3;
  else
    v24 = v3 % this->m_HashTable.m_Buckets.m_Size;
  v4 = &this->m_HashTable.m_Buckets.m_Memory.m_pMemory[v24];
  m_Size = v4->m_Size;
  if ( v4->m_Size <= 0 )
  {
    v6 = 0;
  }
  else
  {
    v5 = 0;
    v6 = 0;
    while ( !this->m_HashTable.m_CompareFunc(&v4->m_Memory.m_pMemory[v5], &entry) )
    {
      ++v6;
      ++v5;
      if ( v6 == m_Size )
        goto LABEL_12;
    }
  }
  if ( m_Size == v6 || (v7 = v6 | (v24 << 16)) == -1 )
  {
LABEL_12:
    v11 = this->m_HashTable.m_KeyFunc(&entry);
    if ( this->m_HashTable.m_bPowerOfTwo )
      v25 = this->m_HashTable.m_ModMask & v11;
    else
      v25 = v11 % this->m_HashTable.m_Buckets.m_Size;
    v23 = v25;
    v12 = &this->m_HashTable.m_Buckets.m_Memory.m_pMemory[v23];
    v27 = v12->m_Size;
    if ( v12->m_Size <= 0 )
    {
      v14 = 0;
    }
    else
    {
      v13 = 0;
      v14 = 0;
      while ( !this->m_HashTable.m_CompareFunc(&v12->m_Memory.m_pMemory[v13], &entry) )
      {
        ++v14;
        ++v13;
        if ( v14 == v27 )
          goto LABEL_25;
      }
    }
    if ( v27 == v14 )
    {
LABEL_25:
      v20 = &this->m_HashTable.m_Buckets.m_Memory.m_pMemory[v23];
      v21 = v20->m_Size;
      if ( v20->m_Size == v20->m_Memory.m_nAllocationCount )
        CUtlMemory<CEntityDataInstantiator<touchlink_t>::HashEntry,int>::Grow(&v20->m_Memory, 1);
      ++v20->m_Size;
      v22 = &v20->m_Memory.m_pMemory[v21];
      if ( v22 != 0 )
        *v22 = entry;
      v15 = v21 | (v25 << 16);
    }
    else
    {
      v15 = v14 | (v25 << 16);
    }
    v16 = CUtlMemoryPoolBase::Alloc(&touchlink_t::s_Allocator);
    v8 = v15;
    v17 = HIWORD(v15);
    v9 = v17 * 24;
    v18 = &this->m_HashTable.m_Buckets.m_Memory.m_pMemory[v17].m_Memory.m_pMemory[v8];
    if ( v16 != 0 )
      v16->entityTouched.m_Index = -1;
    v18->data = v16;
    data = this->m_HashTable.m_Buckets.m_Memory.m_pMemory[v17].m_Memory.m_pMemory[v8].data;
    *&data->entityTouched.m_Index = 0;
    data->nextLink = 0;
    data->prevLink = 0;
    *&data->touchStamp = 0;
  }
  else
  {
    v8 = v6;
    v9 = 24LL * HIWORD(v7);
  }
  return (*(&this->m_HashTable.m_Buckets.m_Memory.m_pMemory->m_Memory.m_pMemory + v9))[v8].data;
}


// CEntityDataInstantiator<groundlink_t>::CreateDataObject  (line 58, @0x0000000002121c30, libserver.so)  // inlines: AddToTail, Alloc, BuildHandle, CEntityHandle, CHandle, CopyConstruct<CEntityDataInstantiator<groundlink_t>::HashEntry>, DoFind, Element, Find, GetBucketIndex, GrowMemory, HashEntry, Insert, V_memset, groundlink_t, memset, operator new, operator[]
// calls: CUtlMemoryPoolBase::Alloc, CUtlMemory<CEntityDataInstantiator<groundlink_t>::HashEntry, int>::Grow
void *__fastcall CEntityDataInstantiator<groundlink_t>::CreateDataObject(
        CEntityDataInstantiator<groundlink_t> *const this,
        const CEntityInstance *instance)
{
  unsigned int v3; // eax
  CUtlVector<CEntityDataInstantiator<groundlink_t>::HashEntry,CUtlMemory<CEntityDataInstantiator<groundlink_t>::HashEntry,int> > *v4; // r14
  __int64 v5; // r13
  int v6; // r15d
  unsigned int v7; // ecx
  __int64 v8; // r15
  __int64 v9; // rdx
  unsigned int v11; // eax
  CUtlVector<CEntityDataInstantiator<groundlink_t>::HashEntry,CUtlMemory<CEntityDataInstantiator<groundlink_t>::HashEntry,int> > *v12; // r14
  __int64 v13; // r13
  int v14; // r15d
  unsigned int v15; // r12d
  groundlink_t *v16; // rax
  __int64 v17; // rcx
  CEntityDataInstantiator<groundlink_t>::HashEntry *v18; // rsi
  groundlink_t *data; // rax
  CUtlVector<CEntityDataInstantiator<groundlink_t>::HashEntry,CUtlMemory<CEntityDataInstantiator<groundlink_t>::HashEntry,int> > *v20; // r12
  int v21; // r13d
  CEntityDataInstantiator<groundlink_t>::HashEntry *v22; // rcx
  __int64 v23; // [rsp+0h] [rbp-50h]
  unsigned int v24; // [rsp+8h] [rbp-48h]
  signed int v25; // [rsp+8h] [rbp-48h]
  int m_Size; // [rsp+Ch] [rbp-44h]
  int v27; // [rsp+Ch] [rbp-44h]
  CEntityDataInstantiator<groundlink_t>::HashEntry entry; // [rsp+10h] [rbp-40h] BYREF

  entry.data = 0;
  entry.key = instance;
  v3 = this->m_HashTable.m_KeyFunc(&entry);
  if ( this->m_HashTable.m_bPowerOfTwo )
    v24 = this->m_HashTable.m_ModMask & v3;
  else
    v24 = v3 % this->m_HashTable.m_Buckets.m_Size;
  v4 = &this->m_HashTable.m_Buckets.m_Memory.m_pMemory[v24];
  m_Size = v4->m_Size;
  if ( v4->m_Size <= 0 )
  {
    v6 = 0;
  }
  else
  {
    v5 = 0;
    v6 = 0;
    while ( !this->m_HashTable.m_CompareFunc(&v4->m_Memory.m_pMemory[v5], &entry) )
    {
      ++v6;
      ++v5;
      if ( v6 == m_Size )
        goto LABEL_12;
    }
  }
  if ( m_Size == v6 || (v7 = v6 | (v24 << 16)) == -1 )
  {
LABEL_12:
    v11 = this->m_HashTable.m_KeyFunc(&entry);
    if ( this->m_HashTable.m_bPowerOfTwo )
      v25 = this->m_HashTable.m_ModMask & v11;
    else
      v25 = v11 % this->m_HashTable.m_Buckets.m_Size;
    v23 = v25;
    v12 = &this->m_HashTable.m_Buckets.m_Memory.m_pMemory[v23];
    v27 = v12->m_Size;
    if ( v12->m_Size <= 0 )
    {
      v14 = 0;
    }
    else
    {
      v13 = 0;
      v14 = 0;
      while ( !this->m_HashTable.m_CompareFunc(&v12->m_Memory.m_pMemory[v13], &entry) )
      {
        ++v14;
        ++v13;
        if ( v14 == v27 )
          goto LABEL_25;
      }
    }
    if ( v27 == v14 )
    {
LABEL_25:
      v20 = &this->m_HashTable.m_Buckets.m_Memory.m_pMemory[v23];
      v21 = v20->m_Size;
      if ( v20->m_Size == v20->m_Memory.m_nAllocationCount )
        CUtlMemory<CEntityDataInstantiator<groundlink_t>::HashEntry,int>::Grow(&v20->m_Memory, 1);
      ++v20->m_Size;
      v22 = &v20->m_Memory.m_pMemory[v21];
      if ( v22 != 0 )
        *v22 = entry;
      v15 = v21 | (v25 << 16);
    }
    else
    {
      v15 = v14 | (v25 << 16);
    }
    v16 = CUtlMemoryPoolBase::Alloc(&groundlink_t::s_Allocator);
    v8 = v15;
    v17 = HIWORD(v15);
    v9 = v17 * 24;
    v18 = &this->m_HashTable.m_Buckets.m_Memory.m_pMemory[v17].m_Memory.m_pMemory[v8];
    if ( v16 != 0 )
      v16->entity.m_Index = -1;
    v18->data = v16;
    data = this->m_HashTable.m_Buckets.m_Memory.m_pMemory[v17].m_Memory.m_pMemory[v8].data;
    *&data->entity.m_Index = 0;
    data->nextLink = 0;
    data->prevLink = 0;
  }
  else
  {
    v8 = v6;
    v9 = 24LL * HIWORD(v7);
  }
  return (*(&this->m_HashTable.m_Buckets.m_Memory.m_pMemory->m_Memory.m_pMemory + v9))[v8].data;
}


// CEntityDataInstantiator<StepSimulationData>::CreateDataObject  (line 58, @0x00000000021222a0, libserver.so)  // inlines: AddToTail, BuildHandle, CopyConstruct<CEntityDataInstantiator<StepSimulationData>::HashEntry>, DoFind, Element, Find, GetBucketIndex, GrowMemory, HashEntry, Insert, V_memset, memset, operator[]
// calls: operator new, CUtlMemory<CEntityDataInstantiator<StepSimulationData>::HashEntry, int>::Grow
void *__fastcall CEntityDataInstantiator<StepSimulationData>::CreateDataObject(
        CEntityDataInstantiator<StepSimulationData> *const this,
        const CEntityInstance *instance)
{
  unsigned int v3; // eax
  CUtlVector<CEntityDataInstantiator<StepSimulationData>::HashEntry,CUtlMemory<CEntityDataInstantiator<StepSimulationData>::HashEntry,int> > *v4; // r14
  __int64 v5; // r13
  int v6; // r15d
  unsigned int v7; // ecx
  __int64 v8; // r15
  __int64 v9; // rdx
  unsigned int v11; // eax
  CUtlVector<CEntityDataInstantiator<StepSimulationData>::HashEntry,CUtlMemory<CEntityDataInstantiator<StepSimulationData>::HashEntry,int> > *v12; // r14
  __int64 v13; // r13
  int v14; // r15d
  unsigned int v15; // r12d
  StepSimulationData *v16; // rax
  StepSimulationData *data; // rdi
  CUtlVector<CEntityDataInstantiator<StepSimulationData>::HashEntry,CUtlMemory<CEntityDataInstantiator<StepSimulationData>::HashEntry,int> > *v18; // r12
  int v19; // r13d
  CEntityDataInstantiator<StepSimulationData>::HashEntry *v20; // rcx
  __int64 v21; // [rsp+0h] [rbp-50h]
  unsigned int v22; // [rsp+8h] [rbp-48h]
  signed int v23; // [rsp+8h] [rbp-48h]
  int m_Size; // [rsp+Ch] [rbp-44h]
  int v25; // [rsp+Ch] [rbp-44h]
  CEntityDataInstantiator<StepSimulationData>::HashEntry entry; // [rsp+10h] [rbp-40h] BYREF

  entry.data = 0;
  entry.key = instance;
  v3 = this->m_HashTable.m_KeyFunc(&entry);
  if ( this->m_HashTable.m_bPowerOfTwo )
    v22 = this->m_HashTable.m_ModMask & v3;
  else
    v22 = v3 % this->m_HashTable.m_Buckets.m_Size;
  v4 = &this->m_HashTable.m_Buckets.m_Memory.m_pMemory[v22];
  m_Size = v4->m_Size;
  if ( v4->m_Size <= 0 )
  {
    v6 = 0;
  }
  else
  {
    v5 = 0;
    v6 = 0;
    while ( !this->m_HashTable.m_CompareFunc(&v4->m_Memory.m_pMemory[v5], &entry) )
    {
      ++v6;
      ++v5;
      if ( v6 == m_Size )
        goto LABEL_12;
    }
  }
  if ( m_Size == v6 || (v7 = v6 | (v22 << 16)) == -1 )
  {
LABEL_12:
    v11 = this->m_HashTable.m_KeyFunc(&entry);
    if ( this->m_HashTable.m_bPowerOfTwo )
      v23 = this->m_HashTable.m_ModMask & v11;
    else
      v23 = v11 % this->m_HashTable.m_Buckets.m_Size;
    v21 = v23;
    v12 = &this->m_HashTable.m_Buckets.m_Memory.m_pMemory[v21];
    v25 = v12->m_Size;
    if ( v12->m_Size <= 0 )
    {
      v14 = 0;
    }
    else
    {
      v13 = 0;
      v14 = 0;
      while ( !this->m_HashTable.m_CompareFunc(&v12->m_Memory.m_pMemory[v13], &entry) )
      {
        ++v14;
        ++v13;
        if ( v14 == v25 )
          goto LABEL_23;
      }
    }
    if ( v25 == v14 )
    {
LABEL_23:
      v18 = &this->m_HashTable.m_Buckets.m_Memory.m_pMemory[v21];
      v19 = v18->m_Size;
      if ( v18->m_Size == v18->m_Memory.m_nAllocationCount )
        CUtlMemory<CEntityDataInstantiator<StepSimulationData>::HashEntry,int>::Grow(&v18->m_Memory, 1);
      ++v18->m_Size;
      v20 = &v18->m_Memory.m_pMemory[v19];
      if ( v20 != 0 )
        *v20 = entry;
      v15 = v19 | (v23 << 16);
    }
    else
    {
      v15 = v14 | (v23 << 16);
    }
    v16 = operator new(0xD4u);
    v8 = v15;
    v9 = HIWORD(v15);
    this->m_HashTable.m_Buckets.m_Memory.m_pMemory[v9].m_Memory.m_pMemory[v8].data = v16;
    data = this->m_HashTable.m_Buckets.m_Memory.m_pMemory[v9].m_Memory.m_pMemory[v8].data;
    memset(data, 0, 0xD0u);
    *&data->m_History.m_cell[2] = 0;
  }
  else
  {
    v8 = v6;
    v9 = HIWORD(v7);
  }
  return this->m_HashTable.m_Buckets.m_Memory.m_pMemory[v9].m_Memory.m_pMemory[v8].data;
}


// CEntityDataInstantiator<ModelScale>::CreateDataObject  (line 58, @0x00000000021228e0, libserver.so)  // inlines: AddToTail, BuildHandle, CopyConstruct<CEntityDataInstantiator<ModelScale>::HashEntry>, DoFind, Element, Find, GetBucketIndex, GrowMemory, HashEntry, Insert, V_memset, memset, operator[]
// calls: operator new, CUtlMemory<CEntityDataInstantiator<ModelScale>::HashEntry, int>::Grow
void *__fastcall CEntityDataInstantiator<ModelScale>::CreateDataObject(
        CEntityDataInstantiator<ModelScale> *const this,
        const CEntityInstance *instance)
{
  unsigned int v3; // eax
  CUtlVector<CEntityDataInstantiator<ModelScale>::HashEntry,CUtlMemory<CEntityDataInstantiator<ModelScale>::HashEntry,int> > *v4; // r14
  __int64 v5; // r13
  int v6; // r15d
  unsigned int v7; // edx
  __int64 v8; // r15
  __int64 v9; // r12
  unsigned int v11; // eax
  CUtlVector<CEntityDataInstantiator<ModelScale>::HashEntry,CUtlMemory<CEntityDataInstantiator<ModelScale>::HashEntry,int> > *m_pMemory; // rax
  CUtlVector<CEntityDataInstantiator<ModelScale>::HashEntry,CUtlMemory<CEntityDataInstantiator<ModelScale>::HashEntry,int> > *v13; // r14
  __int64 v14; // r13
  int v15; // r15d
  unsigned int v16; // ecx
  CEntityDataInstantiator<ModelScale>::HashEntry *v17; // r13
  ModelScale *data; // rax
  CUtlVector<CEntityDataInstantiator<ModelScale>::HashEntry,CUtlMemory<CEntityDataInstantiator<ModelScale>::HashEntry,int> > *v19; // r12
  int v20; // r13d
  int v21; // eax
  CEntityDataInstantiator<ModelScale>::HashEntry *v22; // rcx
  __int64 v23; // [rsp+0h] [rbp-50h]
  unsigned int v24; // [rsp+8h] [rbp-48h]
  signed int v25; // [rsp+8h] [rbp-48h]
  int m_Size; // [rsp+Ch] [rbp-44h]
  int v27; // [rsp+Ch] [rbp-44h]
  CEntityDataInstantiator<ModelScale>::HashEntry entry; // [rsp+10h] [rbp-40h] BYREF

  entry.data = 0;
  entry.key = instance;
  v3 = this->m_HashTable.m_KeyFunc(&entry);
  if ( this->m_HashTable.m_bPowerOfTwo )
    v24 = this->m_HashTable.m_ModMask & v3;
  else
    v24 = v3 % this->m_HashTable.m_Buckets.m_Size;
  v4 = &this->m_HashTable.m_Buckets.m_Memory.m_pMemory[v24];
  m_Size = v4->m_Size;
  if ( v4->m_Size <= 0 )
  {
    v6 = 0;
  }
  else
  {
    v5 = 0;
    v6 = 0;
    while ( !this->m_HashTable.m_CompareFunc(&v4->m_Memory.m_pMemory[v5], &entry) )
    {
      ++v6;
      ++v5;
      if ( v6 == m_Size )
        goto LABEL_12;
    }
  }
  if ( m_Size == v6 || (v7 = v6 | (v24 << 16)) == -1 )
  {
LABEL_12:
    v11 = this->m_HashTable.m_KeyFunc(&entry);
    if ( this->m_HashTable.m_bPowerOfTwo )
      v25 = this->m_HashTable.m_ModMask & v11;
    else
      v25 = v11 % this->m_HashTable.m_Buckets.m_Size;
    m_pMemory = this->m_HashTable.m_Buckets.m_Memory.m_pMemory;
    v13 = &m_pMemory[v25];
    v23 = v25;
    v27 = v13->m_Size;
    if ( v13->m_Size <= 0 )
    {
      v15 = 0;
LABEL_19:
      if ( v27 != v15 )
      {
        v16 = v15 | (v25 << 16);
LABEL_21:
        v8 = v16;
        v9 = HIWORD(v16);
        v17 = &m_pMemory[v9].m_Memory.m_pMemory[v8];
        v17->data = operator new(0x10u);
        data = this->m_HashTable.m_Buckets.m_Memory.m_pMemory[v9].m_Memory.m_pMemory[v8].data;
        *&data->m_flModelScaleStart = 0;
        *&data->m_flModelScaleFinishTime = 0;
        return this->m_HashTable.m_Buckets.m_Memory.m_pMemory[v9].m_Memory.m_pMemory[v8].data;
      }
    }
    else
    {
      v14 = 0;
      v15 = 0;
      do
      {
        if ( this->m_HashTable.m_CompareFunc(&v13->m_Memory.m_pMemory[v14], &entry) )
        {
          m_pMemory = this->m_HashTable.m_Buckets.m_Memory.m_pMemory;
          goto LABEL_19;
        }
        ++v15;
        ++v14;
      }
      while ( v15 != v27 );
      m_pMemory = this->m_HashTable.m_Buckets.m_Memory.m_pMemory;
    }
    v19 = &m_pMemory[v23];
    v20 = m_pMemory[v25].m_Size;
    if ( v20 == m_pMemory[v23].m_Memory.m_nAllocationCount )
    {
      CUtlMemory<CEntityDataInstantiator<ModelScale>::HashEntry,int>::Grow(&v19->m_Memory, 1);
      v21 = v19->m_Size;
    }
    else
    {
      v21 = m_pMemory[v25].m_Size;
    }
    v19->m_Size = v21 + 1;
    v22 = &v19->m_Memory.m_pMemory[v20];
    if ( v22 != 0 )
      *v22 = entry;
    m_pMemory = this->m_HashTable.m_Buckets.m_Memory.m_pMemory;
    v16 = v20 | (v25 << 16);
    goto LABEL_21;
  }
  v8 = v6;
  v9 = HIWORD(v7);
  return this->m_HashTable.m_Buckets.m_Memory.m_pMemory[v9].m_Memory.m_pMemory[v8].data;
}


// CEntityDataInstantiator<CWatcherList>::CreateDataObject  (line 58, @0x0000000002122f20, libserver.so)  // inlines: AddToTail, BuildHandle, CopyConstruct<CEntityDataInstantiator<CWatcherList>::HashEntry>, DoFind, Element, Find, GetBucketIndex, GrowMemory, HashEntry, Insert, V_memset, memset, operator[]
// calls: operator new, CUtlMemory<CEntityDataInstantiator<CWatcherList>::HashEntry, int>::Grow
void *__fastcall CEntityDataInstantiator<CWatcherList>::CreateDataObject(
        CEntityDataInstantiator<CWatcherList> *const this,
        const CEntityInstance *instance)
{
  unsigned int v3; // eax
  CUtlVector<CEntityDataInstantiator<CWatcherList>::HashEntry,CUtlMemory<CEntityDataInstantiator<CWatcherList>::HashEntry,int> > *v4; // r14
  __int64 v5; // r13
  int v6; // r15d
  unsigned int v7; // edx
  __int64 v8; // r15
  __int64 v9; // r12
  unsigned int v11; // eax
  CUtlVector<CEntityDataInstantiator<CWatcherList>::HashEntry,CUtlMemory<CEntityDataInstantiator<CWatcherList>::HashEntry,int> > *m_pMemory; // rax
  CUtlVector<CEntityDataInstantiator<CWatcherList>::HashEntry,CUtlMemory<CEntityDataInstantiator<CWatcherList>::HashEntry,int> > *v13; // r14
  __int64 v14; // r13
  int v15; // r15d
  unsigned int v16; // ecx
  CEntityDataInstantiator<CWatcherList>::HashEntry *v17; // r13
  CUtlVector<CEntityDataInstantiator<CWatcherList>::HashEntry,CUtlMemory<CEntityDataInstantiator<CWatcherList>::HashEntry,int> > *v18; // r12
  int v19; // r13d
  int v20; // eax
  CEntityDataInstantiator<CWatcherList>::HashEntry *v21; // rcx
  __int64 v22; // [rsp+0h] [rbp-50h]
  unsigned int v23; // [rsp+8h] [rbp-48h]
  signed int v24; // [rsp+8h] [rbp-48h]
  int m_Size; // [rsp+Ch] [rbp-44h]
  int v26; // [rsp+Ch] [rbp-44h]
  CEntityDataInstantiator<CWatcherList>::HashEntry entry; // [rsp+10h] [rbp-40h] BYREF

  entry.data = 0;
  entry.key = instance;
  v3 = this->m_HashTable.m_KeyFunc(&entry);
  if ( this->m_HashTable.m_bPowerOfTwo )
    v23 = this->m_HashTable.m_ModMask & v3;
  else
    v23 = v3 % this->m_HashTable.m_Buckets.m_Size;
  v4 = &this->m_HashTable.m_Buckets.m_Memory.m_pMemory[v23];
  m_Size = v4->m_Size;
  if ( v4->m_Size <= 0 )
  {
    v6 = 0;
  }
  else
  {
    v5 = 0;
    v6 = 0;
    while ( !this->m_HashTable.m_CompareFunc(&v4->m_Memory.m_pMemory[v5], &entry) )
    {
      ++v6;
      ++v5;
      if ( v6 == m_Size )
        goto LABEL_12;
    }
  }
  if ( m_Size == v6 || (v7 = v6 | (v23 << 16)) == -1 )
  {
LABEL_12:
    v11 = this->m_HashTable.m_KeyFunc(&entry);
    if ( this->m_HashTable.m_bPowerOfTwo )
      v24 = this->m_HashTable.m_ModMask & v11;
    else
      v24 = v11 % this->m_HashTable.m_Buckets.m_Size;
    m_pMemory = this->m_HashTable.m_Buckets.m_Memory.m_pMemory;
    v13 = &m_pMemory[v24];
    v22 = v24;
    v26 = v13->m_Size;
    if ( v13->m_Size <= 0 )
    {
      v15 = 0;
LABEL_19:
      if ( v26 != v15 )
      {
        v16 = v15 | (v24 << 16);
LABEL_21:
        v8 = v16;
        v9 = HIWORD(v16);
        v17 = &m_pMemory[v9].m_Memory.m_pMemory[v8];
        v17->data = operator new(2u);
        this->m_HashTable.m_Buckets.m_Memory.m_pMemory[v9].m_Memory.m_pMemory[v8].data->m_list = 0;
        return this->m_HashTable.m_Buckets.m_Memory.m_pMemory[v9].m_Memory.m_pMemory[v8].data;
      }
    }
    else
    {
      v14 = 0;
      v15 = 0;
      do
      {
        if ( this->m_HashTable.m_CompareFunc(&v13->m_Memory.m_pMemory[v14], &entry) )
        {
          m_pMemory = this->m_HashTable.m_Buckets.m_Memory.m_pMemory;
          goto LABEL_19;
        }
        ++v15;
        ++v14;
      }
      while ( v15 != v26 );
      m_pMemory = this->m_HashTable.m_Buckets.m_Memory.m_pMemory;
    }
    v18 = &m_pMemory[v22];
    v19 = m_pMemory[v24].m_Size;
    if ( v19 == m_pMemory[v22].m_Memory.m_nAllocationCount )
    {
      CUtlMemory<CEntityDataInstantiator<CWatcherList>::HashEntry,int>::Grow(&v18->m_Memory, 1);
      v20 = v18->m_Size;
    }
    else
    {
      v20 = m_pMemory[v24].m_Size;
    }
    v18->m_Size = v20 + 1;
    v21 = &v18->m_Memory.m_pMemory[v19];
    if ( v21 != 0 )
      *v21 = entry;
    m_pMemory = this->m_HashTable.m_Buckets.m_Memory.m_pMemory;
    v16 = v19 | (v24 << 16);
    goto LABEL_21;
  }
  v8 = v6;
  v9 = HIWORD(v7);
  return this->m_HashTable.m_Buckets.m_Memory.m_pMemory[v9].m_Memory.m_pMemory[v8].data;
}


// CEntityDataInstantiator<physicspushlist_t>::CreateDataObject  (line 58, @0x0000000002123550, libserver.so)  // inlines: AddToTail, BuildHandle, CEntityHandle, CHandle, CopyConstruct<CEntityDataInstantiator<physicspushlist_t>::HashEntry>, DoFind, Element, Find, GetBucketIndex, GrowMemory, HashEntry, Insert, V_memset, memset, operator[], physicspushlist_t
// calls: operator new, memset, CUtlMemory<CEntityDataInstantiator<physicspushlist_t>::HashEntry, int>::Grow
void *__fastcall CEntityDataInstantiator<physicspushlist_t>::CreateDataObject(
        CEntityDataInstantiator<physicspushlist_t> *const this,
        const CEntityInstance *instance)
{
  unsigned int v3; // eax
  CUtlVector<CEntityDataInstantiator<physicspushlist_t>::HashEntry,CUtlMemory<CEntityDataInstantiator<physicspushlist_t>::HashEntry,int> > *v4; // r14
  __int64 v5; // r13
  int v6; // r15d
  unsigned int v7; // edx
  __int64 v8; // r15
  __int64 v9; // r12
  unsigned int v11; // eax
  CUtlVector<CEntityDataInstantiator<physicspushlist_t>::HashEntry,CUtlMemory<CEntityDataInstantiator<physicspushlist_t>::HashEntry,int> > *v12; // r14
  __int64 v13; // r13
  int v14; // r15d
  unsigned int v15; // r14d
  physicspushlist_t *v16; // rax
  CHandle<CBaseEntity> *pushedEnts; // rdx
  CUtlVector<CEntityDataInstantiator<physicspushlist_t>::HashEntry,CUtlMemory<CEntityDataInstantiator<physicspushlist_t>::HashEntry,int> > *v18; // r12
  int v19; // r13d
  CEntityDataInstantiator<physicspushlist_t>::HashEntry *v20; // rcx
  __int64 v21; // [rsp+0h] [rbp-50h]
  unsigned int v22; // [rsp+8h] [rbp-48h]
  signed int v23; // [rsp+8h] [rbp-48h]
  int m_Size; // [rsp+Ch] [rbp-44h]
  int v25; // [rsp+Ch] [rbp-44h]
  CEntityDataInstantiator<physicspushlist_t>::HashEntry entry; // [rsp+10h] [rbp-40h] BYREF

  entry.data = 0;
  entry.key = instance;
  v3 = this->m_HashTable.m_KeyFunc(&entry);
  if ( this->m_HashTable.m_bPowerOfTwo )
    v22 = this->m_HashTable.m_ModMask & v3;
  else
    v22 = v3 % this->m_HashTable.m_Buckets.m_Size;
  v4 = &this->m_HashTable.m_Buckets.m_Memory.m_pMemory[v22];
  m_Size = v4->m_Size;
  if ( v4->m_Size <= 0 )
  {
    v6 = 0;
  }
  else
  {
    v5 = 0;
    v6 = 0;
    while ( !this->m_HashTable.m_CompareFunc(&v4->m_Memory.m_pMemory[v5], &entry) )
    {
      ++v6;
      ++v5;
      if ( v6 == m_Size )
        goto LABEL_12;
    }
  }
  if ( m_Size == v6 || (v7 = v6 | (v22 << 16)) == -1 )
  {
LABEL_12:
    v11 = this->m_HashTable.m_KeyFunc(&entry);
    if ( this->m_HashTable.m_bPowerOfTwo )
      v23 = this->m_HashTable.m_ModMask & v11;
    else
      v23 = v11 % this->m_HashTable.m_Buckets.m_Size;
    v21 = v23;
    v12 = &this->m_HashTable.m_Buckets.m_Memory.m_pMemory[v21];
    v25 = v12->m_Size;
    if ( v12->m_Size <= 0 )
    {
      v14 = 0;
    }
    else
    {
      v13 = 0;
      v14 = 0;
      while ( !this->m_HashTable.m_CompareFunc(&v12->m_Memory.m_pMemory[v13], &entry) )
      {
        ++v14;
        ++v13;
        if ( v14 == v25 )
          goto LABEL_25;
      }
    }
    if ( v25 == v14 )
    {
LABEL_25:
      v18 = &this->m_HashTable.m_Buckets.m_Memory.m_pMemory[v21];
      v19 = v18->m_Size;
      if ( v18->m_Size == v18->m_Memory.m_nAllocationCount )
        CUtlMemory<CEntityDataInstantiator<physicspushlist_t>::HashEntry,int>::Grow(&v18->m_Memory, 1);
      ++v18->m_Size;
      v20 = &v18->m_Memory.m_pMemory[v19];
      if ( v20 != 0 )
        *v20 = entry;
      v15 = v19 | (v23 << 16);
    }
    else
    {
      v15 = v14 | (v23 << 16);
    }
    v16 = operator new(0x220u);
    pushedEnts = v16->pushedEnts;
    do
    {
      pushedEnts->m_Index = -1;
      ++pushedEnts;
    }
    while ( pushedEnts != v16->pushVec );
    v8 = v15;
    v9 = HIWORD(v15);
    this->m_HashTable.m_Buckets.m_Memory.m_pMemory[v9].m_Memory.m_pMemory[v8].data = v16;
    memset(this->m_HashTable.m_Buckets.m_Memory.m_pMemory[v9].m_Memory.m_pMemory[v8].data, 0, sizeof(physicspushlist_t));
  }
  else
  {
    v8 = v6;
    v9 = HIWORD(v7);
  }
  return this->m_HashTable.m_Buckets.m_Memory.m_pMemory[v9].m_Memory.m_pMemory[v8].data;
}


// CEntityDataInstantiator<vphysicsupdateai_t>::CreateDataObject  (line 58, @0x0000000002123bb0, libserver.so)  // inlines: AddToTail, BuildHandle, CopyConstruct<CEntityDataInstantiator<vphysicsupdateai_t>::HashEntry>, DoFind, Element, Find, GetBucketIndex, GrowMemory, HashEntry, Insert, V_memset, memset, operator[]
// calls: operator new, CUtlMemory<CEntityDataInstantiator<vphysicsupdateai_t>::HashEntry, int>::Grow
void *__fastcall CEntityDataInstantiator<vphysicsupdateai_t>::CreateDataObject(
        CEntityDataInstantiator<vphysicsupdateai_t> *const this,
        const CEntityInstance *instance)
{
  unsigned int v3; // eax
  CUtlVector<CEntityDataInstantiator<vphysicsupdateai_t>::HashEntry,CUtlMemory<CEntityDataInstantiator<vphysicsupdateai_t>::HashEntry,int> > *v4; // r14
  __int64 v5; // r13
  int v6; // r15d
  unsigned int v7; // edx
  __int64 v8; // r15
  __int64 v9; // r12
  unsigned int v11; // eax
  CUtlVector<CEntityDataInstantiator<vphysicsupdateai_t>::HashEntry,CUtlMemory<CEntityDataInstantiator<vphysicsupdateai_t>::HashEntry,int> > *m_pMemory; // rax
  CUtlVector<CEntityDataInstantiator<vphysicsupdateai_t>::HashEntry,CUtlMemory<CEntityDataInstantiator<vphysicsupdateai_t>::HashEntry,int> > *v13; // r14
  __int64 v14; // r13
  int v15; // r15d
  unsigned int v16; // ecx
  CEntityDataInstantiator<vphysicsupdateai_t>::HashEntry *v17; // r13
  vphysicsupdateai_t *data; // rax
  CUtlVector<CEntityDataInstantiator<vphysicsupdateai_t>::HashEntry,CUtlMemory<CEntityDataInstantiator<vphysicsupdateai_t>::HashEntry,int> > *v19; // r12
  int v20; // r13d
  int v21; // eax
  CEntityDataInstantiator<vphysicsupdateai_t>::HashEntry *v22; // rcx
  __int64 v23; // [rsp+0h] [rbp-50h]
  unsigned int v24; // [rsp+8h] [rbp-48h]
  signed int v25; // [rsp+8h] [rbp-48h]
  int m_Size; // [rsp+Ch] [rbp-44h]
  int v27; // [rsp+Ch] [rbp-44h]
  CEntityDataInstantiator<vphysicsupdateai_t>::HashEntry entry; // [rsp+10h] [rbp-40h] BYREF

  entry.data = 0;
  entry.key = instance;
  v3 = this->m_HashTable.m_KeyFunc(&entry);
  if ( this->m_HashTable.m_bPowerOfTwo )
    v24 = this->m_HashTable.m_ModMask & v3;
  else
    v24 = v3 % this->m_HashTable.m_Buckets.m_Size;
  v4 = &this->m_HashTable.m_Buckets.m_Memory.m_pMemory[v24];
  m_Size = v4->m_Size;
  if ( v4->m_Size <= 0 )
  {
    v6 = 0;
  }
  else
  {
    v5 = 0;
    v6 = 0;
    while ( !this->m_HashTable.m_CompareFunc(&v4->m_Memory.m_pMemory[v5], &entry) )
    {
      ++v6;
      ++v5;
      if ( v6 == m_Size )
        goto LABEL_12;
    }
  }
  if ( m_Size == v6 || (v7 = v6 | (v24 << 16)) == -1 )
  {
LABEL_12:
    v11 = this->m_HashTable.m_KeyFunc(&entry);
    if ( this->m_HashTable.m_bPowerOfTwo )
      v25 = this->m_HashTable.m_ModMask & v11;
    else
      v25 = v11 % this->m_HashTable.m_Buckets.m_Size;
    m_pMemory = this->m_HashTable.m_Buckets.m_Memory.m_pMemory;
    v13 = &m_pMemory[v25];
    v23 = v25;
    v27 = v13->m_Size;
    if ( v13->m_Size <= 0 )
    {
      v15 = 0;
LABEL_19:
      if ( v27 != v15 )
      {
        v16 = v15 | (v25 << 16);
LABEL_21:
        v8 = v16;
        v9 = HIWORD(v16);
        v17 = &m_pMemory[v9].m_Memory.m_pMemory[v8];
        v17->data = operator new(0xCu);
        data = this->m_HashTable.m_Buckets.m_Memory.m_pMemory[v9].m_Memory.m_pMemory[v8].data;
        *&data->startUpdateTime = 0;
        data->savedShadowControllerMaxSpeed = 0.0;
        return this->m_HashTable.m_Buckets.m_Memory.m_pMemory[v9].m_Memory.m_pMemory[v8].data;
      }
    }
    else
    {
      v14 = 0;
      v15 = 0;
      do
      {
        if ( this->m_HashTable.m_CompareFunc(&v13->m_Memory.m_pMemory[v14], &entry) )
        {
          m_pMemory = this->m_HashTable.m_Buckets.m_Memory.m_pMemory;
          goto LABEL_19;
        }
        ++v15;
        ++v14;
      }
      while ( v15 != v27 );
      m_pMemory = this->m_HashTable.m_Buckets.m_Memory.m_pMemory;
    }
    v19 = &m_pMemory[v23];
    v20 = m_pMemory[v25].m_Size;
    if ( v20 == m_pMemory[v23].m_Memory.m_nAllocationCount )
    {
      CUtlMemory<CEntityDataInstantiator<vphysicsupdateai_t>::HashEntry,int>::Grow(&v19->m_Memory, 1);
      v21 = v19->m_Size;
    }
    else
    {
      v21 = m_pMemory[v25].m_Size;
    }
    v19->m_Size = v21 + 1;
    v22 = &v19->m_Memory.m_pMemory[v20];
    if ( v22 != 0 )
      *v22 = entry;
    m_pMemory = this->m_HashTable.m_Buckets.m_Memory.m_pMemory;
    v16 = v20 | (v25 << 16);
    goto LABEL_21;
  }
  v8 = v6;
  v9 = HIWORD(v7);
  return this->m_HashTable.m_Buckets.m_Memory.m_pMemory[v9].m_Memory.m_pMemory[v8].data;
}


// CEntityDataInstantiator<StepSimulationData>::DestroyDataObject  (line 80, @0x00000000020fd2c0, libserver.so)  // inlines: BuildHandle, DoFind, Element, FastRemove, Find, GetBucketIndex, GetKeyDataIndex, HashEntry, IsValidIndex, Remove, memcpy, operator[]
// calls: operator delete
void __fastcall CEntityDataInstantiator<StepSimulationData>::DestroyDataObject(
        CEntityDataInstantiator<StepSimulationData> *const this,
        const CEntityInstance *instance)
{
  unsigned int v3; // eax
  CUtlVector<CEntityDataInstantiator<StepSimulationData>::HashEntry,CUtlMemory<CEntityDataInstantiator<StepSimulationData>::HashEntry,int> > *v4; // r13
  int m_Size; // r12d
  __int64 v6; // r14
  int v7; // r15d
  unsigned int v8; // eax
  __int64 v9; // r12
  __int64 v10; // r14
  CUtlVector<CEntityDataInstantiator<StepSimulationData>::HashEntry,CUtlMemory<CEntityDataInstantiator<StepSimulationData>::HashEntry,int> > *v11; // r14
  int v12; // eax
  int v13; // eax
  CEntityDataInstantiator<StepSimulationData>::HashEntry *m_pMemory; // rdx
  CEntityDataInstantiator<StepSimulationData>::HashEntry *v15; // rax
  CEntityDataInstantiator<StepSimulationData>::HashEntry *v16; // r12
  unsigned int v17; // [rsp+4h] [rbp-4Ch]
  CEntityDataInstantiator<StepSimulationData>::HashEntry entry; // [rsp+10h] [rbp-40h] BYREF

  entry.data = 0;
  entry.key = instance;
  v3 = this->m_HashTable.m_KeyFunc(&entry);
  if ( this->m_HashTable.m_bPowerOfTwo )
    v17 = this->m_HashTable.m_ModMask & v3;
  else
    v17 = v3 % this->m_HashTable.m_Buckets.m_Size;
  v4 = &this->m_HashTable.m_Buckets.m_Memory.m_pMemory[v17];
  m_Size = v4->m_Size;
  if ( v4->m_Size <= 0 )
  {
    v7 = 0;
  }
  else
  {
    v6 = 0;
    v7 = 0;
    while ( !this->m_HashTable.m_CompareFunc(&v4->m_Memory.m_pMemory[v6], &entry) )
    {
      ++v7;
      ++v6;
      if ( v7 == m_Size )
        return;
    }
  }
  if ( m_Size != v7 )
  {
    v8 = v7 | (v17 << 16);
    if ( v8 != -1 )
    {
      v9 = v7;
      v10 = HIWORD(v8);
      operator delete(this->m_HashTable.m_Buckets.m_Memory.m_pMemory[v10].m_Memory.m_pMemory[v9].data);
      v11 = &this->m_HashTable.m_Buckets.m_Memory.m_pMemory[v10];
      v12 = v11->m_Size;
      if ( v7 < v11->m_Size && v12 > 0 )
      {
        v13 = v12 - 1;
        if ( v7 != v13 )
        {
          m_pMemory = v11->m_Memory.m_pMemory;
          v15 = &m_pMemory[v13];
          v16 = &m_pMemory[v9];
          v16->key = v15->key;
          v16->data = v15->data;
          v13 = v11->m_Size - 1;
        }
        v11->m_Size = v13;
      }
    }
  }
}


// CEntityDataInstantiator<physicspushlist_t>::DestroyDataObject  (line 80, @0x00000000020fd400, libserver.so)  // inlines: BuildHandle, DoFind, Element, FastRemove, Find, GetBucketIndex, GetKeyDataIndex, HashEntry, IsValidIndex, Remove, memcpy, operator[]
// calls: operator delete
void __fastcall CEntityDataInstantiator<physicspushlist_t>::DestroyDataObject(
        CEntityDataInstantiator<physicspushlist_t> *const this,
        const CEntityInstance *instance)
{
  unsigned int v3; // eax
  CUtlVector<CEntityDataInstantiator<physicspushlist_t>::HashEntry,CUtlMemory<CEntityDataInstantiator<physicspushlist_t>::HashEntry,int> > *v4; // r13
  int m_Size; // r12d
  __int64 v6; // r14
  int v7; // r15d
  unsigned int v8; // eax
  __int64 v9; // r12
  __int64 v10; // r14
  CUtlVector<CEntityDataInstantiator<physicspushlist_t>::HashEntry,CUtlMemory<CEntityDataInstantiator<physicspushlist_t>::HashEntry,int> > *v11; // r14
  int v12; // eax
  int v13; // eax
  CEntityDataInstantiator<physicspushlist_t>::HashEntry *m_pMemory; // rdx
  CEntityDataInstantiator<physicspushlist_t>::HashEntry *v15; // rax
  CEntityDataInstantiator<physicspushlist_t>::HashEntry *v16; // r12
  unsigned int v17; // [rsp+4h] [rbp-4Ch]
  CEntityDataInstantiator<physicspushlist_t>::HashEntry entry; // [rsp+10h] [rbp-40h] BYREF

  entry.data = 0;
  entry.key = instance;
  v3 = this->m_HashTable.m_KeyFunc(&entry);
  if ( this->m_HashTable.m_bPowerOfTwo )
    v17 = this->m_HashTable.m_ModMask & v3;
  else
    v17 = v3 % this->m_HashTable.m_Buckets.m_Size;
  v4 = &this->m_HashTable.m_Buckets.m_Memory.m_pMemory[v17];
  m_Size = v4->m_Size;
  if ( v4->m_Size <= 0 )
  {
    v7 = 0;
  }
  else
  {
    v6 = 0;
    v7 = 0;
    while ( !this->m_HashTable.m_CompareFunc(&v4->m_Memory.m_pMemory[v6], &entry) )
    {
      ++v7;
      ++v6;
      if ( v7 == m_Size )
        return;
    }
  }
  if ( m_Size != v7 )
  {
    v8 = v7 | (v17 << 16);
    if ( v8 != -1 )
    {
      v9 = v7;
      v10 = HIWORD(v8);
      operator delete(this->m_HashTable.m_Buckets.m_Memory.m_pMemory[v10].m_Memory.m_pMemory[v9].data);
      v11 = &this->m_HashTable.m_Buckets.m_Memory.m_pMemory[v10];
      v12 = v11->m_Size;
      if ( v7 < v11->m_Size && v12 > 0 )
      {
        v13 = v12 - 1;
        if ( v7 != v13 )
        {
          m_pMemory = v11->m_Memory.m_pMemory;
          v15 = &m_pMemory[v13];
          v16 = &m_pMemory[v9];
          v16->key = v15->key;
          v16->data = v15->data;
          v13 = v11->m_Size - 1;
        }
        v11->m_Size = v13;
      }
    }
  }
}


// CEntityDataInstantiator<ModelScale>::DestroyDataObject  (line 80, @0x00000000020fd540, libserver.so)  // inlines: BuildHandle, DoFind, Element, FastRemove, Find, GetBucketIndex, GetKeyDataIndex, HashEntry, IsValidIndex, Remove, memcpy, operator[]
// calls: operator delete
void __fastcall CEntityDataInstantiator<ModelScale>::DestroyDataObject(
        CEntityDataInstantiator<ModelScale> *const this,
        const CEntityInstance *instance)
{
  unsigned int v3; // eax
  CUtlVector<CEntityDataInstantiator<ModelScale>::HashEntry,CUtlMemory<CEntityDataInstantiator<ModelScale>::HashEntry,int> > *v4; // r13
  int m_Size; // r12d
  __int64 v6; // r14
  int v7; // r15d
  unsigned int v8; // eax
  __int64 v9; // r12
  __int64 v10; // r14
  CUtlVector<CEntityDataInstantiator<ModelScale>::HashEntry,CUtlMemory<CEntityDataInstantiator<ModelScale>::HashEntry,int> > *v11; // r14
  int v12; // eax
  int v13; // eax
  CEntityDataInstantiator<ModelScale>::HashEntry *m_pMemory; // rdx
  CEntityDataInstantiator<ModelScale>::HashEntry *v15; // rax
  CEntityDataInstantiator<ModelScale>::HashEntry *v16; // r12
  unsigned int v17; // [rsp+4h] [rbp-4Ch]
  CEntityDataInstantiator<ModelScale>::HashEntry entry; // [rsp+10h] [rbp-40h] BYREF

  entry.data = 0;
  entry.key = instance;
  v3 = this->m_HashTable.m_KeyFunc(&entry);
  if ( this->m_HashTable.m_bPowerOfTwo )
    v17 = this->m_HashTable.m_ModMask & v3;
  else
    v17 = v3 % this->m_HashTable.m_Buckets.m_Size;
  v4 = &this->m_HashTable.m_Buckets.m_Memory.m_pMemory[v17];
  m_Size = v4->m_Size;
  if ( v4->m_Size <= 0 )
  {
    v7 = 0;
  }
  else
  {
    v6 = 0;
    v7 = 0;
    while ( !this->m_HashTable.m_CompareFunc(&v4->m_Memory.m_pMemory[v6], &entry) )
    {
      ++v7;
      ++v6;
      if ( v7 == m_Size )
        return;
    }
  }
  if ( m_Size != v7 )
  {
    v8 = v7 | (v17 << 16);
    if ( v8 != -1 )
    {
      v9 = v7;
      v10 = HIWORD(v8);
      operator delete(this->m_HashTable.m_Buckets.m_Memory.m_pMemory[v10].m_Memory.m_pMemory[v9].data);
      v11 = &this->m_HashTable.m_Buckets.m_Memory.m_pMemory[v10];
      v12 = v11->m_Size;
      if ( v7 < v11->m_Size && v12 > 0 )
      {
        v13 = v12 - 1;
        if ( v7 != v13 )
        {
          m_pMemory = v11->m_Memory.m_pMemory;
          v15 = &m_pMemory[v13];
          v16 = &m_pMemory[v9];
          v16->key = v15->key;
          v16->data = v15->data;
          v13 = v11->m_Size - 1;
        }
        v11->m_Size = v13;
      }
    }
  }
}


// CEntityDataInstantiator<vphysicsupdateai_t>::DestroyDataObject  (line 80, @0x00000000020fd680, libserver.so)  // inlines: BuildHandle, DoFind, Element, FastRemove, Find, GetBucketIndex, GetKeyDataIndex, HashEntry, IsValidIndex, Remove, memcpy, operator[]
// calls: operator delete
void __fastcall CEntityDataInstantiator<vphysicsupdateai_t>::DestroyDataObject(
        CEntityDataInstantiator<vphysicsupdateai_t> *const this,
        const CEntityInstance *instance)
{
  unsigned int v3; // eax
  CUtlVector<CEntityDataInstantiator<vphysicsupdateai_t>::HashEntry,CUtlMemory<CEntityDataInstantiator<vphysicsupdateai_t>::HashEntry,int> > *v4; // r13
  int m_Size; // r12d
  __int64 v6; // r14
  int v7; // r15d
  unsigned int v8; // eax
  __int64 v9; // r12
  __int64 v10; // r14
  CUtlVector<CEntityDataInstantiator<vphysicsupdateai_t>::HashEntry,CUtlMemory<CEntityDataInstantiator<vphysicsupdateai_t>::HashEntry,int> > *v11; // r14
  int v12; // eax
  int v13; // eax
  CEntityDataInstantiator<vphysicsupdateai_t>::HashEntry *m_pMemory; // rdx
  CEntityDataInstantiator<vphysicsupdateai_t>::HashEntry *v15; // rax
  CEntityDataInstantiator<vphysicsupdateai_t>::HashEntry *v16; // r12
  unsigned int v17; // [rsp+4h] [rbp-4Ch]
  CEntityDataInstantiator<vphysicsupdateai_t>::HashEntry entry; // [rsp+10h] [rbp-40h] BYREF

  entry.data = 0;
  entry.key = instance;
  v3 = this->m_HashTable.m_KeyFunc(&entry);
  if ( this->m_HashTable.m_bPowerOfTwo )
    v17 = this->m_HashTable.m_ModMask & v3;
  else
    v17 = v3 % this->m_HashTable.m_Buckets.m_Size;
  v4 = &this->m_HashTable.m_Buckets.m_Memory.m_pMemory[v17];
  m_Size = v4->m_Size;
  if ( v4->m_Size <= 0 )
  {
    v7 = 0;
  }
  else
  {
    v6 = 0;
    v7 = 0;
    while ( !this->m_HashTable.m_CompareFunc(&v4->m_Memory.m_pMemory[v6], &entry) )
    {
      ++v7;
      ++v6;
      if ( v7 == m_Size )
        return;
    }
  }
  if ( m_Size != v7 )
  {
    v8 = v7 | (v17 << 16);
    if ( v8 != -1 )
    {
      v9 = v7;
      v10 = HIWORD(v8);
      operator delete(this->m_HashTable.m_Buckets.m_Memory.m_pMemory[v10].m_Memory.m_pMemory[v9].data);
      v11 = &this->m_HashTable.m_Buckets.m_Memory.m_pMemory[v10];
      v12 = v11->m_Size;
      if ( v7 < v11->m_Size && v12 > 0 )
      {
        v13 = v12 - 1;
        if ( v7 != v13 )
        {
          m_pMemory = v11->m_Memory.m_pMemory;
          v15 = &m_pMemory[v13];
          v16 = &m_pMemory[v9];
          v16->key = v15->key;
          v16->data = v15->data;
          v13 = v11->m_Size - 1;
        }
        v11->m_Size = v13;
      }
    }
  }
}


// CEntityDataInstantiator<touchlink_t>::DestroyDataObject  (line 80, @0x00000000020fd7c0, libserver.so)  // inlines: BuildHandle, DoFind, Element, FastRemove, Find, Free, GetBucketIndex, GetKeyDataIndex, HashEntry, IsValidIndex, Remove, memcpy, operator delete, operator[]
// calls: CUtlMemoryPoolBase::Free
void __fastcall CEntityDataInstantiator<touchlink_t>::DestroyDataObject(
        CEntityDataInstantiator<touchlink_t> *const this,
        const CEntityInstance *instance)
{
  unsigned int v3; // eax
  CUtlVector<CEntityDataInstantiator<touchlink_t>::HashEntry,CUtlMemory<CEntityDataInstantiator<touchlink_t>::HashEntry,int> > *v4; // r13
  int m_Size; // r12d
  __int64 v6; // r14
  int v7; // r15d
  unsigned int v8; // eax
  __int64 v9; // r12
  __int64 v10; // r14
  CUtlVector<CEntityDataInstantiator<touchlink_t>::HashEntry,CUtlMemory<CEntityDataInstantiator<touchlink_t>::HashEntry,int> > *v11; // r14
  int v12; // eax
  int v13; // eax
  CEntityDataInstantiator<touchlink_t>::HashEntry *m_pMemory; // rdx
  CEntityDataInstantiator<touchlink_t>::HashEntry *v15; // rax
  CEntityDataInstantiator<touchlink_t>::HashEntry *v16; // r12
  unsigned int v17; // [rsp+4h] [rbp-4Ch]
  CEntityDataInstantiator<touchlink_t>::HashEntry entry; // [rsp+10h] [rbp-40h] BYREF

  entry.data = 0;
  entry.key = instance;
  v3 = this->m_HashTable.m_KeyFunc(&entry);
  if ( this->m_HashTable.m_bPowerOfTwo )
    v17 = this->m_HashTable.m_ModMask & v3;
  else
    v17 = v3 % this->m_HashTable.m_Buckets.m_Size;
  v4 = &this->m_HashTable.m_Buckets.m_Memory.m_pMemory[v17];
  m_Size = v4->m_Size;
  if ( v4->m_Size <= 0 )
  {
    v7 = 0;
  }
  else
  {
    v6 = 0;
    v7 = 0;
    while ( !this->m_HashTable.m_CompareFunc(&v4->m_Memory.m_pMemory[v6], &entry) )
    {
      ++v7;
      ++v6;
      if ( v7 == m_Size )
        return;
    }
  }
  if ( m_Size != v7 )
  {
    v8 = v7 | (v17 << 16);
    if ( v8 != -1 )
    {
      v9 = v7;
      v10 = HIWORD(v8);
      CUtlMemoryPoolBase::Free(
        &touchlink_t::s_Allocator,
        this->m_HashTable.m_Buckets.m_Memory.m_pMemory[v10].m_Memory.m_pMemory[v9].data);
      v11 = &this->m_HashTable.m_Buckets.m_Memory.m_pMemory[v10];
      v12 = v11->m_Size;
      if ( v7 < v11->m_Size && v12 > 0 )
      {
        v13 = v12 - 1;
        if ( v7 != v13 )
        {
          m_pMemory = v11->m_Memory.m_pMemory;
          v15 = &m_pMemory[v13];
          v16 = &m_pMemory[v9];
          v16->key = v15->key;
          v16->data = v15->data;
          v13 = v11->m_Size - 1;
        }
        v11->m_Size = v13;
      }
    }
  }
}


// CEntityDataInstantiator<groundlink_t>::DestroyDataObject  (line 80, @0x00000000020fd920, libserver.so)  // inlines: BuildHandle, DoFind, Element, FastRemove, Find, Free, GetBucketIndex, GetKeyDataIndex, HashEntry, IsValidIndex, Remove, memcpy, operator delete, operator[]
// calls: CUtlMemoryPoolBase::Free
void __fastcall CEntityDataInstantiator<groundlink_t>::DestroyDataObject(
        CEntityDataInstantiator<groundlink_t> *const this,
        const CEntityInstance *instance)
{
  unsigned int v3; // eax
  CUtlVector<CEntityDataInstantiator<groundlink_t>::HashEntry,CUtlMemory<CEntityDataInstantiator<groundlink_t>::HashEntry,int> > *v4; // r13
  int m_Size; // r12d
  __int64 v6; // r14
  int v7; // r15d
  unsigned int v8; // eax
  __int64 v9; // r12
  __int64 v10; // r14
  CUtlVector<CEntityDataInstantiator<groundlink_t>::HashEntry,CUtlMemory<CEntityDataInstantiator<groundlink_t>::HashEntry,int> > *v11; // r14
  int v12; // eax
  int v13; // eax
  CEntityDataInstantiator<groundlink_t>::HashEntry *m_pMemory; // rdx
  CEntityDataInstantiator<groundlink_t>::HashEntry *v15; // rax
  CEntityDataInstantiator<groundlink_t>::HashEntry *v16; // r12
  unsigned int v17; // [rsp+4h] [rbp-4Ch]
  CEntityDataInstantiator<groundlink_t>::HashEntry entry; // [rsp+10h] [rbp-40h] BYREF

  entry.data = 0;
  entry.key = instance;
  v3 = this->m_HashTable.m_KeyFunc(&entry);
  if ( this->m_HashTable.m_bPowerOfTwo )
    v17 = this->m_HashTable.m_ModMask & v3;
  else
    v17 = v3 % this->m_HashTable.m_Buckets.m_Size;
  v4 = &this->m_HashTable.m_Buckets.m_Memory.m_pMemory[v17];
  m_Size = v4->m_Size;
  if ( v4->m_Size <= 0 )
  {
    v7 = 0;
  }
  else
  {
    v6 = 0;
    v7 = 0;
    while ( !this->m_HashTable.m_CompareFunc(&v4->m_Memory.m_pMemory[v6], &entry) )
    {
      ++v7;
      ++v6;
      if ( v7 == m_Size )
        return;
    }
  }
  if ( m_Size != v7 )
  {
    v8 = v7 | (v17 << 16);
    if ( v8 != -1 )
    {
      v9 = v7;
      v10 = HIWORD(v8);
      CUtlMemoryPoolBase::Free(
        &groundlink_t::s_Allocator,
        this->m_HashTable.m_Buckets.m_Memory.m_pMemory[v10].m_Memory.m_pMemory[v9].data);
      v11 = &this->m_HashTable.m_Buckets.m_Memory.m_pMemory[v10];
      v12 = v11->m_Size;
      if ( v7 < v11->m_Size && v12 > 0 )
      {
        v13 = v12 - 1;
        if ( v7 != v13 )
        {
          m_pMemory = v11->m_Memory.m_pMemory;
          v15 = &m_pMemory[v13];
          v16 = &m_pMemory[v9];
          v16->key = v15->key;
          v16->data = v15->data;
          v13 = v11->m_Size - 1;
        }
        v11->m_Size = v13;
      }
    }
  }
}


// CEntityDataInstantiator<CWatcherList>::DestroyDataObject  (line 80, @0x00000000020fda80, libserver.so)  // inlines: BuildHandle, DoFind, Element, FastRemove, Find, GetBucketIndex, GetKeyDataIndex, HashEntry, IsValidIndex, Remove, memcpy, operator[]
// calls: CWatcherList::~CWatcherList, operator delete
void __fastcall CEntityDataInstantiator<CWatcherList>::DestroyDataObject(
        CEntityDataInstantiator<CWatcherList> *const this,
        const CEntityInstance *instance)
{
  unsigned int v3; // eax
  CUtlVector<CEntityDataInstantiator<CWatcherList>::HashEntry,CUtlMemory<CEntityDataInstantiator<CWatcherList>::HashEntry,int> > *v4; // r13
  int m_Size; // r12d
  __int64 v6; // r14
  int v7; // r15d
  unsigned int v8; // eax
  int v9; // r14d
  __int64 v10; // r12
  __int64 v11; // r15
  CUtlVector<CEntityDataInstantiator<CWatcherList>::HashEntry,CUtlMemory<CEntityDataInstantiator<CWatcherList>::HashEntry,int> > *v12; // rax
  CEntityDataInstantiator<CWatcherList>::HashEntry *m_pMemory; // rdx
  CWatcherList *data; // r13
  int v15; // edx
  int v16; // edx
  CEntityDataInstantiator<CWatcherList>::HashEntry *v17; // rcx
  CEntityDataInstantiator<CWatcherList>::HashEntry *v18; // rdx
  CEntityDataInstantiator<CWatcherList>::HashEntry *v19; // r12
  unsigned int v20; // [rsp+4h] [rbp-4Ch]
  CEntityDataInstantiator<CWatcherList>::HashEntry entry; // [rsp+10h] [rbp-40h] BYREF

  entry.data = 0;
  entry.key = instance;
  v3 = this->m_HashTable.m_KeyFunc(&entry);
  if ( this->m_HashTable.m_bPowerOfTwo )
    v20 = this->m_HashTable.m_ModMask & v3;
  else
    v20 = v3 % this->m_HashTable.m_Buckets.m_Size;
  v4 = &this->m_HashTable.m_Buckets.m_Memory.m_pMemory[v20];
  m_Size = v4->m_Size;
  if ( v4->m_Size <= 0 )
  {
    v7 = 0;
  }
  else
  {
    v6 = 0;
    v7 = 0;
    while ( !this->m_HashTable.m_CompareFunc(&v4->m_Memory.m_pMemory[v6], &entry) )
    {
      ++v7;
      ++v6;
      if ( v7 == m_Size )
        return;
    }
  }
  if ( m_Size != v7 )
  {
    v8 = v7 | (v20 << 16);
    if ( v8 != -1 )
    {
      v9 = v7;
      v10 = v7;
      v11 = HIWORD(v8);
      v12 = &this->m_HashTable.m_Buckets.m_Memory.m_pMemory[v11];
      m_pMemory = v12->m_Memory.m_pMemory;
      data = m_pMemory[v10].data;
      if ( data != 0 )
      {
        CWatcherList::~CWatcherList(m_pMemory[v10].data);
        operator delete(data);
        v12 = &this->m_HashTable.m_Buckets.m_Memory.m_pMemory[v11];
      }
      v15 = v12->m_Size;
      if ( v9 < v12->m_Size && v15 > 0 )
      {
        v16 = v15 - 1;
        if ( v9 != v16 )
        {
          v17 = v12->m_Memory.m_pMemory;
          v18 = &v17[v16];
          v19 = &v17[v10];
          v19->key = v18->key;
          v19->data = v18->data;
          v16 = v12->m_Size - 1;
        }
        v12->m_Size = v16;
      }
    }
  }
}


// CEntityDataInstantiator<touchlink_t>::CompareFunc  (line 107, @0x00000000020f2070, libserver.so)
bool __fastcall CEntityDataInstantiator<touchlink_t>::CompareFunc(
        const CEntityDataInstantiator<touchlink_t>::HashEntry *const src1,
        const CEntityDataInstantiator<touchlink_t>::HashEntry *const src2)
{
  return src1->key == src2->key;
}


// CEntityDataInstantiator<groundlink_t>::CompareFunc  (line 107, @0x00000000020f2090, libserver.so)
bool __fastcall CEntityDataInstantiator<groundlink_t>::CompareFunc(
        const CEntityDataInstantiator<groundlink_t>::HashEntry *const src1,
        const CEntityDataInstantiator<groundlink_t>::HashEntry *const src2)
{
  return src1->key == src2->key;
}


// CEntityDataInstantiator<StepSimulationData>::CompareFunc  (line 107, @0x00000000020f20b0, libserver.so)
bool __fastcall CEntityDataInstantiator<StepSimulationData>::CompareFunc(
        const CEntityDataInstantiator<StepSimulationData>::HashEntry *const src1,
        const CEntityDataInstantiator<StepSimulationData>::HashEntry *const src2)
{
  return src1->key == src2->key;
}


// CEntityDataInstantiator<ModelScale>::CompareFunc  (line 107, @0x00000000020f20d0, libserver.so)
bool __fastcall CEntityDataInstantiator<ModelScale>::CompareFunc(
        const CEntityDataInstantiator<ModelScale>::HashEntry *const src1,
        const CEntityDataInstantiator<ModelScale>::HashEntry *const src2)
{
  return src1->key == src2->key;
}


// CEntityDataInstantiator<CWatcherList>::CompareFunc  (line 107, @0x00000000020f20f0, libserver.so)
bool __fastcall CEntityDataInstantiator<CWatcherList>::CompareFunc(
        const CEntityDataInstantiator<CWatcherList>::HashEntry *const src1,
        const CEntityDataInstantiator<CWatcherList>::HashEntry *const src2)
{
  return src1->key == src2->key;
}


// CEntityDataInstantiator<physicspushlist_t>::CompareFunc  (line 107, @0x00000000020f2110, libserver.so)
bool __fastcall CEntityDataInstantiator<physicspushlist_t>::CompareFunc(
        const CEntityDataInstantiator<physicspushlist_t>::HashEntry *const src1,
        const CEntityDataInstantiator<physicspushlist_t>::HashEntry *const src2)
{
  return src1->key == src2->key;
}


// CEntityDataInstantiator<vphysicsupdateai_t>::CompareFunc  (line 107, @0x00000000020f2130, libserver.so)
bool __fastcall CEntityDataInstantiator<vphysicsupdateai_t>::CompareFunc(
        const CEntityDataInstantiator<vphysicsupdateai_t>::HashEntry *const src1,
        const CEntityDataInstantiator<vphysicsupdateai_t>::HashEntry *const src2)
{
  return src1->key == src2->key;
}


// CEntityDataInstantiator<touchlink_t>::KeyFunc  (line 112, @0x00000000020f2080, libserver.so)
unsigned int __fastcall CEntityDataInstantiator<touchlink_t>::KeyFunc(
        const CEntityDataInstantiator<touchlink_t>::HashEntry *const src)
{
  return src->key;
}


// CEntityDataInstantiator<groundlink_t>::KeyFunc  (line 112, @0x00000000020f20a0, libserver.so)
unsigned int __fastcall CEntityDataInstantiator<groundlink_t>::KeyFunc(
        const CEntityDataInstantiator<groundlink_t>::HashEntry *const src)
{
  return src->key;
}


// CEntityDataInstantiator<StepSimulationData>::KeyFunc  (line 112, @0x00000000020f20c0, libserver.so)
unsigned int __fastcall CEntityDataInstantiator<StepSimulationData>::KeyFunc(
        const CEntityDataInstantiator<StepSimulationData>::HashEntry *const src)
{
  return src->key;
}


// CEntityDataInstantiator<ModelScale>::KeyFunc  (line 112, @0x00000000020f20e0, libserver.so)
unsigned int __fastcall CEntityDataInstantiator<ModelScale>::KeyFunc(
        const CEntityDataInstantiator<ModelScale>::HashEntry *const src)
{
  return src->key;
}


// CEntityDataInstantiator<CWatcherList>::KeyFunc  (line 112, @0x00000000020f2100, libserver.so)
unsigned int __fastcall CEntityDataInstantiator<CWatcherList>::KeyFunc(
        const CEntityDataInstantiator<CWatcherList>::HashEntry *const src)
{
  return src->key;
}


// CEntityDataInstantiator<physicspushlist_t>::KeyFunc  (line 112, @0x00000000020f2120, libserver.so)
unsigned int __fastcall CEntityDataInstantiator<physicspushlist_t>::KeyFunc(
        const CEntityDataInstantiator<physicspushlist_t>::HashEntry *const src)
{
  return src->key;
}


// CEntityDataInstantiator<vphysicsupdateai_t>::KeyFunc  (line 112, @0x00000000020f2140, libserver.so)
unsigned int __fastcall CEntityDataInstantiator<vphysicsupdateai_t>::KeyFunc(
        const CEntityDataInstantiator<vphysicsupdateai_t>::HashEntry *const src)
{
  return src->key;
}


