
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CFogVolume::GetEntityClass  (line 20, @0x0000000002ec4890, libserver.so)
CEntityClass *__cdecl CFogVolume::GetEntityClass()
{
  return g_pEntityCFogVolumeClass;
}


// CFogVolume::Schema_DynamicBinding  (line 20, @0x0000000002ec48a0, libserver.so)
// globals: CFogVolume::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CFogVolume::Schema_DynamicBinding(const CFogVolume *const this)
{
  return CFogVolume::s_pSchemaBinding;
}


// CFogVolume::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 20, @0x0000000002ec48b0, libserver.so)
// globals: CFogVolume::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CFogVolume::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CFogVolume::CEntityInstanceEntityClass *const this)
{
  return CFogVolume::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CFogVolume::CEntityInstanceEntityClass::DestructInstance  (line 20, @0x0000000002ec48c0, libserver.so)  // inlines: Destruct<CFogVolume>
void __fastcall CFogVolume::CEntityInstanceEntityClass::DestructInstance(
        CFogVolume::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CFogVolume::CEntityInstanceEntityClass::FreeInstance  (line 20, @0x0000000002ec48e0, libserver.so)
void __fastcall CFogVolume::CEntityInstanceEntityClass::FreeInstance(
        CFogVolume::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CFogVolume::CEntityInstanceEntityClass::CanAllocate  (line 20, @0x0000000002ec4900, libserver.so)
bool __fastcall CFogVolume::CEntityInstanceEntityClass::CanAllocate(
        const CFogVolume::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CFogVolume::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 20, @0x0000000002ec4910, libserver.so)
// globals: CFogVolume::s_pSchemaBinding
const ISchemaBinding *__fastcall CFogVolume::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CFogVolume::CEntityInstanceEntityClass *const this)
{
  return CFogVolume::s_pSchemaBinding;
}


// CFogVolume::CEntityInstanceEntityClass::AllocateInstance  (line 20, @0x0000000002ec4aa0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CFogVolume::CEntityInstanceEntityClass::AllocateInstance(
        CFogVolume::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1192);
  memset(v1, 0, 0x4A8u);
  return v1;
}


// CFogVolume::CEntityInstanceEntityClass::ConstructInstance  (line 20, @0x0000000002ec4ae0, libserver.so)  // inlines: CEntityHandle, CFogVolume, CHandle, CServerOnlyModelEntity, CUtlSymbolLarge, Construct<CFogVolume>
// calls: CBaseModelEntity::CBaseModelEntity
CEntityInstance *__fastcall CFogVolume::CEntityInstanceEntityClass::ConstructInstance(
        CFogVolume::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseModelEntity::CBaseModelEntity(p);
    *(p + 144) = 0;
    *p = &off_47ACF70;
    *(p + 145) = 0;
    *(p + 146) = 0;
    *(p + 294) = -1;
    *(p + 295) = -1;
    *(p + 296) = -1;
    *(p + 1188) = 0;
    *(p + 1189) = 0;
  }
  return p;
}


// CFogVolume::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 20, @0x0000000002ec4f30, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CFogVolume::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CFogVolume::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CFogVolume::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 20, @0x0000000002ec4f50, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CFogVolume::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CFogVolume::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CFogVolume::GetEntityClassInternal  (line 20, @0x0000000002ec5ec0, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseModelEntity::InitScriptDesc, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_misc_required_files_01.cpp
// strings: "fog_volume", "CFogVolume", "CServerOnlyModelEntity", "basemodelentity", "CBaseModelEntity", "CBaseEntity" (7 total)
// globals: `guard variable for'CFogVolume::GetEntityClassInternal(void)::g_EntityCFogVolumeClass, CFogVolume::GetEntityClassInternal(void)::g_EntityCFogVolumeClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CFogVolume::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CFogVolume::GetEntityClassInfo(void)::g_EntityCFogVolumeClassInfo, CFogVolume::GetEntityClassInfo(void)::g_EntityCFogVolumeClassInfo, `guard variable for'CServerOnlyModelEntity::GetEntityClassInfo(void)::g_EntityCServerOnlyModelEntityClassInfo (15 total)
CEntityClass *__cdecl CFogVolume::GetEntityClassInternal()
{
  if ( `guard variable for'CFogVolume::GetEntityClassInternal(void)::g_EntityCFogVolumeClass == 0
    && __cxa_guard_acquire(&`guard variable for'CFogVolume::GetEntityClassInternal(void)::g_EntityCFogVolumeClass) != 0 )
  {
    CFogVolume::GetEntityClassInternal(void)::g_EntityCFogVolumeClass.m_designerName.u.m_Id = 0;
    CFogVolume::GetEntityClassInternal(void)::g_EntityCFogVolumeClass._vptr_CEntityClass = off_3F79390;
    CFogVolume::GetEntityClassInternal(void)::g_EntityCFogVolumeClass.m_ComponentOffsets.m_Size = 0;
    CFogVolume::GetEntityClassInternal(void)::g_EntityCFogVolumeClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CFogVolume::GetEntityClassInternal(void)::g_EntityCFogVolumeClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CFogVolume::GetEntityClassInternal(void)::g_EntityCFogVolumeClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CFogVolume::GetEntityClassInternal(void)::g_EntityCFogVolumeClass.m_AllHelpers.m_Size = 0;
    CFogVolume::GetEntityClassInternal(void)::g_EntityCFogVolumeClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CFogVolume::GetEntityClassInternal(void)::g_EntityCFogVolumeClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CFogVolume::GetEntityClassInternal(void)::g_EntityCFogVolumeClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CFogVolume::GetEntityClassInternal(void)::g_EntityCFogVolumeClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CFogVolume::GetEntityClassInternal(void)::g_EntityCFogVolumeClass.m_instanceUnserializer.m_atomicFields,
      4);
    CFogVolume::GetEntityClassInternal(void)::g_EntityCFogVolumeClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CFogVolume::GetEntityClassInternal(void)::g_EntityCFogVolumeClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CFogVolume::GetEntityClassInternal(void)::g_EntityCFogVolumeClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CFogVolume::GetEntityClassInternal(void)::g_EntityCFogVolumeClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CFogVolume::GetEntityClassInternal(void)::g_EntityCFogVolumeClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CFogVolume::GetEntityClassInternal(void)::g_EntityCFogVolumeClass;
    CFogVolume::GetEntityClassInternal(void)::g_EntityCFogVolumeClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CFogVolume::GetEntityClassInternal(void)::g_EntityCFogVolumeClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CFogVolume::GetEntityClassInternal(void)::g_EntityCFogVolumeClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CFogVolume::GetEntityClassInternal(void)::g_EntityCFogVolumeClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CFogVolume::GetEntityClassInternal(void)::g_EntityCFogVolumeClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CFogVolume::GetEntityClassInternal(void)::g_EntityCFogVolumeClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CFogVolume::GetEntityClassInternal(void)::g_EntityCFogVolumeClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CFogVolume::GetEntityClassInternal(void)::g_EntityCFogVolumeClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CFogVolume::GetEntityClassInternal(void)::g_EntityCFogVolumeClass.m_classInputs.m_Size = 0;
    CFogVolume::GetEntityClassInternal(void)::g_EntityCFogVolumeClass.m_classInputs.m_Memory.m_pMemory = 0;
    CFogVolume::GetEntityClassInternal(void)::g_EntityCFogVolumeClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CFogVolume::GetEntityClassInternal(void)::g_EntityCFogVolumeClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CFogVolume::GetEntityClassInternal(void)::g_EntityCFogVolumeClass.m_classOutputs.m_Size = 0;
    CFogVolume::GetEntityClassInternal(void)::g_EntityCFogVolumeClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CFogVolume::GetEntityClassInternal(void)::g_EntityCFogVolumeClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CFogVolume::GetEntityClassInternal(void)::g_EntityCFogVolumeClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CFogVolume::GetEntityClassInternal(void)::g_EntityCFogVolumeClass.m_requiredEHandle.m_Index = -1;
    CFogVolume::GetEntityClassInternal(void)::g_EntityCFogVolumeClass.m_hNetworkSerializer = 0;
    CFogVolume::GetEntityClassInternal(void)::g_EntityCFogVolumeClass.m_pBaseClassInfo = 0;
    CFogVolume::GetEntityClassInternal(void)::g_EntityCFogVolumeClass.m_pClassInfo = 0;
    CFogVolume::GetEntityClassInternal(void)::g_EntityCFogVolumeClass.m_flags = 0;
    CFogVolume::GetEntityClassInternal(void)::g_EntityCFogVolumeClass.m_nAllHelpersFlags = 0;
    CFogVolume::GetEntityClassInternal(void)::g_EntityCFogVolumeClass.m_pScriptClassDesc = 0;
    CFogVolume::GetEntityClassInternal(void)::g_EntityCFogVolumeClass.m_pInputs = 0;
    CFogVolume::GetEntityClassInternal(void)::g_EntityCFogVolumeClass.m_nInputCount = 0;
    CFogVolume::GetEntityClassInternal(void)::g_EntityCFogVolumeClass.m_pOutputs = 0;
    CFogVolume::GetEntityClassInternal(void)::g_EntityCFogVolumeClass.m_nOutputCount = 0;
    CFogVolume::GetEntityClassInternal(void)::g_EntityCFogVolumeClass.m_pGameClass = 0;
    CFogVolume::GetEntityClassInternal(void)::g_EntityCFogVolumeClass._vptr_CEntityClass = off_47ACEF0;
    __cxa_guard_release(&`guard variable for'CFogVolume::GetEntityClassInternal(void)::g_EntityCFogVolumeClass);
    __cxa_atexit(
      CFogVolume::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CFogVolume::GetEntityClassInternal(void)::g_EntityCFogVolumeClass,
      &_dso_handle);
  }
  if ( g_pEntityCFogVolumeClass != 0 )
    return &CFogVolume::GetEntityClassInternal(void)::g_EntityCFogVolumeClass;
  if ( `guard variable for'CFogVolume::GetEntityClassInfo(void)::g_EntityCFogVolumeClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CFogVolume::GetEntityClassInfo(void)::g_EntityCFogVolumeClassInfo) != 0 )
  {
    if ( `guard variable for'CServerOnlyModelEntity::GetEntityClassInfo(void)::g_EntityCServerOnlyModelEntityClassInfo == 0
      && __cxa_guard_acquire(&`guard variable for'CServerOnlyModelEntity::GetEntityClassInfo(void)::g_EntityCServerOnlyModelEntityClassInfo) != 0 )
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
        &CServerOnlyModelEntity::GetEntityClassInfo(void)::g_EntityCServerOnlyModelEntityClassInfo,
        "CServerOnlyModelEntity",
        0,
        0,
        &CBaseModelEntity::GetEntityClassInfo(void)::g_EntityCBaseModelEntityClassInfo);
      __cxa_guard_release(&`guard variable for'CServerOnlyModelEntity::GetEntityClassInfo(void)::g_EntityCServerOnlyModelEntityClassInfo);
    }
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CFogVolume::GetEntityClassInfo(void)::g_EntityCFogVolumeClassInfo,
      "CFogVolume",
      "fog_volume",
      0,
      &CServerOnlyModelEntity::GetEntityClassInfo(void)::g_EntityCServerOnlyModelEntityClassInfo);
    __cxa_guard_release(&`guard variable for'CFogVolume::GetEntityClassInfo(void)::g_EntityCFogVolumeClassInfo);
  }
  CFogVolume::GetEntityClassInternal(void)::g_EntityCFogVolumeClass.m_pClassInfo = &CFogVolume::GetEntityClassInfo(void)::g_EntityCFogVolumeClassInfo;
  CFogVolume::GetEntityClassInternal(void)::g_EntityCFogVolumeClass.m_pBaseClassInfo = CFogVolume::GetEntityClassInfo(void)::g_EntityCFogVolumeClassInfo.m_pBaseClassInfo;
  g_pEntityCFogVolumeClass = &CFogVolume::GetEntityClassInternal(void)::g_EntityCFogVolumeClass;
  CFogVolume::GetEntityClassInfo(void)::g_EntityCFogVolumeClassInfo.m_pClass = &CFogVolume::GetEntityClassInternal(void)::g_EntityCFogVolumeClass;
  CFogVolume::GetEntityClassInternal(void)::g_EntityCFogVolumeClass.m_pScriptClassDesc = CBaseModelEntity::InitScriptDesc();
  g_pEntityCFogVolumeClass->m_pComponentOverrides = 0;
  return &CFogVolume::GetEntityClassInternal(void)::g_EntityCFogVolumeClass;
}


