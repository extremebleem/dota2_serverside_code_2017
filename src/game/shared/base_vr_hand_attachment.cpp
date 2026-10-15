// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/base_vr_hand_attachment.cpp:15
class C_CBaseVRHandAttachment_MapInstall {
	C_CBaseVRHandAttachment_MapInstall();

	// sizeof = 1
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CBaseVRHandAttachment::YouForgotToImplementOrDeclareServerClass  (line 15, @0x000000000213ce20, libserver.so)
int __fastcall CBaseVRHandAttachment::YouForgotToImplementOrDeclareServerClass(CBaseVRHandAttachment *const this)
{
  return 0;
}


// CBaseVRHandAttachment::GetServerClass  (line 15, @0x000000000214a4d0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CBaseVRHandAttachment::GetServerClass(CBaseVRHandAttachment *const this)
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


// CBaseVRHandAttachment::GetDataDescMap  (line 17, @0x000000000213ce30, libserver.so)
// globals: CBaseVRHandAttachment::m_DataMap
datamap_t *__fastcall CBaseVRHandAttachment::GetDataDescMap(CBaseVRHandAttachment *const this)
{
  return &CBaseVRHandAttachment::m_DataMap;
}


// CBaseVRHandAttachment::AddDatadescMetadataKeys  (line 17, @0x000000000214ea40, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CBaseVRHandAttachment::GetEntityClass(void)
void __fastcall CBaseVRHandAttachment::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CBaseVRHandAttachment::GetEntityClass);
}


// CBaseVRHandAttachment::GetBaseMap  (line 17, @0x000000000214ea60, libserver.so)
datamap_t *__cdecl CBaseVRHandAttachment::GetBaseMap()
{
  return &CBaseAnimating::m_DataMap;
}


// DataMapInit<CBaseVRHandAttachment>  (line 17, @0x000000000214ea70, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_01.cpp
// strings: "CBaseVRHandAttachment"
// globals: `guard variable for'DataMapInit<CBaseVRHandAttachment>(CBaseVRHandAttachment *)::nameHolder, CBaseVRHandAttachment::GetEntityClass(void), CBaseVRHandAttachment::m_DataMap, DataMapInit<CBaseVRHandAttachment>(CBaseVRHandAttachment *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CBaseVRHandAttachment>(CBaseVRHandAttachment *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CBaseVRHandAttachment>(CBaseVRHandAttachment *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CBaseVRHandAttachment>(CBaseVRHandAttachment *)::nameHolder) != 0 )
  {
    DataMapInit<CBaseVRHandAttachment>(CBaseVRHandAttachment *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CBaseVRHandAttachment>(CBaseVRHandAttachment *)::nameHolder.m_pszBase = "CBaseVRHandAttachment";
    DataMapInit<CBaseVRHandAttachment>(CBaseVRHandAttachment *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CBaseVRHandAttachment>(CBaseVRHandAttachment *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CBaseVRHandAttachment>(CBaseVRHandAttachment *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CBaseVRHandAttachment>(CBaseVRHandAttachment *)::nameHolder.m_nLenBase = 21;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CBaseVRHandAttachment>(CBaseVRHandAttachment *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CBaseVRHandAttachment>(CBaseVRHandAttachment *)::nameHolder,
      &_dso_handle);
  }
  CBaseVRHandAttachment::m_DataMap.dataNumFields = 2;
  CBaseVRHandAttachment::m_DataMap.baseMap = &CBaseAnimating::m_DataMap;
  CBaseVRHandAttachment::m_DataMap.dataDesc = &DataMapInit<CBaseVRHandAttachment>(CBaseVRHandAttachment *)::dataDesc[1];
  AddDatadescMetadataKeys(&CBaseVRHandAttachment::m_DataMap, CBaseVRHandAttachment::GetEntityClass);
  return &CBaseVRHandAttachment::m_DataMap;
}


// CBaseVRHandAttachment::CBaseVRHandAttachment  (line 28, @0x000000000214eb40, libserver.so)  // inlines: CEntityHandle, CNetworkHandleBase, CNetworkVarBase, NetworkStateChanged, ~CBaseAnimating
// calls: CBaseAnimating::CBaseAnimating, CBaseEntity::NetworkStateChanged, CHitboxComponent::~CHitboxComponent, CBaseModelEntity::~CBaseModelEntity, _Unwind_Resume
// callers: CBaseVRHandAttachment::CEntityInstanceEntityClass::ConstructInstance, CVRHandModelOverride::CEntityInstanceEntityClass::ConstructInstance, CVRHandModelOverride::CVRHandModelOverride
void __fastcall CBaseVRHandAttachment::CBaseVRHandAttachment(CBaseVRHandAttachment *const this)
{
  CBaseAnimating::CBaseAnimating(this);
  this->_vptr_IHandleEntity = &off_4002550;
  this->m_hAttachedHand.m_Value.m_Index = -1;
  this->m_bIsAttached.m_Value = 0;
  CBaseEntity::NetworkStateChanged(this, 0x4C4u, -1, -1);
}


// CBaseVRHandAttachment::Spawn  (line 39, @0x000000000213eed0, libserver.so)
// calls: CBaseAnimating::Spawn, CCollisionProperty::EnableInteractsAsMask, CCollisionProperty::EnableInteractsExcludeMask
// callers: CVRHandModelOverride::Spawn
void __fastcall CBaseVRHandAttachment::Spawn(CBaseVRHandAttachment *const this, const CEntityKeyValues *pKeyValues)
{
  CBaseModelEntity::NetworkVar_m_Collision *p_m_Collision; // rbx

  p_m_Collision = &this->m_Collision;
  CBaseAnimating::Spawn(this, pKeyValues);
  CCollisionProperty::EnableInteractsAsMask(p_m_Collision, &stru_1800000);
  CCollisionProperty::EnableInteractsExcludeMask(p_m_Collision, &stru_1800000);
}


// CBaseVRHandAttachment::AttachSwapHand  (line 53, @0x000000000214ebc0, libserver.so)  // inlines: CEntityHandle, GetEHandle, GetEntityIdentity, GetEntryIndex, GetHandleEntity, GetInstance, GetSerialNumber, IndexToIdentity, Init, IsValid, LookupEntity, NetworkStateChanged, Set, operator CPropVRHand*, operator!=, operator=
// callers: CPropVRHand::SwapLogicalAttachmentsWith
// globals: CEntityHandle::gm_pEntityList
void __fastcall CBaseVRHandAttachment::AttachSwapHand(
        CBaseVRHandAttachment *const this,
        CPropVRHand *pFromVRHand,
        CPropVRHand *pVRHand)
{
  CPropVRHand *m_pInstance; // rcx
  uint32 m_Index; // eax
  CEntityIdentity *v8; // rdx
  CEntityIdentity *v9; // rdx
  uint32 v10; // ecx
  int (*v11)(...); // r8
  unsigned __int16 v12; // dx
  int v13; // esi
  int v14; // eax
  CEntityInstance *v15; // rdx
  CEntityIdentity *v16; // rcx
  CEntityIdentity *v17; // rcx
  CEntityIdentity *m_pEntity; // rax
  __int16 v19; // dx
  uint32 v20; // eax
  int (**v21)(...); // rdx
  int (**vptr_IHandleEntity)(...); // rax

  m_pInstance = 0;
  m_Index = this->m_hAttachedHand.m_Value.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hAttachedHand.m_Value.m_Index) >> 9) & 0x3F];
    if ( v8 != 0 )
    {
      v9 = &v8[this->m_hAttachedHand.m_Value.m_Index & 0x1FF];
      if ( v9 != 0 && m_Index == v9->m_EHandle.m_Index )
        m_pInstance = v9->m_pInstance;
    }
  }
  if ( pVRHand != m_pInstance )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1216, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    if ( pVRHand == 0 || (m_pEntity = pVRHand->m_pEntity) == 0 )
    {
      vptr_IHandleEntity = this->_vptr_IHandleEntity;
      v10 = 0x1FFFF;
      v12 = 0x7FFF;
      this->m_hAttachedHand.m_Value.m_Index = -1;
      v13 = 0x7FFF;
      v11 = vptr_IHandleEntity[262];
      goto LABEL_9;
    }
    if ( m_pEntity->m_EHandle.m_Index == -1 )
      v19 = 0x7FFF;
    else
      v19 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    v10 = ((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) & 0x1FFFF;
    LOWORD(this->m_hAttachedHand.m_Value.m_Index) = v19 | this->m_hAttachedHand.m_Value.m_Index & 0x8000;
    v20 = (v10 << 15) | this->m_hAttachedHand.m_Value.m_Index & 0x7FFF;
    v21 = this->_vptr_IHandleEntity;
    this->m_hAttachedHand.m_Value.m_Index = v20;
    v11 = v21[262];
    if ( v20 != -1 )
      goto LABEL_8;
LABEL_20:
    v12 = 0x7FFF;
    v13 = 0x7FFF;
    goto LABEL_9;
  }
  v10 = this->m_hAttachedHand.m_Value.m_Index >> 15;
  v11 = this->_vptr_IHandleEntity[262];
  if ( m_Index == -1 )
    goto LABEL_20;
LABEL_8:
  v12 = this->m_hAttachedHand.m_Value.m_Index & 0x7FFF;
  v13 = v12;
LABEL_9:
  v14 = (v10 << 15) | v12 & 0x7FFF;
  v15 = 0;
  if ( (v14 + 2) > 1 )
  {
    v16 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v13 >> 9];
    if ( v16 != 0 )
    {
      v17 = &v16[v13 & 0x1FF];
      if ( v17 != 0 && v14 == v17->m_EHandle.m_Index )
        v15 = v17->m_pInstance;
    }
  }
  v11(this, pFromVRHand, v15);
}


// CBaseVRHandAttachment::AttachToHand  (line 62, @0x000000000214ef60, libserver.so)  // inlines: CEntityHandle, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetHandleEntity, GetInstance, GetSerialNumber, IndexToIdentity, Init, IsValid, LookupEntity, NetworkStateChanged, Set, operator CPropVRHand*, operator!=, operator=, operator=<bool>
// calls: CBaseVRHandAttachment::DetachFromHand
// callers: CPropVRHand::AddHandAttachment
// globals: CEntityHandle::gm_pEntityList
void __fastcall CBaseVRHandAttachment::AttachToHand(CBaseVRHandAttachment *const this, CPropVRHand *pVRHand)
{
  bool m_Value; // dl
  uint32 m_Index; // eax
  CPropVRHand *m_pInstance; // rcx
  CEntityIdentity *v7; // rdx
  CEntityIdentity *v8; // rdx
  uint32 v9; // ecx
  int (*v10)(...); // r8
  unsigned __int16 v11; // dx
  int v12; // esi
  __int16 v13; // ax
  CEntityInstance *v14; // rdx
  int v15; // eax
  CEntityIdentity *v16; // rcx
  CEntityIdentity *v17; // rcx
  uint32 v18; // esi
  unsigned __int16 v19; // cx
  int v20; // edi
  int v21; // eax
  CEntityIdentity *v22; // rcx
  CEntityIdentity *v23; // rcx
  CEntityIdentity *m_pEntity; // rax
  __int16 v25; // dx
  uint32 v26; // eax
  int (**v27)(...); // rdx
  int (**vptr_IHandleEntity)(...); // rax
  __int16 v29; // [rsp+0h] [rbp-30h]

  m_Value = this->m_bIsAttached.m_Value;
  if ( !m_Value )
    goto LABEL_2;
  v18 = this->m_hAttachedHand.m_Value.m_Index >> 15;
  if ( this->m_hAttachedHand.m_Value.m_Index == -1 )
  {
    v19 = 0x7FFF;
    v20 = 0x7FFF;
  }
  else
  {
    v19 = this->m_hAttachedHand.m_Value.m_Index & 0x7FFF;
    v20 = v19;
  }
  v21 = (v18 << 15) | v19 & 0x7FFF;
  v29 = (v18 << 15) | v19 & 0x7FFF;
  if ( (v21 + 2) > 1 )
  {
    v22 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v20 >> 9];
    if ( v22 != 0 )
    {
      v23 = &v22[v20 & 0x1FF];
      if ( v23 != 0 && v21 == v23->m_EHandle.m_Index && v23->m_pInstance != 0 && pVRHand != v23->m_pInstance )
      {
        CBaseVRHandAttachment::DetachFromHand(this);
        m_Value = this->m_bIsAttached.m_Value;
      }
    }
  }
  if ( !m_Value )
  {
LABEL_2:
    (*(this->_vptr_IHandleEntity + 22))(this, 1220, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bIsAttached.m_Value = 1;
  }
  m_Index = this->m_hAttachedHand.m_Value.m_Index;
  m_pInstance = 0;
  if ( m_Index + 2 > 1 )
  {
    v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hAttachedHand.m_Value.m_Index) >> 9) & 0x3F];
    if ( v7 != 0 )
    {
      v8 = &v7[this->m_hAttachedHand.m_Value.m_Index & 0x1FF];
      if ( v8 != 0 && m_Index == v8->m_EHandle.m_Index )
        m_pInstance = v8->m_pInstance;
    }
  }
  if ( pVRHand != m_pInstance )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1216, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    if ( pVRHand == 0 || (m_pEntity = pVRHand->m_pEntity) == 0 )
    {
      vptr_IHandleEntity = this->_vptr_IHandleEntity;
      v9 = 0x1FFFF;
      v11 = 0x7FFF;
      this->m_hAttachedHand.m_Value.m_Index = -1;
      v12 = 0x7FFF;
      v10 = vptr_IHandleEntity[262];
      goto LABEL_11;
    }
    if ( m_pEntity->m_EHandle.m_Index == -1 )
      v25 = 0x7FFF;
    else
      v25 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    v9 = ((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) & 0x1FFFF;
    LOWORD(this->m_hAttachedHand.m_Value.m_Index) = v25 | this->m_hAttachedHand.m_Value.m_Index & 0x8000;
    v26 = (v9 << 15) | this->m_hAttachedHand.m_Value.m_Index & 0x7FFF;
    v27 = this->_vptr_IHandleEntity;
    this->m_hAttachedHand.m_Value.m_Index = v26;
    v10 = v27[262];
    if ( v26 != -1 )
      goto LABEL_10;
LABEL_30:
    v11 = 0x7FFF;
    v12 = 0x7FFF;
    goto LABEL_11;
  }
  v9 = this->m_hAttachedHand.m_Value.m_Index >> 15;
  v10 = this->_vptr_IHandleEntity[262];
  if ( m_Index == -1 )
    goto LABEL_30;
LABEL_10:
  v11 = this->m_hAttachedHand.m_Value.m_Index & 0x7FFF;
  v12 = v11;
LABEL_11:
  v13 = v11 | v29 & 0x8000;
  v14 = 0;
  v15 = (v9 << 15) | v13 & 0x7FFF;
  if ( (v15 + 2) > 1 )
  {
    v16 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v12 >> 9];
    if ( v16 != 0 )
    {
      v17 = &v16[v12 & 0x1FF];
      if ( v17 != 0 && v15 == v17->m_EHandle.m_Index )
        v14 = v17->m_pInstance;
    }
  }
  v10(this, 0, v14);
}


// CBaseVRHandAttachment::DetachFromHand  (line 78, @0x000000000214edd0, libserver.so)  // inlines: CEntityHandle, Get, GetEntityIdentity, GetEntryIndex, GetHandleEntity, GetInstance, GetSerialNumber, IndexToIdentity, Init, IsValid, LookupEntity, NetworkStateChanged, Set, operator!=, operator=, operator=<bool>
// callers: CBaseVRHandAttachment::AttachToHand, CPropVRHand::UpdateOnRemove, CPropVRHand::FindAndRemoveHandAttachmentInternal, CPropVRHand::ScriptRemoveHandModelOverride, CPropVRHand::ScriptRemoveAllHandModelOverrides, CPropVRHand::ScriptSetHandAttachment
// globals: CEntityHandle::gm_pEntityList
void __fastcall CBaseVRHandAttachment::DetachFromHand(CBaseVRHandAttachment *const this)
{
  unsigned __int16 v2; // dx
  int v3; // esi
  CEntityInstance *m_pInstance; // r12
  uint32 v5; // eax
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  uint32 m_Index; // eax
  CEntityIdentity *v9; // rdx
  CEntityIdentity *v10; // rdx

  if ( this->m_bIsAttached.m_Value )
  {
    if ( this->m_hAttachedHand.m_Value.m_Index == -1 )
    {
      v2 = 0x7FFF;
      v3 = 0x7FFF;
    }
    else
    {
      v2 = this->m_hAttachedHand.m_Value.m_Index & 0x7FFF;
      v3 = v2;
    }
    m_pInstance = 0;
    v5 = (this->m_hAttachedHand.m_Value.m_Index >> 15 << 15) | v2 & 0x7FFF;
    if ( v5 + 2 > 1 )
    {
      v6 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v3 >> 9];
      if ( v6 != 0 )
      {
        v7 = &v6[v3 & 0x1FF];
        if ( v7 != 0 && v5 == v7->m_EHandle.m_Index )
          m_pInstance = v7->m_pInstance;
      }
    }
    (*(this->_vptr_IHandleEntity + 22))(this, 1220, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    m_Index = this->m_hAttachedHand.m_Value.m_Index;
    this->m_bIsAttached.m_Value = 0;
    if ( m_Index + 2 > 1 )
    {
      v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hAttachedHand.m_Value.m_Index) >> 9) & 0x3F];
      if ( v9 != 0 )
      {
        v10 = &v9[this->m_hAttachedHand.m_Value.m_Index & 0x1FF];
        if ( v10 != 0 && m_Index == v10->m_EHandle.m_Index && v10->m_pInstance != 0 )
        {
          (*(this->_vptr_IHandleEntity + 22))(this, 1216, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
          this->m_hAttachedHand.m_Value.m_Index = -1;
        }
      }
    }
    (*(this->_vptr_IHandleEntity + 263))(this, m_pInstance);
  }
}


// CBaseVRHandAttachment::SetActiveAttachment  (line 93, @0x000000000214f290, libserver.so)  // inlines: CEntityHandle, Get, GetEntryIndex, GetHandleEntity, GetInstance, GetSerialNumber, IndexToIdentity, Init, LookupEntity
// calls: CPropVRHand::SetActiveAttachment
void __fastcall CBaseVRHandAttachment::SetActiveAttachment(CBaseVRHandAttachment *const this, bool bActive)
{
  uint32 v3; // r8d
  unsigned __int16 v4; // di
  int v5; // r9d
  int v6; // eax
  CEntityIdentity *v7; // rdi
  CEntityIdentity *v8; // rdi
  CPropVRHand *m_pInstance; // rdi

  v3 = this->m_hAttachedHand.m_Value.m_Index >> 15;
  if ( this->m_hAttachedHand.m_Value.m_Index == -1 )
  {
    v4 = 0x7FFF;
    v5 = 0x7FFF;
  }
  else
  {
    v4 = this->m_hAttachedHand.m_Value.m_Index & 0x7FFF;
    v5 = v4;
  }
  v6 = (v3 << 15) | v4 & 0x7FFF;
  if ( (v6 + 2) > 1 )
  {
    v7 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v5 >> 9];
    if ( v7 != 0 )
    {
      v8 = &v7[v5 & 0x1FF];
      if ( v8 != 0 && v6 == v8->m_EHandle.m_Index )
      {
        m_pInstance = v8->m_pInstance;
        if ( m_pInstance != 0 )
          CPropVRHand::SetActiveAttachment(m_pInstance, this, bActive);
      }
    }
  }
}


// CBaseVRHandAttachment::UpdateOnRemove  (line 102, @0x0000000002144390, libserver.so)  // inlines: CEntityHandle, Get, GetEntryIndex, GetHandleEntity, GetInstance, GetSerialNumber, IndexToIdentity, Init, LookupEntity
// calls: CBaseAnimating::UpdateOnRemove, CPropVRHand::FindAndRemoveHandAttachment
void __fastcall CBaseVRHandAttachment::UpdateOnRemove(CBaseVRHandAttachment *const this)
{
  unsigned __int16 v2; // dx
  int v3; // esi
  uint32 v4; // eax
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx

  CBaseAnimating::UpdateOnRemove(this);
  if ( this->m_hAttachedHand.m_Value.m_Index == -1 )
  {
    v2 = 0x7FFF;
    v3 = 0x7FFF;
  }
  else
  {
    v2 = this->m_hAttachedHand.m_Value.m_Index & 0x7FFF;
    v3 = v2;
  }
  v4 = (this->m_hAttachedHand.m_Value.m_Index >> 15 << 15) | v2 & 0x7FFF;
  if ( v4 + 2 > 1 )
  {
    v5 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v3 >> 9];
    if ( v5 != 0 )
    {
      v6 = &v5[v3 & 0x1FF];
      if ( v6 != 0 && v4 == v6->m_EHandle.m_Index && v6->m_pInstance != 0 )
        CPropVRHand::FindAndRemoveHandAttachment(v6->m_pInstance, this);
    }
  }
}


// CBaseVRHandAttachment::UpdateTransmitState  (line 114, @0x000000000213df40, libserver.so)
// calls: CBaseEntity::SetTransmitState
int __fastcall CBaseVRHandAttachment::UpdateTransmitState(CBaseVRHandAttachment *const this)
{
  return CBaseEntity::SetTransmitState(this, 4);
}


// CBaseVRHandAttachment::UpdatePose  (line 174, @0x000000000213ef10, libserver.so)
// calls: UTIL_ApplyLocalAttachmentInvTransform, CBaseEntity::SetAbsOrigin, CBaseEntity::SetAbsAngles, CBaseModelEntity::SetRenderAlpha
// callers: CVRHandModelOverride::UpdatePose
// strings: "vr_controller_root"
void __fastcall CBaseVRHandAttachment::UpdatePose(
        CBaseVRHandAttachment *const this,
        const Vector *const vOrigin,
        const QAngle *const qAngles,
        float flModelScale)
{
  Vector vOriginAttachOffset; // [rsp+0h] [rbp-40h] BYREF
  QAngle qAnglesAttachOffset; // [rsp+10h] [rbp-30h] BYREF

  vOriginAttachOffset = *vOrigin;
  qAnglesAttachOffset = *qAngles;
  UTIL_ApplyLocalAttachmentInvTransform(this, &vOriginAttachOffset, &qAnglesAttachOffset, "vr_controller_root");
  CBaseEntity::SetAbsOrigin(this, &vOriginAttachOffset);
  CBaseEntity::SetAbsAngles(this, &qAnglesAttachOffset);
  CBaseModelEntity::SetRenderAlpha(this, 0xFFu);
}


// CBaseVRHandAttachment::OnAttachedToHand  (line 187, @0x0000000002171f50, libserver.so)  // inlines: Attribute_SetEHandleValue, CEntityHandle, CThreadFastMutex, CUtlIntrusiveList, CUtlTSOpenHash, CUtlTSOpenHashConcurrencyModelLockFree, GetEHandle, GetEntityAttributes, GetEntryIndex, GetSerialNumber, Init, SetIntValue, SetValue<int>
// calls: CBaseEntity::SetParent, CBaseVRHandAttachment::GetPlayerOwner, CUtlTSOpenHash<unsigned int, unsigned int, 64, CUtlMaskedIntHashMethod, CUtlTSOpenHashConcurrencyModelLockFree>::Insert, operator new
void __fastcall CBaseVRHandAttachment::OnAttachedToHand(
        CBaseVRHandAttachment *const this,
        CPropVRHand *pFromVRHand,
        CPropVRHand *pVRHand)
{
  CBasePlayer *PlayerOwner; // rax
  unsigned int v5; // edx
  CEntityIdentity *m_pEntity; // rcx
  __int16 v7; // si
  CEntityIdentity *v8; // rbx
  CUtlObjectAttributeTable<CEntityIdentity,CUtlStringToken> *m_pAttributes; // rdi
  CUtlObjectAttributeTable<CEntityIdentity,CUtlStringToken> *v10; // rax
  unsigned int v11; // [rsp+Ch] [rbp-24h]

  CBaseEntity::SetParent(this, pVRHand, 0, 0);
  PlayerOwner = CBaseVRHandAttachment::GetPlayerOwner(this);
  v5 = -1;
  if ( PlayerOwner != 0 )
  {
    m_pEntity = PlayerOwner->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v7 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v7 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      v5 = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v7 & 0x7FFF;
    }
  }
  v8 = this->m_pEntity;
  m_pAttributes = v8->m_pAttributes;
  if ( m_pAttributes == 0 )
  {
    v11 = v5;
    v10 = operator new(0x38u);
    v5 = v11;
    v10->m_hashTable.m_tables.m_pHead = 0;
    m_pAttributes = v10;
    v10->m_hashTable.m_concurrencyModel.m_mutex.m_ownerID = 0;
    v10->m_hashTable.m_concurrencyModel.m_mutex.m_depth = 0;
    v10->m_hashTable.m_nNumKeysDeleted = 0;
    v10->m_hashTable.m_nCurrentTableSize = 64;
    v10->m_hashTable.m_nDeletedKeyValue = -1;
    v10->m_hashTable.m_nEmptyKeyValue = -2;
    v10->m_pParentTable = 0;
    v8->m_pAttributes = v10;
  }
  CUtlTSOpenHash<unsigned int,unsigned int,64,CUtlMaskedIntHashMethod,CUtlTSOpenHashConcurrencyModelLockFree>::Insert(
    &m_pAttributes->m_hashTable,
    0x1859D24u,
    v5,
    0);
}


// CBaseVRHandAttachment::OnDetachedFromHand  (line 195, @0x0000000002142090, libserver.so)  // inlines: CThreadFastMutex, CUtlIntrusiveList, CUtlTSOpenHash, CUtlTSOpenHashConcurrencyModelLockFree, Compare, Delete, DeleteAttr, DeleteAttribute, FindEntry_Inline, GetEntityAttributes, Hash, Head, ThreadInterlockedCompareExchange
// calls: CBaseEntity::SetParent, operator new
void __fastcall CBaseVRHandAttachment::OnDetachedFromHand(CBaseVRHandAttachment *const this, CPropVRHand *pVRHand)
{
  CEntityIdentity *m_pEntity; // rbx
  CUtlObjectAttributeTable<CEntityIdentity,CUtlStringToken> *m_pAttributes; // rdi
  CUtlTSOpenHash<unsigned int,unsigned int,64,CUtlMaskedIntHashMethod,CUtlTSOpenHashConcurrencyModelLockFree>::HashTable_t *m_pHead; // rsi
  int i; // r10d
  int v7; // edx
  volatile signed __int32 *v8; // r8
  signed __int32 v9; // eax
  CUtlObjectAttributeTable<CEntityIdentity,CUtlStringToken> *v10; // rax

  CBaseEntity::SetParent(this, 0, 0, 0);
  m_pEntity = this->m_pEntity;
  m_pAttributes = m_pEntity->m_pAttributes;
  if ( m_pAttributes == 0 )
  {
    v10 = operator new(0x38u);
    v10->m_hashTable.m_tables.m_pHead = 0;
    m_pAttributes = v10;
    v10->m_hashTable.m_concurrencyModel.m_mutex.m_ownerID = 0;
    v10->m_hashTable.m_concurrencyModel.m_mutex.m_depth = 0;
    v10->m_hashTable.m_nNumKeysDeleted = 0;
    v10->m_hashTable.m_nCurrentTableSize = 64;
    v10->m_hashTable.m_nDeletedKeyValue = -1;
    v10->m_hashTable.m_nEmptyKeyValue = -2;
    v10->m_pParentTable = 0;
    m_pEntity->m_pAttributes = v10;
  }
  m_pHead = m_pAttributes->m_hashTable.m_tables.m_pHead;
  for ( i = m_pAttributes->m_hashTable.m_nCurrentTableSize - 1; m_pHead != 0; m_pHead = m_pHead->m_pNext )
  {
    v7 = i & 0x1859D24;
    do
    {
      v8 = &m_pHead->m_entries[v7];
      v9 = *v8;
      if ( ((*v8 ^ 0x1859D24) & 0x7FFFFFF) == 0 )
      {
        _InterlockedCompareExchange(v8, m_pAttributes->m_hashTable.m_nDeletedKeyValue, v9);
        return;
      }
      if ( v9 == m_pAttributes->m_hashTable.m_nEmptyKeyValue )
        break;
      v7 = i & (v7 + 1);
    }
    while ( (i & 0x1859D24) != v7 );
  }
}


// CBaseVRHandAttachment::SelectWeightedSequenceWithHandModifier  (line 203, @0x000000000214f350, libserver.so)  // inlines: CEntityHandle, CUtlSymbol, GetEntryIndex, GetHandleEntity, GetInstance, GetSerialNumber, IndexToIdentity, Init, LookupEntity, operator CPropVRHand*, operator=
// calls: CBaseAnimating::SelectWeightedSequenceFromModifiers, __cxa_guard_acquire, FindOrAddActivityModifier, __cxa_guard_release, __cxa_guard_abort, _Unwind_Resume, CPropVRHand::IsLiteralHand
// strings: "MOD_HAND_NONE", "MOD_HAND_RIGHT", "MOD_HAND_LEFT"
// globals: `guard variable for'CBaseVRHandAttachment::SelectWeightedSequenceWithHandModifier(int)::MOD_HAND_LEFT, `guard variable for'CBaseVRHandAttachment::SelectWeightedSequenceWithHandModifier(int)::MOD_HAND_RIGHT, `guard variable for'CBaseVRHandAttachment::SelectWeightedSequenceWithHandModifier(int)::MOD_HAND_NONE, CBaseVRHandAttachment::SelectWeightedSequenceWithHandModifier(int)::MOD_HAND_NONE, CBaseVRHandAttachment::SelectWeightedSequenceWithHandModifier(int)::MOD_HAND_RIGHT, CBaseVRHandAttachment::SelectWeightedSequenceWithHandModifier(int)::MOD_HAND_LEFT
HSequence __fastcall CBaseVRHandAttachment::SelectWeightedSequenceWithHandModifier(
        const CBaseVRHandAttachment *const this,
        Activity activity)
{
  uint32 m_Index; // ecx
  uint32 v5; // ecx
  unsigned __int16 v6; // dx
  int v7; // esi
  int v8; // eax
  CEntityIdentity *v9; // rdx
  CEntityIdentity *v10; // rdx
  CUtlSymbol handModifier; // [rsp+0h] [rbp-30h] BYREF
  int v13; // [rsp+10h] [rbp-20h]

  if ( `guard variable for'CBaseVRHandAttachment::SelectWeightedSequenceWithHandModifier(int)::MOD_HAND_LEFT == 0
    && __cxa_guard_acquire(&`guard variable for'CBaseVRHandAttachment::SelectWeightedSequenceWithHandModifier(int)::MOD_HAND_LEFT) != 0 )
  {
    FindOrAddActivityModifier("MOD_HAND_LEFT");
    __cxa_guard_release(&`guard variable for'CBaseVRHandAttachment::SelectWeightedSequenceWithHandModifier(int)::MOD_HAND_LEFT);
  }
  if ( `guard variable for'CBaseVRHandAttachment::SelectWeightedSequenceWithHandModifier(int)::MOD_HAND_RIGHT == 0
    && __cxa_guard_acquire(&`guard variable for'CBaseVRHandAttachment::SelectWeightedSequenceWithHandModifier(int)::MOD_HAND_RIGHT) != 0 )
  {
    FindOrAddActivityModifier("MOD_HAND_RIGHT");
    __cxa_guard_release(&`guard variable for'CBaseVRHandAttachment::SelectWeightedSequenceWithHandModifier(int)::MOD_HAND_RIGHT);
  }
  if ( `guard variable for'CBaseVRHandAttachment::SelectWeightedSequenceWithHandModifier(int)::MOD_HAND_NONE == 0
    && __cxa_guard_acquire(&`guard variable for'CBaseVRHandAttachment::SelectWeightedSequenceWithHandModifier(int)::MOD_HAND_NONE) != 0 )
  {
    FindOrAddActivityModifier("MOD_HAND_NONE");
    __cxa_guard_release(&`guard variable for'CBaseVRHandAttachment::SelectWeightedSequenceWithHandModifier(int)::MOD_HAND_NONE);
  }
  m_Index = this->m_hAttachedHand.m_Value.m_Index;
  handModifier.m_Id = -1;
  v5 = m_Index >> 15;
  if ( this->m_hAttachedHand.m_Value.m_Index == -1 )
  {
    v6 = 0x7FFF;
    v7 = 0x7FFF;
  }
  else
  {
    v6 = this->m_hAttachedHand.m_Value.m_Index & 0x7FFF;
    v7 = v6;
  }
  v8 = (v5 << 15) | v6 & 0x7FFF;
  v13 = v8;
  if ( (v8 + 2) > 1
    && (v9 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v7 >> 9]) != 0
    && (v10 = &v9[v7 & 0x1FF]) != 0
    && v8 == v10->m_EHandle.m_Index
    && v10->m_pInstance != 0 )
  {
    if ( CPropVRHand::IsLiteralHand(v10->m_pInstance, eLiteralHandType::LITERAL_HAND_TYPE_LEFT) )
      handModifier.m_Id = CBaseVRHandAttachment::SelectWeightedSequenceWithHandModifier(int)const::MOD_HAND_LEFT.m_Id;
    else
      handModifier.m_Id = CBaseVRHandAttachment::SelectWeightedSequenceWithHandModifier(int)const::MOD_HAND_RIGHT.m_Id;
  }
  else
  {
    handModifier.m_Id = CBaseVRHandAttachment::SelectWeightedSequenceWithHandModifier(int)const::MOD_HAND_NONE.m_Id;
  }
  return CBaseAnimating::SelectWeightedSequenceFromModifiers(this, activity, &handModifier, 1);
}


// CBaseVRHandAttachment::AttachmentThink  (line 229, @0x000000000213ce40, libserver.so)
void __fastcall CBaseVRHandAttachment::AttachmentThink(
        CBaseVRHandAttachment *const this,
        attachment_input_state_t *pInput)
{
  ;
}


// CBaseVRHandAttachment::IsAttachedToAnyHand  (line 275, @0x000000000214f590, libserver.so)
bool __fastcall CBaseVRHandAttachment::IsAttachedToAnyHand(CBaseVRHandAttachment *const this)
{
  return this->m_bIsAttached.m_Value;
}


// CBaseVRHandAttachment::IsAttachedToHand  (line 282, @0x000000000214f5a0, libserver.so)  // inlines: CEntityHandle, Get, GetEntryIndex, GetHandleEntity, GetInstance, GetSerialNumber, IndexToIdentity, Init, LookupEntity
bool __fastcall CBaseVRHandAttachment::IsAttachedToHand(CBaseVRHandAttachment *const this, CPropVRHand *pVRHand)
{
  uint32 v2; // ecx
  unsigned __int16 v3; // dx
  int v4; // edi
  __int16 v5; // ax
  uint32 v6; // edx
  CPropVRHand *m_pInstance; // rcx
  int v8; // eax
  CEntityIdentity *v9; // rdx
  CEntityIdentity *v10; // rdx
  __int16 v12; // [rsp+0h] [rbp-10h]

  v2 = this->m_hAttachedHand.m_Value.m_Index >> 15;
  if ( this->m_hAttachedHand.m_Value.m_Index == -1 )
  {
    v3 = 0x7FFF;
    v4 = 0x7FFF;
  }
  else
  {
    v3 = this->m_hAttachedHand.m_Value.m_Index & 0x7FFF;
    v4 = v3;
  }
  v5 = v3 | v12 & 0x8000;
  v6 = v2;
  m_pInstance = 0;
  v8 = (v6 << 15) | v5 & 0x7FFF;
  if ( (v8 + 2) > 1 )
  {
    v9 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v4 >> 9];
    if ( v9 != 0 )
    {
      v10 = &v9[v4 & 0x1FF];
      if ( v10 != 0 && v8 == v10->m_EHandle.m_Index )
        m_pInstance = v10->m_pInstance;
    }
  }
  return pVRHand == m_pInstance;
}


// CBaseVRHandAttachment::GetAttachedHand  (line 289, @0x000000000214f660, libserver.so)  // inlines: CEntityHandle, Get, GetEntryIndex, GetHandleEntity, GetInstance, GetSerialNumber, IndexToIdentity, Init, LookupEntity
CPropVRHand *__fastcall CBaseVRHandAttachment::GetAttachedHand(const CBaseVRHandAttachment *const this)
{
  unsigned __int16 v1; // dx
  int v2; // esi
  uint32 v3; // edx
  CPropVRHand *result; // rax
  CEntityIdentity *v5; // rcx
  CEntityIdentity *v6; // rcx

  if ( this->m_hAttachedHand.m_Value.m_Index == -1 )
  {
    v1 = 0x7FFF;
    v2 = 0x7FFF;
  }
  else
  {
    v1 = this->m_hAttachedHand.m_Value.m_Index & 0x7FFF;
    v2 = v1;
  }
  v3 = (this->m_hAttachedHand.m_Value.m_Index >> 15 << 15) | v1 & 0x7FFF;
  result = 0;
  if ( v3 + 2 > 1 )
  {
    v5 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v2 >> 9];
    if ( v5 != 0 )
    {
      v6 = &v5[v2 & 0x1FF];
      if ( v6 != 0 && v3 == v6->m_EHandle.m_Index )
        return v6->m_pInstance;
    }
  }
  return result;
}


// CBaseVRHandAttachment::GetPlayerOwner  (line 295, @0x000000000214f710, libserver.so)  // inlines: CEntityHandle, Get, GetEntryIndex, GetHandleEntity, GetInstance, GetSerialNumber, IndexToIdentity, Init, LookupEntity
// callers: CBaseVRHandAttachment::OnAttachedToHand
CBasePlayer *__fastcall CBaseVRHandAttachment::GetPlayerOwner(const CBaseVRHandAttachment *const this)
{
  unsigned __int16 v1; // dx
  int v2; // esi
  uint32 v3; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx

  if ( this->m_hAttachedHand.m_Value.m_Index == -1 )
  {
    v1 = 0x7FFF;
    v2 = 0x7FFF;
  }
  else
  {
    v1 = this->m_hAttachedHand.m_Value.m_Index & 0x7FFF;
    v2 = v1;
  }
  v3 = (this->m_hAttachedHand.m_Value.m_Index >> 15 << 15) | v1 & 0x7FFF;
  if ( v3 + 2 > 1
    && (v4 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v2 >> 9]) != 0
    && (v5 = &v4[v2 & 0x1FF]) != 0
    && v3 == v5->m_EHandle.m_Index
    && v5->m_pInstance != 0 )
  {
    return (*(v5->m_pInstance->_vptr_IHandleEntity + 261))(v5->m_pInstance);
  }
  else
  {
    return 0;
  }
}


// CBaseVRHandAttachment::IsActiveAttachment  (line 304, @0x000000000214f7d0, libserver.so)  // inlines: CEntityHandle, Get, GetEntryIndex, GetHandleEntity, GetInstance, GetSerialNumber, IndexToIdentity, Init, LookupEntity
// callers: CPropVRHand::DrawDebugTextOverlays
bool __fastcall CBaseVRHandAttachment::IsActiveAttachment(const CBaseVRHandAttachment *const this)
{
  unsigned __int16 v1; // dx
  int v2; // esi
  uint32 v3; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  bool result; // al

  if ( this->m_hAttachedHand.m_Value.m_Index == -1 )
  {
    v1 = 0x7FFF;
    v2 = 0x7FFF;
  }
  else
  {
    v1 = this->m_hAttachedHand.m_Value.m_Index & 0x7FFF;
    v2 = v1;
  }
  v3 = (this->m_hAttachedHand.m_Value.m_Index >> 15 << 15) | v1 & 0x7FFF;
  if ( v3 + 2 <= 1 )
    return 0;
  v4 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v2 >> 9];
  if ( v4 == 0 )
    return 0;
  v5 = &v4[v2 & 0x1FF];
  if ( v5 == 0 || v3 != v5->m_EHandle.m_Index )
    return 0;
  result = 0;
  if ( v5->m_pInstance != 0 )
    return this == (*(v5->m_pInstance->_vptr_IHandleEntity + 263))(v5->m_pInstance);
  return result;
}


// CalculateRadiusFromOBB  (line 314, @0x000000000214f8a0, libserver.so)  // inlines: FastSqrt, Length, Max<float>, VectorLength, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, abs<float>, operator-
// callers: CBaseVRHandAttachment::CalculateCollisionRadius
float __fastcall CalculateRadiusFromOBB(CBaseModelEntity *pEntity, bool bAsSphere)
{
  CBaseModelEntity::NetworkVar_m_Collision *p_m_Collision; // r13
  float *v5; // r12
  float *v6; // rax
  float v7; // xmm0_4
  float v8; // xmm2_4
  float v9; // xmm1_4
  float v10; // xmm2_4

  p_m_Collision = &pEntity->m_Collision;
  v5 = (*(pEntity->m_Collision._vptr_ICollideable + 1))(&pEntity->m_Collision);
  v6 = (*(pEntity->m_Collision._vptr_ICollideable + 2))(p_m_Collision);
  v7 = *v6 - *v5;
  v8 = v6[1] - v5[1];
  v9 = v6[2] - v5[2];
  if ( bAsSphere )
  {
    if ( v9 < 0.0 )
    {
      v9 = -v9;
      if ( v8 >= 0.0 )
      {
LABEL_4:
        v10 = fmaxf(v8, v9);
        if ( v7 >= 0.0 )
          return fmaxf(v7, v10) * 0.5;
LABEL_7:
        v7 = -v7;
        return fmaxf(v7, v10) * 0.5;
      }
    }
    else if ( v8 >= 0.0 )
    {
      goto LABEL_4;
    }
    v10 = fmaxf(-v8, v9);
    if ( v7 >= 0.0 )
      return fmaxf(v7, v10) * 0.5;
    goto LABEL_7;
  }
  return fsqrt(((v7 * v7) + (v8 * v8)) + (v9 * v9)) * 0.5;
}


// CBaseVRHandAttachment::CalculateCollisionRadius  (line 331, @0x000000000214f9b0, libserver.so)
// calls: CalculateRadiusFromOBB
float __fastcall CBaseVRHandAttachment::CalculateCollisionRadius(CBaseVRHandAttachment *const this, bool bAsSphere)
{
  return CalculateRadiusFromOBB(this, bAsSphere);
}


