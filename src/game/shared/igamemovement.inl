
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// IGameMovement::~IGameMovement  (line 114, @0x000000000227aae0, libserver.so)
void __fastcall IGameMovement::~IGameMovement(IGameMovement *const this)
{
  this->_vptr_IGameMovement = off_404F1F0;
}


// IGameMovement::~IGameMovement  (line 114, @0x000000000227bcc0, libserver.so)  // inlines: ~IGameMovement
// calls: operator delete
void __fastcall IGameMovement::~IGameMovement(IGameMovement *const this)
{
  this->_vptr_IGameMovement = off_404F1F0;
  operator delete(this);
}


