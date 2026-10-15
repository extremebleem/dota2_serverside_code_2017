
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CWorldGameSystem::YouForgot::ToDefine_DEFINE_GAME_SYSTEM  (line 36, @0x0000000001f391a0, libserver.so)
void __cdecl CWorldGameSystem::YouForgot::ToDefine_DEFINE_GAME_SYSTEM()
{
  ;
}


// WorldInfo_t::WorldInfo_t  (line 38, @0x0000000001f391b0, libserver.so)  // inlines: operator=
// callers: CWorldGameSystem::CWorldGameSystem, CWorldGameSystem::PreSpawnGroupLoad
void __fastcall WorldInfo_t::WorldInfo_t(WorldInfo_t *const this)
{
  vec_t x; // xmm3_4
  vec_t y; // xmm2_4
  vec_t z; // xmm1_4

  this->m_nVRChaperoneType = VrChaperone_t::VRCHAPERONE_CHAPERONE;
  this->m_nVRMovementType = VrMovement_t::VRMOVEMENT_NONE;
  this->m_flMaxPropScreenSpaceWidth = 0.0;
  x = vec3_origin.x;
  this->m_flMinPropScreenSpaceWidth = 0.0;
  y = vec3_origin.y;
  this->m_bNewUnit = 0;
  z = vec3_origin.z;
  this->m_WorldMins.x = x;
  this->m_WorldMins.y = y;
  this->m_WorldMins.z = z;
  this->m_WorldMaxs.x = x;
  this->m_WorldMaxs.y = y;
  this->m_WorldMaxs.z = z;
  this->m_bStartDark = 0;
  this->m_flTileGridMinHeight = 0.0;
  this->m_flTileGridMaxHeight = 0.0;
  this->m_flTileGridStepHeight = 0.0;
  this->m_flTileGridHeightShift = 0.0;
  this->m_vTileGridFogBoundsMin.x = x;
  this->m_vTileGridFogBoundsMin.y = y;
  this->m_vTileGridFogBoundsMin.z = z;
  this->m_vTileGridFogBoundsMax.x = x;
  this->m_vTileGridFogBoundsMax.y = y;
  this->m_vTileGridFogBoundsMax.z = z;
  this->m_mapDataHandle = -1LL;
}


// WorldInfo_t::~WorldInfo_t  (line 65, @0x0000000001f39250, libserver.so)
void __fastcall WorldInfo_t::~WorldInfo_t(WorldInfo_t *const this)
{
  (*(*g_pDotaMapUtils + 96LL))(g_pDotaMapUtils, this->m_mapDataHandle);
  this->m_mapDataHandle = -1LL;
}


// CWorldGameSystem::CWorldGameSystem  (line 73, @0x0000000001f39280, libserver.so)  // inlines: CUtlHashtable, CUtlMemory
// calls: WorldInfo_t::WorldInfo_t
// callers: CGameSystemReallocatingFactory<CWorldGameSystem, CWorldGameSystem>::CreateGameSystem
void __fastcall CWorldGameSystem::CWorldGameSystem(CWorldGameSystem *const this)
{
  WorldInfo_t *p_m_defaultWorldInfo; // rdi

  p_m_defaultWorldInfo = &this->m_defaultWorldInfo;
  *&p_m_defaultWorldInfo[-1].m_flTileGridMaxHeight = off_3FCF090;
  *&p_m_defaultWorldInfo[-1].m_vTileGridFogBoundsMax.x = 0;
  p_m_defaultWorldInfo[-1].m_vTileGridFogBoundsMax.z = 0.0;
  *(&p_m_defaultWorldInfo[-1].m_vTileGridFogBoundsMax + 3) = 0;
  LODWORD(p_m_defaultWorldInfo[-1].m_mapDataHandle) = 0;
  HIDWORD(p_m_defaultWorldInfo[-1].m_mapDataHandle) = 32;
  LOBYTE(p_m_defaultWorldInfo[-1].m_nRefCount) = 0;
  WorldInfo_t::WorldInfo_t(p_m_defaultWorldInfo);
}


// CWorldGameSystem::GetWorldSpawnKeys  (line 77, @0x0000000001f392d0, libserver.so)  // inlines: Base, Element, FindKeyHash, GetValue, GetValueString, TempString, operator[]
// calls: V_stricmp_fast
// callers: CWorldGameSystem::PreSpawnGroupLoad
// strings: "defaultSession", "worldspawn"
// globals: CEntityKeyValues::sm_EmptyVariant
const CEntityKeyValues *__fastcall CWorldGameSystem::GetWorldSpawnKeys(
        CWorldGameSystem *const this,
        const char *pSpawnGroupName,
        const char *pEntityLumpName)
{
  __int64 v3; // rax
  const CEntityKeyValues **v4; // rax
  const CEntityKeyValues *v5; // rbx
  int m_nCount; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t m_nAllocated; // ax
  __int64 v8; // rdx
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rcx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v10; // rcx
  CEntityVariant *p_m_value; // rax
  const char *m_uint64; // rdi

  v3 = (*(*engine + 112LL))(engine, "defaultSession", 0, pSpawnGroupName, pEntityLumpName, 1);
  if ( v3 != 0 && *v3 != 0 )
  {
    v4 = *(v3 + 8);
    v5 = *v4;
    m_nCount = (*v4)->m_keyHashes.m_nCount;
    if ( m_nCount <= 0 )
    {
LABEL_16:
      p_m_value = &CEntityKeyValues::sm_EmptyVariant;
      m_uint64 = "";
      if ( CEntityKeyValues::sm_EmptyVariant.m_type == 30 )
        goto LABEL_14;
      goto LABEL_17;
    }
    m_nAllocated = v5->m_keyHashes.m_nAllocated;
    v8 = 0;
    while ( m_nAllocated == 0 )
    {
      if ( *(4 * v8) == -971301790 )
        goto LABEL_11;
LABEL_8:
      if ( m_nCount <= ++v8 )
        goto LABEL_16;
    }
    m_pElements = (&v5->m_keyHashes.m_nAllocAllocated + 1);
    if ( m_nAllocated > 9 )
      m_pElements = v5->m_keyHashes.m_pElements;
    if ( m_pElements[v8] != -971301790 )
      goto LABEL_8;
LABEL_11:
    if ( v5->m_keyValues.m_nAllocated != 0 )
      v10 = v5->m_keyValues.m_pElements;
    else
      v10 = 0;
    p_m_value = &v10[v8].m_value;
    m_uint64 = "";
    if ( p_m_value->m_type == 30 )
LABEL_14:
      m_uint64 = p_m_value->m_uint64;
LABEL_17:
    if ( V_stricmp_fast(m_uint64, "worldspawn") == 0 )
      return v5;
  }
  return 0;
}


// CWorldGameSystem::PreSpawnGroupLoad  (line 104, @0x0000000001f63700, libserver.so)  // inlines: AssignTo, Base, Element, FindKeyHash, FirstHandle, Get<float>, Get<int>, GetValue, GetValue<Vector>, GetValue<bool>, GetValue<float>, GetValue<int>, GetValueString, Insert, IsClientOnlySpawnGroup, Key, NextHandle, TempString, V_isempty, _V_strcmp, atof, atoi, operator char const*, operator(), operator=, operator[]
// calls: CUtlString::Get, CWorldGameSystem::GetWorldSpawnKeys, CSpawnGroupMgrGameSystem::GetWorldGroupId, operator new, WorldInfo_t::WorldInfo_t, strtol, VariantFieldTypeName, Warning, strtod, CUtlHashtable<unsigned int, WorldInfo_t*, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, WorldInfo_t*>, int> >::DoInsert<unsigned int>, CSpawnGroupMgrGameSystem::GetSpawnGroupWorldName, V_stricmp_fast (13 total)
// strings: "No conversion from %s to int now\n", "No conversion from %s to float now\n", "No free conversion of %s variant to Vector right now\n", "false", "No conversion from %s to bool now\n", "true" (7 total)
// globals: g_pSpawnGroupMgr, CEntityKeyValues::sm_EmptyVariant, jpt_1F63836, jpt_1F63996, jpt_1F63AF6, jpt_1F63C36, jpt_1F63CD9, jpt_1F63E1D (12 total)
void __fastcall CWorldGameSystem::PreSpawnGroupLoad(
        CWorldGameSystem *const this,
        const EventPreSpawnGroupLoad_t *const msg)
{
  CUtlString *p_m_EntityLumpName; // r14
  const char *v5; // rbx
  const char *v6; // rax
  const CEntityKeyValues *WorldSpawnKeys; // rbx
  WorldGroupId_t v8; // r15d
  WorldInfo_t *v9; // r14
  int m_nCount; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t m_nAllocated; // cx
  __int64 i; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v14; // rdx
  CEntityVariant *p_m_value; // rcx
  int16 m_type; // ax
  uint64 m_uint64; // rax
  int v18; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v19; // cx
  __int64 j; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v21; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v22; // rdx
  CEntityVariant *v23; // rcx
  const char *v24; // rax
  int16 v25; // ax
  uint64 v26; // rax
  int v27; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v28; // cx
  __int64 k; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v30; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v31; // rdx
  CEntityVariant *v32; // rdx
  const char *v33; // rax
  int16 v34; // ax
  float m_float; // xmm0_4
  int v36; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v37; // cx
  __int64 m; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v39; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v40; // rdx
  CEntityVariant *v41; // rdx
  const char *v42; // rax
  __int64 v43; // rdx
  const char *v44; // rax
  int16 v45; // ax
  float m_int; // xmm0_4
  int v47; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v48; // cx
  __int64 n; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v50; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v51; // rdx
  char m_char; // cl
  CEntityVariant *v53; // rdx
  int16 v54; // ax
  const char *v55; // rax
  __int64 v56; // rdx
  const char *v57; // rax
  int v58; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v59; // cx
  __int64 ii; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v61; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v62; // rdx
  char v63; // cl
  CEntityVariant *v64; // rdx
  int16 v65; // ax
  int v66; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v67; // cx
  __int64 jj; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v69; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v70; // rdx
  CEntityVariant *v71; // rdx
  int16 v72; // ax
  float m_flTileGridMinHeight; // xmm0_4
  int v74; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v75; // cx
  __int64 kk; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v77; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v78; // rdx
  CEntityVariant *v79; // rdx
  int16 v80; // ax
  float m_flTileGridMaxHeight; // xmm0_4
  int v82; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v83; // dx
  __int64 mm; // rcx
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v85; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v86; // rdx
  CEntityVariant *v87; // rdx
  int16 v88; // ax
  float m_flTileGridStepHeight; // xmm0_4
  int v90; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v91; // dx
  __int64 nn; // rcx
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v93; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v94; // rdx
  CEntityVariant *v95; // rdx
  int16 v96; // ax
  float m_flTileGridHeightShift; // xmm0_4
  int v98; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v99; // dx
  __int64 i1; // rcx
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v101; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v102; // rdx
  CEntityVariant *v103; // rdi
  int16 v104; // ax
  const char *v105; // rax
  vec_t v106; // xmm0_4
  vec_t v107; // xmm1_4
  vec_t v108; // xmm2_4
  int v109; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v110; // dx
  __int64 i2; // rcx
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v112; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v113; // rdx
  CEntityVariant *v114; // rdi
  int16 v115; // ax
  const char *v116; // rax
  vec_t x; // xmm0_4
  vec_t y; // xmm1_4
  vec_t z; // xmm2_4
  SpawnGroupHandle_t m_SpawnGroupHandle; // esi
  unsigned int v121; // edx
  int v122; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v123; // cx
  __int64 v124; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v125; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v126; // rdx
  CEntityVariant *v127; // rax
  const char *v128; // rax
  const char *v129; // rax
  int m_nAllocationCount; // ecx
  CUtlHashtableEntry<unsigned int,WorldInfo_t*> *m_pMemory; // rsi
  CUtlHashtableEntry<unsigned int,WorldInfo_t*> *v132; // rdx
  int v133; // eax
  int v134; // r14d
  unsigned __int64 v135; // rbx
  const char *SpawnGroupWorldName; // r15
  const char *v137; // rax
  int v138; // ecx
  int v139; // eax
  CUtlHashtableEntry<unsigned int,WorldInfo_t*> *v140; // rdx
  const char *v141; // rax
  const char *v142; // rax
  const char *v143; // rax
  const char *v144; // rax
  const char *v145; // rax
  const char *v146; // rax
  const char *v147; // rax
  const char *v148; // rax
  const char *v149; // rax
  const char *v150; // rax
  WorldInfo_t *v151; // rdx
  SpawnGroupHandle_t v152; // ecx
  unsigned int v153; // eax
  __int64 v154; // rdx
  __int64 v155; // rdx
  __int64 v156; // rdx
  __int64 v157; // rdx
  float v158; // [rsp+0h] [rbp-40h] BYREF
  float v159; // [rsp+4h] [rbp-3Ch] BYREF
  float v160; // [rsp+8h] [rbp-38h] BYREF

  p_m_EntityLumpName = &msg->m_EntityLumpName;
  v5 = CUtlString::Get(&msg->m_EntityLumpName);
  v6 = CUtlString::Get(&msg->m_SpawnGroupName);
  WorldSpawnKeys = CWorldGameSystem::GetWorldSpawnKeys(this, v6, v5);
  if ( WorldSpawnKeys != 0 )
  {
    v8.m_nHashCode = CSpawnGroupMgrGameSystem::GetWorldGroupId(g_pSpawnGroupMgr, msg->m_SpawnGroupHandle).m_nHashCode;
    v9 = operator new(0x68u);
    WorldInfo_t::WorldInfo_t(v9);
    v9->m_nRefCount = 1;
    if ( (*g_pLoopModeGameSharedState->_vptr_ILoopModeGameSharedState)(g_pLoopModeGameSharedState) != 0 )
      (*(*g_pWorldRendererMgr + 192LL))(g_pWorldRendererMgr, v8.m_nHashCode, v9, &v9->m_WorldMaxs);
    m_nCount = WorldSpawnKeys->m_keyHashes.m_nCount;
    if ( m_nCount > 0 )
    {
      m_nAllocated = WorldSpawnKeys->m_keyHashes.m_nAllocated;
      for ( i = 0; m_nCount > i; ++i )
      {
        if ( m_nAllocated != 0 )
        {
          m_pElements = (&WorldSpawnKeys->m_keyHashes.m_nAllocAllocated + 1);
          if ( m_nAllocated > 9 )
            m_pElements = WorldSpawnKeys->m_keyHashes.m_pElements;
          if ( m_pElements[i] == 473655680 )
          {
LABEL_12:
            if ( WorldSpawnKeys->m_keyValues.m_nAllocated != 0 )
              v14 = WorldSpawnKeys->m_keyValues.m_pElements;
            else
              v14 = 0;
            p_m_value = &v14[i].m_value;
LABEL_16:
            m_type = p_m_value->m_type;
            switch ( m_type )
            {
              case 0:
                LODWORD(m_uint64) = 0;
                break;
              case 1:
                LODWORD(m_uint64) = p_m_value->m_float;
                break;
              case 5:
                LODWORD(m_uint64) = p_m_value->m_int;
                break;
              case 6:
                LODWORD(m_uint64) = p_m_value->m_char;
                break;
              case 26:
                LODWORD(m_uint64) = 0x7FFFFFFF;
                if ( p_m_value->m_int64 <= 0x7FFFFFFF )
                {
                  LODWORD(m_uint64) = 0x80000000;
                  if ( p_m_value->m_uint64 >= 0xFFFFFFFF80000000LL )
                    m_uint64 = p_m_value->m_uint64;
                }
                break;
              case 30:
                LODWORD(m_uint64) = strtol(p_m_value->m_pszString, 0, 10);
                break;
              case 33:
                LODWORD(m_uint64) = 0x7FFFFFFF;
                if ( p_m_value->m_uint64 <= 0x7FFFFFFE )
                  LODWORD(m_uint64) = p_m_value->m_uint64;
                break;
              case 34:
                LODWORD(m_uint64) = p_m_value->m_float64;
                break;
              case 37:
                LODWORD(m_uint64) = 0x7FFFFFFF;
                if ( p_m_value->m_int <= 0x7FFFFFFEu )
                  LODWORD(m_uint64) = p_m_value->m_int;
                break;
              default:
                v24 = VariantFieldTypeName(m_type);
                Warning("No conversion from %s to int now\n", v24);
                LODWORD(m_uint64) = 0;
                break;
            }
            v9->m_nVRChaperoneType = m_uint64;
            v18 = WorldSpawnKeys->m_keyHashes.m_nCount;
            if ( v18 > 0 )
            {
              v19 = WorldSpawnKeys->m_keyHashes.m_nAllocated;
              for ( j = 0; v18 > j; ++j )
              {
                if ( v19 != 0 )
                {
                  v21 = (&WorldSpawnKeys->m_keyHashes.m_nAllocAllocated + 1);
                  if ( v19 > 9 )
                    v21 = WorldSpawnKeys->m_keyHashes.m_pElements;
                  if ( v21[j] == 1993595410 )
                  {
LABEL_26:
                    if ( WorldSpawnKeys->m_keyValues.m_nAllocated != 0 )
                      v22 = WorldSpawnKeys->m_keyValues.m_pElements;
                    else
                      v22 = 0;
                    v23 = &v22[j].m_value;
LABEL_46:
                    v25 = v23->m_type;
                    switch ( v25 )
                    {
                      case 0:
                        LODWORD(v26) = 0;
                        break;
                      case 1:
                        LODWORD(v26) = v23->m_float;
                        break;
                      case 5:
                        LODWORD(v26) = v23->m_int;
                        break;
                      case 6:
                        LODWORD(v26) = v23->m_char;
                        break;
                      case 26:
                        LODWORD(v26) = 0x7FFFFFFF;
                        if ( v23->m_int64 <= 0x7FFFFFFF )
                        {
                          LODWORD(v26) = 0x80000000;
                          if ( v23->m_uint64 >= 0xFFFFFFFF80000000LL )
                            v26 = v23->m_uint64;
                        }
                        break;
                      case 30:
                        LODWORD(v26) = strtol(v23->m_pszString, 0, 10);
                        break;
                      case 33:
                        LODWORD(v26) = 0x7FFFFFFF;
                        if ( v23->m_uint64 <= 0x7FFFFFFE )
                          LODWORD(v26) = v23->m_uint64;
                        break;
                      case 34:
                        LODWORD(v26) = v23->m_float64;
                        break;
                      case 37:
                        LODWORD(v26) = 0x7FFFFFFF;
                        if ( v23->m_int <= 0x7FFFFFFEu )
                          LODWORD(v26) = v23->m_int;
                        break;
                      default:
                        v33 = VariantFieldTypeName(v25);
                        Warning("No conversion from %s to int now\n", v33);
                        LODWORD(v26) = 0;
                        break;
                    }
                    v9->m_nVRMovementType = v26;
                    v27 = WorldSpawnKeys->m_keyHashes.m_nCount;
                    if ( v27 > 0 )
                    {
                      v28 = WorldSpawnKeys->m_keyHashes.m_nAllocated;
                      for ( k = 0; v27 > k; ++k )
                      {
                        if ( v28 != 0 )
                        {
                          v30 = (&WorldSpawnKeys->m_keyHashes.m_nAllocAllocated + 1);
                          if ( v28 > 9 )
                            v30 = WorldSpawnKeys->m_keyHashes.m_pElements;
                          if ( v30[k] == 1030271159 )
                          {
LABEL_56:
                            if ( WorldSpawnKeys->m_keyValues.m_nAllocated != 0 )
                              v31 = WorldSpawnKeys->m_keyValues.m_pElements;
                            else
                              v31 = 0;
                            v32 = &v31[k].m_value;
LABEL_76:
                            v34 = v32->m_type;
                            switch ( v34 )
                            {
                              case 0:
                                m_float = 0.0;
                                break;
                              case 1:
                                m_float = v32->m_float;
                                break;
                              case 5:
                                m_float = v32->m_int;
                                break;
                              case 6:
                                m_float = v32->m_char;
                                break;
                              case 26:
                                m_float = v32->m_uint64;
                                break;
                              case 30:
                                m_float = strtod(v32->m_pszString, 0);
                                break;
                              case 33:
                                v42 = v32->m_uint64;
                                if ( v32->m_int64 >= 0 )
                                  goto LABEL_90;
                                v43 = v32->m_uint64 & 1 | (v32->m_uint64 >> 1);
                                m_float = v43 + v43;
                                break;
                              case 34:
                                m_float = v32->m_float64;
                                break;
                              case 37:
                                LODWORD(v42) = v32->m_int;
LABEL_90:
                                m_float = v42;
                                break;
                              default:
                                v44 = VariantFieldTypeName(v34);
                                Warning("No conversion from %s to float now\n", v44);
                                m_float = 0.0;
                                break;
                            }
                            v9->m_flMaxPropScreenSpaceWidth = m_float;
                            v36 = WorldSpawnKeys->m_keyHashes.m_nCount;
                            if ( v36 > 0 )
                            {
                              v37 = WorldSpawnKeys->m_keyHashes.m_nAllocated;
                              for ( m = 0; v36 > m; ++m )
                              {
                                if ( v37 != 0 )
                                {
                                  v39 = (&WorldSpawnKeys->m_keyHashes.m_nAllocAllocated + 1);
                                  if ( v37 > 9 )
                                    v39 = WorldSpawnKeys->m_keyHashes.m_pElements;
                                  if ( v39[m] == -447260565 )
                                  {
LABEL_86:
                                    if ( WorldSpawnKeys->m_keyValues.m_nAllocated != 0 )
                                      v40 = WorldSpawnKeys->m_keyValues.m_pElements;
                                    else
                                      v40 = 0;
                                    v41 = &v40[m].m_value;
LABEL_101:
                                    v45 = v41->m_type;
                                    switch ( v45 )
                                    {
                                      case 0:
                                        m_int = 0.0;
                                        break;
                                      case 1:
                                        m_int = v41->m_float;
                                        break;
                                      case 5:
                                        m_int = v41->m_int;
                                        break;
                                      case 6:
                                        m_int = v41->m_char;
                                        break;
                                      case 26:
                                        m_int = v41->m_uint64;
                                        break;
                                      case 30:
                                        m_int = strtod(v41->m_pszString, 0);
                                        break;
                                      case 33:
                                        v55 = v41->m_uint64;
                                        if ( v41->m_int64 >= 0 )
                                          goto LABEL_116;
                                        v56 = v41->m_uint64 & 1 | (v41->m_uint64 >> 1);
                                        m_int = v56 + v56;
                                        break;
                                      case 34:
                                        m_int = v41->m_float64;
                                        break;
                                      case 37:
                                        LODWORD(v55) = v41->m_int;
LABEL_116:
                                        m_int = v55;
                                        break;
                                      default:
                                        v57 = VariantFieldTypeName(v45);
                                        Warning("No conversion from %s to float now\n", v57);
                                        m_int = 0.0;
                                        break;
                                    }
                                    v9->m_flMinPropScreenSpaceWidth = m_int;
                                    v47 = WorldSpawnKeys->m_keyHashes.m_nCount;
                                    if ( v47 > 0 )
                                    {
                                      v48 = WorldSpawnKeys->m_keyHashes.m_nAllocated;
                                      for ( n = 0; v47 > n; ++n )
                                      {
                                        if ( v48 != 0 )
                                        {
                                          v50 = (&WorldSpawnKeys->m_keyHashes.m_nAllocAllocated + 1);
                                          if ( v48 > 9 )
                                            v50 = WorldSpawnKeys->m_keyHashes.m_pElements;
                                          if ( v50[n] == 895205145 )
                                          {
LABEL_111:
                                            if ( WorldSpawnKeys->m_keyValues.m_nAllocated != 0 )
                                              v51 = WorldSpawnKeys->m_keyValues.m_pElements;
                                            else
                                              v51 = 0;
                                            m_char = 0;
                                            v53 = &v51[n].m_value;
                                            v54 = v53->m_type;
                                            if ( v54 != 0 )
                                              goto LABEL_114;
                                            goto LABEL_127;
                                          }
                                        }
                                        else if ( *(4 * n) == 895205145 )
                                        {
                                          goto LABEL_111;
                                        }
                                      }
                                    }
                                    v53 = &CEntityKeyValues::sm_EmptyVariant;
                                    m_char = 0;
                                    v54 = CEntityKeyValues::sm_EmptyVariant.m_type;
                                    if ( v54 != 0 )
                                    {
LABEL_114:
                                      switch ( v54 )
                                      {
                                        case 1:
                                          m_char = v53->m_float != 0.0;
                                          break;
                                        case 5:
                                        case 37:
                                          m_char = v53->m_int != 0;
                                          break;
                                        case 6:
                                          m_char = v53->m_char;
                                          break;
                                        case 26:
                                        case 33:
                                          m_char = v53->m_uint64 != 0;
                                          break;
                                        case 30:
                                          if ( strcmp(v53->m_pszString, "0") == 0
                                            || strcmp(v53->m_pszString, "false") == 0
                                            || strcmp(v53->m_pszString, "no") == 0 )
                                          {
                                            goto LABEL_331;
                                          }
                                          if ( strcmp(v53->m_pszString, "1") == 0
                                            || strcmp(v53->m_pszString, "true") == 0
                                            || strcmp(v53->m_pszString, "yes") == 0 )
                                          {
                                            m_char = 1;
                                          }
                                          else
                                          {
                                            Warning("Invalid conversion : CString '%s' to bool\n", v53->m_pszString);
                                            m_char = 0;
                                          }
                                          break;
                                        case 34:
                                          m_char = v53->m_float64 != 0.0;
                                          break;
                                        default:
                                          v146 = VariantFieldTypeName(v54);
                                          Warning("No conversion from %s to bool now\n", v146);
LABEL_331:
                                          m_char = 0;
                                          break;
                                      }
                                    }
LABEL_127:
                                    v9->m_bNewUnit = m_char;
                                    v58 = WorldSpawnKeys->m_keyHashes.m_nCount;
                                    if ( v58 > 0 )
                                    {
                                      v59 = WorldSpawnKeys->m_keyHashes.m_nAllocated;
                                      for ( ii = 0; v58 > ii; ++ii )
                                      {
                                        if ( v59 != 0 )
                                        {
                                          v61 = (&WorldSpawnKeys->m_keyHashes.m_nAllocAllocated + 1);
                                          if ( v59 > 9 )
                                            v61 = WorldSpawnKeys->m_keyHashes.m_pElements;
                                          if ( v61[ii] == -855598813 )
                                          {
LABEL_135:
                                            if ( WorldSpawnKeys->m_keyValues.m_nAllocated != 0 )
                                              v62 = WorldSpawnKeys->m_keyValues.m_pElements;
                                            else
                                              v62 = 0;
                                            v63 = 0;
                                            v64 = &v62[ii].m_value;
                                            v65 = v64->m_type;
                                            if ( v65 != 0 )
                                              goto LABEL_138;
                                            goto LABEL_140;
                                          }
                                        }
                                        else if ( *(4 * ii) == -855598813 )
                                        {
                                          goto LABEL_135;
                                        }
                                      }
                                    }
                                    v64 = &CEntityKeyValues::sm_EmptyVariant;
                                    v63 = 0;
                                    v65 = CEntityKeyValues::sm_EmptyVariant.m_type;
                                    if ( v65 != 0 )
                                    {
LABEL_138:
                                      switch ( v65 )
                                      {
                                        case 1:
                                          v63 = v64->m_float != 0.0;
                                          break;
                                        case 5:
                                        case 37:
                                          v63 = v64->m_int != 0;
                                          break;
                                        case 6:
                                          v63 = v64->m_char;
                                          break;
                                        case 26:
                                        case 33:
                                          v63 = v64->m_uint64 != 0;
                                          break;
                                        case 30:
                                          if ( strcmp(v64->m_pszString, "0") == 0
                                            || strcmp(v64->m_pszString, "false") == 0
                                            || strcmp(v64->m_pszString, "no") == 0 )
                                          {
                                            goto LABEL_334;
                                          }
                                          if ( strcmp(v64->m_pszString, "1") == 0
                                            || strcmp(v64->m_pszString, "true") == 0
                                            || strcmp(v64->m_pszString, "yes") == 0 )
                                          {
                                            v63 = 1;
                                          }
                                          else
                                          {
                                            Warning("Invalid conversion : CString '%s' to bool\n", v64->m_pszString);
                                            v63 = 0;
                                          }
                                          break;
                                        case 34:
                                          v63 = v64->m_float64 != 0.0;
                                          break;
                                        default:
                                          v148 = VariantFieldTypeName(v65);
                                          Warning("No conversion from %s to bool now\n", v148);
LABEL_334:
                                          v63 = 0;
                                          break;
                                      }
                                    }
LABEL_140:
                                    v9->m_bStartDark = v63;
                                    v66 = WorldSpawnKeys->m_keyHashes.m_nCount;
                                    if ( v66 > 0 )
                                    {
                                      v67 = WorldSpawnKeys->m_keyHashes.m_nAllocated;
                                      for ( jj = 0; v66 > jj; ++jj )
                                      {
                                        if ( v67 != 0 )
                                        {
                                          v69 = (&WorldSpawnKeys->m_keyHashes.m_nAllocAllocated + 1);
                                          if ( v67 > 9 )
                                            v69 = WorldSpawnKeys->m_keyHashes.m_pElements;
                                          if ( v69[jj] == -1443834618 )
                                          {
LABEL_148:
                                            if ( WorldSpawnKeys->m_keyValues.m_nAllocated != 0 )
                                              v70 = WorldSpawnKeys->m_keyValues.m_pElements;
                                            else
                                              v70 = 0;
                                            v71 = &v70[jj].m_value;
                                            v72 = v71->m_type;
                                            if ( v72 != 0 )
                                              goto LABEL_151;
LABEL_153:
                                            m_flTileGridMinHeight = v9->m_flTileGridMinHeight;
                                            goto LABEL_154;
                                          }
                                        }
                                        else if ( *(4 * jj) == -1443834618 )
                                        {
                                          goto LABEL_148;
                                        }
                                      }
                                    }
                                    v71 = &CEntityKeyValues::sm_EmptyVariant;
                                    v72 = CEntityKeyValues::sm_EmptyVariant.m_type;
                                    if ( v72 == 0 )
                                      goto LABEL_153;
LABEL_151:
                                    switch ( v72 )
                                    {
                                      case 1:
                                        m_flTileGridMinHeight = v71->m_float;
                                        break;
                                      case 5:
                                        m_flTileGridMinHeight = v71->m_int;
                                        break;
                                      case 6:
                                        m_flTileGridMinHeight = v71->m_char;
                                        break;
                                      case 26:
                                        m_flTileGridMinHeight = v71->m_uint64;
                                        break;
                                      case 30:
                                        m_flTileGridMinHeight = strtod(v71->m_pszString, 0);
                                        break;
                                      case 33:
                                        v143 = v71->m_uint64;
                                        if ( v71->m_int64 >= 0 )
                                          goto LABEL_305;
                                        v157 = v71->m_uint64 & 1 | (v71->m_uint64 >> 1);
                                        m_flTileGridMinHeight = v157 + v157;
                                        break;
                                      case 34:
                                        m_flTileGridMinHeight = v71->m_float64;
                                        break;
                                      case 37:
                                        LODWORD(v143) = v71->m_int;
LABEL_305:
                                        m_flTileGridMinHeight = v143;
                                        break;
                                      default:
                                        v147 = VariantFieldTypeName(v72);
                                        Warning("No conversion from %s to float now\n", v147);
                                        goto LABEL_153;
                                    }
LABEL_154:
                                    v9->m_flTileGridMinHeight = m_flTileGridMinHeight;
                                    v74 = WorldSpawnKeys->m_keyHashes.m_nCount;
                                    if ( v74 > 0 )
                                    {
                                      v75 = WorldSpawnKeys->m_keyHashes.m_nAllocated;
                                      for ( kk = 0; v74 > kk; ++kk )
                                      {
                                        if ( v75 != 0 )
                                        {
                                          v77 = (&WorldSpawnKeys->m_keyHashes.m_nAllocAllocated + 1);
                                          if ( v75 > 9 )
                                            v77 = WorldSpawnKeys->m_keyHashes.m_pElements;
                                          if ( v77[kk] == -1753837960 )
                                          {
LABEL_162:
                                            if ( WorldSpawnKeys->m_keyValues.m_nAllocated != 0 )
                                              v78 = WorldSpawnKeys->m_keyValues.m_pElements;
                                            else
                                              v78 = 0;
                                            v79 = &v78[kk].m_value;
                                            v80 = v79->m_type;
                                            if ( v80 != 0 )
                                              goto LABEL_165;
LABEL_167:
                                            m_flTileGridMaxHeight = v9->m_flTileGridMaxHeight;
                                            goto LABEL_168;
                                          }
                                        }
                                        else if ( *(4 * kk) == -1753837960 )
                                        {
                                          goto LABEL_162;
                                        }
                                      }
                                    }
                                    v79 = &CEntityKeyValues::sm_EmptyVariant;
                                    v80 = CEntityKeyValues::sm_EmptyVariant.m_type;
                                    if ( v80 == 0 )
                                      goto LABEL_167;
LABEL_165:
                                    switch ( v80 )
                                    {
                                      case 1:
                                        m_flTileGridMaxHeight = v79->m_float;
                                        break;
                                      case 5:
                                        m_flTileGridMaxHeight = v79->m_int;
                                        break;
                                      case 6:
                                        m_flTileGridMaxHeight = v79->m_char;
                                        break;
                                      case 26:
                                        m_flTileGridMaxHeight = v79->m_uint64;
                                        break;
                                      case 30:
                                        m_flTileGridMaxHeight = strtod(v79->m_pszString, 0);
                                        break;
                                      case 33:
                                        v141 = v79->m_uint64;
                                        if ( v79->m_int64 >= 0 )
                                          goto LABEL_279;
                                        v155 = v79->m_uint64 & 1 | (v79->m_uint64 >> 1);
                                        m_flTileGridMaxHeight = v155 + v155;
                                        break;
                                      case 34:
                                        m_flTileGridMaxHeight = v79->m_float64;
                                        break;
                                      case 37:
                                        LODWORD(v141) = v79->m_int;
LABEL_279:
                                        m_flTileGridMaxHeight = v141;
                                        break;
                                      default:
                                        v149 = VariantFieldTypeName(v80);
                                        Warning("No conversion from %s to float now\n", v149);
                                        goto LABEL_167;
                                    }
LABEL_168:
                                    v9->m_flTileGridMaxHeight = m_flTileGridMaxHeight;
                                    v82 = WorldSpawnKeys->m_keyHashes.m_nCount;
                                    if ( v82 > 0 )
                                    {
                                      v83 = WorldSpawnKeys->m_keyHashes.m_nAllocated;
                                      for ( mm = 0; v82 > mm; ++mm )
                                      {
                                        if ( v83 != 0 )
                                        {
                                          v85 = (&WorldSpawnKeys->m_keyHashes.m_nAllocAllocated + 1);
                                          if ( v83 > 9 )
                                            v85 = WorldSpawnKeys->m_keyHashes.m_pElements;
                                          if ( v85[mm] == 1908417658 )
                                          {
LABEL_176:
                                            if ( WorldSpawnKeys->m_keyValues.m_nAllocated != 0 )
                                              v86 = WorldSpawnKeys->m_keyValues.m_pElements;
                                            else
                                              v86 = 0;
                                            v87 = &v86[mm].m_value;
                                            v88 = v87->m_type;
                                            if ( v88 != 0 )
                                              goto LABEL_179;
LABEL_181:
                                            m_flTileGridStepHeight = v9->m_flTileGridStepHeight;
                                            goto LABEL_182;
                                          }
                                        }
                                        else if ( *(4 * mm) == 1908417658 )
                                        {
                                          goto LABEL_176;
                                        }
                                      }
                                    }
                                    v87 = &CEntityKeyValues::sm_EmptyVariant;
                                    v88 = CEntityKeyValues::sm_EmptyVariant.m_type;
                                    if ( v88 == 0 )
                                      goto LABEL_181;
LABEL_179:
                                    switch ( v88 )
                                    {
                                      case 1:
                                        m_flTileGridStepHeight = v87->m_float;
                                        break;
                                      case 5:
                                        m_flTileGridStepHeight = v87->m_int;
                                        break;
                                      case 6:
                                        m_flTileGridStepHeight = v87->m_char;
                                        break;
                                      case 26:
                                        m_flTileGridStepHeight = v87->m_uint64;
                                        break;
                                      case 30:
                                        m_flTileGridStepHeight = strtod(v87->m_pszString, 0);
                                        break;
                                      case 33:
                                        v142 = v87->m_uint64;
                                        if ( v87->m_int64 >= 0 )
                                          goto LABEL_288;
                                        v154 = v87->m_uint64 & 1 | (v87->m_uint64 >> 1);
                                        m_flTileGridStepHeight = v154 + v154;
                                        break;
                                      case 34:
                                        m_flTileGridStepHeight = v87->m_float64;
                                        break;
                                      case 37:
                                        LODWORD(v142) = v87->m_int;
LABEL_288:
                                        m_flTileGridStepHeight = v142;
                                        break;
                                      default:
                                        v150 = VariantFieldTypeName(v88);
                                        Warning("No conversion from %s to float now\n", v150);
                                        goto LABEL_181;
                                    }
LABEL_182:
                                    v9->m_flTileGridStepHeight = m_flTileGridStepHeight;
                                    v90 = WorldSpawnKeys->m_keyHashes.m_nCount;
                                    if ( v90 > 0 )
                                    {
                                      v91 = WorldSpawnKeys->m_keyHashes.m_nAllocated;
                                      for ( nn = 0; v90 > nn; ++nn )
                                      {
                                        if ( v91 != 0 )
                                        {
                                          v93 = (&WorldSpawnKeys->m_keyHashes.m_nAllocAllocated + 1);
                                          if ( v91 > 9 )
                                            v93 = WorldSpawnKeys->m_keyHashes.m_pElements;
                                          if ( v93[nn] == -1474972266 )
                                          {
LABEL_190:
                                            if ( WorldSpawnKeys->m_keyValues.m_nAllocated != 0 )
                                              v94 = WorldSpawnKeys->m_keyValues.m_pElements;
                                            else
                                              v94 = 0;
                                            v95 = &v94[nn].m_value;
                                            v96 = v95->m_type;
                                            if ( v96 != 0 )
                                              goto LABEL_193;
LABEL_195:
                                            m_flTileGridHeightShift = v9->m_flTileGridHeightShift;
                                            goto LABEL_196;
                                          }
                                        }
                                        else if ( *(4 * nn) == -1474972266 )
                                        {
                                          goto LABEL_190;
                                        }
                                      }
                                    }
                                    v95 = &CEntityKeyValues::sm_EmptyVariant;
                                    v96 = CEntityKeyValues::sm_EmptyVariant.m_type;
                                    if ( v96 == 0 )
                                      goto LABEL_195;
LABEL_193:
                                    switch ( v96 )
                                    {
                                      case 1:
                                        m_flTileGridHeightShift = v95->m_float;
                                        break;
                                      case 5:
                                        m_flTileGridHeightShift = v95->m_int;
                                        break;
                                      case 6:
                                        m_flTileGridHeightShift = v95->m_char;
                                        break;
                                      case 26:
                                        m_flTileGridHeightShift = v95->m_uint64;
                                        break;
                                      case 30:
                                        m_flTileGridHeightShift = strtod(v95->m_pszString, 0);
                                        break;
                                      case 33:
                                        v144 = v95->m_uint64;
                                        if ( v95->m_int64 >= 0 )
                                          goto LABEL_314;
                                        v156 = v95->m_uint64 & 1 | (v95->m_uint64 >> 1);
                                        m_flTileGridHeightShift = v156 + v156;
                                        break;
                                      case 34:
                                        m_flTileGridHeightShift = v95->m_float64;
                                        break;
                                      case 37:
                                        LODWORD(v144) = v95->m_int;
LABEL_314:
                                        m_flTileGridHeightShift = v144;
                                        break;
                                      default:
                                        v145 = VariantFieldTypeName(v96);
                                        Warning("No conversion from %s to float now\n", v145);
                                        goto LABEL_195;
                                    }
LABEL_196:
                                    v9->m_flTileGridHeightShift = m_flTileGridHeightShift;
                                    v98 = WorldSpawnKeys->m_keyHashes.m_nCount;
                                    if ( v98 > 0 )
                                    {
                                      v99 = WorldSpawnKeys->m_keyHashes.m_nAllocated;
                                      for ( i1 = 0; v98 > i1; ++i1 )
                                      {
                                        if ( v99 != 0 )
                                        {
                                          v101 = (&WorldSpawnKeys->m_keyHashes.m_nAllocAllocated + 1);
                                          if ( v99 > 9 )
                                            v101 = WorldSpawnKeys->m_keyHashes.m_pElements;
                                          if ( v101[i1] == -1205303894 )
                                          {
LABEL_204:
                                            if ( WorldSpawnKeys->m_keyValues.m_nAllocated != 0 )
                                              v102 = WorldSpawnKeys->m_keyValues.m_pElements;
                                            else
                                              v102 = 0;
                                            v103 = &v102[i1].m_value;
                                            v104 = v103->m_type;
                                            if ( v104 != 0 )
                                            {
LABEL_207:
                                              if ( v104 != 30 )
                                              {
                                                if ( v104 != 39 && v104 != 3 )
                                                {
                                                  v105 = VariantFieldTypeName(v104);
                                                  Warning(
                                                    "No free conversion of %s variant to Vector right now\n",
                                                    v105);
                                                  goto LABEL_212;
                                                }
                                                v108 = *(v103->m_uint64 + 8);
                                                v106 = *v103->m_pszString;
                                                v107 = *(v103->m_uint64 + 4);
LABEL_213:
                                                v9->m_vTileGridFogBoundsMin.x = v106;
                                                v9->m_vTileGridFogBoundsMin.y = v107;
                                                v9->m_vTileGridFogBoundsMin.z = v108;
                                                v109 = WorldSpawnKeys->m_keyHashes.m_nCount;
                                                if ( v109 > 0 )
                                                {
                                                  v110 = WorldSpawnKeys->m_keyHashes.m_nAllocated;
                                                  for ( i2 = 0; v109 > i2; ++i2 )
                                                  {
                                                    if ( v110 != 0 )
                                                    {
                                                      v112 = (&WorldSpawnKeys->m_keyHashes.m_nAllocAllocated + 1);
                                                      if ( v110 > 9 )
                                                        v112 = WorldSpawnKeys->m_keyHashes.m_pElements;
                                                      if ( v112[i2] == -177364784 )
                                                      {
LABEL_221:
                                                        if ( WorldSpawnKeys->m_keyValues.m_nAllocated != 0 )
                                                          v113 = WorldSpawnKeys->m_keyValues.m_pElements;
                                                        else
                                                          v113 = 0;
                                                        v114 = &v113[i2].m_value;
                                                        v115 = v114->m_type;
                                                        if ( v115 != 0 )
                                                        {
LABEL_224:
                                                          if ( v115 != 30 )
                                                          {
                                                            if ( v115 != 39 && v115 != 3 )
                                                            {
                                                              v116 = VariantFieldTypeName(v115);
                                                              Warning(
                                                                "No free conversion of %s variant to Vector right now\n",
                                                                v116);
                                                              goto LABEL_229;
                                                            }
                                                            y = *(v114->m_uint64 + 4);
                                                            x = *v114->m_pszString;
                                                            z = *(v114->m_uint64 + 8);
LABEL_230:
                                                            v9->m_vTileGridFogBoundsMax.x = x;
                                                            v9->m_vTileGridFogBoundsMax.y = y;
                                                            v9->m_vTileGridFogBoundsMax.z = z;
                                                            m_SpawnGroupHandle = msg->m_SpawnGroupHandle;
                                                            if ( m_SpawnGroupHandle + 0x80000000 <= 0x7FFFFFFE )
                                                              goto LABEL_231;
                                                            v122 = WorldSpawnKeys->m_keyHashes.m_nCount;
                                                            if ( v122 <= 0 )
                                                            {
LABEL_251:
                                                              v127 = &CEntityKeyValues::sm_EmptyVariant;
                                                              if ( CEntityKeyValues::sm_EmptyVariant.m_type == 30 )
                                                                goto LABEL_244;
                                                              goto LABEL_252;
                                                            }
                                                            v123 = WorldSpawnKeys->m_keyHashes.m_nAllocated;
                                                            v124 = 0;
                                                            while ( 1 )
                                                            {
                                                              if ( v123 != 0 )
                                                              {
                                                                v125 = (&WorldSpawnKeys->m_keyHashes.m_nAllocAllocated
                                                                      + 1);
                                                                if ( v123 > 9 )
                                                                  v125 = WorldSpawnKeys->m_keyHashes.m_pElements;
                                                                if ( v125[v124] == -1668578938 )
                                                                {
LABEL_241:
                                                                  if ( WorldSpawnKeys->m_keyValues.m_nAllocated != 0 )
                                                                    v126 = WorldSpawnKeys->m_keyValues.m_pElements;
                                                                  else
                                                                    v126 = 0;
                                                                  v127 = &v126[v124].m_value;
                                                                  if ( v127->m_type == 30 )
                                                                  {
LABEL_244:
                                                                    if ( v127->m_uint64 != 0 && *v127->m_pszString != 0 )
                                                                    {
                                                                      v9->m_mapDataHandle = (*(*g_pDotaMapUtils + 88LL))(g_pDotaMapUtils);
                                                                      m_SpawnGroupHandle = msg->m_SpawnGroupHandle;
                                                                      goto LABEL_231;
                                                                    }
                                                                  }
LABEL_252:
                                                                  m_SpawnGroupHandle = msg->m_SpawnGroupHandle;
LABEL_231:
                                                                  v121 = 33
                                                                       * (((4097 * m_SpawnGroupHandle + 2127912214) >> 19)
                                                                        ^ (4097 * m_SpawnGroupHandle + 2127912214)
                                                                        ^ 0xC761C23C);
                                                                  CUtlHashtable<unsigned int,WorldInfo_t *,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,WorldInfo_t *>,int>>::DoInsert<unsigned int>(
                                                                    &this->m_worldInfo,
                                                                    m_SpawnGroupHandle,
                                                                    v9,
                                                                    ((9
                                                                    * ((v121 - 369570787) ^ ((v121 + 374761393) << 9))
                                                                    - 42973499) >> 16)
                                                                  ^ (9
                                                                   * ((v121 - 369570787) ^ ((v121 + 374761393) << 9))
                                                                   - 42973499)
                                                                  ^ 0xB55A4F09,
                                                                    0);
                                                                  return;
                                                                }
                                                              }
                                                              else if ( *(4 * v124) == -1668578938 )
                                                              {
                                                                goto LABEL_241;
                                                              }
                                                              if ( v122 <= ++v124 )
                                                                goto LABEL_251;
                                                            }
                                                          }
                                                          if ( V_sscanf(v114->m_uint64, "%g %g %g", &v158, &v159, &v160) == 3 )
                                                          {
                                                            z = v160;
                                                            x = v158;
                                                            y = v159;
                                                            goto LABEL_230;
                                                          }
                                                        }
LABEL_229:
                                                        x = v9->m_vTileGridFogBoundsMax.x;
                                                        y = v9->m_vTileGridFogBoundsMax.y;
                                                        z = v9->m_vTileGridFogBoundsMax.z;
                                                        goto LABEL_230;
                                                      }
                                                    }
                                                    else if ( *(4 * i2) == -177364784 )
                                                    {
                                                      goto LABEL_221;
                                                    }
                                                  }
                                                }
                                                v114 = &CEntityKeyValues::sm_EmptyVariant;
                                                v115 = CEntityKeyValues::sm_EmptyVariant.m_type;
                                                if ( v115 != 0 )
                                                  goto LABEL_224;
                                                goto LABEL_229;
                                              }
                                              if ( V_sscanf(v103->m_uint64, "%g %g %g", &v158, &v159, &v160) == 3 )
                                              {
                                                v107 = v159;
                                                v106 = v158;
                                                v108 = v160;
                                                goto LABEL_213;
                                              }
                                            }
LABEL_212:
                                            v106 = v9->m_vTileGridFogBoundsMin.x;
                                            v107 = v9->m_vTileGridFogBoundsMin.y;
                                            v108 = v9->m_vTileGridFogBoundsMin.z;
                                            goto LABEL_213;
                                          }
                                        }
                                        else if ( *(4 * i1) == -1205303894 )
                                        {
                                          goto LABEL_204;
                                        }
                                      }
                                    }
                                    v103 = &CEntityKeyValues::sm_EmptyVariant;
                                    v104 = CEntityKeyValues::sm_EmptyVariant.m_type;
                                    if ( v104 != 0 )
                                      goto LABEL_207;
                                    goto LABEL_212;
                                  }
                                }
                                else if ( *(4 * m) == -447260565 )
                                {
                                  goto LABEL_86;
                                }
                              }
                            }
                            v41 = &CEntityKeyValues::sm_EmptyVariant;
                            goto LABEL_101;
                          }
                        }
                        else if ( *(4 * k) == 1030271159 )
                        {
                          goto LABEL_56;
                        }
                      }
                    }
                    v32 = &CEntityKeyValues::sm_EmptyVariant;
                    goto LABEL_76;
                  }
                }
                else if ( *(4 * j) == 1993595410 )
                {
                  goto LABEL_26;
                }
              }
            }
            v23 = &CEntityKeyValues::sm_EmptyVariant;
            goto LABEL_46;
          }
        }
        else if ( *(4 * i) == 473655680 )
        {
          goto LABEL_12;
        }
      }
    }
    p_m_value = &CEntityKeyValues::sm_EmptyVariant;
    goto LABEL_16;
  }
  v128 = CUtlString::Get(&msg->m_SpawnGroupName);
  if ( v128 == 0 )
    return;
  if ( *v128 == 0 )
    return;
  v129 = CUtlString::Get(p_m_EntityLumpName);
  if ( v129 == 0 )
    return;
  if ( *v129 == 0 )
    return;
  m_nAllocationCount = this->m_worldInfo.m_table.m_nAllocationCount;
  m_pMemory = this->m_worldInfo.m_table.m_pMemory;
  if ( m_nAllocationCount <= 0 )
    return;
  if ( m_pMemory->flags_and_hash >= 0 )
  {
    v134 = 0;
  }
  else
  {
    v132 = m_pMemory + 1;
    v133 = 0;
    do
    {
      if ( ++v133 == m_nAllocationCount )
        return;
      ++v132;
    }
    while ( v132[-1].flags_and_hash < 0 );
    if ( v133 == -1 )
      return;
    v134 = v133;
  }
  do
  {
    v135 = v134;
    SpawnGroupWorldName = CSpawnGroupMgrGameSystem::GetSpawnGroupWorldName(g_pSpawnGroupMgr, m_pMemory[v135].data[0]);
    v137 = CUtlString::Get(&msg->m_SpawnGroupName);
    if ( V_stricmp_fast(SpawnGroupWorldName, v137) == 0 )
    {
      v151 = *&this->m_worldInfo.m_table.m_pMemory[v135].data[2];
      ++v151->m_nRefCount;
      v152 = 33
           * (((4097 * msg->m_SpawnGroupHandle + 2127912214) >> 19)
            ^ (4097 * msg->m_SpawnGroupHandle + 2127912214)
            ^ 0xC761C23C);
      v153 = 9 * ((v152 - 369570787) ^ ((v152 + 374761393) << 9)) - 42973499;
      CUtlHashtable<unsigned int,WorldInfo_t *,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,WorldInfo_t *>,int>>::DoInsert<unsigned int>(
        &this->m_worldInfo,
        msg->m_SpawnGroupHandle,
        v151,
        HIWORD(v153) ^ v153 ^ 0xB55A4F09,
        0);
      return;
    }
    v138 = this->m_worldInfo.m_table.m_nAllocationCount;
    v139 = v134 + 1;
    m_pMemory = this->m_worldInfo.m_table.m_pMemory;
    if ( v134 + 1 >= v138 )
      break;
    v140 = &m_pMemory[v139 + 1];
    if ( m_pMemory[v135 + 1].flags_and_hash < 0 )
    {
      do
      {
        if ( ++v139 == v138 )
          return;
        ++v140;
      }
      while ( v140[-1].flags_and_hash < 0 );
    }
    v134 = v139;
  }
  while ( v139 != -1 );
}


// CWorldGameSystem::PostSpawnGroupUnload  (line 179, @0x0000000001f44950, libserver.so)  // inlines: DoLookup<unsigned int>, Find, RemoveByHandle, operator(), operator[], ~WorldInfo_t
// calls: CUtlHashtable<unsigned int, WorldInfo_t*, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, WorldInfo_t*>, int> >::DoLookup<unsigned int>, CUtlHashtable<unsigned int, WorldInfo_t*, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, WorldInfo_t*>, int> >::DoRemove<unsigned int>, operator delete
void __fastcall CWorldGameSystem::PostSpawnGroupUnload(
        CWorldGameSystem *const this,
        const EventPostSpawnGroupUnload_t *const msg)
{
  SpawnGroupHandle_t m_SpawnGroupHandle; // esi
  CUtlHashtable<unsigned int,WorldInfo_t*,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,WorldInfo_t*>,int> > *p_m_worldInfo; // r13
  unsigned int v5; // edx
  unsigned int v6; // edx
  signed int v7; // eax
  __int64 v8; // r12
  __int64 v9; // rdx
  bool v10; // cc
  __int64 v11; // rax
  CUtlHashtableEntry<unsigned int,WorldInfo_t*> *v12; // rax
  _QWORD *v13; // r14

  m_SpawnGroupHandle = msg->m_SpawnGroupHandle;
  if ( this->m_worldInfo.m_nUsed != 0 )
  {
    p_m_worldInfo = &this->m_worldInfo;
    v5 = 33 * (((4097 * m_SpawnGroupHandle + 2127912214) >> 19) ^ (4097 * m_SpawnGroupHandle + 2127912214) ^ 0xC761C23C);
    v6 = 9 * ((v5 - 369570787) ^ ((v5 + 374761393) << 9)) - 42973499;
    v7 = CUtlHashtable<unsigned int,WorldInfo_t *,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,WorldInfo_t *>,int>>::DoLookup<unsigned int>(
           &this->m_worldInfo,
           m_SpawnGroupHandle,
           HIWORD(v6) ^ v6 ^ 0xB55A4F09,
           0);
    if ( v7 != -1 )
    {
      v8 = v7;
      v9 = *&this->m_worldInfo.m_table.m_pMemory[v8].data[2];
      v10 = --*(v9 + 96) <= 0;
      v11 = v8 * 20;
      if ( v10 )
      {
        v12 = &this->m_worldInfo.m_table.m_pMemory[v8];
        v13 = *&v12->data[2];
        if ( v13 == 0 )
          goto LABEL_6;
        (*(*g_pDotaMapUtils + 96LL))(g_pDotaMapUtils, v13[11]);
        v13[11] = -1;
        operator delete(v13);
        v11 = v8 * 20;
      }
      v12 = (this->m_worldInfo.m_table.m_pMemory + v11);
LABEL_6:
      CUtlHashtable<unsigned int,WorldInfo_t *,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,WorldInfo_t *>,int>>::DoRemove<unsigned int>(
        p_m_worldInfo,
        v12->data[0],
        v12->flags_and_hash & 0x3FFFFFFF);
    }
  }
}


// CWorldGameSystem::GameShutdown  (line 192, @0x0000000001f44800, libserver.so)  // inlines: FirstHandle, NextHandle, Purge, operator[], ~WorldInfo_t
// calls: CUtlHashtable<unsigned int, WorldInfo_t*, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, WorldInfo_t*>, int> >::RemoveAll, operator delete, CUtlMemory<CUtlHashtableEntry<unsigned int, WorldInfo_t*>, int>::Purge
void __fastcall CWorldGameSystem::GameShutdown(CWorldGameSystem *const this, const EventGameShutdown_t *const msg)
{
  int m_nAllocationCount; // ecx
  CUtlHashtableEntry<unsigned int,WorldInfo_t*> *m_pMemory; // rsi
  CUtlHashtableEntry<unsigned int,WorldInfo_t*> *v5; // rdx
  int v6; // eax
  __int64 v7; // r12
  __int64 v8; // rdx
  int v9; // eax
  int v10; // ecx
  int v11; // eax
  CUtlHashtableEntry<unsigned int,WorldInfo_t*> *v12; // rdx
  _QWORD *v13; // r14
  int v14; // r13d

  m_nAllocationCount = this->m_worldInfo.m_table.m_nAllocationCount;
  m_pMemory = this->m_worldInfo.m_table.m_pMemory;
  if ( m_nAllocationCount > 0 )
  {
    v5 = m_pMemory + 1;
    v6 = 0;
    if ( m_pMemory->flags_and_hash < 0 )
    {
      while ( ++v6 != m_nAllocationCount )
      {
        ++v5;
        if ( v5[-1].flags_and_hash >= 0 )
        {
          if ( v6 != -1 )
          {
            v14 = v6;
            goto LABEL_10;
          }
          break;
        }
      }
    }
    else
    {
      v14 = 0;
      do
      {
LABEL_10:
        v7 = v14;
        v8 = *&m_pMemory[v7].data[2];
        v9 = *(v8 + 96) - 1;
        *(v8 + 96) = v9;
        m_pMemory = this->m_worldInfo.m_table.m_pMemory;
        if ( v9 <= 0 )
        {
          v13 = *&m_pMemory[v7].data[2];
          if ( v13 != 0 )
          {
            (*(*g_pDotaMapUtils + 96LL))(g_pDotaMapUtils, v13[11]);
            v13[11] = -1;
            operator delete(v13);
            m_pMemory = this->m_worldInfo.m_table.m_pMemory;
          }
        }
        v10 = this->m_worldInfo.m_table.m_nAllocationCount;
        v11 = v14 + 1;
        if ( v14 + 1 >= v10 )
          break;
        v12 = &m_pMemory[v11 + 1];
        if ( m_pMemory[v7 + 1].flags_and_hash < 0 )
        {
          while ( ++v11 != v10 )
          {
            ++v12;
            if ( v12[-1].flags_and_hash >= 0 )
              goto LABEL_17;
          }
          break;
        }
LABEL_17:
        v14 = v11;
      }
      while ( v11 != -1 );
    }
  }
  CUtlHashtable<unsigned int,WorldInfo_t *,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,WorldInfo_t *>,int>>::RemoveAll(&this->m_worldInfo);
  if ( (this->m_worldInfo.m_table.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<CUtlHashtableEntry<unsigned int,WorldInfo_t *>,int>::Purge(&this->m_worldInfo.m_table);
}


// CWorldGameSystem::FindWorldInfoForSpawnGroup  (line 206, @0x0000000001f393e0, libserver.so)  // inlines: DoLookup<unsigned int>, Find, operator()
// calls: CEntitySystem::GetActiveSpawnGroupHandle, CUtlHashtable<unsigned int, WorldInfo_t*, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, WorldInfo_t*>, int> >::DoLookup<unsigned int>
// callers: CWorldGameSystem::HasWorldInfoForSpawnGroup, CWorldGameSystem::GetWorldInfoForSpawnGroup, CWorldGameSystem::ActiveSpawnGroupChanged
UtlHashHandle_t __fastcall CWorldGameSystem::FindWorldInfoForSpawnGroup(
        const CWorldGameSystem *const this,
        SpawnGroupHandle_t hSpawnGroup)
{
  SpawnGroupHandle_t v4; // edx
  unsigned int v5; // edx

  if ( hSpawnGroup == 0 )
    hSpawnGroup = CEntitySystem::GetActiveSpawnGroupHandle(g_pEntitySystem);
  if ( this->m_worldInfo.m_nUsed == 0 )
    return -1;
  v4 = 33 * (((4097 * hSpawnGroup + 2127912214) >> 19) ^ (4097 * hSpawnGroup + 2127912214) ^ 0xC761C23C);
  v5 = 9 * ((v4 - 369570787) ^ ((v4 + 374761393) << 9)) - 42973499;
  return CUtlHashtable<unsigned int,WorldInfo_t *,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,WorldInfo_t *>,int>>::DoLookup<unsigned int>(
           &this->m_worldInfo,
           hSpawnGroup,
           HIWORD(v5) ^ v5 ^ 0xB55A4F09,
           0);
}


// CWorldGameSystem::HasWorldInfoForSpawnGroup  (line 217, @0x0000000001f39470, libserver.so)
// calls: CWorldGameSystem::FindWorldInfoForSpawnGroup
bool __fastcall CWorldGameSystem::HasWorldInfoForSpawnGroup(
        const CWorldGameSystem *const this,
        SpawnGroupHandle_t hSpawnGroup)
{
  return CWorldGameSystem::FindWorldInfoForSpawnGroup(this, hSpawnGroup) != -1;
}


// CWorldGameSystem::GetWorldInfoForSpawnGroup  (line 223, @0x0000000001f39490, libserver.so)  // inlines: operator[]
// calls: CWorldGameSystem::FindWorldInfoForSpawnGroup
// callers: CWorldGameSystem::ActiveSpawnGroupChanged, UTIL_TraceRayVerticalGroundHeight, Test_RandomPlayerPosition, GetRandomSpot, CDOTAFogOfWarSystem::SetVerticalLevelsForSpawnGroup, CGridNav::ShowHeightMap, CDOTA_MapTree::Spawn, CDOTABehaviorMoveTo::IsInWater, CDOTA_BaseNPC_Hero::Think, CDOTA_Unit_Hero_Rattletrap::TranslateActivity, CDOTA_Ability_Nyx_Assassin_Burrow::OnAbilityPhaseStart, CDOTA_Ability_Nyx_Assassin_Unburrow::OnSpellStart (16 total)
const WorldInfo_t *__fastcall CWorldGameSystem::GetWorldInfoForSpawnGroup(
        const CWorldGameSystem *const this,
        SpawnGroupHandle_t hSpawnGroup)
{
  UtlHashHandle_t WorldInfoForSpawnGroup; // eax
  WorldInfo_t *p_m_defaultWorldInfo; // rdx

  WorldInfoForSpawnGroup = CWorldGameSystem::FindWorldInfoForSpawnGroup(this, hSpawnGroup);
  p_m_defaultWorldInfo = &this->m_defaultWorldInfo;
  if ( WorldInfoForSpawnGroup != -1 )
    return *&this->m_worldInfo.m_table.m_pMemory[WorldInfoForSpawnGroup].data[2];
  return p_m_defaultWorldInfo;
}


// CWorldGameSystem::ActiveSpawnGroupChanged  (line 233, @0x0000000001f394d0, libserver.so)  // inlines: GetSaveRestore, HasWorldInfoForSpawnGroup
// calls: CWorldGameSystem::FindWorldInfoForSpawnGroup, CWorldGameSystem::GetWorldInfoForSpawnGroup
void __fastcall CWorldGameSystem::ActiveSpawnGroupChanged(
        CWorldGameSystem *const this,
        const EventActiveSpawnGroupChanged_t *const msg)
{
  if ( CWorldGameSystem::FindWorldInfoForSpawnGroup(this, msg->m_SpawnGroupHandle) != -1
    && CWorldGameSystem::GetWorldInfoForSpawnGroup(this, msg->m_SpawnGroupHandle)->m_bNewUnit )
  {
    (*(**(&stru_1A0B8.r_offset + g_pGameEntitySystem) + 88LL))(*(&stru_1A0B8.r_offset + g_pGameEntitySystem), 1);
  }
}


