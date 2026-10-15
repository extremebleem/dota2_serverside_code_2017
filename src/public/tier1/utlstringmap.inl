
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CUtlStringMap<IGameSystem::FactoryInfo_t, CUtlSymbolTable>::~CUtlStringMap  (line 14, @0x0000000001f04300, libserver.so)  // inlines: Purge, RemoveAll, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlSymbolTable::~CUtlSymbolTable, CUtlMemory<IGameSystem::FactoryInfo_t, int>::Purge
void __fastcall CUtlStringMap<IGameSystem::FactoryInfo_t,CUtlSymbolTable>::~CUtlStringMap(
        CUtlStringMap<IGameSystem::FactoryInfo_t,CUtlSymbolTable> *const this)
{
  bool v2; // zf

  CUtlSymbolTable::~CUtlSymbolTable(&this->m_SymbolTable);
  v2 = (this->m_Vector.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_Vector.m_Size = 0;
  if ( v2 )
  {
    CUtlMemory<IGameSystem::FactoryInfo_t,int>::Purge(&this->m_Vector.m_Memory);
    if ( (this->m_Vector.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<IGameSystem::FactoryInfo_t,int>::Purge(&this->m_Vector.m_Memory);
  }
}


// CUtlStringMap<CAssetModifier* (*)(KeyValues*, IEconItemSchema*, bool, int), CUtlSymbolTable>::~CUtlStringMap  (line 14, @0x0000000002e53140, libserver.so)  // inlines: Purge, RemoveAll, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlSymbolTable::~CUtlSymbolTable, CUtlMemory<CAssetModifier* (*)(KeyValues*, IEconItemSchema*, bool, int), int>::Purge
void __fastcall CUtlStringMap<CAssetModifier * (*)(KeyValues *,IEconItemSchema *,bool,int),CUtlSymbolTable>::~CUtlStringMap(
        CUtlStringMap<CAssetModifier* (*)(KeyValues*,IEconItemSchema*,bool,int),CUtlSymbolTable> *const this)
{
  bool v2; // zf

  CUtlSymbolTable::~CUtlSymbolTable(&this->m_SymbolTable);
  v2 = (this->m_Vector.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_Vector.m_Size = 0;
  if ( v2 )
  {
    CUtlMemory<CAssetModifier * (*)(KeyValues *,IEconItemSchema *,bool,int),int>::Purge(&this->m_Vector.m_Memory);
    if ( (this->m_Vector.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CAssetModifier * (*)(KeyValues *,IEconItemSchema *,bool,int),int>::Purge(&this->m_Vector.m_Memory);
  }
}


// CUtlStringMap<CUtlAbstractDelegate, CUtlSymbolTable>::~CUtlStringMap  (line 14, @0x00000000030bf2f0, libserver.so)  // inlines: Purge, RemoveAll, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlSymbolTable::~CUtlSymbolTable, CUtlMemory<CUtlAbstractDelegate, int>::Purge
void __fastcall CUtlStringMap<CUtlAbstractDelegate,CUtlSymbolTable>::~CUtlStringMap(
        CUtlStringMap<CUtlAbstractDelegate,CUtlSymbolTable> *const this)
{
  bool v2; // zf

  CUtlSymbolTable::~CUtlSymbolTable(&this->m_SymbolTable);
  v2 = (this->m_Vector.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_Vector.m_Size = 0;
  if ( v2 )
  {
    CUtlMemory<CUtlAbstractDelegate,int>::Purge(&this->m_Vector.m_Memory);
    if ( (this->m_Vector.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CUtlAbstractDelegate,int>::Purge(&this->m_Vector.m_Memory);
  }
}


// CUtlStringMap<int, CUtlSymbolTable>::operator[]  (line 32, @0x0000000002345590, libserver.so)  // inlines: AddMultipleToTail, EnsureCount, GrowMemory, GrowVector, InsertMultipleBefore, operator const UtlSymId_t, operator[]
// calls: CUtlSymbolTable::AddString, CUtlMemory<int, int>::Grow
// callers: CTier2AppSystemDict::MountAddon
int *__fastcall CUtlStringMap<int,CUtlSymbolTable>::operator[](
        CUtlStringMap<int,CUtlSymbolTable> *const this,
        const char *pString)
{
  int v3; // r13d
  int m_nAllocationCount; // eax
  CUtlSymbol symbol; // [rsp+0h] [rbp-30h]

  CUtlSymbolTable::AddString(&this->m_SymbolTable, pString);
  if ( symbol.m_Id >= this->m_Vector.m_Size )
  {
    v3 = symbol.m_Id + 1;
    if ( this->m_Vector.m_Size < v3 )
    {
      m_nAllocationCount = this->m_Vector.m_Memory.m_nAllocationCount;
      if ( v3 > m_nAllocationCount )
        CUtlMemory<int,int>::Grow(&this->m_Vector.m_Memory, v3 - m_nAllocationCount);
      this->m_Vector.m_Size = v3;
    }
  }
  return &this->m_Vector.m_Memory.m_pMemory[symbol.m_Id];
}


// CUtlStringMap<CAppSystemDict::InterfaceInfo_t, CUtlSymbolTable>::operator[]  (line 32, @0x000000000306ce20, libserver.so)  // inlines: AddMultipleToTail, Construct<CAppSystemDict::InterfaceInfo_t>, EnsureCount, GrowMemory, GrowVector, InsertMultipleBefore, InterfaceInfo_t, operator const UtlSymId_t, operator[]
// calls: CUtlSymbolTable::AddString, CUtlMemory<CAppSystemDict::InterfaceInfo_t, int>::Grow, CUtlSymbolTable::CUtlSymbolTable
// callers: CAppSystemDict::DictSortLessFunc, CAppSystemDict::LoadSystemAndDependencies
CAppSystemDict::InterfaceInfo_t *__fastcall CUtlStringMap<CAppSystemDict::InterfaceInfo_t,CUtlSymbolTable>::operator[](
        CUtlStringMap<CAppSystemDict::InterfaceInfo_t,CUtlSymbolTable> *const this,
        const char *pString)
{
  UtlSymId_t m_Id; // r14
  __int64 m_Size; // r12
  int v5; // r15d
  CAppSystemDict::InterfaceInfo_t *m_pMemory; // rax
  int v8; // r13d
  int m_nAllocationCount; // eax
  int v10; // r15d
  __int64 v11; // r12
  CUtlSymbol symbol; // [rsp+0h] [rbp-40h] BYREF

  CUtlSymbolTable::AddString(&symbol.m_Id, &this->m_SymbolTable, pString);
  m_Id = symbol.m_Id;
  m_Size = this->m_Vector.m_Size;
  if ( symbol.m_Id < m_Size || (v5 = symbol.m_Id + 1, m_Size >= v5) || (v8 = v5 - m_Size, v5 == m_Size) )
  {
    m_pMemory = this->m_Vector.m_Memory.m_pMemory;
  }
  else
  {
    m_nAllocationCount = this->m_Vector.m_Memory.m_nAllocationCount;
    if ( v5 > m_nAllocationCount )
      CUtlMemory<CAppSystemDict::InterfaceInfo_t,int>::Grow(&this->m_Vector.m_Memory, v5 - m_nAllocationCount);
    this->m_Vector.m_Size = v5;
    m_pMemory = this->m_Vector.m_Memory.m_pMemory;
    if ( v8 > 0 )
    {
      v10 = 0;
      v11 = m_Size;
      do
      {
        if ( &m_pMemory[v11] != 0 )
        {
          CUtlSymbolTable::CUtlSymbolTable(&m_pMemory[v11].m_Dependencies, 0, 16, 0);
          m_pMemory = this->m_Vector.m_Memory.m_pMemory;
        }
        ++v10;
        ++v11;
      }
      while ( v8 > v10 );
    }
  }
  return &m_pMemory[m_Id];
}


// CUtlStringMap<CAssetModifier* (*)(KeyValues*, IEconItemSchema*, bool, int), CUtlSymbolTable>::Insert  (line 89, @0x0000000002e65150, libserver.so)  // inlines: AddMultipleToTail, AddToTail, CopyConstruct<CAssetModifier* (*)(KeyValues*, IEconItemSchema*, bool, int)>, Element, EnsureCount, GrowMemory, GrowVector, InsertMultipleBefore, operator const UtlSymId_t, operator[]
// calls: CUtlSymbolTable::AddString, CUtlMemory<CAssetModifier* (*)(KeyValues*, IEconItemSchema*, bool, int), int>::Grow
// callers: __static_initialization_and_destruction_0
UtlSymId_t __fastcall CUtlStringMap<CAssetModifier * (*)(KeyValues *,IEconItemSchema *,bool,int),CUtlSymbolTable>::Insert(
        CUtlStringMap<CAssetModifier* (*)(KeyValues*,IEconItemSchema*,bool,int),CUtlSymbolTable> *const this,
        const char *pString,
        CAssetModifier *(*const *const item)(KeyValues *, IEconItemSchema *, bool, int))
{
  UtlSymId_t result; // ax
  __int64 m_Size; // r12
  int v7; // r14d
  int m_nAllocationCount; // edx
  int v9; // edx
  CAssetModifier *(**v10)(KeyValues *, IEconItemSchema *, bool, int); // rdx
  CUtlSymbol symbol; // [rsp+10h] [rbp-30h]

  CUtlSymbolTable::AddString(&this->m_SymbolTable, pString);
  result = symbol.m_Id;
  m_Size = this->m_Vector.m_Size;
  if ( m_Size <= symbol.m_Id )
  {
    if ( m_Size == symbol.m_Id )
    {
      v9 = this->m_Vector.m_Size;
      if ( m_Size == this->m_Vector.m_Memory.m_nAllocationCount )
      {
        CUtlMemory<CAssetModifier * (*)(KeyValues *,IEconItemSchema *,bool,int),int>::Grow(&this->m_Vector.m_Memory, 1);
        v9 = this->m_Vector.m_Size;
        result = symbol.m_Id;
      }
      this->m_Vector.m_Size = v9 + 1;
      v10 = &this->m_Vector.m_Memory.m_pMemory[m_Size];
      if ( v10 != 0 )
        *v10 = *item;
    }
    else
    {
      v7 = symbol.m_Id + 1;
      if ( m_Size < v7 )
      {
        m_nAllocationCount = this->m_Vector.m_Memory.m_nAllocationCount;
        if ( v7 > m_nAllocationCount )
        {
          CUtlMemory<CAssetModifier * (*)(KeyValues *,IEconItemSchema *,bool,int),int>::Grow(
            &this->m_Vector.m_Memory,
            v7 - m_nAllocationCount);
          result = symbol.m_Id;
        }
        this->m_Vector.m_Size = v7;
      }
      this->m_Vector.m_Memory.m_pMemory[result] = *item;
    }
  }
  return result;
}


