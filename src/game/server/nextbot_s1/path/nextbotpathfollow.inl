
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CPathAndFollower<CNavPathNB>::~CPathAndFollower  (line 118, @0x0000000002f1f810, libserver.so)  // inlines: ~CNavPathNB, ~CPath, ~CPathData
// calls: CPathFollower::~CPathFollower
void __fastcall CPathAndFollower<CNavPathNB>::~CPathAndFollower(CPathAndFollower<CNavPathNB> *const this)
{
  this->_vptr_IPathFollower = off_47B4230;  // vptr: CPathAndFollower<CNavPathNB>
  this->m_MyPath._vptr_CPathData = off_47B0E10;
  CPathFollower::~CPathFollower(this);
}


// CPathAndFollower<CNavPathNB>::~CPathAndFollower  (line 118, @0x0000000002f1f8b0, libserver.so)  // inlines: ~CNavPathNB, ~CPath, ~CPathAndFollower, ~CPathData
// calls: CPathFollower::~CPathFollower, operator delete
void __fastcall CPathAndFollower<CNavPathNB>::~CPathAndFollower(CPathAndFollower<CNavPathNB> *const this)
{
  this->_vptr_IPathFollower = off_47B4230;  // vptr: CPathAndFollower<CNavPathNB>
  this->m_MyPath._vptr_CPathData = off_47B0E10;
  CPathFollower::~CPathFollower(this);
  operator delete(this);
}


// CPathFollower::SetNotifyPathTarget  (line 165, @0x0000000002f1dd90, libserver.so)
void __fastcall CPathFollower::SetNotifyPathTarget(CPathFollower *const this, bool bNotifyPathTarget)
{
  this->m_bNotifyPathTarget = bNotifyPathTarget;
}


// CPathFollower::UpdatePathAndFollow  (line 172, @0x0000000002f20240, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsDebugFilterMatch, IsDebugging, IsValid, LookupEntity, PathCapabilities_t, SetPathingBot, UpdatePathForTarget<INextBot>, curtime, entindex, operator CEntityInstance*, operator const CBaseEntity*, operator!=, operator=
// calls: NextBotManager::IsDebugFilterMatch, CPathFollower::UpdateFollow, CPathFollower::NotifyPathTarget, CPath::ComputePathToPosCore, CEntityInstance::GetEntityIndex, CGlobalVarsBase::curtime, DevMsg(char const*,...), CPath::ComputePathToEntityCore, CBaseEntity::GetAbsOrigin
// strings: "%3.2f: bot(#%d) UpdatePathForTarget. Target point is invalid.\n", "%3.2f: Entity(#%d) UpdatePathForTarget failed. No subject.\n"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CPathFollower::UpdatePathAndFollow(
        CPathFollower *const this,
        INextBot *const rBot,
        const CNavTarget *const rTarget,
        const CPathCostBase *const rCostFunc)
{
  char v7; // al
  CNavPathNB *m_rPath; // rdi
  CNavPathNB *v9; // rax
  CNavPathNB *v10; // rbx
  INextBot *m_pBot; // r13
  bool v12; // zf
  const CBaseCombatCharacter *v13; // rax
  char v14; // al
  __int64 v15; // rax
  __int64 v16; // rax
  uint32 m_Index; // eax
  CEntityIdentity *v18; // rcx
  CEntityIdentity *v19; // rcx
  _BOOL4 v20; // r13d
  unsigned int m_Data; // r14d
  float v22; // xmm0_4
  CEntityIndex v23; // eax
  double m_flCurrentTime; // xmm0_8
  CGlobalVars *v25; // r13
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rdx
  const CBaseEntity *m_pInstance; // r14
  const CBaseEntity *v28; // r13
  bool v29; // al
  const Vector *AbsOrigin; // rax
  int32 rCostFuncb; // [rsp+8h] [rbp-68h]
  Vector vGoalPos; // [rsp+10h] [rbp-60h] BYREF
  PathCapabilities_t rPathCaps; // [rsp+20h] [rbp-50h] BYREF

  this->m_pBot = rBot;
  if ( (g_NextBotManager.m_debugType & 4) != 0
    && (g_NextBotManager.m_debugFilterList.m_Size == 0 || NextBotManager::IsDebugFilterMatch(&g_NextBotManager, rBot)) )
  {
    v7 = (*(rBot->_vptr_INextBotEventResponder + 96))(rBot, &loc_2 + 2);
  }
  else
  {
    v7 = 0;
  }
  m_rPath = this->m_rPath;
  this->m_bIsDebugging = v7;
  (*(m_rPath->_vptr_CPathData + 6))(m_rPath, this);
  v9 = this->m_rPath;
  v9->m_Target.m_hTargetEntity.m_Index = rTarget->m_hTargetEntity.m_Index;
  v9->m_Target.m_vTargetPoint.x = rTarget->m_vTargetPoint.x;
  v9->m_Target.m_vTargetPoint.y = rTarget->m_vTargetPoint.y;
  v9->m_Target.m_vTargetPoint.z = rTarget->m_vTargetPoint.z;
  v9->m_Target.m_bUseEntity = rTarget->m_bUseEntity;
  v9->m_Target.m_bIsOpenGoal = rTarget->m_bIsOpenGoal;
  this->m_rPath->m_pBot = this->m_pBot;
  v10 = this->m_rPath;
  m_pBot = this->m_pBot;
  if ( (*(v10->_vptr_CPathData + 9))(v10) != 0 )
  {
    rPathCaps.m_pPathingEntity = 0;
    rPathCaps.m_bIsDebugging = 0;
    rPathCaps.m_flMoverStepHeight = 1.0;
    rPathCaps.m_flMoverCrouchHullHeight = 1.0;
    rPathCaps.m_pPathCost = rCostFunc;
    v13 = (*(m_pBot->_vptr_INextBotEventResponder + 66))(m_pBot);
    v12 = (g_NextBotManager.m_debugType & 4) == 0;
    rPathCaps.m_pPathingEntity = v13;
    if ( v12
      || g_NextBotManager.m_debugFilterList.m_Size != 0
      && !NextBotManager::IsDebugFilterMatch(&g_NextBotManager, m_pBot) )
    {
      v14 = 0;
    }
    else
    {
      v14 = (*(m_pBot->_vptr_INextBotEventResponder + 96))(m_pBot, 4);
    }
    rPathCaps.m_bIsDebugging = v14;
    v15 = (*(m_pBot->_vptr_INextBotEventResponder + 69))(m_pBot);
    if ( v15 != 0 )
    {
      rPathCaps.m_flMoverCrouchHullHeight = (*(*v15 + 768LL))(v15);
      v16 = (*(m_pBot->_vptr_INextBotEventResponder + 68))(m_pBot);
      if ( v16 != 0 )
        rPathCaps.m_flMoverStepHeight = (*(*v16 + 792LL))(v16);
    }
    if ( rPathCaps.m_pPathingEntity != 0 )
    {
      if ( v10->m_Target.m_bUseEntity )
      {
        m_Index = v10->m_Target.m_hTargetEntity.m_Index;
        if ( m_Index + 2 > 1 )
        {
          v18 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v10->m_Target.m_hTargetEntity.m_Index) >> 9)
                                                               & 0x3F];
          if ( v18 != 0 )
          {
            v19 = &v18[v10->m_Target.m_hTargetEntity.m_Index & 0x1FF];
            if ( v19 != 0 && m_Index == v19->m_EHandle.m_Index )
            {
              m_pInstance = v19->m_pInstance;
              if ( v19->m_pInstance != 0 )
              {
                v28 = (*(m_pInstance->_vptr_IHandleEntity + 148))(v19->m_pInstance);
                if ( v28 != 0 )
                {
                  if ( (*(v10->_vptr_CPathData + 10))(v10, v28, &vGoalPos) != 0 )
                    v29 = CPath::ComputePathToPosCore(v10, &rPathCaps, &vGoalPos, rCostFunc);
                  else
                    v29 = CPath::ComputePathToEntityCore(v10, &rPathCaps, v28, rCostFunc);
                }
                else
                {
                  AbsOrigin = CBaseEntity::GetAbsOrigin(m_pInstance);
                  v29 = CPath::ComputePathToPosCore(v10, &rPathCaps, AbsOrigin, rCostFunc);
                }
                (*(v10->_vptr_CPathData + 8))(v10, v29);
                goto LABEL_7;
              }
            }
          }
        }
        v20 = 0;
        if ( rPathCaps.m_bIsDebugging )
        {
          v23.m_Data = CEntityInstance::GetEntityIndex(rPathCaps.m_pPathingEntity).m_Data;
          m_flCurrentTime = 0.0;
          v25 = gpGlobals;
          if ( gpGlobals != 0 )
          {
            if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
            {
              m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
              if ( m_pfnWarningFunc != 0 )
              {
                rCostFuncb = v23.m_Data;
                (m_pfnWarningFunc)(1, 0.0);
                v23.m_Data = rCostFuncb;
              }
            }
            m_flCurrentTime = v25->m_flCurrentTime;
          }
          DevMsg("%3.2f: Entity(#%d) UpdatePathForTarget failed. No subject.\n", m_flCurrentTime, v23.m_Data);
          v20 = 0;
        }
      }
      else if ( vec3_invalid.x == v10->m_Target.m_vTargetPoint.x
             && vec3_invalid.y == v10->m_Target.m_vTargetPoint.y
             && vec3_invalid.z == v10->m_Target.m_vTargetPoint.z )
      {
        v20 = 0;
        if ( rPathCaps.m_bIsDebugging )
        {
          m_Data = CEntityInstance::GetEntityIndex(rPathCaps.m_pPathingEntity).m_Data;
          v22 = CGlobalVarsBase::curtime(gpGlobals, 0);
          DevMsg("%3.2f: bot(#%d) UpdatePathForTarget. Target point is invalid.\n", m_Data, v22);
        }
      }
      else
      {
        v20 = CPath::ComputePathToPosCore(v10, &rPathCaps, &v10->m_Target.m_vTargetPoint, rCostFunc);
      }
    }
    else
    {
      v20 = 0;
    }
    (*(v10->_vptr_CPathData + 8))(v10, v20);
  }
LABEL_7:
  CPathFollower::UpdateFollow(this, this->m_pBot);
  v12 = !this->m_bNotifyPathTarget;
  this->m_pBot = rBot;
  if ( !v12 )
    CPathFollower::NotifyPathTarget(this);
  (*(this->m_rPath->_vptr_CPathData + 11))(this->m_rPath);
  this->m_rPath->m_pBot = 0;
  this->m_pBot = 0;
}


