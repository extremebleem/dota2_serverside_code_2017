
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// VPhysicsCollisionAttribute_t::operator=  (line 55, @0x00000000021b4a90, libserver.so)  // inlines: NetworkStateChanged, Set, operator=
// callers: CCollisionProperty::EnableAllCollisions, CCollisionProperty::DisableAllCollisions, CCollisionProperty::EnableSolidCollisions, CCollisionProperty::DisableSolidCollisions, CCollisionProperty::EnableInteractsAsMask, CCollisionProperty::EnableInteractsWithMask, CCollisionProperty::EnableInteractsExcludeMask, CCollisionProperty::EnableTouchEvents, CCollisionProperty::DisableInteractsAsMask, CCollisionProperty::DisableInteractsExcludeMask, CCollisionProperty::DisableTouchEvents, CCollisionProperty::EnableTraceAndQueries (26 total)
VPhysicsCollisionAttribute_t *__fastcall VPhysicsCollisionAttribute_t::operator=(
        VPhysicsCollisionAttribute_t *const this,
        __int64 a2)
{
  if ( this->m_nInteractsAs.m_Value != *(a2 + 8) )
  {
    (*(this->_vptr_VPhysicsCollisionAttribute_t + 2))(this, 8, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_nInteractsAs.m_Value = *(a2 + 8);
  }
  if ( this->m_nInteractsWith.m_Value != *(a2 + 16) )
  {
    (*(this->_vptr_VPhysicsCollisionAttribute_t + 2))(this, 16, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_nInteractsWith.m_Value = *(a2 + 16);
  }
  if ( this->m_nInteractsExclude.m_Value != *(a2 + 24) )
  {
    (*(this->_vptr_VPhysicsCollisionAttribute_t + 2))(this, 24, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_nInteractsExclude.m_Value = *(a2 + 24);
  }
  if ( this->m_nEntityId.m_Value != *(a2 + 32) )
  {
    (*(this->_vptr_VPhysicsCollisionAttribute_t + 2))(this, 32, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_nEntityId.m_Value = *(a2 + 32);
  }
  if ( this->m_nHierarchyId.m_Value != *(a2 + 36) )
  {
    (*(this->_vptr_VPhysicsCollisionAttribute_t + 2))(this, 36, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_nHierarchyId.m_Value = *(a2 + 36);
  }
  if ( this->m_nCollisionGroup.m_Value != *(a2 + 38) )
  {
    (*(this->_vptr_VPhysicsCollisionAttribute_t + 2))(this, 38, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_nCollisionGroup.m_Value = *(a2 + 38);
  }
  if ( this->m_nCollisionFunctionMask.m_Value != *(a2 + 39) )
  {
    (*(this->_vptr_VPhysicsCollisionAttribute_t + 2))(this, 39, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_nCollisionFunctionMask.m_Value = *(a2 + 39);
  }
  return this;
}


// VPhysicsCollisionAttribute_t::Compare  (line 60, @0x0000000002094d00, libserver.so)  // inlines: GetForModify, NetworkStateChanged
// callers: CBaseModelEntity::SpawnShared, CBaseDoor::CreateVPhysics, CFuncMoveLinear::CreateVPhysics, CMarkupVolume::Spawn, CBasePlayer::SetOrResetInitialState, CBaseTrigger::InitTrigger
void __fastcall VPhysicsCollisionAttribute_t::Compare(
        VPhysicsCollisionAttribute_t *const this,
        const VPhysicsCollisionAttribute_t *const original)
{
  if ( this->m_nInteractsAs.m_Value != original->m_nInteractsAs.m_Value )
    (*(this->_vptr_VPhysicsCollisionAttribute_t + 2))(this, 8, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
  if ( this->m_nInteractsWith.m_Value != original->m_nInteractsWith.m_Value )
    (*(this->_vptr_VPhysicsCollisionAttribute_t + 2))(this, 16, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
  if ( this->m_nInteractsExclude.m_Value != original->m_nInteractsExclude.m_Value )
    (*(this->_vptr_VPhysicsCollisionAttribute_t + 2))(this, 24, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
  if ( this->m_nEntityId.m_Value != original->m_nEntityId.m_Value )
    (*(this->_vptr_VPhysicsCollisionAttribute_t + 2))(this, 32, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
  if ( this->m_nHierarchyId.m_Value != original->m_nHierarchyId.m_Value )
    (*(this->_vptr_VPhysicsCollisionAttribute_t + 2))(this, 36, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
  if ( this->m_nCollisionGroup.m_Value != original->m_nCollisionGroup.m_Value )
    (*(this->_vptr_VPhysicsCollisionAttribute_t + 2))(this, 38, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
  if ( this->m_nCollisionFunctionMask.m_Value != original->m_nCollisionFunctionMask.m_Value )
    (*(this->_vptr_VPhysicsCollisionAttribute_t + 2))(this, 39, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
}


// VPhysicsCollisionAttribute_t::Schema_DynamicBinding  (line 89, @0x0000000001f0eea0, libserver.so)
// globals: VPhysicsCollisionAttribute_t::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall VPhysicsCollisionAttribute_t::Schema_DynamicBinding(
        const VPhysicsCollisionAttribute_t *const this)
{
  return VPhysicsCollisionAttribute_t::s_pSchemaBinding;
}


// VPhysicsCollisionAttribute_t::NetworkStateChanged  (line 90, @0x0000000001f0eeb0, libserver.so)
void __fastcall VPhysicsCollisionAttribute_t::NetworkStateChanged(VPhysicsCollisionAttribute_t *const this)
{
  ;
}


// VPhysicsCollisionAttribute_t::NetworkStateChanged  (line 90, @0x0000000001f0eec0, libserver.so)
void __fastcall VPhysicsCollisionAttribute_t::NetworkStateChanged(
        VPhysicsCollisionAttribute_t *const this,
        uint32 nLocalOffset,
        int32 nArrayIndex,
        ChangeAccessorFieldPathIndex_t nPathIndex)
{
  ;
}


// VPhysicsCollisionAttribute_t::NetworkStateChangedLog  (line 90, @0x0000000001f0eed0, libserver.so)
void __fastcall VPhysicsCollisionAttribute_t::NetworkStateChangedLog(
        const VPhysicsCollisionAttribute_t *const this,
        const char *pVarName,
        const char *pMsg)
{
  ;
}


// CCollisionProperty::operator=  (line 97, @0x0000000001f14750, libserver.so)  // inlines: NetworkStateChanged, Set, operator!=, operator=
// callers: CSchemaClassBinding<CCollisionProperty>::AllocateAndCopyConstruct, CSchemaClassBinding<CCollisionProperty>::Copy
CCollisionProperty *__fastcall CCollisionProperty::operator=(CCollisionProperty *const this, __int64 a2)
{
  bool v4; // zf

  this->m_pOuter = *(a2 + 8);
  if ( this->m_collisionAttribute.m_nInteractsAs.m_Value != *(a2 + 24) )
  {
    (*(this->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
      &this->m_collisionAttribute,
      8,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL);
    this->m_collisionAttribute.m_nInteractsAs.m_Value = *(a2 + 24);
  }
  if ( this->m_collisionAttribute.m_nInteractsWith.m_Value != *(a2 + 32) )
  {
    (*(this->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
      &this->m_collisionAttribute,
      16,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL);
    this->m_collisionAttribute.m_nInteractsWith.m_Value = *(a2 + 32);
  }
  if ( this->m_collisionAttribute.m_nInteractsExclude.m_Value != *(a2 + 40) )
  {
    (*(this->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
      &this->m_collisionAttribute,
      24,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL);
    this->m_collisionAttribute.m_nInteractsExclude.m_Value = *(a2 + 40);
  }
  if ( this->m_collisionAttribute.m_nEntityId.m_Value != *(a2 + 48) )
  {
    (*(this->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
      &this->m_collisionAttribute,
      32,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL);
    this->m_collisionAttribute.m_nEntityId.m_Value = *(a2 + 48);
  }
  if ( this->m_collisionAttribute.m_nHierarchyId.m_Value != *(a2 + 52) )
  {
    (*(this->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
      &this->m_collisionAttribute,
      36,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL);
    this->m_collisionAttribute.m_nHierarchyId.m_Value = *(a2 + 52);
  }
  if ( this->m_collisionAttribute.m_nCollisionGroup.m_Value != *(a2 + 54) )
  {
    (*(this->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
      &this->m_collisionAttribute,
      38,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL);
    this->m_collisionAttribute.m_nCollisionGroup.m_Value = *(a2 + 54);
  }
  if ( this->m_collisionAttribute.m_nCollisionFunctionMask.m_Value != *(a2 + 55) )
  {
    (*(this->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
      &this->m_collisionAttribute,
      39,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL);
    this->m_collisionAttribute.m_nCollisionFunctionMask.m_Value = *(a2 + 55);
  }
  if ( *(a2 + 56) == this->m_vecMins.m_Value.x
    && *(a2 + 60) == this->m_vecMins.m_Value.y
    && *(a2 + 64) == this->m_vecMins.m_Value.z )
  {
    v4 = *(a2 + 68) == this->m_vecMaxs.m_Value.x;
  }
  else
  {
    (*(this->_vptr_ICollideable + 31))(this, 56, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_vecMins.m_Value.x = *(a2 + 56);
    this->m_vecMins.m_Value.y = *(a2 + 60);
    this->m_vecMins.m_Value.z = *(a2 + 64);
    v4 = *(a2 + 68) == this->m_vecMaxs.m_Value.x;
  }
  if ( !v4 || *(a2 + 72) != this->m_vecMaxs.m_Value.y || *(a2 + 76) != this->m_vecMaxs.m_Value.z )
  {
    (*(this->_vptr_ICollideable + 31))(this, 68, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_vecMaxs.m_Value.x = *(a2 + 68);
    this->m_vecMaxs.m_Value.y = *(a2 + 72);
    this->m_vecMaxs.m_Value.z = *(a2 + 76);
  }
  this->m_hLocateHandle.m_Data = *(a2 + 80);
  if ( this->m_usSolidFlags.m_Value != *(a2 + 82) )
  {
    (*(this->_vptr_ICollideable + 31))(this, 82, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_usSolidFlags.m_Value = *(a2 + 82);
  }
  if ( this->m_nSolidType.m_Value != *(a2 + 83) )
  {
    (*(this->_vptr_ICollideable + 31))(this, 83, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_nSolidType.m_Value = *(a2 + 83);
  }
  if ( this->m_triggerBloat.m_Value != *(a2 + 84) )
  {
    (*(this->_vptr_ICollideable + 31))(this, 84, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_triggerBloat.m_Value = *(a2 + 84);
  }
  if ( this->m_nSurroundType.m_Value != *(a2 + 85) )
  {
    (*(this->_vptr_ICollideable + 31))(this, 85, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_nSurroundType.m_Value = *(a2 + 85);
  }
  if ( this->m_CollisionGroup.m_Value != *(a2 + 86) )
  {
    (*(this->_vptr_ICollideable + 31))(this, 86, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_CollisionGroup.m_Value = *(a2 + 86);
  }
  if ( this->m_bHitboxEnabled.m_Value != *(a2 + 87) )
  {
    (*(this->_vptr_ICollideable + 31))(this, 87, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bHitboxEnabled.m_Value = *(a2 + 87);
  }
  this->m_flRadius = *(a2 + 88);
  if ( *(a2 + 92) != this->m_vecSpecifiedSurroundingMins.m_Value.x
    || *(a2 + 96) != this->m_vecSpecifiedSurroundingMins.m_Value.y
    || *(a2 + 100) != this->m_vecSpecifiedSurroundingMins.m_Value.z )
  {
    (*(this->_vptr_ICollideable + 31))(this, 92, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_vecSpecifiedSurroundingMins.m_Value.x = *(a2 + 92);
    this->m_vecSpecifiedSurroundingMins.m_Value.y = *(a2 + 96);
    this->m_vecSpecifiedSurroundingMins.m_Value.z = *(a2 + 100);
  }
  if ( *(a2 + 104) != this->m_vecSpecifiedSurroundingMaxs.m_Value.x
    || *(a2 + 108) != this->m_vecSpecifiedSurroundingMaxs.m_Value.y
    || *(a2 + 112) != this->m_vecSpecifiedSurroundingMaxs.m_Value.z )
  {
    (*(this->_vptr_ICollideable + 31))(this, 104, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_vecSpecifiedSurroundingMaxs.m_Value.x = *(a2 + 104);
    this->m_vecSpecifiedSurroundingMaxs.m_Value.y = *(a2 + 108);
    this->m_vecSpecifiedSurroundingMaxs.m_Value.z = *(a2 + 112);
  }
  this->m_vecSurroundingMaxs.x = *(a2 + 116);
  this->m_vecSurroundingMaxs.y = *(a2 + 120);
  this->m_vecSurroundingMaxs.z = *(a2 + 124);
  this->m_vecSurroundingMins.x = *(a2 + 128);
  this->m_vecSurroundingMins.y = *(a2 + 132);
  this->m_vecSurroundingMins.z = *(a2 + 136);
  if ( *(a2 + 140) != this->m_vCapsuleCenter1.m_Value.x
    || *(a2 + 144) != this->m_vCapsuleCenter1.m_Value.y
    || *(a2 + 148) != this->m_vCapsuleCenter1.m_Value.z )
  {
    (*(this->_vptr_ICollideable + 31))(this, 140, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_vCapsuleCenter1.m_Value.x = *(a2 + 140);
    this->m_vCapsuleCenter1.m_Value.y = *(a2 + 144);
    this->m_vCapsuleCenter1.m_Value.z = *(a2 + 148);
  }
  if ( *(a2 + 152) != this->m_vCapsuleCenter2.m_Value.x
    || *(a2 + 156) != this->m_vCapsuleCenter2.m_Value.y
    || *(a2 + 160) != this->m_vCapsuleCenter2.m_Value.z )
  {
    (*(this->_vptr_ICollideable + 31))(this, 152, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_vCapsuleCenter2.m_Value.x = *(a2 + 152);
    this->m_vCapsuleCenter2.m_Value.y = *(a2 + 156);
    this->m_vCapsuleCenter2.m_Value.z = *(a2 + 160);
  }
  if ( this->m_flCapsuleRadius.m_Value == *(a2 + 164) )
    return this;
  (*(this->_vptr_ICollideable + 31))(this, 164, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
  this->m_flCapsuleRadius.m_Value = *(a2 + 164);
  return this;
}


// CCollisionProperty::Schema_DynamicBinding  (line 99, @0x000000000208fc90, libserver.so)
// calls: CCollisionProperty::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CCollisionProperty::Schema_DynamicBinding(
        const CCollisionProperty *const this)
{
  CCollisionProperty::Schema_VerifyBindingIsRegistered();
  return CCollisionProperty::s_pSchemaBinding;
}


// CCollisionProperty::HackToMakeAVTable  (line 101, @0x000000000208e8b0, libserver.so)
void __fastcall CCollisionProperty::HackToMakeAVTable(const CCollisionProperty *const this)
{
  ;
}


// CCollisionProperty::NetworkStateChanged  (line 102, @0x00000000021b0b30, libserver.so)
void __fastcall CCollisionProperty::NetworkStateChanged(CCollisionProperty *const this)
{
  ;
}


// CCollisionProperty::NetworkStateChanged  (line 102, @0x00000000021b0b40, libserver.so)
void __fastcall CCollisionProperty::NetworkStateChanged(
        CCollisionProperty *const this,
        uint32 nLocalOffset,
        int32 nArrayIndex,
        ChangeAccessorFieldPathIndex_t nPathIndex)
{
  ;
}


// CCollisionProperty::NetworkStateChangedLog  (line 102, @0x00000000021b0b50, libserver.so)
void __fastcall CCollisionProperty::NetworkStateChangedLog(
        const CCollisionProperty *const this,
        const char *pVarName,
        const char *pMsg)
{
  ;
}


// CCollisionProperty::GetCollisionAttributes  (line 133, @0x000000000208e8c0, libserver.so)
const RnCollisionAttr_t *__fastcall CCollisionProperty::GetCollisionAttributes(const CCollisionProperty *const this)
{
  return &this->m_collisionAttribute.m_nInteractsAs;
}


// CCollisionProperty::NetworkVar_m_collisionAttribute::NetworkStateChanged  (line 351, @0x00000000021b0b60, libserver.so)  // inlines: DispatchNetworkStateChanged<CCollisionProperty>
void __fastcall CCollisionProperty::NetworkVar_m_collisionAttribute::NetworkStateChanged(
        CCollisionProperty::NetworkVar_m_collisionAttribute *const this)
{
  (*(*(this - 2) + 240LL))(this - 16);
}


// CCollisionProperty::NetworkVar_m_collisionAttribute::NetworkStateChangedLog  (line 351, @0x00000000021b0b80, libserver.so)  // inlines: DispatchNetworkStateChangedLog<CCollisionProperty>
void __fastcall CCollisionProperty::NetworkVar_m_collisionAttribute::NetworkStateChangedLog(
        const CCollisionProperty::NetworkVar_m_collisionAttribute *const this,
        const char *pVarName,
        const char *pMsg)
{
  (*(*(this - 2) + 256LL))(this - 16, pVarName, pMsg);
}


// CCollisionProperty::NetworkVar_m_collisionAttribute::NetworkStateChanged  (line 351, @0x00000000021b0ba0, libserver.so)  // inlines: DispatchNetworkStateChanged<CCollisionProperty>
void __fastcall CCollisionProperty::NetworkVar_m_collisionAttribute::NetworkStateChanged(
        CCollisionProperty::NetworkVar_m_collisionAttribute *const this,
        uint32 nLocalOffset,
        int32 nArrayIndex,
        ChangeAccessorFieldPathIndex_t nPathIndex)
{
  (*(*(this - 2) + 248LL))(this - 16, nLocalOffset + 16, nArrayIndex, nPathIndex.m_Value);
}


// CCollisionAttributeWriter<RnCollisionAttr_t>::Release  (line 411, @0x0000000001999c0e, libserver.so)  // inlines: Compare, GetForModify, NetworkStateChanged
// callers: CCollisionProperty::EnableAllCollisions, CCollisionProperty::DisableAllCollisions, CCollisionProperty::EnableSolidCollisions, CCollisionProperty::DisableSolidCollisions, CCollisionProperty::EnableInteractsAsMask, CCollisionProperty::EnableInteractsWithMask, CCollisionProperty::EnableInteractsExcludeMask, CCollisionProperty::EnableTouchEvents, CCollisionProperty::DisableInteractsAsMask, CCollisionProperty::DisableInteractsExcludeMask, CCollisionProperty::DisableTouchEvents, CCollisionProperty::EnableTraceAndQueries (22 total)
void __fastcall CCollisionAttributeWriter<RnCollisionAttr_t>::Release(
        CCollisionAttributeWriter<RnCollisionAttr_t> *const this)
{
  CCollisionProperty *m_pCollisionProp; // rbx

  m_pCollisionProp = this->m_pCollisionProp;
  this->m_bReleased = 1;
  if ( m_pCollisionProp->m_collisionAttribute.m_nInteractsAs.m_Value != this->m_OriginalState.m_nInteractsAs.m_Value )
    (*(m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
      &m_pCollisionProp->m_collisionAttribute,
      8,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL);
  if ( m_pCollisionProp->m_collisionAttribute.m_nInteractsWith.m_Value != this->m_OriginalState.m_nInteractsWith.m_Value )
    (*(m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
      &m_pCollisionProp->m_collisionAttribute,
      16,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL);
  if ( m_pCollisionProp->m_collisionAttribute.m_nInteractsExclude.m_Value != this->m_OriginalState.m_nInteractsExclude.m_Value )
    (*(m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
      &m_pCollisionProp->m_collisionAttribute,
      24,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL);
  if ( m_pCollisionProp->m_collisionAttribute.m_nEntityId.m_Value != this->m_OriginalState.m_nEntityId.m_Value )
    (*(m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
      &m_pCollisionProp->m_collisionAttribute,
      32,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL);
  if ( m_pCollisionProp->m_collisionAttribute.m_nHierarchyId.m_Value != this->m_OriginalState.m_nHierarchyId.m_Value )
    (*(m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
      &m_pCollisionProp->m_collisionAttribute,
      36,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL);
  if ( m_pCollisionProp->m_collisionAttribute.m_nCollisionGroup.m_Value != this->m_OriginalState.m_nCollisionGroup.m_Value )
    (*(m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
      &m_pCollisionProp->m_collisionAttribute,
      38,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL);
  if ( m_pCollisionProp->m_collisionAttribute.m_nCollisionFunctionMask.m_Value != this->m_OriginalState.m_nCollisionFunctionMask.m_Value )
    (*(m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
      &m_pCollisionProp->m_collisionAttribute,
      39,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL);
}


// CCollisionProperty::GetSolidFlags  (line 510, @0x000000000208e8d0, libserver.so)
int __fastcall CCollisionProperty::GetSolidFlags(const CCollisionProperty *const this)
{
  return this->m_usSolidFlags.m_Value;
}


// CCollisionProperty::OBBCenter  (line 530, @0x000000000208e8e0, libserver.so)  // inlines: VectorAdd, VectorMultiply, operator*, operator+
Vector __fastcall CCollisionProperty::OBBCenter(const CCollisionProperty *const this)
{
  float v1; // xmm2_4
  float v2; // xmm3_4
  float v5[4]; // [rsp+0h] [rbp-10h]
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  v1 = (this->m_vecMins.m_Value.x + this->m_vecMaxs.m_Value.x) * 0.5;
  v2 = this->m_vecMins.m_Value.z + this->m_vecMaxs.m_Value.z;
  v5[1] = (this->m_vecMins.m_Value.y + this->m_vecMaxs.m_Value.y) * 0.5;
  result.z = 0.5 * v2;
  v5[0] = v1;
  *&result.x = *v5;
  return result;
}


// CCollisionProperty::DoesSequenceChangeInvalidateSurroundingBox  (line 621, @0x000000000208e930, libserver.so)  // inlines: operator==<SurroundingBoundsType_t>
bool __fastcall CCollisionProperty::DoesSequenceChangeInvalidateSurroundingBox(const CCollisionProperty *const this)
{
  return this->m_nSurroundType.m_Value == SurroundingBoundsType_t::USE_ROTATION_EXPANDED_SEQUENCE_BOUNDS;
}


// CCollisionProperty::DoesRotationInvalidateSurroundingBox  (line 630, @0x0000000002090550, libserver.so)  // inlines: IsBoundsDefinedInEntitySpace, operator!=<SolidType_t>
bool __fastcall CCollisionProperty::DoesRotationInvalidateSurroundingBox(const CCollisionProperty *const this)
{
  SurroundingBoundsType_t m_Value; // cl
  bool result; // al
  SolidType_t v3; // al

  m_Value = this->m_nSurroundType.m_Value;
  result = 1;
  if ( m_Value <= SurroundingBoundsType_t::USE_ROTATION_EXPANDED_SEQUENCE_BOUNDS )
  {
    result = 0;
    if ( ((1LL << m_Value) & 0xA8) == 0 )
    {
      result = 1;
      if ( ((1LL << m_Value) & 0x43) != 0 )
      {
        v3 = this->m_nSolidType.m_Value;
        return v3 != SolidType_t::SOLID_BBOX && v3 != SolidType_t::SOLID_NONE;
      }
    }
  }
  return result;
}


