
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CEconEntity::CEntityInstanceEntityClass::DestructInstance  (line 34, @0x0000000002a601f0, libserver.so)  // inlines: Destruct<CEconEntity>
void __fastcall CEconEntity::CEntityInstanceEntityClass::DestructInstance(
        CEconEntity::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CEconEntity::CEntityInstanceEntityClass::FreeInstance  (line 34, @0x0000000002a60210, libserver.so)
void __fastcall CEconEntity::CEntityInstanceEntityClass::FreeInstance(
        CEconEntity::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CEconEntity::CEntityInstanceEntityClass::CanAllocate  (line 34, @0x0000000002a60230, libserver.so)
bool __fastcall CEconEntity::CEntityInstanceEntityClass::CanAllocate(
        const CEconEntity::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CEconEntity::CEntityInstanceEntityClass::AllocateInstance  (line 34, @0x0000000002a63a70, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CEconEntity::CEntityInstanceEntityClass::AllocateInstance(
        CEconEntity::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1696);
  memset(v1, 0, 0x6A0u);
  return v1;
}


// CEconEntity::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 34, @0x0000000002a647f0, libserver.so)  // inlines: Schema_StaticBinding
// calls: CEconEntity::Schema_VerifyBindingIsRegistered
const ISchemaBinding *__fastcall CEconEntity::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CEconEntity::CEntityInstanceEntityClass *const this)
{
  CEconEntity::Schema_VerifyBindingIsRegistered();
  return CEconEntity::s_pSchemaBinding;
}


// CEconEntity::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 34, @0x0000000002a64810, libserver.so)
// calls: CEconEntity::CEntityInstanceEntityClass::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CEconEntity::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CEconEntity::CEntityInstanceEntityClass *const this)
{
  CEconEntity::CEntityInstanceEntityClass::Schema_VerifyBindingIsRegistered();
  return CEconEntity::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CEconEntity::CEntityInstanceEntityClass::ConstructInstance  (line 34, @0x0000000002a64830, libserver.so)  // inlines: Construct<CEconEntity>
// calls: CEconEntity::CEconEntity
CEntityInstance *__fastcall CEconEntity::CEntityInstanceEntityClass::ConstructInstance(
        CEconEntity::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
    CEconEntity::CEconEntity(p);
  return p;
}


// CEconEntity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 34, @0x0000000002a6a730, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CEconEntity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CEconEntity::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CEconEntity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 34, @0x0000000002a6a750, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CEconEntity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CEconEntity::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CEconEntity::GetEntityClass  (line 34, @0x0000000002e4ece0, libserver.so)
CEntityClass *__cdecl CEconEntity::GetEntityClass()
{
  return g_pEntityCEconEntityClass;
}


// CEconEntity::Schema_DynamicBinding  (line 34, @0x0000000002e4ecf0, libserver.so)
// globals: CEconEntity::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CEconEntity::Schema_DynamicBinding(const CEconEntity *const this)
{
  return CEconEntity::s_pSchemaBinding;
}


// CEconEntity::GetEntityClassInfo  (line 34, @0x0000000002e56d50, libserver.so)  // inlines: GetEntityClassInfo
// calls: __cxa_guard_acquire, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_release, CBaseAnimating::GetEntityClassInfo
// callers: CDOTAWearableItem::GetEntityClassInternal, CBaseAttributableItem::GetEntityClassInternal
// strings: "CEconEntity", "baseanimating_overlay", "CBaseAnimatingOverlay"
// globals: `guard variable for'CEconEntity::GetEntityClassInfo(void)::g_EntityCEconEntityClassInfo, CEconEntity::GetEntityClassInfo(void)::g_EntityCEconEntityClassInfo, `guard variable for'CBaseFlex::GetEntityClassInfo(void)::g_EntityCBaseFlexClassInfo, CBaseFlex::GetEntityClassInfo(void)::g_EntityCBaseFlexClassInfo, `guard variable for'CBaseAnimatingOverlay::GetEntityClassInfo(void)::g_EntityCBaseAnimatingOverlayClassInfo, CBaseAnimatingOverlay::GetEntityClassInfo(void)::g_EntityCBaseAnimatingOverlayClassInfo
CEntityClassInfo *__cdecl CEconEntity::GetEntityClassInfo()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CEconEntity::GetEntityClassInfo(void)::g_EntityCEconEntityClassInfo != 0 )
    return &CEconEntity::GetEntityClassInfo(void)::g_EntityCEconEntityClassInfo;
  if ( __cxa_guard_acquire(&`guard variable for'CEconEntity::GetEntityClassInfo(void)::g_EntityCEconEntityClassInfo) == 0 )
    return &CEconEntity::GetEntityClassInfo(void)::g_EntityCEconEntityClassInfo;
  if ( `guard variable for'CBaseFlex::GetEntityClassInfo(void)::g_EntityCBaseFlexClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CBaseFlex::GetEntityClassInfo(void)::g_EntityCBaseFlexClassInfo) != 0 )
  {
    if ( `guard variable for'CBaseAnimatingOverlay::GetEntityClassInfo(void)::g_EntityCBaseAnimatingOverlayClassInfo == 0
      && __cxa_guard_acquire(&`guard variable for'CBaseAnimatingOverlay::GetEntityClassInfo(void)::g_EntityCBaseAnimatingOverlayClassInfo) != 0 )
    {
      EntityClassInfo = CBaseAnimating::GetEntityClassInfo();
      CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
        &CBaseAnimatingOverlay::GetEntityClassInfo(void)::g_EntityCBaseAnimatingOverlayClassInfo,
        "CBaseAnimatingOverlay",
        "baseanimating_overlay",
        0,
        EntityClassInfo);
      __cxa_guard_release(&`guard variable for'CBaseAnimatingOverlay::GetEntityClassInfo(void)::g_EntityCBaseAnimatingOverlayClassInfo);
    }
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CBaseFlex::GetEntityClassInfo(void)::g_EntityCBaseFlexClassInfo,
      "CBaseFlex",
      0,
      0,
      &CBaseAnimatingOverlay::GetEntityClassInfo(void)::g_EntityCBaseAnimatingOverlayClassInfo);
    __cxa_guard_release(&`guard variable for'CBaseFlex::GetEntityClassInfo(void)::g_EntityCBaseFlexClassInfo);
  }
  CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
    &CEconEntity::GetEntityClassInfo(void)::g_EntityCEconEntityClassInfo,
    "CEconEntity",
    0,
    0,
    &CBaseFlex::GetEntityClassInfo(void)::g_EntityCBaseFlexClassInfo);
  __cxa_guard_release(&`guard variable for'CEconEntity::GetEntityClassInfo(void)::g_EntityCEconEntityClassInfo);
  return &CEconEntity::GetEntityClassInfo(void)::g_EntityCEconEntityClassInfo;
}


// CEconEntity::GetEntityClassInternal  (line 34, @0x0000000002e5c8d0, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseFlex::InitScriptDesc, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CBaseAnimating::GetEntityClassInfo, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: __static_initialization_and_destruction_0
// strings: "CEconEntity", "baseanimating_overlay", "CBaseAnimatingOverlay"
// globals: `guard variable for'CEconEntity::GetEntityClassInternal(void)::g_EntityCEconEntityClass, CEconEntity::GetEntityClassInternal(void)::g_EntityCEconEntityClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CEconEntity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CEconEntity::GetEntityClassInfo(void)::g_EntityCEconEntityClassInfo, CEconEntity::GetEntityClassInfo(void)::g_EntityCEconEntityClassInfo, `guard variable for'CBaseFlex::GetEntityClassInfo(void)::g_EntityCBaseFlexClassInfo (11 total)
CEntityClass *__cdecl CEconEntity::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CEconEntity::GetEntityClassInternal(void)::g_EntityCEconEntityClass == 0
    && __cxa_guard_acquire(&`guard variable for'CEconEntity::GetEntityClassInternal(void)::g_EntityCEconEntityClass) != 0 )
  {
    CEconEntity::GetEntityClassInternal(void)::g_EntityCEconEntityClass.m_designerName.u.m_Id = 0;
    CEconEntity::GetEntityClassInternal(void)::g_EntityCEconEntityClass._vptr_CEntityClass = off_3F79390;
    CEconEntity::GetEntityClassInternal(void)::g_EntityCEconEntityClass.m_ComponentOffsets.m_Size = 0;
    CEconEntity::GetEntityClassInternal(void)::g_EntityCEconEntityClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CEconEntity::GetEntityClassInternal(void)::g_EntityCEconEntityClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CEconEntity::GetEntityClassInternal(void)::g_EntityCEconEntityClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CEconEntity::GetEntityClassInternal(void)::g_EntityCEconEntityClass.m_AllHelpers.m_Size = 0;
    CEconEntity::GetEntityClassInternal(void)::g_EntityCEconEntityClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CEconEntity::GetEntityClassInternal(void)::g_EntityCEconEntityClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CEconEntity::GetEntityClassInternal(void)::g_EntityCEconEntityClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CEconEntity::GetEntityClassInternal(void)::g_EntityCEconEntityClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CEconEntity::GetEntityClassInternal(void)::g_EntityCEconEntityClass.m_instanceUnserializer.m_atomicFields,
      4);
    CEconEntity::GetEntityClassInternal(void)::g_EntityCEconEntityClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CEconEntity::GetEntityClassInternal(void)::g_EntityCEconEntityClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CEconEntity::GetEntityClassInternal(void)::g_EntityCEconEntityClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CEconEntity::GetEntityClassInternal(void)::g_EntityCEconEntityClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CEconEntity::GetEntityClassInternal(void)::g_EntityCEconEntityClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CEconEntity::GetEntityClassInternal(void)::g_EntityCEconEntityClass;
    CEconEntity::GetEntityClassInternal(void)::g_EntityCEconEntityClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CEconEntity::GetEntityClassInternal(void)::g_EntityCEconEntityClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CEconEntity::GetEntityClassInternal(void)::g_EntityCEconEntityClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CEconEntity::GetEntityClassInternal(void)::g_EntityCEconEntityClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CEconEntity::GetEntityClassInternal(void)::g_EntityCEconEntityClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CEconEntity::GetEntityClassInternal(void)::g_EntityCEconEntityClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CEconEntity::GetEntityClassInternal(void)::g_EntityCEconEntityClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CEconEntity::GetEntityClassInternal(void)::g_EntityCEconEntityClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CEconEntity::GetEntityClassInternal(void)::g_EntityCEconEntityClass.m_classInputs.m_Size = 0;
    CEconEntity::GetEntityClassInternal(void)::g_EntityCEconEntityClass.m_classInputs.m_Memory.m_pMemory = 0;
    CEconEntity::GetEntityClassInternal(void)::g_EntityCEconEntityClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CEconEntity::GetEntityClassInternal(void)::g_EntityCEconEntityClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CEconEntity::GetEntityClassInternal(void)::g_EntityCEconEntityClass.m_classOutputs.m_Size = 0;
    CEconEntity::GetEntityClassInternal(void)::g_EntityCEconEntityClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CEconEntity::GetEntityClassInternal(void)::g_EntityCEconEntityClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CEconEntity::GetEntityClassInternal(void)::g_EntityCEconEntityClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CEconEntity::GetEntityClassInternal(void)::g_EntityCEconEntityClass.m_requiredEHandle.m_Index = -1;
    CEconEntity::GetEntityClassInternal(void)::g_EntityCEconEntityClass.m_hNetworkSerializer = 0;
    CEconEntity::GetEntityClassInternal(void)::g_EntityCEconEntityClass.m_pBaseClassInfo = 0;
    CEconEntity::GetEntityClassInternal(void)::g_EntityCEconEntityClass.m_pClassInfo = 0;
    CEconEntity::GetEntityClassInternal(void)::g_EntityCEconEntityClass.m_flags = 0;
    CEconEntity::GetEntityClassInternal(void)::g_EntityCEconEntityClass.m_nAllHelpersFlags = 0;
    CEconEntity::GetEntityClassInternal(void)::g_EntityCEconEntityClass.m_pScriptClassDesc = 0;
    CEconEntity::GetEntityClassInternal(void)::g_EntityCEconEntityClass.m_pInputs = 0;
    CEconEntity::GetEntityClassInternal(void)::g_EntityCEconEntityClass.m_nInputCount = 0;
    CEconEntity::GetEntityClassInternal(void)::g_EntityCEconEntityClass.m_pOutputs = 0;
    CEconEntity::GetEntityClassInternal(void)::g_EntityCEconEntityClass.m_nOutputCount = 0;
    CEconEntity::GetEntityClassInternal(void)::g_EntityCEconEntityClass.m_pGameClass = 0;
    CEconEntity::GetEntityClassInternal(void)::g_EntityCEconEntityClass._vptr_CEntityClass = off_438EB70;
    __cxa_guard_release(&`guard variable for'CEconEntity::GetEntityClassInternal(void)::g_EntityCEconEntityClass);
    __cxa_atexit(
      CEconEntity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CEconEntity::GetEntityClassInternal(void)::g_EntityCEconEntityClass,
      &_dso_handle);
  }
  if ( g_pEntityCEconEntityClass != 0 )
    return &CEconEntity::GetEntityClassInternal(void)::g_EntityCEconEntityClass;
  if ( `guard variable for'CEconEntity::GetEntityClassInfo(void)::g_EntityCEconEntityClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CEconEntity::GetEntityClassInfo(void)::g_EntityCEconEntityClassInfo) != 0 )
  {
    if ( `guard variable for'CBaseFlex::GetEntityClassInfo(void)::g_EntityCBaseFlexClassInfo == 0
      && __cxa_guard_acquire(&`guard variable for'CBaseFlex::GetEntityClassInfo(void)::g_EntityCBaseFlexClassInfo) != 0 )
    {
      if ( `guard variable for'CBaseAnimatingOverlay::GetEntityClassInfo(void)::g_EntityCBaseAnimatingOverlayClassInfo == 0
        && __cxa_guard_acquire(&`guard variable for'CBaseAnimatingOverlay::GetEntityClassInfo(void)::g_EntityCBaseAnimatingOverlayClassInfo) != 0 )
      {
        EntityClassInfo = CBaseAnimating::GetEntityClassInfo();
        CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
          &CBaseAnimatingOverlay::GetEntityClassInfo(void)::g_EntityCBaseAnimatingOverlayClassInfo,
          "CBaseAnimatingOverlay",
          "baseanimating_overlay",
          0,
          EntityClassInfo);
        __cxa_guard_release(&`guard variable for'CBaseAnimatingOverlay::GetEntityClassInfo(void)::g_EntityCBaseAnimatingOverlayClassInfo);
      }
      CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
        &CBaseFlex::GetEntityClassInfo(void)::g_EntityCBaseFlexClassInfo,
        "CBaseFlex",
        0,
        0,
        &CBaseAnimatingOverlay::GetEntityClassInfo(void)::g_EntityCBaseAnimatingOverlayClassInfo);
      __cxa_guard_release(&`guard variable for'CBaseFlex::GetEntityClassInfo(void)::g_EntityCBaseFlexClassInfo);
    }
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CEconEntity::GetEntityClassInfo(void)::g_EntityCEconEntityClassInfo,
      "CEconEntity",
      0,
      0,
      &CBaseFlex::GetEntityClassInfo(void)::g_EntityCBaseFlexClassInfo);
    __cxa_guard_release(&`guard variable for'CEconEntity::GetEntityClassInfo(void)::g_EntityCEconEntityClassInfo);
  }
  CEconEntity::GetEntityClassInternal(void)::g_EntityCEconEntityClass.m_pClassInfo = &CEconEntity::GetEntityClassInfo(void)::g_EntityCEconEntityClassInfo;
  CEconEntity::GetEntityClassInternal(void)::g_EntityCEconEntityClass.m_pBaseClassInfo = CEconEntity::GetEntityClassInfo(void)::g_EntityCEconEntityClassInfo.m_pBaseClassInfo;
  g_pEntityCEconEntityClass = &CEconEntity::GetEntityClassInternal(void)::g_EntityCEconEntityClass;
  CEconEntity::GetEntityClassInfo(void)::g_EntityCEconEntityClassInfo.m_pClass = &CEconEntity::GetEntityClassInternal(void)::g_EntityCEconEntityClass;
  CEconEntity::GetEntityClassInternal(void)::g_EntityCEconEntityClass.m_pScriptClassDesc = CBaseFlex::InitScriptDesc();
  g_pEntityCEconEntityClass->m_pComponentOverrides = 0;
  return &CEconEntity::GetEntityClassInternal(void)::g_EntityCEconEntityClass;
}


// CEconEntity::GiveTo  (line 51, @0x0000000002e4ed10, libserver.so)
void __fastcall CEconEntity::GiveTo(CEconEntity *const this, CBaseEntity *pOther)
{
  ;
}


// CEconEntity::GetAttributeManager  (line 123, @0x0000000002a60240, libserver.so)
CAttributeManager *__fastcall CEconEntity::GetAttributeManager(CEconEntity *const this)
{
  return &this->m_AttributeManager;
}


// CEconEntity::GetAttributeContainer  (line 124, @0x0000000002a60260, libserver.so)
CAttributeContainer *__fastcall CEconEntity::GetAttributeContainer(CEconEntity *const this)
{
  return &this->m_AttributeManager;
}


// CEconEntity::GetAttributeOwner  (line 126, @0x0000000002a6a470, libserver.so)  // inlines: CEntityHandle, Get, GetEntryIndex, GetHandleEntity, GetInstance, GetOwnerEntity, GetSerialNumber, IndexToIdentity, Init, LookupEntity
CBaseEntity *__fastcall CEconEntity::GetAttributeOwner(CEconEntity *const this)
{
  unsigned __int16 v1; // dx
  int v2; // esi
  uint32 v3; // edx
  CBaseEntity *result; // rax
  CEntityIdentity *v5; // rcx
  CEntityIdentity *v6; // rcx

  if ( this->m_hOwnerEntity.m_Value.m_Index == -1 )
  {
    v1 = 0x7FFF;
    v2 = 0x7FFF;
  }
  else
  {
    v1 = this->m_hOwnerEntity.m_Value.m_Index & 0x7FFF;
    v2 = v1;
  }
  v3 = (this->m_hOwnerEntity.m_Value.m_Index >> 15 << 15) | v1 & 0x7FFF;
  result = 0;
  if ( v3 + 2 > 1 )
  {
    v5 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v2 >> 9];
    if ( v5 != 0 )
    {
      v6 = &v5[v2 & 0x1FF];
      if ( v6 != 0 && v3 == v6->m_EHandle.m_Index )
        return v6->m_pInstance;
    }
  }
  return result;
}


// CEconEntity::GetAttributeList  (line 127, @0x0000000002a60280, libserver.so)
CAttributeList *__fastcall CEconEntity::GetAttributeList(CEconEntity *const this)
{
  return &this->m_AttributeManager.m_Item.m_AttributeList;
}


// CEconEntity::TranslateViewmodelHandActivityInternal  (line 136, @0x0000000002a602a0, libserver.so)
Activity __fastcall CEconEntity::TranslateViewmodelHandActivityInternal(CEconEntity *const this, Activity actBase)
{
  return actBase;
}


// CEconEntity::NetworkVar_m_AttributeManager::NetworkStateChanged  (line 150, @0x0000000002e4ed20, libserver.so)  // inlines: DispatchNetworkStateChanged<CEconEntity>
void __fastcall CEconEntity::NetworkVar_m_AttributeManager::NetworkStateChanged(
        CEconEntity::NetworkVar_m_AttributeManager *const this)
{
  (*(*(this - 171) + 168LL))(this - 1368);
}


// CEconEntity::NetworkVar_m_AttributeManager::NetworkStateChangedLog  (line 150, @0x0000000002e4ed40, libserver.so)  // inlines: DispatchNetworkStateChangedLog<CEconEntity>
void __fastcall CEconEntity::NetworkVar_m_AttributeManager::NetworkStateChangedLog(
        const CEconEntity::NetworkVar_m_AttributeManager *const this,
        const char *pVarName,
        const char *pMsg)
{
  (*(*(this - 171) + 184LL))(this - 1368, pVarName, pMsg);
}


// CEconEntity::NetworkVar_m_AttributeManager::NetworkStateChanged  (line 150, @0x0000000002e4ed60, libserver.so)  // inlines: DispatchNetworkStateChanged<CEconEntity>
void __fastcall CEconEntity::NetworkVar_m_AttributeManager::NetworkStateChanged(
        CEconEntity::NetworkVar_m_AttributeManager *const this,
        uint32 nLocalOffset,
        int32 nArrayIndex,
        ChangeAccessorFieldPathIndex_t nPathIndex)
{
  (*(*(this - 171) + 176LL))(this - 1368, nLocalOffset + 1368, nArrayIndex, nPathIndex.m_Value);
}


// CEconEntity::NetworkVar_m_AttributeManager::~NetworkVar_m_AttributeManager  (line 150, @0x0000000002e54250, libserver.so)  // inlines: Purge, RemoveAll, ~CAttributeContainer, ~CAttributeManager, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~NetworkVar_m_Item
// calls: CEconItemView::~CEconItemView, CUtlMemory<CAttributeManager::cached_attribute_float_t, int>::Purge, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CEconEntity::NetworkVar_m_AttributeManager::~NetworkVar_m_AttributeManager(
        CEconEntity::NetworkVar_m_AttributeManager *const this)
{
  bool v2; // zf

  this->_vptr_CAttributeManager = &off_479F550;
  this->m_Item._vptr_IEconItemInterface = &off_479F2B0;
  CEconItemView::~CEconItemView(&this->m_Item);
  v2 = (this->m_CachedResults.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_CAttributeManager = off_479F4D0;
  this->m_CachedResults.m_Size = 0;
  if ( !v2
    || (CUtlMemory<CAttributeManager::cached_attribute_float_t,int>::Purge(&this->m_CachedResults.m_Memory),
        (this->m_CachedResults.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    v2 = (this->m_Receivers.m_Memory.m_nGrowSize & 0xC0000000) == 0;
    this->m_Receivers.m_Size = 0;
    if ( !v2 )
      goto LABEL_3;
  }
  else
  {
    CUtlMemory<CAttributeManager::cached_attribute_float_t,int>::Purge(&this->m_CachedResults.m_Memory);
    v2 = (this->m_Receivers.m_Memory.m_nGrowSize & 0xC0000000) == 0;
    this->m_Receivers.m_Size = 0;
    if ( !v2 )
      goto LABEL_3;
  }
  CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_Receivers.m_Memory);
  if ( (this->m_Receivers.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_Receivers.m_Memory);
    v2 = (this->m_Providers.m_Memory.m_nGrowSize & 0xC0000000) == 0;
    this->m_Providers.m_Size = 0;
    if ( !v2 )
      return;
    goto LABEL_9;
  }
LABEL_3:
  v2 = (this->m_Providers.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_Providers.m_Size = 0;
  if ( !v2 )
    return;
LABEL_9:
  CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_Providers.m_Memory);
  if ( (this->m_Providers.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_Providers.m_Memory);
}


// CEconEntity::NetworkVar_m_AttributeManager::~NetworkVar_m_AttributeManager  (line 150, @0x0000000002e54340, libserver.so)  // inlines: Purge, RemoveAll, ~CAttributeContainer, ~CAttributeManager, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~NetworkVar_m_AttributeManager, ~NetworkVar_m_Item
// calls: CEconItemView::~CEconItemView, operator delete, CUtlMemory<CAttributeManager::cached_attribute_float_t, int>::Purge, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CEconEntity::NetworkVar_m_AttributeManager::~NetworkVar_m_AttributeManager(
        CEconEntity::NetworkVar_m_AttributeManager *const this)
{
  bool v2; // zf

  this->_vptr_CAttributeManager = &off_479F550;
  this->m_Item._vptr_IEconItemInterface = &off_479F2B0;
  CEconItemView::~CEconItemView(&this->m_Item);
  v2 = (this->m_CachedResults.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_CAttributeManager = off_479F4D0;
  this->m_CachedResults.m_Size = 0;
  if ( !v2
    || (CUtlMemory<CAttributeManager::cached_attribute_float_t,int>::Purge(&this->m_CachedResults.m_Memory),
        (this->m_CachedResults.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    v2 = (this->m_Receivers.m_Memory.m_nGrowSize & 0xC0000000) == 0;
    this->m_Receivers.m_Size = 0;
    if ( !v2 )
      goto LABEL_3;
  }
  else
  {
    CUtlMemory<CAttributeManager::cached_attribute_float_t,int>::Purge(&this->m_CachedResults.m_Memory);
    v2 = (this->m_Receivers.m_Memory.m_nGrowSize & 0xC0000000) == 0;
    this->m_Receivers.m_Size = 0;
    if ( !v2 )
      goto LABEL_3;
  }
  CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_Receivers.m_Memory);
  if ( (this->m_Receivers.m_Memory.m_nGrowSize & 0xC0000000) != 0 )
  {
LABEL_3:
    v2 = (this->m_Providers.m_Memory.m_nGrowSize & 0xC0000000) == 0;
    this->m_Providers.m_Size = 0;
    if ( v2 )
      goto LABEL_9;
LABEL_4:
    operator delete(this);
    return;
  }
  CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_Receivers.m_Memory);
  v2 = (this->m_Providers.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_Providers.m_Size = 0;
  if ( !v2 )
    goto LABEL_4;
LABEL_9:
  CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_Providers.m_Memory);
  if ( (this->m_Providers.m_Memory.m_nGrowSize & 0xC0000000) != 0 )
    goto LABEL_4;
  CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_Providers.m_Memory);
  operator delete(this);
}


// CBaseAttributableItem::~CBaseAttributableItem  (line 196, @0x0000000002e54fa0, libserver.so)  // inlines: Purge, RemoveAll, ~CAttributeContainer, ~CAttributeManager, ~CEconEntity, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~NetworkVar_m_AttributeManager, ~NetworkVar_m_Item
// calls: CEconItemView::~CEconItemView, CBaseFlex::~CBaseFlex, CUtlMemory<CAttributeManager::cached_attribute_float_t, int>::Purge, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CBaseAttributableItem::~CBaseAttributableItem(CBaseAttributableItem *const this)
{
  bool v2; // zf

  this->_vptr_IHandleEntity = &off_47A27D0;
  this->_vptr_IHasAttributes = off_47A3058;
  this->m_AttributeManager._vptr_CAttributeManager = &off_479F550;
  this->m_AttributeManager.m_Item._vptr_IEconItemInterface = &off_479F2B0;
  CEconItemView::~CEconItemView(&this->m_AttributeManager.m_Item);
  v2 = (this->m_AttributeManager.m_CachedResults.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_AttributeManager._vptr_CAttributeManager = off_479F4D0;
  this->m_AttributeManager.m_CachedResults.m_Size = 0;
  if ( v2 )
  {
    CUtlMemory<CAttributeManager::cached_attribute_float_t,int>::Purge(&this->m_AttributeManager.m_CachedResults.m_Memory);
    if ( (this->m_AttributeManager.m_CachedResults.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CAttributeManager::cached_attribute_float_t,int>::Purge(&this->m_AttributeManager.m_CachedResults.m_Memory);
  }
  v2 = (this->m_AttributeManager.m_Receivers.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_AttributeManager.m_Receivers.m_Size = 0;
  if ( v2 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_AttributeManager.m_Receivers.m_Memory);
    if ( (this->m_AttributeManager.m_Receivers.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_AttributeManager.m_Receivers.m_Memory);
  }
  v2 = (this->m_AttributeManager.m_Providers.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_AttributeManager.m_Providers.m_Size = 0;
  if ( !v2
    || (CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_AttributeManager.m_Providers.m_Memory),
        (this->m_AttributeManager.m_Providers.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    CBaseFlex::~CBaseFlex(this);
  }
  else
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_AttributeManager.m_Providers.m_Memory);
    CBaseFlex::~CBaseFlex(this);
  }
}


// CBaseAttributableItem::~CBaseAttributableItem  (line 196, @0x0000000002e55210, libserver.so)  // inlines: Purge, RemoveAll, ~CAttributeContainer, ~CAttributeManager, ~CBaseAttributableItem, ~CEconEntity, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~NetworkVar_m_AttributeManager, ~NetworkVar_m_Item
// calls: CEconItemView::~CEconItemView, CBaseFlex::~CBaseFlex, CBaseEntity::operator delete, CUtlMemory<CAttributeManager::cached_attribute_float_t, int>::Purge, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CBaseAttributableItem::~CBaseAttributableItem(CBaseAttributableItem *const this)
{
  bool v2; // zf

  this->_vptr_IHandleEntity = &off_47A27D0;
  this->_vptr_IHasAttributes = off_47A3058;
  this->m_AttributeManager._vptr_CAttributeManager = &off_479F550;
  this->m_AttributeManager.m_Item._vptr_IEconItemInterface = &off_479F2B0;
  CEconItemView::~CEconItemView(&this->m_AttributeManager.m_Item);
  v2 = (this->m_AttributeManager.m_CachedResults.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_AttributeManager._vptr_CAttributeManager = off_479F4D0;
  this->m_AttributeManager.m_CachedResults.m_Size = 0;
  if ( v2 )
  {
    CUtlMemory<CAttributeManager::cached_attribute_float_t,int>::Purge(&this->m_AttributeManager.m_CachedResults.m_Memory);
    if ( (this->m_AttributeManager.m_CachedResults.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CAttributeManager::cached_attribute_float_t,int>::Purge(&this->m_AttributeManager.m_CachedResults.m_Memory);
  }
  v2 = (this->m_AttributeManager.m_Receivers.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_AttributeManager.m_Receivers.m_Size = 0;
  if ( v2 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_AttributeManager.m_Receivers.m_Memory);
    if ( (this->m_AttributeManager.m_Receivers.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_AttributeManager.m_Receivers.m_Memory);
  }
  v2 = (this->m_AttributeManager.m_Providers.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_AttributeManager.m_Providers.m_Size = 0;
  if ( v2 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_AttributeManager.m_Providers.m_Memory);
    if ( (this->m_AttributeManager.m_Providers.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_AttributeManager.m_Providers.m_Memory);
  }
  CBaseFlex::~CBaseFlex(this);
  CBaseEntity::operator delete(this);
}


// CBaseAttributableItem::GetEntityClass  (line 198, @0x0000000002e4ed90, libserver.so)
CEntityClass *__cdecl CBaseAttributableItem::GetEntityClass()
{
  return g_pEntityCBaseAttributableItemClass;
}


// CBaseAttributableItem::Schema_DynamicBinding  (line 198, @0x0000000002e4eda0, libserver.so)
// globals: CBaseAttributableItem::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CBaseAttributableItem::Schema_DynamicBinding(
        const CBaseAttributableItem *const this)
{
  return CBaseAttributableItem::s_pSchemaBinding;
}


// CBaseAttributableItem::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 198, @0x0000000002e4edc0, libserver.so)
// globals: CBaseAttributableItem::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CBaseAttributableItem::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CBaseAttributableItem::CEntityInstanceEntityClass *const this)
{
  return CBaseAttributableItem::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CBaseAttributableItem::CEntityInstanceEntityClass::DestructInstance  (line 198, @0x0000000002e4edd0, libserver.so)  // inlines: Destruct<CBaseAttributableItem>
void __fastcall CBaseAttributableItem::CEntityInstanceEntityClass::DestructInstance(
        CBaseAttributableItem::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CBaseAttributableItem::CEntityInstanceEntityClass::FreeInstance  (line 198, @0x0000000002e4edf0, libserver.so)
void __fastcall CBaseAttributableItem::CEntityInstanceEntityClass::FreeInstance(
        CBaseAttributableItem::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CBaseAttributableItem::CEntityInstanceEntityClass::CanAllocate  (line 198, @0x0000000002e4ee10, libserver.so)
bool __fastcall CBaseAttributableItem::CEntityInstanceEntityClass::CanAllocate(
        const CBaseAttributableItem::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CBaseAttributableItem::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 198, @0x0000000002e4ee20, libserver.so)
// globals: CBaseAttributableItem::s_pSchemaBinding
const ISchemaBinding *__fastcall CBaseAttributableItem::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CBaseAttributableItem::CEntityInstanceEntityClass *const this)
{
  return CBaseAttributableItem::s_pSchemaBinding;
}


// CBaseAttributableItem::CEntityInstanceEntityClass::AllocateInstance  (line 198, @0x0000000002e4fd60, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CBaseAttributableItem::CEntityInstanceEntityClass::AllocateInstance(
        CBaseAttributableItem::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1696);
  memset(v1, 0, 0x6A0u);
  return v1;
}


// CBaseAttributableItem::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 198, @0x0000000002e53d30, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CBaseAttributableItem::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CBaseAttributableItem::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CBaseAttributableItem::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 198, @0x0000000002e53d50, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CBaseAttributableItem::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CBaseAttributableItem::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CBaseAttributableItem::CEntityInstanceEntityClass::ConstructInstance  (line 198, @0x0000000002e59480, libserver.so)  // inlines: CBaseAttributableItem, Construct<CBaseAttributableItem>
// calls: CEconEntity::CEconEntity
CEntityInstance *__fastcall CBaseAttributableItem::CEntityInstanceEntityClass::ConstructInstance(
        CBaseAttributableItem::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CEconEntity::CEconEntity(p);
    *p = &off_47A30B0;
    *(p + 170) = &off_47A3938;
  }
  return p;
}


// CBaseAttributableItem::GetEntityClassInternal  (line 198, @0x0000000002e5d3c0, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseFlex::InitScriptDesc, CEconEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: __static_initialization_and_destruction_0
// strings: "CBaseAttributableItem"
// globals: `guard variable for'CBaseAttributableItem::GetEntityClassInternal(void)::g_EntityCBaseAttributableItemClass, CBaseAttributableItem::GetEntityClassInternal(void)::g_EntityCBaseAttributableItemClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CBaseAttributableItem::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CBaseAttributableItem::GetEntityClassInfo(void)::g_EntityCBaseAttributableItemClassInfo, CBaseAttributableItem::GetEntityClassInfo(void)::g_EntityCBaseAttributableItemClassInfo
CEntityClass *__cdecl CBaseAttributableItem::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CBaseAttributableItem::GetEntityClassInternal(void)::g_EntityCBaseAttributableItemClass == 0
    && __cxa_guard_acquire(&`guard variable for'CBaseAttributableItem::GetEntityClassInternal(void)::g_EntityCBaseAttributableItemClass) != 0 )
  {
    CBaseAttributableItem::GetEntityClassInternal(void)::g_EntityCBaseAttributableItemClass.m_designerName.u.m_Id = 0;
    CBaseAttributableItem::GetEntityClassInternal(void)::g_EntityCBaseAttributableItemClass._vptr_CEntityClass = off_3F79390;
    CBaseAttributableItem::GetEntityClassInternal(void)::g_EntityCBaseAttributableItemClass.m_ComponentOffsets.m_Size = 0;
    CBaseAttributableItem::GetEntityClassInternal(void)::g_EntityCBaseAttributableItemClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CBaseAttributableItem::GetEntityClassInternal(void)::g_EntityCBaseAttributableItemClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CBaseAttributableItem::GetEntityClassInternal(void)::g_EntityCBaseAttributableItemClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CBaseAttributableItem::GetEntityClassInternal(void)::g_EntityCBaseAttributableItemClass.m_AllHelpers.m_Size = 0;
    CBaseAttributableItem::GetEntityClassInternal(void)::g_EntityCBaseAttributableItemClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CBaseAttributableItem::GetEntityClassInternal(void)::g_EntityCBaseAttributableItemClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CBaseAttributableItem::GetEntityClassInternal(void)::g_EntityCBaseAttributableItemClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CBaseAttributableItem::GetEntityClassInternal(void)::g_EntityCBaseAttributableItemClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CBaseAttributableItem::GetEntityClassInternal(void)::g_EntityCBaseAttributableItemClass.m_instanceUnserializer.m_atomicFields,
      4);
    CBaseAttributableItem::GetEntityClassInternal(void)::g_EntityCBaseAttributableItemClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CBaseAttributableItem::GetEntityClassInternal(void)::g_EntityCBaseAttributableItemClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CBaseAttributableItem::GetEntityClassInternal(void)::g_EntityCBaseAttributableItemClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CBaseAttributableItem::GetEntityClassInternal(void)::g_EntityCBaseAttributableItemClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CBaseAttributableItem::GetEntityClassInternal(void)::g_EntityCBaseAttributableItemClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CBaseAttributableItem::GetEntityClassInternal(void)::g_EntityCBaseAttributableItemClass;
    CBaseAttributableItem::GetEntityClassInternal(void)::g_EntityCBaseAttributableItemClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CBaseAttributableItem::GetEntityClassInternal(void)::g_EntityCBaseAttributableItemClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CBaseAttributableItem::GetEntityClassInternal(void)::g_EntityCBaseAttributableItemClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CBaseAttributableItem::GetEntityClassInternal(void)::g_EntityCBaseAttributableItemClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CBaseAttributableItem::GetEntityClassInternal(void)::g_EntityCBaseAttributableItemClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CBaseAttributableItem::GetEntityClassInternal(void)::g_EntityCBaseAttributableItemClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CBaseAttributableItem::GetEntityClassInternal(void)::g_EntityCBaseAttributableItemClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CBaseAttributableItem::GetEntityClassInternal(void)::g_EntityCBaseAttributableItemClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CBaseAttributableItem::GetEntityClassInternal(void)::g_EntityCBaseAttributableItemClass.m_classInputs.m_Size = 0;
    CBaseAttributableItem::GetEntityClassInternal(void)::g_EntityCBaseAttributableItemClass.m_classInputs.m_Memory.m_pMemory = 0;
    CBaseAttributableItem::GetEntityClassInternal(void)::g_EntityCBaseAttributableItemClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CBaseAttributableItem::GetEntityClassInternal(void)::g_EntityCBaseAttributableItemClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CBaseAttributableItem::GetEntityClassInternal(void)::g_EntityCBaseAttributableItemClass.m_classOutputs.m_Size = 0;
    CBaseAttributableItem::GetEntityClassInternal(void)::g_EntityCBaseAttributableItemClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CBaseAttributableItem::GetEntityClassInternal(void)::g_EntityCBaseAttributableItemClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CBaseAttributableItem::GetEntityClassInternal(void)::g_EntityCBaseAttributableItemClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CBaseAttributableItem::GetEntityClassInternal(void)::g_EntityCBaseAttributableItemClass.m_requiredEHandle.m_Index = -1;
    CBaseAttributableItem::GetEntityClassInternal(void)::g_EntityCBaseAttributableItemClass.m_hNetworkSerializer = 0;
    CBaseAttributableItem::GetEntityClassInternal(void)::g_EntityCBaseAttributableItemClass.m_pBaseClassInfo = 0;
    CBaseAttributableItem::GetEntityClassInternal(void)::g_EntityCBaseAttributableItemClass.m_pClassInfo = 0;
    CBaseAttributableItem::GetEntityClassInternal(void)::g_EntityCBaseAttributableItemClass.m_flags = 0;
    CBaseAttributableItem::GetEntityClassInternal(void)::g_EntityCBaseAttributableItemClass.m_nAllHelpersFlags = 0;
    CBaseAttributableItem::GetEntityClassInternal(void)::g_EntityCBaseAttributableItemClass.m_pScriptClassDesc = 0;
    CBaseAttributableItem::GetEntityClassInternal(void)::g_EntityCBaseAttributableItemClass.m_pInputs = 0;
    CBaseAttributableItem::GetEntityClassInternal(void)::g_EntityCBaseAttributableItemClass.m_nInputCount = 0;
    CBaseAttributableItem::GetEntityClassInternal(void)::g_EntityCBaseAttributableItemClass.m_pOutputs = 0;
    CBaseAttributableItem::GetEntityClassInternal(void)::g_EntityCBaseAttributableItemClass.m_nOutputCount = 0;
    CBaseAttributableItem::GetEntityClassInternal(void)::g_EntityCBaseAttributableItemClass.m_pGameClass = 0;
    CBaseAttributableItem::GetEntityClassInternal(void)::g_EntityCBaseAttributableItemClass._vptr_CEntityClass = off_479F450;
    __cxa_guard_release(&`guard variable for'CBaseAttributableItem::GetEntityClassInternal(void)::g_EntityCBaseAttributableItemClass);
    __cxa_atexit(
      CBaseAttributableItem::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CBaseAttributableItem::GetEntityClassInternal(void)::g_EntityCBaseAttributableItemClass,
      &_dso_handle);
  }
  if ( g_pEntityCBaseAttributableItemClass != 0 )
    return &CBaseAttributableItem::GetEntityClassInternal(void)::g_EntityCBaseAttributableItemClass;
  if ( `guard variable for'CBaseAttributableItem::GetEntityClassInfo(void)::g_EntityCBaseAttributableItemClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CBaseAttributableItem::GetEntityClassInfo(void)::g_EntityCBaseAttributableItemClassInfo) != 0 )
  {
    EntityClassInfo = CEconEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CBaseAttributableItem::GetEntityClassInfo(void)::g_EntityCBaseAttributableItemClassInfo,
      "CBaseAttributableItem",
      0,
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CBaseAttributableItem::GetEntityClassInfo(void)::g_EntityCBaseAttributableItemClassInfo);
  }
  CBaseAttributableItem::GetEntityClassInternal(void)::g_EntityCBaseAttributableItemClass.m_pClassInfo = &CBaseAttributableItem::GetEntityClassInfo(void)::g_EntityCBaseAttributableItemClassInfo;
  CBaseAttributableItem::GetEntityClassInternal(void)::g_EntityCBaseAttributableItemClass.m_pBaseClassInfo = CBaseAttributableItem::GetEntityClassInfo(void)::g_EntityCBaseAttributableItemClassInfo.m_pBaseClassInfo;
  g_pEntityCBaseAttributableItemClass = &CBaseAttributableItem::GetEntityClassInternal(void)::g_EntityCBaseAttributableItemClass;
  CBaseAttributableItem::GetEntityClassInfo(void)::g_EntityCBaseAttributableItemClassInfo.m_pClass = &CBaseAttributableItem::GetEntityClassInternal(void)::g_EntityCBaseAttributableItemClass;
  CBaseAttributableItem::GetEntityClassInternal(void)::g_EntityCBaseAttributableItemClass.m_pScriptClassDesc = CBaseFlex::InitScriptDesc();
  g_pEntityCBaseAttributableItemClass->m_pComponentOverrides = 0;
  return &CBaseAttributableItem::GetEntityClassInternal(void)::g_EntityCBaseAttributableItemClass;
}


