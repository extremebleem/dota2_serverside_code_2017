// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/prop_vr_hand.cpp:35
class C_CPropVRHand_MapInstall {
	C_CPropVRHand_MapInstall();

	// sizeof = 1
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CPropVRHand::YouForgotToImplementOrDeclareServerClass  (line 35, @0x000000000234ad10, libserver.so)
int __fastcall CPropVRHand::YouForgotToImplementOrDeclareServerClass(CPropVRHand *const this)
{
  return 0;
}


// CPropVRHand::GetServerClass  (line 35, @0x0000000002351e50, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CPropVRHand::GetServerClass(CPropVRHand *const this)
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


// CPropVRHand::GetDataDescMap  (line 75, @0x000000000234ad20, libserver.so)
// globals: CPropVRHand::m_DataMap
datamap_t *__fastcall CPropVRHand::GetDataDescMap(CPropVRHand *const this)
{
  return &CPropVRHand::m_DataMap;
}


// CPropVRHand::AddDatadescMetadataKeys  (line 75, @0x0000000002357c60, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CPropVRHand::GetEntityClass(void)
void __fastcall CPropVRHand::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CPropVRHand::GetEntityClass);
}


// CPropVRHand::GetBaseMap  (line 75, @0x0000000002357c80, libserver.so)
// globals: CPropVRTrackedObject::m_DataMap
datamap_t *__cdecl CPropVRHand::GetBaseMap()
{
  return &CPropVRTrackedObject::m_DataMap;
}


// DataMapInit<CPropVRHand>  (line 75, @0x0000000002357c90, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase, CUtlVectorDataOps, GetDataOps<CNetworkUtlVectorBase<CHandle<CBaseVRHandAttachment>, CPropVRHand::NetworkVar_m_hAttachments> >
// calls: AddDatadescMetadataKeys, __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_10.cpp
// strings: "CPropVRHand"
// globals: `guard variable for'DataMapInit<CPropVRHand>(CPropVRHand *)::nameHolder, `guard variable for'DataMapInit<CPropVRHand>(CPropVRHand *)::dataDesc, CPropVRTrackedObject::m_DataMap, CPropVRHand::GetEntityClass(void), CPropVRHand::m_DataMap, `guard variable for'CUtlVectorDataopsInstantiator<13>::GetDataOps<CNetworkUtlVectorBase<CHandle<CBaseVRHandAttachment>,CPropVRHand::NetworkVar_m_hAttachments,-1, CUtlVectorDataopsInstantiator<13>::GetDataOps<CNetworkUtlVectorBase<CHandle<CBaseVRHandAttachment>,CPropVRHand::NetworkVar_m_hAttachments,-1>>(CNetworkUtlVector, DataMapInit<CPropVRHand>(CPropVRHand *)::nameHolder (10 total)
datamap_t *__fastcall DataMapInit<CPropVRHand>(CPropVRHand *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CPropVRHand>(CPropVRHand *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CPropVRHand>(CPropVRHand *)::nameHolder) != 0 )
  {
    DataMapInit<CPropVRHand>(CPropVRHand *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CPropVRHand>(CPropVRHand *)::nameHolder.m_pszBase = "CPropVRHand";
    DataMapInit<CPropVRHand>(CPropVRHand *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CPropVRHand>(CPropVRHand *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CPropVRHand>(CPropVRHand *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CPropVRHand>(CPropVRHand *)::nameHolder.m_nLenBase = 11;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CPropVRHand>(CPropVRHand *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CPropVRHand>(CPropVRHand *)::nameHolder,
      &_dso_handle);
  }
  CPropVRHand::m_DataMap.baseMap = &CPropVRTrackedObject::m_DataMap;
  if ( `guard variable for'datamap_t * DataMapInit<CPropVRHand>(CPropVRHand *)::dataDesc == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CPropVRHand>(CPropVRHand *)::dataDesc) != 0 )
  {
    if ( `guard variable for'ISaveRestoreOps * CUtlVectorDataopsInstantiator<13>::GetDataOps<CNetworkUtlVectorBase<CHandle<CBaseVRHandAttachment>,CPropVRHand::NetworkVar_m_hAttachments,-1>>(CNetworkUtlVectorBase<CHandle<CBaseVRHandAttachment>,CPropVRHand::NetworkVar_m_hAttachments,-1> *)::ops == 0
      && __cxa_guard_acquire(&`guard variable for'ISaveRestoreOps * CUtlVectorDataopsInstantiator<13>::GetDataOps<CNetworkUtlVectorBase<CHandle<CBaseVRHandAttachment>,CPropVRHand::NetworkVar_m_hAttachments,-1>>(CNetworkUtlVectorBase<CHandle<CBaseVRHandAttachment>,CPropVRHand::NetworkVar_m_hAttachments,-1> *)::ops) != 0 )
    {
      CUtlVectorDataopsInstantiator<13>::GetDataOps<CNetworkUtlVectorBase<CHandle<CBaseVRHandAttachment>,CPropVRHand::NetworkVar_m_hAttachments,-1>>(CNetworkUtlVectorBase<CHandle<CBaseVRHandAttachment>,CPropVRHand::NetworkVar_m_hAttachments,-1> *)::ops = off_40A37D0;
      __cxa_guard_release(&`guard variable for'ISaveRestoreOps * CUtlVectorDataopsInstantiator<13>::GetDataOps<CNetworkUtlVectorBase<CHandle<CBaseVRHandAttachment>,CPropVRHand::NetworkVar_m_hAttachments,-1>>(CNetworkUtlVectorBase<CHandle<CBaseVRHandAttachment>,CPropVRHand::NetworkVar_m_hAttachments,-1> *)::ops);
    }
    DataMapInit<CPropVRHand>(CPropVRHand *)::dataDesc[3].pSaveRestoreOps = &CUtlVectorDataopsInstantiator<13>::GetDataOps<CNetworkUtlVectorBase<CHandle<CBaseVRHandAttachment>,CPropVRHand::NetworkVar_m_hAttachments,-1>>(CNetworkUtlVectorBase<CHandle<CBaseVRHandAttachment>,CPropVRHand::NetworkVar_m_hAttachments,-1> *)::ops;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CPropVRHand>(CPropVRHand *)::dataDesc);
  }
  CPropVRHand::m_DataMap.dataNumFields = 17;
  CPropVRHand::m_DataMap.dataDesc = &DataMapInit<CPropVRHand>(CPropVRHand *)::dataDesc[1];
  AddDatadescMetadataKeys(&CPropVRHand::m_DataMap, CPropVRHand::GetEntityClass);
  return &CPropVRHand::m_DataMap;
}


// CPropVRHand::CPropVRHand  (line 244, @0x0000000002359900, libserver.so)  // inlines: CEntityHandle, CNetworkHandleBase, CNetworkUtlVectorBase, CNetworkUtlVector_MemoryType, CNetworkVarBase, CUtlMemory, CUtlVector, CUtlVectorBase, EnsureValidValue<eLiteralHandType>, NetworkStateChanged, Purge, RemoveAll, SetToIdentity, ~CInteractionManager, ~CNetworkUtlVectorBase, ~CNetworkUtlVector_MemoryType, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CPropVRTrackedObject::CPropVRTrackedObject, CBaseEntity::NetworkStateChanged, CInteractionManager::CInteractionManager, SetIdentityMatrix, CPropVRTrackedObject::~CPropVRTrackedObject, _Unwind_Resume, CUtlMemory<prevent_interaction_t, int>::Purge, CUtlMemory<CHandle<CBaseVRHandAttachment>, int>::Purge
// callers: CPropVRHand::CEntityInstanceEntityClass::ConstructInstance
void __fastcall CPropVRHand::CPropVRHand(CPropVRHand *const this)
{
  int (**vptr_IHandleEntity)(...); // rax
  int (**v3)(...); // rax
  int (**v4)(...); // rax
  int (**v5)(...); // rax
  int (**v6)(...); // rax
  int (**v7)(...); // rax
  int (**v8)(...); // rax

  CPropVRTrackedObject::CPropVRTrackedObject(this);
  this->_vptr_IHandleEntity = &off_4099F10;
  this->_vptr_IVRFlyListener = &off_409A798;
  this->m_hActiveHandAttachment.m_Value.m_Index = -1;
  this->m_hHMDAvatar.m_Value.m_Index = -1;
  this->m_hAttachments.m_Vector.m_Size = 0;
  this->m_hAttachments.m_Vector.m_Memory.m_pMemory = 0;
  this->m_hAttachments.m_Vector.m_Memory.m_nAllocationCount = 0;
  this->m_hAttachments.m_Vector.m_Memory.m_nGrowSize = 0;
  this->m_bInitialized.m_Value = 0;
  CBaseEntity::NetworkStateChanged(this, 0x550u, -1, -1);
  vptr_IHandleEntity = this->_vptr_IHandleEntity;
  this->m_bIsInView.m_Value = 0;
  vptr_IHandleEntity[22](this, 1361, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
  v3 = this->_vptr_IHandleEntity;
  this->m_nHandID.m_Value = -1;
  v3[22](this, 1364, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
  v4 = this->_vptr_IHandleEntity;
  this->m_flTriggerAnalogValue.m_Value = 0.0;
  v4[22](this, 1368, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
  v5 = this->_vptr_IHandleEntity;
  this->m_flGripAnalogValue.m_Value = -1.0;
  v5[22](this, 1372, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
  v6 = this->_vptr_IHandleEntity;
  this->m_flTrackpadOrJoystickAnalogValueX.m_Value = 0.0;
  v6[22](this, 1376, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
  v7 = this->_vptr_IHandleEntity;
  this->m_flTrackpadOrJoystickAnalogValueY.m_Value = 0.0;
  v7[22](this, 1380, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
  v8 = this->_vptr_IHandleEntity;
  this->m_bCanPerformUse.m_Value = 1;
  v8[22](this, 1384, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
  CInteractionManager::CInteractionManager(&this->m_InteractionMgr);
  this->m_nAttachUseIndex = 0;
  this->m_nAttachHoldIndex = 0;
  this->m_LiteralHandType.m_Value = eLiteralHandType::LITERAL_HAND_TYPE_RIGHT;
  SetIdentityMatrix(&this->m_matUseTransform);
  SetIdentityMatrix(&this->m_matHoldTransform);
}


// CPropVRHand::Spawn  (line 259, @0x0000000002359fa0, libserver.so)
// calls: CPropVRTrackedObject::Spawn, CBaseEntity::SetDamageOptions
void __fastcall CPropVRHand::Spawn(CPropVRHand *const this, const CEntityKeyValues *pKeyValues)
{
  CPropVRTrackedObject::Spawn(this, pKeyValues);
  CBaseEntity::SetDamageOptions(this, DamageOptions_t::DAMAGE_YES);
}


// CPropVRHand::Precache  (line 268, @0x00000000023702a0, libserver.so)
// calls: CPropVRTrackedObject::Precache, GetModelNameFromKeyValues, CBaseEntity::PrecacheModel
// strings: "models/controllers/vr_controller.vmdl"
void __fastcall CPropVRHand::Precache(CPropVRHand *const this, const CEntityPrecacheContext *pContext)
{
  const char *ModelNameFromKeyValues; // rax
  const char *v4; // rax
  const char *v5; // rax

  CPropVRTrackedObject::Precache(this, pContext);
  ModelNameFromKeyValues = GetModelNameFromKeyValues(pContext->m_pKeyValues, "models/controllers/vr_controller.vmdl");
  CBaseEntity::PrecacheModel(ModelNameFromKeyValues, pContext);
  v4 = GetModelNameFromKeyValues(pContext->m_pKeyValues, "models/controllers/vr_controller.vmdl");
  CBaseEntity::PrecacheModel(v4, pContext);
  v5 = GetModelNameFromKeyValues(pContext->m_pKeyValues, "");
  CBaseEntity::PrecacheModel(v5, pContext);
}


// CPropVRHand::CalculateLiteralHandType  (line 277, @0x0000000002357df0, libserver.so)
eLiteralHandType __fastcall CPropVRHand::CalculateLiteralHandType(int nHandId)
{
  eLiteralHandType result; // eax

  result = eLiteralHandType::LITERAL_HAND_TYPE_LEFT;
  if ( nHandId != 0 )
    return (nHandId == 1) - 1;
  return result;
}


// CPropVRHand::CalculateModelName  (line 287, @0x0000000002357e10, libserver.so)
// strings: "models/controllers/vr_controller.vmdl"
const char *__fastcall CPropVRHand::CalculateModelName(int nHandId)
{
  const char *result; // rax

  result = "models/controllers/vr_controller.vmdl";
  if ( nHandId > 1 )
    return "";
  return result;
}


// CPropVRHand::InitVRHand  (line 303, @0x0000000002369d60, libserver.so)  // inlines: Attribute_SetEHandleValue, CEntityHandle, CThreadFastMutex, CUtlIntrusiveList, CUtlTSOpenHash, CUtlTSOpenHashConcurrencyModelLockFree, CalculateLiteralHandType, GetEHandle, GetEntityAttributes, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, IndexToIdentity, Init, IsValid, LookupEntity, NetworkStateChanged, Set, SetIntValue, SetPlayer, SetValue<int>, operator!=, operator=, operator=<bool>, operator=<eLiteralHandType>, operator=<int>
// calls: CUtlTSOpenHash<unsigned int, unsigned int, 64, CUtlMaskedIntHashMethod, CUtlTSOpenHashConcurrencyModelLockFree>::Insert, CBaseAnimating::GetModelPtr, CBaseAnimating::SelectWeightedSequence, CBaseAnimating::SetSequence, operator new
// globals: CEntityHandle::gm_pEntityList
void __fastcall CPropVRHand::InitVRHand(CPropVRHand *const this, int nHandID, CPropHMDAvatar *pHMDAvatar)
{
  uint32 m_Index; // eax
  CPropHMDAvatar *m_pInstance; // rcx
  CEntityIdentity *v8; // rdx
  CEntityIdentity *v9; // rdx
  eLiteralHandType v10; // r12d
  __int64 v11; // rax
  __int64 v12; // rdx
  int v13; // eax
  __int16 v14; // cx
  __int64 v15; // rax
  unsigned int v16; // edx
  __int64 v17; // rcx
  __int16 v18; // si
  CEntityIdentity *v19; // r12
  CUtlObjectAttributeTable<CEntityIdentity,CUtlStringToken> *m_pAttributes; // rdi
  HSequence v21; // eax
  CEntityIdentity *m_pEntity; // rdx
  int v23; // eax
  __int16 v24; // cx
  CUtlObjectAttributeTable<CEntityIdentity,CUtlStringToken> *v25; // rax
  unsigned int v26; // [rsp+Ch] [rbp-34h]

  if ( nHandID != this->m_nHandID.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1364, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_nHandID.m_Value = nHandID;
  }
  m_Index = this->m_hHMDAvatar.m_Value.m_Index;
  m_pInstance = 0;
  if ( m_Index + 2 > 1 )
  {
    v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hHMDAvatar.m_Value.m_Index) >> 9) & 0x3F];
    if ( v8 != 0 )
    {
      v9 = &v8[this->m_hHMDAvatar.m_Value.m_Index & 0x1FF];
      if ( v9 != 0 && m_Index == v9->m_EHandle.m_Index )
        m_pInstance = v9->m_pInstance;
    }
  }
  if ( pHMDAvatar != m_pInstance )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1332, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    if ( pHMDAvatar != 0 && (m_pEntity = pHMDAvatar->m_pEntity) != 0 )
    {
      v23 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      if ( m_pEntity->m_EHandle.m_Index == -1 )
        v24 = 0x7FFF;
      else
        v24 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LOWORD(this->m_hHMDAvatar.m_Value.m_Index) = v24 | this->m_hHMDAvatar.m_Value.m_Index & 0x8000;
      this->m_hHMDAvatar.m_Value.m_Index = (v23 << 15) | this->m_hHMDAvatar.m_Value.m_Index & 0x7FFF;
    }
    else
    {
      this->m_hHMDAvatar.m_Value.m_Index = -1;
    }
  }
  if ( !this->m_bInitialized.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1360, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bInitialized.m_Value = 1;
  }
  if ( this->m_bIsInView.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1361, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bIsInView.m_Value = 0;
  }
  if ( !this->m_bCanPerformUse.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1384, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bCanPerformUse.m_Value = 1;
  }
  v10 = eLiteralHandType::LITERAL_HAND_TYPE_LEFT;
  if ( nHandID != 0 )
    v10 = (nHandID == 1) - 1;
  if ( v10 != this->m_LiteralHandType.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1704, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_LiteralHandType.m_Value = v10;
  }
  v11 = (*(this->_vptr_IHandleEntity + 261))(this);
  if ( v11 != 0 && (v12 = *(v11 + 8)) != 0 )
  {
    v13 = (*(v12 + 16) >> 15) - (*(v12 + 48) & 1);
    v14 = 0x7FFF;
    if ( *(v12 + 16) != -1 )
      v14 = *(v12 + 16) & 0x7FFF;
    LOWORD(this->m_InteractionMgr.m_hPlayer.m_Index) = v14 | this->m_InteractionMgr.m_hPlayer.m_Index & 0x8000;
    this->m_InteractionMgr.m_hPlayer.m_Index = (v13 << 15) | this->m_InteractionMgr.m_hPlayer.m_Index & 0x7FFF;
  }
  else
  {
    this->m_InteractionMgr.m_hPlayer.m_Index = -1;
  }
  v15 = (*(this->_vptr_IHandleEntity + 261))(this);
  v16 = -1;
  if ( v15 != 0 )
  {
    v17 = *(v15 + 8);
    if ( v17 != 0 )
    {
      v18 = 0x7FFF;
      if ( *(v17 + 16) != -1 )
        v18 = *(v17 + 16) & 0x7FFF;
      v16 = (((*(v17 + 16) >> 15) - (*(v17 + 48) & 1)) << 15) | v18 & 0x7FFF;
    }
  }
  v19 = this->m_pEntity;
  m_pAttributes = v19->m_pAttributes;
  if ( m_pAttributes == 0 )
  {
    v26 = v16;
    v25 = operator new(0x38u);
    v16 = v26;
    v25->m_hashTable.m_tables.m_pHead = 0;
    m_pAttributes = v25;
    v25->m_hashTable.m_concurrencyModel.m_mutex.m_ownerID = 0;
    v25->m_hashTable.m_concurrencyModel.m_mutex.m_depth = 0;
    v25->m_hashTable.m_nNumKeysDeleted = 0;
    v25->m_hashTable.m_nCurrentTableSize = 64;
    v25->m_hashTable.m_nDeletedKeyValue = -1;
    v25->m_hashTable.m_nEmptyKeyValue = -2;
    v25->m_pParentTable = 0;
    v19->m_pAttributes = v25;
  }
  CUtlTSOpenHash<unsigned int,unsigned int,64,CUtlMaskedIntHashMethod,CUtlTSOpenHashConcurrencyModelLockFree>::Insert(
    &m_pAttributes->m_hashTable,
    0x1859D24u,
    v16,
    0);
  if ( CBaseAnimating::GetModelPtr(this) != 0 )
  {
    v21.m_Data = CBaseAnimating::SelectWeightedSequence(this, 1).m_Data;
    CBaseAnimating::SetSequence(this, v21, SetSequenceBehavior_t::SET_SEQUENCE_PRESERVE_CYCLE);
  }
}


// CPropVRHand::IsSafeLocationForObject  (line 345, @0x0000000002350790, libserver.so)  // inlines: CEntityHandle, CGameQueryAttributes, CTransform, DidHit, EnableInteractsAs, EnableInteractsExclude, EnableInteractsWith, Get, GetEntryIndex, GetHMDAvatar, GetHandleEntity, GetInstance, GetSerialNumber, IgnoreOneEntityFindByCollisionGroup, IndexToIdentity, Init, InitFromQAngles, LookupEntity, MatrixTransform, RnQueryAttr_t, RnQueryShapeAttr_t, SetCollisionGroup, SetEntityToIgnore, SetIgnore, ToCTransform, VectorAligned, operator=
// calls: CBaseEntity::VPhysicsGetObject, CBaseEntity::EntityToWorldTransform, MatrixTransform, AngleQuaternion, EntityIDFromBaseEntity, HierarchyIDFromBaseEntity, CGamePhysicsQueryInterface::SweepBody
bool __fastcall CPropVRHand::IsSafeLocationForObject(
        const CPropVRHand *const this,
        const Vector *const vGoal,
        const QAngle *const qGoal)
{
  bool result; // al
  __int64 v7; // rax
  const CBaseEntity *v8; // rbx
  int v9; // edx
  unsigned __int16 v10; // ax
  int v11; // esi
  CBaseEntity *m_pInstance; // rdi
  int v13; // ecx
  CEntityIdentity *v14; // rax
  CEntityIdentity *v15; // rax
  matrix3x4_t *v16; // rax
  vec_t z; // xmm0_4
  vec_t y; // xmm1_4
  vec_t x; // xmm2_4
  IPhysicsBody *pBody; // [rsp+18h] [rbp-C8h] BYREF
  CSweepResult v21; // [rsp+20h] [rbp-C0h] BYREF
  CTransform transformStart; // [rsp+40h] [rbp-A0h] BYREF
  CTransform transformEnd; // [rsp+60h] [rbp-80h] BYREF
  CGameQueryAttributes traceFilter; // [rsp+80h] [rbp-60h] BYREF

  pBody = CBaseEntity::VPhysicsGetObject(this);
  result = 1;
  if ( pBody != 0 )
  {
    v7 = (*(this->_vptr_IHandleEntity + 261))(this);
    v8 = v7;
    v9 = *(v7 + 3124) >> 15;
    if ( *(v7 + 3124) == -1 )
    {
      v10 = 0x7FFF;
      v11 = 0x7FFF;
    }
    else
    {
      v10 = *(v7 + 3124) & 0x7FFF;
      v11 = v10;
    }
    m_pInstance = 0;
    v13 = (v9 << 15) | v10 & 0x7FFF;
    LODWORD(traceFilter.m_nInteractsWith) = v13;
    if ( (v13 + 2) > 1 )
    {
      v14 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v11 >> 9];
      if ( v14 != 0 )
      {
        v15 = &v14[v11 & 0x1FF];
        if ( v15 != 0 && v13 == v15->m_EHandle.m_Index )
          m_pInstance = v15->m_pInstance;
      }
    }
    v16 = CBaseEntity::EntityToWorldTransform(m_pInstance);
    transformStart.m_vPosition.w = 0.0;
    MatrixTransform(v16, &transformStart);
    transformEnd.m_vPosition.w = 0.0;
    AngleQuaternion(qGoal, &transformEnd.m_orientation);
    z = vGoal->z;
    transformEnd.m_vPosition.w = 0.0;
    y = vGoal->y;
    memset(&traceFilter, 0, 24);
    x = vGoal->x;
    transformEnd.m_vPosition.z = z;
    transformEnd.m_vPosition.y = y;
    transformEnd.m_vPosition.x = x;
    *(&traceFilter.RnQueryShapeAttr_t + 31) = *(&traceFilter.RnQueryShapeAttr_t + 31) & 0xF0 | 9;
    traceFilter.m_nEntityIdToIgnore = -1;
    traceFilter.m_nHierarchyId = 0;
    traceFilter.m_nObjectSetMask = 7;
    traceFilter.m_nCollisionGroup = 4;
    traceFilter.m_nEntityIdToIgnore = EntityIDFromBaseEntity(v8);
    traceFilter.m_nHierarchyId = HierarchyIDFromBaseEntity(v8);
    traceFilter.m_nInteractsWith |= 0x87001uLL;
    traceFilter.m_nInteractsAs |= 0x87001uLL;
    traceFilter.m_nInteractsExclude |= 0x1800000uLL;
    CGamePhysicsQueryInterface::SweepBody(
      &v21,
      g_pPhysicsQuery,
      &transformStart,
      &transformEnd,
      &pBody,
      &traceFilter,
      0);
    return v21.m_flAlpha >= 1.0;
  }
  return result;
}


// CPropVRHand::UpdateTransmitState  (line 373, @0x000000000234b880, libserver.so)
// calls: CBaseEntity::SetTransmitState
int __fastcall CPropVRHand::UpdateTransmitState(CPropVRHand *const this)
{
  return CBaseEntity::SetTransmitState(this, 4);
}


// CPropVRHand::InitializeArms  (line 379, @0x0000000002357e30, libserver.so)
void __fastcall CPropVRHand::InitializeArms(CPropVRHand *const this)
{
  ;
}


// CPropVRHand::OnRestore  (line 419, @0x000000000234b900, libserver.so)
// calls: CBaseModelEntity::OnRestore
void __fastcall CPropVRHand::OnRestore(CPropVRHand *const this)
{
  CBaseModelEntity::OnRestore(this);
}


// CPropVRHand::UpdateTrackingData  (line 426, @0x000000000235a690, libserver.so)  // inlines: NetworkStateChanged, Set, VectorAdd, VectorSubtract, operator+, operator-, operator=, operator=<CNetworkVarBase<float, HandInfo_t::NetworkVar_m_flGripAnalogValue> >, operator=<CNetworkVarBase<float, HandInfo_t::NetworkVar_m_flTrackpadOrJoystickAnalogValueX> >, operator=<CNetworkVarBase<float, HandInfo_t::NetworkVar_m_flTrackpadOrJoystickAnalogValueY> >, operator=<CNetworkVarBase<float, HandInfo_t::NetworkVar_m_flTriggerAnalogValue> >, operator=<bool>
// calls: CPropVRTrackedObject::UpdateTrackingData, CBaseEntity::GetAbsOrigin, CBasePlayer::IsBoundingBoxInView
void __fastcall CPropVRHand::UpdateTrackingData(
        CPropVRHand *const this,
        bool bTeleport,
        const HandInfo_t *pHandInfo,
        bool bActive)
{
  CBasePlayer *v6; // r12
  const Vector *AbsOrigin; // rax
  vec_t v8; // xmm2_4
  vec_t v9; // xmm1_4
  const Vector *v10; // rax
  vec_t v11; // xmm1_4
  vec_t v12; // xmm0_4
  bool IsBoundingBoxInView; // r12
  float v14; // [rsp+Ch] [rbp-34h]
  float v15; // [rsp+Ch] [rbp-34h]
  float v16; // [rsp+Ch] [rbp-34h]
  float m_Value; // [rsp+Ch] [rbp-34h]
  Vector vRenderMins; // [rsp+10h] [rbp-30h] BYREF
  Vector vRenderMaxs; // [rsp+20h] [rbp-20h] BYREF

  CPropVRTrackedObject::UpdateTrackingData(this, bTeleport, pHandInfo, bActive);
  if ( pHandInfo->m_flTriggerAnalogValue.m_Value != this->m_flTriggerAnalogValue.m_Value )
  {
    m_Value = pHandInfo->m_flTriggerAnalogValue.m_Value;
    (*(this->_vptr_IHandleEntity + 22))(this, 1368, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_flTriggerAnalogValue.m_Value = m_Value;
  }
  if ( pHandInfo->m_flGripAnalogValue.m_Value != this->m_flGripAnalogValue.m_Value )
  {
    v16 = pHandInfo->m_flGripAnalogValue.m_Value;
    (*(this->_vptr_IHandleEntity + 22))(this, 1372, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_flGripAnalogValue.m_Value = v16;
  }
  if ( pHandInfo->m_flTrackpadOrJoystickAnalogValueX.m_Value != this->m_flTrackpadOrJoystickAnalogValueX.m_Value )
  {
    v15 = pHandInfo->m_flTrackpadOrJoystickAnalogValueX.m_Value;
    (*(this->_vptr_IHandleEntity + 22))(this, 1376, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_flTrackpadOrJoystickAnalogValueX.m_Value = v15;
  }
  if ( pHandInfo->m_flTrackpadOrJoystickAnalogValueY.m_Value != this->m_flTrackpadOrJoystickAnalogValueY.m_Value )
  {
    v14 = pHandInfo->m_flTrackpadOrJoystickAnalogValueY.m_Value;
    (*(this->_vptr_IHandleEntity + 22))(this, 1380, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_flTrackpadOrJoystickAnalogValueY.m_Value = v14;
  }
  if ( this->m_bIsInView.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1361, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bIsInView.m_Value = 0;
  }
  if ( this->m_bIsTracking.m_Value )
  {
    v6 = (*(this->_vptr_IHandleEntity + 261))(this);
    AbsOrigin = CBaseEntity::GetAbsOrigin(this);
    v8 = AbsOrigin->y - 0.0099999998;
    v9 = AbsOrigin->z - 0.0099999998;
    vRenderMins.x = AbsOrigin->x - 0.0099999998;
    vRenderMins.y = v8;
    vRenderMins.z = v9;
    v10 = CBaseEntity::GetAbsOrigin(this);
    v11 = v10->z + 0.0099999998;
    v12 = v10->x + 0.0099999998;
    vRenderMaxs.y = v10->y + 0.0099999998;
    vRenderMaxs.z = v11;
    vRenderMaxs.x = v12;
    IsBoundingBoxInView = CBasePlayer::IsBoundingBoxInView(v6, &vRenderMins, &vRenderMaxs);
    if ( IsBoundingBoxInView != this->m_bIsInView.m_Value )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 1361, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_bIsInView.m_Value = IsBoundingBoxInView;
    }
  }
  (*(this->_vptr_IHandleEntity + 262))(this);
}


// CPropVRHand::UpdateOnRemove  (line 519, @0x00000000023509b0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, IndexToIdentity, IsValid, LookupEntity, operator bool, operator[]
// calls: CBaseVRHandAttachment::DetachFromHand, CBaseAnimating::UpdateOnRemove
// globals: CEntityHandle::gm_pEntityList
void __fastcall CPropVRHand::UpdateOnRemove(CPropVRHand *const this)
{
  __int64 v2; // r12
  int v3; // r13d
  CHandle<CBaseVRHandAttachment> *v4; // rdx
  uint32 m_Index; // eax
  __int16 v6; // cx
  CEntityIdentity *v7; // rdx
  CEntityIdentity *v8; // rdx

  if ( this->m_hAttachments.m_Vector.m_Size > 0 )
  {
    v2 = 0;
    v3 = 0;
    do
    {
      v4 = &this->m_hAttachments.m_Vector.m_Memory.m_pMemory[v2];
      m_Index = v4->m_Index;
      if ( v4->m_Index + 2 > 1 )
      {
        v6 = v4->m_Index;
        v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v4->m_Index) >> 9) & 0x3F];
        if ( v7 != 0 )
        {
          v8 = &v7[v6 & 0x1FF];
          if ( v8 != 0 && m_Index == v8->m_EHandle.m_Index )
            CBaseVRHandAttachment::DetachFromHand(v8->m_pInstance);
        }
      }
      ++v3;
      ++v2;
    }
    while ( this->m_hAttachments.m_Vector.m_Size > v3 );
  }
  CBaseAnimating::UpdateOnRemove(this);
}


// CPropVRHand::OnTakeDamage  (line 548, @0x000000000234ad30, libserver.so)
int __fastcall CPropVRHand::OnTakeDamage(CPropVRHand *const this, const CTakeDamageInfo *const info)
{
  __int64 v3; // rax

  v3 = (*(this->_vptr_IHandleEntity + 261))(this);
  if ( v3 != 0 )
    return (*(*v3 + 720LL))(v3, info);
  else
    return 0;
}


// CPropVRHand::AddHandAttachment  (line 557, @0x000000000236e8e0, libserver.so)  // inlines: AddToHead, AddToTail, CEntityHandle, CHandle, CopyConstruct<CHandle<CBaseVRHandAttachment> >, Element, GetEHandle, GetEntryIndex, GetHandleEntity, GetSerialNumber, GrowMemory, IndexToIdentity, Init, InsertBefore, LookupEntity, NetworkStateChanged, Set, SetActiveAttachment, operator!, operator[]
// calls: CBaseVRHandAttachment::AttachToHand, CPropVRHand::SetActiveAttachmentInternal, CUtlVectorBase<CHandle<CBaseVRHandAttachment>, CNetworkUtlVector_MemoryType<CHandle<CBaseVRHandAttachment>, -1> >::GrowVector, CUtlVectorBase<CHandle<CBaseVRHandAttachment>, CNetworkUtlVector_MemoryType<CHandle<CBaseVRHandAttachment>, -1> >::ShiftElementsRight, CUtlMemory<CHandle<CBaseVRHandAttachment>, int>::Grow
// callers: CPropVRHand::ReplaceHandAttachment, CPropVRHand::ScriptSetHandAttachment, CPropVRHand::ScriptAddHandAttachment, CPropVRHand::ScriptAddHandModelOverride
void __fastcall CPropVRHand::AddHandAttachment(
        CPropVRHand *const this,
        CBaseVRHandAttachment *pAttachment,
        bool bToHead)
{
  CEntityIdentity *m_pEntity; // rax
  __int16 v6; // cx
  unsigned int m_Size; // r13d
  int v8; // eax
  CHandle<CBaseVRHandAttachment> *v9; // rax
  unsigned __int16 v10; // dx
  __int64 v11; // rsi
  uint32 v12; // eax
  CEntitySystem *v13; // rcx
  CEntityIdentity *v14; // rdx
  __int64 v15; // rsi
  __int16 v16; // cx
  CHandle<CBaseVRHandAttachment> *m_pMemory; // rax
  int v18; // [rsp+0h] [rbp-30h]

  if ( pAttachment != 0 )
  {
    v18 = -1;
    m_pEntity = pAttachment->m_pEntity;
    if ( bToHead )
    {
      if ( m_pEntity != 0 )
      {
        v16 = 0x7FFF;
        if ( m_pEntity->m_EHandle.m_Index != -1 )
          v16 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        v18 = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v16 & 0x7FFF;
      }
      CUtlVectorBase<CHandle<CBaseVRHandAttachment>,CNetworkUtlVector_MemoryType<CHandle<CBaseVRHandAttachment>,-1>>::GrowVector(
        &this->m_hAttachments.m_Vector,
        1);
      CUtlVectorBase<CHandle<CBaseVRHandAttachment>,CNetworkUtlVector_MemoryType<CHandle<CBaseVRHandAttachment>,-1>>::ShiftElementsRight(
        &this->m_hAttachments.m_Vector,
        0,
        1);
      m_pMemory = this->m_hAttachments.m_Vector.m_Memory.m_pMemory;
      if ( m_pMemory != 0 )
        m_pMemory->m_Index = v18;
      (*(this->_vptr_IHandleEntity + 22))(this, 1336, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      (*(this->_vptr_IHandleEntity + 22))(this, 1336, 0, 0xFFFFFFFFLL);
    }
    else
    {
      if ( m_pEntity != 0 )
      {
        v6 = 0x7FFF;
        if ( m_pEntity->m_EHandle.m_Index != -1 )
          v6 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        v18 = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v6 & 0x7FFF;
      }
      m_Size = this->m_hAttachments.m_Vector.m_Size;
      v8 = m_Size;
      if ( m_Size == this->m_hAttachments.m_Vector.m_Memory.m_nAllocationCount )
      {
        CUtlMemory<CHandle<CBaseVRHandAttachment>,int>::Grow(&this->m_hAttachments.m_Vector.m_Memory, 1);
        v8 = this->m_hAttachments.m_Vector.m_Size;
      }
      this->m_hAttachments.m_Vector.m_Size = v8 + 1;
      v9 = &this->m_hAttachments.m_Vector.m_Memory.m_pMemory[m_Size];
      if ( v9 != 0 )
        v9->m_Index = v18;
      (*(this->_vptr_IHandleEntity + 22))(this, 1336, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      (*(this->_vptr_IHandleEntity + 22))(this, 1336, m_Size, 0xFFFFFFFFLL);
    }
    CBaseVRHandAttachment::AttachToHand(pAttachment, this);
    if ( this->m_hActiveHandAttachment.m_Value.m_Index == -1 )
    {
      v10 = 0x7FFF;
      v11 = 0x7FFF;
    }
    else
    {
      v10 = this->m_hActiveHandAttachment.m_Value.m_Index & 0x7FFF;
      v11 = v10;
    }
    v12 = (this->m_hActiveHandAttachment.m_Value.m_Index >> 15 << 15) | v10 & 0x7FFF;
    v13 = g_pEntitySystem;
    v14 = (v12 + 2);
    if ( v14 <= 1
      || (v14 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v11 >> 9]) == 0
      || (v15 = v11 & 0x1FF, v13 = (8 * v15), v11 = 120 * v15, (v14 = (v14 + v11)) == 0)
      || v12 != v14->m_EHandle.m_Index
      || v14->m_pInstance == 0 )
    {
      if ( (*(pAttachment->_vptr_IHandleEntity + 257))(pAttachment, v11, v14, v13) != 0 )
        CPropVRHand::SetActiveAttachmentInternal(this, pAttachment, 1, 1, 1);
    }
  }
}


// CPropVRHand::FindAndRemoveHandAttachment  (line 583, @0x000000000236cb40, libserver.so)
// calls: CPropVRHand::FindAndRemoveHandAttachmentInternal
// callers: CBaseVRHandAttachment::UpdateOnRemove
void __fastcall CPropVRHand::FindAndRemoveHandAttachment(CPropVRHand *const this, CBaseVRHandAttachment *pAttachment)
{
  CPropVRHand::FindAndRemoveHandAttachmentInternal(this, pAttachment, 1, 1);
}


// CPropVRHand::FindAndRemoveHandAttachmentInternal  (line 590, @0x000000000236c9e0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, NetworkStateChanged, Remove, SetActiveAttachment, operator CEntityInstance*, operator==
// calls: CEntityHandle::GetHandleEntity, CPropVRHand::SetActiveAttachmentInternal, CUtlVectorBase<CHandle<CBaseVRHandAttachment>, CNetworkUtlVector_MemoryType<CHandle<CBaseVRHandAttachment>, -1> >::ShiftElementsLeft, CBaseVRHandAttachment::DetachFromHand
// callers: CPropVRHand::FindAndRemoveHandAttachment, CPropVRHand::ScriptRemoveHandAttachmentByHandle, CPropVRHand::ReplaceHandAttachment, CPropVRHand::SwapLogicalAttachmentsWith
// globals: CEntityHandle::gm_pEntityList
void __fastcall CPropVRHand::FindAndRemoveHandAttachmentInternal(
        CPropVRHand *const this,
        CBaseVRHandAttachment *pAttachment,
        bool bSendDetach,
        bool bDeactivateIfActive)
{
  int v5; // ebx
  CHandle<CBaseVRHandAttachment> *i; // rax
  CBaseVRHandAttachment *m_pInstance; // rdi
  CEntityIdentity *v10; // rsi
  CEntityIdentity *v11; // rsi
  int (**vptr_IHandleEntity)(...); // rax
  __int64 v13; // rdx

  v5 = this->m_hAttachments.m_Vector.m_Size - 1;
  if ( v5 >= 0 )
  {
    for ( i = &this->m_hAttachments.m_Vector.m_Memory.m_pMemory[v5]; ; --i )
    {
      m_pInstance = 0;
      if ( i->m_Index + 2 > 1 )
      {
        v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(i->m_Index) >> 9) & 0x3F];
        if ( v10 != 0 )
        {
          v11 = &v10[i->m_Index & 0x1FF];
          if ( v11 != 0 && i->m_Index == v11->m_EHandle.m_Index )
            m_pInstance = v11->m_pInstance;
        }
      }
      if ( pAttachment == m_pInstance )
        break;
      if ( --v5 == -1 )
        return;
    }
    if ( bDeactivateIfActive && pAttachment == CEntityHandle::GetHandleEntity(&this->m_hActiveHandAttachment.m_Value) )
      CPropVRHand::SetActiveAttachmentInternal(this, pAttachment, 0, 1, 1);
    CUtlVectorBase<CHandle<CBaseVRHandAttachment>,CNetworkUtlVector_MemoryType<CHandle<CBaseVRHandAttachment>,-1>>::ShiftElementsLeft(
      &this->m_hAttachments.m_Vector,
      v5,
      1);
    vptr_IHandleEntity = this->_vptr_IHandleEntity;
    --this->m_hAttachments.m_Vector.m_Size;
    vptr_IHandleEntity[22](this, 1336, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    while ( v5 < this->m_hAttachments.m_Vector.m_Size )
    {
      v13 = v5++;
      (*(this->_vptr_IHandleEntity + 22))(this, 1336, v13, 0xFFFFFFFFLL);
    }
    if ( bSendDetach )
      CBaseVRHandAttachment::DetachFromHand(pAttachment);
  }
}


// CPropVRHand::ReplaceHandAttachment  (line 613, @0x000000000236eb90, libserver.so)  // inlines: FindAndRemoveHandAttachment
// calls: CPropVRHand::FindAndRemoveHandAttachmentInternal, CPropVRHand::AddHandAttachment
void __fastcall CPropVRHand::ReplaceHandAttachment(
        CPropVRHand *const this,
        CBaseVRHandAttachment *pFindAndRemove,
        CBaseVRHandAttachment *pReplaceWith)
{
  CPropVRHand::FindAndRemoveHandAttachmentInternal(this, pFindAndRemove, 1, 1);
  CPropVRHand::AddHandAttachment(this, pReplaceWith, 0);
}


// CPropVRHand::SetActiveAttachment  (line 621, @0x00000000023581f0, libserver.so)
// calls: CPropVRHand::SetActiveAttachmentInternal
// callers: CBaseVRHandAttachment::SetActiveAttachment
void __fastcall CPropVRHand::SetActiveAttachment(
        CPropVRHand *const this,
        CBaseVRHandAttachment *pAttachment,
        bool bActive)
{
  CPropVRHand::SetActiveAttachmentInternal(this, pAttachment, bActive, 1, 1);
}


// CPropVRHand::SetActiveAttachmentInternal  (line 627, @0x0000000002357e40, libserver.so)  // inlines: CEntityHandle, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetHandleEntity, GetInstance, GetSerialNumber, IndexToIdentity, Init, IsValid, LookupEntity, NetworkStateChanged, Set, operator CBaseVRHandAttachment*, operator CEntityInstance*, operator!=, operator=, operator[]
// calls: CEntityHandle::GetHandleEntity
// callers: CPropVRHand::SetActiveAttachment, CPropVRHand::FindAndRemoveHandAttachmentInternal, CPropVRHand::AddHandAttachment, CPropVRHand::SwapLogicalAttachmentsWith
// globals: CEntityHandle::gm_pEntityList
void __fastcall CPropVRHand::SetActiveAttachmentInternal(
        CPropVRHand *const this,
        CBaseVRHandAttachment *pAttachment,
        bool bActive,
        bool bNotifyOldAttachment,
        bool bNotifyNewAttachment)
{
  unsigned __int16 v6; // cx
  int v7; // edi
  uint32 v8; // eax
  unsigned __int64 m_Index_low; // rsi
  CEntityIdentity *v10; // rcx
  __int64 v11; // rdi
  CEntityIdentity *v12; // rcx
  CBaseVRHandAttachment *v13; // rbx
  uint32 m_Index; // eax
  CBaseVRHandAttachment *v15; // rcx
  CEntityIdentity *v16; // rdx
  char *v17; // rdx
  __int64 v18; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v20; // eax
  __int16 v21; // cx
  __int64 v22; // r12
  int v23; // r13d
  int v24; // eax
  __int16 v25; // di
  CBaseVRHandAttachment *v26; // r14
  IHandleEntity *HandleEntity; // rax
  CBaseVRHandAttachment *pAttachmenta; // [rsp+10h] [rbp-50h]
  CBaseVRHandAttachment *m_pInstance; // [rsp+18h] [rbp-48h]

  pAttachmenta = pAttachment;
  if ( pAttachment == 0 )
  {
    HandleEntity = CEntityHandle::GetHandleEntity(&this->m_hActiveHandAttachment.m_Value);
    bActive = 0;
    pAttachmenta = HandleEntity;
  }
  if ( this->m_hActiveHandAttachment.m_Value.m_Index == -1 )
  {
    v6 = 0x7FFF;
    v7 = 0x7FFF;
  }
  else
  {
    v6 = this->m_hActiveHandAttachment.m_Value.m_Index & 0x7FFF;
    v7 = v6;
  }
  m_pInstance = 0;
  v8 = (this->m_hActiveHandAttachment.m_Value.m_Index >> 15 << 15) | v6 & 0x7FFF;
  m_Index_low = g_pEntitySystem;
  if ( v8 + 2 > 1 )
  {
    v10 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v7 >> 9];
    if ( v10 != 0 )
    {
      v11 = v7 & 0x1FF;
      m_Index_low = 8 * v11;
      v12 = &v10[v11];
      if ( v12 != 0 && v8 == v12->m_EHandle.m_Index )
        m_pInstance = v12->m_pInstance;
    }
  }
  if ( bActive )
  {
    v13 = pAttachmenta;
    goto LABEL_14;
  }
  if ( pAttachmenta == m_pInstance )
  {
    if ( this->m_hAttachments.m_Vector.m_Size > 0 )
    {
      v22 = 0;
      v23 = 0;
      v13 = 0;
      while ( 1 )
      {
        m_Index_low = &this->m_hAttachments.m_Vector.m_Memory.m_pMemory[v22];
        v24 = *m_Index_low;
        if ( (*m_Index_low + 2) > 1 )
        {
          v25 = *m_Index_low;
          m_Index_low = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(*m_Index_low >> 9) & 0x3F];
          if ( m_Index_low != 0 )
          {
            m_Index_low += 120LL * (v25 & 0x1FF);
            if ( m_Index_low != 0 && v24 == *(m_Index_low + 16) )
            {
              v26 = *m_Index_low;
              if ( *m_Index_low != 0 && (*(v26->_vptr_IHandleEntity + 257))(*m_Index_low) != 0 )
              {
                if ( (*(v26->_vptr_IHandleEntity + 260))(v26) != 0 )
                {
                  v13 = v26;
                  goto LABEL_14;
                }
                if ( v13 == 0 && pAttachmenta != v26 )
                  v13 = v26;
              }
            }
          }
        }
        ++v23;
        ++v22;
        if ( v23 >= this->m_hAttachments.m_Vector.m_Size )
          goto LABEL_14;
      }
    }
    v13 = 0;
LABEL_14:
    if ( v13 != m_pInstance )
    {
      if ( m_pInstance != 0 && bNotifyOldAttachment )
        (*(m_pInstance->_vptr_IHandleEntity + 251))(m_pInstance, 0);
      m_Index = this->m_hActiveHandAttachment.m_Value.m_Index;
      v15 = 0;
      if ( m_Index + 2 > 1 )
      {
        m_Index_low = LOWORD(this->m_hActiveHandAttachment.m_Value.m_Index);
        v16 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(m_Index_low >> 9) & 0x3F];
        if ( v16 != 0 )
        {
          m_Index_low = 120 * (m_Index_low & 0x1FF);
          v17 = v16 + m_Index_low;
          if ( v17 != 0 && m_Index == *(v17 + 4) )
            v15 = *v17;
        }
      }
      if ( v13 != v15 )
      {
        (*(this->_vptr_IHandleEntity + 22))(this, 1328, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        if ( v13 != 0 )
        {
          m_pEntity = v13->m_pEntity;
          if ( m_pEntity != 0 )
          {
            v20 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
            if ( m_pEntity->m_EHandle.m_Index == -1 )
              v21 = 0x7FFF;
            else
              v21 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
            LOWORD(this->m_hActiveHandAttachment.m_Value.m_Index) = v21
                                                                  | this->m_hActiveHandAttachment.m_Value.m_Index
                                                                  & 0x8000;
            this->m_hActiveHandAttachment.m_Value.m_Index = (v20 << 15)
                                                          | this->m_hActiveHandAttachment.m_Value.m_Index & 0x7FFF;
            goto LABEL_31;
          }
        }
        this->m_hActiveHandAttachment.m_Value.m_Index = -1;
      }
      if ( v13 == 0 )
      {
LABEL_23:
        v18 = (*(this->_vptr_IHandleEntity + 261))(this, m_Index_low);
        if ( v18 != 0 )
          (*(*v18 + 4208LL))(v18, this, m_pInstance, v13);
        return;
      }
LABEL_31:
      if ( bNotifyNewAttachment )
        (*(pAttachmenta->_vptr_IHandleEntity + 251))(pAttachmenta, 1);
      goto LABEL_23;
    }
  }
}


// CPropVRHand::GetActiveAttachment  (line 702, @0x0000000002358210, libserver.so)  // inlines: CEntityHandle, GetEntryIndex, GetHandleEntity, GetInstance, GetSerialNumber, IndexToIdentity, Init, LookupEntity, operator CBaseVRHandAttachment*
CBaseVRHandAttachment *__fastcall CPropVRHand::GetActiveAttachment(
        CPropVRHand *const this,
        CBaseVRHandAttachment *pAttachment)
{
  unsigned __int16 v2; // dx
  int v3; // esi
  uint32 v4; // edx
  CBaseVRHandAttachment *result; // rax
  CEntityIdentity *v6; // rcx
  CEntityIdentity *v7; // rcx

  if ( this->m_hActiveHandAttachment.m_Value.m_Index == -1 )
  {
    v2 = 0x7FFF;
    v3 = 0x7FFF;
  }
  else
  {
    v2 = this->m_hActiveHandAttachment.m_Value.m_Index & 0x7FFF;
    v3 = v2;
  }
  v4 = (this->m_hActiveHandAttachment.m_Value.m_Index >> 15 << 15) | v2 & 0x7FFF;
  result = 0;
  if ( v4 + 2 > 1 )
  {
    v6 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v3 >> 9];
    if ( v6 != 0 )
    {
      v7 = &v6[v3 & 0x1FF];
      if ( v7 != 0 && v4 == v7->m_EHandle.m_Index )
        return v7->m_pInstance;
    }
  }
  return result;
}


// CPropVRHand::FindHandModelOverride  (line 708, @0x00000000023582c0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, String, operator CBaseVRHandAttachment*, operator CEntityInstance*, operator[]
// calls: __dynamic_cast, CBaseEntity::GetModelName, V_stricmp_fast
// callers: CPropVRHand::ScriptFindHandModelOverride, CPropVRHand::ScriptRemoveHandModelOverride
// globals: CEntityHandle::gm_pEntityList
int __fastcall CPropVRHand::FindHandModelOverride(CPropVRHand *const this, const char *pModelNameFilter)
{
  __int64 v4; // rbx
  CHandle<CBaseVRHandAttachment> *v5; // rax
  uint32 m_Index; // ecx
  __int16 v7; // dx
  CEntityIdentity *v8; // rax
  CEntityIdentity *v9; // rax
  const CBaseEntity *v11; // rsi
  const char *v12; // rdi
  const char *v13; // [rsp+0h] [rbp-40h] BYREF

  if ( this->m_hAttachments.m_Vector.m_Size <= 0 )
    return -1;
  v4 = 0;
  while ( 1 )
  {
    v5 = &this->m_hAttachments.m_Vector.m_Memory.m_pMemory[v4];
    m_Index = v5->m_Index;
    if ( v5->m_Index + 2 > 1 )
    {
      v7 = v5->m_Index;
      v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v5->m_Index) >> 9) & 0x3F];
      if ( v8 != 0 )
      {
        v9 = &v8[v7 & 0x1FF];
        if ( v9 != 0 && m_Index == v9->m_EHandle.m_Index && v9->m_pInstance != 0 )
        {
          v11 = __dynamic_cast(
                  v9->m_pInstance,
                  &`typeinfo for'CBaseVRHandAttachment,
                  &`typeinfo for'CVRHandModelOverride,
                  0);
          if ( v11 != 0 )
          {
            if ( pModelNameFilter != 0 )
              break;
            CBaseEntity::GetModelName(&v13, v11);
            v12 = "";
            if ( v13 != 0 )
              v12 = v13;
            if ( V_stricmp_fast(v12, 0) == 0 )
              break;
          }
        }
      }
    }
    if ( this->m_hAttachments.m_Vector.m_Size <= ++v4 )
      return -1;
  }
  return v4;
}


// CPropVRHand::FindHandAttachmentByModelName  (line 730, @0x0000000002358480, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, String, operator CBaseVRHandAttachment*, operator CEntityInstance*, operator[]
// calls: CBaseEntity::GetModelName, V_stricmp_fast
// globals: CEntityHandle::gm_pEntityList
int __fastcall CPropVRHand::FindHandAttachmentByModelName(CPropVRHand *const this, const char *pModelNameFilter)
{
  __int64 v4; // rbx
  CHandle<CBaseVRHandAttachment> *v5; // rax
  uint32 m_Index; // ecx
  __int16 v7; // dx
  CEntityIdentity *v8; // rax
  CEntityIdentity *v9; // rax
  const char *v11; // rdi
  const char *v12; // [rsp+0h] [rbp-40h] BYREF

  if ( this->m_hAttachments.m_Vector.m_Size <= 0 )
    return -1;
  v4 = 0;
  while ( 1 )
  {
    v5 = &this->m_hAttachments.m_Vector.m_Memory.m_pMemory[v4];
    m_Index = v5->m_Index;
    if ( v5->m_Index + 2 > 1 )
    {
      v7 = v5->m_Index;
      v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v5->m_Index) >> 9) & 0x3F];
      if ( v8 != 0 )
      {
        v9 = &v8[v7 & 0x1FF];
        if ( v9 != 0 && m_Index == v9->m_EHandle.m_Index && v9->m_pInstance != 0 )
        {
          CBaseEntity::GetModelName(&v12, v9->m_pInstance);
          v11 = "";
          if ( v12 != 0 )
            v11 = v12;
          if ( V_stricmp_fast(v11, pModelNameFilter) == 0 )
            break;
        }
      }
    }
    if ( this->m_hAttachments.m_Vector.m_Size <= ++v4 )
      return -1;
  }
  return v4;
}


// CPropVRHand::ScriptFireHapticPulse  (line 748, @0x00000000023704c0, libserver.so)
// calls: CPropVRHand::FireHapticPulse
void __fastcall CPropVRHand::ScriptFireHapticPulse(CPropVRHand *const this, int nStrength)
{
  CPropVRHand::FireHapticPulse(this, nStrength);
}


// CPropVRHand::ScriptSetHandAttachment  (line 756, @0x000000000236ebc0, libserver.so)  // inlines: Get, GetInstance, HScriptToEntity<CBaseVRHandAttachment>, NetworkStateChanged, Remove, operator CBaseVRHandAttachment*, operator[]
// calls: CEntityHandle::operator CEntityInstance*, CUtlVectorBase<CHandle<CBaseVRHandAttachment>, CNetworkUtlVector_MemoryType<CHandle<CBaseVRHandAttachment>, -1> >::ShiftElementsLeft, CBaseVRHandAttachment::DetachFromHand, GetScriptDesc<CEntityInstance>, CPropVRHand::AddHandAttachment
void __fastcall CPropVRHand::ScriptSetHandAttachment(CPropVRHand *const this, HSCRIPT hAttachment)
{
  int v3; // ebx
  CNetworkUtlVectorBase<CHandle<CBaseVRHandAttachment>,CPropVRHand::NetworkVar_m_hAttachments,-1> *p_m_hAttachments; // r13
  __int64 v5; // r12
  int (**vptr_IHandleEntity)(...); // rax
  int v7; // r15d
  __int64 v8; // rdx
  __int64 (__fastcall *v9)(IScriptVM *, HSCRIPT, ScriptClassDesc_t *); // r12
  ScriptClassDesc_t *Script; // rax
  CBaseVRHandAttachment *v11; // rsi
  CBaseVRHandAttachment *pOld; // [rsp+0h] [rbp-40h]

  v3 = this->m_hAttachments.m_Vector.m_Size - 1;
  if ( v3 >= 0 )
  {
    p_m_hAttachments = &this->m_hAttachments;
    v5 = v3;
    do
    {
      pOld = CEntityHandle::operator CEntityInstance *(&this->m_hAttachments.m_Vector.m_Memory.m_pMemory[v5]);
      CUtlVectorBase<CHandle<CBaseVRHandAttachment>,CNetworkUtlVector_MemoryType<CHandle<CBaseVRHandAttachment>,-1>>::ShiftElementsLeft(
        &p_m_hAttachments->m_Vector,
        v3,
        1);
      vptr_IHandleEntity = this->_vptr_IHandleEntity;
      --this->m_hAttachments.m_Vector.m_Size;
      vptr_IHandleEntity[22](this, 1336, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      if ( this->m_hAttachments.m_Vector.m_Size > v3 )
      {
        v7 = v3;
        do
        {
          v8 = v7++;
          (*(this->_vptr_IHandleEntity + 22))(this, 1336, v8, 0xFFFFFFFFLL);
        }
        while ( v7 < this->m_hAttachments.m_Vector.m_Size );
      }
      --v3;
      --v5;
      CBaseVRHandAttachment::DetachFromHand(pOld);
    }
    while ( v3 != -1 );
  }
  if ( hAttachment != 0 )
  {
    v9 = *(*g_pScriptVM + 208LL);
    Script = GetScriptDesc<CEntityInstance>(0);
    v11 = v9(g_pScriptVM, hAttachment, Script);
  }
  else
  {
    v11 = 0;
  }
  CPropVRHand::AddHandAttachment(this, v11, 0);
}


// CPropVRHand::ScriptAddHandAttachment  (line 770, @0x000000000236ece0, libserver.so)  // inlines: HScriptToEntity<CBaseVRHandAttachment>
// calls: GetScriptDesc<CEntityInstance>, CPropVRHand::AddHandAttachment
void __fastcall CPropVRHand::ScriptAddHandAttachment(CPropVRHand *const this, HSCRIPT hAttachment)
{
  __int64 (__fastcall *v4)(IScriptVM *, HSCRIPT, ScriptClassDesc_t *); // r14
  ScriptClassDesc_t *Script; // rax
  CBaseVRHandAttachment *v6; // rsi

  if ( hAttachment != 0 )
  {
    v4 = *(*g_pScriptVM + 208LL);
    Script = GetScriptDesc<CEntityInstance>(0);
    v6 = v4(g_pScriptVM, hAttachment, Script);
  }
  else
  {
    v6 = 0;
  }
  CPropVRHand::AddHandAttachment(this, v6, 0);
}


// CPropVRHand::ScriptRemoveHandAttachmentByHandle  (line 776, @0x000000000236cb60, libserver.so)  // inlines: FindAndRemoveHandAttachment, HScriptToEntity<CBaseVRHandAttachment>
// calls: GetScriptDesc<CEntityInstance>, CPropVRHand::FindAndRemoveHandAttachmentInternal
void __fastcall CPropVRHand::ScriptRemoveHandAttachmentByHandle(CPropVRHand *const this, HSCRIPT hAttachment)
{
  __int64 (__fastcall *v4)(IScriptVM *, HSCRIPT, ScriptClassDesc_t *); // r14
  ScriptClassDesc_t *Script; // rax
  CBaseVRHandAttachment *v6; // rsi

  if ( hAttachment != 0 )
  {
    v4 = *(*g_pScriptVM + 208LL);
    Script = GetScriptDesc<CEntityInstance>(0);
    v6 = v4(g_pScriptVM, hAttachment, Script);
  }
  else
  {
    v6 = 0;
  }
  CPropVRHand::FindAndRemoveHandAttachmentInternal(this, v6, 1, 1);
}


// CPropVRHand::ScriptFindHandModelOverride  (line 782, @0x00000000023583d0, libserver.so)  // inlines: EntityToHScript, Get, GetAttachmentByIndex, GetEntityIdentity, GetEntryIndex, GetInstance, GetPublicScriptScope, IndexToIdentity, IsValid, LookupEntity, ToHScript, operator CEntityInstance*, operator[]
// calls: CPropVRHand::FindHandModelOverride, CEntityInstance::CreatePublicScriptScope
// globals: CEntityHandle::gm_pEntityList
HSCRIPT __fastcall CPropVRHand::ScriptFindHandModelOverride(CPropVRHand *const this, const char *pModelName)
{
  __int64 HandModelOverride; // rdx
  HSCRIPT result; // rax
  CHandle<CBaseVRHandAttachment> *v5; // rcx
  uint32 m_Index; // edx
  __int16 v7; // si
  CEntityIdentity *v8; // rcx
  CEntityIdentity *v9; // rcx
  CEntityInstance *m_pInstance; // rbx

  HandModelOverride = CPropVRHand::FindHandModelOverride(this, pModelName);
  result = 0;
  if ( HandModelOverride >= 0 && HandModelOverride < this->m_hAttachments.m_Vector.m_Size )
  {
    v5 = &this->m_hAttachments.m_Vector.m_Memory.m_pMemory[HandModelOverride];
    m_Index = v5->m_Index;
    if ( v5->m_Index + 2 > 1 )
    {
      v7 = v5->m_Index;
      v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v5->m_Index) >> 9) & 0x3F];
      if ( v8 != 0 )
      {
        v9 = &v8[v7 & 0x1FF];
        if ( v9 != 0 && m_Index == v9->m_EHandle.m_Index )
        {
          m_pInstance = v9->m_pInstance;
          if ( v9->m_pInstance != 0 )
          {
            result = m_pInstance->m_pEntity->m_hPublicScope.m_hScope;
            if ( result == 0 )
            {
              CEntityInstance::CreatePublicScriptScope(v9->m_pInstance, 0);
              return m_pInstance->m_pEntity->m_hPublicScope.m_hScope;
            }
          }
        }
      }
    }
  }
  return result;
}


// CPropVRHand::ScriptAddHandModelOverride  (line 789, @0x000000000236ed40, libserver.so)  // inlines: AcquireEntitySpawnerEntityVariantAllocator, AddKeyValue<CPropVRHand*>, AddToTail, Base, CEntityHandle, CEntityKeyValuesModifyScope, CEntitySpawner, CEntitySpawnerBase, CHandle, CUtlString, CVProfScope, Element, EntityToHScript, FindKeyHash, Free, Get, GetClassInfo, GetEHandle, GetEntityClass, GetEntityIdentity, GetEntryIndex, GetInstance, GetPublicScriptScope, GetSerialNumber, IndexToIdentity, Init, InvokeCallbacks, IsEmpty, IsEnabled, LookupEntity, OverrideAllocator, Release, ReleaseEntitySpawnerEntityVariantAllocator, Set, SetValue, SetValue<CPropVRHand*>, SetValues<char const*, CPropVRHand*>, Spawn, Spawn<char const*, CPropVRHand*>, ToHScript, operator CEntityInstance*, operator CVRHandModelOverride*, operator!, operator(), operator=, operator[], ~CEntityKeyValuesModifyScope, ~CEntitySpawner, ~CEntitySpawnerBase, ~CUtlString, ~CVProfScope
// calls: CEntityKeyValuesModifyScope::BeginModify, CEntitySystem::GetActiveSpawnGroupHandle, CEntitySystem::GetSpawnOriginOffset, CEntityKeyValues::SetValue, CEntityKeyValues::HasValue, CEntityKeyValuesModifyScope::Release, CUtlString::Get, CEntitySystem::CreateEntity, CEntitySystem::QueueSpawnEntity, CVProfile::ExitScope, CPropVRHand::AddHandAttachment, CUtlString::FreeMemoryBlock (23 total)
// strings: "Server Simulation", "Spawn", "Attempted to set attribute %s as if it was a non-attribute key!\n"
// globals: CEntityKeyValuesModifyScope::sm_pAllocatorOverride, CEntityHandle::gm_pEntityList
HSCRIPT __fastcall CPropVRHand::ScriptAddHandModelOverride(CPropVRHand *const this, const char *pModelName)
{
  CEntitySystem *v3; // rdi
  const matrix3x4a_t *SpawnOriginOffset; // rax
  __int64 v5; // rdx
  char v6; // al
  CEntityKeyValues *m_pEntityKeyValues; // rbx
  int m_enabled; // r14d
  EntityNetworkingMode_t m_nMode; // ebx
  const char *v10; // rax
  CEntityInstance *Entity; // rax
  CEntityInstance *v12; // r14
  CEntityIdentity *v13; // rax
  __int16 v14; // si
  CEntitySpawnerContext<CVRHandModelOverride> *m_pContext; // rbx
  CEntityKeyValues *i; // r15
  detail::GenericClass *m_pthis; // rdx
  void (*pfn)(detail::GenericClass *); // rax
  _QWORD *v19; // rdi
  CEntityIdentity *v20; // rax
  CBaseVRHandAttachment *m_pInstance; // r14
  CEntityIdentity *v22; // rax
  HSCRIPT m_hScope; // rbx
  CUtlScratchMemoryPool *v24; // rdi
  CEntityKeyValues *v25; // r13
  const char *m_pszClassname; // rdx
  int m_nCount; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v30; // cx
  __int64 v31; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v32; // rdx
  int m_nEntitySpawnerDataUseCount; // esi
  __int64 v34; // r14
  unsigned __int64 m_nAllocated; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v37; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v38; // rax
  uint16 m_flags; // dx
  int v40; // edx
  CEntityIdentity *m_pEntity; // rcx
  __int16 v42; // di
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v43; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v44; // rdx
  __int64 v45; // rax
  __int64 v46; // rcx
  __int16 v47; // ax
  int v48; // edx
  CEntityIdentity *v49; // rsi
  __int16 v50; // di
  bool v51; // [rsp+27h] [rbp-F9h]
  int v53; // [rsp+30h] [rbp-F0h]
  _QWORD v54[2]; // [rsp+40h] [rbp-E0h] BYREF
  CEntitySpawner<CVRHandModelOverride> spawner; // [rsp+50h] [rbp-D0h] BYREF

  spawner.m_modifyScope.m_pKeyValues = 0;
  spawner.m_modifyScope.m_pPrevAllocator = 0;
  CEntityKeyValuesModifyScope::BeginModify(&spawner.m_modifyScope, 0);
  spawner._vptr_CEntitySpawnerBase = off_409A7F0;
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
  spawner.m_pEntityClass = g_pEntityCVRHandModelOverrideClass;
  if ( g_pApplication != 0 )
    v6 = (*(g_pApplication->_vptr_IAppSystem + 24))(g_pApplication);
  else
    v6 = 0;
  spawner.m_bValidateKeys = v6;
  spawner.m_nMode = EntityNetworkingMode_t::ENTITY_NETWORKING_MODE_DEFAULT;
  (*spawner._vptr_CEntitySpawnerBase)(&spawner);
  CEntityKeyValues::SetValue(spawner.m_pEntityKeyValues, -926958586, pModelName);
  m_pEntityKeyValues = spawner.m_pEntityKeyValues;
  if ( spawner.m_pEntityKeyValues->m_nQueuedForSpawnCount <= 0 )
  {
    m_nCount = spawner.m_pEntityKeyValues->m_keyHashes.m_nCount;
    if ( m_nCount <= 0 )
    {
LABEL_54:
      CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int,(unsigned short)9,short>,unsigned int,short>::AddToTailGetPtr(&spawner.m_pEntityKeyValues->m_keyHashes);
      LOWORD(v34) = m_pEntityKeyValues->m_keyHashes.m_nCount - 1;
      m_nAllocated = m_pEntityKeyValues->m_keyHashes.m_nAllocated;
      if ( m_nAllocated != 0 )
      {
        if ( m_nAllocated <= 9 )
          m_pElements = (&m_pEntityKeyValues->m_keyHashes.m_nAllocAllocated + 1);
        else
          m_pElements = m_pEntityKeyValues->m_keyHashes.m_pElements;
      }
      else
      {
        m_pElements = 0;
      }
      v34 = v34;
      m_pElements[v34] = -1104771937;
      CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&m_pEntityKeyValues->m_keyValues);
      if ( m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
        v37 = m_pEntityKeyValues->m_keyValues.m_pElements;
      else
        v37 = 0;
      v38 = &v37[v34];
      m_flags = v38->m_value.m_flags;
      if ( (m_flags & 1) != 0 )
        v38->m_value.m_flags = m_flags & 0xFFFE;
      v38->m_value.m_uint64 = 0;
      v38->m_value.m_type = 13;
      v40 = -1;
      if ( this != 0 )
      {
        m_pEntity = this->m_pEntity;
        if ( m_pEntity != 0 )
        {
          v42 = 0x7FFF;
          if ( m_pEntity->m_EHandle.m_Index != -1 )
            v42 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
          v40 = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v42 & 0x7FFF;
          LODWORD(v54[0]) = v40;
        }
      }
      v38->m_value.m_int = v40;
      if ( m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
        v43 = m_pEntityKeyValues->m_keyValues.m_pElements;
      else
        v43 = 0;
      v43[v34].m_pAttributeName = 0;
      m_pEntityKeyValues = spawner.m_pEntityKeyValues;
LABEL_73:
      v53 = -1;
      m_pInstance = 0;
      if ( m_pEntityKeyValues == 0 )
        goto LABEL_28;
      goto LABEL_5;
    }
    v30 = spawner.m_pEntityKeyValues->m_keyHashes.m_nAllocated;
    v31 = 0;
    while ( 1 )
    {
      if ( v30 != 0 )
      {
        v32 = (&spawner.m_pEntityKeyValues->m_keyHashes.m_nAllocAllocated + 1);
        if ( v30 > 9 )
          v32 = spawner.m_pEntityKeyValues->m_keyHashes.m_pElements;
      }
      else
      {
        v32 = 0;
      }
      if ( v32[v31] == -1104771937 )
        break;
      if ( m_nCount <= ++v31 )
        goto LABEL_54;
    }
    if ( spawner.m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
    {
      v44 = spawner.m_pEntityKeyValues->m_keyValues.m_pElements;
      v45 = v31;
      v46 = &v44[v45];
      if ( v44[v45].m_pAttributeName != 0 )
      {
LABEL_71:
        Warning("Attempted to set attribute %s as if it was a non-attribute key!\n", v44[v45].m_pAttributeName);
LABEL_72:
        m_pEntityKeyValues = spawner.m_pEntityKeyValues;
        goto LABEL_73;
      }
    }
    else
    {
      v45 = v31;
      v44 = 0;
      v46 = v45 * 24;
      if ( *(v45 * 24 + 16) != 0 )
        goto LABEL_71;
    }
    v47 = *(v46 + 10);
    if ( (v47 & 1) != 0 )
      *(v46 + 10) = v47 & 0xFFFE;
    *v46 = 0;
    *(v46 + 8) = 13;
    v48 = -1;
    if ( this != 0 )
    {
      v49 = this->m_pEntity;
      if ( v49 != 0 )
      {
        v50 = 0x7FFF;
        if ( v49->m_EHandle.m_Index != -1 )
          v50 = v49->m_EHandle.m_Index & 0x7FFF;
        v48 = (((v49->m_EHandle.m_Index >> 15) - (v49->m_flags & 1)) << 15) | v50 & 0x7FFF;
        LODWORD(v54[0]) = v48;
      }
    }
    *v46 = v48;
    goto LABEL_72;
  }
  v53 = -1;
LABEL_5:
  m_enabled = g_VProfCurrentProfile.m_enabled;
  v51 = m_enabled != 0;
  if ( m_enabled != 0 )
  {
    CVProfile::EnterScope(&g_VProfCurrentProfile, "Spawn", 0, "Server Simulation", 0, 4);
    m_pEntityKeyValues = spawner.m_pEntityKeyValues;
  }
  if ( !CEntityKeyValues::HasValue(m_pEntityKeyValues, -971301790) )
  {
    m_pszClassname = spawner.m_pEntityClass->m_pClassInfo->m_pszClassname;
    if ( m_pszClassname != 0 )
      CEntityKeyValues::SetValue(spawner.m_pEntityKeyValues, -971301790, m_pszClassname);
  }
  CEntityKeyValuesModifyScope::Release(&spawner.m_modifyScope);
  m_nMode = spawner.m_nMode;
  v10 = CUtlString::Get(&spawner.m_scriptClassName);
  Entity = CEntitySystem::CreateEntity(
             g_pEntitySystem,
             spawner.m_hSpawnGroupHandle,
             spawner.m_pEntityClass,
             v10,
             m_nMode,
             -1,
             -1,
             0,
             0);
  v12 = Entity;
  if ( Entity != 0 )
  {
    v13 = Entity->m_pEntity;
    if ( v13 != 0 )
    {
      v14 = 0x7FFF;
      if ( v13->m_EHandle.m_Index != -1 )
        v14 = v13->m_EHandle.m_Index & 0x7FFF;
      v53 = (((v13->m_EHandle.m_Index >> 15) - (v13->m_flags & 1)) << 15) | v14 & 0x7FFF;
    }
    v54[0] = v13;
    v54[1] = spawner.m_pEntityKeyValues;
    (*(*g_pGameResourceService + 280LL))(
      g_pGameResourceService,
      spawner.m_hSpawnGroupHandle,
      1,
      v54,
      &spawner.m_mSpawnGroupToWorld);
    CEntitySystem::QueueSpawnEntity(g_pEntitySystem, v12, spawner.m_pEntityKeyValues);
    if ( spawner.m_pSpawnBatch == 0 )
      CEntitySystem::ExecuteQueuedCreation(g_pEntitySystem);
    m_pContext = spawner.m_pContext;
    for ( i = spawner.m_pEntityKeyValues; m_pContext != 0; m_pContext = m_pContext->m_pParent )
    {
      m_pthis = m_pContext->m_callback.m_Closure.m_pthis;
      pfn = m_pContext->m_callback.m_Closure.m_pFunction.__pfn;
      if ( m_pthis != 0 || pfn != 0 )
      {
        v19 = (m_pthis + m_pContext->m_callback.m_Closure.m_pFunction.__delta);
        if ( (pfn & 1) != 0 )
          pfn = *(pfn + *v19 - 1);
        (pfn)(v19, v12, i);
      }
    }
  }
  if ( v51 )
    CVProfile::ExitScope(&g_VProfCurrentProfile);
  if ( (v53 + 2) > 1 && (v20 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v53 >> 9) & 0x3F]) != 0 )
  {
    m_pInstance = 0;
    v22 = &v20[v53 & 0x1FF];
    if ( v22 != 0 && v53 == v22->m_EHandle.m_Index )
      m_pInstance = v22->m_pInstance;
  }
  else
  {
    m_pInstance = 0;
  }
LABEL_28:
  CPropVRHand::AddHandAttachment(this, m_pInstance, 0);
  if ( m_pInstance != 0 )
  {
    m_hScope = m_pInstance->m_pEntity->m_hPublicScope.m_hScope;
    if ( m_hScope == 0 )
    {
      CEntityInstance::CreatePublicScriptScope(m_pInstance, 0);
      m_hScope = m_pInstance->m_pEntity->m_hPublicScope.m_hScope;
    }
  }
  else
  {
    m_hScope = 0;
  }
  v24 = CEntityKeyValuesModifyScope::sm_pAllocatorOverride;
  spawner._vptr_CEntitySpawnerBase = off_409A7D0;
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
  return m_hScope;
}


// CPropVRHand::ScriptRemoveHandModelOverride  (line 798, @0x000000000236cbd0, libserver.so)  // inlines: Get, GetAttachmentByIndex, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, NetworkStateChanged, Remove, operator CEntityInstance*, operator[]
// calls: CPropVRHand::FindHandModelOverride, CUtlVectorBase<CHandle<CBaseVRHandAttachment>, CNetworkUtlVector_MemoryType<CHandle<CBaseVRHandAttachment>, -1> >::ShiftElementsLeft, CBaseVRHandAttachment::DetachFromHand, UTIL_Remove
// globals: CEntityHandle::gm_pEntityList
void __fastcall CPropVRHand::ScriptRemoveHandModelOverride(CPropVRHand *const this, const char *pModelName)
{
  int HandModelOverride; // eax
  int v4; // ebx
  CHandle<CBaseVRHandAttachment> *v5; // rdx
  uint32 m_Index; // eax
  __int16 v7; // cx
  CEntityIdentity *v8; // rdx
  CEntityIdentity *v9; // rdx
  CBaseVRHandAttachment *m_pInstance; // r13
  int (**vptr_IHandleEntity)(...); // rax
  __int64 v12; // rdx

  HandModelOverride = CPropVRHand::FindHandModelOverride(this, pModelName);
  v4 = HandModelOverride;
  if ( HandModelOverride >= 0 && HandModelOverride < this->m_hAttachments.m_Vector.m_Size )
  {
    v5 = &this->m_hAttachments.m_Vector.m_Memory.m_pMemory[HandModelOverride];
    m_Index = v5->m_Index;
    if ( v5->m_Index + 2 > 1 )
    {
      v7 = v5->m_Index;
      v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v5->m_Index) >> 9) & 0x3F];
      if ( v8 != 0 )
      {
        v9 = &v8[v7 & 0x1FF];
        if ( v9 != 0 && m_Index == v9->m_EHandle.m_Index )
        {
          m_pInstance = v9->m_pInstance;
          if ( v9->m_pInstance != 0 )
          {
            CUtlVectorBase<CHandle<CBaseVRHandAttachment>,CNetworkUtlVector_MemoryType<CHandle<CBaseVRHandAttachment>,-1>>::ShiftElementsLeft(
              &this->m_hAttachments.m_Vector,
              v4,
              1);
            vptr_IHandleEntity = this->_vptr_IHandleEntity;
            --this->m_hAttachments.m_Vector.m_Size;
            vptr_IHandleEntity[22](this, 1336, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
            while ( v4 < this->m_hAttachments.m_Vector.m_Size )
            {
              v12 = v4++;
              (*(this->_vptr_IHandleEntity + 22))(this, 1336, v12, 0xFFFFFFFFLL);
            }
            CBaseVRHandAttachment::DetachFromHand(m_pInstance);
            UTIL_Remove(m_pInstance);
          }
        }
      }
    }
  }
}


// CPropVRHand::ScriptRemoveAllHandModelOverrides  (line 811, @0x000000000236ccf0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, NetworkStateChanged, Remove, operator CBaseVRHandAttachment*, operator CEntityInstance*, operator[]
// calls: __dynamic_cast, CUtlVectorBase<CHandle<CBaseVRHandAttachment>, CNetworkUtlVector_MemoryType<CHandle<CBaseVRHandAttachment>, -1> >::ShiftElementsLeft, CBaseVRHandAttachment::DetachFromHand, UTIL_Remove
// globals: CEntityHandle::gm_pEntityList
void __fastcall CPropVRHand::ScriptRemoveAllHandModelOverrides(CPropVRHand *const this)
{
  int v2; // r12d
  CNetworkUtlVectorBase<CHandle<CBaseVRHandAttachment>,CPropVRHand::NetworkVar_m_hAttachments,-1> *p_m_hAttachments; // r14
  __int64 v4; // r13
  CHandle<CBaseVRHandAttachment> *v5; // rdx
  uint32 m_Index; // eax
  __int16 v7; // cx
  CEntityIdentity *v8; // rdx
  CEntityIdentity *v9; // rdx
  int (**vptr_IHandleEntity)(...); // rax
  int v11; // r15d
  __int64 v12; // rdx
  CVRHandModelOverride *pHandModelOverride; // [rsp+8h] [rbp-38h]

  v2 = this->m_hAttachments.m_Vector.m_Size - 1;
  if ( v2 >= 0 )
  {
    p_m_hAttachments = &this->m_hAttachments;
    v4 = v2;
    do
    {
      v5 = &this->m_hAttachments.m_Vector.m_Memory.m_pMemory[v4];
      m_Index = v5->m_Index;
      if ( v5->m_Index + 2 > 1 )
      {
        v7 = v5->m_Index;
        v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v5->m_Index) >> 9) & 0x3F];
        if ( v8 != 0 )
        {
          v9 = &v8[v7 & 0x1FF];
          if ( v9 != 0 && m_Index == v9->m_EHandle.m_Index && v9->m_pInstance != 0 )
          {
            pHandModelOverride = __dynamic_cast(
                                   v9->m_pInstance,
                                   &`typeinfo for'CBaseVRHandAttachment,
                                   &`typeinfo for'CVRHandModelOverride,
                                   0);
            if ( pHandModelOverride != 0 )
            {
              CUtlVectorBase<CHandle<CBaseVRHandAttachment>,CNetworkUtlVector_MemoryType<CHandle<CBaseVRHandAttachment>,-1>>::ShiftElementsLeft(
                &p_m_hAttachments->m_Vector,
                v2,
                1);
              vptr_IHandleEntity = this->_vptr_IHandleEntity;
              --this->m_hAttachments.m_Vector.m_Size;
              v11 = v2;
              vptr_IHandleEntity[22](this, 1336, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
              if ( this->m_hAttachments.m_Vector.m_Size > v2 )
              {
                do
                {
                  v12 = v11++;
                  (*(this->_vptr_IHandleEntity + 22))(this, 1336, v12, 0xFFFFFFFFLL);
                }
                while ( v11 < this->m_hAttachments.m_Vector.m_Size );
              }
              CBaseVRHandAttachment::DetachFromHand(pHandModelOverride);
              UTIL_Remove(pHandModelOverride);
            }
          }
        }
      }
      --v2;
      --v4;
    }
    while ( v2 != -1 );
  }
}


// CPropVRHand::ScriptGetHandAttachment  (line 827, @0x000000000234f180, libserver.so)  // inlines: EntityToHScript, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetPublicScriptScope, IndexToIdentity, IsValid, LookupEntity, ToHScript, operator CEntityInstance*
// calls: CEntityInstance::CreatePublicScriptScope
// globals: CEntityHandle::gm_pEntityList
HSCRIPT __fastcall CPropVRHand::ScriptGetHandAttachment(CPropVRHand *const this)
{
  HSCRIPT result; // rax
  CHandle<CBaseVRHandAttachment> *m_pMemory; // rcx
  uint32 m_Index; // edx
  __int16 v4; // si
  CEntityIdentity *v5; // rcx
  CEntityIdentity *v6; // rcx
  CEntityInstance *m_pInstance; // rbx

  result = 0;
  if ( this->m_hAttachments.m_Vector.m_Size != 0 )
  {
    m_pMemory = this->m_hAttachments.m_Vector.m_Memory.m_pMemory;
    m_Index = m_pMemory->m_Index;
    if ( m_pMemory->m_Index + 2 > 1 )
    {
      v4 = m_pMemory->m_Index;
      v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(m_pMemory->m_Index) >> 9) & 0x3F];
      if ( v5 != 0 )
      {
        v6 = &v5[v4 & 0x1FF];
        if ( v6 != 0 && m_Index == v6->m_EHandle.m_Index )
        {
          m_pInstance = v6->m_pInstance;
          if ( v6->m_pInstance != 0 )
          {
            result = m_pInstance->m_pEntity->m_hPublicScope.m_hScope;
            if ( result == 0 )
            {
              CEntityInstance::CreatePublicScriptScope(v6->m_pInstance, 0);
              return m_pInstance->m_pEntity->m_hPublicScope.m_hScope;
            }
          }
        }
      }
    }
  }
  return result;
}


// CPropVRHand::ScriptGetPlayerOwner  (line 836, @0x000000000234e7e0, libserver.so)  // inlines: EntityToHScript, Get, GetPublicScriptScope, ToHScript
// calls: CEntityInstance::CreatePublicScriptScope
HSCRIPT __fastcall CPropVRHand::ScriptGetPlayerOwner(CPropVRHand *const this)
{
  CEntityInstance *v1; // rax
  CEntityInstance *v3; // [rsp+8h] [rbp-8h]

  v1 = (*(this->_vptr_IHandleEntity + 261))(this);
  if ( v1 == 0 )
    return 0;
  if ( v1->m_pEntity->m_hPublicScope.m_hScope != 0 )
    return v1->m_pEntity->m_hPublicScope.m_hScope;
  v3 = v1;
  CEntityInstance::CreatePublicScriptScope(v1, 0);
  return v3->m_pEntity->m_hPublicScope.m_hScope;
}


// CPropVRHand::ScriptGetHandID  (line 842, @0x000000000234ad80, libserver.so)
int __fastcall CPropVRHand::ScriptGetHandID(CPropVRHand *const this)
{
  return this->m_nHandID.m_Value;
}


// CPropVRHand::SwapLogicalAttachmentsWith  (line 848, @0x000000000236f540, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<CBaseVRHandAttachment*>, CopyConstruct<CHandle<CBaseVRHandAttachment> >, Element, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, GrowMemory, IndexToIdentity, IsValid, LookupEntity, NetworkStateChanged, Purge, RemoveAll, Set, end, operator CBaseVRHandAttachment*, operator CEntityInstance*, operator=, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CBaseVRHandAttachment::AttachSwapHand, CPropVRHand::FindAndRemoveHandAttachmentInternal, CUtlMemory<CHandle<CBaseVRHandAttachment>, int>::Grow, CPropVRHand::SetActiveAttachmentInternal, CEntityHandle::GetHandleEntity, CUtlMemory<CBaseVRHandAttachment*, int>::Purge, CNetworkHandleBase<CBaseVRHandAttachment, CPropVRHand::NetworkVar_m_hActiveHandAttachment>::Set, CUtlMemory<CBaseVRHandAttachment*, int>::Grow, CUtlVectorBase<CBaseVRHandAttachment*, CUtlMemory<CBaseVRHandAttachment*, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CPropHMDAvatar::UpdateLogicalHand
// globals: CEntityHandle::gm_pEntityList
void __fastcall CPropVRHand::SwapLogicalAttachmentsWith(CPropVRHand *const this, CPropVRHand *pOther)
{
  int m_Size; // esi
  int v5; // ecx
  __int64 v6; // r14
  CHandle<CBaseVRHandAttachment> *v7; // rax
  uint32 v8; // ecx
  __int16 v9; // dx
  CEntityIdentity *v10; // rax
  CEntityIdentity *v11; // rax
  CHandle<CBaseVRHandAttachment> *v12; // rax
  CBaseVRHandAttachment *v13; // r15
  CEntityIdentity *m_pEntity; // rdx
  __int16 v15; // cx
  unsigned int v16; // r14d
  int v17; // eax
  CHandle<CBaseVRHandAttachment> *v18; // rax
  CBaseVRHandAttachment *v19; // r15
  CEntityIdentity *v20; // rdx
  __int16 v21; // cx
  unsigned int v22; // r14d
  int v23; // eax
  __int64 v24; // r13
  CHandle<CBaseVRHandAttachment> *v25; // rax
  uint32 m_Index; // ecx
  __int16 v27; // dx
  CEntityIdentity *v28; // rax
  CEntityIdentity *v29; // rax
  IHandleEntity *m_pInstance; // r14
  int v31; // r15d
  CBaseVRHandAttachment **v32; // rax
  IHandleEntity *v33; // r15
  int v34; // eax
  CBaseVRHandAttachment **v35; // rax
  CBaseVRHandAttachment *pMyActiveAttachmentThatSwapped; // [rsp+8h] [rbp-A8h]
  CBaseVRHandAttachment *pOtherActiveAttachmentThatSwapped; // [rsp+18h] [rbp-98h]
  CNetworkHandleBase<CBaseVRHandAttachment,CPropVRHand::NetworkVar_m_hActiveHandAttachment> *pOtherActiveAttachmentThatSwappeda; // [rsp+18h] [rbp-98h]
  CBaseVRHandAttachment **__for_end; // [rsp+20h] [rbp-90h]
  CBaseVRHandAttachment **__for_enda; // [rsp+20h] [rbp-90h]
  int __for_endb; // [rsp+20h] [rbp-90h]
  CBaseVRHandAttachment **m_pMemory; // [rsp+28h] [rbp-88h]
  CBaseVRHandAttachment **v43; // [rsp+28h] [rbp-88h]
  int v44; // [rsp+30h] [rbp-80h]
  int v45; // [rsp+30h] [rbp-80h]
  int __for_begin; // [rsp+40h] [rbp-70h]
  CUtlMemory<CBaseVRHandAttachment*,int> v47; // [rsp+48h] [rbp-68h] BYREF
  CUtlVector<CBaseVRHandAttachment*,CUtlMemory<CBaseVRHandAttachment*,int> > otherAttachmentsToSwap; // [rsp+60h] [rbp-50h] BYREF

  __for_begin = 0;
  m_Size = this->m_hAttachments.m_Vector.m_Size;
  v47.m_pMemory = 0;
  v47.m_nAllocationCount = 0;
  v47.m_nGrowSize = 0;
  if ( m_Size > 0 )
  {
    v24 = 0;
    pMyActiveAttachmentThatSwapped = 0;
    pOtherActiveAttachmentThatSwappeda = &this->m_hActiveHandAttachment;
    do
    {
      v25 = &this->m_hAttachments.m_Vector.m_Memory.m_pMemory[v24];
      m_Index = v25->m_Index;
      if ( v25->m_Index + 2 > 1 )
      {
        v27 = v25->m_Index;
        v28 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v25->m_Index) >> 9) & 0x3F];
        if ( v28 != 0 )
        {
          v29 = &v28[v27 & 0x1FF];
          if ( v29 != 0 && m_Index == v29->m_EHandle.m_Index )
          {
            m_pInstance = v29->m_pInstance;
            if ( v29->m_pInstance != 0 && (*(m_pInstance->_vptr_IHandleEntity + 259))(v29->m_pInstance) != 0 )
            {
              v31 = __for_begin;
              if ( __for_begin == v47.m_nAllocationCount )
                CUtlMemory<CBaseVRHandAttachment *,int>::Grow(&v47, 1);
              ++__for_begin;
              v32 = &v47.m_pMemory[v31];
              if ( v32 != 0 )
                *v32 = m_pInstance;
              if ( CEntityHandle::GetHandleEntity(&pOtherActiveAttachmentThatSwappeda->m_Value) != m_pInstance )
                m_pInstance = pMyActiveAttachmentThatSwapped;
              pMyActiveAttachmentThatSwapped = m_pInstance;
            }
          }
        }
      }
      ++v24;
    }
    while ( this->m_hAttachments.m_Vector.m_Size > v24 );
  }
  else
  {
    pMyActiveAttachmentThatSwapped = 0;
  }
  v5 = pOther->m_hAttachments.m_Vector.m_Size;
  otherAttachmentsToSwap.m_Size = 0;
  otherAttachmentsToSwap.m_Memory.m_pMemory = 0;
  otherAttachmentsToSwap.m_Memory.m_nAllocationCount = 0;
  otherAttachmentsToSwap.m_Memory.m_nGrowSize = 0;
  if ( v5 <= 0 )
  {
    pOtherActiveAttachmentThatSwapped = 0;
  }
  else
  {
    v6 = 0;
    pOtherActiveAttachmentThatSwapped = 0;
    do
    {
      v7 = &pOther->m_hAttachments.m_Vector.m_Memory.m_pMemory[v6];
      v8 = v7->m_Index;
      if ( v7->m_Index + 2 > 1 )
      {
        v9 = v7->m_Index;
        v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v7->m_Index) >> 9) & 0x3F];
        if ( v10 != 0 )
        {
          v11 = &v10[v9 & 0x1FF];
          if ( v11 != 0 && v8 == v11->m_EHandle.m_Index )
          {
            v33 = v11->m_pInstance;
            if ( v11->m_pInstance != 0 && (*(v33->_vptr_IHandleEntity + 259))(v33) != 0 )
            {
              v34 = otherAttachmentsToSwap.m_Size;
              __for_endb = otherAttachmentsToSwap.m_Size;
              if ( otherAttachmentsToSwap.m_Size == otherAttachmentsToSwap.m_Memory.m_nAllocationCount )
              {
                CUtlMemory<CBaseVRHandAttachment *,int>::Grow(&otherAttachmentsToSwap.m_Memory, 1);
                v34 = otherAttachmentsToSwap.m_Size;
              }
              otherAttachmentsToSwap.m_Size = v34 + 1;
              v35 = &otherAttachmentsToSwap.m_Memory.m_pMemory[__for_endb];
              if ( v35 != 0 )
                *v35 = v33;
              if ( CEntityHandle::GetHandleEntity(&pOther->m_hActiveHandAttachment.m_Value) != v33 )
                v33 = pOtherActiveAttachmentThatSwapped;
              pOtherActiveAttachmentThatSwapped = v33;
            }
          }
        }
      }
      ++v6;
    }
    while ( pOther->m_hAttachments.m_Vector.m_Size > v6 );
  }
  __for_end = &v47.m_pMemory[__for_begin];
  if ( v47.m_pMemory != __for_end )
  {
    m_pMemory = v47.m_pMemory;
    do
    {
      v13 = *m_pMemory;
      CPropVRHand::FindAndRemoveHandAttachmentInternal(this, *m_pMemory, 0, 0);
      v44 = -1;
      if ( v13 != 0 )
      {
        m_pEntity = v13->m_pEntity;
        if ( m_pEntity != 0 )
        {
          v15 = 0x7FFF;
          if ( m_pEntity->m_EHandle.m_Index != -1 )
            v15 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
          v44 = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v15 & 0x7FFF;
        }
      }
      v16 = pOther->m_hAttachments.m_Vector.m_Size;
      v17 = v16;
      if ( v16 == pOther->m_hAttachments.m_Vector.m_Memory.m_nAllocationCount )
      {
        CUtlMemory<CHandle<CBaseVRHandAttachment>,int>::Grow(&pOther->m_hAttachments.m_Vector.m_Memory, 1);
        v17 = pOther->m_hAttachments.m_Vector.m_Size;
      }
      pOther->m_hAttachments.m_Vector.m_Size = v17 + 1;
      v12 = &pOther->m_hAttachments.m_Vector.m_Memory.m_pMemory[v16];
      if ( v12 != 0 )
        v12->m_Index = v44;
      (*(pOther->_vptr_IHandleEntity + 22))(pOther, 1336, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      (*(pOther->_vptr_IHandleEntity + 22))(pOther, 1336, v16, 0xFFFFFFFFLL);
      CBaseVRHandAttachment::AttachSwapHand(v13, this, pOther);
      ++m_pMemory;
    }
    while ( __for_end != m_pMemory );
  }
  v43 = otherAttachmentsToSwap.m_Memory.m_pMemory;
  __for_enda = &otherAttachmentsToSwap.m_Memory.m_pMemory[otherAttachmentsToSwap.m_Size];
  if ( otherAttachmentsToSwap.m_Memory.m_pMemory != __for_enda )
  {
    do
    {
      v19 = *v43;
      CPropVRHand::FindAndRemoveHandAttachmentInternal(pOther, *v43, 0, 0);
      v45 = -1;
      if ( v19 != 0 )
      {
        v20 = v19->m_pEntity;
        if ( v20 != 0 )
        {
          v21 = 0x7FFF;
          if ( v20->m_EHandle.m_Index != -1 )
            v21 = v20->m_EHandle.m_Index & 0x7FFF;
          v45 = (((v20->m_EHandle.m_Index >> 15) - (v20->m_flags & 1)) << 15) | v21 & 0x7FFF;
        }
      }
      v22 = this->m_hAttachments.m_Vector.m_Size;
      v23 = v22;
      if ( v22 == this->m_hAttachments.m_Vector.m_Memory.m_nAllocationCount )
      {
        CUtlMemory<CHandle<CBaseVRHandAttachment>,int>::Grow(&this->m_hAttachments.m_Vector.m_Memory, 1);
        v23 = this->m_hAttachments.m_Vector.m_Size;
      }
      this->m_hAttachments.m_Vector.m_Size = v23 + 1;
      v18 = &this->m_hAttachments.m_Vector.m_Memory.m_pMemory[v22];
      if ( v18 != 0 )
        v18->m_Index = v45;
      (*(this->_vptr_IHandleEntity + 22))(this, 1336, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      (*(this->_vptr_IHandleEntity + 22))(this, 1336, v22, 0xFFFFFFFFLL);
      CBaseVRHandAttachment::AttachSwapHand(v19, pOther, this);
      ++v43;
    }
    while ( __for_enda != v43 );
  }
  if ( pOtherActiveAttachmentThatSwapped != 0 )
  {
    if ( pMyActiveAttachmentThatSwapped != 0 )
    {
      CNetworkHandleBase<CBaseVRHandAttachment,CPropVRHand::NetworkVar_m_hActiveHandAttachment>::Set(
        &this->m_hActiveHandAttachment,
        pOtherActiveAttachmentThatSwapped);
      CNetworkHandleBase<CBaseVRHandAttachment,CPropVRHand::NetworkVar_m_hActiveHandAttachment>::Set(
        &pOther->m_hActiveHandAttachment,
        pMyActiveAttachmentThatSwapped);
    }
    else
    {
      CPropVRHand::SetActiveAttachmentInternal(pOther, 0, 1, 0, 1);
      CPropVRHand::SetActiveAttachmentInternal(this, pOtherActiveAttachmentThatSwapped, 1, 1, 0);
    }
  }
  else if ( pMyActiveAttachmentThatSwapped != 0 )
  {
    CPropVRHand::SetActiveAttachmentInternal(this, 0, 1, 0, 1);
    CPropVRHand::SetActiveAttachmentInternal(pOther, pMyActiveAttachmentThatSwapped, 1, 1, 0);
  }
  otherAttachmentsToSwap.m_Size = 0;
  if ( (otherAttachmentsToSwap.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CBaseVRHandAttachment *,int>::Purge(&otherAttachmentsToSwap.m_Memory);
    if ( (otherAttachmentsToSwap.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CBaseVRHandAttachment *,int>::Purge(&otherAttachmentsToSwap.m_Memory);
  }
  if ( (v47.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CBaseVRHandAttachment *,int>::Purge(&v47);
    if ( (v47.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CBaseVRHandAttachment *,int>::Purge(&v47);
  }
}


// CPropVRHand::UpdateUseTransform  (line 1039, @0x0000000002358560, libserver.so)
// calls: CBaseAnimating::LookupAttachment
// callers: CPropVRHand::GetVecForward, CPropVRHand::GetUsePosition
// strings: "vr_controller_use"
bool __fastcall CPropVRHand::UpdateUseTransform(CPropVRHand *const this)
{
  AttachmentHandle_t m_nAttachUseIndex; // al
  bool result; // al

  m_nAttachUseIndex = this->m_nAttachUseIndex;
  result = (m_nAttachUseIndex != 0
         || (m_nAttachUseIndex = CBaseAnimating::LookupAttachment(this, "vr_controller_use"),
             this->m_nAttachUseIndex = m_nAttachUseIndex,
             m_nAttachUseIndex != 0))
        && (*(this->_vptr_IHandleEntity + 220))(this, m_nAttachUseIndex, &this->m_matUseTransform);
  return result;
}


// CPropVRHand::UpdateHoldTransform  (line 1060, @0x00000000023586c0, libserver.so)
// calls: CBaseAnimating::LookupAttachment
// callers: CPropVRHand::GetHoldTransform
// strings: "vr_controller_hold"
bool __fastcall CPropVRHand::UpdateHoldTransform(CPropVRHand *const this)
{
  AttachmentHandle_t m_nAttachHoldIndex; // al
  bool result; // al

  m_nAttachHoldIndex = this->m_nAttachHoldIndex;
  result = (m_nAttachHoldIndex != 0
         || (m_nAttachHoldIndex = CBaseAnimating::LookupAttachment(this, "vr_controller_hold"),
             this->m_nAttachHoldIndex = m_nAttachHoldIndex,
             m_nAttachHoldIndex != 0))
        && (*(this->_vptr_IHandleEntity + 220))(this, m_nAttachHoldIndex, &this->m_matHoldTransform);
  return result;
}


// CPropVRHand::GetVecForward  (line 1069, @0x00000000023585c0, libserver.so)
// calls: CPropVRHand::UpdateUseTransform, CBaseEntity::EntityToWorldTransform
Vector __fastcall CPropVRHand::GetVecForward(CPropVRHand *const this)
{
  float v2; // xmm0_4
  float v3; // xmm2_4
  matrix3x4_t *v6; // rax
  __int64 v7; // [rsp+10h] [rbp-20h]
  vec_t v8; // [rsp+18h] [rbp-18h]
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  if ( CPropVRHand::UpdateUseTransform(this) )
  {
    v2 = this->m_matUseTransform.m_flMatVal[2][0];
    v3 = this->m_matUseTransform.m_flMatVal[0][0];
    HIDWORD(v7) = LODWORD(this->m_matUseTransform.m_flMatVal[1][0]);
  }
  else
  {
    v6 = CBaseEntity::EntityToWorldTransform(this);
    v2 = v6->m_flMatVal[2][0];
    v3 = v6->m_flMatVal[0][0];
    HIDWORD(v7) = LODWORD(v6->m_flMatVal[1][0]);
  }
  v8 = v2;
  *&v7 = v3;
  *&result.x = v7;
  result.z = v8;
  return result;
}


// CPropVRHand::GetUsePosition  (line 1087, @0x0000000002358640, libserver.so)
// calls: CPropVRHand::UpdateUseTransform, CBaseEntity::EntityToWorldTransform
Vector __fastcall CPropVRHand::GetUsePosition(CPropVRHand *const this)
{
  float v2; // xmm0_4
  float v3; // xmm2_4
  matrix3x4_t *v6; // rax
  __int64 v7; // [rsp+10h] [rbp-20h]
  vec_t v8; // [rsp+18h] [rbp-18h]
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  if ( CPropVRHand::UpdateUseTransform(this) )
  {
    v2 = this->m_matUseTransform.m_flMatVal[2][3];
    v3 = this->m_matUseTransform.m_flMatVal[0][3];
    HIDWORD(v7) = LODWORD(this->m_matUseTransform.m_flMatVal[1][3]);
  }
  else
  {
    v6 = CBaseEntity::EntityToWorldTransform(this);
    v2 = v6->m_flMatVal[2][3];
    v3 = v6->m_flMatVal[0][3];
    HIDWORD(v7) = LODWORD(v6->m_flMatVal[1][3]);
  }
  v8 = v2;
  *&v7 = v3;
  *&result.x = v7;
  result.z = v8;
  return result;
}


// CPropVRHand::GetHoldTransform  (line 1103, @0x0000000002358720, libserver.so)  // inlines: ConcatTransforms, GetTrackedAngles, GetTrackedPosition
// calls: CPropVRHand::UpdateHoldTransform, CBaseEntity::EntityToWorldTransform, CBaseAnimating::GetAttachmentLocal, AngleMatrix, ConcatTransforms
matrix3x4_t *__fastcall CPropVRHand::GetHoldTransform(
        matrix3x4_t *__return_ptr retstr,
        CPropVRHand *const this,
        bool bUseActualTrackedPosition)
{
  vec_t z; // xmm0_4
  vec_t x; // xmm2_4
  vec_t y; // xmm1_4
  vec_t v9; // xmm0_4
  vec_t v10; // xmm2_4
  QAngle angles; // [rsp+0h] [rbp-A0h] BYREF
  Vector position; // [rsp+10h] [rbp-90h] BYREF
  matrix3x4_t matHoldTransformLocal; // [rsp+20h] [rbp-80h] BYREF
  matrix3x4_t matTrackedTransform; // [rsp+50h] [rbp-50h] BYREF

  if ( bUseActualTrackedPosition
    && CPropVRHand::UpdateHoldTransform(this)
    && CBaseAnimating::GetAttachmentLocal(this, this->m_nAttachHoldIndex, &matHoldTransformLocal) )
  {
    z = this->m_vTrackedPosition.m_Value.z;
    x = this->m_vTrackedPosition.m_Value.x;
    position.y = this->m_vTrackedPosition.m_Value.y;
    position.z = z;
    y = this->m_qTrackedAngles.m_Value.y;
    v9 = this->m_qTrackedAngles.m_Value.z;
    position.x = x;
    v10 = this->m_qTrackedAngles.m_Value.x;
    angles.y = y;
    angles.z = v9;
    angles.x = v10;
    AngleMatrix(&angles, &position, &matTrackedTransform);
    ConcatTransforms(&matTrackedTransform, &matHoldTransformLocal, retstr);
  }
  else if ( CPropVRHand::UpdateHoldTransform(this) )
  {
    *&retstr->m_flMatVal[0][0] = *&this->m_matHoldTransform.m_flMatVal[0][0];
    *&retstr->m_flMatVal[0][2] = *&this->m_matHoldTransform.m_flMatVal[0][2];
    *&retstr->m_flMatVal[1][0] = *&this->m_matHoldTransform.m_flMatVal[1][0];
    *&retstr->m_flMatVal[1][2] = *&this->m_matHoldTransform.m_flMatVal[1][2];
    *&retstr->m_flMatVal[2][0] = *&this->m_matHoldTransform.m_flMatVal[2][0];
    *&retstr->m_flMatVal[2][2] = *&this->m_matHoldTransform.m_flMatVal[2][2];
  }
  else
  {
    *retstr = *CBaseEntity::EntityToWorldTransform(this);
  }
  return retstr;
}


// CPropVRHand::PostSetModel  (line 1138, @0x000000000234fae0, libserver.so)
// calls: CPropVRTrackedObject::PostSetModel
void __fastcall CPropVRHand::PostSetModel(CPropVRHand *const this)
{
  CPropVRTrackedObject::PostSetModel(this);
  this->m_nAttachUseIndex = 0;
  this->m_nAttachHoldIndex = 0;
}


// CPropVRHand::FireHapticPulse  (line 1147, @0x0000000002370360, libserver.so)  // inlines: CNetMessagePB, CUserMessageHandHapticPulse_t, CUserMessagePB, FindGameEvent<CUserMessageHandHapticPulse_t>, FindOrCreateGameEvent<CUserMessageHandHapticPulse_t>, PostEvent<CUserMessageHandHapticPulse_t>, set_hand_id, set_has_hand_id, set_has_pulse_type, set_pulse_type, ~CNetMessagePB, ~CUserMessageHandHapticPulse_t, ~CUserMessagePB
// calls: CRecipientFilter::CRecipientFilter, CRecipientFilter::MakeReliable, CRecipientFilter::AddRecipient, CUserMessageHapticPulse::CUserMessageHapticPulse, CUserMessageHapticPulse::~CUserMessageHapticPulse, CRecipientFilter::~CRecipientFilter, __stack_chk_fail, _Unwind_Resume
// callers: CPointValueRemapper::UpdateInternal, CPropVRHand::ScriptFireHapticPulse
// globals: IGameEventSystem::FindOrCreateGameEvent<CUserMessageHandHapticPulse_t>(bool)::s_hEvent
void __fastcall CPropVRHand::FireHapticPulse(CPropVRHand *const this, EHapticPulseType nPulseType)
{
  const CEntityInstance *v4; // rax
  int m_Value; // edx
  __int64 v6; // r14
  IGameEventSystem *v7; // r13
  void (__fastcall *v8)(IGameEventSystem *, _QWORD, __int64, CRecipientFilter *, __int64, _QWORD *, __int64); // r15
  _QWORD v9[2]; // [rsp+10h] [rbp-190h] BYREF
  int v10; // [rsp+20h] [rbp-180h]
  int v11; // [rsp+28h] [rbp-178h]
  EHapticPulseType nPulseTypea; // [rsp+2Ch] [rbp-174h]
  CRecipientFilter filter; // [rsp+30h] [rbp-170h] BYREF
  unsigned __int64 v14; // [rsp+168h] [rbp-38h]

  v14 = __readfsqword(0x28u);
  CRecipientFilter::CRecipientFilter(&filter);
  CRecipientFilter::MakeReliable(&filter);
  v4 = (*(this->_vptr_IHandleEntity + 261))(this);
  CRecipientFilter::AddRecipient(&filter, v4);
  CUserMessageHapticPulse::CUserMessageHapticPulse(v9);
  m_Value = this->m_nHandID.m_Value;
  nPulseTypea = nPulseType;
  v9[0] = off_4094D30;
  v6 = IGameEventSystem::FindOrCreateGameEvent<CUserMessageHandHapticPulse_t>(bool)::s_hEvent;
  v11 = m_Value;
  v10 |= 3u;
  v7 = g_pGameEventSystem;
  v8 = *(*g_pGameEventSystem + 128LL);
  (*(*g_pNetworkMessages + 96LL))(
    g_pNetworkMessages,
    IGameEventSystem::FindOrCreateGameEvent<CUserMessageHandHapticPulse_t>(bool)::s_hEvent);
  v8(v7, 0, 1, &filter, v6, v9, 32);
  v9[0] = &off_4094BB0;
  CUserMessageHapticPulse::~CUserMessageHapticPulse(v9);
  CRecipientFilter::~CRecipientFilter(&filter);
}


// CPropVRHand::GetTriggerAnalog  (line 1180, @0x00000000023588b0, libserver.so)  // inlines: operator><float>
float __fastcall CPropVRHand::GetTriggerAnalog(const CPropVRHand *const this)
{
  float m_Value; // xmm1_4
  float result; // xmm0_4

  m_Value = this->m_flTriggerAnalogValue.m_Value;
  result = 1.0;
  if ( m_Value <= 1.0 )
    return fmaxf(0.0, m_Value);
  return result;
}


// CPropVRHand::GetGripAnalog  (line 1189, @0x00000000023588e0, libserver.so)  // inlines: GetTriggerAnalog, HasAnalogGrip, operator!=<int>, operator><float>
float __fastcall CPropVRHand::GetGripAnalog(const CPropVRHand *const this)
{
  float result; // xmm0_4
  float v2; // xmm1_4

  result = this->m_flGripAnalogValue.m_Value;
  if ( result == -1.0 )
  {
    result = this->m_flTriggerAnalogValue.m_Value;
    v2 = 1.0;
    if ( result > 1.0 )
      return v2;
  }
  else
  {
    v2 = 1.0;
    if ( result > 1.0 )
      return v2;
  }
  v2 = 0.0;
  if ( result < 0.0 )
    return v2;
  return result;
}


// CPropVRHand::HasAnalogGrip  (line 1203, @0x0000000002358930, libserver.so)  // inlines: operator!=<int>
bool __fastcall CPropVRHand::HasAnalogGrip(const CPropVRHand *const this)
{
  return this->m_flGripAnalogValue.m_Value != -1.0;
}


// CPropVRHand::GetPadAnalog  (line 1208, @0x0000000002358950, libserver.so)
void __fastcall CPropVRHand::GetPadAnalog(const CPropVRHand *const this, float *pflX, float *pflY)
{
  *pflX = this->m_flTrackpadOrJoystickAnalogValueX.m_Value;
  *pflY = this->m_flTrackpadOrJoystickAnalogValueY.m_Value;
}


// CPropVRHand::GetOtherHand  (line 1219, @0x0000000002358970, libserver.so)  // inlines: CEntityHandle, Get, GetEntityIdentity, GetEntryIndex, GetHandleEntity, GetInstance, GetSerialNumber, GetVRHandRaw, IndexToIdentity, Init, IsValid, LookupEntity, operator CEntityInstance*, operator CPropVRHand*, operator->
// globals: CEntityHandle::gm_pEntityList
CPropVRHand *__fastcall CPropVRHand::GetOtherHand(const CPropVRHand *const this)
{
  bool v1; // r8
  unsigned __int16 v2; // dx
  int v3; // esi
  __int16 v4; // ax
  uint32 v5; // edx
  CEntityInstance *m_pInstance; // rcx
  int v7; // eax
  CEntityIdentity *v8; // rdx
  CEntityIdentity *v9; // rdx
  unsigned __int16 *v10; // rcx
  CPropVRHand *result; // rax
  int v12; // edx
  __int16 v13; // si
  CEntityIdentity *v14; // rcx
  CEntityIdentity *v15; // rcx
  __int64 v16; // [rsp-8h] [rbp-8h]

  if ( !this->m_bInitialized.m_Value )
    return 0;
  v1 = this->m_nHandID.m_Value == 0;
  if ( this->m_hHMDAvatar.m_Value.m_Index == -1 )
  {
    v2 = 0x7FFF;
    v3 = 0x7FFF;
  }
  else
  {
    v2 = this->m_hHMDAvatar.m_Value.m_Index & 0x7FFF;
    v3 = v2;
  }
  v4 = v2 | *(&v16 - 2) & 0x8000;
  v5 = this->m_hHMDAvatar.m_Value.m_Index >> 15;
  m_pInstance = 0;
  *(&v16 - 8) = v4;
  v7 = (v5 << 15) | *(&v16 - 2) & 0x7FFF;
  *(&v16 - 4) = v7;
  if ( (v7 + 2) > 1 )
  {
    v8 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v3 >> 9];
    if ( v8 != 0 )
    {
      v9 = &v8[v3 & 0x1FF];
      if ( v9 != 0 && v7 == v9->m_EHandle.m_Index )
        m_pInstance = v9->m_pInstance;
    }
  }
  v10 = (&m_pInstance[28] + 4 * v1);
  result = 0;
  v12 = *v10;
  if ( (*v10 + 2) > 1 )
  {
    v13 = *v10;
    v14 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(*v10 >> 9) & 0x3F];
    if ( v14 != 0 )
    {
      v15 = &v14[v13 & 0x1FF];
      if ( v15 != 0 && v12 == v15->m_EHandle.m_Index )
        return v15->m_pInstance;
    }
  }
  return result;
}


// CPropVRHand::IsLogicalHand  (line 1237, @0x0000000002358a90, libserver.so)  // inlines: CEntityHandle, GetEntryIndex, GetHandleEntity, GetInstance, GetSerialNumber, GetVRHandSlotLogical, IndexToIdentity, Init, LookupEntity, operator->, operator==<vr_controller_slots_t>
bool __fastcall CPropVRHand::IsLogicalHand(CPropVRHand *const this, eLogicalHandType nHand)
{
  unsigned __int16 v2; // dx
  int v3; // r8d
  CEntityInstance *m_pInstance; // r9
  uint32 v5; // eax
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  int v8; // eax

  if ( this->m_hHMDAvatar.m_Value.m_Index == -1 )
  {
    v2 = 0x7FFF;
    v3 = 0x7FFF;
  }
  else
  {
    v2 = this->m_hHMDAvatar.m_Value.m_Index & 0x7FFF;
    v3 = v2;
  }
  m_pInstance = 0;
  v5 = (this->m_hHMDAvatar.m_Value.m_Index >> 15 << 15) | v2 & 0x7FFF;
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
  v8 = 0;
  if ( nHand <= eLogicalHandType::LOGICAL_HAND_TYPE_OFF_HAND )
    v8 = *(&m_pInstance[27].m_CScriptComponent + nHand);
  return this->m_nHandID.m_Value == v8;
}


// CPropVRHand::IsLiteralHand  (line 1243, @0x0000000002358b60, libserver.so)  // inlines: CEntityHandle, GetEntryIndex, GetHandleEntity, GetInstance, GetSerialNumber, GetVRHandSlotLiteral, IndexToIdentity, Init, LookupEntity, operator->, operator==<vr_controller_slots_t>
// callers: CBaseVRHandAttachment::SelectWeightedSequenceWithHandModifier
bool __fastcall CPropVRHand::IsLiteralHand(CPropVRHand *const this, eLiteralHandType nHand)
{
  unsigned __int16 v2; // dx
  int v3; // r8d
  CEntityInstance *m_pInstance; // r9
  uint32 v5; // eax
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  int v8; // eax

  if ( this->m_hHMDAvatar.m_Value.m_Index == -1 )
  {
    v2 = 0x7FFF;
    v3 = 0x7FFF;
  }
  else
  {
    v2 = this->m_hHMDAvatar.m_Value.m_Index & 0x7FFF;
    v3 = v2;
  }
  m_pInstance = 0;
  v5 = (this->m_hHMDAvatar.m_Value.m_Index >> 15 << 15) | v2 & 0x7FFF;
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
  v8 = 0;
  if ( nHand <= eLiteralHandType::LITERAL_HAND_TYPE_LEFT )
    v8 = *(&m_pInstance[27].m_worldGroupId.m_nHashCode + nHand);
  return this->m_nHandID.m_Value == v8;
}


// CPropVRHand::UpdatePoseOfAttachedEntity  (line 1250, @0x0000000002358c30, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CBaseVRHandAttachment*, operator CEntityInstance*, operator[]
// calls: CBaseAnimating::StudioFrameAdvance
// callers: CPropVRHand::PostUpdateModifyPose
// globals: CEntityHandle::gm_pEntityList
void __fastcall CPropVRHand::UpdatePoseOfAttachedEntity(
        CPropVRHand *const this,
        const Vector *const vOrigin,
        const QAngle *const qAngles,
        float flModelScale)
{
  __int64 v8; // r12
  int v9; // r13d
  CHandle<CBaseVRHandAttachment> *v10; // rcx
  uint32 m_Index; // eax
  unsigned __int64 m_Index_low; // rcx
  CEntityIdentity *v13; // rdx
  CEntityIdentity *v14; // rdx
  CBaseAnimating *m_pInstance; // r14
  char v16; // al
  float v17; // [rsp+4h] [rbp-3Ch]
  const QAngle *v18; // [rsp+8h] [rbp-38h]

  if ( this->m_hAttachments.m_Vector.m_Size > 0 )
  {
    v8 = 0;
    v9 = 0;
    do
    {
      v10 = &this->m_hAttachments.m_Vector.m_Memory.m_pMemory[v8];
      m_Index = v10->m_Index;
      if ( v10->m_Index + 2 > 1 )
      {
        m_Index_low = LOWORD(v10->m_Index);
        v13 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(m_Index_low >> 9) & 0x3F];
        if ( v13 != 0 )
        {
          v14 = &v13[m_Index_low & 0x1FF];
          if ( v14 != 0 && m_Index == v14->m_EHandle.m_Index )
          {
            m_pInstance = v14->m_pInstance;
            if ( v14->m_pInstance != 0 )
            {
              v17 = flModelScale;
              v18 = qAngles;
              v16 = (*(m_pInstance->_vptr_IHandleEntity + 255))(m_pInstance);
              qAngles = v18;
              flModelScale = v17;
              if ( v16 != 0 )
              {
                (*(m_pInstance->_vptr_IHandleEntity + 253))(m_pInstance, vOrigin, v18, v17);
                (*(m_pInstance->_vptr_IHandleEntity + 254))(m_pInstance);
                CBaseAnimating::StudioFrameAdvance(m_pInstance, AnimationAdvanceType_t::ANIM_ADVANCE_NORMAL);
                qAngles = v18;
                flModelScale = v17;
              }
            }
          }
        }
      }
      ++v9;
      ++v8;
    }
    while ( this->m_hAttachments.m_Vector.m_Size > v9 );
  }
}


// CPropVRHand::AttachmentsThink  (line 1266, @0x0000000002358da0, libserver.so)  // inlines: Get, GetGripAnalog, GetInstance, GetPadAnalog, GetTriggerAnalog, HasAnalogGrip, SetHoldTransform, operator CBaseVRHandAttachment*, operator!=<int>, operator><float>, operator[]
// calls: CInteractionManager::Think, CEntityHandle::operator CEntityInstance*
// callers: CPropHMDAvatar::AttachmentsThink
void __fastcall CPropVRHand::AttachmentsThink(CPropVRHand *const this)
{
  __int64 v2; // rax
  __m128 m_Value_low; // xmm0
  uint64 m_afButtonLast; // rax
  float m_Value; // xmm2_4
  int (**vptr_IHandleEntity)(...); // rax
  __int64 v7; // rax
  __int64 v8; // r8
  __int64 v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // r12
  int v13; // r13d
  CEntityInstance *v14; // rax
  CBasePlayer *pPlayer; // [rsp+8h] [rbp-B8h]
  attachment_input_state_t sAttachmentInput; // [rsp+10h] [rbp-B0h] BYREF
  __int64 v17; // [rsp+40h] [rbp-80h] BYREF
  __int64 v18; // [rsp+48h] [rbp-78h]
  __int64 v19; // [rsp+50h] [rbp-70h]
  __int64 v20; // [rsp+58h] [rbp-68h]
  __int64 v21; // [rsp+60h] [rbp-60h]
  __int64 v22; // [rsp+68h] [rbp-58h]
  __int64 v23; // [rsp+70h] [rbp-50h]
  __int64 v24; // [rsp+78h] [rbp-48h]
  __int64 v25; // [rsp+80h] [rbp-40h]
  __int64 v26; // [rsp+88h] [rbp-38h]
  __int64 v27; // [rsp+90h] [rbp-30h]
  __int64 v28; // [rsp+98h] [rbp-28h]

  v2 = (*(this->_vptr_IHandleEntity + 261))(this);
  if ( v2 == 0 )
    return;
  pPlayer = v2;
  (*(this->_vptr_IHandleEntity + 267))(this);
  m_Value_low = LODWORD(this->m_flTriggerAnalogValue.m_Value);
  sAttachmentInput.m_nButtons = pPlayer->m_nButtons;
  sAttachmentInput.m_afButtonPressed = pPlayer->m_afButtonPressed;
  m_afButtonLast = pPlayer->m_afButtonLast;
  sAttachmentInput.m_afButtonReleased = pPlayer->m_afButtonReleased;
  sAttachmentInput.m_afButtonLast = m_afButtonLast;
  if ( m_Value_low.m128_f32[0] > 1.0 )
  {
    m_Value = this->m_flGripAnalogValue.m_Value;
    sAttachmentInput.m_flTriggerAnalogValue = 1.0;
    if ( m_Value == -1.0 )
      goto LABEL_6;
LABEL_5:
    if ( m_Value > 1.0 )
    {
LABEL_6:
      m_Value_low.m128_i32[0] = 1065353216;
      goto LABEL_7;
    }
    if ( m_Value >= 0.0 )
    {
      m_Value_low.m128_f32[0] = m_Value;
      goto LABEL_7;
    }
LABEL_16:
    m_Value_low.m128_i32[0] = 0;
    goto LABEL_7;
  }
  LODWORD(sAttachmentInput.m_flTriggerAnalogValue) = _mm_andnot_ps(_mm_cmplt_ss(m_Value_low, 0LL), m_Value_low).m128_u32[0];
  m_Value = this->m_flGripAnalogValue.m_Value;
  if ( m_Value != -1.0 )
    goto LABEL_5;
  if ( m_Value_low.m128_f32[0] > 1.0 )
    goto LABEL_6;
  if ( m_Value_low.m128_f32[0] < 0.0 )
    goto LABEL_16;
LABEL_7:
  LODWORD(sAttachmentInput.m_flGripAnalogValue) = m_Value_low.m128_i32[0];
  vptr_IHandleEntity = this->_vptr_IHandleEntity;
  sAttachmentInput.m_flTrackpadOrJoystickAnalogValueX = this->m_flTrackpadOrJoystickAnalogValueX.m_Value;
  sAttachmentInput.m_flTrackpadOrJoystickAnalogValueY = this->m_flTrackpadOrJoystickAnalogValueY.m_Value;
  vptr_IHandleEntity[270](&v17, this, 0);
  v7 = v22;
  v8 = v17;
  v9 = v19;
  v10 = v20;
  v24 = v18;
  v11 = v21;
  *&this->m_InteractionMgr.m_matHoldTransform.m_flMatVal[0][2] = v18;
  *&this->m_InteractionMgr.m_matHoldTransform.m_flMatVal[2][2] = v7;
  *&this->m_InteractionMgr.m_matHoldTransform.m_flMatVal[0][0] = v8;
  *&this->m_InteractionMgr.m_matHoldTransform.m_flMatVal[1][0] = v9;
  *&this->m_InteractionMgr.m_matHoldTransform.m_flMatVal[1][2] = v10;
  *&this->m_InteractionMgr.m_matHoldTransform.m_flMatVal[2][0] = v11;
  v28 = v7;
  v23 = v8;
  v25 = v9;
  v26 = v10;
  v27 = v11;
  CInteractionManager::Think(&this->m_InteractionMgr);
  if ( this->m_hAttachments.m_Vector.m_Size > 0 )
  {
    v12 = 0;
    v13 = 0;
    do
    {
      v14 = CEntityHandle::operator CEntityInstance *(&this->m_hAttachments.m_Vector.m_Memory.m_pMemory[v12]);
      if ( v14 != 0 )
        (*(v14->_vptr_IHandleEntity + 256))(v14, &sAttachmentInput);
      ++v13;
      ++v12;
    }
    while ( this->m_hAttachments.m_Vector.m_Size > v13 );
  }
}


// CPropVRHand::GetPlayerOwner  (line 1333, @0x000000000234fcd0, libserver.so)  // inlines: CEntityHandle, GetEntryIndex, GetHandleEntity, GetInstance, GetSerialNumber, IndexToIdentity, Init, LookupEntity, operator->
CBasePlayer *__fastcall CPropVRHand::GetPlayerOwner(const CPropVRHand *const this)
{
  uint32 v1; // ecx
  unsigned __int16 v2; // dx
  __int64 v3; // rsi
  CEntityInstance *m_pInstance; // rdi
  int v5; // eax
  CEntitySystem *v6; // rcx
  CEntityIdentity *v7; // rdx
  __int64 v8; // rsi
  __int64 v10; // [rsp-8h] [rbp-8h]

  if ( !this->m_bInitialized.m_Value )
    return 0;
  v1 = this->m_hHMDAvatar.m_Value.m_Index >> 15;
  if ( this->m_hHMDAvatar.m_Value.m_Index == -1 )
  {
    v2 = 0x7FFF;
    v3 = 0x7FFF;
  }
  else
  {
    v2 = this->m_hHMDAvatar.m_Value.m_Index & 0x7FFF;
    v3 = v2;
  }
  m_pInstance = 0;
  *(&v10 - 8) = v2 | *(&v10 - 2) & 0x8000;
  v5 = (v1 << 15) | *(&v10 - 2) & 0x7FFF;
  *(&v10 - 4) = v5;
  v6 = g_pEntitySystem;
  v7 = (v5 + 2);
  if ( v7 > 1 )
  {
    v7 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v3 >> 9];
    if ( v7 != 0 )
    {
      v8 = v3 & 0x1FF;
      v6 = (8 * v8);
      v3 = 120 * v8;
      v7 = (v7 + v3);
      if ( v7 != 0 && v5 == v7->m_EHandle.m_Index )
        m_pInstance = v7->m_pInstance;
    }
  }
  return (*(m_pInstance->_vptr_IHandleEntity + 261))(m_pInstance, v3, v7, v6);
}


// UTIL_ApplyLocalAttachmentInvTransform  (line 1343, @0x0000000002359060, libserver.so)  // inlines: ConcatTransforms, InverseTR, MatrixAngles, MatrixPosition, SetToIdentity
// calls: CBaseEntity::GetModel, AngleMatrix, SetIdentityMatrix, CBaseAnimating::LookupAttachment, CBaseAnimating::GetAttachmentLocal, MatrixInvert, ConcatTransforms, MatrixAngles
// callers: CBaseVRHandAttachment::UpdatePose, CPropVRTrackedObject::UpdateTrackingData, CVRHandModelOverride::UpdatePose
void __fastcall UTIL_ApplyLocalAttachmentInvTransform(
        const CBaseAnimating *pEnt,
        Vector *const vecPos,
        QAngle *const angRot,
        const char *pszAttachmentName)
{
  AttachmentHandle_t v8; // al
  matrix3x4_t matDesiredTransform; // [rsp+10h] [rbp-F0h] BYREF
  matrix3x4_t matAttachLocal; // [rsp+40h] [rbp-C0h] BYREF
  matrix3x4_t matFinalTransform; // [rsp+70h] [rbp-90h] BYREF
  matrix3x4_t out; // [rsp+A0h] [rbp-60h] BYREF

  if ( pEnt != 0 )
  {
    CBaseEntity::GetModel(&out, pEnt);
    if ( *&out.m_flMatVal[0][0] != 0 )
    {
      AngleMatrix(angRot, vecPos, &matDesiredTransform);
      SetIdentityMatrix(&matAttachLocal);
      v8 = CBaseAnimating::LookupAttachment(pEnt, pszAttachmentName);
      if ( v8 != 0 )
      {
        CBaseAnimating::GetAttachmentLocal(pEnt, v8, &matAttachLocal);
        MatrixInvert(&matAttachLocal, &out);
        ConcatTransforms(&matDesiredTransform, &out, &matFinalTransform);
        MatrixAngles(&matFinalTransform, angRot);
        vecPos->x = matFinalTransform.m_flMatVal[0][3];
        vecPos->y = matFinalTransform.m_flMatVal[1][3];
        vecPos->z = matFinalTransform.m_flMatVal[2][3];
      }
    }
  }
}


// CPropVRHand::IsInView  (line 1373, @0x0000000002359160, libserver.so)
bool __fastcall CPropVRHand::IsInView(const CPropVRHand *const this)
{
  return this->m_bIsInView.m_Value;
}


// CPropVRHand::PostUpdateModifyPose  (line 1378, @0x0000000002358d50, libserver.so)
// calls: CBaseAnimating::GetModelScale, CBaseEntity::GetAbsAngles, CBaseEntity::GetAbsOrigin, CPropVRHand::UpdatePoseOfAttachedEntity
void __fastcall CPropVRHand::PostUpdateModifyPose(CPropVRHand *const this)
{
  const QAngle *AbsAngles; // r12
  const Vector *AbsOrigin; // rax
  float ModelScale; // [rsp+Ch] [rbp-14h]

  ModelScale = CBaseAnimating::GetModelScale(this);
  AbsAngles = CBaseEntity::GetAbsAngles(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(this);
  CPropVRHand::UpdatePoseOfAttachedEntity(this, AbsOrigin, AbsAngles, ModelScale);
}


// CPropVRHand::DrawDebugTextOverlays  (line 1386, @0x00000000023612c0, libserver.so)  // inlines: Get, GetClassNameAsCStr, GetClassname, GetDebugName, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, String, entindex, operator CBaseVRHandAttachment*, operator CEntityInstance*, operator[]
// calls: CBaseAnimating::DrawDebugTextOverlays, CFmtStrN<256, false>::CFmtStrN, CBaseEntity::EntityText, CEntityIdentity::GetDebugName, CEntityInstance::GetEntityIndex, CBaseVRHandAttachment::IsActiveAttachment, __stack_chk_fail
// strings: "%d Hand Attachments:", "[%d] NULL", " [default]", " [%d] (%d) %s (%s) %s%s", "(inactive)"
// globals: CEntityHandle::gm_pEntityList
int __fastcall CPropVRHand::DrawDebugTextOverlays(
        CPropVRHand *const this,
        uint64 nDebugOverlayBits,
        int iDebugFilterFlags)
{
  int v4; // ebx
  int v5; // r13d
  int v6; // r14d
  __int64 v7; // r15
  int v8; // r9d
  int v9; // r8d
  int v10; // ecx
  CHandle<CBaseVRHandAttachment> *v11; // rdx
  uint32 m_Index; // eax
  __int16 v13; // cx
  CEntityIdentity *v14; // rdx
  const CBaseVRHandAttachment **v15; // rdx
  const CBaseVRHandAttachment *v16; // r13
  int v17; // ebx
  char v18; // al
  const CEntityIdentity *m_pEntity; // rdi
  const char *v20; // rcx
  const char *m_pAsString; // r9
  const char *DebugName; // rax
  const CEntityInstance *v23; // rdi
  CEntityIndex v24; // eax
  bool IsActiveAttachment; // al
  bool v27; // zf
  int *p_m_IONotificationKey; // rax
  const char *v29; // [rsp+28h] [rbp-188h]
  const char *pDefaultStr; // [rsp+30h] [rbp-180h]
  const char *v31; // [rsp+38h] [rbp-178h]
  int b; // [rsp+44h] [rbp-16Ch]
  const char *pActiveStr; // [rsp+48h] [rbp-168h]
  int nLine; // [rsp+54h] [rbp-15Ch]
  int r; // [rsp+58h] [rbp-158h]
  CFmtStrN<256,false> v36; // [rsp+60h] [rbp-150h] BYREF
  unsigned __int64 v37; // [rsp+178h] [rbp-38h]

  v37 = __readfsqword(0x28u);
  v4 = CBaseAnimating::DrawDebugTextOverlays(this, nDebugOverlayBits, iDebugFilterFlags);
  v5 = v4 + 1;
  CFmtStrN<256,false>::CFmtStrN(&v36, "%d Hand Attachments:", this->m_hAttachments.m_Vector.m_Size);
  CBaseEntity::EntityText(this, v4, v36.m_szBuf, 0.0, 255, 255, 255, 255);
  if ( this->m_hAttachments.m_Vector.m_Size > 0 )
  {
    v6 = v4 + 2;
    v7 = 0;
    do
    {
      nLine = v6 - 1;
      v11 = &this->m_hAttachments.m_Vector.m_Memory.m_pMemory[v7];
      m_Index = v11->m_Index;
      if ( v11->m_Index + 2 > 1
        && (v13 = v11->m_Index,
            (v14 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v11->m_Index) >> 9) & 0x3F]) != 0)
        && (v15 = &v14[v13 & 0x1FF]) != 0
        && m_Index == *(v15 + 4)
        && (v16 = *v15, *v15 != 0) )
      {
        if ( (*(v16->_vptr_IHandleEntity + 257))(*v15) != 0 )
        {
          IsActiveAttachment = CBaseVRHandAttachment::IsActiveAttachment(v16);
          b = 128;
          v17 = !IsActiveAttachment ? 128 : 255;
          r = !IsActiveAttachment ? 255 : 128;
          v27 = !IsActiveAttachment;
          p_m_IONotificationKey = "(inactive)";
          if ( !v27 )
            p_m_IONotificationKey = &stru_32D9EEC.m_IONotificationKey;
          pActiveStr = p_m_IONotificationKey;
        }
        else
        {
          v17 = 255;
          b = 255;
          r = 255;
          pActiveStr = "";
        }
        v18 = (*(v16->_vptr_IHandleEntity + 260))(v16);
        m_pEntity = v16->m_pEntity;
        v20 = "";
        m_pAsString = "";
        if ( v18 != 0 )
          v20 = " [default]";
        if ( m_pEntity->m_designerName.u.m_Id != 0 )
          m_pAsString = m_pEntity->m_designerName.u.m_pAsString;
        v29 = m_pAsString;
        pDefaultStr = v20;
        DebugName = CEntityIdentity::GetDebugName(m_pEntity);
        v23 = v16;
        v5 = v6;
        v31 = DebugName;
        v24.m_Data = CEntityInstance::GetEntityIndex(v23).m_Data;
        CFmtStrN<256,false>::CFmtStrN(
          &v36,
          " [%d] (%d) %s (%s) %s%s",
          v7,
          v24.m_Data,
          v31,
          v29,
          pActiveStr,
          pDefaultStr);
        v9 = v17;
        v8 = b;
        v10 = r;
      }
      else
      {
        v5 = v6;
        CFmtStrN<256,false>::CFmtStrN(&v36, "[%d] NULL", v7);
        v8 = 0;
        v9 = 255;
        v10 = 0;
      }
      ++v6;
      CBaseEntity::EntityText(this, nLine, v36.m_szBuf, 0.0, v10, v9, v8, 255);
      ++v7;
    }
    while ( v7 < this->m_hAttachments.m_Vector.m_Size );
  }
  return v5;
}


