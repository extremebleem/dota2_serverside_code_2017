
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// IIntention::Schema_DynamicBinding  (line 79, @0x0000000001b3a840, libserver.so)
// calls: IIntention::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall IIntention::Schema_DynamicBinding(const IIntention *const this)
{
  IIntention::Schema_VerifyBindingIsRegistered();
  return IIntention::s_pSchemaBinding;
}


// IIntention::~IIntention  (line 83, @0x0000000001b3a0e0, libserver.so)  // inlines: ~IContextualQuery, ~INextBotComponent, ~INextBotEventResponder
void __fastcall IIntention::~IIntention(IIntention *const this)
{
  this->_vptr_IContextualQuery = &off_3F7A990;
  this->_vptr_INextBotEventResponder = &off_3F7A570;
}


// IIntention::~IIntention  (line 83, @0x0000000001b3a3c0, libserver.so)  // inlines: ~IContextualQuery, ~IIntention, ~INextBotComponent, ~INextBotEventResponder
// calls: operator delete
void __fastcall IIntention::~IIntention(IIntention *const this)
{
  this->_vptr_IContextualQuery = &off_3F7A990;
  this->_vptr_INextBotEventResponder = &off_3F7A570;
  operator delete(this);
}


// IIntention::Reset  (line 88, @0x0000000001b3a110, libserver.so)  // inlines: Reset
void __fastcall IIntention::Reset(IIntention *const this)
{
  this->m_lastUpdateTime = 0.0;
  this->m_curInterval = gpGlobals->interval_per_tick;
}


// IIntention::Update  (line 89, @0x0000000001b3a140, libserver.so)
void __fastcall IIntention::Update(IIntention *const this)
{
  ;
}


// IIntention::GetName  (line 90, @0x0000000001b3a150, libserver.so)
// strings: "IIntention"
const char *__fastcall IIntention::GetName(IIntention *const this)
{
  return "IIntention";
}


// IIntention::ShouldPickUp  (line 173, @0x0000000001b3a870, libserver.so)
// calls: __dynamic_cast
// globals: `typeinfo for'IContextualQuery, `typeinfo for'INextBotEventResponder
QueryResultType __fastcall IIntention::ShouldPickUp(
        const IIntention *const this,
        const INextBot *me,
        CBaseEntity *item)
{
  const void *v6; // rbx
  void *v7; // rax
  QueryResultType result; // eax

  v6 = (*(this->_vptr_INextBotEventResponder + 3))(this);
  if ( v6 == 0 )
    return QueryResultType::ANSWER_UNDEFINED;
  while ( 1 )
  {
    v7 = __dynamic_cast(v6, &`typeinfo for'INextBotEventResponder, &`typeinfo for'IContextualQuery, -2);
    if ( v7 != 0 )
    {
      result = (*(*v7 + 24LL))(v7, me, item);
      if ( result != QueryResultType::ANSWER_UNDEFINED )
        break;
    }
    v6 = (*(this->_vptr_INextBotEventResponder + 4))(this, v6);
    if ( v6 == 0 )
      return QueryResultType::ANSWER_UNDEFINED;
  }
  return result;
}


// IIntention::ShouldHurry  (line 193, @0x0000000001b3a910, libserver.so)
// calls: __dynamic_cast
// globals: `typeinfo for'IContextualQuery, `typeinfo for'INextBotEventResponder
QueryResultType __fastcall IIntention::ShouldHurry(const IIntention *const this, const INextBot *me)
{
  const void *v4; // rbx
  void *v5; // rax
  QueryResultType result; // eax

  v4 = (*(this->_vptr_INextBotEventResponder + 3))(this);
  if ( v4 == 0 )
    return QueryResultType::ANSWER_UNDEFINED;
  while ( 1 )
  {
    v5 = __dynamic_cast(v4, &`typeinfo for'INextBotEventResponder, &`typeinfo for'IContextualQuery, -2);
    if ( v5 != 0 )
    {
      result = (*(*v5 + 32LL))(v5, me);
      if ( result != QueryResultType::ANSWER_UNDEFINED )
        break;
    }
    v4 = (*(this->_vptr_INextBotEventResponder + 4))(this, v4);
    if ( v4 == 0 )
      return QueryResultType::ANSWER_UNDEFINED;
  }
  return result;
}


// IIntention::ShouldRetreat  (line 213, @0x0000000001b3a9b0, libserver.so)
// calls: __dynamic_cast
// globals: `typeinfo for'IContextualQuery, `typeinfo for'INextBotEventResponder
QueryResultType __fastcall IIntention::ShouldRetreat(const IIntention *const this, const INextBot *me)
{
  const void *v4; // rbx
  void *v5; // rax
  QueryResultType result; // eax

  v4 = (*(this->_vptr_INextBotEventResponder + 3))(this);
  if ( v4 == 0 )
    return QueryResultType::ANSWER_UNDEFINED;
  while ( 1 )
  {
    v5 = __dynamic_cast(v4, &`typeinfo for'INextBotEventResponder, &`typeinfo for'IContextualQuery, -2);
    if ( v5 != 0 )
    {
      result = (*(*v5 + 40LL))(v5, me);
      if ( result != QueryResultType::ANSWER_UNDEFINED )
        break;
    }
    v4 = (*(this->_vptr_INextBotEventResponder + 4))(this, v4);
    if ( v4 == 0 )
      return QueryResultType::ANSWER_UNDEFINED;
  }
  return result;
}


// IIntention::ShouldAttack  (line 233, @0x0000000001b3aa50, libserver.so)
// calls: __dynamic_cast
// globals: `typeinfo for'IContextualQuery, `typeinfo for'INextBotEventResponder
QueryResultType __fastcall IIntention::ShouldAttack(
        const IIntention *const this,
        const INextBot *me,
        const CKnownEntity *them)
{
  const void *v6; // rbx
  void *v7; // rax
  QueryResultType result; // eax

  v6 = (*(this->_vptr_INextBotEventResponder + 3))(this);
  if ( v6 == 0 )
    return QueryResultType::ANSWER_UNDEFINED;
  while ( 1 )
  {
    v7 = __dynamic_cast(v6, &`typeinfo for'INextBotEventResponder, &`typeinfo for'IContextualQuery, -2);
    if ( v7 != 0 )
    {
      result = (*(*v7 + 48LL))(v7, me, them);
      if ( result != QueryResultType::ANSWER_UNDEFINED )
        break;
    }
    v6 = (*(this->_vptr_INextBotEventResponder + 4))(this, v6);
    if ( v6 == 0 )
      return QueryResultType::ANSWER_UNDEFINED;
  }
  return result;
}


// IIntention::IsHindrance  (line 253, @0x0000000001b3aaf0, libserver.so)
// calls: __dynamic_cast
// globals: `typeinfo for'IContextualQuery, `typeinfo for'INextBotEventResponder
QueryResultType __fastcall IIntention::IsHindrance(
        const IIntention *const this,
        const INextBot *me,
        CBaseEntity *blocker)
{
  const void *v6; // rbx
  void *v7; // rax
  QueryResultType result; // eax

  v6 = (*(this->_vptr_INextBotEventResponder + 3))(this);
  if ( v6 == 0 )
    return QueryResultType::ANSWER_UNDEFINED;
  while ( 1 )
  {
    v7 = __dynamic_cast(v6, &`typeinfo for'INextBotEventResponder, &`typeinfo for'IContextualQuery, -2);
    if ( v7 != 0 )
    {
      result = (*(*v7 + 56LL))(v7, me, blocker);
      if ( result != QueryResultType::ANSWER_UNDEFINED )
        break;
    }
    v6 = (*(this->_vptr_INextBotEventResponder + 4))(this, v6);
    if ( v6 == 0 )
      return QueryResultType::ANSWER_UNDEFINED;
  }
  return result;
}


// IIntention::IsPositionAllowed  (line 273, @0x0000000001b3ab90, libserver.so)
// calls: __dynamic_cast
// globals: `typeinfo for'IContextualQuery, `typeinfo for'INextBotEventResponder
QueryResultType __fastcall IIntention::IsPositionAllowed(
        const IIntention *const this,
        const INextBot *me,
        const Vector *const pos)
{
  const void *v6; // rbx
  void *v7; // rax
  QueryResultType result; // eax

  v6 = (*(this->_vptr_INextBotEventResponder + 3))(this);
  if ( v6 == 0 )
    return QueryResultType::ANSWER_UNDEFINED;
  while ( 1 )
  {
    v7 = __dynamic_cast(v6, &`typeinfo for'INextBotEventResponder, &`typeinfo for'IContextualQuery, -2);
    if ( v7 != 0 )
    {
      result = (*(*v7 + 72LL))(v7, me, pos);
      if ( result != QueryResultType::ANSWER_UNDEFINED )
        break;
    }
    v6 = (*(this->_vptr_INextBotEventResponder + 4))(this, v6);
    if ( v6 == 0 )
      return QueryResultType::ANSWER_UNDEFINED;
  }
  return result;
}


