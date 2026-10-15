
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// NextBotTraceFilterIgnoreActors::~NextBotTraceFilterIgnoreActors  (line 33, @0x0000000002f1e250, libserver.so)  // inlines: ~CTraceFilter, ~CTraceFilterSimple
void __fastcall NextBotTraceFilterIgnoreActors::~NextBotTraceFilterIgnoreActors(
        NextBotTraceFilterIgnoreActors *const this)
{
  this->_vptr_CTraceFilter = off_3FE6970;
}


// NextBotTraceFilterIgnoreActors::~NextBotTraceFilterIgnoreActors  (line 33, @0x0000000002f1f420, libserver.so)  // inlines: ~CTraceFilter, ~CTraceFilterSimple, ~NextBotTraceFilterIgnoreActors
// calls: operator delete
void __fastcall NextBotTraceFilterIgnoreActors::~NextBotTraceFilterIgnoreActors(
        NextBotTraceFilterIgnoreActors *const this)
{
  this->_vptr_CTraceFilter = off_3FE6970;
  operator delete(this);
}


// NextBotVisionTraceFilter::~NextBotVisionTraceFilter  (line 47, @0x0000000002f36710, libserver.so)  // inlines: ~CTraceFilter, ~CTraceFilterSimple
void __fastcall NextBotVisionTraceFilter::~NextBotVisionTraceFilter(NextBotVisionTraceFilter *const this)
{
  this->_vptr_CTraceFilter = off_3FE6970;
}


// NextBotVisionTraceFilter::~NextBotVisionTraceFilter  (line 47, @0x0000000002f36ae0, libserver.so)  // inlines: ~CTraceFilter, ~CTraceFilterSimple, ~NextBotVisionTraceFilter
// calls: operator delete
void __fastcall NextBotVisionTraceFilter::~NextBotVisionTraceFilter(NextBotVisionTraceFilter *const this)
{
  this->_vptr_CTraceFilter = off_3FE6970;
  operator delete(this);
}


// NextBotTraceFilterOnlyActors::~NextBotTraceFilterOnlyActors  (line 132, @0x0000000002f40da0, libserver.so)  // inlines: ~CTraceFilter, ~CTraceFilterSimple
void __fastcall NextBotTraceFilterOnlyActors::~NextBotTraceFilterOnlyActors(NextBotTraceFilterOnlyActors *const this)
{
  this->_vptr_CTraceFilter = off_3FE6970;
}


// NextBotTraceFilterOnlyActors::~NextBotTraceFilterOnlyActors  (line 132, @0x0000000002f40dd0, libserver.so)  // inlines: ~CTraceFilter, ~CTraceFilterSimple, ~NextBotTraceFilterOnlyActors
// calls: operator delete
void __fastcall NextBotTraceFilterOnlyActors::~NextBotTraceFilterOnlyActors(NextBotTraceFilterOnlyActors *const this)
{
  this->_vptr_CTraceFilter = off_3FE6970;
  operator delete(this);
}


// NextBotTraceFilterOnlyActors::ShouldHitEntity  (line 140, @0x0000000002f40e70, libserver.so)
// calls: CTraceFilterSimple::ShouldHitEntity
bool __fastcall NextBotTraceFilterOnlyActors::ShouldHitEntity(
        NextBotTraceFilterOnlyActors *const this,
        CBaseEntity *pServerEntity)
{
  bool result; // al
  __int64 v4; // rdx

  result = CTraceFilterSimple::ShouldHitEntity(this, pServerEntity);
  if ( result )
  {
    v4 = (*(pServerEntity->_vptr_IHandleEntity + 153))(pServerEntity);
    result = 1;
    if ( v4 == 0 )
      return (*(pServerEntity->_vptr_IHandleEntity + 140))(pServerEntity);
  }
  return result;
}


// NextBotTraversableTraceFilter::~NextBotTraversableTraceFilter  (line 166, @0x0000000002f1e240, libserver.so)  // inlines: ~CTraceFilter, ~CTraceFilterSimple
void __fastcall NextBotTraversableTraceFilter::~NextBotTraversableTraceFilter(
        NextBotTraversableTraceFilter *const this)
{
  this->_vptr_CTraceFilter = off_3FE6970;
}


// NextBotTraversableTraceFilter::~NextBotTraversableTraceFilter  (line 166, @0x0000000002f1f400, libserver.so)  // inlines: ~CTraceFilter, ~CTraceFilterSimple, ~NextBotTraversableTraceFilter
// calls: operator delete
void __fastcall NextBotTraversableTraceFilter::~NextBotTraversableTraceFilter(
        NextBotTraversableTraceFilter *const this)
{
  this->_vptr_CTraceFilter = off_3FE6970;
  operator delete(this);
}


// NextBotTraversableTraceFilter::ShouldHitEntity  (line 176, @0x0000000002f1f8f0, libserver.so)
// calls: CTraceFilterSimple::ShouldHitEntity
bool __fastcall NextBotTraversableTraceFilter::ShouldHitEntity(
        NextBotTraversableTraceFilter *const this,
        CBaseEntity *pServerEntity)
{
  __int64 v5; // rax

  if ( (*(this->m_bot->_vptr_INextBotEventResponder + 76))(this->m_bot) != 0
    || !CTraceFilterSimple::ShouldHitEntity(this, pServerEntity) )
  {
    return 0;
  }
  v5 = (*(this->m_bot->_vptr_INextBotEventResponder + 68))(this->m_bot);
  return (*(*v5 + 880LL))(v5, pServerEntity, this->m_when) ^ 1;
}


