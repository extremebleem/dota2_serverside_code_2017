
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CPlayerMove::~CPlayerMove  (line 30, @0x00000000023045e0, libserver.so)
void __fastcall CPlayerMove::~CPlayerMove(CPlayerMove *const this)
{
  this->_vptr_CPlayerMove = off_408A030;  // vptr: CPlayerMove
}


// CPlayerMove::~CPlayerMove  (line 30, @0x00000000023056a0, libserver.so)  // inlines: ~CPlayerMove
// calls: operator delete
void __fastcall CPlayerMove::~CPlayerMove(CPlayerMove *const this)
{
  this->_vptr_CPlayerMove = off_408A030;  // vptr: CPlayerMove
  operator delete(this);
}


