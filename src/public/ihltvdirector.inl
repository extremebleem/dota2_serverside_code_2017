
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// IHLTVDirector::~IHLTVDirector  (line 18, @0x000000000227aa00, libserver.so)
void __fastcall IHLTVDirector::~IHLTVDirector(IHLTVDirector *const this)
{
  this->_vptr_IHLTVDirector = off_404F150;  // vptr: IHLTVDirector
}


// IHLTVDirector::~IHLTVDirector  (line 18, @0x000000000227bca0, libserver.so)  // inlines: ~IHLTVDirector
// calls: operator delete
void __fastcall IHLTVDirector::~IHLTVDirector(IHLTVDirector *const this)
{
  this->_vptr_IHLTVDirector = off_404F150;  // vptr: IHLTVDirector
  operator delete(this);
}


