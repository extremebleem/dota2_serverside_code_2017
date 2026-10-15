
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTABehaviorCommandCastHere::~CDOTABehaviorCommandCastHere  (line 9, @0x0000000002882850, libserver.so)  // inlines: ~CDOTABehaviorCommandListener
// calls: Action<CDOTA_BaseNPC>::~Action
void __fastcall CDOTABehaviorCommandCastHere::~CDOTABehaviorCommandCastHere(CDOTABehaviorCommandCastHere *const this)
{
  this->_vptr_INextBotEventResponder = &off_42BC1B0;
  this->_vptr_IContextualQuery = &off_42BC5D0;
  Action<CDOTA_BaseNPC>::~Action(this);
}


// CDOTABehaviorCommandCastHere::~CDOTABehaviorCommandCastHere  (line 9, @0x0000000002883530, libserver.so)  // inlines: ~CDOTABehaviorCommandCastHere, ~CDOTABehaviorCommandListener
// calls: Action<CDOTA_BaseNPC>::~Action, operator delete
void __fastcall CDOTABehaviorCommandCastHere::~CDOTABehaviorCommandCastHere(CDOTABehaviorCommandCastHere *const this)
{
  this->_vptr_INextBotEventResponder = &off_42BC1B0;
  this->_vptr_IContextualQuery = &off_42BC5D0;
  Action<CDOTA_BaseNPC>::~Action(this);
  operator delete(this);
}


// CDOTABehaviorCommandCastHere::GetName  (line 20, @0x00000000028824a0, libserver.so)
// strings: "CommandCastHere"
const char *__fastcall CDOTABehaviorCommandCastHere::GetName(const CDOTABehaviorCommandCastHere *const this)
{
  return "CommandCastHere";
}


