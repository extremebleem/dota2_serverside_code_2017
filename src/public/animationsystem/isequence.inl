
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// IBaseSequence::~IBaseSequence  (line 90, @0x0000000003145ad0, libserver.so)
void __fastcall IBaseSequence::~IBaseSequence(IBaseSequence *const this)
{
  this->_vptr_IBaseSequence = off_47C52D0;  // vptr: IBaseSequence
}


// IBaseSequence::~IBaseSequence  (line 90, @0x0000000003145f60, libserver.so)  // inlines: ~IBaseSequence
// calls: operator delete
void __fastcall IBaseSequence::~IBaseSequence(IBaseSequence *const this)
{
  this->_vptr_IBaseSequence = off_47C52D0;  // vptr: IBaseSequence
  operator delete(this);
}


// ISequence::~ISequence  (line 110, @0x0000000003145ae0, libserver.so)  // inlines: ~IBaseSequence
void __fastcall ISequence::~ISequence(ISequence *const this)
{
  this->_vptr_IBaseSequence = off_47C52D0;  // vptr: IBaseSequence
}


// ISequence::~ISequence  (line 110, @0x0000000003145f80, libserver.so)  // inlines: ~IBaseSequence, ~ISequence
// calls: operator delete
void __fastcall ISequence::~ISequence(ISequence *const this)
{
  this->_vptr_IBaseSequence = off_47C52D0;  // vptr: IBaseSequence
  operator delete(this);
}


