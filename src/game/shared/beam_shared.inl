
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CBeam::~CBeam  (line 76, @0x00000000021b6350, libserver.so)  // inlines: ~CNetworkVarBase, ~CStrongHandle
// calls: CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown, CBaseModelEntity::~CBaseModelEntity
void __fastcall CBeam::~CBeam(CBeam *const this)
{
  CNetworkVarBase<CStrongHandle<InfoForResourceTypeIMaterial2>,CBeam::NetworkVar_m_nHaloIndex> *p_m_nHaloIndex; // rdi

  p_m_nHaloIndex = &this->m_nHaloIndex;
  p_m_nHaloIndex[-148].m_Value.m_pBinding = &off_4009D10;
  CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown(&p_m_nHaloIndex->m_Value);
  CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown(&this->m_hBaseMaterial.m_Value);
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CBeam::~CBeam  (line 76, @0x00000000021b6410, libserver.so)  // inlines: ~CBeam, ~CNetworkVarBase, ~CStrongHandle
// calls: CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown, CBaseModelEntity::~CBaseModelEntity, CBaseEntity::operator delete
void __fastcall CBeam::~CBeam(CBeam *const this)
{
  CNetworkVarBase<CStrongHandle<InfoForResourceTypeIMaterial2>,CBeam::NetworkVar_m_nHaloIndex> *p_m_nHaloIndex; // rdi

  p_m_nHaloIndex = &this->m_nHaloIndex;
  p_m_nHaloIndex[-148].m_Value.m_pBinding = &off_4009D10;
  CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown(&p_m_nHaloIndex->m_Value);
  CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown(&this->m_hBaseMaterial.m_Value);
  CBaseModelEntity::~CBaseModelEntity(this);
  CBaseEntity::operator delete(this);
}


// CBeam::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 78, @0x0000000001f0f1d0, libserver.so)
// globals: CBeam::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CBeam::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CBeam::CEntityInstanceEntityClass *const this)
{
  return CBeam::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CBeam::CEntityInstanceEntityClass::DestructInstance  (line 78, @0x0000000001f0f1e0, libserver.so)  // inlines: Destruct<CBeam>
void __fastcall CBeam::CEntityInstanceEntityClass::DestructInstance(
        CBeam::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CBeam::CEntityInstanceEntityClass::FreeInstance  (line 78, @0x0000000001f0f200, libserver.so)
void __fastcall CBeam::CEntityInstanceEntityClass::FreeInstance(CBeam::CEntityInstanceEntityClass *const this, void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CBeam::CEntityInstanceEntityClass::CanAllocate  (line 78, @0x0000000001f0f220, libserver.so)
bool __fastcall CBeam::CEntityInstanceEntityClass::CanAllocate(const CBeam::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CBeam::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 78, @0x0000000001f0f230, libserver.so)
// globals: CBeam::s_pSchemaBinding
const ISchemaBinding *__fastcall CBeam::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CBeam::CEntityInstanceEntityClass *const this)
{
  return CBeam::s_pSchemaBinding;
}


// CBeam::CEntityInstanceEntityClass::AllocateInstance  (line 78, @0x0000000001f10dd0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CBeam::CEntityInstanceEntityClass::AllocateInstance(CBeam::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1312);
  memset(v1, 0, 0x520u);
  return v1;
}


// CBeam::CEntityInstanceEntityClass::ConstructInstance  (line 78, @0x0000000001f11120, libserver.so)  // inlines: Construct<CBeam>
// calls: CBeam::CBeam
CEntityInstance *__fastcall CBeam::CEntityInstanceEntityClass::ConstructInstance(
        CBeam::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
    CBeam::CBeam(p);
  return p;
}


// CBeam::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 78, @0x0000000001f12ae0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CBeam::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CBeam::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CBeam::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 78, @0x0000000001f12b00, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CBeam::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CBeam::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CBeam::GetEntityClassInternal  (line 78, @0x0000000001f181a0, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseModelEntity::InitScriptDesc, CBaseModelEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_game_shared_header_files_01.cpp
// strings: "CBeam"
// globals: `guard variable for'CBeam::GetEntityClassInternal(void)::g_EntityCBeamClass, CBeam::GetEntityClassInternal(void)::g_EntityCBeamClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CBeam::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CBeam::GetEntityClassInfo(void)::g_EntityCBeamClassInfo, CBeam::GetEntityClassInfo(void)::g_EntityCBeamClassInfo
CEntityClass *__cdecl CBeam::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CBeam::GetEntityClassInternal(void)::g_EntityCBeamClass == 0
    && __cxa_guard_acquire(&`guard variable for'CBeam::GetEntityClassInternal(void)::g_EntityCBeamClass) != 0 )
  {
    CBeam::GetEntityClassInternal(void)::g_EntityCBeamClass.m_designerName.u.m_Id = 0;
    CBeam::GetEntityClassInternal(void)::g_EntityCBeamClass._vptr_CEntityClass = off_3F79390;
    CBeam::GetEntityClassInternal(void)::g_EntityCBeamClass.m_ComponentOffsets.m_Size = 0;
    CBeam::GetEntityClassInternal(void)::g_EntityCBeamClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CBeam::GetEntityClassInternal(void)::g_EntityCBeamClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CBeam::GetEntityClassInternal(void)::g_EntityCBeamClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CBeam::GetEntityClassInternal(void)::g_EntityCBeamClass.m_AllHelpers.m_Size = 0;
    CBeam::GetEntityClassInternal(void)::g_EntityCBeamClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CBeam::GetEntityClassInternal(void)::g_EntityCBeamClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CBeam::GetEntityClassInternal(void)::g_EntityCBeamClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CBeam::GetEntityClassInternal(void)::g_EntityCBeamClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CBeam::GetEntityClassInternal(void)::g_EntityCBeamClass.m_instanceUnserializer.m_atomicFields,
      4);
    CBeam::GetEntityClassInternal(void)::g_EntityCBeamClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CBeam::GetEntityClassInternal(void)::g_EntityCBeamClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CBeam::GetEntityClassInternal(void)::g_EntityCBeamClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CBeam::GetEntityClassInternal(void)::g_EntityCBeamClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CBeam::GetEntityClassInternal(void)::g_EntityCBeamClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CBeam::GetEntityClassInternal(void)::g_EntityCBeamClass;
    CBeam::GetEntityClassInternal(void)::g_EntityCBeamClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CBeam::GetEntityClassInternal(void)::g_EntityCBeamClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CBeam::GetEntityClassInternal(void)::g_EntityCBeamClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CBeam::GetEntityClassInternal(void)::g_EntityCBeamClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CBeam::GetEntityClassInternal(void)::g_EntityCBeamClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CBeam::GetEntityClassInternal(void)::g_EntityCBeamClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CBeam::GetEntityClassInternal(void)::g_EntityCBeamClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CBeam::GetEntityClassInternal(void)::g_EntityCBeamClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CBeam::GetEntityClassInternal(void)::g_EntityCBeamClass.m_classInputs.m_Size = 0;
    CBeam::GetEntityClassInternal(void)::g_EntityCBeamClass.m_classInputs.m_Memory.m_pMemory = 0;
    CBeam::GetEntityClassInternal(void)::g_EntityCBeamClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CBeam::GetEntityClassInternal(void)::g_EntityCBeamClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CBeam::GetEntityClassInternal(void)::g_EntityCBeamClass.m_classOutputs.m_Size = 0;
    CBeam::GetEntityClassInternal(void)::g_EntityCBeamClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CBeam::GetEntityClassInternal(void)::g_EntityCBeamClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CBeam::GetEntityClassInternal(void)::g_EntityCBeamClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CBeam::GetEntityClassInternal(void)::g_EntityCBeamClass.m_requiredEHandle.m_Index = -1;
    CBeam::GetEntityClassInternal(void)::g_EntityCBeamClass.m_hNetworkSerializer = 0;
    CBeam::GetEntityClassInternal(void)::g_EntityCBeamClass.m_pBaseClassInfo = 0;
    CBeam::GetEntityClassInternal(void)::g_EntityCBeamClass.m_pClassInfo = 0;
    CBeam::GetEntityClassInternal(void)::g_EntityCBeamClass.m_flags = 0;
    CBeam::GetEntityClassInternal(void)::g_EntityCBeamClass.m_nAllHelpersFlags = 0;
    CBeam::GetEntityClassInternal(void)::g_EntityCBeamClass.m_pScriptClassDesc = 0;
    CBeam::GetEntityClassInternal(void)::g_EntityCBeamClass.m_pInputs = 0;
    CBeam::GetEntityClassInternal(void)::g_EntityCBeamClass.m_nInputCount = 0;
    CBeam::GetEntityClassInternal(void)::g_EntityCBeamClass.m_pOutputs = 0;
    CBeam::GetEntityClassInternal(void)::g_EntityCBeamClass.m_nOutputCount = 0;
    CBeam::GetEntityClassInternal(void)::g_EntityCBeamClass.m_pGameClass = 0;
    CBeam::GetEntityClassInternal(void)::g_EntityCBeamClass._vptr_CEntityClass = off_3FC5590;
    __cxa_guard_release(&`guard variable for'CBeam::GetEntityClassInternal(void)::g_EntityCBeamClass);
    __cxa_atexit(
      CBeam::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CBeam::GetEntityClassInternal(void)::g_EntityCBeamClass,
      &_dso_handle);
  }
  if ( g_pEntityCBeamClass != 0 )
    return &CBeam::GetEntityClassInternal(void)::g_EntityCBeamClass;
  if ( `guard variable for'CBeam::GetEntityClassInfo(void)::g_EntityCBeamClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CBeam::GetEntityClassInfo(void)::g_EntityCBeamClassInfo) != 0 )
  {
    EntityClassInfo = CBaseModelEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CBeam::GetEntityClassInfo(void)::g_EntityCBeamClassInfo,
      "CBeam",
      "beam",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CBeam::GetEntityClassInfo(void)::g_EntityCBeamClassInfo);
  }
  CBeam::GetEntityClassInternal(void)::g_EntityCBeamClass.m_pClassInfo = &CBeam::GetEntityClassInfo(void)::g_EntityCBeamClassInfo;
  CBeam::GetEntityClassInternal(void)::g_EntityCBeamClass.m_pBaseClassInfo = CBeam::GetEntityClassInfo(void)::g_EntityCBeamClassInfo.m_pBaseClassInfo;
  g_pEntityCBeamClass = &CBeam::GetEntityClassInternal(void)::g_EntityCBeamClass;
  CBeam::GetEntityClassInfo(void)::g_EntityCBeamClassInfo.m_pClass = &CBeam::GetEntityClassInternal(void)::g_EntityCBeamClass;
  CBeam::GetEntityClassInternal(void)::g_EntityCBeamClass.m_pScriptClassDesc = CBaseModelEntity::InitScriptDesc();
  g_pEntityCBeamClass->m_pComponentOverrides = 0;
  return &CBeam::GetEntityClassInternal(void)::g_EntityCBeamClass;
}


// CBeam::GetEntityClass  (line 78, @0x00000000021b0c80, libserver.so)
CEntityClass *__cdecl CBeam::GetEntityClass()
{
  return g_pEntityCBeamClass;
}


// CBeam::Schema_DynamicBinding  (line 78, @0x00000000021b2b30, libserver.so)
// calls: CBeam::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CBeam::Schema_DynamicBinding(const CBeam *const this)
{
  CBeam::Schema_VerifyBindingIsRegistered();
  return CBeam::s_pSchemaBinding;
}


// CBeam::HackToMakeAVTable  (line 82, @0x00000000021b0c90, libserver.so)
void __fastcall CBeam::HackToMakeAVTable(const CBeam *const this)
{
  ;
}


// CBeam::GetDecalName  (line 203, @0x00000000021b0ca0, libserver.so)
// strings: "BigShot"
const char *__fastcall CBeam::GetDecalName(CBeam *const this)
{
  return "BigShot";
}


// CBeam::ObjectCaps  (line 301, @0x00000000021b2310, libserver.so)  // inlines: HasSpawnFlags
// calls: CBaseEntity::ObjectCaps
int __fastcall CBeam::ObjectCaps(CBeam *const this)
{
  unsigned int m_Value; // ebx
  int v2; // eax

  m_Value = this->m_spawnflags.m_Value;
  v2 = CBaseEntity::ObjectCaps(this);
  LOBYTE(v2) = v2 & 0x7F;
  return (m_Value << 16) & 0x80000000 | v2;
}


// CBeam::WorldSpaceCenter  (line 332, @0x00000000021b4e60, libserver.so)  // inlines: VectorAdd, VectorMultiply, operator*, operator+
// calls: CBeam::GetAbsEndPos, CBeam::GetAbsStartPos
Vector __fastcall CBeam::WorldSpaceCenter(const CBeam *const this)
{
  const Vector *AbsEndPos; // rbx
  const Vector *AbsStartPos; // rax
  float v4; // xmm2_4
  float v5; // xmm3_4
  float v8[8]; // [rsp+10h] [rbp-20h]
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  AbsEndPos = CBeam::GetAbsEndPos(this);
  AbsStartPos = CBeam::GetAbsStartPos(this);
  v4 = (AbsStartPos->x + AbsEndPos->x) * 0.5;
  v5 = AbsStartPos->z + AbsEndPos->z;
  v8[1] = (AbsStartPos->y + AbsEndPos->y) * 0.5;
  result.z = 0.5 * v5;
  v8[0] = v4;
  *&result.x = *v8;
  return result;
}


