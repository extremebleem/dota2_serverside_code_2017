
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CVGuiScreen::~CVGuiScreen  (line 17, @0x0000000002412b60, libserver.so)  // inlines: ~CNetworkVarBase, ~CStrongHandle
// calls: CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown, CBaseModelEntity::~CBaseModelEntity
void __fastcall CVGuiScreen::~CVGuiScreen(CVGuiScreen *const this)
{
  CNetworkVarBase<CStrongHandle<InfoForResourceTypeIMaterial2>,CVGuiScreen::NetworkVar_m_nOverlayMaterial> *p_m_nOverlayMaterial; // rdi

  p_m_nOverlayMaterial = &this->m_nOverlayMaterial;
  p_m_nOverlayMaterial[-148].m_Value.m_pBinding = &off_40D21B0;
  CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown(&p_m_nOverlayMaterial->m_Value);
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CVGuiScreen::~CVGuiScreen  (line 17, @0x0000000002412ba0, libserver.so)  // inlines: ~CNetworkVarBase, ~CStrongHandle, ~CVGuiScreen
// calls: CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown, CBaseModelEntity::~CBaseModelEntity, CBaseEntity::operator delete
void __fastcall CVGuiScreen::~CVGuiScreen(CVGuiScreen *const this)
{
  CNetworkVarBase<CStrongHandle<InfoForResourceTypeIMaterial2>,CVGuiScreen::NetworkVar_m_nOverlayMaterial> *p_m_nOverlayMaterial; // rdi

  p_m_nOverlayMaterial = &this->m_nOverlayMaterial;
  p_m_nOverlayMaterial[-148].m_Value.m_pBinding = &off_40D21B0;
  CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown(&p_m_nOverlayMaterial->m_Value);
  CBaseModelEntity::~CBaseModelEntity(this);
  CBaseEntity::operator delete(this);
}


// CVGuiScreen::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 19, @0x0000000002019380, libserver.so)
// globals: CVGuiScreen::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CVGuiScreen::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CVGuiScreen::CEntityInstanceEntityClass *const this)
{
  return CVGuiScreen::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CVGuiScreen::CEntityInstanceEntityClass::DestructInstance  (line 19, @0x0000000002019390, libserver.so)  // inlines: Destruct<CVGuiScreen>
void __fastcall CVGuiScreen::CEntityInstanceEntityClass::DestructInstance(
        CVGuiScreen::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CVGuiScreen::CEntityInstanceEntityClass::FreeInstance  (line 19, @0x00000000020193b0, libserver.so)
void __fastcall CVGuiScreen::CEntityInstanceEntityClass::FreeInstance(
        CVGuiScreen::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CVGuiScreen::CEntityInstanceEntityClass::CanAllocate  (line 19, @0x00000000020193d0, libserver.so)
bool __fastcall CVGuiScreen::CEntityInstanceEntityClass::CanAllocate(
        const CVGuiScreen::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CVGuiScreen::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 19, @0x00000000020193e0, libserver.so)
// globals: CVGuiScreen::s_pSchemaBinding
const ISchemaBinding *__fastcall CVGuiScreen::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CVGuiScreen::CEntityInstanceEntityClass *const this)
{
  return CVGuiScreen::s_pSchemaBinding;
}


// CVGuiScreen::CEntityInstanceEntityClass::AllocateInstance  (line 19, @0x000000000201ad40, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CVGuiScreen::CEntityInstanceEntityClass::AllocateInstance(
        CVGuiScreen::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1200);
  memset(v1, 0, 0x4B0u);
  return v1;
}


// CVGuiScreen::CEntityInstanceEntityClass::ConstructInstance  (line 19, @0x000000000201af90, libserver.so)  // inlines: Construct<CVGuiScreen>
// calls: CVGuiScreen::CVGuiScreen
CEntityInstance *__fastcall CVGuiScreen::CEntityInstanceEntityClass::ConstructInstance(
        CVGuiScreen::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
    CVGuiScreen::CVGuiScreen(p);
  return p;
}


// CVGuiScreen::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 19, @0x000000000201dd30, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CVGuiScreen::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CVGuiScreen::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CVGuiScreen::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 19, @0x000000000201dd50, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CVGuiScreen::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CVGuiScreen::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CVGuiScreen::GetEntityClassInternal  (line 19, @0x0000000002022cf0, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseModelEntity::InitScriptDesc, CBaseModelEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_header_files_05.cpp
// strings: "vgui_screen", "CVGuiScreen"
// globals: `guard variable for'CVGuiScreen::GetEntityClassInternal(void)::g_EntityCVGuiScreenClass, CVGuiScreen::GetEntityClassInternal(void)::g_EntityCVGuiScreenClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CVGuiScreen::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CVGuiScreen::GetEntityClassInfo(void)::g_EntityCVGuiScreenClassInfo, CVGuiScreen::GetEntityClassInfo(void)::g_EntityCVGuiScreenClassInfo
CEntityClass *__cdecl CVGuiScreen::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CVGuiScreen::GetEntityClassInternal(void)::g_EntityCVGuiScreenClass == 0
    && __cxa_guard_acquire(&`guard variable for'CVGuiScreen::GetEntityClassInternal(void)::g_EntityCVGuiScreenClass) != 0 )
  {
    CVGuiScreen::GetEntityClassInternal(void)::g_EntityCVGuiScreenClass.m_designerName.u.m_Id = 0;
    CVGuiScreen::GetEntityClassInternal(void)::g_EntityCVGuiScreenClass._vptr_CEntityClass = off_3F79390;
    CVGuiScreen::GetEntityClassInternal(void)::g_EntityCVGuiScreenClass.m_ComponentOffsets.m_Size = 0;
    CVGuiScreen::GetEntityClassInternal(void)::g_EntityCVGuiScreenClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CVGuiScreen::GetEntityClassInternal(void)::g_EntityCVGuiScreenClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CVGuiScreen::GetEntityClassInternal(void)::g_EntityCVGuiScreenClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CVGuiScreen::GetEntityClassInternal(void)::g_EntityCVGuiScreenClass.m_AllHelpers.m_Size = 0;
    CVGuiScreen::GetEntityClassInternal(void)::g_EntityCVGuiScreenClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CVGuiScreen::GetEntityClassInternal(void)::g_EntityCVGuiScreenClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CVGuiScreen::GetEntityClassInternal(void)::g_EntityCVGuiScreenClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CVGuiScreen::GetEntityClassInternal(void)::g_EntityCVGuiScreenClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CVGuiScreen::GetEntityClassInternal(void)::g_EntityCVGuiScreenClass.m_instanceUnserializer.m_atomicFields,
      4);
    CVGuiScreen::GetEntityClassInternal(void)::g_EntityCVGuiScreenClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CVGuiScreen::GetEntityClassInternal(void)::g_EntityCVGuiScreenClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CVGuiScreen::GetEntityClassInternal(void)::g_EntityCVGuiScreenClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CVGuiScreen::GetEntityClassInternal(void)::g_EntityCVGuiScreenClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CVGuiScreen::GetEntityClassInternal(void)::g_EntityCVGuiScreenClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CVGuiScreen::GetEntityClassInternal(void)::g_EntityCVGuiScreenClass;
    CVGuiScreen::GetEntityClassInternal(void)::g_EntityCVGuiScreenClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CVGuiScreen::GetEntityClassInternal(void)::g_EntityCVGuiScreenClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CVGuiScreen::GetEntityClassInternal(void)::g_EntityCVGuiScreenClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CVGuiScreen::GetEntityClassInternal(void)::g_EntityCVGuiScreenClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CVGuiScreen::GetEntityClassInternal(void)::g_EntityCVGuiScreenClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CVGuiScreen::GetEntityClassInternal(void)::g_EntityCVGuiScreenClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CVGuiScreen::GetEntityClassInternal(void)::g_EntityCVGuiScreenClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CVGuiScreen::GetEntityClassInternal(void)::g_EntityCVGuiScreenClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CVGuiScreen::GetEntityClassInternal(void)::g_EntityCVGuiScreenClass.m_classInputs.m_Size = 0;
    CVGuiScreen::GetEntityClassInternal(void)::g_EntityCVGuiScreenClass.m_classInputs.m_Memory.m_pMemory = 0;
    CVGuiScreen::GetEntityClassInternal(void)::g_EntityCVGuiScreenClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CVGuiScreen::GetEntityClassInternal(void)::g_EntityCVGuiScreenClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CVGuiScreen::GetEntityClassInternal(void)::g_EntityCVGuiScreenClass.m_classOutputs.m_Size = 0;
    CVGuiScreen::GetEntityClassInternal(void)::g_EntityCVGuiScreenClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CVGuiScreen::GetEntityClassInternal(void)::g_EntityCVGuiScreenClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CVGuiScreen::GetEntityClassInternal(void)::g_EntityCVGuiScreenClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CVGuiScreen::GetEntityClassInternal(void)::g_EntityCVGuiScreenClass.m_requiredEHandle.m_Index = -1;
    CVGuiScreen::GetEntityClassInternal(void)::g_EntityCVGuiScreenClass.m_hNetworkSerializer = 0;
    CVGuiScreen::GetEntityClassInternal(void)::g_EntityCVGuiScreenClass.m_pBaseClassInfo = 0;
    CVGuiScreen::GetEntityClassInternal(void)::g_EntityCVGuiScreenClass.m_pClassInfo = 0;
    CVGuiScreen::GetEntityClassInternal(void)::g_EntityCVGuiScreenClass.m_flags = 0;
    CVGuiScreen::GetEntityClassInternal(void)::g_EntityCVGuiScreenClass.m_nAllHelpersFlags = 0;
    CVGuiScreen::GetEntityClassInternal(void)::g_EntityCVGuiScreenClass.m_pScriptClassDesc = 0;
    CVGuiScreen::GetEntityClassInternal(void)::g_EntityCVGuiScreenClass.m_pInputs = 0;
    CVGuiScreen::GetEntityClassInternal(void)::g_EntityCVGuiScreenClass.m_nInputCount = 0;
    CVGuiScreen::GetEntityClassInternal(void)::g_EntityCVGuiScreenClass.m_pOutputs = 0;
    CVGuiScreen::GetEntityClassInternal(void)::g_EntityCVGuiScreenClass.m_nOutputCount = 0;
    CVGuiScreen::GetEntityClassInternal(void)::g_EntityCVGuiScreenClass.m_pGameClass = 0;
    CVGuiScreen::GetEntityClassInternal(void)::g_EntityCVGuiScreenClass._vptr_CEntityClass = off_3FE4C10;
    __cxa_guard_release(&`guard variable for'CVGuiScreen::GetEntityClassInternal(void)::g_EntityCVGuiScreenClass);
    __cxa_atexit(
      CVGuiScreen::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CVGuiScreen::GetEntityClassInternal(void)::g_EntityCVGuiScreenClass,
      &_dso_handle);
  }
  if ( g_pEntityCVGuiScreenClass != 0 )
    return &CVGuiScreen::GetEntityClassInternal(void)::g_EntityCVGuiScreenClass;
  if ( `guard variable for'CVGuiScreen::GetEntityClassInfo(void)::g_EntityCVGuiScreenClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CVGuiScreen::GetEntityClassInfo(void)::g_EntityCVGuiScreenClassInfo) != 0 )
  {
    EntityClassInfo = CBaseModelEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CVGuiScreen::GetEntityClassInfo(void)::g_EntityCVGuiScreenClassInfo,
      "CVGuiScreen",
      "vgui_screen",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CVGuiScreen::GetEntityClassInfo(void)::g_EntityCVGuiScreenClassInfo);
  }
  CVGuiScreen::GetEntityClassInternal(void)::g_EntityCVGuiScreenClass.m_pClassInfo = &CVGuiScreen::GetEntityClassInfo(void)::g_EntityCVGuiScreenClassInfo;
  CVGuiScreen::GetEntityClassInternal(void)::g_EntityCVGuiScreenClass.m_pBaseClassInfo = CVGuiScreen::GetEntityClassInfo(void)::g_EntityCVGuiScreenClassInfo.m_pBaseClassInfo;
  g_pEntityCVGuiScreenClass = &CVGuiScreen::GetEntityClassInternal(void)::g_EntityCVGuiScreenClass;
  CVGuiScreen::GetEntityClassInfo(void)::g_EntityCVGuiScreenClassInfo.m_pClass = &CVGuiScreen::GetEntityClassInternal(void)::g_EntityCVGuiScreenClass;
  CVGuiScreen::GetEntityClassInternal(void)::g_EntityCVGuiScreenClass.m_pScriptClassDesc = CBaseModelEntity::InitScriptDesc();
  g_pEntityCVGuiScreenClass->m_pComponentOverrides = 0;
  return &CVGuiScreen::GetEntityClassInternal(void)::g_EntityCVGuiScreenClass;
}


// CVGuiScreen::GetEntityClass  (line 19, @0x0000000002410440, libserver.so)
CEntityClass *__cdecl CVGuiScreen::GetEntityClass()
{
  return g_pEntityCVGuiScreenClass;
}


// CVGuiScreen::Schema_DynamicBinding  (line 19, @0x0000000002410c50, libserver.so)
// calls: CVGuiScreen::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CVGuiScreen::Schema_DynamicBinding(const CVGuiScreen *const this)
{
  CVGuiScreen::Schema_VerifyBindingIsRegistered();
  return CVGuiScreen::s_pSchemaBinding;
}


