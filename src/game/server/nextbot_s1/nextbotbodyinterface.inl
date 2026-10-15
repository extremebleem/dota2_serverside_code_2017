
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// IBody::Schema_DynamicBinding  (line 65, @0x00000000028124c0, libserver.so)
// calls: IBody::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall IBody::Schema_DynamicBinding(const IBody *const this)
{
  IBody::Schema_VerifyBindingIsRegistered();
  return IBody::s_pSchemaBinding;
}


// IBody::~IBody  (line 69, @0x0000000002f365f0, libserver.so)  // inlines: ~INextBotComponent, ~INextBotEventResponder
void __fastcall IBody::~IBody(IBody *const this)
{
  this->_vptr_INextBotEventResponder = &off_3F7A570;
}


// IBody::~IBody  (line 69, @0x0000000002f36ac0, libserver.so)  // inlines: ~IBody, ~INextBotComponent, ~INextBotEventResponder
// calls: operator delete
void __fastcall IBody::~IBody(IBody *const this)
{
  this->_vptr_INextBotEventResponder = &off_3F7A570;
  operator delete(this);
}


// IBody::Reset  (line 74, @0x0000000002f36600, libserver.so)  // inlines: Reset
void __fastcall IBody::Reset(IBody *const this)
{
  this->m_lastUpdateTime = 0.0;
  this->m_curInterval = gpGlobals->interval_per_tick;
}


// IBody::Update  (line 75, @0x0000000002f36630, libserver.so)
void __fastcall IBody::Update(IBody *const this)
{
  ;
}


// IBody::GetName  (line 76, @0x00000000028118d0, libserver.so)
// strings: "IBody"
const char *__fastcall IBody::GetName(IBody *const this)
{
  return "IBody";
}


// IBody::SetDesiredPosture  (line 127, @0x00000000028118e0, libserver.so)
void __fastcall IBody::SetDesiredPosture(IBody *const this, IBody::PostureType posture)
{
  ;
}


// IBody::SetArousal  (line 145, @0x00000000028118f0, libserver.so)
void __fastcall IBody::SetArousal(IBody *const this, IBody::ArousalType arousal)
{
  ;
}


// IBody::GetEntity  (line 158, @0x0000000002811900, libserver.so)
CBaseEntity *__fastcall IBody::GetEntity(IBody *const this)
{
  return 0;
}


// IBody::AimHeadTowards  (line 171, @0x0000000002811910, libserver.so)
void __fastcall IBody::AimHeadTowards(
        IBody *const this,
        const Vector *const vLookAtPos,
        const CHeadLookParams *const lookParams)
{
  INextBotReply *m_pReplyWhenAimed; // rax

  m_pReplyWhenAimed = lookParams->m_pReplyWhenAimed;
  if ( m_pReplyWhenAimed != 0 )
    (*(m_pReplyWhenAimed->_vptr_INextBotReply + 2))(lookParams->m_pReplyWhenAimed, this->m_bot, 2);
}


// IBody::AimHeadTowards  (line 181, @0x0000000002811940, libserver.so)
void __fastcall IBody::AimHeadTowards(
        IBody *const this,
        const CBaseEntity *const rSubjectEntity,
        const CHeadLookParams *const lookParams)
{
  INextBotReply *m_pReplyWhenAimed; // rax

  m_pReplyWhenAimed = lookParams->m_pReplyWhenAimed;
  if ( m_pReplyWhenAimed != 0 )
    (*(m_pReplyWhenAimed->_vptr_INextBotReply + 2))(lookParams->m_pReplyWhenAimed, this->m_bot, 2);
}


// IBody::IsHeadSteady  (line 191, @0x0000000002811970, libserver.so)
bool __fastcall IBody::IsHeadSteady(const IBody *const this)
{
  return 1;
}


// IBody::GetHeadSteadyDuration  (line 198, @0x0000000002811980, libserver.so)
float __fastcall IBody::GetHeadSteadyDuration(const IBody *const this)
{
  return 0.0;
}


// IBody::GetHeadAimSubjectLeadTime  (line 205, @0x0000000002811990, libserver.so)
float __fastcall IBody::GetHeadAimSubjectLeadTime(const IBody *const this)
{
  return 0.0;
}


// IBody::GetHeadAimTrackingInterval  (line 212, @0x00000000028119a0, libserver.so)
float __fastcall IBody::GetHeadAimTrackingInterval(const IBody *const this)
{
  return 0.0;
}


// IBody::GetMaxHeadAngularVelocity  (line 219, @0x00000000028119b0, libserver.so)
float __fastcall IBody::GetMaxHeadAngularVelocity(const IBody *const this)
{
  return 100.0;
}


// IBody::StartActivity  (line 226, @0x00000000028119c0, libserver.so)
bool __fastcall IBody::StartActivity(IBody *const this, Activity act, unsigned int flags)
{
  return 0;
}


// IBody::SelectAnimationSequence  (line 233, @0x00000000028119d0, libserver.so)
HSequence __fastcall IBody::SelectAnimationSequence(const IBody *const this, Activity act)
{
  return 0;
}


// IBody::GetActivity  (line 240, @0x00000000028119e0, libserver.so)
Activity __fastcall IBody::GetActivity(const IBody *const this)
{
  return -1;
}


// IBody::IsActivity  (line 247, @0x00000000028119f0, libserver.so)
bool __fastcall IBody::IsActivity(const IBody *const this, Activity act)
{
  return 0;
}


// IBody::HasActivityType  (line 254, @0x0000000002811a00, libserver.so)
bool __fastcall IBody::HasActivityType(const IBody *const this, unsigned int flags)
{
  return 0;
}


// IBody::GetDesiredPosture  (line 261, @0x0000000002811a10, libserver.so)
IBody::PostureType __fastcall IBody::GetDesiredPosture(const IBody *const this)
{
  return IBody::PostureType::STAND;
}


// IBody::IsDesiredPosture  (line 268, @0x0000000002811a20, libserver.so)
bool __fastcall IBody::IsDesiredPosture(const IBody *const this, IBody::PostureType posture)
{
  return 1;
}


// IBody::IsInDesiredPosture  (line 275, @0x0000000002811a30, libserver.so)
bool __fastcall IBody::IsInDesiredPosture(const IBody *const this)
{
  return 1;
}


// IBody::GetActualPosture  (line 282, @0x0000000002811a40, libserver.so)
IBody::PostureType __fastcall IBody::GetActualPosture(const IBody *const this)
{
  return IBody::PostureType::STAND;
}


// IBody::IsActualPosture  (line 289, @0x0000000002811a50, libserver.so)
bool __fastcall IBody::IsActualPosture(const IBody *const this, IBody::PostureType posture)
{
  return 1;
}


// IBody::IsPostureMobile  (line 296, @0x0000000002811a60, libserver.so)
bool __fastcall IBody::IsPostureMobile(const IBody *const this)
{
  return 1;
}


// IBody::IsPostureChanging  (line 303, @0x0000000002811a70, libserver.so)
bool __fastcall IBody::IsPostureChanging(const IBody *const this)
{
  return 0;
}


// IBody::GetArousal  (line 310, @0x0000000002811a80, libserver.so)
IBody::ArousalType __fastcall IBody::GetArousal(const IBody *const this)
{
  return IBody::ArousalType::NEUTRAL;
}


// IBody::IsArousal  (line 317, @0x0000000002811a90, libserver.so)
bool __fastcall IBody::IsArousal(const IBody *const this, IBody::ArousalType arousal)
{
  return 1;
}


// IBody::GetHullWidth  (line 324, @0x0000000002f36640, libserver.so)
float __fastcall IBody::GetHullWidth(const IBody *const this)
{
  return 26.0;
}


// IBody::GetHullHeight  (line 331, @0x0000000002f36ef0, libserver.so)
float __fastcall IBody::GetHullHeight(const IBody *const this)
{
  int v2; // eax

  v2 = (*(this->_vptr_INextBotEventResponder + 86))(this);
  if ( v2 < 1 )
    return (*(this->_vptr_INextBotEventResponder + 95))(this);
  if ( v2 > 2 )
  {
    if ( v2 == 4 )
      return 16.0;
    return (*(this->_vptr_INextBotEventResponder + 95))(this);
  }
  return (*(this->_vptr_INextBotEventResponder + 96))(this);
}


// IBody::GetStandHullHeight  (line 350, @0x0000000002f36650, libserver.so)
float __fastcall IBody::GetStandHullHeight(const IBody *const this)
{
  return 68.0;
}


// IBody::GetCrouchHullHeight  (line 357, @0x0000000002f36660, libserver.so)
float __fastcall IBody::GetCrouchHullHeight(const IBody *const this)
{
  return 32.0;
}


// IBody::GetHullMins  (line 364, @0x0000000002f36d90, libserver.so)
// calls: __cxa_guard_acquire, __cxa_guard_release
// globals: `guard variable for'IBody::GetHullMins(void)::hullMins, IBody::GetHullMins(void)::hullMins
const Vector *__fastcall IBody::GetHullMins(const IBody *const this)
{
  float v2; // xmm0_4

  if ( `guard variable for'IBody::GetHullMins(void)::hullMins == 0
    && __cxa_guard_acquire(&`guard variable for'IBody::GetHullMins(void)::hullMins) != 0 )
  {
    __cxa_guard_release(&`guard variable for'IBody::GetHullMins(void)::hullMins);
  }
  v2 = (*(this->_vptr_INextBotEventResponder + 93))(this);
  IBody::GetHullMins(void)const::hullMins.z = 0.0;
  IBody::GetHullMins(void)const::hullMins.x = -v2 * 0.5;
  IBody::GetHullMins(void)const::hullMins.y = -v2 * 0.5;
  return &IBody::GetHullMins(void)const::hullMins;
}


// IBody::GetHullMaxs  (line 377, @0x0000000002f36e10, libserver.so)
// calls: __cxa_guard_acquire, __cxa_guard_release
// globals: `guard variable for'IBody::GetHullMaxs(void)::hullMaxs, IBody::GetHullMaxs(void)::hullMaxs
const Vector *__fastcall IBody::GetHullMaxs(const IBody *const this)
{
  if ( `guard variable for'IBody::GetHullMaxs(void)::hullMaxs == 0
    && __cxa_guard_acquire(&`guard variable for'IBody::GetHullMaxs(void)::hullMaxs) != 0 )
  {
    __cxa_guard_release(&`guard variable for'IBody::GetHullMaxs(void)::hullMaxs);
  }
  IBody::GetHullMaxs(void)const::hullMaxs.x = (*(this->_vptr_INextBotEventResponder + 93))(this) * 0.5;
  IBody::GetHullMaxs(void)const::hullMaxs.y = IBody::GetHullMaxs(void)const::hullMaxs.x;
  IBody::GetHullMaxs(void)const::hullMaxs.z = (*(this->_vptr_INextBotEventResponder + 94))(this);
  return &IBody::GetHullMaxs(void)const::hullMaxs;
}


// IBody::GetSolidMask  (line 390, @0x0000000002f36670, libserver.so)
uint64 __fastcall IBody::GetSolidMask(const IBody *const this)
{
  return 552993;
}


