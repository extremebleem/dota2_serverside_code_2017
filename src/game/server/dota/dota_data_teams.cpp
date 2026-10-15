// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/dota_data_teams.cpp:17
class C_CDOTA_DataNonSpectator_MapInstall {
	C_CDOTA_DataNonSpectator_MapInstall();

	// sizeof = 1
};

// src/game/server/dota/dota_data_teams.cpp:18
class C_CDOTA_DataRadiant_MapInstall {
	C_CDOTA_DataRadiant_MapInstall();

	// sizeof = 1
};

// src/game/server/dota/dota_data_teams.cpp:19
class C_CDOTA_DataDire_MapInstall {
	C_CDOTA_DataDire_MapInstall();

	// sizeof = 1
};

// src/game/server/dota/dota_data_teams.cpp:20
class C_CDOTA_DataSpectator_MapInstall {
	C_CDOTA_DataSpectator_MapInstall();

	// sizeof = 1
};

// src/game/server/dota/dota_data_teams.cpp:21
class C_CDOTA_DataCustomTeam_MapInstall {
	C_CDOTA_DataCustomTeam_MapInstall();

	// sizeof = 1
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_DataNonSpectator::YouForgotToImplementOrDeclareServerClass  (line 17, @0x0000000002462a50, libserver.so)
int __fastcall CDOTA_DataNonSpectator::YouForgotToImplementOrDeclareServerClass(CDOTA_DataNonSpectator *const this)
{
  return 0;
}


// CDOTA_DataNonSpectator::GetServerClass  (line 17, @0x0000000002466b40, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_DataNonSpectator::GetServerClass(CDOTA_DataNonSpectator *const this)
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


// CDOTA_DataRadiant::YouForgotToImplementOrDeclareServerClass  (line 18, @0x0000000002462a60, libserver.so)
int __fastcall CDOTA_DataRadiant::YouForgotToImplementOrDeclareServerClass(CDOTA_DataRadiant *const this)
{
  return 0;
}


// CDOTA_DataRadiant::GetServerClass  (line 18, @0x0000000002466b80, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_DataRadiant::GetServerClass(CDOTA_DataRadiant *const this)
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


// CDOTA_DataDire::YouForgotToImplementOrDeclareServerClass  (line 19, @0x0000000002462a70, libserver.so)
int __fastcall CDOTA_DataDire::YouForgotToImplementOrDeclareServerClass(CDOTA_DataDire *const this)
{
  return 0;
}


// CDOTA_DataDire::GetServerClass  (line 19, @0x0000000002466c40, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_DataDire::GetServerClass(CDOTA_DataDire *const this)
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


// CDOTA_DataSpectator::YouForgotToImplementOrDeclareServerClass  (line 20, @0x0000000002462a80, libserver.so)
int __fastcall CDOTA_DataSpectator::YouForgotToImplementOrDeclareServerClass(CDOTA_DataSpectator *const this)
{
  return 0;
}


// CDOTA_DataSpectator::GetServerClass  (line 20, @0x0000000002466c00, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_DataSpectator::GetServerClass(CDOTA_DataSpectator *const this)
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


// CDOTA_DataCustomTeam::YouForgotToImplementOrDeclareServerClass  (line 21, @0x0000000002462a90, libserver.so)
int __fastcall CDOTA_DataCustomTeam::YouForgotToImplementOrDeclareServerClass(CDOTA_DataCustomTeam *const this)
{
  return 0;
}


// CDOTA_DataCustomTeam::GetServerClass  (line 21, @0x0000000002466c80, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_DataCustomTeam::GetServerClass(CDOTA_DataCustomTeam *const this)
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


// CDOTA_DataNonSpectator::Spawn  (line 27, @0x0000000002487ec0, libserver.so)
// calls: CBaseEntity::Spawn, CDOTA_DataNonSpectator::Reset
void __fastcall CDOTA_DataNonSpectator::Spawn(CDOTA_DataNonSpectator *const this, const CEntityKeyValues *pKeyValues)
{
  CBaseEntity::Spawn(this, pKeyValues);
  CDOTA_DataNonSpectator::Reset(this);
}


// CDOTA_DataNonSpectator::Reset  (line 36, @0x0000000002487ce0, libserver.so)  // inlines: NetworkStateChanged, OnSizeChanged, Purge, Set, operator(), operator=
// calls: CUtlVectorEmbeddedNetworkVar<DataTeamPlayer_t, CDOTA_DataNonSpectator::NetworkVar_m_vecDataTeam, -1>::Resolve, CUtlVectorBase<DataTeamPlayer_t, CNetworkUtlVector_MemoryType<DataTeamPlayer_t, -1> >::RemoveAll, CUtlMemory<DataTeamPlayer_t, int>::Purge, memcmp, EntityInstanceSetNetworkStateChanged
// callers: CDOTA_DataNonSpectator::Spawn, CDOTA_DataSpectator::Spawn
// globals: DOTA_DESIRED_WARD_PLACEMENT_INVALID
void __fastcall CDOTA_DataNonSpectator::Reset(CDOTA_DataNonSpectator *const this)
{
  CUtlVectorEmbeddedNetworkVar<DataTeamPlayer_t,CDOTA_DataNonSpectator::NetworkVar_m_vecDataTeam,-1> *p_m_vecDataTeam; // rbx
  CUtlDelegate<void()> *m_pArraySizeChangedDelegate; // rax
  void (*pfn)(detail::GenericClass *); // rdx
  detail::GenericClass *v5; // rdi
  unsigned int v6; // ebx
  CNetworkArrayBase<long long unsigned int,256,CDOTA_DataNonSpectator::NetworkVar_m_bWorldTreeState> *p_m_bWorldTreeState; // r12
  CNetworkArrayBase<Vector2D,2,CDOTA_DataNonSpectator::NetworkVar_m_vDesiredWardPlacement> *p_m_vDesiredWardPlacement; // rbx
  unsigned int i; // r12d
  unsigned int v10; // ebx
  CNetworkArrayBase<int,5,CDOTA_DataNonSpectator::NetworkVar_m_nEnemyStartingPosition> *p_m_nEnemyStartingPosition; // r12
  _QWORD s2[7]; // [rsp+8h] [rbp-38h] BYREF

  p_m_vecDataTeam = &this->m_vecDataTeam;
  if ( this->m_vecDataTeam.m_Vector.m_Size > 0 )
  {
    CUtlVectorEmbeddedNetworkVar<DataTeamPlayer_t,CDOTA_DataNonSpectator::NetworkVar_m_vecDataTeam,-1>::Resolve(&this->m_vecDataTeam);
    if ( !this->m_vecDataTeam.m_bIsNetworkVarExcluded )
      EntityInstanceSetNetworkStateChanged(this->m_vecDataTeam.m_pOwnerEntity.m_pObj);
  }
  CUtlVectorBase<DataTeamPlayer_t,CNetworkUtlVector_MemoryType<DataTeamPlayer_t,-1>>::RemoveAll(&p_m_vecDataTeam->m_Vector);
  if ( (this->m_vecDataTeam.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<DataTeamPlayer_t,int>::Purge(&this->m_vecDataTeam.m_Vector.m_Memory);
  m_pArraySizeChangedDelegate = this->m_vecDataTeam.m_pArraySizeChangedDelegate;
  if ( m_pArraySizeChangedDelegate != 0 )
  {
    pfn = m_pArraySizeChangedDelegate->m_Closure.m_pFunction.__pfn;
    v5 = (m_pArraySizeChangedDelegate->m_Closure.m_pthis + m_pArraySizeChangedDelegate->m_Closure.m_pFunction.__delta);
    if ( (pfn & 1) != 0 )
      pfn = *(pfn + *v5 - 1);
    pfn(v5);
  }
  v6 = 0;
  p_m_bWorldTreeState = &this->m_bWorldTreeState;
  do
  {
    s2[0] = 0;
    if ( memcmp(p_m_bWorldTreeState, s2, 8u) != 0 )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 848, v6, 0xFFFFFFFFLL);
      p_m_bWorldTreeState->m_Value[0] = 0;
    }
    ++v6;
    p_m_bWorldTreeState = (p_m_bWorldTreeState + 8);
  }
  while ( v6 != 256 );
  p_m_vDesiredWardPlacement = &this->m_vDesiredWardPlacement;
  for ( i = 0; i != 2; ++i )
  {
    if ( memcmp(p_m_vDesiredWardPlacement, &DOTA_DESIRED_WARD_PLACEMENT_INVALID, 8u) != 0 )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 2896, i, 0xFFFFFFFFLL);
      p_m_vDesiredWardPlacement->m_Value[0] = DOTA_DESIRED_WARD_PLACEMENT_INVALID;
    }
    p_m_vDesiredWardPlacement = (p_m_vDesiredWardPlacement + 8);
  }
  v10 = 0;
  p_m_nEnemyStartingPosition = &this->m_nEnemyStartingPosition;
  do
  {
    LODWORD(s2[0]) = 0;
    if ( memcmp(p_m_nEnemyStartingPosition, s2, 4u) != 0 )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 2912, v10, 0xFFFFFFFFLL);
      p_m_nEnemyStartingPosition->m_Value[0] = 0;
    }
    ++v10;
    p_m_nEnemyStartingPosition = (p_m_nEnemyStartingPosition + 4);
  }
  while ( v10 != 5 );
}


// CDOTA_DataNonSpectator::ChangeTeam  (line 59, @0x0000000002487f10, libserver.so)  // inlines: AssignPathIdToElement, CFieldPath, ChangeTeam, Clear, Element, Get, GetPathData, IsUsingFixedPaths, LeafCodeInfo_t, NetworkStateChanged, OnSizeChanged, Path_AddToTail, Path_RemoveAll, Path_SetCount, Push, ReassignPathIds, Resolve, Set, SetCount, SetPreGamePlayerID, V_memcpy, memcpy, operator CEntityInstance*, operator(), operator=, operator=<int>, operator[]
// calls: CDOTA_PlayerResource::NumTeamPlayers, CDOTA_PlayerResource::GetTeam, CDOTA_PlayerResource::GetTeamSlot, GetNetworkSerializerForEntityInstance, memcpy, CUtlVectorBase<DataTeamPlayer_t, CNetworkUtlVector_MemoryType<DataTeamPlayer_t, -1> >::SetCount, __memcpy_chk, LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, EntityInstanceAddChangeAccessorPath, CDOTA_PlayerResource::DataTeamSpawn (15 total)
// strings: "../../public/tier2/fieldpath.h", "Path_SetCount", "Path_SetCount failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)", "Path_AddToTail", "Path_AddToTail failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)", "Path_AddToTail failed for read only CFieldPath"
void __fastcall CDOTA_DataNonSpectator::ChangeTeam(CDOTA_DataNonSpectator *const this, int iTeamNum)
{
  CFieldPath *p_path; // r13
  CDOTA_PlayerResource *const *v4; // rbx
  const CDOTA_PlayerResource *v5; // rdi
  int v6; // r15d
  int i; // r14d
  CEntityInstance *p_m_PathToVector; // rdi
  int TeamSlot; // eax
  void **v10; // r15
  CEntityInstance *m_pObj; // r14
  FlattenedSerializerHandle_t NetworkSerializerForEntityInstance; // rax
  __int64 v13; // rax
  void **v14; // rsi
  FlattenedSerializerHandle_t v15; // rax
  __int64 v16; // rax
  void **v17; // rsi
  CEntityInstance *v18; // rcx
  FlattenedSerializerHandle_t v19; // rax
  __int64 v20; // rdx
  size_t v21; // rdx
  void *v22; // rsi
  __int64 v23; // rdx
  __int64 v24; // rdx
  const CFieldPath::Path_t *m_pPaths; // rsi
  int16 v26; // dx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rdi
  __int64 v30; // rsi
  __int64 m_nCount; // rax
  ChangeAccessorFieldPathIndex_t *v32; // rdx
  ChangeAccessorFieldPathIndex_t v33; // ax
  CEntityInstance *v34; // rax
  CUtlDelegate<void()> *m_pArraySizeChangedDelegate; // rax
  void (*pfn)(detail::GenericClass *); // rdx
  detail::GenericClass *v37; // rdi
  int j; // r14d
  CDOTA_PlayerResource *v39; // rdi
  int iTeamNuma; // [rsp+4h] [rbp-10Ch]
  bool *p_m_bIsNetworkVarExcluded; // [rsp+8h] [rbp-108h]
  void (__fastcall *v42)(void **, IFlattenedSerializers *, FlattenedSerializerHandle_t, CEntityInstance *, CUtlVectorEmbeddedNetworkVar<DataTeamPlayer_t,CDOTA_DataNonSpectator::NetworkVar_m_vecDataTeam,-1> *, bool *); // [rsp+18h] [rbp-F8h]
  CEntityInstance *v43; // [rsp+20h] [rbp-F0h]
  ChangeAccessorFieldPathIndex_t *v44; // [rsp+20h] [rbp-F0h]
  CUtlVectorEmbeddedNetworkVar<DataTeamPlayer_t,CDOTA_DataNonSpectator::NetworkVar_m_vecDataTeam,-1> *p_m_vecDataTeam; // [rsp+28h] [rbp-E8h]
  CFieldPath *dest; // [rsp+30h] [rbp-E0h]
  void **v47; // [rsp+38h] [rbp-D8h]
  void *src[2]; // [rsp+40h] [rbp-D0h] BYREF
  __int16 v49; // [rsp+50h] [rbp-C0h]
  char v50; // [rsp+52h] [rbp-BEh]
  void *v51[2]; // [rsp+60h] [rbp-B0h] BYREF
  __int16 v52; // [rsp+70h] [rbp-A0h]
  char v53; // [rsp+72h] [rbp-9Eh]
  CFieldPath path; // [rsp+80h] [rbp-90h] BYREF
  void *v55; // [rsp+A0h] [rbp-70h] BYREF
  int16 v56; // [rsp+B0h] [rbp-60h]
  char v57; // [rsp+B2h] [rbp-5Eh]
  LeafCodeInfo_t v58; // [rsp+C0h] [rbp-50h] BYREF

  p_path = iTeamNum;
  if ( iTeamNum != this->m_iTeamNum.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 383, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_iTeamNum.m_Value = p_path;
  }
  v4 = &g_pDOTAPlayerResource;
  v5 = g_pDOTAPlayerResource;
  if ( g_pDOTAPlayerResource == 0 )
  {
    v39 = 0;
    goto LABEL_70;
  }
  v6 = -1;
  for ( i = 0; i < CDOTA_PlayerResource::NumTeamPlayers(v5); ++i )
  {
    if ( p_path == CDOTA_PlayerResource::GetTeam(g_pDOTAPlayerResource, i) )
    {
      TeamSlot = CDOTA_PlayerResource::GetTeamSlot(g_pDOTAPlayerResource, i);
      if ( v6 < TeamSlot )
        v6 = TeamSlot;
    }
    v5 = g_pDOTAPlayerResource;
  }
  LODWORD(v10) = v6 + 1;
  if ( v10 != this->m_vecDataTeam.m_Vector.m_Size )
  {
    p_m_vecDataTeam = &this->m_vecDataTeam;
    if ( !this->m_vecDataTeam.m_bResolved )
    {
      m_pObj = this->m_vecDataTeam.m_pOwnerEntity.m_pObj;
      this->m_vecDataTeam.m_bResolved = 1;
      if ( m_pObj != 0 )
      {
        dest = *(*g_pFlattenedSerializers + 272LL);
        NetworkSerializerForEntityInstance = GetNetworkSerializerForEntityInstance(m_pObj);
        v47 = src;
        (dest)(
          src,
          g_pFlattenedSerializers,
          NetworkSerializerForEntityInstance,
          m_pObj,
          p_m_vecDataTeam,
          &this->m_vecDataTeam.m_bIsNetworkVarExcluded);
        if ( &this->m_vecDataTeam.m_PathToVector != src )
        {
          v13 = v49;
          this->m_vecDataTeam.m_PathToVector.m_bUsingExternalPaths = 0;
          if ( v13 > 6 )
            goto LABEL_81;
          this->m_vecDataTeam.m_PathToVector.m_nCount = v13;
          if ( v13 > 0 )
          {
            v14 = src;
            if ( v50 != 0 )
              v14 = src[0];
            memcpy(&this->m_vecDataTeam.m_PathToVector, v14, 2 * v13);
          }
        }
      }
      else
      {
        if ( this->m_vecDataTeam.m_PathToVector.m_bUsingExternalPaths )
          goto LABEL_75;
        this->m_vecDataTeam.m_PathToVector.m_nCount = 0;
      }
    }
    if ( !this->m_vecDataTeam.m_bIsNetworkVarExcluded )
      EntityInstanceSetNetworkStateChanged(this->m_vecDataTeam.m_pOwnerEntity.m_pObj);
    CUtlVectorBase<DataTeamPlayer_t,CNetworkUtlVector_MemoryType<DataTeamPlayer_t,-1>>::SetCount(
      &p_m_vecDataTeam->m_Vector,
      v10);
    if ( this->m_vecDataTeam.m_bResolved )
    {
LABEL_30:
      if ( !this->m_vecDataTeam.m_bIsNetworkVarExcluded && this->m_vecDataTeam.m_Vector.m_Size > 0 )
      {
        iTeamNuma = p_path;
        m_pObj = 0;
        v47 = &v55;
        LODWORD(v10) = 0;
        p_m_bIsNetworkVarExcluded = &this->m_vecDataTeam.m_bIsNetworkVarExcluded;
        dest = &this->m_vecDataTeam.m_PathToVector;
        p_path = &path;
        goto LABEL_33;
      }
LABEL_60:
      m_pArraySizeChangedDelegate = this->m_vecDataTeam.m_pArraySizeChangedDelegate;
      if ( m_pArraySizeChangedDelegate != 0 )
      {
        pfn = m_pArraySizeChangedDelegate->m_Closure.m_pFunction.__pfn;
        v37 = (m_pArraySizeChangedDelegate->m_Closure.m_pthis
             + m_pArraySizeChangedDelegate->m_Closure.m_pFunction.__delta);
        if ( (pfn & 1) != 0 )
          pfn = *(pfn + *v37 - 1);
        pfn(v37);
      }
      goto LABEL_64;
    }
    m_pObj = this->m_vecDataTeam.m_pOwnerEntity.m_pObj;
    this->m_vecDataTeam.m_bResolved = 1;
    if ( m_pObj != 0 )
    {
      v47 = *(*g_pFlattenedSerializers + 272LL);
      v15 = GetNetworkSerializerForEntityInstance(m_pObj);
      v10 = v51;
      (v47)(v51, g_pFlattenedSerializers, v15, m_pObj, p_m_vecDataTeam, &this->m_vecDataTeam.m_bIsNetworkVarExcluded);
      p_m_PathToVector = &this->m_vecDataTeam.m_PathToVector;
      if ( &this->m_vecDataTeam.m_PathToVector == v51 )
        goto LABEL_30;
      v16 = v52;
      this->m_vecDataTeam.m_PathToVector.m_bUsingExternalPaths = 0;
      if ( v16 <= 6 )
      {
        this->m_vecDataTeam.m_PathToVector.m_nCount = v16;
        if ( v16 > 0 )
        {
          v17 = v51;
          if ( v53 != 0 )
            v17 = v51[0];
          memcpy(p_m_PathToVector, v17, 2 * v16);
        }
        goto LABEL_30;
      }
LABEL_81:
      v4 = &LOG_GENERAL;
      if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
      {
        v58.m_nLine = 442;
        v58.m_szFile = "../../public/tier2/fieldpath.h";
        v58.m_szFunction = "Path_SetCount";
        LoggingSystem_Log(
          LOG_GENERAL,
          LoggingSeverity_t::LS_ERROR,
          &v58,
          "Path_SetCount failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)",
          6);
      }
      while ( 1 )
      {
LABEL_49:
        if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v29, v30, v27, v28) != 0 )
          loc_0 = -559038737;
        Plat_ExitProcess(1);
LABEL_52:
        v26 = v10;
LABEL_53:
        m_nCount = path.m_nCount;
        if ( path.m_nCount <= 5 )
          break;
        v4 = &LOG_GENERAL;
        if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
        {
          v58.m_szFile = "../../public/tier2/fieldpath.h";
          v58.m_szFunction = "Path_AddToTail";
          v58.m_nLine = 425;
          LoggingSystem_Log(
            LOG_GENERAL,
            LoggingSeverity_t::LS_ERROR,
            &v58,
            "Path_AddToTail failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)",
            6);
        }
      }
      p_m_PathToVector = this->m_vecDataTeam.m_pOwnerEntity.m_pObj;
      ++path.m_nCount;
      p_path->u.m_FixedPaths[m_nCount].m_nValue = v26;
      v32 = (this->m_vecDataTeam.m_Vector.m_Memory.m_pMemory + m_pObj);
      if ( p_m_PathToVector != 0 )
      {
        v44 = (this->m_vecDataTeam.m_Vector.m_Memory.m_pMemory + m_pObj);
        v33.m_Value = EntityInstanceAddChangeAccessorPath(p_m_PathToVector, p_path).m_Value;
        v32 = v44;
        v44[8].m_Value = v33.m_Value;
      }
      else
      {
        v32[8].m_Value = -1;
      }
      v34 = this->m_vecDataTeam.m_pOwnerEntity.m_pObj;
      if ( v34 != *&v32[4].m_Value )
        *&v32[4].m_Value = v34;
      while ( 1 )
      {
        LODWORD(v10) = v10 + 1;
        m_pObj += 8;
        if ( v10 >= this->m_vecDataTeam.m_Vector.m_Size )
          break;
LABEL_33:
        if ( !this->m_vecDataTeam.m_bResolved )
        {
          v18 = this->m_vecDataTeam.m_pOwnerEntity.m_pObj;
          this->m_vecDataTeam.m_bResolved = 1;
          if ( v18 != 0 )
          {
            v43 = v18;
            v42 = *(*g_pFlattenedSerializers + 272LL);
            v19 = GetNetworkSerializerForEntityInstance(v18);
            v42(v47, g_pFlattenedSerializers, v19, v43, p_m_vecDataTeam, p_m_bIsNetworkVarExcluded);
            if ( dest != v47 )
            {
              this->m_vecDataTeam.m_PathToVector.m_bUsingExternalPaths = 0;
              v20 = v56;
              if ( v56 > 6 )
                goto LABEL_81;
              this->m_vecDataTeam.m_PathToVector.m_nCount = v56;
              if ( v20 > 0 )
              {
                v21 = 2 * v20;
                v22 = v47;
                if ( v57 != 0 )
                  v22 = v55;
                memcpy(dest, v22, v21);
              }
            }
          }
          else
          {
            if ( this->m_vecDataTeam.m_PathToVector.m_bUsingExternalPaths )
              goto LABEL_75;
            this->m_vecDataTeam.m_PathToVector.m_nCount = 0;
          }
        }
        if ( !this->m_vecDataTeam.m_bIsNetworkVarExcluded )
        {
          v23 = this->m_vecDataTeam.m_PathToVector.m_nCount;
          path.m_bUsingExternalPaths = 0;
          path.m_nCount = 0;
          if ( v23 > 6 )
            goto LABEL_81;
          path.m_nCount = v23;
          if ( v23 <= 0 )
            goto LABEL_52;
          v24 = 2 * v23;
          if ( this->m_vecDataTeam.m_PathToVector.m_bUsingExternalPaths )
            m_pPaths = this->m_vecDataTeam.m_PathToVector.u.m_pPaths;
          else
            m_pPaths = dest;
          __memcpy_chk(p_path, m_pPaths, v24, 24);
          v26 = v10;
          if ( !path.m_bUsingExternalPaths )
            goto LABEL_53;
          v4 = &LOG_GENERAL;
          if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
          {
            v58.m_szFile = "../../public/tier2/fieldpath.h";
            v58.m_szFunction = "Path_AddToTail";
            v58.m_nLine = 428;
            LoggingSystem_Log(
              LOG_GENERAL,
              LoggingSeverity_t::LS_ERROR,
              &v58,
              "Path_AddToTail failed for read only CFieldPath");
          }
          goto LABEL_49;
        }
      }
      LODWORD(p_path) = iTeamNuma;
      goto LABEL_60;
    }
    if ( !this->m_vecDataTeam.m_PathToVector.m_bUsingExternalPaths )
    {
      this->m_vecDataTeam.m_PathToVector.m_nCount = 0;
      goto LABEL_30;
    }
LABEL_75:
    CUtlVectorEmbeddedNetworkVar<DataTeamPlayer_t,CDOTA_DataNonSpectator::NetworkVar_m_vecDataTeam,-1>::Resolve(p_m_PathToVector);
  }
LABEL_64:
  for ( j = 0; j < CDOTA_PlayerResource::NumTeamPlayers(*v4); ++j )
  {
    if ( p_path == CDOTA_PlayerResource::GetTeam(*v4, j) )
      this->m_vecDataTeam.m_Vector.m_Memory.m_pMemory[CDOTA_PlayerResource::GetTeamSlot(*v4, j)].m_PreGameInventory.m_nPreGamePlayerID = j;
  }
  v39 = *v4;
LABEL_70:
  CDOTA_PlayerResource::DataTeamSpawn(v39, this, p_path);
}


// CDOTA_DataRadiant::ShouldTransmit  (line 92, @0x0000000002463840, libserver.so)  // inlines: ToDOTAPlayer
// calls: CDOTAPlayer::IsACoach, CDOTAPlayer::GetCoachedTeamNum
int __fastcall CDOTA_DataRadiant::ShouldTransmit(CDOTA_DataRadiant *const this, const CGameCheckTransmitInfo *pInfo)
{
  int result; // eax
  CDOTAPlayer *m_pRecipientPlayer; // rbx
  char v4; // al
  bool IsACoach; // al
  int CoachedTeamNum; // eax
  const CGameCheckTransmitInfo *v7; // [rsp-8h] [rbp-20h]

  result = 4;
  if ( !pInfo->m_bGameOverState )
  {
    m_pRecipientPlayer = pInfo->m_pRecipientPlayer;
    if ( m_pRecipientPlayer != 0
      && (v7 = pInfo, v4 = (*(m_pRecipientPlayer->_vptr_IHandleEntity + 140))(m_pRecipientPlayer), pInfo = v7, v4 != 0)
      && (IsACoach = CDOTAPlayer::IsACoach(m_pRecipientPlayer), pInfo = v7, IsACoach) )
    {
      CoachedTeamNum = CDOTAPlayer::GetCoachedTeamNum(m_pRecipientPlayer);
      pInfo = v7;
      if ( CoachedTeamNum == 2 )
        return 4;
    }
    else if ( pInfo->m_nRecipientTeamNumber == 1 )
    {
      return 4;
    }
    result = 8;
    if ( pInfo->m_nRecipientTeamNumber == 2 )
      return 4;
  }
  return result;
}


// CDOTA_DataDire::ShouldTransmit  (line 107, @0x00000000024638c0, libserver.so)  // inlines: ToDOTAPlayer
// calls: CDOTAPlayer::IsACoach, CDOTAPlayer::GetCoachedTeamNum
int __fastcall CDOTA_DataDire::ShouldTransmit(CDOTA_DataDire *const this, const CGameCheckTransmitInfo *pInfo)
{
  int result; // eax
  CDOTAPlayer *m_pRecipientPlayer; // rbx
  char v4; // al
  bool IsACoach; // al
  int CoachedTeamNum; // eax
  const CGameCheckTransmitInfo *v7; // [rsp-8h] [rbp-20h]

  result = 4;
  if ( !pInfo->m_bGameOverState )
  {
    m_pRecipientPlayer = pInfo->m_pRecipientPlayer;
    if ( m_pRecipientPlayer != 0
      && (v7 = pInfo, v4 = (*(m_pRecipientPlayer->_vptr_IHandleEntity + 140))(m_pRecipientPlayer), pInfo = v7, v4 != 0)
      && (IsACoach = CDOTAPlayer::IsACoach(m_pRecipientPlayer), pInfo = v7, IsACoach) )
    {
      CoachedTeamNum = CDOTAPlayer::GetCoachedTeamNum(m_pRecipientPlayer);
      pInfo = v7;
      if ( CoachedTeamNum == 3 )
        return 4;
    }
    else if ( pInfo->m_nRecipientTeamNumber == 1 )
    {
      return 4;
    }
    result = 8;
    if ( pInfo->m_nRecipientTeamNumber == 3 )
      return 4;
  }
  return result;
}


// CDOTA_DataSpectator::Spawn  (line 124, @0x0000000002487ee0, libserver.so)  // inlines: Spawn
// calls: CBaseEntity::Spawn, CDOTA_DataNonSpectator::Reset, CDOTA_DataSpectator::Reset
void __fastcall CDOTA_DataSpectator::Spawn(CDOTA_DataSpectator *const this, const CEntityKeyValues *pKeyValues)
{
  CBaseEntity::Spawn(this, pKeyValues);
  CDOTA_DataNonSpectator::Reset(this);
  CDOTA_DataSpectator::Reset(this);
}


// CDOTA_DataSpectator::ShouldTransmit  (line 132, @0x0000000002462aa0, libserver.so)
int __fastcall CDOTA_DataSpectator::ShouldTransmit(
        CDOTA_DataSpectator *const this,
        const CGameCheckTransmitInfo *pInfo)
{
  return 4 * (pInfo->m_nRecipientTeamNumber != 1) + 4;
}


// CDOTA_DataSpectator::Reset  (line 137, @0x00000000024724d0, libserver.so)  // inlines: NetworkStateChanged, Set
// calls: memcmp
// callers: CDOTA_DataSpectator::Spawn
void __fastcall CDOTA_DataSpectator::Reset(CDOTA_DataSpectator *const this)
{
  CNetworkArrayBase<int,24,CDOTA_DataSpectator::NetworkVar_m_iNetWorth> *p_m_iNetWorth; // r15
  CNetworkArrayBase<int,24,CDOTA_DataSpectator::NetworkVar_m_iNetWorth> *v3; // r12
  unsigned int i; // ebx
  _DWORD s2[13]; // [rsp+Ch] [rbp-34h] BYREF

  p_m_iNetWorth = &this->m_iNetWorth;
  v3 = &this->m_iNetWorth;
  for ( i = 0; i != 24; ++i )
  {
    s2[0] = 0;
    if ( memcmp(v3, s2, 4u) != 0 )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 2952, i, 0xFFFFFFFFLL);
      *(&p_m_iNetWorth[-30] + v3 - this - 72) = 0;
    }
    v3 = (v3 + 4);
  }
}


// CDOTA_DataCustomTeam::ShouldTransmit  (line 147, @0x0000000002463980, libserver.so)  // inlines: GetTeamNumber
int __fastcall CDOTA_DataCustomTeam::ShouldTransmit(
        CDOTA_DataCustomTeam *const this,
        const CGameCheckTransmitInfo *pInfo)
{
  int result; // eax
  int m_nRecipientTeamNumber; // eax

  result = 4;
  if ( !pInfo->m_bGameOverState )
  {
    m_nRecipientTeamNumber = pInfo->m_nRecipientTeamNumber;
    if ( m_nRecipientTeamNumber == this->m_iTeamNum.m_Value || m_nRecipientTeamNumber == 1 )
      return 4;
    else
      return 8;
  }
  return result;
}


