// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/beam_shared.cpp:123
class C_CBeam_MapInstall {
	C_CBeam_MapInstall();

	// sizeof = 1
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// IsStaticPointEntity  (line 42, @0x00000000021909b0, libserver.so)  // inlines: ClassMatches, FClassnameIs
// calls: CBaseEntity::GetMoveParent, CBaseEntity::GetModel, CEntityIdentity::ClassMatches
// callers: CEnvBeam::Strike, CEnvBeam::BeamUpdateVars
// strings: "info_target", "info_landmark", "path_corner"
bool __fastcall IsStaticPointEntity(CBaseEntity *pEnt)
{
  CBaseEntity *MoveParent; // rdx
  bool result; // al
  _QWORD v4[4]; // [rsp+0h] [rbp-20h] BYREF

  MoveParent = CBaseEntity::GetMoveParent(pEnt);
  result = 0;
  if ( MoveParent == 0 )
  {
    CBaseEntity::GetModel(v4, pEnt);
    return v4[0] == 0
        || pEnt != 0
        && (CEntityIdentity::ClassMatches(pEnt->m_pEntity, "info_target")
         || CEntityIdentity::ClassMatches(pEnt->m_pEntity, "info_landmark")
         || CEntityIdentity::ClassMatches(pEnt->m_pEntity, "path_corner"));
  }
  return result;
}


// CBeam::YouForgotToImplementOrDeclareServerClass  (line 123, @0x0000000002187360, libserver.so)
int __fastcall CBeam::YouForgotToImplementOrDeclareServerClass(CBeam *const this)
{
  return 0;
}


// CBeam::GetServerClass  (line 123, @0x000000000218f200, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CBeam::GetServerClass(CBeam *const this)
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


// CBeam::GetDataDescMap  (line 126, @0x0000000002187370, libserver.so)
// globals: CBeam::m_DataMap
datamap_t *__fastcall CBeam::GetDataDescMap(CBeam *const this)
{
  return &CBeam::m_DataMap;
}


// CBeam::AddDatadescMetadataKeys  (line 126, @0x0000000002190a40, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CBeam::GetEntityClass(void)
void __fastcall CBeam::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CBeam::GetEntityClass);
}


// CBeam::GetBaseMap  (line 126, @0x0000000002190a60, libserver.so)
datamap_t *__cdecl CBeam::GetBaseMap()
{
  return &CBaseModelEntity::m_DataMap;
}


// DataMapInit<CBeam>  (line 126, @0x0000000002190a70, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_02.cpp
// strings: "CBeam"
// globals: `guard variable for'DataMapInit<CBeam>(CBeam *)::nameHolder, CBeam::GetEntityClass(void), CBeam::m_DataMap, DataMapInit<CBeam>(CBeam *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CBeam>(CBeam *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CBeam>(CBeam *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CBeam>(CBeam *)::nameHolder) != 0 )
  {
    DataMapInit<CBeam>(CBeam *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CBeam>(CBeam *)::nameHolder.m_pszBase = "CBeam";
    DataMapInit<CBeam>(CBeam *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CBeam>(CBeam *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CBeam>(CBeam *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CBeam>(CBeam *)::nameHolder.m_nLenBase = 5;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CBeam>(CBeam *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CBeam>(CBeam *)::nameHolder,
      &_dso_handle);
  }
  CBeam::m_DataMap.dataNumFields = 30;
  CBeam::m_DataMap.baseMap = &CBaseModelEntity::m_DataMap;
  CBeam::m_DataMap.dataDesc = &DataMapInit<CBeam>(CBeam *)::dataDesc[1];
  AddDatadescMetadataKeys(&CBeam::m_DataMap, CBeam::GetEntityClass);
  return &CBeam::m_DataMap;
}


// CBeam::CBeam  (line 220, @0x00000000021a82a0, libserver.so)  // inlines: CEntityHandle, CHandle, CNetworkArrayBase, CNetworkVarBase, CNetworkVectorBase, CStrongHandle, EnsureValidValue, EnsureValidValue<BeamClipStyle_t>, EnsureValidValue<BeamType_t>, EnsureValidValue<bool>, EnsureValidValue<float>, EnsureValidValue<unsigned char>, EnsureValidValue<unsigned int>, NetworkStateChanged, Set, Zero, operator=<float>, ~CNetworkVarBase, ~CStrongHandle
// calls: CBaseModelEntity::CBaseModelEntity, CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown, CBaseModelEntity::~CBaseModelEntity, _Unwind_Resume
// callers: CBeam::CEntityInstanceEntityClass::ConstructInstance, CEnvLaser::CEntityInstanceEntityClass::ConstructInstance, CEnvBeam::CEntityInstanceEntityClass::ConstructInstance
void __fastcall CBeam::CBeam(CBeam *const this)
{
  CBeam *p_m_hAttachEntity; // rax
  bool v3; // zf

  CBaseModelEntity::CBaseModelEntity(this);
  this->m_flFrameRate.m_Value = 0.0;
  this->_vptr_IHandleEntity = &off_4009D10;
  this->m_nNumBeamEnts.m_Value = 0;
  p_m_hAttachEntity = &this->m_hAttachEntity;
  this->m_flHDRColorScale.m_Value = 0.0;
  this->m_hBaseMaterial.m_Value.m_pBinding = 0;
  this->m_nHaloIndex.m_Value.m_pBinding = 0;
  this->m_nBeamType.m_Value = BeamType_t::BEAM_INVALID;
  this->m_nBeamFlags.m_Value = 0;
  do
  {
    LODWORD(p_m_hAttachEntity->_vptr_IHandleEntity) = -1;
    p_m_hAttachEntity = (p_m_hAttachEntity + 4);
  }
  while ( p_m_hAttachEntity != &this->m_nAttachIndex );
  this->m_fWidth.m_Value = 0.0;
  this->m_fEndWidth.m_Value = 0.0;
  v3 = this->m_flHDRColorScale.m_Value == 1.0;
  this->m_fFadeLength.m_Value = 0.0;
  this->m_fHaloScale.m_Value = 0.0;
  this->m_fAmplitude.m_Value = 0.0;
  this->m_fStartFrame.m_Value = 0.0;
  this->m_fSpeed.m_Value = 0.0;
  this->m_flFrame.m_Value = 0.0;
  this->m_nClipStyle.m_Value = BeamClipStyle_t::kNOCLIP;
  this->m_bTurnedOff.m_Value = 0;
  this->m_vecEndPos.m_Value.z = 0.0;
  this->m_vecEndPos.m_Value.y = 0.0;
  this->m_vecEndPos.m_Value.x = 0.0;
  this->m_hEndEntity.m_Index = -1;
  if ( !v3 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1156, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_flHDRColorScale.m_Value = 1.0;
  }
  this->m_nDissolveType = -1;
}


// CBeam::Activate  (line 245, @0x0000000002188050, libserver.so)
// calls: CBaseModelEntity::Activate
// callers: CEnvBeam::Activate
void __fastcall CBeam::Activate(CBeam *const this, ActivateType_t activateType)
{
  CBaseModelEntity::Activate(this, activateType);
}


// CBeam::FirstSetup  (line 259, @0x000000000219a4b0, libserver.so)  // inlines: CEntityHandle, Get, GetEntityIdentity, GetEntryIndex, GetHandleEntity, GetInstance, GetOwnerEntity, GetSerialNumber, IndexToIdentity, Init, IsValid, LookupEntity, SetSolid, operator CEntityInstance*
// calls: CBaseEntity::SetMoveType, CBaseModelEntity::SetRenderMode, CBaseEntity::AddEffects, CBeam::SetStartEntity, CBeam::SetEndEntity
// callers: CBeam::PreFirstNetworkUpdate, CBeam::Spawn
// globals: CEntityHandle::gm_pEntityList
void __fastcall CBeam::FirstSetup(CBeam *const this)
{
  unsigned __int16 v2; // dx
  int v3; // esi
  uint32 v4; // eax
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  uint32 m_Index; // eax
  CEntityIdentity *v8; // rdx
  CEntityIdentity *v9; // rdx

  CBaseEntity::SetMoveType(this, MoveType_t::MOVETYPE_NONE, MoveCollide_t::MOVECOLLIDE_DEFAULT);
  (*(this->m_Collision._vptr_ICollideable + 26))(&this->m_Collision, 0);
  CBaseModelEntity::SetRenderMode(this, RenderMode_t::kRenderTransTexture);
  CBaseEntity::AddEffects(this, 80);
  if ( this->m_hOwnerEntity.m_Value.m_Index == -1 )
  {
    v2 = 0x7FFF;
    v3 = 0x7FFF;
  }
  else
  {
    v2 = this->m_hOwnerEntity.m_Value.m_Index & 0x7FFF;
    v3 = v2;
  }
  v4 = (this->m_hOwnerEntity.m_Value.m_Index >> 15 << 15) | v2 & 0x7FFF;
  if ( v4 + 2 > 1 )
  {
    v5 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v3 >> 9];
    if ( v5 != 0 )
    {
      v6 = &v5[v3 & 0x1FF];
      if ( v6 != 0 && v4 == v6->m_EHandle.m_Index && v6->m_pInstance != 0 )
        CBeam::SetStartEntity(this, v6->m_pInstance);
    }
  }
  m_Index = this->m_hEndEntity.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hEndEntity.m_Index) >> 9) & 0x3F];
    if ( v8 != 0 )
    {
      v9 = &v8[this->m_hEndEntity.m_Index & 0x1FF];
      if ( v9 != 0 && m_Index == v9->m_EHandle.m_Index && v9->m_pInstance != 0 )
        CBeam::SetEndEntity(this, v9->m_pInstance);
    }
  }
}


// CBeam::PreFirstNetworkUpdate  (line 279, @0x000000000219a610, libserver.so)
// calls: CBeam::FirstSetup
void __fastcall CBeam::PreFirstNetworkUpdate(CBeam *const this)
{
  CBeam::FirstSetup(this);
}


// CBeam::Spawn  (line 284, @0x000000000219a620, libserver.so)
// calls: CBaseEntity::Spawn, CBeam::FirstSetup
// callers: CEnvBeam::Spawn, CEnvLaser::Spawn
void __fastcall CBeam::Spawn(CBeam *const this, const CEntityKeyValues *pKeyValues)
{
  CBaseEntity::Spawn(this, pKeyValues);
  CBeam::FirstSetup(this);
}


// CBeam::Precache  (line 290, @0x00000000021b0980, libserver.so)  // inlines: Precache
// calls: CEntityInstance::Precache, PrecacheParticleSystem
// callers: CEnvLaser::Precache, CEnvBeam::Precache
// strings: "particles/beams/default_beam.vpcf"
void __fastcall CBeam::Precache(CBeam *const this, const CEntityPrecacheContext *pContext)
{
  CEntityInstance::Precache(this, pContext);
  PrecacheParticleSystem("particles/beams/default_beam.vpcf", pContext);
}


// CBeam::SetType  (line 297, @0x0000000002190b40, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<BeamType_t>
// callers: CBeam::PointsInit, CBeam::HoseInit, CBeam::PointEntInit, CBeam::EntsInit, CBeam::LaserInit, CBeam::SplineInit, CEnvBeam::BeamUpdateVars
void __fastcall CBeam::SetType(CBeam *const this, BeamType_t type)
{
  if ( this->m_nBeamType.m_Value != type )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1192, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_nBeamType.m_Value = type;
  }
}


// CBeam::SetBeamFlags  (line 302, @0x0000000002190b80, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<int>
// callers: CEnvBeam::BeamUpdateVars, CPointSpotlight::SpotlightCreate
void __fastcall CBeam::SetBeamFlags(CBeam *const this, int flags)
{
  if ( flags != this->m_nBeamFlags.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1196, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_nBeamFlags.m_Value = flags;
  }
}


// CBeam::SetBeamFlag  (line 308, @0x0000000002190bc0, libserver.so)  // inlines: NetworkStateChanged, Set, operator|=<int>
void __fastcall CBeam::SetBeamFlag(CBeam *const this, int flag)
{
  unsigned int m_Value; // eax
  unsigned int v4; // ebx

  m_Value = this->m_nBeamFlags.m_Value;
  v4 = m_Value | flag;
  if ( m_Value != (m_Value | flag) )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1196, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_nBeamFlags.m_Value = v4;
  }
}


// CBeam::GetType  (line 313, @0x0000000002190c00, libserver.so)
int __fastcall CBeam::GetType(const CBeam *const this)
{
  return this->m_nBeamType.m_Value;
}


// CBeam::GetBeamFlags  (line 318, @0x0000000002190c10, libserver.so)
int __fastcall CBeam::GetBeamFlags(const CBeam *const this)
{
  return this->m_nBeamFlags.m_Value;
}


// CBeam::SetStartEntity  (line 323, @0x000000000219a240, libserver.so)  // inlines: AddEFlags, CEntityHandle, CHandle, GetEHandle, GetEntryIndex, GetSerialNumber, NetworkStateChanged, Set, operator=
// calls: memcmp, CBeam::RelinkBeam, CBaseEntity::DispatchUpdateTransmitState
// callers: CBeam::FirstSetup, CBeam::EntsInit, CBeam::LaserInit, CEnvBeam::BeamUpdateVars
void __fastcall CBeam::SetStartEntity(CBeam *const this, CBaseEntity *pEntity)
{
  CEntityIdentity *m_pEntity; // rdx
  __int16 v5; // cx
  uint32 s2[8]; // [rsp+0h] [rbp-20h] BYREF

  s2[0] = -1;
  if ( pEntity != 0 )
  {
    m_pEntity = pEntity->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v5 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v5 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      s2[0] = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v5 & 0x7FFF;
    }
  }
  if ( memcmp(&this->m_hAttachEntity, s2, 4u) != 0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1200, 0, 0xFFFFFFFFLL);
    this->m_hAttachEntity.m_Value[0].m_Index = s2[0];
  }
  (*(this->_vptr_IHandleEntity + 40))(this, pEntity);
  CBeam::RelinkBeam(this);
  if ( pEntity != 0 )
  {
    pEntity->m_iEFlags |= 0x80u;
    CBaseEntity::DispatchUpdateTransmitState(pEntity);
  }
}


// CBeam::SetEndEntity  (line 335, @0x000000000219a320, libserver.so)  // inlines: AddEFlags, CEntityHandle, CHandle, GetEHandle, GetEntryIndex, GetSerialNumber, NetworkStateChanged, Set, operator=
// calls: memcmp, CBeam::RelinkBeam, CBaseEntity::DispatchUpdateTransmitState
// callers: CBeam::FirstSetup, CBeam::PointEntInit, CBeam::EntsInit, CBeam::LaserInit, CEnvBeam::BeamUpdateVars
void __fastcall CBeam::SetEndEntity(CBeam *const this, CBaseEntity *pEntity)
{
  CEntityIdentity *m_pEntity; // rdx
  __int16 v5; // cx
  unsigned int v6; // r14d
  CHandle<CBaseEntity> *v7; // r13
  CEntityIdentity *v8; // rdx
  int v9; // eax
  __int16 v10; // cx
  int s2[12]; // [rsp+0h] [rbp-30h] BYREF

  s2[0] = -1;
  if ( pEntity != 0 )
  {
    m_pEntity = pEntity->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v5 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v5 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      s2[0] = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v5 & 0x7FFF;
    }
  }
  v6 = this->m_nNumBeamEnts.m_Value - 1;
  v7 = &this->m_hAttachEntity.m_Value[v6];
  if ( memcmp(v7, s2, 4u) != 0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1200, v6, 0xFFFFFFFFLL);
    v7->m_Index = s2[0];
  }
  if ( pEntity != 0 )
  {
    v8 = pEntity->m_pEntity;
    if ( v8 != 0 )
    {
      v9 = (v8->m_EHandle.m_Index >> 15) - (v8->m_flags & 1);
      v10 = 0x7FFF;
      if ( v8->m_EHandle.m_Index != -1 )
        v10 = v8->m_EHandle.m_Index & 0x7FFF;
      LOWORD(this->m_hEndEntity.m_Index) = v10 | this->m_hEndEntity.m_Index & 0x8000;
      this->m_hEndEntity.m_Index = (v9 << 15) | this->m_hEndEntity.m_Index & 0x7FFF;
      CBeam::RelinkBeam(this);
    }
    else
    {
      this->m_hEndEntity.m_Index = -1;
      CBeam::RelinkBeam(this);
    }
    pEntity->m_iEFlags |= 0x80u;
    CBaseEntity::DispatchUpdateTransmitState(pEntity);
  }
  else
  {
    this->m_hEndEntity.m_Index = -1;
    CBeam::RelinkBeam(this);
  }
}


// CBeam::SetAbsStartPos  (line 351, @0x0000000002190c20, libserver.so)  // inlines: SetStartPos, VectorTransform
// calls: CBaseEntity::GetMoveParent, CBaseEntity::EntityToWorldTransform, MatrixInvert, VectorTransform, CBaseEntity::SetLocalOrigin
// callers: CEnvBeam::BeamUpdateVars
void __fastcall CBeam::SetAbsStartPos(CBeam *const this, const Vector *const pos)
{
  matrix3x4_t *v4; // rax
  Vector vecLocalPos; // [rsp+0h] [rbp-60h] BYREF
  matrix3x4_t worldToBeam; // [rsp+10h] [rbp-50h] BYREF

  if ( CBaseEntity::GetMoveParent(this) != 0 )
  {
    v4 = CBaseEntity::EntityToWorldTransform(this);
    MatrixInvert(v4, &worldToBeam);
    VectorTransform(&pos->x, &worldToBeam, &vecLocalPos.x);
    CBaseEntity::SetLocalOrigin(this, &vecLocalPos);
  }
  else
  {
    CBaseEntity::SetLocalOrigin(this, pos);
  }
}


// CBeam::SetAbsEndPos  (line 366, @0x0000000002190ca0, libserver.so)  // inlines: NetworkStateChanged, Set, SetEndPos, VectorTransform, operator!=, operator=
// calls: CBaseEntity::GetMoveParent, CBaseEntity::EntityToWorldTransform, MatrixInvert, VectorTransform
// callers: CEnvLaser::FireAtPoint, CEnvBeam::BeamUpdateVars
void __fastcall CBeam::SetAbsEndPos(CBeam *const this, const Vector *const pos)
{
  matrix3x4_t *v4; // rax
  double v5; // xmm0_8
  Vector vecLocalPos; // [rsp+0h] [rbp-60h] BYREF
  matrix3x4_t worldToBeam; // [rsp+10h] [rbp-50h] BYREF

  if ( CBaseEntity::GetMoveParent(this) != 0 )
  {
    v4 = CBaseEntity::EntityToWorldTransform(this);
    MatrixInvert(v4, &worldToBeam);
    VectorTransform(&pos->x, &worldToBeam, &vecLocalPos.x);
    *&v5 = LODWORD(vecLocalPos.x);
    if ( vecLocalPos.x != this->m_vecEndPos.m_Value.x
      || (*&v5 = LODWORD(vecLocalPos.y), vecLocalPos.y != this->m_vecEndPos.m_Value.y)
      || (*&v5 = LODWORD(vecLocalPos.z), vecLocalPos.z != this->m_vecEndPos.m_Value.z) )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 1292, 0xFFFFFFFFLL, 0xFFFFFFFFLL, v5);
      this->m_vecEndPos.m_Value = vecLocalPos;
    }
  }
  else if ( pos->x != this->m_vecEndPos.m_Value.x
         || pos->y != this->m_vecEndPos.m_Value.y
         || pos->z != this->m_vecEndPos.m_Value.z )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1292, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_vecEndPos.m_Value.x = pos->x;
    this->m_vecEndPos.m_Value.y = pos->y;
    this->m_vecEndPos.m_Value.z = pos->z;
  }
}


// CBeam::GetAbsStartPos  (line 384, @0x0000000002190e00, libserver.so)  // inlines: CEntityIndex, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetStartEntity, IndexToIdentity, Instance, IsUsed, IsValid, LookupEntity, LookupEntityByIndex, LookupEntityByNetworkIndex, entindex, operator CEntityInstance*
// calls: CBaseEntity::GetAbsOrigin, CEntityHandle::operator CEntityInstance*, CEntityInstance::GetEntityIndex
// callers: CBeam::WorldSpaceCenter, CBeam::RelinkBeam, CEnvBeam::TurnOn, CEnvLaser::FireAtPoint, CEnvBeam::UpdateThink
// globals: CEntityHandle::gm_pEntityList
const Vector *__fastcall CBeam::GetAbsStartPos(const CBeam *const this)
{
  CEntityInstance *v3; // rax
  uint32 m_Index; // eax
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  int v7; // ecx
  CGameEntitySystem *v8; // rdx
  int32 m_Data; // eax
  CEntityIdentity *v10; // rcx
  CEntityIdentity *v11; // rdx

  if ( this->m_nBeamType.m_Value != BeamType_t::BEAM_ENTS )
    return CBaseEntity::GetAbsOrigin(this);
  v3 = CEntityHandle::operator CEntityInstance *(&this->m_hAttachEntity);
  if ( v3 == 0 || CEntityInstance::GetEntityIndex(v3).m_Data == 0 )
    return CBaseEntity::GetAbsOrigin(this);
  m_Index = this->m_hAttachEntity.m_Value[0].m_Index;
  if ( m_Index + 2 > 1
    && (v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hAttachEntity.m_Value[0].m_Index) >> 9)
                                                            & 0x3F]) != 0
    && (v6 = &v5[this->m_hAttachEntity.m_Value[0].m_Index & 0x1FF]) != 0
    && m_Index == v6->m_EHandle.m_Index
    && v6->m_pInstance != 0 )
  {
    m_Data = CEntityInstance::GetEntityIndex(v6->m_pInstance).m_Data;
    v8 = g_pGameEntitySystem;
    if ( m_Data > 0x7FFE )
      return CBaseEntity::GetAbsOrigin(this);
    v7 = m_Data >> 9;
  }
  else
  {
    v7 = 0;
    v8 = g_pGameEntitySystem;
    m_Data = 0;
  }
  v10 = v8->m_EntityList.m_pIdentityChunks[v7];
  if ( v10 == 0 )
    return CBaseEntity::GetAbsOrigin(this);
  v11 = &v10[m_Data & 0x1FF];
  if ( v11 == 0 || (v11->m_EHandle.m_Index & 0x7FFF) != m_Data || v11->m_pInstance == 0 )
    return CBaseEntity::GetAbsOrigin(this);
  return CBaseEntity::GetAbsOrigin(v11->m_pInstance);
}


// CBeam::GetAbsEndPos  (line 399, @0x0000000002190f30, libserver.so)  // inlines: CEntityIndex, Get, GetEndEntity, GetEntityIdentity, GetEntryIndex, GetInstance, GetType, IndexToIdentity, Instance, IsUsed, IsValid, LookupEntity, LookupEntityByIndex, LookupEntityByNetworkIndex, VectorTransform, entindex, operator CEntityInstance*
// calls: CBaseEntity::GetMoveParent, CBaseEntity::EntityToWorldTransform, VectorTransform, __cxa_guard_acquire, __cxa_guard_release, CEntityInstance::GetEntityIndex, CBaseEntity::GetAbsOrigin
// callers: CBeam::WorldSpaceCenter, CBeam::RelinkBeam, CEnvBeam::TurnOn, CEnvLaser::StrikeThink, CEnvBeam::UpdateThink
// globals: CEntityHandle::gm_pEntityList, `guard variable for'CBeam::GetAbsEndPos(void)::vecAbsPos, CBeam::GetAbsEndPos(void)::vecAbsPos
const Vector *__fastcall CBeam::GetAbsEndPos(const CBeam *const this)
{
  BeamType_t m_Value; // eax
  CNetworkArrayBase<CHandle<CBaseEntity>,10,CBeam::NetworkVar_m_hAttachEntity> *p_m_hAttachEntity; // r12
  CNetworkVarBase<unsigned int,CBeam::NetworkVar_m_nBeamFlags> *v4; // rdx
  unsigned int v5; // eax
  __int16 v6; // cx
  CEntityIdentity *v7; // rdx
  CEntityIdentity *v8; // rdx
  const matrix3x4_t *v9; // rax
  CHandle<CBaseEntity> *v11; // rax
  uint32 m_Index; // edx
  unsigned __int64 v13; // rax
  CEntityIdentity *v14; // rcx
  CEntityIdentity *v15; // rax
  int v16; // ecx
  CGameEntitySystem *v17; // rdx
  int32 m_Data; // eax
  CEntityIdentity *v19; // rcx
  CEntityIdentity *v20; // rdx

  m_Value = this->m_nBeamType.m_Value;
  if ( m_Value != BeamType_t::BEAM_POINTS && m_Value != BeamType_t::BEAM_HOSE )
  {
    p_m_hAttachEntity = &this->m_hAttachEntity;
    v4 = &this->m_nBeamFlags + this->m_nNumBeamEnts.m_Value;
    v5 = v4->m_Value;
    if ( v4->m_Value + 2 > 1 )
    {
      v6 = v4->m_Value;
      v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v4->m_Value) >> 9) & 0x3F];
      if ( v7 != 0 )
      {
        v8 = &v7[v6 & 0x1FF];
        if ( v8 != 0
          && v5 == v8->m_EHandle.m_Index
          && v8->m_pInstance != 0
          && CEntityInstance::GetEntityIndex(v8->m_pInstance).m_Data != 0 )
        {
          v11 = &p_m_hAttachEntity->m_Value[this->m_nNumBeamEnts.m_Value - 1];
          m_Index = v11->m_Index;
          if ( v11->m_Index + 2 > 1
            && (v13 = v11->m_Index & 0x7FFF, (v14 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[v13 >> 9]) != 0)
            && (v15 = &v14[v13 & 0x1FF]) != 0
            && m_Index == v15->m_EHandle.m_Index
            && v15->m_pInstance != 0 )
          {
            m_Data = CEntityInstance::GetEntityIndex(v15->m_pInstance).m_Data;
            v17 = g_pGameEntitySystem;
            if ( m_Data > 0x7FFE )
              goto LABEL_7;
            v16 = m_Data >> 9;
          }
          else
          {
            v16 = 0;
            v17 = g_pGameEntitySystem;
            m_Data = 0;
          }
          v19 = v17->m_EntityList.m_pIdentityChunks[v16];
          if ( v19 != 0 )
          {
            v20 = &v19[m_Data & 0x1FF];
            if ( v20 != 0 && (v20->m_EHandle.m_Index & 0x7FFF) == m_Data && v20->m_pInstance != 0 )
              return CBaseEntity::GetAbsOrigin(v20->m_pInstance);
          }
        }
      }
    }
  }
LABEL_7:
  if ( CBaseEntity::GetMoveParent(this) == 0 )
    return &this->m_vecEndPos.m_Value;
  if ( `guard variable for'CBeam::GetAbsEndPos(void)::vecAbsPos == 0
    && __cxa_guard_acquire(&`guard variable for'CBeam::GetAbsEndPos(void)::vecAbsPos) != 0 )
  {
    __cxa_guard_release(&`guard variable for'CBeam::GetAbsEndPos(void)::vecAbsPos);
  }
  v9 = CBaseEntity::EntityToWorldTransform(this);
  VectorTransform(&this->m_vecEndPos.m_Value.x, v9, &CBeam::GetAbsEndPos(void)const::vecAbsPos.x);
  return &CBeam::GetAbsEndPos(void)const::vecAbsPos;
}


// CBeam::BeamCreate  (line 453, @0x00000000021afce0, libserver.so)  // inlines: AcquireEntitySpawnerEntityVariantAllocator, Add, CEntityHandle, CEntityKeyValuesModifyScope, CEntitySpawner, CEntitySpawnerBase, CHandle, CMicroProfilerGuard, CMicroProfilerSample, CUtlString, CVProfScope, EnterScope, ExitScope, Get, GetClassInfo, GetEHandle, GetElapsed, GetEntityClass, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, GetTimebaseRegister, InTargetThread, IndexToIdentity, Init, InvokeCallbacks, IsEmpty, IsEnabled, LookupEntity, OverrideAllocator, PLAT_CPU_TIME, Release, ReleaseEntitySpawnerEntityVariantAllocator, Set, Spawn, operator CBeam*, operator CEntityInstance*, operator!, operator(), operator=, ~CEntityKeyValuesModifyScope, ~CEntitySpawner, ~CEntitySpawnerBase, ~CMicroProfilerGuard, ~CUtlString, ~CVProfScope
// calls: CEntityKeyValuesModifyScope::BeginModify, CEntitySystem::GetActiveSpawnGroupHandle, CEntitySystem::GetSpawnOriginOffset, CEntityKeyValues::HasValue, CEntityKeyValuesModifyScope::Release, CUtlString::Get, CEntitySystem::CreateEntity, CEntitySystem::QueueSpawnEntity, CBeam::BeamInit, CUtlString::FreeMemoryBlock, CEntityKeyValues::SetValue, CEntityKeyValues::~CEntityKeyValues (23 total)
// callers: CTestEffect::Think, CPointSpotlight::SpotlightCreate
// strings: "Spawn", "Server Simulation"
// globals: CEntityKeyValuesModifyScope::sm_pAllocatorOverride, CEntityHandle::gm_pEntityList
CBeam *__fastcall CBeam::BeamCreate(const char *pSpriteName, float a2, float width)
{
  CEntitySystem *v3; // rdi
  const matrix3x4a_t *SpawnOriginOffset; // rax
  __int64 v5; // rdx
  char v6; // al
  double v7; // xmm1_8
  CEntityKeyValues *m_pEntityKeyValues; // rdi
  int m_enabled; // r8d
  EntityNetworkingMode_t m_nMode; // ebx
  const char *v11; // rax
  CEntityInstance *Entity; // rax
  __int64 v13; // rdi
  CEntityInstance *v14; // r15
  CEntityIdentity *m_pEntity; // rax
  __int16 v16; // si
  CEntitySpawnerContext<CBeam> *m_pContext; // rbx
  detail::GenericClass *m_pthis; // rdx
  void (*pfn)(detail::GenericClass *); // rax
  _QWORD *v20; // rdi
  CEntityIdentity *v21; // rax
  CBeam *m_pInstance; // rbx
  CEntityIdentity *v23; // rax
  CUtlScratchMemoryPool *v24; // rdi
  CEntityKeyValues *v25; // r13
  const char *m_pszClassname; // rdx
  unsigned __int64 v29; // rbx
  ThreadId_t v30; // r15
  uint64 v31; // rcx
  ThreadId_t m_TargetThreadId; // r15
  unsigned __int64 v33; // rbx
  uint64 m_numTimeBaseTicks; // rcx
  CVProfNode *m_pParent; // rax
  int m_nEntitySpawnerDataUseCount; // esi
  CVProfNode *m_pCurNode; // rax
  CVProfile::CBudgetGroup *v38; // rax
  bool v39; // [rsp+1Bh] [rbp-105h]
  CEntityKeyValues *i; // [rsp+28h] [rbp-F8h]
  int v43; // [rsp+30h] [rbp-F0h]
  _QWORD v44[2]; // [rsp+40h] [rbp-E0h] BYREF
  CEntitySpawner<CBeam> spawner; // [rsp+50h] [rbp-D0h] BYREF

  spawner.m_modifyScope.m_pKeyValues = 0;
  spawner.m_modifyScope.m_pPrevAllocator = 0;
  CEntityKeyValuesModifyScope::BeginModify(&spawner.m_modifyScope, 0);
  spawner._vptr_CEntitySpawnerBase = off_400A410;
  spawner.m_scriptClassName.m_pString = 0;
  spawner.m_pContext = 0;
  v3 = g_pEntitySystem;
  spawner.m_pSpawnBatch = 0;
  spawner.m_pPrevAllocator = CEntityKeyValuesModifyScope::sm_pAllocatorOverride;
  ++g_pEntitySystem->m_nEntitySpawnerDataUseCount;
  CEntityKeyValuesModifyScope::sm_pAllocatorOverride = &v3->m_entitySpawnerData;
  spawner.m_hSpawnGroupHandle = CEntitySystem::GetActiveSpawnGroupHandle(v3);
  SpawnOriginOffset = CEntitySystem::GetSpawnOriginOffset(g_pEntitySystem);
  *&spawner.m_mSpawnGroupToWorld.m_flMatVal[0][0] = *&SpawnOriginOffset->m_flMatVal[0][0];
  v5 = *&SpawnOriginOffset->m_flMatVal[0][2];
  spawner.m_pEntityKeyValues = 0;
  *&spawner.m_mSpawnGroupToWorld.m_flMatVal[0][2] = v5;
  *&spawner.m_mSpawnGroupToWorld.m_flMatVal[1][0] = *&SpawnOriginOffset->m_flMatVal[1][0];
  *&spawner.m_mSpawnGroupToWorld.m_flMatVal[2][0] = *&SpawnOriginOffset->m_flMatVal[2][0];
  spawner.m_pEntityClass = g_pEntityCBeamClass;
  if ( g_pApplication != 0 )
    v6 = (*(g_pApplication->_vptr_IAppSystem + 24))(g_pApplication);
  else
    v6 = 0;
  spawner.m_bValidateKeys = v6;
  spawner.m_nMode = EntityNetworkingMode_t::ENTITY_NETWORKING_MODE_DEFAULT;
  (*spawner._vptr_CEntitySpawnerBase)(&spawner);
  m_pEntityKeyValues = spawner.m_pEntityKeyValues;
  v43 = -1;
  if ( spawner.m_pEntityKeyValues == 0 )
    goto LABEL_36;
  m_enabled = g_VProfCurrentProfile.m_enabled;
  v39 = m_enabled != 0;
  if ( m_enabled != 0 )
  {
    m_TargetThreadId = g_VProfCurrentProfile.m_TargetThreadId;
    v33 = __rdtsc();
    if ( m_TargetThreadId == ThreadGetCurrentId(spawner.m_pEntityKeyValues) )
    {
      m_pCurNode = g_VProfCurrentProfile.m_pCurNode;
      if ( m_pCurNode->m_pszName != "Spawn" )
      {
        m_pCurNode = CVProfNode::GetSubNode(g_VProfCurrentProfile.m_pCurNode, "Spawn", 0, "Server Simulation", 4);
        g_VProfCurrentProfile.m_pCurNode = m_pCurNode;
      }
      v38 = &g_VProfCurrentProfile.m_pBudgetGroups[m_pCurNode->m_BudgetGroupID];
      v38->m_BudgetFlags |= 4u;
      CVProfNode::EnterScope(g_VProfCurrentProfile.m_pCurNode);
      g_VProfCurrentProfile.m_fAtRoot = 0;
    }
    m_numTimeBaseTicks = g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks;
    m_pEntityKeyValues = spawner.m_pEntityKeyValues;
    ++g_VProfCurrentProfile.m_ScopeProfiler.m_numCalls;
    g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks = m_numTimeBaseTicks - v33 + __rdtsc();
  }
  if ( !CEntityKeyValues::HasValue(m_pEntityKeyValues, -971301790) )
  {
    m_pszClassname = spawner.m_pEntityClass->m_pClassInfo->m_pszClassname;
    if ( m_pszClassname != 0 )
      CEntityKeyValues::SetValue(spawner.m_pEntityKeyValues, -971301790, m_pszClassname);
  }
  CEntityKeyValuesModifyScope::Release(&spawner.m_modifyScope);
  m_nMode = spawner.m_nMode;
  v11 = CUtlString::Get(&spawner.m_scriptClassName);
  Entity = CEntitySystem::CreateEntity(
             g_pEntitySystem,
             spawner.m_hSpawnGroupHandle,
             spawner.m_pEntityClass,
             v11,
             m_nMode,
             -1,
             -1,
             0,
             0);
  v14 = Entity;
  if ( Entity != 0 )
  {
    m_pEntity = Entity->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v16 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v16 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      v43 = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v16 & 0x7FFF;
    }
    v44[0] = m_pEntity;
    v44[1] = spawner.m_pEntityKeyValues;
    (*(*g_pGameResourceService + 280LL))(
      g_pGameResourceService,
      spawner.m_hSpawnGroupHandle,
      1,
      v44,
      &spawner.m_mSpawnGroupToWorld);
    CEntitySystem::QueueSpawnEntity(g_pEntitySystem, v14, spawner.m_pEntityKeyValues);
    if ( spawner.m_pSpawnBatch == 0 )
      CEntitySystem::ExecuteQueuedCreation(g_pEntitySystem);
    m_pContext = spawner.m_pContext;
    for ( i = spawner.m_pEntityKeyValues; m_pContext != 0; m_pContext = m_pContext->m_pParent )
    {
      m_pthis = m_pContext->m_callback.m_Closure.m_pthis;
      pfn = m_pContext->m_callback.m_Closure.m_pFunction.__pfn;
      if ( m_pthis != 0 || pfn != 0 )
      {
        v20 = (m_pthis + m_pContext->m_callback.m_Closure.m_pFunction.__delta);
        if ( (pfn & 1) != 0 )
          pfn = *(pfn + *v20 - 1);
        (pfn)(v20, v14, i);
      }
    }
  }
  if ( v39 )
  {
    v29 = __rdtsc();
    if ( !g_VProfCurrentProfile.m_fAtRoot || (v13 = g_VProfCurrentProfile.m_enabled) != 0 )
    {
      v30 = g_VProfCurrentProfile.m_TargetThreadId;
      if ( v30 == ThreadGetCurrentId(v13) )
      {
        if ( CVProfNode::ExitScope(g_VProfCurrentProfile.m_pCurNode) != 0 )
        {
          m_pParent = g_VProfCurrentProfile.m_pCurNode->m_pParent;
          if ( m_pParent != 0 )
            g_VProfCurrentProfile.m_pCurNode = m_pParent;
          else
            m_pParent = g_VProfCurrentProfile.m_pCurNode;
        }
        else
        {
          m_pParent = g_VProfCurrentProfile.m_pCurNode;
        }
        g_VProfCurrentProfile.m_fAtRoot = m_pParent == &g_VProfCurrentProfile.m_Root;
      }
    }
    v31 = g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks;
    ++g_VProfCurrentProfile.m_ScopeProfiler.m_numCalls;
    g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks = v31 - v29 + __rdtsc();
  }
  if ( (v43 + 2) > 1 && (v21 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v43 >> 9) & 0x3F]) != 0 )
  {
    m_pInstance = 0;
    v23 = &v21[v43 & 0x1FF];
    if ( v23 != 0 && v23->m_EHandle.m_Index == v43 )
      m_pInstance = v23->m_pInstance;
  }
  else
  {
LABEL_36:
    m_pInstance = 0;
  }
  CBeam::BeamInit(m_pInstance, pSpriteName, COERCE_DOUBLE(LODWORD(a2)), v7);
  v24 = CEntityKeyValuesModifyScope::sm_pAllocatorOverride;
  spawner._vptr_CEntitySpawnerBase = off_400A3F0;
  CEntityKeyValuesModifyScope::sm_pAllocatorOverride = spawner.m_pPrevAllocator;
  if ( v24 == &g_pEntitySystem->m_entitySpawnerData )
  {
    m_nEntitySpawnerDataUseCount = g_pEntitySystem->m_nEntitySpawnerDataUseCount;
    g_pEntitySystem->m_nEntitySpawnerDataUseCount = m_nEntitySpawnerDataUseCount - 1;
    if ( m_nEntitySpawnerDataUseCount == 1 )
      CUtlScratchMemoryPool::FreeAll(v24);
  }
  if ( spawner.m_pEntityKeyValues != 0 )
  {
    CEntityKeyValuesModifyScope::Release(&spawner.m_modifyScope);
    v25 = spawner.m_pEntityKeyValues;
    if ( --spawner.m_pEntityKeyValues->m_nRefCount <= 0 )
    {
      CEntityKeyValues::~CEntityKeyValues(v25);
      operator delete(v25);
    }
  }
  if ( spawner.m_scriptClassName.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&spawner.m_scriptClassName);
  CEntityKeyValuesModifyScope::Release(&spawner.m_modifyScope);
  return m_pInstance;
}


// CBeam::BeamInit  (line 461, @0x00000000021af720, libserver.so)  // inlines: CEntityHandle, CHandle, CStrongHandle, FindResourceById<1952542070ull>, GetBinding, Init, NetworkStateChanged, Set, SetAlpha, SetBlue, SetBrightness, SetColor, SetComponent, SetEndWidth, SetFadeLength, SetFrame, SetGreen, SetNoise, SetRed, SetRenderColor, SetScrollRate, SetTexture, SetVal, SetWidth, ThreadInterlockedIncrement, a, operator++, operator=, operator=<BeamType_t>, operator=<CWeakHandle<InfoForResourceTypeIMaterial2> >, operator=<float>, operator=<int>, ~CStrongHandle
// calls: CBaseModelEntity::SetRenderAlpha, CBaseModelEntity::SetRenderMode, GetMaterialIndex, CStrongHandle<InfoForResourceTypeIMaterial2>::Init, CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown, memcmp, _Unwind_Resume
// callers: CBeam::BeamCreate
void __fastcall CBeam::BeamInit(CBeam *const this, const char *pSpriteName, double a3, double width)
{
  unsigned __int8 v6; // r12
  double v7; // xmm0_8
  double v8; // xmm1_8
  double v9; // xmm2_8
  double v10; // xmm3_8
  double v11; // xmm4_8
  double v12; // xmm5_8
  const ResourceBindingBase_t *m_pBinding; // rsi
  const ResourceBindingBase_t *v14; // rax
  __m128 v15; // xmm0
  float v16; // xmm0_4
  __m128 v17; // xmm0
  float v18; // xmm0_4
  CNetworkArrayBase<CHandle<CBaseEntity>,10,CBeam::NetworkVar_m_hAttachEntity> *p_m_hAttachEntity; // r12
  __int64 v20; // r13
  CNetworkArrayBase<unsigned char,10,CBeam::NetworkVar_m_nAttachIndex> *p_m_nAttachIndex; // r14
  const ResourceBindingBase_t *v22; // rax
  const ResourceBindingBase_t *v23; // rax
  float v24; // [rsp+0h] [rbp-60h]
  unsigned int widtha; // [rsp+4h] [rbp-5Ch]
  float widthb; // [rsp+4h] [rbp-5Ch]
  __int64 v27; // [rsp+10h] [rbp-50h]
  CStrongHandle<InfoForResourceTypeIMaterial2> v28[8]; // [rsp+20h] [rbp-40h] BYREF

  widtha = LODWORD(a3);
  v6 = this->m_clrRender.m_Value._color[3];
  if ( this->m_clrRender.m_Value._color[0] != 0xFF )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 828, 0xFFFFFFFFLL, 0xFFFFFFFFLL, a3, *&width);
    this->m_clrRender.m_Value._color[0] = -1;
  }
  if ( this->m_clrRender.m_Value._color[1] != 0xFF )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 828, 0xFFFFFFFFLL, 0xFFFFFFFFLL, a3, width);
    this->m_clrRender.m_Value._color[1] = -1;
  }
  if ( this->m_clrRender.m_Value._color[2] != 0xFF )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 828, 0xFFFFFFFFLL, 0xFFFFFFFFLL, a3, width);
    this->m_clrRender.m_Value._color[2] = -1;
  }
  if ( v6 != this->m_clrRender.m_Value._color[3] )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 828, 0xFFFFFFFFLL, 0xFFFFFFFFLL, a3, width);
    this->m_clrRender.m_Value._color[3] = v6;
  }
  CBaseModelEntity::SetRenderAlpha(this, 0xFFu);
  v11 = 0.0;
  if ( this->m_fAmplitude.m_Value != 0.0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1268, 0xFFFFFFFFLL, 0xFFFFFFFFLL, v7, v8, v9, v10, 0.0);
    this->m_fAmplitude.m_Value = 0.0;
  }
  v12 = 0.0;
  if ( this->m_fStartFrame.m_Value != 0.0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1272, 0xFFFFFFFFLL, 0xFFFFFFFFLL, v7, v8, v9, v10, v11, 0.0);
    this->m_fStartFrame.m_Value = 0.0;
  }
  if ( this->m_fSpeed.m_Value != 0.0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1276, 0xFFFFFFFFLL, 0xFFFFFFFFLL, v7, v8, v9, v10, v11, v12, 0.0);
    this->m_fSpeed.m_Value = 0.0;
  }
  CBaseModelEntity::SetRenderMode(this, RenderMode_t::kRenderTransTexture);
  GetMaterialIndex(pSpriteName);
  m_pBinding = v27;
  v28[0].m_pBinding = v27;
  if ( v27 != 0 )
  {
    if ( (*(v27 + 16) & 0x20) != 0 )
    {
      (*(*g_pResourceHandleUtils + 24LL))(g_pResourceHandleUtils, v27, 2, v28);
      m_pBinding = v28[0].m_pBinding;
    }
    _InterlockedAdd(&m_pBinding->m_nRefCount.m_value, 1u);
    v14 = v28[0].m_pBinding;
  }
  else
  {
    v14 = 0;
  }
  if ( this->m_hBaseMaterial.m_Value.m_pBinding != v14 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1176, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    CStrongHandle<InfoForResourceTypeIMaterial2>::Init(&this->m_hBaseMaterial.m_Value, v28);
  }
  CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown(v28);
  v15 = _mm_cmplt_ss(0x42CC999Au, widtha);
  LODWORD(v16) = _mm_andnot_ps(v15, widtha).m128_u32[0] | v15.m128_i32[0] & 0x42CC999A;
  if ( v16 != this->m_fWidth.m_Value )
  {
    v24 = v16;
    (*(this->_vptr_IHandleEntity + 22))(this, 1252, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_fWidth.m_Value = v24;
  }
  v17 = _mm_cmplt_ss(0x42CC999Au, widtha);
  LODWORD(v18) = _mm_andnot_ps(v17, widtha).m128_u32[0] | v17.m128_i32[0] & 0x42CC999A;
  if ( v18 != this->m_fEndWidth.m_Value )
  {
    widthb = v18;
    (*(this->_vptr_IHandleEntity + 22))(this, 1256, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_fEndWidth.m_Value = widthb;
  }
  if ( this->m_fFadeLength.m_Value != 0.0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1260, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_fFadeLength.m_Value = 0.0;
  }
  p_m_hAttachEntity = &this->m_hAttachEntity;
  v20 = 0;
  p_m_nAttachIndex = &this->m_nAttachIndex;
  do
  {
    while ( 1 )
    {
      LODWORD(v28[0].m_pBinding) = -1;
      if ( memcmp(p_m_hAttachEntity, v28, 4u) != 0 )
      {
        (*(this->_vptr_IHandleEntity + 22))(this, 1200, v20, 0xFFFFFFFFLL);
        p_m_hAttachEntity->m_Value[0].m_Index = v28[0].m_pBinding;
      }
      if ( p_m_nAttachIndex->m_Value[v20] != 0 )
        break;
      ++v20;
      p_m_hAttachEntity = (p_m_hAttachEntity + 4);
      if ( v20 == 10 )
        goto LABEL_33;
    }
    p_m_hAttachEntity = (p_m_hAttachEntity + 4);
    (*(this->_vptr_IHandleEntity + 22))(this, 1240, v20, 0xFFFFFFFFLL);
    p_m_nAttachIndex->m_Value[v20++] = 0;
  }
  while ( v20 != 10 );
LABEL_33:
  v28[0].m_pBinding = 0;
  v22 = (*(*g_pResourceHandleUtils + 8LL))(g_pResourceHandleUtils, 0, 1952542070);
  v28[0].m_pBinding = v22;
  if ( v22 != 0 )
  {
    if ( (v22->m_nFlags & 0x20) != 0 )
    {
      (*(*g_pResourceHandleUtils + 24LL))(g_pResourceHandleUtils, v22, 2, v28);
      v22 = v28[0].m_pBinding;
    }
    _InterlockedAdd(&v22->m_nRefCount.m_value, 1u);
    v23 = v28[0].m_pBinding;
  }
  else
  {
    v23 = 0;
  }
  if ( this->m_nHaloIndex.m_Value.m_pBinding != v23 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1184, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    CStrongHandle<InfoForResourceTypeIMaterial2>::Init(&this->m_nHaloIndex.m_Value, v28);
  }
  CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown(v28);
  if ( this->m_fHaloScale.m_Value != 10.0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1264, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_fHaloScale.m_Value = 10.0;
  }
  if ( this->m_nBeamType.m_Value != BeamType_t::BEAM_INVALID )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1192, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_nBeamType.m_Value = BeamType_t::BEAM_INVALID;
  }
  if ( this->m_nBeamFlags.m_Value != 0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1196, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_nBeamFlags.m_Value = 0;
  }
}


// CBeam::PointsInit  (line 485, @0x000000000219a890, libserver.so)  // inlines: NetworkStateChanged, Set, SetEndAttachment, SetEndPos, SetStartAttachment, SetStartPos, operator!=, operator=, operator=<int>
// calls: CBeam::SetType, CBaseEntity::SetLocalOrigin, CBeam::RelinkBeam
// callers: CTestEffect::Think, CEnvLaser::Spawn, CPointSpotlight::SpotlightCreate
void __fastcall CBeam::PointsInit(CBeam *const this, const Vector *const start, const Vector *const end)
{
  __int64 v6; // rdx
  __int64 v7; // r12

  CBeam::SetType(this, BeamType_t::BEAM_POINTS);
  if ( this->m_nNumBeamEnts.m_Value != 2 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1168, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_nNumBeamEnts.m_Value = 2;
  }
  CBaseEntity::SetLocalOrigin(this, start);
  if ( end->x != this->m_vecEndPos.m_Value.x
    || end->y != this->m_vecEndPos.m_Value.y
    || end->z != this->m_vecEndPos.m_Value.z )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1292, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_vecEndPos.m_Value.x = end->x;
    this->m_vecEndPos.m_Value.y = end->y;
    this->m_vecEndPos.m_Value.z = end->z;
  }
  if ( this->m_nAttachIndex.m_Value[0] != 0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1240, 0, 0xFFFFFFFFLL);
    this->m_nAttachIndex.m_Value[0] = 0;
  }
  v6 = this->m_nNumBeamEnts.m_Value - 1;
  v7 = v6;
  if ( this->m_nAttachIndex.m_Value[v6] != 0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1240, v6, 0xFFFFFFFFLL);
    this->m_nAttachIndex.m_Value[v7] = 0;
  }
  CBeam::RelinkBeam(this);
}


// CBeam::HoseInit  (line 497, @0x000000000219a9f0, libserver.so)  // inlines: NetworkStateChanged, Set, SetEndAttachment, SetEndPos, SetStartAttachment, SetStartPos, operator!=, operator=, operator=<int>
// calls: CBeam::SetType, CBaseEntity::SetLocalOrigin, CBeam::RelinkBeam
void __fastcall CBeam::HoseInit(CBeam *const this, const Vector *const start, const Vector *const direction)
{
  __int64 v6; // rdx
  __int64 v7; // r12

  CBeam::SetType(this, BeamType_t::BEAM_HOSE);
  if ( this->m_nNumBeamEnts.m_Value != 2 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1168, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_nNumBeamEnts.m_Value = 2;
  }
  CBaseEntity::SetLocalOrigin(this, start);
  if ( direction->x != this->m_vecEndPos.m_Value.x
    || direction->y != this->m_vecEndPos.m_Value.y
    || direction->z != this->m_vecEndPos.m_Value.z )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1292, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_vecEndPos.m_Value.x = direction->x;
    this->m_vecEndPos.m_Value.y = direction->y;
    this->m_vecEndPos.m_Value.z = direction->z;
  }
  if ( this->m_nAttachIndex.m_Value[0] != 0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1240, 0, 0xFFFFFFFFLL);
    this->m_nAttachIndex.m_Value[0] = 0;
  }
  v6 = this->m_nNumBeamEnts.m_Value - 1;
  v7 = v6;
  if ( this->m_nAttachIndex.m_Value[v6] != 0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1240, v6, 0xFFFFFFFFLL);
    this->m_nAttachIndex.m_Value[v7] = 0;
  }
  CBeam::RelinkBeam(this);
}


// CBeam::PointEntInit  (line 509, @0x000000000219ab50, libserver.so)  // inlines: NetworkStateChanged, Set, SetEndAttachment, SetStartAttachment, SetStartPos, operator=<int>
// calls: CBeam::SetType, CBaseEntity::SetLocalOrigin, CBeam::SetEndEntity, CBeam::RelinkBeam
void __fastcall CBeam::PointEntInit(CBeam *const this, const Vector *const start, CBaseEntity *pEndEntity)
{
  __int64 v6; // rdx
  __int64 v7; // r12

  CBeam::SetType(this, BeamType_t::BEAM_ENTPOINT);
  if ( this->m_nNumBeamEnts.m_Value != 2 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1168, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_nNumBeamEnts.m_Value = 2;
  }
  CBaseEntity::SetLocalOrigin(this, start);
  CBeam::SetEndEntity(this, pEndEntity);
  if ( this->m_nAttachIndex.m_Value[0] != 0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1240, 0, 0xFFFFFFFFLL);
    this->m_nAttachIndex.m_Value[0] = 0;
  }
  v6 = this->m_nNumBeamEnts.m_Value - 1;
  v7 = v6;
  if ( this->m_nAttachIndex.m_Value[v6] != 0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1240, v6, 0xFFFFFFFFLL);
    this->m_nAttachIndex.m_Value[v7] = 0;
  }
  CBeam::RelinkBeam(this);
}


// CBeam::EntsInit  (line 520, @0x000000000219ac30, libserver.so)  // inlines: NetworkStateChanged, Set, SetEndAttachment, SetStartAttachment, operator=<int>
// calls: CBeam::SetType, CBeam::SetStartEntity, CBeam::SetEndEntity, CBeam::RelinkBeam
// callers: CPointSpotlight::SpotlightCreate
void __fastcall CBeam::EntsInit(CBeam *const this, CBaseEntity *pStartEntity, CBaseEntity *pEndEntity)
{
  __int64 v6; // rdx
  __int64 v7; // r12

  CBeam::SetType(this, BeamType_t::BEAM_ENTS);
  if ( this->m_nNumBeamEnts.m_Value != 2 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1168, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_nNumBeamEnts.m_Value = 2;
  }
  CBeam::SetStartEntity(this, pStartEntity);
  CBeam::SetEndEntity(this, pEndEntity);
  if ( this->m_nAttachIndex.m_Value[0] != 0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1240, 0, 0xFFFFFFFFLL);
    this->m_nAttachIndex.m_Value[0] = 0;
  }
  v6 = this->m_nNumBeamEnts.m_Value - 1;
  v7 = v6;
  if ( this->m_nAttachIndex.m_Value[v6] != 0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1240, v6, 0xFFFFFFFFLL);
    this->m_nAttachIndex.m_Value[v7] = 0;
  }
  CBeam::RelinkBeam(this);
}


// CBeam::LaserInit  (line 531, @0x000000000219ad10, libserver.so)  // inlines: NetworkStateChanged, Set, SetEndAttachment, SetStartAttachment, operator=<int>
// calls: CBeam::SetType, CBeam::SetStartEntity, CBeam::SetEndEntity, CBeam::RelinkBeam
void __fastcall CBeam::LaserInit(CBeam *const this, CBaseEntity *pStartEntity, CBaseEntity *pEndEntity)
{
  __int64 v6; // rdx
  __int64 v7; // r12

  CBeam::SetType(this, BeamType_t::BEAM_LASER);
  if ( this->m_nNumBeamEnts.m_Value != 2 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1168, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_nNumBeamEnts.m_Value = 2;
  }
  CBeam::SetStartEntity(this, pStartEntity);
  CBeam::SetEndEntity(this, pEndEntity);
  if ( this->m_nAttachIndex.m_Value[0] != 0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1240, 0, 0xFFFFFFFFLL);
    this->m_nAttachIndex.m_Value[0] = 0;
  }
  v6 = this->m_nNumBeamEnts.m_Value - 1;
  v7 = v6;
  if ( this->m_nAttachIndex.m_Value[v6] != 0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1240, v6, 0xFFFFFFFFLL);
    this->m_nAttachIndex.m_Value[v7] = 0;
  }
  CBeam::RelinkBeam(this);
}


// CBeam::SplineInit  (line 542, @0x000000000219adf0, libserver.so)  // inlines: CEntityHandle, CHandle, GetEHandle, GetEntryIndex, GetSerialNumber, NetworkStateChanged, Set, operator=, operator=<int>
// calls: CBeam::SetType, memcmp, CBeam::RelinkBeam, Msg
// strings: "ERROR: Max of %i ents allowed for spline beam.\n", "ERROR: Min of 2 ents required for spline beam.\n"
void __fastcall CBeam::SplineInit(CBeam *const this, int nNumEnts, CBaseEntity **pEntList, int *attachment)
{
  CNetworkArrayBase<CHandle<CBaseEntity>,10,CBeam::NetworkVar_m_hAttachEntity> *p_m_hAttachEntity; // rbx
  __int64 v6; // r15
  CNetworkArrayBase<unsigned char,10,CBeam::NetworkVar_m_nAttachIndex> *p_m_nAttachIndex; // r14
  CBaseEntity *v8; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v10; // eax
  __int16 v11; // cx
  int v15; // [rsp+2Ch] [rbp-44h]
  int v16[16]; // [rsp+30h] [rbp-40h] BYREF

  if ( nNumEnts <= 1 )
  {
    Msg("ERROR: Min of 2 ents required for spline beam.\n");
    CBeam::SetType(this, BeamType_t::BEAM_SPLINE);
    if ( nNumEnts <= 0 )
      goto LABEL_16;
  }
  else
  {
    if ( nNumEnts > 10 )
      Msg("ERROR: Max of %i ents allowed for spline beam.\n", 10);
    CBeam::SetType(this, BeamType_t::BEAM_SPLINE);
  }
  p_m_hAttachEntity = &this->m_hAttachEntity;
  v6 = 0;
  p_m_nAttachIndex = &this->m_nAttachIndex;
  do
  {
    v16[0] = -1;
    v8 = pEntList[v6];
    if ( v8 != 0 )
    {
      m_pEntity = v8->m_pEntity;
      if ( m_pEntity != 0 )
      {
        v10 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
        v11 = 0x7FFF;
        if ( m_pEntity->m_EHandle.m_Index != -1 )
          v11 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        LOWORD(v16[0]) = v11 | v16[0] & 0x8000;
        v16[0] = (v10 << 15) | v16[0] & 0x7FFF;
      }
    }
    if ( memcmp(p_m_hAttachEntity, v16, 4u) != 0 )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 1200, v6, 0xFFFFFFFFLL);
      p_m_hAttachEntity->m_Value[0].m_Index = v16[0];
    }
    v15 = attachment[v6];
    if ( v15 != p_m_nAttachIndex->m_Value[v6] )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 1240, v6, 0xFFFFFFFFLL);
      p_m_nAttachIndex->m_Value[v6] = v15;
    }
    ++v6;
    p_m_hAttachEntity = (p_m_hAttachEntity + 4);
  }
  while ( v6 != (nNumEnts - 1) + 1LL );
LABEL_16:
  if ( nNumEnts != this->m_nNumBeamEnts.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1168, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_nNumBeamEnts.m_Value = nNumEnts;
  }
  CBeam::RelinkBeam(this);
}


// CBeam::RelinkBeam  (line 564, @0x000000000219a120, libserver.so)  // inlines: SetCollisionBounds, VectorMax, VectorMin, VectorSubtract, fpmax, fpmin, operator-
// calls: CBeam::GetAbsStartPos, CBeam::GetAbsEndPos, CBaseEntity::GetAbsOrigin, CCollisionProperty::SetCollisionBounds
// callers: CBeam::SetStartEntity, CBeam::SetEndEntity, CBeam::BeamDamage, CBeam::PointsInit, CBeam::HoseInit, CBeam::PointEntInit, CBeam::EntsInit, CBeam::LaserInit, CBeam::SplineInit, CEnvBeam::UpdateThink, CEnvBeam::BeamUpdateVars
// local variable allocation has failed, the output may be wrong!
void __fastcall CBeam::RelinkBeam(CBeam *const this)
{
  const Vector *AbsEndPos; // rax
  float y; // xmm1_4
  float z; // xmm0_4
  const Vector *AbsOrigin; // rax
  vec_t v6; // xmm5_4
  vec_t v7; // xmm3_4
  const Vector *v8; // rax
  float v9; // xmm6_4
  float v10; // xmm7_4
  float v11; // [rsp+8h] [rbp-48h]
  float v12; // [rsp+Ch] [rbp-44h]
  float v13; // [rsp+10h] [rbp-40h]
  _BYTE v14[20]; // [rsp+14h] [rbp-3Ch] OVERLAPPED BYREF
  float v15; // [rsp+28h] [rbp-28h]
  Vector maxs; // [rsp+30h] [rbp-20h] BYREF

  *v14 = *CBeam::GetAbsStartPos(this);
  AbsEndPos = CBeam::GetAbsEndPos(this);
  y = AbsEndPos->y;
  z = AbsEndPos->z;
  v11 = fminf(*v14, AbsEndPos->x);
  v12 = fminf(*&v14[4], y);
  v13 = fminf(*&v14[8], z);
  *v14 = fmaxf(*v14, AbsEndPos->x);
  *&v14[4] = fmaxf(*&v14[4], y);
  *&v14[8] = fmaxf(*&v14[8], z);
  AbsOrigin = CBaseEntity::GetAbsOrigin(this);
  v6 = *v14 - AbsOrigin->x;
  v7 = *&v14[8] - AbsOrigin->z;
  maxs.y = *&v14[4] - AbsOrigin->y;
  maxs.x = v6;
  maxs.z = v7;
  v8 = CBaseEntity::GetAbsOrigin(this);
  v9 = v11 - v8->x;
  v10 = v13 - v8->z;
  *&v14[16] = v12 - v8->y;
  *&v14[12] = v9;
  v15 = v10;
  CCollisionProperty::SetCollisionBounds(&this->m_Collision, &v14[12], &maxs);
}


// CBeam::RandomTargetname  (line 608, @0x0000000002191140, libserver.so)
// calls: CGameEntitySystem::FindEntityByName
// callers: CEnvBeam::Strike, CEnvBeam::StrikeThink, CEnvLaser::StrikeThink
CBaseEntity *__fastcall CBeam::RandomTargetname(CBeam *const this, const char *szName)
{
  unsigned int v2; // r14d
  CBaseEntity *v3; // rbx
  CBaseEntity *i; // rax
  __int64 v5; // rdx
  CBaseEntity *v6; // r15

  v2 = 0;
  v3 = 0;
  for ( i = CGameEntitySystem::FindEntityByName(g_pGameEntitySystem, 0, szName, this, 0, 0, 0);
        ;
        i = CGameEntitySystem::FindEntityByName(g_pGameEntitySystem, v6, szName, this, 0, 0, 0) )
  {
    v6 = i;
    if ( i == 0 )
      break;
    v5 = v2++;
    if ( (*(*random_valve + 16LL))(random_valve, 0, v5) <= 0 )
      v3 = v6;
  }
  return v3;
}


// CBeam::DoSparks  (line 628, @0x00000000021911d0, libserver.so)  // inlines: HasSpawnFlags
// calls: ITempEntsSystem::Sparks
// callers: CEnvBeam::TurnOn, CEnvBeam::Strike, CEnvBeam::Zap, CEnvLaser::FireAtPoint
void __fastcall CBeam::DoSparks(CBeam *const this, const Vector *const start, const Vector *const end)
{
  unsigned int m_Value; // eax

  m_Value = this->m_spawnflags.m_Value;
  if ( (m_Value & 0x30) != 0 )
  {
    if ( (m_Value & 0x10) == 0 )
    {
      if ( (m_Value & 0x20) == 0 )
        return;
LABEL_5:
      ITempEntsSystem::Sparks(g_pEffects, end, 1, 1, 0);
      return;
    }
    ITempEntsSystem::Sparks(g_pEffects, start, 1, 1, 0);
    if ( (this->m_spawnflags.m_Value & 0x20) != 0 )
      goto LABEL_5;
  }
}


// CBeam::BeamDamage  (line 650, @0x000000000219a640, libserver.so)  // inlines: VectorSubtract, curtime, operator-
// calls: CBeam::RelinkBeam, ClearMultiDamage, CBaseEntity::GetAbsOrigin, VectorNormalize, CTakeDamageInfo::CTakeDamageInfo, CalculateMeleeDamageForce, CBaseEntity::DispatchTraceAttack, ApplyMultiDamage, CTakeDamageInfo::~CTakeDamageInfo, UTIL_DecalTrace, _Unwind_Resume
// callers: CEnvBeam::Strike, CEnvLaser::FireAtPoint, CEnvBeam::UpdateThink
// globals: `vtable for'CNetMessagePB<138,CEntityMessageRemoveAllDecals,(SignonGroup_t)13,(NetChannelBufType_t)1,true>
void __fastcall CBeam::BeamDamage(CBeam *const this, trace_t *ptr)
{
  CBaseEntity *m_pEnt; // r15
  const Vector *AbsOrigin; // rax
  vec_t v6; // xmm2_4
  vec_t v7; // xmm0_4
  __int64 *v8; // rcx
  float m_flCurrentTime; // xmm0_4
  float m_flDamage; // xmm1_4
  CGlobalVars *v11; // r13
  CGlobalVars *v12; // r12
  float v13; // xmm0_4
  FnGlobalVarsWarningFunc v14; // rax
  const char *v15; // rax
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  float v17; // [rsp+0h] [rbp-E0h]
  int nDamageType; // [rsp+4h] [rbp-DCh]
  Vector dir; // [rsp+10h] [rbp-D0h] BYREF
  CTakeDamageInfo info; // [rsp+20h] [rbp-C0h] BYREF

  CBeam::RelinkBeam(this);
  if ( ptr->fraction != 1.0 )
  {
    m_pEnt = ptr->m_pEnt;
    if ( m_pEnt != 0 )
    {
      ClearMultiDamage();
      AbsOrigin = CBaseEntity::GetAbsOrigin(this);
      v6 = ptr->endpos.x - AbsOrigin->x;
      v7 = ptr->endpos.z - AbsOrigin->z;
      dir.y = ptr->endpos.y - AbsOrigin->y;
      dir.x = v6;
      dir.z = v7;
      VectorNormalize(&dir);
      v8 = &`vtable for'CNetMessagePB<138,CEntityMessageRemoveAllDecals,(SignonGroup_t)13,(NetChannelBufType_t)1,true>;
      if ( this->m_nDissolveType != 0 )
      {
        LODWORD(v8) = 1024;
        if ( this->m_nDissolveType > 0 )
          v8 = &off_4000100;
      }
      m_flCurrentTime = 0.0;
      m_flDamage = this->m_flDamage;
      v11 = gpGlobals;
      if ( gpGlobals != 0 )
      {
        if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
        {
          m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
          if ( m_pfnWarningFunc != 0 )
          {
            v17 = this->m_flDamage;
            nDamageType = v8;
            (m_pfnWarningFunc)(1, 0.0);
            m_flDamage = v17;
            LODWORD(v8) = nDamageType;
          }
        }
        m_flCurrentTime = v11->m_flCurrentTime;
      }
      CTakeDamageInfo::CTakeDamageInfo(&info, this, this, (m_flCurrentTime - this->m_flFireTime) * m_flDamage, v8, 0);
      CalculateMeleeDamageForce(&info, &dir, &ptr->endpos, 1.0);
      CBaseEntity::DispatchTraceAttack(m_pEnt, &info, &dir, ptr);
      ApplyMultiDamage();
      if ( (this->m_spawnflags.m_Value & 0x40) != 0 )
      {
        v15 = (*(this->_vptr_IHandleEntity + 214))(this);
        UTIL_DecalTrace(ptr, v15);
      }
      CTakeDamageInfo::~CTakeDamageInfo(&info);
    }
  }
  v12 = gpGlobals;
  v13 = 0.0;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      v14 = gpGlobals->m_pfnWarningFunc;
      if ( v14 != 0 )
        (v14)(1, 0.0);
    }
    v13 = v12->m_flCurrentTime;
  }
  this->m_flFireTime = v13;
}


// CBeam::TurnOn  (line 690, @0x0000000002191250, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<bool>
void __fastcall CBeam::TurnOn(CBeam *const this)
{
  if ( this->m_bTurnedOff.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1288, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bTurnedOff.m_Value = 0;
  }
}


// CBeam::TurnOff  (line 698, @0x0000000002191290, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<bool>
void __fastcall CBeam::TurnOff(CBeam *const this)
{
  if ( !this->m_bTurnedOff.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1288, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bTurnedOff.m_Value = 1;
  }
}


// CBeam::InputWidth  (line 709, @0x000000000218a550, libserver.so)  // inlines: Float, NetworkStateChanged, Set, SetEndWidth, SetWidth, operator float, operator=<float>
void __fastcall CBeam::InputWidth(CBeam *const this, inputdata_t *const inputdata)
{
  int16 m_type; // ax
  __m128 m_uint; // xmm1
  __m128 v6; // xmm0
  float v7; // xmm0_4
  __m128 v8; // xmm2
  __m128 v9; // xmm0
  float v10; // xmm0_4
  float v11; // [rsp+Ch] [rbp-14h]
  float v12; // [rsp+Ch] [rbp-14h]

  m_type = inputdata->value.m_type;
  if ( m_type == 34 )
    m_uint = _mm_cvtpd_ps(inputdata->value.m_uint64);
  else
    m_uint = inputdata->value.m_uint;
  v6 = _mm_cmplt_ss(0x42CC999Au, m_uint);
  LODWORD(v7) = _mm_andnot_ps(v6, m_uint).m128_u32[0] | v6.m128_i32[0] & 0x42CC999A;
  if ( v7 == this->m_fWidth.m_Value )
  {
    if ( m_type != 34 )
    {
LABEL_5:
      v8 = inputdata->value.m_uint;
      goto LABEL_6;
    }
  }
  else
  {
    v12 = v7;
    (*(this->_vptr_IHandleEntity + 22))(this, 1252, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_fWidth.m_Value = v12;
    if ( inputdata->value.m_type != 34 )
      goto LABEL_5;
  }
  v8 = _mm_cvtpd_ps(inputdata->value.m_uint64);
LABEL_6:
  v9 = _mm_cmplt_ss(0x42CC999Au, v8);
  LODWORD(v10) = _mm_andnot_ps(v9, v8).m128_u32[0] | v9.m128_i32[0] & 0x42CC999A;
  if ( v10 != this->m_fEndWidth.m_Value )
  {
    v11 = v10;
    (*(this->_vptr_IHandleEntity + 22))(this, 1256, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_fEndWidth.m_Value = v11;
  }
}


// CBeam::InputColorRedValue  (line 715, @0x000000000218ad70, libserver.so)  // inlines: Float, Init, NetworkStateChanged, SetAlpha, SetBlue, SetColor, SetComponent, SetGreen, SetRed, SetRenderColor, SetVal, a, b, g, operator float
void __fastcall CBeam::InputColorRedValue(CBeam *const this, inputdata_t *const inputdata)
{
  float m_float64; // xmm0_4
  int v4; // r12d
  unsigned __int8 v5; // r14
  unsigned __int8 v6; // r15
  unsigned __int8 v7; // r13
  bool v8; // zf

  if ( inputdata->value.m_type == 34 )
  {
    LOBYTE(v4) = -1;
    m_float64 = inputdata->value.m_float64;
    if ( m_float64 <= 255.0 )
    {
      LOBYTE(v4) = 0;
      if ( m_float64 >= 0.0 )
        goto LABEL_4;
    }
  }
  else
  {
    m_float64 = inputdata->value.m_float;
    LOBYTE(v4) = -1;
    if ( m_float64 <= 255.0 )
    {
      LOBYTE(v4) = 0;
      if ( m_float64 >= 0.0 )
LABEL_4:
        v4 = m_float64;
    }
  }
  v5 = this->m_clrRender.m_Value._color[2];
  v6 = this->m_clrRender.m_Value._color[1];
  v7 = this->m_clrRender.m_Value._color[3];
  if ( v4 != this->m_clrRender.m_Value._color[0] )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 828, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    v8 = this->m_clrRender.m_Value._color[1] == v6;
    this->m_clrRender.m_Value._color[0] = v4;
    if ( !v8 )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 828, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_clrRender.m_Value._color[1] = v6;
    }
  }
  if ( v5 != this->m_clrRender.m_Value._color[2] )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 828, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_clrRender.m_Value._color[2] = v5;
  }
  if ( v7 != this->m_clrRender.m_Value._color[3] )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 828, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_clrRender.m_Value._color[3] = v7;
  }
}


// CBeam::InputColorGreenValue  (line 721, @0x000000000218aec0, libserver.so)  // inlines: Float, Init, NetworkStateChanged, SetAlpha, SetBlue, SetColor, SetComponent, SetGreen, SetRenderColor, SetVal, a, b, operator float
void __fastcall CBeam::InputColorGreenValue(CBeam *const this, inputdata_t *const inputdata)
{
  float m_float64; // xmm0_4
  int v4; // r12d
  unsigned __int8 v5; // r14
  unsigned __int8 v6; // r13
  bool v7; // zf

  if ( inputdata->value.m_type == 34 )
  {
    LOBYTE(v4) = -1;
    m_float64 = inputdata->value.m_float64;
    if ( m_float64 <= 255.0 )
    {
      LOBYTE(v4) = 0;
      if ( m_float64 >= 0.0 )
        goto LABEL_4;
    }
  }
  else
  {
    m_float64 = inputdata->value.m_float;
    LOBYTE(v4) = -1;
    if ( m_float64 <= 255.0 )
    {
      LOBYTE(v4) = 0;
      if ( m_float64 >= 0.0 )
LABEL_4:
        v4 = m_float64;
    }
  }
  v5 = this->m_clrRender.m_Value._color[2];
  v6 = this->m_clrRender.m_Value._color[3];
  if ( v4 != this->m_clrRender.m_Value._color[1] )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 828, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    v7 = v5 == this->m_clrRender.m_Value._color[2];
    this->m_clrRender.m_Value._color[1] = v4;
    if ( !v7 )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 828, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_clrRender.m_Value._color[2] = v5;
    }
  }
  if ( v6 != this->m_clrRender.m_Value._color[3] )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 828, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_clrRender.m_Value._color[3] = v6;
  }
}


// CBeam::InputColorBlueValue  (line 727, @0x000000000218ac90, libserver.so)  // inlines: Float, Init, NetworkStateChanged, SetAlpha, SetBlue, SetColor, SetComponent, SetRenderColor, SetVal, a, operator float
void __fastcall CBeam::InputColorBlueValue(CBeam *const this, inputdata_t *const inputdata)
{
  float m_float64; // xmm0_4
  int v4; // r12d
  unsigned __int8 v5; // r13

  if ( inputdata->value.m_type == 34 )
  {
    LOBYTE(v4) = -1;
    m_float64 = inputdata->value.m_float64;
    if ( m_float64 <= 255.0 )
    {
      LOBYTE(v4) = 0;
      if ( m_float64 >= 0.0 )
        goto LABEL_4;
    }
  }
  else
  {
    m_float64 = inputdata->value.m_float;
    LOBYTE(v4) = -1;
    if ( m_float64 <= 255.0 )
    {
      LOBYTE(v4) = 0;
      if ( m_float64 >= 0.0 )
LABEL_4:
        v4 = m_float64;
    }
  }
  v5 = this->m_clrRender.m_Value._color[3];
  if ( v4 != this->m_clrRender.m_Value._color[2] )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 828, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_clrRender.m_Value._color[2] = v4;
  }
  if ( v5 != this->m_clrRender.m_Value._color[3] )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 828, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_clrRender.m_Value._color[3] = v5;
  }
}


// CBeam::InputNoise  (line 733, @0x000000000218a3f0, libserver.so)  // inlines: Float, NetworkStateChanged, Set, SetNoise, operator float, operator=<float>
void __fastcall CBeam::InputNoise(CBeam *const this, inputdata_t *const inputdata)
{
  float m_float64; // xmm0_4
  float v4; // [rsp+Ch] [rbp-14h]

  if ( inputdata->value.m_type == 34 )
    m_float64 = inputdata->value.m_float64;
  else
    m_float64 = inputdata->value.m_float;
  if ( m_float64 != this->m_fAmplitude.m_Value )
  {
    v4 = m_float64;
    (*(this->_vptr_IHandleEntity + 22))(this, 1268, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_fAmplitude.m_Value = v4;
  }
}


// CBeam::UpdateTransmitState  (line 738, @0x0000000002187c20, libserver.so)
// calls: CBaseEntity::SetTransmitState
int __fastcall CBeam::UpdateTransmitState(CBeam *const this)
{
  return CBaseEntity::SetTransmitState(this, 0);
}


// CBeam::SetTransmit  (line 751, @0x000000000218be60, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsAlreadyMarkedForTransmission, IsValid, LookupEntity, entindex, operator CEntityInstance*
// calls: CEntityInstance::GetEntityIndex, CBaseEntity::SetTransmit
// globals: CEntityHandle::gm_pEntityList
void __fastcall CBeam::SetTransmit(CBeam *const this, CCheckTransmitInfo *pInfo, bool bAlways)
{
  CEntityIndex v6; // eax
  CBeam *v7; // rdi
  CNetworkArrayBase<CHandle<CBaseEntity>,10,CBeam::NetworkVar_m_hAttachEntity> *p_m_hAttachEntity; // rbx
  int v9; // r12d
  CEntityIdentity *v10; // rdx
  CEntityIdentity *v11; // rdx

  v6.m_Data = CEntityInstance::GetEntityIndex(this).m_Data;
  if ( ((1 << SLOBYTE(v6.m_Data)) & pInfo->m_pTransmitEdict->m_Ints[v6.m_Data >> 5]) == 0 )
  {
    v7 = this;
    p_m_hAttachEntity = &this->m_hAttachEntity;
    v9 = 10;
    CBaseEntity::SetTransmit(v7, pInfo, bAlways);
    do
    {
      if ( p_m_hAttachEntity->m_Value[0].m_Index + 2 > 1 )
      {
        v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(p_m_hAttachEntity->m_Value[0].m_Index) >> 9)
                                                             & 0x3F];
        if ( v10 != 0 )
        {
          v11 = &v10[p_m_hAttachEntity->m_Value[0].m_Index & 0x1FF];
          if ( v11 != 0 && p_m_hAttachEntity->m_Value[0].m_Index == v11->m_EHandle.m_Index && v11->m_pInstance != 0 )
            (*(v11->m_pInstance->_vptr_IHandleEntity + 66))(v11->m_pInstance, pInfo, bAlways);
        }
      }
      p_m_hAttachEntity = (p_m_hAttachEntity + 4);
      --v9;
    }
    while ( v9 != 0 );
  }
}


// CBeam::ShouldTransmit  (line 769, @0x0000000002189500, libserver.so)
// calls: CBaseEntity::GetMoveParent, CBaseEntity::ShouldTransmit
int __fastcall CBeam::ShouldTransmit(CBeam *const this, const CGameCheckTransmitInfo *pInfo)
{
  CBaseEntity *MoveParent; // rax

  if ( (this->m_fEffects.m_Value & 0x20) != 0 )
    return 8;
  if ( CBaseEntity::GetMoveParent(this) == 0 )
    return CBaseEntity::ShouldTransmit(this, pInfo);
  MoveParent = CBaseEntity::GetMoveParent(this);
  return (*(MoveParent->_vptr_IHandleEntity + 65))(MoveParent, pInfo);
}


// CBeam::DrawDebugTextOverlays  (line 789, @0x0000000002187aa0, libserver.so)
// calls: CBaseEntity::DrawDebugTextOverlays, CBaseEntity::GetAbsOrigin, V_snprintf, CBaseEntity::EntityText, __stack_chk_fail
// strings: "start: (%.2f,%.2f,%.2f)", "end  : (%.2f,%.2f,%.2f)"
int __fastcall CBeam::DrawDebugTextOverlays(CBeam *const this, uint64 nDebugOverlayBits, int iDebugFilterFlags)
{
  __int16 v3; // r14
  char v4; // r12
  int v6; // r13d
  const Vector *AbsOrigin; // rax
  double z; // [rsp+10h] [rbp-240h]
  double y; // [rsp+18h] [rbp-238h]
  char tempstr[520]; // [rsp+20h] [rbp-230h] BYREF
  unsigned __int64 v12; // [rsp+228h] [rbp-28h]

  v3 = iDebugFilterFlags;
  v4 = nDebugOverlayBits;
  v12 = __readfsqword(0x28u);
  v6 = CBaseEntity::DrawDebugTextOverlays(this, nDebugOverlayBits, iDebugFilterFlags);
  if ( (v4 & 1) != 0 && (v3 & 0x4000) != 0 )
  {
    z = CBaseEntity::GetAbsOrigin(this)->z;
    y = CBaseEntity::GetAbsOrigin(this)->y;
    AbsOrigin = CBaseEntity::GetAbsOrigin(this);
    V_snprintf(tempstr, 512, "start: (%.2f,%.2f,%.2f)", AbsOrigin->x, y, z);
    CBaseEntity::EntityText(this, v6, tempstr, 0.0, 255, 255, 255, 255);
    V_snprintf(
      tempstr,
      512,
      "end  : (%.2f,%.2f,%.2f)",
      this->m_vecEndPos.m_Value.x,
      this->m_vecEndPos.m_Value.y,
      this->m_vecEndPos.m_Value.z);
    CBaseEntity::EntityText(this, v6 + 1, tempstr, 0.0, 255, 255, 255, 255);
    v6 += 2;
  }
  return v6;
}


// CBeam::UpdateOnRemove  (line 812, @0x0000000002187c60, libserver.so)
// calls: CBaseModelEntity::UpdateOnRemove
void __fastcall CBeam::UpdateOnRemove(CBeam *const this)
{
  CBaseModelEntity::UpdateOnRemove(this);
}


