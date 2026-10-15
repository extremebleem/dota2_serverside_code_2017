// Reconstructed from DWARF by pahole; not original source.

// src/entity2/entityclass.cpp:755
struct UnserializeComponentInfo_t {
	void * m_pBasePtr;  // +0x0
	const EntComponentInfo_t * m_pInfo;  // +0x8
	const ComponentUnserializerClassInfo_t * m_pUnserializer;  // +0x10
	UnserializeComponentInfo_t();
	UnserializeComponentInfo_t(void *, const ComponentUnserializerClassInfo_t *);

	// sizeof = 24
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// _GLOBAL__sub_I_entityclass.cpp  (line 0, @0x0000000001a678c0, libserver.so)  // inlines: CFieldPathHuffmanEncoder, CUtlMemory, CUtlVector, CUtlVectorBase, CUtlVectorFixed, CVariantBase, Color, Purge, RemoveAll, SetColor, __static_initialization_and_destruction_0, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~CUtlVectorFixed
// calls: __cxa_atexit, LoggingSystem_RegisterLoggingChannel, ConVar::ConVar, CFieldPathHuffmanEncoder::BuildOpCodeCodeToHuffmanLookup, _Unwind_Resume, CUtlMemory<CFieldPathHuffmanEncoder::composed_t, int>::Purge, CUtlMemory<int, int>::Purge
// strings: "Entity Load Unserialize", "entity_log_load_unserialize", "Output unserialization of entities on map load. 0 - off, 1 - client/server, 2 - server, 3
// globals: UNSPECIFIED_LOGGING_COLOR, `guard variable for'g_HuffmanEncoder, `guard variable for'CEntityKeyValues::sm_EmptyVariant, __dso_handle, CEntityClass::gm_fComponentsContained, CUtlVector<bool,CUtlMemory<bool,int>>::~CUtlVector(), CEntityClass::gm_ComponentInfosById, CUtlVector<EntComponentInfo_t const*,CUtlMemory<EntComponentInfo_t const*,int>>::~CUtlVector() (15 total)
void __cdecl GLOBAL__sub_I_entityclass_cpp()
{
  UNSPECIFIED_LOGGING_COLOR._color[0] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[1] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[2] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[3] = 0;
  if ( `guard variable for'g_HuffmanEncoder == 0 )
  {
    `guard variable for'g_HuffmanEncoder = 1;
    g_HuffmanEncoder.m_pRoot = 0;
    g_HuffmanEncoder.m_Frequencies.m_Size = 0;
    g_HuffmanEncoder.m_Frequencies.m_Memory.m_pMemory = 0;
    g_HuffmanEncoder.m_Frequencies.m_Memory.m_nAllocationCount = 0;
    g_HuffmanEncoder.m_Frequencies.m_Memory.m_nGrowSize = 0;
    g_HuffmanEncoder.m_OpCodeToHuffmanLookup.m_Size = 0;
    g_HuffmanEncoder.m_FixedTree.m_Size = 0;
    g_HuffmanEncoder.m_FixedTree.m_Memory.m_pMemory = 0;
    g_HuffmanEncoder.m_FixedTree.m_Memory.m_nAllocationCount = 0;
    g_HuffmanEncoder.m_FixedTree.m_Memory.m_nGrowSize = 0;
    CFieldPathHuffmanEncoder::BuildOpCodeCodeToHuffmanLookup(&g_HuffmanEncoder);
    __cxa_atexit(CFieldPathHuffmanEncoder::~CFieldPathHuffmanEncoder, &g_HuffmanEncoder, &_dso_handle);
  }
  if ( `guard variable for'CEntityKeyValues::sm_EmptyVariant == 0 )
  {
    `guard variable for'CEntityKeyValues::sm_EmptyVariant = 1;
    CEntityKeyValues::sm_EmptyVariant.m_type = 0;
    CEntityKeyValues::sm_EmptyVariant.m_flags = 0;
    CEntityKeyValues::sm_EmptyVariant.m_uint64 = 0;
    __cxa_atexit(CVariantBase<CEntityVariantAllocator>::~CVariantBase, &CEntityKeyValues::sm_EmptyVariant, &_dso_handle);
  }
  CEntityClass::gm_fComponentsContained.m_Size = 0;
  CEntityClass::gm_fComponentsContained.m_Memory.m_pMemory = 0;
  CEntityClass::gm_fComponentsContained.m_Memory.m_nAllocationCount = 0;
  CEntityClass::gm_fComponentsContained.m_Memory.m_nGrowSize = 0;
  __cxa_atexit(CUtlVector<bool,CUtlMemory<bool,int>>::~CUtlVector, &CEntityClass::gm_fComponentsContained, &_dso_handle);
  CEntityClass::gm_ComponentInfosById.m_Size = 0;
  CEntityClass::gm_ComponentInfosById.m_Memory.m_pMemory = 0;
  CEntityClass::gm_ComponentInfosById.m_Memory.m_nAllocationCount = 0;
  CEntityClass::gm_ComponentInfosById.m_Memory.m_nGrowSize = 0;
  __cxa_atexit(
    CUtlVector<EntComponentInfo_t const*,CUtlMemory<EntComponentInfo_t const*,int>>::~CUtlVector,
    &CEntityClass::gm_ComponentInfosById,
    &_dso_handle);
  LOG_ENTITY_LOAD_UNSERIALIZE = LoggingSystem_RegisterLoggingChannel(
                                  "Entity Load Unserialize",
                                  Register_LOG_ENTITY_LOAD_UNSERIALIZE_Tags,
                                  0,
                                  2,
                                  *&UNSPECIFIED_LOGGING_COLOR);
  ConVar::ConVar(
    &entity_log_load_unserialize,
    "entity_log_load_unserialize",
    "0",
    0,
    "Output unserialization of entities on map load. 0 - off, 1 - client/server, 2 - server, 3 - client");
  __cxa_atexit(ConVar::~ConVar, &entity_log_load_unserialize, &_dso_handle);
}


// Register_LOG_ENTITY_LOAD_UNSERIALIZE_Tags  (line 23, @0x0000000003091b50, libserver.so)
void __fastcall Register_LOG_ENTITY_LOAD_UNSERIALIZE_Tags(LoggingChannelID_t channelID)
{
  ;
}


// CEntityClass::AllocateInstance  (line 33, @0x0000000003091bb0, libserver.so)  // inlines: MemAlloc_InlineCallocMemsetFunc, memset
void *__fastcall CEntityClass::AllocateInstance(CEntityClass *const this)
{
  void *v1; // rdx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 48);
  if ( v1 != 0 )
    memset(v1, 0, 0x30u);
  return v1;
}


// CEntityClass::ConstructInstance  (line 40, @0x0000000003091c10, libserver.so)  // inlines: Construct<CEntityInstance>
// calls: CEntityInstance::CEntityInstance
CEntityInstance *__fastcall CEntityClass::ConstructInstance(CEntityClass *const this, void *pVInstance)
{
  if ( pVInstance != 0 )
    CEntityInstance::CEntityInstance(pVInstance);
  return pVInstance;
}


// CEntityClass::DestructInstance  (line 46, @0x0000000003091b60, libserver.so)  // inlines: Destruct<CEntityInstance>
void __fastcall CEntityClass::DestructInstance(CEntityClass *const this, CEntityInstance *pInstance)
{
  (*(pInstance->_vptr_IHandleEntity + 1))(pInstance);
}


// CEntityClass::FreeInstance  (line 51, @0x0000000003091b80, libserver.so)
void __fastcall CEntityClass::FreeInstance(CEntityClass *const this, void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CEntityClass::CanAllocate  (line 56, @0x0000000003091ba0, libserver.so)
bool __fastcall CEntityClass::CanAllocate(const CEntityClass *const this)
{
  return 1;
}


// CEntityClass::InheritFlagsFromBase  (line 64, @0x00000000030920c0, libserver.so)  // inlines: GetBaseClass
// callers: CEntityClass::OnRegister
void __fastcall CEntityClass::InheritFlagsFromBase(CEntityClass *const this, EntityClassFlags_t nFlags)
{
  uint32 m_flags; // edx
  CEntityClassInfo *m_pBaseClassInfo; // rax
  CEntityClass *m_pClass; // rax

  m_flags = this->m_flags;
  if ( (m_flags & nFlags) == 0 )
  {
    m_pBaseClassInfo = this->m_pBaseClassInfo;
    if ( m_pBaseClassInfo == 0 )
    {
      m_pClass = 0;
      goto LABEL_4;
    }
    do
    {
      m_pClass = m_pBaseClassInfo->m_pClass;
LABEL_4:
      if ( m_pClass == 0 )
        break;
      if ( (nFlags & m_pClass->m_flags) != 0 )
      {
        this->m_flags = m_flags | nFlags;
        return;
      }
      m_pBaseClassInfo = m_pClass->m_pBaseClassInfo;
    }
    while ( m_pBaseClassInfo != 0 );
  }
}


// CEntityClass::OnRegister  (line 85, @0x0000000003092110, libserver.so)  // inlines: operator=
// calls: CEntitySystem::AllocPooledString, CEntityClass::InheritFlagsFromBase
void __fastcall CEntityClass::OnRegister(CEntityClass *const this)
{
  UtlSymLargeId_t v2; // [rsp+0h] [rbp-20h]

  CEntitySystem::AllocPooledString(g_pEntitySystem, this->m_pClassInfo->m_pszClassname);
  this->m_designerName.u.m_Id = v2;
  CEntityClass::InheritFlagsFromBase(this, EntityClassFlags_t::ECF_NOT_NETWORKED);
  CEntityClass::InheritFlagsFromBase(this, EntityClassFlags_t::ECF_ALWAYS_SPAWN_ON_CLIENT);
  CEntityClass::InheritFlagsFromBase(this, EntityClassFlags_t::ECF_BECOME_SUSPENDED_INSTEAD_OF_DORMANT);
  CEntityClass::InheritFlagsFromBase(this, EntityClassFlags_t::ECF_ANONYMOUS_ENTITY);
}


// CEntityClass::GetInstanceSchemaBinding  (line 96, @0x0000000003091bf0, libserver.so)  // inlines: Schema_StaticBinding
// calls: CEntityInstance::Schema_VerifyBindingIsRegistered
const ISchemaBinding *__fastcall CEntityClass::GetInstanceSchemaBinding(CEntityClass *const this)
{
  CEntityInstance::Schema_VerifyBindingIsRegistered();
  return CEntityInstance::s_pSchemaBinding;
}


// CEntityClass::AddEntityInputsToTable  (line 105, @0x0000000003092ec0, libserver.so)  // inlines: AddToTail, CUtlSymbolLarge, ClassInputInfo_t, CopyConstruct<CEntityClass::ClassInputInfo_t>, Element, EnsureCapacity, Find, GrowMemory, memcpy, operator=, operator[]
// calls: CEntitySystem::AllocPooledString, CUtlMemory<CEntityClass::ClassInputInfo_t, int>::Grow, memcpy
// callers: CEntityClass::BuildEntityIOTables
void __fastcall CEntityClass::AddEntityInputsToTable(
        CEntityClass *const this,
        EntInput_t *pInputs,
        int nInputs,
        int nComponentRuntimeIndex)
{
  int v7; // r12d
  uint32 m_nGrowSize; // eax
  CEntityClass::ClassInputInfo_t *v9; // rsi
  __int64 v10; // rax
  EntInput_t *v11; // r12
  EntInput_t *v12; // r13
  __int64 m_Size; // r15
  UtlSymLargeId_t v14; // rcx
  CEntityClass::ClassInputInfo_t *v15; // rdx
  int v16; // eax
  int v17; // eax
  __int64 v18; // r15
  bool v19; // zf
  CEntityClass::ClassInputInfo_t *v20; // r15
  CEntityClass::ClassInputInfo_t *m_pMemory; // r15
  CEntityClass::ClassInputInfo_t *v22; // rax
  UtlSymLargeId_t v23; // [rsp+20h] [rbp-40h]

  v7 = nInputs + this->m_classInputs.m_Size;
  if ( v7 > this->m_classInputs.m_Memory.m_nAllocationCount )
  {
    m_nGrowSize = this->m_classInputs.m_Memory.m_nGrowSize;
    if ( (m_nGrowSize & 0x40000000) == 0 )
    {
      if ( (m_nGrowSize & 0xC0000000) != 0 )
      {
        m_pMemory = this->m_classInputs.m_Memory.m_pMemory;
        v22 = (**g_pMemAlloc)(g_pMemAlloc, 16LL * v7, *g_pMemAlloc, nComponentRuntimeIndex);
        this->m_classInputs.m_Memory.m_pMemory = v22;
        if ( m_pMemory != 0 )
          memcpy(v22, m_pMemory, 16LL * this->m_classInputs.m_Memory.m_nAllocationCount);
        this->m_classInputs.m_Memory.m_nGrowSize &= 0x3FFFFFFFu;
      }
      else
      {
        v9 = this->m_classInputs.m_Memory.m_pMemory;
        v10 = *g_pMemAlloc;
        if ( v9 != 0 )
          this->m_classInputs.m_Memory.m_pMemory = (*(v10 + 8))(g_pMemAlloc, v9, 16LL * v7, nComponentRuntimeIndex);
        else
          this->m_classInputs.m_Memory.m_pMemory = (*v10)(g_pMemAlloc, 16LL * v7, nInputs, nComponentRuntimeIndex);
      }
      this->m_classInputs.m_Memory.m_nAllocationCount = v7;
    }
  }
  if ( nInputs > 0 )
  {
    v11 = pInputs;
    v12 = &pInputs[(nInputs - 1) + 1];
    while ( 1 )
    {
      CEntitySystem::AllocPooledString(g_pEntitySystem, v11->m_inputFunction.m_pName);
      m_Size = this->m_classInputs.m_Size;
      v14 = v23;
      if ( m_Size <= 0 )
        goto LABEL_14;
      v15 = this->m_classInputs.m_Memory.m_pMemory;
      if ( v23 != v15->m_inputName.u.m_Id )
        break;
LABEL_18:
      if ( ++v11 == v12 )
        return;
    }
    v16 = 0;
    while ( ++v16 != m_Size )
    {
      ++v15;
      if ( v23 == v15->m_inputName.u.m_Id )
      {
        if ( v16 >= 0 )
          goto LABEL_18;
        break;
      }
    }
LABEL_14:
    v17 = this->m_classInputs.m_Size;
    if ( m_Size == this->m_classInputs.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<CEntityClass::ClassInputInfo_t,int>::Grow(&this->m_classInputs.m_Memory, 1);
      v17 = this->m_classInputs.m_Size;
      v14 = v23;
    }
    v18 = m_Size;
    v19 = &this->m_classInputs.m_Memory.m_pMemory[v18] == 0;
    v20 = &this->m_classInputs.m_Memory.m_pMemory[v18];
    this->m_classInputs.m_Size = v17 + 1;
    if ( !v19 )
    {
      v20->m_inputName.u.m_Id = v14;
      v20->m_pInput = &v11->m_inputFunction;
    }
    goto LABEL_18;
  }
}


// CEntityClass::AddEntityOutputsToTable  (line 124, @0x00000000030930b0, libserver.so)  // inlines: AddToTail, CUtlSymbolLarge, ClassOutputInfo_t, CopyConstruct<CEntityClass::ClassOutputInfo_t>, Element, EnsureCapacity, Find, GrowMemory, memcpy, operator=, operator[]
// calls: CEntitySystem::AllocPooledString, CUtlMemory<CEntityClass::ClassOutputInfo_t, int>::Grow, memcpy
// callers: CEntityClass::BuildEntityIOTables
void __fastcall CEntityClass::AddEntityOutputsToTable(
        CEntityClass *const this,
        EntOutput_t *pOutputs,
        int nOutputs,
        int nComponentRuntimeIndex)
{
  int v7; // r12d
  uint32 m_nGrowSize; // eax
  CEntityClass::ClassOutputInfo_t *v9; // rsi
  __int64 v10; // rax
  EntOutput_t *v11; // r12
  EntOutput_t *v12; // r13
  __int64 m_Size; // r15
  UtlSymLargeId_t v14; // rcx
  CEntityClass::ClassOutputInfo_t *v15; // rdx
  int v16; // eax
  int v17; // eax
  __int64 v18; // r15
  bool v19; // zf
  CEntityClass::ClassOutputInfo_t *v20; // r15
  CEntityClass::ClassOutputInfo_t *m_pMemory; // r15
  CEntityClass::ClassOutputInfo_t *v22; // rax
  UtlSymLargeId_t v23; // [rsp+20h] [rbp-40h]

  v7 = nOutputs + this->m_classOutputs.m_Size;
  if ( v7 > this->m_classOutputs.m_Memory.m_nAllocationCount )
  {
    m_nGrowSize = this->m_classOutputs.m_Memory.m_nGrowSize;
    if ( (m_nGrowSize & 0x40000000) == 0 )
    {
      if ( (m_nGrowSize & 0xC0000000) != 0 )
      {
        m_pMemory = this->m_classOutputs.m_Memory.m_pMemory;
        v22 = (**g_pMemAlloc)(g_pMemAlloc, 16LL * v7, *g_pMemAlloc, nComponentRuntimeIndex);
        this->m_classOutputs.m_Memory.m_pMemory = v22;
        if ( m_pMemory != 0 )
          memcpy(v22, m_pMemory, 16LL * this->m_classOutputs.m_Memory.m_nAllocationCount);
        this->m_classOutputs.m_Memory.m_nGrowSize &= 0x3FFFFFFFu;
      }
      else
      {
        v9 = this->m_classOutputs.m_Memory.m_pMemory;
        v10 = *g_pMemAlloc;
        if ( v9 != 0 )
          this->m_classOutputs.m_Memory.m_pMemory = (*(v10 + 8))(g_pMemAlloc, v9, 16LL * v7, nComponentRuntimeIndex);
        else
          this->m_classOutputs.m_Memory.m_pMemory = (*v10)(g_pMemAlloc, 16LL * v7, nOutputs, nComponentRuntimeIndex);
      }
      this->m_classOutputs.m_Memory.m_nAllocationCount = v7;
    }
  }
  if ( nOutputs > 0 )
  {
    v11 = pOutputs;
    v12 = &pOutputs[(nOutputs - 1) + 1];
    while ( 1 )
    {
      CEntitySystem::AllocPooledString(g_pEntitySystem, v11->m_desc.m_pName);
      m_Size = this->m_classOutputs.m_Size;
      v14 = v23;
      if ( m_Size <= 0 )
        goto LABEL_14;
      v15 = this->m_classOutputs.m_Memory.m_pMemory;
      if ( v23 != v15->m_outputName.u.m_Id )
        break;
LABEL_18:
      if ( ++v11 == v12 )
        return;
    }
    v16 = 0;
    while ( ++v16 != m_Size )
    {
      ++v15;
      if ( v23 == v15->m_outputName.u.m_Id )
      {
        if ( v16 >= 0 )
          goto LABEL_18;
        break;
      }
    }
LABEL_14:
    v17 = this->m_classOutputs.m_Size;
    if ( m_Size == this->m_classOutputs.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<CEntityClass::ClassOutputInfo_t,int>::Grow(&this->m_classOutputs.m_Memory, 1);
      v17 = this->m_classOutputs.m_Size;
      v14 = v23;
    }
    v18 = m_Size;
    v19 = &this->m_classOutputs.m_Memory.m_pMemory[v18] == 0;
    v20 = &this->m_classOutputs.m_Memory.m_pMemory[v18];
    this->m_classOutputs.m_Size = v17 + 1;
    if ( !v19 )
    {
      v20->m_outputName.u.m_Id = v14;
      v20->m_pOutput = &v11->m_desc;
    }
    goto LABEL_18;
  }
}


// CEntityClass::AddToClassList  (line 143, @0x0000000003092180, libserver.so)
// callers: CEntityInstance::OnSetDormant, CEntitySystem::OnAddEntityToDatabase
void __fastcall CEntityClass::AddToClassList(CEntityClass *const this, CEntityIdentity *pEntity)
{
  CEntityIdentity *m_pFirstByClass; // rax

  pEntity->m_pPrevByClass = 0;
  pEntity->m_pNextByClass = this->m_pFirstByClass;
  m_pFirstByClass = this->m_pFirstByClass;
  if ( m_pFirstByClass != 0 )
    m_pFirstByClass->m_pPrevByClass = pEntity;
  this->m_pFirstByClass = pEntity;
}


// CEntityClass::RemoveFromClassList  (line 165, @0x00000000030921b0, libserver.so)
// callers: CEntityInstance::OnSetDormant, CEntityInstance::UpdateOnRemove, CEntitySystem::OnRemoveEntityFromDatabase
void __fastcall CEntityClass::RemoveFromClassList(CEntityClass *const this, CEntityIdentity *pEntity)
{
  CEntityIdentity *m_pPrevByClass; // rax
  CEntityIdentity *m_pNextByClass; // rax

  m_pPrevByClass = pEntity->m_pPrevByClass;
  if ( m_pPrevByClass != 0 )
  {
    m_pPrevByClass->m_pNextByClass = pEntity->m_pNextByClass;
  }
  else if ( this->m_pFirstByClass == pEntity )
  {
    this->m_pFirstByClass = pEntity->m_pNextByClass;
  }
  m_pNextByClass = pEntity->m_pNextByClass;
  if ( m_pNextByClass != 0 )
    m_pNextByClass->m_pPrevByClass = pEntity->m_pPrevByClass;
  pEntity->m_pPrevByClass = 0;
  pEntity->m_pNextByClass = 0;
}


// CEntityClass::ReacquirePooledStrings  (line 201, @0x00000000030929d0, libserver.so)  // inlines: operator=
// calls: CEntitySystem::AllocPooledString, CUtlVectorBase<CEntityClass::ClassInputInfo_t, CUtlMemory<CEntityClass::ClassInputInfo_t, int> >::Sort, CUtlVectorBase<CEntityClass::ClassOutputInfo_t, CUtlMemory<CEntityClass::ClassOutputInfo_t, int> >::Sort
// callers: CEntitySystem::FreeAllPooledStrings
// globals: CEntityClass::ClassInputInfo_t::Less(CEntityClass::ClassInputInfo_t const*,CEntityClass::ClassInputInfo_t const*), CEntityClass::ClassOutputInfo_t::Less(CEntityClass::ClassOutputInfo_t const*,CEntityClass::ClassOutputInfo_t const*)
void __fastcall CEntityClass::ReacquirePooledStrings(CEntityClass *const this)
{
  int m_Size; // r15d
  unsigned __int64 v3; // rbx
  __int64 v4; // r15
  int v5; // r15d
  unsigned __int64 v6; // rbx
  __int64 v7; // r15
  UtlSymLargeId_t v8; // [rsp+0h] [rbp-40h]

  CEntitySystem::AllocPooledString(g_pEntitySystem, this->m_pClassInfo->m_pszClassname);
  m_Size = this->m_classInputs.m_Size;
  this->m_designerName.u.m_Id = v8;
  if ( m_Size > 0 )
  {
    v3 = 0;
    v4 = 16 * ((m_Size - 1) + 1LL);
    do
    {
      CEntitySystem::AllocPooledString(
        g_pEntitySystem,
        this->m_classInputs.m_Memory.m_pMemory[v3 / 0x10].m_pInput->m_pName);
      this->m_classInputs.m_Memory.m_pMemory[v3 / 0x10].m_inputName.u.m_Id = v8;
      v3 += 16LL;
    }
    while ( v3 != v4 );
  }
  CUtlVectorBase<CEntityClass::ClassInputInfo_t,CUtlMemory<CEntityClass::ClassInputInfo_t,int>>::Sort(
    &this->m_classInputs,
    CEntityClass::ClassInputInfo_t::Less);
  v5 = this->m_classOutputs.m_Size;
  if ( v5 > 0 )
  {
    v6 = 0;
    v7 = 16 * ((v5 - 1) + 1LL);
    do
    {
      CEntitySystem::AllocPooledString(
        g_pEntitySystem,
        this->m_classOutputs.m_Memory.m_pMemory[v6 / 0x10].m_pOutput->m_pName);
      this->m_classOutputs.m_Memory.m_pMemory[v6 / 0x10].m_outputName.u.m_Id = v8;
      v6 += 16LL;
    }
    while ( v6 != v7 );
  }
  CUtlVectorBase<CEntityClass::ClassOutputInfo_t,CUtlMemory<CEntityClass::ClassOutputInfo_t,int>>::Sort(
    &this->m_classOutputs,
    CEntityClass::ClassOutputInfo_t::Less);
}


// CEntityClass::BuildEntityIOTables  (line 227, @0x0000000003093290, libserver.so)
// calls: CEntityClass::AddEntityInputsToTable, CEntityClass::AddEntityOutputsToTable, CUtlVectorBase<CEntityClass::ClassInputInfo_t, CUtlMemory<CEntityClass::ClassInputInfo_t, int> >::Sort, CUtlVectorBase<CEntityClass::ClassOutputInfo_t, CUtlMemory<CEntityClass::ClassOutputInfo_t, int> >::Sort
// callers: CEntitySystem::Init
// globals: CEntityClass::ClassInputInfo_t::Less(CEntityClass::ClassInputInfo_t const*,CEntityClass::ClassInputInfo_t const*), CEntityClass::ClassOutputInfo_t::Less(CEntityClass::ClassOutputInfo_t const*,CEntityClass::ClassOutputInfo_t const*)
void __fastcall CEntityClass::BuildEntityIOTables(CEntityClass *const this)
{
  EntOutput_t *m_pOutputs; // r12
  int m_nOutputCount; // r13d

  m_pOutputs = this->m_pOutputs;
  m_nOutputCount = this->m_nOutputCount;
  CEntityClass::AddEntityInputsToTable(this, this->m_pInputs, this->m_nInputCount, -1);
  CEntityClass::AddEntityOutputsToTable(this, m_pOutputs, m_nOutputCount, -1);
  CEntityClass::AddEntityOutputsToTable(
    this,
    this->m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory,
    this->m_instanceUnserializer.m_outputFields.m_Size,
    -1);
  CUtlVectorBase<CEntityClass::ClassInputInfo_t,CUtlMemory<CEntityClass::ClassInputInfo_t,int>>::Sort(
    &this->m_classInputs,
    CEntityClass::ClassInputInfo_t::Less);
  CUtlVectorBase<CEntityClass::ClassOutputInfo_t,CUtlMemory<CEntityClass::ClassOutputInfo_t,int>>::Sort(
    &this->m_classOutputs,
    CEntityClass::ClassOutputInfo_t::Less);
}


// CEntityClass::FixupEntityOutputPointers  (line 265, @0x0000000003092210, libserver.so)  // inlines: GetBaseClass
// callers: CEntitySystem::Spawn
void __fastcall CEntityClass::FixupEntityOutputPointers(CEntityClass *const this, CEntityInstance *pEntity)
{
  int m_Size; // r8d
  unsigned __int64 v3; // rax
  __int64 v4; // r8
  EntityIOOutputDesc_t *m_pOutput; // rdx
  CEntityClassInfo *m_pBaseClassInfo; // rax

  do
  {
    m_Size = this->m_classOutputs.m_Size;
    if ( m_Size > 0 )
    {
      v3 = 0;
      v4 = 16 * ((m_Size - 1) + 1LL);
      do
      {
        m_pOutput = this->m_classOutputs.m_Memory.m_pMemory[v3 / 0x10].m_pOutput;
        v3 += 16LL;
        *(&pEntity->m_hPrivateScope.m_hScope + m_pOutput->m_nOutputOffset) = m_pOutput;
      }
      while ( v3 != v4 );
    }
    m_pBaseClassInfo = this->m_pBaseClassInfo;
    if ( m_pBaseClassInfo == 0 )
      break;
    this = m_pBaseClassInfo->m_pClass;
  }
  while ( this != 0 );
}


// CEntityClass::ClassMatches  (line 285, @0x0000000003092270, libserver.so)  // inlines: CompareNamesWithWildcards, EntityNamesMatch, FastASCIIToLower<char>, GetNameAsCStr, String
// callers: CEntityIdentity::ClassInheritsFrom
bool __fastcall CEntityClass::ClassMatches(const CEntityClass *const this, const char *pszClassNameOrWildcard)
{
  const char *m_pAsString; // rcx
  char v3; // al
  const char *v4; // rdi
  const char *v5; // r8
  char v6; // dl
  char v7; // r13
  char v8; // r12
  unsigned __int8 v9; // r10

  m_pAsString = "";
  if ( this->m_designerName.u.m_Id != 0 )
    m_pAsString = this->m_designerName.u.m_pAsString;
  v3 = *pszClassNameOrWildcard;
  v4 = 0;
  v5 = 0;
  v6 = *m_pAsString;
  while ( 1 )
  {
LABEL_4:
    if ( v6 == 0 )
      goto LABEL_21;
    if ( v3 != 42 )
      break;
    do
LABEL_16:
      v3 = *++pszClassNameOrWildcard;
    while ( *pszClassNameOrWildcard == 42 );
    if ( v3 == 0 )
      return 1;
    v4 = m_pAsString;
    v5 = pszClassNameOrWildcard;
  }
  while ( 1 )
  {
    if ( v3 == 63 || v3 == v6 )
      goto LABEL_23;
    v7 = v6;
    v8 = v3;
    v9 = v3 - 65;
    if ( (v6 - 65) <= 0x19u )
      v7 = v6 + 32;
    if ( v9 <= 0x19u )
      v8 = v3 + 32;
    if ( v7 == v8 )
    {
LABEL_23:
      v3 = pszClassNameOrWildcard[1];
      ++m_pAsString;
      ++pszClassNameOrWildcard;
      v6 = *m_pAsString;
      goto LABEL_4;
    }
    if ( v5 == 0 )
    {
      if ( v9 <= 0x19u )
        v3 += 32;
      if ( (v6 - 65) <= 0x19u )
        v6 += 32;
      return v3 == v6;
    }
    v6 = v4[1];
    m_pAsString = v4 + 1;
    pszClassNameOrWildcard = v5;
    v3 = *v5;
    ++v4;
    if ( v6 == 0 )
      break;
    if ( v3 == 42 )
      goto LABEL_16;
  }
LABEL_21:
  while ( v3 != 0 )
  {
    if ( v3 != 42 )
      return v3 == 0;
    v3 = *++pszClassNameOrWildcard;
  }
  return 1;
}


// AssignKeyValue<Color>  (line 295, @0x000000000199a78b, libserver.so)  // inlines: GetDebugName
// calls: CVariantBase<CEntityVariantAllocator>::AssignTo, LoggingSystem_IsChannelEnabled, CEntityIdentity::GetDebugName, LoggingSystem_Log, __stack_chk_fail
// callers: AssignKeyValue<Color>
// strings: "5Color", "Bad key for entity \"%s\": Invalid parsed value for field \"%s\" of type '%s' ('%s')!\n"
__int64 __fastcall AssignKeyValue<Color>(
        CEntityInstance *pEntity,
        const CVariantBase<CEntityVariantAllocator> *pMemory,
        const CEntityVariant *const value,
        const char *pKeyName)
{
  const char *DebugName; // rax
  char pBuf[264]; // [rsp+10h] [rbp-130h] BYREF
  unsigned __int64 v9; // [rsp+118h] [rbp-28h]

  v9 = __readfsqword(0x28u);
  CVariantBase<CEntityVariantAllocator>::AssignTo(pMemory, pBuf, 0x104u);
  if ( LoggingSystem_IsChannelEnabled(LOG_ENTITY_SYSTEM, 2) != 0 )
  {
    DebugName = CEntityIdentity::GetDebugName(pEntity->m_pEntity);
    LoggingSystem_Log(
      LOG_ENTITY_SYSTEM,
      2,
      "Bad key for entity \"%s\": Invalid parsed value for field \"%s\" of type '%s' ('%s')!\n",
      DebugName,
      value,
      "5Color",
      pBuf);
  }
  return 0;
}


// AssignKeyValue<Color>  (line 295, @0x000000000199a835, libserver.so)  // inlines: AssignTo, Color, FromUint32, SetRawColor, VariantFieldTypeName, operator=
// calls: V_StringToColor, Warning, AssignKeyValue<Color>, __stack_chk_fail
// callers: CEntityClass::UnserializeKey
// strings: "cstring", "vector2d", "vector4d", "qangle", "unsigned", "uint64" (20 total)
// globals: jpt_199A8AA
bool __fastcall AssignKeyValue<Color>(
        CEntityInstance *pEntity,
        Color *pMemory,
        const CEntityVariant *const value,
        const char *pKeyName)
{
  int16 m_type; // ax
  uint64 m_uint64; // rsi
  const char *v9; // rsi
  Color v12; // [rsp+10h] [rbp-30h] BYREF
  unsigned __int64 v13; // [rsp+18h] [rbp-28h]

  v13 = __readfsqword(0x28u);
  m_type = value->m_type;
  if ( m_type == 9 )
  {
    *pMemory = value->m_int;
    return 1;
  }
  if ( m_type == 30 )
  {
    m_uint64 = value->m_uint64;
    v12 = 0;
    V_StringToColor(&v12, m_uint64);
    *pMemory = v12;
    return 1;
  }
  switch ( m_type )
  {
    case 0:
      v9 = "void";
      break;
    case 1:
      v9 = "float";
      break;
    case 3:
      v9 = "vector";
      break;
    case 4:
      v9 = "quaternion";
      break;
    case 5:
      v9 = "integer";
      break;
    case 6:
      v9 = "boolean";
      break;
    case 8:
      v9 = "character";
      break;
    case 13:
      v9 = "ehandle";
      break;
    case 25:
      v9 = "vector2d";
      break;
    case 26:
      v9 = "int64";
      break;
    case 27:
      v9 = "vector4d";
      break;
    case 28:
      v9 = "resourcehandle";
      break;
    case 31:
      v9 = "hscript";
      break;
    case 32:
      v9 = "variant";
      break;
    case 33:
      v9 = "uint64";
      break;
    case 34:
      v9 = "float64";
      break;
    case 37:
      v9 = "unsigned";
      break;
    case 38:
      v9 = "utlstringtoken";
      break;
    case 39:
      v9 = "qangle";
      break;
    case 48:
      v9 = "hscript_lightbinding";
      break;
    case 49:
      v9 = "js_value";
      break;
    case 50:
      v9 = "js_object";
      break;
    case 51:
      v9 = "js_array";
      break;
    case 52:
      v9 = "js_raw_args";
      break;
    default:
      v9 = "unknown_variant_type";
      break;
  }
  Warning("No free conversion of %s variant to Color right now\n", v9);
  return AssignKeyValue<Color>(pEntity, value, pKeyName, pKeyName);
}


// AssignKeyValue<Vector>  (line 295, @0x0000000003092af0, libserver.so)  // inlines: GetDebugName
// calls: CVariantBase<CEntityVariantAllocator>::AssignTo, LoggingSystem_IsChannelEnabled, CEntityIdentity::GetDebugName, LoggingSystem_Log, __stack_chk_fail
// callers: AssignKeyValue<Vector>
// strings: "6Vector", "Bad key for entity \"%s\": Invalid parsed value for field \"%s\" of type '%s' ('%s')!\n"
__int64 __fastcall AssignKeyValue<Vector>(
        CEntityInstance *pEntity,
        const CVariantBase<CEntityVariantAllocator> *pMemory,
        const CEntityVariant *const value,
        const char *pKeyName)
{
  const char *DebugName; // rax
  char pBuf[264]; // [rsp+10h] [rbp-130h] BYREF
  unsigned __int64 v9; // [rsp+118h] [rbp-28h]

  v9 = __readfsqword(0x28u);
  CVariantBase<CEntityVariantAllocator>::AssignTo(pMemory, pBuf, 0x104u);
  if ( LoggingSystem_IsChannelEnabled(LOG_ENTITY_SYSTEM, 2) != 0 )
  {
    DebugName = CEntityIdentity::GetDebugName(pEntity->m_pEntity);
    LoggingSystem_Log(
      LOG_ENTITY_SYSTEM,
      2,
      "Bad key for entity \"%s\": Invalid parsed value for field \"%s\" of type '%s' ('%s')!\n",
      DebugName,
      value,
      "6Vector",
      pBuf);
  }
  return 0;
}


// AssignKeyValue<Vector>  (line 295, @0x0000000003092bb0, libserver.so)  // inlines: AssignTo, operator=
// calls: V_sscanf, AssignKeyValue<Vector>, VariantFieldTypeName, Warning
// callers: CEntityClass::UnserializeKey
// strings: "No free conversion of %s variant to Vector right now\n"
bool __fastcall AssignKeyValue<Vector>(
        CEntityInstance *pEntity,
        Vector *pMemory,
        const CEntityVariant *const value,
        const char *pKeyName)
{
  __int16 m_type; // ax
  const char *v10; // rax

  m_type = value->m_type;
  if ( m_type == 3 )
    goto LABEL_5;
  if ( m_type <= 3 )
  {
    if ( m_type != 0 )
    {
LABEL_11:
      v10 = VariantFieldTypeName(m_type);
      Warning("No free conversion of %s variant to Vector right now\n", v10);
      return AssignKeyValue<Vector>(pEntity, value, pKeyName, pKeyName);
    }
  }
  else
  {
    if ( m_type != 30 )
    {
      if ( m_type == 39 )
      {
LABEL_5:
        *pMemory = *value->m_uint64;
        return 1;
      }
      goto LABEL_11;
    }
    if ( V_sscanf(value->m_uint64, "%g %g %g", pMemory, &pMemory->y, &pMemory->z) == 3 )
      return 1;
  }
  *pMemory = vec3_origin;
  return AssignKeyValue<Vector>(pEntity, value, pKeyName, pKeyName);
}


// AssignKeyValue<Quaternion>  (line 295, @0x0000000003092ca0, libserver.so)  // inlines: GetDebugName
// calls: CVariantBase<CEntityVariantAllocator>::AssignTo, LoggingSystem_IsChannelEnabled, CEntityIdentity::GetDebugName, LoggingSystem_Log, __stack_chk_fail
// callers: AssignKeyValue<Quaternion>
// strings: "10Quaternion", "Bad key for entity \"%s\": Invalid parsed value for field \"%s\" of type '%s' ('%s')!\n"
__int64 __fastcall AssignKeyValue<Quaternion>(
        CEntityInstance *pEntity,
        const CVariantBase<CEntityVariantAllocator> *pMemory,
        const CEntityVariant *const value,
        const char *pKeyName)
{
  const char *DebugName; // rax
  char pBuf[264]; // [rsp+10h] [rbp-130h] BYREF
  unsigned __int64 v9; // [rsp+118h] [rbp-28h]

  v9 = __readfsqword(0x28u);
  CVariantBase<CEntityVariantAllocator>::AssignTo(pMemory, pBuf, 0x104u);
  if ( LoggingSystem_IsChannelEnabled(LOG_ENTITY_SYSTEM, 2) != 0 )
  {
    DebugName = CEntityIdentity::GetDebugName(pEntity->m_pEntity);
    LoggingSystem_Log(
      LOG_ENTITY_SYSTEM,
      2,
      "Bad key for entity \"%s\": Invalid parsed value for field \"%s\" of type '%s' ('%s')!\n",
      DebugName,
      value,
      "10Quaternion",
      pBuf);
  }
  return 0;
}


// AssignKeyValue<Quaternion>  (line 295, @0x0000000003092d60, libserver.so)  // inlines: AssignTo, operator=
// calls: AngleQuaternion, V_sscanf, AssignKeyValue<Quaternion>, VariantFieldTypeName, Warning
// callers: CEntityClass::UnserializeKey
// strings: "%g %g %g %g", "No free conversion of %s variant to Quaternion right now\n"
bool __fastcall AssignKeyValue<Quaternion>(
        CEntityInstance *pEntity,
        Quaternion *pMemory,
        const CEntityVariant *const value,
        const char *pKeyName)
{
  __int16 m_type; // ax
  int v10; // eax
  const char *v11; // rax
  QAngle angles; // [rsp+0h] [rbp-30h] BYREF

  m_type = value->m_type;
  if ( m_type == 4 )
  {
    *pMemory = *value->m_uint64;
    return 1;
  }
  if ( m_type <= 4 )
  {
    if ( m_type != 0 )
    {
LABEL_13:
      v11 = VariantFieldTypeName(m_type);
      Warning("No free conversion of %s variant to Quaternion right now\n", v11);
      return AssignKeyValue<Quaternion>(pEntity, value, pKeyName, pKeyName);
    }
  }
  else
  {
    if ( m_type != 30 )
    {
      if ( m_type == 39 )
      {
        AngleQuaternion(value->m_pszString, pMemory);
        return 1;
      }
      goto LABEL_13;
    }
    v10 = V_sscanf(value->m_uint64, "%g %g %g %g", pMemory, &pMemory->y, &pMemory->z, &pMemory->w);
    if ( v10 == 4 )
      return 1;
    if ( v10 == 3 )
    {
      angles = *&pMemory->x;
      AngleQuaternion(&angles, pMemory);
      return 1;
    }
  }
  *pMemory = quat_identity;
  return AssignKeyValue<Quaternion>(pEntity, value, pKeyName, pKeyName);
}


// CEntityClass::FindKeyToUnserialize  (line 336, @0x0000000003092380, libserver.so)  // inlines: Find, GetBool, GetInt, GetName, operator[]
// calls: LoggingSystem_IsChannelEnabled, CUtlString::Get, LoggingSystem_Log
// callers: CEntityClass::Unserialize
// strings: " [procedural] ", " [removed w META_REMOVE] ", "\tRead %s\t%s%s%s,\tPtr 0x%p\n"
// globals: LOG_ENTITY_LOAD_UNSERIALIZE
bool __fastcall CEntityClass::FindKeyToUnserialize(
        CEntityClass *const this,
        void *pBase,
        const ComponentUnserializerClassInfo_t *pInfo,
        EntityKeyId_t id,
        void **ppFoundFieldMemory,
        const ComponentUnserializerFieldInfo_t **ppFoundFieldInfo)
{
  _DWORD **v10; // rcx
  _DWORD *v11; // rdx
  _DWORD *v12; // rax
  _DWORD *v13; // rbx
  int m_Size; // r15d
  __int64 v16; // rax
  unsigned __int64 v17; // r15
  unsigned __int16 v18; // cx
  const char *v19; // r9
  char *v20; // r12
  const char *v21; // r15
  const char *v22; // rax
  __int64 v23; // [rsp+10h] [rbp-50h]
  __int64 v24; // [rsp+18h] [rbp-48h]
  const char *v25; // [rsp+18h] [rbp-48h]
  const char *thisb; // [rsp+20h] [rbp-40h]

  v23 = 16 * ((id.m_nHashCode & 0xF) + 4LL);
  do
  {
    *ppFoundFieldMemory = 0;
    *ppFoundFieldInfo = 0;
    v10 = (&pInfo->m_atomicFields + v23);
    v11 = *v10;
    if ( *v10 != 0 )
    {
      if ( *v11 == id.m_nHashCode )
      {
        v12 = *v10;
        goto LABEL_12;
      }
      v12 = *v10;
      while ( 1 )
      {
        v12 = *(v12 + 1);
        if ( v12 == 0 )
          break;
        if ( *v12 == id.m_nHashCode )
          goto LABEL_12;
      }
    }
    v12 = *(&pInfo->m_atomicFields.m_EntryMemory.m_GrowMode + v23);
    if ( v12 != 0 && v11 != v12 )
    {
      while ( *v12 != id.m_nHashCode )
      {
        v12 = *(v12 + 1);
        if ( v11 == v12 )
          goto LABEL_17;
      }
LABEL_12:
      v13 = v12;
      if ( entity_log_load_unserialize.m_pParent->m_Value.m_nValue != 0
        && LoggingSystem_IsChannelEnabled(LOG_ENTITY_LOAD_UNSERIALIZE, 1) != 0 )
      {
        v18 = *(v13 + 20);
        v19 = " [procedural] ";
        v20 = pBase + v18;
        v21 = " [removed w META_REMOVE] ";
        thisb = *(v13 + 3);
        if ( (*(v13 + 43) & 4) == 0 )
          v21 = "";
        if ( v18 != 0xFFFF )
          v19 = "";
        v25 = v19;
        v22 = CUtlString::Get((*(v13 + 2) + 8LL));
        LoggingSystem_Log(LOG_ENTITY_LOAD_UNSERIALIZE, 1, "\tRead %s\t%s%s%s,\tPtr 0x%p\n", v22, thisb, v25, v21, v20);
      }
      if ( *(v13 + 20) != 0xFFFF && (*(v13 + 43) & 4) == 0 )
      {
        *ppFoundFieldInfo = (v13 + 4);
        *ppFoundFieldMemory = pBase + *(v13 + 20);
      }
      return 1;
    }
LABEL_17:
    m_Size = pInfo->m_ptrFields.m_Size;
    if ( m_Size > 0 )
    {
      v16 = (m_Size - 1) + 1LL;
      v17 = 0;
      v24 = 16 * v16;
      while ( !CEntityClass::FindKeyToUnserialize(
                 this,
                 *(pBase + pInfo->m_ptrFields.m_Memory.m_pMemory[v17 / 0x10].m_nOffset),
                 pInfo->m_ptrFields.m_Memory.m_pMemory[v17 / 0x10].m_pClassInfo,
                 id,
                 ppFoundFieldMemory,
                 ppFoundFieldInfo) )
      {
        v17 += 16LL;
        if ( v17 == v24 )
          goto LABEL_22;
      }
      return 1;
    }
LABEL_22:
    pInfo = pInfo->m_pBaseClassUnserializer;
  }
  while ( pInfo != 0 );
  return 0;
}


// CEntityClass::UnserializeKey  (line 395, @0x0000000003093ed0, libserver.so)  // inlines: As<CSchemaType_Atomic>, As<CSchemaType_Builtin>, As<CSchemaType_DeclaredEnum>, As<CSchemaType_FixedArray>, AssignIntegerKeyValue<char>, AssignIntegerKeyValue<short int>, AssignIntegerKeyValue<short unsigned int>, AssignIntegerKeyValue<signed char>, AssignIntegerKeyValue<unsigned char>, AssignKeyValue<CUtlString>, AssignKeyValue<CUtlStringToken>, AssignKeyValue<QAngle>, AssignKeyValue<Vector2D>, AssignKeyValue<Vector4D>, AssignKeyValue<bool>, AssignKeyValue<double>, AssignKeyValue<float>, AssignKeyValue<int>, AssignKeyValue<long long int>, AssignKeyValue<long long unsigned int>, AssignKeyValue<unsigned int>, AssignTo, AssignTo<double>, AssignTo<long long int>, AssignTo<long long unsigned int>, CUtlMemory, CUtlVector, CUtlVectorBase, CVariantBase, Count, Free, GetBool, GetColumn, GetCurrentEntityResourceManifest, GetDebugName, GetEntityNameAsCStr, GetEnum, GetInt, GetName, Init, InternalAs, IsPresent, IsResourceStrongHandle, LeafCodeInfo_t, LookupEnum, MakeStringToken, MatrixGetColumn, MatrixSetColumn, Min<long long unsigned int>, Min<unsigned int>, Purge, QuaternionMatrix, RadianEuler, RemoveAll, SetColumn, String, TempString, ThreadInterlockedIncrement, ToQAngle, ToString, V_isdigit, V_strlen, VariantFieldTypeName, VectorRotate, VectorTransform, _V_strcmp, atof, atoi, matrix3x4a_t, memcpy, name, operator++, operator=, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: SchemaTypeOf<Vector>, SchemaTypeOf<Quaternion>, SchemaTypeOf<QAngle>, LoggingSystem_IsChannelEnabled, CUtlString::Get, CEntityIdentity::GetDebugName, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...), strcmp, Warning, CVariantBase<CEntityVariantAllocator>::AssignTo, LoggingSystem_Log, SchemaTypeOf<long long int> (60 total)
// callers: CEntityClass::Unserialize
// strings: "entityclass.cpp", "UnserializeKey", "Bad key for entity \"%s\": Invalid parsed value type for matrix field \"%s\" (%s)!\n", "false", "true", "Invalid conversion : CString '%s' to bool\n" (40 total)
// globals: jpt_309425D, LOG_ENTITY_LOAD_UNSERIALIZE, CVariantBase<CEntityVariantAllocator>::ToString(void)::szBuf, jpt_30945E4, jpt_3094643, jpt_3094708, jpt_30947CD, jpt_309482C (12 total)
// local variable allocation has failed, the output may be wrong!
bool __fastcall CEntityClass::UnserializeKey(
        CEntityClass *const this,
        const CEntityClass::UnserializationContext_t *const context,
        CEntityInstance *pEntity,
        void *pFieldMemory,
        const ComponentUnserializerFieldInfo_t *pFieldInfo,
        const CEntityVariant *const value)
{
  const char *m_pName; // rax
  const CUtlString *m_pType; // r14
  CSchemaType *v11; // r15
  char v12; // r15
  const char *v13; // r12
  const char *v14; // rax
  const char *v15; // rbx
  const char *v16; // r13
  const char *v17; // rax
  __int64 v19; // r10
  unsigned int v20; // edx
  CSchemaType *v21; // rax
  const CSchemaEnumInfo *v22; // r10
  int v23; // eax
  __int64 v24; // rsi
  const CUtlString *v25; // rdx
  int m_pString; // eax
  int16 m_type; // ax
  IEntityResourceManifest *m_pCurrentManifest; // r14
  void (__fastcall *v29)(IEntityResourceManifest *, char *); // r15
  char *m_uint64; // rsi
  int16 v31; // ax
  ResourceType_t m_resourceType; // r14
  IResourceSystem *v33; // rdi
  __int64 (__fastcall *v34)(IResourceSystem *, char *, ResourceType_t, _QWORD); // r15
  char *v35; // rsi
  uint64 v36; // r14
  uint64 v37; // rsi
  const char *v38; // r14
  ResourceType_t v39; // rbx
  const char *v40; // rcx
  CSchemaType *v41; // rax
  const char *v42; // r15
  const CSchemaEnumeratorInfo *MemberByName; // rax
  const CSchemaEnumInfo *v44; // r10
  char IsChannelEnabled; // al
  const char *v46; // r8
  int16 v47; // ax
  int16 v48; // ax
  float v49; // eax
  int v50; // edx
  int16 v51; // ax
  float v52; // eax
  int v53; // edx
  int16 v54; // ax
  int16 v55; // ax
  int16 v56; // ax
  float v57; // eax
  int v58; // edx
  float v59; // eax
  int v60; // edx
  int16 v61; // ax
  float v62; // eax
  int v63; // edx
  const char *DebugName; // rax
  uint64 v65; // rax
  const char *v66; // r13
  const char *v67; // rax
  int v68; // eax
  uint64 v69; // rdx
  uint64 v70; // rax
  int m_int; // eax
  const char *v72; // r13
  const char *v73; // rax
  float v74; // xmm0_4
  __m128d v75; // xmm0
  const char *v76; // r13
  const char *v77; // rax
  const char *v78; // rax
  const char *v79; // rax
  const char *v80; // rax
  const char *v81; // rax
  const char *v82; // rax
  const char *v83; // r13
  const char *v84; // rax
  const char *v85; // rax
  const char *v86; // r13
  const char *v87; // rax
  const char *v88; // rax
  const char *v89; // r13
  const char *v90; // rax
  double m_float64; // xmm0_8
  double m_char; // xmm0_8
  float m_float; // xmm0_4
  CSchemaType *v94; // rax
  CSchemaType *v95; // rax
  const char *v96; // r12
  const char *v97; // rax
  const char *v98; // rax
  CSchemaType *v99; // r15
  unsigned int v100; // edx
  const char **m_pImplElements; // rax
  __int64 v102; // r9
  const char *m_pAsString; // r9
  CEntityIdentity *m_pEntity; // rax
  bool v105; // al
  vec_t v106; // xmm1_4
  vec_t v107; // xmm2_4
  unsigned int v108; // edx
  const char **v109; // rax
  __int64 v110; // r9
  int v111; // eax
  int v112; // esi
  bool v113; // r13
  const char *v114; // rax
  const char *v115; // rax
  vec_t v116; // xmm2_4
  vec_t v117; // xmm0_4
  float v118; // xmm2_4
  float v119; // xmm0_4
  vec_t v120; // xmm1_4
  vec_t v121; // xmm2_4
  int v122; // esi
  int16 v123; // ax
  uint64 v124; // rax
  int16 v125; // ax
  _DWORD *v126; // rdi
  int16 v127; // ax
  const char *v128; // rax
  const char *v129; // rax
  __int64 v130; // rdx
  const char *v131; // rax
  const char *v132; // rax
  int16 v133; // ax
  int16 v134; // ax
  const char *v135; // rax
  _BYTE *v136; // rbx
  uint32 v137; // r13d
  const char *v138; // rax
  _DWORD *v139; // rax
  const char *v140; // rsi
  const char *v141; // rsi
  const char *v142; // rax
  __int64 v143; // rdx
  bool bFieldNeedsRotationToWorldSpace; // [rsp+Fh] [rbp-1F1h]
  const CEntityVariant *pValue; // [rsp+10h] [rbp-1F0h]
  const CEntityVariant *pValuea; // [rsp+10h] [rbp-1F0h]
  const CEntityVariant *pValueb; // [rsp+10h] [rbp-1F0h]
  const CSchemaEnumInfo *pValuec; // [rsp+10h] [rbp-1F0h]
  const CEntityVariant *pValued; // [rsp+10h] [rbp-1F0h]
  const CEntityVariant *pValuee; // [rsp+10h] [rbp-1F0h]
  const CEntityVariant *pValuef; // [rsp+10h] [rbp-1F0h]
  const CEntityVariant *pValueg; // [rsp+10h] [rbp-1F0h]
  const char *pFieldName; // [rsp+18h] [rbp-1E8h]
  const CEntityClass::UnserializationContext_t *contextb; // [rsp+28h] [rbp-1D8h]
  Vector org; // [rsp+30h] [rbp-1D0h] BYREF
  CEntityVariant enumValue; // [rsp+40h] [rbp-1C0h] BYREF
  QAngle ang; // [rsp+50h] [rbp-1B0h] BYREF
  vec_t w; // [rsp+5Ch] [rbp-1A4h]
  matrix3x4a_t mat; // [rsp+60h] [rbp-1A0h] BYREF
  matrix3x4_t stringValue; // [rsp+90h] [rbp-170h] OVERLAPPED BYREF
  char pBuf[264]; // [rsp+C0h] [rbp-140h] BYREF
  unsigned __int64 v164; // [rsp+1C8h] [rbp-38h]

  v164 = __readfsqword(0x28u);
  if ( pFieldInfo == 0 )
    return 1;
  m_pName = pFieldInfo->m_pName;
  enumValue.m_uint64 = 0;
  m_pType = pFieldInfo->m_pType;
  pFieldName = m_pName;
  enumValue.m_type = 0;
  enumValue.m_flags = 0;
  if ( (*m_pType->m_pString)(m_pType) == 4 )
  {
    v23 = (*m_pType->m_pString)(m_pType);
    v25 = 0;
    if ( v23 == 4 )
    {
      (*(m_pType->m_pString + 6))(m_pType, v24, 0);
      v25 = m_pType;
    }
    m_pString = v25[8].m_pString;
    if ( (m_pString - 4007) <= 2 || m_pString == 4000 )
    {
      if ( context->m_bIsPrecaching )
      {
        m_type = value->m_type;
        if ( m_type == 28 )
          goto LABEL_63;
        m_pCurrentManifest = g_pEntitySystem->m_pCurrentManifest;
        v29 = **m_pCurrentManifest;
        if ( m_type == 30 )
        {
          m_uint64 = value->m_uint64;
        }
        else
        {
          CVariantBase<CEntityVariantAllocator>::AssignTo(
            value,
            &CVariantBase<CEntityVariantAllocator>::ToString(void)const::szBuf,
            0x200u);
          m_uint64 = &CVariantBase<CEntityVariantAllocator>::ToString(void)const::szBuf;
        }
        v29(m_pCurrentManifest, m_uint64);
      }
      v31 = value->m_type;
      if ( v31 != 28 )
      {
        m_resourceType = pFieldInfo->m_resourceType;
        v33 = g_pResourceSystem;
        v34 = *(*g_pResourceSystem + 256LL);
        if ( v31 == 30 )
        {
          v35 = value->m_uint64;
        }
        else
        {
          CVariantBase<CEntityVariantAllocator>::AssignTo(
            value,
            &CVariantBase<CEntityVariantAllocator>::ToString(void)const::szBuf,
            0x200u);
          v35 = &CVariantBase<CEntityVariantAllocator>::ToString(void)const::szBuf;
          v33 = g_pResourceSystem;
        }
        v36 = v34(v33, v35, m_resourceType, 0);
        goto LABEL_49;
      }
LABEL_63:
      v36 = value->m_uint64;
LABEL_49:
      if ( *pFieldMemory != 0 )
        CStrongHandle<ResourceBindingVoid_t>::Shutdown(pFieldMemory);
      *pFieldMemory = v36;
      if ( v36 != 0 )
      {
        v37 = v36;
        if ( (*(v36 + 16) & 0x20) != 0 )
        {
          (*(*g_pResourceHandleUtils + 24LL))(g_pResourceHandleUtils, v36, 2, pFieldMemory);
          v37 = *pFieldMemory;
        }
        _InterlockedAdd((v37 + 24), 1u);
      }
      if ( entity_log_load_unserialize.m_pParent->m_Value.m_nValue != 0
        && LoggingSystem_IsChannelEnabled(LOG_ENTITY_LOAD_UNSERIALIZE, 1) != 0 )
      {
        v38 = "";
        v39 = pFieldInfo->m_resourceType;
        if ( *pFieldMemory == 0 )
          v38 = " NOT";
        if ( value->m_type == 30 )
        {
          v40 = value->m_uint64;
        }
        else
        {
          CVariantBase<CEntityVariantAllocator>::AssignTo(
            value,
            &CVariantBase<CEntityVariantAllocator>::ToString(void)const::szBuf,
            0x200u);
          v40 = &CVariantBase<CEntityVariantAllocator>::ToString(void)const::szBuf;
        }
        LoggingSystem_Log(
          LOG_ENTITY_LOAD_UNSERIALIZE,
          1,
          "             ( Resource \"%s type %lld\", handle is%s valid\n",
          v40,
          v39,
          v38);
      }
      return 1;
    }
  }
  v11 = pFieldInfo->m_pType;
  if ( (**pFieldInfo->m_pType)(pFieldInfo->m_pType) == 6 && (*(*v11 + 48LL))(v11) == 4 )
  {
    v19 = *(v11 + 6);
    if ( v19 != 0
      || (pValueg = *(**(v11 + 5) + 288LL),
          v98 = CUtlString::Get(v11 + 1),
          (pValueg)(*(v11 + 5), v11 + 48, v98),
          (v19 = *(v11 + 6)) != 0) )
    {
      v20 = *(v19 + 24);
      if ( v20 == 2 )
      {
        pValuef = v19;
        if ( *(v19 + 112) >= 0 )
          v95 = SchemaTypeOf<unsigned short>();
        else
          v95 = SchemaTypeOf<short>();
        v22 = pValuef;
        m_pType = v95;
      }
      else
      {
        if ( v20 <= 2 )
        {
          if ( v20 == 1 )
          {
            pValueb = v19;
            if ( *(v19 + 112) >= 0 )
              v41 = SchemaTypeOf<unsigned char>();
            else
              v41 = SchemaTypeOf<signed char>();
            v22 = pValueb;
            m_pType = v41;
            goto LABEL_69;
          }
        }
        else
        {
          if ( v20 == 4 )
          {
            pValuee = v19;
            if ( *(v19 + 112) >= 0 )
              v94 = SchemaTypeOf<unsigned int>();
            else
              v94 = SchemaTypeOf<int>();
            v22 = pValuee;
            m_pType = v94;
            goto LABEL_69;
          }
          if ( v20 == 8 )
          {
            pValuea = v19;
            if ( *(v19 + 112) >= 0 )
              v21 = SchemaTypeOf<unsigned long long>();
            else
              v21 = SchemaTypeOf<long long>();
            v22 = pValuea;
            m_pType = v21;
            goto LABEL_69;
          }
        }
        m_pType = 0;
        pValued = v19;
        IsChannelEnabled = LoggingSystem_IsChannelEnabled(LOG_ENTITY_SYSTEM, 4);
        v22 = pValued;
        if ( IsChannelEnabled != 0 )
        {
          v46 = pValued->m_uint64;
          *&stringValue.m_flMatVal[0][0] = "entityclass.cpp";
          *&stringValue.m_flMatVal[1][0] = "UnserializeKey";
          LODWORD(stringValue.m_flMatVal[0][2]) = 451;
          LoggingSystem_Log(
            LOG_ENTITY_SYSTEM,
            LoggingSeverity_t::LS_ERROR,
            &stringValue,
            "Encountered enum type %s (field \"%s\") that is not stored in 1,2,4, or 8 bytes!\n",
            v46,
            pFieldName);
          v22 = pValued;
        }
      }
LABEL_69:
      pValue = value;
      if ( value->m_type != 30 )
        goto LABEL_6;
      v42 = value->m_uint64;
      pValuec = v22;
      MemberByName = CSchemaEnumInfo::FindMemberByName(v22, value->m_pszString);
      v44 = pValuec;
      if ( MemberByName != 0 )
      {
LABEL_71:
        enumValue.m_uint64 = MemberByName->m_nValue;
        enumValue.m_type = 26;
        pValue = &enumValue;
        goto LABEL_6;
      }
      if ( (*v42 - 48) <= 9u )
      {
        v111 = strtol(v42, 0, 10);
        MemberByName = CSchemaEnumInfo::FindMemberByValue(pValuec, v111);
        v44 = pValuec;
      }
      else
      {
        v100 = abs32(pValuec->m_Metadata.m_StaticEntries.m_Data.m_nImplLength);
        if ( v100 != 0 )
        {
          m_pImplElements = pValuec->m_Metadata.m_StaticEntries.m_Data.m_pImplElements;
          v102 = &m_pImplElements[4 * v100];
          while ( strcmp(*m_pImplElements, "MTreatUnknownEnumeratorsAsZero") != 0 )
          {
            m_pImplElements += 4;
            if ( m_pImplElements == v102 )
              goto LABEL_261;
          }
        }
        else
        {
LABEL_261:
          v108 = abs32(pValuec->m_Metadata.m_DynamicEntries.m_Data.m_nImplLength);
          if ( v108 == 0 )
            goto LABEL_242;
          v109 = pValuec->m_Metadata.m_DynamicEntries.m_Data.m_pImplElements;
          v110 = &v109[4 * v108];
          while ( strcmp(*v109, "MTreatUnknownEnumeratorsAsZero") != 0 )
          {
            v109 += 4;
            if ( v109 == v110 )
              goto LABEL_242;
          }
        }
        MemberByName = CSchemaEnumInfo::FindMemberByValue(pValuec, 0);
        v44 = pValuec;
      }
      if ( MemberByName != 0 )
        goto LABEL_71;
LABEL_242:
      contextb = v44;
      if ( LoggingSystem_IsChannelEnabled(LOG_ENTITY_SYSTEM, 2) != 0 )
      {
        m_pAsString = "";
        m_pEntity = pEntity->m_pEntity;
        if ( m_pEntity->m_name.u.m_Id != 0 )
          m_pAsString = m_pEntity->m_name.u.m_pAsString;
        LoggingSystem_Log(
          LOG_ENTITY_SYSTEM,
          2,
          "Encountered bad enum value \"%s\" for type %s, entity \"%s\" field \"%s\"!\n",
          v42,
          *&contextb->m_bIsPrecaching,
          m_pAsString,
          pFieldName);
      }
      return 1;
    }
  }
  pValue = value;
LABEL_6:
  if ( (*m_pType->m_pString)(m_pType) == 0 && (*(m_pType->m_pString + 6))(m_pType) == 4 )
  {
    switch ( LODWORD(m_pType[6].m_pString) )
    {
      case 2:
        if ( CVariantBase<CEntityVariantAllocator>::AssignTo(pValue, &stringValue) )
        {
          v52 = stringValue.m_flMatVal[0][0];
          v53 = SLOBYTE(stringValue.m_flMatVal[0][0]);
          *pFieldMemory = LOBYTE(stringValue.m_flMatVal[0][0]);
          if ( LODWORD(v52) != v53 )
          {
            CVariantBase<CEntityVariantAllocator>::AssignTo(pValue, pBuf, 0x104u);
            if ( LoggingSystem_IsChannelEnabled(LOG_ENTITY_SYSTEM, 2) != 0 )
              goto LABEL_116;
          }
        }
        else
        {
          CVariantBase<CEntityVariantAllocator>::AssignTo(pValue, pBuf, 0x104u);
          if ( LoggingSystem_IsChannelEnabled(LOG_ENTITY_SYSTEM, 2) != 0 )
            goto LABEL_283;
        }
        break;
      case 3:
        if ( CVariantBase<CEntityVariantAllocator>::AssignTo(pValue, &stringValue) )
        {
          v49 = stringValue.m_flMatVal[0][0];
          v50 = SLOBYTE(stringValue.m_flMatVal[0][0]);
          *pFieldMemory = LOBYTE(stringValue.m_flMatVal[0][0]);
          if ( LODWORD(v49) != v50 )
          {
            CVariantBase<CEntityVariantAllocator>::AssignTo(pValue, pBuf, 0x104u);
            if ( LoggingSystem_IsChannelEnabled(LOG_ENTITY_SYSTEM, 2) != 0 )
              goto LABEL_116;
          }
        }
        else
        {
          CVariantBase<CEntityVariantAllocator>::AssignTo(pValue, pBuf, 0x104u);
          if ( LoggingSystem_IsChannelEnabled(LOG_ENTITY_SYSTEM, 2) != 0 )
            goto LABEL_283;
        }
        break;
      case 4:
        if ( CVariantBase<CEntityVariantAllocator>::AssignTo(pValue, &stringValue) )
        {
          v59 = stringValue.m_flMatVal[0][0];
          v60 = LOBYTE(stringValue.m_flMatVal[0][0]);
          *pFieldMemory = LOBYTE(stringValue.m_flMatVal[0][0]);
          if ( LODWORD(v59) != v60 )
          {
            CVariantBase<CEntityVariantAllocator>::AssignTo(pValue, pBuf, 0x104u);
            if ( LoggingSystem_IsChannelEnabled(LOG_ENTITY_SYSTEM, 2) != 0 )
              goto LABEL_116;
          }
        }
        else
        {
          CVariantBase<CEntityVariantAllocator>::AssignTo(pValue, pBuf, 0x104u);
          if ( LoggingSystem_IsChannelEnabled(LOG_ENTITY_SYSTEM, 2) != 0 )
            goto LABEL_283;
        }
        break;
      case 5:
        if ( CVariantBase<CEntityVariantAllocator>::AssignTo(pValue, &stringValue) )
        {
          v57 = stringValue.m_flMatVal[0][0];
          v58 = SLOWORD(stringValue.m_flMatVal[0][0]);
          *pFieldMemory = LOWORD(stringValue.m_flMatVal[0][0]);
          if ( LODWORD(v57) != v58 )
          {
            CVariantBase<CEntityVariantAllocator>::AssignTo(pValue, pBuf, 0x104u);
            if ( LoggingSystem_IsChannelEnabled(LOG_ENTITY_SYSTEM, 2) != 0 )
              goto LABEL_116;
          }
        }
        else
        {
          CVariantBase<CEntityVariantAllocator>::AssignTo(pValue, pBuf, 0x104u);
          if ( LoggingSystem_IsChannelEnabled(LOG_ENTITY_SYSTEM, 2) != 0 )
            goto LABEL_283;
        }
        break;
      case 6:
        if ( CVariantBase<CEntityVariantAllocator>::AssignTo(pValue, &stringValue) )
        {
          v62 = stringValue.m_flMatVal[0][0];
          v63 = LOWORD(stringValue.m_flMatVal[0][0]);
          *pFieldMemory = LOWORD(stringValue.m_flMatVal[0][0]);
          if ( LODWORD(v62) != v63 )
          {
            CVariantBase<CEntityVariantAllocator>::AssignTo(pValue, pBuf, 0x104u);
            if ( LoggingSystem_IsChannelEnabled(LOG_ENTITY_SYSTEM, 2) != 0 )
            {
LABEL_116:
              DebugName = CEntityIdentity::GetDebugName(pEntity->m_pEntity);
              LoggingSystem_Log(
                LOG_ENTITY_SYSTEM,
                2,
                "Bad key for entity \"%s\": Out of range parsed value for field \"%s\" (%s)!\n",
                DebugName,
                pFieldName,
                pBuf);
            }
          }
        }
        else
        {
          CVariantBase<CEntityVariantAllocator>::AssignTo(pValue, pBuf, 0x104u);
          if ( LoggingSystem_IsChannelEnabled(LOG_ENTITY_SYSTEM, 2) != 0 )
            goto LABEL_283;
        }
        break;
      case 7:
        v54 = pValue->m_type;
        switch ( v54 )
        {
          case 0:
            *pFieldMemory = 0;
            goto LABEL_147;
          case 1:
            *pFieldMemory = pValue->m_float;
            return 1;
          case 5:
            goto LABEL_119;
          case 6:
            goto LABEL_120;
          case 26:
            LODWORD(v69) = 0x7FFFFFFF;
            if ( pValue->m_int64 <= 0x7FFFFFFF )
            {
              LODWORD(v69) = 0x80000000;
              if ( pValue->m_uint64 >= 0xFFFFFFFF80000000LL )
                v69 = pValue->m_uint64;
            }
            goto LABEL_136;
          case 30:
            *pFieldMemory = strtol(pValue->m_pszString, 0, 10);
            return 1;
          case 33:
            LODWORD(v70) = 0x7FFFFFFF;
            if ( pValue->m_uint64 <= 0x7FFFFFFE )
              v70 = pValue->m_uint64;
            *pFieldMemory = v70;
            return 1;
          case 34:
            *pFieldMemory = pValue->m_float64;
            return 1;
          case 37:
            m_int = 0x7FFFFFFF;
            if ( pValue->m_int <= 0x7FFFFFFEu )
              m_int = pValue->m_int;
            *pFieldMemory = m_int;
            return 1;
          default:
            v79 = VariantFieldTypeName(v54);
            Warning("No conversion from %s to int now\n", v79);
LABEL_147:
            CVariantBase<CEntityVariantAllocator>::AssignTo(pValue, pBuf, 0x104u);
            if ( LoggingSystem_IsChannelEnabled(LOG_ENTITY_SYSTEM, 2) != 0 )
            {
              v72 = (*(&`typeinfo for'int + 1) + (**(&`typeinfo for'int + 1) == 42));
              v73 = CEntityIdentity::GetDebugName(pEntity->m_pEntity);
              LoggingSystem_Log(
                LOG_ENTITY_SYSTEM,
                2,
                "Bad key for entity \"%s\": Invalid parsed value for field \"%s\" of type '%s' ('%s')!\n",
                v73,
                pFieldName,
                v72,
                pBuf);
            }
            break;
        }
        break;
      case 8:
        v56 = pValue->m_type;
        switch ( v56 )
        {
          case 0:
            *pFieldMemory = 0;
            goto LABEL_126;
          case 5:
            LODWORD(v65) = pValue->m_int;
            if ( pValue->m_int >= 0 )
              goto LABEL_124;
            goto LABEL_126;
          case 6:
LABEL_120:
            *pFieldMemory = pValue->m_char;
            return 1;
          case 26:
            LODWORD(v65) = -1;
            if ( pValue->m_int64 <= 0xFFFFFFFFLL )
            {
              LODWORD(v65) = 0;
              if ( pValue->m_int64 >= 0 )
                v65 = pValue->m_uint64;
            }
            goto LABEL_124;
          case 30:
            *pFieldMemory = strtoul(pValue->m_pszString, &stringValue, 10);
            return 1;
          case 33:
            v68 = -1;
            if ( pValue->m_uint64 <= 0xFFFFFFFE )
              v68 = pValue->m_uint64;
            *pFieldMemory = v68;
            return 1;
          case 37:
            goto LABEL_119;
          default:
            v78 = VariantFieldTypeName(v56);
            Warning("No conversion from %s to uint now\n", v78);
LABEL_126:
            CVariantBase<CEntityVariantAllocator>::AssignTo(pValue, pBuf, 0x104u);
            if ( LoggingSystem_IsChannelEnabled(LOG_ENTITY_SYSTEM, 2) != 0 )
            {
              v66 = (*(&`typeinfo for'unsigned int + 1) + (**(&`typeinfo for'unsigned int + 1) == 42));
              v67 = CEntityIdentity::GetDebugName(pEntity->m_pEntity);
              LoggingSystem_Log(
                LOG_ENTITY_SYSTEM,
                2,
                "Bad key for entity \"%s\": Invalid parsed value for field \"%s\" of type '%s' ('%s')!\n",
                v67,
                pFieldName,
                v66,
                pBuf);
            }
            break;
        }
        break;
      case 9:
        v55 = pValue->m_type;
        if ( v55 == 26 )
          goto LABEL_170;
        if ( (v55 & 0xFFFD) == 0x19 || (v55 - 3) <= 1u || v55 == 39 || v55 == 30 )
        {
          v85 = VariantFieldTypeName(v55);
          Warning("No free conversion of %s variant to %s right now\n", v85, "int64");
LABEL_176:
          *pFieldMemory = 0;
LABEL_177:
          CVariantBase<CEntityVariantAllocator>::AssignTo(pValue, pBuf, 0x104u);
          if ( LoggingSystem_IsChannelEnabled(LOG_ENTITY_SYSTEM, 2) != 0 )
          {
            v86 = (*(&`typeinfo for'long long + 1) + (**(&`typeinfo for'long long + 1) == 42));
            v87 = CEntityIdentity::GetDebugName(pEntity->m_pEntity);
            LoggingSystem_Log(
              LOG_ENTITY_SYSTEM,
              2,
              "Bad key for entity \"%s\": Invalid parsed value for field \"%s\" of type '%s' ('%s')!\n",
              v87,
              pFieldName,
              v86,
              pBuf);
          }
        }
        else
        {
          switch ( v55 )
          {
            case 0:
              goto LABEL_176;
            case 1:
              *pFieldMemory = pValue->m_float;
              break;
            case 5:
              goto LABEL_186;
            case 6:
              goto LABEL_185;
            case 8:
              goto LABEL_184;
            case 33:
              goto LABEL_170;
            case 34:
              *pFieldMemory = pValue->m_float64;
              break;
            case 37:
              goto LABEL_187;
            default:
              goto LABEL_177;
          }
        }
        break;
      case 0xA:
        v61 = pValue->m_type;
        if ( v61 == 33 )
        {
LABEL_170:
          *pFieldMemory = pValue->m_uint64;
        }
        else if ( (v61 & 0xFFFD) == 0x19 || (v61 - 3) <= 1u || v61 == 39 || v61 == 30 )
        {
          v88 = VariantFieldTypeName(v61);
          Warning("No free conversion of %s variant to %s right now\n", v88, "uint64");
LABEL_180:
          *pFieldMemory = 0;
LABEL_181:
          CVariantBase<CEntityVariantAllocator>::AssignTo(pValue, pBuf, 0x104u);
          if ( LoggingSystem_IsChannelEnabled(LOG_ENTITY_SYSTEM, 2) != 0 )
          {
            v89 = (*(&`typeinfo for'unsigned long long + 1) + (**(&`typeinfo for'unsigned long long + 1) == 42));
            v90 = CEntityIdentity::GetDebugName(pEntity->m_pEntity);
            LoggingSystem_Log(
              LOG_ENTITY_SYSTEM,
              2,
              "Bad key for entity \"%s\": Invalid parsed value for field \"%s\" of type '%s' ('%s')!\n",
              v90,
              pFieldName,
              v89,
              pBuf);
          }
        }
        else
        {
          switch ( v61 )
          {
            case 0:
              goto LABEL_180;
            case 1:
              m_float = pValue->m_float;
              if ( pValue->m_float >= 9.223372e18 )
              {
                *pFieldMemory = (m_float - 9.223372e18);
                *pFieldMemory ^= 0x8000000000000000LL;
              }
              else
              {
                *pFieldMemory = m_float;
              }
              break;
            case 5:
LABEL_186:
              *pFieldMemory = pValue->m_int;
              break;
            case 6:
LABEL_185:
              *pFieldMemory = pValue->m_char;
              break;
            case 8:
LABEL_184:
              *pFieldMemory = pValue->m_char;
              break;
            case 26:
              goto LABEL_170;
            case 34:
              m_float64 = pValue->m_float64;
              if ( pValue->m_float64 >= 9.223372036854776e18 )
              {
                *pFieldMemory = (m_float64 - 9.223372036854776e18);
                *pFieldMemory ^= 0x8000000000000000LL;
              }
              else
              {
                *pFieldMemory = m_float64;
              }
              break;
            case 37:
LABEL_187:
              *pFieldMemory = pValue->m_uint;
              break;
            default:
              goto LABEL_181;
          }
        }
        break;
      case 0xB:
        v51 = pValue->m_type;
        switch ( v51 )
        {
          case 0:
            *pFieldMemory = 0;
            goto LABEL_160;
          case 1:
            *pFieldMemory = pValue->m_int;
            return 1;
          case 5:
            v74 = pValue->m_int;
            goto LABEL_153;
          case 6:
            *pFieldMemory = pValue->m_char;
            return 1;
          case 26:
            *pFieldMemory = pValue->m_uint64;
            return 1;
          case 30:
            v75.m128d_f64[0] = strtod(pValue->m_pszString, 0);
            *pFieldMemory = _mm_movedup_pd(v75).m128d_f64[0];
            return 1;
          case 33:
            if ( pValue->m_int64 < 0 )
            {
              v130 = pValue->m_uint64 & 1 | (pValue->m_uint64 >> 1);
              v74 = v130 + v130;
            }
            else
            {
              v74 = pValue->m_uint64;
            }
LABEL_153:
            *pFieldMemory = v74;
            break;
          case 34:
            *pFieldMemory = pValue->m_float64;
            break;
          case 37:
            *pFieldMemory = pValue->m_int;
            break;
          default:
            v81 = VariantFieldTypeName(v51);
            Warning("No conversion from %s to float now\n", v81);
LABEL_160:
            CVariantBase<CEntityVariantAllocator>::AssignTo(pValue, pBuf, 0x104u);
            if ( LoggingSystem_IsChannelEnabled(LOG_ENTITY_SYSTEM, 2) != 0 )
            {
              v76 = (*(&`typeinfo for'float + 1) + (**(&`typeinfo for'float + 1) == 42));
              v77 = CEntityIdentity::GetDebugName(pEntity->m_pEntity);
              LoggingSystem_Log(
                LOG_ENTITY_SYSTEM,
                2,
                "Bad key for entity \"%s\": Invalid parsed value for field \"%s\" of type '%s' ('%s')!\n",
                v77,
                pFieldName,
                v76,
                pBuf);
            }
            break;
        }
        break;
      case 0xC:
        v48 = pValue->m_type;
        if ( v48 == 34 )
        {
          *pFieldMemory = pValue->m_uint64;
        }
        else if ( (v48 & 0xFFFD) == 0x19 || (v48 - 3) <= 1u || v48 == 39 || v48 == 30 )
        {
          v82 = VariantFieldTypeName(v48);
          Warning("No free conversion of %s variant to %s right now\n", v82, "float64");
LABEL_172:
          *pFieldMemory = 0;
LABEL_173:
          CVariantBase<CEntityVariantAllocator>::AssignTo(pValue, pBuf, 0x104u);
          if ( LoggingSystem_IsChannelEnabled(LOG_ENTITY_SYSTEM, 2) != 0 )
          {
            v83 = (*(&`typeinfo for'double + 1) + (**(&`typeinfo for'double + 1) == 42));
            v84 = CEntityIdentity::GetDebugName(pEntity->m_pEntity);
            LoggingSystem_Log(
              LOG_ENTITY_SYSTEM,
              2,
              "Bad key for entity \"%s\": Invalid parsed value for field \"%s\" of type '%s' ('%s')!\n",
              v84,
              pFieldName,
              v83,
              pBuf);
          }
        }
        else
        {
          switch ( v48 )
          {
            case 0:
              goto LABEL_172;
            case 1:
              *pFieldMemory = pValue->m_float;
              return 1;
            case 5:
              *pFieldMemory = pValue->m_int;
              return 1;
            case 6:
              *pFieldMemory = pValue->m_char;
              return 1;
            case 8:
              m_char = pValue->m_char;
              goto LABEL_193;
            case 26:
              *pFieldMemory = pValue->m_uint64;
              return 1;
            case 33:
              if ( pValue->m_int64 < 0 )
              {
                v143 = pValue->m_uint64 & 1 | (pValue->m_uint64 >> 1);
                m_char = v143 + v143;
              }
              else
              {
                m_char = pValue->m_uint64;
              }
LABEL_193:
              *pFieldMemory = m_char;
              break;
            case 37:
              *pFieldMemory = pValue->m_int;
              break;
            default:
              goto LABEL_173;
          }
        }
        break;
      case 0xD:
        v47 = pValue->m_type;
        switch ( v47 )
        {
          case 0:
            *pFieldMemory = 0;
            goto LABEL_23;
          case 1:
            *pFieldMemory = pValue->m_float != 0.0;
            return 1;
          case 5:
          case 37:
            *pFieldMemory = pValue->m_int != 0;
            return 1;
          case 6:
            *pFieldMemory = pValue->m_char;
            return 1;
          case 26:
          case 33:
            *pFieldMemory = pValue->m_uint64 != 0;
            return 1;
          case 30:
            v15 = pValue->m_uint64;
            if ( strcmp(pValue->m_pszString, "0") == 0
              || strcmp(pValue->m_pszString, "false") == 0
              || strcmp(v15, "no") == 0 )
            {
              *pFieldMemory = 0;
            }
            else if ( strcmp(v15, "1") == 0 || strcmp(v15, "true") == 0 || strcmp(v15, "yes") == 0 )
            {
              *pFieldMemory = 1;
            }
            else
            {
              Warning("Invalid conversion : CString '%s' to bool\n", v15);
LABEL_23:
              CVariantBase<CEntityVariantAllocator>::AssignTo(pValue, pBuf, 0x104u);
              if ( LoggingSystem_IsChannelEnabled(LOG_ENTITY_SYSTEM, 2) != 0 )
              {
                v16 = (*(&`typeinfo for'bool + 1) + (**(&`typeinfo for'bool + 1) == 42));
                v17 = CEntityIdentity::GetDebugName(pEntity->m_pEntity);
                LoggingSystem_Log(
                  LOG_ENTITY_SYSTEM,
                  2,
                  "Bad key for entity \"%s\": Invalid parsed value for field \"%s\" of type '%s' ('%s')!\n",
                  v17,
                  pFieldName,
                  v16,
                  pBuf);
              }
            }
            break;
          case 34:
            *pFieldMemory = pValue->m_float64 != 0.0;
            return 1;
          default:
            v80 = VariantFieldTypeName(v47);
            Warning("No conversion from %s to bool now\n", v80);
            goto LABEL_23;
        }
        break;
      default:
        return 1;
    }
    return 1;
  }
  bFieldNeedsRotationToWorldSpace = 0;
  if ( context->m_bSpawnGroupHasRotation )
    bFieldNeedsRotationToWorldSpace = (pFieldInfo->m_keyTransformType - 1) <= 1u;
  v12 = *(pFieldInfo + 27) & 1;
  if ( v12 == 0 )
  {
    if ( (*m_pType->m_pString)(m_pType) == 3 && (*(m_pType->m_pString + 6))(m_pType) == 4 )
    {
      v99 = (*(m_pType->m_pString + 12))(m_pType);
      if ( v99 == SchemaTypeOf<char>() )
      {
        CVariantBase<CEntityVariantAllocator>::AssignTo(value, pFieldMemory, m_pType[6].m_pString);
        return 1;
      }
    }
    if ( m_pType == SchemaTypeOf<CUtlString>() )
    {
      v112 = 256;
      if ( pValue->m_type == 30 )
      {
        if ( pValue->m_uint64 != 0 )
          v122 = strlen(pValue->m_pszString);
        else
          v122 = 0;
        v112 = v122 + 1;
      }
      stringValue.m_flMatVal[0][0] = 0.0;
      *&stringValue.m_flMatVal[0][2] = 0;
      *&stringValue.m_flMatVal[1][0] = 0;
      CUtlVectorBase<char,CUtlMemory<char,int>>::SetCount(&stringValue, v112);
      v113 = CVariantBase<CEntityVariantAllocator>::AssignTo(
               pValue,
               *&stringValue.m_flMatVal[0][2],
               LODWORD(stringValue.m_flMatVal[0][0]));
      if ( v113 )
        CUtlString::Set(pFieldMemory, *&stringValue.m_flMatVal[0][2]);
      else
        CUtlString::Clear(pFieldMemory);
      stringValue.m_flMatVal[0][0] = 0.0;
      if ( (LODWORD(stringValue.m_flMatVal[1][1]) & 0xC0000000) == 0 )
      {
        CUtlMemory<char,int>::Purge(&stringValue.m_flMatVal[0][2]);
        if ( (LODWORD(stringValue.m_flMatVal[1][1]) & 0xC0000000) == 0 )
          CUtlMemory<char,int>::Purge(&stringValue.m_flMatVal[0][2]);
      }
      if ( !v113 )
      {
        CVariantBase<CEntityVariantAllocator>::AssignTo(pValue, pBuf, 0x104u);
        if ( LoggingSystem_IsChannelEnabled(LOG_ENTITY_SYSTEM, 2) != 0 )
        {
          v114 = CEntityIdentity::GetDebugName(pEntity->m_pEntity);
          LoggingSystem_Log(
            LOG_ENTITY_SYSTEM,
            2,
            "Bad key for entity \"%s\": Invalid parsed value for field \"%s\" of type '%s' ('%s')!\n",
            v114,
            pFieldName,
            "10CUtlString",
            pBuf);
        }
      }
      return 1;
    }
    if ( m_pType == SchemaTypeOf<CUtlSymbolLarge>() )
    {
      if ( pValue->m_type == 30 )
      {
        v12 = 1;
        CEntitySystem::AllocPooledString(g_pEntitySystem, pValue->m_pszString);
        *pFieldMemory = *&stringValue.m_flMatVal[0][0];
        return v12;
      }
      CVariantBase<CEntityVariantAllocator>::AssignTo(value, pBuf, 0x104u);
      if ( LoggingSystem_IsChannelEnabled(LOG_ENTITY_SYSTEM, 2) != 0 )
      {
LABEL_283:
        v115 = CEntityIdentity::GetDebugName(pEntity->m_pEntity);
        LoggingSystem_Log(
          LOG_ENTITY_SYSTEM,
          2,
          "Bad key for entity \"%s\": Invalid parsed value for field \"%s\" (%s)!\n",
          v115,
          pFieldName,
          pBuf);
      }
      return 1;
    }
    if ( m_pType == SchemaTypeOf<Vector>() )
    {
      AssignKeyValue<Vector>(pEntity, pFieldMemory, pValue, pFieldName);
      if ( pFieldInfo->m_keyTransformType == EntityKeyTransformType_t::ENTITY_KEY_TRANSFORM_TO_WORLDSPACE )
      {
        VectorTransform(pFieldMemory, context->m_pSpawnGroupToWorld, &stringValue);
      }
      else
      {
        if ( !bFieldNeedsRotationToWorldSpace )
          return 1;
        VectorRotate(pFieldMemory, context->m_pSpawnGroupToWorld, &stringValue);
      }
      v12 = 1;
      *pFieldMemory = *&stringValue.m_flMatVal[0][0];
      *(pFieldMemory + 2) = LODWORD(stringValue.m_flMatVal[0][2]);
      return v12;
    }
    if ( m_pType == SchemaTypeOf<RadianEuler>() )
    {
      AssignKeyValue<Vector>(pEntity, pFieldMemory, pValue, pFieldName);
      if ( bFieldNeedsRotationToWorldSpace )
      {
        v12 = 1;
        v116 = *(pFieldMemory + 2) * 57.295776;
        v117 = 57.295776 * *(pFieldMemory + 1);
        ang.z = *pFieldMemory * 57.295776;
        ang.y = v116;
        ang.x = v117;
        AngleMatrix(&ang, &mat);
        ConcatRotations(context->m_pSpawnGroupToWorld, &mat, &stringValue);
        MatrixAngles(&stringValue, &ang);
        v118 = ang.x * 0.017453292;
        v119 = 0.017453292 * ang.z;
        *(pFieldMemory + 2) = ang.y * 0.017453292;
        *(pFieldMemory + 1) = v118;
        *pFieldMemory = v119;
        return v12;
      }
      return 1;
    }
    if ( m_pType == SchemaTypeOf<DegreeEuler>() )
    {
      AssignKeyValue<Vector>(pEntity, pFieldMemory, pValue, pFieldName);
      if ( bFieldNeedsRotationToWorldSpace )
      {
        v12 = 1;
        v120 = *(pFieldMemory + 2);
        v121 = *(pFieldMemory + 1);
        ang.z = *pFieldMemory;
        ang.y = v120;
        ang.x = v121;
        AngleMatrix(&ang, &mat);
        ConcatRotations(context->m_pSpawnGroupToWorld, &mat, &stringValue);
        MatrixAngles(&stringValue, &ang);
        *pFieldMemory = ang.z;
        *(pFieldMemory + 1) = LODWORD(ang.x);
        *(pFieldMemory + 2) = LODWORD(ang.y);
        return v12;
      }
      return 1;
    }
    if ( m_pType == SchemaTypeOf<Quaternion>() )
    {
      AssignKeyValue<Quaternion>(pEntity, pFieldMemory, pValue, pFieldName);
      if ( bFieldNeedsRotationToWorldSpace )
      {
        v12 = 1;
        QuaternionMatrix(pFieldMemory, &stringValue);
        ConcatRotations(context->m_pSpawnGroupToWorld, &mat, &stringValue);
        MatrixQuaternion(&stringValue, pFieldMemory);
        return v12;
      }
      return 1;
    }
    if ( m_pType != SchemaTypeOf<QAngle>() )
    {
      if ( m_pType == SchemaTypeOf<CEntityHandle>() )
      {
        v125 = pValue->m_type;
        if ( v125 == 30 )
        {
          v12 = 1;
          CEntitySystem::FindFirstEntityHandleByName(g_pEntitySystem, pValue->m_pszString);
          *pFieldMemory = stringValue.m_flMatVal[0][0];
          return v12;
        }
        LODWORD(v69) = pValue->m_int;
        if ( v125 == 13 )
        {
LABEL_136:
          *pFieldMemory = v69;
        }
        else
        {
          v135 = VariantFieldTypeName(v125);
          Warning("No free conversion of %s variant to EHANDLE2 right now\n", v135);
        }
        return 1;
      }
      if ( m_pType != SchemaTypeOf<Vector2D>() )
      {
        if ( m_pType != SchemaTypeOf<Vector4D>() )
        {
          if ( m_pType == SchemaTypeOf<CUtlStringToken>() )
          {
            v133 = pValue->m_type;
            if ( v133 == 30 )
            {
              v136 = pValue->m_uint64;
              LODWORD(v65) = 0;
              if ( pValue->m_uint64 != 0 && *v136 != 0 )
              {
                v137 = MurmurHash2LowerCase(pValue->m_pszString, 0x31415926u);
                if ( g_bUpdateStringTokenDatabase )
                  RegisterStringToken(v137, v136, 0, 1);
                LODWORD(v65) = v137;
              }
LABEL_124:
              *pFieldMemory = v65;
            }
            else if ( v133 == 38 )
            {
LABEL_119:
              *pFieldMemory = pValue->m_int;
            }
            else
            {
              switch ( v133 )
              {
                case 0:
                  v141 = "void";
                  break;
                case 1:
                  v141 = "float";
                  break;
                case 3:
                  v141 = "vector";
                  break;
                case 4:
                  v141 = "quaternion";
                  break;
                case 5:
                  v141 = "integer";
                  break;
                case 6:
                  v141 = "boolean";
                  break;
                case 8:
                  v141 = "character";
                  break;
                case 9:
                  v141 = "color";
                  break;
                case 13:
                  v141 = "ehandle";
                  break;
                case 25:
                  v141 = "vector2d";
                  break;
                case 26:
                  v141 = "int64";
                  break;
                case 27:
                  v141 = "vector4d";
                  break;
                case 28:
                  v141 = "resourcehandle";
                  break;
                case 31:
                  v141 = "hscript";
                  break;
                case 32:
                  v141 = "variant";
                  break;
                case 33:
                  v141 = "uint64";
                  break;
                case 34:
                  v141 = "float64";
                  break;
                case 37:
                  v141 = "unsigned";
                  break;
                case 39:
                  v141 = "qangle";
                  break;
                case 48:
                  v141 = "hscript_lightbinding";
                  break;
                case 49:
                  v141 = "js_value";
                  break;
                case 50:
                  v141 = "js_object";
                  break;
                case 51:
                  v141 = "js_array";
                  break;
                case 52:
                  v141 = "js_raw_args";
                  break;
                default:
                  v141 = "unknown_variant_type";
                  break;
              }
              Warning("No free conversion of %s variant to CUtlStringToken right now\n", v141);
              CVariantBase<CEntityVariantAllocator>::AssignTo(pValue, pBuf, 0x104u);
              if ( LoggingSystem_IsChannelEnabled(LOG_ENTITY_SYSTEM, 2) != 0 )
              {
                v142 = CEntityIdentity::GetDebugName(pEntity->m_pEntity);
                LoggingSystem_Log(
                  LOG_ENTITY_SYSTEM,
                  2,
                  "Bad key for entity \"%s\": Invalid parsed value for field \"%s\" of type '%s' ('%s')!\n",
                  v142,
                  pFieldName,
                  "15CUtlStringToken",
                  pBuf);
              }
            }
          }
          else if ( m_pType == SchemaTypeOf<Color>() || m_pType == SchemaTypeOf<Color>() )
          {
            AssignKeyValue<Color>(pEntity, pFieldMemory, pValue, pFieldName);
          }
          else if ( m_pType == SchemaTypeOf<CVariantBase<CVariantDefaultAllocator>>() )
          {
            CVariantBase<CEntityVariantAllocator>::AssignTo<CVariantDefaultAllocator>(pValue, pFieldMemory);
          }
          else
          {
            v12 = LoggingSystem_IsChannelEnabled(LOG_ENTITY_SYSTEM, 4);
            if ( v12 != 0 )
            {
              v96 = CUtlString::Get(m_pType + 1);
              v97 = CEntityIdentity::GetDebugName(pEntity->m_pEntity);
              LODWORD(stringValue.m_flMatVal[0][2]) = 713;
              *&stringValue.m_flMatVal[0][0] = "entityclass.cpp";
              *&stringValue.m_flMatVal[1][0] = "UnserializeKey";
              LoggingSystem_Log(
                LOG_ENTITY_SYSTEM,
                LoggingSeverity_t::LS_ERROR,
                &stringValue,
                "Bad key for entity \"%s\": Invalid parsed value type for field \"%s\" (%s)!\n",
                v97,
                pFieldName,
                v96);
              return v12;
            }
          }
          return 1;
        }
        v134 = pValue->m_type;
        switch ( v134 )
        {
          case 27:
            v139 = pValue->m_uint64;
            *pFieldMemory = *pValue->m_pszString;
            *(pFieldMemory + 1) = v139[1];
            *(pFieldMemory + 2) = v139[2];
            *(pFieldMemory + 3) = v139[3];
            return 1;
          case 30:
            if ( V_sscanf(
                   pValue->m_uint64,
                   "%g %g %g %g",
                   pFieldMemory,
                   pFieldMemory + 4,
                   pFieldMemory + 8,
                   pFieldMemory + 12) == 4 )
              return 1;
            break;
          case 0:
            break;
          default:
            switch ( v134 )
            {
              case 1:
                v140 = "float";
                break;
              case 3:
                v140 = "vector";
                break;
              case 4:
                v140 = "quaternion";
                break;
              case 5:
                v140 = "integer";
                break;
              case 6:
                v140 = "boolean";
                break;
              case 8:
                v140 = "character";
                break;
              case 9:
                v140 = "color";
                break;
              case 13:
                v140 = "ehandle";
                break;
              case 25:
                v140 = "vector2d";
                break;
              case 26:
                v140 = "int64";
                break;
              case 28:
                v140 = "resourcehandle";
                break;
              case 31:
                v140 = "hscript";
                break;
              case 32:
                v140 = "variant";
                break;
              case 33:
                v140 = "uint64";
                break;
              case 34:
                v140 = "float64";
                break;
              case 37:
                v140 = "unsigned";
                break;
              case 38:
                v140 = "utlstringtoken";
                break;
              case 39:
                v140 = "qangle";
                break;
              case 48:
                v140 = "hscript_lightbinding";
                break;
              case 49:
                v140 = "js_value";
                break;
              case 50:
                v140 = "js_object";
                break;
              case 51:
                v140 = "js_array";
                break;
              case 52:
                v140 = "js_raw_args";
                break;
              default:
                v140 = "unknown_variant_type";
                break;
            }
            Warning("No free conversion of %s variant to Vector4D right now\n", v140);
            goto LABEL_350;
        }
        *pFieldMemory = vec4_origin;
LABEL_350:
        CVariantBase<CEntityVariantAllocator>::AssignTo(pValue, pBuf, 0x104u);
        if ( LoggingSystem_IsChannelEnabled(LOG_ENTITY_SYSTEM, 2) != 0 )
        {
          v138 = CEntityIdentity::GetDebugName(pEntity->m_pEntity);
          LoggingSystem_Log(
            LOG_ENTITY_SYSTEM,
            2,
            "Bad key for entity \"%s\": Invalid parsed value for field \"%s\" of type '%s' ('%s')!\n",
            v138,
            pFieldName,
            "8Vector4D",
            pBuf);
        }
        return 1;
      }
      v126 = pValue->m_uint64;
      v127 = pValue->m_type;
      switch ( v127 )
      {
        case 25:
          *pFieldMemory = *v126;
          *(pFieldMemory + 1) = v126[1];
          return 1;
        case 30:
          if ( V_sscanf(v126, "%g %g", pFieldMemory, pFieldMemory + 4) == 2 )
            return 1;
          break;
        case 0:
          break;
        default:
          v128 = VariantFieldTypeName(v127);
          Warning("No free conversion of %s variant to Vector2D right now\n", v128);
          goto LABEL_315;
      }
      *pFieldMemory = vec2_origin;
LABEL_315:
      CVariantBase<CEntityVariantAllocator>::AssignTo(pValue, pBuf, 0x104u);
      if ( LoggingSystem_IsChannelEnabled(LOG_ENTITY_SYSTEM, 2) != 0 )
      {
        v129 = CEntityIdentity::GetDebugName(pEntity->m_pEntity);
        LoggingSystem_Log(
          LOG_ENTITY_SYSTEM,
          2,
          "Bad key for entity \"%s\": Invalid parsed value for field \"%s\" of type '%s' ('%s')!\n",
          v129,
          pFieldName,
          "8Vector2D",
          pBuf);
      }
      return 1;
    }
    v123 = pValue->m_type;
    if ( v123 == 4 )
    {
      QuaternionAngles(pValue->m_pszString, pFieldMemory);
      goto LABEL_306;
    }
    if ( v123 <= 4 )
    {
      if ( v123 != 0 )
      {
        if ( v123 == 3 )
          goto LABEL_305;
LABEL_320:
        v131 = VariantFieldTypeName(v123);
        Warning("No free conversion of %s variant to QAngle right now\n", v131);
        goto LABEL_321;
      }
    }
    else
    {
      if ( v123 != 30 )
      {
        if ( v123 == 39 )
        {
LABEL_305:
          v124 = pValue->m_uint64;
          *pFieldMemory = *pValue->m_pszString;
          *(pFieldMemory + 1) = *(v124 + 4);
          *(pFieldMemory + 2) = *(v124 + 8);
          goto LABEL_306;
        }
        goto LABEL_320;
      }
      stringValue.m_flMatVal[0][0] = 0.0;
      if ( V_sscanf(pValue->m_uint64, "%g %g %g %g", pFieldMemory, pFieldMemory + 4, pFieldMemory + 8, &stringValue) == 3 )
        goto LABEL_306;
    }
    *pFieldMemory = vec3_angle;
LABEL_321:
    CVariantBase<CEntityVariantAllocator>::AssignTo(pValue, pBuf, 0x104u);
    if ( LoggingSystem_IsChannelEnabled(LOG_ENTITY_SYSTEM, 2) != 0 )
    {
      v132 = CEntityIdentity::GetDebugName(pEntity->m_pEntity);
      LoggingSystem_Log(
        LOG_ENTITY_SYSTEM,
        2,
        "Bad key for entity \"%s\": Invalid parsed value for field \"%s\" of type '%s' ('%s')!\n",
        v132,
        pFieldName,
        "6QAngle",
        pBuf);
    }
LABEL_306:
    if ( bFieldNeedsRotationToWorldSpace )
    {
      v12 = 1;
      AngleMatrix(pFieldMemory, &mat);
      ConcatRotations(context->m_pSpawnGroupToWorld, &mat, &stringValue);
      MatrixAngles(&stringValue, pFieldMemory);
      return v12;
    }
    return 1;
  }
  if ( m_pType == SchemaTypeOf<Vector>() )
  {
    if ( !AssignKeyValue<Vector>(pEntity, &mat, pValue, pFieldName) )
      *&mat.m_flMatVal[0][0] = vec3_origin;
    if ( (pFieldInfo->m_keyTransformType - 1) <= 1u )
    {
      VectorTransform(&mat, context->m_pSpawnGroupToWorld, &stringValue);
      *&mat.m_flMatVal[0][0] = *&stringValue.m_flMatVal[0][0];
      mat.m_flMatVal[0][2] = stringValue.m_flMatVal[0][2];
    }
    *(pFieldMemory + 3) = LODWORD(mat.m_flMatVal[0][0]);
    *(pFieldMemory + 7) = LODWORD(mat.m_flMatVal[0][1]);
    *(pFieldMemory + 11) = LODWORD(mat.m_flMatVal[0][2]);
  }
  else if ( m_pType == SchemaTypeOf<Quaternion>() || m_pType == SchemaTypeOf<QAngle>() )
  {
    v105 = AssignKeyValue<Quaternion>(pEntity, &ang, pValue, pFieldName);
    v106 = *(pFieldMemory + 7);
    v107 = *(pFieldMemory + 3);
    org.z = *(pFieldMemory + 11);
    org.y = v106;
    org.x = v107;
    if ( !v105 )
    {
      ang.x = quat_identity.x;
      ang.y = quat_identity.y;
      ang.z = quat_identity.z;
      w = quat_identity.w;
    }
    if ( bFieldNeedsRotationToWorldSpace )
    {
      QuaternionMatrix(&ang, &vec3_origin, &mat);
      stringValue = mat.matrix3x4_t;
      ConcatRotations(context->m_pSpawnGroupToWorld, &stringValue, pFieldMemory);
      *(pFieldMemory + 3) = LODWORD(org.x);
      *(pFieldMemory + 7) = LODWORD(org.y);
      *(pFieldMemory + 11) = LODWORD(org.z);
    }
    else
    {
      QuaternionMatrix(&ang, &org, &stringValue);
      *pFieldMemory = stringValue;
    }
  }
  else
  {
    v12 = LoggingSystem_IsChannelEnabled(LOG_ENTITY_SYSTEM, 4);
    if ( v12 != 0 )
    {
      v12 = 0;
      v13 = CUtlString::Get(m_pType + 1);
      v14 = CEntityIdentity::GetDebugName(pEntity->m_pEntity);
      LODWORD(stringValue.m_flMatVal[0][2]) = 573;
      *&stringValue.m_flMatVal[0][0] = "entityclass.cpp";
      *&stringValue.m_flMatVal[1][0] = "UnserializeKey";
      LoggingSystem_Log(
        LOG_ENTITY_SYSTEM,
        LoggingSeverity_t::LS_ERROR,
        &stringValue,
        "Bad key for entity \"%s\": Invalid parsed value type for matrix field \"%s\" (%s)!\n",
        v14,
        pFieldName,
        v13);
    }
  }
  return v12;
}


// CEntityClass::InvokePostUnserializationHandlers  (line 729, @0x0000000003092590, libserver.so)  // inlines: CUtlAbstractDelegate, operator(), operator[]
// callers: CEntityClass::Unserialize
void __fastcall CEntityClass::InvokePostUnserializationHandlers(
        CEntityClass *const this,
        void *pBase,
        const ComponentUnserializerClassInfo_t *pInfo)
{
  int m_Size; // r13d
  unsigned __int64 v6; // rbx
  __int64 v7; // r13
  ComponentPostUnserializerInfo_t *v8; // rax
  void (*pfn)(detail::GenericClass *); // rdx
  detail::GenericClass *v10; // rdi

  do
  {
    m_Size = pInfo->m_postUnserializeHandlers.m_Size;
    if ( m_Size > 0 )
    {
      v6 = 0;
      v7 = 32 * ((m_Size - 1) + 1LL);
      do
      {
        v8 = &pInfo->m_postUnserializeHandlers.m_Memory.m_pMemory[v6 / 0x20];
        pfn = v8->m_delegate.m_pFunction.__pfn;
        v10 = (pBase + v8->m_nOffset + v8->m_delegate.m_pFunction.__delta);
        if ( (pfn & 1) != 0 )
          pfn = *(pfn + *v10 - 1);
        pfn(v10);
        v6 += 32LL;
      }
      while ( v6 != v7 );
    }
    pInfo = pInfo->m_pBaseClassUnserializer;
  }
  while ( pInfo != 0 );
}


// CEntityClass::Unserialize  (line 765, @0x0000000003096a80, libserver.so)  // inlines: AddConnection, AddToTail, AssignTo, Attribute_SetFloatValue, Attribute_SetIntValue, Base, CEntityHandle, CThreadFastMutex, CUtlIntrusiveList, CUtlMemory, CUtlMemoryFixedGrowable, CUtlMemoryFixedGrowable_Base, CUtlSymbolLarge, CUtlTSOpenHash, CUtlTSOpenHashConcurrencyModelLockFree, CUtlVector, CUtlVectorBase, CUtlVectorFixedGrowable, ConvertToExternalMemory, CopyConstruct<UnserializeComponentInfo_t>, Element, EntityIOConnectionDesc_t, EntityIOConnection_t, FindEntityIOOutputsByName, GetBool, GetClassInfo, GetClassNameAsCStr, GetComponent, GetConnectionDesc, GetEHandle, GetEntityAttributes, GetEntryIndex, GetInt, GetSerialNumber, GrowMemory, Id, Init, IsAttribute, IsExternallyAllocated, IsValid, Next, Purge, Purge_FixedGrowable, RemoveAll, SetFloatValue, SetIntValue, SetValue<float>, SetValue<int>, String, Value, atof, memcpy, operator[], ~CUtlMemory, ~CUtlMemoryFixedGrowable, ~CUtlMemoryFixedGrowable_Base, ~CUtlVector, ~CUtlVectorBase, ~CUtlVectorFixedGrowable
// calls: CEntitySystem::NumComponentTypes, CEntitySystem::FindComponentTypeByRuntimeIndex, CUtlMemory<UnserializeComponentInfo_t, int>::Grow, CEntitySystem::GetSpawnOriginOffset, RotationsAreEqual, CEntityClass::FindKeyToUnserialize, CEntityClass::UnserializeKey, CUtlTSOpenHash<unsigned int, unsigned int, 64, CUtlMaskedIntHashMethod, CUtlTSOpenHashConcurrencyModelLockFree>::Insert, CEntityClass::InvokePostUnserializationHandlers, CEntityKeyValues::GetNumConnectionDescs, EntityIOConnectionDesc_t::Init, CEntityKeyValues::GetOutputName (25 total)
// callers: CEntitySystem::HelperExecuteQueuedSpawn, CEntitySystem::UnserializeForPrecache
// strings: "No conversion from %s to float now\n", "CEntityClass::Unserialize( %d:%s:%s )\n{\n"
// globals: CEntityKeyValues::sm_EmptyVariant, LOG_ENTITY_LOAD_UNSERIALIZE, jpt_3097295
bool __fastcall CEntityClass::Unserialize(
        CEntityClass *const this,
        CEntityInstance *pEntity,
        const CEntityKeyValues *pKeyValues)
{
  __int64 i; // rbx
  UnserializeComponentInfo_t *v5; // rax
  __int64 m_nBaseOffset; // rax
  _QWORD *v7; // rax
  _QWORD *v8; // r12
  EntComponentInfo_t *m_pInfo; // rax
  __int64 m_Size; // r13
  int v11; // eax
  float v12; // xmm1_4
  bool v13; // al
  int m_nCount; // edx
  int v15; // r12d
  unsigned __int64 v16; // rbx
  EntityKeyId_t v17; // ecx
  unsigned __int64 m_nAllocated; // rdx
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rdx
  const CEntityVariant *v20; // r9
  bool v21; // al
  bool v22; // si
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v23; // r9
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v24; // rax
  const CVariantBase<CEntityVariantAllocator> *v25; // rdi
  int16 v26; // ax
  int v27; // ebx
  CUtlObjectAttributeTable<CEntityIdentity,CUtlStringToken> *v28; // rax
  unsigned __int64 v29; // rbx
  EntityIOConnectionDescFat_t *v30; // rax
  const char *m_pOverrideParam; // r8
  const char *OutputName; // rax
  unsigned __int64 v33; // r12
  __int64 v34; // r14
  CEntityIOOutput *v35; // r13
  EntityIOConnection_t *v36; // rax
  __int64 v37; // rdx
  uint32 v38; // eax
  CEntityIdentity *v40; // rbx
  CUtlObjectAttributeTable<CEntityIdentity,CUtlStringToken> *v41; // rax
  unsigned __int64 v42; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v43; // rax
  unsigned __int64 v44; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v45; // rax
  CEntityIdentity *v46; // rbx
  CUtlObjectAttributeTable<CEntityIdentity,CUtlStringToken> *m_pAttributes; // rax
  __m128d v48; // xmm0
  unsigned __int64 v49; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v50; // rax
  const char *v51; // rax
  const char *m_pAsString; // r8
  CEntityIdentity *m_pEntity; // rax
  const char *m_pszCPPClassname; // r9
  unsigned __int16 v55; // dx
  int v56; // ecx
  float v57; // xmm1_4
  CEntityIdentity *v58; // [rsp+8h] [rbp-718h]
  unsigned int m_int; // [rsp+8h] [rbp-718h]
  unsigned int data; // [rsp+1Ch] [rbp-704h]
  unsigned int dataa; // [rsp+1Ch] [rbp-704h]
  unsigned int datab; // [rsp+1Ch] [rbp-704h]
  float flValue; // [rsp+20h] [rbp-700h]
  int v64; // [rsp+24h] [rbp-6FCh]
  CUtlMemory<CEntityIOOutput*,int> *v65; // [rsp+28h] [rbp-6F8h]
  int NumConnectionDescs; // [rsp+30h] [rbp-6F0h]
  CUtlMemory<UnserializeComponentInfo_t,int> *v68; // [rsp+40h] [rbp-6E0h]
  ComponentUnserializerClassInfo_t *bOk; // [rsp+48h] [rbp-6D8h]
  bool bOka; // [rsp+48h] [rbp-6D8h]
  int v71; // [rsp+50h] [rbp-6D0h]
  __int64 v72; // [rsp+50h] [rbp-6D0h]
  __int64 v73; // [rsp+50h] [rbp-6D0h]
  int ca; // [rsp+58h] [rbp-6C8h]
  CEntityClass::UnserializationContext_t context; // [rsp+60h] [rbp-6C0h] BYREF
  CUtlVector<CEntityIOOutput*,CUtlMemory<CEntityIOOutput*,int> > outputs; // [rsp+80h] [rbp-6A0h] BYREF
  EntityIOConnectionDesc_t desc; // [rsp+A0h] [rbp-680h] BYREF
  CUtlVectorFixedGrowable<UnserializeComponentInfo_t,64ul> components; // [rsp+D0h] [rbp-650h] BYREF
  unsigned __int64 v80; // [rsp+6E8h] [rbp-38h]

  v80 = __readfsqword(0x28u);
  if ( entity_log_load_unserialize.m_pParent->m_Value.m_nValue != 0
    && LoggingSystem_IsChannelEnabled(LOG_ENTITY_LOAD_UNSERIALIZE, 1) != 0 )
  {
    m_pAsString = "";
    m_pEntity = pEntity->m_pEntity;
    m_pszCPPClassname = m_pEntity->m_pClass->m_pClassInfo->m_pszCPPClassname;
    if ( m_pEntity->m_designerName.u.m_Id != 0 )
      m_pAsString = m_pEntity->m_designerName.u.m_pAsString;
    v55 = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      v55 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    v56 = 0x7FFF;
    LODWORD(desc.m_targetDesc.u.m_Id) = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15)
                                      | v55 & 0x7FFF;
    if ( LODWORD(desc.m_targetDesc.u.m_Id) != -1 )
      v56 = v55;
    LoggingSystem_Log(
      LOG_ENTITY_LOAD_UNSERIALIZE,
      1,
      "CEntityClass::Unserialize( %d:%s:%s )\n{\n",
      v56,
      m_pAsString,
      m_pszCPPClassname);
  }
  components.m_Size = 0;
  components.m_Memory.m_pMemory = &components.m_Memory.m_FixedMemory;
  components.m_Memory.m_nAllocationCount = 64;
  components.m_Memory.m_nGrowSize = 0x80000000;
  if ( this->m_instanceUnserializer.m_pBaseClassUnserializer != -1LL )
  {
    components.m_Size = 1;
    *&components.m_Memory.m_FixedMemory.m_Data[8] = 0;
    *&components.m_Memory.m_FixedMemory.m_Data[16] = &this->m_instanceUnserializer;
    *components.m_Memory.m_FixedMemory.m_Data = pEntity;
  }
  v71 = CEntitySystem::NumComponentTypes(g_pEntitySystem);
  for ( i = 0; v71 > i; ++i )
  {
    m_nBaseOffset = this->m_ComponentOffsets.m_Memory.m_pMemory[i].m_nBaseOffset;
    if ( pEntity != 0 && m_nBaseOffset != 0xFFFF )
    {
      v7 = (&pEntity->_vptr_IHandleEntity + m_nBaseOffset);
      v8 = v7;
      if ( !CEntityClass::gm_fComponentsContained.m_Memory.m_pMemory[i] )
        v8 = *v7;
      if ( v8 != 0 )
      {
        m_pInfo = CEntitySystem::FindComponentTypeByRuntimeIndex(g_pEntitySystem, i)->m_pInfo;
        if ( m_pInfo->m_unserializer.m_pBaseClassUnserializer != -1LL )
        {
          m_Size = components.m_Size;
          bOk = &m_pInfo->m_unserializer;
          v11 = components.m_Size;
          if ( components.m_Size == components.m_Memory.m_nAllocationCount )
          {
            CUtlMemory<UnserializeComponentInfo_t,int>::Grow(&components.m_Memory, 1);
            v11 = components.m_Size;
          }
          components.m_Size = v11 + 1;
          v5 = &components.m_Memory.m_pMemory[m_Size];
          if ( v5 != 0 )
          {
            v5->m_pBasePtr = v8;
            v5->m_pInfo = 0;
            v5->m_pUnserializer = bOk;
          }
        }
      }
    }
  }
  context.m_bIsPrecaching = g_pEntitySystem->m_pCurrentManifest != 0;
  context.m_pSpawnGroupToWorld = CEntitySystem::GetSpawnOriginOffset(g_pEntitySystem);
  v13 = RotationsAreEqual(&g_MatrixIdentity, context.m_pSpawnGroupToWorld, v12);
  m_nCount = pKeyValues->m_keyHashes.m_nCount;
  context.m_bSpawnGroupHasRotation = !v13;
  v64 = components.m_Size;
  if ( m_nCount > 0 )
  {
    v15 = 0;
    bOka = 1;
    v68 = 0;
    v65 = 0;
    v72 = 8 * (3LL * (components.m_Size - 1) + 3);
    while ( 1 )
    {
      if ( v15 >= m_nCount )
      {
LABEL_20:
        v16 = 0;
        if ( v64 > 0 )
        {
          do
          {
            v17.m_nHashCode = 0;
            if ( m_nCount > v15 )
            {
              m_nAllocated = pKeyValues->m_keyHashes.m_nAllocated;
              if ( m_nAllocated != 0 )
              {
                if ( m_nAllocated <= 9 )
                  m_pElements = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
                else
                  m_pElements = pKeyValues->m_keyHashes.m_pElements;
              }
              else
              {
                m_pElements = 0;
              }
              v17.m_nHashCode = *(&v68->m_pMemory + m_pElements);
            }
            if ( CEntityClass::FindKeyToUnserialize(
                   this,
                   components.m_Memory.m_pMemory[v16 / 0x18].m_pBasePtr,
                   components.m_Memory.m_pMemory[v16 / 0x18].m_pUnserializer,
                   v17,
                   &outputs,
                   &desc) )
            {
              v20 = &CEntityKeyValues::sm_EmptyVariant;
              if ( pKeyValues->m_keyHashes.m_nCount > v15 )
              {
                if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
                  v23 = pKeyValues->m_keyValues.m_pElements;
                else
                  v23 = 0;
                v20 = (&v23->m_value + v65);
              }
              v21 = CEntityClass::UnserializeKey(
                      this,
                      &context,
                      pEntity,
                      *&outputs.m_Size,
                      desc.m_targetDesc.u.m_Id,
                      v20);
              v22 = bOka;
              if ( !v21 )
                v22 = 0;
              bOka = v22;
            }
            v16 += 24LL;
            m_nCount = pKeyValues->m_keyHashes.m_nCount;
          }
          while ( v16 != v72 );
        }
        goto LABEL_49;
      }
      if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
      {
        v24 = pKeyValues->m_keyValues.m_pElements;
        if ( *(&v65[1].m_pMemory + v24) == 0 )
          goto LABEL_20;
      }
      else
      {
        v24 = 0;
        if ( v65[1].m_pMemory == 0 )
          goto LABEL_20;
      }
      v25 = (v65 + v24);
      v26 = *(&v65->m_nAllocationCount + v24);
      if ( v26 == 13 )
      {
        dataa = 0;
        m_int = v25->m_int;
        if ( m_nCount <= v15 )
          goto LABEL_77;
        goto LABEL_81;
      }
      if ( v26 <= 13 )
      {
        if ( v26 == 1 )
        {
LABEL_85:
          switch ( v26 )
          {
            case 0:
            case 2:
            case 3:
            case 4:
            case 7:
            case 8:
            case 9:
            case 10:
            case 11:
            case 12:
            case 13:
            case 14:
            case 15:
            case 16:
            case 17:
            case 18:
            case 19:
            case 20:
            case 21:
            case 22:
            case 23:
            case 24:
            case 25:
            case 27:
            case 28:
            case 29:
            case 31:
            case 32:
              v51 = VariantFieldTypeName(v26);
              Warning("No conversion from %s to float now\n", v51);
              m_nCount = pKeyValues->m_keyHashes.m_nCount;
              goto LABEL_93;
            case 1:
              flValue = v25->m_float;
              goto LABEL_93;
            case 5:
              flValue = v25->m_int;
              goto LABEL_93;
            case 6:
              flValue = v25->m_char;
              goto LABEL_93;
            case 26:
              flValue = v25->m_uint64;
              goto LABEL_93;
            case 30:
              v48.m128d_f64[0] = strtod(v25->m_pszString, 0);
              datab = 0;
              flValue = _mm_movedup_pd(v48).m128d_f64[0];
              if ( pKeyValues->m_keyHashes.m_nCount > v15 )
                goto LABEL_98;
              goto LABEL_94;
            case 33:
              if ( v25->m_int64 < 0 )
              {
                v57 = (v25->m_int & 1 | (v25->m_uint64 >> 1));
                flValue = v57 + v57;
              }
              else
              {
                flValue = v25->m_uint64;
              }
              goto LABEL_93;
            case 34:
              flValue = v25->m_float64;
LABEL_93:
              datab = 0;
              if ( m_nCount > v15 )
              {
LABEL_98:
                v49 = pKeyValues->m_keyHashes.m_nAllocated;
                if ( v49 != 0 )
                {
                  if ( v49 <= 9 )
                    v50 = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
                  else
                    v50 = pKeyValues->m_keyHashes.m_pElements;
                }
                else
                {
                  v50 = 0;
                }
                datab = *(&v68->m_pMemory + v50);
              }
LABEL_94:
              v46 = pEntity->m_pEntity;
              m_pAttributes = v46->m_pAttributes;
              if ( m_pAttributes == 0 )
              {
                m_pAttributes = operator new(0x38u);
                m_pAttributes->m_hashTable.m_tables.m_pHead = 0;
                m_pAttributes->m_hashTable.m_concurrencyModel.m_mutex.m_ownerID = 0;
                m_pAttributes->m_hashTable.m_concurrencyModel.m_mutex.m_depth = 0;
                m_pAttributes->m_hashTable.m_nNumKeysDeleted = 0;
                m_pAttributes->m_hashTable.m_nCurrentTableSize = 64;
                m_pAttributes->m_hashTable.m_nDeletedKeyValue = -1;
                m_pAttributes->m_hashTable.m_nEmptyKeyValue = -2;
                m_pAttributes->m_pParentTable = 0;
                v46->m_pAttributes = m_pAttributes;
              }
              CUtlTSOpenHash<unsigned int,unsigned int,64,CUtlMaskedIntHashMethod,CUtlTSOpenHashConcurrencyModelLockFree>::Insert(
                &m_pAttributes->m_hashTable,
                datab & 0x7FFFFFF | 0x8000000,
                LODWORD(flValue),
                0);
              break;
          }
          goto LABEL_48;
        }
      }
      else
      {
        if ( v26 == 34 )
          goto LABEL_85;
        if ( v26 == 37 )
        {
          v27 = 0;
          data = v25->m_int;
          if ( m_nCount > v15 )
          {
            v44 = pKeyValues->m_keyHashes.m_nAllocated;
            if ( v44 != 0 )
            {
              if ( v44 <= 9 )
                v45 = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
              else
                v45 = pKeyValues->m_keyHashes.m_pElements;
            }
            else
            {
              v45 = 0;
            }
            v27 = *(&v68->m_pMemory + v45);
          }
          v58 = pEntity->m_pEntity;
          v28 = v58->m_pAttributes;
          if ( v28 == 0 )
          {
            v28 = operator new(0x38u);
            v28->m_hashTable.m_tables.m_pHead = 0;
            v28->m_hashTable.m_concurrencyModel.m_mutex.m_ownerID = 0;
            v28->m_hashTable.m_concurrencyModel.m_mutex.m_depth = 0;
            v28->m_hashTable.m_nNumKeysDeleted = 0;
            v28->m_hashTable.m_nCurrentTableSize = 64;
            v28->m_hashTable.m_nDeletedKeyValue = -1;
            v28->m_hashTable.m_nEmptyKeyValue = -2;
            v28->m_pParentTable = 0;
            v58->m_pAttributes = v28;
          }
          CUtlTSOpenHash<unsigned int,unsigned int,64,CUtlMaskedIntHashMethod,CUtlTSOpenHashConcurrencyModelLockFree>::Insert(
            &v28->m_hashTable,
            v27 & 0x7FFFFFF,
            data,
            0);
          goto LABEL_48;
        }
      }
      if ( CVariantBase<CEntityVariantAllocator>::AssignTo(v25, &desc) )
      {
        dataa = 0;
        m_int = desc.m_targetDesc.u.m_Id;
        if ( v15 >= pKeyValues->m_keyHashes.m_nCount )
        {
LABEL_77:
          v40 = pEntity->m_pEntity;
          v41 = v40->m_pAttributes;
          if ( v41 == 0 )
          {
            v41 = operator new(0x38u);
            v41->m_hashTable.m_tables.m_pHead = 0;
            v41->m_hashTable.m_concurrencyModel.m_mutex.m_ownerID = 0;
            v41->m_hashTable.m_concurrencyModel.m_mutex.m_depth = 0;
            v41->m_hashTable.m_nNumKeysDeleted = 0;
            v41->m_hashTable.m_nCurrentTableSize = 64;
            v41->m_hashTable.m_nDeletedKeyValue = -1;
            v41->m_hashTable.m_nEmptyKeyValue = -2;
            v41->m_pParentTable = 0;
            v40->m_pAttributes = v41;
          }
          CUtlTSOpenHash<unsigned int,unsigned int,64,CUtlMaskedIntHashMethod,CUtlTSOpenHashConcurrencyModelLockFree>::Insert(
            &v41->m_hashTable,
            dataa & 0x7FFFFFF,
            m_int,
            0);
          goto LABEL_48;
        }
LABEL_81:
        v42 = pKeyValues->m_keyHashes.m_nAllocated;
        if ( v42 != 0 )
        {
          if ( v42 <= 9 )
            v43 = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
          else
            v43 = pKeyValues->m_keyHashes.m_pElements;
        }
        else
        {
          v43 = 0;
        }
        dataa = *(&v68->m_pMemory + v43);
        goto LABEL_77;
      }
LABEL_48:
      m_nCount = pKeyValues->m_keyHashes.m_nCount;
LABEL_49:
      v65 = (v65 + 24);
      ++v15;
      v68 = (v68 + 4);
      if ( v15 >= m_nCount )
        goto LABEL_50;
    }
  }
  bOka = 1;
LABEL_50:
  if ( v64 > 0 )
  {
    v29 = 0;
    do
    {
      CEntityClass::InvokePostUnserializationHandlers(
        this,
        components.m_Memory.m_pMemory[v29 / 0x18].m_pBasePtr,
        components.m_Memory.m_pMemory[v29 / 0x18].m_pUnserializer);
      v29 += 24LL;
    }
    while ( v29 != 8 * (3LL * (v64 - 1) + 3) );
  }
  NumConnectionDescs = CEntityKeyValues::GetNumConnectionDescs(pKeyValues);
  if ( NumConnectionDescs > 0 )
  {
    v73 = 0;
    for ( ca = 0; ca != NumConnectionDescs; ++ca )
    {
      memset(&desc, 0, 24);
      desc.m_hTarget.m_Index = -1;
      v30 = &pKeyValues->m_connectionDescs.m_Memory.m_pMemory[v73];
      m_pOverrideParam = v30->m_pOverrideParam;
      if ( *m_pOverrideParam == 0 )
        m_pOverrideParam = 0;
      EntityIOConnectionDesc_t::Init(
        &desc,
        v30->m_targetType,
        v30->m_pTargetName,
        v30->m_pInputName,
        m_pOverrideParam,
        v30->m_nTimesToFire,
        v30->m_flDelay);
      OutputName = CEntityKeyValues::GetOutputName(pKeyValues, ca);
      outputs.m_Size = 0;
      outputs.m_Memory.m_pMemory = 0;
      outputs.m_Memory.m_nAllocationCount = 0;
      outputs.m_Memory.m_nGrowSize = 0;
      CEntityIdentity::FindEntityIOOutputsByName(pEntity->m_pEntity, OutputName, &outputs);
      if ( outputs.m_Size > 0 )
      {
        v33 = 0;
        v34 = 8LL * (outputs.m_Size - 1) + 8;
        do
        {
          v35 = outputs.m_Memory.m_pMemory[v33 / 8];
          v36 = operator new(0x38u);
          v36->m_targetDesc.u.m_Id = 0;
          v33 += 8LL;
          v36->m_targetInput.u.m_Id = 0;
          v36->m_valueOverride.u.m_Id = 0;
          v36->m_hTarget.m_Index = -1;
          v36->m_targetDesc.u.m_Id = desc.m_targetDesc.u.m_Id;
          v36->m_targetInput.u.m_Id = desc.m_targetInput.u.m_Id;
          v36->m_valueOverride.u.m_Id = desc.m_valueOverride.u.m_Id;
          *&v36->m_hTarget.m_Index = *&desc.m_hTarget.m_Index;
          v37 = *&desc.m_nTimesToFire;
          v36->m_bMarkedForRemoval = 0;
          *&v36->m_nTimesToFire = v37;
          v36->m_pNext = v35->m_pConnections;
          v35->m_pConnections = v36;
        }
        while ( v33 != v34 );
      }
      outputs.m_Size = 0;
      if ( (outputs.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      {
        CUtlMemory<CEntityIOOutput *,int>::Purge(&outputs.m_Memory);
        if ( (outputs.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
          CUtlMemory<CEntityIOOutput *,int>::Purge(&outputs.m_Memory);
      }
      ++v73;
    }
  }
  if ( entity_log_load_unserialize.m_pParent->m_Value.m_nValue != 0
    && LoggingSystem_IsChannelEnabled(LOG_ENTITY_LOAD_UNSERIALIZE, 1) != 0 )
  {
    LoggingSystem_Log(LOG_ENTITY_LOAD_UNSERIALIZE, 1, "}\n");
  }
  components.m_Size = 0;
  if ( components.m_Memory.m_nAllocationCount < 0 )
  {
    v38 = components.m_Memory.m_nGrowSize & 0xC0000000;
  }
  else
  {
    v38 = components.m_Memory.m_nGrowSize & 0xC0000000;
    if ( components.m_Memory.m_pMemory != &components.m_Memory.m_FixedMemory )
    {
      if ( components.m_Memory.m_pMemory != 0 && v38 == 0 )
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
      return bOka;
    }
  }
  if ( v38 == 0 )
    CUtlMemory<UnserializeComponentInfo_t,int>::Purge(&components.m_Memory);
  return bOka;
}


// CEntityClass::IsKeyUsedByUnserialization  (line 911, @0x0000000003092610, libserver.so)  // inlines: Find
// callers: CEntityClass::IsKeyUsedByUnserialization
bool __fastcall CEntityClass::IsKeyUsedByUnserialization(
        const CEntityClass *const this,
        EntityKeyId_t key,
        const ComponentUnserializerClassInfo_t *pInfo)
{
  __int64 v5; // r14
  _DWORD **v6; // rsi
  _DWORD *v7; // rdx
  _DWORD *v8; // rax
  __int64 v9; // rax
  bool result; // al
  int m_Size; // eax
  ComponentUnserializerPtrToClassInfo_t *m_pMemory; // rbx
  __int64 v13; // r15

  v5 = 16 * ((key.m_nHashCode & 0xF) + 4LL);
  while ( 1 )
  {
    v6 = (&pInfo->m_atomicFields + v5);
    v7 = *v6;
    if ( *v6 != 0 )
    {
      if ( key.m_nHashCode == *v7 )
        return 1;
      v8 = *v6;
      while ( 1 )
      {
        v8 = *(v8 + 1);
        if ( v8 == 0 )
          break;
        if ( *v8 == key.m_nHashCode )
          return 1;
      }
    }
    v9 = *(&pInfo->m_atomicFields.m_EntryMemory.m_GrowMode + v5);
    if ( v9 != 0 && v7 != v9 )
    {
      while ( key.m_nHashCode != *v9 )
      {
        v9 = *(v9 + 8);
        if ( v7 == v9 )
          goto LABEL_14;
      }
      return 1;
    }
LABEL_14:
    m_Size = pInfo->m_ptrFields.m_Size;
    if ( m_Size > 0 )
      break;
LABEL_18:
    pInfo = pInfo->m_pBaseClassUnserializer;
    if ( pInfo == 0 )
      return 0;
  }
  m_pMemory = pInfo->m_ptrFields.m_Memory.m_pMemory;
  v13 = &m_pMemory[(m_Size - 1) + 1];
  while ( 1 )
  {
    result = CEntityClass::IsKeyUsedByUnserialization(this, key, m_pMemory->m_pClassInfo);
    if ( result )
      return result;
    if ( ++m_pMemory == v13 )
      goto LABEL_18;
  }
}


// CEntityClass::IsKeyUsedByUnserialization  (line 939, @0x0000000003092710, libserver.so)  // inlines: UsesComponent
// calls: CEntityClass::IsKeyUsedByUnserialization, CEntitySystem::NumComponentTypes, CEntitySystem::FindComponentTypeByRuntimeIndex
bool __fastcall CEntityClass::IsKeyUsedByUnserialization(const CEntityClass *const this, EntityKeyId_t key)
{
  bool IsKeyUsedByUnserialization; // r15
  __int64 v6; // rbx
  int v7; // r14d
  CEntityComponentHelper *ComponentTypeByRuntimeIndex; // rax

  if ( key.m_nHashCode != -971301790 && key.m_nHashCode != 1094168427 )
  {
    IsKeyUsedByUnserialization = CEntityClass::IsKeyUsedByUnserialization(this, key, &this->m_instanceUnserializer);
    if ( !IsKeyUsedByUnserialization )
    {
      v6 = 0;
      v7 = CEntitySystem::NumComponentTypes(g_pEntitySystem);
      if ( v7 <= 0 )
        return IsKeyUsedByUnserialization;
      while ( 1 )
      {
        if ( this->m_ComponentOffsets.m_Memory.m_pMemory[v6].m_nBaseOffset != 0xFFFF )
        {
          ComponentTypeByRuntimeIndex = CEntitySystem::FindComponentTypeByRuntimeIndex(g_pEntitySystem, v6);
          if ( CEntityClass::IsKeyUsedByUnserialization(
                 this,
                 key,
                 &ComponentTypeByRuntimeIndex->m_pInfo->m_unserializer) )
          {
            break;
          }
        }
        if ( v7 <= ++v6 )
          return IsKeyUsedByUnserialization;
      }
    }
  }
  return 1;
}


// CEntityClass::AcceptInput  (line 970, @0x00000000030927d0, libserver.so)  // inlines: CUtlAbstractDelegate, CUtlSymbolLarge, Element, GetBaseClass, Invoke, SortedFind, operator=, operator[]
// callers: CEntityIdentity::AcceptInput
CEntityClass::AcceptInputRetval_t __fastcall CEntityClass::AcceptInput(
        CEntityClass *const this,
        CEntityInstance *pEntity,
        string_t inputName,
        CEntityInstance *pActivator,
        CEntityInstance *pCaller,
        const CVariant *const value,
        unsigned int nOutputID)
{
  UtlSymLargeId_t v8; // rdx
  int v9; // ebx
  int v10; // r11d
  int v11; // eax
  CEntityClass::ClassInputInfo_t *v12; // r10
  CEntityClassInfo *m_pBaseClassInfo; // rax
  CEntityClass *m_pClass; // rdi
  CEntityIOInputFunction *m_pInput; // r10
  detail::GenericClass *m_pthis; // rcx
  __int64 delta; // rdx
  string_t inputNamea; // [rsp+10h] [rbp-40h] BYREF
  void (*pfn)(detail::GenericClass *); // [rsp+18h] [rbp-38h]
  __int64 v21; // [rsp+20h] [rbp-30h]

  v8 = *inputName.u.m_Id;
  v9 = this->m_classInputs.m_Size - 1;
  if ( v9 < 0 )
    goto LABEL_7;
  v10 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      v11 = (v10 + v9) >> 1;
      v12 = &this->m_classInputs.m_Memory.m_pMemory[v11];
      if ( v8 <= v12->m_inputName.u.m_Id )
        break;
      v10 = v11 + 1;
      if ( v9 < v11 + 1 )
        goto LABEL_7;
    }
    if ( v8 >= v12->m_inputName.u.m_Id )
      break;
    v9 = v11 - 1;
    if ( v11 - 1 < v10 )
      goto LABEL_7;
  }
  if ( v11 < 0 )
  {
LABEL_7:
    m_pBaseClassInfo = this->m_pBaseClassInfo;
    if ( m_pBaseClassInfo != 0 && (m_pClass = m_pBaseClassInfo->m_pClass) != 0 )
    {
      inputNamea.u.m_Id = v8;
      return CEntityClass::AcceptInput(m_pClass, pEntity, &inputNamea, pActivator, pCaller, value, nOutputID);
    }
    else
    {
      return CEntityClass::AcceptInputRetval_t::ACCEPT_INPUT_UNKNOWN;
    }
  }
  else
  {
    m_pInput = v12->m_pInput;
    m_pthis = m_pInput->m_delegate.m_pthis;
    delta = m_pInput->m_delegate.m_pFunction.__delta;
    pfn = m_pInput->m_delegate.m_pFunction.__pfn;
    v21 = delta;
    inputNamea.u.m_Id = pEntity + m_pthis;
    m_pInput->m_adapterFunc(&inputNamea, pActivator, pCaller, pEntity, nOutputID, m_pInput->m_pContext, value);
    return CEntityClass::AcceptInputRetval_t::ACCEPT_INPUT_KNOWN_AND_HANDLED;
  }
}


// CEntityClass::GetClassSerializer  (line 988, @0x00000000030928c0, libserver.so)  // inlines: GetBaseClass
FlattenedSerializerHandle_t __fastcall CEntityClass::GetClassSerializer(CEntityClass *const this)
{
  FlattenedSerializerHandle_t result; // rax

  while ( this != 0 )
  {
    result = this->m_hNetworkSerializer;
    if ( result != 0 )
      return result;
    result = this->m_pBaseClassInfo;
    if ( result == 0 )
      return result;
    this = *(result + 3);
  }
  return 0;
}


// CEntityClass::GetEntityIOInputs  (line 1006, @0x0000000003093320, libserver.so)  // inlines: AddToTail, CUtlMemory, CUtlMemoryFixedGrowable, CUtlMemoryFixedGrowable_Base, CUtlSymbolLarge, CUtlVectorBase, CUtlVectorFixedGrowable, CopyConstruct<CUtlSymbolLarge>, CopyConstruct<char const*>, Element, EnsureCapacity, GetBaseClass, GrowMemory, memcpy, operator[], ~CUtlVectorFixedGrowable
// calls: CUtlVectorBase<CUtlSymbolLarge, CUtlMemoryFixedGrowable<CUtlSymbolLarge, 128ul, int> >::Find, CUtlVectorBase<CUtlSymbolLarge, CUtlMemoryFixedGrowable<CUtlSymbolLarge, 128ul, int> >::~CUtlVectorBase, CUtlMemory<char const*, int>::Grow, CUtlMemory<CUtlSymbolLarge, int>::Grow, memcpy, _Unwind_Resume, __stack_chk_fail
// callers: CEntityIdentity::GetEntityIOInputs
void __fastcall CEntityClass::GetEntityIOInputs(
        CEntityClass *const this,
        CUtlVector<char const*,CUtlMemory<char const*,int> > *const inputs)
{
  int m_Size; // r14d
  int v5; // ebx
  uint32 m_nGrowSize; // eax
  const char **v7; // rsi
  __int64 v8; // rax
  const char **v9; // rax
  int v10; // ebx
  unsigned __int64 v11; // rbx
  __int64 v12; // r14
  CEntityClass::ClassInputInfo_t *v13; // r12
  CEntityIOInputFunction *m_pInput; // rax
  __int64 v15; // r12
  int v16; // eax
  const char **v17; // rax
  __int64 v18; // r12
  int v19; // eax
  CUtlSymbolLarge *v20; // rax
  CEntityClassInfo *m_pBaseClassInfo; // rax
  __int64 v22; // rax
  CUtlSymbolLarge *v23; // rax
  const char **m_pMemory; // r12
  const char **v25; // rax
  CUtlSymbolLarge *v26; // r12
  CUtlSymbolLarge *v27; // rax
  CUtlVectorBase<char const*,CUtlMemory<char const*,int> >::CAllocator *p_m_Memory; // [rsp+0h] [rbp-470h]
  const char *m_pName; // [rsp+10h] [rbp-460h]
  CEntityClass::ClassInputInfo_t *v30; // [rsp+10h] [rbp-460h]
  CUtlVectorFixedGrowable<CUtlSymbolLarge,128ul> foundinputs; // [rsp+20h] [rbp-450h] BYREF
  unsigned __int64 v32; // [rsp+438h] [rbp-38h]

  foundinputs.m_Size = 0;
  v32 = __readfsqword(0x28u);
  foundinputs.m_Memory.m_nAllocationCount = 128;
  foundinputs.m_Memory.m_pMemory = &foundinputs.m_Memory.m_FixedMemory;
  foundinputs.m_Memory.m_nGrowSize = 0x80000000;
  p_m_Memory = &inputs->m_Memory;
  do
  {
    m_Size = this->m_classInputs.m_Size;
    v5 = m_Size + inputs->m_Size;
    if ( v5 > inputs->m_Memory.m_nAllocationCount )
    {
      m_nGrowSize = inputs->m_Memory.m_nGrowSize;
      if ( (m_nGrowSize & 0x40000000) == 0 )
      {
        if ( (m_nGrowSize & 0xC0000000) != 0 )
        {
          m_pMemory = inputs->m_Memory.m_pMemory;
          v25 = (**g_pMemAlloc)(g_pMemAlloc, 8LL * v5);
          inputs->m_Memory.m_pMemory = v25;
          if ( m_pMemory != 0 )
            memcpy(v25, m_pMemory, 8LL * inputs->m_Memory.m_nAllocationCount);
          inputs->m_Memory.m_nGrowSize &= 0x3FFFFFFFu;
        }
        else
        {
          v7 = inputs->m_Memory.m_pMemory;
          v8 = *g_pMemAlloc;
          if ( v7 != 0 )
            v9 = (*(v8 + 8))(g_pMemAlloc, v7, 8LL * v5);
          else
            v9 = (*v8)(g_pMemAlloc, 8LL * v5);
          inputs->m_Memory.m_pMemory = v9;
        }
        inputs->m_Memory.m_nAllocationCount = v5;
      }
    }
    v10 = m_Size + foundinputs.m_Size;
    if ( m_Size + foundinputs.m_Size > foundinputs.m_Memory.m_nAllocationCount
      && (foundinputs.m_Memory.m_nGrowSize & 0x40000000) == 0 )
    {
      if ( (foundinputs.m_Memory.m_nGrowSize & 0xC0000000) != 0 )
      {
        v26 = foundinputs.m_Memory.m_pMemory;
        v27 = (**g_pMemAlloc)(g_pMemAlloc, 8LL * v10);
        foundinputs.m_Memory.m_pMemory = v27;
        if ( v26 != 0 )
          memcpy(v27, v26, 8LL * foundinputs.m_Memory.m_nAllocationCount);
        foundinputs.m_Memory.m_nGrowSize &= 0x3FFFFFFFu;
      }
      else
      {
        v22 = *g_pMemAlloc;
        if ( foundinputs.m_Memory.m_pMemory != 0 )
          v23 = (*(v22 + 8))(g_pMemAlloc, foundinputs.m_Memory.m_pMemory, 8LL * v10);
        else
          v23 = (*v22)(g_pMemAlloc, 8LL * v10);
        foundinputs.m_Memory.m_pMemory = v23;
      }
      foundinputs.m_Memory.m_nAllocationCount = v10;
    }
    if ( m_Size > 0 )
    {
      v11 = 0;
      v12 = 16 * ((m_Size - 1) + 1LL);
      do
      {
        while ( 1 )
        {
          v13 = &this->m_classInputs.m_Memory.m_pMemory[v11 / 0x10];
          if ( CUtlVectorBase<CUtlSymbolLarge,CUtlMemoryFixedGrowable<CUtlSymbolLarge,128ul,int>>::Find(
                 &foundinputs,
                 &v13->m_inputName) == -1 )
          {
            m_pInput = v13->m_pInput;
            v15 = inputs->m_Size;
            m_pName = m_pInput->m_pName;
            v16 = v15;
            if ( v15 == inputs->m_Memory.m_nAllocationCount )
            {
              CUtlMemory<char const*,int>::Grow(p_m_Memory, 1);
              v16 = inputs->m_Size;
            }
            inputs->m_Size = v16 + 1;
            v17 = &inputs->m_Memory.m_pMemory[v15];
            if ( v17 != 0 )
              *v17 = m_pName;
            v18 = foundinputs.m_Size;
            v30 = &this->m_classInputs.m_Memory.m_pMemory[v11 / 0x10];
            v19 = foundinputs.m_Size;
            if ( foundinputs.m_Size == foundinputs.m_Memory.m_nAllocationCount )
            {
              CUtlMemory<CUtlSymbolLarge,int>::Grow(&foundinputs.m_Memory, 1);
              v19 = foundinputs.m_Size;
            }
            foundinputs.m_Size = v19 + 1;
            v20 = &foundinputs.m_Memory.m_pMemory[v18];
            if ( v20 != 0 )
              break;
          }
          v11 += 16LL;
          if ( v11 == v12 )
            goto LABEL_22;
        }
        v11 += 16LL;
        v20->u.m_Id = v30->m_inputName;
      }
      while ( v11 != v12 );
    }
LABEL_22:
    m_pBaseClassInfo = this->m_pBaseClassInfo;
    if ( m_pBaseClassInfo == 0 )
      break;
    this = m_pBaseClassInfo->m_pClass;
  }
  while ( this != 0 );
  CUtlVectorBase<CUtlSymbolLarge,CUtlMemoryFixedGrowable<CUtlSymbolLarge,128ul,int>>::~CUtlVectorBase(&foundinputs);
}


// CEntityClass::GetEntityIOOutputs  (line 1033, @0x00000000030936a0, libserver.so)  // inlines: AddToTail, CUtlMemory, CUtlMemoryFixedGrowable, CUtlMemoryFixedGrowable_Base, CUtlSymbolLarge, CUtlVectorBase, CUtlVectorFixedGrowable, CopyConstruct<CUtlSymbolLarge>, CopyConstruct<const EntityIOOutputDesc_t*>, Element, EnsureCapacity, GetBaseClass, GrowMemory, memcpy, operator[], ~CUtlVectorFixedGrowable
// calls: CUtlVectorBase<CUtlSymbolLarge, CUtlMemoryFixedGrowable<CUtlSymbolLarge, 128ul, int> >::Find, CUtlVectorBase<CUtlSymbolLarge, CUtlMemoryFixedGrowable<CUtlSymbolLarge, 128ul, int> >::~CUtlVectorBase, CUtlMemory<const EntityIOOutputDesc_t*, int>::Grow, CUtlMemory<CUtlSymbolLarge, int>::Grow, memcpy, _Unwind_Resume, __stack_chk_fail
// callers: CEntityIdentity::GetEntityIOOutputs
void __fastcall CEntityClass::GetEntityIOOutputs(
        CEntityClass *const this,
        CUtlVector<const EntityIOOutputDesc_t*,CUtlMemory<const EntityIOOutputDesc_t*,int> > *const outputs)
{
  int m_Size; // r14d
  int v5; // ebx
  uint32 m_nGrowSize; // eax
  const EntityIOOutputDesc_t **v7; // rsi
  __int64 v8; // rax
  const EntityIOOutputDesc_t **v9; // rax
  int v10; // ebx
  unsigned __int64 v11; // rbx
  __int64 v12; // r14
  CEntityClass::ClassOutputInfo_t *v13; // r12
  EntityIOOutputDesc_t *m_pOutput; // rax
  __int64 v15; // r12
  int v16; // eax
  const EntityIOOutputDesc_t **v17; // rax
  __int64 v18; // r12
  int v19; // eax
  CUtlSymbolLarge *v20; // rax
  CEntityClassInfo *m_pBaseClassInfo; // rax
  __int64 v22; // rax
  CUtlSymbolLarge *v23; // rax
  const EntityIOOutputDesc_t **m_pMemory; // r12
  const EntityIOOutputDesc_t **v25; // rax
  CUtlSymbolLarge *v26; // r12
  CUtlSymbolLarge *v27; // rax
  CUtlVectorBase<const EntityIOOutputDesc_t*,CUtlMemory<const EntityIOOutputDesc_t*,int> >::CAllocator *p_m_Memory; // [rsp+0h] [rbp-470h]
  const EntityIOOutputDesc_t *v29; // [rsp+10h] [rbp-460h]
  CEntityClass::ClassOutputInfo_t *v30; // [rsp+10h] [rbp-460h]
  CUtlVectorFixedGrowable<CUtlSymbolLarge,128ul> foundoutputs; // [rsp+20h] [rbp-450h] BYREF
  unsigned __int64 v32; // [rsp+438h] [rbp-38h]

  foundoutputs.m_Size = 0;
  v32 = __readfsqword(0x28u);
  foundoutputs.m_Memory.m_nAllocationCount = 128;
  foundoutputs.m_Memory.m_pMemory = &foundoutputs.m_Memory.m_FixedMemory;
  foundoutputs.m_Memory.m_nGrowSize = 0x80000000;
  p_m_Memory = &outputs->m_Memory;
  do
  {
    m_Size = this->m_classOutputs.m_Size;
    v5 = m_Size + outputs->m_Size;
    if ( v5 > outputs->m_Memory.m_nAllocationCount )
    {
      m_nGrowSize = outputs->m_Memory.m_nGrowSize;
      if ( (m_nGrowSize & 0x40000000) == 0 )
      {
        if ( (m_nGrowSize & 0xC0000000) != 0 )
        {
          m_pMemory = outputs->m_Memory.m_pMemory;
          v25 = (**g_pMemAlloc)(g_pMemAlloc, 8LL * v5);
          outputs->m_Memory.m_pMemory = v25;
          if ( m_pMemory != 0 )
            memcpy(v25, m_pMemory, 8LL * outputs->m_Memory.m_nAllocationCount);
          outputs->m_Memory.m_nGrowSize &= 0x3FFFFFFFu;
        }
        else
        {
          v7 = outputs->m_Memory.m_pMemory;
          v8 = *g_pMemAlloc;
          if ( v7 != 0 )
            v9 = (*(v8 + 8))(g_pMemAlloc, v7, 8LL * v5);
          else
            v9 = (*v8)(g_pMemAlloc, 8LL * v5);
          outputs->m_Memory.m_pMemory = v9;
        }
        outputs->m_Memory.m_nAllocationCount = v5;
      }
    }
    v10 = m_Size + foundoutputs.m_Size;
    if ( m_Size + foundoutputs.m_Size > foundoutputs.m_Memory.m_nAllocationCount
      && (foundoutputs.m_Memory.m_nGrowSize & 0x40000000) == 0 )
    {
      if ( (foundoutputs.m_Memory.m_nGrowSize & 0xC0000000) != 0 )
      {
        v26 = foundoutputs.m_Memory.m_pMemory;
        v27 = (**g_pMemAlloc)(g_pMemAlloc, 8LL * v10);
        foundoutputs.m_Memory.m_pMemory = v27;
        if ( v26 != 0 )
          memcpy(v27, v26, 8LL * foundoutputs.m_Memory.m_nAllocationCount);
        foundoutputs.m_Memory.m_nGrowSize &= 0x3FFFFFFFu;
      }
      else
      {
        v22 = *g_pMemAlloc;
        if ( foundoutputs.m_Memory.m_pMemory != 0 )
          v23 = (*(v22 + 8))(g_pMemAlloc, foundoutputs.m_Memory.m_pMemory, 8LL * v10);
        else
          v23 = (*v22)(g_pMemAlloc, 8LL * v10);
        foundoutputs.m_Memory.m_pMemory = v23;
      }
      foundoutputs.m_Memory.m_nAllocationCount = v10;
    }
    if ( m_Size > 0 )
    {
      v11 = 0;
      v12 = 16 * ((m_Size - 1) + 1LL);
      do
      {
        while ( 1 )
        {
          v13 = &this->m_classOutputs.m_Memory.m_pMemory[v11 / 0x10];
          if ( CUtlVectorBase<CUtlSymbolLarge,CUtlMemoryFixedGrowable<CUtlSymbolLarge,128ul,int>>::Find(
                 &foundoutputs,
                 &v13->m_outputName) == -1 )
          {
            m_pOutput = v13->m_pOutput;
            v15 = outputs->m_Size;
            v29 = m_pOutput;
            v16 = v15;
            if ( v15 == outputs->m_Memory.m_nAllocationCount )
            {
              CUtlMemory<EntityIOOutputDesc_t const*,int>::Grow(p_m_Memory, 1);
              v16 = outputs->m_Size;
            }
            outputs->m_Size = v16 + 1;
            v17 = &outputs->m_Memory.m_pMemory[v15];
            if ( v17 != 0 )
              *v17 = v29;
            v18 = foundoutputs.m_Size;
            v30 = &this->m_classOutputs.m_Memory.m_pMemory[v11 / 0x10];
            v19 = foundoutputs.m_Size;
            if ( foundoutputs.m_Size == foundoutputs.m_Memory.m_nAllocationCount )
            {
              CUtlMemory<CUtlSymbolLarge,int>::Grow(&foundoutputs.m_Memory, 1);
              v19 = foundoutputs.m_Size;
            }
            foundoutputs.m_Size = v19 + 1;
            v20 = &foundoutputs.m_Memory.m_pMemory[v18];
            if ( v20 != 0 )
              break;
          }
          v11 += 16LL;
          if ( v11 == v12 )
            goto LABEL_22;
        }
        v11 += 16LL;
        v20->u.m_Id = v30->m_outputName;
      }
      while ( v11 != v12 );
    }
LABEL_22:
    m_pBaseClassInfo = this->m_pBaseClassInfo;
    if ( m_pBaseClassInfo == 0 )
      break;
    this = m_pBaseClassInfo->m_pClass;
  }
  while ( this != 0 );
  CUtlVectorBase<CUtlSymbolLarge,CUtlMemoryFixedGrowable<CUtlSymbolLarge,128ul,int>>::~CUtlVectorBase(&foundoutputs);
}


// CEntityClass::GetEntityIOOutputs  (line 1058, @0x0000000003093a20, libserver.so)  // inlines: AddToTail, CUtlMemory, CUtlMemoryFixedGrowable, CUtlMemoryFixedGrowable_Base, CUtlSymbolLarge, CUtlVectorBase, CUtlVectorFixedGrowable, CopyConstruct<CEntityIOOutput*>, CopyConstruct<CUtlSymbolLarge>, Element, EnsureCapacity, GetBaseClass, GrowMemory, memcpy, operator[], ~CUtlVectorFixedGrowable
// calls: CUtlVectorBase<CUtlSymbolLarge, CUtlMemoryFixedGrowable<CUtlSymbolLarge, 128ul, int> >::Find, CUtlVectorBase<CUtlSymbolLarge, CUtlMemoryFixedGrowable<CUtlSymbolLarge, 128ul, int> >::~CUtlVectorBase, CUtlMemory<CEntityIOOutput*, int>::Grow, CUtlMemory<CUtlSymbolLarge, int>::Grow, memcpy, _Unwind_Resume, __stack_chk_fail
// callers: CEntityIdentity::GetEntityIOOutputs
void __fastcall CEntityClass::GetEntityIOOutputs(
        CEntityClass *const this,
        CEntityInstance *pEntity,
        CUtlVector<CEntityIOOutput*,CUtlMemory<CEntityIOOutput*,int> > *const outputs)
{
  int m_Size; // r14d
  int v6; // ebx
  uint32 m_nGrowSize; // eax
  CEntityIOOutput **v8; // rsi
  __int64 v9; // rax
  CEntityIOOutput **v10; // rax
  int v11; // ebx
  unsigned __int64 v12; // rbx
  __int64 v13; // r14
  CEntityClass::ClassOutputInfo_t *v14; // r12
  int v15; // eax
  CEntityIOOutput **v16; // rax
  int v17; // eax
  CUtlSymbolLarge *v18; // rax
  CEntityClassInfo *m_pBaseClassInfo; // rax
  __int64 v20; // rax
  CUtlSymbolLarge *v21; // rax
  CEntityIOOutput **m_pMemory; // r12
  CEntityIOOutput **v23; // rax
  CUtlSymbolLarge *v24; // r12
  CUtlSymbolLarge *v25; // rax
  CUtlVectorBase<CEntityIOOutput*,CUtlMemory<CEntityIOOutput*,int> >::CAllocator *p_m_Memory; // [rsp+0h] [rbp-480h]
  CEntityIOOutput *pOutput; // [rsp+18h] [rbp-468h]
  int v29; // [rsp+24h] [rbp-45Ch]
  int v30; // [rsp+24h] [rbp-45Ch]
  CUtlVectorFixedGrowable<CUtlSymbolLarge,128ul> foundoutputs; // [rsp+30h] [rbp-450h] BYREF
  unsigned __int64 v32; // [rsp+448h] [rbp-38h]

  v32 = __readfsqword(0x28u);
  foundoutputs.m_Size = 0;
  foundoutputs.m_Memory.m_pMemory = &foundoutputs.m_Memory.m_FixedMemory;
  foundoutputs.m_Memory.m_nAllocationCount = 128;
  foundoutputs.m_Memory.m_nGrowSize = 0x80000000;
  p_m_Memory = &outputs->m_Memory;
  do
  {
    m_Size = this->m_classOutputs.m_Size;
    v6 = m_Size + outputs->m_Size;
    if ( v6 > outputs->m_Memory.m_nAllocationCount )
    {
      m_nGrowSize = outputs->m_Memory.m_nGrowSize;
      if ( (m_nGrowSize & 0x40000000) == 0 )
      {
        if ( (m_nGrowSize & 0xC0000000) != 0 )
        {
          m_pMemory = outputs->m_Memory.m_pMemory;
          v23 = (**g_pMemAlloc)(g_pMemAlloc, 8LL * v6);
          outputs->m_Memory.m_pMemory = v23;
          if ( m_pMemory != 0 )
            memcpy(v23, m_pMemory, 8LL * outputs->m_Memory.m_nAllocationCount);
          outputs->m_Memory.m_nGrowSize &= 0x3FFFFFFFu;
        }
        else
        {
          v8 = outputs->m_Memory.m_pMemory;
          v9 = *g_pMemAlloc;
          if ( v8 != 0 )
            v10 = (*(v9 + 8))(g_pMemAlloc, v8, 8LL * v6);
          else
            v10 = (*v9)(g_pMemAlloc, 8LL * v6);
          outputs->m_Memory.m_pMemory = v10;
        }
        outputs->m_Memory.m_nAllocationCount = v6;
      }
    }
    v11 = m_Size + foundoutputs.m_Size;
    if ( m_Size + foundoutputs.m_Size > foundoutputs.m_Memory.m_nAllocationCount
      && (foundoutputs.m_Memory.m_nGrowSize & 0x40000000) == 0 )
    {
      if ( (foundoutputs.m_Memory.m_nGrowSize & 0xC0000000) != 0 )
      {
        v24 = foundoutputs.m_Memory.m_pMemory;
        v25 = (**g_pMemAlloc)(g_pMemAlloc, 8LL * v11);
        foundoutputs.m_Memory.m_pMemory = v25;
        if ( v24 != 0 )
          memcpy(v25, v24, 8LL * foundoutputs.m_Memory.m_nAllocationCount);
        foundoutputs.m_Memory.m_nGrowSize &= 0x3FFFFFFFu;
      }
      else
      {
        v20 = *g_pMemAlloc;
        if ( foundoutputs.m_Memory.m_pMemory != 0 )
          v21 = (*(v20 + 8))(g_pMemAlloc, foundoutputs.m_Memory.m_pMemory, 8LL * v11);
        else
          v21 = (*v20)(g_pMemAlloc, 8LL * v11);
        foundoutputs.m_Memory.m_pMemory = v21;
      }
      foundoutputs.m_Memory.m_nAllocationCount = v11;
    }
    if ( m_Size > 0 )
    {
      v12 = 0;
      v13 = 16 * ((m_Size - 1) + 1LL);
      do
      {
        while ( 1 )
        {
          v14 = &this->m_classOutputs.m_Memory.m_pMemory[v12 / 0x10];
          if ( CUtlVectorBase<CUtlSymbolLarge,CUtlMemoryFixedGrowable<CUtlSymbolLarge,128ul,int>>::Find(
                 &foundoutputs,
                 &v14->m_outputName) == -1 )
          {
            pOutput = (pEntity + v14->m_pOutput->m_nOutputOffset);
            v15 = outputs->m_Size;
            v29 = outputs->m_Size;
            if ( outputs->m_Size == outputs->m_Memory.m_nAllocationCount )
            {
              CUtlMemory<CEntityIOOutput *,int>::Grow(p_m_Memory, 1);
              v15 = outputs->m_Size;
            }
            outputs->m_Size = v15 + 1;
            v16 = &outputs->m_Memory.m_pMemory[v29];
            if ( v16 != 0 )
              *v16 = pOutput;
            v17 = foundoutputs.m_Size;
            v30 = foundoutputs.m_Size;
            if ( foundoutputs.m_Size == foundoutputs.m_Memory.m_nAllocationCount )
            {
              CUtlMemory<CUtlSymbolLarge,int>::Grow(&foundoutputs.m_Memory, 1);
              v17 = foundoutputs.m_Size;
            }
            foundoutputs.m_Size = v17 + 1;
            v18 = &foundoutputs.m_Memory.m_pMemory[v30];
            if ( v18 != 0 )
              break;
          }
          v12 += 16LL;
          if ( v12 == v13 )
            goto LABEL_22;
        }
        v12 += 16LL;
        v18->u.m_Id = v14->m_outputName;
      }
      while ( v12 != v13 );
    }
LABEL_22:
    m_pBaseClassInfo = this->m_pBaseClassInfo;
    if ( m_pBaseClassInfo == 0 )
      break;
    this = m_pBaseClassInfo->m_pClass;
  }
  while ( this != 0 );
  CUtlVectorBase<CUtlSymbolLarge,CUtlMemoryFixedGrowable<CUtlSymbolLarge,128ul,int>>::~CUtlVectorBase(&foundoutputs);
}


// CEntityClass::GetEntityUnserializer  (line 1086, @0x0000000003093db0, libserver.so)  // inlines: AddToTail, CopyConstruct<ComponentUnserializerClassInfo_t*>, Element, GrowMemory, UsesComponent, operator[]
// calls: CEntitySystem::NumComponentTypes, CEntitySystem::FindComponentTypeByRuntimeIndex, CUtlMemory<ComponentUnserializerClassInfo_t*, int>::Grow
// callers: ConvertOldKeyValuesToNew, ConvertMapDataKV
void __fastcall CEntityClass::GetEntityUnserializer(
        CEntityClass *const this,
        CUtlVector<ComponentUnserializerClassInfo_t*,CUtlMemory<ComponentUnserializerClassInfo_t*,int> > *const unserializer)
{
  __int64 v4; // rbx
  int v5; // r13d
  EntComponentInfo_t *m_pInfo; // r8
  __int64 m_Size; // rax
  int v8; // ecx
  ComponentUnserializerClassInfo_t **v9; // rax
  __int64 v10; // rbx
  ComponentUnserializerClassInfo_t **v11; // rax
  int v12; // [rsp+Ch] [rbp-44h]
  EntComponentInfo_t *v13; // [rsp+10h] [rbp-40h]

  v4 = 0;
  v5 = CEntitySystem::NumComponentTypes(g_pEntitySystem);
  if ( v5 > 0 )
  {
    do
    {
      if ( this->m_ComponentOffsets.m_Memory.m_pMemory[v4].m_nBaseOffset != 0xFFFF )
      {
        m_pInfo = CEntitySystem::FindComponentTypeByRuntimeIndex(g_pEntitySystem, v4)->m_pInfo;
        m_Size = unserializer->m_Size;
        v8 = unserializer->m_Size;
        if ( m_Size == unserializer->m_Memory.m_nAllocationCount )
        {
          v12 = unserializer->m_Size;
          v13 = m_pInfo;
          CUtlMemory<ComponentUnserializerClassInfo_t *,int>::Grow(&unserializer->m_Memory, 1);
          v8 = unserializer->m_Size;
          m_Size = v12;
          m_pInfo = v13;
        }
        unserializer->m_Size = v8 + 1;
        v9 = &unserializer->m_Memory.m_pMemory[m_Size];
        if ( v9 != 0 )
          *v9 = &m_pInfo->m_unserializer;
      }
      ++v4;
    }
    while ( v5 > v4 );
  }
  v10 = unserializer->m_Size;
  if ( v10 == unserializer->m_Memory.m_nAllocationCount )
    CUtlMemory<ComponentUnserializerClassInfo_t *,int>::Grow(&unserializer->m_Memory, 1);
  ++unserializer->m_Size;
  v11 = &unserializer->m_Memory.m_pMemory[v10];
  if ( v11 != 0 )
    *v11 = &this->m_instanceUnserializer;
}


// CEntityClass::FindEntityIOOutputByName  (line 1101, @0x0000000003092900, libserver.so)  // inlines: Element, GetBaseClass, SortedFind, operator=, operator[]
// calls: CEntitySystem::AllocPooledString
// callers: CEntityIdentity::FindEntityIOOutputsByName
CEntityIOOutput *__fastcall CEntityClass::FindEntityIOOutputByName(
        CEntityClass *const this,
        const char *pName,
        CEntityInstance *pEntity)
{
  int v6; // r10d
  int v7; // r9d
  int v8; // ecx
  CEntityClass::ClassOutputInfo_t *v9; // r8
  CEntityClassInfo *m_pBaseClassInfo; // rax
  CEntityClass *m_pClass; // rdi
  UtlSymLargeId_t v13; // [rsp+0h] [rbp-30h]

  CEntitySystem::AllocPooledString(g_pEntitySystem, pName);
  v6 = this->m_classOutputs.m_Size - 1;
  if ( v6 >= 0 )
  {
    v7 = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        v8 = (v7 + v6) >> 1;
        v9 = &this->m_classOutputs.m_Memory.m_pMemory[v8];
        if ( v13 <= v9->m_outputName.u.m_Id )
          break;
        v7 = v8 + 1;
        if ( v6 < v8 + 1 )
          goto LABEL_7;
      }
      if ( v13 >= v9->m_outputName.u.m_Id )
        break;
      v6 = v8 - 1;
      if ( v8 - 1 < v7 )
        goto LABEL_7;
    }
    if ( v8 >= 0 )
      return (pEntity + v9->m_pOutput->m_nOutputOffset);
  }
LABEL_7:
  m_pBaseClassInfo = this->m_pBaseClassInfo;
  if ( m_pBaseClassInfo != 0 && (m_pClass = m_pBaseClassInfo->m_pClass) != 0 )
    return CEntityClass::FindEntityIOOutputByName(m_pClass, pName, pEntity);
  else
    return 0;
}


