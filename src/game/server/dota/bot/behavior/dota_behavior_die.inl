
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTABehaviorDie::~CDOTABehaviorDie  (line 7, @0x0000000002894a40, libserver.so)
// calls: Action<CDOTA_BaseNPC>::~Action
void __fastcall CDOTABehaviorDie::~CDOTABehaviorDie(CDOTABehaviorDie *const this)
{
  this->_vptr_INextBotEventResponder = &off_42C0B90;
  this->_vptr_IContextualQuery = &off_42C0FB0;
  Action<CDOTA_BaseNPC>::~Action(this);
}


// CDOTABehaviorDie::~CDOTABehaviorDie  (line 7, @0x0000000002894ca0, libserver.so)  // inlines: ~CDOTABehaviorDie
// calls: Action<CDOTA_BaseNPC>::~Action, operator delete
void __fastcall CDOTABehaviorDie::~CDOTABehaviorDie(CDOTABehaviorDie *const this)
{
  this->_vptr_INextBotEventResponder = &off_42C0B90;
  this->_vptr_IContextualQuery = &off_42C0FB0;
  Action<CDOTA_BaseNPC>::~Action(this);
  operator delete(this);
}


// CDOTABehaviorDie::GetName  (line 13, @0x00000000028946e0, libserver.so)
const char *__fastcall CDOTABehaviorDie::GetName(const CDOTABehaviorDie *const this)
{
  return &unk_3400978;
}


// CDOTABehaviorDie::IsTopLevel  (line 15, @0x00000000028946f0, libserver.so)
bool __fastcall CDOTABehaviorDie::IsTopLevel(const CDOTABehaviorDie *const this)
{
  return 1;
}


