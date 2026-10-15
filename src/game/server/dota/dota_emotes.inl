
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CEmoteMap::IFunction::~IFunction  (line 42, @0x0000000002552020, libserver.so)  // inlines: ~CRefCountServiceBase, ~CRefCounted
void __fastcall CEmoteMap::IFunction::~IFunction(CEmoteMap::IFunction *const this)
{
  this->_vptr_CRefCountServiceBase = off_3FEABF0;
}


// CEmoteMap::IFunction::~IFunction  (line 42, @0x0000000002554aa0, libserver.so)  // inlines: ~CRefCountServiceBase, ~CRefCounted, ~IFunction
// calls: operator delete
void __fastcall CEmoteMap::IFunction::~IFunction(CEmoteMap::IFunction *const this)
{
  this->_vptr_CRefCountServiceBase = off_3FEABF0;
  operator delete(this);
}


// CEmotePlayConcept::~CEmotePlayConcept  (line 77, @0x0000000002552aa0, libserver.so)  // inlines: ~CRefCountServiceBase, ~CRefCounted, ~IFunction
void __fastcall CEmotePlayConcept::~CEmotePlayConcept(CEmotePlayConcept *const this)
{
  this->_vptr_CRefCountServiceBase = off_3FEABF0;
}


// CEmotePlayConcept::~CEmotePlayConcept  (line 77, @0x0000000002554ba0, libserver.so)  // inlines: ~CEmotePlayConcept, ~CRefCountServiceBase, ~CRefCounted, ~IFunction
// calls: operator delete
void __fastcall CEmotePlayConcept::~CEmotePlayConcept(CEmotePlayConcept *const this)
{
  this->_vptr_CRefCountServiceBase = off_3FEABF0;
  operator delete(this);
}


