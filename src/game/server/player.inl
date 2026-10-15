
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CInfoPlayerStart::~CInfoPlayerStart  (line 210, @0x0000000002306780, libserver.so)  // inlines: ~CPointEntity
// calls: CBaseEntity::~CBaseEntity
void __fastcall CInfoPlayerStart::~CInfoPlayerStart(CInfoPlayerStart *const this)
{
  this->_vptr_IHandleEntity = &off_3FB6510;
  CBaseEntity::~CBaseEntity(this);
}


// CInfoPlayerStart::~CInfoPlayerStart  (line 210, @0x00000000023067a0, libserver.so)  // inlines: ~CInfoPlayerStart, ~CPointEntity
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CInfoPlayerStart::~CInfoPlayerStart(CInfoPlayerStart *const this)
{
  this->_vptr_IHandleEntity = &off_3FB6510;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CInfoPlayerStart::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 212, @0x0000000002002490, libserver.so)
// globals: CInfoPlayerStart::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CInfoPlayerStart::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CInfoPlayerStart::CEntityInstanceEntityClass *const this)
{
  return CInfoPlayerStart::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CInfoPlayerStart::CEntityInstanceEntityClass::DestructInstance  (line 212, @0x00000000020024a0, libserver.so)  // inlines: Destruct<CInfoPlayerStart>
void __fastcall CInfoPlayerStart::CEntityInstanceEntityClass::DestructInstance(
        CInfoPlayerStart::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CInfoPlayerStart::CEntityInstanceEntityClass::FreeInstance  (line 212, @0x00000000020024c0, libserver.so)
void __fastcall CInfoPlayerStart::CEntityInstanceEntityClass::FreeInstance(
        CInfoPlayerStart::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CInfoPlayerStart::CEntityInstanceEntityClass::CanAllocate  (line 212, @0x00000000020024e0, libserver.so)
bool __fastcall CInfoPlayerStart::CEntityInstanceEntityClass::CanAllocate(
        const CInfoPlayerStart::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CInfoPlayerStart::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 212, @0x00000000020024f0, libserver.so)
// globals: CInfoPlayerStart::s_pSchemaBinding
const ISchemaBinding *__fastcall CInfoPlayerStart::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CInfoPlayerStart::CEntityInstanceEntityClass *const this)
{
  return CInfoPlayerStart::s_pSchemaBinding;
}


// CInfoPlayerStart::CEntityInstanceEntityClass::AllocateInstance  (line 212, @0x0000000002004ab0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CInfoPlayerStart::CEntityInstanceEntityClass::AllocateInstance(
        CInfoPlayerStart::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 784);
  memset(v1, 0, 0x310u);
  return v1;
}


// CInfoPlayerStart::CEntityInstanceEntityClass::ConstructInstance  (line 212, @0x0000000002004f70, libserver.so)  // inlines: CInfoPlayerStart, CPointEntity, Construct<CInfoPlayerStart>
// calls: CBaseEntity::CBaseEntity
CEntityInstance *__fastcall CInfoPlayerStart::CEntityInstanceEntityClass::ConstructInstance(
        CInfoPlayerStart::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseEntity::CBaseEntity(p);
    *p = &off_4086650;
  }
  return p;
}


// CInfoPlayerStart::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 212, @0x0000000002006f50, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CInfoPlayerStart::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CInfoPlayerStart::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CInfoPlayerStart::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 212, @0x0000000002006f70, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CInfoPlayerStart::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CInfoPlayerStart::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CInfoPlayerStart::GetEntityClassInternal  (line 212, @0x000000000200f7a0, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CPointEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_header_files_04.cpp
// strings: "info_player_start", "CInfoPlayerStart"
// globals: `guard variable for'CInfoPlayerStart::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartClass, CInfoPlayerStart::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CInfoPlayerStart::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CInfoPlayerStart::GetEntityClassInfo(void)::g_EntityCInfoPlayerStartClassInfo, CInfoPlayerStart::GetEntityClassInfo(void)::g_EntityCInfoPlayerStartClassInfo
CEntityClass *__cdecl CInfoPlayerStart::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CInfoPlayerStart::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartClass == 0
    && __cxa_guard_acquire(&`guard variable for'CInfoPlayerStart::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartClass) != 0 )
  {
    CInfoPlayerStart::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartClass.m_designerName.u.m_Id = 0;
    CInfoPlayerStart::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartClass._vptr_CEntityClass = off_3F79390;
    CInfoPlayerStart::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartClass.m_ComponentOffsets.m_Size = 0;
    CInfoPlayerStart::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CInfoPlayerStart::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CInfoPlayerStart::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CInfoPlayerStart::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartClass.m_AllHelpers.m_Size = 0;
    CInfoPlayerStart::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CInfoPlayerStart::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CInfoPlayerStart::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CInfoPlayerStart::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CInfoPlayerStart::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartClass.m_instanceUnserializer.m_atomicFields,
      4);
    CInfoPlayerStart::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CInfoPlayerStart::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CInfoPlayerStart::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CInfoPlayerStart::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CInfoPlayerStart::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CInfoPlayerStart::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartClass;
    CInfoPlayerStart::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CInfoPlayerStart::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CInfoPlayerStart::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CInfoPlayerStart::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CInfoPlayerStart::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CInfoPlayerStart::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CInfoPlayerStart::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CInfoPlayerStart::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CInfoPlayerStart::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartClass.m_classInputs.m_Size = 0;
    CInfoPlayerStart::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartClass.m_classInputs.m_Memory.m_pMemory = 0;
    CInfoPlayerStart::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CInfoPlayerStart::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CInfoPlayerStart::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartClass.m_classOutputs.m_Size = 0;
    CInfoPlayerStart::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CInfoPlayerStart::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CInfoPlayerStart::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CInfoPlayerStart::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartClass.m_requiredEHandle.m_Index = -1;
    CInfoPlayerStart::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartClass.m_hNetworkSerializer = 0;
    CInfoPlayerStart::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartClass.m_pBaseClassInfo = 0;
    CInfoPlayerStart::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartClass.m_pClassInfo = 0;
    CInfoPlayerStart::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartClass.m_flags = 0;
    CInfoPlayerStart::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartClass.m_nAllHelpersFlags = 0;
    CInfoPlayerStart::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartClass.m_pScriptClassDesc = 0;
    CInfoPlayerStart::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartClass.m_pInputs = 0;
    CInfoPlayerStart::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartClass.m_nInputCount = 0;
    CInfoPlayerStart::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartClass.m_pOutputs = 0;
    CInfoPlayerStart::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartClass.m_nOutputCount = 0;
    CInfoPlayerStart::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartClass.m_pGameClass = 0;
    CInfoPlayerStart::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartClass._vptr_CEntityClass = off_3FDE530;
    __cxa_guard_release(&`guard variable for'CInfoPlayerStart::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartClass);
    __cxa_atexit(
      CInfoPlayerStart::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CInfoPlayerStart::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartClass,
      &_dso_handle);
  }
  if ( g_pEntityCInfoPlayerStartClass != 0 )
    return &CInfoPlayerStart::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartClass;
  if ( `guard variable for'CInfoPlayerStart::GetEntityClassInfo(void)::g_EntityCInfoPlayerStartClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CInfoPlayerStart::GetEntityClassInfo(void)::g_EntityCInfoPlayerStartClassInfo) != 0 )
  {
    EntityClassInfo = CPointEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CInfoPlayerStart::GetEntityClassInfo(void)::g_EntityCInfoPlayerStartClassInfo,
      "CInfoPlayerStart",
      "info_player_start",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CInfoPlayerStart::GetEntityClassInfo(void)::g_EntityCInfoPlayerStartClassInfo);
  }
  CInfoPlayerStart::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartClass.m_pClassInfo = &CInfoPlayerStart::GetEntityClassInfo(void)::g_EntityCInfoPlayerStartClassInfo;
  CInfoPlayerStart::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartClass.m_pBaseClassInfo = CInfoPlayerStart::GetEntityClassInfo(void)::g_EntityCInfoPlayerStartClassInfo.m_pBaseClassInfo;
  g_pEntityCInfoPlayerStartClass = &CInfoPlayerStart::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartClass;
  CInfoPlayerStart::GetEntityClassInfo(void)::g_EntityCInfoPlayerStartClassInfo.m_pClass = &CInfoPlayerStart::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartClass;
  CInfoPlayerStart::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCInfoPlayerStartClass->m_pComponentOverrides = 0;
  return &CInfoPlayerStart::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartClass;
}


// CInfoPlayerStart::GetEntityClass  (line 212, @0x0000000002302e10, libserver.so)
CEntityClass *__cdecl CInfoPlayerStart::GetEntityClass()
{
  return g_pEntityCInfoPlayerStartClass;
}


// CInfoPlayerStart::Schema_DynamicBinding  (line 212, @0x0000000002306500, libserver.so)
// calls: CInfoPlayerStart::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CInfoPlayerStart::Schema_DynamicBinding(const CInfoPlayerStart *const this)
{
  CInfoPlayerStart::Schema_VerifyBindingIsRegistered();
  return CInfoPlayerStart::s_pSchemaBinding;
}


// CInfoPlayerStart::InputEnable  (line 217, @0x0000000002302e20, libserver.so)
void __fastcall CInfoPlayerStart::InputEnable(CInfoPlayerStart *const this, inputdata_t *const inputdata)
{
  this->m_bDisabled = 0;
}


// CInfoPlayerStart::InputDisable  (line 222, @0x0000000002302e30, libserver.so)
void __fastcall CInfoPlayerStart::InputDisable(CInfoPlayerStart *const this, inputdata_t *const inputdata)
{
  this->m_bDisabled = 1;
}


// CInfoPlayerStart::InputToggle  (line 227, @0x0000000002302e40, libserver.so)
void __fastcall CInfoPlayerStart::InputToggle(CInfoPlayerStart *const this, inputdata_t *const inputdata)
{
  this->m_bDisabled ^= 1u;
}


// CInfoPlayerStart::DrawDebugTextOverlays  (line 237, @0x0000000002306520, libserver.so)
// calls: CBaseEntity::DrawDebugTextOverlays, V_snprintf, CBaseEntity::EntityText, __stack_chk_fail
// strings: "Enabled: %s"
int __fastcall CInfoPlayerStart::DrawDebugTextOverlays(
        CInfoPlayerStart *const this,
        uint64 nDebugOverlayBits,
        int iDebugFilterFlags)
{
  __int16 v3; // r14
  char v5; // r12
  int v6; // ebx
  const char *v7; // rcx
  char tempstr[520]; // [rsp+10h] [rbp-230h] BYREF
  unsigned __int64 v10; // [rsp+218h] [rbp-28h]

  v3 = iDebugFilterFlags;
  v5 = nDebugOverlayBits;
  v10 = __readfsqword(0x28u);
  v6 = CBaseEntity::DrawDebugTextOverlays(this, nDebugOverlayBits, iDebugFilterFlags);
  if ( (v5 & 1) != 0 && (v3 & 0x4000) != 0 )
  {
    v7 = "FALSE";
    if ( !this->m_bDisabled )
      v7 = "TRUE";
    V_snprintf(tempstr, 512, "Enabled: %s", v7);
    CBaseEntity::EntityText(this, v6++, tempstr, 0.0, 255, 255, 255, 255);
  }
  return v6;
}


// CPlayerInfo::Schema_DynamicBinding  (line 267, @0x00000000023065f0, libserver.so)
// calls: CPlayerInfo::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CPlayerInfo::Schema_DynamicBinding(const CPlayerInfo *const this)
{
  CPlayerInfo::Schema_VerifyBindingIsRegistered();
  return CPlayerInfo::s_pSchemaBinding;
}


// CBasePlayer::CEntityInstanceEntityClass::DestructInstance  (line 324, @0x0000000001fb7740, libserver.so)  // inlines: Destruct<CBasePlayer>
void __fastcall CBasePlayer::CEntityInstanceEntityClass::DestructInstance(
        CBasePlayer::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CBasePlayer::CEntityInstanceEntityClass::FreeInstance  (line 324, @0x0000000001fb7760, libserver.so)
void __fastcall CBasePlayer::CEntityInstanceEntityClass::FreeInstance(
        CBasePlayer::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CBasePlayer::CEntityInstanceEntityClass::CanAllocate  (line 324, @0x0000000001fb7780, libserver.so)
bool __fastcall CBasePlayer::CEntityInstanceEntityClass::CanAllocate(
        const CBasePlayer::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CBasePlayer::CEntityInstanceEntityClass::AllocateInstance  (line 324, @0x0000000001fb9a20, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CBasePlayer::CEntityInstanceEntityClass::AllocateInstance(
        CBasePlayer::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 4488);
  memset(v1, 0, 0x1188u);
  return v1;
}


// CBasePlayer::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 324, @0x0000000001fb9ee0, libserver.so)  // inlines: Schema_StaticBinding
// calls: CBasePlayer::Schema_VerifyBindingIsRegistered
const ISchemaBinding *__fastcall CBasePlayer::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CBasePlayer::CEntityInstanceEntityClass *const this)
{
  CBasePlayer::Schema_VerifyBindingIsRegistered();
  return CBasePlayer::s_pSchemaBinding;
}


// CBasePlayer::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 324, @0x0000000001fb9f00, libserver.so)
// calls: CBasePlayer::CEntityInstanceEntityClass::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CBasePlayer::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CBasePlayer::CEntityInstanceEntityClass *const this)
{
  CBasePlayer::CEntityInstanceEntityClass::Schema_VerifyBindingIsRegistered();
  return CBasePlayer::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CBasePlayer::CEntityInstanceEntityClass::ConstructInstance  (line 324, @0x0000000001fb9f20, libserver.so)  // inlines: Construct<CBasePlayer>
// calls: CBasePlayer::CBasePlayer
CEntityInstance *__fastcall CBasePlayer::CEntityInstanceEntityClass::ConstructInstance(
        CBasePlayer::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
    CBasePlayer::CBasePlayer(p);
  return p;
}


// CBasePlayer::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 324, @0x0000000001fbd990, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CBasePlayer::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CBasePlayer::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CBasePlayer::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 324, @0x0000000001fbd9b0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CBasePlayer::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CBasePlayer::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CBasePlayer::GetEntityClassInternal  (line 324, @0x0000000002011d90, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, InitScriptDesc, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, GetScriptDesc<CBasePlayer>, CBaseCombatCharacter::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_header_files_04.cpp, _GLOBAL__sub_I__unity_base_08.cpp
// strings: "CBasePlayer"
// globals: `guard variable for'CBasePlayer::GetEntityClassInternal(void)::g_EntityCBasePlayerClass, CBasePlayer::GetEntityClassInternal(void)::g_EntityCBasePlayerClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CBasePlayer::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CBasePlayer::GetEntityClassInfo(void)::g_EntityCBasePlayerClassInfo, CBasePlayer::GetEntityClassInfo(void)::g_EntityCBasePlayerClassInfo
CEntityClass *__cdecl CBasePlayer::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CBasePlayer::GetEntityClassInternal(void)::g_EntityCBasePlayerClass == 0
    && __cxa_guard_acquire(&`guard variable for'CBasePlayer::GetEntityClassInternal(void)::g_EntityCBasePlayerClass) != 0 )
  {
    CBasePlayer::GetEntityClassInternal(void)::g_EntityCBasePlayerClass.m_designerName.u.m_Id = 0;
    CBasePlayer::GetEntityClassInternal(void)::g_EntityCBasePlayerClass._vptr_CEntityClass = off_3F79390;
    CBasePlayer::GetEntityClassInternal(void)::g_EntityCBasePlayerClass.m_ComponentOffsets.m_Size = 0;
    CBasePlayer::GetEntityClassInternal(void)::g_EntityCBasePlayerClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CBasePlayer::GetEntityClassInternal(void)::g_EntityCBasePlayerClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CBasePlayer::GetEntityClassInternal(void)::g_EntityCBasePlayerClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CBasePlayer::GetEntityClassInternal(void)::g_EntityCBasePlayerClass.m_AllHelpers.m_Size = 0;
    CBasePlayer::GetEntityClassInternal(void)::g_EntityCBasePlayerClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CBasePlayer::GetEntityClassInternal(void)::g_EntityCBasePlayerClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CBasePlayer::GetEntityClassInternal(void)::g_EntityCBasePlayerClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CBasePlayer::GetEntityClassInternal(void)::g_EntityCBasePlayerClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CBasePlayer::GetEntityClassInternal(void)::g_EntityCBasePlayerClass.m_instanceUnserializer.m_atomicFields,
      4);
    CBasePlayer::GetEntityClassInternal(void)::g_EntityCBasePlayerClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CBasePlayer::GetEntityClassInternal(void)::g_EntityCBasePlayerClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CBasePlayer::GetEntityClassInternal(void)::g_EntityCBasePlayerClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CBasePlayer::GetEntityClassInternal(void)::g_EntityCBasePlayerClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CBasePlayer::GetEntityClassInternal(void)::g_EntityCBasePlayerClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CBasePlayer::GetEntityClassInternal(void)::g_EntityCBasePlayerClass;
    CBasePlayer::GetEntityClassInternal(void)::g_EntityCBasePlayerClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CBasePlayer::GetEntityClassInternal(void)::g_EntityCBasePlayerClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CBasePlayer::GetEntityClassInternal(void)::g_EntityCBasePlayerClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CBasePlayer::GetEntityClassInternal(void)::g_EntityCBasePlayerClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CBasePlayer::GetEntityClassInternal(void)::g_EntityCBasePlayerClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CBasePlayer::GetEntityClassInternal(void)::g_EntityCBasePlayerClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CBasePlayer::GetEntityClassInternal(void)::g_EntityCBasePlayerClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CBasePlayer::GetEntityClassInternal(void)::g_EntityCBasePlayerClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CBasePlayer::GetEntityClassInternal(void)::g_EntityCBasePlayerClass.m_classInputs.m_Size = 0;
    CBasePlayer::GetEntityClassInternal(void)::g_EntityCBasePlayerClass.m_classInputs.m_Memory.m_pMemory = 0;
    CBasePlayer::GetEntityClassInternal(void)::g_EntityCBasePlayerClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CBasePlayer::GetEntityClassInternal(void)::g_EntityCBasePlayerClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CBasePlayer::GetEntityClassInternal(void)::g_EntityCBasePlayerClass.m_classOutputs.m_Size = 0;
    CBasePlayer::GetEntityClassInternal(void)::g_EntityCBasePlayerClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CBasePlayer::GetEntityClassInternal(void)::g_EntityCBasePlayerClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CBasePlayer::GetEntityClassInternal(void)::g_EntityCBasePlayerClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CBasePlayer::GetEntityClassInternal(void)::g_EntityCBasePlayerClass.m_requiredEHandle.m_Index = -1;
    CBasePlayer::GetEntityClassInternal(void)::g_EntityCBasePlayerClass.m_hNetworkSerializer = 0;
    CBasePlayer::GetEntityClassInternal(void)::g_EntityCBasePlayerClass.m_pBaseClassInfo = 0;
    CBasePlayer::GetEntityClassInternal(void)::g_EntityCBasePlayerClass.m_pClassInfo = 0;
    CBasePlayer::GetEntityClassInternal(void)::g_EntityCBasePlayerClass.m_flags = 0;
    CBasePlayer::GetEntityClassInternal(void)::g_EntityCBasePlayerClass.m_nAllHelpersFlags = 0;
    CBasePlayer::GetEntityClassInternal(void)::g_EntityCBasePlayerClass.m_pScriptClassDesc = 0;
    CBasePlayer::GetEntityClassInternal(void)::g_EntityCBasePlayerClass.m_pInputs = 0;
    CBasePlayer::GetEntityClassInternal(void)::g_EntityCBasePlayerClass.m_nInputCount = 0;
    CBasePlayer::GetEntityClassInternal(void)::g_EntityCBasePlayerClass.m_pOutputs = 0;
    CBasePlayer::GetEntityClassInternal(void)::g_EntityCBasePlayerClass.m_nOutputCount = 0;
    CBasePlayer::GetEntityClassInternal(void)::g_EntityCBasePlayerClass.m_pGameClass = 0;
    CBasePlayer::GetEntityClassInternal(void)::g_EntityCBasePlayerClass._vptr_CEntityClass = off_3FD0690;
    __cxa_guard_release(&`guard variable for'CBasePlayer::GetEntityClassInternal(void)::g_EntityCBasePlayerClass);
    __cxa_atexit(
      CBasePlayer::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CBasePlayer::GetEntityClassInternal(void)::g_EntityCBasePlayerClass,
      &_dso_handle);
  }
  if ( g_pEntityCBasePlayerClass != 0 )
    return &CBasePlayer::GetEntityClassInternal(void)::g_EntityCBasePlayerClass;
  if ( `guard variable for'CBasePlayer::GetEntityClassInfo(void)::g_EntityCBasePlayerClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CBasePlayer::GetEntityClassInfo(void)::g_EntityCBasePlayerClassInfo) != 0 )
  {
    EntityClassInfo = CBaseCombatCharacter::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CBasePlayer::GetEntityClassInfo(void)::g_EntityCBasePlayerClassInfo,
      "CBasePlayer",
      0,
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CBasePlayer::GetEntityClassInfo(void)::g_EntityCBasePlayerClassInfo);
  }
  CBasePlayer::GetEntityClassInternal(void)::g_EntityCBasePlayerClass.m_pClassInfo = &CBasePlayer::GetEntityClassInfo(void)::g_EntityCBasePlayerClassInfo;
  CBasePlayer::GetEntityClassInternal(void)::g_EntityCBasePlayerClass.m_pBaseClassInfo = CBasePlayer::GetEntityClassInfo(void)::g_EntityCBasePlayerClassInfo.m_pBaseClassInfo;
  g_pEntityCBasePlayerClass = &CBasePlayer::GetEntityClassInternal(void)::g_EntityCBasePlayerClass;
  CBasePlayer::GetEntityClassInfo(void)::g_EntityCBasePlayerClassInfo.m_pClass = &CBasePlayer::GetEntityClassInternal(void)::g_EntityCBasePlayerClass;
  CBasePlayer::GetEntityClassInternal(void)::g_EntityCBasePlayerClass.m_pScriptClassDesc = GetScriptDesc<CBasePlayer>(0);
  g_pEntityCBasePlayerClass->m_pComponentOverrides = 0;
  return &CBasePlayer::GetEntityClassInternal(void)::g_EntityCBasePlayerClass;
}


// CBasePlayer::Schema_DynamicBinding  (line 324, @0x000000000217b3f0, libserver.so)
// calls: CBasePlayer::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CBasePlayer::Schema_DynamicBinding(const CBasePlayer *const this)
{
  CBasePlayer::Schema_VerifyBindingIsRegistered();
  return CBasePlayer::s_pSchemaBinding;
}


// CBasePlayer::GetEntityClass  (line 324, @0x0000000002302e50, libserver.so)
CEntityClass *__cdecl CBasePlayer::GetEntityClass()
{
  return g_pEntityCBasePlayerClass;
}


// CBasePlayer::RequiredEdictIndex  (line 377, @0x00000000021799c0, libserver.so)  // inlines: CEntityHandle, GetEHandle, GetEntryIndex, GetSerialNumber, Init
CEntityIndex __fastcall CBasePlayer::RequiredEdictIndex(CBasePlayer *const this)
{
  CEntityIdentity *m_pEntity; // rax
  int v2; // edx
  unsigned __int16 v3; // si
  CEntityIndex result; // eax

  m_pEntity = this->m_pEntity;
  v2 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
  if ( m_pEntity->m_EHandle.m_Index == -1 )
  {
    v3 = 0x7FFF;
    result.m_Data = 0x7FFF;
  }
  else
  {
    v3 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    result.m_Data = v3;
  }
  if ( ((v2 << 15) | v3 & 0x7FFF) == 0xFFFFFFFF )
    return 0x7FFF;
  return result;
}


// CBasePlayer::InitHUD  (line 422, @0x0000000002179a30, libserver.so)
void __fastcall CBasePlayer::InitHUD(CBasePlayer *const this)
{
  ;
}


// CBasePlayer::Cough  (line 430, @0x0000000002179a40, libserver.so)
void __fastcall CBasePlayer::Cough(CBasePlayer *const this, CBasePlayer *coughCauser)
{
  ;
}


// CBasePlayer::FindValidSpawnLocation  (line 471, @0x0000000002179a50, libserver.so)
Vector __fastcall CBasePlayer::FindValidSpawnLocation(CBasePlayer *const this, const Vector *const vStartingLocation)
{
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  *&result.x = *&vStartingLocation->x;
  result.z = vStartingLocation->z;
  return result;
}


// CBasePlayer::GetHMDModel  (line 473, @0x0000000002179a70, libserver.so)
const char *__fastcall CBasePlayer::GetHMDModel(const CBasePlayer *const this)
{
  return 0;
}


// CBasePlayer::ShouldFadeOnDeath  (line 500, @0x0000000002179a80, libserver.so)
bool __fastcall CBasePlayer::ShouldFadeOnDeath(CBasePlayer *const this)
{
  return 0;
}


// CBasePlayer::IsPlayer  (line 512, @0x0000000002179a90, libserver.so)
bool __fastcall CBasePlayer::IsPlayer(const CBasePlayer *const this)
{
  return 1;
}


// CBasePlayer::IsNetClient  (line 513, @0x0000000002179aa0, libserver.so)
bool __fastcall CBasePlayer::IsNetClient(const CBasePlayer *const this)
{
  return 1;
}


// CBasePlayer::GetPlayerName  (line 522, @0x0000000002179ab0, libserver.so)
const char *__fastcall CBasePlayer::GetPlayerName(const CBasePlayer *const this)
{
  return this->m_szNetname;
}


// CBasePlayer::GetCharacterDisplayName  (line 525, @0x0000000002179ac0, libserver.so)
const char *__fastcall CBasePlayer::GetCharacterDisplayName(CBasePlayer *const this)
{
  return (*(this->_vptr_IHandleEntity + 106))(this);
}


// CBasePlayer::GetPlayerID  (line 529, @0x000000000217c450, libserver.so)  // inlines: GetUserID, entindex
// calls: CEntityInstance::GetEntityIndex
int __fastcall CBasePlayer::GetPlayerID(const CBasePlayer *const this)
{
  CEntityIndex v1; // eax

  v1.m_Data = CEntityInstance::GetEntityIndex(this).m_Data;
  return (*(*engine + 224LL))(engine, (v1.m_Data - 1));
}


// CBasePlayer::NoClipStateChanged  (line 546, @0x0000000002179ae0, libserver.so)
void __fastcall CBasePlayer::NoClipStateChanged(CBasePlayer *const this)
{
  ;
}


// CBasePlayer::ActivePlayerCombatCharacter  (line 576, @0x0000000002179af0, libserver.so)
CBaseCombatCharacter *__fastcall CBasePlayer::ActivePlayerCombatCharacter(CBasePlayer *const this)
{
  return this;
}


// CBasePlayer::Weapon_ShouldSetLast  (line 587, @0x0000000002179b00, libserver.so)
bool __fastcall CBasePlayer::Weapon_ShouldSetLast(
        CBasePlayer *const this,
        CBaseCombatWeapon *pOldWeapon,
        CBaseCombatWeapon *pNewWeapon)
{
  return 1;
}


// CBasePlayer::HasUnlockableWeapons  (line 594, @0x0000000002179b10, libserver.so)
bool __fastcall CBasePlayer::HasUnlockableWeapons(CBasePlayer *const this, int iUnlockedableIndex)
{
  return 0;
}


// CBasePlayer::ObjectCaps  (line 603, @0x000000000217b740, libserver.so)
// calls: CBaseEntity::ObjectCaps
int __fastcall CBasePlayer::ObjectCaps(CBasePlayer *const this)
{
  int result; // eax

  result = CBaseEntity::ObjectCaps(this);
  LOBYTE(result) = result & 0x7F;
  return result;
}


// CBasePlayer::ExitLadder  (line 606, @0x0000000002179b20, libserver.so)
void __fastcall CBasePlayer::ExitLadder(CBasePlayer *const this)
{
  ;
}


// CBasePlayer::IsAbleToAutoCenterOnLadders  (line 608, @0x0000000002179b30, libserver.so)
bool __fastcall CBasePlayer::IsAbleToAutoCenterOnLadders(const CBasePlayer *const this)
{
  return 1;
}


// CBasePlayer::SetFlashlightEnabled  (line 618, @0x0000000002179b40, libserver.so)
void __fastcall CBasePlayer::SetFlashlightEnabled(CBasePlayer *const this, bool bState)
{
  ;
}


// CBasePlayer::FlashlightIsOn  (line 619, @0x0000000002179b50, libserver.so)
int __fastcall CBasePlayer::FlashlightIsOn(const CBasePlayer *const this)
{
  return 0;
}


// CBasePlayer::FlashlightTurnOn  (line 620, @0x0000000002179b60, libserver.so)
bool __fastcall CBasePlayer::FlashlightTurnOn(CBasePlayer *const this, bool playSound)
{
  return 0;
}


// CBasePlayer::FlashlightTurnOff  (line 621, @0x0000000002179b70, libserver.so)
void __fastcall CBasePlayer::FlashlightTurnOff(CBasePlayer *const this, bool playSound)
{
  ;
}


// CBasePlayer::IsIlluminatedByFlashlight  (line 622, @0x0000000002179b80, libserver.so)
bool __fastcall CBasePlayer::IsIlluminatedByFlashlight(
        CBasePlayer *const this,
        CBaseEntity *pEntity,
        float *flReturnDot)
{
  return 0;
}


// CBasePlayer::OnMainActivityComplete  (line 640, @0x0000000002179b90, libserver.so)
void __fastcall CBasePlayer::OnMainActivityComplete(
        CBasePlayer *const this,
        Activity newActivity,
        Activity oldActivity)
{
  ;
}


// CBasePlayer::OnMainActivityInterrupted  (line 641, @0x0000000002179ba0, libserver.so)
void __fastcall CBasePlayer::OnMainActivityInterrupted(
        CBasePlayer *const this,
        Activity newActivity,
        Activity oldActivity)
{
  ;
}


// CBasePlayer::OnClientFullyConnect  (line 644, @0x0000000002179bb0, libserver.so)
void __fastcall CBasePlayer::OnClientFullyConnect(CBasePlayer *const this)
{
  ;
}


// CBasePlayer::ModeWantsSpectatorGUI  (line 659, @0x0000000002179bc0, libserver.so)
bool __fastcall CBasePlayer::ModeWantsSpectatorGUI(CBasePlayer *const this, int iMode)
{
  return 1;
}


// CBasePlayer::WantsRoamingObserverMode  (line 675, @0x0000000002179bd0, libserver.so)
bool __fastcall CBasePlayer::WantsRoamingObserverMode(const CBasePlayer *const this)
{
  return 1;
}


// CBasePlayer::CreateCorpse  (line 685, @0x0000000002179be0, libserver.so)
void __fastcall CBasePlayer::CreateCorpse(CBasePlayer *const this)
{
  ;
}


// CBasePlayer::OnVehicleStart  (line 697, @0x0000000002179bf0, libserver.so)
void __fastcall CBasePlayer::OnVehicleStart(CBasePlayer *const this)
{
  ;
}


// CBasePlayer::OnVehicleEnd  (line 698, @0x0000000002179c00, libserver.so)
void __fastcall CBasePlayer::OnVehicleEnd(CBasePlayer *const this, Vector *const playerDestPosition)
{
  ;
}


// CBasePlayer::CanBreatheUnderwater  (line 733, @0x0000000002179c10, libserver.so)
bool __fastcall CBasePlayer::CanBreatheUnderwater(const CBasePlayer *const this)
{
  return 0;
}


// CBasePlayer::CanRecoverCurrentDrowningDamage  (line 734, @0x0000000002179c20, libserver.so)
bool __fastcall CBasePlayer::CanRecoverCurrentDrowningDamage(const CBasePlayer *const this)
{
  return 1;
}


// CBasePlayer::PlayUseDenySound  (line 736, @0x0000000002179c30, libserver.so)
void __fastcall CBasePlayer::PlayUseDenySound(CBasePlayer *const this)
{
  ;
}


// CBasePlayer::OnUseEntity  (line 742, @0x0000000002179c40, libserver.so)
void __fastcall CBasePlayer::OnUseEntity(CBasePlayer *const this, CBaseEntity *pEntity, USE_TYPE useType)
{
  ;
}


// CBasePlayer::HasUseEntity  (line 744, @0x000000000217cc90, libserver.so)  // inlines: CEntityHandle, Get, GetEntryIndex, GetHandleEntity, GetSerialNumber, IndexToIdentity, Init, LookupEntity
bool __fastcall CBasePlayer::HasUseEntity(const CBasePlayer *const this)
{
  unsigned __int16 v1; // dx
  int v2; // esi
  uint32 v3; // edx
  bool result; // al
  CEntityIdentity *v5; // rcx
  CEntityIdentity *v6; // rcx

  if ( this->m_hUseEntity.m_Value.m_Index == -1 )
  {
    v1 = 0x7FFF;
    v2 = 0x7FFF;
  }
  else
  {
    v1 = this->m_hUseEntity.m_Value.m_Index & 0x7FFF;
    v2 = v1;
  }
  v3 = (this->m_hUseEntity.m_Value.m_Index >> 15 << 15) | v1 & 0x7FFF;
  result = 0;
  if ( v3 + 2 > 1 )
  {
    v5 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v2 >> 9];
    if ( v5 != 0 )
    {
      v6 = &v5[v2 & 0x1FF];
      if ( v6 != 0 && v3 == v6->m_EHandle.m_Index )
        return v6->m_pInstance != 0;
    }
  }
  return result;
}


// CBasePlayer::PickupObject  (line 751, @0x0000000002179c50, libserver.so)
void __fastcall CBasePlayer::PickupObject(
        CBasePlayer *const this,
        CBaseEntity *pObject,
        bool bLimitMassAndSize,
        int nHandID)
{
  ;
}


// CBasePlayer::ForceDropOfCarriedPhysObjects  (line 752, @0x0000000002179c60, libserver.so)
void __fastcall CBasePlayer::ForceDropOfCarriedPhysObjects(CBasePlayer *const this, CBaseEntity *pOnlyIfHoldindThis)
{
  ;
}


// CBasePlayer::IsHoldingEntity  (line 756, @0x0000000002179c70, libserver.so)
bool __fastcall CBasePlayer::IsHoldingEntity(CBasePlayer *const this, CBaseEntity *pEnt)
{
  return 0;
}


// CBasePlayer::ChangeTeam  (line 792, @0x0000000002179c80, libserver.so)
void __fastcall CBasePlayer::ChangeTeam(CBasePlayer *const this, int iTeamNum)
{
  (*(this->_vptr_IHandleEntity + 493))(this, iTeamNum, 0, 0);
}


// CBasePlayer::CanHearAndReadChatFrom  (line 796, @0x0000000002179ca0, libserver.so)
bool __fastcall CBasePlayer::CanHearAndReadChatFrom(CBasePlayer *const this, CBasePlayer *pPlayer)
{
  return 1;
}


// CBasePlayer::CanSpeak  (line 797, @0x0000000002302e60, libserver.so)
bool __fastcall CBasePlayer::CanSpeak(CBasePlayer *const this)
{
  return 1;
}


// CBasePlayer::CheckChatText  (line 812, @0x0000000002179cb0, libserver.so)
void __fastcall CBasePlayer::CheckChatText(CBasePlayer *const this, char *p, int bufsize)
{
  ;
}


// CBasePlayer::CreateRagdollEntity  (line 814, @0x0000000002179cc0, libserver.so)
void __fastcall CBasePlayer::CreateRagdollEntity(CBasePlayer *const this)
{
  ;
}


// CBasePlayer::IsPlayerHoldingRagdoll  (line 815, @0x0000000002179cd0, libserver.so)
bool __fastcall CBasePlayer::IsPlayerHoldingRagdoll(CBasePlayer *const this)
{
  return 0;
}


// CBasePlayer::ShouldAnnounceAchievement  (line 824, @0x0000000002179ce0, libserver.so)
bool __fastcall CBasePlayer::ShouldAnnounceAchievement(CBasePlayer *const this)
{
  return 1;
}


// CBasePlayer::ForceChangeTeam  (line 842, @0x0000000002179cf0, libserver.so)
void __fastcall CBasePlayer::ForceChangeTeam(CBasePlayer *const this, int iTeamNum)
{
  ;
}


// CBasePlayer::IsFollowingPhysics  (line 851, @0x0000000002179d00, libserver.so)
bool __fastcall CBasePlayer::IsFollowingPhysics(CBasePlayer *const this)
{
  return 0;
}


// CBasePlayer::Hints  (line 869, @0x0000000002179d10, libserver.so)
CHintSystem *__fastcall CBasePlayer::Hints(CBasePlayer *const this)
{
  return 0;
}


// CBasePlayer::IsReadyToPlay  (line 905, @0x0000000002179d20, libserver.so)
bool __fastcall CBasePlayer::IsReadyToPlay(CBasePlayer *const this)
{
  return 1;
}


// CBasePlayer::IsReadyToSpawn  (line 906, @0x0000000002179d30, libserver.so)
bool __fastcall CBasePlayer::IsReadyToSpawn(CBasePlayer *const this)
{
  return 1;
}


// CBasePlayer::ShouldGainInstantSpawn  (line 907, @0x0000000002179d40, libserver.so)
bool __fastcall CBasePlayer::ShouldGainInstantSpawn(CBasePlayer *const this)
{
  return 0;
}


// CBasePlayer::ResetPerRoundStats  (line 908, @0x0000000002179d50, libserver.so)
void __fastcall CBasePlayer::ResetPerRoundStats(CBasePlayer *const this)
{
  ;
}


// CBasePlayer::ResetScores  (line 911, @0x0000000002179d60, libserver.so)  // inlines: ResetDeathCount, ResetFragCount
void __fastcall CBasePlayer::ResetScores(CBasePlayer *const this)
{
  this->m_iFrags = 0;
  this->m_pl.frags = 0;
  this->m_iDeaths = 0;
  this->m_pl.deaths = 0;
}


// CBasePlayer::GetNumUseEntities  (line 937, @0x0000000002179d90, libserver.so)
int __fastcall CBasePlayer::GetNumUseEntities(const CBasePlayer *const this)
{
  return (*(this->_vptr_IHandleEntity + 478))(this);
}


// CBasePlayer::GetUseEntity  (line 938, @0x0000000002179db0, libserver.so)
CBaseEntity *__fastcall CBasePlayer::GetUseEntity(const CBasePlayer *const this, int nIndex)
{
  return (*(this->_vptr_IHandleEntity + 514))(this, nIndex);
}


// CBasePlayer::OnUseEntityChanged  (line 940, @0x0000000002179dd0, libserver.so)
void __fastcall CBasePlayer::OnUseEntityChanged(CBasePlayer *const this)
{
  ;
}


// CBasePlayer::GetExpresser  (line 1006, @0x0000000002179de0, libserver.so)
CAI_Expresser *__fastcall CBasePlayer::GetExpresser(CBasePlayer *const this)
{
  return 0;
}


// CBasePlayer::NetworkVar_m_Local::NetworkStateChanged  (line 1035, @0x0000000002302e70, libserver.so)  // inlines: DispatchNetworkStateChanged<CBasePlayer>
void __fastcall CBasePlayer::NetworkVar_m_Local::NetworkStateChanged(CBasePlayer::NetworkVar_m_Local *const this)
{
  (*(*(this - 237) + 168LL))(this - 1896);
}


// CBasePlayer::NetworkVar_m_Local::NetworkStateChangedLog  (line 1035, @0x0000000002302e90, libserver.so)  // inlines: DispatchNetworkStateChangedLog<CBasePlayer>
void __fastcall CBasePlayer::NetworkVar_m_Local::NetworkStateChangedLog(
        const CBasePlayer::NetworkVar_m_Local *const this,
        const char *pVarName,
        const char *pMsg)
{
  (*(*(this - 237) + 184LL))(this - 1896, pVarName, pMsg);
}


// CBasePlayer::NetworkVar_m_Local::NetworkStateChanged  (line 1035, @0x0000000002302eb0, libserver.so)  // inlines: DispatchNetworkStateChanged<CBasePlayer>
void __fastcall CBasePlayer::NetworkVar_m_Local::NetworkStateChanged(
        CBasePlayer::NetworkVar_m_Local *const this,
        uint32 nLocalOffset,
        int32 nArrayIndex,
        ChangeAccessorFieldPathIndex_t nPathIndex)
{
  (*(*(this - 237) + 176LL))(this - 1896, nLocalOffset, nArrayIndex, this->m_NetworkVar_PathIndex.m_Value);
}


// CBasePlayer::NetworkVar_m_PlayerFog::NetworkStateChanged  (line 1037, @0x0000000002302ee0, libserver.so)  // inlines: DispatchNetworkStateChanged<CBasePlayer>
void __fastcall CBasePlayer::NetworkVar_m_PlayerFog::NetworkStateChanged(
        CBasePlayer::NetworkVar_m_PlayerFog *const this)
{
  (*(*(this - 299) + 168LL))(this - 2392);
}


// CBasePlayer::NetworkVar_m_PlayerFog::NetworkStateChangedLog  (line 1037, @0x0000000002302f00, libserver.so)  // inlines: DispatchNetworkStateChangedLog<CBasePlayer>
void __fastcall CBasePlayer::NetworkVar_m_PlayerFog::NetworkStateChangedLog(
        const CBasePlayer::NetworkVar_m_PlayerFog *const this,
        const char *pVarName,
        const char *pMsg)
{
  (*(*(this - 299) + 184LL))(this - 2392, pVarName, pMsg);
}


// CBasePlayer::NetworkVar_m_PlayerFog::NetworkStateChanged  (line 1037, @0x0000000002302f20, libserver.so)  // inlines: DispatchNetworkStateChanged<CBasePlayer>
void __fastcall CBasePlayer::NetworkVar_m_PlayerFog::NetworkStateChanged(
        CBasePlayer::NetworkVar_m_PlayerFog *const this,
        uint32 nLocalOffset,
        int32 nArrayIndex,
        ChangeAccessorFieldPathIndex_t nPathIndex)
{
  (*(*(this - 299) + 176LL))(this - 2392, nLocalOffset + 2392, nArrayIndex, nPathIndex.m_Value);
}


// CBasePlayer::SpawnArmorValue  (line 1184, @0x0000000002179df0, libserver.so)
int __fastcall CBasePlayer::SpawnArmorValue(const CBasePlayer *const this)
{
  return 0;
}


// CBasePlayer::OnActiveAttachmentChanged  (line 1316, @0x0000000002179e00, libserver.so)
void __fastcall CBasePlayer::OnActiveAttachmentChanged(
        CBasePlayer *const this,
        CPropVRHand *pHand,
        CBaseVRHandAttachment *pOld,
        CBaseVRHandAttachment *pNew)
{
  ;
}


// CBasePlayer::IsAutoCrouched  (line 1407, @0x0000000002179e10, libserver.so)
bool __fastcall CBasePlayer::IsAutoCrouched(const CBasePlayer *const this)
{
  return 0;
}


// CBasePlayer::OnSpeak  (line 1472, @0x0000000002179e20, libserver.so)
void __fastcall CBasePlayer::OnSpeak(CBasePlayer *const this, CBasePlayer *actor, const char *sound, float duration)
{
  ;
}


// CBasePlayer::OnVoiceTransmit  (line 1475, @0x0000000002179e30, libserver.so)
void __fastcall CBasePlayer::OnVoiceTransmit(CBasePlayer *const this)
{
  ;
}


// CBasePlayer::HasHaptics  (line 1478, @0x0000000002179e40, libserver.so)
bool __fastcall CBasePlayer::HasHaptics(CBasePlayer *const this)
{
  return this->m_bhasHaptics;
}


// CBasePlayer::SetHaptics  (line 1479, @0x0000000002179e50, libserver.so)
void __fastcall CBasePlayer::SetHaptics(CBasePlayer *const this, bool has)
{
  this->m_bhasHaptics = has;
}


// CBasePlayer::SetUseEntity  (line 1611, @0x000000000217c800, libserver.so)  // inlines: GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, IndexToIdentity, IsValid, LookupEntity, NetworkStateChanged, Set, operator!=, operator=
// globals: CEntityHandle::gm_pEntityList
void __fastcall CBasePlayer::SetUseEntity(
        CBasePlayer *const this,
        CBaseEntity *pUseEntity,
        bool bAllowMultiple,
        int nHandID,
        CBaseEntity *pHeldEntity,
        matrix3x4_t *pCarryToHandTargetSpace)
{
  CBaseEntity *m_pInstance; // rcx
  uint32 m_Index; // eax
  CEntityIdentity *v10; // rdx
  CEntityIdentity *v11; // rdx
  CEntityIdentity *m_pEntity; // rdx
  int v13; // eax
  __int16 v14; // cx

  m_pInstance = 0;
  m_Index = this->m_hUseEntity.m_Value.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hUseEntity.m_Value.m_Index) >> 9) & 0x3F];
    if ( v10 != 0 )
    {
      v11 = &v10[this->m_hUseEntity.m_Value.m_Index & 0x1FF];
      if ( v11 != 0 && m_Index == v11->m_EHandle.m_Index )
        m_pInstance = v11->m_pInstance;
    }
  }
  if ( pUseEntity != m_pInstance )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 2708, 0xFFFFFFFFLL, 0xFFFFFFFFLL, pHeldEntity, pCarryToHandTargetSpace);
    if ( pUseEntity != 0 && (m_pEntity = pUseEntity->m_pEntity) != 0 )
    {
      v13 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      if ( m_pEntity->m_EHandle.m_Index == -1 )
        v14 = 0x7FFF;
      else
        v14 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LOWORD(this->m_hUseEntity.m_Value.m_Index) = v14 | this->m_hUseEntity.m_Value.m_Index & 0x8000;
      this->m_hUseEntity.m_Value.m_Index = (v13 << 15) | this->m_hUseEntity.m_Value.m_Index & 0x7FFF;
    }
    else
    {
      this->m_hUseEntity.m_Value.m_Index = -1;
    }
  }
  (*(this->_vptr_IHandleEntity + 518))(this);
}


// CBasePlayer::GetUseEntity  (line 1619, @0x000000000217cb30, libserver.so)  // inlines: CEntityHandle, Get, GetEntryIndex, GetHandleEntity, GetInstance, GetSerialNumber, IndexToIdentity, Init, LookupEntity
CBaseEntity *__fastcall CBasePlayer::GetUseEntity(const CBasePlayer *const this)
{
  unsigned __int16 v1; // dx
  int v2; // esi
  uint32 v3; // edx
  CBaseEntity *result; // rax
  CEntityIdentity *v5; // rcx
  CEntityIdentity *v6; // rcx

  if ( this->m_hUseEntity.m_Value.m_Index == -1 )
  {
    v1 = 0x7FFF;
    v2 = 0x7FFF;
  }
  else
  {
    v1 = this->m_hUseEntity.m_Value.m_Index & 0x7FFF;
    v2 = v1;
  }
  v3 = (this->m_hUseEntity.m_Value.m_Index >> 15 << 15) | v1 & 0x7FFF;
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


// CBasePlayer::GetVehicle  (line 1672, @0x000000000217ce00, libserver.so)  // inlines: CEntityHandle, Get, GetEntryIndex, GetHandleEntity, GetInstance, GetSerialNumber, IndexToIdentity, Init, LookupEntity
IServerVehicle *__fastcall CBasePlayer::GetVehicle(CBasePlayer *const this)
{
  unsigned __int16 v1; // dx
  int v2; // esi
  uint32 v3; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx

  if ( this->m_hVehicle.m_Value.m_Index == -1 )
  {
    v1 = 0x7FFF;
    v2 = 0x7FFF;
  }
  else
  {
    v1 = this->m_hVehicle.m_Value.m_Index & 0x7FFF;
    v2 = v1;
  }
  v3 = (this->m_hVehicle.m_Value.m_Index >> 15 << 15) | v1 & 0x7FFF;
  if ( v3 + 2 > 1
    && (v4 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v2 >> 9]) != 0
    && (v5 = &v4[v2 & 0x1FF]) != 0
    && v3 == v5->m_EHandle.m_Index
    && v5->m_pInstance != 0 )
  {
    return (*(v5->m_pInstance->_vptr_IHandleEntity + 101))(v5->m_pInstance);
  }
  else
  {
    return 0;
  }
}


// CBasePlayer::GetVehicle  (line 1680, @0x000000000217cd40, libserver.so)  // inlines: CEntityHandle, Get, GetEntryIndex, GetHandleEntity, GetInstance, GetSerialNumber, IndexToIdentity, Init, LookupEntity
const IServerVehicle *__fastcall CBasePlayer::GetVehicle(const CBasePlayer *const this)
{
  unsigned __int16 v1; // dx
  int v2; // esi
  uint32 v3; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx

  if ( this->m_hVehicle.m_Value.m_Index == -1 )
  {
    v1 = 0x7FFF;
    v2 = 0x7FFF;
  }
  else
  {
    v1 = this->m_hVehicle.m_Value.m_Index & 0x7FFF;
    v2 = v1;
  }
  v3 = (this->m_hVehicle.m_Value.m_Index >> 15 << 15) | v1 & 0x7FFF;
  if ( v3 + 2 > 1
    && (v4 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v2 >> 9]) != 0
    && (v5 = &v4[v2 & 0x1FF]) != 0
    && v3 == v5->m_EHandle.m_Index
    && v5->m_pInstance != 0 )
  {
    return (*(v5->m_pInstance->_vptr_IHandleEntity + 101))(v5->m_pInstance);
  }
  else
  {
    return 0;
  }
}


// CBasePlayer::GetVehicleEntity  (line 1688, @0x000000000217ca80, libserver.so)  // inlines: CEntityHandle, Get, GetEntryIndex, GetHandleEntity, GetInstance, GetSerialNumber, IndexToIdentity, Init, LookupEntity
CBaseEntity *__fastcall CBasePlayer::GetVehicleEntity(CBasePlayer *const this)
{
  unsigned __int16 v1; // dx
  int v2; // esi
  uint32 v3; // edx
  CBaseEntity *result; // rax
  CEntityIdentity *v5; // rcx
  CEntityIdentity *v6; // rcx

  if ( this->m_hVehicle.m_Value.m_Index == -1 )
  {
    v1 = 0x7FFF;
    v2 = 0x7FFF;
  }
  else
  {
    v1 = this->m_hVehicle.m_Value.m_Index & 0x7FFF;
    v2 = v1;
  }
  v3 = (this->m_hVehicle.m_Value.m_Index >> 15 << 15) | v1 & 0x7FFF;
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


// CBasePlayer::IsInAVehicle  (line 1695, @0x000000000217cbe0, libserver.so)  // inlines: CEntityHandle, Get, GetEntryIndex, GetHandleEntity, GetSerialNumber, IndexToIdentity, Init, LookupEntity
bool __fastcall CBasePlayer::IsInAVehicle(const CBasePlayer *const this)
{
  unsigned __int16 v1; // dx
  int v2; // esi
  uint32 v3; // edx
  bool result; // al
  CEntityIdentity *v5; // rcx
  CEntityIdentity *v6; // rcx

  if ( this->m_hVehicle.m_Value.m_Index == -1 )
  {
    v1 = 0x7FFF;
    v2 = 0x7FFF;
  }
  else
  {
    v1 = this->m_hVehicle.m_Value.m_Index & 0x7FFF;
    v2 = v1;
  }
  v3 = (this->m_hVehicle.m_Value.m_Index >> 15 << 15) | v1 & 0x7FFF;
  result = 0;
  if ( v3 + 2 > 1 )
  {
    v5 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v2 >> 9];
    if ( v5 != 0 )
    {
      v6 = &v5[v2 & 0x1FF];
      if ( v6 != 0 && v3 == v6->m_EHandle.m_Index )
        return v6->m_pInstance != 0;
    }
  }
  return result;
}


// CBasePlayer::UpdateTransmitState  (line 1782, @0x000000000217b410, libserver.so)
// calls: CBaseEntity::SetTransmitState
int __fastcall CBasePlayer::UpdateTransmitState(CBasePlayer *const this)
{
  return CBaseEntity::SetTransmitState(this, 0);
}


// CBasePlayer::GetPhysicsImpactDamageTable  (line 1790, @0x0000000002179e60, libserver.so)
const impactdamagetable_t *__fastcall CBasePlayer::GetPhysicsImpactDamageTable(CBasePlayer *const this)
{
  return &gDefaultPlayerImpactDamageTable;
}


// CBasePlayer::AttemptToExitFreezeCam  (line 1804, @0x0000000002179e70, libserver.so)
void __fastcall CBasePlayer::AttemptToExitFreezeCam(CBasePlayer *const this)
{
  (*(this->_vptr_IHandleEntity + 432))(this, 1);
}


// CBasePlayer::GetReplayEntity  (line 1811, @0x0000000002179e90, libserver.so)
CEntityIndex __fastcall CBasePlayer::GetReplayEntity(CBasePlayer *const this)
{
  return this->m_iReplayEntity.m_Data;
}


// CBasePlayer::GetObserverTarget  (line 1818, @0x000000000217c9d0, libserver.so)  // inlines: CEntityHandle, Get, GetEntryIndex, GetHandleEntity, GetInstance, GetSerialNumber, IndexToIdentity, Init, LookupEntity
CBaseEntity *__fastcall CBasePlayer::GetObserverTarget(CBasePlayer *const this)
{
  unsigned __int16 v1; // dx
  int v2; // esi
  uint32 v3; // edx
  CBaseEntity *result; // rax
  CEntityIdentity *v5; // rcx
  CEntityIdentity *v6; // rcx

  if ( this->m_hObserverTarget.m_Value.m_Index == -1 )
  {
    v1 = 0x7FFF;
    v2 = 0x7FFF;
  }
  else
  {
    v1 = this->m_hObserverTarget.m_Value.m_Index & 0x7FFF;
    v2 = v1;
  }
  v3 = (this->m_hObserverTarget.m_Value.m_Index >> 15 << 15) | v1 & 0x7FFF;
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


// CBasePlayer::ObserverUse  (line 1825, @0x0000000002179ea0, libserver.so)
void __fastcall CBasePlayer::ObserverUse(CBasePlayer *const this, bool bIsPressed)
{
  ;
}


// CBasePlayer::Classify  (line 1831, @0x0000000002179eb0, libserver.so)
Class_T __fastcall CBasePlayer::Classify(CBasePlayer *const this)
{
  return Class_T::CLASS_PLAYER;
}


// CBasePlayer::PhysicsSolidMaskForEntity  (line 1870, @0x0000000002179ec0, libserver.so)
uint64 __fastcall CBasePlayer::PhysicsSolidMaskForEntity(const CBasePlayer *const this)
{
  return (*(this->_vptr_IHandleEntity + 540))(this, 0);
}


// CBasePlayer::ForceSimulation  (line 1877, @0x0000000002179ee0, libserver.so)
void __fastcall CBasePlayer::ForceSimulation(CBasePlayer *const this)
{
  this->m_nSimulationTick = -1;
}


// CBasePlayer::UpdatePhysicsShadowToCurrentPosition  (line 1899, @0x000000000217b420, libserver.so)
// calls: CBaseEntity::GetAbsOrigin, CBasePlayer::UpdateVPhysicsPosition
void __fastcall CBasePlayer::UpdatePhysicsShadowToCurrentPosition(CBasePlayer *const this)
{
  const Vector *AbsOrigin; // rax
  float secondsToArrival; // [rsp+Ch] [rbp-14h]

  secondsToArrival = gpGlobals->frametime;
  AbsOrigin = CBaseEntity::GetAbsOrigin(this);
  CBasePlayer::UpdateVPhysicsPosition(this, AbsOrigin, &vec3_origin, secondsToArrival);
}


// CBasePlayer::BodyAngles  (line 1927, @0x0000000002179ef0, libserver.so)
QAngle __fastcall CBasePlayer::BodyAngles(CBasePlayer *const this)
{
  __int64 v1; // rax
  QAngle result; // 0:xmm0_8.8,8:xmm1_4.4

  v1 = (*(this->_vptr_IHandleEntity + 165))(this);
  *&result.x = *v1;
  result.z = *(v1 + 8);
  return result;
}


// CBasePlayer::ScriptIsPlayerNoclipping  (line 1934, @0x0000000002002500, libserver.so)
bool __fastcall CBasePlayer::ScriptIsPlayerNoclipping(CBasePlayer *const this)
{
  return this->m_MoveType.m_Value == MoveType_t::MOVETYPE_NOCLIP;
}


// CBasePlayer::GetPotentialUseEntity  (line 1941, @0x0000000002179f20, libserver.so)
CBaseEntity *__fastcall CBasePlayer::GetPotentialUseEntity(CBasePlayer *const this)
{
  return (*(this->_vptr_IHandleEntity + 514))(this);
}


// CBasePlayer::VPhysicsCollision  (line 1948, @0x0000000002179f40, libserver.so)
void __fastcall CBasePlayer::VPhysicsCollision(CBasePlayer *const this, int index, gamevcollisionevent_t *pEvent)
{
  ;
}


// CBasePlayer::IsBot  (line 1962, @0x0000000002179f50, libserver.so)
bool __fastcall CBasePlayer::IsBot(const CBasePlayer *const this)
{
  return (this->m_fFlags.m_Value & 0x100) != 0;
}


// CBasePlayer::IsFakeClient  (line 1969, @0x0000000002179f70, libserver.so)
bool __fastcall CBasePlayer::IsFakeClient(const CBasePlayer *const this)
{
  return (this->m_fFlags.m_Value & 0x100) != 0;
}


// CBasePlayer::EquipSuit  (line 1976, @0x000000000217c3b0, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<bool>
void __fastcall CBasePlayer::EquipSuit(CBasePlayer *const this, bool bPlayEffects)
{
  if ( !this->m_Local.m_bWearingSuit.m_Value )
  {
    (*(this->m_Local._vptr_CPlayerLocalData + 2))(&this->m_Local, 137, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_Local.m_bWearingSuit.m_Value = 1;
  }
}


// CBasePlayer::RemoveSuit  (line 1983, @0x000000000217bd10, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<bool>
void __fastcall CBasePlayer::RemoveSuit(CBasePlayer *const this)
{
  if ( this->m_Local.m_bWearingSuit.m_Value )
  {
    (*(this->m_Local._vptr_CPlayerLocalData + 2))(&this->m_Local, 137, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_Local.m_bWearingSuit.m_Value = 0;
  }
}


// CBasePlayer::GetUserID  (line 2011, @0x00000000021b4d30, libserver.so)  // inlines: entindex
// calls: CEntityInstance::GetEntityIndex
// callers: Host_Say, CVisibilityMonitor::FrameUpdatePostEntityThink
int __fastcall CBasePlayer::GetUserID(const CBasePlayer *const this)
{
  CEntityIndex v1; // eax

  v1.m_Data = CEntityInstance::GetEntityIndex(this).m_Data;
  return (*(*engine + 224LL))(engine, (v1.m_Data - 1));
}


// ToBasePlayer  (line 2066, @0x000000000224ae40, libserver.so)
// callers: CBreakable::Die, CBaseCombatCharacter::PlayFootstepSound, CPhysExplosion::Explode, CalculateObjectStress
CBasePlayer *__fastcall ToBasePlayer(CEntityInstance *pEntity)
{
  char v2; // al
  CBasePlayer *v3; // rdx

  if ( pEntity == 0 )
    return 0;
  v2 = (*(pEntity->_vptr_IHandleEntity + 140))(pEntity);
  v3 = 0;
  if ( v2 != 0 )
    return pEntity;
  return v3;
}


// ForEachPlayer<ValidObserverTargetCounter>  (line 2097, @0x0000000002310500, libserver.so)  // inlines: operator()
// calls: UTIL_PlayerByIndex
// callers: CBasePlayer::SetObserverMode
bool __fastcall ForEachPlayer<ValidObserverTargetCounter>(ValidObserverTargetCounter *const func)
{
  int v2; // r12d
  CBasePlayer *v3; // rax
  CBasePlayer *v4; // rbx

  v2 = 1;
  if ( gpGlobals->maxClients > 0 )
  {
    do
    {
      while ( 1 )
      {
        v3 = UTIL_PlayerByIndex(v2);
        v4 = v3;
        if ( v3 != 0
          && (*(v3->_vptr_IHandleEntity + 140))(v3) != 0
          && v4->m_iConnected != PlayerConnectedState::PlayerDisconnected
          && (*(v4->_vptr_IHandleEntity + 139))(v4) != 0
          && (*(func->m_observer->_vptr_IHandleEntity + 443))(func->m_observer, v4) != 0 )
        {
          break;
        }
        if ( gpGlobals->maxClients < ++v2 )
          return 1;
      }
      ++func->m_count;
      ++v2;
    }
    while ( gpGlobals->maxClients >= v2 );
  }
  return 1;
}


// ForEachPlayer<DisableAutokick>  (line 2097, @0x0000000002310600, libserver.so)  // inlines: DisableAutoKick, GetUserID, entindex, operator()
// calls: UTIL_PlayerByIndex, CEntityInstance::GetEntityIndex, Msg
// callers: mp_disable_autokick
// strings: "autokick is disabled for %s\n"
bool __fastcall ForEachPlayer<DisableAutokick>(DisableAutokick *const func)
{
  CEntityIndex v2; // r12d
  CBasePlayer *v3; // rax
  CBasePlayer *v4; // rbx
  CEntityIndex v5; // eax
  const char *v7; // rax

  v2.m_Data = 1;
  if ( gpGlobals->maxClients <= 0 )
    return 1;
  while ( 1 )
  {
    v3 = UTIL_PlayerByIndex(v2);
    v4 = v3;
    if ( v3 != 0
      && (*(v3->_vptr_IHandleEntity + 140))(v3) != 0
      && v4->m_iConnected != PlayerConnectedState::PlayerDisconnected )
    {
      v5.m_Data = CEntityInstance::GetEntityIndex(v4).m_Data;
      if ( func->m_userID == (*(*engine + 224LL))(engine, (v5.m_Data - 1)) )
        break;
    }
    if ( gpGlobals->maxClients < ++v2.m_Data )
      return 1;
  }
  v7 = (*(v4->_vptr_IHandleEntity + 106))(v4);
  Msg("autokick is disabled for %s\n", v7);
  v4->m_autoKickDisabled = 1;
  return 0;
}


// ForEachPlayer<IsLadderFreeFunctor>  (line 2097, @0x0000000002f08c70, libserver.so)  // inlines: IsLengthGreaterThan, LengthSqr, VectorSubtract, operator(), operator-
// calls: UTIL_PlayerByIndex, CBaseEntity::GetAbsOrigin
// callers: IsLadderInUse
bool __fastcall ForEachPlayer<IsLadderFreeFunctor>(IsLadderFreeFunctor *const func)
{
  CEntityIndex v2; // r12d
  CBasePlayer *v3; // rax
  CBasePlayer *v4; // rbx
  const Vector *AbsOrigin; // rax
  const CNavLadder *m_rLadder; // rdx
  float z; // xmm1_4

  v2.m_Data = 1;
  if ( gpGlobals->maxClients <= 0 )
    return 1;
  while ( 1 )
  {
    v3 = UTIL_PlayerByIndex(v2);
    v4 = v3;
    if ( v3 != 0
      && (*(v3->_vptr_IHandleEntity + 140))(v3) != 0
      && v4->m_iConnected != PlayerConnectedState::PlayerDisconnected
      && v4 != func->m_pIgnore
      && v4->m_MoveType.m_Value == MoveType_t::MOVETYPE_LADDER )
    {
      AbsOrigin = CBaseEntity::GetAbsOrigin(v4);
      m_rLadder = func->m_rLadder;
      z = AbsOrigin->z;
      if ( z <= func->m_rLadder->m_vTop.z + 35.5
        && m_rLadder->m_vBottom.z - 35.5 <= (z + 71.0)
        && (((m_rLadder->m_vBottom.x - AbsOrigin->x) * (m_rLadder->m_vBottom.x - AbsOrigin->x))
          + ((m_rLadder->m_vBottom.y - AbsOrigin->y) * (m_rLadder->m_vBottom.y - AbsOrigin->y))) <= 2500.0 )
      {
        break;
      }
    }
    if ( gpGlobals->maxClients < ++v2.m_Data )
      return 1;
  }
  return 0;
}


// CTraceFilterSkipTwoEntitiesAndTeammates::~CTraceFilterSkipTwoEntitiesAndTeammates  (line 2182, @0x0000000002304840, libserver.so)  // inlines: ~CTraceFilter, ~CTraceFilterSimple, ~CTraceFilterSkipTwoEntities
void __fastcall CTraceFilterSkipTwoEntitiesAndTeammates::~CTraceFilterSkipTwoEntitiesAndTeammates(
        CTraceFilterSkipTwoEntitiesAndTeammates *const this)
{
  this->_vptr_CTraceFilter = off_3FE6970;
}


// CTraceFilterSkipTwoEntitiesAndTeammates::~CTraceFilterSkipTwoEntitiesAndTeammates  (line 2182, @0x0000000002305720, libserver.so)  // inlines: ~CTraceFilter, ~CTraceFilterSimple, ~CTraceFilterSkipTwoEntities, ~CTraceFilterSkipTwoEntitiesAndTeammates
// calls: operator delete
void __fastcall CTraceFilterSkipTwoEntitiesAndTeammates::~CTraceFilterSkipTwoEntitiesAndTeammates(
        CTraceFilterSkipTwoEntitiesAndTeammates *const this)
{
  this->_vptr_CTraceFilter = off_3FE6970;
  operator delete(this);
}


// CTraceFilterSkipTwoEntitiesAndTeammates::ShouldHitEntity  (line 2190, @0x0000000002306620, libserver.so)
// calls: CTraceFilterSkipTwoEntities::ShouldHitEntity
bool __fastcall CTraceFilterSkipTwoEntitiesAndTeammates::ShouldHitEntity(
        CTraceFilterSkipTwoEntitiesAndTeammates *const this,
        CBaseEntity *pEntity)
{
  const CBaseEntity *m_pPassEnt; // rax

  m_pPassEnt = this->m_pPassEnt;
  return m_pPassEnt != 0
      && m_pPassEnt->m_iTeamNum.m_Value != pEntity->m_iTeamNum.m_Value
      && CTraceFilterSkipTwoEntities::ShouldHitEntity(this, pEntity);
}


