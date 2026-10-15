
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTABehaviorNeutralAggro::~CDOTABehaviorNeutralAggro  (line 7, @0x0000000002894940, libserver.so)
// calls: Action<CDOTA_BaseNPC>::~Action
void __fastcall CDOTABehaviorNeutralAggro::~CDOTABehaviorNeutralAggro(CDOTABehaviorNeutralAggro *const this)
{
  this->_vptr_INextBotEventResponder = &off_42C48F0;
  this->_vptr_IContextualQuery = &off_42C4D10;
  Action<CDOTA_BaseNPC>::~Action(this);
}


// CDOTABehaviorNeutralAggro::~CDOTABehaviorNeutralAggro  (line 7, @0x0000000002894b10, libserver.so)  // inlines: ~CDOTABehaviorNeutralAggro
// calls: Action<CDOTA_BaseNPC>::~Action, operator delete
void __fastcall CDOTABehaviorNeutralAggro::~CDOTABehaviorNeutralAggro(CDOTABehaviorNeutralAggro *const this)
{
  this->_vptr_INextBotEventResponder = &off_42C48F0;
  this->_vptr_IContextualQuery = &off_42C4D10;
  Action<CDOTA_BaseNPC>::~Action(this);
  operator delete(this);
}


// CDOTABehaviorNeutralAggro::GetName  (line 16, @0x0000000002894850, libserver.so)
// strings: "NeutralAggro"
const char *__fastcall CDOTABehaviorNeutralAggro::GetName(const CDOTABehaviorNeutralAggro *const this)
{
  return "NeutralAggro";
}


