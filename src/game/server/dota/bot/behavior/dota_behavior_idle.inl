
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTABehaviorIdle::CDOTABehaviorIdle  (line 9, @0x0000000002884030, libserver.so)  // inlines: Action, CDOTABehaviorCommandListener, EventDesiredResult, IActionResult, ~CDOTABehaviorCommandListener
// calls: CountdownTimer::CountdownTimer, Action<CDOTA_BaseNPC>::~Action, _Unwind_Resume
// callers: CDOTABehaviorCommandMoveToPositionToCast::Update, CDOTABehaviorChase::OnStart, CDOTABehaviorCommandMoveToNPC::UpdateTargetMissing, CDOTABehaviorCommandMoveToNPCToGive::Update, CDOTABehaviorCompanion::Update, CDOTABehaviorCommandMoveToTargetToAttack::OnStart, CDOTABehaviorCommandMoveToTargetToAttack::UpdateTargetMissing, CDOTABehaviorCommandMoveToTargetToCast::OnStart, CDOTABehaviorCommandMoveToTargetToCast::UpdateTargetMissing, CDOTABehaviorCommandMoveToTargetToCast::Update, CDOTABehaviorCommandMoveToNPC::Update, CDOTABehaviorCommandMoveToTargetToAttack::Update (17 total)
void __fastcall CDOTABehaviorIdle::CDOTABehaviorIdle(CDOTABehaviorIdle *const this)
{
  CountdownTimer *p_m_IdleRareAnimationTime; // rdi

  this->m_eventResult.m_type = ActionResultType::CONTINUE;
  p_m_IdleRareAnimationTime = &this->m_IdleRareAnimationTime;
  *&p_m_IdleRareAnimationTime[-2].m_bUseGlobalsTime = 0;
  p_m_IdleRareAnimationTime[-1]._vptr_CountdownTimer = 0;
  *&p_m_IdleRareAnimationTime[-4].m_bUseGlobalsTime = 0;
  p_m_IdleRareAnimationTime[-3]._vptr_CountdownTimer = 0;
  *&p_m_IdleRareAnimationTime[-3].m_duration.m_Value = 0;
  *&p_m_IdleRareAnimationTime[-3].m_bUseGlobalsTime = 0;
  p_m_IdleRareAnimationTime[-2]._vptr_CountdownTimer = 0;
  *&p_m_IdleRareAnimationTime[-4].m_duration.m_Value = 0;
  p_m_IdleRareAnimationTime[-1].m_bUseGlobalsTime = 0;
  *(&p_m_IdleRareAnimationTime[-1].m_bUseGlobalsTime + 1) = 0;
  p_m_IdleRareAnimationTime[-1].m_duration.m_Value = 0.0;
  *&p_m_IdleRareAnimationTime[-5].m_bUseGlobalsTime = &off_42C1970;
  p_m_IdleRareAnimationTime[-4]._vptr_CountdownTimer = &off_42C1DA0;
  CountdownTimer::CountdownTimer(p_m_IdleRareAnimationTime);
}


// CDOTABehaviorIdle::~CDOTABehaviorIdle  (line 9, @0x00000000028948c0, libserver.so)  // inlines: ~CDOTABehaviorCommandListener
// calls: Action<CDOTA_BaseNPC>::~Action
void __fastcall CDOTABehaviorIdle::~CDOTABehaviorIdle(CDOTABehaviorIdle *const this)
{
  this->_vptr_INextBotEventResponder = &off_42BC1B0;
  this->_vptr_IContextualQuery = &off_42BC5D0;
  Action<CDOTA_BaseNPC>::~Action(this);
}


// CDOTABehaviorIdle::~CDOTABehaviorIdle  (line 9, @0x0000000002894a70, libserver.so)  // inlines: ~CDOTABehaviorCommandListener, ~CDOTABehaviorIdle
// calls: Action<CDOTA_BaseNPC>::~Action, operator delete
void __fastcall CDOTABehaviorIdle::~CDOTABehaviorIdle(CDOTABehaviorIdle *const this)
{
  this->_vptr_INextBotEventResponder = &off_42BC1B0;
  this->_vptr_IContextualQuery = &off_42BC5D0;
  Action<CDOTA_BaseNPC>::~Action(this);
  operator delete(this);
}


// CDOTABehaviorIdle::GetName  (line 18, @0x0000000002894740, libserver.so)
const char *__fastcall CDOTABehaviorIdle::GetName(const CDOTABehaviorIdle *const this)
{
  return "Idle";
}


// CDOTABehaviorTutorialIdle::~CDOTABehaviorTutorialIdle  (line 33, @0x0000000002894900, libserver.so)  // inlines: ~CDOTABehaviorCommandListener, ~CDOTABehaviorIdle
// calls: Action<CDOTA_BaseNPC>::~Action
void __fastcall CDOTABehaviorTutorialIdle::~CDOTABehaviorTutorialIdle(CDOTABehaviorTutorialIdle *const this)
{
  this->_vptr_INextBotEventResponder = &off_42BC1B0;
  this->_vptr_IContextualQuery = &off_42BC5D0;
  Action<CDOTA_BaseNPC>::~Action(this);
}


// CDOTABehaviorTutorialIdle::~CDOTABehaviorTutorialIdle  (line 33, @0x0000000002894ac0, libserver.so)  // inlines: ~CDOTABehaviorCommandListener, ~CDOTABehaviorIdle, ~CDOTABehaviorTutorialIdle
// calls: Action<CDOTA_BaseNPC>::~Action, operator delete
void __fastcall CDOTABehaviorTutorialIdle::~CDOTABehaviorTutorialIdle(CDOTABehaviorTutorialIdle *const this)
{
  this->_vptr_INextBotEventResponder = &off_42BC1B0;
  this->_vptr_IContextualQuery = &off_42BC5D0;
  Action<CDOTA_BaseNPC>::~Action(this);
  operator delete(this);
}


// CDOTABehaviorTutorialVictory::~CDOTABehaviorTutorialVictory  (line 49, @0x00000000028949b0, libserver.so)
// calls: Action<CDOTA_BaseNPC>::~Action
void __fastcall CDOTABehaviorTutorialVictory::~CDOTABehaviorTutorialVictory(CDOTABehaviorTutorialVictory *const this)
{
  this->_vptr_INextBotEventResponder = &off_42C22B0;
  this->_vptr_IContextualQuery = &off_42C26D0;
  Action<CDOTA_BaseNPC>::~Action(this);
}


// CDOTABehaviorTutorialVictory::~CDOTABehaviorTutorialVictory  (line 49, @0x0000000002894bb0, libserver.so)  // inlines: ~CDOTABehaviorTutorialVictory
// calls: Action<CDOTA_BaseNPC>::~Action, operator delete
void __fastcall CDOTABehaviorTutorialVictory::~CDOTABehaviorTutorialVictory(CDOTABehaviorTutorialVictory *const this)
{
  this->_vptr_INextBotEventResponder = &off_42C22B0;
  this->_vptr_IContextualQuery = &off_42C26D0;
  Action<CDOTA_BaseNPC>::~Action(this);
  operator delete(this);
}


// CDOTABehaviorTutorialVictory::GetName  (line 55, @0x0000000002894750, libserver.so)
const char *__fastcall CDOTABehaviorTutorialVictory::GetName(const CDOTABehaviorTutorialVictory *const this)
{
  return "Victory";
}


// CDOTABehaviorRoquelaireIdle::~CDOTABehaviorRoquelaireIdle  (line 65, @0x0000000002894970, libserver.so)  // inlines: ~CDOTABehaviorCommandListener, ~CDOTABehaviorIdle, ~CDOTABehaviorTutorialIdle
// calls: Action<CDOTA_BaseNPC>::~Action
void __fastcall CDOTABehaviorRoquelaireIdle::~CDOTABehaviorRoquelaireIdle(CDOTABehaviorRoquelaireIdle *const this)
{
  this->_vptr_INextBotEventResponder = &off_42BC1B0;
  this->_vptr_IContextualQuery = &off_42BC5D0;
  Action<CDOTA_BaseNPC>::~Action(this);
}


// CDOTABehaviorRoquelaireIdle::~CDOTABehaviorRoquelaireIdle  (line 65, @0x0000000002894b60, libserver.so)  // inlines: ~CDOTABehaviorCommandListener, ~CDOTABehaviorIdle, ~CDOTABehaviorRoquelaireIdle, ~CDOTABehaviorTutorialIdle
// calls: Action<CDOTA_BaseNPC>::~Action, operator delete
void __fastcall CDOTABehaviorRoquelaireIdle::~CDOTABehaviorRoquelaireIdle(CDOTABehaviorRoquelaireIdle *const this)
{
  this->_vptr_INextBotEventResponder = &off_42BC1B0;
  this->_vptr_IContextualQuery = &off_42BC5D0;
  Action<CDOTA_BaseNPC>::~Action(this);
  operator delete(this);
}


