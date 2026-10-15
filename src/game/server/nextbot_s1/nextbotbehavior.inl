
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// Behavior<CDOTA_BaseNPC>::~Behavior  (line 179, @0x0000000002967ea0, libserver.so)  // inlines: ~IContextualQuery, ~INextBotEventResponder
void __fastcall Behavior<CDOTA_BaseNPC>::~Behavior(Behavior<CDOTA_BaseNPC> *const this)
{
  Action<CDOTA_BaseNPC> *m_action; // rax
  Action<CDOTA_BaseNPC> *m_buriedUnderMe; // rdi

  this->_vptr_INextBotEventResponder = &off_42D5B70;
  this->_vptr_IContextualQuery = &off_42D5DB0;
  m_action = this->m_action;
  if ( m_action != 0 )
  {
    m_buriedUnderMe = m_action->m_buriedUnderMe;
    if ( m_buriedUnderMe != 0 )
    {
      while ( m_buriedUnderMe->m_buriedUnderMe != 0 )
        m_buriedUnderMe = m_buriedUnderMe->m_buriedUnderMe;
    }
    else
    {
      m_buriedUnderMe = m_action;
    }
    (*(m_buriedUnderMe->_vptr_INextBotEventResponder + 2))(m_buriedUnderMe);
  }
  this->_vptr_IContextualQuery = &off_3F7A990;
  this->_vptr_INextBotEventResponder = &off_3F7A570;
}


// Behavior<CDOTA_BaseNPC>::~Behavior  (line 179, @0x000000000296e700, libserver.so)  // inlines: ~Behavior, ~IContextualQuery, ~INextBotEventResponder
// calls: operator delete
void __fastcall Behavior<CDOTA_BaseNPC>::~Behavior(Behavior<CDOTA_BaseNPC> *const this)
{
  Action<CDOTA_BaseNPC> *m_action; // rax
  Action<CDOTA_BaseNPC> *m_buriedUnderMe; // rdi

  this->_vptr_INextBotEventResponder = &off_42D5B70;
  this->_vptr_IContextualQuery = &off_42D5DB0;
  m_action = this->m_action;
  if ( m_action != 0 )
  {
    m_buriedUnderMe = m_action->m_buriedUnderMe;
    if ( m_buriedUnderMe != 0 )
    {
      while ( m_buriedUnderMe->m_buriedUnderMe != 0 )
        m_buriedUnderMe = m_buriedUnderMe->m_buriedUnderMe;
    }
    else
    {
      m_buriedUnderMe = m_action;
    }
    (*(m_buriedUnderMe->_vptr_INextBotEventResponder + 2))(m_buriedUnderMe);
  }
  this->_vptr_IContextualQuery = &off_3F7A990;
  this->_vptr_INextBotEventResponder = &off_3F7A570;
  operator delete(this);
}


// Behavior<CSimpleBot>::~Behavior  (line 179, @0x0000000002f1e100, libserver.so)  // inlines: ~IContextualQuery, ~INextBotEventResponder
void __fastcall Behavior<CSimpleBot>::~Behavior(Behavior<CSimpleBot> *const this)
{
  Action<CSimpleBot> *m_action; // rax
  Action<CSimpleBot> *m_buriedUnderMe; // rdi

  this->_vptr_INextBotEventResponder = &off_47B2B30;
  this->_vptr_IContextualQuery = &off_47B2D70;
  m_action = this->m_action;
  if ( m_action != 0 )
  {
    m_buriedUnderMe = m_action->m_buriedUnderMe;
    if ( m_buriedUnderMe != 0 )
    {
      while ( m_buriedUnderMe->m_buriedUnderMe != 0 )
        m_buriedUnderMe = m_buriedUnderMe->m_buriedUnderMe;
    }
    else
    {
      m_buriedUnderMe = m_action;
    }
    (*(m_buriedUnderMe->_vptr_INextBotEventResponder + 2))(m_buriedUnderMe);
  }
  this->_vptr_IContextualQuery = &off_3F7A990;
  this->_vptr_INextBotEventResponder = &off_3F7A570;
}


// Behavior<CSimpleBot>::~Behavior  (line 179, @0x0000000002f1fae0, libserver.so)  // inlines: ~Behavior, ~IContextualQuery, ~INextBotEventResponder
// calls: operator delete
void __fastcall Behavior<CSimpleBot>::~Behavior(Behavior<CSimpleBot> *const this)
{
  Action<CSimpleBot> *m_action; // rax
  Action<CSimpleBot> *m_buriedUnderMe; // rdi

  this->_vptr_INextBotEventResponder = &off_47B2B30;
  this->_vptr_IContextualQuery = &off_47B2D70;
  m_action = this->m_action;
  if ( m_action != 0 )
  {
    m_buriedUnderMe = m_action->m_buriedUnderMe;
    if ( m_buriedUnderMe != 0 )
    {
      while ( m_buriedUnderMe->m_buriedUnderMe != 0 )
        m_buriedUnderMe = m_buriedUnderMe->m_buriedUnderMe;
    }
    else
    {
      m_buriedUnderMe = m_action;
    }
    (*(m_buriedUnderMe->_vptr_INextBotEventResponder + 2))(m_buriedUnderMe);
  }
  this->_vptr_IContextualQuery = &off_3F7A990;
  this->_vptr_INextBotEventResponder = &off_3F7A570;
  operator delete(this);
}


// Behavior<CDOTA_BaseNPC>::Update  (line 226, @0x000000000257b030, libserver.so)  // inlines: CFmtStrN, GetName, InitQuietTruncation, IsDebugging
// calls: Action<CDOTA_BaseNPC>::InvokeUpdate, Action<CDOTA_BaseNPC>::ApplyResult, NextBotManager::IsDebugFilterMatch, Action<CDOTA_BaseNPC>::DebugString, CUtlSymbol::String, CFmtStrN<256, false>::sprintf, __stack_chk_fail
// callers: DOTA_ExecuteOrders, CDOTA_BaseNPC::CDOTA_BaseNPCIntention::Update
// strings: "%s: %s"
void __fastcall Behavior<CDOTA_BaseNPC>::Update(
        Behavior<CDOTA_BaseNPC> *const this,
        CDOTA_BaseNPC *me,
        double a3,
        float interval)
{
  Action<CDOTA_BaseNPC> *m_action; // rsi
  Action<CDOTA_BaseNPC> *v7; // rax
  INextBot *v8; // r13
  Action<CDOTA_BaseNPC> *v9; // rdi
  int (**vptr_INextBotEventResponder)(...); // rax
  int (*v11)(...); // r14
  const char *v12; // r12
  const char *v13; // rax
  const char *v14; // rax
  ActionResult<CDOTA_BaseNPC> result; // [rsp+20h] [rbp-160h] BYREF
  CFmtStr msg; // [rsp+40h] [rbp-140h] BYREF
  unsigned __int64 v17; // [rsp+158h] [rbp-28h]

  v17 = __readfsqword(0x28u);
  if ( me != 0 )
  {
    m_action = this->m_action;
    if ( m_action != 0 )
    {
      Action<CDOTA_BaseNPC>::InvokeUpdate(&result, m_action, me, this, a3);
      v7 = Action<CDOTA_BaseNPC>::ApplyResult(this->m_action, me, this, result);
      this->m_action = v7;
      if ( v7 != 0 && (g_NextBotManager.m_debugType & 1) != 0 )
      {
        v8 = &me->INextBot;
        if ( NextBotManager::IsDebugFilterMatch(&g_NextBotManager, &me->INextBot)
          && (*(me->_vptr_INextBotEventResponder + 96))(&me->INextBot, 1) != 0 )
        {
          v9 = this->m_action;
          msg.m_bQuietTruncation = 0;
          msg._vptr_CFmtStrN = &off_3F6E1A0;
          vptr_INextBotEventResponder = me->_vptr_INextBotEventResponder;
          msg.m_szBuf[0] = 0;
          msg.m_nLength = 0;
          v11 = vptr_INextBotEventResponder[99];
          v12 = Action<CDOTA_BaseNPC>::DebugString(v9);
          v13 = CUtlSymbol::String(&this->m_name);
          v14 = CFmtStrN<256,false>::sprintf(&msg, "%s: %s", v13, v12);
          v11(v8, v14);
        }
      }
    }
  }
}


// Behavior<CSimpleBot>::Update  (line 226, @0x0000000002f23710, libserver.so)  // inlines: CFmtStrN, GetName, InitQuietTruncation, IsDebugFilterMatch, IsDebugging
// calls: Action<CSimpleBot>::InvokeUpdate, Action<CSimpleBot>::ApplyResult, Action<CSimpleBot>::DebugString, CUtlSymbol::String, CFmtStrN<256, false>::sprintf, NextBotManager::IsDebugFilterMatch, __stack_chk_fail
// callers: CSimpleBot::CSimpleBotIntention::Update
// strings: "%s: %s"
void __fastcall Behavior<CSimpleBot>::Update(
        Behavior<CSimpleBot> *const this,
        CSimpleBot *me,
        double a3,
        float interval)
{
  Action<CSimpleBot> *m_action; // rsi
  Action<CSimpleBot> *v7; // rax
  INextBot *v8; // r13
  Action<CSimpleBot> *v9; // rdi
  int (**vptr_INextBotEventResponder)(...); // rax
  int (*v11)(...); // r14
  const char *v12; // r12
  const char *v13; // rax
  const char *v14; // rax
  ActionResult<CSimpleBot> result; // [rsp+20h] [rbp-160h] BYREF
  CFmtStr msg; // [rsp+40h] [rbp-140h] BYREF
  unsigned __int64 v17; // [rsp+158h] [rbp-28h]

  v17 = __readfsqword(0x28u);
  if ( me != 0 )
  {
    m_action = this->m_action;
    if ( m_action != 0 )
    {
      Action<CSimpleBot>::InvokeUpdate(&result, m_action, me, this, a3);
      v7 = Action<CSimpleBot>::ApplyResult(this->m_action, me, this, result);
      this->m_action = v7;
      if ( v7 != 0 && (g_NextBotManager.m_debugType & 1) != 0 )
      {
        v8 = &me->INextBot;
        if ( (g_NextBotManager.m_debugFilterList.m_Size == 0
           || NextBotManager::IsDebugFilterMatch(&g_NextBotManager, &me->INextBot))
          && (*(me->_vptr_INextBotEventResponder + 96))(&me->INextBot, 1) != 0 )
        {
          v9 = this->m_action;
          msg.m_bQuietTruncation = 0;
          msg._vptr_CFmtStrN = &off_3F6E1A0;
          vptr_INextBotEventResponder = me->_vptr_INextBotEventResponder;
          msg.m_szBuf[0] = 0;
          msg.m_nLength = 0;
          v11 = vptr_INextBotEventResponder[99];
          v12 = Action<CSimpleBot>::DebugString(v9);
          v13 = CUtlSymbol::String(&this->m_name);
          v14 = CFmtStrN<256,false>::sprintf(&msg, "%s: %s", v13, v12);
          v11(v8, v14);
        }
      }
    }
  }
}


// Behavior<CDOTA_BaseNPC>::FirstContainedResponder  (line 271, @0x0000000002969a00, libserver.so)
INextBotEventResponder *__fastcall Behavior<CDOTA_BaseNPC>::FirstContainedResponder(
        const Behavior<CDOTA_BaseNPC> *const this)
{
  return this->m_action;
}


// Behavior<CSimpleBot>::FirstContainedResponder  (line 271, @0x0000000002f1edb0, libserver.so)
INextBotEventResponder *__fastcall Behavior<CSimpleBot>::FirstContainedResponder(
        const Behavior<CSimpleBot> *const this)
{
  return this->m_action;
}


// Behavior<CDOTA_BaseNPC>::NextContainedResponder  (line 276, @0x0000000002969a10, libserver.so)
INextBotEventResponder *__fastcall Behavior<CDOTA_BaseNPC>::NextContainedResponder(
        const Behavior<CDOTA_BaseNPC> *const this,
        INextBotEventResponder *current)
{
  return 0;
}


// Behavior<CSimpleBot>::NextContainedResponder  (line 276, @0x0000000002f1edc0, libserver.so)
INextBotEventResponder *__fastcall Behavior<CSimpleBot>::NextContainedResponder(
        const Behavior<CSimpleBot> *const this,
        INextBotEventResponder *current)
{
  return 0;
}


// Behavior<CDOTA_BaseNPC>::ShouldPickUp  (line 282, @0x0000000002969a20, libserver.so)
QueryResultType __fastcall Behavior<CDOTA_BaseNPC>::ShouldPickUp(
        const Behavior<CDOTA_BaseNPC> *const this,
        const INextBot *me,
        CBaseEntity *item)
{
  QueryResultType result; // eax
  Action<CDOTA_BaseNPC> *m_action; // rbx
  Action<CDOTA_BaseNPC> *m_parent; // r14

  result = QueryResultType::ANSWER_UNDEFINED;
  m_action = this->m_action;
  if ( m_action != 0 )
  {
    while ( m_action->m_child != 0 )
      m_action = m_action->m_child;
    result = QueryResultType::ANSWER_UNDEFINED;
    do
    {
      if ( m_action == 0 )
        break;
      m_parent = m_action->m_parent;
      do
      {
        result = (*(m_action->_vptr_IContextualQuery + 3))(&m_action->IContextualQuery, me, item);
        m_action = m_action->m_buriedUnderMe;
      }
      while ( m_action != 0 && result == QueryResultType::ANSWER_UNDEFINED );
      m_action = m_parent;
    }
    while ( result == QueryResultType::ANSWER_UNDEFINED );
  }
  return result;
}


// Behavior<CSimpleBot>::ShouldPickUp  (line 282, @0x0000000002f1edd0, libserver.so)
QueryResultType __fastcall Behavior<CSimpleBot>::ShouldPickUp(
        const Behavior<CSimpleBot> *const this,
        const INextBot *me,
        CBaseEntity *item)
{
  QueryResultType result; // eax
  Action<CSimpleBot> *m_action; // rbx
  Action<CSimpleBot> *m_parent; // r14

  result = QueryResultType::ANSWER_UNDEFINED;
  m_action = this->m_action;
  if ( m_action != 0 )
  {
    while ( m_action->m_child != 0 )
      m_action = m_action->m_child;
    result = QueryResultType::ANSWER_UNDEFINED;
    do
    {
      if ( m_action == 0 )
        break;
      m_parent = m_action->m_parent;
      do
      {
        result = (*(m_action->_vptr_IContextualQuery + 3))(&m_action->IContextualQuery, me, item);
        m_action = m_action->m_buriedUnderMe;
      }
      while ( m_action != 0 && result == QueryResultType::ANSWER_UNDEFINED );
      m_action = m_parent;
    }
    while ( result == QueryResultType::ANSWER_UNDEFINED );
  }
  return result;
}


// Behavior<CDOTA_BaseNPC>::ShouldHurry  (line 312, @0x0000000002969ab0, libserver.so)
QueryResultType __fastcall Behavior<CDOTA_BaseNPC>::ShouldHurry(
        const Behavior<CDOTA_BaseNPC> *const this,
        const INextBot *me)
{
  QueryResultType result; // eax
  Action<CDOTA_BaseNPC> *m_action; // rbx
  Action<CDOTA_BaseNPC> *m_parent; // r13

  result = QueryResultType::ANSWER_UNDEFINED;
  m_action = this->m_action;
  if ( m_action != 0 )
  {
    while ( m_action->m_child != 0 )
      m_action = m_action->m_child;
    result = QueryResultType::ANSWER_UNDEFINED;
    do
    {
      if ( m_action == 0 )
        break;
      m_parent = m_action->m_parent;
      do
      {
        result = (*(m_action->_vptr_IContextualQuery + 4))(&m_action->IContextualQuery, me);
        m_action = m_action->m_buriedUnderMe;
      }
      while ( m_action != 0 && result == QueryResultType::ANSWER_UNDEFINED );
      m_action = m_parent;
    }
    while ( result == QueryResultType::ANSWER_UNDEFINED );
  }
  return result;
}


// Behavior<CSimpleBot>::ShouldHurry  (line 312, @0x0000000002f1ee60, libserver.so)
QueryResultType __fastcall Behavior<CSimpleBot>::ShouldHurry(
        const Behavior<CSimpleBot> *const this,
        const INextBot *me)
{
  QueryResultType result; // eax
  Action<CSimpleBot> *m_action; // rbx
  Action<CSimpleBot> *m_parent; // r13

  result = QueryResultType::ANSWER_UNDEFINED;
  m_action = this->m_action;
  if ( m_action != 0 )
  {
    while ( m_action->m_child != 0 )
      m_action = m_action->m_child;
    result = QueryResultType::ANSWER_UNDEFINED;
    do
    {
      if ( m_action == 0 )
        break;
      m_parent = m_action->m_parent;
      do
      {
        result = (*(m_action->_vptr_IContextualQuery + 4))(&m_action->IContextualQuery, me);
        m_action = m_action->m_buriedUnderMe;
      }
      while ( m_action != 0 && result == QueryResultType::ANSWER_UNDEFINED );
      m_action = m_parent;
    }
    while ( result == QueryResultType::ANSWER_UNDEFINED );
  }
  return result;
}


// Behavior<CDOTA_BaseNPC>::ShouldRetreat  (line 342, @0x0000000002969b40, libserver.so)
QueryResultType __fastcall Behavior<CDOTA_BaseNPC>::ShouldRetreat(
        const Behavior<CDOTA_BaseNPC> *const this,
        const INextBot *me)
{
  QueryResultType result; // eax
  Action<CDOTA_BaseNPC> *m_action; // rbx
  Action<CDOTA_BaseNPC> *m_parent; // r13

  result = QueryResultType::ANSWER_UNDEFINED;
  m_action = this->m_action;
  if ( m_action != 0 )
  {
    while ( m_action->m_child != 0 )
      m_action = m_action->m_child;
    result = QueryResultType::ANSWER_UNDEFINED;
    do
    {
      if ( m_action == 0 )
        break;
      m_parent = m_action->m_parent;
      do
      {
        result = (*(m_action->_vptr_IContextualQuery + 5))(&m_action->IContextualQuery, me);
        m_action = m_action->m_buriedUnderMe;
      }
      while ( m_action != 0 && result == QueryResultType::ANSWER_UNDEFINED );
      m_action = m_parent;
    }
    while ( result == QueryResultType::ANSWER_UNDEFINED );
  }
  return result;
}


// Behavior<CSimpleBot>::ShouldRetreat  (line 342, @0x0000000002f1eef0, libserver.so)
QueryResultType __fastcall Behavior<CSimpleBot>::ShouldRetreat(
        const Behavior<CSimpleBot> *const this,
        const INextBot *me)
{
  QueryResultType result; // eax
  Action<CSimpleBot> *m_action; // rbx
  Action<CSimpleBot> *m_parent; // r13

  result = QueryResultType::ANSWER_UNDEFINED;
  m_action = this->m_action;
  if ( m_action != 0 )
  {
    while ( m_action->m_child != 0 )
      m_action = m_action->m_child;
    result = QueryResultType::ANSWER_UNDEFINED;
    do
    {
      if ( m_action == 0 )
        break;
      m_parent = m_action->m_parent;
      do
      {
        result = (*(m_action->_vptr_IContextualQuery + 5))(&m_action->IContextualQuery, me);
        m_action = m_action->m_buriedUnderMe;
      }
      while ( m_action != 0 && result == QueryResultType::ANSWER_UNDEFINED );
      m_action = m_parent;
    }
    while ( result == QueryResultType::ANSWER_UNDEFINED );
  }
  return result;
}


// Behavior<CDOTA_BaseNPC>::ShouldAttack  (line 372, @0x0000000002969bd0, libserver.so)
QueryResultType __fastcall Behavior<CDOTA_BaseNPC>::ShouldAttack(
        const Behavior<CDOTA_BaseNPC> *const this,
        const INextBot *me,
        const CKnownEntity *them)
{
  QueryResultType result; // eax
  Action<CDOTA_BaseNPC> *m_action; // rbx
  Action<CDOTA_BaseNPC> *m_parent; // r14

  result = QueryResultType::ANSWER_UNDEFINED;
  m_action = this->m_action;
  if ( m_action != 0 )
  {
    while ( m_action->m_child != 0 )
      m_action = m_action->m_child;
    result = QueryResultType::ANSWER_UNDEFINED;
    do
    {
      if ( m_action == 0 )
        break;
      m_parent = m_action->m_parent;
      do
      {
        result = (*(m_action->_vptr_IContextualQuery + 6))(&m_action->IContextualQuery, me, them);
        m_action = m_action->m_buriedUnderMe;
      }
      while ( m_action != 0 && result == QueryResultType::ANSWER_UNDEFINED );
      m_action = m_parent;
    }
    while ( result == QueryResultType::ANSWER_UNDEFINED );
  }
  return result;
}


// Behavior<CSimpleBot>::ShouldAttack  (line 372, @0x0000000002f1ef80, libserver.so)
QueryResultType __fastcall Behavior<CSimpleBot>::ShouldAttack(
        const Behavior<CSimpleBot> *const this,
        const INextBot *me,
        const CKnownEntity *them)
{
  QueryResultType result; // eax
  Action<CSimpleBot> *m_action; // rbx
  Action<CSimpleBot> *m_parent; // r14

  result = QueryResultType::ANSWER_UNDEFINED;
  m_action = this->m_action;
  if ( m_action != 0 )
  {
    while ( m_action->m_child != 0 )
      m_action = m_action->m_child;
    result = QueryResultType::ANSWER_UNDEFINED;
    do
    {
      if ( m_action == 0 )
        break;
      m_parent = m_action->m_parent;
      do
      {
        result = (*(m_action->_vptr_IContextualQuery + 6))(&m_action->IContextualQuery, me, them);
        m_action = m_action->m_buriedUnderMe;
      }
      while ( m_action != 0 && result == QueryResultType::ANSWER_UNDEFINED );
      m_action = m_parent;
    }
    while ( result == QueryResultType::ANSWER_UNDEFINED );
  }
  return result;
}


// Behavior<CDOTA_BaseNPC>::IsHindrance  (line 402, @0x0000000002969c60, libserver.so)
QueryResultType __fastcall Behavior<CDOTA_BaseNPC>::IsHindrance(
        const Behavior<CDOTA_BaseNPC> *const this,
        const INextBot *me,
        CBaseEntity *blocker)
{
  QueryResultType result; // eax
  Action<CDOTA_BaseNPC> *m_action; // rbx
  Action<CDOTA_BaseNPC> *m_parent; // r14

  result = QueryResultType::ANSWER_UNDEFINED;
  m_action = this->m_action;
  if ( m_action != 0 )
  {
    while ( m_action->m_child != 0 )
      m_action = m_action->m_child;
    result = QueryResultType::ANSWER_UNDEFINED;
    do
    {
      if ( m_action == 0 )
        break;
      m_parent = m_action->m_parent;
      do
      {
        result = (*(m_action->_vptr_IContextualQuery + 7))(&m_action->IContextualQuery, me, blocker);
        m_action = m_action->m_buriedUnderMe;
      }
      while ( m_action != 0 && result == QueryResultType::ANSWER_UNDEFINED );
      m_action = m_parent;
    }
    while ( result == QueryResultType::ANSWER_UNDEFINED );
  }
  return result;
}


// Behavior<CSimpleBot>::IsHindrance  (line 402, @0x0000000002f1f010, libserver.so)
QueryResultType __fastcall Behavior<CSimpleBot>::IsHindrance(
        const Behavior<CSimpleBot> *const this,
        const INextBot *me,
        CBaseEntity *blocker)
{
  QueryResultType result; // eax
  Action<CSimpleBot> *m_action; // rbx
  Action<CSimpleBot> *m_parent; // r14

  result = QueryResultType::ANSWER_UNDEFINED;
  m_action = this->m_action;
  if ( m_action != 0 )
  {
    while ( m_action->m_child != 0 )
      m_action = m_action->m_child;
    result = QueryResultType::ANSWER_UNDEFINED;
    do
    {
      if ( m_action == 0 )
        break;
      m_parent = m_action->m_parent;
      do
      {
        result = (*(m_action->_vptr_IContextualQuery + 7))(&m_action->IContextualQuery, me, blocker);
        m_action = m_action->m_buriedUnderMe;
      }
      while ( m_action != 0 && result == QueryResultType::ANSWER_UNDEFINED );
      m_action = m_parent;
    }
    while ( result == QueryResultType::ANSWER_UNDEFINED );
  }
  return result;
}


// Behavior<CDOTA_BaseNPC>::SelectTargetPoint  (line 433, @0x0000000002969cf0, libserver.so)  // inlines: operator=, operator==
Vector __fastcall Behavior<CDOTA_BaseNPC>::SelectTargetPoint(
        const Behavior<CDOTA_BaseNPC> *const this,
        const INextBot *me,
        const CBaseCombatCharacter *subject)
{
  Action<CDOTA_BaseNPC> *m_action; // r12
  double v6; // xmm0_8
  float y; // xmm2_4
  float x; // xmm3_4
  Action<CDOTA_BaseNPC> *m_parent; // r13
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  m_action = this->m_action;
  *&v6 = vec3_origin.x;
  y = vec3_origin.y;
  result.z = vec3_origin.z;
  if ( m_action != 0 )
  {
    while ( m_action->m_child != 0 )
      m_action = m_action->m_child;
    x = vec3_origin.x;
    while ( *&v6 == x && y == vec3_origin.y && result.z == vec3_origin.z )
    {
      m_parent = m_action->m_parent;
      do
      {
        if ( result.z != vec3_origin.z )
          break;
        v6 = (*(m_action->_vptr_IContextualQuery + 8))(&m_action->IContextualQuery, me, subject);
        m_action = m_action->m_buriedUnderMe;
        y = *(&v6 + 1);
        if ( m_action == 0 )
          break;
      }
      while ( *&v6 == vec3_origin.x && *(&v6 + 1) == vec3_origin.y );
      if ( m_parent == 0 )
        break;
      x = vec3_origin.x;
      m_action = m_parent;
    }
  }
  *&result.x = __PAIR64__(LODWORD(y), LODWORD(v6));
  return result;
}


// Behavior<CSimpleBot>::SelectTargetPoint  (line 433, @0x0000000002f1f0a0, libserver.so)  // inlines: operator=, operator==
Vector __fastcall Behavior<CSimpleBot>::SelectTargetPoint(
        const Behavior<CSimpleBot> *const this,
        const INextBot *me,
        const CBaseCombatCharacter *subject)
{
  Action<CSimpleBot> *m_action; // r12
  double v6; // xmm0_8
  float y; // xmm2_4
  float x; // xmm3_4
  Action<CSimpleBot> *m_parent; // r13
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  m_action = this->m_action;
  *&v6 = vec3_origin.x;
  y = vec3_origin.y;
  result.z = vec3_origin.z;
  if ( m_action != 0 )
  {
    while ( m_action->m_child != 0 )
      m_action = m_action->m_child;
    x = vec3_origin.x;
    while ( *&v6 == x && y == vec3_origin.y && result.z == vec3_origin.z )
    {
      m_parent = m_action->m_parent;
      do
      {
        if ( result.z != vec3_origin.z )
          break;
        v6 = (*(m_action->_vptr_IContextualQuery + 8))(&m_action->IContextualQuery, me, subject);
        m_action = m_action->m_buriedUnderMe;
        y = *(&v6 + 1);
        if ( m_action == 0 )
          break;
      }
      while ( *&v6 == vec3_origin.x && *(&v6 + 1) == vec3_origin.y );
      if ( m_parent == 0 )
        break;
      x = vec3_origin.x;
      m_action = m_parent;
    }
  }
  *&result.x = __PAIR64__(LODWORD(y), LODWORD(v6));
  return result;
}


// Behavior<CDOTA_BaseNPC>::IsPositionAllowed  (line 469, @0x0000000002969e00, libserver.so)
QueryResultType __fastcall Behavior<CDOTA_BaseNPC>::IsPositionAllowed(
        const Behavior<CDOTA_BaseNPC> *const this,
        const INextBot *me,
        const Vector *const pos)
{
  QueryResultType result; // eax
  Action<CDOTA_BaseNPC> *m_action; // rbx
  Action<CDOTA_BaseNPC> *m_parent; // r14

  result = QueryResultType::ANSWER_UNDEFINED;
  m_action = this->m_action;
  if ( m_action != 0 )
  {
    while ( m_action->m_child != 0 )
      m_action = m_action->m_child;
    result = QueryResultType::ANSWER_UNDEFINED;
    do
    {
      if ( m_action == 0 )
        break;
      m_parent = m_action->m_parent;
      do
      {
        result = (*(m_action->_vptr_IContextualQuery + 9))(&m_action->IContextualQuery, me, pos);
        m_action = m_action->m_buriedUnderMe;
      }
      while ( m_action != 0 && result == QueryResultType::ANSWER_UNDEFINED );
      m_action = m_parent;
    }
    while ( result == QueryResultType::ANSWER_UNDEFINED );
  }
  return result;
}


// Behavior<CSimpleBot>::IsPositionAllowed  (line 469, @0x0000000002f1f1b0, libserver.so)
QueryResultType __fastcall Behavior<CSimpleBot>::IsPositionAllowed(
        const Behavior<CSimpleBot> *const this,
        const INextBot *me,
        const Vector *const pos)
{
  QueryResultType result; // eax
  Action<CSimpleBot> *m_action; // rbx
  Action<CSimpleBot> *m_parent; // r14

  result = QueryResultType::ANSWER_UNDEFINED;
  m_action = this->m_action;
  if ( m_action != 0 )
  {
    while ( m_action->m_child != 0 )
      m_action = m_action->m_child;
    result = QueryResultType::ANSWER_UNDEFINED;
    do
    {
      if ( m_action == 0 )
        break;
      m_parent = m_action->m_parent;
      do
      {
        result = (*(m_action->_vptr_IContextualQuery + 9))(&m_action->IContextualQuery, me, pos);
        m_action = m_action->m_buriedUnderMe;
      }
      while ( m_action != 0 && result == QueryResultType::ANSWER_UNDEFINED );
      m_action = m_parent;
    }
    while ( result == QueryResultType::ANSWER_UNDEFINED );
  }
  return result;
}


// Behavior<CDOTA_BaseNPC>::SelectMoreDangerousThreat  (line 501, @0x0000000002969e90, libserver.so)
const CKnownEntity *__fastcall Behavior<CDOTA_BaseNPC>::SelectMoreDangerousThreat(
        const Behavior<CDOTA_BaseNPC> *const this,
        const INextBot *me,
        const CBaseCombatCharacter *subject,
        const CKnownEntity *threat1,
        const CKnownEntity *threat2)
{
  Action<CDOTA_BaseNPC> *m_action; // r15
  const CKnownEntity *result; // rax
  Action<CDOTA_BaseNPC> *containingAction; // [rsp+8h] [rbp-38h]

  m_action = this->m_action;
  if ( m_action == 0 )
    return 0;
  while ( 1 )
  {
    result = m_action->m_child;
    if ( result == 0 )
      break;
    m_action = m_action->m_child;
  }
  do
  {
    if ( m_action == 0 )
      break;
    containingAction = m_action->m_parent;
    do
    {
      result = (*(m_action->_vptr_IContextualQuery + 10))(&m_action->IContextualQuery, me, subject, threat1, threat2);
      m_action = m_action->m_buriedUnderMe;
    }
    while ( m_action != 0 && result == 0 );
    m_action = containingAction;
  }
  while ( result == 0 );
  return result;
}


// Behavior<CSimpleBot>::SelectMoreDangerousThreat  (line 501, @0x0000000002f1f240, libserver.so)
const CKnownEntity *__fastcall Behavior<CSimpleBot>::SelectMoreDangerousThreat(
        const Behavior<CSimpleBot> *const this,
        const INextBot *me,
        const CBaseCombatCharacter *subject,
        const CKnownEntity *threat1,
        const CKnownEntity *threat2)
{
  Action<CSimpleBot> *m_action; // r15
  const CKnownEntity *result; // rax
  Action<CSimpleBot> *containingAction; // [rsp+8h] [rbp-38h]

  m_action = this->m_action;
  if ( m_action == 0 )
    return 0;
  while ( 1 )
  {
    result = m_action->m_child;
    if ( result == 0 )
      break;
    m_action = m_action->m_child;
  }
  do
  {
    if ( m_action == 0 )
      break;
    containingAction = m_action->m_parent;
    do
    {
      result = (*(m_action->_vptr_IContextualQuery + 10))(&m_action->IContextualQuery, me, subject, threat1, threat2);
      m_action = m_action->m_buriedUnderMe;
    }
    while ( m_action != 0 && result == 0 );
    m_action = containingAction;
  }
  while ( result == 0 );
  return result;
}


// Action<CDOTA_BaseNPC>::OnStart  (line 568, @0x0000000002883450, libserver.so)  // inlines: ActionResult, Continue, IActionResult
ActionResult<CDOTA_BaseNPC> *__fastcall Action<CDOTA_BaseNPC>::OnStart(
        ActionResult<CDOTA_BaseNPC> *__return_ptr retstr,
        Action<CDOTA_BaseNPC> *const this,
        CDOTA_BaseNPC *me,
        Action<CDOTA_BaseNPC> *priorAction)
{
  retstr->m_type = ActionResultType::CONTINUE;
  retstr->m_action = 0;
  retstr->m_reason = 0;
  return retstr;
}


// Action<CSimpleBot>::OnStart  (line 568, @0x0000000002f1e1c0, libserver.so)  // inlines: ActionResult, Continue, IActionResult
ActionResult<CSimpleBot> *__fastcall Action<CSimpleBot>::OnStart(
        ActionResult<CSimpleBot> *__return_ptr retstr,
        Action<CSimpleBot> *const this,
        CSimpleBot *me,
        Action<CSimpleBot> *priorAction)
{
  retstr->m_type = ActionResultType::CONTINUE;
  retstr->m_action = 0;
  retstr->m_reason = 0;
  return retstr;
}


// Action<CDOTA_BaseNPC>::Update  (line 574, @0x0000000002883470, libserver.so)  // inlines: ActionResult, Continue, IActionResult
ActionResult<CDOTA_BaseNPC> *__fastcall Action<CDOTA_BaseNPC>::Update(
        ActionResult<CDOTA_BaseNPC> *__return_ptr retstr,
        Action<CDOTA_BaseNPC> *const this,
        CDOTA_BaseNPC *me,
        float interval)
{
  retstr->m_type = ActionResultType::CONTINUE;
  retstr->m_action = 0;
  retstr->m_reason = 0;
  return retstr;
}


// Action<CSimpleBot>::Update  (line 574, @0x0000000002f1e180, libserver.so)  // inlines: ActionResult, Continue, IActionResult
ActionResult<CSimpleBot> *__fastcall Action<CSimpleBot>::Update(
        ActionResult<CSimpleBot> *__return_ptr retstr,
        Action<CSimpleBot> *const this,
        CSimpleBot *me,
        float interval)
{
  retstr->m_type = ActionResultType::CONTINUE;
  retstr->m_action = 0;
  retstr->m_reason = 0;
  return retstr;
}


// Action<CDOTA_BaseNPC>::OnEnd  (line 577, @0x0000000002882940, libserver.so)
void __fastcall Action<CDOTA_BaseNPC>::OnEnd(
        Action<CDOTA_BaseNPC> *const this,
        CDOTA_BaseNPC *me,
        Action<CDOTA_BaseNPC> *nextAction)
{
  ;
}


// Action<CSimpleBot>::OnEnd  (line 577, @0x0000000002f1e1a0, libserver.so)
void __fastcall Action<CSimpleBot>::OnEnd(
        Action<CSimpleBot> *const this,
        CSimpleBot *me,
        Action<CSimpleBot> *nextAction)
{
  ;
}


// Action<CDOTA_BaseNPC>::OnSuspend  (line 584, @0x0000000002882950, libserver.so)  // inlines: ActionResult, Continue, IActionResult
ActionResult<CDOTA_BaseNPC> *__fastcall Action<CDOTA_BaseNPC>::OnSuspend(
        ActionResult<CDOTA_BaseNPC> *__return_ptr retstr,
        Action<CDOTA_BaseNPC> *const this,
        CDOTA_BaseNPC *me,
        Action<CDOTA_BaseNPC> *interruptingAction)
{
  retstr->m_type = ActionResultType::CONTINUE;
  retstr->m_action = 0;
  retstr->m_reason = 0;
  return retstr;
}


// Action<CSimpleBot>::OnSuspend  (line 584, @0x0000000002f1e1e0, libserver.so)  // inlines: ActionResult, Continue, IActionResult
ActionResult<CSimpleBot> *__fastcall Action<CSimpleBot>::OnSuspend(
        ActionResult<CSimpleBot> *__return_ptr retstr,
        Action<CSimpleBot> *const this,
        CSimpleBot *me,
        Action<CSimpleBot> *interruptingAction)
{
  retstr->m_type = ActionResultType::CONTINUE;
  retstr->m_action = 0;
  retstr->m_reason = 0;
  return retstr;
}


// Action<CDOTA_BaseNPC>::OnResume  (line 587, @0x0000000002883490, libserver.so)  // inlines: ActionResult, Continue, IActionResult
ActionResult<CDOTA_BaseNPC> *__fastcall Action<CDOTA_BaseNPC>::OnResume(
        ActionResult<CDOTA_BaseNPC> *__return_ptr retstr,
        Action<CDOTA_BaseNPC> *const this,
        CDOTA_BaseNPC *me,
        Action<CDOTA_BaseNPC> *interruptingAction)
{
  retstr->m_type = ActionResultType::CONTINUE;
  retstr->m_action = 0;
  retstr->m_reason = 0;
  return retstr;
}


// Action<CSimpleBot>::OnResume  (line 587, @0x0000000002f1e200, libserver.so)  // inlines: ActionResult, Continue, IActionResult
ActionResult<CSimpleBot> *__fastcall Action<CSimpleBot>::OnResume(
        ActionResult<CSimpleBot> *__return_ptr retstr,
        Action<CSimpleBot> *const this,
        CSimpleBot *me,
        Action<CSimpleBot> *interruptingAction)
{
  retstr->m_type = ActionResultType::CONTINUE;
  retstr->m_action = 0;
  retstr->m_reason = 0;
  return retstr;
}


// Action<CDOTA_BaseNPC>::InitialContainedAction  (line 599, @0x0000000002882970, libserver.so)
Action<CDOTA_BaseNPC> *__fastcall Action<CDOTA_BaseNPC>::InitialContainedAction(
        Action<CDOTA_BaseNPC> *const this,
        CDOTA_BaseNPC *me)
{
  return 0;
}


// Action<CSimpleBot>::InitialContainedAction  (line 599, @0x0000000002f1e1b0, libserver.so)
Action<CSimpleBot> *__fastcall Action<CSimpleBot>::InitialContainedAction(
        Action<CSimpleBot> *const this,
        CSimpleBot *me)
{
  return 0;
}


// Action<CDOTA_BaseNPC>::OnLeaveGround  (line 608, @0x0000000002882980, libserver.so)  // inlines: EventDesiredResult, IActionResult, TryContinue
EventDesiredResult<CDOTA_BaseNPC> *__fastcall Action<CDOTA_BaseNPC>::OnLeaveGround(
        EventDesiredResult<CDOTA_BaseNPC> *__return_ptr retstr,
        Action<CDOTA_BaseNPC> *const this,
        CDOTA_BaseNPC *me,
        CBaseEntity *ground)
{
  retstr->m_type = ActionResultType::CONTINUE;
  retstr->m_action = 0;
  retstr->m_reason = 0;
  retstr->m_priority = EventResultPriorityType::RESULT_TRY;
  return retstr;
}


// Action<CSimpleBot>::OnLeaveGround  (line 608, @0x0000000002f1e2e0, libserver.so)  // inlines: EventDesiredResult, IActionResult, TryContinue
EventDesiredResult<CSimpleBot> *__fastcall Action<CSimpleBot>::OnLeaveGround(
        EventDesiredResult<CSimpleBot> *__return_ptr retstr,
        Action<CSimpleBot> *const this,
        CSimpleBot *me,
        CBaseEntity *ground)
{
  retstr->m_type = ActionResultType::CONTINUE;
  retstr->m_action = 0;
  retstr->m_reason = 0;
  retstr->m_priority = EventResultPriorityType::RESULT_TRY;
  return retstr;
}


// Action<CDOTA_BaseNPC>::OnLandOnGround  (line 609, @0x00000000028829b0, libserver.so)  // inlines: EventDesiredResult, IActionResult, TryContinue
EventDesiredResult<CDOTA_BaseNPC> *__fastcall Action<CDOTA_BaseNPC>::OnLandOnGround(
        EventDesiredResult<CDOTA_BaseNPC> *__return_ptr retstr,
        Action<CDOTA_BaseNPC> *const this,
        CDOTA_BaseNPC *me,
        CBaseEntity *ground)
{
  retstr->m_type = ActionResultType::CONTINUE;
  retstr->m_action = 0;
  retstr->m_reason = 0;
  retstr->m_priority = EventResultPriorityType::RESULT_TRY;
  return retstr;
}


// Action<CSimpleBot>::OnLandOnGround  (line 609, @0x0000000002f1e310, libserver.so)  // inlines: EventDesiredResult, IActionResult, TryContinue
EventDesiredResult<CSimpleBot> *__fastcall Action<CSimpleBot>::OnLandOnGround(
        EventDesiredResult<CSimpleBot> *__return_ptr retstr,
        Action<CSimpleBot> *const this,
        CSimpleBot *me,
        CBaseEntity *ground)
{
  retstr->m_type = ActionResultType::CONTINUE;
  retstr->m_action = 0;
  retstr->m_reason = 0;
  retstr->m_priority = EventResultPriorityType::RESULT_TRY;
  return retstr;
}


// Action<CDOTA_BaseNPC>::OnContact  (line 610, @0x00000000028829e0, libserver.so)  // inlines: EventDesiredResult, IActionResult, TryContinue
EventDesiredResult<CDOTA_BaseNPC> *__fastcall Action<CDOTA_BaseNPC>::OnContact(
        EventDesiredResult<CDOTA_BaseNPC> *__return_ptr retstr,
        Action<CDOTA_BaseNPC> *const this,
        CDOTA_BaseNPC *me,
        CBaseEntity *other,
        CGameTrace *result)
{
  retstr->m_type = ActionResultType::CONTINUE;
  retstr->m_action = 0;
  retstr->m_reason = 0;
  retstr->m_priority = EventResultPriorityType::RESULT_TRY;
  return retstr;
}


// Action<CSimpleBot>::OnContact  (line 610, @0x0000000002f1e340, libserver.so)  // inlines: EventDesiredResult, IActionResult, TryContinue
EventDesiredResult<CSimpleBot> *__fastcall Action<CSimpleBot>::OnContact(
        EventDesiredResult<CSimpleBot> *__return_ptr retstr,
        Action<CSimpleBot> *const this,
        CSimpleBot *me,
        CBaseEntity *other,
        CGameTrace *result)
{
  retstr->m_type = ActionResultType::CONTINUE;
  retstr->m_action = 0;
  retstr->m_reason = 0;
  retstr->m_priority = EventResultPriorityType::RESULT_TRY;
  return retstr;
}


// Action<CDOTA_BaseNPC>::OnMoveToSuccess  (line 611, @0x0000000002882a10, libserver.so)  // inlines: EventDesiredResult, IActionResult, TryContinue
EventDesiredResult<CDOTA_BaseNPC> *__fastcall Action<CDOTA_BaseNPC>::OnMoveToSuccess(
        EventDesiredResult<CDOTA_BaseNPC> *__return_ptr retstr,
        Action<CDOTA_BaseNPC> *const this,
        CDOTA_BaseNPC *me)
{
  retstr->m_type = ActionResultType::CONTINUE;
  retstr->m_action = 0;
  retstr->m_reason = 0;
  retstr->m_priority = EventResultPriorityType::RESULT_TRY;
  return retstr;
}


// Action<CSimpleBot>::OnMoveToSuccess  (line 611, @0x0000000002f1e370, libserver.so)  // inlines: EventDesiredResult, IActionResult, TryContinue
EventDesiredResult<CSimpleBot> *__fastcall Action<CSimpleBot>::OnMoveToSuccess(
        EventDesiredResult<CSimpleBot> *__return_ptr retstr,
        Action<CSimpleBot> *const this,
        CSimpleBot *me)
{
  retstr->m_type = ActionResultType::CONTINUE;
  retstr->m_action = 0;
  retstr->m_reason = 0;
  retstr->m_priority = EventResultPriorityType::RESULT_TRY;
  return retstr;
}


// Action<CDOTA_BaseNPC>::OnMoveToFailure  (line 612, @0x0000000002882a40, libserver.so)  // inlines: EventDesiredResult, IActionResult, TryContinue
EventDesiredResult<CDOTA_BaseNPC> *__fastcall Action<CDOTA_BaseNPC>::OnMoveToFailure(
        EventDesiredResult<CDOTA_BaseNPC> *__return_ptr retstr,
        Action<CDOTA_BaseNPC> *const this,
        CDOTA_BaseNPC *me,
        MoveToFailureType reason)
{
  retstr->m_type = ActionResultType::CONTINUE;
  retstr->m_action = 0;
  retstr->m_reason = 0;
  retstr->m_priority = EventResultPriorityType::RESULT_TRY;
  return retstr;
}


// Action<CSimpleBot>::OnMoveToFailure  (line 612, @0x0000000002f1e3a0, libserver.so)  // inlines: EventDesiredResult, IActionResult, TryContinue
EventDesiredResult<CSimpleBot> *__fastcall Action<CSimpleBot>::OnMoveToFailure(
        EventDesiredResult<CSimpleBot> *__return_ptr retstr,
        Action<CSimpleBot> *const this,
        CSimpleBot *me,
        MoveToFailureType reason)
{
  retstr->m_type = ActionResultType::CONTINUE;
  retstr->m_action = 0;
  retstr->m_reason = 0;
  retstr->m_priority = EventResultPriorityType::RESULT_TRY;
  return retstr;
}


// Action<CDOTA_BaseNPC>::OnStuck  (line 613, @0x0000000002882a70, libserver.so)  // inlines: EventDesiredResult, IActionResult, TryContinue
EventDesiredResult<CDOTA_BaseNPC> *__fastcall Action<CDOTA_BaseNPC>::OnStuck(
        EventDesiredResult<CDOTA_BaseNPC> *__return_ptr retstr,
        Action<CDOTA_BaseNPC> *const this,
        CDOTA_BaseNPC *me)
{
  retstr->m_type = ActionResultType::CONTINUE;
  retstr->m_action = 0;
  retstr->m_reason = 0;
  retstr->m_priority = EventResultPriorityType::RESULT_TRY;
  return retstr;
}


// Action<CSimpleBot>::OnStuck  (line 613, @0x0000000002f1ed80, libserver.so)  // inlines: EventDesiredResult, IActionResult, TryContinue
EventDesiredResult<CSimpleBot> *__fastcall Action<CSimpleBot>::OnStuck(
        EventDesiredResult<CSimpleBot> *__return_ptr retstr,
        Action<CSimpleBot> *const this,
        CSimpleBot *me)
{
  retstr->m_type = ActionResultType::CONTINUE;
  retstr->m_action = 0;
  retstr->m_reason = 0;
  retstr->m_priority = EventResultPriorityType::RESULT_TRY;
  return retstr;
}


// Action<CDOTA_BaseNPC>::OnUnStuck  (line 614, @0x0000000002882aa0, libserver.so)  // inlines: EventDesiredResult, IActionResult, TryContinue
EventDesiredResult<CDOTA_BaseNPC> *__fastcall Action<CDOTA_BaseNPC>::OnUnStuck(
        EventDesiredResult<CDOTA_BaseNPC> *__return_ptr retstr,
        Action<CDOTA_BaseNPC> *const this,
        CDOTA_BaseNPC *me)
{
  retstr->m_type = ActionResultType::CONTINUE;
  retstr->m_action = 0;
  retstr->m_reason = 0;
  retstr->m_priority = EventResultPriorityType::RESULT_TRY;
  return retstr;
}


// Action<CSimpleBot>::OnUnStuck  (line 614, @0x0000000002f1e3d0, libserver.so)  // inlines: EventDesiredResult, IActionResult, TryContinue
EventDesiredResult<CSimpleBot> *__fastcall Action<CSimpleBot>::OnUnStuck(
        EventDesiredResult<CSimpleBot> *__return_ptr retstr,
        Action<CSimpleBot> *const this,
        CSimpleBot *me)
{
  retstr->m_type = ActionResultType::CONTINUE;
  retstr->m_action = 0;
  retstr->m_reason = 0;
  retstr->m_priority = EventResultPriorityType::RESULT_TRY;
  return retstr;
}


// Action<CDOTA_BaseNPC>::OnPostureChanged  (line 615, @0x0000000002882ad0, libserver.so)  // inlines: EventDesiredResult, IActionResult, TryContinue
EventDesiredResult<CDOTA_BaseNPC> *__fastcall Action<CDOTA_BaseNPC>::OnPostureChanged(
        EventDesiredResult<CDOTA_BaseNPC> *__return_ptr retstr,
        Action<CDOTA_BaseNPC> *const this,
        CDOTA_BaseNPC *me)
{
  retstr->m_type = ActionResultType::CONTINUE;
  retstr->m_action = 0;
  retstr->m_reason = 0;
  retstr->m_priority = EventResultPriorityType::RESULT_TRY;
  return retstr;
}


// Action<CSimpleBot>::OnPostureChanged  (line 615, @0x0000000002f1e400, libserver.so)  // inlines: EventDesiredResult, IActionResult, TryContinue
EventDesiredResult<CSimpleBot> *__fastcall Action<CSimpleBot>::OnPostureChanged(
        EventDesiredResult<CSimpleBot> *__return_ptr retstr,
        Action<CSimpleBot> *const this,
        CSimpleBot *me)
{
  retstr->m_type = ActionResultType::CONTINUE;
  retstr->m_action = 0;
  retstr->m_reason = 0;
  retstr->m_priority = EventResultPriorityType::RESULT_TRY;
  return retstr;
}


// Action<CDOTA_BaseNPC>::OnAnimationActivityComplete  (line 616, @0x0000000002883420, libserver.so)  // inlines: EventDesiredResult, IActionResult, TryContinue
EventDesiredResult<CDOTA_BaseNPC> *__fastcall Action<CDOTA_BaseNPC>::OnAnimationActivityComplete(
        EventDesiredResult<CDOTA_BaseNPC> *__return_ptr retstr,
        Action<CDOTA_BaseNPC> *const this,
        CDOTA_BaseNPC *me,
        int activity)
{
  retstr->m_type = ActionResultType::CONTINUE;
  retstr->m_action = 0;
  retstr->m_reason = 0;
  retstr->m_priority = EventResultPriorityType::RESULT_TRY;
  return retstr;
}


// Action<CSimpleBot>::OnAnimationActivityComplete  (line 616, @0x0000000002f1e430, libserver.so)  // inlines: EventDesiredResult, IActionResult, TryContinue
EventDesiredResult<CSimpleBot> *__fastcall Action<CSimpleBot>::OnAnimationActivityComplete(
        EventDesiredResult<CSimpleBot> *__return_ptr retstr,
        Action<CSimpleBot> *const this,
        CSimpleBot *me,
        int activity)
{
  retstr->m_type = ActionResultType::CONTINUE;
  retstr->m_action = 0;
  retstr->m_reason = 0;
  retstr->m_priority = EventResultPriorityType::RESULT_TRY;
  return retstr;
}


// Action<CDOTA_BaseNPC>::OnAnimationActivityInterrupted  (line 617, @0x0000000002882b00, libserver.so)  // inlines: EventDesiredResult, IActionResult, TryContinue
EventDesiredResult<CDOTA_BaseNPC> *__fastcall Action<CDOTA_BaseNPC>::OnAnimationActivityInterrupted(
        EventDesiredResult<CDOTA_BaseNPC> *__return_ptr retstr,
        Action<CDOTA_BaseNPC> *const this,
        CDOTA_BaseNPC *me,
        int activity)
{
  retstr->m_type = ActionResultType::CONTINUE;
  retstr->m_action = 0;
  retstr->m_reason = 0;
  retstr->m_priority = EventResultPriorityType::RESULT_TRY;
  return retstr;
}


// Action<CSimpleBot>::OnAnimationActivityInterrupted  (line 617, @0x0000000002f1e460, libserver.so)  // inlines: EventDesiredResult, IActionResult, TryContinue
EventDesiredResult<CSimpleBot> *__fastcall Action<CSimpleBot>::OnAnimationActivityInterrupted(
        EventDesiredResult<CSimpleBot> *__return_ptr retstr,
        Action<CSimpleBot> *const this,
        CSimpleBot *me,
        int activity)
{
  retstr->m_type = ActionResultType::CONTINUE;
  retstr->m_action = 0;
  retstr->m_reason = 0;
  retstr->m_priority = EventResultPriorityType::RESULT_TRY;
  return retstr;
}


// Action<CDOTA_BaseNPC>::OnAnimationEvent  (line 618, @0x0000000002882b30, libserver.so)  // inlines: EventDesiredResult, IActionResult, TryContinue
EventDesiredResult<CDOTA_BaseNPC> *__fastcall Action<CDOTA_BaseNPC>::OnAnimationEvent(
        EventDesiredResult<CDOTA_BaseNPC> *__return_ptr retstr,
        Action<CDOTA_BaseNPC> *const this,
        CDOTA_BaseNPC *me,
        animevent_t *event)
{
  retstr->m_type = ActionResultType::CONTINUE;
  retstr->m_action = 0;
  retstr->m_reason = 0;
  retstr->m_priority = EventResultPriorityType::RESULT_TRY;
  return retstr;
}


// Action<CSimpleBot>::OnAnimationEvent  (line 618, @0x0000000002f1e490, libserver.so)  // inlines: EventDesiredResult, IActionResult, TryContinue
EventDesiredResult<CSimpleBot> *__fastcall Action<CSimpleBot>::OnAnimationEvent(
        EventDesiredResult<CSimpleBot> *__return_ptr retstr,
        Action<CSimpleBot> *const this,
        CSimpleBot *me,
        animevent_t *event)
{
  retstr->m_type = ActionResultType::CONTINUE;
  retstr->m_action = 0;
  retstr->m_reason = 0;
  retstr->m_priority = EventResultPriorityType::RESULT_TRY;
  return retstr;
}


// Action<CDOTA_BaseNPC>::OnIgnite  (line 619, @0x0000000002882b60, libserver.so)  // inlines: EventDesiredResult, IActionResult, TryContinue
EventDesiredResult<CDOTA_BaseNPC> *__fastcall Action<CDOTA_BaseNPC>::OnIgnite(
        EventDesiredResult<CDOTA_BaseNPC> *__return_ptr retstr,
        Action<CDOTA_BaseNPC> *const this,
        CDOTA_BaseNPC *me)
{
  retstr->m_type = ActionResultType::CONTINUE;
  retstr->m_action = 0;
  retstr->m_reason = 0;
  retstr->m_priority = EventResultPriorityType::RESULT_TRY;
  return retstr;
}


// Action<CSimpleBot>::OnIgnite  (line 619, @0x0000000002f1e4c0, libserver.so)  // inlines: EventDesiredResult, IActionResult, TryContinue
EventDesiredResult<CSimpleBot> *__fastcall Action<CSimpleBot>::OnIgnite(
        EventDesiredResult<CSimpleBot> *__return_ptr retstr,
        Action<CSimpleBot> *const this,
        CSimpleBot *me)
{
  retstr->m_type = ActionResultType::CONTINUE;
  retstr->m_action = 0;
  retstr->m_reason = 0;
  retstr->m_priority = EventResultPriorityType::RESULT_TRY;
  return retstr;
}


// Action<CDOTA_BaseNPC>::OnInjured  (line 620, @0x0000000002882b90, libserver.so)  // inlines: EventDesiredResult, IActionResult, TryContinue
EventDesiredResult<CDOTA_BaseNPC> *__fastcall Action<CDOTA_BaseNPC>::OnInjured(
        EventDesiredResult<CDOTA_BaseNPC> *__return_ptr retstr,
        Action<CDOTA_BaseNPC> *const this,
        CDOTA_BaseNPC *me,
        const CTakeDamageInfo *const info)
{
  retstr->m_type = ActionResultType::CONTINUE;
  retstr->m_action = 0;
  retstr->m_reason = 0;
  retstr->m_priority = EventResultPriorityType::RESULT_TRY;
  return retstr;
}


// Action<CSimpleBot>::OnInjured  (line 620, @0x0000000002f1e4f0, libserver.so)  // inlines: EventDesiredResult, IActionResult, TryContinue
EventDesiredResult<CSimpleBot> *__fastcall Action<CSimpleBot>::OnInjured(
        EventDesiredResult<CSimpleBot> *__return_ptr retstr,
        Action<CSimpleBot> *const this,
        CSimpleBot *me,
        const CTakeDamageInfo *const info)
{
  retstr->m_type = ActionResultType::CONTINUE;
  retstr->m_action = 0;
  retstr->m_reason = 0;
  retstr->m_priority = EventResultPriorityType::RESULT_TRY;
  return retstr;
}


// Action<CDOTA_BaseNPC>::OnKilled  (line 621, @0x0000000002882bc0, libserver.so)  // inlines: EventDesiredResult, IActionResult, TryContinue
EventDesiredResult<CDOTA_BaseNPC> *__fastcall Action<CDOTA_BaseNPC>::OnKilled(
        EventDesiredResult<CDOTA_BaseNPC> *__return_ptr retstr,
        Action<CDOTA_BaseNPC> *const this,
        CDOTA_BaseNPC *me,
        const CTakeDamageInfo *const info)
{
  retstr->m_type = ActionResultType::CONTINUE;
  retstr->m_action = 0;
  retstr->m_reason = 0;
  retstr->m_priority = EventResultPriorityType::RESULT_TRY;
  return retstr;
}


// Action<CSimpleBot>::OnKilled  (line 621, @0x0000000002f1e520, libserver.so)  // inlines: EventDesiredResult, IActionResult, TryContinue
EventDesiredResult<CSimpleBot> *__fastcall Action<CSimpleBot>::OnKilled(
        EventDesiredResult<CSimpleBot> *__return_ptr retstr,
        Action<CSimpleBot> *const this,
        CSimpleBot *me,
        const CTakeDamageInfo *const info)
{
  retstr->m_type = ActionResultType::CONTINUE;
  retstr->m_action = 0;
  retstr->m_reason = 0;
  retstr->m_priority = EventResultPriorityType::RESULT_TRY;
  return retstr;
}


// Action<CDOTA_BaseNPC>::OnOtherKilled  (line 622, @0x0000000002882bf0, libserver.so)  // inlines: EventDesiredResult, IActionResult, TryContinue
EventDesiredResult<CDOTA_BaseNPC> *__fastcall Action<CDOTA_BaseNPC>::OnOtherKilled(
        EventDesiredResult<CDOTA_BaseNPC> *__return_ptr retstr,
        Action<CDOTA_BaseNPC> *const this,
        CDOTA_BaseNPC *me,
        CBaseCombatCharacter *victim,
        const CTakeDamageInfo *const info)
{
  retstr->m_type = ActionResultType::CONTINUE;
  retstr->m_action = 0;
  retstr->m_reason = 0;
  retstr->m_priority = EventResultPriorityType::RESULT_TRY;
  return retstr;
}


// Action<CSimpleBot>::OnOtherKilled  (line 622, @0x0000000002f1e550, libserver.so)  // inlines: EventDesiredResult, IActionResult, TryContinue
EventDesiredResult<CSimpleBot> *__fastcall Action<CSimpleBot>::OnOtherKilled(
        EventDesiredResult<CSimpleBot> *__return_ptr retstr,
        Action<CSimpleBot> *const this,
        CSimpleBot *me,
        CBaseCombatCharacter *victim,
        const CTakeDamageInfo *const info)
{
  retstr->m_type = ActionResultType::CONTINUE;
  retstr->m_action = 0;
  retstr->m_reason = 0;
  retstr->m_priority = EventResultPriorityType::RESULT_TRY;
  return retstr;
}


// Action<CDOTA_BaseNPC>::OnSight  (line 623, @0x0000000002882c20, libserver.so)  // inlines: EventDesiredResult, IActionResult, TryContinue
EventDesiredResult<CDOTA_BaseNPC> *__fastcall Action<CDOTA_BaseNPC>::OnSight(
        EventDesiredResult<CDOTA_BaseNPC> *__return_ptr retstr,
        Action<CDOTA_BaseNPC> *const this,
        CDOTA_BaseNPC *me,
        CBaseEntity *subject)
{
  retstr->m_type = ActionResultType::CONTINUE;
  retstr->m_action = 0;
  retstr->m_reason = 0;
  retstr->m_priority = EventResultPriorityType::RESULT_TRY;
  return retstr;
}


// Action<CSimpleBot>::OnSight  (line 623, @0x0000000002f1e580, libserver.so)  // inlines: EventDesiredResult, IActionResult, TryContinue
EventDesiredResult<CSimpleBot> *__fastcall Action<CSimpleBot>::OnSight(
        EventDesiredResult<CSimpleBot> *__return_ptr retstr,
        Action<CSimpleBot> *const this,
        CSimpleBot *me,
        CBaseEntity *subject)
{
  retstr->m_type = ActionResultType::CONTINUE;
  retstr->m_action = 0;
  retstr->m_reason = 0;
  retstr->m_priority = EventResultPriorityType::RESULT_TRY;
  return retstr;
}


// Action<CDOTA_BaseNPC>::OnLostSight  (line 624, @0x0000000002882c50, libserver.so)  // inlines: EventDesiredResult, IActionResult, TryContinue
EventDesiredResult<CDOTA_BaseNPC> *__fastcall Action<CDOTA_BaseNPC>::OnLostSight(
        EventDesiredResult<CDOTA_BaseNPC> *__return_ptr retstr,
        Action<CDOTA_BaseNPC> *const this,
        CDOTA_BaseNPC *me,
        CBaseEntity *subject)
{
  retstr->m_type = ActionResultType::CONTINUE;
  retstr->m_action = 0;
  retstr->m_reason = 0;
  retstr->m_priority = EventResultPriorityType::RESULT_TRY;
  return retstr;
}


// Action<CSimpleBot>::OnLostSight  (line 624, @0x0000000002f1e5b0, libserver.so)  // inlines: EventDesiredResult, IActionResult, TryContinue
EventDesiredResult<CSimpleBot> *__fastcall Action<CSimpleBot>::OnLostSight(
        EventDesiredResult<CSimpleBot> *__return_ptr retstr,
        Action<CSimpleBot> *const this,
        CSimpleBot *me,
        CBaseEntity *subject)
{
  retstr->m_type = ActionResultType::CONTINUE;
  retstr->m_action = 0;
  retstr->m_reason = 0;
  retstr->m_priority = EventResultPriorityType::RESULT_TRY;
  return retstr;
}


// Action<CDOTA_BaseNPC>::OnSound  (line 625, @0x0000000002882c80, libserver.so)  // inlines: EventDesiredResult, IActionResult, TryContinue
EventDesiredResult<CDOTA_BaseNPC> *__fastcall Action<CDOTA_BaseNPC>::OnSound(
        EventDesiredResult<CDOTA_BaseNPC> *__return_ptr retstr,
        Action<CDOTA_BaseNPC> *const this,
        CDOTA_BaseNPC *me,
        CBaseEntity *source,
        const Vector *const pos,
        KeyValues *keys)
{
  retstr->m_type = ActionResultType::CONTINUE;
  retstr->m_action = 0;
  retstr->m_reason = 0;
  retstr->m_priority = EventResultPriorityType::RESULT_TRY;
  return retstr;
}


// Action<CSimpleBot>::OnSound  (line 625, @0x0000000002f1e5e0, libserver.so)  // inlines: EventDesiredResult, IActionResult, TryContinue
EventDesiredResult<CSimpleBot> *__fastcall Action<CSimpleBot>::OnSound(
        EventDesiredResult<CSimpleBot> *__return_ptr retstr,
        Action<CSimpleBot> *const this,
        CSimpleBot *me,
        CBaseEntity *source,
        const Vector *const pos,
        KeyValues *keys)
{
  retstr->m_type = ActionResultType::CONTINUE;
  retstr->m_action = 0;
  retstr->m_reason = 0;
  retstr->m_priority = EventResultPriorityType::RESULT_TRY;
  return retstr;
}


// Action<CDOTA_BaseNPC>::OnSpokeConcept  (line 626, @0x0000000002882cb0, libserver.so)  // inlines: EventDesiredResult, IActionResult, TryContinue
EventDesiredResult<CDOTA_BaseNPC> *__fastcall Action<CDOTA_BaseNPC>::OnSpokeConcept(
        EventDesiredResult<CDOTA_BaseNPC> *__return_ptr retstr,
        Action<CDOTA_BaseNPC> *const this,
        CDOTA_BaseNPC *me,
        CBaseCombatCharacter *who,
        AIConcept_t concept,
        AI_Response *response)
{
  retstr->m_type = ActionResultType::CONTINUE;
  retstr->m_action = 0;
  retstr->m_reason = 0;
  retstr->m_priority = EventResultPriorityType::RESULT_TRY;
  return retstr;
}


// Action<CSimpleBot>::OnSpokeConcept  (line 626, @0x0000000002f1e610, libserver.so)  // inlines: EventDesiredResult, IActionResult, TryContinue
EventDesiredResult<CSimpleBot> *__fastcall Action<CSimpleBot>::OnSpokeConcept(
        EventDesiredResult<CSimpleBot> *__return_ptr retstr,
        Action<CSimpleBot> *const this,
        CSimpleBot *me,
        CBaseCombatCharacter *who,
        AIConcept_t concept,
        AI_Response *response)
{
  retstr->m_type = ActionResultType::CONTINUE;
  retstr->m_action = 0;
  retstr->m_reason = 0;
  retstr->m_priority = EventResultPriorityType::RESULT_TRY;
  return retstr;
}


// Action<CDOTA_BaseNPC>::OnWeaponFired  (line 627, @0x0000000002882ce0, libserver.so)  // inlines: EventDesiredResult, IActionResult, TryContinue
EventDesiredResult<CDOTA_BaseNPC> *__fastcall Action<CDOTA_BaseNPC>::OnWeaponFired(
        EventDesiredResult<CDOTA_BaseNPC> *__return_ptr retstr,
        Action<CDOTA_BaseNPC> *const this,
        CDOTA_BaseNPC *me,
        CBaseCombatCharacter *whoFired,
        CBaseCombatWeapon *weapon)
{
  retstr->m_type = ActionResultType::CONTINUE;
  retstr->m_action = 0;
  retstr->m_reason = 0;
  retstr->m_priority = EventResultPriorityType::RESULT_TRY;
  return retstr;
}


// Action<CSimpleBot>::OnWeaponFired  (line 627, @0x0000000002f1e640, libserver.so)  // inlines: EventDesiredResult, IActionResult, TryContinue
EventDesiredResult<CSimpleBot> *__fastcall Action<CSimpleBot>::OnWeaponFired(
        EventDesiredResult<CSimpleBot> *__return_ptr retstr,
        Action<CSimpleBot> *const this,
        CSimpleBot *me,
        CBaseCombatCharacter *whoFired,
        CBaseCombatWeapon *weapon)
{
  retstr->m_type = ActionResultType::CONTINUE;
  retstr->m_action = 0;
  retstr->m_reason = 0;
  retstr->m_priority = EventResultPriorityType::RESULT_TRY;
  return retstr;
}


// Action<CDOTA_BaseNPC>::OnNavAreaChanged  (line 628, @0x0000000002882d10, libserver.so)  // inlines: EventDesiredResult, IActionResult, TryContinue
EventDesiredResult<CDOTA_BaseNPC> *__fastcall Action<CDOTA_BaseNPC>::OnNavAreaChanged(
        EventDesiredResult<CDOTA_BaseNPC> *__return_ptr retstr,
        Action<CDOTA_BaseNPC> *const this,
        CDOTA_BaseNPC *me,
        CNavArea *newArea,
        CNavArea *oldArea)
{
  retstr->m_type = ActionResultType::CONTINUE;
  retstr->m_action = 0;
  retstr->m_reason = 0;
  retstr->m_priority = EventResultPriorityType::RESULT_TRY;
  return retstr;
}


// Action<CSimpleBot>::OnNavAreaChanged  (line 628, @0x0000000002f1e670, libserver.so)  // inlines: EventDesiredResult, IActionResult, TryContinue
EventDesiredResult<CSimpleBot> *__fastcall Action<CSimpleBot>::OnNavAreaChanged(
        EventDesiredResult<CSimpleBot> *__return_ptr retstr,
        Action<CSimpleBot> *const this,
        CSimpleBot *me,
        CNavArea *newArea,
        CNavArea *oldArea)
{
  retstr->m_type = ActionResultType::CONTINUE;
  retstr->m_action = 0;
  retstr->m_reason = 0;
  retstr->m_priority = EventResultPriorityType::RESULT_TRY;
  return retstr;
}


// Action<CDOTA_BaseNPC>::OnModelChanged  (line 629, @0x0000000002882d40, libserver.so)  // inlines: EventDesiredResult, IActionResult, TryContinue
EventDesiredResult<CDOTA_BaseNPC> *__fastcall Action<CDOTA_BaseNPC>::OnModelChanged(
        EventDesiredResult<CDOTA_BaseNPC> *__return_ptr retstr,
        Action<CDOTA_BaseNPC> *const this,
        CDOTA_BaseNPC *me)
{
  retstr->m_type = ActionResultType::CONTINUE;
  retstr->m_action = 0;
  retstr->m_reason = 0;
  retstr->m_priority = EventResultPriorityType::RESULT_TRY;
  return retstr;
}


// Action<CSimpleBot>::OnModelChanged  (line 629, @0x0000000002f1e6a0, libserver.so)  // inlines: EventDesiredResult, IActionResult, TryContinue
EventDesiredResult<CSimpleBot> *__fastcall Action<CSimpleBot>::OnModelChanged(
        EventDesiredResult<CSimpleBot> *__return_ptr retstr,
        Action<CSimpleBot> *const this,
        CSimpleBot *me)
{
  retstr->m_type = ActionResultType::CONTINUE;
  retstr->m_action = 0;
  retstr->m_reason = 0;
  retstr->m_priority = EventResultPriorityType::RESULT_TRY;
  return retstr;
}


// Action<CDOTA_BaseNPC>::OnPickUp  (line 630, @0x0000000002882d70, libserver.so)  // inlines: EventDesiredResult, IActionResult, TryContinue
EventDesiredResult<CDOTA_BaseNPC> *__fastcall Action<CDOTA_BaseNPC>::OnPickUp(
        EventDesiredResult<CDOTA_BaseNPC> *__return_ptr retstr,
        Action<CDOTA_BaseNPC> *const this,
        CDOTA_BaseNPC *me,
        CBaseEntity *item,
        CBaseCombatCharacter *giver)
{
  retstr->m_type = ActionResultType::CONTINUE;
  retstr->m_action = 0;
  retstr->m_reason = 0;
  retstr->m_priority = EventResultPriorityType::RESULT_TRY;
  return retstr;
}


// Action<CSimpleBot>::OnPickUp  (line 630, @0x0000000002f1e6d0, libserver.so)  // inlines: EventDesiredResult, IActionResult, TryContinue
EventDesiredResult<CSimpleBot> *__fastcall Action<CSimpleBot>::OnPickUp(
        EventDesiredResult<CSimpleBot> *__return_ptr retstr,
        Action<CSimpleBot> *const this,
        CSimpleBot *me,
        CBaseEntity *item,
        CBaseCombatCharacter *giver)
{
  retstr->m_type = ActionResultType::CONTINUE;
  retstr->m_action = 0;
  retstr->m_reason = 0;
  retstr->m_priority = EventResultPriorityType::RESULT_TRY;
  return retstr;
}


// Action<CDOTA_BaseNPC>::OnDrop  (line 631, @0x0000000002882da0, libserver.so)  // inlines: EventDesiredResult, IActionResult, TryContinue
EventDesiredResult<CDOTA_BaseNPC> *__fastcall Action<CDOTA_BaseNPC>::OnDrop(
        EventDesiredResult<CDOTA_BaseNPC> *__return_ptr retstr,
        Action<CDOTA_BaseNPC> *const this,
        CDOTA_BaseNPC *me,
        CBaseEntity *item)
{
  retstr->m_type = ActionResultType::CONTINUE;
  retstr->m_action = 0;
  retstr->m_reason = 0;
  retstr->m_priority = EventResultPriorityType::RESULT_TRY;
  return retstr;
}


// Action<CSimpleBot>::OnDrop  (line 631, @0x0000000002f1e700, libserver.so)  // inlines: EventDesiredResult, IActionResult, TryContinue
EventDesiredResult<CSimpleBot> *__fastcall Action<CSimpleBot>::OnDrop(
        EventDesiredResult<CSimpleBot> *__return_ptr retstr,
        Action<CSimpleBot> *const this,
        CSimpleBot *me,
        CBaseEntity *item)
{
  retstr->m_type = ActionResultType::CONTINUE;
  retstr->m_action = 0;
  retstr->m_reason = 0;
  retstr->m_priority = EventResultPriorityType::RESULT_TRY;
  return retstr;
}


// Action<CDOTA_BaseNPC>::OnActorEmoted  (line 632, @0x0000000002882dd0, libserver.so)  // inlines: EventDesiredResult, IActionResult, TryContinue
EventDesiredResult<CDOTA_BaseNPC> *__fastcall Action<CDOTA_BaseNPC>::OnActorEmoted(
        EventDesiredResult<CDOTA_BaseNPC> *__return_ptr retstr,
        Action<CDOTA_BaseNPC> *const this,
        CDOTA_BaseNPC *me,
        CBaseCombatCharacter *emoter,
        int emote)
{
  retstr->m_type = ActionResultType::CONTINUE;
  retstr->m_action = 0;
  retstr->m_reason = 0;
  retstr->m_priority = EventResultPriorityType::RESULT_TRY;
  return retstr;
}


// Action<CSimpleBot>::OnActorEmoted  (line 632, @0x0000000002f1e730, libserver.so)  // inlines: EventDesiredResult, IActionResult, TryContinue
EventDesiredResult<CSimpleBot> *__fastcall Action<CSimpleBot>::OnActorEmoted(
        EventDesiredResult<CSimpleBot> *__return_ptr retstr,
        Action<CSimpleBot> *const this,
        CSimpleBot *me,
        CBaseCombatCharacter *emoter,
        int emote)
{
  retstr->m_type = ActionResultType::CONTINUE;
  retstr->m_action = 0;
  retstr->m_reason = 0;
  retstr->m_priority = EventResultPriorityType::RESULT_TRY;
  return retstr;
}


// Action<CDOTA_BaseNPC>::OnCommandAttack  (line 634, @0x0000000002882e00, libserver.so)  // inlines: EventDesiredResult, IActionResult, TryContinue
EventDesiredResult<CDOTA_BaseNPC> *__fastcall Action<CDOTA_BaseNPC>::OnCommandAttack(
        EventDesiredResult<CDOTA_BaseNPC> *__return_ptr retstr,
        Action<CDOTA_BaseNPC> *const this,
        CDOTA_BaseNPC *me,
        CBaseEntity *victim)
{
  retstr->m_type = ActionResultType::CONTINUE;
  retstr->m_action = 0;
  retstr->m_reason = 0;
  retstr->m_priority = EventResultPriorityType::RESULT_TRY;
  return retstr;
}


// Action<CSimpleBot>::OnCommandAttack  (line 634, @0x0000000002f1e760, libserver.so)  // inlines: EventDesiredResult, IActionResult, TryContinue
EventDesiredResult<CSimpleBot> *__fastcall Action<CSimpleBot>::OnCommandAttack(
        EventDesiredResult<CSimpleBot> *__return_ptr retstr,
        Action<CSimpleBot> *const this,
        CSimpleBot *me,
        CBaseEntity *victim)
{
  retstr->m_type = ActionResultType::CONTINUE;
  retstr->m_action = 0;
  retstr->m_reason = 0;
  retstr->m_priority = EventResultPriorityType::RESULT_TRY;
  return retstr;
}


// Action<CDOTA_BaseNPC>::OnCommandApproach  (line 635, @0x0000000002882e30, libserver.so)  // inlines: EventDesiredResult, IActionResult, TryContinue
EventDesiredResult<CDOTA_BaseNPC> *__fastcall Action<CDOTA_BaseNPC>::OnCommandApproach(
        EventDesiredResult<CDOTA_BaseNPC> *__return_ptr retstr,
        Action<CDOTA_BaseNPC> *const this,
        CDOTA_BaseNPC *me,
        const Vector *const pos,
        float range)
{
  retstr->m_type = ActionResultType::CONTINUE;
  retstr->m_action = 0;
  retstr->m_reason = 0;
  retstr->m_priority = EventResultPriorityType::RESULT_TRY;
  return retstr;
}


// Action<CSimpleBot>::OnCommandApproach  (line 635, @0x0000000002f1e790, libserver.so)  // inlines: EventDesiredResult, IActionResult, TryContinue
EventDesiredResult<CSimpleBot> *__fastcall Action<CSimpleBot>::OnCommandApproach(
        EventDesiredResult<CSimpleBot> *__return_ptr retstr,
        Action<CSimpleBot> *const this,
        CSimpleBot *me,
        const Vector *const pos,
        float range)
{
  retstr->m_type = ActionResultType::CONTINUE;
  retstr->m_action = 0;
  retstr->m_reason = 0;
  retstr->m_priority = EventResultPriorityType::RESULT_TRY;
  return retstr;
}


// Action<CDOTA_BaseNPC>::OnCommandApproach  (line 636, @0x0000000002882e60, libserver.so)  // inlines: EventDesiredResult, IActionResult, TryContinue
EventDesiredResult<CDOTA_BaseNPC> *__fastcall Action<CDOTA_BaseNPC>::OnCommandApproach(
        EventDesiredResult<CDOTA_BaseNPC> *__return_ptr retstr,
        Action<CDOTA_BaseNPC> *const this,
        CDOTA_BaseNPC *me,
        CBaseEntity *goal)
{
  retstr->m_type = ActionResultType::CONTINUE;
  retstr->m_action = 0;
  retstr->m_reason = 0;
  retstr->m_priority = EventResultPriorityType::RESULT_TRY;
  return retstr;
}


// Action<CSimpleBot>::OnCommandApproach  (line 636, @0x0000000002f1e7c0, libserver.so)  // inlines: EventDesiredResult, IActionResult, TryContinue
EventDesiredResult<CSimpleBot> *__fastcall Action<CSimpleBot>::OnCommandApproach(
        EventDesiredResult<CSimpleBot> *__return_ptr retstr,
        Action<CSimpleBot> *const this,
        CSimpleBot *me,
        CBaseEntity *goal)
{
  retstr->m_type = ActionResultType::CONTINUE;
  retstr->m_action = 0;
  retstr->m_reason = 0;
  retstr->m_priority = EventResultPriorityType::RESULT_TRY;
  return retstr;
}


// Action<CDOTA_BaseNPC>::OnCommandRetreat  (line 637, @0x0000000002882e90, libserver.so)  // inlines: EventDesiredResult, IActionResult, TryContinue
EventDesiredResult<CDOTA_BaseNPC> *__fastcall Action<CDOTA_BaseNPC>::OnCommandRetreat(
        EventDesiredResult<CDOTA_BaseNPC> *__return_ptr retstr,
        Action<CDOTA_BaseNPC> *const this,
        CDOTA_BaseNPC *me,
        CBaseEntity *threat,
        float range)
{
  retstr->m_type = ActionResultType::CONTINUE;
  retstr->m_action = 0;
  retstr->m_reason = 0;
  retstr->m_priority = EventResultPriorityType::RESULT_TRY;
  return retstr;
}


// Action<CSimpleBot>::OnCommandRetreat  (line 637, @0x0000000002f1e7f0, libserver.so)  // inlines: EventDesiredResult, IActionResult, TryContinue
EventDesiredResult<CSimpleBot> *__fastcall Action<CSimpleBot>::OnCommandRetreat(
        EventDesiredResult<CSimpleBot> *__return_ptr retstr,
        Action<CSimpleBot> *const this,
        CSimpleBot *me,
        CBaseEntity *threat,
        float range)
{
  retstr->m_type = ActionResultType::CONTINUE;
  retstr->m_action = 0;
  retstr->m_reason = 0;
  retstr->m_priority = EventResultPriorityType::RESULT_TRY;
  return retstr;
}


// Action<CDOTA_BaseNPC>::OnCommandPause  (line 638, @0x0000000002882ec0, libserver.so)  // inlines: EventDesiredResult, IActionResult, TryContinue
EventDesiredResult<CDOTA_BaseNPC> *__fastcall Action<CDOTA_BaseNPC>::OnCommandPause(
        EventDesiredResult<CDOTA_BaseNPC> *__return_ptr retstr,
        Action<CDOTA_BaseNPC> *const this,
        CDOTA_BaseNPC *me,
        float duration)
{
  retstr->m_type = ActionResultType::CONTINUE;
  retstr->m_action = 0;
  retstr->m_reason = 0;
  retstr->m_priority = EventResultPriorityType::RESULT_TRY;
  return retstr;
}


// Action<CSimpleBot>::OnCommandPause  (line 638, @0x0000000002f1e820, libserver.so)  // inlines: EventDesiredResult, IActionResult, TryContinue
EventDesiredResult<CSimpleBot> *__fastcall Action<CSimpleBot>::OnCommandPause(
        EventDesiredResult<CSimpleBot> *__return_ptr retstr,
        Action<CSimpleBot> *const this,
        CSimpleBot *me,
        float duration)
{
  retstr->m_type = ActionResultType::CONTINUE;
  retstr->m_action = 0;
  retstr->m_reason = 0;
  retstr->m_priority = EventResultPriorityType::RESULT_TRY;
  return retstr;
}


// Action<CDOTA_BaseNPC>::OnCommandResume  (line 639, @0x0000000002882ef0, libserver.so)  // inlines: EventDesiredResult, IActionResult, TryContinue
EventDesiredResult<CDOTA_BaseNPC> *__fastcall Action<CDOTA_BaseNPC>::OnCommandResume(
        EventDesiredResult<CDOTA_BaseNPC> *__return_ptr retstr,
        Action<CDOTA_BaseNPC> *const this,
        CDOTA_BaseNPC *me)
{
  retstr->m_type = ActionResultType::CONTINUE;
  retstr->m_action = 0;
  retstr->m_reason = 0;
  retstr->m_priority = EventResultPriorityType::RESULT_TRY;
  return retstr;
}


// Action<CSimpleBot>::OnCommandResume  (line 639, @0x0000000002f1e850, libserver.so)  // inlines: EventDesiredResult, IActionResult, TryContinue
EventDesiredResult<CSimpleBot> *__fastcall Action<CSimpleBot>::OnCommandResume(
        EventDesiredResult<CSimpleBot> *__return_ptr retstr,
        Action<CSimpleBot> *const this,
        CSimpleBot *me)
{
  retstr->m_type = ActionResultType::CONTINUE;
  retstr->m_action = 0;
  retstr->m_reason = 0;
  retstr->m_priority = EventResultPriorityType::RESULT_TRY;
  return retstr;
}


// Action<CDOTA_BaseNPC>::OnCommandString  (line 640, @0x0000000002882f20, libserver.so)  // inlines: EventDesiredResult, IActionResult, TryContinue
EventDesiredResult<CDOTA_BaseNPC> *__fastcall Action<CDOTA_BaseNPC>::OnCommandString(
        EventDesiredResult<CDOTA_BaseNPC> *__return_ptr retstr,
        Action<CDOTA_BaseNPC> *const this,
        CDOTA_BaseNPC *me,
        const char *command)
{
  retstr->m_type = ActionResultType::CONTINUE;
  retstr->m_action = 0;
  retstr->m_reason = 0;
  retstr->m_priority = EventResultPriorityType::RESULT_TRY;
  return retstr;
}


// Action<CSimpleBot>::OnCommandString  (line 640, @0x0000000002f1e880, libserver.so)  // inlines: EventDesiredResult, IActionResult, TryContinue
EventDesiredResult<CSimpleBot> *__fastcall Action<CSimpleBot>::OnCommandString(
        EventDesiredResult<CSimpleBot> *__return_ptr retstr,
        Action<CSimpleBot> *const this,
        CSimpleBot *me,
        const char *command)
{
  retstr->m_type = ActionResultType::CONTINUE;
  retstr->m_action = 0;
  retstr->m_reason = 0;
  retstr->m_priority = EventResultPriorityType::RESULT_TRY;
  return retstr;
}


// Action<CDOTA_BaseNPC>::OnShoved  (line 642, @0x0000000002882f50, libserver.so)  // inlines: EventDesiredResult, IActionResult, TryContinue
EventDesiredResult<CDOTA_BaseNPC> *__fastcall Action<CDOTA_BaseNPC>::OnShoved(
        EventDesiredResult<CDOTA_BaseNPC> *__return_ptr retstr,
        Action<CDOTA_BaseNPC> *const this,
        CDOTA_BaseNPC *me,
        CBaseEntity *pusher)
{
  retstr->m_type = ActionResultType::CONTINUE;
  retstr->m_action = 0;
  retstr->m_reason = 0;
  retstr->m_priority = EventResultPriorityType::RESULT_TRY;
  return retstr;
}


// Action<CSimpleBot>::OnShoved  (line 642, @0x0000000002f1e8b0, libserver.so)  // inlines: EventDesiredResult, IActionResult, TryContinue
EventDesiredResult<CSimpleBot> *__fastcall Action<CSimpleBot>::OnShoved(
        EventDesiredResult<CSimpleBot> *__return_ptr retstr,
        Action<CSimpleBot> *const this,
        CSimpleBot *me,
        CBaseEntity *pusher)
{
  retstr->m_type = ActionResultType::CONTINUE;
  retstr->m_action = 0;
  retstr->m_reason = 0;
  retstr->m_priority = EventResultPriorityType::RESULT_TRY;
  return retstr;
}


// Action<CDOTA_BaseNPC>::OnBlinded  (line 643, @0x0000000002882f80, libserver.so)  // inlines: EventDesiredResult, IActionResult, TryContinue
EventDesiredResult<CDOTA_BaseNPC> *__fastcall Action<CDOTA_BaseNPC>::OnBlinded(
        EventDesiredResult<CDOTA_BaseNPC> *__return_ptr retstr,
        Action<CDOTA_BaseNPC> *const this,
        CDOTA_BaseNPC *me,
        CBaseEntity *blinder)
{
  retstr->m_type = ActionResultType::CONTINUE;
  retstr->m_action = 0;
  retstr->m_reason = 0;
  retstr->m_priority = EventResultPriorityType::RESULT_TRY;
  return retstr;
}


// Action<CSimpleBot>::OnBlinded  (line 643, @0x0000000002f1e8e0, libserver.so)  // inlines: EventDesiredResult, IActionResult, TryContinue
EventDesiredResult<CSimpleBot> *__fastcall Action<CSimpleBot>::OnBlinded(
        EventDesiredResult<CSimpleBot> *__return_ptr retstr,
        Action<CSimpleBot> *const this,
        CSimpleBot *me,
        CBaseEntity *blinder)
{
  retstr->m_type = ActionResultType::CONTINUE;
  retstr->m_action = 0;
  retstr->m_reason = 0;
  retstr->m_priority = EventResultPriorityType::RESULT_TRY;
  return retstr;
}


// Action<CDOTA_BaseNPC>::OnTerritoryContested  (line 644, @0x0000000002882fb0, libserver.so)  // inlines: EventDesiredResult, IActionResult, TryContinue
EventDesiredResult<CDOTA_BaseNPC> *__fastcall Action<CDOTA_BaseNPC>::OnTerritoryContested(
        EventDesiredResult<CDOTA_BaseNPC> *__return_ptr retstr,
        Action<CDOTA_BaseNPC> *const this,
        CDOTA_BaseNPC *me,
        int territoryID)
{
  retstr->m_type = ActionResultType::CONTINUE;
  retstr->m_action = 0;
  retstr->m_reason = 0;
  retstr->m_priority = EventResultPriorityType::RESULT_TRY;
  return retstr;
}


// Action<CSimpleBot>::OnTerritoryContested  (line 644, @0x0000000002f1e910, libserver.so)  // inlines: EventDesiredResult, IActionResult, TryContinue
EventDesiredResult<CSimpleBot> *__fastcall Action<CSimpleBot>::OnTerritoryContested(
        EventDesiredResult<CSimpleBot> *__return_ptr retstr,
        Action<CSimpleBot> *const this,
        CSimpleBot *me,
        int territoryID)
{
  retstr->m_type = ActionResultType::CONTINUE;
  retstr->m_action = 0;
  retstr->m_reason = 0;
  retstr->m_priority = EventResultPriorityType::RESULT_TRY;
  return retstr;
}


// Action<CDOTA_BaseNPC>::OnTerritoryCaptured  (line 645, @0x0000000002882fe0, libserver.so)  // inlines: EventDesiredResult, IActionResult, TryContinue
EventDesiredResult<CDOTA_BaseNPC> *__fastcall Action<CDOTA_BaseNPC>::OnTerritoryCaptured(
        EventDesiredResult<CDOTA_BaseNPC> *__return_ptr retstr,
        Action<CDOTA_BaseNPC> *const this,
        CDOTA_BaseNPC *me,
        int territoryID)
{
  retstr->m_type = ActionResultType::CONTINUE;
  retstr->m_action = 0;
  retstr->m_reason = 0;
  retstr->m_priority = EventResultPriorityType::RESULT_TRY;
  return retstr;
}


// Action<CSimpleBot>::OnTerritoryCaptured  (line 645, @0x0000000002f1e940, libserver.so)  // inlines: EventDesiredResult, IActionResult, TryContinue
EventDesiredResult<CSimpleBot> *__fastcall Action<CSimpleBot>::OnTerritoryCaptured(
        EventDesiredResult<CSimpleBot> *__return_ptr retstr,
        Action<CSimpleBot> *const this,
        CSimpleBot *me,
        int territoryID)
{
  retstr->m_type = ActionResultType::CONTINUE;
  retstr->m_action = 0;
  retstr->m_reason = 0;
  retstr->m_priority = EventResultPriorityType::RESULT_TRY;
  return retstr;
}


// Action<CDOTA_BaseNPC>::OnTerritoryLost  (line 646, @0x0000000002883010, libserver.so)  // inlines: EventDesiredResult, IActionResult, TryContinue
EventDesiredResult<CDOTA_BaseNPC> *__fastcall Action<CDOTA_BaseNPC>::OnTerritoryLost(
        EventDesiredResult<CDOTA_BaseNPC> *__return_ptr retstr,
        Action<CDOTA_BaseNPC> *const this,
        CDOTA_BaseNPC *me,
        int territoryID)
{
  retstr->m_type = ActionResultType::CONTINUE;
  retstr->m_action = 0;
  retstr->m_reason = 0;
  retstr->m_priority = EventResultPriorityType::RESULT_TRY;
  return retstr;
}


// Action<CSimpleBot>::OnTerritoryLost  (line 646, @0x0000000002f1e970, libserver.so)  // inlines: EventDesiredResult, IActionResult, TryContinue
EventDesiredResult<CSimpleBot> *__fastcall Action<CSimpleBot>::OnTerritoryLost(
        EventDesiredResult<CSimpleBot> *__return_ptr retstr,
        Action<CSimpleBot> *const this,
        CSimpleBot *me,
        int territoryID)
{
  retstr->m_type = ActionResultType::CONTINUE;
  retstr->m_action = 0;
  retstr->m_reason = 0;
  retstr->m_priority = EventResultPriorityType::RESULT_TRY;
  return retstr;
}


// Action<CDOTA_BaseNPC>::OnWin  (line 647, @0x0000000002883040, libserver.so)  // inlines: EventDesiredResult, IActionResult, TryContinue
EventDesiredResult<CDOTA_BaseNPC> *__fastcall Action<CDOTA_BaseNPC>::OnWin(
        EventDesiredResult<CDOTA_BaseNPC> *__return_ptr retstr,
        Action<CDOTA_BaseNPC> *const this,
        CDOTA_BaseNPC *me)
{
  retstr->m_type = ActionResultType::CONTINUE;
  retstr->m_action = 0;
  retstr->m_reason = 0;
  retstr->m_priority = EventResultPriorityType::RESULT_TRY;
  return retstr;
}


// Action<CSimpleBot>::OnWin  (line 647, @0x0000000002f1e9a0, libserver.so)  // inlines: EventDesiredResult, IActionResult, TryContinue
EventDesiredResult<CSimpleBot> *__fastcall Action<CSimpleBot>::OnWin(
        EventDesiredResult<CSimpleBot> *__return_ptr retstr,
        Action<CSimpleBot> *const this,
        CSimpleBot *me)
{
  retstr->m_type = ActionResultType::CONTINUE;
  retstr->m_action = 0;
  retstr->m_reason = 0;
  retstr->m_priority = EventResultPriorityType::RESULT_TRY;
  return retstr;
}


// Action<CDOTA_BaseNPC>::OnLose  (line 648, @0x0000000002883070, libserver.so)  // inlines: EventDesiredResult, IActionResult, TryContinue
EventDesiredResult<CDOTA_BaseNPC> *__fastcall Action<CDOTA_BaseNPC>::OnLose(
        EventDesiredResult<CDOTA_BaseNPC> *__return_ptr retstr,
        Action<CDOTA_BaseNPC> *const this,
        CDOTA_BaseNPC *me)
{
  retstr->m_type = ActionResultType::CONTINUE;
  retstr->m_action = 0;
  retstr->m_reason = 0;
  retstr->m_priority = EventResultPriorityType::RESULT_TRY;
  return retstr;
}


// Action<CSimpleBot>::OnLose  (line 648, @0x0000000002f1e9d0, libserver.so)  // inlines: EventDesiredResult, IActionResult, TryContinue
EventDesiredResult<CSimpleBot> *__fastcall Action<CSimpleBot>::OnLose(
        EventDesiredResult<CSimpleBot> *__return_ptr retstr,
        Action<CSimpleBot> *const this,
        CSimpleBot *me)
{
  retstr->m_type = ActionResultType::CONTINUE;
  retstr->m_action = 0;
  retstr->m_reason = 0;
  retstr->m_priority = EventResultPriorityType::RESULT_TRY;
  return retstr;
}


// Action<CDOTA_BaseNPC>::OnCommandMoveTo  (line 651, @0x00000000028830a0, libserver.so)  // inlines: EventDesiredResult, IActionResult, TryContinue
EventDesiredResult<CDOTA_BaseNPC> *__fastcall Action<CDOTA_BaseNPC>::OnCommandMoveTo(
        EventDesiredResult<CDOTA_BaseNPC> *__return_ptr retstr,
        Action<CDOTA_BaseNPC> *const this,
        CDOTA_BaseNPC *me,
        const Vector *const pos)
{
  retstr->m_type = ActionResultType::CONTINUE;
  retstr->m_action = 0;
  retstr->m_reason = 0;
  retstr->m_priority = EventResultPriorityType::RESULT_TRY;
  return retstr;
}


// Action<CSimpleBot>::OnCommandMoveTo  (line 651, @0x0000000002f1ea00, libserver.so)  // inlines: EventDesiredResult, IActionResult, TryContinue
EventDesiredResult<CSimpleBot> *__fastcall Action<CSimpleBot>::OnCommandMoveTo(
        EventDesiredResult<CSimpleBot> *__return_ptr retstr,
        Action<CSimpleBot> *const this,
        CSimpleBot *me,
        const Vector *const pos)
{
  retstr->m_type = ActionResultType::CONTINUE;
  retstr->m_action = 0;
  retstr->m_reason = 0;
  retstr->m_priority = EventResultPriorityType::RESULT_TRY;
  return retstr;
}


// Action<CDOTA_BaseNPC>::OnCommandMoveToDirection  (line 652, @0x00000000028830d0, libserver.so)  // inlines: EventDesiredResult, IActionResult, TryContinue
EventDesiredResult<CDOTA_BaseNPC> *__fastcall Action<CDOTA_BaseNPC>::OnCommandMoveToDirection(
        EventDesiredResult<CDOTA_BaseNPC> *__return_ptr retstr,
        Action<CDOTA_BaseNPC> *const this,
        CDOTA_BaseNPC *me,
        const Vector *const pos)
{
  retstr->m_type = ActionResultType::CONTINUE;
  retstr->m_action = 0;
  retstr->m_reason = 0;
  retstr->m_priority = EventResultPriorityType::RESULT_TRY;
  return retstr;
}


// Action<CSimpleBot>::OnCommandMoveToDirection  (line 652, @0x0000000002f1ea30, libserver.so)  // inlines: EventDesiredResult, IActionResult, TryContinue
EventDesiredResult<CSimpleBot> *__fastcall Action<CSimpleBot>::OnCommandMoveToDirection(
        EventDesiredResult<CSimpleBot> *__return_ptr retstr,
        Action<CSimpleBot> *const this,
        CSimpleBot *me,
        const Vector *const pos)
{
  retstr->m_type = ActionResultType::CONTINUE;
  retstr->m_action = 0;
  retstr->m_reason = 0;
  retstr->m_priority = EventResultPriorityType::RESULT_TRY;
  return retstr;
}


// Action<CDOTA_BaseNPC>::OnCommandMoveToAggressive  (line 653, @0x0000000002883100, libserver.so)  // inlines: EventDesiredResult, IActionResult, TryContinue
EventDesiredResult<CDOTA_BaseNPC> *__fastcall Action<CDOTA_BaseNPC>::OnCommandMoveToAggressive(
        EventDesiredResult<CDOTA_BaseNPC> *__return_ptr retstr,
        Action<CDOTA_BaseNPC> *const this,
        CDOTA_BaseNPC *me,
        const Vector *const pos)
{
  retstr->m_type = ActionResultType::CONTINUE;
  retstr->m_action = 0;
  retstr->m_reason = 0;
  retstr->m_priority = EventResultPriorityType::RESULT_TRY;
  return retstr;
}


// Action<CSimpleBot>::OnCommandMoveToAggressive  (line 653, @0x0000000002f1ea60, libserver.so)  // inlines: EventDesiredResult, IActionResult, TryContinue
EventDesiredResult<CSimpleBot> *__fastcall Action<CSimpleBot>::OnCommandMoveToAggressive(
        EventDesiredResult<CSimpleBot> *__return_ptr retstr,
        Action<CSimpleBot> *const this,
        CSimpleBot *me,
        const Vector *const pos)
{
  retstr->m_type = ActionResultType::CONTINUE;
  retstr->m_action = 0;
  retstr->m_reason = 0;
  retstr->m_priority = EventResultPriorityType::RESULT_TRY;
  return retstr;
}


// Action<CDOTA_BaseNPC>::OnCommandPatrol  (line 654, @0x0000000002883130, libserver.so)  // inlines: EventDesiredResult, IActionResult, TryContinue
EventDesiredResult<CDOTA_BaseNPC> *__fastcall Action<CDOTA_BaseNPC>::OnCommandPatrol(
        EventDesiredResult<CDOTA_BaseNPC> *__return_ptr retstr,
        Action<CDOTA_BaseNPC> *const this,
        CDOTA_BaseNPC *me,
        const Vector *const pos)
{
  retstr->m_type = ActionResultType::CONTINUE;
  retstr->m_action = 0;
  retstr->m_reason = 0;
  retstr->m_priority = EventResultPriorityType::RESULT_TRY;
  return retstr;
}


// Action<CSimpleBot>::OnCommandPatrol  (line 654, @0x0000000002f1ea90, libserver.so)  // inlines: EventDesiredResult, IActionResult, TryContinue
EventDesiredResult<CSimpleBot> *__fastcall Action<CSimpleBot>::OnCommandPatrol(
        EventDesiredResult<CSimpleBot> *__return_ptr retstr,
        Action<CSimpleBot> *const this,
        CSimpleBot *me,
        const Vector *const pos)
{
  retstr->m_type = ActionResultType::CONTINUE;
  retstr->m_action = 0;
  retstr->m_reason = 0;
  retstr->m_priority = EventResultPriorityType::RESULT_TRY;
  return retstr;
}


// Action<CDOTA_BaseNPC>::OnCommandAttack  (line 655, @0x0000000002883160, libserver.so)  // inlines: EventDesiredResult, IActionResult, TryContinue
EventDesiredResult<CDOTA_BaseNPC> *__fastcall Action<CDOTA_BaseNPC>::OnCommandAttack(
        EventDesiredResult<CDOTA_BaseNPC> *__return_ptr retstr,
        Action<CDOTA_BaseNPC> *const this,
        CDOTA_BaseNPC *me,
        CBaseEntity *victim,
        bool bDeny)
{
  retstr->m_type = ActionResultType::CONTINUE;
  retstr->m_action = 0;
  retstr->m_reason = 0;
  retstr->m_priority = EventResultPriorityType::RESULT_TRY;
  return retstr;
}


// Action<CSimpleBot>::OnCommandAttack  (line 655, @0x0000000002f1eac0, libserver.so)  // inlines: EventDesiredResult, IActionResult, TryContinue
EventDesiredResult<CSimpleBot> *__fastcall Action<CSimpleBot>::OnCommandAttack(
        EventDesiredResult<CSimpleBot> *__return_ptr retstr,
        Action<CSimpleBot> *const this,
        CSimpleBot *me,
        CBaseEntity *victim,
        bool bDeny)
{
  retstr->m_type = ActionResultType::CONTINUE;
  retstr->m_action = 0;
  retstr->m_reason = 0;
  retstr->m_priority = EventResultPriorityType::RESULT_TRY;
  return retstr;
}


// Action<CDOTA_BaseNPC>::OnCastAbilityNoTarget  (line 656, @0x0000000002883190, libserver.so)  // inlines: EventDesiredResult, IActionResult, TryContinue
EventDesiredResult<CDOTA_BaseNPC> *__fastcall Action<CDOTA_BaseNPC>::OnCastAbilityNoTarget(
        EventDesiredResult<CDOTA_BaseNPC> *__return_ptr retstr,
        Action<CDOTA_BaseNPC> *const this,
        CDOTA_BaseNPC *me,
        CDOTABaseAbility *ability)
{
  retstr->m_type = ActionResultType::CONTINUE;
  retstr->m_action = 0;
  retstr->m_reason = 0;
  retstr->m_priority = EventResultPriorityType::RESULT_TRY;
  return retstr;
}


// Action<CSimpleBot>::OnCastAbilityNoTarget  (line 656, @0x0000000002f1eaf0, libserver.so)  // inlines: EventDesiredResult, IActionResult, TryContinue
EventDesiredResult<CSimpleBot> *__fastcall Action<CSimpleBot>::OnCastAbilityNoTarget(
        EventDesiredResult<CSimpleBot> *__return_ptr retstr,
        Action<CSimpleBot> *const this,
        CSimpleBot *me,
        CDOTABaseAbility *ability)
{
  retstr->m_type = ActionResultType::CONTINUE;
  retstr->m_action = 0;
  retstr->m_reason = 0;
  retstr->m_priority = EventResultPriorityType::RESULT_TRY;
  return retstr;
}


// Action<CDOTA_BaseNPC>::OnCastAbilityOnPosition  (line 657, @0x00000000028831c0, libserver.so)  // inlines: EventDesiredResult, IActionResult, TryContinue
EventDesiredResult<CDOTA_BaseNPC> *__fastcall Action<CDOTA_BaseNPC>::OnCastAbilityOnPosition(
        EventDesiredResult<CDOTA_BaseNPC> *__return_ptr retstr,
        Action<CDOTA_BaseNPC> *const this,
        CDOTA_BaseNPC *me,
        CDOTABaseAbility *ability,
        const Vector *const pos)
{
  retstr->m_type = ActionResultType::CONTINUE;
  retstr->m_action = 0;
  retstr->m_reason = 0;
  retstr->m_priority = EventResultPriorityType::RESULT_TRY;
  return retstr;
}


// Action<CSimpleBot>::OnCastAbilityOnPosition  (line 657, @0x0000000002f1eb20, libserver.so)  // inlines: EventDesiredResult, IActionResult, TryContinue
EventDesiredResult<CSimpleBot> *__fastcall Action<CSimpleBot>::OnCastAbilityOnPosition(
        EventDesiredResult<CSimpleBot> *__return_ptr retstr,
        Action<CSimpleBot> *const this,
        CSimpleBot *me,
        CDOTABaseAbility *ability,
        const Vector *const pos)
{
  retstr->m_type = ActionResultType::CONTINUE;
  retstr->m_action = 0;
  retstr->m_reason = 0;
  retstr->m_priority = EventResultPriorityType::RESULT_TRY;
  return retstr;
}


// Action<CDOTA_BaseNPC>::OnCastAbilityOnTarget  (line 658, @0x00000000028831f0, libserver.so)  // inlines: EventDesiredResult, IActionResult, TryContinue
EventDesiredResult<CDOTA_BaseNPC> *__fastcall Action<CDOTA_BaseNPC>::OnCastAbilityOnTarget(
        EventDesiredResult<CDOTA_BaseNPC> *__return_ptr retstr,
        Action<CDOTA_BaseNPC> *const this,
        CDOTA_BaseNPC *me,
        CDOTABaseAbility *ability,
        CBaseEntity *target)
{
  retstr->m_type = ActionResultType::CONTINUE;
  retstr->m_action = 0;
  retstr->m_reason = 0;
  retstr->m_priority = EventResultPriorityType::RESULT_TRY;
  return retstr;
}


// Action<CSimpleBot>::OnCastAbilityOnTarget  (line 658, @0x0000000002f1eb50, libserver.so)  // inlines: EventDesiredResult, IActionResult, TryContinue
EventDesiredResult<CSimpleBot> *__fastcall Action<CSimpleBot>::OnCastAbilityOnTarget(
        EventDesiredResult<CSimpleBot> *__return_ptr retstr,
        Action<CSimpleBot> *const this,
        CSimpleBot *me,
        CDOTABaseAbility *ability,
        CBaseEntity *target)
{
  retstr->m_type = ActionResultType::CONTINUE;
  retstr->m_action = 0;
  retstr->m_reason = 0;
  retstr->m_priority = EventResultPriorityType::RESULT_TRY;
  return retstr;
}


// Action<CDOTA_BaseNPC>::OnDropItem  (line 659, @0x0000000002883220, libserver.so)  // inlines: EventDesiredResult, IActionResult, TryContinue
EventDesiredResult<CDOTA_BaseNPC> *__fastcall Action<CDOTA_BaseNPC>::OnDropItem(
        EventDesiredResult<CDOTA_BaseNPC> *__return_ptr retstr,
        Action<CDOTA_BaseNPC> *const this,
        CDOTA_BaseNPC *me,
        const Vector *const pos,
        CBaseEntity *item)
{
  retstr->m_type = ActionResultType::CONTINUE;
  retstr->m_action = 0;
  retstr->m_reason = 0;
  retstr->m_priority = EventResultPriorityType::RESULT_TRY;
  return retstr;
}


// Action<CSimpleBot>::OnDropItem  (line 659, @0x0000000002f1eb80, libserver.so)  // inlines: EventDesiredResult, IActionResult, TryContinue
EventDesiredResult<CSimpleBot> *__fastcall Action<CSimpleBot>::OnDropItem(
        EventDesiredResult<CSimpleBot> *__return_ptr retstr,
        Action<CSimpleBot> *const this,
        CSimpleBot *me,
        const Vector *const pos,
        CBaseEntity *item)
{
  retstr->m_type = ActionResultType::CONTINUE;
  retstr->m_action = 0;
  retstr->m_reason = 0;
  retstr->m_priority = EventResultPriorityType::RESULT_TRY;
  return retstr;
}


// Action<CDOTA_BaseNPC>::OnGiveItem  (line 660, @0x0000000002883250, libserver.so)  // inlines: EventDesiredResult, IActionResult, TryContinue
EventDesiredResult<CDOTA_BaseNPC> *__fastcall Action<CDOTA_BaseNPC>::OnGiveItem(
        EventDesiredResult<CDOTA_BaseNPC> *__return_ptr retstr,
        Action<CDOTA_BaseNPC> *const this,
        CDOTA_BaseNPC *me,
        CBaseEntity *target,
        CBaseEntity *item)
{
  retstr->m_type = ActionResultType::CONTINUE;
  retstr->m_action = 0;
  retstr->m_reason = 0;
  retstr->m_priority = EventResultPriorityType::RESULT_TRY;
  return retstr;
}


// Action<CSimpleBot>::OnGiveItem  (line 660, @0x0000000002f1ebb0, libserver.so)  // inlines: EventDesiredResult, IActionResult, TryContinue
EventDesiredResult<CSimpleBot> *__fastcall Action<CSimpleBot>::OnGiveItem(
        EventDesiredResult<CSimpleBot> *__return_ptr retstr,
        Action<CSimpleBot> *const this,
        CSimpleBot *me,
        CBaseEntity *target,
        CBaseEntity *item)
{
  retstr->m_type = ActionResultType::CONTINUE;
  retstr->m_action = 0;
  retstr->m_reason = 0;
  retstr->m_priority = EventResultPriorityType::RESULT_TRY;
  return retstr;
}


// Action<CDOTA_BaseNPC>::OnPickupItem  (line 661, @0x0000000002883280, libserver.so)  // inlines: EventDesiredResult, IActionResult, TryContinue
EventDesiredResult<CDOTA_BaseNPC> *__fastcall Action<CDOTA_BaseNPC>::OnPickupItem(
        EventDesiredResult<CDOTA_BaseNPC> *__return_ptr retstr,
        Action<CDOTA_BaseNPC> *const this,
        CDOTA_BaseNPC *me,
        CBaseEntity *item)
{
  retstr->m_type = ActionResultType::CONTINUE;
  retstr->m_action = 0;
  retstr->m_reason = 0;
  retstr->m_priority = EventResultPriorityType::RESULT_TRY;
  return retstr;
}


// Action<CSimpleBot>::OnPickupItem  (line 661, @0x0000000002f1ebe0, libserver.so)  // inlines: EventDesiredResult, IActionResult, TryContinue
EventDesiredResult<CSimpleBot> *__fastcall Action<CSimpleBot>::OnPickupItem(
        EventDesiredResult<CSimpleBot> *__return_ptr retstr,
        Action<CSimpleBot> *const this,
        CSimpleBot *me,
        CBaseEntity *item)
{
  retstr->m_type = ActionResultType::CONTINUE;
  retstr->m_action = 0;
  retstr->m_reason = 0;
  retstr->m_priority = EventResultPriorityType::RESULT_TRY;
  return retstr;
}


// Action<CDOTA_BaseNPC>::OnPickupRune  (line 662, @0x00000000028832b0, libserver.so)  // inlines: EventDesiredResult, IActionResult, TryContinue
EventDesiredResult<CDOTA_BaseNPC> *__fastcall Action<CDOTA_BaseNPC>::OnPickupRune(
        EventDesiredResult<CDOTA_BaseNPC> *__return_ptr retstr,
        Action<CDOTA_BaseNPC> *const this,
        CDOTA_BaseNPC *me,
        CBaseEntity *item)
{
  retstr->m_type = ActionResultType::CONTINUE;
  retstr->m_action = 0;
  retstr->m_reason = 0;
  retstr->m_priority = EventResultPriorityType::RESULT_TRY;
  return retstr;
}


// Action<CSimpleBot>::OnPickupRune  (line 662, @0x0000000002f1ec10, libserver.so)  // inlines: EventDesiredResult, IActionResult, TryContinue
EventDesiredResult<CSimpleBot> *__fastcall Action<CSimpleBot>::OnPickupRune(
        EventDesiredResult<CSimpleBot> *__return_ptr retstr,
        Action<CSimpleBot> *const this,
        CSimpleBot *me,
        CBaseEntity *item)
{
  retstr->m_type = ActionResultType::CONTINUE;
  retstr->m_action = 0;
  retstr->m_reason = 0;
  retstr->m_priority = EventResultPriorityType::RESULT_TRY;
  return retstr;
}


// Action<CDOTA_BaseNPC>::OnStop  (line 663, @0x00000000028832e0, libserver.so)  // inlines: EventDesiredResult, IActionResult, TryContinue
EventDesiredResult<CDOTA_BaseNPC> *__fastcall Action<CDOTA_BaseNPC>::OnStop(
        EventDesiredResult<CDOTA_BaseNPC> *__return_ptr retstr,
        Action<CDOTA_BaseNPC> *const this,
        CDOTA_BaseNPC *me)
{
  retstr->m_type = ActionResultType::CONTINUE;
  retstr->m_action = 0;
  retstr->m_reason = 0;
  retstr->m_priority = EventResultPriorityType::RESULT_TRY;
  return retstr;
}


// Action<CSimpleBot>::OnStop  (line 663, @0x0000000002f1ec40, libserver.so)  // inlines: EventDesiredResult, IActionResult, TryContinue
EventDesiredResult<CSimpleBot> *__fastcall Action<CSimpleBot>::OnStop(
        EventDesiredResult<CSimpleBot> *__return_ptr retstr,
        Action<CSimpleBot> *const this,
        CSimpleBot *me)
{
  retstr->m_type = ActionResultType::CONTINUE;
  retstr->m_action = 0;
  retstr->m_reason = 0;
  retstr->m_priority = EventResultPriorityType::RESULT_TRY;
  return retstr;
}


// Action<CDOTA_BaseNPC>::OnCancelAttack  (line 664, @0x0000000002883310, libserver.so)  // inlines: EventDesiredResult, IActionResult, TryContinue
EventDesiredResult<CDOTA_BaseNPC> *__fastcall Action<CDOTA_BaseNPC>::OnCancelAttack(
        EventDesiredResult<CDOTA_BaseNPC> *__return_ptr retstr,
        Action<CDOTA_BaseNPC> *const this,
        CDOTA_BaseNPC *me,
        CBaseEntity *pTarget)
{
  retstr->m_type = ActionResultType::CONTINUE;
  retstr->m_action = 0;
  retstr->m_reason = 0;
  retstr->m_priority = EventResultPriorityType::RESULT_TRY;
  return retstr;
}


// Action<CSimpleBot>::OnCancelAttack  (line 664, @0x0000000002f1ec70, libserver.so)  // inlines: EventDesiredResult, IActionResult, TryContinue
EventDesiredResult<CSimpleBot> *__fastcall Action<CSimpleBot>::OnCancelAttack(
        EventDesiredResult<CSimpleBot> *__return_ptr retstr,
        Action<CSimpleBot> *const this,
        CSimpleBot *me,
        CBaseEntity *pTarget)
{
  retstr->m_type = ActionResultType::CONTINUE;
  retstr->m_action = 0;
  retstr->m_reason = 0;
  retstr->m_priority = EventResultPriorityType::RESULT_TRY;
  return retstr;
}


// Action<CDOTA_BaseNPC>::OnDeAggro  (line 665, @0x0000000002883340, libserver.so)  // inlines: EventDesiredResult, IActionResult, TryContinue
EventDesiredResult<CDOTA_BaseNPC> *__fastcall Action<CDOTA_BaseNPC>::OnDeAggro(
        EventDesiredResult<CDOTA_BaseNPC> *__return_ptr retstr,
        Action<CDOTA_BaseNPC> *const this,
        CDOTA_BaseNPC *me,
        CBaseEntity *pTarget)
{
  retstr->m_type = ActionResultType::CONTINUE;
  retstr->m_action = 0;
  retstr->m_reason = 0;
  retstr->m_priority = EventResultPriorityType::RESULT_TRY;
  return retstr;
}


// Action<CSimpleBot>::OnDeAggro  (line 665, @0x0000000002f1eca0, libserver.so)  // inlines: EventDesiredResult, IActionResult, TryContinue
EventDesiredResult<CSimpleBot> *__fastcall Action<CSimpleBot>::OnDeAggro(
        EventDesiredResult<CSimpleBot> *__return_ptr retstr,
        Action<CSimpleBot> *const this,
        CSimpleBot *me,
        CBaseEntity *pTarget)
{
  retstr->m_type = ActionResultType::CONTINUE;
  retstr->m_action = 0;
  retstr->m_reason = 0;
  retstr->m_priority = EventResultPriorityType::RESULT_TRY;
  return retstr;
}


// Action<CDOTA_BaseNPC>::OnDominated  (line 666, @0x0000000002883370, libserver.so)  // inlines: EventDesiredResult, IActionResult, TryContinue
EventDesiredResult<CDOTA_BaseNPC> *__fastcall Action<CDOTA_BaseNPC>::OnDominated(
        EventDesiredResult<CDOTA_BaseNPC> *__return_ptr retstr,
        Action<CDOTA_BaseNPC> *const this,
        CDOTA_BaseNPC *me)
{
  retstr->m_type = ActionResultType::CONTINUE;
  retstr->m_action = 0;
  retstr->m_reason = 0;
  retstr->m_priority = EventResultPriorityType::RESULT_TRY;
  return retstr;
}


// Action<CSimpleBot>::OnDominated  (line 666, @0x0000000002f1ecd0, libserver.so)  // inlines: EventDesiredResult, IActionResult, TryContinue
EventDesiredResult<CSimpleBot> *__fastcall Action<CSimpleBot>::OnDominated(
        EventDesiredResult<CSimpleBot> *__return_ptr retstr,
        Action<CSimpleBot> *const this,
        CSimpleBot *me)
{
  retstr->m_type = ActionResultType::CONTINUE;
  retstr->m_action = 0;
  retstr->m_reason = 0;
  retstr->m_priority = EventResultPriorityType::RESULT_TRY;
  return retstr;
}


// Action<CDOTA_BaseNPC>::OnInvalidatePath  (line 667, @0x00000000028833a0, libserver.so)  // inlines: EventDesiredResult, IActionResult, TryContinue
EventDesiredResult<CDOTA_BaseNPC> *__fastcall Action<CDOTA_BaseNPC>::OnInvalidatePath(
        EventDesiredResult<CDOTA_BaseNPC> *__return_ptr retstr,
        Action<CDOTA_BaseNPC> *const this,
        CDOTA_BaseNPC *me)
{
  retstr->m_type = ActionResultType::CONTINUE;
  retstr->m_action = 0;
  retstr->m_reason = 0;
  retstr->m_priority = EventResultPriorityType::RESULT_TRY;
  return retstr;
}


// Action<CSimpleBot>::OnInvalidatePath  (line 667, @0x0000000002f1ed00, libserver.so)  // inlines: EventDesiredResult, IActionResult, TryContinue
EventDesiredResult<CSimpleBot> *__fastcall Action<CSimpleBot>::OnInvalidatePath(
        EventDesiredResult<CSimpleBot> *__return_ptr retstr,
        Action<CSimpleBot> *const this,
        CSimpleBot *me)
{
  retstr->m_type = ActionResultType::CONTINUE;
  retstr->m_action = 0;
  retstr->m_reason = 0;
  retstr->m_priority = EventResultPriorityType::RESULT_TRY;
  return retstr;
}


// Action<CDOTA_BaseNPC>::OnUnitTeleported  (line 668, @0x00000000028833d0, libserver.so)  // inlines: EventDesiredResult, IActionResult, TryContinue
EventDesiredResult<CDOTA_BaseNPC> *__fastcall Action<CDOTA_BaseNPC>::OnUnitTeleported(
        EventDesiredResult<CDOTA_BaseNPC> *__return_ptr retstr,
        Action<CDOTA_BaseNPC> *const this,
        CDOTA_BaseNPC *me,
        CBaseEntity *pUnit,
        bool bLongTeleport)
{
  retstr->m_type = ActionResultType::CONTINUE;
  retstr->m_action = 0;
  retstr->m_reason = 0;
  retstr->m_priority = EventResultPriorityType::RESULT_TRY;
  return retstr;
}


// Action<CSimpleBot>::OnUnitTeleported  (line 668, @0x0000000002f1ed30, libserver.so)  // inlines: EventDesiredResult, IActionResult, TryContinue
EventDesiredResult<CSimpleBot> *__fastcall Action<CSimpleBot>::OnUnitTeleported(
        EventDesiredResult<CSimpleBot> *__return_ptr retstr,
        Action<CSimpleBot> *const this,
        CSimpleBot *me,
        CBaseEntity *pUnit,
        bool bLongTeleport)
{
  retstr->m_type = ActionResultType::CONTINUE;
  retstr->m_action = 0;
  retstr->m_reason = 0;
  retstr->m_priority = EventResultPriorityType::RESULT_TRY;
  return retstr;
}


// Action<CDOTA_BaseNPC>::IsAbleToBlockMovementOf  (line 694, @0x0000000002883400, libserver.so)
bool __fastcall Action<CDOTA_BaseNPC>::IsAbleToBlockMovementOf(
        const Action<CDOTA_BaseNPC> *const this,
        const INextBot *botInMotion)
{
  return 1;
}


// Action<CSimpleBot>::IsAbleToBlockMovementOf  (line 694, @0x0000000002f1ed60, libserver.so)
bool __fastcall Action<CSimpleBot>::IsAbleToBlockMovementOf(
        const Action<CSimpleBot> *const this,
        const INextBot *botInMotion)
{
  return 1;
}


// Action<CDOTA_BaseNPC>::IsTopLevel  (line 704, @0x0000000002883410, libserver.so)
bool __fastcall Action<CDOTA_BaseNPC>::IsTopLevel(const Action<CDOTA_BaseNPC> *const this)
{
  return 0;
}


// Action<CSimpleBot>::IsTopLevel  (line 704, @0x0000000002f1ed70, libserver.so)
bool __fastcall Action<CSimpleBot>::IsTopLevel(const Action<CSimpleBot> *const this)
{
  return 0;
}


// Action<CDOTA_BaseNPC>::DebugReceivedEvent  (line 709, @0x00000000028860a0, libserver.so)  // inlines: Color, GetBool, GetInt, GetName, IsDebugging, SetColor, curtime
// calls: CUtlSymbol::String, INextBot::DebugConColorMsg, NextBotManager::IsDebugFilterMatch, __stack_chk_fail
// callers: Action<CDOTA_BaseNPC>::OnLeaveGround, Action<CDOTA_BaseNPC>::OnLandOnGround, Action<CDOTA_BaseNPC>::OnContact, Action<CDOTA_BaseNPC>::OnMoveToFailure, Action<CDOTA_BaseNPC>::OnAnimationActivityComplete, Action<CDOTA_BaseNPC>::OnAnimationActivityInterrupted, Action<CDOTA_BaseNPC>::OnAnimationEvent, Action<CDOTA_BaseNPC>::OnInjured, Action<CDOTA_BaseNPC>::OnKilled, Action<CDOTA_BaseNPC>::OnSight, Action<CDOTA_BaseNPC>::OnLostSight, Action<CDOTA_BaseNPC>::OnSound (42 total)
// strings: "%3.2f: %s:%s: %s received EVENT %s\n"
void __fastcall Action<CDOTA_BaseNPC>::DebugReceivedEvent(
        Action<CDOTA_BaseNPC> *const this,
        Action<CDOTA_BaseNPC> *_action,
        const char *pMethodName)
{
  CDOTA_BaseNPC *m_actor; // r12
  const char *v7; // r13
  const char *v8; // r15
  const char *v9; // r8
  CGlobalVars *v10; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  double m_flCurrentTime; // xmm0_8
  CDOTA_BaseNPC *v13; // rdi
  const char *v14; // [rsp+18h] [rbp-48h]
  Color color; // [rsp+20h] [rbp-40h] BYREF
  unsigned __int64 v16; // [rsp+28h] [rbp-38h]

  v16 = __readfsqword(0x28u);
  m_actor = this->m_actor;
  if ( m_actor != 0
    && (SLOBYTE(g_NextBotManager.m_debugType) < 0
     && NextBotManager::IsDebugFilterMatch(&g_NextBotManager, &m_actor->INextBot)
     && (*(m_actor->_vptr_INextBotEventResponder + 96))(&m_actor->INextBot, 128) != 0
     || NextBotDebugHistory.m_pParent->m_Value.m_nValue != 0) )
  {
    v7 = (*(_action->_vptr_INextBotEventResponder + 64))(_action);
    v8 = CUtlSymbol::String(&this->m_behavior->m_name);
    v9 = (*(this->m_actor->_vptr_INextBotEventResponder + 97))(&this->m_actor->INextBot);
    v10 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
        {
          v14 = v9;
          m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
          v9 = v14;
        }
      }
      m_flCurrentTime = v10->m_flCurrentTime;
    }
    else
    {
      m_flCurrentTime = 0.0;
    }
    v13 = this->m_actor;
    memset(&color, 100, 3);
    color._color[3] = -1;
    INextBot::DebugConColorMsg(
      &v13->INextBot,
      NextBotDebugType::NEXTBOT_EVENTS,
      &color,
      "%3.2f: %s:%s: %s received EVENT %s\n",
      m_flCurrentTime,
      v9,
      v8,
      v7,
      pMethodName);
  }
}


// Action<CDOTA_BaseNPC>::StorePendingEventResult  (line 717, @0x0000000002886240, libserver.so)  // inlines: Color, GetBool, GetInt, GetName, GetTypeName, IsDebugging, IsRequestingChange, SetColor, StorePendingEventResult, curtime
// calls: CUtlSymbol::String, INextBot::DebugConColorMsg, NextBotManager::IsDebugFilterMatch, DevMsg(char const*,...), __stack_chk_fail
// callers: Action<CDOTA_BaseNPC>::OnLeaveGround, Action<CDOTA_BaseNPC>::OnLandOnGround, Action<CDOTA_BaseNPC>::OnContact, Action<CDOTA_BaseNPC>::OnMoveToSuccess, Action<CDOTA_BaseNPC>::OnMoveToFailure, Action<CDOTA_BaseNPC>::OnStuck, Action<CDOTA_BaseNPC>::OnUnStuck, Action<CDOTA_BaseNPC>::OnPostureChanged, Action<CDOTA_BaseNPC>::OnAnimationActivityComplete, Action<CDOTA_BaseNPC>::OnAnimationActivityInterrupted, Action<CDOTA_BaseNPC>::OnAnimationEvent, Action<CDOTA_BaseNPC>::OnIgnite (54 total)
// strings: "%3.2f: %s:%s: ", "responded to EVENT %s with ", "SUSPEND_FOR", "SUSTAIN", "%s %s ", "CHANGE_TO" (8 total)
void __fastcall Action<CDOTA_BaseNPC>::StorePendingEventResult(
        Action<CDOTA_BaseNPC> *const this,
        Action<CDOTA_BaseNPC> *_action,
        const char *pMethodName,
        EventDesiredResult<CDOTA_BaseNPC> *const _result)
{
  CDOTA_BaseNPC *m_actor; // r14
  __int64 v9; // rax
  double m_flCurrentTime; // xmm0_8
  const char *v11; // r9
  const char *v12; // r8
  CGlobalVars *v13; // r14
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  CDOTA_BaseNPC *v15; // rax
  const char *v16; // r8
  CDOTA_BaseNPC *v17; // rax
  CDOTA_BaseNPC *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rsi
  __int64 v22; // r8
  Action<CDOTA_BaseNPC> *m_action; // rdi
  const char *v24; // r9
  ActionResultType m_type; // edx
  const char *v26; // r8
  CDOTA_BaseNPC *v27; // rax
  const char *m_reason; // rax
  const char *v29; // r8
  CDOTA_BaseNPC *v30; // rdi
  EventResultPriorityType m_priority; // eax
  Action<CDOTA_BaseNPC> *v32; // rdi
  Action<CDOTA_BaseNPC> *v33; // rdi
  const char *v34; // rax
  double v35; // xmm0_8
  CGlobalVars *v36; // r13
  FnGlobalVarsWarningFunc v37; // rdx
  const char *v38; // [rsp+0h] [rbp-50h]
  const char *v39; // [rsp+8h] [rbp-48h]
  const char *v40; // [rsp+8h] [rbp-48h]
  const char *v41; // [rsp+8h] [rbp-48h]
  Color color; // [rsp+10h] [rbp-40h] BYREF
  unsigned __int64 v43; // [rsp+18h] [rbp-38h]

  v43 = __readfsqword(0x28u);
  if ( _action == 0 )
    return;
  m_actor = this->m_actor;
  if ( m_actor != 0
    && ((g_NextBotManager.m_debugType & 1) != 0
     && NextBotManager::IsDebugFilterMatch(&g_NextBotManager, &m_actor->INextBot)
     && (*(m_actor->_vptr_INextBotEventResponder + 96))(&m_actor->INextBot, 1) != 0
     || NextBotDebugHistory.m_pParent->m_Value.m_nValue != 0)
    && (_result->m_type - 1) <= 2 )
  {
    v39 = CUtlSymbol::String(&this->m_behavior->m_name);
    v9 = (*(this->m_actor->_vptr_INextBotEventResponder + 97))(&this->m_actor->INextBot);
    m_flCurrentTime = 0.0;
    v11 = v39;
    v12 = v9;
    v13 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
        {
          v38 = v39;
          v40 = v12;
          (m_pfnWarningFunc)(1, 0.0);
          v11 = v38;
          v12 = v40;
        }
      }
      m_flCurrentTime = v13->m_flCurrentTime;
    }
    v15 = this->m_actor;
    color._color[0] = -1;
    color._color[1] = -1;
    color._color[2] = 0;
    color._color[3] = -1;
    INextBot::DebugConColorMsg(
      &v15->INextBot,
      NextBotDebugType::NEXTBOT_BEHAVIOR,
      &color,
      "%3.2f: %s:%s: ",
      m_flCurrentTime,
      v12,
      v11);
    v16 = (*(_action->_vptr_INextBotEventResponder + 64))(_action);
    v17 = this->m_actor;
    color._color[0] = -1;
    color._color[1] = -1;
    color._color[2] = -1;
    color._color[3] = -1;
    INextBot::DebugConColorMsg(&v17->INextBot, NextBotDebugType::NEXTBOT_BEHAVIOR, &color, "%s ", v16);
    v18 = this->m_actor;
    color._color[0] = -1;
    color._color[1] = -1;
    color._color[2] = 0;
    color._color[3] = -1;
    INextBot::DebugConColorMsg(
      &v18->INextBot,
      NextBotDebugType::NEXTBOT_BEHAVIOR,
      &color,
      "responded to EVENT %s with ",
      pMethodName);
    m_action = _result->m_action;
    v24 = "";
    if ( m_action != 0 )
      v24 = (*(m_action->_vptr_INextBotEventResponder + 62))(m_action, v21, v19, v20, v22, "");
    m_type = _result->m_type;
    v26 = "SUSPEND_FOR";
    if ( _result->m_type == ActionResultType::SUSPEND_FOR )
      goto LABEL_18;
    if ( m_type <= ActionResultType::SUSPEND_FOR )
    {
      v26 = "CHANGE_TO";
      if ( m_type == ActionResultType::CHANGE_TO )
      {
LABEL_18:
        v27 = this->m_actor;
        color._color[0] = -1;
        color._color[1] = 0;
        color._color[2] = 0;
        color._color[3] = -1;
        INextBot::DebugConColorMsg(&v27->INextBot, NextBotDebugType::NEXTBOT_BEHAVIOR, &color, "%s %s ", v26, v24);
        m_reason = _result->m_reason;
        v29 = "";
        v30 = this->m_actor;
        color._color[0] = 0;
        color._color[1] = -1;
        color._color[2] = 0;
        if ( m_reason != 0 )
          v29 = m_reason;
        color._color[3] = -1;
        INextBot::DebugConColorMsg(&v30->INextBot, NextBotDebugType::NEXTBOT_BEHAVIOR, &color, "%s\n", v29);
        goto LABEL_21;
      }
    }
    else
    {
      v26 = "DONE";
      if ( m_type == ActionResultType::DONE )
        goto LABEL_18;
      v26 = "SUSTAIN";
      if ( m_type == ActionResultType::SUSTAIN )
        goto LABEL_18;
    }
    v26 = "CONTINUE";
    goto LABEL_18;
  }
LABEL_21:
  if ( _result->m_type != ActionResultType::CONTINUE )
  {
    m_priority = _action->m_eventResult.m_priority;
    if ( _result->m_priority >= m_priority )
    {
      if ( m_priority == EventResultPriorityType::RESULT_CRITICAL && developer.m_pParent->m_Value.m_nValue != 0 )
      {
        v34 = (*(_action->_vptr_INextBotEventResponder + 62))(_action);
        v35 = 0.0;
        v36 = gpGlobals;
        if ( gpGlobals != 0 )
        {
          if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
          {
            v37 = gpGlobals->m_pfnWarningFunc;
            if ( v37 != 0 )
            {
              v41 = v34;
              (v37)(1, 0.0);
              v34 = v41;
            }
          }
          v35 = v36->m_flCurrentTime;
        }
        DevMsg("%3.2f: WARNING: %s::%s() RESULT_CRITICAL collision\n", v35, v34, pMethodName);
      }
      v33 = _action->m_eventResult.m_action;
      if ( v33 != 0 )
        (*(v33->_vptr_INextBotEventResponder + 2))(v33);
      *&_action->m_eventResult.m_type = *&_result->m_type;
      _action->m_eventResult.m_action = _result->m_action;
      _action->m_eventResult.m_reason = _result->m_reason;
      _action->m_eventResult.m_priority = _result->m_priority;
    }
    else
    {
      v32 = _result->m_action;
      if ( v32 != 0 )
        (*(v32->_vptr_INextBotEventResponder + 2))(v32);
    }
  }
}


// Action<CSimpleBot>::StorePendingEventResult  (line 717, @0x0000000002f241f0, libserver.so)  // inlines: Color, GetBool, GetInt, GetName, GetTypeName, IsDebugFilterMatch, IsDebugging, IsRequestingChange, SetColor, StorePendingEventResult, curtime
// calls: CUtlSymbol::String, INextBot::DebugConColorMsg, NextBotManager::IsDebugFilterMatch, CGlobalVarsBase::curtime, DevMsg(char const*,...), __stack_chk_fail
// callers: Action<CSimpleBot>::OnLeaveGround, Action<CSimpleBot>::OnLandOnGround, Action<CSimpleBot>::OnContact, Action<CSimpleBot>::OnMoveToSuccess, Action<CSimpleBot>::OnMoveToFailure, Action<CSimpleBot>::OnStuck, Action<CSimpleBot>::OnUnStuck, Action<CSimpleBot>::OnPostureChanged, Action<CSimpleBot>::OnAnimationActivityComplete, Action<CSimpleBot>::OnAnimationActivityInterrupted, Action<CSimpleBot>::OnAnimationEvent, Action<CSimpleBot>::OnIgnite (54 total)
// strings: "%3.2f: %s:%s: ", "responded to EVENT %s with ", "SUSPEND_FOR", "SUSTAIN", "%s %s ", "CHANGE_TO" (8 total)
void __fastcall Action<CSimpleBot>::StorePendingEventResult(
        Action<CSimpleBot> *const this,
        Action<CSimpleBot> *_action,
        const char *pMethodName,
        EventDesiredResult<CSimpleBot> *const _result)
{
  CSimpleBot *m_actor; // r14
  INextBot *v9; // rdx
  __int64 v10; // rax
  double m_flCurrentTime; // xmm0_8
  const char *v12; // r9
  const char *v13; // r8
  CGlobalVars *v14; // r14
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  CSimpleBot *v16; // rax
  const char *v17; // r8
  CSimpleBot *v18; // rax
  CSimpleBot *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rsi
  __int64 v23; // r8
  Action<CSimpleBot> *m_action; // rdi
  const char *v25; // r9
  ActionResultType m_type; // edx
  const char *v27; // r8
  CSimpleBot *v28; // rax
  const char *m_reason; // rax
  const char *v30; // r8
  CSimpleBot *v31; // rdi
  EventResultPriorityType m_priority; // eax
  Action<CSimpleBot> *v33; // rdi
  Action<CSimpleBot> *v34; // rdi
  bool IsDebugFilterMatch; // al
  __int64 v36; // r13
  float v37; // xmm0_4
  const char *v38; // [rsp+0h] [rbp-50h]
  const char *v39; // [rsp+8h] [rbp-48h]
  const char *v40; // [rsp+8h] [rbp-48h]
  Color color; // [rsp+10h] [rbp-40h] BYREF
  unsigned __int64 v42; // [rsp+18h] [rbp-38h]

  v42 = __readfsqword(0x28u);
  if ( _action == 0 )
    return;
  m_actor = this->m_actor;
  if ( m_actor != 0 )
  {
    if ( (g_NextBotManager.m_debugType & 1) != 0
      && ((v9 = &m_actor->INextBot, g_NextBotManager.m_debugFilterList.m_Size == 0)
       || (IsDebugFilterMatch = NextBotManager::IsDebugFilterMatch(&g_NextBotManager, &m_actor->INextBot),
           v9 = &m_actor->INextBot,
           IsDebugFilterMatch))
      && (*(m_actor->_vptr_INextBotEventResponder + 96))(v9, 1) != 0
      || NextBotDebugHistory.m_pParent->m_Value.m_nValue != 0 )
    {
      if ( (_result->m_type - 1) <= 2 )
      {
        v39 = CUtlSymbol::String(&this->m_behavior->m_name);
        v10 = (*(this->m_actor->_vptr_INextBotEventResponder + 97))(&this->m_actor->INextBot);
        m_flCurrentTime = 0.0;
        v12 = v39;
        v13 = v10;
        v14 = gpGlobals;
        if ( gpGlobals != 0 )
        {
          if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
          {
            m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
            if ( m_pfnWarningFunc != 0 )
            {
              v38 = v39;
              v40 = v13;
              (m_pfnWarningFunc)(1, 0.0);
              v12 = v38;
              v13 = v40;
            }
          }
          m_flCurrentTime = v14->m_flCurrentTime;
        }
        v16 = this->m_actor;
        color._color[0] = -1;
        color._color[1] = -1;
        color._color[2] = 0;
        color._color[3] = -1;
        INextBot::DebugConColorMsg(
          &v16->INextBot,
          NextBotDebugType::NEXTBOT_BEHAVIOR,
          &color,
          "%3.2f: %s:%s: ",
          m_flCurrentTime,
          v13,
          v12);
        v17 = (*(_action->_vptr_INextBotEventResponder + 64))(_action);
        v18 = this->m_actor;
        color._color[0] = -1;
        color._color[1] = -1;
        color._color[2] = -1;
        color._color[3] = -1;
        INextBot::DebugConColorMsg(&v18->INextBot, NextBotDebugType::NEXTBOT_BEHAVIOR, &color, "%s ", v17);
        v19 = this->m_actor;
        color._color[0] = -1;
        color._color[1] = -1;
        color._color[2] = 0;
        color._color[3] = -1;
        INextBot::DebugConColorMsg(
          &v19->INextBot,
          NextBotDebugType::NEXTBOT_BEHAVIOR,
          &color,
          "responded to EVENT %s with ",
          pMethodName);
        m_action = _result->m_action;
        v25 = "";
        if ( m_action != 0 )
          v25 = (*(m_action->_vptr_INextBotEventResponder + 62))(m_action, v22, v20, v21, v23, "");
        m_type = _result->m_type;
        v27 = "SUSPEND_FOR";
        if ( _result->m_type == ActionResultType::SUSPEND_FOR )
          goto LABEL_19;
        if ( m_type <= ActionResultType::SUSPEND_FOR )
        {
          v27 = "CHANGE_TO";
          if ( m_type == ActionResultType::CHANGE_TO )
          {
LABEL_19:
            v28 = this->m_actor;
            color._color[0] = -1;
            color._color[1] = 0;
            color._color[2] = 0;
            color._color[3] = -1;
            INextBot::DebugConColorMsg(&v28->INextBot, NextBotDebugType::NEXTBOT_BEHAVIOR, &color, "%s %s ", v27, v25);
            m_reason = _result->m_reason;
            v30 = "";
            v31 = this->m_actor;
            color._color[0] = 0;
            color._color[1] = -1;
            color._color[2] = 0;
            if ( m_reason != 0 )
              v30 = m_reason;
            color._color[3] = -1;
            INextBot::DebugConColorMsg(&v31->INextBot, NextBotDebugType::NEXTBOT_BEHAVIOR, &color, "%s\n", v30);
            goto LABEL_22;
          }
        }
        else
        {
          v27 = "DONE";
          if ( m_type == ActionResultType::DONE )
            goto LABEL_19;
          v27 = "SUSTAIN";
          if ( m_type == ActionResultType::SUSTAIN )
            goto LABEL_19;
        }
        v27 = "CONTINUE";
        goto LABEL_19;
      }
    }
  }
LABEL_22:
  if ( _result->m_type != ActionResultType::CONTINUE )
  {
    m_priority = _action->m_eventResult.m_priority;
    if ( _result->m_priority >= m_priority )
    {
      if ( m_priority == EventResultPriorityType::RESULT_CRITICAL && developer.m_pParent->m_Value.m_nValue != 0 )
      {
        v36 = (*(_action->_vptr_INextBotEventResponder + 62))(_action);
        v37 = CGlobalVarsBase::curtime(gpGlobals, 0);
        DevMsg("%3.2f: WARNING: %s::%s() RESULT_CRITICAL collision\n", v36, pMethodName, v37);
      }
      v34 = _action->m_eventResult.m_action;
      if ( v34 != 0 )
        (*(v34->_vptr_INextBotEventResponder + 2))(v34);
      *&_action->m_eventResult.m_type = *&_result->m_type;
      _action->m_eventResult.m_action = _result->m_action;
      _action->m_eventResult.m_reason = _result->m_reason;
      _action->m_eventResult.m_priority = _result->m_priority;
    }
    else
    {
      v33 = _result->m_action;
      if ( v33 != 0 )
        (*(v33->_vptr_INextBotEventResponder + 2))(v33);
    }
  }
}


// Action<CDOTA_BaseNPC>::OnLeaveGround  (line 828, @0x0000000002886630, libserver.so)  // inlines: EventDesiredResult, IActionResult, OnLeaveGround
// calls: Action<CDOTA_BaseNPC>::DebugReceivedEvent, Action<CDOTA_BaseNPC>::StorePendingEventResult
// strings: "OnLeaveGround"
void __fastcall Action<CDOTA_BaseNPC>::OnLeaveGround(Action<CDOTA_BaseNPC> *const this, CBaseEntity *ground)
{
  Action<CDOTA_BaseNPC> *v4; // rbx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rsi
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 i; // rbx
  EventDesiredResult<CDOTA_BaseNPC> _result; // [rsp+0h] [rbp-60h] BYREF
  EventDesiredResult<CDOTA_BaseNPC> v14; // [rsp+20h] [rbp-40h] BYREF

  if ( this->m_isStarted )
  {
    _result.m_type = ActionResultType::CONTINUE;
    v4 = this;
    _result.m_action = 0;
    _result.m_reason = 0;
    _result.m_priority = EventResultPriorityType::RESULT_TRY;
    do
    {
      Action<CDOTA_BaseNPC>::DebugReceivedEvent(this, v4, "OnLeaveGround");
      (*(v4->_vptr_INextBotEventResponder + 71))(
        &v14,
        v4,
        this->m_actor,
        ground,
        v5,
        v6,
        *&_result.m_type,
        _result.m_action,
        _result.m_reason,
        _result.m_priority);
      _result = v14;
      if ( v14.m_type != ActionResultType::CONTINUE )
        break;
      v4 = v4->m_buriedUnderMe;
    }
    while ( v4 != 0 );
    Action<CDOTA_BaseNPC>::StorePendingEventResult(this, v4, "OnLeaveGround", &_result);
    for ( i = (*(this->_vptr_INextBotEventResponder + 3))(
                this,
                v9,
                v7,
                v8,
                v10,
                v11,
                *&_result.m_type,
                _result.m_action,
                _result.m_reason,
                _result.m_priority); i != 0; i = (*(this->_vptr_INextBotEventResponder + 4))(this, i) )
      (*(*i + 40LL))(i, ground);
  }
}


// Action<CSimpleBot>::OnLeaveGround  (line 828, @0x0000000002f245b0, libserver.so)  // inlines: Color, DebugReceivedEvent, EventDesiredResult, GetBool, GetInt, GetName, IActionResult, IsDebugFilterMatch, IsDebugging, OnLeaveGround, SetColor, curtime
// calls: CUtlSymbol::String, INextBot::DebugConColorMsg, Action<CSimpleBot>::StorePendingEventResult, NextBotManager::IsDebugFilterMatch, __stack_chk_fail
// strings: "%3.2f: %s:%s: %s received EVENT %s\n", "OnLeaveGround"
void __fastcall Action<CSimpleBot>::OnLeaveGround(Action<CSimpleBot> *const this, CBaseEntity *ground)
{
  Action<CSimpleBot> *v4; // r15
  CSimpleBot *m_actor; // rdx
  INextBot *v6; // r14
  const char *v7; // r14
  __int64 v8; // rax
  const char *v9; // r9
  const char *v10; // r8
  CGlobalVars *v11; // rdx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  double m_flCurrentTime; // xmm0_8
  CSimpleBot *v14; // rax
  __int64 i; // r13
  bool IsDebugFilterMatch; // al
  CGlobalVars *v17; // [rsp+10h] [rbp-A0h]
  const char *v18; // [rsp+18h] [rbp-98h]
  const char *v19; // [rsp+28h] [rbp-88h]
  CSimpleBot *v20; // [rsp+28h] [rbp-88h]
  EventDesiredResult<CSimpleBot> _result; // [rsp+30h] [rbp-80h] BYREF
  EventDesiredResult<CSimpleBot> v22; // [rsp+50h] [rbp-60h] BYREF
  Color v23; // [rsp+70h] [rbp-40h] BYREF
  unsigned __int64 v24; // [rsp+78h] [rbp-38h]

  v24 = __readfsqword(0x28u);
  if ( this->m_isStarted )
  {
    _result.m_type = ActionResultType::CONTINUE;
    _result.m_action = 0;
    v4 = this;
    _result.m_reason = 0;
    _result.m_priority = EventResultPriorityType::RESULT_TRY;
    do
    {
      m_actor = this->m_actor;
      if ( m_actor != 0 )
      {
        if ( SLOBYTE(g_NextBotManager.m_debugType) < 0
          && ((v6 = &m_actor->INextBot, g_NextBotManager.m_debugFilterList.m_Size == 0)
           || (v20 = this->m_actor,
               IsDebugFilterMatch = NextBotManager::IsDebugFilterMatch(&g_NextBotManager, &m_actor->INextBot),
               m_actor = v20,
               IsDebugFilterMatch))
          && (*(m_actor->_vptr_INextBotEventResponder + 96))(v6, 128) != 0
          || NextBotDebugHistory.m_pParent->m_Value.m_nValue != 0 )
        {
          v7 = (*(v4->_vptr_INextBotEventResponder + 64))(v4);
          v19 = CUtlSymbol::String(&this->m_behavior->m_name);
          v8 = (*(this->m_actor->_vptr_INextBotEventResponder + 97))(&this->m_actor->INextBot);
          v9 = v19;
          v10 = v8;
          v11 = gpGlobals;
          if ( gpGlobals != 0 )
          {
            if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
            {
              m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
              if ( m_pfnWarningFunc != 0 )
              {
                v17 = gpGlobals;
                v18 = v10;
                m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
                v11 = v17;
                v10 = v18;
                v9 = v19;
              }
            }
            m_flCurrentTime = v11->m_flCurrentTime;
          }
          else
          {
            m_flCurrentTime = 0.0;
          }
          v14 = this->m_actor;
          memset(&v23, 100, 3);
          v23._color[3] = -1;
          INextBot::DebugConColorMsg(
            &v14->INextBot,
            NextBotDebugType::NEXTBOT_EVENTS,
            &v23,
            "%3.2f: %s:%s: %s received EVENT %s\n",
            m_flCurrentTime,
            v10,
            v9,
            v7,
            "OnLeaveGround");
        }
        m_actor = this->m_actor;
      }
      (*(v4->_vptr_INextBotEventResponder + 71))(&v22, v4, m_actor, ground);
      _result = v22;
      if ( v22.m_type != ActionResultType::CONTINUE )
        break;
      v4 = v4->m_buriedUnderMe;
    }
    while ( v4 != 0 );
    Action<CSimpleBot>::StorePendingEventResult(this, v4, "OnLeaveGround", &_result);
    for ( i = (*(this->_vptr_INextBotEventResponder + 3))(this);
          i != 0;
          i = (*(this->_vptr_INextBotEventResponder + 4))(this, i) )
    {
      (*(*i + 40LL))(i, ground);
    }
  }
}


// Action<CDOTA_BaseNPC>::OnLandOnGround  (line 829, @0x0000000002886730, libserver.so)  // inlines: EventDesiredResult, IActionResult, OnLandOnGround
// calls: Action<CDOTA_BaseNPC>::DebugReceivedEvent, Action<CDOTA_BaseNPC>::StorePendingEventResult
// strings: "OnLandOnGround"
void __fastcall Action<CDOTA_BaseNPC>::OnLandOnGround(Action<CDOTA_BaseNPC> *const this, CBaseEntity *ground)
{
  Action<CDOTA_BaseNPC> *v4; // rbx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rsi
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 i; // rbx
  EventDesiredResult<CDOTA_BaseNPC> _result; // [rsp+0h] [rbp-60h] BYREF
  EventDesiredResult<CDOTA_BaseNPC> v14; // [rsp+20h] [rbp-40h] BYREF

  if ( this->m_isStarted )
  {
    _result.m_type = ActionResultType::CONTINUE;
    v4 = this;
    _result.m_action = 0;
    _result.m_reason = 0;
    _result.m_priority = EventResultPriorityType::RESULT_TRY;
    do
    {
      Action<CDOTA_BaseNPC>::DebugReceivedEvent(this, v4, "OnLandOnGround");
      (*(v4->_vptr_INextBotEventResponder + 72))(
        &v14,
        v4,
        this->m_actor,
        ground,
        v5,
        v6,
        *&_result.m_type,
        _result.m_action,
        _result.m_reason,
        _result.m_priority);
      _result = v14;
      if ( v14.m_type != ActionResultType::CONTINUE )
        break;
      v4 = v4->m_buriedUnderMe;
    }
    while ( v4 != 0 );
    Action<CDOTA_BaseNPC>::StorePendingEventResult(this, v4, "OnLandOnGround", &_result);
    for ( i = (*(this->_vptr_INextBotEventResponder + 3))(
                this,
                v9,
                v7,
                v8,
                v10,
                v11,
                *&_result.m_type,
                _result.m_action,
                _result.m_reason,
                _result.m_priority); i != 0; i = (*(this->_vptr_INextBotEventResponder + 4))(this, i) )
      (*(*i + 48LL))(i, ground);
  }
}


// Action<CSimpleBot>::OnLandOnGround  (line 829, @0x0000000002f24870, libserver.so)  // inlines: Color, DebugReceivedEvent, EventDesiredResult, GetBool, GetInt, GetName, IActionResult, IsDebugFilterMatch, IsDebugging, OnLandOnGround, SetColor, curtime
// calls: CUtlSymbol::String, INextBot::DebugConColorMsg, Action<CSimpleBot>::StorePendingEventResult, NextBotManager::IsDebugFilterMatch, __stack_chk_fail
// strings: "%3.2f: %s:%s: %s received EVENT %s\n", "OnLandOnGround"
void __fastcall Action<CSimpleBot>::OnLandOnGround(Action<CSimpleBot> *const this, CBaseEntity *ground)
{
  Action<CSimpleBot> *v4; // r15
  CSimpleBot *m_actor; // rdx
  INextBot *v6; // r14
  const char *v7; // r14
  __int64 v8; // rax
  const char *v9; // r9
  const char *v10; // r8
  CGlobalVars *v11; // rdx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  double m_flCurrentTime; // xmm0_8
  CSimpleBot *v14; // rax
  __int64 i; // r13
  bool IsDebugFilterMatch; // al
  CGlobalVars *v17; // [rsp+10h] [rbp-A0h]
  const char *v18; // [rsp+18h] [rbp-98h]
  const char *v19; // [rsp+28h] [rbp-88h]
  CSimpleBot *v20; // [rsp+28h] [rbp-88h]
  EventDesiredResult<CSimpleBot> _result; // [rsp+30h] [rbp-80h] BYREF
  EventDesiredResult<CSimpleBot> v22; // [rsp+50h] [rbp-60h] BYREF
  Color v23; // [rsp+70h] [rbp-40h] BYREF
  unsigned __int64 v24; // [rsp+78h] [rbp-38h]

  v24 = __readfsqword(0x28u);
  if ( this->m_isStarted )
  {
    _result.m_type = ActionResultType::CONTINUE;
    _result.m_action = 0;
    v4 = this;
    _result.m_reason = 0;
    _result.m_priority = EventResultPriorityType::RESULT_TRY;
    do
    {
      m_actor = this->m_actor;
      if ( m_actor != 0 )
      {
        if ( SLOBYTE(g_NextBotManager.m_debugType) < 0
          && ((v6 = &m_actor->INextBot, g_NextBotManager.m_debugFilterList.m_Size == 0)
           || (v20 = this->m_actor,
               IsDebugFilterMatch = NextBotManager::IsDebugFilterMatch(&g_NextBotManager, &m_actor->INextBot),
               m_actor = v20,
               IsDebugFilterMatch))
          && (*(m_actor->_vptr_INextBotEventResponder + 96))(v6, 128) != 0
          || NextBotDebugHistory.m_pParent->m_Value.m_nValue != 0 )
        {
          v7 = (*(v4->_vptr_INextBotEventResponder + 64))(v4);
          v19 = CUtlSymbol::String(&this->m_behavior->m_name);
          v8 = (*(this->m_actor->_vptr_INextBotEventResponder + 97))(&this->m_actor->INextBot);
          v9 = v19;
          v10 = v8;
          v11 = gpGlobals;
          if ( gpGlobals != 0 )
          {
            if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
            {
              m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
              if ( m_pfnWarningFunc != 0 )
              {
                v17 = gpGlobals;
                v18 = v10;
                m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
                v11 = v17;
                v10 = v18;
                v9 = v19;
              }
            }
            m_flCurrentTime = v11->m_flCurrentTime;
          }
          else
          {
            m_flCurrentTime = 0.0;
          }
          v14 = this->m_actor;
          memset(&v23, 100, 3);
          v23._color[3] = -1;
          INextBot::DebugConColorMsg(
            &v14->INextBot,
            NextBotDebugType::NEXTBOT_EVENTS,
            &v23,
            "%3.2f: %s:%s: %s received EVENT %s\n",
            m_flCurrentTime,
            v10,
            v9,
            v7,
            "OnLandOnGround");
        }
        m_actor = this->m_actor;
      }
      (*(v4->_vptr_INextBotEventResponder + 72))(&v22, v4, m_actor, ground);
      _result = v22;
      if ( v22.m_type != ActionResultType::CONTINUE )
        break;
      v4 = v4->m_buriedUnderMe;
    }
    while ( v4 != 0 );
    Action<CSimpleBot>::StorePendingEventResult(this, v4, "OnLandOnGround", &_result);
    for ( i = (*(this->_vptr_INextBotEventResponder + 3))(this);
          i != 0;
          i = (*(this->_vptr_INextBotEventResponder + 4))(this, i) )
    {
      (*(*i + 48LL))(i, ground);
    }
  }
}


// Action<CDOTA_BaseNPC>::OnContact  (line 830, @0x0000000002886830, libserver.so)  // inlines: EventDesiredResult, IActionResult, OnContact
// calls: Action<CDOTA_BaseNPC>::DebugReceivedEvent, Action<CDOTA_BaseNPC>::StorePendingEventResult
// strings: "OnContact"
void __fastcall Action<CDOTA_BaseNPC>::OnContact(
        Action<CDOTA_BaseNPC> *const this,
        CBaseEntity *other,
        CGameTrace *result)
{
  Action<CDOTA_BaseNPC> *v6; // rbx
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rsi
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 i; // rbx
  EventDesiredResult<CDOTA_BaseNPC> _result; // [rsp+0h] [rbp-70h] BYREF
  EventDesiredResult<CDOTA_BaseNPC> v15; // [rsp+20h] [rbp-50h] BYREF

  if ( this->m_isStarted )
  {
    _result.m_type = ActionResultType::CONTINUE;
    _result.m_action = 0;
    v6 = this;
    _result.m_reason = 0;
    _result.m_priority = EventResultPriorityType::RESULT_TRY;
    do
    {
      Action<CDOTA_BaseNPC>::DebugReceivedEvent(this, v6, "OnContact");
      (*(v6->_vptr_INextBotEventResponder + 73))(
        &v15,
        v6,
        this->m_actor,
        other,
        result,
        v7,
        *&_result.m_type,
        _result.m_action,
        _result.m_reason,
        _result.m_priority);
      _result = v15;
      if ( v15.m_type != ActionResultType::CONTINUE )
        break;
      v6 = v6->m_buriedUnderMe;
    }
    while ( v6 != 0 );
    Action<CDOTA_BaseNPC>::StorePendingEventResult(this, v6, "OnContact", &_result);
    for ( i = (*(this->_vptr_INextBotEventResponder + 3))(
                this,
                v10,
                v8,
                v9,
                v11,
                v12,
                *&_result.m_type,
                _result.m_action,
                _result.m_reason,
                _result.m_priority); i != 0; i = (*(this->_vptr_INextBotEventResponder + 4))(this, i) )
      (*(*i + 56LL))(i, other, result);
  }
}


// Action<CSimpleBot>::OnContact  (line 830, @0x0000000002f24b30, libserver.so)  // inlines: Color, DebugReceivedEvent, EventDesiredResult, GetBool, GetInt, GetName, IActionResult, IsDebugFilterMatch, IsDebugging, OnContact, SetColor, curtime
// calls: CUtlSymbol::String, INextBot::DebugConColorMsg, Action<CSimpleBot>::StorePendingEventResult, NextBotManager::IsDebugFilterMatch, __stack_chk_fail
// strings: "%3.2f: %s:%s: %s received EVENT %s\n", "OnContact"
void __fastcall Action<CSimpleBot>::OnContact(Action<CSimpleBot> *const this, CBaseEntity *other, CGameTrace *result)
{
  Action<CSimpleBot> *v6; // r14
  CSimpleBot *m_actor; // rdx
  INextBot *v8; // r15
  const char *v9; // r15
  __int64 v10; // rax
  const char *v11; // r9
  const char *v12; // r8
  CGlobalVars *v13; // rdx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  double m_flCurrentTime; // xmm0_8
  CSimpleBot *v16; // rax
  __int64 i; // r14
  bool IsDebugFilterMatch; // al
  CGlobalVars *v19; // [rsp+18h] [rbp-A8h]
  const char *v20; // [rsp+20h] [rbp-A0h]
  const char *v21; // [rsp+30h] [rbp-90h]
  CSimpleBot *v22; // [rsp+30h] [rbp-90h]
  EventDesiredResult<CSimpleBot> _result; // [rsp+40h] [rbp-80h] BYREF
  EventDesiredResult<CSimpleBot> v24; // [rsp+60h] [rbp-60h] BYREF
  Color v25; // [rsp+80h] [rbp-40h] BYREF
  unsigned __int64 v26; // [rsp+88h] [rbp-38h]

  v26 = __readfsqword(0x28u);
  if ( this->m_isStarted )
  {
    v6 = this;
    _result.m_type = ActionResultType::CONTINUE;
    _result.m_action = 0;
    _result.m_reason = 0;
    _result.m_priority = EventResultPriorityType::RESULT_TRY;
    do
    {
      m_actor = this->m_actor;
      if ( m_actor != 0 )
      {
        if ( SLOBYTE(g_NextBotManager.m_debugType) < 0
          && ((v8 = &m_actor->INextBot, g_NextBotManager.m_debugFilterList.m_Size == 0)
           || (v22 = this->m_actor,
               IsDebugFilterMatch = NextBotManager::IsDebugFilterMatch(&g_NextBotManager, &m_actor->INextBot),
               m_actor = v22,
               IsDebugFilterMatch))
          && (*(m_actor->_vptr_INextBotEventResponder + 96))(v8, 128) != 0
          || NextBotDebugHistory.m_pParent->m_Value.m_nValue != 0 )
        {
          v9 = (*(v6->_vptr_INextBotEventResponder + 64))(v6);
          v21 = CUtlSymbol::String(&this->m_behavior->m_name);
          v10 = (*(this->m_actor->_vptr_INextBotEventResponder + 97))(&this->m_actor->INextBot);
          v11 = v21;
          v12 = v10;
          v13 = gpGlobals;
          if ( gpGlobals != 0 )
          {
            if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
            {
              m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
              if ( m_pfnWarningFunc != 0 )
              {
                v19 = gpGlobals;
                v20 = v12;
                m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
                v13 = v19;
                v12 = v20;
                v11 = v21;
              }
            }
            m_flCurrentTime = v13->m_flCurrentTime;
          }
          else
          {
            m_flCurrentTime = 0.0;
          }
          v16 = this->m_actor;
          memset(&v25, 100, 3);
          v25._color[3] = -1;
          INextBot::DebugConColorMsg(
            &v16->INextBot,
            NextBotDebugType::NEXTBOT_EVENTS,
            &v25,
            "%3.2f: %s:%s: %s received EVENT %s\n",
            m_flCurrentTime,
            v12,
            v11,
            v9,
            "OnContact");
        }
        m_actor = this->m_actor;
      }
      (*(v6->_vptr_INextBotEventResponder + 73))(&v24, v6, m_actor, other, result);
      _result = v24;
      if ( v24.m_type != ActionResultType::CONTINUE )
        break;
      v6 = v6->m_buriedUnderMe;
    }
    while ( v6 != 0 );
    Action<CSimpleBot>::StorePendingEventResult(this, v6, "OnContact", &_result);
    for ( i = (*(this->_vptr_INextBotEventResponder + 3))(this);
          i != 0;
          i = (*(this->_vptr_INextBotEventResponder + 4))(this, i) )
    {
      (*(*i + 56LL))(i, other, result);
    }
  }
}


// Action<CDOTA_BaseNPC>::OnMoveToSuccess  (line 831, @0x0000000002886940, libserver.so)  // inlines: Color, DebugReceivedEvent, EventDesiredResult, GetBool, GetInt, GetName, IActionResult, IsDebugging, OnMoveToSuccess, SetColor, curtime
// calls: CUtlSymbol::String, INextBot::DebugConColorMsg, Action<CDOTA_BaseNPC>::StorePendingEventResult, NextBotManager::IsDebugFilterMatch, __stack_chk_fail
// strings: "%3.2f: %s:%s: %s received EVENT %s\n", "OnMoveToSuccess"
void __fastcall Action<CDOTA_BaseNPC>::OnMoveToSuccess(Action<CDOTA_BaseNPC> *const this)
{
  Action<CDOTA_BaseNPC> *v2; // rbx
  CDOTA_BaseNPC *m_actor; // rdx
  const char *v4; // r15
  __int64 v5; // rax
  const char *v6; // r9
  const char *v7; // r8
  CGlobalVars *v8; // rdx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  double m_flCurrentTime; // xmm0_8
  CDOTA_BaseNPC *v11; // rax
  __int64 i; // rbx
  INextBot *v13; // r15
  CGlobalVars *v14; // [rsp+18h] [rbp-98h]
  const char *v15; // [rsp+20h] [rbp-90h]
  const char *v16; // [rsp+28h] [rbp-88h]
  CDOTA_BaseNPC *v17; // [rsp+28h] [rbp-88h]
  EventDesiredResult<CDOTA_BaseNPC> _result; // [rsp+30h] [rbp-80h] BYREF
  EventDesiredResult<CDOTA_BaseNPC> v19; // [rsp+50h] [rbp-60h] BYREF
  Color color; // [rsp+70h] [rbp-40h] BYREF
  unsigned __int64 v21; // [rsp+78h] [rbp-38h]

  v21 = __readfsqword(0x28u);
  if ( this->m_isStarted )
  {
    _result.m_type = ActionResultType::CONTINUE;
    v2 = this;
    _result.m_action = 0;
    _result.m_reason = 0;
    _result.m_priority = EventResultPriorityType::RESULT_TRY;
    do
    {
      m_actor = this->m_actor;
      if ( m_actor != 0 )
      {
        if ( SLOBYTE(g_NextBotManager.m_debugType) < 0
          && (v13 = &m_actor->INextBot,
              v17 = this->m_actor,
              NextBotManager::IsDebugFilterMatch(&g_NextBotManager, &m_actor->INextBot))
          && (*(v17->_vptr_INextBotEventResponder + 96))(v13, 128) != 0
          || NextBotDebugHistory.m_pParent->m_Value.m_nValue != 0 )
        {
          v4 = (*(v2->_vptr_INextBotEventResponder + 64))(v2);
          v16 = CUtlSymbol::String(&this->m_behavior->m_name);
          v5 = (*(this->m_actor->_vptr_INextBotEventResponder + 97))(&this->m_actor->INextBot);
          v6 = v16;
          v7 = v5;
          v8 = gpGlobals;
          if ( gpGlobals != 0 )
          {
            if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
            {
              m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
              if ( m_pfnWarningFunc != 0 )
              {
                v14 = gpGlobals;
                v15 = v7;
                m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
                v8 = v14;
                v7 = v15;
                v6 = v16;
              }
            }
            m_flCurrentTime = v8->m_flCurrentTime;
          }
          else
          {
            m_flCurrentTime = 0.0;
          }
          v11 = this->m_actor;
          memset(&color, 100, 3);
          color._color[3] = -1;
          INextBot::DebugConColorMsg(
            &v11->INextBot,
            NextBotDebugType::NEXTBOT_EVENTS,
            &color,
            "%3.2f: %s:%s: %s received EVENT %s\n",
            m_flCurrentTime,
            v7,
            v6,
            v4,
            "OnMoveToSuccess");
        }
        m_actor = this->m_actor;
      }
      (*(v2->_vptr_INextBotEventResponder + 74))(&v19, v2, m_actor);
      _result = v19;
      if ( v19.m_type != ActionResultType::CONTINUE )
        break;
      v2 = v2->m_buriedUnderMe;
    }
    while ( v2 != 0 );
    Action<CDOTA_BaseNPC>::StorePendingEventResult(this, v2, "OnMoveToSuccess", &_result);
    for ( i = (*(this->_vptr_INextBotEventResponder + 3))(this);
          i != 0;
          i = (*(this->_vptr_INextBotEventResponder + 4))(this, i) )
    {
      (*(*i + 64LL))(i);
    }
  }
}


// Action<CSimpleBot>::OnMoveToSuccess  (line 831, @0x0000000002f24e00, libserver.so)  // inlines: Color, DebugReceivedEvent, EventDesiredResult, GetBool, GetInt, GetName, IActionResult, IsDebugFilterMatch, IsDebugging, OnMoveToSuccess, SetColor, curtime
// calls: CUtlSymbol::String, INextBot::DebugConColorMsg, Action<CSimpleBot>::StorePendingEventResult, NextBotManager::IsDebugFilterMatch, __stack_chk_fail
// strings: "%3.2f: %s:%s: %s received EVENT %s\n", "OnMoveToSuccess"
void __fastcall Action<CSimpleBot>::OnMoveToSuccess(Action<CSimpleBot> *const this)
{
  Action<CSimpleBot> *v2; // rbx
  CSimpleBot *m_actor; // rdx
  INextBot *v4; // r15
  const char *v5; // r15
  const char *v6; // r14
  const char *v7; // r8
  CGlobalVars *v8; // rdx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  double m_flCurrentTime; // xmm0_8
  CSimpleBot *v11; // rax
  __int64 i; // rbx
  bool IsDebugFilterMatch; // al
  CGlobalVars *v14; // [rsp+18h] [rbp-98h]
  const char *v15; // [rsp+20h] [rbp-90h]
  CSimpleBot *v16; // [rsp+20h] [rbp-90h]
  EventDesiredResult<CSimpleBot> _result; // [rsp+30h] [rbp-80h] BYREF
  EventDesiredResult<CSimpleBot> v18; // [rsp+50h] [rbp-60h] BYREF
  Color v19; // [rsp+70h] [rbp-40h] BYREF
  unsigned __int64 v20; // [rsp+78h] [rbp-38h]

  v20 = __readfsqword(0x28u);
  if ( this->m_isStarted )
  {
    _result.m_type = ActionResultType::CONTINUE;
    v2 = this;
    _result.m_action = 0;
    _result.m_reason = 0;
    _result.m_priority = EventResultPriorityType::RESULT_TRY;
    do
    {
      m_actor = this->m_actor;
      if ( m_actor != 0 )
      {
        if ( SLOBYTE(g_NextBotManager.m_debugType) < 0
          && ((v4 = &m_actor->INextBot, g_NextBotManager.m_debugFilterList.m_Size == 0)
           || (v16 = this->m_actor,
               IsDebugFilterMatch = NextBotManager::IsDebugFilterMatch(&g_NextBotManager, &m_actor->INextBot),
               m_actor = v16,
               IsDebugFilterMatch))
          && (*(m_actor->_vptr_INextBotEventResponder + 96))(v4, 128) != 0
          || NextBotDebugHistory.m_pParent->m_Value.m_nValue != 0 )
        {
          v5 = (*(v2->_vptr_INextBotEventResponder + 64))(v2);
          v6 = CUtlSymbol::String(&this->m_behavior->m_name);
          v7 = (*(this->m_actor->_vptr_INextBotEventResponder + 97))(&this->m_actor->INextBot);
          v8 = gpGlobals;
          if ( gpGlobals != 0 )
          {
            if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
            {
              m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
              if ( m_pfnWarningFunc != 0 )
              {
                v14 = gpGlobals;
                v15 = v7;
                m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
                v8 = v14;
                v7 = v15;
              }
            }
            m_flCurrentTime = v8->m_flCurrentTime;
          }
          else
          {
            m_flCurrentTime = 0.0;
          }
          v11 = this->m_actor;
          memset(&v19, 100, 3);
          v19._color[3] = -1;
          INextBot::DebugConColorMsg(
            &v11->INextBot,
            NextBotDebugType::NEXTBOT_EVENTS,
            &v19,
            "%3.2f: %s:%s: %s received EVENT %s\n",
            m_flCurrentTime,
            v7,
            v6,
            v5,
            "OnMoveToSuccess");
        }
        m_actor = this->m_actor;
      }
      (*(v2->_vptr_INextBotEventResponder + 74))(&v18, v2, m_actor);
      _result = v18;
      if ( v18.m_type != ActionResultType::CONTINUE )
        break;
      v2 = v2->m_buriedUnderMe;
    }
    while ( v2 != 0 );
    Action<CSimpleBot>::StorePendingEventResult(this, v2, "OnMoveToSuccess", &_result);
    for ( i = (*(this->_vptr_INextBotEventResponder + 3))(this);
          i != 0;
          i = (*(this->_vptr_INextBotEventResponder + 4))(this, i) )
    {
      (*(*i + 64LL))(i);
    }
  }
}


// Action<CDOTA_BaseNPC>::OnMoveToFailure  (line 832, @0x0000000002886be0, libserver.so)  // inlines: EventDesiredResult, IActionResult, OnMoveToFailure
// calls: Action<CDOTA_BaseNPC>::DebugReceivedEvent, Action<CDOTA_BaseNPC>::StorePendingEventResult
// strings: "OnMoveToFailure"
void __fastcall Action<CDOTA_BaseNPC>::OnMoveToFailure(Action<CDOTA_BaseNPC> *const this, MoveToFailureType reason)
{
  Action<CDOTA_BaseNPC> *v4; // rbx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rsi
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 i; // rbx
  EventDesiredResult<CDOTA_BaseNPC> _result; // [rsp+0h] [rbp-60h] BYREF
  EventDesiredResult<CDOTA_BaseNPC> v14; // [rsp+20h] [rbp-40h] BYREF

  if ( this->m_isStarted )
  {
    _result.m_type = ActionResultType::CONTINUE;
    v4 = this;
    _result.m_action = 0;
    _result.m_reason = 0;
    _result.m_priority = EventResultPriorityType::RESULT_TRY;
    do
    {
      Action<CDOTA_BaseNPC>::DebugReceivedEvent(this, v4, "OnMoveToFailure");
      (*(v4->_vptr_INextBotEventResponder + 75))(
        &v14,
        v4,
        this->m_actor,
        reason,
        v5,
        v6,
        *&_result.m_type,
        _result.m_action,
        _result.m_reason,
        _result.m_priority);
      _result = v14;
      if ( v14.m_type != ActionResultType::CONTINUE )
        break;
      v4 = v4->m_buriedUnderMe;
    }
    while ( v4 != 0 );
    Action<CDOTA_BaseNPC>::StorePendingEventResult(this, v4, "OnMoveToFailure", &_result);
    for ( i = (*(this->_vptr_INextBotEventResponder + 3))(
                this,
                v9,
                v7,
                v8,
                v10,
                v11,
                *&_result.m_type,
                _result.m_action,
                _result.m_reason,
                _result.m_priority); i != 0; i = (*(this->_vptr_INextBotEventResponder + 4))(this, i) )
      (*(*i + 72LL))(i, reason);
  }
}


// Action<CSimpleBot>::OnMoveToFailure  (line 832, @0x0000000002f250a0, libserver.so)  // inlines: Color, DebugReceivedEvent, EventDesiredResult, GetBool, GetInt, GetName, IActionResult, IsDebugFilterMatch, IsDebugging, OnMoveToFailure, SetColor, curtime
// calls: CUtlSymbol::String, INextBot::DebugConColorMsg, Action<CSimpleBot>::StorePendingEventResult, NextBotManager::IsDebugFilterMatch, __stack_chk_fail
// strings: "%3.2f: %s:%s: %s received EVENT %s\n", "OnMoveToFailure"
void __fastcall Action<CSimpleBot>::OnMoveToFailure(Action<CSimpleBot> *const this, MoveToFailureType reason)
{
  Action<CSimpleBot> *v4; // r15
  CSimpleBot *m_actor; // rdx
  INextBot *v6; // r14
  const char *v7; // r14
  __int64 v8; // rax
  const char *v9; // r9
  const char *v10; // r8
  CGlobalVars *v11; // rdx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  double m_flCurrentTime; // xmm0_8
  CSimpleBot *v14; // rax
  __int64 i; // r13
  bool IsDebugFilterMatch; // al
  CGlobalVars *v17; // [rsp+10h] [rbp-A0h]
  const char *v18; // [rsp+18h] [rbp-98h]
  const char *v19; // [rsp+28h] [rbp-88h]
  CSimpleBot *v20; // [rsp+28h] [rbp-88h]
  EventDesiredResult<CSimpleBot> _result; // [rsp+30h] [rbp-80h] BYREF
  EventDesiredResult<CSimpleBot> v22; // [rsp+50h] [rbp-60h] BYREF
  Color v23; // [rsp+70h] [rbp-40h] BYREF
  unsigned __int64 v24; // [rsp+78h] [rbp-38h]

  v24 = __readfsqword(0x28u);
  if ( this->m_isStarted )
  {
    _result.m_type = ActionResultType::CONTINUE;
    _result.m_action = 0;
    v4 = this;
    _result.m_reason = 0;
    _result.m_priority = EventResultPriorityType::RESULT_TRY;
    do
    {
      m_actor = this->m_actor;
      if ( m_actor != 0 )
      {
        if ( SLOBYTE(g_NextBotManager.m_debugType) < 0
          && ((v6 = &m_actor->INextBot, g_NextBotManager.m_debugFilterList.m_Size == 0)
           || (v20 = this->m_actor,
               IsDebugFilterMatch = NextBotManager::IsDebugFilterMatch(&g_NextBotManager, &m_actor->INextBot),
               m_actor = v20,
               IsDebugFilterMatch))
          && (*(m_actor->_vptr_INextBotEventResponder + 96))(v6, 128) != 0
          || NextBotDebugHistory.m_pParent->m_Value.m_nValue != 0 )
        {
          v7 = (*(v4->_vptr_INextBotEventResponder + 64))(v4);
          v19 = CUtlSymbol::String(&this->m_behavior->m_name);
          v8 = (*(this->m_actor->_vptr_INextBotEventResponder + 97))(&this->m_actor->INextBot);
          v9 = v19;
          v10 = v8;
          v11 = gpGlobals;
          if ( gpGlobals != 0 )
          {
            if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
            {
              m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
              if ( m_pfnWarningFunc != 0 )
              {
                v17 = gpGlobals;
                v18 = v10;
                m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
                v11 = v17;
                v10 = v18;
                v9 = v19;
              }
            }
            m_flCurrentTime = v11->m_flCurrentTime;
          }
          else
          {
            m_flCurrentTime = 0.0;
          }
          v14 = this->m_actor;
          memset(&v23, 100, 3);
          v23._color[3] = -1;
          INextBot::DebugConColorMsg(
            &v14->INextBot,
            NextBotDebugType::NEXTBOT_EVENTS,
            &v23,
            "%3.2f: %s:%s: %s received EVENT %s\n",
            m_flCurrentTime,
            v10,
            v9,
            v7,
            "OnMoveToFailure");
        }
        m_actor = this->m_actor;
      }
      (*(v4->_vptr_INextBotEventResponder + 75))(&v22, v4, m_actor, reason);
      _result = v22;
      if ( v22.m_type != ActionResultType::CONTINUE )
        break;
      v4 = v4->m_buriedUnderMe;
    }
    while ( v4 != 0 );
    Action<CSimpleBot>::StorePendingEventResult(this, v4, "OnMoveToFailure", &_result);
    for ( i = (*(this->_vptr_INextBotEventResponder + 3))(this);
          i != 0;
          i = (*(this->_vptr_INextBotEventResponder + 4))(this, i) )
    {
      (*(*i + 72LL))(i, reason);
    }
  }
}


// Action<CDOTA_BaseNPC>::OnStuck  (line 833, @0x0000000002886ce0, libserver.so)  // inlines: Color, DebugReceivedEvent, EventDesiredResult, GetBool, GetInt, GetName, IActionResult, IsDebugging, OnStuck, SetColor, curtime
// calls: CUtlSymbol::String, INextBot::DebugConColorMsg, Action<CDOTA_BaseNPC>::StorePendingEventResult, NextBotManager::IsDebugFilterMatch, __stack_chk_fail
// strings: "%3.2f: %s:%s: %s received EVENT %s\n", "OnStuck"
void __fastcall Action<CDOTA_BaseNPC>::OnStuck(Action<CDOTA_BaseNPC> *const this)
{
  Action<CDOTA_BaseNPC> *v2; // rbx
  CDOTA_BaseNPC *m_actor; // rdx
  const char *v4; // r15
  __int64 v5; // rax
  const char *v6; // r9
  const char *v7; // r8
  CGlobalVars *v8; // rdx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  double m_flCurrentTime; // xmm0_8
  CDOTA_BaseNPC *v11; // rax
  __int64 i; // rbx
  INextBot *v13; // r15
  CGlobalVars *v14; // [rsp+18h] [rbp-98h]
  const char *v15; // [rsp+20h] [rbp-90h]
  const char *v16; // [rsp+28h] [rbp-88h]
  CDOTA_BaseNPC *v17; // [rsp+28h] [rbp-88h]
  EventDesiredResult<CDOTA_BaseNPC> _result; // [rsp+30h] [rbp-80h] BYREF
  EventDesiredResult<CDOTA_BaseNPC> v19; // [rsp+50h] [rbp-60h] BYREF
  Color color; // [rsp+70h] [rbp-40h] BYREF
  unsigned __int64 v21; // [rsp+78h] [rbp-38h]

  v21 = __readfsqword(0x28u);
  if ( this->m_isStarted )
  {
    _result.m_type = ActionResultType::CONTINUE;
    v2 = this;
    _result.m_action = 0;
    _result.m_reason = 0;
    _result.m_priority = EventResultPriorityType::RESULT_TRY;
    do
    {
      m_actor = this->m_actor;
      if ( m_actor != 0 )
      {
        if ( SLOBYTE(g_NextBotManager.m_debugType) < 0
          && (v13 = &m_actor->INextBot,
              v17 = this->m_actor,
              NextBotManager::IsDebugFilterMatch(&g_NextBotManager, &m_actor->INextBot))
          && (*(v17->_vptr_INextBotEventResponder + 96))(v13, 128) != 0
          || NextBotDebugHistory.m_pParent->m_Value.m_nValue != 0 )
        {
          v4 = (*(v2->_vptr_INextBotEventResponder + 64))(v2);
          v16 = CUtlSymbol::String(&this->m_behavior->m_name);
          v5 = (*(this->m_actor->_vptr_INextBotEventResponder + 97))(&this->m_actor->INextBot);
          v6 = v16;
          v7 = v5;
          v8 = gpGlobals;
          if ( gpGlobals != 0 )
          {
            if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
            {
              m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
              if ( m_pfnWarningFunc != 0 )
              {
                v14 = gpGlobals;
                v15 = v7;
                m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
                v8 = v14;
                v7 = v15;
                v6 = v16;
              }
            }
            m_flCurrentTime = v8->m_flCurrentTime;
          }
          else
          {
            m_flCurrentTime = 0.0;
          }
          v11 = this->m_actor;
          memset(&color, 100, 3);
          color._color[3] = -1;
          INextBot::DebugConColorMsg(
            &v11->INextBot,
            NextBotDebugType::NEXTBOT_EVENTS,
            &color,
            "%3.2f: %s:%s: %s received EVENT %s\n",
            m_flCurrentTime,
            v7,
            v6,
            v4,
            "OnStuck");
        }
        m_actor = this->m_actor;
      }
      (*(v2->_vptr_INextBotEventResponder + 76))(&v19, v2, m_actor);
      _result = v19;
      if ( v19.m_type != ActionResultType::CONTINUE )
        break;
      v2 = v2->m_buriedUnderMe;
    }
    while ( v2 != 0 );
    Action<CDOTA_BaseNPC>::StorePendingEventResult(this, v2, "OnStuck", &_result);
    for ( i = (*(this->_vptr_INextBotEventResponder + 3))(this);
          i != 0;
          i = (*(this->_vptr_INextBotEventResponder + 4))(this, i) )
    {
      (*(*i + 80LL))(i);
    }
  }
}


// Action<CSimpleBot>::OnStuck  (line 833, @0x0000000002f25360, libserver.so)  // inlines: Color, DebugReceivedEvent, EventDesiredResult, GetBool, GetInt, GetName, IActionResult, IsDebugFilterMatch, IsDebugging, OnStuck, SetColor, curtime
// calls: CUtlSymbol::String, INextBot::DebugConColorMsg, Action<CSimpleBot>::StorePendingEventResult, NextBotManager::IsDebugFilterMatch, __stack_chk_fail
// strings: "%3.2f: %s:%s: %s received EVENT %s\n", "OnStuck"
void __fastcall Action<CSimpleBot>::OnStuck(Action<CSimpleBot> *const this)
{
  Action<CSimpleBot> *v2; // rbx
  CSimpleBot *m_actor; // rdx
  INextBot *v4; // r15
  const char *v5; // r15
  const char *v6; // r14
  const char *v7; // r8
  CGlobalVars *v8; // rdx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  double m_flCurrentTime; // xmm0_8
  CSimpleBot *v11; // rax
  __int64 i; // rbx
  bool IsDebugFilterMatch; // al
  CGlobalVars *v14; // [rsp+18h] [rbp-98h]
  const char *v15; // [rsp+20h] [rbp-90h]
  CSimpleBot *v16; // [rsp+20h] [rbp-90h]
  EventDesiredResult<CSimpleBot> _result; // [rsp+30h] [rbp-80h] BYREF
  EventDesiredResult<CSimpleBot> v18; // [rsp+50h] [rbp-60h] BYREF
  Color v19; // [rsp+70h] [rbp-40h] BYREF
  unsigned __int64 v20; // [rsp+78h] [rbp-38h]

  v20 = __readfsqword(0x28u);
  if ( this->m_isStarted )
  {
    _result.m_type = ActionResultType::CONTINUE;
    v2 = this;
    _result.m_action = 0;
    _result.m_reason = 0;
    _result.m_priority = EventResultPriorityType::RESULT_TRY;
    do
    {
      m_actor = this->m_actor;
      if ( m_actor != 0 )
      {
        if ( SLOBYTE(g_NextBotManager.m_debugType) < 0
          && ((v4 = &m_actor->INextBot, g_NextBotManager.m_debugFilterList.m_Size == 0)
           || (v16 = this->m_actor,
               IsDebugFilterMatch = NextBotManager::IsDebugFilterMatch(&g_NextBotManager, &m_actor->INextBot),
               m_actor = v16,
               IsDebugFilterMatch))
          && (*(m_actor->_vptr_INextBotEventResponder + 96))(v4, 128) != 0
          || NextBotDebugHistory.m_pParent->m_Value.m_nValue != 0 )
        {
          v5 = (*(v2->_vptr_INextBotEventResponder + 64))(v2);
          v6 = CUtlSymbol::String(&this->m_behavior->m_name);
          v7 = (*(this->m_actor->_vptr_INextBotEventResponder + 97))(&this->m_actor->INextBot);
          v8 = gpGlobals;
          if ( gpGlobals != 0 )
          {
            if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
            {
              m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
              if ( m_pfnWarningFunc != 0 )
              {
                v14 = gpGlobals;
                v15 = v7;
                m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
                v8 = v14;
                v7 = v15;
              }
            }
            m_flCurrentTime = v8->m_flCurrentTime;
          }
          else
          {
            m_flCurrentTime = 0.0;
          }
          v11 = this->m_actor;
          memset(&v19, 100, 3);
          v19._color[3] = -1;
          INextBot::DebugConColorMsg(
            &v11->INextBot,
            NextBotDebugType::NEXTBOT_EVENTS,
            &v19,
            "%3.2f: %s:%s: %s received EVENT %s\n",
            m_flCurrentTime,
            v7,
            v6,
            v5,
            "OnStuck");
        }
        m_actor = this->m_actor;
      }
      (*(v2->_vptr_INextBotEventResponder + 76))(&v18, v2, m_actor);
      _result = v18;
      if ( v18.m_type != ActionResultType::CONTINUE )
        break;
      v2 = v2->m_buriedUnderMe;
    }
    while ( v2 != 0 );
    Action<CSimpleBot>::StorePendingEventResult(this, v2, "OnStuck", &_result);
    for ( i = (*(this->_vptr_INextBotEventResponder + 3))(this);
          i != 0;
          i = (*(this->_vptr_INextBotEventResponder + 4))(this, i) )
    {
      (*(*i + 80LL))(i);
    }
  }
}


// Action<CDOTA_BaseNPC>::OnUnStuck  (line 834, @0x0000000002886f80, libserver.so)  // inlines: Color, DebugReceivedEvent, EventDesiredResult, GetBool, GetInt, GetName, IActionResult, IsDebugging, OnUnStuck, SetColor, curtime
// calls: CUtlSymbol::String, INextBot::DebugConColorMsg, Action<CDOTA_BaseNPC>::StorePendingEventResult, NextBotManager::IsDebugFilterMatch, __stack_chk_fail
// strings: "%3.2f: %s:%s: %s received EVENT %s\n", "OnUnStuck"
void __fastcall Action<CDOTA_BaseNPC>::OnUnStuck(Action<CDOTA_BaseNPC> *const this)
{
  Action<CDOTA_BaseNPC> *v2; // rbx
  CDOTA_BaseNPC *m_actor; // rdx
  const char *v4; // r15
  __int64 v5; // rax
  const char *v6; // r9
  const char *v7; // r8
  CGlobalVars *v8; // rdx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  double m_flCurrentTime; // xmm0_8
  CDOTA_BaseNPC *v11; // rax
  __int64 i; // rbx
  INextBot *v13; // r15
  CGlobalVars *v14; // [rsp+18h] [rbp-98h]
  const char *v15; // [rsp+20h] [rbp-90h]
  const char *v16; // [rsp+28h] [rbp-88h]
  CDOTA_BaseNPC *v17; // [rsp+28h] [rbp-88h]
  EventDesiredResult<CDOTA_BaseNPC> _result; // [rsp+30h] [rbp-80h] BYREF
  EventDesiredResult<CDOTA_BaseNPC> v19; // [rsp+50h] [rbp-60h] BYREF
  Color color; // [rsp+70h] [rbp-40h] BYREF
  unsigned __int64 v21; // [rsp+78h] [rbp-38h]

  v21 = __readfsqword(0x28u);
  if ( this->m_isStarted )
  {
    _result.m_type = ActionResultType::CONTINUE;
    v2 = this;
    _result.m_action = 0;
    _result.m_reason = 0;
    _result.m_priority = EventResultPriorityType::RESULT_TRY;
    do
    {
      m_actor = this->m_actor;
      if ( m_actor != 0 )
      {
        if ( SLOBYTE(g_NextBotManager.m_debugType) < 0
          && (v13 = &m_actor->INextBot,
              v17 = this->m_actor,
              NextBotManager::IsDebugFilterMatch(&g_NextBotManager, &m_actor->INextBot))
          && (*(v17->_vptr_INextBotEventResponder + 96))(v13, 128) != 0
          || NextBotDebugHistory.m_pParent->m_Value.m_nValue != 0 )
        {
          v4 = (*(v2->_vptr_INextBotEventResponder + 64))(v2);
          v16 = CUtlSymbol::String(&this->m_behavior->m_name);
          v5 = (*(this->m_actor->_vptr_INextBotEventResponder + 97))(&this->m_actor->INextBot);
          v6 = v16;
          v7 = v5;
          v8 = gpGlobals;
          if ( gpGlobals != 0 )
          {
            if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
            {
              m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
              if ( m_pfnWarningFunc != 0 )
              {
                v14 = gpGlobals;
                v15 = v7;
                m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
                v8 = v14;
                v7 = v15;
                v6 = v16;
              }
            }
            m_flCurrentTime = v8->m_flCurrentTime;
          }
          else
          {
            m_flCurrentTime = 0.0;
          }
          v11 = this->m_actor;
          memset(&color, 100, 3);
          color._color[3] = -1;
          INextBot::DebugConColorMsg(
            &v11->INextBot,
            NextBotDebugType::NEXTBOT_EVENTS,
            &color,
            "%3.2f: %s:%s: %s received EVENT %s\n",
            m_flCurrentTime,
            v7,
            v6,
            v4,
            "OnUnStuck");
        }
        m_actor = this->m_actor;
      }
      (*(v2->_vptr_INextBotEventResponder + 77))(&v19, v2, m_actor);
      _result = v19;
      if ( v19.m_type != ActionResultType::CONTINUE )
        break;
      v2 = v2->m_buriedUnderMe;
    }
    while ( v2 != 0 );
    Action<CDOTA_BaseNPC>::StorePendingEventResult(this, v2, "OnUnStuck", &_result);
    for ( i = (*(this->_vptr_INextBotEventResponder + 3))(this);
          i != 0;
          i = (*(this->_vptr_INextBotEventResponder + 4))(this, i) )
    {
      (*(*i + 88LL))(i);
    }
  }
}


// Action<CSimpleBot>::OnUnStuck  (line 834, @0x0000000002f25600, libserver.so)  // inlines: Color, DebugReceivedEvent, EventDesiredResult, GetBool, GetInt, GetName, IActionResult, IsDebugFilterMatch, IsDebugging, OnUnStuck, SetColor, curtime
// calls: CUtlSymbol::String, INextBot::DebugConColorMsg, Action<CSimpleBot>::StorePendingEventResult, NextBotManager::IsDebugFilterMatch, __stack_chk_fail
// strings: "%3.2f: %s:%s: %s received EVENT %s\n", "OnUnStuck"
void __fastcall Action<CSimpleBot>::OnUnStuck(Action<CSimpleBot> *const this)
{
  Action<CSimpleBot> *v2; // rbx
  CSimpleBot *m_actor; // rdx
  INextBot *v4; // r15
  const char *v5; // r15
  const char *v6; // r14
  const char *v7; // r8
  CGlobalVars *v8; // rdx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  double m_flCurrentTime; // xmm0_8
  CSimpleBot *v11; // rax
  __int64 i; // rbx
  bool IsDebugFilterMatch; // al
  CGlobalVars *v14; // [rsp+18h] [rbp-98h]
  const char *v15; // [rsp+20h] [rbp-90h]
  CSimpleBot *v16; // [rsp+20h] [rbp-90h]
  EventDesiredResult<CSimpleBot> _result; // [rsp+30h] [rbp-80h] BYREF
  EventDesiredResult<CSimpleBot> v18; // [rsp+50h] [rbp-60h] BYREF
  Color v19; // [rsp+70h] [rbp-40h] BYREF
  unsigned __int64 v20; // [rsp+78h] [rbp-38h]

  v20 = __readfsqword(0x28u);
  if ( this->m_isStarted )
  {
    _result.m_type = ActionResultType::CONTINUE;
    v2 = this;
    _result.m_action = 0;
    _result.m_reason = 0;
    _result.m_priority = EventResultPriorityType::RESULT_TRY;
    do
    {
      m_actor = this->m_actor;
      if ( m_actor != 0 )
      {
        if ( SLOBYTE(g_NextBotManager.m_debugType) < 0
          && ((v4 = &m_actor->INextBot, g_NextBotManager.m_debugFilterList.m_Size == 0)
           || (v16 = this->m_actor,
               IsDebugFilterMatch = NextBotManager::IsDebugFilterMatch(&g_NextBotManager, &m_actor->INextBot),
               m_actor = v16,
               IsDebugFilterMatch))
          && (*(m_actor->_vptr_INextBotEventResponder + 96))(v4, 128) != 0
          || NextBotDebugHistory.m_pParent->m_Value.m_nValue != 0 )
        {
          v5 = (*(v2->_vptr_INextBotEventResponder + 64))(v2);
          v6 = CUtlSymbol::String(&this->m_behavior->m_name);
          v7 = (*(this->m_actor->_vptr_INextBotEventResponder + 97))(&this->m_actor->INextBot);
          v8 = gpGlobals;
          if ( gpGlobals != 0 )
          {
            if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
            {
              m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
              if ( m_pfnWarningFunc != 0 )
              {
                v14 = gpGlobals;
                v15 = v7;
                m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
                v8 = v14;
                v7 = v15;
              }
            }
            m_flCurrentTime = v8->m_flCurrentTime;
          }
          else
          {
            m_flCurrentTime = 0.0;
          }
          v11 = this->m_actor;
          memset(&v19, 100, 3);
          v19._color[3] = -1;
          INextBot::DebugConColorMsg(
            &v11->INextBot,
            NextBotDebugType::NEXTBOT_EVENTS,
            &v19,
            "%3.2f: %s:%s: %s received EVENT %s\n",
            m_flCurrentTime,
            v7,
            v6,
            v5,
            "OnUnStuck");
        }
        m_actor = this->m_actor;
      }
      (*(v2->_vptr_INextBotEventResponder + 77))(&v18, v2, m_actor);
      _result = v18;
      if ( v18.m_type != ActionResultType::CONTINUE )
        break;
      v2 = v2->m_buriedUnderMe;
    }
    while ( v2 != 0 );
    Action<CSimpleBot>::StorePendingEventResult(this, v2, "OnUnStuck", &_result);
    for ( i = (*(this->_vptr_INextBotEventResponder + 3))(this);
          i != 0;
          i = (*(this->_vptr_INextBotEventResponder + 4))(this, i) )
    {
      (*(*i + 88LL))(i);
    }
  }
}


// Action<CDOTA_BaseNPC>::OnPostureChanged  (line 835, @0x0000000002887220, libserver.so)  // inlines: Color, DebugReceivedEvent, EventDesiredResult, GetBool, GetInt, GetName, IActionResult, IsDebugging, OnPostureChanged, SetColor, curtime
// calls: CUtlSymbol::String, INextBot::DebugConColorMsg, Action<CDOTA_BaseNPC>::StorePendingEventResult, NextBotManager::IsDebugFilterMatch, __stack_chk_fail
// strings: "%3.2f: %s:%s: %s received EVENT %s\n", "OnPostureChanged"
void __fastcall Action<CDOTA_BaseNPC>::OnPostureChanged(Action<CDOTA_BaseNPC> *const this)
{
  Action<CDOTA_BaseNPC> *v2; // rbx
  CDOTA_BaseNPC *m_actor; // rdx
  const char *v4; // r15
  __int64 v5; // rax
  const char *v6; // r9
  const char *v7; // r8
  CGlobalVars *v8; // rdx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  double m_flCurrentTime; // xmm0_8
  CDOTA_BaseNPC *v11; // rax
  __int64 i; // rbx
  INextBot *v13; // r15
  CGlobalVars *v14; // [rsp+18h] [rbp-98h]
  const char *v15; // [rsp+20h] [rbp-90h]
  const char *v16; // [rsp+28h] [rbp-88h]
  CDOTA_BaseNPC *v17; // [rsp+28h] [rbp-88h]
  EventDesiredResult<CDOTA_BaseNPC> _result; // [rsp+30h] [rbp-80h] BYREF
  EventDesiredResult<CDOTA_BaseNPC> v19; // [rsp+50h] [rbp-60h] BYREF
  Color color; // [rsp+70h] [rbp-40h] BYREF
  unsigned __int64 v21; // [rsp+78h] [rbp-38h]

  v21 = __readfsqword(0x28u);
  if ( this->m_isStarted )
  {
    _result.m_type = ActionResultType::CONTINUE;
    v2 = this;
    _result.m_action = 0;
    _result.m_reason = 0;
    _result.m_priority = EventResultPriorityType::RESULT_TRY;
    do
    {
      m_actor = this->m_actor;
      if ( m_actor != 0 )
      {
        if ( SLOBYTE(g_NextBotManager.m_debugType) < 0
          && (v13 = &m_actor->INextBot,
              v17 = this->m_actor,
              NextBotManager::IsDebugFilterMatch(&g_NextBotManager, &m_actor->INextBot))
          && (*(v17->_vptr_INextBotEventResponder + 96))(v13, 128) != 0
          || NextBotDebugHistory.m_pParent->m_Value.m_nValue != 0 )
        {
          v4 = (*(v2->_vptr_INextBotEventResponder + 64))(v2);
          v16 = CUtlSymbol::String(&this->m_behavior->m_name);
          v5 = (*(this->m_actor->_vptr_INextBotEventResponder + 97))(&this->m_actor->INextBot);
          v6 = v16;
          v7 = v5;
          v8 = gpGlobals;
          if ( gpGlobals != 0 )
          {
            if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
            {
              m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
              if ( m_pfnWarningFunc != 0 )
              {
                v14 = gpGlobals;
                v15 = v7;
                m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
                v8 = v14;
                v7 = v15;
                v6 = v16;
              }
            }
            m_flCurrentTime = v8->m_flCurrentTime;
          }
          else
          {
            m_flCurrentTime = 0.0;
          }
          v11 = this->m_actor;
          memset(&color, 100, 3);
          color._color[3] = -1;
          INextBot::DebugConColorMsg(
            &v11->INextBot,
            NextBotDebugType::NEXTBOT_EVENTS,
            &color,
            "%3.2f: %s:%s: %s received EVENT %s\n",
            m_flCurrentTime,
            v7,
            v6,
            v4,
            "OnPostureChanged");
        }
        m_actor = this->m_actor;
      }
      (*(v2->_vptr_INextBotEventResponder + 78))(&v19, v2, m_actor);
      _result = v19;
      if ( v19.m_type != ActionResultType::CONTINUE )
        break;
      v2 = v2->m_buriedUnderMe;
    }
    while ( v2 != 0 );
    Action<CDOTA_BaseNPC>::StorePendingEventResult(this, v2, "OnPostureChanged", &_result);
    for ( i = (*(this->_vptr_INextBotEventResponder + 3))(this);
          i != 0;
          i = (*(this->_vptr_INextBotEventResponder + 4))(this, i) )
    {
      (*(*i + 96LL))(i);
    }
  }
}


// Action<CSimpleBot>::OnPostureChanged  (line 835, @0x0000000002f258a0, libserver.so)  // inlines: Color, DebugReceivedEvent, EventDesiredResult, GetBool, GetInt, GetName, IActionResult, IsDebugFilterMatch, IsDebugging, OnPostureChanged, SetColor, curtime
// calls: CUtlSymbol::String, INextBot::DebugConColorMsg, Action<CSimpleBot>::StorePendingEventResult, NextBotManager::IsDebugFilterMatch, __stack_chk_fail
// strings: "%3.2f: %s:%s: %s received EVENT %s\n", "OnPostureChanged"
void __fastcall Action<CSimpleBot>::OnPostureChanged(Action<CSimpleBot> *const this)
{
  Action<CSimpleBot> *v2; // rbx
  CSimpleBot *m_actor; // rdx
  INextBot *v4; // r15
  const char *v5; // r15
  const char *v6; // r14
  const char *v7; // r8
  CGlobalVars *v8; // rdx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  double m_flCurrentTime; // xmm0_8
  CSimpleBot *v11; // rax
  __int64 i; // rbx
  bool IsDebugFilterMatch; // al
  CGlobalVars *v14; // [rsp+18h] [rbp-98h]
  const char *v15; // [rsp+20h] [rbp-90h]
  CSimpleBot *v16; // [rsp+20h] [rbp-90h]
  EventDesiredResult<CSimpleBot> _result; // [rsp+30h] [rbp-80h] BYREF
  EventDesiredResult<CSimpleBot> v18; // [rsp+50h] [rbp-60h] BYREF
  Color v19; // [rsp+70h] [rbp-40h] BYREF
  unsigned __int64 v20; // [rsp+78h] [rbp-38h]

  v20 = __readfsqword(0x28u);
  if ( this->m_isStarted )
  {
    _result.m_type = ActionResultType::CONTINUE;
    v2 = this;
    _result.m_action = 0;
    _result.m_reason = 0;
    _result.m_priority = EventResultPriorityType::RESULT_TRY;
    do
    {
      m_actor = this->m_actor;
      if ( m_actor != 0 )
      {
        if ( SLOBYTE(g_NextBotManager.m_debugType) < 0
          && ((v4 = &m_actor->INextBot, g_NextBotManager.m_debugFilterList.m_Size == 0)
           || (v16 = this->m_actor,
               IsDebugFilterMatch = NextBotManager::IsDebugFilterMatch(&g_NextBotManager, &m_actor->INextBot),
               m_actor = v16,
               IsDebugFilterMatch))
          && (*(m_actor->_vptr_INextBotEventResponder + 96))(v4, 128) != 0
          || NextBotDebugHistory.m_pParent->m_Value.m_nValue != 0 )
        {
          v5 = (*(v2->_vptr_INextBotEventResponder + 64))(v2);
          v6 = CUtlSymbol::String(&this->m_behavior->m_name);
          v7 = (*(this->m_actor->_vptr_INextBotEventResponder + 97))(&this->m_actor->INextBot);
          v8 = gpGlobals;
          if ( gpGlobals != 0 )
          {
            if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
            {
              m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
              if ( m_pfnWarningFunc != 0 )
              {
                v14 = gpGlobals;
                v15 = v7;
                m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
                v8 = v14;
                v7 = v15;
              }
            }
            m_flCurrentTime = v8->m_flCurrentTime;
          }
          else
          {
            m_flCurrentTime = 0.0;
          }
          v11 = this->m_actor;
          memset(&v19, 100, 3);
          v19._color[3] = -1;
          INextBot::DebugConColorMsg(
            &v11->INextBot,
            NextBotDebugType::NEXTBOT_EVENTS,
            &v19,
            "%3.2f: %s:%s: %s received EVENT %s\n",
            m_flCurrentTime,
            v7,
            v6,
            v5,
            "OnPostureChanged");
        }
        m_actor = this->m_actor;
      }
      (*(v2->_vptr_INextBotEventResponder + 78))(&v18, v2, m_actor);
      _result = v18;
      if ( v18.m_type != ActionResultType::CONTINUE )
        break;
      v2 = v2->m_buriedUnderMe;
    }
    while ( v2 != 0 );
    Action<CSimpleBot>::StorePendingEventResult(this, v2, "OnPostureChanged", &_result);
    for ( i = (*(this->_vptr_INextBotEventResponder + 3))(this);
          i != 0;
          i = (*(this->_vptr_INextBotEventResponder + 4))(this, i) )
    {
      (*(*i + 96LL))(i);
    }
  }
}


// Action<CDOTA_BaseNPC>::OnAnimationActivityComplete  (line 836, @0x00000000028874c0, libserver.so)  // inlines: EventDesiredResult, IActionResult, OnAnimationActivityComplete
// calls: Action<CDOTA_BaseNPC>::DebugReceivedEvent, Action<CDOTA_BaseNPC>::StorePendingEventResult
// strings: "OnAnimationActivityComplete"
void __fastcall Action<CDOTA_BaseNPC>::OnAnimationActivityComplete(
        Action<CDOTA_BaseNPC> *const this,
        Activity activity)
{
  Action<CDOTA_BaseNPC> *v4; // rbx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rsi
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 i; // rbx
  EventDesiredResult<CDOTA_BaseNPC> _result; // [rsp+0h] [rbp-60h] BYREF
  EventDesiredResult<CDOTA_BaseNPC> v14; // [rsp+20h] [rbp-40h] BYREF

  if ( this->m_isStarted )
  {
    _result.m_type = ActionResultType::CONTINUE;
    v4 = this;
    _result.m_action = 0;
    _result.m_reason = 0;
    _result.m_priority = EventResultPriorityType::RESULT_TRY;
    do
    {
      Action<CDOTA_BaseNPC>::DebugReceivedEvent(this, v4, "OnAnimationActivityComplete");
      (*(v4->_vptr_INextBotEventResponder + 79))(
        &v14,
        v4,
        this->m_actor,
        activity,
        v5,
        v6,
        *&_result.m_type,
        _result.m_action,
        _result.m_reason,
        _result.m_priority);
      _result = v14;
      if ( v14.m_type != ActionResultType::CONTINUE )
        break;
      v4 = v4->m_buriedUnderMe;
    }
    while ( v4 != 0 );
    Action<CDOTA_BaseNPC>::StorePendingEventResult(this, v4, "OnAnimationActivityComplete", &_result);
    for ( i = (*(this->_vptr_INextBotEventResponder + 3))(
                this,
                v9,
                v7,
                v8,
                v10,
                v11,
                *&_result.m_type,
                _result.m_action,
                _result.m_reason,
                _result.m_priority); i != 0; i = (*(this->_vptr_INextBotEventResponder + 4))(this, i) )
      (*(*i + 104LL))(i, activity);
  }
}


// Action<CSimpleBot>::OnAnimationActivityComplete  (line 836, @0x0000000002f25b40, libserver.so)  // inlines: Color, DebugReceivedEvent, EventDesiredResult, GetBool, GetInt, GetName, IActionResult, IsDebugFilterMatch, IsDebugging, OnAnimationActivityComplete, SetColor, curtime
// calls: CUtlSymbol::String, INextBot::DebugConColorMsg, Action<CSimpleBot>::StorePendingEventResult, NextBotManager::IsDebugFilterMatch, __stack_chk_fail
// strings: "%3.2f: %s:%s: %s received EVENT %s\n", "OnAnimationActivityComplete"
void __fastcall Action<CSimpleBot>::OnAnimationActivityComplete(Action<CSimpleBot> *const this, Activity activity)
{
  Action<CSimpleBot> *v4; // r15
  CSimpleBot *m_actor; // rdx
  INextBot *v6; // r14
  const char *v7; // r14
  __int64 v8; // rax
  const char *v9; // r9
  const char *v10; // r8
  CGlobalVars *v11; // rdx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  double m_flCurrentTime; // xmm0_8
  CSimpleBot *v14; // rax
  __int64 i; // r13
  bool IsDebugFilterMatch; // al
  CGlobalVars *v17; // [rsp+10h] [rbp-A0h]
  const char *v18; // [rsp+18h] [rbp-98h]
  const char *v19; // [rsp+28h] [rbp-88h]
  CSimpleBot *v20; // [rsp+28h] [rbp-88h]
  EventDesiredResult<CSimpleBot> _result; // [rsp+30h] [rbp-80h] BYREF
  EventDesiredResult<CSimpleBot> v22; // [rsp+50h] [rbp-60h] BYREF
  Color v23; // [rsp+70h] [rbp-40h] BYREF
  unsigned __int64 v24; // [rsp+78h] [rbp-38h]

  v24 = __readfsqword(0x28u);
  if ( this->m_isStarted )
  {
    _result.m_type = ActionResultType::CONTINUE;
    _result.m_action = 0;
    v4 = this;
    _result.m_reason = 0;
    _result.m_priority = EventResultPriorityType::RESULT_TRY;
    do
    {
      m_actor = this->m_actor;
      if ( m_actor != 0 )
      {
        if ( SLOBYTE(g_NextBotManager.m_debugType) < 0
          && ((v6 = &m_actor->INextBot, g_NextBotManager.m_debugFilterList.m_Size == 0)
           || (v20 = this->m_actor,
               IsDebugFilterMatch = NextBotManager::IsDebugFilterMatch(&g_NextBotManager, &m_actor->INextBot),
               m_actor = v20,
               IsDebugFilterMatch))
          && (*(m_actor->_vptr_INextBotEventResponder + 96))(v6, 128) != 0
          || NextBotDebugHistory.m_pParent->m_Value.m_nValue != 0 )
        {
          v7 = (*(v4->_vptr_INextBotEventResponder + 64))(v4);
          v19 = CUtlSymbol::String(&this->m_behavior->m_name);
          v8 = (*(this->m_actor->_vptr_INextBotEventResponder + 97))(&this->m_actor->INextBot);
          v9 = v19;
          v10 = v8;
          v11 = gpGlobals;
          if ( gpGlobals != 0 )
          {
            if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
            {
              m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
              if ( m_pfnWarningFunc != 0 )
              {
                v17 = gpGlobals;
                v18 = v10;
                m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
                v11 = v17;
                v10 = v18;
                v9 = v19;
              }
            }
            m_flCurrentTime = v11->m_flCurrentTime;
          }
          else
          {
            m_flCurrentTime = 0.0;
          }
          v14 = this->m_actor;
          memset(&v23, 100, 3);
          v23._color[3] = -1;
          INextBot::DebugConColorMsg(
            &v14->INextBot,
            NextBotDebugType::NEXTBOT_EVENTS,
            &v23,
            "%3.2f: %s:%s: %s received EVENT %s\n",
            m_flCurrentTime,
            v10,
            v9,
            v7,
            "OnAnimationActivityComplete");
        }
        m_actor = this->m_actor;
      }
      (*(v4->_vptr_INextBotEventResponder + 79))(&v22, v4, m_actor, activity);
      _result = v22;
      if ( v22.m_type != ActionResultType::CONTINUE )
        break;
      v4 = v4->m_buriedUnderMe;
    }
    while ( v4 != 0 );
    Action<CSimpleBot>::StorePendingEventResult(this, v4, "OnAnimationActivityComplete", &_result);
    for ( i = (*(this->_vptr_INextBotEventResponder + 3))(this);
          i != 0;
          i = (*(this->_vptr_INextBotEventResponder + 4))(this, i) )
    {
      (*(*i + 104LL))(i, activity);
    }
  }
}


// Action<CDOTA_BaseNPC>::OnAnimationActivityInterrupted  (line 837, @0x00000000028875c0, libserver.so)  // inlines: EventDesiredResult, IActionResult, OnAnimationActivityInterrupted
// calls: Action<CDOTA_BaseNPC>::DebugReceivedEvent, Action<CDOTA_BaseNPC>::StorePendingEventResult
// strings: "OnAnimationActivityInterrupted"
void __fastcall Action<CDOTA_BaseNPC>::OnAnimationActivityInterrupted(
        Action<CDOTA_BaseNPC> *const this,
        Activity activity)
{
  Action<CDOTA_BaseNPC> *v4; // rbx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rsi
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 i; // rbx
  EventDesiredResult<CDOTA_BaseNPC> _result; // [rsp+0h] [rbp-60h] BYREF
  EventDesiredResult<CDOTA_BaseNPC> v14; // [rsp+20h] [rbp-40h] BYREF

  if ( this->m_isStarted )
  {
    _result.m_type = ActionResultType::CONTINUE;
    v4 = this;
    _result.m_action = 0;
    _result.m_reason = 0;
    _result.m_priority = EventResultPriorityType::RESULT_TRY;
    do
    {
      Action<CDOTA_BaseNPC>::DebugReceivedEvent(this, v4, "OnAnimationActivityInterrupted");
      (*(v4->_vptr_INextBotEventResponder + 80))(
        &v14,
        v4,
        this->m_actor,
        activity,
        v5,
        v6,
        *&_result.m_type,
        _result.m_action,
        _result.m_reason,
        _result.m_priority);
      _result = v14;
      if ( v14.m_type != ActionResultType::CONTINUE )
        break;
      v4 = v4->m_buriedUnderMe;
    }
    while ( v4 != 0 );
    Action<CDOTA_BaseNPC>::StorePendingEventResult(this, v4, "OnAnimationActivityInterrupted", &_result);
    for ( i = (*(this->_vptr_INextBotEventResponder + 3))(
                this,
                v9,
                v7,
                v8,
                v10,
                v11,
                *&_result.m_type,
                _result.m_action,
                _result.m_reason,
                _result.m_priority); i != 0; i = (*(this->_vptr_INextBotEventResponder + 4))(this, i) )
      (*(*i + 112LL))(i, activity);
  }
}


// Action<CSimpleBot>::OnAnimationActivityInterrupted  (line 837, @0x0000000002f25e00, libserver.so)  // inlines: Color, DebugReceivedEvent, EventDesiredResult, GetBool, GetInt, GetName, IActionResult, IsDebugFilterMatch, IsDebugging, OnAnimationActivityInterrupted, SetColor, curtime
// calls: CUtlSymbol::String, INextBot::DebugConColorMsg, Action<CSimpleBot>::StorePendingEventResult, NextBotManager::IsDebugFilterMatch, __stack_chk_fail
// strings: "%3.2f: %s:%s: %s received EVENT %s\n", "OnAnimationActivityInterrupted"
void __fastcall Action<CSimpleBot>::OnAnimationActivityInterrupted(Action<CSimpleBot> *const this, Activity activity)
{
  Action<CSimpleBot> *v4; // r15
  CSimpleBot *m_actor; // rdx
  INextBot *v6; // r14
  const char *v7; // r14
  __int64 v8; // rax
  const char *v9; // r9
  const char *v10; // r8
  CGlobalVars *v11; // rdx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  double m_flCurrentTime; // xmm0_8
  CSimpleBot *v14; // rax
  __int64 i; // r13
  bool IsDebugFilterMatch; // al
  CGlobalVars *v17; // [rsp+10h] [rbp-A0h]
  const char *v18; // [rsp+18h] [rbp-98h]
  const char *v19; // [rsp+28h] [rbp-88h]
  CSimpleBot *v20; // [rsp+28h] [rbp-88h]
  EventDesiredResult<CSimpleBot> _result; // [rsp+30h] [rbp-80h] BYREF
  EventDesiredResult<CSimpleBot> v22; // [rsp+50h] [rbp-60h] BYREF
  Color v23; // [rsp+70h] [rbp-40h] BYREF
  unsigned __int64 v24; // [rsp+78h] [rbp-38h]

  v24 = __readfsqword(0x28u);
  if ( this->m_isStarted )
  {
    _result.m_type = ActionResultType::CONTINUE;
    _result.m_action = 0;
    v4 = this;
    _result.m_reason = 0;
    _result.m_priority = EventResultPriorityType::RESULT_TRY;
    do
    {
      m_actor = this->m_actor;
      if ( m_actor != 0 )
      {
        if ( SLOBYTE(g_NextBotManager.m_debugType) < 0
          && ((v6 = &m_actor->INextBot, g_NextBotManager.m_debugFilterList.m_Size == 0)
           || (v20 = this->m_actor,
               IsDebugFilterMatch = NextBotManager::IsDebugFilterMatch(&g_NextBotManager, &m_actor->INextBot),
               m_actor = v20,
               IsDebugFilterMatch))
          && (*(m_actor->_vptr_INextBotEventResponder + 96))(v6, 128) != 0
          || NextBotDebugHistory.m_pParent->m_Value.m_nValue != 0 )
        {
          v7 = (*(v4->_vptr_INextBotEventResponder + 64))(v4);
          v19 = CUtlSymbol::String(&this->m_behavior->m_name);
          v8 = (*(this->m_actor->_vptr_INextBotEventResponder + 97))(&this->m_actor->INextBot);
          v9 = v19;
          v10 = v8;
          v11 = gpGlobals;
          if ( gpGlobals != 0 )
          {
            if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
            {
              m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
              if ( m_pfnWarningFunc != 0 )
              {
                v17 = gpGlobals;
                v18 = v10;
                m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
                v11 = v17;
                v10 = v18;
                v9 = v19;
              }
            }
            m_flCurrentTime = v11->m_flCurrentTime;
          }
          else
          {
            m_flCurrentTime = 0.0;
          }
          v14 = this->m_actor;
          memset(&v23, 100, 3);
          v23._color[3] = -1;
          INextBot::DebugConColorMsg(
            &v14->INextBot,
            NextBotDebugType::NEXTBOT_EVENTS,
            &v23,
            "%3.2f: %s:%s: %s received EVENT %s\n",
            m_flCurrentTime,
            v10,
            v9,
            v7,
            "OnAnimationActivityInterrupted");
        }
        m_actor = this->m_actor;
      }
      (*(v4->_vptr_INextBotEventResponder + 80))(&v22, v4, m_actor, activity);
      _result = v22;
      if ( v22.m_type != ActionResultType::CONTINUE )
        break;
      v4 = v4->m_buriedUnderMe;
    }
    while ( v4 != 0 );
    Action<CSimpleBot>::StorePendingEventResult(this, v4, "OnAnimationActivityInterrupted", &_result);
    for ( i = (*(this->_vptr_INextBotEventResponder + 3))(this);
          i != 0;
          i = (*(this->_vptr_INextBotEventResponder + 4))(this, i) )
    {
      (*(*i + 112LL))(i, activity);
    }
  }
}


// Action<CDOTA_BaseNPC>::OnAnimationEvent  (line 838, @0x00000000028876c0, libserver.so)  // inlines: EventDesiredResult, IActionResult, OnAnimationEvent
// calls: Action<CDOTA_BaseNPC>::DebugReceivedEvent, Action<CDOTA_BaseNPC>::StorePendingEventResult
// strings: "OnAnimationEvent"
void __fastcall Action<CDOTA_BaseNPC>::OnAnimationEvent(Action<CDOTA_BaseNPC> *const this, animevent_t *event)
{
  Action<CDOTA_BaseNPC> *v4; // rbx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rsi
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 i; // rbx
  EventDesiredResult<CDOTA_BaseNPC> _result; // [rsp+0h] [rbp-60h] BYREF
  EventDesiredResult<CDOTA_BaseNPC> v14; // [rsp+20h] [rbp-40h] BYREF

  if ( this->m_isStarted )
  {
    _result.m_type = ActionResultType::CONTINUE;
    v4 = this;
    _result.m_action = 0;
    _result.m_reason = 0;
    _result.m_priority = EventResultPriorityType::RESULT_TRY;
    do
    {
      Action<CDOTA_BaseNPC>::DebugReceivedEvent(this, v4, "OnAnimationEvent");
      (*(v4->_vptr_INextBotEventResponder + 81))(
        &v14,
        v4,
        this->m_actor,
        event,
        v5,
        v6,
        *&_result.m_type,
        _result.m_action,
        _result.m_reason,
        _result.m_priority);
      _result = v14;
      if ( v14.m_type != ActionResultType::CONTINUE )
        break;
      v4 = v4->m_buriedUnderMe;
    }
    while ( v4 != 0 );
    Action<CDOTA_BaseNPC>::StorePendingEventResult(this, v4, "OnAnimationEvent", &_result);
    for ( i = (*(this->_vptr_INextBotEventResponder + 3))(
                this,
                v9,
                v7,
                v8,
                v10,
                v11,
                *&_result.m_type,
                _result.m_action,
                _result.m_reason,
                _result.m_priority); i != 0; i = (*(this->_vptr_INextBotEventResponder + 4))(this, i) )
      (*(*i + 120LL))(i, event);
  }
}


// Action<CSimpleBot>::OnAnimationEvent  (line 838, @0x0000000002f260c0, libserver.so)  // inlines: Color, DebugReceivedEvent, EventDesiredResult, GetBool, GetInt, GetName, IActionResult, IsDebugFilterMatch, IsDebugging, OnAnimationEvent, SetColor, curtime
// calls: CUtlSymbol::String, INextBot::DebugConColorMsg, Action<CSimpleBot>::StorePendingEventResult, NextBotManager::IsDebugFilterMatch, __stack_chk_fail
// strings: "%3.2f: %s:%s: %s received EVENT %s\n", "OnAnimationEvent"
void __fastcall Action<CSimpleBot>::OnAnimationEvent(Action<CSimpleBot> *const this, animevent_t *event)
{
  Action<CSimpleBot> *v4; // r15
  CSimpleBot *m_actor; // rdx
  INextBot *v6; // r14
  const char *v7; // r14
  __int64 v8; // rax
  const char *v9; // r9
  const char *v10; // r8
  CGlobalVars *v11; // rdx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  double m_flCurrentTime; // xmm0_8
  CSimpleBot *v14; // rax
  __int64 i; // r13
  bool IsDebugFilterMatch; // al
  CGlobalVars *v17; // [rsp+10h] [rbp-A0h]
  const char *v18; // [rsp+18h] [rbp-98h]
  const char *v19; // [rsp+28h] [rbp-88h]
  CSimpleBot *v20; // [rsp+28h] [rbp-88h]
  EventDesiredResult<CSimpleBot> _result; // [rsp+30h] [rbp-80h] BYREF
  EventDesiredResult<CSimpleBot> v22; // [rsp+50h] [rbp-60h] BYREF
  Color v23; // [rsp+70h] [rbp-40h] BYREF
  unsigned __int64 v24; // [rsp+78h] [rbp-38h]

  v24 = __readfsqword(0x28u);
  if ( this->m_isStarted )
  {
    _result.m_type = ActionResultType::CONTINUE;
    _result.m_action = 0;
    v4 = this;
    _result.m_reason = 0;
    _result.m_priority = EventResultPriorityType::RESULT_TRY;
    do
    {
      m_actor = this->m_actor;
      if ( m_actor != 0 )
      {
        if ( SLOBYTE(g_NextBotManager.m_debugType) < 0
          && ((v6 = &m_actor->INextBot, g_NextBotManager.m_debugFilterList.m_Size == 0)
           || (v20 = this->m_actor,
               IsDebugFilterMatch = NextBotManager::IsDebugFilterMatch(&g_NextBotManager, &m_actor->INextBot),
               m_actor = v20,
               IsDebugFilterMatch))
          && (*(m_actor->_vptr_INextBotEventResponder + 96))(v6, 128) != 0
          || NextBotDebugHistory.m_pParent->m_Value.m_nValue != 0 )
        {
          v7 = (*(v4->_vptr_INextBotEventResponder + 64))(v4);
          v19 = CUtlSymbol::String(&this->m_behavior->m_name);
          v8 = (*(this->m_actor->_vptr_INextBotEventResponder + 97))(&this->m_actor->INextBot);
          v9 = v19;
          v10 = v8;
          v11 = gpGlobals;
          if ( gpGlobals != 0 )
          {
            if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
            {
              m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
              if ( m_pfnWarningFunc != 0 )
              {
                v17 = gpGlobals;
                v18 = v10;
                m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
                v11 = v17;
                v10 = v18;
                v9 = v19;
              }
            }
            m_flCurrentTime = v11->m_flCurrentTime;
          }
          else
          {
            m_flCurrentTime = 0.0;
          }
          v14 = this->m_actor;
          memset(&v23, 100, 3);
          v23._color[3] = -1;
          INextBot::DebugConColorMsg(
            &v14->INextBot,
            NextBotDebugType::NEXTBOT_EVENTS,
            &v23,
            "%3.2f: %s:%s: %s received EVENT %s\n",
            m_flCurrentTime,
            v10,
            v9,
            v7,
            "OnAnimationEvent");
        }
        m_actor = this->m_actor;
      }
      (*(v4->_vptr_INextBotEventResponder + 81))(&v22, v4, m_actor, event);
      _result = v22;
      if ( v22.m_type != ActionResultType::CONTINUE )
        break;
      v4 = v4->m_buriedUnderMe;
    }
    while ( v4 != 0 );
    Action<CSimpleBot>::StorePendingEventResult(this, v4, "OnAnimationEvent", &_result);
    for ( i = (*(this->_vptr_INextBotEventResponder + 3))(this);
          i != 0;
          i = (*(this->_vptr_INextBotEventResponder + 4))(this, i) )
    {
      (*(*i + 120LL))(i, event);
    }
  }
}


// Action<CDOTA_BaseNPC>::OnIgnite  (line 839, @0x00000000028877c0, libserver.so)  // inlines: Color, DebugReceivedEvent, EventDesiredResult, GetBool, GetInt, GetName, IActionResult, IsDebugging, OnIgnite, SetColor, curtime
// calls: CUtlSymbol::String, INextBot::DebugConColorMsg, Action<CDOTA_BaseNPC>::StorePendingEventResult, NextBotManager::IsDebugFilterMatch, __stack_chk_fail
// strings: "%3.2f: %s:%s: %s received EVENT %s\n"
void __fastcall Action<CDOTA_BaseNPC>::OnIgnite(Action<CDOTA_BaseNPC> *const this)
{
  Action<CDOTA_BaseNPC> *v2; // rbx
  CDOTA_BaseNPC *m_actor; // rdx
  const char *v4; // r15
  __int64 v5; // rax
  const char *v6; // r9
  const char *v7; // r8
  CGlobalVars *v8; // rdx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  double m_flCurrentTime; // xmm0_8
  CDOTA_BaseNPC *v11; // rax
  __int64 i; // rbx
  INextBot *v13; // r15
  CGlobalVars *v14; // [rsp+18h] [rbp-98h]
  const char *v15; // [rsp+20h] [rbp-90h]
  const char *v16; // [rsp+28h] [rbp-88h]
  CDOTA_BaseNPC *v17; // [rsp+28h] [rbp-88h]
  EventDesiredResult<CDOTA_BaseNPC> _result; // [rsp+30h] [rbp-80h] BYREF
  EventDesiredResult<CDOTA_BaseNPC> v19; // [rsp+50h] [rbp-60h] BYREF
  Color color; // [rsp+70h] [rbp-40h] BYREF
  unsigned __int64 v21; // [rsp+78h] [rbp-38h]

  v21 = __readfsqword(0x28u);
  if ( this->m_isStarted )
  {
    _result.m_type = ActionResultType::CONTINUE;
    v2 = this;
    _result.m_action = 0;
    _result.m_reason = 0;
    _result.m_priority = EventResultPriorityType::RESULT_TRY;
    do
    {
      m_actor = this->m_actor;
      if ( m_actor != 0 )
      {
        if ( SLOBYTE(g_NextBotManager.m_debugType) < 0
          && (v13 = &m_actor->INextBot,
              v17 = this->m_actor,
              NextBotManager::IsDebugFilterMatch(&g_NextBotManager, &m_actor->INextBot))
          && (*(v17->_vptr_INextBotEventResponder + 96))(v13, 128) != 0
          || NextBotDebugHistory.m_pParent->m_Value.m_nValue != 0 )
        {
          v4 = (*(v2->_vptr_INextBotEventResponder + 64))(v2);
          v16 = CUtlSymbol::String(&this->m_behavior->m_name);
          v5 = (*(this->m_actor->_vptr_INextBotEventResponder + 97))(&this->m_actor->INextBot);
          v6 = v16;
          v7 = v5;
          v8 = gpGlobals;
          if ( gpGlobals != 0 )
          {
            if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
            {
              m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
              if ( m_pfnWarningFunc != 0 )
              {
                v14 = gpGlobals;
                v15 = v7;
                m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
                v8 = v14;
                v7 = v15;
                v6 = v16;
              }
            }
            m_flCurrentTime = v8->m_flCurrentTime;
          }
          else
          {
            m_flCurrentTime = 0.0;
          }
          v11 = this->m_actor;
          memset(&color, 100, 3);
          color._color[3] = -1;
          INextBot::DebugConColorMsg(
            &v11->INextBot,
            NextBotDebugType::NEXTBOT_EVENTS,
            &color,
            "%3.2f: %s:%s: %s received EVENT %s\n",
            m_flCurrentTime,
            v7,
            v6,
            v4,
            "OnIgnite");
        }
        m_actor = this->m_actor;
      }
      (*(v2->_vptr_INextBotEventResponder + 82))(&v19, v2, m_actor);
      _result = v19;
      if ( v19.m_type != ActionResultType::CONTINUE )
        break;
      v2 = v2->m_buriedUnderMe;
    }
    while ( v2 != 0 );
    Action<CDOTA_BaseNPC>::StorePendingEventResult(this, v2, "OnIgnite", &_result);
    for ( i = (*(this->_vptr_INextBotEventResponder + 3))(this);
          i != 0;
          i = (*(this->_vptr_INextBotEventResponder + 4))(this, i) )
    {
      (*(*i + 128LL))(i);
    }
  }
}


// Action<CSimpleBot>::OnIgnite  (line 839, @0x0000000002f26380, libserver.so)  // inlines: Color, DebugReceivedEvent, EventDesiredResult, GetBool, GetInt, GetName, IActionResult, IsDebugFilterMatch, IsDebugging, OnIgnite, SetColor, curtime
// calls: CUtlSymbol::String, INextBot::DebugConColorMsg, Action<CSimpleBot>::StorePendingEventResult, NextBotManager::IsDebugFilterMatch, __stack_chk_fail
// strings: "%3.2f: %s:%s: %s received EVENT %s\n"
void __fastcall Action<CSimpleBot>::OnIgnite(Action<CSimpleBot> *const this)
{
  Action<CSimpleBot> *v2; // rbx
  CSimpleBot *m_actor; // rdx
  INextBot *v4; // r15
  const char *v5; // r15
  const char *v6; // r14
  const char *v7; // r8
  CGlobalVars *v8; // rdx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  double m_flCurrentTime; // xmm0_8
  CSimpleBot *v11; // rax
  __int64 i; // rbx
  bool IsDebugFilterMatch; // al
  CGlobalVars *v14; // [rsp+18h] [rbp-98h]
  const char *v15; // [rsp+20h] [rbp-90h]
  CSimpleBot *v16; // [rsp+20h] [rbp-90h]
  EventDesiredResult<CSimpleBot> _result; // [rsp+30h] [rbp-80h] BYREF
  EventDesiredResult<CSimpleBot> v18; // [rsp+50h] [rbp-60h] BYREF
  Color v19; // [rsp+70h] [rbp-40h] BYREF
  unsigned __int64 v20; // [rsp+78h] [rbp-38h]

  v20 = __readfsqword(0x28u);
  if ( this->m_isStarted )
  {
    _result.m_type = ActionResultType::CONTINUE;
    v2 = this;
    _result.m_action = 0;
    _result.m_reason = 0;
    _result.m_priority = EventResultPriorityType::RESULT_TRY;
    do
    {
      m_actor = this->m_actor;
      if ( m_actor != 0 )
      {
        if ( SLOBYTE(g_NextBotManager.m_debugType) < 0
          && ((v4 = &m_actor->INextBot, g_NextBotManager.m_debugFilterList.m_Size == 0)
           || (v16 = this->m_actor,
               IsDebugFilterMatch = NextBotManager::IsDebugFilterMatch(&g_NextBotManager, &m_actor->INextBot),
               m_actor = v16,
               IsDebugFilterMatch))
          && (*(m_actor->_vptr_INextBotEventResponder + 96))(v4, 128) != 0
          || NextBotDebugHistory.m_pParent->m_Value.m_nValue != 0 )
        {
          v5 = (*(v2->_vptr_INextBotEventResponder + 64))(v2);
          v6 = CUtlSymbol::String(&this->m_behavior->m_name);
          v7 = (*(this->m_actor->_vptr_INextBotEventResponder + 97))(&this->m_actor->INextBot);
          v8 = gpGlobals;
          if ( gpGlobals != 0 )
          {
            if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
            {
              m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
              if ( m_pfnWarningFunc != 0 )
              {
                v14 = gpGlobals;
                v15 = v7;
                m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
                v8 = v14;
                v7 = v15;
              }
            }
            m_flCurrentTime = v8->m_flCurrentTime;
          }
          else
          {
            m_flCurrentTime = 0.0;
          }
          v11 = this->m_actor;
          memset(&v19, 100, 3);
          v19._color[3] = -1;
          INextBot::DebugConColorMsg(
            &v11->INextBot,
            NextBotDebugType::NEXTBOT_EVENTS,
            &v19,
            "%3.2f: %s:%s: %s received EVENT %s\n",
            m_flCurrentTime,
            v7,
            v6,
            v5,
            "OnIgnite");
        }
        m_actor = this->m_actor;
      }
      (*(v2->_vptr_INextBotEventResponder + 82))(&v18, v2, m_actor);
      _result = v18;
      if ( v18.m_type != ActionResultType::CONTINUE )
        break;
      v2 = v2->m_buriedUnderMe;
    }
    while ( v2 != 0 );
    Action<CSimpleBot>::StorePendingEventResult(this, v2, "OnIgnite", &_result);
    for ( i = (*(this->_vptr_INextBotEventResponder + 3))(this);
          i != 0;
          i = (*(this->_vptr_INextBotEventResponder + 4))(this, i) )
    {
      (*(*i + 128LL))(i);
    }
  }
}


// Action<CDOTA_BaseNPC>::OnInjured  (line 840, @0x0000000002887a70, libserver.so)  // inlines: EventDesiredResult, IActionResult, OnInjured
// calls: Action<CDOTA_BaseNPC>::DebugReceivedEvent, Action<CDOTA_BaseNPC>::StorePendingEventResult
// strings: "OnInjured"
void __fastcall Action<CDOTA_BaseNPC>::OnInjured(Action<CDOTA_BaseNPC> *const this, const CTakeDamageInfo *const info)
{
  Action<CDOTA_BaseNPC> *v4; // rbx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rsi
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 i; // rbx
  EventDesiredResult<CDOTA_BaseNPC> _result; // [rsp+0h] [rbp-60h] BYREF
  EventDesiredResult<CDOTA_BaseNPC> v14; // [rsp+20h] [rbp-40h] BYREF

  if ( this->m_isStarted )
  {
    _result.m_type = ActionResultType::CONTINUE;
    v4 = this;
    _result.m_action = 0;
    _result.m_reason = 0;
    _result.m_priority = EventResultPriorityType::RESULT_TRY;
    do
    {
      Action<CDOTA_BaseNPC>::DebugReceivedEvent(this, v4, "OnInjured");
      (*(v4->_vptr_INextBotEventResponder + 83))(
        &v14,
        v4,
        this->m_actor,
        info,
        v5,
        v6,
        *&_result.m_type,
        _result.m_action,
        _result.m_reason,
        _result.m_priority);
      _result = v14;
      if ( v14.m_type != ActionResultType::CONTINUE )
        break;
      v4 = v4->m_buriedUnderMe;
    }
    while ( v4 != 0 );
    Action<CDOTA_BaseNPC>::StorePendingEventResult(this, v4, "OnInjured", &_result);
    for ( i = (*(this->_vptr_INextBotEventResponder + 3))(
                this,
                v9,
                v7,
                v8,
                v10,
                v11,
                *&_result.m_type,
                _result.m_action,
                _result.m_reason,
                _result.m_priority); i != 0; i = (*(this->_vptr_INextBotEventResponder + 4))(this, i) )
      (*(*i + 136LL))(i, info);
  }
}


// Action<CSimpleBot>::OnInjured  (line 840, @0x0000000002f26620, libserver.so)  // inlines: Color, DebugReceivedEvent, EventDesiredResult, GetBool, GetInt, GetName, IActionResult, IsDebugFilterMatch, IsDebugging, OnInjured, SetColor, curtime
// calls: CUtlSymbol::String, INextBot::DebugConColorMsg, Action<CSimpleBot>::StorePendingEventResult, NextBotManager::IsDebugFilterMatch, __stack_chk_fail
// strings: "%3.2f: %s:%s: %s received EVENT %s\n", "OnInjured"
void __fastcall Action<CSimpleBot>::OnInjured(Action<CSimpleBot> *const this, const CTakeDamageInfo *const info)
{
  Action<CSimpleBot> *v4; // r15
  CSimpleBot *m_actor; // rdx
  INextBot *v6; // r14
  const char *v7; // r14
  __int64 v8; // rax
  const char *v9; // r9
  const char *v10; // r8
  CGlobalVars *v11; // rdx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  double m_flCurrentTime; // xmm0_8
  CSimpleBot *v14; // rax
  __int64 i; // r13
  bool IsDebugFilterMatch; // al
  CGlobalVars *v17; // [rsp+10h] [rbp-A0h]
  const char *v18; // [rsp+18h] [rbp-98h]
  const char *v19; // [rsp+28h] [rbp-88h]
  CSimpleBot *v20; // [rsp+28h] [rbp-88h]
  EventDesiredResult<CSimpleBot> _result; // [rsp+30h] [rbp-80h] BYREF
  EventDesiredResult<CSimpleBot> v22; // [rsp+50h] [rbp-60h] BYREF
  Color v23; // [rsp+70h] [rbp-40h] BYREF
  unsigned __int64 v24; // [rsp+78h] [rbp-38h]

  v24 = __readfsqword(0x28u);
  if ( this->m_isStarted )
  {
    _result.m_type = ActionResultType::CONTINUE;
    _result.m_action = 0;
    v4 = this;
    _result.m_reason = 0;
    _result.m_priority = EventResultPriorityType::RESULT_TRY;
    do
    {
      m_actor = this->m_actor;
      if ( m_actor != 0 )
      {
        if ( SLOBYTE(g_NextBotManager.m_debugType) < 0
          && ((v6 = &m_actor->INextBot, g_NextBotManager.m_debugFilterList.m_Size == 0)
           || (v20 = this->m_actor,
               IsDebugFilterMatch = NextBotManager::IsDebugFilterMatch(&g_NextBotManager, &m_actor->INextBot),
               m_actor = v20,
               IsDebugFilterMatch))
          && (*(m_actor->_vptr_INextBotEventResponder + 96))(v6, 128) != 0
          || NextBotDebugHistory.m_pParent->m_Value.m_nValue != 0 )
        {
          v7 = (*(v4->_vptr_INextBotEventResponder + 64))(v4);
          v19 = CUtlSymbol::String(&this->m_behavior->m_name);
          v8 = (*(this->m_actor->_vptr_INextBotEventResponder + 97))(&this->m_actor->INextBot);
          v9 = v19;
          v10 = v8;
          v11 = gpGlobals;
          if ( gpGlobals != 0 )
          {
            if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
            {
              m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
              if ( m_pfnWarningFunc != 0 )
              {
                v17 = gpGlobals;
                v18 = v10;
                m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
                v11 = v17;
                v10 = v18;
                v9 = v19;
              }
            }
            m_flCurrentTime = v11->m_flCurrentTime;
          }
          else
          {
            m_flCurrentTime = 0.0;
          }
          v14 = this->m_actor;
          memset(&v23, 100, 3);
          v23._color[3] = -1;
          INextBot::DebugConColorMsg(
            &v14->INextBot,
            NextBotDebugType::NEXTBOT_EVENTS,
            &v23,
            "%3.2f: %s:%s: %s received EVENT %s\n",
            m_flCurrentTime,
            v10,
            v9,
            v7,
            "OnInjured");
        }
        m_actor = this->m_actor;
      }
      (*(v4->_vptr_INextBotEventResponder + 83))(&v22, v4, m_actor, info);
      _result = v22;
      if ( v22.m_type != ActionResultType::CONTINUE )
        break;
      v4 = v4->m_buriedUnderMe;
    }
    while ( v4 != 0 );
    Action<CSimpleBot>::StorePendingEventResult(this, v4, "OnInjured", &_result);
    for ( i = (*(this->_vptr_INextBotEventResponder + 3))(this);
          i != 0;
          i = (*(this->_vptr_INextBotEventResponder + 4))(this, i) )
    {
      (*(*i + 136LL))(i, info);
    }
  }
}


// Action<CDOTA_BaseNPC>::OnKilled  (line 841, @0x0000000002887b70, libserver.so)  // inlines: EventDesiredResult, IActionResult, OnKilled
// calls: Action<CDOTA_BaseNPC>::DebugReceivedEvent, Action<CDOTA_BaseNPC>::StorePendingEventResult
void __fastcall Action<CDOTA_BaseNPC>::OnKilled(Action<CDOTA_BaseNPC> *const this, const CTakeDamageInfo *const info)
{
  Action<CDOTA_BaseNPC> *v4; // rbx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rsi
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 i; // rbx
  EventDesiredResult<CDOTA_BaseNPC> _result; // [rsp+0h] [rbp-60h] BYREF
  EventDesiredResult<CDOTA_BaseNPC> v14; // [rsp+20h] [rbp-40h] BYREF

  if ( this->m_isStarted )
  {
    _result.m_type = ActionResultType::CONTINUE;
    v4 = this;
    _result.m_action = 0;
    _result.m_reason = 0;
    _result.m_priority = EventResultPriorityType::RESULT_TRY;
    do
    {
      Action<CDOTA_BaseNPC>::DebugReceivedEvent(this, v4, "OnKilled");
      (*(v4->_vptr_INextBotEventResponder + 84))(
        &v14,
        v4,
        this->m_actor,
        info,
        v5,
        v6,
        *&_result.m_type,
        _result.m_action,
        _result.m_reason,
        _result.m_priority);
      _result = v14;
      if ( v14.m_type != ActionResultType::CONTINUE )
        break;
      v4 = v4->m_buriedUnderMe;
    }
    while ( v4 != 0 );
    Action<CDOTA_BaseNPC>::StorePendingEventResult(this, v4, "OnKilled", &_result);
    for ( i = (*(this->_vptr_INextBotEventResponder + 3))(
                this,
                v9,
                v7,
                v8,
                v10,
                v11,
                *&_result.m_type,
                _result.m_action,
                _result.m_reason,
                _result.m_priority); i != 0; i = (*(this->_vptr_INextBotEventResponder + 4))(this, i) )
      (*(*i + 144LL))(i, info);
  }
}


// Action<CSimpleBot>::OnKilled  (line 841, @0x0000000002f268e0, libserver.so)  // inlines: Color, DebugReceivedEvent, EventDesiredResult, GetBool, GetInt, GetName, IActionResult, IsDebugFilterMatch, IsDebugging, OnKilled, SetColor, curtime
// calls: CUtlSymbol::String, INextBot::DebugConColorMsg, Action<CSimpleBot>::StorePendingEventResult, NextBotManager::IsDebugFilterMatch, __stack_chk_fail
// strings: "%3.2f: %s:%s: %s received EVENT %s\n"
void __fastcall Action<CSimpleBot>::OnKilled(Action<CSimpleBot> *const this, const CTakeDamageInfo *const info)
{
  Action<CSimpleBot> *v4; // r15
  CSimpleBot *m_actor; // rdx
  INextBot *v6; // r14
  const char *v7; // r14
  __int64 v8; // rax
  const char *v9; // r9
  const char *v10; // r8
  CGlobalVars *v11; // rdx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  double m_flCurrentTime; // xmm0_8
  CSimpleBot *v14; // rax
  __int64 i; // r13
  bool IsDebugFilterMatch; // al
  CGlobalVars *v17; // [rsp+10h] [rbp-A0h]
  const char *v18; // [rsp+18h] [rbp-98h]
  const char *v19; // [rsp+28h] [rbp-88h]
  CSimpleBot *v20; // [rsp+28h] [rbp-88h]
  EventDesiredResult<CSimpleBot> _result; // [rsp+30h] [rbp-80h] BYREF
  EventDesiredResult<CSimpleBot> v22; // [rsp+50h] [rbp-60h] BYREF
  Color v23; // [rsp+70h] [rbp-40h] BYREF
  unsigned __int64 v24; // [rsp+78h] [rbp-38h]

  v24 = __readfsqword(0x28u);
  if ( this->m_isStarted )
  {
    _result.m_type = ActionResultType::CONTINUE;
    _result.m_action = 0;
    v4 = this;
    _result.m_reason = 0;
    _result.m_priority = EventResultPriorityType::RESULT_TRY;
    do
    {
      m_actor = this->m_actor;
      if ( m_actor != 0 )
      {
        if ( SLOBYTE(g_NextBotManager.m_debugType) < 0
          && ((v6 = &m_actor->INextBot, g_NextBotManager.m_debugFilterList.m_Size == 0)
           || (v20 = this->m_actor,
               IsDebugFilterMatch = NextBotManager::IsDebugFilterMatch(&g_NextBotManager, &m_actor->INextBot),
               m_actor = v20,
               IsDebugFilterMatch))
          && (*(m_actor->_vptr_INextBotEventResponder + 96))(v6, 128) != 0
          || NextBotDebugHistory.m_pParent->m_Value.m_nValue != 0 )
        {
          v7 = (*(v4->_vptr_INextBotEventResponder + 64))(v4);
          v19 = CUtlSymbol::String(&this->m_behavior->m_name);
          v8 = (*(this->m_actor->_vptr_INextBotEventResponder + 97))(&this->m_actor->INextBot);
          v9 = v19;
          v10 = v8;
          v11 = gpGlobals;
          if ( gpGlobals != 0 )
          {
            if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
            {
              m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
              if ( m_pfnWarningFunc != 0 )
              {
                v17 = gpGlobals;
                v18 = v10;
                m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
                v11 = v17;
                v10 = v18;
                v9 = v19;
              }
            }
            m_flCurrentTime = v11->m_flCurrentTime;
          }
          else
          {
            m_flCurrentTime = 0.0;
          }
          v14 = this->m_actor;
          memset(&v23, 100, 3);
          v23._color[3] = -1;
          INextBot::DebugConColorMsg(
            &v14->INextBot,
            NextBotDebugType::NEXTBOT_EVENTS,
            &v23,
            "%3.2f: %s:%s: %s received EVENT %s\n",
            m_flCurrentTime,
            v10,
            v9,
            v7,
            "OnKilled");
        }
        m_actor = this->m_actor;
      }
      (*(v4->_vptr_INextBotEventResponder + 84))(&v22, v4, m_actor, info);
      _result = v22;
      if ( v22.m_type != ActionResultType::CONTINUE )
        break;
      v4 = v4->m_buriedUnderMe;
    }
    while ( v4 != 0 );
    Action<CSimpleBot>::StorePendingEventResult(this, v4, "OnKilled", &_result);
    for ( i = (*(this->_vptr_INextBotEventResponder + 3))(this);
          i != 0;
          i = (*(this->_vptr_INextBotEventResponder + 4))(this, i) )
    {
      (*(*i + 144LL))(i, info);
    }
  }
}


// Action<CDOTA_BaseNPC>::OnOtherKilled  (line 843, @0x0000000002882930, libserver.so)
void __fastcall Action<CDOTA_BaseNPC>::OnOtherKilled(
        Action<CDOTA_BaseNPC> *const this,
        CBaseCombatCharacter *victim,
        const CTakeDamageInfo *const info)
{
  ;
}


// Action<CSimpleBot>::OnOtherKilled  (line 843, @0x0000000002f1e2d0, libserver.so)
void __fastcall Action<CSimpleBot>::OnOtherKilled(
        Action<CSimpleBot> *const this,
        CBaseCombatCharacter *victim,
        const CTakeDamageInfo *const info)
{
  ;
}


// Action<CDOTA_BaseNPC>::OnSight  (line 847, @0x0000000002887c70, libserver.so)  // inlines: EventDesiredResult, IActionResult, OnSight
// calls: Action<CDOTA_BaseNPC>::DebugReceivedEvent, Action<CDOTA_BaseNPC>::StorePendingEventResult
// strings: "OnSight"
void __fastcall Action<CDOTA_BaseNPC>::OnSight(Action<CDOTA_BaseNPC> *const this, CBaseEntity *subject)
{
  Action<CDOTA_BaseNPC> *v4; // rbx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rsi
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 i; // rbx
  EventDesiredResult<CDOTA_BaseNPC> _result; // [rsp+0h] [rbp-60h] BYREF
  EventDesiredResult<CDOTA_BaseNPC> v14; // [rsp+20h] [rbp-40h] BYREF

  if ( this->m_isStarted )
  {
    _result.m_type = ActionResultType::CONTINUE;
    v4 = this;
    _result.m_action = 0;
    _result.m_reason = 0;
    _result.m_priority = EventResultPriorityType::RESULT_TRY;
    do
    {
      Action<CDOTA_BaseNPC>::DebugReceivedEvent(this, v4, "OnSight");
      (*(v4->_vptr_INextBotEventResponder + 86))(
        &v14,
        v4,
        this->m_actor,
        subject,
        v5,
        v6,
        *&_result.m_type,
        _result.m_action,
        _result.m_reason,
        _result.m_priority);
      _result = v14;
      if ( v14.m_type != ActionResultType::CONTINUE )
        break;
      v4 = v4->m_buriedUnderMe;
    }
    while ( v4 != 0 );
    Action<CDOTA_BaseNPC>::StorePendingEventResult(this, v4, "OnSight", &_result);
    for ( i = (*(this->_vptr_INextBotEventResponder + 3))(
                this,
                v9,
                v7,
                v8,
                v10,
                v11,
                *&_result.m_type,
                _result.m_action,
                _result.m_reason,
                _result.m_priority); i != 0; i = (*(this->_vptr_INextBotEventResponder + 4))(this, i) )
      (*(*i + 160LL))(i, subject);
  }
}


// Action<CSimpleBot>::OnSight  (line 847, @0x0000000002f26ba0, libserver.so)  // inlines: Color, DebugReceivedEvent, EventDesiredResult, GetBool, GetInt, GetName, IActionResult, IsDebugFilterMatch, IsDebugging, OnSight, SetColor, curtime
// calls: CUtlSymbol::String, INextBot::DebugConColorMsg, Action<CSimpleBot>::StorePendingEventResult, NextBotManager::IsDebugFilterMatch, __stack_chk_fail
// strings: "%3.2f: %s:%s: %s received EVENT %s\n", "OnSight"
void __fastcall Action<CSimpleBot>::OnSight(Action<CSimpleBot> *const this, CBaseEntity *subject)
{
  Action<CSimpleBot> *v4; // r15
  CSimpleBot *m_actor; // rdx
  INextBot *v6; // r14
  const char *v7; // r14
  __int64 v8; // rax
  const char *v9; // r9
  const char *v10; // r8
  CGlobalVars *v11; // rdx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  double m_flCurrentTime; // xmm0_8
  CSimpleBot *v14; // rax
  __int64 i; // r13
  bool IsDebugFilterMatch; // al
  CGlobalVars *v17; // [rsp+10h] [rbp-A0h]
  const char *v18; // [rsp+18h] [rbp-98h]
  const char *v19; // [rsp+28h] [rbp-88h]
  CSimpleBot *v20; // [rsp+28h] [rbp-88h]
  EventDesiredResult<CSimpleBot> _result; // [rsp+30h] [rbp-80h] BYREF
  EventDesiredResult<CSimpleBot> v22; // [rsp+50h] [rbp-60h] BYREF
  Color v23; // [rsp+70h] [rbp-40h] BYREF
  unsigned __int64 v24; // [rsp+78h] [rbp-38h]

  v24 = __readfsqword(0x28u);
  if ( this->m_isStarted )
  {
    _result.m_type = ActionResultType::CONTINUE;
    _result.m_action = 0;
    v4 = this;
    _result.m_reason = 0;
    _result.m_priority = EventResultPriorityType::RESULT_TRY;
    do
    {
      m_actor = this->m_actor;
      if ( m_actor != 0 )
      {
        if ( SLOBYTE(g_NextBotManager.m_debugType) < 0
          && ((v6 = &m_actor->INextBot, g_NextBotManager.m_debugFilterList.m_Size == 0)
           || (v20 = this->m_actor,
               IsDebugFilterMatch = NextBotManager::IsDebugFilterMatch(&g_NextBotManager, &m_actor->INextBot),
               m_actor = v20,
               IsDebugFilterMatch))
          && (*(m_actor->_vptr_INextBotEventResponder + 96))(v6, 128) != 0
          || NextBotDebugHistory.m_pParent->m_Value.m_nValue != 0 )
        {
          v7 = (*(v4->_vptr_INextBotEventResponder + 64))(v4);
          v19 = CUtlSymbol::String(&this->m_behavior->m_name);
          v8 = (*(this->m_actor->_vptr_INextBotEventResponder + 97))(&this->m_actor->INextBot);
          v9 = v19;
          v10 = v8;
          v11 = gpGlobals;
          if ( gpGlobals != 0 )
          {
            if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
            {
              m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
              if ( m_pfnWarningFunc != 0 )
              {
                v17 = gpGlobals;
                v18 = v10;
                m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
                v11 = v17;
                v10 = v18;
                v9 = v19;
              }
            }
            m_flCurrentTime = v11->m_flCurrentTime;
          }
          else
          {
            m_flCurrentTime = 0.0;
          }
          v14 = this->m_actor;
          memset(&v23, 100, 3);
          v23._color[3] = -1;
          INextBot::DebugConColorMsg(
            &v14->INextBot,
            NextBotDebugType::NEXTBOT_EVENTS,
            &v23,
            "%3.2f: %s:%s: %s received EVENT %s\n",
            m_flCurrentTime,
            v10,
            v9,
            v7,
            "OnSight");
        }
        m_actor = this->m_actor;
      }
      (*(v4->_vptr_INextBotEventResponder + 86))(&v22, v4, m_actor, subject);
      _result = v22;
      if ( v22.m_type != ActionResultType::CONTINUE )
        break;
      v4 = v4->m_buriedUnderMe;
    }
    while ( v4 != 0 );
    Action<CSimpleBot>::StorePendingEventResult(this, v4, "OnSight", &_result);
    for ( i = (*(this->_vptr_INextBotEventResponder + 3))(this);
          i != 0;
          i = (*(this->_vptr_INextBotEventResponder + 4))(this, i) )
    {
      (*(*i + 160LL))(i, subject);
    }
  }
}


// Action<CDOTA_BaseNPC>::OnLostSight  (line 848, @0x0000000002887d70, libserver.so)  // inlines: EventDesiredResult, IActionResult, OnLostSight
// calls: Action<CDOTA_BaseNPC>::DebugReceivedEvent, Action<CDOTA_BaseNPC>::StorePendingEventResult
// strings: "OnLostSight"
void __fastcall Action<CDOTA_BaseNPC>::OnLostSight(Action<CDOTA_BaseNPC> *const this, CBaseEntity *subject)
{
  Action<CDOTA_BaseNPC> *v4; // rbx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rsi
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 i; // rbx
  EventDesiredResult<CDOTA_BaseNPC> _result; // [rsp+0h] [rbp-60h] BYREF
  EventDesiredResult<CDOTA_BaseNPC> v14; // [rsp+20h] [rbp-40h] BYREF

  if ( this->m_isStarted )
  {
    _result.m_type = ActionResultType::CONTINUE;
    v4 = this;
    _result.m_action = 0;
    _result.m_reason = 0;
    _result.m_priority = EventResultPriorityType::RESULT_TRY;
    do
    {
      Action<CDOTA_BaseNPC>::DebugReceivedEvent(this, v4, "OnLostSight");
      (*(v4->_vptr_INextBotEventResponder + 87))(
        &v14,
        v4,
        this->m_actor,
        subject,
        v5,
        v6,
        *&_result.m_type,
        _result.m_action,
        _result.m_reason,
        _result.m_priority);
      _result = v14;
      if ( v14.m_type != ActionResultType::CONTINUE )
        break;
      v4 = v4->m_buriedUnderMe;
    }
    while ( v4 != 0 );
    Action<CDOTA_BaseNPC>::StorePendingEventResult(this, v4, "OnLostSight", &_result);
    for ( i = (*(this->_vptr_INextBotEventResponder + 3))(
                this,
                v9,
                v7,
                v8,
                v10,
                v11,
                *&_result.m_type,
                _result.m_action,
                _result.m_reason,
                _result.m_priority); i != 0; i = (*(this->_vptr_INextBotEventResponder + 4))(this, i) )
      (*(*i + 168LL))(i, subject);
  }
}


// Action<CSimpleBot>::OnLostSight  (line 848, @0x0000000002f26e60, libserver.so)  // inlines: Color, DebugReceivedEvent, EventDesiredResult, GetBool, GetInt, GetName, IActionResult, IsDebugFilterMatch, IsDebugging, OnLostSight, SetColor, curtime
// calls: CUtlSymbol::String, INextBot::DebugConColorMsg, Action<CSimpleBot>::StorePendingEventResult, NextBotManager::IsDebugFilterMatch, __stack_chk_fail
// strings: "%3.2f: %s:%s: %s received EVENT %s\n", "OnLostSight"
void __fastcall Action<CSimpleBot>::OnLostSight(Action<CSimpleBot> *const this, CBaseEntity *subject)
{
  Action<CSimpleBot> *v4; // r15
  CSimpleBot *m_actor; // rdx
  INextBot *v6; // r14
  const char *v7; // r14
  __int64 v8; // rax
  const char *v9; // r9
  const char *v10; // r8
  CGlobalVars *v11; // rdx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  double m_flCurrentTime; // xmm0_8
  CSimpleBot *v14; // rax
  __int64 i; // r13
  bool IsDebugFilterMatch; // al
  CGlobalVars *v17; // [rsp+10h] [rbp-A0h]
  const char *v18; // [rsp+18h] [rbp-98h]
  const char *v19; // [rsp+28h] [rbp-88h]
  CSimpleBot *v20; // [rsp+28h] [rbp-88h]
  EventDesiredResult<CSimpleBot> _result; // [rsp+30h] [rbp-80h] BYREF
  EventDesiredResult<CSimpleBot> v22; // [rsp+50h] [rbp-60h] BYREF
  Color v23; // [rsp+70h] [rbp-40h] BYREF
  unsigned __int64 v24; // [rsp+78h] [rbp-38h]

  v24 = __readfsqword(0x28u);
  if ( this->m_isStarted )
  {
    _result.m_type = ActionResultType::CONTINUE;
    _result.m_action = 0;
    v4 = this;
    _result.m_reason = 0;
    _result.m_priority = EventResultPriorityType::RESULT_TRY;
    do
    {
      m_actor = this->m_actor;
      if ( m_actor != 0 )
      {
        if ( SLOBYTE(g_NextBotManager.m_debugType) < 0
          && ((v6 = &m_actor->INextBot, g_NextBotManager.m_debugFilterList.m_Size == 0)
           || (v20 = this->m_actor,
               IsDebugFilterMatch = NextBotManager::IsDebugFilterMatch(&g_NextBotManager, &m_actor->INextBot),
               m_actor = v20,
               IsDebugFilterMatch))
          && (*(m_actor->_vptr_INextBotEventResponder + 96))(v6, 128) != 0
          || NextBotDebugHistory.m_pParent->m_Value.m_nValue != 0 )
        {
          v7 = (*(v4->_vptr_INextBotEventResponder + 64))(v4);
          v19 = CUtlSymbol::String(&this->m_behavior->m_name);
          v8 = (*(this->m_actor->_vptr_INextBotEventResponder + 97))(&this->m_actor->INextBot);
          v9 = v19;
          v10 = v8;
          v11 = gpGlobals;
          if ( gpGlobals != 0 )
          {
            if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
            {
              m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
              if ( m_pfnWarningFunc != 0 )
              {
                v17 = gpGlobals;
                v18 = v10;
                m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
                v11 = v17;
                v10 = v18;
                v9 = v19;
              }
            }
            m_flCurrentTime = v11->m_flCurrentTime;
          }
          else
          {
            m_flCurrentTime = 0.0;
          }
          v14 = this->m_actor;
          memset(&v23, 100, 3);
          v23._color[3] = -1;
          INextBot::DebugConColorMsg(
            &v14->INextBot,
            NextBotDebugType::NEXTBOT_EVENTS,
            &v23,
            "%3.2f: %s:%s: %s received EVENT %s\n",
            m_flCurrentTime,
            v10,
            v9,
            v7,
            "OnLostSight");
        }
        m_actor = this->m_actor;
      }
      (*(v4->_vptr_INextBotEventResponder + 87))(&v22, v4, m_actor, subject);
      _result = v22;
      if ( v22.m_type != ActionResultType::CONTINUE )
        break;
      v4 = v4->m_buriedUnderMe;
    }
    while ( v4 != 0 );
    Action<CSimpleBot>::StorePendingEventResult(this, v4, "OnLostSight", &_result);
    for ( i = (*(this->_vptr_INextBotEventResponder + 3))(this);
          i != 0;
          i = (*(this->_vptr_INextBotEventResponder + 4))(this, i) )
    {
      (*(*i + 168LL))(i, subject);
    }
  }
}


// Action<CDOTA_BaseNPC>::OnSound  (line 849, @0x0000000002887e70, libserver.so)  // inlines: EventDesiredResult, IActionResult, OnSound
// calls: Action<CDOTA_BaseNPC>::DebugReceivedEvent, Action<CDOTA_BaseNPC>::StorePendingEventResult
// strings: "OnSound"
void __fastcall Action<CDOTA_BaseNPC>::OnSound(
        Action<CDOTA_BaseNPC> *const this,
        CBaseEntity *source,
        const Vector *const pos,
        KeyValues *keys)
{
  Action<CDOTA_BaseNPC> *v8; // r15
  __int64 i; // r15
  EventDesiredResult<CDOTA_BaseNPC> _result; // [rsp+10h] [rbp-70h] BYREF
  EventDesiredResult<CDOTA_BaseNPC> v11; // [rsp+30h] [rbp-50h] BYREF

  if ( this->m_isStarted )
  {
    _result.m_type = ActionResultType::CONTINUE;
    v8 = this;
    _result.m_action = 0;
    _result.m_reason = 0;
    _result.m_priority = EventResultPriorityType::RESULT_TRY;
    do
    {
      Action<CDOTA_BaseNPC>::DebugReceivedEvent(this, v8, "OnSound");
      (*(v8->_vptr_INextBotEventResponder + 88))(&v11, v8, this->m_actor, source, pos, keys);
      _result = v11;
      if ( v11.m_type != ActionResultType::CONTINUE )
        break;
      v8 = v8->m_buriedUnderMe;
    }
    while ( v8 != 0 );
    Action<CDOTA_BaseNPC>::StorePendingEventResult(this, v8, "OnSound", &_result);
    for ( i = (*(this->_vptr_INextBotEventResponder + 3))(this);
          i != 0;
          i = (*(this->_vptr_INextBotEventResponder + 4))(this, i) )
    {
      (*(*i + 176LL))(i, source, pos, keys);
    }
  }
}


// Action<CSimpleBot>::OnSound  (line 849, @0x0000000002f27120, libserver.so)  // inlines: Color, DebugReceivedEvent, EventDesiredResult, GetBool, GetInt, GetName, IActionResult, IsDebugFilterMatch, IsDebugging, OnSound, SetColor, curtime
// calls: CUtlSymbol::String, INextBot::DebugConColorMsg, Action<CSimpleBot>::StorePendingEventResult, NextBotManager::IsDebugFilterMatch, __stack_chk_fail
// strings: "%3.2f: %s:%s: %s received EVENT %s\n", "OnSound"
void __fastcall Action<CSimpleBot>::OnSound(
        Action<CSimpleBot> *const this,
        CBaseEntity *source,
        const Vector *const pos,
        KeyValues *keys)
{
  Action<CSimpleBot> *v8; // r15
  CSimpleBot *m_actor; // rdx
  INextBot *v10; // rcx
  __int64 v11; // rax
  const char *v12; // r9
  const char *v13; // r8
  CGlobalVars *v14; // rdx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  double m_flCurrentTime; // xmm0_8
  CSimpleBot *v17; // rax
  __int64 i; // r15
  bool IsDebugFilterMatch; // al
  CGlobalVars *v20; // [rsp+10h] [rbp-B0h]
  const char *v21; // [rsp+18h] [rbp-A8h]
  const char *v22; // [rsp+28h] [rbp-98h]
  CSimpleBot *v23; // [rsp+28h] [rbp-98h]
  const char *v24; // [rsp+30h] [rbp-90h]
  INextBot *v25; // [rsp+30h] [rbp-90h]
  EventDesiredResult<CSimpleBot> _result; // [rsp+40h] [rbp-80h] BYREF
  EventDesiredResult<CSimpleBot> v27; // [rsp+60h] [rbp-60h] BYREF
  Color v28; // [rsp+80h] [rbp-40h] BYREF
  unsigned __int64 v29; // [rsp+88h] [rbp-38h]

  v29 = __readfsqword(0x28u);
  if ( this->m_isStarted )
  {
    _result.m_type = ActionResultType::CONTINUE;
    v8 = this;
    _result.m_action = 0;
    _result.m_reason = 0;
    _result.m_priority = EventResultPriorityType::RESULT_TRY;
    do
    {
      m_actor = this->m_actor;
      if ( m_actor != 0 )
      {
        if ( SLOBYTE(g_NextBotManager.m_debugType) < 0
          && ((v10 = &m_actor->INextBot, g_NextBotManager.m_debugFilterList.m_Size == 0)
           || (v23 = this->m_actor,
               v25 = &m_actor->INextBot,
               IsDebugFilterMatch = NextBotManager::IsDebugFilterMatch(&g_NextBotManager, &m_actor->INextBot),
               v10 = v25,
               m_actor = v23,
               IsDebugFilterMatch))
          && (*(m_actor->_vptr_INextBotEventResponder + 96))(v10, 128) != 0
          || NextBotDebugHistory.m_pParent->m_Value.m_nValue != 0 )
        {
          v24 = (*(v8->_vptr_INextBotEventResponder + 64))(v8);
          v22 = CUtlSymbol::String(&this->m_behavior->m_name);
          v11 = (*(this->m_actor->_vptr_INextBotEventResponder + 97))(&this->m_actor->INextBot);
          v12 = v22;
          v13 = v11;
          v14 = gpGlobals;
          if ( gpGlobals != 0 )
          {
            if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
            {
              m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
              if ( m_pfnWarningFunc != 0 )
              {
                v20 = gpGlobals;
                v21 = v13;
                m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
                v14 = v20;
                v13 = v21;
                v12 = v22;
              }
            }
            m_flCurrentTime = v14->m_flCurrentTime;
          }
          else
          {
            m_flCurrentTime = 0.0;
          }
          v17 = this->m_actor;
          memset(&v28, 100, 3);
          v28._color[3] = -1;
          INextBot::DebugConColorMsg(
            &v17->INextBot,
            NextBotDebugType::NEXTBOT_EVENTS,
            &v28,
            "%3.2f: %s:%s: %s received EVENT %s\n",
            m_flCurrentTime,
            v13,
            v12,
            v24,
            "OnSound");
        }
        m_actor = this->m_actor;
      }
      (*(v8->_vptr_INextBotEventResponder + 88))(&v27, v8, m_actor, source, pos, keys);
      _result = v27;
      if ( v27.m_type != ActionResultType::CONTINUE )
        break;
      v8 = v8->m_buriedUnderMe;
    }
    while ( v8 != 0 );
    Action<CSimpleBot>::StorePendingEventResult(this, v8, "OnSound", &_result);
    for ( i = (*(this->_vptr_INextBotEventResponder + 3))(this);
          i != 0;
          i = (*(this->_vptr_INextBotEventResponder + 4))(this, i) )
    {
      (*(*i + 176LL))(i, source, pos, keys);
    }
  }
}


// Action<CDOTA_BaseNPC>::OnSpokeConcept  (line 850, @0x0000000002887f80, libserver.so)  // inlines: CAI_Concept, CEntityHandle, CHandle, CRR_Concept, CUtlSymbol, EventDesiredResult, IActionResult, OnSpokeConcept
// calls: Action<CDOTA_BaseNPC>::DebugReceivedEvent, Action<CDOTA_BaseNPC>::StorePendingEventResult
// strings: "OnSpokeConcept"
// local variable allocation has failed, the output may be wrong!
void __fastcall Action<CDOTA_BaseNPC>::OnSpokeConcept(
        Action<CDOTA_BaseNPC> *const this,
        CBaseCombatCharacter *who,
        AIConcept_t concept,
        AI_Response *response)
{
  Action<CDOTA_BaseNPC> *v8; // r14
  void (__fastcall *v9)(EventDesiredResult<CDOTA_BaseNPC> *, Action<CDOTA_BaseNPC> *, CDOTA_BaseNPC *, CBaseCombatCharacter *, _WORD *, AI_Response *); // r11
  __int16 v10; // r14
  __int64 i; // r15
  void (__fastcall *v12)(__int64, CBaseCombatCharacter *, EventDesiredResult<CDOTA_BaseNPC> *, AI_Response *); // r8
  int v13; // [rsp+0h] [rbp-90h]
  _WORD v14[2]; // [rsp+10h] [rbp-80h] BYREF
  int v15; // [rsp+14h] [rbp-7Ch]
  EventDesiredResult<CDOTA_BaseNPC> _result; // [rsp+20h] [rbp-70h] BYREF
  EventDesiredResult<CDOTA_BaseNPC> v17[2]; // [rsp+40h] [rbp-50h] BYREF

  if ( this->m_isStarted )
  {
    _result.m_type = ActionResultType::CONTINUE;
    v8 = this;
    _result.m_action = 0;
    _result.m_reason = 0;
    _result.m_priority = EventResultPriorityType::RESULT_TRY;
    do
    {
      Action<CDOTA_BaseNPC>::DebugReceivedEvent(this, v8, "OnSpokeConcept");
      v9 = *(v8->_vptr_INextBotEventResponder + 89);
      v14[0] = *concept.m_iConcept.m_Id;
      v15 = *(*&concept + 4LL);
      v9(v17, v8, this->m_actor, who, v14, response);
      _result = v17[0];
      if ( v17[0].m_type != ActionResultType::CONTINUE )
        break;
      v8 = v8->m_buriedUnderMe;
    }
    while ( v8 != 0 );
    Action<CDOTA_BaseNPC>::StorePendingEventResult(this, v8, "OnSpokeConcept", &_result);
    v10 = *concept.m_iConcept.m_Id;
    v13 = *(*&concept + 4LL);
    for ( i = (*(this->_vptr_INextBotEventResponder + 3))(this);
          i != 0;
          i = (*(this->_vptr_INextBotEventResponder + 4))(this, i) )
    {
      v12 = *(*i + 184LL);
      LOWORD(v17[0].m_type) = v10;
      *(&v17[0].m_type + 1) = v13;
      v12(i, who, v17, response);
    }
  }
}


// Action<CSimpleBot>::OnSpokeConcept  (line 850, @0x0000000002f27410, libserver.so)  // inlines: CAI_Concept, CEntityHandle, CHandle, CRR_Concept, CUtlSymbol, Color, DebugReceivedEvent, EventDesiredResult, GetBool, GetInt, GetName, IActionResult, IsDebugFilterMatch, IsDebugging, OnSpokeConcept, SetColor, curtime
// calls: CUtlSymbol::String, INextBot::DebugConColorMsg, Action<CSimpleBot>::StorePendingEventResult, NextBotManager::IsDebugFilterMatch, __stack_chk_fail
// strings: "%3.2f: %s:%s: %s received EVENT %s\n", "OnSpokeConcept"
// local variable allocation has failed, the output may be wrong!
void __fastcall Action<CSimpleBot>::OnSpokeConcept(
        Action<CSimpleBot> *const this,
        CBaseCombatCharacter *who,
        AIConcept_t concept,
        AI_Response *response)
{
  Action<CSimpleBot> *v7; // r13
  CSimpleBot *m_actor; // rdx
  INextBot *v9; // r15
  const char *v10; // r15
  __int64 v11; // rax
  const char *v12; // r9
  const char *v13; // r8
  CGlobalVars *v14; // rdx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  double m_flCurrentTime; // xmm0_8
  CSimpleBot *v17; // rax
  int (**vptr_INextBotEventResponder)(...); // rax
  int (*v19)(...); // rax
  __int16 v20; // r15
  __int64 v21; // rax
  __int64 i; // r13
  void (__fastcall *v23)(__int64, CBaseCombatCharacter *, EventDesiredResult<CSimpleBot> *, AI_Response *); // r8
  bool IsDebugFilterMatch; // al
  CGlobalVars *v25; // [rsp+18h] [rbp-C8h]
  const char *v26; // [rsp+20h] [rbp-C0h]
  const char *v27; // [rsp+30h] [rbp-B0h]
  CSimpleBot *v28; // [rsp+30h] [rbp-B0h]
  int v29; // [rsp+38h] [rbp-A8h]
  __int16 v31[2]; // [rsp+50h] [rbp-90h] BYREF
  int v32; // [rsp+54h] [rbp-8Ch]
  EventDesiredResult<CSimpleBot> _result; // [rsp+60h] [rbp-80h] BYREF
  EventDesiredResult<CSimpleBot> v34; // [rsp+80h] [rbp-60h] BYREF
  Color v35; // [rsp+A0h] [rbp-40h] BYREF
  unsigned __int64 v36; // [rsp+A8h] [rbp-38h]

  v36 = __readfsqword(0x28u);
  if ( this->m_isStarted )
  {
    v7 = this;
    _result.m_type = ActionResultType::CONTINUE;
    _result.m_action = 0;
    _result.m_reason = 0;
    _result.m_priority = EventResultPriorityType::RESULT_TRY;
    do
    {
      m_actor = this->m_actor;
      if ( m_actor != 0 )
      {
        if ( SLOBYTE(g_NextBotManager.m_debugType) < 0
          && ((v9 = &m_actor->INextBot, g_NextBotManager.m_debugFilterList.m_Size == 0)
           || (v28 = this->m_actor,
               IsDebugFilterMatch = NextBotManager::IsDebugFilterMatch(&g_NextBotManager, &m_actor->INextBot),
               m_actor = v28,
               IsDebugFilterMatch))
          && (*(m_actor->_vptr_INextBotEventResponder + 96))(v9, 128) != 0
          || NextBotDebugHistory.m_pParent->m_Value.m_nValue != 0 )
        {
          v10 = (*(v7->_vptr_INextBotEventResponder + 64))(v7);
          v27 = CUtlSymbol::String(&this->m_behavior->m_name);
          v11 = (*(this->m_actor->_vptr_INextBotEventResponder + 97))(&this->m_actor->INextBot);
          v12 = v27;
          v13 = v11;
          v14 = gpGlobals;
          if ( gpGlobals != 0 )
          {
            if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
            {
              m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
              if ( m_pfnWarningFunc != 0 )
              {
                v25 = gpGlobals;
                v26 = v13;
                m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
                v14 = v25;
                v13 = v26;
                v12 = v27;
              }
            }
            m_flCurrentTime = v14->m_flCurrentTime;
          }
          else
          {
            m_flCurrentTime = 0.0;
          }
          v17 = this->m_actor;
          memset(&v35, 100, 3);
          v35._color[3] = -1;
          INextBot::DebugConColorMsg(
            &v17->INextBot,
            NextBotDebugType::NEXTBOT_EVENTS,
            &v35,
            "%3.2f: %s:%s: %s received EVENT %s\n",
            m_flCurrentTime,
            v13,
            v12,
            v10,
            "OnSpokeConcept");
        }
        m_actor = this->m_actor;
      }
      vptr_INextBotEventResponder = v7->_vptr_INextBotEventResponder;
      v31[0] = *concept.m_iConcept.m_Id;
      v19 = vptr_INextBotEventResponder[89];
      v32 = *(*&concept + 4LL);
      v19(&v34, v7, m_actor, who, v31, response);
      _result = v34;
      if ( v34.m_type != ActionResultType::CONTINUE )
        break;
      v7 = v7->m_buriedUnderMe;
    }
    while ( v7 != 0 );
    Action<CSimpleBot>::StorePendingEventResult(this, v7, "OnSpokeConcept", &_result);
    v20 = *concept.m_iConcept.m_Id;
    v29 = *(*&concept + 4LL);
    v21 = (*(this->_vptr_INextBotEventResponder + 3))(this);
    if ( v21 != 0 )
    {
      for ( i = v21; i != 0; i = (*(this->_vptr_INextBotEventResponder + 4))(this, i) )
      {
        v23 = *(*i + 184LL);
        LOWORD(v34.m_type) = v20;
        *(&v34.m_type + 1) = v29;
        v23(i, who, &v34, response);
      }
    }
  }
}


// Action<CDOTA_BaseNPC>::OnWeaponFired  (line 851, @0x00000000028880e0, libserver.so)  // inlines: EventDesiredResult, IActionResult, OnWeaponFired
// calls: Action<CDOTA_BaseNPC>::DebugReceivedEvent, Action<CDOTA_BaseNPC>::StorePendingEventResult
// strings: "OnWeaponFired"
void __fastcall Action<CDOTA_BaseNPC>::OnWeaponFired(
        Action<CDOTA_BaseNPC> *const this,
        CBaseCombatCharacter *whoFired,
        CBaseCombatWeapon *weapon)
{
  Action<CDOTA_BaseNPC> *v6; // rbx
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rsi
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 i; // rbx
  EventDesiredResult<CDOTA_BaseNPC> _result; // [rsp+0h] [rbp-70h] BYREF
  EventDesiredResult<CDOTA_BaseNPC> v15; // [rsp+20h] [rbp-50h] BYREF

  if ( this->m_isStarted )
  {
    _result.m_type = ActionResultType::CONTINUE;
    _result.m_action = 0;
    v6 = this;
    _result.m_reason = 0;
    _result.m_priority = EventResultPriorityType::RESULT_TRY;
    do
    {
      Action<CDOTA_BaseNPC>::DebugReceivedEvent(this, v6, "OnWeaponFired");
      (*(v6->_vptr_INextBotEventResponder + 90))(
        &v15,
        v6,
        this->m_actor,
        whoFired,
        weapon,
        v7,
        *&_result.m_type,
        _result.m_action,
        _result.m_reason,
        _result.m_priority);
      _result = v15;
      if ( v15.m_type != ActionResultType::CONTINUE )
        break;
      v6 = v6->m_buriedUnderMe;
    }
    while ( v6 != 0 );
    Action<CDOTA_BaseNPC>::StorePendingEventResult(this, v6, "OnWeaponFired", &_result);
    for ( i = (*(this->_vptr_INextBotEventResponder + 3))(
                this,
                v10,
                v8,
                v9,
                v11,
                v12,
                *&_result.m_type,
                _result.m_action,
                _result.m_reason,
                _result.m_priority); i != 0; i = (*(this->_vptr_INextBotEventResponder + 4))(this, i) )
      (*(*i + 192LL))(i, whoFired, weapon);
  }
}


// Action<CSimpleBot>::OnWeaponFired  (line 851, @0x0000000002f27770, libserver.so)  // inlines: Color, DebugReceivedEvent, EventDesiredResult, GetBool, GetInt, GetName, IActionResult, IsDebugFilterMatch, IsDebugging, OnWeaponFired, SetColor, curtime
// calls: CUtlSymbol::String, INextBot::DebugConColorMsg, Action<CSimpleBot>::StorePendingEventResult, NextBotManager::IsDebugFilterMatch, __stack_chk_fail
// strings: "%3.2f: %s:%s: %s received EVENT %s\n", "OnWeaponFired"
void __fastcall Action<CSimpleBot>::OnWeaponFired(
        Action<CSimpleBot> *const this,
        CBaseCombatCharacter *whoFired,
        CBaseCombatWeapon *weapon)
{
  Action<CSimpleBot> *v6; // r14
  CSimpleBot *m_actor; // rdx
  INextBot *v8; // r15
  const char *v9; // r15
  __int64 v10; // rax
  const char *v11; // r9
  const char *v12; // r8
  CGlobalVars *v13; // rdx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  double m_flCurrentTime; // xmm0_8
  CSimpleBot *v16; // rax
  __int64 i; // r14
  bool IsDebugFilterMatch; // al
  CGlobalVars *v19; // [rsp+18h] [rbp-A8h]
  const char *v20; // [rsp+20h] [rbp-A0h]
  const char *v21; // [rsp+30h] [rbp-90h]
  CSimpleBot *v22; // [rsp+30h] [rbp-90h]
  EventDesiredResult<CSimpleBot> _result; // [rsp+40h] [rbp-80h] BYREF
  EventDesiredResult<CSimpleBot> v24; // [rsp+60h] [rbp-60h] BYREF
  Color v25; // [rsp+80h] [rbp-40h] BYREF
  unsigned __int64 v26; // [rsp+88h] [rbp-38h]

  v26 = __readfsqword(0x28u);
  if ( this->m_isStarted )
  {
    v6 = this;
    _result.m_type = ActionResultType::CONTINUE;
    _result.m_action = 0;
    _result.m_reason = 0;
    _result.m_priority = EventResultPriorityType::RESULT_TRY;
    do
    {
      m_actor = this->m_actor;
      if ( m_actor != 0 )
      {
        if ( SLOBYTE(g_NextBotManager.m_debugType) < 0
          && ((v8 = &m_actor->INextBot, g_NextBotManager.m_debugFilterList.m_Size == 0)
           || (v22 = this->m_actor,
               IsDebugFilterMatch = NextBotManager::IsDebugFilterMatch(&g_NextBotManager, &m_actor->INextBot),
               m_actor = v22,
               IsDebugFilterMatch))
          && (*(m_actor->_vptr_INextBotEventResponder + 96))(v8, 128) != 0
          || NextBotDebugHistory.m_pParent->m_Value.m_nValue != 0 )
        {
          v9 = (*(v6->_vptr_INextBotEventResponder + 64))(v6);
          v21 = CUtlSymbol::String(&this->m_behavior->m_name);
          v10 = (*(this->m_actor->_vptr_INextBotEventResponder + 97))(&this->m_actor->INextBot);
          v11 = v21;
          v12 = v10;
          v13 = gpGlobals;
          if ( gpGlobals != 0 )
          {
            if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
            {
              m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
              if ( m_pfnWarningFunc != 0 )
              {
                v19 = gpGlobals;
                v20 = v12;
                m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
                v13 = v19;
                v12 = v20;
                v11 = v21;
              }
            }
            m_flCurrentTime = v13->m_flCurrentTime;
          }
          else
          {
            m_flCurrentTime = 0.0;
          }
          v16 = this->m_actor;
          memset(&v25, 100, 3);
          v25._color[3] = -1;
          INextBot::DebugConColorMsg(
            &v16->INextBot,
            NextBotDebugType::NEXTBOT_EVENTS,
            &v25,
            "%3.2f: %s:%s: %s received EVENT %s\n",
            m_flCurrentTime,
            v12,
            v11,
            v9,
            "OnWeaponFired");
        }
        m_actor = this->m_actor;
      }
      (*(v6->_vptr_INextBotEventResponder + 90))(&v24, v6, m_actor, whoFired, weapon);
      _result = v24;
      if ( v24.m_type != ActionResultType::CONTINUE )
        break;
      v6 = v6->m_buriedUnderMe;
    }
    while ( v6 != 0 );
    Action<CSimpleBot>::StorePendingEventResult(this, v6, "OnWeaponFired", &_result);
    for ( i = (*(this->_vptr_INextBotEventResponder + 3))(this);
          i != 0;
          i = (*(this->_vptr_INextBotEventResponder + 4))(this, i) )
    {
      (*(*i + 192LL))(i, whoFired, weapon);
    }
  }
}


// Action<CDOTA_BaseNPC>::OnNavAreaChanged  (line 852, @0x00000000028881f0, libserver.so)  // inlines: EventDesiredResult, IActionResult, OnNavAreaChanged
// calls: Action<CDOTA_BaseNPC>::DebugReceivedEvent, Action<CDOTA_BaseNPC>::StorePendingEventResult
// strings: "OnNavAreaChanged"
void __fastcall Action<CDOTA_BaseNPC>::OnNavAreaChanged(
        Action<CDOTA_BaseNPC> *const this,
        CNavArea *newArea,
        CNavArea *oldArea)
{
  Action<CDOTA_BaseNPC> *v6; // rbx
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rsi
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 i; // rbx
  EventDesiredResult<CDOTA_BaseNPC> _result; // [rsp+0h] [rbp-70h] BYREF
  EventDesiredResult<CDOTA_BaseNPC> v15; // [rsp+20h] [rbp-50h] BYREF

  if ( this->m_isStarted )
  {
    _result.m_type = ActionResultType::CONTINUE;
    _result.m_action = 0;
    v6 = this;
    _result.m_reason = 0;
    _result.m_priority = EventResultPriorityType::RESULT_TRY;
    do
    {
      Action<CDOTA_BaseNPC>::DebugReceivedEvent(this, v6, "OnNavAreaChanged");
      (*(v6->_vptr_INextBotEventResponder + 91))(
        &v15,
        v6,
        this->m_actor,
        newArea,
        oldArea,
        v7,
        *&_result.m_type,
        _result.m_action,
        _result.m_reason,
        _result.m_priority);
      _result = v15;
      if ( v15.m_type != ActionResultType::CONTINUE )
        break;
      v6 = v6->m_buriedUnderMe;
    }
    while ( v6 != 0 );
    Action<CDOTA_BaseNPC>::StorePendingEventResult(this, v6, "OnNavAreaChanged", &_result);
    for ( i = (*(this->_vptr_INextBotEventResponder + 3))(
                this,
                v10,
                v8,
                v9,
                v11,
                v12,
                *&_result.m_type,
                _result.m_action,
                _result.m_reason,
                _result.m_priority); i != 0; i = (*(this->_vptr_INextBotEventResponder + 4))(this, i) )
      (*(*i + 200LL))(i, newArea, oldArea);
  }
}


// Action<CSimpleBot>::OnNavAreaChanged  (line 852, @0x0000000002f27a40, libserver.so)  // inlines: Color, DebugReceivedEvent, EventDesiredResult, GetBool, GetInt, GetName, IActionResult, IsDebugFilterMatch, IsDebugging, OnNavAreaChanged, SetColor, curtime
// calls: CUtlSymbol::String, INextBot::DebugConColorMsg, Action<CSimpleBot>::StorePendingEventResult, NextBotManager::IsDebugFilterMatch, __stack_chk_fail
// strings: "%3.2f: %s:%s: %s received EVENT %s\n", "OnNavAreaChanged"
void __fastcall Action<CSimpleBot>::OnNavAreaChanged(
        Action<CSimpleBot> *const this,
        CNavArea *newArea,
        CNavArea *oldArea)
{
  Action<CSimpleBot> *v6; // r14
  CSimpleBot *m_actor; // rdx
  INextBot *v8; // r15
  const char *v9; // r15
  __int64 v10; // rax
  const char *v11; // r9
  const char *v12; // r8
  CGlobalVars *v13; // rdx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  double m_flCurrentTime; // xmm0_8
  CSimpleBot *v16; // rax
  __int64 i; // r14
  bool IsDebugFilterMatch; // al
  CGlobalVars *v19; // [rsp+18h] [rbp-A8h]
  const char *v20; // [rsp+20h] [rbp-A0h]
  const char *v21; // [rsp+30h] [rbp-90h]
  CSimpleBot *v22; // [rsp+30h] [rbp-90h]
  EventDesiredResult<CSimpleBot> _result; // [rsp+40h] [rbp-80h] BYREF
  EventDesiredResult<CSimpleBot> v24; // [rsp+60h] [rbp-60h] BYREF
  Color v25; // [rsp+80h] [rbp-40h] BYREF
  unsigned __int64 v26; // [rsp+88h] [rbp-38h]

  v26 = __readfsqword(0x28u);
  if ( this->m_isStarted )
  {
    v6 = this;
    _result.m_type = ActionResultType::CONTINUE;
    _result.m_action = 0;
    _result.m_reason = 0;
    _result.m_priority = EventResultPriorityType::RESULT_TRY;
    do
    {
      m_actor = this->m_actor;
      if ( m_actor != 0 )
      {
        if ( SLOBYTE(g_NextBotManager.m_debugType) < 0
          && ((v8 = &m_actor->INextBot, g_NextBotManager.m_debugFilterList.m_Size == 0)
           || (v22 = this->m_actor,
               IsDebugFilterMatch = NextBotManager::IsDebugFilterMatch(&g_NextBotManager, &m_actor->INextBot),
               m_actor = v22,
               IsDebugFilterMatch))
          && (*(m_actor->_vptr_INextBotEventResponder + 96))(v8, 128) != 0
          || NextBotDebugHistory.m_pParent->m_Value.m_nValue != 0 )
        {
          v9 = (*(v6->_vptr_INextBotEventResponder + 64))(v6);
          v21 = CUtlSymbol::String(&this->m_behavior->m_name);
          v10 = (*(this->m_actor->_vptr_INextBotEventResponder + 97))(&this->m_actor->INextBot);
          v11 = v21;
          v12 = v10;
          v13 = gpGlobals;
          if ( gpGlobals != 0 )
          {
            if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
            {
              m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
              if ( m_pfnWarningFunc != 0 )
              {
                v19 = gpGlobals;
                v20 = v12;
                m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
                v13 = v19;
                v12 = v20;
                v11 = v21;
              }
            }
            m_flCurrentTime = v13->m_flCurrentTime;
          }
          else
          {
            m_flCurrentTime = 0.0;
          }
          v16 = this->m_actor;
          memset(&v25, 100, 3);
          v25._color[3] = -1;
          INextBot::DebugConColorMsg(
            &v16->INextBot,
            NextBotDebugType::NEXTBOT_EVENTS,
            &v25,
            "%3.2f: %s:%s: %s received EVENT %s\n",
            m_flCurrentTime,
            v12,
            v11,
            v9,
            "OnNavAreaChanged");
        }
        m_actor = this->m_actor;
      }
      (*(v6->_vptr_INextBotEventResponder + 91))(&v24, v6, m_actor, newArea, oldArea);
      _result = v24;
      if ( v24.m_type != ActionResultType::CONTINUE )
        break;
      v6 = v6->m_buriedUnderMe;
    }
    while ( v6 != 0 );
    Action<CSimpleBot>::StorePendingEventResult(this, v6, "OnNavAreaChanged", &_result);
    for ( i = (*(this->_vptr_INextBotEventResponder + 3))(this);
          i != 0;
          i = (*(this->_vptr_INextBotEventResponder + 4))(this, i) )
    {
      (*(*i + 200LL))(i, newArea, oldArea);
    }
  }
}


// Action<CDOTA_BaseNPC>::OnModelChanged  (line 853, @0x0000000002888300, libserver.so)  // inlines: Color, DebugReceivedEvent, EventDesiredResult, GetBool, GetInt, GetName, IActionResult, IsDebugging, OnModelChanged, SetColor, curtime
// calls: CUtlSymbol::String, INextBot::DebugConColorMsg, Action<CDOTA_BaseNPC>::StorePendingEventResult, NextBotManager::IsDebugFilterMatch, __stack_chk_fail
// strings: "%3.2f: %s:%s: %s received EVENT %s\n", "OnModelChanged"
void __fastcall Action<CDOTA_BaseNPC>::OnModelChanged(Action<CDOTA_BaseNPC> *const this)
{
  Action<CDOTA_BaseNPC> *v2; // rbx
  CDOTA_BaseNPC *m_actor; // rdx
  const char *v4; // r15
  __int64 v5; // rax
  const char *v6; // r9
  const char *v7; // r8
  CGlobalVars *v8; // rdx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  double m_flCurrentTime; // xmm0_8
  CDOTA_BaseNPC *v11; // rax
  __int64 i; // rbx
  INextBot *v13; // r15
  CGlobalVars *v14; // [rsp+18h] [rbp-98h]
  const char *v15; // [rsp+20h] [rbp-90h]
  const char *v16; // [rsp+28h] [rbp-88h]
  CDOTA_BaseNPC *v17; // [rsp+28h] [rbp-88h]
  EventDesiredResult<CDOTA_BaseNPC> _result; // [rsp+30h] [rbp-80h] BYREF
  EventDesiredResult<CDOTA_BaseNPC> v19; // [rsp+50h] [rbp-60h] BYREF
  Color color; // [rsp+70h] [rbp-40h] BYREF
  unsigned __int64 v21; // [rsp+78h] [rbp-38h]

  v21 = __readfsqword(0x28u);
  if ( this->m_isStarted )
  {
    _result.m_type = ActionResultType::CONTINUE;
    v2 = this;
    _result.m_action = 0;
    _result.m_reason = 0;
    _result.m_priority = EventResultPriorityType::RESULT_TRY;
    do
    {
      m_actor = this->m_actor;
      if ( m_actor != 0 )
      {
        if ( SLOBYTE(g_NextBotManager.m_debugType) < 0
          && (v13 = &m_actor->INextBot,
              v17 = this->m_actor,
              NextBotManager::IsDebugFilterMatch(&g_NextBotManager, &m_actor->INextBot))
          && (*(v17->_vptr_INextBotEventResponder + 96))(v13, 128) != 0
          || NextBotDebugHistory.m_pParent->m_Value.m_nValue != 0 )
        {
          v4 = (*(v2->_vptr_INextBotEventResponder + 64))(v2);
          v16 = CUtlSymbol::String(&this->m_behavior->m_name);
          v5 = (*(this->m_actor->_vptr_INextBotEventResponder + 97))(&this->m_actor->INextBot);
          v6 = v16;
          v7 = v5;
          v8 = gpGlobals;
          if ( gpGlobals != 0 )
          {
            if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
            {
              m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
              if ( m_pfnWarningFunc != 0 )
              {
                v14 = gpGlobals;
                v15 = v7;
                m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
                v8 = v14;
                v7 = v15;
                v6 = v16;
              }
            }
            m_flCurrentTime = v8->m_flCurrentTime;
          }
          else
          {
            m_flCurrentTime = 0.0;
          }
          v11 = this->m_actor;
          memset(&color, 100, 3);
          color._color[3] = -1;
          INextBot::DebugConColorMsg(
            &v11->INextBot,
            NextBotDebugType::NEXTBOT_EVENTS,
            &color,
            "%3.2f: %s:%s: %s received EVENT %s\n",
            m_flCurrentTime,
            v7,
            v6,
            v4,
            "OnModelChanged");
        }
        m_actor = this->m_actor;
      }
      (*(v2->_vptr_INextBotEventResponder + 92))(&v19, v2, m_actor);
      _result = v19;
      if ( v19.m_type != ActionResultType::CONTINUE )
        break;
      v2 = v2->m_buriedUnderMe;
    }
    while ( v2 != 0 );
    Action<CDOTA_BaseNPC>::StorePendingEventResult(this, v2, "OnModelChanged", &_result);
    for ( i = (*(this->_vptr_INextBotEventResponder + 3))(this);
          i != 0;
          i = (*(this->_vptr_INextBotEventResponder + 4))(this, i) )
    {
      (*(*i + 208LL))(i);
    }
  }
}


// Action<CSimpleBot>::OnModelChanged  (line 853, @0x0000000002f27d10, libserver.so)  // inlines: Color, DebugReceivedEvent, EventDesiredResult, GetBool, GetInt, GetName, IActionResult, IsDebugFilterMatch, IsDebugging, OnModelChanged, SetColor, curtime
// calls: CUtlSymbol::String, INextBot::DebugConColorMsg, Action<CSimpleBot>::StorePendingEventResult, NextBotManager::IsDebugFilterMatch, __stack_chk_fail
// strings: "%3.2f: %s:%s: %s received EVENT %s\n", "OnModelChanged"
void __fastcall Action<CSimpleBot>::OnModelChanged(Action<CSimpleBot> *const this)
{
  Action<CSimpleBot> *v2; // rbx
  CSimpleBot *m_actor; // rdx
  INextBot *v4; // r15
  const char *v5; // r15
  const char *v6; // r14
  const char *v7; // r8
  CGlobalVars *v8; // rdx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  double m_flCurrentTime; // xmm0_8
  CSimpleBot *v11; // rax
  __int64 i; // rbx
  bool IsDebugFilterMatch; // al
  CGlobalVars *v14; // [rsp+18h] [rbp-98h]
  const char *v15; // [rsp+20h] [rbp-90h]
  CSimpleBot *v16; // [rsp+20h] [rbp-90h]
  EventDesiredResult<CSimpleBot> _result; // [rsp+30h] [rbp-80h] BYREF
  EventDesiredResult<CSimpleBot> v18; // [rsp+50h] [rbp-60h] BYREF
  Color v19; // [rsp+70h] [rbp-40h] BYREF
  unsigned __int64 v20; // [rsp+78h] [rbp-38h]

  v20 = __readfsqword(0x28u);
  if ( this->m_isStarted )
  {
    _result.m_type = ActionResultType::CONTINUE;
    v2 = this;
    _result.m_action = 0;
    _result.m_reason = 0;
    _result.m_priority = EventResultPriorityType::RESULT_TRY;
    do
    {
      m_actor = this->m_actor;
      if ( m_actor != 0 )
      {
        if ( SLOBYTE(g_NextBotManager.m_debugType) < 0
          && ((v4 = &m_actor->INextBot, g_NextBotManager.m_debugFilterList.m_Size == 0)
           || (v16 = this->m_actor,
               IsDebugFilterMatch = NextBotManager::IsDebugFilterMatch(&g_NextBotManager, &m_actor->INextBot),
               m_actor = v16,
               IsDebugFilterMatch))
          && (*(m_actor->_vptr_INextBotEventResponder + 96))(v4, 128) != 0
          || NextBotDebugHistory.m_pParent->m_Value.m_nValue != 0 )
        {
          v5 = (*(v2->_vptr_INextBotEventResponder + 64))(v2);
          v6 = CUtlSymbol::String(&this->m_behavior->m_name);
          v7 = (*(this->m_actor->_vptr_INextBotEventResponder + 97))(&this->m_actor->INextBot);
          v8 = gpGlobals;
          if ( gpGlobals != 0 )
          {
            if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
            {
              m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
              if ( m_pfnWarningFunc != 0 )
              {
                v14 = gpGlobals;
                v15 = v7;
                m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
                v8 = v14;
                v7 = v15;
              }
            }
            m_flCurrentTime = v8->m_flCurrentTime;
          }
          else
          {
            m_flCurrentTime = 0.0;
          }
          v11 = this->m_actor;
          memset(&v19, 100, 3);
          v19._color[3] = -1;
          INextBot::DebugConColorMsg(
            &v11->INextBot,
            NextBotDebugType::NEXTBOT_EVENTS,
            &v19,
            "%3.2f: %s:%s: %s received EVENT %s\n",
            m_flCurrentTime,
            v7,
            v6,
            v5,
            "OnModelChanged");
        }
        m_actor = this->m_actor;
      }
      (*(v2->_vptr_INextBotEventResponder + 92))(&v18, v2, m_actor);
      _result = v18;
      if ( v18.m_type != ActionResultType::CONTINUE )
        break;
      v2 = v2->m_buriedUnderMe;
    }
    while ( v2 != 0 );
    Action<CSimpleBot>::StorePendingEventResult(this, v2, "OnModelChanged", &_result);
    for ( i = (*(this->_vptr_INextBotEventResponder + 3))(this);
          i != 0;
          i = (*(this->_vptr_INextBotEventResponder + 4))(this, i) )
    {
      (*(*i + 208LL))(i);
    }
  }
}


// Action<CDOTA_BaseNPC>::OnPickUp  (line 854, @0x00000000028885b0, libserver.so)  // inlines: EventDesiredResult, IActionResult, OnPickUp
// calls: Action<CDOTA_BaseNPC>::DebugReceivedEvent, Action<CDOTA_BaseNPC>::StorePendingEventResult
// strings: "OnPickUp"
void __fastcall Action<CDOTA_BaseNPC>::OnPickUp(
        Action<CDOTA_BaseNPC> *const this,
        CBaseEntity *item,
        CBaseCombatCharacter *giver)
{
  Action<CDOTA_BaseNPC> *v6; // rbx
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rsi
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 i; // rbx
  EventDesiredResult<CDOTA_BaseNPC> _result; // [rsp+0h] [rbp-70h] BYREF
  EventDesiredResult<CDOTA_BaseNPC> v15; // [rsp+20h] [rbp-50h] BYREF

  if ( this->m_isStarted )
  {
    _result.m_type = ActionResultType::CONTINUE;
    _result.m_action = 0;
    v6 = this;
    _result.m_reason = 0;
    _result.m_priority = EventResultPriorityType::RESULT_TRY;
    do
    {
      Action<CDOTA_BaseNPC>::DebugReceivedEvent(this, v6, "OnPickUp");
      (*(v6->_vptr_INextBotEventResponder + 93))(
        &v15,
        v6,
        this->m_actor,
        item,
        giver,
        v7,
        *&_result.m_type,
        _result.m_action,
        _result.m_reason,
        _result.m_priority);
      _result = v15;
      if ( v15.m_type != ActionResultType::CONTINUE )
        break;
      v6 = v6->m_buriedUnderMe;
    }
    while ( v6 != 0 );
    Action<CDOTA_BaseNPC>::StorePendingEventResult(this, v6, "OnPickUp", &_result);
    for ( i = (*(this->_vptr_INextBotEventResponder + 3))(
                this,
                v10,
                v8,
                v9,
                v11,
                v12,
                *&_result.m_type,
                _result.m_action,
                _result.m_reason,
                _result.m_priority); i != 0; i = (*(this->_vptr_INextBotEventResponder + 4))(this, i) )
      (*(*i + 216LL))(i, item, giver);
  }
}


// Action<CSimpleBot>::OnPickUp  (line 854, @0x0000000002f27fb0, libserver.so)  // inlines: Color, DebugReceivedEvent, EventDesiredResult, GetBool, GetInt, GetName, IActionResult, IsDebugFilterMatch, IsDebugging, OnPickUp, SetColor, curtime
// calls: CUtlSymbol::String, INextBot::DebugConColorMsg, Action<CSimpleBot>::StorePendingEventResult, NextBotManager::IsDebugFilterMatch, __stack_chk_fail
// strings: "%3.2f: %s:%s: %s received EVENT %s\n", "OnPickUp"
void __fastcall Action<CSimpleBot>::OnPickUp(
        Action<CSimpleBot> *const this,
        CBaseEntity *item,
        CBaseCombatCharacter *giver)
{
  Action<CSimpleBot> *v6; // r14
  CSimpleBot *m_actor; // rdx
  INextBot *v8; // r15
  const char *v9; // r15
  __int64 v10; // rax
  const char *v11; // r9
  const char *v12; // r8
  CGlobalVars *v13; // rdx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  double m_flCurrentTime; // xmm0_8
  CSimpleBot *v16; // rax
  __int64 i; // r14
  bool IsDebugFilterMatch; // al
  CGlobalVars *v19; // [rsp+18h] [rbp-A8h]
  const char *v20; // [rsp+20h] [rbp-A0h]
  const char *v21; // [rsp+30h] [rbp-90h]
  CSimpleBot *v22; // [rsp+30h] [rbp-90h]
  EventDesiredResult<CSimpleBot> _result; // [rsp+40h] [rbp-80h] BYREF
  EventDesiredResult<CSimpleBot> v24; // [rsp+60h] [rbp-60h] BYREF
  Color v25; // [rsp+80h] [rbp-40h] BYREF
  unsigned __int64 v26; // [rsp+88h] [rbp-38h]

  v26 = __readfsqword(0x28u);
  if ( this->m_isStarted )
  {
    v6 = this;
    _result.m_type = ActionResultType::CONTINUE;
    _result.m_action = 0;
    _result.m_reason = 0;
    _result.m_priority = EventResultPriorityType::RESULT_TRY;
    do
    {
      m_actor = this->m_actor;
      if ( m_actor != 0 )
      {
        if ( SLOBYTE(g_NextBotManager.m_debugType) < 0
          && ((v8 = &m_actor->INextBot, g_NextBotManager.m_debugFilterList.m_Size == 0)
           || (v22 = this->m_actor,
               IsDebugFilterMatch = NextBotManager::IsDebugFilterMatch(&g_NextBotManager, &m_actor->INextBot),
               m_actor = v22,
               IsDebugFilterMatch))
          && (*(m_actor->_vptr_INextBotEventResponder + 96))(v8, 128) != 0
          || NextBotDebugHistory.m_pParent->m_Value.m_nValue != 0 )
        {
          v9 = (*(v6->_vptr_INextBotEventResponder + 64))(v6);
          v21 = CUtlSymbol::String(&this->m_behavior->m_name);
          v10 = (*(this->m_actor->_vptr_INextBotEventResponder + 97))(&this->m_actor->INextBot);
          v11 = v21;
          v12 = v10;
          v13 = gpGlobals;
          if ( gpGlobals != 0 )
          {
            if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
            {
              m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
              if ( m_pfnWarningFunc != 0 )
              {
                v19 = gpGlobals;
                v20 = v12;
                m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
                v13 = v19;
                v12 = v20;
                v11 = v21;
              }
            }
            m_flCurrentTime = v13->m_flCurrentTime;
          }
          else
          {
            m_flCurrentTime = 0.0;
          }
          v16 = this->m_actor;
          memset(&v25, 100, 3);
          v25._color[3] = -1;
          INextBot::DebugConColorMsg(
            &v16->INextBot,
            NextBotDebugType::NEXTBOT_EVENTS,
            &v25,
            "%3.2f: %s:%s: %s received EVENT %s\n",
            m_flCurrentTime,
            v12,
            v11,
            v9,
            "OnPickUp");
        }
        m_actor = this->m_actor;
      }
      (*(v6->_vptr_INextBotEventResponder + 93))(&v24, v6, m_actor, item, giver);
      _result = v24;
      if ( v24.m_type != ActionResultType::CONTINUE )
        break;
      v6 = v6->m_buriedUnderMe;
    }
    while ( v6 != 0 );
    Action<CSimpleBot>::StorePendingEventResult(this, v6, "OnPickUp", &_result);
    for ( i = (*(this->_vptr_INextBotEventResponder + 3))(this);
          i != 0;
          i = (*(this->_vptr_INextBotEventResponder + 4))(this, i) )
    {
      (*(*i + 216LL))(i, item, giver);
    }
  }
}


// Action<CDOTA_BaseNPC>::OnDrop  (line 855, @0x00000000028886c0, libserver.so)  // inlines: EventDesiredResult, IActionResult, OnDrop
// calls: Action<CDOTA_BaseNPC>::DebugReceivedEvent, Action<CDOTA_BaseNPC>::StorePendingEventResult
// strings: "OnDrop"
void __fastcall Action<CDOTA_BaseNPC>::OnDrop(Action<CDOTA_BaseNPC> *const this, CBaseEntity *item)
{
  Action<CDOTA_BaseNPC> *v4; // rbx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rsi
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 i; // rbx
  EventDesiredResult<CDOTA_BaseNPC> _result; // [rsp+0h] [rbp-60h] BYREF
  EventDesiredResult<CDOTA_BaseNPC> v14; // [rsp+20h] [rbp-40h] BYREF

  if ( this->m_isStarted )
  {
    _result.m_type = ActionResultType::CONTINUE;
    v4 = this;
    _result.m_action = 0;
    _result.m_reason = 0;
    _result.m_priority = EventResultPriorityType::RESULT_TRY;
    do
    {
      Action<CDOTA_BaseNPC>::DebugReceivedEvent(this, v4, "OnDrop");
      (*(v4->_vptr_INextBotEventResponder + 94))(
        &v14,
        v4,
        this->m_actor,
        item,
        v5,
        v6,
        *&_result.m_type,
        _result.m_action,
        _result.m_reason,
        _result.m_priority);
      _result = v14;
      if ( v14.m_type != ActionResultType::CONTINUE )
        break;
      v4 = v4->m_buriedUnderMe;
    }
    while ( v4 != 0 );
    Action<CDOTA_BaseNPC>::StorePendingEventResult(this, v4, "OnDrop", &_result);
    for ( i = (*(this->_vptr_INextBotEventResponder + 3))(
                this,
                v9,
                v7,
                v8,
                v10,
                v11,
                *&_result.m_type,
                _result.m_action,
                _result.m_reason,
                _result.m_priority); i != 0; i = (*(this->_vptr_INextBotEventResponder + 4))(this, i) )
      (*(*i + 224LL))(i, item);
  }
}


// Action<CSimpleBot>::OnDrop  (line 855, @0x0000000002f28280, libserver.so)  // inlines: Color, DebugReceivedEvent, EventDesiredResult, GetBool, GetInt, GetName, IActionResult, IsDebugFilterMatch, IsDebugging, OnDrop, SetColor, curtime
// calls: CUtlSymbol::String, INextBot::DebugConColorMsg, Action<CSimpleBot>::StorePendingEventResult, NextBotManager::IsDebugFilterMatch, __stack_chk_fail
// strings: "%3.2f: %s:%s: %s received EVENT %s\n", "OnDrop"
void __fastcall Action<CSimpleBot>::OnDrop(Action<CSimpleBot> *const this, CBaseEntity *item)
{
  Action<CSimpleBot> *v4; // r15
  CSimpleBot *m_actor; // rdx
  INextBot *v6; // r14
  const char *v7; // r14
  __int64 v8; // rax
  const char *v9; // r9
  const char *v10; // r8
  CGlobalVars *v11; // rdx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  double m_flCurrentTime; // xmm0_8
  CSimpleBot *v14; // rax
  __int64 i; // r13
  bool IsDebugFilterMatch; // al
  CGlobalVars *v17; // [rsp+10h] [rbp-A0h]
  const char *v18; // [rsp+18h] [rbp-98h]
  const char *v19; // [rsp+28h] [rbp-88h]
  CSimpleBot *v20; // [rsp+28h] [rbp-88h]
  EventDesiredResult<CSimpleBot> _result; // [rsp+30h] [rbp-80h] BYREF
  EventDesiredResult<CSimpleBot> v22; // [rsp+50h] [rbp-60h] BYREF
  Color v23; // [rsp+70h] [rbp-40h] BYREF
  unsigned __int64 v24; // [rsp+78h] [rbp-38h]

  v24 = __readfsqword(0x28u);
  if ( this->m_isStarted )
  {
    _result.m_type = ActionResultType::CONTINUE;
    _result.m_action = 0;
    v4 = this;
    _result.m_reason = 0;
    _result.m_priority = EventResultPriorityType::RESULT_TRY;
    do
    {
      m_actor = this->m_actor;
      if ( m_actor != 0 )
      {
        if ( SLOBYTE(g_NextBotManager.m_debugType) < 0
          && ((v6 = &m_actor->INextBot, g_NextBotManager.m_debugFilterList.m_Size == 0)
           || (v20 = this->m_actor,
               IsDebugFilterMatch = NextBotManager::IsDebugFilterMatch(&g_NextBotManager, &m_actor->INextBot),
               m_actor = v20,
               IsDebugFilterMatch))
          && (*(m_actor->_vptr_INextBotEventResponder + 96))(v6, 128) != 0
          || NextBotDebugHistory.m_pParent->m_Value.m_nValue != 0 )
        {
          v7 = (*(v4->_vptr_INextBotEventResponder + 64))(v4);
          v19 = CUtlSymbol::String(&this->m_behavior->m_name);
          v8 = (*(this->m_actor->_vptr_INextBotEventResponder + 97))(&this->m_actor->INextBot);
          v9 = v19;
          v10 = v8;
          v11 = gpGlobals;
          if ( gpGlobals != 0 )
          {
            if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
            {
              m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
              if ( m_pfnWarningFunc != 0 )
              {
                v17 = gpGlobals;
                v18 = v10;
                m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
                v11 = v17;
                v10 = v18;
                v9 = v19;
              }
            }
            m_flCurrentTime = v11->m_flCurrentTime;
          }
          else
          {
            m_flCurrentTime = 0.0;
          }
          v14 = this->m_actor;
          memset(&v23, 100, 3);
          v23._color[3] = -1;
          INextBot::DebugConColorMsg(
            &v14->INextBot,
            NextBotDebugType::NEXTBOT_EVENTS,
            &v23,
            "%3.2f: %s:%s: %s received EVENT %s\n",
            m_flCurrentTime,
            v10,
            v9,
            v7,
            "OnDrop");
        }
        m_actor = this->m_actor;
      }
      (*(v4->_vptr_INextBotEventResponder + 94))(&v22, v4, m_actor, item);
      _result = v22;
      if ( v22.m_type != ActionResultType::CONTINUE )
        break;
      v4 = v4->m_buriedUnderMe;
    }
    while ( v4 != 0 );
    Action<CSimpleBot>::StorePendingEventResult(this, v4, "OnDrop", &_result);
    for ( i = (*(this->_vptr_INextBotEventResponder + 3))(this);
          i != 0;
          i = (*(this->_vptr_INextBotEventResponder + 4))(this, i) )
    {
      (*(*i + 224LL))(i, item);
    }
  }
}


// Action<CDOTA_BaseNPC>::OnActorEmoted  (line 856, @0x00000000028887c0, libserver.so)  // inlines: EventDesiredResult, IActionResult, OnActorEmoted
// calls: Action<CDOTA_BaseNPC>::DebugReceivedEvent, Action<CDOTA_BaseNPC>::StorePendingEventResult
// strings: "OnActorEmoted"
void __fastcall Action<CDOTA_BaseNPC>::OnActorEmoted(
        Action<CDOTA_BaseNPC> *const this,
        CBaseCombatCharacter *emoter,
        int emote)
{
  Action<CDOTA_BaseNPC> *v6; // rbx
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rsi
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 i; // rbx
  EventDesiredResult<CDOTA_BaseNPC> _result; // [rsp+0h] [rbp-70h] BYREF
  EventDesiredResult<CDOTA_BaseNPC> v15; // [rsp+20h] [rbp-50h] BYREF

  if ( this->m_isStarted )
  {
    _result.m_type = ActionResultType::CONTINUE;
    _result.m_action = 0;
    v6 = this;
    _result.m_reason = 0;
    _result.m_priority = EventResultPriorityType::RESULT_TRY;
    do
    {
      Action<CDOTA_BaseNPC>::DebugReceivedEvent(this, v6, "OnActorEmoted");
      (*(v6->_vptr_INextBotEventResponder + 95))(
        &v15,
        v6,
        this->m_actor,
        emoter,
        emote,
        v7,
        *&_result.m_type,
        _result.m_action,
        _result.m_reason,
        _result.m_priority);
      _result = v15;
      if ( v15.m_type != ActionResultType::CONTINUE )
        break;
      v6 = v6->m_buriedUnderMe;
    }
    while ( v6 != 0 );
    Action<CDOTA_BaseNPC>::StorePendingEventResult(this, v6, "OnActorEmoted", &_result);
    for ( i = (*(this->_vptr_INextBotEventResponder + 3))(
                this,
                v10,
                v8,
                v9,
                v11,
                v12,
                *&_result.m_type,
                _result.m_action,
                _result.m_reason,
                _result.m_priority); i != 0; i = (*(this->_vptr_INextBotEventResponder + 4))(this, i) )
      (*(*i + 232LL))(i, emoter, emote);
  }
}


// Action<CSimpleBot>::OnActorEmoted  (line 856, @0x0000000002f28540, libserver.so)  // inlines: Color, DebugReceivedEvent, EventDesiredResult, GetBool, GetInt, GetName, IActionResult, IsDebugFilterMatch, IsDebugging, OnActorEmoted, SetColor, curtime
// calls: CUtlSymbol::String, INextBot::DebugConColorMsg, Action<CSimpleBot>::StorePendingEventResult, NextBotManager::IsDebugFilterMatch, __stack_chk_fail
// strings: "%3.2f: %s:%s: %s received EVENT %s\n", "OnActorEmoted"
void __fastcall Action<CSimpleBot>::OnActorEmoted(
        Action<CSimpleBot> *const this,
        CBaseCombatCharacter *emoter,
        int emote)
{
  Action<CSimpleBot> *v6; // r14
  CSimpleBot *m_actor; // rdx
  INextBot *v8; // r15
  const char *v9; // r15
  __int64 v10; // rax
  const char *v11; // r9
  const char *v12; // r8
  CGlobalVars *v13; // rdx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  double m_flCurrentTime; // xmm0_8
  CSimpleBot *v16; // rax
  __int64 i; // r14
  bool IsDebugFilterMatch; // al
  CGlobalVars *v19; // [rsp+18h] [rbp-A8h]
  const char *v20; // [rsp+20h] [rbp-A0h]
  const char *v21; // [rsp+30h] [rbp-90h]
  CSimpleBot *v22; // [rsp+30h] [rbp-90h]
  EventDesiredResult<CSimpleBot> _result; // [rsp+40h] [rbp-80h] BYREF
  EventDesiredResult<CSimpleBot> v24; // [rsp+60h] [rbp-60h] BYREF
  Color v25; // [rsp+80h] [rbp-40h] BYREF
  unsigned __int64 v26; // [rsp+88h] [rbp-38h]

  v26 = __readfsqword(0x28u);
  if ( this->m_isStarted )
  {
    v6 = this;
    _result.m_type = ActionResultType::CONTINUE;
    _result.m_action = 0;
    _result.m_reason = 0;
    _result.m_priority = EventResultPriorityType::RESULT_TRY;
    do
    {
      m_actor = this->m_actor;
      if ( m_actor != 0 )
      {
        if ( SLOBYTE(g_NextBotManager.m_debugType) < 0
          && ((v8 = &m_actor->INextBot, g_NextBotManager.m_debugFilterList.m_Size == 0)
           || (v22 = this->m_actor,
               IsDebugFilterMatch = NextBotManager::IsDebugFilterMatch(&g_NextBotManager, &m_actor->INextBot),
               m_actor = v22,
               IsDebugFilterMatch))
          && (*(m_actor->_vptr_INextBotEventResponder + 96))(v8, 128) != 0
          || NextBotDebugHistory.m_pParent->m_Value.m_nValue != 0 )
        {
          v9 = (*(v6->_vptr_INextBotEventResponder + 64))(v6);
          v21 = CUtlSymbol::String(&this->m_behavior->m_name);
          v10 = (*(this->m_actor->_vptr_INextBotEventResponder + 97))(&this->m_actor->INextBot);
          v11 = v21;
          v12 = v10;
          v13 = gpGlobals;
          if ( gpGlobals != 0 )
          {
            if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
            {
              m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
              if ( m_pfnWarningFunc != 0 )
              {
                v19 = gpGlobals;
                v20 = v12;
                m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
                v13 = v19;
                v12 = v20;
                v11 = v21;
              }
            }
            m_flCurrentTime = v13->m_flCurrentTime;
          }
          else
          {
            m_flCurrentTime = 0.0;
          }
          v16 = this->m_actor;
          memset(&v25, 100, 3);
          v25._color[3] = -1;
          INextBot::DebugConColorMsg(
            &v16->INextBot,
            NextBotDebugType::NEXTBOT_EVENTS,
            &v25,
            "%3.2f: %s:%s: %s received EVENT %s\n",
            m_flCurrentTime,
            v12,
            v11,
            v9,
            "OnActorEmoted");
        }
        m_actor = this->m_actor;
      }
      (*(v6->_vptr_INextBotEventResponder + 95))(&v24, v6, m_actor, emoter, emote);
      _result = v24;
      if ( v24.m_type != ActionResultType::CONTINUE )
        break;
      v6 = v6->m_buriedUnderMe;
    }
    while ( v6 != 0 );
    Action<CSimpleBot>::StorePendingEventResult(this, v6, "OnActorEmoted", &_result);
    for ( i = (*(this->_vptr_INextBotEventResponder + 3))(this);
          i != 0;
          i = (*(this->_vptr_INextBotEventResponder + 4))(this, i) )
    {
      (*(*i + 232LL))(i, emoter, emote);
    }
  }
}


// Action<CDOTA_BaseNPC>::OnCommandAttack  (line 858, @0x00000000028888d0, libserver.so)  // inlines: EventDesiredResult, IActionResult, OnCommandAttack
// calls: Action<CDOTA_BaseNPC>::DebugReceivedEvent, Action<CDOTA_BaseNPC>::StorePendingEventResult
// strings: "OnCommandAttack"
void __fastcall Action<CDOTA_BaseNPC>::OnCommandAttack(Action<CDOTA_BaseNPC> *const this, CBaseEntity *victim)
{
  Action<CDOTA_BaseNPC> *v4; // rbx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rsi
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 i; // rbx
  EventDesiredResult<CDOTA_BaseNPC> _result; // [rsp+0h] [rbp-60h] BYREF
  EventDesiredResult<CDOTA_BaseNPC> v14; // [rsp+20h] [rbp-40h] BYREF

  if ( this->m_isStarted )
  {
    _result.m_type = ActionResultType::CONTINUE;
    v4 = this;
    _result.m_action = 0;
    _result.m_reason = 0;
    _result.m_priority = EventResultPriorityType::RESULT_TRY;
    do
    {
      Action<CDOTA_BaseNPC>::DebugReceivedEvent(this, v4, "OnCommandAttack");
      (*(v4->_vptr_INextBotEventResponder + 96))(
        &v14,
        v4,
        this->m_actor,
        victim,
        v5,
        v6,
        *&_result.m_type,
        _result.m_action,
        _result.m_reason,
        _result.m_priority);
      _result = v14;
      if ( v14.m_type != ActionResultType::CONTINUE )
        break;
      v4 = v4->m_buriedUnderMe;
    }
    while ( v4 != 0 );
    Action<CDOTA_BaseNPC>::StorePendingEventResult(this, v4, "OnCommandAttack", &_result);
    for ( i = (*(this->_vptr_INextBotEventResponder + 3))(
                this,
                v9,
                v7,
                v8,
                v10,
                v11,
                *&_result.m_type,
                _result.m_action,
                _result.m_reason,
                _result.m_priority); i != 0; i = (*(this->_vptr_INextBotEventResponder + 4))(this, i) )
      (*(*i + 240LL))(i, victim);
  }
}


// Action<CSimpleBot>::OnCommandAttack  (line 858, @0x0000000002f28810, libserver.so)  // inlines: Color, DebugReceivedEvent, EventDesiredResult, GetBool, GetInt, GetName, IActionResult, IsDebugFilterMatch, IsDebugging, OnCommandAttack, SetColor, curtime
// calls: CUtlSymbol::String, INextBot::DebugConColorMsg, Action<CSimpleBot>::StorePendingEventResult, NextBotManager::IsDebugFilterMatch, __stack_chk_fail
// strings: "%3.2f: %s:%s: %s received EVENT %s\n", "OnCommandAttack"
void __fastcall Action<CSimpleBot>::OnCommandAttack(Action<CSimpleBot> *const this, CBaseEntity *victim)
{
  Action<CSimpleBot> *v4; // r15
  CSimpleBot *m_actor; // rdx
  INextBot *v6; // r14
  const char *v7; // r14
  __int64 v8; // rax
  const char *v9; // r9
  const char *v10; // r8
  CGlobalVars *v11; // rdx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  double m_flCurrentTime; // xmm0_8
  CSimpleBot *v14; // rax
  __int64 i; // r13
  bool IsDebugFilterMatch; // al
  CGlobalVars *v17; // [rsp+10h] [rbp-A0h]
  const char *v18; // [rsp+18h] [rbp-98h]
  const char *v19; // [rsp+28h] [rbp-88h]
  CSimpleBot *v20; // [rsp+28h] [rbp-88h]
  EventDesiredResult<CSimpleBot> _result; // [rsp+30h] [rbp-80h] BYREF
  EventDesiredResult<CSimpleBot> v22; // [rsp+50h] [rbp-60h] BYREF
  Color v23; // [rsp+70h] [rbp-40h] BYREF
  unsigned __int64 v24; // [rsp+78h] [rbp-38h]

  v24 = __readfsqword(0x28u);
  if ( this->m_isStarted )
  {
    _result.m_type = ActionResultType::CONTINUE;
    _result.m_action = 0;
    v4 = this;
    _result.m_reason = 0;
    _result.m_priority = EventResultPriorityType::RESULT_TRY;
    do
    {
      m_actor = this->m_actor;
      if ( m_actor != 0 )
      {
        if ( SLOBYTE(g_NextBotManager.m_debugType) < 0
          && ((v6 = &m_actor->INextBot, g_NextBotManager.m_debugFilterList.m_Size == 0)
           || (v20 = this->m_actor,
               IsDebugFilterMatch = NextBotManager::IsDebugFilterMatch(&g_NextBotManager, &m_actor->INextBot),
               m_actor = v20,
               IsDebugFilterMatch))
          && (*(m_actor->_vptr_INextBotEventResponder + 96))(v6, 128) != 0
          || NextBotDebugHistory.m_pParent->m_Value.m_nValue != 0 )
        {
          v7 = (*(v4->_vptr_INextBotEventResponder + 64))(v4);
          v19 = CUtlSymbol::String(&this->m_behavior->m_name);
          v8 = (*(this->m_actor->_vptr_INextBotEventResponder + 97))(&this->m_actor->INextBot);
          v9 = v19;
          v10 = v8;
          v11 = gpGlobals;
          if ( gpGlobals != 0 )
          {
            if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
            {
              m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
              if ( m_pfnWarningFunc != 0 )
              {
                v17 = gpGlobals;
                v18 = v10;
                m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
                v11 = v17;
                v10 = v18;
                v9 = v19;
              }
            }
            m_flCurrentTime = v11->m_flCurrentTime;
          }
          else
          {
            m_flCurrentTime = 0.0;
          }
          v14 = this->m_actor;
          memset(&v23, 100, 3);
          v23._color[3] = -1;
          INextBot::DebugConColorMsg(
            &v14->INextBot,
            NextBotDebugType::NEXTBOT_EVENTS,
            &v23,
            "%3.2f: %s:%s: %s received EVENT %s\n",
            m_flCurrentTime,
            v10,
            v9,
            v7,
            "OnCommandAttack");
        }
        m_actor = this->m_actor;
      }
      (*(v4->_vptr_INextBotEventResponder + 96))(&v22, v4, m_actor, victim);
      _result = v22;
      if ( v22.m_type != ActionResultType::CONTINUE )
        break;
      v4 = v4->m_buriedUnderMe;
    }
    while ( v4 != 0 );
    Action<CSimpleBot>::StorePendingEventResult(this, v4, "OnCommandAttack", &_result);
    for ( i = (*(this->_vptr_INextBotEventResponder + 3))(this);
          i != 0;
          i = (*(this->_vptr_INextBotEventResponder + 4))(this, i) )
    {
      (*(*i + 240LL))(i, victim);
    }
  }
}


// Action<CDOTA_BaseNPC>::OnCommandApproach  (line 859, @0x00000000028889d0, libserver.so)  // inlines: EventDesiredResult, IActionResult, OnCommandApproach
// calls: Action<CDOTA_BaseNPC>::DebugReceivedEvent, Action<CDOTA_BaseNPC>::StorePendingEventResult
// strings: "OnCommandApproach"
void __fastcall Action<CDOTA_BaseNPC>::OnCommandApproach(
        Action<CDOTA_BaseNPC> *const this,
        const Vector *const pos,
        float a3,
        float range)
{
  Action<CDOTA_BaseNPC> *v6; // rbx
  __int64 i; // rbx
  EventDesiredResult<CDOTA_BaseNPC> _result; // [rsp+10h] [rbp-60h] BYREF
  EventDesiredResult<CDOTA_BaseNPC> v10; // [rsp+30h] [rbp-40h] BYREF

  if ( this->m_isStarted )
  {
    _result.m_type = ActionResultType::CONTINUE;
    v6 = this;
    _result.m_action = 0;
    _result.m_reason = 0;
    _result.m_priority = EventResultPriorityType::RESULT_TRY;
    do
    {
      Action<CDOTA_BaseNPC>::DebugReceivedEvent(this, v6, "OnCommandApproach");
      (*(v6->_vptr_INextBotEventResponder + 97))(&v10, v6, this->m_actor, pos, a3);
      _result = v10;
      if ( v10.m_type != ActionResultType::CONTINUE )
        break;
      v6 = v6->m_buriedUnderMe;
    }
    while ( v6 != 0 );
    Action<CDOTA_BaseNPC>::StorePendingEventResult(this, v6, "OnCommandApproach", &_result);
    for ( i = (*(this->_vptr_INextBotEventResponder + 3))(this);
          i != 0;
          i = (*(this->_vptr_INextBotEventResponder + 4))(this, i) )
    {
      (*(*i + 248LL))(i, pos, a3);
    }
  }
}


// Action<CSimpleBot>::OnCommandApproach  (line 859, @0x0000000002f28ad0, libserver.so)  // inlines: Color, DebugReceivedEvent, EventDesiredResult, GetBool, GetInt, GetName, IActionResult, IsDebugFilterMatch, IsDebugging, OnCommandApproach, SetColor, curtime
// calls: CUtlSymbol::String, INextBot::DebugConColorMsg, Action<CSimpleBot>::StorePendingEventResult, NextBotManager::IsDebugFilterMatch, __stack_chk_fail
// strings: "%3.2f: %s:%s: %s received EVENT %s\n", "OnCommandApproach"
void __fastcall Action<CSimpleBot>::OnCommandApproach(
        Action<CSimpleBot> *const this,
        const Vector *const pos,
        double a3,
        double range)
{
  Action<CSimpleBot> *v6; // r15
  CSimpleBot *m_actor; // rdx
  INextBot *v8; // r14
  const char *v9; // r14
  __int64 v10; // rax
  const char *v11; // r9
  const char *v12; // r8
  CGlobalVars *v13; // rdx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  double m_flCurrentTime; // xmm0_8
  CSimpleBot *v16; // rax
  __int64 i; // r13
  bool IsDebugFilterMatch; // al
  CGlobalVars *v19; // [rsp+18h] [rbp-A8h]
  const char *v20; // [rsp+20h] [rbp-A0h]
  const char *v21; // [rsp+30h] [rbp-90h]
  CSimpleBot *v22; // [rsp+30h] [rbp-90h]
  float rangea; // [rsp+3Ch] [rbp-84h]
  EventDesiredResult<CSimpleBot> _result; // [rsp+40h] [rbp-80h] BYREF
  EventDesiredResult<CSimpleBot> v25; // [rsp+60h] [rbp-60h] BYREF
  Color v26; // [rsp+80h] [rbp-40h] BYREF
  unsigned __int64 v27; // [rsp+88h] [rbp-38h]

  rangea = *&a3;
  v27 = __readfsqword(0x28u);
  if ( this->m_isStarted )
  {
    _result.m_type = ActionResultType::CONTINUE;
    _result.m_action = 0;
    v6 = this;
    _result.m_reason = 0;
    _result.m_priority = EventResultPriorityType::RESULT_TRY;
    do
    {
      m_actor = this->m_actor;
      if ( m_actor != 0 )
      {
        if ( SLOBYTE(g_NextBotManager.m_debugType) < 0
          && ((v8 = &m_actor->INextBot, g_NextBotManager.m_debugFilterList.m_Size == 0)
           || (v22 = this->m_actor,
               IsDebugFilterMatch = NextBotManager::IsDebugFilterMatch(&g_NextBotManager, &m_actor->INextBot),
               m_actor = v22,
               IsDebugFilterMatch))
          && (*(m_actor->_vptr_INextBotEventResponder + 96))(v8, 128, a3, range) != 0
          || NextBotDebugHistory.m_pParent->m_Value.m_nValue != 0 )
        {
          v9 = (*(v6->_vptr_INextBotEventResponder + 64))(v6);
          v21 = CUtlSymbol::String(&this->m_behavior->m_name);
          v10 = (*(this->m_actor->_vptr_INextBotEventResponder + 97))(&this->m_actor->INextBot);
          v11 = v21;
          v12 = v10;
          v13 = gpGlobals;
          if ( gpGlobals != 0 )
          {
            if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
            {
              m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
              if ( m_pfnWarningFunc != 0 )
              {
                v19 = gpGlobals;
                v20 = v12;
                m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
                v13 = v19;
                v12 = v20;
                v11 = v21;
              }
            }
            m_flCurrentTime = v13->m_flCurrentTime;
          }
          else
          {
            m_flCurrentTime = 0.0;
          }
          v16 = this->m_actor;
          memset(&v26, 100, 3);
          v26._color[3] = -1;
          INextBot::DebugConColorMsg(
            &v16->INextBot,
            NextBotDebugType::NEXTBOT_EVENTS,
            &v26,
            "%3.2f: %s:%s: %s received EVENT %s\n",
            m_flCurrentTime,
            v12,
            v11,
            v9,
            "OnCommandApproach");
        }
        m_actor = this->m_actor;
      }
      (*(v6->_vptr_INextBotEventResponder + 97))(&v25, v6, m_actor, pos, rangea, range);
      _result = v25;
      if ( v25.m_type != ActionResultType::CONTINUE )
        break;
      v6 = v6->m_buriedUnderMe;
    }
    while ( v6 != 0 );
    Action<CSimpleBot>::StorePendingEventResult(this, v6, "OnCommandApproach", &_result);
    for ( i = (*(this->_vptr_INextBotEventResponder + 3))(this);
          i != 0;
          i = (*(this->_vptr_INextBotEventResponder + 4))(this, i) )
    {
      (*(*i + 248LL))(i, pos, rangea);
    }
  }
}


// Action<CDOTA_BaseNPC>::OnCommandApproach  (line 860, @0x0000000002888ae0, libserver.so)  // inlines: EventDesiredResult, IActionResult, OnCommandApproach
// calls: Action<CDOTA_BaseNPC>::DebugReceivedEvent, Action<CDOTA_BaseNPC>::StorePendingEventResult
// strings: "OnCommandApproach"
void __fastcall Action<CDOTA_BaseNPC>::OnCommandApproach(Action<CDOTA_BaseNPC> *const this, CBaseEntity *goal)
{
  Action<CDOTA_BaseNPC> *v4; // rbx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rsi
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 i; // rbx
  EventDesiredResult<CDOTA_BaseNPC> _result; // [rsp+0h] [rbp-60h] BYREF
  EventDesiredResult<CDOTA_BaseNPC> v14; // [rsp+20h] [rbp-40h] BYREF

  if ( this->m_isStarted )
  {
    _result.m_type = ActionResultType::CONTINUE;
    v4 = this;
    _result.m_action = 0;
    _result.m_reason = 0;
    _result.m_priority = EventResultPriorityType::RESULT_TRY;
    do
    {
      Action<CDOTA_BaseNPC>::DebugReceivedEvent(this, v4, "OnCommandApproach");
      (*(v4->_vptr_INextBotEventResponder + 98))(
        &v14,
        v4,
        this->m_actor,
        goal,
        v5,
        v6,
        *&_result.m_type,
        _result.m_action,
        _result.m_reason,
        _result.m_priority);
      _result = v14;
      if ( v14.m_type != ActionResultType::CONTINUE )
        break;
      v4 = v4->m_buriedUnderMe;
    }
    while ( v4 != 0 );
    Action<CDOTA_BaseNPC>::StorePendingEventResult(this, v4, "OnCommandApproach", &_result);
    for ( i = (*(this->_vptr_INextBotEventResponder + 3))(
                this,
                v9,
                v7,
                v8,
                v10,
                v11,
                *&_result.m_type,
                _result.m_action,
                _result.m_reason,
                _result.m_priority); i != 0; i = (*(this->_vptr_INextBotEventResponder + 4))(this, i) )
      (*(*i + 256LL))(i, goal);
  }
}


// Action<CSimpleBot>::OnCommandApproach  (line 860, @0x0000000002f28da0, libserver.so)  // inlines: Color, DebugReceivedEvent, EventDesiredResult, GetBool, GetInt, GetName, IActionResult, IsDebugFilterMatch, IsDebugging, OnCommandApproach, SetColor, curtime
// calls: CUtlSymbol::String, INextBot::DebugConColorMsg, Action<CSimpleBot>::StorePendingEventResult, NextBotManager::IsDebugFilterMatch, __stack_chk_fail
// strings: "%3.2f: %s:%s: %s received EVENT %s\n", "OnCommandApproach"
void __fastcall Action<CSimpleBot>::OnCommandApproach(Action<CSimpleBot> *const this, CBaseEntity *goal)
{
  Action<CSimpleBot> *v4; // r15
  CSimpleBot *m_actor; // rdx
  INextBot *v6; // r14
  const char *v7; // r14
  __int64 v8; // rax
  const char *v9; // r9
  const char *v10; // r8
  CGlobalVars *v11; // rdx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  double m_flCurrentTime; // xmm0_8
  CSimpleBot *v14; // rax
  __int64 i; // r13
  bool IsDebugFilterMatch; // al
  CGlobalVars *v17; // [rsp+10h] [rbp-A0h]
  const char *v18; // [rsp+18h] [rbp-98h]
  const char *v19; // [rsp+28h] [rbp-88h]
  CSimpleBot *v20; // [rsp+28h] [rbp-88h]
  EventDesiredResult<CSimpleBot> _result; // [rsp+30h] [rbp-80h] BYREF
  EventDesiredResult<CSimpleBot> v22; // [rsp+50h] [rbp-60h] BYREF
  Color v23; // [rsp+70h] [rbp-40h] BYREF
  unsigned __int64 v24; // [rsp+78h] [rbp-38h]

  v24 = __readfsqword(0x28u);
  if ( this->m_isStarted )
  {
    _result.m_type = ActionResultType::CONTINUE;
    _result.m_action = 0;
    v4 = this;
    _result.m_reason = 0;
    _result.m_priority = EventResultPriorityType::RESULT_TRY;
    do
    {
      m_actor = this->m_actor;
      if ( m_actor != 0 )
      {
        if ( SLOBYTE(g_NextBotManager.m_debugType) < 0
          && ((v6 = &m_actor->INextBot, g_NextBotManager.m_debugFilterList.m_Size == 0)
           || (v20 = this->m_actor,
               IsDebugFilterMatch = NextBotManager::IsDebugFilterMatch(&g_NextBotManager, &m_actor->INextBot),
               m_actor = v20,
               IsDebugFilterMatch))
          && (*(m_actor->_vptr_INextBotEventResponder + 96))(v6, 128) != 0
          || NextBotDebugHistory.m_pParent->m_Value.m_nValue != 0 )
        {
          v7 = (*(v4->_vptr_INextBotEventResponder + 64))(v4);
          v19 = CUtlSymbol::String(&this->m_behavior->m_name);
          v8 = (*(this->m_actor->_vptr_INextBotEventResponder + 97))(&this->m_actor->INextBot);
          v9 = v19;
          v10 = v8;
          v11 = gpGlobals;
          if ( gpGlobals != 0 )
          {
            if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
            {
              m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
              if ( m_pfnWarningFunc != 0 )
              {
                v17 = gpGlobals;
                v18 = v10;
                m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
                v11 = v17;
                v10 = v18;
                v9 = v19;
              }
            }
            m_flCurrentTime = v11->m_flCurrentTime;
          }
          else
          {
            m_flCurrentTime = 0.0;
          }
          v14 = this->m_actor;
          memset(&v23, 100, 3);
          v23._color[3] = -1;
          INextBot::DebugConColorMsg(
            &v14->INextBot,
            NextBotDebugType::NEXTBOT_EVENTS,
            &v23,
            "%3.2f: %s:%s: %s received EVENT %s\n",
            m_flCurrentTime,
            v10,
            v9,
            v7,
            "OnCommandApproach");
        }
        m_actor = this->m_actor;
      }
      (*(v4->_vptr_INextBotEventResponder + 98))(&v22, v4, m_actor, goal);
      _result = v22;
      if ( v22.m_type != ActionResultType::CONTINUE )
        break;
      v4 = v4->m_buriedUnderMe;
    }
    while ( v4 != 0 );
    Action<CSimpleBot>::StorePendingEventResult(this, v4, "OnCommandApproach", &_result);
    for ( i = (*(this->_vptr_INextBotEventResponder + 3))(this);
          i != 0;
          i = (*(this->_vptr_INextBotEventResponder + 4))(this, i) )
    {
      (*(*i + 256LL))(i, goal);
    }
  }
}


// Action<CDOTA_BaseNPC>::OnCommandRetreat  (line 861, @0x0000000002888be0, libserver.so)  // inlines: EventDesiredResult, IActionResult, OnCommandRetreat
// calls: Action<CDOTA_BaseNPC>::DebugReceivedEvent, Action<CDOTA_BaseNPC>::StorePendingEventResult
// strings: "OnCommandRetreat"
void __fastcall Action<CDOTA_BaseNPC>::OnCommandRetreat(
        Action<CDOTA_BaseNPC> *const this,
        CBaseEntity *threat,
        float a3,
        float range)
{
  Action<CDOTA_BaseNPC> *v6; // rbx
  __int64 i; // rbx
  EventDesiredResult<CDOTA_BaseNPC> _result; // [rsp+10h] [rbp-60h] BYREF
  EventDesiredResult<CDOTA_BaseNPC> v10; // [rsp+30h] [rbp-40h] BYREF

  if ( this->m_isStarted )
  {
    _result.m_type = ActionResultType::CONTINUE;
    v6 = this;
    _result.m_action = 0;
    _result.m_reason = 0;
    _result.m_priority = EventResultPriorityType::RESULT_TRY;
    do
    {
      Action<CDOTA_BaseNPC>::DebugReceivedEvent(this, v6, "OnCommandRetreat");
      (*(v6->_vptr_INextBotEventResponder + 99))(&v10, v6, this->m_actor, threat, a3);
      _result = v10;
      if ( v10.m_type != ActionResultType::CONTINUE )
        break;
      v6 = v6->m_buriedUnderMe;
    }
    while ( v6 != 0 );
    Action<CDOTA_BaseNPC>::StorePendingEventResult(this, v6, "OnCommandRetreat", &_result);
    for ( i = (*(this->_vptr_INextBotEventResponder + 3))(this);
          i != 0;
          i = (*(this->_vptr_INextBotEventResponder + 4))(this, i) )
    {
      (*(*i + 264LL))(i, threat, a3);
    }
  }
}


// Action<CSimpleBot>::OnCommandRetreat  (line 861, @0x0000000002f29060, libserver.so)  // inlines: Color, DebugReceivedEvent, EventDesiredResult, GetBool, GetInt, GetName, IActionResult, IsDebugFilterMatch, IsDebugging, OnCommandRetreat, SetColor, curtime
// calls: CUtlSymbol::String, INextBot::DebugConColorMsg, Action<CSimpleBot>::StorePendingEventResult, NextBotManager::IsDebugFilterMatch, __stack_chk_fail
// strings: "%3.2f: %s:%s: %s received EVENT %s\n", "OnCommandRetreat"
void __fastcall Action<CSimpleBot>::OnCommandRetreat(
        Action<CSimpleBot> *const this,
        CBaseEntity *threat,
        double a3,
        double range)
{
  Action<CSimpleBot> *v6; // r15
  CSimpleBot *m_actor; // rdx
  INextBot *v8; // r14
  const char *v9; // r14
  __int64 v10; // rax
  const char *v11; // r9
  const char *v12; // r8
  CGlobalVars *v13; // rdx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  double m_flCurrentTime; // xmm0_8
  CSimpleBot *v16; // rax
  __int64 i; // r13
  bool IsDebugFilterMatch; // al
  CGlobalVars *v19; // [rsp+18h] [rbp-A8h]
  const char *v20; // [rsp+20h] [rbp-A0h]
  const char *v21; // [rsp+30h] [rbp-90h]
  CSimpleBot *v22; // [rsp+30h] [rbp-90h]
  float rangea; // [rsp+3Ch] [rbp-84h]
  EventDesiredResult<CSimpleBot> _result; // [rsp+40h] [rbp-80h] BYREF
  EventDesiredResult<CSimpleBot> v25; // [rsp+60h] [rbp-60h] BYREF
  Color v26; // [rsp+80h] [rbp-40h] BYREF
  unsigned __int64 v27; // [rsp+88h] [rbp-38h]

  rangea = *&a3;
  v27 = __readfsqword(0x28u);
  if ( this->m_isStarted )
  {
    _result.m_type = ActionResultType::CONTINUE;
    _result.m_action = 0;
    v6 = this;
    _result.m_reason = 0;
    _result.m_priority = EventResultPriorityType::RESULT_TRY;
    do
    {
      m_actor = this->m_actor;
      if ( m_actor != 0 )
      {
        if ( SLOBYTE(g_NextBotManager.m_debugType) < 0
          && ((v8 = &m_actor->INextBot, g_NextBotManager.m_debugFilterList.m_Size == 0)
           || (v22 = this->m_actor,
               IsDebugFilterMatch = NextBotManager::IsDebugFilterMatch(&g_NextBotManager, &m_actor->INextBot),
               m_actor = v22,
               IsDebugFilterMatch))
          && (*(m_actor->_vptr_INextBotEventResponder + 96))(v8, 128, a3, range) != 0
          || NextBotDebugHistory.m_pParent->m_Value.m_nValue != 0 )
        {
          v9 = (*(v6->_vptr_INextBotEventResponder + 64))(v6);
          v21 = CUtlSymbol::String(&this->m_behavior->m_name);
          v10 = (*(this->m_actor->_vptr_INextBotEventResponder + 97))(&this->m_actor->INextBot);
          v11 = v21;
          v12 = v10;
          v13 = gpGlobals;
          if ( gpGlobals != 0 )
          {
            if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
            {
              m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
              if ( m_pfnWarningFunc != 0 )
              {
                v19 = gpGlobals;
                v20 = v12;
                m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
                v13 = v19;
                v12 = v20;
                v11 = v21;
              }
            }
            m_flCurrentTime = v13->m_flCurrentTime;
          }
          else
          {
            m_flCurrentTime = 0.0;
          }
          v16 = this->m_actor;
          memset(&v26, 100, 3);
          v26._color[3] = -1;
          INextBot::DebugConColorMsg(
            &v16->INextBot,
            NextBotDebugType::NEXTBOT_EVENTS,
            &v26,
            "%3.2f: %s:%s: %s received EVENT %s\n",
            m_flCurrentTime,
            v12,
            v11,
            v9,
            "OnCommandRetreat");
        }
        m_actor = this->m_actor;
      }
      (*(v6->_vptr_INextBotEventResponder + 99))(&v25, v6, m_actor, threat, rangea, range);
      _result = v25;
      if ( v25.m_type != ActionResultType::CONTINUE )
        break;
      v6 = v6->m_buriedUnderMe;
    }
    while ( v6 != 0 );
    Action<CSimpleBot>::StorePendingEventResult(this, v6, "OnCommandRetreat", &_result);
    for ( i = (*(this->_vptr_INextBotEventResponder + 3))(this);
          i != 0;
          i = (*(this->_vptr_INextBotEventResponder + 4))(this, i) )
    {
      (*(*i + 264LL))(i, threat, rangea);
    }
  }
}


// Action<CDOTA_BaseNPC>::OnCommandPause  (line 862, @0x0000000002888cf0, libserver.so)  // inlines: EventDesiredResult, IActionResult, OnCommandPause
// calls: Action<CDOTA_BaseNPC>::DebugReceivedEvent, Action<CDOTA_BaseNPC>::StorePendingEventResult
// strings: "OnCommandPause"
void __fastcall Action<CDOTA_BaseNPC>::OnCommandPause(Action<CDOTA_BaseNPC> *const this, float a2, float duration)
{
  Action<CDOTA_BaseNPC> *v4; // rbx
  __int64 i; // rbx
  EventDesiredResult<CDOTA_BaseNPC> _result; // [rsp+10h] [rbp-60h] BYREF
  EventDesiredResult<CDOTA_BaseNPC> v8; // [rsp+30h] [rbp-40h] BYREF

  if ( this->m_isStarted )
  {
    _result.m_type = ActionResultType::CONTINUE;
    v4 = this;
    _result.m_action = 0;
    _result.m_reason = 0;
    _result.m_priority = EventResultPriorityType::RESULT_TRY;
    do
    {
      Action<CDOTA_BaseNPC>::DebugReceivedEvent(this, v4, "OnCommandPause");
      (*(v4->_vptr_INextBotEventResponder + 100))(&v8, v4, this->m_actor, a2);
      _result = v8;
      if ( v8.m_type != ActionResultType::CONTINUE )
        break;
      v4 = v4->m_buriedUnderMe;
    }
    while ( v4 != 0 );
    Action<CDOTA_BaseNPC>::StorePendingEventResult(this, v4, "OnCommandPause", &_result);
    for ( i = (*(this->_vptr_INextBotEventResponder + 3))(this);
          i != 0;
          i = (*(this->_vptr_INextBotEventResponder + 4))(this, i) )
    {
      (*(*i + 272LL))(i, a2);
    }
  }
}


// Action<CSimpleBot>::OnCommandPause  (line 862, @0x0000000002f29330, libserver.so)  // inlines: Color, DebugReceivedEvent, EventDesiredResult, GetBool, GetInt, GetName, IActionResult, IsDebugFilterMatch, IsDebugging, OnCommandPause, SetColor, curtime
// calls: CUtlSymbol::String, INextBot::DebugConColorMsg, Action<CSimpleBot>::StorePendingEventResult, NextBotManager::IsDebugFilterMatch, __stack_chk_fail
// strings: "%3.2f: %s:%s: %s received EVENT %s\n", "OnCommandPause"
void __fastcall Action<CSimpleBot>::OnCommandPause(Action<CSimpleBot> *const this, double a2, double duration)
{
  Action<CSimpleBot> *v4; // r15
  CSimpleBot *m_actor; // rdx
  INextBot *v6; // r13
  const char *v7; // r13
  const char *v8; // r14
  const char *v9; // r8
  CGlobalVars *v10; // rdx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  double m_flCurrentTime; // xmm0_8
  CSimpleBot *v13; // rax
  __int64 i; // r12
  bool IsDebugFilterMatch; // al
  CGlobalVars *v16; // [rsp+10h] [rbp-A0h]
  const char *v17; // [rsp+18h] [rbp-98h]
  CSimpleBot *v18; // [rsp+18h] [rbp-98h]
  float durationa; // [rsp+2Ch] [rbp-84h]
  EventDesiredResult<CSimpleBot> _result; // [rsp+30h] [rbp-80h] BYREF
  EventDesiredResult<CSimpleBot> v21; // [rsp+50h] [rbp-60h] BYREF
  Color v22; // [rsp+70h] [rbp-40h] BYREF
  unsigned __int64 v23; // [rsp+78h] [rbp-38h]

  durationa = *&a2;
  v23 = __readfsqword(0x28u);
  if ( this->m_isStarted )
  {
    _result.m_type = ActionResultType::CONTINUE;
    v4 = this;
    _result.m_action = 0;
    _result.m_reason = 0;
    _result.m_priority = EventResultPriorityType::RESULT_TRY;
    do
    {
      m_actor = this->m_actor;
      if ( m_actor != 0 )
      {
        if ( SLOBYTE(g_NextBotManager.m_debugType) < 0
          && ((v6 = &m_actor->INextBot, g_NextBotManager.m_debugFilterList.m_Size == 0)
           || (v18 = this->m_actor,
               IsDebugFilterMatch = NextBotManager::IsDebugFilterMatch(&g_NextBotManager, &m_actor->INextBot),
               m_actor = v18,
               IsDebugFilterMatch))
          && (*(m_actor->_vptr_INextBotEventResponder + 96))(v6, 128, a2, duration) != 0
          || NextBotDebugHistory.m_pParent->m_Value.m_nValue != 0 )
        {
          v7 = (*(v4->_vptr_INextBotEventResponder + 64))(v4);
          v8 = CUtlSymbol::String(&this->m_behavior->m_name);
          v9 = (*(this->m_actor->_vptr_INextBotEventResponder + 97))(&this->m_actor->INextBot);
          v10 = gpGlobals;
          if ( gpGlobals != 0 )
          {
            if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
            {
              m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
              if ( m_pfnWarningFunc != 0 )
              {
                v16 = gpGlobals;
                v17 = v9;
                m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
                v10 = v16;
                v9 = v17;
              }
            }
            m_flCurrentTime = v10->m_flCurrentTime;
          }
          else
          {
            m_flCurrentTime = 0.0;
          }
          v13 = this->m_actor;
          memset(&v22, 100, 3);
          v22._color[3] = -1;
          INextBot::DebugConColorMsg(
            &v13->INextBot,
            NextBotDebugType::NEXTBOT_EVENTS,
            &v22,
            "%3.2f: %s:%s: %s received EVENT %s\n",
            m_flCurrentTime,
            v9,
            v8,
            v7,
            "OnCommandPause");
        }
        m_actor = this->m_actor;
      }
      (*(v4->_vptr_INextBotEventResponder + 100))(&v21, v4, m_actor, durationa, duration);
      _result = v21;
      if ( v21.m_type != ActionResultType::CONTINUE )
        break;
      v4 = v4->m_buriedUnderMe;
    }
    while ( v4 != 0 );
    Action<CSimpleBot>::StorePendingEventResult(this, v4, "OnCommandPause", &_result);
    for ( i = (*(this->_vptr_INextBotEventResponder + 3))(this);
          i != 0;
          i = (*(this->_vptr_INextBotEventResponder + 4))(this, i) )
    {
      (*(*i + 272LL))(i, durationa);
    }
  }
}


// Action<CDOTA_BaseNPC>::OnCommandResume  (line 863, @0x0000000002888e00, libserver.so)  // inlines: Color, DebugReceivedEvent, EventDesiredResult, GetBool, GetInt, GetName, IActionResult, IsDebugging, OnCommandResume, SetColor, curtime
// calls: CUtlSymbol::String, INextBot::DebugConColorMsg, Action<CDOTA_BaseNPC>::StorePendingEventResult, NextBotManager::IsDebugFilterMatch, __stack_chk_fail
// strings: "%3.2f: %s:%s: %s received EVENT %s\n", "OnCommandResume"
void __fastcall Action<CDOTA_BaseNPC>::OnCommandResume(Action<CDOTA_BaseNPC> *const this)
{
  Action<CDOTA_BaseNPC> *v2; // rbx
  CDOTA_BaseNPC *m_actor; // rdx
  const char *v4; // r15
  __int64 v5; // rax
  const char *v6; // r9
  const char *v7; // r8
  CGlobalVars *v8; // rdx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  double m_flCurrentTime; // xmm0_8
  CDOTA_BaseNPC *v11; // rax
  __int64 i; // rbx
  INextBot *v13; // r15
  CGlobalVars *v14; // [rsp+18h] [rbp-98h]
  const char *v15; // [rsp+20h] [rbp-90h]
  const char *v16; // [rsp+28h] [rbp-88h]
  CDOTA_BaseNPC *v17; // [rsp+28h] [rbp-88h]
  EventDesiredResult<CDOTA_BaseNPC> _result; // [rsp+30h] [rbp-80h] BYREF
  EventDesiredResult<CDOTA_BaseNPC> v19; // [rsp+50h] [rbp-60h] BYREF
  Color color; // [rsp+70h] [rbp-40h] BYREF
  unsigned __int64 v21; // [rsp+78h] [rbp-38h]

  v21 = __readfsqword(0x28u);
  if ( this->m_isStarted )
  {
    _result.m_type = ActionResultType::CONTINUE;
    v2 = this;
    _result.m_action = 0;
    _result.m_reason = 0;
    _result.m_priority = EventResultPriorityType::RESULT_TRY;
    do
    {
      m_actor = this->m_actor;
      if ( m_actor != 0 )
      {
        if ( SLOBYTE(g_NextBotManager.m_debugType) < 0
          && (v13 = &m_actor->INextBot,
              v17 = this->m_actor,
              NextBotManager::IsDebugFilterMatch(&g_NextBotManager, &m_actor->INextBot))
          && (*(v17->_vptr_INextBotEventResponder + 96))(v13, 128) != 0
          || NextBotDebugHistory.m_pParent->m_Value.m_nValue != 0 )
        {
          v4 = (*(v2->_vptr_INextBotEventResponder + 64))(v2);
          v16 = CUtlSymbol::String(&this->m_behavior->m_name);
          v5 = (*(this->m_actor->_vptr_INextBotEventResponder + 97))(&this->m_actor->INextBot);
          v6 = v16;
          v7 = v5;
          v8 = gpGlobals;
          if ( gpGlobals != 0 )
          {
            if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
            {
              m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
              if ( m_pfnWarningFunc != 0 )
              {
                v14 = gpGlobals;
                v15 = v7;
                m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
                v8 = v14;
                v7 = v15;
                v6 = v16;
              }
            }
            m_flCurrentTime = v8->m_flCurrentTime;
          }
          else
          {
            m_flCurrentTime = 0.0;
          }
          v11 = this->m_actor;
          memset(&color, 100, 3);
          color._color[3] = -1;
          INextBot::DebugConColorMsg(
            &v11->INextBot,
            NextBotDebugType::NEXTBOT_EVENTS,
            &color,
            "%3.2f: %s:%s: %s received EVENT %s\n",
            m_flCurrentTime,
            v7,
            v6,
            v4,
            "OnCommandResume");
        }
        m_actor = this->m_actor;
      }
      (*(v2->_vptr_INextBotEventResponder + 101))(&v19, v2, m_actor);
      _result = v19;
      if ( v19.m_type != ActionResultType::CONTINUE )
        break;
      v2 = v2->m_buriedUnderMe;
    }
    while ( v2 != 0 );
    Action<CDOTA_BaseNPC>::StorePendingEventResult(this, v2, "OnCommandResume", &_result);
    for ( i = (*(this->_vptr_INextBotEventResponder + 3))(this);
          i != 0;
          i = (*(this->_vptr_INextBotEventResponder + 4))(this, i) )
    {
      (*(*i + 280LL))(i);
    }
  }
}


// Action<CSimpleBot>::OnCommandResume  (line 863, @0x0000000002f295f0, libserver.so)  // inlines: Color, DebugReceivedEvent, EventDesiredResult, GetBool, GetInt, GetName, IActionResult, IsDebugFilterMatch, IsDebugging, OnCommandResume, SetColor, curtime
// calls: CUtlSymbol::String, INextBot::DebugConColorMsg, Action<CSimpleBot>::StorePendingEventResult, NextBotManager::IsDebugFilterMatch, __stack_chk_fail
// strings: "%3.2f: %s:%s: %s received EVENT %s\n", "OnCommandResume"
void __fastcall Action<CSimpleBot>::OnCommandResume(Action<CSimpleBot> *const this)
{
  Action<CSimpleBot> *v2; // rbx
  CSimpleBot *m_actor; // rdx
  INextBot *v4; // r15
  const char *v5; // r15
  const char *v6; // r14
  const char *v7; // r8
  CGlobalVars *v8; // rdx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  double m_flCurrentTime; // xmm0_8
  CSimpleBot *v11; // rax
  __int64 i; // rbx
  bool IsDebugFilterMatch; // al
  CGlobalVars *v14; // [rsp+18h] [rbp-98h]
  const char *v15; // [rsp+20h] [rbp-90h]
  CSimpleBot *v16; // [rsp+20h] [rbp-90h]
  EventDesiredResult<CSimpleBot> _result; // [rsp+30h] [rbp-80h] BYREF
  EventDesiredResult<CSimpleBot> v18; // [rsp+50h] [rbp-60h] BYREF
  Color v19; // [rsp+70h] [rbp-40h] BYREF
  unsigned __int64 v20; // [rsp+78h] [rbp-38h]

  v20 = __readfsqword(0x28u);
  if ( this->m_isStarted )
  {
    _result.m_type = ActionResultType::CONTINUE;
    v2 = this;
    _result.m_action = 0;
    _result.m_reason = 0;
    _result.m_priority = EventResultPriorityType::RESULT_TRY;
    do
    {
      m_actor = this->m_actor;
      if ( m_actor != 0 )
      {
        if ( SLOBYTE(g_NextBotManager.m_debugType) < 0
          && ((v4 = &m_actor->INextBot, g_NextBotManager.m_debugFilterList.m_Size == 0)
           || (v16 = this->m_actor,
               IsDebugFilterMatch = NextBotManager::IsDebugFilterMatch(&g_NextBotManager, &m_actor->INextBot),
               m_actor = v16,
               IsDebugFilterMatch))
          && (*(m_actor->_vptr_INextBotEventResponder + 96))(v4, 128) != 0
          || NextBotDebugHistory.m_pParent->m_Value.m_nValue != 0 )
        {
          v5 = (*(v2->_vptr_INextBotEventResponder + 64))(v2);
          v6 = CUtlSymbol::String(&this->m_behavior->m_name);
          v7 = (*(this->m_actor->_vptr_INextBotEventResponder + 97))(&this->m_actor->INextBot);
          v8 = gpGlobals;
          if ( gpGlobals != 0 )
          {
            if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
            {
              m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
              if ( m_pfnWarningFunc != 0 )
              {
                v14 = gpGlobals;
                v15 = v7;
                m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
                v8 = v14;
                v7 = v15;
              }
            }
            m_flCurrentTime = v8->m_flCurrentTime;
          }
          else
          {
            m_flCurrentTime = 0.0;
          }
          v11 = this->m_actor;
          memset(&v19, 100, 3);
          v19._color[3] = -1;
          INextBot::DebugConColorMsg(
            &v11->INextBot,
            NextBotDebugType::NEXTBOT_EVENTS,
            &v19,
            "%3.2f: %s:%s: %s received EVENT %s\n",
            m_flCurrentTime,
            v7,
            v6,
            v5,
            "OnCommandResume");
        }
        m_actor = this->m_actor;
      }
      (*(v2->_vptr_INextBotEventResponder + 101))(&v18, v2, m_actor);
      _result = v18;
      if ( v18.m_type != ActionResultType::CONTINUE )
        break;
      v2 = v2->m_buriedUnderMe;
    }
    while ( v2 != 0 );
    Action<CSimpleBot>::StorePendingEventResult(this, v2, "OnCommandResume", &_result);
    for ( i = (*(this->_vptr_INextBotEventResponder + 3))(this);
          i != 0;
          i = (*(this->_vptr_INextBotEventResponder + 4))(this, i) )
    {
      (*(*i + 280LL))(i);
    }
  }
}


// Action<CDOTA_BaseNPC>::OnCommandString  (line 864, @0x00000000028890b0, libserver.so)  // inlines: EventDesiredResult, IActionResult, OnCommandString
// calls: Action<CDOTA_BaseNPC>::DebugReceivedEvent, Action<CDOTA_BaseNPC>::StorePendingEventResult
// strings: "OnCommandString"
void __fastcall Action<CDOTA_BaseNPC>::OnCommandString(Action<CDOTA_BaseNPC> *const this, const char *command)
{
  Action<CDOTA_BaseNPC> *v4; // rbx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rsi
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 i; // rbx
  EventDesiredResult<CDOTA_BaseNPC> _result; // [rsp+0h] [rbp-60h] BYREF
  EventDesiredResult<CDOTA_BaseNPC> v14; // [rsp+20h] [rbp-40h] BYREF

  if ( this->m_isStarted )
  {
    _result.m_type = ActionResultType::CONTINUE;
    v4 = this;
    _result.m_action = 0;
    _result.m_reason = 0;
    _result.m_priority = EventResultPriorityType::RESULT_TRY;
    do
    {
      Action<CDOTA_BaseNPC>::DebugReceivedEvent(this, v4, "OnCommandString");
      (*(v4->_vptr_INextBotEventResponder + 102))(
        &v14,
        v4,
        this->m_actor,
        command,
        v5,
        v6,
        *&_result.m_type,
        _result.m_action,
        _result.m_reason,
        _result.m_priority);
      _result = v14;
      if ( v14.m_type != ActionResultType::CONTINUE )
        break;
      v4 = v4->m_buriedUnderMe;
    }
    while ( v4 != 0 );
    Action<CDOTA_BaseNPC>::StorePendingEventResult(this, v4, "OnCommandString", &_result);
    for ( i = (*(this->_vptr_INextBotEventResponder + 3))(
                this,
                v9,
                v7,
                v8,
                v10,
                v11,
                *&_result.m_type,
                _result.m_action,
                _result.m_reason,
                _result.m_priority); i != 0; i = (*(this->_vptr_INextBotEventResponder + 4))(this, i) )
      (*(*i + 288LL))(i, command);
  }
}


// Action<CSimpleBot>::OnCommandString  (line 864, @0x0000000002f29890, libserver.so)  // inlines: Color, DebugReceivedEvent, EventDesiredResult, GetBool, GetInt, GetName, IActionResult, IsDebugFilterMatch, IsDebugging, OnCommandString, SetColor, curtime
// calls: CUtlSymbol::String, INextBot::DebugConColorMsg, Action<CSimpleBot>::StorePendingEventResult, NextBotManager::IsDebugFilterMatch, __stack_chk_fail
// strings: "%3.2f: %s:%s: %s received EVENT %s\n", "OnCommandString"
void __fastcall Action<CSimpleBot>::OnCommandString(Action<CSimpleBot> *const this, const char *command)
{
  Action<CSimpleBot> *v4; // r15
  CSimpleBot *m_actor; // rdx
  INextBot *v6; // r14
  const char *v7; // r14
  __int64 v8; // rax
  const char *v9; // r9
  const char *v10; // r8
  CGlobalVars *v11; // rdx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  double m_flCurrentTime; // xmm0_8
  CSimpleBot *v14; // rax
  __int64 i; // r13
  bool IsDebugFilterMatch; // al
  CGlobalVars *v17; // [rsp+10h] [rbp-A0h]
  const char *v18; // [rsp+18h] [rbp-98h]
  const char *v19; // [rsp+28h] [rbp-88h]
  CSimpleBot *v20; // [rsp+28h] [rbp-88h]
  EventDesiredResult<CSimpleBot> _result; // [rsp+30h] [rbp-80h] BYREF
  EventDesiredResult<CSimpleBot> v22; // [rsp+50h] [rbp-60h] BYREF
  Color v23; // [rsp+70h] [rbp-40h] BYREF
  unsigned __int64 v24; // [rsp+78h] [rbp-38h]

  v24 = __readfsqword(0x28u);
  if ( this->m_isStarted )
  {
    _result.m_type = ActionResultType::CONTINUE;
    _result.m_action = 0;
    v4 = this;
    _result.m_reason = 0;
    _result.m_priority = EventResultPriorityType::RESULT_TRY;
    do
    {
      m_actor = this->m_actor;
      if ( m_actor != 0 )
      {
        if ( SLOBYTE(g_NextBotManager.m_debugType) < 0
          && ((v6 = &m_actor->INextBot, g_NextBotManager.m_debugFilterList.m_Size == 0)
           || (v20 = this->m_actor,
               IsDebugFilterMatch = NextBotManager::IsDebugFilterMatch(&g_NextBotManager, &m_actor->INextBot),
               m_actor = v20,
               IsDebugFilterMatch))
          && (*(m_actor->_vptr_INextBotEventResponder + 96))(v6, 128) != 0
          || NextBotDebugHistory.m_pParent->m_Value.m_nValue != 0 )
        {
          v7 = (*(v4->_vptr_INextBotEventResponder + 64))(v4);
          v19 = CUtlSymbol::String(&this->m_behavior->m_name);
          v8 = (*(this->m_actor->_vptr_INextBotEventResponder + 97))(&this->m_actor->INextBot);
          v9 = v19;
          v10 = v8;
          v11 = gpGlobals;
          if ( gpGlobals != 0 )
          {
            if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
            {
              m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
              if ( m_pfnWarningFunc != 0 )
              {
                v17 = gpGlobals;
                v18 = v10;
                m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
                v11 = v17;
                v10 = v18;
                v9 = v19;
              }
            }
            m_flCurrentTime = v11->m_flCurrentTime;
          }
          else
          {
            m_flCurrentTime = 0.0;
          }
          v14 = this->m_actor;
          memset(&v23, 100, 3);
          v23._color[3] = -1;
          INextBot::DebugConColorMsg(
            &v14->INextBot,
            NextBotDebugType::NEXTBOT_EVENTS,
            &v23,
            "%3.2f: %s:%s: %s received EVENT %s\n",
            m_flCurrentTime,
            v10,
            v9,
            v7,
            "OnCommandString");
        }
        m_actor = this->m_actor;
      }
      (*(v4->_vptr_INextBotEventResponder + 102))(&v22, v4, m_actor, command);
      _result = v22;
      if ( v22.m_type != ActionResultType::CONTINUE )
        break;
      v4 = v4->m_buriedUnderMe;
    }
    while ( v4 != 0 );
    Action<CSimpleBot>::StorePendingEventResult(this, v4, "OnCommandString", &_result);
    for ( i = (*(this->_vptr_INextBotEventResponder + 3))(this);
          i != 0;
          i = (*(this->_vptr_INextBotEventResponder + 4))(this, i) )
    {
      (*(*i + 288LL))(i, command);
    }
  }
}


// Action<CDOTA_BaseNPC>::OnShoved  (line 866, @0x00000000028891b0, libserver.so)  // inlines: EventDesiredResult, IActionResult, OnShoved
// calls: Action<CDOTA_BaseNPC>::DebugReceivedEvent, Action<CDOTA_BaseNPC>::StorePendingEventResult
// strings: "OnShoved"
void __fastcall Action<CDOTA_BaseNPC>::OnShoved(Action<CDOTA_BaseNPC> *const this, CBaseEntity *pusher)
{
  Action<CDOTA_BaseNPC> *v4; // rbx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rsi
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 i; // rbx
  EventDesiredResult<CDOTA_BaseNPC> _result; // [rsp+0h] [rbp-60h] BYREF
  EventDesiredResult<CDOTA_BaseNPC> v14; // [rsp+20h] [rbp-40h] BYREF

  if ( this->m_isStarted )
  {
    _result.m_type = ActionResultType::CONTINUE;
    v4 = this;
    _result.m_action = 0;
    _result.m_reason = 0;
    _result.m_priority = EventResultPriorityType::RESULT_TRY;
    do
    {
      Action<CDOTA_BaseNPC>::DebugReceivedEvent(this, v4, "OnShoved");
      (*(v4->_vptr_INextBotEventResponder + 103))(
        &v14,
        v4,
        this->m_actor,
        pusher,
        v5,
        v6,
        *&_result.m_type,
        _result.m_action,
        _result.m_reason,
        _result.m_priority);
      _result = v14;
      if ( v14.m_type != ActionResultType::CONTINUE )
        break;
      v4 = v4->m_buriedUnderMe;
    }
    while ( v4 != 0 );
    Action<CDOTA_BaseNPC>::StorePendingEventResult(this, v4, "OnShoved", &_result);
    for ( i = (*(this->_vptr_INextBotEventResponder + 3))(
                this,
                v9,
                v7,
                v8,
                v10,
                v11,
                *&_result.m_type,
                _result.m_action,
                _result.m_reason,
                _result.m_priority); i != 0; i = (*(this->_vptr_INextBotEventResponder + 4))(this, i) )
      (*(*i + 296LL))(i, pusher);
  }
}


// Action<CSimpleBot>::OnShoved  (line 866, @0x0000000002f29b50, libserver.so)  // inlines: Color, DebugReceivedEvent, EventDesiredResult, GetBool, GetInt, GetName, IActionResult, IsDebugFilterMatch, IsDebugging, OnShoved, SetColor, curtime
// calls: CUtlSymbol::String, INextBot::DebugConColorMsg, Action<CSimpleBot>::StorePendingEventResult, NextBotManager::IsDebugFilterMatch, __stack_chk_fail
// strings: "%3.2f: %s:%s: %s received EVENT %s\n", "OnShoved"
void __fastcall Action<CSimpleBot>::OnShoved(Action<CSimpleBot> *const this, CBaseEntity *pusher)
{
  Action<CSimpleBot> *v4; // r15
  CSimpleBot *m_actor; // rdx
  INextBot *v6; // r14
  const char *v7; // r14
  __int64 v8; // rax
  const char *v9; // r9
  const char *v10; // r8
  CGlobalVars *v11; // rdx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  double m_flCurrentTime; // xmm0_8
  CSimpleBot *v14; // rax
  __int64 i; // r13
  bool IsDebugFilterMatch; // al
  CGlobalVars *v17; // [rsp+10h] [rbp-A0h]
  const char *v18; // [rsp+18h] [rbp-98h]
  const char *v19; // [rsp+28h] [rbp-88h]
  CSimpleBot *v20; // [rsp+28h] [rbp-88h]
  EventDesiredResult<CSimpleBot> _result; // [rsp+30h] [rbp-80h] BYREF
  EventDesiredResult<CSimpleBot> v22; // [rsp+50h] [rbp-60h] BYREF
  Color v23; // [rsp+70h] [rbp-40h] BYREF
  unsigned __int64 v24; // [rsp+78h] [rbp-38h]

  v24 = __readfsqword(0x28u);
  if ( this->m_isStarted )
  {
    _result.m_type = ActionResultType::CONTINUE;
    _result.m_action = 0;
    v4 = this;
    _result.m_reason = 0;
    _result.m_priority = EventResultPriorityType::RESULT_TRY;
    do
    {
      m_actor = this->m_actor;
      if ( m_actor != 0 )
      {
        if ( SLOBYTE(g_NextBotManager.m_debugType) < 0
          && ((v6 = &m_actor->INextBot, g_NextBotManager.m_debugFilterList.m_Size == 0)
           || (v20 = this->m_actor,
               IsDebugFilterMatch = NextBotManager::IsDebugFilterMatch(&g_NextBotManager, &m_actor->INextBot),
               m_actor = v20,
               IsDebugFilterMatch))
          && (*(m_actor->_vptr_INextBotEventResponder + 96))(v6, 128) != 0
          || NextBotDebugHistory.m_pParent->m_Value.m_nValue != 0 )
        {
          v7 = (*(v4->_vptr_INextBotEventResponder + 64))(v4);
          v19 = CUtlSymbol::String(&this->m_behavior->m_name);
          v8 = (*(this->m_actor->_vptr_INextBotEventResponder + 97))(&this->m_actor->INextBot);
          v9 = v19;
          v10 = v8;
          v11 = gpGlobals;
          if ( gpGlobals != 0 )
          {
            if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
            {
              m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
              if ( m_pfnWarningFunc != 0 )
              {
                v17 = gpGlobals;
                v18 = v10;
                m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
                v11 = v17;
                v10 = v18;
                v9 = v19;
              }
            }
            m_flCurrentTime = v11->m_flCurrentTime;
          }
          else
          {
            m_flCurrentTime = 0.0;
          }
          v14 = this->m_actor;
          memset(&v23, 100, 3);
          v23._color[3] = -1;
          INextBot::DebugConColorMsg(
            &v14->INextBot,
            NextBotDebugType::NEXTBOT_EVENTS,
            &v23,
            "%3.2f: %s:%s: %s received EVENT %s\n",
            m_flCurrentTime,
            v10,
            v9,
            v7,
            "OnShoved");
        }
        m_actor = this->m_actor;
      }
      (*(v4->_vptr_INextBotEventResponder + 103))(&v22, v4, m_actor, pusher);
      _result = v22;
      if ( v22.m_type != ActionResultType::CONTINUE )
        break;
      v4 = v4->m_buriedUnderMe;
    }
    while ( v4 != 0 );
    Action<CSimpleBot>::StorePendingEventResult(this, v4, "OnShoved", &_result);
    for ( i = (*(this->_vptr_INextBotEventResponder + 3))(this);
          i != 0;
          i = (*(this->_vptr_INextBotEventResponder + 4))(this, i) )
    {
      (*(*i + 296LL))(i, pusher);
    }
  }
}


// Action<CDOTA_BaseNPC>::OnBlinded  (line 867, @0x00000000028892b0, libserver.so)  // inlines: EventDesiredResult, IActionResult, OnBlinded
// calls: Action<CDOTA_BaseNPC>::DebugReceivedEvent, Action<CDOTA_BaseNPC>::StorePendingEventResult
// strings: "OnBlinded"
void __fastcall Action<CDOTA_BaseNPC>::OnBlinded(Action<CDOTA_BaseNPC> *const this, CBaseEntity *blinder)
{
  Action<CDOTA_BaseNPC> *v4; // rbx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rsi
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 i; // rbx
  EventDesiredResult<CDOTA_BaseNPC> _result; // [rsp+0h] [rbp-60h] BYREF
  EventDesiredResult<CDOTA_BaseNPC> v14; // [rsp+20h] [rbp-40h] BYREF

  if ( this->m_isStarted )
  {
    _result.m_type = ActionResultType::CONTINUE;
    v4 = this;
    _result.m_action = 0;
    _result.m_reason = 0;
    _result.m_priority = EventResultPriorityType::RESULT_TRY;
    do
    {
      Action<CDOTA_BaseNPC>::DebugReceivedEvent(this, v4, "OnBlinded");
      (*(v4->_vptr_INextBotEventResponder + 104))(
        &v14,
        v4,
        this->m_actor,
        blinder,
        v5,
        v6,
        *&_result.m_type,
        _result.m_action,
        _result.m_reason,
        _result.m_priority);
      _result = v14;
      if ( v14.m_type != ActionResultType::CONTINUE )
        break;
      v4 = v4->m_buriedUnderMe;
    }
    while ( v4 != 0 );
    Action<CDOTA_BaseNPC>::StorePendingEventResult(this, v4, "OnBlinded", &_result);
    for ( i = (*(this->_vptr_INextBotEventResponder + 3))(
                this,
                v9,
                v7,
                v8,
                v10,
                v11,
                *&_result.m_type,
                _result.m_action,
                _result.m_reason,
                _result.m_priority); i != 0; i = (*(this->_vptr_INextBotEventResponder + 4))(this, i) )
      (*(*i + 304LL))(i, blinder);
  }
}


// Action<CSimpleBot>::OnBlinded  (line 867, @0x0000000002f29e10, libserver.so)  // inlines: Color, DebugReceivedEvent, EventDesiredResult, GetBool, GetInt, GetName, IActionResult, IsDebugFilterMatch, IsDebugging, OnBlinded, SetColor, curtime
// calls: CUtlSymbol::String, INextBot::DebugConColorMsg, Action<CSimpleBot>::StorePendingEventResult, NextBotManager::IsDebugFilterMatch, __stack_chk_fail
// strings: "%3.2f: %s:%s: %s received EVENT %s\n", "OnBlinded"
void __fastcall Action<CSimpleBot>::OnBlinded(Action<CSimpleBot> *const this, CBaseEntity *blinder)
{
  Action<CSimpleBot> *v4; // r15
  CSimpleBot *m_actor; // rdx
  INextBot *v6; // r14
  const char *v7; // r14
  __int64 v8; // rax
  const char *v9; // r9
  const char *v10; // r8
  CGlobalVars *v11; // rdx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  double m_flCurrentTime; // xmm0_8
  CSimpleBot *v14; // rax
  __int64 i; // r13
  bool IsDebugFilterMatch; // al
  CGlobalVars *v17; // [rsp+10h] [rbp-A0h]
  const char *v18; // [rsp+18h] [rbp-98h]
  const char *v19; // [rsp+28h] [rbp-88h]
  CSimpleBot *v20; // [rsp+28h] [rbp-88h]
  EventDesiredResult<CSimpleBot> _result; // [rsp+30h] [rbp-80h] BYREF
  EventDesiredResult<CSimpleBot> v22; // [rsp+50h] [rbp-60h] BYREF
  Color v23; // [rsp+70h] [rbp-40h] BYREF
  unsigned __int64 v24; // [rsp+78h] [rbp-38h]

  v24 = __readfsqword(0x28u);
  if ( this->m_isStarted )
  {
    _result.m_type = ActionResultType::CONTINUE;
    _result.m_action = 0;
    v4 = this;
    _result.m_reason = 0;
    _result.m_priority = EventResultPriorityType::RESULT_TRY;
    do
    {
      m_actor = this->m_actor;
      if ( m_actor != 0 )
      {
        if ( SLOBYTE(g_NextBotManager.m_debugType) < 0
          && ((v6 = &m_actor->INextBot, g_NextBotManager.m_debugFilterList.m_Size == 0)
           || (v20 = this->m_actor,
               IsDebugFilterMatch = NextBotManager::IsDebugFilterMatch(&g_NextBotManager, &m_actor->INextBot),
               m_actor = v20,
               IsDebugFilterMatch))
          && (*(m_actor->_vptr_INextBotEventResponder + 96))(v6, 128) != 0
          || NextBotDebugHistory.m_pParent->m_Value.m_nValue != 0 )
        {
          v7 = (*(v4->_vptr_INextBotEventResponder + 64))(v4);
          v19 = CUtlSymbol::String(&this->m_behavior->m_name);
          v8 = (*(this->m_actor->_vptr_INextBotEventResponder + 97))(&this->m_actor->INextBot);
          v9 = v19;
          v10 = v8;
          v11 = gpGlobals;
          if ( gpGlobals != 0 )
          {
            if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
            {
              m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
              if ( m_pfnWarningFunc != 0 )
              {
                v17 = gpGlobals;
                v18 = v10;
                m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
                v11 = v17;
                v10 = v18;
                v9 = v19;
              }
            }
            m_flCurrentTime = v11->m_flCurrentTime;
          }
          else
          {
            m_flCurrentTime = 0.0;
          }
          v14 = this->m_actor;
          memset(&v23, 100, 3);
          v23._color[3] = -1;
          INextBot::DebugConColorMsg(
            &v14->INextBot,
            NextBotDebugType::NEXTBOT_EVENTS,
            &v23,
            "%3.2f: %s:%s: %s received EVENT %s\n",
            m_flCurrentTime,
            v10,
            v9,
            v7,
            "OnBlinded");
        }
        m_actor = this->m_actor;
      }
      (*(v4->_vptr_INextBotEventResponder + 104))(&v22, v4, m_actor, blinder);
      _result = v22;
      if ( v22.m_type != ActionResultType::CONTINUE )
        break;
      v4 = v4->m_buriedUnderMe;
    }
    while ( v4 != 0 );
    Action<CSimpleBot>::StorePendingEventResult(this, v4, "OnBlinded", &_result);
    for ( i = (*(this->_vptr_INextBotEventResponder + 3))(this);
          i != 0;
          i = (*(this->_vptr_INextBotEventResponder + 4))(this, i) )
    {
      (*(*i + 304LL))(i, blinder);
    }
  }
}


// Action<CDOTA_BaseNPC>::OnTerritoryContested  (line 868, @0x00000000028893b0, libserver.so)  // inlines: EventDesiredResult, IActionResult, OnTerritoryContested
// calls: Action<CDOTA_BaseNPC>::DebugReceivedEvent, Action<CDOTA_BaseNPC>::StorePendingEventResult
// strings: "OnTerritoryContested"
void __fastcall Action<CDOTA_BaseNPC>::OnTerritoryContested(Action<CDOTA_BaseNPC> *const this, int territoryID)
{
  Action<CDOTA_BaseNPC> *v4; // rbx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rsi
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 i; // rbx
  EventDesiredResult<CDOTA_BaseNPC> _result; // [rsp+0h] [rbp-60h] BYREF
  EventDesiredResult<CDOTA_BaseNPC> v14; // [rsp+20h] [rbp-40h] BYREF

  if ( this->m_isStarted )
  {
    _result.m_type = ActionResultType::CONTINUE;
    v4 = this;
    _result.m_action = 0;
    _result.m_reason = 0;
    _result.m_priority = EventResultPriorityType::RESULT_TRY;
    do
    {
      Action<CDOTA_BaseNPC>::DebugReceivedEvent(this, v4, "OnTerritoryContested");
      (*(v4->_vptr_INextBotEventResponder + 105))(
        &v14,
        v4,
        this->m_actor,
        territoryID,
        v5,
        v6,
        *&_result.m_type,
        _result.m_action,
        _result.m_reason,
        _result.m_priority);
      _result = v14;
      if ( v14.m_type != ActionResultType::CONTINUE )
        break;
      v4 = v4->m_buriedUnderMe;
    }
    while ( v4 != 0 );
    Action<CDOTA_BaseNPC>::StorePendingEventResult(this, v4, "OnTerritoryContested", &_result);
    for ( i = (*(this->_vptr_INextBotEventResponder + 3))(
                this,
                v9,
                v7,
                v8,
                v10,
                v11,
                *&_result.m_type,
                _result.m_action,
                _result.m_reason,
                _result.m_priority); i != 0; i = (*(this->_vptr_INextBotEventResponder + 4))(this, i) )
      (*(*i + 312LL))(i, territoryID);
  }
}


// Action<CSimpleBot>::OnTerritoryContested  (line 868, @0x0000000002f2a0d0, libserver.so)  // inlines: Color, DebugReceivedEvent, EventDesiredResult, GetBool, GetInt, GetName, IActionResult, IsDebugFilterMatch, IsDebugging, OnTerritoryContested, SetColor, curtime
// calls: CUtlSymbol::String, INextBot::DebugConColorMsg, Action<CSimpleBot>::StorePendingEventResult, NextBotManager::IsDebugFilterMatch, __stack_chk_fail
// strings: "%3.2f: %s:%s: %s received EVENT %s\n", "OnTerritoryContested"
void __fastcall Action<CSimpleBot>::OnTerritoryContested(Action<CSimpleBot> *const this, int territoryID)
{
  Action<CSimpleBot> *v4; // r15
  CSimpleBot *m_actor; // rdx
  INextBot *v6; // r14
  const char *v7; // r14
  __int64 v8; // rax
  const char *v9; // r9
  const char *v10; // r8
  CGlobalVars *v11; // rdx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  double m_flCurrentTime; // xmm0_8
  CSimpleBot *v14; // rax
  __int64 i; // r13
  bool IsDebugFilterMatch; // al
  CGlobalVars *v17; // [rsp+10h] [rbp-A0h]
  const char *v18; // [rsp+18h] [rbp-98h]
  const char *v19; // [rsp+28h] [rbp-88h]
  CSimpleBot *v20; // [rsp+28h] [rbp-88h]
  EventDesiredResult<CSimpleBot> _result; // [rsp+30h] [rbp-80h] BYREF
  EventDesiredResult<CSimpleBot> v22; // [rsp+50h] [rbp-60h] BYREF
  Color v23; // [rsp+70h] [rbp-40h] BYREF
  unsigned __int64 v24; // [rsp+78h] [rbp-38h]

  v24 = __readfsqword(0x28u);
  if ( this->m_isStarted )
  {
    _result.m_type = ActionResultType::CONTINUE;
    _result.m_action = 0;
    v4 = this;
    _result.m_reason = 0;
    _result.m_priority = EventResultPriorityType::RESULT_TRY;
    do
    {
      m_actor = this->m_actor;
      if ( m_actor != 0 )
      {
        if ( SLOBYTE(g_NextBotManager.m_debugType) < 0
          && ((v6 = &m_actor->INextBot, g_NextBotManager.m_debugFilterList.m_Size == 0)
           || (v20 = this->m_actor,
               IsDebugFilterMatch = NextBotManager::IsDebugFilterMatch(&g_NextBotManager, &m_actor->INextBot),
               m_actor = v20,
               IsDebugFilterMatch))
          && (*(m_actor->_vptr_INextBotEventResponder + 96))(v6, 128) != 0
          || NextBotDebugHistory.m_pParent->m_Value.m_nValue != 0 )
        {
          v7 = (*(v4->_vptr_INextBotEventResponder + 64))(v4);
          v19 = CUtlSymbol::String(&this->m_behavior->m_name);
          v8 = (*(this->m_actor->_vptr_INextBotEventResponder + 97))(&this->m_actor->INextBot);
          v9 = v19;
          v10 = v8;
          v11 = gpGlobals;
          if ( gpGlobals != 0 )
          {
            if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
            {
              m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
              if ( m_pfnWarningFunc != 0 )
              {
                v17 = gpGlobals;
                v18 = v10;
                m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
                v11 = v17;
                v10 = v18;
                v9 = v19;
              }
            }
            m_flCurrentTime = v11->m_flCurrentTime;
          }
          else
          {
            m_flCurrentTime = 0.0;
          }
          v14 = this->m_actor;
          memset(&v23, 100, 3);
          v23._color[3] = -1;
          INextBot::DebugConColorMsg(
            &v14->INextBot,
            NextBotDebugType::NEXTBOT_EVENTS,
            &v23,
            "%3.2f: %s:%s: %s received EVENT %s\n",
            m_flCurrentTime,
            v10,
            v9,
            v7,
            "OnTerritoryContested");
        }
        m_actor = this->m_actor;
      }
      (*(v4->_vptr_INextBotEventResponder + 105))(&v22, v4, m_actor, territoryID);
      _result = v22;
      if ( v22.m_type != ActionResultType::CONTINUE )
        break;
      v4 = v4->m_buriedUnderMe;
    }
    while ( v4 != 0 );
    Action<CSimpleBot>::StorePendingEventResult(this, v4, "OnTerritoryContested", &_result);
    for ( i = (*(this->_vptr_INextBotEventResponder + 3))(this);
          i != 0;
          i = (*(this->_vptr_INextBotEventResponder + 4))(this, i) )
    {
      (*(*i + 312LL))(i, territoryID);
    }
  }
}


// Action<CDOTA_BaseNPC>::OnTerritoryCaptured  (line 869, @0x00000000028894b0, libserver.so)  // inlines: EventDesiredResult, IActionResult, OnTerritoryCaptured
// calls: Action<CDOTA_BaseNPC>::DebugReceivedEvent, Action<CDOTA_BaseNPC>::StorePendingEventResult
// strings: "OnTerritoryCaptured"
void __fastcall Action<CDOTA_BaseNPC>::OnTerritoryCaptured(Action<CDOTA_BaseNPC> *const this, int territoryID)
{
  Action<CDOTA_BaseNPC> *v4; // rbx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rsi
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 i; // rbx
  EventDesiredResult<CDOTA_BaseNPC> _result; // [rsp+0h] [rbp-60h] BYREF
  EventDesiredResult<CDOTA_BaseNPC> v14; // [rsp+20h] [rbp-40h] BYREF

  if ( this->m_isStarted )
  {
    _result.m_type = ActionResultType::CONTINUE;
    v4 = this;
    _result.m_action = 0;
    _result.m_reason = 0;
    _result.m_priority = EventResultPriorityType::RESULT_TRY;
    do
    {
      Action<CDOTA_BaseNPC>::DebugReceivedEvent(this, v4, "OnTerritoryCaptured");
      (*(v4->_vptr_INextBotEventResponder + 106))(
        &v14,
        v4,
        this->m_actor,
        territoryID,
        v5,
        v6,
        *&_result.m_type,
        _result.m_action,
        _result.m_reason,
        _result.m_priority);
      _result = v14;
      if ( v14.m_type != ActionResultType::CONTINUE )
        break;
      v4 = v4->m_buriedUnderMe;
    }
    while ( v4 != 0 );
    Action<CDOTA_BaseNPC>::StorePendingEventResult(this, v4, "OnTerritoryCaptured", &_result);
    for ( i = (*(this->_vptr_INextBotEventResponder + 3))(
                this,
                v9,
                v7,
                v8,
                v10,
                v11,
                *&_result.m_type,
                _result.m_action,
                _result.m_reason,
                _result.m_priority); i != 0; i = (*(this->_vptr_INextBotEventResponder + 4))(this, i) )
      (*(*i + 320LL))(i, territoryID);
  }
}


// Action<CSimpleBot>::OnTerritoryCaptured  (line 869, @0x0000000002f2a390, libserver.so)  // inlines: Color, DebugReceivedEvent, EventDesiredResult, GetBool, GetInt, GetName, IActionResult, IsDebugFilterMatch, IsDebugging, OnTerritoryCaptured, SetColor, curtime
// calls: CUtlSymbol::String, INextBot::DebugConColorMsg, Action<CSimpleBot>::StorePendingEventResult, NextBotManager::IsDebugFilterMatch, __stack_chk_fail
// strings: "%3.2f: %s:%s: %s received EVENT %s\n", "OnTerritoryCaptured"
void __fastcall Action<CSimpleBot>::OnTerritoryCaptured(Action<CSimpleBot> *const this, int territoryID)
{
  Action<CSimpleBot> *v4; // r15
  CSimpleBot *m_actor; // rdx
  INextBot *v6; // r14
  const char *v7; // r14
  __int64 v8; // rax
  const char *v9; // r9
  const char *v10; // r8
  CGlobalVars *v11; // rdx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  double m_flCurrentTime; // xmm0_8
  CSimpleBot *v14; // rax
  __int64 i; // r13
  bool IsDebugFilterMatch; // al
  CGlobalVars *v17; // [rsp+10h] [rbp-A0h]
  const char *v18; // [rsp+18h] [rbp-98h]
  const char *v19; // [rsp+28h] [rbp-88h]
  CSimpleBot *v20; // [rsp+28h] [rbp-88h]
  EventDesiredResult<CSimpleBot> _result; // [rsp+30h] [rbp-80h] BYREF
  EventDesiredResult<CSimpleBot> v22; // [rsp+50h] [rbp-60h] BYREF
  Color v23; // [rsp+70h] [rbp-40h] BYREF
  unsigned __int64 v24; // [rsp+78h] [rbp-38h]

  v24 = __readfsqword(0x28u);
  if ( this->m_isStarted )
  {
    _result.m_type = ActionResultType::CONTINUE;
    _result.m_action = 0;
    v4 = this;
    _result.m_reason = 0;
    _result.m_priority = EventResultPriorityType::RESULT_TRY;
    do
    {
      m_actor = this->m_actor;
      if ( m_actor != 0 )
      {
        if ( SLOBYTE(g_NextBotManager.m_debugType) < 0
          && ((v6 = &m_actor->INextBot, g_NextBotManager.m_debugFilterList.m_Size == 0)
           || (v20 = this->m_actor,
               IsDebugFilterMatch = NextBotManager::IsDebugFilterMatch(&g_NextBotManager, &m_actor->INextBot),
               m_actor = v20,
               IsDebugFilterMatch))
          && (*(m_actor->_vptr_INextBotEventResponder + 96))(v6, 128) != 0
          || NextBotDebugHistory.m_pParent->m_Value.m_nValue != 0 )
        {
          v7 = (*(v4->_vptr_INextBotEventResponder + 64))(v4);
          v19 = CUtlSymbol::String(&this->m_behavior->m_name);
          v8 = (*(this->m_actor->_vptr_INextBotEventResponder + 97))(&this->m_actor->INextBot);
          v9 = v19;
          v10 = v8;
          v11 = gpGlobals;
          if ( gpGlobals != 0 )
          {
            if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
            {
              m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
              if ( m_pfnWarningFunc != 0 )
              {
                v17 = gpGlobals;
                v18 = v10;
                m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
                v11 = v17;
                v10 = v18;
                v9 = v19;
              }
            }
            m_flCurrentTime = v11->m_flCurrentTime;
          }
          else
          {
            m_flCurrentTime = 0.0;
          }
          v14 = this->m_actor;
          memset(&v23, 100, 3);
          v23._color[3] = -1;
          INextBot::DebugConColorMsg(
            &v14->INextBot,
            NextBotDebugType::NEXTBOT_EVENTS,
            &v23,
            "%3.2f: %s:%s: %s received EVENT %s\n",
            m_flCurrentTime,
            v10,
            v9,
            v7,
            "OnTerritoryCaptured");
        }
        m_actor = this->m_actor;
      }
      (*(v4->_vptr_INextBotEventResponder + 106))(&v22, v4, m_actor, territoryID);
      _result = v22;
      if ( v22.m_type != ActionResultType::CONTINUE )
        break;
      v4 = v4->m_buriedUnderMe;
    }
    while ( v4 != 0 );
    Action<CSimpleBot>::StorePendingEventResult(this, v4, "OnTerritoryCaptured", &_result);
    for ( i = (*(this->_vptr_INextBotEventResponder + 3))(this);
          i != 0;
          i = (*(this->_vptr_INextBotEventResponder + 4))(this, i) )
    {
      (*(*i + 320LL))(i, territoryID);
    }
  }
}


// Action<CDOTA_BaseNPC>::OnTerritoryLost  (line 870, @0x00000000028895b0, libserver.so)  // inlines: EventDesiredResult, IActionResult, OnTerritoryLost
// calls: Action<CDOTA_BaseNPC>::DebugReceivedEvent, Action<CDOTA_BaseNPC>::StorePendingEventResult
// strings: "OnTerritoryLost"
void __fastcall Action<CDOTA_BaseNPC>::OnTerritoryLost(Action<CDOTA_BaseNPC> *const this, int territoryID)
{
  Action<CDOTA_BaseNPC> *v4; // rbx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rsi
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 i; // rbx
  EventDesiredResult<CDOTA_BaseNPC> _result; // [rsp+0h] [rbp-60h] BYREF
  EventDesiredResult<CDOTA_BaseNPC> v14; // [rsp+20h] [rbp-40h] BYREF

  if ( this->m_isStarted )
  {
    _result.m_type = ActionResultType::CONTINUE;
    v4 = this;
    _result.m_action = 0;
    _result.m_reason = 0;
    _result.m_priority = EventResultPriorityType::RESULT_TRY;
    do
    {
      Action<CDOTA_BaseNPC>::DebugReceivedEvent(this, v4, "OnTerritoryLost");
      (*(v4->_vptr_INextBotEventResponder + 107))(
        &v14,
        v4,
        this->m_actor,
        territoryID,
        v5,
        v6,
        *&_result.m_type,
        _result.m_action,
        _result.m_reason,
        _result.m_priority);
      _result = v14;
      if ( v14.m_type != ActionResultType::CONTINUE )
        break;
      v4 = v4->m_buriedUnderMe;
    }
    while ( v4 != 0 );
    Action<CDOTA_BaseNPC>::StorePendingEventResult(this, v4, "OnTerritoryLost", &_result);
    for ( i = (*(this->_vptr_INextBotEventResponder + 3))(
                this,
                v9,
                v7,
                v8,
                v10,
                v11,
                *&_result.m_type,
                _result.m_action,
                _result.m_reason,
                _result.m_priority); i != 0; i = (*(this->_vptr_INextBotEventResponder + 4))(this, i) )
      (*(*i + 328LL))(i, territoryID);
  }
}


// Action<CSimpleBot>::OnTerritoryLost  (line 870, @0x0000000002f2a650, libserver.so)  // inlines: Color, DebugReceivedEvent, EventDesiredResult, GetBool, GetInt, GetName, IActionResult, IsDebugFilterMatch, IsDebugging, OnTerritoryLost, SetColor, curtime
// calls: CUtlSymbol::String, INextBot::DebugConColorMsg, Action<CSimpleBot>::StorePendingEventResult, NextBotManager::IsDebugFilterMatch, __stack_chk_fail
// strings: "%3.2f: %s:%s: %s received EVENT %s\n", "OnTerritoryLost"
void __fastcall Action<CSimpleBot>::OnTerritoryLost(Action<CSimpleBot> *const this, int territoryID)
{
  Action<CSimpleBot> *v4; // r15
  CSimpleBot *m_actor; // rdx
  INextBot *v6; // r14
  const char *v7; // r14
  __int64 v8; // rax
  const char *v9; // r9
  const char *v10; // r8
  CGlobalVars *v11; // rdx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  double m_flCurrentTime; // xmm0_8
  CSimpleBot *v14; // rax
  __int64 i; // r13
  bool IsDebugFilterMatch; // al
  CGlobalVars *v17; // [rsp+10h] [rbp-A0h]
  const char *v18; // [rsp+18h] [rbp-98h]
  const char *v19; // [rsp+28h] [rbp-88h]
  CSimpleBot *v20; // [rsp+28h] [rbp-88h]
  EventDesiredResult<CSimpleBot> _result; // [rsp+30h] [rbp-80h] BYREF
  EventDesiredResult<CSimpleBot> v22; // [rsp+50h] [rbp-60h] BYREF
  Color v23; // [rsp+70h] [rbp-40h] BYREF
  unsigned __int64 v24; // [rsp+78h] [rbp-38h]

  v24 = __readfsqword(0x28u);
  if ( this->m_isStarted )
  {
    _result.m_type = ActionResultType::CONTINUE;
    _result.m_action = 0;
    v4 = this;
    _result.m_reason = 0;
    _result.m_priority = EventResultPriorityType::RESULT_TRY;
    do
    {
      m_actor = this->m_actor;
      if ( m_actor != 0 )
      {
        if ( SLOBYTE(g_NextBotManager.m_debugType) < 0
          && ((v6 = &m_actor->INextBot, g_NextBotManager.m_debugFilterList.m_Size == 0)
           || (v20 = this->m_actor,
               IsDebugFilterMatch = NextBotManager::IsDebugFilterMatch(&g_NextBotManager, &m_actor->INextBot),
               m_actor = v20,
               IsDebugFilterMatch))
          && (*(m_actor->_vptr_INextBotEventResponder + 96))(v6, 128) != 0
          || NextBotDebugHistory.m_pParent->m_Value.m_nValue != 0 )
        {
          v7 = (*(v4->_vptr_INextBotEventResponder + 64))(v4);
          v19 = CUtlSymbol::String(&this->m_behavior->m_name);
          v8 = (*(this->m_actor->_vptr_INextBotEventResponder + 97))(&this->m_actor->INextBot);
          v9 = v19;
          v10 = v8;
          v11 = gpGlobals;
          if ( gpGlobals != 0 )
          {
            if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
            {
              m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
              if ( m_pfnWarningFunc != 0 )
              {
                v17 = gpGlobals;
                v18 = v10;
                m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
                v11 = v17;
                v10 = v18;
                v9 = v19;
              }
            }
            m_flCurrentTime = v11->m_flCurrentTime;
          }
          else
          {
            m_flCurrentTime = 0.0;
          }
          v14 = this->m_actor;
          memset(&v23, 100, 3);
          v23._color[3] = -1;
          INextBot::DebugConColorMsg(
            &v14->INextBot,
            NextBotDebugType::NEXTBOT_EVENTS,
            &v23,
            "%3.2f: %s:%s: %s received EVENT %s\n",
            m_flCurrentTime,
            v10,
            v9,
            v7,
            "OnTerritoryLost");
        }
        m_actor = this->m_actor;
      }
      (*(v4->_vptr_INextBotEventResponder + 107))(&v22, v4, m_actor, territoryID);
      _result = v22;
      if ( v22.m_type != ActionResultType::CONTINUE )
        break;
      v4 = v4->m_buriedUnderMe;
    }
    while ( v4 != 0 );
    Action<CSimpleBot>::StorePendingEventResult(this, v4, "OnTerritoryLost", &_result);
    for ( i = (*(this->_vptr_INextBotEventResponder + 3))(this);
          i != 0;
          i = (*(this->_vptr_INextBotEventResponder + 4))(this, i) )
    {
      (*(*i + 328LL))(i, territoryID);
    }
  }
}


// Action<CDOTA_BaseNPC>::OnWin  (line 871, @0x00000000028896b0, libserver.so)  // inlines: Color, DebugReceivedEvent, EventDesiredResult, GetBool, GetInt, GetName, IActionResult, IsDebugging, OnWin, SetColor, curtime
// calls: CUtlSymbol::String, INextBot::DebugConColorMsg, Action<CDOTA_BaseNPC>::StorePendingEventResult, NextBotManager::IsDebugFilterMatch, __stack_chk_fail
// strings: "%3.2f: %s:%s: %s received EVENT %s\n", "OnWin"
void __fastcall Action<CDOTA_BaseNPC>::OnWin(Action<CDOTA_BaseNPC> *const this)
{
  Action<CDOTA_BaseNPC> *v2; // rbx
  CDOTA_BaseNPC *m_actor; // rdx
  const char *v4; // r15
  __int64 v5; // rax
  const char *v6; // r9
  const char *v7; // r8
  CGlobalVars *v8; // rdx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  double m_flCurrentTime; // xmm0_8
  CDOTA_BaseNPC *v11; // rax
  __int64 i; // rbx
  INextBot *v13; // r15
  CGlobalVars *v14; // [rsp+18h] [rbp-98h]
  const char *v15; // [rsp+20h] [rbp-90h]
  const char *v16; // [rsp+28h] [rbp-88h]
  CDOTA_BaseNPC *v17; // [rsp+28h] [rbp-88h]
  EventDesiredResult<CDOTA_BaseNPC> _result; // [rsp+30h] [rbp-80h] BYREF
  EventDesiredResult<CDOTA_BaseNPC> v19; // [rsp+50h] [rbp-60h] BYREF
  Color color; // [rsp+70h] [rbp-40h] BYREF
  unsigned __int64 v21; // [rsp+78h] [rbp-38h]

  v21 = __readfsqword(0x28u);
  if ( this->m_isStarted )
  {
    _result.m_type = ActionResultType::CONTINUE;
    v2 = this;
    _result.m_action = 0;
    _result.m_reason = 0;
    _result.m_priority = EventResultPriorityType::RESULT_TRY;
    do
    {
      m_actor = this->m_actor;
      if ( m_actor != 0 )
      {
        if ( SLOBYTE(g_NextBotManager.m_debugType) < 0
          && (v13 = &m_actor->INextBot,
              v17 = this->m_actor,
              NextBotManager::IsDebugFilterMatch(&g_NextBotManager, &m_actor->INextBot))
          && (*(v17->_vptr_INextBotEventResponder + 96))(v13, 128) != 0
          || NextBotDebugHistory.m_pParent->m_Value.m_nValue != 0 )
        {
          v4 = (*(v2->_vptr_INextBotEventResponder + 64))(v2);
          v16 = CUtlSymbol::String(&this->m_behavior->m_name);
          v5 = (*(this->m_actor->_vptr_INextBotEventResponder + 97))(&this->m_actor->INextBot);
          v6 = v16;
          v7 = v5;
          v8 = gpGlobals;
          if ( gpGlobals != 0 )
          {
            if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
            {
              m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
              if ( m_pfnWarningFunc != 0 )
              {
                v14 = gpGlobals;
                v15 = v7;
                m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
                v8 = v14;
                v7 = v15;
                v6 = v16;
              }
            }
            m_flCurrentTime = v8->m_flCurrentTime;
          }
          else
          {
            m_flCurrentTime = 0.0;
          }
          v11 = this->m_actor;
          memset(&color, 100, 3);
          color._color[3] = -1;
          INextBot::DebugConColorMsg(
            &v11->INextBot,
            NextBotDebugType::NEXTBOT_EVENTS,
            &color,
            "%3.2f: %s:%s: %s received EVENT %s\n",
            m_flCurrentTime,
            v7,
            v6,
            v4,
            "OnWin");
        }
        m_actor = this->m_actor;
      }
      (*(v2->_vptr_INextBotEventResponder + 108))(&v19, v2, m_actor);
      _result = v19;
      if ( v19.m_type != ActionResultType::CONTINUE )
        break;
      v2 = v2->m_buriedUnderMe;
    }
    while ( v2 != 0 );
    Action<CDOTA_BaseNPC>::StorePendingEventResult(this, v2, "OnWin", &_result);
    for ( i = (*(this->_vptr_INextBotEventResponder + 3))(this);
          i != 0;
          i = (*(this->_vptr_INextBotEventResponder + 4))(this, i) )
    {
      (*(*i + 336LL))(i);
    }
  }
}


// Action<CSimpleBot>::OnWin  (line 871, @0x0000000002f2a910, libserver.so)  // inlines: Color, DebugReceivedEvent, EventDesiredResult, GetBool, GetInt, GetName, IActionResult, IsDebugFilterMatch, IsDebugging, OnWin, SetColor, curtime
// calls: CUtlSymbol::String, INextBot::DebugConColorMsg, Action<CSimpleBot>::StorePendingEventResult, NextBotManager::IsDebugFilterMatch, __stack_chk_fail
// strings: "%3.2f: %s:%s: %s received EVENT %s\n", "OnWin"
void __fastcall Action<CSimpleBot>::OnWin(Action<CSimpleBot> *const this)
{
  Action<CSimpleBot> *v2; // rbx
  CSimpleBot *m_actor; // rdx
  INextBot *v4; // r15
  const char *v5; // r15
  const char *v6; // r14
  const char *v7; // r8
  CGlobalVars *v8; // rdx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  double m_flCurrentTime; // xmm0_8
  CSimpleBot *v11; // rax
  __int64 i; // rbx
  bool IsDebugFilterMatch; // al
  CGlobalVars *v14; // [rsp+18h] [rbp-98h]
  const char *v15; // [rsp+20h] [rbp-90h]
  CSimpleBot *v16; // [rsp+20h] [rbp-90h]
  EventDesiredResult<CSimpleBot> _result; // [rsp+30h] [rbp-80h] BYREF
  EventDesiredResult<CSimpleBot> v18; // [rsp+50h] [rbp-60h] BYREF
  Color v19; // [rsp+70h] [rbp-40h] BYREF
  unsigned __int64 v20; // [rsp+78h] [rbp-38h]

  v20 = __readfsqword(0x28u);
  if ( this->m_isStarted )
  {
    _result.m_type = ActionResultType::CONTINUE;
    v2 = this;
    _result.m_action = 0;
    _result.m_reason = 0;
    _result.m_priority = EventResultPriorityType::RESULT_TRY;
    do
    {
      m_actor = this->m_actor;
      if ( m_actor != 0 )
      {
        if ( SLOBYTE(g_NextBotManager.m_debugType) < 0
          && ((v4 = &m_actor->INextBot, g_NextBotManager.m_debugFilterList.m_Size == 0)
           || (v16 = this->m_actor,
               IsDebugFilterMatch = NextBotManager::IsDebugFilterMatch(&g_NextBotManager, &m_actor->INextBot),
               m_actor = v16,
               IsDebugFilterMatch))
          && (*(m_actor->_vptr_INextBotEventResponder + 96))(v4, 128) != 0
          || NextBotDebugHistory.m_pParent->m_Value.m_nValue != 0 )
        {
          v5 = (*(v2->_vptr_INextBotEventResponder + 64))(v2);
          v6 = CUtlSymbol::String(&this->m_behavior->m_name);
          v7 = (*(this->m_actor->_vptr_INextBotEventResponder + 97))(&this->m_actor->INextBot);
          v8 = gpGlobals;
          if ( gpGlobals != 0 )
          {
            if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
            {
              m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
              if ( m_pfnWarningFunc != 0 )
              {
                v14 = gpGlobals;
                v15 = v7;
                m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
                v8 = v14;
                v7 = v15;
              }
            }
            m_flCurrentTime = v8->m_flCurrentTime;
          }
          else
          {
            m_flCurrentTime = 0.0;
          }
          v11 = this->m_actor;
          memset(&v19, 100, 3);
          v19._color[3] = -1;
          INextBot::DebugConColorMsg(
            &v11->INextBot,
            NextBotDebugType::NEXTBOT_EVENTS,
            &v19,
            "%3.2f: %s:%s: %s received EVENT %s\n",
            m_flCurrentTime,
            v7,
            v6,
            v5,
            "OnWin");
        }
        m_actor = this->m_actor;
      }
      (*(v2->_vptr_INextBotEventResponder + 108))(&v18, v2, m_actor);
      _result = v18;
      if ( v18.m_type != ActionResultType::CONTINUE )
        break;
      v2 = v2->m_buriedUnderMe;
    }
    while ( v2 != 0 );
    Action<CSimpleBot>::StorePendingEventResult(this, v2, "OnWin", &_result);
    for ( i = (*(this->_vptr_INextBotEventResponder + 3))(this);
          i != 0;
          i = (*(this->_vptr_INextBotEventResponder + 4))(this, i) )
    {
      (*(*i + 336LL))(i);
    }
  }
}


// Action<CDOTA_BaseNPC>::OnLose  (line 872, @0x0000000002889960, libserver.so)  // inlines: Color, DebugReceivedEvent, EventDesiredResult, GetBool, GetInt, GetName, IActionResult, IsDebugging, OnLose, SetColor, curtime
// calls: CUtlSymbol::String, INextBot::DebugConColorMsg, Action<CDOTA_BaseNPC>::StorePendingEventResult, NextBotManager::IsDebugFilterMatch, __stack_chk_fail
// strings: "%3.2f: %s:%s: %s received EVENT %s\n", "OnLose"
void __fastcall Action<CDOTA_BaseNPC>::OnLose(Action<CDOTA_BaseNPC> *const this)
{
  Action<CDOTA_BaseNPC> *v2; // rbx
  CDOTA_BaseNPC *m_actor; // rdx
  const char *v4; // r15
  __int64 v5; // rax
  const char *v6; // r9
  const char *v7; // r8
  CGlobalVars *v8; // rdx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  double m_flCurrentTime; // xmm0_8
  CDOTA_BaseNPC *v11; // rax
  __int64 i; // rbx
  INextBot *v13; // r15
  CGlobalVars *v14; // [rsp+18h] [rbp-98h]
  const char *v15; // [rsp+20h] [rbp-90h]
  const char *v16; // [rsp+28h] [rbp-88h]
  CDOTA_BaseNPC *v17; // [rsp+28h] [rbp-88h]
  EventDesiredResult<CDOTA_BaseNPC> _result; // [rsp+30h] [rbp-80h] BYREF
  EventDesiredResult<CDOTA_BaseNPC> v19; // [rsp+50h] [rbp-60h] BYREF
  Color color; // [rsp+70h] [rbp-40h] BYREF
  unsigned __int64 v21; // [rsp+78h] [rbp-38h]

  v21 = __readfsqword(0x28u);
  if ( this->m_isStarted )
  {
    _result.m_type = ActionResultType::CONTINUE;
    v2 = this;
    _result.m_action = 0;
    _result.m_reason = 0;
    _result.m_priority = EventResultPriorityType::RESULT_TRY;
    do
    {
      m_actor = this->m_actor;
      if ( m_actor != 0 )
      {
        if ( SLOBYTE(g_NextBotManager.m_debugType) < 0
          && (v13 = &m_actor->INextBot,
              v17 = this->m_actor,
              NextBotManager::IsDebugFilterMatch(&g_NextBotManager, &m_actor->INextBot))
          && (*(v17->_vptr_INextBotEventResponder + 96))(v13, 128) != 0
          || NextBotDebugHistory.m_pParent->m_Value.m_nValue != 0 )
        {
          v4 = (*(v2->_vptr_INextBotEventResponder + 64))(v2);
          v16 = CUtlSymbol::String(&this->m_behavior->m_name);
          v5 = (*(this->m_actor->_vptr_INextBotEventResponder + 97))(&this->m_actor->INextBot);
          v6 = v16;
          v7 = v5;
          v8 = gpGlobals;
          if ( gpGlobals != 0 )
          {
            if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
            {
              m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
              if ( m_pfnWarningFunc != 0 )
              {
                v14 = gpGlobals;
                v15 = v7;
                m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
                v8 = v14;
                v7 = v15;
                v6 = v16;
              }
            }
            m_flCurrentTime = v8->m_flCurrentTime;
          }
          else
          {
            m_flCurrentTime = 0.0;
          }
          v11 = this->m_actor;
          memset(&color, 100, 3);
          color._color[3] = -1;
          INextBot::DebugConColorMsg(
            &v11->INextBot,
            NextBotDebugType::NEXTBOT_EVENTS,
            &color,
            "%3.2f: %s:%s: %s received EVENT %s\n",
            m_flCurrentTime,
            v7,
            v6,
            v4,
            "OnLose");
        }
        m_actor = this->m_actor;
      }
      (*(v2->_vptr_INextBotEventResponder + 109))(&v19, v2, m_actor);
      _result = v19;
      if ( v19.m_type != ActionResultType::CONTINUE )
        break;
      v2 = v2->m_buriedUnderMe;
    }
    while ( v2 != 0 );
    Action<CDOTA_BaseNPC>::StorePendingEventResult(this, v2, "OnLose", &_result);
    for ( i = (*(this->_vptr_INextBotEventResponder + 3))(this);
          i != 0;
          i = (*(this->_vptr_INextBotEventResponder + 4))(this, i) )
    {
      (*(*i + 344LL))(i);
    }
  }
}


// Action<CSimpleBot>::OnLose  (line 872, @0x0000000002f2abb0, libserver.so)  // inlines: Color, DebugReceivedEvent, EventDesiredResult, GetBool, GetInt, GetName, IActionResult, IsDebugFilterMatch, IsDebugging, OnLose, SetColor, curtime
// calls: CUtlSymbol::String, INextBot::DebugConColorMsg, Action<CSimpleBot>::StorePendingEventResult, NextBotManager::IsDebugFilterMatch, __stack_chk_fail
// strings: "%3.2f: %s:%s: %s received EVENT %s\n", "OnLose"
void __fastcall Action<CSimpleBot>::OnLose(Action<CSimpleBot> *const this)
{
  Action<CSimpleBot> *v2; // rbx
  CSimpleBot *m_actor; // rdx
  INextBot *v4; // r15
  const char *v5; // r15
  const char *v6; // r14
  const char *v7; // r8
  CGlobalVars *v8; // rdx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  double m_flCurrentTime; // xmm0_8
  CSimpleBot *v11; // rax
  __int64 i; // rbx
  bool IsDebugFilterMatch; // al
  CGlobalVars *v14; // [rsp+18h] [rbp-98h]
  const char *v15; // [rsp+20h] [rbp-90h]
  CSimpleBot *v16; // [rsp+20h] [rbp-90h]
  EventDesiredResult<CSimpleBot> _result; // [rsp+30h] [rbp-80h] BYREF
  EventDesiredResult<CSimpleBot> v18; // [rsp+50h] [rbp-60h] BYREF
  Color v19; // [rsp+70h] [rbp-40h] BYREF
  unsigned __int64 v20; // [rsp+78h] [rbp-38h]

  v20 = __readfsqword(0x28u);
  if ( this->m_isStarted )
  {
    _result.m_type = ActionResultType::CONTINUE;
    v2 = this;
    _result.m_action = 0;
    _result.m_reason = 0;
    _result.m_priority = EventResultPriorityType::RESULT_TRY;
    do
    {
      m_actor = this->m_actor;
      if ( m_actor != 0 )
      {
        if ( SLOBYTE(g_NextBotManager.m_debugType) < 0
          && ((v4 = &m_actor->INextBot, g_NextBotManager.m_debugFilterList.m_Size == 0)
           || (v16 = this->m_actor,
               IsDebugFilterMatch = NextBotManager::IsDebugFilterMatch(&g_NextBotManager, &m_actor->INextBot),
               m_actor = v16,
               IsDebugFilterMatch))
          && (*(m_actor->_vptr_INextBotEventResponder + 96))(v4, 128) != 0
          || NextBotDebugHistory.m_pParent->m_Value.m_nValue != 0 )
        {
          v5 = (*(v2->_vptr_INextBotEventResponder + 64))(v2);
          v6 = CUtlSymbol::String(&this->m_behavior->m_name);
          v7 = (*(this->m_actor->_vptr_INextBotEventResponder + 97))(&this->m_actor->INextBot);
          v8 = gpGlobals;
          if ( gpGlobals != 0 )
          {
            if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
            {
              m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
              if ( m_pfnWarningFunc != 0 )
              {
                v14 = gpGlobals;
                v15 = v7;
                m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
                v8 = v14;
                v7 = v15;
              }
            }
            m_flCurrentTime = v8->m_flCurrentTime;
          }
          else
          {
            m_flCurrentTime = 0.0;
          }
          v11 = this->m_actor;
          memset(&v19, 100, 3);
          v19._color[3] = -1;
          INextBot::DebugConColorMsg(
            &v11->INextBot,
            NextBotDebugType::NEXTBOT_EVENTS,
            &v19,
            "%3.2f: %s:%s: %s received EVENT %s\n",
            m_flCurrentTime,
            v7,
            v6,
            v5,
            "OnLose");
        }
        m_actor = this->m_actor;
      }
      (*(v2->_vptr_INextBotEventResponder + 109))(&v18, v2, m_actor);
      _result = v18;
      if ( v18.m_type != ActionResultType::CONTINUE )
        break;
      v2 = v2->m_buriedUnderMe;
    }
    while ( v2 != 0 );
    Action<CSimpleBot>::StorePendingEventResult(this, v2, "OnLose", &_result);
    for ( i = (*(this->_vptr_INextBotEventResponder + 3))(this);
          i != 0;
          i = (*(this->_vptr_INextBotEventResponder + 4))(this, i) )
    {
      (*(*i + 344LL))(i);
    }
  }
}


// Action<CDOTA_BaseNPC>::OnCommandMoveTo  (line 875, @0x0000000002889c10, libserver.so)  // inlines: EventDesiredResult, IActionResult, OnCommandMoveTo
// calls: Action<CDOTA_BaseNPC>::DebugReceivedEvent, Action<CDOTA_BaseNPC>::StorePendingEventResult
// strings: "OnCommandMoveTo"
void __fastcall Action<CDOTA_BaseNPC>::OnCommandMoveTo(Action<CDOTA_BaseNPC> *const this, const Vector *const pos)
{
  Action<CDOTA_BaseNPC> *v4; // rbx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rsi
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 i; // rbx
  EventDesiredResult<CDOTA_BaseNPC> _result; // [rsp+0h] [rbp-60h] BYREF
  EventDesiredResult<CDOTA_BaseNPC> v14; // [rsp+20h] [rbp-40h] BYREF

  if ( this->m_isStarted )
  {
    _result.m_type = ActionResultType::CONTINUE;
    v4 = this;
    _result.m_action = 0;
    _result.m_reason = 0;
    _result.m_priority = EventResultPriorityType::RESULT_TRY;
    do
    {
      Action<CDOTA_BaseNPC>::DebugReceivedEvent(this, v4, "OnCommandMoveTo");
      (*(v4->_vptr_INextBotEventResponder + 110))(
        &v14,
        v4,
        this->m_actor,
        pos,
        v5,
        v6,
        *&_result.m_type,
        _result.m_action,
        _result.m_reason,
        _result.m_priority);
      _result = v14;
      if ( v14.m_type != ActionResultType::CONTINUE )
        break;
      v4 = v4->m_buriedUnderMe;
    }
    while ( v4 != 0 );
    Action<CDOTA_BaseNPC>::StorePendingEventResult(this, v4, "OnCommandMoveTo", &_result);
    for ( i = (*(this->_vptr_INextBotEventResponder + 3))(
                this,
                v9,
                v7,
                v8,
                v10,
                v11,
                *&_result.m_type,
                _result.m_action,
                _result.m_reason,
                _result.m_priority); i != 0; i = (*(this->_vptr_INextBotEventResponder + 4))(this, i) )
      (*(*i + 352LL))(i, pos);
  }
}


// Action<CSimpleBot>::OnCommandMoveTo  (line 875, @0x0000000002f2ae50, libserver.so)  // inlines: Color, DebugReceivedEvent, EventDesiredResult, GetBool, GetInt, GetName, IActionResult, IsDebugFilterMatch, IsDebugging, OnCommandMoveTo, SetColor, curtime
// calls: CUtlSymbol::String, INextBot::DebugConColorMsg, Action<CSimpleBot>::StorePendingEventResult, NextBotManager::IsDebugFilterMatch, __stack_chk_fail
// strings: "%3.2f: %s:%s: %s received EVENT %s\n", "OnCommandMoveTo"
void __fastcall Action<CSimpleBot>::OnCommandMoveTo(Action<CSimpleBot> *const this, const Vector *const pos)
{
  Action<CSimpleBot> *v4; // r15
  CSimpleBot *m_actor; // rdx
  INextBot *v6; // r14
  const char *v7; // r14
  __int64 v8; // rax
  const char *v9; // r9
  const char *v10; // r8
  CGlobalVars *v11; // rdx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  double m_flCurrentTime; // xmm0_8
  CSimpleBot *v14; // rax
  __int64 i; // r13
  bool IsDebugFilterMatch; // al
  CGlobalVars *v17; // [rsp+10h] [rbp-A0h]
  const char *v18; // [rsp+18h] [rbp-98h]
  const char *v19; // [rsp+28h] [rbp-88h]
  CSimpleBot *v20; // [rsp+28h] [rbp-88h]
  EventDesiredResult<CSimpleBot> _result; // [rsp+30h] [rbp-80h] BYREF
  EventDesiredResult<CSimpleBot> v22; // [rsp+50h] [rbp-60h] BYREF
  Color v23; // [rsp+70h] [rbp-40h] BYREF
  unsigned __int64 v24; // [rsp+78h] [rbp-38h]

  v24 = __readfsqword(0x28u);
  if ( this->m_isStarted )
  {
    _result.m_type = ActionResultType::CONTINUE;
    _result.m_action = 0;
    v4 = this;
    _result.m_reason = 0;
    _result.m_priority = EventResultPriorityType::RESULT_TRY;
    do
    {
      m_actor = this->m_actor;
      if ( m_actor != 0 )
      {
        if ( SLOBYTE(g_NextBotManager.m_debugType) < 0
          && ((v6 = &m_actor->INextBot, g_NextBotManager.m_debugFilterList.m_Size == 0)
           || (v20 = this->m_actor,
               IsDebugFilterMatch = NextBotManager::IsDebugFilterMatch(&g_NextBotManager, &m_actor->INextBot),
               m_actor = v20,
               IsDebugFilterMatch))
          && (*(m_actor->_vptr_INextBotEventResponder + 96))(v6, 128) != 0
          || NextBotDebugHistory.m_pParent->m_Value.m_nValue != 0 )
        {
          v7 = (*(v4->_vptr_INextBotEventResponder + 64))(v4);
          v19 = CUtlSymbol::String(&this->m_behavior->m_name);
          v8 = (*(this->m_actor->_vptr_INextBotEventResponder + 97))(&this->m_actor->INextBot);
          v9 = v19;
          v10 = v8;
          v11 = gpGlobals;
          if ( gpGlobals != 0 )
          {
            if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
            {
              m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
              if ( m_pfnWarningFunc != 0 )
              {
                v17 = gpGlobals;
                v18 = v10;
                m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
                v11 = v17;
                v10 = v18;
                v9 = v19;
              }
            }
            m_flCurrentTime = v11->m_flCurrentTime;
          }
          else
          {
            m_flCurrentTime = 0.0;
          }
          v14 = this->m_actor;
          memset(&v23, 100, 3);
          v23._color[3] = -1;
          INextBot::DebugConColorMsg(
            &v14->INextBot,
            NextBotDebugType::NEXTBOT_EVENTS,
            &v23,
            "%3.2f: %s:%s: %s received EVENT %s\n",
            m_flCurrentTime,
            v10,
            v9,
            v7,
            "OnCommandMoveTo");
        }
        m_actor = this->m_actor;
      }
      (*(v4->_vptr_INextBotEventResponder + 110))(&v22, v4, m_actor, pos);
      _result = v22;
      if ( v22.m_type != ActionResultType::CONTINUE )
        break;
      v4 = v4->m_buriedUnderMe;
    }
    while ( v4 != 0 );
    Action<CSimpleBot>::StorePendingEventResult(this, v4, "OnCommandMoveTo", &_result);
    for ( i = (*(this->_vptr_INextBotEventResponder + 3))(this);
          i != 0;
          i = (*(this->_vptr_INextBotEventResponder + 4))(this, i) )
    {
      (*(*i + 352LL))(i, pos);
    }
  }
}


// Action<CDOTA_BaseNPC>::OnCommandMoveToDirection  (line 876, @0x0000000002889d10, libserver.so)  // inlines: EventDesiredResult, IActionResult, OnCommandMoveToDirection
// calls: Action<CDOTA_BaseNPC>::DebugReceivedEvent, Action<CDOTA_BaseNPC>::StorePendingEventResult
// strings: "OnCommandMoveToDirection"
void __fastcall Action<CDOTA_BaseNPC>::OnCommandMoveToDirection(
        Action<CDOTA_BaseNPC> *const this,
        const Vector *const pos)
{
  Action<CDOTA_BaseNPC> *v4; // rbx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rsi
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 i; // rbx
  EventDesiredResult<CDOTA_BaseNPC> _result; // [rsp+0h] [rbp-60h] BYREF
  EventDesiredResult<CDOTA_BaseNPC> v14; // [rsp+20h] [rbp-40h] BYREF

  if ( this->m_isStarted )
  {
    _result.m_type = ActionResultType::CONTINUE;
    v4 = this;
    _result.m_action = 0;
    _result.m_reason = 0;
    _result.m_priority = EventResultPriorityType::RESULT_TRY;
    do
    {
      Action<CDOTA_BaseNPC>::DebugReceivedEvent(this, v4, "OnCommandMoveToDirection");
      (*(v4->_vptr_INextBotEventResponder + 111))(
        &v14,
        v4,
        this->m_actor,
        pos,
        v5,
        v6,
        *&_result.m_type,
        _result.m_action,
        _result.m_reason,
        _result.m_priority);
      _result = v14;
      if ( v14.m_type != ActionResultType::CONTINUE )
        break;
      v4 = v4->m_buriedUnderMe;
    }
    while ( v4 != 0 );
    Action<CDOTA_BaseNPC>::StorePendingEventResult(this, v4, "OnCommandMoveToDirection", &_result);
    for ( i = (*(this->_vptr_INextBotEventResponder + 3))(
                this,
                v9,
                v7,
                v8,
                v10,
                v11,
                *&_result.m_type,
                _result.m_action,
                _result.m_reason,
                _result.m_priority); i != 0; i = (*(this->_vptr_INextBotEventResponder + 4))(this, i) )
      (*(*i + 360LL))(i, pos);
  }
}


// Action<CSimpleBot>::OnCommandMoveToDirection  (line 876, @0x0000000002f2b110, libserver.so)  // inlines: Color, DebugReceivedEvent, EventDesiredResult, GetBool, GetInt, GetName, IActionResult, IsDebugFilterMatch, IsDebugging, OnCommandMoveToDirection, SetColor, curtime
// calls: CUtlSymbol::String, INextBot::DebugConColorMsg, Action<CSimpleBot>::StorePendingEventResult, NextBotManager::IsDebugFilterMatch, __stack_chk_fail
// strings: "%3.2f: %s:%s: %s received EVENT %s\n", "OnCommandMoveToDirection"
void __fastcall Action<CSimpleBot>::OnCommandMoveToDirection(Action<CSimpleBot> *const this, const Vector *const pos)
{
  Action<CSimpleBot> *v4; // r15
  CSimpleBot *m_actor; // rdx
  INextBot *v6; // r14
  const char *v7; // r14
  __int64 v8; // rax
  const char *v9; // r9
  const char *v10; // r8
  CGlobalVars *v11; // rdx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  double m_flCurrentTime; // xmm0_8
  CSimpleBot *v14; // rax
  __int64 i; // r13
  bool IsDebugFilterMatch; // al
  CGlobalVars *v17; // [rsp+10h] [rbp-A0h]
  const char *v18; // [rsp+18h] [rbp-98h]
  const char *v19; // [rsp+28h] [rbp-88h]
  CSimpleBot *v20; // [rsp+28h] [rbp-88h]
  EventDesiredResult<CSimpleBot> _result; // [rsp+30h] [rbp-80h] BYREF
  EventDesiredResult<CSimpleBot> v22; // [rsp+50h] [rbp-60h] BYREF
  Color v23; // [rsp+70h] [rbp-40h] BYREF
  unsigned __int64 v24; // [rsp+78h] [rbp-38h]

  v24 = __readfsqword(0x28u);
  if ( this->m_isStarted )
  {
    _result.m_type = ActionResultType::CONTINUE;
    _result.m_action = 0;
    v4 = this;
    _result.m_reason = 0;
    _result.m_priority = EventResultPriorityType::RESULT_TRY;
    do
    {
      m_actor = this->m_actor;
      if ( m_actor != 0 )
      {
        if ( SLOBYTE(g_NextBotManager.m_debugType) < 0
          && ((v6 = &m_actor->INextBot, g_NextBotManager.m_debugFilterList.m_Size == 0)
           || (v20 = this->m_actor,
               IsDebugFilterMatch = NextBotManager::IsDebugFilterMatch(&g_NextBotManager, &m_actor->INextBot),
               m_actor = v20,
               IsDebugFilterMatch))
          && (*(m_actor->_vptr_INextBotEventResponder + 96))(v6, 128) != 0
          || NextBotDebugHistory.m_pParent->m_Value.m_nValue != 0 )
        {
          v7 = (*(v4->_vptr_INextBotEventResponder + 64))(v4);
          v19 = CUtlSymbol::String(&this->m_behavior->m_name);
          v8 = (*(this->m_actor->_vptr_INextBotEventResponder + 97))(&this->m_actor->INextBot);
          v9 = v19;
          v10 = v8;
          v11 = gpGlobals;
          if ( gpGlobals != 0 )
          {
            if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
            {
              m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
              if ( m_pfnWarningFunc != 0 )
              {
                v17 = gpGlobals;
                v18 = v10;
                m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
                v11 = v17;
                v10 = v18;
                v9 = v19;
              }
            }
            m_flCurrentTime = v11->m_flCurrentTime;
          }
          else
          {
            m_flCurrentTime = 0.0;
          }
          v14 = this->m_actor;
          memset(&v23, 100, 3);
          v23._color[3] = -1;
          INextBot::DebugConColorMsg(
            &v14->INextBot,
            NextBotDebugType::NEXTBOT_EVENTS,
            &v23,
            "%3.2f: %s:%s: %s received EVENT %s\n",
            m_flCurrentTime,
            v10,
            v9,
            v7,
            "OnCommandMoveToDirection");
        }
        m_actor = this->m_actor;
      }
      (*(v4->_vptr_INextBotEventResponder + 111))(&v22, v4, m_actor, pos);
      _result = v22;
      if ( v22.m_type != ActionResultType::CONTINUE )
        break;
      v4 = v4->m_buriedUnderMe;
    }
    while ( v4 != 0 );
    Action<CSimpleBot>::StorePendingEventResult(this, v4, "OnCommandMoveToDirection", &_result);
    for ( i = (*(this->_vptr_INextBotEventResponder + 3))(this);
          i != 0;
          i = (*(this->_vptr_INextBotEventResponder + 4))(this, i) )
    {
      (*(*i + 360LL))(i, pos);
    }
  }
}


// Action<CDOTA_BaseNPC>::OnCommandMoveToAggressive  (line 877, @0x0000000002889e10, libserver.so)  // inlines: EventDesiredResult, IActionResult, OnCommandMoveToAggressive
// calls: Action<CDOTA_BaseNPC>::DebugReceivedEvent, Action<CDOTA_BaseNPC>::StorePendingEventResult
// strings: "OnCommandMoveToAggressive"
void __fastcall Action<CDOTA_BaseNPC>::OnCommandMoveToAggressive(
        Action<CDOTA_BaseNPC> *const this,
        const Vector *const pos)
{
  Action<CDOTA_BaseNPC> *v4; // rbx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rsi
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 i; // rbx
  EventDesiredResult<CDOTA_BaseNPC> _result; // [rsp+0h] [rbp-60h] BYREF
  EventDesiredResult<CDOTA_BaseNPC> v14; // [rsp+20h] [rbp-40h] BYREF

  if ( this->m_isStarted )
  {
    _result.m_type = ActionResultType::CONTINUE;
    v4 = this;
    _result.m_action = 0;
    _result.m_reason = 0;
    _result.m_priority = EventResultPriorityType::RESULT_TRY;
    do
    {
      Action<CDOTA_BaseNPC>::DebugReceivedEvent(this, v4, "OnCommandMoveToAggressive");
      (*(v4->_vptr_INextBotEventResponder + 112))(
        &v14,
        v4,
        this->m_actor,
        pos,
        v5,
        v6,
        *&_result.m_type,
        _result.m_action,
        _result.m_reason,
        _result.m_priority);
      _result = v14;
      if ( v14.m_type != ActionResultType::CONTINUE )
        break;
      v4 = v4->m_buriedUnderMe;
    }
    while ( v4 != 0 );
    Action<CDOTA_BaseNPC>::StorePendingEventResult(this, v4, "OnCommandMoveToAggressive", &_result);
    for ( i = (*(this->_vptr_INextBotEventResponder + 3))(
                this,
                v9,
                v7,
                v8,
                v10,
                v11,
                *&_result.m_type,
                _result.m_action,
                _result.m_reason,
                _result.m_priority); i != 0; i = (*(this->_vptr_INextBotEventResponder + 4))(this, i) )
      (*(*i + 368LL))(i, pos);
  }
}


// Action<CSimpleBot>::OnCommandMoveToAggressive  (line 877, @0x0000000002f2b3d0, libserver.so)  // inlines: Color, DebugReceivedEvent, EventDesiredResult, GetBool, GetInt, GetName, IActionResult, IsDebugFilterMatch, IsDebugging, OnCommandMoveToAggressive, SetColor, curtime
// calls: CUtlSymbol::String, INextBot::DebugConColorMsg, Action<CSimpleBot>::StorePendingEventResult, NextBotManager::IsDebugFilterMatch, __stack_chk_fail
// strings: "%3.2f: %s:%s: %s received EVENT %s\n", "OnCommandMoveToAggressive"
void __fastcall Action<CSimpleBot>::OnCommandMoveToAggressive(Action<CSimpleBot> *const this, const Vector *const pos)
{
  Action<CSimpleBot> *v4; // r15
  CSimpleBot *m_actor; // rdx
  INextBot *v6; // r14
  const char *v7; // r14
  __int64 v8; // rax
  const char *v9; // r9
  const char *v10; // r8
  CGlobalVars *v11; // rdx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  double m_flCurrentTime; // xmm0_8
  CSimpleBot *v14; // rax
  __int64 i; // r13
  bool IsDebugFilterMatch; // al
  CGlobalVars *v17; // [rsp+10h] [rbp-A0h]
  const char *v18; // [rsp+18h] [rbp-98h]
  const char *v19; // [rsp+28h] [rbp-88h]
  CSimpleBot *v20; // [rsp+28h] [rbp-88h]
  EventDesiredResult<CSimpleBot> _result; // [rsp+30h] [rbp-80h] BYREF
  EventDesiredResult<CSimpleBot> v22; // [rsp+50h] [rbp-60h] BYREF
  Color v23; // [rsp+70h] [rbp-40h] BYREF
  unsigned __int64 v24; // [rsp+78h] [rbp-38h]

  v24 = __readfsqword(0x28u);
  if ( this->m_isStarted )
  {
    _result.m_type = ActionResultType::CONTINUE;
    _result.m_action = 0;
    v4 = this;
    _result.m_reason = 0;
    _result.m_priority = EventResultPriorityType::RESULT_TRY;
    do
    {
      m_actor = this->m_actor;
      if ( m_actor != 0 )
      {
        if ( SLOBYTE(g_NextBotManager.m_debugType) < 0
          && ((v6 = &m_actor->INextBot, g_NextBotManager.m_debugFilterList.m_Size == 0)
           || (v20 = this->m_actor,
               IsDebugFilterMatch = NextBotManager::IsDebugFilterMatch(&g_NextBotManager, &m_actor->INextBot),
               m_actor = v20,
               IsDebugFilterMatch))
          && (*(m_actor->_vptr_INextBotEventResponder + 96))(v6, 128) != 0
          || NextBotDebugHistory.m_pParent->m_Value.m_nValue != 0 )
        {
          v7 = (*(v4->_vptr_INextBotEventResponder + 64))(v4);
          v19 = CUtlSymbol::String(&this->m_behavior->m_name);
          v8 = (*(this->m_actor->_vptr_INextBotEventResponder + 97))(&this->m_actor->INextBot);
          v9 = v19;
          v10 = v8;
          v11 = gpGlobals;
          if ( gpGlobals != 0 )
          {
            if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
            {
              m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
              if ( m_pfnWarningFunc != 0 )
              {
                v17 = gpGlobals;
                v18 = v10;
                m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
                v11 = v17;
                v10 = v18;
                v9 = v19;
              }
            }
            m_flCurrentTime = v11->m_flCurrentTime;
          }
          else
          {
            m_flCurrentTime = 0.0;
          }
          v14 = this->m_actor;
          memset(&v23, 100, 3);
          v23._color[3] = -1;
          INextBot::DebugConColorMsg(
            &v14->INextBot,
            NextBotDebugType::NEXTBOT_EVENTS,
            &v23,
            "%3.2f: %s:%s: %s received EVENT %s\n",
            m_flCurrentTime,
            v10,
            v9,
            v7,
            "OnCommandMoveToAggressive");
        }
        m_actor = this->m_actor;
      }
      (*(v4->_vptr_INextBotEventResponder + 112))(&v22, v4, m_actor, pos);
      _result = v22;
      if ( v22.m_type != ActionResultType::CONTINUE )
        break;
      v4 = v4->m_buriedUnderMe;
    }
    while ( v4 != 0 );
    Action<CSimpleBot>::StorePendingEventResult(this, v4, "OnCommandMoveToAggressive", &_result);
    for ( i = (*(this->_vptr_INextBotEventResponder + 3))(this);
          i != 0;
          i = (*(this->_vptr_INextBotEventResponder + 4))(this, i) )
    {
      (*(*i + 368LL))(i, pos);
    }
  }
}


// Action<CDOTA_BaseNPC>::OnCommandPatrol  (line 878, @0x0000000002889f10, libserver.so)  // inlines: EventDesiredResult, IActionResult, OnCommandPatrol
// calls: Action<CDOTA_BaseNPC>::DebugReceivedEvent, Action<CDOTA_BaseNPC>::StorePendingEventResult
// strings: "OnCommandPatrol"
void __fastcall Action<CDOTA_BaseNPC>::OnCommandPatrol(Action<CDOTA_BaseNPC> *const this, const Vector *const pos)
{
  Action<CDOTA_BaseNPC> *v4; // rbx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rsi
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 i; // rbx
  EventDesiredResult<CDOTA_BaseNPC> _result; // [rsp+0h] [rbp-60h] BYREF
  EventDesiredResult<CDOTA_BaseNPC> v14; // [rsp+20h] [rbp-40h] BYREF

  if ( this->m_isStarted )
  {
    _result.m_type = ActionResultType::CONTINUE;
    v4 = this;
    _result.m_action = 0;
    _result.m_reason = 0;
    _result.m_priority = EventResultPriorityType::RESULT_TRY;
    do
    {
      Action<CDOTA_BaseNPC>::DebugReceivedEvent(this, v4, "OnCommandPatrol");
      (*(v4->_vptr_INextBotEventResponder + 113))(
        &v14,
        v4,
        this->m_actor,
        pos,
        v5,
        v6,
        *&_result.m_type,
        _result.m_action,
        _result.m_reason,
        _result.m_priority);
      _result = v14;
      if ( v14.m_type != ActionResultType::CONTINUE )
        break;
      v4 = v4->m_buriedUnderMe;
    }
    while ( v4 != 0 );
    Action<CDOTA_BaseNPC>::StorePendingEventResult(this, v4, "OnCommandPatrol", &_result);
    for ( i = (*(this->_vptr_INextBotEventResponder + 3))(
                this,
                v9,
                v7,
                v8,
                v10,
                v11,
                *&_result.m_type,
                _result.m_action,
                _result.m_reason,
                _result.m_priority); i != 0; i = (*(this->_vptr_INextBotEventResponder + 4))(this, i) )
      (*(*i + 376LL))(i, pos);
  }
}


// Action<CSimpleBot>::OnCommandPatrol  (line 878, @0x0000000002f2b690, libserver.so)  // inlines: Color, DebugReceivedEvent, EventDesiredResult, GetBool, GetInt, GetName, IActionResult, IsDebugFilterMatch, IsDebugging, OnCommandPatrol, SetColor, curtime
// calls: CUtlSymbol::String, INextBot::DebugConColorMsg, Action<CSimpleBot>::StorePendingEventResult, NextBotManager::IsDebugFilterMatch, __stack_chk_fail
// strings: "%3.2f: %s:%s: %s received EVENT %s\n", "OnCommandPatrol"
void __fastcall Action<CSimpleBot>::OnCommandPatrol(Action<CSimpleBot> *const this, const Vector *const pos)
{
  Action<CSimpleBot> *v4; // r15
  CSimpleBot *m_actor; // rdx
  INextBot *v6; // r14
  const char *v7; // r14
  __int64 v8; // rax
  const char *v9; // r9
  const char *v10; // r8
  CGlobalVars *v11; // rdx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  double m_flCurrentTime; // xmm0_8
  CSimpleBot *v14; // rax
  __int64 i; // r13
  bool IsDebugFilterMatch; // al
  CGlobalVars *v17; // [rsp+10h] [rbp-A0h]
  const char *v18; // [rsp+18h] [rbp-98h]
  const char *v19; // [rsp+28h] [rbp-88h]
  CSimpleBot *v20; // [rsp+28h] [rbp-88h]
  EventDesiredResult<CSimpleBot> _result; // [rsp+30h] [rbp-80h] BYREF
  EventDesiredResult<CSimpleBot> v22; // [rsp+50h] [rbp-60h] BYREF
  Color v23; // [rsp+70h] [rbp-40h] BYREF
  unsigned __int64 v24; // [rsp+78h] [rbp-38h]

  v24 = __readfsqword(0x28u);
  if ( this->m_isStarted )
  {
    _result.m_type = ActionResultType::CONTINUE;
    _result.m_action = 0;
    v4 = this;
    _result.m_reason = 0;
    _result.m_priority = EventResultPriorityType::RESULT_TRY;
    do
    {
      m_actor = this->m_actor;
      if ( m_actor != 0 )
      {
        if ( SLOBYTE(g_NextBotManager.m_debugType) < 0
          && ((v6 = &m_actor->INextBot, g_NextBotManager.m_debugFilterList.m_Size == 0)
           || (v20 = this->m_actor,
               IsDebugFilterMatch = NextBotManager::IsDebugFilterMatch(&g_NextBotManager, &m_actor->INextBot),
               m_actor = v20,
               IsDebugFilterMatch))
          && (*(m_actor->_vptr_INextBotEventResponder + 96))(v6, 128) != 0
          || NextBotDebugHistory.m_pParent->m_Value.m_nValue != 0 )
        {
          v7 = (*(v4->_vptr_INextBotEventResponder + 64))(v4);
          v19 = CUtlSymbol::String(&this->m_behavior->m_name);
          v8 = (*(this->m_actor->_vptr_INextBotEventResponder + 97))(&this->m_actor->INextBot);
          v9 = v19;
          v10 = v8;
          v11 = gpGlobals;
          if ( gpGlobals != 0 )
          {
            if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
            {
              m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
              if ( m_pfnWarningFunc != 0 )
              {
                v17 = gpGlobals;
                v18 = v10;
                m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
                v11 = v17;
                v10 = v18;
                v9 = v19;
              }
            }
            m_flCurrentTime = v11->m_flCurrentTime;
          }
          else
          {
            m_flCurrentTime = 0.0;
          }
          v14 = this->m_actor;
          memset(&v23, 100, 3);
          v23._color[3] = -1;
          INextBot::DebugConColorMsg(
            &v14->INextBot,
            NextBotDebugType::NEXTBOT_EVENTS,
            &v23,
            "%3.2f: %s:%s: %s received EVENT %s\n",
            m_flCurrentTime,
            v10,
            v9,
            v7,
            "OnCommandPatrol");
        }
        m_actor = this->m_actor;
      }
      (*(v4->_vptr_INextBotEventResponder + 113))(&v22, v4, m_actor, pos);
      _result = v22;
      if ( v22.m_type != ActionResultType::CONTINUE )
        break;
      v4 = v4->m_buriedUnderMe;
    }
    while ( v4 != 0 );
    Action<CSimpleBot>::StorePendingEventResult(this, v4, "OnCommandPatrol", &_result);
    for ( i = (*(this->_vptr_INextBotEventResponder + 3))(this);
          i != 0;
          i = (*(this->_vptr_INextBotEventResponder + 4))(this, i) )
    {
      (*(*i + 376LL))(i, pos);
    }
  }
}


// Action<CDOTA_BaseNPC>::OnCommandAttack  (line 879, @0x000000000288a010, libserver.so)  // inlines: EventDesiredResult, IActionResult, OnCommandAttack
// calls: Action<CDOTA_BaseNPC>::DebugReceivedEvent, Action<CDOTA_BaseNPC>::StorePendingEventResult
// strings: "OnCommandAttack"
void __fastcall Action<CDOTA_BaseNPC>::OnCommandAttack(
        Action<CDOTA_BaseNPC> *const this,
        CBaseEntity *victim,
        bool bDeny)
{
  _BOOL4 v5; // r14d
  Action<CDOTA_BaseNPC> *v6; // rbx
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rsi
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 i; // rbx
  EventDesiredResult<CDOTA_BaseNPC> _result; // [rsp+0h] [rbp-70h] BYREF
  EventDesiredResult<CDOTA_BaseNPC> v15; // [rsp+20h] [rbp-50h] BYREF

  if ( this->m_isStarted )
  {
    _result.m_type = ActionResultType::CONTINUE;
    v5 = bDeny;
    _result.m_action = 0;
    v6 = this;
    _result.m_reason = 0;
    _result.m_priority = EventResultPriorityType::RESULT_TRY;
    do
    {
      Action<CDOTA_BaseNPC>::DebugReceivedEvent(this, v6, "OnCommandAttack");
      (*(v6->_vptr_INextBotEventResponder + 114))(
        &v15,
        v6,
        this->m_actor,
        victim,
        v5,
        v7,
        *&_result.m_type,
        _result.m_action,
        _result.m_reason,
        _result.m_priority);
      _result = v15;
      if ( v15.m_type != ActionResultType::CONTINUE )
        break;
      v6 = v6->m_buriedUnderMe;
    }
    while ( v6 != 0 );
    Action<CDOTA_BaseNPC>::StorePendingEventResult(this, v6, "OnCommandAttack", &_result);
    for ( i = (*(this->_vptr_INextBotEventResponder + 3))(
                this,
                v10,
                v8,
                v9,
                v11,
                v12,
                *&_result.m_type,
                _result.m_action,
                _result.m_reason,
                _result.m_priority); i != 0; i = (*(this->_vptr_INextBotEventResponder + 4))(this, i) )
      (*(*i + 384LL))(i, victim, v5);
  }
}


// Action<CSimpleBot>::OnCommandAttack  (line 879, @0x0000000002f2b950, libserver.so)  // inlines: Color, DebugReceivedEvent, EventDesiredResult, GetBool, GetInt, GetName, IActionResult, IsDebugFilterMatch, IsDebugging, OnCommandAttack, SetColor, curtime
// calls: CUtlSymbol::String, INextBot::DebugConColorMsg, Action<CSimpleBot>::StorePendingEventResult, NextBotManager::IsDebugFilterMatch, __stack_chk_fail
// strings: "%3.2f: %s:%s: %s received EVENT %s\n", "OnCommandAttack"
void __fastcall Action<CSimpleBot>::OnCommandAttack(Action<CSimpleBot> *const this, CBaseEntity *victim, bool bDeny)
{
  _BOOL4 v5; // r13d
  Action<CSimpleBot> *v6; // r14
  CSimpleBot *m_actor; // rdx
  INextBot *v8; // r15
  const char *v9; // r15
  __int64 v10; // rax
  const char *v11; // r9
  const char *v12; // r8
  CGlobalVars *v13; // rdx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  double m_flCurrentTime; // xmm0_8
  CSimpleBot *v16; // rax
  __int64 i; // r14
  bool IsDebugFilterMatch; // al
  CGlobalVars *v19; // [rsp+18h] [rbp-A8h]
  const char *v20; // [rsp+20h] [rbp-A0h]
  const char *v21; // [rsp+30h] [rbp-90h]
  CSimpleBot *v22; // [rsp+30h] [rbp-90h]
  EventDesiredResult<CSimpleBot> _result; // [rsp+40h] [rbp-80h] BYREF
  EventDesiredResult<CSimpleBot> v24; // [rsp+60h] [rbp-60h] BYREF
  Color v25; // [rsp+80h] [rbp-40h] BYREF
  unsigned __int64 v26; // [rsp+88h] [rbp-38h]

  v26 = __readfsqword(0x28u);
  if ( this->m_isStarted )
  {
    _result.m_type = ActionResultType::CONTINUE;
    v5 = bDeny;
    _result.m_action = 0;
    v6 = this;
    _result.m_reason = 0;
    _result.m_priority = EventResultPriorityType::RESULT_TRY;
    do
    {
      m_actor = this->m_actor;
      if ( m_actor != 0 )
      {
        if ( SLOBYTE(g_NextBotManager.m_debugType) < 0
          && ((v8 = &m_actor->INextBot, g_NextBotManager.m_debugFilterList.m_Size == 0)
           || (v22 = this->m_actor,
               IsDebugFilterMatch = NextBotManager::IsDebugFilterMatch(&g_NextBotManager, &m_actor->INextBot),
               m_actor = v22,
               IsDebugFilterMatch))
          && (*(m_actor->_vptr_INextBotEventResponder + 96))(v8, 128) != 0
          || NextBotDebugHistory.m_pParent->m_Value.m_nValue != 0 )
        {
          v9 = (*(v6->_vptr_INextBotEventResponder + 64))(v6);
          v21 = CUtlSymbol::String(&this->m_behavior->m_name);
          v10 = (*(this->m_actor->_vptr_INextBotEventResponder + 97))(&this->m_actor->INextBot);
          v11 = v21;
          v12 = v10;
          v13 = gpGlobals;
          if ( gpGlobals != 0 )
          {
            if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
            {
              m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
              if ( m_pfnWarningFunc != 0 )
              {
                v19 = gpGlobals;
                v20 = v12;
                m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
                v13 = v19;
                v12 = v20;
                v11 = v21;
              }
            }
            m_flCurrentTime = v13->m_flCurrentTime;
          }
          else
          {
            m_flCurrentTime = 0.0;
          }
          v16 = this->m_actor;
          memset(&v25, 100, 3);
          v25._color[3] = -1;
          INextBot::DebugConColorMsg(
            &v16->INextBot,
            NextBotDebugType::NEXTBOT_EVENTS,
            &v25,
            "%3.2f: %s:%s: %s received EVENT %s\n",
            m_flCurrentTime,
            v12,
            v11,
            v9,
            "OnCommandAttack");
        }
        m_actor = this->m_actor;
      }
      (*(v6->_vptr_INextBotEventResponder + 114))(&v24, v6, m_actor, victim, v5);
      _result = v24;
      if ( v24.m_type != ActionResultType::CONTINUE )
        break;
      v6 = v6->m_buriedUnderMe;
    }
    while ( v6 != 0 );
    Action<CSimpleBot>::StorePendingEventResult(this, v6, "OnCommandAttack", &_result);
    for ( i = (*(this->_vptr_INextBotEventResponder + 3))(this);
          i != 0;
          i = (*(this->_vptr_INextBotEventResponder + 4))(this, i) )
    {
      (*(*i + 384LL))(i, victim, v5);
    }
  }
}


// Action<CDOTA_BaseNPC>::OnCastAbilityNoTarget  (line 880, @0x000000000288a120, libserver.so)  // inlines: EventDesiredResult, IActionResult, OnCastAbilityNoTarget
// calls: Action<CDOTA_BaseNPC>::DebugReceivedEvent, Action<CDOTA_BaseNPC>::StorePendingEventResult
// strings: "OnCastAbilityNoTarget"
void __fastcall Action<CDOTA_BaseNPC>::OnCastAbilityNoTarget(
        Action<CDOTA_BaseNPC> *const this,
        CDOTABaseAbility *ability)
{
  Action<CDOTA_BaseNPC> *v4; // rbx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rsi
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 i; // rbx
  EventDesiredResult<CDOTA_BaseNPC> _result; // [rsp+0h] [rbp-60h] BYREF
  EventDesiredResult<CDOTA_BaseNPC> v14; // [rsp+20h] [rbp-40h] BYREF

  if ( this->m_isStarted )
  {
    _result.m_type = ActionResultType::CONTINUE;
    v4 = this;
    _result.m_action = 0;
    _result.m_reason = 0;
    _result.m_priority = EventResultPriorityType::RESULT_TRY;
    do
    {
      Action<CDOTA_BaseNPC>::DebugReceivedEvent(this, v4, "OnCastAbilityNoTarget");
      (*(v4->_vptr_INextBotEventResponder + 115))(
        &v14,
        v4,
        this->m_actor,
        ability,
        v5,
        v6,
        *&_result.m_type,
        _result.m_action,
        _result.m_reason,
        _result.m_priority);
      _result = v14;
      if ( v14.m_type != ActionResultType::CONTINUE )
        break;
      v4 = v4->m_buriedUnderMe;
    }
    while ( v4 != 0 );
    Action<CDOTA_BaseNPC>::StorePendingEventResult(this, v4, "OnCastAbilityNoTarget", &_result);
    for ( i = (*(this->_vptr_INextBotEventResponder + 3))(
                this,
                v9,
                v7,
                v8,
                v10,
                v11,
                *&_result.m_type,
                _result.m_action,
                _result.m_reason,
                _result.m_priority); i != 0; i = (*(this->_vptr_INextBotEventResponder + 4))(this, i) )
      (*(*i + 392LL))(i, ability);
  }
}


// Action<CSimpleBot>::OnCastAbilityNoTarget  (line 880, @0x0000000002f2bc20, libserver.so)  // inlines: Color, DebugReceivedEvent, EventDesiredResult, GetBool, GetInt, GetName, IActionResult, IsDebugFilterMatch, IsDebugging, OnCastAbilityNoTarget, SetColor, curtime
// calls: CUtlSymbol::String, INextBot::DebugConColorMsg, Action<CSimpleBot>::StorePendingEventResult, NextBotManager::IsDebugFilterMatch, __stack_chk_fail
// strings: "%3.2f: %s:%s: %s received EVENT %s\n", "OnCastAbilityNoTarget"
void __fastcall Action<CSimpleBot>::OnCastAbilityNoTarget(Action<CSimpleBot> *const this, CDOTABaseAbility *ability)
{
  Action<CSimpleBot> *v4; // r15
  CSimpleBot *m_actor; // rdx
  INextBot *v6; // r14
  const char *v7; // r14
  __int64 v8; // rax
  const char *v9; // r9
  const char *v10; // r8
  CGlobalVars *v11; // rdx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  double m_flCurrentTime; // xmm0_8
  CSimpleBot *v14; // rax
  __int64 i; // r13
  bool IsDebugFilterMatch; // al
  CGlobalVars *v17; // [rsp+10h] [rbp-A0h]
  const char *v18; // [rsp+18h] [rbp-98h]
  const char *v19; // [rsp+28h] [rbp-88h]
  CSimpleBot *v20; // [rsp+28h] [rbp-88h]
  EventDesiredResult<CSimpleBot> _result; // [rsp+30h] [rbp-80h] BYREF
  EventDesiredResult<CSimpleBot> v22; // [rsp+50h] [rbp-60h] BYREF
  Color v23; // [rsp+70h] [rbp-40h] BYREF
  unsigned __int64 v24; // [rsp+78h] [rbp-38h]

  v24 = __readfsqword(0x28u);
  if ( this->m_isStarted )
  {
    _result.m_type = ActionResultType::CONTINUE;
    _result.m_action = 0;
    v4 = this;
    _result.m_reason = 0;
    _result.m_priority = EventResultPriorityType::RESULT_TRY;
    do
    {
      m_actor = this->m_actor;
      if ( m_actor != 0 )
      {
        if ( SLOBYTE(g_NextBotManager.m_debugType) < 0
          && ((v6 = &m_actor->INextBot, g_NextBotManager.m_debugFilterList.m_Size == 0)
           || (v20 = this->m_actor,
               IsDebugFilterMatch = NextBotManager::IsDebugFilterMatch(&g_NextBotManager, &m_actor->INextBot),
               m_actor = v20,
               IsDebugFilterMatch))
          && (*(m_actor->_vptr_INextBotEventResponder + 96))(v6, 128) != 0
          || NextBotDebugHistory.m_pParent->m_Value.m_nValue != 0 )
        {
          v7 = (*(v4->_vptr_INextBotEventResponder + 64))(v4);
          v19 = CUtlSymbol::String(&this->m_behavior->m_name);
          v8 = (*(this->m_actor->_vptr_INextBotEventResponder + 97))(&this->m_actor->INextBot);
          v9 = v19;
          v10 = v8;
          v11 = gpGlobals;
          if ( gpGlobals != 0 )
          {
            if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
            {
              m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
              if ( m_pfnWarningFunc != 0 )
              {
                v17 = gpGlobals;
                v18 = v10;
                m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
                v11 = v17;
                v10 = v18;
                v9 = v19;
              }
            }
            m_flCurrentTime = v11->m_flCurrentTime;
          }
          else
          {
            m_flCurrentTime = 0.0;
          }
          v14 = this->m_actor;
          memset(&v23, 100, 3);
          v23._color[3] = -1;
          INextBot::DebugConColorMsg(
            &v14->INextBot,
            NextBotDebugType::NEXTBOT_EVENTS,
            &v23,
            "%3.2f: %s:%s: %s received EVENT %s\n",
            m_flCurrentTime,
            v10,
            v9,
            v7,
            "OnCastAbilityNoTarget");
        }
        m_actor = this->m_actor;
      }
      (*(v4->_vptr_INextBotEventResponder + 115))(&v22, v4, m_actor, ability);
      _result = v22;
      if ( v22.m_type != ActionResultType::CONTINUE )
        break;
      v4 = v4->m_buriedUnderMe;
    }
    while ( v4 != 0 );
    Action<CSimpleBot>::StorePendingEventResult(this, v4, "OnCastAbilityNoTarget", &_result);
    for ( i = (*(this->_vptr_INextBotEventResponder + 3))(this);
          i != 0;
          i = (*(this->_vptr_INextBotEventResponder + 4))(this, i) )
    {
      (*(*i + 392LL))(i, ability);
    }
  }
}


// Action<CDOTA_BaseNPC>::OnCastAbilityOnPosition  (line 881, @0x000000000288a220, libserver.so)  // inlines: EventDesiredResult, IActionResult, OnCastAbilityOnPosition
// calls: Action<CDOTA_BaseNPC>::DebugReceivedEvent, Action<CDOTA_BaseNPC>::StorePendingEventResult
// strings: "OnCastAbilityOnPosition"
void __fastcall Action<CDOTA_BaseNPC>::OnCastAbilityOnPosition(
        Action<CDOTA_BaseNPC> *const this,
        CDOTABaseAbility *ability,
        const Vector *const pos)
{
  Action<CDOTA_BaseNPC> *v6; // rbx
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rsi
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 i; // rbx
  EventDesiredResult<CDOTA_BaseNPC> _result; // [rsp+0h] [rbp-70h] BYREF
  EventDesiredResult<CDOTA_BaseNPC> v15; // [rsp+20h] [rbp-50h] BYREF

  if ( this->m_isStarted )
  {
    _result.m_type = ActionResultType::CONTINUE;
    _result.m_action = 0;
    v6 = this;
    _result.m_reason = 0;
    _result.m_priority = EventResultPriorityType::RESULT_TRY;
    do
    {
      Action<CDOTA_BaseNPC>::DebugReceivedEvent(this, v6, "OnCastAbilityOnPosition");
      (*(v6->_vptr_INextBotEventResponder + 116))(
        &v15,
        v6,
        this->m_actor,
        ability,
        pos,
        v7,
        *&_result.m_type,
        _result.m_action,
        _result.m_reason,
        _result.m_priority);
      _result = v15;
      if ( v15.m_type != ActionResultType::CONTINUE )
        break;
      v6 = v6->m_buriedUnderMe;
    }
    while ( v6 != 0 );
    Action<CDOTA_BaseNPC>::StorePendingEventResult(this, v6, "OnCastAbilityOnPosition", &_result);
    for ( i = (*(this->_vptr_INextBotEventResponder + 3))(
                this,
                v10,
                v8,
                v9,
                v11,
                v12,
                *&_result.m_type,
                _result.m_action,
                _result.m_reason,
                _result.m_priority); i != 0; i = (*(this->_vptr_INextBotEventResponder + 4))(this, i) )
      (*(*i + 400LL))(i, ability, pos);
  }
}


// Action<CSimpleBot>::OnCastAbilityOnPosition  (line 881, @0x0000000002f2bee0, libserver.so)  // inlines: Color, DebugReceivedEvent, EventDesiredResult, GetBool, GetInt, GetName, IActionResult, IsDebugFilterMatch, IsDebugging, OnCastAbilityOnPosition, SetColor, curtime
// calls: CUtlSymbol::String, INextBot::DebugConColorMsg, Action<CSimpleBot>::StorePendingEventResult, NextBotManager::IsDebugFilterMatch, __stack_chk_fail
// strings: "%3.2f: %s:%s: %s received EVENT %s\n", "OnCastAbilityOnPosition"
void __fastcall Action<CSimpleBot>::OnCastAbilityOnPosition(
        Action<CSimpleBot> *const this,
        CDOTABaseAbility *ability,
        const Vector *const pos)
{
  Action<CSimpleBot> *v6; // r14
  CSimpleBot *m_actor; // rdx
  INextBot *v8; // r15
  const char *v9; // r15
  __int64 v10; // rax
  const char *v11; // r9
  const char *v12; // r8
  CGlobalVars *v13; // rdx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  double m_flCurrentTime; // xmm0_8
  CSimpleBot *v16; // rax
  __int64 i; // r14
  bool IsDebugFilterMatch; // al
  CGlobalVars *v19; // [rsp+18h] [rbp-A8h]
  const char *v20; // [rsp+20h] [rbp-A0h]
  const char *v21; // [rsp+30h] [rbp-90h]
  CSimpleBot *v22; // [rsp+30h] [rbp-90h]
  EventDesiredResult<CSimpleBot> _result; // [rsp+40h] [rbp-80h] BYREF
  EventDesiredResult<CSimpleBot> v24; // [rsp+60h] [rbp-60h] BYREF
  Color v25; // [rsp+80h] [rbp-40h] BYREF
  unsigned __int64 v26; // [rsp+88h] [rbp-38h]

  v26 = __readfsqword(0x28u);
  if ( this->m_isStarted )
  {
    v6 = this;
    _result.m_type = ActionResultType::CONTINUE;
    _result.m_action = 0;
    _result.m_reason = 0;
    _result.m_priority = EventResultPriorityType::RESULT_TRY;
    do
    {
      m_actor = this->m_actor;
      if ( m_actor != 0 )
      {
        if ( SLOBYTE(g_NextBotManager.m_debugType) < 0
          && ((v8 = &m_actor->INextBot, g_NextBotManager.m_debugFilterList.m_Size == 0)
           || (v22 = this->m_actor,
               IsDebugFilterMatch = NextBotManager::IsDebugFilterMatch(&g_NextBotManager, &m_actor->INextBot),
               m_actor = v22,
               IsDebugFilterMatch))
          && (*(m_actor->_vptr_INextBotEventResponder + 96))(v8, 128) != 0
          || NextBotDebugHistory.m_pParent->m_Value.m_nValue != 0 )
        {
          v9 = (*(v6->_vptr_INextBotEventResponder + 64))(v6);
          v21 = CUtlSymbol::String(&this->m_behavior->m_name);
          v10 = (*(this->m_actor->_vptr_INextBotEventResponder + 97))(&this->m_actor->INextBot);
          v11 = v21;
          v12 = v10;
          v13 = gpGlobals;
          if ( gpGlobals != 0 )
          {
            if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
            {
              m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
              if ( m_pfnWarningFunc != 0 )
              {
                v19 = gpGlobals;
                v20 = v12;
                m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
                v13 = v19;
                v12 = v20;
                v11 = v21;
              }
            }
            m_flCurrentTime = v13->m_flCurrentTime;
          }
          else
          {
            m_flCurrentTime = 0.0;
          }
          v16 = this->m_actor;
          memset(&v25, 100, 3);
          v25._color[3] = -1;
          INextBot::DebugConColorMsg(
            &v16->INextBot,
            NextBotDebugType::NEXTBOT_EVENTS,
            &v25,
            "%3.2f: %s:%s: %s received EVENT %s\n",
            m_flCurrentTime,
            v12,
            v11,
            v9,
            "OnCastAbilityOnPosition");
        }
        m_actor = this->m_actor;
      }
      (*(v6->_vptr_INextBotEventResponder + 116))(&v24, v6, m_actor, ability, pos);
      _result = v24;
      if ( v24.m_type != ActionResultType::CONTINUE )
        break;
      v6 = v6->m_buriedUnderMe;
    }
    while ( v6 != 0 );
    Action<CSimpleBot>::StorePendingEventResult(this, v6, "OnCastAbilityOnPosition", &_result);
    for ( i = (*(this->_vptr_INextBotEventResponder + 3))(this);
          i != 0;
          i = (*(this->_vptr_INextBotEventResponder + 4))(this, i) )
    {
      (*(*i + 400LL))(i, ability, pos);
    }
  }
}


// Action<CDOTA_BaseNPC>::OnCastAbilityOnTarget  (line 882, @0x000000000288a330, libserver.so)  // inlines: EventDesiredResult, IActionResult, OnCastAbilityOnTarget
// calls: Action<CDOTA_BaseNPC>::DebugReceivedEvent, Action<CDOTA_BaseNPC>::StorePendingEventResult
// strings: "OnCastAbilityOnTarget"
void __fastcall Action<CDOTA_BaseNPC>::OnCastAbilityOnTarget(
        Action<CDOTA_BaseNPC> *const this,
        CDOTABaseAbility *ability,
        CBaseEntity *target)
{
  Action<CDOTA_BaseNPC> *v6; // rbx
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rsi
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 i; // rbx
  EventDesiredResult<CDOTA_BaseNPC> _result; // [rsp+0h] [rbp-70h] BYREF
  EventDesiredResult<CDOTA_BaseNPC> v15; // [rsp+20h] [rbp-50h] BYREF

  if ( this->m_isStarted )
  {
    _result.m_type = ActionResultType::CONTINUE;
    _result.m_action = 0;
    v6 = this;
    _result.m_reason = 0;
    _result.m_priority = EventResultPriorityType::RESULT_TRY;
    do
    {
      Action<CDOTA_BaseNPC>::DebugReceivedEvent(this, v6, "OnCastAbilityOnTarget");
      (*(v6->_vptr_INextBotEventResponder + 117))(
        &v15,
        v6,
        this->m_actor,
        ability,
        target,
        v7,
        *&_result.m_type,
        _result.m_action,
        _result.m_reason,
        _result.m_priority);
      _result = v15;
      if ( v15.m_type != ActionResultType::CONTINUE )
        break;
      v6 = v6->m_buriedUnderMe;
    }
    while ( v6 != 0 );
    Action<CDOTA_BaseNPC>::StorePendingEventResult(this, v6, "OnCastAbilityOnTarget", &_result);
    for ( i = (*(this->_vptr_INextBotEventResponder + 3))(
                this,
                v10,
                v8,
                v9,
                v11,
                v12,
                *&_result.m_type,
                _result.m_action,
                _result.m_reason,
                _result.m_priority); i != 0; i = (*(this->_vptr_INextBotEventResponder + 4))(this, i) )
      (*(*i + 408LL))(i, ability, target);
  }
}


// Action<CSimpleBot>::OnCastAbilityOnTarget  (line 882, @0x0000000002f2c1b0, libserver.so)  // inlines: Color, DebugReceivedEvent, EventDesiredResult, GetBool, GetInt, GetName, IActionResult, IsDebugFilterMatch, IsDebugging, OnCastAbilityOnTarget, SetColor, curtime
// calls: CUtlSymbol::String, INextBot::DebugConColorMsg, Action<CSimpleBot>::StorePendingEventResult, NextBotManager::IsDebugFilterMatch, __stack_chk_fail
// strings: "%3.2f: %s:%s: %s received EVENT %s\n", "OnCastAbilityOnTarget"
void __fastcall Action<CSimpleBot>::OnCastAbilityOnTarget(
        Action<CSimpleBot> *const this,
        CDOTABaseAbility *ability,
        CBaseEntity *target)
{
  Action<CSimpleBot> *v6; // r14
  CSimpleBot *m_actor; // rdx
  INextBot *v8; // r15
  const char *v9; // r15
  __int64 v10; // rax
  const char *v11; // r9
  const char *v12; // r8
  CGlobalVars *v13; // rdx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  double m_flCurrentTime; // xmm0_8
  CSimpleBot *v16; // rax
  __int64 i; // r14
  bool IsDebugFilterMatch; // al
  CGlobalVars *v19; // [rsp+18h] [rbp-A8h]
  const char *v20; // [rsp+20h] [rbp-A0h]
  const char *v21; // [rsp+30h] [rbp-90h]
  CSimpleBot *v22; // [rsp+30h] [rbp-90h]
  EventDesiredResult<CSimpleBot> _result; // [rsp+40h] [rbp-80h] BYREF
  EventDesiredResult<CSimpleBot> v24; // [rsp+60h] [rbp-60h] BYREF
  Color v25; // [rsp+80h] [rbp-40h] BYREF
  unsigned __int64 v26; // [rsp+88h] [rbp-38h]

  v26 = __readfsqword(0x28u);
  if ( this->m_isStarted )
  {
    v6 = this;
    _result.m_type = ActionResultType::CONTINUE;
    _result.m_action = 0;
    _result.m_reason = 0;
    _result.m_priority = EventResultPriorityType::RESULT_TRY;
    do
    {
      m_actor = this->m_actor;
      if ( m_actor != 0 )
      {
        if ( SLOBYTE(g_NextBotManager.m_debugType) < 0
          && ((v8 = &m_actor->INextBot, g_NextBotManager.m_debugFilterList.m_Size == 0)
           || (v22 = this->m_actor,
               IsDebugFilterMatch = NextBotManager::IsDebugFilterMatch(&g_NextBotManager, &m_actor->INextBot),
               m_actor = v22,
               IsDebugFilterMatch))
          && (*(m_actor->_vptr_INextBotEventResponder + 96))(v8, 128) != 0
          || NextBotDebugHistory.m_pParent->m_Value.m_nValue != 0 )
        {
          v9 = (*(v6->_vptr_INextBotEventResponder + 64))(v6);
          v21 = CUtlSymbol::String(&this->m_behavior->m_name);
          v10 = (*(this->m_actor->_vptr_INextBotEventResponder + 97))(&this->m_actor->INextBot);
          v11 = v21;
          v12 = v10;
          v13 = gpGlobals;
          if ( gpGlobals != 0 )
          {
            if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
            {
              m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
              if ( m_pfnWarningFunc != 0 )
              {
                v19 = gpGlobals;
                v20 = v12;
                m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
                v13 = v19;
                v12 = v20;
                v11 = v21;
              }
            }
            m_flCurrentTime = v13->m_flCurrentTime;
          }
          else
          {
            m_flCurrentTime = 0.0;
          }
          v16 = this->m_actor;
          memset(&v25, 100, 3);
          v25._color[3] = -1;
          INextBot::DebugConColorMsg(
            &v16->INextBot,
            NextBotDebugType::NEXTBOT_EVENTS,
            &v25,
            "%3.2f: %s:%s: %s received EVENT %s\n",
            m_flCurrentTime,
            v12,
            v11,
            v9,
            "OnCastAbilityOnTarget");
        }
        m_actor = this->m_actor;
      }
      (*(v6->_vptr_INextBotEventResponder + 117))(&v24, v6, m_actor, ability, target);
      _result = v24;
      if ( v24.m_type != ActionResultType::CONTINUE )
        break;
      v6 = v6->m_buriedUnderMe;
    }
    while ( v6 != 0 );
    Action<CSimpleBot>::StorePendingEventResult(this, v6, "OnCastAbilityOnTarget", &_result);
    for ( i = (*(this->_vptr_INextBotEventResponder + 3))(this);
          i != 0;
          i = (*(this->_vptr_INextBotEventResponder + 4))(this, i) )
    {
      (*(*i + 408LL))(i, ability, target);
    }
  }
}


// Action<CDOTA_BaseNPC>::OnDropItem  (line 883, @0x000000000288a440, libserver.so)  // inlines: EventDesiredResult, IActionResult, OnDropItem
// calls: Action<CDOTA_BaseNPC>::DebugReceivedEvent, Action<CDOTA_BaseNPC>::StorePendingEventResult
// strings: "OnDropItem"
void __fastcall Action<CDOTA_BaseNPC>::OnDropItem(
        Action<CDOTA_BaseNPC> *const this,
        const Vector *const pos,
        CBaseEntity *item)
{
  Action<CDOTA_BaseNPC> *v6; // rbx
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rsi
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 i; // rbx
  EventDesiredResult<CDOTA_BaseNPC> _result; // [rsp+0h] [rbp-70h] BYREF
  EventDesiredResult<CDOTA_BaseNPC> v15; // [rsp+20h] [rbp-50h] BYREF

  if ( this->m_isStarted )
  {
    _result.m_type = ActionResultType::CONTINUE;
    _result.m_action = 0;
    v6 = this;
    _result.m_reason = 0;
    _result.m_priority = EventResultPriorityType::RESULT_TRY;
    do
    {
      Action<CDOTA_BaseNPC>::DebugReceivedEvent(this, v6, "OnDropItem");
      (*(v6->_vptr_INextBotEventResponder + 118))(
        &v15,
        v6,
        this->m_actor,
        pos,
        item,
        v7,
        *&_result.m_type,
        _result.m_action,
        _result.m_reason,
        _result.m_priority);
      _result = v15;
      if ( v15.m_type != ActionResultType::CONTINUE )
        break;
      v6 = v6->m_buriedUnderMe;
    }
    while ( v6 != 0 );
    Action<CDOTA_BaseNPC>::StorePendingEventResult(this, v6, "OnDropItem", &_result);
    for ( i = (*(this->_vptr_INextBotEventResponder + 3))(
                this,
                v10,
                v8,
                v9,
                v11,
                v12,
                *&_result.m_type,
                _result.m_action,
                _result.m_reason,
                _result.m_priority); i != 0; i = (*(this->_vptr_INextBotEventResponder + 4))(this, i) )
      (*(*i + 416LL))(i, pos, item);
  }
}


// Action<CSimpleBot>::OnDropItem  (line 883, @0x0000000002f2c480, libserver.so)  // inlines: Color, DebugReceivedEvent, EventDesiredResult, GetBool, GetInt, GetName, IActionResult, IsDebugFilterMatch, IsDebugging, OnDropItem, SetColor, curtime
// calls: CUtlSymbol::String, INextBot::DebugConColorMsg, Action<CSimpleBot>::StorePendingEventResult, NextBotManager::IsDebugFilterMatch, __stack_chk_fail
// strings: "%3.2f: %s:%s: %s received EVENT %s\n", "OnDropItem"
void __fastcall Action<CSimpleBot>::OnDropItem(
        Action<CSimpleBot> *const this,
        const Vector *const pos,
        CBaseEntity *item)
{
  Action<CSimpleBot> *v6; // r14
  CSimpleBot *m_actor; // rdx
  INextBot *v8; // r15
  const char *v9; // r15
  __int64 v10; // rax
  const char *v11; // r9
  const char *v12; // r8
  CGlobalVars *v13; // rdx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  double m_flCurrentTime; // xmm0_8
  CSimpleBot *v16; // rax
  __int64 i; // r14
  bool IsDebugFilterMatch; // al
  CGlobalVars *v19; // [rsp+18h] [rbp-A8h]
  const char *v20; // [rsp+20h] [rbp-A0h]
  const char *v21; // [rsp+30h] [rbp-90h]
  CSimpleBot *v22; // [rsp+30h] [rbp-90h]
  EventDesiredResult<CSimpleBot> _result; // [rsp+40h] [rbp-80h] BYREF
  EventDesiredResult<CSimpleBot> v24; // [rsp+60h] [rbp-60h] BYREF
  Color v25; // [rsp+80h] [rbp-40h] BYREF
  unsigned __int64 v26; // [rsp+88h] [rbp-38h]

  v26 = __readfsqword(0x28u);
  if ( this->m_isStarted )
  {
    v6 = this;
    _result.m_type = ActionResultType::CONTINUE;
    _result.m_action = 0;
    _result.m_reason = 0;
    _result.m_priority = EventResultPriorityType::RESULT_TRY;
    do
    {
      m_actor = this->m_actor;
      if ( m_actor != 0 )
      {
        if ( SLOBYTE(g_NextBotManager.m_debugType) < 0
          && ((v8 = &m_actor->INextBot, g_NextBotManager.m_debugFilterList.m_Size == 0)
           || (v22 = this->m_actor,
               IsDebugFilterMatch = NextBotManager::IsDebugFilterMatch(&g_NextBotManager, &m_actor->INextBot),
               m_actor = v22,
               IsDebugFilterMatch))
          && (*(m_actor->_vptr_INextBotEventResponder + 96))(v8, 128) != 0
          || NextBotDebugHistory.m_pParent->m_Value.m_nValue != 0 )
        {
          v9 = (*(v6->_vptr_INextBotEventResponder + 64))(v6);
          v21 = CUtlSymbol::String(&this->m_behavior->m_name);
          v10 = (*(this->m_actor->_vptr_INextBotEventResponder + 97))(&this->m_actor->INextBot);
          v11 = v21;
          v12 = v10;
          v13 = gpGlobals;
          if ( gpGlobals != 0 )
          {
            if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
            {
              m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
              if ( m_pfnWarningFunc != 0 )
              {
                v19 = gpGlobals;
                v20 = v12;
                m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
                v13 = v19;
                v12 = v20;
                v11 = v21;
              }
            }
            m_flCurrentTime = v13->m_flCurrentTime;
          }
          else
          {
            m_flCurrentTime = 0.0;
          }
          v16 = this->m_actor;
          memset(&v25, 100, 3);
          v25._color[3] = -1;
          INextBot::DebugConColorMsg(
            &v16->INextBot,
            NextBotDebugType::NEXTBOT_EVENTS,
            &v25,
            "%3.2f: %s:%s: %s received EVENT %s\n",
            m_flCurrentTime,
            v12,
            v11,
            v9,
            "OnDropItem");
        }
        m_actor = this->m_actor;
      }
      (*(v6->_vptr_INextBotEventResponder + 118))(&v24, v6, m_actor, pos, item);
      _result = v24;
      if ( v24.m_type != ActionResultType::CONTINUE )
        break;
      v6 = v6->m_buriedUnderMe;
    }
    while ( v6 != 0 );
    Action<CSimpleBot>::StorePendingEventResult(this, v6, "OnDropItem", &_result);
    for ( i = (*(this->_vptr_INextBotEventResponder + 3))(this);
          i != 0;
          i = (*(this->_vptr_INextBotEventResponder + 4))(this, i) )
    {
      (*(*i + 416LL))(i, pos, item);
    }
  }
}


// Action<CDOTA_BaseNPC>::OnGiveItem  (line 884, @0x000000000288a550, libserver.so)  // inlines: EventDesiredResult, IActionResult, OnGiveItem
// calls: Action<CDOTA_BaseNPC>::DebugReceivedEvent, Action<CDOTA_BaseNPC>::StorePendingEventResult
// strings: "OnGiveItem"
void __fastcall Action<CDOTA_BaseNPC>::OnGiveItem(
        Action<CDOTA_BaseNPC> *const this,
        CBaseEntity *target,
        CBaseEntity *item)
{
  Action<CDOTA_BaseNPC> *v6; // rbx
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rsi
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 i; // rbx
  EventDesiredResult<CDOTA_BaseNPC> _result; // [rsp+0h] [rbp-70h] BYREF
  EventDesiredResult<CDOTA_BaseNPC> v15; // [rsp+20h] [rbp-50h] BYREF

  if ( this->m_isStarted )
  {
    _result.m_type = ActionResultType::CONTINUE;
    _result.m_action = 0;
    v6 = this;
    _result.m_reason = 0;
    _result.m_priority = EventResultPriorityType::RESULT_TRY;
    do
    {
      Action<CDOTA_BaseNPC>::DebugReceivedEvent(this, v6, "OnGiveItem");
      (*(v6->_vptr_INextBotEventResponder + 119))(
        &v15,
        v6,
        this->m_actor,
        target,
        item,
        v7,
        *&_result.m_type,
        _result.m_action,
        _result.m_reason,
        _result.m_priority);
      _result = v15;
      if ( v15.m_type != ActionResultType::CONTINUE )
        break;
      v6 = v6->m_buriedUnderMe;
    }
    while ( v6 != 0 );
    Action<CDOTA_BaseNPC>::StorePendingEventResult(this, v6, "OnGiveItem", &_result);
    for ( i = (*(this->_vptr_INextBotEventResponder + 3))(
                this,
                v10,
                v8,
                v9,
                v11,
                v12,
                *&_result.m_type,
                _result.m_action,
                _result.m_reason,
                _result.m_priority); i != 0; i = (*(this->_vptr_INextBotEventResponder + 4))(this, i) )
      (*(*i + 424LL))(i, target, item);
  }
}


// Action<CSimpleBot>::OnGiveItem  (line 884, @0x0000000002f2c750, libserver.so)  // inlines: Color, DebugReceivedEvent, EventDesiredResult, GetBool, GetInt, GetName, IActionResult, IsDebugFilterMatch, IsDebugging, OnGiveItem, SetColor, curtime
// calls: CUtlSymbol::String, INextBot::DebugConColorMsg, Action<CSimpleBot>::StorePendingEventResult, NextBotManager::IsDebugFilterMatch, __stack_chk_fail
// strings: "%3.2f: %s:%s: %s received EVENT %s\n", "OnGiveItem"
void __fastcall Action<CSimpleBot>::OnGiveItem(Action<CSimpleBot> *const this, CBaseEntity *target, CBaseEntity *item)
{
  Action<CSimpleBot> *v6; // r14
  CSimpleBot *m_actor; // rdx
  INextBot *v8; // r15
  const char *v9; // r15
  __int64 v10; // rax
  const char *v11; // r9
  const char *v12; // r8
  CGlobalVars *v13; // rdx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  double m_flCurrentTime; // xmm0_8
  CSimpleBot *v16; // rax
  __int64 i; // r14
  bool IsDebugFilterMatch; // al
  CGlobalVars *v19; // [rsp+18h] [rbp-A8h]
  const char *v20; // [rsp+20h] [rbp-A0h]
  const char *v21; // [rsp+30h] [rbp-90h]
  CSimpleBot *v22; // [rsp+30h] [rbp-90h]
  EventDesiredResult<CSimpleBot> _result; // [rsp+40h] [rbp-80h] BYREF
  EventDesiredResult<CSimpleBot> v24; // [rsp+60h] [rbp-60h] BYREF
  Color v25; // [rsp+80h] [rbp-40h] BYREF
  unsigned __int64 v26; // [rsp+88h] [rbp-38h]

  v26 = __readfsqword(0x28u);
  if ( this->m_isStarted )
  {
    v6 = this;
    _result.m_type = ActionResultType::CONTINUE;
    _result.m_action = 0;
    _result.m_reason = 0;
    _result.m_priority = EventResultPriorityType::RESULT_TRY;
    do
    {
      m_actor = this->m_actor;
      if ( m_actor != 0 )
      {
        if ( SLOBYTE(g_NextBotManager.m_debugType) < 0
          && ((v8 = &m_actor->INextBot, g_NextBotManager.m_debugFilterList.m_Size == 0)
           || (v22 = this->m_actor,
               IsDebugFilterMatch = NextBotManager::IsDebugFilterMatch(&g_NextBotManager, &m_actor->INextBot),
               m_actor = v22,
               IsDebugFilterMatch))
          && (*(m_actor->_vptr_INextBotEventResponder + 96))(v8, 128) != 0
          || NextBotDebugHistory.m_pParent->m_Value.m_nValue != 0 )
        {
          v9 = (*(v6->_vptr_INextBotEventResponder + 64))(v6);
          v21 = CUtlSymbol::String(&this->m_behavior->m_name);
          v10 = (*(this->m_actor->_vptr_INextBotEventResponder + 97))(&this->m_actor->INextBot);
          v11 = v21;
          v12 = v10;
          v13 = gpGlobals;
          if ( gpGlobals != 0 )
          {
            if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
            {
              m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
              if ( m_pfnWarningFunc != 0 )
              {
                v19 = gpGlobals;
                v20 = v12;
                m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
                v13 = v19;
                v12 = v20;
                v11 = v21;
              }
            }
            m_flCurrentTime = v13->m_flCurrentTime;
          }
          else
          {
            m_flCurrentTime = 0.0;
          }
          v16 = this->m_actor;
          memset(&v25, 100, 3);
          v25._color[3] = -1;
          INextBot::DebugConColorMsg(
            &v16->INextBot,
            NextBotDebugType::NEXTBOT_EVENTS,
            &v25,
            "%3.2f: %s:%s: %s received EVENT %s\n",
            m_flCurrentTime,
            v12,
            v11,
            v9,
            "OnGiveItem");
        }
        m_actor = this->m_actor;
      }
      (*(v6->_vptr_INextBotEventResponder + 119))(&v24, v6, m_actor, target, item);
      _result = v24;
      if ( v24.m_type != ActionResultType::CONTINUE )
        break;
      v6 = v6->m_buriedUnderMe;
    }
    while ( v6 != 0 );
    Action<CSimpleBot>::StorePendingEventResult(this, v6, "OnGiveItem", &_result);
    for ( i = (*(this->_vptr_INextBotEventResponder + 3))(this);
          i != 0;
          i = (*(this->_vptr_INextBotEventResponder + 4))(this, i) )
    {
      (*(*i + 424LL))(i, target, item);
    }
  }
}


// Action<CDOTA_BaseNPC>::OnPickupItem  (line 885, @0x000000000288a660, libserver.so)  // inlines: EventDesiredResult, IActionResult, OnPickupItem
// calls: Action<CDOTA_BaseNPC>::DebugReceivedEvent, Action<CDOTA_BaseNPC>::StorePendingEventResult
// strings: "OnPickupItem"
void __fastcall Action<CDOTA_BaseNPC>::OnPickupItem(Action<CDOTA_BaseNPC> *const this, CBaseEntity *item)
{
  Action<CDOTA_BaseNPC> *v4; // rbx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rsi
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 i; // rbx
  EventDesiredResult<CDOTA_BaseNPC> _result; // [rsp+0h] [rbp-60h] BYREF
  EventDesiredResult<CDOTA_BaseNPC> v14; // [rsp+20h] [rbp-40h] BYREF

  if ( this->m_isStarted )
  {
    _result.m_type = ActionResultType::CONTINUE;
    v4 = this;
    _result.m_action = 0;
    _result.m_reason = 0;
    _result.m_priority = EventResultPriorityType::RESULT_TRY;
    do
    {
      Action<CDOTA_BaseNPC>::DebugReceivedEvent(this, v4, "OnPickupItem");
      (*(v4->_vptr_INextBotEventResponder + 120))(
        &v14,
        v4,
        this->m_actor,
        item,
        v5,
        v6,
        *&_result.m_type,
        _result.m_action,
        _result.m_reason,
        _result.m_priority);
      _result = v14;
      if ( v14.m_type != ActionResultType::CONTINUE )
        break;
      v4 = v4->m_buriedUnderMe;
    }
    while ( v4 != 0 );
    Action<CDOTA_BaseNPC>::StorePendingEventResult(this, v4, "OnPickupItem", &_result);
    for ( i = (*(this->_vptr_INextBotEventResponder + 3))(
                this,
                v9,
                v7,
                v8,
                v10,
                v11,
                *&_result.m_type,
                _result.m_action,
                _result.m_reason,
                _result.m_priority); i != 0; i = (*(this->_vptr_INextBotEventResponder + 4))(this, i) )
      (*(*i + 432LL))(i, item);
  }
}


// Action<CSimpleBot>::OnPickupItem  (line 885, @0x0000000002f2ca20, libserver.so)  // inlines: Color, DebugReceivedEvent, EventDesiredResult, GetBool, GetInt, GetName, IActionResult, IsDebugFilterMatch, IsDebugging, OnPickupItem, SetColor, curtime
// calls: CUtlSymbol::String, INextBot::DebugConColorMsg, Action<CSimpleBot>::StorePendingEventResult, NextBotManager::IsDebugFilterMatch, __stack_chk_fail
// strings: "%3.2f: %s:%s: %s received EVENT %s\n", "OnPickupItem"
void __fastcall Action<CSimpleBot>::OnPickupItem(Action<CSimpleBot> *const this, CBaseEntity *item)
{
  Action<CSimpleBot> *v4; // r15
  CSimpleBot *m_actor; // rdx
  INextBot *v6; // r14
  const char *v7; // r14
  __int64 v8; // rax
  const char *v9; // r9
  const char *v10; // r8
  CGlobalVars *v11; // rdx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  double m_flCurrentTime; // xmm0_8
  CSimpleBot *v14; // rax
  __int64 i; // r13
  bool IsDebugFilterMatch; // al
  CGlobalVars *v17; // [rsp+10h] [rbp-A0h]
  const char *v18; // [rsp+18h] [rbp-98h]
  const char *v19; // [rsp+28h] [rbp-88h]
  CSimpleBot *v20; // [rsp+28h] [rbp-88h]
  EventDesiredResult<CSimpleBot> _result; // [rsp+30h] [rbp-80h] BYREF
  EventDesiredResult<CSimpleBot> v22; // [rsp+50h] [rbp-60h] BYREF
  Color v23; // [rsp+70h] [rbp-40h] BYREF
  unsigned __int64 v24; // [rsp+78h] [rbp-38h]

  v24 = __readfsqword(0x28u);
  if ( this->m_isStarted )
  {
    _result.m_type = ActionResultType::CONTINUE;
    _result.m_action = 0;
    v4 = this;
    _result.m_reason = 0;
    _result.m_priority = EventResultPriorityType::RESULT_TRY;
    do
    {
      m_actor = this->m_actor;
      if ( m_actor != 0 )
      {
        if ( SLOBYTE(g_NextBotManager.m_debugType) < 0
          && ((v6 = &m_actor->INextBot, g_NextBotManager.m_debugFilterList.m_Size == 0)
           || (v20 = this->m_actor,
               IsDebugFilterMatch = NextBotManager::IsDebugFilterMatch(&g_NextBotManager, &m_actor->INextBot),
               m_actor = v20,
               IsDebugFilterMatch))
          && (*(m_actor->_vptr_INextBotEventResponder + 96))(v6, 128) != 0
          || NextBotDebugHistory.m_pParent->m_Value.m_nValue != 0 )
        {
          v7 = (*(v4->_vptr_INextBotEventResponder + 64))(v4);
          v19 = CUtlSymbol::String(&this->m_behavior->m_name);
          v8 = (*(this->m_actor->_vptr_INextBotEventResponder + 97))(&this->m_actor->INextBot);
          v9 = v19;
          v10 = v8;
          v11 = gpGlobals;
          if ( gpGlobals != 0 )
          {
            if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
            {
              m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
              if ( m_pfnWarningFunc != 0 )
              {
                v17 = gpGlobals;
                v18 = v10;
                m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
                v11 = v17;
                v10 = v18;
                v9 = v19;
              }
            }
            m_flCurrentTime = v11->m_flCurrentTime;
          }
          else
          {
            m_flCurrentTime = 0.0;
          }
          v14 = this->m_actor;
          memset(&v23, 100, 3);
          v23._color[3] = -1;
          INextBot::DebugConColorMsg(
            &v14->INextBot,
            NextBotDebugType::NEXTBOT_EVENTS,
            &v23,
            "%3.2f: %s:%s: %s received EVENT %s\n",
            m_flCurrentTime,
            v10,
            v9,
            v7,
            "OnPickupItem");
        }
        m_actor = this->m_actor;
      }
      (*(v4->_vptr_INextBotEventResponder + 120))(&v22, v4, m_actor, item);
      _result = v22;
      if ( v22.m_type != ActionResultType::CONTINUE )
        break;
      v4 = v4->m_buriedUnderMe;
    }
    while ( v4 != 0 );
    Action<CSimpleBot>::StorePendingEventResult(this, v4, "OnPickupItem", &_result);
    for ( i = (*(this->_vptr_INextBotEventResponder + 3))(this);
          i != 0;
          i = (*(this->_vptr_INextBotEventResponder + 4))(this, i) )
    {
      (*(*i + 432LL))(i, item);
    }
  }
}


// Action<CDOTA_BaseNPC>::OnPickupRune  (line 886, @0x000000000288a760, libserver.so)  // inlines: EventDesiredResult, IActionResult, OnPickupRune
// calls: Action<CDOTA_BaseNPC>::DebugReceivedEvent, Action<CDOTA_BaseNPC>::StorePendingEventResult
// strings: "OnPickupRune"
void __fastcall Action<CDOTA_BaseNPC>::OnPickupRune(Action<CDOTA_BaseNPC> *const this, CBaseEntity *item)
{
  Action<CDOTA_BaseNPC> *v4; // rbx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rsi
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 i; // rbx
  EventDesiredResult<CDOTA_BaseNPC> _result; // [rsp+0h] [rbp-60h] BYREF
  EventDesiredResult<CDOTA_BaseNPC> v14; // [rsp+20h] [rbp-40h] BYREF

  if ( this->m_isStarted )
  {
    _result.m_type = ActionResultType::CONTINUE;
    v4 = this;
    _result.m_action = 0;
    _result.m_reason = 0;
    _result.m_priority = EventResultPriorityType::RESULT_TRY;
    do
    {
      Action<CDOTA_BaseNPC>::DebugReceivedEvent(this, v4, "OnPickupRune");
      (*(v4->_vptr_INextBotEventResponder + 121))(
        &v14,
        v4,
        this->m_actor,
        item,
        v5,
        v6,
        *&_result.m_type,
        _result.m_action,
        _result.m_reason,
        _result.m_priority);
      _result = v14;
      if ( v14.m_type != ActionResultType::CONTINUE )
        break;
      v4 = v4->m_buriedUnderMe;
    }
    while ( v4 != 0 );
    Action<CDOTA_BaseNPC>::StorePendingEventResult(this, v4, "OnPickupRune", &_result);
    for ( i = (*(this->_vptr_INextBotEventResponder + 3))(
                this,
                v9,
                v7,
                v8,
                v10,
                v11,
                *&_result.m_type,
                _result.m_action,
                _result.m_reason,
                _result.m_priority); i != 0; i = (*(this->_vptr_INextBotEventResponder + 4))(this, i) )
      (*(*i + 440LL))(i, item);
  }
}


// Action<CSimpleBot>::OnPickupRune  (line 886, @0x0000000002f2cce0, libserver.so)  // inlines: Color, DebugReceivedEvent, EventDesiredResult, GetBool, GetInt, GetName, IActionResult, IsDebugFilterMatch, IsDebugging, OnPickupRune, SetColor, curtime
// calls: CUtlSymbol::String, INextBot::DebugConColorMsg, Action<CSimpleBot>::StorePendingEventResult, NextBotManager::IsDebugFilterMatch, __stack_chk_fail
// strings: "%3.2f: %s:%s: %s received EVENT %s\n", "OnPickupRune"
void __fastcall Action<CSimpleBot>::OnPickupRune(Action<CSimpleBot> *const this, CBaseEntity *item)
{
  Action<CSimpleBot> *v4; // r15
  CSimpleBot *m_actor; // rdx
  INextBot *v6; // r14
  const char *v7; // r14
  __int64 v8; // rax
  const char *v9; // r9
  const char *v10; // r8
  CGlobalVars *v11; // rdx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  double m_flCurrentTime; // xmm0_8
  CSimpleBot *v14; // rax
  __int64 i; // r13
  bool IsDebugFilterMatch; // al
  CGlobalVars *v17; // [rsp+10h] [rbp-A0h]
  const char *v18; // [rsp+18h] [rbp-98h]
  const char *v19; // [rsp+28h] [rbp-88h]
  CSimpleBot *v20; // [rsp+28h] [rbp-88h]
  EventDesiredResult<CSimpleBot> _result; // [rsp+30h] [rbp-80h] BYREF
  EventDesiredResult<CSimpleBot> v22; // [rsp+50h] [rbp-60h] BYREF
  Color v23; // [rsp+70h] [rbp-40h] BYREF
  unsigned __int64 v24; // [rsp+78h] [rbp-38h]

  v24 = __readfsqword(0x28u);
  if ( this->m_isStarted )
  {
    _result.m_type = ActionResultType::CONTINUE;
    _result.m_action = 0;
    v4 = this;
    _result.m_reason = 0;
    _result.m_priority = EventResultPriorityType::RESULT_TRY;
    do
    {
      m_actor = this->m_actor;
      if ( m_actor != 0 )
      {
        if ( SLOBYTE(g_NextBotManager.m_debugType) < 0
          && ((v6 = &m_actor->INextBot, g_NextBotManager.m_debugFilterList.m_Size == 0)
           || (v20 = this->m_actor,
               IsDebugFilterMatch = NextBotManager::IsDebugFilterMatch(&g_NextBotManager, &m_actor->INextBot),
               m_actor = v20,
               IsDebugFilterMatch))
          && (*(m_actor->_vptr_INextBotEventResponder + 96))(v6, 128) != 0
          || NextBotDebugHistory.m_pParent->m_Value.m_nValue != 0 )
        {
          v7 = (*(v4->_vptr_INextBotEventResponder + 64))(v4);
          v19 = CUtlSymbol::String(&this->m_behavior->m_name);
          v8 = (*(this->m_actor->_vptr_INextBotEventResponder + 97))(&this->m_actor->INextBot);
          v9 = v19;
          v10 = v8;
          v11 = gpGlobals;
          if ( gpGlobals != 0 )
          {
            if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
            {
              m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
              if ( m_pfnWarningFunc != 0 )
              {
                v17 = gpGlobals;
                v18 = v10;
                m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
                v11 = v17;
                v10 = v18;
                v9 = v19;
              }
            }
            m_flCurrentTime = v11->m_flCurrentTime;
          }
          else
          {
            m_flCurrentTime = 0.0;
          }
          v14 = this->m_actor;
          memset(&v23, 100, 3);
          v23._color[3] = -1;
          INextBot::DebugConColorMsg(
            &v14->INextBot,
            NextBotDebugType::NEXTBOT_EVENTS,
            &v23,
            "%3.2f: %s:%s: %s received EVENT %s\n",
            m_flCurrentTime,
            v10,
            v9,
            v7,
            "OnPickupRune");
        }
        m_actor = this->m_actor;
      }
      (*(v4->_vptr_INextBotEventResponder + 121))(&v22, v4, m_actor, item);
      _result = v22;
      if ( v22.m_type != ActionResultType::CONTINUE )
        break;
      v4 = v4->m_buriedUnderMe;
    }
    while ( v4 != 0 );
    Action<CSimpleBot>::StorePendingEventResult(this, v4, "OnPickupRune", &_result);
    for ( i = (*(this->_vptr_INextBotEventResponder + 3))(this);
          i != 0;
          i = (*(this->_vptr_INextBotEventResponder + 4))(this, i) )
    {
      (*(*i + 440LL))(i, item);
    }
  }
}


// Action<CDOTA_BaseNPC>::OnStop  (line 887, @0x000000000288a860, libserver.so)  // inlines: Color, DebugReceivedEvent, EventDesiredResult, GetBool, GetInt, GetName, IActionResult, IsDebugging, OnStop, SetColor, curtime
// calls: CUtlSymbol::String, INextBot::DebugConColorMsg, Action<CDOTA_BaseNPC>::StorePendingEventResult, NextBotManager::IsDebugFilterMatch, __stack_chk_fail
// strings: "%3.2f: %s:%s: %s received EVENT %s\n", "OnStop"
void __fastcall Action<CDOTA_BaseNPC>::OnStop(Action<CDOTA_BaseNPC> *const this)
{
  Action<CDOTA_BaseNPC> *v2; // rbx
  CDOTA_BaseNPC *m_actor; // rdx
  const char *v4; // r15
  __int64 v5; // rax
  const char *v6; // r9
  const char *v7; // r8
  CGlobalVars *v8; // rdx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  double m_flCurrentTime; // xmm0_8
  CDOTA_BaseNPC *v11; // rax
  __int64 i; // rbx
  INextBot *v13; // r15
  CGlobalVars *v14; // [rsp+18h] [rbp-98h]
  const char *v15; // [rsp+20h] [rbp-90h]
  const char *v16; // [rsp+28h] [rbp-88h]
  CDOTA_BaseNPC *v17; // [rsp+28h] [rbp-88h]
  EventDesiredResult<CDOTA_BaseNPC> _result; // [rsp+30h] [rbp-80h] BYREF
  EventDesiredResult<CDOTA_BaseNPC> v19; // [rsp+50h] [rbp-60h] BYREF
  Color color; // [rsp+70h] [rbp-40h] BYREF
  unsigned __int64 v21; // [rsp+78h] [rbp-38h]

  v21 = __readfsqword(0x28u);
  if ( this->m_isStarted )
  {
    _result.m_type = ActionResultType::CONTINUE;
    v2 = this;
    _result.m_action = 0;
    _result.m_reason = 0;
    _result.m_priority = EventResultPriorityType::RESULT_TRY;
    do
    {
      m_actor = this->m_actor;
      if ( m_actor != 0 )
      {
        if ( SLOBYTE(g_NextBotManager.m_debugType) < 0
          && (v13 = &m_actor->INextBot,
              v17 = this->m_actor,
              NextBotManager::IsDebugFilterMatch(&g_NextBotManager, &m_actor->INextBot))
          && (*(v17->_vptr_INextBotEventResponder + 96))(v13, 128) != 0
          || NextBotDebugHistory.m_pParent->m_Value.m_nValue != 0 )
        {
          v4 = (*(v2->_vptr_INextBotEventResponder + 64))(v2);
          v16 = CUtlSymbol::String(&this->m_behavior->m_name);
          v5 = (*(this->m_actor->_vptr_INextBotEventResponder + 97))(&this->m_actor->INextBot);
          v6 = v16;
          v7 = v5;
          v8 = gpGlobals;
          if ( gpGlobals != 0 )
          {
            if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
            {
              m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
              if ( m_pfnWarningFunc != 0 )
              {
                v14 = gpGlobals;
                v15 = v7;
                m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
                v8 = v14;
                v7 = v15;
                v6 = v16;
              }
            }
            m_flCurrentTime = v8->m_flCurrentTime;
          }
          else
          {
            m_flCurrentTime = 0.0;
          }
          v11 = this->m_actor;
          memset(&color, 100, 3);
          color._color[3] = -1;
          INextBot::DebugConColorMsg(
            &v11->INextBot,
            NextBotDebugType::NEXTBOT_EVENTS,
            &color,
            "%3.2f: %s:%s: %s received EVENT %s\n",
            m_flCurrentTime,
            v7,
            v6,
            v4,
            "OnStop");
        }
        m_actor = this->m_actor;
      }
      (*(v2->_vptr_INextBotEventResponder + 122))(&v19, v2, m_actor);
      _result = v19;
      if ( v19.m_type != ActionResultType::CONTINUE )
        break;
      v2 = v2->m_buriedUnderMe;
    }
    while ( v2 != 0 );
    Action<CDOTA_BaseNPC>::StorePendingEventResult(this, v2, "OnStop", &_result);
    for ( i = (*(this->_vptr_INextBotEventResponder + 3))(this);
          i != 0;
          i = (*(this->_vptr_INextBotEventResponder + 4))(this, i) )
    {
      (*(*i + 448LL))(i);
    }
  }
}


// Action<CSimpleBot>::OnStop  (line 887, @0x0000000002f2cfa0, libserver.so)  // inlines: Color, DebugReceivedEvent, EventDesiredResult, GetBool, GetInt, GetName, IActionResult, IsDebugFilterMatch, IsDebugging, OnStop, SetColor, curtime
// calls: CUtlSymbol::String, INextBot::DebugConColorMsg, Action<CSimpleBot>::StorePendingEventResult, NextBotManager::IsDebugFilterMatch, __stack_chk_fail
// strings: "%3.2f: %s:%s: %s received EVENT %s\n", "OnStop"
void __fastcall Action<CSimpleBot>::OnStop(Action<CSimpleBot> *const this)
{
  Action<CSimpleBot> *v2; // rbx
  CSimpleBot *m_actor; // rdx
  INextBot *v4; // r15
  const char *v5; // r15
  const char *v6; // r14
  const char *v7; // r8
  CGlobalVars *v8; // rdx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  double m_flCurrentTime; // xmm0_8
  CSimpleBot *v11; // rax
  __int64 i; // rbx
  bool IsDebugFilterMatch; // al
  CGlobalVars *v14; // [rsp+18h] [rbp-98h]
  const char *v15; // [rsp+20h] [rbp-90h]
  CSimpleBot *v16; // [rsp+20h] [rbp-90h]
  EventDesiredResult<CSimpleBot> _result; // [rsp+30h] [rbp-80h] BYREF
  EventDesiredResult<CSimpleBot> v18; // [rsp+50h] [rbp-60h] BYREF
  Color v19; // [rsp+70h] [rbp-40h] BYREF
  unsigned __int64 v20; // [rsp+78h] [rbp-38h]

  v20 = __readfsqword(0x28u);
  if ( this->m_isStarted )
  {
    _result.m_type = ActionResultType::CONTINUE;
    v2 = this;
    _result.m_action = 0;
    _result.m_reason = 0;
    _result.m_priority = EventResultPriorityType::RESULT_TRY;
    do
    {
      m_actor = this->m_actor;
      if ( m_actor != 0 )
      {
        if ( SLOBYTE(g_NextBotManager.m_debugType) < 0
          && ((v4 = &m_actor->INextBot, g_NextBotManager.m_debugFilterList.m_Size == 0)
           || (v16 = this->m_actor,
               IsDebugFilterMatch = NextBotManager::IsDebugFilterMatch(&g_NextBotManager, &m_actor->INextBot),
               m_actor = v16,
               IsDebugFilterMatch))
          && (*(m_actor->_vptr_INextBotEventResponder + 96))(v4, 128) != 0
          || NextBotDebugHistory.m_pParent->m_Value.m_nValue != 0 )
        {
          v5 = (*(v2->_vptr_INextBotEventResponder + 64))(v2);
          v6 = CUtlSymbol::String(&this->m_behavior->m_name);
          v7 = (*(this->m_actor->_vptr_INextBotEventResponder + 97))(&this->m_actor->INextBot);
          v8 = gpGlobals;
          if ( gpGlobals != 0 )
          {
            if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
            {
              m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
              if ( m_pfnWarningFunc != 0 )
              {
                v14 = gpGlobals;
                v15 = v7;
                m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
                v8 = v14;
                v7 = v15;
              }
            }
            m_flCurrentTime = v8->m_flCurrentTime;
          }
          else
          {
            m_flCurrentTime = 0.0;
          }
          v11 = this->m_actor;
          memset(&v19, 100, 3);
          v19._color[3] = -1;
          INextBot::DebugConColorMsg(
            &v11->INextBot,
            NextBotDebugType::NEXTBOT_EVENTS,
            &v19,
            "%3.2f: %s:%s: %s received EVENT %s\n",
            m_flCurrentTime,
            v7,
            v6,
            v5,
            "OnStop");
        }
        m_actor = this->m_actor;
      }
      (*(v2->_vptr_INextBotEventResponder + 122))(&v18, v2, m_actor);
      _result = v18;
      if ( v18.m_type != ActionResultType::CONTINUE )
        break;
      v2 = v2->m_buriedUnderMe;
    }
    while ( v2 != 0 );
    Action<CSimpleBot>::StorePendingEventResult(this, v2, "OnStop", &_result);
    for ( i = (*(this->_vptr_INextBotEventResponder + 3))(this);
          i != 0;
          i = (*(this->_vptr_INextBotEventResponder + 4))(this, i) )
    {
      (*(*i + 448LL))(i);
    }
  }
}


// Action<CDOTA_BaseNPC>::OnCancelAttack  (line 888, @0x000000000288ab00, libserver.so)  // inlines: EventDesiredResult, IActionResult, OnCancelAttack
// calls: Action<CDOTA_BaseNPC>::DebugReceivedEvent, Action<CDOTA_BaseNPC>::StorePendingEventResult
// strings: "OnCancelAttack"
void __fastcall Action<CDOTA_BaseNPC>::OnCancelAttack(Action<CDOTA_BaseNPC> *const this, CBaseEntity *pTarget)
{
  Action<CDOTA_BaseNPC> *v4; // rbx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rsi
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 i; // rbx
  EventDesiredResult<CDOTA_BaseNPC> _result; // [rsp+0h] [rbp-60h] BYREF
  EventDesiredResult<CDOTA_BaseNPC> v14; // [rsp+20h] [rbp-40h] BYREF

  if ( this->m_isStarted )
  {
    _result.m_type = ActionResultType::CONTINUE;
    v4 = this;
    _result.m_action = 0;
    _result.m_reason = 0;
    _result.m_priority = EventResultPriorityType::RESULT_TRY;
    do
    {
      Action<CDOTA_BaseNPC>::DebugReceivedEvent(this, v4, "OnCancelAttack");
      (*(v4->_vptr_INextBotEventResponder + 123))(
        &v14,
        v4,
        this->m_actor,
        pTarget,
        v5,
        v6,
        *&_result.m_type,
        _result.m_action,
        _result.m_reason,
        _result.m_priority);
      _result = v14;
      if ( v14.m_type != ActionResultType::CONTINUE )
        break;
      v4 = v4->m_buriedUnderMe;
    }
    while ( v4 != 0 );
    Action<CDOTA_BaseNPC>::StorePendingEventResult(this, v4, "OnCancelAttack", &_result);
    for ( i = (*(this->_vptr_INextBotEventResponder + 3))(
                this,
                v9,
                v7,
                v8,
                v10,
                v11,
                *&_result.m_type,
                _result.m_action,
                _result.m_reason,
                _result.m_priority); i != 0; i = (*(this->_vptr_INextBotEventResponder + 4))(this, i) )
      (*(*i + 456LL))(i, pTarget);
  }
}


// Action<CSimpleBot>::OnCancelAttack  (line 888, @0x0000000002f2d240, libserver.so)  // inlines: Color, DebugReceivedEvent, EventDesiredResult, GetBool, GetInt, GetName, IActionResult, IsDebugFilterMatch, IsDebugging, OnCancelAttack, SetColor, curtime
// calls: CUtlSymbol::String, INextBot::DebugConColorMsg, Action<CSimpleBot>::StorePendingEventResult, NextBotManager::IsDebugFilterMatch, __stack_chk_fail
// strings: "%3.2f: %s:%s: %s received EVENT %s\n", "OnCancelAttack"
void __fastcall Action<CSimpleBot>::OnCancelAttack(Action<CSimpleBot> *const this, CBaseEntity *pTarget)
{
  Action<CSimpleBot> *v4; // r15
  CSimpleBot *m_actor; // rdx
  INextBot *v6; // r14
  const char *v7; // r14
  __int64 v8; // rax
  const char *v9; // r9
  const char *v10; // r8
  CGlobalVars *v11; // rdx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  double m_flCurrentTime; // xmm0_8
  CSimpleBot *v14; // rax
  __int64 i; // r13
  bool IsDebugFilterMatch; // al
  CGlobalVars *v17; // [rsp+10h] [rbp-A0h]
  const char *v18; // [rsp+18h] [rbp-98h]
  const char *v19; // [rsp+28h] [rbp-88h]
  CSimpleBot *v20; // [rsp+28h] [rbp-88h]
  EventDesiredResult<CSimpleBot> _result; // [rsp+30h] [rbp-80h] BYREF
  EventDesiredResult<CSimpleBot> v22; // [rsp+50h] [rbp-60h] BYREF
  Color v23; // [rsp+70h] [rbp-40h] BYREF
  unsigned __int64 v24; // [rsp+78h] [rbp-38h]

  v24 = __readfsqword(0x28u);
  if ( this->m_isStarted )
  {
    _result.m_type = ActionResultType::CONTINUE;
    _result.m_action = 0;
    v4 = this;
    _result.m_reason = 0;
    _result.m_priority = EventResultPriorityType::RESULT_TRY;
    do
    {
      m_actor = this->m_actor;
      if ( m_actor != 0 )
      {
        if ( SLOBYTE(g_NextBotManager.m_debugType) < 0
          && ((v6 = &m_actor->INextBot, g_NextBotManager.m_debugFilterList.m_Size == 0)
           || (v20 = this->m_actor,
               IsDebugFilterMatch = NextBotManager::IsDebugFilterMatch(&g_NextBotManager, &m_actor->INextBot),
               m_actor = v20,
               IsDebugFilterMatch))
          && (*(m_actor->_vptr_INextBotEventResponder + 96))(v6, 128) != 0
          || NextBotDebugHistory.m_pParent->m_Value.m_nValue != 0 )
        {
          v7 = (*(v4->_vptr_INextBotEventResponder + 64))(v4);
          v19 = CUtlSymbol::String(&this->m_behavior->m_name);
          v8 = (*(this->m_actor->_vptr_INextBotEventResponder + 97))(&this->m_actor->INextBot);
          v9 = v19;
          v10 = v8;
          v11 = gpGlobals;
          if ( gpGlobals != 0 )
          {
            if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
            {
              m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
              if ( m_pfnWarningFunc != 0 )
              {
                v17 = gpGlobals;
                v18 = v10;
                m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
                v11 = v17;
                v10 = v18;
                v9 = v19;
              }
            }
            m_flCurrentTime = v11->m_flCurrentTime;
          }
          else
          {
            m_flCurrentTime = 0.0;
          }
          v14 = this->m_actor;
          memset(&v23, 100, 3);
          v23._color[3] = -1;
          INextBot::DebugConColorMsg(
            &v14->INextBot,
            NextBotDebugType::NEXTBOT_EVENTS,
            &v23,
            "%3.2f: %s:%s: %s received EVENT %s\n",
            m_flCurrentTime,
            v10,
            v9,
            v7,
            "OnCancelAttack");
        }
        m_actor = this->m_actor;
      }
      (*(v4->_vptr_INextBotEventResponder + 123))(&v22, v4, m_actor, pTarget);
      _result = v22;
      if ( v22.m_type != ActionResultType::CONTINUE )
        break;
      v4 = v4->m_buriedUnderMe;
    }
    while ( v4 != 0 );
    Action<CSimpleBot>::StorePendingEventResult(this, v4, "OnCancelAttack", &_result);
    for ( i = (*(this->_vptr_INextBotEventResponder + 3))(this);
          i != 0;
          i = (*(this->_vptr_INextBotEventResponder + 4))(this, i) )
    {
      (*(*i + 456LL))(i, pTarget);
    }
  }
}


// Action<CDOTA_BaseNPC>::OnDeAggro  (line 889, @0x000000000288ac00, libserver.so)  // inlines: EventDesiredResult, IActionResult, OnDeAggro
// calls: Action<CDOTA_BaseNPC>::DebugReceivedEvent, Action<CDOTA_BaseNPC>::StorePendingEventResult
// strings: "OnDeAggro"
void __fastcall Action<CDOTA_BaseNPC>::OnDeAggro(Action<CDOTA_BaseNPC> *const this, CBaseEntity *pTarget)
{
  Action<CDOTA_BaseNPC> *v4; // rbx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rsi
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 i; // rbx
  EventDesiredResult<CDOTA_BaseNPC> _result; // [rsp+0h] [rbp-60h] BYREF
  EventDesiredResult<CDOTA_BaseNPC> v14; // [rsp+20h] [rbp-40h] BYREF

  if ( this->m_isStarted )
  {
    _result.m_type = ActionResultType::CONTINUE;
    v4 = this;
    _result.m_action = 0;
    _result.m_reason = 0;
    _result.m_priority = EventResultPriorityType::RESULT_TRY;
    do
    {
      Action<CDOTA_BaseNPC>::DebugReceivedEvent(this, v4, "OnDeAggro");
      (*(v4->_vptr_INextBotEventResponder + 124))(
        &v14,
        v4,
        this->m_actor,
        pTarget,
        v5,
        v6,
        *&_result.m_type,
        _result.m_action,
        _result.m_reason,
        _result.m_priority);
      _result = v14;
      if ( v14.m_type != ActionResultType::CONTINUE )
        break;
      v4 = v4->m_buriedUnderMe;
    }
    while ( v4 != 0 );
    Action<CDOTA_BaseNPC>::StorePendingEventResult(this, v4, "OnDeAggro", &_result);
    for ( i = (*(this->_vptr_INextBotEventResponder + 3))(
                this,
                v9,
                v7,
                v8,
                v10,
                v11,
                *&_result.m_type,
                _result.m_action,
                _result.m_reason,
                _result.m_priority); i != 0; i = (*(this->_vptr_INextBotEventResponder + 4))(this, i) )
      (*(*i + 464LL))(i, pTarget);
  }
}


// Action<CSimpleBot>::OnDeAggro  (line 889, @0x0000000002f2d500, libserver.so)  // inlines: Color, DebugReceivedEvent, EventDesiredResult, GetBool, GetInt, GetName, IActionResult, IsDebugFilterMatch, IsDebugging, OnDeAggro, SetColor, curtime
// calls: CUtlSymbol::String, INextBot::DebugConColorMsg, Action<CSimpleBot>::StorePendingEventResult, NextBotManager::IsDebugFilterMatch, __stack_chk_fail
// strings: "%3.2f: %s:%s: %s received EVENT %s\n", "OnDeAggro"
void __fastcall Action<CSimpleBot>::OnDeAggro(Action<CSimpleBot> *const this, CBaseEntity *pTarget)
{
  Action<CSimpleBot> *v4; // r15
  CSimpleBot *m_actor; // rdx
  INextBot *v6; // r14
  const char *v7; // r14
  __int64 v8; // rax
  const char *v9; // r9
  const char *v10; // r8
  CGlobalVars *v11; // rdx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  double m_flCurrentTime; // xmm0_8
  CSimpleBot *v14; // rax
  __int64 i; // r13
  bool IsDebugFilterMatch; // al
  CGlobalVars *v17; // [rsp+10h] [rbp-A0h]
  const char *v18; // [rsp+18h] [rbp-98h]
  const char *v19; // [rsp+28h] [rbp-88h]
  CSimpleBot *v20; // [rsp+28h] [rbp-88h]
  EventDesiredResult<CSimpleBot> _result; // [rsp+30h] [rbp-80h] BYREF
  EventDesiredResult<CSimpleBot> v22; // [rsp+50h] [rbp-60h] BYREF
  Color v23; // [rsp+70h] [rbp-40h] BYREF
  unsigned __int64 v24; // [rsp+78h] [rbp-38h]

  v24 = __readfsqword(0x28u);
  if ( this->m_isStarted )
  {
    _result.m_type = ActionResultType::CONTINUE;
    _result.m_action = 0;
    v4 = this;
    _result.m_reason = 0;
    _result.m_priority = EventResultPriorityType::RESULT_TRY;
    do
    {
      m_actor = this->m_actor;
      if ( m_actor != 0 )
      {
        if ( SLOBYTE(g_NextBotManager.m_debugType) < 0
          && ((v6 = &m_actor->INextBot, g_NextBotManager.m_debugFilterList.m_Size == 0)
           || (v20 = this->m_actor,
               IsDebugFilterMatch = NextBotManager::IsDebugFilterMatch(&g_NextBotManager, &m_actor->INextBot),
               m_actor = v20,
               IsDebugFilterMatch))
          && (*(m_actor->_vptr_INextBotEventResponder + 96))(v6, 128) != 0
          || NextBotDebugHistory.m_pParent->m_Value.m_nValue != 0 )
        {
          v7 = (*(v4->_vptr_INextBotEventResponder + 64))(v4);
          v19 = CUtlSymbol::String(&this->m_behavior->m_name);
          v8 = (*(this->m_actor->_vptr_INextBotEventResponder + 97))(&this->m_actor->INextBot);
          v9 = v19;
          v10 = v8;
          v11 = gpGlobals;
          if ( gpGlobals != 0 )
          {
            if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
            {
              m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
              if ( m_pfnWarningFunc != 0 )
              {
                v17 = gpGlobals;
                v18 = v10;
                m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
                v11 = v17;
                v10 = v18;
                v9 = v19;
              }
            }
            m_flCurrentTime = v11->m_flCurrentTime;
          }
          else
          {
            m_flCurrentTime = 0.0;
          }
          v14 = this->m_actor;
          memset(&v23, 100, 3);
          v23._color[3] = -1;
          INextBot::DebugConColorMsg(
            &v14->INextBot,
            NextBotDebugType::NEXTBOT_EVENTS,
            &v23,
            "%3.2f: %s:%s: %s received EVENT %s\n",
            m_flCurrentTime,
            v10,
            v9,
            v7,
            "OnDeAggro");
        }
        m_actor = this->m_actor;
      }
      (*(v4->_vptr_INextBotEventResponder + 124))(&v22, v4, m_actor, pTarget);
      _result = v22;
      if ( v22.m_type != ActionResultType::CONTINUE )
        break;
      v4 = v4->m_buriedUnderMe;
    }
    while ( v4 != 0 );
    Action<CSimpleBot>::StorePendingEventResult(this, v4, "OnDeAggro", &_result);
    for ( i = (*(this->_vptr_INextBotEventResponder + 3))(this);
          i != 0;
          i = (*(this->_vptr_INextBotEventResponder + 4))(this, i) )
    {
      (*(*i + 464LL))(i, pTarget);
    }
  }
}


// Action<CDOTA_BaseNPC>::OnDominated  (line 890, @0x000000000288ad00, libserver.so)  // inlines: Color, DebugReceivedEvent, EventDesiredResult, GetBool, GetInt, GetName, IActionResult, IsDebugging, OnDominated, SetColor, curtime
// calls: CUtlSymbol::String, INextBot::DebugConColorMsg, Action<CDOTA_BaseNPC>::StorePendingEventResult, NextBotManager::IsDebugFilterMatch, __stack_chk_fail
// strings: "%3.2f: %s:%s: %s received EVENT %s\n", "OnDominated"
void __fastcall Action<CDOTA_BaseNPC>::OnDominated(Action<CDOTA_BaseNPC> *const this)
{
  Action<CDOTA_BaseNPC> *v2; // rbx
  CDOTA_BaseNPC *m_actor; // rdx
  const char *v4; // r15
  __int64 v5; // rax
  const char *v6; // r9
  const char *v7; // r8
  CGlobalVars *v8; // rdx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  double m_flCurrentTime; // xmm0_8
  CDOTA_BaseNPC *v11; // rax
  __int64 i; // rbx
  INextBot *v13; // r15
  CGlobalVars *v14; // [rsp+18h] [rbp-98h]
  const char *v15; // [rsp+20h] [rbp-90h]
  const char *v16; // [rsp+28h] [rbp-88h]
  CDOTA_BaseNPC *v17; // [rsp+28h] [rbp-88h]
  EventDesiredResult<CDOTA_BaseNPC> _result; // [rsp+30h] [rbp-80h] BYREF
  EventDesiredResult<CDOTA_BaseNPC> v19; // [rsp+50h] [rbp-60h] BYREF
  Color color; // [rsp+70h] [rbp-40h] BYREF
  unsigned __int64 v21; // [rsp+78h] [rbp-38h]

  v21 = __readfsqword(0x28u);
  if ( this->m_isStarted )
  {
    _result.m_type = ActionResultType::CONTINUE;
    v2 = this;
    _result.m_action = 0;
    _result.m_reason = 0;
    _result.m_priority = EventResultPriorityType::RESULT_TRY;
    do
    {
      m_actor = this->m_actor;
      if ( m_actor != 0 )
      {
        if ( SLOBYTE(g_NextBotManager.m_debugType) < 0
          && (v13 = &m_actor->INextBot,
              v17 = this->m_actor,
              NextBotManager::IsDebugFilterMatch(&g_NextBotManager, &m_actor->INextBot))
          && (*(v17->_vptr_INextBotEventResponder + 96))(v13, 128) != 0
          || NextBotDebugHistory.m_pParent->m_Value.m_nValue != 0 )
        {
          v4 = (*(v2->_vptr_INextBotEventResponder + 64))(v2);
          v16 = CUtlSymbol::String(&this->m_behavior->m_name);
          v5 = (*(this->m_actor->_vptr_INextBotEventResponder + 97))(&this->m_actor->INextBot);
          v6 = v16;
          v7 = v5;
          v8 = gpGlobals;
          if ( gpGlobals != 0 )
          {
            if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
            {
              m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
              if ( m_pfnWarningFunc != 0 )
              {
                v14 = gpGlobals;
                v15 = v7;
                m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
                v8 = v14;
                v7 = v15;
                v6 = v16;
              }
            }
            m_flCurrentTime = v8->m_flCurrentTime;
          }
          else
          {
            m_flCurrentTime = 0.0;
          }
          v11 = this->m_actor;
          memset(&color, 100, 3);
          color._color[3] = -1;
          INextBot::DebugConColorMsg(
            &v11->INextBot,
            NextBotDebugType::NEXTBOT_EVENTS,
            &color,
            "%3.2f: %s:%s: %s received EVENT %s\n",
            m_flCurrentTime,
            v7,
            v6,
            v4,
            "OnDominated");
        }
        m_actor = this->m_actor;
      }
      (*(v2->_vptr_INextBotEventResponder + 125))(&v19, v2, m_actor);
      _result = v19;
      if ( v19.m_type != ActionResultType::CONTINUE )
        break;
      v2 = v2->m_buriedUnderMe;
    }
    while ( v2 != 0 );
    Action<CDOTA_BaseNPC>::StorePendingEventResult(this, v2, "OnDominated", &_result);
    for ( i = (*(this->_vptr_INextBotEventResponder + 3))(this);
          i != 0;
          i = (*(this->_vptr_INextBotEventResponder + 4))(this, i) )
    {
      (*(*i + 472LL))(i);
    }
  }
}


// Action<CSimpleBot>::OnDominated  (line 890, @0x0000000002f2d7c0, libserver.so)  // inlines: Color, DebugReceivedEvent, EventDesiredResult, GetBool, GetInt, GetName, IActionResult, IsDebugFilterMatch, IsDebugging, OnDominated, SetColor, curtime
// calls: CUtlSymbol::String, INextBot::DebugConColorMsg, Action<CSimpleBot>::StorePendingEventResult, NextBotManager::IsDebugFilterMatch, __stack_chk_fail
// strings: "%3.2f: %s:%s: %s received EVENT %s\n", "OnDominated"
void __fastcall Action<CSimpleBot>::OnDominated(Action<CSimpleBot> *const this)
{
  Action<CSimpleBot> *v2; // rbx
  CSimpleBot *m_actor; // rdx
  INextBot *v4; // r15
  const char *v5; // r15
  const char *v6; // r14
  const char *v7; // r8
  CGlobalVars *v8; // rdx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  double m_flCurrentTime; // xmm0_8
  CSimpleBot *v11; // rax
  __int64 i; // rbx
  bool IsDebugFilterMatch; // al
  CGlobalVars *v14; // [rsp+18h] [rbp-98h]
  const char *v15; // [rsp+20h] [rbp-90h]
  CSimpleBot *v16; // [rsp+20h] [rbp-90h]
  EventDesiredResult<CSimpleBot> _result; // [rsp+30h] [rbp-80h] BYREF
  EventDesiredResult<CSimpleBot> v18; // [rsp+50h] [rbp-60h] BYREF
  Color v19; // [rsp+70h] [rbp-40h] BYREF
  unsigned __int64 v20; // [rsp+78h] [rbp-38h]

  v20 = __readfsqword(0x28u);
  if ( this->m_isStarted )
  {
    _result.m_type = ActionResultType::CONTINUE;
    v2 = this;
    _result.m_action = 0;
    _result.m_reason = 0;
    _result.m_priority = EventResultPriorityType::RESULT_TRY;
    do
    {
      m_actor = this->m_actor;
      if ( m_actor != 0 )
      {
        if ( SLOBYTE(g_NextBotManager.m_debugType) < 0
          && ((v4 = &m_actor->INextBot, g_NextBotManager.m_debugFilterList.m_Size == 0)
           || (v16 = this->m_actor,
               IsDebugFilterMatch = NextBotManager::IsDebugFilterMatch(&g_NextBotManager, &m_actor->INextBot),
               m_actor = v16,
               IsDebugFilterMatch))
          && (*(m_actor->_vptr_INextBotEventResponder + 96))(v4, 128) != 0
          || NextBotDebugHistory.m_pParent->m_Value.m_nValue != 0 )
        {
          v5 = (*(v2->_vptr_INextBotEventResponder + 64))(v2);
          v6 = CUtlSymbol::String(&this->m_behavior->m_name);
          v7 = (*(this->m_actor->_vptr_INextBotEventResponder + 97))(&this->m_actor->INextBot);
          v8 = gpGlobals;
          if ( gpGlobals != 0 )
          {
            if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
            {
              m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
              if ( m_pfnWarningFunc != 0 )
              {
                v14 = gpGlobals;
                v15 = v7;
                m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
                v8 = v14;
                v7 = v15;
              }
            }
            m_flCurrentTime = v8->m_flCurrentTime;
          }
          else
          {
            m_flCurrentTime = 0.0;
          }
          v11 = this->m_actor;
          memset(&v19, 100, 3);
          v19._color[3] = -1;
          INextBot::DebugConColorMsg(
            &v11->INextBot,
            NextBotDebugType::NEXTBOT_EVENTS,
            &v19,
            "%3.2f: %s:%s: %s received EVENT %s\n",
            m_flCurrentTime,
            v7,
            v6,
            v5,
            "OnDominated");
        }
        m_actor = this->m_actor;
      }
      (*(v2->_vptr_INextBotEventResponder + 125))(&v18, v2, m_actor);
      _result = v18;
      if ( v18.m_type != ActionResultType::CONTINUE )
        break;
      v2 = v2->m_buriedUnderMe;
    }
    while ( v2 != 0 );
    Action<CSimpleBot>::StorePendingEventResult(this, v2, "OnDominated", &_result);
    for ( i = (*(this->_vptr_INextBotEventResponder + 3))(this);
          i != 0;
          i = (*(this->_vptr_INextBotEventResponder + 4))(this, i) )
    {
      (*(*i + 472LL))(i);
    }
  }
}


// Action<CDOTA_BaseNPC>::OnInvalidatePath  (line 891, @0x000000000288afa0, libserver.so)  // inlines: Color, DebugReceivedEvent, EventDesiredResult, GetBool, GetInt, GetName, IActionResult, IsDebugging, OnInvalidatePath, SetColor, curtime
// calls: CUtlSymbol::String, INextBot::DebugConColorMsg, Action<CDOTA_BaseNPC>::StorePendingEventResult, NextBotManager::IsDebugFilterMatch, __stack_chk_fail
// strings: "%3.2f: %s:%s: %s received EVENT %s\n", "OnInvalidatePath"
void __fastcall Action<CDOTA_BaseNPC>::OnInvalidatePath(Action<CDOTA_BaseNPC> *const this)
{
  Action<CDOTA_BaseNPC> *v2; // rbx
  CDOTA_BaseNPC *m_actor; // rdx
  const char *v4; // r15
  __int64 v5; // rax
  const char *v6; // r9
  const char *v7; // r8
  CGlobalVars *v8; // rdx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  double m_flCurrentTime; // xmm0_8
  CDOTA_BaseNPC *v11; // rax
  __int64 i; // rbx
  INextBot *v13; // r15
  CGlobalVars *v14; // [rsp+18h] [rbp-98h]
  const char *v15; // [rsp+20h] [rbp-90h]
  const char *v16; // [rsp+28h] [rbp-88h]
  CDOTA_BaseNPC *v17; // [rsp+28h] [rbp-88h]
  EventDesiredResult<CDOTA_BaseNPC> _result; // [rsp+30h] [rbp-80h] BYREF
  EventDesiredResult<CDOTA_BaseNPC> v19; // [rsp+50h] [rbp-60h] BYREF
  Color color; // [rsp+70h] [rbp-40h] BYREF
  unsigned __int64 v21; // [rsp+78h] [rbp-38h]

  v21 = __readfsqword(0x28u);
  if ( this->m_isStarted )
  {
    _result.m_type = ActionResultType::CONTINUE;
    v2 = this;
    _result.m_action = 0;
    _result.m_reason = 0;
    _result.m_priority = EventResultPriorityType::RESULT_TRY;
    do
    {
      m_actor = this->m_actor;
      if ( m_actor != 0 )
      {
        if ( SLOBYTE(g_NextBotManager.m_debugType) < 0
          && (v13 = &m_actor->INextBot,
              v17 = this->m_actor,
              NextBotManager::IsDebugFilterMatch(&g_NextBotManager, &m_actor->INextBot))
          && (*(v17->_vptr_INextBotEventResponder + 96))(v13, 128) != 0
          || NextBotDebugHistory.m_pParent->m_Value.m_nValue != 0 )
        {
          v4 = (*(v2->_vptr_INextBotEventResponder + 64))(v2);
          v16 = CUtlSymbol::String(&this->m_behavior->m_name);
          v5 = (*(this->m_actor->_vptr_INextBotEventResponder + 97))(&this->m_actor->INextBot);
          v6 = v16;
          v7 = v5;
          v8 = gpGlobals;
          if ( gpGlobals != 0 )
          {
            if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
            {
              m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
              if ( m_pfnWarningFunc != 0 )
              {
                v14 = gpGlobals;
                v15 = v7;
                m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
                v8 = v14;
                v7 = v15;
                v6 = v16;
              }
            }
            m_flCurrentTime = v8->m_flCurrentTime;
          }
          else
          {
            m_flCurrentTime = 0.0;
          }
          v11 = this->m_actor;
          memset(&color, 100, 3);
          color._color[3] = -1;
          INextBot::DebugConColorMsg(
            &v11->INextBot,
            NextBotDebugType::NEXTBOT_EVENTS,
            &color,
            "%3.2f: %s:%s: %s received EVENT %s\n",
            m_flCurrentTime,
            v7,
            v6,
            v4,
            "OnInvalidatePath");
        }
        m_actor = this->m_actor;
      }
      (*(v2->_vptr_INextBotEventResponder + 126))(&v19, v2, m_actor);
      _result = v19;
      if ( v19.m_type != ActionResultType::CONTINUE )
        break;
      v2 = v2->m_buriedUnderMe;
    }
    while ( v2 != 0 );
    Action<CDOTA_BaseNPC>::StorePendingEventResult(this, v2, "OnInvalidatePath", &_result);
    for ( i = (*(this->_vptr_INextBotEventResponder + 3))(this);
          i != 0;
          i = (*(this->_vptr_INextBotEventResponder + 4))(this, i) )
    {
      (*(*i + 480LL))(i);
    }
  }
}


// Action<CSimpleBot>::OnInvalidatePath  (line 891, @0x0000000002f2da60, libserver.so)  // inlines: Color, DebugReceivedEvent, EventDesiredResult, GetBool, GetInt, GetName, IActionResult, IsDebugFilterMatch, IsDebugging, OnInvalidatePath, SetColor, curtime
// calls: CUtlSymbol::String, INextBot::DebugConColorMsg, Action<CSimpleBot>::StorePendingEventResult, NextBotManager::IsDebugFilterMatch, __stack_chk_fail
// strings: "%3.2f: %s:%s: %s received EVENT %s\n", "OnInvalidatePath"
void __fastcall Action<CSimpleBot>::OnInvalidatePath(Action<CSimpleBot> *const this)
{
  Action<CSimpleBot> *v2; // rbx
  CSimpleBot *m_actor; // rdx
  INextBot *v4; // r15
  const char *v5; // r15
  const char *v6; // r14
  const char *v7; // r8
  CGlobalVars *v8; // rdx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  double m_flCurrentTime; // xmm0_8
  CSimpleBot *v11; // rax
  __int64 i; // rbx
  bool IsDebugFilterMatch; // al
  CGlobalVars *v14; // [rsp+18h] [rbp-98h]
  const char *v15; // [rsp+20h] [rbp-90h]
  CSimpleBot *v16; // [rsp+20h] [rbp-90h]
  EventDesiredResult<CSimpleBot> _result; // [rsp+30h] [rbp-80h] BYREF
  EventDesiredResult<CSimpleBot> v18; // [rsp+50h] [rbp-60h] BYREF
  Color v19; // [rsp+70h] [rbp-40h] BYREF
  unsigned __int64 v20; // [rsp+78h] [rbp-38h]

  v20 = __readfsqword(0x28u);
  if ( this->m_isStarted )
  {
    _result.m_type = ActionResultType::CONTINUE;
    v2 = this;
    _result.m_action = 0;
    _result.m_reason = 0;
    _result.m_priority = EventResultPriorityType::RESULT_TRY;
    do
    {
      m_actor = this->m_actor;
      if ( m_actor != 0 )
      {
        if ( SLOBYTE(g_NextBotManager.m_debugType) < 0
          && ((v4 = &m_actor->INextBot, g_NextBotManager.m_debugFilterList.m_Size == 0)
           || (v16 = this->m_actor,
               IsDebugFilterMatch = NextBotManager::IsDebugFilterMatch(&g_NextBotManager, &m_actor->INextBot),
               m_actor = v16,
               IsDebugFilterMatch))
          && (*(m_actor->_vptr_INextBotEventResponder + 96))(v4, 128) != 0
          || NextBotDebugHistory.m_pParent->m_Value.m_nValue != 0 )
        {
          v5 = (*(v2->_vptr_INextBotEventResponder + 64))(v2);
          v6 = CUtlSymbol::String(&this->m_behavior->m_name);
          v7 = (*(this->m_actor->_vptr_INextBotEventResponder + 97))(&this->m_actor->INextBot);
          v8 = gpGlobals;
          if ( gpGlobals != 0 )
          {
            if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
            {
              m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
              if ( m_pfnWarningFunc != 0 )
              {
                v14 = gpGlobals;
                v15 = v7;
                m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
                v8 = v14;
                v7 = v15;
              }
            }
            m_flCurrentTime = v8->m_flCurrentTime;
          }
          else
          {
            m_flCurrentTime = 0.0;
          }
          v11 = this->m_actor;
          memset(&v19, 100, 3);
          v19._color[3] = -1;
          INextBot::DebugConColorMsg(
            &v11->INextBot,
            NextBotDebugType::NEXTBOT_EVENTS,
            &v19,
            "%3.2f: %s:%s: %s received EVENT %s\n",
            m_flCurrentTime,
            v7,
            v6,
            v5,
            "OnInvalidatePath");
        }
        m_actor = this->m_actor;
      }
      (*(v2->_vptr_INextBotEventResponder + 126))(&v18, v2, m_actor);
      _result = v18;
      if ( v18.m_type != ActionResultType::CONTINUE )
        break;
      v2 = v2->m_buriedUnderMe;
    }
    while ( v2 != 0 );
    Action<CSimpleBot>::StorePendingEventResult(this, v2, "OnInvalidatePath", &_result);
    for ( i = (*(this->_vptr_INextBotEventResponder + 3))(this);
          i != 0;
          i = (*(this->_vptr_INextBotEventResponder + 4))(this, i) )
    {
      (*(*i + 480LL))(i);
    }
  }
}


// Action<CDOTA_BaseNPC>::OnUnitTeleported  (line 892, @0x000000000288b240, libserver.so)  // inlines: EventDesiredResult, IActionResult, OnUnitTeleported
// calls: Action<CDOTA_BaseNPC>::DebugReceivedEvent, Action<CDOTA_BaseNPC>::StorePendingEventResult
// strings: "OnUnitTeleported"
void __fastcall Action<CDOTA_BaseNPC>::OnUnitTeleported(
        Action<CDOTA_BaseNPC> *const this,
        CBaseEntity *pUnit,
        bool bLongTeleport)
{
  _BOOL4 v5; // r14d
  Action<CDOTA_BaseNPC> *v6; // rbx
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rsi
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 i; // rbx
  EventDesiredResult<CDOTA_BaseNPC> _result; // [rsp+0h] [rbp-70h] BYREF
  EventDesiredResult<CDOTA_BaseNPC> v15; // [rsp+20h] [rbp-50h] BYREF

  if ( this->m_isStarted )
  {
    _result.m_type = ActionResultType::CONTINUE;
    v5 = bLongTeleport;
    _result.m_action = 0;
    v6 = this;
    _result.m_reason = 0;
    _result.m_priority = EventResultPriorityType::RESULT_TRY;
    do
    {
      Action<CDOTA_BaseNPC>::DebugReceivedEvent(this, v6, "OnUnitTeleported");
      (*(v6->_vptr_INextBotEventResponder + 127))(
        &v15,
        v6,
        this->m_actor,
        pUnit,
        v5,
        v7,
        *&_result.m_type,
        _result.m_action,
        _result.m_reason,
        _result.m_priority);
      _result = v15;
      if ( v15.m_type != ActionResultType::CONTINUE )
        break;
      v6 = v6->m_buriedUnderMe;
    }
    while ( v6 != 0 );
    Action<CDOTA_BaseNPC>::StorePendingEventResult(this, v6, "OnUnitTeleported", &_result);
    for ( i = (*(this->_vptr_INextBotEventResponder + 3))(
                this,
                v10,
                v8,
                v9,
                v11,
                v12,
                *&_result.m_type,
                _result.m_action,
                _result.m_reason,
                _result.m_priority); i != 0; i = (*(this->_vptr_INextBotEventResponder + 4))(this, i) )
      (*(*i + 488LL))(i, pUnit, v5);
  }
}


// Action<CSimpleBot>::OnUnitTeleported  (line 892, @0x0000000002f2dd00, libserver.so)  // inlines: Color, DebugReceivedEvent, EventDesiredResult, GetBool, GetInt, GetName, IActionResult, IsDebugFilterMatch, IsDebugging, OnUnitTeleported, SetColor, curtime
// calls: CUtlSymbol::String, INextBot::DebugConColorMsg, Action<CSimpleBot>::StorePendingEventResult, NextBotManager::IsDebugFilterMatch, __stack_chk_fail
// strings: "%3.2f: %s:%s: %s received EVENT %s\n", "OnUnitTeleported"
void __fastcall Action<CSimpleBot>::OnUnitTeleported(
        Action<CSimpleBot> *const this,
        CBaseEntity *pUnit,
        bool bLongTeleport)
{
  _BOOL4 v5; // r13d
  Action<CSimpleBot> *v6; // r14
  CSimpleBot *m_actor; // rdx
  INextBot *v8; // r15
  const char *v9; // r15
  __int64 v10; // rax
  const char *v11; // r9
  const char *v12; // r8
  CGlobalVars *v13; // rdx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  double m_flCurrentTime; // xmm0_8
  CSimpleBot *v16; // rax
  __int64 i; // r14
  bool IsDebugFilterMatch; // al
  CGlobalVars *v19; // [rsp+18h] [rbp-A8h]
  const char *v20; // [rsp+20h] [rbp-A0h]
  const char *v21; // [rsp+30h] [rbp-90h]
  CSimpleBot *v22; // [rsp+30h] [rbp-90h]
  EventDesiredResult<CSimpleBot> _result; // [rsp+40h] [rbp-80h] BYREF
  EventDesiredResult<CSimpleBot> v24; // [rsp+60h] [rbp-60h] BYREF
  Color v25; // [rsp+80h] [rbp-40h] BYREF
  unsigned __int64 v26; // [rsp+88h] [rbp-38h]

  v26 = __readfsqword(0x28u);
  if ( this->m_isStarted )
  {
    _result.m_type = ActionResultType::CONTINUE;
    v5 = bLongTeleport;
    _result.m_action = 0;
    v6 = this;
    _result.m_reason = 0;
    _result.m_priority = EventResultPriorityType::RESULT_TRY;
    do
    {
      m_actor = this->m_actor;
      if ( m_actor != 0 )
      {
        if ( SLOBYTE(g_NextBotManager.m_debugType) < 0
          && ((v8 = &m_actor->INextBot, g_NextBotManager.m_debugFilterList.m_Size == 0)
           || (v22 = this->m_actor,
               IsDebugFilterMatch = NextBotManager::IsDebugFilterMatch(&g_NextBotManager, &m_actor->INextBot),
               m_actor = v22,
               IsDebugFilterMatch))
          && (*(m_actor->_vptr_INextBotEventResponder + 96))(v8, 128) != 0
          || NextBotDebugHistory.m_pParent->m_Value.m_nValue != 0 )
        {
          v9 = (*(v6->_vptr_INextBotEventResponder + 64))(v6);
          v21 = CUtlSymbol::String(&this->m_behavior->m_name);
          v10 = (*(this->m_actor->_vptr_INextBotEventResponder + 97))(&this->m_actor->INextBot);
          v11 = v21;
          v12 = v10;
          v13 = gpGlobals;
          if ( gpGlobals != 0 )
          {
            if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
            {
              m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
              if ( m_pfnWarningFunc != 0 )
              {
                v19 = gpGlobals;
                v20 = v12;
                m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
                v13 = v19;
                v12 = v20;
                v11 = v21;
              }
            }
            m_flCurrentTime = v13->m_flCurrentTime;
          }
          else
          {
            m_flCurrentTime = 0.0;
          }
          v16 = this->m_actor;
          memset(&v25, 100, 3);
          v25._color[3] = -1;
          INextBot::DebugConColorMsg(
            &v16->INextBot,
            NextBotDebugType::NEXTBOT_EVENTS,
            &v25,
            "%3.2f: %s:%s: %s received EVENT %s\n",
            m_flCurrentTime,
            v12,
            v11,
            v9,
            "OnUnitTeleported");
        }
        m_actor = this->m_actor;
      }
      (*(v6->_vptr_INextBotEventResponder + 127))(&v24, v6, m_actor, pUnit, v5);
      _result = v24;
      if ( v24.m_type != ActionResultType::CONTINUE )
        break;
      v6 = v6->m_buriedUnderMe;
    }
    while ( v6 != 0 );
    Action<CSimpleBot>::StorePendingEventResult(this, v6, "OnUnitTeleported", &_result);
    for ( i = (*(this->_vptr_INextBotEventResponder + 3))(this);
          i != 0;
          i = (*(this->_vptr_INextBotEventResponder + 4))(this, i) )
    {
      (*(*i + 488LL))(i, pUnit, v5);
    }
  }
}


// Action<CDOTA_BaseNPC>::~Action  (line 1061, @0x0000000002882760, libserver.so)  // inlines: ~IContextualQuery, ~INextBotEventResponder
// callers: CDOTABehaviorCommandListener::~CDOTABehaviorCommandListener, CDOTABehaviorCommandCastHere::~CDOTABehaviorCommandCastHere, CDOTABehaviorAbilityPhase::~CDOTABehaviorAbilityPhase, CDOTABehaviorAbilityChannel::~CDOTABehaviorAbilityChannel, CDOTABehaviorAbility::~CDOTABehaviorAbility, Action<CDOTA_BaseNPC>::~Action, CDOTABehaviorAttackPhase::~CDOTABehaviorAttackPhase, CDOTABehaviorAttack::~CDOTABehaviorAttack, CDOTABehaviorCommandCastHere::OnResume, CDOTABehaviorCommandMoveToPositionToCast::OnResume, CDOTABehaviorCommandListener::OnStop, CDOTABehaviorCommandMoveToTargetToAttack::OnCancelAttack (101 total)
void __fastcall Action<CDOTA_BaseNPC>::~Action(Action<CDOTA_BaseNPC> *const this)
{
  Action<CDOTA_BaseNPC> *m_parent; // rax
  Action<CDOTA_BaseNPC> *m_child; // rdi
  Action<CDOTA_BaseNPC> *m_buriedUnderMe; // rbx
  Action<CDOTA_BaseNPC> *v5; // rax
  Action<CDOTA_BaseNPC> *m_coveringMe; // rdi
  Action<CDOTA_BaseNPC> *m_action; // rdi

  this->_vptr_INextBotEventResponder = &off_42B9C50;
  this->_vptr_IContextualQuery = &off_42BA070;
  m_parent = this->m_parent;
  if ( m_parent != 0 && m_parent->m_child == this )
    m_parent->m_child = this->m_buriedUnderMe;
  m_child = this->m_child;
  if ( m_child != 0 )
  {
    while ( 1 )
    {
      m_buriedUnderMe = m_child->m_buriedUnderMe;
      (*(m_child->_vptr_INextBotEventResponder + 2))(m_child);
      if ( m_buriedUnderMe == 0 )
        break;
      m_child = m_buriedUnderMe;
    }
  }
  v5 = this->m_buriedUnderMe;
  if ( v5 != 0 )
    v5->m_coveringMe = 0;
  m_coveringMe = this->m_coveringMe;
  if ( m_coveringMe != 0 )
    (*(m_coveringMe->_vptr_INextBotEventResponder + 2))(m_coveringMe);
  m_action = this->m_eventResult.m_action;
  if ( m_action != 0 )
    (*(m_action->_vptr_INextBotEventResponder + 2))(m_action);
  this->_vptr_IContextualQuery = &off_3F7A990;
  this->_vptr_INextBotEventResponder = &off_3F7A570;
}


// Action<CDOTA_BaseNPC>::~Action  (line 1061, @0x0000000002883500, libserver.so)
// calls: Action<CDOTA_BaseNPC>::~Action, operator delete
void __fastcall Action<CDOTA_BaseNPC>::~Action(Action<CDOTA_BaseNPC> *const this)
{
  Action<CDOTA_BaseNPC>::~Action(this);
  operator delete(this);
}


// Action<CSimpleBot>::~Action  (line 1061, @0x0000000002f1e020, libserver.so)  // inlines: ~IContextualQuery, ~INextBotEventResponder
// callers: Action<CSimpleBot>::~Action, CSimpleBotRoam::~CSimpleBotRoam, CSimpleBot::CSimpleBotIntention::Reset, CSimpleBot::CSimpleBotIntention::CSimpleBotIntention
void __fastcall Action<CSimpleBot>::~Action(Action<CSimpleBot> *const this)
{
  Action<CSimpleBot> *m_parent; // rax
  Action<CSimpleBot> *m_child; // rdi
  Action<CSimpleBot> *m_buriedUnderMe; // rbx
  Action<CSimpleBot> *v5; // rax
  Action<CSimpleBot> *m_coveringMe; // rdi
  Action<CSimpleBot> *m_action; // rdi

  this->_vptr_INextBotEventResponder = &off_47B3D90;
  this->_vptr_IContextualQuery = &off_47B41B0;
  m_parent = this->m_parent;
  if ( m_parent != 0 && m_parent->m_child == this )
    m_parent->m_child = this->m_buriedUnderMe;
  m_child = this->m_child;
  if ( m_child != 0 )
  {
    while ( 1 )
    {
      m_buriedUnderMe = m_child->m_buriedUnderMe;
      (*(m_child->_vptr_INextBotEventResponder + 2))(m_child);
      if ( m_buriedUnderMe == 0 )
        break;
      m_child = m_buriedUnderMe;
    }
  }
  v5 = this->m_buriedUnderMe;
  if ( v5 != 0 )
    v5->m_coveringMe = 0;
  m_coveringMe = this->m_coveringMe;
  if ( m_coveringMe != 0 )
    (*(m_coveringMe->_vptr_INextBotEventResponder + 2))(m_coveringMe);
  m_action = this->m_eventResult.m_action;
  if ( m_action != 0 )
    (*(m_action->_vptr_INextBotEventResponder + 2))(m_action);
  this->_vptr_IContextualQuery = &off_3F7A990;
  this->_vptr_INextBotEventResponder = &off_3F7A570;
}


// Action<CSimpleBot>::~Action  (line 1061, @0x0000000002f1f370, libserver.so)
// calls: Action<CSimpleBot>::~Action, operator delete
void __fastcall Action<CSimpleBot>::~Action(Action<CSimpleBot> *const this)
{
  Action<CSimpleBot>::~Action(this);
  operator delete(this);
}


// Action<CDOTA_BaseNPC>::IsNamed  (line 1109, @0x0000000002883670, libserver.so)  // inlines: FStrEq, _V_strcmp
// calls: strcmp
bool __fastcall Action<CDOTA_BaseNPC>::IsNamed(const Action<CDOTA_BaseNPC> *const this, const char *name)
{
  const char *v3; // rax

  v3 = (*(this->_vptr_INextBotEventResponder + 62))(this);
  return v3 == name || strcmp(v3, name) == 0;
}


// Action<CSimpleBot>::IsNamed  (line 1109, @0x0000000002f1f440, libserver.so)  // inlines: FStrEq, _V_strcmp
// calls: strcmp
bool __fastcall Action<CSimpleBot>::IsNamed(const Action<CSimpleBot> *const this, const char *name)
{
  const char *v3; // rax

  v3 = (*(this->_vptr_INextBotEventResponder + 62))(this);
  return v3 == name || strcmp(v3, name) == 0;
}


// Action<CDOTA_BaseNPC>::InvokeOnStart  (line 1216, @0x000000000257a810, libserver.so)  // inlines: ActionResult, ChangeTo, Color, GetBool, GetInt, GetName, IActionResult, IsDebugging, SetColor, curtime
// calls: Action<CDOTA_BaseNPC>::ApplyResult, NextBotManager::IsDebugFilterMatch, CUtlSymbol::String, INextBot::DebugConColorMsg, __stack_chk_fail
// callers: Action<CDOTA_BaseNPC>::ApplyResult
// strings: "Starting child Action", "%3.2f: %s:%s: ", " STARTING "
ActionResult<CDOTA_BaseNPC> *__fastcall Action<CDOTA_BaseNPC>::InvokeOnStart(
        ActionResult<CDOTA_BaseNPC> *__return_ptr retstr,
        Action<CDOTA_BaseNPC> *const this,
        CDOTA_BaseNPC *me,
        Behavior<CDOTA_BaseNPC> *behavior,
        Action<CDOTA_BaseNPC> *priorAction,
        Action<CDOTA_BaseNPC> *buriedUnderMeAction)
{
  Action<CDOTA_BaseNPC> *v6; // r11
  INextBot *v8; // r14
  Action<CDOTA_BaseNPC> *m_parent; // rax
  int (**vptr_INextBotEventResponder)(...); // rax
  Action<CDOTA_BaseNPC> *v14; // rax
  bool IsDebugFilterMatch; // al
  char v17; // al
  const char *v18; // rax
  const char *v19; // r9
  Action<CDOTA_BaseNPC> *v20; // r11
  CGlobalVars *v21; // rdx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rcx
  double m_flCurrentTime; // xmm0_8
  const char *v24; // rax
  ActionResult<CDOTA_BaseNPC> v25; // [rsp+0h] [rbp-A0h]
  Action<CDOTA_BaseNPC> *v26; // [rsp+18h] [rbp-88h]
  Action<CDOTA_BaseNPC> *v27; // [rsp+20h] [rbp-80h]
  Action<CDOTA_BaseNPC> *v28; // [rsp+28h] [rbp-78h]
  CGlobalVars *v29; // [rsp+28h] [rbp-78h]
  Action<CDOTA_BaseNPC> *v30; // [rsp+28h] [rbp-78h]
  Action<CDOTA_BaseNPC> *buriedUnderMeActionb; // [rsp+30h] [rbp-70h]
  Action<CDOTA_BaseNPC> *buriedUnderMeActionc; // [rsp+30h] [rbp-70h]
  __int64 result_8; // [rsp+40h] [rbp-60h]
  Color color; // [rsp+60h] [rbp-40h] BYREF
  unsigned __int64 v37; // [rsp+68h] [rbp-38h]

  v6 = buriedUnderMeAction;
  v8 = &me->INextBot;
  v37 = __readfsqword(0x28u);
  if ( (g_NextBotManager.m_debugType & 1) != 0
    && (IsDebugFilterMatch = NextBotManager::IsDebugFilterMatch(&g_NextBotManager, &me->INextBot),
        v6 = buriedUnderMeAction,
        IsDebugFilterMatch)
    && (v17 = (*(me->_vptr_INextBotEventResponder + 96))(v8, 1), v6 = buriedUnderMeAction, v17 != 0)
    || NextBotDebugHistory.m_pParent->m_Value.m_nValue != 0 )
  {
    v28 = v6;
    buriedUnderMeActionb = CUtlSymbol::String(&behavior->m_name);
    v18 = (*(me->_vptr_INextBotEventResponder + 97))(v8);
    v19 = buriedUnderMeActionb;
    v20 = v28;
    v21 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
        {
          v26 = v28;
          v27 = buriedUnderMeActionb;
          v29 = gpGlobals;
          buriedUnderMeActionc = v18;
          m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
          v20 = v26;
          v19 = v27;
          v21 = v29;
          v18 = buriedUnderMeActionc;
        }
      }
      m_flCurrentTime = v21->m_flCurrentTime;
    }
    else
    {
      m_flCurrentTime = 0.0;
    }
    v30 = v20;
    color._color[0] = -1;
    color._color[1] = -1;
    color._color[2] = -106;
    color._color[3] = -1;
    INextBot::DebugConColorMsg(
      v8,
      NextBotDebugType::NEXTBOT_BEHAVIOR,
      &color,
      "%3.2f: %s:%s: ",
      m_flCurrentTime,
      v18,
      v19);
    color._color[0] = 0;
    color._color[1] = -1;
    color._color[2] = 0;
    color._color[3] = -1;
    INextBot::DebugConColorMsg(v8, NextBotDebugType::NEXTBOT_BEHAVIOR, &color, " STARTING ");
    v24 = (*(this->_vptr_INextBotEventResponder + 62))(this);
    color._color[0] = -1;
    color._color[1] = -1;
    color._color[2] = -1;
    color._color[3] = -1;
    INextBot::DebugConColorMsg(v8, NextBotDebugType::NEXTBOT_BEHAVIOR, &color, v24);
    color._color[0] = -1;
    color._color[1] = -1;
    color._color[2] = -1;
    color._color[3] = -1;
    INextBot::DebugConColorMsg(v8, NextBotDebugType::NEXTBOT_BEHAVIOR, &color, "\n");
    v6 = v30;
  }
  this->m_isStarted = 1;
  this->m_actor = me;
  this->m_behavior = behavior;
  if ( priorAction != 0 )
  {
    m_parent = priorAction->m_parent;
    this->m_parent = m_parent;
  }
  else
  {
    m_parent = this->m_parent;
  }
  if ( m_parent != 0 )
    m_parent->m_child = this;
  this->m_buriedUnderMe = v6;
  if ( v6 != 0 )
    v6->m_coveringMe = this;
  vptr_INextBotEventResponder = this->_vptr_INextBotEventResponder;
  this->m_coveringMe = 0;
  v14 = (vptr_INextBotEventResponder[70])(this, me);
  this->m_child = v14;
  if ( v14 != 0 )
  {
    v14->m_parent = this;
    LODWORD(result_8) = 1;
    v25.m_action = this->m_child;
    *&v25.m_type = result_8;
    v25.m_reason = "Starting child Action";
    this->m_child = Action<CDOTA_BaseNPC>::ApplyResult(v25.m_action, me, behavior, v25);
  }
  (*(this->_vptr_INextBotEventResponder + 65))(retstr, this, me, priorAction);
  return retstr;
}


// Action<CSimpleBot>::InvokeOnStart  (line 1216, @0x0000000002f23140, libserver.so)  // inlines: ActionResult, ChangeTo, Color, GetBool, GetInt, GetName, IActionResult, IsDebugFilterMatch, IsDebugging, SetColor, curtime
// calls: CUtlSymbol::String, INextBot::DebugConColorMsg, Action<CSimpleBot>::ApplyResult, NextBotManager::IsDebugFilterMatch, __stack_chk_fail
// callers: Action<CSimpleBot>::ApplyResult
// strings: "%3.2f: %s:%s: ", " STARTING ", "Starting child Action"
ActionResult<CSimpleBot> *__fastcall Action<CSimpleBot>::InvokeOnStart(
        ActionResult<CSimpleBot> *__return_ptr retstr,
        Action<CSimpleBot> *const this,
        CSimpleBot *me,
        Behavior<CSimpleBot> *behavior,
        Action<CSimpleBot> *priorAction,
        Action<CSimpleBot> *buriedUnderMeAction)
{
  const char *v11; // rax
  CGlobalVars *v12; // rdx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rcx
  double m_flCurrentTime; // xmm0_8
  const char *v15; // rax
  Action<CSimpleBot> *m_parent; // rax
  int (**vptr_INextBotEventResponder)(...); // rax
  Action<CSimpleBot> *v18; // rax
  ActionResult<CSimpleBot> v20; // [rsp+0h] [rbp-A0h]
  CGlobalVars *v21; // [rsp+18h] [rbp-88h]
  const char *v22; // [rsp+20h] [rbp-80h]
  Color *v23; // [rsp+28h] [rbp-78h]
  INextBot *result_8; // [rsp+38h] [rbp-68h]
  __int64 result_16; // [rsp+40h] [rbp-60h]
  Color color; // [rsp+60h] [rbp-40h] BYREF
  unsigned __int64 v28; // [rsp+68h] [rbp-38h]

  v28 = __readfsqword(0x28u);
  result_8 = &me->INextBot;
  if ( (g_NextBotManager.m_debugType & 1) != 0
    && (g_NextBotManager.m_debugFilterList.m_Size == 0 || NextBotManager::IsDebugFilterMatch(
                                                            &g_NextBotManager,
                                                            result_8))
    && (*(me->_vptr_INextBotEventResponder + 96))(result_8, 1) != 0
    || NextBotDebugHistory.m_pParent->m_Value.m_nValue != 0 )
  {
    v23 = CUtlSymbol::String(&behavior->m_name);
    v11 = (*(me->_vptr_INextBotEventResponder + 97))(result_8);
    v12 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
        {
          v21 = gpGlobals;
          v22 = v11;
          m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
          v12 = v21;
          v11 = v22;
        }
      }
      m_flCurrentTime = v12->m_flCurrentTime;
    }
    else
    {
      m_flCurrentTime = 0.0;
    }
    color._color[0] = -1;
    color._color[1] = -1;
    color._color[2] = -106;
    color._color[3] = -1;
    INextBot::DebugConColorMsg(
      result_8,
      NextBotDebugType::NEXTBOT_BEHAVIOR,
      &color,
      "%3.2f: %s:%s: ",
      m_flCurrentTime,
      v11,
      v23);
    color._color[0] = 0;
    color._color[1] = -1;
    color._color[2] = 0;
    color._color[3] = -1;
    INextBot::DebugConColorMsg(result_8, NextBotDebugType::NEXTBOT_BEHAVIOR, &color, " STARTING ");
    v15 = (*(this->_vptr_INextBotEventResponder + 62))(this);
    color._color[0] = -1;
    color._color[1] = -1;
    color._color[2] = -1;
    color._color[3] = -1;
    INextBot::DebugConColorMsg(result_8, NextBotDebugType::NEXTBOT_BEHAVIOR, &color, v15);
    color._color[0] = -1;
    color._color[1] = -1;
    color._color[2] = -1;
    color._color[3] = -1;
    INextBot::DebugConColorMsg(result_8, NextBotDebugType::NEXTBOT_BEHAVIOR, &color, "\n");
  }
  this->m_isStarted = 1;
  this->m_actor = me;
  this->m_behavior = behavior;
  if ( priorAction != 0 )
  {
    m_parent = priorAction->m_parent;
    this->m_parent = m_parent;
  }
  else
  {
    m_parent = this->m_parent;
  }
  if ( m_parent != 0 )
    m_parent->m_child = this;
  this->m_buriedUnderMe = buriedUnderMeAction;
  if ( buriedUnderMeAction != 0 )
    buriedUnderMeAction->m_coveringMe = this;
  vptr_INextBotEventResponder = this->_vptr_INextBotEventResponder;
  this->m_coveringMe = 0;
  v18 = (vptr_INextBotEventResponder[70])(this, me);
  this->m_child = v18;
  if ( v18 != 0 )
  {
    v18->m_parent = this;
    LODWORD(result_16) = 1;
    v20.m_action = this->m_child;
    *&v20.m_type = result_16;
    v20.m_reason = "Starting child Action";
    this->m_child = Action<CSimpleBot>::ApplyResult(v20.m_action, me, behavior, v20);
  }
  (*(this->_vptr_INextBotEventResponder + 65))(retstr, this, me, priorAction);
  return retstr;
}


// Action<CDOTA_BaseNPC>::InvokeUpdate  (line 1275, @0x000000000257ae10, libserver.so)  // inlines: ActionResult, ChangeTo, Done, IActionResult, IsOutOfScope, IsRequestingChange, ProcessPendingEvents
// calls: Action<CDOTA_BaseNPC>::ApplyResult
// callers: Behavior<CDOTA_BaseNPC>::Update
// strings: "Starting Action", "Out of scope"
ActionResult<CDOTA_BaseNPC> *__fastcall Action<CDOTA_BaseNPC>::InvokeUpdate(
        ActionResult<CDOTA_BaseNPC> *__return_ptr retstr,
        Action<CDOTA_BaseNPC> *const this,
        CDOTA_BaseNPC *me,
        Behavior<CDOTA_BaseNPC> *behavior,
        double interval)
{
  double v5; // xmm1_8
  Action<CDOTA_BaseNPC> *m_buriedUnderMe; // r10
  Action<CDOTA_BaseNPC> *v11; // r8
  ActionResultType m_type; // eax
  const char *m_reason; // rdx
  Action<CDOTA_BaseNPC> *m_action; // rcx
  Action<CDOTA_BaseNPC> *m_child; // rsi
  Action<CDOTA_BaseNPC> *v17; // rax
  unsigned int intervala; // [rsp+1Ch] [rbp-64h]
  ActionResult<CDOTA_BaseNPC> v19; // [rsp+20h] [rbp-60h] BYREF
  ActionResult<CDOTA_BaseNPC> v20; // [rsp+40h] [rbp-40h] BYREF

  v5 = interval;
  m_buriedUnderMe = this->m_buriedUnderMe;
  if ( m_buriedUnderMe != 0 )
  {
    if ( (m_buriedUnderMe->m_eventResult.m_type & 0xFFFFFFFD) == 1 )
    {
LABEL_15:
      retstr->m_type = ActionResultType::DONE;
      retstr->m_reason = "Out of scope";
      retstr->m_action = 0;
      return retstr;
    }
    v11 = this->m_buriedUnderMe;
    while ( 1 )
    {
      v11 = v11->m_buriedUnderMe;
      if ( v11 == 0 )
        break;
      if ( (v11->m_eventResult.m_type & 0xFFFFFFFD) == 1 )
        goto LABEL_15;
    }
  }
  if ( !this->m_isStarted )
  {
    retstr->m_type = ActionResultType::CHANGE_TO;
    retstr->m_action = this;
    retstr->m_reason = "Starting Action";
    return retstr;
  }
  m_type = this->m_eventResult.m_type;
  if ( (m_type - 1) <= 2 )
  {
    this->m_eventResult.m_type = ActionResultType::CONTINUE;
    m_reason = this->m_eventResult.m_reason;
    this->m_eventResult.m_priority = EventResultPriorityType::RESULT_NONE;
    m_action = this->m_eventResult.m_action;
    this->m_eventResult.m_reason = 0;
    this->m_eventResult.m_action = 0;
LABEL_17:
    retstr->m_type = m_type;
    retstr->m_action = m_action;
    retstr->m_reason = m_reason;
    return retstr;
  }
  this->m_eventResult.m_type = ActionResultType::CONTINUE;
  this->m_eventResult.m_action = 0;
  this->m_eventResult.m_reason = 0;
  this->m_eventResult.m_priority = EventResultPriorityType::RESULT_NONE;
  if ( m_buriedUnderMe != 0 )
  {
    while ( m_buriedUnderMe->m_eventResult.m_type != ActionResultType::SUSPEND_FOR )
    {
      m_buriedUnderMe = m_buriedUnderMe->m_buriedUnderMe;
      if ( m_buriedUnderMe == 0 )
        goto LABEL_18;
    }
    m_reason = m_buriedUnderMe->m_eventResult.m_reason;
    m_buriedUnderMe->m_eventResult.m_type = ActionResultType::CONTINUE;
    m_type = ActionResultType::SUSPEND_FOR;
    m_action = m_buriedUnderMe->m_eventResult.m_action;
    m_buriedUnderMe->m_eventResult.m_reason = 0;
    m_buriedUnderMe->m_eventResult.m_action = 0;
    m_buriedUnderMe->m_eventResult.m_priority = EventResultPriorityType::RESULT_NONE;
    goto LABEL_17;
  }
LABEL_18:
  m_child = this->m_child;
  if ( m_child != 0 )
  {
    intervala = LODWORD(interval);
    Action<CDOTA_BaseNPC>::InvokeUpdate(&v20, m_child, me, behavior, *&interval);
    v17 = Action<CDOTA_BaseNPC>::ApplyResult(this->m_child, me, behavior, v20);
    *&v5 = intervala;
    this->m_child = v17;
  }
  (*(this->_vptr_INextBotEventResponder + 66))(&v19, this, me, v5);
  *retstr = v19;
  return retstr;
}


// Action<CSimpleBot>::InvokeUpdate  (line 1275, @0x0000000002f22f20, libserver.so)  // inlines: ActionResult, ChangeTo, Done, IActionResult, IsOutOfScope, IsRequestingChange, ProcessPendingEvents
// calls: Action<CSimpleBot>::ApplyResult
// callers: Behavior<CSimpleBot>::Update
// strings: "Starting Action", "Out of scope"
ActionResult<CSimpleBot> *__fastcall Action<CSimpleBot>::InvokeUpdate(
        ActionResult<CSimpleBot> *__return_ptr retstr,
        Action<CSimpleBot> *const this,
        CSimpleBot *me,
        Behavior<CSimpleBot> *behavior,
        double interval)
{
  double v5; // xmm1_8
  Action<CSimpleBot> *m_buriedUnderMe; // r10
  Action<CSimpleBot> *v11; // r8
  ActionResultType m_type; // eax
  const char *m_reason; // rdx
  Action<CSimpleBot> *m_action; // rcx
  Action<CSimpleBot> *m_child; // rsi
  Action<CSimpleBot> *v17; // rax
  unsigned int intervala; // [rsp+1Ch] [rbp-64h]
  ActionResult<CSimpleBot> v19; // [rsp+20h] [rbp-60h] BYREF
  ActionResult<CSimpleBot> v20; // [rsp+40h] [rbp-40h] BYREF

  v5 = interval;
  m_buriedUnderMe = this->m_buriedUnderMe;
  if ( m_buriedUnderMe != 0 )
  {
    if ( (m_buriedUnderMe->m_eventResult.m_type & 0xFFFFFFFD) == 1 )
    {
LABEL_15:
      retstr->m_type = ActionResultType::DONE;
      retstr->m_reason = "Out of scope";
      retstr->m_action = 0;
      return retstr;
    }
    v11 = this->m_buriedUnderMe;
    while ( 1 )
    {
      v11 = v11->m_buriedUnderMe;
      if ( v11 == 0 )
        break;
      if ( (v11->m_eventResult.m_type & 0xFFFFFFFD) == 1 )
        goto LABEL_15;
    }
  }
  if ( !this->m_isStarted )
  {
    retstr->m_type = ActionResultType::CHANGE_TO;
    retstr->m_action = this;
    retstr->m_reason = "Starting Action";
    return retstr;
  }
  m_type = this->m_eventResult.m_type;
  if ( (m_type - 1) <= 2 )
  {
    this->m_eventResult.m_type = ActionResultType::CONTINUE;
    m_reason = this->m_eventResult.m_reason;
    this->m_eventResult.m_priority = EventResultPriorityType::RESULT_NONE;
    m_action = this->m_eventResult.m_action;
    this->m_eventResult.m_reason = 0;
    this->m_eventResult.m_action = 0;
LABEL_17:
    retstr->m_type = m_type;
    retstr->m_action = m_action;
    retstr->m_reason = m_reason;
    return retstr;
  }
  this->m_eventResult.m_type = ActionResultType::CONTINUE;
  this->m_eventResult.m_action = 0;
  this->m_eventResult.m_reason = 0;
  this->m_eventResult.m_priority = EventResultPriorityType::RESULT_NONE;
  if ( m_buriedUnderMe != 0 )
  {
    while ( m_buriedUnderMe->m_eventResult.m_type != ActionResultType::SUSPEND_FOR )
    {
      m_buriedUnderMe = m_buriedUnderMe->m_buriedUnderMe;
      if ( m_buriedUnderMe == 0 )
        goto LABEL_18;
    }
    m_reason = m_buriedUnderMe->m_eventResult.m_reason;
    m_buriedUnderMe->m_eventResult.m_type = ActionResultType::CONTINUE;
    m_type = ActionResultType::SUSPEND_FOR;
    m_action = m_buriedUnderMe->m_eventResult.m_action;
    m_buriedUnderMe->m_eventResult.m_reason = 0;
    m_buriedUnderMe->m_eventResult.m_action = 0;
    m_buriedUnderMe->m_eventResult.m_priority = EventResultPriorityType::RESULT_NONE;
    goto LABEL_17;
  }
LABEL_18:
  m_child = this->m_child;
  if ( m_child != 0 )
  {
    intervala = LODWORD(interval);
    Action<CSimpleBot>::InvokeUpdate(&v20, m_child, me, behavior, *&interval);
    v17 = Action<CSimpleBot>::ApplyResult(this->m_child, me, behavior, v20);
    *&v5 = intervala;
    this->m_child = v17;
  }
  (*(this->_vptr_INextBotEventResponder + 66))(&v19, this, me, v5);
  *retstr = v19;
  return retstr;
}


// Action<CDOTA_BaseNPC>::InvokeOnEnd  (line 1348, @0x00000000024bc9d0 libserver.so, @0x00000000028fdc50 libserver.so)  // inlines: Color, GetBool, GetInt, GetName, InvokeOnEnd, IsDebugging, SetColor, curtime
// calls: NextBotManager::IsDebugFilterMatch, CUtlSymbol::String, INextBot::DebugConColorMsg, __stack_chk_fail
// callers: Action<CDOTA_BaseNPC>::InvokeOnSuspend, Action<CDOTA_BaseNPC>::ApplyResult
// strings: "%3.2f: %s:%s: ", " ENDING "
void __fastcall Action<CDOTA_BaseNPC>::InvokeOnEnd(
        Action<CDOTA_BaseNPC> *const this,
        CDOTA_BaseNPC *me,
        Behavior<CDOTA_BaseNPC> *behavior,
        Action<CDOTA_BaseNPC> *nextAction)
{
  INextBot *v4; // r15
  Action<CDOTA_BaseNPC> *m_child; // rdi
  Action<CDOTA_BaseNPC> *m_buriedUnderMe; // r15
  Action<CDOTA_BaseNPC> *m_coveringMe; // rdi
  const char *v12; // rax
  const char *v13; // r9
  CGlobalVars *v14; // rdx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rcx
  double m_flCurrentTime; // xmm0_8
  const char *v17; // rax
  CGlobalVars *v18; // [rsp+8h] [rbp-58h]
  const char *v19; // [rsp+10h] [rbp-50h]
  Color *v20; // [rsp+18h] [rbp-48h]
  Color color; // [rsp+20h] [rbp-40h] BYREF
  unsigned __int64 v22; // [rsp+28h] [rbp-38h]

  v4 = &me->INextBot;
  v22 = __readfsqword(0x28u);
  if ( (g_NextBotManager.m_debugType & 1) != 0
    && NextBotManager::IsDebugFilterMatch(&g_NextBotManager, &me->INextBot)
    && (*(me->_vptr_INextBotEventResponder + 96))(v4, 1) != 0
    || NextBotDebugHistory.m_pParent->m_Value.m_nValue != 0 )
  {
    v20 = CUtlSymbol::String(&behavior->m_name);
    v12 = (*(me->_vptr_INextBotEventResponder + 97))(v4);
    v13 = v20;
    v14 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
        {
          v18 = gpGlobals;
          v19 = v12;
          m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
          v14 = v18;
          v12 = v19;
          v13 = v20;
        }
      }
      m_flCurrentTime = v14->m_flCurrentTime;
    }
    else
    {
      m_flCurrentTime = 0.0;
    }
    color._color[0] = -1;
    color._color[1] = -1;
    color._color[2] = -106;
    color._color[3] = -1;
    INextBot::DebugConColorMsg(
      v4,
      NextBotDebugType::NEXTBOT_BEHAVIOR,
      &color,
      "%3.2f: %s:%s: ",
      m_flCurrentTime,
      v12,
      v13);
    color._color[0] = -1;
    color._color[1] = 0;
    color._color[2] = 0;
    color._color[3] = -1;
    INextBot::DebugConColorMsg(v4, NextBotDebugType::NEXTBOT_BEHAVIOR, &color, " ENDING ");
    v17 = (*(this->_vptr_INextBotEventResponder + 62))(this);
    color._color[0] = -1;
    color._color[1] = -1;
    color._color[2] = -1;
    color._color[3] = -1;
    INextBot::DebugConColorMsg(v4, NextBotDebugType::NEXTBOT_BEHAVIOR, &color, v17);
    color._color[0] = -1;
    color._color[1] = -1;
    color._color[2] = -1;
    color._color[3] = -1;
    INextBot::DebugConColorMsg(v4, NextBotDebugType::NEXTBOT_BEHAVIOR, &color, "\n");
  }
  m_child = this->m_child;
  this->m_isStarted = 0;
  if ( m_child != 0 )
  {
    while ( 1 )
    {
      m_buriedUnderMe = m_child->m_buriedUnderMe;
      if ( m_child->m_isStarted )
        Action<CDOTA_BaseNPC>::InvokeOnEnd(m_child, me, behavior, nextAction);
      if ( m_buriedUnderMe == 0 )
        break;
      m_child = m_buriedUnderMe;
    }
  }
  (*(this->_vptr_INextBotEventResponder + 67))(this, me, nextAction);
  m_coveringMe = this->m_coveringMe;
  if ( m_coveringMe != 0 && m_coveringMe->m_isStarted )
    Action<CDOTA_BaseNPC>::InvokeOnEnd(m_coveringMe, me, behavior, nextAction);
}


// Action<CSimpleBot>::InvokeOnEnd  (line 1348, @0x0000000002f148c0, libserver.so)  // inlines: Color, GetBool, GetInt, GetName, InvokeOnEnd, IsDebugFilterMatch, IsDebugging, SetColor, curtime
// calls: CUtlSymbol::String, INextBot::DebugConColorMsg, NextBotManager::IsDebugFilterMatch, __stack_chk_fail
// callers: Action<CSimpleBot>::InvokeOnSuspend, Action<CSimpleBot>::ApplyResult
// strings: "%3.2f: %s:%s: ", " ENDING "
void __fastcall Action<CSimpleBot>::InvokeOnEnd(
        Action<CSimpleBot> *const this,
        CSimpleBot *me,
        Behavior<CSimpleBot> *behavior,
        Action<CSimpleBot> *nextAction)
{
  INextBot *v4; // r15
  const char *v9; // rax
  CGlobalVars *v10; // rdx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rcx
  double m_flCurrentTime; // xmm0_8
  const char *v13; // rax
  Action<CSimpleBot> *m_child; // rdi
  Action<CSimpleBot> *m_buriedUnderMe; // r15
  Action<CSimpleBot> *m_coveringMe; // rdi
  CGlobalVars *v17; // [rsp+8h] [rbp-58h]
  const char *v18; // [rsp+10h] [rbp-50h]
  Color *v19; // [rsp+18h] [rbp-48h]
  Color color; // [rsp+20h] [rbp-40h] BYREF
  unsigned __int64 v21; // [rsp+28h] [rbp-38h]

  v4 = &me->INextBot;
  v21 = __readfsqword(0x28u);
  if ( (g_NextBotManager.m_debugType & 1) != 0
    && (g_NextBotManager.m_debugFilterList.m_Size == 0
     || NextBotManager::IsDebugFilterMatch(&g_NextBotManager, &me->INextBot))
    && (*(me->_vptr_INextBotEventResponder + 96))(v4, 1) != 0
    || NextBotDebugHistory.m_pParent->m_Value.m_nValue != 0 )
  {
    v19 = CUtlSymbol::String(&behavior->m_name);
    v9 = (*(me->_vptr_INextBotEventResponder + 97))(v4);
    v10 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
        {
          v17 = gpGlobals;
          v18 = v9;
          m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
          v10 = v17;
          v9 = v18;
        }
      }
      m_flCurrentTime = v10->m_flCurrentTime;
    }
    else
    {
      m_flCurrentTime = 0.0;
    }
    color._color[0] = -1;
    color._color[1] = -1;
    color._color[2] = -106;
    color._color[3] = -1;
    INextBot::DebugConColorMsg(
      v4,
      NextBotDebugType::NEXTBOT_BEHAVIOR,
      &color,
      "%3.2f: %s:%s: ",
      m_flCurrentTime,
      v9,
      v19);
    color._color[0] = -1;
    color._color[1] = 0;
    color._color[2] = 0;
    color._color[3] = -1;
    INextBot::DebugConColorMsg(v4, NextBotDebugType::NEXTBOT_BEHAVIOR, &color, " ENDING ");
    v13 = (*(this->_vptr_INextBotEventResponder + 62))(this);
    color._color[0] = -1;
    color._color[1] = -1;
    color._color[2] = -1;
    color._color[3] = -1;
    INextBot::DebugConColorMsg(v4, NextBotDebugType::NEXTBOT_BEHAVIOR, &color, v13);
    color._color[0] = -1;
    color._color[1] = -1;
    color._color[2] = -1;
    color._color[3] = -1;
    INextBot::DebugConColorMsg(v4, NextBotDebugType::NEXTBOT_BEHAVIOR, &color, "\n");
  }
  m_child = this->m_child;
  this->m_isStarted = 0;
  if ( m_child != 0 )
  {
    while ( 1 )
    {
      m_buriedUnderMe = m_child->m_buriedUnderMe;
      if ( m_child->m_isStarted )
        Action<CSimpleBot>::InvokeOnEnd(m_child, me, behavior, nextAction);
      if ( m_buriedUnderMe == 0 )
        break;
      m_child = m_buriedUnderMe;
    }
  }
  (*(this->_vptr_INextBotEventResponder + 67))(this, me, nextAction);
  m_coveringMe = this->m_coveringMe;
  if ( m_coveringMe != 0 && m_coveringMe->m_isStarted )
    Action<CSimpleBot>::InvokeOnEnd(m_coveringMe, me, behavior, nextAction);
}


// Action<CDOTA_BaseNPC>::InvokeOnSuspend  (line 1393, @0x0000000002579710, libserver.so)  // inlines: Color, GetBool, GetInt, GetName, InvokeOnEnd, IsDebugging, SetColor, curtime
// calls: NextBotManager::IsDebugFilterMatch, CUtlSymbol::String, INextBot::DebugConColorMsg, Action<CDOTA_BaseNPC>::InvokeOnEnd, __stack_chk_fail
// callers: Action<CDOTA_BaseNPC>::ApplyResult
// strings: "%3.2f: %s:%s: ", " SUSPENDING "
Action<CDOTA_BaseNPC> *__fastcall Action<CDOTA_BaseNPC>::InvokeOnSuspend(
        Action<CDOTA_BaseNPC> *const this,
        CDOTA_BaseNPC *me,
        Behavior<CDOTA_BaseNPC> *behavior,
        Action<CDOTA_BaseNPC> *interruptingAction)
{
  INextBot *v6; // r12
  Action<CDOTA_BaseNPC> *m_child; // rdi
  int (**vptr_INextBotEventResponder)(...); // rax
  Action<CDOTA_BaseNPC> *m_buriedUnderMe; // r12
  const char *v12; // rax
  const char *v13; // r9
  CGlobalVars *v14; // r15
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rdx
  double m_flCurrentTime; // xmm0_8
  const char *v17; // rax
  const char *v18; // [rsp+8h] [rbp-78h]
  const char *v19; // [rsp+10h] [rbp-70h]
  const char *v20; // [rsp+10h] [rbp-70h]
  ActionResult<CDOTA_BaseNPC> v22; // [rsp+20h] [rbp-60h] BYREF
  Color color; // [rsp+40h] [rbp-40h] BYREF
  unsigned __int64 v24; // [rsp+48h] [rbp-38h]

  v6 = &me->INextBot;
  v24 = __readfsqword(0x28u);
  if ( (g_NextBotManager.m_debugType & 1) != 0
    && NextBotManager::IsDebugFilterMatch(&g_NextBotManager, &me->INextBot)
    && (*(me->_vptr_INextBotEventResponder + 96))(v6, 1) != 0
    || NextBotDebugHistory.m_pParent->m_Value.m_nValue != 0 )
  {
    v19 = CUtlSymbol::String(&behavior->m_name);
    v12 = (*(me->_vptr_INextBotEventResponder + 97))(v6);
    v13 = v19;
    v14 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
        {
          v18 = v19;
          v20 = v12;
          m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
          v13 = v18;
          v12 = v20;
        }
      }
      m_flCurrentTime = v14->m_flCurrentTime;
    }
    else
    {
      m_flCurrentTime = 0.0;
    }
    color._color[0] = -1;
    color._color[1] = -1;
    color._color[2] = -106;
    color._color[3] = -1;
    INextBot::DebugConColorMsg(
      v6,
      NextBotDebugType::NEXTBOT_BEHAVIOR,
      &color,
      "%3.2f: %s:%s: ",
      m_flCurrentTime,
      v12,
      v13);
    color._color[0] = -1;
    color._color[1] = 0;
    color._color[2] = -1;
    color._color[3] = -1;
    INextBot::DebugConColorMsg(v6, NextBotDebugType::NEXTBOT_BEHAVIOR, &color, " SUSPENDING ");
    v17 = (*(this->_vptr_INextBotEventResponder + 62))(this);
    color._color[0] = -1;
    color._color[1] = -1;
    color._color[2] = -1;
    color._color[3] = -1;
    INextBot::DebugConColorMsg(v6, NextBotDebugType::NEXTBOT_BEHAVIOR, &color, v17);
    color._color[0] = -1;
    color._color[1] = -1;
    color._color[2] = -1;
    color._color[3] = -1;
    INextBot::DebugConColorMsg(v6, NextBotDebugType::NEXTBOT_BEHAVIOR, &color, "\n");
  }
  m_child = this->m_child;
  if ( m_child != 0 )
    this->m_child = Action<CDOTA_BaseNPC>::InvokeOnSuspend(m_child, me, behavior, interruptingAction);
  vptr_INextBotEventResponder = this->_vptr_INextBotEventResponder;
  this->m_isSuspended = 1;
  m_buriedUnderMe = this;
  vptr_INextBotEventResponder[68](&v22, this, me, interruptingAction);
  if ( v22.m_type == ActionResultType::DONE )
  {
    if ( this->m_isStarted )
      Action<CDOTA_BaseNPC>::InvokeOnEnd(this, me, behavior, 0);
    m_buriedUnderMe = this->m_buriedUnderMe;
    (*(this->_vptr_INextBotEventResponder + 2))(this);
  }
  return m_buriedUnderMe;
}


// Action<CSimpleBot>::InvokeOnSuspend  (line 1393, @0x0000000002f21ed0, libserver.so)  // inlines: Color, GetBool, GetInt, GetName, InvokeOnEnd, IsDebugFilterMatch, IsDebugging, SetColor, curtime
// calls: CUtlSymbol::String, INextBot::DebugConColorMsg, NextBotManager::IsDebugFilterMatch, Action<CSimpleBot>::InvokeOnEnd, __stack_chk_fail
// callers: Action<CSimpleBot>::ApplyResult
// strings: "%3.2f: %s:%s: ", " SUSPENDING "
Action<CSimpleBot> *__fastcall Action<CSimpleBot>::InvokeOnSuspend(
        Action<CSimpleBot> *const this,
        CSimpleBot *me,
        Behavior<CSimpleBot> *behavior,
        Action<CSimpleBot> *interruptingAction)
{
  INextBot *v6; // r12
  const char *v8; // rax
  CGlobalVars *v9; // r15
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rdx
  double m_flCurrentTime; // xmm0_8
  const char *v12; // rax
  Action<CSimpleBot> *m_child; // rdi
  int (**vptr_INextBotEventResponder)(...); // rax
  Action<CSimpleBot> *m_buriedUnderMe; // r12
  const char *v17; // [rsp+8h] [rbp-78h]
  const char *v18; // [rsp+10h] [rbp-70h]
  ActionResult<CSimpleBot> v20; // [rsp+20h] [rbp-60h] BYREF
  Color color; // [rsp+40h] [rbp-40h] BYREF
  unsigned __int64 v22; // [rsp+48h] [rbp-38h]

  v6 = &me->INextBot;
  v22 = __readfsqword(0x28u);
  if ( (g_NextBotManager.m_debugType & 1) != 0
    && (g_NextBotManager.m_debugFilterList.m_Size == 0
     || NextBotManager::IsDebugFilterMatch(&g_NextBotManager, &me->INextBot))
    && (*(me->_vptr_INextBotEventResponder + 96))(v6, 1) != 0
    || NextBotDebugHistory.m_pParent->m_Value.m_nValue != 0 )
  {
    v18 = CUtlSymbol::String(&behavior->m_name);
    v8 = (*(me->_vptr_INextBotEventResponder + 97))(v6);
    v9 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
        {
          v17 = v8;
          m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
          v8 = v17;
        }
      }
      m_flCurrentTime = v9->m_flCurrentTime;
    }
    else
    {
      m_flCurrentTime = 0.0;
    }
    color._color[0] = -1;
    color._color[1] = -1;
    color._color[2] = -106;
    color._color[3] = -1;
    INextBot::DebugConColorMsg(
      v6,
      NextBotDebugType::NEXTBOT_BEHAVIOR,
      &color,
      "%3.2f: %s:%s: ",
      m_flCurrentTime,
      v8,
      v18);
    color._color[0] = -1;
    color._color[1] = 0;
    color._color[2] = -1;
    color._color[3] = -1;
    INextBot::DebugConColorMsg(v6, NextBotDebugType::NEXTBOT_BEHAVIOR, &color, " SUSPENDING ");
    v12 = (*(this->_vptr_INextBotEventResponder + 62))(this);
    color._color[0] = -1;
    color._color[1] = -1;
    color._color[2] = -1;
    color._color[3] = -1;
    INextBot::DebugConColorMsg(v6, NextBotDebugType::NEXTBOT_BEHAVIOR, &color, v12);
    color._color[0] = -1;
    color._color[1] = -1;
    color._color[2] = -1;
    color._color[3] = -1;
    INextBot::DebugConColorMsg(v6, NextBotDebugType::NEXTBOT_BEHAVIOR, &color, "\n");
  }
  m_child = this->m_child;
  if ( m_child != 0 )
    this->m_child = Action<CSimpleBot>::InvokeOnSuspend(m_child, me, behavior, interruptingAction);
  vptr_INextBotEventResponder = this->_vptr_INextBotEventResponder;
  this->m_isSuspended = 1;
  m_buriedUnderMe = this;
  vptr_INextBotEventResponder[68](&v20, this, me, interruptingAction);
  if ( v20.m_type == ActionResultType::DONE )
  {
    if ( this->m_isStarted )
      Action<CSimpleBot>::InvokeOnEnd(this, me, behavior, 0);
    m_buriedUnderMe = this->m_buriedUnderMe;
    (*(this->_vptr_INextBotEventResponder + 2))(this);
  }
  return m_buriedUnderMe;
}


// Action<CDOTA_BaseNPC>::InvokeOnResume  (line 1433, @0x000000000257ab10, libserver.so)  // inlines: ActionResult, Color, Continue, GetBool, GetInt, GetName, IActionResult, IsDebugging, IsRequestingChange, SetColor, curtime
// calls: CUtlSymbol::String, INextBot::DebugConColorMsg, Action<CDOTA_BaseNPC>::ApplyResult, NextBotManager::IsDebugFilterMatch, __stack_chk_fail
// callers: Action<CDOTA_BaseNPC>::ApplyResult
// strings: "%3.2f: %s:%s: ", " RESUMING "
ActionResult<CDOTA_BaseNPC> *__fastcall Action<CDOTA_BaseNPC>::InvokeOnResume(
        ActionResult<CDOTA_BaseNPC> *__return_ptr retstr,
        Action<CDOTA_BaseNPC> *const this,
        CDOTA_BaseNPC *me,
        Behavior<CDOTA_BaseNPC> *behavior,
        Action<CDOTA_BaseNPC> *interruptingAction)
{
  INextBot *v7; // r12
  const char *v9; // rax
  const char *v10; // r9
  CGlobalVars *v11; // r15
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rdx
  double m_flCurrentTime; // xmm0_8
  const char *v14; // rax
  Action<CDOTA_BaseNPC> *m_parent; // rax
  Action<CDOTA_BaseNPC> *m_child; // rsi
  const char *v18; // [rsp+20h] [rbp-A0h]
  const char *v19; // [rsp+28h] [rbp-98h]
  const char *v20; // [rsp+28h] [rbp-98h]
  ActionResult<CDOTA_BaseNPC> v23; // [rsp+40h] [rbp-80h] BYREF
  ActionResult<CDOTA_BaseNPC> v24; // [rsp+60h] [rbp-60h] BYREF
  Color color; // [rsp+80h] [rbp-40h] BYREF
  unsigned __int64 v26; // [rsp+88h] [rbp-38h]

  v7 = &me->INextBot;
  v26 = __readfsqword(0x28u);
  if ( (g_NextBotManager.m_debugType & 1) != 0
    && NextBotManager::IsDebugFilterMatch(&g_NextBotManager, &me->INextBot)
    && (*(me->_vptr_INextBotEventResponder + 96))(v7, 1) != 0
    || NextBotDebugHistory.m_pParent->m_Value.m_nValue != 0 )
  {
    v19 = CUtlSymbol::String(&behavior->m_name);
    v9 = (*(me->_vptr_INextBotEventResponder + 97))(v7);
    v10 = v19;
    v11 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
        {
          v18 = v19;
          v20 = v9;
          m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
          v10 = v18;
          v9 = v20;
        }
      }
      m_flCurrentTime = v11->m_flCurrentTime;
    }
    else
    {
      m_flCurrentTime = 0.0;
    }
    color._color[0] = -1;
    color._color[1] = -1;
    color._color[2] = -106;
    color._color[3] = -1;
    INextBot::DebugConColorMsg(
      v7,
      NextBotDebugType::NEXTBOT_BEHAVIOR,
      &color,
      "%3.2f: %s:%s: ",
      m_flCurrentTime,
      v9,
      v10);
    color._color[0] = -1;
    color._color[1] = 0;
    color._color[2] = -1;
    color._color[3] = -1;
    INextBot::DebugConColorMsg(v7, NextBotDebugType::NEXTBOT_BEHAVIOR, &color, " RESUMING ");
    v14 = (*(this->_vptr_INextBotEventResponder + 62))(this);
    color._color[0] = -1;
    color._color[1] = -1;
    color._color[2] = -1;
    color._color[3] = -1;
    INextBot::DebugConColorMsg(v7, NextBotDebugType::NEXTBOT_BEHAVIOR, &color, v14);
    color._color[0] = -1;
    color._color[1] = -1;
    color._color[2] = -1;
    color._color[3] = -1;
    INextBot::DebugConColorMsg(v7, NextBotDebugType::NEXTBOT_BEHAVIOR, &color, "\n");
  }
  if ( this->m_isSuspended && (this->m_eventResult.m_type - 1) > 2 )
  {
    m_parent = this->m_parent;
    this->m_isSuspended = 0;
    this->m_coveringMe = 0;
    if ( m_parent != 0 )
      m_parent->m_child = this;
    m_child = this->m_child;
    if ( m_child != 0 )
    {
      Action<CDOTA_BaseNPC>::InvokeOnResume(&v24, m_child, me, behavior, interruptingAction);
      this->m_child = Action<CDOTA_BaseNPC>::ApplyResult(this->m_child, me, behavior, v24);
    }
    (*(this->_vptr_INextBotEventResponder + 69))(&v23, this, me, interruptingAction);
    *retstr = v23;
  }
  else
  {
    retstr->m_type = ActionResultType::CONTINUE;
    retstr->m_action = 0;
    retstr->m_reason = 0;
  }
  return retstr;
}


// Action<CSimpleBot>::InvokeOnResume  (line 1433, @0x0000000002f23420, libserver.so)  // inlines: ActionResult, Color, Continue, GetBool, GetInt, GetName, IActionResult, IsDebugFilterMatch, IsDebugging, IsRequestingChange, SetColor, curtime
// calls: CUtlSymbol::String, INextBot::DebugConColorMsg, Action<CSimpleBot>::ApplyResult, NextBotManager::IsDebugFilterMatch, __stack_chk_fail
// callers: Action<CSimpleBot>::ApplyResult
// strings: "%3.2f: %s:%s: ", " RESUMING "
ActionResult<CSimpleBot> *__fastcall Action<CSimpleBot>::InvokeOnResume(
        ActionResult<CSimpleBot> *__return_ptr retstr,
        Action<CSimpleBot> *const this,
        CSimpleBot *me,
        Behavior<CSimpleBot> *behavior,
        Action<CSimpleBot> *interruptingAction)
{
  INextBot *v7; // r12
  const char *v9; // rax
  CGlobalVars *v10; // r15
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rdx
  double m_flCurrentTime; // xmm0_8
  const char *v13; // rax
  Action<CSimpleBot> *m_parent; // rax
  Action<CSimpleBot> *m_child; // rsi
  const char *v17; // [rsp+20h] [rbp-A0h]
  const char *v18; // [rsp+28h] [rbp-98h]
  ActionResult<CSimpleBot> v21; // [rsp+40h] [rbp-80h] BYREF
  ActionResult<CSimpleBot> v22; // [rsp+60h] [rbp-60h] BYREF
  Color color; // [rsp+80h] [rbp-40h] BYREF
  unsigned __int64 v24; // [rsp+88h] [rbp-38h]

  v7 = &me->INextBot;
  v24 = __readfsqword(0x28u);
  if ( (g_NextBotManager.m_debugType & 1) != 0
    && (g_NextBotManager.m_debugFilterList.m_Size == 0
     || NextBotManager::IsDebugFilterMatch(&g_NextBotManager, &me->INextBot))
    && (*(me->_vptr_INextBotEventResponder + 96))(v7, 1) != 0
    || NextBotDebugHistory.m_pParent->m_Value.m_nValue != 0 )
  {
    v18 = CUtlSymbol::String(&behavior->m_name);
    v9 = (*(me->_vptr_INextBotEventResponder + 97))(v7);
    v10 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
        {
          v17 = v9;
          m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
          v9 = v17;
        }
      }
      m_flCurrentTime = v10->m_flCurrentTime;
    }
    else
    {
      m_flCurrentTime = 0.0;
    }
    color._color[0] = -1;
    color._color[1] = -1;
    color._color[2] = -106;
    color._color[3] = -1;
    INextBot::DebugConColorMsg(
      v7,
      NextBotDebugType::NEXTBOT_BEHAVIOR,
      &color,
      "%3.2f: %s:%s: ",
      m_flCurrentTime,
      v9,
      v18);
    color._color[0] = -1;
    color._color[1] = 0;
    color._color[2] = -1;
    color._color[3] = -1;
    INextBot::DebugConColorMsg(v7, NextBotDebugType::NEXTBOT_BEHAVIOR, &color, " RESUMING ");
    v13 = (*(this->_vptr_INextBotEventResponder + 62))(this);
    color._color[0] = -1;
    color._color[1] = -1;
    color._color[2] = -1;
    color._color[3] = -1;
    INextBot::DebugConColorMsg(v7, NextBotDebugType::NEXTBOT_BEHAVIOR, &color, v13);
    color._color[0] = -1;
    color._color[1] = -1;
    color._color[2] = -1;
    color._color[3] = -1;
    INextBot::DebugConColorMsg(v7, NextBotDebugType::NEXTBOT_BEHAVIOR, &color, "\n");
    if ( !this->m_isSuspended )
      goto LABEL_20;
  }
  else if ( !this->m_isSuspended )
  {
    goto LABEL_20;
  }
  if ( (this->m_eventResult.m_type - 1) <= 2 )
  {
LABEL_20:
    retstr->m_type = ActionResultType::CONTINUE;
    retstr->m_action = 0;
    retstr->m_reason = 0;
    return retstr;
  }
  m_parent = this->m_parent;
  this->m_isSuspended = 0;
  this->m_coveringMe = 0;
  if ( m_parent != 0 )
    m_parent->m_child = this;
  m_child = this->m_child;
  if ( m_child != 0 )
  {
    Action<CSimpleBot>::InvokeOnResume(&v22, m_child, me, behavior, interruptingAction);
    this->m_child = Action<CSimpleBot>::ApplyResult(this->m_child, me, behavior, v22);
  }
  (*(this->_vptr_INextBotEventResponder + 69))(&v21, this, me, interruptingAction);
  *retstr = v21;
  return retstr;
}


// Action<CDOTA_BaseNPC>::ApplyResult  (line 1485, @0x0000000002579e10, libserver.so)  // inlines: Color, GetBool, GetInt, GetName, InvokeOnEnd, IsDebugging, SetColor, curtime
// calls: CUtlSymbol::String, INextBot::DebugConColorMsg, Action<CDOTA_BaseNPC>::InvokeOnStart, NextBotManager::IsDebugFilterMatch, Action<CDOTA_BaseNPC>::PrintStateToConsole, Action<CDOTA_BaseNPC>::InvokeOnResume, Action<CDOTA_BaseNPC>::InvokeOnSuspend, Action<CDOTA_BaseNPC>::InvokeOnEnd, DevMsg(char const*,...), __stack_chk_fail
// callers: Action<CDOTA_BaseNPC>::InvokeOnStart, Action<CDOTA_BaseNPC>::InvokeOnResume, Action<CDOTA_BaseNPC>::InvokeUpdate, Behavior<CDOTA_BaseNPC>::Update
// strings: "%3.2f: %s:%s: ", " CHANGE_TO ", "  (%s)\n", " caused ", " to SUSPEND_FOR ", " DONE." (9 total)
Action<CDOTA_BaseNPC> *__fastcall Action<CDOTA_BaseNPC>::ApplyResult(
        Action<CDOTA_BaseNPC> *const this,
        CDOTA_BaseNPC *me,
        Behavior<CDOTA_BaseNPC> *behavior,
        ActionResult<CDOTA_BaseNPC> result)
{
  Action<CDOTA_BaseNPC> *m_action; // r12
  const char *v9; // rax
  const char *v10; // r9
  CGlobalVars *v11; // rdx
  double v12; // xmm0_8
  const char *v13; // rax
  int (**vptr_INextBotEventResponder)(...); // rax
  Action<CDOTA_BaseNPC> *v15; // rdi
  const char *v16; // rax
  Action<CDOTA_BaseNPC> *i; // r10
  const char *v18; // rax
  const char *v19; // r9
  Action<CDOTA_BaseNPC> *v20; // r10
  CGlobalVars *v21; // rdx
  double m_flCurrentTime; // xmm0_8
  const char *v23; // rax
  const char *v24; // rax
  const char *v25; // rax
  Action<CDOTA_BaseNPC> *v26; // rax
  bool IsDebugFilterMatch; // al
  char v28; // al
  const char *v29; // rax
  const char *v30; // r9
  CGlobalVars *v31; // rdx
  double v32; // xmm0_8
  const char *v33; // rax
  const char *v34; // rcx
  __int64 v35; // rax
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rcx
  FnGlobalVarsWarningFunc v37; // rcx
  FnGlobalVarsWarningFunc v38; // rcx
  Action<CDOTA_BaseNPC> *v39; // [rsp+20h] [rbp-90h]
  CGlobalVars *v40; // [rsp+28h] [rbp-88h]
  Action<CDOTA_BaseNPC> *v41; // [rsp+28h] [rbp-88h]
  Action<CDOTA_BaseNPC> *v42; // [rsp+28h] [rbp-88h]
  Action<CDOTA_BaseNPC> *v43; // [rsp+30h] [rbp-80h]
  Action<CDOTA_BaseNPC> *v44; // [rsp+30h] [rbp-80h]
  const char *v45; // [rsp+30h] [rbp-80h]
  CGlobalVars *v46; // [rsp+30h] [rbp-80h]
  CGlobalVars *v47; // [rsp+30h] [rbp-80h]
  Action<CDOTA_BaseNPC> *topAction; // [rsp+38h] [rbp-78h]
  Action<CDOTA_BaseNPC> *topActiona; // [rsp+38h] [rbp-78h]
  Action<CDOTA_BaseNPC> *topActionb; // [rsp+38h] [rbp-78h]
  Action<CDOTA_BaseNPC> *topActionc; // [rsp+38h] [rbp-78h]
  Action<CDOTA_BaseNPC> *topActiond; // [rsp+38h] [rbp-78h]
  Action<CDOTA_BaseNPC> *topActione; // [rsp+38h] [rbp-78h]
  Action<CDOTA_BaseNPC> *topActionf; // [rsp+38h] [rbp-78h]
  INextBot *pBot; // [rsp+40h] [rbp-70h]
  INextBot *pBota; // [rsp+40h] [rbp-70h]
  ActionResult<CDOTA_BaseNPC> resumeResult; // [rsp+50h] [rbp-60h] BYREF
  Color color; // [rsp+70h] [rbp-40h] BYREF
  unsigned __int64 v59; // [rsp+78h] [rbp-38h]

  v59 = __readfsqword(0x28u);
  m_action = result.m_action;
  switch ( result.m_type )
  {
    case ActionResultType::SUSPEND_FOR:
      for ( i = this; i->m_coveringMe != 0; i = i->m_coveringMe )
        ;
      pBot = &me->INextBot;
      if ( (g_NextBotManager.m_debugType & 1) != 0
        && (topActionb = i,
            IsDebugFilterMatch = NextBotManager::IsDebugFilterMatch(&g_NextBotManager, &me->INextBot),
            i = topActionb,
            IsDebugFilterMatch)
        && (v28 = (*(me->_vptr_INextBotEventResponder + 96))(pBot, 1), i = topActionb, v28 != 0)
        || NextBotDebugHistory.m_pParent->m_Value.m_nValue != 0 )
      {
        v43 = i;
        topActiona = CUtlSymbol::String(&behavior->m_name);
        v18 = (*(me->_vptr_INextBotEventResponder + 97))(pBot);
        v19 = topActiona;
        v20 = v43;
        v21 = gpGlobals;
        if ( gpGlobals != 0 )
        {
          if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
          {
            m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
            if ( m_pfnWarningFunc != 0 )
            {
              v39 = topActiona;
              v40 = gpGlobals;
              v45 = v18;
              topActiond = v20;
              m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
              v19 = v39;
              v21 = v40;
              v18 = v45;
              v20 = topActiond;
            }
          }
          m_flCurrentTime = v21->m_flCurrentTime;
        }
        else
        {
          m_flCurrentTime = 0.0;
        }
        v44 = v20;
        color._color[0] = -1;
        color._color[1] = -1;
        color._color[2] = -106;
        color._color[3] = -1;
        INextBot::DebugConColorMsg(
          pBot,
          NextBotDebugType::NEXTBOT_BEHAVIOR,
          &color,
          "%3.2f: %s:%s: ",
          m_flCurrentTime,
          v18,
          v19);
        v23 = (*(this->_vptr_INextBotEventResponder + 62))(this);
        color._color[0] = -1;
        color._color[1] = -1;
        color._color[2] = -1;
        color._color[3] = -1;
        INextBot::DebugConColorMsg(pBot, NextBotDebugType::NEXTBOT_BEHAVIOR, &color, v23);
        color._color[0] = -1;
        color._color[1] = 0;
        color._color[2] = -1;
        color._color[3] = -1;
        INextBot::DebugConColorMsg(pBot, NextBotDebugType::NEXTBOT_BEHAVIOR, &color, " caused ");
        v24 = (*(v44->_vptr_INextBotEventResponder + 62))(v44);
        color._color[0] = -1;
        color._color[1] = -1;
        color._color[2] = -1;
        color._color[3] = -1;
        INextBot::DebugConColorMsg(pBot, NextBotDebugType::NEXTBOT_BEHAVIOR, &color, v24);
        color._color[0] = -1;
        color._color[1] = 0;
        color._color[2] = -1;
        color._color[3] = -1;
        INextBot::DebugConColorMsg(pBot, NextBotDebugType::NEXTBOT_BEHAVIOR, &color, " to SUSPEND_FOR ");
        v25 = (*(result.m_action->_vptr_INextBotEventResponder + 62))(result.m_action);
        color._color[0] = -1;
        color._color[1] = -1;
        color._color[2] = -1;
        color._color[3] = -1;
        INextBot::DebugConColorMsg(pBot, NextBotDebugType::NEXTBOT_BEHAVIOR, &color, v25);
        if ( result.m_reason != 0 )
        {
          color._color[0] = -106;
          color._color[1] = -1;
          color._color[2] = -106;
          color._color[3] = -1;
          INextBot::DebugConColorMsg(pBot, NextBotDebugType::NEXTBOT_BEHAVIOR, &color, "  (%s)\n", result.m_reason);
        }
        else
        {
          color._color[0] = -1;
          color._color[1] = -1;
          color._color[2] = -1;
          color._color[3] = -1;
          INextBot::DebugConColorMsg(pBot, NextBotDebugType::NEXTBOT_BEHAVIOR, &color, "\n");
        }
        i = v44;
      }
      v26 = Action<CDOTA_BaseNPC>::InvokeOnSuspend(i, me, behavior, result.m_action);
      Action<CDOTA_BaseNPC>::InvokeOnStart(&resumeResult, result.m_action, me, behavior, v26, v26);
      goto LABEL_41;
    case ActionResultType::DONE:
      m_action = this->m_buriedUnderMe;
      if ( this->m_isStarted )
        Action<CDOTA_BaseNPC>::InvokeOnEnd(this, me, behavior, this->m_buriedUnderMe);
      pBota = &me->INextBot;
      if ( (g_NextBotManager.m_debugType & 1) != 0
        && NextBotManager::IsDebugFilterMatch(&g_NextBotManager, &me->INextBot)
        && (*(me->_vptr_INextBotEventResponder + 96))(pBota, 1) != 0
        || NextBotDebugHistory.m_pParent->m_Value.m_nValue != 0 )
      {
        topActionc = CUtlSymbol::String(&behavior->m_name);
        v29 = (*(me->_vptr_INextBotEventResponder + 97))(pBota);
        v30 = topActionc;
        v31 = gpGlobals;
        if ( gpGlobals != 0 )
        {
          if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
          {
            v37 = gpGlobals->m_pfnWarningFunc;
            if ( v37 != 0 )
            {
              v41 = topActionc;
              v46 = gpGlobals;
              topActione = v29;
              v37(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
              v30 = v41;
              v31 = v46;
              v29 = topActione;
            }
          }
          v32 = v31->m_flCurrentTime;
        }
        else
        {
          v32 = 0.0;
        }
        color._color[0] = -1;
        color._color[1] = -1;
        color._color[2] = -106;
        color._color[3] = -1;
        INextBot::DebugConColorMsg(pBota, NextBotDebugType::NEXTBOT_BEHAVIOR, &color, "%3.2f: %s:%s: ", v32, v29, v30);
        v33 = (*(this->_vptr_INextBotEventResponder + 62))(this);
        color._color[0] = -1;
        color._color[1] = -1;
        color._color[2] = -1;
        color._color[3] = -1;
        INextBot::DebugConColorMsg(pBota, NextBotDebugType::NEXTBOT_BEHAVIOR, &color, v33);
        color._color[0] = 0;
        color._color[1] = -1;
        v34 = " DONE.";
        color._color[2] = 0;
        color._color[3] = -1;
        if ( m_action != 0 )
        {
          INextBot::DebugConColorMsg(pBota, NextBotDebugType::NEXTBOT_BEHAVIOR, &color, " DONE, RESUME ");
          v35 = (*(m_action->_vptr_INextBotEventResponder + 62))(m_action);
          color._color[0] = -1;
          color._color[1] = -1;
          v34 = v35;
          color._color[2] = -1;
          color._color[3] = -1;
        }
        INextBot::DebugConColorMsg(pBota, NextBotDebugType::NEXTBOT_BEHAVIOR, &color, v34);
        if ( result.m_reason != 0 )
        {
          color._color[0] = -106;
          color._color[1] = -1;
          color._color[2] = -106;
          color._color[3] = -1;
          INextBot::DebugConColorMsg(pBota, NextBotDebugType::NEXTBOT_BEHAVIOR, &color, "  (%s)\n", result.m_reason);
        }
        else
        {
          color._color[0] = -1;
          color._color[1] = -1;
          color._color[2] = -1;
          color._color[3] = -1;
          INextBot::DebugConColorMsg(pBota, NextBotDebugType::NEXTBOT_BEHAVIOR, &color, "\n");
        }
      }
      if ( m_action != 0 )
      {
        Action<CDOTA_BaseNPC>::InvokeOnResume(&resumeResult, m_action, me, behavior, this);
        if ( (g_NextBotManager.m_debugType & 1) != 0
          && NextBotManager::IsDebugFilterMatch(&g_NextBotManager, pBota)
          && (*(me->_vptr_INextBotEventResponder + 96))(pBota, 1) != 0 )
        {
          Action<CDOTA_BaseNPC>::PrintStateToConsole(m_action);
        }
        (*(this->_vptr_INextBotEventResponder + 2))(this);
        return Action<CDOTA_BaseNPC>::ApplyResult(m_action, me, behavior, resumeResult);
      }
      (*(this->_vptr_INextBotEventResponder + 2))(this);
      return 0;
    case ActionResultType::CHANGE_TO:
      if ( result.m_action != 0 )
      {
        pBot = &me->INextBot;
        if ( (g_NextBotManager.m_debugType & 1) != 0
          && NextBotManager::IsDebugFilterMatch(&g_NextBotManager, &me->INextBot)
          && (*(me->_vptr_INextBotEventResponder + 96))(pBot, 1) != 0
          || NextBotDebugHistory.m_pParent->m_Value.m_nValue != 0 )
        {
          topAction = CUtlSymbol::String(&behavior->m_name);
          v9 = (*(me->_vptr_INextBotEventResponder + 97))(pBot);
          v10 = topAction;
          v11 = gpGlobals;
          if ( gpGlobals != 0 )
          {
            if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
            {
              v38 = gpGlobals->m_pfnWarningFunc;
              if ( v38 != 0 )
              {
                v42 = topAction;
                v47 = gpGlobals;
                topActionf = v9;
                v38(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
                v10 = v42;
                v11 = v47;
                v9 = topActionf;
              }
            }
            v12 = v11->m_flCurrentTime;
          }
          else
          {
            v12 = 0.0;
          }
          color._color[0] = -1;
          color._color[1] = -1;
          color._color[2] = -106;
          color._color[3] = -1;
          INextBot::DebugConColorMsg(pBot, NextBotDebugType::NEXTBOT_BEHAVIOR, &color, "%3.2f: %s:%s: ", v12, v9, v10);
          if ( this == result.m_action )
          {
            color._color[0] = -1;
            color._color[1] = 0;
            color._color[2] = 0;
            color._color[3] = -1;
            INextBot::DebugConColorMsg(pBot, NextBotDebugType::NEXTBOT_BEHAVIOR, &color, "START ");
            vptr_INextBotEventResponder = this->_vptr_INextBotEventResponder;
            v15 = this;
          }
          else
          {
            v13 = (*(this->_vptr_INextBotEventResponder + 62))(this);
            color._color[0] = -1;
            color._color[1] = -1;
            color._color[2] = -1;
            color._color[3] = -1;
            INextBot::DebugConColorMsg(pBot, NextBotDebugType::NEXTBOT_BEHAVIOR, &color, v13);
            color._color[0] = -1;
            color._color[1] = 0;
            color._color[2] = 0;
            color._color[3] = -1;
            INextBot::DebugConColorMsg(pBot, NextBotDebugType::NEXTBOT_BEHAVIOR, &color, " CHANGE_TO ");
            vptr_INextBotEventResponder = result.m_action->_vptr_INextBotEventResponder;
            v15 = result.m_action;
          }
          v16 = (vptr_INextBotEventResponder[62])(v15);
          color._color[0] = -1;
          color._color[1] = -1;
          color._color[2] = -1;
          color._color[3] = -1;
          INextBot::DebugConColorMsg(pBot, NextBotDebugType::NEXTBOT_BEHAVIOR, &color, v16);
          if ( result.m_reason != 0 )
          {
            color._color[0] = -106;
            color._color[1] = -1;
            color._color[2] = -106;
            color._color[3] = -1;
            INextBot::DebugConColorMsg(pBot, NextBotDebugType::NEXTBOT_BEHAVIOR, &color, "  (%s)\n", result.m_reason);
          }
          else
          {
            color._color[0] = -1;
            color._color[1] = -1;
            color._color[2] = -1;
            color._color[3] = -1;
            INextBot::DebugConColorMsg(pBot, NextBotDebugType::NEXTBOT_BEHAVIOR, &color, "\n");
          }
        }
        if ( this->m_isStarted )
          Action<CDOTA_BaseNPC>::InvokeOnEnd(this, me, behavior, result.m_action);
        Action<CDOTA_BaseNPC>::InvokeOnStart(&resumeResult, result.m_action, me, behavior, this, this->m_buriedUnderMe);
        if ( this != result.m_action )
        {
          (*(this->_vptr_INextBotEventResponder + 2))(this);
          if ( (g_NextBotManager.m_debugType & 1) != 0 )
            goto LABEL_19;
          return Action<CDOTA_BaseNPC>::ApplyResult(m_action, me, behavior, resumeResult);
        }
LABEL_41:
        if ( (g_NextBotManager.m_debugType & 1) != 0 )
        {
LABEL_19:
          if ( NextBotManager::IsDebugFilterMatch(&g_NextBotManager, pBot)
            && (*(me->_vptr_INextBotEventResponder + 96))(pBot, 1) != 0 )
          {
            Action<CDOTA_BaseNPC>::PrintStateToConsole(result.m_action);
          }
        }
        return Action<CDOTA_BaseNPC>::ApplyResult(m_action, me, behavior, resumeResult);
      }
      DevMsg("Error: Attempted CHANGE_TO to a NULL Action\n");
      return this;
    default:
      return this;
  }
}


// Action<CSimpleBot>::ApplyResult  (line 1485, @0x0000000002f225c0, libserver.so)  // inlines: Color, GetBool, GetInt, GetName, InvokeOnEnd, IsDebugFilterMatch, IsDebugging, SetColor
// calls: CUtlSymbol::String, CGlobalVarsBase::curtime, INextBot::DebugConColorMsg, Action<CSimpleBot>::InvokeOnStart, Action<CSimpleBot>::InvokeOnResume, Action<CSimpleBot>::PrintStateToConsole, Action<CSimpleBot>::InvokeOnSuspend, NextBotManager::IsDebugFilterMatch, Action<CSimpleBot>::InvokeOnEnd, DevMsg(char const*,...), __stack_chk_fail
// callers: Action<CSimpleBot>::InvokeUpdate, Action<CSimpleBot>::InvokeOnStart, Action<CSimpleBot>::InvokeOnResume, Behavior<CSimpleBot>::Update
// strings: "%3.2f: %s:%s: ", " CHANGE_TO ", "  (%s)\n", " DONE, RESUME ", " caused ", " to SUSPEND_FOR " (9 total)
Action<CSimpleBot> *__fastcall Action<CSimpleBot>::ApplyResult(
        Action<CSimpleBot> *const this,
        CSimpleBot *me,
        Behavior<CSimpleBot> *behavior,
        ActionResult<CSimpleBot> result)
{
  INextBot *v7; // r15
  float v8; // xmm0_4
  const char *v9; // rax
  int (**vptr_INextBotEventResponder)(...); // rax
  Action<CSimpleBot> *m_action; // rdi
  const char *v12; // rax
  Action<CSimpleBot> *m_buriedUnderMe; // r15
  float v14; // xmm0_4
  const char *v15; // rax
  const char *v16; // rax
  Action<CSimpleBot> *i; // r10
  char v18; // al
  float v19; // xmm0_4
  const char *v20; // rax
  const char *v21; // rax
  const char *v22; // rax
  Action<CSimpleBot> *v23; // rax
  bool IsDebugFilterMatch; // al
  Action<CSimpleBot> *v25; // [rsp+20h] [rbp-90h]
  const char *v26; // [rsp+28h] [rbp-88h]
  const char *v27; // [rsp+28h] [rbp-88h]
  const char *v28; // [rsp+28h] [rbp-88h]
  Action<CSimpleBot> *v29; // [rsp+30h] [rbp-80h]
  Action<CSimpleBot> *v30; // [rsp+30h] [rbp-80h]
  Action<CSimpleBot> *v31; // [rsp+30h] [rbp-80h]
  Action<CSimpleBot> *topAction; // [rsp+38h] [rbp-78h]
  Action<CSimpleBot> *topActiona; // [rsp+38h] [rbp-78h]
  ActionResult<CSimpleBot> startResult; // [rsp+50h] [rbp-60h] BYREF
  Color color; // [rsp+70h] [rbp-40h] BYREF
  unsigned __int64 v37; // [rsp+78h] [rbp-38h]

  v37 = __readfsqword(0x28u);
  if ( result.m_type == ActionResultType::SUSPEND_FOR )
  {
    for ( i = this; i->m_coveringMe != 0; i = i->m_coveringMe )
      ;
    v7 = &me->INextBot;
    if ( (g_NextBotManager.m_debugType & 1) != 0
      && (g_NextBotManager.m_debugFilterList.m_Size == 0
       || (topActiona = i,
           IsDebugFilterMatch = NextBotManager::IsDebugFilterMatch(&g_NextBotManager, &me->INextBot),
           i = topActiona,
           IsDebugFilterMatch))
      && (topAction = i, v18 = (*(me->_vptr_INextBotEventResponder + 96))(&me->INextBot, 1), i = topAction, v18 != 0)
      || NextBotDebugHistory.m_pParent->m_Value.m_nValue != 0 )
    {
      v25 = i;
      v28 = CUtlSymbol::String(&behavior->m_name);
      v31 = (*(me->_vptr_INextBotEventResponder + 97))(&me->INextBot);
      v19 = CGlobalVarsBase::curtime(gpGlobals, 0);
      color._color[0] = -1;
      color._color[1] = -1;
      color._color[2] = -106;
      color._color[3] = -1;
      INextBot::DebugConColorMsg(
        &me->INextBot,
        NextBotDebugType::NEXTBOT_BEHAVIOR,
        &color,
        "%3.2f: %s:%s: ",
        v31,
        v28,
        v19);
      v20 = (*(this->_vptr_INextBotEventResponder + 62))(this);
      color._color[0] = -1;
      color._color[1] = -1;
      color._color[2] = -1;
      color._color[3] = -1;
      INextBot::DebugConColorMsg(&me->INextBot, NextBotDebugType::NEXTBOT_BEHAVIOR, &color, v20);
      color._color[0] = -1;
      color._color[1] = 0;
      color._color[2] = -1;
      color._color[3] = -1;
      INextBot::DebugConColorMsg(&me->INextBot, NextBotDebugType::NEXTBOT_BEHAVIOR, &color, " caused ");
      v21 = (*(v25->_vptr_INextBotEventResponder + 62))(v25);
      color._color[0] = -1;
      color._color[1] = -1;
      color._color[2] = -1;
      color._color[3] = -1;
      INextBot::DebugConColorMsg(&me->INextBot, NextBotDebugType::NEXTBOT_BEHAVIOR, &color, v21);
      color._color[0] = -1;
      color._color[1] = 0;
      color._color[2] = -1;
      color._color[3] = -1;
      INextBot::DebugConColorMsg(&me->INextBot, NextBotDebugType::NEXTBOT_BEHAVIOR, &color, " to SUSPEND_FOR ");
      v22 = (*(result.m_action->_vptr_INextBotEventResponder + 62))(result.m_action);
      color._color[0] = -1;
      color._color[1] = -1;
      color._color[2] = -1;
      color._color[3] = -1;
      INextBot::DebugConColorMsg(&me->INextBot, NextBotDebugType::NEXTBOT_BEHAVIOR, &color, v22);
      if ( result.m_reason != 0 )
      {
        color._color[0] = -106;
        color._color[1] = -1;
        color._color[2] = -106;
        color._color[3] = -1;
        INextBot::DebugConColorMsg(
          &me->INextBot,
          NextBotDebugType::NEXTBOT_BEHAVIOR,
          &color,
          "  (%s)\n",
          result.m_reason);
      }
      else
      {
        color._color[0] = -1;
        color._color[1] = -1;
        color._color[2] = -1;
        color._color[3] = -1;
        INextBot::DebugConColorMsg(&me->INextBot, NextBotDebugType::NEXTBOT_BEHAVIOR, &color, "\n");
      }
      i = v25;
    }
    v23 = Action<CSimpleBot>::InvokeOnSuspend(i, me, behavior, result.m_action);
    Action<CSimpleBot>::InvokeOnStart(&startResult, result.m_action, me, behavior, v23, v23);
LABEL_42:
    if ( (g_NextBotManager.m_debugType & 1) != 0
      && (g_NextBotManager.m_debugFilterList.m_Size == 0 || NextBotManager::IsDebugFilterMatch(&g_NextBotManager, v7))
      && (*(me->_vptr_INextBotEventResponder + 96))(v7, 1) != 0 )
    {
      Action<CSimpleBot>::PrintStateToConsole(result.m_action);
    }
    return Action<CSimpleBot>::ApplyResult(result.m_action, me, behavior, startResult);
  }
  if ( result.m_type != ActionResultType::DONE )
  {
    if ( result.m_type != ActionResultType::CHANGE_TO )
      return this;
    if ( result.m_action == 0 )
    {
      DevMsg("Error: Attempted CHANGE_TO to a NULL Action\n");
      return this;
    }
    v7 = &me->INextBot;
    if ( (g_NextBotManager.m_debugType & 1) != 0
      && (g_NextBotManager.m_debugFilterList.m_Size == 0
       || NextBotManager::IsDebugFilterMatch(&g_NextBotManager, &me->INextBot))
      && (*(me->_vptr_INextBotEventResponder + 96))(v7, 1) != 0
      || NextBotDebugHistory.m_pParent->m_Value.m_nValue != 0 )
    {
      v26 = CUtlSymbol::String(&behavior->m_name);
      v29 = (*(me->_vptr_INextBotEventResponder + 97))(v7);
      v8 = CGlobalVarsBase::curtime(gpGlobals, 0);
      color._color[0] = -1;
      color._color[1] = -1;
      color._color[2] = -106;
      color._color[3] = -1;
      INextBot::DebugConColorMsg(v7, NextBotDebugType::NEXTBOT_BEHAVIOR, &color, "%3.2f: %s:%s: ", v29, v26, v8);
      if ( this == result.m_action )
      {
        color._color[0] = -1;
        color._color[1] = 0;
        color._color[2] = 0;
        color._color[3] = -1;
        INextBot::DebugConColorMsg(v7, NextBotDebugType::NEXTBOT_BEHAVIOR, &color, "START ");
        vptr_INextBotEventResponder = this->_vptr_INextBotEventResponder;
        m_action = this;
      }
      else
      {
        v9 = (*(this->_vptr_INextBotEventResponder + 62))(this);
        color._color[0] = -1;
        color._color[1] = -1;
        color._color[2] = -1;
        color._color[3] = -1;
        INextBot::DebugConColorMsg(v7, NextBotDebugType::NEXTBOT_BEHAVIOR, &color, v9);
        color._color[0] = -1;
        color._color[1] = 0;
        color._color[2] = 0;
        color._color[3] = -1;
        INextBot::DebugConColorMsg(v7, NextBotDebugType::NEXTBOT_BEHAVIOR, &color, " CHANGE_TO ");
        vptr_INextBotEventResponder = result.m_action->_vptr_INextBotEventResponder;
        m_action = result.m_action;
      }
      v12 = (vptr_INextBotEventResponder[62])(m_action);
      color._color[0] = -1;
      color._color[1] = -1;
      color._color[2] = -1;
      color._color[3] = -1;
      INextBot::DebugConColorMsg(v7, NextBotDebugType::NEXTBOT_BEHAVIOR, &color, v12);
      if ( result.m_reason != 0 )
      {
        color._color[0] = -106;
        color._color[1] = -1;
        color._color[2] = -106;
        color._color[3] = -1;
        INextBot::DebugConColorMsg(v7, NextBotDebugType::NEXTBOT_BEHAVIOR, &color, "  (%s)\n", result.m_reason);
      }
      else
      {
        color._color[0] = -1;
        color._color[1] = -1;
        color._color[2] = -1;
        color._color[3] = -1;
        INextBot::DebugConColorMsg(v7, NextBotDebugType::NEXTBOT_BEHAVIOR, &color, "\n");
      }
    }
    if ( this->m_isStarted )
      Action<CSimpleBot>::InvokeOnEnd(this, me, behavior, result.m_action);
    Action<CSimpleBot>::InvokeOnStart(&startResult, result.m_action, me, behavior, this, this->m_buriedUnderMe);
    if ( this != result.m_action )
      (*(this->_vptr_INextBotEventResponder + 2))(this);
    goto LABEL_42;
  }
  m_buriedUnderMe = this->m_buriedUnderMe;
  if ( this->m_isStarted )
    Action<CSimpleBot>::InvokeOnEnd(this, me, behavior, this->m_buriedUnderMe);
  if ( (g_NextBotManager.m_debugType & 1) != 0
    && (g_NextBotManager.m_debugFilterList.m_Size == 0
     || NextBotManager::IsDebugFilterMatch(&g_NextBotManager, &me->INextBot))
    && (*(me->_vptr_INextBotEventResponder + 96))(&me->INextBot, 1) != 0
    || NextBotDebugHistory.m_pParent->m_Value.m_nValue != 0 )
  {
    v27 = CUtlSymbol::String(&behavior->m_name);
    v30 = (*(me->_vptr_INextBotEventResponder + 97))(&me->INextBot);
    v14 = CGlobalVarsBase::curtime(gpGlobals, 0);
    color._color[0] = -1;
    color._color[1] = -1;
    color._color[2] = -106;
    color._color[3] = -1;
    INextBot::DebugConColorMsg(
      &me->INextBot,
      NextBotDebugType::NEXTBOT_BEHAVIOR,
      &color,
      "%3.2f: %s:%s: ",
      v30,
      v27,
      v14);
    v15 = (*(this->_vptr_INextBotEventResponder + 62))(this);
    color._color[0] = -1;
    color._color[1] = -1;
    color._color[2] = -1;
    color._color[3] = -1;
    INextBot::DebugConColorMsg(&me->INextBot, NextBotDebugType::NEXTBOT_BEHAVIOR, &color, v15);
    color._color[0] = 0;
    color._color[1] = -1;
    color._color[2] = 0;
    color._color[3] = -1;
    if ( m_buriedUnderMe != 0 )
    {
      INextBot::DebugConColorMsg(&me->INextBot, NextBotDebugType::NEXTBOT_BEHAVIOR, &color, " DONE, RESUME ");
      v16 = (*(m_buriedUnderMe->_vptr_INextBotEventResponder + 62))(m_buriedUnderMe);
      color._color[0] = -1;
      color._color[1] = -1;
      color._color[2] = -1;
      color._color[3] = -1;
      INextBot::DebugConColorMsg(&me->INextBot, NextBotDebugType::NEXTBOT_BEHAVIOR, &color, v16);
    }
    else
    {
      INextBot::DebugConColorMsg(&me->INextBot, NextBotDebugType::NEXTBOT_BEHAVIOR, &color, " DONE.");
    }
    if ( result.m_reason != 0 )
    {
      color._color[0] = -106;
      color._color[1] = -1;
      color._color[2] = -106;
      color._color[3] = -1;
      INextBot::DebugConColorMsg(&me->INextBot, NextBotDebugType::NEXTBOT_BEHAVIOR, &color, "  (%s)\n", result.m_reason);
    }
    else
    {
      color._color[0] = -1;
      color._color[1] = -1;
      color._color[2] = -1;
      color._color[3] = -1;
      INextBot::DebugConColorMsg(&me->INextBot, NextBotDebugType::NEXTBOT_BEHAVIOR, &color, "\n");
    }
  }
  if ( m_buriedUnderMe != 0 )
  {
    Action<CSimpleBot>::InvokeOnResume(&startResult, m_buriedUnderMe, me, behavior, this);
    if ( (g_NextBotManager.m_debugType & 1) != 0
      && (g_NextBotManager.m_debugFilterList.m_Size == 0
       || NextBotManager::IsDebugFilterMatch(&g_NextBotManager, &me->INextBot))
      && (*(me->_vptr_INextBotEventResponder + 96))(&me->INextBot, 1) != 0 )
    {
      Action<CSimpleBot>::PrintStateToConsole(m_buriedUnderMe);
    }
    (*(this->_vptr_INextBotEventResponder + 2))(this);
    return Action<CSimpleBot>::ApplyResult(m_buriedUnderMe, me, behavior, startResult);
  }
  else
  {
    (*(this->_vptr_INextBotEventResponder + 2))(this);
    return 0;
  }
}


// Action<CDOTA_BaseNPC>::FirstContainedResponder  (line 1677, @0x0000000002882910, libserver.so)
INextBotEventResponder *__fastcall Action<CDOTA_BaseNPC>::FirstContainedResponder(
        const Action<CDOTA_BaseNPC> *const this)
{
  return this->m_child;
}


// Action<CSimpleBot>::FirstContainedResponder  (line 1677, @0x0000000002f1e2b0, libserver.so)
INextBotEventResponder *__fastcall Action<CSimpleBot>::FirstContainedResponder(const Action<CSimpleBot> *const this)
{
  return this->m_child;
}


// Action<CDOTA_BaseNPC>::NextContainedResponder  (line 1683, @0x0000000002882920, libserver.so)
INextBotEventResponder *__fastcall Action<CDOTA_BaseNPC>::NextContainedResponder(
        const Action<CDOTA_BaseNPC> *const this,
        INextBotEventResponder *current)
{
  return 0;
}


// Action<CSimpleBot>::NextContainedResponder  (line 1683, @0x0000000002f1e2c0, libserver.so)
INextBotEventResponder *__fastcall Action<CSimpleBot>::NextContainedResponder(
        const Action<CSimpleBot> *const this,
        INextBotEventResponder *current)
{
  return 0;
}


// Action<CDOTA_BaseNPC>::DebugString  (line 1694, @0x0000000002579a50, libserver.so)
// calls: Action<CDOTA_BaseNPC>::BuildDecoratedName
// callers: Action<CDOTA_BaseNPC>::PrintStateToConsole, Behavior<CDOTA_BaseNPC>::Update
// globals: Action<CDOTA_BaseNPC>::DebugString(void)::str
const char *__fastcall Action<CDOTA_BaseNPC>::DebugString(const Action<CDOTA_BaseNPC> *const this)
{
  const Action<CDOTA_BaseNPC> *v1; // rdx

  v1 = this;
  Action<CDOTA_BaseNPC>::DebugString(void)const::str[0] = 0;
  while ( v1->m_parent != 0 )
    v1 = v1->m_parent;
  return Action<CDOTA_BaseNPC>::BuildDecoratedName(this, Action<CDOTA_BaseNPC>::DebugString(void)const::str, v1);
}


// Action<CSimpleBot>::DebugString  (line 1694, @0x0000000002f22200, libserver.so)
// calls: Action<CSimpleBot>::BuildDecoratedName
// callers: Action<CSimpleBot>::PrintStateToConsole, Behavior<CSimpleBot>::Update
// globals: Action<CSimpleBot>::DebugString(void)::str
const char *__fastcall Action<CSimpleBot>::DebugString(const Action<CSimpleBot> *const this)
{
  const Action<CSimpleBot> *v1; // rdx

  v1 = this;
  Action<CSimpleBot>::DebugString(void)const::str[0] = 0;
  while ( v1->m_parent != 0 )
    v1 = v1->m_parent;
  return Action<CSimpleBot>::BuildDecoratedName(this, Action<CSimpleBot>::DebugString(void)const::str, v1);
}


// Action<CDOTA_BaseNPC>::BuildDecoratedName  (line 1713, @0x0000000002579990, libserver.so)  // inlines: V_strcat, V_strncat<int>
// calls: _V_strncat
// callers: Action<CDOTA_BaseNPC>::DebugString
// strings: "<<"
char *__fastcall Action<CDOTA_BaseNPC>::BuildDecoratedName(
        const Action<CDOTA_BaseNPC> *const this,
        char *name,
        const Action<CDOTA_BaseNPC> *action)
{
  __int64 v6; // rax
  Action<CDOTA_BaseNPC> *m_child; // r13
  Action<CDOTA_BaseNPC> *m_buriedUnderMe; // r12

  v6 = (*(action->_vptr_INextBotEventResponder + 62))(action);
  _V_strncat(name, v6, 256, 0xFFFFFFFFLL);
  m_child = action->m_child;
  if ( m_child != 0 )
  {
    _V_strncat(name, "( ", 256, 0xFFFFFFFFLL);
    Action<CDOTA_BaseNPC>::BuildDecoratedName(this, name, m_child);
    _V_strncat(name, " )", 256, 0xFFFFFFFFLL);
  }
  m_buriedUnderMe = action->m_buriedUnderMe;
  if ( m_buriedUnderMe != 0 )
  {
    _V_strncat(name, "<<", 256, 0xFFFFFFFFLL);
    Action<CDOTA_BaseNPC>::BuildDecoratedName(this, name, m_buriedUnderMe);
  }
  return name;
}


// Action<CSimpleBot>::BuildDecoratedName  (line 1713, @0x0000000002f22140, libserver.so)  // inlines: V_strcat, V_strncat<int>
// calls: _V_strncat
// callers: Action<CSimpleBot>::DebugString
// strings: "<<"
char *__fastcall Action<CSimpleBot>::BuildDecoratedName(
        const Action<CSimpleBot> *const this,
        char *name,
        const Action<CSimpleBot> *action)
{
  __int64 v6; // rax
  Action<CSimpleBot> *m_child; // r13
  Action<CSimpleBot> *m_buriedUnderMe; // r12

  v6 = (*(action->_vptr_INextBotEventResponder + 62))(action);
  _V_strncat(name, v6, 256, 0xFFFFFFFFLL);
  m_child = action->m_child;
  if ( m_child != 0 )
  {
    _V_strncat(name, "( ", 256, 0xFFFFFFFFLL);
    Action<CSimpleBot>::BuildDecoratedName(this, name, m_child);
    _V_strncat(name, " )", 256, 0xFFFFFFFFLL);
  }
  m_buriedUnderMe = action->m_buriedUnderMe;
  if ( m_buriedUnderMe != 0 )
  {
    _V_strncat(name, "<<", 256, 0xFFFFFFFFLL);
    Action<CSimpleBot>::BuildDecoratedName(this, name, m_buriedUnderMe);
  }
  return name;
}


// Action<CDOTA_BaseNPC>::GetFullName  (line 1746, @0x0000000002883c20, libserver.so)  // inlines: V_strcat, V_strncat<int>
// calls: _V_strncat
// globals: Action<CDOTA_BaseNPC>::GetFullName(void)::str
const char *__fastcall Action<CDOTA_BaseNPC>::GetFullName(const Action<CDOTA_BaseNPC> *const this)
{
  const Action<CDOTA_BaseNPC> *v1; // r12
  __int64 v2; // rbx
  int v3; // r13d
  const char *v4; // rax
  bool v5; // cl
  const char *nameStack[64]; // [rsp+0h] [rbp-220h]

  Action<CDOTA_BaseNPC>::GetFullName(void)const::str[0] = 0;
  if ( this != 0 )
  {
    v1 = this;
    v2 = 0;
    do
    {
      v3 = v2;
      v4 = (*(v1->_vptr_INextBotEventResponder + 62))(v1);
      v1 = v1->m_parent;
      nameStack[v2] = v4;
      v5 = v2++ + 1 <= 63;
    }
    while ( v1 != 0 && v5 );
    if ( v3 != 0 )
    {
      while ( 1 )
      {
        _V_strncat(Action<CDOTA_BaseNPC>::GetFullName(void)const::str, v4, 256, 0xFFFFFFFFLL);
        _V_strncat(Action<CDOTA_BaseNPC>::GetFullName(void)const::str, "/", 256, 0xFFFFFFFFLL);
        if ( --v3 == 0 )
          break;
        v4 = nameStack[v3];
      }
    }
  }
  _V_strncat(Action<CDOTA_BaseNPC>::GetFullName(void)const::str, nameStack[0], 256, 0xFFFFFFFFLL);
  return Action<CDOTA_BaseNPC>::GetFullName(void)const::str;
}


// Action<CSimpleBot>::GetFullName  (line 1746, @0x0000000002f1f6e0, libserver.so)  // inlines: V_strcat, V_strncat<int>
// calls: _V_strncat
// globals: Action<CSimpleBot>::GetFullName(void)::str
const char *__fastcall Action<CSimpleBot>::GetFullName(const Action<CSimpleBot> *const this)
{
  const Action<CSimpleBot> *v1; // r12
  __int64 v2; // rbx
  int v3; // r13d
  const char *v4; // rax
  bool v5; // cl
  const char *nameStack[64]; // [rsp+0h] [rbp-220h]

  Action<CSimpleBot>::GetFullName(void)const::str[0] = 0;
  if ( this != 0 )
  {
    v1 = this;
    v2 = 0;
    do
    {
      v3 = v2;
      v4 = (*(v1->_vptr_INextBotEventResponder + 62))(v1);
      v1 = v1->m_parent;
      nameStack[v2] = v4;
      v5 = v2++ + 1 <= 63;
    }
    while ( v1 != 0 && v5 );
    if ( v3 != 0 )
    {
      while ( 1 )
      {
        _V_strncat(Action<CSimpleBot>::GetFullName(void)const::str, v4, 256, 0xFFFFFFFFLL);
        _V_strncat(Action<CSimpleBot>::GetFullName(void)const::str, "/", 256, 0xFFFFFFFFLL);
        if ( --v3 == 0 )
          break;
        v4 = nameStack[v3];
      }
    }
  }
  _V_strncat(Action<CSimpleBot>::GetFullName(void)const::str, nameStack[0], 256, 0xFFFFFFFFLL);
  return Action<CSimpleBot>::GetFullName(void)const::str;
}


// Action<CDOTA_BaseNPC>::PrintStateToConsole  (line 1788, @0x0000000002579a80, libserver.so)  // inlines: Color, SetColor
// calls: Action<CDOTA_BaseNPC>::DebugString, ConColorMsg(Color const&,char const*,...), __stack_chk_fail
// callers: Action<CDOTA_BaseNPC>::ApplyResult
void __fastcall Action<CDOTA_BaseNPC>::PrintStateToConsole(const Action<CDOTA_BaseNPC> *const this)
{
  const char *v1; // rbx
  Color *v2; // rax
  char v3; // dl
  char *v4; // rax
  int v5; // r13d
  int v6; // r15d
  __int64 v7; // r10
  const char *v8; // rax
  char *v9; // rsi
  char v10; // cl
  const Color *v11; // rbx
  __int64 v12; // [rsp+0h] [rbp-180h]
  Color colorTable[6]; // [rsp+10h] [rbp-170h] BYREF
  __int64 v14; // [rsp+28h] [rbp-158h] BYREF
  Color color; // [rsp+30h] [rbp-150h] BYREF
  char buffer[264]; // [rsp+40h] [rbp-140h] BYREF
  unsigned __int64 v17; // [rsp+148h] [rbp-38h]

  v17 = __readfsqword(0x28u);
  v1 = Action<CDOTA_BaseNPC>::DebugString(this);
  v2 = colorTable;
  do
    *v2++ = 0;
  while ( v2 != &v14 );
  colorTable[0]._color[0] = -1;
  colorTable[0]._color[1] = -106;
  colorTable[0]._color[2] = -106;
  colorTable[0]._color[3] = -1;
  colorTable[1]._color[0] = -106;
  colorTable[1]._color[1] = -1;
  colorTable[1]._color[2] = -106;
  colorTable[1]._color[3] = -1;
  colorTable[2]._color[0] = -106;
  colorTable[2]._color[1] = -106;
  colorTable[2]._color[2] = -1;
  colorTable[2]._color[3] = -1;
  colorTable[3]._color[0] = -1;
  colorTable[3]._color[1] = -1;
  colorTable[3]._color[2] = -106;
  colorTable[3]._color[3] = -1;
  colorTable[4]._color[0] = 50;
  colorTable[4]._color[1] = -1;
  colorTable[4]._color[2] = -1;
  colorTable[4]._color[3] = -1;
  colorTable[5]._color[0] = -1;
  colorTable[5]._color[1] = -106;
  colorTable[5]._color[2] = -1;
  colorTable[5]._color[3] = -1;
  v3 = *v1;
  if ( *v1 != 0 )
  {
    v4 = buffer;
    v5 = 0;
    v6 = 0;
    v7 = 0;
    while ( 1 )
    {
      *v4 = v3;
      v9 = v4 + 1;
      v10 = *v1;
      if ( *v1 == 40 )
      {
        v4[1] = 0;
        color = colorTable[v7];
        if ( v5 != 0 )
        {
          color._color[3] = -1;
          ++v5;
          color._color[2] = (color._color[2] * 0.5);
          color._color[1] = (color._color[1] * 0.5);
          color._color[0] = (color._color[0] * 0.5);
        }
        ConColorMsg(&color, "%s", buffer);
        v9 = buffer;
        v3 = v1[1];
        v8 = v1 + 1;
        v6 = (v6 + 1) % 6;
        v7 = v6;
        if ( v3 == 0 )
          goto LABEL_13;
      }
      else
      {
        if ( v10 == 41 )
        {
          *v4 = 0;
          color = colorTable[v7];
          if ( v5 != 0 )
          {
            color._color[3] = -1;
            --v5;
            color._color[2] = (color._color[2] * 0.5);
            color._color[1] = (color._color[1] * 0.5);
            color._color[0] = (color._color[0] * 0.5);
          }
          --v6;
          ConColorMsg(&color, "%s", buffer);
          if ( v6 == -1 )
            v6 = 5;
          buffer[0] = 41;
          v9 = &buffer[1];
          v7 = v6;
        }
        else if ( v10 == 60 && v5 == 0 )
        {
          v4[1] = 60;
          v4[2] = 0;
          ++v1;
          v12 = v7;
          v5 = 1;
          ConColorMsg(&colorTable[v7], "%s", buffer);
          v9 = buffer;
          v7 = v12;
        }
        v3 = v1[1];
        v8 = v1 + 1;
        if ( v3 == 0 )
          goto LABEL_13;
      }
      v1 = v8;
      v4 = v9;
    }
  }
  v9 = buffer;
  v7 = 0;
LABEL_13:
  *v9 = 0;
  v11 = &colorTable[v7];
  ConColorMsg(v11, "%s", buffer);
  ConColorMsg(v11, "\n\n");
}


// Action<CSimpleBot>::PrintStateToConsole  (line 1788, @0x0000000002f22230, libserver.so)  // inlines: Color, SetColor
// calls: Action<CSimpleBot>::DebugString, ConColorMsg(Color const&,char const*,...), __stack_chk_fail
// callers: Action<CSimpleBot>::ApplyResult
void __fastcall Action<CSimpleBot>::PrintStateToConsole(const Action<CSimpleBot> *const this)
{
  const char *v1; // rbx
  Color *v2; // rax
  char v3; // dl
  char *v4; // rax
  int v5; // r13d
  int v6; // r15d
  __int64 v7; // r10
  const char *v8; // rax
  char *v9; // rsi
  char v10; // cl
  const Color *v11; // rbx
  __int64 v12; // [rsp+0h] [rbp-180h]
  Color colorTable[6]; // [rsp+10h] [rbp-170h] BYREF
  __int64 v14; // [rsp+28h] [rbp-158h] BYREF
  Color color; // [rsp+30h] [rbp-150h] BYREF
  char buffer[264]; // [rsp+40h] [rbp-140h] BYREF
  unsigned __int64 v17; // [rsp+148h] [rbp-38h]

  v17 = __readfsqword(0x28u);
  v1 = Action<CSimpleBot>::DebugString(this);
  v2 = colorTable;
  do
    *v2++ = 0;
  while ( v2 != &v14 );
  colorTable[0]._color[0] = -1;
  colorTable[0]._color[1] = -106;
  colorTable[0]._color[2] = -106;
  colorTable[0]._color[3] = -1;
  colorTable[1]._color[0] = -106;
  colorTable[1]._color[1] = -1;
  colorTable[1]._color[2] = -106;
  colorTable[1]._color[3] = -1;
  colorTable[2]._color[0] = -106;
  colorTable[2]._color[1] = -106;
  colorTable[2]._color[2] = -1;
  colorTable[2]._color[3] = -1;
  colorTable[3]._color[0] = -1;
  colorTable[3]._color[1] = -1;
  colorTable[3]._color[2] = -106;
  colorTable[3]._color[3] = -1;
  colorTable[4]._color[0] = 50;
  colorTable[4]._color[1] = -1;
  colorTable[4]._color[2] = -1;
  colorTable[4]._color[3] = -1;
  colorTable[5]._color[0] = -1;
  colorTable[5]._color[1] = -106;
  colorTable[5]._color[2] = -1;
  colorTable[5]._color[3] = -1;
  v3 = *v1;
  if ( *v1 != 0 )
  {
    v4 = buffer;
    v5 = 0;
    v6 = 0;
    v7 = 0;
    while ( 1 )
    {
      *v4 = v3;
      v9 = v4 + 1;
      v10 = *v1;
      if ( *v1 == 40 )
      {
        v4[1] = 0;
        color = colorTable[v7];
        if ( v5 != 0 )
        {
          color._color[3] = -1;
          ++v5;
          color._color[2] = (color._color[2] * 0.5);
          color._color[1] = (color._color[1] * 0.5);
          color._color[0] = (color._color[0] * 0.5);
        }
        ConColorMsg(&color, "%s", buffer);
        v9 = buffer;
        v3 = v1[1];
        v8 = v1 + 1;
        v6 = (v6 + 1) % 6;
        v7 = v6;
        if ( v3 == 0 )
          goto LABEL_13;
      }
      else
      {
        if ( v10 == 41 )
        {
          *v4 = 0;
          color = colorTable[v7];
          if ( v5 != 0 )
          {
            color._color[3] = -1;
            --v5;
            color._color[2] = (color._color[2] * 0.5);
            color._color[1] = (color._color[1] * 0.5);
            color._color[0] = (color._color[0] * 0.5);
          }
          --v6;
          ConColorMsg(&color, "%s", buffer);
          if ( v6 == -1 )
            v6 = 5;
          buffer[0] = 41;
          v9 = &buffer[1];
          v7 = v6;
        }
        else if ( v10 == 60 && v5 == 0 )
        {
          v4[1] = 60;
          v4[2] = 0;
          ++v1;
          v12 = v7;
          v5 = 1;
          ConColorMsg(&colorTable[v7], "%s", buffer);
          v9 = buffer;
          v7 = v12;
        }
        v3 = v1[1];
        v8 = v1 + 1;
        if ( v3 == 0 )
          goto LABEL_13;
      }
      v1 = v8;
      v4 = v9;
    }
  }
  v9 = buffer;
  v7 = 0;
LABEL_13:
  *v9 = 0;
  v11 = &colorTable[v7];
  ConColorMsg(v11, "%s", buffer);
  ConColorMsg(v11, "\n\n");
}


