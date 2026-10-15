
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTABehaviorGameEnd::~CDOTABehaviorGameEnd  (line 4, @0x0000000002894a10, libserver.so)
// calls: Action<CDOTA_BaseNPC>::~Action
void __fastcall CDOTABehaviorGameEnd::~CDOTABehaviorGameEnd(CDOTABehaviorGameEnd *const this)
{
  this->_vptr_INextBotEventResponder = &off_42C1030;
  this->_vptr_IContextualQuery = &off_42C1450;
  Action<CDOTA_BaseNPC>::~Action(this);
}


// CDOTABehaviorGameEnd::~CDOTABehaviorGameEnd  (line 4, @0x0000000002894c50, libserver.so)  // inlines: ~CDOTABehaviorGameEnd
// calls: Action<CDOTA_BaseNPC>::~Action, operator delete
void __fastcall CDOTABehaviorGameEnd::~CDOTABehaviorGameEnd(CDOTABehaviorGameEnd *const this)
{
  this->_vptr_INextBotEventResponder = &off_42C1030;
  this->_vptr_IContextualQuery = &off_42C1450;
  Action<CDOTA_BaseNPC>::~Action(this);
  operator delete(this);
}


// CDOTABehaviorGameEnd::GetName  (line 9, @0x0000000002894700, libserver.so)
const char *__fastcall CDOTABehaviorGameEnd::GetName(const CDOTABehaviorGameEnd *const this)
{
  return "GameEnd";
}


// CDOTABehaviorGameEnd::IsTopLevel  (line 11, @0x0000000002894710, libserver.so)
bool __fastcall CDOTABehaviorGameEnd::IsTopLevel(const CDOTABehaviorGameEnd *const this)
{
  return 1;
}


