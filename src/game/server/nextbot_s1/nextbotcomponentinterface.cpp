
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// INextBotComponent::INextBotComponent  (line 21, @0x0000000002f32820, libserver.so)  // inlines: RegisterComponent
// callers: CDOTABody::CDOTABody, CDOTA_BaseNPC::CDOTA_BaseNPCIntention::CDOTA_BaseNPCIntention, INextBot::GetBodyInterface, INextBot::GetIntentionInterface, CSimpleBot::CSimpleBotIntention::CSimpleBotIntention, PlayerBody::PlayerBody
void __fastcall INextBotComponent::INextBotComponent(INextBotComponent *const this, INextBot *bot)
{
  float interval_per_tick; // xmm0_4

  this->_vptr_INextBotEventResponder = &off_3F7A770;
  interval_per_tick = gpGlobals->interval_per_tick;
  this->m_lastUpdateTime = 0.0;
  this->m_bot = bot;
  this->m_curInterval = interval_per_tick;
  this->m_nextComponent = bot->m_componentList;
  bot->m_componentList = this;
}


// INextBotComponent::ComputeUpdateInterval  (line 33, @0x0000000002f32860, libserver.so)
__int64 __fastcall INextBotComponent::ComputeUpdateInterval(
        INextBotComponent *const this,
        float a2,
        float flCurrentGameTime)
{
  float m_lastUpdateTime; // xmm1_4
  __int64 result; // rax

  m_lastUpdateTime = this->m_lastUpdateTime;
  if ( m_lastUpdateTime == 0.0 )
  {
    this->m_curInterval = 0.033;
    this->m_lastUpdateTime = a2 - 0.033;
    return 1;
  }
  else
  {
    result = 0;
    if ( (a2 - m_lastUpdateTime) > 0.000099999997 )
    {
      this->m_curInterval = a2 - m_lastUpdateTime;
      result = 1;
      this->m_lastUpdateTime = a2;
    }
  }
  return result;
}


