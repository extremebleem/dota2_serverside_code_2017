
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTABehaviorCommandListener::~CDOTABehaviorCommandListener  (line 7, @0x0000000002882820, libserver.so)
// calls: Action<CDOTA_BaseNPC>::~Action
void __fastcall CDOTABehaviorCommandListener::~CDOTABehaviorCommandListener(CDOTABehaviorCommandListener *const this)
{
  this->_vptr_INextBotEventResponder = &off_42BC1B0;
  this->_vptr_IContextualQuery = &off_42BC5D0;
  Action<CDOTA_BaseNPC>::~Action(this);
}


// CDOTABehaviorCommandListener::~CDOTABehaviorCommandListener  (line 7, @0x00000000028834b0, libserver.so)  // inlines: ~CDOTABehaviorCommandListener
// calls: Action<CDOTA_BaseNPC>::~Action, operator delete
void __fastcall CDOTABehaviorCommandListener::~CDOTABehaviorCommandListener(CDOTABehaviorCommandListener *const this)
{
  this->_vptr_INextBotEventResponder = &off_42BC1B0;
  this->_vptr_IContextualQuery = &off_42BC5D0;
  Action<CDOTA_BaseNPC>::~Action(this);
  operator delete(this);
}


// CDOTABehaviorCommandListener::GetName  (line 26, @0x0000000002882490, libserver.so)
// strings: "CommandListener"
const char *__fastcall CDOTABehaviorCommandListener::GetName(const CDOTABehaviorCommandListener *const this)
{
  return "CommandListener";
}


