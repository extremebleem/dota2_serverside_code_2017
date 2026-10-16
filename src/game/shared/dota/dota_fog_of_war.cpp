
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// FoW_TeamNumberToFoWIndex  (line 38, @0x00000000024c03d0, libserver.so)
// callers: CBaseModelEntity::UpdateVisibility, CFoWRevealerEntity::Spawn, CDOTAFogOfWarSystem::IsLocationVisible, CDOTAFogOfWarSystem::UpdateFogOfWar, FOWRemoveTempViewer, CDOTAGamerules::CreateStandardEntities, CDOTAFogOfWarSystem::AddFOWEntity, CDOTAFogOfWarTempViewers::ThinkUpdateFogOfWar, FOWAddTempViewer, fow_server_test_tempviewer, CDOTA_Modifier_Teleporting::GenerateSound, CDOTAPlayer::ChangeTeam (21 total)
int __fastcall FoW_TeamNumberToFoWIndex(int nTeamID)
{
  int result; // eax
  unsigned int v2; // edx
  int v3; // edi

  if ( nTeamID == 2 )
    return 0;
  if ( nTeamID == 3 )
    return 1;
  result = 9999;
  if ( nTeamID != 0 )
  {
    v2 = nTeamID - 6;
    LOBYTE(result) = 16;
    v3 = nTeamID - 4;
    if ( v2 <= 7 )
      return v3;
  }
  return result;
}


// CFoWRevealerEntity::CEntityInstanceEntityClass::InitOptionalTables  (line 53, @0x00000000024e78b0, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, GetEntityClassInternal, SetClassInfo, SetFlag, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CBaseEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// strings: "ent_fow_revealer", "CFoWRevealerEntity"
// globals: `guard variable for'CFoWRevealerEntity::GetEntityClassInternal(void)::g_EntityCFoWRevealerEntityClass, CFoWRevealerEntity::GetEntityClassInternal(void)::g_EntityCFoWRevealerEntityClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CFoWRevealerEntity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CFoWRevealerEntity::GetEntityClassInfo(void)::g_EntityCFoWRevealerEntityClassInfo, CFoWRevealerEntity::GetEntityClassInfo(void)::g_EntityCFoWRevealerEntityClassInfo
bool __cdecl CFoWRevealerEntity::CEntityInstanceEntityClass::InitOptionalTables()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CFoWRevealerEntity::GetEntityClassInternal(void)::g_EntityCFoWRevealerEntityClass == 0
    && __cxa_guard_acquire(&`guard variable for'CFoWRevealerEntity::GetEntityClassInternal(void)::g_EntityCFoWRevealerEntityClass) != 0 )
  {
    CFoWRevealerEntity::GetEntityClassInternal(void)::g_EntityCFoWRevealerEntityClass.m_designerName.u.m_Id = 0;
    CFoWRevealerEntity::GetEntityClassInternal(void)::g_EntityCFoWRevealerEntityClass._vptr_CEntityClass = off_3F79390;
    CFoWRevealerEntity::GetEntityClassInternal(void)::g_EntityCFoWRevealerEntityClass.m_ComponentOffsets.m_Size = 0;
    CFoWRevealerEntity::GetEntityClassInternal(void)::g_EntityCFoWRevealerEntityClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CFoWRevealerEntity::GetEntityClassInternal(void)::g_EntityCFoWRevealerEntityClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CFoWRevealerEntity::GetEntityClassInternal(void)::g_EntityCFoWRevealerEntityClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CFoWRevealerEntity::GetEntityClassInternal(void)::g_EntityCFoWRevealerEntityClass.m_AllHelpers.m_Size = 0;
    CFoWRevealerEntity::GetEntityClassInternal(void)::g_EntityCFoWRevealerEntityClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CFoWRevealerEntity::GetEntityClassInternal(void)::g_EntityCFoWRevealerEntityClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CFoWRevealerEntity::GetEntityClassInternal(void)::g_EntityCFoWRevealerEntityClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CFoWRevealerEntity::GetEntityClassInternal(void)::g_EntityCFoWRevealerEntityClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CFoWRevealerEntity::GetEntityClassInternal(void)::g_EntityCFoWRevealerEntityClass.m_instanceUnserializer.m_atomicFields,
      4);
    CFoWRevealerEntity::GetEntityClassInternal(void)::g_EntityCFoWRevealerEntityClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CFoWRevealerEntity::GetEntityClassInternal(void)::g_EntityCFoWRevealerEntityClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CFoWRevealerEntity::GetEntityClassInternal(void)::g_EntityCFoWRevealerEntityClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CFoWRevealerEntity::GetEntityClassInternal(void)::g_EntityCFoWRevealerEntityClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CFoWRevealerEntity::GetEntityClassInternal(void)::g_EntityCFoWRevealerEntityClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CFoWRevealerEntity::GetEntityClassInternal(void)::g_EntityCFoWRevealerEntityClass;
    CFoWRevealerEntity::GetEntityClassInternal(void)::g_EntityCFoWRevealerEntityClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CFoWRevealerEntity::GetEntityClassInternal(void)::g_EntityCFoWRevealerEntityClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CFoWRevealerEntity::GetEntityClassInternal(void)::g_EntityCFoWRevealerEntityClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CFoWRevealerEntity::GetEntityClassInternal(void)::g_EntityCFoWRevealerEntityClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CFoWRevealerEntity::GetEntityClassInternal(void)::g_EntityCFoWRevealerEntityClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CFoWRevealerEntity::GetEntityClassInternal(void)::g_EntityCFoWRevealerEntityClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CFoWRevealerEntity::GetEntityClassInternal(void)::g_EntityCFoWRevealerEntityClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CFoWRevealerEntity::GetEntityClassInternal(void)::g_EntityCFoWRevealerEntityClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CFoWRevealerEntity::GetEntityClassInternal(void)::g_EntityCFoWRevealerEntityClass.m_classInputs.m_Size = 0;
    CFoWRevealerEntity::GetEntityClassInternal(void)::g_EntityCFoWRevealerEntityClass.m_classInputs.m_Memory.m_pMemory = 0;
    CFoWRevealerEntity::GetEntityClassInternal(void)::g_EntityCFoWRevealerEntityClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CFoWRevealerEntity::GetEntityClassInternal(void)::g_EntityCFoWRevealerEntityClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CFoWRevealerEntity::GetEntityClassInternal(void)::g_EntityCFoWRevealerEntityClass.m_classOutputs.m_Size = 0;
    CFoWRevealerEntity::GetEntityClassInternal(void)::g_EntityCFoWRevealerEntityClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CFoWRevealerEntity::GetEntityClassInternal(void)::g_EntityCFoWRevealerEntityClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CFoWRevealerEntity::GetEntityClassInternal(void)::g_EntityCFoWRevealerEntityClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CFoWRevealerEntity::GetEntityClassInternal(void)::g_EntityCFoWRevealerEntityClass.m_requiredEHandle.m_Index = -1;
    CFoWRevealerEntity::GetEntityClassInternal(void)::g_EntityCFoWRevealerEntityClass.m_hNetworkSerializer = 0;
    CFoWRevealerEntity::GetEntityClassInternal(void)::g_EntityCFoWRevealerEntityClass.m_pBaseClassInfo = 0;
    CFoWRevealerEntity::GetEntityClassInternal(void)::g_EntityCFoWRevealerEntityClass.m_pClassInfo = 0;
    CFoWRevealerEntity::GetEntityClassInternal(void)::g_EntityCFoWRevealerEntityClass.m_flags = 0;
    CFoWRevealerEntity::GetEntityClassInternal(void)::g_EntityCFoWRevealerEntityClass.m_nAllHelpersFlags = 0;
    CFoWRevealerEntity::GetEntityClassInternal(void)::g_EntityCFoWRevealerEntityClass.m_pScriptClassDesc = 0;
    CFoWRevealerEntity::GetEntityClassInternal(void)::g_EntityCFoWRevealerEntityClass.m_pInputs = 0;
    CFoWRevealerEntity::GetEntityClassInternal(void)::g_EntityCFoWRevealerEntityClass.m_nInputCount = 0;
    CFoWRevealerEntity::GetEntityClassInternal(void)::g_EntityCFoWRevealerEntityClass.m_pOutputs = 0;
    CFoWRevealerEntity::GetEntityClassInternal(void)::g_EntityCFoWRevealerEntityClass.m_nOutputCount = 0;
    CFoWRevealerEntity::GetEntityClassInternal(void)::g_EntityCFoWRevealerEntityClass.m_pGameClass = 0;
    CFoWRevealerEntity::GetEntityClassInternal(void)::g_EntityCFoWRevealerEntityClass._vptr_CEntityClass = off_40F6DF0;
    __cxa_guard_release(&`guard variable for'CFoWRevealerEntity::GetEntityClassInternal(void)::g_EntityCFoWRevealerEntityClass);
    __cxa_atexit(
      CFoWRevealerEntity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CFoWRevealerEntity::GetEntityClassInternal(void)::g_EntityCFoWRevealerEntityClass,
      &_dso_handle);
  }
  if ( g_pEntityCFoWRevealerEntityClass == 0 )
  {
    if ( `guard variable for'CFoWRevealerEntity::GetEntityClassInfo(void)::g_EntityCFoWRevealerEntityClassInfo == 0
      && __cxa_guard_acquire(&`guard variable for'CFoWRevealerEntity::GetEntityClassInfo(void)::g_EntityCFoWRevealerEntityClassInfo) != 0 )
    {
      EntityClassInfo = CBaseEntity::GetEntityClassInfo();
      CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
        &CFoWRevealerEntity::GetEntityClassInfo(void)::g_EntityCFoWRevealerEntityClassInfo,
        "CFoWRevealerEntity",
        "ent_fow_revealer",
        0,
        EntityClassInfo);
      __cxa_guard_release(&`guard variable for'CFoWRevealerEntity::GetEntityClassInfo(void)::g_EntityCFoWRevealerEntityClassInfo);
    }
    CFoWRevealerEntity::GetEntityClassInternal(void)::g_EntityCFoWRevealerEntityClass.m_pClassInfo = &CFoWRevealerEntity::GetEntityClassInfo(void)::g_EntityCFoWRevealerEntityClassInfo;
    CFoWRevealerEntity::GetEntityClassInternal(void)::g_EntityCFoWRevealerEntityClass.m_pBaseClassInfo = CFoWRevealerEntity::GetEntityClassInfo(void)::g_EntityCFoWRevealerEntityClassInfo.m_pBaseClassInfo;
    g_pEntityCFoWRevealerEntityClass = &CFoWRevealerEntity::GetEntityClassInternal(void)::g_EntityCFoWRevealerEntityClass;
    CFoWRevealerEntity::GetEntityClassInfo(void)::g_EntityCFoWRevealerEntityClassInfo.m_pClass = &CFoWRevealerEntity::GetEntityClassInternal(void)::g_EntityCFoWRevealerEntityClass;
    CFoWRevealerEntity::GetEntityClassInternal(void)::g_EntityCFoWRevealerEntityClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
    g_pEntityCFoWRevealerEntityClass->m_pComponentOverrides = 0;
  }
  CFoWRevealerEntity::GetEntityClassInternal(void)::g_EntityCFoWRevealerEntityClass.m_flags |= 0x10u;
  return 1;
}


// CFoWBlockerEntity::CEntityInstanceEntityClass::InitOptionalTables  (line 57, @0x00000000024e7560, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, GetEntityClassInternal, SetClassInfo, SetFlag, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CBaseEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// strings: "ent_fow_blocker_node", "CFoWBlockerEntity"
// globals: `guard variable for'CFoWBlockerEntity::GetEntityClassInternal(void)::g_EntityCFoWBlockerEntityClass, CFoWBlockerEntity::GetEntityClassInternal(void)::g_EntityCFoWBlockerEntityClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CFoWBlockerEntity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CFoWBlockerEntity::GetEntityClassInfo(void)::g_EntityCFoWBlockerEntityClassInfo, CFoWBlockerEntity::GetEntityClassInfo(void)::g_EntityCFoWBlockerEntityClassInfo
bool __cdecl CFoWBlockerEntity::CEntityInstanceEntityClass::InitOptionalTables()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CFoWBlockerEntity::GetEntityClassInternal(void)::g_EntityCFoWBlockerEntityClass == 0
    && __cxa_guard_acquire(&`guard variable for'CFoWBlockerEntity::GetEntityClassInternal(void)::g_EntityCFoWBlockerEntityClass) != 0 )
  {
    CFoWBlockerEntity::GetEntityClassInternal(void)::g_EntityCFoWBlockerEntityClass.m_designerName.u.m_Id = 0;
    CFoWBlockerEntity::GetEntityClassInternal(void)::g_EntityCFoWBlockerEntityClass._vptr_CEntityClass = off_3F79390;
    CFoWBlockerEntity::GetEntityClassInternal(void)::g_EntityCFoWBlockerEntityClass.m_ComponentOffsets.m_Size = 0;
    CFoWBlockerEntity::GetEntityClassInternal(void)::g_EntityCFoWBlockerEntityClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CFoWBlockerEntity::GetEntityClassInternal(void)::g_EntityCFoWBlockerEntityClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CFoWBlockerEntity::GetEntityClassInternal(void)::g_EntityCFoWBlockerEntityClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CFoWBlockerEntity::GetEntityClassInternal(void)::g_EntityCFoWBlockerEntityClass.m_AllHelpers.m_Size = 0;
    CFoWBlockerEntity::GetEntityClassInternal(void)::g_EntityCFoWBlockerEntityClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CFoWBlockerEntity::GetEntityClassInternal(void)::g_EntityCFoWBlockerEntityClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CFoWBlockerEntity::GetEntityClassInternal(void)::g_EntityCFoWBlockerEntityClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CFoWBlockerEntity::GetEntityClassInternal(void)::g_EntityCFoWBlockerEntityClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CFoWBlockerEntity::GetEntityClassInternal(void)::g_EntityCFoWBlockerEntityClass.m_instanceUnserializer.m_atomicFields,
      4);
    CFoWBlockerEntity::GetEntityClassInternal(void)::g_EntityCFoWBlockerEntityClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CFoWBlockerEntity::GetEntityClassInternal(void)::g_EntityCFoWBlockerEntityClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CFoWBlockerEntity::GetEntityClassInternal(void)::g_EntityCFoWBlockerEntityClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CFoWBlockerEntity::GetEntityClassInternal(void)::g_EntityCFoWBlockerEntityClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CFoWBlockerEntity::GetEntityClassInternal(void)::g_EntityCFoWBlockerEntityClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CFoWBlockerEntity::GetEntityClassInternal(void)::g_EntityCFoWBlockerEntityClass;
    CFoWBlockerEntity::GetEntityClassInternal(void)::g_EntityCFoWBlockerEntityClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CFoWBlockerEntity::GetEntityClassInternal(void)::g_EntityCFoWBlockerEntityClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CFoWBlockerEntity::GetEntityClassInternal(void)::g_EntityCFoWBlockerEntityClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CFoWBlockerEntity::GetEntityClassInternal(void)::g_EntityCFoWBlockerEntityClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CFoWBlockerEntity::GetEntityClassInternal(void)::g_EntityCFoWBlockerEntityClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CFoWBlockerEntity::GetEntityClassInternal(void)::g_EntityCFoWBlockerEntityClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CFoWBlockerEntity::GetEntityClassInternal(void)::g_EntityCFoWBlockerEntityClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CFoWBlockerEntity::GetEntityClassInternal(void)::g_EntityCFoWBlockerEntityClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CFoWBlockerEntity::GetEntityClassInternal(void)::g_EntityCFoWBlockerEntityClass.m_classInputs.m_Size = 0;
    CFoWBlockerEntity::GetEntityClassInternal(void)::g_EntityCFoWBlockerEntityClass.m_classInputs.m_Memory.m_pMemory = 0;
    CFoWBlockerEntity::GetEntityClassInternal(void)::g_EntityCFoWBlockerEntityClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CFoWBlockerEntity::GetEntityClassInternal(void)::g_EntityCFoWBlockerEntityClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CFoWBlockerEntity::GetEntityClassInternal(void)::g_EntityCFoWBlockerEntityClass.m_classOutputs.m_Size = 0;
    CFoWBlockerEntity::GetEntityClassInternal(void)::g_EntityCFoWBlockerEntityClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CFoWBlockerEntity::GetEntityClassInternal(void)::g_EntityCFoWBlockerEntityClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CFoWBlockerEntity::GetEntityClassInternal(void)::g_EntityCFoWBlockerEntityClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CFoWBlockerEntity::GetEntityClassInternal(void)::g_EntityCFoWBlockerEntityClass.m_requiredEHandle.m_Index = -1;
    CFoWBlockerEntity::GetEntityClassInternal(void)::g_EntityCFoWBlockerEntityClass.m_hNetworkSerializer = 0;
    CFoWBlockerEntity::GetEntityClassInternal(void)::g_EntityCFoWBlockerEntityClass.m_pBaseClassInfo = 0;
    CFoWBlockerEntity::GetEntityClassInternal(void)::g_EntityCFoWBlockerEntityClass.m_pClassInfo = 0;
    CFoWBlockerEntity::GetEntityClassInternal(void)::g_EntityCFoWBlockerEntityClass.m_flags = 0;
    CFoWBlockerEntity::GetEntityClassInternal(void)::g_EntityCFoWBlockerEntityClass.m_nAllHelpersFlags = 0;
    CFoWBlockerEntity::GetEntityClassInternal(void)::g_EntityCFoWBlockerEntityClass.m_pScriptClassDesc = 0;
    CFoWBlockerEntity::GetEntityClassInternal(void)::g_EntityCFoWBlockerEntityClass.m_pInputs = 0;
    CFoWBlockerEntity::GetEntityClassInternal(void)::g_EntityCFoWBlockerEntityClass.m_nInputCount = 0;
    CFoWBlockerEntity::GetEntityClassInternal(void)::g_EntityCFoWBlockerEntityClass.m_pOutputs = 0;
    CFoWBlockerEntity::GetEntityClassInternal(void)::g_EntityCFoWBlockerEntityClass.m_nOutputCount = 0;
    CFoWBlockerEntity::GetEntityClassInternal(void)::g_EntityCFoWBlockerEntityClass.m_pGameClass = 0;
    CFoWBlockerEntity::GetEntityClassInternal(void)::g_EntityCFoWBlockerEntityClass._vptr_CEntityClass = off_40F6D70;
    __cxa_guard_release(&`guard variable for'CFoWBlockerEntity::GetEntityClassInternal(void)::g_EntityCFoWBlockerEntityClass);
    __cxa_atexit(
      CFoWBlockerEntity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CFoWBlockerEntity::GetEntityClassInternal(void)::g_EntityCFoWBlockerEntityClass,
      &_dso_handle);
  }
  if ( g_pEntityCFoWBlockerEntityClass == 0 )
  {
    if ( `guard variable for'CFoWBlockerEntity::GetEntityClassInfo(void)::g_EntityCFoWBlockerEntityClassInfo == 0
      && __cxa_guard_acquire(&`guard variable for'CFoWBlockerEntity::GetEntityClassInfo(void)::g_EntityCFoWBlockerEntityClassInfo) != 0 )
    {
      EntityClassInfo = CBaseEntity::GetEntityClassInfo();
      CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
        &CFoWBlockerEntity::GetEntityClassInfo(void)::g_EntityCFoWBlockerEntityClassInfo,
        "CFoWBlockerEntity",
        "ent_fow_blocker_node",
        0,
        EntityClassInfo);
      __cxa_guard_release(&`guard variable for'CFoWBlockerEntity::GetEntityClassInfo(void)::g_EntityCFoWBlockerEntityClassInfo);
    }
    CFoWBlockerEntity::GetEntityClassInternal(void)::g_EntityCFoWBlockerEntityClass.m_pClassInfo = &CFoWBlockerEntity::GetEntityClassInfo(void)::g_EntityCFoWBlockerEntityClassInfo;
    CFoWBlockerEntity::GetEntityClassInternal(void)::g_EntityCFoWBlockerEntityClass.m_pBaseClassInfo = CFoWBlockerEntity::GetEntityClassInfo(void)::g_EntityCFoWBlockerEntityClassInfo.m_pBaseClassInfo;
    g_pEntityCFoWBlockerEntityClass = &CFoWBlockerEntity::GetEntityClassInternal(void)::g_EntityCFoWBlockerEntityClass;
    CFoWBlockerEntity::GetEntityClassInfo(void)::g_EntityCFoWBlockerEntityClassInfo.m_pClass = &CFoWBlockerEntity::GetEntityClassInternal(void)::g_EntityCFoWBlockerEntityClass;
    CFoWBlockerEntity::GetEntityClassInternal(void)::g_EntityCFoWBlockerEntityClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
    g_pEntityCFoWBlockerEntityClass->m_pComponentOverrides = 0;
  }
  CFoWBlockerEntity::GetEntityClassInternal(void)::g_EntityCFoWBlockerEntityClass.m_flags |= 0x10u;
  return 1;
}


// FOWTraceRayVerticalGroundHeight  (line 66, @0x00000000024b4d20, libserver.so)
// calls: UTIL_TraceRayVerticalGroundHeight
float __fastcall FOWTraceRayVerticalGroundHeight(
        SpawnGroupHandle_t a1,
        float a2,
        float a3,
        float a4,
        float a5,
        float a6,
        float a7)
{
  return UTIL_TraceRayVerticalGroundHeight(a1, a2, a3, a4, a5, a6, a7, 0x7021u);
}


// CFoWBlockerEntity::Spawn  (line 78, @0x00000000024c0d80, libserver.so)  // inlines: GetFoW
// calls: CBaseEntity::Spawn, CBaseEntity::GetAbsOrigin, CDOTAFogOfWarSystem::GetFowInfoForWorldGroupId, CFoW::AddBlockingOccluder, UTIL_Remove
// globals: g_DOTAFogOfWarSystem
void __fastcall CFoWBlockerEntity::Spawn(CFoWBlockerEntity *const this, const CEntityKeyValues *pKeyValues)
{
  const Vector *AbsOrigin; // r12
  CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t *FowInfoForWorldGroupId; // rax

  CBaseEntity::Spawn(this, pKeyValues);
  AbsOrigin = CBaseEntity::GetAbsOrigin(this);
  FowInfoForWorldGroupId = CDOTAFogOfWarSystem::GetFowInfoForWorldGroupId(&g_DOTAFogOfWarSystem, 0);
  CFoW::AddBlockingOccluder(&FowInfoForWorldGroupId->m_FoW, AbsOrigin);
  UTIL_Remove(this);
}


// CFoWRevealerEntity::GetDataDescMap  (line 87, @0x00000000024b4290, libserver.so)
// globals: CFoWRevealerEntity::m_DataMap
datamap_t *__fastcall CFoWRevealerEntity::GetDataDescMap(CFoWRevealerEntity *const this)
{
  return &CFoWRevealerEntity::m_DataMap;
}


// CFoWRevealerEntity::AddDatadescMetadataKeys  (line 87, @0x00000000024c0410, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CFoWRevealerEntity::GetEntityClass(void)
void __fastcall CFoWRevealerEntity::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CFoWRevealerEntity::GetEntityClass);
}


// CFoWRevealerEntity::GetBaseMap  (line 87, @0x00000000024c0430, libserver.so)
datamap_t *__cdecl CFoWRevealerEntity::GetBaseMap()
{
  return &CBaseEntity::m_DataMap;
}


// DataMapInit<CFoWRevealerEntity>  (line 87, @0x00000000024c0440, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_dota_03.cpp
// strings: "CFoWRevealerEntity"
// globals: `guard variable for'DataMapInit<CFoWRevealerEntity>(CFoWRevealerEntity *)::nameHolder, CFoWRevealerEntity::GetEntityClass(void), CFoWRevealerEntity::m_DataMap, DataMapInit<CFoWRevealerEntity>(CFoWRevealerEntity *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CFoWRevealerEntity>(CFoWRevealerEntity *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CFoWRevealerEntity>(CFoWRevealerEntity *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CFoWRevealerEntity>(CFoWRevealerEntity *)::nameHolder) != 0 )
  {
    DataMapInit<CFoWRevealerEntity>(CFoWRevealerEntity *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CFoWRevealerEntity>(CFoWRevealerEntity *)::nameHolder.m_pszBase = "CFoWRevealerEntity";
    DataMapInit<CFoWRevealerEntity>(CFoWRevealerEntity *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CFoWRevealerEntity>(CFoWRevealerEntity *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CFoWRevealerEntity>(CFoWRevealerEntity *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CFoWRevealerEntity>(CFoWRevealerEntity *)::nameHolder.m_nLenBase = 18;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CFoWRevealerEntity>(CFoWRevealerEntity *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CFoWRevealerEntity>(CFoWRevealerEntity *)::nameHolder,
      &_dso_handle);
  }
  CFoWRevealerEntity::m_DataMap.dataNumFields = 2;
  CFoWRevealerEntity::m_DataMap.baseMap = &CBaseEntity::m_DataMap;
  CFoWRevealerEntity::m_DataMap.dataDesc = &DataMapInit<CFoWRevealerEntity>(CFoWRevealerEntity *)::dataDesc[1];
  AddDatadescMetadataKeys(&CFoWRevealerEntity::m_DataMap, CFoWRevealerEntity::GetEntityClass);
  return &CFoWRevealerEntity::m_DataMap;
}


// CFoWRevealerEntity::Spawn  (line 98, @0x00000000024c0dc0, libserver.so)  // inlines: AssignTo, Base, Element, FindKeyHash, GetClassNameAsCStr, GetClassname, GetFoW, GetTeamMapping, GetValue, GetValue<int>, Min<long long unsigned int>, Min<unsigned int>, String, atoi, operator[]
// calls: CBaseEntity::Spawn, FoW_TeamNumberToFoWIndex, CDOTAFogOfWarSystem::GetFowInfoForWorldGroupId, CFoW::AddViewer, CFoW::UpdateViewerSize, CFoW::UpdateViewerName, CBaseEntity::GetAbsOrigin, CFoW::UpdateViewerLocation, UTIL_Remove, strtol, VariantFieldTypeName, Warning
// strings: "No conversion from %s to int now\n"
// globals: jpt_24C0E60, CEntityKeyValues::sm_EmptyVariant, g_DOTAFogOfWarSystem, jpt_24C0FF3
void __fastcall CFoWRevealerEntity::Spawn(CFoWRevealerEntity *const this, const CEntityKeyValues *pKeyValues)
{
  int m_nCount; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t m_nAllocated; // cx
  __int64 i; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *m_uint64; // rdx
  CEntityVariant *p_m_value; // rcx
  int16 m_type; // ax
  int v11; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v12; // cx
  __int64 v13; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v14; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v15; // rdx
  CEntityVariant *v16; // rcx
  int16 v17; // ax
  uint64 v18; // rdx
  int m_float; // edi
  const char *m_pAsString; // r13
  unsigned int v21; // ebx
  CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t *FowInfoForWorldGroupId; // rax
  int v23; // ebx
  CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t *v24; // rax
  float v25; // xmm1_4
  CEntityIdentity *m_pEntity; // rax
  CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t *v27; // rax
  const Vector *AbsOrigin; // r13
  CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t *v29; // rax
  const char *v30; // rax
  const char *v31; // rax

  CBaseEntity::Spawn(this, pKeyValues);
  m_nCount = pKeyValues->m_keyHashes.m_nCount;
  if ( m_nCount > 0 )
  {
    m_nAllocated = pKeyValues->m_keyHashes.m_nAllocated;
    for ( i = 0; m_nCount > i; ++i )
    {
      if ( m_nAllocated != 0 )
      {
        m_pElements = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
        if ( m_nAllocated > 9 )
          m_pElements = pKeyValues->m_keyHashes.m_pElements;
        if ( m_pElements[i] == -1689692126 )
        {
LABEL_9:
          if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
            m_uint64 = pKeyValues->m_keyValues.m_pElements;
          else
            m_uint64 = 0;
          p_m_value = &m_uint64[i].m_value;
          LODWORD(m_uint64) = 500;
          m_type = p_m_value->m_type;
          if ( m_type != 0 )
            goto LABEL_12;
          goto LABEL_14;
        }
      }
      else if ( *(4 * i) == -1689692126 )
      {
        goto LABEL_9;
      }
    }
  }
  p_m_value = &CEntityKeyValues::sm_EmptyVariant;
  LODWORD(m_uint64) = 500;
  m_type = CEntityKeyValues::sm_EmptyVariant.m_type;
  if ( m_type != 0 )
  {
LABEL_12:
    switch ( m_type )
    {
      case 1:
        LODWORD(m_uint64) = p_m_value->m_float;
        break;
      case 5:
        LODWORD(m_uint64) = p_m_value->m_int;
        break;
      case 6:
        LODWORD(m_uint64) = p_m_value->m_char;
        break;
      case 26:
        LODWORD(m_uint64) = 0x7FFFFFFF;
        if ( p_m_value->m_int64 <= 0x7FFFFFFF )
        {
          LODWORD(m_uint64) = 0x80000000;
          if ( p_m_value->m_uint64 >= 0xFFFFFFFF80000000LL )
            m_uint64 = p_m_value->m_uint64;
        }
        break;
      case 30:
        LODWORD(m_uint64) = strtol(p_m_value->m_pszString, 0, 10);
        break;
      case 33:
        LODWORD(m_uint64) = 0x7FFFFFFF;
        if ( p_m_value->m_uint64 <= 0x7FFFFFFE )
          LODWORD(m_uint64) = p_m_value->m_uint64;
        break;
      case 34:
        LODWORD(m_uint64) = p_m_value->m_float64;
        break;
      case 37:
        LODWORD(m_uint64) = 0x7FFFFFFF;
        if ( p_m_value->m_int <= 0x7FFFFFFEu )
          LODWORD(m_uint64) = p_m_value->m_int;
        break;
      default:
        v31 = VariantFieldTypeName(m_type);
        Warning("No conversion from %s to int now\n", v31);
        LODWORD(m_uint64) = 500;
        break;
    }
  }
LABEL_14:
  this->m_nVisionRange = m_uint64;
  v11 = pKeyValues->m_keyHashes.m_nCount;
  if ( v11 <= 0 )
  {
LABEL_25:
    v16 = &CEntityKeyValues::sm_EmptyVariant;
    goto LABEL_26;
  }
  v12 = pKeyValues->m_keyHashes.m_nAllocated;
  v13 = 0;
  while ( v12 == 0 )
  {
    if ( *(4 * v13) == -175874245 )
      goto LABEL_22;
LABEL_19:
    if ( v11 <= ++v13 )
      goto LABEL_25;
  }
  v14 = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
  if ( v12 > 9 )
    v14 = pKeyValues->m_keyHashes.m_pElements;
  if ( v14[v13] != -175874245 )
    goto LABEL_19;
LABEL_22:
  if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
    v15 = pKeyValues->m_keyValues.m_pElements;
  else
    v15 = 0;
  v16 = &v15[v13].m_value;
LABEL_26:
  v17 = v16->m_type;
  LODWORD(v18) = 2;
  m_float = 2;
  if ( v17 != 0 )
  {
    switch ( v17 )
    {
      case 1:
        m_float = v16->m_float;
        LODWORD(v18) = m_float;
        break;
      case 5:
        m_float = v16->m_int;
        LODWORD(v18) = v16->m_int;
        break;
      case 6:
        m_float = v16->m_char;
        LODWORD(v18) = m_float;
        break;
      case 26:
        if ( v16->m_int64 > 0x7FFFFFFF )
          goto LABEL_33;
        LODWORD(v18) = 0x80000000;
        if ( v16->m_uint64 >= 0xFFFFFFFF80000000LL )
          v18 = v16->m_uint64;
        m_float = v18;
        break;
      case 30:
        m_float = strtol(v16->m_pszString, 0, 10);
        LODWORD(v18) = m_float;
        break;
      case 33:
        LODWORD(v18) = 0x7FFFFFFF;
        if ( v16->m_uint64 <= 0x7FFFFFFE )
          LODWORD(v18) = v16->m_uint64;
        m_float = v18;
        break;
      case 34:
        m_float = v16->m_float64;
        LODWORD(v18) = m_float;
        break;
      case 37:
        LODWORD(v18) = v16->m_int;
        m_float = v16->m_int;
        if ( v16->m_int > 0x7FFFFFFEu )
        {
LABEL_33:
          LODWORD(v18) = 0x7FFFFFFF;
          m_float = 0x7FFFFFFF;
        }
        break;
      default:
        v30 = VariantFieldTypeName(v17);
        Warning("No conversion from %s to int now\n", v30);
        LODWORD(v18) = 2;
        m_float = 2;
        break;
    }
  }
  this->m_unViewerTeam = v18;
  m_pAsString = "";
  v21 = FoW_TeamNumberToFoWIndex(m_float);
  FowInfoForWorldGroupId = CDOTAFogOfWarSystem::GetFowInfoForWorldGroupId(&g_DOTAFogOfWarSystem, 0);
  v23 = CFoW::AddViewer(&FowInfoForWorldGroupId->m_FoW, FoWViewerType_t::FOWVIEWERTYPE_FOWENTITY, v21);
  v24 = CDOTAFogOfWarSystem::GetFowInfoForWorldGroupId(&g_DOTAFogOfWarSystem, 0);
  CFoW::UpdateViewerSize(&v24->m_FoW, v23, v25);
  m_pEntity = this->m_pEntity;
  if ( m_pEntity->m_designerName.u.m_Id != 0 )
    m_pAsString = m_pEntity->m_designerName.u.m_pAsString;
  v27 = CDOTAFogOfWarSystem::GetFowInfoForWorldGroupId(&g_DOTAFogOfWarSystem, 0);
  CFoW::UpdateViewerName(&v27->m_FoW, v23, m_pAsString);
  AbsOrigin = CBaseEntity::GetAbsOrigin(this);
  v29 = CDOTAFogOfWarSystem::GetFowInfoForWorldGroupId(&g_DOTAFogOfWarSystem, 0);
  CFoW::UpdateViewerLocation(&v29->m_FoW, v23, AbsOrigin);
  UTIL_Remove(this);
}


// CDOTAFogOfWarSystem::BlindViewer  (line 114, @0x00000000024c0d20, libserver.so)  // inlines: SetFOWViewerID
// calls: CDOTAFogOfWarSystem::GetFowInfoForWorldGroupId, CFoW::RemoveViewer
// callers: CDOTA_BaseNPC::DeathComplete, CDOTA_BaseNPC_Hero::Event_Killed
void __fastcall CDOTAFogOfWarSystem::BlindViewer(CDOTAFogOfWarSystem *const this, CBaseModelEntity *pEntity)
{
  CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t *FowInfoForWorldGroupId; // rax

  if ( pEntity != 0 && pEntity->m_iViewerID >= 0 )
  {
    FowInfoForWorldGroupId = CDOTAFogOfWarSystem::GetFowInfoForWorldGroupId(this, pEntity->m_worldGroupId.m_nHashCode);
    if ( FowInfoForWorldGroupId != 0 )
      CFoW::RemoveViewer(&FowInfoForWorldGroupId->m_FoW, pEntity->m_iViewerID);
    pEntity->m_iViewerID = -2;
  }
}


// dota_minimap_boundary::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 162, @0x0000000002552780, libserver.so)
// globals: dota_minimap_boundary::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall dota_minimap_boundary::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const dota_minimap_boundary::CEntityInstanceEntityClass *const this)
{
  return dota_minimap_boundary::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// dota_minimap_boundary::CEntityInstanceEntityClass::AllocateInstance  (line 162, @0x0000000002552790, libserver.so)
void *__fastcall dota_minimap_boundary::CEntityInstanceEntityClass::AllocateInstance(
        dota_minimap_boundary::CEntityInstanceEntityClass *const this)
{
  return 0;
}


// dota_minimap_boundary::CEntityInstanceEntityClass::ConstructInstance  (line 162, @0x00000000025527a0, libserver.so)
CEntityInstance *__fastcall dota_minimap_boundary::CEntityInstanceEntityClass::ConstructInstance(
        dota_minimap_boundary::CEntityInstanceEntityClass *const this,
        void *p)
{
  return p;
}


// dota_minimap_boundary::CEntityInstanceEntityClass::DestructInstance  (line 162, @0x00000000025527b0, libserver.so)
void __fastcall dota_minimap_boundary::CEntityInstanceEntityClass::DestructInstance(
        dota_minimap_boundary::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  ;
}


// dota_minimap_boundary::CEntityInstanceEntityClass::FreeInstance  (line 162, @0x00000000025527c0, libserver.so)
void __fastcall dota_minimap_boundary::CEntityInstanceEntityClass::FreeInstance(
        dota_minimap_boundary::CEntityInstanceEntityClass *const this,
        void *p)
{
  ;
}


// dota_minimap_boundary::CEntityInstanceEntityClass::CanAllocate  (line 162, @0x00000000025527d0, libserver.so)
bool __fastcall dota_minimap_boundary::CEntityInstanceEntityClass::CanAllocate(
        const dota_minimap_boundary::CEntityInstanceEntityClass *const this)
{
  return 0;
}


// dota_minimap_boundary::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 162, @0x00000000025527e0, libserver.so)
// globals: dota_minimap_boundary::s_pSchemaBinding
const ISchemaBinding *__fastcall dota_minimap_boundary::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        dota_minimap_boundary::CEntityInstanceEntityClass *const this)
{
  return dota_minimap_boundary::s_pSchemaBinding;
}


// dota_minimap_boundary::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 162, @0x0000000002560a40, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall dota_minimap_boundary::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        dota_minimap_boundary::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_40F1710;  // vptr: CEmptyEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// dota_minimap_boundary::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 162, @0x0000000002560a60, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall dota_minimap_boundary::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        dota_minimap_boundary::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_40F1710;  // vptr: CEmptyEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// dota_minimap_boundary::GetEntityClassInternal  (line 162, @0x0000000002574e80, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_dota_03.cpp
// strings: "dota_minimap_boundary"
// globals: `guard variable for'dota_minimap_boundary::GetEntityClassInternal(void)::g_Entitydota_minimap_boundaryClass, dota_minimap_boundary::GetEntityClassInternal(void)::g_Entitydota_minimap_boundaryClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, dota_minimap_boundary::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'dota_minimap_boundary::GetEntityClassInfo(void)::g_Entitydota_minimap_boundaryClassInfo, dota_minimap_boundary::GetEntityClassInfo(void)::g_Entitydota_minimap_boundaryClassInfo
CEntityClass *__cdecl dota_minimap_boundary::GetEntityClassInternal()
{
  if ( `guard variable for'dota_minimap_boundary::GetEntityClassInternal(void)::g_Entitydota_minimap_boundaryClass == 0
    && __cxa_guard_acquire(&`guard variable for'dota_minimap_boundary::GetEntityClassInternal(void)::g_Entitydota_minimap_boundaryClass) != 0 )
  {
    dota_minimap_boundary::GetEntityClassInternal(void)::g_Entitydota_minimap_boundaryClass.m_designerName.u.m_Id = 0;
    dota_minimap_boundary::GetEntityClassInternal(void)::g_Entitydota_minimap_boundaryClass._vptr_CEntityClass = off_3F79390;
    dota_minimap_boundary::GetEntityClassInternal(void)::g_Entitydota_minimap_boundaryClass.m_ComponentOffsets.m_Size = 0;
    dota_minimap_boundary::GetEntityClassInternal(void)::g_Entitydota_minimap_boundaryClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    dota_minimap_boundary::GetEntityClassInternal(void)::g_Entitydota_minimap_boundaryClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    dota_minimap_boundary::GetEntityClassInternal(void)::g_Entitydota_minimap_boundaryClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    dota_minimap_boundary::GetEntityClassInternal(void)::g_Entitydota_minimap_boundaryClass.m_AllHelpers.m_Size = 0;
    dota_minimap_boundary::GetEntityClassInternal(void)::g_Entitydota_minimap_boundaryClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    dota_minimap_boundary::GetEntityClassInternal(void)::g_Entitydota_minimap_boundaryClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    dota_minimap_boundary::GetEntityClassInternal(void)::g_Entitydota_minimap_boundaryClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    dota_minimap_boundary::GetEntityClassInternal(void)::g_Entitydota_minimap_boundaryClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &dota_minimap_boundary::GetEntityClassInternal(void)::g_Entitydota_minimap_boundaryClass.m_instanceUnserializer.m_atomicFields,
      4);
    dota_minimap_boundary::GetEntityClassInternal(void)::g_Entitydota_minimap_boundaryClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    dota_minimap_boundary::GetEntityClassInternal(void)::g_Entitydota_minimap_boundaryClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    dota_minimap_boundary::GetEntityClassInternal(void)::g_Entitydota_minimap_boundaryClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    dota_minimap_boundary::GetEntityClassInternal(void)::g_Entitydota_minimap_boundaryClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    dota_minimap_boundary::GetEntityClassInternal(void)::g_Entitydota_minimap_boundaryClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &dota_minimap_boundary::GetEntityClassInternal(void)::g_Entitydota_minimap_boundaryClass;
    dota_minimap_boundary::GetEntityClassInternal(void)::g_Entitydota_minimap_boundaryClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    dota_minimap_boundary::GetEntityClassInternal(void)::g_Entitydota_minimap_boundaryClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    dota_minimap_boundary::GetEntityClassInternal(void)::g_Entitydota_minimap_boundaryClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    dota_minimap_boundary::GetEntityClassInternal(void)::g_Entitydota_minimap_boundaryClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    dota_minimap_boundary::GetEntityClassInternal(void)::g_Entitydota_minimap_boundaryClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    dota_minimap_boundary::GetEntityClassInternal(void)::g_Entitydota_minimap_boundaryClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    dota_minimap_boundary::GetEntityClassInternal(void)::g_Entitydota_minimap_boundaryClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    dota_minimap_boundary::GetEntityClassInternal(void)::g_Entitydota_minimap_boundaryClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    dota_minimap_boundary::GetEntityClassInternal(void)::g_Entitydota_minimap_boundaryClass.m_classInputs.m_Size = 0;
    dota_minimap_boundary::GetEntityClassInternal(void)::g_Entitydota_minimap_boundaryClass.m_classInputs.m_Memory.m_pMemory = 0;
    dota_minimap_boundary::GetEntityClassInternal(void)::g_Entitydota_minimap_boundaryClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    dota_minimap_boundary::GetEntityClassInternal(void)::g_Entitydota_minimap_boundaryClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    dota_minimap_boundary::GetEntityClassInternal(void)::g_Entitydota_minimap_boundaryClass.m_classOutputs.m_Size = 0;
    dota_minimap_boundary::GetEntityClassInternal(void)::g_Entitydota_minimap_boundaryClass.m_classOutputs.m_Memory.m_pMemory = 0;
    dota_minimap_boundary::GetEntityClassInternal(void)::g_Entitydota_minimap_boundaryClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    dota_minimap_boundary::GetEntityClassInternal(void)::g_Entitydota_minimap_boundaryClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    dota_minimap_boundary::GetEntityClassInternal(void)::g_Entitydota_minimap_boundaryClass.m_requiredEHandle.m_Index = -1;
    dota_minimap_boundary::GetEntityClassInternal(void)::g_Entitydota_minimap_boundaryClass.m_hNetworkSerializer = 0;
    dota_minimap_boundary::GetEntityClassInternal(void)::g_Entitydota_minimap_boundaryClass.m_pBaseClassInfo = 0;
    dota_minimap_boundary::GetEntityClassInternal(void)::g_Entitydota_minimap_boundaryClass.m_pClassInfo = 0;
    dota_minimap_boundary::GetEntityClassInternal(void)::g_Entitydota_minimap_boundaryClass.m_flags = 0;
    dota_minimap_boundary::GetEntityClassInternal(void)::g_Entitydota_minimap_boundaryClass.m_nAllHelpersFlags = 0;
    dota_minimap_boundary::GetEntityClassInternal(void)::g_Entitydota_minimap_boundaryClass.m_pScriptClassDesc = 0;
    dota_minimap_boundary::GetEntityClassInternal(void)::g_Entitydota_minimap_boundaryClass.m_pInputs = 0;
    dota_minimap_boundary::GetEntityClassInternal(void)::g_Entitydota_minimap_boundaryClass.m_nInputCount = 0;
    dota_minimap_boundary::GetEntityClassInternal(void)::g_Entitydota_minimap_boundaryClass.m_pOutputs = 0;
    dota_minimap_boundary::GetEntityClassInternal(void)::g_Entitydota_minimap_boundaryClass.m_nOutputCount = 0;
    dota_minimap_boundary::GetEntityClassInternal(void)::g_Entitydota_minimap_boundaryClass.m_pGameClass = 0;
    dota_minimap_boundary::GetEntityClassInternal(void)::g_Entitydota_minimap_boundaryClass._vptr_CEntityClass = off_40F7BB0;
    __cxa_guard_release(&`guard variable for'dota_minimap_boundary::GetEntityClassInternal(void)::g_Entitydota_minimap_boundaryClass);
    __cxa_atexit(
      dota_minimap_boundary::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &dota_minimap_boundary::GetEntityClassInternal(void)::g_Entitydota_minimap_boundaryClass,
      &_dso_handle);
  }
  if ( g_pEntitydota_minimap_boundaryClass != 0 )
    return &dota_minimap_boundary::GetEntityClassInternal(void)::g_Entitydota_minimap_boundaryClass;
  if ( `guard variable for'dota_minimap_boundary::GetEntityClassInfo(void)::g_Entitydota_minimap_boundaryClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'dota_minimap_boundary::GetEntityClassInfo(void)::g_Entitydota_minimap_boundaryClassInfo) != 0 )
  {
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &dota_minimap_boundary::GetEntityClassInfo(void)::g_Entitydota_minimap_boundaryClassInfo,
      "",
      "dota_minimap_boundary",
      "",
      &g_EntityRootClassInfo);
    __cxa_guard_release(&`guard variable for'dota_minimap_boundary::GetEntityClassInfo(void)::g_Entitydota_minimap_boundaryClassInfo);
  }
  dota_minimap_boundary::GetEntityClassInternal(void)::g_Entitydota_minimap_boundaryClass.m_pClassInfo = &dota_minimap_boundary::GetEntityClassInfo(void)::g_Entitydota_minimap_boundaryClassInfo;
  dota_minimap_boundary::GetEntityClassInternal(void)::g_Entitydota_minimap_boundaryClass.m_pBaseClassInfo = dota_minimap_boundary::GetEntityClassInfo(void)::g_Entitydota_minimap_boundaryClassInfo.m_pBaseClassInfo;
  g_pEntitydota_minimap_boundaryClass = &dota_minimap_boundary::GetEntityClassInternal(void)::g_Entitydota_minimap_boundaryClass;
  dota_minimap_boundary::GetEntityClassInfo(void)::g_Entitydota_minimap_boundaryClassInfo.m_pClass = &dota_minimap_boundary::GetEntityClassInternal(void)::g_Entitydota_minimap_boundaryClass;
  return &dota_minimap_boundary::GetEntityClassInternal(void)::g_Entitydota_minimap_boundaryClass;
}


// OnFOWIsDiabledChanged  (line 200, @0x00000000024c0c80, libserver.so)  // inlines: GetBool, GetInt
// calls: CDOTAFogOfWarSystem::EnableFogOfWar
// globals: g_DOTAFogOfWarSystem
void __fastcall OnFOWIsDiabledChanged(IConVar *var, const char *pOldValue, double a3, float flOldValue)
{
  CDOTAFogOfWarSystem::EnableFogOfWar(&g_DOTAFogOfWarSystem, dota_fow_is_disabled.m_pParent->m_Value.m_nValue == 0);
}


// CmdDotaFowDisable  (line 207, @0x00000000024bbc80, libserver.so)  // inlines: CEntityHandle, DOTAGameRules, Get, GetEntryIndex, GetGameModeEntity, GetHandleEntity, GetInstance, GetSerialNumber, IndexToIdentity, Init, LookupEntity, atoi
// calls: strtol, ConVar::SetValue, Msg, CDOTABaseGameMode::SetFogOfWarDisabled
// strings: "Usage: dota_fow_disable < 0 | 1 >\n"
// globals: dota_fow_is_disabled
void __fastcall CmdDotaFowDisable(const CCommandContext *const ctx, const CCommand *const args)
{
  unsigned __int16 v2; // dx
  int v3; // edi
  int v4; // eax
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  int v7; // eax
  CDOTABaseGameMode *m_pInstance; // rbx
  int v9; // eax

  if ( args->m_nArgc <= 1 )
  {
    Msg("Usage: dota_fow_disable < 0 | 1 >\n");
  }
  else
  {
    if ( *&g_pGameRules[6].m_szQuestName[72] == -1 )
    {
      v2 = 0x7FFF;
      v3 = 0x7FFF;
    }
    else
    {
      v2 = *&g_pGameRules[6].m_szQuestName[72] & 0x7FFF;
      v3 = v2;
    }
    v4 = (*&g_pGameRules[6].m_szQuestName[72] >> 15 << 15) | v2 & 0x7FFF;
    if ( (v4 + 2) > 1
      && (v5 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v3 >> 9]) != 0
      && (v6 = &v5[v3 & 0x1FF]) != 0
      && v4 == v6->m_EHandle.m_Index
      && (m_pInstance = v6->m_pInstance, v6->m_pInstance != 0) )
    {
      v9 = strtol(args->m_ppArgv[1], 0, 10);
      CDOTABaseGameMode::SetFogOfWarDisabled(m_pInstance, v9 != 0);
    }
    else
    {
      v7 = strtol(args->m_ppArgv[1], 0, 10);
      ConVar::SetValue(&dota_fow_is_disabled, v7 != 0);
    }
  }
}


// CDOTAFogOfWarSystem::YouForgot::ToDefine_DEFINE_GAME_SYSTEM  (line 231, @0x00000000024c0510, libserver.so)
void __cdecl CDOTAFogOfWarSystem::YouForgot::ToDefine_DEFINE_GAME_SYSTEM()
{
  ;
}


// CDOTAFogOfWarSystem::CDOTAFogOfWarSystem  (line 236, @0x00000000024deab0, libserver.so)  // inlines: CUtlHashtable, CUtlMemory, V_memset, memset
// callers: _GLOBAL__sub_I__unity_dota_03.cpp
void __fastcall CDOTAFogOfWarSystem::CDOTAFogOfWarSystem(CDOTAFogOfWarSystem *const this)
{
  this->_vptr_IGameSystem = off_40F7C90;  // vptr: CDOTAFogOfWarSystem
  this->m_fowLookup.m_table.m_pMemory = 0;
  this->m_fowLookup.m_table.m_nAllocationCount = 0;
  this->m_fowLookup.m_table.m_nGrowSize = 0;
  this->m_fowLookup.m_nUsed = 0;
  this->m_fowLookup.m_nMinSize = 32;
  this->m_fowLookup.m_bSizeLocked = 0;
  this->m_fowSize.m_table.m_pMemory = 0;
  this->m_fowSize.m_table.m_nAllocationCount = 0;
  this->m_fowSize.m_table.m_nGrowSize = 0;
  this->m_fowSize.m_nUsed = 0;
  this->m_fowSize.m_nMinSize = 32;
  this->m_fowSize.m_bSizeLocked = 0;
  *this->m_flDefaultHeightLevels = 0;
  *&this->m_flDefaultHeightLevels[2] = 0;
  this->m_bDefaultHeightLevelsValid = 0;
}


// CDOTAFogOfWarSystem::GameInit  (line 246, @0x00000000024c1870, libserver.so)
// calls: CDOTAFogOfWarSystem::ReadHeightLevels
void __fastcall CDOTAFogOfWarSystem::GameInit(CDOTAFogOfWarSystem *const this, const EventGameInit_t *const msg)
{
  CDOTAFogOfWarSystem::ReadHeightLevels(this);
}


// CDOTAFogOfWarSystem::GameShutdown  (line 255, @0x00000000024deb30, libserver.so)  // inlines: FirstHandle, NextHandle, Purge, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~SpawnGroupFoWInfo_t
// calls: CUtlHashtable<CUtlStringToken, CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t*, DefaultHashFunctor<CUtlStringToken>, DefaultEqualFunctor<CUtlStringToken>, undefined_t, CUtlMemory<CUtlHashtableEntry<CUtlStringToken, CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t*>, int> >::RemoveAll, CUtlHashtable<unsigned int, CDOTAFogOfWarSystem::SpawnGroupFowSize_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, CDOTAFogOfWarSystem::SpawnGroupFowSize_t>, int> >::RemoveAll, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CFoW::~CFoW, operator delete, CUtlMemory<CHandle<CBaseEntity>, int>::Purge, CUtlMemory<CUtlHashtableEntry<unsigned int, CDOTAFogOfWarSystem::SpawnGroupFowSize_t>, int>::Purge, CUtlMemory<CUtlHashtableEntry<CUtlStringToken, CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t*>, int>::Purge
void __fastcall CDOTAFogOfWarSystem::GameShutdown(
        CDOTAFogOfWarSystem *const this,
        const EventGameShutdown_t *const msg)
{
  int m_nAllocationCount; // ecx
  CUtlHashtableEntry<CUtlStringToken,CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t*> *m_pMemory; // rsi
  CUtlHashtableEntry<CUtlStringToken,CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t*> *v5; // rdx
  int v6; // eax
  __int64 v7; // r12
  __int64 v8; // rdx
  int v9; // eax
  int v10; // ecx
  int v11; // eax
  CUtlHashtableEntry<CUtlStringToken,CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t*> *v12; // rdx
  __int64 v13; // r14
  int v14; // r13d

  m_nAllocationCount = this->m_fowLookup.m_table.m_nAllocationCount;
  m_pMemory = this->m_fowLookup.m_table.m_pMemory;
  if ( m_nAllocationCount > 0 )
  {
    v5 = m_pMemory + 1;
    v6 = 0;
    if ( m_pMemory->flags_and_hash < 0 )
    {
      while ( ++v6 != m_nAllocationCount )
      {
        ++v5;
        if ( v5[-1].flags_and_hash >= 0 )
        {
          if ( v6 != -1 )
          {
            v14 = v6;
            goto LABEL_12;
          }
          break;
        }
      }
    }
    else
    {
      v14 = 0;
      do
      {
LABEL_12:
        v7 = v14;
        v8 = *&m_pMemory[v7].data[2];
        v9 = *(v8 + 1080) - 1;
        *(v8 + 1080) = v9;
        m_pMemory = this->m_fowLookup.m_table.m_pMemory;
        if ( v9 <= 0 )
        {
          v13 = *&m_pMemory[v7].data[2];
          if ( v13 != 0 )
          {
            CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll((v13 + 1056));
            if ( (*(v13 + 1076) & 0xC0000000) == 0 )
            {
              CUtlMemory<CHandle<CBaseEntity>,int>::Purge((v13 + 1064));
              if ( (*(v13 + 1076) & 0xC0000000) == 0 )
                CUtlMemory<CHandle<CBaseEntity>,int>::Purge((v13 + 1064));
            }
            CFoW::~CFoW(v13);
            operator delete(v13);
            m_pMemory = this->m_fowLookup.m_table.m_pMemory;
          }
        }
        v10 = this->m_fowLookup.m_table.m_nAllocationCount;
        v11 = v14 + 1;
        if ( v14 + 1 >= v10 )
          break;
        v12 = &m_pMemory[v11 + 1];
        if ( m_pMemory[v7 + 1].flags_and_hash < 0 )
        {
          while ( ++v11 != v10 )
          {
            ++v12;
            if ( v12[-1].flags_and_hash >= 0 )
              goto LABEL_19;
          }
          break;
        }
LABEL_19:
        v14 = v11;
      }
      while ( v11 != -1 );
    }
  }
  CUtlHashtable<CUtlStringToken,CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t *,DefaultHashFunctor<CUtlStringToken>,DefaultEqualFunctor<CUtlStringToken>,undefined_t,CUtlMemory<CUtlHashtableEntry<CUtlStringToken,CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t *>,int>>::RemoveAll(&this->m_fowLookup);
  if ( (this->m_fowLookup.m_table.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<CUtlHashtableEntry<CUtlStringToken,CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t *>,int>::Purge(&this->m_fowLookup.m_table);
  CUtlHashtable<unsigned int,CDOTAFogOfWarSystem::SpawnGroupFowSize_t,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,CDOTAFogOfWarSystem::SpawnGroupFowSize_t>,int>>::RemoveAll(&this->m_fowSize);
  if ( (this->m_fowSize.m_table.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<CUtlHashtableEntry<unsigned int,CDOTAFogOfWarSystem::SpawnGroupFowSize_t>,int>::Purge(&this->m_fowSize.m_table);
}


// CDOTAFogOfWarSystem::GetFoW  (line 269, @0x00000000024c0d70, libserver.so)
// calls: CDOTAFogOfWarSystem::GetFowInfoForWorldGroupId
// callers: CBaseModelEntity::UpdateVisibility, CParticleSystemQuery::GetPointVisibilityPercentage, CDOTABaseGameMode::SetUnseenFogOfWarEnabled, CDOTA_Modifier_Teleporting::GenerateSound, CDOTA_SimpleObstruction::~CDOTA_SimpleObstruction, CDOTA_SimpleObstruction::SetEnabled, CDOTA_SimpleObstruction::Spawn, CDOTA_TempTree::UpdateVisibility, CDOTA_MapTree::Spawn, CDOTA_TempTree::InitTree, CDOTA_Tree::ShutdownTree, CDOTA_MapTree::CutDownEx (21 total)
CFoW *__fastcall CDOTAFogOfWarSystem::GetFoW(CDOTAFogOfWarSystem *const this, WorldGroupId_t nWorldGroupId)
{
  return CDOTAFogOfWarSystem::GetFowInfoForWorldGroupId(this, nWorldGroupId.m_nHashCode);
}


// CDOTAFogOfWarSystem::HasFoW  (line 276, @0x00000000024c0520, libserver.so)  // inlines: DoLookup<const CUtlStringToken&>, Find, HashItem<unsigned int>, operator()
// calls: MurmurHash2, CUtlHashtable<CUtlStringToken, CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t*, DefaultHashFunctor<CUtlStringToken>, DefaultEqualFunctor<CUtlStringToken>, undefined_t, CUtlMemory<CUtlHashtableEntry<CUtlStringToken, CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t*>, int> >::DoLookup<const CUtlStringToken&>
__int64 __fastcall CDOTAFogOfWarSystem::HasFoW(CDOTAFogOfWarSystem *const this, uint32 a2)
{
  uint32 v3; // eax
  unsigned int v5; // ecx
  WorldGroupId_t nWorldGroupIda; // [rsp+0h] [rbp-20h] BYREF

  nWorldGroupIda.m_nHashCode = a2;
  v3 = MurmurHash2(&nWorldGroupIda, 4, 0x3501A674u);
  if ( this->m_fowLookup.m_nUsed == 0 )
    return 0;
  LOBYTE(v5) = CUtlHashtable<CUtlStringToken,CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t *,DefaultHashFunctor<CUtlStringToken>,DefaultEqualFunctor<CUtlStringToken>,undefined_t,CUtlMemory<CUtlHashtableEntry<CUtlStringToken,CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t *>,int>>::DoLookup<CUtlStringToken const&>(
                 &this->m_fowLookup,
                 &nWorldGroupIda,
                 v3,
                 0) != -1;
  return v5;
}


// CDOTAFogOfWarSystem::SetDebugInfo  (line 285, @0x00000000024c0590, libserver.so)  // inlines: GetBool, GetInt
// calls: CFoW::SetDebugVisibility, CFoW::SetDebugTeam, CFoW::EnableDebugFlags, UTIL_PlayerByIndex, CBaseEntity::GetAbsOrigin, CFoW::DrawDebugInfo, CFoW::DisableDebugFlags
// callers: CDOTAFogOfWarSystem::UpdateFogOfWar
void __fastcall CDOTAFogOfWarSystem::SetDebugInfo(
        CDOTAFogOfWarSystem *const this,
        CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t *pFoWInfo)
{
  unsigned int m_nValue; // esi
  CBasePlayer *v4; // rax
  float v5; // xmm4_4
  Vector vOrigin; // [rsp+0h] [rbp-20h] BYREF

  CFoW::SetDebugVisibility(&pFoWInfo->m_FoW, fow_debug.m_pParent->m_Value.m_nValue != 0);
  m_nValue = fow_debug_team.m_pParent->m_Value.m_nValue;
  if ( m_nValue != -1 )
    CFoW::SetDebugTeam(&pFoWInfo->m_FoW, m_nValue);
  if ( fow_show_viewers.m_pParent->m_Value.m_nValue != 0 )
    CFoW::EnableDebugFlags(&pFoWInfo->m_FoW, 1u);
  else
    CFoW::DisableDebugFlags(&pFoWInfo->m_FoW, 1u);
  if ( fow_show_occluders.m_pParent->m_Value.m_nValue != 0 )
    CFoW::EnableDebugFlags(&pFoWInfo->m_FoW, 2u);
  else
    CFoW::DisableDebugFlags(&pFoWInfo->m_FoW, 2u);
  if ( fow_show_grid.m_pParent->m_Value.m_nValue != 0 )
    CFoW::EnableDebugFlags(&pFoWInfo->m_FoW, 4u);
  else
    CFoW::DisableDebugFlags(&pFoWInfo->m_FoW, 4u);
  if ( fow_show_grid_xy.m_pParent->m_Value.m_nValue != 0 )
    CFoW::EnableDebugFlags(&pFoWInfo->m_FoW, 0x10u);
  else
    CFoW::DisableDebugFlags(&pFoWInfo->m_FoW, 0x10u);
  if ( fow_show_stats.m_pParent->m_Value.m_nValue != 0 )
    CFoW::EnableDebugFlags(&pFoWInfo->m_FoW, 8u);
  else
    CFoW::DisableDebugFlags(&pFoWInfo->m_FoW, 8u);
  v4 = UTIL_PlayerByIndex(1);
  if ( v4 != 0 )
  {
    vOrigin = *CBaseEntity::GetAbsOrigin(v4);
    CFoW::DrawDebugInfo(&pFoWInfo->m_FoW, &vOrigin, 1000.0, 250.0, 1300.0, v5);
  }
}


// ShouldDrawParticleFOW  (line 352, @0x00000000024c1190, libserver.so)  // inlines: GetFoW
// calls: CDOTAFogOfWarSystem::GetFowInfoForWorldGroupId, CFoW::GetLocationVisibilityDegree
// globals: g_DOTAFogOfWarSystem
bool __fastcall ShouldDrawParticleFOW(const char *pszParticleName, double a2, vec_t a3, float a4, float flRadius)
{
  CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t *FowInfoForWorldGroupId; // rax
  Vector vPositiona; // [rsp+10h] [rbp-20h] BYREF

  *&vPositiona.x = a2;
  vPositiona.z = a3;
  FowInfoForWorldGroupId = CDOTAFogOfWarSystem::GetFowInfoForWorldGroupId(&g_DOTAFogOfWarSystem, 0);
  return CFoW::GetLocationVisibilityDegree(&FowInfoForWorldGroupId->m_FoW, 0, &vPositiona, 1, a4, pszParticleName) > 0.0;
}


// ShouldDrawParticleFOW  (line 358, @0x00000000024c11f0, libserver.so)  // inlines: GetFoW
// calls: CDOTAFogOfWarSystem::GetFowInfoForWorldGroupId, CFoW::GetLocationVisibilityDegree
// globals: g_DOTAFogOfWarSystem
bool __fastcall ShouldDrawParticleFOW(const Vector *const vMin, const Vector *const vMax, const char *pszParticleName)
{
  CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t *FowInfoForWorldGroupId; // rax

  FowInfoForWorldGroupId = CDOTAFogOfWarSystem::GetFowInfoForWorldGroupId(&g_DOTAFogOfWarSystem, 0);
  return CFoW::GetLocationVisibilityDegree(&FowInfoForWorldGroupId->m_FoW, 0, vMin, vMax, 1, pszParticleName) > 0.0;
}


// CDOTAFogOfWarSystem::AddTempViewer  (line 374, @0x000000000252eb00, libserver.so)
// calls: FOWAddTempViewer
// callers: CDOTABaseAbility::CreateVisibilityNode, CDOTA_Ability_Greevil_Miniboss_Blue_IceVortex::OnSpellStart, CDOTA_Ability_BlackDragon_Fireball::OnSpellStart, Script_AddFOWViewer, CDOTA_Grinder::NextBuilding, CDOTA_BaseNPC_Fort::Event_Killed, CDOTA_Ability_Puck_IllusoryOrb::OnProjectileThink, CDOTA_Ability_AncientApparition_IceBlast::DestroyTracker, CDOTA_Ability_AncientApparition_IceBlast::OnProjectileThink_ExtraData, CDOTA_Modifier_Bloodseeker_Bloodbath_Thinker::OnDestroy, CDOTA_Ability_AncientApparition_IceVortex::OnSpellStart, CDOTA_Modifier_Kunkka_Torrent_Thinker::OnCreated (76 total)
__int64 __fastcall CDOTAFogOfWarSystem::AddTempViewer(
        CDOTAFogOfWarSystem *const this,
        FoWViewerType_t FowViewerType,
        int nTeamID,
        const CFieldPath *vLocation,
        float flRadius,
        float flDuration,
        bool bObstructedVision)
{
  return FOWAddTempViewer(FowViewerType, nTeamID, vLocation, flRadius, flDuration, bObstructedVision);
}


// CDOTAFogOfWarSystem::AddTempViewer  (line 379, @0x000000000252ea20, libserver.so)
// calls: FOWAddTempViewer
// callers: CDOTA_BaseNPC::MakeVisibleDueToAttack, CDOTA_BaseNPC::MakeVisibleToTeam, CDOTA_BaseNPC_Hero::Event_Killed, CDOTA_Ability_Tusk_IceShards::CreateShards
void __fastcall CDOTAFogOfWarSystem::AddTempViewer(
        CDOTAFogOfWarSystem *const this,
        CBaseModelEntity *p,
        int nTeamID,
        float flRadius,
        float flDuration,
        float a6)
{
  FOWAddTempViewer(p, nTeamID, flRadius, flDuration, a6);
}


// CDOTAFogOfWarSystem::RemoveTempViewer  (line 384, @0x00000000024c2250, libserver.so)
// calls: FOWRemoveTempViewer
// callers: CDOTA_Modifier_ArcWarden_SparkWraith_Thinker::OnIntervalThink
void __fastcall CDOTAFogOfWarSystem::RemoveTempViewer(CDOTAFogOfWarSystem *const this, int nTeam, int nID)
{
  FOWRemoveTempViewer(nTeam, nID);
}


// fow_server_test_tempviewer  (line 389, @0x000000000252ef10, libserver.so)  // inlines: AddTempViewer, Arg, FOWAddTempViewer, Get, GetEntityIdentity, GetInstance, Vector, operator bool, operator[]
// calls: V_stricmp_fast, FoW_TeamNumberToFoWIndex, CConcreteEntityList::LookupEntity, CEntityHandle::operator CEntityInstance*, CDOTAFogOfWarTempViewers::AddTempViewer, RandomFloat
// globals: CEntityHandle::gm_pEntityList, g_hFogOfWarTempViewers
void __fastcall fow_server_test_tempviewer(const CCommandContext *const ctx, const CCommand *const args)
{
  bool v3; // cc
  int v4; // ebx
  int v5; // r13d
  const char *v6; // rdi
  char *v7; // r14
  signed int v8; // ebx
  CDOTAFogOfWarTempViewers *v9; // rax
  Vector vLocation; // [rsp+0h] [rbp-30h] BYREF

  vLocation.x = 0.0;
  v3 = args->m_nArgc <= 1;
  vLocation.y = 3000.0;
  vLocation.z = 200.0;
  if ( v3 )
  {
    v5 = 2;
  }
  else
  {
    v4 = 1;
    v5 = 2;
    do
    {
      while ( 1 )
      {
        v7 = args + 8 * v4;
        if ( V_stricmp_fast(*(v7 + 129), "bad") != 0 )
          break;
        ++v4;
        v5 = 3;
        if ( args->m_nArgc <= v4 )
          goto LABEL_10;
      }
      v6 = "";
      if ( args->m_nArgc > v4 )
        v6 = *(v7 + 129);
      if ( V_stricmp_fast(v6, "random") == 0 )
      {
        vLocation.x = RandomFloat(-3000.0, 3000.0);
        vLocation.y = RandomFloat(-3000.0, 3000.0);
      }
      ++v4;
    }
    while ( args->m_nArgc > v4 );
  }
LABEL_10:
  v8 = FoW_TeamNumberToFoWIndex(v5);
  if ( CConcreteEntityList::LookupEntity(CEntityHandle::gm_pEntityList, &g_hFogOfWarTempViewers + v8) != 0 )
  {
    v9 = CEntityHandle::operator CEntityInstance *(&g_hFogOfWarTempViewers + v8);
    CDOTAFogOfWarTempViewers::AddTempViewer(
      v9,
      FoWViewerType_t::FOWVIEWERTYPE_SERVERTEST,
      v8,
      &vLocation,
      1800.0,
      5.0,
      1);
  }
}


// CDOTAFogOfWarSystem::FindHeightLevelForEntity  (line 416, @0x00000000024c18e0, libserver.so)  // inlines: ToDOTABaseNPC
// calls: CBaseEntity::GetAbsOrigin, GetPositionOnGround, CDOTAFogOfWarSystem::FindHeightLevel
// callers: CDOTA_BaseNPC::CreateAttackRecord, CDOTA_BaseNPC::DrawDebugTextOverlays, DamageImpact
int __fastcall CDOTAFogOfWarSystem::FindHeightLevelForEntity(
        CDOTAFogOfWarSystem *const this,
        CBaseModelEntity *pEntity)
{
  CDOTA_BaseNPC *v3; // r12
  const Vector *AbsOrigin; // rax
  Vector vLocation; // [rsp+0h] [rbp-20h] BYREF

  if ( pEntity != 0 && pEntity->m_bIsDOTANPC )
    v3 = pEntity;
  else
    v3 = 0;
  AbsOrigin = CBaseEntity::GetAbsOrigin(pEntity);
  vLocation = GetPositionOnGround(AbsOrigin, v3);
  return CDOTAFogOfWarSystem::FindHeightLevel(this, &vLocation);
}


// CDOTAFogOfWarSystem::IsLocationVisible  (line 430, @0x00000000024c1250, libserver.so)  // inlines: GetFoW, GetTeamMapping
// calls: FoW_TeamNumberToFoWIndex, CDOTAFogOfWarSystem::GetFowInfoForWorldGroupId, CFoW::GetLocationInfoForRadius
// callers: CDOTAGamerules::IsProjectionAbilityVisibleByEnemy, C2DGridObstructionManager::IsRecordInIgnoreList, CDOTA_PlayerResource::SetWorldTreeState, CDOTA_PlayerResource::UpdatePlayerData, CDOTA_ProjectileManager::CreateTrackingProjectileFiltered, CDOTA_MapTree::CutDownEx, CDOTA_TempTree::CutDown, CDOTA_MapTree::GrowBack, CreateTempTree, DOTA_EmitSoundLocation, DOTA_EmitSoundLocationWithCaster, GetBotTargetStatusCore (32 total)
bool __fastcall CDOTAFogOfWarSystem::IsLocationVisible(
        CDOTAFogOfWarSystem *const this,
        int iTeam,
        const Vector *const vLocation,
        float flRadius)
{
  unsigned int v6; // ebx
  CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t *FowInfoForWorldGroupId; // rax

  v6 = FoW_TeamNumberToFoWIndex(iTeam);
  FowInfoForWorldGroupId = CDOTAFogOfWarSystem::GetFowInfoForWorldGroupId(this, 0);
  return CFoW::GetLocationInfoForRadius(&FowInfoForWorldGroupId->m_FoW, v6, vLocation, flRadius);
}


// CC_FoW_Stats  (line 439, @0x00000000024c12a0, libserver.so)  // inlines: GetFoW
// calls: CDOTAFogOfWarSystem::GetFowInfoForWorldGroupId, CFoW::PrintStats
// globals: g_DOTAFogOfWarSystem
void __cdecl CC_FoW_Stats()
{
  CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t *FowInfoForWorldGroupId; // rax

  FowInfoForWorldGroupId = CDOTAFogOfWarSystem::GetFowInfoForWorldGroupId(&g_DOTAFogOfWarSystem, 0);
  CFoW::PrintStats(&FowInfoForWorldGroupId->m_FoW);
}


// CDOTAFogOfWarSystem::ComputeFOWBoundsForSpawnGroup  (line 452, @0x00000000024f8300, libserver.so)  // inlines: AssignTo, Base, CUtlKeyValuePair<unsigned int, CDOTAFogOfWarSystem::SpawnGroupFowSize_t>, Construct<CUtlKeyValuePair<unsigned int, CDOTAFogOfWarSystem::SpawnGroupFowSize_t>, unsigned int, CDOTAFogOfWarSystem::SpawnGroupFowSize_t>, DoInsert<unsigned int>, DoLookup<unsigned int>, Element, FindKeyHash, GetValue, GetValue<Vector>, GetValueString, Insert, TempString, Vector, VectorMax, VectorMin, fpmax, fpmin, operator(), operator=, operator[]
// calls: CUtlString::Get, V_stricmp_fast, VariantFieldTypeName, Warning, CSpawnGroupMgrGameSystem::GetWorldReference, CSpawnGroupMgrGameSystem::GetSpawnGroupWorldOffset, TransformAABB, CUtlHashtable<unsigned int, CDOTAFogOfWarSystem::SpawnGroupFowSize_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, CDOTAFogOfWarSystem::SpawnGroupFowSize_t>, int> >::DoInsertUnconstructed, CUtlHashtable<unsigned int, CDOTAFogOfWarSystem::SpawnGroupFowSize_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, CDOTAFogOfWarSystem::SpawnGroupFowSize_t>, int> >::DoLookup<unsigned int>, V_sscanf
// callers: CDOTAFogOfWarSystem::PreSpawnGroupLoad
// strings: "defaultSession", "dota_minimap_boundary", "No free conversion of %s variant to Vector right now\n"
// globals: CEntityKeyValues::sm_EmptyVariant
void __fastcall CDOTAFogOfWarSystem::ComputeFOWBoundsForSpawnGroup(
        CDOTAFogOfWarSystem *const this,
        const EventPreSpawnGroupLoad_t *const msg,
        Vector *pOutMin,
        Vector *pOutMax)
{
  const EventPreSpawnGroupLoad_t *v4; // rbx
  __int64 (__fastcall *v5)(IVEngineServer2 *, const char *, _QWORD, const char *, const char *, __int64); // r14
  const char *v6; // r13
  const char *v7; // rax
  int *v8; // rax
  int *v9; // r12
  int v10; // eax
  __int64 v11; // r15
  __int64 v12; // r13
  int v13; // r14d
  int *v14; // rbx
  __int16 *v15; // r12
  int v16; // esi
  __int16 v17; // cx
  __int64 i; // rax
  __int16 *v19; // rdx
  __int64 v20; // rdx
  CEntityVariant *v21; // rax
  int v22; // esi
  __int16 v23; // cx
  __int64 v24; // rax
  __int16 *v25; // rdx
  __int64 v26; // rdx
  CEntityVariant *v27; // rdi
  int16 m_type; // ax
  const char *v29; // rax
  IWorldReference *WorldReference; // rax
  SpawnGroupHandle_t m_SpawnGroupHandle; // esi
  const matrix3x4a_t *SpawnGroupWorldOffset; // rax
  CUtlHashtable<unsigned int,CDOTAFogOfWarSystem::SpawnGroupFowSize_t,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,CDOTAFogOfWarSystem::SpawnGroupFowSize_t>,int> > *p_m_fowSize; // r13
  unsigned int v34; // r12d
  unsigned int v35; // edx
  unsigned int v36; // eax
  unsigned int v37; // ebx
  CUtlHashtableEntry<unsigned int,CDOTAFogOfWarSystem::SpawnGroupFowSize_t> *v38; // rax
  float x; // xmm5_4
  float y; // xmm4_4
  float z; // xmm3_4
  IWorldReference *pWorld; // [rsp+18h] [rbp-98h]
  IWorldReference *pWorlda; // [rsp+18h] [rbp-98h]
  Vector vMin; // [rsp+40h] [rbp-70h] BYREF
  Vector vMax; // [rsp+50h] [rbp-60h] BYREF
  CDOTAFogOfWarSystem::SpawnGroupFowSize_t size; // [rsp+60h] [rbp-50h] BYREF

  v4 = msg;
  vMin.x = 3.4028235e38;
  vMin.y = 3.4028235e38;
  vMin.z = 3.4028235e38;
  vMax.x = -3.4028235e38;
  vMax.y = -3.4028235e38;
  vMax.z = -3.4028235e38;
  v5 = *(*engine + 112LL);
  v6 = CUtlString::Get(&msg->m_EntityLumpName);
  v7 = CUtlString::Get(&v4->m_SpawnGroupName);
  v8 = v5(engine, "defaultSession", 0, v7, v6, 1);
  v9 = v8;
  if ( v8 != 0 )
  {
    v10 = *v8;
    if ( v10 > 0 )
    {
      pWorld = v4;
      v11 = 0;
      v12 = 8LL * (v10 - 1) + 8;
      v13 = 0;
      v14 = v9;
      while ( 1 )
      {
        v15 = *(*(v14 + 1) + v11);
        v16 = *v15;
        if ( v16 > 0 )
        {
          v17 = v15[1];
          for ( i = 0; v16 > i; ++i )
          {
            if ( v17 != 0 )
            {
              v19 = v15 + 2;
              if ( v17 > 9 )
                v19 = *(v15 + 1);
              if ( *&v19[2 * i] == -971301790 )
              {
LABEL_12:
                if ( v15[21] != 0 )
                  v20 = *(v15 + 6);
                else
                  v20 = 0;
                v21 = (v20 + 24 * i);
                if ( v21->m_type == 30 )
                  goto LABEL_15;
LABEL_32:
                if ( V_stricmp_fast("", "dota_minimap_boundary") != 0 )
                  goto LABEL_33;
                goto LABEL_16;
              }
            }
            else if ( *(4 * i) == -971301790 )
            {
              goto LABEL_12;
            }
          }
        }
        v21 = &CEntityKeyValues::sm_EmptyVariant;
        if ( CEntityKeyValues::sm_EmptyVariant.m_type != 30 )
          goto LABEL_32;
LABEL_15:
        if ( V_stricmp_fast(v21->m_uint64, "dota_minimap_boundary") != 0 )
          goto LABEL_33;
LABEL_16:
        v22 = *v15;
        ++v13;
        if ( v22 <= 0 )
        {
LABEL_43:
          v27 = &CEntityKeyValues::sm_EmptyVariant;
          m_type = CEntityKeyValues::sm_EmptyVariant.m_type;
          if ( m_type != 0 )
            goto LABEL_27;
          goto LABEL_44;
        }
        v23 = v15[1];
        v24 = 0;
        while ( v23 == 0 )
        {
          if ( *(4 * v24) == -467664362 )
            goto LABEL_24;
LABEL_21:
          if ( v22 <= ++v24 )
            goto LABEL_43;
        }
        v25 = v15 + 2;
        if ( v23 > 9 )
          v25 = *(v15 + 1);
        if ( *&v25[2 * v24] != -467664362 )
          goto LABEL_21;
LABEL_24:
        if ( v15[21] != 0 )
          v26 = *(v15 + 6);
        else
          v26 = 0;
        v27 = (v26 + 24 * v24);
        m_type = v27->m_type;
        if ( m_type == 0 )
          goto LABEL_44;
LABEL_27:
        if ( m_type == 30 )
        {
          if ( V_sscanf(v27->m_uint64, "%g %g %g", &size, &size.m_vMins.y, &size.m_vMins.z) == 3 )
          {
            x = size.m_vMins.x;
            y = size.m_vMins.y;
            z = size.m_vMins.z;
            goto LABEL_45;
          }
LABEL_44:
          x = vec3_origin.x;
          y = vec3_origin.y;
          z = vec3_origin.z;
          goto LABEL_45;
        }
        if ( m_type != 39 && m_type != 3 )
        {
          v29 = VariantFieldTypeName(m_type);
          Warning("No free conversion of %s variant to Vector right now\n", v29);
          goto LABEL_44;
        }
        x = *v27->m_pszString;
        y = *(v27->m_uint64 + 4);
        z = *(v27->m_uint64 + 8);
LABEL_45:
        vMin.z = fminf(vMin.z, z);
        vMin.y = fminf(vMin.y, y);
        vMin.x = fminf(vMin.x, x);
        vMax.z = fmaxf(vMax.z, z);
        vMax.y = fmaxf(vMax.y, y);
        vMax.x = fmaxf(vMax.x, x);
LABEL_33:
        v11 += 8;
        if ( v11 == v12 )
        {
          v4 = pWorld;
          if ( v13 != 0 && vMin.x < vMax.x && vMin.y < vMax.y )
            goto LABEL_39;
          break;
        }
      }
    }
  }
  WorldReference = CSpawnGroupMgrGameSystem::GetWorldReference(g_pSpawnGroupMgr, v4->m_SpawnGroupHandle);
  if ( WorldReference == 0
    || (pWorlda = WorldReference, (*(*WorldReference + 16LL))(WorldReference) == 0)
    || (*(*pWorlda + 24LL))(pWorlda) != 0
    || (*(*pWorlda + 48LL))(pWorlda, &vMin, &vMax) == 0 )
  {
    vMin.x = -8192.0;
    vMin.y = -8192.0;
    vMax.x = 8192.0;
    vMax.y = 8192.0;
  }
LABEL_39:
  m_SpawnGroupHandle = v4->m_SpawnGroupHandle;
  vMin.z = 0.0;
  vMax.z = 0.0;
  SpawnGroupWorldOffset = CSpawnGroupMgrGameSystem::GetSpawnGroupWorldOffset(g_pSpawnGroupMgr, m_SpawnGroupHandle);
  TransformAABB(SpawnGroupWorldOffset, &vMin, &vMax, &size.m_vMins, &size.m_vMaxs);
  *pOutMin = size.m_vMins;
  p_m_fowSize = &this->m_fowSize;
  *pOutMax = size.m_vMaxs;
  v34 = v4->m_SpawnGroupHandle;
  v35 = 33 * (((4097 * v34 + 2127912214) >> 19) ^ (4097 * v34 + 2127912214) ^ 0xC761C23C);
  v36 = 9 * ((v35 - 369570787) ^ ((v35 + 374761393) << 9)) - 42973499;
  v37 = HIWORD(v36) ^ v36 ^ 0xB55A4F09;
  if ( this->m_fowSize.m_nUsed == 0
    || CUtlHashtable<unsigned int,CDOTAFogOfWarSystem::SpawnGroupFowSize_t,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,CDOTAFogOfWarSystem::SpawnGroupFowSize_t>,int>>::DoLookup<unsigned int>(
         p_m_fowSize,
         v34,
         v37,
         0) == -1 )
  {
    v38 = &this->m_fowSize.m_table.m_pMemory[CUtlHashtable<unsigned int,CDOTAFogOfWarSystem::SpawnGroupFowSize_t,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,CDOTAFogOfWarSystem::SpawnGroupFowSize_t>,int>>::DoInsertUnconstructed(
                                               p_m_fowSize,
                                               v37,
                                               1)];
    if ( v38 != -4LL )
    {
      v38->data[0] = v34;
      *&v38->data[1] = size;
    }
  }
}


// CDOTAFogOfWarSystem::SetVerticalLevelsForSpawnGroup  (line 508, @0x00000000024c0710, libserver.so)  // inlines: AddToTail, CUtlVectorBase, CUtlVectorFixed, CopyConstruct<float>
// calls: CWorldGameSystem::GetWorldInfoForSpawnGroup, CFoW::SetCustomVerticalLevels, __stack_chk_fail
// callers: CDOTAFogOfWarSystem::ActiveSpawnGroupChanged, CDOTAFogOfWarSystem::PreSpawnGroupLoad
void __fastcall CDOTAFogOfWarSystem::SetVerticalLevelsForSpawnGroup(
        CDOTAFogOfWarSystem *const this,
        CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t *pFoWInfo,
        SpawnGroupHandle_t hSpawnGroup)
{
  const WorldInfo_t *WorldInfoForSpawnGroup; // rax
  float *m_flDefaultHeightLevels; // rsi
  int m_Size; // edx
  float m_flTileGridStepHeight; // xmm2_4
  float m_flTileGridMinHeight; // xmm0_4
  int v10; // ecx
  float v11; // xmm2_4
  __int64 v12; // rdx
  CUtlVectorFixed<float,31ul> heightLevels; // [rsp+0h] [rbp-A0h] BYREF
  unsigned __int64 v14; // [rsp+88h] [rbp-18h]

  heightLevels.m_Size = 0;
  v14 = __readfsqword(0x28u);
  WorldInfoForSpawnGroup = CWorldGameSystem::GetWorldInfoForSpawnGroup(g_pWorldGameSystem, hSpawnGroup);
  m_flDefaultHeightLevels = this->m_flDefaultHeightLevels;
  m_Size = 4;
  m_flTileGridStepHeight = WorldInfoForSpawnGroup->m_flTileGridStepHeight;
  if ( m_flTileGridStepHeight > 0.0 )
  {
    m_flTileGridMinHeight = WorldInfoForSpawnGroup->m_flTileGridMinHeight;
    v10 = 31;
    v11 = m_flTileGridStepHeight * 0.75;
    do
    {
      v12 = heightLevels.m_Size++;
      *&heightLevels.m_Memory.m_Memory.m_Data[4 * v12] = m_flTileGridMinHeight + v11;
      m_flTileGridMinHeight = m_flTileGridMinHeight + WorldInfoForSpawnGroup->m_flTileGridStepHeight;
      if ( m_flTileGridMinHeight >= WorldInfoForSpawnGroup->m_flTileGridMaxHeight )
        break;
      --v10;
    }
    while ( v10 != 0 );
    m_Size = heightLevels.m_Size;
    m_flDefaultHeightLevels = heightLevels.m_Memory.m_Memory.m_Data;
  }
  CFoW::SetCustomVerticalLevels(&pFoWInfo->m_FoW, m_flDefaultHeightLevels, m_Size);
}


// CDOTAFogOfWarSystem::PreSpawnGroupLoad  (line 538, @0x00000000024f88b0, libserver.so)  // inlines: CUtlKeyValuePair<CUtlStringToken, CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t*>, Construct<CUtlKeyValuePair<CUtlStringToken, CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t*>, CUtlStringToken, CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t*>, DOTAGameRules, DoInsert<const CUtlStringToken&>, DoLookup<const CUtlStringToken&>, Find, GetFowTeamCount, GetGameMode, GetInt, HashItem<unsigned int>, Insert, IsAddOnGame, IsEmpty, SpawnGroupHasWorldGeomemtry, operator(), operator=, operator[]
// calls: CSpawnGroupMgrGameSystem::GetWorldGroupId, CDOTAFogOfWarSystem::ComputeFOWBoundsForSpawnGroup, MurmurHash2, operator new, CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t::SpawnGroupFoWInfo_t, CFoW::ClearState, CFoW::SetNumberOfTeams, CDOTAFogOfWarSystem::SetVerticalLevelsForSpawnGroup, CFoW::SetSize, CUtlHashtable<CUtlStringToken, CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t*, DefaultHashFunctor<CUtlStringToken>, DefaultEqualFunctor<CUtlStringToken>, undefined_t, CUtlMemory<CUtlHashtableEntry<CUtlStringToken, CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t*>, int> >::DoInsertUnconstructed, CUtlHashtable<CUtlStringToken, CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t*, DefaultHashFunctor<CUtlStringToken>, DefaultEqualFunctor<CUtlStringToken>, undefined_t, CUtlMemory<CUtlHashtableEntry<CUtlStringToken, CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t*>, int> >::DoLookup<const CUtlStringToken&>, operator delete (13 total)
// globals: FOWTraceRayVerticalGroundHeight(ulong long,float,float,float,float,float)
void __fastcall CDOTAFogOfWarSystem::PreSpawnGroupLoad(
        CDOTAFogOfWarSystem *const this,
        const EventPreSpawnGroupLoad_t *const msg)
{
  char *m_pString; // rax
  vec_t z; // eax
  uint32 v6; // eax
  CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t *v7; // r13
  CGameRules *v8; // rax
  int v9; // eax
  int v10; // esi
  uint32 v11; // eax
  unsigned int v12; // ebx
  CUtlHashtableEntry<CUtlStringToken,CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t*> *v13; // rax
  uint32 m_nHashCode; // edx
  UtlHashHandle_t v15; // eax
  __int64 v16; // rax
  CUtlHashtable<CUtlStringToken,CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t*,DefaultHashFunctor<CUtlStringToken>,DefaultEqualFunctor<CUtlStringToken>,undefined_t,CUtlMemory<CUtlHashtableEntry<CUtlStringToken,CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t*>,int> > *p_m_fowLookup; // [rsp+18h] [rbp-68h]
  WorldGroupId_t nWorldGroupId; // [rsp+20h] [rbp-60h] BYREF
  Vector vMin; // [rsp+30h] [rbp-50h] BYREF
  Vector vMax; // [rsp+40h] [rbp-40h] BYREF

  if ( msg->m_SpawnGroupName.m_pString != 0 && *msg->m_SpawnGroupName.m_pString != 0 )
  {
    m_pString = msg->m_EntityLumpName.m_pString;
    if ( m_pString == 0 || *m_pString == 0 )
    {
      nWorldGroupId.m_nHashCode = CSpawnGroupMgrGameSystem::GetWorldGroupId(g_pSpawnGroupMgr, msg->m_SpawnGroupHandle).m_nHashCode;
      if ( nWorldGroupId.m_nHashCode == 0 )
      {
        z = vec3_origin.z;
        *&vMin.x = *&vec3_origin.x;
        vMin.z = z;
        vMax.z = z;
        *&vMax.x = *&vec3_origin.x;
        CDOTAFogOfWarSystem::ComputeFOWBoundsForSpawnGroup(this, msg, &vMin, &vMax);
        p_m_fowLookup = &this->m_fowLookup;
        v6 = MurmurHash2(&nWorldGroupId, 4, 0x3501A674u);
        if ( this->m_fowLookup.m_nUsed == 0
          || (v15 = CUtlHashtable<CUtlStringToken,CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t *,DefaultHashFunctor<CUtlStringToken>,DefaultEqualFunctor<CUtlStringToken>,undefined_t,CUtlMemory<CUtlHashtableEntry<CUtlStringToken,CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t *>,int>>::DoLookup<CUtlStringToken const&>(
                      p_m_fowLookup,
                      &nWorldGroupId,
                      v6,
                      0)) == -1 )
        {
          v7 = operator new(0x458u);
          CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t::SpawnGroupFoWInfo_t(v7);
          v7->m_nRefCount = 1;
          CFoW::ClearState(&v7->m_FoW);
          v7->m_size.m_vMins.x = vMin.x;
          v7->m_size.m_vMins.y = vMin.y;
          v8 = g_pGameRules;
          v7->m_size.m_vMins.z = vMin.z;
          v7->m_size.m_vMaxs = vMax;
          if ( v8 != 0 )
          {
            v9 = *&v8[6].m_szQuestName[68];
            v10 = -1;
            if ( v9 != 15 )
              v10 = 3 * (v9 != 19) - 1;
          }
          else
          {
            v10 = 1;
          }
          CFoW::SetNumberOfTeams(&v7->m_FoW, v10);
          CDOTAFogOfWarSystem::SetVerticalLevelsForSpawnGroup(this, v7, msg->m_SpawnGroupHandle);
          CFoW::SetSize(
            &v7->m_FoW,
            1,
            msg->m_SpawnGroupHandle,
            &vMin,
            &vMax,
            dota_fow_grid_size.m_pParent->m_Value.m_nValue,
            -1,
            FOWTraceRayVerticalGroundHeight,
            90.0);
          v11 = MurmurHash2(&nWorldGroupId, 4, 0x3501A674u);
          v12 = v11;
          if ( this->m_fowLookup.m_nUsed == 0
            || CUtlHashtable<CUtlStringToken,CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t *,DefaultHashFunctor<CUtlStringToken>,DefaultEqualFunctor<CUtlStringToken>,undefined_t,CUtlMemory<CUtlHashtableEntry<CUtlStringToken,CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t *>,int>>::DoLookup<CUtlStringToken const&>(
                 p_m_fowLookup,
                 &nWorldGroupId,
                 v11,
                 0) == -1 )
          {
            v13 = &this->m_fowLookup.m_table.m_pMemory[CUtlHashtable<CUtlStringToken,CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t *,DefaultHashFunctor<CUtlStringToken>,DefaultEqualFunctor<CUtlStringToken>,undefined_t,CUtlMemory<CUtlHashtableEntry<CUtlStringToken,CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t *>,int>>::DoInsertUnconstructed(
                                                         p_m_fowLookup,
                                                         v12,
                                                         1)];
            if ( v13 != -4LL )
            {
              m_nHashCode = nWorldGroupId.m_nHashCode;
              *&v13->data[2] = v7;
              v13->data[0] = m_nHashCode;
            }
          }
        }
        else
        {
          v16 = *&this->m_fowLookup.m_table.m_pMemory[v15].data[2];
          ++*(v16 + 1080);
        }
      }
    }
  }
}


// CDOTAFogOfWarSystem::PostSpawnGroupUnload  (line 583, @0x00000000024decf0, libserver.so)  // inlines: DoLookup<const CUtlStringToken&>, Find, HashItem<unsigned int>, IsEmpty, Remove, RemoveByHandle, SpawnGroupHasWorldGeomemtry, operator(), operator[], ~CUtlVector, ~SpawnGroupFoWInfo_t
// calls: CSpawnGroupMgrGameSystem::GetWorldGroupId, MurmurHash2, CUtlHashtable<unsigned int, CDOTAFogOfWarSystem::SpawnGroupFowSize_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, CDOTAFogOfWarSystem::SpawnGroupFowSize_t>, int> >::DoRemove<unsigned int>, CUtlHashtable<CUtlStringToken, CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t*, DefaultHashFunctor<CUtlStringToken>, DefaultEqualFunctor<CUtlStringToken>, undefined_t, CUtlMemory<CUtlHashtableEntry<CUtlStringToken, CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t*>, int> >::DoLookup<const CUtlStringToken&>, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, CFoW::~CFoW, operator delete, CUtlHashtable<CUtlStringToken, CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t*, DefaultHashFunctor<CUtlStringToken>, DefaultEqualFunctor<CUtlStringToken>, undefined_t, CUtlMemory<CUtlHashtableEntry<CUtlStringToken, CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t*>, int> >::DoRemove<const CUtlStringToken&>
void __fastcall CDOTAFogOfWarSystem::PostSpawnGroupUnload(
        CDOTAFogOfWarSystem *const this,
        const EventPostSpawnGroupUnload_t *const msg)
{
  char *m_pString; // rax
  uint32 v5; // eax
  SpawnGroupHandle_t v6; // edx
  unsigned int v7; // eax
  signed int v8; // eax
  __int64 v9; // r14
  __int64 v10; // rdx
  int v11; // eax
  bool v12; // zf
  CUtlHashtableEntry<CUtlStringToken,CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t*> *v13; // rsi
  __int64 v14; // r15
  WorldGroupId_t nWorldGroupId; // [rsp+0h] [rbp-40h] BYREF

  if ( msg->m_SpawnGroupName.m_pString != 0 && *msg->m_SpawnGroupName.m_pString != 0 )
  {
    m_pString = msg->m_EntityLumpName.m_pString;
    if ( m_pString == 0 || *m_pString == 0 )
    {
      nWorldGroupId.m_nHashCode = CSpawnGroupMgrGameSystem::GetWorldGroupId(g_pSpawnGroupMgr, msg->m_SpawnGroupHandle).m_nHashCode;
      if ( nWorldGroupId.m_nHashCode == 0 )
      {
        v5 = MurmurHash2(&nWorldGroupId, 4, 0x3501A674u);
        if ( this->m_fowLookup.m_nUsed != 0 )
        {
          v8 = CUtlHashtable<CUtlStringToken,CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t *,DefaultHashFunctor<CUtlStringToken>,DefaultEqualFunctor<CUtlStringToken>,undefined_t,CUtlMemory<CUtlHashtableEntry<CUtlStringToken,CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t *>,int>>::DoLookup<CUtlStringToken const&>(
                 &this->m_fowLookup,
                 &nWorldGroupId,
                 v5,
                 0);
          if ( v8 != -1 )
          {
            v9 = v8;
            v10 = *&this->m_fowLookup.m_table.m_pMemory[v9].data[2];
            v11 = *(v10 + 1080) - 1;
            v12 = *(v10 + 1080) == 1;
            *(v10 + 1080) = v11;
            if ( v11 < 0 || v12 )
            {
              v13 = &this->m_fowLookup.m_table.m_pMemory[v9];
              v14 = *&v13->data[2];
              if ( v14 != 0 )
              {
                CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase((v14 + 1056));
                CFoW::~CFoW(v14);
                operator delete(v14);
                v13 = &this->m_fowLookup.m_table.m_pMemory[v9];
              }
              CUtlHashtable<CUtlStringToken,CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t *,DefaultHashFunctor<CUtlStringToken>,DefaultEqualFunctor<CUtlStringToken>,undefined_t,CUtlMemory<CUtlHashtableEntry<CUtlStringToken,CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t *>,int>>::DoRemove<CUtlStringToken const&>(
                &this->m_fowLookup,
                v13->data,
                v13->flags_and_hash & 0x3FFFFFFF);
            }
          }
        }
        v6 = 33
           * (((4097 * msg->m_SpawnGroupHandle + 2127912214) >> 19)
            ^ (4097 * msg->m_SpawnGroupHandle + 2127912214)
            ^ 0xC761C23C);
        v7 = 9 * ((v6 - 369570787) ^ ((v6 + 374761393) << 9)) - 42973499;
        CUtlHashtable<unsigned int,CDOTAFogOfWarSystem::SpawnGroupFowSize_t,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,CDOTAFogOfWarSystem::SpawnGroupFowSize_t>,int>>::DoRemove<unsigned int>(
          &this->m_fowSize,
          msg->m_SpawnGroupHandle,
          HIWORD(v7) ^ v7 ^ 0xB55A4F09);
      }
    }
  }
}


// CDOTAFogOfWarSystem::ActiveSpawnGroupChanged  (line 606, @0x00000000024c07f0, libserver.so)  // inlines: DoLookup<const CUtlStringToken&>, DoLookup<unsigned int>, Find, GetInt, HashItem<unsigned int>, operator!=, operator(), operator=, operator[]
// calls: CSpawnGroupMgrGameSystem::GetWorldGroupId, MurmurHash2, CUtlHashtable<CUtlStringToken, CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t*, DefaultHashFunctor<CUtlStringToken>, DefaultEqualFunctor<CUtlStringToken>, undefined_t, CUtlMemory<CUtlHashtableEntry<CUtlStringToken, CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t*>, int> >::DoLookup<const CUtlStringToken&>, CUtlHashtable<unsigned int, CDOTAFogOfWarSystem::SpawnGroupFowSize_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, CDOTAFogOfWarSystem::SpawnGroupFowSize_t>, int> >::DoLookup<unsigned int>, CDOTAFogOfWarSystem::SetVerticalLevelsForSpawnGroup, CFoW::SetSize, CFoW::SetContext
// globals: FOWTraceRayVerticalGroundHeight(ulong long,float,float,float,float,float)
void __fastcall CDOTAFogOfWarSystem::ActiveSpawnGroupChanged(
        CDOTAFogOfWarSystem *const this,
        const EventActiveSpawnGroupChanged_t *const msg)
{
  uint32 v4; // eax
  UtlHashHandle_t v5; // r12d
  SpawnGroupHandle_t m_SpawnGroupHandle; // esi
  unsigned int v7; // edx
  unsigned int v8; // edx
  UtlHashHandle_t v9; // eax
  CUtlHashtableEntry<unsigned int,CDOTAFogOfWarSystem::SpawnGroupFowSize_t> *v10; // r14
  __int64 v11; // r12
  float v12; // xmm0_4
  ConVar *m_pParent; // rax
  WorldGroupId_t nWorldGroupId; // [rsp+10h] [rbp-30h] BYREF

  nWorldGroupId.m_nHashCode = CSpawnGroupMgrGameSystem::GetWorldGroupId(g_pSpawnGroupMgr, msg->m_SpawnGroupHandle).m_nHashCode;
  v4 = MurmurHash2(&nWorldGroupId, 4, 0x3501A674u);
  if ( this->m_fowLookup.m_nUsed != 0 )
  {
    v5 = CUtlHashtable<CUtlStringToken,CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t *,DefaultHashFunctor<CUtlStringToken>,DefaultEqualFunctor<CUtlStringToken>,undefined_t,CUtlMemory<CUtlHashtableEntry<CUtlStringToken,CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t *>,int>>::DoLookup<CUtlStringToken const&>(
           &this->m_fowLookup,
           &nWorldGroupId,
           v4,
           0);
    if ( v5 != -1 )
    {
      m_SpawnGroupHandle = msg->m_SpawnGroupHandle;
      if ( this->m_fowSize.m_nUsed != 0 )
      {
        v7 = 33
           * (((4097 * m_SpawnGroupHandle + 2127912214) >> 19) ^ (4097 * m_SpawnGroupHandle + 2127912214) ^ 0xC761C23C);
        v8 = 9 * ((v7 - 369570787) ^ ((v7 + 374761393) << 9)) - 42973499;
        v9 = CUtlHashtable<unsigned int,CDOTAFogOfWarSystem::SpawnGroupFowSize_t,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,CDOTAFogOfWarSystem::SpawnGroupFowSize_t>,int>>::DoLookup<unsigned int>(
               &this->m_fowSize,
               m_SpawnGroupHandle,
               HIWORD(v8) ^ v8 ^ 0xB55A4F09,
               0);
        if ( v9 != -1 )
        {
          v10 = &this->m_fowSize.m_table.m_pMemory[v9];
          v11 = *&this->m_fowLookup.m_table.m_pMemory[v5].data[2];
          CDOTAFogOfWarSystem::SetVerticalLevelsForSpawnGroup(this, v11, msg->m_SpawnGroupHandle);
          v12 = *&v10->data[1];
          if ( v12 == *(v11 + 1084)
            && *(v11 + 1088) == *&v10->data[2]
            && *(v11 + 1092) == *&v10->data[3]
            && *(v11 + 1096) == *&v10->data[4]
            && *(v11 + 1100) == *&v10->data[5]
            && *(v11 + 1104) == *&v10->data[6] )
          {
            CFoW::SetContext(v11, msg->m_SpawnGroupHandle);
          }
          else
          {
            m_pParent = dota_fow_grid_size.m_pParent;
            *(v11 + 1084) = v12;
            *(v11 + 1088) = v10->data[2];
            *(v11 + 1092) = v10->data[3];
            *(v11 + 1096) = v10->data[4];
            *(v11 + 1100) = v10->data[5];
            *(v11 + 1104) = v10->data[6];
            CFoW::SetSize(
              v11,
              1,
              msg->m_SpawnGroupHandle,
              (v11 + 1084),
              (v11 + 1096),
              m_pParent->m_Value.m_nValue,
              -1,
              FOWTraceRayVerticalGroundHeight,
              90.0);
          }
        }
      }
    }
  }
}


// CDOTAFogOfWarSystem::GetFoWSizeForSpawnGroup  (line 639, @0x00000000024c0a50, libserver.so)  // inlines: DoLookup<unsigned int>, Find, operator(), operator=, operator[]
// calls: CEntitySystem::GetActiveSpawnGroupHandle, CUtlHashtable<unsigned int, CDOTAFogOfWarSystem::SpawnGroupFowSize_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, CDOTAFogOfWarSystem::SpawnGroupFowSize_t>, int> >::DoLookup<unsigned int>
bool __fastcall CDOTAFogOfWarSystem::GetFoWSizeForSpawnGroup(
        CDOTAFogOfWarSystem *const this,
        SpawnGroupHandle_t hSpawnGroup,
        Vector *pVecMins,
        Vector *pVecMaxs)
{
  vec_t x; // xmm0_4
  vec_t z; // xmm1_4
  SpawnGroupHandle_t v10; // edx
  unsigned int v11; // edx
  signed int v12; // eax
  __int64 v13; // rax
  vec_t *p_flags_and_hash; // rdx
  CUtlHashtableEntry<unsigned int,CDOTAFogOfWarSystem::SpawnGroupFowSize_t> *v15; // rax
  vec_t v16; // xmm0_4

  if ( hSpawnGroup != 0 )
  {
    if ( this->m_fowSize.m_nUsed == 0 )
    {
LABEL_3:
      x = vec3_origin.x;
      pVecMaxs->y = vec3_origin.y;
      z = vec3_origin.z;
      pVecMaxs->x = x;
      pVecMaxs->z = z;
      pVecMins->x = x;
      pVecMins->y = pVecMaxs->y;
      pVecMins->z = pVecMaxs->z;
      return 0;
    }
  }
  else
  {
    hSpawnGroup = CEntitySystem::GetActiveSpawnGroupHandle(g_pEntitySystem);
    if ( this->m_fowSize.m_nUsed == 0 )
      goto LABEL_3;
  }
  v10 = 33 * (((4097 * hSpawnGroup + 2127912214) >> 19) ^ (4097 * hSpawnGroup + 2127912214) ^ 0xC761C23C);
  v11 = 9 * ((v10 - 369570787) ^ ((v10 + 374761393) << 9)) - 42973499;
  v12 = CUtlHashtable<unsigned int,CDOTAFogOfWarSystem::SpawnGroupFowSize_t,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,CDOTAFogOfWarSystem::SpawnGroupFowSize_t>,int>>::DoLookup<unsigned int>(
          &this->m_fowSize,
          hSpawnGroup,
          HIWORD(v11) ^ v11 ^ 0xB55A4F09,
          0);
  if ( v12 == -1 )
    goto LABEL_3;
  v13 = v12;
  p_flags_and_hash = &this->m_fowSize.m_table.m_pMemory[v13].flags_and_hash;
  pVecMins->x = p_flags_and_hash[2];
  pVecMins->y = p_flags_and_hash[3];
  pVecMins->z = p_flags_and_hash[4];
  v15 = &this->m_fowSize.m_table.m_pMemory[v13];
  LODWORD(pVecMaxs->x) = v15->data[4];
  LODWORD(pVecMaxs->y) = v15->data[5];
  v16 = *&v15->data[6];
  pVecMaxs->z = v16;
  return 1;
}


// CDOTAFogOfWarSystem::EnableFogOfWar  (line 658, @0x00000000024c0ba0, libserver.so)  // inlines: FirstHandle, NextHandle, operator[]
// calls: CFoW::EnableFogOfWar
// callers: CDOTABaseGameMode::SetFogOfWarDisabled, OnFOWIsDiabledChanged
void __fastcall CDOTAFogOfWarSystem::EnableFogOfWar(CDOTAFogOfWarSystem *const this, bool bEnable)
{
  int m_nAllocationCount; // ecx
  CUtlHashtableEntry<CUtlStringToken,CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t*> *m_pMemory; // r8
  CUtlHashtableEntry<CUtlStringToken,CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t*> *v5; // rdx
  int v6; // eax
  __int64 v8; // r13
  int v9; // ecx
  int v10; // eax
  CUtlHashtableEntry<CUtlStringToken,CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t*> *v11; // rdx
  int v12; // r12d

  m_nAllocationCount = this->m_fowLookup.m_table.m_nAllocationCount;
  m_pMemory = this->m_fowLookup.m_table.m_pMemory;
  if ( m_nAllocationCount > 0 )
  {
    v5 = m_pMemory + 1;
    v6 = 0;
    if ( m_pMemory->flags_and_hash >= 0 )
    {
      v12 = 0;
      goto LABEL_9;
    }
    while ( ++v6 != m_nAllocationCount )
    {
      ++v5;
      if ( v5[-1].flags_and_hash >= 0 )
      {
        if ( v6 != -1 )
        {
          v12 = v6;
LABEL_9:
          while ( 1 )
          {
            v8 = v12;
            CFoW::EnableFogOfWar(*&m_pMemory[v8].data[2], bEnable);
            v9 = this->m_fowLookup.m_table.m_nAllocationCount;
            v10 = v12 + 1;
            m_pMemory = this->m_fowLookup.m_table.m_pMemory;
            if ( v12 + 1 >= v9 )
              break;
            v11 = &m_pMemory[v10 + 1];
            if ( m_pMemory[v8 + 1].flags_and_hash < 0 )
            {
              while ( ++v10 != v9 )
              {
                ++v11;
                if ( v11[-1].flags_and_hash >= 0 )
                  goto LABEL_15;
              }
              return;
            }
LABEL_15:
            v12 = v10;
            if ( v10 == -1 )
              return;
          }
        }
        return;
      }
    }
  }
}


// CDOTAFogOfWarSystem::GetFowInfoForWorldGroupId  (line 666, @0x00000000024c0cb0, libserver.so)  // inlines: DoLookup<const CUtlStringToken&>, Find, HashItem<unsigned int>, operator(), operator[]
// calls: MurmurHash2, CUtlHashtable<CUtlStringToken, CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t*, DefaultHashFunctor<CUtlStringToken>, DefaultEqualFunctor<CUtlStringToken>, undefined_t, CUtlMemory<CUtlHashtableEntry<CUtlStringToken, CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t*>, int> >::DoLookup<const CUtlStringToken&>
// callers: CDOTAFogOfWarSystem::BlindViewer, CDOTAFogOfWarSystem::GetFoW, CFoWBlockerEntity::Spawn, CFoWRevealerEntity::Spawn, ShouldDrawParticleFOW, CDOTAFogOfWarSystem::IsLocationVisible, CC_FoW_Stats, CDOTAFogOfWarSystem::FrameUpdatePostEntityThink, CDOTAFogOfWarSystem::SetDebugVisibility, CDOTAFogOfWarSystem::EnableDebugFlags, CDOTAFogOfWarSystem::DisableDebugFlags, CDOTAFogOfWarSystem::FindHeightLevel (16 total)
CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t *__fastcall CDOTAFogOfWarSystem::GetFowInfoForWorldGroupId(
        CDOTAFogOfWarSystem *const this,
        uint32 a2)
{
  uint32 v3; // eax
  UtlHashHandle_t v5; // eax
  WorldGroupId_t nWorldGroupIda; // [rsp+0h] [rbp-20h] BYREF

  nWorldGroupIda.m_nHashCode = a2;
  v3 = MurmurHash2(&nWorldGroupIda, 4, 0x3501A674u);
  if ( this->m_fowLookup.m_nUsed == 0 )
    return 0;
  v5 = CUtlHashtable<CUtlStringToken,CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t *,DefaultHashFunctor<CUtlStringToken>,DefaultEqualFunctor<CUtlStringToken>,undefined_t,CUtlMemory<CUtlHashtableEntry<CUtlStringToken,CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t *>,int>>::DoLookup<CUtlStringToken const&>(
         &this->m_fowLookup,
         &nWorldGroupIda,
         v3,
         0);
  if ( v5 == -1 )
    return 0;
  else
    return *&this->m_fowLookup.m_table.m_pMemory[v5].data[2];
}


// CDOTAFogOfWarSystem::AddFOWEntity  (line 682, @0x00000000024e98e0, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, CopyConstruct<CHandle<CBaseEntity> >, Element, GetBool, GetClassNameAsCStr, GetClassname, GetEHandle, GetEntryIndex, GetInt, GetSerialNumber, GetTeamMapping, GetTeamNumber, GrowMemory, ProvidesVision, Set, SetFOWViewerID, String, ToDOTABaseNPC, operator[]
// calls: CDOTAFogOfWarSystem::GetFowInfoForWorldGroupId, FoW_TeamNumberToFoWIndex, CFoW::AddViewer, CDOTA_BaseNPC::GetCurrentVisionRange, CFoW::UpdateViewerSize, CFoW::UpdateViewerName, CBaseEntity::GetAbsOrigin, CFoW::UpdateViewerLocation, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::Find, CDOTA_ModifierManager::GetHighestPriority, CUtlMemory<CHandle<CBaseEntity>, int>::Grow
// callers: CBaseModelEntity::SpawnShared, CDOTA_BaseNPC::ChangeTeam, CDOTA_Ability_StormSpirit_StaticRemnant::CreateRemnant, CDOTA_Ability_Broodmother_SpinWeb::OnSpellStart, CDOTA_Ability_EarthSpirit_StoneCaller::OnSpellStart, CDOTA_Ability_EmberSpirit_FireRemnant::OnSpellStart, CDOTA_Modifier_Slark_ShadowDance::OnCreated, CDOTA_Modifier_Phoenix_SunRay::DoBeamDamageAndVision, CDOTA_Modifier_Wisp_Spirits::OnIntervalThink
void __fastcall CDOTAFogOfWarSystem::AddFOWEntity(CDOTAFogOfWarSystem *const this, CBaseModelEntity *pEntity)
{
  CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t *FowInfoForWorldGroupId; // r12
  int m_Value; // edi
  unsigned int v6; // eax
  int v7; // r13d
  float v8; // xmm1_4
  CEntityIdentity *m_pEntity; // rax
  const char *m_pAsString; // rdx
  const Vector *AbsOrigin; // rax
  CEntityIdentity *v12; // rbx
  __int16 v13; // cx
  __int16 v14; // cx
  int v15; // eax
  __int64 m_Size; // rbx
  int v17; // eax
  CHandle<CBaseEntity> *v18; // rax
  __int64 v19; // rax
  CHandle<CBaseEntity> src; // [rsp+0h] [rbp-30h] BYREF

  if ( pEntity == 0 )
    return;
  if ( (*(pEntity->_vptr_IHandleEntity + 212))(pEntity) == 0 )
    return;
  FowInfoForWorldGroupId = CDOTAFogOfWarSystem::GetFowInfoForWorldGroupId(this, pEntity->m_worldGroupId.m_nHashCode);
  if ( FowInfoForWorldGroupId == 0 )
    return;
  if ( pEntity->m_bIsDOTANPC )
  {
    if ( pEntity->m_iViewerID >= 0 )
      return;
    if ( BYTE4(pEntity[1].m_Glow._vptr_CGlowProperty) == 0
      || ((v19 = *&pEntity[2].m_vecVelocity.m_vecY.m_nEncoder, dota_all_vision.m_pParent->m_Value.m_nValue != 0)
       || (v19 & 0x400) != 0)
      && ((v19 & 0x80u) == 0LL
       || CDOTA_ModifierManager::GetHighestPriority(
            &pEntity[2].m_iFOWTempViewerID[3],
            modifierstate::MODIFIER_STATE_INVISIBLE,
            0) != 3) )
    {
      m_Value = pEntity->m_iTeamNum.m_Value;
      if ( m_Value != 4 )
      {
        v6 = FoW_TeamNumberToFoWIndex(m_Value);
        v7 = CFoW::AddViewer(&FowInfoForWorldGroupId->m_FoW, FoWViewerType_t::FOWVIEWERTYPE_FOWENTITY, v6);
        if ( v7 != -1 )
        {
          CDOTA_BaseNPC::GetCurrentVisionRange(pEntity);
          CFoW::UpdateViewerSize(&FowInfoForWorldGroupId->m_FoW, v7, v8);
          m_pEntity = pEntity->m_pEntity;
          m_pAsString = "";
          if ( m_pEntity->m_designerName.u.m_Id != 0 )
            m_pAsString = m_pEntity->m_designerName.u.m_pAsString;
          CFoW::UpdateViewerName(&FowInfoForWorldGroupId->m_FoW, v7, m_pAsString);
          AbsOrigin = CBaseEntity::GetAbsOrigin(pEntity);
          CFoW::UpdateViewerLocation(&FowInfoForWorldGroupId->m_FoW, v7, AbsOrigin);
        }
        goto LABEL_12;
      }
    }
  }
  else if ( pEntity->m_iViewerID >= 0 )
  {
    return;
  }
  v7 = -2;
LABEL_12:
  pEntity->m_iViewerID = v7;
  v12 = pEntity->m_pEntity;
  src.m_Index = -1;
  if ( v12 != 0 )
  {
    v13 = 0x7FFF;
    if ( v12->m_EHandle.m_Index != -1 )
      v13 = v12->m_EHandle.m_Index & 0x7FFF;
    src.m_Index = (((v12->m_EHandle.m_Index >> 15) - (v12->m_flags & 1)) << 15) | v13 & 0x7FFF;
  }
  if ( CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Find(
         &FowInfoForWorldGroupId->m_FOWEntities,
         &src) == -1 )
  {
    src.m_Index = -1;
    if ( v12 != 0 )
    {
      v14 = 0x7FFF;
      v15 = (v12->m_EHandle.m_Index >> 15) - (v12->m_flags & 1);
      if ( v12->m_EHandle.m_Index != -1 )
        v14 = v12->m_EHandle.m_Index & 0x7FFF;
      LOWORD(src.m_Index) = v14 | src.m_Index & 0x8000;
      src.m_Index = (v15 << 15) | src.m_Index & 0x7FFF;
    }
    m_Size = FowInfoForWorldGroupId->m_FOWEntities.m_Size;
    v17 = FowInfoForWorldGroupId->m_FOWEntities.m_Size;
    if ( m_Size == FowInfoForWorldGroupId->m_FOWEntities.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<CHandle<CBaseEntity>,int>::Grow(&FowInfoForWorldGroupId->m_FOWEntities.m_Memory, 1);
      v17 = FowInfoForWorldGroupId->m_FOWEntities.m_Size;
    }
    FowInfoForWorldGroupId->m_FOWEntities.m_Size = v17 + 1;
    v18 = &FowInfoForWorldGroupId->m_FOWEntities.m_Memory.m_pMemory[m_Size];
    if ( v18 != 0 )
      v18->m_Index = src.m_Index;
  }
}


// CDOTAFogOfWarSystem::RemoveFOWEntity  (line 739, @0x00000000024d9eb0, libserver.so)  // inlines: CEntityHandle, CHandle, GetEHandle, GetEntryIndex, GetSerialNumber, Set, SetFOWViewerID
// calls: CDOTAFogOfWarSystem::GetFowInfoForWorldGroupId, CFoW::RemoveViewer, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::Find, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::FastRemove
// callers: CBaseModelEntity::UpdateOnRemove, CDOTA_BaseNPC::ChangeTeam, CDOTA_Modifier_Wisp_Spirits::ExplodeSpirits
bool __fastcall CDOTAFogOfWarSystem::RemoveFOWEntity(CDOTAFogOfWarSystem *const this, CBaseModelEntity *pEntity)
{
  char v4; // r12
  CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t *FowInfoForWorldGroupId; // rax
  CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t *v7; // r13
  int m_iViewerID; // esi
  CEntityIdentity *m_pEntity; // rdx
  __int16 v10; // si
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > *p_m_FOWEntities; // r13
  int v12; // eax
  CHandle<CBaseEntity> src; // [rsp+0h] [rbp-30h] BYREF

  if ( pEntity == 0 )
    return 0;
  v4 = (*(pEntity->_vptr_IHandleEntity + 212))(pEntity);
  if ( v4 == 0 )
    return 0;
  FowInfoForWorldGroupId = CDOTAFogOfWarSystem::GetFowInfoForWorldGroupId(this, pEntity->m_worldGroupId.m_nHashCode);
  v7 = FowInfoForWorldGroupId;
  if ( FowInfoForWorldGroupId == 0 )
    return 0;
  m_iViewerID = pEntity->m_iViewerID;
  if ( m_iViewerID >= 0 )
  {
    CFoW::RemoveViewer(&FowInfoForWorldGroupId->m_FoW, m_iViewerID);
    pEntity->m_iViewerID = -1;
  }
  m_pEntity = pEntity->m_pEntity;
  src.m_Index = -1;
  if ( m_pEntity != 0 )
  {
    v10 = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      v10 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    src.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v10 & 0x7FFF;
  }
  p_m_FOWEntities = &v7->m_FOWEntities;
  v12 = CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Find(p_m_FOWEntities, &src);
  if ( v12 == -1 )
    return 0;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::FastRemove(p_m_FOWEntities, v12);
  return v4;
}


// CDOTAFogOfWarSystem::UpdateFogOfWar  (line 764, @0x00000000024c12c0, libserver.so)  // inlines: CEntityHandle, CHandle, CVProfScope, DOTAGameRules, Get, GetBool, GetEntityIdentity, GetEntryIndex, GetFoWFrameNumber, GetInstance, GetInt, GetTeamMapping, GetTeamNumber, IndexToIdentity, IsEnabled, LookupEntity, NetworkStateChanged, ProvidesVision, Set, SetFoWFrameNumber, ToBaseModelEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator=<int>, operator[], ~CVProfScope
// calls: CDOTA_ModifierManager::GetHighestPriority, CDOTA_BaseNPC::GetCurrentVisionRange, CBaseEntity::GetAbsOrigin, CFoW::UpdateViewer, CDOTAFogOfWarSystem::SetDebugInfo, CFoW::EndUpdate, CVProfile::ExitScope, CVProfile::EnterScope, CDOTAGamerules::NetworkStateChanged, FoW_TeamNumberToFoWIndex, _Unwind_Resume
// callers: CDOTAFogOfWarSystem::FrameUpdatePostEntityThink
// strings: "DOTA::FoW", "CDOTAFogOfWarSystem::FrameUpdatePostEntityThink"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTAFogOfWarSystem::UpdateFogOfWar(
        CDOTAFogOfWarSystem *const this,
        CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t *pFoWInfo)
{
  int m_enabled; // esi
  CGameRules *v4; // rax
  __int64 v5; // r13
  int v6; // r12d
  CHandle<CBaseEntity> *v7; // rcx
  uint32 m_Index; // eax
  CEntityIdentity *v9; // rdx
  CEntityIdentity *v10; // rdx
  CEntityInstance *m_pInstance; // rdx
  int m_hScope; // r14d
  unsigned __int64 m_Index_low; // rcx
  CEntityIdentity *v14; // rdx
  CEntityIdentity *v15; // rdx
  CDOTA_BaseNPC *v16; // r15
  unsigned __int64 m_Value; // rax
  const Vector *AbsOrigin; // rax
  __int64 v19; // r13
  int i; // r12d
  uint32 v21; // eax
  CEntityIdentity *v22; // rdx
  CEntityIdentity *v23; // rdx
  CGameRules *v24; // r13
  int v25; // eax
  int v26; // r12d
  bool VProf_766; // [rsp+13h] [rbp-4Dh]
  FoWOccluderMode_t OccludeMode; // [rsp+14h] [rbp-4Ch]
  unsigned int iTeamMapping; // [rsp+18h] [rbp-48h]
  float flRadius; // [rsp+1Ch] [rbp-44h]
  uint32 v32; // [rsp+20h] [rbp-40h]

  m_enabled = g_VProfCurrentProfile.m_enabled;
  VProf_766 = m_enabled != 0;
  if ( m_enabled != 0 )
    CVProfile::EnterScope(
      &g_VProfCurrentProfile,
      "CDOTAFogOfWarSystem::FrameUpdatePostEntityThink",
      0,
      "DOTA::FoW",
      0,
      4);
  if ( pFoWInfo != 0 && pFoWInfo->m_FoW.m_nMagicInitNumber != 0 )
  {
    v4 = g_pGameRules;
    if ( g_pGameRules != 0 )
    {
      if ( pFoWInfo->m_FOWEntities.m_Size > 0 )
      {
        v5 = 0;
        v6 = 0;
        while ( 1 )
        {
          v7 = &pFoWInfo->m_FOWEntities.m_Memory.m_pMemory[v5];
          m_Index = v7->m_Index;
          v32 = v7->m_Index;
          if ( v7->m_Index + 2 <= 1 )
            goto LABEL_8;
          v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v32 >> 9) & 0x3F];
          if ( v9 == 0 )
            goto LABEL_8;
          v10 = &v9[v32 & 0x1FF];
          if ( v10 == 0 )
            goto LABEL_8;
          if ( m_Index != v10->m_EHandle.m_Index )
            goto LABEL_8;
          m_pInstance = v10->m_pInstance;
          if ( m_pInstance == 0 )
            goto LABEL_8;
          m_hScope = m_pInstance[16].m_hPrivateScope.m_hScope;
          if ( m_hScope < 0 )
            goto LABEL_8;
          m_Index_low = LOWORD(v7->m_Index);
          v14 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(m_Index_low >> 9) & 0x3F];
          if ( v14 == 0 )
            goto LABEL_8;
          v15 = &v14[m_Index_low & 0x1FF];
          if ( v15 == 0 )
            goto LABEL_8;
          if ( m_Index != v15->m_EHandle.m_Index )
            goto LABEL_8;
          v16 = v15->m_pInstance;
          if ( v15->m_pInstance == 0 || !v16->m_bIsDOTANPC )
            goto LABEL_8;
          OccludeMode = (*(v16->_vptr_IHandleEntity + 445))(v15->m_pInstance) ^ 1;
          if ( dota_all_vision.m_pParent->m_Value.m_nValue != 0 )
          {
            m_Value = v16->m_nUnitState64.m_Value;
          }
          else
          {
            m_Value = v16->m_nUnitState64.m_Value;
            if ( (m_Value & 0x400) == 0 )
              goto LABEL_44;
          }
          if ( (m_Value & 0x80u) != 0LL
            && CDOTA_ModifierManager::GetHighestPriority(
                 &v16->m_ModifierManager,
                 modifierstate::MODIFIER_STATE_INVISIBLE,
                 0) == 3 )
          {
LABEL_44:
            iTeamMapping = FoW_TeamNumberToFoWIndex(v16->m_iTeamNum.m_Value);
            goto LABEL_25;
          }
          iTeamMapping = 9999;
LABEL_25:
          flRadius = CDOTA_BaseNPC::GetCurrentVisionRange(v16);
          AbsOrigin = CBaseEntity::GetAbsOrigin(v16);
          CFoW::UpdateViewer(&pFoWInfo->m_FoW, m_hScope, iTeamMapping, AbsOrigin, flRadius, OccludeMode);
LABEL_8:
          ++v6;
          ++v5;
          if ( pFoWInfo->m_FOWEntities.m_Size <= v6 )
          {
            v4 = g_pGameRules;
            break;
          }
        }
      }
      if ( CFoW::EndUpdate(&pFoWInfo->m_FoW, gpGlobals->frametime, *&v4[19].m_szQuestName[24], 0) )
      {
        v24 = g_pGameRules;
        v25 = *&g_pGameRules[19].m_szQuestName[24];
        v26 = (v25 + 1) & 0xF;
        if ( v25 != v26 )
        {
          CDOTAGamerules::NetworkStateChanged(g_pGameRules, 0xAD0u, -1);
          *&v24[19].m_szQuestName[24] = v26;
        }
      }
      v19 = 0;
      for ( i = 0; pFoWInfo->m_FOWEntities.m_Size > i; ++v19 )
      {
        v21 = pFoWInfo->m_FOWEntities.m_Memory.m_pMemory[v19].m_Index;
        if ( v21 + 2 > 1 )
        {
          v22 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v21 >> 9) & 0x3F];
          if ( v22 != 0 )
          {
            v23 = &v22[v21 & 0x1FF];
            if ( v23 != 0 && v21 == v23->m_EHandle.m_Index && v23->m_pInstance != 0 )
              (*(v23->m_pInstance->_vptr_IHandleEntity + 213))(v23->m_pInstance);
          }
        }
        ++i;
      }
      CDOTAFogOfWarSystem::SetDebugInfo(this, pFoWInfo);
    }
  }
  if ( VProf_766 )
    CVProfile::ExitScope(&g_VProfCurrentProfile);
}


// CDOTAFogOfWarSystem::FrameUpdatePostEntityThink  (line 825, @0x00000000024c1670, libserver.so)
// calls: CDOTAFogOfWarSystem::GetFowInfoForWorldGroupId, CDOTAFogOfWarSystem::UpdateFogOfWar
void __fastcall CDOTAFogOfWarSystem::FrameUpdatePostEntityThink(
        CDOTAFogOfWarSystem *const this,
        const EventServerPostEntityThink_t *const msg)
{
  CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t *FowInfoForWorldGroupId; // rax

  FowInfoForWorldGroupId = CDOTAFogOfWarSystem::GetFowInfoForWorldGroupId(this, 0);
  CDOTAFogOfWarSystem::UpdateFogOfWar(this, FowInfoForWorldGroupId);
}


// CDOTAFogOfWarSystem::SetDebugVisibility  (line 835, @0x00000000024c16a0, libserver.so)  // inlines: GetFoW
// calls: CDOTAFogOfWarSystem::GetFowInfoForWorldGroupId, CFoW::SetDebugVisibility
void __fastcall CDOTAFogOfWarSystem::SetDebugVisibility(CDOTAFogOfWarSystem *const this, bool bVisible)
{
  CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t *FowInfoForWorldGroupId; // rax

  FowInfoForWorldGroupId = CDOTAFogOfWarSystem::GetFowInfoForWorldGroupId(this, 0);
  if ( FowInfoForWorldGroupId != 0 )
    CFoW::SetDebugVisibility(&FowInfoForWorldGroupId->m_FoW, bVisible);
}


// CDOTAFogOfWarSystem::EnableDebugFlags  (line 848, @0x00000000024c16e0, libserver.so)  // inlines: GetFoW
// calls: CDOTAFogOfWarSystem::GetFowInfoForWorldGroupId, CFoW::EnableDebugFlags
void __fastcall CDOTAFogOfWarSystem::EnableDebugFlags(CDOTAFogOfWarSystem *const this, unsigned int nFlags)
{
  CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t *FowInfoForWorldGroupId; // rax

  FowInfoForWorldGroupId = CDOTAFogOfWarSystem::GetFowInfoForWorldGroupId(this, 0);
  if ( FowInfoForWorldGroupId != 0 )
    CFoW::EnableDebugFlags(&FowInfoForWorldGroupId->m_FoW, nFlags);
}


// CDOTAFogOfWarSystem::DisableDebugFlags  (line 861, @0x00000000024c1720, libserver.so)  // inlines: GetFoW
// calls: CDOTAFogOfWarSystem::GetFowInfoForWorldGroupId, CFoW::DisableDebugFlags
void __fastcall CDOTAFogOfWarSystem::DisableDebugFlags(CDOTAFogOfWarSystem *const this, unsigned int nFlags)
{
  CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t *FowInfoForWorldGroupId; // rax

  FowInfoForWorldGroupId = CDOTAFogOfWarSystem::GetFowInfoForWorldGroupId(this, 0);
  if ( FowInfoForWorldGroupId != 0 )
    CFoW::DisableDebugFlags(&FowInfoForWorldGroupId->m_FoW, nFlags);
}


// CDOTAFogOfWarSystem::ReadHeightLevels  (line 874, @0x00000000024c1760, libserver.so)
// calls: KeyValues::KeyValues, KeyValues::LoadFromFile, UTIL_VarArgs, KeyValues::GetFloat, KeyValues::~KeyValues, Warning, __stack_chk_fail, _Unwind_Resume
// callers: CDOTAFogOfWarSystem::GameInit
// strings: "heightfile", "scripts/height_levels.txt", "Unable to load height file! '%s'\n"
void __fastcall CDOTAFogOfWarSystem::ReadHeightLevels(CDOTAFogOfWarSystem *const this)
{
  IBaseFileSystem *v2; // rsi
  __int64 v3; // rbx
  char *v4; // rax
  float v5; // xmm1_4
  KeyValues kv; // [rsp+0h] [rbp-40h] BYREF
  unsigned __int64 v7; // [rsp+18h] [rbp-28h]

  v7 = __readfsqword(0x28u);
  if ( !this->m_bDefaultHeightLevelsValid )
  {
    this->m_bDefaultHeightLevelsValid = 1;
    KeyValues::KeyValues(&kv, "heightfile");
    v2 = 0;
    if ( g_pFullFileSystem != 0 )
      v2 = &g_pFullFileSystem->IBaseFileSystem;
    v3 = 0;
    if ( KeyValues::LoadFromFile(&kv, v2, "scripts/height_levels.txt", "MOD", 0) )
    {
      do
      {
        v4 = UTIL_VarArgs("%d", v3);
        this->m_flDefaultHeightLevels[v3++] = KeyValues::GetFloat(&kv, v4, v5);
      }
      while ( v3 != 4 );
    }
    else
    {
      Warning("Unable to load height file! '%s'\n", "scripts/height_levels.txt");
    }
    KeyValues::~KeyValues(&kv);
  }
}


// CDOTAFogOfWarSystem::FindHeightLevel  (line 908, @0x00000000024c1880, libserver.so)  // inlines: GetFoW
// calls: CDOTAFogOfWarSystem::GetFowInfoForWorldGroupId, CFoW::GetGridUnitsClamped, CFoW::GetHeightGroup
// callers: CDOTAFogOfWarSystem::FindHeightLevelForEntity
int __fastcall CDOTAFogOfWarSystem::FindHeightLevel(CDOTAFogOfWarSystem *const this, const Vector *const vLocation)
{
  CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t *FowInfoForWorldGroupId; // rax
  CFoW *p_m_FoW; // rbx
  int x; // [rsp+8h] [rbp-18h] BYREF
  int y[5]; // [rsp+Ch] [rbp-14h] BYREF

  FowInfoForWorldGroupId = CDOTAFogOfWarSystem::GetFowInfoForWorldGroupId(this, 0);
  p_m_FoW = &FowInfoForWorldGroupId->m_FoW;
  if ( FowInfoForWorldGroupId == 0 )
    return 0;
  CFoW::GetGridUnitsClamped(&FowInfoForWorldGroupId->m_FoW, vLocation, &x, y);
  return CFoW::GetHeightGroup(p_m_FoW, x, y[0]);
}


