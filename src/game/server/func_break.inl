
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CBreakable::~CBreakable  (line 69, @0x00000000022470c0, libserver.so)
// calls: CBaseModelEntity::~CBaseModelEntity
void __fastcall CBreakable::~CBreakable(CBreakable *const this)
{
  this->_vptr_IHandleEntity = &off_40417B0;
  this->_vptr_IBreakableWithPropData = off_4041F90;
  this->_vptr_IPlayerPickupVPhysics = &off_40420A8;
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CBreakable::~CBreakable  (line 69, @0x00000000022470f0, libserver.so)  // inlines: ~CBreakable
// calls: CBaseModelEntity::~CBaseModelEntity, CBaseEntity::operator delete
void __fastcall CBreakable::~CBreakable(CBreakable *const this)
{
  this->_vptr_IHandleEntity = &off_40417B0;
  this->_vptr_IBreakableWithPropData = off_4041F90;
  this->_vptr_IPlayerPickupVPhysics = &off_40420A8;
  CBaseModelEntity::~CBaseModelEntity(this);
  CBaseEntity::operator delete(this);
}


// CBreakable::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 71, @0x0000000001fea5b0, libserver.so)
// globals: CBreakable::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CBreakable::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CBreakable::CEntityInstanceEntityClass *const this)
{
  return CBreakable::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CBreakable::CEntityInstanceEntityClass::DestructInstance  (line 71, @0x0000000001fea5c0, libserver.so)  // inlines: Destruct<CBreakable>
void __fastcall CBreakable::CEntityInstanceEntityClass::DestructInstance(
        CBreakable::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CBreakable::CEntityInstanceEntityClass::FreeInstance  (line 71, @0x0000000001fea5e0, libserver.so)
void __fastcall CBreakable::CEntityInstanceEntityClass::FreeInstance(
        CBreakable::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CBreakable::CEntityInstanceEntityClass::CanAllocate  (line 71, @0x0000000001fea600, libserver.so)
bool __fastcall CBreakable::CEntityInstanceEntityClass::CanAllocate(
        const CBreakable::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CBreakable::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 71, @0x0000000001fea610, libserver.so)
// globals: CBreakable::s_pSchemaBinding
const ISchemaBinding *__fastcall CBreakable::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CBreakable::CEntityInstanceEntityClass *const this)
{
  return CBreakable::s_pSchemaBinding;
}


// CBreakable::CEntityInstanceEntityClass::AllocateInstance  (line 71, @0x0000000001febb60, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CBreakable::CEntityInstanceEntityClass::AllocateInstance(
        CBreakable::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1400);
  memset(v1, 0, 0x578u);
  return v1;
}


// CBreakable::CEntityInstanceEntityClass::ConstructInstance  (line 71, @0x0000000001fec530, libserver.so)  // inlines: CBreakable, CEntityHandle, CEntityIOOutput, CEntityOutputTemplate, CHandle, CUtlSymbolLarge, Construct<CBreakable>
// calls: CBaseModelEntity::CBaseModelEntity
CEntityInstance *__fastcall CBreakable::CEntityInstanceEntityClass::ConstructInstance(
        CBreakable::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseModelEntity::CBaseModelEntity(p);
    *(p + 293) = -1;
    *(p + 150) = 0;
    *(p + 151) = 0;
    *(p + 155) = 0;
    *(p + 156) = 0;
    *p = &off_40417B0;
    *(p + 145) = &off_40420A8;
    *(p + 158) = off_3F7C190;
    *(p + 144) = off_4041F90;
    *(p + 161) = off_3FD2290;
    *(p + 167) = 0;
    *(p + 168) = 0;
    *(p + 171) = 0;
    *(p + 347) = -1;
  }
  return p;
}


// CBreakable::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 71, @0x0000000001fecef0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CBreakable::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CBreakable::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CBreakable::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 71, @0x0000000001fecf10, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CBreakable::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CBreakable::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CBreakable::GetEntityClassInternal  (line 71, @0x0000000001ff5010, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseModelEntity::InitScriptDesc, CBaseModelEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_header_files_03.cpp
// strings: "func_breakable", "CBreakable"
// globals: `guard variable for'CBreakable::GetEntityClassInternal(void)::g_EntityCBreakableClass, CBreakable::GetEntityClassInternal(void)::g_EntityCBreakableClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CBreakable::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CBreakable::GetEntityClassInfo(void)::g_EntityCBreakableClassInfo, CBreakable::GetEntityClassInfo(void)::g_EntityCBreakableClassInfo
CEntityClass *__cdecl CBreakable::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CBreakable::GetEntityClassInternal(void)::g_EntityCBreakableClass == 0
    && __cxa_guard_acquire(&`guard variable for'CBreakable::GetEntityClassInternal(void)::g_EntityCBreakableClass) != 0 )
  {
    CBreakable::GetEntityClassInternal(void)::g_EntityCBreakableClass.m_designerName.u.m_Id = 0;
    CBreakable::GetEntityClassInternal(void)::g_EntityCBreakableClass._vptr_CEntityClass = off_3F79390;
    CBreakable::GetEntityClassInternal(void)::g_EntityCBreakableClass.m_ComponentOffsets.m_Size = 0;
    CBreakable::GetEntityClassInternal(void)::g_EntityCBreakableClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CBreakable::GetEntityClassInternal(void)::g_EntityCBreakableClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CBreakable::GetEntityClassInternal(void)::g_EntityCBreakableClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CBreakable::GetEntityClassInternal(void)::g_EntityCBreakableClass.m_AllHelpers.m_Size = 0;
    CBreakable::GetEntityClassInternal(void)::g_EntityCBreakableClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CBreakable::GetEntityClassInternal(void)::g_EntityCBreakableClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CBreakable::GetEntityClassInternal(void)::g_EntityCBreakableClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CBreakable::GetEntityClassInternal(void)::g_EntityCBreakableClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CBreakable::GetEntityClassInternal(void)::g_EntityCBreakableClass.m_instanceUnserializer.m_atomicFields,
      4);
    CBreakable::GetEntityClassInternal(void)::g_EntityCBreakableClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CBreakable::GetEntityClassInternal(void)::g_EntityCBreakableClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CBreakable::GetEntityClassInternal(void)::g_EntityCBreakableClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CBreakable::GetEntityClassInternal(void)::g_EntityCBreakableClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CBreakable::GetEntityClassInternal(void)::g_EntityCBreakableClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CBreakable::GetEntityClassInternal(void)::g_EntityCBreakableClass;
    CBreakable::GetEntityClassInternal(void)::g_EntityCBreakableClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CBreakable::GetEntityClassInternal(void)::g_EntityCBreakableClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CBreakable::GetEntityClassInternal(void)::g_EntityCBreakableClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CBreakable::GetEntityClassInternal(void)::g_EntityCBreakableClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CBreakable::GetEntityClassInternal(void)::g_EntityCBreakableClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CBreakable::GetEntityClassInternal(void)::g_EntityCBreakableClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CBreakable::GetEntityClassInternal(void)::g_EntityCBreakableClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CBreakable::GetEntityClassInternal(void)::g_EntityCBreakableClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CBreakable::GetEntityClassInternal(void)::g_EntityCBreakableClass.m_classInputs.m_Size = 0;
    CBreakable::GetEntityClassInternal(void)::g_EntityCBreakableClass.m_classInputs.m_Memory.m_pMemory = 0;
    CBreakable::GetEntityClassInternal(void)::g_EntityCBreakableClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CBreakable::GetEntityClassInternal(void)::g_EntityCBreakableClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CBreakable::GetEntityClassInternal(void)::g_EntityCBreakableClass.m_classOutputs.m_Size = 0;
    CBreakable::GetEntityClassInternal(void)::g_EntityCBreakableClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CBreakable::GetEntityClassInternal(void)::g_EntityCBreakableClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CBreakable::GetEntityClassInternal(void)::g_EntityCBreakableClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CBreakable::GetEntityClassInternal(void)::g_EntityCBreakableClass.m_requiredEHandle.m_Index = -1;
    CBreakable::GetEntityClassInternal(void)::g_EntityCBreakableClass.m_hNetworkSerializer = 0;
    CBreakable::GetEntityClassInternal(void)::g_EntityCBreakableClass.m_pBaseClassInfo = 0;
    CBreakable::GetEntityClassInternal(void)::g_EntityCBreakableClass.m_pClassInfo = 0;
    CBreakable::GetEntityClassInternal(void)::g_EntityCBreakableClass.m_flags = 0;
    CBreakable::GetEntityClassInternal(void)::g_EntityCBreakableClass.m_nAllHelpersFlags = 0;
    CBreakable::GetEntityClassInternal(void)::g_EntityCBreakableClass.m_pScriptClassDesc = 0;
    CBreakable::GetEntityClassInternal(void)::g_EntityCBreakableClass.m_pInputs = 0;
    CBreakable::GetEntityClassInternal(void)::g_EntityCBreakableClass.m_nInputCount = 0;
    CBreakable::GetEntityClassInternal(void)::g_EntityCBreakableClass.m_pOutputs = 0;
    CBreakable::GetEntityClassInternal(void)::g_EntityCBreakableClass.m_nOutputCount = 0;
    CBreakable::GetEntityClassInternal(void)::g_EntityCBreakableClass.m_pGameClass = 0;
    CBreakable::GetEntityClassInternal(void)::g_EntityCBreakableClass._vptr_CEntityClass = off_3FD9EB0;
    __cxa_guard_release(&`guard variable for'CBreakable::GetEntityClassInternal(void)::g_EntityCBreakableClass);
    __cxa_atexit(
      CBreakable::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CBreakable::GetEntityClassInternal(void)::g_EntityCBreakableClass,
      &_dso_handle);
  }
  if ( g_pEntityCBreakableClass != 0 )
    return &CBreakable::GetEntityClassInternal(void)::g_EntityCBreakableClass;
  if ( `guard variable for'CBreakable::GetEntityClassInfo(void)::g_EntityCBreakableClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CBreakable::GetEntityClassInfo(void)::g_EntityCBreakableClassInfo) != 0 )
  {
    EntityClassInfo = CBaseModelEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CBreakable::GetEntityClassInfo(void)::g_EntityCBreakableClassInfo,
      "CBreakable",
      "func_breakable",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CBreakable::GetEntityClassInfo(void)::g_EntityCBreakableClassInfo);
  }
  CBreakable::GetEntityClassInternal(void)::g_EntityCBreakableClass.m_pClassInfo = &CBreakable::GetEntityClassInfo(void)::g_EntityCBreakableClassInfo;
  CBreakable::GetEntityClassInternal(void)::g_EntityCBreakableClass.m_pBaseClassInfo = CBreakable::GetEntityClassInfo(void)::g_EntityCBreakableClassInfo.m_pBaseClassInfo;
  g_pEntityCBreakableClass = &CBreakable::GetEntityClassInternal(void)::g_EntityCBreakableClass;
  CBreakable::GetEntityClassInfo(void)::g_EntityCBreakableClassInfo.m_pClass = &CBreakable::GetEntityClassInternal(void)::g_EntityCBreakableClass;
  CBreakable::GetEntityClassInternal(void)::g_EntityCBreakableClass.m_pScriptClassDesc = CBaseModelEntity::InitScriptDesc();
  g_pEntityCBreakableClass->m_pComponentOverrides = 0;
  return &CBreakable::GetEntityClassInternal(void)::g_EntityCBreakableClass;
}


// CBreakable::GetEntityClass  (line 71, @0x00000000022450d0, libserver.so)
CEntityClass *__cdecl CBreakable::GetEntityClass()
{
  return g_pEntityCBreakableClass;
}


// CBreakable::Schema_DynamicBinding  (line 71, @0x00000000022472c0, libserver.so)
// calls: CBreakable::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CBreakable::Schema_DynamicBinding(const CBreakable *const this)
{
  CBreakable::Schema_VerifyBindingIsRegistered();
  return CBreakable::s_pSchemaBinding;
}


// CBreakable::SetDmgModBullet  (line 133, @0x00000000022450e0, libserver.so)
void __fastcall CBreakable::SetDmgModBullet(CBreakable *const this, float a2, float flDmgMod)
{
  this->m_flDmgModBullet = a2;
}


// CBreakable::SetDmgModClub  (line 134, @0x0000000002245100, libserver.so)
void __fastcall CBreakable::SetDmgModClub(CBreakable *const this, float a2, float flDmgMod)
{
  this->m_flDmgModClub = a2;
}


// CBreakable::SetDmgModExplosive  (line 135, @0x0000000002245120, libserver.so)
void __fastcall CBreakable::SetDmgModExplosive(CBreakable *const this, float a2, float flDmgMod)
{
  this->m_flDmgModExplosive = a2;
}


// CBreakable::SetDmgModFire  (line 136, @0x0000000002245140, libserver.so)
void __fastcall CBreakable::SetDmgModFire(CBreakable *const this, float a2, float flDmgMod)
{
  this->m_flDmgModFire = a2;
}


// CBreakable::GetDmgModBullet  (line 137, @0x0000000002245160, libserver.so)
float __fastcall CBreakable::GetDmgModBullet(CBreakable *const this)
{
  return this->m_flDmgModBullet;
}


// CBreakable::GetDmgModClub  (line 138, @0x0000000002245180, libserver.so)
float __fastcall CBreakable::GetDmgModClub(CBreakable *const this)
{
  return this->m_flDmgModClub;
}


// CBreakable::GetDmgModExplosive  (line 139, @0x00000000022451a0, libserver.so)
float __fastcall CBreakable::GetDmgModExplosive(CBreakable *const this)
{
  return this->m_flDmgModExplosive;
}


// CBreakable::GetDmgModFire  (line 140, @0x00000000022451c0, libserver.so)
float __fastcall CBreakable::GetDmgModFire(CBreakable *const this)
{
  return this->m_flDmgModFire;
}


// CBreakable::SetExplosiveRadius  (line 141, @0x00000000022451e0, libserver.so)
void __fastcall CBreakable::SetExplosiveRadius(CBreakable *const this, float a2, float flRadius)
{
  this->m_explodeRadius = a2;
}


// CBreakable::SetExplosiveDamage  (line 142, @0x0000000002245200, libserver.so)
void __fastcall CBreakable::SetExplosiveDamage(CBreakable *const this, float a2, float flDamage)
{
  this->m_ExplosionMagnitude = a2;
}


// CBreakable::GetExplosiveRadius  (line 143, @0x0000000002245220, libserver.so)
float __fastcall CBreakable::GetExplosiveRadius(CBreakable *const this)
{
  return this->m_explodeRadius;
}


// CBreakable::GetExplosiveDamage  (line 144, @0x0000000002245240, libserver.so)
float __fastcall CBreakable::GetExplosiveDamage(CBreakable *const this)
{
  return this->m_ExplosionMagnitude;
}


// CBreakable::SetPhysicsDamageTable  (line 153, @0x0000000002245260, libserver.so)  // inlines: operator=
void __fastcall CBreakable::SetPhysicsDamageTable(CBreakable *const this, string_t iszTableName)
{
  this->m_iszPhysicsDamageTableName.u.m_Id = *iszTableName.u.m_Id;
}


// CBreakable::GetPhysicsDamageTable  (line 154, @0x0000000002245280, libserver.so)  // inlines: CUtlSymbolLarge
string_t __fastcall CBreakable::GetPhysicsDamageTable(UtlSymLargeId_t *a1, CBreakable *const this)
{
  *a1 = this->m_iszPhysicsDamageTableName.u.m_Id;
  return a1;
}


// CBreakable::SetBreakableModel  (line 155, @0x00000000022452b0, libserver.so)  // inlines: operator=
void __fastcall CBreakable::SetBreakableModel(CBreakable *const this, string_t iszModel)
{
  this->m_iszBreakableModel.u.m_Id = *iszModel.u.m_Id;
}


// CBreakable::GetBreakableModel  (line 156, @0x00000000022452d0, libserver.so)  // inlines: CUtlSymbolLarge
string_t __fastcall CBreakable::GetBreakableModel(UtlSymLargeId_t *a1, CBreakable *const this)
{
  *a1 = this->m_iszBreakableModel.u.m_Id;
  return a1;
}


// CBreakable::SetBreakableSkin  (line 157, @0x0000000002245300, libserver.so)
void __fastcall CBreakable::SetBreakableSkin(CBreakable *const this, int iSkin)
{
  this->m_iBreakableSkin = iSkin;
}


// CBreakable::GetBreakableSkin  (line 158, @0x0000000002245320, libserver.so)
int __fastcall CBreakable::GetBreakableSkin(CBreakable *const this)
{
  return this->m_iBreakableSkin;
}


// CBreakable::SetBreakableCount  (line 159, @0x0000000002245340, libserver.so)
void __fastcall CBreakable::SetBreakableCount(CBreakable *const this, int iCount)
{
  this->m_iBreakableCount = iCount;
}


// CBreakable::GetBreakableCount  (line 160, @0x0000000002245360, libserver.so)
int __fastcall CBreakable::GetBreakableCount(CBreakable *const this)
{
  return this->m_iBreakableCount;
}


// CBreakable::SetMaxBreakableSize  (line 161, @0x0000000002245380, libserver.so)
void __fastcall CBreakable::SetMaxBreakableSize(CBreakable *const this, int iSize)
{
  this->m_iMaxBreakableSize = iSize;
}


// CBreakable::GetMaxBreakableSize  (line 162, @0x00000000022453a0, libserver.so)
int __fastcall CBreakable::GetMaxBreakableSize(CBreakable *const this)
{
  return this->m_iMaxBreakableSize;
}


// CBreakable::SetPropDataBlocksLOS  (line 163, @0x0000000002247240, libserver.so)
// calls: CBaseEntity::SetBlocksLOS
void __fastcall CBreakable::SetPropDataBlocksLOS(CBreakable *const this, bool bBlocksLOS)
{
  CBaseEntity::SetBlocksLOS(this, bBlocksLOS);
}


// CBreakable::SetPropDataIsAIWalkable  (line 164, @0x0000000002247260, libserver.so)
// calls: CBaseEntity::SetAIWalkable
void __fastcall CBreakable::SetPropDataIsAIWalkable(CBreakable *const this, bool bBlocksLOS)
{
  CBaseEntity::SetAIWalkable(this, bBlocksLOS);
}


// CBreakable::SetBasePropData  (line 165, @0x00000000022453c0, libserver.so)  // inlines: operator=
void __fastcall CBreakable::SetBasePropData(CBreakable *const this, string_t iszBase)
{
  this->m_iszBasePropData.u.m_Id = *iszBase.u.m_Id;
}


// CBreakable::GetBasePropData  (line 166, @0x00000000022453e0, libserver.so)  // inlines: CUtlSymbolLarge
string_t __fastcall CBreakable::GetBasePropData(UtlSymLargeId_t *a1, CBreakable *const this)
{
  *a1 = this->m_iszBasePropData.u.m_Id;
  return a1;
}


// CBreakable::SetInteraction  (line 167, @0x0000000002245410, libserver.so)
void __fastcall CBreakable::SetInteraction(CBreakable *const this, propdata_interactions_t Interaction)
{
  this->m_iInteractions |= 1 << Interaction;
}


// CBreakable::HasInteraction  (line 168, @0x0000000002245440, libserver.so)
bool __fastcall CBreakable::HasInteraction(CBreakable *const this, propdata_interactions_t Interaction)
{
  return (this->m_iInteractions >> Interaction) & 1;
}


// CBreakable::SetPhysicsMode  (line 169, @0x0000000002245470, libserver.so)
void __fastcall CBreakable::SetPhysicsMode(CBreakable *const this, int iMode)
{
  ;
}


// CBreakable::GetPhysicsMode  (line 170, @0x0000000002245490, libserver.so)
int __fastcall CBreakable::GetPhysicsMode(CBreakable *const this)
{
  return 1;
}


// CBreakable::SetMultiplayerBreakMode  (line 171, @0x00000000022454b0, libserver.so)
void __fastcall CBreakable::SetMultiplayerBreakMode(CBreakable *const this, mp_break_t mode)
{
  ;
}


// CBreakable::GetMultiplayerBreakMode  (line 172, @0x00000000022454d0, libserver.so)
mp_break_t __fastcall CBreakable::GetMultiplayerBreakMode(const CBreakable *const this)
{
  return mp_break_t::MULTIPLAYER_BREAK_DEFAULT;
}


// CBreakable::GetMinHealthDamage  (line 173, @0x00000000022454f0, libserver.so)
int __fastcall CBreakable::GetMinHealthDamage(CBreakable *const this)
{
  return this->m_iMinHealthDmg;
}


