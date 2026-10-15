
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// IContextualQuery::Schema_DynamicBinding  (line 39, @0x0000000001b3a820, libserver.so)
// calls: IContextualQuery::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall IContextualQuery::Schema_DynamicBinding(const IContextualQuery *const this)
{
  IContextualQuery::Schema_VerifyBindingIsRegistered();
  return IContextualQuery::s_pSchemaBinding;
}


// IContextualQuery::~IContextualQuery  (line 42, @0x0000000001b3a040, libserver.so)
void __fastcall IContextualQuery::~IContextualQuery(IContextualQuery *const this)
{
  this->_vptr_IContextualQuery = &off_3F7A990;
}


// IContextualQuery::~IContextualQuery  (line 42, @0x0000000001b3a3a0, libserver.so)  // inlines: ~IContextualQuery
// calls: operator delete
void __fastcall IContextualQuery::~IContextualQuery(IContextualQuery *const this)
{
  this->_vptr_IContextualQuery = &off_3F7A990;
  operator delete(this);
}


// IContextualQuery::ShouldPickUp  (line 65, @0x0000000001b3a050, libserver.so)
QueryResultType __fastcall IContextualQuery::ShouldPickUp(
        const IContextualQuery *const this,
        const INextBot *me,
        CBaseEntity *item)
{
  return QueryResultType::ANSWER_UNDEFINED;
}


// IContextualQuery::ShouldHurry  (line 70, @0x0000000001b3a060, libserver.so)
QueryResultType __fastcall IContextualQuery::ShouldHurry(const IContextualQuery *const this, const INextBot *me)
{
  return QueryResultType::ANSWER_UNDEFINED;
}


// IContextualQuery::ShouldRetreat  (line 75, @0x0000000001b3a070, libserver.so)
QueryResultType __fastcall IContextualQuery::ShouldRetreat(const IContextualQuery *const this, const INextBot *me)
{
  return QueryResultType::ANSWER_UNDEFINED;
}


// IContextualQuery::ShouldAttack  (line 80, @0x0000000001b3a080, libserver.so)
QueryResultType __fastcall IContextualQuery::ShouldAttack(
        const IContextualQuery *const this,
        const INextBot *me,
        const CKnownEntity *them)
{
  return QueryResultType::ANSWER_UNDEFINED;
}


// IContextualQuery::IsHindrance  (line 85, @0x0000000001b3a090, libserver.so)
QueryResultType __fastcall IContextualQuery::IsHindrance(
        const IContextualQuery *const this,
        const INextBot *me,
        CBaseEntity *blocker)
{
  return QueryResultType::ANSWER_UNDEFINED;
}


// IContextualQuery::SelectTargetPoint  (line 90, @0x0000000001b3a0a0, libserver.so)
Vector __fastcall IContextualQuery::SelectTargetPoint(
        const IContextualQuery *const this,
        const INextBot *me,
        const CBaseCombatCharacter *subject)
{
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  *&result.x = *&vec3_origin.x;
  result.z = vec3_origin.z;
  return result;
}


// IContextualQuery::IsPositionAllowed  (line 95, @0x0000000001b3a0c0, libserver.so)
QueryResultType __fastcall IContextualQuery::IsPositionAllowed(
        const IContextualQuery *const this,
        const INextBot *me,
        const Vector *const pos)
{
  return QueryResultType::ANSWER_UNDEFINED;
}


// IContextualQuery::SelectMoreDangerousThreat  (line 100, @0x0000000001b3a0d0, libserver.so)
const CKnownEntity *__fastcall IContextualQuery::SelectMoreDangerousThreat(
        const IContextualQuery *const this,
        const INextBot *me,
        const CBaseCombatCharacter *subject,
        const CKnownEntity *threat1,
        const CKnownEntity *threat2)
{
  return 0;
}


