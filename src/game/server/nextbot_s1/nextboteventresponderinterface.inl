
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// INextBotEventResponder::Schema_DynamicBinding  (line 37, @0x0000000001b3a7e0, libserver.so)
// calls: INextBotEventResponder::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall INextBotEventResponder::Schema_DynamicBinding(
        const INextBotEventResponder *const this)
{
  INextBotEventResponder::Schema_VerifyBindingIsRegistered();
  return INextBotEventResponder::s_pSchemaBinding;
}


// INextBotEventResponder::~INextBotEventResponder  (line 41, @0x0000000001b38ac0, libserver.so)
void __fastcall INextBotEventResponder::~INextBotEventResponder(INextBotEventResponder *const this)
{
  this->_vptr_INextBotEventResponder = &off_3F7A570;
}


// INextBotEventResponder::~INextBotEventResponder  (line 41, @0x0000000001b3a360, libserver.so)  // inlines: ~INextBotEventResponder
// calls: operator delete
void __fastcall INextBotEventResponder::~INextBotEventResponder(INextBotEventResponder *const this)
{
  this->_vptr_INextBotEventResponder = &off_3F7A570;
  operator delete(this);
}


// INextBotEventResponder::FirstContainedResponder  (line 44, @0x0000000001b38ad0, libserver.so)
INextBotEventResponder *__fastcall INextBotEventResponder::FirstContainedResponder(
        const INextBotEventResponder *const this)
{
  return 0;
}


// INextBotEventResponder::NextContainedResponder  (line 45, @0x0000000001b38ae0, libserver.so)
INextBotEventResponder *__fastcall INextBotEventResponder::NextContainedResponder(
        const INextBotEventResponder *const this,
        INextBotEventResponder *current)
{
  return 0;
}


// INextBotEventResponder::OnLeaveGround  (line 133, @0x0000000001b38af0, libserver.so)
void __fastcall INextBotEventResponder::OnLeaveGround(INextBotEventResponder *const this, CBaseEntity *ground)
{
  __int64 i; // rbx

  for ( i = (*(this->_vptr_INextBotEventResponder + 3))(this);
        i != 0;
        i = (*(this->_vptr_INextBotEventResponder + 4))(this, i) )
  {
    (*(*i + 40LL))(i, ground);
  }
}


// INextBotEventResponder::OnLandOnGround  (line 141, @0x0000000001b38b50, libserver.so)
void __fastcall INextBotEventResponder::OnLandOnGround(INextBotEventResponder *const this, CBaseEntity *ground)
{
  __int64 i; // rbx

  for ( i = (*(this->_vptr_INextBotEventResponder + 3))(this);
        i != 0;
        i = (*(this->_vptr_INextBotEventResponder + 4))(this, i) )
  {
    (*(*i + 48LL))(i, ground);
  }
}


// INextBotEventResponder::OnContact  (line 149, @0x0000000001b38bb0, libserver.so)
void __fastcall INextBotEventResponder::OnContact(
        INextBotEventResponder *const this,
        CBaseEntity *other,
        CGameTrace *result)
{
  __int64 i; // rbx

  for ( i = (*(this->_vptr_INextBotEventResponder + 3))(this);
        i != 0;
        i = (*(this->_vptr_INextBotEventResponder + 4))(this, i) )
  {
    (*(*i + 56LL))(i, other, result);
  }
}


// INextBotEventResponder::OnMoveToSuccess  (line 157, @0x0000000001b38c10, libserver.so)
void __fastcall INextBotEventResponder::OnMoveToSuccess(INextBotEventResponder *const this)
{
  __int64 i; // rbx

  for ( i = (*(this->_vptr_INextBotEventResponder + 3))(this);
        i != 0;
        i = (*(this->_vptr_INextBotEventResponder + 4))(this, i) )
  {
    (*(*i + 64LL))(i);
  }
}


// INextBotEventResponder::OnMoveToFailure  (line 165, @0x0000000001b38c60, libserver.so)
void __fastcall INextBotEventResponder::OnMoveToFailure(INextBotEventResponder *const this, MoveToFailureType reason)
{
  __int64 i; // rbx

  for ( i = (*(this->_vptr_INextBotEventResponder + 3))(this);
        i != 0;
        i = (*(this->_vptr_INextBotEventResponder + 4))(this, i) )
  {
    (*(*i + 72LL))(i, reason);
  }
}


// INextBotEventResponder::OnStuck  (line 173, @0x0000000001b38cc0, libserver.so)
void __fastcall INextBotEventResponder::OnStuck(INextBotEventResponder *const this)
{
  __int64 i; // rbx

  for ( i = (*(this->_vptr_INextBotEventResponder + 3))(this);
        i != 0;
        i = (*(this->_vptr_INextBotEventResponder + 4))(this, i) )
  {
    (*(*i + 80LL))(i);
  }
}


// INextBotEventResponder::OnUnStuck  (line 181, @0x0000000001b38d10, libserver.so)
void __fastcall INextBotEventResponder::OnUnStuck(INextBotEventResponder *const this)
{
  __int64 i; // rbx

  for ( i = (*(this->_vptr_INextBotEventResponder + 3))(this);
        i != 0;
        i = (*(this->_vptr_INextBotEventResponder + 4))(this, i) )
  {
    (*(*i + 88LL))(i);
  }
}


// INextBotEventResponder::OnPostureChanged  (line 189, @0x0000000001b38d60, libserver.so)
void __fastcall INextBotEventResponder::OnPostureChanged(INextBotEventResponder *const this)
{
  __int64 i; // rbx

  for ( i = (*(this->_vptr_INextBotEventResponder + 3))(this);
        i != 0;
        i = (*(this->_vptr_INextBotEventResponder + 4))(this, i) )
  {
    (*(*i + 96LL))(i);
  }
}


// INextBotEventResponder::OnAnimationActivityComplete  (line 197, @0x0000000001b38db0, libserver.so)
void __fastcall INextBotEventResponder::OnAnimationActivityComplete(
        INextBotEventResponder *const this,
        Activity activity)
{
  __int64 i; // rbx

  for ( i = (*(this->_vptr_INextBotEventResponder + 3))(this);
        i != 0;
        i = (*(this->_vptr_INextBotEventResponder + 4))(this, i) )
  {
    (*(*i + 104LL))(i, activity);
  }
}


// INextBotEventResponder::OnAnimationActivityInterrupted  (line 205, @0x0000000001b38e10, libserver.so)
void __fastcall INextBotEventResponder::OnAnimationActivityInterrupted(
        INextBotEventResponder *const this,
        Activity activity)
{
  __int64 i; // rbx

  for ( i = (*(this->_vptr_INextBotEventResponder + 3))(this);
        i != 0;
        i = (*(this->_vptr_INextBotEventResponder + 4))(this, i) )
  {
    (*(*i + 112LL))(i, activity);
  }
}


// INextBotEventResponder::OnAnimationEvent  (line 213, @0x0000000001b38e70, libserver.so)
void __fastcall INextBotEventResponder::OnAnimationEvent(INextBotEventResponder *const this, animevent_t *event)
{
  __int64 i; // rbx

  for ( i = (*(this->_vptr_INextBotEventResponder + 3))(this);
        i != 0;
        i = (*(this->_vptr_INextBotEventResponder + 4))(this, i) )
  {
    (*(*i + 120LL))(i, event);
  }
}


// INextBotEventResponder::OnIgnite  (line 221, @0x0000000001b38ed0, libserver.so)
void __fastcall INextBotEventResponder::OnIgnite(INextBotEventResponder *const this)
{
  __int64 i; // rbx

  for ( i = (*(this->_vptr_INextBotEventResponder + 3))(this);
        i != 0;
        i = (*(this->_vptr_INextBotEventResponder + 4))(this, i) )
  {
    (*(*i + 128LL))(i);
  }
}


// INextBotEventResponder::OnInjured  (line 229, @0x0000000001b38f20, libserver.so)
void __fastcall INextBotEventResponder::OnInjured(
        INextBotEventResponder *const this,
        const CTakeDamageInfo *const info)
{
  __int64 i; // rbx

  for ( i = (*(this->_vptr_INextBotEventResponder + 3))(this);
        i != 0;
        i = (*(this->_vptr_INextBotEventResponder + 4))(this, i) )
  {
    (*(*i + 136LL))(i, info);
  }
}


// INextBotEventResponder::OnKilled  (line 237, @0x0000000001b38f80, libserver.so)
void __fastcall INextBotEventResponder::OnKilled(INextBotEventResponder *const this, const CTakeDamageInfo *const info)
{
  __int64 i; // rbx

  for ( i = (*(this->_vptr_INextBotEventResponder + 3))(this);
        i != 0;
        i = (*(this->_vptr_INextBotEventResponder + 4))(this, i) )
  {
    (*(*i + 144LL))(i, info);
  }
}


// INextBotEventResponder::OnOtherKilled  (line 245, @0x0000000001b38fe0, libserver.so)
void __fastcall INextBotEventResponder::OnOtherKilled(
        INextBotEventResponder *const this,
        CBaseCombatCharacter *victim,
        const CTakeDamageInfo *const info)
{
  __int64 i; // rbx

  for ( i = (*(this->_vptr_INextBotEventResponder + 3))(this);
        i != 0;
        i = (*(this->_vptr_INextBotEventResponder + 4))(this, i) )
  {
    (*(*i + 152LL))(i, victim, info);
  }
}


// INextBotEventResponder::OnSight  (line 253, @0x0000000001b39040, libserver.so)
void __fastcall INextBotEventResponder::OnSight(INextBotEventResponder *const this, CBaseEntity *subject)
{
  __int64 i; // rbx

  for ( i = (*(this->_vptr_INextBotEventResponder + 3))(this);
        i != 0;
        i = (*(this->_vptr_INextBotEventResponder + 4))(this, i) )
  {
    (*(*i + 160LL))(i, subject);
  }
}


// INextBotEventResponder::OnLostSight  (line 261, @0x0000000001b390a0, libserver.so)
void __fastcall INextBotEventResponder::OnLostSight(INextBotEventResponder *const this, CBaseEntity *subject)
{
  __int64 i; // rbx

  for ( i = (*(this->_vptr_INextBotEventResponder + 3))(this);
        i != 0;
        i = (*(this->_vptr_INextBotEventResponder + 4))(this, i) )
  {
    (*(*i + 168LL))(i, subject);
  }
}


// INextBotEventResponder::OnSound  (line 269, @0x0000000001b39100, libserver.so)
void __fastcall INextBotEventResponder::OnSound(
        INextBotEventResponder *const this,
        CBaseEntity *source,
        const Vector *const pos,
        KeyValues *keys)
{
  __int64 i; // rbx

  for ( i = (*(this->_vptr_INextBotEventResponder + 3))(this);
        i != 0;
        i = (*(this->_vptr_INextBotEventResponder + 4))(this, i) )
  {
    (*(*i + 176LL))(i, source, pos, keys);
  }
}


// INextBotEventResponder::OnSpokeConcept  (line 277, @0x0000000001b39170, libserver.so)  // inlines: CAI_Concept, CEntityHandle, CHandle, CRR_Concept, CUtlSymbol
// local variable allocation has failed, the output may be wrong!
void __fastcall INextBotEventResponder::OnSpokeConcept(
        INextBotEventResponder *const this,
        CBaseCombatCharacter *who,
        AIConcept_t concept,
        AI_Response *response)
{
  __int64 *i; // rbx
  __int64 v9; // rax
  void (__fastcall *v10)(__int64 *, CBaseCombatCharacter *, _WORD *, AI_Response *); // rax
  _WORD v11[2]; // [rsp+10h] [rbp-40h] BYREF
  int v12; // [rsp+14h] [rbp-3Ch]

  for ( i = (*(this->_vptr_INextBotEventResponder + 3))(this);
        i != 0;
        i = (*(this->_vptr_INextBotEventResponder + 4))(this, i) )
  {
    v9 = *i;
    v11[0] = *concept.m_iConcept.m_Id;
    v10 = *(v9 + 184);
    v12 = *(*&concept + 4LL);
    v10(i, who, v11, response);
  }
}


// INextBotEventResponder::OnWeaponFired  (line 285, @0x0000000001b39200, libserver.so)
void __fastcall INextBotEventResponder::OnWeaponFired(
        INextBotEventResponder *const this,
        CBaseCombatCharacter *whoFired,
        CBaseCombatWeapon *weapon)
{
  __int64 i; // rbx

  for ( i = (*(this->_vptr_INextBotEventResponder + 3))(this);
        i != 0;
        i = (*(this->_vptr_INextBotEventResponder + 4))(this, i) )
  {
    (*(*i + 192LL))(i, whoFired, weapon);
  }
}


// INextBotEventResponder::OnNavAreaChanged  (line 293, @0x0000000001b39260, libserver.so)
void __fastcall INextBotEventResponder::OnNavAreaChanged(
        INextBotEventResponder *const this,
        CNavArea *newArea,
        CNavArea *oldArea)
{
  __int64 i; // rbx

  for ( i = (*(this->_vptr_INextBotEventResponder + 3))(this);
        i != 0;
        i = (*(this->_vptr_INextBotEventResponder + 4))(this, i) )
  {
    (*(*i + 200LL))(i, newArea, oldArea);
  }
}


// INextBotEventResponder::OnModelChanged  (line 301, @0x0000000001b392c0, libserver.so)
void __fastcall INextBotEventResponder::OnModelChanged(INextBotEventResponder *const this)
{
  __int64 i; // rbx

  for ( i = (*(this->_vptr_INextBotEventResponder + 3))(this);
        i != 0;
        i = (*(this->_vptr_INextBotEventResponder + 4))(this, i) )
  {
    (*(*i + 208LL))(i);
  }
}


// INextBotEventResponder::OnPickUp  (line 309, @0x0000000001b39310, libserver.so)
void __fastcall INextBotEventResponder::OnPickUp(
        INextBotEventResponder *const this,
        CBaseEntity *item,
        CBaseCombatCharacter *giver)
{
  __int64 i; // rbx

  for ( i = (*(this->_vptr_INextBotEventResponder + 3))(this);
        i != 0;
        i = (*(this->_vptr_INextBotEventResponder + 4))(this, i) )
  {
    (*(*i + 216LL))(i, item, giver);
  }
}


// INextBotEventResponder::OnDrop  (line 317, @0x0000000001b39370, libserver.so)
void __fastcall INextBotEventResponder::OnDrop(INextBotEventResponder *const this, CBaseEntity *item)
{
  __int64 i; // rbx

  for ( i = (*(this->_vptr_INextBotEventResponder + 3))(this);
        i != 0;
        i = (*(this->_vptr_INextBotEventResponder + 4))(this, i) )
  {
    (*(*i + 224LL))(i, item);
  }
}


// INextBotEventResponder::OnActorEmoted  (line 325, @0x0000000001b393d0, libserver.so)
void __fastcall INextBotEventResponder::OnActorEmoted(
        INextBotEventResponder *const this,
        CBaseCombatCharacter *emoter,
        int emote)
{
  __int64 i; // rbx

  for ( i = (*(this->_vptr_INextBotEventResponder + 3))(this);
        i != 0;
        i = (*(this->_vptr_INextBotEventResponder + 4))(this, i) )
  {
    (*(*i + 232LL))(i, emoter, emote);
  }
}


// INextBotEventResponder::OnShoved  (line 333, @0x0000000001b39430, libserver.so)
void __fastcall INextBotEventResponder::OnShoved(INextBotEventResponder *const this, CBaseEntity *pusher)
{
  __int64 i; // rbx

  for ( i = (*(this->_vptr_INextBotEventResponder + 3))(this);
        i != 0;
        i = (*(this->_vptr_INextBotEventResponder + 4))(this, i) )
  {
    (*(*i + 296LL))(i, pusher);
  }
}


// INextBotEventResponder::OnBlinded  (line 341, @0x0000000001b39490, libserver.so)
void __fastcall INextBotEventResponder::OnBlinded(INextBotEventResponder *const this, CBaseEntity *blinder)
{
  __int64 i; // rbx

  for ( i = (*(this->_vptr_INextBotEventResponder + 3))(this);
        i != 0;
        i = (*(this->_vptr_INextBotEventResponder + 4))(this, i) )
  {
    (*(*i + 304LL))(i, blinder);
  }
}


// INextBotEventResponder::OnCommandAttack  (line 349, @0x0000000001b394f0, libserver.so)
void __fastcall INextBotEventResponder::OnCommandAttack(INextBotEventResponder *const this, CBaseEntity *victim)
{
  __int64 i; // rbx

  for ( i = (*(this->_vptr_INextBotEventResponder + 3))(this);
        i != 0;
        i = (*(this->_vptr_INextBotEventResponder + 4))(this, i) )
  {
    (*(*i + 240LL))(i, victim);
  }
}


// INextBotEventResponder::OnCommandApproach  (line 357, @0x0000000001b39550, libserver.so)
void __fastcall INextBotEventResponder::OnCommandApproach(
        INextBotEventResponder *const this,
        const Vector *const pos,
        double a3,
        float range)
{
  __int64 i; // rbx
  float rangea; // [rsp+Ch] [rbp-24h]

  rangea = *&a3;
  for ( i = (*(this->_vptr_INextBotEventResponder + 3))(this, a3, range);
        i != 0;
        i = (*(this->_vptr_INextBotEventResponder + 4))(this, i) )
  {
    (*(*i + 248LL))(i, pos, rangea);
  }
}


// INextBotEventResponder::OnCommandApproach  (line 365, @0x0000000001b395c0, libserver.so)
void __fastcall INextBotEventResponder::OnCommandApproach(INextBotEventResponder *const this, CBaseEntity *goal)
{
  __int64 i; // rbx

  for ( i = (*(this->_vptr_INextBotEventResponder + 3))(this);
        i != 0;
        i = (*(this->_vptr_INextBotEventResponder + 4))(this, i) )
  {
    (*(*i + 256LL))(i, goal);
  }
}


// INextBotEventResponder::OnCommandRetreat  (line 373, @0x0000000001b39620, libserver.so)
void __fastcall INextBotEventResponder::OnCommandRetreat(
        INextBotEventResponder *const this,
        CBaseEntity *threat,
        double a3,
        float range)
{
  __int64 i; // rbx
  float rangea; // [rsp+Ch] [rbp-24h]

  rangea = *&a3;
  for ( i = (*(this->_vptr_INextBotEventResponder + 3))(this, a3, range);
        i != 0;
        i = (*(this->_vptr_INextBotEventResponder + 4))(this, i) )
  {
    (*(*i + 264LL))(i, threat, rangea);
  }
}


// INextBotEventResponder::OnCommandPause  (line 381, @0x0000000001b39690, libserver.so)
void __fastcall INextBotEventResponder::OnCommandPause(INextBotEventResponder *const this, double a2, float duration)
{
  __int64 i; // rbx
  float durationa; // [rsp+Ch] [rbp-14h]

  durationa = *&a2;
  for ( i = (*(this->_vptr_INextBotEventResponder + 3))(this, a2, duration);
        i != 0;
        i = (*(this->_vptr_INextBotEventResponder + 4))(this, i) )
  {
    (*(*i + 272LL))(i, durationa);
  }
}


// INextBotEventResponder::OnCommandResume  (line 389, @0x0000000001b396f0, libserver.so)
void __fastcall INextBotEventResponder::OnCommandResume(INextBotEventResponder *const this)
{
  __int64 i; // rbx

  for ( i = (*(this->_vptr_INextBotEventResponder + 3))(this);
        i != 0;
        i = (*(this->_vptr_INextBotEventResponder + 4))(this, i) )
  {
    (*(*i + 280LL))(i);
  }
}


// INextBotEventResponder::OnCommandString  (line 397, @0x0000000001b39740, libserver.so)
void __fastcall INextBotEventResponder::OnCommandString(INextBotEventResponder *const this, const char *command)
{
  __int64 i; // rbx

  for ( i = (*(this->_vptr_INextBotEventResponder + 3))(this);
        i != 0;
        i = (*(this->_vptr_INextBotEventResponder + 4))(this, i) )
  {
    (*(*i + 288LL))(i, command);
  }
}


// INextBotEventResponder::OnTerritoryContested  (line 405, @0x0000000001b397a0, libserver.so)
void __fastcall INextBotEventResponder::OnTerritoryContested(INextBotEventResponder *const this, int territoryID)
{
  __int64 i; // rbx

  for ( i = (*(this->_vptr_INextBotEventResponder + 3))(this);
        i != 0;
        i = (*(this->_vptr_INextBotEventResponder + 4))(this, i) )
  {
    (*(*i + 312LL))(i, territoryID);
  }
}


// INextBotEventResponder::OnTerritoryCaptured  (line 413, @0x0000000001b39800, libserver.so)
void __fastcall INextBotEventResponder::OnTerritoryCaptured(INextBotEventResponder *const this, int territoryID)
{
  __int64 i; // rbx

  for ( i = (*(this->_vptr_INextBotEventResponder + 3))(this);
        i != 0;
        i = (*(this->_vptr_INextBotEventResponder + 4))(this, i) )
  {
    (*(*i + 320LL))(i, territoryID);
  }
}


// INextBotEventResponder::OnTerritoryLost  (line 421, @0x0000000001b39860, libserver.so)
void __fastcall INextBotEventResponder::OnTerritoryLost(INextBotEventResponder *const this, int territoryID)
{
  __int64 i; // rbx

  for ( i = (*(this->_vptr_INextBotEventResponder + 3))(this);
        i != 0;
        i = (*(this->_vptr_INextBotEventResponder + 4))(this, i) )
  {
    (*(*i + 328LL))(i, territoryID);
  }
}


// INextBotEventResponder::OnWin  (line 429, @0x0000000001b398c0, libserver.so)
void __fastcall INextBotEventResponder::OnWin(INextBotEventResponder *const this)
{
  __int64 i; // rbx

  for ( i = (*(this->_vptr_INextBotEventResponder + 3))(this);
        i != 0;
        i = (*(this->_vptr_INextBotEventResponder + 4))(this, i) )
  {
    (*(*i + 336LL))(i);
  }
}


// INextBotEventResponder::OnLose  (line 437, @0x0000000001b39910, libserver.so)
void __fastcall INextBotEventResponder::OnLose(INextBotEventResponder *const this)
{
  __int64 i; // rbx

  for ( i = (*(this->_vptr_INextBotEventResponder + 3))(this);
        i != 0;
        i = (*(this->_vptr_INextBotEventResponder + 4))(this, i) )
  {
    (*(*i + 344LL))(i);
  }
}


// INextBotEventResponder::OnCommandMoveTo  (line 446, @0x0000000001b39960, libserver.so)
void __fastcall INextBotEventResponder::OnCommandMoveTo(INextBotEventResponder *const this, const Vector *const pos)
{
  __int64 i; // rbx

  for ( i = (*(this->_vptr_INextBotEventResponder + 3))(this);
        i != 0;
        i = (*(this->_vptr_INextBotEventResponder + 4))(this, i) )
  {
    (*(*i + 352LL))(i, pos);
  }
}


// INextBotEventResponder::OnCommandMoveToDirection  (line 454, @0x0000000001b399c0, libserver.so)
void __fastcall INextBotEventResponder::OnCommandMoveToDirection(
        INextBotEventResponder *const this,
        const Vector *const pos)
{
  __int64 i; // rbx

  for ( i = (*(this->_vptr_INextBotEventResponder + 3))(this);
        i != 0;
        i = (*(this->_vptr_INextBotEventResponder + 4))(this, i) )
  {
    (*(*i + 360LL))(i, pos);
  }
}


// INextBotEventResponder::OnCommandMoveToAggressive  (line 462, @0x0000000001b39a20, libserver.so)
void __fastcall INextBotEventResponder::OnCommandMoveToAggressive(
        INextBotEventResponder *const this,
        const Vector *const pos)
{
  __int64 i; // rbx

  for ( i = (*(this->_vptr_INextBotEventResponder + 3))(this);
        i != 0;
        i = (*(this->_vptr_INextBotEventResponder + 4))(this, i) )
  {
    (*(*i + 368LL))(i, pos);
  }
}


// INextBotEventResponder::OnCommandPatrol  (line 470, @0x0000000001b39a80, libserver.so)
void __fastcall INextBotEventResponder::OnCommandPatrol(INextBotEventResponder *const this, const Vector *const pos)
{
  __int64 i; // rbx

  for ( i = (*(this->_vptr_INextBotEventResponder + 3))(this);
        i != 0;
        i = (*(this->_vptr_INextBotEventResponder + 4))(this, i) )
  {
    (*(*i + 376LL))(i, pos);
  }
}


// INextBotEventResponder::OnCommandAttack  (line 478, @0x0000000001b39ae0, libserver.so)
void __fastcall INextBotEventResponder::OnCommandAttack(
        INextBotEventResponder *const this,
        CBaseEntity *victim,
        bool bDeny)
{
  _BOOL4 v5; // r13d
  __int64 i; // rbx

  v5 = bDeny;
  for ( i = (*(this->_vptr_INextBotEventResponder + 3))(this);
        i != 0;
        i = (*(this->_vptr_INextBotEventResponder + 4))(this, i) )
  {
    (*(*i + 384LL))(i, victim, v5);
  }
}


// INextBotEventResponder::OnCastAbilityNoTarget  (line 486, @0x0000000001b39b40, libserver.so)
void __fastcall INextBotEventResponder::OnCastAbilityNoTarget(
        INextBotEventResponder *const this,
        CDOTABaseAbility *ability)
{
  __int64 i; // rbx

  for ( i = (*(this->_vptr_INextBotEventResponder + 3))(this);
        i != 0;
        i = (*(this->_vptr_INextBotEventResponder + 4))(this, i) )
  {
    (*(*i + 392LL))(i, ability);
  }
}


// INextBotEventResponder::OnCastAbilityOnPosition  (line 494, @0x0000000001b39ba0, libserver.so)
void __fastcall INextBotEventResponder::OnCastAbilityOnPosition(
        INextBotEventResponder *const this,
        CDOTABaseAbility *ability,
        const Vector *const pos)
{
  __int64 i; // rbx

  for ( i = (*(this->_vptr_INextBotEventResponder + 3))(this);
        i != 0;
        i = (*(this->_vptr_INextBotEventResponder + 4))(this, i) )
  {
    (*(*i + 400LL))(i, ability, pos);
  }
}


// INextBotEventResponder::OnCastAbilityOnTarget  (line 502, @0x0000000001b39c00, libserver.so)
void __fastcall INextBotEventResponder::OnCastAbilityOnTarget(
        INextBotEventResponder *const this,
        CDOTABaseAbility *ability,
        CBaseEntity *target)
{
  __int64 i; // rbx

  for ( i = (*(this->_vptr_INextBotEventResponder + 3))(this);
        i != 0;
        i = (*(this->_vptr_INextBotEventResponder + 4))(this, i) )
  {
    (*(*i + 408LL))(i, ability, target);
  }
}


// INextBotEventResponder::OnDropItem  (line 510, @0x0000000001b39c60, libserver.so)
void __fastcall INextBotEventResponder::OnDropItem(
        INextBotEventResponder *const this,
        const Vector *const pos,
        CBaseEntity *item)
{
  __int64 i; // rbx

  for ( i = (*(this->_vptr_INextBotEventResponder + 3))(this);
        i != 0;
        i = (*(this->_vptr_INextBotEventResponder + 4))(this, i) )
  {
    (*(*i + 416LL))(i, pos, item);
  }
}


// INextBotEventResponder::OnGiveItem  (line 518, @0x0000000001b39cc0, libserver.so)
void __fastcall INextBotEventResponder::OnGiveItem(
        INextBotEventResponder *const this,
        CBaseEntity *target,
        CBaseEntity *item)
{
  __int64 i; // rbx

  for ( i = (*(this->_vptr_INextBotEventResponder + 3))(this);
        i != 0;
        i = (*(this->_vptr_INextBotEventResponder + 4))(this, i) )
  {
    (*(*i + 424LL))(i, target, item);
  }
}


// INextBotEventResponder::OnPickupItem  (line 526, @0x0000000001b39d20, libserver.so)
void __fastcall INextBotEventResponder::OnPickupItem(INextBotEventResponder *const this, CBaseEntity *item)
{
  __int64 i; // rbx

  for ( i = (*(this->_vptr_INextBotEventResponder + 3))(this);
        i != 0;
        i = (*(this->_vptr_INextBotEventResponder + 4))(this, i) )
  {
    (*(*i + 432LL))(i, item);
  }
}


// INextBotEventResponder::OnPickupRune  (line 534, @0x0000000001b39d80, libserver.so)
void __fastcall INextBotEventResponder::OnPickupRune(INextBotEventResponder *const this, CBaseEntity *item)
{
  __int64 i; // rbx

  for ( i = (*(this->_vptr_INextBotEventResponder + 3))(this);
        i != 0;
        i = (*(this->_vptr_INextBotEventResponder + 4))(this, i) )
  {
    (*(*i + 440LL))(i, item);
  }
}


// INextBotEventResponder::OnStop  (line 542, @0x0000000001b39de0, libserver.so)
void __fastcall INextBotEventResponder::OnStop(INextBotEventResponder *const this)
{
  __int64 i; // rbx

  for ( i = (*(this->_vptr_INextBotEventResponder + 3))(this);
        i != 0;
        i = (*(this->_vptr_INextBotEventResponder + 4))(this, i) )
  {
    (*(*i + 448LL))(i);
  }
}


// INextBotEventResponder::OnCancelAttack  (line 550, @0x0000000001b39e30, libserver.so)
void __fastcall INextBotEventResponder::OnCancelAttack(INextBotEventResponder *const this, CBaseEntity *pTarget)
{
  __int64 i; // rbx

  for ( i = (*(this->_vptr_INextBotEventResponder + 3))(this);
        i != 0;
        i = (*(this->_vptr_INextBotEventResponder + 4))(this, i) )
  {
    (*(*i + 456LL))(i, pTarget);
  }
}


// INextBotEventResponder::OnDeAggro  (line 558, @0x0000000001b39e90, libserver.so)
void __fastcall INextBotEventResponder::OnDeAggro(INextBotEventResponder *const this, CBaseEntity *pTarget)
{
  __int64 i; // rbx

  for ( i = (*(this->_vptr_INextBotEventResponder + 3))(this);
        i != 0;
        i = (*(this->_vptr_INextBotEventResponder + 4))(this, i) )
  {
    (*(*i + 464LL))(i, pTarget);
  }
}


// INextBotEventResponder::OnDominated  (line 566, @0x0000000001b39ef0, libserver.so)
void __fastcall INextBotEventResponder::OnDominated(INextBotEventResponder *const this)
{
  __int64 i; // rbx

  for ( i = (*(this->_vptr_INextBotEventResponder + 3))(this);
        i != 0;
        i = (*(this->_vptr_INextBotEventResponder + 4))(this, i) )
  {
    (*(*i + 472LL))(i);
  }
}


// INextBotEventResponder::OnInvalidatePath  (line 574, @0x0000000001b39f40, libserver.so)
void __fastcall INextBotEventResponder::OnInvalidatePath(INextBotEventResponder *const this)
{
  __int64 i; // rbx

  for ( i = (*(this->_vptr_INextBotEventResponder + 3))(this);
        i != 0;
        i = (*(this->_vptr_INextBotEventResponder + 4))(this, i) )
  {
    (*(*i + 480LL))(i);
  }
}


// INextBotEventResponder::OnUnitTeleported  (line 582, @0x0000000001b39f90, libserver.so)
void __fastcall INextBotEventResponder::OnUnitTeleported(
        INextBotEventResponder *const this,
        CBaseEntity *pUnit,
        bool bLongTeleport)
{
  _BOOL4 v5; // r13d
  __int64 i; // rbx

  v5 = bLongTeleport;
  for ( i = (*(this->_vptr_INextBotEventResponder + 3))(this);
        i != 0;
        i = (*(this->_vptr_INextBotEventResponder + 4))(this, i) )
  {
    (*(*i + 488LL))(i, pUnit, v5);
  }
}


