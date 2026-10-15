
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// INextBotReply::Schema_DynamicBinding  (line 23, @0x0000000002f36560, libserver.so)
// globals: INextBotReply::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall INextBotReply::Schema_DynamicBinding(const INextBotReply *const this)
{
  return INextBotReply::s_pSchemaBinding;
}


// INextBotReply::OnSuccess  (line 25, @0x0000000002f36570, libserver.so)
void __fastcall INextBotReply::OnSuccess(INextBotReply *const this, INextBot *bot)
{
  ;
}


// INextBotReply::OnFail  (line 33, @0x0000000002f36580, libserver.so)
void __fastcall INextBotReply::OnFail(INextBotReply *const this, INextBot *bot, INextBotReply::FailureReason reason)
{
  ;
}


// INextBotComponent::Schema_DynamicBinding  (line 43, @0x0000000001b3a800, libserver.so)
// calls: INextBotComponent::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall INextBotComponent::Schema_DynamicBinding(const INextBotComponent *const this)
{
  INextBotComponent::Schema_VerifyBindingIsRegistered();
  return INextBotComponent::s_pSchemaBinding;
}


// INextBotComponent::~INextBotComponent  (line 46, @0x0000000001b39ff0, libserver.so)  // inlines: ~INextBotEventResponder
void __fastcall INextBotComponent::~INextBotComponent(INextBotComponent *const this)
{
  this->_vptr_INextBotEventResponder = &off_3F7A570;
}


// INextBotComponent::~INextBotComponent  (line 46, @0x0000000001b3a380, libserver.so)  // inlines: ~INextBotComponent, ~INextBotEventResponder
// calls: operator delete
void __fastcall INextBotComponent::~INextBotComponent(INextBotComponent *const this)
{
  this->_vptr_INextBotEventResponder = &off_3F7A570;
  operator delete(this);
}


// INextBotComponent::Reset  (line 51, @0x0000000001b3a000, libserver.so)
void __fastcall INextBotComponent::Reset(INextBotComponent *const this)
{
  this->m_lastUpdateTime = 0.0;
  this->m_curInterval = gpGlobals->interval_per_tick;
}


// INextBotComponent::Upkeep  (line 53, @0x0000000001b3a030, libserver.so)
void __fastcall INextBotComponent::Upkeep(INextBotComponent *const this)
{
  ;
}


