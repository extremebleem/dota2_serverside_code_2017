
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper  (line 54, @0x0000000001ea38a0, libserver.so)  // inlines: V_memcpy, V_strlen, memcpy
// calls: strlen, memcpy, __stack_chk_fail
// callers: CBaseEntity::GetEntityClassInfo, CBaseAnimating::GetEntityClassInfo, CDevtestHierarchy::GetEntityClassInternal, CDevtestHierarchyChild::GetEntityClassInternal, CDevtestHierarchy2::GetEntityClassInternal, CPlasma::GetEntityClassInternal, CBaseClientUIEntity::GetEntityClassInternal, CPointClientUIWorldPanel::GetEntityClassInternal, CBaseClientUIEntity::GetEntityClassInfo, CPointClientUIWorldTextPanel::GetEntityClassInternal, CBaseModelEntity::GetEntityClassInfo, CPointClientUIDialog::GetEntityClassInternal (2168 total)
void __fastcall CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
        CEntityClassInfo_StaticHelper *const this,
        const char *szUnmodifiedClassName,
        const char *szDesignName,
        const char *szDescription,
        CEntityClassInfo *pBaseClassInfo)
{
  const char *v8; // r12
  int v10; // eax
  void *v11; // rsp
  __int64 v12; // [rsp+10h] [rbp-30h] BYREF

  v8 = szUnmodifiedClassName;
  if ( szUnmodifiedClassName[1] == 95 )
  {
    v10 = strlen(szUnmodifiedClassName);
    v11 = alloca(((v10 + 31) & 0xFFFFFFF0) + 16LL);
    if ( v10 < 0 )
      __debugbreak();
    *memcpy((&v12 & 0xFFFFFFFFFFFFFFEFLL), v8 + 1, v10) = 67;
  }
  this->m_pszCPPClassname = v8;
  if ( szDescription != 0 )
    v8 = szDescription;
  this->m_pszClassname = szDesignName;
  this->m_pClass = 0;
  this->m_pszDescription = v8;
  this->m_pBaseClassInfo = pBaseClassInfo;
}


// CEntityClass::GetDefaultScriptClass  (line 511, @0x0000000001b2c420, libserver.so)
const char *__fastcall CEntityClass::GetDefaultScriptClass(CEntityClass *const this)
{
  return 0;
}


// CEntityClass::GetGameClass  (line 560, @0x0000000001b51bb0, libserver.so)
// callers: CBaseClientUIEntity::GetServerClass, CPointClientUIWorldPanel::GetServerClass, CPointClientUIWorldTextPanel::GetServerClass, CPointClientUIDialog::GetServerClass, CDevtestHierarchy::GetServerClass, CEnvClock::GetServerClass, CPointCamera::GetServerClass, CEnvCombinedLightProbeVolume::GetServerClass, CLightEntity::GetServerClass, CEnvCubemapBox::GetServerClass, CEnvCubemap::GetServerClass, CLightDirectionalEntity::GetServerClass (743 total)
void *__fastcall CEntityClass::GetGameClass(CEntityClass *const this, bool bNoSubClasses)
{
  void *result; // rax
  CEntityClassInfo *m_pBaseClassInfo; // rdx

  while ( 1 )
  {
    result = this->m_pGameClass;
    if ( bNoSubClasses )
      break;
    if ( result != 0 )
      break;
    m_pBaseClassInfo = this->m_pBaseClassInfo;
    if ( m_pBaseClassInfo == 0 )
      break;
    this = m_pBaseClassInfo->m_pClass;
    bNoSubClasses = 0;
  }
  return result;
}


// CEntityClass::ClassInputInfo_t::Less  (line 588, @0x00000000030976f0, libserver.so)
int __fastcall CEntityClass::ClassInputInfo_t::Less(
        const CEntityClass::ClassInputInfo_t *i1,
        const CEntityClass::ClassInputInfo_t *i2)
{
  int result; // eax

  result = -1;
  if ( i1->m_inputName.u.m_Id >= i2->m_inputName.u.m_Id )
    return i1->m_inputName.u.m_Id != i2->m_inputName.u.m_Id;
  return result;
}


// CEntityClass::ClassInputInfo_t::SortLess  (line 598, @0x0000000003097710, libserver.so)  // inlines: operator<
bool __fastcall CEntityClass::ClassInputInfo_t::SortLess(
        const CEntityClass::ClassInputInfo_t *const i1,
        const CEntityClass::ClassInputInfo_t *const i2,
        void *a3)
{
  return i1->m_inputName.u.m_Id < i2->m_inputName.u.m_Id;
}


// CEntityClass::ClassOutputInfo_t::Less  (line 616, @0x0000000003097720, libserver.so)
int __fastcall CEntityClass::ClassOutputInfo_t::Less(
        const CEntityClass::ClassOutputInfo_t *i1,
        const CEntityClass::ClassOutputInfo_t *i2)
{
  int result; // eax

  result = -1;
  if ( i1->m_outputName.u.m_Id >= i2->m_outputName.u.m_Id )
    return i1->m_outputName.u.m_Id != i2->m_outputName.u.m_Id;
  return result;
}


// CEntityClass::ClassOutputInfo_t::SortLess  (line 626, @0x0000000003097740, libserver.so)  // inlines: operator<
bool __fastcall CEntityClass::ClassOutputInfo_t::SortLess(
        const CEntityClass::ClassOutputInfo_t *const i1,
        const CEntityClass::ClassOutputInfo_t *const i2,
        void *a3)
{
  return i1->m_outputName.u.m_Id < i2->m_outputName.u.m_Id;
}


// CEntityClass::Schema_DynamicBinding  (line 747, @0x0000000001b2c640, libserver.so)
// calls: CEntityClass::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CEntityClass::Schema_DynamicBinding(const CEntityClass *const this)
{
  CEntityClass::Schema_VerifyBindingIsRegistered();
  return CEntityClass::s_pSchemaBinding;
}


// CEntityClass::CEntityClass  (line 753, @0x0000000001fca540, libserver.so)  // inlines: CEntityHandle, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, ~CUtlVector
// calls: CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CBaseMultiplayerPlayer::GetEntityClassInternal, CAmbientGeneric::GetEntityClassInternal, CRagdollMagnet::GetEntityClassInternal, CServerOnlyPointEntity::GetEntityClassInternal, CLogicalEntity::GetEntityClassInternal, CColorCorrection::GetEntityClassInternal, CBaseEntity::GetEntityClassInternal, CBaseModelEntity::GetEntityClassInternal, CServerOnlyModelEntity::GetEntityClassInternal, CModelPointEntity::GetEntityClassInternal, CBaseToggle::GetEntityClassInternal, CRotButton::GetEntityClassInternal (1613 total)
// globals: CEntityClass::GetGlobalList(void)::g_pEntityClassList
void __fastcall CEntityClass::CEntityClass(CEntityClass *const this)
{
  ComponentUnserializerClassInfo_t::FieldHash_t *p_m_atomicFields; // rdi
  CEntityClass *v3; // rax

  this->_vptr_CEntityClass = off_3F79390;  // vptr: CEntityClass
  p_m_atomicFields = &this->m_instanceUnserializer.m_atomicFields;
  p_m_atomicFields[-1].m_aBuckets[12].m_pFirst = 0;
  LODWORD(p_m_atomicFields[-1].m_aBuckets[13].m_pFirst) = 0;
  p_m_atomicFields[-1].m_aBuckets[13].m_pFirstUncommitted = 0;
  LODWORD(p_m_atomicFields[-1].m_aBuckets[14].m_pFirst) = 0;
  HIDWORD(p_m_atomicFields[-1].m_aBuckets[14].m_pFirst) = 0;
  LODWORD(p_m_atomicFields[-1].m_aBuckets[14].m_pFirstUncommitted) = 0;
  p_m_atomicFields[-1].m_aBuckets[15].m_pFirst = 0;
  LODWORD(p_m_atomicFields[-1].m_aBuckets[15].m_pFirstUncommitted) = 0;
  HIDWORD(p_m_atomicFields[-1].m_aBuckets[15].m_pFirstUncommitted) = 0;
  *&p_m_atomicFields[-1].m_bNeedsCommit = -1;
  CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
    p_m_atomicFields,
    4);
  v3 = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
  this->m_instanceUnserializer.m_ptrFields.m_Size = 0;
  this->m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
  this->m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
  this->m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
  this->m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
  this->m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
  this->m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
  this->m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
  this->m_instanceUnserializer.m_outputFields.m_Size = 0;
  this->m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
  this->m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
  this->m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
  this->m_classInputs.m_Size = 0;
  this->m_classInputs.m_Memory.m_pMemory = 0;
  this->m_classInputs.m_Memory.m_nAllocationCount = 0;
  this->m_classInputs.m_Memory.m_nGrowSize = 0;
  this->m_classOutputs.m_Size = 0;
  this->m_classOutputs.m_Memory.m_pMemory = 0;
  this->m_classOutputs.m_Memory.m_nAllocationCount = 0;
  this->m_classOutputs.m_Memory.m_nGrowSize = 0;
  this->m_requiredEHandle.m_Index = -1;
  this->m_hNetworkSerializer = 0;
  this->m_pBaseClassInfo = 0;
  this->m_pClassInfo = 0;
  this->m_flags = 0;
  this->m_nAllHelpersFlags = 0;
  this->m_pNextClass = v3;
  CEntityClass::GetGlobalList(void)::g_pEntityClassList = this;
  this->m_pScriptClassDesc = 0;
  this->m_pInputs = 0;
  this->m_nInputCount = 0;
  this->m_pOutputs = 0;
  this->m_nOutputCount = 0;
  this->m_pGameClass = 0;
}


// CEntityClass::~CEntityClass  (line 775, @0x0000000001b2c6c0, libserver.so)  // inlines: Count, Purge, RemoveAll, operator int, ~CUtlMemory, ~CUtlMemoryPool, ~CUtlNonTSHashPreHashedKeys, ~CUtlTSHashBase, ~CUtlVector, ~CUtlVectorBase, ~ComponentUnserializerClassInfo_t
// calls: CUtlMemoryPoolBase::Clear, CUtlMemoryPoolBase::~CUtlMemoryPoolBase, CUtlMemory<CEntityClass::ClassOutputInfo_t, int>::Purge, CUtlMemory<CEntityClass::ComponentHelper_t, int>::Purge, CUtlMemory<CEntityClass::ComponentOffsets_t, int>::Purge, CUtlMemory<ComponentPostUnserializerInfo_t, int>::Purge, CUtlMemory<EntOutput_t, int>::Purge, CUtlMemory<CEntityClass::ClassInputInfo_t, int>::Purge, CUtlMemory<ComponentUnserializerPtrToClassInfo_t, int>::Purge
// callers: CEntityInstance::CEntityInstanceEntityClass::~CEntityInstanceEntityClass, CGameEntity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass, CBaseEntity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass, CBaseModelEntity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass, CBaseAnimating::CEntityInstanceEntityClass::~CEntityInstanceEntityClass, CBaseProp::CEntityInstanceEntityClass::~CEntityInstanceEntityClass, CBreakableProp::CEntityInstanceEntityClass::~CEntityInstanceEntityClass, CDynamicProp::CEntityInstanceEntityClass::~CEntityInstanceEntityClass, CDevtestHierarchy::CEntityInstanceEntityClass::~CEntityInstanceEntityClass, CDevtestHierarchyChild::CEntityInstanceEntityClass::~CEntityInstanceEntityClass, CDevtestHierarchy2::CEntityInstanceEntityClass::~CEntityInstanceEntityClass, CBaseFire::CEntityInstanceEntityClass::~CEntityInstanceEntityClass (2028 total)
void __fastcall CEntityClass::~CEntityClass(CEntityClass *const this)
{
  bool v2; // zf
  volatile int m_value; // eax
  __int64 i; // rdx
  CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::HashFixedData_t *j; // rax
  CUtlVectorBase<CEntityClass::ClassOutputInfo_t,CUtlMemory<CEntityClass::ClassOutputInfo_t,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_classOutputs.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_CEntityClass = off_3F79390;  // vptr: CEntityClass
  this->m_classOutputs.m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_classOutputs.m_Memory;
    CUtlMemory<CEntityClass::ClassOutputInfo_t,int>::Purge(&this->m_classOutputs.m_Memory);
    if ( (this->m_classOutputs.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CEntityClass::ClassOutputInfo_t,int>::Purge(p_m_Memory);
  }
  v2 = (this->m_classInputs.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_classInputs.m_Size = 0;
  if ( v2 )
  {
    CUtlMemory<CEntityClass::ClassInputInfo_t,int>::Purge(&this->m_classInputs.m_Memory);
    if ( (this->m_classInputs.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CEntityClass::ClassInputInfo_t,int>::Purge(&this->m_classInputs.m_Memory);
  }
  v2 = (this->m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_instanceUnserializer.m_outputFields.m_Size = 0;
  if ( v2 )
  {
    CUtlMemory<EntOutput_t,int>::Purge(&this->m_instanceUnserializer.m_outputFields.m_Memory);
    if ( (this->m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<EntOutput_t,int>::Purge(&this->m_instanceUnserializer.m_outputFields.m_Memory);
  }
  v2 = (this->m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
  if ( v2 )
  {
    CUtlMemory<ComponentPostUnserializerInfo_t,int>::Purge(&this->m_instanceUnserializer.m_postUnserializeHandlers.m_Memory);
    if ( (this->m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<ComponentPostUnserializerInfo_t,int>::Purge(&this->m_instanceUnserializer.m_postUnserializeHandlers.m_Memory);
  }
  v2 = (this->m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_instanceUnserializer.m_ptrFields.m_Size = 0;
  if ( v2 )
  {
    CUtlMemory<ComponentUnserializerPtrToClassInfo_t,int>::Purge(&this->m_instanceUnserializer.m_ptrFields.m_Memory);
    if ( (this->m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<ComponentUnserializerPtrToClassInfo_t,int>::Purge(&this->m_instanceUnserializer.m_ptrFields.m_Memory);
  }
  m_value = this->m_instanceUnserializer.m_atomicFields.m_EntryMemory.m_BlocksAllocated.m_value;
  this->m_instanceUnserializer.m_atomicFields.m_bNeedsCommit = 0;
  if ( m_value != 0 )
  {
    for ( i = 0; i != 16; ++i )
    {
      for ( j = this->m_instanceUnserializer.m_atomicFields.m_aBuckets[i].m_pFirstUncommitted; j != 0; j = j->m_pNext )
        ;
      this->m_instanceUnserializer.m_atomicFields.m_aBuckets[i].m_pFirst = 0;
      this->m_instanceUnserializer.m_atomicFields.m_aBuckets[i].m_pFirstUncommitted = 0;
    }
    CUtlMemoryPoolBase::Clear(&this->m_instanceUnserializer.m_atomicFields.m_EntryMemory);
  }
  CUtlMemoryPoolBase::~CUtlMemoryPoolBase(&this->m_instanceUnserializer.m_atomicFields.m_EntryMemory);
  this->m_AllHelpers.m_Size = 0;
  if ( (this->m_AllHelpers.m_Memory.m_nGrowSize & 0xC0000000) != 0
    || (CUtlMemory<CEntityClass::ComponentHelper_t,int>::Purge(&this->m_AllHelpers.m_Memory),
        (this->m_AllHelpers.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    v2 = (this->m_ComponentOffsets.m_Memory.m_nGrowSize & 0xC0000000) == 0;
    this->m_ComponentOffsets.m_Size = 0;
    if ( !v2 )
      return;
  }
  else
  {
    CUtlMemory<CEntityClass::ComponentHelper_t,int>::Purge(&this->m_AllHelpers.m_Memory);
    v2 = (this->m_ComponentOffsets.m_Memory.m_nGrowSize & 0xC0000000) == 0;
    this->m_ComponentOffsets.m_Size = 0;
    if ( !v2 )
      return;
  }
  CUtlMemory<CEntityClass::ComponentOffsets_t,int>::Purge(&this->m_ComponentOffsets.m_Memory);
  if ( (this->m_ComponentOffsets.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<CEntityClass::ComponentOffsets_t,int>::Purge(&this->m_ComponentOffsets.m_Memory);
}


// CEntityClass::~CEntityClass  (line 775, @0x0000000001b2c9c0, libserver.so)  // inlines: Count, Purge, RemoveAll, operator int, ~CEntityClass, ~CUtlMemory, ~CUtlMemoryPool, ~CUtlNonTSHashPreHashedKeys, ~CUtlTSHashBase, ~CUtlVector, ~CUtlVectorBase, ~ComponentUnserializerClassInfo_t
// calls: CUtlMemoryPoolBase::Clear, CUtlMemoryPoolBase::~CUtlMemoryPoolBase, operator delete, CUtlMemory<CEntityClass::ClassOutputInfo_t, int>::Purge, CUtlMemory<CEntityClass::ComponentHelper_t, int>::Purge, CUtlMemory<CEntityClass::ComponentOffsets_t, int>::Purge, CUtlMemory<ComponentPostUnserializerInfo_t, int>::Purge, CUtlMemory<EntOutput_t, int>::Purge, CUtlMemory<CEntityClass::ClassInputInfo_t, int>::Purge, CUtlMemory<ComponentUnserializerPtrToClassInfo_t, int>::Purge
void __fastcall CEntityClass::~CEntityClass(CEntityClass *const this)
{
  bool v2; // zf
  volatile int m_value; // eax
  __int64 i; // rdx
  CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::HashFixedData_t *j; // rax
  CUtlVectorBase<CEntityClass::ClassOutputInfo_t,CUtlMemory<CEntityClass::ClassOutputInfo_t,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_classOutputs.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_CEntityClass = off_3F79390;  // vptr: CEntityClass
  this->m_classOutputs.m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_classOutputs.m_Memory;
    CUtlMemory<CEntityClass::ClassOutputInfo_t,int>::Purge(&this->m_classOutputs.m_Memory);
    if ( (this->m_classOutputs.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CEntityClass::ClassOutputInfo_t,int>::Purge(p_m_Memory);
  }
  v2 = (this->m_classInputs.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_classInputs.m_Size = 0;
  if ( v2 )
  {
    CUtlMemory<CEntityClass::ClassInputInfo_t,int>::Purge(&this->m_classInputs.m_Memory);
    if ( (this->m_classInputs.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CEntityClass::ClassInputInfo_t,int>::Purge(&this->m_classInputs.m_Memory);
  }
  v2 = (this->m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_instanceUnserializer.m_outputFields.m_Size = 0;
  if ( v2 )
  {
    CUtlMemory<EntOutput_t,int>::Purge(&this->m_instanceUnserializer.m_outputFields.m_Memory);
    if ( (this->m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<EntOutput_t,int>::Purge(&this->m_instanceUnserializer.m_outputFields.m_Memory);
  }
  v2 = (this->m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
  if ( v2 )
  {
    CUtlMemory<ComponentPostUnserializerInfo_t,int>::Purge(&this->m_instanceUnserializer.m_postUnserializeHandlers.m_Memory);
    if ( (this->m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<ComponentPostUnserializerInfo_t,int>::Purge(&this->m_instanceUnserializer.m_postUnserializeHandlers.m_Memory);
  }
  v2 = (this->m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_instanceUnserializer.m_ptrFields.m_Size = 0;
  if ( v2 )
  {
    CUtlMemory<ComponentUnserializerPtrToClassInfo_t,int>::Purge(&this->m_instanceUnserializer.m_ptrFields.m_Memory);
    if ( (this->m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<ComponentUnserializerPtrToClassInfo_t,int>::Purge(&this->m_instanceUnserializer.m_ptrFields.m_Memory);
  }
  m_value = this->m_instanceUnserializer.m_atomicFields.m_EntryMemory.m_BlocksAllocated.m_value;
  this->m_instanceUnserializer.m_atomicFields.m_bNeedsCommit = 0;
  if ( m_value != 0 )
  {
    for ( i = 0; i != 16; ++i )
    {
      for ( j = this->m_instanceUnserializer.m_atomicFields.m_aBuckets[i].m_pFirstUncommitted; j != 0; j = j->m_pNext )
        ;
      this->m_instanceUnserializer.m_atomicFields.m_aBuckets[i].m_pFirst = 0;
      this->m_instanceUnserializer.m_atomicFields.m_aBuckets[i].m_pFirstUncommitted = 0;
    }
    CUtlMemoryPoolBase::Clear(&this->m_instanceUnserializer.m_atomicFields.m_EntryMemory);
  }
  CUtlMemoryPoolBase::~CUtlMemoryPoolBase(&this->m_instanceUnserializer.m_atomicFields.m_EntryMemory);
  this->m_AllHelpers.m_Size = 0;
  if ( (this->m_AllHelpers.m_Memory.m_nGrowSize & 0xC0000000) != 0
    || (CUtlMemory<CEntityClass::ComponentHelper_t,int>::Purge(&this->m_AllHelpers.m_Memory),
        (this->m_AllHelpers.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    v2 = (this->m_ComponentOffsets.m_Memory.m_nGrowSize & 0xC0000000) == 0;
    this->m_ComponentOffsets.m_Size = 0;
    if ( v2 )
      goto LABEL_19;
LABEL_14:
    operator delete(this);
    return;
  }
  CUtlMemory<CEntityClass::ComponentHelper_t,int>::Purge(&this->m_AllHelpers.m_Memory);
  v2 = (this->m_ComponentOffsets.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_ComponentOffsets.m_Size = 0;
  if ( !v2 )
    goto LABEL_14;
LABEL_19:
  CUtlMemory<CEntityClass::ComponentOffsets_t,int>::Purge(&this->m_ComponentOffsets.m_Memory);
  if ( (this->m_ComponentOffsets.m_Memory.m_nGrowSize & 0xC0000000) != 0 )
    goto LABEL_14;
  CUtlMemory<CEntityClass::ComponentOffsets_t,int>::Purge(&this->m_ComponentOffsets.m_Memory);
  operator delete(this);
}


// CEntityClass::GetRequiredEntityHandle  (line 803, @0x00000000030bf4e0, libserver.so)  // inlines: CEntityHandle, GetRequiredEntityHandle
// callers: CEntitySystem::CreateEntity
uint32 *__fastcall CEntityClass::GetRequiredEntityHandle(uint32 *a1, const CEntityClass *const this)
{
  uint32 *result; // rax
  CEntityClassInfo *m_pBaseClassInfo; // rdx
  CEntityClass *m_pClass; // rdx
  CEntityClassInfo *v5; // rdx
  CEntityClassInfo *v6; // rdx

  result = a1;
  if ( (this->m_flags & 8) != 0 )
  {
    *a1 = this->m_requiredEHandle.m_Index;
    return result;
  }
  m_pBaseClassInfo = this->m_pBaseClassInfo;
  if ( m_pBaseClassInfo == 0 )
    goto LABEL_8;
  m_pClass = m_pBaseClassInfo->m_pClass;
  if ( (m_pClass->m_flags & 8) == 0 )
  {
    v5 = m_pClass->m_pBaseClassInfo;
    if ( v5 != 0 )
    {
      m_pClass = v5->m_pClass;
      if ( (m_pClass->m_flags & 8) == 0 )
      {
        v6 = m_pClass->m_pBaseClassInfo;
        if ( v6 != 0 )
        {
          CEntityClass::GetRequiredEntityHandle(v6->m_pClass);
          return a1;
        }
        goto LABEL_8;
      }
      goto LABEL_10;
    }
LABEL_8:
    *a1 = -1;
    return result;
  }
LABEL_10:
  *a1 = m_pClass->m_requiredEHandle.m_Index;
  return result;
}


// CEntityClass::GetComponentsContainedFlags  (line 856, @0x0000000001b2c430, libserver.so)
CUtlVector<bool,CUtlMemory<bool,int> > *__fastcall CEntityClass::GetComponentsContainedFlags(CEntityClass *const this)
{
  return &CEntityClass::gm_fComponentsContained;
}


