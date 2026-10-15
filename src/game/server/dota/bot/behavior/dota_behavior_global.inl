
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTABehavior::~CDOTABehavior  (line 7, @0x00000000028949e0, libserver.so)
// calls: Action<CDOTA_BaseNPC>::~Action
void __fastcall CDOTABehavior::~CDOTABehavior(CDOTABehavior *const this)
{
  this->_vptr_INextBotEventResponder = &off_42C14D0;
  this->_vptr_IContextualQuery = &off_42C18F0;
  Action<CDOTA_BaseNPC>::~Action(this);
}


// CDOTABehavior::~CDOTABehavior  (line 7, @0x0000000002894c00, libserver.so)  // inlines: ~CDOTABehavior
// calls: Action<CDOTA_BaseNPC>::~Action, operator delete
void __fastcall CDOTABehavior::~CDOTABehavior(CDOTABehavior *const this)
{
  this->_vptr_INextBotEventResponder = &off_42C14D0;
  this->_vptr_IContextualQuery = &off_42C18F0;
  Action<CDOTA_BaseNPC>::~Action(this);
  operator delete(this);
}


// CDOTABehavior::GetName  (line 17, @0x0000000002894720, libserver.so)
const char *__fastcall CDOTABehavior::GetName(const CDOTABehavior *const this)
{
  return "Behavior";
}


// CDOTABehavior::IsTopLevel  (line 19, @0x0000000002894730, libserver.so)
bool __fastcall CDOTABehavior::IsTopLevel(const CDOTABehavior *const this)
{
  return 1;
}


