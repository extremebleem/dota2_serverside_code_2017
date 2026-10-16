
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_BaseNPC_Shop::~CDOTA_BaseNPC_Shop  (line 22, @0x00000000029847f0, libserver.so)  // inlines: ~CDOTA_BaseNPC_Building, ~CNetworkVarBase, ~CStrongHandle
// calls: CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>::Shutdown, CDOTA_BaseNPC::~CDOTA_BaseNPC
void __fastcall CDOTA_BaseNPC_Shop::~CDOTA_BaseNPC_Shop(CDOTA_BaseNPC_Shop *const this)
{
  CNetworkVarBase<CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>,CDOTA_BaseNPC_Building::NetworkVar_m_nFXIndexDestruction> *p_m_nFXIndexDestruction; // rdi

  p_m_nFXIndexDestruction = &this->m_nFXIndexDestruction;
  p_m_nFXIndexDestruction[-564].m_Value.m_pBinding = &off_42DB1F0;
  p_m_nFXIndexDestruction[-328].m_Value.m_pBinding = &off_42DC150;
  p_m_nFXIndexDestruction[-307].m_Value.m_pBinding = &off_42DC480;
  CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>::Shutdown(&p_m_nFXIndexDestruction->m_Value);
  CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>::Shutdown(&this->m_nFXIndex.m_Value);
  CDOTA_BaseNPC::~CDOTA_BaseNPC(this);
}


// CDOTA_BaseNPC_Shop::~CDOTA_BaseNPC_Shop  (line 22, @0x0000000002984d00, libserver.so)  // inlines: ~CDOTA_BaseNPC_Building, ~CDOTA_BaseNPC_Shop, ~CNetworkVarBase, ~CStrongHandle
// calls: CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>::Shutdown, CDOTA_BaseNPC::~CDOTA_BaseNPC, CBaseEntity::operator delete
void __fastcall CDOTA_BaseNPC_Shop::~CDOTA_BaseNPC_Shop(CDOTA_BaseNPC_Shop *const this)
{
  CNetworkVarBase<CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>,CDOTA_BaseNPC_Building::NetworkVar_m_nFXIndexDestruction> *p_m_nFXIndexDestruction; // rdi

  p_m_nFXIndexDestruction = &this->m_nFXIndexDestruction;
  p_m_nFXIndexDestruction[-564].m_Value.m_pBinding = &off_42DB1F0;
  p_m_nFXIndexDestruction[-328].m_Value.m_pBinding = &off_42DC150;
  p_m_nFXIndexDestruction[-307].m_Value.m_pBinding = &off_42DC480;
  CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>::Shutdown(&p_m_nFXIndexDestruction->m_Value);
  CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>::Shutdown(&this->m_nFXIndex.m_Value);
  CDOTA_BaseNPC::~CDOTA_BaseNPC(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_BaseNPC_Shop::GetEntityClass  (line 24, @0x0000000002967940, libserver.so)
CEntityClass *__cdecl CDOTA_BaseNPC_Shop::GetEntityClass()
{
  return g_pEntityCDOTA_BaseNPC_ShopClass;
}


// CDOTA_BaseNPC_Shop::Schema_DynamicBinding  (line 24, @0x0000000002967950, libserver.so)
// globals: CDOTA_BaseNPC_Shop::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_BaseNPC_Shop::Schema_DynamicBinding(
        const CDOTA_BaseNPC_Shop *const this)
{
  return CDOTA_BaseNPC_Shop::s_pSchemaBinding;
}


// CDOTA_BaseNPC_Shop::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 24, @0x0000000002967980, libserver.so)
// globals: CDOTA_BaseNPC_Shop::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_BaseNPC_Shop::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_BaseNPC_Shop::CEntityInstanceEntityClass *const this)
{
  return CDOTA_BaseNPC_Shop::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_BaseNPC_Shop::CEntityInstanceEntityClass::DestructInstance  (line 24, @0x0000000002967990, libserver.so)  // inlines: Destruct<CDOTA_BaseNPC_Shop>
void __fastcall CDOTA_BaseNPC_Shop::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_BaseNPC_Shop::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_BaseNPC_Shop::CEntityInstanceEntityClass::FreeInstance  (line 24, @0x00000000029679b0, libserver.so)
void __fastcall CDOTA_BaseNPC_Shop::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_BaseNPC_Shop::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_BaseNPC_Shop::CEntityInstanceEntityClass::CanAllocate  (line 24, @0x00000000029679d0, libserver.so)
bool __fastcall CDOTA_BaseNPC_Shop::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_BaseNPC_Shop::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_BaseNPC_Shop::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 24, @0x00000000029679e0, libserver.so)
// globals: CDOTA_BaseNPC_Shop::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_BaseNPC_Shop::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_BaseNPC_Shop::CEntityInstanceEntityClass *const this)
{
  return CDOTA_BaseNPC_Shop::s_pSchemaBinding;
}


// CDOTA_BaseNPC_Shop::CEntityInstanceEntityClass::AllocateInstance  (line 24, @0x000000000296ad50, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_BaseNPC_Shop::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_BaseNPC_Shop::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 4704);
  memset(v1, 0, 0x1260u);
  return v1;
}


// CDOTA_BaseNPC_Shop::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 24, @0x000000000296fd00, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_BaseNPC_Shop::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_BaseNPC_Shop::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_BaseNPC_Shop::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 24, @0x000000000296ff40, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_BaseNPC_Shop::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_BaseNPC_Shop::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_BaseNPC_Shop::CEntityInstanceEntityClass::ConstructInstance  (line 24, @0x0000000002982fb0, libserver.so)  // inlines: CDOTA_BaseNPC_Building, CDOTA_BaseNPC_Shop, CNetworkVarBase, CStrongHandle, CUtlSymbolLarge, Color, Construct<CDOTA_BaseNPC_Shop>, EnsureValidValue, EnsureValidValue<DOTA_SHOP_TYPE>, EnsureValidValue<HSequence>, EnsureValidValue<bool>, EnsureValidValue<float>, EnsureValidValue<int>, Init
// calls: CDOTA_BaseNPC::CDOTA_BaseNPC
CEntityInstance *__fastcall CDOTA_BaseNPC_Shop::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_BaseNPC_Shop::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_BaseNPC::CDOTA_BaseNPC(p);
    *(p + 563) = 0;
    *p = &off_42FB070;
    *(p + 236) = &off_42FBFE0;
    *(p + 564) = 0;
    *(p + 1130) = 0;
    *(p + 1131) = 0;
    *(p + 1132) = 0;
    *(p + 1133) = 0;
    *(p + 1134) = 0;
    *(p + 1135) = 0;
    *(p + 4544) = 0;
    *(p + 4545) = 0;
    *(p + 1145) = 0;
    *(p + 1146) = 0;
    *(p + 574) = 0;
    *(p + 575) = 0;
    *(p + 576) = 0;
    *(p + 577) = 0;
    *(p + 578) = 0;
    *(p + 579) = 0;
    *(p + 580) = 0;
    *(p + 581) = 0;
    *(p + 257) = &off_42FC310;
    *(p + 1174) = 0;
  }
  return p;
}


// CDOTA_BaseNPC_Shop::GetEntityClassInternal  (line 24, @0x000000000298ac30, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, InitScriptDesc, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, GetScriptDesc<CDOTA_BaseNPC_Building>, CDOTA_BaseNPC_Building::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_characters_01.cpp
// strings: "ent_dota_shop", "CDOTA_BaseNPC_Shop"
// globals: `guard variable for'CDOTA_BaseNPC_Shop::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_ShopClass, CDOTA_BaseNPC_Shop::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_ShopClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTA_BaseNPC_Shop::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_BaseNPC_Shop::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_ShopClassInfo, CDOTA_BaseNPC_Shop::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_ShopClassInfo
CEntityClass *__cdecl CDOTA_BaseNPC_Shop::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_BaseNPC_Shop::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_ShopClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_BaseNPC_Shop::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_ShopClass) != 0 )
  {
    CDOTA_BaseNPC_Shop::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_ShopClass.m_designerName.u.m_Id = 0;
    CDOTA_BaseNPC_Shop::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_ShopClass._vptr_CEntityClass = off_3F79390;
    CDOTA_BaseNPC_Shop::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_ShopClass.m_ComponentOffsets.m_Size = 0;
    CDOTA_BaseNPC_Shop::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_ShopClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_Shop::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_ShopClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_Shop::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_ShopClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_Shop::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_ShopClass.m_AllHelpers.m_Size = 0;
    CDOTA_BaseNPC_Shop::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_ShopClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_Shop::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_ShopClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_Shop::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_ShopClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_Shop::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_ShopClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTA_BaseNPC_Shop::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_ShopClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTA_BaseNPC_Shop::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_ShopClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTA_BaseNPC_Shop::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_ShopClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_Shop::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_ShopClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_Shop::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_ShopClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_Shop::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_ShopClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTA_BaseNPC_Shop::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_ShopClass;
    CDOTA_BaseNPC_Shop::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_ShopClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTA_BaseNPC_Shop::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_ShopClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_Shop::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_ShopClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_Shop::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_ShopClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_Shop::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_ShopClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTA_BaseNPC_Shop::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_ShopClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_Shop::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_ShopClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_Shop::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_ShopClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_Shop::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_ShopClass.m_classInputs.m_Size = 0;
    CDOTA_BaseNPC_Shop::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_ShopClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_Shop::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_ShopClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_Shop::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_ShopClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_Shop::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_ShopClass.m_classOutputs.m_Size = 0;
    CDOTA_BaseNPC_Shop::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_ShopClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_Shop::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_ShopClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_Shop::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_ShopClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_Shop::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_ShopClass.m_requiredEHandle.m_Index = -1;
    CDOTA_BaseNPC_Shop::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_ShopClass.m_hNetworkSerializer = 0;
    CDOTA_BaseNPC_Shop::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_ShopClass.m_pBaseClassInfo = 0;
    CDOTA_BaseNPC_Shop::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_ShopClass.m_pClassInfo = 0;
    CDOTA_BaseNPC_Shop::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_ShopClass.m_flags = 0;
    CDOTA_BaseNPC_Shop::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_ShopClass.m_nAllHelpersFlags = 0;
    CDOTA_BaseNPC_Shop::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_ShopClass.m_pScriptClassDesc = 0;
    CDOTA_BaseNPC_Shop::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_ShopClass.m_pInputs = 0;
    CDOTA_BaseNPC_Shop::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_ShopClass.m_nInputCount = 0;
    CDOTA_BaseNPC_Shop::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_ShopClass.m_pOutputs = 0;
    CDOTA_BaseNPC_Shop::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_ShopClass.m_nOutputCount = 0;
    CDOTA_BaseNPC_Shop::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_ShopClass.m_pGameClass = 0;
    CDOTA_BaseNPC_Shop::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_ShopClass._vptr_CEntityClass = off_42F5E70;
    __cxa_guard_release(&`guard variable for'CDOTA_BaseNPC_Shop::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_ShopClass);
    __cxa_atexit(
      CDOTA_BaseNPC_Shop::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_BaseNPC_Shop::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_ShopClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_BaseNPC_ShopClass != 0 )
    return &CDOTA_BaseNPC_Shop::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_ShopClass;
  if ( `guard variable for'CDOTA_BaseNPC_Shop::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_ShopClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_BaseNPC_Shop::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_ShopClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_BaseNPC_Building::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_BaseNPC_Shop::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_ShopClassInfo,
      "CDOTA_BaseNPC_Shop",
      "ent_dota_shop",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_BaseNPC_Shop::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_ShopClassInfo);
  }
  CDOTA_BaseNPC_Shop::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_ShopClass.m_pClassInfo = &CDOTA_BaseNPC_Shop::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_ShopClassInfo;
  CDOTA_BaseNPC_Shop::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_ShopClass.m_pBaseClassInfo = CDOTA_BaseNPC_Shop::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_ShopClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_BaseNPC_ShopClass = &CDOTA_BaseNPC_Shop::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_ShopClass;
  CDOTA_BaseNPC_Shop::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_ShopClassInfo.m_pClass = &CDOTA_BaseNPC_Shop::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_ShopClass;
  CDOTA_BaseNPC_Shop::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_ShopClass.m_pScriptClassDesc = GetScriptDesc<CDOTA_BaseNPC_Building>(0);
  g_pEntityCDOTA_BaseNPC_ShopClass->m_pComponentOverrides = 0;
  return &CDOTA_BaseNPC_Shop::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_ShopClass;
}


// CDOTA_BaseNPC_Shop::IsControllableByAnyPlayer  (line 32, @0x00000000029679f0, libserver.so)
bool __fastcall CDOTA_BaseNPC_Shop::IsControllableByAnyPlayer(CDOTA_BaseNPC_Shop *const this)
{
  return 0;
}


// CDOTA_BaseNPC_Shop::IsControllableByPlayer  (line 33, @0x0000000002967a00, libserver.so)
bool __fastcall CDOTA_BaseNPC_Shop::IsControllableByPlayer(CDOTA_BaseNPC_Shop *const this, int iIndex)
{
  return 0;
}


// CDOTA_BaseNPC_Shop::UpdateTransmitState  (line 35, @0x000000000296b020, libserver.so)
// calls: CBaseEntity::SetTransmitState
int __fastcall CDOTA_BaseNPC_Shop::UpdateTransmitState(CDOTA_BaseNPC_Shop *const this)
{
  return CBaseEntity::SetTransmitState(this, 4);
}


