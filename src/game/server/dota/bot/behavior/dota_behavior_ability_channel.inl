
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTABehaviorAbilityChannel::~CDOTABehaviorAbilityChannel  (line 7, @0x00000000028828b0, libserver.so)
// calls: Action<CDOTA_BaseNPC>::~Action
void __fastcall CDOTABehaviorAbilityChannel::~CDOTABehaviorAbilityChannel(CDOTABehaviorAbilityChannel *const this)
{
  this->_vptr_INextBotEventResponder = &off_42BA590;
  this->_vptr_IContextualQuery = &off_42BA9B0;
  Action<CDOTA_BaseNPC>::~Action(this);
}


// CDOTABehaviorAbilityChannel::~CDOTABehaviorAbilityChannel  (line 7, @0x00000000028835d0, libserver.so)  // inlines: ~CDOTABehaviorAbilityChannel
// calls: Action<CDOTA_BaseNPC>::~Action, operator delete
void __fastcall CDOTABehaviorAbilityChannel::~CDOTABehaviorAbilityChannel(CDOTABehaviorAbilityChannel *const this)
{
  this->_vptr_INextBotEventResponder = &off_42BA590;
  this->_vptr_IContextualQuery = &off_42BA9B0;
  Action<CDOTA_BaseNPC>::~Action(this);
  operator delete(this);
}


// CDOTABehaviorAbilityChannel::GetName  (line 16, @0x0000000002882420, libserver.so)
// strings: "AbilityChannel"
const char *__fastcall CDOTABehaviorAbilityChannel::GetName(const CDOTABehaviorAbilityChannel *const this)
{
  return "AbilityChannel";
}


