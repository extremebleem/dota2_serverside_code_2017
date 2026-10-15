
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// IApplication::~IApplication  (line 75, @0x0000000002339670, libserver.so)
void __fastcall IApplication::~IApplication(IApplication *const this)
{
  this->_vptr_IAppSystem = &off_408AB70;
}


// IApplication::~IApplication  (line 75, @0x000000000233abe0, libserver.so)  // inlines: ~IApplication
// calls: operator delete
void __fastcall IApplication::~IApplication(IApplication *const this)
{
  this->_vptr_IAppSystem = &off_408AB70;
  operator delete(this);
}


