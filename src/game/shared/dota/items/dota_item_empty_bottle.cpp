// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/items/dota_item_empty_bottle.cpp:33
class C_CDOTA_Item_EmptyBottle_MapInstall {
	C_CDOTA_Item_EmptyBottle_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/items/dota_item_empty_bottle.cpp:430
class CDOTA_Modifier_Item_EmptyBottle : public CDOTA_Buff_Item {
public:

private:

	int movement_speed_percent_bonus;  // +0xba8
	CDOTA_Modifier_Item_EmptyBottle();
	virtual void OnCreated(KeyValues *);
	ModifierVariant_t GetModifierMoveSpeedBonus_Percentage(const CModifierParams &);
	virtual void DeclareFunctions();
	virtual void OnIntervalThink();
	virtual ~CDOTA_Modifier_Item_EmptyBottle();

	// vtable[57] OnCreated
	// vtable[65] DeclareFunctions
	// vtable[56] OnIntervalThink
	// sizeof = 2992
};

// src/game/shared/dota/items/dota_item_empty_bottle.cpp:485
class CDOTA_Modifier_BottleRegeneration : public CDOTA_Buff {
public:

private:

	int health_restore;  // +0xba8
	int mana_restore;  // +0xbac
	float m_fHealingDone;  // +0xbb0
	CDOTA_Modifier_BottleRegeneration();
	virtual void DeclareFunctions();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual bool IsPurgable();
	virtual void OnIntervalThink();
	ModifierVariant_t GetModifierConstantHealthRegen(const CModifierParams &);
	ModifierVariant_t GetModifierConstantManaRegen(const CModifierParams &);
	ModifierVariant_t OnTakeDamage(const CModifierParams &);
	virtual ~CDOTA_Modifier_BottleRegeneration();

	// vtable[65] DeclareFunctions
	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[14] IsPurgable
	// vtable[56] OnIntervalThink
	// sizeof = 3000
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Item_EmptyBottle::YouForgotToImplementOrDeclareServerClass  (line 33, @0x0000000002d93cd0, libserver.so)
int __fastcall CDOTA_Item_EmptyBottle::YouForgotToImplementOrDeclareServerClass(CDOTA_Item_EmptyBottle *const this)
{
  return 0;
}


// CDOTA_Item_EmptyBottle::GetServerClass  (line 33, @0x0000000002d97c50, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Item_EmptyBottle::GetServerClass(CDOTA_Item_EmptyBottle *const this)
{
  CEntityClass *m_pClass; // rdx
  ServerClass *result; // rax
  CEntityClassInfo *m_pBaseClassInfo; // rdx
  CEntityClass *v4; // rdx
  CEntityClassInfo *v5; // rdx

  m_pClass = this->m_pEntity->m_pClass;
  result = m_pClass->m_pGameClass;
  if ( result == 0 )
  {
    m_pBaseClassInfo = m_pClass->m_pBaseClassInfo;
    if ( m_pBaseClassInfo != 0 )
    {
      v4 = m_pBaseClassInfo->m_pClass;
      result = v4->m_pGameClass;
      if ( result == 0 )
      {
        v5 = v4->m_pBaseClassInfo;
        if ( v5 != 0 )
          return CEntityClass::GetGameClass(v5->m_pClass, 0);
      }
    }
  }
  return result;
}


// CDOTA_Item_EmptyBottle::CDOTA_Item_EmptyBottle  (line 60, @0x0000000002d98800, libserver.so)  // inlines: CNetworkVarBase, EnsureValidValue<int>
// calls: CDOTA_Item::CDOTA_Item, CDOTA_Item_EmptyBottle::ClearStoredRune, CDOTA_Item::~CDOTA_Item, _Unwind_Resume
// callers: CDOTA_Item_EmptyBottle::CEntityInstanceEntityClass::ConstructInstance
void __fastcall CDOTA_Item_EmptyBottle::CDOTA_Item_EmptyBottle(CDOTA_Item_EmptyBottle *const this)
{
  CDOTA_Item::CDOTA_Item(this);
  this->_vptr_IHandleEntity = &off_46DCB50;
  this->m_iStoredRuneType.m_Value = 0;
  CDOTA_Item_EmptyBottle::ClearStoredRune(this);
  this->m_fStoredRuneTime = 0.0;
}


// CDOTA_Item_EmptyBottle::OnPurchase  (line 69, @0x0000000002d94b30, libserver.so)  // inlines: GetParent
// calls: CGameSceneNode::GetOwnerEntity, CDOTA_BaseNPC::GetInventory, CDOTA_BaseNPC::FindModifierByName, CDOTA_Item::SetCurrentCharges, CDOTA_Item::OnPurchase, CDOTA_UnitInventory::FindItemSlotInInventory, CDOTA_BaseNPC::IsInRangeOfShop
// strings: "modifier_fountain_aura_buff"
void __fastcall CDOTA_Item_EmptyBottle::OnPurchase(
        CDOTA_Item_EmptyBottle *const this,
        int nCombineType,
        const char *pszRecipeItemName)
{
  CGameSceneNode *m_pParent; // rdi
  CDOTA_BaseNPC *OwnerEntity; // rax
  CDOTA_BaseNPC *v7; // r12
  CDOTA_UnitInventory *Inventory; // r14

  m_pParent = this->m_pGameSceneNode->m_pParent;
  if ( m_pParent != 0
    && (OwnerEntity = CGameSceneNode::GetOwnerEntity(m_pParent), v7 = OwnerEntity, OwnerEntity != 0)
    && ((Inventory = CDOTA_BaseNPC::GetInventory(OwnerEntity),
         CDOTA_BaseNPC::FindModifierByName(v7, "modifier_fountain_aura_buff", 0) != 0)
     || Inventory != 0 && CDOTA_UnitInventory::FindItemSlotInInventory(Inventory, this, 2) != -1
     || CDOTA_BaseNPC::IsInRangeOfShop(v7, DOTA_SHOP_TYPE::DOTA_SHOP_HOME, 0)) )
  {
    CDOTA_Item::SetCurrentCharges(this, this->m_iInitialCharges.m_Value);
    (*(this->_vptr_IHandleEntity + 297))(this);
  }
  else
  {
    CDOTA_Item::SetCurrentCharges(this, 1);
  }
  CDOTA_Item::OnPurchase(this, nCombineType, 0);
}


// CDOTA_Item_EmptyBottle::Precache  (line 104, @0x0000000002d94ca0, libserver.so)
// calls: CDOTA_Item::Precache, PrecacheParticleSystem
// strings: "particles/items_fx/healing_tango.vpcf"
void __fastcall CDOTA_Item_EmptyBottle::Precache(
        CDOTA_Item_EmptyBottle *const this,
        const CEntityPrecacheContext *pContext)
{
  CDOTA_Item::Precache(this, pContext);
  PrecacheParticleSystem("particles/items_fx/healing_tango.vpcf", pContext);
}


// CDOTA_Item_EmptyBottle::OnSpellStart  (line 185, @0x0000000002d9d950, libserver.so)  // inlines: CEntityHandle, CSingleUserRecipientFilter, FastSqrt, Get, GetEntryIndex, GetHandleEntity, GetInstance, GetOwnerEntity, GetParent, GetSerialNumber, GetStoredRuneType, IndexToIdentity, Init, IsConsideredHero, Length2D, LookupEntity, ToDOTABaseNPC, ToDOTAPlayer, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, entindex, operator-, ~CSingleUserRecipientFilter
// calls: CGameSceneNode::GetOwnerEntity, CDOTA_BaseNPC::ActivateRuneEffect, CDOTA_Item_EmptyBottle::ClearStoredRune, CDOTA_Item::SetCurrentCharges, KeyValues::KeyValues, CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::SetFloat, CDOTABaseAbility::GetCursorTarget, CBaseEntity::GetAbsOrigin, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, CDOTA_Item_EmptyBottle::CheckForBottleHealChallengeEvent (21 total)
// strings: "modifier_bottle_regeneration", "Bottle.Drink"
void __fastcall CDOTA_Item_EmptyBottle::OnSpellStart(CDOTA_Item_EmptyBottle *const this)
{
  CGameSceneNode *v2; // rdi
  CDOTA_BaseNPC *v3; // rax
  int m_Value; // r12d
  float v5; // xmm1_4
  CBaseEntity *CursorTarget; // rax
  CBaseEntity *v7; // r12
  CGameSceneNode *m_pParent; // rdi
  CBaseEntity *OwnerEntity; // rax
  const Vector *AbsOrigin; // r14
  const Vector *v11; // rax
  float v12; // xmm1_4
  CDOTA_BaseNPC *Caster; // rax
  unsigned __int16 v14; // dx
  int v15; // esi
  int v16; // eax
  CEntityIdentity *v17; // rdx
  CEntityIdentity *v18; // rdx
  const CEntityInstance *m_pInstance; // r15
  CDOTA_BaseNPC *v20; // rax
  CEntityIndex v21; // eax
  KeyValues kv; // [rsp+20h] [rbp-190h] BYREF
  CSingleUserRecipientFilter filter; // [rsp+40h] [rbp-170h] BYREF
  unsigned __int64 v24; // [rsp+178h] [rbp-38h]

  v24 = __readfsqword(0x28u);
  if ( this->m_iStoredRuneType.m_Value == -1 )
  {
    if ( this->m_iCurrentCharges.m_Value > 0 )
    {
      KeyValues::KeyValues(&kv, "modifier_bottle_regeneration");
      CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "restore_time", -1, 0);
      KeyValues::SetFloat(&kv, "duration", v5);
      CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
      v7 = CursorTarget;
      if ( CursorTarget == 0 || !CursorTarget->m_bIsDOTANPC )
        v7 = 0;
      m_pParent = this->m_pGameSceneNode->m_pParent;
      if ( m_pParent != 0 )
      {
        OwnerEntity = CGameSceneNode::GetOwnerEntity(m_pParent);
        if ( OwnerEntity != 0 && OwnerEntity->m_bIsDOTANPC && (OwnerEntity[2].m_hEffectEntity.m_Value.m_Index & 3) != 0 )
        {
          if ( v7 == 0 )
            v7 = OwnerEntity;
          if ( v7->m_iTeamNum.m_Value == OwnerEntity->m_iTeamNum.m_Value )
          {
            AbsOrigin = CBaseEntity::GetAbsOrigin(OwnerEntity);
            v11 = CBaseEntity::GetAbsOrigin(v7);
            v12 = v11->y - AbsOrigin->y;
            if ( fsqrt(((v11->x - AbsOrigin->x) * (v11->x - AbsOrigin->x)) + (v12 * v12)) < 800.0 )
            {
              Caster = CDOTABaseAbility::GetCaster(this);
              CDOTA_BaseNPC::AddNewModifier(v7, Caster, this, "modifier_bottle_regeneration", &kv, 0);
              if ( v7->m_hOwnerEntity.m_Value.m_Index == -1 )
              {
                v14 = 0x7FFF;
                v15 = 0x7FFF;
              }
              else
              {
                v14 = v7->m_hOwnerEntity.m_Value.m_Index & 0x7FFF;
                v15 = v14;
              }
              v16 = (v7->m_hOwnerEntity.m_Value.m_Index >> 15 << 15) | v14 & 0x7FFF;
              if ( (v16 + 2) > 1 )
              {
                v17 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v15 >> 9];
                if ( v17 != 0 )
                {
                  v18 = &v17[v15 & 0x1FF];
                  if ( v18 != 0 && v16 == v18->m_EHandle.m_Index )
                  {
                    m_pInstance = v18->m_pInstance;
                    if ( v18->m_pInstance != 0 && (*(m_pInstance->_vptr_IHandleEntity + 140))(v18->m_pInstance) != 0 )
                    {
                      CRecipientFilter::CRecipientFilter(&filter);
                      filter._vptr_IRecipientFilter = &off_3FCB0D0;
                      CRecipientFilter::AddRecipient(&filter, m_pInstance);
                      v20 = CDOTABaseAbility::GetCaster(this);
                      v21.m_Data = CEntityInstance::GetEntityIndex(v20).m_Data;
                      CBaseEntity::EmitSound(&filter, v21, "Bottle.Drink", 0, 0.0, 0);
                      filter._vptr_IRecipientFilter = &off_3FCB0D0;
                      CRecipientFilter::~CRecipientFilter(&filter);
                    }
                  }
                }
              }
              CDOTA_Item_EmptyBottle::CheckForBottleHealChallengeEvent(this, v7);
            }
            CDOTA_Item::SpendCharge(this);
          }
        }
      }
      KeyValues::~KeyValues(&kv);
    }
  }
  else
  {
    v2 = this->m_pGameSceneNode->m_pParent;
    if ( v2 != 0 )
    {
      v3 = CGameSceneNode::GetOwnerEntity(v2);
      if ( v3 != 0 && v3->m_bIsDOTANPC )
      {
        m_Value = this->m_iStoredRuneType.m_Value;
        CDOTA_BaseNPC::ActivateRuneEffect(v3, m_Value);
        CDOTA_Item_EmptyBottle::ClearStoredRune(this);
        if ( m_Value == 5 )
          CDOTA_Item::SetCurrentCharges(this, this->m_iInitialCharges.m_Value - 1);
        else
          CDOTA_Item::SetCurrentCharges(this, this->m_iInitialCharges.m_Value);
      }
    }
  }
  (*(this->_vptr_IHandleEntity + 297))(this);
}


// CDOTA_Item_EmptyBottle::Think  (line 260, @0x0000000002d98850, libserver.so)  // inlines: DOTAGameRules, GetGameTime
// calls: CDOTA_Item::Think, CDOTABaseAbility::GetCaster, CDOTA_Item_EmptyBottle::ClearStoredRune, CDOTA_Item::SetCurrentCharges
void __fastcall CDOTA_Item_EmptyBottle::Think(CDOTA_Item_EmptyBottle *const this)
{
  float v2; // xmm1_4
  CDOTA_BaseNPC *Caster; // rax

  CDOTA_Item::Think(this);
  if ( this->m_iStoredRuneType.m_Value != -1 )
  {
    v2 = 0.0;
    if ( g_pGameRules != 0 )
      v2 = *&g_pGameRules[18].m_szQuestName[20];
    if ( v2 > (this->m_fStoredRuneTime + 120.0) )
    {
      Caster = CDOTABaseAbility::GetCaster(this);
      if ( (*(Caster->_vptr_IHandleEntity + 408))(Caster) != 0 )
      {
        (*(this->_vptr_IHandleEntity + 266))(this);
      }
      else
      {
        CDOTA_Item_EmptyBottle::ClearStoredRune(this);
        CDOTA_Item::SetCurrentCharges(this, this->m_iInitialCharges.m_Value);
      }
    }
  }
}


// CDOTA_Item_EmptyBottle::OnRune  (line 284, @0x0000000002d98430, libserver.so)  // inlines: CEntityHandle, CSingleUserRecipientFilter, Get, GetEntryIndex, GetHandleEntity, GetInstance, GetOwnerEntity, GetSerialNumber, GetTeamNumber, IndexToIdentity, Init, LookupEntity, QueueConcept, ToDOTABaseNPC, ToDOTAPlayer, entindex, ~CSingleUserRecipientFilter, ~CTeamRecipientFilter
// calls: CDOTABaseAbility::GetCaster, CEntityHandle::GetHandleEntity, CDOTA_Item::SetCurrentCharges, CDOTA_Speech::QueueConcept, CTeamRecipientFilter::CTeamRecipientFilter, GetGlobalTeam, CRecipientFilter::AddRecipientsByTeam, SendChatEventMessage, CEntityInstance::GetEntityIndex, CreateUnitEvent, CRecipientFilter::CRecipientFilter, CRecipientFilter::AddRecipient (17 total)
// strings: "Bottle.Cork"
bool __fastcall CDOTA_Item_EmptyBottle::OnRune(CDOTA_Item_EmptyBottle *const this, int iRuneType)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v6; // r13
  unsigned __int16 v7; // cx
  int v8; // esi
  int v9; // eax
  CEntityIdentity *v10; // rdx
  CEntityIdentity *v11; // rdx
  IHandleEntity *HandleEntity; // rax
  const CEntityInstance *m_pInstance; // r15
  CDOTA_Speech *m_pSpeech; // rdi
  CTeam *GlobalTeam; // rax
  int v16; // eax
  CEntityIndex v17; // eax
  CEntityIndex v18; // eax
  CTeamRecipientFilter filterbroadcast; // [rsp+30h] [rbp-2B0h] BYREF
  CSingleUserRecipientFilter filter; // [rsp+170h] [rbp-170h] BYREF
  unsigned __int64 v21; // [rsp+2A8h] [rbp-38h]

  v21 = __readfsqword(0x28u);
  if ( this->m_iStoredRuneType.m_Value != -1 )
    return 0;
  Caster = CDOTABaseAbility::GetCaster(this);
  v6 = Caster;
  if ( Caster == 0 || this->m_iCurrentCharges.m_Value == 3 && iRuneType == 5 )
    return 0;
  if ( Caster->m_hOwnerEntity.m_Value.m_Index == -1 )
  {
    v7 = 0x7FFF;
    v8 = 0x7FFF;
  }
  else
  {
    v7 = Caster->m_hOwnerEntity.m_Value.m_Index & 0x7FFF;
    v8 = v7;
  }
  v9 = (Caster->m_hOwnerEntity.m_Value.m_Index >> 15 << 15) | v7 & 0x7FFF;
  if ( (v9 + 2) <= 1
    || (v10 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v8 >> 9]) == 0
    || (v11 = &v10[v8 & 0x1FF]) == 0
    || v9 != v11->m_EHandle.m_Index
    || (m_pInstance = v11->m_pInstance, v11->m_pInstance == 0)
    || (*(m_pInstance->_vptr_IHandleEntity + 140))(v11->m_pInstance) == 0 )
  {
    HandleEntity = CEntityHandle::GetHandleEntity(&v6->m_hOwnerEntity.m_Value);
    if ( HandleEntity == 0 )
      return 0;
    if ( BYTE3(HandleEntity[42]._vptr_IHandleEntity) == 0 )
      return 0;
    m_pInstance = CEntityHandle::GetHandleEntity(&HandleEntity[67]._vptr_IHandleEntity + 1);
    if ( m_pInstance == 0 || (*(m_pInstance->_vptr_IHandleEntity + 140))(m_pInstance) == 0 )
      return 0;
  }
  if ( iRuneType == 5 )
    CDOTA_Item::SetCurrentCharges(this, 2);
  else
    CDOTA_Item::SetCurrentCharges(this, 3);
  m_pSpeech = v6->m_Speech.m_pSpeech;
  if ( m_pSpeech != 0 )
    CDOTA_Speech::QueueConcept(m_pSpeech, 15, 0.25, 0, 0, 1, 0, 0, 0);
  CTeamRecipientFilter::CTeamRecipientFilter(&filterbroadcast, v6->m_iTeamNum.m_Value, 1);
  GlobalTeam = GetGlobalTeam(1);
  CRecipientFilter::AddRecipientsByTeam(&filterbroadcast, GlobalTeam);
  v16 = (*(m_pInstance->_vptr_IHandleEntity + 393))(m_pInstance);
  SendChatEventMessage(DOTA_CHAT_MESSAGE::CHAT_MESSAGE_RUNE_BOTTLE, iRuneType, v16, -1, &filterbroadcast);
  v17.m_Data = CEntityInstance::GetEntityIndex(v6).m_Data;
  CreateUnitEvent(v17, 0, 10, EDOTAHeroChaseEventType::DOTA_HERO_CHASE_EVENT_TYPE_BOTTLE_RUNE);
  CRecipientFilter::CRecipientFilter(&filter);
  filter._vptr_IRecipientFilter = &off_3FCB0D0;
  CRecipientFilter::AddRecipient(&filter, m_pInstance);
  v18.m_Data = CEntityInstance::GetEntityIndex(v6).m_Data;
  CBaseEntity::EmitSound(&filter, v18, "Bottle.Cork", 0, 0.0, 0);
  CDOTA_Item_EmptyBottle::SetStoredRune(this, iRuneType);
  filter._vptr_IRecipientFilter = &off_3FCB0D0;
  CRecipientFilter::~CRecipientFilter(&filter);
  filterbroadcast._vptr_IRecipientFilter = &off_3FF4590;
  CRecipientFilter::~CRecipientFilter(&filterbroadcast);
  return 1;
}


// CDOTA_Item_EmptyBottle::SetStoredRune  (line 352, @0x0000000002d983d0, libserver.so)  // inlines: DOTAGameRules, GetGameTime, NetworkStateChanged, Set, operator=<int>
// callers: CDOTA_BaseNPC_Hero::OnLoadState, CDOTA_Item_EmptyBottle::OnRune
void __fastcall CDOTA_Item_EmptyBottle::SetStoredRune(CDOTA_Item_EmptyBottle *const this, int iRuneType)
{
  float v2; // xmm0_4
  bool v5; // zf

  v2 = 0.0;
  if ( g_pGameRules != 0 )
    v2 = *&g_pGameRules[18].m_szQuestName[20];
  v5 = this->m_iStoredRuneType.m_Value == iRuneType;
  this->m_fStoredRuneTime = v2;
  if ( !v5 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1000, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_iStoredRuneType.m_Value = iRuneType;
  }
}


// CDOTA_Item_EmptyBottle::ClearStoredRune  (line 358, @0x0000000002d987b0, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<int>
// callers: CDOTA_Item_EmptyBottle::CDOTA_Item_EmptyBottle, CDOTA_Item_EmptyBottle::Think, CDOTA_Item_EmptyBottle::OnSpellStart
void __fastcall CDOTA_Item_EmptyBottle::ClearStoredRune(CDOTA_Item_EmptyBottle *const this)
{
  this->m_fStoredRuneTime = 0.0;
  if ( this->m_iStoredRuneType.m_Value != -1 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1000, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_iStoredRuneType.m_Value = -1;
  }
}


// CDOTA_Item_EmptyBottle::ModifyAbilityPingMessage  (line 364, @0x0000000002d967a0, libserver.so)  // inlines: set_cooldown_seconds, set_has_cooldown_seconds
void __fastcall CDOTA_Item_EmptyBottle::ModifyAbilityPingMessage(
        CDOTA_Item_EmptyBottle *const this,
        CDOTAUserMsg_AbilityPing *const msg)
{
  unsigned int m_Value; // eax

  if ( *(msg + 8) == 1 )
  {
    m_Value = this->m_iStoredRuneType.m_Value;
    *(msg + 4) |= 8u;
    if ( m_Value <= 6 )
      *(msg + 9) = m_Value;
    else
      *(msg + 9) = 7;
  }
}


// CDOTA_Item_EmptyBottle::ParentGainedModifier  (line 383, @0x0000000002d94ac0, libserver.so)  // inlines: GetParent, ToDOTABaseNPC
// calls: CGameSceneNode::GetOwnerEntity, CDOTA_BaseNPC::FindModifierByName
void __fastcall CDOTA_Item_EmptyBottle::ParentGainedModifier(CDOTA_Item_EmptyBottle *const this, CDOTA_Buff *pBuff)
{
  CGameSceneNode *m_pParent; // rdi
  CBaseEntity *OwnerEntity; // rax
  CDOTA_BaseNPC *v5; // r12
  const char *v6; // rax
  CDOTA_Buff *ModifierByName; // rax

  m_pParent = this->m_pGameSceneNode->m_pParent;
  if ( m_pParent != 0 )
  {
    OwnerEntity = CGameSceneNode::GetOwnerEntity(m_pParent);
    v5 = OwnerEntity;
    if ( OwnerEntity != 0 && OwnerEntity->m_bIsDOTANPC )
    {
      v6 = (*(this->_vptr_IHandleEntity + 280))(this);
      ModifierByName = CDOTA_BaseNPC::FindModifierByName(v5, v6, 0);
      if ( ModifierByName != 0 )
        (*(ModifierByName->_vptr_CDOTA_Buff + 56))(ModifierByName);
    }
  }
}


// CDOTA_Item_EmptyBottle::CheckForBottleHealChallengeEvent  (line 397, @0x0000000002d988f0, libserver.so)  // inlines: DOTAGameRules
// calls: CDOTABaseAbility::GetCaster, CBaseEntity::GetAbsOrigin, CDOTAGamerules::CategorizePosition, CDOTA_CombatLog::AddBottleHealAllyEvent
// callers: CDOTA_Item_EmptyBottle::OnSpellStart
void __fastcall CDOTA_Item_EmptyBottle::CheckForBottleHealChallengeEvent(
        CDOTA_Item_EmptyBottle *const this,
        CDOTA_BaseNPC *pTarget)
{
  CDOTA_BaseNPC *Caster; // rax
  unsigned int v5; // r14d
  int v6; // eax
  CDOTA_BaseNPC *v7; // rax
  Vector vTargetLocation; // 0:^0.12
  Vector vCasterLocation; // 0:^10.12

  if ( pTarget != 0 && pTarget != CDOTABaseAbility::GetCaster(this) )
  {
    vTargetLocation = *CBaseEntity::GetAbsOrigin(pTarget);
    Caster = CDOTABaseAbility::GetCaster(this);
    vCasterLocation = *CBaseEntity::GetAbsOrigin(Caster);
    v5 = CDOTAGamerules::CategorizePosition(g_pGameRules, *&vTargetLocation.x, vTargetLocation.z) - 12;
    v6 = CDOTAGamerules::CategorizePosition(g_pGameRules, *&vCasterLocation.x, vCasterLocation.z);
    if ( v5 > 2 && (v6 - 12) > 2 )
    {
      v7 = CDOTABaseAbility::GetCaster(this);
      CDOTA_CombatLog::AddBottleHealAllyEvent(&g_DOTACombatLog, v7, pTarget);
    }
  }
}


// CDOTA_Item_EmptyBottle::ShouldUseAlternateDroppedItemModel  (line 419, @0x0000000002d93ce0, libserver.so)
bool __fastcall CDOTA_Item_EmptyBottle::ShouldUseAlternateDroppedItemModel(CDOTA_Item_EmptyBottle *const this)
{
  bool result; // al

  result = 0;
  if ( this->m_iCurrentCharges.m_Value == 0 )
    return this->m_iStoredRuneType.m_Value == -1;
  return result;
}


// CDOTA_Modifier_Item_EmptyBottle::~CDOTA_Modifier_Item_EmptyBottle  (line 430, @0x0000000002da0fb0, libserver.so)  // inlines: ~CDOTA_Buff_Item
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_EmptyBottle::~CDOTA_Modifier_Item_EmptyBottle(
        CDOTA_Modifier_Item_EmptyBottle *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_EmptyBottle::~CDOTA_Modifier_Item_EmptyBottle  (line 430, @0x0000000002da0fd0, libserver.so)  // inlines: ~CDOTA_Buff_Item, ~CDOTA_Modifier_Item_EmptyBottle
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_EmptyBottle::~CDOTA_Modifier_Item_EmptyBottle(
        CDOTA_Modifier_Item_EmptyBottle *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_EmptyBottle::DeclareFunctions  (line 449, @0x0000000002d93d00, libserver.so)
void __fastcall CDOTA_Modifier_Item_EmptyBottle::DeclareFunctions(CDOTA_Modifier_Item_EmptyBottle *const this)
{
  ;
}


// CDOTA_Modifier_Item_EmptyBottle::OnCreated  (line 453, @0x0000000002d9c510, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Buff::StartIntervalThink
// strings: "movement_speed_percent_bonus"
void __fastcall CDOTA_Modifier_Item_EmptyBottle::OnCreated(CDOTA_Modifier_Item_EmptyBottle *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  float v4; // xmm1_4

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->movement_speed_percent_bonus = CDOTABaseAbility::GetLevelSpecialValueFor<int>(
                                           Ability,
                                           "movement_speed_percent_bonus",
                                           -1,
                                           0);
  else
    this->movement_speed_percent_bonus = 0;
  CDOTA_Buff::StartIntervalThink(this, 1.0, v4);
}


// CDOTA_Modifier_Item_EmptyBottle::OnIntervalThink  (line 464, @0x0000000002d94c00, libserver.so)
// calls: CDOTA_Buff::GetAbility, __dynamic_cast, CDOTA_Buff::GetParent, CDOTA_BaseNPC::FindModifierByName, CDOTA_Item::SetCurrentCharges
// strings: "modifier_fountain_aura_buff"
// globals: `typeinfo for'CDOTA_Item_EmptyBottle
void __fastcall CDOTA_Modifier_Item_EmptyBottle::OnIntervalThink(CDOTA_Modifier_Item_EmptyBottle *const this)
{
  CDOTABaseAbility *Ability; // rax
  CDOTA_Item *v3; // rax
  CDOTA_Item *v4; // rbx
  CDOTA_BaseNPC *Parent; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    v3 = __dynamic_cast(Ability, &`typeinfo for'CDOTABaseAbility, &`typeinfo for'CDOTA_Item_EmptyBottle, 0);
    v4 = v3;
    if ( v3 != 0
      && LODWORD(v3[1]._vptr_IHandleEntity) == -1
      && v3->m_iCurrentCharges.m_Value != v3->m_iInitialCharges.m_Value )
    {
      Parent = CDOTA_Buff::GetParent(this);
      if ( CDOTA_BaseNPC::FindModifierByName(Parent, "modifier_fountain_aura_buff", 0) != 0 )
      {
        CDOTA_Item::SetCurrentCharges(v4, v4->m_iInitialCharges.m_Value);
        (*(v4->_vptr_IHandleEntity + 297))(v4);
      }
    }
  }
}


// CDOTA_Modifier_BottleRegeneration::~CDOTA_Modifier_BottleRegeneration  (line 485, @0x0000000002da1340, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_BottleRegeneration::~CDOTA_Modifier_BottleRegeneration(
        CDOTA_Modifier_BottleRegeneration *const this)
{
  this->_vptr_CDOTA_Buff = &off_46DDA30;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_BottleRegeneration::~CDOTA_Modifier_BottleRegeneration  (line 485, @0x0000000002da1360, libserver.so)  // inlines: ~CDOTA_Modifier_BottleRegeneration
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_BottleRegeneration::~CDOTA_Modifier_BottleRegeneration(
        CDOTA_Modifier_BottleRegeneration *const this)
{
  this->_vptr_CDOTA_Buff = &off_46DDA30;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_BottleRegeneration::IsPurgable  (line 493, @0x0000000002d9eb80, libserver.so)
bool __fastcall CDOTA_Modifier_BottleRegeneration::IsPurgable(CDOTA_Modifier_BottleRegeneration *const this)
{
  return 0;
}


// CDOTA_Modifier_BottleRegeneration::DeclareFunctions  (line 511, @0x0000000002d93d10, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_BottleRegeneration::GetModifierConstantHealthRegen(CModifierParams const&), CDOTA_Modifier_BottleRegeneration::GetModifierConstantManaRegen(CModifierParams const&), CDOTA_Modifier_BottleRegeneration::OnTakeDamage(CModifierParams const&)
void __fastcall CDOTA_Modifier_BottleRegeneration::DeclareFunctions(CDOTA_Modifier_BottleRegeneration *const this)
{
  this->m_Functions[56].__pfn = CDOTA_Modifier_BottleRegeneration::GetModifierConstantHealthRegen;
  this->m_Functions[56].__delta = 0;
  this->m_Functions[52].__delta = 0;
  this->m_Functions[52].__pfn = CDOTA_Modifier_BottleRegeneration::GetModifierConstantManaRegen;
  this->m_Functions[134].__pfn = CDOTA_Modifier_BottleRegeneration::OnTakeDamage;
  this->m_Functions[134].__delta = 0;
}


// CDOTA_Modifier_BottleRegeneration::OnCreated  (line 518, @0x0000000002d9c890, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Buff::StartIntervalThink
// strings: "health_restore", "mana_restore"
void __fastcall CDOTA_Modifier_BottleRegeneration::OnCreated(
        CDOTA_Modifier_BottleRegeneration *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  float v5; // xmm1_4

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability == 0 )
  {
    this->health_restore = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
LABEL_6:
    this->mana_restore = 0;
    goto LABEL_4;
  }
  this->health_restore = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "health_restore", -1, 0);
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 == 0 )
    goto LABEL_6;
LABEL_3:
  this->mana_restore = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "mana_restore", -1, 0);
LABEL_4:
  this->m_fHealingDone = 0.0;
  CDOTA_Buff::StartIntervalThink(this, 0.1, v5);
}


// CDOTA_Modifier_BottleRegeneration::OnDestroy  (line 535, @0x0000000002d94d00, libserver.so)
// calls: CDOTA_Buff::GetCaster, CDOTA_Buff::GetParent, CDOTA_CombatLog::AddHealthEvent
void __fastcall CDOTA_Modifier_BottleRegeneration::OnDestroy(CDOTA_Modifier_BottleRegeneration *const this)
{
  int v2; // r13d
  CDOTA_BaseNPC *Caster; // r12
  CDOTA_BaseNPC *Parent; // rax

  v2 = (this->m_fHealingDone + 0.5);
  Caster = CDOTA_Buff::GetCaster(this);
  Parent = CDOTA_Buff::GetParent(this);
  CDOTA_CombatLog::AddHealthEvent(&g_DOTACombatLog, 1, Parent, Caster, 0, v2, 0, 0, 0);
}


// CDOTA_Modifier_BottleRegeneration::OnIntervalThink  (line 542, @0x0000000002d94e10, libserver.so)
// calls: CDOTA_Buff::GetParent, CBaseEntity::GetHealth
void __fastcall CDOTA_Modifier_BottleRegeneration::OnIntervalThink(CDOTA_Modifier_BottleRegeneration *const this)
{
  CDOTA_BaseNPC *Parent; // rax
  int Health; // r12d
  CDOTA_BaseNPC *v4; // rax
  __m128i v5; // xmm2

  Parent = CDOTA_Buff::GetParent(this);
  Health = CBaseEntity::GetHealth(Parent);
  v4 = CDOTA_Buff::GetParent(this);
  if ( Health != (*(v4->_vptr_IHandleEntity + 156))(v4) )
  {
    *v5.m128i_i32 = this->health_restore;
    this->m_fHealingDone = (0.1 * (COERCE_FLOAT(_mm_cvtsi128_si32(v5)) / (*(this->_vptr_CDOTA_Buff + 31))(this)))
                         + this->m_fHealingDone;
  }
}


// CDOTA_Modifier_BottleRegeneration::GetModifierConstantHealthRegen  (line 552, @0x0000000002d93d70, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_BottleRegeneration::GetModifierConstantHealthRegen(
        CDOTA_Modifier_BottleRegeneration *const this,
        const CModifierParams *const params)
{
  float v2; // xmm0_4
  __int64 v3; // xmm1_8
  unsigned int v5; // [rsp+Ch] [rbp-4h]
  ModifierVariant_t result; // 0:rax.16

  *&v5 = this->health_restore;
  v2 = (*(this->_vptr_CDOTA_Buff + 31))(this, params);
  v3 = v5;
  result.m_szVal = 0;
  *&v3 = *&v5 / v2;
  *&result.m_eType = (v3 << 32) | 1;
  return result;
}


// CDOTA_Modifier_BottleRegeneration::GetModifierConstantManaRegen  (line 557, @0x0000000002d93db0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_BottleRegeneration::GetModifierConstantManaRegen(
        CDOTA_Modifier_BottleRegeneration *const this,
        const CModifierParams *const params)
{
  float v2; // xmm0_4
  __int64 v3; // xmm1_8
  unsigned int v5; // [rsp+Ch] [rbp-4h]
  ModifierVariant_t result; // 0:rax.16

  *&v5 = this->mana_restore;
  v2 = (*(this->_vptr_CDOTA_Buff + 31))(this, params);
  v3 = v5;
  result.m_szVal = 0;
  *&v3 = *&v5 / v2;
  *&result.m_eType = (v3 << 32) | 1;
  return result;
}


// CDOTA_Modifier_BottleRegeneration::OnTakeDamage  (line 562, @0x0000000002d978b0, libserver.so)  // inlines: AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsOwnedByAnyPlayer, IsValid, LookupEntity, ToDOTABaseNPC, UnitNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CDOTA_Buff::Destroy
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_BottleRegeneration::OnTakeDamage(
        CDOTA_Modifier_BottleRegeneration *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *m_pInstance; // rbx
  uint32 v7; // eax
  CEntityIdentity *v8; // rdx
  CEntityIdentity *v9; // rdx
  CEntityInstance *v11; // r13
  int m_Id; // eax

  m_Index = params->hunit.m_Index;
  if ( m_Index + 2 <= 1
    || (v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hunit.m_Index) >> 9) & 0x3F]) == 0
    || (v5 = &v4[params->hunit.m_Index & 0x1FF]) == 0
    || m_Index != v5->m_EHandle.m_Index
    || (m_pInstance = v5->m_pInstance, v5->m_pInstance == 0)
    || !m_pInstance->m_bIsDOTANPC )
  {
    m_pInstance = 0;
  }
  v7 = params->hattacker.m_Index;
  if ( v7 + 2 > 1 )
  {
    v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F];
    if ( v8 != 0 )
    {
      v9 = &v8[params->hattacker.m_Index & 0x1FF];
      if ( v9 != 0 && v7 == v9->m_EHandle.m_Index )
      {
        v11 = v9->m_pInstance;
        if ( v9->m_pInstance != 0
          && BYTE3(v11[7]._vptr_IHandleEntity) != 0
          && m_pInstance != 0
          && params->fDamage > 0.0
          && CDOTA_Buff::GetParent(this) == m_pInstance
          && (v11[61].m_hPrivateScope.m_hScope != 0
           || ((m_Id = v11[43].m_iszPrivateVScripts.u.m_Id) & 1) != 0
           || (m_Id & 0x800) != 0) )
        {
          CDOTA_Buff::Destroy(this, 0, 0, 0);
        }
      }
    }
  }
  return 1uLL;
}


