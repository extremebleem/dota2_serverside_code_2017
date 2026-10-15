// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/prop_vr_tracked_object.cpp:31
class C_CPropVRTrackedObject_MapInstall {
	C_CPropVRTrackedObject_MapInstall();

	// sizeof = 1
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CPropVRTrackedObject::YouForgotToImplementOrDeclareServerClass  (line 31, @0x000000000234ad90, libserver.so)
int __fastcall CPropVRTrackedObject::YouForgotToImplementOrDeclareServerClass(CPropVRTrackedObject *const this)
{
  return 0;
}


// CPropVRTrackedObject::GetServerClass  (line 31, @0x0000000002351d10, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CPropVRTrackedObject::GetServerClass(CPropVRTrackedObject *const this)
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


// CPropVRTrackedObject::GetDataDescMap  (line 33, @0x000000000234ada0, libserver.so)
// globals: CPropVRTrackedObject::m_DataMap
datamap_t *__fastcall CPropVRTrackedObject::GetDataDescMap(CPropVRTrackedObject *const this)
{
  return &CPropVRTrackedObject::m_DataMap;
}


// CPropVRTrackedObject::AddDatadescMetadataKeys  (line 33, @0x00000000023593b0, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CPropVRTrackedObject::GetEntityClass(void)
void __fastcall CPropVRTrackedObject::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CPropVRTrackedObject::GetEntityClass);
}


// CPropVRTrackedObject::GetBaseMap  (line 33, @0x00000000023593d0, libserver.so)
datamap_t *__cdecl CPropVRTrackedObject::GetBaseMap()
{
  return &CBaseAnimating::m_DataMap;
}


// DataMapInit<CPropVRTrackedObject>  (line 33, @0x00000000023593e0, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, GetPhysObjSaveRestoreOps, __cxa_guard_release, __cxa_atexit, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_10.cpp
// strings: "CPropVRTrackedObject"
// globals: `guard variable for'DataMapInit<CPropVRTrackedObject>(CPropVRTrackedObject *)::nameHolder, `guard variable for'DataMapInit<CPropVRTrackedObject>(CPropVRTrackedObject *)::dataDesc, CPropVRTrackedObject::GetEntityClass(void), CPropVRTrackedObject::m_DataMap, DataMapInit<CPropVRTrackedObject>(CPropVRTrackedObject *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CPropVRTrackedObject>(CPropVRTrackedObject *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CPropVRTrackedObject>(CPropVRTrackedObject *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CPropVRTrackedObject>(CPropVRTrackedObject *)::nameHolder) != 0 )
  {
    DataMapInit<CPropVRTrackedObject>(CPropVRTrackedObject *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CPropVRTrackedObject>(CPropVRTrackedObject *)::nameHolder.m_pszBase = "CPropVRTrackedObject";
    DataMapInit<CPropVRTrackedObject>(CPropVRTrackedObject *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CPropVRTrackedObject>(CPropVRTrackedObject *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CPropVRTrackedObject>(CPropVRTrackedObject *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CPropVRTrackedObject>(CPropVRTrackedObject *)::nameHolder.m_nLenBase = 20;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CPropVRTrackedObject>(CPropVRTrackedObject *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CPropVRTrackedObject>(CPropVRTrackedObject *)::nameHolder,
      &_dso_handle);
  }
  CPropVRTrackedObject::m_DataMap.baseMap = &CBaseAnimating::m_DataMap;
  if ( `guard variable for'datamap_t * DataMapInit<CPropVRTrackedObject>(CPropVRTrackedObject *)::dataDesc == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CPropVRTrackedObject>(CPropVRTrackedObject *)::dataDesc) != 0 )
  {
    DataMapInit<CPropVRTrackedObject>(CPropVRTrackedObject *)::dataDesc[8].pSaveRestoreOps = GetPhysObjSaveRestoreOps(PhysInterfaceId_t::PIID_IPHYSICSBODY);
    DataMapInit<CPropVRTrackedObject>(CPropVRTrackedObject *)::dataDesc[9].pSaveRestoreOps = GetPhysObjSaveRestoreOps(PhysInterfaceId_t::PIID_IPHYSICSJOINT);
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CPropVRTrackedObject>(CPropVRTrackedObject *)::dataDesc);
  }
  CPropVRTrackedObject::m_DataMap.dataNumFields = 11;
  CPropVRTrackedObject::m_DataMap.dataDesc = &DataMapInit<CPropVRTrackedObject>(CPropVRTrackedObject *)::dataDesc[1];
  AddDatadescMetadataKeys(&CPropVRTrackedObject::m_DataMap, CPropVRTrackedObject::GetEntityClass);
  return &CPropVRTrackedObject::m_DataMap;
}


// CPropVRTrackedObject::CPropVRTrackedObject  (line 61, @0x00000000023596b0, libserver.so)  // inlines: CNetworkVarBase, CUtlMemory, CUtlVector, CUtlVectorBase, EnsureValidValue, EnsureValidValue<bool>, Init, OnVRFlyNoClipChanged, Purge, RemoveAll, Zero, ~CBaseAnimating, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CBaseAnimating::CBaseAnimating, CTrackedControllerManager::IsVrFlyNoClipEnabled, CPropVRTrackedObject::AddOrRemoveBlockedByStaticLevel, CHitboxComponent::~CHitboxComponent, CBaseModelEntity::~CBaseModelEntity, _Unwind_Resume, CUtlMemory<const IPropVRTrackedObjectPhysicsOverride*, int>::Purge
// callers: CPropVRTrackedObject::CEntityInstanceEntityClass::ConstructInstance, CPropHMDAvatar::CPropHMDAvatar, CPropVRHand::CPropVRHand
void __fastcall CPropVRTrackedObject::CPropVRTrackedObject(CPropVRTrackedObject *const this)
{
  IVr *v2; // rdi
  bool IsVrFlyNoClipEnabled; // al

  CBaseAnimating::CBaseAnimating(this);
  this->_vptr_IHandleEntity = &off_409A9F0;
  this->_vptr_IVRFlyListener = &off_409B230;
  this->m_hTrackedPositionPhysicsBody = 0;
  v2 = g_pVr;
  this->m_bShouldBePhysicallyConstrained = 0;
  this->m_hPhysicallyConstrainedWeldJoint = 0;
  this->m_bFoundInitialSafeLocation = 0;
  this->m_PhysicsOverrides.m_Size = 0;
  this->m_PhysicsOverrides.m_Memory.m_pMemory = 0;
  this->m_PhysicsOverrides.m_Memory.m_nAllocationCount = 0;
  this->m_PhysicsOverrides.m_Memory.m_nGrowSize = 0;
  this->m_bIsTracking.m_Value = 0;
  this->m_vTrackedPosition.m_Value.z = 0.0;
  this->m_vTrackedPosition.m_Value.y = 0.0;
  this->m_vTrackedPosition.m_Value.x = 0.0;
  this->m_qTrackedAngles.m_Value.x = 0.0;
  this->m_qTrackedAngles.m_Value.y = 0.0;
  this->m_qTrackedAngles.m_Value.z = 0.0;
  this->m_vPhysicallyConstrainedPosition.m_Value.z = 0.0;
  this->m_vPhysicallyConstrainedPosition.m_Value.y = 0.0;
  this->m_vPhysicallyConstrainedPosition.m_Value.x = 0.0;
  this->m_qPhysicallyConstrainedAngles.m_Value.x = 0.0;
  this->m_qPhysicallyConstrainedAngles.m_Value.y = 0.0;
  this->m_qPhysicallyConstrainedAngles.m_Value.z = 0.0;
  this->m_bClientIsAuthoritativeForTransform.m_Value = 0;
  this->m_bIsInContact.m_Value = 0;
  if ( v2 != 0 )
  {
    (*(*v2 + 600LL))(v2, &this->IVRFlyListener);
    if ( (*(*g_pVr + 624LL))(g_pVr) != 0 )
    {
      IsVrFlyNoClipEnabled = CTrackedControllerManager::IsVrFlyNoClipEnabled(&g_TrackedControllerManager);
      CPropVRTrackedObject::AddOrRemoveBlockedByStaticLevel(this, !IsVrFlyNoClipEnabled);
    }
  }
}


// CPropVRTrackedObject::~CPropVRTrackedObject  (line 80, @0x00000000023595d0, libserver.so)  // inlines: Purge, RemoveAll, ~CBaseAnimating, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CPropVRTrackedObject::Term, CHitboxComponent::~CHitboxComponent, CBaseModelEntity::~CBaseModelEntity, CUtlMemory<const IPropVRTrackedObjectPhysicsOverride*, int>::Purge
// callers: CPropVRTrackedObject::~CPropVRTrackedObject, CPropHMDAvatar::~CPropHMDAvatar, CPropVRHand::~CPropVRHand, CPropVRHand::CPropVRHand
void __fastcall CPropVRTrackedObject::~CPropVRTrackedObject(CPropVRTrackedObject *const this)
{
  bool v2; // zf

  this->_vptr_IHandleEntity = &off_409A9F0;
  this->_vptr_IVRFlyListener = &off_409B230;
  CPropVRTrackedObject::Term(this);
  v2 = (this->m_PhysicsOverrides.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_PhysicsOverrides.m_Size = 0;
  if ( v2 )
  {
    CUtlMemory<IPropVRTrackedObjectPhysicsOverride const*,int>::Purge(&this->m_PhysicsOverrides.m_Memory);
    if ( (this->m_PhysicsOverrides.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<IPropVRTrackedObjectPhysicsOverride const*,int>::Purge(&this->m_PhysicsOverrides.m_Memory);
  }
  this->_vptr_IHandleEntity = &off_3FED330;
  CHitboxComponent::~CHitboxComponent(&this->m_CHitboxComponent);
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CPropVRTrackedObject::~CPropVRTrackedObject  (line 80, @0x0000000002359660, libserver.so)
// calls: CPropVRTrackedObject::~CPropVRTrackedObject, CBaseEntity::operator delete
void __fastcall CPropVRTrackedObject::~CPropVRTrackedObject(CPropVRTrackedObject *const this)
{
  CPropVRTrackedObject::~CPropVRTrackedObject(this);
  CBaseEntity::operator delete(this);
}


// CPropVRTrackedObject::Term  (line 85, @0x0000000002359530, libserver.so)
// callers: CPropVRTrackedObject::~CPropVRTrackedObject
void __fastcall CPropVRTrackedObject::Term(CPropVRTrackedObject *const this)
{
  HPhysicsJoint m_hPhysicallyConstrainedWeldJoint; // rdi
  __int64 v3; // rax
  HPhysicsBody m_hTrackedPositionPhysicsBody; // rdi
  __int64 v5; // rax

  m_hPhysicallyConstrainedWeldJoint = this->m_hPhysicallyConstrainedWeldJoint;
  if ( m_hPhysicallyConstrainedWeldJoint != 0 )
  {
    v3 = (*(*m_hPhysicallyConstrainedWeldJoint + 88LL))(m_hPhysicallyConstrainedWeldJoint);
    (*(*v3 + 904LL))(v3, this->m_hPhysicallyConstrainedWeldJoint);
    this->m_hPhysicallyConstrainedWeldJoint = 0;
  }
  m_hTrackedPositionPhysicsBody = this->m_hTrackedPositionPhysicsBody;
  if ( m_hTrackedPositionPhysicsBody != 0 )
  {
    v5 = (*(*m_hTrackedPositionPhysicsBody + 16LL))(m_hTrackedPositionPhysicsBody);
    (*(*v5 + 720LL))(v5, this->m_hTrackedPositionPhysicsBody);
    this->m_hTrackedPositionPhysicsBody = 0;
  }
  if ( g_pVr != 0 )
    (*(*g_pVr + 608LL))(g_pVr, &this->IVRFlyListener);
}


// CPropVRTrackedObject::VRFly_OnBegin  (line 107, @0x000000000234e290, libserver.so)  // inlines: AddOrRemoveBlockedByStaticLevel
// calls: CTrackedControllerManager::IsVrFlyNoClipEnabled, CCollisionProperty::EnableInteractsExcludeMask
void __fastcall CPropVRTrackedObject::VRFly_OnBegin(CPropVRTrackedObject *const this)
{
  if ( CTrackedControllerManager::IsVrFlyNoClipEnabled(&g_TrackedControllerManager) )
    CCollisionProperty::EnableInteractsExcludeMask(&this->m_Collision, 0x10000000u);
}


// CPropVRTrackedObject::VRFly_OnEnd  (line 117, @0x000000000234e2e0, libserver.so)  // inlines: AddOrRemoveBlockedByStaticLevel
// calls: CCollisionProperty::DisableInteractsExcludeMask
void __fastcall CPropVRTrackedObject::VRFly_OnEnd(
        CPropVRTrackedObject *const this,
        const matrix3x4_t *const mEndingFlyTransform,
        const matrix3x4_t *const mActualHMDToAnchor)
{
  CCollisionProperty::DisableInteractsExcludeMask(&this->m_Collision, 0x10000000u);
}


// CPropVRTrackedObject::AddOrRemoveBlockedByStaticLevel  (line 125, @0x0000000002359680, libserver.so)
// calls: CCollisionProperty::EnableInteractsExcludeMask, CCollisionProperty::DisableInteractsExcludeMask
// callers: CPropVRTrackedObject::CPropVRTrackedObject, CPropVRTrackedObject::OnVRFlyNoClipChanged
void __fastcall CPropVRTrackedObject::AddOrRemoveBlockedByStaticLevel(CPropVRTrackedObject *const this, bool bAdd)
{
  CBaseModelEntity::NetworkVar_m_Collision *p_m_Collision; // rdi

  p_m_Collision = &this->m_Collision;
  if ( bAdd )
    CCollisionProperty::DisableInteractsExcludeMask(p_m_Collision, 0x10000000u);
  else
    CCollisionProperty::EnableInteractsExcludeMask(p_m_Collision, 0x10000000u);
}


// CPropVRTrackedObject::OnVRFlyNoClipChanged  (line 139, @0x0000000002359b70, libserver.so)
// calls: CPropVRTrackedObject::AddOrRemoveBlockedByStaticLevel
// callers: CTrackedControllerManager::NotifyVRFlyNoclipChanged
void __fastcall CPropVRTrackedObject::OnVRFlyNoClipChanged(CPropVRTrackedObject *const this, bool bVRFlyNoClips)
{
  CPropVRTrackedObject::AddOrRemoveBlockedByStaticLevel(this, !bVRFlyNoClips);
}


// CPropVRTrackedObject::IsInContact  (line 145, @0x0000000002359b90, libserver.so)
bool __fastcall CPropVRTrackedObject::IsInContact(const CPropVRTrackedObject *const this)
{
  return this->m_bIsInContact.m_Value;
}


// CPropVRTrackedObject::IsTrackedPositionWithin  (line 150, @0x0000000002359ba0, libserver.so)  // inlines: DistTo, FastSqrt, Length, VectorLength, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss
bool __fastcall CPropVRTrackedObject::IsTrackedPositionWithin(
        const CPropVRTrackedObject *const this,
        float a2,
        float flMaxDistance)
{
  float v3; // xmm1_4

  v3 = this->m_vTrackedPosition.m_Value.x - this->m_vPhysicallyConstrainedPosition.m_Value.x;
  return a2 > fsqrt(
                ((v3 * v3)
               + ((this->m_vTrackedPosition.m_Value.y - this->m_vPhysicallyConstrainedPosition.m_Value.y)
                * (this->m_vTrackedPosition.m_Value.y - this->m_vPhysicallyConstrainedPosition.m_Value.y)))
              + ((this->m_vTrackedPosition.m_Value.z - this->m_vPhysicallyConstrainedPosition.m_Value.z)
               * (this->m_vTrackedPosition.m_Value.z - this->m_vPhysicallyConstrainedPosition.m_Value.z)));
}


// CPropVRTrackedObject::AddOrRemovePhysicsOverride  (line 156, @0x000000000236ce50, libserver.so)  // inlines: AddToTail, CopyConstruct<const IPropVRTrackedObjectPhysicsOverride*>, Element, FastRemove, Find, FindAndFastRemove, GrowMemory, memcpy, operator[]
// calls: CPropVRTrackedObject::UpdatePhysicallyConstrained, CUtlMemory<const IPropVRTrackedObjectPhysicsOverride*, int>::Grow
// callers: CBasePlayer::ReceiveClientMsg_DevPaletteVisibilityChangedEvent
void __fastcall CPropVRTrackedObject::AddOrRemovePhysicsOverride(
        CPropVRTrackedObject *const this,
        const IPropVRTrackedObjectPhysicsOverride *pPhysicsOverride,
        bool bAdd)
{
  int v5; // ecx
  const IPropVRTrackedObjectPhysicsOverride **m_pMemory; // rsi
  const IPropVRTrackedObjectPhysicsOverride **v7; // rdx
  int v8; // eax
  __int64 m_Size; // r13
  int v10; // eax
  const IPropVRTrackedObjectPhysicsOverride **v11; // rax
  int v12; // ecx

  if ( bAdd )
  {
    m_Size = this->m_PhysicsOverrides.m_Size;
    v10 = this->m_PhysicsOverrides.m_Size;
    if ( m_Size == this->m_PhysicsOverrides.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<IPropVRTrackedObjectPhysicsOverride const*,int>::Grow(&this->m_PhysicsOverrides.m_Memory, 1);
      v10 = this->m_PhysicsOverrides.m_Size;
    }
    this->m_PhysicsOverrides.m_Size = v10 + 1;
    v11 = &this->m_PhysicsOverrides.m_Memory.m_pMemory[m_Size];
    if ( v11 != 0 )
      *v11 = pPhysicsOverride;
  }
  else
  {
    v5 = this->m_PhysicsOverrides.m_Size;
    if ( v5 > 0 )
    {
      m_pMemory = this->m_PhysicsOverrides.m_Memory.m_pMemory;
      if ( *m_pMemory == pPhysicsOverride )
      {
        v8 = 0;
LABEL_13:
        v12 = v5 - 1;
        if ( v8 != v12 )
        {
          m_pMemory[v8] = m_pMemory[v12];
          v12 = this->m_PhysicsOverrides.m_Size - 1;
        }
        this->m_PhysicsOverrides.m_Size = v12;
      }
      else
      {
        v7 = m_pMemory + 1;
        v8 = 0;
        while ( ++v8 != v5 )
        {
          if ( *v7++ == pPhysicsOverride )
          {
            if ( v8 != -1 )
              goto LABEL_13;
            break;
          }
        }
      }
    }
  }
  CPropVRTrackedObject::UpdatePhysicallyConstrained(this);
}


// CPropVRTrackedObject::SetPhysicallyConstrained  (line 171, @0x0000000002359ca0, libserver.so)
// calls: CPropVRTrackedObject::UpdatePhysicallyConstrained
void __fastcall CPropVRTrackedObject::SetPhysicallyConstrained(CPropVRTrackedObject *const this, bool bIsConstrained)
{
  this->m_bShouldBePhysicallyConstrained = bIsConstrained;
  CPropVRTrackedObject::UpdatePhysicallyConstrained(this);
}


// CPropVRTrackedObject::ShouldBePhysicallyConstrained  (line 177, @0x0000000002359c00, libserver.so)
bool __fastcall CPropVRTrackedObject::ShouldBePhysicallyConstrained(
        const CPropVRTrackedObject *const this,
        bool bDisregardFoundLocation)
{
  bool result; // al

  result = 0;
  if ( this->m_bShouldBePhysicallyConstrained )
  {
    if ( this->m_bFoundInitialSafeLocation )
    {
      return this->m_PhysicsOverrides.m_Size == 0;
    }
    else if ( bDisregardFoundLocation )
    {
      return this->m_PhysicsOverrides.m_Size == 0;
    }
  }
  return result;
}


// CPropVRTrackedObject::UpdatePhysicallyConstrained  (line 186, @0x0000000002359c40, libserver.so)  // inlines: ShouldBePhysicallyConstrained
// callers: CPropVRTrackedObject::SetPhysicallyConstrained, CPropVRTrackedObject::Spawn, CPropVRTrackedObject::UpdateTrackingData, CPropVRTrackedObject::AddOrRemovePhysicsOverride
void __fastcall CPropVRTrackedObject::UpdatePhysicallyConstrained(CPropVRTrackedObject *const this)
{
  if ( this->m_bShouldBePhysicallyConstrained
    && this->m_bFoundInitialSafeLocation
    && this->m_PhysicsOverrides.m_Size == 0 )
  {
    (*(this->m_Collision._vptr_ICollideable + 15))(&this->m_Collision);
  }
  else
  {
    (*(this->m_Collision._vptr_ICollideable + 16))(&this->m_Collision);
  }
}


// CPropVRTrackedObject::Spawn  (line 203, @0x0000000002359cc0, libserver.so)  // inlines: AssignTo, Base, Element, FindKeyHash, GetValue, GetValue<bool>, Init, Quaternion, RadianEuler, SetPhysicallyConstrained, _V_strcmp, operator[]
// calls: CBaseAnimating::Spawn, GetModelNameFromKeyValues, CBaseEntity::VPhysicsWorld, CBaseEntity::GetAbsOrigin, CBaseEntity::GetAbsAngles, AngleQuaternion, CPropVRTrackedObject::UpdatePhysicallyConstrained, CBaseModelEntity::SetModel, VariantFieldTypeName, Warning
// callers: CPropVRHand::Spawn, CPropHMDAvatar::Spawn
// strings: "Invisible physics body for: %s", "false", "No conversion from %s to bool now\n", "true", "Invalid conversion : CString '%s' to bool\n"
// globals: jpt_2359E58, CEntityKeyValues::sm_EmptyVariant
void __fastcall CPropVRTrackedObject::Spawn(CPropVRTrackedObject *const this, const CEntityKeyValues *pKeyValues)
{
  const char *v4; // rax
  const char *ModelNameFromKeyValues; // r13
  IVPhysics2World *v6; // rax
  IPhysicsBody *v7; // rax
  void (__fastcall *v8)(HPhysicsBody, const Vector *); // r14
  const Vector *AbsOrigin; // rax
  void (__fastcall *v10)(HPhysicsBody, Quaternion *); // r15
  const QAngle *AbsAngles; // rax
  vec_t v12; // xmm1_4
  vec_t v13; // xmm0_4
  int m_nCount; // edx
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t m_nAllocated; // ax
  __int64 i; // rcx
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // r8
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v18; // rdx
  __int64 v19; // rax
  char m_char; // cl
  CEntityVariant *p_m_value; // rdx
  int16 m_type; // ax
  const char *v23; // rax
  RadianEuler angles; // [rsp+0h] [rbp-50h] BYREF
  Quaternion outQuat; // [rsp+10h] [rbp-40h] BYREF

  CBaseAnimating::Spawn(this, pKeyValues);
  v4 = (*(this->_vptr_IHandleEntity + 256))(this);
  ModelNameFromKeyValues = GetModelNameFromKeyValues(pKeyValues, v4);
  v6 = CBaseEntity::VPhysicsWorld(this);
  v7 = (*(*v6 + 704LL))(v6);
  this->m_hTrackedPositionPhysicsBody = v7;
  v8 = *(*v7 + 360LL);
  AbsOrigin = CBaseEntity::GetAbsOrigin(this);
  v8(this->m_hTrackedPositionPhysicsBody, AbsOrigin);
  v10 = *(*this->m_hTrackedPositionPhysicsBody + 376LL);
  AbsAngles = CBaseEntity::GetAbsAngles(this);
  v12 = AbsAngles->y * 0.017453292;
  v13 = 0.017453292 * AbsAngles->z;
  angles.y = AbsAngles->x * 0.017453292;
  angles.z = v12;
  angles.x = v13;
  AngleQuaternion(&angles, &outQuat);
  v10(this->m_hTrackedPositionPhysicsBody, &outQuat);
  (*(*this->m_hTrackedPositionPhysicsBody + 1432LL))(
    this->m_hTrackedPositionPhysicsBody,
    "Invisible physics body for: %s",
    ModelNameFromKeyValues);
  (*(*this->m_hTrackedPositionPhysicsBody + 32LL))(this->m_hTrackedPositionPhysicsBody, 1);
  m_nCount = pKeyValues->m_keyHashes.m_nCount;
  if ( m_nCount > 0 )
  {
    m_nAllocated = pKeyValues->m_keyHashes.m_nAllocated;
    for ( i = 0; m_nCount > i; ++i )
    {
      if ( m_nAllocated != 0 )
      {
        m_pElements = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
        if ( m_nAllocated > 9 )
          m_pElements = pKeyValues->m_keyHashes.m_pElements;
        if ( m_pElements[i] == 419917747 )
        {
LABEL_9:
          if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
            v18 = pKeyValues->m_keyValues.m_pElements;
          else
            v18 = 0;
          v19 = i;
          m_char = 0;
          p_m_value = &v18[v19].m_value;
          m_type = p_m_value->m_type;
          if ( m_type != 0 )
            goto LABEL_12;
          goto LABEL_14;
        }
      }
      else if ( *(4 * i) == 419917747 )
      {
        goto LABEL_9;
      }
    }
  }
  p_m_value = &CEntityKeyValues::sm_EmptyVariant;
  m_char = 0;
  m_type = CEntityKeyValues::sm_EmptyVariant.m_type;
  if ( m_type != 0 )
  {
LABEL_12:
    switch ( m_type )
    {
      case 1:
        m_char = p_m_value->m_float != 0.0;
        break;
      case 5:
      case 37:
        m_char = p_m_value->m_int != 0;
        break;
      case 6:
        m_char = p_m_value->m_char;
        break;
      case 26:
      case 33:
        m_char = p_m_value->m_uint64 != 0;
        break;
      case 30:
        if ( strcmp(p_m_value->m_pszString, "0") == 0
          || strcmp(p_m_value->m_pszString, "false") == 0
          || strcmp(p_m_value->m_pszString, "no") == 0 )
        {
          goto LABEL_26;
        }
        if ( strcmp(p_m_value->m_pszString, "1") == 0
          || strcmp(p_m_value->m_pszString, "true") == 0
          || strcmp(p_m_value->m_pszString, "yes") == 0 )
        {
          m_char = 1;
        }
        else
        {
          Warning("Invalid conversion : CString '%s' to bool\n", p_m_value->m_pszString);
          m_char = 0;
        }
        break;
      case 34:
        m_char = p_m_value->m_float64 != 0.0;
        break;
      default:
        v23 = VariantFieldTypeName(m_type);
        Warning("No conversion from %s to bool now\n", v23);
LABEL_26:
        m_char = 0;
        break;
    }
  }
LABEL_14:
  this->m_bShouldBePhysicallyConstrained = m_char;
  CPropVRTrackedObject::UpdatePhysicallyConstrained(this);
  CBaseModelEntity::SetModel(this, ModelNameFromKeyValues);
}


// CPropVRTrackedObject::PostSetModel  (line 225, @0x000000000234f510, libserver.so)  // inlines: CUtlAbstractDelegate, CUtlDelegate, ClosurePtr, FastDelegate1, Init, PhysicsJointDesc_t, PhysicsWeldJointDesc_t, Quaternion, QuaternionConjugate, RadianEuler, SetBasis, SetPivot, operator*, operator=
// calls: CCollisionProperty::SetupPhysicsFromUnscaledModel, CCollisionProperty::EnableInteractsAsMask, CCollisionProperty::EnableInteractsExcludeMask, CBaseEntity::GetAbsOrigin, CBaseEntity::GetAbsAngles, AngleQuaternion, QuaternionConjugate, CBaseEntity::VPhysicsWorld
// callers: CPropVRHand::PostSetModel
// strings: "Weld Joint: %s -> %s"
void __fastcall CPropVRTrackedObject::PostSetModel(CPropVRTrackedObject *const this)
{
  HPhysicsJoint m_hPhysicallyConstrainedWeldJoint; // rdi
  __int64 v3; // rax
  IPhysicsBody *v4; // r12
  float v5; // xmm0_4
  IPhysicsBody *m_hTrackedPositionPhysicsBody; // rax
  __int64 v7; // rdi
  const Vector *AbsOrigin; // r13
  vec_t v9; // xmm1_4
  vec_t v10; // xmm1_4
  const QAngle *AbsAngles; // rax
  vec_t v12; // xmm2_4
  vec_t v13; // xmm0_4
  __int64 v14; // xmm1_8
  __int64 v15; // xmm1_8
  int (**vptr_IHandleEntity)(...); // rax
  float v17; // xmm0_4
  int (**v18)(...); // rax
  IVPhysics2World *v19; // rax
  IPhysicsJoint *v20; // rax
  void (*v21)(HPhysicsJoint, const char *, ...); // r14
  const char *v22; // r13
  const char *v23; // rax
  float flJointFreq; // [rsp+Ch] [rbp-F4h]
  Quaternion outQuat; // [rsp+20h] [rbp-E0h] BYREF
  Quaternion q; // [rsp+30h] [rbp-D0h] BYREF
  Quaternion angles; // [rsp+40h] [rbp-C0h] BYREF
  PhysicsWeldJointDesc_t desc; // [rsp+50h] [rbp-B0h] BYREF

  m_hPhysicallyConstrainedWeldJoint = this->m_hPhysicallyConstrainedWeldJoint;
  if ( m_hPhysicallyConstrainedWeldJoint != 0 )
  {
    v3 = (*(*m_hPhysicallyConstrainedWeldJoint + 88LL))(m_hPhysicallyConstrainedWeldJoint);
    (*(*v3 + 904LL))(v3, this->m_hPhysicallyConstrainedWeldJoint);
    this->m_hPhysicallyConstrainedWeldJoint = 0;
  }
  if ( CCollisionProperty::SetupPhysicsFromUnscaledModel(
         &this->m_Collision,
         VPhysicsMotionType_t::VPHYSICS_MOTION_TYPE_DYNAMIC,
         8,
         0) != 0 )
  {
    v4 = (*(this->m_Collision._vptr_ICollideable + 12))(&this->m_Collision);
    (*(*v4 + 176LL))(v4, 0);
    CCollisionProperty::EnableInteractsAsMask(&this->m_Collision, &stru_1800000);
    CCollisionProperty::EnableInteractsExcludeMask(&this->m_Collision, &stru_1800000);
    (*(*v4 + 952LL))(v4, 1);
    v5 = (*(this->_vptr_IHandleEntity + 260))(this);
    m_hTrackedPositionPhysicsBody = this->m_hTrackedPositionPhysicsBody;
    desc.m_nType = PhysicsJointType_t::WELD_JOINT;
    flJointFreq = v5;
    desc.m_pBody1 = v4;
    desc.m_bEnableCollision = 0;
    desc.m_pBody2 = m_hTrackedPositionPhysicsBody;
    v7 = *&quat_identity.z;
    memset(&desc.m_flFriction, 0, 60);
    *&m_hTrackedPositionPhysicsBody = vec3_origin.z;
    *&desc.m_qLocalBasis1.z = v7;
    *&desc.m_qLocalBasis2.z = v7;
    *&desc.m_qLocalBasis1.x = *&quat_identity.x;
    *&desc.m_vLocalOrigin1.x = *&vec3_origin.x;
    *&desc.m_vLocalOrigin2.x = *&vec3_origin.x;
    *&desc.m_qLocalBasis2.x = *&quat_identity.x;
    LODWORD(desc.m_vLocalOrigin1.z) = m_hTrackedPositionPhysicsBody;
    LODWORD(desc.m_vLocalOrigin2.z) = m_hTrackedPositionPhysicsBody;
    AbsOrigin = CBaseEntity::GetAbsOrigin(this);
    *&angles.x = (*(*desc.m_pBody1 + 1008LL))(desc.m_pBody1, AbsOrigin);
    angles.z = v9;
    desc.m_vLocalOrigin1 = *&angles.x;
    *&angles.x = (*(*desc.m_pBody2 + 1008LL))(desc.m_pBody2, AbsOrigin);
    angles.z = v10;
    desc.m_vLocalOrigin2 = *&angles.x;
    AbsAngles = CBaseEntity::GetAbsAngles(this);
    v12 = AbsAngles->x * 0.017453292;
    v13 = 0.017453292 * AbsAngles->z;
    angles.z = AbsAngles->y * 0.017453292;
    angles.y = v12;
    angles.x = v13;
    AngleQuaternion(&angles, &outQuat);
    *&angles.x = (*(*desc.m_pBody1 + 384LL))(desc.m_pBody1);
    *&angles.z = v14;
    QuaternionConjugate(&angles, &q);
    desc.m_qLocalBasis1.x = (((q.x * outQuat.w) + (q.y * outQuat.z)) - (q.z * outQuat.y)) + (q.w * outQuat.x);
    desc.m_qLocalBasis1.y = (((outQuat.z * -q.x) + (q.y * outQuat.w)) + (q.z * outQuat.x)) + (q.w * outQuat.y);
    desc.m_qLocalBasis1.z = (((q.x * outQuat.y) - (q.y * outQuat.x)) + (q.z * outQuat.w)) + (q.w * outQuat.z);
    desc.m_qLocalBasis1.w = (((outQuat.x * -q.x) - (outQuat.y * q.y)) - (outQuat.z * q.z)) + (outQuat.w * q.w);
    *&angles.x = (*(*desc.m_pBody2 + 384LL))(desc.m_pBody2);
    *&angles.z = v15;
    QuaternionConjugate(&angles, &q);
    desc.m_flLinearDampingRatio = 1.0;
    desc.m_flAngularDampingRatio = 1.0;
    vptr_IHandleEntity = this->_vptr_IHandleEntity;
    desc.m_flLinearFrequency = flJointFreq;
    desc.m_flAngularFrequency = flJointFreq;
    desc.m_qLocalBasis2.x = (((q.x * outQuat.w) + (q.y * outQuat.z)) - (q.z * outQuat.y)) + (q.w * outQuat.x);
    desc.m_qLocalBasis2.y = (((outQuat.z * -q.x) + (q.y * outQuat.w)) + (q.z * outQuat.x)) + (q.w * outQuat.y);
    desc.m_qLocalBasis2.z = (((q.x * outQuat.y) - (q.y * outQuat.x)) + (q.z * outQuat.w)) + (q.w * outQuat.z);
    desc.m_qLocalBasis2.w = (((-q.x * outQuat.x) - (outQuat.y * q.y)) - (outQuat.z * q.z)) + (outQuat.w * q.w);
    v17 = (vptr_IHandleEntity[254])(this);
    v18 = this->_vptr_IHandleEntity;
    desc.m_flMaxForce = v17;
    desc.m_flMaxTorque = (v18[255])(this);
    v19 = CBaseEntity::VPhysicsWorld(this);
    v20 = (*(*v19 + 864LL))(v19, &desc);
    this->m_hPhysicallyConstrainedWeldJoint = v20;
    (*(*v20 + 440LL))(v20, 0xFFFFFFFFLL);
    v21 = *(*this->m_hPhysicallyConstrainedWeldJoint + 552LL);
    v22 = (*(*this->m_hTrackedPositionPhysicsBody + 1256LL))(this->m_hTrackedPositionPhysicsBody);
    v23 = (*(*v4 + 1256LL))(v4);
    v21(this->m_hPhysicallyConstrainedWeldJoint, "Weld Joint: %s -> %s", v23, v22);
  }
}


// CPropVRTrackedObject::NotifySystemEvent  (line 274, @0x000000000234ce00, libserver.so)  // inlines: CTransform, ConcatTransforms, MatrixTransform, ToCTransform, ToQAngle, VectorAligned
// calls: CBaseEntity::EntityToWorldTransform, notify_teleport_params_t::CalculateRelativeTransform, ConcatTransforms, MatrixTransform, MatrixAngles
// callers: CPropVRTrackedObject::NotifySystemEvent
void __fastcall CPropVRTrackedObject::NotifySystemEvent(
        CPropVRTrackedObject *const this,
        CBaseEntity *pNotify,
        const notify_teleport_params_t *const *eventType,
        const notify_system_event_params_t *const params)
{
  matrix3x4_t *v6; // rax
  vec_t z; // eax
  vec_t v8; // xmm0_4
  int (**vptr_IHandleEntity)(...); // rax
  Vector vOrigin; // [rsp+0h] [rbp-E0h] BYREF
  QAngle qAngle; // [rsp+10h] [rbp-D0h] BYREF
  Vector vVelocity; // [rsp+20h] [rbp-C0h] BYREF
  matrix3x4_t mRelativeTransform; // [rsp+30h] [rbp-B0h] BYREF
  matrix3x4_t mTrackedPositionTransform; // [rsp+60h] [rbp-80h] BYREF
  CTransform trackedPositionCTransform; // [rsp+90h] [rbp-50h] BYREF

  v6 = CBaseEntity::EntityToWorldTransform(pNotify);
  notify_teleport_params_t::CalculateRelativeTransform(&mRelativeTransform, *eventType, v6);
  (*(*this->m_hTrackedPositionPhysicsBody + 416LL))(&trackedPositionCTransform);
  ConcatTransforms(&mRelativeTransform, &trackedPositionCTransform, &mTrackedPositionTransform);
  trackedPositionCTransform.m_vPosition.w = 0.0;
  MatrixTransform(&mTrackedPositionTransform, &trackedPositionCTransform);
  (*(*this->m_hTrackedPositionPhysicsBody + 392LL))(this->m_hTrackedPositionPhysicsBody, &trackedPositionCTransform);
  vOrigin.x = mTrackedPositionTransform.m_flMatVal[0][3];
  vOrigin.y = mTrackedPositionTransform.m_flMatVal[1][3];
  vOrigin.z = mTrackedPositionTransform.m_flMatVal[2][3];
  MatrixAngles(&mTrackedPositionTransform, &vVelocity);
  qAngle.x = vVelocity.x;
  z = vec3_origin.z;
  qAngle.y = vVelocity.y;
  v8 = vVelocity.z;
  *&vVelocity.x = *&vec3_origin.x;
  vVelocity.z = z;
  vptr_IHandleEntity = this->_vptr_IHandleEntity;
  qAngle.z = v8;
  vptr_IHandleEntity[128](this, &vOrigin, &qAngle, &vVelocity);
}


// CPropVRTrackedObject::NotifySystemEvent  (line 274, @0x000000000234cf40, libserver.so)
// calls: CPropVRTrackedObject::NotifySystemEvent
void __fastcall CPropVRTrackedObject::NotifySystemEvent(
        CPropVRTrackedObject *const this,
        CBaseEntity *pNotify,
        notify_system_event_t eventType,
        const notify_system_event_params_t *const params)
{
  if ( eventType == notify_system_event_t::NOTIFY_EVENT_TELEPORT )
    CPropVRTrackedObject::NotifySystemEvent(this, pNotify, &params->pTeleport, params);
}


// CPropVRTrackedObject::Precache  (line 298, @0x0000000002370230, libserver.so)  // inlines: Precache
// calls: CEntityInstance::Precache, GetModelNameFromKeyValues, CBaseEntity::PrecacheModel
// callers: CPropHMDAvatar::Precache, CPropVRHand::Precache
void __fastcall CPropVRTrackedObject::Precache(
        CPropVRTrackedObject *const this,
        const CEntityPrecacheContext *pContext)
{
  const char *v4; // rax
  const char *ModelNameFromKeyValues; // rax

  CEntityInstance::Precache(this, pContext);
  v4 = (*(this->_vptr_IHandleEntity + 256))(this);
  ModelNameFromKeyValues = GetModelNameFromKeyValues(pContext->m_pKeyValues, v4);
  CBaseEntity::PrecacheModel(ModelNameFromKeyValues, pContext);
}


// CPropVRTrackedObject::SetInContact  (line 305, @0x0000000002359fd0, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<bool>
// callers: CPropVRTrackedObject::UpdateTrackingData
void __fastcall CPropVRTrackedObject::SetInContact(CPropVRTrackedObject *const this, bool bInContact)
{
  if ( this->m_bIsInContact.m_Value != bInContact )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1325, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bIsInContact.m_Value = bInContact;
  }
}


// CPropVRTrackedObject::UpdateTrackingData  (line 310, @0x000000000235a010, libserver.so)  // inlines: GetBool, GetInt, Init, NetworkStateChanged, Quaternion, RadianEuler, Set, ShouldBePhysicallyConstrained, ToQAngle, entindex, operator!=, operator=, operator=<QAngle>, operator=<Vector>, operator=<bool>
// calls: CEntityInstance::GetEntityIndex, UTIL_ApplyLocalAttachmentInvTransform, QuaternionAngles, CBaseEntity::GetAbsOrigin, CBaseEntity::GetAbsAngles, CPropVRTrackedObject::SetInContact, AngleQuaternion, Msg, CPropVRTrackedObject::UpdatePhysicallyConstrained, CBaseEntity::SetAbsOrigin, CBaseEntity::SetAbsAngles
// callers: CPropHMDAvatar::UpdateTrackingData, CPropVRHand::UpdateTrackingData
// strings: "vr_controller_root", "tracked object %d: server pos = %f %f %f\n"
void __fastcall CPropVRTrackedObject::UpdateTrackingData(
        CPropVRTrackedObject *const this,
        bool bTeleport,
        const HandInfo_t *pHandInfo,
        bool bActive)
{
  bool m_Value; // r14
  int m_nValue; // r12d
  char v10; // al
  CBaseModelEntity::NetworkVar_m_Collision *p_m_Collision; // r13
  __int64 v12; // rax
  float v13; // xmm1_4
  __int64 v14; // xmm1_8
  const Vector *AbsOrigin; // rax
  const QAngle *AbsAngles; // rax
  __int64 v17; // rax
  __int64 v18; // r12
  bool v19; // r13
  bool v20; // r14
  bool v21; // r13
  void (__fastcall *v22)(HPhysicsBody, Vector *, Quaternion *); // r13
  CEntityIndex v23; // eax
  vec_t v24; // [rsp+8h] [rbp-88h]
  double z; // [rsp+8h] [rbp-88h]
  vec_t v26; // [rsp+8h] [rbp-88h]
  vec_t v27; // [rsp+8h] [rbp-88h]
  vec_t v28; // [rsp+8h] [rbp-88h]
  vec_t v29; // [rsp+10h] [rbp-80h]
  double y; // [rsp+10h] [rbp-80h]
  vec_t v31; // [rsp+10h] [rbp-80h]
  vec_t v32; // [rsp+10h] [rbp-80h]
  vec_t v33; // [rsp+10h] [rbp-80h]
  vec_t v34; // [rsp+18h] [rbp-78h]
  double x; // [rsp+18h] [rbp-78h]
  vec_t v36; // [rsp+18h] [rbp-78h]
  vec_t v37; // [rsp+18h] [rbp-78h]
  vec_t v38; // [rsp+18h] [rbp-78h]
  Vector vHandPos; // [rsp+20h] [rbp-70h] BYREF
  QAngle qHandAngles; // [rsp+30h] [rbp-60h] BYREF
  QAngle angles; // [rsp+40h] [rbp-50h] BYREF
  Quaternion q; // [rsp+50h] [rbp-40h] BYREF

  m_Value = this->m_bIsTracking.m_Value;
  if ( m_Value != bActive )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1272, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bIsTracking.m_Value = bActive;
  }
  if ( bActive )
  {
    if ( !m_Value )
      bTeleport = 1;
    m_nValue = vr_tracked_object_positions_debug.m_pParent->m_Value.m_nValue;
    if ( CEntityInstance::GetEntityIndex(this).m_Data == m_nValue )
    {
      z = pHandInfo->m_vPosition.m_Value.z;
      y = pHandInfo->m_vPosition.m_Value.y;
      x = pHandInfo->m_vPosition.m_Value.x;
      v23.m_Data = CEntityInstance::GetEntityIndex(this).m_Data;
      Msg("tracked object %d: server pos = %f %f %f\n", v23.m_Data, x, y, z);
    }
    vHandPos = pHandInfo->m_vPosition;
    qHandAngles = pHandInfo->m_Angles;
    UTIL_ApplyLocalAttachmentInvTransform(this, &vHandPos, &qHandAngles, "vr_controller_root");
    if ( this->m_bShouldBePhysicallyConstrained
      && this->m_PhysicsOverrides.m_Size == 0
      && !this->m_bFoundInitialSafeLocation )
    {
      v10 = (*(this->_vptr_IHandleEntity + 253))(this, &vHandPos, &qHandAngles);
      this->m_bFoundInitialSafeLocation = v10;
      if ( v10 != 0 )
        CPropVRTrackedObject::UpdatePhysicallyConstrained(this);
    }
    if ( bTeleport )
    {
      (*(this->_vptr_IHandleEntity + 128))(this, &vHandPos, &qHandAngles, &vec3_origin);
      v22 = *(*this->m_hTrackedPositionPhysicsBody + 400LL);
      angles.z = qHandAngles.y * 0.017453292;
      angles.y = qHandAngles.x * 0.017453292;
      angles.x = 0.017453292 * qHandAngles.z;
      AngleQuaternion(&angles, &q);
      v22(this->m_hTrackedPositionPhysicsBody, &vHandPos, &q);
      p_m_Collision = &this->m_Collision;
    }
    else
    {
      p_m_Collision = &this->m_Collision;
      (*(*this->m_hTrackedPositionPhysicsBody + 1664LL))(
        this->m_hTrackedPositionPhysicsBody,
        &vHandPos,
        &qHandAngles,
        0);
      (*(*this->m_hTrackedPositionPhysicsBody + 856LL))(this->m_hTrackedPositionPhysicsBody);
      v12 = (*(this->m_Collision._vptr_ICollideable + 12))(&this->m_Collision);
      if ( v12 != 0 )
      {
        (*(*v12 + 1592LL))(v12);
      }
      else
      {
        CBaseEntity::SetAbsOrigin(this, &vHandPos);
        CBaseEntity::SetAbsAngles(this, &qHandAngles);
      }
    }
    *&q.x = (*(*this->m_hTrackedPositionPhysicsBody + 368LL))(this->m_hTrackedPositionPhysicsBody);
    q.z = v13;
    if ( q.x != this->m_vTrackedPosition.m_Value.x
      || q.y != this->m_vTrackedPosition.m_Value.y
      || v13 != this->m_vTrackedPosition.m_Value.z )
    {
      v24 = v13;
      v29 = q.x;
      v34 = q.y;
      (*(this->_vptr_IHandleEntity + 22))(this, 1276, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_vTrackedPosition.m_Value.x = v29;
      this->m_vTrackedPosition.m_Value.y = v34;
      this->m_vTrackedPosition.m_Value.z = v24;
    }
    *&q.x = (*(*this->m_hTrackedPositionPhysicsBody + 384LL))(this->m_hTrackedPositionPhysicsBody);
    *&q.z = v14;
    QuaternionAngles(&q, &angles);
    if ( angles.x != this->m_qTrackedAngles.m_Value.x
      || angles.y != this->m_qTrackedAngles.m_Value.y
      || angles.z != this->m_qTrackedAngles.m_Value.z )
    {
      v28 = angles.x;
      v33 = angles.y;
      v38 = angles.z;
      (*(this->_vptr_IHandleEntity + 22))(this, 1288, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_qTrackedAngles.m_Value.x = v28;
      this->m_qTrackedAngles.m_Value.y = v33;
      this->m_qTrackedAngles.m_Value.z = v38;
    }
    AbsOrigin = CBaseEntity::GetAbsOrigin(this);
    if ( AbsOrigin->x != this->m_vPhysicallyConstrainedPosition.m_Value.x
      || AbsOrigin->y != this->m_vPhysicallyConstrainedPosition.m_Value.y
      || AbsOrigin->z != this->m_vPhysicallyConstrainedPosition.m_Value.z )
    {
      v27 = AbsOrigin->x;
      v32 = AbsOrigin->y;
      v37 = AbsOrigin->z;
      (*(this->_vptr_IHandleEntity + 22))(this, 1300, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_vPhysicallyConstrainedPosition.m_Value.x = v27;
      this->m_vPhysicallyConstrainedPosition.m_Value.y = v32;
      this->m_vPhysicallyConstrainedPosition.m_Value.z = v37;
    }
    AbsAngles = CBaseEntity::GetAbsAngles(this);
    if ( AbsAngles->x != this->m_qPhysicallyConstrainedAngles.m_Value.x
      || AbsAngles->y != this->m_qPhysicallyConstrainedAngles.m_Value.y
      || AbsAngles->z != this->m_qPhysicallyConstrainedAngles.m_Value.z )
    {
      v26 = AbsAngles->z;
      v31 = AbsAngles->x;
      v36 = AbsAngles->y;
      (*(this->_vptr_IHandleEntity + 22))(this, 1312, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_qPhysicallyConstrainedAngles.m_Value.x = v31;
      this->m_qPhysicallyConstrainedAngles.m_Value.y = v36;
      this->m_qPhysicallyConstrainedAngles.m_Value.z = v26;
    }
    if ( this->m_bClientIsAuthoritativeForTransform.m_Value )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 1324, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_bClientIsAuthoritativeForTransform.m_Value = 0;
    }
    v17 = (*(this->m_Collision._vptr_ICollideable + 12))(p_m_Collision);
    v18 = v17;
    if ( v17 != 0 )
    {
      v19 = (*(*v17 + 1168LL))(v17, 0, 0) != 0;
      v20 = v19;
    }
    else
    {
      v20 = 0;
      v19 = 0;
    }
    if ( vr_tracked_object_client_can_be_authoritative_for_transform.m_pParent->m_Value.m_nValue != 0 )
    {
      v21 = v18 == 0 || !v19;
      if ( v21 != this->m_bClientIsAuthoritativeForTransform.m_Value )
      {
        (*(this->_vptr_IHandleEntity + 22))(this, 1324, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        this->m_bClientIsAuthoritativeForTransform.m_Value = v21;
      }
    }
    CPropVRTrackedObject::SetInContact(this, v20);
  }
}


// CPropVRTrackedObject::GetDefaultModel  (line 399, @0x000000000234adb0, libserver.so)
const char *__fastcall CPropVRTrackedObject::GetDefaultModel(const CPropVRTrackedObject *const this)
{
  return "";
}


// CPropVRTrackedObject::GetPlayerOwner  (line 628, @0x000000000234adc0, libserver.so)
CBasePlayer *__fastcall CPropVRTrackedObject::GetPlayerOwner(const CPropVRTrackedObject *const this)
{
  return 0;
}


// CPropVRTrackedObject::IsClientAuthoritativeForTransform  (line 633, @0x000000000235a910, libserver.so)
bool __fastcall CPropVRTrackedObject::IsClientAuthoritativeForTransform(const CPropVRTrackedObject *const this)
{
  return this->m_bClientIsAuthoritativeForTransform.m_Value;
}


