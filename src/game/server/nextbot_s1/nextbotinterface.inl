
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// INextBot::IsRemovedOnReset  (line 54, @0x00000000026240b0, libserver.so)
bool __fastcall INextBot::IsRemovedOnReset(const INextBot *const this)
{
  return 1;
}


// INextBot::GetNextBotCombatCharacter  (line 57, @0x0000000002f36700, libserver.so)
NextBotCombatCharacter *__fastcall INextBot::GetNextBotCombatCharacter(const INextBot *const this)
{
  return 0;
}


// INextBot::IsAbleToBlockMovementOf  (line 97, @0x00000000026240c0, libserver.so)
bool __fastcall INextBot::IsAbleToBlockMovementOf(const INextBot *const this, const INextBot *botInMotion)
{
  return 1;
}


// INextBot::ShouldTouch  (line 102, @0x00000000026240d0, libserver.so)
bool __fastcall INextBot::ShouldTouch(const INextBot *const this, const CBaseEntity *object)
{
  return 1;
}


// INextBot::IsDebuggingOverride  (line 142, @0x0000000002f1d970, libserver.so)
bool __fastcall INextBot::IsDebuggingOverride(const INextBot *const this, unsigned int type)
{
  return 1;
}


// INextBot::GetLocomotionInterface  (line 193, @0x0000000002f1f4d0, libserver.so)
// calls: operator new, CLocomotionBase::CLocomotionBase, operator delete, _Unwind_Resume
CLocomotionBase *__fastcall INextBot::GetLocomotionInterface(const INextBot *const this)
{
  CLocomotionBase *result; // rax
  CLocomotionBase *v3; // r12

  result = this->m_baseLocomotion;
  if ( result == 0 )
  {
    v3 = operator new(0x90u);
    CLocomotionBase::CLocomotionBase(v3, this);
    this->m_baseLocomotion = v3;
    return v3;
  }
  return result;
}


// INextBot::GetBodyInterface  (line 208, @0x0000000002f1f530, libserver.so)  // inlines: IBody
// calls: operator new, INextBotComponent::INextBotComponent, operator delete, _Unwind_Resume
IBody *__fastcall INextBot::GetBodyInterface(const INextBot *const this)
{
  IBody *result; // rax
  IBody *v3; // r12

  result = this->m_baseBody;
  if ( result == 0 )
  {
    v3 = operator new(0x20u);
    INextBotComponent::INextBotComponent(v3, this);
    v3->_vptr_INextBotEventResponder = &off_47B4ED0;
    this->m_baseBody = v3;
    return v3;
  }
  return result;
}


// INextBot::GetIntentionInterface  (line 220, @0x0000000002f1f5a0, libserver.so)  // inlines: IIntention
// calls: operator new, INextBotComponent::INextBotComponent, operator delete, _Unwind_Resume
IIntention *__fastcall INextBot::GetIntentionInterface(const INextBot *const this)
{
  IIntention *result; // rax
  IIntention *v3; // r12

  result = this->m_baseIntention;
  if ( result == 0 )
  {
    v3 = operator new(0x28u);
    INextBotComponent::INextBotComponent(v3, this);
    v3->_vptr_INextBotEventResponder = &off_3F7AA10;
    v3->_vptr_IContextualQuery = &off_3F7AC70;
    this->m_baseIntention = v3;
    return v3;
  }
  return result;
}


// INextBot::GetVisionInterface  (line 232, @0x000000000262ee20, libserver.so)
// calls: operator new, IVision::IVision, operator delete, _Unwind_Resume
IVision *__fastcall INextBot::GetVisionInterface(const INextBot *const this)
{
  IVision *result; // rax
  IVision *v3; // r12

  result = this->m_baseVision;
  if ( result == 0 )
  {
    v3 = operator new(0x260u);
    IVision::IVision(v3, this);
    this->m_baseVision = v3;
    return v3;
  }
  return result;
}


// INextBot::IsImmobile  (line 279, @0x00000000026240e0, libserver.so)  // inlines: HasStarted, operator><float>
bool __fastcall INextBot::IsImmobile(const INextBot *const this)
{
  return this->m_immobileTimer.m_timestamp.m_Value > 0.0;
}


// INextBot::GetImmobileDuration  (line 286, @0x00000000026341c0, libserver.so)  // inlines: GetElapsedTime
// calls: IntervalTimer::Now
float __fastcall INextBot::GetImmobileDuration(const INextBot *const this)
{
  if ( this->m_immobileTimer.m_timestamp.m_Value <= 0.0 )
    return 99999.898;
  else
    return IntervalTimer::Now(&this->m_immobileTimer) - this->m_immobileTimer.m_timestamp.m_Value;
}


// INextBot::ClearImmobileStatus  (line 293, @0x00000000026340d0, libserver.so)  // inlines: Invalidate, NetworkStateChanged, Set, operator=, operator=<float>
// calls: CBaseEntity::GetAbsOrigin
void __fastcall INextBot::ClearImmobileStatus(INextBot *const this)
{
  __int64 v2; // xmm0_8
  const CBaseEntity *v3; // rax

  v2 = 3212836864LL;
  if ( this->m_immobileTimer.m_timestamp.m_Value != -1.0 )
  {
    (*(this->m_immobileTimer._vptr_IntervalTimer + 2))(&this->m_immobileTimer, 8, 0xFFFFFFFFLL, 0xFFFFFFFFLL, -1.0);
    this->m_immobileTimer.m_timestamp.m_Value = -1.0;
  }
  v3 = (*(this->_vptr_INextBotEventResponder + 66))(this, *&v2);
  this->m_immobileAnchor = *CBaseEntity::GetAbsOrigin(v3);
}


// INextBot::GetImmobileSpeedThreshold  (line 301, @0x0000000002624100, libserver.so)
float __fastcall INextBot::GetImmobileSpeedThreshold(const INextBot *const this)
{
  return 30.0;
}


// INextBot::FirstContainedResponder  (line 308, @0x0000000002624110, libserver.so)
INextBotEventResponder *__fastcall INextBot::FirstContainedResponder(const INextBot *const this)
{
  return this->m_componentList;
}


// INextBot::NextContainedResponder  (line 315, @0x0000000002624120, libserver.so)
INextBotEventResponder *__fastcall INextBot::NextContainedResponder(
        const INextBot *const this,
        INextBotEventResponder *current)
{
  return current[3]._vptr_INextBotEventResponder;
}


// INextBot::GetCurrentPath  (line 322, @0x0000000002624130, libserver.so)
const CPathFollower *__fastcall INextBot::GetCurrentPath(const INextBot *const this)
{
  return this->m_pCurrentPath;
}


// INextBot::SetCurrentPath  (line 329, @0x0000000002624140, libserver.so)
void __fastcall INextBot::SetCurrentPath(INextBot *const this, const CPathFollower *path)
{
  this->m_pCurrentPath = path;
}


// INextBot::NotifyPathDestruction  (line 336, @0x0000000002624150, libserver.so)
void __fastcall INextBot::NotifyPathDestruction(INextBot *const this, const CPathFollower *path)
{
  if ( this->m_pCurrentPath == path )
    this->m_pCurrentPath = 0;
}


