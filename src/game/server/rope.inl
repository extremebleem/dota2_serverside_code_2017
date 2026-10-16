
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CRopeKeyframe::~CRopeKeyframe  (line 17, @0x00000000023b0760, libserver.so)  // inlines: ~CNetworkVarBase, ~CStrongHandle, ~IPositionWatcher, ~IWatcherCallback
// calls: CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown, CBaseModelEntity::~CBaseModelEntity
void __fastcall CRopeKeyframe::~CRopeKeyframe(CRopeKeyframe *const this)
{
  CNetworkVarBase<CStrongHandle<InfoForResourceTypeIMaterial2>,CRopeKeyframe::NetworkVar_m_iRopeMaterialModelIndex> *p_m_iRopeMaterialModelIndex; // rdi

  p_m_iRopeMaterialModelIndex = &this->m_iRopeMaterialModelIndex;
  p_m_iRopeMaterialModelIndex[-150].m_Value.m_pBinding = &off_40A57D0;
  p_m_iRopeMaterialModelIndex[-6].m_Value.m_pBinding = off_40A5EA0;
  CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown(&p_m_iRopeMaterialModelIndex->m_Value);
  this->_vptr_IWatcherCallback = off_4074030;  // vptr: IWatcherCallback
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CRopeKeyframe::~CRopeKeyframe  (line 17, @0x00000000023b0860, libserver.so)  // inlines: ~CNetworkVarBase, ~CRopeKeyframe, ~CStrongHandle, ~IPositionWatcher, ~IWatcherCallback
// calls: CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown, CBaseModelEntity::~CBaseModelEntity, CBaseEntity::operator delete
void __fastcall CRopeKeyframe::~CRopeKeyframe(CRopeKeyframe *const this)
{
  CNetworkVarBase<CStrongHandle<InfoForResourceTypeIMaterial2>,CRopeKeyframe::NetworkVar_m_iRopeMaterialModelIndex> *p_m_iRopeMaterialModelIndex; // rdi

  p_m_iRopeMaterialModelIndex = &this->m_iRopeMaterialModelIndex;
  p_m_iRopeMaterialModelIndex[-150].m_Value.m_pBinding = &off_40A57D0;
  p_m_iRopeMaterialModelIndex[-6].m_Value.m_pBinding = off_40A5EA0;
  CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown(&p_m_iRopeMaterialModelIndex->m_Value);
  this->_vptr_IWatcherCallback = off_4074030;  // vptr: IWatcherCallback
  CBaseModelEntity::~CBaseModelEntity(this);
  CBaseEntity::operator delete(this);
}


// CRopeKeyframe::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 19, @0x0000000002002a60, libserver.so)
// globals: CRopeKeyframe::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CRopeKeyframe::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CRopeKeyframe::CEntityInstanceEntityClass *const this)
{
  return CRopeKeyframe::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CRopeKeyframe::CEntityInstanceEntityClass::DestructInstance  (line 19, @0x0000000002002a70, libserver.so)  // inlines: Destruct<CRopeKeyframe>
void __fastcall CRopeKeyframe::CEntityInstanceEntityClass::DestructInstance(
        CRopeKeyframe::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CRopeKeyframe::CEntityInstanceEntityClass::FreeInstance  (line 19, @0x0000000002002a90, libserver.so)
void __fastcall CRopeKeyframe::CEntityInstanceEntityClass::FreeInstance(
        CRopeKeyframe::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CRopeKeyframe::CEntityInstanceEntityClass::CanAllocate  (line 19, @0x0000000002002ab0, libserver.so)
bool __fastcall CRopeKeyframe::CEntityInstanceEntityClass::CanAllocate(
        const CRopeKeyframe::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CRopeKeyframe::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 19, @0x0000000002002ac0, libserver.so)
// globals: CRopeKeyframe::s_pSchemaBinding
const ISchemaBinding *__fastcall CRopeKeyframe::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CRopeKeyframe::CEntityInstanceEntityClass *const this)
{
  return CRopeKeyframe::s_pSchemaBinding;
}


// CRopeKeyframe::CEntityInstanceEntityClass::AllocateInstance  (line 19, @0x0000000002004db0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CRopeKeyframe::CEntityInstanceEntityClass::AllocateInstance(
        CRopeKeyframe::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1240);
  memset(v1, 0, 0x4D8u);
  return v1;
}


// CRopeKeyframe::CEntityInstanceEntityClass::ConstructInstance  (line 19, @0x0000000002005260, libserver.so)  // inlines: Construct<CRopeKeyframe>
// calls: CRopeKeyframe::CRopeKeyframe
CEntityInstance *__fastcall CRopeKeyframe::CEntityInstanceEntityClass::ConstructInstance(
        CRopeKeyframe::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
    CRopeKeyframe::CRopeKeyframe(p);
  return p;
}


// CRopeKeyframe::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 19, @0x0000000002007220, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CRopeKeyframe::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CRopeKeyframe::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CRopeKeyframe::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 19, @0x0000000002007240, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CRopeKeyframe::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CRopeKeyframe::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CRopeKeyframe::GetEntityClassInternal  (line 19, @0x00000000020101d0, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseModelEntity::InitScriptDesc, CBaseModelEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_header_files_04.cpp
// strings: "keyframe_rope", "CRopeKeyframe"
// globals: `guard variable for'CRopeKeyframe::GetEntityClassInternal(void)::g_EntityCRopeKeyframeClass, CRopeKeyframe::GetEntityClassInternal(void)::g_EntityCRopeKeyframeClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CRopeKeyframe::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CRopeKeyframe::GetEntityClassInfo(void)::g_EntityCRopeKeyframeClassInfo, CRopeKeyframe::GetEntityClassInfo(void)::g_EntityCRopeKeyframeClassInfo
CEntityClass *__cdecl CRopeKeyframe::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CRopeKeyframe::GetEntityClassInternal(void)::g_EntityCRopeKeyframeClass == 0
    && __cxa_guard_acquire(&`guard variable for'CRopeKeyframe::GetEntityClassInternal(void)::g_EntityCRopeKeyframeClass) != 0 )
  {
    CRopeKeyframe::GetEntityClassInternal(void)::g_EntityCRopeKeyframeClass.m_designerName.u.m_Id = 0;
    CRopeKeyframe::GetEntityClassInternal(void)::g_EntityCRopeKeyframeClass._vptr_CEntityClass = off_3F79390;
    CRopeKeyframe::GetEntityClassInternal(void)::g_EntityCRopeKeyframeClass.m_ComponentOffsets.m_Size = 0;
    CRopeKeyframe::GetEntityClassInternal(void)::g_EntityCRopeKeyframeClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CRopeKeyframe::GetEntityClassInternal(void)::g_EntityCRopeKeyframeClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CRopeKeyframe::GetEntityClassInternal(void)::g_EntityCRopeKeyframeClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CRopeKeyframe::GetEntityClassInternal(void)::g_EntityCRopeKeyframeClass.m_AllHelpers.m_Size = 0;
    CRopeKeyframe::GetEntityClassInternal(void)::g_EntityCRopeKeyframeClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CRopeKeyframe::GetEntityClassInternal(void)::g_EntityCRopeKeyframeClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CRopeKeyframe::GetEntityClassInternal(void)::g_EntityCRopeKeyframeClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CRopeKeyframe::GetEntityClassInternal(void)::g_EntityCRopeKeyframeClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CRopeKeyframe::GetEntityClassInternal(void)::g_EntityCRopeKeyframeClass.m_instanceUnserializer.m_atomicFields,
      4);
    CRopeKeyframe::GetEntityClassInternal(void)::g_EntityCRopeKeyframeClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CRopeKeyframe::GetEntityClassInternal(void)::g_EntityCRopeKeyframeClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CRopeKeyframe::GetEntityClassInternal(void)::g_EntityCRopeKeyframeClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CRopeKeyframe::GetEntityClassInternal(void)::g_EntityCRopeKeyframeClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CRopeKeyframe::GetEntityClassInternal(void)::g_EntityCRopeKeyframeClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CRopeKeyframe::GetEntityClassInternal(void)::g_EntityCRopeKeyframeClass;
    CRopeKeyframe::GetEntityClassInternal(void)::g_EntityCRopeKeyframeClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CRopeKeyframe::GetEntityClassInternal(void)::g_EntityCRopeKeyframeClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CRopeKeyframe::GetEntityClassInternal(void)::g_EntityCRopeKeyframeClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CRopeKeyframe::GetEntityClassInternal(void)::g_EntityCRopeKeyframeClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CRopeKeyframe::GetEntityClassInternal(void)::g_EntityCRopeKeyframeClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CRopeKeyframe::GetEntityClassInternal(void)::g_EntityCRopeKeyframeClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CRopeKeyframe::GetEntityClassInternal(void)::g_EntityCRopeKeyframeClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CRopeKeyframe::GetEntityClassInternal(void)::g_EntityCRopeKeyframeClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CRopeKeyframe::GetEntityClassInternal(void)::g_EntityCRopeKeyframeClass.m_classInputs.m_Size = 0;
    CRopeKeyframe::GetEntityClassInternal(void)::g_EntityCRopeKeyframeClass.m_classInputs.m_Memory.m_pMemory = 0;
    CRopeKeyframe::GetEntityClassInternal(void)::g_EntityCRopeKeyframeClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CRopeKeyframe::GetEntityClassInternal(void)::g_EntityCRopeKeyframeClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CRopeKeyframe::GetEntityClassInternal(void)::g_EntityCRopeKeyframeClass.m_classOutputs.m_Size = 0;
    CRopeKeyframe::GetEntityClassInternal(void)::g_EntityCRopeKeyframeClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CRopeKeyframe::GetEntityClassInternal(void)::g_EntityCRopeKeyframeClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CRopeKeyframe::GetEntityClassInternal(void)::g_EntityCRopeKeyframeClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CRopeKeyframe::GetEntityClassInternal(void)::g_EntityCRopeKeyframeClass.m_requiredEHandle.m_Index = -1;
    CRopeKeyframe::GetEntityClassInternal(void)::g_EntityCRopeKeyframeClass.m_hNetworkSerializer = 0;
    CRopeKeyframe::GetEntityClassInternal(void)::g_EntityCRopeKeyframeClass.m_pBaseClassInfo = 0;
    CRopeKeyframe::GetEntityClassInternal(void)::g_EntityCRopeKeyframeClass.m_pClassInfo = 0;
    CRopeKeyframe::GetEntityClassInternal(void)::g_EntityCRopeKeyframeClass.m_flags = 0;
    CRopeKeyframe::GetEntityClassInternal(void)::g_EntityCRopeKeyframeClass.m_nAllHelpersFlags = 0;
    CRopeKeyframe::GetEntityClassInternal(void)::g_EntityCRopeKeyframeClass.m_pScriptClassDesc = 0;
    CRopeKeyframe::GetEntityClassInternal(void)::g_EntityCRopeKeyframeClass.m_pInputs = 0;
    CRopeKeyframe::GetEntityClassInternal(void)::g_EntityCRopeKeyframeClass.m_nInputCount = 0;
    CRopeKeyframe::GetEntityClassInternal(void)::g_EntityCRopeKeyframeClass.m_pOutputs = 0;
    CRopeKeyframe::GetEntityClassInternal(void)::g_EntityCRopeKeyframeClass.m_nOutputCount = 0;
    CRopeKeyframe::GetEntityClassInternal(void)::g_EntityCRopeKeyframeClass.m_pGameClass = 0;
    CRopeKeyframe::GetEntityClassInternal(void)::g_EntityCRopeKeyframeClass._vptr_CEntityClass = off_3FE0490;
    __cxa_guard_release(&`guard variable for'CRopeKeyframe::GetEntityClassInternal(void)::g_EntityCRopeKeyframeClass);
    __cxa_atexit(
      CRopeKeyframe::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CRopeKeyframe::GetEntityClassInternal(void)::g_EntityCRopeKeyframeClass,
      &_dso_handle);
  }
  if ( g_pEntityCRopeKeyframeClass != 0 )
    return &CRopeKeyframe::GetEntityClassInternal(void)::g_EntityCRopeKeyframeClass;
  if ( `guard variable for'CRopeKeyframe::GetEntityClassInfo(void)::g_EntityCRopeKeyframeClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CRopeKeyframe::GetEntityClassInfo(void)::g_EntityCRopeKeyframeClassInfo) != 0 )
  {
    EntityClassInfo = CBaseModelEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CRopeKeyframe::GetEntityClassInfo(void)::g_EntityCRopeKeyframeClassInfo,
      "CRopeKeyframe",
      "keyframe_rope",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CRopeKeyframe::GetEntityClassInfo(void)::g_EntityCRopeKeyframeClassInfo);
  }
  CRopeKeyframe::GetEntityClassInternal(void)::g_EntityCRopeKeyframeClass.m_pClassInfo = &CRopeKeyframe::GetEntityClassInfo(void)::g_EntityCRopeKeyframeClassInfo;
  CRopeKeyframe::GetEntityClassInternal(void)::g_EntityCRopeKeyframeClass.m_pBaseClassInfo = CRopeKeyframe::GetEntityClassInfo(void)::g_EntityCRopeKeyframeClassInfo.m_pBaseClassInfo;
  g_pEntityCRopeKeyframeClass = &CRopeKeyframe::GetEntityClassInternal(void)::g_EntityCRopeKeyframeClass;
  CRopeKeyframe::GetEntityClassInfo(void)::g_EntityCRopeKeyframeClassInfo.m_pClass = &CRopeKeyframe::GetEntityClassInternal(void)::g_EntityCRopeKeyframeClass;
  CRopeKeyframe::GetEntityClassInternal(void)::g_EntityCRopeKeyframeClass.m_pScriptClassDesc = CBaseModelEntity::InitScriptDesc();
  g_pEntityCRopeKeyframeClass->m_pComponentOverrides = 0;
  return &CRopeKeyframe::GetEntityClassInternal(void)::g_EntityCRopeKeyframeClass;
}


// CRopeKeyframe::GetEntityClass  (line 19, @0x00000000023a8b60, libserver.so)
CEntityClass *__cdecl CRopeKeyframe::GetEntityClass()
{
  return g_pEntityCRopeKeyframeClass;
}


// CRopeKeyframe::Schema_DynamicBinding  (line 19, @0x00000000023aade0, libserver.so)
// calls: CRopeKeyframe::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CRopeKeyframe::Schema_DynamicBinding(const CRopeKeyframe *const this)
{
  CRopeKeyframe::Schema_VerifyBindingIsRegistered();
  return CRopeKeyframe::s_pSchemaBinding;
}


// CRopeKeyframe::GetEntityClassInfo  (line 19, @0x00000000023ade40, libserver.so)  // inlines: GetEntityClassInfo
// calls: __cxa_guard_acquire, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_release, CBaseEntity::GetEntityClassInfo
// callers: CRopeKeyframeAlias_move_rope::GetEntityClassInternal, CRopeKeyframeAlias_move_rope::CEntityInstanceEntityClass::InitOptionalTables
// strings: "keyframe_rope", "CRopeKeyframe", "basemodelentity", "CBaseModelEntity"
// globals: `guard variable for'CRopeKeyframe::GetEntityClassInfo(void)::g_EntityCRopeKeyframeClassInfo, CRopeKeyframe::GetEntityClassInfo(void)::g_EntityCRopeKeyframeClassInfo, `guard variable for'CBaseModelEntity::GetEntityClassInfo(void)::g_EntityCBaseModelEntityClassInfo, CBaseModelEntity::GetEntityClassInfo(void)::g_EntityCBaseModelEntityClassInfo
CEntityClassInfo *__cdecl CRopeKeyframe::GetEntityClassInfo()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CRopeKeyframe::GetEntityClassInfo(void)::g_EntityCRopeKeyframeClassInfo != 0 )
    return &CRopeKeyframe::GetEntityClassInfo(void)::g_EntityCRopeKeyframeClassInfo;
  if ( __cxa_guard_acquire(&`guard variable for'CRopeKeyframe::GetEntityClassInfo(void)::g_EntityCRopeKeyframeClassInfo) == 0 )
    return &CRopeKeyframe::GetEntityClassInfo(void)::g_EntityCRopeKeyframeClassInfo;
  if ( `guard variable for'CBaseModelEntity::GetEntityClassInfo(void)::g_EntityCBaseModelEntityClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CBaseModelEntity::GetEntityClassInfo(void)::g_EntityCBaseModelEntityClassInfo) != 0 )
  {
    EntityClassInfo = CBaseEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CBaseModelEntity::GetEntityClassInfo(void)::g_EntityCBaseModelEntityClassInfo,
      "CBaseModelEntity",
      "basemodelentity",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CBaseModelEntity::GetEntityClassInfo(void)::g_EntityCBaseModelEntityClassInfo);
  }
  CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
    &CRopeKeyframe::GetEntityClassInfo(void)::g_EntityCRopeKeyframeClassInfo,
    "CRopeKeyframe",
    "keyframe_rope",
    0,
    &CBaseModelEntity::GetEntityClassInfo(void)::g_EntityCBaseModelEntityClassInfo);
  __cxa_guard_release(&`guard variable for'CRopeKeyframe::GetEntityClassInfo(void)::g_EntityCRopeKeyframeClassInfo);
  return &CRopeKeyframe::GetEntityClassInfo(void)::g_EntityCRopeKeyframeClassInfo;
}


// CRopeKeyframe::ObjectCaps  (line 89, @0x00000000023aab60, libserver.so)
// calls: CBaseEntity::ObjectCaps
int __fastcall CRopeKeyframe::ObjectCaps(CRopeKeyframe *const this)
{
  int result; // eax

  result = CBaseEntity::ObjectCaps(this);
  LOBYTE(result) = result & 0x7F;
  return result;
}


