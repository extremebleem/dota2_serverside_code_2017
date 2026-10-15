
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CSchemaStrongHandleInspectionManipulator<InfoForResourceTypeCModel>::Inspect  (line 219, @0x0000000001ea23b0, libserver.so)  // inlines: CResourceNameGetter, GetBinding, ResourceGetName, ResourceGetName<512ul>, String, V_strncpy<int>
// calls: _V_strncpy, __stack_chk_fail
// strings: "CStrongHandle"
void __fastcall CSchemaStrongHandleInspectionManipulator<InfoForResourceTypeCModel>::Inspect(
        CSchemaStrongHandleInspectionManipulator<InfoForResourceTypeCModel> *const this,
        const void *pMember,
        ISchemaSerializationTarget *pTarget)
{
  __int64 v5; // rcx
  __int64 v6; // r8
  const char **v7; // rax
  void (__fastcall *v8)(ISchemaSerializationTarget *, _BYTE *, _QWORD); // r13
  const char *v9; // rsi
  _BYTE v10[520]; // [rsp+0h] [rbp-230h] BYREF
  unsigned __int64 v11; // [rsp+208h] [rbp-28h]

  v11 = __readfsqword(0x28u);
  (*(*pTarget + 72LL))(pTarget, "CStrongHandle", 0);
  if ( *pMember != 0 )
  {
    v7 = *(*pMember + 8LL);
    v8 = *(*pTarget + 152LL);
    if ( v7 != 0 )
    {
      v9 = "";
      if ( *v7 != 0 )
        v9 = *v7;
      _V_strncpy(v10, v9, 512, v5, v6);
    }
    else
    {
      _V_strncpy(v10, "", 512, v5, v6);
    }
    v8(pTarget, v10, 0);
  }
  else
  {
    (*(*pTarget + 96LL))(pTarget);
  }
  (*(*pTarget + 80LL))(pTarget);
}


// CSchemaStrongHandleInspectionManipulator<InfoForResourceTypeIMaterial2>::Inspect  (line 219, @0x0000000001ea7830, libserver.so)  // inlines: CResourceNameGetter, GetBinding, ResourceGetName, ResourceGetName<512ul>, String, V_strncpy<int>
// calls: _V_strncpy, __stack_chk_fail
// strings: "CStrongHandle"
void __fastcall CSchemaStrongHandleInspectionManipulator<InfoForResourceTypeIMaterial2>::Inspect(
        CSchemaStrongHandleInspectionManipulator<InfoForResourceTypeIMaterial2> *const this,
        const void *pMember,
        ISchemaSerializationTarget *pTarget)
{
  __int64 v5; // rcx
  __int64 v6; // r8
  const char **v7; // rax
  void (__fastcall *v8)(ISchemaSerializationTarget *, _BYTE *, _QWORD); // r13
  const char *v9; // rsi
  _BYTE v10[520]; // [rsp+0h] [rbp-230h] BYREF
  unsigned __int64 v11; // [rsp+208h] [rbp-28h]

  v11 = __readfsqword(0x28u);
  (*(*pTarget + 72LL))(pTarget, "CStrongHandle", 0);
  if ( *pMember != 0 )
  {
    v7 = *(*pMember + 8LL);
    v8 = *(*pTarget + 152LL);
    if ( v7 != 0 )
    {
      v9 = "";
      if ( *v7 != 0 )
        v9 = *v7;
      _V_strncpy(v10, v9, 512, v5, v6);
    }
    else
    {
      _V_strncpy(v10, "", 512, v5, v6);
    }
    v8(pTarget, v10, 0);
  }
  else
  {
    (*(*pTarget + 96LL))(pTarget);
  }
  (*(*pTarget + 80LL))(pTarget);
}


// CSchemaStrongHandleInspectionManipulator<InfoForResourceTypeCTextureBase>::Inspect  (line 219, @0x0000000001eed650, libserver.so)  // inlines: CResourceNameGetter, GetBinding, ResourceGetName, ResourceGetName<512ul>, String, V_strncpy<int>
// calls: _V_strncpy, __stack_chk_fail
// strings: "CStrongHandle"
void __fastcall CSchemaStrongHandleInspectionManipulator<InfoForResourceTypeCTextureBase>::Inspect(
        CSchemaStrongHandleInspectionManipulator<InfoForResourceTypeCTextureBase> *const this,
        const void *pMember,
        ISchemaSerializationTarget *pTarget)
{
  __int64 v5; // rcx
  __int64 v6; // r8
  const char **v7; // rax
  void (__fastcall *v8)(ISchemaSerializationTarget *, _BYTE *, _QWORD); // r13
  const char *v9; // rsi
  _BYTE v10[520]; // [rsp+0h] [rbp-230h] BYREF
  unsigned __int64 v11; // [rsp+208h] [rbp-28h]

  v11 = __readfsqword(0x28u);
  (*(*pTarget + 72LL))(pTarget, "CStrongHandle", 0);
  if ( *pMember != 0 )
  {
    v7 = *(*pMember + 8LL);
    v8 = *(*pTarget + 152LL);
    if ( v7 != 0 )
    {
      v9 = "";
      if ( *v7 != 0 )
        v9 = *v7;
      _V_strncpy(v10, v9, 512, v5, v6);
    }
    else
    {
      _V_strncpy(v10, "", 512, v5, v6);
    }
    v8(pTarget, v10, 0);
  }
  else
  {
    (*(*pTarget + 96LL))(pTarget);
  }
  (*(*pTarget + 80LL))(pTarget);
}


// CSchemaStrongHandleInspectionManipulator<InfoForResourceTypeIParticleSystemDefinition>::Inspect  (line 219, @0x0000000001fec670, libserver.so)  // inlines: CResourceNameGetter, GetBinding, ResourceGetName, ResourceGetName<512ul>, String, V_strncpy<int>
// calls: _V_strncpy, __stack_chk_fail
// strings: "CStrongHandle"
void __fastcall CSchemaStrongHandleInspectionManipulator<InfoForResourceTypeIParticleSystemDefinition>::Inspect(
        CSchemaStrongHandleInspectionManipulator<InfoForResourceTypeIParticleSystemDefinition> *const this,
        const void *pMember,
        ISchemaSerializationTarget *pTarget)
{
  const char **v5; // rax
  void (__fastcall *v6)(ISchemaSerializationTarget *, _BYTE *, _QWORD); // r13
  const char *v7; // rsi
  _BYTE v8[520]; // [rsp+0h] [rbp-230h] BYREF
  unsigned __int64 v9; // [rsp+208h] [rbp-28h]

  v9 = __readfsqword(0x28u);
  (*(*pTarget + 72LL))(pTarget, "CStrongHandle", 0);
  if ( *pMember != 0 )
  {
    v5 = *(*pMember + 8LL);
    v6 = *(*pTarget + 152LL);
    if ( v5 != 0 )
    {
      v7 = "";
      if ( *v5 != 0 )
        v7 = *v5;
      _V_strncpy(v8, v7, 512);
    }
    else
    {
      _V_strncpy(v8, "", 512);
    }
    v6(pTarget, v8, 0);
  }
  else
  {
    (*(*pTarget + 96LL))(pTarget);
  }
  (*(*pTarget + 80LL))(pTarget);
}


// CSchemaStrongHandleInspectionManipulator<InfoForResourceTypeCPostProcessingResource>::Inspect  (line 219, @0x00000000023e9b30, libserver.so)  // inlines: CResourceNameGetter, GetBinding, ResourceGetName, ResourceGetName<512ul>, String, V_strncpy<int>
// calls: _V_strncpy, __stack_chk_fail
// strings: "CStrongHandle"
void __fastcall CSchemaStrongHandleInspectionManipulator<InfoForResourceTypeCPostProcessingResource>::Inspect(
        CSchemaStrongHandleInspectionManipulator<InfoForResourceTypeCPostProcessingResource> *const this,
        const void *pMember,
        ISchemaSerializationTarget *pTarget)
{
  const char **v5; // rax
  void (__fastcall *v6)(ISchemaSerializationTarget *, _BYTE *, _QWORD); // r13
  const char *v7; // rsi
  _BYTE v8[520]; // [rsp+0h] [rbp-230h] BYREF
  unsigned __int64 v9; // [rsp+208h] [rbp-28h]

  v9 = __readfsqword(0x28u);
  (*(*pTarget + 72LL))(pTarget, "CStrongHandle", 0);
  if ( *pMember != 0 )
  {
    v5 = *(*pMember + 8LL);
    v6 = *(*pTarget + 152LL);
    if ( v5 != 0 )
    {
      v7 = "";
      if ( *v5 != 0 )
        v7 = *v5;
      _V_strncpy(v8, v7, 512);
    }
    else
    {
      _V_strncpy(v8, "", 512);
    }
    v6(pTarget, v8, 0);
  }
  else
  {
    (*(*pTarget + 96LL))(pTarget);
  }
  (*(*pTarget + 80LL))(pTarget);
}


// CSchemaManipulator<CStrongHandle<InfoForResourceTypeCModel> >::SearchForInterface  (line 244, @0x0000000001ea1700, libserver.so)
void *__fastcall CSchemaManipulator<CStrongHandle<InfoForResourceTypeCModel>>::SearchForInterface(
        CSchemaManipulator<CStrongHandle<InfoForResourceTypeCModel> > *const this,
        SchemaManipulatorInterfaceType_t nType)
{
  CSchemaStrongHandleInspectionManipulator<InfoForResourceTypeCModel> *p_m_Inspection; // rdi
  void *result; // rax

  p_m_Inspection = &this->m_Inspection;
  result = 0;
  if ( nType == SchemaManipulatorInterfaceType_t::SCHEMA_MANIPULATOR_TYPE_INSPECTION )
    return p_m_Inspection;
  return result;
}


// CSchemaManipulator<CStrongHandle<InfoForResourceTypeIMaterial2> >::SearchForInterface  (line 244, @0x0000000001ea7650, libserver.so)
void *__fastcall CSchemaManipulator<CStrongHandle<InfoForResourceTypeIMaterial2>>::SearchForInterface(
        CSchemaManipulator<CStrongHandle<InfoForResourceTypeIMaterial2> > *const this,
        SchemaManipulatorInterfaceType_t nType)
{
  CSchemaStrongHandleInspectionManipulator<InfoForResourceTypeIMaterial2> *p_m_Inspection; // rdi
  void *result; // rax

  p_m_Inspection = &this->m_Inspection;
  result = 0;
  if ( nType == SchemaManipulatorInterfaceType_t::SCHEMA_MANIPULATOR_TYPE_INSPECTION )
    return p_m_Inspection;
  return result;
}


// CSchemaManipulator<CStrongHandle<InfoForResourceTypeCTextureBase> >::SearchForInterface  (line 244, @0x0000000001eeb1a0, libserver.so)
void *__fastcall CSchemaManipulator<CStrongHandle<InfoForResourceTypeCTextureBase>>::SearchForInterface(
        CSchemaManipulator<CStrongHandle<InfoForResourceTypeCTextureBase> > *const this,
        SchemaManipulatorInterfaceType_t nType)
{
  CSchemaStrongHandleInspectionManipulator<InfoForResourceTypeCTextureBase> *p_m_Inspection; // rdi
  void *result; // rax

  p_m_Inspection = &this->m_Inspection;
  result = 0;
  if ( nType == SchemaManipulatorInterfaceType_t::SCHEMA_MANIPULATOR_TYPE_INSPECTION )
    return p_m_Inspection;
  return result;
}


// CSchemaManipulator<CStrongHandle<InfoForResourceTypeIParticleSystemDefinition> >::SearchForInterface  (line 244, @0x0000000001feae30, libserver.so)
void *__fastcall CSchemaManipulator<CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>>::SearchForInterface(
        CSchemaManipulator<CStrongHandle<InfoForResourceTypeIParticleSystemDefinition> > *const this,
        SchemaManipulatorInterfaceType_t nType)
{
  CSchemaStrongHandleInspectionManipulator<InfoForResourceTypeIParticleSystemDefinition> *p_m_Inspection; // rdi
  void *result; // rax

  p_m_Inspection = &this->m_Inspection;
  result = 0;
  if ( nType == SchemaManipulatorInterfaceType_t::SCHEMA_MANIPULATOR_TYPE_INSPECTION )
    return p_m_Inspection;
  return result;
}


// CSchemaManipulator<CStrongHandle<InfoForResourceTypeCPostProcessingResource> >::SearchForInterface  (line 244, @0x00000000023e6cd0, libserver.so)
void *__fastcall CSchemaManipulator<CStrongHandle<InfoForResourceTypeCPostProcessingResource>>::SearchForInterface(
        CSchemaManipulator<CStrongHandle<InfoForResourceTypeCPostProcessingResource> > *const this,
        SchemaManipulatorInterfaceType_t nType)
{
  CSchemaStrongHandleInspectionManipulator<InfoForResourceTypeCPostProcessingResource> *p_m_Inspection; // rdi
  void *result; // rax

  p_m_Inspection = &this->m_Inspection;
  result = 0;
  if ( nType == SchemaManipulatorInterfaceType_t::SCHEMA_MANIPULATOR_TYPE_INSPECTION )
    return p_m_Inspection;
  return result;
}


// CStrongHandle<InfoForResourceTypeCTextureBase>::~CStrongHandle  (line 469, @0x0000000001ef2c40, libserver.so)
// calls: CStrongHandle<InfoForResourceTypeCTextureBase>::Shutdown
void __fastcall CStrongHandle<InfoForResourceTypeCTextureBase>::~CStrongHandle(
        CStrongHandle<InfoForResourceTypeCTextureBase> *const this)
{
  CStrongHandle<InfoForResourceTypeCTextureBase>::Shutdown(this);
}


// CStrongHandle<InfoForResourceTypeIMaterial2>::~CStrongHandle  (line 469, @0x0000000001f8a560, libserver.so)
// calls: CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown
void __fastcall CStrongHandle<InfoForResourceTypeIMaterial2>::~CStrongHandle(
        CStrongHandle<InfoForResourceTypeIMaterial2> *const this)
{
  CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown(this);
}


// CStrongHandle<InfoForResourceTypeCModel>::Init  (line 479, @0x0000000002180df0, libserver.so)  // inlines: FindResourceById<1818520950ull>, ThreadInterlockedIncrement, operator++
// calls: CStrongHandle<InfoForResourceTypeCModel>::Shutdown
// callers: CBaseCombatWeapon::SetupWeaponFileInfo
void __fastcall CStrongHandle<InfoForResourceTypeCModel>::Init(
        CStrongHandle<InfoForResourceTypeCModel> *const this,
        ResourceId_t nResourceId)
{
  const ResourceBindingBase_t *m_pBinding; // rax
  uint64 m_Data; // [rsp+8h] [rbp-18h]

  if ( this->m_pBinding != 0 )
  {
    m_Data = nResourceId.m_Data;
    CStrongHandle<InfoForResourceTypeCModel>::Shutdown(this);
    nResourceId.m_Data = m_Data;
  }
  m_pBinding = (*(*g_pResourceHandleUtils + 8LL))(g_pResourceHandleUtils, nResourceId.m_Data, 1818520950);
  this->m_pBinding = m_pBinding;
  if ( m_pBinding != 0 )
  {
    if ( (m_pBinding->m_nFlags & 0x20) != 0 )
    {
      (*(*g_pResourceHandleUtils + 24LL))(g_pResourceHandleUtils, m_pBinding, 2, this);
      m_pBinding = this->m_pBinding;
    }
    _InterlockedAdd(&m_pBinding->m_nRefCount.m_value, 1u);
  }
}


// CStrongHandle<InfoForResourceTypeCModel>::Init  (line 536, @0x0000000001ea4560, libserver.so)  // inlines: ThreadInterlockedIncrement, operator++
// calls: CStrongHandle<InfoForResourceTypeCModel>::Shutdown
// callers: CDevtestHierarchy::StartupTestModeThinkFunction, CDevtestHierarchy::SwitchChildModelThink, CModelState::CopyStateTo, CSkeletonInstance::SetModel, CSkeletonInstance::OnClothReloaded, CSkeletonInstance::PostDataUpdate, CBaseCombatWeapon::SetupWeaponFileInfo, CGibShooter::Spawn, CEnvShooter::Spawn, CShatterGlassShard::CShatterGlassShard, CFuncAreaPortalWindow::Activate, CShatterGlassShard::GenerateProceduralShatterGlassShardModel (14 total)
void __fastcall CStrongHandle<InfoForResourceTypeCModel>::Init(
        CStrongHandle<InfoForResourceTypeCModel> *const this,
        CStrongHandle<InfoForResourceTypeCModel>::ResourceHandleTyped_t hResource)
{
  CStrongHandle<InfoForResourceTypeCModel>::ResourceHandleTyped_t m_pBinding; // rsi

  if ( this->m_pBinding != 0 )
    CStrongHandle<InfoForResourceTypeCModel>::Shutdown(this);
  this->m_pBinding = hResource;
  if ( hResource != 0 )
  {
    m_pBinding = hResource;
    if ( (hResource->m_nFlags & 0x20) != 0 )
    {
      (*(*g_pResourceHandleUtils + 24LL))(g_pResourceHandleUtils, hResource, 2, this);
      m_pBinding = this->m_pBinding;
    }
    _InterlockedAdd(&m_pBinding->m_nRefCount.m_value, 1u);
  }
}


// CStrongHandle<InfoForResourceTypeCTextureBase>::Init  (line 536, @0x0000000001ef4610, libserver.so)  // inlines: ThreadInterlockedIncrement, operator++
// calls: CStrongHandle<InfoForResourceTypeCTextureBase>::Shutdown
// callers: CBaseLightProbeVolume::UpdateStateFromKeyValues, CBaseCubemap::UpdateStateFromKeyValues
void __fastcall CStrongHandle<InfoForResourceTypeCTextureBase>::Init(
        CStrongHandle<InfoForResourceTypeCTextureBase> *const this,
        CStrongHandle<InfoForResourceTypeCTextureBase>::ResourceHandleTyped_t hResource)
{
  CStrongHandle<InfoForResourceTypeCTextureBase>::ResourceHandleTyped_t m_pBinding; // rsi

  if ( this->m_pBinding != 0 )
    CStrongHandle<InfoForResourceTypeCTextureBase>::Shutdown(this);
  this->m_pBinding = hResource;
  if ( hResource != 0 )
  {
    m_pBinding = hResource;
    if ( (hResource->m_nFlags & 0x20) != 0 )
    {
      (*(*g_pResourceHandleUtils + 24LL))(g_pResourceHandleUtils, hResource, 2, this);
      m_pBinding = this->m_pBinding;
    }
    _InterlockedAdd(&m_pBinding->m_nRefCount.m_value, 1u);
  }
}


// CStrongHandle<InfoForResourceTypeIMaterial2>::Init  (line 536, @0x0000000001ef4670, libserver.so)  // inlines: ThreadInterlockedIncrement, operator++
// calls: CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown
// callers: CEnvSky::UpdateSceneObjects, CEnvSky::SetSkyParams, CPhysicsGameSystem::GameActivate, CEnvBeam::Spawn, CEnvLaser::Spawn, CEnvBeam::BeamUpdateVars, CFuncShatterglass::CFuncShatterglass, CShatterGlassShard::GenerateProceduralShatterGlassShardModel, CPointSpotlight::Spawn, CPointSpotlight::SpotlightCreate, CSprite::SetMaterialByIndex, CSprite::Spawn (17 total)
void __fastcall CStrongHandle<InfoForResourceTypeIMaterial2>::Init(
        CStrongHandle<InfoForResourceTypeIMaterial2> *const this,
        CStrongHandle<InfoForResourceTypeIMaterial2>::ResourceHandleTyped_t hResource)
{
  CStrongHandle<InfoForResourceTypeIMaterial2>::ResourceHandleTyped_t m_pBinding; // rsi

  if ( this->m_pBinding != 0 )
    CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown(this);
  this->m_pBinding = hResource;
  if ( hResource != 0 )
  {
    m_pBinding = hResource;
    if ( (hResource->m_nFlags & 0x20) != 0 )
    {
      (*(*g_pResourceHandleUtils + 24LL))(g_pResourceHandleUtils, hResource, 2, this);
      m_pBinding = this->m_pBinding;
    }
    _InterlockedAdd(&m_pBinding->m_nRefCount.m_value, 1u);
  }
}


// CStrongHandle<InfoForResourceTypeCPhysAggregateData>::Init  (line 536, @0x0000000001f96c90, libserver.so)  // inlines: ThreadInterlockedIncrement, operator++
// calls: CStrongHandle<InfoForResourceTypeCPhysAggregateData>::Shutdown
// callers: CUtlRBTree<CUtlMap<unsigned int, CPhysicsGameSystem::PhysicsSpawnGroups_t>::Node_t, short unsigned int, CUtlMap<unsigned int, CPhysicsGameSystem::PhysicsSpawnGroups_t>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, CPhysicsGameSystem::PhysicsSpawnGroups_t>::Node_t, short unsigned int>, short unsigned int> >::NewNode, CPhysicsGameSystem::LoadSpawnGroupPhysics, CPhysicsGameSystem::UnloadSpawnGroupPhysics, CModelBuilder::AddPhysicsRep_Internal, CModelBuilder::AddPhysicsBody, CModelBuilder::InitFromPermData
void __fastcall CStrongHandle<InfoForResourceTypeCPhysAggregateData>::Init(
        CStrongHandle<InfoForResourceTypeCPhysAggregateData> *const this,
        CStrongHandle<InfoForResourceTypeCPhysAggregateData>::ResourceHandleTyped_t hResource)
{
  CStrongHandle<InfoForResourceTypeCPhysAggregateData>::ResourceHandleTyped_t m_pBinding; // rsi

  if ( this->m_pBinding != 0 )
    CStrongHandle<InfoForResourceTypeCPhysAggregateData>::Shutdown(this);
  this->m_pBinding = hResource;
  if ( hResource != 0 )
  {
    m_pBinding = hResource;
    if ( (hResource->m_nFlags & 0x20) != 0 )
    {
      (*(*g_pResourceHandleUtils + 24LL))(g_pResourceHandleUtils, hResource, 2, this);
      m_pBinding = this->m_pBinding;
    }
    _InterlockedAdd(&m_pBinding->m_nRefCount.m_value, 1u);
  }
}


// CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>::Init  (line 536, @0x000000000298b620, libserver.so)  // inlines: ThreadInterlockedIncrement, operator++
// calls: CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>::Shutdown
// callers: CDOTA_BaseNPC_Building::OverrideDestructionEffect, CDOTA_BaseNPC_Building::Spawn
void __fastcall CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>::Init(
        CStrongHandle<InfoForResourceTypeIParticleSystemDefinition> *const this,
        CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>::ResourceHandleTyped_t hResource)
{
  CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>::ResourceHandleTyped_t m_pBinding; // rsi

  if ( this->m_pBinding != 0 )
    CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>::Shutdown(this);
  this->m_pBinding = hResource;
  if ( hResource != 0 )
  {
    m_pBinding = hResource;
    if ( (hResource->m_nFlags & 0x20) != 0 )
    {
      (*(*g_pResourceHandleUtils + 24LL))(g_pResourceHandleUtils, hResource, 2, this);
      m_pBinding = this->m_pBinding;
    }
    _InterlockedAdd(&m_pBinding->m_nRefCount.m_value, 1u);
  }
}


// CStrongHandle<InfoForResourceTypeCRenderMesh>::Init  (line 536, @0x0000000003152fd0, libserver.so)  // inlines: ThreadInterlockedIncrement, operator++
// calls: CStrongHandle<InfoForResourceTypeCRenderMesh>::Shutdown
// callers: CModelBuilder::AddMesh, CModelBuilder::InitFromPermData, CModelBuilder::InitFromModel
void __fastcall CStrongHandle<InfoForResourceTypeCRenderMesh>::Init(
        CStrongHandle<InfoForResourceTypeCRenderMesh> *const this,
        CStrongHandle<InfoForResourceTypeCRenderMesh>::ResourceHandleTyped_t hResource)
{
  CStrongHandle<InfoForResourceTypeCRenderMesh>::ResourceHandleTyped_t m_pBinding; // rsi

  if ( this->m_pBinding != 0 )
    CStrongHandle<InfoForResourceTypeCRenderMesh>::Shutdown(this);
  this->m_pBinding = hResource;
  if ( hResource != 0 )
  {
    m_pBinding = hResource;
    if ( (hResource->m_nFlags & 0x20) != 0 )
    {
      (*(*g_pResourceHandleUtils + 24LL))(g_pResourceHandleUtils, hResource, 2, this);
      m_pBinding = this->m_pBinding;
    }
    _InterlockedAdd(&m_pBinding->m_nRefCount.m_value, 1u);
  }
}


// CStrongHandle<InfoForResourceTypeAnimationGroupResourceData_t>::Init  (line 536, @0x00000000031532f0, libserver.so)  // inlines: ThreadInterlockedIncrement, operator++
// calls: CStrongHandle<InfoForResourceTypeAnimationGroupResourceData_t>::Shutdown
// callers: CModelBuilder::AddAnimationGroupRef, CModelBuilder::InitFromPermData
void __fastcall CStrongHandle<InfoForResourceTypeAnimationGroupResourceData_t>::Init(
        CStrongHandle<InfoForResourceTypeAnimationGroupResourceData_t> *const this,
        CStrongHandle<InfoForResourceTypeAnimationGroupResourceData_t>::ResourceHandleTyped_t hResource)
{
  CStrongHandle<InfoForResourceTypeAnimationGroupResourceData_t>::ResourceHandleTyped_t m_pBinding; // rsi

  if ( this->m_pBinding != 0 )
    CStrongHandle<InfoForResourceTypeAnimationGroupResourceData_t>::Shutdown(this);
  this->m_pBinding = hResource;
  if ( hResource != 0 )
  {
    m_pBinding = hResource;
    if ( (hResource->m_nFlags & 0x20) != 0 )
    {
      (*(*g_pResourceHandleUtils + 24LL))(g_pResourceHandleUtils, hResource, 2, this);
      m_pBinding = this->m_pBinding;
    }
    _InterlockedAdd(&m_pBinding->m_nRefCount.m_value, 1u);
  }
}


// CStrongHandle<InfoForResourceTypeCModel>::Init  (line 570, @0x0000000001ea45c0, libserver.so)  // inlines: ThreadInterlockedIncrement, operator++
// calls: CStrongHandle<InfoForResourceTypeCModel>::Shutdown
// callers: CAtomicManipulator<CStrongHandle<InfoForResourceTypeCModel> >::AllocateAndCopy, CAtomicManipulator<CStrongHandle<InfoForResourceTypeCModel> >::Copy, CBaseCombatWeapon::SetupWeaponFileInfo, CFuncAreaPortalWindow::Activate
void __fastcall CStrongHandle<InfoForResourceTypeCModel>::Init(
        CStrongHandle<InfoForResourceTypeCModel> *const this,
        const CStrongHandle<InfoForResourceTypeCModel> *const src)
{
  const ResourceBindingBase_t *m_pBinding; // rsi
  bool v5; // zf

  if ( this->m_pBinding != 0 )
    CStrongHandle<InfoForResourceTypeCModel>::Shutdown(this);
  m_pBinding = src->m_pBinding;
  v5 = src->m_pBinding == 0;
  this->m_pBinding = src->m_pBinding;
  if ( !v5 )
  {
    if ( (m_pBinding->m_nFlags & 0x20) != 0 )
    {
      (*(*g_pResourceHandleUtils + 24LL))(g_pResourceHandleUtils, m_pBinding, 2, this);
      m_pBinding = this->m_pBinding;
    }
    _InterlockedAdd(&m_pBinding->m_nRefCount.m_value, 1u);
  }
}


// CStrongHandle<InfoForResourceTypeIMaterial2>::Init  (line 570, @0x0000000001ea8130, libserver.so)  // inlines: ThreadInterlockedIncrement, operator++
// calls: CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown
// callers: CAtomicManipulator<CStrongHandle<InfoForResourceTypeIMaterial2> >::AllocateAndCopy, CAtomicManipulator<CStrongHandle<InfoForResourceTypeIMaterial2> >::Copy, CEnvSky::SetSkyParams, CBeam::BeamInit, CEnvLaser::Spawn, CEnvBeam::BeamUpdateVars, CPointSpotlight::SpotlightCreate, CSprite::SetMaterialByIndex, CSprite::CSprite, CSprite::Spawn, CSun::Spawn, CPlasma::Spawn
void __fastcall CStrongHandle<InfoForResourceTypeIMaterial2>::Init(
        CStrongHandle<InfoForResourceTypeIMaterial2> *const this,
        const CStrongHandle<InfoForResourceTypeIMaterial2> *const src)
{
  const ResourceBindingBase_t *m_pBinding; // rsi
  bool v5; // zf

  if ( this->m_pBinding != 0 )
    CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown(this);
  m_pBinding = src->m_pBinding;
  v5 = src->m_pBinding == 0;
  this->m_pBinding = src->m_pBinding;
  if ( !v5 )
  {
    if ( (m_pBinding->m_nFlags & 0x20) != 0 )
    {
      (*(*g_pResourceHandleUtils + 24LL))(g_pResourceHandleUtils, m_pBinding, 2, this);
      m_pBinding = this->m_pBinding;
    }
    _InterlockedAdd(&m_pBinding->m_nRefCount.m_value, 1u);
  }
}


// CStrongHandle<InfoForResourceTypeCTextureBase>::Init  (line 570, @0x0000000001ef4560, libserver.so)  // inlines: ThreadInterlockedIncrement, operator++
// calls: CStrongHandle<InfoForResourceTypeCTextureBase>::Shutdown
// callers: CAtomicManipulator<CStrongHandle<InfoForResourceTypeCTextureBase> >::AllocateAndCopy, CAtomicManipulator<CStrongHandle<InfoForResourceTypeCTextureBase> >::Copy, CEnvCombinedLightProbeVolume::Activate, CEnvCubemap::Activate, CEnvLightProbeVolume::Activate
void __fastcall CStrongHandle<InfoForResourceTypeCTextureBase>::Init(
        CStrongHandle<InfoForResourceTypeCTextureBase> *const this,
        const CStrongHandle<InfoForResourceTypeCTextureBase> *const src)
{
  const ResourceBindingBase_t *m_pBinding; // rsi
  bool v5; // zf

  if ( this->m_pBinding != 0 )
    CStrongHandle<InfoForResourceTypeCTextureBase>::Shutdown(this);
  m_pBinding = src->m_pBinding;
  v5 = src->m_pBinding == 0;
  this->m_pBinding = src->m_pBinding;
  if ( !v5 )
  {
    if ( (m_pBinding->m_nFlags & 0x20) != 0 )
    {
      (*(*g_pResourceHandleUtils + 24LL))(g_pResourceHandleUtils, m_pBinding, 2, this);
      m_pBinding = this->m_pBinding;
    }
    _InterlockedAdd(&m_pBinding->m_nRefCount.m_value, 1u);
  }
}


// CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>::Init  (line 570, @0x0000000001ff64f0, libserver.so)  // inlines: ThreadInterlockedIncrement, operator++
// calls: CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>::Shutdown
// callers: CAtomicManipulator<CStrongHandle<InfoForResourceTypeIParticleSystemDefinition> >::AllocateAndCopy, CAtomicManipulator<CStrongHandle<InfoForResourceTypeIParticleSystemDefinition> >::Copy, CParticleSystem::Spawn, CParticleSystem::Activate, CDOTA_BaseNPC_Building::OverrideDestructionEffect, CDOTA_BaseNPC_Building::Spawn
void __fastcall CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>::Init(
        CStrongHandle<InfoForResourceTypeIParticleSystemDefinition> *const this,
        const CStrongHandle<InfoForResourceTypeIParticleSystemDefinition> *const src)
{
  const ResourceBindingBase_t *m_pBinding; // rsi
  bool v5; // zf

  if ( this->m_pBinding != 0 )
    CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>::Shutdown(this);
  m_pBinding = src->m_pBinding;
  v5 = src->m_pBinding == 0;
  this->m_pBinding = src->m_pBinding;
  if ( !v5 )
  {
    if ( (m_pBinding->m_nFlags & 0x20) != 0 )
    {
      (*(*g_pResourceHandleUtils + 24LL))(g_pResourceHandleUtils, m_pBinding, 2, this);
      m_pBinding = this->m_pBinding;
    }
    _InterlockedAdd(&m_pBinding->m_nRefCount.m_value, 1u);
  }
}


// CStrongHandle<InfoForResourceTypeCPostProcessingResource>::Init  (line 570, @0x00000000023f8550, libserver.so)  // inlines: ThreadInterlockedIncrement, operator++
// calls: CStrongHandle<InfoForResourceTypeCPostProcessingResource>::Shutdown
// callers: CAtomicManipulator<CStrongHandle<InfoForResourceTypeCPostProcessingResource> >::AllocateAndCopy, CAtomicManipulator<CStrongHandle<InfoForResourceTypeCPostProcessingResource> >::Copy
void __fastcall CStrongHandle<InfoForResourceTypeCPostProcessingResource>::Init(
        CStrongHandle<InfoForResourceTypeCPostProcessingResource> *const this,
        const CStrongHandle<InfoForResourceTypeCPostProcessingResource> *const src)
{
  const ResourceBindingBase_t *m_pBinding; // rsi
  bool v5; // zf

  if ( this->m_pBinding != 0 )
    CStrongHandle<InfoForResourceTypeCPostProcessingResource>::Shutdown(this);
  m_pBinding = src->m_pBinding;
  v5 = src->m_pBinding == 0;
  this->m_pBinding = src->m_pBinding;
  if ( !v5 )
  {
    if ( (m_pBinding->m_nFlags & 0x20) != 0 )
    {
      (*(*g_pResourceHandleUtils + 24LL))(g_pResourceHandleUtils, m_pBinding, 2, this);
      m_pBinding = this->m_pBinding;
    }
    _InterlockedAdd(&m_pBinding->m_nRefCount.m_value, 1u);
  }
}


// CStrongHandle<InfoForResourceTypeCModel>::Shutdown  (line 598, @0x0000000001ea4310, libserver.so)  // inlines: ThreadInterlockedDecrement, operator--, operator==
// callers: CDevtestHierarchy::~CDevtestHierarchy, CAtomicManipulator<CStrongHandle<InfoForResourceTypeCModel> >::Deallocate, CDevtestHierarchy::CDevtestHierarchy, CStrongHandle<InfoForResourceTypeCModel>::Init, CModelState::CModelState, CModelState::~CModelState, CModelState::CopyStateTo, CSkeletonInstance::SetModel, CSkeletonInstance::OnClothReloaded, CSkeletonInstance::PostDataUpdate, CBaseCombatWeapon::SetupWeaponFileInfo, CBaseCombatWeapon::CBaseCombatWeapon (29 total)
void __fastcall CStrongHandle<InfoForResourceTypeCModel>::Shutdown(
        CStrongHandle<InfoForResourceTypeCModel> *const this)
{
  const ResourceBindingBase_t *m_pBinding; // rsi

  m_pBinding = this->m_pBinding;
  if ( this->m_pBinding != 0 && g_pResourceHandleUtils != 0 )
  {
    if ( (m_pBinding->m_nFlags & 0x20) != 0 )
    {
      (*(*g_pResourceHandleUtils + 32LL))(g_pResourceHandleUtils, m_pBinding, 2, this);
      m_pBinding = this->m_pBinding;
    }
    _InterlockedSub(&m_pBinding->m_nRefCount.m_value, 1u);
    if ( g_pResourceHandleUtils != 0 && this->m_pBinding->m_nRefCount.m_value == 0 )
      (*(*g_pResourceHandleUtils + 16LL))(g_pResourceHandleUtils);
    this->m_pBinding = 0;
  }
}


// CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown  (line 598, @0x0000000001ea8070, libserver.so)  // inlines: ThreadInterlockedDecrement, operator--, operator==
// callers: CAtomicManipulator<CStrongHandle<InfoForResourceTypeIMaterial2> >::Deallocate, CStrongHandle<InfoForResourceTypeIMaterial2>::Init, CEnvSky::~CEnvSky, CEnvSky::CEnvSky, CEnvSky::SetSkyParams, CStrongHandle<InfoForResourceTypeIMaterial2>::~CStrongHandle, CPhysicsGameSystem::CPhysicsGameSystem, CPhysicsGameSystem::~CPhysicsGameSystem, CBeam::~CBeam, CCommentaryViewPosition::~CCommentaryViewPosition, CBeam::CBeam, CBeam::BeamInit (55 total)
void __fastcall CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown(
        CStrongHandle<InfoForResourceTypeIMaterial2> *const this)
{
  const ResourceBindingBase_t *m_pBinding; // rsi

  m_pBinding = this->m_pBinding;
  if ( this->m_pBinding != 0 && g_pResourceHandleUtils != 0 )
  {
    if ( (m_pBinding->m_nFlags & 0x20) != 0 )
    {
      (*(*g_pResourceHandleUtils + 32LL))(g_pResourceHandleUtils, m_pBinding, 2, this);
      m_pBinding = this->m_pBinding;
    }
    _InterlockedSub(&m_pBinding->m_nRefCount.m_value, 1u);
    if ( g_pResourceHandleUtils != 0 && this->m_pBinding->m_nRefCount.m_value == 0 )
      (*(*g_pResourceHandleUtils + 16LL))(g_pResourceHandleUtils);
    this->m_pBinding = 0;
  }
}


// CStrongHandle<InfoForResourceTypeCTextureBase>::Shutdown  (line 598, @0x0000000001ef2bc0, libserver.so)  // inlines: ThreadInterlockedDecrement, operator--, operator==
// callers: CStrongHandle<InfoForResourceTypeCTextureBase>::~CStrongHandle, CBaseCubemap::~CBaseCubemap, CEnvCubemap::~CEnvCubemap, CBaseLightProbeVolume::~CBaseLightProbeVolume, CEnvCombinedLightProbeVolume::CEnvCombinedLightProbeVolume, CEnvCombinedLightProbeVolume::~CEnvCombinedLightProbeVolume, CEnvLightProbeVolume::~CEnvLightProbeVolume, CAtomicManipulator<CStrongHandle<InfoForResourceTypeCTextureBase> >::Deallocate, CEnvCubemap::CEnvCubemap, CEnvLightProbeVolume::CEnvLightProbeVolume, CStrongHandle<InfoForResourceTypeCTextureBase>::Init, CMorphSetData::~CMorphSetData (16 total)
void __fastcall CStrongHandle<InfoForResourceTypeCTextureBase>::Shutdown(
        CStrongHandle<InfoForResourceTypeCTextureBase> *const this)
{
  const ResourceBindingBase_t *m_pBinding; // rsi

  m_pBinding = this->m_pBinding;
  if ( this->m_pBinding != 0 && g_pResourceHandleUtils != 0 )
  {
    if ( (m_pBinding->m_nFlags & 0x20) != 0 )
    {
      (*(*g_pResourceHandleUtils + 32LL))(g_pResourceHandleUtils, m_pBinding, 2, this);
      m_pBinding = this->m_pBinding;
    }
    _InterlockedSub(&m_pBinding->m_nRefCount.m_value, 1u);
    if ( g_pResourceHandleUtils != 0 && this->m_pBinding->m_nRefCount.m_value == 0 )
      (*(*g_pResourceHandleUtils + 16LL))(g_pResourceHandleUtils);
    this->m_pBinding = 0;
  }
}


// CStrongHandle<InfoForResourceTypeCPhysAggregateData>::Shutdown  (line 598, @0x0000000001f91950, libserver.so)  // inlines: ThreadInterlockedDecrement, operator--, operator==
// callers: CUtlRBTree<CUtlMap<unsigned int, CPhysicsGameSystem::PhysicsSpawnGroups_t>::Node_t, short unsigned int, CUtlMap<unsigned int, CPhysicsGameSystem::PhysicsSpawnGroups_t>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, CPhysicsGameSystem::PhysicsSpawnGroups_t>::Node_t, short unsigned int>, short unsigned int> >::RemoveAll, CStrongHandle<InfoForResourceTypeCPhysAggregateData>::Init, CPhysicsGameSystem::LoadSpawnGroupPhysics, CPhysicsGameSystem::PreSpawnGroupLoad, CPhysicsGameSystem::UnloadSpawnGroupPhysics, CModelBuilder::~CModelBuilder, CModel::~CModel, CModel::CModel, CModelBuilder::InitFromModel, CModelBuilder::CModelBuilder, CModel::InitFromV0Data
void __fastcall CStrongHandle<InfoForResourceTypeCPhysAggregateData>::Shutdown(
        CStrongHandle<InfoForResourceTypeCPhysAggregateData> *const this)
{
  const ResourceBindingBase_t *m_pBinding; // rsi

  m_pBinding = this->m_pBinding;
  if ( this->m_pBinding != 0 && g_pResourceHandleUtils != 0 )
  {
    if ( (m_pBinding->m_nFlags & 0x20) != 0 )
    {
      (*(*g_pResourceHandleUtils + 32LL))(g_pResourceHandleUtils, m_pBinding, 2, this);
      m_pBinding = this->m_pBinding;
    }
    _InterlockedSub(&m_pBinding->m_nRefCount.m_value, 1u);
    if ( g_pResourceHandleUtils != 0 && this->m_pBinding->m_nRefCount.m_value == 0 )
      (*(*g_pResourceHandleUtils + 16LL))(g_pResourceHandleUtils);
    this->m_pBinding = 0;
  }
}


// CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>::Shutdown  (line 598, @0x0000000001ff5d90, libserver.so)  // inlines: ThreadInterlockedDecrement, operator--, operator==
// callers: CAtomicManipulator<CStrongHandle<InfoForResourceTypeIParticleSystemDefinition> >::Deallocate, CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>::Init, CParticleSystem::~CParticleSystem, CParticleSystem::CParticleSystem, CParticleSystem::Spawn, CParticleSystem::Activate, CItemGeneric::~CItemGeneric, CDOTA_BaseNPC_Building::~CDOTA_BaseNPC_Building, CDOTA_BaseNPC_Tower::~CDOTA_BaseNPC_Tower, CDOTA_BaseNPC_Filler::~CDOTA_BaseNPC_Filler, CDOTA_BaseNPC_Effigy_BattleCup::~CDOTA_BaseNPC_Effigy_BattleCup, CDOTA_BaseNPC_Healer::~CDOTA_BaseNPC_Healer (26 total)
void __fastcall CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>::Shutdown(
        CStrongHandle<InfoForResourceTypeIParticleSystemDefinition> *const this)
{
  const ResourceBindingBase_t *m_pBinding; // rsi

  m_pBinding = this->m_pBinding;
  if ( this->m_pBinding != 0 && g_pResourceHandleUtils != 0 )
  {
    if ( (m_pBinding->m_nFlags & 0x20) != 0 )
    {
      (*(*g_pResourceHandleUtils + 32LL))(g_pResourceHandleUtils, m_pBinding, 2, this);
      m_pBinding = this->m_pBinding;
    }
    _InterlockedSub(&m_pBinding->m_nRefCount.m_value, 1u);
    if ( g_pResourceHandleUtils != 0 && this->m_pBinding->m_nRefCount.m_value == 0 )
      (*(*g_pResourceHandleUtils + 16LL))(g_pResourceHandleUtils);
    this->m_pBinding = 0;
  }
}


// CStrongHandle<ResourceBindingVoid_t>::Shutdown  (line 598, @0x00000000021133e0, libserver.so)  // inlines: ThreadInterlockedDecrement, operator--, operator==
// callers: CRestore::ReadSingleField, CEntityClass::UnserializeKey, CResourceReferenceFixupTraversal::HandleExtref
void __fastcall CStrongHandle<ResourceBindingVoid_t>::Shutdown(CStrongHandle<ResourceBindingVoid_t> *const this)
{
  const ResourceBindingBase_t *m_pBinding; // rsi

  m_pBinding = this->m_pBinding;
  if ( this->m_pBinding != 0 && g_pResourceHandleUtils != 0 )
  {
    if ( (m_pBinding->m_nFlags & 0x20) != 0 )
    {
      (*(*g_pResourceHandleUtils + 32LL))(g_pResourceHandleUtils, m_pBinding, 2, this);
      m_pBinding = this->m_pBinding;
    }
    _InterlockedSub(&m_pBinding->m_nRefCount.m_value, 1u);
    if ( g_pResourceHandleUtils != 0 && this->m_pBinding->m_nRefCount.m_value == 0 )
      (*(*g_pResourceHandleUtils + 16LL))(g_pResourceHandleUtils);
    this->m_pBinding = 0;
  }
}


// CStrongHandle<InfoForResourceTypeCRenderMesh>::Shutdown  (line 598, @0x0000000002252520, libserver.so)  // inlines: ThreadInterlockedDecrement, operator--, operator==
// callers: CModelBuilder::~CModelBuilder, CModel::~CModel, CModel::CModel, CStrongHandle<InfoForResourceTypeCRenderMesh>::Init, CUtlVectorBase<CStrongHandle<InfoForResourceTypeCRenderMesh>, CUtlMemory<CStrongHandle<InfoForResourceTypeCRenderMesh>, int> >::~CUtlVectorBase, CUtlVectorBase<CStrongHandle<InfoForResourceTypeCRenderMesh>, CUtlMemory<CStrongHandle<InfoForResourceTypeCRenderMesh>, int> >::SetCount, CModel::InitFromV0Data
void __fastcall CStrongHandle<InfoForResourceTypeCRenderMesh>::Shutdown(
        CStrongHandle<InfoForResourceTypeCRenderMesh> *const this)
{
  const ResourceBindingBase_t *m_pBinding; // rsi

  m_pBinding = this->m_pBinding;
  if ( this->m_pBinding != 0 && g_pResourceHandleUtils != 0 )
  {
    if ( (m_pBinding->m_nFlags & 0x20) != 0 )
    {
      (*(*g_pResourceHandleUtils + 32LL))(g_pResourceHandleUtils, m_pBinding, 2, this);
      m_pBinding = this->m_pBinding;
    }
    _InterlockedSub(&m_pBinding->m_nRefCount.m_value, 1u);
    if ( g_pResourceHandleUtils != 0 && this->m_pBinding->m_nRefCount.m_value == 0 )
      (*(*g_pResourceHandleUtils + 16LL))(g_pResourceHandleUtils);
    this->m_pBinding = 0;
  }
}


// CStrongHandle<InfoForResourceTypeAnimationGroupResourceData_t>::Shutdown  (line 598, @0x00000000022525a0, libserver.so)  // inlines: ThreadInterlockedDecrement, operator--, operator==
// callers: CModelBuilder::~CModelBuilder, CStrongHandle<InfoForResourceTypeAnimationGroupResourceData_t>::Init, CUtlVectorBase<CStrongHandle<InfoForResourceTypeAnimationGroupResourceData_t>, CUtlMemory<CStrongHandle<InfoForResourceTypeAnimationGroupResourceData_t>, int> >::~CUtlVectorBase
void __fastcall CStrongHandle<InfoForResourceTypeAnimationGroupResourceData_t>::Shutdown(
        CStrongHandle<InfoForResourceTypeAnimationGroupResourceData_t> *const this)
{
  const ResourceBindingBase_t *m_pBinding; // rsi

  m_pBinding = this->m_pBinding;
  if ( this->m_pBinding != 0 && g_pResourceHandleUtils != 0 )
  {
    if ( (m_pBinding->m_nFlags & 0x20) != 0 )
    {
      (*(*g_pResourceHandleUtils + 32LL))(g_pResourceHandleUtils, m_pBinding, 2, this);
      m_pBinding = this->m_pBinding;
    }
    _InterlockedSub(&m_pBinding->m_nRefCount.m_value, 1u);
    if ( g_pResourceHandleUtils != 0 && this->m_pBinding->m_nRefCount.m_value == 0 )
      (*(*g_pResourceHandleUtils + 16LL))(g_pResourceHandleUtils);
    this->m_pBinding = 0;
  }
}


// CStrongHandle<InfoForResourceTypeCPostProcessingResource>::Shutdown  (line 598, @0x00000000023f7a60, libserver.so)  // inlines: ThreadInterlockedDecrement, operator--, operator==
// callers: CAtomicManipulator<CStrongHandle<InfoForResourceTypeCPostProcessingResource> >::Deallocate, CPostProcessingVolume::~CPostProcessingVolume, CStrongHandle<InfoForResourceTypeCPostProcessingResource>::Init
void __fastcall CStrongHandle<InfoForResourceTypeCPostProcessingResource>::Shutdown(
        CStrongHandle<InfoForResourceTypeCPostProcessingResource> *const this)
{
  const ResourceBindingBase_t *m_pBinding; // rsi

  m_pBinding = this->m_pBinding;
  if ( this->m_pBinding != 0 && g_pResourceHandleUtils != 0 )
  {
    if ( (m_pBinding->m_nFlags & 0x20) != 0 )
    {
      (*(*g_pResourceHandleUtils + 32LL))(g_pResourceHandleUtils, m_pBinding, 2, this);
      m_pBinding = this->m_pBinding;
    }
    _InterlockedSub(&m_pBinding->m_nRefCount.m_value, 1u);
    if ( g_pResourceHandleUtils != 0 && this->m_pBinding->m_nRefCount.m_value == 0 )
      (*(*g_pResourceHandleUtils + 16LL))(g_pResourceHandleUtils);
    this->m_pBinding = 0;
  }
}


// CStrongHandle<InfoForResourceTypeMorphSetData_t>::Shutdown  (line 598, @0x0000000003159410, libserver.so)  // inlines: ThreadInterlockedDecrement, operator--, operator==
// callers: CRenderMesh::SetMorphSet_V0Internal, CRenderMesh::ConvertV0MorphSetToRuntime, CRenderMesh::~CRenderMesh, CRenderMesh::InitFromOldDiskData
void __fastcall CStrongHandle<InfoForResourceTypeMorphSetData_t>::Shutdown(
        CStrongHandle<InfoForResourceTypeMorphSetData_t> *const this)
{
  const ResourceBindingBase_t *m_pBinding; // rsi

  m_pBinding = this->m_pBinding;
  if ( this->m_pBinding != 0 && g_pResourceHandleUtils != 0 )
  {
    if ( (m_pBinding->m_nFlags & 0x20) != 0 )
    {
      (*(*g_pResourceHandleUtils + 32LL))(g_pResourceHandleUtils, m_pBinding, 2, this);
      m_pBinding = this->m_pBinding;
    }
    _InterlockedSub(&m_pBinding->m_nRefCount.m_value, 1u);
    if ( g_pResourceHandleUtils != 0 && this->m_pBinding->m_nRefCount.m_value == 0 )
      (*(*g_pResourceHandleUtils + 16LL))(g_pResourceHandleUtils);
    this->m_pBinding = 0;
  }
}


