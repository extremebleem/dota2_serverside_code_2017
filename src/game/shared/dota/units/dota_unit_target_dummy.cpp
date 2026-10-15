// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/units/dota_unit_target_dummy.cpp:29
class C_CDOTA_Unit_TargetDummy_MapInstall {
	C_CDOTA_Unit_TargetDummy_MapInstall();

	// sizeof = 1
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Unit_TargetDummy::YouForgotToImplementOrDeclareServerClass  (line 29, @0x0000000002ae8720, libserver.so)
int __fastcall CDOTA_Unit_TargetDummy::YouForgotToImplementOrDeclareServerClass(CDOTA_Unit_TargetDummy *const this)
{
  return 0;
}


// CDOTA_Unit_TargetDummy::GetServerClass  (line 29, @0x0000000002af2870, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Unit_TargetDummy::GetServerClass(CDOTA_Unit_TargetDummy *const this)
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


// CDOTA_Unit_TargetDummy::Spawn  (line 49, @0x0000000002aef230, libserver.so)
// calls: CDOTA_BaseNPC_Hero::Spawn, CDOTA_Unit_TargetDummy::ResetThink
void __fastcall CDOTA_Unit_TargetDummy::Spawn(CDOTA_Unit_TargetDummy *const this, const CEntityKeyValues *pKeyValues)
{
  CDOTA_BaseNPC_Hero::Spawn(this, pKeyValues);
  this->m_iUnitType = 1;
  CDOTA_Unit_TargetDummy::ResetThink(this);
}


// CDOTA_Unit_TargetDummy::CDOTA_Unit_TargetDummy  (line 63, @0x0000000002afbba0, libserver.so)  // inlines: CNetworkVarBase, EnsureValidValue<float>
// calls: CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero
void __fastcall CDOTA_Unit_TargetDummy::CDOTA_Unit_TargetDummy(CDOTA_Unit_TargetDummy *const this)
{
  CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero(this);
  this->_vptr_IHandleEntity = &off_44828D0;
  this->_vptr_INextBotEventResponder = &off_44838B8;
  this->_vptr_CObstructionObject = &off_4483BE8;
  this->m_flDamageTaken.m_Value = 0.0;
  this->m_flLastHit.m_Value = 0.0;
  this->m_flStartDamageTime.m_Value = 0.0;
  this->m_flLastDamageTime.m_Value = 0.0;
}


// CDOTA_Unit_TargetDummy::ResetThink  (line 69, @0x0000000002aef0d0, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<float>
// calls: CDOTA_BaseNPC::ModifyHealth, CBaseEntity::ThinkSet
// callers: CDOTA_Unit_TargetDummy::Spawn
void __fastcall CDOTA_Unit_TargetDummy::ResetThink(CDOTA_Unit_TargetDummy *const this)
{
  double v1; // xmm1_8
  __int64 v3; // xmm0_8
  double v4; // xmm2_8
  int v5; // eax

  v1 = 0.0;
  if ( this->m_flDamageTaken.m_Value != 0.0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 5868, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_flDamageTaken.m_Value = 0.0;
  }
  v3 = 3212836864LL;
  if ( this->m_flStartDamageTime.m_Value != -1.0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 5876, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    v3 = 3212836864LL;
    this->m_flStartDamageTime.m_Value = -1.0;
  }
  if ( this->m_flLastDamageTime.m_Value != -1.0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 5880, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_flLastDamageTime.m_Value = -1.0;
  }
  v4 = 0.0;
  if ( this->m_flLastHit.m_Value != 0.0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 5872, 0xFFFFFFFFLL, 0xFFFFFFFFLL, *&v3, v1, 0.0);
    this->m_flLastHit.m_Value = 0.0;
  }
  v5 = (*(this->_vptr_IHandleEntity + 156))(this, *&v3, v1, v4);
  CDOTA_BaseNPC::ModifyHealth(this, v5, 0, 0, 0);
  CBaseEntity::ThinkSet(this, 0LL, 0.0, 0, 0);
}


// CDOTA_Unit_TargetDummy::OnTakeDamage  (line 82, @0x0000000002aefb70, libserver.so)  // inlines: NetworkStateChanged, Set, curtime, operator+=<float>, operator< <int>, operator=<float>
// calls: CBaseEntity::ThinkSet, CBaseEntity::SetNextThink
// globals: CDOTA_Unit_TargetDummy::ResetThink(void)
int __fastcall CDOTA_Unit_TargetDummy::OnTakeDamage(
        CDOTA_Unit_TargetDummy *const this,
        const CTakeDamageInfo *const info)
{
  float m_flDamage; // xmm1_4
  float m_Value; // xmm0_4
  float v6; // xmm1_4
  float v7; // xmm0_4
  CGlobalVars *v8; // r12
  double v9; // xmm1_8
  CGlobalVars *v10; // r12
  FnGlobalVarsWarningFunc v11; // rax
  double v12; // xmm0_8
  FnGlobalVarsWarningFunc v14; // rax
  CGlobalVars *v15; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  float m_flCurrentTime; // xmm2_4
  float v18; // [rsp+Ch] [rbp-24h]
  float v19; // [rsp+Ch] [rbp-24h]
  float v20; // [rsp+Ch] [rbp-24h]
  float v21; // [rsp+Ch] [rbp-24h]

  m_flDamage = info->m_flDamage;
  m_Value = this->m_flDamageTaken.m_Value;
  if ( m_Value != (m_flDamage + m_Value) )
  {
    v20 = info->m_flDamage + m_Value;
    (*(this->_vptr_IHandleEntity + 22))(this, 5868, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_flDamageTaken.m_Value = v20;
    m_flDamage = info->m_flDamage;
  }
  if ( m_flDamage != this->m_flLastHit.m_Value )
  {
    v19 = m_flDamage;
    (*(this->_vptr_IHandleEntity + 22))(this, 5872, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_flLastHit.m_Value = v19;
  }
  v6 = this->m_flStartDamageTime.m_Value;
  v7 = 0.0;
  if ( v6 < 0.0 )
  {
    v15 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
        {
          m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
          v6 = this->m_flStartDamageTime.m_Value;
          v7 = 0.0;
        }
      }
      m_flCurrentTime = v15->m_flCurrentTime;
      if ( m_flCurrentTime == v6 )
        goto LABEL_6;
    }
    else
    {
      m_flCurrentTime = 0.0;
    }
    v21 = m_flCurrentTime;
    (*(this->_vptr_IHandleEntity + 22))(this, 5876, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    v7 = 0.0;
    this->m_flStartDamageTime.m_Value = v21;
  }
LABEL_6:
  v8 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      v14 = gpGlobals->m_pfnWarningFunc;
      if ( v14 != 0 )
        v14(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
    }
    v7 = v8->m_flCurrentTime;
  }
  if ( v7 != this->m_flLastDamageTime.m_Value )
  {
    v18 = v7;
    (*(this->_vptr_IHandleEntity + 22))(this, 5880, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_flLastDamageTime.m_Value = v18;
  }
  CBaseEntity::ThinkSet(this, CDOTA_Unit_TargetDummy::ResetThink, 0.0, 0, 0);
  v10 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      v11 = gpGlobals->m_pfnWarningFunc;
      if ( v11 != 0 )
        v11(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
    }
    HIDWORD(v12) = 0;
    *&v12 = v10->m_flCurrentTime + 5.0;
  }
  else
  {
    *&v12 = 1084227584;
  }
  CBaseEntity::SetNextThink(this, v12, v9, 0);
  return 0;
}


// CDOTA_Unit_TargetDummy::OnCommandMoveTo  (line 101, @0x0000000002aef8f0, libserver.so)  // inlines: OnCommandMoveTo
void __fastcall CDOTA_Unit_TargetDummy::OnCommandMoveTo(CDOTA_Unit_TargetDummy *const this, const Vector *const pos)
{
  INextBot *v3; // r13
  int (**vptr_INextBotEventResponder)(...); // rax
  __int64 i; // rbx

  v3 = &this->INextBot;
  vptr_INextBotEventResponder = this->_vptr_INextBotEventResponder;
  this->m_bIsMoving = 1;
  for ( i = (vptr_INextBotEventResponder[3])(&this->INextBot);
        i != 0;
        i = (*(this->_vptr_INextBotEventResponder + 4))(v3, i) )
  {
    (*(*i + 352LL))(i, pos);
  }
}


