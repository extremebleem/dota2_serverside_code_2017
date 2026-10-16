
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CBaseCombatWeapon::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 142, @0x0000000001f0f0f0, libserver.so)
// globals: CBaseCombatWeapon::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CBaseCombatWeapon::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CBaseCombatWeapon::CEntityInstanceEntityClass *const this)
{
  return CBaseCombatWeapon::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CBaseCombatWeapon::CEntityInstanceEntityClass::DestructInstance  (line 142, @0x0000000001f0f100, libserver.so)  // inlines: Destruct<CBaseCombatWeapon>
void __fastcall CBaseCombatWeapon::CEntityInstanceEntityClass::DestructInstance(
        CBaseCombatWeapon::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CBaseCombatWeapon::CEntityInstanceEntityClass::FreeInstance  (line 142, @0x0000000001f0f120, libserver.so)
void __fastcall CBaseCombatWeapon::CEntityInstanceEntityClass::FreeInstance(
        CBaseCombatWeapon::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CBaseCombatWeapon::CEntityInstanceEntityClass::CanAllocate  (line 142, @0x0000000001f0f140, libserver.so)
bool __fastcall CBaseCombatWeapon::CEntityInstanceEntityClass::CanAllocate(
        const CBaseCombatWeapon::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CBaseCombatWeapon::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 142, @0x0000000001f0f150, libserver.so)
// globals: CBaseCombatWeapon::s_pSchemaBinding
const ISchemaBinding *__fastcall CBaseCombatWeapon::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CBaseCombatWeapon::CEntityInstanceEntityClass *const this)
{
  return CBaseCombatWeapon::s_pSchemaBinding;
}


// CBaseCombatWeapon::CEntityInstanceEntityClass::AllocateInstance  (line 142, @0x0000000001f10d50, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CBaseCombatWeapon::CEntityInstanceEntityClass::AllocateInstance(
        CBaseCombatWeapon::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1504);
  memset(v1, 0, 0x5E0u);
  return v1;
}


// CBaseCombatWeapon::CEntityInstanceEntityClass::ConstructInstance  (line 142, @0x0000000001f110f0, libserver.so)  // inlines: Construct<CBaseCombatWeapon>
// calls: CBaseCombatWeapon::CBaseCombatWeapon
CEntityInstance *__fastcall CBaseCombatWeapon::CEntityInstanceEntityClass::ConstructInstance(
        CBaseCombatWeapon::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
    CBaseCombatWeapon::CBaseCombatWeapon(p);
  return p;
}


// CBaseCombatWeapon::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 142, @0x0000000001f129f0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CBaseCombatWeapon::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CBaseCombatWeapon::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CBaseCombatWeapon::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 142, @0x0000000001f12a10, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CBaseCombatWeapon::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CBaseCombatWeapon::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CBaseCombatWeapon::GetEntityClassInternal  (line 142, @0x0000000001f19380, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseAnimating::InitScriptDesc, CBaseAnimating::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_game_shared_header_files_01.cpp
// strings: "CBaseCombatWeapon"
// globals: `guard variable for'CBaseCombatWeapon::GetEntityClassInternal(void)::g_EntityCBaseCombatWeaponClass, CBaseCombatWeapon::GetEntityClassInternal(void)::g_EntityCBaseCombatWeaponClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CBaseCombatWeapon::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CBaseCombatWeapon::GetEntityClassInfo(void)::g_EntityCBaseCombatWeaponClassInfo, CBaseCombatWeapon::GetEntityClassInfo(void)::g_EntityCBaseCombatWeaponClassInfo
CEntityClass *__cdecl CBaseCombatWeapon::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CBaseCombatWeapon::GetEntityClassInternal(void)::g_EntityCBaseCombatWeaponClass == 0
    && __cxa_guard_acquire(&`guard variable for'CBaseCombatWeapon::GetEntityClassInternal(void)::g_EntityCBaseCombatWeaponClass) != 0 )
  {
    CBaseCombatWeapon::GetEntityClassInternal(void)::g_EntityCBaseCombatWeaponClass.m_designerName.u.m_Id = 0;
    CBaseCombatWeapon::GetEntityClassInternal(void)::g_EntityCBaseCombatWeaponClass._vptr_CEntityClass = off_3F79390;
    CBaseCombatWeapon::GetEntityClassInternal(void)::g_EntityCBaseCombatWeaponClass.m_ComponentOffsets.m_Size = 0;
    CBaseCombatWeapon::GetEntityClassInternal(void)::g_EntityCBaseCombatWeaponClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CBaseCombatWeapon::GetEntityClassInternal(void)::g_EntityCBaseCombatWeaponClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CBaseCombatWeapon::GetEntityClassInternal(void)::g_EntityCBaseCombatWeaponClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CBaseCombatWeapon::GetEntityClassInternal(void)::g_EntityCBaseCombatWeaponClass.m_AllHelpers.m_Size = 0;
    CBaseCombatWeapon::GetEntityClassInternal(void)::g_EntityCBaseCombatWeaponClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CBaseCombatWeapon::GetEntityClassInternal(void)::g_EntityCBaseCombatWeaponClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CBaseCombatWeapon::GetEntityClassInternal(void)::g_EntityCBaseCombatWeaponClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CBaseCombatWeapon::GetEntityClassInternal(void)::g_EntityCBaseCombatWeaponClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CBaseCombatWeapon::GetEntityClassInternal(void)::g_EntityCBaseCombatWeaponClass.m_instanceUnserializer.m_atomicFields,
      4);
    CBaseCombatWeapon::GetEntityClassInternal(void)::g_EntityCBaseCombatWeaponClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CBaseCombatWeapon::GetEntityClassInternal(void)::g_EntityCBaseCombatWeaponClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CBaseCombatWeapon::GetEntityClassInternal(void)::g_EntityCBaseCombatWeaponClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CBaseCombatWeapon::GetEntityClassInternal(void)::g_EntityCBaseCombatWeaponClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CBaseCombatWeapon::GetEntityClassInternal(void)::g_EntityCBaseCombatWeaponClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CBaseCombatWeapon::GetEntityClassInternal(void)::g_EntityCBaseCombatWeaponClass;
    CBaseCombatWeapon::GetEntityClassInternal(void)::g_EntityCBaseCombatWeaponClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CBaseCombatWeapon::GetEntityClassInternal(void)::g_EntityCBaseCombatWeaponClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CBaseCombatWeapon::GetEntityClassInternal(void)::g_EntityCBaseCombatWeaponClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CBaseCombatWeapon::GetEntityClassInternal(void)::g_EntityCBaseCombatWeaponClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CBaseCombatWeapon::GetEntityClassInternal(void)::g_EntityCBaseCombatWeaponClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CBaseCombatWeapon::GetEntityClassInternal(void)::g_EntityCBaseCombatWeaponClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CBaseCombatWeapon::GetEntityClassInternal(void)::g_EntityCBaseCombatWeaponClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CBaseCombatWeapon::GetEntityClassInternal(void)::g_EntityCBaseCombatWeaponClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CBaseCombatWeapon::GetEntityClassInternal(void)::g_EntityCBaseCombatWeaponClass.m_classInputs.m_Size = 0;
    CBaseCombatWeapon::GetEntityClassInternal(void)::g_EntityCBaseCombatWeaponClass.m_classInputs.m_Memory.m_pMemory = 0;
    CBaseCombatWeapon::GetEntityClassInternal(void)::g_EntityCBaseCombatWeaponClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CBaseCombatWeapon::GetEntityClassInternal(void)::g_EntityCBaseCombatWeaponClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CBaseCombatWeapon::GetEntityClassInternal(void)::g_EntityCBaseCombatWeaponClass.m_classOutputs.m_Size = 0;
    CBaseCombatWeapon::GetEntityClassInternal(void)::g_EntityCBaseCombatWeaponClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CBaseCombatWeapon::GetEntityClassInternal(void)::g_EntityCBaseCombatWeaponClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CBaseCombatWeapon::GetEntityClassInternal(void)::g_EntityCBaseCombatWeaponClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CBaseCombatWeapon::GetEntityClassInternal(void)::g_EntityCBaseCombatWeaponClass.m_requiredEHandle.m_Index = -1;
    CBaseCombatWeapon::GetEntityClassInternal(void)::g_EntityCBaseCombatWeaponClass.m_hNetworkSerializer = 0;
    CBaseCombatWeapon::GetEntityClassInternal(void)::g_EntityCBaseCombatWeaponClass.m_pBaseClassInfo = 0;
    CBaseCombatWeapon::GetEntityClassInternal(void)::g_EntityCBaseCombatWeaponClass.m_pClassInfo = 0;
    CBaseCombatWeapon::GetEntityClassInternal(void)::g_EntityCBaseCombatWeaponClass.m_flags = 0;
    CBaseCombatWeapon::GetEntityClassInternal(void)::g_EntityCBaseCombatWeaponClass.m_nAllHelpersFlags = 0;
    CBaseCombatWeapon::GetEntityClassInternal(void)::g_EntityCBaseCombatWeaponClass.m_pScriptClassDesc = 0;
    CBaseCombatWeapon::GetEntityClassInternal(void)::g_EntityCBaseCombatWeaponClass.m_pInputs = 0;
    CBaseCombatWeapon::GetEntityClassInternal(void)::g_EntityCBaseCombatWeaponClass.m_nInputCount = 0;
    CBaseCombatWeapon::GetEntityClassInternal(void)::g_EntityCBaseCombatWeaponClass.m_pOutputs = 0;
    CBaseCombatWeapon::GetEntityClassInternal(void)::g_EntityCBaseCombatWeaponClass.m_nOutputCount = 0;
    CBaseCombatWeapon::GetEntityClassInternal(void)::g_EntityCBaseCombatWeaponClass.m_pGameClass = 0;
    CBaseCombatWeapon::GetEntityClassInternal(void)::g_EntityCBaseCombatWeaponClass._vptr_CEntityClass = off_3FC5210;
    __cxa_guard_release(&`guard variable for'CBaseCombatWeapon::GetEntityClassInternal(void)::g_EntityCBaseCombatWeaponClass);
    __cxa_atexit(
      CBaseCombatWeapon::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CBaseCombatWeapon::GetEntityClassInternal(void)::g_EntityCBaseCombatWeaponClass,
      &_dso_handle);
  }
  if ( g_pEntityCBaseCombatWeaponClass != 0 )
    return &CBaseCombatWeapon::GetEntityClassInternal(void)::g_EntityCBaseCombatWeaponClass;
  if ( `guard variable for'CBaseCombatWeapon::GetEntityClassInfo(void)::g_EntityCBaseCombatWeaponClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CBaseCombatWeapon::GetEntityClassInfo(void)::g_EntityCBaseCombatWeaponClassInfo) != 0 )
  {
    EntityClassInfo = CBaseAnimating::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CBaseCombatWeapon::GetEntityClassInfo(void)::g_EntityCBaseCombatWeaponClassInfo,
      "CBaseCombatWeapon",
      0,
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CBaseCombatWeapon::GetEntityClassInfo(void)::g_EntityCBaseCombatWeaponClassInfo);
  }
  CBaseCombatWeapon::GetEntityClassInternal(void)::g_EntityCBaseCombatWeaponClass.m_pClassInfo = &CBaseCombatWeapon::GetEntityClassInfo(void)::g_EntityCBaseCombatWeaponClassInfo;
  CBaseCombatWeapon::GetEntityClassInternal(void)::g_EntityCBaseCombatWeaponClass.m_pBaseClassInfo = CBaseCombatWeapon::GetEntityClassInfo(void)::g_EntityCBaseCombatWeaponClassInfo.m_pBaseClassInfo;
  g_pEntityCBaseCombatWeaponClass = &CBaseCombatWeapon::GetEntityClassInternal(void)::g_EntityCBaseCombatWeaponClass;
  CBaseCombatWeapon::GetEntityClassInfo(void)::g_EntityCBaseCombatWeaponClassInfo.m_pClass = &CBaseCombatWeapon::GetEntityClassInternal(void)::g_EntityCBaseCombatWeaponClass;
  CBaseCombatWeapon::GetEntityClassInternal(void)::g_EntityCBaseCombatWeaponClass.m_pScriptClassDesc = CBaseAnimating::InitScriptDesc();
  g_pEntityCBaseCombatWeaponClass->m_pComponentOverrides = 0;
  return &CBaseCombatWeapon::GetEntityClassInternal(void)::g_EntityCBaseCombatWeaponClass;
}


// CBaseCombatWeapon::GetEntityClass  (line 142, @0x0000000002179f90, libserver.so)
CEntityClass *__cdecl CBaseCombatWeapon::GetEntityClass()
{
  return g_pEntityCBaseCombatWeaponClass;
}


// CBaseCombatWeapon::Schema_DynamicBinding  (line 142, @0x000000000217b470, libserver.so)
// calls: CBaseCombatWeapon::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CBaseCombatWeapon::Schema_DynamicBinding(const CBaseCombatWeapon *const this)
{
  CBaseCombatWeapon::Schema_VerifyBindingIsRegistered();
  return CBaseCombatWeapon::s_pSchemaBinding;
}


// CBaseCombatWeapon::HackToMakeAVTable  (line 144, @0x0000000002179fa0, libserver.so)
void __fastcall CBaseCombatWeapon::HackToMakeAVTable(const CBaseCombatWeapon *const this)
{
  ;
}


// CBaseCombatWeapon::IsBaseCombatWeapon  (line 165, @0x0000000002179fb0, libserver.so)
bool __fastcall CBaseCombatWeapon::IsBaseCombatWeapon(const CBaseCombatWeapon *const this)
{
  return 1;
}


// CBaseCombatWeapon::MyCombatWeaponPointer  (line 166, @0x0000000002179fc0, libserver.so)
CBaseCombatWeapon *__fastcall CBaseCombatWeapon::MyCombatWeaponPointer(CBaseCombatWeapon *const this)
{
  return this;
}


// CBaseCombatWeapon::IsPredicted  (line 170, @0x0000000002179fd0, libserver.so)
bool __fastcall CBaseCombatWeapon::IsPredicted(const CBaseCombatWeapon *const this)
{
  return 0;
}


// CBaseCombatWeapon::GetSubType  (line 190, @0x0000000002179fe0, libserver.so)
int __fastcall CBaseCombatWeapon::GetSubType(const CBaseCombatWeapon *const this)
{
  return this->m_iSubType;
}


// CBaseCombatWeapon::SetSubType  (line 191, @0x0000000002179ff0, libserver.so)
void __fastcall CBaseCombatWeapon::SetSubType(CBaseCombatWeapon *const this, int iType)
{
  this->m_iSubType = iType;
}


// CBaseCombatWeapon::CanHolster  (line 243, @0x000000000217a000, libserver.so)
bool __fastcall CBaseCombatWeapon::CanHolster(CBaseCombatWeapon *const this)
{
  return 1;
}


// CBaseCombatWeapon::CanDeploy  (line 245, @0x000000000217a010, libserver.so)
bool __fastcall CBaseCombatWeapon::CanDeploy(CBaseCombatWeapon *const this)
{
  return 1;
}


// CBaseCombatWeapon::GetLastWeapon  (line 248, @0x000000000217a020, libserver.so)
CBaseCombatWeapon *__fastcall CBaseCombatWeapon::GetLastWeapon(CBaseCombatWeapon *const this)
{
  return this;
}


// CBaseCombatWeapon::ItemHolsterFrame  (line 258, @0x000000000217a030, libserver.so)
void __fastcall CBaseCombatWeapon::ItemHolsterFrame(CBaseCombatWeapon *const this)
{
  ;
}


// CBaseCombatWeapon::IsWeaponZoomed  (line 267, @0x000000000217a040, libserver.so)
bool __fastcall CBaseCombatWeapon::IsWeaponZoomed(CBaseCombatWeapon *const this)
{
  return 0;
}


// CBaseCombatWeapon::SecondaryAttack  (line 279, @0x000000000217a050, libserver.so)
void __fastcall CBaseCombatWeapon::SecondaryAttack(CBaseCombatWeapon *const this)
{
  ;
}


// CBaseCombatWeapon::GetDefaultAnimSpeed  (line 288, @0x000000000217a060, libserver.so)
float __fastcall CBaseCombatWeapon::GetDefaultAnimSpeed(CBaseCombatWeapon *const this)
{
  return 1.0;
}


// CBaseCombatWeapon::GetBulletSpread  (line 293, @0x000000000217a070, libserver.so)
Vector __fastcall CBaseCombatWeapon::GetBulletSpread(CBaseCombatWeapon *const this, WeaponProficiency_t proficiency)
{
  __int64 v2; // rax
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  v2 = (*(this->_vptr_IHandleEntity + 310))(this, proficiency);
  *&result.x = *v2;
  result.z = *(v2 + 8);
  return result;
}


// CBaseCombatWeapon::GetSpreadBias  (line 294, @0x000000000217a0a0, libserver.so)
float __fastcall CBaseCombatWeapon::GetSpreadBias(CBaseCombatWeapon *const this, WeaponProficiency_t proficiency)
{
  return 1.0;
}


// CBaseCombatWeapon::GetMinBurst  (line 296, @0x000000000217a0b0, libserver.so)
int __fastcall CBaseCombatWeapon::GetMinBurst(CBaseCombatWeapon *const this)
{
  return 1;
}


// CBaseCombatWeapon::GetMaxBurst  (line 297, @0x000000000217a0c0, libserver.so)
int __fastcall CBaseCombatWeapon::GetMaxBurst(CBaseCombatWeapon *const this)
{
  return 1;
}


// CBaseCombatWeapon::GetMinRestTime  (line 298, @0x000000000217a0d0, libserver.so)
float __fastcall CBaseCombatWeapon::GetMinRestTime(CBaseCombatWeapon *const this)
{
  return 0.30000001;
}


// CBaseCombatWeapon::GetMaxRestTime  (line 299, @0x000000000217a0e0, libserver.so)
float __fastcall CBaseCombatWeapon::GetMaxRestTime(CBaseCombatWeapon *const this)
{
  return 0.60000002;
}


// CBaseCombatWeapon::GetRandomBurst  (line 300, @0x000000000217a0f0, libserver.so)
int __fastcall CBaseCombatWeapon::GetRandomBurst(CBaseCombatWeapon *const this)
{
  int (__fastcall *v2)(IUniformRandomStream *, _QWORD, _QWORD); // r14
  unsigned int v3; // r13d
  unsigned int v4; // eax

  v2 = *(*random_valve + 16LL);
  v3 = (*(this->_vptr_IHandleEntity + 315))(this);
  v4 = (*(this->_vptr_IHandleEntity + 314))(this);
  return v2(random_valve, v4, v3);
}


// CBaseCombatWeapon::GetMaxAutoAimDeflection  (line 308, @0x000000000217a140, libserver.so)
float __fastcall CBaseCombatWeapon::GetMaxAutoAimDeflection(CBaseCombatWeapon *const this)
{
  return 0.99000001;
}


// CBaseCombatWeapon::WeaponAutoAimScale  (line 309, @0x000000000217a150, libserver.so)
float __fastcall CBaseCombatWeapon::WeaponAutoAimScale(CBaseCombatWeapon *const this)
{
  return 1.0;
}


// CBaseCombatWeapon::StartSprinting  (line 312, @0x000000000217a160, libserver.so)
bool __fastcall CBaseCombatWeapon::StartSprinting(CBaseCombatWeapon *const this)
{
  return 0;
}


// CBaseCombatWeapon::StopSprinting  (line 313, @0x000000000217a170, libserver.so)
bool __fastcall CBaseCombatWeapon::StopSprinting(CBaseCombatWeapon *const this)
{
  return 0;
}


// CBaseCombatWeapon::GetDamage  (line 316, @0x000000000217a180, libserver.so)
float __fastcall CBaseCombatWeapon::GetDamage(
        CBaseCombatWeapon *const this,
        double a2,
        float flDistance,
        int iLocation)
{
  return 0.0;
}


// CBaseCombatWeapon::ShouldShowControlPanels  (line 334, @0x000000000217a190, libserver.so)
bool __fastcall CBaseCombatWeapon::ShouldShowControlPanels(CBaseCombatWeapon *const this)
{
  return 1;
}


// CBaseCombatWeapon::CanBePickedUpByNPCs  (line 340, @0x000000000217a1a0, libserver.so)
bool __fastcall CBaseCombatWeapon::CanBePickedUpByNPCs(CBaseCombatWeapon *const this)
{
  return 1;
}


// CBaseCombatWeapon::IsScriptWeapon  (line 371, @0x000000000217a1b0, libserver.so)
bool __fastcall CBaseCombatWeapon::IsScriptWeapon(const CBaseCombatWeapon *const this)
{
  return 0;
}


// CBaseCombatWeapon::GetWeaponClassname  (line 372, @0x000000000217a1c0, libserver.so)  // inlines: GetClassNameAsCStr, GetClassname, String
const char *__fastcall CBaseCombatWeapon::GetWeaponClassname(const CBaseCombatWeapon *const this)
{
  const char *result; // rax

  result = "";
  if ( this->m_pEntity->m_designerName.u.m_Id != 0 )
    return this->m_pEntity->m_designerName.u.m_pAsString;
  return result;
}


// CBaseCombatWeapon::OnMouseWheel  (line 374, @0x000000000217a1e0, libserver.so)
void __fastcall CBaseCombatWeapon::OnMouseWheel(CBaseCombatWeapon *const this, int nDirection)
{
  ;
}


// CBaseCombatWeapon::GetPrimaryAmmoType  (line 379, @0x000000000217a1f0, libserver.so)
int __fastcall CBaseCombatWeapon::GetPrimaryAmmoType(const CBaseCombatWeapon *const this)
{
  return this->m_iPrimaryAmmoType.m_Value;
}


// CBaseCombatWeapon::GetSecondaryAmmoType  (line 380, @0x000000000217a200, libserver.so)
int __fastcall CBaseCombatWeapon::GetSecondaryAmmoType(const CBaseCombatWeapon *const this)
{
  return this->m_iSecondaryAmmoType.m_Value;
}


// CBaseCombatWeapon::ActivityList  (line 406, @0x000000000217a210, libserver.so)
acttable_t *__fastcall CBaseCombatWeapon::ActivityList(CBaseCombatWeapon *const this)
{
  return 0;
}


// CBaseCombatWeapon::ActivityListCount  (line 407, @0x000000000217a220, libserver.so)
int __fastcall CBaseCombatWeapon::ActivityListCount(CBaseCombatWeapon *const this)
{
  return 0;
}


// CBaseCombatWeapon::CapabilitiesGet  (line 442, @0x000000000217a230, libserver.so)
int __fastcall CBaseCombatWeapon::CapabilitiesGet(CBaseCombatWeapon *const this)
{
  return 0;
}


// CBaseCombatWeapon::Operator_ForceNPCFire  (line 458, @0x000000000217a240, libserver.so)
void __fastcall CBaseCombatWeapon::Operator_ForceNPCFire(
        CBaseCombatWeapon *const this,
        CBaseCombatCharacter *pOperator,
        bool bSecondary,
        CBaseEntity *pTarget)
{
  ;
}


// CBaseCombatWeapon::GetDroppingPlayer  (line 469, @0x000000000217a250, libserver.so)
CBaseCombatCharacter *__fastcall CBaseCombatWeapon::GetDroppingPlayer(const CBaseCombatWeapon *const this)
{
  return 0;
}


// CBaseCombatWeapon::CanLower  (line 529, @0x000000000217a260, libserver.so)
bool __fastcall CBaseCombatWeapon::CanLower(CBaseCombatWeapon *const this)
{
  return 0;
}


// CBaseCombatWeapon::Ready  (line 530, @0x000000000217a270, libserver.so)
bool __fastcall CBaseCombatWeapon::Ready(CBaseCombatWeapon *const this)
{
  return 0;
}


// CBaseCombatWeapon::Lower  (line 531, @0x000000000217a280, libserver.so)
bool __fastcall CBaseCombatWeapon::Lower(CBaseCombatWeapon *const this)
{
  return 0;
}


// CBaseCombatWeapon::NetworkVar_m_flNextSecondaryAttack::NetworkStateChanged  (line 549, @0x000000000217d6d0, libserver.so)
// callers: CBaseCombatWeapon::CheckReload, CBaseCombatWeapon::ItemPostFrame
void __fastcall CBaseCombatWeapon::NetworkVar_m_flNextSecondaryAttack::NetworkStateChanged(
        void *ptr,
        int32 nArrayIndex,
        ChangeAccessorFieldPathIndex_t nPathIndex)
{
  (*(*(ptr - 1236) + 176LL))(ptr - 1236, 1236, nArrayIndex, nPathIndex.m_Value);
}


