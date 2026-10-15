
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// IBody::SetPosition  (line 12, @0x0000000002f2e530, libserver.so)
// calls: CBaseEntity::SetAbsOrigin
bool __fastcall IBody::SetPosition(IBody *const this, const Vector *const pos)
{
  CBaseEntity *v3; // rax

  v3 = (*(this->m_bot->INextBotComponent::_vptr_INextBotEventResponder + 66))(this->m_bot);
  CBaseEntity::SetAbsOrigin(v3, pos);
  return 1;
}


// IBody::GetEyePosition  (line 18, @0x0000000002f2e4a0, libserver.so)  // inlines: operator=
// calls: __cxa_guard_acquire, __cxa_guard_release
// globals: `guard variable for'IBody::GetEyePosition(void)::eye, IBody::GetEyePosition(void)::eye
const Vector *__fastcall IBody::GetEyePosition(const IBody *const this)
{
  __int64 v2; // rax
  double v3; // xmm0_8
  vec_t v5; // xmm1_4

  if ( `guard variable for'IBody::GetEyePosition(void)::eye == 0
    && __cxa_guard_acquire(&`guard variable for'IBody::GetEyePosition(void)::eye) != 0 )
  {
    __cxa_guard_release(&`guard variable for'IBody::GetEyePosition(void)::eye);
  }
  v2 = (*(this->m_bot->INextBotComponent::_vptr_INextBotEventResponder + 66))(this->m_bot);
  v3 = (*(*v2 + 496LL))(v2);
  IBody::GetEyePosition(void)const::eye.z = v5;
  *&IBody::GetEyePosition(void)const::eye.x = v3;
  return &IBody::GetEyePosition(void)const::eye;
}


// IBody::GetViewVector  (line 27, @0x0000000002f2e560, libserver.so)
// calls: AngleVectors, __cxa_guard_acquire, __cxa_guard_release
// globals: `guard variable for'IBody::GetViewVector(void)::view, IBody::GetViewVector(void)::view
const Vector *__fastcall IBody::GetViewVector(const IBody *const this)
{
  __int64 v2; // rax
  const QAngle *v3; // rax

  if ( `guard variable for'IBody::GetViewVector(void)::view == 0
    && __cxa_guard_acquire(&`guard variable for'IBody::GetViewVector(void)::view) != 0 )
  {
    __cxa_guard_release(&`guard variable for'IBody::GetViewVector(void)::view);
  }
  v2 = (*(this->m_bot->INextBotComponent::_vptr_INextBotEventResponder + 66))(this->m_bot);
  v3 = (*(*v2 + 1320LL))(v2);
  AngleVectors(v3, &IBody::GetViewVector(void)const::view, 0, 0);
  return &IBody::GetViewVector(void)const::view;
}


// IBody::IsHeadAimingOnTarget  (line 36, @0x0000000002f2dfd0, libserver.so)
bool __fastcall IBody::IsHeadAimingOnTarget(const IBody *const this)
{
  return 0;
}


