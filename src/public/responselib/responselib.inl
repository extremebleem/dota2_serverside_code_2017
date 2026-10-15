
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// rr2::IRulePayload::~IRulePayload  (line 131, @0x000000000204e420, libserver.so)
void __fastcall rr2::IRulePayload::~IRulePayload(rr2::IRulePayload *const this)
{
  this->_vptr_IRulePayload = off_3FEAC70;
}


// rr2::IRulePayload::~IRulePayload  (line 131, @0x000000000204e4d0, libserver.so)  // inlines: ~IRulePayload
// calls: operator delete
void __fastcall rr2::IRulePayload::~IRulePayload(rr2::IRulePayload *const this)
{
  this->_vptr_IRulePayload = off_3FEAC70;
  operator delete(this);
}


// rr2::ICriterionFunctor::~ICriterionFunctor  (line 221, @0x000000000204e430, libserver.so)  // inlines: ~CRefCountServiceBase, ~CRefCounted
void __fastcall rr2::ICriterionFunctor::~ICriterionFunctor(rr2::ICriterionFunctor *const this)
{
  this->_vptr_CRefCountServiceBase = off_3FEABF0;
}


// rr2::ICriterionFunctor::~ICriterionFunctor  (line 221, @0x000000000204e4f0, libserver.so)  // inlines: ~CRefCountServiceBase, ~CRefCounted, ~ICriterionFunctor
// calls: operator delete
void __fastcall rr2::ICriterionFunctor::~ICriterionFunctor(rr2::ICriterionFunctor *const this)
{
  this->_vptr_CRefCountServiceBase = off_3FEABF0;
  operator delete(this);
}


// rr2::ICriterionFunctorString::~ICriterionFunctorString  (line 256, @0x0000000003111fd0, libserver.so)  // inlines: ~CRefCountServiceBase, ~CRefCounted, ~ICriterionFunctor
void __fastcall rr2::ICriterionFunctorString::~ICriterionFunctorString(rr2::ICriterionFunctorString *const this)
{
  this->_vptr_CRefCountServiceBase = off_3FEABF0;
}


// rr2::ICriterionFunctorString::~ICriterionFunctorString  (line 256, @0x0000000003111fe0, libserver.so)  // inlines: ~CRefCountServiceBase, ~CRefCounted, ~ICriterionFunctor, ~ICriterionFunctorString
// calls: operator delete
void __fastcall rr2::ICriterionFunctorString::~ICriterionFunctorString(rr2::ICriterionFunctorString *const this)
{
  this->_vptr_CRefCountServiceBase = off_3FEABF0;
  operator delete(this);
}


// rr2::IResponseDB::~IResponseDB  (line 391, @0x0000000003112930, libserver.so)
// calls: CUtlSymbolTable::~CUtlSymbolTable
void __fastcall rr2::IResponseDB::~IResponseDB(rr2::IResponseDB *const this)
{
  CUtlSymbolTable *p_m_SymTab; // rdi

  p_m_SymTab = &this->m_SymTab;
  *&p_m_SymTab[-1].m_StringPools.m_Memory.m_nAllocationCount = off_47C4DF0;
  CUtlSymbolTable::~CUtlSymbolTable(p_m_SymTab);
}


// rr2::IResponseDB::~IResponseDB  (line 391, @0x0000000003112950, libserver.so)  // inlines: ~IResponseDB
// calls: CUtlSymbolTable::~CUtlSymbolTable, operator delete
void __fastcall rr2::IResponseDB::~IResponseDB(rr2::IResponseDB *const this)
{
  CUtlSymbolTable *p_m_SymTab; // rdi

  p_m_SymTab = &this->m_SymTab;
  *&p_m_SymTab[-1].m_StringPools.m_Memory.m_nAllocationCount = off_47C4DF0;
  CUtlSymbolTable::~CUtlSymbolTable(p_m_SymTab);
  operator delete(this);
}


