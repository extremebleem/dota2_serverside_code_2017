
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTAMapLocationState::~CDOTAMapLocationState  (line 63, @0x00000000027dfe80, libserver.so)  // inlines: ~CProtoBufSharedObject, ~CProtoBufSharedObjectBase, ~CSharedObject
// calls: CSODOTAMapLocationState::~CSODOTAMapLocationState
void __fastcall CDOTAMapLocationState::~CDOTAMapLocationState(CDOTAMapLocationState *const this)
{
  CSODOTAMapLocationState *v2; // rdi

  v2 = (this + 8);
  *(v2 - 1) = &off_42B4C50;
  CSODOTAMapLocationState::~CSODOTAMapLocationState(v2);
  *this = off_40DB630;
}


// CDOTAMapLocationState::~CDOTAMapLocationState  (line 63, @0x00000000027dfec0, libserver.so)  // inlines: ~CDOTAMapLocationState, ~CProtoBufSharedObject, ~CProtoBufSharedObjectBase, ~CSharedObject
// calls: CSODOTAMapLocationState::~CSODOTAMapLocationState, operator delete
void __fastcall CDOTAMapLocationState::~CDOTAMapLocationState(CDOTAMapLocationState *const this)
{
  CSODOTAMapLocationState *v2; // rdi

  v2 = (this + 8);
  *(v2 - 1) = &off_42B4C50;
  CSODOTAMapLocationState::~CSODOTAMapLocationState(v2);
  *this = off_40DB630;
  operator delete(this);
}


