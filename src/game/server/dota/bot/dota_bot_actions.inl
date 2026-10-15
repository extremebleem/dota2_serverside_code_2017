
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_BotAction::~CDOTA_BotAction  (line 45, @0x0000000002811bf0, libserver.so)
void __fastcall CDOTA_BotAction::~CDOTA_BotAction(CDOTA_BotAction *const this)
{
  this->_vptr_CDOTA_BotAction = off_42B6970;
}


// CDOTA_BotAction::~CDOTA_BotAction  (line 45, @0x0000000002812240, libserver.so)  // inlines: ~CDOTA_BotAction
// calls: operator delete
void __fastcall CDOTA_BotAction::~CDOTA_BotAction(CDOTA_BotAction *const this)
{
  this->_vptr_CDOTA_BotAction = off_42B6970;
  operator delete(this);
}


// CDOTA_BotAction::OnStart  (line 52, @0x0000000002811c00, libserver.so)
void __fastcall CDOTA_BotAction::OnStart(CDOTA_BotAction *const this)
{
  this->m_iActionFrame = gpGlobals->framecount;
}


// CDOTA_BotAction::OnEnd  (line 53, @0x0000000002811c20, libserver.so)
void __fastcall CDOTA_BotAction::OnEnd(CDOTA_BotAction *const this)
{
  ;
}


// CDOTA_BotAction::Think  (line 54, @0x0000000002811c30, libserver.so)
void __fastcall CDOTA_BotAction::Think(CDOTA_BotAction *const this)
{
  ;
}


// CDOTA_BotAction::OnDidDamage  (line 57, @0x0000000002811c40, libserver.so)
void __fastcall CDOTA_BotAction::OnDidDamage(
        CDOTA_BotAction *const this,
        CDOTA_BaseNPC *pTarget,
        CDOTABaseAbility *pInflictor,
        int iAmount)
{
  ;
}


// CDOTA_BotAction::OnTakeDamage  (line 58, @0x0000000002811c50, libserver.so)
void __fastcall CDOTA_BotAction::OnTakeDamage(CDOTA_BotAction *const this, const CTakeDamageInfo *const info)
{
  ;
}


// CDOTA_BotAction::OnAttacked  (line 59, @0x0000000002811c60, libserver.so)
void __fastcall CDOTA_BotAction::OnAttacked(CDOTA_BotAction *const this, const CDOTA_AttackRecord *pRecord)
{
  ;
}


// CDOTA_BotAction::OnAbilityExecuted  (line 60, @0x0000000002811c70, libserver.so)
void __fastcall CDOTA_BotAction::OnAbilityExecuted(
        CDOTA_BotAction *const this,
        CDOTABaseAbility *pAbility,
        CBaseEntity *pTarget)
{
  ;
}


// CDOTA_BotAction::ShouldBeQueued  (line 69, @0x0000000002811c80, libserver.so)
bool __fastcall CDOTA_BotAction::ShouldBeQueued(CDOTA_BotAction *const this)
{
  return 1;
}


// CDOTA_BotAction_Idle::~CDOTA_BotAction_Idle  (line 79, @0x0000000002812010, libserver.so)  // inlines: ~CDOTA_BotAction
void __fastcall CDOTA_BotAction_Idle::~CDOTA_BotAction_Idle(CDOTA_BotAction_Idle *const this)
{
  this->_vptr_CDOTA_BotAction = off_42B6970;
}


// CDOTA_BotAction_Idle::~CDOTA_BotAction_Idle  (line 79, @0x0000000002812480, libserver.so)  // inlines: ~CDOTA_BotAction, ~CDOTA_BotAction_Idle
// calls: operator delete
void __fastcall CDOTA_BotAction_Idle::~CDOTA_BotAction_Idle(CDOTA_BotAction_Idle *const this)
{
  this->_vptr_CDOTA_BotAction = off_42B6970;
  operator delete(this);
}


// CDOTA_BotAction_Idle::GetDebugTarget  (line 86, @0x0000000002811c90, libserver.so)
const char *__fastcall CDOTA_BotAction_Idle::GetDebugTarget(CDOTA_BotAction_Idle *const this)
{
  return "";
}


// CDOTA_BotAction_Idle::GetActionType  (line 93, @0x0000000002811ca0, libserver.so)
DOTA_BOT_ACTION __fastcall CDOTA_BotAction_Idle::GetActionType(CDOTA_BotAction_Idle *const this)
{
  return DOTA_BOT_ACTION::DOTA_BOT_ACTION_IDLE;
}


// CDOTA_BotAction_MoveTo::~CDOTA_BotAction_MoveTo  (line 108, @0x0000000002812d00, libserver.so)  // inlines: Purge, ~CDOTA_BotAction, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::RemoveAll, CUtlMemory<Vector, int>::Purge
void __fastcall CDOTA_BotAction_MoveTo::~CDOTA_BotAction_MoveTo(CDOTA_BotAction_MoveTo *const this)
{
  this->_vptr_CDOTA_BotAction = off_42B6F30;
  CUtlVectorBase<Vector,CUtlMemory<Vector,int>>::RemoveAll(&this->m_vWaypoints);
  if ( (this->m_vWaypoints.m_Memory.m_nGrowSize & 0xC0000000) != 0
    || (CUtlMemory<Vector,int>::Purge(&this->m_vWaypoints.m_Memory),
        (this->m_vWaypoints.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    this->_vptr_CDOTA_BotAction = off_42B6970;
  }
  else
  {
    CUtlMemory<Vector,int>::Purge(&this->m_vWaypoints.m_Memory);
    this->_vptr_CDOTA_BotAction = off_42B6970;
  }
}


// CDOTA_BotAction_MoveTo::~CDOTA_BotAction_MoveTo  (line 108, @0x0000000002812d70, libserver.so)  // inlines: Purge, ~CDOTA_BotAction, ~CDOTA_BotAction_MoveTo, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::RemoveAll, operator delete, CUtlMemory<Vector, int>::Purge
void __fastcall CDOTA_BotAction_MoveTo::~CDOTA_BotAction_MoveTo(CDOTA_BotAction_MoveTo *const this)
{
  this->_vptr_CDOTA_BotAction = off_42B6F30;
  CUtlVectorBase<Vector,CUtlMemory<Vector,int>>::RemoveAll(&this->m_vWaypoints);
  if ( (this->m_vWaypoints.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<Vector,int>::Purge(&this->m_vWaypoints.m_Memory);
    if ( (this->m_vWaypoints.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<Vector,int>::Purge(&this->m_vWaypoints.m_Memory);
  }
  this->_vptr_CDOTA_BotAction = off_42B6970;
  operator delete(this);
}


// CDOTA_BotAction_MoveTo::GetDebugTarget  (line 116, @0x0000000002811cb0, libserver.so)
const char *__fastcall CDOTA_BotAction_MoveTo::GetDebugTarget(CDOTA_BotAction_MoveTo *const this)
{
  return "";
}


// CDOTA_BotAction_MoveTo::GetActionType  (line 124, @0x0000000002811cc0, libserver.so)
DOTA_BOT_ACTION __fastcall CDOTA_BotAction_MoveTo::GetActionType(CDOTA_BotAction_MoveTo *const this)
{
  return DOTA_BOT_ACTION::DOTA_BOT_ACTION_MOVE_TO;
}


// CDOTA_BotAction_Attack::~CDOTA_BotAction_Attack  (line 170, @0x0000000002812000, libserver.so)  // inlines: ~CDOTA_BotAction
void __fastcall CDOTA_BotAction_Attack::~CDOTA_BotAction_Attack(CDOTA_BotAction_Attack *const this)
{
  this->_vptr_CDOTA_BotAction = off_42B6970;
}


// CDOTA_BotAction_Attack::~CDOTA_BotAction_Attack  (line 170, @0x0000000002812460, libserver.so)  // inlines: ~CDOTA_BotAction, ~CDOTA_BotAction_Attack
// calls: operator delete
void __fastcall CDOTA_BotAction_Attack::~CDOTA_BotAction_Attack(CDOTA_BotAction_Attack *const this)
{
  this->_vptr_CDOTA_BotAction = off_42B6970;
  operator delete(this);
}


// CDOTA_BotAction_Attack::GetDebugTarget  (line 177, @0x0000000002812980, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetUnitName, IndexToIdentity, IsValid, LookupEntity, String, ToCStr, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// globals: CEntityHandle::gm_pEntityList
const char *__fastcall CDOTA_BotAction_Attack::GetDebugTarget(CDOTA_BotAction_Attack *const this)
{
  const char *result; // rax
  uint32 m_Index; // edx
  CEntityIdentity *v3; // rcx
  CEntityIdentity *v4; // rcx
  CEntityInstance *m_pInstance; // rdx

  result = "NULL";
  m_Index = this->m_hTarget.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hTarget.m_Index) >> 9) & 0x3F];
    if ( v3 != 0 )
    {
      v4 = &v3[this->m_hTarget.m_Index & 0x1FF];
      if ( v4 != 0 && m_Index == v4->m_EHandle.m_Index )
      {
        m_pInstance = v4->m_pInstance;
        if ( v4->m_pInstance != 0 && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 )
        {
          result = "";
          if ( m_pInstance[70].m_iszPrivateVScripts.u.m_Id != 0 )
            return m_pInstance[70].m_iszPrivateVScripts.u.m_pAsString;
        }
      }
    }
  }
  return result;
}


// CDOTA_BotAction_Attack::GetActionType  (line 186, @0x0000000002811cd0, libserver.so)
DOTA_BOT_ACTION __fastcall CDOTA_BotAction_Attack::GetActionType(CDOTA_BotAction_Attack *const this)
{
  return DOTA_BOT_ACTION::DOTA_BOT_ACTION_ATTACK;
}


// CDOTA_BotAction_AttackMove::~CDOTA_BotAction_AttackMove  (line 215, @0x0000000002811ff0, libserver.so)  // inlines: ~CDOTA_BotAction
void __fastcall CDOTA_BotAction_AttackMove::~CDOTA_BotAction_AttackMove(CDOTA_BotAction_AttackMove *const this)
{
  this->_vptr_CDOTA_BotAction = off_42B6970;
}


// CDOTA_BotAction_AttackMove::~CDOTA_BotAction_AttackMove  (line 215, @0x0000000002812440, libserver.so)  // inlines: ~CDOTA_BotAction, ~CDOTA_BotAction_AttackMove
// calls: operator delete
void __fastcall CDOTA_BotAction_AttackMove::~CDOTA_BotAction_AttackMove(CDOTA_BotAction_AttackMove *const this)
{
  this->_vptr_CDOTA_BotAction = off_42B6970;
  operator delete(this);
}


// CDOTA_BotAction_AttackMove::GetDebugTarget  (line 222, @0x0000000002811ce0, libserver.so)
const char *__fastcall CDOTA_BotAction_AttackMove::GetDebugTarget(CDOTA_BotAction_AttackMove *const this)
{
  return "";
}


// CDOTA_BotAction_AttackMove::GetActionType  (line 227, @0x0000000002811cf0, libserver.so)
DOTA_BOT_ACTION __fastcall CDOTA_BotAction_AttackMove::GetActionType(CDOTA_BotAction_AttackMove *const this)
{
  return DOTA_BOT_ACTION::DOTA_BOT_ACTION_ATTACKMOVE;
}


// CDOTA_BotAction_UseAbility::~CDOTA_BotAction_UseAbility  (line 246, @0x0000000002811f10, libserver.so)  // inlines: ~CDOTA_BotAction
void __fastcall CDOTA_BotAction_UseAbility::~CDOTA_BotAction_UseAbility(CDOTA_BotAction_UseAbility *const this)
{
  this->_vptr_CDOTA_BotAction = off_42B6970;
}


// CDOTA_BotAction_UseAbility::~CDOTA_BotAction_UseAbility  (line 246, @0x0000000002812280, libserver.so)  // inlines: ~CDOTA_BotAction, ~CDOTA_BotAction_UseAbility
// calls: operator delete
void __fastcall CDOTA_BotAction_UseAbility::~CDOTA_BotAction_UseAbility(CDOTA_BotAction_UseAbility *const this)
{
  this->_vptr_CDOTA_BotAction = off_42B6970;
  operator delete(this);
}


// CDOTA_BotAction_UseAbility::GetDebugTarget  (line 256, @0x0000000002812a10, libserver.so)  // inlines: Get, GetAbilityName, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTAAbility, operator CBaseEntity*, operator CEntityInstance*
// calls: __dynamic_cast
// strings: "<NoAbilityName>"
// globals: CEntityHandle::gm_pEntityList
const char *__fastcall CDOTA_BotAction_UseAbility::GetDebugTarget(CDOTA_BotAction_UseAbility *const this)
{
  const char *v1; // rbx
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  void *v6; // rax
  const char **v7; // rax
  const char *v8; // rax

  v1 = "NULL";
  m_Index = this->m_hAbility.m_Index;
  if ( m_Index + 2 <= 1 )
    return v1;
  v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hAbility.m_Index) >> 9) & 0x3F];
  if ( v3 == 0 )
    return v1;
  v4 = &v3[this->m_hAbility.m_Index & 0x1FF];
  if ( v4 == 0 )
    return v1;
  if ( m_Index != v4->m_EHandle.m_Index )
    return v1;
  if ( v4->m_pInstance == 0 )
    return v1;
  v6 = __dynamic_cast(v4->m_pInstance, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTABaseAbility, 0);
  if ( v6 == 0 )
    return v1;
  v7 = *(v6 + 111);
  v1 = "<NoAbilityName>";
  if ( v7 == 0 )
    return v1;
  v8 = *v7;
  if ( v8 != 0 )
    return v8;
  return v1;
}


// CDOTA_BotAction_UseAbility::GetActionType  (line 264, @0x0000000002811d00, libserver.so)
DOTA_BOT_ACTION __fastcall CDOTA_BotAction_UseAbility::GetActionType(CDOTA_BotAction_UseAbility *const this)
{
  return DOTA_BOT_ACTION::DOTA_BOT_ACTION_USE_ABILITY;
}


// CDOTA_BotAction_DispenseWard::~CDOTA_BotAction_DispenseWard  (line 310, @0x0000000002811fe0, libserver.so)  // inlines: ~CDOTA_BotAction, ~CDOTA_BotAction_UseAbility
void __fastcall CDOTA_BotAction_DispenseWard::~CDOTA_BotAction_DispenseWard(CDOTA_BotAction_DispenseWard *const this)
{
  this->_vptr_CDOTA_BotAction = off_42B6970;
}


// CDOTA_BotAction_DispenseWard::~CDOTA_BotAction_DispenseWard  (line 310, @0x0000000002812420, libserver.so)  // inlines: ~CDOTA_BotAction, ~CDOTA_BotAction_DispenseWard, ~CDOTA_BotAction_UseAbility
// calls: operator delete
void __fastcall CDOTA_BotAction_DispenseWard::~CDOTA_BotAction_DispenseWard(CDOTA_BotAction_DispenseWard *const this)
{
  this->_vptr_CDOTA_BotAction = off_42B6970;
  operator delete(this);
}


// CDOTA_BotAction_PickUpRune::~CDOTA_BotAction_PickUpRune  (line 325, @0x0000000002811fd0, libserver.so)  // inlines: ~CDOTA_BotAction
void __fastcall CDOTA_BotAction_PickUpRune::~CDOTA_BotAction_PickUpRune(CDOTA_BotAction_PickUpRune *const this)
{
  this->_vptr_CDOTA_BotAction = off_42B6970;
}


// CDOTA_BotAction_PickUpRune::~CDOTA_BotAction_PickUpRune  (line 325, @0x0000000002812400, libserver.so)  // inlines: ~CDOTA_BotAction, ~CDOTA_BotAction_PickUpRune
// calls: operator delete
void __fastcall CDOTA_BotAction_PickUpRune::~CDOTA_BotAction_PickUpRune(CDOTA_BotAction_PickUpRune *const this)
{
  this->_vptr_CDOTA_BotAction = off_42B6970;
  operator delete(this);
}


// CDOTA_BotAction_PickUpRune::GetDebugTarget  (line 332, @0x0000000002811d10, libserver.so)
const char *__fastcall CDOTA_BotAction_PickUpRune::GetDebugTarget(CDOTA_BotAction_PickUpRune *const this)
{
  return "";
}


// CDOTA_BotAction_PickUpRune::OnEnd  (line 335, @0x0000000002811d20, libserver.so)
void __fastcall CDOTA_BotAction_PickUpRune::OnEnd(CDOTA_BotAction_PickUpRune *const this)
{
  ;
}


// CDOTA_BotAction_PickUpRune::GetActionType  (line 339, @0x0000000002811d30, libserver.so)
DOTA_BOT_ACTION __fastcall CDOTA_BotAction_PickUpRune::GetActionType(CDOTA_BotAction_PickUpRune *const this)
{
  return DOTA_BOT_ACTION::DOTA_BOT_ACTION_PICK_UP_RUNE;
}


// CDOTA_BotAction_PickUpItem::~CDOTA_BotAction_PickUpItem  (line 348, @0x0000000002811fc0, libserver.so)  // inlines: ~CDOTA_BotAction
void __fastcall CDOTA_BotAction_PickUpItem::~CDOTA_BotAction_PickUpItem(CDOTA_BotAction_PickUpItem *const this)
{
  this->_vptr_CDOTA_BotAction = off_42B6970;
}


// CDOTA_BotAction_PickUpItem::~CDOTA_BotAction_PickUpItem  (line 348, @0x00000000028123e0, libserver.so)  // inlines: ~CDOTA_BotAction, ~CDOTA_BotAction_PickUpItem
// calls: operator delete
void __fastcall CDOTA_BotAction_PickUpItem::~CDOTA_BotAction_PickUpItem(CDOTA_BotAction_PickUpItem *const this)
{
  this->_vptr_CDOTA_BotAction = off_42B6970;
  operator delete(this);
}


// CDOTA_BotAction_PickUpItem::GetDebugTarget  (line 355, @0x0000000002811d40, libserver.so)
const char *__fastcall CDOTA_BotAction_PickUpItem::GetDebugTarget(CDOTA_BotAction_PickUpItem *const this)
{
  return "";
}


// CDOTA_BotAction_PickUpItem::OnEnd  (line 358, @0x0000000002811d50, libserver.so)
void __fastcall CDOTA_BotAction_PickUpItem::OnEnd(CDOTA_BotAction_PickUpItem *const this)
{
  ;
}


// CDOTA_BotAction_PickUpItem::GetActionType  (line 362, @0x0000000002811d60, libserver.so)
DOTA_BOT_ACTION __fastcall CDOTA_BotAction_PickUpItem::GetActionType(CDOTA_BotAction_PickUpItem *const this)
{
  return DOTA_BOT_ACTION::DOTA_BOT_ACTION_PICK_UP_ITEM;
}


// CDOTA_BotAction_DropItem::~CDOTA_BotAction_DropItem  (line 381, @0x0000000002811fb0, libserver.so)  // inlines: ~CDOTA_BotAction
void __fastcall CDOTA_BotAction_DropItem::~CDOTA_BotAction_DropItem(CDOTA_BotAction_DropItem *const this)
{
  this->_vptr_CDOTA_BotAction = off_42B6970;
}


// CDOTA_BotAction_DropItem::~CDOTA_BotAction_DropItem  (line 381, @0x00000000028123c0, libserver.so)  // inlines: ~CDOTA_BotAction, ~CDOTA_BotAction_DropItem
// calls: operator delete
void __fastcall CDOTA_BotAction_DropItem::~CDOTA_BotAction_DropItem(CDOTA_BotAction_DropItem *const this)
{
  this->_vptr_CDOTA_BotAction = off_42B6970;
  operator delete(this);
}


// CDOTA_BotAction_DropItem::GetDebugTarget  (line 388, @0x0000000002811d70, libserver.so)
const char *__fastcall CDOTA_BotAction_DropItem::GetDebugTarget(CDOTA_BotAction_DropItem *const this)
{
  return "";
}


// CDOTA_BotAction_DropItem::OnEnd  (line 391, @0x0000000002811d80, libserver.so)
void __fastcall CDOTA_BotAction_DropItem::OnEnd(CDOTA_BotAction_DropItem *const this)
{
  ;
}


// CDOTA_BotAction_DropItem::GetActionType  (line 395, @0x0000000002811d90, libserver.so)
DOTA_BOT_ACTION __fastcall CDOTA_BotAction_DropItem::GetActionType(CDOTA_BotAction_DropItem *const this)
{
  return DOTA_BOT_ACTION::DOTA_BOT_ACTION_DROP_ITEM;
}


