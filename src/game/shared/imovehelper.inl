
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// IMoveHelper::~IMoveHelper  (line 92, @0x00000000022a5330, libserver.so)
void __fastcall IMoveHelper::~IMoveHelper(IMoveHelper *const this)
{
  this->_vptr_IMoveHelper = &off_4058530;
}


// IMoveHelper::~IMoveHelper  (line 92, @0x00000000022a7bd0, libserver.so)  // inlines: ~IMoveHelper
// calls: operator delete
void __fastcall IMoveHelper::~IMoveHelper(IMoveHelper *const this)
{
  this->_vptr_IMoveHelper = &off_4058530;
  operator delete(this);
}


