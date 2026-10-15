
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CThrustController::Schema_DynamicBinding  (line 20, @0x00000000020026f0, libserver.so)
// globals: CThrustController::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CThrustController::Schema_DynamicBinding(const CThrustController *const this)
{
  return CThrustController::s_pSchemaBinding;
}


// CThrustController::Simulate  (line 24, @0x0000000002002700, libserver.so)  // inlines: operator=
__int64 __fastcall CThrustController::Simulate(
        CThrustController *const this,
        IPhysicsMotionController *pController,
        IPhysicsObject *pObject,
        float deltaTime,
        Vector *const linear,
        AngularImpulse *const angular)
{
  *angular = this->m_torqueVector;
  *linear = this->m_thrustVector;
  return 1;
}


// CPhysicsCannister::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 47, @0x0000000002002750, libserver.so)
// globals: CPhysicsCannister::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CPhysicsCannister::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CPhysicsCannister::CEntityInstanceEntityClass *const this)
{
  return CPhysicsCannister::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CPhysicsCannister::CEntityInstanceEntityClass::DestructInstance  (line 47, @0x0000000002002760, libserver.so)  // inlines: Destruct<CPhysicsCannister>
void __fastcall CPhysicsCannister::CEntityInstanceEntityClass::DestructInstance(
        CPhysicsCannister::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CPhysicsCannister::CEntityInstanceEntityClass::FreeInstance  (line 47, @0x0000000002002780, libserver.so)
void __fastcall CPhysicsCannister::CEntityInstanceEntityClass::FreeInstance(
        CPhysicsCannister::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CPhysicsCannister::CEntityInstanceEntityClass::CanAllocate  (line 47, @0x00000000020027a0, libserver.so)
bool __fastcall CPhysicsCannister::CEntityInstanceEntityClass::CanAllocate(
        const CPhysicsCannister::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CPhysicsCannister::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 47, @0x00000000020027b0, libserver.so)
// globals: CPhysicsCannister::s_pSchemaBinding
const ISchemaBinding *__fastcall CPhysicsCannister::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CPhysicsCannister::CEntityInstanceEntityClass *const this)
{
  return CPhysicsCannister::s_pSchemaBinding;
}


// CPhysicsCannister::CEntityInstanceEntityClass::AllocateInstance  (line 47, @0x0000000002004bf0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CPhysicsCannister::CEntityInstanceEntityClass::AllocateInstance(
        CPhysicsCannister::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 2064);
  memset(v1, 0, 0x810u);
  return v1;
}


// CPhysicsCannister::CEntityInstanceEntityClass::ConstructInstance  (line 47, @0x0000000002006350, libserver.so)  // inlines: CEntityHandle, CEntityIOOutput, CHandle, CPhysicsCannister, CThrustController, CUtlSymbolLarge, Construct<CPhysicsCannister>
// calls: CBaseCombatCharacter::CBaseCombatCharacter
CEntityInstance *__fastcall CPhysicsCannister::CEntityInstanceEntityClass::ConstructInstance(
        CPhysicsCannister::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseCombatCharacter::CBaseCombatCharacter(p);
    *(p + 248) = 0;
    *(p + 512) = -1;
    *(p + 514) = -1;
    *(p + 236) = &off_407F378;
    *(p + 239) = &off_3FDEC10;
    *p = &off_407E790;
    *(p + 250) = off_3F7C190;
    *(p + 253) = off_3F7C190;
  }
  return p;
}


// CPhysicsCannister::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 47, @0x00000000020070e0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CPhysicsCannister::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CPhysicsCannister::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CPhysicsCannister::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 47, @0x0000000002007100, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CPhysicsCannister::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CPhysicsCannister::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CPhysicsCannister::GetEntityClassInternal  (line 47, @0x0000000002011320, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseCombatCharacter::InitScriptDesc, CBaseCombatCharacter::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_header_files_04.cpp
// strings: "physics_cannister", "CPhysicsCannister"
// globals: `guard variable for'CPhysicsCannister::GetEntityClassInternal(void)::g_EntityCPhysicsCannisterClass, CPhysicsCannister::GetEntityClassInternal(void)::g_EntityCPhysicsCannisterClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CPhysicsCannister::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CPhysicsCannister::GetEntityClassInfo(void)::g_EntityCPhysicsCannisterClassInfo, CPhysicsCannister::GetEntityClassInfo(void)::g_EntityCPhysicsCannisterClassInfo
CEntityClass *__cdecl CPhysicsCannister::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CPhysicsCannister::GetEntityClassInternal(void)::g_EntityCPhysicsCannisterClass == 0
    && __cxa_guard_acquire(&`guard variable for'CPhysicsCannister::GetEntityClassInternal(void)::g_EntityCPhysicsCannisterClass) != 0 )
  {
    CPhysicsCannister::GetEntityClassInternal(void)::g_EntityCPhysicsCannisterClass.m_designerName.u.m_Id = 0;
    CPhysicsCannister::GetEntityClassInternal(void)::g_EntityCPhysicsCannisterClass._vptr_CEntityClass = off_3F79390;
    CPhysicsCannister::GetEntityClassInternal(void)::g_EntityCPhysicsCannisterClass.m_ComponentOffsets.m_Size = 0;
    CPhysicsCannister::GetEntityClassInternal(void)::g_EntityCPhysicsCannisterClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CPhysicsCannister::GetEntityClassInternal(void)::g_EntityCPhysicsCannisterClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CPhysicsCannister::GetEntityClassInternal(void)::g_EntityCPhysicsCannisterClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CPhysicsCannister::GetEntityClassInternal(void)::g_EntityCPhysicsCannisterClass.m_AllHelpers.m_Size = 0;
    CPhysicsCannister::GetEntityClassInternal(void)::g_EntityCPhysicsCannisterClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CPhysicsCannister::GetEntityClassInternal(void)::g_EntityCPhysicsCannisterClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CPhysicsCannister::GetEntityClassInternal(void)::g_EntityCPhysicsCannisterClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CPhysicsCannister::GetEntityClassInternal(void)::g_EntityCPhysicsCannisterClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CPhysicsCannister::GetEntityClassInternal(void)::g_EntityCPhysicsCannisterClass.m_instanceUnserializer.m_atomicFields,
      4);
    CPhysicsCannister::GetEntityClassInternal(void)::g_EntityCPhysicsCannisterClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CPhysicsCannister::GetEntityClassInternal(void)::g_EntityCPhysicsCannisterClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CPhysicsCannister::GetEntityClassInternal(void)::g_EntityCPhysicsCannisterClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CPhysicsCannister::GetEntityClassInternal(void)::g_EntityCPhysicsCannisterClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CPhysicsCannister::GetEntityClassInternal(void)::g_EntityCPhysicsCannisterClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CPhysicsCannister::GetEntityClassInternal(void)::g_EntityCPhysicsCannisterClass;
    CPhysicsCannister::GetEntityClassInternal(void)::g_EntityCPhysicsCannisterClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CPhysicsCannister::GetEntityClassInternal(void)::g_EntityCPhysicsCannisterClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CPhysicsCannister::GetEntityClassInternal(void)::g_EntityCPhysicsCannisterClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CPhysicsCannister::GetEntityClassInternal(void)::g_EntityCPhysicsCannisterClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CPhysicsCannister::GetEntityClassInternal(void)::g_EntityCPhysicsCannisterClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CPhysicsCannister::GetEntityClassInternal(void)::g_EntityCPhysicsCannisterClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CPhysicsCannister::GetEntityClassInternal(void)::g_EntityCPhysicsCannisterClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CPhysicsCannister::GetEntityClassInternal(void)::g_EntityCPhysicsCannisterClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CPhysicsCannister::GetEntityClassInternal(void)::g_EntityCPhysicsCannisterClass.m_classInputs.m_Size = 0;
    CPhysicsCannister::GetEntityClassInternal(void)::g_EntityCPhysicsCannisterClass.m_classInputs.m_Memory.m_pMemory = 0;
    CPhysicsCannister::GetEntityClassInternal(void)::g_EntityCPhysicsCannisterClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CPhysicsCannister::GetEntityClassInternal(void)::g_EntityCPhysicsCannisterClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CPhysicsCannister::GetEntityClassInternal(void)::g_EntityCPhysicsCannisterClass.m_classOutputs.m_Size = 0;
    CPhysicsCannister::GetEntityClassInternal(void)::g_EntityCPhysicsCannisterClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CPhysicsCannister::GetEntityClassInternal(void)::g_EntityCPhysicsCannisterClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CPhysicsCannister::GetEntityClassInternal(void)::g_EntityCPhysicsCannisterClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CPhysicsCannister::GetEntityClassInternal(void)::g_EntityCPhysicsCannisterClass.m_requiredEHandle.m_Index = -1;
    CPhysicsCannister::GetEntityClassInternal(void)::g_EntityCPhysicsCannisterClass.m_hNetworkSerializer = 0;
    CPhysicsCannister::GetEntityClassInternal(void)::g_EntityCPhysicsCannisterClass.m_pBaseClassInfo = 0;
    CPhysicsCannister::GetEntityClassInternal(void)::g_EntityCPhysicsCannisterClass.m_pClassInfo = 0;
    CPhysicsCannister::GetEntityClassInternal(void)::g_EntityCPhysicsCannisterClass.m_flags = 0;
    CPhysicsCannister::GetEntityClassInternal(void)::g_EntityCPhysicsCannisterClass.m_nAllHelpersFlags = 0;
    CPhysicsCannister::GetEntityClassInternal(void)::g_EntityCPhysicsCannisterClass.m_pScriptClassDesc = 0;
    CPhysicsCannister::GetEntityClassInternal(void)::g_EntityCPhysicsCannisterClass.m_pInputs = 0;
    CPhysicsCannister::GetEntityClassInternal(void)::g_EntityCPhysicsCannisterClass.m_nInputCount = 0;
    CPhysicsCannister::GetEntityClassInternal(void)::g_EntityCPhysicsCannisterClass.m_pOutputs = 0;
    CPhysicsCannister::GetEntityClassInternal(void)::g_EntityCPhysicsCannisterClass.m_nOutputCount = 0;
    CPhysicsCannister::GetEntityClassInternal(void)::g_EntityCPhysicsCannisterClass.m_pGameClass = 0;
    CPhysicsCannister::GetEntityClassInternal(void)::g_EntityCPhysicsCannisterClass._vptr_CEntityClass = off_3FDEC30;
    __cxa_guard_release(&`guard variable for'CPhysicsCannister::GetEntityClassInternal(void)::g_EntityCPhysicsCannisterClass);
    __cxa_atexit(
      CPhysicsCannister::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CPhysicsCannister::GetEntityClassInternal(void)::g_EntityCPhysicsCannisterClass,
      &_dso_handle);
  }
  if ( g_pEntityCPhysicsCannisterClass != 0 )
    return &CPhysicsCannister::GetEntityClassInternal(void)::g_EntityCPhysicsCannisterClass;
  if ( `guard variable for'CPhysicsCannister::GetEntityClassInfo(void)::g_EntityCPhysicsCannisterClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CPhysicsCannister::GetEntityClassInfo(void)::g_EntityCPhysicsCannisterClassInfo) != 0 )
  {
    EntityClassInfo = CBaseCombatCharacter::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CPhysicsCannister::GetEntityClassInfo(void)::g_EntityCPhysicsCannisterClassInfo,
      "CPhysicsCannister",
      "physics_cannister",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CPhysicsCannister::GetEntityClassInfo(void)::g_EntityCPhysicsCannisterClassInfo);
  }
  CPhysicsCannister::GetEntityClassInternal(void)::g_EntityCPhysicsCannisterClass.m_pClassInfo = &CPhysicsCannister::GetEntityClassInfo(void)::g_EntityCPhysicsCannisterClassInfo;
  CPhysicsCannister::GetEntityClassInternal(void)::g_EntityCPhysicsCannisterClass.m_pBaseClassInfo = CPhysicsCannister::GetEntityClassInfo(void)::g_EntityCPhysicsCannisterClassInfo.m_pBaseClassInfo;
  g_pEntityCPhysicsCannisterClass = &CPhysicsCannister::GetEntityClassInternal(void)::g_EntityCPhysicsCannisterClass;
  CPhysicsCannister::GetEntityClassInfo(void)::g_EntityCPhysicsCannisterClassInfo.m_pClass = &CPhysicsCannister::GetEntityClassInternal(void)::g_EntityCPhysicsCannisterClass;
  CPhysicsCannister::GetEntityClassInternal(void)::g_EntityCPhysicsCannisterClass.m_pScriptClassDesc = CBaseCombatCharacter::InitScriptDesc();
  g_pEntityCPhysicsCannisterClass->m_pComponentOverrides = 0;
  return &CPhysicsCannister::GetEntityClassInternal(void)::g_EntityCPhysicsCannisterClass;
}


// CPhysicsCannister::GetEntityClass  (line 47, @0x0000000002303ea0, libserver.so)
CEntityClass *__cdecl CPhysicsCannister::GetEntityClass()
{
  return g_pEntityCPhysicsCannisterClass;
}


// CPhysicsCannister::Schema_DynamicBinding  (line 47, @0x00000000023073c0, libserver.so)
// calls: CPhysicsCannister::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CPhysicsCannister::Schema_DynamicBinding(const CPhysicsCannister *const this)
{
  CPhysicsCannister::Schema_VerifyBindingIsRegistered();
  return CPhysicsCannister::s_pSchemaBinding;
}


// CPhysicsCannister::PreferredCarryAngles  (line 59, @0x0000000002303eb0, libserver.so)
QAngle __fastcall CPhysicsCannister::PreferredCarryAngles(CPhysicsCannister *const this)
{
  __int64 v3; // [rsp+0h] [rbp-8h]
  QAngle result; // 0:xmm0_8.8,8:xmm1_4.4

  result.z = 0.0;
  *(&v3 - 4) = -1028390912;
  *(&v3 - 3) = 0;
  *&result.x = *(&v3 - 2);
  return result;
}


// CPhysicsCannister::HasPreferredCarryAnglesForPlayer  (line 60, @0x0000000002303ee0, libserver.so)
bool __fastcall CPhysicsCannister::HasPreferredCarryAnglesForPlayer(
        CPhysicsCannister *const this,
        CBasePlayer *pPlayer)
{
  return 1;
}


// CPhysicsCannister::ObjectCaps  (line 72, @0x0000000002306460, libserver.so)
// calls: CBaseEntity::ObjectCaps
int __fastcall CPhysicsCannister::ObjectCaps(CPhysicsCannister *const this)
{
  return CBaseEntity::ObjectCaps(this) | 1;
}


// CPhysicsCannister::Use  (line 76, @0x0000000002308a40, libserver.so)  // inlines: ToBasePlayer
void __fastcall CPhysicsCannister::Use(
        CPhysicsCannister *const this,
        CBaseEntity *pActivator,
        CBaseEntity *pCaller,
        USE_TYPE useType,
        float value)
{
  if ( pActivator != 0 && (*(pActivator->_vptr_IHandleEntity + 140))(pActivator, value) != 0 )
    (*(pActivator->_vptr_IHandleEntity + 479))(pActivator, this, 1, 0);
}


// CPhysicsCannister::IsAlive  (line 93, @0x0000000002303f00, libserver.so)
bool __fastcall CPhysicsCannister::IsAlive(CPhysicsCannister *const this)
{
  return 0;
}


// CPhysicsCannister::OnAttemptPhysGunPickup  (line 101, @0x0000000002303f10, libserver.so)
bool __fastcall CPhysicsCannister::OnAttemptPhysGunPickup(
        CPhysicsCannister *const this,
        CBasePlayer *pPhysGunUser,
        PhysGunPickup_t reason)
{
  return 1;
}


// CPhysicsCannister::ShouldPuntUseLaunchForces  (line 105, @0x0000000002303f30, libserver.so)
bool __fastcall CPhysicsCannister::ShouldPuntUseLaunchForces(CPhysicsCannister *const this, PhysGunForce_t reason)
{
  bool result; // al

  result = 0;
  if ( reason == PhysGunForce_t::PHYSGUN_FORCE_LAUNCHED )
    return this->m_thrustTime != 0.0;
  return result;
}


// CPhysicsCannister::PhysGunLaunchAngularImpulse  (line 112, @0x0000000002303f70, libserver.so)
AngularImpulse __fastcall CPhysicsCannister::PhysGunLaunchAngularImpulse(CPhysicsCannister *const this)
{
  AngularImpulse result; // 0:xmm0_8.8,8:xmm1_4.4

  *&result.x = *&vec3_origin.x;
  result.z = vec3_origin.z;
  return result;
}


// CPhysicsCannister::PhysGunLaunchVelocity  (line 113, @0x0000000002303fa0, libserver.so)
__int64 __fastcall CPhysicsCannister::PhysGunLaunchVelocity(
        CPhysicsCannister *const this,
        const Vector *const forward,
        double a3,
        float flMass)
{
  return LODWORD(vec3_origin.z);
}


