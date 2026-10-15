// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/npc/dota_npc_creep.cpp:74
class C_CDOTA_BaseNPC_Creep_MapInstall {
	C_CDOTA_BaseNPC_Creep_MapInstall();

	// sizeof = 1
};

// src/game/server/dota/npc/dota_npc_creep.cpp:95
class C_CDOTA_BaseNPC_Creep_Siege_MapInstall {
	C_CDOTA_BaseNPC_Creep_Siege_MapInstall();

	// sizeof = 1
};

// src/game/server/dota/npc/dota_npc_creep.cpp:110
class C_CDOTA_BaseNPC_Creep_Neutral_MapInstall {
	C_CDOTA_BaseNPC_Creep_Neutral_MapInstall();

	// sizeof = 1
};

// src/game/server/dota/npc/dota_npc_creep.cpp:223
class C_CDOTA_BaseNPC_Creep_Lane_MapInstall {
	C_CDOTA_BaseNPC_Creep_Lane_MapInstall();

	// sizeof = 1
};

// src/game/server/dota/npc/dota_npc_creep.cpp:379
class C_CDOTA_BaseNPC_Creep_Talking_MapInstall {
	C_CDOTA_BaseNPC_Creep_Talking_MapInstall();

	// sizeof = 1
};

// src/game/server/dota/npc/dota_npc_creep.cpp:387
class C_CDOTA_Unit_Roquelaire_MapInstall {
	C_CDOTA_Unit_Roquelaire_MapInstall();

	// sizeof = 1
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// AddDeny  (line 40, @0x000000000290c950, libserver.so)
// globals: iDenies
void __cdecl AddDeny()
{
  ++iDenies;
}


// AddLastHit  (line 45, @0x000000000290c960, libserver.so)
// globals: iLastHits
void __cdecl AddLastHit()
{
  ++iLastHits;
}


// AddKill  (line 50, @0x000000000290c970, libserver.so)
// globals: iKills
void __cdecl AddKill()
{
  ++iKills;
}


// CC_dota_dump_creep_stats  (line 55, @0x00000000028f5890, libserver.so)
// calls: Msg
// strings: "Last Hits: %d/%d (%d%%), Denies: %d/%d (%d%%)\n"
// globals: iLastHits, iKills, iDenies
void __fastcall CC_dota_dump_creep_stats(const CCommandContext *const ctx, const CCommand *const args)
{
  Msg(
    "Last Hits: %d/%d (%d%%), Denies: %d/%d (%d%%)\n",
    iLastHits,
    iDenies + iLastHits + iKills,
    100 * iLastHits / (iDenies + iLastHits + iKills),
    iDenies,
    iDenies + iLastHits + iKills,
    100 * iDenies / (iDenies + iLastHits + iKills));
}


// CDOTA_BaseNPC_Creep::CDOTA_BaseNPC_Creep  (line 63, @0x0000000002929c30, libserver.so)  // inlines: CDOTA_BaseNPC_Additive
// calls: CDOTA_BaseNPC::CDOTA_BaseNPC
// callers: CDOTA_Unit_Hero_Beastmaster_Beasts::CEntityInstanceEntityClass::ConstructInstance, CDOTA_Unit_Hero_Beastmaster_Hawk::CEntityInstanceEntityClass::ConstructInstance, CDOTA_Unit_Hero_Beastmaster_Boar::CEntityInstanceEntityClass::ConstructInstance, CDOTA_BaseNPC_Warlock_Golem::CEntityInstanceEntityClass::ConstructInstance, CDOTA_Unit_Nian::CDOTA_Unit_Nian, CDOTA_Unit_Brewmaster_PrimalEarth::CEntityInstanceEntityClass::ConstructInstance, CDOTA_Unit_Brewmaster_PrimalStorm::CEntityInstanceEntityClass::ConstructInstance, CDOTA_Unit_Brewmaster_PrimalFire::CEntityInstanceEntityClass::ConstructInstance, CDOTA_Unit_Broodmother_Spiderling::CEntityInstanceEntityClass::ConstructInstance, CDOTA_BaseNPC_Invoker_Forged_Spirit::CEntityInstanceEntityClass::ConstructInstance, CDOTA_Unit_Undying_Zombie::CEntityInstanceEntityClass::ConstructInstance, CDOTA_Unit_VisageFamiliar::CEntityInstanceEntityClass::ConstructInstance
void __fastcall CDOTA_BaseNPC_Creep::CDOTA_BaseNPC_Creep(CDOTA_BaseNPC_Creep *const this)
{
  CDOTA_BaseNPC::CDOTA_BaseNPC(this);
  this->m_Lane = DOTA_LANE::DOTA_LANE_NONE;
  this->_vptr_IHandleEntity = &off_42ED090;
  this->_vptr_INextBotEventResponder = &off_42EDFF0;
  this->_vptr_CObstructionObject = &off_42EE320;
}


// CDOTA_BaseNPC_Creep::YouForgotToImplementOrDeclareServerClass  (line 74, @0x00000000028f5400, libserver.so)
int __fastcall CDOTA_BaseNPC_Creep::YouForgotToImplementOrDeclareServerClass(CDOTA_BaseNPC_Creep *const this)
{
  return 0;
}


// CDOTA_BaseNPC_Creep::GetServerClass  (line 74, @0x0000000002900a90, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_BaseNPC_Creep::GetServerClass(CDOTA_BaseNPC_Creep *const this)
{
  CEntityClass *m_pClass; // rdx
  ServerClass *result; // rax
  CEntityClassInfo *m_pBaseClassInfo; // rdx

  m_pClass = this->m_pEntity->m_pClass;
  result = m_pClass->m_pGameClass;
  if ( result == 0 )
  {
    m_pBaseClassInfo = m_pClass->m_pBaseClassInfo;
    if ( m_pBaseClassInfo != 0 )
      return CEntityClass::GetGameClass(m_pBaseClassInfo->m_pClass, 0);
  }
  return result;
}


// CDOTA_BaseNPC_Creep::GetDataDescMap  (line 77, @0x00000000028f5410, libserver.so)
// globals: CDOTA_BaseNPC_Creep::m_DataMap
datamap_t *__fastcall CDOTA_BaseNPC_Creep::GetDataDescMap(CDOTA_BaseNPC_Creep *const this)
{
  return &CDOTA_BaseNPC_Creep::m_DataMap;
}


// CDOTA_BaseNPC_Creep::AddDatadescMetadataKeys  (line 77, @0x000000000290c980, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CDOTA_BaseNPC_Creep::GetEntityClass(void)
void __fastcall CDOTA_BaseNPC_Creep::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CDOTA_BaseNPC_Creep::GetEntityClass);
}


// CDOTA_BaseNPC_Creep::GetBaseMap  (line 77, @0x000000000290c9a0, libserver.so)
// globals: CDOTA_BaseNPC::m_DataMap
datamap_t *__cdecl CDOTA_BaseNPC_Creep::GetBaseMap()
{
  return &CDOTA_BaseNPC::m_DataMap;
}


// DataMapInit<CDOTA_BaseNPC_Creep>  (line 77, @0x000000000290c9b0, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_characters_01.cpp
// strings: "CDOTA_BaseNPC_Creep"
// globals: `guard variable for'DataMapInit<CDOTA_BaseNPC_Creep>(CDOTA_BaseNPC_Creep *)::nameHolder, CDOTA_BaseNPC::m_DataMap, CDOTA_BaseNPC_Creep::GetEntityClass(void), CDOTA_BaseNPC_Creep::m_DataMap, DataMapInit<CDOTA_BaseNPC_Creep>(CDOTA_BaseNPC_Creep *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CDOTA_BaseNPC_Creep>(CDOTA_BaseNPC_Creep *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CDOTA_BaseNPC_Creep>(CDOTA_BaseNPC_Creep *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CDOTA_BaseNPC_Creep>(CDOTA_BaseNPC_Creep *)::nameHolder) != 0 )
  {
    DataMapInit<CDOTA_BaseNPC_Creep>(CDOTA_BaseNPC_Creep *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CDOTA_BaseNPC_Creep>(CDOTA_BaseNPC_Creep *)::nameHolder.m_pszBase = "CDOTA_BaseNPC_Creep";
    DataMapInit<CDOTA_BaseNPC_Creep>(CDOTA_BaseNPC_Creep *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CDOTA_BaseNPC_Creep>(CDOTA_BaseNPC_Creep *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CDOTA_BaseNPC_Creep>(CDOTA_BaseNPC_Creep *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CDOTA_BaseNPC_Creep>(CDOTA_BaseNPC_Creep *)::nameHolder.m_nLenBase = 19;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CDOTA_BaseNPC_Creep>(CDOTA_BaseNPC_Creep *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CDOTA_BaseNPC_Creep>(CDOTA_BaseNPC_Creep *)::nameHolder,
      &_dso_handle);
  }
  CDOTA_BaseNPC_Creep::m_DataMap.dataNumFields = 1;
  CDOTA_BaseNPC_Creep::m_DataMap.baseMap = &CDOTA_BaseNPC::m_DataMap;
  CDOTA_BaseNPC_Creep::m_DataMap.dataDesc = &DataMapInit<CDOTA_BaseNPC_Creep>(CDOTA_BaseNPC_Creep *)::dataDesc[1];
  AddDatadescMetadataKeys(&CDOTA_BaseNPC_Creep::m_DataMap, CDOTA_BaseNPC_Creep::GetEntityClass);
  return &CDOTA_BaseNPC_Creep::m_DataMap;
}


// CDOTA_BaseNPC_Creep::Spawn  (line 83, @0x000000000294ce90, libserver.so)
// calls: CDOTA_BaseNPC::Spawn
// callers: CDOTA_Unit_Undying_Zombie::Spawn, CDOTA_Unit_VisageFamiliar::Spawn
void __fastcall CDOTA_BaseNPC_Creep::Spawn(CDOTA_BaseNPC_Creep *const this, const CEntityKeyValues *pKeyValues)
{
  CDOTA_BaseNPC::Spawn(this, pKeyValues);
  this->m_iUnitType |= 0x80u;
}


// CDOTA_BaseNPC_Creep_Siege::YouForgotToImplementOrDeclareServerClass  (line 95, @0x00000000028f5420, libserver.so)
int __fastcall CDOTA_BaseNPC_Creep_Siege::YouForgotToImplementOrDeclareServerClass(
        CDOTA_BaseNPC_Creep_Siege *const this)
{
  return 0;
}


// CDOTA_BaseNPC_Creep_Siege::GetServerClass  (line 95, @0x0000000002900ba0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_BaseNPC_Creep_Siege::GetServerClass(CDOTA_BaseNPC_Creep_Siege *const this)
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


// CDOTA_BaseNPC_Creep_Siege::Spawn  (line 99, @0x000000000294d030, libserver.so)
// calls: CDOTA_BaseNPC_Creep_Lane::Spawn
void __fastcall CDOTA_BaseNPC_Creep_Siege::Spawn(
        CDOTA_BaseNPC_Creep_Siege *const this,
        const CEntityKeyValues *pKeyValues)
{
  CDOTA_BaseNPC_Creep_Lane::Spawn(this, pKeyValues);
  this->m_iUnitType |= 0x80u;
}


// CDOTA_BaseNPC_Creep_Neutral::YouForgotToImplementOrDeclareServerClass  (line 110, @0x00000000028f5430, libserver.so)
int __fastcall CDOTA_BaseNPC_Creep_Neutral::YouForgotToImplementOrDeclareServerClass(
        CDOTA_BaseNPC_Creep_Neutral *const this)
{
  return 0;
}


// CDOTA_BaseNPC_Creep_Neutral::GetServerClass  (line 110, @0x0000000002900a10, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_BaseNPC_Creep_Neutral::GetServerClass(CDOTA_BaseNPC_Creep_Neutral *const this)
{
  CEntityClass *m_pClass; // rdx
  ServerClass *result; // rax
  CEntityClassInfo *m_pBaseClassInfo; // rdx

  m_pClass = this->m_pEntity->m_pClass;
  result = m_pClass->m_pGameClass;
  if ( result == 0 )
  {
    m_pBaseClassInfo = m_pClass->m_pBaseClassInfo;
    if ( m_pBaseClassInfo != 0 )
      return CEntityClass::GetGameClass(m_pBaseClassInfo->m_pClass, 0);
  }
  return result;
}


// CDOTA_BaseNPC_Creep_Neutral::CDOTA_BaseNPC_Creep_Neutral  (line 116, @0x000000000292a890, libserver.so)  // inlines: CDOTA_BaseNPC_Additive, CDOTA_BaseNPC_Creep, ~CDOTA_BaseNPC_Additive, ~CDOTA_BaseNPC_Creep
// calls: CDOTA_BaseNPC::CDOTA_BaseNPC, CountdownTimer::CountdownTimer, CDOTA_BaseNPC::~CDOTA_BaseNPC, _Unwind_Resume
// callers: CDOTA_BaseNPC_Creep_Neutral::CEntityInstanceEntityClass::ConstructInstance
void __fastcall CDOTA_BaseNPC_Creep_Neutral::CDOTA_BaseNPC_Creep_Neutral(CDOTA_BaseNPC_Creep_Neutral *const this)
{
  CDOTA_BaseNPC::CDOTA_BaseNPC(this);
  this->m_Lane = DOTA_LANE::DOTA_LANE_NONE;
  this->_vptr_IHandleEntity = &off_42EF650;
  this->_vptr_INextBotEventResponder = &off_42F05B0;
  this->_vptr_CObstructionObject = &off_42F08E0;
  CountdownTimer::CountdownTimer(&this->m_ThinkTimer);
  this->m_bUseNeutralCreepBehavior = 1;
}


// CDOTA_BaseNPC_Creep_Neutral::Spawn  (line 123, @0x000000000294cec0, libserver.so)  // inlines: Spawn
// calls: CDOTA_BaseNPC::Spawn, CDOTA_BaseNPC::GetAbilityByIndex, CDOTABaseAbility::UpgradeAbility, RandomFloat, CountdownTimer::Start
void __fastcall CDOTA_BaseNPC_Creep_Neutral::Spawn(
        CDOTA_BaseNPC_Creep_Neutral *const this,
        const CEntityKeyValues *pKeyValues)
{
  int v3; // ebx
  CDOTABaseAbility *AbilityByIndex; // rax
  float v5; // xmm0_4
  float v6; // xmm1_4

  v3 = 0;
  CDOTA_BaseNPC::Spawn(this, pKeyValues);
  this->m_iUnitType |= 0x80u;
  do
  {
    if ( CDOTA_BaseNPC::GetAbilityByIndex(this, v3) != 0 )
    {
      AbilityByIndex = CDOTA_BaseNPC::GetAbilityByIndex(this, v3);
      CDOTABaseAbility::UpgradeAbility(AbilityByIndex, 0);
    }
    ++v3;
  }
  while ( v3 != 24 );
  v5 = RandomFloat(0.75, 1.25);
  CountdownTimer::Start(&this->m_ThinkTimer, v5, v6);
}


// CDOTA_BaseNPC_Creep_Neutral::CanAcceptTargetToAttack  (line 141, @0x00000000028fa8b0, libserver.so)  // inlines: FindModifierByName
// calls: ModifierFactoryDictionary, CModifieractoryDictionary::FindFactory, CDOTA_ModifierManager::FindModifierByName
// strings: "modifier_monkey_king_bounce_perch"
bool __fastcall CDOTA_BaseNPC_Creep_Neutral::CanAcceptTargetToAttack(
        CDOTA_BaseNPC_Creep_Neutral *const this,
        CDOTA_BaseNPC *pTargetNPC)
{
  CModifieractoryDictionary *v3; // rax
  IModifierFactory *Factory; // rax

  v3 = ModifierFactoryDictionary();
  Factory = CModifieractoryDictionary::FindFactory(v3, "modifier_monkey_king_bounce_perch");
  return CDOTA_ModifierManager::FindModifierByName(
           &pTargetNPC->m_ModifierManager,
           Factory,
           "modifier_monkey_king_bounce_perch",
           0) == 0;
}


// CDOTA_BaseNPC_Creep_Neutral::UnitThink  (line 152, @0x0000000002905630, libserver.so)  // inlines: IsElapsed
// calls: CDOTA_BaseNPC::UnitThink, CBaseEntity::GetLifeState, CountdownTimer::Now, RandomFloat, CountdownTimer::Start, CDOTA_BaseNPC::GetAbilityByIndex
void __fastcall CDOTA_BaseNPC_Creep_Neutral::UnitThink(CDOTA_BaseNPC_Creep_Neutral *const this)
{
  float v2; // xmm0_4
  int v3; // ebx
  float v4; // xmm1_4
  CDOTABaseAbility *AbilityByIndex; // rax

  CDOTA_BaseNPC::UnitThink(this);
  if ( !this->m_bIsWaitingToSpawn.m_Value
    && CBaseEntity::GetLifeState(this) == LifeState_t::LIFE_ALIVE
    && this->m_ThinkTimer.m_timestamp.m_Value > 0.0
    && CountdownTimer::Now(&this->m_ThinkTimer) >= this->m_ThinkTimer.m_timestamp.m_Value )
  {
    v2 = RandomFloat(0.75, 1.25);
    v3 = 0;
    CountdownTimer::Start(&this->m_ThinkTimer, v2, v4);
    do
    {
      if ( CDOTA_BaseNPC::GetAbilityByIndex(this, v3) != 0 )
      {
        AbilityByIndex = CDOTA_BaseNPC::GetAbilityByIndex(this, v3);
        (*(AbilityByIndex->_vptr_IHandleEntity + 317))(AbilityByIndex);
      }
      ++v3;
    }
    while ( v3 != 24 );
  }
}


// CDOTA_BaseNPC_Creep_Neutral::OnSaveState  (line 173, @0x00000000029156a0, libserver.so)
// calls: CDOTA_BaseNPC::OnSaveState
bool __fastcall CDOTA_BaseNPC_Creep_Neutral::OnSaveState(CDOTA_BaseNPC_Creep_Neutral *const this, KeyValues *pKey)
{
  return !this->m_bIsWaitingToSpawn.m_Value && CDOTA_BaseNPC::OnSaveState(this, pKey);
}


// CDOTA_BaseNPC_Creep_Lane::YouForgotToImplementOrDeclareServerClass  (line 223, @0x00000000028f5440, libserver.so)
int __fastcall CDOTA_BaseNPC_Creep_Lane::YouForgotToImplementOrDeclareServerClass(CDOTA_BaseNPC_Creep_Lane *const this)
{
  return 0;
}


// CDOTA_BaseNPC_Creep_Lane::GetServerClass  (line 223, @0x0000000002900910, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_BaseNPC_Creep_Lane::GetServerClass(CDOTA_BaseNPC_Creep_Lane *const this)
{
  CEntityClass *m_pClass; // rdx
  ServerClass *result; // rax
  CEntityClassInfo *m_pBaseClassInfo; // rdx

  m_pClass = this->m_pEntity->m_pClass;
  result = m_pClass->m_pGameClass;
  if ( result == 0 )
  {
    m_pBaseClassInfo = m_pClass->m_pBaseClassInfo;
    if ( m_pBaseClassInfo != 0 )
      return CEntityClass::GetGameClass(m_pBaseClassInfo->m_pClass, 0);
  }
  return result;
}


// CDOTA_BaseNPC_Creep_Lane::Spawn  (line 227, @0x000000000294cf40, libserver.so)  // inlines: NetworkStateChanged, Set, Spawn, Start, operator=<float>
// calls: CDOTA_BaseNPC::Spawn, RandomFloat, CountdownTimer::Now
// callers: CDOTA_BaseNPC_Creep_Siege::Spawn
void __fastcall CDOTA_BaseNPC_Creep_Lane::Spawn(
        CDOTA_BaseNPC_Creep_Lane *const this,
        const CEntityKeyValues *pKeyValues)
{
  CountdownTimer *p_m_ThinkTimer; // r12
  double v4; // xmm0_8
  double v5; // xmm1_8
  float v6; // [rsp+8h] [rbp-18h]
  float v7; // [rsp+Ch] [rbp-14h]

  p_m_ThinkTimer = &this->m_ThinkTimer;
  CDOTA_BaseNPC::Spawn(this, pKeyValues);
  this->m_bInEnemyBase = 0;
  this->m_iUnitType |= 0x480u;
  v7 = RandomFloat(0.5, 0.75);
  *&v4 = CountdownTimer::Now(p_m_ThinkTimer) + v7;
  if ( *&v4 != this->m_ThinkTimer.m_timestamp.m_Value )
  {
    v6 = *&v4;
    (*(this->m_ThinkTimer._vptr_CountdownTimer + 2))(p_m_ThinkTimer, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    *&v4 = LODWORD(v6);
    this->m_ThinkTimer.m_timestamp.m_Value = v6;
  }
  if ( v7 != this->m_ThinkTimer.m_duration.m_Value )
  {
    (*(this->m_ThinkTimer._vptr_CountdownTimer + 2))(p_m_ThinkTimer, 8, 0xFFFFFFFFLL, 0xFFFFFFFFLL, v4, v5, v7);
    this->m_ThinkTimer.m_duration.m_Value = v7;
  }
}


// CDOTA_BaseNPC_Creep_Lane::UnitThink  (line 238, @0x00000000029056f0, libserver.so)  // inlines: DOTAGameRules, IsElapsed, IsOwnedByAnyPlayer, Length2DSqr, NetworkStateChanged, Set, Start, ToDOTABaseNPC, VectorSubtract, operator-, operator=<float>
// calls: CDOTA_BaseNPC::UnitThink, CountdownTimer::Now, RandomFloat, CDOTAGamerules::GetFort, CBaseEntity::GetAbsOrigin, CDOTAGamerules::RegisterEnemyCreepInBase
void __fastcall CDOTA_BaseNPC_Creep_Lane::UnitThink(CDOTA_BaseNPC_Creep_Lane *const this)
{
  double v2; // xmm0_8
  double v3; // xmm1_8
  CDOTA_BaseNPC_Building *Fort; // r12
  const Vector *AbsOrigin; // r13
  const Vector *v6; // rax
  float v7; // xmm1_4
  float v8; // [rsp+8h] [rbp-28h]
  float v9; // [rsp+Ch] [rbp-24h]

  CDOTA_BaseNPC::UnitThink(this);
  if ( !this->m_bIsWaitingToSpawn.m_Value
    && (*(this->_vptr_IHandleEntity + 408))(this) != 0
    && !this->m_bInEnemyBase
    && this->m_ThinkTimer.m_timestamp.m_Value > 0.0
    && CountdownTimer::Now(&this->m_ThinkTimer) >= this->m_ThinkTimer.m_timestamp.m_Value )
  {
    v9 = RandomFloat(0.5, 0.75);
    *&v2 = CountdownTimer::Now(&this->m_ThinkTimer) + v9;
    if ( *&v2 != this->m_ThinkTimer.m_timestamp.m_Value )
    {
      v8 = *&v2;
      (*(this->m_ThinkTimer._vptr_CountdownTimer + 2))(&this->m_ThinkTimer, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      *&v2 = LODWORD(v8);
      this->m_ThinkTimer.m_timestamp.m_Value = v8;
    }
    if ( v9 != this->m_ThinkTimer.m_duration.m_Value )
    {
      (*(this->m_ThinkTimer._vptr_CountdownTimer + 2))(&this->m_ThinkTimer, 8, 0xFFFFFFFFLL, 0xFFFFFFFFLL, v2, v3, v9);
      this->m_ThinkTimer.m_duration.m_Value = v9;
    }
    Fort = CDOTAGamerules::GetFort(g_pGameRules, (this->m_iTeamNum.m_Value == 2) + 2);
    if ( Fort != 0 )
    {
      AbsOrigin = CBaseEntity::GetAbsOrigin(this);
      v6 = CBaseEntity::GetAbsOrigin(Fort);
      v7 = v6->y - AbsOrigin->y;
      if ( (((v6->x - AbsOrigin->x) * (v6->x - AbsOrigin->x)) + (v7 * v7)) < 16000000.0
        && this != 0
        && this->m_bIsDOTANPC
        && this->m_iIsControllableByPlayer64.m_Value == 0
        && (this->m_iUnitType & 1) == 0 )
      {
        CDOTAGamerules::RegisterEnemyCreepInBase(g_pGameRules, this);
        this->m_bInEnemyBase = 1;
      }
    }
  }
}


// CDOTA_BaseNPC_Creep_Lane::OnSaveState  (line 273, @0x00000000029156c0, libserver.so)  // inlines: CUtlSymbolLarge, Get, GetEntityIdentity, GetEntityName, GetEntryIndex, GetInitialGoalEntity, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_BaseNPC::OnSaveState, KeyValues::SetString
// strings: "goalentity"
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CDOTA_BaseNPC_Creep_Lane::OnSaveState(CDOTA_BaseNPC_Creep_Lane *const this, KeyValues *pKey)
{
  uint32 m_Index; // eax
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  CEntityInstance *m_pInstance; // rax
  const char *v9; // rdx
  const char *m_pAsString; // rax

  if ( this->m_bIsWaitingToSpawn.m_Value )
    return 0;
  m_Index = this->m_initialGoalEntity.m_Index;
  if ( m_Index + 2 <= 1 )
    return CDOTA_BaseNPC::OnSaveState(this, pKey);
  v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_initialGoalEntity.m_Index) >> 9) & 0x3F];
  if ( v5 == 0 )
    return CDOTA_BaseNPC::OnSaveState(this, pKey);
  v6 = &v5[this->m_initialGoalEntity.m_Index & 0x1FF];
  if ( v6 == 0 )
    return CDOTA_BaseNPC::OnSaveState(this, pKey);
  if ( m_Index != v6->m_EHandle.m_Index )
    return CDOTA_BaseNPC::OnSaveState(this, pKey);
  m_pInstance = v6->m_pInstance;
  if ( v6->m_pInstance == 0 )
    return CDOTA_BaseNPC::OnSaveState(this, pKey);
  v9 = "";
  m_pAsString = m_pInstance->m_pEntity->m_name.u.m_pAsString;
  if ( m_pAsString != 0 )
    v9 = m_pAsString;
  KeyValues::SetString(pKey, "goalentity", v9);
  return CDOTA_BaseNPC::OnSaveState(this, pKey);
}


// CDOTA_BaseNPC_Creep_Lane::OnLoadState  (line 287, @0x0000000002917d80, libserver.so)  // inlines: GetEHandle, GetEntryIndex, GetSerialNumber, Set, SetInitialGoalEntity, operator=
// calls: KeyValues::GetString, CGameEntitySystem::FindEntityByName, CDOTA_BaseNPC_Creep_Lane::UpgradeToCorrectLevel, CDOTA_BaseNPC::OnLoadState
// strings: "goalentity"
bool __fastcall CDOTA_BaseNPC_Creep_Lane::OnLoadState(CDOTA_BaseNPC_Creep_Lane *const this, KeyValues *pKey)
{
  const char *String; // rax
  CBaseEntity *EntityByName; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v7; // eax
  __int16 v8; // cx

  String = KeyValues::GetString(pKey, "goalentity", "", 0, 0);
  EntityByName = CGameEntitySystem::FindEntityByName(g_pGameEntitySystem, 0, String, 0, 0, 0, 0);
  if ( EntityByName != 0 && (m_pEntity = EntityByName->m_pEntity) != 0 )
  {
    v7 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
    if ( m_pEntity->m_EHandle.m_Index == -1 )
      v8 = 0x7FFF;
    else
      v8 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    LOWORD(this->m_initialGoalEntity.m_Index) = v8 | this->m_initialGoalEntity.m_Index & 0x8000;
    this->m_initialGoalEntity.m_Index = (v7 << 15) | this->m_initialGoalEntity.m_Index & 0x7FFF;
  }
  else
  {
    this->m_initialGoalEntity.m_Index = -1;
  }
  CDOTA_BaseNPC_Creep_Lane::UpgradeToCorrectLevel(this);
  return CDOTA_BaseNPC::OnLoadState(this, pKey);
}


// CDOTA_BaseNPC_Creep_Lane::UpgradeToCorrectLevel  (line 296, @0x000000000290ca80, libserver.so)  // inlines: DOTAGameRules, GetTeamNumber, GetUnitName, SetBaseMaxHealth, String, ToCStr
// calls: CDOTAGamerules::GetDOTATime, floorf, V_stristr_fast(char const*,char const*), CBaseEntity::SetMaxHealth, CDOTA_BaseNPC::ModifyHealth, CDOTAGamerules::GetCreepUpgradeState
// callers: CDOTA_NPCSpawner::UpgradeCreep, CDOTA_BaseNPC_Creep_Lane::OnLoadState
void __fastcall CDOTA_BaseNPC_Creep_Lane::UpgradeToCorrectLevel(CDOTA_BaseNPC_Creep_Lane *const this)
{
  float DOTATime; // xmm0_4
  float v3; // xmm0_4
  unsigned __int8 m_Value; // al
  int v5; // r14d
  int v6; // r12d
  const char *m_pAsString; // rdi
  __int64 v8; // rax
  const char *v9; // rdi
  int v10; // r13d
  int v11; // r15d
  __int64 v12; // rax
  int v13; // xmm1_4
  int v14; // r15d
  int v15; // r12d
  int v16; // eax
  int v17; // eax
  float v18; // xmm0_4
  int v19; // r12d
  int v20; // eax
  __int64 v21; // rax
  bool v22; // zf
  float flGoldUpgrade; // [rsp+4h] [rbp-34h]

  DOTATime = CDOTAGamerules::GetDOTATime(g_pGameRules, 0, 0, 0.0);
  v3 = floorf(DOTATime / 450.0);
  m_Value = this->m_iTeamNum.m_Value;
  v5 = v3;
  v6 = v3;
  if ( m_Value == 2 )
  {
    v22 = !CDOTAGamerules::GetCreepUpgradeState(g_pGameRules, 63);
    m_Value = this->m_iTeamNum.m_Value;
    if ( !v22 )
      v6 = 30;
  }
  if ( m_Value == 3 && CDOTAGamerules::GetCreepUpgradeState(g_pGameRules, 4032) )
    v6 = 30;
  m_pAsString = "";
  if ( this->m_iszUnitName.m_Value.u.m_Id != 0 )
    m_pAsString = this->m_iszUnitName.m_Value.u.m_pAsString;
  v8 = V_stristr_fast(m_pAsString, "upgraded");
  v9 = "";
  if ( v8 != 0 )
  {
    if ( this->m_iszUnitName.m_Value.u.m_Id != 0 )
      v9 = this->m_iszUnitName.m_Value.u.m_pAsString;
    v10 = 3;
    v11 = 18;
    v12 = V_stristr_fast(v9, "melee");
    v13 = 1069547520;
    if ( v12 != 0 )
    {
      v10 = 2;
      v11 = 19;
    }
  }
  else
  {
    if ( this->m_iszUnitName.m_Value.u.m_Id != 0 )
      v9 = this->m_iszUnitName.m_Value.u.m_pAsString;
    v10 = 2;
    v11 = 12;
    v21 = V_stristr_fast(v9, "melee");
    v13 = 0x40000000;
    if ( v21 != 0 )
    {
      v10 = 1;
      v11 = 12;
    }
  }
  flGoldUpgrade = *&v13;
  if ( v6 > 0 )
  {
    v14 = v6 * v11;
    v15 = v10 * v6;
    v16 = v14 + (*(this->_vptr_IHandleEntity + 156))(this);
    this->m_flBaseMaxHealth = v16;
    CBaseEntity::SetMaxHealth(this, v16);
    v17 = (*(this->_vptr_IHandleEntity + 156))(this);
    CDOTA_BaseNPC::ModifyHealth(this, v17, 0, 0, 0);
    this->m_iBaseDamageMin = v15 + (*(this->_vptr_IHandleEntity + 416))(this);
    this->m_iBaseDamageMax = (*(this->_vptr_IHandleEntity + 417))(this) + v15;
    v18 = flGoldUpgrade * v5;
    v19 = v18;
    if ( (flGoldUpgrade * v5) == floorf(v18) )
      v20 = v19;
    else
      v20 = v19 + 1;
    this->m_iGoldBountyMax += v20;
    this->m_iGoldBountyMin += v19;
    this->m_iXPBountyExtra = (v5 * 0.0);
  }
}


// CDOTA_BaseNPC_Creep_Talking::YouForgotToImplementOrDeclareServerClass  (line 379, @0x00000000028f5450, libserver.so)
int __fastcall CDOTA_BaseNPC_Creep_Talking::YouForgotToImplementOrDeclareServerClass(
        CDOTA_BaseNPC_Creep_Talking *const this)
{
  return 0;
}


// CDOTA_BaseNPC_Creep_Talking::GetServerClass  (line 379, @0x0000000002900b10, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_BaseNPC_Creep_Talking::GetServerClass(CDOTA_BaseNPC_Creep_Talking *const this)
{
  CEntityClass *m_pClass; // rdx
  ServerClass *result; // rax
  CEntityClassInfo *m_pBaseClassInfo; // rdx

  m_pClass = this->m_pEntity->m_pClass;
  result = m_pClass->m_pGameClass;
  if ( result == 0 )
  {
    m_pBaseClassInfo = m_pClass->m_pBaseClassInfo;
    if ( m_pBaseClassInfo != 0 )
      return CEntityClass::GetGameClass(m_pBaseClassInfo->m_pClass, 0);
  }
  return result;
}


// CDOTA_Unit_Roquelaire::YouForgotToImplementOrDeclareServerClass  (line 387, @0x00000000028f5460, libserver.so)
int __fastcall CDOTA_Unit_Roquelaire::YouForgotToImplementOrDeclareServerClass(CDOTA_Unit_Roquelaire *const this)
{
  return 0;
}


// CDOTA_Unit_Roquelaire::GetServerClass  (line 387, @0x00000000029005d0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Unit_Roquelaire::GetServerClass(CDOTA_Unit_Roquelaire *const this)
{
  CEntityClass *m_pClass; // rdx
  ServerClass *result; // rax
  CEntityClassInfo *m_pBaseClassInfo; // rdx

  m_pClass = this->m_pEntity->m_pClass;
  result = m_pClass->m_pGameClass;
  if ( result == 0 )
  {
    m_pBaseClassInfo = m_pClass->m_pBaseClassInfo;
    if ( m_pBaseClassInfo != 0 )
      return CEntityClass::GetGameClass(m_pBaseClassInfo->m_pClass, 0);
  }
  return result;
}


// CDOTA_Unit_Roquelaire::Spawn  (line 395, @0x000000000294d060, libserver.so)  // inlines: NetworkStateChanged, Set, SetIdleAcquire, SetInitialGoalPosition, Spawn, operator=, operator=<int>
// calls: CDOTA_BaseNPC::Spawn, CDOTA_BaseNPC::CanAutoAttack
void __fastcall CDOTA_Unit_Roquelaire::Spawn(CDOTA_Unit_Roquelaire *const this, const CEntityKeyValues *pKeyValues)
{
  vec_t z; // xmm0_4
  vec_t x; // xmm2_4

  CDOTA_BaseNPC::Spawn(this, pKeyValues);
  this->m_bIdleAcquire = 0;
  this->m_iUnitType |= 0x80u;
  CDOTA_BaseNPC::CanAutoAttack(this, 0);
  if ( this->m_flFlyHeight.m_Value != 150.0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 4508, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_flFlyHeight.m_Value = 150.0;
  }
  z = vec3_origin.z;
  x = vec3_origin.x;
  this->m_vInitialGoalPosition.y = vec3_origin.y;
  this->m_vInitialGoalPosition.z = z;
  this->m_vInitialGoalPosition.x = x;
}


