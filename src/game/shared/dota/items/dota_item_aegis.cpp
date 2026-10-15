// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/items/dota_item_aegis.cpp:138
class CDOTA_Modifier_Item_Aegis : public CDOTA_Buff_Item {
public:

private:

	float reincarnate_time;  // +0xba8
	CDOTA_Modifier_Item_Aegis();
	virtual void OnCreated(KeyValues *);
	virtual void DeclareFunctions();
	ModifierVariant_t ReincarnateTime(const CModifierParams &);
	virtual int GetAttributes();
	virtual ~CDOTA_Modifier_Item_Aegis();

	// vtable[57] OnCreated
	// vtable[65] DeclareFunctions
	// vtable[7] GetAttributes
	// sizeof = 2992
};

// src/game/shared/dota/items/dota_item_aegis.cpp:201
class CDOTA_Modifier_Aegis_Regen : public CDOTA_Buff {
public:

	CDOTA_Modifier_Aegis_Regen();
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierConstantHealthRegen(const CModifierParams &);
	ModifierVariant_t GetModifierConstantManaRegen(const CModifierParams &);
	ModifierVariant_t OnTakeDamage(const CModifierParams &);
	virtual const char * GetEffectName();
	virtual const char * GetTexture();
	virtual ~CDOTA_Modifier_Aegis_Regen();

	// vtable[65] DeclareFunctions
	// vtable[67] GetEffectName
	// vtable[32] GetTexture
	// sizeof = 2984
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Item_Aegis::Think  (line 21, @0x0000000002d5ccb0, libserver.so)  // inlines: DOTAGameRules, GetGameTime, GetParent, ToDOTABaseNPC
// calls: CDOTA_Item::Think, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CGameSceneNode::GetOwnerEntity, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_BaseNPC::AddNewModifier, DOTA_EmitSound, KeyValues::~KeyValues, UTIL_Remove, __stack_chk_fail, _Unwind_Resume
// strings: "modifier_aegis_regen", "Aegis.Expire"
void __fastcall CDOTA_Item_Aegis::Think(CDOTA_Item_Aegis *const this)
{
  float v2; // r12d
  CGameSceneNode *m_pParent; // rdi
  CBaseEntity *OwnerEntity; // rax
  CDOTA_BaseNPC *v5; // r12
  float v6; // xmm1_4
  float m_fEquipTime; // [rsp+Ch] [rbp-44h]
  KeyValues kv; // [rsp+10h] [rbp-40h] BYREF
  unsigned __int64 v9; // [rsp+28h] [rbp-28h]

  v9 = __readfsqword(0x28u);
  CDOTA_Item::Think(this);
  if ( this->m_fEquipTime > 0.0 )
  {
    v2 = g_pGameRules != 0 ? *&g_pGameRules[18].m_szQuestName[20] : COERCE_FLOAT(_mm_cvtsi128_si32(0LL));
    m_fEquipTime = this->m_fEquipTime;
    if ( v2 > (CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "disappear_time", -1, 0) + m_fEquipTime) )
    {
      m_pParent = this->m_pGameSceneNode->m_pParent;
      if ( m_pParent != 0 )
      {
        OwnerEntity = CGameSceneNode::GetOwnerEntity(m_pParent);
        v5 = OwnerEntity;
        if ( OwnerEntity != 0
          && OwnerEntity->m_bIsDOTANPC
          && (*(OwnerEntity->_vptr_IHandleEntity + 408))(OwnerEntity) != 0 )
        {
          KeyValues::KeyValues(&kv, "modifier_aegis_regen");
          KeyValues::SetFloat(&kv, "duration", v6);
          CDOTA_BaseNPC::AddNewModifier(v5, v5, this, "modifier_aegis_regen", &kv, 0);
          DOTA_EmitSound(6, "Aegis.Expire", v5);
          KeyValues::~KeyValues(&kv);
        }
      }
      UTIL_Remove(this);
    }
  }
}


// CDOTA_Item_Aegis::OnEquip  (line 43, @0x0000000002d5ff10, libserver.so)  // inlines: CEntityHandle, DOTAGameRules, Get, GetEntryIndex, GetGameTime, GetHandleEntity, GetInstance, GetOwnerEntity, GetParent, GetSerialNumber, GetTeamNumber, IndexToIdentity, Init, LookupEntity, QueueConcept, ToDOTABaseNPC, ToDOTABaseNPCHero, ToDOTAPlayer, entindex, set_event_team, set_event_type, set_has_event_team, set_has_event_type, set_has_killer_account_id, set_killer_account_id
// calls: CDOTA_Item::OnEquip, CDOTABaseAbility::GetCaster, CGameSceneNode::GetOwnerEntity, CDOTA_Speech::QueueConcept, CDOTA_Item::GetItemID, CDOTA_BaseNPC_Hero::AddItemPurchasedHistory, CDOTA_PlayerResource::AddAegisPickup, CDOTA_BaseNPC_Hero::PerformAutoTaunt, SendChatEventMessage, RecordSocialFeedMatchEvent, CDOTA_PlayerResource::IsValidTeamPlayerID, CMsgTournamentItemEvent::CMsgTournamentItemEvent (19 total)
// strings: "tournament_drops"
void __fastcall CDOTA_Item_Aegis::OnEquip(CDOTA_Item_Aegis *const this)
{
  CGameSceneNode *m_pParent; // rdi
  CBaseEntity *OwnerEntity; // rax
  unsigned __int16 v4; // dx
  int v5; // esi
  int v6; // eax
  CEntityIdentity *v7; // rdx
  CEntityIdentity *v8; // rdx
  CDOTA_Speech *m_pSpeech; // rdi
  CDOTA_BaseNPC *v10; // rax
  CDOTA_BaseNPC_Hero *v11; // rbx
  uint32 ItemID; // eax
  CEntityInstance *m_pInstance; // rbx
  float v14; // xmm0_4
  int v15; // eax
  float v16; // xmm1_4
  int m_iKillerTeam; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  bool v22; // zf
  int v23; // eax
  bool v24; // r13
  int v25; // eax
  CDOTA_BaseNPC *Caster; // rax
  CEntityIndex v27; // eax
  int v28; // eax
  int v29; // eax
  _DWORD v30[4]; // [rsp+10h] [rbp-80h] BYREF
  int v31; // [rsp+20h] [rbp-70h]
  int SteamID; // [rsp+28h] [rbp-68h]
  int v33; // [rsp+30h] [rbp-60h]
  _BOOL4 v34; // [rsp+48h] [rbp-48h]

  CDOTA_Item::OnEquip(this);
  if ( !CDOTABaseAbility::GetCaster(this)->m_bIsIllusion.m_Value )
  {
    m_pParent = this->m_pGameSceneNode->m_pParent;
    OwnerEntity = 0;
    if ( m_pParent != 0 )
      OwnerEntity = CGameSceneNode::GetOwnerEntity(m_pParent);
    if ( OwnerEntity->m_hOwnerEntity.m_Value.m_Index == -1 )
    {
      v4 = 0x7FFF;
      v5 = 0x7FFF;
    }
    else
    {
      v4 = OwnerEntity->m_hOwnerEntity.m_Value.m_Index & 0x7FFF;
      v5 = v4;
    }
    v6 = (OwnerEntity->m_hOwnerEntity.m_Value.m_Index >> 15 << 15) | v4 & 0x7FFF;
    v30[0] = v6;
    if ( (v6 + 2) > 1 )
    {
      v7 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v5 >> 9];
      if ( v7 != 0 )
      {
        v8 = &v7[v5 & 0x1FF];
        if ( v8 != 0 && v6 == v8->m_EHandle.m_Index )
        {
          m_pInstance = v8->m_pInstance;
          if ( v8->m_pInstance != 0 && (*(m_pInstance->_vptr_IHandleEntity + 140))(v8->m_pInstance) != 0 )
          {
            v14 = 0.0;
            if ( g_pGameRules != 0 )
              v14 = *&g_pGameRules[18].m_szQuestName[20];
            this->m_fEquipTime = v14;
            v15 = (*(m_pInstance->_vptr_IHandleEntity + 393))(m_pInstance);
            CDOTA_PlayerResource::AddAegisPickup(g_pDOTAPlayerResource, v15);
            m_iKillerTeam = this->m_iKillerTeam;
            if ( m_iKillerTeam < 0 || m_iKillerTeam == HIBYTE(m_pInstance[7].m_CScriptComponent) )
            {
              v24 = 0;
              v28 = (*(m_pInstance->_vptr_IHandleEntity + 393))(m_pInstance);
              SendChatEventMessage(DOTA_CHAT_MESSAGE::CHAT_MESSAGE_AEGIS, 0, v28, 0);
            }
            else
            {
              if ( BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
                && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
              {
                CDOTA_BaseNPC_Hero::PerformAutoTaunt(m_pInstance, COERCE_DOUBLE(1065353216), v16, 1);
              }
              v18 = (*(m_pInstance->_vptr_IHandleEntity + 393))(m_pInstance);
              SendChatEventMessage(DOTA_CHAT_MESSAGE::CHAT_MESSAGE_AEGIS_STOLEN, 0, v18, 0);
              v19 = (*(m_pInstance->_vptr_IHandleEntity + 393))(m_pInstance);
              RecordSocialFeedMatchEvent(v19, ESocialFeedMatchEventType::k_ESocialFeedMatchEventType_AegisSnatch);
              v20 = (*(m_pInstance->_vptr_IHandleEntity + 393))(m_pInstance);
              if ( CDOTA_PlayerResource::IsValidTeamPlayerID(g_pDOTAPlayerResource, v20) )
              {
                v29 = (*(m_pInstance->_vptr_IHandleEntity + 393))(m_pInstance);
                ++*(g_pDOTAPlayerResource + v29 + 8550);
              }
              CMsgTournamentItemEvent::CMsgTournamentItemEvent(v30);
              v21 = v31;
              v22 = this->m_iKillerTeam == 3;
              v33 = 5;
              LOBYTE(v21) = v31 | 0x84;
              v31 = v21;
              v34 = v22;
              v23 = (*(m_pInstance->_vptr_IHandleEntity + 393))(m_pInstance);
              SteamID = CDOTA_PlayerResource::GetSteamID(g_pDOTAPlayerResource, v23);
              v31 |= 1u;
              TournamentItemEvent(v30, "tournament_drops");
              v24 = 1;
              CMsgTournamentItemEvent::~CMsgTournamentItemEvent(v30);
            }
            v25 = (*(m_pInstance->_vptr_IHandleEntity + 393))(m_pInstance);
            CDOTA_CombatLog::AddAegisTakenEvent(&g_DOTACombatLog, v25, v24);
            Caster = CDOTABaseAbility::GetCaster(this);
            v27.m_Data = CEntityInstance::GetEntityIndex(Caster).m_Data;
            CreateUnitEvent(v27, 0, 19, EDOTAHeroChaseEventType::DOTA_HERO_CHASE_EVENT_TYPE_PICKUP_AEGIS);
          }
        }
      }
    }
    m_pSpeech = CDOTABaseAbility::GetCaster(this)->m_Speech.m_pSpeech;
    if ( m_pSpeech != 0 )
      CDOTA_Speech::QueueConcept(m_pSpeech, 10, 1.0, 0, 5, 1, 0, 0, 0);
    v10 = CDOTABaseAbility::GetCaster(this);
    v11 = v10;
    if ( v10 != 0 && (v10->m_iUnitType & 1) != 0 )
    {
      ItemID = CDOTA_Item::GetItemID(this);
      CDOTA_BaseNPC_Hero::AddItemPurchasedHistory(v11, ItemID, 0);
    }
  }
}


// CDOTA_Item_Aegis::OnDestroyed  (line 104, @0x0000000002d60280, libserver.so)  // inlines: ToDOTABaseNPC, ToDOTAPlayer, entindex, set_event_team, set_event_type, set_has_event_team, set_has_event_type, set_has_killer_account_id, set_killer_account_id
// calls: SendChatEventMessage, CMsgTournamentItemEvent::CMsgTournamentItemEvent, CDOTA_PlayerResource::GetSteamID, TournamentItemEvent, CEntityInstance::GetEntityIndex, CreateUnitEvent, CMsgTournamentItemEvent::~CMsgTournamentItemEvent, _Unwind_Resume
// strings: "tournament_drops"
void __fastcall CDOTA_Item_Aegis::OnDestroyed(CDOTA_Item_Aegis *const this, CBaseEntity *pAttacker)
{
  __int64 v3; // r12
  int v4; // eax
  int v5; // eax
  bool v6; // zf
  int v7; // eax
  CEntityIndex v8; // eax
  _BYTE v9[16]; // [rsp+0h] [rbp-80h] BYREF
  int v10; // [rsp+10h] [rbp-70h]
  int SteamID; // [rsp+18h] [rbp-68h]
  int v12; // [rsp+20h] [rbp-60h]
  _BOOL4 v13; // [rsp+38h] [rbp-48h]

  if ( pAttacker != 0 && pAttacker->m_bIsDOTANPC )
  {
    v3 = (*(pAttacker->_vptr_IHandleEntity + 413))(pAttacker);
    if ( v3 != 0 && (*(*v3 + 1120LL))(v3) != 0 )
    {
      v4 = (*(*v3 + 3144LL))(v3);
      SendChatEventMessage(DOTA_CHAT_MESSAGE::CHAT_MESSAGE_DENIED_AEGIS, 0, v4, 0);
      CMsgTournamentItemEvent::CMsgTournamentItemEvent(v9);
      v5 = v10;
      v6 = pAttacker->m_iTeamNum.m_Value == 3;
      v12 = 4;
      LOBYTE(v5) = v10 | 0x84;
      v10 = v5;
      v13 = v6;
      v7 = (*(*v3 + 3144LL))(v3);
      SteamID = CDOTA_PlayerResource::GetSteamID(g_pDOTAPlayerResource, v7);
      v10 |= 1u;
      TournamentItemEvent(v9, "tournament_drops");
      v8.m_Data = CEntityInstance::GetEntityIndex(pAttacker).m_Data;
      CreateUnitEvent(v8, 0, 150, EDOTAHeroChaseEventType::DOTA_HERO_CHASE_EVENT_TYPE_AEGIS_DENY);
      CMsgTournamentItemEvent::~CMsgTournamentItemEvent(v9);
    }
  }
}


// CDOTA_Item_Aegis::GetReclaimTime  (line 126, @0x0000000002d5ce20, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>
// callers: CDOTA_RoshanSpawner::RoshanThink
float __fastcall CDOTA_Item_Aegis::GetReclaimTime(CDOTA_Item_Aegis *const this)
{
  float result; // xmm0_4
  float m_fEquipTime; // [rsp-4h] [rbp-Ch]

  result = 0.0;
  if ( this->m_fEquipTime > 0.0 )
  {
    m_fEquipTime = this->m_fEquipTime;
    return CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "disappear_time", -1, 0) + m_fEquipTime;
  }
  return result;
}


// CDOTA_Modifier_Item_Aegis::~CDOTA_Modifier_Item_Aegis  (line 138, @0x0000000002d63070, libserver.so)  // inlines: ~CDOTA_Buff_Item
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_Aegis::~CDOTA_Modifier_Item_Aegis(CDOTA_Modifier_Item_Aegis *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_Aegis::~CDOTA_Modifier_Item_Aegis  (line 138, @0x0000000002d63090, libserver.so)  // inlines: ~CDOTA_Buff_Item, ~CDOTA_Modifier_Item_Aegis
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_Aegis::~CDOTA_Modifier_Item_Aegis(CDOTA_Modifier_Item_Aegis *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_Aegis::GetAttributes  (line 147, @0x0000000002d60550, libserver.so)
int __fastcall CDOTA_Modifier_Item_Aegis::GetAttributes(CDOTA_Modifier_Item_Aegis *const this)
{
  return 3;
}


// CDOTA_Modifier_Item_Aegis::OnCreated  (line 156, @0x0000000002d5cfe0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, GetLevelSpecialValueFor<float>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>
// strings: "reincarnate_time"
void __fastcall CDOTA_Modifier_Item_Aegis::OnCreated(CDOTA_Modifier_Item_Aegis *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->reincarnate_time = CDOTABaseAbility::GetLevelSpecialValueFor<float>(Ability, "reincarnate_time", -1, 0);
  else
    this->reincarnate_time = 0.0;
}


// CDOTA_Modifier_Item_Aegis::DeclareFunctions  (line 161, @0x0000000002d53a70, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Item_Aegis::ReincarnateTime(CModifierParams const&)
void __fastcall CDOTA_Modifier_Item_Aegis::DeclareFunctions(CDOTA_Modifier_Item_Aegis *const this)
{
  this->m_Functions[73].__pfn = CDOTA_Modifier_Item_Aegis::ReincarnateTime;
  this->m_Functions[73].__delta = 0;
}


// CDOTA_Modifier_Item_Aegis::ReincarnateTime  (line 166, @0x0000000002d56e30, libserver.so)  // inlines: CBroadcastRecipientFilter, CReliableBroadcastRecipientFilter, DOTAGameRules, GetTeamNumber, GetTimeOfDay, IsDaytime, RemapValClamped, Vector, clamp<float, float>, ~CBroadcastRecipientFilter, ~CReliableBroadcastRecipientFilter
// calls: CDOTA_Buff_Item::GetItem, CDOTA_Item::RemoveItem, CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin, CDOTAFogOfWarSystem::AddTempViewer, CRecipientFilter::CRecipientFilter, CRecipientFilter::AddAllPlayers, CRecipientFilter::MakeReliable, CDOTA_BaseNPC::GetOpposingTeamNumber, GetGlobalTeam, CRecipientFilter::RemoveRecipientsByTeam, CRecipientFilter::AddRecipient (22 total)
// strings: "particles/items_fx/aegis_timer.vpcf", "particles/items_fx/aegis_respawn_timer.vpcf", "Aegis.Timer"
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Aegis::ReincarnateTime(
        CDOTA_Modifier_Item_Aegis *const this,
        const CModifierParams *const params)
{
  CDOTA_Item *Item; // rax
  int v5; // xmm0_4
  CDOTA_BaseNPC *Parent; // rax
  const Vector *AbsOrigin; // r12
  CDOTA_BaseNPC *v8; // rax
  CDOTA_BaseNPC *v9; // rax
  int OpposingTeamNumber; // eax
  CTeam *GlobalTeam; // rax
  CDOTA_BaseNPC *v12; // rax
  CTeam *v13; // rax
  CDOTA_BaseNPC *v14; // rax
  const CEntityInstance *v15; // rax
  CTeam *v16; // rax
  CDOTA_BaseNPC *v17; // r13
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_ParticleManager *v19; // rax
  CDOTA_ParticleManager *v20; // rax
  CDOTA_ParticleManager *v21; // rax
  CDOTA_BaseNPC *v22; // r14
  CDOTA_ParticleManager *v23; // rax
  CDOTA_ParticleManager *v24; // rax
  CDOTA_ParticleManager *v25; // rax
  CDOTA_BaseNPC *v26; // rax
  float v27; // xmm2_4
  float flDuration; // [rsp+8h] [rbp-178h]
  float flRadius; // [rsp+Ch] [rbp-174h]
  double v30; // [rsp+10h] [rbp-170h]
  CReliableBroadcastRecipientFilter filter; // [rsp+20h] [rbp-160h] BYREF
  unsigned __int64 v32; // [rsp+158h] [rbp-28h]
  ModifierVariant_t result; // 0:rax.16

  v32 = __readfsqword(0x28u);
  if ( !params->bDoNotConsume && CDOTA_Buff_Item::GetItem(this) != 0 )
  {
    Item = CDOTA_Buff_Item::GetItem(this);
    CDOTA_Item::RemoveItem(Item);
    v5 = 1145569280;
    if ( LOBYTE(g_pGameRules[14].m_nQuestPhase) != 0 )
      goto LABEL_5;
    if ( BYTE1(g_pGameRules[14].m_nQuestPhase) != 0 )
      goto LABEL_5;
    v27 = *&g_pGameRules[18].m_szQuestName[28] / 65535.0;
    if ( v27 < 0.0 )
      goto LABEL_5;
    if ( v27 <= 1.0 )
    {
      if ( (v27 + 0.0) >= 0.25 )
      {
        if ( v27 < 0.0 )
        {
LABEL_15:
          v5 = 1155596288;
          goto LABEL_5;
        }
        if ( v27 <= 1.0 )
        {
          if ( (v27 + 0.0) > 0.75 )
          {
            v5 = 1145569280;
            goto LABEL_5;
          }
          goto LABEL_15;
        }
      }
    }
    else if ( v27 < 0.0 )
    {
      goto LABEL_15;
    }
LABEL_5:
    flDuration = this->reincarnate_time;
    flRadius = *&v5;
    Parent = CDOTA_Buff::GetParent(this);
    AbsOrigin = CBaseEntity::GetAbsOrigin(Parent);
    v8 = CDOTA_Buff::GetParent(this);
    CDOTAFogOfWarSystem::AddTempViewer(
      &g_DOTAFogOfWarSystem,
      FoWViewerType_t::FOWVIEWERTYPE_REINCARNATION,
      v8->m_iTeamNum.m_Value,
      AbsOrigin,
      flRadius,
      flDuration,
      1);
    CRecipientFilter::CRecipientFilter(&filter);
    filter._vptr_IRecipientFilter = &off_3FB63F0;
    CRecipientFilter::AddAllPlayers(&filter);
    filter._vptr_IRecipientFilter = &off_3FCB130;
    CRecipientFilter::MakeReliable(&filter);
    v9 = CDOTA_Buff::GetParent(this);
    OpposingTeamNumber = CDOTA_BaseNPC::GetOpposingTeamNumber(v9);
    GlobalTeam = GetGlobalTeam(OpposingTeamNumber);
    CRecipientFilter::RemoveRecipientsByTeam(&filter, GlobalTeam);
    v12 = CDOTA_Buff::GetParent(this);
    v13 = GetGlobalTeam(v12->m_iTeamNum.m_Value);
    CRecipientFilter::RemoveRecipientsByTeam(&filter, v13);
    v14 = CDOTA_Buff::GetParent(this);
    v15 = (*(v14->_vptr_IHandleEntity + 413))(v14);
    CRecipientFilter::AddRecipient(&filter, v15);
    v16 = GetGlobalTeam(1);
    CRecipientFilter::AddRecipientsByTeam(&filter, v16);
    v17 = CDOTA_Buff::GetParent(this);
    ParticleManager = GetParticleManager();
    LODWORD(v17) = CDOTA_ParticleManager::CreateParticle(
                     ParticleManager,
                     "particles/items_fx/aegis_timer.vpcf",
                     1,
                     v17,
                     &filter,
                     0);
    HIDWORD(v30) = 1065353216;
    *&v30 = this->reincarnate_time;
    v19 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControl(v19, v17, 1, v30, 1.0);
    v20 = GetParticleManager();
    CDOTA_ParticleManager::ReleaseParticleIndex(v20, v17);
    v21 = GetParticleManager();
    LODWORD(v17) = CDOTA_ParticleManager::CreateParticle(v21, "particles/items_fx/aegis_respawn_timer.vpcf", 2, 0, 0, 0);
    v22 = CDOTA_Buff::GetParent(this);
    v23 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v23, v17, 0, v22, 1, 0, vec3_invalid, 1);
    HIDWORD(v30) = 1065353216;
    *&v30 = this->reincarnate_time;
    v24 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControl(v24, v17, 1, v30, 1.0);
    v25 = GetParticleManager();
    CDOTA_ParticleManager::ReleaseParticleIndex(v25, v17);
    v26 = CDOTA_Buff::GetParent(this);
    DOTA_EmitSound(10, "Aegis.Timer", v26);
    filter._vptr_IRecipientFilter = &off_3FB63F0;
    CRecipientFilter::~CRecipientFilter(&filter);
  }
  result.m_szVal = 0;
  *&result.m_eType = (LODWORD(this->reincarnate_time) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Aegis_Regen::~CDOTA_Modifier_Aegis_Regen  (line 201, @0x0000000002d633e0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Aegis_Regen::~CDOTA_Modifier_Aegis_Regen(CDOTA_Modifier_Aegis_Regen *const this)
{
  this->_vptr_CDOTA_Buff = &off_46830B0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Aegis_Regen::~CDOTA_Modifier_Aegis_Regen  (line 201, @0x0000000002d63400, libserver.so)  // inlines: ~CDOTA_Modifier_Aegis_Regen
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Aegis_Regen::~CDOTA_Modifier_Aegis_Regen(CDOTA_Modifier_Aegis_Regen *const this)
{
  this->_vptr_CDOTA_Buff = &off_46830B0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Aegis_Regen::GetEffectName  (line 211, @0x0000000002d60560, libserver.so)
// strings: "particles/generic_gameplay/rune_regen_owner.vpcf"
const char *__fastcall CDOTA_Modifier_Aegis_Regen::GetEffectName(CDOTA_Modifier_Aegis_Regen *const this)
{
  return "particles/generic_gameplay/rune_regen_owner.vpcf";
}


// CDOTA_Modifier_Aegis_Regen::GetTexture  (line 212, @0x0000000002d60570, libserver.so)
const char *__fastcall CDOTA_Modifier_Aegis_Regen::GetTexture(CDOTA_Modifier_Aegis_Regen *const this)
{
  return "rune_regen";
}


// CDOTA_Modifier_Aegis_Regen::DeclareFunctions  (line 219, @0x0000000002d53a90, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Aegis_Regen::GetModifierConstantHealthRegen(CModifierParams const&), CDOTA_Modifier_Aegis_Regen::GetModifierConstantManaRegen(CModifierParams const&), CDOTA_Modifier_Aegis_Regen::OnTakeDamage(CModifierParams const&)
void __fastcall CDOTA_Modifier_Aegis_Regen::DeclareFunctions(CDOTA_Modifier_Aegis_Regen *const this)
{
  this->m_Functions[56].__pfn = CDOTA_Modifier_Aegis_Regen::GetModifierConstantHealthRegen;
  this->m_Functions[56].__delta = 0;
  this->m_Functions[52].__delta = 0;
  this->m_Functions[52].__pfn = CDOTA_Modifier_Aegis_Regen::GetModifierConstantManaRegen;
  this->m_Functions[134].__pfn = CDOTA_Modifier_Aegis_Regen::OnTakeDamage;
  this->m_Functions[134].__delta = 0;
}


// CDOTA_Modifier_Aegis_Regen::GetModifierConstantHealthRegen  (line 226, @0x0000000002d54c20, libserver.so)
// calls: CDOTA_Buff::GetParent
ModifierVariant_t __fastcall CDOTA_Modifier_Aegis_Regen::GetModifierConstantHealthRegen(
        CDOTA_Modifier_Aegis_Regen *const this,
        const CModifierParams *const params)
{
  CDOTA_BaseNPC *Parent; // rax
  __m128i v3; // xmm0
  int v4; // eax
  ModifierVariant_t result; // 0:rax.16

  Parent = CDOTA_Buff::GetParent(this);
  v3 = (*(Parent->_vptr_IHandleEntity + 156))(Parent);
  *v3.m128i_i32 = (v4 / 5);
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v3) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Aegis_Regen::GetModifierConstantManaRegen  (line 231, @0x0000000002d54c60, libserver.so)
// calls: CDOTA_Buff::GetParent
ModifierVariant_t __fastcall CDOTA_Modifier_Aegis_Regen::GetModifierConstantManaRegen(
        CDOTA_Modifier_Aegis_Regen *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  result = CDOTA_Buff::GetParent(this);
  v2 = *(*&result.m_eType + 2144LL);
  *v2.m128i_i32 = *v2.m128i_i32 / 5.0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Aegis_Regen::OnTakeDamage  (line 236, @0x0000000002d57cb0, libserver.so)  // inlines: AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsOwnedByAnyPlayer, IsValid, LookupEntity, ToDOTABaseNPC, Unit, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CDOTA_Buff::Destroy
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Aegis_Regen::OnTakeDamage(
        CDOTA_Modifier_Aegis_Regen *const this,
        const CModifierParams *const params)
{
  CDOTA_BaseNPC *m_pInstance; // r13
  uint32 m_Index; // eax
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  uint32 v9; // eax
  CEntityIdentity *v10; // rdx
  CEntityIdentity *v11; // rdx
  CEntityInstance *v12; // rax
  int m_Id; // eax

  m_pInstance = 0;
  m_Index = params->hunit.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hunit.m_Index) >> 9) & 0x3F];
    if ( v6 != 0 )
    {
      v7 = &v6[params->hunit.m_Index & 0x1FF];
      if ( v7 != 0 && m_Index == v7->m_EHandle.m_Index )
        m_pInstance = v7->m_pInstance;
    }
  }
  if ( CDOTA_Buff::GetParent(this) == m_pInstance )
  {
    v9 = params->hattacker.m_Index;
    if ( v9 + 2 > 1 )
    {
      v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F];
      if ( v10 != 0 )
      {
        v11 = &v10[params->hattacker.m_Index & 0x1FF];
        if ( v11 != 0 && v9 == v11->m_EHandle.m_Index )
        {
          v12 = v11->m_pInstance;
          if ( v11->m_pInstance != 0
            && BYTE3(v12[7]._vptr_IHandleEntity) != 0
            && (v12[61].m_hPrivateScope.m_hScope != 0
             || ((m_Id = v12[43].m_iszPrivateVScripts.u.m_Id) & 1) != 0
             || (m_Id & 4) != 0) )
          {
            CDOTA_Buff::Destroy(this, 0, 0, 0);
          }
        }
      }
    }
  }
  return 1uLL;
}


