
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// IRegistry::~IRegistry  (line 21, @0x0000000002f4a250, libserver.so)
void __fastcall IRegistry::~IRegistry(IRegistry *const this)
{
  this->_vptr_IRegistry = off_47B7070;
}


// IRegistry::~IRegistry  (line 21, @0x0000000002f4a260, libserver.so)  // inlines: ~IRegistry
// calls: operator delete
void __fastcall IRegistry::~IRegistry(IRegistry *const this)
{
  this->_vptr_IRegistry = off_47B7070;
  operator delete(this);
}


