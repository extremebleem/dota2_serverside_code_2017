
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Bot_Pathing::Init  (line 31, @0x0000000002867f60, libserver.so)  // inlines: GetGridCountX, GetGridCountY, ResetQueuedNodePool, SetSize, V_memset, memset
// calls: memset, DOTACommander, CUtlVectorBase<sPathingInfo, CUtlMemory<sPathingInfo, int> >::SetCount
// callers: CDOTA_Bot::Init
void __fastcall CDOTA_Bot_Pathing::Init(CDOTA_Bot_Pathing *const this, CDOTA_Bot *pBot)
{
  CUtlArray<sQueuedNode,1024ul> *p_m_pNodeQueuePool; // rdi
  CDOTA_TeamCommander *m_pTeamCommander; // rax
  int v5; // r12d
  CDOTA_Commander *v6; // rax
  __int64 v7; // r12
  CDOTA_Commander *v8; // rax

  this->m_pBot = pBot;
  p_m_pNodeQueuePool = &this->m_pNodeQueuePool;
  m_pTeamCommander = pBot->m_pTeamCommander;
  *&p_m_pNodeQueuePool[1].m_Memory[346].iPrevQueuedNode = 1024;
  p_m_pNodeQueuePool[1].m_Memory[2].iEstimatedTotalDist = 0;
  *&p_m_pNodeQueuePool[-1].m_Memory[1022].iPrevQueuedNode = m_pTeamCommander;
  memset(p_m_pNodeQueuePool, -1, sizeof(CUtlArray<sQueuedNode,1024ul>));
  this->m_iFirstUnused = 0;
  this->m_iHighWatermark = 0;
  v5 = DOTACommander()->m_iGridCount[0];
  v6 = DOTACommander();
  CUtlVectorBase<sPathingInfo,CUtlMemory<sPathingInfo,int>>::SetCount(&this->m_PathingGrid, v5 * v6->m_iGridCount[1]);
  v7 = DOTACommander()->m_iGridCount[0];
  v8 = DOTACommander();
  memset(this->m_PathingGrid.m_Memory.m_pMemory, 0, 10 * v7 * v8->m_iGridCount[1]);
}


// CDOTA_Bot_Pathing::FindTotalAvoidanceForPath  (line 48, @0x000000000283f680, libserver.so)  // inlines: CVProfScope, IsEnabled, ~CVProfScope
// calls: CDOTA_Bot_Pathing::BuildPath, CVProfile::ExitScope, CVProfile::EnterScope, CDOTA_Bot::GetTankRating, CDOTA_Bot::GetInnerTowerAvoidanceCost, CDOTA_TeamCommander::InFountainAvoidanceGrid, CDOTA_Bot::GetTowerAvoidanceCost, CDOTA_TeamCommander::InTowerAvoidanceGrid, CDOTA_TeamCommander::InInnerTowerAvoidanceGrid, CDOTA_Bot::GetAvoidanceAmountForGrid, CDOTA_Bot::GetFountainAvoidanceCost, _Unwind_Resume
// callers: CDOTA_BotMode_Attack::GetAttackScore, CDOTA_BotMode_SideShop::GetDesire
// strings: "CDOTA_Bot_Pathing::FindTotalAvoidanceForPath"
int __fastcall CDOTA_Bot_Pathing::FindTotalAvoidanceForPath(
        CDOTA_Bot_Pathing *const this,
        const Vector *const vStart,
        const Vector *const vEnd,
        bool bTowerOnly)
{
  int m_enabled; // edi
  int v8; // eax
  int v9; // r13d
  float FountainAvoidanceCost; // xmm1_4
  CDOTA_Bot_Pathing *p_m_PathArray; // r12
  float InnerTowerAvoidanceCost; // xmm1_4
  int v14; // r13d
  bool v15; // al
  int m_pTeamCommander; // r15d
  int v17; // r14d
  bool v18; // al
  float v19; // xmm1_4
  int v20; // r13d
  bool VProf_50; // [rsp+6h] [rbp-4Ah]
  float fTankRating; // [rsp+18h] [rbp-38h]
  int iTowerAvoidance; // [rsp+1Ch] [rbp-34h]

  m_enabled = g_VProfCurrentProfile.m_enabled;
  VProf_50 = m_enabled != 0;
  if ( m_enabled != 0 )
    CVProfile::EnterScope(&g_VProfCurrentProfile, "CDOTA_Bot_Pathing::FindTotalAvoidanceForPath", 0, "Bots", 0, 4);
  v8 = CDOTA_Bot_Pathing::BuildPath(this, vStart, vEnd, 1, 0);
  v9 = 400;
  if ( v8 == 0 )
  {
    fTankRating = CDOTA_Bot::GetTankRating(this->m_pBot);
    LOWORD(v9) = 0;
    p_m_PathArray = &this->m_PathArray;
    do
    {
      m_pTeamCommander = p_m_PathArray->m_pTeamCommander;
      if ( LODWORD(p_m_PathArray->m_pTeamCommander) == -1 )
        break;
      v17 = m_pTeamCommander >> 16;
      if ( bTowerOnly )
      {
        iTowerAvoidance = CDOTA_Bot::GetTowerAvoidanceCost(this->m_pBot, fTankRating, FountainAvoidanceCost);
        v18 = CDOTA_TeamCommander::InTowerAvoidanceGrid(this->m_pTeamCommander, v17, m_pTeamCommander);
        v19 = 0.0;
        if ( v18 )
          v19 = iTowerAvoidance;
        v20 = (v9 + v19);
        if ( CDOTA_TeamCommander::InInnerTowerAvoidanceGrid(this->m_pTeamCommander, v17, m_pTeamCommander) )
          InnerTowerAvoidanceCost = CDOTA_Bot::GetInnerTowerAvoidanceCost(this->m_pBot, iTowerAvoidance);
        else
          InnerTowerAvoidanceCost = 0.0;
        v14 = (v20 + InnerTowerAvoidanceCost);
        v15 = CDOTA_TeamCommander::InFountainAvoidanceGrid(this->m_pTeamCommander, v17, m_pTeamCommander);
        FountainAvoidanceCost = 0.0;
        if ( v15 )
          FountainAvoidanceCost = CDOTA_Bot::GetFountainAvoidanceCost(this->m_pBot, iTowerAvoidance);
        v9 = (v14 + FountainAvoidanceCost);
      }
      else
      {
        v9 += CDOTA_Bot::GetAvoidanceAmountForGrid(this->m_pBot, fTankRating, v17, m_pTeamCommander, 0);
      }
      p_m_PathArray = (p_m_PathArray + 4);
    }
    while ( p_m_PathArray != &this->m_iHighWatermark );
  }
  if ( VProf_50 )
    CVProfile::ExitScope(&g_VProfCurrentProfile);
  return v9;
}


// CDOTA_Bot_Pathing::FindNearbyValidGrid  (line 86, @0x000000000282b590, libserver.so)  // inlines: GetGridFromLocation, GetLocationFromGrid, IsGridPassable, Length2DSqr, VectorSubtract, operator-
// calls: DOTACommander, CDOTA_Commander::GetGridFromLocation, CDOTA_Commander::IsGridPassable, CDOTA_Commander::GetLocationFromGrid
// callers: CDOTA_Bot_Pathing::FindNearbyValidLocation, CDOTA_Bot_Pathing::BuildPath
bool __fastcall CDOTA_Bot_Pathing::FindNearbyValidGrid(
        CDOTA_Bot_Pathing *const this,
        const Vector *const vLoc,
        int iSearchSize,
        int *pX,
        int *pY)
{
  CDOTA_Commander *v5; // rax
  int v6; // r12d
  int v7; // ebx
  CDOTA_Commander *v8; // rax
  bool result; // al
  int v10; // ebx
  int v11; // r12d
  int v12; // r14d
  int v13; // r15d
  CDOTA_Commander *v14; // rax
  CDOTA_Commander *v15; // rax
  int i; // [rsp+20h] [rbp-70h]
  int iMinX; // [rsp+24h] [rbp-6Ch]
  int iScanY; // [rsp+30h] [rbp-60h]
  int iMaxX; // [rsp+34h] [rbp-5Ch]
  float fBestValidDistSqr; // [rsp+38h] [rbp-58h]
  int iBestValidX; // [rsp+3Ch] [rbp-54h]
  int iCenterX; // [rsp+48h] [rbp-48h] BYREF
  int iCenterY; // [rsp+4Ch] [rbp-44h] BYREF
  float v28[16]; // [rsp+50h] [rbp-40h]

  if ( this->m_pTeamCommander == 0 )
    return 0;
  v5 = DOTACommander();
  CDOTA_Commander::GetGridFromLocation(v5, vLoc, &iCenterX, &iCenterY);
  v6 = iCenterY;
  v7 = iCenterX;
  v8 = DOTACommander();
  result = CDOTA_Commander::IsGridPassable(v8, v7, v6);
  if ( result )
  {
    *pX = iCenterX;
    *pY = iCenterY;
    return result;
  }
  i = 1;
  if ( iSearchSize <= 0 )
    return 0;
  while ( 1 )
  {
    v10 = i + iCenterY;
    v11 = iCenterX - i;
    v12 = iCenterY - i;
    iMinX = iCenterX - i;
    iMaxX = i + iCenterX;
    if ( iCenterX - i <= i + iCenterX )
    {
      fBestValidDistSqr = 0.0;
      iScanY = -1;
      iBestValidX = -1;
      do
      {
        if ( v12 <= v10 )
        {
          v13 = v12;
          do
          {
            while ( 1 )
            {
              if ( iMaxX == v11 || iMinX == v11 || v13 == v12 || v13 == v10 )
              {
                v14 = DOTACommander();
                if ( CDOTA_Commander::IsGridPassable(v14, v11, v13) )
                {
                  v15 = DOTACommander();
                  *v28 = *&CDOTA_Commander::GetLocationFromGrid(v15, v11, v13).x;
                  if ( iBestValidX == -1
                    || fBestValidDistSqr > (((v28[0] - vLoc->x) * (v28[0] - vLoc->x))
                                          + ((v28[1] - vLoc->y) * (v28[1] - vLoc->y))) )
                  {
                    break;
                  }
                }
              }
              if ( v10 < ++v13 )
                goto LABEL_16;
            }
            iScanY = v13++;
            iBestValidX = v11;
            fBestValidDistSqr = ((v28[0] - vLoc->x) * (v28[0] - vLoc->x)) + ((v28[1] - vLoc->y) * (v28[1] - vLoc->y));
          }
          while ( v10 >= v13 );
        }
LABEL_16:
        ++v11;
      }
      while ( iMaxX >= v11 );
      if ( iBestValidX != -1 )
        break;
    }
    if ( iSearchSize < ++i )
      return 0;
  }
  *pX = iBestValidX;
  *pY = iScanY;
  return 1;
}


// CDOTA_Bot_Pathing::FindNearbyValidLocation  (line 149, @0x000000000282b7a0, libserver.so)  // inlines: GetGridSizeX
// calls: DOTACommander, CDOTA_Bot_Pathing::FindNearbyValidGrid, CDOTA_Commander::GetLocationFromGrid
// callers: CDOTA_BotMode_DefendTower::CalculateDesiredLocation, CDOTA_BotMode_Ward::Think
__m128i __fastcall CDOTA_Bot_Pathing::FindNearbyValidLocation(
        CDOTA_Bot_Pathing *const this,
        const Vector *const vLoc,
        float a3,
        float fRadius)
{
  CDOTA_Commander *v6; // rax
  vec_t z; // eax
  int v9; // r12d
  int v10; // ebx
  CDOTA_Commander *v11; // rax
  int x; // [rsp+28h] [rbp-28h] BYREF
  int y; // [rsp+2Ch] [rbp-24h] BYREF
  __m128i v15; // [rsp+30h] [rbp-20h] BYREF

  v6 = DOTACommander();
  if ( CDOTA_Bot_Pathing::FindNearbyValidGrid(
         this,
         vLoc,
         (a3 / ((v6->m_vWorldBounds[1].x - v6->m_vWorldBounds[0].x) / v6->m_iGridCount[0])),
         &x,
         &y) )
  {
    v9 = y;
    v10 = x;
    v11 = DOTACommander();
    *v15.m128i_i8 = CDOTA_Commander::GetLocationFromGrid(v11, v10, v9);
  }
  else
  {
    z = vec3_invalid.z;
    v15.m128i_i64[0] = *&vec3_invalid.x;
    *&v15.m128i_i32[2] = z;
  }
  return _mm_loadl_epi64(&v15);
}


// CDOTA_Bot_Pathing::GetDebugString  (line 162, @0x0000000002840f90, libserver.so)
// calls: V_sprintf_safe<128ul>
// callers: CDOTA_Commander::DrawDebug
// strings: "In FoW", "Allow Vis", "InProgress", "%s (%s) to %d %d - %d updates, %d iterations"
const char *__fastcall CDOTA_Bot_Pathing::GetDebugString(CDOTA_Bot_Pathing *const this)
{
  const char *v1; // rcx
  bool v2; // zf
  int m_iIterations; // esi
  int m_iEndY; // r9d
  char *m_DebugStringBuffer; // rbx
  const char *pszStateName[3]; // [rsp+10h] [rbp-30h]

  v1 = "Allow Vis";
  v2 = !this->m_bAllowVisibleToEnemy;
  pszStateName[0] = "Success";
  pszStateName[1] = "Failure";
  m_iIterations = this->m_iIterations;
  m_iEndY = this->m_iEndY;
  pszStateName[2] = "InProgress";
  m_DebugStringBuffer = this->m_DebugStringBuffer;
  if ( v2 )
    v1 = "In FoW";
  V_sprintf_safe<128ul>(
    this->m_DebugStringBuffer,
    "%s (%s) to %d %d - %d updates, %d iterations",
    pszStateName[this->m_iLastResult],
    v1,
    this->m_iEndX,
    m_iEndY,
    this->m_iUpdatesRequired,
    m_iIterations);
  return m_DebugStringBuffer;
}


// CDOTA_Bot_Pathing::BuildPath  (line 176, @0x000000000283f3b0, libserver.so)  // inlines: CVProfScope, EstimateDistance, FastRSqrtFast, FastSqrtEst, GetGridCountX, GetGridCountY, IsEnabled, ResetQueuedNodePool, V_memset, _mm_load_ss, _mm_rsqrt_ss, _mm_set_ss, memset, sq, ~CVProfScope
// calls: CDOTA_Bot_Pathing::FindNearbyValidGrid, CVProfile::ExitScope, DOTACommander, memset, CDOTA_Bot_Pathing::GetQueuedNodeFromPool, CDOTA_Bot_Pathing::UpdateSearch, CVProfile::EnterScope, CDOTA_Bot_Pathing::GenerateClearPath, _Unwind_Resume
// callers: CDOTA_BotAction_MoveTo::UpdateLocation, CDOTA_BotAction_MoveTo::OnStart, CDOTA_BotAction_MoveTo::Think, CDOTA_Bot_Pathing::FindTotalAvoidanceForPath
// strings: "CDOTA_Bot_Pathing::BuildPath"
// globals: iFullPathCount, iQuickPathCount
int __fastcall CDOTA_Bot_Pathing::BuildPath(
        CDOTA_Bot_Pathing *const this,
        const Vector *const vStart,
        const Vector *const vEnd,
        bool bAllowVisibleToEnemy,
        bool bTimeCapped)
{
  int m_enabled; // esi
  bool v11; // r12
  int result; // eax
  int m_iStartX; // esi
  int m_iStartY; // edx
  __int64 v15; // r13
  CDOTA_Commander *v16; // rax
  unsigned int QueuedNodeFromPool; // eax
  float v18; // xmm1_4
  int v19; // eax
  int vStartb; // [rsp+8h] [rbp-38h]
  float vStartc; // [rsp+8h] [rbp-38h]
  const Vector *vStarta; // [rsp+8h] [rbp-38h]

  m_enabled = g_VProfCurrentProfile.m_enabled;
  v11 = m_enabled != 0;
  if ( m_enabled != 0 )
  {
    vStarta = vStart;
    CVProfile::EnterScope(&g_VProfCurrentProfile, "CDOTA_Bot_Pathing::BuildPath", 0, "Bots", 0, 4);
    vStart = vStarta;
  }
  if ( CDOTA_Bot_Pathing::FindNearbyValidGrid(this, vStart, 2, &this->m_iStartX, &this->m_iStartY)
    && CDOTA_Bot_Pathing::FindNearbyValidGrid(this, vEnd, 3, &this->m_iEndX, &this->m_iEndY) )
  {
    m_iStartX = this->m_iStartX;
    if ( (this->m_iEndX - m_iStartX + 9) <= 0x12
      && (m_iStartY = this->m_iStartY, (this->m_iEndY - m_iStartY + 9) <= 0x12)
      && CDOTA_Bot_Pathing::GenerateClearPath(
           this,
           m_iStartX,
           m_iStartY,
           this->m_iEndX,
           this->m_iEndY,
           15.0,
           bAllowVisibleToEnemy,
           1) )
    {
      ++iQuickPathCount;
      result = 0;
      this->m_iLastResult = 0;
    }
    else
    {
      ++iFullPathCount;
      v15 = DOTACommander()->m_iGridCount[0];
      v16 = DOTACommander();
      memset(this->m_PathingGrid.m_Memory.m_pMemory, 0, v16->m_iGridCount[1] * 10 * v15);
      memset(&this->m_pNodeQueuePool, -1, 12LL * this->m_iHighWatermark);
      this->m_iFirstUnused = 0;
      this->m_iHighWatermark = 0;
      QueuedNodeFromPool = CDOTA_Bot_Pathing::GetQueuedNodeFromPool(this);
      this->m_iHeadQueuedNode = QueuedNodeFromPool;
      if ( QueuedNodeFromPool > 0x3FF )
      {
        result = 1;
      }
      else
      {
        this->m_iLowestQueuedNode = QueuedNodeFromPool;
        this->m_pNodeQueuePool.m_Memory[QueuedNodeFromPool].iPackedGrid = this->m_iStartY | (this->m_iStartX << 16);
        v18 = (this->m_iStartX - this->m_iEndX);
        v19 = this->m_iStartY - this->m_iEndY;
        vStartc = (v18 * v18) + (v19 * v19);
        this->m_pNodeQueuePool.m_Memory[this->m_iHeadQueuedNode].iEstimatedTotalDist = ((((1.0 / fsqrt(vStartc))
                                                                                        * vStartc)
                                                                                       * 10.0)
                                                                                      + 0.0);
        this->m_iIterations = 0;
        this->m_bAllowVisibleToEnemy = bAllowVisibleToEnemy;
        this->m_iUpdatesRequired = 0;
        this->m_iLastResult = 2;
        result = CDOTA_Bot_Pathing::UpdateSearch(this, bTimeCapped);
      }
    }
  }
  else
  {
    this->m_iLastResult = 1;
    result = 1;
  }
  if ( v11 )
  {
    vStartb = result;
    CVProfile::ExitScope(&g_VProfCurrentProfile);
    return vStartb;
  }
  return result;
}


// CDOTA_Bot_Pathing::UpdateSearch  (line 233, @0x000000000283e480, libserver.so)  // inlines: CGameQueryAttributes, CGameTrace, CVProfScope, EstimateDistance, FastRSqrtFast, FastSqrtEst, GetAvoidanceQuery, GetBool, GetFloat, GetGridCountX, GetGridCountY, GetInt, GetLocationFromGrid, HitStaticOnlyByContents, InEffectAvoidance, InFountainAvoidance, InInnerTowerAvoidance, InTowerAvoidance, Init, IsEnabled, IsGridPassable, LengthSqr, NumCreepAvoidance, NumHeroAvoidance, Ray_t, RnCollisionAttr_t, RnQueryAttr_t, RnQueryShapeAttr_t, SetCollisionGroup, SetEntityToIgnore, SetIgnore, SetInteractsWith, SetObjectSetMask, TraceRay, UTIL_TraceLine, UTIL_TraceSphere, VectorAligned, VectorClear, VectorCopy, VectorSubtract, _mm_load_ss, _mm_rsqrt_ss, _mm_set_ss, operator[], sq, ~CVProfScope
// calls: CVProfile::ExitScope, CVProfile::EnterScope, Plat_FloatTime, DOTACommander, CDOTA_Bot::GetTankRating, CDOTA_Bot::GetTowerAvoidanceCost, CDOTA_Bot::GetPhysicalEffectAvoidanceCost, CDOTA_Bot::GetMagicalEffectAvoidanceCost, CDOTA_Bot::GetCreepAvoidanceCost, CDOTA_Bot::GetHeroAvoidanceCost, CDOTA_Commander::IsGridPassable, CDOTA_TeamCommander::GetRawAvoidanceForGrid (26 total)
// callers: CDOTA_BotAction_MoveTo::Think, CDOTA_Bot_Pathing::BuildPath
// strings: "CDOTA_Bot_Pathing::BuildPath", " Paths: %d\n", " Avg Iterations: %d\n", " Peak Iterations: %d\n", " Avg Updates: %d\n", " Peak Updates: %d\n" (9 total)
// globals: gfTotalMS, giPaths, giTotalIterations, giPeakIterations, gfPeakMS, giTotalUpdates, giPeakUpdates
int __fastcall CDOTA_Bot_Pathing::UpdateSearch(CDOTA_Bot_Pathing *const this, bool bTimeCapped)
{
  int m_enabled; // ecx
  __m128i v5; // xmm0
  unsigned int v6; // ebx
  float v7; // xmm1_4
  float v8; // xmm1_4
  float v9; // xmm1_4
  float v10; // xmm1_4
  int HeroAvoidanceCost; // eax
  __int64 m_iHeadQueuedNode; // rax
  int iPackedGrid; // r15d
  int v14; // eax
  int v15; // r15d
  double v16; // xmm0_8
  int v17; // eax
  bool v18; // sf
  __int64 v19; // rbx
  int v20; // r12d
  int v21; // r14d
  CDOTA_Commander *v22; // rax
  __int16 RawAvoidanceForGrid; // ax
  int v24; // eax
  int v25; // ecx
  __int64 v26; // rax
  sPathingInfo *v27; // rdx
  unsigned int QueuedNodeFromPool; // eax
  sQueuedNode *v29; // rdi
  int m_iLowestQueuedNode; // esi
  sQueuedNode *v31; // rdx
  __int16 iNextQueuedNode; // cx
  __int64 iPrevQueuedNode; // rcx
  int v34; // esi
  int v35; // eax
  int v36; // eax
  __m128d v37; // xmm1
  __m128d v38; // xmm0
  float v39; // xmm5_4
  float v40; // xmm1_4
  int v41; // eax
  int v42; // eax
  __int64 v43; // rcx
  __m128d v44; // xmm0
  __m128d v45; // xmm1
  float v46; // xmm1_4
  int v47; // r14d
  int iStepCount; // eax
  int v49; // r12d
  __int64 v50; // rbx
  __int64 v51; // rdx
  sPathingInfo *v52; // rbx
  CDOTA_Commander *v53; // rax
  ConVar *m_pParent; // rax
  float m_fValue; // xmm0_4
  int m_iIterations; // eax
  __m128d v57; // xmm1
  __m128d v58; // xmm0
  int m_iUpdatesRequired; // eax
  float v60; // xmm1_4
  int iAvoidanceHero; // [rsp+8h] [rbp-358h]
  int iAvoidanceCreep; // [rsp+Ch] [rbp-354h]
  int iAvoidanceEffectMagical; // [rsp+10h] [rbp-350h]
  int iAvoidanceEffectPhysical; // [rsp+14h] [rbp-34Ch]
  double fStartTime; // [rsp+18h] [rbp-348h]
  int iAvoidanceTower; // [rsp+20h] [rbp-340h]
  int iAdjacentDist; // [rsp+24h] [rbp-33Ch]
  int iEstimatedTotalDist; // [rsp+28h] [rbp-338h]
  int iHeroFactor; // [rsp+2Ch] [rbp-334h]
  int iCreepFactor; // [rsp+30h] [rbp-330h]
  int iEffectMagicalFactor; // [rsp+34h] [rbp-32Ch]
  int iBacktraceY; // [rsp+38h] [rbp-328h]
  int iBacktraceYa; // [rsp+38h] [rbp-328h]
  int iBacktraceX; // [rsp+3Ch] [rbp-324h]
  int iBacktraceXa; // [rsp+3Ch] [rbp-324h]
  int m_iLastResult; // [rsp+40h] [rbp-320h]
  float iFountainFactorb; // [rsp+44h] [rbp-31Ch]
  int iFountainFactor; // [rsp+44h] [rbp-31Ch]
  int iFountainFactora; // [rsp+44h] [rbp-31Ch]
  CUtlArray<sQueuedNode,1024ul> *p_m_pNodeQueuePool; // [rsp+48h] [rbp-318h]
  __int64 v81; // [rsp+50h] [rbp-310h]
  bool VProf_235; // [rsp+5Ah] [rbp-306h]
  int iGridCountY; // [rsp+5Ch] [rbp-304h]
  int iGridY; // [rsp+60h] [rbp-300h]
  int iGridCountX; // [rsp+68h] [rbp-2F8h]
  Vector vLocation; // [rsp+80h] [rbp-2E0h] BYREF
  Vector v88; // [rsp+90h] [rbp-2D0h]
  int iOffsetX[8]; // [rsp+A0h] [rbp-2C0h]
  int iOffsetY[8]; // [rsp+C0h] [rbp-2A0h]
  CGameQueryAttributes worldFilter; // [rsp+E0h] [rbp-280h] BYREF
  Ray_t ray; // [rsp+110h] [rbp-250h] BYREF
  trace_t v93; // [rsp+160h] [rbp-200h] BYREF
  CFmtStrN<256,false> v94; // [rsp+210h] [rbp-150h] BYREF
  unsigned __int64 v95; // [rsp+328h] [rbp-38h]
  Vector LocationFromGrid; // 0:kr00_12.12

  v95 = __readfsqword(0x28u);
  m_enabled = g_VProfCurrentProfile.m_enabled;
  VProf_235 = m_enabled != 0;
  if ( m_enabled != 0 )
    CVProfile::EnterScope(&g_VProfCurrentProfile, "CDOTA_Bot_Pathing::BuildPath", 0, "Bots", 0, 4);
  m_iLastResult = this->m_iLastResult;
  if ( m_iLastResult != 2 )
    goto LABEL_4;
  fStartTime = Plat_FloatTime();
  iOffsetX[0] = -1;
  iOffsetX[1] = -1;
  iOffsetX[2] = -1;
  iOffsetX[3] = 0;
  iOffsetX[4] = 1;
  iOffsetX[5] = 1;
  iOffsetX[6] = 1;
  iOffsetX[7] = 0;
  iOffsetY[0] = -1;
  iOffsetY[1] = 0;
  iOffsetY[2] = 1;
  iOffsetY[3] = 1;
  iOffsetY[4] = 1;
  iOffsetY[5] = 0;
  iOffsetY[6] = -1;
  iOffsetY[7] = -1;
  iGridCountX = DOTACommander()->m_iGridCount[0];
  iGridCountY = DOTACommander()->m_iGridCount[1];
  *v5.m128i_i32 = CDOTA_Bot::GetTankRating(this->m_pBot);
  v6 = _mm_cvtsi128_si32(v5);
  iAvoidanceTower = CDOTA_Bot::GetTowerAvoidanceCost(this->m_pBot, *v5.m128i_i32, v7);
  iAvoidanceEffectPhysical = CDOTA_Bot::GetPhysicalEffectAvoidanceCost(this->m_pBot, *&v6, v8);
  iAvoidanceEffectMagical = CDOTA_Bot::GetMagicalEffectAvoidanceCost(this->m_pBot);
  iAvoidanceCreep = CDOTA_Bot::GetCreepAvoidanceCost(this->m_pBot, *&v6, v9);
  HeroAvoidanceCost = CDOTA_Bot::GetHeroAvoidanceCost(this->m_pBot, *_mm_cvtsi32_si128(v6).m128i_i64, v10);
  ++this->m_iUpdatesRequired;
  iAvoidanceHero = HeroAvoidanceCost;
  m_iHeadQueuedNode = this->m_iHeadQueuedNode;
  if ( m_iHeadQueuedNode == -1 )
    goto LABEL_37;
  p_m_pNodeQueuePool = &this->m_pNodeQueuePool;
  while ( 2 )
  {
    iPackedGrid = p_m_pNodeQueuePool->m_Memory[m_iHeadQueuedNode].iPackedGrid;
    v14 = iPackedGrid;
    v15 = iPackedGrid >> 16;
    iGridY = v14;
    v16 = Plat_FloatTime();
    if ( bTimeCapped && (v16 - fStartTime) * 1000.0 > 0.2000000029802322 )
    {
      v44.m128d_f64[0] = Plat_FloatTime() - fStartTime;
      v45 = _mm_cvtps_pd(LODWORD(gfTotalMS));
      v45.m128d_f64[0] = v45.m128d_f64[0] + v44.m128d_f64[0];
      gfTotalMS = _mm_movedup_pd(v45).m128d_f64[0];
      v46 = gfPeakMS;
      if ( gfPeakMS <= v44.m128d_f64[0] )
        v46 = _mm_movedup_pd(v44).m128d_f64[0];
      gfPeakMS = v46;
      goto LABEL_4;
    }
    v17 = this->m_iIterations + 1;
    v18 = this->m_iIterations - 3998 < 0;
    this->m_iIterations = v17;
    if ( !(v18 ^ __OFSUB__(v17, 3999) | (v17 == 3999)) )
      goto LABEL_47;
    v19 = 0;
    v81 = iGridY + v15 * iGridCountY;
    do
    {
      v20 = v15 + iOffsetX[v19];
      if ( v20 < iGridCountX && v20 >= 0 )
      {
        v21 = iGridY + iOffsetY[v19];
        if ( v21 < iGridCountY && v21 >= 0 )
        {
          v22 = DOTACommander();
          if ( CDOTA_Commander::IsGridPassable(v22, v20, v21) )
          {
            iAdjacentDist = ((v19 & 1) == 0 ? 4 : 0) + this->m_PathingGrid.m_Memory.m_pMemory[v81].iDist + 10;
            iFountainFactorb = ((v20 - this->m_iEndX) * (v20 - this->m_iEndX))
                             + ((v21 - this->m_iEndY) * (v21 - this->m_iEndY));
            iEstimatedTotalDist = (iAdjacentDist + (((1.0 / fsqrt(iFountainFactorb)) * iFountainFactorb) * 10.0));
            RawAvoidanceForGrid = CDOTA_TeamCommander::GetRawAvoidanceForGrid(this->m_pTeamCommander, v20, v21);
            iBacktraceX = iAvoidanceTower * ((RawAvoidanceForGrid & 0x100) != 0)
                        + 2 * iAvoidanceTower * ((RawAvoidanceForGrid & 0x200) != 0);
            iFountainFactor = 80 * ((RawAvoidanceForGrid & 0x400) != 0);
            iBacktraceY = iAvoidanceEffectPhysical * ((RawAvoidanceForGrid & 0x1000) != 0);
            iEffectMagicalFactor = iAvoidanceEffectMagical * ((RawAvoidanceForGrid & 0x800) != 0);
            iCreepFactor = iAvoidanceCreep * (RawAvoidanceForGrid & 0xF);
            iHeroFactor = iAvoidanceHero * ((RawAvoidanceForGrid & 0xF0) >> 4);
            v24 = this->m_bAllowVisibleToEnemy
                ? 0
                : CDOTA_TeamCommander::IsGridVisibleToEnemy(this->m_pTeamCommander, v20, v21, 0.0)
                ? 0x14
                : 0;
            v25 = v24 + iHeroFactor + iCreepFactor + iEffectMagicalFactor + iBacktraceY + iFountainFactor + iBacktraceX;
            iFountainFactora = v25 + iEstimatedTotalDist;
            v26 = v21 + v20 * iGridCountY;
            v27 = &this->m_PathingGrid.m_Memory.m_pMemory[v26];
            if ( v27->iEstimatedTotalDist == 0 || iFountainFactora < v27->iEstimatedTotalDist )
            {
              v27->iPreviousX = v15;
              this->m_PathingGrid.m_Memory.m_pMemory[v26].iPreviousY = iGridY;
              this->m_PathingGrid.m_Memory.m_pMemory[v26].iDist = iAdjacentDist + v25;
              this->m_PathingGrid.m_Memory.m_pMemory[v26].iEstimatedTotalDist = iFountainFactora;
              this->m_PathingGrid.m_Memory.m_pMemory[v26].iStepCount = this->m_PathingGrid.m_Memory.m_pMemory[v81].iStepCount
                                                                     + 1;
              iBacktraceXa = this->m_iEndX;
              if ( iBacktraceXa == v20 )
              {
                iBacktraceYa = this->m_iEndY;
                if ( iBacktraceYa == v21 )
                {
                  v47 = iGridCountY * v20 + v21;
                  iStepCount = this->m_PathingGrid.m_Memory.m_pMemory[v47].iStepCount;
                  v49 = iStepCount - 1;
                  this->m_PathArray.m_Memory[this->m_PathingGrid.m_Memory.m_pMemory[v47].iStepCount] = -1;
                  if ( iStepCount > 0 )
                  {
                    do
                    {
                      if ( dota_bot_debug_path_draw.m_pParent->m_Value.m_nValue != 0 )
                      {
                        v53 = DOTACommander();
                        LocationFromGrid = CDOTA_Commander::GetLocationFromGrid(v53, iBacktraceXa, iBacktraceYa);
                        v88 = LocationFromGrid;
                        vLocation = LocationFromGrid;
                        memset(&v93.m_ShapeAttributes, 0, 31);
                        v93.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
                        CGameTrace::Init(&v93);
                        worldFilter.m_nCollisionGroup = 3;
                        worldFilter.m_nHierarchyId = 0;
                        worldFilter.m_nInteractsExclude = 0;
                        worldFilter.m_nInteractsAs = 0;
                        worldFilter.m_nEntityIdToIgnore = -1;
                        worldFilter.m_nObjectSetMask = 1;
                        worldFilter.m_nInteractsWith = 28673;
                        *(&worldFilter.RnQueryShapeAttr_t + 31) = *(&worldFilter.RnQueryShapeAttr_t + 31) & 0xF0 | 9;
                        worldFilter.m_nEntityIdToIgnore = EntityIDFromBaseEntity(0);
                        worldFilter.m_nHierarchyId = HierarchyIDFromBaseEntity(0);
                        ray.m_Start.w = 0.0;
                        memset(&ray.m_Delta.w, 0, 36);
                        m_pParent = phys_traceline_radius.m_pParent;
                        ray.m_IsRay = 1;
                        ray.m_Delta.z = -32768.0;
                        m_fValue = m_pParent->m_Value.m_fValue;
                        ray.m_Delta.y = LocationFromGrid.y - LocationFromGrid.y;
                        ray.m_flRadius = m_fValue;
                        ray.m_Delta.x = LocationFromGrid.x - LocationFromGrid.x;
                        ray.m_Start.x = LocationFromGrid.x;
                        ray.m_Start.y = LocationFromGrid.y;
                        ray.m_Start.z = 16384.0;
                        ray.m_IsSwept = (((ray.m_Delta.x * ray.m_Delta.x) + (ray.m_Delta.y * ray.m_Delta.y))
                                       + 1073741800.0) != 0.0;
                        CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &ray, &worldFilter, &v93);
                        vLocation.z = v93.endpos.z;
                        NDebugOverlay::Sphere(&vLocation, COERCE_DOUBLE(1112014848), 0xFFu, 0, 0, 1, 0.5);
                        v50 = v47;
                        CFmtStrN<256,false>::CFmtStrN(
                          &v94,
                          "%d, %d",
                          this->m_PathingGrid.m_Memory.m_pMemory[v50].iDist,
                          this->m_PathingGrid.m_Memory.m_pMemory[v50].iEstimatedTotalDist);
                        NDebugOverlay::EntityTextAtPosition(&vLocation, 0, v94.m_szBuf, 0.5, 255, 255, 255, 255);
                      }
                      else
                      {
                        v50 = v47;
                      }
                      v51 = v49--;
                      this->m_PathArray.m_Memory[v51] = iBacktraceYa | (iBacktraceXa << 16);
                      v52 = &this->m_PathingGrid.m_Memory.m_pMemory[v50];
                      iBacktraceXa = v52->iPreviousX;
                      iBacktraceYa = v52->iPreviousY;
                      v47 = iBacktraceYa + iBacktraceXa * iGridCountY;
                    }
                    while ( v49 != -1 );
                  }
                  v58.m128d_f64[0] = Plat_FloatTime();
                  m_iIterations = this->m_iIterations;
                  ++giPaths;
                  v57 = _mm_cvtps_pd(LODWORD(gfTotalMS));
                  giTotalIterations += m_iIterations;
                  v58.m128d_f64[0] = (v58.m128d_f64[0] - fStartTime) * 1000.0;
                  if ( giPeakIterations >= m_iIterations )
                    m_iIterations = giPeakIterations;
                  giPeakIterations = m_iIterations;
                  m_iUpdatesRequired = this->m_iUpdatesRequired;
                  v57.m128d_f64[0] = v57.m128d_f64[0] + v58.m128d_f64[0];
                  giTotalUpdates += m_iUpdatesRequired;
                  gfTotalMS = _mm_movedup_pd(v57).m128d_f64[0];
                  v60 = gfPeakMS;
                  if ( giPeakUpdates >= m_iUpdatesRequired )
                    m_iUpdatesRequired = giPeakUpdates;
                  giPeakUpdates = m_iUpdatesRequired;
                  if ( gfPeakMS <= v58.m128d_f64[0] )
                    v60 = _mm_movedup_pd(v58).m128d_f64[0];
                  gfPeakMS = v60;
                  if ( dota_bot_debug_path_avg.m_pParent->m_Value.m_nValue != 0 )
                  {
                    Msg("----\n");
                    Msg(" Paths: %d\n", giPaths);
                    Msg(" Avg Iterations: %d\n", giTotalIterations / giPaths);
                    Msg(" Peak Iterations: %d\n", giPeakIterations);
                    Msg(" Avg Updates: %d\n", giTotalUpdates / giPaths);
                    Msg(" Peak Updates: %d\n", giPeakUpdates);
                    Msg(" Avg MS: %2.3f\n", (gfTotalMS / giPaths));
                    Msg(" Peak MS: %2.3f\n", gfPeakMS);
                  }
                  if ( dota_bot_debug_path.m_pParent->m_Value.m_nValue != 0 )
                  {
                    Msg("----\n");
                    Msg(" Iterations: %d\n", this->m_iIterations);
                    Msg(" Updates: %d\n", this->m_iUpdatesRequired);
                  }
                  this->m_iLastResult = 0;
                  m_iLastResult = 0;
                  goto LABEL_4;
                }
              }
              QueuedNodeFromPool = CDOTA_Bot_Pathing::GetQueuedNodeFromPool(this);
              if ( QueuedNodeFromPool <= 0x3FF )
              {
                v29 = &p_m_pNodeQueuePool->m_Memory[QueuedNodeFromPool];
                v29->iPackedGrid = v21 | (v20 << 16);
                v29->iEstimatedTotalDist = iFountainFactora;
                m_iLowestQueuedNode = this->m_iLowestQueuedNode;
                v31 = &p_m_pNodeQueuePool->m_Memory[m_iLowestQueuedNode];
                iNextQueuedNode = v31->iNextQueuedNode;
                if ( iNextQueuedNode != -1 )
                {
                  if ( iFountainFactora <= v31->iEstimatedTotalDist )
                    goto LABEL_29;
                  while ( 1 )
                  {
                    LOWORD(m_iLowestQueuedNode) = iNextQueuedNode;
                    v31 = &p_m_pNodeQueuePool->m_Memory[iNextQueuedNode];
                    iNextQueuedNode = v31->iNextQueuedNode;
                    if ( iNextQueuedNode == -1 )
                      break;
                    if ( iFountainFactora <= v31->iEstimatedTotalDist )
                      goto LABEL_29;
                  }
                }
                if ( iFountainFactora <= v31->iEstimatedTotalDist )
                {
LABEL_29:
                  if ( v31->iPrevQueuedNode == -1 )
                    this->m_iLowestQueuedNode = QueuedNodeFromPool;
                  v29->iNextQueuedNode = m_iLowestQueuedNode;
                  v29->iPrevQueuedNode = v31->iPrevQueuedNode;
                  iPrevQueuedNode = v31->iPrevQueuedNode;
                  if ( iPrevQueuedNode != 0xFFFF )
                    p_m_pNodeQueuePool->m_Memory[iPrevQueuedNode].iNextQueuedNode = QueuedNodeFromPool;
                  v31->iPrevQueuedNode = QueuedNodeFromPool;
                  goto LABEL_13;
                }
                v29->iPrevQueuedNode = m_iLowestQueuedNode;
                v29->iNextQueuedNode = v31->iNextQueuedNode;
                v43 = v31->iNextQueuedNode;
                if ( v43 != 0xFFFF )
                  p_m_pNodeQueuePool->m_Memory[v43].iPrevQueuedNode = QueuedNodeFromPool;
                v31->iNextQueuedNode = QueuedNodeFromPool;
              }
            }
          }
        }
      }
LABEL_13:
      ++v19;
    }
    while ( v19 != 8 );
    v34 = this->m_iHeadQueuedNode;
    v35 = this->m_iLowestQueuedNode;
    if ( v34 == v35 )
    {
      v42 = p_m_pNodeQueuePool->m_Memory[v34].iNextQueuedNode;
      this->m_iHeadQueuedNode = v42;
      this->m_iLowestQueuedNode = v42;
    }
    else
    {
      this->m_iHeadQueuedNode = v35;
    }
    CDOTA_Bot_Pathing::ReturnQueuedNodeToPool(this, v34);
    m_iHeadQueuedNode = this->m_iHeadQueuedNode;
    if ( m_iHeadQueuedNode != -1 )
      continue;
    break;
  }
LABEL_37:
  v38.m128d_f64[0] = Plat_FloatTime();
  v36 = this->m_iIterations;
  ++giPaths;
  v37 = _mm_cvtps_pd(LODWORD(gfTotalMS));
  v38.m128d_f64[0] = v38.m128d_f64[0] - fStartTime;
  giTotalIterations += v36;
  v37.m128d_f64[0] = v37.m128d_f64[0] + v38.m128d_f64[0];
  v39 = _mm_movedup_pd(v37).m128d_f64[0];
  if ( giPeakIterations >= v36 )
    v36 = giPeakIterations;
  gfTotalMS = v39;
  v40 = gfPeakMS;
  giPeakIterations = v36;
  v41 = this->m_iUpdatesRequired;
  giTotalUpdates += v41;
  if ( giPeakUpdates >= v41 )
    v41 = giPeakUpdates;
  giPeakUpdates = v41;
  if ( gfPeakMS <= v38.m128d_f64[0] )
    v40 = _mm_movedup_pd(v38).m128d_f64[0];
  gfPeakMS = v40;
  if ( dota_bot_debug_path_avg.m_pParent->m_Value.m_nValue != 0 )
  {
    Msg("----\n");
    Msg(" Paths: %d\n", giPaths);
    Msg(" Avg Iterations: %d\n", giTotalIterations / giPaths);
    Msg(" Peak Iterations: %d\n", giPeakIterations);
    Msg(" Avg Updates: %d\n", giTotalUpdates / giPaths);
    Msg(" Peak Updates: %d\n", giPeakUpdates);
    Msg(" Avg MS: %2.3f\n", (gfTotalMS / giPaths));
    Msg(" Peak MS: %2.3f\n", gfPeakMS);
  }
  if ( dota_bot_debug_path.m_pParent->m_Value.m_nValue != 0 )
  {
    Msg("----\n");
    Msg(" Iterations: %d\n", this->m_iIterations);
    Msg(" Updates: %d\n", this->m_iUpdatesRequired);
  }
LABEL_47:
  this->m_iLastResult = 1;
  m_iLastResult = 1;
LABEL_4:
  if ( VProf_235 )
    CVProfile::ExitScope(&g_VProfCurrentProfile);
  return m_iLastResult;
}


// CDOTA_Bot_Pathing::ResetQueuedNodePool  (line 505, @0x000000000282ba70, libserver.so)  // inlines: V_memset, memset
// calls: memset
void __fastcall CDOTA_Bot_Pathing::ResetQueuedNodePool(CDOTA_Bot_Pathing *const this)
{
  memset(&this->m_pNodeQueuePool, -1, 12LL * this->m_iHighWatermark);
  this->m_iFirstUnused = 0;
  this->m_iHighWatermark = 0;
}


// CDOTA_Bot_Pathing::GetQueuedNodeFromPool  (line 516, @0x000000000282bac0, libserver.so)
// calls: Warning
// callers: CDOTA_Bot_Pathing::UpdateSearch, CDOTA_Bot_Pathing::BuildPath
// strings: "Ran out of bot pathfinding node queues!\n"
int __fastcall CDOTA_Bot_Pathing::GetQueuedNodeFromPool(CDOTA_Bot_Pathing *const this)
{
  int result; // eax
  sQueuedNode *v2; // rdx
  int m_iHighWatermark; // edx

  result = this->m_iFirstUnused;
  if ( result > 1023 )
  {
LABEL_6:
    Warning("Ran out of bot pathfinding node queues!\n");
    return -1;
  }
  v2 = &this->m_pNodeQueuePool.m_Memory[result + 1];
  if ( this->m_pNodeQueuePool.m_Memory[result].iPackedGrid != -1 )
  {
    while ( ++result != 1024 )
    {
      ++v2;
      if ( v2[-1].iPackedGrid == -1 )
        goto LABEL_7;
    }
    goto LABEL_6;
  }
LABEL_7:
  m_iHighWatermark = this->m_iHighWatermark;
  if ( result >= m_iHighWatermark )
    m_iHighWatermark = result;
  this->m_iHighWatermark = m_iHighWatermark;
  this->m_iFirstUnused = result + 1;
  return result;
}


// CDOTA_Bot_Pathing::ReturnQueuedNodeToPool  (line 536, @0x000000000282bb40, libserver.so)  // inlines: V_memset, memset
// callers: CDOTA_Bot_Pathing::UpdateSearch
void __fastcall CDOTA_Bot_Pathing::ReturnQueuedNodeToPool(CDOTA_Bot_Pathing *const this, int iNode)
{
  CUtlArray<sQueuedNode,1024ul> *p_m_pNodeQueuePool; // rdx
  sQueuedNode *v3; // rax
  __int64 iPrevQueuedNode; // rcx
  __int64 iNextQueuedNode; // rcx

  p_m_pNodeQueuePool = &this->m_pNodeQueuePool;
  v3 = &this->m_pNodeQueuePool.m_Memory[iNode];
  iPrevQueuedNode = v3->iPrevQueuedNode;
  if ( iPrevQueuedNode != 0xFFFF )
    p_m_pNodeQueuePool->m_Memory[iPrevQueuedNode].iNextQueuedNode = v3->iNextQueuedNode;
  iNextQueuedNode = v3->iNextQueuedNode;
  if ( iNextQueuedNode != 0xFFFF )
    p_m_pNodeQueuePool->m_Memory[iNextQueuedNode].iPrevQueuedNode = v3->iPrevQueuedNode;
  *&v3->iPackedGrid = -1;
  *&v3->iPrevQueuedNode = -1;
  if ( iNode > this->m_iFirstUnused )
    iNode = this->m_iFirstUnused;
  this->m_iFirstUnused = iNode;
}


// CDOTA_Bot_Pathing::GenerateClearPath  (line 553, @0x00000000028341c0, libserver.so)  // inlines: IsGridPassable
// calls: CDOTA_Bot::GetTankRating, CDOTA_Bot::GetAvoidanceAmountForGrid, DOTACommander, CDOTA_Commander::IsGridPassable, CDOTA_TeamCommander::IsGridVisibleToEnemy
// callers: CDOTA_Bot_Pathing::BuildPath
_BOOL8 __fastcall CDOTA_Bot_Pathing::GenerateClearPath(
        CDOTA_Bot_Pathing *const this,
        int iStartX,
        int iStartY,
        int iEndX,
        int iEndY,
        float fAvoidanceThreshold,
        bool bAllowVisibleToEnemy,
        bool bIncludeDestination)
{
  CUtlArray<int,1024ul> *p_m_PathArray; // r14
  int v10; // r12d
  int v11; // ebx
  int v12; // r13d
  CDOTA_Commander *v13; // rax
  bool v14; // al
  bool v15; // dl
  int v16; // ecx
  bool v17; // al
  int iStepY; // [rsp+4h] [rbp-5Ch]
  int iStepX; // [rsp+8h] [rbp-58h]
  int iDeltaY; // [rsp+Ch] [rbp-54h]
  float fTankRating; // [rsp+14h] [rbp-4Ch]
  bool v25; // [rsp+1Fh] [rbp-41h]
  int iDeltaX; // [rsp+28h] [rbp-38h]
  int iCount; // [rsp+2Ch] [rbp-34h]

  p_m_PathArray = &this->m_PathArray;
  v10 = iStartX;
  v11 = iStartY;
  iDeltaX = abs32(iEndX - iStartX);
  iDeltaY = abs32(iEndY - iStartY);
  iStepX = 2 * (iEndX > iStartX) - 1;
  v12 = iDeltaX - iDeltaY;
  iStepY = 2 * (iEndY > iStartY) - 1;
  iCount = 0;
  fTankRating = CDOTA_Bot::GetTankRating(this->m_pBot);
  while ( 1 )
  {
    ++iCount;
    p_m_PathArray->m_Memory[0] = v11 | (v10 << 16);
    this->m_PathArray.m_Memory[iCount] = -1;
    v14 = v10 == iEndX;
    v15 = v11 == iEndY;
    v25 = v10 == iEndX && v11 == iEndY;
    if ( v25 )
      break;
    v16 = 2 * v12;
    if ( 2 * v12 > -iDeltaY )
    {
      v10 += iStepX;
      v12 -= iDeltaY;
      v14 = iEndX == v10;
    }
    if ( iDeltaX > v16 )
    {
      v11 += iStepY;
      v12 += iDeltaX;
      v15 = iEndY == v11;
    }
    v17 = v15 && v14;
    if ( v17 && !bIncludeDestination )
      return v17;
    if ( (bAllowVisibleToEnemy || !CDOTA_TeamCommander::IsGridVisibleToEnemy(this->m_pTeamCommander, v10, v11, 0.0))
      && CDOTA_Bot::GetAvoidanceAmountForGrid(this->m_pBot, fTankRating, v10, v11, 0) <= fAvoidanceThreshold )
    {
      v13 = DOTACommander();
      p_m_PathArray = (p_m_PathArray + 4);
      if ( CDOTA_Commander::IsGridPassable(v13, v10, v11) )
        continue;
    }
    return v25;
  }
  return v25;
}


// CDOTA_Bot_Pathing::IsPathClear  (line 606, @0x0000000002834130, libserver.so)  // inlines: GetGridFromLocation
// calls: DOTACommander, CDOTA_Commander::GetGridFromLocation, CDOTA_Bot_Pathing::IsPathClear
// callers: CDOTA_BotMode_EvasiveManeuvers::CalculateDesiredLocation
_BOOL8 __fastcall CDOTA_Bot_Pathing::IsPathClear(
        CDOTA_Bot_Pathing *const this,
        const Vector *const vStart,
        const Vector *const vEnd,
        float fAvoidanceThreshold,
        bool bAllowVisibleToEnemy,
        bool bAllowEndBlocked)
{
  CDOTA_Commander *v11; // rax
  CDOTA_Commander *v12; // rax
  int iStartX; // [rsp+10h] [rbp-40h] BYREF
  int iStartY; // [rsp+14h] [rbp-3Ch] BYREF
  int iEndX; // [rsp+18h] [rbp-38h] BYREF
  int iEndY[13]; // [rsp+1Ch] [rbp-34h] BYREF

  v11 = DOTACommander();
  CDOTA_Commander::GetGridFromLocation(v11, vStart, &iStartX, &iStartY);
  v12 = DOTACommander();
  CDOTA_Commander::GetGridFromLocation(v12, vEnd, &iEndX, iEndY);
  return CDOTA_Bot_Pathing::IsPathClear(
           this,
           iStartX,
           iStartY,
           iEndX,
           iEndY[0],
           fAvoidanceThreshold,
           bAllowVisibleToEnemy,
           bAllowEndBlocked);
}


// CDOTA_Bot_Pathing::IsPathClear  (line 619, @0x0000000002833ff0, libserver.so)  // inlines: IsGridPassable
// calls: CDOTA_Bot::GetTankRating, CDOTA_Bot::GetAvoidanceAmountForGrid, DOTACommander, CDOTA_Commander::IsGridPassable, CDOTA_TeamCommander::IsGridVisibleToEnemy
// callers: CDOTA_BotAction_MoveTo::GeneratePathWaypoints, CDOTA_Bot_Pathing::IsPathClear, CDOTA_Bot_AbilityUsage_Tango::GetCurrentUsageDesire
_BOOL8 __fastcall CDOTA_Bot_Pathing::IsPathClear(
        CDOTA_Bot_Pathing *const this,
        int iStartX,
        int iStartY,
        int iEndX,
        int iEndY,
        float fAvoidanceThreshold,
        bool bAllowVisibleToEnemy,
        bool bAllowEndBlocked)
{
  int v9; // r12d
  int v10; // ebx
  signed int v11; // r14d
  int v12; // r13d
  int v13; // eax
  CDOTA_Commander *v14; // rax
  int iStepY; // [rsp+Ch] [rbp-54h]
  int iStepX; // [rsp+10h] [rbp-50h]
  int iDeltaY; // [rsp+14h] [rbp-4Ch]
  float fTankRating; // [rsp+1Ch] [rbp-44h]
  bool v22; // [rsp+27h] [rbp-39h]

  v9 = iStartY;
  v10 = iStartX;
  v11 = abs32(iEndX - iStartX);
  iDeltaY = abs32(iEndY - iStartY);
  iStepX = 2 * (iEndX > iStartX) - 1;
  v12 = v11 - iDeltaY;
  iStepY = 2 * (iEndY > iStartY) - 1;
  fTankRating = CDOTA_Bot::GetTankRating(this->m_pBot);
  do
  {
    v22 = v10 == iEndX && v9 == iEndY;
    if ( v22 )
      break;
    v13 = 2 * v12;
    if ( 2 * v12 > -iDeltaY )
    {
      v12 -= iDeltaY;
      v10 += iStepX;
    }
    if ( v11 > v13 )
    {
      v9 += iStepY;
      v12 += v11;
    }
    v14 = DOTACommander();
    if ( !CDOTA_Commander::IsGridPassable(v14, v10, v9) && (v10 != iEndX || v9 != iEndY || !bAllowEndBlocked) )
      break;
  }
  while ( (bAllowVisibleToEnemy || !CDOTA_TeamCommander::IsGridVisibleToEnemy(this->m_pTeamCommander, v10, v9, 0.0))
       && CDOTA_Bot::GetAvoidanceAmountForGrid(this->m_pBot, fTankRating, v10, v9, 0) <= fAvoidanceThreshold );
  return v22;
}


