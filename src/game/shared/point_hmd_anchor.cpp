// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/point_hmd_anchor.cpp:15
class C_CPointHMDAnchor_MapInstall {
	C_CPointHMDAnchor_MapInstall();

	// sizeof = 1
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CPointHMDAnchor::YouForgotToImplementOrDeclareServerClass  (line 15, @0x000000000231ec50, libserver.so)
int __fastcall CPointHMDAnchor::YouForgotToImplementOrDeclareServerClass(CPointHMDAnchor *const this)
{
  return 0;
}


// CPointHMDAnchor::GetServerClass  (line 15, @0x0000000002324210, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CPointHMDAnchor::GetServerClass(CPointHMDAnchor *const this)
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


// CPointHMDAnchor::GetDataDescMap  (line 17, @0x000000000231ec60, libserver.so)
// globals: CPointHMDAnchor::m_DataMap
datamap_t *__fastcall CPointHMDAnchor::GetDataDescMap(CPointHMDAnchor *const this)
{
  return &CPointHMDAnchor::m_DataMap;
}


// CPointHMDAnchor::AddDatadescMetadataKeys  (line 17, @0x0000000002327420, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CPointHMDAnchor::GetEntityClass(void)
void __fastcall CPointHMDAnchor::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CPointHMDAnchor::GetEntityClass);
}


// CPointHMDAnchor::GetBaseMap  (line 17, @0x0000000002327440, libserver.so)
datamap_t *__cdecl CPointHMDAnchor::GetBaseMap()
{
  return &CBaseEntity::m_DataMap;
}


// DataMapInit<CPointHMDAnchor>  (line 17, @0x0000000002327450, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_09.cpp
// strings: "CPointHMDAnchor"
// globals: `guard variable for'DataMapInit<CPointHMDAnchor>(CPointHMDAnchor *)::nameHolder, CPointHMDAnchor::GetEntityClass(void), CPointHMDAnchor::m_DataMap, DataMapInit<CPointHMDAnchor>(CPointHMDAnchor *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CPointHMDAnchor>(CPointHMDAnchor *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CPointHMDAnchor>(CPointHMDAnchor *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CPointHMDAnchor>(CPointHMDAnchor *)::nameHolder) != 0 )
  {
    DataMapInit<CPointHMDAnchor>(CPointHMDAnchor *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CPointHMDAnchor>(CPointHMDAnchor *)::nameHolder.m_pszBase = "CPointHMDAnchor";
    DataMapInit<CPointHMDAnchor>(CPointHMDAnchor *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CPointHMDAnchor>(CPointHMDAnchor *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CPointHMDAnchor>(CPointHMDAnchor *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CPointHMDAnchor>(CPointHMDAnchor *)::nameHolder.m_nLenBase = 15;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CPointHMDAnchor>(CPointHMDAnchor *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CPointHMDAnchor>(CPointHMDAnchor *)::nameHolder,
      &_dso_handle);
  }
  CPointHMDAnchor::m_DataMap.dataNumFields = 3;
  CPointHMDAnchor::m_DataMap.baseMap = &CBaseEntity::m_DataMap;
  CPointHMDAnchor::m_DataMap.dataDesc = &DataMapInit<CPointHMDAnchor>(CPointHMDAnchor *)::dataDesc[1];
  AddDatadescMetadataKeys(&CPointHMDAnchor::m_DataMap, CPointHMDAnchor::GetEntityClass);
  return &CPointHMDAnchor::m_DataMap;
}


// VR_GetOverrideAnchor  (line 25, @0x0000000002327520, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*
// globals: g_hOverrideAnchor, CEntityHandle::gm_pEntityList
CBaseEntity *__cdecl VR_GetOverrideAnchor()
{
  CBaseEntity *result; // rax
  CEntityIdentity *v1; // rcx
  CEntityIdentity *v2; // rcx

  result = 0;
  if ( g_hOverrideAnchor.m_Index + 2 > 1 )
  {
    v1 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(g_hOverrideAnchor.m_Index) >> 9) & 0x3F];
    if ( v1 != 0 )
    {
      v2 = &v1[g_hOverrideAnchor.m_Index & 0x1FF];
      if ( v2 != 0 && g_hOverrideAnchor.m_Index == v2->m_EHandle.m_Index )
        return v2->m_pInstance;
    }
  }
  return result;
}


// VR_SetOverrideAnchor  (line 26, @0x0000000002327580, libserver.so)  // inlines: GetEHandle, GetEntryIndex, GetSerialNumber, Set, operator=
// globals: g_hOverrideAnchor
void __fastcall VR_SetOverrideAnchor(CBaseEntity *pAnchor)
{
  CEntityIdentity *m_pEntity; // rdx
  int v2; // eax
  __int16 v3; // cx

  if ( pAnchor != 0 && (m_pEntity = pAnchor->m_pEntity) != 0 )
  {
    v2 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
    if ( m_pEntity->m_EHandle.m_Index == -1 )
      v3 = 0x7FFF;
    else
      v3 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    LOWORD(g_hOverrideAnchor.m_Index) = v3 | g_hOverrideAnchor.m_Index & 0x8000;
    g_hOverrideAnchor.m_Index = (v2 << 15) | g_hOverrideAnchor.m_Index & 0x7FFF;
  }
  else
  {
    g_hOverrideAnchor.m_Index = -1;
  }
}


// VR_GetActiveHMDAnchor  (line 28, @0x0000000002327600, libserver.so)  // inlines: CEntityHandle, Get, GetEntityIdentity, GetEntryIndex, GetHandleEntity, GetInstance, GetPointHMDAnchor, GetSerialNumber, IndexToIdentity, Init, IsValid, LookupEntity, operator CEntityInstance*
// callers: CBasePlayer::ScriptGetHMDAnchor, CBasePlayer::UpdateOnRemove, CBasePlayer::Activate, CPointHMDAnchor::ReceiveClientMsg_RotateAnchor, CTrackedControllerManager::UpdateVRHandPosesServer
// globals: g_hOverrideAnchor, CEntityHandle::gm_pEntityList
CBaseEntity *__fastcall VR_GetActiveHMDAnchor(const CBasePlayer *pPlayer)
{
  CEntityIdentity *v1; // rdx
  CEntityIdentity *v2; // rdx
  uint32 v3; // ecx
  unsigned __int16 v4; // dx
  int v5; // esi
  int v6; // edx
  CBaseEntity *result; // rax
  CEntityIdentity *v8; // rcx
  CEntityIdentity *v9; // rcx
  __int64 v10; // [rsp-8h] [rbp-8h]

  if ( g_hOverrideAnchor.m_Index + 2 <= 1
    || (v1 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(g_hOverrideAnchor.m_Index) >> 9) & 0x3F]) == 0
    || (v2 = &v1[g_hOverrideAnchor.m_Index & 0x1FF]) == 0
    || g_hOverrideAnchor.m_Index != v2->m_EHandle.m_Index
    || (result = v2->m_pInstance, v2->m_pInstance == 0) )
  {
    if ( pPlayer != 0 )
    {
      v3 = pPlayer->m_hPointHMDAnchor.m_Value.m_Index >> 15;
      if ( pPlayer->m_hPointHMDAnchor.m_Value.m_Index == -1 )
      {
        v4 = 0x7FFF;
        v5 = 0x7FFF;
      }
      else
      {
        v4 = pPlayer->m_hPointHMDAnchor.m_Value.m_Index & 0x7FFF;
        v5 = v4;
      }
      *(&v10 - 8) = v4 | *(&v10 - 2) & 0x8000;
      v6 = (v3 << 15) | *(&v10 - 2) & 0x7FFF;
      *(&v10 - 4) = v6;
      result = 0;
      if ( (v6 + 2) > 1 )
      {
        v8 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v5 >> 9];
        if ( v8 != 0 )
        {
          v9 = &v8[v5 & 0x1FF];
          if ( v9 != 0 && v6 == v9->m_EHandle.m_Index )
            return v9->m_pInstance;
        }
      }
    }
    else
    {
      return 0;
    }
  }
  return result;
}


// CPointHMDAnchor::Activate  (line 62, @0x0000000002335bb0, libserver.so)  // inlines: CUtlDelegate<CPointHMDAnchor, CPointHMDAnchor>, Convert<CPointHMDAnchor, bool (CPointHMDAnchor::*)(const CClientMsg_RotateAnchor_t&), void (detail::GenericClass::*)()>, FastDelegate1<CPointHMDAnchor, CPointHMDAnchor>, RegisterGameEventHandler<CClientMsg_RotateAnchor_t>, UtlMakeDelegate<CPointHMDAnchor, CPointHMDAnchor, const CClientMsg_RotateAnchor_t&, bool>, bindmemfunc<CPointHMDAnchor, bool (CPointHMDAnchor::*)(const CClientMsg_RotateAnchor_t&)>
// calls: CBaseEntity::Activate
// globals: CPointHMDAnchor::ReceiveClientMsg_RotateAnchor(CClientMsg_RotateAnchor_t const&), IGameEventSystem::FindOrCreateGameEvent<CClientMsg_RotateAnchor_t>(bool)::s_hEvent
void __fastcall CPointHMDAnchor::Activate(CPointHMDAnchor *const this, ActivateType_t activateType)
{
  _QWORD v3[6]; // [rsp+0h] [rbp-30h] BYREF

  CBaseEntity::Activate(this, activateType);
  v3[0] = this;
  v3[1] = CPointHMDAnchor::ReceiveClientMsg_RotateAnchor;
  v3[2] = 0;
  (*(*g_pGameEventSystem + 96LL))(
    g_pGameEventSystem,
    0,
    v3,
    IGameEventSystem::FindOrCreateGameEvent<CClientMsg_RotateAnchor_t>(bool)::s_hEvent,
    0);
}


// CPointHMDAnchor::UpdateOnRemove  (line 72, @0x0000000002335c00, libserver.so)  // inlines: CUtlDelegate<CPointHMDAnchor, CPointHMDAnchor>, Convert<CPointHMDAnchor, bool (CPointHMDAnchor::*)(const CClientMsg_RotateAnchor_t&), void (detail::GenericClass::*)()>, FastDelegate1<CPointHMDAnchor, CPointHMDAnchor>, UnregisterGameEventHandler<CClientMsg_RotateAnchor_t>, UtlMakeDelegate<CPointHMDAnchor, CPointHMDAnchor, const CClientMsg_RotateAnchor_t&, bool>, bindmemfunc<CPointHMDAnchor, bool (CPointHMDAnchor::*)(const CClientMsg_RotateAnchor_t&)>
// calls: CBaseEntity::UpdateOnRemove
// globals: CPointHMDAnchor::ReceiveClientMsg_RotateAnchor(CClientMsg_RotateAnchor_t const&), IGameEventSystem::FindOrCreateGameEvent<CClientMsg_RotateAnchor_t>(bool)::s_hEvent
void __fastcall CPointHMDAnchor::UpdateOnRemove(CPointHMDAnchor *const this)
{
  _QWORD v2[6]; // [rsp+0h] [rbp-30h] BYREF

  v2[1] = CPointHMDAnchor::ReceiveClientMsg_RotateAnchor;
  v2[0] = this;
  v2[2] = 0;
  (*(*g_pGameEventSystem + 104LL))(
    g_pGameEventSystem,
    0,
    v2,
    IGameEventSystem::FindOrCreateGameEvent<CClientMsg_RotateAnchor_t>(bool)::s_hEvent);
  CBaseEntity::UpdateOnRemove(this);
}


// CPointHMDAnchor::UpdateTransmitState  (line 83, @0x000000000231ee30, libserver.so)
// calls: CBaseEntity::SetTransmitState
int __fastcall CPointHMDAnchor::UpdateTransmitState(CPointHMDAnchor *const this)
{
  return CBaseEntity::SetTransmitState(this, 4);
}


// CPointHMDAnchor::ReceiveClientMsg_RotateAnchor  (line 110, @0x0000000002327720, libserver.so)  // inlines: GetInstance, IndexToIdentity, Instance, IsUsed, LookupEntityByIndex, LookupEntityByNetworkIndex, QAngle, ToBasePlayer, VectorAdd, VectorRotate, VectorSubtract, operator+, operator-
// calls: VR_GetActiveHMDAnchor, CBaseEntity::GetAbsAngles, AngleMatrix, CBaseEntity::GetAbsOrigin, VectorRotate
bool __fastcall CPointHMDAnchor::ReceiveClientMsg_RotateAnchor(
        CPointHMDAnchor *const this,
        const CClientMsg_RotateAnchor_t *const msg)
{
  int v3; // eax
  CEntityIdentity *v4; // rcx
  CEntityIdentity *v5; // rdx
  const CBasePlayer *m_pInstance; // r12
  char v7; // r13
  CBaseEntity *ActiveHMDAnchor; // rax
  const CBaseEntity *v9; // rbx
  const QAngle *AbsAngles; // rax
  float v11; // xmm0_4
  __int64 v12; // rdx
  const Vector *AbsOrigin; // r14
  const Vector *v14; // rax
  vec_t v15; // xmm1_4
  vec_t v16; // xmm0_4
  float x; // r15d
  const Vector *v18; // rax
  vec_t v19; // xmm0_4
  vec_t v20; // xmm2_4
  float y; // [rsp+Ch] [rbp-B4h]
  float z; // [rsp+10h] [rbp-B0h]
  QAngle view; // [rsp+20h] [rbp-A0h] BYREF
  QAngle angRot; // [rsp+30h] [rbp-90h] BYREF
  Vector vecAnchorToPlayer; // [rsp+40h] [rbp-80h] BYREF
  Vector v2; // [rsp+50h] [rbp-70h] BYREF
  matrix3x4_t matRotation; // [rsp+60h] [rbp-60h] BYREF

  v3 = (*(*g_pGameEventSystem + 152LL))(g_pGameEventSystem);
  if ( v3 > 0x7FFE )
    return 0;
  v4 = g_pGameEntitySystem->m_EntityList.m_pIdentityChunks[v3 >> 9];
  if ( v4 == 0 )
    return 0;
  v5 = &v4[v3 & 0x1FF];
  if ( v5 == 0 )
    return 0;
  if ( (v5->m_EHandle.m_Index & 0x7FFF) != v3 )
    return 0;
  m_pInstance = v5->m_pInstance;
  if ( v5->m_pInstance == 0 )
    return 0;
  v7 = (*(m_pInstance->_vptr_IHandleEntity + 140))(v5->m_pInstance);
  if ( v7 == 0 )
    return 0;
  ActiveHMDAnchor = VR_GetActiveHMDAnchor(m_pInstance);
  v9 = ActiveHMDAnchor;
  if ( ActiveHMDAnchor != 0 )
  {
    AbsAngles = CBaseEntity::GetAbsAngles(ActiveHMDAnchor);
    v11 = *(msg + 6);
    v12 = *&AbsAngles->x;
    angRot.x = 0.0;
    angRot.y = v11;
    *&view.x = v12;
    *&AbsAngles = AbsAngles->z;
    angRot.z = 0.0;
    LODWORD(view.z) = AbsAngles;
    view.y = *(&v12 + 1) + v11;
    AngleMatrix(&angRot, &matRotation);
    AbsOrigin = CBaseEntity::GetAbsOrigin(m_pInstance);
    v14 = CBaseEntity::GetAbsOrigin(v9);
    v15 = v14->y - AbsOrigin->y;
    v16 = v14->z - AbsOrigin->z;
    vecAnchorToPlayer.x = v14->x - AbsOrigin->x;
    vecAnchorToPlayer.y = v15;
    vecAnchorToPlayer.z = v16;
    VectorRotate(&vecAnchorToPlayer.x, &matRotation, &v2.x);
    x = v2.x;
    y = v2.y;
    z = v2.z;
    v18 = CBaseEntity::GetAbsOrigin(m_pInstance);
    v19 = z + v18->z;
    v20 = x + v18->x;
    v2.y = y + v18->y;
    v2.z = v19;
    v2.x = v20;
    (*(v9->_vptr_IHandleEntity + 128))(v9, &v2, &view, 0);
  }
  return v7;
}


