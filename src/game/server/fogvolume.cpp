
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CFogVolume::GetDataDescMap  (line 20, @0x0000000002ec20f0, libserver.so)
// globals: CFogVolume::m_DataMap
datamap_t *__fastcall CFogVolume::GetDataDescMap(CFogVolume *const this)
{
  return &CFogVolume::m_DataMap;
}


// CFogVolume::AddDatadescMetadataKeys  (line 20, @0x0000000002ec3af0, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CFogVolume::GetEntityClass(void)
void __fastcall CFogVolume::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CFogVolume::GetEntityClass);
}


// CFogVolume::GetBaseMap  (line 20, @0x0000000002ec3b10, libserver.so)
datamap_t *__cdecl CFogVolume::GetBaseMap()
{
  return &CServerOnlyModelEntity::m_DataMap;
}


// DataMapInit<CFogVolume>  (line 20, @0x0000000002ec3b20, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_misc_required_files_01.cpp
// strings: "CFogVolume"
// globals: `guard variable for'DataMapInit<CFogVolume>(CFogVolume *)::nameHolder, CFogVolume::GetEntityClass(void), CFogVolume::m_DataMap, DataMapInit<CFogVolume>(CFogVolume *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CFogVolume>(CFogVolume *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CFogVolume>(CFogVolume *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CFogVolume>(CFogVolume *)::nameHolder) != 0 )
  {
    DataMapInit<CFogVolume>(CFogVolume *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CFogVolume>(CFogVolume *)::nameHolder.m_pszBase = "CFogVolume";
    DataMapInit<CFogVolume>(CFogVolume *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CFogVolume>(CFogVolume *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CFogVolume>(CFogVolume *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CFogVolume>(CFogVolume *)::nameHolder.m_nLenBase = 10;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CFogVolume>(CFogVolume *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CFogVolume>(CFogVolume *)::nameHolder,
      &_dso_handle);
  }
  CFogVolume::m_DataMap.dataNumFields = 10;
  CFogVolume::m_DataMap.baseMap = &CServerOnlyModelEntity::m_DataMap;
  CFogVolume::m_DataMap.dataDesc = &DataMapInit<CFogVolume>(CFogVolume *)::dataDesc[1];
  AddDatadescMetadataKeys(&CFogVolume::m_DataMap, CFogVolume::GetEntityClass);
  return &CFogVolume::m_DataMap;
}


// CFogVolume::FindFogVolumeForPosition  (line 40, @0x0000000002ec3bf0, libserver.so)  // inlines: CUtlSymbolLarge, GetBool, GetEntityName, GetInt, IsBoundsDefinedInEntitySpace, String, ToCStr, VectorITransform, VectorSubtract, WorldToCollisionSpace, operator/=, operator=, operator==
// calls: VectorITransform, IsBoxIntersectingSphere
// callers: CBasePlayer::UpdateFXVolume
// strings: "No Fog Volume found at given position (%f %f %f)", "Fog Volume %s found at position (%f %f %f)", "Fog: %s, post process: %s, color correct: %s"
// globals: TheFogVolumes
CFogVolume *__fastcall CFogVolume::FindFogVolumeForPosition(const Vector *const position)
{
  __int64 v2; // r12
  int v3; // r13d
  CFogVolume *v4; // r15
  float v5; // xmm0_4
  float *v6; // rax
  double v7; // xmm1_8
  const matrix3x4_t *v8; // rax
  float v9; // xmm5_4
  const Vector *v10; // rax
  float *v11; // rax
  vec_t v12; // xmm2_4
  vec_t v13; // xmm1_4
  const char *m_pAsString; // rcx
  const char *v16; // r9
  const char *v17; // r8
  const char *v18; // rcx
  float boxMax; // [rsp+8h] [rbp-48h]
  Vector *boxMaxa; // [rsp+8h] [rbp-48h]
  float boxMaxb; // [rsp+8h] [rbp-48h]
  Vector vecRelativeCenter; // [rsp+10h] [rbp-40h] BYREF

  if ( TheFogVolumes.m_Size <= 0 )
  {
LABEL_10:
    v4 = 0;
    if ( fog_volume_debug.m_pParent->m_Value.m_nValue != 0 )
      (*(*engine + 320LL))(
        engine,
        0,
        "No Fog Volume found at given position (%f %f %f)",
        position->x,
        position->y,
        position->z);
  }
  else
  {
    v2 = 0;
    v3 = 0;
    while ( 1 )
    {
      v4 = TheFogVolumes.m_Memory.m_pMemory[v2];
      v5 = (*(v4->m_Collision._vptr_ICollideable + 27))(&v4->m_Collision);
      if ( v5 == 0.0 )
      {
        vecRelativeCenter = vec3_origin;
      }
      else if ( (v4->m_Collision.m_nSolidType.m_Value & 0xFD) == 0
             || (boxMax = v5,
                 v6 = (*(v4->m_Collision._vptr_ICollideable + 5))(&v4->m_Collision),
                 v5 = boxMax,
                 *&v7 = LODWORD(vec3_angle.x),
                 vec3_angle.x == *v6)
             && (*&v7 = LODWORD(vec3_angle.y), *&v7 == v6[1] && (*&v7 = LODWORD(vec3_angle.z), *&v7 == v6[2])) )
      {
        boxMaxb = v5;
        v11 = (*(v4->m_Collision._vptr_ICollideable + 4))(&v4->m_Collision);
        v12 = (position->y - v11[1]) * (1.0 / boxMaxb);
        v13 = (position->z - v11[2]) * (1.0 / boxMaxb);
        vecRelativeCenter.x = (position->x - *v11) * (1.0 / boxMaxb);
        vecRelativeCenter.y = v12;
        vecRelativeCenter.z = v13;
      }
      else
      {
        v8 = (*(v4->m_Collision._vptr_ICollideable + 6))(&v4->m_Collision, COERCE_DOUBLE(LODWORD(boxMax)), v7);
        VectorITransform(&position->x, v8, &vecRelativeCenter.x);
        v9 = 1.0 / (boxMax * boxMax);
        vecRelativeCenter.x = vecRelativeCenter.x * v9;
        vecRelativeCenter.z = v9 * vecRelativeCenter.z;
        vecRelativeCenter.y = vecRelativeCenter.y * v9;
      }
      boxMaxa = (*(v4->m_Collision._vptr_ICollideable + 2))(&v4->m_Collision);
      v10 = (*(v4->m_Collision._vptr_ICollideable + 1))(&v4->m_Collision);
      if ( IsBoxIntersectingSphere(v10, boxMaxa, &vecRelativeCenter, 1.0) )
        break;
      ++v3;
      ++v2;
      if ( TheFogVolumes.m_Size <= v3 )
        goto LABEL_10;
    }
    if ( fog_volume_debug.m_pParent->m_Value.m_nValue != 0 )
    {
      m_pAsString = v4->m_pEntity->m_name.u.m_pAsString;
      if ( m_pAsString == 0 )
        m_pAsString = "";
      (*(*engine + 320LL))(
        engine,
        0,
        "Fog Volume %s found at position (%f %f %f)",
        m_pAsString,
        position->x,
        position->y,
        position->z);
      v16 = "";
      if ( v4->m_colorCorrectionName.u.m_Id != 0 )
        v16 = v4->m_colorCorrectionName.u.m_pAsString;
      v17 = "";
      if ( v4->m_postProcessName.u.m_Id != 0 )
        v17 = v4->m_postProcessName.u.m_pAsString;
      v18 = "";
      if ( v4->m_fogName.u.m_Id != 0 )
        v18 = v4->m_fogName.u.m_pAsString;
      (*(*engine + 320LL))(engine, 1, "Fog: %s, post process: %s, color correct: %s", v18, v17, v16);
    }
  }
  return v4;
}


// CFogVolume::CFogVolume  (line 75, @0x0000000002ec3f60, libserver.so)  // inlines: CEntityHandle, CHandle, CServerOnlyModelEntity, CUtlSymbolLarge
// calls: CBaseModelEntity::CBaseModelEntity
void __fastcall CFogVolume::CFogVolume(CFogVolume *const this)
{
  CBaseModelEntity::CBaseModelEntity(this);
  this->m_fogName.u.m_Id = 0;
  this->_vptr_IHandleEntity = &off_47ACF70;
  this->m_postProcessName.u.m_Id = 0;
  this->m_colorCorrectionName.u.m_Id = 0;
  this->m_hFogController.m_Index = -1;
  this->m_hPostProcessController.m_Index = -1;
  this->m_hColorCorrectionController.m_Index = -1;
  this->m_bDisabled = 0;
  this->m_bInFogVolumesList = 0;
}


// CFogVolume::~CFogVolume  (line 83, @0x0000000002ec2f30, libserver.so)  // inlines: RemoveFromGlobalList, ~CServerOnlyModelEntity
// calls: CFogVolume::RemoveFromGlobalList, CBaseModelEntity::~CBaseModelEntity
// callers: CFogVolume::~CFogVolume
void __fastcall CFogVolume::~CFogVolume(CFogVolume *const this)
{
  this->_vptr_IHandleEntity = &off_47ACF70;
  if ( this->m_bInFogVolumesList )
    CFogVolume::RemoveFromGlobalList(this);
  this->_vptr_IHandleEntity = &off_3FEEEB0;
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CFogVolume::~CFogVolume  (line 83, @0x0000000002ec2f70, libserver.so)
// calls: CFogVolume::~CFogVolume, CBaseEntity::operator delete
void __fastcall CFogVolume::~CFogVolume(CFogVolume *const this)
{
  CFogVolume::~CFogVolume(this);
  CBaseEntity::operator delete(this);
}


// CFogVolume::Spawn  (line 90, @0x0000000002ec28c0, libserver.so)
// calls: CBaseEntity::Spawn, CCollisionProperty::SetupPhysicsAsNoCollision, CBaseModelEntity::SetModelFromKeyValues
void __fastcall CFogVolume::Spawn(CFogVolume *const this, const CEntityKeyValues *pKeyValues)
{
  CBaseEntity::Spawn(this, pKeyValues);
  CCollisionProperty::SetupPhysicsAsNoCollision(&this->m_Collision, 1);
  CBaseModelEntity::SetModelFromKeyValues(this, pKeyValues, 0);
}


// CFogVolume::AddToGlobalList  (line 101, @0x0000000002ec4270, libserver.so)  // inlines: AddToTail, CopyConstruct<CFogVolume*>, Element, GrowMemory, operator[]
// calls: CUtlMemory<CFogVolume*, int>::Grow
// callers: CFogVolume::AddToGlobalList, CFogVolume::InputEnable, CFogVolume::Activate
// globals: TheFogVolumes
void __fastcall CFogVolume::AddToGlobalList(CFogVolume *const this)
{
  __int64 m_Size; // rbx
  int v3; // eax
  CFogVolume **v4; // rax

  m_Size = TheFogVolumes.m_Size;
  v3 = TheFogVolumes.m_Size;
  if ( TheFogVolumes.m_Size == TheFogVolumes.m_Memory.m_nAllocationCount )
  {
    CUtlMemory<CFogVolume *,int>::Grow(&TheFogVolumes.m_Memory, 1);
    v3 = TheFogVolumes.m_Size;
  }
  TheFogVolumes.m_Size = v3 + 1;
  v4 = &TheFogVolumes.m_Memory.m_pMemory[m_Size];
  if ( v4 != 0 )
    *v4 = this;
  this->m_bInFogVolumesList = 1;
}


// CFogVolume::AddToGlobalList  (line 101, @0x0000000002ec42e0, libserver.so)
// calls: CFogVolume::AddToGlobalList
void __fastcall CFogVolume::AddToGlobalList(CFogVolume *const this)
{
  if ( !this->m_bInFogVolumesList )
    CFogVolume::AddToGlobalList(this);
}


// CFogVolume::RemoveFromGlobalList  (line 112, @0x0000000002ec2e90, libserver.so)  // inlines: Element, Find, FindAndRemove, Remove, ShiftElementsLeft, V_memmove, memmove, operator[]
// calls: memmove
// callers: CFogVolume::~CFogVolume, CFogVolume::InputDisable, CFogVolume::RemoveFromGlobalList
// globals: TheFogVolumes
void __fastcall CFogVolume::RemoveFromGlobalList(CFogVolume *const this)
{
  int m_Size; // ecx
  CFogVolume **v3; // rdx
  int v4; // eax

  m_Size = TheFogVolumes.m_Size;
  if ( TheFogVolumes.m_Size <= 0 )
  {
LABEL_6:
    this->m_bInFogVolumesList = 0;
    return;
  }
  if ( this != *TheFogVolumes.m_Memory.m_pMemory )
  {
    v3 = TheFogVolumes.m_Memory.m_pMemory + 1;
    v4 = 0;
    while ( ++v4 != TheFogVolumes.m_Size )
    {
      if ( this == *v3++ )
      {
        if ( v4 == -1 )
          goto LABEL_6;
        goto LABEL_8;
      }
    }
    goto LABEL_6;
  }
  v4 = 0;
LABEL_8:
  if ( TheFogVolumes.m_Size - v4 - 1 > 0 )
  {
    memmove(
      &TheFogVolumes.m_Memory.m_pMemory[v4],
      &TheFogVolumes.m_Memory.m_pMemory[v4 + 1],
      8LL * (TheFogVolumes.m_Size - v4 - 1));
    m_Size = TheFogVolumes.m_Size;
  }
  this->m_bInFogVolumesList = 0;
  TheFogVolumes.m_Size = m_Size - 1;
}


// CFogVolume::RemoveFromGlobalList  (line 112, @0x0000000002ec3fd0, libserver.so)
// calls: CFogVolume::RemoveFromGlobalList
void __fastcall CFogVolume::RemoveFromGlobalList(CFogVolume *const this)
{
  if ( this->m_bInFogVolumesList )
    CFogVolume::RemoveFromGlobalList(this);
}


// CFogVolume::InputEnable  (line 123, @0x0000000002ec4300, libserver.so)  // inlines: AddToGlobalList
// calls: CFogVolume::AddToGlobalList
void __fastcall CFogVolume::InputEnable(CFogVolume *const this, inputdata_t *const data)
{
  bool v2; // zf

  v2 = !this->m_bInFogVolumesList;
  this->m_bDisabled = 0;
  if ( v2 )
    CFogVolume::AddToGlobalList(this);
}


// CFogVolume::InputDisable  (line 131, @0x0000000002ec2f90, libserver.so)  // inlines: RemoveFromGlobalList
// calls: CFogVolume::RemoveFromGlobalList
void __fastcall CFogVolume::InputDisable(CFogVolume *const this, inputdata_t *const data)
{
  bool v2; // zf

  v2 = !this->m_bInFogVolumesList;
  this->m_bDisabled = 1;
  if ( !v2 )
    CFogVolume::RemoveFromGlobalList(this);
}


// CFogVolume::Activate  (line 141, @0x0000000002ec4330, libserver.so)  // inlines: AddToGlobalList, CUtlSymbolLarge, GetEHandle, GetEntryIndex, GetSerialNumber, Set, operator=
// calls: CBaseModelEntity::Activate, CGameEntitySystem::FindEntityByName, __dynamic_cast, CFogVolume::AddToGlobalList
void __fastcall CFogVolume::Activate(CFogVolume *const this, ActivateType_t activateType)
{
  CBaseEntity *EntityByName; // rax
  _QWORD *v4; // rax
  __int64 v5; // rdx
  int v6; // eax
  __int16 v7; // cx
  CBaseEntity *v8; // rax
  _QWORD *v9; // rax
  __int64 v10; // rdx
  int v11; // eax
  __int16 v12; // cx
  CBaseEntity *v13; // rax
  _QWORD *v14; // rax
  __int64 v15; // rdx
  int v16; // eax
  __int16 v17; // cx
  string_t iszName; // [rsp+10h] [rbp-30h] BYREF

  CBaseModelEntity::Activate(this, activateType);
  iszName.u.m_Id = this->m_fogName.u.m_Id;
  EntityByName = CGameEntitySystem::FindEntityByName(g_pGameEntitySystem, 0, &iszName, this, 0, 0, 0);
  if ( EntityByName != 0
    && (v4 = __dynamic_cast(EntityByName, &`typeinfo for'CBaseEntity, &`typeinfo for'CFogController, 0)) != 0
    && (v5 = v4[1]) != 0 )
  {
    v6 = (*(v5 + 16) >> 15) - (*(v5 + 48) & 1);
    v7 = 0x7FFF;
    if ( *(v5 + 16) != -1 )
      v7 = *(v5 + 16) & 0x7FFF;
    LOWORD(this->m_hFogController.m_Index) = v7 | this->m_hFogController.m_Index & 0x8000;
    this->m_hFogController.m_Index = (v6 << 15) | this->m_hFogController.m_Index & 0x7FFF;
  }
  else
  {
    this->m_hFogController.m_Index = -1;
  }
  iszName.u.m_Id = this->m_postProcessName.u.m_Id;
  v8 = CGameEntitySystem::FindEntityByName(g_pGameEntitySystem, 0, &iszName, this, 0, 0, 0);
  if ( v8 != 0
    && (v9 = __dynamic_cast(v8, &`typeinfo for'CBaseEntity, &`typeinfo for'CPostProcessController, 0)) != 0
    && (v10 = v9[1]) != 0 )
  {
    v11 = (*(v10 + 16) >> 15) - (*(v10 + 48) & 1);
    v12 = 0x7FFF;
    if ( *(v10 + 16) != -1 )
      v12 = *(v10 + 16) & 0x7FFF;
    LOWORD(this->m_hPostProcessController.m_Index) = v12 | this->m_hPostProcessController.m_Index & 0x8000;
    this->m_hPostProcessController.m_Index = (v11 << 15) | this->m_hPostProcessController.m_Index & 0x7FFF;
  }
  else
  {
    this->m_hPostProcessController.m_Index = -1;
  }
  iszName.u.m_Id = this->m_colorCorrectionName.u.m_Id;
  v13 = CGameEntitySystem::FindEntityByName(g_pGameEntitySystem, 0, &iszName, this, 0, 0, 0);
  if ( v13 != 0
    && (v14 = __dynamic_cast(v13, &`typeinfo for'CBaseEntity, &`typeinfo for'CColorCorrection, 0)) != 0
    && (v15 = v14[1]) != 0 )
  {
    v16 = (*(v15 + 16) >> 15) - (*(v15 + 48) & 1);
    v17 = 0x7FFF;
    if ( *(v15 + 16) != -1 )
      v17 = *(v15 + 16) & 0x7FFF;
    LOWORD(this->m_hColorCorrectionController.m_Index) = v17 | this->m_hColorCorrectionController.m_Index & 0x8000;
    this->m_hColorCorrectionController.m_Index = (v16 << 15) | this->m_hColorCorrectionController.m_Index & 0x7FFF;
  }
  else
  {
    this->m_hColorCorrectionController.m_Index = -1;
  }
  if ( !this->m_bDisabled && !this->m_bInFogVolumesList )
    CFogVolume::AddToGlobalList(this);
}


// CFogVolume::Precache  (line 155, @0x0000000002ec4750, libserver.so)  // inlines: Precache
// calls: CEntityInstance::Precache, CBaseEntity::PrecacheModelFromKeyValues
void __fastcall CFogVolume::Precache(CFogVolume *const this, const CEntityPrecacheContext *pContext)
{
  CEntityInstance::Precache(this, pContext);
  CBaseEntity::PrecacheModelFromKeyValues(this, pContext, 0, 0);
}


