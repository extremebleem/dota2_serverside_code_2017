
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTABehaviorAbility::~CDOTABehaviorAbility  (line 9, @0x00000000028828e0, libserver.so)
// calls: Action<CDOTA_BaseNPC>::~Action
void __fastcall CDOTABehaviorAbility::~CDOTABehaviorAbility(CDOTABehaviorAbility *const this)
{
  this->_vptr_INextBotEventResponder = &off_42BA0F0;
  this->_vptr_IContextualQuery = &off_42BA510;
  Action<CDOTA_BaseNPC>::~Action(this);
}


// CDOTABehaviorAbility::~CDOTABehaviorAbility  (line 9, @0x0000000002883620, libserver.so)  // inlines: ~CDOTABehaviorAbility
// calls: Action<CDOTA_BaseNPC>::~Action, operator delete
void __fastcall CDOTABehaviorAbility::~CDOTABehaviorAbility(CDOTABehaviorAbility *const this)
{
  this->_vptr_INextBotEventResponder = &off_42BA0F0;
  this->_vptr_IContextualQuery = &off_42BA510;
  Action<CDOTA_BaseNPC>::~Action(this);
  operator delete(this);
}


// CDOTABehaviorAbility::GetName  (line 22, @0x0000000002882400, libserver.so)
const char *__fastcall CDOTABehaviorAbility::GetName(const CDOTABehaviorAbility *const this)
{
  return "Ability";
}


