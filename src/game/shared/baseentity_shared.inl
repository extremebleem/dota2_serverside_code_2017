
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CPointEntity::~CPointEntity  (line 68, @0x0000000001eec6b0, libserver.so)
// calls: CBaseEntity::~CBaseEntity
void __fastcall CPointEntity::~CPointEntity(CPointEntity *const this)
{
  this->_vptr_IHandleEntity = &off_3FB6510;
  CBaseEntity::~CBaseEntity(this);
}


// CPointEntity::~CPointEntity  (line 68, @0x0000000001eec6d0, libserver.so)  // inlines: ~CPointEntity
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CPointEntity::~CPointEntity(CPointEntity *const this)
{
  this->_vptr_IHandleEntity = &off_3FB6510;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CPointEntity::GetEntityClass  (line 70, @0x0000000001eea140, libserver.so)
CEntityClass *__cdecl CPointEntity::GetEntityClass()
{
  return g_pEntityCPointEntityClass;
}


// CPointEntity::Schema_DynamicBinding  (line 70, @0x0000000001eea150, libserver.so)
// globals: CPointEntity::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CPointEntity::Schema_DynamicBinding(const CPointEntity *const this)
{
  return CPointEntity::s_pSchemaBinding;
}


// CPointEntity::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 70, @0x0000000001eea160, libserver.so)
// globals: CPointEntity::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CPointEntity::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CPointEntity::CEntityInstanceEntityClass *const this)
{
  return CPointEntity::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CPointEntity::CEntityInstanceEntityClass::DestructInstance  (line 70, @0x0000000001eea170, libserver.so)  // inlines: Destruct<CPointEntity>
void __fastcall CPointEntity::CEntityInstanceEntityClass::DestructInstance(
        CPointEntity::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CPointEntity::CEntityInstanceEntityClass::FreeInstance  (line 70, @0x0000000001eea190, libserver.so)
void __fastcall CPointEntity::CEntityInstanceEntityClass::FreeInstance(
        CPointEntity::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CPointEntity::CEntityInstanceEntityClass::CanAllocate  (line 70, @0x0000000001eea1b0, libserver.so)
bool __fastcall CPointEntity::CEntityInstanceEntityClass::CanAllocate(
        const CPointEntity::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CPointEntity::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 70, @0x0000000001eea1c0, libserver.so)
// globals: CPointEntity::s_pSchemaBinding
const ISchemaBinding *__fastcall CPointEntity::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CPointEntity::CEntityInstanceEntityClass *const this)
{
  return CPointEntity::s_pSchemaBinding;
}


// CPointEntity::CEntityInstanceEntityClass::AllocateInstance  (line 70, @0x0000000001eebd60, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CPointEntity::CEntityInstanceEntityClass::AllocateInstance(
        CPointEntity::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 776);
  memset(v1, 0, 0x308u);
  return v1;
}


// CPointEntity::CEntityInstanceEntityClass::ConstructInstance  (line 70, @0x0000000001eec390, libserver.so)  // inlines: CPointEntity, Construct<CPointEntity>
// calls: CBaseEntity::CBaseEntity
CEntityInstance *__fastcall CPointEntity::CEntityInstanceEntityClass::ConstructInstance(
        CPointEntity::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseEntity::CBaseEntity(p);
    *p = &off_3FB6510;
  }
  return p;
}


// CPointEntity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 70, @0x0000000001eeda90, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CPointEntity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CPointEntity::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CPointEntity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 70, @0x0000000001eedab0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CPointEntity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CPointEntity::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CPointEntity::GetEntityClassInfo  (line 70, @0x0000000001ef0090, libserver.so)  // inlines: GetEntityClassInfo
// calls: __cxa_guard_acquire, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_release
// callers: CInfoTarget::GetEntityClassInternal, CInfoParticleTarget::GetEntityClassInternal, CAmbientGeneric::GetEntityClassInternal, CRagdollMagnet::GetEntityClassInternal, CEnvDOFController::GetEntityClassInternal, CEnvPlayerSurfaceTrigger::GetEntityClassInternal, CMessage::GetEntityClassInternal, CEnvMicrophone::GetEntityClassInternal, CPhysImpact::GetEntityClassInternal, CSoundEnt::GetEntityClassInternal, CPathTrack::GetEntityClassInternal, CInfoPlayerStart::GetEntityClassInternal (72 total)
// strings: "CPointEntity", "CBaseEntity", "CGameEntity"
// globals: `guard variable for'CPointEntity::GetEntityClassInfo(void)::g_EntityCPointEntityClassInfo, CPointEntity::GetEntityClassInfo(void)::g_EntityCPointEntityClassInfo, `guard variable for'CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo, CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo, `guard variable for'CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo, CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo
CEntityClassInfo *__cdecl CPointEntity::GetEntityClassInfo()
{
  if ( `guard variable for'CPointEntity::GetEntityClassInfo(void)::g_EntityCPointEntityClassInfo != 0 )
    return &CPointEntity::GetEntityClassInfo(void)::g_EntityCPointEntityClassInfo;
  if ( __cxa_guard_acquire(&`guard variable for'CPointEntity::GetEntityClassInfo(void)::g_EntityCPointEntityClassInfo) == 0 )
    return &CPointEntity::GetEntityClassInfo(void)::g_EntityCPointEntityClassInfo;
  if ( `guard variable for'CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo) != 0 )
  {
    if ( `guard variable for'CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo == 0
      && __cxa_guard_acquire(&`guard variable for'CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo) != 0 )
    {
      CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
        &CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo,
        "CGameEntity",
        0,
        0,
        &g_EntityRootClassInfo);
      __cxa_guard_release(&`guard variable for'CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo);
    }
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo,
      "CBaseEntity",
      0,
      0,
      &CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo);
    __cxa_guard_release(&`guard variable for'CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo);
  }
  CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
    &CPointEntity::GetEntityClassInfo(void)::g_EntityCPointEntityClassInfo,
    "CPointEntity",
    0,
    0,
    &CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo);
  __cxa_guard_release(&`guard variable for'CPointEntity::GetEntityClassInfo(void)::g_EntityCPointEntityClassInfo);
  return &CPointEntity::GetEntityClassInfo(void)::g_EntityCPointEntityClassInfo;
}


// CPointEntity::GetEntityClassInternal  (line 70, @0x0000000001ef4e80, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CPointEntity::SetupEntClassComponentOverrides, CBaseEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_entities_01.cpp
// strings: "CPointEntity"
// globals: `guard variable for'CPointEntity::GetEntityClassInternal(void)::g_EntityCPointEntityClass, CPointEntity::GetEntityClassInternal(void)::g_EntityCPointEntityClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CPointEntity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CPointEntity::GetEntityClassInfo(void)::g_EntityCPointEntityClassInfo, CPointEntity::GetEntityClassInfo(void)::g_EntityCPointEntityClassInfo
CEntityClass *__cdecl CPointEntity::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CPointEntity::GetEntityClassInternal(void)::g_EntityCPointEntityClass == 0
    && __cxa_guard_acquire(&`guard variable for'CPointEntity::GetEntityClassInternal(void)::g_EntityCPointEntityClass) != 0 )
  {
    CPointEntity::GetEntityClassInternal(void)::g_EntityCPointEntityClass.m_designerName.u.m_Id = 0;
    CPointEntity::GetEntityClassInternal(void)::g_EntityCPointEntityClass._vptr_CEntityClass = off_3F79390;
    CPointEntity::GetEntityClassInternal(void)::g_EntityCPointEntityClass.m_ComponentOffsets.m_Size = 0;
    CPointEntity::GetEntityClassInternal(void)::g_EntityCPointEntityClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CPointEntity::GetEntityClassInternal(void)::g_EntityCPointEntityClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CPointEntity::GetEntityClassInternal(void)::g_EntityCPointEntityClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CPointEntity::GetEntityClassInternal(void)::g_EntityCPointEntityClass.m_AllHelpers.m_Size = 0;
    CPointEntity::GetEntityClassInternal(void)::g_EntityCPointEntityClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CPointEntity::GetEntityClassInternal(void)::g_EntityCPointEntityClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CPointEntity::GetEntityClassInternal(void)::g_EntityCPointEntityClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CPointEntity::GetEntityClassInternal(void)::g_EntityCPointEntityClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CPointEntity::GetEntityClassInternal(void)::g_EntityCPointEntityClass.m_instanceUnserializer.m_atomicFields,
      4);
    CPointEntity::GetEntityClassInternal(void)::g_EntityCPointEntityClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CPointEntity::GetEntityClassInternal(void)::g_EntityCPointEntityClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CPointEntity::GetEntityClassInternal(void)::g_EntityCPointEntityClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CPointEntity::GetEntityClassInternal(void)::g_EntityCPointEntityClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CPointEntity::GetEntityClassInternal(void)::g_EntityCPointEntityClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CPointEntity::GetEntityClassInternal(void)::g_EntityCPointEntityClass;
    CPointEntity::GetEntityClassInternal(void)::g_EntityCPointEntityClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CPointEntity::GetEntityClassInternal(void)::g_EntityCPointEntityClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CPointEntity::GetEntityClassInternal(void)::g_EntityCPointEntityClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CPointEntity::GetEntityClassInternal(void)::g_EntityCPointEntityClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CPointEntity::GetEntityClassInternal(void)::g_EntityCPointEntityClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CPointEntity::GetEntityClassInternal(void)::g_EntityCPointEntityClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CPointEntity::GetEntityClassInternal(void)::g_EntityCPointEntityClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CPointEntity::GetEntityClassInternal(void)::g_EntityCPointEntityClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CPointEntity::GetEntityClassInternal(void)::g_EntityCPointEntityClass.m_classInputs.m_Size = 0;
    CPointEntity::GetEntityClassInternal(void)::g_EntityCPointEntityClass.m_classInputs.m_Memory.m_pMemory = 0;
    CPointEntity::GetEntityClassInternal(void)::g_EntityCPointEntityClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CPointEntity::GetEntityClassInternal(void)::g_EntityCPointEntityClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CPointEntity::GetEntityClassInternal(void)::g_EntityCPointEntityClass.m_classOutputs.m_Size = 0;
    CPointEntity::GetEntityClassInternal(void)::g_EntityCPointEntityClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CPointEntity::GetEntityClassInternal(void)::g_EntityCPointEntityClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CPointEntity::GetEntityClassInternal(void)::g_EntityCPointEntityClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CPointEntity::GetEntityClassInternal(void)::g_EntityCPointEntityClass.m_requiredEHandle.m_Index = -1;
    CPointEntity::GetEntityClassInternal(void)::g_EntityCPointEntityClass.m_hNetworkSerializer = 0;
    CPointEntity::GetEntityClassInternal(void)::g_EntityCPointEntityClass.m_pBaseClassInfo = 0;
    CPointEntity::GetEntityClassInternal(void)::g_EntityCPointEntityClass.m_pClassInfo = 0;
    CPointEntity::GetEntityClassInternal(void)::g_EntityCPointEntityClass.m_flags = 0;
    CPointEntity::GetEntityClassInternal(void)::g_EntityCPointEntityClass.m_nAllHelpersFlags = 0;
    CPointEntity::GetEntityClassInternal(void)::g_EntityCPointEntityClass.m_pScriptClassDesc = 0;
    CPointEntity::GetEntityClassInternal(void)::g_EntityCPointEntityClass.m_pInputs = 0;
    CPointEntity::GetEntityClassInternal(void)::g_EntityCPointEntityClass.m_nInputCount = 0;
    CPointEntity::GetEntityClassInternal(void)::g_EntityCPointEntityClass.m_pOutputs = 0;
    CPointEntity::GetEntityClassInternal(void)::g_EntityCPointEntityClass.m_nOutputCount = 0;
    CPointEntity::GetEntityClassInternal(void)::g_EntityCPointEntityClass.m_pGameClass = 0;
    CPointEntity::GetEntityClassInternal(void)::g_EntityCPointEntityClass._vptr_CEntityClass = off_3FB61F0;
    __cxa_guard_release(&`guard variable for'CPointEntity::GetEntityClassInternal(void)::g_EntityCPointEntityClass);
    __cxa_atexit(
      CPointEntity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CPointEntity::GetEntityClassInternal(void)::g_EntityCPointEntityClass,
      &_dso_handle);
  }
  if ( g_pEntityCPointEntityClass != 0 )
    return &CPointEntity::GetEntityClassInternal(void)::g_EntityCPointEntityClass;
  if ( `guard variable for'CPointEntity::GetEntityClassInfo(void)::g_EntityCPointEntityClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CPointEntity::GetEntityClassInfo(void)::g_EntityCPointEntityClassInfo) != 0 )
  {
    EntityClassInfo = CBaseEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CPointEntity::GetEntityClassInfo(void)::g_EntityCPointEntityClassInfo,
      "CPointEntity",
      0,
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CPointEntity::GetEntityClassInfo(void)::g_EntityCPointEntityClassInfo);
  }
  CPointEntity::GetEntityClassInternal(void)::g_EntityCPointEntityClass.m_pClassInfo = &CPointEntity::GetEntityClassInfo(void)::g_EntityCPointEntityClassInfo;
  CPointEntity::GetEntityClassInternal(void)::g_EntityCPointEntityClass.m_pBaseClassInfo = CPointEntity::GetEntityClassInfo(void)::g_EntityCPointEntityClassInfo.m_pBaseClassInfo;
  g_pEntityCPointEntityClass = &CPointEntity::GetEntityClassInternal(void)::g_EntityCPointEntityClass;
  CPointEntity::GetEntityClassInfo(void)::g_EntityCPointEntityClassInfo.m_pClass = &CPointEntity::GetEntityClassInternal(void)::g_EntityCPointEntityClass;
  CPointEntity::GetEntityClassInternal(void)::g_EntityCPointEntityClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  CPointEntity::SetupEntClassComponentOverrides(g_pEntityCPointEntityClass);
  return &CPointEntity::GetEntityClassInternal(void)::g_EntityCPointEntityClass;
}


// CPointEntity::ObjectCaps  (line 79, @0x0000000001eec430, libserver.so)
// calls: CBaseEntity::ObjectCaps
int __fastcall CPointEntity::ObjectCaps(CPointEntity *const this)
{
  int result; // eax

  result = CBaseEntity::ObjectCaps(this);
  LOBYTE(result) = result & 0x7F;
  return result;
}


// CEntityHandle::operator CBaseEntity*  (line 138, @0x0000000002094e10, libserver.so)  // inlines: GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity
// callers: CBreakableProp::Break, CFourWheelVehiclePhysics::Think, CShatterGlassShard::GenerateProceduralShatterGlassShardModel
// globals: CEntityHandle::gm_pEntityList
CBaseEntity *__fastcall CEntityHandle::operator CBaseEntity *(CEntityHandle *const this)
{
  CBaseEntity *result; // rax
  CEntityIdentity *v2; // rcx
  CEntityIdentity *v3; // rcx

  result = 0;
  if ( this->m_Index + 2 > 1 )
  {
    v2 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_Index) >> 9) & 0x3F];
    if ( v2 != 0 )
    {
      v3 = &v2[this->m_Index & 0x1FF];
      if ( v3 != 0 && this->m_Index == v3->m_EHandle.m_Index )
        return v3->m_pInstance;
    }
  }
  return result;
}


// CBaseEntity::Precache  (line 295, @0x0000000001b52040, libserver.so)
// calls: CEntityInstance::Precache
void __fastcall CBaseEntity::Precache(CBaseEntity *const this, const CEntityPrecacheContext *pContext)
{
  CEntityInstance::Precache(this, pContext);
}


// CBaseEntity::WorldSpaceCenter  (line 494, @0x0000000001b51020, libserver.so)  // inlines: CollisionToWorldSpace, IsBoundsDefinedInEntitySpace, VectorMA, VectorTransform, WorldSpaceCenter, operator==
// calls: VectorTransform, CBaseEntity::GetAbsOrigin
Vector __fastcall CBaseEntity::WorldSpaceCenter(const CBaseEntity *const this)
{
  CCollisionProperty *m_pCollision; // rbx
  float v2; // xmm1_4
  float *v3; // rax
  float v4; // xmm2_4
  float v5; // xmm1_4
  float v6; // xmm0_4
  float *v9; // rax
  double v10; // xmm0_8
  const matrix3x4_t *v11; // rax
  const Vector *AbsOrigin; // rax
  vec_t z; // xmm1_4
  vec_t x; // xmm0_4
  float v15; // [rsp+Ch] [rbp-44h]
  float out[4]; // [rsp+20h] [rbp-30h] BYREF
  double in1; // [rsp+30h] [rbp-20h] BYREF
  float v18; // [rsp+38h] [rbp-18h]
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  m_pCollision = this->m_pCollision;
  if ( m_pCollision != 0 )
  {
    in1 = (*(m_pCollision->_vptr_ICollideable + 19))(this->m_pCollision);
    v18 = v2;
    if ( (m_pCollision->m_nSolidType.m_Value & 0xFD) == 0
      || (v9 = (*(m_pCollision->_vptr_ICollideable + 5))(m_pCollision),
          *&v10 = LODWORD(vec3_angle.x),
          vec3_angle.x == *v9)
      && (*&v10 = LODWORD(vec3_angle.y), *&v10 == v9[1])
      && (*&v10 = LODWORD(vec3_angle.z), *&v10 == v9[2]) )
    {
      v15 = (*(m_pCollision->_vptr_ICollideable + 27))(m_pCollision);
      v3 = (*(m_pCollision->_vptr_ICollideable + 4))(m_pCollision);
      v4 = (*&in1 * v15) + *v3;
      v5 = (*(&in1 + 1) * v15) + v3[1];
      v6 = (v15 * v18) + v3[2];
    }
    else
    {
      v11 = (*(m_pCollision->_vptr_ICollideable + 6))(m_pCollision, v10);
      VectorTransform(&in1, v11, out);
      v6 = out[2];
      v4 = out[0];
      v5 = out[1];
    }
    in1 = COERCE_DOUBLE(__PAIR64__(LODWORD(v5), LODWORD(v4)));
    v18 = v6;
  }
  else
  {
    AbsOrigin = CBaseEntity::GetAbsOrigin(this);
    z = AbsOrigin->z;
    x = AbsOrigin->x;
    HIDWORD(in1) = LODWORD(AbsOrigin->y);
    v18 = z;
    *&in1 = x;
  }
  *&result.x = in1;
  result.z = v18;
  return result;
}


// CBaseEntity::GetFriction  (line 690, @0x0000000001b505c0, libserver.so)
float __fastcall CBaseEntity::GetFriction(const CBaseEntity *const this)
{
  return this->m_flFriction.m_Value;
}


// CBaseEntity::SetGravity  (line 704, @0x0000000001fb74a0, libserver.so)
void __fastcall CBaseEntity::SetGravity(CBaseEntity *const this, float a2, float gravity)
{
  this->m_flGravity = a2;
}


// CBaseEntity::GetLocalVelocity  (line 739, @0x0000000001fb74b0, libserver.so)
const Vector *__fastcall CBaseEntity::GetLocalVelocity(const CBaseEntity *const this)
{
  return &this->m_vecVelocity.m_Value;
}


// CBaseEntity::GetAbsVelocity  (line 746, @0x0000000001fba1a0, libserver.so)
// calls: CBaseEntity::CalcAbsoluteVelocity
const Vector *__fastcall CBaseEntity::GetAbsVelocity(const CBaseEntity *const this)
{
  if ( (this->m_iEFlags & 0x1000) != 0 )
    CBaseEntity::CalcAbsoluteVelocity(this);
  return &this->m_vecAbsVelocity.m_Value;
}


// CBaseEntity::GetSmoothedVelocity  (line 762, @0x0000000001b505d0, libserver.so)
Vector __fastcall CBaseEntity::GetSmoothedVelocity(CBaseEntity *const this)
{
  Vector vel; // [rsp+10h] [rbp-20h] BYREF
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  (*(this->_vptr_IHandleEntity + 173))(this, &vel, 0);
  *&result.x = *&vel.x;
  result.z = vel.z;
  return result;
}


// CBaseEntity::GetLocalAngularVelocity  (line 771, @0x0000000001fb74c0, libserver.so)
const QAngle *__fastcall CBaseEntity::GetLocalAngularVelocity(const CBaseEntity *const this)
{
  return &this->m_vecAngVelocity;
}


// CBaseEntity::GetBaseVelocity  (line 778, @0x0000000001fb74d0, libserver.so)
const Vector *__fastcall CBaseEntity::GetBaseVelocity(const CBaseEntity *const this)
{
  return &this->m_vecBaseVelocity.m_Value;
}


// CBaseEntity::EyePosition  (line 840, @0x0000000001b50b30, libserver.so)  // inlines: VectorAdd, operator+
// calls: CBaseEntity::GetAbsOrigin
// callers: CBasePlayer::EyePosition
Vector __fastcall CBaseEntity::EyePosition(CBaseEntity *const this)
{
  float *v2; // rbx
  const Vector *AbsOrigin; // rax
  float v6[8]; // [rsp+10h] [rbp-20h]
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  v2 = (*(this->_vptr_IHandleEntity + 171))(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(this);
  v6[1] = AbsOrigin->y + v2[1];
  v6[0] = AbsOrigin->x + *v2;
  result.z = AbsOrigin->z + v2[2];
  *&result.x = *v6;
  return result;
}


// CBaseEntity::EyeAngles  (line 864, @0x0000000001b50b90, libserver.so)
// calls: CBaseEntity::GetAbsAngles
const QAngle *__fastcall CBaseEntity::EyeAngles(CBaseEntity *const this)
{
  return CBaseEntity::GetAbsAngles(this);
}


// CBaseEntity::LocalEyeAngles  (line 878, @0x0000000001b50ba0, libserver.so)
// calls: CBaseEntity::GetLocalAngles
const QAngle *__fastcall CBaseEntity::LocalEyeAngles(CBaseEntity *const this)
{
  return CBaseEntity::GetLocalAngles(this);
}


// CBaseEntity::EarPosition  (line 892, @0x0000000001b50600, libserver.so)
Vector __fastcall CBaseEntity::EarPosition(CBaseEntity *const this)
{
  return (*(this->_vptr_IHandleEntity + 164))(this);
}


// CBaseEntity::IsAlive  (line 913, @0x0000000001b50620, libserver.so)  // inlines: operator==<LifeState_t>
bool __fastcall CBaseEntity::IsAlive(const CBaseEntity *const this)
{
  return this->m_lifeState.m_Value == 0;
}


// CBaseEntity::Forward  (line 1082, @0x0000000002459c50, libserver.so)  // inlines: Normalized
// calls: CBaseEntity::EntityToWorldTransform, VectorNormalize
// callers: CDOTA_ActionRunner::PerformActionHelper_ProcessEffectControlPoints, CDOTA_ActionRunner::SelectActionTargets
Vector __fastcall CBaseEntity::Forward(const CBaseEntity *const this)
{
  const matrix3x4_t *v1; // rax
  float v2; // xmm2_4
  float v3; // xmm0_4
  Vector vec; // [rsp+10h] [rbp-10h] BYREF
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  v1 = CBaseEntity::EntityToWorldTransform(this);
  v2 = v1->m_flMatVal[1][0];
  v3 = v1->m_flMatVal[0][0];
  vec.z = v1->m_flMatVal[2][0];
  *&vec.x = __PAIR64__(LODWORD(v2), LODWORD(v3));
  VectorNormalize(&vec);
  *&result.x = *&vec.x;
  result.z = vec.z;
  return result;
}


// CBaseEntity::GetUsePriority  (line 1106, @0x0000000001b50630, libserver.so)
UsePriorityType __fastcall CBaseEntity::GetUsePriority(CBaseEntity *const this, CBaseEntity *pActivator)
{
  return UsePriorityType::USE_PRIORITY_NORMAL;
}


// CBaseEntity::GetViewOffset  (line 1180, @0x0000000001eea1d0, libserver.so)
const Vector *__fastcall CBaseEntity::GetViewOffset(const CBaseEntity *const this)
{
  return &vec3_origin;
}


// CBaseEntity::InternalSetEffects  (line 1189, @0x0000000001b51170, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<int>
void __fastcall CBaseEntity::InternalSetEffects(CBaseEntity *const this, int nEffects)
{
  if ( nEffects != this->m_fEffects.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 544, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_fEffects.m_Value = nEffects;
  }
}


// CBaseEntity::GetTeamNumber  (line 1196, @0x0000000001fb74e0, libserver.so)
int __fastcall CBaseEntity::GetTeamNumber(const CBaseEntity *const this)
{
  return this->m_iTeamNum.m_Value;
}


// CBaseEntity::ChangeTeam  (line 1203, @0x0000000001b511b0, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<int>
void __fastcall CBaseEntity::ChangeTeam(CBaseEntity *const this, int iTeamNum)
{
  unsigned __int8 v2; // r12

  v2 = iTeamNum;
  if ( iTeamNum != this->m_iTeamNum.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 383, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_iTeamNum.m_Value = v2;
  }
}


