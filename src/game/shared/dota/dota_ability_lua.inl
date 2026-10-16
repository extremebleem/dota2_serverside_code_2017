
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Ability_Lua::Schema_DynamicBinding  (line 32, @0x0000000002456130, libserver.so)
// globals: CDOTA_Ability_Lua::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Lua::Schema_DynamicBinding(const CDOTA_Ability_Lua *const this)
{
  return CDOTA_Ability_Lua::s_pSchemaBinding;
}


// CDOTA_Ability_Lua::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 32, @0x0000000002456140, libserver.so)
// globals: CDOTA_Ability_Lua::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Lua::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Lua::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Lua::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Lua::CEntityInstanceEntityClass::DestructInstance  (line 32, @0x0000000002456150, libserver.so)  // inlines: Destruct<CDOTA_Ability_Lua>
void __fastcall CDOTA_Ability_Lua::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Lua::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Lua::CEntityInstanceEntityClass::FreeInstance  (line 32, @0x0000000002456170, libserver.so)
void __fastcall CDOTA_Ability_Lua::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Lua::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Lua::CEntityInstanceEntityClass::CanAllocate  (line 32, @0x0000000002456190, libserver.so)
bool __fastcall CDOTA_Ability_Lua::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Lua::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Lua::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 32, @0x00000000024561a0, libserver.so)
// globals: CDOTA_Ability_Lua::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Lua::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Lua::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Lua::s_pSchemaBinding;
}


// CDOTA_Ability_Lua::CEntityInstanceEntityClass::AllocateInstance  (line 32, @0x0000000002457370, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Lua::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Lua::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 976);
  memset(v1, 0, 0x3D0u);
  return v1;
}


// CDOTA_Ability_Lua::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 32, @0x0000000002459280, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Lua::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Lua::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Lua::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 32, @0x00000000024592a0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Lua::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Lua::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Lua::CEntityInstanceEntityClass::ConstructInstance  (line 32, @0x000000000245a320, libserver.so)  // inlines: CDOTA_Ability_Lua, CUtlString, Construct<CDOTA_Ability_Lua>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Lua::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Lua::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *(p + 115) = 0;
    *p = &off_40D6170;
    *(p + 116) = 0;
    *(p + 117) = 0;
    *(p + 118) = 0;
    *(p + 119) = 0;
    *(p + 120) = 0;
    *(p + 121) = 0;
    *(p + 114) = 0;
  }
  return p;
}


// CDOTA_Ability_Lua::GetEntityClassInternal  (line 32, @0x0000000002460f40, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, InitScriptDesc, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, GetScriptDesc<CDOTA_Ability_Lua>, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_dota_01.cpp
// strings: "ability_lua", "CDOTA_Ability_Lua"
// globals: `guard variable for'CDOTA_Ability_Lua::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LuaClass, CDOTA_Ability_Lua::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LuaClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTA_Ability_Lua::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Lua::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_LuaClassInfo, CDOTA_Ability_Lua::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_LuaClassInfo
CEntityClass *__cdecl CDOTA_Ability_Lua::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Lua::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LuaClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Lua::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LuaClass) != 0 )
  {
    CDOTA_Ability_Lua::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LuaClass.m_designerName.u.m_Id = 0;
    CDOTA_Ability_Lua::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LuaClass._vptr_CEntityClass = off_3F79390;
    CDOTA_Ability_Lua::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LuaClass.m_ComponentOffsets.m_Size = 0;
    CDOTA_Ability_Lua::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LuaClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Lua::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LuaClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Lua::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LuaClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Lua::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LuaClass.m_AllHelpers.m_Size = 0;
    CDOTA_Ability_Lua::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LuaClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Lua::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LuaClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Lua::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LuaClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Lua::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LuaClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTA_Ability_Lua::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LuaClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTA_Ability_Lua::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LuaClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTA_Ability_Lua::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LuaClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Lua::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LuaClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Lua::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LuaClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Lua::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LuaClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTA_Ability_Lua::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LuaClass;
    CDOTA_Ability_Lua::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LuaClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTA_Ability_Lua::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LuaClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Lua::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LuaClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Lua::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LuaClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Lua::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LuaClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTA_Ability_Lua::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LuaClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Lua::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LuaClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Lua::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LuaClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Lua::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LuaClass.m_classInputs.m_Size = 0;
    CDOTA_Ability_Lua::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LuaClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Lua::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LuaClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Lua::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LuaClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Lua::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LuaClass.m_classOutputs.m_Size = 0;
    CDOTA_Ability_Lua::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LuaClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Lua::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LuaClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Lua::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LuaClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Lua::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LuaClass.m_requiredEHandle.m_Index = -1;
    CDOTA_Ability_Lua::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LuaClass.m_hNetworkSerializer = 0;
    CDOTA_Ability_Lua::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LuaClass.m_pBaseClassInfo = 0;
    CDOTA_Ability_Lua::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LuaClass.m_pClassInfo = 0;
    CDOTA_Ability_Lua::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LuaClass.m_flags = 0;
    CDOTA_Ability_Lua::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LuaClass.m_nAllHelpersFlags = 0;
    CDOTA_Ability_Lua::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LuaClass.m_pScriptClassDesc = 0;
    CDOTA_Ability_Lua::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LuaClass.m_pInputs = 0;
    CDOTA_Ability_Lua::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LuaClass.m_nInputCount = 0;
    CDOTA_Ability_Lua::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LuaClass.m_pOutputs = 0;
    CDOTA_Ability_Lua::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LuaClass.m_nOutputCount = 0;
    CDOTA_Ability_Lua::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LuaClass.m_pGameClass = 0;
    CDOTA_Ability_Lua::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LuaClass._vptr_CEntityClass = off_40D60F0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Lua::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LuaClass);
    __cxa_atexit(
      CDOTA_Ability_Lua::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Lua::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LuaClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_LuaClass != 0 )
    return &CDOTA_Ability_Lua::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LuaClass;
  if ( `guard variable for'CDOTA_Ability_Lua::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_LuaClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Lua::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_LuaClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Lua::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_LuaClassInfo,
      "CDOTA_Ability_Lua",
      "ability_lua",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Lua::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_LuaClassInfo);
  }
  CDOTA_Ability_Lua::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LuaClass.m_pClassInfo = &CDOTA_Ability_Lua::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_LuaClassInfo;
  CDOTA_Ability_Lua::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LuaClass.m_pBaseClassInfo = CDOTA_Ability_Lua::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_LuaClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_LuaClass = &CDOTA_Ability_Lua::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LuaClass;
  CDOTA_Ability_Lua::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_LuaClassInfo.m_pClass = &CDOTA_Ability_Lua::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LuaClass;
  CDOTA_Ability_Lua::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LuaClass.m_pScriptClassDesc = GetScriptDesc<CDOTA_Ability_Lua>(0);
  g_pEntityCDOTA_Ability_LuaClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Lua::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LuaClass;
}


// CDOTA_Ability_Lua::Script_GetBehavior  (line 65, @0x000000000245b090, libserver.so)  // inlines: GetAbilityData, GetBehavior
// calls: CDOTABaseAbility::LoadAbilityData
int __fastcall CDOTA_Ability_Lua::Script_GetBehavior(CDOTA_Ability_Lua *const this)
{
  DOTAAbilityData_t *m_pAbilityData; // rax

  m_pAbilityData = this->m_pAbilityData;
  if ( m_pAbilityData != 0 )
    return m_pAbilityData->m_iAbilityBehavior;
  CDOTABaseAbility::LoadAbilityData(this, 0);
  return this->m_pAbilityData->m_iAbilityBehavior;
}


// CDOTA_Ability_Lua::Script_GetCastRange  (line 66, @0x000000000245b260, libserver.so)  // inlines: HScriptToEntity<CBaseEntity>, ToDOTABaseNPC, ToEnt
// calls: GetScriptDesc<CEntityInstance>, CDOTABaseAbility::GetCastRange
int __fastcall CDOTA_Ability_Lua::Script_GetCastRange(
        CDOTA_Ability_Lua *const this,
        const Vector *const vLocation,
        HSCRIPT hTarget)
{
  __int64 (__fastcall *v6)(IScriptVM *, HSCRIPT, ScriptClassDesc_t *); // r15
  ScriptClassDesc_t *Script; // rax
  __int64 v8; // rax
  CDOTA_BaseNPC *v9; // rdx

  if ( hTarget != 0
    && (v6 = *(*g_pScriptVM + 208LL),
        Script = GetScriptDesc<CEntityInstance>(0),
        (v8 = v6(g_pScriptVM, hTarget, Script)) != 0)
    && *(v8 + 339) != 0 )
  {
    v9 = v8;
  }
  else
  {
    v9 = 0;
  }
  return CDOTABaseAbility::GetCastRange(this, vLocation, v9);
}


// CDOTA_Ability_Lua::Script_GetManaCost  (line 67, @0x000000000245b450, libserver.so)
// calls: CDOTABaseAbility::GetManaCost
int __fastcall CDOTA_Ability_Lua::Script_GetManaCost(CDOTA_Ability_Lua *const this, int iLevel)
{
  return CDOTABaseAbility::GetManaCost(this, iLevel);
}


// CDOTA_Ability_Lua::Script_GetChannelTime  (line 68, @0x000000000245b2f0, libserver.so)
// calls: CDOTABaseAbility::GetChannelTime
float __fastcall CDOTA_Ability_Lua::Script_GetChannelTime(CDOTA_Ability_Lua *const this)
{
  return CDOTABaseAbility::GetChannelTime(this);
}


// CDOTA_Ability_Lua::Script_GetChannelledManaCostPerSecond  (line 69, @0x000000000245b460, libserver.so)
// calls: CDOTABaseAbility::GetChannelledManaCostPerSecond
int __fastcall CDOTA_Ability_Lua::Script_GetChannelledManaCostPerSecond(CDOTA_Ability_Lua *const this, int iLevel)
{
  return CDOTABaseAbility::GetChannelledManaCostPerSecond(this, iLevel);
}


// CDOTA_Ability_Lua::Script_GetGoldCost  (line 70, @0x000000000245b470, libserver.so)
// calls: CDOTABaseAbility::GetGoldCost
int __fastcall CDOTA_Ability_Lua::Script_GetGoldCost(CDOTA_Ability_Lua *const this, int iLevel)
{
  return CDOTABaseAbility::GetGoldCost(this, iLevel);
}


// CDOTA_Ability_Lua::Script_GetCooldown  (line 71, @0x000000000245b440, libserver.so)
// calls: CDOTABaseAbility::GetCooldown
float __fastcall CDOTA_Ability_Lua::Script_GetCooldown(CDOTA_Ability_Lua *const this, int iLevel)
{
  return CDOTABaseAbility::GetCooldown(this, iLevel);
}


// CDOTA_Ability_Lua::Script_CastFilterResultTarget  (line 72, @0x000000000245b380, libserver.so)  // inlines: HScriptToEntity<CBaseEntity>, ToDOTABaseNPC, ToEnt
// calls: GetScriptDesc<CEntityInstance>, CDOTABaseAbility::CastFilterResult
int __fastcall CDOTA_Ability_Lua::Script_CastFilterResultTarget(CDOTA_Ability_Lua *const this, HSCRIPT hTarget)
{
  __int64 (__fastcall *v4)(IScriptVM *, HSCRIPT, ScriptClassDesc_t *); // r14
  ScriptClassDesc_t *Script; // rax
  CDOTA_BaseNPC *v6; // rax

  if ( hTarget != 0
    && (v4 = *(*g_pScriptVM + 208LL),
        Script = GetScriptDesc<CEntityInstance>(0),
        (v6 = v4(g_pScriptVM, hTarget, Script)) != 0)
    && v6->m_bIsDOTANPC )
  {
    return CDOTABaseAbility::CastFilterResult(this, v6);
  }
  else
  {
    return CDOTABaseAbility::CastFilterResult(this, 0);
  }
}


// CDOTA_Ability_Lua::Script_CastFilterResultLocation  (line 73, @0x00000000024561b0, libserver.so)  // inlines: CastFilterResult, operator==
int __fastcall CDOTA_Ability_Lua::Script_CastFilterResultLocation(
        CDOTA_Ability_Lua *const this,
        const Vector *const vLocation)
{
  int result; // eax

  if ( vec3_invalid.x != vLocation->x )
    return 0;
  if ( vec3_invalid.y != vLocation->y )
    return 0;
  result = 24;
  if ( vec3_invalid.z != vLocation->z )
    return 0;
  return result;
}


// CDOTA_Ability_Lua::Script_CastFilterResult  (line 74, @0x0000000002456200, libserver.so)
int __fastcall CDOTA_Ability_Lua::Script_CastFilterResult(CDOTA_Ability_Lua *const this)
{
  return 0;
}


// CDOTA_Ability_Lua::Script_GetCustomCastErrorTarget  (line 75, @0x0000000002458ff0, libserver.so)  // inlines: HScriptToEntity<CBaseEntity>, ToEnt
// calls: GetScriptDesc<CEntityInstance>
// strings: "CUSTOM ERROR"
const char *__fastcall CDOTA_Ability_Lua::Script_GetCustomCastErrorTarget(
        CDOTA_Ability_Lua *const this,
        HSCRIPT hTarget)
{
  void (__fastcall *v3)(IScriptVM *, HSCRIPT, ScriptClassDesc_t *); // r13
  ScriptClassDesc_t *Script; // rax

  if ( hTarget != 0 )
  {
    v3 = *(*g_pScriptVM + 208LL);
    Script = GetScriptDesc<CEntityInstance>(0);
    v3(g_pScriptVM, hTarget, Script);
  }
  return "CUSTOM ERROR";
}


// CDOTA_Ability_Lua::Script_GetCustomCastErrorLocation  (line 76, @0x0000000002456210, libserver.so)
// strings: "CUSTOM ERROR"
const char *__fastcall CDOTA_Ability_Lua::Script_GetCustomCastErrorLocation(
        CDOTA_Ability_Lua *const this,
        const Vector *const vLocation)
{
  return "CUSTOM ERROR";
}


// CDOTA_Ability_Lua::Script_GetCustomCastError  (line 77, @0x0000000002456220, libserver.so)
// strings: "CUSTOM ERROR"
const char *__fastcall CDOTA_Ability_Lua::Script_GetCustomCastError(CDOTA_Ability_Lua *const this)
{
  return "CUSTOM ERROR";
}


// CDOTA_Ability_Lua::Script_OnToggle  (line 109, @0x00000000024582e0, libserver.so)
// calls: CDOTABaseAbility::OnToggle
void __fastcall CDOTA_Ability_Lua::Script_OnToggle(CDOTA_Ability_Lua *const this)
{
  CDOTABaseAbility::OnToggle(this);
}


// CDOTA_Ability_Lua::Script_OnSpellStart  (line 110, @0x0000000002456230, libserver.so)
void __fastcall CDOTA_Ability_Lua::Script_OnSpellStart(CDOTA_Ability_Lua *const this)
{
  ;
}


// CDOTA_Ability_Lua::Script_OnAbilityPhaseStart  (line 111, @0x0000000002459570, libserver.so)
// calls: CDOTABaseAbility::OnAbilityPhaseStart
bool __fastcall CDOTA_Ability_Lua::Script_OnAbilityPhaseStart(CDOTA_Ability_Lua *const this)
{
  return CDOTABaseAbility::OnAbilityPhaseStart(this);
}


// CDOTA_Ability_Lua::Script_OnAbilityPhaseInterrupted  (line 112, @0x0000000002459560, libserver.so)
// calls: CDOTABaseAbility::OnAbilityPhaseInterrupted
void __fastcall CDOTA_Ability_Lua::Script_OnAbilityPhaseInterrupted(CDOTA_Ability_Lua *const this)
{
  CDOTABaseAbility::OnAbilityPhaseInterrupted(this);
}


// CDOTA_Ability_Lua::Script_OnChannelThink  (line 113, @0x0000000002459c40, libserver.so)
// calls: CDOTABaseAbility::OnChannelThink
void __fastcall CDOTA_Ability_Lua::Script_OnChannelThink(CDOTA_Ability_Lua *const this, double a2, float flInterval)
{
  CDOTABaseAbility::OnChannelThink(this, a2, flInterval);
}


// CDOTA_Ability_Lua::Script_OnChannelFinish  (line 114, @0x0000000002456240, libserver.so)
void __fastcall CDOTA_Ability_Lua::Script_OnChannelFinish(CDOTA_Ability_Lua *const this, bool bInterrupted)
{
  ;
}


// CDOTA_Ability_Lua::Script_OnProjectileHit  (line 115, @0x0000000002458f40, libserver.so)  // inlines: HScriptToEntity<CBaseEntity>, ToEnt
// calls: GetScriptDesc<CEntityInstance>
bool __fastcall CDOTA_Ability_Lua::Script_OnProjectileHit(
        CDOTA_Ability_Lua *const this,
        HSCRIPT hTarget,
        const Vector *const vLocation)
{
  void (__fastcall *v4)(IScriptVM *, HSCRIPT, ScriptClassDesc_t *); // r13
  ScriptClassDesc_t *Script; // rax

  if ( hTarget != 0 )
  {
    v4 = *(*g_pScriptVM + 208LL);
    Script = GetScriptDesc<CEntityInstance>(0);
    v4(g_pScriptVM, hTarget, Script);
  }
  return 0;
}


// CDOTA_Ability_Lua::Script_OnProjectileThink  (line 117, @0x0000000002456250, libserver.so)
void __fastcall CDOTA_Ability_Lua::Script_OnProjectileThink(
        CDOTA_Ability_Lua *const this,
        const Vector *const vLocation)
{
  ;
}


// CDOTA_Ability_Lua::Script_OnOwnerSpawned  (line 119, @0x0000000002456260, libserver.so)  // inlines: OnOwnerSpawned
void __fastcall CDOTA_Ability_Lua::Script_OnOwnerSpawned(CDOTA_Ability_Lua *const this)
{
  (*(this->_vptr_IHandleEntity + 262))(this);
}


// CDOTA_Ability_Lua::Script_OnOwnerDied  (line 120, @0x0000000002457710, libserver.so)
// calls: CDOTABaseAbility::OnOwnerDied
void __fastcall CDOTA_Ability_Lua::Script_OnOwnerDied(CDOTA_Ability_Lua *const this)
{
  CDOTABaseAbility::OnOwnerDied(this);
}


// CDOTA_Ability_Lua::Script_OnUpgrade  (line 121, @0x000000000245b2e0, libserver.so)
// calls: CDOTABaseAbility::OnUpgrade
void __fastcall CDOTA_Ability_Lua::Script_OnUpgrade(CDOTA_Ability_Lua *const this)
{
  CDOTABaseAbility::OnUpgrade(this);
}


// CDOTA_Ability_Lua::Script_OnHeroLevelUp  (line 122, @0x0000000002456280, libserver.so)
void __fastcall CDOTA_Ability_Lua::Script_OnHeroLevelUp(CDOTA_Ability_Lua *const this)
{
  ;
}


// CDOTA_Ability_Lua::Script_OnInventoryContentsChanged  (line 123, @0x000000000245a440, libserver.so)  // inlines: OnInventoryContentsChanged
// calls: CDOTABaseAbility::InitBaseValues
void __fastcall CDOTA_Ability_Lua::Script_OnInventoryContentsChanged(CDOTA_Ability_Lua *const this)
{
  CDOTABaseAbility::InitBaseValues(this);
}


// CDOTA_Ability_Lua::Script_OnItemEquipped  (line 124, @0x0000000002459150, libserver.so)  // inlines: HScriptToEntity<CBaseEntity>, ToDOTAAbility, ToDOTAItem, ToEnt
// calls: GetScriptDesc<CEntityInstance>, __dynamic_cast
// globals: `typeinfo for'CDOTABaseAbility
void __fastcall CDOTA_Ability_Lua::Script_OnItemEquipped(CDOTA_Ability_Lua *const this, HSCRIPT hItem)
{
  __int64 (__fastcall *v3)(IScriptVM *, HSCRIPT, ScriptClassDesc_t *); // r13
  ScriptClassDesc_t *Script; // rax
  const void *v5; // rax
  void *v6; // rax

  if ( hItem != 0 )
  {
    v3 = *(*g_pScriptVM + 208LL);
    Script = GetScriptDesc<CEntityInstance>(0);
    v5 = v3(g_pScriptVM, hItem, Script);
    if ( v5 != 0 )
    {
      v6 = __dynamic_cast(v5, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTABaseAbility, 0);
      if ( v6 != 0 )
        (*(*v6 + 1784LL))(v6);
    }
  }
}


// CDOTA_Ability_Lua::Script_OnHeroCalculateStatBonus  (line 125, @0x0000000002456290, libserver.so)
void __fastcall CDOTA_Ability_Lua::Script_OnHeroCalculateStatBonus(CDOTA_Ability_Lua *const this)
{
  ;
}


// CDOTA_Ability_Lua::Script_OnStolen  (line 126, @0x0000000002458f90, libserver.so)  // inlines: HScriptToEntity<CBaseEntity>, ToEnt
// calls: GetScriptDesc<CEntityInstance>
void __fastcall CDOTA_Ability_Lua::Script_OnStolen(CDOTA_Ability_Lua *const this, HSCRIPT hSourceAbility)
{
  void (__fastcall *v3)(IScriptVM *, HSCRIPT, ScriptClassDesc_t *); // r13
  ScriptClassDesc_t *Script; // rax

  if ( hSourceAbility != 0 )
  {
    v3 = *(*g_pScriptVM + 208LL);
    Script = GetScriptDesc<CEntityInstance>(0);
    v3(g_pScriptVM, hSourceAbility, Script);
  }
}


// CDOTA_Ability_Lua::Script_OnUnStolen  (line 127, @0x0000000002459c30, libserver.so)
// calls: CDOTABaseAbility::OnUnStolen
void __fastcall CDOTA_Ability_Lua::Script_OnUnStolen(CDOTA_Ability_Lua *const this)
{
  CDOTABaseAbility::OnUnStolen(this);
}


// CDOTA_Ability_Lua::Script_GetCastAnimation  (line 129, @0x000000000245b480, libserver.so)
// calls: CDOTABaseAbility::GetCastAnimation
int __fastcall CDOTA_Ability_Lua::Script_GetCastAnimation(CDOTA_Ability_Lua *const this)
{
  return CDOTABaseAbility::GetCastAnimation(this);
}


// CDOTA_Ability_Lua::Script_GetChannelAnimation  (line 130, @0x00000000024562a0, libserver.so)
int __fastcall CDOTA_Ability_Lua::Script_GetChannelAnimation(CDOTA_Ability_Lua *const this)
{
  return -1;
}


// CDOTA_Ability_Lua::Script_GetAssociatedPrimaryAbilities  (line 142, @0x00000000024562b0, libserver.so)
const char *__fastcall CDOTA_Ability_Lua::Script_GetAssociatedPrimaryAbilities(CDOTA_Ability_Lua *const this)
{
  return 0;
}


// CDOTA_Ability_Lua::Script_GetAssociatedSecondaryAbilities  (line 143, @0x00000000024562c0, libserver.so)
const char *__fastcall CDOTA_Ability_Lua::Script_GetAssociatedSecondaryAbilities(CDOTA_Ability_Lua *const this)
{
  return 0;
}


// CDOTA_Ability_Lua::Script_GetIntrinsicModifierName  (line 144, @0x00000000024562d0, libserver.so)
const char *__fastcall CDOTA_Ability_Lua::Script_GetIntrinsicModifierName(CDOTA_Ability_Lua *const this)
{
  return 0;
}


// CDOTA_Ability_Lua::Script_IsStealable  (line 145, @0x00000000024562e0, libserver.so)
bool __fastcall CDOTA_Ability_Lua::Script_IsStealable(CDOTA_Ability_Lua *const this)
{
  return 1;
}


// CDOTA_Ability_Lua::Script_IsHiddenWhenStolen  (line 146, @0x00000000024562f0, libserver.so)
bool __fastcall CDOTA_Ability_Lua::Script_IsHiddenWhenStolen(CDOTA_Ability_Lua *const this)
{
  return 0;
}


// CDOTA_Ability_Lua::Script_IsRefreshable  (line 147, @0x0000000002456300, libserver.so)
bool __fastcall CDOTA_Ability_Lua::Script_IsRefreshable(CDOTA_Ability_Lua *const this)
{
  return 1;
}


// CDOTA_Ability_Lua::Script_IsHiddenAbilityCastable  (line 148, @0x000000000245aee0, libserver.so)  // inlines: GetAbilityData, IsHiddenAbilityCastable
// calls: CDOTABaseAbility::LoadAbilityData
bool __fastcall CDOTA_Ability_Lua::Script_IsHiddenAbilityCastable(CDOTA_Ability_Lua *const this)
{
  DOTAAbilityData_t *m_pAbilityData; // rax

  m_pAbilityData = this->m_pAbilityData;
  if ( m_pAbilityData == 0 )
  {
    CDOTABaseAbility::LoadAbilityData(this, 0);
    m_pAbilityData = this->m_pAbilityData;
  }
  return (*(m_pAbilityData + 377) & 0x20) != 0;
}


// CDOTA_Ability_Lua::Script_ProcsMagicStick  (line 149, @0x0000000002456310, libserver.so)
bool __fastcall CDOTA_Ability_Lua::Script_ProcsMagicStick(CDOTA_Ability_Lua *const this)
{
  return 1;
}


// CDOTA_Ability_Lua::Script_GetConceptRecipientType  (line 153, @0x0000000002456320, libserver.so)
int __fastcall CDOTA_Ability_Lua::Script_GetConceptRecipientType(CDOTA_Ability_Lua *const this)
{
  return 0;
}


// CDOTA_Ability_Lua::Script_SpeakTrigger  (line 154, @0x0000000002456330, libserver.so)
int __fastcall CDOTA_Ability_Lua::Script_SpeakTrigger(CDOTA_Ability_Lua *const this)
{
  return 1;
}


// CDOTA_Ability_Lua::Script_GetPlaybackRateOverride  (line 157, @0x0000000002456340, libserver.so)
float __fastcall CDOTA_Ability_Lua::Script_GetPlaybackRateOverride(CDOTA_Ability_Lua *const this)
{
  return 1.0;
}


