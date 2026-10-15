
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// IVSSequence::~IVSSequence  (line 25, @0x0000000003145af0, libserver.so)  // inlines: ~IBaseSequence, ~ISequence
void __fastcall IVSSequence::~IVSSequence(IVSSequence *const this)
{
  this->_vptr_IBaseSequence = off_47C52D0;
}


// IVSSequence::~IVSSequence  (line 25, @0x0000000003145fa0, libserver.so)  // inlines: ~IBaseSequence, ~ISequence, ~IVSSequence
// calls: operator delete
void __fastcall IVSSequence::~IVSSequence(IVSSequence *const this)
{
  this->_vptr_IBaseSequence = off_47C52D0;
  operator delete(this);
}


