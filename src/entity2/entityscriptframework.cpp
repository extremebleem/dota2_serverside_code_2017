// Reconstructed from DWARF by pahole; not original source.

// src/entity2/entityscriptframework.cpp:21
class CScriptNativeOutputs {
	CScriptNativeOutputs();
	void Init(int);
	void AddOutput(const char *, const char *);
	~CScriptNativeOutputs();

	// sizeof = 24
};

// src/entity2/entityscriptframework.cpp:139
class CEntityComponentHelperFactory_CScriptComponent : CEntityComponentHelpers {
	CEntityComponentHelperFactory_CScriptComponent();

	// sizeof = 1
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// _GLOBAL__sub_I_entityscriptframework.cpp  (line 0, @0x0000000001a689a0, libserver.so)  // inlines: AddToList, CEntityComponentHelperFactory_CScriptComponent, CEntityScriptFramework, CFieldPathHuffmanEncoder, CInterlockedIntT, CScriptAccessorT, CScriptFuncHolder, CScriptScopeT, CUtlMemory, CUtlMemoryPool, CUtlNonTSHashPreHashedKeys, CUtlTSHashBase, CUtlVector, CUtlVectorBase, CUtlVectorFixed, CUtlVectorUltraConservative, CVariantBase, Color, ComponentUnserializerClassInfo_t, EntComponentInfo_t, Purge, RemoveAll, SetColor, ThreadInterlockedExchange, __static_initialization_and_destruction_0, operator=, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~CUtlVectorFixed
// calls: __cxa_atexit, CUtlMemoryPoolBase::CUtlMemoryPoolBase, CEntityComponentHelperInit_CScriptComponent, CFieldPathHuffmanEncoder::BuildOpCodeCodeToHuffmanLookup, _Unwind_Resume, CUtlMemory<CFieldPathHuffmanEncoder::composed_t, int>::Purge, CUtlMemory<int, int>::Purge
// globals: UNSPECIFIED_LOGGING_COLOR, `guard variable for'g_HuffmanEncoder, `guard variable for'CEntityKeyValues::sm_EmptyVariant, __dso_handle, g_EntityScriptFramework, CEntityScriptFramework::~CEntityScriptFramework(), CScriptComponent::s_EntComponentInfo, EntComponentInfo_t::~EntComponentInfo_t() (15 total)
void __cdecl GLOBAL__sub_I_entityscriptframework_cpp()
{
  EntComponentInfo_t *v0; // rax
  CEntityComponentHelper *inited; // rax
  CEntityComponentHelper *v2; // rdx

  UNSPECIFIED_LOGGING_COLOR._color[0] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[1] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[2] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[3] = 0;
  // init once: g_HuffmanEncoder
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
  // init once: CEntityKeyValues::sm_EmptyVariant
  CEntityKeyValues::sm_EmptyVariant.m_type = 0;
  CEntityKeyValues::sm_EmptyVariant.m_flags = 0;
  CEntityKeyValues::sm_EmptyVariant.m_uint64 = 0;
  __cxa_atexit(CVariantBase<CEntityVariantAllocator>::~CVariantBase, &CEntityKeyValues::sm_EmptyVariant, &_dso_handle);
  g_EntityScriptFramework.m_hScope = 0;
  g_EntityScriptFramework.m_FuncHandles.m_pData = 0;
  g_EntityScriptFramework.m_flags = 0;
  g_EntityScriptFramework.m_hScriptFunc_GetEntityHandle.hFunction = 0;
  g_EntityScriptFramework.m_hScriptFunc_GetScriptClassForDesignerName.hFunction = 0;
  g_EntityScriptFramework.m_hScriptFunc_GetDesignerNameForScriptClass.hFunction = 0;
  g_EntityScriptFramework.m_hScriptFunc_GetNativeClassForScriptClass.hFunction = 0;
  g_EntityScriptFramework.m_hScriptFunc_GetInputsForScriptClass.hFunction = 0;
  g_EntityScriptFramework.m_hScriptFunc_GetClassNameOverride.hFunction = 0;
  g_EntityScriptFramework.m_hScriptFunc_CreateEntity.hFunction = 0;
  g_EntityScriptFramework.m_hScriptFunc_DispatchInput.hFunction = 0;
  g_EntityScriptFramework.m_hScriptFunc_InstallClasses.hFunction = 0;
  g_EntityScriptFramework.m_hScriptFunc_IsKeyValueUsed.hFunction = 0;
  g_EntityScriptFramework.m_hScriptFunc_DispatchPrecache.hFunction = 0;
  g_EntityScriptFramework.m_hScriptFunc_DispatchSpawn.hFunction = 0;
  g_EntityScriptFramework.m_hScriptFunc_DispatchActivate.hFunction = 0;
  g_EntityScriptFramework.m_hScriptFunc_DispatchUpdateOnRemove.hFunction = 0;
  g_EntityScriptFramework.m_hScriptFunc_GetNativeOutputsForClass.hFunction = 0;
  __cxa_atexit(CEntityScriptFramework::~CEntityScriptFramework, &g_EntityScriptFramework, &_dso_handle);
  CScriptComponent::s_EntComponentInfo.m_unserializer.m_pBaseClassUnserializer = -1LL;
  CUtlMemoryPoolBase::CUtlMemoryPoolBase(
    &CScriptComponent::s_EntComponentInfo.m_unserializer.m_atomicFields.m_EntryMemory,
    48,
    4,
    8,
    MemoryPoolGrowType_t::UTLMEMORYPOOL_GROW_SLOW,
    0);
  CScriptComponent::s_EntComponentInfo.m_unserializer.m_atomicFields.m_ContentionCheck.m_value = 0;
  _InterlockedExchange(&CScriptComponent::s_EntComponentInfo.m_unserializer.m_atomicFields.m_ContentionCheck.m_value, 0);
  CScriptComponent::s_EntComponentInfo.m_unserializer.m_atomicFields.m_bNeedsCommit = 0;
  v0 = &CScriptComponent::s_EntComponentInfo;
  do
  {
    v0->m_unserializer.m_atomicFields.m_aBuckets[0].m_pFirst = 0;
    v0 = (v0 + 16);
    v0->m_unserializer.m_atomicFields.m_EntryMemory.m_Blobs.m_pPop = 0;
  }
  while ( v0 != &CScriptComponent::s_EntComponentInfo.m_unserializer.m_atomicFields.m_aBuckets[8] );
  CScriptComponent::s_EntComponentInfo.m_unserializer.m_ptrFields.m_Size = 0;
  CScriptComponent::s_EntComponentInfo.m_unserializer.m_ptrFields.m_Memory.m_pMemory = 0;
  CScriptComponent::s_EntComponentInfo.m_unserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
  CScriptComponent::s_EntComponentInfo.m_unserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
  CScriptComponent::s_EntComponentInfo.m_unserializer.m_postUnserializeHandlers.m_Size = 0;
  CScriptComponent::s_EntComponentInfo.m_unserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
  CScriptComponent::s_EntComponentInfo.m_unserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
  CScriptComponent::s_EntComponentInfo.m_unserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
  CScriptComponent::s_EntComponentInfo.m_unserializer.m_outputFields.m_Size = 0;
  CScriptComponent::s_EntComponentInfo.m_unserializer.m_outputFields.m_Memory.m_pMemory = 0;
  CScriptComponent::s_EntComponentInfo.m_unserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
  CScriptComponent::s_EntComponentInfo.m_unserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
  __cxa_atexit(EntComponentInfo_t::~EntComponentInfo_t, &CScriptComponent::s_EntComponentInfo, &_dso_handle);
  inited = CEntityComponentHelperInit_CScriptComponent();
  v2 = CEntityComponentHelpers::GetList(void)::g_pList;
  CEntityScriptFramework::sm_GlobalScriptScope.m_hScope = 0;
  CEntityComponentHelpers::GetList(void)::g_pList = inited;
  inited->m_pNext = v2;
  __cxa_atexit(
    CScriptAccessorT<CEntityFrameScriptAccessorBase,false>::~CScriptAccessorT,
    &CEntityScriptFramework::sm_GlobalScriptScope,
    &_dso_handle);
}


// CScriptNativeOutputs::Init  (line 24, @0x00000000030d25e0, libserver.so)  // inlines: EnsureCapacity, memcpy
// calls: memcpy
void __fastcall CScriptNativeOutputs::Init(CScriptNativeOutputs *const this, int n)
{
  uint32 m_nGrowSize; // eax
  ScriptEntityIOOutputDesc_t *v5; // rsi
  ScriptEntityIOOutputDesc_t *m_pMemory; // r13
  ScriptEntityIOOutputDesc_t *v7; // rax

  if ( n > this->m_Outputs.m_Memory.m_nAllocationCount )
  {
    m_nGrowSize = this->m_Outputs.m_Memory.m_nGrowSize;
    if ( (m_nGrowSize & 0x40000000) == 0 )
    {
      if ( (m_nGrowSize & 0xC0000000) != 0 )
      {
        m_pMemory = this->m_Outputs.m_Memory.m_pMemory;
        v7 = (**g_pMemAlloc)(g_pMemAlloc, 24LL * n);
        this->m_Outputs.m_Memory.m_pMemory = v7;
        if ( m_pMemory != 0 )
          memcpy(v7, m_pMemory, 24LL * this->m_Outputs.m_Memory.m_nAllocationCount);
        this->m_Outputs.m_Memory.m_nGrowSize &= 0x3FFFFFFFu;
      }
      else
      {
        v5 = this->m_Outputs.m_Memory.m_pMemory;
        if ( v5 != 0 )
          this->m_Outputs.m_Memory.m_pMemory = (*(*g_pMemAlloc + 8LL))(g_pMemAlloc, v5, 24LL * n);
        else
          this->m_Outputs.m_Memory.m_pMemory = (**g_pMemAlloc)(g_pMemAlloc, 24LL * n);
      }
      this->m_Outputs.m_Memory.m_nAllocationCount = n;
    }
  }
}


// CScriptNativeOutputs::AddOutput  (line 29, @0x00000000030d3ca0, libserver.so)  // inlines: AddToTail, CUtlSymbolLarge, CopyConstruct<ScriptEntityIOOutputDesc_t>, Element, GrowMemory, ScriptEntityIOOutputDesc_t, operator[]
// calls: strdup, CUtlMemory<ScriptEntityIOOutputDesc_t, int>::Grow
void __fastcall CScriptNativeOutputs::AddOutput(
        CScriptNativeOutputs *const this,
        const char *pszName,
        const char *pszDesc)
{
  int m_Size; // r12d
  char *v5; // rax
  int v6; // edx
  ScriptEntityIOOutputDesc_t *v7; // rdx
  char *v8; // [rsp+8h] [rbp-18h]

  m_Size = this->m_Outputs.m_Size;
  v5 = strdup(pszName);
  v6 = m_Size;
  if ( m_Size == this->m_Outputs.m_Memory.m_nAllocationCount )
  {
    v8 = v5;
    CUtlMemory<ScriptEntityIOOutputDesc_t,int>::Grow(&this->m_Outputs.m_Memory, 1);
    v6 = this->m_Outputs.m_Size;
    v5 = v8;
  }
  this->m_Outputs.m_Size = v6 + 1;
  v7 = &this->m_Outputs.m_Memory.m_pMemory[m_Size];
  if ( v7 != 0 )
  {
    v7->m_pName = v5;
    v7->m_nFlags = 0;
    v7->m_nOutputOffset = m_Size;
    v7->m_name.u.m_Id = 0;
  }
}


// CScriptPrecacheContext::CScriptPrecacheContext  (line 49, @0x00000000030d0b10, libserver.so)  // inlines: GetVM, RegisterInstance<CScriptPrecacheContext>
// calls: GetScriptDesc<CScriptPrecacheContext>
// callers: CEntityInstance::Precache
void __fastcall CScriptPrecacheContext::CScriptPrecacheContext(
        CScriptPrecacheContext *const this,
        const CEntityPrecacheContext *pContext)
{
  IScriptVM *v3; // r12
  __int64 (__fastcall *v4)(IScriptVM *, ScriptClassDesc_t *, CScriptPrecacheContext *const); // r13
  ScriptClassDesc_t *Script; // rax

  this->m_pContext = pContext;
  v3 = g_pScriptVM;
  v4 = *(*g_pScriptVM + 184LL);
  Script = GetScriptDesc<CScriptPrecacheContext>(this);
  this->m_hPrecacheContext = v4(v3, Script, this);
}


// CScriptPrecacheContext::CScriptPrecacheContext  (line 55, @0x00000000030d0b60, libserver.so)  // inlines: GetVM, RegisterInstance<CScriptPrecacheContext>
// calls: GetScriptDesc<CScriptPrecacheContext>
void __fastcall CScriptPrecacheContext::CScriptPrecacheContext(
        CScriptPrecacheContext *const this,
        IEntityResourceManifest *pManifest)
{
  IScriptVM *v3; // r12
  __int64 (__fastcall *v4)(IScriptVM *, ScriptClassDesc_t *, CScriptPrecacheContext *const); // r13
  ScriptClassDesc_t *Script; // rax

  this->m_scratch.m_pKeyValues = 0;
  this->m_scratch.m_pManifest = pManifest;
  this->m_scratch.m_pConfig = 0;
  this->m_pContext = &this->m_scratch;
  v3 = g_pScriptVM;
  v4 = *(*g_pScriptVM + 184LL);
  Script = GetScriptDesc<CScriptPrecacheContext>(this);
  this->m_hPrecacheContext = v4(v3, Script, this);
}


// CScriptPrecacheContext::~CScriptPrecacheContext  (line 65, @0x00000000030cde80, libserver.so)  // inlines: GetVM
// callers: CEntityInstance::Precache
void __fastcall CScriptPrecacheContext::~CScriptPrecacheContext(CScriptPrecacheContext *const this)
{
  (*(*g_pScriptVM + 200LL))(g_pScriptVM, this->m_hPrecacheContext);
}


// CScriptPrecacheContext::GetHScript  (line 70, @0x00000000030cdeb0, libserver.so)
// callers: CEntityInstance::Precache
HSCRIPT __fastcall CScriptPrecacheContext::GetHScript(const CScriptPrecacheContext *const this)
{
  return this->m_hPrecacheContext;
}


// CScriptPrecacheContext::GetValue  (line 75, @0x00000000030cf730, libserver.so)  // inlines: AssignTo<double>, Base, CVariantBase, Element, FindKeyHash, GetValue, MakeStringToken, operator[]
// calls: CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>, MurmurHash2LowerCase, RegisterStringToken
// globals: CEntityKeyValues::sm_EmptyVariant
CVariantBase<CVariantDefaultAllocator> *__fastcall CScriptPrecacheContext::GetValue(
        CVariantBase<CVariantDefaultAllocator> *a1,
        CScriptPrecacheContext *const this,
        const char *pszKey)
{
  uint32 v3; // r11d
  const CEntityPrecacheContext *m_pContext; // rax
  const CEntityKeyValues *m_pKeyValues; // r8
  int v9; // r10d
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t m_nAllocated; // r9
  __int64 v11; // rdx
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rcx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v13; // rcx
  const CVariantBase<CVariantDefaultAllocator> *v14; // rdi
  int16 m_type; // ax
  double m_uint64; // xmm0_8
  uint32 v18; // eax
  __int64 v19; // rdx
  uint32 v20; // [rsp+Ch] [rbp-34h]
  CEntityVariant converted; // [rsp+10h] [rbp-30h] BYREF

  v3 = 0;
  if ( pszKey != 0 && *pszKey != 0 )
  {
    v18 = MurmurHash2LowerCase(pszKey, 0x31415926u);
    if ( g_bUpdateStringTokenDatabase )
    {
      v20 = v18;
      RegisterStringToken(v18, pszKey, 0, 1);
      v18 = v20;
    }
    v3 = v18;
  }
  m_pContext = this->m_pContext;
  m_pKeyValues = m_pContext->m_pKeyValues;
  v9 = m_pContext->m_pKeyValues->m_keyHashes.0;
  if ( v9 <= 0 )
  {
LABEL_16:
    v14 = &CEntityKeyValues::sm_EmptyVariant;
    m_type = CEntityKeyValues::sm_EmptyVariant.m_type;
    if ( m_type == 26 )
      goto LABEL_14;
    goto LABEL_17;
  }
  m_nAllocated = m_pKeyValues->m_keyHashes.m_nAllocated;
  v11 = 0;
  while ( m_nAllocated == 0 )
  {
    if ( v3 == *(4 * v11) )
      goto LABEL_11;
LABEL_8:
    if ( v9 <= ++v11 )
      goto LABEL_16;
  }
  m_pElements = (&m_pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
  if ( m_nAllocated > 9 )
    m_pElements = m_pKeyValues->m_keyHashes.m_pElements;
  if ( v3 != m_pElements[v11] )
    goto LABEL_8;
LABEL_11:
  if ( m_pKeyValues->m_keyValues.m_nAllocated != 0 )
    v13 = m_pKeyValues->m_keyValues.m_pElements;
  else
    v13 = 0;
  v14 = &v13[v11];
  m_type = v14->m_type;
  if ( m_type == 26 )
  {
LABEL_14:
    m_uint64 = v14->m_uint64;
    goto LABEL_15;
  }
LABEL_17:
  if ( m_type == 33 )
  {
    if ( v14->m_int64 < 0 )
    {
      v19 = v14->m_uint64 & 1 | (v14->m_uint64 >> 1);
      m_uint64 = v19 + v19;
    }
    else
    {
      m_uint64 = v14->m_uint64;
    }
LABEL_15:
    a1->m_flags = 0;
    a1->m_type = 0;
    converted.m_type = 34;
    converted.m_flags = 0;
    converted.m_float64 = m_uint64;
    CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&converted, a1);
    return a1;
  }
  else
  {
    a1->m_type = 0;
    a1->m_flags = 0;
    CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(v14, a1);
    return a1;
  }
}


// CScriptPrecacheContext::AddResource  (line 94, @0x00000000030cd8c0, libserver.so)
void __fastcall CScriptPrecacheContext::AddResource(CScriptPrecacheContext *const this, const char *pResourceName)
{
  (**this->m_pContext->m_pManifest)(this->m_pContext->m_pManifest, pResourceName);
}


// CScriptKeyValues::CScriptKeyValues  (line 101, @0x00000000030d0590, libserver.so)  // inlines: GetVM, RegisterInstance<CScriptKeyValues>
// calls: GetScriptDesc<CScriptKeyValues>
// callers: CEntityInstance::Spawn
void __fastcall CScriptKeyValues::CScriptKeyValues(CScriptKeyValues *const this, const CEntityKeyValues *pKeyValues)
{
  IScriptVM *v3; // r12
  __int64 (__fastcall *v4)(IScriptVM *, ScriptClassDesc_t *, CScriptKeyValues *const); // r13
  ScriptClassDesc_t *Script; // rax

  this->m_pKeyValues = pKeyValues;
  v3 = g_pScriptVM;
  v4 = *(*g_pScriptVM + 184LL);
  Script = GetScriptDesc<CScriptKeyValues>(this);
  this->m_hKeyValues = v4(v3, Script, this);
}


// CScriptKeyValues::~CScriptKeyValues  (line 107, @0x00000000030cdec0, libserver.so)  // inlines: GetVM
// callers: CEntityInstance::Spawn
void __fastcall CScriptKeyValues::~CScriptKeyValues(CScriptKeyValues *const this)
{
  (*(*g_pScriptVM + 200LL))(g_pScriptVM, this->m_hKeyValues);
}


// CScriptKeyValues::GetHScript  (line 112, @0x00000000030cdef0, libserver.so)
// callers: CEntityInstance::Spawn
HSCRIPT __fastcall CScriptKeyValues::GetHScript(const CScriptKeyValues *const this)
{
  return this->m_hKeyValues;
}


// CScriptKeyValues::GetValue  (line 117, @0x00000000030cf8e0, libserver.so)  // inlines: AssignTo<double>, Base, CVariantBase, Element, FindKeyHash, GetValue, MakeStringToken, operator[]
// calls: CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>, MurmurHash2LowerCase, RegisterStringToken
// globals: CEntityKeyValues::sm_EmptyVariant
CVariantBase<CVariantDefaultAllocator> *__fastcall CScriptKeyValues::GetValue(
        CVariantBase<CVariantDefaultAllocator> *a1,
        CScriptKeyValues *const this,
        const char *pszKey)
{
  uint32 v3; // r11d
  const CEntityKeyValues *m_pKeyValues; // r8
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::lambda::lambda v8; // r10d
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t m_nAllocated; // r9
  __int64 v10; // rdx
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rcx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v12; // rcx
  const CVariantBase<CVariantDefaultAllocator> *v13; // rdi
  int16 m_type; // ax
  double m_uint64; // xmm0_8
  uint32 v17; // eax
  __int64 v18; // rdx
  uint32 v19; // [rsp+Ch] [rbp-34h]
  CEntityVariant converted; // [rsp+10h] [rbp-30h] BYREF

  v3 = 0;
  if ( pszKey != 0 && *pszKey != 0 )
  {
    v17 = MurmurHash2LowerCase(pszKey, 0x31415926u);
    if ( g_bUpdateStringTokenDatabase )
    {
      v19 = v17;
      RegisterStringToken(v17, pszKey, 0, 1);
      v17 = v19;
    }
    v3 = v17;
  }
  m_pKeyValues = this->m_pKeyValues;
  v8 = this->m_pKeyValues->m_keyHashes.0;
  if ( *&v8 <= 0 )
  {
LABEL_16:
    v13 = &CEntityKeyValues::sm_EmptyVariant;
    m_type = CEntityKeyValues::sm_EmptyVariant.m_type;
    if ( m_type == 26 )
      goto LABEL_14;
    goto LABEL_17;
  }
  m_nAllocated = m_pKeyValues->m_keyHashes.m_nAllocated;
  v10 = 0;
  while ( m_nAllocated == 0 )
  {
    if ( v3 == *(4 * v10) )
      goto LABEL_11;
LABEL_8:
    if ( *&v8 <= ++v10 )
      goto LABEL_16;
  }
  m_pElements = (&m_pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
  if ( m_nAllocated > 9 )
    m_pElements = m_pKeyValues->m_keyHashes.m_pElements;
  if ( v3 != m_pElements[v10] )
    goto LABEL_8;
LABEL_11:
  if ( m_pKeyValues->m_keyValues.m_nAllocated != 0 )
    v12 = m_pKeyValues->m_keyValues.m_pElements;
  else
    v12 = 0;
  v13 = &v12[v10];
  m_type = v13->m_type;
  if ( m_type == 26 )
  {
LABEL_14:
    m_uint64 = v13->m_uint64;
    goto LABEL_15;
  }
LABEL_17:
  if ( m_type == 33 )
  {
    if ( v13->m_int64 < 0 )
    {
      v18 = v13->m_uint64 & 1 | (v13->m_uint64 >> 1);
      m_uint64 = v18 + v18;
    }
    else
    {
      m_uint64 = v13->m_uint64;
    }
LABEL_15:
    converted.m_float64 = m_uint64;
    converted.m_type = 34;
    converted.m_flags = 0;
    a1->m_type = 0;
    a1->m_flags = 0;
    CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&converted, a1);
    return a1;
  }
  else
  {
    a1->m_type = 0;
    a1->m_flags = 0;
    CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(v13, a1);
    return a1;
  }
}


// CScriptComponent::GetEntComponentInfo  (line 139, @0x00000000030cdf00, libserver.so)  // inlines: HashStringFastCaseless, HashToShort
// calls: __cxa_guard_acquire, HashString, MurmurHash2LowerCase, __cxa_guard_release, __cxa_guard_abort, _Unwind_Resume
// callers: CEntityComponentHelperInit_CScriptComponent
// strings: "CScriptComponentReferenced", "CScriptComponentReferencedPtr"
// globals: CScriptComponent::s_EntComponentInfo, `guard variable for'CScriptComponent::GetEntComponentInfo(void)::UUID_CScriptComponent, CScriptComponent::GetEntComponentInfo(void)::UUID_CScriptComponent
EntComponentInfo_t *__cdecl CScriptComponent::GetEntComponentInfo()
{
  unsigned int v1; // eax
  uint32 v2; // eax

  if ( CScriptComponent::s_EntComponentInfo.m_pName != 0 )
    return &CScriptComponent::s_EntComponentInfo;
  if ( `guard variable for'CScriptComponent::GetEntComponentInfo(void)::UUID_CScriptComponent == 0
    && __cxa_guard_acquire(&`guard variable for'CScriptComponent::GetEntComponentInfo(void)::UUID_CScriptComponent) != 0 )
  {
    CScriptComponent::GetEntComponentInfo(void)::UUID_CScriptComponent.Data1 = -1911672657;
    v1 = HashString("CScriptComponent");
    CScriptComponent::GetEntComponentInfo(void)::UUID_CScriptComponent.Data2 = HIWORD(v1) ^ v1;
    v2 = MurmurHash2LowerCase("CScriptComponent", 0x3501A674u);
    CScriptComponent::GetEntComponentInfo(void)::UUID_CScriptComponent.Data3 = HIWORD(v2) ^ v2;
    __cxa_guard_release(&`guard variable for'CScriptComponent::GetEntComponentInfo(void)::UUID_CScriptComponent);
  }
  CScriptComponent::s_EntComponentInfo.m_nRuntimeIndex = -1;
  CScriptComponent::s_EntComponentInfo.m_nFlags = 2;
  CScriptComponent::s_EntComponentInfo.m_id = CScriptComponent::GetEntComponentInfo(void)::UUID_CScriptComponent;
  CScriptComponent::s_EntComponentInfo.m_pName = "ScriptComponent";
  CScriptComponent::s_EntComponentInfo.m_pCPPClassname = "CScriptComponent";
  CScriptComponent::s_EntComponentInfo.m_pNetworkDataReferencedDescription = "CScriptComponentReferenced";
  CScriptComponent::s_EntComponentInfo.m_pNetworkDataReferencedPtrPropDescription = "CScriptComponentReferencedPtr";
  return &CScriptComponent::s_EntComponentInfo;
}


// CEntityComponentHelperInit_CScriptComponent  (line 139, @0x00000000030ce020, libserver.so)  // inlines: CEntityComponentHelper, CEntityComponentHelperReferenced, CEntityComponentHelperT, GetBaseComponentHelper, SetPriority
// calls: CScriptComponent::GetEntComponentInfo, CEntityComponentHelperInit_CEntityComponent, __cxa_guard_acquire, __cxa_guard_release, __cxa_guard_abort, _Unwind_Resume
// callers: CEntityComponentHelperFactory_CScriptComponent::CEntityComponentHelperFactory_CScriptComponent, _GLOBAL__sub_I_entityscriptframework.cpp
// globals: `guard variable for'CEntityComponentHelperInit_CScriptComponent(void)::componentHelper, CEntityComponentHelperInit_CScriptComponent(void)::s_bIsInitialized, CEntityComponentHelperInit_CScriptComponent(void)::componentHelper
CEntityComponentHelper *__cdecl CEntityComponentHelperInit_CScriptComponent()
{
  EntComponentInfo_t *EntComponentInfo; // rbx
  CEntityComponentHelper *inited; // rax

  if ( `guard variable for'CEntityComponentHelperInit_CScriptComponent(void)::componentHelper == 0
    && __cxa_guard_acquire(&`guard variable for'CEntityComponentHelperInit_CScriptComponent(void)::componentHelper) != 0 )
  {
    CEntityComponentHelperInit_CScriptComponent(void)::componentHelper.m_flags = 0;
    CEntityComponentHelperInit_CScriptComponent(void)::componentHelper.m_pInfo = 0;
    CEntityComponentHelperInit_CScriptComponent(void)::componentHelper.m_nPriority = 0;
    CEntityComponentHelperInit_CScriptComponent(void)::componentHelper._vptr_CEntityComponentHelper = &off_47C3450;
    CEntityComponentHelperInit_CScriptComponent(void)::componentHelper.m_pInfo = CScriptComponent::GetEntComponentInfo();
    CEntityComponentHelperInit_CScriptComponent(void)::componentHelper.m_bFinalized = 0;
    __cxa_guard_release(&`guard variable for'CEntityComponentHelperInit_CScriptComponent(void)::componentHelper);
  }
  if ( !CEntityComponentHelperInit_CScriptComponent(void)::s_bIsInitialized )
  {
    CEntityComponentHelperInit_CScriptComponent(void)::s_bIsInitialized = 1;
    EntComponentInfo = CScriptComponent::GetEntComponentInfo();
    inited = CEntityComponentHelperInit_CEntityComponent();
    EntComponentInfo->m_pScriptClassDesc = 0;
    EntComponentInfo->m_pBaseClassComponentHelper = inited;
    CEntityComponentHelperInit_CScriptComponent(void)::componentHelper.m_nPriority = -1;
  }
  return &CEntityComponentHelperInit_CScriptComponent(void)::componentHelper;
}


// CEntityComponentHelperFactory_CScriptComponent::CEntityComponentHelperFactory_CScriptComponent  (line 139, @0x00000000030ce100, libserver.so)  // inlines: AddToList
// calls: CEntityComponentHelperInit_CScriptComponent
// globals: CEntityComponentHelpers::GetList(void)::g_pList
void __fastcall CEntityComponentHelperFactory_CScriptComponent::CEntityComponentHelperFactory_CScriptComponent(
        CEntityComponentHelperFactory_CScriptComponent *const this)
{
  CEntityComponentHelper *inited; // rax
  CEntityComponentHelper *v2; // rdx

  inited = CEntityComponentHelperInit_CScriptComponent();
  v2 = CEntityComponentHelpers::GetList(void)::g_pList;
  CEntityComponentHelpers::GetList(void)::g_pList = inited;
  inited->m_pNext = v2;
}


// GetScriptDesc<CEntityScriptFramework>  (line 142, @0x00000000030ce120, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, ScriptClassDesc_t
// calls: operator new
// callers: CEntityScriptFramework::LoadFramework
// strings: "CEntityScriptFramework", "C-side of entity framework"
// globals: g_pCEntityScriptFramework_ScriptDesc
ScriptClassDesc_t *__fastcall GetScriptDesc<CEntityScriptFramework>(CEntityScriptFramework *pScriptDescObjectInstance)
{
  ScriptClassDesc_t *result; // rax

  result = g_pCEntityScriptFramework_ScriptDesc;
  if ( g_pCEntityScriptFramework_ScriptDesc == 0 )
  {
    result = operator new(0x50u);
    result->m_pBaseDesc = 0;
    result->m_FunctionBindings.m_Size = 0;
    result->m_FunctionBindings.m_Memory.m_pMemory = 0;
    result->m_FunctionBindings.m_Memory.m_nAllocationCount = 0;
    result->m_FunctionBindings.m_Memory.m_nGrowSize = 0;
    result->m_pfnConstruct = 0;
    result->m_pfnDestruct = 0;
    result->pHelper = 0;
    g_pCEntityScriptFramework_ScriptDesc = result;
    result->m_pszDescription = "C-side of entity framework";
    result->m_pszScriptName = "CEntityScriptFramework";
    result->m_pszClassname = "CEntityScriptFramework";
  }
  return result;
}


// GetScriptDesc<CScriptNativeOutputs>  (line 145, @0x00000000030d0bc0, libserver.so)  // inlines: AddParameterType, AddToTail, CUtlMemory, CUtlVector, CUtlVectorBase, Construct<ScriptFunctionBinding_t>, Element, Finalize, GrowMemory, ScriptClassDesc_t, ScriptDeduceFunctionSignature<CScriptNativeOutputs*, CScriptNativeOutputs, void, char const*, char const*>, ScriptDeduceFunctionSignature<CScriptNativeOutputs*, CScriptNativeOutputs, void, int>, ScriptFuncDescriptor_t, ScriptFunctionBinding_t, SetDescription, SetFunctionName, SetReturnType, SetScriptName, operator[]
// calls: operator new, CUtlMemory<ScriptFunctionBinding_t, int>::Grow
// callers: CEntityScriptFramework::GetOutputsForClass, CEntityScriptFramework::LoadFramework
// strings: "Container to hold outputs published by script to game", "CNativeOutputs", "CScriptNativeOutputs", "Initialize with number of outputs", "Add an output", "AddOutput"
// globals: g_pCScriptNativeOutputs_ScriptDesc, CScriptConstructor<CScriptNativeOutputs>::Construct(void), CScriptDestructor<CScriptNativeOutputs>::Destruct(void *), CMemberScriptBinding1<CScriptNativeOutputs *,void (CScriptNativeOutputs::*)(int),void,int>::Call(void *,void *,CVariantBase<CVariantDefaultAllocator> *,int,CVar, CScriptNativeOutputs::Init(int), CMemberScriptBinding2<CScriptNativeOutputs *,void (CScriptNativeOutputs::*)(char const*,char const*),void,char const*,char const*>::Call(void *,void *,CVariantB, CScriptNativeOutputs::AddOutput(char const*,char const*)
ScriptClassDesc_t *__fastcall GetScriptDesc<CScriptNativeOutputs>(CScriptNativeOutputs *pScriptDescObjectInstance)
{
  ScriptClassDesc_t *result; // rax
  ScriptClassDesc_t *v2; // rbx
  ScriptFunctionBinding_t *m_pMemory; // rcx
  int8 m_nNumParameters; // dl
  __int64 v5; // rax
  int v6; // edx
  char v7; // si
  char v8; // di
  __int64 m_Size; // r13
  __int64 v10; // rdx
  __int64 v11; // rax
  char v12; // dl
  char v13; // cl
  int v14; // edx
  char v15; // cl
  char v16; // di

  result = g_pCScriptNativeOutputs_ScriptDesc;
  if ( g_pCScriptNativeOutputs_ScriptDesc == 0 )
  {
    v2 = operator new(0x50u);
    v2->m_pBaseDesc = 0;
    v2->m_FunctionBindings.m_Size = 0;
    v2->m_FunctionBindings.m_Memory.m_pMemory = 0;
    v2->m_FunctionBindings.m_Memory.m_nAllocationCount = 0;
    v2->m_FunctionBindings.m_Memory.m_nGrowSize = 0;
    v2->pHelper = 0;
    g_pCScriptNativeOutputs_ScriptDesc = v2;
    v2->m_pszDescription = "Container to hold outputs published by script to game";
    v2->m_pszScriptName = "CNativeOutputs";
    v2->m_pszClassname = "CScriptNativeOutputs";
    v2->m_pfnConstruct = CScriptConstructor<CScriptNativeOutputs>::Construct;
    v2->m_pfnDestruct = CScriptDestructor<CScriptNativeOutputs>::Destruct;
    CUtlMemory<ScriptFunctionBinding_t,int>::Grow(&v2->m_FunctionBindings.m_Memory, 1);
    m_pMemory = v2->m_FunctionBindings.m_Memory.m_pMemory;
    ++v2->m_FunctionBindings.m_Size;
    if ( m_pMemory != 0 )
    {
      m_pMemory->m_desc.m_pszScriptName = 0;
      m_pMemory->m_desc.m_pszFunction = 0;
      m_pMemory->m_desc.m_pszDescription = 0;
      m_pMemory->m_desc.m_ReturnType = 29;
      m_pMemory->m_desc.m_nOptionalParameters = -1;
      m_pMemory->m_desc.m_nNumParameters = 0;
      m_pMemory->m_desc.m_pPackedParameterNames = 0;
      m_pMemory = v2->m_FunctionBindings.m_Memory.m_pMemory;
    }
    m_nNumParameters = m_pMemory->m_desc.m_nNumParameters;
    m_pMemory->m_desc.m_ReturnType = 0;
    m_pMemory->m_desc.m_pszDescription = "Initialize with number of outputs";
    m_pMemory->m_desc.m_pszScriptName = "Init";
    m_pMemory->m_desc.m_pszFunction = "Init";
    v5 = m_nNumParameters++;
    m_pMemory->m_desc.m_ParameterTypes[v5] = 5;
    m_pMemory->m_desc.m_nNumParameters = m_nNumParameters;
    v6 = m_nNumParameters - 1;
    m_pMemory->m_desc.m_nOptionalParameters = 0;
    if ( v6 >= 0 && m_pMemory->m_desc.m_ParameterTypes[v6] == 32 )
    {
      v7 = 1;
      do
      {
        --v6;
        v8 = v7;
        if ( v6 == -1 )
        {
          m_pMemory->m_desc.m_nOptionalParameters = v7;
          goto LABEL_10;
        }
        ++v7;
      }
      while ( m_pMemory->m_desc.m_ParameterTypes[v6] == 32 );
      m_pMemory->m_desc.m_nOptionalParameters = v8;
    }
LABEL_10:
    m_pMemory->m_flags = 1;
    m_pMemory->m_pfnBinding = CMemberScriptBinding1<CScriptNativeOutputs *,void (CScriptNativeOutputs::*)(int),void,int>::Call;
    m_pMemory->m_pFunction = CScriptNativeOutputs::Init;
    m_Size = v2->m_FunctionBindings.m_Size;
    if ( m_Size == v2->m_FunctionBindings.m_Memory.m_nAllocationCount )
      CUtlMemory<ScriptFunctionBinding_t,int>::Grow(&v2->m_FunctionBindings.m_Memory, 1);
    ++v2->m_FunctionBindings.m_Size;
    v10 = &v2->m_FunctionBindings.m_Memory.m_pMemory[m_Size];
    if ( v10 != 0 )
    {
      *v10 = 0;
      *(v10 + 8) = 0;
      *(v10 + 16) = 0;
      *(v10 + 24) = 29;
      *(v10 + 25) = -1;
      *(v10 + 26) = 0;
      *(v10 + 40) = 0;
      v11 = &v2->m_FunctionBindings.m_Memory.m_pMemory[m_Size];
    }
    else
    {
      v11 = 0;
    }
    v12 = *(v11 + 26);
    *(v11 + 24) = 0;
    *(v11 + 16) = "Add an output";
    *v11 = "AddOutput";
    *(v11 + 8) = "AddOutput";
    *(v11 + v12 + 27) = 30;
    v13 = v12 + 1;
    v12 += 2;
    *(v11 + v13 + 27) = 30;
    *(v11 + 26) = v12;
    v14 = v12 - 1;
    *(v11 + 25) = 0;
    if ( v14 >= 0 && *(v11 + v14 + 27) == 32 )
    {
      v15 = 1;
      do
      {
        --v14;
        v16 = v15;
        if ( v14 == -1 )
        {
          *(v11 + 25) = v15;
          goto LABEL_20;
        }
        ++v15;
      }
      while ( *(v11 + v14 + 27) == 32 );
      *(v11 + 25) = v16;
    }
LABEL_20:
    *(v11 + 64) = 1;
    *(v11 + 48) = CMemberScriptBinding2<CScriptNativeOutputs *,void (CScriptNativeOutputs::*)(char const*,char const*),void,char const*,char const*>::Call;
    *(v11 + 56) = CScriptNativeOutputs::AddOutput;
    return v2;
  }
  return result;
}


// GetScriptDesc<CScriptKeyValues>  (line 151, @0x00000000030d01f0, libserver.so)  // inlines: AddParameterType, AddToTail, CUtlMemory, CUtlVector, CUtlVectorBase, Construct<ScriptFunctionBinding_t>, Finalize, GrowMemory, ScriptClassDesc_t, ScriptDeduceFunctionSignature<CScriptKeyValues*, CScriptKeyValues, CVariantBase<CVariantDefaultAllocator>, char const*>, ScriptFuncDescriptor_t, ScriptFunctionBinding_t, SetDescription, SetFunctionName, SetReturnType, SetScriptName
// calls: operator new, CUtlMemory<ScriptFunctionBinding_t, int>::Grow
// callers: CEntityScriptFramework::DispatchSpawn, CScriptKeyValues::CScriptKeyValues, CEntityScriptFramework::LoadFramework
// strings: "Container to hold keyvalues published to spawn functions in script", "CScriptKeyValues", "Reads a spawn key"
// globals: g_pCScriptKeyValues_ScriptDesc, CMemberScriptBinding1<CScriptKeyValues *,CVariantBase<CVariantDefaultAllocator> (CScriptKeyValues::*)(char const*),CVariantBase<CVariantDefaultAllocator>,char c, CScriptKeyValues::GetValue(char const*)
ScriptClassDesc_t *__fastcall GetScriptDesc<CScriptKeyValues>(CScriptKeyValues *pScriptDescObjectInstance)
{
  ScriptClassDesc_t *result; // rax
  ScriptClassDesc_t *v2; // rbx
  ScriptFunctionBinding_t *m_pMemory; // rcx
  int8 m_nNumParameters; // dl
  __int64 v5; // rax
  int v6; // edx
  char v7; // si
  char v8; // al

  result = g_pCScriptKeyValues_ScriptDesc;
  if ( g_pCScriptKeyValues_ScriptDesc == 0 )
  {
    v2 = operator new(0x50u);
    v2->m_pBaseDesc = 0;
    v2->m_FunctionBindings.m_Size = 0;
    v2->m_FunctionBindings.m_Memory.m_pMemory = 0;
    v2->m_FunctionBindings.m_Memory.m_nAllocationCount = 0;
    v2->m_FunctionBindings.m_Memory.m_nGrowSize = 0;
    v2->m_pfnConstruct = 0;
    v2->m_pfnDestruct = 0;
    v2->pHelper = 0;
    g_pCScriptKeyValues_ScriptDesc = v2;
    v2->m_pszDescription = "Container to hold keyvalues published to spawn functions in script";
    v2->m_pszScriptName = "CScriptKeyValues";
    v2->m_pszClassname = "CScriptKeyValues";
    CUtlMemory<ScriptFunctionBinding_t,int>::Grow(&v2->m_FunctionBindings.m_Memory, 1);
    m_pMemory = v2->m_FunctionBindings.m_Memory.m_pMemory;
    ++v2->m_FunctionBindings.m_Size;
    if ( m_pMemory != 0 )
    {
      m_pMemory->m_desc.m_pszScriptName = 0;
      m_pMemory->m_desc.m_pszFunction = 0;
      m_pMemory->m_desc.m_pszDescription = 0;
      m_pMemory->m_desc.m_ReturnType = 29;
      m_pMemory->m_desc.m_nOptionalParameters = -1;
      m_pMemory->m_desc.m_nNumParameters = 0;
      m_pMemory->m_desc.m_pPackedParameterNames = 0;
      m_pMemory = v2->m_FunctionBindings.m_Memory.m_pMemory;
    }
    m_nNumParameters = m_pMemory->m_desc.m_nNumParameters;
    m_pMemory->m_desc.m_ReturnType = 32;
    m_pMemory->m_desc.m_pszDescription = "Reads a spawn key";
    m_pMemory->m_desc.m_pszScriptName = "GetValue";
    m_pMemory->m_desc.m_pszFunction = "GetValue";
    v5 = m_nNumParameters++;
    m_pMemory->m_desc.m_ParameterTypes[v5] = 30;
    m_pMemory->m_desc.m_nNumParameters = m_nNumParameters;
    v6 = m_nNumParameters - 1;
    m_pMemory->m_desc.m_nOptionalParameters = 0;
    if ( v6 >= 0 && m_pMemory->m_desc.m_ParameterTypes[v6] == 32 )
    {
      v7 = 1;
      do
      {
        --v6;
        v8 = v7;
        if ( v6 == -1 )
        {
          m_pMemory->m_desc.m_nOptionalParameters = v7;
          goto LABEL_10;
        }
        ++v7;
      }
      while ( m_pMemory->m_desc.m_ParameterTypes[v6] == 32 );
      m_pMemory->m_desc.m_nOptionalParameters = v8;
    }
LABEL_10:
    m_pMemory->m_flags = 1;
    m_pMemory->m_pfnBinding = CMemberScriptBinding1<CScriptKeyValues *,CVariantBase<CVariantDefaultAllocator> (CScriptKeyValues::*)(char const*),CVariantBase<CVariantDefaultAllocator>,char const*>::Call;
    m_pMemory->m_pFunction = CScriptKeyValues::GetValue;
    return v2;
  }
  return result;
}


// GetScriptDesc<CScriptPrecacheContext>  (line 155, @0x00000000030d05e0, libserver.so)  // inlines: AddParameterType, AddToTail, CUtlMemory, CUtlVector, CUtlVectorBase, Construct<ScriptFunctionBinding_t>, Element, Finalize, GrowMemory, ScriptClassDesc_t, ScriptDeduceFunctionSignature<CScriptPrecacheContext*, CScriptPrecacheContext, CVariantBase<CVariantDefaultAllocator>, char const*>, ScriptDeduceFunctionSignature<CScriptPrecacheContext*, CScriptPrecacheContext, void, char const*>, ScriptFuncDescriptor_t, ScriptFunctionBinding_t, SetDescription, SetFunctionName, SetReturnType, SetScriptName, operator[]
// calls: operator new, CUtlMemory<ScriptFunctionBinding_t, int>::Grow
// callers: CEntityScriptFramework::DispatchPrecache, CEntityScriptFramework::GetPrecacheContext, CScriptPrecacheContext::CScriptPrecacheContext, CEntityScriptFramework::LoadFramework
// strings: "Container to hold context published to precache functions in script", "CScriptPrecacheContext", "Reads a spawn key", "Precaches a specific resource", "AddResource"
// globals: g_pCScriptPrecacheContext_ScriptDesc, CMemberScriptBinding1<CScriptPrecacheContext *,CVariantBase<CVariantDefaultAllocator> (CScriptPrecacheContext::*)(char const*),CVariantBase<CVariantDefaultAlloc, CScriptPrecacheContext::GetValue(char const*), CMemberScriptBinding1<CScriptPrecacheContext *,void (CScriptPrecacheContext::*)(char const*),void,char const*>::Call(void *,void *,CVariantBase<CVariantDefaultA, CScriptPrecacheContext::AddResource(char const*)
ScriptClassDesc_t *__fastcall GetScriptDesc<CScriptPrecacheContext>(CScriptPrecacheContext *pScriptDescObjectInstance)
{
  ScriptClassDesc_t *result; // rax
  ScriptClassDesc_t *v2; // rbx
  ScriptFunctionBinding_t *m_pMemory; // rcx
  int8 m_nNumParameters; // dl
  __int64 v5; // rax
  int v6; // edx
  char v7; // si
  char v8; // di
  __int64 m_Size; // r13
  __int64 v10; // rdx
  __int64 v11; // rax
  char v12; // dl
  __int64 v13; // rcx
  int v14; // edx
  char v15; // cl
  char v16; // di

  result = g_pCScriptPrecacheContext_ScriptDesc;
  if ( g_pCScriptPrecacheContext_ScriptDesc == 0 )
  {
    v2 = operator new(0x50u);
    v2->m_pBaseDesc = 0;
    v2->m_FunctionBindings.m_Size = 0;
    v2->m_FunctionBindings.m_Memory.m_pMemory = 0;
    v2->m_FunctionBindings.m_Memory.m_nAllocationCount = 0;
    v2->m_FunctionBindings.m_Memory.m_nGrowSize = 0;
    v2->m_pfnConstruct = 0;
    v2->m_pfnDestruct = 0;
    v2->pHelper = 0;
    g_pCScriptPrecacheContext_ScriptDesc = v2;
    v2->m_pszDescription = "Container to hold context published to precache functions in script";
    v2->m_pszScriptName = "CScriptPrecacheContext";
    v2->m_pszClassname = "CScriptPrecacheContext";
    CUtlMemory<ScriptFunctionBinding_t,int>::Grow(&v2->m_FunctionBindings.m_Memory, 1);
    m_pMemory = v2->m_FunctionBindings.m_Memory.m_pMemory;
    ++v2->m_FunctionBindings.m_Size;
    if ( m_pMemory != 0 )
    {
      m_pMemory->m_desc.m_pszScriptName = 0;
      m_pMemory->m_desc.m_pszFunction = 0;
      m_pMemory->m_desc.m_pszDescription = 0;
      m_pMemory->m_desc.m_ReturnType = 29;
      m_pMemory->m_desc.m_nOptionalParameters = -1;
      m_pMemory->m_desc.m_nNumParameters = 0;
      m_pMemory->m_desc.m_pPackedParameterNames = 0;
      m_pMemory = v2->m_FunctionBindings.m_Memory.m_pMemory;
    }
    m_nNumParameters = m_pMemory->m_desc.m_nNumParameters;
    m_pMemory->m_desc.m_ReturnType = 32;
    m_pMemory->m_desc.m_pszDescription = "Reads a spawn key";
    m_pMemory->m_desc.m_pszScriptName = "GetValue";
    m_pMemory->m_desc.m_pszFunction = "GetValue";
    v5 = m_nNumParameters++;
    m_pMemory->m_desc.m_ParameterTypes[v5] = 30;
    m_pMemory->m_desc.m_nNumParameters = m_nNumParameters;
    v6 = m_nNumParameters - 1;
    m_pMemory->m_desc.m_nOptionalParameters = 0;
    if ( v6 >= 0 && m_pMemory->m_desc.m_ParameterTypes[v6] == 32 )
    {
      v7 = 1;
      do
      {
        --v6;
        v8 = v7;
        if ( v6 == -1 )
        {
          m_pMemory->m_desc.m_nOptionalParameters = v7;
          goto LABEL_10;
        }
        ++v7;
      }
      while ( m_pMemory->m_desc.m_ParameterTypes[v6] == 32 );
      m_pMemory->m_desc.m_nOptionalParameters = v8;
    }
LABEL_10:
    m_pMemory->m_flags = 1;
    m_pMemory->m_pfnBinding = CMemberScriptBinding1<CScriptPrecacheContext *,CVariantBase<CVariantDefaultAllocator> (CScriptPrecacheContext::*)(char const*),CVariantBase<CVariantDefaultAllocator>,char const*>::Call;
    m_pMemory->m_pFunction = CScriptPrecacheContext::GetValue;
    m_Size = v2->m_FunctionBindings.m_Size;
    if ( m_Size == v2->m_FunctionBindings.m_Memory.m_nAllocationCount )
      CUtlMemory<ScriptFunctionBinding_t,int>::Grow(&v2->m_FunctionBindings.m_Memory, 1);
    ++v2->m_FunctionBindings.m_Size;
    v10 = &v2->m_FunctionBindings.m_Memory.m_pMemory[m_Size];
    if ( v10 != 0 )
    {
      *v10 = 0;
      *(v10 + 8) = 0;
      *(v10 + 16) = 0;
      *(v10 + 24) = 29;
      *(v10 + 25) = -1;
      *(v10 + 26) = 0;
      *(v10 + 40) = 0;
      v11 = &v2->m_FunctionBindings.m_Memory.m_pMemory[m_Size];
    }
    else
    {
      v11 = 0;
    }
    v12 = *(v11 + 26);
    *(v11 + 24) = 0;
    *(v11 + 16) = "Precaches a specific resource";
    *v11 = "AddResource";
    *(v11 + 8) = "AddResource";
    v13 = v12++;
    *(v11 + v13 + 27) = 30;
    *(v11 + 26) = v12;
    v14 = v12 - 1;
    *(v11 + 25) = 0;
    if ( v14 >= 0 && *(v11 + v14 + 27) == 32 )
    {
      v15 = 1;
      do
      {
        --v14;
        v16 = v15;
        if ( v14 == -1 )
        {
          *(v11 + 25) = v15;
          goto LABEL_20;
        }
        ++v15;
      }
      while ( *(v11 + v14 + 27) == 32 );
      *(v11 + 25) = v16;
    }
LABEL_20:
    *(v11 + 64) = 1;
    *(v11 + 48) = CMemberScriptBinding1<CScriptPrecacheContext *,void (CScriptPrecacheContext::*)(char const*),void,char const*>::Call;
    *(v11 + 56) = CScriptPrecacheContext::AddResource;
    return v2;
  }
  return result;
}


// DoIncludeScript  (line 167, @0x00000000030ce840, libserver.so)  // inlines: GetVM
// calls: CFmtStrN<256, false>::CFmtStrN, __stack_chk_fail
// callers: DoIncludeScript
// strings: "Failed to include script \"%s\""
__int64 __fastcall DoIncludeScript(char *pszScript, HSCRIPT hScope)
{
  char *v2; // rdx
  IScriptVM *v3; // rbx
  void (__fastcall *v4)(IScriptVM *, char *); // r13
  CFmtStrN<256,false> v6; // [rsp+0h] [rbp-140h] BYREF
  unsigned __int64 v7; // [rsp+118h] [rbp-28h]

  v2 = "unknown";
  v7 = __readfsqword(0x28u);
  if ( pszScript != 0 )
    v2 = pszScript;
  v3 = g_pScriptVM;
  v4 = *(*g_pScriptVM + 440LL);
  CFmtStrN<256,false>::CFmtStrN(&v6, "Failed to include script \"%s\"", v2);
  v4(v3, v6.m_szBuf);
  return 0;
}


// DoIncludeScript  (line 167, @0x00000000030cebf0, libserver.so)  // inlines: GetVM
// calls: CEntityScriptFramework::RunScript, DoIncludeScript, DevMsg(char const*,...)
// strings: "IncludeScript Warning - Script %s either missing or empty\n"
// globals: g_EntityScriptFramework, g_ScriptLastCompileScriptMissing
bool __fastcall DoIncludeScript(const char *pszScript, HSCRIPT hScope)
{
  bool v3; // bl
  HSCRIPT v4; // rsi
  char *v6; // rsi

  if ( g_pScriptVM == 0 )
    return 0;
  v3 = CEntityScriptFramework::RunScript(&g_EntityScriptFramework, pszScript, hScope, 1);
  if ( v3 )
    return v3;
  if ( !g_ScriptLastCompileScriptMissing )
    return DoIncludeScript(pszScript, v4);
  v6 = "unknown";
  if ( pszScript != 0 )
    v6 = pszScript;
  DevMsg("IncludeScript Warning - Script %s either missing or empty\n", v6);
  return v3;
}


// CEntityScriptFramework::CEntityScriptFramework  (line 193, @0x00000000030ce1a0, libserver.so)  // inlines: CScriptAccessorT, CScriptFuncHolder, CScriptScopeT, CUtlVectorUltraConservative
void __fastcall CEntityScriptFramework::CEntityScriptFramework(CEntityScriptFramework *const this)
{
  this->m_hScope = 0;
  this->m_FuncHandles.m_pData = 0;
  this->m_flags = 0;
  this->m_hScriptFunc_GetEntityHandle.hFunction = 0;
  this->m_hScriptFunc_GetScriptClassForDesignerName.hFunction = 0;
  this->m_hScriptFunc_GetDesignerNameForScriptClass.hFunction = 0;
  this->m_hScriptFunc_GetNativeClassForScriptClass.hFunction = 0;
  this->m_hScriptFunc_GetInputsForScriptClass.hFunction = 0;
  this->m_hScriptFunc_GetClassNameOverride.hFunction = 0;
  this->m_hScriptFunc_CreateEntity.hFunction = 0;
  this->m_hScriptFunc_DispatchInput.hFunction = 0;
  this->m_hScriptFunc_InstallClasses.hFunction = 0;
  this->m_hScriptFunc_IsKeyValueUsed.hFunction = 0;
  this->m_hScriptFunc_DispatchPrecache.hFunction = 0;
  this->m_hScriptFunc_DispatchSpawn.hFunction = 0;
  this->m_hScriptFunc_DispatchActivate.hFunction = 0;
  this->m_hScriptFunc_DispatchUpdateOnRemove.hFunction = 0;
  this->m_hScriptFunc_GetNativeOutputsForClass.hFunction = 0;
}


// Script_MakeStringToken  (line 199, @0x00000000030cdb70, libserver.so)  // inlines: MakeStringToken
// calls: MurmurHash2LowerCase, RegisterStringToken
int __fastcall Script_MakeStringToken(const char *pString)
{
  int result; // eax
  int v3; // [rsp+Ch] [rbp-14h]

  result = 0;
  if ( pString != 0 && *pString != 0 )
  {
    result = MurmurHash2LowerCase(pString, 0x31415926u);
    if ( g_bUpdateStringTokenDatabase )
    {
      v3 = result;
      RegisterStringToken(result, pString, 0, 1);
      return v3;
    }
  }
  return result;
}


// Script_DebugBreak  (line 204, @0x00000000030cd8e0, libserver.so)
// calls: Plat_IsInDebugSessionRaw
void __cdecl Script_DebugBreak()
{
  if ( Plat_IsInDebugSessionRaw() != 0 )
    __debugbreak();
}


// CEntityScriptFramework::LoadFramework  (line 209, @0x00000000030d1600, libserver.so)  // inlines: AddParameterType, CVariantBase, GetVM, GetValue, Init, RegisterInstance<CEntityScriptFramework>, ReleaseValue, RemoveAllParameters, ScriptDeduceFunctionSignature<bool, char const*, HSCRIPT__*>, ScriptDeduceFunctionSignature<int, char const*>, ScriptDeduceFunctionSignature<void>, ScriptFuncDescriptor_t, ScriptFunctionBinding_t, SetDescription, SetFunctionName, SetReturnType, SetScriptName, operator HSCRIPT, ~CVariantBase
// calls: CEntitySystem::IterComponentTypesStart, CEntitySystem::IterComponentTypesNext, CEntitySystem::IterComponentTypesEnd, CEntityScriptFramework::InstallCppClasses, GetScriptDesc<CScriptNativeOutputs>, GetScriptDesc<CScriptKeyValues>, GetScriptDesc<CScriptPrecacheContext>, GetScriptDesc<CEntityScriptFramework>, CVariantBase<CVariantDefaultAllocator>::Free, CEntityScriptFramework::RunScript, LoggingSystem_IsChannelEnabled, __cxa_guard_acquire (15 total)
// callers: CVScriptGameSystem::VScriptInit
// strings: "Execute a script (internal)", "DoIncludeScript", "NativeFunctions", "Checks to see if the given hScript is a valid entity", "Script_MakeStringToken", "Breaks in the debugger" (9 total)
// globals: `guard variable for'CEntityScriptFramework::LoadFramework(void)::binding, CEntityScriptFramework::LoadFramework(void)::binding, CNonMemberScriptBinding2<bool (*)(char const*,HSCRIPT__ *),bool,char const*,HSCRIPT__ *>::Call(void *,void *,CVariantBase<CVariantDefaultAllocator> *,int,CVaria, DoIncludeScript(char const*,HSCRIPT__ *), CNonMemberScriptBinding1<int (*)(char const*),int,char const*>::Call(void *,void *,CVariantBase<CVariantDefaultAllocator> *,int,CVariantBase<CVariantDefaultAllo, Script_MakeStringToken(char const*), CNonMemberScriptBinding0<void (*)(void),void>::Call(void *,void *,CVariantBase<CVariantDefaultAllocator> *,int,CVariantBase<CVariantDefaultAllocator> *), Script_DebugBreak(void)
bool __fastcall CEntityScriptFramework::LoadFramework(CEntityScriptFramework *const this)
{
  IScriptVM *v2; // rdi
  CEntityComponentHelper *i; // rax
  IScriptVM *v4; // r13
  void (__fastcall *v5)(IScriptVM *, ScriptClassDesc_t *); // r15
  ScriptClassDesc_t *Script; // rax
  IScriptVM *v7; // r13
  void (__fastcall *v8)(IScriptVM *, ScriptClassDesc_t *); // r15
  ScriptClassDesc_t *v9; // rax
  IScriptVM *v10; // r13
  void (__fastcall *v11)(IScriptVM *, ScriptClassDesc_t *); // r15
  ScriptClassDesc_t *v12; // rax
  IScriptVM *v13; // r13
  __int64 (__fastcall *v14)(IScriptVM *, ScriptClassDesc_t *, CEntityScriptFramework *const); // r15
  ScriptClassDesc_t *v15; // rax
  EntityComponentTypeIter_t v16; // rax
  void (__fastcall *v17)(IScriptVM *, HSCRIPT, const char *, EntityComponentTypeIter_t *); // r8
  HSCRIPT v18; // rax
  HSCRIPT m_hScope; // [rsp+8h] [rbp-48h]
  EntityComponentTypeIter_t iter; // [rsp+10h] [rbp-40h] BYREF
  __int16 v22; // [rsp+18h] [rbp-38h]
  __int16 v23; // [rsp+1Ah] [rbp-36h]

  v2 = g_pScriptVM;
  if ( g_pScriptVM == 0 )
    return 1;
  if ( `guard variable for'CEntityScriptFramework::LoadFramework(void)::binding == 0 )
  {
    if ( __cxa_guard_acquire(&`guard variable for'CEntityScriptFramework::LoadFramework(void)::binding) != 0 )
    {
      CEntityScriptFramework::LoadFramework(void)::binding.m_desc.m_pszScriptName = 0;
      CEntityScriptFramework::LoadFramework(void)::binding.m_desc.m_pszFunction = 0;
      CEntityScriptFramework::LoadFramework(void)::binding.m_desc.m_pszDescription = 0;
      CEntityScriptFramework::LoadFramework(void)::binding.m_desc.m_ReturnType = 29;
      CEntityScriptFramework::LoadFramework(void)::binding.m_desc.m_nOptionalParameters = -1;
      CEntityScriptFramework::LoadFramework(void)::binding.m_desc.m_nNumParameters = 0;
      CEntityScriptFramework::LoadFramework(void)::binding.m_desc.m_pPackedParameterNames = 0;
      __cxa_guard_release(&`guard variable for'CEntityScriptFramework::LoadFramework(void)::binding);
    }
    v2 = g_pScriptVM;
  }
  CEntityScriptFramework::LoadFramework(void)::binding.m_desc.m_nOptionalParameters = 0;
  CEntityScriptFramework::LoadFramework(void)::binding.m_desc.m_pszDescription = "Execute a script (internal)";
  CEntityScriptFramework::LoadFramework(void)::binding.m_desc.m_pszScriptName = "DoIncludeScript";
  CEntityScriptFramework::LoadFramework(void)::binding.m_desc.m_pszFunction = "DoIncludeScript";
  CEntityScriptFramework::LoadFramework(void)::binding.m_pfnBinding = CNonMemberScriptBinding2<bool (*)(char const*,HSCRIPT__ *),bool,char const*,HSCRIPT__ *>::Call;
  CEntityScriptFramework::LoadFramework(void)::binding.m_desc.m_ReturnType = 6;
  CEntityScriptFramework::LoadFramework(void)::binding.m_desc.m_ParameterTypes[0] = 30;
  CEntityScriptFramework::LoadFramework(void)::binding.m_desc.m_ParameterTypes[1] = 31;
  CEntityScriptFramework::LoadFramework(void)::binding.m_desc.m_nNumParameters = 2;
  CEntityScriptFramework::LoadFramework(void)::binding.m_pFunction = DoIncludeScript;
  (*(*v2 + 168LL))(v2, &CEntityScriptFramework::LoadFramework(void)::binding);
  if ( g_pEntitySystem != 0 )
  {
    for ( i = CEntitySystem::IterComponentTypesStart(g_pEntitySystem, &iter);
          i != 0;
          i = CEntitySystem::IterComponentTypesNext(g_pEntitySystem, &iter) )
    {
      if ( i->m_pInfo->m_pScriptClassDesc != 0 )
        (*(*g_pScriptVM + 176LL))(g_pScriptVM);
    }
    CEntitySystem::IterComponentTypesEnd(g_pEntitySystem, &iter);
  }
  CEntityScriptFramework::InstallCppClasses(this);
  v4 = g_pScriptVM;
  v5 = *(*g_pScriptVM + 176LL);
  Script = GetScriptDesc<CScriptNativeOutputs>(0);
  v5(v4, Script);
  v7 = g_pScriptVM;
  v8 = *(*g_pScriptVM + 176LL);
  v9 = GetScriptDesc<CScriptKeyValues>(0);
  v8(v7, v9);
  v10 = g_pScriptVM;
  v11 = *(*g_pScriptVM + 176LL);
  v12 = GetScriptDesc<CScriptPrecacheContext>(0);
  v11(v10, v12);
  v13 = g_pScriptVM;
  m_hScope = this->m_hScope;
  v14 = *(*g_pScriptVM + 184LL);
  v15 = GetScriptDesc<CEntityScriptFramework>(this);
  v16 = v14(v13, v15, this);
  v17 = *(*v13 + 240LL);
  v22 = 31;
  v23 = 0;
  iter = v16;
  v17(v13, m_hScope, "NativeFunctions", &iter);
  CVariantBase<CVariantDefaultAllocator>::Free(&iter);
  if ( `guard variable for'CEntityScriptFramework::LoadFramework(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CEntityScriptFramework::LoadFramework(void)::binding) != 0 )
  {
    CEntityScriptFramework::LoadFramework(void)::binding.m_desc.m_pszScriptName = 0;
    CEntityScriptFramework::LoadFramework(void)::binding.m_desc.m_pszFunction = 0;
    CEntityScriptFramework::LoadFramework(void)::binding.m_desc.m_pszDescription = 0;
    CEntityScriptFramework::LoadFramework(void)::binding.m_desc.m_ReturnType = 29;
    CEntityScriptFramework::LoadFramework(void)::binding.m_desc.m_nOptionalParameters = -1;
    CEntityScriptFramework::LoadFramework(void)::binding.m_desc.m_nNumParameters = 0;
    CEntityScriptFramework::LoadFramework(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CEntityScriptFramework::LoadFramework(void)::binding);
  }
  CEntityScriptFramework::LoadFramework(void)::binding.m_desc.m_nOptionalParameters = 0;
  CEntityScriptFramework::LoadFramework(void)::binding.m_desc.m_pszDescription = "Checks to see if the given hScript is a valid entity";
  CEntityScriptFramework::LoadFramework(void)::binding.m_desc.m_pszScriptName = "MakeStringToken";
  CEntityScriptFramework::LoadFramework(void)::binding.m_desc.m_pszFunction = "Script_MakeStringToken";
  CEntityScriptFramework::LoadFramework(void)::binding.m_pfnBinding = CNonMemberScriptBinding1<int (*)(char const*),int,char const*>::Call;
  CEntityScriptFramework::LoadFramework(void)::binding.m_desc.m_ReturnType = 5;
  CEntityScriptFramework::LoadFramework(void)::binding.m_desc.m_ParameterTypes[0] = 30;
  CEntityScriptFramework::LoadFramework(void)::binding.m_desc.m_nNumParameters = 1;
  CEntityScriptFramework::LoadFramework(void)::binding.m_pFunction = Script_MakeStringToken;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CEntityScriptFramework::LoadFramework(void)::binding);
  if ( `guard variable for'CEntityScriptFramework::LoadFramework(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CEntityScriptFramework::LoadFramework(void)::binding) != 0 )
  {
    CEntityScriptFramework::LoadFramework(void)::binding.m_desc.m_pszScriptName = 0;
    CEntityScriptFramework::LoadFramework(void)::binding.m_desc.m_pszFunction = 0;
    CEntityScriptFramework::LoadFramework(void)::binding.m_desc.m_pszDescription = 0;
    CEntityScriptFramework::LoadFramework(void)::binding.m_desc.m_ReturnType = 29;
    CEntityScriptFramework::LoadFramework(void)::binding.m_desc.m_nOptionalParameters = -1;
    CEntityScriptFramework::LoadFramework(void)::binding.m_desc.m_nNumParameters = 0;
    CEntityScriptFramework::LoadFramework(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CEntityScriptFramework::LoadFramework(void)::binding);
  }
  CEntityScriptFramework::LoadFramework(void)::binding.m_desc.m_nOptionalParameters = 0;
  CEntityScriptFramework::LoadFramework(void)::binding.m_desc.m_pszDescription = "Breaks in the debugger";
  CEntityScriptFramework::LoadFramework(void)::binding.m_desc.m_pszScriptName = "DebugBreak";
  CEntityScriptFramework::LoadFramework(void)::binding.m_desc.m_pszFunction = "Script_DebugBreak";
  CEntityScriptFramework::LoadFramework(void)::binding.m_pfnBinding = CNonMemberScriptBinding0<void (*)(void),void>::Call;
  CEntityScriptFramework::LoadFramework(void)::binding.m_desc.m_nNumParameters = 0;
  CEntityScriptFramework::LoadFramework(void)::binding.m_desc.m_ReturnType = 0;
  CEntityScriptFramework::LoadFramework(void)::binding.m_pFunction = Script_DebugBreak;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CEntityScriptFramework::LoadFramework(void)::binding);
  if ( CEntityScriptFramework::RunScript(this, "init", 0, 1) )
  {
    v22 = 0;
    v23 = 0;
    iter = 0;
    (*(*g_pScriptVM + 312LL))(g_pScriptVM, 0, "EntityFramework", &iter);
    if ( v22 != 0 )
    {
      if ( iter != 0 )
      {
        v18 = (*(*g_pScriptVM + 128LL))(g_pScriptVM);
        this->m_flags = 0;
        this->m_hScope = v18;
      }
      (*(*g_pScriptVM + 344LL))(g_pScriptVM, &iter);
    }
    CVariantBase<CVariantDefaultAllocator>::Free(&iter);
    return 1;
  }
  else
  {
    if ( LoggingSystem_IsChannelEnabled(LOG_VSCRIPT, 2) != 0 )
      LoggingSystem_Log(LOG_VSCRIPT, 2, "Failed to run entity framework script\n");
    return 0;
  }
}


// CEntityScriptFramework::CompileScript  (line 261, @0x00000000030ce8d0, libserver.so)  // inlines: CFmtStrN, GetVM, InitQuietTruncation, _V_strstr, strstr
// calls: strstr, LoggingSystem_IsChannelEnabled, LoggingSystem_Log, CFmtStrN<256, false>::sprintf, __stack_chk_fail
// callers: CVScriptGameSystem::CompileScript, CEntityScriptFramework::RunScript
// strings: "scripts/vscripts/", "Script not found (%s) \n", "Scripting disabled or no server running\n", "scripts/vscripts/%s"
// globals: g_ScriptLastCompileScriptMissing
HSCRIPT __fastcall CEntityScriptFramework::CompileScript(
        CEntityScriptFramework *const this,
        const char *pszScriptName,
        bool bWarnMissing)
{
  HSCRIPT v3; // rbx
  const char *m_szBuf; // r12
  HSCRIPT hScript; // [rsp+8h] [rbp-158h] BYREF
  CFmtStr actualScriptPath; // [rsp+10h] [rbp-150h] BYREF
  unsigned __int64 v9; // [rsp+128h] [rbp-38h]

  g_ScriptLastCompileScriptMissing = 0;
  v9 = __readfsqword(0x28u);
  v3 = g_pScriptVM;
  if ( g_pScriptVM != 0 )
  {
    m_szBuf = pszScriptName;
    actualScriptPath.m_bQuietTruncation = 0;
    actualScriptPath.m_szBuf[0] = 0;
    actualScriptPath._vptr_CFmtStrN = &off_3F6E1A0;
    actualScriptPath.m_nLength = 0;
    if ( strstr(pszScriptName, "scripts/vscripts/") == 0 )
    {
      CFmtStrN<256,false>::sprintf(&actualScriptPath, "scripts/vscripts/%s", m_szBuf);
      m_szBuf = actualScriptPath.m_szBuf;
      v3 = g_pScriptVM;
    }
    if ( (*(*v3 + 464LL))(v3, m_szBuf, "GAME", &hScript) == 1 )
    {
      if ( bWarnMissing && LoggingSystem_IsChannelEnabled(LOG_VSCRIPT, 2) != 0 )
        LoggingSystem_Log(LOG_VSCRIPT, 2, "Script not found (%s) \n", m_szBuf);
      g_ScriptLastCompileScriptMissing = 1;
    }
    return hScript;
  }
  else if ( LoggingSystem_IsChannelEnabled(LOG_VSCRIPT, 2) != 0 )
  {
    LoggingSystem_Log(LOG_VSCRIPT, 2, "Scripting disabled or no server running\n");
  }
  return v3;
}


// CEntityScriptFramework::RunScript  (line 294, @0x00000000030cea60, libserver.so)  // inlines: GetVM
// calls: LoggingSystem_IsChannelEnabled, LoggingSystem_Log, CEntityScriptFramework::CompileScript
// callers: CVScriptGameSystem::RunScript, CEntityInstance::RunPrivateScriptFile, DoIncludeScript, CEntityScriptFramework::LoadFramework
// strings: "IncludeScript stack overflow\n", "Cannot run script: NULL script name\n", "Scripting disabled or no server running\n", "Error running script named %s\n"
// globals: g_ScriptServerRunScriptDepth
bool __fastcall CEntityScriptFramework::RunScript(
        CEntityScriptFramework *const this,
        const char *pszScriptName,
        HSCRIPT hScope,
        bool bWarnMissing)
{
  bool result; // al
  bool v7; // r15
  HSCRIPT v8; // rax
  HSCRIPT v9; // r14
  int v10; // eax

  if ( g_pScriptVM == 0 )
  {
    if ( LoggingSystem_IsChannelEnabled(LOG_VSCRIPT, 2) != 0 )
      LoggingSystem_Log(LOG_VSCRIPT, 2, "Scripting disabled or no server running\n");
    return 0;
  }
  if ( pszScriptName == 0 || *pszScriptName == 0 )
  {
    if ( LoggingSystem_IsChannelEnabled(LOG_VSCRIPT, 2) != 0 )
      LoggingSystem_Log(LOG_VSCRIPT, &loc_2, "Cannot run script: NULL script name\n");
    return 0;
  }
  if ( g_ScriptServerRunScriptDepth > 16 )
  {
    result = LoggingSystem_IsChannelEnabled(LOG_VSCRIPT, 2);
    if ( !result )
      return result;
    LoggingSystem_Log(LOG_VSCRIPT, 2, "IncludeScript stack overflow\n");
    return 0;
  }
  ++g_ScriptServerRunScriptDepth;
  v7 = 0;
  v8 = CEntityScriptFramework::CompileScript(this, pszScriptName, bWarnMissing);
  v9 = v8;
  if ( v8 != 0 )
  {
    v10 = (*(*g_pScriptVM + 104LL))(g_pScriptVM, v8, hScope, 1);
    v7 = v10 != -1;
    if ( v10 == -1 && LoggingSystem_IsChannelEnabled(LOG_VSCRIPT, 2) != 0 )
      LoggingSystem_Log(LOG_VSCRIPT, 2, "Error running script named %s\n", pszScriptName);
    (*(*g_pScriptVM + 96LL))(g_pScriptVM, v9);
  }
  --g_ScriptServerRunScriptDepth;
  return v7;
}


// CEntityScriptFramework::RunScript  (line 332, @0x00000000030ce240, libserver.so)  // inlines: GetVM
// calls: LoggingSystem_IsChannelEnabled, LoggingSystem_Log
// callers: CVScriptGameSystem::RunScript
// strings: "Scripting disabled or no server running\n"
bool __fastcall CEntityScriptFramework::RunScript(CEntityScriptFramework *const this, const char *pszScript)
{
  bool result; // al

  if ( g_pScriptVM != 0 )
    return (*(*g_pScriptVM + 80LL))(g_pScriptVM, pszScript, 1) != -1;
  result = LoggingSystem_IsChannelEnabled(LOG_VSCRIPT, 2);
  if ( result )
  {
    LoggingSystem_Log(LOG_VSCRIPT, 2, "Scripting disabled or no server running\n");
    return 0;
  }
  return result;
}


// CEntityScriptFramework::InstallCppClasses  (line 343, @0x00000000030ce2a0, libserver.so)  // inlines: GetVM
// callers: CEntityScriptFramework::LoadFramework
// globals: CEntityClass::GetGlobalList(void)::g_pEntityClassList
void __fastcall CEntityScriptFramework::InstallCppClasses(CEntityScriptFramework *const this)
{
  CEntityClass *i; // rbx

  for ( i = CEntityClass::GetGlobalList(void)::g_pEntityClassList; i != 0; i = i->m_pNextClass )
  {
    if ( i->m_pScriptClassDesc != 0 )
      (*(*g_pScriptVM + 176LL))(g_pScriptVM);
  }
}


// CEntityScriptFramework::LoadEntityClasses  (line 360, @0x00000000030ce2f0, libserver.so)  // inlines: AddToTail, Alloc, Call, Count, EnsureCapacity, GetSize, GetVM, InstallClasses, IsInitialized, IsValid, LookupFunction, Realloc
// callers: CEntitySystem::LoadEntityScriptClasses
// strings: "InstallClasses"
bool __fastcall CEntityScriptFramework::LoadEntityClasses(CEntityScriptFramework *const this)
{
  HSCRIPT hFunction; // rsi
  HSCRIPT v4; // rax
  CUtlVectorUltraConservative<HSCRIPT__**,CUtlVectorUltraConservativeAllocator>::Data_t *m_pData; // rsi
  __int64 m_Size; // r15
  unsigned __int64 v7; // r13
  CUtlVectorUltraConservative<HSCRIPT__**,CUtlVectorUltraConservativeAllocator>::Data_t *v8; // rax
  CUtlVectorUltraConservative<HSCRIPT__**,CUtlVectorUltraConservativeAllocator>::Data_t *v9; // rax

  hFunction = this->m_hScriptFunc_InstallClasses.hFunction;
  if ( hFunction != 0 )
    goto LABEL_2;
  if ( g_pScriptVM == 0 || this->m_hScope == 0 )
  {
    this->m_hScriptFunc_InstallClasses.hFunction = 0;
    return 1;
  }
  v4 = (*(*g_pScriptVM + 144LL))(g_pScriptVM, "InstallClasses", this->m_hScope, 0);
  m_pData = this->m_FuncHandles.m_pData;
  this->m_hScriptFunc_InstallClasses.hFunction = v4;
  if ( m_pData != 0 )
  {
    m_Size = m_pData->m_Size;
    v7 = 8LL * (m_Size + 1) + 8;
    if ( v7 > (*(*g_pMemAlloc + 128LL))(g_pMemAlloc) )
    {
      v8 = (*(*g_pMemAlloc + 8LL))(g_pMemAlloc, this->m_FuncHandles.m_pData, v7);
      this->m_FuncHandles.m_pData = v8;
    }
    else
    {
      v8 = this->m_FuncHandles.m_pData;
    }
  }
  else
  {
    m_Size = 0;
    v9 = (**g_pMemAlloc)(g_pMemAlloc, 16);
    this->m_FuncHandles.m_pData = v9;
    v9->m_Size = 0;
    v8 = this->m_FuncHandles.m_pData;
  }
  v8->m_Elements[m_Size] = &this->m_hScriptFunc_InstallClasses.hFunction;
  ++this->m_FuncHandles.m_pData->m_Size;
  hFunction = this->m_hScriptFunc_InstallClasses.hFunction;
  if ( hFunction != 0 )
LABEL_2:
    (*(*g_pScriptVM + 160LL))(g_pScriptVM, hFunction, 0, 0, 0, this->m_hScope, 1);
  return 1;
}


// CEntityScriptFramework::DisconnectFromVM  (line 369, @0x00000000030ce440, libserver.so)  // inlines: Count, Free, GetVM, Purge, RemoveAll, Term
// callers: CVScriptGameSystem::DestroyVM
void __fastcall CEntityScriptFramework::DisconnectFromVM(CEntityScriptFramework *const this)
{
  IScriptVM *v1; // r14
  int i; // ebx
  __int64 v4; // r12
  HSCRIPT__ **v5; // rdx
  CUtlVectorUltraConservative<HSCRIPT__**,CUtlVectorUltraConservativeAllocator>::Data_t *m_pData; // rsi

  v1 = g_pScriptVM;
  if ( g_pScriptVM == 0 )
    return;
  if ( this->m_hScope == 0 )
    goto LABEL_13;
  for ( i = 0; ; ++i )
  {
    m_pData = this->m_FuncHandles.m_pData;
    if ( m_pData == 0 )
      break;
    if ( i >= m_pData->m_Size )
      goto LABEL_8;
LABEL_5:
    v4 = i;
    v5 = m_pData->m_Elements[i];
    (*(*v1 + 152LL))(v1, *v5);
    *this->m_FuncHandles.m_pData->m_Elements[v4] = 0;
  }
  if ( i < 0 )
    goto LABEL_5;
LABEL_8:
  if ( m_pData != 0 )
  {
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
    this->m_FuncHandles.m_pData = 0;
  }
  if ( this->m_hScope != 0 && (this->m_flags & 1) == 0 )
  {
    (*(*v1 + 136LL))(v1);
    this->m_hScope = 0;
  }
  else
  {
    this->m_hScope = 0;
  }
LABEL_13:
  this->m_flags = 0;
}


// CEntityScriptFramework::GetScriptClassNameOverride  (line 379, @0x00000000030cfa80, libserver.so)  // inlines: AddToTail, Alloc, AssignTo, CVariantBase, Call<char const*>, CopyData, Count, EnsureCapacity, Free, GetClassNameOverride<CVariantBase<CVariantDefaultAllocator>, char const*>, GetSize, GetVM, IsInitialized, IsValid, LookupFunction, Realloc, TempString, ToString, V_strncpy<int>, operator=, ~CVariantBase
// calls: CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>, _V_strncpy, CVariantBase<CVariantDefaultAllocator>::Free, V_snprintf, VariantFieldTypeName, Warning, _Unwind_Resume
// callers: CEntityScriptFramework::CreatePublicScriptScope
// strings: "%g %g %g %g", "No conversion from %s to string at the moment!\n", "false", "true", "%d %d %d %d", "GetClassNameOverride"
// globals: jpt_30CFC13, CVariantBase<CVariantDefaultAllocator>::ToString(void)::szBuf
const char *__fastcall CEntityScriptFramework::GetScriptClassNameOverride(
        CEntityScriptFramework *const this,
        const char *pszScriptClassName,
        char *pScratchBuf,
        int nBufLen)
{
  IScriptVM *v6; // rdi
  HSCRIPT m_hScope; // rdx
  HSCRIPT hFunction; // rsi
  HSCRIPT v11; // r9
  int v12; // r15d
  char *m_uint64; // rsi
  const char *v15; // rax
  double m_float; // xmm0_8
  const char *v17; // rcx
  HSCRIPT v18; // rax
  CUtlVectorUltraConservative<HSCRIPT__**,CUtlVectorUltraConservativeAllocator>::Data_t *m_pData; // rsi
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rdx
  CUtlVectorUltraConservative<HSCRIPT__**,CUtlVectorUltraConservativeAllocator>::Data_t *v22; // rcx
  __int64 v23; // rax
  CUtlVectorUltraConservative<HSCRIPT__**,CUtlVectorUltraConservativeAllocator>::Data_t *v24; // rax
  CUtlVectorUltraConservative<HSCRIPT__**,CUtlVectorUltraConservativeAllocator>::Data_t *v25; // rax
  int m_Size; // [rsp+Ch] [rbp-64h]
  ScriptVariant_t v27; // [rsp+10h] [rbp-60h] BYREF
  CVariantBase<CVariantDefaultAllocator> v28; // [rsp+20h] [rbp-50h] BYREF
  const char *v29; // [rsp+30h] [rbp-40h] BYREF
  __int16 v30; // [rsp+38h] [rbp-38h]
  __int16 v31; // [rsp+3Ah] [rbp-36h]

  v6 = g_pScriptVM;
  if ( g_pScriptVM == 0 )
    return pszScriptClassName;
  m_hScope = this->m_hScope;
  if ( this->m_hScope == 0 )
    return pszScriptClassName;
  hFunction = this->m_hScriptFunc_GetClassNameOverride.hFunction;
  v27.m_flags = 0;
  v11 = m_hScope;
  v27.m_type = 0;
  v27.m_uint64 = 0;
  if ( hFunction == 0 )
  {
    v18 = (*(*g_pScriptVM + 144LL))(g_pScriptVM, "GetClassNameOverride", m_hScope, 0, 0, m_hScope);
    m_pData = this->m_FuncHandles.m_pData;
    this->m_hScriptFunc_GetClassNameOverride.hFunction = v18;
    if ( m_pData != 0 )
    {
      m_Size = m_pData->m_Size;
      v20 = (*(*g_pMemAlloc + 128LL))(g_pMemAlloc);
      v21 = 8LL * (m_Size + 1) + 8;
      if ( v21 > v20 )
      {
        v24 = (*(*g_pMemAlloc + 8LL))(g_pMemAlloc, this->m_FuncHandles.m_pData, v21);
        this->m_FuncHandles.m_pData = v24;
        v22 = v24;
      }
      else
      {
        v22 = this->m_FuncHandles.m_pData;
      }
      v23 = m_Size;
    }
    else
    {
      v25 = (**g_pMemAlloc)(g_pMemAlloc, 16);
      this->m_FuncHandles.m_pData = v25;
      v25->m_Size = 0;
      v23 = 0;
      v22 = this->m_FuncHandles.m_pData;
    }
    v22->m_Elements[v23] = &this->m_hScriptFunc_GetClassNameOverride.hFunction;
    ++this->m_FuncHandles.m_pData->m_Size;
    hFunction = this->m_hScriptFunc_GetClassNameOverride.hFunction;
    if ( hFunction == 0 )
      goto LABEL_15;
    v11 = this->m_hScope;
    v6 = g_pScriptVM;
  }
  v28.m_flags = 0;
  v31 = 0;
  v28.m_type = 0;
  v28.m_uint64 = 0;
  v30 = 30;
  v29 = pszScriptClassName;
  v12 = (*(*v6 + 160LL))(v6, hFunction, &v29, 1, &v28, v11, 1);
  if ( (v31 & 1) != 0 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v29);
  if ( v12 == -1 )
  {
    CVariantBase<CVariantDefaultAllocator>::Free(&v28);
LABEL_15:
    CVariantBase<CVariantDefaultAllocator>::Free(&v27);
    return pszScriptClassName;
  }
  CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&v28, &v27);
  if ( (v28.m_flags & 1) != 0 )
  {
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v28.m_uint64);
    v28.m_flags &= ~1u;
    v28.m_uint64 = 0;
    v28.m_type = 0;
  }
  if ( v27.m_type == 30 )
  {
    m_uint64 = v27.m_uint64;
  }
  else
  {
    switch ( v27.m_type )
    {
      case 0:
        goto LABEL_22;
      case 1:
        m_float = v27.m_float;
        goto LABEL_24;
      case 3:
      case 0x27:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%g %g %g",
          *v27.m_pszString,
          *(v27.m_uint64 + 4),
          *(v27.m_uint64 + 8));
        break;
      case 4:
      case 0x1B:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%g %g %g %g",
          *v27.m_pszString,
          *(v27.m_uint64 + 4),
          *(v27.m_uint64 + 8),
          *(v27.m_uint64 + 12));
        break;
      case 5:
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%d", v27.m_int);
        break;
      case 6:
        v17 = "true";
        if ( v27.m_char == 0 )
          v17 = "false";
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%s", v17);
        break;
      case 8:
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%c", v27.m_char);
        break;
      case 9:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%d %d %d %d",
          v27.m_char,
          BYTE1(v27.m_int),
          BYTE2(v27.m_uint),
          HIBYTE(v27.m_float));
        break;
      case 0x19:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%g %g",
          *v27.m_pszString,
          *(v27.m_uint64 + 4));
        break;
      case 0x1A:
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%lld", v27.m_uint64);
        break;
      case 0x21:
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%llu", v27.m_uint64);
        break;
      case 0x22:
        m_float = v27.m_float64;
LABEL_24:
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%g", m_float);
        break;
      case 0x25:
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%u", v27.m_int);
        break;
      default:
        v15 = VariantFieldTypeName(v27.m_type);
        Warning("No conversion from %s to string at the moment!\n", v15);
LABEL_22:
        CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf = 0;
        break;
    }
    m_uint64 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
  }
  _V_strncpy(pScratchBuf, m_uint64, nBufLen);
  if ( (v27.m_flags & 1) != 0 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v27.m_uint64);
  return pScratchBuf;
}


// CEntityScriptFramework::CreatePublicScriptScope  (line 393, @0x00000000030d12b0, libserver.so)  // inlines: AssignTo, CEntityOwnerPtr, CScriptAccessorT, CScriptComponent, CScriptScopeT, CSmartPtr, CUtlSymbolLarge, CUtlVectorUltraConservative, CVariantBase, Call<char const*, HSCRIPT__*>, CopyData, CreateEntity<HSCRIPT__*, char const*, HSCRIPT__*>, Free, GetVM, IsInitialized, IsValid, LookupFunction, SetScriptComponent, operator=, ~CVariantBase
// calls: CEntityScriptFramework::GetScriptClassNameOverride, CVariantBase<CVariantDefaultAllocator>::Free, operator new, CScriptComponent::AttachToScriptEntityClass, VariantFieldTypeName, Warning, CUtlVectorUltraConservative<HSCRIPT__**, CUtlVectorUltraConservativeAllocator>::AddToTail, __stack_chk_fail, _Unwind_Resume
// callers: CEntityInstance::ScriptGetOrCreatePublicScriptScope, CEntityInstance::CreatePublicScriptScope, CEntityInstance::ValidatePrivateScriptScope, CEntityInstance::RecreateScriptHooks, CEntityInstance::CallScriptFunction, CEntityInstance::PutInputDataInScriptTable
// strings: "No free conversion of %s variant to HSCRIPT right now\n"
HSCRIPT __fastcall CEntityScriptFramework::CreatePublicScriptScope(
        CEntityScriptFramework *const this,
        CEntityInstance *pInstance,
        const char *pScriptClassName)
{
  HSCRIPT result; // rax
  HSCRIPT v7; // r13
  const char *ScriptClassNameOverride; // rax
  HSCRIPT hFunction; // rsi
  int v10; // eax
  char *v11; // rdx
  int v12; // r15d
  HSCRIPT m_uint64; // r14
  HSCRIPT v14; // rsi
  CScriptComponent *v15; // rax
  CEntityInstance *v16; // rdx
  const char *v17; // rax
  char *v18; // [rsp+8h] [rbp-288h]
  HSCRIPT__ **pScriptClassNamea; // [rsp+18h] [rbp-278h]
  CVariantBase<CVariantDefaultAllocator> v20; // [rsp+20h] [rbp-270h] BYREF
  HSCRIPT__ **src; // [rsp+30h] [rbp-260h] BYREF
  __int16 v22; // [rsp+38h] [rbp-258h]
  __int16 v23; // [rsp+3Ah] [rbp-256h]
  HSCRIPT v24; // [rsp+40h] [rbp-250h]
  __int16 v25; // [rsp+48h] [rbp-248h]
  __int16 v26; // [rsp+4Ah] [rbp-246h]
  char pTmp[520]; // [rsp+50h] [rbp-240h] BYREF
  unsigned __int64 v28; // [rsp+258h] [rbp-38h]

  v28 = __readfsqword(0x28u);
  result = 0;
  if ( g_pScriptVM == 0 )
    return 0;
  if ( this->m_hScope != 0 )
  {
    v7 = (*(*g_pScriptVM + 184LL))(g_pScriptVM, pInstance->m_pEntity->m_pClass->m_pScriptClassDesc, pInstance);
    if ( pScriptClassName == 0 || *pScriptClassName == 0 )
      return v7;
    ScriptClassNameOverride = CEntityScriptFramework::GetScriptClassNameOverride(this, pScriptClassName, pTmp, 512);
    hFunction = this->m_hScriptFunc_CreateEntity.hFunction;
    pScriptClassNamea = ScriptClassNameOverride;
    if ( hFunction != 0 )
      goto LABEL_8;
    if ( g_pScriptVM == 0 || this->m_hScope == 0 )
    {
      this->m_hScriptFunc_CreateEntity.hFunction = 0;
      goto LABEL_19;
    }
    this->m_hScriptFunc_CreateEntity.hFunction = (*(*g_pScriptVM + 144LL))(
                                                   g_pScriptVM,
                                                   "CreateEntity",
                                                   this->m_hScope,
                                                   0);
    src = &this->m_hScriptFunc_CreateEntity.hFunction;
    CUtlVectorUltraConservative<HSCRIPT__ **,CUtlVectorUltraConservativeAllocator>::AddToTail(
      &this->m_FuncHandles,
      &src);
    hFunction = this->m_hScriptFunc_CreateEntity.hFunction;
    if ( hFunction != 0 )
    {
LABEL_8:
      v23 = 0;
      v20.m_type = 0;
      v20.m_flags = 0;
      v26 = 0;
      v22 = 30;
      v20.m_uint64 = 0;
      src = pScriptClassNamea;
      v25 = 31;
      v24 = v7;
      v10 = (*(*g_pScriptVM + 160LL))(g_pScriptVM, hFunction, &src, 2, &v20, this->m_hScope, 1);
      v11 = pTmp;
      v12 = v10;
      do
      {
        v11 -= 16;
        if ( (v11[10] & 1) != 0 )
        {
          v18 = v11;
          (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, *v11);
          v11 = v18;
          *(v18 + 5) &= ~1u;
        }
        *v11 = 0;
        *(v11 + 4) = 0;
      }
      while ( v11 != &src );
      if ( v12 != -1 )
      {
        m_uint64 = v20.m_uint64;
        if ( v20.m_type != 0 )
        {
          if ( v20.m_type != 31 )
          {
            v17 = VariantFieldTypeName(v20.m_type);
            Warning("No free conversion of %s variant to HSCRIPT right now\n", v17);
            m_uint64 = v7;
          }
        }
        else
        {
          m_uint64 = 0;
        }
        CVariantBase<CVariantDefaultAllocator>::Free(&v20);
        CVariantBase<CVariantDefaultAllocator>::Free(&v20);
        v14 = v7;
        v7 = m_uint64;
        (*(*g_pScriptVM + 136LL))(g_pScriptVM, v14);
        v15 = operator new(0x30u);
        v15->m_hScope = 0;
        v15->m_FuncHandles.m_pData = 0;
        v15->m_flags = 0;
        v16 = CEntitySpawnHelper::gm_pCurEntityPtr;
        v15->m_Outputs.m_pData = 0;
        v15->m_scriptClassName.u.m_Id = 0;
        v15->m_pOwner.m_pObj = v16;
        pInstance->m_CScriptComponent = v15;
        CScriptComponent::AttachToScriptEntityClass(v15, m_uint64, pScriptClassNamea);
        return v7;
      }
      CVariantBase<CVariantDefaultAllocator>::Free(&v20);
    }
LABEL_19:
    (*(*g_pScriptVM + 200LL))(g_pScriptVM, v7);
    (*(*g_pScriptVM + 136LL))(g_pScriptVM, v7);
    return 0;
  }
  return result;
}


// CEntityScriptFramework::DestroyPublicScriptScope  (line 434, @0x00000000030ce7c0, libserver.so)  // inlines: GetVM, SetScriptComponent
// calls: CScriptComponent::DetachFromScriptEntityClass, CScriptComponent::~CScriptComponent, operator delete
// callers: CEntityInstance::DestroyPublicScriptScope
void __fastcall CEntityScriptFramework::DestroyPublicScriptScope(
        CEntityScriptFramework *const this,
        CEntityInstance *pInstance,
        HSCRIPT hScript)
{
  CScriptComponent *m_CScriptComponent; // rbx

  if ( hScript != 0 )
  {
    m_CScriptComponent = pInstance->m_CScriptComponent;
    if ( m_CScriptComponent != 0 )
    {
      CScriptComponent::DetachFromScriptEntityClass(pInstance->m_CScriptComponent);
      pInstance->m_CScriptComponent = 0;
      CScriptComponent::~CScriptComponent(m_CScriptComponent);
      operator delete(m_CScriptComponent);
    }
    (*(*g_pScriptVM + 200LL))(g_pScriptVM, hScript);
  }
}


// CEntityScriptFramework::IsKeyUsedByScriptClass  (line 453, @0x00000000030cffa0, libserver.so)  // inlines: CVariantBase, Call<char const*, int>, CopyData, Free, GetVM, IsInitialized, IsKeyValueUsed<CVariantBase<CVariantDefaultAllocator>, char const*, int>, IsValid, LookupFunction, operator=, ~CVariantBase
// calls: CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>, CVariantBase<CVariantDefaultAllocator>::Free, CUtlVectorUltraConservative<HSCRIPT__**, CUtlVectorUltraConservativeAllocator>::AddToTail, _Unwind_Resume
// callers: CEntitySystem::IsKeyUsedByScriptClass
// strings: "IsKeyValueUsed"
bool __fastcall CEntityScriptFramework::IsKeyUsedByScriptClass(
        CEntityScriptFramework *const this,
        const char *pScriptClassName,
        EntityKeyId_t keyId)
{
  HSCRIPT m_hScope; // rdx
  HSCRIPT hFunction; // rsi
  int v8; // r12d
  CVariantBase<CVariantDefaultAllocator> *p_m_nHashCode; // rbx
  bool result; // al
  char m_char; // [rsp+Ch] [rbp-74h]
  HSCRIPT__ **src; // [rsp+18h] [rbp-68h] BYREF
  ScriptVariant_t v13; // [rsp+20h] [rbp-60h] BYREF
  CVariantBase<CVariantDefaultAllocator> v14; // [rsp+30h] [rbp-50h] BYREF
  const char *v15; // [rsp+40h] [rbp-40h] BYREF
  __int16 v16; // [rsp+48h] [rbp-38h]
  __int16 v17; // [rsp+4Ah] [rbp-36h]
  __int64 m_nHashCode; // [rsp+50h] [rbp-30h] BYREF
  __int16 v19; // [rsp+58h] [rbp-28h]
  __int16 v20; // [rsp+5Ah] [rbp-26h]

  if ( g_pScriptVM == 0 )
    return 0;
  m_hScope = this->m_hScope;
  if ( this->m_hScope == 0 )
    return 0;
  hFunction = this->m_hScriptFunc_IsKeyValueUsed.hFunction;
  v13.m_type = 0;
  v13.m_flags = 0;
  v13.m_uint64 = 0;
  if ( hFunction == 0 )
  {
    this->m_hScriptFunc_IsKeyValueUsed.hFunction = (*(*g_pScriptVM + 144LL))(g_pScriptVM, "IsKeyValueUsed", m_hScope, 0);
    src = &this->m_hScriptFunc_IsKeyValueUsed.hFunction;
    CUtlVectorUltraConservative<HSCRIPT__ **,CUtlVectorUltraConservativeAllocator>::AddToTail(
      &this->m_FuncHandles,
      &src);
    hFunction = this->m_hScriptFunc_IsKeyValueUsed.hFunction;
    if ( hFunction == 0 )
    {
LABEL_14:
      if ( (v13.m_flags & 1) != 0 )
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v13.m_uint64);
      return 0;
    }
  }
  v20 = 0;
  v14.m_flags = 0;
  v17 = 0;
  v16 = 30;
  v15 = pScriptClassName;
  v19 = 5;
  v14.m_type = 0;
  v14.m_uint64 = 0;
  m_nHashCode = keyId.m_nHashCode;
  v8 = (*(*g_pScriptVM + 160LL))(g_pScriptVM, hFunction, &v15, 2, &v14, this->m_hScope, 1);
  p_m_nHashCode = &m_nHashCode;
  do
  {
    if ( (p_m_nHashCode->m_flags & 1) != 0 )
    {
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p_m_nHashCode->m_uint64);
      p_m_nHashCode->m_flags &= ~1u;
    }
    p_m_nHashCode->m_uint64 = 0;
    --p_m_nHashCode;
    p_m_nHashCode[1].m_type = 0;
  }
  while ( p_m_nHashCode != &v14 );
  if ( v8 == -1 )
  {
    CVariantBase<CVariantDefaultAllocator>::Free(p_m_nHashCode);
    goto LABEL_14;
  }
  CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&v14, &v13);
  if ( (v14.m_flags & 1) != 0 )
  {
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v14.m_uint64);
    v14.m_flags &= ~1u;
    v14.m_uint64 = 0;
    v14.m_type = 0;
  }
  result = v13.m_char;
  if ( (v13.m_flags & 1) != 0 )
  {
    m_char = v13.m_char;
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v13.m_uint64);
    return m_char;
  }
  return result;
}


// CEntityScriptFramework::DispatchPrecache  (line 467, @0x00000000030d0870, libserver.so)  // inlines: CScriptPrecacheContext, CVariantBase, Call<HSCRIPT__*, HSCRIPT__*>, DispatchPrecache<HSCRIPT__*, HSCRIPT__*>, Free, GetClassInfo, GetEntityNameAsCStr, GetVM, IsInitialized, IsValid, LookupFunction, RegisterInstance<CScriptPrecacheContext>, String, operator HSCRIPT, operator=, ~CScriptPrecacheContext, ~CVariantBase
// calls: GetScriptDesc<CScriptPrecacheContext>, Warning, CUtlVectorUltraConservative<HSCRIPT__**, CUtlVectorUltraConservativeAllocator>::AddToTail, _Unwind_Resume, CVariantBase<CVariantDefaultAllocator>::Free
// callers: CScriptComponent::Precache
// strings: "Failed to precache script entity %s of type %s: script entity instance is null\n", "DispatchPrecache"
void __fastcall CEntityScriptFramework::DispatchPrecache(
        CEntityScriptFramework *const this,
        CEntityInstance *pEntity,
        CScriptComponent *pComponent,
        const CEntityPrecacheContext *pContext)
{
  HSCRIPT m_hScope; // r13
  IScriptVM *v6; // r14
  __int64 (__fastcall *v7)(IScriptVM *, ScriptClassDesc_t *, CScriptPrecacheContext *); // r12
  ScriptClassDesc_t *Script; // rax
  HSCRIPT v9; // rax
  HSCRIPT hFunction; // rsi
  HSCRIPT v11; // r14
  CScriptPrecacheContext *p_context; // rbx
  CEntityIdentity *m_pEntity; // rax
  const char *m_pszClassname; // rdx
  HSCRIPT__ **src; // [rsp+18h] [rbp-88h] BYREF
  HSCRIPT v16; // [rsp+20h] [rbp-80h] BYREF
  __int16 v17; // [rsp+28h] [rbp-78h]
  __int16 v18; // [rsp+2Ah] [rbp-76h]
  HSCRIPT v19; // [rsp+30h] [rbp-70h]
  __int16 v20; // [rsp+38h] [rbp-68h]
  __int16 v21; // [rsp+3Ah] [rbp-66h]
  CScriptPrecacheContext context; // [rsp+40h] [rbp-60h] BYREF

  m_hScope = pComponent->m_hScope;
  if ( pComponent->m_hScope != 0 )
  {
    context.m_pContext = pContext;
    v6 = g_pScriptVM;
    v7 = *(*g_pScriptVM + 184LL);
    Script = GetScriptDesc<CScriptPrecacheContext>(&context);
    v9 = v7(v6, Script, &context);
    hFunction = this->m_hScriptFunc_DispatchPrecache.hFunction;
    v11 = v9;
    context.m_hPrecacheContext = v9;
    if ( hFunction != 0 )
      goto LABEL_3;
    if ( g_pScriptVM != 0 && this->m_hScope != 0 )
    {
      this->m_hScriptFunc_DispatchPrecache.hFunction = (*(*g_pScriptVM + 144LL))(
                                                         g_pScriptVM,
                                                         "DispatchPrecache",
                                                         this->m_hScope,
                                                         0);
      src = &this->m_hScriptFunc_DispatchPrecache.hFunction;
      CUtlVectorUltraConservative<HSCRIPT__ **,CUtlVectorUltraConservativeAllocator>::AddToTail(
        &this->m_FuncHandles,
        &src);
      hFunction = this->m_hScriptFunc_DispatchPrecache.hFunction;
      if ( hFunction != 0 )
      {
LABEL_3:
        v18 = 0;
        v21 = 0;
        v17 = 31;
        v16 = m_hScope;
        v20 = 31;
        v19 = v11;
        (*(*g_pScriptVM + 160LL))(g_pScriptVM, hFunction, &v16, 2, 0, this->m_hScope, 1);
        p_context = &context;
        do
        {
          p_context = (p_context - 16);
          if ( (BYTE2(p_context->m_scratch.m_pConfig) & 1) != 0 )
          {
            (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p_context->m_scratch.m_pKeyValues);
            WORD1(p_context->m_scratch.m_pConfig) &= ~1u;
          }
          p_context->m_scratch.m_pKeyValues = 0;
          LOWORD(p_context->m_scratch.m_pConfig) = 0;
        }
        while ( p_context != &v16 );
      }
    }
    else
    {
      this->m_hScriptFunc_DispatchPrecache.hFunction = 0;
    }
    (*(*g_pScriptVM + 200LL))(g_pScriptVM, context.m_hPrecacheContext);
    return;
  }
  m_pEntity = pEntity->m_pEntity;
  m_pszClassname = m_pEntity->m_pClass->m_pClassInfo->m_pszClassname;
  if ( m_pEntity->m_name.u.m_Id != 0 )
    Warning(
      "Failed to precache script entity %s of type %s: script entity instance is null\n",
      m_pEntity->m_name.u.m_pAsString,
      m_pszClassname);
  else
    Warning("Failed to precache script entity %s of type %s: script entity instance is null\n", "", m_pszClassname);
}


// CEntityScriptFramework::DispatchSpawn  (line 481, @0x00000000030d0360, libserver.so)  // inlines: CScriptKeyValues, CVariantBase, Call<HSCRIPT__*, HSCRIPT__*>, DispatchSpawn<HSCRIPT__*, HSCRIPT__*>, Free, GetClassInfo, GetEntityNameAsCStr, GetVM, IsInitialized, IsValid, LookupFunction, RegisterInstance<CScriptKeyValues>, String, operator HSCRIPT, operator=, ~CScriptKeyValues, ~CVariantBase
// calls: GetScriptDesc<CScriptKeyValues>, Warning, CUtlVectorUltraConservative<HSCRIPT__**, CUtlVectorUltraConservativeAllocator>::AddToTail, _Unwind_Resume, CVariantBase<CVariantDefaultAllocator>::Free
// callers: CScriptComponent::Spawn
// strings: "Failed to spawn script entity %s of type %s: script entity instance is null\n", "DispatchSpawn"
void __fastcall CEntityScriptFramework::DispatchSpawn(
        CEntityScriptFramework *const this,
        CEntityInstance *pEntity,
        CScriptComponent *pComponent,
        const CEntityKeyValues *pKeyValues)
{
  HSCRIPT m_hScope; // r13
  IScriptVM *v6; // r14
  __int64 (__fastcall *v7)(IScriptVM *, ScriptClassDesc_t *, CScriptKeyValues *); // r12
  ScriptClassDesc_t *Script; // rax
  HSCRIPT v9; // rax
  HSCRIPT hFunction; // rsi
  HSCRIPT v11; // r14
  HSCRIPT *v12; // rbx
  CEntityIdentity *m_pEntity; // rax
  const char *m_pszClassname; // rdx
  HSCRIPT__ **src; // [rsp+18h] [rbp-68h] BYREF
  CScriptKeyValues scriptKV; // [rsp+20h] [rbp-60h] BYREF
  HSCRIPT v17; // [rsp+30h] [rbp-50h] BYREF
  __int16 v18; // [rsp+38h] [rbp-48h]
  __int16 v19; // [rsp+3Ah] [rbp-46h]
  HSCRIPT v20; // [rsp+40h] [rbp-40h]
  __int16 v21; // [rsp+48h] [rbp-38h]
  __int16 v22; // [rsp+4Ah] [rbp-36h]
  char v23; // [rsp+50h] [rbp-30h] BYREF

  m_hScope = pComponent->m_hScope;
  if ( pComponent->m_hScope != 0 )
  {
    scriptKV.m_pKeyValues = pKeyValues;
    v6 = g_pScriptVM;
    v7 = *(*g_pScriptVM + 184LL);
    Script = GetScriptDesc<CScriptKeyValues>(&scriptKV);
    v9 = v7(v6, Script, &scriptKV);
    hFunction = this->m_hScriptFunc_DispatchSpawn.hFunction;
    v11 = v9;
    scriptKV.m_hKeyValues = v9;
    if ( hFunction != 0 )
      goto LABEL_3;
    if ( g_pScriptVM != 0 && this->m_hScope != 0 )
    {
      this->m_hScriptFunc_DispatchSpawn.hFunction = (*(*g_pScriptVM + 144LL))(
                                                      g_pScriptVM,
                                                      "DispatchSpawn",
                                                      this->m_hScope,
                                                      0);
      src = &this->m_hScriptFunc_DispatchSpawn.hFunction;
      CUtlVectorUltraConservative<HSCRIPT__ **,CUtlVectorUltraConservativeAllocator>::AddToTail(
        &this->m_FuncHandles,
        &src);
      hFunction = this->m_hScriptFunc_DispatchSpawn.hFunction;
      if ( hFunction != 0 )
      {
LABEL_3:
        v19 = 0;
        v22 = 0;
        v18 = 31;
        v17 = m_hScope;
        v21 = 31;
        v20 = v11;
        (*(*g_pScriptVM + 160LL))(g_pScriptVM, hFunction, &v17, 2, 0, this->m_hScope, 1);
        v12 = &v23;
        do
        {
          v12 -= 2;
          if ( (*(v12 + 10) & 1) != 0 )
          {
            (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, *v12);
            *(v12 + 5) &= ~1u;
          }
          *v12 = 0;
          *(v12 + 4) = 0;
        }
        while ( v12 != &v17 );
      }
    }
    else
    {
      this->m_hScriptFunc_DispatchSpawn.hFunction = 0;
    }
    (*(*g_pScriptVM + 200LL))(g_pScriptVM, scriptKV.m_hKeyValues);
    return;
  }
  m_pEntity = pEntity->m_pEntity;
  m_pszClassname = m_pEntity->m_pClass->m_pClassInfo->m_pszClassname;
  if ( m_pEntity->m_name.u.m_Id != 0 )
    Warning(
      "Failed to spawn script entity %s of type %s: script entity instance is null\n",
      m_pEntity->m_name.u.m_pAsString,
      m_pszClassname);
  else
    Warning("Failed to spawn script entity %s of type %s: script entity instance is null\n", "", m_pszClassname);
}


// CEntityScriptFramework::DispatchActivate  (line 495, @0x00000000030cec80, libserver.so)  // inlines: AssignTo, CVariantBase, Call<HSCRIPT__*>, DispatchActivate<bool, HSCRIPT__*>, Free, GetClassInfo, GetEntityNameAsCStr, GetVM, IsInitialized, IsValid, LookupFunction, String, _V_strcmp, operator HSCRIPT, operator=, ~CVariantBase
// calls: Warning, CVariantBase<CVariantDefaultAllocator>::Free, CUtlVectorUltraConservative<HSCRIPT__**, CUtlVectorUltraConservativeAllocator>::AddToTail, VariantFieldTypeName, _Unwind_Resume
// callers: CScriptComponent::Activate
// strings: "Failed to activate script entity %s of type %s: script entity instance is null\n", "DispatchActivate", "false", "true", "Invalid conversion : CString '%s' to bool\n", "No conversion from %s to bool now\n"
// globals: jpt_30CED39
bool __fastcall CEntityScriptFramework::DispatchActivate(
        CEntityScriptFramework *const this,
        CEntityInstance *pEntity,
        CScriptComponent *pComponent)
{
  HSCRIPT__ **m_hScope; // rbx
  HSCRIPT hFunction; // rsi
  int v6; // ebx
  CEntityIdentity *m_pEntity; // rax
  const char *m_pAsString; // rsi
  char m_char; // bl
  bool result; // al
  const char *v11; // rax
  CVariantBase<CVariantDefaultAllocator> v12; // [rsp+10h] [rbp-40h] BYREF
  HSCRIPT__ **src; // [rsp+20h] [rbp-30h] BYREF
  __int16 v14; // [rsp+28h] [rbp-28h]
  __int16 v15; // [rsp+2Ah] [rbp-26h]

  m_hScope = pComponent->m_hScope;
  if ( pComponent->m_hScope != 0 )
  {
    hFunction = this->m_hScriptFunc_DispatchActivate.hFunction;
    if ( hFunction != 0 )
      goto LABEL_3;
    if ( g_pScriptVM != 0 && this->m_hScope != 0 )
    {
      this->m_hScriptFunc_DispatchActivate.hFunction = (*(*g_pScriptVM + 144LL))(
                                                         g_pScriptVM,
                                                         "DispatchActivate",
                                                         this->m_hScope,
                                                         0);
      src = &this->m_hScriptFunc_DispatchActivate.hFunction;
      CUtlVectorUltraConservative<HSCRIPT__ **,CUtlVectorUltraConservativeAllocator>::AddToTail(
        &this->m_FuncHandles,
        &src);
      hFunction = this->m_hScriptFunc_DispatchActivate.hFunction;
      if ( hFunction != 0 )
      {
LABEL_3:
        v12.m_type = 0;
        v12.m_flags = 0;
        v15 = 0;
        v12.m_uint64 = 0;
        v14 = 31;
        src = m_hScope;
        v6 = (*(*g_pScriptVM + 160LL))(g_pScriptVM, hFunction, &src, 1, &v12, this->m_hScope, 1);
        if ( (v15 & 1) != 0 )
        {
          (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, src);
          if ( v6 != -1 )
          {
LABEL_5:
            switch ( v12.m_type )
            {
              case 0:
                goto LABEL_16;
              case 1:
                m_char = v12.m_float != 0.0;
                goto LABEL_13;
              case 5:
              case 0x25:
                m_char = v12.m_int != 0;
                goto LABEL_13;
              case 6:
                m_char = v12.m_char;
                goto LABEL_13;
              case 0x1A:
              case 0x21:
                m_char = v12.m_uint64 != 0;
                goto LABEL_13;
              case 0x1E:
                if ( strcmp(v12.m_pszString, "0") == 0
                  || strcmp(v12.m_pszString, "false") == 0
                  || strcmp(v12.m_pszString, "no") == 0 )
                {
LABEL_16:
                  m_char = 0;
                }
                else
                {
                  if ( strcmp(v12.m_pszString, "1") != 0
                    && strcmp(v12.m_pszString, "true") != 0
                    && strcmp(v12.m_pszString, "yes") != 0 )
                  {
                    Warning("Invalid conversion : CString '%s' to bool\n", v12.m_pszString);
                  }
LABEL_31:
                  m_char = 1;
                }
LABEL_13:
                if ( (v12.m_flags & 1) == 0 )
                  return m_char;
                (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v12.m_uint64);
                result = m_char;
                break;
              case 0x22:
                m_char = v12.m_float64 != 0.0;
                goto LABEL_13;
              default:
                v11 = VariantFieldTypeName(v12.m_type);
                Warning("No conversion from %s to bool now\n", v11);
                goto LABEL_31;
            }
            return result;
          }
        }
        else if ( v6 != -1 )
        {
          goto LABEL_5;
        }
        CVariantBase<CVariantDefaultAllocator>::Free(&v12);
        return 1;
      }
    }
    else
    {
      this->m_hScriptFunc_DispatchActivate.hFunction = 0;
    }
    return 1;
  }
  m_pEntity = pEntity->m_pEntity;
  m_pAsString = "";
  if ( m_pEntity->m_name.u.m_Id != 0 )
    m_pAsString = m_pEntity->m_name.u.m_pAsString;
  m_char = 1;
  Warning(
    "Failed to activate script entity %s of type %s: script entity instance is null\n",
    m_pAsString,
    m_pEntity->m_pClass->m_pClassInfo->m_pszClassname);
  return m_char;
}


// CEntityScriptFramework::DispatchUpdateOnRemove  (line 510, @0x00000000030cf430, libserver.so)  // inlines: AssignTo, CVariantBase, Call<HSCRIPT__*>, DispatchUpdateOnRemove<bool, HSCRIPT__*>, Free, GetClassInfo, GetEntityNameAsCStr, GetVM, IsInitialized, IsValid, LookupFunction, String, _V_strcmp, operator HSCRIPT, operator=, ~CVariantBase
// calls: Warning, CUtlVectorUltraConservative<HSCRIPT__**, CUtlVectorUltraConservativeAllocator>::AddToTail, VariantFieldTypeName, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// callers: CScriptComponent::UpdateOnRemove
// strings: "false", "true", "Invalid conversion : CString '%s' to bool\n", "Failed to update on remove script entity %s of type %s: script entity instance is null\n", "DispatchUpdateOnRemove", "No conversion from %s to bool now\n"
// globals: jpt_30CF4F2
void __fastcall CEntityScriptFramework::DispatchUpdateOnRemove(
        CEntityScriptFramework *const this,
        CEntityInstance *pEntity,
        CScriptComponent *pComponent)
{
  HSCRIPT__ **m_hScope; // rbx
  HSCRIPT hFunction; // rsi
  int v6; // r12d
  CEntityIdentity *m_pEntity; // rax
  const char *m_pAsString; // rsi
  const char *v9; // rax
  const char *v10; // [rsp+10h] [rbp-40h] BYREF
  int16 v11; // [rsp+18h] [rbp-38h]
  __int16 v12; // [rsp+1Ah] [rbp-36h]
  HSCRIPT__ **src; // [rsp+20h] [rbp-30h] BYREF
  __int16 v14; // [rsp+28h] [rbp-28h]
  __int16 v15; // [rsp+2Ah] [rbp-26h]

  m_hScope = pComponent->m_hScope;
  if ( pComponent->m_hScope != 0 )
  {
    hFunction = this->m_hScriptFunc_DispatchUpdateOnRemove.hFunction;
    if ( hFunction != 0 )
      goto LABEL_3;
    if ( g_pScriptVM == 0 || this->m_hScope == 0 )
    {
      this->m_hScriptFunc_DispatchUpdateOnRemove.hFunction = 0;
      return;
    }
    this->m_hScriptFunc_DispatchUpdateOnRemove.hFunction = (*(*g_pScriptVM + 144LL))(
                                                             g_pScriptVM,
                                                             "DispatchUpdateOnRemove",
                                                             this->m_hScope,
                                                             0);
    src = &this->m_hScriptFunc_DispatchUpdateOnRemove.hFunction;
    CUtlVectorUltraConservative<HSCRIPT__ **,CUtlVectorUltraConservativeAllocator>::AddToTail(
      &this->m_FuncHandles,
      &src);
    hFunction = this->m_hScriptFunc_DispatchUpdateOnRemove.hFunction;
    if ( hFunction != 0 )
    {
LABEL_3:
      v11 = 0;
      src = m_hScope;
      v12 = 0;
      v10 = 0;
      v15 = 0;
      v14 = 31;
      v6 = (*(*g_pScriptVM + 160LL))(g_pScriptVM, hFunction, &src, 1, &v10, this->m_hScope, 1);
      if ( (v15 & 1) != 0 )
      {
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, src);
        if ( v6 != -1 )
        {
LABEL_5:
          switch ( v11 )
          {
            case 0:
            case 1:
            case 5:
            case 6:
            case 26:
            case 33:
            case 34:
            case 37:
              break;
            case 30:
              if ( strcmp(v10, "0") != 0
                && strcmp(v10, "false") != 0
                && strcmp(v10, "no") != 0
                && strcmp(v10, "1") != 0
                && strcmp(v10, "true") != 0
                && strcmp(v10, "yes") != 0 )
              {
                Warning("Invalid conversion : CString '%s' to bool\n", v10);
              }
              break;
            default:
              v9 = VariantFieldTypeName(v11);
              Warning("No conversion from %s to bool now\n", v9);
              break;
          }
          if ( (v12 & 1) == 0 )
            return;
LABEL_20:
          (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v10);
          return;
        }
      }
      else if ( v6 != -1 )
      {
        goto LABEL_5;
      }
      if ( (v12 & 1) == 0 )
        return;
      goto LABEL_20;
    }
  }
  else
  {
    m_pEntity = pEntity->m_pEntity;
    m_pAsString = "";
    if ( m_pEntity->m_name.u.m_Id != 0 )
      m_pAsString = m_pEntity->m_name.u.m_pAsString;
    Warning(
      "Failed to update on remove script entity %s of type %s: script entity instance is null\n",
      m_pAsString,
      m_pEntity->m_pClass->m_pClassInfo->m_pszClassname);
  }
}


// CEntityScriptFramework::GetPrecacheContext  (line 525, @0x00000000030d0ab0, libserver.so)  // inlines: GetVM
// calls: GetScriptDesc<CScriptPrecacheContext>
// callers: Script_PrecacheEntityFromTable, Script_PrecacheModel, DOTA_VScript_PrecacheItemByNameSync, Script_PrecacheResource, DOTA_VScript_PrecacheUnitByNameSync, DOTA_VScript_PrecacheUnitFromTableSync
const CEntityPrecacheContext *__fastcall CEntityScriptFramework::GetPrecacheContext(
        CEntityScriptFramework *const this,
        HSCRIPT hPrecacheContext)
{
  IScriptVM *v3; // rbx
  __int64 (__fastcall *v4)(IScriptVM *, HSCRIPT, ScriptClassDesc_t *); // r13
  ScriptClassDesc_t *Script; // rax
  __int64 v6; // rax

  v3 = g_pScriptVM;
  v4 = *(*g_pScriptVM + 208LL);
  Script = GetScriptDesc<CScriptPrecacheContext>(0);
  v6 = v4(v3, hPrecacheContext, Script);
  if ( v6 != 0 )
    return *(v6 + 24);
  else
    return 0;
}


// CEntityScriptFramework::GetOutputsForClass  (line 534, @0x00000000030d0e70, libserver.so)  // inlines: CVariantBase, Call<char const*>, CopyData, Free, GetNativeOutputsForClass<CVariantBase<CVariantDefaultAllocator>, char const*>, GetVM, IsInitialized, IsValid, LookupFunction, operator=, ~CVariantBase
// calls: CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>, CVariantBase<CVariantDefaultAllocator>::Free, GetScriptDesc<CScriptNativeOutputs>, CUtlVectorUltraConservative<HSCRIPT__**, CUtlVectorUltraConservativeAllocator>::AddToTail, _Unwind_Resume
// callers: CScriptComponent::AttachToScriptEntityClass
// strings: "GetNativeOutputsForClass"
CUtlVector<ScriptEntityIOOutputDesc_t,CUtlMemory<ScriptEntityIOOutputDesc_t,int> > *__fastcall CEntityScriptFramework::GetOutputsForClass(
        CEntityScriptFramework *const this,
        const char *pszScriptClassName)
{
  HSCRIPT hFunction; // rsi
  int v5; // ebx
  CUtlVector<ScriptEntityIOOutputDesc_t,CUtlMemory<ScriptEntityIOOutputDesc_t,int> > *result; // rax
  IScriptVM *v7; // rbx
  __int64 (__fastcall *v8)(IScriptVM *, uint64, ScriptClassDesc_t *); // r13
  ScriptClassDesc_t *Script; // rax
  CUtlVector<ScriptEntityIOOutputDesc_t,CUtlMemory<ScriptEntityIOOutputDesc_t,int> > *v10; // rbx
  CUtlVector<ScriptEntityIOOutputDesc_t,CUtlMemory<ScriptEntityIOOutputDesc_t,int> > *v11; // [rsp+8h] [rbp-68h]
  HSCRIPT__ **src; // [rsp+18h] [rbp-58h] BYREF
  ScriptVariant_t hNativeOutputs; // [rsp+20h] [rbp-50h] BYREF
  CVariantBase<CVariantDefaultAllocator> v14; // [rsp+30h] [rbp-40h] BYREF
  const char *v15; // [rsp+40h] [rbp-30h] BYREF
  __int16 v16; // [rsp+48h] [rbp-28h]
  __int16 v17; // [rsp+4Ah] [rbp-26h]

  hNativeOutputs.m_type = 0;
  hFunction = this->m_hScriptFunc_GetNativeOutputsForClass.hFunction;
  hNativeOutputs.m_flags = 0;
  hNativeOutputs.m_uint64 = 0;
  if ( hFunction == 0 )
  {
    if ( g_pScriptVM == 0 || this->m_hScope == 0 )
    {
      this->m_hScriptFunc_GetNativeOutputsForClass.hFunction = 0;
      goto LABEL_6;
    }
    this->m_hScriptFunc_GetNativeOutputsForClass.hFunction = (*(*g_pScriptVM + 144LL))(
                                                               g_pScriptVM,
                                                               "GetNativeOutputsForClass",
                                                               this->m_hScope,
                                                               0);
    src = &this->m_hScriptFunc_GetNativeOutputsForClass.hFunction;
    CUtlVectorUltraConservative<HSCRIPT__ **,CUtlVectorUltraConservativeAllocator>::AddToTail(
      &this->m_FuncHandles,
      &src);
    hFunction = this->m_hScriptFunc_GetNativeOutputsForClass.hFunction;
    if ( hFunction == 0 )
    {
LABEL_6:
      result = 0;
      goto LABEL_7;
    }
  }
  v14.m_flags = 0;
  v17 = 0;
  v14.m_type = 0;
  v15 = pszScriptClassName;
  v14.m_uint64 = 0;
  v16 = 30;
  v5 = (*(*g_pScriptVM + 160LL))(g_pScriptVM, hFunction, &v15, 1, &v14, this->m_hScope, 1);
  if ( (v17 & 1) == 0 )
  {
    if ( v5 != -1 )
      goto LABEL_4;
LABEL_11:
    CVariantBase<CVariantDefaultAllocator>::Free(&v14);
    goto LABEL_6;
  }
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v15);
  if ( v5 == -1 )
    goto LABEL_11;
LABEL_4:
  CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&v14, &hNativeOutputs);
  if ( (v14.m_flags & 1) != 0 )
  {
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v14.m_uint64);
    v14.m_flags &= ~1u;
    v14.m_uint64 = 0;
    v14.m_type = 0;
    if ( hNativeOutputs.m_type != 31 )
      goto LABEL_6;
  }
  else if ( hNativeOutputs.m_type != 31 )
  {
    goto LABEL_6;
  }
  if ( hNativeOutputs.m_uint64 == 0 )
    goto LABEL_6;
  v7 = g_pScriptVM;
  v8 = *(*g_pScriptVM + 208LL);
  Script = GetScriptDesc<CScriptNativeOutputs>(0);
  v10 = v8(v7, hNativeOutputs.m_uint64, Script);
  (*(*g_pScriptVM + 344LL))(g_pScriptVM, &hNativeOutputs);
  result = v10;
LABEL_7:
  if ( (hNativeOutputs.m_flags & 1) != 0 )
  {
    v11 = result;
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, hNativeOutputs.m_uint64);
    return v11;
  }
  return result;
}


// CScriptComponent::CScriptComponent  (line 551, @0x00000000030ce520, libserver.so)  // inlines: CEntityOwnerPtr, CScriptAccessorT, CScriptScopeT, CSmartPtr, CUtlSymbolLarge, CUtlVectorUltraConservative
// callers: CSchemaClassBinding<CScriptComponent>::Allocate, CSchemaClassBinding<CScriptComponent>::ConstructInPlace, CSchemaClassBinding<CScriptComponent>::AllocateAndCopyConstruct
void __fastcall CScriptComponent::CScriptComponent(CScriptComponent *const this)
{
  CEntityInstance *v1; // rax

  this->m_hScope = 0;
  this->m_FuncHandles.m_pData = 0;
  this->m_flags = 0;
  v1 = CEntitySpawnHelper::gm_pCurEntityPtr;
  this->m_Outputs.m_pData = 0;
  this->m_scriptClassName.u.m_Id = 0;
  this->m_pOwner.m_pObj = v1;
}


// CScriptComponent::~CScriptComponent  (line 558, @0x00000000030ce560, libserver.so)  // inlines: Count, Free, GetVM, Purge, RemoveAll, Term, ~CScriptAccessorT, ~CScriptScopeT, ~CUtlVectorUltraConservative
// callers: CEntityScriptFramework::DestroyPublicScriptScope, CSchemaClassBinding<CScriptComponent>::Deallocate, CSchemaClassBinding<CScriptComponent>::DestructInPlace
void __fastcall CScriptComponent::~CScriptComponent(CScriptComponent *const this)
{
  int v2; // ebx
  IScriptVM *v3; // r14
  __int64 v4; // r13
  HSCRIPT__ **v5; // rdx
  CUtlVectorUltraConservative<HSCRIPT__**,CUtlVectorUltraConservativeAllocator>::Data_t *m_pData; // rsi

  if ( this->m_Outputs.m_pData != 0 )
  {
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
    this->m_Outputs.m_pData = 0;
  }
  if ( this->m_hScope != 0 )
  {
    v2 = 0;
    v3 = g_pScriptVM;
    if ( g_pScriptVM != 0 )
    {
      while ( 1 )
      {
        m_pData = this->m_FuncHandles.m_pData;
        if ( m_pData != 0 )
        {
          if ( v2 >= m_pData->m_Size )
            goto LABEL_10;
        }
        else if ( v2 >= 0 )
        {
          goto LABEL_10;
        }
        v4 = v2;
        v5 = m_pData->m_Elements[v2++];
        (*(*v3 + 152LL))(v3, *v5);
        *this->m_FuncHandles.m_pData->m_Elements[v4] = 0;
      }
    }
    m_pData = this->m_FuncHandles.m_pData;
LABEL_10:
    if ( m_pData != 0 )
    {
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
      this->m_FuncHandles.m_pData = 0;
    }
    if ( this->m_hScope != 0 && v3 != 0 && (this->m_flags & 1) == 0 )
    {
      (*(*v3 + 136LL))(v3);
      this->m_hScope = 0;
    }
    else
    {
      this->m_hScope = 0;
    }
  }
  this->m_flags = 0;
  if ( this->m_FuncHandles.m_pData != 0 )
  {
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
    this->m_FuncHandles.m_pData = 0;
  }
  this->m_hScope = 0;
}


// CScriptComponent::AttachToScriptEntityClass  (line 565, @0x00000000030d10c0, libserver.so)  // inlines: AddToTail, Alloc, Count, EnsureCapacity, GetSize, Init, Realloc, operator=, operator[]
// calls: CEntitySystem::AllocPooledString, CEntityScriptFramework::GetOutputsForClass
// callers: CEntityScriptFramework::CreatePublicScriptScope
// globals: g_EntityScriptFramework
void __fastcall CScriptComponent::AttachToScriptEntityClass(
        CScriptComponent *const this,
        HSCRIPT hPublicInstance,
        const char *pScriptClassName)
{
  CUtlVector<ScriptEntityIOOutputDesc_t,CUtlMemory<ScriptEntityIOOutputDesc_t,int> > *OutputsForClass; // rax
  CUtlVector<ScriptEntityIOOutputDesc_t,CUtlMemory<ScriptEntityIOOutputDesc_t,int> > *v6; // r12
  CUtlVectorUltraConservative<CEntityIOOutput,CUtlVectorUltraConservativeAllocator>::Data_t *m_pData; // rsi
  CUtlVectorUltraConservative<CEntityIOOutput,CUtlVectorUltraConservativeAllocator>::Data_t *m_Size; // rax
  unsigned __int64 v9; // r13
  __int64 v10; // r13
  int v11; // r15d
  CUtlVectorUltraConservative<CEntityIOOutput,CUtlVectorUltraConservativeAllocator>::Data_t *v12; // rax
  __int64 v13; // rax
  CUtlVectorUltraConservative<CEntityIOOutput,CUtlVectorUltraConservativeAllocator>::Data_t *v14; // rsi
  unsigned __int64 v15; // rax
  int v16; // r9d
  CUtlVectorUltraConservative<CEntityIOOutput,CUtlVectorUltraConservativeAllocator>::Data_t *v17; // rax
  int v18; // [rsp+Ch] [rbp-54h]
  unsigned __int64 v19; // [rsp+10h] [rbp-50h]
  ScriptEntityIOOutputDesc_t *v20; // [rsp+18h] [rbp-48h]
  char *v21; // [rsp+20h] [rbp-40h] BYREF

  if ( hPublicInstance != 0 )
  {
    this->m_flags = 3;
    this->m_hScope = hPublicInstance;
  }
  CEntitySystem::AllocPooledString(&v21, g_pEntitySystem, pScriptClassName);
  this->m_scriptClassName.u.m_Id = v21;
  OutputsForClass = CEntityScriptFramework::GetOutputsForClass(&g_EntityScriptFramework, pScriptClassName);
  v6 = OutputsForClass;
  if ( OutputsForClass != 0 )
  {
    m_pData = this->m_Outputs.m_pData;
    m_Size = OutputsForClass->m_Size;
    if ( m_pData != 0 )
    {
      if ( m_Size > m_pData->m_Size )
      {
        v9 = 24LL * m_Size + 8;
        if ( v9 > (*(*g_pMemAlloc + 128LL))(g_pMemAlloc) )
          this->m_Outputs.m_pData = (*(*g_pMemAlloc + 8LL))(g_pMemAlloc, this->m_Outputs.m_pData, v9);
        LODWORD(m_Size) = v6->m_Size;
      }
    }
    else
    {
      if ( m_Size <= 0 )
        return;
      m_Size = (**g_pMemAlloc)(g_pMemAlloc, 24LL * m_Size + 8);
      this->m_Outputs.m_pData = m_Size;
      m_Size->m_Size = 0;
      LODWORD(m_Size) = v6->m_Size;
    }
    if ( m_Size > 0 )
    {
      v10 = 0;
      v11 = 0;
      do
      {
        v14 = this->m_Outputs.m_pData;
        v20 = &v6->m_Memory.m_pMemory[v10];
        if ( v14 != 0 )
        {
          v18 = v14->m_Size;
          v19 = 24LL * (v14->m_Size + 1) + 8;
          v15 = (*(*g_pMemAlloc + 128LL))(g_pMemAlloc);
          v16 = v18;
          if ( v19 <= v15 )
          {
            v12 = this->m_Outputs.m_pData;
          }
          else
          {
            v12 = (*(*g_pMemAlloc + 8LL))(g_pMemAlloc, this->m_Outputs.m_pData, v19);
            v16 = v18;
            this->m_Outputs.m_pData = v12;
          }
        }
        else
        {
          v17 = (**g_pMemAlloc)(g_pMemAlloc, 32);
          v16 = 0;
          this->m_Outputs.m_pData = v17;
          v17->m_Size = 0;
          v12 = this->m_Outputs.m_pData;
        }
        ++v11;
        ++v10;
        v13 = &v12->m_Elements[v16];
        *(v13 + 8) = 0;
        *(v13 + 16) = v20;
        ++this->m_Outputs.m_pData->m_Size;
      }
      while ( v6->m_Size > v11 );
    }
  }
}


// CScriptComponent::DetachFromScriptEntityClass  (line 589, @0x00000000030ce6a0, libserver.so)  // inlines: Count, Free, GetVM, Purge, RemoveAll, Term, operator=
// callers: CEntityScriptFramework::DestroyPublicScriptScope
void __fastcall CScriptComponent::DetachFromScriptEntityClass(CScriptComponent *const this)
{
  int v2; // ebx
  IScriptVM *v3; // r14
  __int64 v4; // r13
  HSCRIPT__ **v5; // rdx
  CUtlVectorUltraConservative<CEntityIOOutput,CUtlVectorUltraConservativeAllocator>::Data_t *v6; // rsi
  CUtlVectorUltraConservative<HSCRIPT__**,CUtlVectorUltraConservativeAllocator>::Data_t *m_pData; // rsi

  if ( this->m_hScope != 0 )
  {
    v2 = 0;
    v3 = g_pScriptVM;
    if ( g_pScriptVM != 0 )
    {
      while ( 1 )
      {
        m_pData = this->m_FuncHandles.m_pData;
        if ( m_pData != 0 )
        {
          if ( v2 >= m_pData->m_Size )
            goto LABEL_8;
        }
        else if ( v2 >= 0 )
        {
          goto LABEL_8;
        }
        v4 = v2;
        v5 = m_pData->m_Elements[v2++];
        (*(*v3 + 152LL))(v3, *v5);
        *this->m_FuncHandles.m_pData->m_Elements[v4] = 0;
      }
    }
    m_pData = this->m_FuncHandles.m_pData;
LABEL_8:
    if ( m_pData != 0 )
    {
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
      this->m_FuncHandles.m_pData = 0;
    }
    if ( this->m_hScope != 0 && v3 != 0 && (this->m_flags & 1) == 0 )
    {
      (*(*v3 + 136LL))(v3);
      this->m_hScope = 0;
    }
    else
    {
      this->m_hScope = 0;
    }
  }
  this->m_flags = 0;
  v6 = this->m_Outputs.m_pData;
  this->m_scriptClassName.u.m_Id = 0;
  if ( v6 != 0 )
  {
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
    this->m_Outputs.m_pData = 0;
  }
}


// CScriptComponent::FindEntityIOOutputsByName  (line 598, @0x00000000030d1b50, libserver.so)  // inlines: AddToTail, CUtlSymbolLarge, CopyConstruct<CEntityIOOutput*>, Count, Element, GrowMemory, operator=, operator[]
// calls: CEntitySystem::AllocPooledString, CUtlMemory<CEntityIOOutput*, int>::Grow
// callers: CEntityIdentity::FindEntityIOOutputsByName
void __fastcall CScriptComponent::FindEntityIOOutputsByName(
        CScriptComponent *const this,
        const char *pName,
        CUtlVector<CEntityIOOutput*,CUtlMemory<CEntityIOOutput*,int> > *const outputs)
{
  CUtlVectorUltraConservative<CEntityIOOutput,CUtlVectorUltraConservativeAllocator>::Data_t *m_pData; // rax
  int m_Size; // r12d
  int v7; // ebx
  __int64 v8; // r15
  EntityIOOutputDesc_t *m_pDesc; // rcx
  const char *m_pName; // rax
  bool v11; // zf
  __int64 v12; // rax
  CUtlVectorUltraConservative<CEntityIOOutput,CUtlVectorUltraConservativeAllocator>::Data_t *v13; // rcx
  int v14; // edx
  CEntityIOOutput **v15; // rax
  int v16; // [rsp+4h] [rbp-6Ch]
  EntityIOOutputDesc_t *v17; // [rsp+18h] [rbp-58h]
  CUtlVectorUltraConservative<CEntityIOOutput,CUtlVectorUltraConservativeAllocator>::Data_t *v18; // [rsp+18h] [rbp-58h]
  string_t outputNameSymbol; // [rsp+20h] [rbp-50h] BYREF
  char *v20; // [rsp+30h] [rbp-40h] BYREF

  CEntitySystem::AllocPooledString(&outputNameSymbol, g_pEntitySystem, pName);
  m_pData = this->m_Outputs.m_pData;
  if ( m_pData != 0 )
  {
    m_Size = m_pData->m_Size;
    if ( m_pData->m_Size > 0 )
    {
      v7 = 0;
      while ( 1 )
      {
        v8 = v7;
        m_pDesc = m_pData->m_Elements[v7].m_pDesc;
        m_pName = m_pDesc[1].m_pName;
        if ( m_pName != 0 )
        {
          if ( m_pName != outputNameSymbol.u.m_pAsString )
            goto LABEL_5;
        }
        else
        {
          v17 = m_pDesc;
          CEntitySystem::AllocPooledString(&v20, g_pEntitySystem, m_pDesc->m_pName);
          v11 = v20 == outputNameSymbol.u.m_Id;
          v17[1].m_pName = v20;
          if ( !v11 )
            goto LABEL_5;
        }
        v12 = outputs->m_Size;
        v13 = this->m_Outputs.m_pData;
        v14 = outputs->m_Size;
        if ( v12 == outputs->m_Memory.m_nAllocationCount )
        {
          v16 = outputs->m_Size;
          v18 = this->m_Outputs.m_pData;
          CUtlMemory<CEntityIOOutput *,int>::Grow(&outputs->m_Memory, 1);
          v14 = outputs->m_Size;
          v12 = v16;
          v13 = v18;
        }
        outputs->m_Size = v14 + 1;
        v15 = &outputs->m_Memory.m_pMemory[v12];
        if ( v15 == 0 )
        {
LABEL_5:
          if ( ++v7 == m_Size )
            return;
          goto LABEL_6;
        }
        ++v7;
        *v15 = &v13->m_Elements[v8];
        if ( v7 == m_Size )
          return;
LABEL_6:
        m_pData = this->m_Outputs.m_pData;
      }
    }
  }
}


// CScriptComponent::GetEntityIOOutputs  (line 619, @0x00000000030d1c80, libserver.so)  // inlines: AddToTail, CopyConstruct<CEntityIOOutput*>, Count, Element, EnsureCapacity, GrowMemory, memcpy, operator[]
// calls: CUtlMemory<CEntityIOOutput*, int>::Grow, memcpy
// callers: CEntityIdentity::GetEntityIOOutputs
void __fastcall CScriptComponent::GetEntityIOOutputs(
        CScriptComponent *const this,
        CUtlVector<CEntityIOOutput*,CUtlMemory<CEntityIOOutput*,int> > *const outputs)
{
  CUtlVectorUltraConservative<CEntityIOOutput,CUtlVectorUltraConservativeAllocator>::Data_t *m_pData; // rax
  int m_Size; // r15d
  int v6; // r12d
  uint32 m_nGrowSize; // eax
  CEntityIOOutput **v8; // rsi
  __int64 v9; // rax
  int v10; // r13d
  CEntityIOOutput **v11; // rax
  __int64 v12; // r12
  CUtlVectorUltraConservative<CEntityIOOutput,CUtlVectorUltraConservativeAllocator>::Data_t *v13; // r8
  int v14; // eax
  CEntityIOOutput **m_pMemory; // r13
  CEntityIOOutput **v16; // rax
  CUtlVectorUltraConservative<CEntityIOOutput,CUtlVectorUltraConservativeAllocator>::Data_t *v17; // [rsp+8h] [rbp-38h]

  m_pData = this->m_Outputs.m_pData;
  if ( m_pData != 0 )
    m_Size = m_pData->m_Size;
  else
    m_Size = 0;
  v6 = m_Size + outputs->m_Size;
  if ( v6 > outputs->m_Memory.m_nAllocationCount )
  {
    m_nGrowSize = outputs->m_Memory.m_nGrowSize;
    if ( (m_nGrowSize & 0x40000000) == 0 )
    {
      if ( (m_nGrowSize & 0xC0000000) != 0 )
      {
        m_pMemory = outputs->m_Memory.m_pMemory;
        v16 = (**g_pMemAlloc)(g_pMemAlloc, 8LL * v6);
        outputs->m_Memory.m_pMemory = v16;
        if ( m_pMemory != 0 )
          memcpy(v16, m_pMemory, 8LL * outputs->m_Memory.m_nAllocationCount);
        outputs->m_Memory.m_nGrowSize &= 0x3FFFFFFFu;
      }
      else
      {
        v8 = outputs->m_Memory.m_pMemory;
        v9 = *g_pMemAlloc;
        if ( v8 != 0 )
          outputs->m_Memory.m_pMemory = (*(v9 + 8))(g_pMemAlloc, v8, 8LL * v6);
        else
          outputs->m_Memory.m_pMemory = (*v9)(g_pMemAlloc, 8LL * v6);
      }
      outputs->m_Memory.m_nAllocationCount = v6;
    }
  }
  v10 = 0;
  if ( m_Size > 0 )
  {
    do
    {
      v12 = outputs->m_Size;
      v13 = this->m_Outputs.m_pData;
      v14 = outputs->m_Size;
      if ( v12 == outputs->m_Memory.m_nAllocationCount )
      {
        v17 = this->m_Outputs.m_pData;
        CUtlMemory<CEntityIOOutput *,int>::Grow(&outputs->m_Memory, 1);
        v14 = outputs->m_Size;
        v13 = v17;
      }
      outputs->m_Size = v14 + 1;
      v11 = &outputs->m_Memory.m_pMemory[v12];
      if ( v11 != 0 )
        *v11 = &v13->m_Elements[v10];
      ++v10;
    }
    while ( v10 != m_Size );
  }
}


// CScriptComponent::GetEntityIOOutputs  (line 629, @0x00000000030d1df0, libserver.so)  // inlines: AddToTail, CopyConstruct<const EntityIOOutputDesc_t*>, Count, Element, EnsureCapacity, GrowMemory, memcpy, operator[]
// calls: CUtlMemory<const EntityIOOutputDesc_t*, int>::Grow, memcpy
// callers: CEntityIdentity::GetEntityIOOutputs
void __fastcall CScriptComponent::GetEntityIOOutputs(
        CScriptComponent *const this,
        CUtlVector<const EntityIOOutputDesc_t*,CUtlMemory<const EntityIOOutputDesc_t*,int> > *const outputs)
{
  CUtlVectorUltraConservative<CEntityIOOutput,CUtlVectorUltraConservativeAllocator>::Data_t *m_pData; // rax
  int m_Size; // r15d
  int v6; // r12d
  uint32 m_nGrowSize; // eax
  const EntityIOOutputDesc_t **v8; // rsi
  __int64 v9; // rax
  int v10; // r12d
  const EntityIOOutputDesc_t **v11; // rax
  __int64 v12; // r13
  EntityIOOutputDesc_t *m_pDesc; // rdx
  int v14; // eax
  const EntityIOOutputDesc_t **m_pMemory; // r13
  const EntityIOOutputDesc_t **v16; // rax
  EntityIOOutputDesc_t *v17; // [rsp+8h] [rbp-38h]

  m_pData = this->m_Outputs.m_pData;
  if ( m_pData != 0 )
    m_Size = m_pData->m_Size;
  else
    m_Size = 0;
  v6 = m_Size + outputs->m_Size;
  if ( v6 > outputs->m_Memory.m_nAllocationCount )
  {
    m_nGrowSize = outputs->m_Memory.m_nGrowSize;
    if ( (m_nGrowSize & 0x40000000) == 0 )
    {
      if ( (m_nGrowSize & 0xC0000000) != 0 )
      {
        m_pMemory = outputs->m_Memory.m_pMemory;
        v16 = (**g_pMemAlloc)(g_pMemAlloc, 8LL * v6);
        outputs->m_Memory.m_pMemory = v16;
        if ( m_pMemory != 0 )
          memcpy(v16, m_pMemory, 8LL * outputs->m_Memory.m_nAllocationCount);
        outputs->m_Memory.m_nGrowSize &= 0x3FFFFFFFu;
      }
      else
      {
        v8 = outputs->m_Memory.m_pMemory;
        v9 = *g_pMemAlloc;
        if ( v8 != 0 )
          outputs->m_Memory.m_pMemory = (*(v9 + 8))(g_pMemAlloc, v8, 8LL * v6);
        else
          outputs->m_Memory.m_pMemory = (*v9)(g_pMemAlloc, 8LL * v6);
      }
      outputs->m_Memory.m_nAllocationCount = v6;
    }
  }
  v10 = 0;
  if ( m_Size > 0 )
  {
    do
    {
      v12 = outputs->m_Size;
      m_pDesc = this->m_Outputs.m_pData->m_Elements[v10].m_pDesc;
      v14 = outputs->m_Size;
      if ( v12 == outputs->m_Memory.m_nAllocationCount )
      {
        v17 = this->m_Outputs.m_pData->m_Elements[v10].m_pDesc;
        CUtlMemory<EntityIOOutputDesc_t const*,int>::Grow(&outputs->m_Memory, 1);
        v14 = outputs->m_Size;
        m_pDesc = v17;
      }
      outputs->m_Size = v14 + 1;
      v11 = &outputs->m_Memory.m_pMemory[v12];
      if ( v11 != 0 )
        *v11 = m_pDesc;
      ++v10;
    }
    while ( v10 != m_Size );
  }
}


// CScriptComponent::GetEntityIOInputs  (line 639, @0x00000000030d1f60, libserver.so)  // inlines: AddToTail, AssignTo, CUtlSymbolLarge, CVariantBase, CopyConstruct<char const*>, Element, EnsureCapacity, Free, GetInputsForScriptClass<CVariantBase<CVariantDefaultAllocator>, char const*>, GetScriptClassName, GetVM, GrowMemory, IsInitialized, IsValid, LookupFunction, String, TempString, ToCStr, ToString, memcpy, operator[], ~CVariantBase
// calls: CScriptAccessorT<CDefScriptAccessorBase, true>::Call<char const*>, CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>, CVariantBase<CVariantDefaultAllocator>::Free, CEntitySystem::AllocPooledString, V_snprintf, VariantFieldTypeName, Warning, CUtlMemory<char const*, int>::Grow, CUtlVectorUltraConservative<HSCRIPT__**, CUtlVectorUltraConservativeAllocator>::AddToTail, memcpy, _Unwind_Resume
// callers: CEntityIdentity::GetEntityIOInputs
// strings: "%g %g %g %g", "No conversion from %s to string at the moment!\n", "%d %d %d %d", "false", "true", "GetInputsForScriptClass"
// globals: g_EntityScriptFramework, jpt_30D21BF, CVariantBase<CVariantDefaultAllocator>::ToString(void)::szBuf
void __fastcall CScriptComponent::GetEntityIOInputs(
        CScriptComponent *const this,
        CUtlVector<char const*,CUtlMemory<char const*,int> > *const inputs)
{
  const char *v3; // rbx
  UtlSymLargeId_t m_Id; // rax
  HSCRIPT hFunction; // rsi
  int v6; // ebx
  uint32 m_nGrowSize; // eax
  const char **v8; // rsi
  __int64 v9; // rax
  const char **v10; // rax
  unsigned int i; // ebx
  const char *v12; // rdx
  const char *v13; // r14
  __int64 m_Size; // r13
  int v15; // eax
  const char **v16; // rax
  const char *v17; // rax
  double m_float; // xmm0_8
  const char *v19; // rcx
  const char **m_pMemory; // r13
  const char **v21; // rax
  uint64 m_uint64; // [rsp+28h] [rbp-78h]
  int nCount; // [rsp+34h] [rbp-6Ch]
  HSCRIPT__ **src[2]; // [rsp+40h] [rbp-60h] BYREF
  ScriptVariant_t val; // [rsp+50h] [rbp-50h] BYREF
  ScriptVariant_t retVal; // [rsp+60h] [rbp-40h] BYREF

  v3 = "";
  val.m_type = 0;
  m_Id = this->m_scriptClassName.u.m_Id;
  val.m_flags = 0;
  hFunction = g_EntityScriptFramework.m_hScriptFunc_GetInputsForScriptClass.hFunction;
  val.m_uint64 = 0;
  if ( m_Id != 0 )
    v3 = m_Id;
  if ( g_EntityScriptFramework.m_hScriptFunc_GetInputsForScriptClass.hFunction != 0 )
    goto LABEL_4;
  if ( g_pScriptVM != 0 && g_EntityScriptFramework.m_hScope != 0 )
  {
    g_EntityScriptFramework.m_hScriptFunc_GetInputsForScriptClass.hFunction = (*(*g_pScriptVM + 144LL))(
                                                                                g_pScriptVM,
                                                                                "GetInputsForScriptClass",
                                                                                g_EntityScriptFramework.m_hScope,
                                                                                0);
    src[0] = &g_EntityScriptFramework.m_hScriptFunc_GetInputsForScriptClass.hFunction;
    CUtlVectorUltraConservative<HSCRIPT__ **,CUtlVectorUltraConservativeAllocator>::AddToTail(
      &g_EntityScriptFramework.m_FuncHandles,
      src);
    hFunction = g_EntityScriptFramework.m_hScriptFunc_GetInputsForScriptClass.hFunction;
    if ( g_EntityScriptFramework.m_hScriptFunc_GetInputsForScriptClass.hFunction == 0 )
    {
LABEL_8:
      CVariantBase<CVariantDefaultAllocator>::Free(&val);
      return;
    }
LABEL_4:
    retVal.m_type = 0;
    retVal.m_flags = 0;
    retVal.m_uint64 = 0;
    if ( CScriptAccessorT<CDefScriptAccessorBase,true>::Call<char const*>(
           &g_EntityScriptFramework,
           hFunction,
           &retVal,
           v3) == ScriptStatus_t::SCRIPT_ERROR )
    {
      CVariantBase<CVariantDefaultAllocator>::Free(&retVal);
    }
    else
    {
      CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&retVal, &val);
      CVariantBase<CVariantDefaultAllocator>::Free(&retVal);
      CVariantBase<CVariantDefaultAllocator>::Free(&retVal);
      if ( val.m_type == 31 )
      {
        m_uint64 = val.m_uint64;
        if ( val.m_uint64 != 0 )
        {
          nCount = (*(*g_pScriptVM + 376LL))(g_pScriptVM, val.m_uint64);
          v6 = nCount + inputs->m_Size;
          if ( v6 > inputs->m_Memory.m_nAllocationCount )
          {
            m_nGrowSize = inputs->m_Memory.m_nGrowSize;
            if ( (m_nGrowSize & 0x40000000) == 0 )
            {
              if ( (m_nGrowSize & 0xC0000000) != 0 )
              {
                m_pMemory = inputs->m_Memory.m_pMemory;
                v21 = (**g_pMemAlloc)(g_pMemAlloc, 8LL * v6);
                inputs->m_Memory.m_pMemory = v21;
                if ( m_pMemory != 0 )
                  memcpy(v21, m_pMemory, 8LL * inputs->m_Memory.m_nAllocationCount);
                inputs->m_Memory.m_nGrowSize &= 0x3FFFFFFFu;
              }
              else
              {
                v8 = inputs->m_Memory.m_pMemory;
                v9 = *g_pMemAlloc;
                if ( v8 != 0 )
                  v10 = (*(v9 + 8))(g_pMemAlloc, v8, 8LL * v6);
                else
                  v10 = (*v9)(g_pMemAlloc, 8LL * v6);
                inputs->m_Memory.m_pMemory = v10;
              }
              inputs->m_Memory.m_nAllocationCount = v6;
            }
          }
          if ( nCount > 0 )
          {
            for ( i = 0; i != nCount; ++i )
            {
              retVal.m_type = 0;
              retVal.m_flags = 0;
              retVal.m_uint64 = 0;
              if ( (*(*g_pScriptVM + 320LL))(g_pScriptVM, m_uint64, i, &retVal) != 0 )
              {
                if ( retVal.m_type == 30 )
                {
                  v12 = retVal.m_uint64;
                }
                else
                {
                  switch ( retVal.m_type )
                  {
                    case 0:
                      goto LABEL_36;
                    case 1:
                      m_float = retVal.m_float;
                      goto LABEL_40;
                    case 3:
                    case 0x27:
                      V_snprintf(
                        &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
                        512,
                        "%g %g %g",
                        *retVal.m_pszString,
                        *(retVal.m_uint64 + 4),
                        *(retVal.m_uint64 + 8));
                      break;
                    case 4:
                    case 0x1B:
                      V_snprintf(
                        &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
                        512,
                        "%g %g %g %g",
                        *retVal.m_pszString,
                        *(retVal.m_uint64 + 4),
                        *(retVal.m_uint64 + 8),
                        *(retVal.m_uint64 + 12));
                      break;
                    case 5:
                      V_snprintf(
                        &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
                        512,
                        "%d",
                        retVal.m_int);
                      break;
                    case 6:
                      v19 = "true";
                      if ( retVal.m_char == 0 )
                        v19 = "false";
                      V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%s", v19);
                      break;
                    case 8:
                      V_snprintf(
                        &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
                        512,
                        "%c",
                        retVal.m_char);
                      break;
                    case 9:
                      V_snprintf(
                        &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
                        512,
                        "%d %d %d %d",
                        retVal.m_char,
                        BYTE1(retVal.m_int),
                        BYTE2(retVal.m_uint),
                        HIBYTE(retVal.m_float));
                      break;
                    case 0x19:
                      V_snprintf(
                        &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
                        512,
                        "%g %g",
                        *retVal.m_pszString,
                        *(retVal.m_uint64 + 4));
                      break;
                    case 0x1A:
                      V_snprintf(
                        &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
                        512,
                        "%lld",
                        retVal.m_uint64);
                      break;
                    case 0x21:
                      V_snprintf(
                        &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
                        512,
                        "%llu",
                        retVal.m_uint64);
                      break;
                    case 0x22:
                      m_float = retVal.m_float64;
LABEL_40:
                      V_snprintf(
                        &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
                        512,
                        "%g",
                        m_float);
                      break;
                    case 0x25:
                      V_snprintf(
                        &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
                        512,
                        "%u",
                        retVal.m_int);
                      break;
                    default:
                      v17 = VariantFieldTypeName(retVal.m_type);
                      Warning("No conversion from %s to string at the moment!\n", v17);
LABEL_36:
                      CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf = 0;
                      break;
                  }
                  v12 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
                }
                CEntitySystem::AllocPooledString(src, g_pEntitySystem, v12);
                v13 = "";
                m_Size = inputs->m_Size;
                if ( src[0] != 0 )
                  v13 = src[0];
                v15 = inputs->m_Size;
                if ( m_Size == inputs->m_Memory.m_nAllocationCount )
                {
                  CUtlMemory<char const*,int>::Grow(&inputs->m_Memory, 1);
                  v15 = inputs->m_Size;
                }
                inputs->m_Size = v15 + 1;
                v16 = &inputs->m_Memory.m_pMemory[m_Size];
                if ( v16 != 0 )
                  *v16 = v13;
              }
              if ( (retVal.m_flags & 1) != 0 )
                (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, retVal.m_uint64);
            }
          }
          (*(*g_pScriptVM + 344LL))(g_pScriptVM, &val);
        }
      }
    }
    goto LABEL_8;
  }
  g_EntityScriptFramework.m_hScriptFunc_GetInputsForScriptClass.hFunction = 0;
  CVariantBase<CVariantDefaultAllocator>::Free(&val);
}


// CScriptComponent::Precache  (line 660, @0x00000000030d0a90, libserver.so)
// calls: CEntityScriptFramework::DispatchPrecache
// callers: CEntityInstance::Precache
// globals: g_EntityScriptFramework
void __fastcall CScriptComponent::Precache(
        CScriptComponent *const this,
        CEntityInstance *pEntity,
        const CEntityPrecacheContext *pContext)
{
  CEntityScriptFramework::DispatchPrecache(&g_EntityScriptFramework, pEntity, this, pContext);
}


// CScriptComponent::Spawn  (line 665, @0x00000000030d0570, libserver.so)
// calls: CEntityScriptFramework::DispatchSpawn
// callers: CEntityInstance::Spawn
// globals: g_EntityScriptFramework
void __fastcall CScriptComponent::Spawn(
        CScriptComponent *const this,
        CEntityInstance *pEntity,
        const CEntityKeyValues *pKeyValues)
{
  CEntityScriptFramework::DispatchSpawn(&g_EntityScriptFramework, pEntity, this, pKeyValues);
}


// CScriptComponent::Activate  (line 670, @0x00000000030cefc0, libserver.so)
// calls: CEntityScriptFramework::DispatchActivate
// callers: CEntityInstance::Activate
// globals: g_EntityScriptFramework
bool __fastcall CScriptComponent::Activate(CScriptComponent *const this, CEntityInstance *pEntity)
{
  return CEntityScriptFramework::DispatchActivate(&g_EntityScriptFramework, pEntity, this);
}


// CScriptComponent::UpdateOnRemove  (line 677, @0x00000000030cf710, libserver.so)
// calls: CEntityScriptFramework::DispatchUpdateOnRemove
// callers: CEntityInstance::UpdateOnRemove
// globals: g_EntityScriptFramework
void __fastcall CScriptComponent::UpdateOnRemove(CScriptComponent *const this, CEntityInstance *pEntity)
{
  CEntityScriptFramework::DispatchUpdateOnRemove(&g_EntityScriptFramework, pEntity, this);
}


// CScriptComponent::AcceptInput  (line 684, @0x00000000030cefe0, libserver.so)  // inlines: AssignTo, CVariantBase, Call<char const*, HSCRIPT__*, HSCRIPT__*>, CopyData, DispatchInput<bool, char const*, HSCRIPT__*, HSCRIPT__*>, Free, GetVM, IsInitialized, IsValid, LookupFunction, String, _V_strcmp, operator=, ~CVariantBase
// calls: CUtlVectorUltraConservative<HSCRIPT__**, CUtlVectorUltraConservativeAllocator>::AddToTail, CVariantBase<CVariantDefaultAllocator>::Free, VariantFieldTypeName, Warning, _Unwind_Resume
// callers: CEntityIdentity::AcceptInput
// strings: "DispatchInput", "false", "No conversion from %s to bool now\n", "true", "Invalid conversion : CString '%s' to bool\n"
// globals: g_EntityScriptFramework, jpt_30CF15A
__int64 __fastcall CScriptComponent::AcceptInput(
        CScriptComponent *const this,
        string_t inputName,
        HSCRIPT hArgumentTable)
{
  HSCRIPT m_hScope; // r12
  HSCRIPT__ **v4; // r14
  CScriptFuncHolder **p_p_m_hScriptFunc_DispatchInput; // rax
  HSCRIPT__ ***v7; // r12
  int v8; // r14d
  const char *v10; // rax
  HSCRIPT hFunction; // [rsp+10h] [rbp-88h]
  unsigned __int8 m_char; // [rsp+1Fh] [rbp-79h]
  CVariantBase<CVariantDefaultAllocator> v13; // [rsp+20h] [rbp-78h] BYREF
  CScriptFuncHolder *p_m_hScriptFunc_DispatchInput; // [rsp+30h] [rbp-68h] BYREF
  __int16 v15; // [rsp+38h] [rbp-60h]
  __int16 v16; // [rsp+3Ah] [rbp-5Eh]
  HSCRIPT v17; // [rsp+40h] [rbp-58h]
  __int16 v18; // [rsp+48h] [rbp-50h]
  __int16 v19; // [rsp+4Ah] [rbp-4Eh]
  HSCRIPT v20; // [rsp+50h] [rbp-48h]
  __int16 v21; // [rsp+58h] [rbp-40h]
  __int16 v22; // [rsp+5Ah] [rbp-3Eh]
  _BYTE v23[56]; // [rsp+60h] [rbp-38h] BYREF

  if ( g_pScriptVM == 0 )
    return 0;
  m_hScope = this->m_hScope;
  if ( this->m_hScope == 0 )
    return 0;
  v4 = "";
  if ( *inputName.u.m_Id != 0 )
    v4 = *inputName.u.m_Id;
  if ( g_EntityScriptFramework.m_hScriptFunc_DispatchInput.hFunction != 0 )
  {
    hFunction = g_EntityScriptFramework.m_hScriptFunc_DispatchInput.hFunction;
    goto LABEL_7;
  }
  if ( g_EntityScriptFramework.m_hScope != 0 )
  {
    g_EntityScriptFramework.m_hScriptFunc_DispatchInput.hFunction = (*(*g_pScriptVM + 144LL))(
                                                                      g_pScriptVM,
                                                                      "DispatchInput",
                                                                      g_EntityScriptFramework.m_hScope,
                                                                      0);
    p_m_hScriptFunc_DispatchInput = &g_EntityScriptFramework.m_hScriptFunc_DispatchInput;
    CUtlVectorUltraConservative<HSCRIPT__ **,CUtlVectorUltraConservativeAllocator>::AddToTail(
      &g_EntityScriptFramework.m_FuncHandles,
      &p_m_hScriptFunc_DispatchInput);
    hFunction = g_EntityScriptFramework.m_hScriptFunc_DispatchInput.hFunction;
    if ( g_EntityScriptFramework.m_hScriptFunc_DispatchInput.hFunction != 0 )
    {
LABEL_7:
      v13.m_uint64 = 0;
      v13.m_type = 0;
      p_p_m_hScriptFunc_DispatchInput = &p_m_hScriptFunc_DispatchInput;
      v13.m_flags = 0;
      do
      {
        *p_p_m_hScriptFunc_DispatchInput = 0;
        *(p_p_m_hScriptFunc_DispatchInput + 4) = 0;
        p_p_m_hScriptFunc_DispatchInput += 2;
        *(p_p_m_hScriptFunc_DispatchInput - 3) = 0;
      }
      while ( p_p_m_hScriptFunc_DispatchInput != v23 );
      if ( (v16 & 1) != 0 )
      {
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p_m_hScriptFunc_DispatchInput);
        v16 &= ~1u;
      }
      p_m_hScriptFunc_DispatchInput = v4;
      v15 = 30;
      if ( (v19 & 1) != 0 )
      {
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v17);
        v19 &= ~1u;
      }
      v17 = m_hScope;
      v18 = 31;
      if ( (v22 & 1) != 0 )
      {
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v20);
        v22 &= ~1u;
      }
      v20 = hArgumentTable;
      v21 = 31;
      v7 = v23;
      v8 = (*(*g_pScriptVM + 160LL))(
             g_pScriptVM,
             hFunction,
             &p_m_hScriptFunc_DispatchInput,
             3,
             &v13,
             g_EntityScriptFramework.m_hScope,
             1);
      do
      {
        v7 -= 2;
        if ( (*(v7 + 10) & 1) != 0 )
        {
          (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, *v7);
          *(v7 + 5) &= ~1u;
        }
        *v7 = 0;
        *(v7 + 4) = 0;
      }
      while ( v7 != &p_m_hScriptFunc_DispatchInput );
      if ( v8 == -1 )
      {
        CVariantBase<CVariantDefaultAllocator>::Free(&v13);
      }
      else
      {
        switch ( v13.m_type )
        {
          case 0:
            goto LABEL_30;
          case 1:
            m_char = v13.m_float != 0.0;
            break;
          case 5:
          case 0x25:
            m_char = v13.m_int != 0;
            break;
          case 6:
            m_char = v13.m_char;
            break;
          case 0x1A:
          case 0x21:
            m_char = v13.m_uint64 != 0;
            break;
          case 0x1E:
            if ( strcmp(v13.m_pszString, "0") == 0
              || strcmp(v13.m_pszString, "false") == 0
              || strcmp(v13.m_pszString, "no") == 0 )
            {
LABEL_30:
              m_char = 0;
            }
            else if ( strcmp(v13.m_pszString, "1") == 0
                   || strcmp(v13.m_pszString, "true") == 0
                   || strcmp(v13.m_pszString, "yes") == 0 )
            {
              m_char = 1;
            }
            else
            {
              Warning("Invalid conversion : CString '%s' to bool\n", v13.m_pszString);
            }
            break;
          case 0x22:
            m_char = v13.m_float64 != 0.0;
            break;
          default:
            v10 = VariantFieldTypeName(v13.m_type);
            Warning("No conversion from %s to bool now\n", v10);
            break;
        }
        if ( (v13.m_flags & 1) != 0 )
          (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v13.m_uint64);
      }
    }
  }
  else
  {
    g_EntityScriptFramework.m_hScriptFunc_DispatchInput.hFunction = 0;
  }
  return m_char;
}


