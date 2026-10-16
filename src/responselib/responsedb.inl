
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// rr2::CResponseDB::~CResponseDB  (line 39, @0x0000000003112a00, libserver.so)  // inlines: Purge, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~IResponseDB
// calls: CUtlVectorBase<rr2::CRule, CUtlMemory<rr2::CRule, int> >::RemoveAll, CUtlSymbolTable::~CUtlSymbolTable, CUtlMemory<rr2::CRule, int>::Purge
void __fastcall rr2::CResponseDB::~CResponseDB(rr2::CResponseDB *const this)
{
  this->_vptr_IResponseDB = off_47C4E50;  // vptr: rr2::CResponseDB
  CUtlVectorBase<rr2::CRule,CUtlMemory<rr2::CRule,int>>::RemoveAll(&this->m_Rules);
  if ( (this->m_Rules.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<rr2::CRule,int>::Purge(&this->m_Rules.m_Memory);
    if ( (this->m_Rules.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<rr2::CRule,int>::Purge(&this->m_Rules.m_Memory);
  }
  this->_vptr_IResponseDB = off_47C4DF0;  // vptr: rr2::IResponseDB
  CUtlSymbolTable::~CUtlSymbolTable(&this->m_SymTab);
}


// rr2::CResponseDB::~CResponseDB  (line 39, @0x0000000003112a60, libserver.so)  // inlines: Purge, ~CResponseDB, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~IResponseDB
// calls: CUtlVectorBase<rr2::CRule, CUtlMemory<rr2::CRule, int> >::RemoveAll, CUtlSymbolTable::~CUtlSymbolTable, operator delete, CUtlMemory<rr2::CRule, int>::Purge
void __fastcall rr2::CResponseDB::~CResponseDB(rr2::CResponseDB *const this)
{
  this->_vptr_IResponseDB = off_47C4E50;  // vptr: rr2::CResponseDB
  CUtlVectorBase<rr2::CRule,CUtlMemory<rr2::CRule,int>>::RemoveAll(&this->m_Rules);
  if ( (this->m_Rules.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<rr2::CRule,int>::Purge(&this->m_Rules.m_Memory);
    if ( (this->m_Rules.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<rr2::CRule,int>::Purge(&this->m_Rules.m_Memory);
  }
  this->_vptr_IResponseDB = off_47C4DF0;  // vptr: rr2::IResponseDB
  CUtlSymbolTable::~CUtlSymbolTable(&this->m_SymTab);
  operator delete(this);
}


