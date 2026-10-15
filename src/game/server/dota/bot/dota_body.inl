
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTABody::~CDOTABody  (line 14, @0x0000000002812020, libserver.so)  // inlines: ~IBody, ~INextBotComponent, ~INextBotEventResponder
void __fastcall CDOTABody::~CDOTABody(CDOTABody *const this)
{
  this->_vptr_INextBotEventResponder = &off_3F7A570;
}


// CDOTABody::~CDOTABody  (line 14, @0x00000000028124a0, libserver.so)  // inlines: ~CDOTABody, ~IBody, ~INextBotComponent, ~INextBotEventResponder
// calls: operator delete
void __fastcall CDOTABody::~CDOTABody(CDOTABody *const this)
{
  this->_vptr_INextBotEventResponder = &off_3F7A570;
  operator delete(this);
}


