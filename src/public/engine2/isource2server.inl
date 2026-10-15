
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// ISource2GameEntities::~ISource2GameEntities  (line 601, @0x0000000002244ec0, libserver.so)
void __fastcall ISource2GameEntities::~ISource2GameEntities(ISource2GameEntities *const this)
{
  this->_vptr_IAppSystem = &off_403F870;
}


// ISource2GameEntities::~ISource2GameEntities  (line 601, @0x0000000002246670, libserver.so)  // inlines: ~ISource2GameEntities
// calls: operator delete
void __fastcall ISource2GameEntities::~ISource2GameEntities(ISource2GameEntities *const this)
{
  this->_vptr_IAppSystem = &off_403F870;
  operator delete(this);
}


