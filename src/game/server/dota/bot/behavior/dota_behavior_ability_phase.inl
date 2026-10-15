
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTABehaviorAbilityPhase::~CDOTABehaviorAbilityPhase  (line 7, @0x0000000002882880, libserver.so)
// calls: Action<CDOTA_BaseNPC>::~Action
void __fastcall CDOTABehaviorAbilityPhase::~CDOTABehaviorAbilityPhase(CDOTABehaviorAbilityPhase *const this)
{
  this->_vptr_INextBotEventResponder = &off_42BAA30;
  this->_vptr_IContextualQuery = &off_42BAE58;
  Action<CDOTA_BaseNPC>::~Action(this);
}


// CDOTABehaviorAbilityPhase::~CDOTABehaviorAbilityPhase  (line 7, @0x0000000002883580, libserver.so)  // inlines: ~CDOTABehaviorAbilityPhase
// calls: Action<CDOTA_BaseNPC>::~Action, operator delete
void __fastcall CDOTABehaviorAbilityPhase::~CDOTABehaviorAbilityPhase(CDOTABehaviorAbilityPhase *const this)
{
  this->_vptr_INextBotEventResponder = &off_42BAA30;
  this->_vptr_IContextualQuery = &off_42BAE58;
  Action<CDOTA_BaseNPC>::~Action(this);
  operator delete(this);
}


// CDOTABehaviorAbilityPhase::GetName  (line 18, @0x0000000002882410, libserver.so)
const char *__fastcall CDOTABehaviorAbilityPhase::GetName(const CDOTABehaviorAbilityPhase *const this)
{
  return "AbilityPhase";
}


