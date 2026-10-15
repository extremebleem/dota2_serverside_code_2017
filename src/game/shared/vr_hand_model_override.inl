
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CVRHandModelOverride::~CVRHandModelOverride  (line 20, @0x00000000024108f0, libserver.so)  // inlines: ~CBaseAnimating, ~CBaseVRHandAttachment
// calls: CHitboxComponent::~CHitboxComponent, CBaseModelEntity::~CBaseModelEntity
void __fastcall CVRHandModelOverride::~CVRHandModelOverride(CVRHandModelOverride *const this)
{
  CHitboxComponent *p_m_CHitboxComponent; // rdi

  p_m_CHitboxComponent = &this->m_CHitboxComponent;
  *&p_m_CHitboxComponent[-72].m_nHitboxHandle = &off_3FED330;
  CHitboxComponent::~CHitboxComponent(p_m_CHitboxComponent);
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CVRHandModelOverride::~CVRHandModelOverride  (line 20, @0x0000000002411b60, libserver.so)  // inlines: ~CBaseAnimating, ~CBaseVRHandAttachment, ~CVRHandModelOverride
// calls: CHitboxComponent::~CHitboxComponent, CBaseModelEntity::~CBaseModelEntity, CBaseEntity::operator delete
void __fastcall CVRHandModelOverride::~CVRHandModelOverride(CVRHandModelOverride *const this)
{
  CHitboxComponent *p_m_CHitboxComponent; // rdi

  p_m_CHitboxComponent = &this->m_CHitboxComponent;
  *&p_m_CHitboxComponent[-72].m_nHitboxHandle = &off_3FED330;
  CHitboxComponent::~CHitboxComponent(p_m_CHitboxComponent);
  CBaseModelEntity::~CBaseModelEntity(this);
  CBaseEntity::operator delete(this);
}


// CVRHandModelOverride::Schema_DynamicBinding  (line 22, @0x00000000024104d0, libserver.so)
// globals: CVRHandModelOverride::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CVRHandModelOverride::Schema_DynamicBinding(
        const CVRHandModelOverride *const this)
{
  return CVRHandModelOverride::s_pSchemaBinding;
}


// CVRHandModelOverride::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 22, @0x00000000024104e0, libserver.so)
// globals: CVRHandModelOverride::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CVRHandModelOverride::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CVRHandModelOverride::CEntityInstanceEntityClass *const this)
{
  return CVRHandModelOverride::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CVRHandModelOverride::CEntityInstanceEntityClass::DestructInstance  (line 22, @0x00000000024104f0, libserver.so)  // inlines: Destruct<CVRHandModelOverride>
void __fastcall CVRHandModelOverride::CEntityInstanceEntityClass::DestructInstance(
        CVRHandModelOverride::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CVRHandModelOverride::CEntityInstanceEntityClass::FreeInstance  (line 22, @0x0000000002410510, libserver.so)
void __fastcall CVRHandModelOverride::CEntityInstanceEntityClass::FreeInstance(
        CVRHandModelOverride::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CVRHandModelOverride::CEntityInstanceEntityClass::CanAllocate  (line 22, @0x0000000002410530, libserver.so)
bool __fastcall CVRHandModelOverride::CEntityInstanceEntityClass::CanAllocate(
        const CVRHandModelOverride::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CVRHandModelOverride::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 22, @0x0000000002410540, libserver.so)
// globals: CVRHandModelOverride::s_pSchemaBinding
const ISchemaBinding *__fastcall CVRHandModelOverride::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CVRHandModelOverride::CEntityInstanceEntityClass *const this)
{
  return CVRHandModelOverride::s_pSchemaBinding;
}


// CVRHandModelOverride::CEntityInstanceEntityClass::AllocateInstance  (line 22, @0x00000000024107b0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CVRHandModelOverride::CEntityInstanceEntityClass::AllocateInstance(
        CVRHandModelOverride::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1224);
  memset(v1, 0, 0x4C8u);
  return v1;
}


// CVRHandModelOverride::CEntityInstanceEntityClass::ConstructInstance  (line 22, @0x0000000002410c70, libserver.so)  // inlines: CVRHandModelOverride, Construct<CVRHandModelOverride>
// calls: CBaseVRHandAttachment::CBaseVRHandAttachment
CEntityInstance *__fastcall CVRHandModelOverride::CEntityInstanceEntityClass::ConstructInstance(
        CVRHandModelOverride::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseVRHandAttachment::CBaseVRHandAttachment(p);
    *p = &off_40D3190;
  }
  return p;
}


// CVRHandModelOverride::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 22, @0x0000000002411ca0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CVRHandModelOverride::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CVRHandModelOverride::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CVRHandModelOverride::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 22, @0x0000000002411cc0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CVRHandModelOverride::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CVRHandModelOverride::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CVRHandModelOverride::GetEntityClassInternal  (line 22, @0x0000000002412c60, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseAnimating::InitScriptDesc, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_13.cpp
// strings: "vr_hand_model_override", "CVRHandModelOverride", "base_vr_hand_attachment", "CBaseVRHandAttachment", "baseanimating", "CBaseAnimating" (10 total)
// globals: `guard variable for'CVRHandModelOverride::GetEntityClassInternal(void)::g_EntityCVRHandModelOverrideClass, CVRHandModelOverride::GetEntityClassInternal(void)::g_EntityCVRHandModelOverrideClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CVRHandModelOverride::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CVRHandModelOverride::GetEntityClassInfo(void)::g_EntityCVRHandModelOverrideClassInfo, CVRHandModelOverride::GetEntityClassInfo(void)::g_EntityCVRHandModelOverrideClassInfo, `guard variable for'CBaseVRHandAttachment::GetEntityClassInfo(void)::g_EntityCBaseVRHandAttachmentClassInfo (17 total)
CEntityClass *__cdecl CVRHandModelOverride::GetEntityClassInternal()
{
  if ( `guard variable for'CVRHandModelOverride::GetEntityClassInternal(void)::g_EntityCVRHandModelOverrideClass == 0
    && __cxa_guard_acquire(&`guard variable for'CVRHandModelOverride::GetEntityClassInternal(void)::g_EntityCVRHandModelOverrideClass) != 0 )
  {
    CVRHandModelOverride::GetEntityClassInternal(void)::g_EntityCVRHandModelOverrideClass.m_designerName.u.m_Id = 0;
    CVRHandModelOverride::GetEntityClassInternal(void)::g_EntityCVRHandModelOverrideClass._vptr_CEntityClass = off_3F79390;
    CVRHandModelOverride::GetEntityClassInternal(void)::g_EntityCVRHandModelOverrideClass.m_ComponentOffsets.m_Size = 0;
    CVRHandModelOverride::GetEntityClassInternal(void)::g_EntityCVRHandModelOverrideClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CVRHandModelOverride::GetEntityClassInternal(void)::g_EntityCVRHandModelOverrideClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CVRHandModelOverride::GetEntityClassInternal(void)::g_EntityCVRHandModelOverrideClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CVRHandModelOverride::GetEntityClassInternal(void)::g_EntityCVRHandModelOverrideClass.m_AllHelpers.m_Size = 0;
    CVRHandModelOverride::GetEntityClassInternal(void)::g_EntityCVRHandModelOverrideClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CVRHandModelOverride::GetEntityClassInternal(void)::g_EntityCVRHandModelOverrideClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CVRHandModelOverride::GetEntityClassInternal(void)::g_EntityCVRHandModelOverrideClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CVRHandModelOverride::GetEntityClassInternal(void)::g_EntityCVRHandModelOverrideClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CVRHandModelOverride::GetEntityClassInternal(void)::g_EntityCVRHandModelOverrideClass.m_instanceUnserializer.m_atomicFields,
      4);
    CVRHandModelOverride::GetEntityClassInternal(void)::g_EntityCVRHandModelOverrideClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CVRHandModelOverride::GetEntityClassInternal(void)::g_EntityCVRHandModelOverrideClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CVRHandModelOverride::GetEntityClassInternal(void)::g_EntityCVRHandModelOverrideClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CVRHandModelOverride::GetEntityClassInternal(void)::g_EntityCVRHandModelOverrideClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CVRHandModelOverride::GetEntityClassInternal(void)::g_EntityCVRHandModelOverrideClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CVRHandModelOverride::GetEntityClassInternal(void)::g_EntityCVRHandModelOverrideClass;
    CVRHandModelOverride::GetEntityClassInternal(void)::g_EntityCVRHandModelOverrideClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CVRHandModelOverride::GetEntityClassInternal(void)::g_EntityCVRHandModelOverrideClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CVRHandModelOverride::GetEntityClassInternal(void)::g_EntityCVRHandModelOverrideClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CVRHandModelOverride::GetEntityClassInternal(void)::g_EntityCVRHandModelOverrideClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CVRHandModelOverride::GetEntityClassInternal(void)::g_EntityCVRHandModelOverrideClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CVRHandModelOverride::GetEntityClassInternal(void)::g_EntityCVRHandModelOverrideClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CVRHandModelOverride::GetEntityClassInternal(void)::g_EntityCVRHandModelOverrideClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CVRHandModelOverride::GetEntityClassInternal(void)::g_EntityCVRHandModelOverrideClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CVRHandModelOverride::GetEntityClassInternal(void)::g_EntityCVRHandModelOverrideClass.m_classInputs.m_Size = 0;
    CVRHandModelOverride::GetEntityClassInternal(void)::g_EntityCVRHandModelOverrideClass.m_classInputs.m_Memory.m_pMemory = 0;
    CVRHandModelOverride::GetEntityClassInternal(void)::g_EntityCVRHandModelOverrideClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CVRHandModelOverride::GetEntityClassInternal(void)::g_EntityCVRHandModelOverrideClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CVRHandModelOverride::GetEntityClassInternal(void)::g_EntityCVRHandModelOverrideClass.m_classOutputs.m_Size = 0;
    CVRHandModelOverride::GetEntityClassInternal(void)::g_EntityCVRHandModelOverrideClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CVRHandModelOverride::GetEntityClassInternal(void)::g_EntityCVRHandModelOverrideClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CVRHandModelOverride::GetEntityClassInternal(void)::g_EntityCVRHandModelOverrideClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CVRHandModelOverride::GetEntityClassInternal(void)::g_EntityCVRHandModelOverrideClass.m_requiredEHandle.m_Index = -1;
    CVRHandModelOverride::GetEntityClassInternal(void)::g_EntityCVRHandModelOverrideClass.m_hNetworkSerializer = 0;
    CVRHandModelOverride::GetEntityClassInternal(void)::g_EntityCVRHandModelOverrideClass.m_pBaseClassInfo = 0;
    CVRHandModelOverride::GetEntityClassInternal(void)::g_EntityCVRHandModelOverrideClass.m_pClassInfo = 0;
    CVRHandModelOverride::GetEntityClassInternal(void)::g_EntityCVRHandModelOverrideClass.m_flags = 0;
    CVRHandModelOverride::GetEntityClassInternal(void)::g_EntityCVRHandModelOverrideClass.m_nAllHelpersFlags = 0;
    CVRHandModelOverride::GetEntityClassInternal(void)::g_EntityCVRHandModelOverrideClass.m_pScriptClassDesc = 0;
    CVRHandModelOverride::GetEntityClassInternal(void)::g_EntityCVRHandModelOverrideClass.m_pInputs = 0;
    CVRHandModelOverride::GetEntityClassInternal(void)::g_EntityCVRHandModelOverrideClass.m_nInputCount = 0;
    CVRHandModelOverride::GetEntityClassInternal(void)::g_EntityCVRHandModelOverrideClass.m_pOutputs = 0;
    CVRHandModelOverride::GetEntityClassInternal(void)::g_EntityCVRHandModelOverrideClass.m_nOutputCount = 0;
    CVRHandModelOverride::GetEntityClassInternal(void)::g_EntityCVRHandModelOverrideClass.m_pGameClass = 0;
    CVRHandModelOverride::GetEntityClassInternal(void)::g_EntityCVRHandModelOverrideClass._vptr_CEntityClass = off_40D3110;
    __cxa_guard_release(&`guard variable for'CVRHandModelOverride::GetEntityClassInternal(void)::g_EntityCVRHandModelOverrideClass);
    __cxa_atexit(
      CVRHandModelOverride::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CVRHandModelOverride::GetEntityClassInternal(void)::g_EntityCVRHandModelOverrideClass,
      &_dso_handle);
  }
  if ( g_pEntityCVRHandModelOverrideClass != 0 )
    return &CVRHandModelOverride::GetEntityClassInternal(void)::g_EntityCVRHandModelOverrideClass;
  if ( `guard variable for'CVRHandModelOverride::GetEntityClassInfo(void)::g_EntityCVRHandModelOverrideClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CVRHandModelOverride::GetEntityClassInfo(void)::g_EntityCVRHandModelOverrideClassInfo) != 0 )
  {
    if ( `guard variable for'CBaseVRHandAttachment::GetEntityClassInfo(void)::g_EntityCBaseVRHandAttachmentClassInfo == 0
      && __cxa_guard_acquire(&`guard variable for'CBaseVRHandAttachment::GetEntityClassInfo(void)::g_EntityCBaseVRHandAttachmentClassInfo) != 0 )
    {
      if ( `guard variable for'CBaseAnimating::GetEntityClassInfo(void)::g_EntityCBaseAnimatingClassInfo == 0
        && __cxa_guard_acquire(&`guard variable for'CBaseAnimating::GetEntityClassInfo(void)::g_EntityCBaseAnimatingClassInfo) != 0 )
      {
        if ( `guard variable for'CBaseModelEntity::GetEntityClassInfo(void)::g_EntityCBaseModelEntityClassInfo == 0
          && __cxa_guard_acquire(&`guard variable for'CBaseModelEntity::GetEntityClassInfo(void)::g_EntityCBaseModelEntityClassInfo) != 0 )
        {
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
            &CBaseModelEntity::GetEntityClassInfo(void)::g_EntityCBaseModelEntityClassInfo,
            "CBaseModelEntity",
            "basemodelentity",
            0,
            &CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo);
          __cxa_guard_release(&`guard variable for'CBaseModelEntity::GetEntityClassInfo(void)::g_EntityCBaseModelEntityClassInfo);
        }
        CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
          &CBaseAnimating::GetEntityClassInfo(void)::g_EntityCBaseAnimatingClassInfo,
          "CBaseAnimating",
          "baseanimating",
          0,
          &CBaseModelEntity::GetEntityClassInfo(void)::g_EntityCBaseModelEntityClassInfo);
        __cxa_guard_release(&`guard variable for'CBaseAnimating::GetEntityClassInfo(void)::g_EntityCBaseAnimatingClassInfo);
      }
      CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
        &CBaseVRHandAttachment::GetEntityClassInfo(void)::g_EntityCBaseVRHandAttachmentClassInfo,
        "CBaseVRHandAttachment",
        "base_vr_hand_attachment",
        0,
        &CBaseAnimating::GetEntityClassInfo(void)::g_EntityCBaseAnimatingClassInfo);
      __cxa_guard_release(&`guard variable for'CBaseVRHandAttachment::GetEntityClassInfo(void)::g_EntityCBaseVRHandAttachmentClassInfo);
    }
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CVRHandModelOverride::GetEntityClassInfo(void)::g_EntityCVRHandModelOverrideClassInfo,
      "CVRHandModelOverride",
      "vr_hand_model_override",
      0,
      &CBaseVRHandAttachment::GetEntityClassInfo(void)::g_EntityCBaseVRHandAttachmentClassInfo);
    __cxa_guard_release(&`guard variable for'CVRHandModelOverride::GetEntityClassInfo(void)::g_EntityCVRHandModelOverrideClassInfo);
  }
  CVRHandModelOverride::GetEntityClassInternal(void)::g_EntityCVRHandModelOverrideClass.m_pClassInfo = &CVRHandModelOverride::GetEntityClassInfo(void)::g_EntityCVRHandModelOverrideClassInfo;
  CVRHandModelOverride::GetEntityClassInternal(void)::g_EntityCVRHandModelOverrideClass.m_pBaseClassInfo = CVRHandModelOverride::GetEntityClassInfo(void)::g_EntityCVRHandModelOverrideClassInfo.m_pBaseClassInfo;
  g_pEntityCVRHandModelOverrideClass = &CVRHandModelOverride::GetEntityClassInternal(void)::g_EntityCVRHandModelOverrideClass;
  CVRHandModelOverride::GetEntityClassInfo(void)::g_EntityCVRHandModelOverrideClassInfo.m_pClass = &CVRHandModelOverride::GetEntityClassInternal(void)::g_EntityCVRHandModelOverrideClass;
  CVRHandModelOverride::GetEntityClassInternal(void)::g_EntityCVRHandModelOverrideClass.m_pScriptClassDesc = CBaseAnimating::InitScriptDesc();
  g_pEntityCVRHandModelOverrideClass->m_pComponentOverrides = 0;
  return &CVRHandModelOverride::GetEntityClassInternal(void)::g_EntityCVRHandModelOverrideClass;
}


